// ===== STITCHED CORPUS: sixtwo.fE =====
// handlers: 7  continuation blocks: 67  unresolved table targets: 0
// tables not in tables.json: ['0x19fc8c0', '0x19fc8c8', '0x19fc8d0', '0x19fc8d8', '0x19fc8e0', '0x19fc8e8', '0x19fc8f0', '0x19fc8f8', '0x19fc900', '0x19fc908', '0x19fc910', '0x19fc918', '0x19fc920', '0x19fc928', '0x19fc930', '0x19fc938', '0x19fc940', '0x19fc948', '0x19fc950', '0x19fc958']

// ===== Lsixtwo/fE; _498a2541682d4f0c47923b0484cb8662 ()V (handler @ image 18aee1a10, runtime 6ffff2af1a10) =====

void FUN_18aee1a10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aee1af8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819fe0b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fE; aSN (Lsixtwo/gz;)V (handler @ image 18aec8da0, runtime 6ffff2ad8da0) =====

void FUN_18aec8da0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1432e,0x329)
      /* POOL[0x1432e,0x329]: vEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | JDHpD | vDVkv | zeyXv | aSQ | sixtwo/fF | foCtx | aSX | VImHE | Nlyhu | VtwAF | QcPEg | gBIsx | LQzFK | nWCXe | HWaak | vQdJp | MftPL | cdAZQ | dsIVg | aSZ | dsyYm | RObGI | VvKfB | KkvzL | aSY | pPuZs | YpcbG | hDdWr | vfhdM | cHk | (Ljava/util/function/Predicate;)Lsixtwo/ox; | aIT | aTc | sXFbg | bxM | hdxUq | rIJAy | eImKU | JEhiJ | sixtwo/fG | HrnPx | QYvrB | deLoo | jwWNp | kiwwU | UXeQf | aTn | AqVee | XOUKT | xHSEs | RJFVs | XUvTV | abWbk | PWSXA | YNgob | VqvZM | DyNeX | SjiqK | FpKBj | aTp |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aec8e6d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819f7380 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fE; aSO ()Ljava/lang/Boolean; (handler @ image 18aed26a0, runtime 6ffff2ae26a0) =====

void FUN_18aed26a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018aed26c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819fa820 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fE; aSP (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18aed2af0, runtime 6ffff2ae2af0) =====

undefined8 FUN_18aed2af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/fE; aSQ (IJ)I (handler @ image 18aed2b80, runtime 6ffff2ae2b80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed2b80(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (uRam000000018327c7e0 ^ _UNK_1819fc8c0) + uRam000000018327ca80 + 0x84222325;
  uVar7 = (uRam000000018327ca80 ^ _UNK_1819fc8c8) + uRam000000018327c7e0 + 0xad8766d48dcf2b98;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327c7e0 ^ _UNK_1819fc8c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018327ca80 ^ _UNK_1819fc8c8;
  uVar3 = (ulonglong)param_3;
  uRam000000018327cac8 =
       func_0x00018aeddc60((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018327c7e0 + 0xad8766d48dcf2b98) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327ca80 + 0x84222325));
  uRam000000018327c7d0 =
       (uRam000000018327c7d0 ^ uRam000000018327cac8 * -0xe8cbdac07d058b9) + 0x5278992b7230d468 ^
       0x984f4ae0d6ab9a8a;
  uRam000000018327cce0 =
       (uRam000000018327cce0 * 0x3d3d56b69245794d ^ uRam000000018327c7d0) +
       uRam000000018327cac8 * -0xe8cbdac07d058b9;
  uRam000000018327c9d8 = uRam000000018327cce0 ^ uRam000000018327c7d0;
  uRam000000018327cd10 = 0x5278992b7230d468;
  uVar6 = (uRam000000018327cef8 ^ _UNK_1819fc8d0) + uRam000000018327c9f0 + 0xad8766d409ed88b2;
  uVar7 = (uRam000000018327c9f0 ^ _UNK_1819fc8d8) + uRam000000018327cef8 + 0x5278992b7230d468;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327cef8 ^ _UNK_1819fc8d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018327c9f0 ^ _UNK_1819fc8d8;
  uRam000000018327c740 =
       func_0x00018aeddc60((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018327cef8 + 0x5278992b7230d468) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327c9f0 + 0xad8766d409ed88b2));
  uVar6 = uRam000000018327c740 ^ 0x5278992b7230d468;
  uRam000000018327c798 = uRam000000018327c950 ^ uVar6 ^ 0x7fff;
  uRam000000018327cc20 = (uRam000000018327cc20 ^ uVar6) + 0x7fff ^ 0x92628a4c3927057c;
  uRam000000018327c9e0 = (uRam000000018327c9e0 * -0x5e059fa63cb2f18b ^ uRam000000018327cc20) + uVar6
  ;
  uRam000000018327cdc0 = uRam000000018327c9e0 ^ uRam000000018327cc20;
  uRam000000018327c830 = uRam000000018327ce18 ^ 0x7fff;
  uRam000000018327cdf8 = 0x7fff;
  uVar6 = (uRam000000018327c940 ^ _UNK_1819fc8e0) + uRam000000018327ce40 + 0x84222325;
  uVar7 = (uRam000000018327ce40 ^ _UNK_1819fc8e8) + uRam000000018327c940 + 0xcdfd232e5ae04838;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327c940 ^ _UNK_1819fc8e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018327ce40 ^ _UNK_1819fc8e8;
  uRam000000018327ca18 =
       func_0x00018aeddc60((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018327c940 + 0xcdfd232e5ae04838) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327ce40 + 0x84222325));
  uRam000000018327cc40 =
       (uRam000000018327cc40 ^ uRam000000018327ca18 * 0x4e9e57503d73ef8d) + 0x3202dcd1a51fb7c8 ^
       0xfff5ce636437908c;
  uRam000000018327cd20 =
       (uRam000000018327cd20 * -0x12c3d7c9bba37e07 ^ uRam000000018327cc40) +
       uRam000000018327ca18 * 0x4e9e57503d73ef8d;
  uRam000000018327cd70 = uRam000000018327cd20 ^ uRam000000018327cc40;
  uRam000000018327c8d0 = 0x3202dcd1a51fb7c8;
  uVar6 = (~uRam000000018327cc48 + 0xcdfd232e5ae04839) *
          ((uRam000000018327cb28 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327cb28 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam000000018327ce50) + (uVar6 & uRam000000018327ce50);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018327cde0 =
       func_0x00018aeddc60((uVar6 | 0xcdfd232edec214e2) + (uVar6 & 0xcdfd232edec214e2));
  uVar6 = uRam000000018327cde0 ^ 0x7fff;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar6;
  uRam000000018327ceb0 = (uRam000000018327ceb0 ^ uVar6) + 0xcdfd232e5ae0c837 ^ 0xbdd4ed52c6bd3ff4;
  uRam000000018327cb40 = (uRam000000018327cb40 * 0x3da6a38c90a01d4f ^ uRam000000018327ceb0) + uVar6;
  uRam000000018327c9a8 = uRam000000018327cb40 ^ uRam000000018327ceb0;
  uRam000000018327cbe0 = 0xcdfd232e5ae0c837;
  uVar6 = (~uRam000000018327ca18 + 0x3202dcd1a51fb7c9) *
          ((uRam000000018327ca88 ^ 0xcdfd232edec2eb12) +
          (uRam000000018327ca88 & 0x4dfd232edec2eb12) * 2);
  uVar6 = (uVar6 | uRam000000018327ce50) + (uVar6 & uRam000000018327ce50);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam000000018327cb60 =
       func_0x00018aeddc60((uVar6 | 0xffffffff7bdd5cda) + (uVar6 & 0xffffffff7bdd5cda));
  uVar6 = lRam000000018327cb60 * -0x765f974eaa69a7e9;
  uRam000000018327cef8 = uRam000000018327c850 ^ uVar6 ^ 0x7fff;
  uRam000000018327c8b0 = (uRam000000018327c8b0 ^ uVar6) + 0x7fff ^ 0xa29740b934f5e3f;
  uRam000000018327ca48 = (uRam000000018327ca48 * -0x5ed174cc065afc53 ^ uRam000000018327c8b0) + uVar6
  ;
  uRam000000018327cea8 = uRam000000018327ca48 ^ uRam000000018327c8b0;
  uRam000000018327c7f8 = 0x7fff;
  uVar6 = (uRam000000018327cae0 ^ _UNK_1819fc8f0) + uRam000000018327cc30 + 0xf7f9fefe2bddbad0;
  uVar7 = (uRam000000018327cc30 ^ _UNK_1819fc8f8) + uRam000000018327cae0 + 0x9711c08b5e6e0517;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327cae0 ^ _UNK_1819fc8f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018327cc30 ^ _UNK_1819fc8f8;
  uRam000000018327ce38 =
       func_0x00018aeddc60((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018327cae0 + 0x9711c08b5e6e0517) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327cc30 + 0xf7f9fefe2bddbad0));
  uVar6 = uRam000000018327ce38 >> 1 | uRam000000018327ce38;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018327ce38) * 0x788749a30985e433;
  uRam000000018327ce78 = (uRam000000018327ce78 ^ uVar6) + 0x60e83e75f1919ce2 ^ 0x81d70ea9529c85a8;
  uRam000000018327ca80 = (uRam000000018327ca80 * 0x54ef7960a56e9419 ^ uRam000000018327ce78) + uVar6;
  uRam000000018327c880 = uRam000000018327ca80 ^ uRam000000018327ce78;
  uRam000000018327ccb8 = 0x60e83e75f1919ce2;
  uVar6 = (~uRam000000018327c7d0 + 0x2e2381141cdc022b) *
          ((uRam000000018327cbb8 ^ 0x60e83e7575b3bfc7) +
          (uRam000000018327cbb8 & 0x60e83e7575b3bfc7) * 2);
  uVar6 = (uVar6 | uRam000000018327cd38) + (uVar6 & uRam000000018327cd38);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018327ca88 =
       func_0x00018aeddc60((uVar6 | 0x4ecbbf61696fbded) + (uVar6 & 0x4ecbbf61696fbded));
  uVar6 = ~uRam000000018327ca88 & 0x60e83e7580000000 ^ 0x60e83e75f1919ce2;
  uRam000000018327c7a8 = uRam000000018327ca70 ^ uVar6 ^ 0x8f0bbf8a0e6d9f0c;
  uRam000000018327cd48 = (uRam000000018327cd48 ^ uVar6) + 0x8f0bbf8a0e6d9f0c ^ 0xf3356bb98c080081;
  uRam000000018327cb88 = (uRam000000018327cb88 * -0xf612721d4182f9f ^ uRam000000018327cd48) + uVar6;
  uRam000000018327cc48 = uRam000000018327cb88 ^ uRam000000018327cd48;
  uRam000000018327c950 = -0x70f44075f19260f4;
  uRam000000018327ca78 = func_0x00018aeddc60(lRam000000018327ce20 + 0x20ff8423001dffU ^ 0x7c);
  uRam000000018327ccf0 = uRam000000018327ca78 ^ 0x355b8d462307e890;
  uRam000000018327c778 = uRam000000018327c778 ^ uRam000000018327ccf0 ^ 0x4c439b42aafd856e;
  uRam000000018327cb58 =
       (uRam000000018327cb58 * -0x3c59756bb4da446b ^ uRam000000018327c778) + uRam000000018327ccf0;
  uRam000000018327ca20 = uRam000000018327cb58 ^ uRam000000018327c778;
  uRam000000018327cb70 = 0;
  uVar6 = ((uRam000000018327c728 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327c728 & 0x84225cda) * 2) * -lRam000000018327c780;
  uVar6 = (uVar6 | uRam000000018327c970) + (uVar6 & uRam000000018327c970);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018aeddc60((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uRam000000018327c868 = uVar6 & 0x7ffffffffff ^ 0x7fff;
  uRam000000018327c908 = uRam000000018327cc10 ^ uRam000000018327c868 ^ 0x7fff;
  uRam000000018327c7a0 = (uRam000000018327c7a0 ^ uRam000000018327c868) + 0x7fff ^ 0x2cc6fe86c63e4818
  ;
  uRam000000018327c868 = (uVar6 * -0x55de127fea856711 ^ uRam000000018327c7a0) + uRam000000018327c868
  ;
  uRam000000018327cd70 = uRam000000018327c868 ^ uRam000000018327c7a0;
  uRam000000018327cd30 = 0x7fff;
  uRam000000018327c760 = func_0x00018aeddc60(uRam000000018327c890 ^ 0x144fdcbd6ff2281);
  uVar6 = ((uRam000000018327c760 ^ 0x80601015000660b) & 0x7fffffffffffffff) * 0x1911c7ac460f45af;
  uRam000000018327cd98 = (uRam000000018327cd98 ^ uVar6) + 0x80601015000660a ^ 0xb5a3efada858e23d;
  uRam000000018327ce50 = (uRam000000018327ce50 * -0x8c48fff4ac4a0ff ^ uRam000000018327cd98) + uVar6;
  uRam000000018327c730 = uRam000000018327ce50 ^ uRam000000018327cd98;
  uRam000000018327cda0 = 0x80601015000660a;
  uRam000000018327cec0 = func_0x00018aeddc60(uRam000000018327cd18 + 0xffd3ff84360021ff ^ 0xb8);
  uVar6 = uRam000000018327cec0 << 0x11 | uRam000000018327cec0 >> 0x2f;
  uRam000000018327c798 = uRam000000018327ca08 ^ uVar6 ^ 0x7fff;
  uRam000000018327cc98 = (uRam000000018327cc98 ^ uVar6) + 0x7fff ^ 0xfb9ee99f162dc174;
  uRam000000018327ce28 = (uRam000000018327ce28 * 0x478c7c4fedbd993b ^ uRam000000018327cc98) + uVar6;
  uRam000000018327cc38 = uRam000000018327ce28 ^ uRam000000018327cc98;
  uRam000000018327cec8 = 0x7fff;
  uVar6 = (uRam000000018327ca00 ^ _UNK_1819fc900) + uRam000000018327c990 + 0x67b1fade231dbae0;
  uVar7 = (uRam000000018327c990 ^ _UNK_1819fc908) + uRam000000018327ca00 + 0x67b1fadea73f99c5;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327ca00 ^ _UNK_1819fc900;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018327c990 ^ _UNK_1819fc908;
  uRam000000018327c8d8 =
       func_0x00018aeddc60((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018327ca00 + 0x67b1fadea73f99c5) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327c990 + 0x67b1fade231dbae0));
  uRam000000018327cbb8 =
       uRam000000018327cbb8 ^ uRam000000018327c8d8 & 0x3ffffffffffffff ^ 0xad12676c6c3dbadb;
  uRam000000018327c718 =
       (uRam000000018327c718 * -0x5cb508e3f4e11b5 ^ uRam000000018327cbb8) +
       (uRam000000018327c8d8 & 0x3ffffffffffffff);
  uRam000000018327ca90 = uRam000000018327c718 ^ uRam000000018327cbb8;
  uRam000000018327ca30 = 0;
  uVar6 = (~uRam000000018327ce70 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam000000018327cd70) +
          ((param_4 ^ 0x84222325) & uRam000000018327cd70) * 2);
  uVar6 = (uVar6 | uRam000000018327cd80) + (uVar6 & uRam000000018327cd80);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018327ceb0 =
       func_0x00018aeddc60((param_4 ^ 0x84225cda | uVar6) + (uVar6 & (param_4 ^ 0x84225cda)));
  uVar6 = (uRam000000018327ceb0 ^ 0x7fff) & 0x7fffffffffffffff;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar2;
  uRam000000018327cb20 = (uRam000000018327cb20 ^ uVar6) + uVar7 ^ 0x212e9b143935f9cc;
  uRam000000018327c9d0 = (uRam000000018327c9d0 * -0x19248b757fd73ef5 ^ uRam000000018327cb20) + uVar6
  ;
  uRam000000018327c8c0 = uRam000000018327c9d0 ^ uRam000000018327cb20;
  uVar4 = uVar7 ^ 0x84222325;
  uVar6 = ((uRam000000018327ce90 ^ uVar4) +
          (ulonglong)((uint)uRam000000018327ce90 & (uint)uVar4) * 2) *
          (uVar3 - lRam000000018327c9b8);
  uVar6 = (uVar6 | uVar7) + (uVar6 & uVar7);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018327cc48 = uVar7;
  uRam000000018327cb90 =
       func_0x00018aeddc60((uVar4 ^ uVar3 | uVar6) +
                           (ulonglong)((uint)(uVar4 ^ uVar3) & (uint)uVar6));
  uVar7 = (uVar7 + uVar3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam000000018327ced0 =
       (uRam000000018327ced0 ^ uRam000000018327cb90 & 0xffffffffffe00000) + uVar7 ^
       0x26ef4cc9513e17ac;
  uRam000000018327cb08 =
       (uRam000000018327cb08 * 0x323209b8c55ba393 ^ uRam000000018327ced0) +
       (uRam000000018327cb90 & 0xffffffffffe00000);
  uRam000000018327c9f0 = uRam000000018327cb08 ^ uRam000000018327ced0;
  uVar3 = uVar7 & 0xffffffff;
  uRam000000018327cab8 = uVar3;
  uRam000000018327c760 = func_0x00018aeddc60(uRam000000018327cd38 + 0xb6004898ff3bff ^ 0x8b);
  uVar6 = ((uRam000000018327c760 & 0x1fffffffff) << 0x1a | uRam000000018327c760 >> 0x26) ^
          0xb018b8b4;
  uRam000000018327cc78 = (uRam000000018327cc78 ^ uVar6) + 0xfcfef9bc ^ 0x5d30af90605ddbaf;
  uRam000000018327c908 = (uRam000000018327c908 * 0x1091ae1e4532b99b ^ uRam000000018327cc78) + uVar6;
  uRam000000018327c9d0 = uRam000000018327c908 ^ uRam000000018327cc78;
  uRam000000018327ced0 = 0xfcfef9bc;
  uRam000000018327ca68 = func_0x00018aeddc60(uRam000000018327ca90 + 0x3e00215c006aff ^ 0x42);
  uVar6 = (ulonglong)(~(uint)uRam000000018327ca68 & 0xe7067fab) * 0x25cf44cc0a4fed13;
  uRam000000018327cef0 = (uRam000000018327cef0 ^ uVar6) + 0xbbb5e559 ^ 0x29c2edaef3808f15;
  uRam000000018327c958 = (uRam000000018327c958 * -0x1aa8095100f3f715 ^ uRam000000018327cef0) + uVar6
  ;
  uRam000000018327cb00 = uRam000000018327c958 ^ uRam000000018327cef0;
  uRam000000018327ce68 = 0xbbb5e559;
  uVar6 = (~uRam000000018327c978 + 0x65bc2a01) *
          ((uRam000000018327cae0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018327cae0 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam000000018327c898) + (uVar6 & uRam000000018327c898);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018327c9e8 =
       func_0x00018aeddc60((uVar6 | 0xe19e0925) + (ulonglong)((uint)uVar6 & 0xe19e0925));
  uVar6 = uRam000000018327c9e8 << 0xd | uRam000000018327c9e8 >> 0x33;
  uRam000000018327ce98 = (uRam000000018327ce98 ^ uVar6) - 0x65bc2a00 ^ 0xee2bb93d7954dcee;
  uRam000000018327cb28 = (uRam000000018327cb28 * -0x64269a4ca06c22af ^ uRam000000018327ce98) + uVar6
  ;
  uRam000000018327c9a0 = uRam000000018327cb28 ^ uRam000000018327ce98;
  uRam000000018327ca08 = 0x9a43d600;
  uRam000000018327cd20 = func_0x00018aeddc60(uRam000000018327cd18 ^ 0xffa7ff6068008500);
  uRam000000018327cbd8 = uRam000000018327cd60 ^ uRam000000018327ce50 ^ 0x65bc9bcd;
  uRam000000018327cb90 =
       (uRam000000018327cb90 ^ uRam000000018327ce50) + 0x65bc9bcd ^ 0x1a108aa40342f791;
  uRam000000018327cb70 =
       (uRam000000018327cb70 * 0x5a7b08d38456c947 ^ uRam000000018327cb90) + uRam000000018327ce50;
  uRam000000018327c998 = uRam000000018327cb70 ^ uRam000000018327cb90;
  uRam000000018327ca68 = 0x65bc9bcd;
  uVar6 = (uRam000000018327ccc0 ^ _UNK_1819fc910) + uRam000000018327cdf0 + 0xe19eb8e8;
  uVar4 = (uRam000000018327cdf0 ^ _UNK_1819fc918) + uRam000000018327ccc0 + 0x9a43d600;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327ccc0 ^ _UNK_1819fc910;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018327cdf0 ^ _UNK_1819fc918;
  uRam000000018327c8c8 =
       func_0x00018aeddc60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018327ccc0 + 0x9a43d600) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327cdf0 + 0xe19eb8e8));
  uRam000000018327cc60 = uRam000000018327c908 ^ uRam000000018327cd18 ^ 0x1000071cd;
  uRam000000018327c760 =
       (uRam000000018327c760 ^ uRam000000018327cd18) + 0x1000071cd ^ 0x86ae6fe8c1d9156;
  uRam000000018327cba0 =
       (uRam000000018327cba0 * 0x60e6054b14ae4589 ^ uRam000000018327c760) + uRam000000018327cd18;
  uRam000000018327cb80 = uRam000000018327cba0 ^ uRam000000018327c760;
  uRam000000018327c938 = 0x71cd;
  uVar6 = (uRam000000018327c9f8 ^ _UNK_1819fc920) + uRam000000018327ced8 + 0x84222325;
  uVar4 = (uRam000000018327ced8 ^ _UNK_1819fc928) + uRam000000018327c9f8 + 0x2d07cd73;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327c9f8 ^ _UNK_1819fc920;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018327ced8 ^ _UNK_1819fc928;
  uRam000000018327ccc0 =
       func_0x00018aeddc60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018327c9f8 + 0x2d07cd73) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327ced8 + 0x84222325));
  uVar6 = uRam000000018327ccc0 - (uRam000000018327ccc0 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018327ccc0;
  uRam000000018327cbd8 = (uRam000000018327cbd8 ^ uVar6) - 0x2d07cd73 ^ 0x74edf591e0e3e35;
  uRam000000018327c848 = (uRam000000018327c848 * 0x414b421ed9de2171 ^ uRam000000018327cbd8) + uVar6;
  uRam000000018327c8b8 = uRam000000018327c848 ^ uRam000000018327cbd8;
  uRam000000018327c938 = 0xd2f8328d;
  uVar6 = (uRam000000018327cd80 ^ _UNK_1819fc930) + uRam000000018327c8a8 + 0x842252e8;
  uVar4 = (uRam000000018327c8a8 ^ _UNK_1819fc938) + uRam000000018327cd80 + 0x5ea77088;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327cd80 ^ _UNK_1819fc930;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018327c8a8 ^ _UNK_1819fc938;
  uRam000000018327ca68 =
       func_0x00018aeddc60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018327cd80 + 0x5ea77088) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327c8a8 + 0x842252e8));
  uVar6 = uRam000000018327ca68 ^ 0x71cd;
  uRam000000018327ce28 = uRam000000018327cc00 ^ uVar6 ^ 0x5ea7e255;
  uRam000000018327c8f0 = (uRam000000018327c8f0 ^ uVar6) + 0x5ea7e255 ^ 0xda80d8e4861efe6b;
  uRam000000018327cd70 = (uRam000000018327cd70 * -0x1e963b2a5a2d65bb ^ uRam000000018327c8f0) + uVar6
  ;
  uRam000000018327c7e0 = uRam000000018327cd70 ^ uRam000000018327c8f0;
  uRam000000018327cca0 = 0x5ea7e255;
  uRam000000018327c9a8 = func_0x00018aeddc60(lRam000000018327cb50 + 0xffd6ff3c400018ffU ^ 0x5f);
  uRam000000018327cda0 =
       (uRam000000018327cda0 ^ uRam000000018327c9a8) + 0x474b1ce5 ^ 0xbd9bbe999a508dd8;
  uRam000000018327c950 =
       (uRam000000018327c950 * -0x2c1bb64d14d00135 ^ uRam000000018327cda0) + uRam000000018327c9a8;
  uRam000000018327c978 = uRam000000018327c950 ^ uRam000000018327cda0;
  uRam000000018327cd00 = 0x474b1ce5;
  uVar6 = (uRam000000018327cef8 ^ _UNK_1819fc940) + uRam000000018327ca48 + 0xc3693fc0;
  uVar4 = (uRam000000018327ca48 ^ _UNK_1819fc948) + uRam000000018327cef8 + 0x7169c230;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327cef8 ^ _UNK_1819fc940;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018327ca48 ^ _UNK_1819fc948;
  uRam000000018327ccd0 =
       func_0x00018aeddc60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018327cef8 + 0x7169c230) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327ca48 + 0xc3693fc0));
  uRam000000018327c898 = uRam000000018327c950 ^ uRam000000018327c928 ^ 0xb8b4df15;
  uRam000000018327cd08 =
       (uRam000000018327cd08 ^ uRam000000018327c928) + 0xb8b4df15 ^ 0x1be6cb472d8988b2;
  uRam000000018327cc48 =
       (uRam000000018327cc48 * 0x259cf5bd5e06b09b ^ uRam000000018327cd08) + uRam000000018327c928;
  uRam000000018327cd58 = uRam000000018327cc48 ^ uRam000000018327cd08;
  uRam000000018327ceb0 = 0xb8b4df15;
  uVar6 = (uRam000000018327c798 ^ _UNK_1819fc950) + uRam000000018327cb40 + 0x3c96fc30;
  uVar4 = (uRam000000018327cb40 ^ _UNK_1819fc958) + uRam000000018327c798 + 0xb8b4df15;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327c798 ^ _UNK_1819fc950;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018327cb40 ^ _UNK_1819fc958;
  uRam000000018327cc90 =
       func_0x00018aeddc60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018327c798 + 0xb8b4df15) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327cb40 + 0x3c96fc30));
  uRam000000018327c8b0 = uRam000000018327cc90 & 0xfffffffffffffff0;
  uRam000000018327ce30 = uRam000000018327ce30 ^ uRam000000018327c8b0 ^ 0x4f69fcad21b1f1b9;
  uRam000000018327cd20 =
       (uRam000000018327cd20 * 0x7a58cad86211966d ^ uRam000000018327ce30) + uRam000000018327c8b0;
  uRam000000018327ca50 = uRam000000018327cd20 ^ uRam000000018327ce30;
  uRam000000018327cb10 = 0;
  uVar6 = (uRam000000018327cc58 ^ 0x842252e8) + uRam000000018327c7b8 + 0x842252e8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327cc58 ^ 0x842252e8;
  uVar4 = ((uRam000000018327c7b8 + uRam000000018327cc58) * 0x2000 |
          uRam000000018327c7b8 + uRam000000018327cc58 >> 0x33) ^ uRam000000018327c7b8;
  uRam000000018327c938 =
       func_0x00018aeddc60((uVar4 << 0x1d | uVar4 >> 0x23) - uRam000000018327cc58 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327c7b8 + 0x842252e8));
  uVar6 = uRam000000018327c938 & 0xfffffffffffffff;
  uRam000000018327c790 = uRam000000018327cb10 ^ uVar6 ^ 0x71cd;
  uRam000000018327ce68 = (uRam000000018327ce68 ^ uVar6) + 0x71cd ^ 0x49afa44f0f57efd0;
  uRam000000018327c800 = (uRam000000018327c800 * -0x4a7d15c90dbfa20d ^ uRam000000018327ce68) + uVar6
  ;
  uRam000000018327cd98 = uRam000000018327c800 ^ uRam000000018327ce68;
  uRam000000018327ca70 = 0x71cd;
  uVar6 = (~uRam000000018327ce88 + 0x100000000) *
          ((uRam000000018327cd70 ^ 0x78dcda99) +
          (ulonglong)((uint)uRam000000018327cd70 & 0x78dcda99) * 2);
  uVar6 = (uVar6 | uRam000000018327ccc0) + (uVar6 & uRam000000018327ccc0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018327c878 =
       func_0x00018aeddc60((uVar6 | 0x87232566) + (ulonglong)((uint)uVar6 & 0x87232566));
  uRam000000018327cc48 =
       (uRam000000018327cc48 ^ uRam000000018327c878 ^ 0xfcfef9bc) + 0x3010643 ^ 0x986d985ecd8448f3;
  uRam000000018327c820 =
       (uRam000000018327c820 * 0x1c5278e277d8085 ^ uRam000000018327cc48) +
       (uRam000000018327c878 ^ 0xfcfef9bc);
  uRam000000018327cd10 = uRam000000018327c820 ^ uRam000000018327cc48;
  uRam000000018327cef0 = 0x3010643;
  uVar6 = (uRam000000018327cb00 ^ _UNK_1819fc960) + uRam000000018327cda8 + 0x78dcda99;
  uVar4 = (uRam000000018327cda8 ^ _UNK_1819fc968) + uRam000000018327cb00 + 0x3010643;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327cb00 ^ _UNK_1819fc960;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018327cda8 ^ _UNK_1819fc968;
  uRam000000018327c910 =
       func_0x00018aeddc60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018327cb00 + 0x3010643) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327cda8 + 0x78dcda99));
  uVar6 = (ulonglong)(~(uint)uRam000000018327c910 & 0xfcfef9bc);
  uRam000000018327cde8 = uRam000000018327cde8 ^ uVar6 ^ 0xcb20f5da7a1d8294;
  uRam000000018327ca38 = (uRam000000018327ca38 * 0x254497b2dc87fc09 ^ uRam000000018327cde8) + uVar6;
  uRam000000018327c968 = uRam000000018327ca38 ^ uRam000000018327cde8;
  uRam000000018327cd28 = uRam000000018327cac8;
  uRam000000018327cc10 = 0;
  uVar6 = ((uRam000000018327cbd0 ^ 0x842252e8) +
          (ulonglong)((uint)uRam000000018327cbd0 & 0x842252e8) * 2) * -uRam000000018327cac8;
  uVar6 = (uVar6 | uRam000000018327cdf0) + (uVar6 & uRam000000018327cdf0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018327c718 =
       func_0x00018aeddc60((uVar6 | 0x842252e8) + (ulonglong)((uint)uVar6 & 0x842252e8));
  uVar6 = (uRam000000018327c718 & 0x1ffff) << 0x14 | uRam000000018327c718 >> 0x2c;
  uRam000000018327c850 = uRam000000018327cac8 ^ uVar6 ^ 0x71cd;
  uRam000000018327cc08 = (uRam000000018327cc08 ^ uVar6) + 0x71cd ^ 0x494c772c2ea2b5ff;
  uRam000000018327cb38 = (uRam000000018327cb38 * 0x1686fb30bd4ac827 ^ uRam000000018327cc08) + uVar6;
  uRam000000018327cab8 = uRam000000018327cb38 ^ uRam000000018327cc08;
  uRam000000018327caf0 = uRam000000018327c7f8 ^ 0x71cd;
  uRam000000018327c7a8 = 0x71cd;
  uVar6 = (~uRam000000018327c8f0 + 0x6cf65109) *
          ((uRam000000018327cbb0 ^ 0xe8d4722d) +
          (ulonglong)((uint)uRam000000018327cbb0 & 0xe8d4722d) * 2);
  uVar6 = (uVar6 | uRam000000018327ce50) + (uVar6 & uRam000000018327ce50);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018327c928 =
       func_0x00018aeddc60((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uVar6 = (uRam000000018327c928 ^ 0x6cf65108) * 0x65892896e74fd53f ^ 0x6cf65108;
  uRam000000018327ca98 = uRam000000018327ca98 ^ uVar6 ^ 0xbb1bc7dd757cf44e;
  uRam000000018327c898 = (uRam000000018327c898 * -0x7d644bd206a3a55f ^ uRam000000018327ca98) + uVar6
  ;
  uRam000000018327c710 = uRam000000018327c898 ^ uRam000000018327ca98;
  uRam000000018327c860 = 0;
  uVar6 = uVar3 ^ 0x84222325 ^ uRam000000018327ce90;
  lVar5 = (uVar3 ^ 0x84222325) + uRam000000018327cef8;
  uVar4 = uVar6 + lVar5;
  uVar8 = (uRam000000018327cef8 ^ 0x71cd) + uRam000000018327ce90 + 0x71cd;
  uVar6 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6;
  uVar4 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018327cef8 ^ 0x71cd;
  uRam000000018327c9f0 =
       func_0x00018aeddc60((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018327ce90 + 0x71cd) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar5);
  lVar5 = uVar3 - ((uint)uVar7 & 0x71cd) * 2;
  uRam000000018327ce90 =
       (uRam000000018327ce90 ^ uRam000000018327c9f0 ^ 0x71cd) + lVar5 + 0x71cd ^ 0x7940274f094c8e44;
  uRam000000018327ceb0 =
       (uRam000000018327ceb0 * -0x4409a614ca4158c7 ^ uRam000000018327ce90) +
       (uRam000000018327c9f0 ^ 0x71cd);
  uRam000000018327c878 = uRam000000018327ceb0 ^ uRam000000018327ce90;
  uRam000000018327cc80 = lVar5 + 0x71cdU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1432e,0x329)
      /* POOL[0x1432e,0x329]: vEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | JDHpD | vDVkv | zeyXv | aSQ | sixtwo/fF | foCtx | aSX | VImHE | Nlyhu | VtwAF | QcPEg | gBIsx | LQzFK | nWCXe | HWaak | vQdJp | MftPL | cdAZQ | dsIVg | aSZ | dsyYm | RObGI | VvKfB | KkvzL | aSY | pPuZs | YpcbG | hDdWr | vfhdM | cHk | (Ljava/util/function/Predicate;)Lsixtwo/ox; | aIT | aTc | sXFbg | bxM | hdxUq | rIJAy | eImKU | JEhiJ | sixtwo/fG | HrnPx | QYvrB | deLoo | jwWNp | kiwwU | UXeQf | aTn | AqVee | XOUKT | xHSEs | RJFVs | XUvTV | abWbk | PWSXA | YNgob | VqvZM | DyNeX | SjiqK | FpKBj | aTp |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aed4b1e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819faa60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fE; aSR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18aeddcf0, runtime 6ffff2aedcf0) =====

void FUN_18aeddcf0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018aeddd3b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819fcae0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fE; aSS (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18aeded00, runtime 6ffff2aeed00) =====

void FUN_18aeded00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aeded89 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819fd0a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xaec8e70 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aec8e70(void)

{
  FUN_190ddce00();
  (*_DAT_1819f84c8)();
  return;
}


// ----- block @ rva 0xaecc5c3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aecc5c3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_1819f9a58)();
  return;
}


// ----- block @ rva 0xaecc608 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aecc608(void)

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


// ----- block @ rva 0xaecc825 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aecc825(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1819f7398)();
  return;
}


// ----- block @ rva 0xaecc840 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aecc840(void)

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


// ----- block @ rva 0xaeccd17 -----

void FUN_18aeccd17(void)

{
  return;
}


// ----- block @ rva 0xaecf6d6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aecf6d6(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1819f8098)();
  return;
}


// ----- block @ rva 0xaecf978 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aecf978(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_1819f8ed8)();
  return;
}


// ----- block @ rva 0xaed0057 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aed0057(void)

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


// ----- block @ rva 0xaed1f9b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aed1f9b(void)

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


// ----- block @ rva 0xaed2539 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed2539(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_1819f9908)();
  return;
}


// ----- block @ rva 0xaed2548 -----

void FUN_18aed2548(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaed26c3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed26c3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1819fa898)();
  return;
}


// ----- block @ rva 0xaed26f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aed26f2(void)

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


// ----- block @ rva 0xaed2707 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed2707(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1819fa888)();
  return;
}


// ----- block @ rva 0xaed272c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aed272c(void)

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


// ----- block @ rva 0xaed2741 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed2741(void)

{
  FUN_190dd72e0();
  (*_DAT_1819fa858)();
  return;
}


// ----- block @ rva 0xaed2769 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aed2769(void)

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


// ----- block @ rva 0xaed27e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed27e1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (*_DAT_1819fa948)();
  return;
}


// ----- block @ rva 0xaed2919 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed2919(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1819fa968)();
  return;
}


// ----- block @ rva 0xaed2a19 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed2a19(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_1819fa978)();
  return;
}


// ----- block @ rva 0xaed2a60 -----

void FUN_18aed2a60(void)

{
  return;
}


// ----- block @ rva 0xaed2a68 -----

void FUN_18aed2a68(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaed4b21 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed4b21(void)

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


// ----- block @ rva 0xaed4cc2 -----

void FUN_18aed4cc2(void)

{
  return;
}


// ----- block @ rva 0xaed5472 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aed5472(void)

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


// ----- block @ rva 0xaed61f6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aed61f6(void)

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


// ----- block @ rva 0xaed637c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed637c(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined4 uStack00000000000000ac;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined2 uStack00000000000000f0;
  
  uStack00000000000000ac = 0x923c087c;
  rdtsc();
  uStack00000000000000d0 = 0x2f005300450044;
  rdtsc();
  uStack00000000000000d8 = 0x2f004300420043;
  rdtsc();
  uStack00000000000000e0 = 0x610050006f004e;
  rdtsc();
  uStack00000000000000e8 = 0x6e006900640064;
  rdtsc();
  uStack00000000000000f0 = 0x67;
  (**(code **)(in_stack_00000030 + JNI->NewString /*0x518*/))(in_stack_00000030,&stack0x000000d0,0x11);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb4a,0x2e);
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


