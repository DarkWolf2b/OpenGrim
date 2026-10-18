// ===== STITCHED CORPUS: sixtwo.fD =====
// handlers: 7  continuation blocks: 66  unresolved table targets: 0
// tables not in tables.json: ['0x1a044a0', '0x1a044a8', '0x1a044b0', '0x1a044b8', '0x1a044c0', '0x1a044c8', '0x1a044d0', '0x1a044d8', '0x1a044e0', '0x1a044e8', '0x1a044f0', '0x1a044f8', '0x1a04500', '0x1a04508', '0x1a04510', '0x1a04518', '0x1a07698', '0x1a076a8', '0x1a076b8']

// ===== Lsixtwo/fD; _5b68228b901343062102411937de5c37 ()V (handler @ image 18af10ab0, runtime 6ffff2b20ab0) =====

void FUN_18af10ab0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af10b98 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a05c18 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fD; aSH (Lsixtwo/gz;)V (handler @ image 18aefa9c0, runtime 6ffff2b0a9c0) =====

void FUN_18aefa9c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x142f2,0x328)
      /* POOL[0x142f2,0x328]: LKrNn | aSA | MZPLF | rcPcu | LCHwy | aSE | sixtwo/fD | ATgii | uboIQ | aSJ | MXvEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | JDHpD | vDVkv | zeyXv | aSQ | sixtwo/fF | foCtx | aSX | VImHE | Nlyhu | VtwAF | QcPEg | gBIsx | LQzFK | nWCXe | HWaak | vQdJp | MftPL | cdAZQ | dsIVg | aSZ | dsyYm | RObGI | VvKfB | KkvzL | aSY | pPuZs | YpcbG | hDdWr | vfhdM | cHk | (Ljava/util/function/Predicate;)Lsixtwo/ox; | aIT | aTc | sXFbg | bxM | hdxUq | rIJAy | eImKU | JEhiJ | sixtwo/fG | HrnPx | QYvrB | deLoo | jwWNp | kiwwU | UXeQf | aTn | AqVee | XOUKT | xHSEs  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aefaa8d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819fff80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fD; aSI ()Ljava/lang/Boolean; (handler @ image 18af01b00, runtime 6ffff2b11b00) =====

void FUN_18af01b00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018af01b20 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a023f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fD; aSJ (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18af01f50, runtime 6ffff2b11f50) =====

undefined8 FUN_18af01f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/fD; aSK (IJ)I (handler @ image 18af01fe0, runtime 6ffff2b11fe0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01fe0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = (uRam000000018327dbd0 ^ _UNK_181a044a0) + uRam000000018327da60 + 0x858f41708f9e8609;
  uVar6 = (uRam000000018327da60 ^ _UNK_181a044a8) + uRam000000018327dbd0 + 0xc9a8aac42b93b7f5;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327dbd0 ^ _UNK_181a044a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327da60 ^ _UNK_181a044a8;
  uRam000000018327de78 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327dbd0 + 0xc9a8aac42b93b7f5) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327da60 + 0x858f41708f9e8609));
  uVar5 = (uRam000000018327de78 ^ 0xd22dd36051e0871c) & 0x7fffffffffffffff;
  uRam000000018327dc90 = (uRam000000018327dc90 ^ uVar5) + 0xcdafebf42bbfb7fd ^ 0xcd825520c0390d17;
  uRam000000018327dce0 = (uRam000000018327dce0 * -0x291988d2441e3761 ^ uRam000000018327dc90) + uVar5
  ;
  uRam000000018327d9e8 = uRam000000018327dce0 ^ uRam000000018327dc90;
  uRam000000018327d9a0 = 0xcdafebf42bbfb7fd;
  uVar5 = (~uRam000000018327de58 + 0x965c619022525c01) *
          ((uRam000000018327dd48 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327dd48 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018327ded8) + (uVar5 & uRam000000018327ded8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327de98 =
       func_0x00018af0cd00((uVar5 | 0x965c6190a67000da) + (uVar5 & 0x965c6190a67000da));
  uVar5 = uRam000000018327de98 & 0x7fffffffffffffff;
  uRam000000018327db28 = uRam000000018327dbe8 ^ uVar5 ^ 0x965c61902252dbff;
  uRam000000018327dd28 = (uRam000000018327dd28 ^ uVar5) + 0x965c61902252dbff ^ 0xefb59e2ff6f9e5c1;
  uRam000000018327da58 = (uRam000000018327da58 * -0x193273a7777e2827 ^ uRam000000018327dd28) + uVar5
  ;
  uRam000000018327dd30 = uRam000000018327da58 ^ uRam000000018327dd28;
  uRam000000018327dc38 = 0x965c61902252dbff;
  uRam000000018327daf8 = func_0x00018af0cd00(uRam000000018327dea8 + 0x44d4b93445a1d4e8 ^ 0x50);
  uVar5 = ~uRam000000018327daf8 << 0x13 | ~uRam000000018327daf8 >> 0x2d;
  uRam000000018327db90 = uRam000000018327dde8 ^ uVar5 ^ 0x7fff;
  uRam000000018327dc60 = (uRam000000018327dc60 ^ uVar5) + 0x7fff ^ 0xc3d204683bb74e8;
  uRam000000018327dcd0 = (uRam000000018327dcd0 * 0x40e743ed5dd1e49f ^ uRam000000018327dc60) + uVar5;
  uRam000000018327de10 = uRam000000018327dcd0 ^ uRam000000018327dc60;
  uRam000000018327dd58 = 0x7fff;
  uVar5 = (uRam000000018327db08 ^ _UNK_181a044b0) + uRam000000018327dce0 + 0x84222325;
  uVar6 = (uRam000000018327dce0 ^ _UNK_181a044b8) + uRam000000018327db08 + 0xef6a58a4c08ed14;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327db08 ^ _UNK_181a044b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327dce0 ^ _UNK_181a044b8;
  uRam000000018327dda8 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327db08 + 0xef6a58a4c08ed14) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327dce0 + 0x84222325));
  uVar5 = uRam000000018327de78 - (uRam000000018327de78 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018327de78;
  uRam000000018327ded0 = (uRam000000018327ded0 ^ uVar5) + 0xf1095a75b3f712ec ^ 0xad644786886c5b8c;
  uRam000000018327d950 = (uRam000000018327d950 * -0x7e2ca8b260963dd7 ^ uRam000000018327ded0) + uVar5
  ;
  uRam000000018327dc28 = uRam000000018327d950 ^ uRam000000018327ded0;
  uRam000000018327da20 = 0xf1095a75b3f712ec;
  uVar5 = (uRam000000018327dc00 ^ _UNK_181a044c0) + uRam000000018327dc50 + 0x84225cda;
  uVar6 = (uRam000000018327dc50 ^ _UNK_181a044c8) + uRam000000018327dc00 + 0xef6a58a4c08ed14;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327dc00 ^ _UNK_181a044c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327dc50 ^ _UNK_181a044c8;
  uRam000000018327da88 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327dc00 + 0xef6a58a4c08ed14) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327dc50 + 0x84225cda));
  uRam000000018327da60 = uRam000000018327dd38 ^ uRam000000018327da88 ^ 0xef6a58a4c096d13;
  uRam000000018327dd08 =
       (uRam000000018327dd08 ^ uRam000000018327da88) + 0xef6a58a4c096d13 ^ 0xc5c88b13d5905719;
  uRam000000018327d9b8 =
       (uRam000000018327d9b8 * 0x33beab63e9865b45 ^ uRam000000018327dd08) + uRam000000018327da88;
  uRam000000018327d908 = uRam000000018327d9b8 ^ uRam000000018327dd08;
  uRam000000018327dbc0 = 0xef6a58a4c096d13;
  uVar5 = (~uRam000000018327d9a0 + 0xf1095a75b3f712ed) *
          ((uRam000000018327ddc8 ^ 0xef6a58ac82b4e36) +
          (uRam000000018327ddc8 & 0xef6a58ac82b4e36) * 2);
  uVar5 = (uVar5 | uRam000000018327d9a8) + (uVar5 & uRam000000018327d9a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dd40 =
       func_0x00018af0cd00((uVar5 | 0xffffffff7bdc5cda) + (uVar5 & 0xffffffff7bdc5cda));
  uVar5 = (uRam000000018327dd40 ^ 0xffffffffffff7fff) << 0x39 |
          (uRam000000018327dd40 ^ 0xffffffffffff7fff) >> 7;
  uRam000000018327de68 = uRam000000018327da60 ^ uVar5 ^ 0x7fff;
  uRam000000018327dd80 = (uRam000000018327dd80 ^ uVar5) + 0x7fff ^ 0x4d6e067657a4a5f1;
  uRam000000018327dd20 = (uRam000000018327dd20 * 0x176ff8d803749dc1 ^ uRam000000018327dd80) + uVar5;
  uRam000000018327dbd8 = uRam000000018327dd20 ^ uRam000000018327dd80;
  uRam000000018327dc80 = 0x7fff;
  uVar5 = (~uRam000000018327db58 + 0x1f6eb9c4ba9cba61) *
          ((uRam000000018327daf8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327daf8 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018327dbc0) + (uVar5 & uRam000000018327dbc0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327ddf8 =
       func_0x00018af0cd00((uVar5 | 0x1f6eb9c43ebee6ba) + (uVar5 & 0x1f6eb9c43ebee6ba));
  uVar5 = (uRam000000018327ddf8 ^ 0x1f6eb9c4ba9cffff) << 0x22 |
          (uRam000000018327ddf8 ^ 0x1f6eb9c4ba9cffff) >> 0x1e;
  uRam000000018327deb0 = uRam000000018327dc40 ^ uVar5 ^ 0x1f6eb9c4ba9d3a5f;
  uRam000000018327da88 = (uRam000000018327db78 ^ uVar5) + 0x1f6eb9c4ba9d3a5f ^ 0x1d80cce5472416ba;
  uRam000000018327dcf8 = (uRam000000018327dcf8 * -0x1f31664a5e04ad17 ^ uRam000000018327da88) + uVar5
  ;
  uRam000000018327da88 = uRam000000018327dcf8 ^ uRam000000018327da88;
  uRam000000018327db78 = 0x1f6eb9c4ba9d3a5f;
  uVar5 = (uRam000000018327daf0 ^ _UNK_181a044d0) + uRam000000018327d960 + 0xcdafebf4af9d94d8;
  uVar6 = (uRam000000018327d960 ^ _UNK_181a044d8) + uRam000000018327daf0 + 0xbddb8f8f5731b26e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327daf0 ^ _UNK_181a044d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327d960 ^ _UNK_181a044d8;
  uRam000000018327dc60 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327daf0 + 0xbddb8f8f5731b26e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327d960 + 0xcdafebf4af9d94d8));
  uVar6 = uRam000000018327dc60 ^ 0xfdffefff7fbfb7ff;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar6;
  uRam000000018327de88 = uRam000000018327de18 ^ uVar6 ^ 0x8b8b7b8382f16a6b;
  uRam000000018327dc98 = (uRam000000018327dc98 ^ uVar6) + 0x8b8b7b8382f16a6b ^ 0x886e48326bb46e93;
  uRam000000018327dde8 = (uRam000000018327dde8 * -0x569828133457f4e5 ^ uRam000000018327dc98) + uVar6
  ;
  uRam000000018327da20 = uRam000000018327dde8 ^ uRam000000018327dc98;
  uRam000000018327dcd8 = 0x8b8b7b8382f16a6b;
  uRam000000018327dcc8 = func_0x00018af0cd00(uRam000000018327dcb0 + 0x1721d388a99b63cf ^ 0x13);
  uVar5 = (uRam000000018327dcc8 & 0xffffffffc0000000) -
          (uRam000000018327dcc8 >> 1 & 0x5555555540000000);
  uVar5 = (uVar5 & 0x3333333300000000) + (uVar5 >> 2 & 0x3333333330000000);
  uVar5 = (uRam000000018327dcc8 & 0xffffffffc0000000) +
          (((uVar5 >> 4) + uVar5 & 0xf0f0f0f03000000) * 0x101010101010101 >> 0x38) * 2 &
          0x3fffffffc00001fe;
  uRam000000018327d940 = (uRam000000018327d940 ^ uVar5) + 0x8d8b8b840331b26c ^ 0x30680a43c30351a7;
  uRam000000018327d9e8 = (uRam000000018327d9e8 * 0x76ac318a5ba1814f ^ uRam000000018327d940) + uVar5;
  uRam000000018327dd28 = uRam000000018327d9e8 ^ uRam000000018327d940;
  uRam000000018327db88 = 0x8d8b8b840331b26c;
  uVar5 = (uRam000000018327d930 ^ _UNK_181a044e0) + uRam000000018327ded8 + 0x7074647bf8ac26b6;
  uVar6 = (uRam000000018327ded8 ^ _UNK_181a044e8) + uRam000000018327d930 + 0x1b171708066364d8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327d930 ^ _UNK_181a044e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327ded8 ^ _UNK_181a044e8;
  uRam000000018327dbb0 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327d930 + 0x1b171708066364d8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327ded8 + 0x7074647bf8ac26b6));
  uVar5 = uRam000000018327dbb0 ^ 0x7b77777b7eef65db;
  uRam000000018327d910 = uRam000000018327da88 ^ uVar5 ^ 0x8b8b7b8382f16a6b;
  uRam000000018327dad8 = (uRam000000018327dad8 ^ uVar5) + 0x8b8b7b8382f16a6b ^ 0x980fb6afbe3e4b23;
  uRam000000018327dc68 = (uRam000000018327dc68 * 0x1724a02738138fc7 ^ uRam000000018327dad8) + uVar5;
  uRam000000018327dc20 = uRam000000018327dc68 ^ uRam000000018327dad8;
  uRam000000018327dc48 = uRam000000018327dbe0 ^ 0x8b8b7b8382f16a6b;
  uRam000000018327de90 = 0x8b8b7b8382f16a6b;
  uVar5 = ((uRam000000018327dc18 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327dc18 & 0x84225cda) * 2) * -uRam000000018327dd98;
  uVar5 = (uVar5 | uRam000000018327dde8) + (uVar5 & uRam000000018327dde8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327de98 =
       func_0x00018af0cd00((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam000000018327de98 & 0xfffffffffff;
  uRam000000018327dc88 = uRam000000018327dc90 ^ uVar5 ^ 0x7fff;
  uRam000000018327dd20 = (uRam000000018327dd20 ^ uVar5) + 0x7fff ^ 0x97a27b1ee4072d44;
  uRam000000018327db28 = (uRam000000018327db28 * 0x1b7882e355c1e839 ^ uRam000000018327dd20) + uVar5;
  uRam000000018327dc58 = uRam000000018327db28 ^ uRam000000018327dd20;
  uRam000000018327ddd8 = 0x7fff;
  uVar5 = (uRam000000018327dc08 ^ _UNK_181a044f0) + uRam000000018327d940 + 0xcdafebf4af9d94d8;
  uVar6 = (uRam000000018327d940 ^ _UNK_181a044f8) + uRam000000018327dc08 + 0x3250140bd4404802;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327dc08 ^ _UNK_181a044f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327d940 ^ _UNK_181a044f8;
  uRam000000018327db50 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018327dc08 + 0x3250140bd4404802) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327d940 + 0xcdafebf4af9d94d8));
  uVar5 = (uRam000000018327db50 << 0x28 | uRam000000018327db50 >> 0x18) >> 0xc |
          (uRam000000018327db50 >> 0x18) << 0x34;
  uRam000000018327da60 = uRam000000018327da60 ^ uVar5 ^ 0xc71ada5f0cba8aad;
  uRam000000018327dd60 = (uRam000000018327dd60 * 0x41e03ffa15cf96ab ^ uRam000000018327da60) + uVar5;
  uRam000000018327d920 = uRam000000018327dd60 ^ uRam000000018327da60;
  uRam000000018327deb0 = 0;
  uRam000000018327dec0 = func_0x00018af0cd00(uRam000000018327db30 ^ 0x44007ba5ffe11f);
  uVar5 = uRam000000018327dec0 & 0x7fffffffffffffff ^ 0x7fff;
  uRam000000018327db18 = uRam000000018327da78 ^ uVar5 ^ 0x7fff;
  uRam000000018327d918 = (uRam000000018327d918 ^ uVar5) + 0x7fff ^ 0x3169474bdf266960;
  uRam000000018327de58 = (uRam000000018327de58 * 0x16012b8fd4de6b73 ^ uRam000000018327d918) + uVar5;
  uRam000000018327de78 = uRam000000018327de58 ^ uRam000000018327d918;
  uRam000000018327d938 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam000000018327da20;
  lVar3 = (param_4 ^ 0x84222325) + uRam000000018327dab8;
  uVar6 = uVar5 + lVar3;
  uVar8 = (uRam000000018327dab8 ^ 0x7fff) + uRam000000018327da20 + 0x7fff;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018327dab8 ^ 0x7fff;
  uRam000000018327ddf0 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327da20 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018327de20 = (ulonglong)uVar2;
  uRam000000018327db18 =
       (uRam000000018327db18 ^ uRam000000018327ddf0) + uRam000000018327de20 ^ 0xea7337ee11e7b18c;
  uRam000000018327de68 =
       (uRam000000018327de68 * -0xf5e676ce1fe85df ^ uRam000000018327db18) + uRam000000018327ddf0;
  uRam000000018327de50 = uRam000000018327de68 ^ uRam000000018327db18;
  uVar5 = uRam000000018327de20 ^ 0x84222325 ^ uRam000000018327dc70;
  uVar6 = param_3 ^ uRam000000018327dd78;
  lVar4 = (uRam000000018327de20 ^ 0x84222325) + uRam000000018327dd78;
  lVar3 = uRam000000018327dc70 + param_3;
  uVar8 = uVar5 + lVar4;
  uVar7 = uVar6 + lVar3;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uRam000000018327dd70 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) - lVar3 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar2 = uVar2 ^ param_3;
  uVar8 = (ulonglong)uVar2;
  uRam000000018327da50 = (uRam000000018327da50 ^ uRam000000018327dd70) + uVar8 ^ 0x7cb97e65b80153a4;
  uRam000000018327da70 =
       (uRam000000018327da70 * 0xb5a7ef0b33713e1 ^ uRam000000018327da50) + uRam000000018327dd70;
  uRam000000018327de10 = uRam000000018327da70 ^ uRam000000018327da50;
  uVar5 = (~uRam000000018327d990 + 0x267898eb) *
          ((uRam000000018327dcd8 ^ 0x52e3a139) +
          (ulonglong)((uint)uRam000000018327dcd8 & 0x52e3a139) * 2);
  uVar5 = (uVar5 | uRam000000018327dde0) + (uVar5 & uRam000000018327dde0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327da20 = uVar8;
  uRam000000018327dd48 =
       func_0x00018af0cd00((uVar5 | 0x749b39d3) + (ulonglong)((uint)uVar5 & 0x749b39d3));
  uVar5 = (uRam000000018327dd48 * 0x79034f886dcc6273 & 0xfff) << 0x22 |
          uRam000000018327dd48 * 0x79034f886dcc6273 >> 0x1e;
  uRam000000018327da60 = (uRam000000018327da60 ^ uVar5) + 0xf6f99afe ^ 0xcabf96e540f57de8;
  uRam000000018327dc28 = (uRam000000018327dc28 * 0x65a4ce53fbc6b937 ^ uRam000000018327da60) + uVar5;
  uRam000000018327de60 = uRam000000018327dc28 ^ uRam000000018327da60;
  uRam000000018327ddd8 = 0xf6f99afe;
  uVar5 = (~uRam000000018327dd00 + 0xbcdcc133) *
          ((uRam000000018327da20 ^ 0x8714d2c9) +
          (ulonglong)((uint)uRam000000018327da20 & 0x8714d2c9) * 2);
  uVar5 = (uVar5 | uRam000000018327dbf0) + (uVar5 & uRam000000018327dbf0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327daf0 =
       func_0x00018af0cd00((uVar5 | 0x3bc813fb) + (ulonglong)((uint)uVar5 & 0x3bc813fb));
  uRam000000018327dca0 =
       (uRam000000018327dca0 ^ uRam000000018327daf0 & 0x1fffffffff) + 0xbfea30de ^
       0x2e821602a71923dd;
  uRam000000018327da60 =
       (uRam000000018327da60 * -0x48275100ae9ce023 ^ uRam000000018327dca0) +
       (uRam000000018327daf0 & 0x1fffffffff);
  uRam000000018327dea0 = uRam000000018327da60 ^ uRam000000018327dca0;
  uRam000000018327dae0 = 0xbfea30de;
  uRam000000018327d958 = func_0x00018af0cd00(uRam000000018327db78 ^ 0xff83007d0d002337);
  uRam000000018327dd60 = uRam000000018327dd60 - 0x97ea030 ^ 0x69c8839ebc004b9f;
  uRam000000018327de98 = uRam000000018327ddf0 * -0x2bc1a86d09b4c245;
  uRam000000018327ddf0 = uRam000000018327de98 ^ uRam000000018327dd60;
  uRam000000018327da98 = uRam000000018327db70 ^ 0xfffffffff6815fd0;
  uRam000000018327d910 = 0xf6815fd0;
  uVar5 = (uRam000000018327d9f8 ^ _UNK_181a04500) + uRam000000018327da08 + 0x84222901;
  uVar6 = (uRam000000018327da08 ^ _UNK_181a04508) + uRam000000018327d9f8 + 0x97ea030;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327d9f8 ^ _UNK_181a04500;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327da08 ^ _UNK_181a04508;
  lRam000000018327d980 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327d9f8 + 0x97ea030) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327da08 + 0x84222901));
  uVar5 = lRam000000018327d980 * -0x4aafba2ddac15a5b;
  uRam000000018327db60 = uRam000000018327da88 ^ uVar5 ^ 0x97eaa54;
  uRam000000018327daf0 = (uRam000000018327daf0 ^ uVar5) + 0x97eaa54 ^ 0xa27dcc13d09a0f79;
  uRam000000018327d900 = (uRam000000018327d900 * -0x62b205c4ec13003b ^ uRam000000018327daf0) + uVar5
  ;
  uRam000000018327db10 = uRam000000018327d900 ^ uRam000000018327daf0;
  uRam000000018327db28 = 0x97eaa54;
  uVar5 = (~uRam000000018327dbb8 + 0xa31d5691) *
          ((uRam000000018327dd00 ^ 0x84222901) +
          (ulonglong)((uint)uRam000000018327dd00 & 0x84222901) * 2);
  uVar5 = (uVar5 | uRam000000018327de98) + (uVar5 & uRam000000018327de98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dae8 =
       func_0x00018af0cd00((uVar5 | 0x273f7f91) + (ulonglong)((uint)uVar5 & 0x273f7f91));
  uRam000000018327de88 = uRam000000018327d918 ^ uRam000000018327dae8 ^ 0xa31d60b4;
  uRam000000018327dea8 =
       (uRam000000018327dea8 ^ uRam000000018327dae8) + 0xa31d60b4 ^ 0x4524c3ec90c4dc7;
  uRam000000018327daa0 =
       (uRam000000018327daa0 * -0x41ae2481a6a87f33 ^ uRam000000018327dea8) + uRam000000018327dae8;
  uRam000000018327de50 = uRam000000018327daa0 ^ uRam000000018327dea8;
  uRam000000018327d910 = 0xa31d60b4;
  uVar5 = (uRam000000018327d988 ^ _UNK_181a04510) + uRam000000018327de28 + 0x84222325;
  uVar6 = (uRam000000018327de28 ^ _UNK_181a04518) + uRam000000018327d988 + 0x52280bb0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327d988 ^ _UNK_181a04510;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327de28 ^ _UNK_181a04518;
  uRam000000018327dea8 =
       func_0x00018af0cd00((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018327d988 + 0x52280bb0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327de28 + 0x84222325));
  uRam000000018327dce0 =
       (uRam000000018327dce0 ^ uRam000000018327dab0 & 0x7fffffffffffffff) - 0x52280bb0 ^
       0x38b9db4b290918f9;
  uRam000000018327db78 =
       (uRam000000018327db78 * 0x72a4ad92c8456423 ^ uRam000000018327dce0) +
       (uRam000000018327dab0 & 0x7fffffffffffffff);
  uRam000000018327dc88 = uRam000000018327db78 ^ uRam000000018327dce0;
  uRam000000018327ddc8 = 0xadd7f450;
  uVar5 = (~uRam000000018327dd90 + 0x52280bb1) *
          ((uRam000000018327dc90 ^ 0x84222901) +
          (ulonglong)((uint)uRam000000018327dc90 & 0x84222901) * 2);
  uVar5 = (uVar5 | uRam000000018327ddb0) + (uVar5 & uRam000000018327ddb0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327db08 =
       func_0x00018af0cd00((uVar5 | 0xd60a22b1) + (ulonglong)((uint)uVar5 & 0xd60a22b1));
  uVar5 = (ulonglong)(~(uint)uRam000000018327db08 & 0xa24);
  uRam000000018327da90 = uRam000000018327dcb0 ^ uVar5 ^ 0x522815d4;
  uRam000000018327dc50 = (uRam000000018327dc50 ^ uVar5) + 0x522815d4 ^ 0x2af63072c659cd0d;
  uRam000000018327dac8 = (uRam000000018327dac8 * -0x40ef111a8ba34f45 ^ uRam000000018327dc50) + uVar5
  ;
  uRam000000018327d908 = uRam000000018327dac8 ^ uRam000000018327dc50;
  uRam000000018327da70 = 0x522815d4;
  lVar3 = func_0x00018af0cd00(uRam000000018327da08 ^ 0xff86ffc4fcffd03e);
  uVar5 = lVar3 * -0x1204cebf52b9c84b;
  uRam000000018327dbb0 = uRam000000018327db30 ^ uVar5 ^ 0x1b6e3cbdc;
  uRam000000018327dbb8 = (uRam000000018327dbb8 ^ uVar5) + 0x1b6e3cbdc ^ 0xd4abeaac311cd71f;
  uRam000000018327dda8 = (uRam000000018327dda8 * -0x55c0bbf27410cb8b ^ uRam000000018327dbb8) + uVar5
  ;
  uRam000000018327dd50 = uRam000000018327dda8 ^ uRam000000018327dbb8;
  uRam000000018327d908 = 0xb6e3cbdc;
  uVar5 = func_0x00018af0cd00(uRam000000018327dbf0 + 0x7900bb05000eff ^ 0x29);
  uRam000000018327de80 = (uVar5 ^ uVar5 & 0xffffffffffff8000) + 0x4913aa20 ^ 0x680df0ea53e47965;
  uRam000000018327db00 =
       (uRam000000018327db00 * 0x18a2c74217428d0f ^ uRam000000018327de80) +
       (uVar5 & 0xffffffffffff8000);
  uRam000000018327de98 = uRam000000018327db00 ^ uRam000000018327de80;
  uRam000000018327dde8 = 0x4913aa20;
  uRam000000018327de70 = func_0x00018af0cd00(uRam000000018327dad0 ^ 0x57ff5fa700208d);
  uVar5 = uRam000000018327de70 ^ 0x4913aa20;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  uRam000000018327db58 = uRam000000018327d958 ^ uVar5 ^ 0xb6e3cbdc;
  uRam000000018327d990 = (uRam000000018327d990 ^ uVar5) + 0xb6e3cbdc ^ 0x5ea00fda4616df38;
  uRam000000018327da40 = (uRam000000018327da40 * -0x1cda5a8a8edf34b ^ uRam000000018327d990) + uVar5;
  uRam000000018327de28 = uRam000000018327da40 ^ uRam000000018327d990;
  uRam000000018327d9b8 = 0xb6e3cbdc;
  uVar5 = (~uRam000000018327da10 + 0xb6e3cbdd) *
          ((uRam000000018327dc78 ^ 0x32c1e8f9) +
          (ulonglong)((uint)uRam000000018327dc78 & 0x32c1e8f9) * 2);
  uVar5 = (uVar5 | uRam000000018327ded8) + (uVar5 & uRam000000018327ded8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dc68 =
       func_0x00018af0cd00((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018327ddf8 = uRam000000018327ddf8 ^ uRam000000018327dc68 ^ 0xd3b2cf9fba7b6738;
  uRam000000018327d940 =
       (uRam000000018327d940 * 0x67f9621c5be51945 ^ uRam000000018327ddf8) + uRam000000018327dc68;
  uRam000000018327dd10 = uRam000000018327d940 ^ uRam000000018327ddf8;
  uRam000000018327ddc8 = 0;
  uVar5 = (~uRam000000018327dea8 + 0x100000000) *
          ((uRam000000018327dca0 ^ 0x72dbb9db) +
          (ulonglong)((uint)uRam000000018327dca0 & 0x72dbb9db) * 2);
  uVar5 = (uVar5 | uRam000000018327dac0) + (uVar5 & uRam000000018327dac0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dd90 = uRam000000018327dc68;
  uRam000000018327da58 =
       func_0x00018af0cd00((uVar5 | 0x8d244624) + (ulonglong)((uint)uVar5 & 0x8d244624));
  uRam000000018327dd50 =
       (uRam000000018327dd50 ^ uRam000000018327da58 ^ 0x9066501) + 0x9066501 ^ 0xb0d15c66ab699048;
  uRam000000018327de20 =
       (uRam000000018327de20 * 0x37d561425b18bdff ^ uRam000000018327dd50) +
       (uRam000000018327da58 ^ 0x9066501);
  uRam000000018327dd88 = uRam000000018327de20 ^ uRam000000018327dd50;
  uRam000000018327de00 = 0x9066501;
  uVar5 = (~uRam000000018327db78 + 0x9066502) *
          ((uRam000000018327db20 ^ 0x72dbb9db) +
          (ulonglong)((uint)uRam000000018327db20 & 0x72dbb9db) * 2);
  uVar5 = (uVar5 | uRam000000018327da78) + (uVar5 & uRam000000018327da78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327dae8 =
       func_0x00018af0cd00((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uVar5 = uRam000000018327dae8 << 0x25 | uRam000000018327dae8 >> 0x1b;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar5;
  uRam000000018327dbe0 = uRam000000018327dbe0 ^ uVar5 ^ 0xd6d1ebe3092eb7f3;
  uRam000000018327dab0 = (uRam000000018327dab0 * 0x6c1874f615146c9d ^ uRam000000018327dbe0) + uVar5;
  uRam000000018327db98 = uRam000000018327dab0 ^ uRam000000018327dbe0;
  uRam000000018327dca0 = 0;
  uVar5 = ((uRam000000018327dd90 ^ 0x84222901) +
          (ulonglong)((uint)uRam000000018327dd90 & 0x84222901) * 2) * -uRam000000018327ddf8;
  uVar5 = (uVar5 | uRam000000018327de70) + (uVar5 & uRam000000018327de70);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327da78 =
       func_0x00018af0cd00((uVar5 | 0x84222901) + (ulonglong)((uint)uVar5 & 0x84222901));
  uVar5 = uRam000000018327da78 << 0x33 | uRam000000018327da78 >> 0xd;
  uRam000000018327de98 = uRam000000018327dbf0 ^ uVar5 ^ 0xa24;
  uRam000000018327dcc8 = (uRam000000018327dc18 ^ uVar5) + 0xa24 ^ 0x655445e675551ada;
  uRam000000018327db48 = (uRam000000018327db48 * -0x74a4a123511d2763 ^ uRam000000018327dcc8) + uVar5
  ;
  uRam000000018327dcc8 = uRam000000018327db48 ^ uRam000000018327dcc8;
  uRam000000018327dc18 = 0xa24;
  uRam000000018327dae0 = func_0x00018af0cd00(lRam000000018327da68 + 0x1cff8422ffe1ffU ^ 0x99);
  uRam000000018327ddf0 =
       uRam000000018327ddf0 ^ uRam000000018327dae0 & 0xffffffffffffffc0 ^ 0x7935dfda584e3214;
  uRam000000018327db28 =
       (uRam000000018327db28 * -0x61ae1080b398603d ^ uRam000000018327ddf0) +
       (uRam000000018327dae0 & 0xffffffffffffffc0);
  uRam000000018327dd80 = uRam000000018327db28 ^ uRam000000018327ddf0;
  uRam000000018327d9c0 = 0;
  uVar5 = (~uRam000000018327dc30 + 0xa25) *
          ((uVar8 ^ 0x84222325 ^ uRam000000018327d940) +
          (ulonglong)((uint)uRam000000018327d940 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam000000018327de80) + (uVar5 & uRam000000018327de80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327d900 =
       func_0x00018af0cd00((uVar8 ^ 0x84222901 | uVar5) +
                           (ulonglong)((uint)(uVar8 ^ 0x84222901) & (uint)uVar5));
  uVar5 = (uVar8 ^ (uVar8 | 0xa24) ^ uRam000000018327d900) * 0x75da65f48d3b0105;
  lVar3 = uVar8 - (uVar2 & 0xa24) * 2;
  uRam000000018327dd98 = (uRam000000018327dd98 ^ uVar5) + lVar3 + 0xa24 ^ 0x3dca39956885db44;
  uRam000000018327dc20 = (uRam000000018327dc20 * 0xa479430c7cb9077 ^ uRam000000018327dd98) + uVar5;
  uRam000000018327dc50 = uRam000000018327dc20 ^ uRam000000018327dd98;
  uRam000000018327d998 = lVar3 + 0xa24U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x142f2,0x328)
      /* POOL[0x142f2,0x328]: LKrNn | aSA | MZPLF | rcPcu | LCHwy | aSE | sixtwo/fD | ATgii | uboIQ | aSJ | MXvEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | JDHpD | vDVkv | zeyXv | aSQ | sixtwo/fF | foCtx | aSX | VImHE | Nlyhu | VtwAF | QcPEg | gBIsx | LQzFK | nWCXe | HWaak | vQdJp | MftPL | cdAZQ | dsIVg | aSZ | dsyYm | RObGI | VvKfB | KkvzL | aSY | pPuZs | YpcbG | hDdWr | vfhdM | cHk | (Ljava/util/function/Predicate;)Lsixtwo/ox; | aIT | aTc | sXFbg | bxM | hdxUq | rIJAy | eImKU | JEhiJ | sixtwo/fG | HrnPx | QYvrB | deLoo | jwWNp | kiwwU | UXeQf | aTn | AqVee | XOUKT | xHSEs  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af0402d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a02640 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fD; aSL (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18af0cd90, runtime 6ffff2b1cd90) =====

void FUN_18af0cd90(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018af0cddb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a04640 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fD; aSM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18af0dda0, runtime 6ffff2b1dda0) =====

void FUN_18af0dda0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af0de29 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a04c00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xaefaa90 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aefaa90(void)

{
  FUN_190ddce00();
  (*_DAT_181a00908)();
  return;
}


// ----- block @ rva 0xaefe575 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aefe575(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a01238)();
  return;
}


// ----- block @ rva 0xaefe8fb -----

void FUN_18aefe8fb(void)

{
  return;
}


// ----- block @ rva 0xaefec49 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aefec49(void)

{
  FUN_190dd72e0();
  (*_DAT_181a00418)();
  return;
}


// ----- block @ rva 0xaeffc5b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aeffc5b(void)

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


// ----- block @ rva 0xaeffd9b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aeffd9b(void)

{
  (*_DAT_181a00e28)();
  return;
}


// ----- block @ rva 0xaeffed5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aeffed5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_181a00918)();
  return;
}


// ----- block @ rva 0xaf000bb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af000bb(void)

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


// ----- block @ rva 0xaf01847 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01847(void)

{
  FUN_190de3220();
  (*_DAT_181a00e78)();
  return;
}


// ----- block @ rva 0xaf0195f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0195f(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->Throw /*0x68*/))();
  (*_DAT_181a01648)();
  return;
}


