// ===== STITCHED CORPUS: sixtwo.v =====
// handlers: 9  continuation blocks: 90  unresolved table targets: 0
// tables not in tables.json: ['0x2d6b6f0', '0x2d6b6f8', '0x2d6b700', '0x2d6b708', '0x2d6b710', '0x2d6b718', '0x2d6b720', '0x2d6b728', '0x2d6b730', '0x2d6b738', '0x2d6b740', '0x2d6b750', '0x2d6b760', '0x2d6b768', '0x2d6b770', '0x2d6b778', '0x2d6b780', '0x2d6b788', '0x2d6b790', '0x2d6b798']

// ===== Lsixtwo/v; _61adedb93467316401c89223941063a6 ()V (handler @ image 190800f40, runtime 6ffff8410f40) =====

void FUN_190800f40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190801028 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d6ce60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/v; bV (Lsixtwo/lC;)V (handler @ image 1907dfd30, runtime 6ffff83efd30) =====

void FUN_1907dfd30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2cd9,0x99)
      /* POOL[0x2cd9,0x99]: tBsRS | eA | ([Ljava/lang/String;)V | sixtwo/v | GNbqf | nJwUL | eG | qUvbd | PJdEn | WD | ()Lsixtwo/cJ; | sTOPP | jHfmI | mIorq | eH | sixtwo/w | (Lsixtwo/lq;)V | ZRcvP | Ur | me | (I)Lsixtwo/ */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001907dfe02 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d63df0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/v; dY ()V (handler @ image 1907df8a0, runtime 6ffff83ef8a0) =====

void FUN_1907df8a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001907df8c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d63bf0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/v; dk (DDLsixtwo/mA;)Z (handler @ image 1907eccc0, runtime 6ffff83fccc0) =====

void FUN_1907eccc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2cd9,0x99)
      /* POOL[0x2cd9,0x99]: tBsRS | eA | ([Ljava/lang/String;)V | sixtwo/v | GNbqf | nJwUL | eG | qUvbd | PJdEn | WD | ()Lsixtwo/cJ; | sTOPP | jHfmI | mIorq | eH | sixtwo/w | (Lsixtwo/lq;)V | ZRcvP | Ur | me | (I)Lsixtwo/ */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001907ecd87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d68040 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/v; dn ()F (handler @ image 1907f1c80, runtime 6ffff8401c80) =====

