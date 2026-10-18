// ===== STITCHED CORPUS: sixtwo.fP =====
// handlers: 21  continuation blocks: 230  unresolved table targets: 0
// tables not in tables.json: ['0x101c98', '0x170c0', '0x18cc1d0', '0x18cc370', '0x18cc678', '0x18d2a40', '0x18d2a48', '0x18d2a50', '0x18d2a58', '0x18d2a60', '0x18d2a68', '0x18d2a70', '0x18d2a78', '0x18d2a80', '0x18d2a88', '0x18d2a98', '0x18d2aa0', '0x18d5ea0', '0x18d5ea8', '0x18d5eb0']

// ===== Lsixtwo/fP; YO ()V (handler @ image 18a93f520, runtime 6ffff254f520) =====

void FUN_18a93f520(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf)
      /* POOL[0x3806,0xbf]: ; | ipLAD | GLrDe | Lsixtwo/gg; | wLrDR | sixtwo/gg | baf | ()Lsixtwo/gc; | DJXfP | sixtwo/gc | aZg | ()Lsixtwo/gd; | ynopW | ePBBz | aZi | (Lsixtwo/gd;)Lsixtwo/gc; | nbZRc | ijbRx | bad | FalZQ | dhh | cnP | (FFF)Lsixtwo/mG; | NLFhJ | gx */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14da4,0x340)
      /* POOL[0x14da4,0x340]: XJ | (Lsixtwo/qn;)V | ofIip | aWm | aWl | sixtwo/fP | aWq | aWp | swcAS | yNCfW | GGbML | net/minecraft/class_2678 | net/minecraft/class_12079$class_10726 | aWz | method_60656 | (Lnet/minecraft/class_2960;)V | field_41123 | ([ILnet/minecraft/class_12079$class_12081;Lnet/minecraft/class_7920;)V | JLbAF | method_36950 | aWu | field_41122 | (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List; | aWw | aWx | aWv | field_1705 | Lnet/minecraft/class_329; | net/minecraft/class_329 | method_1743 | ()Lnet/minecraft/class_338; | net/minecraft/class_338 | method_1812 | DnMlW | aWB | cOZPq | vyRDw | aWA  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcd,6)
      /* POOL[0xcd,0x6]: ion | si */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf)
      /* POOL[0x3806,0xbf]: ; | ipLAD | GLrDe | Lsixtwo/gg; | wLrDR | sixtwo/gg | baf | ()Lsixtwo/gc; | DJXfP | sixtwo/gc | aZg | ()Lsixtwo/gd; | ynopW | ePBBz | aZi | (Lsixtwo/gd;)Lsixtwo/gc; | nbZRc | ijbRx | bad | FalZQ | dhh | cnP | (FFF)Lsixtwo/mG; | NLFhJ | gx */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a93f27a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c9380 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xa93f27d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f27d(void)

{
  FUN_190ddfc90();
  (*_DAT_1818c9418)();
  return;
}


// ----- block @ rva 0xa93f2d4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f2d4(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa93f2ea -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f2ea(void)

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


// ----- block @ rva 0xa93f323 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f323(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818c9438)();
  return;
}


// ----- block @ rva 0xa93f33c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f33c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117db0();
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


// ----- block @ rva 0xa93f370 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f370(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c93b8)();
  return;
}


// ----- block @ rva 0xa93f398 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f398(void)

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


// ----- block @ rva 0xa93f3ec -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f3ec(void)

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


// ----- block @ rva 0xa93f410 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f410(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818c9408)();
  return;
}


// ----- block @ rva 0xa93f430 -----

void FUN_18a93f430(void)

{
  return;
}


// ----- block @ rva 0xa93f438 -----

void FUN_18a93f438(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa93f56d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f56d(void)

{
  FUN_190ddfc90();
  (*_DAT_1818c94f8)();
  return;
}


// ----- block @ rva 0xa93f5a0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f5a0(void)

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


// ----- block @ rva 0xa93f5c4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f5c4(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa93f613 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f613(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818c9508)();
  return;
}


// ----- block @ rva 0xa93f660 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f660(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c94b8)();
  return;
}


// ----- block @ rva 0xa93f688 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f688(void)

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


// ----- block @ rva 0xa93f6dc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f6dc(void)

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


// ----- block @ rva 0xa93f700 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f700(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818c9508)();
  return;
}


// ----- block @ rva 0xa93f720 -----

void FUN_18a93f720(void)

{
  return;
}


// ----- block @ rva 0xa93f728 -----

void FUN_18a93f728(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa93f8ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93f8ef(void)

{
  FUN_190ddce00();
  (*_DAT_1818c95b8)();
  return;
}


// ----- block @ rva 0xa93f922 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a93f922(void)

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


// ----- block @ rva 0xa94719d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a94719d(void)

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


// ----- block @ rva 0xa9473aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9473aa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_1818c9c48)();
  return;
}


// ----- block @ rva 0xa947816 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a947816(void)

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


// ----- block @ rva 0xa947bf2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a947bf2(void)

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


// ----- block @ rva 0xa947e21 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a947e21(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818c9f18)();
  return;
}


// ----- block @ rva 0xa94825b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a94825b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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


// ----- block @ rva 0xa948547 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a948547(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c9948)();
  return;
}


// ----- block @ rva 0xa94866d -----

void FUN_18a94866d(void)

{
  return;
}


// ----- block @ rva 0xa9486d9 -----

void FUN_18a9486d9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa94882f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a94882f(void)

{
  FUN_190ddfc90();
  (*_DAT_1818cbd08)();
  return;
}


// ----- block @ rva 0xa948862 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a948862(void)

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


// ----- block @ rva 0xa948886 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a948886(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa94889c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a94889c(void)

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


// ----- block @ rva 0xa9488f0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9488f0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_1818cbdc8)();
  return;
}


// ----- block @ rva 0xa94895b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a94895b(void)

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


// ----- block @ rva 0xa9489af -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9489af(void)

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


// ----- block @ rva 0xa9489d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9489d3(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9489ee -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9489ee(void)

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


// ----- block @ rva 0xa948a42 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a948a42(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallBooleanMethodA /*0x138*/))();
  (*_DAT_1818cbd98)();
  return;
}


// ----- block @ rva 0xa948a8f -----

void FUN_18a948a8f(void)

{
  return;
}


// ----- block @ rva 0xa948a97 -----

