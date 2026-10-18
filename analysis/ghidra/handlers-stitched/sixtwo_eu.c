// ===== STITCHED CORPUS: sixtwo.eu =====
// handlers: 9  continuation blocks: 83  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x19c088', '0x20b5440', '0x20b5978', '0x20b5988', '0x20b5998', '0x20b59a8', '0x20b59b8', '0x20b59c8', '0x20b59d8', '0x20b5b28', '0x20b5b38', '0x20b5b48', '0x20b5b58', '0x20b5b68', '0x20b5b78', '0x20b6118', '0x20b6128', '0x20bc860', '0x20bc870']

// ===== Lsixtwo/eu; _29c2deca7b712c7c8ef896e4f7d76233 ()V (handler @ image 18ce7f6d0, runtime 6ffff4a8f6d0) =====

void FUN_18ce7f6d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ce7f7b8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820be038 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/eu; auJ (Lsixtwo/gD;)V (handler @ image 18ce32b20, runtime 6ffff4a42b20) =====

void FUN_18ce32b20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd679,0x252)
      /* POOL[0xd679,0x252]: sixtwo/hq | hTUdB | EQALu | aus | watFw | sixtwo/eu | QJqHC | sixtwo/op | sixtwo/ow | xNAmx | Lsixtwo/ow; | auM | (Lsixtwo/os;ZLsixtwo/ow;IZ)V | OBGxe | SDRyJ | net/minecraft/class_1890 | method_60123 | (Lnet/minecraft/class_1799;Lnet/minecraft/class_1309;)F | method_5721 | qLIIU | fBBZY | dmOfg | method_15374 | (D)F | method_15362 | method_15355 | method_5762 | method_40126 | (IFLnet/minecraft/class_1799;)V | auO | net/minecraft/class_1313 | field_6308 | Lnet/minecraft/class_1313; | method_5784 | (Lnet/minecraft/class_1313;Lnet/minecraft/class_243;)V | net/minecraft/class_3417 | field_14717 | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ce32c11 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820aeed0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/eu; auK ()Lsixtwo/cC; (handler @ image 18ce45890, runtime 6ffff4a55890) =====

void FUN_18ce45890(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ce458b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820b4f90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/eu; auL ()Lsixtwo/cJ; (handler @ image 18ce45a90, runtime 6ffff4a55a90) =====

void FUN_18ce45a90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ce45ab0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820b5070 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/eu; auM (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18ce45c90, runtime 6ffff4a55c90) =====

undefined8 FUN_18ce45c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/eu; auN ([B)Ljava/lang/String; (handler @ image 18ce45d20, runtime 6ffff4a55d20) =====

void FUN_18ce45d20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018ce45dc0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820b52d0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/eu; auO (IJ)I (handler @ image 18ce70630, runtime 6ffff4a80630) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce70630(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  
  uRam00000001833421e0 = func_0x00018ce7b920(uRam0000000183341f38 + 0x6ec3fd32aa33b955 ^ 0x5f);
  uVar3 = ((uRam00000001833421e0 & 0xffffffff) * (ulonglong)_UNK_1820bc870 +
           (uRam00000001833421e0 >> 0x20) * (_UNK_1820bc860 & 0xffffffff) << 0x20) +
          (uRam00000001833421e0 & 0xffffffff) * (_UNK_1820bc860 & 0xffffffff) & 0x7fffffffffffffff;
  uRam0000000183341f48 = uRam0000000183342038 ^ uVar3 ^ 0x6a0674914a6b8fff;
  uRam00000001833421f0 = (uRam00000001833421f0 ^ uVar3) + 0x6a0674914a6b8fff ^ 0x1336908225467489;
  uRam0000000183341f68 = (uRam0000000183341f68 * -0x7589aef2489c2855 ^ uRam00000001833421f0) + uVar3
  ;
  uRam0000000183341fb8 = uRam0000000183341f68 ^ uRam00000001833421f0;
  uRam00000001833421b0 = 0x6a0674914a6b8fff;
  uRam0000000183342298 = func_0x00018ce7b920(lRam0000000183341ff0 + 0x5b546ca5c94fd5a2U ^ 0x27);
  uRam0000000183342200 = uRam0000000183342198 ^ uRam0000000183342298 ^ 0x7fff;
  uRam0000000183341fe0 = (uRam0000000183341fe0 ^ uRam0000000183342298) + 0x7fff ^ 0xf3823cc79d11e23b
  ;
  uRam00000001833420d0 =
       (uRam00000001833420d0 * 0x405f22cac8d3c5b3 ^ uRam0000000183341fe0) + uRam0000000183342298;
  uRam0000000183341f30 = uRam00000001833420d0 ^ uRam0000000183341fe0;
  uRam0000000183341fc8 = uRam0000000183342168 ^ 0x7fff;
  uRam0000000183341f20 = 0x7fff;
  uVar3 = (uRam0000000183342200 ^ _UNK_1820bc880) + uRam00000001833422f0 + 0x84222325;
  uVar8 = (uRam00000001833422f0 ^ _UNK_1820bc888) + uRam0000000183342200 + 0x9b82c188cbcfc430;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183342200 ^ _UNK_1820bc880;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833422f0 ^ _UNK_1820bc888;
  uRam00000001833421f8 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183342200 + 0x9b82c188cbcfc430) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833422f0 + 0x84222325));
  uVar3 = uRam00000001833421f8 >> 1 | uRam00000001833421f8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001833421f8;
  uRam00000001833421c0 = (uRam00000001833421c0 ^ uVar3) + 0x647d3e7734303bd0 ^ 0x1a091618a92a0757;
  uRam00000001833421f0 = (uRam00000001833421f0 * 0x2fdff381f6add811 ^ uRam00000001833421c0) + uVar3;
  uRam00000001833422f0 = uRam00000001833421f0 ^ uRam00000001833421c0;
  uRam0000000183342170 = 0x647d3e7734303bd0;
  uRam0000000183341fa0 = func_0x00018ce7b920(uRam0000000183341f68 ^ 0x2e42e50d1440a321);
  uRam0000000183342140 =
       (uRam0000000183342140 ^ uRam0000000183341fc8) + 0xefda3ca94e781bd0 ^ 0x98734b2f77489a56;
  uRam00000001833420b8 =
       (uRam00000001833420b8 * -0x503885c3eaac0b7d ^ uRam0000000183342140) + uRam0000000183341fc8;
  uRam0000000183342068 = uRam00000001833420b8 ^ uRam0000000183342140;
  uRam0000000183341f60 = 0xefda3ca94e781bd0;
  uVar3 = (~uRam0000000183342058 + 0x1025c356b187e431) *
          ((uRam0000000183341fa0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183341fa0 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183342128) + (uVar3 & uRam0000000183342128);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  lRam00000001833421a8 =
       func_0x00018ce7b920((uVar3 | 0x1025c35635a5b8ea) + (uVar3 & 0x1025c35635a5b8ea));
  uVar3 = lRam00000001833421a8 * 0x54a45a113513a14f;
  uRam00000001833420c8 = uRam0000000183342108 ^ uVar3 ^ 0x1025c356b188642f;
  uRam0000000183342208 = (uRam0000000183342208 ^ uVar3) + 0x1025c356b188642f ^ 0x70eefc4ef4dd94ba;
  uRam00000001833421d8 = (uRam00000001833421d8 * 0x1a121a8cc514e441 ^ uRam0000000183342208) + uVar3;
  uRam0000000183342100 = uRam00000001833421d8 ^ uRam0000000183342208;
  uRam0000000183342080 = 0x1025c356b188642f;
  uVar3 = (uRam00000001833420b0 ^ _UNK_1820bc890) + uRam0000000183342190 + 0x1025c35635aa470a;
  uVar8 = (uRam0000000183342190 ^ _UNK_1820bc898) + uRam00000001833420b0 + 0xefda3ca94e781bd0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833420b0 ^ _UNK_1820bc890;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183342190 ^ _UNK_1820bc898;
  uRam00000001833420f0 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833420b0 + 0xefda3ca94e781bd0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183342190 + 0x1025c35635aa470a));
  uVar3 = uRam00000001833420f0 << 0x12 | uRam00000001833420f0 >> 0x2e;
  uRam00000001833421e0 = uRam0000000183341f38 ^ uVar3 ^ 0x7fff;
  uRam0000000183342118 = (uRam0000000183342118 ^ uVar3) + 0x7fff ^ 0xb86d647d14125b2a;
  uRam0000000183342060 = (uRam0000000183342060 * 0x6934fe3bd440445b ^ uRam0000000183342118) + uVar3;
  uRam0000000183341fc0 = uRam0000000183342060 ^ uRam0000000183342118;
  uRam0000000183341fa8 = 0x7fff;
  uVar3 = (uRam0000000183342030 ^ _UNK_1820bc8a0) + uRam0000000183341fe0 + 0xfeffdfed52dddc8b;
  uVar8 = (uRam0000000183341fe0 ^ _UNK_1820bc8a8) + uRam0000000183342030 + 0x7be15ba889c7a083;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183342030 ^ _UNK_1820bc8a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183341fe0 ^ _UNK_1820bc8a8;
  uRam0000000183342270 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183342030 + 0x7be15ba889c7a083) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183341fe0 + 0xfeffdfed52dddc8b));
  uVar8 = uRam0000000183342270 ^ 0x2ca60218e30e960a;
  uVar3 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar8;
  uVar3 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar1 + (uint)bVar1 ^ uVar8;
  uRam0000000183342160 = uRam0000000183342140 ^ uVar8 ^ 0x7ae13b9660c7a031;
  uRam0000000183341fc0 = (uRam0000000183341fc0 ^ uVar8) + 0x7ae13b9660c7a031 ^ 0x14f66a7e8d3a7d76;
  uRam0000000183342070 = (uRam0000000183342070 * 0x375222ac57bf8a2b ^ uRam0000000183341fc0) + uVar8;
  uRam0000000183341f28 = uRam0000000183342070 ^ uRam0000000183341fc0;
  uRam0000000183341ff8 = 0x7ae13b9660c7a031;
  uRam0000000183341f78 = func_0x00018ce7b920(uRam0000000183341fe0 + 0xbcebe9c4f77be97c ^ 0x71);
  uVar3 = (uRam0000000183341f78 ^ 0x2ca60218e30e9600) & 0xffffffffffffff00 ^ 0xfeffdfedd6ffffae;
  uRam0000000183341fb8 = (uRam0000000183341fb8 ^ uVar3) + 0x7ae15ba880c7a082 ^ 0xcdaa92aab0f0408a;
  uRam0000000183341f08 = (uRam0000000183341f08 * -0x1d0f15139122ab83 ^ uRam0000000183341fb8) + uVar3
  ;
  uRam0000000183342198 = uRam0000000183341f08 ^ uRam0000000183341fb8;
  uRam0000000183342160 = 0x7ae15ba880c7a082;
  uVar3 = ((uRam0000000183342080 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183342080 & 0x84225cda) * 2) * -uRam0000000183342268;
  uVar3 = (uVar3 | uRam0000000183341f88) + (uVar3 & uRam0000000183341f88);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183342190 =
       func_0x00018ce7b920((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = uRam0000000183342190 & 0x1ffffffffffffff;
  uRam0000000183341f38 = uRam0000000183342168 ^ uVar3 ^ 0x7fff;
  uRam0000000183341f98 = (uRam0000000183341f98 ^ uVar3) + 0x7fff ^ 0x126bcc97a4f9439a;
  uRam0000000183342290 = (uRam0000000183342290 * -0x5d5c55b2f0af4483 ^ uRam0000000183341f98) + uVar3
  ;
  uRam0000000183342198 = uRam0000000183342290 ^ uRam0000000183341f98;
  uRam00000001833421a0 = 0x7fff;
  uVar3 = (uRam00000001833421d0 ^ _UNK_1820bc8b0) + uRam0000000183342150 + 0xfeffdfed52dddc8b;
  uVar8 = (uRam0000000183342150 ^ _UNK_1820bc8b8) + uRam00000001833421d0 + 0x100201229000051;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833421d0 ^ _UNK_1820bc8b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183342150 ^ _UNK_1820bc8b8;
  uRam0000000183342108 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833421d0 + 0x100201229000051) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183342150 + 0xfeffdfed52dddc8b));
  uRam0000000183342290 = uRam0000000183342290 ^ uRam0000000183342108 ^ 0x21d28bf382d57dbb;
  uRam0000000183342038 =
       (uRam0000000183342038 * -0xc2ac7885dbc1493 ^ uRam0000000183342290) + uRam0000000183342108;
  uRam0000000183341f40 = uRam0000000183342038 ^ uRam0000000183342290;
  uRam00000001833420d8 = 0;
  uVar3 = (uRam00000001833420b8 ^ _UNK_1820bc8c0) + uRam0000000183341f08 + 0x3211182990ddc1af;
  uVar8 = (uRam0000000183341f08 ^ _UNK_1820bc8c8) + uRam00000001833420b8 + 0x3211182914ffe28a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833420b8 ^ _UNK_1820bc8c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183341f08 ^ _UNK_1820bc8c8;
  uRam0000000183342048 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833420b8 + 0x3211182914ffe28a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183341f08 + 0x3211182990ddc1af));
  uVar3 = uRam0000000183342048 << 0x3b | uRam0000000183342048 >> 5;
  uRam0000000183341fe0 = uRam0000000183341fe0 ^ uVar3 ^ 0x63709322585f316e;
  uRam0000000183342260 = (uRam0000000183342260 * 0x168bb7d9af34f2f9 ^ uRam0000000183341fe0) + uVar3;
  uRam00000001833421e0 = uRam0000000183342260 ^ uRam0000000183341fe0;
  uRam0000000183342108 = 0;
  uVar3 = ((uRam00000001833422b0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833422b0 & 0x84225cda) * 2) * -uRam0000000183342050;
  uVar3 = (uVar3 | uRam0000000183342268) + (uVar3 & uRam0000000183342268);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  lRam0000000183342010 =
       func_0x00018ce7b920((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = (ulonglong)(~(uint)lRam0000000183342010 & 0x7fff);
  uRam0000000183341fd8 = uRam0000000183342058 ^ uVar3 ^ 0x7fff;
  uRam0000000183341f60 = (uRam0000000183341f60 ^ uVar3) + 0x7fff ^ 0x120695fac9d73bb8;
  uRam00000001833422f0 =
       (uRam00000001833422f0 * 0x77142de7b0d9d66d ^ uRam0000000183341f60) + uVar3 ^
       uRam0000000183341f60;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_1820bc8d0,_UNK_1800170c0);
  uRam0000000183341fc0 = 0x7fff;
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar8 + lRam0000000183342010;
  if (auVar7._4_4_ < 0) {
    uVar3 = uRam0000000183342110 ^ uVar8;
  }
  uRam0000000183341f40 = func_0x00018ce7b920(SUB161(auVar6 ^ _UNK_1820bc8d0,5) ^ uVar3);
  uVar3 = (param_4 ^ (param_4 | 0x7fff) ^ uRam0000000183341f40) * -0x62e62a2df4ef1155;
  uVar5 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam0000000183342030 = (uRam0000000183342030 ^ uVar3) + uVar5 ^ 0xc3fd92610fc6661a;
  uRam0000000183342148 = (uRam0000000183342148 * 0x301584b99e713b33 ^ uRam0000000183342030) + uVar3;
  uRam0000000183341f20 = uRam0000000183342148 ^ uRam0000000183342030;
  param_3 = param_3 & 0xffffffff;
  uVar8 = uVar5 ^ 0x84222325;
  uVar3 = ((uRam0000000183342050 ^ uVar8) +
          (ulonglong)((uint)uRam0000000183342050 & (uint)uVar8) * 2) *
          (param_3 - uRam00000001833422c0);
  uVar3 = (uVar3 | uRam0000000183342098) + (uVar3 & uRam0000000183342098);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183342160 = uVar5;
  uRam0000000183342240 =
       func_0x00018ce7b920((uVar8 ^ param_3 | uVar3) +
                           (ulonglong)((uint)(uVar8 ^ param_3) & (uint)uVar3));
  param_3 = uVar5 ^ param_3;
  uRam0000000183341f08 =
       (uRam0000000183341f08 ^ ~uRam0000000183342020 & uVar5) + param_3 ^ 0xe77b681b1d3b66a0;
  uRam00000001833422d0 =
       (uRam00000001833422d0 * -0x508112449cac4c37 ^ uRam0000000183341f08) +
       (~uRam0000000183342020 & uVar5);
  uRam0000000183341f48 = uRam00000001833422d0 ^ uRam0000000183341f08;
  uVar3 = (uRam00000001833421d8 ^ _UNK_1820bc8e0) + uRam00000001833421e8 + 0x33e8256c;
  uVar8 = (uRam00000001833421e8 ^ _UNK_1820bc8e8) + uRam00000001833421d8 + 0xfab11e50;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833421d8 ^ _UNK_1820bc8e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833421e8 ^ _UNK_1820bc8e8;
  uRam0000000183342220 = param_3;
  uRam00000001833420f0 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833421d8 + 0xfab11e50) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833421e8 + 0x33e8256c));
  uRam00000001833421d0 =
       (uRam00000001833421d0 ^ uRam00000001833420f0 & 0x7fffffffffffff) + 0x4d7b1819 ^
       0x5b45e670df0818d3;
  uRam00000001833422b8 =
       (uRam00000001833422b8 * 0x24e1969fe7a0209f ^ uRam00000001833421d0) +
       (uRam00000001833420f0 & 0x7fffffffffffff);
  uRam0000000183342250 = uRam00000001833422b8 ^ uRam00000001833421d0;
  uRam0000000183342180 = 0x4d7b1819;
  uRam0000000183342018 = func_0x00018ce7b920(lRam0000000183342218 + 0x730063e2ff8affU ^ 0xea);
  uRam0000000183342220 =
       (uRam0000000183342220 ^ uRam0000000183342018 & 0xfffffffff0000000) - 0x28bfae00 ^
       0xc442d0ced458007;
  uRam0000000183342140 =
       (uRam0000000183342128 * -0x3f2e2577ac9bb32b ^ uRam0000000183342220) +
       (uRam0000000183342018 & 0xfffffffff0000000) ^ uRam0000000183342220;
  uRam0000000183342128 = 0xd7405200;
  uVar3 = (uRam00000001833421c8 ^ _UNK_1820bc8f0) + uRam00000001833420a8 + 0x84223daa;
  uVar8 = (uRam00000001833420a8 ^ _UNK_1820bc8f8) + uRam00000001833421c8 + 0x28bfae00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833421c8 ^ _UNK_1820bc8f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833420a8 ^ _UNK_1820bc8f8;
  uRam0000000183342148 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833421c8 + 0x28bfae00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833420a8 + 0x84223daa));
  uRam00000001833420f0 = uRam0000000183341f00 ^ uRam0000000183341f78 ^ 0x28bfcc8f;
  uRam0000000183342270 =
       (uRam0000000183342270 ^ uRam0000000183341f78) + 0x28bfcc8f ^ 0x8b29c58e2d022abd;
  uRam00000001833422d0 =
       (uRam00000001833422d0 * 0x11f129fb0a25c14f ^ uRam0000000183342270) + uRam0000000183341f78;
  uRam0000000183342160 = uRam00000001833422d0 ^ uRam0000000183342270;
  uRam00000001833422a8 = 0x28bfcc8f;
  uVar3 = ((uRam0000000183342240 ^ 0x84223daa) +
          (ulonglong)((uint)uRam0000000183342240 & 0x84223daa) * 2) * 0x5924e1d7;
  uVar3 = (uVar3 | uRam0000000183342278) + (uVar3 & uRam0000000183342278);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833422f0 =
       func_0x00018ce7b920((uVar3 | 0x5c693cc) + (ulonglong)((uint)uVar3 & 0x5c693cc));
  uRam0000000183342248 = uRam0000000183342168 ^ uRam00000001833422f0 ^ 0x81e4ccf5;
  uRam00000001833422a0 =
       (uRam00000001833422a0 ^ uRam00000001833422f0) + 0x81e4ccf5 ^ 0x361da18e32b2d49;
  uRam00000001833421b8 =
       (uRam00000001833421b8 * -0x5dd53c37d95512d7 ^ uRam00000001833422a0) + uRam00000001833422f0;
  uRam00000001833422e0 = uRam00000001833421b8 ^ uRam00000001833422a0;
  uRam0000000183342078 = 0x81e4ccf5;
  uVar3 = (~uRam00000001833421b0 + 0x7e1b519b) *
          ((uRam0000000183342048 ^ 0x5c6efd0) +
          (ulonglong)((uint)uRam0000000183342048 & 0x5c6efd0) * 2);
  uVar3 = (uVar3 | uRam00000001833421c8) + (uVar3 & uRam00000001833421c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183342080 =
       func_0x00018ce7b920((uVar3 | 0x7bddbe4a) + (ulonglong)((uint)uVar3 & 0x7bddbe4a));
  uVar3 = uRam0000000183342080 - (uRam0000000183342080 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam0000000183342080;
  uRam0000000183342220 = uRam0000000183341fc8 ^ uVar3 ^ 0x100001e8f;
  uRam0000000183342258 = (uRam0000000183342258 ^ uVar3) + 0x100001e8f ^ 0x8a0795e7e1daa111;
  uRam0000000183342000 = (uRam0000000183342000 * -0x65a1c195edcbf427 ^ uRam0000000183342258) + uVar3
  ;
  uRam0000000183341f80 = uRam0000000183342000 ^ uRam0000000183342258;
  uRam0000000183342230 = 0x1e8f;
  uVar3 = (uRam0000000183341f90 ^ _UNK_1820bc900) + uRam0000000183342228 + 0x84222325;
  uVar8 = (uRam0000000183342228 ^ _UNK_1820bc908) + uRam0000000183341f90 + 0x837a5fa4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183341f90 ^ _UNK_1820bc900;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183342228 ^ _UNK_1820bc908;
  uRam0000000183342038 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183341f90 + 0x837a5fa4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183342228 + 0x84222325));
  uVar3 = (uRam0000000183342038 ^ 0x837a5fa4) & 0x7fffffffffffffff;
  uRam0000000183342170 = (uRam0000000183342170 ^ uVar3) - 0x837a5fa4 ^ 0xeec4c66ad9a21b34;
  uRam0000000183342208 = (uRam0000000183342208 * -0x382e9982dcaf979f ^ uRam0000000183342170) + uVar3
  ;
  uRam00000001833422a0 = uRam0000000183342208 ^ uRam0000000183342170;
  uRam00000001833420a0 = 0x7c85a05c;
  uRam0000000183342088 = func_0x00018ce7b920(uRam0000000183342200 ^ 0xff2d0044ba00cc13);
  uVar3 = (uRam0000000183342088 ^ 0x3ff3f62013643a00) & 0xffffffffffffff00;
  uRam00000001833422c0 = uRam0000000183341f80 ^ uVar3 ^ 0x100001e8f;
  uRam0000000183342130 = (uRam0000000183342130 ^ uVar3) + 0x100001e8f ^ 0x6db16773008893d0;
  uRam0000000183341f88 = (uRam0000000183341f88 * 0x7050d8aca5f2d3e5 ^ uRam0000000183342130) + uVar3;
  uRam0000000183342150 = uRam0000000183341f88 ^ uRam0000000183342130;
  uRam0000000183341f90 = 0x1e8f;
  uVar3 = (~uRam0000000183341f28 + 0x4d7b181a) *
          ((uRam0000000183342278 ^ 0x1b5d94f8) +
          (ulonglong)((uint)uRam0000000183342278 & 0x1b5d94f8) * 2);
  uVar3 = (uVar3 | uRam0000000183342080) + (uVar3 & uRam0000000183342080);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183341f58 =
       func_0x00018ce7b920((uVar3 | 0x56268ce1) + (ulonglong)((uint)uVar3 & 0x56268ce1));
  uVar3 = (uRam0000000183341f58 & 0xffffffffffffffc0) -
          (uRam0000000183341f58 >> 1 & 0x5555555555555540);
  uVar3 = (uVar3 & 0x3333333333333300) + (uVar3 >> 2 & 0x3333333333333330);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f03) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183341f58 & 0xffffffffffffffc0) << 2 | uRam0000000183341f58 >> 0x3e;
  uRam0000000183342278 = uRam00000001833420b0 ^ uVar3 ^ 0xecfacff6;
  uRam0000000183341f08 = (uRam0000000183341f08 ^ uVar3) + 0xecfacff6 ^ 0x71c5b36d2aa8c8f8;
  uRam0000000183342070 = (uRam0000000183342070 * -0x3a3089a75bd384df ^ uRam0000000183341f08) + uVar3
  ;
  uRam00000001833422a0 = uRam0000000183342070 ^ uRam0000000183341f08;
  uRam0000000183342128 = 0xecfacff6;
  uVar3 = (~uRam0000000183342048 + 0x4d7b181a) *
          ((uRam0000000183342238 ^ 0x1b5d94f8) +
          (ulonglong)((uint)uRam0000000183342238 & 0x1b5d94f8) * 2);
  uVar3 = (uVar3 | uRam00000001833422c8) + (uVar3 & uRam00000001833422c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183342298 =
       func_0x00018ce7b920((uVar3 | 0x56268ce1) + (ulonglong)((uint)uVar3 & 0x56268ce1));
  uRam00000001833422b8 =
       (uRam00000001833422b8 ^ uRam0000000183342298 ^ 0x30461bae5ce4ac95) + 0xd204afc4 ^
       0x83c5e388e0b9ee85;
  uRam0000000183341fd8 =
       (uRam0000000183341fd8 * -0x2824bd12a364bc0f ^ uRam00000001833422b8) +
       (uRam0000000183342298 ^ 0x30461bae5ce4ac95);
  uRam0000000183341fa0 = uRam0000000183341fd8 ^ uRam00000001833422b8;
  uRam0000000183341fe8 = 0xd204afc4;
  uVar3 = (uRam0000000183342130 ^ _UNK_1820bc910) + uRam0000000183342248 + 0x1b5d94f8;
  uVar8 = (uRam0000000183342248 ^ _UNK_1820bc918) + uRam0000000183342130 + 0x4d7b1819;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183342130 ^ _UNK_1820bc910;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183342248 ^ _UNK_1820bc918;
  uRam00000001833421b8 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183342130 + 0x4d7b1819) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183342248 + 0x1b5d94f8));
  uRam0000000183342278 =
       (uRam0000000183342278 ^ uRam00000001833421b8 ^ 0xdf7fbfdd) + 0xd7b1019 ^ 0xff813dd1d07f64c5;
  uRam0000000183342138 =
       (uRam0000000183342138 * 0x7100cdde9aca2ab1 ^ uRam0000000183342278) +
       (uRam00000001833421b8 ^ 0xdf7fbfdd);
  uRam00000001833420c0 = uRam0000000183342138 ^ uRam0000000183342278;
  uRam0000000183341f38 = 0xd7b1019;
  uVar3 = (~uRam0000000183341f88 + 0x1af62033) *
          ((uRam0000000183342288 ^ 0x56268ce1) +
          (ulonglong)((uint)uRam0000000183342288 & 0x56268ce1) * 2);
  uVar3 = (uVar3 | uRam0000000183341fe8) + (uVar3 & uRam0000000183341fe8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183341f80 =
       func_0x00018ce7b920((uVar3 | 0x4cd0acd3) + (ulonglong)((uint)uVar3 & 0x4cd0acd3));
  uVar3 = uRam0000000183341f80 ^ 0xd204afc4;
  uRam00000001833422a8 = uRam0000000183342110 ^ uVar3 ^ 0xecfacff6;
  uRam0000000183342268 = (uRam0000000183342268 ^ uVar3) + 0xecfacff6 ^ 0x3ec3d314d734ddc4;
  uRam00000001833422f8 = (uRam00000001833422f8 * -0x10d70a38c8078de5 ^ uRam0000000183342268) + uVar3
  ;
  uRam0000000183341f58 = uRam00000001833422f8 ^ uRam0000000183342268;
  uRam0000000183342170 = 0xecfacff6;
  uVar3 = (uRam0000000183342070 ^ _UNK_1820bc920) + uRam00000001833422d0 + 0x68d8ecd3;
  uVar8 = (uRam00000001833422d0 ^ _UNK_1820bc928) + uRam0000000183342070 + 0xecfacff6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183342070 ^ _UNK_1820bc920;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833422d0 ^ _UNK_1820bc928;
  uRam0000000183342018 =
       func_0x00018ce7b920((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183342070 + 0xecfacff6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833422d0 + 0x68d8ecd3));
  uRam0000000183342060 = uRam0000000183342060 ^ uRam0000000183342018 ^ 0x436a4651f2953464;
  uRam0000000183342050 =
       (uRam0000000183342050 * -0x4fe60141fc041587 ^ uRam0000000183342060) + uRam0000000183342018;
  uRam00000001833420d8 = uRam0000000183342050 ^ uRam0000000183342060;
  uRam0000000183342280 = 0;
  uVar3 = ((uRam00000001833421c0 ^ 0x84223daa) +
          (ulonglong)((uint)uRam00000001833421c0 & 0x84223daa) * 2) * -uRam0000000183342228;
  uVar3 = (uVar3 | uRam0000000183341f98) + (uVar3 & uRam0000000183341f98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833421f8 = uRam0000000183342018;
  uRam0000000183342020 =
       func_0x00018ce7b920((uVar3 | 0x84223daa) + (ulonglong)((uint)uVar3 & 0x84223daa));
  uVar3 = uRam0000000183342020 ^ 0x1e8f;
  uRam0000000183342150 = uRam0000000183342108 ^ uVar3 ^ 0x1e8f;
  uRam0000000183342240 = (uRam0000000183342240 ^ uVar3) + 0x1e8f ^ 0xf247582b7a08fdaf;
  uRam00000001833422e8 = (uRam00000001833422e8 * 0x5dcfcee197d076c5 ^ uRam0000000183342240) + uVar3;
  uRam0000000183341f30 = uRam00000001833422e8 ^ uRam0000000183342240;
  uRam0000000183342168 = 0x1e8f;
  uVar3 = func_0x00018ce7b920(uRam00000001833420c0 ^ 0x15001c070061d1);
  uRam0000000183342178 = (uVar3 ^ uVar3 & 0x7fffffffffffffff) + 0x60804822 ^ 0xd287863b85e9a3eb;
  uRam0000000183342240 =
       (uRam0000000183342240 * 0x725ed0c2732989df ^ uRam0000000183342178) +
       (uVar3 & 0x7fffffffffffffff);
  uRam00000001833422e0 = uRam0000000183342240 ^ uRam0000000183342178;
  uRam0000000183341fb0 = 0x60804822;
  uVar3 = (~uRam00000001833421f8 + 0x60804823) *
          ((uRam0000000183341f98 ^ 0x1b5d94f8) +
          (ulonglong)((uint)uRam0000000183341f98 & 0x1b5d94f8) * 2);
  uVar3 = (uVar3 | uRam0000000183342098) + (uVar3 & uRam0000000183342098);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833420e8 =
       func_0x00018ce7b920((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda));
  uVar3 = (ulonglong)(~(uint)uRam00000001833420e8 & 0x9f7fb7dd) * 0x4000000;
  uRam0000000183342188 = uRam0000000183342188 ^ uVar3 ^ 0x740f6b28913dccf6;
  uRam00000001833421c8 = (uRam00000001833421c8 * -0x53936a4e6f0bd71 ^ uRam0000000183342188) + uVar3;
  uRam0000000183341f80 = uRam00000001833421c8 ^ uRam0000000183342188;
  uRam00000001833420b0 = 0;
  uVar3 = ((uRam0000000183342098 ^ 0x84223daa) +
          (ulonglong)((uint)uRam0000000183342098 & 0x84223daa) * 2) * -uRam0000000183341f88;
  uVar3 = (uVar3 | uRam0000000183341f10) + (uVar3 & uRam0000000183341f10);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833420f0 =
       func_0x00018ce7b920((uVar3 | 0x84223daa) + (ulonglong)((uint)uVar3 & 0x84223daa));
  uVar3 = uRam00000001833420f0 ^ 0x1e8f;
  uRam0000000183341f18 = uRam0000000183341f58 ^ uVar3 ^ 0x1e8f;
  uRam0000000183342058 = (uRam0000000183342058 ^ uVar3) + 0x1e8f ^ 0xf2a719c8eea1532c;
  uRam0000000183342258 = (uRam0000000183342258 * -0x5b7ab94300cc14bb ^ uRam0000000183342058) + uVar3
  ;
  uRam00000001833422d0 = uRam0000000183342258 ^ uRam0000000183342058;
  uRam0000000183341f58 = 0x1e8f;
  uRam0000000183341f18 = func_0x00018ce7b920(uRam0000000183342140 ^ 0xffe0ff83dcffddc1);
  uVar3 = uRam0000000183341f18 - (uRam0000000183341f18 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183341f18;
  uRam00000001833422d8 = uRam00000001833422d8 ^ uVar3 ^ 0x32ab68440861ce8f;
  uRam0000000183342298 = (uRam0000000183342298 * 0x3adc570c8ae94bcb ^ uRam00000001833422d8) + uVar3;
  uRam0000000183342070 = uRam0000000183342298 ^ uRam00000001833422d8;
  uRam00000001833421c0 = 0;
  uVar3 = ((uRam0000000183341f00 ^ 0x84223daa) +
          (ulonglong)((uint)uRam0000000183341f00 & 0x84223daa) * 2) * -uRam00000001833422e0;
  uVar3 = (uVar3 | uRam0000000183341f30) + (uVar3 & uRam0000000183341f30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183342098 =
       func_0x00018ce7b920((uVar3 | 0x84223daa) + (ulonglong)((uint)uVar3 & 0x84223daa));
  uVar3 = uRam0000000183342098 * 0x4689b48568e66c39;
  uRam0000000183342178 = uRam00000001833420c8 ^ uVar3 ^ 0x1e8f;
  uRam0000000183342108 = (uRam0000000183342108 ^ uVar3) + 0x1e8f ^ 0xc4be1b9fa828fc92;
  uRam0000000183341f38 = (uRam0000000183341f38 * 0x6ef4e29179fbdebd ^ uRam0000000183342108) + uVar3;
  uRam0000000183342258 = uRam0000000183341f38 ^ uRam0000000183342108;
  uRam0000000183341f18 = 0x1e8f;
  uVar3 = (~uRam0000000183341fd8 + 0x1e90) *
          ((param_3 ^ 0x84222325 ^ uRam0000000183341f10) +
          (ulonglong)((uint)uRam0000000183341f10 & (uint)(param_3 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | uRam0000000183342268) + (uVar3 & uRam0000000183342268);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183342090 =
       func_0x00018ce7b920((param_3 ^ 0x84223daa | uVar3) +
                           (ulonglong)((uint)(param_3 ^ 0x84223daa) & (uint)uVar3));
  uVar3 = ~(ulonglong)((uint)uRam0000000183342090 ^ ((uint)param_3 | 0x1e8f)) & param_3;
  lVar4 = param_3 - ((uint)param_3 & 0x1e8f) * 2;
  uRam0000000183342230 = (uRam0000000183342230 ^ uVar3) + lVar4 + 0x1e8f ^ 0x2867ff76135054f1;
  uRam0000000183342270 = (uRam0000000183342270 * 0x291cb8c197696e09 ^ uRam0000000183342230) + uVar3;
  uRam0000000183342068 = uRam0000000183342270 ^ uRam0000000183342230;
  uRam0000000183341f58 = lVar4 + 0x1e8fU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd679,0x252)
      /* POOL[0xd679,0x252]: sixtwo/hq | hTUdB | EQALu | aus | watFw | sixtwo/eu | QJqHC | sixtwo/op | sixtwo/ow | xNAmx | Lsixtwo/ow; | auM | (Lsixtwo/os;ZLsixtwo/ow;IZ)V | OBGxe | SDRyJ | net/minecraft/class_1890 | method_60123 | (Lnet/minecraft/class_1799;Lnet/minecraft/class_1309;)F | method_5721 | qLIIU | fBBZY | dmOfg | method_15374 | (D)F | method_15362 | method_15355 | method_5762 | method_40126 | (IFLnet/minecraft/class_1799;)V | auO | net/minecraft/class_1313 | field_6308 | Lnet/minecraft/class_1313; | method_5784 | (Lnet/minecraft/class_1313;Lnet/minecraft/class_243;)V | net/minecraft/class_3417 | field_14717 | */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ce727ff did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820baa00 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/eu; auP (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ce7b9b0, runtime 6ffff4a8b9b0) =====