void FUN_1907f1c80(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001907f1ca5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d69740 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/v; eG (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1907f1ea0, runtime 6ffff8401ea0) =====

undefined8 FUN_1907f1ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/v; eH (IJ)I (handler @ image 1907f1f30, runtime 6ffff8401f30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f1f30(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uRam000000018347cce0 = func_0x0001907fd1a0(uRam000000018347c7d8 ^ 0xe0bd4a4297aa19b7);
  uRam000000018347c990 =
       (uRam000000018347c990 ^ uRam000000018347cce0 ^ 0x48093caaca9a018) + 0xfbde7af7fbdfffbd ^
       0x64bd5d38c3d72dfb;
  uRam000000018347c750 =
       (uRam000000018347c750 * -0x59ad10ea12471bff ^ uRam000000018347c990) +
       (uRam000000018347cce0 ^ 0x48093caaca9a018);
  uRam000000018347c8e8 = uRam000000018347c750 ^ uRam000000018347c990;
  uRam000000018347ca50 = 0xfbde7af7fbdfffbd;
  uRam000000018347c828 = func_0x0001907fd1a0(uRam000000018347ca18 + 0xed2223af506cdb8b ^ 0x96);
  uVar3 = (uRam000000018347c828 << 4 | uRam000000018347c828 >> 0x3c) ^ 0x4c121b1bcdc91d5b;
  uRam000000018347c818 = (uRam000000018347c818 ^ uVar3) + 0x9ce4bff5d746c195 ^ 0x577b3dceee49ce51;
  uRam000000018347c890 = (uRam000000018347c890 * -0x13d9c8e36d3ce25 ^ uRam000000018347c818) + uVar3;
  uRam000000018347c7c0 = uRam000000018347c890 ^ uRam000000018347c818;
  uRam000000018347c9c8 = 0x9ce4bff5d746c195;
  uVar3 = (uRam000000018347cce8 ^ _UNK_182d6b6f0) + uRam000000018347cc00 + 0x84222325;
  uVar7 = (uRam000000018347cc00 ^ _UNK_182d6b6f8) + uRam000000018347cce8 + 0x6abd09fb1541544c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347cce8 ^ _UNK_182d6b6f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347cc00 ^ _UNK_182d6b6f8;
  uRam000000018347cbe0 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018347cce8 + 0x6abd09fb1541544c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347cc00 + 0x84222325));
  uRam000000018347c9f8 =
       (uRam000000018347c9f8 ^ uRam000000018347cbe0 * -0x4ea4424b1d9ada3d) + 0x9542f604eabeabb4 ^
       0x7bf8f1490c192561;
  uRam000000018347c708 =
       (uRam000000018347c708 * -0x28c06b94ebe72d1d ^ uRam000000018347c9f8) +
       uRam000000018347cbe0 * -0x4ea4424b1d9ada3d;
  uRam000000018347cb00 = uRam000000018347c708 ^ uRam000000018347c9f8;
  uRam000000018347ccd8 = -0x6abd09fb1541544c;
  uVar3 = (~uRam000000018347cb20 + 0x6abd09fb1541544d) *
          ((uRam000000018347cc20 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018347cc20 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam000000018347cc78) + (uVar3 & uRam000000018347cc78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347c808 =
       func_0x0001907fd1a0((uVar3 | 0x6abd09fb91630896) + (uVar3 & 0x6abd09fb91630896));
  uVar3 = uRam000000018347c808 & 0xffffffffffff0000 ^ 0x6abd09fb15412bb3;
  uRam000000018347cbb8 = uRam000000018347c958 ^ uVar3 ^ 0x6abd09fb1541d44b;
  uRam000000018347c7e8 = (uRam000000018347c7e8 ^ uVar3) + 0x6abd09fb1541d44b ^ 0xcad863f537fc01c3;
  uRam000000018347ca58 = (uRam000000018347ca58 * 0x45cd74dfcaa4647d ^ uRam000000018347c7e8) + uVar3;
  uRam000000018347cad0 = uRam000000018347ca58 ^ uRam000000018347c7e8;
  uRam000000018347c7f0 = 0x6abd09fb1541d44b;
  uRam000000018347cc68 = func_0x0001907fd1a0(lRam000000018347ca00 + 0x42c3fcf5d625c58aU ^ 0x92);
  uVar3 = uRam000000018347cc68 ^ 0x5f0618291d8089f7;
  uRam000000018347c8f8 = uRam000000018347cbe0 ^ uVar3 ^ 0x7fff;
  uRam000000018347ca20 = (uRam000000018347ca20 ^ uVar3) + 0x7fff ^ 0x4ed77e39df7d1574;
  uRam000000018347c780 = (uRam000000018347c780 * -0x5a327b7216a8b079 ^ uRam000000018347ca20) + uVar3
  ;
  uRam000000018347ca60 = uRam000000018347c780 ^ uRam000000018347ca20;
  uRam000000018347caa0 = 0x7fff;
  uVar3 = (uRam000000018347cc08 ^ _UNK_182d6b700) + uRam000000018347c9d8 + 0x84222325;
  uVar7 = (uRam000000018347c9d8 ^ _UNK_182d6b708) + uRam000000018347cc08 + 0x270731ffa5f71171;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347cc08 ^ _UNK_182d6b700;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347c9d8 ^ _UNK_182d6b708;
  uRam000000018347c740 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018347cc08 + 0x270731ffa5f71171) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347c9d8 + 0x84222325));
  uVar3 = (uRam000000018347c740 ^ 0x270731ffa5f71171) & 0x7fffffffffffffff;
  uRam000000018347c980 = (uRam000000018347c980 ^ uVar3) + 0xd8f8ce005a08ee8f ^ 0x95a917137d51fc60;
  uRam000000018347cb18 = (uRam000000018347cb18 * 0x4c10e68facf7ca8d ^ uRam000000018347c980) + uVar3;
  uRam000000018347c858 = uRam000000018347cb18 ^ uRam000000018347c980;
  uRam000000018347cc10 = 0xd8f8ce005a08ee8f;
  uVar3 = (~uRam000000018347c7c0 + 0x270731ffa5f71172) *
          ((uRam000000018347cb58 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018347cb58 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam000000018347c940) + (uVar3 & uRam000000018347c940);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347caa0 =
       func_0x0001907fd1a0((uVar3 | 0x270731ff21d54dab) + (uVar3 & 0x270731ff21d54dab));
  uVar3 = uRam000000018347caa0 - (uRam000000018347caa0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam000000018347caa0 ^ 0x7fff;
  uRam000000018347ca78 = uRam000000018347c770 ^ uVar3 ^ 0x270731ffa5f79170;
  uRam000000018347cc50 = (uRam000000018347cc50 ^ uVar3) + 0x270731ffa5f79170 ^ 0xadf0d64da62fa7e4;
  uRam000000018347cb68 = (uRam000000018347cb68 * -0x24c1831f270ef9bd ^ uRam000000018347cc50) + uVar3
  ;
  uRam000000018347c898 = uRam000000018347cb68 ^ uRam000000018347cc50;
  uRam000000018347c878 = 0x270731ffa5f79170;
  uVar3 = (uRam000000018347cca8 ^ _UNK_182d6b710) + uRam000000018347cbe0 + 0x270731ff21d5b255;
  uVar7 = (uRam000000018347cbe0 ^ _UNK_182d6b718) + uRam000000018347cca8 + 0xd8f8ce005a08ee8f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347cca8 ^ _UNK_182d6b710;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347cbe0 ^ _UNK_182d6b718;
  uRam000000018347ca60 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018347cca8 + 0xd8f8ce005a08ee8f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018347cbe0 + 0x270731ff21d5b255));
  uVar3 = uRam000000018347ca60 ^ 0xd8f8ce005a086e8f;
  uRam000000018347c730 = uRam000000018347c880 ^ uVar3 ^ 0x7fff;
  uRam000000018347c9d0 = (uRam000000018347c9d0 ^ uVar3) + 0x7fff ^ 0xdfaf361e57a9887a;
  uRam000000018347cbb0 = (uRam000000018347cbb0 * -0x4c1d84b073f9161d ^ uRam000000018347c9d0) + uVar3
  ;
  uRam000000018347c898 = uRam000000018347cbb0 ^ uRam000000018347c9d0;
  uRam000000018347ccb0 = 0x7fff;
  uVar3 = (uRam000000018347c8c0 ^ _UNK_182d6b720) + uRam000000018347ccc8 + 0x91020dcef9c43ef5;
  uVar7 = (uRam000000018347ccc8 ^ _UNK_182d6b728) + uRam000000018347c8c0 + 0x6efdf231821a622f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347c8c0 ^ _UNK_182d6b720;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347ccc8 ^ _UNK_182d6b728;
  uRam000000018347c938 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018347c8c0 + 0x6efdf231821a622f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018347ccc8 + 0x91020dcef9c43ef5));
  uVar3 = uRam000000018347c938 & 0x91020dce7de61dd0;
  uRam000000018347c7d8 = uRam000000018347c988 ^ uVar3 ^ 0x7fff;
  uRam000000018347cbd0 = (uRam000000018347cbd0 ^ uVar3) + 0x7fff ^ 0x1dc4f24d9c571a1e;
  uRam000000018347c9b8 = (uRam000000018347c9b8 * 0x407b6fa994f682c9 ^ uRam000000018347cbd0) + uVar3;
  uRam000000018347c908 = uRam000000018347c9b8 ^ uRam000000018347cbd0;
  uRam000000018347c7c8 = 0x7fff;
  uVar3 = (~uRam000000018347c818 + 0x9ce4bff5d746c196) *
          ((uRam000000018347c798 ^ 0xfbde7af77ffddc98) +
          (uRam000000018347c798 & 0x7bde7af77ffddc98) * 2);
  uVar3 = (uVar3 | uRam000000018347ccf0) + (uVar3 & uRam000000018347ccf0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347cbd0 =
       func_0x0001907fd1a0((uVar3 | 0x673ac502a8bb1d0d) + (uVar3 & 0x673ac502a8bb1d0d));
  uVar3 = (uRam000000018347cbd0 ^ 0x550c492221db5601) * -0x19a30af50a1e72ad;
  uRam000000018347c958 = uRam000000018347c970 ^ uVar3 ^ 0x98c33aedd326c152;
  uRam000000018347cbf0 = (uRam000000018347cbf0 ^ uVar3) + 0x98c33aedd326c152 ^ 0x89f896b9ac2b1bb7;
  uRam000000018347c868 = (uRam000000018347c868 * 0x52597c3ba6dc341 ^ uRam000000018347cbf0) + uVar3;
  uRam000000018347c9c8 = uRam000000018347c868 ^ uRam000000018347cbf0;
  uRam000000018347cc20 = 0x98c33aedd326c152;
  uVar3 = (~uRam000000018347cce8 + 0x9ce4bff5d746c196) *
          ((uRam000000018347ca90 ^ 0xfbde7af77ffddc98) +
          (uRam000000018347ca90 & 0x7bde7af77ffddc98) * 2);
  uVar3 = (uVar3 | uRam000000018347c9b0) + (uVar3 & uRam000000018347c9b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347cb78 =
       func_0x0001907fd1a0((uVar3 | 0x673ac502a8bb1d0d) + (uVar3 & 0x673ac502a8bb1d0d));
  uVar3 = uRam000000018347cb78 << 0x10 | uRam000000018347cb78 >> 0x30;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar3;
  uRam000000018347cc70 = (uRam000000018347cc70 ^ uVar3) + 0x673ac5022c993e28 ^ 0x2cf3b4fab661cdc8;
  uRam000000018347c858 = (uRam000000018347c858 * -0x8b64858d0e53221 ^ uRam000000018347cc70) + uVar3;
  uRam000000018347c9d8 = uRam000000018347c858 ^ uRam000000018347cc70;
  uRam000000018347c780 = 0x673ac5022c993e28;
  uVar3 = (uRam000000018347c8e8 ^ _UNK_182d6b730) + uRam000000018347c888 + 0xfbde7af77ffddc98;
  uVar7 = (uRam000000018347c888 ^ _UNK_182d6b738) + uRam000000018347c8e8 + 0x9ce4bff5d746c195;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347c8e8 ^ _UNK_182d6b730;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347c888 ^ _UNK_182d6b738;
  uRam000000018347ccf0 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018347c8e8 + 0x9ce4bff5d746c195) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018347c888 + 0xfbde7af77ffddc98));
  uVar3 = uRam000000018347ccf0 >> 1 | uRam000000018347ccf0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam000000018347ccf0;
  uRam000000018347c858 = (uRam000000018347c858 ^ uVar3) + 0x98c43af5d346c195 ^ 0x15530e5a184fb7ad;
  uRam000000018347cad0 = (uRam000000018347cad0 * 0x2a30bfe433567811 ^ uRam000000018347c858) + uVar3;
  uRam000000018347cc78 = uRam000000018347cad0 ^ uRam000000018347c858;
  uRam000000018347c718 = 0x98c43af5d346c195;
  uVar3 = (~uRam000000018347cb58 + 0x318875eba68d832b) *
          ((uRam000000018347c7a8 ^ 0x673ac502a8bb1d0d) +
          (uRam000000018347c7a8 & 0x673ac502a8bb1d0d) * 2);
  uVar3 = (uVar3 | uRam000000018347c988) + (uVar3 & uRam000000018347c988);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347ca18 =
       func_0x0001907fd1a0((uVar3 | 0x56b2b0e90e369e27) + (uVar3 & 0x56b2b0e90e369e27));
  uVar3 = uRam000000018347ca18 & 0x7fffffffffffffff;
  uRam000000018347c800 = uRam000000018347cbb0 ^ uVar3 ^ 0x98c33aedd326c152;
  uRam000000018347cad8 = (uRam000000018347cad8 ^ uVar3) + 0x98c33aedd326c152 ^ 0x21e0f1682b71e474;
  uRam000000018347c9b8 = (uRam000000018347c9b8 * 0x4784cbea5f7707cb ^ uRam000000018347cad8) + uVar3;
  uRam000000018347c9f8 = uRam000000018347c9b8 ^ uRam000000018347cad8;
  uRam000000018347caf0 = 0x98c33aedd326c152;
  uVar3 = ((uRam000000018347c9c0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018347c9c0 & 0x84225cda) * 2) * -uRam000000018347ca70;
  uVar3 = (uVar3 | uRam000000018347ca90) + (uVar3 & uRam000000018347ca90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347ca08 =
       func_0x0001907fd1a0((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = (uRam000000018347ca08 ^ 0x7fff) << 0x18;
  uVar3 = (uVar3 & 0xffffffff | uRam000000018347ca08 >> 0x28) * (_UNK_182d6b740 & 0xffffffff) +
          ((ulonglong)_UNK_182d6b750 * (uVar3 & 0xffffffff | uRam000000018347ca08 >> 0x28) +
           (((uRam000000018347ca08 ^ 0x7fff) & 0xffffffffff) >> 8) * (_UNK_182d6b740 & 0xffffffff)
          << 0x20) & 0x7fffffffffffffff;
  uRam000000018347c7e0 = uRam000000018347c8d0 ^ uVar3 ^ 0x7fff;
  uRam000000018347c710 = (uRam000000018347c710 ^ uVar3) + 0x7fff ^ 0x127eb742154fe65;
  uRam000000018347cbd8 = (uRam000000018347cbd8 * 0x204c86b38924dbb ^ uRam000000018347c710) + uVar3;
  uRam000000018347c9e0 = uRam000000018347cbd8 ^ uRam000000018347c710;
  uRam000000018347ca98 = 0x7fff;
  uVar3 = (~uRam000000018347cc78 + 0x421850804200043) *
          ((uRam000000018347c838 ^ 0xfbde7af77ffddc98) +
          (uRam000000018347c838 & 0x7bde7af77ffddc98) * 2);
  uVar3 = (uVar3 | uRam000000018347c858) + (uVar3 & uRam000000018347c858);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347ca68 =
       func_0x0001907fd1a0((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uRam000000018347c938 =
       uRam000000018347c938 ^ uRam000000018347ca68 & 0x7fffffffffffffff ^ 0x4d295bce6f0627e5;
  uRam000000018347c9c8 =
       (uRam000000018347c9c8 * 0x4e7e2911c1ffefe5 ^ uRam000000018347c938) +
       (uRam000000018347ca68 & 0x7fffffffffffffff);
  uRam000000018347ca60 = uRam000000018347c9c8 ^ uRam000000018347c938;
  uRam000000018347c8d0 = 0;
  uRam000000018347c8c8 = func_0x0001907fd1a0(lRam000000018347c778 + 0xffa40084c5ffddffU ^ 0x39);
  uVar3 = uRam000000018347c8c8 - (uRam000000018347c8c8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam000000018347c8c8;
  uRam000000018347c808 = uRam000000018347ca98 ^ uVar3 ^ 0x7fff;
  uRam000000018347ca90 = (uRam000000018347ca90 ^ uVar3) + 0x7fff ^ 0x49cc41f321385dbe;
  uRam000000018347c838 = (uRam000000018347c838 * 0x2bbdf0ef83ca3c7 ^ uRam000000018347ca90) + uVar3;
  uRam000000018347c948 = uRam000000018347c838 ^ uRam000000018347ca90;
  uRam000000018347cae8 = uRam000000018347c9d0 ^ 0x7fff;
  uRam000000018347c760 = 0x7fff;
  uVar3 = (~uRam000000018347cb10 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam000000018347c988) +
          ((param_4 ^ 0x84222325) & uRam000000018347c988) * 2);
  uVar3 = (uVar3 | uRam000000018347cb38) + (uVar3 & uRam000000018347cb38);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347c960 =
       func_0x0001907fd1a0((param_4 ^ 0x84225cda | uVar3) + (uVar3 & (param_4 ^ 0x84225cda)));
  uVar3 = (uRam000000018347c960 & 0x7fffffffffffffff) >> 1 |
          uRam000000018347c960 & 0x7fffffffffffffff;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018347c960 & 0x7fffffffffffffff;
  uVar3 = uVar3 << 0x3a | uVar3 >> 6;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar2;
  uRam000000018347cc00 = (uRam000000018347cc00 ^ uVar3) + uVar4 ^ 0x1f54a65077cfa6a;
  uRam000000018347c818 = (uRam000000018347c818 * -0x1d27996bf4ab1031 ^ uRam000000018347cc00) + uVar3
  ;
  uRam000000018347c760 = uRam000000018347c818 ^ uRam000000018347cc00;
  uVar5 = (ulonglong)param_3;
  uVar3 = uVar4 ^ 0x84222325;
  uVar7 = ((uRam000000018347ca60 ^ uVar3) +
          (ulonglong)((uint)uRam000000018347ca60 & (uint)uVar3) * 2) *
          (uVar5 - uRam000000018347c9b8);
  uVar7 = (uVar7 | uRam000000018347cae8) + (uVar7 & uRam000000018347cae8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018347c7d8 = uVar4;
  uRam000000018347ca50 =
       func_0x0001907fd1a0((uVar3 ^ uVar5 | uVar7) +
                           (ulonglong)((uint)(uVar3 ^ uVar5) & (uint)uVar7));
  uVar3 = ((uVar2 | param_3) ^ uRam000000018347ca50) & 0xfffffffffffff800;
  uVar5 = (uVar4 + uVar5) - (ulonglong)((param_3 & uVar2) * 2);
  uRam000000018347c868 = (uRam000000018347c868 ^ uVar3) + uVar5 ^ 0xbda4cb40499ee501;
  uRam000000018347cb80 = (uRam000000018347cb80 * -0x1f4401eb64254151 ^ uRam000000018347c868) + uVar3
  ;
  uRam000000018347c7f0 = uRam000000018347cb80 ^ uRam000000018347c868;
  uVar4 = uVar5 & 0xffffffff;
  uVar3 = (~uRam000000018347ccb8 + 0x88d55025) *
          ((uRam000000018347cbe0 ^ 0x254bc35b) +
          (ulonglong)((uint)uRam000000018347cbe0 & 0x254bc35b) * 2);
  uVar3 = (uVar3 | uRam000000018347cc90) + (uVar3 & uRam000000018347cc90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347cac0 = uVar4;
  uRam000000018347ccf8 =
       func_0x0001907fd1a0((uVar3 | 0xad9e937f) + (ulonglong)((uint)uVar3 & 0xad9e937f));
  uVar7 = uRam000000018347ccf8 ^ 0x5646bee281e0f1b8;
  uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar7) &
          0xfffffffff;
  uRam000000018347c720 = (uRam000000018347c720 ^ uVar3) + 0xa9fdf07e ^ 0xee4e8274441a7f69;
  uRam000000018347ca60 = (uRam000000018347ca60 * 0x4075a47a6a02d025 ^ uRam000000018347c720) + uVar3;
  uRam000000018347c918 = uRam000000018347ca60 ^ uRam000000018347c720;
  uRam000000018347cb30 = 0xa9fdf07e;
  uVar3 = (~uRam000000018347c7f8 + 0xd6089aa4) *
          ((uRam000000018347c7f8 ^ 0x88d55367) +
          (ulonglong)((uint)uRam000000018347c7f8 & 0x88d55367) * 2);
  uVar3 = (uVar3 | uRam000000018347c850) + (uVar3 & uRam000000018347c850);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347c850 =
       func_0x0001907fd1a0((uVar3 | 0x5eddc9c4) + (ulonglong)((uint)uVar3 & 0x5eddc9c4));
  uVar3 = ((uRam000000018347c850 ^ 0x80000000) >> 0x1f) * 0x44dcacf780000000;
  uRam000000018347c768 = (uRam000000018347c768 ^ uVar3) + 0xdaffeae1 ^ 0x40324687d29d9d81;
  uRam000000018347c798 = (uRam000000018347c798 * 0x6f828f927681fb65 ^ uRam000000018347c768) + uVar3;
  uRam000000018347c9b0 = uRam000000018347c798 ^ uRam000000018347c768;
  uRam000000018347c728 = 0xdaffeae1;
  uRam000000018347cbb0 = func_0x0001907fd1a0(uRam000000018347c9c8 + 0xffe2005a9d0040ff ^ 0xd5);
  uVar3 = uRam000000018347cbb0 >> 9 & 0xffffffffffff0000;
  uRam000000018347c938 = (uRam000000018347c938 ^ uVar3) - 0x3fe53db8 ^ 0x67885c782fb672f2;
  uRam000000018347c888 = (uRam000000018347c888 * -0x7a2334066eb86dbb ^ uRam000000018347c938) + uVar3
  ;
  uRam000000018347ca08 = uRam000000018347c888 ^ uRam000000018347c938;
  uRam000000018347cc38 = 0xc01ac248;
  uRam000000018347cca8 = func_0x0001907fd1a0(uRam000000018347cc58 ^ 0xff85ff9af8ff4498);
  uVar3 = uRam000000018347cca8 & 0x7ffffffffff;
  uRam000000018347cc58 = uRam000000018347c710 ^ uVar3 ^ 0x3fe59e4e;
  uRam000000018347c718 = (uRam000000018347c718 ^ uVar3) + 0x3fe59e4e ^ 0x34f08201b2e61ea9;
  uRam000000018347ccd8 = (uRam000000018347ccd8 * 0x1b29439f091a0c9f ^ uRam000000018347c718) + uVar3;
  uRam000000018347c9a0 = uRam000000018347ccd8 ^ uRam000000018347c718;
  uRam000000018347cbf0 = uRam000000018347ca10 ^ 0x3fe59e4e;
  uRam000000018347c900 = 0x3fe59e4e;
  uVar3 = (uRam000000018347c9a0 ^ _UNK_182d6b760) + uRam000000018347cb88 + 0x84222325;
  uVar7 = (uRam000000018347cb88 ^ _UNK_182d6b768) + uRam000000018347c9a0 + 0x1415918c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347c9a0 ^ _UNK_182d6b760;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347cb88 ^ _UNK_182d6b768;
  uRam000000018347c838 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018347c9a0 + 0x1415918c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347cb88 + 0x84222325));
  uRam000000018347c790 =
       (uRam000000018347c790 ^ uRam000000018347c838 & 0xffffffffffffffc0) - 0x1415918c ^
       0x3aea485f47d282ea;
  uRam000000018347ca98 =
       (uRam000000018347ca98 * 0x3322ae24e83fe619 ^ uRam000000018347c790) +
       (uRam000000018347c838 & 0xffffffffffffffc0);
  uRam000000018347cb58 = uRam000000018347ca98 ^ uRam000000018347c790;
  uRam000000018347c730 = 0xebea6e74;
  uRam000000018347c990 = func_0x0001907fd1a0(uRam000000018347c9f8 ^ 0x51ff6fdefff66f);
  uVar3 = (uRam000000018347c990 ^ 0x1415f19e) & 0x7fffffffffffffff;
  uRam000000018347c890 = uRam000000018347ca70 ^ uVar3 ^ 0x1415f222;
  uRam000000018347ca88 = (uRam000000018347ca88 ^ uVar3) + 0x1415f222 ^ 0x9535aad4875b56f1;
  uRam000000018347c9d0 = (uRam000000018347c9d0 * 0x1f850f383d317dbd ^ uRam000000018347ca88) + uVar3;
  uRam000000018347ca18 = uRam000000018347c9d0 ^ uRam000000018347ca88;
  uRam000000018347cc88 = 0x1415f222;
  uRam000000018347cc50 = func_0x0001907fd1a0(uRam000000018347cb40 ^ 0x4f00174eff5cdf);
  uVar3 = uRam000000018347cc50 ^ 0x128289ff0505a14a;
  uRam000000018347c9f8 = uRam000000018347c948 ^ uVar3 ^ 0x100006096;
  uRam000000018347c9c0 = (uRam000000018347c9c0 ^ uVar3) + 0x100006096 ^ 0x254f0a556d9e7dd8;
  uRam000000018347c9d0 = (uRam000000018347c9d0 * -0x521d95a2f5f6be27 ^ uRam000000018347c9c0) + uVar3
  ;
  uRam000000018347c798 = uRam000000018347c9d0 ^ uRam000000018347c9c0;
  uRam000000018347ca38 = 0x6096;
  uVar3 = (uRam000000018347c8b8 ^ _UNK_182d6b770) + uRam000000018347c838 + 0x84222325;
  uVar7 = (uRam000000018347c838 ^ _UNK_182d6b778) + uRam000000018347c8b8 + 0xb8071474;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347c8b8 ^ _UNK_182d6b770;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347c838 ^ _UNK_182d6b778;
  uRam000000018347ccd8 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018347c8b8 + 0xb8071474) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347c838 + 0x84222325));
  uRam000000018347cb00 =
       (uRam000000018347cb00 ^ uRam000000018347ccd8) - 0xb8071474 ^ 0xaf579b64167ea87f;
  uRam000000018347c830 =
       (uRam000000018347c830 * -0x5937a47f3b940141 ^ uRam000000018347cb00) + uRam000000018347ccd8;
  uRam000000018347ca88 = uRam000000018347c830 ^ uRam000000018347cb00;
  uRam000000018347cb38 = 0x47f8eb8c;
  uRam000000018347ccf0 = func_0x0001907fd1a0(uRam000000018347c838 + 0xffa900133f0024ff ^ 0x3e);
  uVar3 = uRam000000018347ccf0 ^ 0xb8071474;
  uRam000000018347c758 = uRam000000018347cbc8 ^ uVar3 ^ 0xb807750a;
  uRam000000018347c7e8 = (uRam000000018347c7e8 ^ uVar3) + 0xb807750a ^ 0x461e1dda1ae9f3d0;
  uRam000000018347ca60 = (uRam000000018347ca60 * -0x123ca78efdddcfaf ^ uRam000000018347c7e8) + uVar3
  ;
  uRam000000018347c830 = uRam000000018347ca60 ^ uRam000000018347c7e8;
  uRam000000018347ccd0 = 0xb807750a;
  uVar3 = (uRam000000018347cb10 ^ _UNK_182d6b780) + uRam000000018347ca08 + 0x3c25562f;
  uVar7 = (uRam000000018347ca08 ^ _UNK_182d6b788) + uRam000000018347cb10 + 0x47f8eb8c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347cb10 ^ _UNK_182d6b780;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347ca08 ^ _UNK_182d6b788;
  uRam000000018347cc10 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018347cb10 + 0x47f8eb8c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347ca08 + 0x3c25562f));
  uVar3 = ((uRam000000018347cc10 << 0x2f | uRam000000018347cc10 >> 0x11) ^ 0x47f8eb8c) &
          0x3ffffffffffffff;
  uRam000000018347cc60 = uRam000000018347c970 ^ uVar3 ^ 0x100006096;
  uRam000000018347cac8 = (uRam000000018347cac8 ^ uVar3) + 0x100006096 ^ 0x486910e0a44e1c6b;
  uRam000000018347c808 = (uRam000000018347c808 * -0x170f1fd14127468d ^ uRam000000018347cac8) + uVar3
  ;
  uRam000000018347cb30 = uRam000000018347c808 ^ uRam000000018347cac8;
  uRam000000018347c870 = 0x6096;
  uVar3 = (~uRam000000018347cbb0 + 0xdaffeae2) *
          ((uRam000000018347ccc0 ^ 0x2ddfd35b) +
          (ulonglong)((uint)uRam000000018347ccc0 & 0x2ddfd35b) * 2);
  uVar3 = (uVar3 | uRam000000018347ccd8) + (uVar3 & uRam000000018347ccd8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347cbe8 =
       func_0x0001907fd1a0((uVar3 | 0xf72039ba) + (ulonglong)((uint)uVar3 & 0xf72039ba));
  uVar3 = (uRam000000018347cbe8 & 0x7ffffffffffffff) >> 1 | uRam000000018347cbe8 & 0x7ffffffffffffff
  ;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018347cbe8 & 0x7ffffffffffffff;
  uRam000000018347c7d0 = (uRam000000018347c7d0 ^ uVar3) + 0x73021a9f ^ 0xe59f439a4c90659d;
  uRam000000018347c8a0 = (uRam000000018347c8a0 * 0x301beac21c6fe5d9 ^ uRam000000018347c7d0) + uVar3;
  uRam000000018347c940 = uRam000000018347c8a0 ^ uRam000000018347c7d0;
  uRam000000018347ca18 = 0x73021a9f;
  uVar3 = (uRam000000018347c7f8 ^ _UNK_182d6b790) + uRam000000018347ccb8 + 0xf72039ba;
  uVar7 = (uRam000000018347ccb8 ^ _UNK_182d6b798) + uRam000000018347c7f8 + 0x11fbc0c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347c7f8 ^ _UNK_182d6b790;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347ccb8 ^ _UNK_182d6b798;
  uRam000000018347ccb8 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018347c7f8 + 0x11fbc0c0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347ccb8 + 0xf72039ba));
  uVar3 = (uRam000000018347ccb8 ^ 0xf9c040) * 0x3c78f9ed97a88bc3 ^ 0x73021a9f;
  uRam000000018347c958 = uRam000000018347c998 ^ uVar3 ^ 0x84fddb5f;
  uRam000000018347c940 = (uRam000000018347c940 ^ uVar3) + 0x84fddb5f ^ 0xb2ed71eebb0a9a68;
  uRam000000018347c748 = (uRam000000018347c748 * -0x114a3a4fe139317d ^ uRam000000018347c940) + uVar3
  ;
  uRam000000018347caa8 = uRam000000018347c748 ^ uRam000000018347c940;
  uRam000000018347ccb0 = 0x84fddb5f;
  uVar3 = (~uRam000000018347ccc0 + 0x84fddb60) *
          ((uRam000000018347caf0 ^ 0xdff87a) +
          (ulonglong)((uint)uRam000000018347caf0 & 0xdff87a) * 2);
  uVar3 = (uVar3 | uRam000000018347c960) + (uVar3 & uRam000000018347c960);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347c738 =
       func_0x0001907fd1a0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam000000018347c9d8 = (ulonglong)(~((int)uRam000000018347c738 * 0x7841bf95) & 0x84fddb5f);
  uRam000000018347cc68 = uRam000000018347cc68 ^ uRam000000018347c9d8 ^ 0xff59093afc687ab8;
  uRam000000018347cb98 =
       (uRam000000018347cb98 * -0xd562dcef4a7dc13 ^ uRam000000018347cc68) + uRam000000018347c9d8;
  uRam000000018347c720 = uRam000000018347cb98 ^ uRam000000018347cc68;
  uRam000000018347c8c0 = 0;
  uRam000000018347c980 = func_0x0001907fd1a0(uRam000000018347cb48 ^ 0x4300836cffdd17);
  uVar3 = uRam000000018347c980 << 0x25 | uRam000000018347c980 >> 0x1b;
  uRam000000018347c950 = uRam000000018347c9d0 ^ uVar3 ^ 0x6096;
  uRam000000018347c700 = (uRam000000018347c700 ^ uVar3) + 0x6096 ^ 0xe4554c009b34eb2e;
  uRam000000018347cbf8 = (uRam000000018347cbf8 * -0x5ee48ceae706f1af ^ uRam000000018347c700) + uVar3
  ;
  uRam000000018347cbd0 = uRam000000018347cbf8 ^ uRam000000018347c700;
  uRam000000018347cc48 = 0x6096;
  uVar3 = (uRam000000018347caf0 ^ _UNK_182d6b7a0) + uRam000000018347c9a8 + 0x2ddfd35b;
  uVar7 = (uRam000000018347c9a8 ^ _UNK_182d6b7a8) + uRam000000018347caf0 + 0x56020f81;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347caf0 ^ _UNK_182d6b7a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018347c9a8 ^ _UNK_182d6b7a8;
  uRam000000018347cba0 =
       func_0x0001907fd1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018347caf0 + 0x56020f81) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347c9a8 + 0x2ddfd35b));
  uRam000000018347cca8 =
       uRam000000018347cca8 ^ uRam000000018347cba0 & 0x1ffffffffff ^ 0xf95970f6a45cdf2;
  uRam000000018347cae8 =
       (uRam000000018347cae8 * 0x4ff748318a351049 ^ uRam000000018347cca8) +
       (uRam000000018347cba0 & 0x1ffffffffff);
  uRam000000018347c800 = uRam000000018347cae8 ^ uRam000000018347cca8;
  uRam000000018347c878 = 0;
  uVar3 = ((uRam000000018347c738 ^ 0x842243b3) +
          (ulonglong)((uint)uRam000000018347c738 & 0x842243b3) * 2) * -uRam000000018347ccf8;
  uVar3 = (uVar3 | uRam000000018347cc80) + (uVar3 & uRam000000018347cc80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347c9e0 =
       func_0x0001907fd1a0((uVar3 | 0x842243b3) + (ulonglong)((uint)uVar3 & 0x842243b3));
  uRam000000018347c978 = uRam000000018347c9c0 ^ uRam000000018347cc10 ^ 0x6096;
  uRam000000018347c788 = (uRam000000018347c788 ^ uRam000000018347cc10) + 0x6096 ^ 0x5b9cae51a24a8a78
  ;
  uRam000000018347cca0 =
       (uRam000000018347cca0 * 0x1cec7391fc32947b ^ uRam000000018347c788) + uRam000000018347cc10;
  uRam000000018347c720 = uRam000000018347cca0 ^ uRam000000018347c788;
  uRam000000018347c990 = 0x6096;
  uRam000000018347cb30 = func_0x0001907fd1a0(uRam000000018347cb08 ^ 0x1cff7c24ffdd3a);
  uVar3 = (ulonglong)(~(uint)uRam000000018347cb30 & 0xa169e07e);
  uRam000000018347c858 = uRam000000018347c858 ^ uVar3 ^ 0x6d34e1e234fad992;
  uRam000000018347cb70 = (uRam000000018347cb70 * -0x2883acfe08d0a55 ^ uRam000000018347c858) + uVar3;
  uRam000000018347c930 = uRam000000018347cb70 ^ uRam000000018347c858;
  uRam000000018347c810 = 0;
  uVar3 = ((uRam000000018347cca8 ^ 0x842243b3) +
          (ulonglong)((uint)uRam000000018347cca8 & 0x842243b3) * 2) * -uRam000000018347c700;
  uVar3 = (uVar3 | uRam000000018347ca50) + (uVar3 & uRam000000018347ca50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347cb50 =
       func_0x0001907fd1a0((uVar3 | 0x842243b3) + (ulonglong)((uint)uVar3 & 0x842243b3));
  uVar3 = uRam000000018347cb50 ^ 0x6096;
  uRam000000018347ccd0 = uRam000000018347c748 ^ uVar3 ^ 0x6096;
  uRam000000018347cca8 = (uRam000000018347cca8 ^ uVar3) + 0x6096 ^ 0x4ff7bfa7c33e1c17;
  uRam000000018347cbb8 = (uRam000000018347cbb8 * 0x123b2179f8fcf309 ^ uRam000000018347cca8) + uVar3;
  uRam000000018347cc28 = uRam000000018347cbb8 ^ uRam000000018347cca8;
  uRam000000018347cad0 = 0x6096;
  uVar3 = (~uRam000000018347cce8 + 0x6097) *
          ((uVar4 ^ 0x84222325 ^ uRam000000018347c840) +
          (ulonglong)((uint)uRam000000018347c840 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | uRam000000018347c7c0) + (uVar3 & uRam000000018347c7c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347cca0 =
       func_0x0001907fd1a0((uVar4 ^ 0x842243b3 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ 0x842243b3) & (uint)uVar3));
  uVar3 = (uVar4 | 0x6096) ^ uRam000000018347cca0;
  lVar6 = uVar4 - ((uint)uVar5 & 0x6096) * 2;
  uRam000000018347c7e0 = (uRam000000018347c7e0 ^ uVar3) + lVar6 + 0x6096 ^ 0xccc350bc38c02fca;
  uRam000000018347cb10 = (uRam000000018347cb10 * 0x58de367fd27213ff ^ uRam000000018347c7e0) + uVar3;
  uRam000000018347c8d0 = uRam000000018347cb10 ^ uRam000000018347c7e0;
  uRam000000018347cc28 = lVar6 + 0x6096U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2cd9,0x99)
      /* POOL[0x2cd9,0x99]: tBsRS | eA | ([Ljava/lang/String;)V | sixtwo/v | GNbqf | nJwUL | eG | qUvbd | PJdEn | WD | ()Lsixtwo/cJ; | sTOPP | jHfmI | mIorq | eH | sixtwo/w | (Lsixtwo/lq;)V | ZRcvP | Ur | me | (I)Lsixtwo/ */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001907f4604 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d69890 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/v; eI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1907fd230, runtime 6ffff840d230) =====

void FUN_1907fd230(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001907fd27b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d6b8c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/v; eJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1907fe240, runtime 6ffff840e240) =====

void FUN_1907fe240(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001907fe2c9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d6be70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x107df8c3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907df8c3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d63cb8)();
  return;
}


