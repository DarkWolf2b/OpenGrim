// ===== STITCHED CORPUS: sixtwo.dD =====
// handlers: 6  continuation blocks: 62  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x2438490', '0x2438498', '0x24384a0', '0x24384a8', '0x24384b0', '0x24384b8', '0x24384c0', '0x24384c8', '0x24384d0', '0x24384d8', '0x24384e0', '0x24384e8', '0x24384f0', '0x24384f8', '0x2438500', '0x2438510', '0x2438518', '0x2438520', '0x2438528']

// ===== Lsixtwo/dD; _07021457c400d30aa53725408e6f5e94 ()V (handler @ image 18df80020, runtime 6ffff5b90020) =====

void FUN_18df80020(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018df80108 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182439be8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dD; akB (Lsixtwo/gO$tm;)V (handler @ image 18df69e10, runtime 6ffff5b79e10) =====

void FUN_18df69e10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x9309,0x19f)
      /* POOL[0x9309,0x19f]: ElrnL | sErFE | BbEXB | zuPTe | aku | aky | sixtwo/dD | bapnK | akC | field_1765 | Lnet/minecraft/class_239; | net/minecraft/class_239 | method_17783 | ()Lnet/minecraft/class_239$class_240; | net/minecraft/class_239$class_240 | field_1331 | Lnet/minecraft/class_239$class_240; | net/minecraft/class_3966 | method_17782 | ()Lnet/minecraft/class_1297; | net/minecraft/class_1533 | ZKjem | htjaR | dxsTa | sixtwo/oR | cJV | (Lnet/minecraft/class_1309;)Z | mJHrk | Uy | APUxf | s */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018df69edd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182433f90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dD; akC (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18df717f0, runtime 6ffff5b817f0) =====