// ----- block @ rva 0xaf01970 -----

void FUN_18af01970(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf01b23 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01b23(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a02418)();
  return;
}


// ----- block @ rva 0xaf01b52 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af01b52(void)

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


// ----- block @ rva 0xaf01b67 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01b67(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a02568)();
  return;
}


// ----- block @ rva 0xaf01ba1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01ba1(void)

{
  FUN_190dd72e0();
  (*_DAT_181a02578)();
  return;
}


// ----- block @ rva 0xaf01bea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01bea(void)

{
  FUN_190dd9df0();
  (*_DAT_181a02508)();
  return;
}


// ----- block @ rva 0xaf01c41 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01c41(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (*_DAT_181a024f8)();
  return;
}


// ----- block @ rva 0xaf01d79 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01d79(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a02448)();
  return;
}


// ----- block @ rva 0xaf01eb8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af01eb8(void)

{
  (*_DAT_181a02458)();
  return;
}


// ----- block @ rva 0xaf01ec0 -----

void FUN_18af01ec0(void)

{
  return;
}


// ----- block @ rva 0xaf01ec8 -----

void FUN_18af01ec8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf04030 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af04030(void)

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


// ----- block @ rva 0xaf041d4 -----

void FUN_18af041d4(void)

{
  return;
}


// ----- block @ rva 0xaf0449c -----