// ----- block @ rva 0x107df941 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907df941(void)

{
  FUN_190dd72e0();
  (*_DAT_182d63ca8)();
  return;
}


// ----- block @ rva 0x107df9e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907df9e1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d63cc8)();
  return;
}


// ----- block @ rva 0x107dfa96 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907dfa96(void)

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


// ----- block @ rva 0x107dfaab -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907dfaab(void)

{
  FUN_190dd9df0();
  (*_DAT_182d63c88)();
  return;
}


// ----- block @ rva 0x107dfb02 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907dfb02(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d63d58)();
  return;
}


// ----- block @ rva 0x107dfb8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907dfb8c(void)

{
  FUN_190ddfc90();
  (*_DAT_182d63c48)();
  return;
}


// ----- block @ rva 0x107dfbbf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907dfbbf(void)

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


// ----- block @ rva 0x107dfc32 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907dfc32(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182d63d08)();
  return;
}


// ----- block @ rva 0x107dfc4b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907dfc4b(void)

{
  longlong *unaff_RSI;
  
  FUN_184117db0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d63d08)();
  return;
}


// ----- block @ rva 0x107dfc70 -----

void FUN_1907dfc70(void)

{
  return;
}


// ----- block @ rva 0x107dfc78 -----

void FUN_1907dfc78(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107dfe05 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907dfe05(void)

{
  FUN_190ddce00();
  (*_DAT_182d64e38)();
  return;
}


// ----- block @ rva 0x107e2f36 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907e2f36(void)

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


// ----- block @ rva 0x107e4167 -----

void FUN_1907e4167(void)

{
  return;
}


// ----- block @ rva 0x107e4bc2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907e4bc2(void)

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


// ----- block @ rva 0x107e56c9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907e56c9(void)

{
  (*_DAT_182d65d28)();
  return;
}


// ----- block @ rva 0x107e5be2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907e5be2(void)

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


// ----- block @ rva 0x107eb7fa -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907eb7fa(void)

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


// ----- block @ rva 0x107eb84c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907eb84c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184494690();
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


// ----- block @ rva 0x107ebac0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ebac0(void)

{
  float in_stack_00000040;
  float in_stack_00000048;
  float fStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  fStack0000000000000050 = in_stack_00000048 + in_stack_00000040;
  uStack0000000000000058 = 0x41700000;
  (*_DAT_182d64818)();
  return;
}


// ----- block @ rva 0x107ebe0f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ebe0f(void)

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


// ----- block @ rva 0x107ecb58 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ecb58(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_182d65bb8)();
  return;
}