undefined8 FUN_18df717f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/dD; akD (IJ)I (handler @ image 18df71880, runtime 6ffff5b81880) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df71880(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar5 = (uRam0000000183396940 ^ _UNK_182438490) + uRam0000000183396980 + 0xc201ad07fc199709;
  uVar8 = (uRam0000000183396980 ^ _UNK_182438498) + uRam0000000183396940 + 0x4d29287e24761a3d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396940 ^ _UNK_182438490;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396980 ^ _UNK_182438498;
  uRam0000000183396af8 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183396940 + 0x4d29287e24761a3d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183396980 + 0xc201ad07fc199709));
  uVar5 = (uRam0000000183396af8 ^ 0xc201ad07783bb42c) & 0xfffffffffffffffc;
  uRam0000000183396a00 = (uRam0000000183396a00 ^ uVar5) + 0xcf29ad7f7c7fbe3d ^ 0x9dab1211de5549c5;
  uRam00000001833968f0 = (uRam00000001833968f0 * 0x7e6eb82300866f87 ^ uRam0000000183396a00) + uVar5;
  uRam0000000183396790 = uRam00000001833968f0 ^ uRam0000000183396a00;
  uRam0000000183396800 = 0xcf29ad7f7c7fbe3d;
  uVar5 = (uRam0000000183396b08 ^ _UNK_1824384a0) + uRam0000000183396730 + 0x9088b97e11648dbb;
  uVar8 = (uRam0000000183396730 ^ _UNK_1824384a8) + uRam0000000183396b08 + 0xfdbf7bd81f12f24;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396b08 ^ _UNK_1824384a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396730 ^ _UNK_1824384a8;
  uRam00000001833967e0 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183396b08 + 0xfdbf7bd81f12f24) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183396730 + 0x9088b97e11648dbb));
  uRam00000001833969b8 =
       (uRam00000001833969b8 ^ ~uRam00000001833967e0 & 0x9088b97e9546ae9e) + 0x9f534ec314b781ba ^
       0xa49b7b1f297f0e8c;
  uRam0000000183396dd0 =
       (uRam0000000183396dd0 * -0x38804bd712824181 ^ uRam00000001833969b8) +
       (~uRam00000001833967e0 & 0x9088b97e9546ae9e);
  uRam0000000183396ab0 = uRam0000000183396dd0 ^ uRam00000001833969b8;
  uRam0000000183396a28 = 0x9f534ec314b781ba;
  uRam00000001833968d0 = func_0x00018df7c270(uRam0000000183396db0 ^ 0x2a886ef56d48247d);
  uVar5 = (uRam00000001833968d0 ^ 0x23f1f83aff49ba50) << 0x37 |
          (uRam00000001833968d0 ^ 0x23f1f83aff49ba50) >> 9;
  uRam0000000183396cf8 = (uRam0000000183396cf8 ^ uVar5) + 0xdc0e07c500b645b0 ^ 0xeab1d5debecbeee5;
  uRam00000001833967e8 = (uRam00000001833967e8 * -0x6b326b6f8e58a961 ^ uRam0000000183396cf8) + uVar5
  ;
  uRam0000000183396a08 = uRam00000001833967e8 ^ uRam0000000183396cf8;
  uRam0000000183396a50 = uRam0000000183396db8 ^ 0xdc0e07c500b645b0;
  uRam0000000183396810 = 0xdc0e07c500b645b0;
  uVar5 = (~uRam0000000183396708 + 0x23f1f83aff49ba51) *
          ((uRam00000001833967d0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833967d0 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam0000000183396d20) + (uVar5 & uRam0000000183396d20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183396ae8 =
       func_0x00018df7c270((uVar5 | 0x23f1f83a7b6be68a) + (uVar5 & 0x23f1f83a7b6be68a));
  uVar5 = (uRam0000000183396ae8 ^ 0xd82b8769ddde3a4f) * 0x867620c8d23a935;
  uRam00000001833969e8 = uRam0000000183396da8 ^ uVar5 ^ 0x23f1f83aff4a3a4f;
  uRam0000000183396d18 = (uRam0000000183396d18 ^ uVar5) + 0x23f1f83aff4a3a4f ^ 0x8112961fbd4c13f9;
  uRam0000000183396ee8 = (uRam0000000183396ee8 * -0x74cbc71d29d2086b ^ uRam0000000183396d18) + uVar5
  ;
  uRam0000000183396ba8 = uRam0000000183396ee8 ^ uRam0000000183396d18;
  uRam0000000183396a00 = 0x23f1f83aff4a3a4f;
  uVar5 = (uRam0000000183396a48 ^ _UNK_1824384b0) + uRam0000000183396a48 + 0x84222325;
  uVar8 = (uRam0000000183396a48 ^ _UNK_1824384b8) + uRam0000000183396a48 + 0x2e622fb7cb5b4d60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396a48 ^ _UNK_1824384b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396a48 ^ _UNK_1824384b8;
  uRam0000000183396780 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183396a48 + 0x2e622fb7cb5b4d60) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183396a48 + 0x84222325));
  uRam0000000183396d40 =
       (uRam0000000183396d40 ^ uRam0000000183396e68) + 0xd19dd04834a4b2a0 ^ 0xa1937ef9b3968edf;
  uRam0000000183396840 =
       (uRam0000000183396840 * -0x32dce2c06b1ca531 ^ uRam0000000183396d40) + uRam0000000183396e68;
  uRam0000000183396818 = uRam0000000183396840 ^ uRam0000000183396d40;
  uRam00000001833969f8 = 0xd19dd04834a4b2a0;
  uVar5 = (uRam0000000183396d00 ^ _UNK_1824384c0) + uRam0000000183396e20 + 0x84225cda;
  uVar8 = (uRam0000000183396e20 ^ _UNK_1824384c8) + uRam0000000183396d00 + 0x2e622fb7cb5b4d60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396d00 ^ _UNK_1824384c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396e20 ^ _UNK_1824384c8;
  uRam0000000183396ab8 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183396d00 + 0x2e622fb7cb5b4d60) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183396e20 + 0x84225cda));
  uVar5 = (ulonglong)((uint)uRam0000000183396ab8 & 0x7fff);
  uRam0000000183396cc8 = uRam0000000183396e78 ^ uVar5 ^ 0x2e622fb7cb5bcd5f;
  uRam0000000183396c78 = (uRam0000000183396c78 ^ uVar5) + 0x2e622fb7cb5bcd5f ^ 0x3e1f341b51f9d801;
  uRam0000000183396ef8 = (uRam0000000183396ef8 * -0x48b2cdd5a7784251 ^ uRam0000000183396c78) + uVar5
  ;
  uRam0000000183396840 = uRam0000000183396ef8 ^ uRam0000000183396c78;
  uRam0000000183396c20 = 0x2e622fb7cb5bcd5f;
  uVar5 = (uRam0000000183396770 ^ _UNK_1824384d0) + uRam0000000183396710 + 0x84225cda;
  uVar8 = (uRam0000000183396710 ^ _UNK_1824384d8) + uRam0000000183396770 + 0x4cbea4033011e9b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396770 ^ _UNK_1824384d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396710 ^ _UNK_1824384d8;
  uRam0000000183396b48 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183396770 + 0x4cbea4033011e9b0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183396710 + 0x84225cda));
  uRam0000000183396b80 = uRam0000000183396bf8 ^ uRam0000000183396b48 ^ 0x4cbea403301269af;
  uRam0000000183396bf0 =
       (uRam0000000183396bf0 ^ uRam0000000183396b48) + 0x4cbea403301269af ^ 0x5cc06dd4b13a1c68;
  uRam0000000183396b70 =
       (uRam0000000183396b70 * 0x5e549d169142389 ^ uRam0000000183396bf0) + uRam0000000183396b48;
  uRam0000000183396ad8 = uRam0000000183396b70 ^ uRam0000000183396bf0;
  uRam0000000183396968 = 0x4cbea403301269af;
  uRam0000000183396ed8 = func_0x00018df7c270(lRam0000000183396d98 + 0x940bda93615c9a2fU ^ 0x38);
  uRam0000000183396e70 = uRam0000000183396a20 ^ uRam0000000183396ed8 ^ 0x6e7cfc4291373ff7;
  uRam0000000183396740 =
       (uRam0000000183396740 ^ uRam0000000183396ed8) + 0x6e7cfc4291373ff7 ^ 0x69f7a0ce54ddefc;
  uRam0000000183396c58 =
       (uRam0000000183396c58 * 0x51f37204df5d7bb3 ^ uRam0000000183396740) + uRam0000000183396ed8;
  uRam0000000183396db0 = uRam0000000183396c58 ^ uRam0000000183396740;
  uRam0000000183396eb8 = 0x6e7cfc4291373ff7;
  uRam0000000183396b50 = func_0x00018df7c270(uRam0000000183396880 ^ 0x5bf3f9635e9daa9b);
  uVar5 = uRam0000000183396b50 << 0x3b | uRam0000000183396b50 >> 5;
  uRam0000000183396808 = (uRam0000000183396808 ^ uVar5) + 0x507ae3bc68c83f87 ^ 0x979aafed515178c7;
  uRam0000000183396d60 = (uRam0000000183396d60 * -0x37521e3cc8e880d9 ^ uRam0000000183396808) + uVar5
  ;
  uRam0000000183396e58 = uRam0000000183396d60 ^ uRam0000000183396808;
  uRam0000000183396b80 = 0x507ae3bc68c83f87;
  uVar5 = (uRam0000000183396d08 ^ _UNK_1824384e0) + uRam0000000183396728 + 0x6e7cfc4215151cd2;
  uVar8 = (uRam0000000183396728 ^ _UNK_1824384e8) + uRam0000000183396d08 + 0x6e7cfc4291373ff7;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396d08 ^ _UNK_1824384e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396728 ^ _UNK_1824384e8;
  uRam0000000183396dd8 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183396d08 + 0x6e7cfc4291373ff7) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183396728 + 0x6e7cfc4215151cd2));
  uRam0000000183396700 = uRam0000000183396dd8 & 0x6e7cfc4291373ff7;
  uRam0000000183396b70 = uRam0000000183396b70 ^ uRam0000000183396700 ^ 0xece805cbc7da1a7d;
  uRam0000000183396ee0 =
       (uRam0000000183396ee0 * -0x197e3498aef04683 ^ uRam0000000183396b70) + uRam0000000183396700;
  uRam0000000183396bf0 = uRam0000000183396ee0 ^ uRam0000000183396b70;
  uRam0000000183396cc8 = 0;
  uVar5 = (uRam0000000183396c08 ^ _UNK_1824384f0) + uRam00000001833968f8 + 0xcf29ad7ff85d9d18;
  uVar8 = (uRam00000001833968f8 ^ _UNK_1824384f8) + (uRam0000000183396c08 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396c08 ^ _UNK_1824384f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833968f8 ^ _UNK_1824384f8;
  uRam0000000183396978 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183396c08 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833968f8 + 0xcf29ad7ff85d9d18));
  uRam0000000183396c98 =
       (uRam0000000183396c98 ^ uRam0000000183396978 & 0xffffffffff800000) + 0x30d65280838041c2 ^
       0x3d8650eba84156ad;
  uRam0000000183396a50 =
       (uRam0000000183396a50 * -0x2ce80fa309e4e6b ^ uRam0000000183396c98) +
       (uRam0000000183396978 & 0xffffffffff800000);
  uRam00000001833967c0 = uRam0000000183396a50 ^ uRam0000000183396c98;
  uRam00000001833967b8 = 0x30d65280838041c2;
  uVar5 = (~uRam00000001833969a8 + 0x30d65280838041c3) *
          ((uRam0000000183396e20 ^ 0xcf29ad7ff85d9d18) +
          (uRam0000000183396e20 & 0x4f29ad7ff85d9d18) * 2);
  uVar5 = (uVar5 | uRam0000000183396950) + (uVar5 & uRam0000000183396950);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183396c58 =
       func_0x00018df7c270((uVar5 | 0xffffffff7bdddcda) + (uVar5 & 0xffffffff7bdddcda));
  uRam0000000183396bd8 = uRam0000000183396bd8 ^ uRam0000000183396c38 ^ 0x7ef08676ad2c565c;
  uRam0000000183396970 =
       (uRam0000000183396970 * 0x48da28fbaa1e3e59 ^ uRam0000000183396bd8) + uRam0000000183396c38;
  uRam0000000183396aa8 = uRam0000000183396970 ^ uRam0000000183396bd8;
  uRam00000001833969d0 = 0;
  uRam00000001833967b0 = func_0x00018df7c270(lRam0000000183396938 + 0xffbbff7c35ffe1ffU ^ 0xd3);
  uVar5 = uRam00000001833967b0 << 0x12 | uRam00000001833967b0 >> 0x2e;
  uRam00000001833968d0 = uRam00000001833969f0 ^ uVar5 ^ 0x7fff;
  uRam0000000183396ba0 = (uRam0000000183396ba0 ^ uVar5) + 0x7fff ^ 0x99f62c2310079234;
  uRam0000000183396a80 = (uRam0000000183396a80 * -0x3b5eb8d7ccc20123 ^ uRam0000000183396ba0) + uVar5
  ;
  uRam0000000183396af8 = uRam0000000183396a80 ^ uRam0000000183396ba0;
  uRam0000000183396c50 = 0x7fff;
  uVar5 = (~uRam0000000183396720 + 0xc201ad07783bb42d) *
          ((uRam0000000183396700 ^ 0xc201ad07fc199709) +
          (uRam0000000183396700 & 0x4201ad07fc199709) * 2);
  uVar5 = (uVar5 | uRam0000000183396ca8) + (uVar5 & uRam0000000183396ca8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183396d50 =
       func_0x00018df7c270((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam0000000183396db8 =
       uRam0000000183396db8 ^ uRam0000000183396d50 & 0xffffffffffffe000 ^ 0x798442d45c383ee8;
  uRam0000000183396e28 =
       (uRam0000000183396e28 * 0x18c1a1f9aba9077f ^ uRam0000000183396db8) +
       (uRam0000000183396d50 & 0xffffffffffffe000);
  uRam0000000183396a50 = uRam0000000183396e28 ^ uRam0000000183396db8;
  uRam0000000183396ed8 = 0;
  uRam0000000183396e68 = func_0x00018df7c270(uRam0000000183396da8 ^ 0x5c008446001dd1);
  uVar5 = uRam0000000183396e68 >> 1 | uRam0000000183396e68;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183396e68;
  uRam00000001833968e8 = uRam0000000183396998 ^ uVar5 ^ 0x7fff;
  uRam0000000183396968 = (uRam0000000183396968 ^ uVar5) + 0x7fff ^ 0x5809eeeee9bd5cb0;
  uRam0000000183396d18 = (uRam0000000183396d18 * -0x51fb5ba4b184a461 ^ uRam0000000183396968) + uVar5
  ;
  uRam0000000183396ca0 = uRam0000000183396d18 ^ uRam0000000183396968;
  uRam0000000183396848 = uRam0000000183396bb0 ^ 0x7fff;
  uRam0000000183396b98 = 0x7fff;
  uVar5 = (~uRam0000000183396b08 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183396758) +
          ((param_4 ^ 0x84222325) & uRam0000000183396758) * 2);
  uVar5 = (uVar5 | uRam0000000183396720) + (uVar5 & uRam0000000183396720);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833967e0 =
       func_0x00018df7c270((param_4 ^ 0x84225cda | uVar5) + (uVar5 & (param_4 ^ 0x84225cda)));
  uVar3 = (uint)param_4 & 0x7fff;
  uVar8 = (ulonglong)uVar3;
  uRam0000000183396da8 =
       (uRam0000000183396da8 ^ param_4 ^ uRam0000000183396be8) + uVar8 ^ 0x307b31e8e75dc862;
  uRam0000000183396a88 =
       (uRam0000000183396a88 * 0x10bb77b7b4a2702f ^ uRam0000000183396da8) +
       (param_4 ^ uRam0000000183396be8);
  uRam0000000183396bb8 = uRam0000000183396a88 ^ uRam0000000183396da8;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar3 ^ 0x84222325;
  auVar6._8_4_ = param_3;
  auVar6._12_4_ = 0;
  auVar7 = pshufb(auVar6 ^ _UNK_182438500,_UNK_1800170c0);
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar5 = uVar4 + lRam0000000183396ac8;
  if (auVar7._4_4_ < 0) {
    uVar5 = uRam0000000183396d48 ^ uVar4;
  }
  uRam0000000183396de8 = uVar8;
  uRam0000000183396e38 = func_0x00018df7c270(SUB161(auVar6 ^ _UNK_182438500,5) ^ uVar5);
  uVar5 = ((uVar3 | param_3) ^ uRam0000000183396e38) * -0x67f10187c60ac4f1;
  uRam0000000183396778 = (uVar8 + param_3) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183396b78 = (uRam0000000183396b78 ^ uVar5) + uRam0000000183396778 ^ 0xaf36cc654dd85212;
  uRam0000000183396868 = (uRam0000000183396868 * 0x4ddbbe9d6d848fbb ^ uRam0000000183396b78) + uVar5;
  uRam0000000183396970 = uRam0000000183396868 ^ uRam0000000183396b78;
  uRam0000000183396778 = uRam0000000183396778 & 0xffffffff;
  uVar5 = (uRam00000001833969d0 ^ _UNK_182438510) + uRam0000000183396790 + 0xa8ccacae;
  uVar8 = (uRam0000000183396790 ^ _UNK_182438518) + uRam00000001833969d0 + 0x2126da78;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833969d0 ^ _UNK_182438510;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396790 ^ _UNK_182438518;
  uRam0000000183396820 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833969d0 + 0x2126da78) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183396790 + 0xa8ccacae));
  uVar5 = (uRam0000000183396820 ^ 0x5d192426fb1a728) << 0x1d |
          (uRam0000000183396820 ^ 0x5d192426fb1a728) >> 0x23;
  uRam0000000183396918 = (uRam0000000183396918 ^ uVar5) + 0x2deedffb ^ 0xcd5ce94f396b8186;
  uRam0000000183396db8 = (uRam0000000183396db8 * 0x6ddcdd2ce08e26a5 ^ uRam0000000183396918) + uVar5;
  uRam0000000183396b68 = uRam0000000183396db8 ^ uRam0000000183396918;
  uRam0000000183396a18 = 0x2deedffb;
  uRam00000001833967e8 = func_0x00018df7c270(lRam0000000183396d30 + 0xff20008076fff6ffU ^ 0x2a);
  uRam0000000183396a90 =
       (uRam0000000183396a90 ^ uRam00000001833967e8) + 0x439c35e ^ 0xa69f70858d99d032;
  uRam0000000183396c58 =
       (uRam0000000183396c58 * 0x6713cee3496b8b0d ^ uRam0000000183396a90) + uRam00000001833967e8;
  uRam00000001833967e0 = uRam0000000183396c58 ^ uRam0000000183396a90;
  uRam0000000183396cd8 = 0x439c35e;
  uVar5 = (~uRam0000000183396d20 + 0x2285d410) *
          ((uRam0000000183396aa0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183396aa0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183396de0) + (uVar5 & uRam0000000183396de0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183396ac0 =
       func_0x00018df7c270((uVar5 | 0xa6a7f72a) + (ulonglong)((uint)uVar5 & 0xa6a7f72a));
  uVar5 = (uRam0000000183396ac0 ^ 0x2285d40f) * -0x5688a4abe83148d;
  uVar8 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uVar5;
  uRam0000000183396eb8 = (uRam0000000183396eb8 ^ uVar5) - 0x2285d40f ^ 0x2a5eb13ec713ca15;
  uRam0000000183396e68 = (uRam0000000183396e68 * -0x2b8591c35ae091a5 ^ uRam0000000183396eb8) + uVar5
  ;
  uRam0000000183396a10 = uRam0000000183396e68 ^ uRam0000000183396eb8;
  uRam00000001833969a0 = 0xdd7a2bf1;
  uVar5 = (uRam0000000183396928 ^ _UNK_182438520) + uRam0000000183396ae8 + 0x842261b4;
  uVar8 = (uRam0000000183396ae8 ^ _UNK_182438528) + uRam0000000183396928 + 0x2285d40f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396928 ^ _UNK_182438520;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396ae8 ^ _UNK_182438528;
  uRam00000001833968d8 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183396928 + 0x2285d40f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183396ae8 + 0x842261b4));
  uVar5 = uRam00000001833968d8 ^ 0x2285d69f;
  uVar8 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar5;
  uRam0000000183396b98 = uRam0000000183396a30 ^ uVar5 ^ 0x228616a0;
  uRam0000000183396d88 = (uRam0000000183396d88 ^ uVar5) + 0x228616a0 ^ 0x40fdedd3c298e147;
  uRam0000000183396bc0 = (uRam0000000183396bc0 * -0x2a67c927ac46abc3 ^ uRam0000000183396d88) + uVar5
  ;
  uRam0000000183396d38 = uRam0000000183396bc0 ^ uRam0000000183396d88;
  uRam0000000183396968 = 0x228616a0;
  uRam0000000183396bc0 = func_0x00018df7c270(lRam00000001833967c8 + 0x15ffeaebff55ffU ^ 0xda);
  uVar5 = uRam0000000183396bc0 ^ 0xdd7a2bf1;
  uRam0000000183396bf8 = uRam0000000183396ad0 ^ uVar5 ^ 0x100004291;
  uRam0000000183396830 = (uRam0000000183396830 ^ uVar5) + 0x100004291 ^ 0xfda95e9c87d45c0b;
  uRam00000001833969e0 = (uRam00000001833969e0 * -0x333f9aa1faba8101 ^ uRam0000000183396830) + uVar5
  ;
  uRam0000000183396a88 = uRam00000001833969e0 ^ uRam0000000183396830;
  uRam0000000183396a10 = uRam0000000183396be8 ^ 0x100004291;
  uRam0000000183396908 = 0x4291;
  uVar5 = (~uRam0000000183396b48 + 0xa3ea5e81) *
          ((uRam00000001833968f0 ^ 0x842261b4) +
          (ulonglong)((uint)uRam00000001833968f0 & 0x842261b4) * 2);
  uVar5 = (uVar5 | uRam0000000183396ba8) + (uVar5 & uRam0000000183396ba8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833967b0 =
       func_0x00018df7c270((uVar5 | 0x27c83f34) + (ulonglong)((uint)uVar5 & 0x27c83f34));
  uRam0000000183396d90 = uRam0000000183396e38 ^ uRam00000001833967b0 ^ 0xa3eaa111;
  uRam00000001833968f0 =
       (uRam00000001833968f0 ^ uRam00000001833967b0) + 0xa3eaa111 ^ 0x7c50121dfb70d9f6;
  uRam0000000183396ae8 =
       (uRam0000000183396ae8 * 0x66b98c4a289a404f ^ uRam00000001833968f0) + uRam00000001833967b0;
  uRam0000000183396e28 = uRam0000000183396ae8 ^ uRam00000001833968f0;
  uRam0000000183396710 = 0xa3eaa111;
  uRam0000000183396b68 = func_0x00018df7c270(uRam0000000183396998 + 0xff9efffe36007dff ^ 0xd);
  uRam0000000183396c28 =
       (uRam0000000183396c28 ^ uRam0000000183396b68) - 0x85a042db ^ 0x255195a383bcc799;
  uRam0000000183396d28 =
       (uRam0000000183396d28 * 0x5bf2a56ccaf9e213 ^ uRam0000000183396c28) + uRam0000000183396b68;
  uRam0000000183396868 = uRam0000000183396d28 ^ uRam0000000183396c28;
  uRam0000000183396970 = 0x7a5fbd25;
  uVar5 = (~uRam0000000183396ed8 + 0x85a042dc) *
          ((uRam0000000183396780 ^ 0x842261b4) +
          (ulonglong)((uint)uRam0000000183396780 & 0x842261b4) * 2);
  uVar5 = (uVar5 | uRam00000001833969d0) + (uVar5 & uRam00000001833969d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183396da8 =
       func_0x00018df7c270((uVar5 | 0x182236f) + (ulonglong)((uint)uVar5 & 0x182236f));
  uVar5 = uRam0000000183396950 & 0xffffffffffff0000;
  uRam0000000183396ce8 = uRam00000001833967e0 ^ uVar5 ^ 0x85a0856c;
  uRam0000000183396af8 = (uRam0000000183396af8 ^ uVar5) + 0x85a0856c ^ 0x7d1074278ad1b5da;
  uRam00000001833969d8 = (uRam00000001833969d8 * -0x41bcf9571eb57227 ^ uRam0000000183396af8) + uVar5
  ;
  uRam0000000183396eb0 = uRam00000001833969d8 ^ uRam0000000183396af8;
  uRam0000000183396db0 = 0x85a0856c;
  uRam00000001833969a8 = func_0x00018df7c270(uRam0000000183396ca0 + 0xb009c7fffcaff ^ 0x93);
  uVar5 = uRam00000001833969a8 ^ 0xc218bd9d356f2a;
  uRam0000000183396870 = uRam0000000183396cc8 ^ uVar5 ^ 0x3228a359;
  uRam0000000183396920 = (uRam0000000183396920 ^ uVar5) + 0x3228a359 ^ 0x4ffdd6a936f886a3;
  uRam0000000183396cf0 = (uRam0000000183396cf0 * 0x62f4bc9190e692bf ^ uRam0000000183396920) + uVar5;
  uRam0000000183396e88 = uRam0000000183396cf0 ^ uRam0000000183396920;
  uRam0000000183396bd8 = 0x3228a359;
  uVar5 = (uRam0000000183396b90 ^ _UNK_182438530) + uRam0000000183396960 + 0xa9ccfcde;
  uVar8 = (uRam0000000183396960 ^ _UNK_182438538) + uRam0000000183396b90 + 0x439c35e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396b90 ^ _UNK_182438530;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396960 ^ _UNK_182438538;
  uRam0000000183396a38 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183396b90 + 0x439c35e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183396960 + 0xa9ccfcde));
  uVar5 = (uRam0000000183396a38 ^ 0x2dffdfff) & 0x3fffffffff ^ 0x2deedffb;
  uRam00000001833967b0 = (uRam00000001833967b0 ^ uVar5) + 0x29d71ca5 ^ 0xd43a7f7e7f155c1c;
  uRam0000000183396e00 = (uRam0000000183396e00 * 0x66e9f04f4e105c37 ^ uRam00000001833967b0) + uVar5;
  uRam0000000183396c78 = uRam0000000183396e00 ^ uRam00000001833967b0;
  uRam0000000183396a48 = 0x29d71ca5;
  uRam0000000183396de8 = func_0x00018df7c270(uRam0000000183396900 + 0x87005cd4009bff ^ 0x7f);
  uVar5 = uRam0000000183396de8 & 0x7fffffff800000;
  uRam00000001833968b8 = uRam00000001833969c0 ^ uVar5 ^ 0x3228a359;
  uRam00000001833968c0 = (uRam00000001833968c0 ^ uVar5) + 0x3228a359 ^ 0x3f3efb3cd9571eca;
  uRam0000000183396da8 = (uRam0000000183396da8 * -0x215f56e0ffdeb775 ^ uRam00000001833968c0) + uVar5
  ;
  uRam0000000183396b18 = uRam0000000183396da8 ^ uRam00000001833968c0;
  uRam0000000183396c88 = 0x3228a359;
  uVar5 = (uRam0000000183396850 ^ _UNK_182438540) + uRam0000000183396980 + 0xb60a807c;
  uVar8 = (uRam0000000183396980 ^ _UNK_182438548) + uRam0000000183396850 + 0x3228a359;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396850 ^ _UNK_182438540;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183396980 ^ _UNK_182438548;
  uRam0000000183396c00 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183396850 + 0x3228a359) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183396980 + 0xb60a807c));
  uVar5 = uRam0000000183396c00 >> 1 | uRam0000000183396c00;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam0000000183396c00;
  uRam0000000183396c10 = uVar5 << 0x27 | uVar5 >> 0x19;
  uVar5 = uRam0000000183396c10 >> 1 | uRam0000000183396c10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam0000000183396c10 =
       0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
       uRam0000000183396c10;
  uRam0000000183396a88 = uRam0000000183396a88 ^ uRam0000000183396c10 ^ 0x19afe1ba1201b430;
  uRam0000000183396ef8 =
       (uRam0000000183396ef8 * -0xc6b6ddd8e903887 ^ uRam0000000183396a88) + uRam0000000183396c10;
  uRam0000000183396c98 = uRam0000000183396ef8 ^ uRam0000000183396a88;
  uRam00000001833969c8 = 0;
  uVar5 = (uRam0000000183396e58 ^ 0x842261b4) + uRam0000000183396928 + 0x842261b4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183396e58 ^ 0x842261b4;
  uVar8 = ((uRam0000000183396928 + uRam0000000183396e58) * 0x2000 |
          uRam0000000183396928 + uRam0000000183396e58 >> 0x33) ^ uRam0000000183396928;
  uRam0000000183396da8 =
       func_0x00018df7c270((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183396e58 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183396928 + 0x842261b4));
  uVar5 = (uRam0000000183396da8 & 0xfffffffffffc0000) + 0x4291;
  uRam0000000183396c60 = uRam0000000183396848 ^ uVar5 ^ 0x4291;
  uRam0000000183396ab8 = (uVar5 ^ uRam0000000183396ab8) + 0x4291 ^ 0x73563b8f3db3096;
  uRam00000001833967c0 =
       (uRam0000000183396da8 & 0xfffffffffffc0000) +
       (uRam00000001833967c0 * 0x3d22203afcdee693 ^ uRam0000000183396ab8) + 0x4291;
  uRam0000000183396990 = uRam0000000183396ab8 ^ uRam00000001833967c0;
  uRam0000000183396840 = 0x4291;
  uVar5 = (~uRam0000000183396998 + 0x100000000) *
          ((uRam0000000183396bb8 ^ 0xa9ccfcde) +
          (ulonglong)((uint)uRam0000000183396bb8 & 0xa9ccfcde) * 2);
  uVar5 = (uVar5 | uRam0000000183396820) + (uVar5 & uRam0000000183396820);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183396700 =
       func_0x00018df7c270((uVar5 | 0x56330321) + (ulonglong)((uint)uVar5 & 0x56330321));
  uRam0000000183396dd8 =
       (uRam0000000183396dd8 ^ uRam0000000183396700 & 0xfffffffffffe0000) + 0xd2112004 ^
       0xb391431853c9d8e9;
  uRam0000000183396900 =
       (uRam0000000183396900 * -0x4ba3fc705bc7e7f7 ^ uRam0000000183396dd8) +
       (uRam0000000183396700 & 0xfffffffffffe0000);
  uRam0000000183396c20 = uRam0000000183396900 ^ uRam0000000183396dd8;
  uRam0000000183396ed0 = uRam0000000183396d40 ^ 0xd2112004;
  uRam0000000183396d28 = 0xd2112004;
  uRam0000000183396918 = func_0x00018df7c270(lRam0000000183396b30 + 0xd40059c9ffbaffU ^ 0xab);
  uRam0000000183396e90 =
       uRam0000000183396e90 ^ uRam0000000183396918 ^ 0xffffffff ^ 0xb49eadc58875ed68;
  uRam0000000183396a08 =
       (uRam0000000183396a08 * 0x2b0b8171e15ae4f5 ^ uRam0000000183396e90) +
       (uRam0000000183396918 ^ 0xffffffff);
  uRam00000001833969d8 = uRam0000000183396a08 ^ uRam0000000183396e90;
  uRam0000000183396be0 = 0;
  uVar5 = ((uRam0000000183396bd0 ^ 0x842261b4) +
          (ulonglong)((uint)uRam0000000183396bd0 & 0x842261b4) * 2) * -uRam0000000183396818;
  uVar5 = (uVar5 | uRam0000000183396e18) + (uVar5 & uRam0000000183396e18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183396e68 =
       func_0x00018df7c270((uVar5 | 0x842261b4) + (ulonglong)((uint)uVar5 & 0x842261b4));
  uVar5 = uRam0000000183396e68 & 0x7fffffffffffffff;
  uRam0000000183396760 = uRam0000000183396708 ^ uVar5 ^ 0x4291;
  uRam0000000183396be0 = (uRam0000000183396be0 ^ uVar5) + 0x4291 ^ 0x43386edaedb6f5ed;
  uRam00000001833969b8 = (uRam00000001833969b8 * 0x77b7973df1d9ddaf ^ uRam0000000183396be0) + uVar5;
  uRam00000001833968a8 = uRam00000001833969b8 ^ uRam0000000183396be0;
  uRam0000000183396e28 = 0x4291;
  uVar5 = (~uRam0000000183396a78 + 0x2cee8f8c) *
          ((uRam0000000183396ed0 ^ 0xa8ccacae) +
          (ulonglong)((uint)uRam0000000183396ed0 & 0xa8ccacae) * 2);
  uVar5 = (uVar5 | uRam0000000183396ac0) + (uVar5 & uRam0000000183396ac0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183396910 =
       func_0x00018df7c270((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = uRam0000000183396910 & 0xfffffffffffffff8 ^ 0x2cee8f8b;
  uRam0000000183396c20 = uRam0000000183396c20 ^ uVar5 ^ 0x10601f4c5e4e7ff1;
  uRam0000000183396ad8 = (uRam0000000183396ad8 * -0x1b8dc335e86f07b5 ^ uRam0000000183396c20) + uVar5
  ;
  uRam0000000183396a00 = uRam0000000183396ad8 ^ uRam0000000183396c20;
  uRam0000000183396e28 = 0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x9309,0x19f)
      /* POOL[0x9309,0x19f]: ElrnL | sErFE | BbEXB | zuPTe | aku | aky | sixtwo/dD | bapnK | akC | field_1765 | Lnet/minecraft/class_239; | net/minecraft/class_239 | method_17783 | ()Lnet/minecraft/class_239$class_240; | net/minecraft/class_239$class_240 | field_1331 | Lnet/minecraft/class_239$class_240; | net/minecraft/class_3966 | method_17782 | ()Lnet/minecraft/class_1297; | net/minecraft/class_1533 | ZKjem | htjaR | dxsTa | sixtwo/oR | cJV | (Lnet/minecraft/class_1309;)Z | mJHrk | Uy | APUxf | s */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018df73ab3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182436630 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dD; akE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18df7c300, runtime 6ffff5b8c300) =====

void FUN_18df7c300(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018df7c34b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182438610 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/dD; akF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18df7d310, runtime 6ffff5b8d310) =====

void FUN_18df7d310(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018df7d399 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182438bd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xdf69ee0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df69ee0(void)

{
  FUN_190ddce00();
  (*_DAT_182434998)();
  return;
}


// ----- block @ rva 0xdf6e2fc -----

void FUN_18df6e2fc(void)

{
  return;
}


// ----- block @ rva 0xdf6f057 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df6f057(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  (*_DAT_182434bb8)();
  return;
}


// ----- block @ rva 0xdf6f0ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df6f0ac(void)

{
  FUN_190dd72e0();
  (*_DAT_1824342f8)();
  return;
}


// ----- block @ rva 0xdf6f208 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df6f208(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182434568)();
  return;
}


// ----- block @ rva 0xdf6f781 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df6f781(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_1824353c8)();
  return;
}