void FUN_18ce7b9b0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ce7b9fb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820bca60 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/eu; auQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ce7c9c0, runtime 6ffff4a8c9c0) =====

void FUN_18ce7c9c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ce7ca49 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820bd020 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xce32c14 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce32c14(void)

{
  FUN_190ddce00();
  (*_DAT_1820b2e98)();
  return;
}


// ----- block @ rva 0xce35ef3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce35ef3(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  (**(code **)(in_stack_00000038 + JNI->GetStaticObjectField /*0x488*/))(in_stack_00000038,in_stack_00000040);
  (*_DAT_1820b14a8)();
  return;
}


// ----- block @ rva 0xce36612 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce36612(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1820b16b8)();
  return;
}


// ----- block @ rva 0xce3712d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce3712d(void)

{
  (*_DAT_1820b2c58)();
  return;
}


// ----- block @ rva 0xce376d6 -----

void FUN_18ce376d6(void)

{
  return;
}


// ----- block @ rva 0xce3a7be -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce3a7be(void)

{
  (*_DAT_1820b3128)();
  return;
}


// ----- block @ rva 0xce3b88c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce3b88c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xce41356 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce41356(void)

{
  (*_DAT_1820b2bf8)();
  return;
}


// ----- block @ rva 0xce44a2d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce44a2d(void)