// ----- block @ rva 0x107ecb67 -----

void FUN_1907ecb67(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107ecd8a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ecd8a(void)

{
  FUN_190ddce00();
  (*_DAT_182d686a8)();
  return;
}


// ----- block @ rva 0x107f07c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f07c2(void)

{
  (*_DAT_182d68318)();
  return;
}


// ----- block @ rva 0x107f0893 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f0893(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d685f8)();
  return;
}


// ----- block @ rva 0x107f0b31 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f0b31(void)

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


// ----- block @ rva 0x107f0b6d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f0b6d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d68088)();
  return;
}


// ----- block @ rva 0x107f0b99 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f0b99(void)

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


// ----- block @ rva 0x107f0c2f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f0c2f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallBooleanMethodA /*0x138*/))();
  (*_DAT_182d68288)();
  return;
}


// ----- block @ rva 0x107f1095 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f1095(void)

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


// ----- block @ rva 0x107f1288 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f1288(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_182d68608)();
  return;
}


// ----- block @ rva 0x107f1789 -----

void FUN_1907f1789(void)

{
  return;
}


// ----- block @ rva 0x107f19f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f19f0(void)

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


// ----- block @ rva 0x107f1b24 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f1b24(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d68168)();
  return;
}


// ----- block @ rva 0x107f1b87 -----