undefined8 thunk_FUN_18af041bc(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xaf04d98 -----

undefined8 thunk_FUN_18af051b5(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xaf06549 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af06549(void)

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


// ----- block @ rva 0xaf067d8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af067d8(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
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


// ----- block @ rva 0xaf08724 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af08724(void)

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


// ----- block @ rva 0xaf08a04 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af08a04(void)

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


// ----- block @ rva 0xaf0b558 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0b558(void)

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


// ----- block @ rva 0xaf0c931 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0c931(void)

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


// ----- block @ rva 0xaf0cdde -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0cdde(void)

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


// ----- block @ rva 0xaf0ce17 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0ce17(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a04b98)();
  return;
}


// ----- block @ rva 0xaf0ce32 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0ce32(void)

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


// ----- block @ rva 0xaf0cf8b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0cf8b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a04b18)();
  return;
}


// ----- block @ rva 0xaf0d08c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0d08c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a04b18)();
  return;
}


// ----- block @ rva 0xaf0d359 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0d359(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a04b28)();
  return;
}


// ----- block @ rva 0xaf0d517 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0d517(void)

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


// ----- block @ rva 0xaf0d8aa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0d8aa(void)

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


// ----- block @ rva 0xaf0dac3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0dac3(void)

{
  FUN_190de3220();
  (*_DAT_181a04918)();
  return;
}


