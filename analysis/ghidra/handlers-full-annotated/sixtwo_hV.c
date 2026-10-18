// ===== Lsixtwo/hV; _9aa1e13785ce9e8c408be64da5d6938f ()V (handler @ image 189862400, runtime 6ffff1472400) =====

void FUN_189862400(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001898624dc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181417820 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hV; bfU ()Lsixtwo/hZ; (handler @ image 189853d30, runtime 6ffff1463d30) =====

void FUN_189853d30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16781,0x3b3);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189853e16 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814137b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hV; bfV ()Ljava/util/List; (handler @ image 189860dc0, runtime 6ffff1470dc0) =====

void FUN_189860dc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16791,0x3b4);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189860e3a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181417050 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hV; bfW (Lsixtwo/hX;)V (handler @ image 1898687d0, runtime 6ffff14787d0) =====

void FUN_1898687d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16781,0x3b3);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001898688ac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814190a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hV; bfX (Lsixtwo/hL;)V (handler @ image 1898713c0, runtime 6ffff14813c0) =====

void FUN_1898713c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189871451 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18141b870 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hV; bfY (Ljava/lang/String;)Lsixtwo/hJ; (handler @ image 189872830, runtime 6ffff1482830) =====

void FUN_189872830(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16781,0x3b3);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018987291b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18141bf80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hV; bfZ (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18987ce80, runtime 6ffff148ce80) =====