void FUN_1907f1b87(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107f1ca8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f1ca8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x107f1ce4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f1ce4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d697d8)();
  return;
}


// ----- block @ rva 0x107f1d21 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f1d21(void)

{
  FUN_190dd72e0();
  (*_DAT_182d69778)();
  return;
}


// ----- block @ rva 0x107f1d49 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f1d49(void)

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


// ----- block @ rva 0x107f1d6d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f1d6d(void)

{
  FUN_190dd9df0();
  (*_DAT_182d69788)();
  return;
}


// ----- block @ rva 0x107f1da0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f1da0(void)

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


// ----- block @ rva 0x107f1dc7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f1dc7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d697c8)();
  return;
}


// ----- block @ rva 0x107f1e06 -----

void FUN_1907f1e06(void)

{
  return;
}


// ----- block @ rva 0x107f1e13 -----

void FUN_1907f1e13(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107f4607 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907f4607(void)

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


// ----- block @ rva 0x107f479e -----

void FUN_1907f479e(void)

{
  return;
}


// ----- block @ rva 0x107f54ef -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f54ef(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *unaff_R12;
  int iStack0000000000000040;
  ulonglong uStack0000000000000048;
  undefined4 uStack0000000000000050;
  
  iStack0000000000000040 = 5;
  uStack0000000000000050 = 0x10;
  uStack0000000000000048 =
       (ulonglong)
       CONCAT24((short)((ulonglong)unaff_RSI >> 0x30),(int)(char)((ulonglong)unaff_RSI >> 0x10));
  iVar1 = (**(code **)(unaff_R12 + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000040 < 0 || iVar1 <= iStack0000000000000040) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x107f59fd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f59fd(void)

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


// ----- block @ rva 0x107f603a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1907f909f(void)

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


// ----- block @ rva 0x107f7149 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f7149(void)

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


// ----- block @ rva 0x107f8140 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907f8140(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
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


// ----- block @ rva 0x107fcff5 -----

void FUN_1907fcff5(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x107fd27e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907fd27e(void)

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


// ----- block @ rva 0x107fd2d2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907fd2d2(void)

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


// ----- block @ rva 0x107fd59d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907fd59d(void)

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


// ----- block @ rva 0x107fd680 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907fd680(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  (*_DAT_182d6ba48)();
  return;
}


// ----- block @ rva 0x107fda1b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907fda1b(void)

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


// ----- block @ rva 0x107fdce8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907fdce8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_182d6bb78)();
  return;
}


// ----- block @ rva 0x107fdd22 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907fdd22(void)

{
  FUN_190dd72e0();
  (*_DAT_182d6b998)();
  return;
}


// ----- block @ rva 0x107fdd88 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907fdd88(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_182d6b918)();
  return;
}