// ----- block @ rva 0xaf0dca5 -----

void FUN_18af0dca5(void)

{
  return;
}


// ----- block @ rva 0xaf0dcb4 -----

void FUN_18af0dcb4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf0de2c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0de2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181a05578)();
  return;
}


// ----- block @ rva 0xaf0e373 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0e373(void)

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


// ----- block @ rva 0xaf0e877 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0e877(void)

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


// ----- block @ rva 0xaf0eafb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0eafb(void)

{
  (*_DAT_181a05ad8)();
  return;
}


// ----- block @ rva 0xaf0ee4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af0ee4c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a05628)();
  return;
}


// ----- block @ rva 0xaf0eeaa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0eeaa(void)

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


// ----- block @ rva 0xaf0f1a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af0f1a3(void)

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


// ----- block @ rva 0xaf0fdc6 -----

void FUN_18af0fdc6(void)

{
  return;
}


// ----- block @ rva 0xaf10255 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af10255(void)

{
  FUN_190de3220();
  (*_DAT_181a04d78)();
  return;
}


// ----- block @ rva 0xaf10417 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af10417(void)

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


// ----- block @ rva 0xaf10666 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af10666(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a05658)();
  return;
}


// ----- block @ rva 0xaf10904 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af10904(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a058e8)();
  return;
}


