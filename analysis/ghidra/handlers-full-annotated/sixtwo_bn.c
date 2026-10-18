// ===== Lsixtwo/bn; Fj (DD)V (handler @ image 18ee436b0, runtime 6ffff6a536b0) =====

void FUN_18ee436b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x73fc,0x146);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ee43780 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827965b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; Fk ()Lsixtwo/nd; (handler @ image 18eeac2a0, runtime 6ffff6abc2a0) =====

void FUN_18eeac2a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018eeac2c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827a9170 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bn; Fl ()Lsixtwo/az; (handler @ image 18eeac4a0, runtime 6ffff6abc4a0) =====

void FUN_18eeac4a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018eeac4c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827a9250 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bn; Fm ()Lsixtwo/rk; (handler @ image 18eeac6a0, runtime 6ffff6abc6a0) =====

void FUN_18eeac6a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018eeac6c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827a9330 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bn; Fn (Lsixtwo/cy;Lsixtwo/cJ;Lsixtwo/cC;Lsixtwo/aj;)V (handler @ image 18eeac8a0, runtime 6ffff6abc8a0) =====

void FUN_18eeac8a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x73fc,0x146);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018eeac8fd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827a9410 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; Fo (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18eeaddc0, runtime 6ffff6abddc0) =====

undefined8 FUN_18eeaddc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/bn; Fp ([B)Ljava/lang/String; (handler @ image 18eddfcf0, runtime 6ffff69efcf0) =====

void FUN_18eddfcf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018eddfd90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182786630 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bn; Fq (IJ)Ljava/lang/String; (handler @ image 18ee09d00, runtime 6ffff6a19d00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ee09d00(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar9;
  
  uVar5 = (~uRam00000001833dc7f8 + 0x97e0f7f17c24dbc2) *
          ((uRam00000001833dcac8 ^ 0xbd3942a0b4bd43c9) +
          (uRam00000001833dcac8 & 0x3d3942a0b4bd43c9) * 2);
  uVar5 = (uVar5 | uRam00000001833dcba0) + (uVar5 & uRam00000001833dcba0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc848 =
       func_0x00018ee111c0((uVar5 | 0x2ad9b551c8999808) + (uVar5 & 0x2ad9b551c8999808));
  uRam00000001833dcc10 =
       (uRam00000001833dcc10 ^ uRam00000001833dc848) + 0xbff9f7f17cbffbed ^ 0xf1a2ec7d607518f5;
  uRam00000001833dcc60 =
       (uRam00000001833dcc60 * -0x467752c47ce4d7f5 ^ uRam00000001833dcc10) + uRam00000001833dc848;
  uRam00000001833dc728 = uRam00000001833dcc60 ^ uRam00000001833dcc10;
  uRam00000001833dcbe0 = 0xbff9f7f17cbffbed;
  uVar5 = (uRam00000001833dc9d0 ^ _UNK_18278d880) + 0xc698389219918689;
  uVar8 = (_UNK_18278d888 ^ 0xbff9f7f17cbffbed) + uRam00000001833dc9d0 + 0x3a8fc00aa58fe5c8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dc9d0 ^ _UNK_18278d880;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _UNK_18278d888 ^ 0xbff9f7f17cbffbed;
  uRam00000001833dc7b0 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833dc9d0 + 0x3a8fc00aa58fe5c8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) + 0x3967c76de66e7977);
  uRam00000001833dcc38 =
       (uRam00000001833dcc38 ^ uRam00000001833dc7b0) + 0x3c1180aabd7c4c71 ^ 0xfb65311703e7df5f;
  uRam00000001833dca08 =
       (uRam00000001833dca08 * 0x516e27f7296dfed5 ^ uRam00000001833dcc38) + uRam00000001833dc7b0;
  uRam00000001833dcb00 = uRam00000001833dca08 ^ uRam00000001833dcc38;
  uRam00000001833dc778 = 0x3c1180aabd7c4c71;
  uRam00000001833dca88 = func_0x00018ee111c0(uRam00000001833dc9d8 + 0x154a88899d5de5ff ^ 0xe4);
  uRam00000001833dcbc8 =
       (uRam00000001833dcbc8 ^ uRam00000001833dca88) + 0xff689de8ed279140 ^ 0xb09aadc393c12de2;
  uRam00000001833dca50 =
       (uRam00000001833dca50 * -0x395ea442ab9e248f ^ uRam00000001833dcbc8) + uRam00000001833dca88;
  uRam00000001833dcc80 = uRam00000001833dca50 ^ uRam00000001833dcbc8;
  uRam00000001833dc818 = 0xff689de8ed279140;
  uVar5 = (~uRam00000001833dc948 + 0x97621712d86ec1) *
          ((uRam00000001833dc7c8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833dc7c8 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001833dc980) + (uVar5 & uRam00000001833dc980);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc9b0 =
       func_0x00018ee111c0((uVar5 | 0x97621796fa321a) + (uVar5 & 0x97621796fa321a));
  uRam00000001833dca40 = uRam00000001833dc718 ^ uRam00000001833dc9b0 ^ 0x97621712d8eebf;
  uRam00000001833dcce0 =
       (uRam00000001833dcce0 ^ uRam00000001833dc9b0) + 0x97621712d8eebf ^ 0xab62469dc8936bc8;
  uRam00000001833dcac0 =
       (uRam00000001833dcac0 * -0x4c28aa39efcabb39 ^ uRam00000001833dcce0) + uRam00000001833dc9b0;
  uRam00000001833dc840 = uRam00000001833dcac0 ^ uRam00000001833dcce0;
  uRam00000001833dcc28 = 0x97621712d8eebf;
  uVar5 = (~uRam00000001833dcb30 + 0xff689de8ed279141) *
          ((uRam00000001833dcb08 ^ 0x97621796facd9a) + (uRam00000001833dcb08 & 0x97621796facd9a) * 2
          );
  uVar5 = (uVar5 | uRam00000001833dc9c8) + (uVar5 & uRam00000001833dc9c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcb48 =
       func_0x00018ee111c0((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = (uRam00000001833dcb48 ^ 0x8ff9cb9cc78edec0) & 0x7fffffffffffffff;
  uRam00000001833dcb00 = uRam00000001833dca90 ^ uVar5 ^ 0x7fff;
  uRam00000001833dca40 = (uRam00000001833dca40 ^ uVar5) + 0x7fff ^ 0x1c186675cc1f28b9;
  uRam00000001833dc770 = (uRam00000001833dc770 * -0x59dd402c154deb09 ^ uRam00000001833dca40) + uVar5
  ;
  uRam00000001833dcac8 = uRam00000001833dc770 ^ uRam00000001833dca40;
  uRam00000001833dca60 = 0x7fff;
  uRam00000001833dcc98 = func_0x00018ee111c0(uRam00000001833dc9c8 ^ 0x1ffdedede3a3a1c9);
  uVar5 = (uRam00000001833dcc98 << 0x3e | uRam00000001833dcc98 >> 2) >> 0x15 |
          (uRam00000001833dcc98 >> 2) << 0x2b;
  uRam00000001833dcc50 = (uRam00000001833dcc50 ^ uVar5) + 0x3fcd5b9f4983dac6 ^ 0xd1021650a281836c;
  uRam00000001833dca68 = (uRam00000001833dca68 * 0x2e83ce7aadf4e2cb ^ uRam00000001833dcc50) + uVar5;
  uRam00000001833dc790 = uRam00000001833dca68 ^ uRam00000001833dcc50;
  uRam00000001833dc9d0 = 0x3fcd5b9f4983dac6;
  uVar5 = (~uRam00000001833dc7e8 + 0xc032a460b67c253b) *
          ((uRam00000001833dc978 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833dc978 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001833dca78) + (uVar5 & uRam00000001833dca78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dccd0 =
       func_0x00018ee111c0((uVar5 | 0xc032a460325e79e0) + (uVar5 & 0xc032a460325e79e0));
  uVar5 = uRam00000001833dccd0 << 0x31 | uRam00000001833dccd0 >> 0xf;
  uRam00000001833dc990 = uRam00000001833dc858 ^ uVar5 ^ 0xc032a460b67ca539;
  uRam00000001833dccf8 = (uRam00000001833dccf8 ^ uVar5) + 0xc032a460b67ca539 ^ 0x2ee96bf67e388bf;
  uRam00000001833dc8f8 = (uRam00000001833dc8f8 * -0x49150bb08d78ddbf ^ uRam00000001833dccf8) + uVar5
  ;
  uRam00000001833dc920 = uRam00000001833dc8f8 ^ uRam00000001833dccf8;
  uRam00000001833dc7c0 = 0xc032a460b67ca539;
  uVar5 = (uRam00000001833dcae8 ^ _UNK_18278d890) + uRam00000001833dc868 + 0x84222325;
  uVar8 = (uRam00000001833dc868 ^ _UNK_18278d898) + uRam00000001833dcae8 + 0x9c45d7b757258134;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcae8 ^ _UNK_18278d890;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dc868 ^ _UNK_18278d898;
  uRam00000001833dca30 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833dcae8 + 0x9c45d7b757258134) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dc868 + 0x84222325));
  uRam00000001833dc8c8 =
       (uRam00000001833dc8c8 ^ uRam00000001833dccd8) + 0x63ba2848a8da7ecc ^ 0x2bcd8d2c07d1811f;
  uRam00000001833dc790 =
       (uRam00000001833dc790 * 0x1b690efedeea5a8d ^ uRam00000001833dc8c8) + uRam00000001833dccd8;
  uRam00000001833dcc18 = uRam00000001833dc790 ^ uRam00000001833dc8c8;
  uRam00000001833dcc50 = 0x63ba2848a8da7ecc;
  uVar5 = (~uRam00000001833dc718 + 0x9c45d7b757258135) *
          ((uRam00000001833dca50 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833dca50 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001833dc9d0) + (uVar5 & uRam00000001833dc9d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc840 =
       func_0x00018ee111c0((uVar5 | 0x9c45d7b7d307ddee) + (uVar5 & 0x9c45d7b7d307ddee));
  uRam00000001833dccc0 = uRam00000001833dcae8 ^ uRam00000001833dc840 ^ 0x9c45d7b757260133;
  uRam00000001833dc798 =
       (uRam00000001833dc798 ^ uRam00000001833dc840) + 0x9c45d7b757260133 ^ 0xf68616f0e4d94c58;
  uRam00000001833dcc68 =
       (uRam00000001833dcc68 * 0x2ae2455dee38ab2f ^ uRam00000001833dc798) + uRam00000001833dc840;
  uRam00000001833dcb20 = uRam00000001833dcc68 ^ uRam00000001833dc798;
  uRam00000001833dcba8 = 0x9c45d7b757260133;
  uVar5 = (uRam00000001833dcc88 ^ _UNK_18278d8a0) + uRam00000001833dcb60 + 0x9c45d7b7d3042216;
  uVar8 = (uRam00000001833dcb60 ^ _UNK_18278d8a8) + uRam00000001833dcc88 + 0x63ba2848a8da7ecc;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcc88 ^ _UNK_18278d8a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dcb60 ^ _UNK_18278d8a8;
  uRam00000001833dc9c8 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833dcc88 + 0x63ba2848a8da7ecc) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833dcb60 + 0x9c45d7b7d3042216));
  uVar5 = uRam00000001833dc9c8 & 0x7fffffffffffffff;
  uRam00000001833dc810 = uRam00000001833dccc8 ^ uVar5 ^ 0x7fff;
  uRam00000001833dc9e8 = (uRam00000001833dc9e8 ^ uVar5) + 0x7fff ^ 0x120ff7c67888f418;
  uRam00000001833dcc48 = (uRam00000001833dcc48 * -0x67ffc2ebd1517187 ^ uRam00000001833dc9e8) + uVar5
  ;
  uRam00000001833dcb28 = uRam00000001833dcc48 ^ uRam00000001833dc9e8;
  uRam00000001833dcc00 = 0x7fff;
  uVar5 = (uRam00000001833dc8f8 ^ _UNK_18278d8b0) + uRam00000001833dcc40 + 0xbff9f7f1f89dd8c8;
  uVar8 = (uRam00000001833dcc40 ^ _UNK_18278d8b8) + uRam00000001833dc8f8 + 0x3c1180aabd7c4c71;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dc8f8 ^ _UNK_18278d8b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dcc40 ^ _UNK_18278d8b8;
  uRam00000001833dccc8 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833dc8f8 + 0x3c1180aabd7c4c71) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833dcc40 + 0xbff9f7f1f89dd8c8));
  uVar5 = ((uRam00000001833dccc8 ^ 0xa81400410) & 0x3fffffffff) * 0x1eaee88c305aa57d;
  uRam00000001833dc810 = uRam00000001833dca18 ^ uVar5 ^ 0xfc0b789c3a3c485e;
  uRam00000001833dc828 = (uRam00000001833dc828 ^ uVar5) + 0xfc0b789c3a3c485e ^ 0x434fa87e7adbc77f;
  uRam00000001833dc928 = (uRam00000001833dc928 * -0x16bd5d4e8138cad1 ^ uRam00000001833dc828) + uVar5
  ;
  uRam00000001833dc7f8 = uRam00000001833dc928 ^ uRam00000001833dc828;
  uRam00000001833dc7c8 = 0xfc0b789c3a3c485e;
  uVar5 = (~uRam00000001833dccc0 + 0x3c1180aabd7c4c72) *
          ((uRam00000001833dc9b0 ^ 0xbff9f7f1f89dd8c8) +
          (uRam00000001833dc9b0 & 0x3ff9f7f1f89dd8c8) * 2);
  uVar5 = (uVar5 | uRam00000001833dc940) + (uVar5 & uRam00000001833dc940);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc8c0 =
       func_0x00018ee111c0((uVar5 | 0x83e8775b45e194b9) + (uVar5 & 0x83e8775b45e194b9));
  uRam00000001833dc9a0 =
       (uRam00000001833dc9a0 ^ uRam00000001833dc8c0 ^ 0xbff9f7f17cbffbed) + 0x83e8775bc1c3b79c ^
       0x11e69bade3307851;
  uRam00000001833dca10 =
       (uRam00000001833dca10 * 0x4fd1ece8a975f6c7 ^ uRam00000001833dc9a0) +
       (uRam00000001833dc8c0 ^ 0xbff9f7f17cbffbed);
  uRam00000001833dcb08 = uRam00000001833dca10 ^ uRam00000001833dc9a0;
  uRam00000001833dca48 = 0x83e8775bc1c3b79c;
  uVar5 = (~uRam00000001833dca60 + 0x78230140787890c3) *
          ((uRam00000001833dcca0 ^ 0x83e8775b45e194b9) +
          (uRam00000001833dcca0 & 0x3e8775b45e194b9) * 2);
  uVar5 = (uVar5 | uRam00000001833dcca0) + (uVar5 & uRam00000001833dcca0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc9d8 =
       func_0x00018ee111c0((uVar5 | 0xfbcb761b3d99047b) + (uVar5 & 0xfbcb761b3d99047b));
  uVar5 = uRam00000001833dc9d8 ^ 0xfbeb775bf9fbb7de;
  uRam00000001833dc9f0 = uRam00000001833dc760 ^ uVar5 ^ 0xfc0b789c3a3c485e;
  uRam00000001833dccd8 = (uRam00000001833dccd8 ^ uVar5) + 0xfc0b789c3a3c485e ^ 0xe34c740336cd93cd;
  uRam00000001833dcb90 = (uRam00000001833dcb90 * 0x182235af34db58db ^ uRam00000001833dccd8) + uVar5;
  uRam00000001833dcbb0 = uRam00000001833dcb90 ^ uRam00000001833dccd8;
  uRam00000001833dcc98 = 0xfc0b789c3a3c485e;
  uVar5 = (uRam00000001833dca88 ^ 0x84225cda) + uRam00000001833dca88 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dca88 ^ 0x84225cda;
  uVar8 = (uRam00000001833dca88 << 0xe | (uRam00000001833dca88 & 0x7fffffffffffffff) >> 0x32) ^
          uRam00000001833dca88;
  uRam00000001833dccd8 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001833dca88 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dca88 + 0x84225cda));
  uRam00000001833dcac0 = uRam00000001833dc838 ^ uRam00000001833dccd8 ^ 0x7fff;
  uRam00000001833dc920 = (uRam00000001833dc920 ^ uRam00000001833dccd8) + 0x7fff ^ 0x73ea4d6e16862b9f
  ;
  uRam00000001833dc970 =
       (uRam00000001833dc970 * 0x7cf0c4488c4e935b ^ uRam00000001833dc920) + uRam00000001833dccd8;
  uRam00000001833dcab0 = uRam00000001833dc970 ^ uRam00000001833dc920;
  lRam00000001833dc700 = 0x7fff;
  uVar5 = ~uRam00000001833dcbb8 *
          ((uRam00000001833dc738 ^ 0xbff9f7f1f89dd8c8) +
          (uRam00000001833dc738 & 0x3ff9f7f1f89dd8c8) * 2);
  uVar5 = (uVar5 | uRam00000001833dc800) + (uVar5 & uRam00000001833dc800);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc870 =
       func_0x00018ee111c0((uVar5 | 0x4006080e07622737) + (uVar5 & 0x4006080e07622737));
  uVar5 = (uRam00000001833dc870 ^ 0x2080e83400413) & 0x3ffffffffffff;
  uRam00000001833dc998 = (uRam00000001833dc998 ^ uVar5) + 0x4006080e83400412 ^ 0x2d5c7078512218dc;
  uRam00000001833dcc20 = (uRam00000001833dcc20 * 0x15a512e07c9c3059 ^ uRam00000001833dc998) + uVar5;
  uRam00000001833dc8e8 = uRam00000001833dcc20 ^ uRam00000001833dc998;
  uRam00000001833dcbc0 = 0x4006080e83400412;
  uVar5 = (uRam00000001833dca98 ^ _UNK_18278d8c0) + uRam00000001833dc7d8 + 0xbff9f7f1f89dd8c8;
  uVar8 = (uRam00000001833dc7d8 ^ _UNK_18278d8c8) + uRam00000001833dca98 + 0x4006080e83400412;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dca98 ^ _UNK_18278d8c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dc7d8 ^ _UNK_18278d8c8;
  uRam00000001833dcbb0 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833dca98 + 0x4006080e83400412) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833dc7d8 + 0xbff9f7f1f89dd8c8));
  uVar5 = ((uRam00000001833dcbb0 << 6 | uRam00000001833dcbb0 >> 0x3a) << 0x2b |
          (uRam00000001833dcbb0 & 0x3ffffffffffffff) >> 0xf) ^ 0x4006080e83400412;
  uRam00000001833dc838 = uRam00000001833dc838 ^ uVar5 ^ 0xc35a1517940c8fcb;
  uRam00000001833dc918 = (uRam00000001833dc918 * 0x5fd04c21ffab812b ^ uRam00000001833dc838) + uVar5;
  uRam00000001833dcb88 = uRam00000001833dc918 ^ uRam00000001833dc838;
  uRam00000001833dcbf8 = 0;
  uVar5 = (uRam00000001833dcb70 ^ 0x84225cda) + uRam00000001833dc770 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcb70 ^ 0x84225cda;
  uVar8 = ((uRam00000001833dc770 + uRam00000001833dcb70) * 0x2000 |
          uRam00000001833dc770 + uRam00000001833dcb70 >> 0x33) ^ uRam00000001833dc770;
  uRam00000001833dc980 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001833dcb70 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dc770 + 0x84225cda));
  uRam00000001833dc820 = uRam00000001833dcc38 ^ uRam00000001833dc980 ^ 0x7fff;
  uRam00000001833dc8a8 = (uRam00000001833dc8a8 ^ uRam00000001833dc980) + 0x7fff ^ 0xe8a47e3d25b8a1b3
  ;
  uRam00000001833dcbf8 =
       (uRam00000001833dcbf8 * 0x783f81b11414dd65 ^ uRam00000001833dc8a8) + uRam00000001833dc980;
  uRam00000001833dc9b0 = uRam00000001833dcbf8 ^ uRam00000001833dc8a8;
  uRam00000001833dc8b8 = 0x7fff;
  uVar5 = (uRam00000001833dc990 ^ _UNK_18278d8d0) + uRam00000001833dc788 + 0xbd3942a0b4bd43c9;
  uVar8 = (uRam00000001833dc788 ^ _UNK_18278d8d8) + uRam00000001833dc990 + 0xbd3942a0309f60ec;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dc990 ^ _UNK_18278d8d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dc788 ^ _UNK_18278d8d8;
  uRam00000001833dca00 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833dc990 + 0xbd3942a0309f60ec) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833dc788 + 0xbd3942a0b4bd43c9));
  uVar8 = uRam00000001833dca00 ^ 0x9f86fe9209d9d990;
  uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar8;
  uRam00000001833dc750 = uRam00000001833dc750 ^ uVar8 ^ 0x3fcf60b71f9a0085;
  uRam00000001833dca28 = (uRam00000001833dca28 * 0x6414222b1d27267 ^ uRam00000001833dc750) + uVar8;
  uRam00000001833dc750 = uRam00000001833dca28 ^ uRam00000001833dc750;
  uRam00000001833dcc78 = 0;
  uVar5 = ((uRam00000001833dca88 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833dca88 & 0x84225cda) * 2) * -uRam00000001833dcad8;
  uVar5 = (uVar5 | uRam00000001833dccb0) + (uVar5 & uRam00000001833dccb0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  lRam00000001833dc700 =
       func_0x00018ee111c0((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uRam00000001833dc848 = uRam00000001833dc890 ^ uRam00000001833dca88 ^ 0x7fff;
  uRam00000001833dcb38 = (uRam00000001833dcb38 ^ uRam00000001833dca88) + 0x7fff ^ 0x15921c89c0f4f533
  ;
  uRam00000001833dcb88 =
       (uRam00000001833dcb88 * 0x6205e4831e5fb8ed ^ uRam00000001833dcb38) + uRam00000001833dca88;
  uRam00000001833dc800 = uRam00000001833dcb88 ^ uRam00000001833dcb38;
  param_4 = param_4 & 0x7fff;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = param_4 ^ 0x84222325;
  auVar6._8_4_ = param_3;
  auVar6._12_4_ = 0;
  uRam00000001833dcb58 = 0x7fff;
  auVar7 = pshufb(auVar6 ^ _UNK_18278d8e0,_UNK_1800170c0);
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar5 = uVar8 + uRam00000001833dc798;
  if (auVar7._4_4_ < 0) {
    uVar5 = uRam00000001833dc950 ^ uVar8;
  }
  uRam00000001833dc838 = func_0x00018ee111c0(SUB161(auVar6 ^ _UNK_18278d8e0,5) ^ uVar5);
  uVar5 = ((ulonglong)param_4 ^ (param_4 | param_3) ^ uRam00000001833dc838) & 0xffffffffffffe000;
  uRam00000001833dc9a8 = (ulonglong)(param_4 ^ param_3);
  uRam00000001833dcab8 = (uRam00000001833dcab8 ^ uVar5) + uRam00000001833dc9a8 ^ 0xb67c4b94f339a15c;
  uRam00000001833dca40 = (uRam00000001833dca40 * -0x1bcb3afddeec32c7 ^ uRam00000001833dcab8) + uVar5
  ;
  uRam00000001833dcc50 = uRam00000001833dca40 ^ uRam00000001833dcab8;
  uVar5 = (uRam00000001833dcbd8 ^ _UNK_18278d8f0) + uRam00000001833dcb90 + 0x56dd30cc;
  uVar8 = (uRam00000001833dcb90 ^ _UNK_18278d8f8) + uRam00000001833dcbd8 + 0x84b026c9;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcbd8 ^ _UNK_18278d8f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dcb90 ^ _UNK_18278d8f8;
  uRam00000001833dca10 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833dcbd8 + 0x84b026c9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcb90 + 0x56dd30cc));
  uRam00000001833dc860 =
       (uRam00000001833dc860 ^ uRam00000001833dca10 & 0x7fffffffffffff) + 0xd6ff37e9 ^
       0x7b407c2ba3236a8d;
  uRam00000001833dc8f8 =
       (uRam00000001833dc8f8 * 0x3c69c0084dc99e4d ^ uRam00000001833dc860) +
       (uRam00000001833dca10 & 0x7fffffffffffff);
  uRam00000001833dccc0 = uRam00000001833dc8f8 ^ uRam00000001833dc860;
  uRam00000001833dcab0 = 0xd6ff37e9;
  uRam00000001833dcc18 = func_0x00018ee111c0(uRam00000001833dc948 + 0xfffbffce06004cff ^ 0x9b);
  uVar5 = (uRam00000001833dcc18 ^ 0x5b7def1f) & 0x7fffffffffffffff;
  uRam00000001833dc890 = (uRam00000001833dc890 ^ uVar5) + 0x4a5d2f1f ^ 0x16d7899e6041ea19;
  uRam00000001833dca88 = (uRam00000001833dca88 * -0x1a8e3bfffda6d745 ^ uRam00000001833dc890) + uVar5
  ;
  uRam00000001833dc770 = uRam00000001833dca88 ^ uRam00000001833dc890;
  uRam00000001833dccc0 = 0x4a5d2f1f;
  uVar5 = (~uRam00000001833dc750 + 0xdb4847f6) * 0xce7f5244;
  uVar5 = (uVar5 | uRam00000001833dc940) + (uVar5 & uRam00000001833dc940);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcaf0 =
       func_0x00018ee111c0((uVar5 | 0x5f6a64d0) + (ulonglong)((uint)uVar5 & 0x5f6a64d0));
  uVar5 = uRam00000001833dcaf0 << 0x10 | uRam00000001833dcaf0 >> 0x30;
  uRam00000001833dcbc0 = (uRam00000001833dcbc0 ^ uVar5) - 0xdb4847f5 ^ 0xde159dce5d09b820;
  uRam00000001833dcad8 = (uRam00000001833dcad8 * 0x7d2d54a50e6bb499 ^ uRam00000001833dcbc0) + uVar5;
  uRam00000001833dcc60 = uRam00000001833dcad8 ^ uRam00000001833dcbc0;
  uRam00000001833dc9f8 = 0x24b7b80b;
  uVar5 = (~uRam00000001833dcb48 + 0xdb4847f6) *
          ((uRam00000001833dc7f8 ^ 0x842215d4) +
          (ulonglong)((uint)uRam00000001833dc7f8 & 0x842215d4) * 2);
  uVar5 = (uVar5 | uRam00000001833dca80) + (uVar5 & uRam00000001833dca80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc758 =
       func_0x00018ee111c0((uVar5 | 0x5f6a5221) + (ulonglong)((uint)uVar5 & 0x5f6a5221));
  uVar3 = (uint)uRam00000001833dc758 & 0x36f1 | 0x2f1;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar5 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          (ulonglong)uVar3;
  uRam00000001833dc848 = uRam00000001833dcab8 ^ uVar5 ^ 0xdb487ee6;
  uRam00000001833dcc48 = (uRam00000001833dcc48 ^ uVar5) + 0xdb487ee6 ^ 0xa2f0013a3038fdeb;
  uRam00000001833dccb8 = (uRam00000001833dccb8 * 0x3e9b4daec55b9245 ^ uRam00000001833dcc48) + uVar5;
  uRam00000001833dcbd0 = uRam00000001833dccb8 ^ uRam00000001833dcc48;
  uRam00000001833dcb58 = 0xdb487ee6;
  uVar5 = (uRam00000001833dc9d8 ^ _UNK_18278d900) + uRam00000001833dcb28 + 0x5f6a5dc3;
  uVar8 = (uRam00000001833dcb28 ^ _UNK_18278d908) + uRam00000001833dc9d8 + 0x24b7b80b;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dc9d8 ^ _UNK_18278d900;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dcb28 ^ _UNK_18278d908;
  uRam00000001833dc958 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833dc9d8 + 0x24b7b80b) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcb28 + 0x5f6a5dc3));
  uVar8 = uRam00000001833dc958 ^ 0xfffffeef;
  uVar5 = uVar8 >> 1 | uVar8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~(uint)((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                   ^ uVar8) >> 0x12) & 0xdb487ee6);
  uRam00000001833dcac8 = uRam00000001833dca70 ^ uVar5 ^ 0x1000036f1;
  uRam00000001833dca80 = (uRam00000001833dca80 ^ uVar5) + 0x1000036f1 ^ 0xf6a190028c023d5d;
  uRam00000001833dc968 = (uRam00000001833dc968 * -0x705d2cad7af10f33 ^ uRam00000001833dca80) + uVar5
  ;
  uRam00000001833dcbd8 = uRam00000001833dc968 ^ uRam00000001833dca80;
  uRam00000001833dcb20 = uRam00000001833dc8b8 ^ 0x1000036f1;
  lRam00000001833dc908 = 0x36f1;
  uVar5 = (uRam00000001833dcb48 ^ _UNK_18278d910) + uRam00000001833dcb68 + 0x84222325;
  uVar8 = (uRam00000001833dcb68 ^ _UNK_18278d918) + uRam00000001833dcb48 + 0xcf8bfc4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcb48 ^ _UNK_18278d910;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dcb68 ^ _UNK_18278d918;
  uRam00000001833dcb48 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833dcb48 + 0xcf8bfc4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcb68 + 0x84222325));
  uVar5 = uRam00000001833dcb48 << 0x16 | uRam00000001833dcb48 >> 0x2a;
  uVar8 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  uRam00000001833dc8e0 = (uRam00000001833dc8e0 ^ uVar5) - 0xcf8bfc4 ^ 0xcb349dbcdc35d848;
  uRam00000001833dccf0 = (uRam00000001833dccf0 * -0x3e82a7f368f9a7f ^ uRam00000001833dc8e0) + uVar5;
  uRam00000001833dca60 = uRam00000001833dccf0 ^ uRam00000001833dc8e0;
  uRam00000001833dcbd0 = uRam00000001833dcc78 ^ 0xfffffffff307403c;
  uRam00000001833dc890 = 0xf307403c;
  uVar5 = (~uRam00000001833dcc60 + 0xcf8bfc5) *
          ((uRam00000001833dcc40 ^ 0x842215d4) +
          (ulonglong)((uint)uRam00000001833dcc40 & 0x842215d4) * 2);
  uVar5 = (uVar5 | uRam00000001833dc8b0) + (uVar5 & uRam00000001833dc8b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc798 =
       func_0x00018ee111c0((uVar5 | 0x88daaa10) + (ulonglong)((uint)uVar5 & 0x88daaa10));
  uRam00000001833dc710 = uRam00000001833dcce0 ^ uRam00000001833dc798 ^ 0xcf8f6b5;
  uRam00000001833dccb0 =
       (uRam00000001833dccb0 ^ uRam00000001833dc798) + 0xcf8f6b5 ^ 0x91a734e1b70715ee;
  uRam00000001833dcae0 =
       (uRam00000001833dcae0 * -0xf5f87316b05ef01 ^ uRam00000001833dccb0) + uRam00000001833dc798;
  uRam00000001833dcbd0 = uRam00000001833dcae0 ^ uRam00000001833dccb0;
  uRam00000001833dc860 = 0xcf8f6b5;
  uVar5 = (uRam00000001833dcc40 ^ _UNK_18278d920) + uRam00000001833dcca0 + 0x84222325;
  uVar8 = (uRam00000001833dcca0 ^ _UNK_18278d928) + uRam00000001833dcc40 + 0x6c894c13;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcc40 ^ _UNK_18278d920;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dcca0 ^ _UNK_18278d928;
  uRam00000001833dca80 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833dcc40 + 0x6c894c13) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcca0 + 0x84222325));
  uVar5 = (uRam00000001833dca80 & 0x3ffffffffc000) >> 1 | uRam00000001833dca80 & 0x3ffffffffc000;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001833dca80 & 0x3ffffffffc000;
  uRam00000001833dca50 = (uRam00000001833dca50 ^ uVar5) - 0x6c894c13 ^ 0xe0b1f155dde77502;
  uRam00000001833dc800 = (uRam00000001833dc800 * 0x29afa86b94717e69 ^ uRam00000001833dca50) + uVar5;
  uRam00000001833dc7c0 = uRam00000001833dc800 ^ uRam00000001833dca50;
  uRam00000001833dcb60 = 0x9376b3ed;
  uRam00000001833dc9b0 = func_0x00018ee111c0(uRam00000001833dc880 + 0xffa8ffa73cffa4ff ^ 4);
  uRam00000001833dc9b8 = uRam00000001833dc948 ^ uRam00000001833dc730 ^ 0x6c898304;
  uRam00000001833dc8b8 =
       (uRam00000001833dc8b8 ^ uRam00000001833dc730) + 0x6c898304 ^ 0x464bf9f31b241af3;
  uRam00000001833dc7a8 =
       (uRam00000001833dc7a8 * -0x4e9db90ad48f5f7d ^ uRam00000001833dc8b8) + uRam00000001833dc730;
  uRam00000001833dc878 = uRam00000001833dc7a8 ^ uRam00000001833dc8b8;
  uRam00000001833dc830 = 0x6c898304;
  uVar5 = (uRam00000001833dc8e0 ^ _UNK_18278d930) + uRam00000001833dc8c8 + 0xe8aba021;
  uVar8 = (uRam00000001833dc8c8 ^ _UNK_18278d938) + uRam00000001833dc8e0 + 0x9376b3ed;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dc8e0 ^ _UNK_18278d930;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dc8c8 ^ _UNK_18278d938;
  uRam00000001833dcb20 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833dc8e0 + 0x9376b3ed) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dc8c8 + 0xe8aba021));
  uVar8 = _UNK_18278d948;
  uVar5 = _UNK_18278d940;
  uVar2 = uRam00000001833dcb20 ^ 0x6c898304;
  uRam00000001833dcca0 = uRam00000001833dc748 ^ uVar2 ^ 0x1000036f1;
  uRam00000001833dcae8 = (uRam00000001833dcae8 ^ uVar2) + 0x1000036f1 ^ 0x6582c7301b30b00;
  uRam00000001833dc948 = (uRam00000001833dc948 * 0x3e532cbd552e815f ^ uRam00000001833dcae8) + uVar2;
  uRam00000001833dc760 = uRam00000001833dc948 ^ uRam00000001833dcae8;
  uRam00000001833dc9a0 = 0x36f1;
  uVar2 = (uRam00000001833dccd8 ^ _UNK_18278d940) + uRam00000001833dc718 + 0x52dd14cc;
  uVar9 = (uRam00000001833dc718 ^ _UNK_18278d948) + uRam00000001833dccd8 + 0x4a5d2f1f;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833dccd8 ^ _UNK_18278d940;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833dc718 ^ _UNK_18278d948;
  uRam00000001833dc738 =
       func_0x00018ee111c0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001833dccd8 + 0x4a5d2f1f) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833dc718 + 0x52dd14cc));
  uVar2 = uRam00000001833dc738 & 0x3fffffffffffff;
  uRam00000001833dccc0 = uRam00000001833dcbd0 ^ uVar2 ^ 0x1215c6708;
  uRam00000001833dca40 = (uRam00000001833dca40 ^ uVar2) + 0x1215c6708 ^ 0xabfbb7ffb5bdc8ec;
  uRam00000001833dcb80 = (uRam00000001833dcb80 * 0x7f343cfe6805a81f ^ uRam00000001833dca40) + uVar2;
  uRam00000001833dca20 = uRam00000001833dcb80 ^ uRam00000001833dca40;
  uRam00000001833dc898 = 0x215c6708;
  uVar2 = (uRam00000001833dc7c8 ^ uVar5) + uRam00000001833dca00 + 0x52dd14cc;
  uVar9 = (uRam00000001833dca00 ^ uVar8) + uRam00000001833dc7c8 + 0x4a5d2f1f;
  uVar5 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833dc7c8 ^ uVar5;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833dca00 ^ uVar8;
  uRam00000001833dcc10 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833dc7c8 + 0x4a5d2f1f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dca00 + 0x52dd14cc));
  uVar5 = ((uRam00000001833dcc10 ^ 0xdeff3fff) << 0x26 | (uRam00000001833dcc10 ^ 0xdeff3fff) >> 0x1a
          ) ^ 0x4a5d2f1f;
  uRam00000001833dc760 = (uRam00000001833dc760 ^ uVar5) + 0x425d2709 ^ 0xebe7d315b76d94;
  uRam00000001833dc8e0 = (uRam00000001833dc8e0 * -0x4215885f621c0e05 ^ uRam00000001833dc760) + uVar5
  ;
  uRam00000001833dcaf0 = uRam00000001833dc8e0 ^ uRam00000001833dc760;
  uRam00000001833dcbd0 = 0x425d2709;
  uVar5 = (~uRam00000001833dca48 + 0x84ba4e13) *
          ((uRam00000001833dc930 ^ 0x18803bd3) +
          (ulonglong)((uint)uRam00000001833dc930 & 0x18803bd3) * 2);
  uVar5 = (uVar5 | uRam00000001833dcc90) + (uVar5 & uRam00000001833dcc90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dc830 =
       func_0x00018ee111c0((uVar5 | 0x9c3a75c1) + (ulonglong)((uint)uVar5 & 0x9c3a75c1));
  uRam00000001833dc7e8 = uRam00000001833dc8e8 ^ uRam00000001833dc830 ^ 0x1215c6708;
  uRam00000001833dc990 =
       (uRam00000001833dc990 ^ uRam00000001833dc830) + 0x1215c6708 ^ 0x7b5fd6d4d881ce33;
  uRam00000001833dcac0 =
       (uRam00000001833dcac0 * -0x62c7d3bebca610ff ^ uRam00000001833dc990) + uRam00000001833dc830;
  uRam00000001833dcc60 = uRam00000001833dcac0 ^ uRam00000001833dc990;
  uRam00000001833dc868 = 0x215c6708;
  uRam00000001833dc890 = func_0x00018ee111c0(uRam00000001833dc9d0 ^ 0xffdf007c230021ab);
  uRam00000001833dc8a0 = uRam00000001833dc8a0 ^ uRam00000001833dc890 ^ 0x72739e2d33dd05ef;
  uRam00000001833dcb10 =
       (uRam00000001833dcb10 * -0x322071fe2485c467 ^ uRam00000001833dc8a0) + uRam00000001833dc890;
  uRam00000001833dcac0 = uRam00000001833dcb10 ^ uRam00000001833dc8a0;
  uRam00000001833dc9d0 = 0;
  uVar5 = ((uRam00000001833dc8e0 ^ 0x842215d4) +
          (ulonglong)((uint)uRam00000001833dc8e0 & 0x842215d4) * 2) * -lRam00000001833dc908;
  uVar5 = (uVar5 | uRam00000001833dcb88) + (uVar5 & uRam00000001833dcb88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcca0 = uRam00000001833dc890;
  uRam00000001833dc8d8 =
       func_0x00018ee111c0((uVar5 | 0x842215d4) + (ulonglong)((uint)uVar5 & 0x842215d4));
  uRam00000001833dc7f8 = uRam00000001833dc798 ^ uRam00000001833dc8d8 ^ 0x36f1;
  uRam00000001833dcac0 = (uRam00000001833dcac0 ^ uRam00000001833dc8d8) + 0x36f1 ^ 0x5851794e4c561c2d
  ;
  uRam00000001833dc990 =
       (uRam00000001833dc990 * -0x248614b64d7fcc89 ^ uRam00000001833dcac0) + uRam00000001833dc8d8;
  uRam00000001833dc810 = uRam00000001833dc990 ^ uRam00000001833dcac0;
  uRam00000001833dc8f0 = 0x36f1;
  uVar5 = (uRam00000001833dc720 ^ _UNK_18278d950) + uRam00000001833dc9b8 + 0x52dd14cc;
  uVar8 = (uRam00000001833dc9b8 ^ _UNK_18278d958) + uRam00000001833dc720 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dc720 ^ _UNK_18278d950;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833dc9b8 ^ _UNK_18278d958;
  uRam00000001833dcb88 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833dc720 + 0xffffffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dc9b8 + 0x52dd14cc));
  uVar5 = (ulonglong)(~(((uint)uRam00000001833dcb88 ^ 0xd6ff37e9) * 0xe9f0bdf) & 0xd6ff37e9);
  uRam00000001833dc910 = (uRam00000001833dc910 ^ uVar5) + 0x2900c816 ^ 0x9140607826709dcc;
  uRam00000001833dc728 = (uRam00000001833dc728 * -0x6b8d6248f1c7d78b ^ uRam00000001833dc910) + uVar5
  ;
  uRam00000001833dcb18 = uRam00000001833dc728 ^ uRam00000001833dc910;
  uRam00000001833dc830 = 0x2900c816;
  uRam00000001833dcca8 = func_0x00018ee111c0(uRam00000001833dc8b0 ^ 0xdc0016b5ff24a8);
  uVar5 = uRam00000001833dcca8 << 0x17 | (uRam00000001833dcca8 & 0x7fffffffffffffff) >> 0x29;
  uRam00000001833dc7f8 = uRam00000001833dc7f8 ^ uVar5 ^ 0x2fb4eba220a45095;
  uRam00000001833dc990 = (uRam00000001833dc990 * -0x199baac1b635d8a9 ^ uRam00000001833dc7f8) + uVar5
  ;
  uRam00000001833dcae0 = uRam00000001833dc990 ^ uRam00000001833dc7f8;
  uRam00000001833dc7c8 = 0;
  uVar5 = (uRam00000001833dc858 ^ 0x842215d4) + uRam00000001833dc7d8 + 0x842215d4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dc858 ^ 0x842215d4;
  uVar8 = ((uRam00000001833dc7d8 + uRam00000001833dc858) * 0x2000 |
          uRam00000001833dc7d8 + uRam00000001833dc858 >> 0x33) ^ uRam00000001833dc7d8;
  lRam00000001833dc700 =
       func_0x00018ee111c0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001833dc858 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dc7d8 + 0x842215d4));
  uVar5 = lRam00000001833dc700 * -0x63360eba34c95ea9;
  uRam00000001833dca48 = uRam00000001833dc920 ^ uVar5 ^ 0x36f1;
  uRam00000001833dc8e0 = (uRam00000001833dc8e0 ^ uVar5) + 0x36f1 ^ 0x6f870d0256c9f1e3;
  uRam00000001833dc8b8 = (uRam00000001833dc8b8 * -0x2cab6bf7a3e1df41 ^ uRam00000001833dc8e0) + uVar5
  ;
  uRam00000001833dc980 = uRam00000001833dc8b8 ^ uRam00000001833dc8e0;
  uRam00000001833dcb10 = 0x36f1;
  uVar5 = (~uRam00000001833dcc80 + 0xd2ff13ea) *
          ((uRam00000001833dca60 ^ 0x56dd30cc) +
          (ulonglong)((uint)uRam00000001833dca60 & 0x56dd30cc) * 2);
  uVar5 = (uVar5 | uRam00000001833dc998) + (uVar5 & uRam00000001833dc998);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dca80 =
       func_0x00018ee111c0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = uRam00000001833dca80 - (uRam00000001833dca80 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001833dca80;
  uRam00000001833dc9f0 = uRam00000001833dc9f0 ^ uVar5 ^ 0x5bba92ade48dd0de;
  uRam00000001833dc9d0 = (uRam00000001833dc9d0 * 0x1af3aa83d99632e5 ^ uRam00000001833dc9f0) + uVar5;
  uRam00000001833dcb48 = uRam00000001833dc9d0 ^ uRam00000001833dc9f0;
  uRam00000001833dc750 = 0;
  uVar5 = ((uRam00000001833dcbb0 ^ 0x842215d4) +
          (ulonglong)((uint)uRam00000001833dcbb0 & 0x842215d4) * 2) * -lRam00000001833dca38;
  uVar5 = (uVar5 | uRam00000001833dc828) + (uVar5 & uRam00000001833dc828);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcbb0 =
       func_0x00018ee111c0((uVar5 | 0x842215d4) + (ulonglong)((uint)uVar5 & 0x842215d4));
  uVar5 = uRam00000001833dc888 - (uRam00000001833dc888 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam00000001833dc888;
  uRam00000001833dcc68 =
       (uRam00000001833dccc0 ^ uVar5 ^ 0x36f1 ^ uVar5) + 0x36f1 ^ 0xe862ff59b00b8908;
  uRam00000001833dc880 = (uRam00000001833dc880 * -0x1694b3f186eb94fb ^ uRam00000001833dcc68) + uVar5
  ;
  uRam00000001833dc830 = uRam00000001833dc880 ^ uRam00000001833dcc68;
  uRam00000001833dc938 = 0x36f1;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x73fc,0x146);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ee0c8b4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18278bef8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; Fr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18ee11250, runtime 6ffff6a21250) =====