// ----- block @ rva 0x107fddb4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907fddb4(void)

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


// ----- block @ rva 0x107fde05 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907fde05(void)

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


// ----- block @ rva 0x107fe111 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907fe111(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d6bd08)();
  return;
}


// ----- block @ rva 0x107fe145 -----

void FUN_1907fe145(void)

{
  return;
}


// ----- block @ rva 0x107fe154 -----

void FUN_1907fe154(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107fe2cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907fe2cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_182d6c1f8)();
  return;
}


// ----- block @ rva 0x107feb1c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907feb1c(void)

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


// ----- block @ rva 0x107feeab -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907feeab(void)

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


// ----- block @ rva 0x107feed2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907feed2(void)

{
  (*_DAT_182d6cd78)();
  return;
}


// ----- block @ rva 0x107ff3a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ff3a3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined2 uStack00000000000000c6;
  undefined8 uStack00000000000000c8;
  
  uStack00000000000000c6 = 0x74;
  rdtsc();
  uStack00000000000000c8 = 0x76002f006f0077;
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


// ----- block @ rva 0x107ff478 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ff478(void)

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


// ----- block @ rva 0x107ff735 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ff735(void)

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


// ----- block @ rva 0x107ffd05 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ffd05(void)

{
  (*_DAT_182d6cd78)();
  return;
}


// ----- block @ rva 0x1080025a -----

void FUN_19080025a(void)

{
  return;
}


// ----- block @ rva 0x10800c92 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190800c92(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182d6c5e8)();
  return;
}


// ----- block @ rva 0x10800dfe -----