// ----- block @ rva 0xdf700ea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df700ea(void)

{
  (*_DAT_182435238)();
  return;
}


// ----- block @ rva 0xdf7056f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7056f(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182434708)();
  return;
}


// ----- block @ rva 0xdf70681 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df70681(void)

{
  FUN_190dd72e0();
  (*_DAT_1824342e8)();
  return;
}


// ----- block @ rva 0xdf707f7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df707f7(void)

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


// ----- block @ rva 0xdf70a37 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df70a37(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182434f38)();
  return;
}


// ----- block @ rva 0xdf70b32 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df70b32(void)

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


// ----- block @ rva 0xdf7168a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7168a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_1824357c8)();
  return;
}


// ----- block @ rva 0xdf73ab6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df73ab6(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xdf73c55 -----

void FUN_18df73c55(void)

{
  return;
}


// ----- block @ rva 0xdf73e21 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df73e21(void)

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


// ----- block @ rva 0xdf7421e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7421e(void)

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


// ----- block @ rva 0xdf74269 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df74269(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000081;
  
  uStack0000000000000081 = in_stack_00000058;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdf75214 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df75214(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x724,0x22);
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


// ----- block @ rva 0xdf75269 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df75269(void)

{
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdf75a7e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df75a7e(void)

{
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdf75cda -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df75cda(void)

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


// ----- block @ rva 0xdf75d08 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df75d08(void)

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


// ----- block @ rva 0xdf774a9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df774a9(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x724,0x22);
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


// ----- block @ rva 0xdf77635 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df77635(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xbc9,0x2f);
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


// ----- block @ rva 0xdf7971e -----

undefined8 thunk_FUN_18df74c4f(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xdf7c34e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7c34e(void)

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


// ----- block @ rva 0xdf7c3a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df7c3a2(void)

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


// ----- block @ rva 0xdf7c3c9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7c3c9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182438b28)();
  return;
}


// ----- block @ rva 0xdf7c42b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7c42b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectArrayElement /*0x568*/))();
  (*_DAT_182438808)();
  return;
}


// ----- block @ rva 0xdf7c5fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7c5fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182438b78)();
  return;
}