// ----- block @ rva 0xaed7093 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aed7093(void)

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


// ----- block @ rva 0xaed8dc7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed8dc7(void)

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


// ----- block @ rva 0xaed8eed -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18aed978a(void)

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


// ----- block @ rva 0xaed8ef2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed8ef2(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->GetObjectArrayElement /*0x568*/))();
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


// ----- block @ rva 0xaed9805 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aed9805(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined4 uStack00000000000000a4;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined2 uStack00000000000000c0;
  
  uStack00000000000000a4 = 0xed0a1f0c;
  rdtsc();
  uStack00000000000000b0 = 0x74007800690073;
  rdtsc();
  uStack00000000000000b8 = 0x66002f006f0077;
  rdtsc();
  uStack00000000000000c0 = 0x45;
  in_stack_00000050 =
       (**(code **)(in_stack_00000030 + JNI->NewString /*0x518*/))(in_stack_00000030,&stack0x000000b0,9);
  FUN_190ddfc90(in_stack_00000030,&stack0x00000038,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xdad,
                0x43);
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


// ----- block @ rva 0xaeddd3e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aeddd3e(void)

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


// ----- block @ rva 0xaeddd92 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aeddd92(void)

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


// ----- block @ rva 0xaedde00 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aedde00(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1819fcf68)();
  return;
}