void FUN_18ee11250(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ee1128c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18278dad0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bn; Fs (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ee12140, runtime 6ffff6a22140) =====

void FUN_18ee12140(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ee121bd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18278e000 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; Ft (IJ)I (handler @ image 18ee14c00, runtime 6ffff6a24c00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ee14c00(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (uRam00000001833dcf60 ^ _UNK_182790d60) + uRam00000001833dcd88 + 0xaa13bbfdef5ab991;
  uVar6 = (uRam00000001833dcd88 ^ _UNK_182790d68) + uRam00000001833dcf60 + 0x38d9e82d75092500;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcf60 ^ _UNK_182790d60;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833dcd88 ^ _UNK_182790d68;
  uRam00000001833dcfa0 =
       func_0x00018ee20140((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001833dcf60 + 0x38d9e82d75092500) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833dcd88 + 0xaa13bbfdef5ab991));
  uVar5 = (uRam00000001833dcfa0 << 0x39 | uRam00000001833dcfa0 >> 7) ^ 0xaa13bbfd6b789ab4;
  uRam00000001833dcee0 = (uRam00000001833dcee0 ^ uVar5) + 0x92ca53d01e71bfb4 ^ 0xec5f063047106f82;
  uRam00000001833dd030 = (uRam00000001833dd030 * -0x5410ead7f777d4e7 ^ uRam00000001833dcee0) + uVar5
  ;
  uRam00000001833dcfc8 = uRam00000001833dd030 ^ uRam00000001833dcee0;
  uRam00000001833dcd40 = uRam00000001833dd0f8 ^ 0x92ca53d01e71bfb4;
  uRam00000001833dcfc0 = 0x92ca53d01e71bfb4;
  uVar5 = (uRam00000001833dcf50 ^ _UNK_182790d70) + uRam00000001833dcfd0 + 0x84222325;
  uVar6 = (uRam00000001833dcfd0 ^ _UNK_182790d78) + uRam00000001833dcf50 + 0x24e2bedc41a5c5c8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcf50 ^ _UNK_182790d70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833dcfd0 ^ _UNK_182790d78;
  uRam00000001833dce80 =
       func_0x00018ee20140((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001833dcf50 + 0x24e2bedc41a5c5c8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcfd0 + 0x84222325));
  uRam00000001833dcd00 = uRam00000001833dcf18 * 0x4debcea15826423d;
  uRam00000001833dce48 = uRam00000001833dce48 + 0xdb1d4123be5a3a38 ^ 0x3917e39b12d2d0a4;
  uRam00000001833dcf18 = uRam00000001833dcd00 ^ uRam00000001833dce48;
  lRam00000001833dceb8 = -0x24e2bedc41a5c5c8;
  uRam00000001833dce50 = func_0x00018ee20140(uRam00000001833dcd28 ^ 0x44669d450e957c30);
  uRam00000001833dcf10 =
       (uRam00000001833dcf10 ^ uRam00000001833dce50 ^ 0x7fff) + 0x24e2bedc41a645c7 ^
       0xfab7dda8d9e49ec0;
  uRam00000001833dce28 =
       (uRam00000001833dce28 * 0x26161c72bf3c5d65 ^ uRam00000001833dcf10) +
       (uRam00000001833dce50 ^ 0x7fff);
  uRam00000001833dcfd8 = uRam00000001833dce28 ^ uRam00000001833dcf10;
  uRam00000001833dd060 = 0x24e2bedc41a645c7;
  uRam00000001833dd0b8 = func_0x00018ee20140(uRam00000001833dd080 ^ 0x15c6cf7c6d6351b);
  uVar5 = (uRam00000001833dd0b8 ^ 0x58fe348142245988) << 0xb |
          (uRam00000001833dd0b8 ^ 0x58fe348142245988) >> 0x35;
  uRam00000001833dcfc0 = uRam00000001833dd010 ^ uVar5 ^ 0x7fff;
  uRam00000001833dd060 = (uRam00000001833dd060 ^ uVar5) + 0x7fff ^ 0x104409c226ef5f45;
  uRam00000001833dce70 = (uRam00000001833dce70 * 0x18b879baaa6221f7 ^ uRam00000001833dd060) + uVar5;
  uRam00000001833dcfa8 = uRam00000001833dce70 ^ uRam00000001833dd060;
  uRam00000001833dcdb0 = 0x7fff;
  uRam00000001833dcd18 = func_0x00018ee20140(uRam00000001833dcd00 ^ 0xa8458b0eaf0b8da);
  uRam00000001833dcd28 =
       (uRam00000001833dcd28 ^ uRam00000001833dcd18) + 0x9386ee8aca9558f0 ^ 0xd3836899cc0ac05e;
  uRam00000001833dcfe8 =
       (uRam00000001833dcfe8 * -0x26654f4ddfaf5075 ^ uRam00000001833dcd28) + uRam00000001833dcd18;
  uRam00000001833dced8 = uRam00000001833dcfe8 ^ uRam00000001833dcd28;
  uRam00000001833dce20 = 0x9386ee8aca9558f0;
  uVar5 = (~uRam00000001833dcf28 + 0x6c791175356aa711) *
          ((uRam00000001833dcf88 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833dcf88 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001833dcea0) + (uVar5 & uRam00000001833dcea0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcd30 =
       func_0x00018ee20140((uVar5 | 0x6c791175b148fbca) + (uVar5 & 0x6c791175b148fbca));
  uVar5 = uRam00000001833dcd30 & 0xfffffffffff00000;
  uRam00000001833dcfa8 = uRam00000001833dcd20 ^ uVar5 ^ 0x6c791175356b270f;
  uRam00000001833dd000 = (uRam00000001833dd000 ^ uVar5) + 0x6c791175356b270f ^ 0x3f7d72986f33f3b0;
  uRam00000001833dce00 = (uRam00000001833dce00 * -0x77006b0bb097eb0d ^ uRam00000001833dd000) + uVar5
  ;
  uRam00000001833dd050 = uRam00000001833dce00 ^ uRam00000001833dd000;
  uRam00000001833dd028 = 0x6c791175356b270f;
  uVar5 = (~uRam00000001833dce20 + 0xd20a5c8c5fe49d1) *
          ((uRam00000001833dcff8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833dcff8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001833dcd40) + (uVar5 & uRam00000001833dcd40);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcd70 =
       func_0x00018ee20140((uVar5 | 0xd20a5c841dc6af5) + (uVar5 & 0xd20a5c841dc6af5));
  uRam00000001833dce38 = uRam00000001833dce38 + 0xf2df5a373a01b630 ^ 0x59c80a9ea131ae96;
  uRam00000001833dced8 = uRam00000001833dcf70 * -0x5bf0759a26a27703;
  uRam00000001833dcf70 = uRam00000001833dced8 ^ uRam00000001833dce38;
  uRam00000001833dd0e0 = -0xd20a5c8c5fe49d0;
  uVar5 = (~uRam00000001833dcff8 + 0xd20a5c8c5fe49d1) *
          ((uRam00000001833dd070 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833dd070 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001833dd078) + (uVar5 & uRam00000001833dd078);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcfd8 =
       func_0x00018ee20140((uVar5 | 0xd20a5c841dc150a) + (uVar5 & 0xd20a5c841dc150a));
  uVar5 = uRam00000001833dcfd8 ^ 0xd20a5c8c5fe362f;
  uRam00000001833dcfa8 = uRam00000001833dcd98 ^ uVar5 ^ 0xd20a5c8c5fec9cf;
  uRam00000001833dcf98 = (uRam00000001833dcf98 ^ uVar5) + 0xd20a5c8c5fec9cf ^ 0xad0fe0d9b4d0f38c;
  uRam00000001833dcd38 = (uRam00000001833dcd38 * 0x60f5cb1796329ad7 ^ uRam00000001833dcf98) + uVar5;
  uRam00000001833dcfb0 = uRam00000001833dcd38 ^ uRam00000001833dcf98;
  uRam00000001833dcec0 = 0xd20a5c8c5fec9cf;
  uVar5 = (~uRam00000001833dcfb8 + 0xf2df5a373a01b631) *
          ((uRam00000001833dd070 ^ 0xd20a5c841dceaea) +
          (uRam00000001833dd070 & 0xd20a5c841dceaea) * 2);
  uVar5 = (uVar5 | uRam00000001833dd078) + (uVar5 & uRam00000001833dd078);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  lRam00000001833dcf68 =
       func_0x00018ee20140((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = ~(lRam00000001833dcf68 * 0x141e268dd4044941) & 0xd20a5c8c5fec9cf;
  uRam00000001833dcff0 = uRam00000001833dcde8 ^ uVar5 ^ 0x7fff;
  uRam00000001833dd0d8 = (uRam00000001833dd0d8 ^ uVar5) + 0x7fff ^ 0x5af25ae5fbdc9d25;
  uRam00000001833dd0e0 = (uRam00000001833dd0e0 * -0x6cdbec037080a6cf ^ uRam00000001833dd0d8) + uVar5
  ;
  uRam00000001833dcd00 = uRam00000001833dd0e0 ^ uRam00000001833dd0d8;
  uRam00000001833dce48 = 0x7fff;
  uVar5 = (~uRam00000001833dcd50 + 0x92ca53d01e71bfb5) *
          ((uRam00000001833dd048 ^ 0xbe63f7eb675f05d3) +
          (uRam00000001833dd048 & 0x3e63f7eb675f05d3) * 2);
  uVar5 = (uVar5 | uRam00000001833dce20) + (uVar5 & uRam00000001833dce20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcdb8 =
       func_0x00018ee20140((uVar5 | 0x2ca9a43b792eba67) + (uVar5 & 0x2ca9a43b792eba67));
  uRam00000001833dcf28 =
       (uRam00000001833dcf28 ^ uRam00000001833dcdb8) + 0x512e4bbc01eee6aa ^ 0x4540c7023b8666d4;
  uRam00000001833dd098 =
       (uRam00000001833dd098 * 0x6dd375ec80ee061b ^ uRam00000001833dcf28) + uRam00000001833dcdb8;
  uRam00000001833dd0d8 = uRam00000001833dd098 ^ uRam00000001833dcf28;
  uRam00000001833dce28 = 0x512e4bbc01eee6aa;
  uVar5 = (~uRam00000001833dcd20 + 0x92ca53d01e71bfb5) *
          ((uRam00000001833dcd68 ^ 0xbe63f7eb675f05d3) +
          (uRam00000001833dcd68 & 0x3e63f7eb675f05d3) * 2);
  uVar5 = (uVar5 | uRam00000001833dd040) + (uVar5 & uRam00000001833dd040);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcef0 =
       func_0x00018ee20140((uVar5 | 0x2ca9a43b792eba67) + (uVar5 & 0x2ca9a43b792eba67));
  uVar5 = (uRam00000001833dcef0 << 0x3e | uRam00000001833dcef0 >> 2) ^ 0x92ca53d01e71bfb4;
  uRam00000001833dcee8 = (uRam00000001833dcee8 ^ uVar5) + 0x924253c0027126b4 ^ 0xc8ee078c834636c3;
  uRam00000001833dced0 = (uRam00000001833dced0 * -0x6a9d1f2091e8fb1f ^ uRam00000001833dcee8) + uVar5
  ;
  uRam00000001833dcd60 = uRam00000001833dced0 ^ uRam00000001833dcee8;
  uRam00000001833dcda0 = 0x924253c0027126b4;
  uRam00000001833dcf40 = func_0x00018ee20140(uRam00000001833dcec8 ^ 0xa8ed2ca4f4fc437f);
  uVar5 = (uRam00000001833dcf40 << 0x14 | uRam00000001833dcf40 >> 0x2c) & 0x2ca9a43bfd0c9942;
  uRam00000001833dce60 = uRam00000001833dcfd8 ^ uVar5 ^ 0x512e4bbc01eee6aa;
  uRam00000001833dd078 = (uRam00000001833dd078 ^ uVar5) + 0x512e4bbc01eee6aa ^ 0x68e99e1504038b95;
  uRam00000001833dce28 = (uRam00000001833dce28 * 0x1492d1b86f520b3d ^ uRam00000001833dd078) + uVar5;
  uRam00000001833dcfd8 = uRam00000001833dce28 ^ uRam00000001833dd078;
  uRam00000001833dd040 = 0x512e4bbc01eee6aa;
  uRam00000001833dce38 = func_0x00018ee20140(uRam00000001833dce00 + 0xb0a8b67e3f86040 ^ 0x24);
  uVar5 = (uRam00000001833dce38 ^ 0x263f7ebe37d26f6) & 0x3ffffffffffffff;
  uRam00000001833dcef8 = (uRam00000001833dcef8 ^ uVar5) + 0x419c08141c82d909 ^ 0xd8fabb4b87b2708b;
  uRam00000001833dcdb0 = (uRam00000001833dcdb0 * -0x202c857f74bc3a4d ^ uRam00000001833dcef8) + uVar5
  ;
  uRam00000001833dcf40 = uRam00000001833dcdb0 ^ uRam00000001833dcef8;
  uRam00000001833dd0b0 = 0x419c08141c82d909;
  uVar5 = ((uRam00000001833dd0e0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833dd0e0 & 0x84225cda) * 2) * -lRam00000001833dce40;
  uVar5 = (uVar5 | uRam00000001833dd0d8) + (uVar5 & uRam00000001833dd0d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018ee20140((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = (uVar5 ^ 0x7fff) & 0x7fffffffffffffff;
  uRam00000001833dd0f0 = uRam00000001833dcfb8 ^ uVar5 ^ 0x7fff;
  uRam00000001833dced8 = (uRam00000001833dced8 ^ uVar5) + 0x7fff ^ 0x5a37061c3d9f9b66;
  uRam00000001833dd0a8 = (uRam00000001833dd0a8 * 0xec0e6316c8e4f95 ^ uRam00000001833dced8) + uVar5;
  uRam00000001833dce78 = uRam00000001833dd0a8 ^ uRam00000001833dced8;
  uRam00000001833dcdf0 = 0x7fff;
  uVar5 = (~uRam00000001833dcdb0 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001833dd0d0) +
          ((param_4 ^ 0x84222325) & uRam00000001833dd0d0) * 2);
  uVar5 = (uVar5 | uRam00000001833dcd70) + (uVar5 & uRam00000001833dcd70);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcde8 =
       func_0x00018ee20140((param_4 ^ 0x84225cda | uVar5) + (uVar5 & (param_4 ^ 0x84225cda)));
  uVar5 = param_4 ^ (param_4 | 0x7fff) ^ uRam00000001833dcde8;
  uVar3 = (uint)param_4 & 0x7fff;
  uRam00000001833dcdb0 = (ulonglong)uVar3;
  uRam00000001833dcdd0 = (uRam00000001833dcdd0 ^ uVar5) + uRam00000001833dcdb0 ^ 0x1e3e2a994a34b831;
  uRam00000001833dcf08 = (uRam00000001833dcf08 * 0x1cf2a30136a36c1f ^ uRam00000001833dcdd0) + uVar5;
  uRam00000001833dd068 = uRam00000001833dcf08 ^ uRam00000001833dcdd0;
  uVar6 = uRam00000001833dcdb0 ^ 0x84222325;
  uVar5 = ((uRam00000001833dd040 ^ uVar6) +
          (ulonglong)((uint)uRam00000001833dd040 & (uint)uVar6) * 2) *
          (param_3 - uRam00000001833dce80);
  uVar5 = (uVar5 | uRam00000001833dd0d0) + (uVar5 & uRam00000001833dd0d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar6 = uVar6 ^ param_3;
  uRam00000001833dcd50 =
       func_0x00018ee20140((uVar6 | uVar5) + (ulonglong)((uint)uVar6 & (uint)uVar5));
  uVar5 = (uRam00000001833dcd50 * -0x197dc29530000000 |
          uRam00000001833dcd50 * -0x34f63b7197dc2953 >> 0x24) * -0x51b515c0afeca5a9;
  uVar3 = uVar3 ^ param_3;
  uVar6 = (ulonglong)uVar3;
  uRam00000001833dce80 = (uRam00000001833dce80 ^ uVar5) + uVar6 ^ 0xb39ce17d6d621356;
  uRam00000001833dd070 = (uRam00000001833dd070 * -0x36cdc7c5e0dd0e3b ^ uRam00000001833dce80) + uVar5
  ;
  uRam00000001833dce20 = uRam00000001833dd070 ^ uRam00000001833dce80;
  uRam00000001833dcde0 = uVar6;
  uRam00000001833dcef8 = func_0x00018ee20140(lRam00000001833dcfe0 + 0xff4200269afff6ffU ^ 0xf4);
  uRam00000001833dcfd0 =
       (uRam00000001833dcfd0 ^ uRam00000001833dcef8 & 0xffffffffff) + 0xfeebe7f9 ^
       0x116657d57250b87d;
  uRam00000001833dce18 =
       (uRam00000001833dce18 * 0x2c69f14fa3db0975 ^ uRam00000001833dcfd0) +
       (uRam00000001833dcef8 & 0xffffffffff);
  uRam00000001833dcfd0 = uRam00000001833dce18 ^ uRam00000001833dcfd0;
  uRam00000001833dceb0 = 0xfeebe7f9;
  uRam00000001833dce70 = func_0x00018ee20140(lRam00000001833dceb8 + 0x5e00b43d0083ffU ^ 0x20);
  uRam00000001833dcee8 =
       (uRam00000001833dcee8 ^ uRam00000001833dce70) + 0x7bae41e0 ^ 0xceb3000a01f6dccc;
  uRam00000001833dcd00 =
       (uRam00000001833dcd00 * -0x18755652328deb53 ^ uRam00000001833dcee8) + uRam00000001833dce70;
  uRam00000001833dcee8 = uRam00000001833dcd00 ^ uRam00000001833dcee8;
  uRam00000001833dd0f0 = 0x7bae41e0;
  uVar5 = (~uRam00000001833dcde0 + 0xe4138744) *
          ((uRam00000001833dd028 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833dd028 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001833dcf58) + (uVar5 & uRam00000001833dcf58);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dce00 =
       func_0x00018ee20140((uVar5 | 0x6031a466) + (ulonglong)((uint)uVar5 & 0x6031a466));
  uVar5 = (uRam00000001833dce00 & 0x7fffffffffffffff) * -0x275620df58b7c60b;
  uRam00000001833dcd88 = (uRam00000001833dcd88 ^ uVar5) - 0xe4138743 ^ 0x510fd942f0b88b9f;
  uRam00000001833dcdc8 = (uRam00000001833dcdc8 * 0x1592abe8635d3423 ^ uRam00000001833dcd88) + uVar5;
  uRam00000001833dcfb8 = uRam00000001833dcdc8 ^ uRam00000001833dcd88;
  uRam00000001833dcfd8 = 0x1bec78bd;
  uVar5 = (uRam00000001833dcf10 ^ _UNK_182790d80) + uRam00000001833dcee0 + 0x84220260;
  uVar7 = (uRam00000001833dcee0 ^ _UNK_182790d88) + uRam00000001833dcf10 + 0xe4138743;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcf10 ^ _UNK_182790d80;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833dcee0 ^ _UNK_182790d88;
  uRam00000001833dcef8 =
       func_0x00018ee20140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833dcf10 + 0xe4138743) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcee0 + 0x84220260));
  uVar5 = uRam00000001833dcef8 - (uRam00000001833dcef8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = ((uint)bVar1 + (uint)bVar1 ^ uRam00000001833dcef8) & 0x1fffffffffff;
  uRam00000001833dcf78 = uRam00000001833dcd00 ^ uVar5 ^ 0xe413a888;
  uRam00000001833dd060 = (uRam00000001833dd060 ^ uVar5) + 0xe413a888 ^ 0xf0473f529025258c;
  uRam00000001833dcea0 = (uRam00000001833dcea0 * 0x4ecf93fa7bd774e7 ^ uRam00000001833dd060) + uVar5;
  uRam00000001833dcf20 = uRam00000001833dcea0 ^ uRam00000001833dd060;
  uRam00000001833dd078 = 0xe413a888;
  uRam00000001833dcd78 = func_0x00018ee20140(uRam00000001833dcef8 + 0xcf004b1000d4ff ^ 0x3a);
  uVar5 = uRam00000001833dcd78 >> 0x1f & 1 |
          (ulonglong)((uint)uRam00000001833dcd78 & 0x6413a888) << 0x21;
  uRam00000001833dcfd0 = uRam00000001833dcf98 ^ uVar5 ^ 0x100002145;
  uRam00000001833dceb0 = (uRam00000001833dceb0 ^ uVar5) + 0x100002145 ^ 0x217fad2631c72172;
  uRam00000001833dcf58 = (uRam00000001833dcf58 * -0x58f1159f9994f3ef ^ uRam00000001833dceb0) + uVar5
  ;
  uRam00000001833dd0f0 = uRam00000001833dcf58 ^ uRam00000001833dceb0;
  uRam00000001833dcfa8 = 0x2145;
  uRam00000001833dcfb0 = func_0x00018ee20140(uRam00000001833dcf98 ^ uVar5 ^ 0x54ff80c0002df6);
  uVar5 = uRam00000001833dcfb0 * 0x71846679cd9f0647 ^ 0x22f7865;
  uRam00000001833dcf98 = (uRam00000001833dcf98 ^ uVar5) - 0x22f7865 ^ 0x7dd64fc59e98e7b;
  uRam00000001833dcda8 = (uRam00000001833dcda8 * -0x1e8402abcc5b260f ^ uRam00000001833dcf98) + uVar5
  ;
  uRam00000001833dd008 = uRam00000001833dcda8 ^ uRam00000001833dcf98;
  uRam00000001833dd000 = 0xfdd0879b;
  uRam00000001833dcd50 = func_0x00018ee20140(uRam00000001833dcef0 ^ 0x230058ec00cac7);
  uRam00000001833dcf88 = uRam00000001833dcfc8 ^ uRam00000001833dce30 ^ 0x100002145;
  uRam00000001833dcf28 =
       (uRam00000001833dcf28 ^ uRam00000001833dce30) + 0x100002145 ^ 0x2f2387b341380766;
  uRam00000001833dce90 =
       (uRam00000001833dce90 * -0x3276323cf22c7113 ^ uRam00000001833dcf28) + uRam00000001833dce30;
  uRam00000001833dcf60 = uRam00000001833dce90 ^ uRam00000001833dcf28;
  uRam00000001833dcd30 = 0x2145;
  uRam00000001833dd0f8 = func_0x00018ee20140(uRam00000001833dd0c8 ^ 0x52fff830ff8a3c);
  uRam00000001833dcf28 =
       (uRam00000001833dcf28 ^ uRam00000001833dd0f8 & 0xffffffffffff) - 0x8cd7d676 ^
       0x6ec9833f55adefbf;
  uRam00000001833dcf40 =
       (uRam00000001833dcf40 * 0x45f0575d84eb7f2b ^ uRam00000001833dcf28) +
       (uRam00000001833dd0f8 & 0xffffffffffff);
  uRam00000001833dcfb8 = uRam00000001833dcf40 ^ uRam00000001833dcf28;
  uRam00000001833dd078 = 0x7328298a;
  uRam00000001833dce88 = func_0x00018ee20140(uRam00000001833dd060 ^ 0xac0007edff5278);
  uVar5 = (ulonglong)(((uint)uRam00000001833dce88 ^ 0x2001) & 0x2145);
  uRam00000001833dcfa8 = uRam00000001833dcd50 ^ uVar5 ^ 0x8cd7f7bb;
  uRam00000001833dcf28 = (uRam00000001833dcf28 ^ uVar5) + 0x8cd7f7bb ^ 0x6be6b436a9c466ef;
  uRam00000001833dce18 = (uRam00000001833dce18 * -0x7d1486800afe5043 ^ uRam00000001833dcf28) + uVar5
  ;
  uRam00000001833dcdf8 = uRam00000001833dce18 ^ uRam00000001833dcf28;
  uRam00000001833dd058 = 0x8cd7f7bb;
  uRam00000001833dcd88 = func_0x00018ee20140(uRam00000001833dcd60 + 0xd00051400a4ff ^ 0xa0);
  uVar5 = (ulonglong)((uint)uRam00000001833dcd88 & 0x8cd7f7bb | 0x3bb);
  uRam00000001833dd050 = uRam00000001833dce48 ^ uVar5 ^ 0x100002145;
  uRam00000001833dd008 = (uRam00000001833dd008 ^ uVar5) + 0x100002145 ^ 0x133a82013faa833c;
  uRam00000001833dcd08 = (uRam00000001833dcd08 * 0x41d8573f4d338a7d ^ uRam00000001833dd008) + uVar5;
  uRam00000001833dd070 = uRam00000001833dcd08 ^ uRam00000001833dd008;
  uRam00000001833dd0a0 = 0x2145;
  uVar5 = (uRam00000001833dd070 ^ _UNK_182790d90) + uRam00000001833dd0e0 + 0x7ac9c4dc;
  uVar7 = (uRam00000001833dd0e0 ^ _UNK_182790d98) + uRam00000001833dd070 + 0x7bae41e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dd070 ^ _UNK_182790d90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833dd0e0 ^ _UNK_182790d98;
  uRam00000001833dcde0 =
       func_0x00018ee20140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833dd070 + 0x7bae41e0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dd0e0 + 0x7ac9c4dc));
  uVar5 = (uRam00000001833dcde0 ^ 0x7b28de65428f0000) & 0xffffffffffff8000 ^ 0x7bae41e0;
  uRam00000001833dd070 = uRam00000001833dce50 ^ uVar5 ^ 0x17a9a29d9;
  uRam00000001833dd0c8 = (uRam00000001833dd0c8 ^ uVar5) + 0x17a9a29d9 ^ 0x963656f0cd576725;
  uRam00000001833dd090 = (uRam00000001833dd090 * 0x5cdca668dcacb537 ^ uRam00000001833dd0c8) + uVar5;
  uRam00000001833dcd30 = uRam00000001833dd090 ^ uRam00000001833dd0c8;
  uRam00000001833dcef8 = 0x7a9a29d9;
  uRam00000001833dcda8 = func_0x00018ee20140(lRam00000001833dcf48 + 0xff84fffefc0026ffU ^ 0x6d);
  uVar5 = uRam00000001833dcda8 - (uRam00000001833dcda8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001833dcda8;
  uRam00000001833dcf98 = (uRam00000001833dcf98 ^ uVar5) + 0x8545a619 ^ 0x28cabec4162dcb32;
  uRam00000001833dcff8 = (uRam00000001833dcff8 * -0x11c4040b5fdce73 ^ uRam00000001833dcf98) + uVar5;
  uRam00000001833dce98 = uRam00000001833dcff8 ^ uRam00000001833dcf98;
  uRam00000001833dce50 = 0x8545a619;
  uRam00000001833dcd58 = func_0x00018ee20140(uRam00000001833dce28 ^ 0xff850000f3ffde5d);
  uRam00000001833dce20 =
       (uRam00000001833dce20 ^ uRam00000001833dcd58) + 0x7aaa41e0 ^ 0x15fac430b72e50e8;
  uRam00000001833dcf60 =
       (uRam00000001833dcf60 * 0x4a2b119180b80ffd ^ uRam00000001833dce20) + uRam00000001833dcd58;
  uRam00000001833dce00 = uRam00000001833dcf60 ^ uRam00000001833dce20;
  uRam00000001833dd0c8 = 0x7aaa41e0;
  uVar5 = (uRam00000001833dcf60 ^ _UNK_182790da0) + uRam00000001833dcef8 + 0x167853c;
  uVar7 = (uRam00000001833dcef8 ^ _UNK_182790da8) + uRam00000001833dcf60 + 0xf55483c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcf60 ^ _UNK_182790da0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833dcef8 ^ _UNK_182790da8;
  uRam00000001833dcec0 =
       func_0x00018ee20140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833dcf60 + 0xf55483c0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcef8 + 0x167853c));
  uVar5 = uRam00000001833dcec0 >> 1 | uRam00000001833dcec0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001833dcec0;
  uRam00000001833dd048 = uRam00000001833dd080 ^ uVar5 ^ 0x17a9a29d9;
  uRam00000001833dd0f0 = (uRam00000001833dd0f0 ^ uVar5) + 0x17a9a29d9 ^ 0x1bacd4536a6fe67d;
  uRam00000001833dcd30 = (uRam00000001833dcd30 * -0x1673986be0f7a6ff ^ uRam00000001833dd0f0) + uVar5
  ;
  uRam00000001833dd068 = uRam00000001833dcd30 ^ uRam00000001833dd0f0;
  uRam00000001833dcd40 = 0x7a9a29d9;
  uRam00000001833dce28 = func_0x00018ee20140(0xfffdff7bda9a0824);
  uVar5 = uRam00000001833dce28 & 0x7fffffffffffffff;
  uRam00000001833dcfd8 = uRam00000001833dcdd8 ^ uVar5 ^ 0x2145;
  uRam00000001833dcd28 = (uRam00000001833dcd28 ^ uVar5) + 0x2145 ^ 0xd3fdb0861b89e590;
  uRam00000001833dcfa0 = (uRam00000001833dcfa0 * 0x68e18c070248ea81 ^ uRam00000001833dcd28) + uVar5;
  uRam00000001833dd088 = uRam00000001833dcfa0 ^ uRam00000001833dcd28;
  uRam00000001833dced8 = uRam00000001833dcee0 ^ 0x2145;
  uRam00000001833dcee8 = 0x2145;
  uVar5 = (uRam00000001833dce08 ^ _UNK_182790db0) + uRam00000001833dcf80 + 0x7ac9c4dc;
  uVar7 = (uRam00000001833dcf80 ^ _UNK_182790db8) + uRam00000001833dce08 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dce08 ^ _UNK_182790db0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833dcf80 ^ _UNK_182790db8;
  uRam00000001833dcf98 =
       func_0x00018ee20140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833dce08 + 0xffffffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcf80 + 0x7ac9c4dc));
  uVar5 = uRam00000001833dcf98 << 0x3b | uRam00000001833dcf98 >> 5;
  uRam00000001833dcf80 = (uRam00000001833dcf80 ^ uVar5) + 0x1141806 ^ 0xf4c2b1d5024291dc;
  uRam00000001833dce98 = (uRam00000001833dce98 * 0x5dba9856e0718815 ^ uRam00000001833dcf80) + uVar5;
  uRam00000001833dd008 = uRam00000001833dce98 ^ uRam00000001833dcf80;
  uRam00000001833dcd78 = 0x1141806;
  uVar5 = (uRam00000001833dcd68 ^ _UNK_182790dc0) + uRam00000001833dcf10 + 0x7ac9c4dc;
  uVar7 = (uRam00000001833dcf10 ^ _UNK_182790dc8) + uRam00000001833dcd68 + 0x1141806;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833dcd68 ^ _UNK_182790dc0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833dcf10 ^ _UNK_182790dc8;
  uRam00000001833dd058 =
       func_0x00018ee20140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833dcd68 + 0x1141806) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833dcf10 + 0x7ac9c4dc));
  uRam00000001833dce38 = uRam00000001833dce38 ^ uRam00000001833dd058 ^ 0x49e5b56e042da978;
  uRam00000001833dcf30 =
       (uRam00000001833dcf30 * 0x2ccc72c1878034b5 ^ uRam00000001833dce38) + uRam00000001833dd058;
  uRam00000001833dcf80 = uRam00000001833dcf30 ^ uRam00000001833dce38;
  uRam00000001833dd090 = 0;
  uRam00000001833dd098 = func_0x00018ee20140(uRam00000001833dd0c0 ^ 0x1ff7c1fffe137);
  uVar5 = uRam00000001833dd098 << 0x15 | uRam00000001833dd098 >> 0x2b;
  uRam00000001833dcf40 = uRam00000001833dcef0 ^ uVar5 ^ 0x2145;
  uRam00000001833dce78 = (uRam00000001833dce78 ^ uVar5) + 0x2145 ^ 0xd53c2dc621aae810;
  uRam00000001833dcef8 = (uRam00000001833dcef8 * -0x36f81dcad05c0467 ^ uRam00000001833dce78) + uVar5
  ;
  uRam00000001833dcf20 = uRam00000001833dcef8 ^ uRam00000001833dce78;
  uRam00000001833dceb0 = 0x2145;
  uRam00000001833dced0 = func_0x00018ee20140(uRam00000001833dcf08 + 0xffdf00841d001dff ^ 0xa8);
  uVar5 = (uRam00000001833dced0 << 0x1c | uRam00000001833dced0 >> 0x24) ^ 0xd4c863f9;
  uRam00000001833dcde0 = uRam00000001833dcde0 ^ uVar5 ^ 0x3d9496698686208d;
  uRam00000001833dcfa0 = (uRam00000001833dcfa0 * 0x6e4bbeffae3cba35 ^ uRam00000001833dcde0) + uVar5;
  uRam00000001833dcf98 = uRam00000001833dcfa0 ^ uRam00000001833dcde0;
  uRam00000001833dcfe8 = 0;
  uRam00000001833dceb0 = func_0x00018ee20140(uRam00000001833dcee0 ^ 0xfffdff7c1fffdda5);
  uVar5 = uRam00000001833dceb0 >> 1 | uRam00000001833dceb0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001833dceb0) & 0x7fffffffffff;
  uRam00000001833dcf20 = uRam00000001833dd0d8 ^ uVar5 ^ 0x2145;
  uRam00000001833dcf00 = (uRam00000001833dcf00 ^ uVar5) + 0x2145 ^ 0xaf19a470e4f63e6c;
  uRam00000001833dcef0 = (uRam00000001833dcef0 * 0x6c0a4864841b05e1 ^ uRam00000001833dcf00) + uVar5;
  uRam00000001833dcf50 = uRam00000001833dcef0 ^ uRam00000001833dcf00;
  uRam00000001833dcf58 = 0x2145;
  uVar5 = (~uRam00000001833dcdb0 + 0x2146) *
          ((uVar6 ^ 0x84222325 ^ uRam00000001833dcdf0) +
          (ulonglong)((uint)uRam00000001833dcdf0 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam00000001833dce48) + (uVar5 & uRam00000001833dce48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833dcd08 =
       func_0x00018ee20140((uVar6 ^ 0x84220260 | uVar5) +
                           (ulonglong)((uint)(uVar6 ^ 0x84220260) & (uint)uVar5));
  lVar4 = uVar6 - (uVar3 & 0x2145) * 2;
  uRam00000001833dd0c8 =
       (uRam00000001833dd0c8 ^ ~uRam00000001833dcd08 & uVar6) + lVar4 + 0x2145 ^ 0x9151eb09c4d96708;
  uRam00000001833dcdf8 =
       (uRam00000001833dcdf8 * -0x1419bf94f37a189f ^ uRam00000001833dd0c8) +
       (~uRam00000001833dcd08 & uVar6);
  uRam00000001833dd0a0 = uRam00000001833dcdf8 ^ uRam00000001833dd0c8;
  uRam00000001833dce80 = lVar4 + 0x2145U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x73fc,0x146);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ee16da9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18278ef00 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; Fu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ee201d0, runtime 6ffff6a301d0) =====

void FUN_18ee201d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ee2021b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182790ee0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bn; Fv (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ee211e0, runtime 6ffff6a311e0) =====

void FUN_18ee211e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ee21269 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827914a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; _ae95296b69fb76f64e5f8e3764d2f6be ()V (handler @ image 18ee23ef0, runtime 6ffff6a33ef0) =====

void FUN_18ee23ef0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ee23fd8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827924b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; bV (Lsixtwo/lC;)V (handler @ image 18edd6c90, runtime 6ffff69e6c90) =====

void FUN_18edd6c90(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x73fc,0x146);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018edd6d7a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182783c30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; dY ()V (handler @ image 18edd6800, runtime 6ffff69e6800) =====

void FUN_18edd6800(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018edd6820 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182783a20 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bn; dk (DDLsixtwo/mA;)Z (handler @ image 18ee40000, runtime 6ffff6a50000) =====

void FUN_18ee40000(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x73fc,0x146);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ee400c7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827953d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bn; dn ()F (handler @ image 18eeac080, runtime 6ffff6abc080) =====

void FUN_18eeac080(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018eeac0a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1827a9090 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