// ----- block @ rva 0xdf7c647 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7c647(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000048;
  
  uStack0000000000000048 = 1;
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_182438768)();
  return;
}


// ----- block @ rva 0xdf7c6b5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df7c6b5(void)

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


// ----- block @ rva 0xdf7c94b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df7c94b(void)

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


// ----- block @ rva 0xdf7cf70 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7cf70(void)

{
  FUN_190dd72e0();
  (*_DAT_182438a18)();
  return;
}


// ----- block @ rva 0xdf7cfd6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7cfd6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_182438a08)();
  return;
}


// ----- block @ rva 0xdf7d033 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7d033(void)

{
  FUN_190de3220();
  (*_DAT_182438918)();
  return;
}


// ----- block @ rva 0xdf7d215 -----

void FUN_18df7d215(void)

{
  return;
}


// ----- block @ rva 0xdf7d224 -----

void FUN_18df7d224(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xdf7d39c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7d39c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1824395e8)();
  return;
}


// ----- block @ rva 0xdf7d4d7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7d4d7(void)

{
  FUN_190dd72e0();
  (*_DAT_182438cb8)();
  return;
}


// ----- block @ rva 0xdf7dfa2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7dfa2(void)

{
  (*_DAT_182439b08)();
  return;
}


// ----- block @ rva 0xdf7e2ec -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7e2ec(void)

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