// ----- block @ rva 0xaede0c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aede0c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1819fcfb8)();
  return;
}


// ----- block @ rva 0xaede280 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aede280(void)

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


// ----- block @ rva 0xaede2b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aede2b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1819fcfb8)();
  return;
}


// ----- block @ rva 0xaede2d4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aede2d4(void)

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


// ----- block @ rva 0xaede723 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aede723(void)

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


// ----- block @ rva 0xaede874 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aede874(void)

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


// ----- block @ rva 0xaede9e0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aede9e0(void)

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


// ----- block @ rva 0xaedebd1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aedebd1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1819fcfe8)();
  return;
}


// ----- block @ rva 0xaedec05 -----

void FUN_18aedec05(void)

{
  return;
}


// ----- block @ rva 0xaeded8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aeded8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1819fddb8)();
  return;
}


// ----- block @ rva 0xaedeef4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aedeef4(void)

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


// ----- block @ rva 0xaedf8a5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aedf8a5(void)

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


// ----- block @ rva 0xaee04c7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aee04c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1819fdac8)();
  return;
}


// ----- block @ rva 0xaee0612 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aee0612(void)

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


// ----- block @ rva 0xaee07a5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aee07a5(void)

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


// ----- block @ rva 0xaee0960 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aee0960(void)

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