// ----- block @ rva 0xaf1096a -----

void FUN_18af1096a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf10b9b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af10bf1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af10b9b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf10d23 -----

void FUN_18af10d23(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xaf13779 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af13790 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af13779(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf143d0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af1445f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af143d0(void)

{
  longlong *unaff_RSI;
  undefined8 uStack0000000000000168;
  undefined4 uStack0000000000000170;
  
  uStack0000000000000168 = 0x39003500380038;
  rdtsc();
  uStack0000000000000170 = 0x31002d;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf1ffe6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af1ffe6(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000058;
  int in_stack_00000068;
  
  lVar4 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  bVar1 = *(byte *)(lVar4 + in_stack_00000068);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar4,2);
  uVar6 = (~_DAT_18327df30 + 0x931e9975) *
          ((_DAT_18327e3f0 ^ 0x74e45e92) + (ulonglong)((uint)_DAT_18327e3f0 & 0x74e45e92) * 2);
  uVar6 = (uVar6 | _DAT_18327e0d0) + (uVar6 & _DAT_18327e0d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e300 = func_0x00018af2bbd0((uVar6 | 0xe7fac7e6) + (ulonglong)((uint)uVar6 & 0xe7fac7e6))
  ;
  uVar5 = _DAT_18327e300 ^ 0x8a5ec1c68b8555ec;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar2 + (uint)bVar2 ^ uVar5;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5) &
          0x7fffffffffffffff;
  _DAT_18327df78 = (_DAT_18327df78 ^ uVar6) + 0xf3defdf7 ^ 0xd0de86cc26cf0b82;
  _DAT_18327e150 = (_DAT_18327e150 * -0x73be16ca46ea35eb ^ _DAT_18327df78) + uVar6;
  _DAT_18327df90 = _DAT_18327e150 ^ _DAT_18327df78;
  _DAT_18327e4c8 = 0xf3defdf7;
  _DAT_18327e250 = func_0x00018af2bbd0(_DAT_18327e3f8 ^ 0xfffc001c38ffb476);
  uVar6 = _DAT_18327e250 << 0x39 | _DAT_18327e250 >> 7;
  _DAT_18327e3b0 = (_DAT_18327e3b0 ^ uVar6) + 0xa0f7276c ^ 0xcb3764a5203813f7;
  _DAT_18327e2c8 = (_DAT_18327e2c8 * -0x74dca5cdaab80233 ^ _DAT_18327e3b0) + uVar6;
  _DAT_18327e380 = _DAT_18327e2c8 ^ _DAT_18327e3b0;
  _DAT_18327e200 = 0xa0f7276c;
  uVar6 = (_DAT_18327dfa0 ^ _DAT_181a07690) + _DAT_18327e4d0 + 0x84222325;
  uVar5 = (_DAT_18327e4d0 ^ _UNK_181a07698) + _DAT_18327dfa0 + 0x11a44d8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18327dfa0 ^ _DAT_181a07690;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18327e4d0 ^ _UNK_181a07698;
  _DAT_18327e300 =
       func_0x00018af2bbd0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18327dfa0 + 0x11a44d8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18327e4d0 + 0x84222325));
  uVar6 = _DAT_18327e300 * 0x312cfc3ed42ff81b ^ 0x11a44d8;
  _DAT_18327e110 = (_DAT_18327e110 ^ uVar6) - 0x11a44d8 ^ 0x2c4243384055384f;
  _DAT_18327e258 = (_DAT_18327e258 * -0x4ae3c428f3849d8b ^ _DAT_18327e110) + uVar6;
  _DAT_18327e2c0 = _DAT_18327e258 ^ _DAT_18327e110;
  _DAT_18327e330 = 0xfee5bb28;
  uVar6 = (_DAT_18327e1b8 ^ _DAT_181a076a0) + _DAT_18327e438 + 0x863b67fd;
  uVar5 = (_DAT_18327e438 ^ _UNK_181a076a8) + _DAT_18327e1b8 + 0xfee5bb28;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18327e1b8 ^ _DAT_181a076a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18327e438 ^ _UNK_181a076a8;
  _DAT_18327e3f0 =
       func_0x00018af2bbd0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18327e1b8 + 0xfee5bb28) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18327e438 + 0x863b67fd));
  uVar6 = (ulonglong)(~(uint)_DAT_18327e3f0 & 0x21944d8);
  _DAT_18327df00 = _DAT_18327dfa8 ^ uVar6 ^ 0x100ff0000;
  _DAT_18327e198 = (_DAT_18327e198 ^ uVar6) + 0x100ff0000 ^ 0x9b72c546bd7a8c94;
  _DAT_18327e108 = (_DAT_18327e108 * -0x13604ef24051ac9f ^ _DAT_18327e198) + uVar6;
  _DAT_18327e1f0 = _DAT_18327e108 ^ _DAT_18327e198;
  _DAT_18327e260 = 0xff0000;
  _DAT_18327e050 = func_0x00018af2bbd0(_DAT_18327e1b0 + 0x2d0041410016ffU ^ 0x20);
  _DAT_18327e318 =
       (_DAT_18327e318 ^ _DAT_18327e050 * -0x199b802001e95399) - 0xc54bfce4 ^ 0xd42b395882af8568;
  _DAT_18327e428 =
       (_DAT_18327e428 * -0x3b08870b54acdd33 ^ _DAT_18327e318) +
       _DAT_18327e050 * -0x199b802001e95399;
  _DAT_18327e280 = _DAT_18327e428 ^ _DAT_18327e318;
  _DAT_18327e268 = 0x3ab4031c;
  _DAT_18327e448 = func_0x00018af2bbd0(_DAT_18327e1b8 + 0x4affc1beff89ff ^ 0x7b);
  uVar6 = _DAT_18327e448 * -0x61f238672f3ff6f3;
  _DAT_18327e258 = _DAT_18327e018 ^ uVar6 ^ 0xc64afce4;
  _DAT_18327e130 = (_DAT_18327e130 ^ uVar6) + 0xc64afce4 ^ 0x1a9d3b69c9049db2;
  _DAT_18327e000 = (_DAT_18327e000 * 0x66df523bac8c6eed ^ _DAT_18327e130) + uVar6;
  _DAT_18327e2c8 = _DAT_18327e000 ^ _DAT_18327e130;
  _DAT_18327e0e0 = 0xc64afce4;
  uVar6 = (~_DAT_18327dfd0 + 0x3ab4031d) *
          ((_DAT_18327e478 ^ 0x4268dfc1) + (ulonglong)((uint)_DAT_18327e478 & 0x4268dfc1) * 2);
  uVar6 = (uVar6 | _DAT_18327e398) + (uVar6 & _DAT_18327e398);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e470 = func_0x00018af2bbd0((uVar6 | 0x78dcdcdd) + (ulonglong)((uint)uVar6 & 0x78dcdcdd))
  ;
  _DAT_18327e088 = _DAT_18327e190 ^ _DAT_18327e470 ^ 0x100ff0000;
  _DAT_18327e3a0 = (_DAT_18327e3a0 ^ _DAT_18327e470) + 0x100ff0000 ^ 0x83a886227ce048ee;
  _DAT_18327e4f0 = (_DAT_18327e4f0 * -0x7e4463e98ce0405f ^ _DAT_18327e3a0) + _DAT_18327e470;
  _DAT_18327e488 = _DAT_18327e4f0 ^ _DAT_18327e3a0;
  _DAT_18327df88 = 0xff0000;
  uVar6 = (_DAT_18327e0d8 ^ _DAT_181a076b0) + _DAT_18327e270 + 0xb1bc2095;
  uVar5 = (_DAT_18327e270 ^ _UNK_181a076b8) + _DAT_18327e0d8 + 0xcb60fc50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18327e0d8 ^ _DAT_181a076b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18327e270 ^ _UNK_181a076b8;
  _DAT_18327e0a0 =
       func_0x00018af2bbd0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18327e0d8 + 0xcb60fc50) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18327e270 + 0xb1bc2095));
  uVar6 = _DAT_18327e0a0 ^ 0x359e03b0;
  _DAT_18327e1a8 = _DAT_18327e040 ^ uVar6 ^ 0x100ff0000;
  _DAT_18327e0f0 = (_DAT_18327e0f0 ^ uVar6) + 0x100ff0000 ^ 0x4e184ffeb18a3c6d;
  _DAT_18327e340 = (_DAT_18327e340 * -0x95cd37a97ea8f9 ^ _DAT_18327e0f0) + uVar6;
  _DAT_18327e3d8 = _DAT_18327e340 ^ _DAT_18327e0f0;
  _DAT_18327e2c8 = 0xff0000;
  _DAT_18327e110 = func_0x00018af2bbd0(_DAT_18327e420 ^ 0xe900ca5dfff855);
  uVar6 = _DAT_18327e110 - (_DAT_18327e110 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18327e110;
  _DAT_18327e008 = _DAT_18327e1a0 ^ uVar6 ^ 0x194d62563;
  _DAT_18327df70 = (_DAT_18327df70 ^ uVar6) + 0x194d62563 ^ 0x7763b05df65da404;
  _DAT_18327e340 = (_DAT_18327e340 * 0x6c9146badda9804f ^ _DAT_18327df70) + uVar6;
  _DAT_18327e0f8 = _DAT_18327e340 ^ _DAT_18327df70;
  _DAT_18327e0e8 = 0x94d62563;
  uVar6 = (~_DAT_18327e488 + 0xa0f7276d) *
          ((_DAT_18327e310 ^ 0x77fcded2) + (ulonglong)((uint)_DAT_18327e310 & 0x77fcded2) * 2);
  uVar6 = (uVar6 | _DAT_18327e3f8) + (uVar6 & _DAT_18327e3f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327df70 = func_0x00018af2bbd0((uVar6 | 0xd70bf9be) + (ulonglong)((uint)uVar6 & 0xd70bf9be))
  ;
  _DAT_18327e160 = (_DAT_18327e160 ^ _DAT_18327df70) + 0x5329da9b ^ 0x9446a8dde42b5dfd;
  _DAT_18327e150 = (_DAT_18327e150 * -0x3ccc7b6ac473501b ^ _DAT_18327e160) + _DAT_18327df70;
  _DAT_18327e1f0 = _DAT_18327e150 ^ _DAT_18327e160;
  _DAT_18327e438 = 0x5329da9b;
  uVar6 = (~_DAT_18327e308 + 0xa0f7276d) *
          ((_DAT_18327df20 ^ 0x77fcded2) + (ulonglong)((uint)_DAT_18327df20 & 0x77fcded2) * 2);
  uVar6 = (uVar6 | _DAT_18327e0b8) + (uVar6 & _DAT_18327e0b8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e300 = func_0x00018af2bbd0((uVar6 | 0xd70bf9be) + (ulonglong)((uint)uVar6 & 0xd70bf9be))
  ;
  _DAT_18327e1d8 = (_DAT_18327e1d8 ^ _DAT_18327e300) + 0xa0d62564 ^ 0x5c2555c71d909e90;
  _DAT_18327e430 = (_DAT_18327e430 * 0x31d6ab3af3403b69 ^ _DAT_18327e1d8) + _DAT_18327e300;
  _DAT_18327e160 = _DAT_18327e430 ^ _DAT_18327e1d8;
  _DAT_18327e1c8 = 0xa0d62564;
  _DAT_18327df88 = func_0x00018af2bbd0(_DAT_18327df38 ^ 0x8eff91d5ffa030);
  uVar6 = (_DAT_18327df88 ^ 0x155598eb4d000000) & 0xffffffffff800000;
  _DAT_18327e3f8 = _DAT_18327e120 ^ uVar6 ^ 0x94d62563;
  _DAT_18327df98 = (_DAT_18327df98 ^ uVar6) + 0x94d62563 ^ 0xc2d45f8a698ba3c0;
  _DAT_18327df80 = (_DAT_18327df80 * 0x87d64f81efa6753 ^ _DAT_18327df98) + uVar6;
  _DAT_18327e450 = _DAT_18327df80 ^ _DAT_18327df98;
  _DAT_18327e180 = 0x94d62563;
  _DAT_18327e3f8 = func_0x00018af2bbd0(_DAT_18327e2e0 + 0x20ff7bdcffe1ffU ^ 0x52);
  _DAT_18327e000 = _DAT_18327e3f8 ^ 0x94d62563;
  _DAT_18327e230 = _DAT_18327e230 ^ _DAT_18327e000 ^ 0xf37ccce0ef001fac;
  _DAT_18327dfe8 = (_DAT_18327dfe8 * -0x5b902925f980b0af ^ _DAT_18327e230) + _DAT_18327e000;
  _DAT_18327e288 = _DAT_18327dfe8 ^ _DAT_18327e230;
  _DAT_18327e3c0 = 0;
  uVar6 = ((_DAT_18327e3c8 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18327e3c8 & 0x84dd2325) * 2) *
          -_DAT_18327e4c0;
  uVar6 = (uVar6 | _DAT_18327df48) + (uVar6 & _DAT_18327df48);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e060 = func_0x00018af2bbd0((uVar6 | 0x84dd2325) + (ulonglong)((uint)uVar6 & 0x84dd2325))
  ;
  uVar6 = (_DAT_18327e060 >> 0x3d) << 0x3e | (_DAT_18327e060 & 0x1ffffffffffe0000) << 1;
  _DAT_18327e180 = _DAT_18327e220 ^ uVar6 ^ 0xff0000;
  _DAT_18327e4c8 = (_DAT_18327e4c8 ^ uVar6) + 0xff0000 ^ 0xccf8b9f7cb9419b7;
  _DAT_18327e330 = (_DAT_18327e330 * -0x3e0341b0f762d4fd ^ _DAT_18327e4c8) + uVar6;
  _DAT_18327e350 = _DAT_18327e330 ^ _DAT_18327e4c8;
  _DAT_18327e390 = 0xff0000;
  _DAT_18327e2f0 = func_0x00018af2bbd0(_DAT_18327e290 + 0xffdeff7be5002cffU ^ 0xaf);
  _DAT_18327e030 = _DAT_18327e3c0 ^ _DAT_18327e2f0 ^ 0xff0000;
  _DAT_18327e2b8 = (_DAT_18327e2b8 ^ _DAT_18327e2f0) + 0xff0000 ^ 0xfe66c8262aa4524;
  _DAT_18327e448 = (_DAT_18327e448 * -0x4fb4dbf9eba59235 ^ _DAT_18327e2b8) + _DAT_18327e2f0;
  _DAT_18327e0c8 = _DAT_18327e448 ^ _DAT_18327e2b8;
  _DAT_18327e2d8 = 0xff0000;
  uVar6 = (~_DAT_18327e228 + 0xf0c67db8) *
          ((_DAT_18327e3d0 ^ 0x74e45e92) + (ulonglong)((uint)_DAT_18327e3d0 & 0x74e45e92) * 2);
  uVar6 = (uVar6 | _DAT_18327e1f0) + (uVar6 & _DAT_18327e1f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018af2bbd0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uVar6 = uVar6 << 5 | uVar6 >> 0x3b;
  _DAT_18327dfe0 = _DAT_18327dfe0 ^ uVar6 ^ 0x324753ef09c54916;
  _DAT_18327e340 = (_DAT_18327e340 * 0x61310e200c107333 ^ _DAT_18327dfe0) + uVar6;
  _DAT_18327e0c0 = _DAT_18327e340 ^ _DAT_18327dfe0;
  _DAT_18327e2f8 = 0;
  uVar6 = ((_DAT_18327df78 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18327df78 & 0x84dd2325) * 2) *
          -_DAT_18327e038;
  uVar6 = (uVar6 | _DAT_18327e410) + (uVar6 & _DAT_18327e410);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327e2f0 = func_0x00018af2bbd0((uVar6 | 0x84dd2325) + (ulonglong)((uint)uVar6 & 0x84dd2325))
  ;
  uVar6 = (ulonglong)(~(uint)_DAT_18327e2f0 & 0xff0000) ^ 0xff0000;
  _DAT_18327e0b8 = _DAT_18327e3b0 ^ uVar6 ^ 0xff0000;
  _DAT_18327e138 = (_DAT_18327e138 ^ uVar6) + 0xff0000 ^ 0x93386445214b115f;
  _DAT_18327e098 = (_DAT_18327e098 * 0x4b8fcfe5885f2acd ^ _DAT_18327e138) + uVar6;
  _DAT_18327e338 = _DAT_18327e098 ^ _DAT_18327e138;
  _DAT_18327e3b8 = 0xff0000;
  uVar7 = (ulonglong)bVar1 * 0x10000;
  uVar5 = in_stack_00000058 ^ 0x84222325;
  uVar6 = ((_DAT_18327e228 ^ uVar5) + (uVar5 & _DAT_18327e228) * 2) * (uVar7 - _DAT_18327e028);
  uVar6 = (uVar6 | _DAT_18327e0a8) + (uVar6 & _DAT_18327e0a8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18327df40 = func_0x00018af2bbd0((uVar5 ^ uVar7 | uVar6) + (uVar6 & (uVar5 ^ uVar7)));
  uVar6 = in_stack_00000058 * uVar7 ^ _DAT_18327df40;
  uVar6 = uVar6 << 0x2d | uVar6 >> 0x13;
  _DAT_18327df08 = in_stack_00000058 | uVar7;
  _DAT_18327e1f8 = (_DAT_18327e1f8 ^ uVar6) + _DAT_18327df08 ^ 0xdac6454459f864a1;
  _DAT_18327e3e8 = (_DAT_18327e3e8 * -0x70fe0e1e8ec75e8d ^ _DAT_18327e1f8) + uVar6;
  _DAT_18327e3b0 = _DAT_18327e3e8 ^ _DAT_18327e1f8;
  iVar3 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))(extraout_XMM0_Qa_00,in_stack_00000038);
  switch(iVar3 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf27cde -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af27cde(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar5 = (ulonglong)(uint)((int)cVar1 << 0x18);
  uVar4 = in_stack_00000050 ^ 0x84222325 ^ _DAT_18327e040;
  lVar3 = (in_stack_00000050 ^ 0x84222325) + _DAT_18327df10;
  uVar6 = uVar4 + lVar3;
  uVar7 = (uVar5 ^ _DAT_18327df10) + _DAT_18327e040 + uVar5;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5 ^ _DAT_18327df10;
  _DAT_18327e3f0 =
       func_0x00018af2bbd0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18327e040 + uVar5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  _DAT_18327e250 = in_stack_00000050 | uVar5;
  _DAT_18327e068 =
       (_DAT_18327e068 ^ _DAT_18327e3f0 * -0x11773e8f84d6f7cd) + _DAT_18327e250 ^ 0x7d67fee0404e16ed
  ;
  _DAT_18327e300 =
       (_DAT_18327e300 * -0x60db3c7232e95cf1 ^ _DAT_18327e068) +
       _DAT_18327e3f0 * -0x11773e8f84d6f7cd;
  _DAT_18327e098 = _DAT_18327e300 ^ _DAT_18327e068;
  iVar2 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))(extraout_XMM0_Qa_00,in_stack_00000038);
  switch(iVar2 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf2ad57 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af2ad57(void)

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


// ----- block @ rva 0xaf2b29f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af2b29f(void)

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


// ----- block @ rva 0xaf2b537 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af2b537(void)

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


// ----- block @ rva 0xaf2b8c7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af2b8c7(void)

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


// ----- block @ rva 0xaf2b9f3 -----

void FUN_18af2b9f3(void)

{
  return;
}