void FUN_18a948a97(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa948c53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a948c8a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a948c53(void)

{
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa948ca8 -----

void FUN_18a948ca8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar1 = (**(code **)(unaff_R12 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00018a948cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818cc1d0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xa948d21 -----

void FUN_18a948d21(void)

{
  longlong unaff_RBP;
  undefined8 unaff_R12;
  uint unaff_R14D;
  
  *(undefined8 *)(unaff_RBP + 0x30) = unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x00018a948d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818cc370 + (ulonglong)(unaff_R14D >> 0x1f) * 8))
            ((ulonglong)(unaff_R14D >> 0x1f),&UNK_1818cc370,unaff_RBP + -0x3b);
  return;
}


// ----- block @ rva 0xa94ccd4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a94ccd4(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong unaff_R14;
  ulonglong uVar2;
  
  uVar1 = (~in_RAX + 0xa9) * ((param_1 ^ 0x8422238a) + (ulonglong)((uint)param_1 & 0x8422238a) * 2);
  uVar1 = (uVar1 | _DAT_183262b28) + (uVar1 & _DAT_183262b28);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262cd8 = func_0x00018a9717a0((uVar1 | 0x84222322) + (ulonglong)((uint)uVar1 & 0x84222322))
  ;
  _DAT_1832628a8 = (_DAT_1832628a8 ^ _DAT_183262cd8 & 0x7fffffffff) + 0xaf ^ 0xfa5a318c8252f814;
  _DAT_183262838 =
       (_DAT_183262838 * 0x24bc103df3daddcd ^ _DAT_1832628a8) + (_DAT_183262cd8 & 0x7fffffffff);
  _DAT_1832628c0 = _DAT_183262838 ^ _DAT_1832628a8;
  _DAT_183262ac8 = 0xaf;
  uVar1 = (~_DAT_1832628b8 + 0xea) *
          ((_DAT_183262820 ^ 0x84222325) + (ulonglong)((uint)_DAT_183262820 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183262998) + (uVar1 & _DAT_183262998);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262a68 = func_0x00018a9717a0((uVar1 | 0x842223cc) + (ulonglong)((uint)uVar1 & 0x842223cc))
  ;
  _DAT_183262ab8 = (_DAT_183262ab8 ^ _DAT_183262b58) - 0xe9 ^ 0x84f0d870dbc6f91a;
  _DAT_183262b50 = (_DAT_183262b50 * -0x7b3a2ea491f97e41 ^ _DAT_183262ab8) + _DAT_183262b58;
  _DAT_1832629c0 = _DAT_183262b50 ^ _DAT_183262ab8;
  _DAT_1832629e0 = 0x17;
  uVar1 = (_DAT_183262740 ^ _DAT_180f833a0) + _DAT_183262a70 + 0x8422233c;
  uVar2 = (_DAT_183262a70 ^ _UNK_180f833a8) + _DAT_183262740 + 0x17;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183262740 ^ _DAT_180f833a0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183262a70 ^ _UNK_180f833a8;
  _DAT_183262740 =
       func_0x00018a9717a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183262740 + 0x17) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183262a70 + 0x8422233c));
  uVar1 = _DAT_183262740 ^ 0x19;
  _DAT_183262a70 = _DAT_183262aa0 ^ uVar1 ^ 0x30;
  _DAT_183262b78 = (_DAT_183262b78 ^ uVar1) + 0x30 ^ 0x5450eeb7b2bdeef;
  _DAT_183262918 = (_DAT_183262918 * -0x74056c77b3f333ef ^ _DAT_183262b78) + uVar1;
  _DAT_183262728 = _DAT_183262918 ^ _DAT_183262b78;
  _DAT_183262928 = 0x30;
  uVar1 = (~_DAT_1832627a8 + 0x12) *
          ((_DAT_1832627e8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832627e8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183262b18) + (uVar1 & _DAT_183262b18);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832627a0 = func_0x00018a9717a0((uVar1 | 0x84222334) + (ulonglong)((uint)uVar1 & 0x84222334))
  ;
  uVar1 = _DAT_1832627a0 >> 1 | (ulonglong)((_DAT_1832627a0 & 1) != 0) << 0x3f;
  _DAT_183262a50 = (_DAT_183262a50 ^ uVar1) - 0x11 ^ 0x94d8ad43ce17364d;
  _DAT_1832627b8 = (_DAT_1832627b8 * -0x1c74b4a0a8cf6573 ^ _DAT_183262a50) + uVar1;
  _DAT_1832628a8 = _DAT_1832627b8 ^ _DAT_183262a50;
  _DAT_183262af8 = 0xef;
  uVar1 = (~_DAT_183262a20 + 0x12) *
          ((_DAT_183262cc8 ^ 0x84222315) + (ulonglong)((uint)_DAT_183262cc8 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_183262a60) + (uVar1 & _DAT_183262a60);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262ca0 = func_0x00018a9717a0((uVar1 | 0x84222304) + (ulonglong)((uint)uVar1 & 0x84222304))
  ;
  uVar1 = _DAT_183262ca0 >> 1 | _DAT_183262ca0;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = 0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183262ca0;
  _DAT_183262740 = _DAT_183262890 ^ uVar1 ^ 0x41;
  _DAT_1832629c8 = (_DAT_1832629c8 ^ uVar1) + 0x41 ^ 0xb8a985ddb09020ed;
  _DAT_183262b20 = (_DAT_183262b20 * -0x64aae7534f16d569 ^ _DAT_1832629c8) + uVar1;
  _DAT_183262bd8 = _DAT_183262b20 ^ _DAT_1832629c8;
  _DAT_183262888 = 0x41;
  _DAT_183262c18 = func_0x00018a9717a0(_DAT_183262998 ^ 0x20ff838affe1a8);
  uVar1 = (_DAT_183262c18 & 0xffffffffffff8000) + 0x41;
  _DAT_183262ad8 = _DAT_183262af8 ^ uVar1 ^ 0x130;
  _DAT_183262a98 = (uVar1 ^ _DAT_183262a98) + 0x130 ^ 0x9803faee3e3f2495;
  _DAT_183262878 =
       (_DAT_183262c18 & 0xffffffffffff8000) +
       (_DAT_183262878 * -0xfebb95febd251cf ^ _DAT_183262a98) + 0x41;
  _DAT_1832629b0 = _DAT_183262a98 ^ _DAT_183262878;
  _DAT_183262768 = _DAT_1832629a8 ^ 0x130;
  _DAT_183262c70 = 0x30;
  _DAT_1832629b8 = func_0x00018a9717a0(_DAT_183262798 + 0xffe2ff847dffe1ffU ^ 0xdd);
  uVar1 = (ulonglong)(~(uint)_DAT_1832629b8 & 0x30);
  _DAT_1832629c8 = _DAT_183262910 ^ uVar1 ^ 199;
  _DAT_1832628e0 = (_DAT_1832628e0 ^ uVar1) + 199 ^ 0x46f9c601cabf355e;
  _DAT_183262af8 = (_DAT_183262af8 * -0x3ccb605f5e126443 ^ _DAT_1832628e0) + uVar1;
  _DAT_183262a80 = _DAT_183262af8 ^ _DAT_1832628e0;
  _DAT_183262840 = 199;
  uVar1 = (~_DAT_1832627a0 + 0x6a) *
          ((_DAT_183262b40 ^ 0x842223e2) + (ulonglong)((uint)_DAT_183262b40 & 0x842223e2) * 2);
  uVar1 = (uVar1 | _DAT_183262780) + (uVar1 & _DAT_183262780);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262718 = func_0x00018a9717a0((uVar1 | 0x8422238b) + (ulonglong)((uint)uVar1 & 0x8422238b))
  ;
  uVar1 = _DAT_183262718 ^ 0x519f;
  _DAT_183262c68 = _DAT_183262700 ^ uVar1 ^ 0x130;
  _DAT_183262768 = (_DAT_183262768 ^ uVar1) + 0x130 ^ 0x9dd8f3ed35216b83;
  _DAT_183262ab8 = (_DAT_183262ab8 * -0x1c3e5684016c9d0b ^ _DAT_183262768) + uVar1;
  _DAT_183262838 = _DAT_183262ab8 ^ _DAT_183262768;
  _DAT_183262850 = 0x30;
  uVar1 = (~_DAT_183262a78 + 0x2a) *
          ((_DAT_1832629c8 ^ 0x8422238a) + (ulonglong)((uint)_DAT_1832629c8 & 0x8422238a) * 2);
  uVar1 = (uVar1 | _DAT_183262c30) + (uVar1 & _DAT_183262c30);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832628a0 = func_0x00018a9717a0((uVar1 | 0x842223a3) + (ulonglong)((uint)uVar1 & 0x842223a3))
  ;
  uVar1 = _DAT_1832628a0 << 0x12 | _DAT_1832628a0 >> 0x2e;
  _DAT_1832629a0 = _DAT_183262b18 ^ uVar1 ^ 0xd8;
  _DAT_183262718 = (_DAT_183262718 ^ uVar1) + 0xd8 ^ 0x50305d91b6b73223;
  _DAT_183262858 = (_DAT_183262858 * 0x6b01a6b7a35c01ff ^ _DAT_183262718) + uVar1;
  _DAT_183262970 = _DAT_183262858 ^ _DAT_183262718;
  _DAT_183262788 = 0xd8;
  _DAT_183262b70 = func_0x00018a9717a0(_DAT_183262a18 ^ 0xffdcff7b5d002156);
  uVar1 = (_DAT_183262b70 ^ 0xaf) & 0x7fffffffffffffff;
  _DAT_1832629b8 = (_DAT_1832629b8 ^ uVar1) + 0x29 ^ 0x2eaf46e677d25dd5;
  _DAT_1832627c8 = (_DAT_1832627c8 * -0x1d4ee75398f42e2b ^ _DAT_1832629b8) + uVar1;
  _DAT_183262b80 = _DAT_1832627c8 ^ _DAT_1832629b8;
  _DAT_183262c80 = 0x29;
  uVar1 = (~_DAT_183262c38 + 0x53) *
          ((_DAT_183262b10 ^ 0x842223a3) + (ulonglong)((uint)_DAT_183262b10 & 0x842223a3) * 2);
  uVar1 = (uVar1 | _DAT_183262a70) + (uVar1 & _DAT_183262a70);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262708 = func_0x00018a9717a0((uVar1 | 0x842223f1) + (ulonglong)((uint)uVar1 & 0x842223f1))
  ;
  uVar1 = (ulonglong)(((uint)_DAT_183262708 ^ 0x1000) >> 5 & 0x86);
  _DAT_183262ba8 = _DAT_183262bd8 ^ uVar1 ^ 0xd8;
  _DAT_183262c08 = (_DAT_183262c08 ^ uVar1) + 0xd8 ^ 0xd70d26f864b09c13;
  _DAT_1832629c0 = (_DAT_1832629c0 * 0x3ea681332054646d ^ _DAT_183262c08) + uVar1;
  _DAT_183262a80 = _DAT_1832629c0 ^ _DAT_183262c08;
  _DAT_183262ac0 = 0xd8;
  uVar1 = (~_DAT_183262960 + 0xd9) *
          ((_DAT_183262968 ^ 0x842223fd) + (ulonglong)((uint)_DAT_183262968 & 0x842223fd) * 2);
  uVar1 = (uVar1 | _DAT_183262778) + (uVar1 & _DAT_183262778);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262778 = func_0x00018a9717a0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_1832629f0 = _DAT_1832629f0 ^ _DAT_183262778 ^ 0xf220f0ea2cf8bf85;
  _DAT_183262940 = (_DAT_183262940 * 0x7ed0d13c07ebb737 ^ _DAT_1832629f0) + _DAT_183262778;
  _DAT_1832628d0 = _DAT_183262940 ^ _DAT_1832629f0;
  _DAT_183262a70 = 0;
  _DAT_183262b18 = _DAT_183262778;
  _DAT_183262838 = func_0x00018a9717a0(_DAT_183262870 ^ 0xffe30083f5001d24);
  uVar1 = _DAT_183262838 ^ 0x30;
  _DAT_183262a60 = _DAT_183262b60 ^ uVar1 ^ 0x30;
  _DAT_1832629d8 = (_DAT_1832629d8 ^ uVar1) + 0x30 ^ 0x764ece0b1e71e112;
  _DAT_1832629c8 = (_DAT_1832629c8 * -0x425941ad86cc8847 ^ _DAT_1832629d8) + uVar1;
  _DAT_1832629f0 = _DAT_1832629c8 ^ _DAT_1832629d8;
  _DAT_183262830 = 0x30;
  uVar1 = (_DAT_183262938 ^ _DAT_1803738e0) + _DAT_1832629d0 + 0x8422238a;
  uVar2 = (_DAT_1832629d0 ^ _UNK_1803738e8) + _DAT_183262938 + 0xff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183262938 ^ _DAT_1803738e0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832629d0 ^ _UNK_1803738e8;
  _DAT_183262a68 =
       func_0x00018a9717a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183262938 + 0xff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832629d0 + 0x8422238a));
  _DAT_183262b60 = (_DAT_183262b60 ^ _DAT_183262a68 ^ 0x50) + 0x50 ^ 0x609bbfe25ab06856;
  _DAT_183262830 = (_DAT_183262830 * 0x1a2c98cb6a6c8f8f ^ _DAT_183262b60) + (_DAT_183262a68 ^ 0x50);
  _DAT_183262ab0 = _DAT_183262830 ^ _DAT_183262b60;
  _DAT_183262b50 = 0x50;
  _DAT_183262960 = func_0x00018a9717a0(_DAT_183262b38 + 0x22ff7cc60021ffU ^ 0xda);
  uVar1 = _DAT_183262960 >> 1 | _DAT_183262960;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (ulonglong)
          (~((uint)_DAT_183262960 ^
            (0x40 - (uint)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 8) & 0xaf) * -0x2584537ea1d21585;
  _DAT_183262ce0 = _DAT_183262ce0 ^ uVar1 ^ 0xcbf371328880766f;
  _DAT_183262b50 = (_DAT_183262b50 * 0x4579c2fcb115f1c7 ^ _DAT_183262ce0) + uVar1;
  _DAT_183262a78 = _DAT_183262b50 ^ _DAT_183262ce0;
  _DAT_183262c30 = 0;
  uVar1 = ((_DAT_183262b90 ^ 0x84222315) + (ulonglong)((uint)_DAT_183262b90 & 0x84222315) * 2) *
          -_DAT_183262940;
  uVar1 = (uVar1 | _DAT_183262c10) + (uVar1 & _DAT_183262c10);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832629b8 = func_0x00018a9717a0((uVar1 | 0x84222315) + (ulonglong)((uint)uVar1 & 0x84222315))
  ;
  _DAT_183262c28 = _DAT_183262710 ^ _DAT_1832629b8 ^ 0x30;
  _DAT_183262998 = (_DAT_183262998 ^ _DAT_1832629b8) + 0x30 ^ 0xa10fba65cb0c68f1;
  _DAT_183262a30 = (_DAT_183262a30 * -0x7d6c5cac2e14d823 ^ _DAT_183262998) + _DAT_1832629b8;
  _DAT_183262908 = _DAT_183262a30 ^ _DAT_183262998;
  _DAT_183262a08 = 0x30;
  uVar1 = ((_DAT_183262a60 ^ 0x84222315) + (ulonglong)((uint)_DAT_183262a60 & 0x84222315) * 2) *
          -_DAT_183262b20;
  uVar1 = (uVar1 | _DAT_183262970) + (uVar1 & _DAT_183262970);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183262858 = func_0x00018a9717a0((uVar1 | 0x84222315) + (ulonglong)((uint)uVar1 & 0x84222315))
  ;
  uVar1 = _DAT_183262858 ^ 0x30;
  _DAT_183262a48 = _DAT_183262948 ^ uVar1 ^ 0x30;
  _DAT_1832627b8 = (_DAT_1832627b8 ^ uVar1) + 0x30 ^ 0x44c38f2cb20e1d07;
  _DAT_183262ab0 = (_DAT_183262ab0 * 0x41e3768a77098339 ^ _DAT_1832627b8) + uVar1;
  _DAT_183262a60 = _DAT_183262ab0 ^ _DAT_1832627b8;
  _DAT_183262c70 = 0x30;
  *(byte *)(unaff_R14 + -1) = *(byte *)(unaff_RBP + 0x80) | 0x30;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa94e23b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a94e25e */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a94e23b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa95420b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a95420b(void)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar6;
  ulonglong uVar7;
  longlong *unaff_R12;
  undefined4 unaff_R14D;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 unaff_XMM6 [16];
  ulonglong unaff_XMM11_Qa;
  ulonglong unaff_XMM11_Qb;
  ulonglong unaff_XMM13_Qa;
  ulonglong unaff_XMM13_Qb;
  ulonglong unaff_XMM14_Qa;
  ulonglong unaff_XMM14_Qb;
  ulonglong unaff_XMM15_Qa;
  ulonglong unaff_XMM15_Qb;
  
  *(undefined4 *)(unaff_RBP + 0x78) = unaff_R14D;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_ESI;
  lVar3 = (**(code **)(unaff_R12 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x58) = (int)*(char *)(lVar3 + *(int *)(unaff_RBP + 0x60));
  (**(code **)(unaff_R12 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar6 = *(uint *)(unaff_RBP + 0x50);
  uVar1 = *(uint *)(unaff_RBP + 0x58);
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar1 ^ 0x84222325;
  auVar8._8_4_ = uVar6;
  auVar8._12_4_ = 0;
  auVar9 = pshufb(auVar8 ^ unaff_XMM6,_DAT_1800170c0);
  uVar7 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar7 + _DAT_183262a40;
  if (auVar9._4_4_ < 0) {
    uVar4 = _DAT_183262980 ^ uVar7;
  }
  _DAT_183262808 = func_0x00018a9717a0(SUB161(auVar8 ^ unaff_XMM6,5) ^ uVar4);
  uVar7 = (ulonglong)uVar1 * (ulonglong)uVar6 ^ _DAT_183262808;
  uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar7 ^
          (ulonglong)uVar6;
  uVar6 = uVar6 & uVar1;
  _DAT_183262950 = (ulonglong)uVar6;
  _DAT_1832628d0 = (_DAT_1832628d0 ^ uVar4) + _DAT_183262950 ^ 0x64f447d1d96826fc;
  _DAT_183262898 = (_DAT_183262898 * -0x4b99985c477cd175 ^ _DAT_1832628d0) + uVar4;
  _DAT_183262b00 = _DAT_183262898 ^ _DAT_1832628d0;
  *(uint *)(unaff_RBP + 0x50) = uVar6;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
  lVar5 = _DAT_183262b68 + 0xf8f4f18;
  lVar3 = _DAT_1832627a0 + 0x3b75f224;
  uVar4 = (_DAT_1832627a0 ^ _DAT_1818cc670) + lVar5;
  uVar7 = (_DAT_183262b68 ^ _UNK_1818cc678) + lVar3;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832627a0 ^ _DAT_1818cc670;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183262b68 ^ _UNK_1818cc678;
  *(int *)(unaff_RBP + 0x40) = (int)*(undefined8 *)(unaff_RBP + 0x50);
  _DAT_183262ab0 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - lVar3 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  _DAT_183262960 = (_DAT_183262960 ^ _DAT_183262978) + 0xbbfdfe3d ^ 0x9352ba3b6da8caca;
  _DAT_183262b30 = (_DAT_183262b30 * 0x5bd2088338b0ec15 ^ _DAT_183262960) + _DAT_183262978;
  _DAT_1832629c0 = _DAT_183262b30 ^ _DAT_183262960;
  _DAT_183262858 = 0xbbfdfe3d;
  uVar4 = (_DAT_183262b00 ^ unaff_XMM13_Qa) + _DAT_183262ab8 + 0x78cc9223;
  uVar7 = (_DAT_183262ab8 ^ unaff_XMM13_Qb) + _DAT_183262b00 + 0x2baabfa6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183262b00 ^ unaff_XMM13_Qa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183262ab8 ^ unaff_XMM13_Qb;
  _DAT_183262c00 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183262b00 + 0x2baabfa6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262ab8 + 0x78cc9223));
  uVar4 = (_DAT_183262c00 << 0x19 | _DAT_183262c00 >> 0x27) * 0x2ed0ac86eaa2f007;
  _DAT_183262738 = (_DAT_183262738 ^ uVar4) + 0xd7440ea0 ^ 0xf8bbdca84230c4fe;
  _DAT_1832627d0 = (_DAT_1832627d0 * 0x3d78694c5859c4b9 ^ _DAT_183262738) + uVar4;
  _DAT_183262718 = _DAT_1832627d0 ^ _DAT_183262738;
  _DAT_1832629b8 = 0xd7440ea0;
  uVar4 = (unaff_XMM14_Qa ^ 0xd7440ea0) + _DAT_183262710 + 0x8422239a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ unaff_XMM14_Qa ^ 0xd7440ea0;
  uVar7 = ((longlong)(&UNK_18b805358 + (_DAT_183262710 ^ unaff_XMM14_Qb)) * 0x2000 |
          (ulonglong)(&UNK_18b805358 + (_DAT_183262710 ^ unaff_XMM14_Qb)) >> 0x33) ^
          _DAT_183262710 ^ unaff_XMM14_Qb;
  _DAT_1832627d0 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - 0x18b805358 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262710 + 0x8422239a));
  uVar4 = (_DAT_1832627d0 ^ 0xb43c44bf) & 0x7fffffffffffffff;
  _DAT_183262860 = _DAT_1832629c8 ^ uVar4 ^ 0xb43c4577;
  _DAT_183262cc0 = (_DAT_183262cc0 ^ uVar4) + 0xb43c4577 ^ 0xdca4dc9e37d38abd;
  _DAT_183262a38 = (_DAT_183262a38 * -0x7fe18b0f2ca9623b ^ _DAT_183262cc0) + uVar4;
  _DAT_183262818 = _DAT_183262a38 ^ _DAT_183262cc0;
  _DAT_1832627f8 = 0xb43c4577;
  _DAT_183262b58 = func_0x00018a9717a0(_DAT_1832627c0 + 0xc5000aea003affU ^ 0x20);
  uVar4 = _DAT_183262b58 - (_DAT_183262b58 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = _DAT_183262b58 ^ 0xb43c4577 ^ (ulonglong)((uint)bVar2 + (uint)bVar2);
  _DAT_183262aa8 = _DAT_1832629b0 ^ uVar4 ^ 0x1000000bf;
  _DAT_1832628a0 = (_DAT_1832628a0 ^ uVar4) + 0x1000000bf ^ 0x4a795baa5aa40367;
  _DAT_183262980 = (_DAT_183262980 * -0x6eae8ddeec706fad ^ _DAT_1832628a0) + uVar4;
  _DAT_183262b38 = _DAT_183262980 ^ _DAT_1832628a0;
  _DAT_183262740 = 0xbf;
  _DAT_183262798 = func_0x00018a9717a0(_DAT_183262a60 ^ 0xffb2ffa5c600ad67);
  uVar4 = ((_DAT_183262798 ^ 0x3f9c96ff) << 0x2c | (_DAT_183262798 ^ 0x3f9c96ff) >> 0x14) ^ 0xbf;
  _DAT_183262b88 = _DAT_183262868 ^ uVar4 ^ 0x3f9c971b;
  _DAT_183262810 = (_DAT_183262810 ^ uVar4) + 0x3f9c971b ^ 0xb9f31c8e4b890c9d;
  _DAT_183262bd0 = (_DAT_183262bd0 * 0x4d5f24acf209b2b1 ^ _DAT_183262810) + uVar4;
  _DAT_183262770 = _DAT_183262bd0 ^ _DAT_183262810;
  _DAT_183262c48 = 0x3f9c971b;
  _DAT_183262868 = func_0x00018a9717a0(_DAT_1832627b8 ^ 0xd4ff8585ff5cbc);
  uVar4 = ((_DAT_183262868 ^ 0xffffffbf) & 0x7ff) << 0x34 | (_DAT_183262868 ^ 0xffffffbf) >> 0xc;
  _DAT_183262af0 = _DAT_1832629f8 ^ uVar4 ^ 0x1000000bf;
  _DAT_183262ce8 = (_DAT_183262ce8 ^ uVar4) + 0x1000000bf ^ 0x66a2b14cad1aba80;
  _DAT_183262748 = (_DAT_183262748 * -0x55abf3a381733277 ^ _DAT_183262ce8) + uVar4;
  _DAT_183262890 = _DAT_183262748 ^ _DAT_183262ce8;
  _DAT_183262cc8 = 0xbf;
  _DAT_183262818 = func_0x00018a9717a0(_DAT_183262be0 ^ 0xff9b00aecfff915d);
  uVar4 = _DAT_183262818 * 0x15abf34eee5f000 | _DAT_183262818 * 0x430015abf34eee5f >> 0x34;
  _DAT_183262868 = _DAT_183262bb8 ^ uVar4 ^ 0x73508769;
  _DAT_1832628b0 = (_DAT_1832628b0 ^ uVar4) + 0x73508769 ^ 0x5f673249106fa598;
  _DAT_183262770 = (_DAT_183262770 * -0x91db6fbd19209d3 ^ _DAT_1832628b0) + uVar4;
  _DAT_1832629c0 = _DAT_183262770 ^ _DAT_1832628b0;
  _DAT_1832628e0 = 0x73508769;
  _DAT_1832627b8 = func_0x00018a9717a0(_DAT_183262ad0 ^ 0xff32ff2797ff7676);
  uVar4 = _DAT_1832627b8 & 0xffffffffffe00000;
  _DAT_183262740 = _DAT_183262998 ^ uVar4 ^ 0x193420cdd;
  _DAT_1832627d0 = (_DAT_1832627d0 ^ uVar4) + 0x193420cdd ^ 0x9741e53c6e0b7a7b;
  _DAT_183262838 = (_DAT_183262838 * -0x3fb5c6fecf5c4a09 ^ _DAT_1832627d0) + uVar4;
  _DAT_1832628b8 = _DAT_183262838 ^ _DAT_1832627d0;
  _DAT_183262ce8 = 0x93420cdd;
  _DAT_1832627a8 = func_0x00018a9717a0(_DAT_1832629a0 ^ 0xff4d009778008a13);
  uVar4 = _DAT_1832627a8 ^ 0xfffdfebd;
  uVar7 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4;
  _DAT_183262c20 = (_DAT_183262c20 ^ uVar4) + 0x6cb9f09d ^ 0x785419eaba240946;
  _DAT_183262bd0 = (_DAT_183262bd0 * 0x4e843a12651edba7 ^ _DAT_183262c20) + uVar4;
  _DAT_183262b90 = _DAT_183262bd0 ^ _DAT_183262c20;
  _DAT_1832629c8 = 0x6cb9f09d;
  uVar4 = (_DAT_183262cc0 ^ unaff_XMM11_Qa) + _DAT_183262bd0 + 0x3fdfdd18;
  uVar7 = (_DAT_183262bd0 ^ unaff_XMM11_Qb) + _DAT_183262cc0 + 0xd7440ea0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183262cc0 ^ unaff_XMM11_Qa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183262bd0 ^ unaff_XMM11_Qb;
  _DAT_183262b20 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183262cc0 + 0xd7440ea0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262bd0 + 0x3fdfdd18));
  _DAT_183262c28 = (_DAT_183262c28 ^ _DAT_183262c88 & 0x7ffffffff) + 0x93440e20 ^ 0xde7b0562acb4d0bb
  ;
  _DAT_183262c88 =
       (_DAT_183262c88 * -0x68d42bb264d073a5 ^ _DAT_183262c28) + (_DAT_183262c88 & 0x7ffffffff);
  _DAT_183262ba0 = _DAT_183262c88 ^ _DAT_183262c28;
  _DAT_183262b80 = 0x93440e20;
  uVar4 = (~_DAT_183262bd0 + 0x93420cde) *
          ((_DAT_1832628f8 ^ 0x17602ff8) + (ulonglong)((uint)_DAT_1832628f8 & 0x17602ff8) * 2);
  uVar4 = (uVar4 | _DAT_183262760) + (uVar4 & _DAT_183262760);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183262738 = func_0x00018a9717a0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_183262ae0 = _DAT_183262738 ^ 0x54b4ebd0e3db7a14;
  uVar4 = _DAT_183262ae0 >> 1 | _DAT_183262ae0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_183262ae0 =
       (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       _DAT_183262ae0;
  uVar4 = _DAT_183262ae0 - (_DAT_183262ae0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_183262ae0 =
       (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
       _DAT_183262ae0;
  _DAT_183262878 = _DAT_183262878 ^ _DAT_183262ae0 ^ 0x9f096ab01601f5e2;
  _DAT_183262ac0 = (_DAT_183262ac0 * -0x3d28127fb7d4468b ^ _DAT_183262878) + _DAT_183262ae0;
  _DAT_183262c28 = _DAT_183262ac0 ^ _DAT_183262878;
  _DAT_183262cf8 = 0;
  uVar4 = (_DAT_183262b08 ^ 0x8422239a) + _DAT_183262888 + 0x8422239a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183262b08 ^ 0x8422239a;
  uVar7 = ((_DAT_183262888 + _DAT_183262b08) * 0x2000 | _DAT_183262888 + _DAT_183262b08 >> 0x33) ^
          _DAT_183262888;
  _DAT_183262c68 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183262b08 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262888 + 0x8422239a));
  uVar4 = _DAT_183262c68 >> 1 | _DAT_183262c68;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183262c68;
  _DAT_183262ac0 = _DAT_183262a98 ^ uVar4 ^ 0xbf;
  _DAT_183262710 = (_DAT_183262710 ^ uVar4) + 0xbf ^ 0x4db5962a092ad225;
  _DAT_183262738 = (_DAT_183262738 * 0x3a9051b1e1fe9fb3 ^ _DAT_183262710) + uVar4;
  _DAT_1832628a0 = _DAT_183262738 ^ _DAT_183262710;
  _DAT_1832629f8 = 0xbf;
  _DAT_183262b80 = func_0x00018a9717a0(_DAT_183262a90 ^ 0xffe1ff4098ffdf94);
  _DAT_183262b30 = (_DAT_183262b30 ^ _DAT_183262b80 ^ 0xbbfdfe3d) + 0x440201c2 ^ 0x4f4115664b2ec230;
  _DAT_183262858 =
       (_DAT_183262858 * -0x40740c90504ee4ff ^ _DAT_183262b30) + (_DAT_183262b80 ^ 0xbbfdfe3d);
  _DAT_183262c50 = _DAT_183262858 ^ _DAT_183262b30;
  _DAT_183262c98 = 0x440201c2;
  uVar4 = (_DAT_1832628f0 ^ unaff_XMM15_Qa) + _DAT_183262760 + 0x3fdfdd18;
  uVar7 = (_DAT_183262760 ^ unaff_XMM15_Qb) + _DAT_1832628f0 + 0x440201c2;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832628f0 ^ unaff_XMM15_Qa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183262760 ^ unaff_XMM15_Qb;
  _DAT_183262c18 =
       func_0x00018a9717a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832628f0 + 0x440201c2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183262760 + 0x3fdfdd18));
  _DAT_183262920 = _DAT_183262920 ^ _DAT_183262c18 ^ 0x31f0f0cee0f0e6f8 ^ 0x60105878a64f7d56;
  _DAT_183262998 =
       (_DAT_183262998 * -0x15561bc42a8752eb ^ _DAT_183262920) +
       (_DAT_183262c18 ^ 0x31f0f0cee0f0e6f8);
  _DAT_183262a50 = _DAT_183262998 ^ _DAT_183262920;
  _DAT_183262ce8 = 0;
  uVar4 = ((_DAT_183262b58 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183262b58 & 0x8422239a) * 2) *
          -_DAT_183262a28;
  uVar4 = (uVar4 | _DAT_183262cf0) + (uVar4 & _DAT_183262cf0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183262cb8 = func_0x00018a9717a0((uVar4 | 0x8422239a) + (ulonglong)((uint)uVar4 & 0x8422239a))
  ;
  uVar4 = (ulonglong)((uint)_DAT_183262cb8 & 0xbf) ^ 0xbf;
  _DAT_183262708 = (_DAT_183262708 ^ uVar4) + 0xbf ^ 0x7affbe4516146bfb;
  _DAT_183262b90 = (_DAT_183262b90 * 0x6ee5f3b18128eef5 ^ _DAT_183262708) + uVar4;
  _DAT_183262c00 = _DAT_183262b90 ^ _DAT_183262708;
  _DAT_183262758 = 0xbf;
  _DAT_183262ae0 = func_0x00018a9717a0(_DAT_183262c50 ^ 0xffdeff83dd0021d8);
  _DAT_183262950 = _DAT_183262950 ^ _DAT_183262ae0 ^ 0xa467eaa2d70af16e;
  _DAT_183262868 = (_DAT_183262868 * -0x592a4bee54a0af9 ^ _DAT_183262950) + _DAT_183262ae0;
  _DAT_183262728 = _DAT_183262868 ^ _DAT_183262950;
  _DAT_183262ce8 = 0;
  uVar4 = ((_DAT_1832629d0 ^ 0x8422239a) + (ulonglong)((uint)_DAT_1832629d0 & 0x8422239a) * 2) *
          -_DAT_183262c48;
  uVar4 = (uVar4 | _DAT_1832628e8) + (uVar4 & _DAT_1832628e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183262ad8 = func_0x00018a9717a0((uVar4 | 0x8422239a) + (ulonglong)((uint)uVar4 & 0x8422239a))
  ;
  _DAT_183262848 = _DAT_183262b48 ^ _DAT_183262ad8 ^ 0xbf;
  _DAT_1832627a8 = (_DAT_1832627a8 ^ _DAT_183262ad8) + 0xbf ^ 0xded2e1a06d616bba;
  _DAT_183262aa8 = (_DAT_183262aa8 * -0x50359927dec755d5 ^ _DAT_1832627a8) + _DAT_183262ad8;
  _DAT_183262c78 = _DAT_183262aa8 ^ _DAT_1832627a8;
  _DAT_183262c18 = 0xbf;
  switch(0xbf < (int)uVar6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa95f061 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a95f061(void)

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


// ----- block @ rva 0xa95f286 -----

undefined8 thunk_FUN_18a948c8d(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xa95f35f -----

void FUN_18a95f35f(void)

{
  return;
}


// ----- block @ rva 0xa95f4b2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a95f4b2(longlong param_1)

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


// ----- block @ rva 0xa973a25 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a973a25(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xa973bce -----

void FUN_18a973bce(void)

{
  return;
}


// ----- block @ rva 0xa974031 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a974031(void)

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


// ----- block @ rva 0xa97627f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a97627f(void)

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


// ----- block @ rva 0xa9762ed -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9762ed(void)

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


// ----- block @ rva 0xa97646a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18a97405e(void)

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


// ----- block @ rva 0xa97664c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97664c(void)

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


// ----- block @ rva 0xa976f6b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a976f6b(void)

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


// ----- block @ rva 0xa976fb9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a976fb9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectArrayElement /*0x568*/))();
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


// ----- block @ rva 0xa977e12 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a977e12(void)

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


// ----- block @ rva 0xa977e6c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a977e6c(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa97838f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97838f(void)

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


// ----- block @ rva 0xa9783e3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9783e3(void)

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


// ----- block @ rva 0xa9786ab -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9786ab(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818d2c68)();
  return;
}


// ----- block @ rva 0xa9786dd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9786dd(void)

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


// ----- block @ rva 0xa97870d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97870d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectArrayElement /*0x568*/))();
  FUN_190dd72e0();
  (*_DAT_1818d3038)();
  return;
}


// ----- block @ rva 0xa978886 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a978886(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa978a42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a978a42(void)

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


// ----- block @ rva 0xa978c32 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a978c32(void)

{
  FUN_190ddce00();
  (*_DAT_1818d2d78)();
  return;
}


// ----- block @ rva 0xa978e47 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a978e47(void)

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


// ----- block @ rva 0xa9790f8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9790f8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818d2ed8)();
  return;
}


// ----- block @ rva 0xa979113 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a979113(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818d2e58)();
  return;
}