// ----- block @ rva 0xaee0ab0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aee0ab0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1819fdb98)();
  return;
}


// ----- block @ rva 0xaee0d26 -----

void FUN_18aee0d26(void)

{
  return;
}


// ----- block @ rva 0xaee1030 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aee1030(void)

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


// ----- block @ rva 0xaee17c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aee17c4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1819fd798)();
  return;
}


// ----- block @ rva 0xaee18ca -----

void FUN_18aee18ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaee1afb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018aee1b51 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18aee1afb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaee1bbe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018aee1bd5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18aee1bbe(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaee1ecb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018aee1ee2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18aee1ecb(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaee1fbc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018aee1fd7 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18aee1fbc(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaee203b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018aee2091 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18aee203b(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000050;
  
  uStack0000000000000050 = 0xd;
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaeec666 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aeec666(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 1;
  uStack0000000000000078 = 0x30;
  uStack0000000000000070 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_R14 >> 0x30);
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000068 < 0 || iVar1 <= iStack0000000000000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaeec7cc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aeec7cc(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000b6;
  
  uStack00000000000000b6 = in_stack_00000070;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaef3c77 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aef3c77(void)

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


// ----- block @ rva 0xaef9c8c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aef9c8c(void)

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


// ----- block @ rva 0xaefa747 -----

void FUN_18aefa747(void)

{
  return;
}