{
  float unaff_XMM7_Da;
  
  switch(unaff_XMM7_Da < _DAT_1806da0a4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce44a62 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce44a62(void)

{
  (*_DAT_1820b2e18)();
  return;
}


// ----- block @ rva 0xce456c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce456c6(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->CallVoidMethodA /*0x1f8*/))(in_stack_00000038);
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
  (*_DAT_1820b1d38)();
  return;
}


// ----- block @ rva 0xce4570e -----

void FUN_18ce4570e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xce458b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce458b3(void)

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


// ----- block @ rva 0xce458ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce458ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1820b4fc8)();
  return;
}


// ----- block @ rva 0xce45911 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce45911(void)

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


// ----- block @ rva 0xce45926 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce45926(void)

{
  FUN_190dd72e0();
  (*_DAT_1820b5008)();
  return;
}


// ----- block @ rva 0xce4594e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce4594e(void)

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


// ----- block @ rva 0xce459a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce459a2(void)

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


// ----- block @ rva 0xce459ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce459ed(void)

{
  (*_DAT_1820b4fb8)();
  return;
}


// ----- block @ rva 0xce459fe -----

void FUN_18ce459fe(void)

{
  return;
}


// ----- block @ rva 0xce45a06 -----

void FUN_18ce45a06(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xce45ab3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce45ab3(void)

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


// ----- block @ rva 0xce45b11 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce45b11(void)

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


// ----- block @ rva 0xce45b26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce45b26(void)

{
  FUN_190dd72e0();
  (*_DAT_1820b50d8)();
  return;
}


// ----- block @ rva 0xce45b4e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce45b4e(void)

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


// ----- block @ rva 0xce45b6f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce45b6f(void)

{
  FUN_190dd9df0();
  (*_DAT_1820b5108)();
  return;
}


// ----- block @ rva 0xce45bc6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce45bc6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1820b5098)();
  return;
}


// ----- block @ rva 0xce45bed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce45bed(void)

{
  (*_DAT_1820b50b8)();
  return;
}


// ----- block @ rva 0xce45bfe -----

void FUN_18ce45bfe(void)

{
  return;
}


// ----- block @ rva 0xce45c06 -----