// ----- block @ rva 0xa979148 -----

void FUN_18a979148(void)

{
  return;
}


// ----- block @ rva 0xa979156 -----

void FUN_18a979156(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa9792c0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9792c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1818d3808)();
  return;
}


// ----- block @ rva 0xa979a67 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a979a67(void)

{
  (*_DAT_1818d3d18)();
  return;
}


// ----- block @ rva 0xa979fc0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a979fc0(void)

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


// ----- block @ rva 0xa97a2da -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a97a2da(void)

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


// ----- block @ rva 0xa97b12a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97b12a(void)

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


// ----- block @ rva 0xa97b83e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97b83e(void)

{
  (*_DAT_1818d3f28)();
  return;
}


// ----- block @ rva 0xa97b9cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97b9cb(void)

{
  (*_DAT_1818d3d18)();
  return;
}


// ----- block @ rva 0xa97badc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97badc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1818d3d48)();
  return;
}


// ----- block @ rva 0xa97bb42 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97bb42(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1818d3c78)();
  return;
}


// ----- block @ rva 0xa97bb9d -----

void FUN_18a97bb9d(void)

{
  return;
}


// ----- block @ rva 0xa97bbb1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97bbb1(void)

{
  (*_DAT_1818d3f08)();
  return;
}


// ----- block @ rva 0xa97bbbc -----