void FUN_190800dfe(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x1080102b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190801081 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19080102b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x10802c22 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190802c5e */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190802c22(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x1080338b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19080338b(void)

{
  longlong in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x10803727 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00019080375d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190803727(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x10803765 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001908037a4 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190803765(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x10804157 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190804157(void)

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


// ----- block @ rva 0x10808eae -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190808eae(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar4 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  cVar1 = *(char *)(lVar4 + in_stack_00000060);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar4,2);
  uVar6 = (~_DAT_18347d020 + 0xe6865965) *
          ((_DAT_18347ce38 ^ 0x8f1a78eb) + (ulonglong)((uint)_DAT_18347ce38 & 0x8f1a78eb) * 2);
  uVar6 = (uVar6 | _DAT_18347ce58) + (uVar6 & _DAT_18347ce58);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18347cfc8 = func_0x000190813a50((uVar6 | 0x699c218f) + (ulonglong)((uint)uVar6 & 0x699c218f))
  ;
  uVar5 = _DAT_18347cfc8 ^ 0xe6865964;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar5;
  _DAT_18347cf90 = (_DAT_18347cf90 ^ uVar5) + 0xefbe5bee ^ 0x19b26bb4f9c272d3;
  _DAT_18347ce10 = (_DAT_18347ce10 * -0x7af843fdde347671 ^ _DAT_18347cf90) + uVar5;
  _DAT_18347d050 = _DAT_18347ce10 ^ _DAT_18347cf90;
  _DAT_18347ce38 = 0xefbe5bee;
  uVar6 = (~_DAT_18347d018 + 0x749cdca9) *
          ((_DAT_18347cd20 ^ 0x6671d99a) + (ulonglong)((uint)_DAT_18347cd20 & 0x6671d99a) * 2);
  uVar6 = (uVar6 | _DAT_18347d010) + (uVar6 & _DAT_18347d010);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18347cf80 = func_0x000190813a50((uVar6 | 0x12ed0532) + (ulonglong)((uint)uVar6 & 0x12ed0532))
  ;
  _DAT_18347ce60 = (_DAT_18347ce60 ^ _DAT_18347cf80 ^ 0xe253fabf) + 0x96cf2617 ^ 0x63abd172ee47a09b;
  _DAT_18347ce50 =
       (_DAT_18347ce50 * 0x604145c07fc16c91 ^ _DAT_18347ce60) + (_DAT_18347cf80 ^ 0xe253fabf);
  _DAT_18347d088 = _DAT_18347ce50 ^ _DAT_18347ce60;
  _DAT_18347cf78 = 0x96cf2617;
  uVar6 = (_DAT_18347cd70 ^ _DAT_182d6e3e0) + _DAT_18347cd80 + 0x84222325;
  uVar5 = (_DAT_18347cd80 ^ _UNK_182d6e3e8) + _DAT_18347cd70 + 0xef5130cc;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18347cd70 ^ _DAT_182d6e3e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18347cd80 ^ _UNK_182d6e3e8;
  _DAT_18347cd38 =
       func_0x000190813a50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18347cd70 + 0xef5130cc) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18347cd80 + 0x84222325));
  _DAT_18347cf08 = (_DAT_18347cf08 ^ _DAT_18347cd38) - 0xef5130cc ^ 0x55868c255576e37b;
  _DAT_18347cea8 = (_DAT_18347cea8 * 0x5243a129d0af760d ^ _DAT_18347cf08) + _DAT_18347cd38;
  _DAT_18347ce48 = _DAT_18347cea8 ^ _DAT_18347cf08;
  _DAT_18347d048 = _DAT_18347cf18 ^ 0xffffffff10aecf34;
  _DAT_18347cec0 = 0x10aecf34;
  uVar6 = (~_DAT_18347cf40 + 0xef5130cd) *
          ((_DAT_18347cf20 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_18347cf20 & 0x8422dc25) * 2);
  uVar6 = (uVar6 | _DAT_18347cd78) + (uVar6 & _DAT_18347cd78);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18347cfc0 = func_0x000190813a50((uVar6 | 0x6b73ece9) + (ulonglong)((uint)uVar6 & 0x6b73ece9))
  ;
  uVar5 = _DAT_18347cfc0 ^ 0xef51ffcc;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5;
  _DAT_18347d070 = _DAT_18347cfa0 ^ uVar5 ^ 0xef522fcc;
  _DAT_18347cf20 = (_DAT_18347cf20 ^ uVar5) + 0xef522fcc ^ 0xdc377aa1bc064e4e;
  _DAT_18347ce48 = (_DAT_18347ce48 * 0xedb043e7faf1ccd ^ _DAT_18347cf20) + uVar5;
  _DAT_18347ce18 = _DAT_18347ce48 ^ _DAT_18347cf20;
  _DAT_18347cd70 = 0xef522fcc;
  uVar6 = (~_DAT_18347cd20 + 0x10aecf35) *
          ((_DAT_18347cff0 ^ 0x6b700ce9) + (ulonglong)((uint)_DAT_18347cff0 & 0x6b700ce9) * 2);
  uVar6 = (uVar6 | _DAT_18347d088) + (uVar6 & _DAT_18347d088);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18347cfe0 = func_0x000190813a50((uVar6 | 0x7bdec3dd) + (ulonglong)((uint)uVar6 & 0x7bdec3dd))
  ;
  _DAT_18347cf30 = _DAT_18347cf30 & 0xfffffffffff80000;
  _DAT_18347cfa0 = _DAT_18347cf08 ^ _DAT_18347cf30 ^ 0x10000ff00;
  _DAT_18347d038 = (_DAT_18347d038 ^ _DAT_18347cf30) + 0x10000ff00 ^ 0x3b994fa30b0e2583;
  _DAT_18347cd88 = (_DAT_18347cd88 * -0x6d36bfa5b5f0702f ^ _DAT_18347d038) + _DAT_18347cf30;
  _DAT_18347cf30 = _DAT_18347cd88 ^ _DAT_18347d038;
  _DAT_18347cdd0 = 0xff00;
  _DAT_18347ce90 = func_0x000190813a50(_DAT_18347cf90 ^ 0xff3600352d008863);
  uVar6 = (_DAT_18347ce90 ^ 0xbdec60000000) & 0xffffffffe0000000;
  _DAT_18347d050 = _DAT_18347d088 ^ uVar6 ^ 0xbeac25f6;
  _DAT_18347d080 = (_DAT_18347d080 ^ uVar6) + 0xbeac25f6 ^ 0x9653e63819ff8176;
  _DAT_18347cf00 = (_DAT_18347cf00 * -0x6ecc2c0ac1cfb44d ^ _DAT_18347d080) + uVar6;
  _DAT_18347cf68 = _DAT_18347cf00 ^ _DAT_18347d080;
  _DAT_18347ce70 = 0xbeac25f6;
  uVar6 = (_DAT_18347ce18 ^ _DAT_182d6e3f0) + _DAT_18347ceb8 + 0x3a8e06d3;
  uVar5 = (_DAT_18347ceb8 ^ _UNK_182d6e3f8) + _DAT_18347ce18 + 0x4154d90a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18347ce18 ^ _DAT_182d6e3f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18347ceb8 ^ _UNK_182d6e3f8;
  _DAT_18347ce90 =
       func_0x000190813a50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18347ce18 + 0x4154d90a) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18347ceb8 + 0x3a8e06d3));
  uVar6 = _DAT_18347ce90 << 0x1b | _DAT_18347ce90 >> 0x25;
  _DAT_18347d018 = _DAT_18347cd78 ^ uVar6 ^ 0x10000ff00;
  _DAT_18347cff8 = (_DAT_18347cff8 ^ uVar6) + 0x10000ff00 ^ 0xba902cc08e6a4e6;
  _DAT_18347d038 = (_DAT_18347d038 * 0x38ab0c49c55cfeab ^ _DAT_18347cff8) + uVar6;
  _DAT_18347ce70 = _DAT_18347d038 ^ _DAT_18347cff8;
  _DAT_18347cd98 = 0xff00;
  _DAT_18347d0c0 = func_0x000190813a50(_DAT_18347cd60 ^ 0x31ff73d4003277);
  uVar5 = _UNK_182d6e408;
  uVar6 = _DAT_182d6e400;
  uVar7 = (ulonglong)(((uint)_DAT_18347d0c0 ^ 0x6a8e498c) & 0xefbe5bee);
  _DAT_18347ceb8 = _DAT_18347cf00 ^ uVar7 ^ 0x1868d8205;
  _DAT_18347ce50 = (ulonglong)(&UNK_1868d8205 + (_DAT_18347ce50 ^ uVar7)) ^ 0x6c1ba359470bc2db;
  _DAT_18347ce20 = (_DAT_18347ce20 * -0x35bf1ffdcc8114b3 ^ _DAT_18347ce50) + uVar7;
  _DAT_18347d078 = _DAT_18347ce20 ^ _DAT_18347ce50;
  _DAT_18347cdf0 = 0x868d8205;
  uVar7 = (_DAT_18347d090 ^ _DAT_182d6e400) + _DAT_18347cdc8 + 0x6b9c78cb;
  uVar8 = (_DAT_18347cdc8 ^ _UNK_182d6e408) + _DAT_18347d090 + 0x96cf2617;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18347d090 ^ _DAT_182d6e400;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347cdc8 ^ _UNK_182d6e408;
  _DAT_18347cd98 =
       func_0x000190813a50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18347d090 + 0x96cf2617) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18347cdc8 + 0x6b9c78cb));
  uVar7 = _DAT_18347cd98 - (_DAT_18347cd98 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar2 + (uint)bVar2 ^ _DAT_18347cd98;
  uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8;
  _DAT_18347d070 = (_DAT_18347d070 ^ uVar8) + 0x79717df9 ^ 0x81d948be41b74ea4;
  _DAT_18347ce18 = (_DAT_18347ce18 * 0x218bfe1f45174b1 ^ _DAT_18347d070) + uVar8;
  _DAT_18347d058 = _DAT_18347ce18 ^ _DAT_18347d070;
  _DAT_18347cfa8 = 0x79717df9;
  uVar7 = (_DAT_18347cea0 ^ uVar6) + _DAT_18347ce20 + 0x6b9c78cb;
  uVar8 = (_DAT_18347ce20 ^ uVar5) + _DAT_18347cea0 + 0x96cf2617;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18347cea0 ^ uVar6;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347ce20 ^ uVar5;
  _DAT_18347cd80 =
       func_0x000190813a50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18347cea0 + 0x96cf2617) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18347ce20 + 0x6b9c78cb));
  uVar6 = (_DAT_18347cd80 ^ 0x8d3b887595319660) & 0xffffffffffffffe0;
  _DAT_18347d048 = (_DAT_18347d048 ^ uVar6) + 0x868e0206 ^ 0x69bf3147c8dca001;
  _DAT_18347cdd8 = (_DAT_18347cdd8 * 0x23fdec6adf5c3e73 ^ _DAT_18347d048) + uVar6;
  _DAT_18347cd00 = _DAT_18347cdd8 ^ _DAT_18347d048;
  _DAT_18347ce30 = 0x868e0206;
  uVar6 = (_DAT_18347d088 ^ 0x8422dc25) + _DAT_18347cf48 + 0x8422dc25;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18347d088 ^ 0x8422dc25;
  uVar5 = ((_DAT_18347cf48 + _DAT_18347d088) * 0x2000 | _DAT_18347cf48 + _DAT_18347d088 >> 0x33) ^
          _DAT_18347cf48;
  _DAT_18347cff0 =
       func_0x000190813a50((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_18347d088 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18347cf48 + 0x8422dc25));
  uVar6 = _DAT_18347cff0 ^ 0xff00;
  _DAT_18347cea8 = _DAT_18347cfa0 ^ uVar6 ^ 0xff00;
  _DAT_18347ce78 = (_DAT_18347ce78 ^ uVar6) + 0xff00 ^ 0x3db602f6688b2bfb;
  _DAT_18347d088 = (_DAT_18347d088 * -0x56360e14204e650f ^ _DAT_18347ce78) + uVar6;
  _DAT_18347ce80 = _DAT_18347d088 ^ _DAT_18347ce78;
  _DAT_18347cd80 = 0xff00;
  uVar6 = (_DAT_18347d070 ^ _DAT_182d6e410) + _DAT_18347cea8 + 0x6b9c78cb;
  uVar5 = (_DAT_18347cea8 ^ _UNK_182d6e418) + _DAT_18347d070 + 0xffffffff;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18347d070 ^ _DAT_182d6e410;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18347cea8 ^ _UNK_182d6e418;
  _DAT_18347cdb0 =
       func_0x000190813a50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18347d070 + 0xffffffff) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18347cea8 + 0x6b9c78cb));
  uVar6 = _DAT_18347cdb0 << 0x22 | _DAT_18347cdb0 >> 0x1e;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar6;
  _DAT_18347ced0 = (_DAT_18347ced0 ^ uVar6) + 0x1041a411 ^ 0xfefaff56dc58c3ab;
  _DAT_18347ce00 = (_DAT_18347ce00 * 0x30e4798154ff9465 ^ _DAT_18347ced0) + uVar6;
  _DAT_18347cff0 = _DAT_18347ce00 ^ _DAT_18347ced0;
  _DAT_18347d018 = 0x1041a411;
  uVar6 = (_DAT_18347cff8 ^ _DAT_182d6e420) + _DAT_18347cfb8 + 0x6b9c78cb;
  uVar5 = (_DAT_18347cfb8 ^ _UNK_182d6e428) + _DAT_18347cff8 + 0x1041a411;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18347cff8 ^ _DAT_182d6e420;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18347cfb8 ^ _UNK_182d6e428;
  _DAT_18347cdd8 =
       func_0x000190813a50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18347cff8 + 0x1041a411) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18347cfb8 + 0x6b9c78cb));
  uVar6 = (_DAT_18347cdd8 ^ 0xffffffff) * -0xcea484e656b83db;
  _DAT_18347ce20 = _DAT_18347ce20 ^ uVar6 ^ 0xe9303a109eb67bb1;
  _DAT_18347d098 = (_DAT_18347d098 * -0x6c0331dd011c92f ^ _DAT_18347ce20) + uVar6;
  _DAT_18347cd30 = 0;
  uVar6 = ((_DAT_18347cd68 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_18347cd68 & 0x8422dc25) * 2) *
          -_DAT_18347ced8;
  uVar6 = (uVar6 | _DAT_18347ce50) + (uVar6 & _DAT_18347ce50);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18347ce10 = func_0x000190813a50((uVar6 | 0x8422dc25) + (ulonglong)((uint)uVar6 & 0x8422dc25))
  ;
  uVar6 = (_DAT_18347ce10 & 0x7fffffffffffffff) * -0x50da35ae64d52807 & 0xfffffffffffff;
  _DAT_18347d058 = _DAT_18347ce18 ^ uVar6 ^ 0xff00;
  _DAT_18347ce40 = (_DAT_18347ce40 ^ uVar6) + 0xff00 ^ 0x5a2a48b895c76e66;
  _DAT_18347cd78 = (_DAT_18347cd78 * -0x6d5a487310317555 ^ _DAT_18347ce40) + uVar6;
  _DAT_18347cd38 = _DAT_18347cd78 ^ _DAT_18347ce40;
  _DAT_18347d070 = 0xff00;
  uVar6 = (~_DAT_18347cde8 + 0xb385bcf) *
          ((_DAT_18347d0e0 ^ 0x8f1a78eb) + (ulonglong)((uint)_DAT_18347d0e0 & 0x8f1a78eb) * 2);
  uVar6 = (uVar6 | _DAT_18347d048) + (uVar6 & _DAT_18347d048);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18347d0f0 = func_0x000190813a50((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  _DAT_18347d000 = _DAT_18347d000 ^ _DAT_18347d0f0 ^ 0xb385bce ^ 0xd9dff67ebfd333b5;
  _DAT_18347cee0 =
       (_DAT_18347cee0 * -0x556213c1c061e9b5 ^ _DAT_18347d000) + (_DAT_18347d0f0 ^ 0xb385bce);
  _DAT_18347d030 = _DAT_18347cee0 ^ _DAT_18347d000;
  _DAT_18347ce48 = 0;
  uVar7 = (ulonglong)(uint)((int)cVar1 << 8);
  uVar6 = uVar7 ^ 0x84222325 ^ _DAT_18347d000;
  lVar4 = (uVar7 ^ 0x84222325) + _DAT_18347ce50;
  uVar5 = uVar6 + lVar4;
  uVar8 = (_DAT_18347ce50 ^ 0xff00) + _DAT_18347d000 + 0xff00;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347ce50 ^ 0xff00;
  _DAT_18347ce88 =
       func_0x000190813a50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18347d000 + 0xff00) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar4);
  uVar5 = uVar7 & 0xffff;
  _DAT_18347cf28 = (_DAT_18347cf28 ^ uVar7 ^ _DAT_18347ce88) + uVar5 ^ 0x722a9d0c46d8728b;
  _DAT_18347cf80 = (_DAT_18347cf80 * -0xbe27366a2648ec9 ^ _DAT_18347cf28) + (uVar7 ^ _DAT_18347ce88)
  ;
  _DAT_18347d058 = _DAT_18347cf80 ^ _DAT_18347cf28;
  uVar6 = in_stack_00000050 ^ 0x84222325 ^ _DAT_18347d040;
  lVar4 = (in_stack_00000050 ^ 0x84222325) + _DAT_18347d0c0;
  uVar7 = uVar6 + lVar4;
  uVar8 = (uVar5 ^ _DAT_18347d0c0) + _DAT_18347d040 + uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5 ^ _DAT_18347d0c0;
  _DAT_18347d0b0 = uVar5;
  _DAT_18347d028 =
       func_0x000190813a50((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18347d040 + uVar5) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar4);
  uVar6 = in_stack_00000050 ^ uVar5 ^ _DAT_18347d028;
  _DAT_18347cd18 = in_stack_00000050 | uVar5;
  _DAT_18347cdf8 = (_DAT_18347cdf8 ^ uVar6) + _DAT_18347cd18 ^ 0xe69dbe92f6c75282;
  _DAT_18347ce00 = (_DAT_18347ce00 * -0x336ebc2e94cbc7b3 ^ _DAT_18347cdf8) + uVar6;
  _DAT_18347cd98 = _DAT_18347ce00 ^ _DAT_18347cdf8;
  iVar3 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar3 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x1080bada -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19080bada(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
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


// ----- block @ rva 0x1080baf7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19080baf7(void)

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


// ----- block @ rva 0x10813229 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190813229(void)

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


// ----- block @ rva 0x10813590 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190813590(void)

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


// ----- block @ rva 0x10813873 -----

void FUN_190813873(void)

{
  return;
}