void FUN_18ce45c06(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xce45dc3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ce45dfa */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ce45dc3(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xce45e18 -----

void FUN_18ce45e18(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(int *)(unaff_RBP + 0x4c) = (int)*(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00018ce45e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820b5440 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xce45e79 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ce45e90 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ce45e79(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xce45ee3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce45ee3(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar11;
  ulonglong unaff_RDI;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar10 = param_2 * (unaff_RSI - param_1);
  uVar10 = (uVar10 | in_RAX) + (uVar10 & in_RAX);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183341068 =
       func_0x00018ce705a0((unaff_RSI ^ unaff_RDI | uVar10) +
                           (ulonglong)((uint)(unaff_RSI ^ unaff_RDI) & (uint)uVar10));
  uVar7 = _DAT_1820b61f0;
  uVar6 = _DAT_1820b61d0;
  uVar5 = _DAT_1820b61b0;
  uVar4 = _DAT_1820b6190;
  uVar3 = _DAT_1820b6170;
  uVar11 = -unaff_RSI;
  _DAT_183340ff8 = _DAT_183340f88 * 0x3e91507bb29fc35f;
  _DAT_183341048 = _DAT_183341048 - unaff_RSI ^ 0xdc18f6555932ea5f;
  _DAT_183340f88 = _DAT_183340ff8 ^ _DAT_183341048;
  _DAT_183341000 = uVar11 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x50) = (uint)uVar11;
  *(char *)(unaff_RBP + 0x68) = (char)uVar11 + (char)((uVar11 & 0xffffffff) / 10) * -10;
  uVar10 = (~_DAT_183341038 + 0xee) *
           ((_DAT_183341010 ^ 0x84222387) + (ulonglong)((uint)_DAT_183341010 & 0x84222387) * 2);
  uVar10 = (uVar10 | _DAT_183341060) + (uVar10 & _DAT_183341060);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183340fb8 =
       func_0x00018ce705a0((uVar10 | 0x8422236a) + (ulonglong)((uint)uVar10 & 0x8422236a));
  uVar10 = (ulonglong)((uint)(_DAT_183340fb8 >> 0x22) & 0xa2);
  _DAT_183340f00 = (_DAT_183340f00 ^ uVar10) + 0xef ^ 0x8ad17d0083811fcd;
  _DAT_183340fe8 = (_DAT_183340fe8 * -0x6cf0afe7b753e043 ^ _DAT_183340f00) + uVar10;
  _DAT_183340f18 = _DAT_183340fe8 ^ _DAT_183340f00;
  _DAT_1833410c0 = 0xef;
  uVar10 = (~_DAT_183340f58 + 0x81) *
           ((_DAT_183340f98 ^ unaff_RDI) + (ulonglong)((uint)_DAT_183340f98 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_183340f30) + (uVar10 & _DAT_183340f30);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  func_0x00018ce705a0((uVar10 | 0x842223a5) + (ulonglong)((uint)uVar10 & 0x842223a5));
  _DAT_183340f58 = _DAT_183340f58 - 0x80 ^ 0x80fe3a8fc13396e;
  _DAT_183340f48 = _DAT_183341060 * -0x4a47cf1e29154999;
  _DAT_183341060 = _DAT_183340f48 ^ _DAT_183340f58;
  _DAT_183341018 = 0x80;
  uVar10 = (~_DAT_183340f78 + 0x81) *
           ((_DAT_183340fb0 ^ 0x84222315) + (ulonglong)((uint)_DAT_183340fb0 & 0x84222315) * 2);
  uVar10 = (uVar10 | _DAT_183341010) + (uVar10 & _DAT_183341010);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar10 = func_0x00018ce705a0((uVar10 | 0x84222395) + (ulonglong)((uint)uVar10 & 0x84222395));
  uVar8 = uVar10 ^ 0x30;
  _DAT_1833410f0 = _DAT_183340fd0 ^ uVar8 ^ 0xb0;
  _DAT_183340f28 = (uVar10 ^ uVar8) + 0xb0 ^ 0xd76ad219ae7bb094;
  _DAT_183341038 = (_DAT_183341038 * 0x576a179ad4e42917 ^ _DAT_183340f28) + uVar8;
  _DAT_183340ff0 = _DAT_183341038 ^ _DAT_183340f28;
  _DAT_1833410d0 = 0xb0;
  _DAT_1833410b8 = func_0x00018ce705a0(_DAT_183340f48 ^ 0xffdf0083f5001dee);
  uVar10 = _DAT_1833410b8 & 0x7fffffffffff;
  _DAT_183340f98 = (_DAT_183340f88 ^ uVar10 ^ 0x130 ^ uVar10) + 0x130 ^ 0xf1a4c1460327e7c2;
  _DAT_183340f20 = (_DAT_183340f20 * -0x76a359a8e28cdbc3 ^ _DAT_183340f98) + uVar10;
  _DAT_183340f00 = _DAT_183340f20 ^ _DAT_183340f98;
  _DAT_183341010 = 0x30;
  _DAT_183340fa0 = func_0x00018ce705a0(_DAT_183340f68 ^ 0x21007bd8ffe12d);
  uVar10 = (_DAT_183340fa0 ^ 0x1f) << 0xe | _DAT_183340fa0 >> 0x32;
  _DAT_1833410c0 = _DAT_183340f58 ^ uVar10 ^ 0x30;
  _DAT_183341058 = (_DAT_183340f30 ^ uVar10) + 0x30 ^ 0xf266dcf032b1d0f0;
  _DAT_183340f30 = (_DAT_183340f30 * -0x3334cf534d16f905 ^ _DAT_183341058) + uVar10;
  _DAT_183341058 = _DAT_183340f30 ^ _DAT_183341058;
  _DAT_183340f28 = 0x30;
  uVar10 = (_DAT_183340f18 ^ _DAT_1820b6110) + _DAT_1833410b8 + unaff_RDI;
  uVar8 = (_DAT_1833410b8 ^ _UNK_1820b6118) + _DAT_183340f18 + 0xfa;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183340f18 ^ _DAT_1820b6110;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833410b8 ^ _UNK_1820b6118;
  _DAT_183341008 =
       func_0x00018ce705a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183340f18 + 0xfa) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833410b8 + unaff_RDI));
  _DAT_183341040 = _DAT_183341040 - 0xfa ^ 0x64a23bf731bf37b3;
  _DAT_183341098 = _DAT_183340f58 * 0x30f1f8ed28ac0f1f;
  _DAT_183340f58 = _DAT_183341098 ^ _DAT_183341040;
  _DAT_183340f88 = 6;
  uVar10 = (~_DAT_1833410b8 + 0xfb) *
           ((_DAT_183340f40 ^ 0x84222315) + (ulonglong)((uint)_DAT_183340f40 & 0x84222315) * 2);
  uVar10 = (uVar10 | _DAT_183341008) + (uVar10 & _DAT_183341008);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar10 = func_0x00018ce705a0((uVar10 | 0x842223ef) + (ulonglong)((uint)uVar10 & 0x842223ef));
  _DAT_183340f80 = uVar10 ^ 0x30;
  _DAT_1833410f0 = _DAT_1833410f8 ^ _DAT_183340f80 ^ 0x12a;
  _DAT_183340fd8 = (_DAT_183340fd8 ^ _DAT_183340f80) + 0x12a ^ 0xaa9c3401ab483731;
  _DAT_183340f80 = (uVar10 * -0x578a1a714f3c5b89 ^ _DAT_183340fd8) + _DAT_183340f80;
  _DAT_183340fa0 = _DAT_183340f80 ^ _DAT_183340fd8;
  _DAT_183340f40 = 0x2a;
  _DAT_1833410d8 = func_0x00018ce705a0(_DAT_183340ff8 + 0x1d008406ffe1ff ^ 0xb3);
  uVar8 = _UNK_1820b6128;
  uVar10 = _DAT_1820b6120;
  uVar9 = _DAT_1833410d8 ^ 0xd6;
  _DAT_183340f10 = _DAT_183340f98 ^ uVar9 ^ 0x30;
  _DAT_183341098 = (_DAT_183341098 ^ uVar9) + 0x30 ^ 0xc7c2a619801a67f9;
  _DAT_183340f08 = (_DAT_183340f08 * -0x163c8b85e735a84d ^ _DAT_183341098) + uVar9;
  _DAT_183341028 = _DAT_183340f08 ^ _DAT_183341098;
  _DAT_183340f68 = 0x30;
  uVar9 = (_DAT_183341098 ^ _DAT_1820b6120) + _DAT_1833410e0 + 0x842223ca;
  uVar12 = (_DAT_1833410e0 ^ _UNK_1820b6128) + _DAT_183341098 + 0x7c;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183341098 ^ _DAT_1820b6120;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833410e0 ^ _UNK_1820b6128;
  _DAT_183340f60 =
       func_0x00018ce705a0((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183341098 + 0x7c) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833410e0 + 0x842223ca));
  uVar9 = _DAT_183340f60 - (_DAT_183340f60 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183340f60;
  _DAT_183340f30 = _DAT_183341048 ^ uVar9 ^ 0x16b;
  _DAT_183340fc0 = (_DAT_183340fc0 ^ uVar9) + 0x16b ^ 0x861181d44115566f;
  _DAT_183340f50 = (_DAT_183340f50 * 0x5d8140fdb93b4a31 ^ _DAT_183340fc0) + uVar9;
  _DAT_183340fa8 = _DAT_183340f50 ^ _DAT_183340fc0;
  _DAT_183340fd8 = 0x6b;
  uVar9 = (_DAT_183341038 ^ uVar10) + _DAT_183340f68 + 0x842223ca;
  uVar12 = (_DAT_183340f68 ^ uVar8) + _DAT_183341038 + 0x7c;
  uVar10 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183341038 ^ uVar10;
  uVar8 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183340f68 ^ uVar8;
  _DAT_183340fd8 =
       func_0x00018ce705a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183341038 + 0x7c) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183340f68 + 0x842223ca));
  uVar10 = _DAT_183340fd8 >> 1 | _DAT_183340fd8;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x80 ^ _DAT_183340fd8;
  _DAT_183340fc0 = (_DAT_183340fc0 ^ uVar10) + 0x93 ^ 0x3a0cf23da653cf7c;
  _DAT_183340fd0 = (_DAT_183340fd0 * 0x413f4e4fa479543d ^ _DAT_183340fc0) + uVar10;
  _DAT_183341068 = _DAT_183340fd0 ^ _DAT_183340fc0;
  _DAT_1833410e0 = 0x93;
  _DAT_183340fe0 = func_0x00018ce705a0(_DAT_183340ff0 ^ 0xffdcff7c6a0021e6);
  _DAT_1833410b8 =
       (_DAT_1833410b8 ^ _DAT_183340fe0 * -0x18b51cd311f26167) + 0x6c ^ 0xfb662a7ea502efe;
  _DAT_183340fd8 =
       (_DAT_183340fd8 * 0x1726ab7cc34a580f ^ _DAT_1833410b8) + _DAT_183340fe0 * -0x18b51cd311f26167
  ;
  _DAT_183340f80 = _DAT_183340fd8 ^ _DAT_1833410b8;
  _DAT_183340f68 = _DAT_183340f20 ^ 0x6c;
  _DAT_183340f10 = 0x6c;
  uVar10 = (~_DAT_183340f30 + 0xd9) *
           ((_DAT_183340f98 ^ 0x842223b6) + (ulonglong)((uint)_DAT_183340f98 & 0x842223b6) * 2);
  uVar10 = (uVar10 | _DAT_183341030) + (uVar10 & _DAT_183341030);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183340f10 =
       func_0x00018ce705a0((uVar10 | 0x8422236e) + (ulonglong)((uint)uVar10 & 0x8422236e));
  uVar10 = (_DAT_183340f10 & 0x7ffffffff) - (_DAT_183340f10 >> 1 & 0x155555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
           _DAT_183340f10 & 0x7ffffffff;
  _DAT_183341090 = _DAT_1833410a8 ^ uVar10 ^ 0x16b;
  _DAT_183341018 = (_DAT_183341018 ^ uVar10) + 0x16b ^ 0x49c111948ad3bb51;
  _DAT_1833410e0 = (_DAT_1833410e0 * 0x6b3f416494031c97 ^ _DAT_183341018) + uVar10;
  _DAT_183341068 = _DAT_1833410e0 ^ _DAT_183341018;
  _DAT_1833410f0 = 0x6b;
  uVar10 = (~_DAT_183340fa0 + 0x11) *
           ((_DAT_183341048 ^ 0x842223ca) + (ulonglong)((uint)_DAT_183341048 & 0x842223ca) * 2);
  uVar10 = (uVar10 | _DAT_183340f10) + (uVar10 & _DAT_183340f10);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183341010 =
       func_0x00018ce705a0((uVar10 | 0x842223da) + (ulonglong)((uint)uVar10 & 0x842223da));
  _DAT_183341070 = _DAT_183341070 ^ _DAT_183341010 ^ 0xdfb9077d244b5cd2;
  _DAT_183340fb8 = (_DAT_183340fb8 * -0x705d8a4d1232e219 ^ _DAT_183341070) + _DAT_183341010;
  _DAT_183340fd8 = _DAT_183340fb8 ^ _DAT_183341070;
  _DAT_183340fd0 = 0;
  _DAT_183340fb8 = func_0x00018ce705a0(_DAT_183341078 + 0xffdeff7c0cffe1ffU ^ 0x6a);
  _DAT_1833410d0 = _DAT_183340f10 ^ _DAT_183341020 ^ 0x30;
  _DAT_183341098 = (_DAT_183341098 ^ _DAT_183341020) + 0x30 ^ 0xc67e66f2df2d9727;
  _DAT_183341090 = (_DAT_183341090 * -0x7822979992553533 ^ _DAT_183341098) + _DAT_183341020;
  _DAT_183341038 = _DAT_183341090 ^ _DAT_183341098;
  _DAT_183340f68 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x68);
  uVar8 = (ulonglong)bVar1;
  uVar10 = (~_DAT_183341038 + 0x31) *
           ((uVar8 ^ 0x84222325 ^ _DAT_183341010) +
           (ulonglong)((uint)_DAT_183341010 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar10 = (uVar10 | _DAT_1833410c0) + (uVar10 & _DAT_1833410c0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183340f38 =
       func_0x00018ce705a0((uVar8 ^ 0x84222315 | uVar10) +
                           (ulonglong)((uint)(uVar8 ^ 0x84222315) & (uint)uVar10));
  uVar10 = (ulonglong)((uint)bVar1 * 0x30 ^ (uint)_DAT_183340f38) << 0x2e | _DAT_183340f38 >> 0x12;
  uVar8 = uVar8 | 0x30;
  _DAT_183340fa8 = (_DAT_1833410a8 ^ uVar10) + uVar8 ^ 0x950823393c88713e;
  _DAT_183341010 = (_DAT_183341010 * 0x469d70170b61732f ^ _DAT_183340fa8) + uVar10;
  _DAT_183340fa8 = _DAT_183341010 ^ _DAT_183340fa8;
  uVar10 = ~_DAT_183341010 * ((_DAT_183340f90 ^ 0x84222330) + (_DAT_183340f90 & 0x84222330) * 2);
  uVar10 = (uVar10 | _DAT_183340fc0) + (uVar10 & _DAT_183340fc0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1833410a8 = uVar8;
  _DAT_183340fd8 =
       func_0x00018ce705a0((uVar10 | 0xffffffff7bdddccf) + (uVar10 & 0xffffffff7bdddccf));
  auVar2._8_4_ = 0x15;
  auVar2._0_8_ = 0x15;
  auVar2._12_4_ = 0;
  uVar10 = SUB168(auVar2 ^ _DAT_18001a710,0);
  uVar13 = SUB164(auVar2 ^ _DAT_18001a710,0);
  lVar14 = ((ulonglong)_DAT_1820b61a0 * 0x15 << 0x20) + (ulonglong)uVar4 * 0x15;
  _DAT_183340fc8 =
       ((((ulonglong)_DAT_1820b6160 * 0x15 << 0x20) + (ulonglong)_DAT_1820b6150 * 0x15 +
         ((ulonglong)_DAT_1820b6140 * 0x15 << 0x20) + (ulonglong)_DAT_1820b6130 * 0x15 + lVar14 +
        (ulonglong)uVar13 * (ulonglong)uVar3 +
        ((ulonglong)uVar13 * (ulonglong)_DAT_1820b6180 + (uVar10 >> 0x20) * (ulonglong)uVar3 << 0x20
        )) - (((ulonglong)_DAT_1820b61e0 * 0x15 << 0x20) + (ulonglong)uVar6 * 0x15 +
              ((ulonglong)_DAT_1820b61c0 * 0x15 << 0x20) + (ulonglong)uVar5 * 0x15 + lVar14 +
             (ulonglong)uVar13 * (ulonglong)uVar7 +
             ((ulonglong)uVar13 * (ulonglong)_DAT_1820b6200 + (uVar10 >> 0x20) * (ulonglong)uVar7 <<
             0x20))) + 0x292880cd4004890b;
  _DAT_183340fa0 = _DAT_1833410c0 ^ _DAT_183340fd8 ^ _DAT_183340fc8;
  _DAT_183340f70 = (_DAT_183340f70 ^ _DAT_183340fd8) + _DAT_183340fc8 ^ 0xd7b3852aecfb30bb;
  _DAT_183340f58 = (_DAT_183340f58 * 0x38b1c95980e05a65 ^ _DAT_183340f70) + _DAT_183340fd8;
  _DAT_183341090 = _DAT_183340f58 ^ _DAT_183340f70;
  *(char *)(unaff_RBP + -0x50 + _DAT_183340fc8) = (char)uVar8;
  switch((uint)uVar11 < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce4600c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce4600c(ulonglong param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_RDI;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint unaff_XMM10_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  uVar3 = (~in_RAX + 0xee) * ((param_1 ^ 0x84222387) + (ulonglong)((uint)param_1 & 0x84222387) * 2);
  uVar3 = (uVar3 | _DAT_183341060) + (uVar3 & _DAT_183341060);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183340fb8 = func_0x00018ce705a0((uVar3 | 0x8422236a) + (ulonglong)((uint)uVar3 & 0x8422236a))
  ;
  uVar3 = (ulonglong)((uint)(_DAT_183340fb8 >> 0x22) & 0xa2);
  _DAT_183340f00 = (_DAT_183340f00 ^ uVar3) + 0xef ^ 0x8ad17d0083811fcd;
  _DAT_183340fe8 = (_DAT_183340fe8 * -0x6cf0afe7b753e043 ^ _DAT_183340f00) + uVar3;
  _DAT_183340f18 = _DAT_183340fe8 ^ _DAT_183340f00;
  _DAT_1833410c0 = 0xef;
  uVar3 = (~_DAT_183340f58 + 0x81) *
          ((_DAT_183340f98 ^ unaff_RDI) + (ulonglong)((uint)_DAT_183340f98 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183340f30) + (uVar3 & _DAT_183340f30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  func_0x00018ce705a0((uVar3 | 0x842223a5) + (ulonglong)((uint)uVar3 & 0x842223a5));
  _DAT_183340f58 = _DAT_183340f58 - 0x80 ^ 0x80fe3a8fc13396e;
  _DAT_183340f48 = _DAT_183341060 * -0x4a47cf1e29154999;
  _DAT_183341060 = _DAT_183340f48 ^ _DAT_183340f58;
  _DAT_183341018 = 0x80;
  uVar3 = (~_DAT_183340f78 + 0x81) *
          ((_DAT_183340fb0 ^ 0x84222315) + (ulonglong)((uint)_DAT_183340fb0 & 0x84222315) * 2);
  uVar3 = (uVar3 | _DAT_183341010) + (uVar3 & _DAT_183341010);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018ce705a0((uVar3 | 0x84222395) + (ulonglong)((uint)uVar3 & 0x84222395));
  uVar4 = uVar3 ^ 0x30;
  _DAT_1833410f0 = _DAT_183340fd0 ^ uVar4 ^ 0xb0;
  _DAT_183340f28 = (uVar3 ^ uVar4) + 0xb0 ^ 0xd76ad219ae7bb094;
  _DAT_183341038 = (_DAT_183341038 * 0x576a179ad4e42917 ^ _DAT_183340f28) + uVar4;
  _DAT_183340ff0 = _DAT_183341038 ^ _DAT_183340f28;
  _DAT_1833410d0 = 0xb0;
  _DAT_1833410b8 = func_0x00018ce705a0(_DAT_183340f48 ^ 0xffdf0083f5001dee);
  uVar3 = _DAT_1833410b8 & 0x7fffffffffff;
  _DAT_183340f98 = (_DAT_183340f88 ^ uVar3 ^ 0x130 ^ uVar3) + 0x130 ^ 0xf1a4c1460327e7c2;
  _DAT_183340f20 = (_DAT_183340f20 * -0x76a359a8e28cdbc3 ^ _DAT_183340f98) + uVar3;
  _DAT_183340f00 = _DAT_183340f20 ^ _DAT_183340f98;
  _DAT_183341010 = 0x30;
  _DAT_183340fa0 = func_0x00018ce705a0(_DAT_183340f68 ^ 0x21007bd8ffe12d);
  uVar3 = (_DAT_183340fa0 ^ 0x1f) << 0xe | _DAT_183340fa0 >> 0x32;
  _DAT_1833410c0 = _DAT_183340f58 ^ uVar3 ^ 0x30;
  _DAT_183341058 = (_DAT_183340f30 ^ uVar3) + 0x30 ^ 0xf266dcf032b1d0f0;
  _DAT_183340f30 = (_DAT_183340f30 * -0x3334cf534d16f905 ^ _DAT_183341058) + uVar3;
  _DAT_183341058 = _DAT_183340f30 ^ _DAT_183341058;
  _DAT_183340f28 = 0x30;
  uVar3 = (_DAT_183340f18 ^ _DAT_1820b6110) + _DAT_1833410b8 + unaff_RDI;
  uVar4 = (_DAT_1833410b8 ^ _UNK_1820b6118) + _DAT_183340f18 + 0xfa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183340f18 ^ _DAT_1820b6110;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833410b8 ^ _UNK_1820b6118;
  _DAT_183341008 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183340f18 + 0xfa) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833410b8 + unaff_RDI));
  _DAT_183341040 = _DAT_183341040 - 0xfa ^ 0x64a23bf731bf37b3;
  _DAT_183341098 = _DAT_183340f58 * 0x30f1f8ed28ac0f1f;
  _DAT_183340f58 = _DAT_183341098 ^ _DAT_183341040;
  _DAT_183340f88 = 6;
  uVar3 = (~_DAT_1833410b8 + 0xfb) *
          ((_DAT_183340f40 ^ 0x84222315) + (ulonglong)((uint)_DAT_183340f40 & 0x84222315) * 2);
  uVar3 = (uVar3 | _DAT_183341008) + (uVar3 & _DAT_183341008);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018ce705a0((uVar3 | 0x842223ef) + (ulonglong)((uint)uVar3 & 0x842223ef));
  _DAT_183340f80 = uVar3 ^ 0x30;
  _DAT_1833410f0 = _DAT_1833410f8 ^ _DAT_183340f80 ^ 0x12a;
  _DAT_183340fd8 = (_DAT_183340fd8 ^ _DAT_183340f80) + 0x12a ^ 0xaa9c3401ab483731;
  _DAT_183340f80 = (uVar3 * -0x578a1a714f3c5b89 ^ _DAT_183340fd8) + _DAT_183340f80;
  _DAT_183340fa0 = _DAT_183340f80 ^ _DAT_183340fd8;
  _DAT_183340f40 = 0x2a;
  _DAT_1833410d8 = func_0x00018ce705a0(_DAT_183340ff8 + 0x1d008406ffe1ffU ^ 0xb3);
  uVar4 = _UNK_1820b6128;
  uVar3 = _DAT_1820b6120;
  uVar5 = _DAT_1833410d8 ^ 0xd6;
  _DAT_183340f10 = _DAT_183340f98 ^ uVar5 ^ 0x30;
  _DAT_183341098 = (_DAT_183341098 ^ uVar5) + 0x30 ^ 0xc7c2a619801a67f9;
  _DAT_183340f08 = (_DAT_183340f08 * -0x163c8b85e735a84d ^ _DAT_183341098) + uVar5;
  _DAT_183341028 = _DAT_183340f08 ^ _DAT_183341098;
  _DAT_183340f68 = 0x30;
  uVar5 = (_DAT_183341098 ^ _DAT_1820b6120) + _DAT_1833410e0 + 0x842223ca;
  uVar6 = (_DAT_1833410e0 ^ _UNK_1820b6128) + _DAT_183341098 + 0x7c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183341098 ^ _DAT_1820b6120;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833410e0 ^ _UNK_1820b6128;
  _DAT_183340f60 =
       func_0x00018ce705a0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183341098 + 0x7c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833410e0 + 0x842223ca));
  uVar5 = _DAT_183340f60 - (_DAT_183340f60 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & unaff_R15) * 0x101010101010101 >> 0x38) << 2 ^ _DAT_183340f60;
  _DAT_183340f30 = _DAT_183341048 ^ uVar5 ^ 0x16b;
  _DAT_183340fc0 = (_DAT_183340fc0 ^ uVar5) + 0x16b ^ 0x861181d44115566f;
  _DAT_183340f50 = (_DAT_183340f50 * 0x5d8140fdb93b4a31 ^ _DAT_183340fc0) + uVar5;
  _DAT_183340fa8 = _DAT_183340f50 ^ _DAT_183340fc0;
  _DAT_183340fd8 = 0x6b;
  uVar5 = (_DAT_183341038 ^ uVar3) + _DAT_183340f68 + 0x842223ca;
  uVar6 = (_DAT_183340f68 ^ uVar4) + _DAT_183341038 + 0x7c;
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183341038 ^ uVar3;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183340f68 ^ uVar4;
  _DAT_183340fd8 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183341038 + 0x7c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183340f68 + 0x842223ca));
  uVar3 = _DAT_183340fd8 >> 1 | _DAT_183340fd8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_R15) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_183340fd8;
  _DAT_183340fc0 = (_DAT_183340fc0 ^ uVar3) + 0x93 ^ 0x3a0cf23da653cf7c;
  _DAT_183340fd0 = (_DAT_183340fd0 * 0x413f4e4fa479543d ^ _DAT_183340fc0) + uVar3;
  _DAT_183341068 = _DAT_183340fd0 ^ _DAT_183340fc0;
  _DAT_1833410e0 = 0x93;
  _DAT_183340fe0 = func_0x00018ce705a0(_DAT_183340ff0 ^ 0xffdcff7c6a0021e6);
  _DAT_1833410b8 =
       (_DAT_1833410b8 ^ _DAT_183340fe0 * -0x18b51cd311f26167) + 0x6c ^ 0xfb662a7ea502efe;
  _DAT_183340fd8 =
       (_DAT_183340fd8 * 0x1726ab7cc34a580f ^ _DAT_1833410b8) + _DAT_183340fe0 * -0x18b51cd311f26167
  ;
  _DAT_183340f80 = _DAT_183340fd8 ^ _DAT_1833410b8;
  _DAT_183340f68 = _DAT_183340f20 ^ 0x6c;
  _DAT_183340f10 = 0x6c;
  uVar3 = (~_DAT_183340f30 + 0xd9) *
          ((_DAT_183340f98 ^ 0x842223b6) + (ulonglong)((uint)_DAT_183340f98 & 0x842223b6) * 2);
  uVar3 = (uVar3 | _DAT_183341030) + (uVar3 & _DAT_183341030);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183340f10 = func_0x00018ce705a0((uVar3 | 0x8422236e) + (ulonglong)((uint)uVar3 & 0x8422236e))
  ;
  uVar3 = (_DAT_183340f10 & 0x7ffffffff) - (_DAT_183340f10 >> 1 & 0x155555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar3 >> 4) + uVar3 & unaff_R15) * 0x101010101010101 >> 0x38 ^
          _DAT_183340f10 & 0x7ffffffff;
  _DAT_183341090 = _DAT_1833410a8 ^ uVar3 ^ 0x16b;
  _DAT_183341018 = (_DAT_183341018 ^ uVar3) + 0x16b ^ 0x49c111948ad3bb51;
  _DAT_1833410e0 = (_DAT_1833410e0 * 0x6b3f416494031c97 ^ _DAT_183341018) + uVar3;
  _DAT_183341068 = _DAT_1833410e0 ^ _DAT_183341018;
  _DAT_1833410f0 = 0x6b;
  uVar3 = (~_DAT_183340fa0 + 0x11) *
          ((_DAT_183341048 ^ 0x842223ca) + (ulonglong)((uint)_DAT_183341048 & 0x842223ca) * 2);
  uVar3 = (uVar3 | _DAT_183340f10) + (uVar3 & _DAT_183340f10);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183341010 = func_0x00018ce705a0((uVar3 | 0x842223da) + (ulonglong)((uint)uVar3 & 0x842223da))
  ;
  _DAT_183341070 = _DAT_183341070 ^ _DAT_183341010 ^ 0xdfb9077d244b5cd2;
  _DAT_183340fb8 = (_DAT_183340fb8 * -0x705d8a4d1232e219 ^ _DAT_183341070) + _DAT_183341010;
  _DAT_183340fd8 = _DAT_183340fb8 ^ _DAT_183341070;
  _DAT_183340fd0 = 0;
  _DAT_183340fb8 = func_0x00018ce705a0(_DAT_183341078 + 0xffdeff7c0cffe1ffU ^ 0x6a);
  _DAT_1833410d0 = _DAT_183340f10 ^ _DAT_183341020 ^ 0x30;
  _DAT_183341098 = (_DAT_183341098 ^ _DAT_183341020) + 0x30 ^ 0xc67e66f2df2d9727;
  _DAT_183341090 = (_DAT_183341090 * -0x7822979992553533 ^ _DAT_183341098) + _DAT_183341020;
  _DAT_183341038 = _DAT_183341090 ^ _DAT_183341098;
  _DAT_183340f68 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x68);
  uVar4 = (ulonglong)bVar1;
  uVar3 = (~_DAT_183341038 + 0x31) *
          ((uVar4 ^ 0x84222325 ^ _DAT_183341010) +
          (ulonglong)((uint)_DAT_183341010 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | _DAT_1833410c0) + (uVar3 & _DAT_1833410c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183340f38 =
       func_0x00018ce705a0((uVar4 ^ 0x84222315 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ 0x84222315) & (uint)uVar3));
  uVar3 = (ulonglong)((uint)bVar1 * 0x30 ^ (uint)_DAT_183340f38) << 0x2e | _DAT_183340f38 >> 0x12;
  uVar4 = uVar4 | 0x30;
  _DAT_183340fa8 = (_DAT_1833410a8 ^ uVar3) + uVar4 ^ 0x950823393c88713e;
  _DAT_183341010 = (_DAT_183341010 * 0x469d70170b61732f ^ _DAT_183340fa8) + uVar3;
  _DAT_183340fa8 = _DAT_183341010 ^ _DAT_183340fa8;
  uVar3 = ~_DAT_183341010 *
          ((unaff_R13 ^ 0x84222325 ^ _DAT_183340f90) +
          ((unaff_R13 ^ 0x84222325) & _DAT_183340f90) * 2);
  uVar3 = (uVar3 | _DAT_183340fc0) + (uVar3 & _DAT_183340fc0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833410a8 = uVar4;
  _DAT_183340fd8 =
       func_0x00018ce705a0((unaff_R13 ^ 0xffffffff7bdddcda | uVar3) +
                           (uVar3 & (unaff_R13 ^ 0xffffffff7bdddcda)));
  uVar9 = (uint)(unaff_R13 >> 0x20);
  auVar2._8_4_ = (int)unaff_R13;
  auVar2._0_8_ = unaff_R13;
  auVar2._12_4_ = uVar9;
  uVar3 = SUB168(auVar2 ^ _DAT_18001a710,0);
  uVar7 = SUB164(auVar2 ^ _DAT_18001a710,0);
  lVar8 = ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_1820b61a0 +
           (ulonglong)uVar9 * (ulonglong)unaff_XMM13_Da << 0x20) +
          (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM13_Da;
  _DAT_183340fc8 =
       ((((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_1820b6160 +
          (unaff_R13 >> 0x20) * (ulonglong)_DAT_1820b6150 << 0x20) +
         (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_1820b6150 +
         ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_1820b6140 +
          (unaff_R13 >> 0x20) * (ulonglong)_DAT_1820b6130 << 0x20) +
         (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_1820b6130 + lVar8 +
        (ulonglong)uVar7 * (ulonglong)unaff_XMM12_Da +
        ((ulonglong)uVar7 * (ulonglong)_DAT_1820b6180 + (uVar3 >> 0x20) * (ulonglong)unaff_XMM12_Da
        << 0x20)) -
       (((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_1820b61e0 +
         (unaff_R13 >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
        (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM15_Da +
        ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_1820b61c0 +
         (unaff_R13 >> 0x20) * (ulonglong)unaff_XMM10_Da << 0x20) +
        (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM10_Da + lVar8 +
       (ulonglong)uVar7 * (ulonglong)unaff_XMM14_Da +
       ((ulonglong)uVar7 * (ulonglong)_DAT_1820b6200 + (uVar3 >> 0x20) * (ulonglong)unaff_XMM14_Da
       << 0x20))) + 0x292880cd4004890b;
  _DAT_183340fa0 = _DAT_1833410c0 ^ _DAT_183340fd8 ^ _DAT_183340fc8;
  _DAT_183340f70 = (_DAT_183340f70 ^ _DAT_183340fd8) + _DAT_183340fc8 ^ 0xd7b3852aecfb30bb;
  _DAT_183340f58 = (_DAT_183340f58 * 0x38b1c95980e05a65 ^ _DAT_183340f70) + _DAT_183340fd8;
  _DAT_183341090 = _DAT_183340f58 ^ _DAT_183340f70;
  *(char *)(unaff_RBP + -0x50 + _DAT_183340fc8) = (char)uVar4;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce4ff3b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce4ff3b(void)

{
  int iVar1;
  ulonglong uVar2;
  int unaff_EBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  longlong *unaff_R13;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *(undefined8 *)(unaff_RBP + 0x38) = unaff_RSI;
  *(undefined8 *)(unaff_RBP + 0x10) = unaff_R12;
  uVar3 = (_DAT_183340f78 ^ _DAT_1820b5970) + _DAT_183340f40 + 0x84222325;
  uVar4 = (_DAT_183340f40 ^ _UNK_1820b5978) + _DAT_183340f78 + 0x4df545a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183340f78 ^ _DAT_1820b5970;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183340f40 ^ _UNK_1820b5978;
  _DAT_183340f88 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183340f78 + 0x4df545a0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183340f40 + 0x84222325));
  _DAT_183340fd8 =
       (_DAT_183340fd8 ^ _DAT_183340f88 & 0x1fffffffe0) - 0x4df545a0 ^ 0x7f932cd4579da2ac;
  _DAT_183340fb0 =
       (_DAT_183340fb0 * 0x2fa24c039d2b0813 ^ _DAT_183340fd8) + (_DAT_183340f88 & 0x1fffffffe0);
  _DAT_183340ff8 = _DAT_183340fb0 ^ _DAT_183340fd8;
  _DAT_1833410c8 = 0xb20aba60;
  uVar3 = (_DAT_183340f28 ^ _DAT_1820b5980) + _DAT_1833410a8 + 0x7bdddcdb;
  uVar4 = (_DAT_1833410a8 ^ _UNK_1820b5988) + _DAT_183340f28 + 0x4df545a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183340f28 ^ _DAT_1820b5980;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833410a8 ^ _UNK_1820b5988;
  _DAT_183340ff0 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183340f28 + 0x4df545a0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833410a8 + 0x7bdddcdb));
  uVar3 = _DAT_183340ff0 - (_DAT_183340ff0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183340ff0;
  _DAT_183340f28 = _DAT_1833410a8 ^ uVar3 ^ 0x14df5459e;
  _DAT_183340fe0 = (_DAT_183340fe0 ^ uVar3) + 0x14df5459e ^ 0x73e86f704d005935;
  _DAT_183340f80 = (_DAT_183340f80 * 0x616c9857475ec6ef ^ _DAT_183340fe0) + uVar3;
  _DAT_183340f18 = _DAT_183340f80 ^ _DAT_183340fe0;
  _DAT_1833410d8 = 0x4df5459e;
  uVar3 = (_DAT_183340ff0 ^ _DAT_1820b5990) + _DAT_183341018 + 0x84222325;
  uVar4 = (_DAT_183341018 ^ _UNK_1820b5998) + _DAT_183340ff0 + 0xffc42526;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183340ff0 ^ _DAT_1820b5990;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183341018 ^ _UNK_1820b5998;
  _DAT_183341010 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183340ff0 + 0xffc42526) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183341018 + 0x84222325));
  _DAT_183340f38 = (_DAT_183340f38 ^ _DAT_183341010 ^ 0xffc42526) - 0xffc42526 ^ 0x2da0074751b897c7;
  _DAT_183341098 =
       (_DAT_183341098 * 0x122096b6ac947be1 ^ _DAT_183340f38) + (_DAT_183341010 ^ 0xffc42526);
  _DAT_1833410c0 = _DAT_183341098 ^ _DAT_183340f38;
  _DAT_1833410e8 = 0x3bdada;
  uVar3 = (_DAT_183341040 ^ _DAT_1820b59a0) + _DAT_183341008 + 0x84222325;
  uVar4 = (_DAT_183341008 ^ _UNK_1820b59a8) + _DAT_183341040 + 0x82d4c28;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183341040 ^ _DAT_1820b59a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183341008 ^ _UNK_1820b59a8;
  uVar3 = func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183341040 + 0x82d4c28) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183341008 + 0x84222325));
  uVar4 = ((uVar3 ^ 0x82d4c28) & 0x7fffffffffffff) * 0x30502e9608df7b31;
  _DAT_1833410e0 = (uVar3 ^ uVar4) - 0x82d4c28 ^ 0x6d2e0b2b666f0b75;
  _DAT_183340f00 = (_DAT_183340f00 * -0x137b1c442aa408cf ^ _DAT_1833410e0) + uVar4;
  _DAT_183340f98 = _DAT_183340f00 ^ _DAT_1833410e0;
  _DAT_183340fd0 = 0xf7d2b3d8;
  uVar3 = (~_DAT_183340f50 + 0x82d4c29) *
          ((_DAT_1833410a0 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_1833410a0 & 0x7bdddcdb) * 2);
  uVar3 = (uVar3 | _DAT_183340f68) + (uVar3 & _DAT_183340f68);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183341080 = func_0x00018ce705a0((uVar3 | 0x73f090f3) + (ulonglong)((uint)uVar3 & 0x73f090f3))
  ;
  uVar3 = (_DAT_183341080 ^ 0xfffffffe) & 0x1fffffffffffff;
  _DAT_1833410c0 = _DAT_183341038 ^ uVar3 ^ 0x1082d4c26;
  _DAT_183340f60 = (_DAT_183340f60 ^ uVar3) + 0x1082d4c26 ^ 0xc963e39210acf573;
  _DAT_183340f10 = (_DAT_183340f10 * -0xcb490b8d547d6c7 ^ _DAT_183340f60) + uVar3;
  _DAT_183340ff8 = _DAT_183340f10 ^ _DAT_183340f60;
  _DAT_1833410d0 = _DAT_183340fd0 ^ 0x1082d4c26;
  _DAT_183341050 = 0x82d4c26;
  _DAT_183340f78 = func_0x00018ce705a0(_DAT_1833410a0 + 0x43fff9d500dcff ^ 0xc6);
  uVar3 = _DAT_183340f78 ^ 0xfffffffe;
  _DAT_183341080 = _DAT_183341090 ^ uVar3 ^ 0xfffffffe;
  _DAT_183340fd0 = (_DAT_183340fd0 ^ uVar3) + 0xfffffffe ^ 0xdbb5c96128fcaa79;
  _DAT_183341000 = (_DAT_183341000 * -0x5049102669d83703 ^ _DAT_183340fd0) + uVar3;
  _DAT_1833410b0 = _DAT_183341000 ^ _DAT_183340fd0;
  _DAT_183340f68 = 0xfffffffe;
  uVar3 = (~_DAT_183341018 + 0x1c0eaf6d) *
          ((_DAT_183340f78 ^ 0x37d1ffd9) + (ulonglong)((uint)_DAT_183340f78 & 0x37d1ffd9) * 2);
  uVar3 = (uVar3 | _DAT_183340f20) + (uVar3 & _DAT_183340f20);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018ce705a0((uVar3 | 0x2bdf50b5) + (ulonglong)((uint)uVar3 & 0x2bdf50b5));
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  uVar4 = uVar2 >> 1 | uVar2;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_183340f60 =
       uVar2 ^ 0xb3f3dcfc ^
       (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2;
  _DAT_183340ff0 = (_DAT_183340ff0 ^ _DAT_183340f60) + 0xaffd7390 ^ 0xe970345e1b47d2fc;
  _DAT_183340f60 = (uVar3 * -0x6397d8555d4ddbbb ^ _DAT_183340ff0) + _DAT_183340f60;
  _DAT_1833410c0 = _DAT_183340f60 ^ _DAT_183340ff0;
  _DAT_183340fd0 = 0xaffd7390;
  uVar3 = (_DAT_183341008 ^ _DAT_1820b59b0) + 0xe7cf7369;
  uVar4 = (_UNK_1820b59b8 ^ 0xaffd7390) + _DAT_183341008 + 0x1c0eaf6c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183341008 ^ _DAT_1820b59b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _UNK_1820b59b8 ^ 0xaffd7390;
  _DAT_183340fd8 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183341008 + 0x1c0eaf6c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - 0xe7cf7369);
  uVar3 = (ulonglong)((uint)_DAT_183340fd8 & 0xb3f3dcfc);
  _DAT_183341000 = (_DAT_183341000 ^ uVar3) + 0x10028c6c ^ 0x18a861a548db45ad;
  _DAT_183341028 = (_DAT_183341028 * 0xf839bb2fd918e5d ^ _DAT_183341000) + uVar3;
  _DAT_1833410f8 = _DAT_183341028 ^ _DAT_183341000;
  _DAT_183341088 = 0x10028c6c;
  uVar3 = (_DAT_183340fd8 ^ _DAT_1820b59c0) + _DAT_183340f20 + 0x2bdf50b5;
  uVar4 = (_DAT_183340f20 ^ _UNK_1820b59c8) + _DAT_183340fd8 + 0x200518d8;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183340fd8 ^ _DAT_1820b59c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183340f20 ^ _UNK_1820b59c8;
  _DAT_183341008 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183340fd8 + 0x200518d8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183340f20 + 0x2bdf50b5));
  uVar3 = _DAT_183341008 & 0x3fffffffffffffff;
  _DAT_183340f60 = _DAT_183340f68 ^ uVar3 ^ 0xd0028c68;
  _DAT_1833410b0 = (_DAT_1833410b0 ^ uVar3) + 0xd0028c68 ^ 0xcc4d5e5013084954;
  _DAT_183341058 = (_DAT_183341058 * -0xc442f0d474c956b ^ _DAT_1833410b0) + uVar3;
  _DAT_183340f18 = _DAT_183341058 ^ _DAT_1833410b0;
  _DAT_183341028 = 0xd0028c68;
  uVar3 = ((_DAT_183340f80 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_183340f80 & 0x7bdddcdb) * 2) *
          -_DAT_183340fb8;
  uVar3 = (uVar3 | _DAT_183341088) + (uVar3 & _DAT_183341088);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833410b8 = func_0x00018ce705a0((uVar3 | 0x7bdddcdb) + (ulonglong)((uint)uVar3 & 0x7bdddcdb))
  ;
  uVar3 = _DAT_1833410b8 & 0x7fffffffffffffff;
  _DAT_183341088 = _DAT_183340f70 ^ uVar3 ^ 0xfffffffe;
  _DAT_183340f90 = (_DAT_183340f90 ^ uVar3) + 0xfffffffe ^ 0x156aeadb42f000cc;
  _DAT_183340f18 = (_DAT_183340f18 * -0x11453ad6073b9ee5 ^ _DAT_183340f90) + uVar3;
  _DAT_1833410c8 = _DAT_183340f18 ^ _DAT_183340f90;
  _DAT_1833410c0 = 0xfffffffe;
  _DAT_183340fe8 = func_0x00018ce705a0(_DAT_1833410d0 + 0x47de0011ff ^ 0xb5);
  _DAT_183341098 = (_DAT_183341098 ^ _DAT_183340fe8) + 0x4c0c2303 ^ 0xedb145cc1a5bfaf9;
  _DAT_1833410a8 = (_DAT_1833410a8 * 0x451d41cfcf84ee4f ^ _DAT_183341098) + _DAT_183340fe8;
  _DAT_183340f38 = _DAT_1833410a8 ^ _DAT_183341098;
  _DAT_183341048 = 0x4c0c2303;
  uVar3 = ((_DAT_183341008 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_183341008 & 0x7bdddcdb) * 2) *
          -_DAT_183340fd8;
  uVar3 = (uVar3 | _DAT_183340f48) + (uVar3 & _DAT_183340f48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183341048 = func_0x00018ce705a0((uVar3 | 0x7bdddcdb) + (ulonglong)((uint)uVar3 & 0x7bdddcdb))
  ;
  _DAT_1833410e8 = (_DAT_1833410e8 ^ _DAT_183341048) + 0xfffffffe ^ 0x7a24b7fd9991cd8;
  _DAT_183340f58 = (_DAT_183340f58 * 0x1b1cec8f4dc1c555 ^ _DAT_1833410e8) + _DAT_183341048;
  _DAT_183341028 = _DAT_183340f58 ^ _DAT_1833410e8;
  _DAT_183340f90 = 0xfffffffe;
  uVar3 = (_DAT_183340f28 ^ _DAT_1820b59d0) + _DAT_183341010 + 0x16d1f311;
  uVar4 = (_DAT_183341010 ^ _UNK_1820b59d8) + _DAT_183340f28 + 0x92f3d034;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183340f28 ^ _DAT_1820b59d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183341010 ^ _UNK_1820b59d8;
  _DAT_183340f68 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183340f28 + 0x92f3d034) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183341010 + 0x16d1f311));
  _DAT_183341078 = _DAT_183341078 ^ _DAT_183340f68 ^ 0x49f08e56e22646c7;
  _DAT_183341058 = (_DAT_183341058 * 0x65a26c0f234fa701 ^ _DAT_183341078) + _DAT_183340f68;
  _DAT_183340f70 = _DAT_183341058 ^ _DAT_183341078;
  _DAT_1833410f0 = 0;
  uVar3 = (_DAT_183340fe0 ^ 0x7bdddcdb) + _DAT_183341048 + 0x7bdddcdb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183340fe0 ^ 0x7bdddcdb;
  uVar4 = ((_DAT_183341048 + _DAT_183340fe0) * 0x2000 | _DAT_183341048 + _DAT_183340fe0 >> 0x33) ^
          _DAT_183341048;
  _DAT_183340f00 =
       func_0x00018ce705a0((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_183340fe0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183341048 + 0x7bdddcdb));
  uVar3 = (_DAT_183340f00 << 0x1f | _DAT_183340f00 >> 0x21) * 0x529f5552568c56f7;
  _DAT_183340f38 = _DAT_183340f90 ^ uVar3 ^ 0xfffffffe;
  _DAT_1833410e0 = (_DAT_1833410e0 ^ uVar3) + 0xfffffffe ^ 0x9b33aff46b2cad02;
  _DAT_183340f68 = (_DAT_183340f68 * 0x30bcc8378788d955 ^ _DAT_1833410e0) + uVar3;
  _DAT_183340f78 = _DAT_183340f68 ^ _DAT_1833410e0;
  _DAT_183341028 = 0xfffffffe;
  *(int *)(unaff_RBP + -0xc) = unaff_EBX + -2;
  *(longlong **)(unaff_RBP + 0x40) = unaff_R13;
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x38);
  *(undefined4 *)(unaff_RBP + 0x80) = 0;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))(extraout_XMM0_Qa,*(undefined8 *)(unaff_RBP + 0x38));
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce50f00 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce50f00(undefined4 param_1)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  undefined8 unaff_R14;
  
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_R14;
  *(undefined4 *)(unaff_RBP + 0x80) = param_1;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce578d1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce578d1(ulonglong param_1,ulonglong param_2)