undefined8 FUN_18987ce80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/hV; bga ([B)Ljava/lang/String; (handler @ image 18987cf10, runtime 6ffff148cf10) =====

void FUN_18987cf10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018987cfb0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18141ee80 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hV; bgb (IJ)Ljava/lang/String; (handler @ image 1898a6910, runtime 6ffff14b6910) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1898a6910(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)param_3;
  uRam0000000183231608 = func_0x0001898acbc0(uRam00000001832315f8 ^ 0xeed32b466a937a7a);
  uVar3 = (uRam0000000183231608 << 0x11 | uRam0000000183231608 >> 0x2f) << 0x28 |
          (uRam0000000183231608 & 0x7fffffffffff) >> 7;
  uRam00000001832317f0 = (uRam00000001832317f0 ^ uVar3) + 0x20d4b7317ea80e48 ^ 0x93067928552efee1;
  uRam0000000183231540 = (uRam0000000183231540 * -0x1354661bcad412a9 ^ uRam00000001832317f0) + uVar3
  ;
  uRam0000000183231520 = uRam0000000183231540 ^ uRam00000001832317f0;
  uRam0000000183231558 = 0x20d4b7317ea80e48;
  uVar3 = (uRam00000001832316a0 ^ _UNK_181425f00) + uRam0000000183231578 + 0x84222325;
  uVar7 = (uRam0000000183231578 ^ _UNK_181425f08) + uRam00000001832316a0 + 0xabc4d5023845e557;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832316a0 ^ _UNK_181425f00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183231578 ^ _UNK_181425f08;
  uRam0000000183231508 =
       func_0x0001898acbc0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832316a0 + 0xabc4d5023845e557) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183231578 + 0x84222325));
  uRam00000001832315d8 =
       (uRam00000001832315d8 ^ uRam0000000183231508) + 0x543b2afdc7ba1aa9 ^ 0x975babd60828d70;
  uRam00000001832315b0 =
       (uRam00000001832315b0 * 0x4013e2c02ec743d1 ^ uRam00000001832315d8) + uRam0000000183231508;
  uRam0000000183231808 = uRam00000001832315b0 ^ uRam00000001832315d8;
  uRam0000000183231740 = 0x543b2afdc7ba1aa9;
  uVar3 = (~uRam0000000183231768 + 0x543b2afdc7ba1aaa) *
          ((uRam00000001832315b8 ^ 0xabc4d502bc644673) +
          (uRam00000001832315b8 & 0x2bc4d502bc644673) * 2);
  uVar3 = (uVar3 | uRam0000000183231750) + (uVar3 & uRam0000000183231750);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832318f8 =
       func_0x0001898acbc0((uVar3 | 0xffffffff7bde5cda) + (uVar3 & 0xffffffff7bde5cda));
  uVar3 = ~(uRam00000001832318f8 >> 1 | (ulonglong)((uRam00000001832318f8 & 1) != 0) << 0x3f) &
          0xabc4d50238466556;
  uRam00000001832316f0 = uRam0000000183231720 ^ uVar3 ^ 0x7fff;
  uRam00000001832318b8 = (uRam00000001832318b8 ^ uVar3) + 0x7fff ^ 0x1758e64f90d3cd67;
  uRam0000000183231830 = (uRam0000000183231830 * -0x56493da6795b9aff ^ uRam00000001832318b8) + uVar3
  ;
  uRam0000000183231508 = uRam0000000183231830 ^ uRam00000001832318b8;
  uRam00000001832317b8 = 0x7fff;
  uVar3 = (~uRam00000001832318a8 + 0x58ad898d7a018754) *
          ((uRam0000000183231638 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183231638 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183231648) + (uVar3 & uRam0000000183231648);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832315d8 =
       func_0x0001898acbc0((uVar3 | 0x58ad898dfe23a476) + (uVar3 & 0x58ad898dfe23a476));
  uVar3 = uRam00000001832315d8 << 0x15 | uRam00000001832315d8 >> 0x2b;
  uRam0000000183231508 = (uRam0000000183231508 ^ uVar3) + 0xa752767285fe78ad ^ 0x5e4587a818614672;
  uRam0000000183231868 = (uRam0000000183231868 * 0x340844c6b0f9cd4b ^ uRam0000000183231508) + uVar3;
  uRam0000000183231638 = uRam0000000183231868 ^ uRam0000000183231508;
  uRam0000000183231810 = 0xa752767285fe78ad;
  uVar3 = (~uRam00000001832315e0 + 0x58ad898d7a018754) *
          ((uRam0000000183231620 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183231620 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam00000001832317b0) + (uVar3 & uRam00000001832317b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183231628 =
       func_0x0001898acbc0((uVar3 | 0x58ad898dfe23db89) + (uVar3 & 0x58ad898dfe23db89));
  uVar3 = uRam0000000183231628 ^ 0x7fff;
  uRam00000001832315f8 = uRam0000000183231878 ^ uVar3 ^ 0x58ad898d7a020752;
  uRam0000000183231578 = (uRam0000000183231578 ^ uVar3) + 0x58ad898d7a020752 ^ 0xf91e4dac81792725;
  uRam00000001832315a0 = (uRam00000001832315a0 * -0xe2bab53f22f965f ^ uRam0000000183231578) + uVar3;
  uRam0000000183231860 = uRam00000001832315a0 ^ uRam0000000183231578;
  uRam0000000183231850 = 0x58ad898d7a020752;
  uVar3 = (~uRam0000000183231770 + 0x20d4b7317ea80e49) *
          ((uRam00000001832317d8 ^ 0xf55ed4fe52cd5cd2) +
          (uRam00000001832317d8 & 0x755ed4fe52cd5cd2) * 2);
  uVar3 = (uVar3 | uRam0000000183231530) + (uVar3 & uRam0000000183231530);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832315c0 =
       func_0x0001898acbc0((uVar3 | 0xd58a63cf2c65529a) + (uVar3 & 0xd58a63cf2c65529a));
  uVar3 = uRam00000001832315c0 & 0x7fffffffffffffff ^ 0xf55ed4fed6ef7ff7;
  uRam00000001832316d0 = uRam0000000183231830 ^ uVar3 ^ 0x16338c3055978e3f;
  uRam0000000183231540 = (uRam0000000183231540 ^ uVar3) + 0x16338c3055978e3f ^ 0x812f1fe5ceb88dc3;
  uRam0000000183231590 = (uRam0000000183231590 * 0x41744a02341b619b ^ uRam0000000183231540) + uVar3;
  uRam0000000183231770 = uRam0000000183231590 ^ uRam0000000183231540;
  uRam00000001832318b0 = 0x16338c3055978e3f;
  uRam0000000183231540 = func_0x0001898acbc0(uRam0000000183231738 ^ 0xc4ae75d4799d1cc2);
  uRam00000001832317f8 =
       (uRam00000001832317f8 ^ uRam0000000183231540 ^ 0x20d4b7317ea80e48) + 0x2054943056a80e40 ^
       0x88ed0b6079b6422c;
  uRam00000001832315e0 =
       (uRam00000001832315e0 * -0x158152d29a8a33eb ^ uRam00000001832317f8) +
       (uRam0000000183231540 ^ 0x20d4b7317ea80e48);
  uRam0000000183231550 = uRam00000001832315e0 ^ uRam00000001832317f8;
  uRam0000000183231860 = 0x2054943056a80e40;
  uVar3 = (~uRam0000000183231820 + 0x40a92860ad501c81) *
          ((uRam00000001832317b8 ^ 0xd58a63cf2c65529a) +
          (uRam00000001832317b8 & 0x558a63cf2c65529a) * 2);
  uVar3 = (uVar3 | uRam0000000183231768) + (uVar3 & uRam0000000183231768);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183231670 =
       func_0x0001898acbc0((uVar3 | 0x95234baf81354e1a) + (uVar3 & 0x95234baf81354e1a));
  uVar3 = (uRam0000000183231670 ^ 0x40882040a8401080) & 0xd58a63cfa84771bf;
  uRam00000001832316d8 = uRam00000001832318f0 ^ uVar3 ^ 0x16338c3055978e3f;
  uRam00000001832317f0 = (uRam00000001832317f0 ^ uVar3) + 0x16338c3055978e3f ^ 0x4f75a0fc6b18db59;
  uRam00000001832315d8 = (uRam00000001832315d8 * 0xf95e28ec69a2beb ^ uRam00000001832317f0) + uVar3;
  uRam00000001832315a8 = uRam00000001832315d8 ^ uRam00000001832317f0;
  uRam00000001832315c0 = 0x16338c3055978e3f;
  uRam00000001832318b0 = func_0x0001898acbc0(uRam0000000183231668 + 0x1d007c24ffddff ^ 0x11);
  uRam0000000183231610 = uRam00000001832318b0 << 0x19 | uRam00000001832318b0 >> 0x27;
  uVar3 = uRam0000000183231610 >> 1 | uRam0000000183231610;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam0000000183231610 =
       (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
       uRam0000000183231610;
  uRam0000000183231638 = uRam0000000183231638 ^ uRam0000000183231610 ^ 0xaeadbf457ec1821a;
  uRam0000000183231550 =
       (uRam0000000183231550 * 0x778c9af70c9ba0b3 ^ uRam0000000183231638) + uRam0000000183231610;
  uRam0000000183231548 = uRam0000000183231550 ^ uRam0000000183231638;
  uRam00000001832317b0 = uRam00000001832317e0;
  uRam00000001832315f8 = 0;
  uVar3 = (uRam0000000183231568 ^ 0x84225cda) + uRam0000000183231618 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183231568 ^ 0x84225cda;
  uVar7 = ((uRam0000000183231618 + uRam0000000183231568) * 0x2000 |
          uRam0000000183231618 + uRam0000000183231568 >> 0x33) ^ uRam0000000183231618;
  uRam0000000183231848 =
       func_0x0001898acbc0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183231568 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183231618 + 0x84225cda));
  uVar3 = (uRam0000000183231848 ^ 0x7fff) << 0x19 | uRam0000000183231848 >> 0x27;
  uRam0000000183231790 = uRam0000000183231730 ^ uVar3 ^ 0x7fff;
  uRam00000001832318e8 = (uRam00000001832318e8 ^ uVar3) + 0x7fff ^ 0x446ab8077450589f;
  uRam00000001832316b8 = (uRam00000001832316b8 * -0x7bd2c5388ab8f9b9 ^ uRam00000001832318e8) + uVar3
  ;
  uRam0000000183231768 = uRam00000001832316b8 ^ uRam00000001832318e8;
  uRam0000000183231898 = 0x7fff;
  uVar3 = (uRam0000000183231608 ^ _UNK_181425f10) + uRam0000000183231858 + 0xf55ed4fe52cd5cd2;
  uVar7 = (uRam0000000183231858 ^ _UNK_181425f18) + (uRam0000000183231608 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183231608 ^ _UNK_181425f10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183231858 ^ _UNK_181425f18;
  uRam0000000183231818 =
       func_0x0001898acbc0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183231608 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183231858 + 0xf55ed4fe52cd5cd2));
  uVar3 = (uRam0000000183231818 ^ 0xaa12b0129108000) & 0xffffffffffffffe0;
  uRam0000000183231880 = (uRam0000000183231880 ^ uVar3) + 0xaa12b0129108008 ^ 0x5800ffb27a4a5d9e;
  uRam00000001832317b8 = (uRam00000001832317b8 * -0x447c694ba0816e47 ^ uRam0000000183231880) + uVar3
  ;
  uRam0000000183231748 = uRam00000001832317b8 ^ uRam0000000183231880;
  uRam0000000183231848 = 0xaa12b0129108008;
  uRam0000000183231618 = func_0x0001898acbc0(uRam0000000183231610 + 0x8254c2da49d24cec ^ 0x69);
  uVar3 = (uRam0000000183231618 ^ 0x6794dadc05e77fb8) << 0xf |
          (uRam0000000183231618 ^ 0x6794dadc05e77fb8) >> 0x31;
  uRam00000001832317f8 = uRam00000001832317f8 ^ uVar3 ^ 0x7d94d8fb5690bcf4;
  uRam0000000183231758 = (uRam0000000183231758 * -0x107745cb03279961 ^ uRam00000001832317f8) + uVar3
  ;
  uRam00000001832317e8 = uRam0000000183231758 ^ uRam00000001832317f8;
  uRam00000001832317a0 = uRam00000001832317c8;
  uRam00000001832318c8 = 0;
  uRam0000000183231590 = func_0x0001898acbc0(uRam0000000183231580 ^ 0xffac007bb5ffdd56);
  uVar3 = uRam0000000183231590 * 0x2f1e3a2dfbf11b65;
  uRam0000000183231618 = uRam0000000183231508 ^ uVar3 ^ 0x7fff;
  uRam0000000183231800 = (uRam0000000183231800 ^ uVar3) + 0x7fff ^ 0x80fb7016b56acbb0;
  uRam0000000183231740 = (uRam0000000183231740 * -0x14d5dbb59b710f6f ^ uRam0000000183231800) + uVar3
  ;
  uRam0000000183231898 = uRam0000000183231740 ^ uRam0000000183231800;
  uRam0000000183231528 = 0x7fff;
  uRam00000001832316a0 = func_0x0001898acbc0(uRam0000000183231598 + 0x53ff842a0021ff ^ 0x41);
  uVar3 = (uRam00000001832316a0 ^ 0x7fff) * 0x39d4439c6caee95b;
  uRam00000001832317c0 = uRam0000000183231888 ^ uVar3 ^ 0x7fff;
  uRam0000000183231808 = (uRam0000000183231808 ^ uVar3) + 0x7fff ^ 0x8fe04e297ce5f230;
  uRam0000000183231598 = (uRam0000000183231598 * -0x71c26a843df324e9 ^ uRam0000000183231808) + uVar3
  ;
  uRam0000000183231530 = uRam0000000183231598 ^ uRam0000000183231808;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _UNK_181425f20,_UNK_1800170c0);
  uRam0000000183231670 = 0x7fff;
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar7 + lRam00000001832317d0;
  if (auVar6._4_4_ < 0) {
    uVar3 = uRam0000000183231768 ^ uVar7;
  }
  uRam0000000183231578 = func_0x0001898acbc0(SUB161(auVar5 ^ _UNK_181425f20,5) ^ uVar3);
  uVar3 = (param_4 ^ param_4 * 0x7fff ^ uRam0000000183231578) * 0x1ed977fca023568b;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar2;
  uRam0000000183231818 = (uRam0000000183231818 ^ uVar3) + uVar7 ^ 0x792a728ec24da3e9;
  uRam0000000183231880 = (uRam0000000183231880 * -0x24fe786e36986353 ^ uRam0000000183231818) + uVar3
  ;
  uVar4 = uVar7 ^ 0x84222325;
  uVar3 = ((uRam0000000183231750 ^ uVar4) +
          (ulonglong)((uint)uRam0000000183231750 & (uint)uVar4) * 2) *
          (uVar8 - uRam0000000183231588);
  uVar3 = (uVar3 | uRam00000001832315b0) + (uVar3 & uRam00000001832315b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832316e0 = uVar7;
  uRam00000001832318d8 =
       func_0x0001898acbc0((uVar4 ^ uVar8 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ uVar8) & (uint)uVar3));
  uRam00000001832317c0 = (uVar7 + uVar8) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183231750 =
       (uRam0000000183231750 ^ uRam00000001832318d8 & 0xfffffffffffffff0) + uRam00000001832317c0 ^
       0x311e2e92ec509c94;
  uRam00000001832318c0 =
       (uRam00000001832318c0 * 0x5cd095947219e1a1 ^ uRam0000000183231750) +
       (uRam00000001832318d8 & 0xfffffffffffffff0);
  uRam0000000183231530 = uRam00000001832318c0 ^ uRam0000000183231750;
  uRam00000001832317c0 = uRam00000001832317c0 & 0xffffffff;
  uRam0000000183231838 = func_0x0001898acbc0(uRam00000001832315f8 + 0xff57ffeaa800ccff ^ 0x5c);
  uRam0000000183231538 =
       (uRam0000000183231538 ^ uRam0000000183231838 & 0xfffffffffc000000) + 0xfbf79f4d ^
       0x5de7a25ae5a98dab;
  uRam0000000183231630 =
       (uRam0000000183231630 * 0x3080bd92bdcb265 ^ uRam0000000183231538) +
       (uRam0000000183231838 & 0xfffffffffc000000);
  uRam0000000183231530 = uRam0000000183231630 ^ uRam0000000183231538;
  uRam0000000183231520 = 0xfbf79f4d;
  uVar3 = (uRam00000001832316b8 ^ _UNK_181425f30) + uRam0000000183231720 + 0x84222325;
  uVar8 = (uRam0000000183231720 ^ _UNK_181425f38) + uRam00000001832316b8 + 0x16a8e600;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832316b8 ^ _UNK_181425f30;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183231720 ^ _UNK_181425f38;
  uRam0000000183231540 =
       func_0x0001898acbc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001832316b8 + 0x16a8e600) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183231720 + 0x84222325));
  uRam0000000183231598 = uRam0000000183231598 - 0x16a8e600 ^ 0xe28630c3ed222584;
  uRam00000001832316b8 = uRam00000001832315b0 * -0x5f26ccb65ead01b;
  uRam00000001832315b0 = uRam00000001832316b8 ^ uRam0000000183231598;
  uRam0000000183231758 = 0xe9571a00;
  uVar3 = (uRam00000001832317a8 ^ _UNK_181425f40) + uRam0000000183231568 + 0x928b667b;
  uVar8 = (uRam0000000183231568 ^ _UNK_181425f48) + uRam00000001832317a8 + 0xe9571a00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832317a8 ^ _UNK_181425f40;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183231568 ^ _UNK_181425f48;
  uRam0000000183231890 =
       func_0x0001898acbc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001832317a8 + 0xe9571a00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183231568 + 0x928b667b));
  uRam00000001832317f8 = uRam00000001832316c0 ^ uRam0000000183231890 ^ 0x100005f5e;
  uRam0000000183231698 =
       (uRam0000000183231698 ^ uRam0000000183231890) + 0x100005f5e ^ 0xa68c8fcc5152e286;
  uRam0000000183231758 =
       (uRam0000000183231758 * -0x1a391bbf5d471239 ^ uRam0000000183231698) + uRam0000000183231890;
  uRam0000000183231770 = uRam0000000183231758 ^ uRam0000000183231698;
  uRam0000000183231728 = 0x5f5e;
  uVar3 = (~uRam0000000183231500 + 0xeae1da79) *
          ((uRam00000001832317c8 ^ 0x84227c7b) +
          (ulonglong)((uint)uRam00000001832317c8 & 0x84227c7b) * 2);
  uVar3 = (uVar3 | uRam0000000183231580) + (uVar3 & uRam0000000183231580);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183231600 =
       func_0x0001898acbc0((uVar3 | 0x6ec3a603) + (ulonglong)((uint)uVar3 & 0x6ec3a603));
  uVar3 = uRam0000000183231600 & 0x1fffffffffffffff;
  uRam0000000183231708 = uRam0000000183231790 ^ uVar3 ^ 0xeae239d6;
  uRam0000000183231510 = (uRam0000000183231510 ^ uVar3) + 0xeae239d6 ^ 0xb90b38de2ff3a23e;
  uRam0000000183231770 = (uRam0000000183231770 * -0x450476e3f47f708b ^ uRam0000000183231510) + uVar3
  ;
  uRam00000001832316a8 = uRam0000000183231770 ^ uRam0000000183231510;
  uRam0000000183231810 = 0xeae239d6;
  uVar3 = (~uRam0000000183231530 + 0x151e2589) *
          ((uRam0000000183231680 ^ 0x6ec01af3) +
          (ulonglong)((uint)uRam0000000183231680 & 0x6ec01af3) * 2);
  uVar3 = (uVar3 | uRam00000001832315c8) + (uVar3 & uRam00000001832315c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832317e0 =
       func_0x0001898acbc0((uVar3 | 0x7bde3f7b) + (ulonglong)((uint)uVar3 & 0x7bde3f7b));
  uVar8 = uRam00000001832317e0 ^ 0x136037b0cf9ea7b0;
  uVar3 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar8;
  uRam0000000183231850 = uRam0000000183231710 ^ uVar8 ^ 0x100005f5e;
  uRam00000001832318b8 = (uRam00000001832318b8 ^ uVar8) + 0x100005f5e ^ 0x899aa99bb13fe599;
  uRam00000001832316d0 = (uRam00000001832316d0 * -0x76004539e7e45cab ^ uRam00000001832318b8) + uVar8
  ;
  uRam00000001832317a8 = uRam00000001832316d0 ^ uRam00000001832318b8;
  uRam00000001832315c0 = 0x5f5e;
  uRam0000000183231718 = func_0x0001898acbc0(uRam0000000183231578 ^ 0x580061e4fff979);
  uVar3 = uRam0000000183231718 - (uRam0000000183231718 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183231718;
  uRam00000001832318f8 = (uRam00000001832318f8 ^ uVar3) - 0x252c8bc0 ^ 0xe86466bcc175d2d4;
  uRam00000001832316a8 = (uRam00000001832316a8 * 0x300605a5d0243163 ^ uRam00000001832318f8) + uVar3;
  uRam00000001832317c0 = uRam00000001832316a8 ^ uRam00000001832318f8;
  uRam0000000183231688 = 0xdad37440;
  uRam0000000183231520 = func_0x0001898acbc0(0xff64000653d2d175);
  uVar8 = uRam0000000183231520 ^ 0xffffff5e;
  uVar3 = uVar8 >> 1 | uVar8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar8)
          & 0xfffffffffff80000;
  uRam00000001832316c8 = uRam00000001832317d8 ^ uVar3 ^ 0x100005f5e;
  uRam0000000183231810 = (uRam0000000183231810 ^ uVar3) + 0x100005f5e ^ 0xafd410d301ef2f3b;
  uRam00000001832315b8 = (uRam00000001832315b8 * 0x40f284dbe5cf7b17 ^ uRam0000000183231810) + uVar3;
  uRam00000001832315f0 = uRam00000001832315b8 ^ uRam0000000183231810;
  uRam0000000183231518 = uRam0000000183231738 ^ 0x100005f5e;
  uRam00000001832318d0 = 0x5f5e;
  uVar3 = (~uRam00000001832317e0 + 0xfc748fb3) *
          ((uRam0000000183231710 ^ 0x7fd5bc68) +
          (ulonglong)((uint)uRam0000000183231710 & 0x7fd5bc68) * 2);
  uVar3 = (uVar3 | uRam0000000183231580) + (uVar3 & uRam0000000183231580);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183231500 =
       func_0x0001898acbc0((uVar3 | 0x83a133da) + (ulonglong)((uint)uVar3 & 0x83a133da));
  uVar3 = uRam0000000183231500 & 0xfffffffffffffc00;
  uRam0000000183231818 = uRam00000001832315a0 ^ uVar3 ^ 0x1f86c2eff;
  uRam00000001832316f8 = (uRam00000001832316f8 ^ uVar3) + 0x1f86c2eff ^ 0xa59980dec2d807de;
  uRam00000001832315e8 = (uRam00000001832315e8 * 0x474a32903bc01081 ^ uRam00000001832316f8) + uVar3;
  uRam00000001832315f8 = uRam00000001832315e8 ^ uRam00000001832316f8;
  uRam00000001832317b0 = 0xf86c2eff;
  uVar3 = (~uRam00000001832316c0 + 0xfc748fb3) *
          ((uRam0000000183231568 ^ 0x7fd5bc68) +
          (ulonglong)((uint)uRam0000000183231568 & 0x7fd5bc68) * 2);
  uVar3 = (uVar3 | uRam0000000183231588) + (uVar3 & uRam0000000183231588);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183231720 =
       func_0x0001898acbc0((uVar3 | 0x83a133da) + (ulonglong)((uint)uVar3 & 0x83a133da));
  uVar3 = uRam0000000183231720 ^ 0xfff79fff;
  uVar8 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar3 = (uRam0000000183231720 & 0x1ffffffffffff) >> 0x28 |
          (((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3)
           << 0xf | uRam0000000183231720 >> 0x31) << 9;
  uRam0000000183231718 = (uRam0000000183231718 ^ uVar3) + 0x78310ff ^ 0xcb415101e517e849;
  uRam00000001832318f0 = (uRam00000001832318f0 * -0x2ec0f501a9191b3f ^ uRam0000000183231718) + uVar3
  ;
  uRam0000000183231850 = uRam00000001832318f0 ^ uRam0000000183231718;
  uRam0000000183231668 = 0x78310ff;
  uVar3 = (~uRam0000000183231860 + 0xf0e91e01) *
          ((uRam0000000183231588 ^ 0x83a133da) +
          (ulonglong)((uint)uRam0000000183231588 & 0x83a133da) * 2);
  uVar3 = (uVar3 | uRam0000000183231630) + (uVar3 & uRam0000000183231630);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832316f8 =
       func_0x0001898acbc0((uVar3 | 0x73482dda) + (ulonglong)((uint)uVar3 & 0x73482dda));
  uVar3 = uRam00000001832316f8 & 0xfffffffff8000000;
  uRam00000001832315a0 = uRam0000000183231768 ^ uVar3 ^ 0xf86c2eff;
  uRam0000000183231808 = (uRam0000000183231808 ^ uVar3) + 0xf86c2eff ^ 0xb2f57a12869979c2;
  uRam00000001832316d8 = (uRam00000001832316d8 * -0x4449094ccb2ce8ab ^ uRam0000000183231808) + uVar3
  ;
  uRam00000001832316b8 = uRam00000001832316d8 ^ uRam0000000183231808;
  uRam0000000183231648 = 0xf86c2eff;
  uRam0000000183231590 = func_0x0001898acbc0(uRam0000000183231688 ^ 0x1d0083db00210d);
  uRam0000000183231538 = (uRam0000000183231590 ^ 0xf111c8c5bfc8a201) * 0x4287d73078a1cdc5;
  uVar3 = uRam0000000183231538 - (uRam0000000183231538 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam0000000183231538 =
       (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
       uRam0000000183231538;
  uRam0000000183231758 = uRam0000000183231758 ^ uRam0000000183231538 ^ 0xaecf8dedaac58f0e;
  uRam0000000183231740 =
       (uRam0000000183231740 * -0x6f8738eb171442d3 ^ uRam0000000183231758) + uRam0000000183231538;
  uRam0000000183231778 = uRam0000000183231740 ^ uRam0000000183231758;
  uRam0000000183231580 = 0;
  uRam0000000183231588 = func_0x0001898acbc0(uRam00000001832315d8 + 0xff83ff8447001dff ^ 0xd5);
  uRam0000000183231630 = uRam0000000183231640 ^ uRam0000000183231588 ^ 0x5f5e;
  uRam0000000183231830 = (uRam0000000183231830 ^ uRam0000000183231588) + 0x5f5e ^ 0xe20f74b1448858f6
  ;
  uRam0000000183231880 =
       (uRam0000000183231880 * -0x6d1996b5b5faa609 ^ uRam0000000183231830) + uRam0000000183231588;
  uRam0000000183231808 = uRam0000000183231880 ^ uRam0000000183231830;
  uRam0000000183231678 = 0x5f5e;
  uRam0000000183231678 = func_0x0001898acbc0(uRam00000001832315a8 + 0x3cff806cffd9ff ^ 4);
  uVar3 = (ulonglong)(~(uint)uRam0000000183231678 & 0xfbf79f4d) ^ 0xfbf79f4d;
  uVar3 = uVar3 >> 0x1c | uVar3 << 0x24;
  uRam00000001832315d0 = (uRam00000001832315d0 ^ uVar3) + 0x40860b2 ^ 0xe6e066a3c9427183;
  uRam0000000183231638 =
       (uRam0000000183231808 * -0x28bfc969dde9b53f ^ uRam00000001832315d0) + uVar3 ^
       uRam00000001832315d0;
  uRam00000001832316e0 = uRam0000000183231780 ^ 0x40860b2;
  uRam0000000183231808 = 0x40860b2;
  uVar3 = func_0x0001898acbc0(uRam0000000183231720 ^ 0x1eff7bdcffe108);
  uVar8 = uVar3 * -0x2924249f67aec000 | uVar3 * 0x5e7f5b6f6d826145 >> 0x32;
  uRam00000001832315a8 = uVar3 ^ uVar8 ^ 0xc23f914af15bca33;
  uRam00000001832315e8 = (uRam00000001832315e8 * -0x36def89dff567351 ^ uRam00000001832315a8) + uVar8
  ;
  uRam00000001832316d8 = uRam00000001832315e8 ^ uRam00000001832315a8;
  uRam0000000183231770 = 0;
  uVar3 = ((uRam00000001832315d0 ^ 0x84227c7b) +
          (ulonglong)((uint)uRam00000001832315d0 & 0x84227c7b) * 2) * -uRam00000001832318a8;
  uVar3 = (uVar3 | uRam00000001832316e0) + (uVar3 & uRam00000001832316e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183231858 =
       func_0x0001898acbc0((uVar3 | 0x84227c7b) + (ulonglong)((uint)uVar3 & 0x84227c7b));
  uVar3 = uRam0000000183231858 & 0x7ffffffff8;
  uRam0000000183231690 = uRam00000001832318d8 ^ uVar3 ^ 0x5f5e;
  uRam0000000183231668 = (uRam0000000183231668 ^ uVar3) + 0x5f5e ^ 0x1d034e260e6db4be;
  uRam0000000183231560 = (uRam0000000183231560 * 0x579720dbdd9dbb59 ^ uRam0000000183231668) + uVar3;
  uRam0000000183231738 = uRam0000000183231560 ^ uRam0000000183231668;
  uRam0000000183231728 = 0x5f5e;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16781,0x3b3);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001898a86f8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181424578 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hV; bgc (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1898acc50, runtime 6ffff14bcc50) =====

void FUN_1898acc50(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001898acc8c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181425f90 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hV; bgd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1898adb40, runtime 6ffff14bdb40) =====

void FUN_1898adb40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001898adbbd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814264d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



