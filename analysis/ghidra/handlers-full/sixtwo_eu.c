// ===== Lsixtwo/eu; _29c2deca7b712c7c8ef896e4f7d76233 ()V (handler @ image 18ce7f6d0, runtime 6ffff4a8f6d0) =====

void FUN_18ce7f6d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ce7f7b8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820be038 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eu; auJ (Lsixtwo/gD;)V (handler @ image 18ce32b20, runtime 6ffff4a42b20) =====

void FUN_18ce32b20(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xd679,0x252);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xd679,0x252);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ce7ca49 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820bd020 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