{
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint unaff_XMM8_Da;
  uint uVar7;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  *(bool *)(unaff_RBP + 0x68) = *(longlong *)(unaff_RBP + -8) == 0;
  uVar1 = param_1 + in_RCX + param_2;
  uVar2 = (param_2 ^ 1) + in_RAX + 1;
  param_1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ param_1;
  uVar1 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_2 ^ 1;
  _DAT_183340fc8 =
       func_0x00018ce705a0((uVar1 << 0x1d | uVar1 >> 0x23) - (in_RAX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  uVar6 = unaff_ESI & unaff_XMM8_Da;
  uVar4 = unaff_ESI | unaff_XMM8_Da;
  uVar7 = unaff_ESI ^ unaff_XMM8_Da;
  lVar5 = ((ulonglong)unaff_ESI * (ulonglong)_DAT_1820b5a90 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_1820b5a80;
  uVar1 = _DAT_183340fc8 & 0x3fffffffffff;
  _DAT_183340fc0 =
       ((((ulonglong)uVar7 * (ulonglong)_DAT_1820b5a70 << 0x20) +
         (ulonglong)uVar7 * (ulonglong)unaff_XMM10_Da +
         ((ulonglong)uVar4 * (ulonglong)_DAT_1820b5a50 << 0x20) +
         (ulonglong)uVar4 * (ulonglong)_DAT_1820b5a40 +
         ((ulonglong)uVar6 * (ulonglong)_DAT_1820b5a30 << 0x20 |
         (ulonglong)uVar6 * (ulonglong)_DAT_1820b5a20) +
         ((ulonglong)unaff_ESI * (ulonglong)_DAT_1820b5a10 << 0x20) +
         (ulonglong)unaff_ESI * (ulonglong)_DAT_1820b5a00 + lVar5) -
       (((ulonglong)uVar7 * (ulonglong)_DAT_1820b5b10 << 0x20) +
        (ulonglong)uVar7 * (ulonglong)_DAT_1820b5b00 +
        ((ulonglong)uVar4 * (ulonglong)_DAT_1820b5af0 << 0x20) +
        (ulonglong)uVar4 * (ulonglong)unaff_XMM14_Da +
        ((ulonglong)uVar6 * (ulonglong)unaff_XMM13_Da << 0x20 |
        (ulonglong)uVar6 * (ulonglong)unaff_XMM15_Da) +
        ((ulonglong)unaff_ESI * (ulonglong)unaff_XMM11_Da << 0x20) +
        (ulonglong)unaff_ESI * (ulonglong)unaff_XMM12_Da + lVar5)) + 0xc5b4792aa8ee2e13;
  _DAT_1833410d8 = _DAT_183341010 ^ uVar1 ^ _DAT_183340fc0;
  _DAT_183341010 = (_DAT_183341010 ^ uVar1) + _DAT_183340fc0 ^ 0xba4bcee9e994192;
  _DAT_183340f80 = (_DAT_183340f80 * -0x13ba2214cfa1ea21 ^ _DAT_183341010) + uVar1;
  _DAT_1833410e8 = _DAT_183340f80 ^ _DAT_183341010;
  _DAT_183340fc0 = _DAT_183340fc0 & 0xffffffff;
  uVar1 = (_DAT_183340f58 ^ _DAT_1820b5b20) + _DAT_183341010 + 0x3716d7c6;
  uVar2 = (_DAT_183341010 ^ _UNK_1820b5b28) + _DAT_183340f58 + 0x284fb084;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183340f58 ^ _DAT_1820b5b20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183341010 ^ _UNK_1820b5b28;
  _DAT_183340ff8 =
       func_0x00018ce705a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183340f58 + 0x284fb084) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183341010 + 0x3716d7c6));
  _DAT_183340f20 =
       (_DAT_183340f20 ^ _DAT_183340ff8 & 0x3fffffffff) + 0x9b7b4467 ^ 0x4f1af6a2a7e83d75;
  _DAT_1833410e8 =
       (_DAT_1833410e8 * -0x5af339479f66e181 ^ _DAT_183340f20) + (_DAT_183340ff8 & 0x3fffffffff);
  _DAT_1833410b8 = _DAT_1833410e8 ^ _DAT_183340f20;
  _DAT_1833410f8 = 0x9b7b4467;
  uVar1 = (_DAT_183340f60 ^ _DAT_1820b5b30) + _DAT_183340f48 + unaff_RDI;
  uVar2 = (_DAT_183340f48 ^ _UNK_1820b5b38) + _DAT_183340f60 + 0xba0df00;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183340f60 ^ _DAT_1820b5b30;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183340f48 ^ _UNK_1820b5b38;
  _DAT_183341060 =
       func_0x00018ce705a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183340f60 + 0xba0df00) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183340f48 + unaff_RDI));
  _DAT_183341098 = (_DAT_183341098 ^ _DAT_183341060) - 0xba0df00 ^ 0x471f259f580cefdf;
  _DAT_183341040 = (_DAT_183341040 * 0x4889f09e3a2b3d7f ^ _DAT_183341098) + _DAT_183341060;
  _DAT_183340ff8 = _DAT_183341040 ^ _DAT_183341098;
  _DAT_183340f58 = 0xf45f2100;
  uVar1 = (_DAT_183340fe0 ^ _DAT_1820b5b40) + _DAT_183340f88 + 0x8f83fdda;
  uVar2 = (_DAT_183340f88 ^ _UNK_1820b5b48) + _DAT_183340fe0 + 0xf45f2100;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183340fe0 ^ _DAT_1820b5b40;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183340f88 ^ _UNK_1820b5b48;
  uVar1 = func_0x00018ce705a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183340fe0 + 0xf45f2100) ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183340f88 + 0x8f83fdda));
  _DAT_183341088 = uVar1 & 0xfffffffffe000000;
  _DAT_1833410f8 = _DAT_183340f78 ^ _DAT_183341088 ^ 0x10000ffff;
  _DAT_183340f80 = (_DAT_183340f80 ^ _DAT_183341088) + 0x10000ffff ^ 0xea1f383f2b801f8d;
  _DAT_183341088 = (uVar1 * -0x26e58a2bc065fb39 ^ _DAT_183340f80) + _DAT_183341088;
  _DAT_183340f20 = _DAT_183341088 ^ _DAT_183340f80;
  _DAT_183340f18 = 0xffff;
  uVar1 = (_DAT_183341060 ^ _DAT_1820b5b50) + _DAT_183341038 + unaff_RDI;
  uVar2 = (_DAT_183341038 ^ _UNK_1820b5b58) + _DAT_183341060 + 0x9589b398;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183341060 ^ _DAT_1820b5b50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183341038 ^ _UNK_1820b5b58;
  _DAT_183340f60 =
       func_0x00018ce705a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183341060 + 0x9589b398) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183341038 + unaff_RDI));
  _DAT_183340f48 = (_DAT_183340f48 ^ _DAT_183340f60 & 0xfffffffff) - 0x9589b398 ^ 0x3866e0a1646f5e52
  ;
  _DAT_183341008 =
       (_DAT_183341008 * 0x76c09389e1bf748d ^ _DAT_183340f48) + (_DAT_183340f60 & 0xfffffffff);
  _DAT_183341060 = _DAT_183341008 ^ _DAT_183340f48;
  _DAT_183341080 = 0x6a764c68;
  uVar1 = (~_DAT_183340f78 + 0x9589b399) *
          ((_DAT_1833410b0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1833410b0 & 0x8422dcda) * 2);
  uVar1 = (uVar1 | _DAT_1833410d8) + (uVar1 & _DAT_1833410d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833410e0 = func_0x00018ce705a0((uVar1 | 0x11ab6f42) + (ulonglong)((uint)uVar1 & 0x11ab6f42))
  ;
  uVar1 = _DAT_1833410e0 ^ 0x9589ffff;
  _DAT_1833410c8 = _DAT_183341028 ^ uVar1 ^ 0x958ab397;
  _DAT_183341020 = (_DAT_1833410f0 ^ uVar1) + 0x958ab397 ^ 0x4798ffc0fb5e8438;
  _DAT_1833410f0 = (_DAT_1833410f0 * 0x6b9c928be0331053 ^ _DAT_183341020) + uVar1;
  _DAT_183341020 = _DAT_1833410f0 ^ _DAT_183341020;
  _DAT_183340fe8 = 0x958ab397;
  uVar1 = (~_DAT_1833410b0 + 0x6a764c69) *
          ((_DAT_1833410a0 ^ 0x11a890b2) + (ulonglong)((uint)_DAT_1833410a0 & 0x11a890b2) * 2);
  uVar1 = (uVar1 | _DAT_183340f98) + (uVar1 & _DAT_183340f98);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183340f80 = func_0x00018ce705a0((uVar1 | 0x7bdedcda) + (ulonglong)((uint)uVar1 & 0x7bdedcda))
  ;
  _DAT_1833410c8 = _DAT_183340fa0 ^ _DAT_183340f80 ^ 0x10000ffff;
  _DAT_183341088 = (_DAT_183341088 ^ _DAT_183340f80) + 0x10000ffff ^ 0x6678006dfe6ab87;
  _DAT_1833410e8 = (_DAT_1833410e8 * 0x75ac653af7292881 ^ _DAT_183341088) + _DAT_183340f80;
  _DAT_183340fb0 = _DAT_1833410e8 ^ _DAT_183341088;
  _DAT_183340f50 = 0xffff;
  uVar1 = (_DAT_1833410f0 ^ _DAT_1820b5b60) + _DAT_183341028 + unaff_RDI;
  uVar2 = (_DAT_183341028 ^ _UNK_1820b5b68) + _DAT_1833410f0 + 0x85811d30;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833410f0 ^ _DAT_1820b5b60;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183341028 ^ _UNK_1820b5b68;
  _DAT_1833410c0 =
       func_0x00018ce705a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833410f0 + 0x85811d30) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183341028 + unaff_RDI));
  _DAT_183340f40 = (_DAT_183340f40 ^ _DAT_1833410c0) - 0x85811d30 ^ 0x2c905a3fdf2bf7ac;
  _DAT_183340fd0 = (_DAT_183340fd0 * 0x472c0b0ca2dfe89b ^ _DAT_183340f40) + _DAT_1833410c0;
  _DAT_183340f58 = _DAT_183340fd0 ^ _DAT_183340f40;
  _DAT_183341098 = _DAT_183341060 ^ 0xffffffff7a7ee2d0;
  _DAT_183340fe0 = 0x7a7ee2d0;
  uVar1 = ((_DAT_183341020 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183341020 & 0x8422dcda) * 2) *
          0xb023a60;
  uVar1 = (uVar1 | _DAT_183340f88) + (uVar1 & _DAT_183340f88);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833410e0 = func_0x00018ce705a0((uVar1 | 0x1a3c1ea) + (ulonglong)((uint)uVar1 & 0x1a3c1ea));
  uVar1 = _DAT_1833410e0 >> 1 | _DAT_1833410e0;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1833410e0) >> 5 & 0xfffffffff0000000 | _DAT_1833410e0 << 0x3b;
  _DAT_1833410b8 = _DAT_183340fe8 ^ uVar1 ^ 0x85821d2f;
  _DAT_183340f70 = (_DAT_183340f70 ^ uVar1) + 0x85821d2f ^ 0x2164c477bb699b4f;
  _DAT_183340fc0 = (_DAT_183340fc0 * -0x1139c684ff3cd339 ^ _DAT_183340f70) + uVar1;
  _DAT_183340fd0 = _DAT_183340fc0 ^ _DAT_183340f70;
  _DAT_183341008 = 0x85821d2f;
  _DAT_183340f30 = func_0x00018ce705a0(_DAT_183340fd8 + 0xff7aff42890061ffU ^ 0x96);
  _DAT_1833410f8 = _DAT_1833410b0 ^ _DAT_183340f18 ^ 0x1797adf62;
  _DAT_1833410e0 = (_DAT_1833410e0 ^ _DAT_183340f18) + 0x1797adf62 ^ 0xf6172882fb391a70;
  _DAT_183341080 = (_DAT_183341080 * -0xabe4b78e79f6b3f ^ _DAT_1833410e0) + _DAT_183340f18;
  _DAT_183340f90 = _DAT_183341080 ^ _DAT_1833410e0;
  _DAT_183341018 = 0x797adf62;
  uVar1 = (~_DAT_183341040 + 0x9b7b4468) *
          ((_DAT_183341028 ^ 0x59ddb9de) + (ulonglong)((uint)_DAT_183341028 & 0x59ddb9de) * 2);
  uVar1 = (uVar1 | _DAT_183340f90) + (uVar1 & _DAT_183340f90);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183340f40 = func_0x00018ce705a0((uVar1 | 0xc2a6fdb9) + (ulonglong)((uint)uVar1 & 0xc2a6fdb9))
  ;
  uVar1 = _DAT_183340f40 >> 1 | _DAT_183340f40;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_183340f40;
  uVar1 = uVar1 << 0x20 | uVar1 >> 0x20;
  _DAT_183340f70 = (_DAT_183340f70 ^ uVar1) + 0x4684de9c ^ 0x759146aef257d80;
  _DAT_183340ff8 = (_DAT_183340ff8 * 0x7a32e50c50986ccb ^ _DAT_183340f70) + uVar1;
  _DAT_183340f50 = _DAT_183340ff8 ^ _DAT_183340f70;
  _DAT_1833410d0 = 0x4684de9c;
  _DAT_1833410d0 = func_0x00018ce705a0(_DAT_183340f50 + 0xff7500c1a6ff9dff ^ 0xb2);
  _DAT_183340f58 = (_DAT_183340f58 ^ _DAT_183340ff8) + 0x997b0063 ^ 0x4297c316f402200b;
  _DAT_183340f00 = (_DAT_183340f00 * -0x61152ac523bd6c9b ^ _DAT_183340f58) + _DAT_183340ff8;
  _DAT_1833410e8 = _DAT_183340f00 ^ _DAT_183340f58;
  _DAT_183340fc0 = 0x997b0063;
  _DAT_183340fd0 = func_0x00018ce705a0(_DAT_183341030 + 0xbb00b005004fffU ^ 0x65);
  uVar1 = (_DAT_183340fd0 & 0x1fffffffffffff) * 0x23f0e4e5c4309dd;
  _DAT_1833410c0 = _DAT_183341048 ^ uVar1 ^ 0x797adf62;
  _DAT_183340fe0 = (_DAT_183340fe0 ^ uVar1) + 0x797adf62 ^ 0x35ea8820588c43eb;
  _DAT_183340ff8 = (_DAT_183340ff8 * 0xd832aa4e894755 ^ _DAT_183340fe0) + uVar1;
  _DAT_1833410e0 = _DAT_183340ff8 ^ _DAT_183340fe0;
  _DAT_183340f50 = 0x797adf62;
  _DAT_1833410e0 = func_0x00018ce705a0(_DAT_183340f80 ^ 0x1d008424ffe1d9);
  uVar1 = _DAT_1833410e0 ^ 0x797adf62;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_183341070 =
       (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar1) &
       0x3fffffffffffffff;
  _DAT_1833410a8 = _DAT_1833410a8 ^ _DAT_183341070 ^ 0xb9c9410e554dfdc2;
  _DAT_183340fa8 = (_DAT_183340fa8 * 0x73be2d1d5df22e2b ^ _DAT_1833410a8) + _DAT_183341070;
  _DAT_1833410c0 = _DAT_183340fa8 ^ _DAT_1833410a8;
  _DAT_183340f58 = 0;
  uVar1 = (_DAT_183340f78 ^ 0x8422dcda) + _DAT_183340fe8 + 0x8422dcda;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183340f78 ^ 0x8422dcda;
  uVar2 = ((_DAT_183340fe8 + _DAT_183340f78) * 0x2000 | _DAT_183340fe8 + _DAT_183340f78 >> 0x33) ^
          _DAT_183340fe8;
  _DAT_183340fa8 =
       func_0x00018ce705a0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183340f78 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183340fe8 + 0x8422dcda));
  uVar1 = _DAT_183340fa8 ^ 0xffff;
  _DAT_1833410d8 = _DAT_183340f80 ^ uVar1 ^ 0xffff;
  _DAT_183340f18 = (_DAT_183340f18 ^ uVar1) + 0xffff ^ 0xebfdea5d961c07e1;
  _DAT_183341058 = (_DAT_183341058 * -0x36d546e672426629 ^ _DAT_183340f18) + uVar1;
  _DAT_183340f18 = _DAT_183341058 ^ _DAT_183340f18;
  _DAT_183340ff0 = 0xffff;
  uVar1 = (_DAT_183340f48 ^ _DAT_1820b5b70) + _DAT_1833410a0 + 0x59ddb9de;
  uVar2 = (_DAT_1833410a0 ^ _UNK_1820b5b78) + _DAT_183340f48 + 0xffffffff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183340f48 ^ _DAT_1820b5b70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833410a0 ^ _UNK_1820b5b78;
  _DAT_183340f00 =
       func_0x00018ce705a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183340f48 + 0xffffffff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833410a0 + 0x59ddb9de));
  _DAT_1833410c0 =
       (_DAT_1833410c0 ^ _DAT_183340f00 & 0x7fffffffffffff00) + 0x22006504 ^ 0x99f441fe216613b0;
  _DAT_1833410d8 =
       (_DAT_1833410d8 * 0x490643e4acbb9865 ^ _DAT_1833410c0) +
       (_DAT_183340f00 & 0x7fffffffffffff00);
  _DAT_183340f58 = _DAT_1833410d8 ^ _DAT_1833410c0;
  _DAT_183341060 = 0x22006504;
  uVar1 = (~_DAT_1833410f8 + 0x22006505) *
          ((_DAT_183341008 ^ 0x59ddb9de) + (ulonglong)((uint)_DAT_183341008 & 0x59ddb9de) * 2);
  uVar1 = (uVar1 | _DAT_183341090) + (uVar1 & _DAT_183341090);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833410a0 = func_0x00018ce705a0((uVar1 | 0x7bdddcda) + (ulonglong)((uint)uVar1 & 0x7bdddcda))
  ;
  uVar1 = (ulonglong)(~(uint)_DAT_1833410a0 & 0xddff9afb);
  _DAT_183340f80 = _DAT_183340f80 ^ uVar1 ^ 0xea93132bfc78c943;
  _DAT_1833410f8 = (_DAT_1833410f8 * 0x11f02286cb09d931 ^ _DAT_183340f80) + uVar1;
  _DAT_1833410e8 = _DAT_1833410f8 ^ _DAT_183340f80;
  _DAT_183341098 = 0;
  _DAT_183340f20 = func_0x00018ce705a0(_DAT_1833410a8 + 0x20ff7c1b001dff ^ 0x9d);
  uVar1 = _DAT_183340f20 ^ 0xd95d0a70;
  uVar1 = ((uVar1 << 0x22 | uVar1 >> 0x1e) << 0xc | (uVar1 & 0x3fffffff) >> 0x12) ^ 0xd95d0a70;
  _DAT_183341028 = _DAT_183341028 ^ uVar1 ^ 0xb335b8fcd622472f;
  _DAT_183341078 = (_DAT_183341078 * 0xf2bef84627eb21d ^ _DAT_183341028) + uVar1;
  _DAT_183341040 = _DAT_183341078 ^ _DAT_183341028;
  _DAT_183341010 = 0;
  uVar4 = *(uint *)(unaff_RBP + 0x50);
  uVar1 = uVar4 ^ unaff_RDI;
  uVar2 = uVar1 ^ _DAT_183341018;
  lVar5 = uVar1 + _DAT_183340f28;
  uVar1 = uVar2 + lVar5;
  uVar3 = (_DAT_183340f28 ^ 0xffff) + _DAT_183341018 + 0xffff;
  uVar2 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ uVar2;
  uVar1 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183340f28 ^ 0xffff;
  _DAT_183340f90 =
       func_0x00018ce705a0((uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183341018 + 0xffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar5);
  _DAT_183341058 = (ulonglong)uVar4 & 0xffff;
  _DAT_183340f58 =
       (_DAT_183340f58 ^ _DAT_183340f90 & 0xfffffffffc000000) + _DAT_183341058 ^ 0xe73a1981271c8aae;
  _DAT_1833410e0 =
       (_DAT_1833410e0 * 0x213e5118361d939b ^ _DAT_183340f58) +
       (_DAT_183340f90 & 0xfffffffffc000000);
  _DAT_183340fd0 = _DAT_1833410e0 ^ _DAT_183340f58;
  *(int *)(unaff_RBP + 0x80) = (int)_DAT_183341058;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x68)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce5bcd9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce5bcd9(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 8) = uVar2;
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