// ----- block @ rva 0xdf7e947 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7e947(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182439248)();
  return;
}


// ----- block @ rva 0xdf7eb53 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df7eb53(void)

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


// ----- block @ rva 0xdf7f336 -----

void FUN_18df7f336(void)

{
  return;
}


// ----- block @ rva 0xdf7f849 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df7f849(void)

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


// ----- block @ rva 0xdf7f96c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7f96c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182438f58)();
  return;
}


// ----- block @ rva 0xdf7fc97 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7fc97(void)

{
  (*_DAT_182439818)();
  return;
}


// ----- block @ rva 0xdf7fe74 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df7fe74(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182439408)();
  return;
}


// ----- block @ rva 0xdf7feda -----

void FUN_18df7feda(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xdf8010b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df80161 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df8010b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdf801e8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df8023c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df801e8(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdf808a4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df808db */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df808a4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticLongField /*0x4b8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdf81e03 -----

void thunk_FUN_18df81e4b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xdf8a42e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df8a42e(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000b9;
  
  uStack00000000000000b9 = in_stack_00000070;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
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


// ----- block @ rva 0xdf8a76a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df8a76a(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000b3;
  
  uStack00000000000000b3 = in_stack_00000070;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdf9228b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df9228b(void)

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


// ----- block @ rva 0xdf98461 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df98461(void)

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


// ----- block @ rva 0xdf98642 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df98642(void)

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


// ----- block @ rva 0xdf98804 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df98804(void)

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


// ----- block @ rva 0xdf991de -----

void FUN_18df991de(void)

{
  return;
}