void FUN_18a97bbbc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa97e3d8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97e3d8(void)

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


// ----- block @ rva 0xa97e581 -----

void FUN_18a97e581(void)

{
  return;
}


// ----- block @ rva 0xa97fdba -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a97fdba(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_stack_00000030 + JNI->CallStaticObjectMethodA /*0x3a0*/))(in_stack_00000030,in_stack_00000038);
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


// ----- block @ rva 0xa97fff9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a97fff9(void)

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


// ----- block @ rva 0xa98015a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98015a(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (*in_RAX)(in_stack_00000030);
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


// ----- block @ rva 0xa9806a0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9806a0(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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


// ----- block @ rva 0xa9807cb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9807cb(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xc38,0x31);
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


// ----- block @ rva 0xa9819d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9819d0(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9821f7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18a983037(void)

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


// ----- block @ rva 0xa9823a4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18a983037(void)

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


// ----- block @ rva 0xa982ad7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a982ad7(void)

{
  char cVar1;
  longlong *in_RAX;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*in_RAX + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa98721e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98721e(void)

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


// ----- block @ rva 0xa987272 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a987272(void)

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


// ----- block @ rva 0xa987392 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a987392(void)

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


// ----- block @ rva 0xa9873e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9873e6(void)

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


// ----- block @ rva 0xa9875a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9875a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818d6218)();
  return;
}


// ----- block @ rva 0xa987620 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987620(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  (*_DAT_1818d64b8)();
  return;
}


// ----- block @ rva 0xa987893 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987893(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticIntMethodA /*0x418*/))();
  (*_DAT_1818d61f8)();
  return;
}


// ----- block @ rva 0xa987ab0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987ab0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_1818d6078)();
  return;
}


// ----- block @ rva 0xa987ad4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a987ad4(void)

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


// ----- block @ rva 0xa987cc2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987cc2(void)

{
  FUN_190dd72e0();
  (*_DAT_1818d63d8)();
  return;
}


// ----- block @ rva 0xa987d28 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a987d28(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1818d65a8)();
  return;
}


// ----- block @ rva 0xa9880e5 -----

void FUN_18a9880e5(void)

{
  return;
}


// ----- block @ rva 0xa9880f4 -----

void FUN_18a9880f4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa98826c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98826c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1818d6678)();
  return;
}


// ----- block @ rva 0xa98828b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98828b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000160;
  
  uStack0000000000000060 = in_stack_00000160;
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


// ----- block @ rva 0xa9887d4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9887d4(void)

{
  FUN_190de3220();
  (*_DAT_1818d6e78)();
  return;
}


// ----- block @ rva 0xa988c7d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a988c7d(void)

{
  (*_DAT_1818d74b8)();
  return;
}


// ----- block @ rva 0xa988ee0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a988ee0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1818d6fc8)();
  return;
}


// ----- block @ rva 0xa989d98 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a989d98(void)

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


// ----- block @ rva 0xa989ef3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a989ef3(void)

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


// ----- block @ rva 0xa989fbf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a989fbf(void)

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


// ----- block @ rva 0xa98a206 -----

void FUN_18a98a206(void)

{
  return;
}


// ----- block @ rva 0xa98a280 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98a280(void)

{
  FUN_190dd72e0();
  (*_DAT_1818d72f8)();
  return;
}


// ----- block @ rva 0xa98a3b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98a3b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1818d7458)();
  return;
}


// ----- block @ rva 0xa98aca4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98aca4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818d6cc8)();
  return;
}


// ----- block @ rva 0xa98adaa -----

void FUN_18a98adaa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa98af15 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98af15(void)

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


// ----- block @ rva 0xa98af73 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a98af73(void)

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


// ----- block @ rva 0xa98af88 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98af88(void)

{
  FUN_190dd72e0();
  (*_DAT_1818d76b8)();
  return;
}


// ----- block @ rva 0xa98afd1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98afd1(void)

{
  FUN_190dd9df0();
  (*_DAT_1818d7688)();
  return;
}


// ----- block @ rva 0xa98b19b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a98b19b(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa98b1b1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98b1b1(void)

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


// ----- block @ rva 0xa98b224 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98b224(void)

{
  FUN_190dd72e0();
  (*_DAT_1818d75f8)();
  return;
}


// ----- block @ rva 0xa98b24c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a98b24c(void)

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


// ----- block @ rva 0xa98b26d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98b26d(void)

{
  FUN_190dd9df0();
  (*_DAT_1818d76e8)();
  return;
}


// ----- block @ rva 0xa98b2c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a98b2c4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetBooleanField /*0x348*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818d76d8)();
  return;
}


// ----- block @ rva 0xa98b2eb -----

void FUN_18a98b2eb(void)

{
  return;
}


// ----- block @ rva 0xa98b2f5 -----

void FUN_18a98b2f5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa98b4bf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a98b515 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a98b4bf(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa990330 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a990330(void)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_R12D;
  ulonglong unaff_R14;
  uint unaff_XMM6_Da;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int in_stack_000000c0;
  
  uVar2 = ((_DAT_183264340 ^ in_RAX) + (ulonglong)((uint)in_RAX & (uint)_DAT_183264340) * 2) *
          (unaff_R14 - _DAT_183264328);
  uVar2 = (uVar2 | _DAT_183264120) + (uVar2 & _DAT_183264120);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183264188 =
       func_0x00018a9abb60((in_RAX ^ unaff_R14 | uVar2) +
                           (ulonglong)((uint)(in_RAX ^ unaff_R14) & (uint)uVar2));
  uVar2 = (_DAT_183264188 & 0xffffffff) * (ulonglong)_DAT_1818da320 +
          ((_DAT_183264188 & 0xffffffff) * (ulonglong)_DAT_1818da330 +
           (_DAT_183264188 >> 0x20) * (ulonglong)_DAT_1818da320 << 0x20);
  uVar1 = (uint)unaff_R14;
  uVar4 = unaff_R12D & uVar1;
  uVar6 = unaff_R12D ^ uVar1;
  uVar5 = uVar1 ^ unaff_XMM6_Da;
  uVar2 = (uVar2 ^ unaff_R12D) << 7 | uVar2 >> 0x39;
  uVar3 = ((ulonglong)uVar5 * (ulonglong)_DAT_1818da3f0 + _DAT_1818da400 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_1818da3e0 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_1818da3d0 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_1818da3c0 +
          ((ulonglong)(unaff_R12D | uVar1) * (ulonglong)_DAT_1818da3b0 << 0x20) +
          (ulonglong)(unaff_R12D | uVar1) * (ulonglong)_DAT_1818da3a0 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_1818da390 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_1818da380 +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1818da370 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1818da360 +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_1818da350 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_1818da340 +
          (-(((ulonglong)uVar5 * (ulonglong)_DAT_1818da4c0 + _DAT_1818da4d0 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_1818da4b0) -
          (((ulonglong)uVar6 * (ulonglong)_DAT_1818da4a0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_1818da490 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_1818da480 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_1818da470 +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1818da460 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1818da450 +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_1818da440 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_1818da430)) + 0x92e840eb99441fe3;
  _DAT_183264130 = _DAT_183264378 ^ uVar2 ^ uVar3;
  _DAT_1832642b8 = (_DAT_1832642b8 ^ uVar2) + uVar3 ^ 0xa506c414a24fb5a4;
  _DAT_183264220 = (_DAT_183264220 * 0x4dd3055a414fe25f ^ _DAT_1832642b8) + uVar2 ^ _DAT_1832642b8;
  _DAT_183264268 = uVar3 & 0xffffffff;
  switch((int)uVar3 < in_stack_000000c0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9914d5 -----

void thunk_FUN_18a98b647(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xa991f99 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a991f99(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000068;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000068 < 0 || iVar1 <= in_stack_00000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa992438 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a992470 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a992438(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa9925c0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a9925f6 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a9925c0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa9925fe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a992638 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a9925fe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa9a8f6b -----

void thunk_FUN_18a98d5dd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xa9aae27 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9aae27(void)

{
  undefined1 uVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  uVar1 = FUN_190dc1be0(0x94a,&stack0x00000118);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9ab94e -----

void FUN_18a9ab94e(void)

{
  return;
}


// ----- block @ rva 0xa9ab9ba -----

void FUN_18a9ab9ba(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0xa9abc15 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abc15(void)

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


// ----- block @ rva 0xa9abc73 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9abc73(void)

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


// ----- block @ rva 0xa9abc88 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abc88(void)

{
  FUN_190dd72e0();
  (*_DAT_1818db088)();
  return;
}


// ----- block @ rva 0xa9abd28 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abd28(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818dafb8)();
  return;
}


// ----- block @ rva 0xa9abd8c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9abd8c(void)

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


// ----- block @ rva 0xa9abe1a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abe1a(void)

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


// ----- block @ rva 0xa9abe6c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9abe6c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1841196f0();
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


// ----- block @ rva 0xa9abeea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abeea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818db038)();
  return;
}


// ----- block @ rva 0xa9abf24 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9abf24(void)

{
  FUN_190dd72e0();
  (*_DAT_1818daf48)();
  return;
}


// ----- block @ rva 0xa9abf4c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9abf4c(void)

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


// ----- block @ rva 0xa9abfeb -----

void FUN_18a9abfeb(void)

{
  return;
}


// ----- block @ rva 0xa9abff5 -----

void FUN_18a9abff5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa9ac0fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac0fd(void)

{
  FUN_190ddfc90();
  (*_DAT_1818db128)();
  return;
}


// ----- block @ rva 0xa9ac130 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac130(void)

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


// ----- block @ rva 0xa9ac154 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac154(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9ac16a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac16a(void)

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


// ----- block @ rva 0xa9ac1a3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac1a3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818db0f8)();
  return;
}


// ----- block @ rva 0xa9ac1bc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac1bc(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818db0f8)();
  return;
}


// ----- block @ rva 0xa9ac1dc -----

void FUN_18a9ac1dc(void)

{
  return;
}


// ----- block @ rva 0xa9ac24a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac24a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1818db158)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0xa9ac256 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac256(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0xa9ac273 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac273(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1818db168)();
  return;
}


// ----- block @ rva 0xa9ac27c -----

void FUN_18a9ac27c(void)

{
  return;
}


// ----- block @ rva 0xa9ac2ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac2ed(void)

{
  FUN_190ddfc90();
  (*_DAT_1818db1d8)();
  return;
}


// ----- block @ rva 0xa9ac320 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac320(void)

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


// ----- block @ rva 0xa9ac344 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9ac344(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9ac35a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac35a(void)

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


// ----- block @ rva 0xa9ac393 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac393(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818db198)();
  return;
}


// ----- block @ rva 0xa9ac3ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac3ac(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818db1c8)();
  return;
}


// ----- block @ rva 0xa9ac3cc -----

void FUN_18a9ac3cc(void)

{
  return;
}


// ----- block @ rva 0xa9ac3d4 -----

void FUN_18a9ac3d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa9ac557 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9ac557(void)

{
  FUN_190ddce00();
  (*_DAT_1818dbb88)();
  return;
}


// ----- block @ rva 0xa9afaf2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9afaf2(void)

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


// ----- block @ rva 0xa9b0bf7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b0bf7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_1818db9d8)();
  return;
}


// ----- block @ rva 0xa9b0f92 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b0f92(void)

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


// ----- block @ rva 0xa9b106b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b106b(void)

{
  (*_DAT_1818dbc48)();
  return;
}


// ----- block @ rva 0xa9b10fe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b10fe(void)

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


// ----- block @ rva 0xa9b1261 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b1261(void)

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


// ----- block @ rva 0xa9b12f3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b12f3(void)

{
  (*_DAT_1818db8d8)();
  return;
}


// ----- block @ rva 0xa9b13bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b13bf(void)

{
  (*_DAT_1818dbb18)();
  return;
}


// ----- block @ rva 0xa9b1633 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b1633(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_1818dbb68)();
  return;
}


// ----- block @ rva 0xa9b1642 -----

void FUN_18a9b1642(void)

{
  return;
}


// ----- block @ rva 0xa9b16ae -----

void FUN_18a9b16ae(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa9b18c7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b18c7(void)

{
  FUN_190ddce00();
  (*_DAT_1818dd1f8)();
  return;
}


// ----- block @ rva 0xa9b4c3d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b4c3d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818dd0b8)();
  return;
}


// ----- block @ rva 0xa9b4cba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b4cba(void)

{
  FUN_190dd72e0();
  (*_DAT_1818dcf08)();
  return;
}


// ----- block @ rva 0xa9b4e01 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b4e01(void)

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


// ----- block @ rva 0xa9b50b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b50b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818dce28)();
  return;
}