// ----- block @ rva 0xce5c252 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce5c252(longlong param_1)

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


// ----- block @ rva 0xce72802 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce72802(void)

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


// ----- block @ rva 0xce729a1 -----

void FUN_18ce729a1(void)

{
  return;
}


// ----- block @ rva 0xce72d1c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce72d1c(void)

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


// ----- block @ rva 0xce73ea2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce73ea2(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
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


// ----- block @ rva 0xce73ee5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce73ee5(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->CallObjectMethodA /*0x120*/))(in_stack_00000030);
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


// ----- block @ rva 0xce73fd3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce73fd3(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (*in_RAX)(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce75828 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18ce774b3(void)

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


// ----- block @ rva 0xce7605b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18ce774b3(void)

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


// ----- block @ rva 0xce76501 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce76501(void)

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


// ----- block @ rva 0xce772b7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce772b7(void)

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


// ----- block @ rva 0xce7b9fe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7b9fe(void)

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


// ----- block @ rva 0xce7ba52 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7ba52(void)

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


// ----- block @ rva 0xce7bd1d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7bd1d(void)

{
  int in_EAX;
  int in_stack_00000048;
  
  switch(in_stack_00000048 < 0 || in_EAX <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce7bf40 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7bf40(void)

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


// ----- block @ rva 0xce7bf94 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7bf94(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_18419fe70();
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


// ----- block @ rva 0xce7c096 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7c096(void)

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


// ----- block @ rva 0xce7c0b7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7c0b7(void)

{
  FUN_190dd72e0();
  (*_DAT_1820bce58)();
  return;
}


// ----- block @ rva 0xce7c104 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7c104(void)

{
  FUN_190ddce00();
  (*_DAT_1820bcde8)();
  return;
}


// ----- block @ rva 0xce7c4eb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7c4eb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1820bcf38)();
  return;
}


// ----- block @ rva 0xce7c7aa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7c7aa(void)

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


// ----- block @ rva 0xce7c891 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7c891(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1820bcf78)();
  return;
}


// ----- block @ rva 0xce7c8c5 -----

void FUN_18ce7c8c5(void)

{
  return;
}


// ----- block @ rva 0xce7ca4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7ca4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1820bd7a8)();
  return;
}


// ----- block @ rva 0xce7d436 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7d436(void)

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


// ----- block @ rva 0xce7dc04 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7dc04(void)

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


// ----- block @ rva 0xce7e2e7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7e2e7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1820bded8)();
  return;
}


// ----- block @ rva 0xce7e35f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7e35f(void)

{
  (*_DAT_1820bdce8)();
  return;
}


// ----- block @ rva 0xce7e805 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7e805(void)

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


// ----- block @ rva 0xce7e9e6 -----

void FUN_18ce7e9e6(void)

{
  return;
}


// ----- block @ rva 0xce7eef9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7eef9(void)

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


// ----- block @ rva 0xce7f2b5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce7f2b5(void)

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


// ----- block @ rva 0xce7f524 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce7f524(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1820bdef8)();
  return;
}


// ----- block @ rva 0xce7f58a -----

void FUN_18ce7f58a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xce7f7bb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ce7f811 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ce7f7bb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xce8182e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ce81845 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ce8182e(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xce8206f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ce820c3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ce8206f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xce8b810 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce8b810(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  ulonglong uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000058;
  int in_stack_00000068;
  
  lVar4 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  cVar1 = *(char *)(lVar4 + in_stack_00000068);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar4,2);
  uVar7 = (~_DAT_183342438 + 0x9f2a9c07) *
          ((_DAT_1833423d0 ^ 0x153d0ae) + (ulonglong)((uint)_DAT_1833423d0 & 0x153d0ae) * 2);
  uVar7 = (uVar7 | _DAT_183342300) + (uVar7 & _DAT_183342300);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183342450 = func_0x00018ce9a510((uVar7 | 0x9e794ca8) + (ulonglong)((uint)uVar7 & 0x9e794ca8))
  ;
  uVar7 = _DAT_183342450 ^ 0x8571f38b;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  uVar6 = (_DAT_183342328 ^ uVar7) + 0x9f7bff8f;
  _DAT_183342328 = uVar6 ^ 0xdbbd1c8846aa2bba;
  _DAT_183342358 = (_DAT_183342358 * 0x2b763ab3f83f3a0d ^ _DAT_183342328) + uVar7;
  _DAT_1833423d8 = _DAT_183342358 ^ _DAT_183342328;
  _DAT_183342448 = 0x9f7bff8f;
  uVar7 = (~_DAT_1833424d0 + 0xd593e86d) *
          ((uVar6 ^ 0xdbbd1c88622db0e6) + (ulonglong)((uint)_DAT_183342328 & 0x24879b5c) * 2);
  uVar7 = (uVar7 | _DAT_1833424d0) + (uVar7 & _DAT_1833424d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  lVar4 = func_0x00018ce9a510((uVar7 | 0xf1147330) + (ulonglong)((uint)uVar7 & 0xf1147330));
  _DAT_183342420 = 0xa9f50b5215fe3024;
  _DAT_183342408 = (_DAT_183342408 * 0x4ba09e69cb4c9785 ^ 0xa9f50b5215fe3024) + lVar4;
  _DAT_183342498 = _DAT_183342408 ^ 0xa9f50b5215fe3024;
  _DAT_183342318 = 0x75365015;
  uVar7 = (~_DAT_1833424d0 + 0x445e8edc) *
          ((_DAT_1833424e8 ^ 0x3f835101) + (ulonglong)((uint)_DAT_1833424e8 & 0x3f835101) * 2);
  uVar7 = (uVar7 | _DAT_1833423f0) + (uVar7 & _DAT_1833423f0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833423d0 = func_0x00018ce9a510((uVar7 | 0x7bdddfda) + (ulonglong)((uint)uVar7 & 0x7bdddfda))
  ;
  uVar7 = (ulonglong)(((uint)_DAT_1833423d0 ^ 0xbba17024) & 0xbba17224);
  _DAT_1833424a0 = _DAT_1833423a8 ^ uVar7 ^ 0x1000000ff;
  _DAT_1833424b8 = (_DAT_1833424b8 ^ uVar7) + 0x1000000ff ^ 0xaf9264dea190e668;
  _DAT_183342398 = (_DAT_183342398 * -0x714565a674a0fb95 ^ _DAT_1833424b8) + uVar7;
  _DAT_183342340 = _DAT_183342398 ^ _DAT_1833424b8;
  _DAT_183342368 = 0xff;
  _DAT_183342310 = func_0x00018ce9a510(_DAT_183342428 + 0xff4cffe3c0ffbaff ^ 0xf1);
  uVar7 = _DAT_183342310 ^ 0x9967f6ea;
  uVar6 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar2 + (uint)bVar2 ^ uVar7;
  _DAT_183342390 = (_DAT_183342390 ^ uVar7) - 0x9967f6ea ^ 0xccc46ed69a5da6f3;
  _DAT_183342468 = (_DAT_183342468 * -0x6581e6c72a62c8e7 ^ _DAT_183342390) + uVar7;
  _DAT_183342448 = _DAT_183342468 ^ _DAT_183342390;
  _DAT_183342318 = 0x66980916;
  uVar7 = (_DAT_1833424a8 ^ _DAT_1820c0140) + _DAT_183342398 + 0x842223da;
  uVar6 = (_DAT_183342398 ^ _UNK_1820c0148) + _DAT_1833424a8 + 0x9967f6ea;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833424a8 ^ _DAT_1820c0140;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183342398 ^ _UNK_1820c0148;
  _DAT_183342448 =
       func_0x00018ce9a510((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833424a8 + 0x9967f6ea) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183342398 + 0x842223da));
  uVar7 = _DAT_183342448 * -0x794f98603731ac7d;
  _DAT_1833423f8 = _DAT_1833424b8 ^ uVar7 ^ 0x9967f7e9;
  _DAT_183342358 = (_DAT_183342358 ^ uVar7) + 0x9967f7e9 ^ 0x324999a3ef89e85c;
  _DAT_183342358 = (_DAT_183342340 * -0x2d1ff687bd3b47b5 ^ _DAT_183342358) + uVar7 ^ _DAT_183342358;
  _DAT_183342340 = 0x9967f7e9;
  uVar7 = (~_DAT_1833423f0 + 0x66980917) *
          ((_DAT_183342378 ^ 0x1d45d4cc) + (ulonglong)((uint)_DAT_183342378 & 0x1d45d4cc) * 2);
  uVar7 = (uVar7 | _DAT_1833424f8) + (uVar7 & _DAT_1833424f8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183342458 = func_0x00018ce9a510((uVar7 | 0x7bddddda) + (ulonglong)((uint)uVar7 & 0x7bddddda))
  ;
  uVar7 = _DAT_183342458 ^ 0x66980816;
  _DAT_183342408 = _DAT_1833424c0 ^ uVar7 ^ 0x1000000ff;
  _DAT_1833424e8 = (_DAT_1833424e8 ^ uVar7) + 0x1000000ff ^ 0xdeb4b21cdce97d9;
  _DAT_1833423e8 = (_DAT_1833423e8 * 0x2cf8470d3f65b981 ^ _DAT_1833424e8) + uVar7;
  _DAT_183342450 = _DAT_1833423e8 ^ _DAT_1833424e8;
  _DAT_183342330 = 0xff;
  uVar7 = (_DAT_1833423f8 ^ _DAT_1820c0150) + _DAT_183342490 + 0x84222325;
  uVar6 = (_DAT_183342490 ^ _UNK_1820c0158) + _DAT_1833423f8 + 0x2d5815db;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833423f8 ^ _DAT_1820c0150;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183342490 ^ _UNK_1820c0158;
  _DAT_183342370 =
       func_0x00018ce9a510((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833423f8 + 0x2d5815db) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183342490 + 0x84222325));
  _DAT_1833423b0 = (_DAT_1833423b0 ^ _DAT_183342370) - 0x2d5815db ^ 0x8b68ecb71033fd3f;
  _DAT_1833423d8 = (_DAT_1833423d8 * 0x17028fb3e2b089cb ^ _DAT_1833423b0) + _DAT_183342370;
  _DAT_183342458 = _DAT_1833423d8 ^ _DAT_1833423b0;
  _DAT_183342428 = 0xd2a7ea25;
  uVar7 = (~_DAT_183342410 + 0x2d5815dc) *
          ((_DAT_1833423c8 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833423c8 & 0x842223da) * 2);
  uVar7 = (uVar7 | _DAT_1833423d0) + (uVar7 & _DAT_1833423d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833423e8 = func_0x00018ce9a510((uVar7 | 0xa97a3601) + (ulonglong)((uint)uVar7 & 0xa97a3601))
  ;
  uVar7 = ((_DAT_1833423e8 ^ 0x2d2abdc525) << 0x3e |
          ((_DAT_1833423e8 ^ 0x2d2abdc525) & 0x7fffffffffffffff) >> 2) ^ 0x2d5815db;
  _DAT_1833423b8 = _DAT_1833423d8 ^ uVar7 ^ 0x2d5816da;
  _DAT_183342400 = (_DAT_183342400 ^ uVar7) + 0x2d5816da ^ 0xe0febf1c76ca9e10;
  _DAT_183342470 = (_DAT_183342398 * 0x357a84d1c899ad7 ^ _DAT_183342400) + uVar7 ^ _DAT_183342400;
  _DAT_183342398 = 0x2d5816da;
  uVar7 = (_DAT_183342498 ^ _DAT_1820c0160) + _DAT_1833424a0 + 0xa97a35ff;
  uVar6 = (_DAT_1833424a0 ^ _UNK_1820c0168) + _DAT_183342498 + 0xd2a7ea25;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183342498 ^ _DAT_1820c0160;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833424a0 ^ _UNK_1820c0168;
  _DAT_183342440 =
       func_0x00018ce9a510((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183342498 + 0xd2a7ea25) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833424a0 + 0xa97a35ff));
  _DAT_1833424e0 = _DAT_183342410 ^ _DAT_183342440 ^ 0x1000000ff;
  _DAT_183342370 = (_DAT_183342370 ^ _DAT_183342440) + 0x1000000ff ^ 0x411f377cca80615;
  _DAT_183342300 = (_DAT_183342300 * -0x6fddf1f603392179 ^ _DAT_183342370) + _DAT_183342440;
  _DAT_1833423f0 = _DAT_183342300 ^ _DAT_183342370;
  _DAT_1833424a8 = 0xff;
  _DAT_183342428 = func_0x00018ce9a510(_DAT_183342330 ^ 0xff7c0019a8ffd49e);
  uVar6 = _UNK_1820c0178;
  uVar7 = _DAT_1820c0170;
  uVar5 = _DAT_183342428 ^ 0x9f7bff8f;
  _DAT_183342338 = _DAT_1833424b0 ^ uVar5 ^ 0x114b24fa4;
  _DAT_183342360 = (_DAT_183342360 ^ uVar5) + 0x114b24fa4 ^ 0x585c774c7588f77c;
  _DAT_183342310 = (_DAT_183342310 * -0x3228223910a30429 ^ _DAT_183342360) + uVar5;
  _DAT_183342490 = 0x14b24fa4;
  uVar5 = (_DAT_183342420 ^ _DAT_1820c0170) + _DAT_1833424f0 + 0x1b59dcaa;
  uVar11 = (_DAT_1833424f0 ^ _UNK_1820c0178) + _DAT_183342420 + 0x75365015;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183342420 ^ _DAT_1820c0170;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1833424f0 ^ _UNK_1820c0178;
  _DAT_1833424b0 =
       func_0x00018ce9a510((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183342420 + 0x75365015) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833424f0 + 0x1b59dcaa));
  uVar5 = (_DAT_1833424b0 ^ 0xff7fff9f) & 0x7fffffffffffffff ^ 0x9f7bff8f;
  _DAT_183342468 = (_DAT_183342468 ^ uVar5) + 0xea4daf9a ^ 0x3a9ef5f945256aca;
  _DAT_183342470 = (_DAT_183342470 * 0x4bc15851b65ebad9 ^ _DAT_183342468) + uVar5;
  _DAT_183342488 = _DAT_183342470 ^ _DAT_183342468;
  _DAT_1833423b8 = 0xea4daf9a;
  uVar5 = (_DAT_1833424a8 ^ uVar7) + _DAT_183342370 + 0x1b59dcaa;
  uVar11 = (_DAT_183342370 ^ uVar6) + _DAT_1833424a8 + 0x75365015;
  uVar7 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833424a8 ^ uVar7;
  uVar6 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183342370 ^ uVar6;
  _DAT_183342380 =
       func_0x00018ce9a510((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833424a8 + 0x75365015) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183342370 + 0x1b59dcaa));
  _DAT_183342418 = (_DAT_183342418 ^ _DAT_183342380 ^ 0x9f7bff8f) + 0x15325005 ^ 0x9e98039d902166f5;
  _DAT_183342490 =
       (_DAT_183342490 * -0x3417e92a956b86cd ^ _DAT_183342418) + (_DAT_183342380 ^ 0x9f7bff8f);
  _DAT_183342398 = _DAT_183342490 ^ _DAT_183342418;
  _DAT_183342328 = 0x15325005;
  _DAT_183342388 = func_0x00018ce9a510(_DAT_183342398 ^ 0xffd400448afff6da);
  uVar7 = _DAT_183342388 * -0x5d13ed996ad133e1 ^ 0xea4daf9a;
  _DAT_183342340 = _DAT_183342310 ^ uVar7 ^ 0x114b24fa4;
  _DAT_183342368 = (_DAT_183342368 ^ uVar7) + 0x114b24fa4 ^ 0x8ecf1951416a4787;
  _DAT_183342398 = (_DAT_183342398 * 0x215c5107dfd8350f ^ _DAT_183342368) + uVar7;
  _DAT_1833424d8 = _DAT_183342398 ^ _DAT_183342368;
  _DAT_1833423b0 = 0x14b24fa4;
  _DAT_183342308 = func_0x00018ce9a510(_DAT_1833424b0 + 0xffdcff83a5ffddff ^ 0x7f);
  uVar7 = _DAT_183342380 ^ _DAT_183342308;
  _DAT_183342320 = uVar7 ^ 0xff;
  _DAT_183342370 = (_DAT_183342370 ^ _DAT_183342308) + 0xff ^ 0xcc570635ed2ba49b;
  _DAT_183342380 = (_DAT_183342380 * -0x55dc85386d5eafd1 ^ _DAT_183342370) + _DAT_183342308;
  _DAT_183342488 = _DAT_183342380 ^ _DAT_183342370;
  _DAT_183342340 = 0xff;
  uVar7 = (~_DAT_1833423c8 + 0x60840071) *
          ((uVar7 ^ 0x1b59dc55) + (ulonglong)((uint)_DAT_183342320 & 0x1b59dcaa) * 2);
  uVar7 = (uVar7 | _DAT_183342318) + (uVar7 & _DAT_183342318);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833423c0 = func_0x00018ce9a510((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  uVar7 = _DAT_1833423c0 - (_DAT_1833423c0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1833423c0) & 0x7fffffffffffffff;
  _DAT_1833423a0 = _DAT_1833423a0 ^ uVar7 ^ 0xcefe66d78804fa83;
  _DAT_183342300 = (_DAT_183342300 * -0x3b10d5751cc29ba7 ^ _DAT_1833423a0) + uVar7;
  _DAT_183342488 = _DAT_183342300 ^ _DAT_1833423a0;
  _DAT_183342348 = 0;
  uVar7 = (_DAT_1833424c0 ^ 0x842223da) + _DAT_1833423c0 + 0x842223da;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833424c0 ^ 0x842223da;
  uVar6 = ((_DAT_1833423c0 + _DAT_1833424c0) * 0x2000 | _DAT_1833423c0 + _DAT_1833424c0 >> 0x33) ^
          _DAT_1833423c0;
  _DAT_1833424e0 =
       func_0x00018ce9a510((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1833424c0 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833423c0 + 0x842223da));
  auVar8._8_8_ = 0;
  auVar8._0_8_ = _DAT_1833424e0;
  auVar9._8_4_ = 0xffffffff;
  auVar9._0_8_ = 0xffffffffffffffff;
  auVar9._12_4_ = 0xffffffff;
  auVar9 = pmovzxbq(auVar8 ^ auVar9,auVar8 ^ auVar9);
  uVar7 = auVar9._0_8_ & 0x7fffffff;
  _DAT_1833423a8 = _DAT_183342420 ^ uVar7 ^ 0xff;
  _DAT_183342480 = (_DAT_183342480 ^ uVar7) + 0xff ^ 0x9ae9521069a8b1cd;
  _DAT_183342418 = (_DAT_183342418 * -0x34b81bc818b0a3f1 ^ _DAT_183342480) + uVar7;
  _DAT_183342388 = _DAT_183342418 ^ _DAT_183342480;
  _DAT_183342350 = 0xff;
  uVar7 = (_DAT_1833424b8 ^ _DAT_1820c0180) + _DAT_183342418 + 0x153d0ae;
  uVar6 = (_DAT_183342418 ^ _UNK_1820c0188) + _DAT_1833424b8 + 0x8571f38b;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833424b8 ^ _DAT_1820c0180;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183342418 ^ _UNK_1820c0188;
  uVar7 = func_0x00018ce9a510((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833424b8 + 0x8571f38b) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183342418 + 0x153d0ae));
  _DAT_1833423c0 = _DAT_1833423c0 ^ uVar7 ^ 0x871650b568781ff9;
  _DAT_1833424d0 = (_DAT_1833424d0 * 0x760a262a28d8d94b ^ _DAT_1833423c0) + uVar7;
  _DAT_1833423f8 = _DAT_1833424d0 ^ _DAT_1833423c0;
  _DAT_183342498 = 0;
  _DAT_183342390 = func_0x00018ce9a510(_DAT_183342378 ^ 0xffe2ff83c9ffdd29);
  uVar7 = (_DAT_183342390 & 0x1fffffffff) * 0x80;
  _DAT_183342490 = _DAT_1833423f8 ^ uVar7 ^ 0xff;
  _DAT_1833424a0 = (_DAT_1833424a0 ^ uVar7) + 0xff ^ 0x1e578a73b172fa25;
  _DAT_1833423a0 = (_DAT_1833423a0 * -0x6bf6c98fdda7e65 ^ _DAT_1833424a0) + uVar7;
  _DAT_183342458 = _DAT_1833423a0 ^ _DAT_1833424a0;
  _DAT_183342398 = 0xff;
  uVar5 = ((ulonglong)(uint)(int)cVar1 & 0xff) << 0x30;
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = in_stack_00000058 ^ 0x84222325;
  auVar9 = pshufb(auVar10 ^ _DAT_1820c0190,_DAT_1800170c0);
  uVar6 = auVar9._8_8_ + auVar9._0_8_;
  uVar7 = uVar6 + _DAT_183342370;
  if (auVar9._4_4_ < 0) {
    uVar7 = _DAT_183342348 ^ uVar6;
  }
  _DAT_1833424b8 = func_0x00018ce9a510(SUB161(auVar10 ^ _DAT_1820c0190,5) ^ uVar7);
  _DAT_183342460 = uVar5 | in_stack_00000058;
  _DAT_183342340 = (_DAT_183342340 ^ _DAT_1833424b8) + _DAT_183342460 ^ 0x357583e5254808ae;
  _DAT_183342360 = (_DAT_183342360 * 0x40e41d26c33f8939 ^ _DAT_183342340) + _DAT_1833424b8;
  _DAT_1833424a0 = _DAT_183342360 ^ _DAT_183342340;
  iVar3 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar3 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce933ff -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce933ff(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce99abd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce99abd(void)

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


// ----- block @ rva 0xce99b34 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce99b34(void)

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


// ----- block @ rva 0xce99d4b -----

void thunk_FUN_18ce816b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xce9a2c9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce9a2c9(void)

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


// ----- block @ rva 0xce9a333 -----

void FUN_18ce9a333(void)

{
  return;
}