// ----- block @ rva 0xa9b5401 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b5401(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1818dce58)();
  return;
}


// ----- block @ rva 0xa9b55cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b55cb(void)

{
  (*_DAT_1818dd3f8)();
  return;
}


// ----- block @ rva 0xa9b56b5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b56b5(void)

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


// ----- block @ rva 0xa9b58f9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b58f9(void)

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


// ----- block @ rva 0xa9b5c41 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b5c41(void)

{
  (*_DAT_1818dd398)();
  return;
}


// ----- block @ rva 0xa9b5ede -----

void FUN_18a9b5ede(void)

{
  return;
}


// ----- block @ rva 0xa9b5f60 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b5f60(void)

{
  (*_DAT_1818dd408)();
  return;
}


// ----- block @ rva 0xa9b5f6b -----

void FUN_18a9b5f6b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa9b6154 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b6154(void)

{
  FUN_190ddce00();
  (*_DAT_1818de088)();
  return;
}


// ----- block @ rva 0xa9b6187 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b6187(void)

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


// ----- block @ rva 0xa9b61ab -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b61ab(void)

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


// ----- block @ rva 0xa9b620a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b620a(void)

{
  (*_DAT_1818de058)(_DAT_1832650b8);
  return;
}


// ----- block @ rva 0xa9b621e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b621e(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulonglong uVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  ulonglong uVar44;
  uint uVar46;
  undefined1 auVar45 [16];
  ulonglong uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulonglong uStack0000000000000040;
  
  uVar4 = _DAT_1818ddfe8;
  uVar6 = _DAT_1818ddfe0;
  uVar3 = _DAT_1818ddfe0 ^ 0x84222325 ^ in_RAX;
  lVar5 = (_DAT_1818ddfe0 ^ 0x84222325) + param_1;
  uVar22 = uVar3 + lVar5;
  uVar29 = (param_1 ^ 0x9d908be03f7c0a56) + in_RAX + 0x9d908be03f7c0a56;
  uVar3 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar3;
  uVar22 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ param_1 ^ 0x9d908be03f7c0a56;
  _DAT_183264f50 =
       func_0x00018a9b9450((uVar22 << 0x1d | uVar22 >> 0x23) - (in_RAX + 0x9d908be03f7c0a56) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar9 = uVar6 | 0x9d908be03f7c0a56;
  uVar3 = uVar6 ^ _DAT_183264f50 ^ uVar9;
  _DAT_183264f88 = (_DAT_183264f88 ^ uVar3) + uVar9 ^ 0xee9a42928e6444f4;
  _DAT_183264e38 = (_DAT_183264e38 * 0x7630252b4e98b175 ^ _DAT_183264f88) + uVar3;
  _DAT_183264e90 = _DAT_183264e38 ^ _DAT_183264f88;
  uVar3 = ((_DAT_183264d10 ^ uVar4 ^ 0x84222325) + ((uVar4 ^ 0x84222325) & _DAT_183264d10) * 2) *
          (0x506255210cacf65 - _DAT_183264f38);
  uVar3 = (uVar3 | _DAT_183265050) + (uVar3 & _DAT_183265050);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183264fc8 = uVar9;
  _DAT_183264f60 =
       func_0x00018a9b9450((uVar4 ^ 0x506255294e8ec40 | uVar3) +
                           (uVar3 & (uVar4 ^ 0x506255294e8ec40)));
  uVar3 = uVar4 * 0x506255210cacf65 ^ _DAT_183264f60;
  uVar3 = uVar3 << 2 | uVar3 >> 0x3e;
  uVar22 = uVar4 + 0x506255210cacf65 + (uVar4 & 0x506255210cacf65) * -2;
  _DAT_183264e28 = (_DAT_183264e28 ^ uVar3) + uVar22 ^ 0xf5d3280119eb9593;
  _DAT_183264d08 = (_DAT_183264d08 * -0x2a520c64669434a3 ^ _DAT_183264e28) + uVar3;
  _DAT_183264dc0 = _DAT_183264d08 ^ _DAT_183264e28;
  lVar5 = uVar6 * uVar6;
  uVar29 = lVar5 * -0x3daa1e38d021dbdf;
  auVar14._8_8_ = uVar29;
  auVar14._0_8_ = _DAT_1818de230;
  uVar8 = lVar5 * 0x3daa1e38d021dbdf;
  auVar11 = pshufb(auVar14 ^ _DAT_1818de240,_DAT_1800170c0);
  uVar6 = auVar11._8_8_ + auVar11._0_8_;
  uVar3 = uVar6 + _DAT_183264f38;
  if (auVar11._4_4_ < 0) {
    uVar3 = _DAT_183264f68 ^ uVar6;
  }
  _DAT_1832650a8 = uVar22;
  _DAT_183264e10 = func_0x00018a9b9450(SUB161(auVar14 ^ _DAT_1818de240,5) ^ uVar3);
  uVar10 = (uint)(uVar29 >> 0x20);
  auVar31._8_4_ = (int)uVar29;
  auVar31._0_8_ = uVar29;
  auVar31._12_4_ = uVar10;
  uVar39 = SUB164(auVar31 & _DAT_1818de250,0);
  uVar6 = SUB168(auVar31 & _DAT_1818de250,0);
  uVar21 = SUB164(auVar31 | _DAT_1818de250,0);
  uVar44 = SUB168(auVar31 | _DAT_1818de250,0);
  uVar30 = SUB164(_DAT_1818de250 ^ auVar31,0);
  uVar3 = SUB168(_DAT_1818de250 ^ auVar31,0);
  auVar45._8_4_ = 0xffffffff;
  auVar45._0_8_ = 0xffffffffffffffff;
  auVar45._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar31 ^ auVar45,0);
  uVar44 = (ulonglong)_DAT_1818de270 * (ulonglong)uVar30 +
           ((uVar3 >> 0x20) * (ulonglong)_DAT_1818de270 +
            (ulonglong)_DAT_1818de260 * (ulonglong)uVar30 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_1818de270 + uVar29 +
           ((uVar6 >> 0x20) * (ulonglong)_DAT_1818de270 +
            (ulonglong)uVar39 * (ulonglong)_DAT_1818de260 << 0x20) +
           (_DAT_1818de280 & 0xffffffff) * (ulonglong)uVar21 +
           ((_DAT_1818de290 & 0xffffffff) * (ulonglong)uVar21 +
            (uVar44 >> 0x20) * (_DAT_1818de280 & 0xffffffff) << 0x20) +
           (-((ulonglong)uVar20 * (ulonglong)_DAT_1818de340 +
             ((ulonglong)_DAT_1818de350 * (ulonglong)uVar20 +
              (SUB168(auVar31 ^ auVar45,0) >> 0x20) * (ulonglong)_DAT_1818de340 << 0x20)) -
           ((ulonglong)uVar30 * (ulonglong)_DAT_1818de320 +
            ((ulonglong)_DAT_1818de330 * (ulonglong)uVar30 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_1818de320 << 0x20) +
            (ulonglong)uVar21 * (ulonglong)_DAT_1818de300 +
            ((ulonglong)_DAT_1818de310 * (ulonglong)uVar21 +
             (uVar44 >> 0x20) * (ulonglong)_DAT_1818de300 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_1818de2e0 +
           ((ulonglong)_DAT_1818de2f0 * (ulonglong)uVar39 +
            (uVar6 >> 0x20) * (ulonglong)_DAT_1818de2e0 << 0x20) +
           (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de2c0 +
           ((ulonglong)_DAT_1818de2d0 * (uVar29 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de2c0 << 0x20))) + _DAT_1818de360;
  _DAT_183265088 = _DAT_183264ea8 ^ _DAT_183264e10 ^ uVar44;
  _DAT_183264df8 = (_DAT_183264df8 ^ _DAT_183264e10) + uVar44 ^ 0x95648ba7aed15b69;
  _DAT_183264f78 = (_DAT_183264f78 * -0x6ab680fa140838c5 ^ _DAT_183264df8) + _DAT_183264e10;
  _DAT_183264d38 = _DAT_183264f78 ^ _DAT_183264df8;
  uVar3 = uVar44 ^ 0x84222325 ^ _DAT_183264d28;
  lVar7 = (uVar44 ^ 0x84222325) + _DAT_183264d80;
  lVar5 = _DAT_183264d28 + lVar5 * 0x3daa1e38d021dbdf;
  uVar6 = uVar3 + lVar7;
  uVar29 = (uVar8 ^ _DAT_183264d80) + lVar5;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3;
  uVar6 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar8 ^ _DAT_183264d80;
  _DAT_183264f28 = uVar44;
  _DAT_183264e08 =
       func_0x00018a9b9450((uVar6 << 0x1d | uVar6 >> 0x23) - lVar5 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar3 = _DAT_183264e08 ^ uVar44;
  uVar39 = (uint)(uVar44 >> 0x20);
  auVar32._8_4_ = (int)uVar44;
  auVar32._0_8_ = uVar44;
  auVar32._12_4_ = uVar39;
  uVar10 = (uint)(uVar8 >> 0x20);
  auVar12._8_4_ = (int)uVar8;
  auVar12._0_8_ = uVar8;
  auVar12._12_4_ = uVar10;
  uStack0000000000000040 = uVar44 | uVar8;
  auVar11._8_8_ = _UNK_18001a718;
  auVar11._0_8_ = _DAT_18001a710;
  uVar30 = SUB164(auVar32 & auVar12,0);
  uVar34 = SUB168(auVar32 & auVar12,0);
  uVar20 = SUB164(auVar32 ^ auVar12,0);
  uVar21 = SUB164(auVar12 ^ auVar11,0);
  uVar29 = SUB168(auVar12 ^ auVar11,0);
  uVar6 = uVar44 ^ _DAT_18001a710;
  uVar8 = (((ulonglong)_DAT_1818de3b0 * (ulonglong)uVar21 +
            ((ulonglong)_DAT_1818de400 * (ulonglong)uVar21 +
             (uVar29 >> 0x20) * (ulonglong)_DAT_1818de3b0 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1818de3e0 +
            ((ulonglong)_DAT_1818de3f0 * (ulonglong)uVar20 +
             (SUB168(auVar32 ^ auVar12,0) >> 0x20) * (ulonglong)_DAT_1818de3e0 << 0x20) +
           (ulonglong)_DAT_1818de3c0 * (ulonglong)uVar30 +
           ((ulonglong)_DAT_1818de3d0 * (ulonglong)uVar30 +
            (uVar34 >> 0x20) * (ulonglong)_DAT_1818de3c0 << 0x20) +
           (ulonglong)_DAT_1818de390 * (uVar8 & 0xffffffff) +
           ((ulonglong)_DAT_1818de3a0 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de390 << 0x20) +
           (ulonglong)_DAT_1818de370 * (uVar44 & 0xffffffff) +
           ((ulonglong)_DAT_1818de380 * (uVar44 & 0xffffffff) +
            (ulonglong)uVar39 * (ulonglong)_DAT_1818de370 << 0x20)) -
          ((ulonglong)uVar21 * (_DAT_1818de4b0 & 0xffffffff) +
           ((ulonglong)_DAT_1818de4c0 * (ulonglong)uVar21 +
            (uVar29 >> 0x20) * (_DAT_1818de4b0 & 0xffffffff) << 0x20) +
           (uStack0000000000000040 & 0xffffffff) * (ulonglong)_DAT_1818de480 +
           ((uStack0000000000000040 >> 0x20) * (ulonglong)_DAT_1818de480 +
            (ulonglong)_DAT_1818de470 * (uStack0000000000000040 & 0xffffffff) << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1818de480 +
           ((uVar34 >> 0x20) * (ulonglong)_DAT_1818de480 +
            (ulonglong)uVar30 * (ulonglong)_DAT_1818de470 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818de450 +
           ((ulonglong)_DAT_1818de460 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de450 << 0x20) +
           (uVar44 & 0xffffffff) * (ulonglong)_DAT_1818de430 +
           ((ulonglong)_DAT_1818de440 * (uVar44 & 0xffffffff) +
            (ulonglong)uVar39 * (ulonglong)_DAT_1818de430 << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_1818de490 +
          ((ulonglong)_DAT_1818de4a0 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_DAT_1818de490 << 0x20))) + _DAT_1818de4d0;
  _DAT_183264e50 = _DAT_183264db8 ^ uVar3 ^ uVar8;
  _DAT_1832650c0 = (_DAT_1832650c0 ^ uVar3) + uVar8 ^ 0x347aef1deb1a77aa;
  _DAT_183264ee8 = (_DAT_183264ee8 * -0x1a52e5a8297b5dc1 ^ _DAT_1832650c0) + uVar3;
  _DAT_183265010 = _DAT_183264ee8 ^ _DAT_1832650c0;
  lVar5 = uVar4 * uVar4;
  uVar29 = lVar5 * -0x4797d5c1f6b66b64;
  auVar13._8_8_ = uVar29;
  auVar13._0_8_ = _DAT_18001b640;
  auVar14 = pshufb(auVar13 ^ _DAT_1818de4e0,_DAT_1800170c0);
  uVar6 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar6 + _DAT_183264d98;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_1832650b8 ^ uVar6;
  }
  _DAT_1832650f0 = uVar8;
  _DAT_183265020 = func_0x00018a9b9450(uVar3 ^ 0x11);
  uVar3 = _DAT_183265020 >> 1 | _DAT_183265020;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183265020;
  uVar6 = lVar5 * 0x4797d5c1f6b66b64;
  _DAT_1832650a8 = (_DAT_1832650a8 ^ uVar3) + lVar5 * 0x4797d5c1f6b66b64 ^ 0xe19242786a027dc6;
  _DAT_183264d98 = (_DAT_183264d98 * -0x76c822ae3699e5b9 ^ _DAT_1832650a8) + uVar3;
  _DAT_183264fd0 = _DAT_183264d98 ^ _DAT_1832650a8;
  uVar3 = uVar8 ^ 0x84222325 ^ _DAT_183264ee8;
  lVar7 = (uVar8 ^ 0x84222325) + _DAT_183265050;
  uVar44 = uVar3 + lVar7;
  uVar34 = (uVar29 ^ _DAT_183265050) + _DAT_183264ee8 + uVar29;
  uVar3 = (uVar44 * 0x2000 | uVar44 >> 0x33) ^ uVar3;
  uVar44 = (uVar34 * 0x2000 | uVar34 >> 0x33) ^ uVar29 ^ _DAT_183265050;
  _DAT_183264e98 = uVar6;
  _DAT_183264fb0 =
       func_0x00018a9b9450((uVar44 << 0x1d | uVar44 >> 0x23) - (_DAT_183264ee8 + uVar29) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar46 = (uint)(uVar8 >> 0x20);
  auVar33._8_4_ = (int)uVar8;
  auVar33._0_8_ = uVar8;
  auVar33._12_4_ = uVar46;
  uVar10 = (uint)(uVar29 >> 0x20);
  auVar40._8_4_ = (int)uVar29;
  auVar40._0_8_ = uVar29;
  auVar40._12_4_ = uVar10;
  auVar50._8_4_ = 0xffffffff;
  auVar50._0_8_ = 0xffffffffffffffff;
  auVar50._12_4_ = 0xffffffff;
  uVar30 = SUB164(auVar40 ^ auVar50,0);
  auVar48._8_4_ = 0xffffffff;
  auVar48._0_8_ = 0xffffffffffffffff;
  auVar48._12_4_ = 0xffffffff;
  uVar43 = SUB164(auVar33 & auVar40,0);
  uVar21 = SUB164(auVar33 | auVar40,0);
  uVar20 = SUB164(auVar33 ^ auVar40,0);
  uVar39 = SUB164(auVar33 ^ auVar50,0);
  uVar44 = (((ulonglong)uVar30 * (ulonglong)_DAT_1818de510 +
             ((SUB168(auVar40 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_1818de510 +
              (ulonglong)_DAT_1818de4f0 * (ulonglong)uVar30 << 0x20) +
             (ulonglong)_DAT_1818de500 * (uVar29 & 0xffffffff) +
             ((ulonglong)uVar10 * (ulonglong)_DAT_1818de500 +
              (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de4f0 << 0x20) + uVar8) -
           ((ulonglong)uVar39 * (ulonglong)_DAT_1818de580 +
            ((ulonglong)_DAT_1818de5f0 * (ulonglong)uVar39 +
             (SUB168(auVar33 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_1818de580 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1818de5d0 +
           ((ulonglong)_DAT_1818de5e0 * (ulonglong)uVar20 +
            (SUB168(auVar33 ^ auVar40,0) >> 0x20) * (ulonglong)_DAT_1818de5d0 << 0x20) +
           (ulonglong)uVar21 * (ulonglong)_DAT_1818de5b0 +
           ((ulonglong)_DAT_1818de5c0 * (ulonglong)uVar21 +
            (SUB168(auVar33 | auVar40,0) >> 0x20) * (ulonglong)_DAT_1818de5b0 << 0x20) +
           (ulonglong)uVar43 * (ulonglong)_DAT_1818de590 +
           ((ulonglong)_DAT_1818de5a0 * (ulonglong)uVar43 +
            (SUB168(auVar33 & auVar40,0) >> 0x20) * (ulonglong)_DAT_1818de590 << 0x20) +
           (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de560 +
           ((ulonglong)_DAT_1818de570 * (uVar29 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de560 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818de540 +
           ((ulonglong)_DAT_1818de550 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar46 * (ulonglong)_DAT_1818de540 << 0x20))) + _DAT_1818de600;
  _DAT_183264f30 = _DAT_183264d08 ^ _DAT_183265048 ^ uVar44;
  _DAT_183264df0 = (_DAT_183264df0 ^ _DAT_183265048) + uVar44 ^ 0x31ca57fba0d76488;
  _DAT_183264d48 = (_DAT_183264d48 * 0x69c8e6b4e497264b ^ _DAT_183264df0) + _DAT_183265048;
  _DAT_183265070 = _DAT_183264d48 ^ _DAT_183264df0;
  uVar3 = uVar44 ^ 0x84222325 ^ _DAT_183264de8;
  lVar7 = (uVar44 ^ 0x84222325) + _DAT_1832650d0;
  lVar5 = _DAT_183264de8 + lVar5 * 0x4797d5c1f6b66b64;
  uVar29 = uVar3 + lVar7;
  uVar8 = (uVar6 ^ _DAT_1832650d0) + lVar5;
  uVar3 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar3;
  uVar29 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar6 ^ _DAT_1832650d0;
  _DAT_183264e50 = uVar44;
  _DAT_183265028 =
       func_0x00018a9b9450((uVar29 << 0x1d | uVar29 >> 0x23) - lVar5 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar30 = (uint)(uVar44 >> 0x20);
  auVar35._8_4_ = (int)uVar44;
  auVar35._0_8_ = uVar44;
  auVar35._12_4_ = uVar30;
  uVar20 = (uint)(uVar6 >> 0x20);
  auVar23._8_4_ = (int)uVar6;
  auVar23._0_8_ = uVar6;
  auVar23._12_4_ = uVar20;
  uVar43 = SUB164(auVar35 & auVar23,0);
  uVar8 = SUB168(auVar35 & auVar23,0);
  uVar10 = SUB164(auVar35 | auVar23,0);
  uVar29 = SUB168(auVar35 | auVar23,0);
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar39 = SUB164(auVar35 ^ auVar48,0);
  uVar21 = SUB164(auVar23 ^ auVar1,0);
  uVar34 = SUB168(auVar23 ^ auVar1,0);
  uVar3 = (uVar44 * uVar6 ^ _DAT_183265028) & 0x1ffffffffff;
  uVar8 = (((ulonglong)_DAT_1818de690 * (ulonglong)uVar21 +
            ((ulonglong)_DAT_1818de6a0 * (ulonglong)uVar21 +
             (uVar34 >> 0x20) * (ulonglong)_DAT_1818de690 << 0x20) +
            (ulonglong)_DAT_1818de660 * (ulonglong)uVar10 +
            ((uVar29 >> 0x20) * (ulonglong)_DAT_1818de660 +
             (ulonglong)_DAT_1818de650 * (ulonglong)uVar10 << 0x20) +
            (ulonglong)uVar43 * (ulonglong)_DAT_1818de660 +
            ((uVar8 >> 0x20) * (ulonglong)_DAT_1818de660 +
             (ulonglong)uVar43 * (ulonglong)_DAT_1818de650 << 0x20) +
            (ulonglong)_DAT_1818de630 * (uVar6 & 0xffffffff) +
            ((ulonglong)_DAT_1818de640 * (uVar6 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_1818de630 << 0x20) +
            (ulonglong)_DAT_1818de610 * (uVar44 & 0xffffffff) +
            ((ulonglong)_DAT_1818de620 * (uVar44 & 0xffffffff) +
             (ulonglong)uVar30 * (ulonglong)_DAT_1818de610 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_1818de670 +
           ((ulonglong)_DAT_1818de680 * (ulonglong)uVar39 +
            (SUB168(auVar35 ^ auVar48,0) >> 0x20) * (ulonglong)_DAT_1818de670 << 0x20)) -
          ((ulonglong)uVar21 * (_DAT_1818de710 & 0xffffffff) +
           ((ulonglong)_DAT_1818de740 * (ulonglong)uVar21 +
            (uVar34 >> 0x20) * (_DAT_1818de710 & 0xffffffff) << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_1818de730 +
          ((uVar29 >> 0x20) * (ulonglong)_DAT_1818de730 +
           (ulonglong)_DAT_1818de720 * (ulonglong)uVar10 << 0x20) +
          (ulonglong)uVar43 * (ulonglong)_DAT_1818de730 +
          ((uVar8 >> 0x20) * (ulonglong)_DAT_1818de730 +
           (ulonglong)uVar43 * (ulonglong)_DAT_1818de720 << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_1818de6f0 +
          ((ulonglong)_DAT_1818de700 * (uVar6 & 0xffffffff) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1818de6f0 << 0x20) +
          (uVar44 & 0xffffffff) * (ulonglong)_DAT_1818de6d0 +
          ((ulonglong)_DAT_1818de6e0 * (uVar44 & 0xffffffff) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1818de6d0 << 0x20))) + _DAT_1818de750;
  _DAT_183265020 = _DAT_183264f90 ^ uVar3 ^ uVar8;
  _DAT_183264f08 = (_DAT_183264f08 ^ uVar3) + uVar8 ^ 0xe2bcf60e8d47fade;
  _DAT_183264e88 = (_DAT_183264e88 * -0x25075463e975f1db ^ _DAT_183264f08) + uVar3;
  _DAT_183264e48 = _DAT_183264e88 ^ _DAT_183264f08;
  uVar29 = _DAT_1818ddfe0 * uVar4 * -0x5d238bb40a28dbda;
  uVar4 = _DAT_1818ddfe0 * uVar4 * 0x5d238bb40a28dbda;
  uVar6 = uVar8 ^ 0x84222325;
  uVar3 = ((_DAT_183264e10 ^ uVar6) + (uVar6 & _DAT_183264e10) * 2) * (uVar29 - _DAT_183264fa0);
  uVar3 = (uVar3 | _DAT_183264d90) + (uVar3 & _DAT_183264d90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183264fd8 = uVar8;
  _DAT_183264dc8 = func_0x00018a9b9450((uVar6 ^ uVar29 | uVar3) + (uVar3 & (uVar6 ^ uVar29)));
  uVar39 = (uint)(uVar8 >> 0x20);
  auVar36._8_4_ = (int)uVar8;
  auVar36._0_8_ = uVar8;
  auVar36._12_4_ = uVar39;
  uVar20 = (uint)(uVar29 >> 0x20);
  auVar24._8_4_ = (int)uVar29;
  auVar24._0_8_ = uVar29;
  auVar24._12_4_ = uVar20;
  uVar30 = SUB164(auVar36 & auVar24,0);
  uVar3 = SUB168(auVar36 & auVar24,0);
  uVar43 = SUB164(auVar36 | auVar24,0);
  uVar10 = SUB164(auVar36 ^ auVar24,0);
  uVar6 = SUB168(auVar36 ^ auVar24,0);
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  uVar46 = SUB164(auVar36 ^ auVar49,0);
  uVar21 = SUB164(auVar24 ^ auVar49,0);
  uVar29 = (((ulonglong)uVar46 * (ulonglong)_DAT_1818de7a0 +
             ((ulonglong)_DAT_1818de810 * (ulonglong)uVar46 +
              (SUB168(auVar36 ^ auVar49,0) >> 0x20) * (ulonglong)_DAT_1818de7a0 << 0x20) +
            (ulonglong)_DAT_1818de7f0 * (ulonglong)uVar10 +
            ((ulonglong)_DAT_1818de800 * (ulonglong)uVar10 +
             (uVar6 >> 0x20) * (ulonglong)_DAT_1818de7f0 << 0x20) +
            (ulonglong)uVar43 * (ulonglong)_DAT_1818de7d0 +
            ((ulonglong)_DAT_1818de7e0 * (ulonglong)uVar43 +
             (SUB168(auVar36 | auVar24,0) >> 0x20) * (ulonglong)_DAT_1818de7d0 << 0x20) +
            (ulonglong)_DAT_1818de7b0 * (ulonglong)uVar30 +
            ((ulonglong)_DAT_1818de7c0 * (ulonglong)uVar30 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_1818de7b0 << 0x20) +
            (ulonglong)_DAT_1818de780 * (uVar29 & 0xffffffff) +
            ((ulonglong)_DAT_1818de790 * (uVar29 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_1818de780 << 0x20) +
            (ulonglong)_DAT_1818de760 * (uVar8 & 0xffffffff) +
            ((ulonglong)_DAT_1818de770 * (uVar8 & 0xffffffff) +
             (ulonglong)uVar39 * (ulonglong)_DAT_1818de760 << 0x20)) -
           ((ulonglong)uVar21 * (ulonglong)_DAT_1818de880 +
            ((ulonglong)_DAT_1818de8d0 * (ulonglong)uVar21 +
             (SUB168(auVar24 ^ auVar49,0) >> 0x20) * (ulonglong)_DAT_1818de880 << 0x20) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818de8b0 +
            ((ulonglong)_DAT_1818de8c0 * (ulonglong)uVar10 +
             (uVar6 >> 0x20) * (ulonglong)_DAT_1818de8b0 << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1818de890 +
           ((ulonglong)_DAT_1818de8a0 * (ulonglong)uVar30 +
            (uVar3 >> 0x20) * (ulonglong)_DAT_1818de890 << 0x20) +
           (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de860 +
           ((ulonglong)_DAT_1818de870 * (uVar29 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1818de860 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818de840 +
           ((ulonglong)_DAT_1818de850 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar39 * (ulonglong)_DAT_1818de840 << 0x20))) + _DAT_1818de8e0;
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = uVar29 ^ 0x84222325;
  auVar14 = pshufb(auVar15 ^ _DAT_1818de8f0,_DAT_1800170c0);
  uVar3 = _DAT_183264dc8 & 0x7ffffffffff;
  _DAT_183264f18 = _DAT_1832650e8 ^ uVar3 ^ uVar29;
  _DAT_183264d20 = (_DAT_183264d20 ^ uVar3) + uVar29 ^ 0x6c7797b6852c4031;
  _DAT_183264e08 = (_DAT_183264e08 * -0x24982db087666b4d ^ _DAT_183264d20) + uVar3;
  _DAT_183264f68 = _DAT_183264e08 ^ _DAT_183264d20;
  uVar6 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar6 + _DAT_183265098;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_183265038 ^ uVar6;
  }
  _DAT_183264f00 = uVar29;
  _DAT_183265020 = func_0x00018a9b9450(SUB161(auVar15 ^ _DAT_1818de8f0,5) ^ uVar3);
  uVar39 = (uint)(uVar29 >> 0x20);
  auVar37._8_4_ = (int)uVar29;
  auVar37._0_8_ = uVar29;
  auVar37._12_4_ = uVar39;
  uVar43 = (uint)(uVar4 >> 0x20);
  auVar25._8_4_ = (int)uVar4;
  auVar25._0_8_ = uVar4;
  auVar25._12_4_ = uVar43;
  uVar21 = SUB164(auVar37 & auVar25,0);
  uVar47 = SUB168(auVar37 & auVar25,0);
  uVar10 = SUB164(auVar37 | auVar25,0);
  uVar44 = SUB168(auVar37 | auVar25,0);
  uVar30 = SUB164(auVar37 ^ auVar25,0);
  uVar34 = SUB168(auVar37 ^ auVar25,0);
  auVar16._8_4_ = 0xffffffff;
  auVar16._0_8_ = 0xffffffffffffffff;
  auVar16._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar37 ^ auVar16,0);
  uVar46 = SUB164(auVar25 ^ auVar16,0);
  uVar8 = SUB168(auVar25 ^ auVar16,0);
  uVar6 = (uVar4 | uVar29) ^ _DAT_183265020;
  uVar3 = uVar6 >> 1 | uVar6;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar6;
  uVar8 = (((ulonglong)_DAT_1818de990 * (ulonglong)uVar46 +
            ((uVar8 >> 0x20) * (ulonglong)_DAT_1818de990 +
             (ulonglong)_DAT_1818de920 * (ulonglong)uVar46 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1818de980 +
            ((SUB168(auVar37 ^ auVar16,0) >> 0x20) * (ulonglong)_DAT_1818de980 +
             (ulonglong)_DAT_1818de900 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)_DAT_1818de950 * (ulonglong)uVar30 +
            ((uVar34 >> 0x20) * (ulonglong)_DAT_1818de950 +
             (ulonglong)_DAT_1818de940 * (ulonglong)uVar30 << 0x20) +
            (ulonglong)uVar21 * (ulonglong)_DAT_1818de950 +
            ((uVar47 >> 0x20) * (ulonglong)_DAT_1818de950 +
             (ulonglong)uVar21 * (ulonglong)_DAT_1818de940 << 0x20) +
            (ulonglong)_DAT_1818de930 * (uVar4 & 0xffffffff) +
            ((ulonglong)uVar43 * (ulonglong)_DAT_1818de930 +
             (uVar4 & 0xffffffff) * (ulonglong)_DAT_1818de920 << 0x20) +
            (ulonglong)_DAT_1818de910 * (uVar29 & 0xffffffff) +
            ((ulonglong)uVar39 * (ulonglong)_DAT_1818de910 +
             (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de900 << 0x20) +
           (ulonglong)_DAT_1818de960 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_1818de970 * (ulonglong)uVar10 +
            (uVar44 >> 0x20) * (ulonglong)_DAT_1818de960 << 0x20)) -
          ((ulonglong)uVar46 * (ulonglong)_DAT_1818dea00 +
           ((ulonglong)_DAT_1818dea70 * (ulonglong)uVar46 +
            (uVar8 >> 0x20) * (ulonglong)_DAT_1818dea00 << 0x20) +
          (ulonglong)uVar30 * (ulonglong)_DAT_1818dea50 +
          ((ulonglong)_DAT_1818dea60 * (ulonglong)uVar30 +
           (uVar34 >> 0x20) * (ulonglong)_DAT_1818dea50 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_1818dea30 +
          ((ulonglong)_DAT_1818dea40 * (ulonglong)uVar10 +
           (uVar44 >> 0x20) * (ulonglong)_DAT_1818dea30 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_1818dea10 +
          ((ulonglong)_DAT_1818dea20 * (ulonglong)uVar21 +
           (uVar47 >> 0x20) * (ulonglong)_DAT_1818dea10 << 0x20) +
          (uVar4 & 0xffffffff) * (ulonglong)_DAT_1818de9e0 +
          ((ulonglong)_DAT_1818de9f0 * (uVar4 & 0xffffffff) +
           (ulonglong)uVar43 * (ulonglong)_DAT_1818de9e0 << 0x20) +
          (uVar29 & 0xffffffff) * (ulonglong)_DAT_1818de9c0 +
          ((ulonglong)_DAT_1818de9d0 * (uVar29 & 0xffffffff) +
           (ulonglong)uVar39 * (ulonglong)_DAT_1818de9c0 << 0x20))) + _DAT_1818dea80;
  _DAT_183264eb0 = _DAT_183264f28 ^ uVar6 ^ uVar8;
  _DAT_183264d58 = (_DAT_183264d58 ^ uVar6) + uVar8 ^ 0xb99b22fe39fbd54e;
  _DAT_183264fb8 = (_DAT_183264fb8 * 0x75f1fb960ff15e5f ^ _DAT_183264d58) + uVar6;
  _DAT_183264fb0 = _DAT_183264fb8 ^ _DAT_183264d58;
  _DAT_183264e78 = _DAT_183264e30 ^ uVar8;
  uVar6 = uVar9 ^ 0x84222325;
  uVar3 = (uVar6 ^ _DAT_183265080) + _DAT_183264fb0 + uVar6;
  uVar4 = (uVar22 ^ _DAT_183264fb0) + _DAT_183265080 + uVar22;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_183265080;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar22 ^ _DAT_183264fb0;
  _DAT_183264d30 = uVar8;
  _DAT_183265018 =
       func_0x00018a9b9450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183265080 + uVar22) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183264fb0 + uVar6));
  uVar3 = uVar9 * uVar22 ^ _DAT_183265018;
  uVar4 = uVar9 ^ uVar22;
  _DAT_183264df8 = (_DAT_183264df8 ^ uVar3) + uVar4 ^ 0x7f10e4205bb801c3;
  _DAT_183264eb8 = (_DAT_183264eb8 * 0xd428bd392677125 ^ _DAT_183264df8) + uVar3;
  _DAT_183264f48 = _DAT_183264eb8 ^ _DAT_183264df8;
  uVar3 = (uVar6 ^ _DAT_183265060) + _DAT_183264e80 + uVar6;
  uVar29 = (uVar22 ^ _DAT_183264e80) + _DAT_183265060 + uVar22;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_183265060;
  uVar29 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar22 ^ _DAT_183264e80;
  _DAT_183264dd8 = uVar4;
  _DAT_183264ea0 =
       func_0x00018a9b9450((uVar29 << 0x1d | uVar29 >> 0x23) - (_DAT_183265060 + uVar22) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183264e80 + uVar6));
  uVar3 = (uVar9 | uVar22) ^ _DAT_183264ea0;
  uVar3 = uVar3 << 0x24 | uVar3 >> 0x1c;
  _DAT_183265010 = uVar22 & uVar9;
  _DAT_183264e20 = (_DAT_183264e20 ^ uVar3) + _DAT_183265010 ^ 0x23f72bc87461c155;
  _DAT_183264fd8 = (_DAT_183264fd8 * 0x7d175417a05428e9 ^ _DAT_183264e20) + uVar3;
  _DAT_183264d20 = _DAT_183264fd8 ^ _DAT_183264e20;
  uVar4 = (uVar9 + uVar22) - (_DAT_183265010 * 2 + uVar4);
  uVar3 = uVar8 ^ 0x84222325 ^ _DAT_183264d70;
  lVar5 = (uVar8 ^ 0x84222325) + _DAT_183264d78;
  uVar22 = uVar3 + lVar5;
  uVar29 = (uVar4 ^ _DAT_183264d78) + _DAT_183264d70 + uVar4;
  uVar3 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar3;
  uVar22 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar4 ^ _DAT_183264d78;
  _DAT_183264d40 =
       func_0x00018a9b9450((uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_183264d70 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar43 = (uint)(uVar8 >> 0x20);
  auVar17._8_4_ = (int)uVar8;
  auVar17._0_8_ = uVar8;
  auVar17._12_4_ = uVar43;
  uVar20 = (uint)(uVar4 >> 0x20);
  auVar38._8_4_ = (int)uVar4;
  auVar38._0_8_ = uVar4;
  auVar38._12_4_ = uVar20;
  uVar30 = SUB164(auVar17 & auVar38,0);
  uVar22 = SUB168(auVar17 & auVar38,0);
  uVar21 = SUB164(auVar17 | auVar38,0);
  uVar29 = SUB168(auVar17 | auVar38,0);
  uVar10 = SUB164(auVar17 ^ auVar38,0);
  uVar3 = SUB168(auVar17 ^ auVar38,0);
  auVar41._8_4_ = 0xffffffff;
  auVar41._0_8_ = 0xffffffffffffffff;
  auVar41._12_4_ = 0xffffffff;
  uVar39 = SUB164(auVar17 ^ auVar41,0);
  auVar26._8_8_ = _UNK_180101c98;
  auVar26._0_8_ = uVar6;
  uVar22 = (((ulonglong)_DAT_1818deaf0 * (ulonglong)uVar10 +
             ((ulonglong)_DAT_1818deb00 * (ulonglong)uVar10 +
              (uVar3 >> 0x20) * (ulonglong)_DAT_1818deaf0 << 0x20) +
             (ulonglong)_DAT_1818dead0 * (ulonglong)uVar21 +
             ((ulonglong)_DAT_1818deae0 * (ulonglong)uVar21 +
              (uVar29 >> 0x20) * (ulonglong)_DAT_1818dead0 << 0x20) +
            (ulonglong)_DAT_1818deab0 * (ulonglong)uVar30 +
            ((ulonglong)_DAT_1818deac0 * (ulonglong)uVar30 +
             (uVar22 >> 0x20) * (ulonglong)_DAT_1818deab0 << 0x20) +
            (ulonglong)_DAT_1818deaa0 * (uVar4 & 0xffffffff) +
            ((ulonglong)uVar20 * (ulonglong)_DAT_1818deaa0 +
             (ulonglong)_DAT_1818dea90 * (uVar4 & 0xffffffff) << 0x20) +
            (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818deaa0 +
            ((ulonglong)uVar43 * (ulonglong)_DAT_1818deaa0 +
             (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818dea90 << 0x20)) -
           ((ulonglong)uVar39 * (_DAT_1818deb70 & 0xffffffff) +
            ((ulonglong)_DAT_1818debe0 * (ulonglong)uVar39 +
             (SUB168(auVar17 ^ auVar41,0) >> 0x20) * (_DAT_1818deb70 & 0xffffffff) << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_1818debc0 +
           ((ulonglong)_DAT_1818debd0 * (ulonglong)uVar10 +
            (uVar3 >> 0x20) * (ulonglong)_DAT_1818debc0 << 0x20) +
           (ulonglong)uVar21 * (ulonglong)_DAT_1818deba0 +
           ((ulonglong)_DAT_1818debb0 * (ulonglong)uVar21 +
            (uVar29 >> 0x20) * (ulonglong)_DAT_1818deba0 << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_1818deb80 +
           ((ulonglong)_DAT_1818deb90 * (ulonglong)uVar30 +
            (uVar22 >> 0x20) * (ulonglong)_DAT_1818deb80 << 0x20) +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_1818deb50 +
           ((ulonglong)_DAT_1818deb60 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1818deb50 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_1818deb30 +
           ((ulonglong)_DAT_1818deb40 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar43 * (ulonglong)_DAT_1818deb30 << 0x20))) - _DAT_1818deb70;
  auVar14 = pshufb(auVar26 ^ _DAT_1818debf0,_DAT_1800170c0);
  uVar3 = ((uVar8 | uVar4) ^ _DAT_183264d40) & 0xffffffffffffe000;
  _DAT_183265070 = _DAT_183264dc0 ^ uVar3 ^ uVar22;
  _DAT_183264e68 = (_DAT_183264e68 ^ uVar3) + uVar22 ^ 0xa9f11815a500b9f3;
  _DAT_183264dc8 = (_DAT_183264dc8 * 0x1e2bdce6be71c011 ^ _DAT_183264e68) + uVar3;
  _DAT_183265020 = _DAT_183264dc8 ^ _DAT_183264e68;
  uVar4 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar4 + _DAT_183264db8;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_183264f08 ^ uVar4;
  }
  _DAT_183264ee0 = uVar22;
  _DAT_183264f18 = func_0x00018a9b9450(SUB161(auVar26 ^ _DAT_1818debf0,5) ^ uVar3);
  uVar3 = ~_DAT_183264f18 << 0x2a | ~_DAT_183264f18 >> 0x16;
  _DAT_183265050 = ~uVar9;
  _DAT_183264fe8 = (_DAT_183264fe8 ^ uVar3) + _DAT_183265050 ^ 0xf14317eb7dd2e6ff;
  _DAT_183264e98 = (_DAT_183264e98 * -0x2a34d91ffba550e5 ^ _DAT_183264fe8) + uVar3;
  _DAT_183264f10 = _DAT_183264e98 ^ _DAT_183264fe8;
  uVar3 = (uVar6 ^ _DAT_183265080) + uVar6 + _DAT_183264db8;
  uVar4 = (_DAT_183265050 ^ _DAT_183264db8) + _DAT_183265050 + _DAT_183265080;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_183265080;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183265050 ^ _DAT_183264db8;
  _DAT_183264ed0 =
       func_0x00018a9b9450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183265050 + _DAT_183265080) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uVar6 + _DAT_183264db8));
  _DAT_183264d50 = _DAT_183264d50 ^ ~_DAT_183264ed0 ^ 0xce53bacc71d6ed68;
  _DAT_183264f00 = (_DAT_183264f00 * 0x1958d1bcb3cd5489 ^ _DAT_183264d50) + ~_DAT_183264ed0;
  _DAT_183264f10 = _DAT_183264f00 ^ _DAT_183264d50;
  _DAT_183264d00 = 0;
  uVar6 = uVar22 ^ 0x84222325;
  uVar3 = ((_DAT_183264ef8 ^ uVar6) + (uVar6 & _DAT_183264ef8) * 2) * -_DAT_183264ff8;
  uVar3 = (uVar3 | _DAT_183264df0) + (uVar3 & _DAT_183264df0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183264f10 = func_0x00018a9b9450((uVar3 | uVar6) + (uVar3 & uVar6));
  auVar14 = _DAT_1800170c0;
  uVar21 = (uint)(uVar22 >> 0x20);
  auVar18._8_4_ = (int)uVar22;
  auVar18._0_8_ = uVar22;
  auVar18._12_4_ = uVar21;
  uVar6 = auVar18._8_8_ >> 0x20;
  auVar41 = auVar18 ^ auVar41;
  uVar10 = auVar41._0_4_;
  uVar20 = auVar41._8_4_;
  uVar4 = auVar41._8_8_ >> 0x20;
  uVar3 = _DAT_183264f10 >> 1 | _DAT_183264f10;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_183264f10;
  auVar42._0_8_ =
       (((_DAT_1818dec40 & 0xffffffff) * (ulonglong)uVar10 +
         ((_DAT_1818dec70 & 0xffffffff) * (ulonglong)uVar10 +
          (auVar41._0_8_ >> 0x20) * (_DAT_1818dec40 & 0xffffffff) << 0x20) +
        (_DAT_1818dec50 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_DAT_1818dec60 & 0xffffffff) * (uVar22 & 0xffffffff) +
         (ulonglong)uVar21 * (_DAT_1818dec50 & 0xffffffff) << 0x20) +
        (_DAT_1818dec20 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_DAT_1818dec30 & 0xffffffff) * (uVar22 & 0xffffffff) +
         (ulonglong)uVar21 * (_DAT_1818dec20 & 0xffffffff) << 0x20) +
        (_DAT_1818dec00 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_DAT_1818dec10 & 0xffffffff) * (uVar22 & 0xffffffff) +
         (ulonglong)uVar21 * (_DAT_1818dec00 & 0xffffffff) << 0x20)) -
       ((ulonglong)uVar10 * (_DAT_1818decc0 & 0xffffffff) +
        ((_DAT_1818decd0 & 0xffffffff) * (ulonglong)uVar10 +
         (auVar41._0_8_ >> 0x20) * (_DAT_1818decc0 & 0xffffffff) << 0x20) +
       (uVar22 & 0xffffffff) * (ulonglong)_DAT_1818deca0 +
       ((_DAT_1818decb0 & 0xffffffff) * (uVar22 & 0xffffffff) +
        (ulonglong)uVar21 * (ulonglong)_DAT_1818deca0 << 0x20) +
       (_DAT_1818dec80 & 0xffffffff) * (uVar22 & 0xffffffff) +
       ((_DAT_1818dec90 & 0xffffffff) * (uVar22 & 0xffffffff) +
        (ulonglong)uVar21 * (_DAT_1818dec80 & 0xffffffff) << 0x20))) + _DAT_1818dece0;
  auVar42._8_8_ =
       (((_UNK_1818dec48 & 0xffffffff) * (ulonglong)uVar20 +
         ((_UNK_1818dec78 & 0xffffffff) * (ulonglong)uVar20 + uVar4 * (_UNK_1818dec48 & 0xffffffff)
         << 0x20) +
        (_UNK_1818dec58 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_UNK_1818dec68 & 0xffffffff) * (uVar22 & 0xffffffff) +
         uVar6 * (_UNK_1818dec58 & 0xffffffff) << 0x20) +
        (_UNK_1818dec28 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_UNK_1818dec38 & 0xffffffff) * (uVar22 & 0xffffffff) +
         uVar6 * (_UNK_1818dec28 & 0xffffffff) << 0x20) +
        (_UNK_1818dec08 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_UNK_1818dec18 & 0xffffffff) * (uVar22 & 0xffffffff) +
         uVar6 * (_UNK_1818dec08 & 0xffffffff) << 0x20)) -
       ((auVar41._8_8_ & 0xffffffff) * (_UNK_1818decc8 & 0xffffffff) +
        ((_UNK_1818decd8 & 0xffffffff) * (ulonglong)uVar20 + uVar4 * (_UNK_1818decc8 & 0xffffffff)
        << 0x20) +
       (auVar18._8_8_ & 0xffffffff) * (ulonglong)_UNK_1818deca8 +
       ((_UNK_1818decb8 & 0xffffffff) * (uVar22 & 0xffffffff) + uVar6 * _UNK_1818deca8 << 0x20) +
       (_UNK_1818dec88 & 0xffffffff) * (uVar22 & 0xffffffff) +
       ((_UNK_1818dec98 & 0xffffffff) * (uVar22 & 0xffffffff) +
        uVar6 * (_UNK_1818dec88 & 0xffffffff) << 0x20))) + _UNK_1818dece8;
  _DAT_183265098 = _DAT_183265068 ^ uVar3 ^ auVar42._0_8_;
  _DAT_183264e70 = (_DAT_183264e70 ^ uVar3) + auVar42._0_8_ ^ 0xe0b2596952e3e2a9;
  _DAT_183264f08 = (_DAT_183264f08 * -0x7d9b04d80596918d ^ _DAT_183264e70) + uVar3;
  _DAT_183264f78 = _DAT_183264f08 ^ _DAT_183264e70;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar42._0_8_ ^ 0x84222325;
  auVar11 = pshufb(auVar19 ^ _DAT_1818decf0,_DAT_1800170c0);
  uVar6 = auVar11._8_8_ + auVar11._0_8_;
  uVar3 = uVar6 + _DAT_183264f08;
  if (auVar11._4_4_ < 0) {
    uVar3 = _DAT_183264de8 ^ uVar6;
  }
  _DAT_183264e30 = auVar42._0_8_;
  _DAT_183264f70 = func_0x00018a9b9450(SUB161(auVar19 ^ _DAT_1818decf0,5) ^ uVar3);
  uVar3 = _DAT_183264f70 - (_DAT_183264f70 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183264f70;
  auVar27._8_4_ = 0xffffffff;
  auVar27._0_8_ = 0xffffffffffffffff;
  auVar27._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar27 ^ auVar42,0);
  uVar6 = (((ulonglong)_DAT_1818ded00 * (auVar42._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_1818ded30 * (auVar42._0_8_ & 0xffffffff) +
             (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1818ded00 << 0x20) +
           (ulonglong)_DAT_1818ded10 * (auVar42._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_1818ded20 * (auVar42._0_8_ & 0xffffffff) +
            (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1818ded10 << 0x20)) -
          ((ulonglong)uVar10 * (ulonglong)_DAT_1818ded80 +
           ((ulonglong)_DAT_1818ded90 * (ulonglong)uVar10 +
            (SUB168(auVar27 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_1818ded80 << 0x20) +
          (auVar42._0_8_ & 0xffffffff) * (ulonglong)_DAT_1818ded60 +
          ((ulonglong)_DAT_1818ded70 * (auVar42._0_8_ & 0xffffffff) +
           (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1818ded60 << 0x20) +
          (ulonglong)_DAT_1818ded40 * (auVar42._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_1818ded50 * (auVar42._0_8_ & 0xffffffff) +
           (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1818ded40 << 0x20))) + 0x33b7b856654e8b59;
  _DAT_1832650e0 = _DAT_183265090 ^ uVar3 ^ uVar6;
  _DAT_183264d58 = (_DAT_183264d58 ^ uVar3) + uVar6 ^ 0xebdc81f287460030;
  _DAT_183264de0 = (_DAT_183264de0 * 0x2fb05390223b0bab ^ _DAT_183264d58) + uVar3;
  _DAT_183264fb0 = _DAT_183264de0 ^ _DAT_183264d58;
  auVar28._8_8_ = uVar6;
  auVar28._0_8_ = unaff_RBX ^ 0x84222325;
  auVar14 = pshufb(auVar28 ^ _DAT_1818deda0,auVar14);
  uVar4 = auVar14._8_8_ + auVar14._0_8_;
  uVar3 = uVar4 + _DAT_183264f38;
  if (auVar14._4_4_ < 0) {
    uVar3 = _DAT_183264fc8 ^ uVar4;
  }
  _DAT_183264e70 = uVar6;
  _DAT_183264f60 = func_0x00018a9b9450(SUB161(auVar28 ^ _DAT_1818deda0,5) ^ uVar3);
  _DAT_183264f70 = uVar6 ^ unaff_RBX;
  _DAT_183264ef8 = (_DAT_183264ef8 ^ _DAT_183264f60) + _DAT_183264f70 ^ 0xf15ba858b0b46c68;
  _DAT_183264f10 = (_DAT_183264f10 * 0x4f8cc1d08f256bc5 ^ _DAT_183264ef8) + _DAT_183264f60;
  _DAT_183264ee8 = _DAT_183264f10 ^ _DAT_183264ef8;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x2221,0x76);
  cVar2 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9b9166 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b9166(void)

{
  char in_AL;
  longlong unaff_RBX;
  longlong unaff_R14;
  
  switch((unaff_R14 == 0 || unaff_RBX == 0) || in_AL != '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9b9209 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9b9209(void)

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


// ----- block @ rva 0xa9b926b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b926b(void)

{
  FUN_190ddfc90();
  (*_DAT_1818de218)();
  return;
}


// ----- block @ rva 0xa9b9334 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b9334(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818de118)();
  return;
}


// ----- block @ rva 0xa9b9351 -----

void FUN_18a9b9351(void)

{
  return;
}


// ----- block @ rva 0xa9b93bd -----

void FUN_18a9b93bd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa9b95fa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9b95fa(void)

{
  FUN_190ddce00();
  (*_DAT_1818eea08)();
  return;
}


// ----- block @ rva 0xa9bd0dd -----

void FUN_18a9bd0dd(void)

{
  return;
}


// ----- block @ rva 0xa9c7fbd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9c7fbd(void)

{
  (*_DAT_1818fd048)();
  return;
}


// ----- block @ rva 0xa9c8bd7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9c8bd7(void)

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


// ----- block @ rva 0xaa204c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa204c4(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190ddfc90(in_stack_00000048,&stack0x00000058,*_DAT_18301ee50 + 0x509,*_DAT_18301ee50 + 0x4c9,
                0x19);
  (*_DAT_1818eaf88)();
  return;
}


// ----- block @ rva 0xaa40521 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018aa4054a */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18aa40521(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaa47ef0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aa47ef0(void)

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


// ----- block @ rva 0xaa48320 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa48320(void)

{
  longlong *in_stack_00000048;
  
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50,0);
  (**(code **)(in_stack_00000048 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000048);
  (*_DAT_1818f71c8)();
  return;
}


// ----- block @ rva 0xaa50645 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa50645(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->Throw /*0x68*/))();
  (*_DAT_1818fc0c8)();
  return;
}


// ----- block @ rva 0xaa6dede -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aa6dede(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  
  FUN_184117d80(in_stack_00000048);
  cVar1 = (**(code **)(in_stack_00000048 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaa72987 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa72987(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1818e3648)();
  return;
}


// ----- block @ rva 0xaa912d2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aa912d2(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->Throw /*0x68*/))();
  (*_DAT_1818fc0c8)();
  return;
}


// ----- block @ rva 0xaa912e5 -----

void FUN_18aa912e5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

