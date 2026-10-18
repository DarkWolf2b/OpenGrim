// ===== Lsixtwo/aQ; _1c050f99bf3b127a20c32d9ec8cc6a4b ()V (handler @ image 18fa254e0, runtime 6ffff76354e0) =====

void FUN_18fa254e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fa255c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a3ed30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aQ; bV (Lsixtwo/lC;)V (handler @ image 18fa15c80, runtime 6ffff7625c80) =====

void FUN_18fa15c80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5332,0x100);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fa15d52 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a39b70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aQ; dk (DDLsixtwo/mA;)Z (handler @ image 18fa20280, runtime 6ffff7630280) =====

void FUN_18fa20280(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5332,0x100);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fa20347 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a3d380 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aQ; dn ()F (handler @ image 18fa388c0, runtime 6ffff76488c0) =====

void FUN_18fa388c0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fa388e5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a404c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aQ; xO ()F (handler @ image 18fa38c00, runtime 6ffff7648c00) =====

void FUN_18fa38c00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5332,0x100);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fa38cc5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a40630 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}



// ===== Lsixtwo/aQ; xP (Lsixtwo/lC;Lsixtwo/lq;Lsixtwo/lc;Lsixtwo/pF;Lsixtwo/lf;FF)V (handler @ image 18fa3d820, runtime 6ffff764d820) =====

void FUN_18fa3d820(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1cd0,99);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fa3d8c2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a41d10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aQ; xQ (Lsixtwo/lq;Ljava/lang/String;F)F (handler @ image 18fa3fb80, runtime 6ffff764fb80) =====

void FUN_18fa3fb80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1dd9,0x67);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fa3fbdf did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a429d8 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}



// ===== Lsixtwo/aQ; xR (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18fa3fdb0, runtime 6ffff764fdb0) =====

undefined8 FUN_18fa3fdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/aQ; xS (IJ)I (handler @ image 18fa3fe40, runtime 6ffff764fe40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fa3fe40(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (uRam000000018341edf8 ^ _UNK_182a44980) + uRam000000018341ee18 + 0xf443896845da2f96;
  uVar3 = (uRam000000018341ee18 ^ _UNK_182a44988) + uRam000000018341edf8 + 0xc6ce96f257541ef6;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018341edf8 ^ _UNK_182a44980;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018341ee18 ^ _UNK_182a44988;
  uRam000000018341ebb0 =
       func_0x00018fa4a810((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018341edf8 + 0xc6ce96f257541ef6) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018341ee18 + 0xf443896845da2f96));
  uRam000000018341eba8 =
       (uRam000000018341eba8 ^ uRam000000018341ebb0) + 0x328d1f9a96ac1245 ^ 0x6b0e5ce48a72f895;
  uRam000000018341f0d8 =
       (uRam000000018341f0d8 * -0x3627b3da365e64cd ^ uRam000000018341eba8) + uRam000000018341ebb0;
  uRam000000018341ee10 = uRam000000018341f0d8 ^ uRam000000018341eba8;
  uRam000000018341eee0 = 0x328d1f9a96ac1245;
  uRam000000018341ebc8 = func_0x00018fa4a810(uRam000000018341eb90 ^ 0x8b397e1a2f16bf8f);
  uVar3 = uRam000000018341ebc8 ^ 0x948219bc9e62fc74;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3;
  uRam000000018341ef10 = (uRam000000018341ef10 ^ uVar3) + 0x6b7de643619d038c ^ 0xe3391accf83e932d;
  uRam000000018341eee8 = (uRam000000018341eee8 * -0x24d6f92170892d1 ^ uRam000000018341ef10) + uVar3;
  uRam000000018341efa0 = uRam000000018341eee8 ^ uRam000000018341ef10;
  uRam000000018341ef90 = 0x6b7de643619d038c;
  uVar2 = (uRam000000018341ed60 ^ _UNK_182a44990) + uRam000000018341eb18 + 0x948219bc1a415f56;
  uVar3 = (uRam000000018341eb18 ^ _UNK_182a44998) + uRam000000018341ed60 + 0x6b7de643619d038c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018341ed60 ^ _UNK_182a44990;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018341eb18 ^ _UNK_182a44998;
  uRam000000018341ebf8 =
       func_0x00018fa4a810((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018341ed60 + 0x6b7de643619d038c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018341eb18 + 0x948219bc1a415f56));
  uVar2 = ~uRam000000018341ebf8 & 0x948219bc9c000000;
  uRam000000018341ebc8 = uRam000000018341ed78 ^ uVar2 ^ 0x7fff;
  uRam000000018341eb60 = (uRam000000018341eb60 ^ uVar2) + 0x7fff ^ 0x1e1e0bc82e0c5b86;
  uRam000000018341edb8 = (uRam000000018341edb8 * 0x37c4c1117e42e46b ^ uRam000000018341eb60) + uVar2;
  uRam000000018341ec50 = uRam000000018341edb8 ^ uRam000000018341eb60;
  uRam000000018341ebf0 = 0x7fff;
  uVar2 = (~uRam000000018341eba0 + 0xcfc63fd2abdaee1b) *
          ((uRam000000018341ee10 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018341ee10 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam000000018341eba8) + (uVar2 & uRam000000018341eba8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341eb28 =
       func_0x00018fa4a810((uVar2 | 0xcfc63fd22ff8cd3f) + (uVar2 & 0xcfc63fd22ff8cd3f));
  uRam000000018341eb10 =
       (uRam000000018341ec88 ^ uRam000000018341eb28 ^ 0xcfc63fd2abdaee1a) + 0x3039c02d542511e6 ^
       0xb4f9a16abe83fcae;
  uRam000000018341ec80 =
       (uRam000000018341ec80 * -0x4517125c29158403 ^ uRam000000018341eb10) +
       (uRam000000018341eb28 ^ 0xcfc63fd2abdaee1a);
  uRam000000018341eb10 = uRam000000018341ec80 ^ uRam000000018341eb10;
  uRam000000018341ec88 = 0x3039c02d542511e6;
  uVar2 = (~uRam000000018341efe8 + 0x3039c02d542511e7) *
          ((uRam000000018341eba8 ^ 0xcfc63fd22ff94d3c) +
          (uRam000000018341eba8 & 0x4fc63fd22ff94d3c) * 2);
  uVar2 = (uVar2 | uRam000000018341ec48) + (uVar2 & uRam000000018341ec48);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341f0e8 =
       func_0x00018fa4a810((uVar2 | 0xffffffff7bdc5cda) + (uVar2 & 0xffffffff7bdc5cda));
  uVar2 = (uRam000000018341f0e8 ^ 0xcfc63fd2abdb6e19) << 0x2d |
          (uRam000000018341f0e8 ^ 0xcfc63fd2abdb6e19) >> 0x13;
  uRam000000018341eeb0 = uRam000000018341f0d0 ^ uVar2 ^ 0x7fff;
  uRam000000018341efd8 = (uRam000000018341efd8 ^ uVar2) + 0x7fff ^ 0x8447c00631b056e0;
  uRam000000018341eed0 = (uRam000000018341eed0 * -0x67dec0764319c73b ^ uRam000000018341efd8) + uVar2
  ;
  uRam000000018341ef20 = uRam000000018341eed0 ^ uRam000000018341efd8;
  uRam000000018341f040 = 0x7fff;
  lRam000000018341ec68 = func_0x00018fa4a810(lRam000000018341ee28 + 0xa74bdfa1639fd7eaU ^ 0xc6);
  uVar3 = lRam000000018341ec68 * 0x4ff93f738c6bbbfd;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar3;
  uRam000000018341ef88 = uRam000000018341f0a8 ^ uVar3 ^ 0x103b1e0e0c03a044;
  uRam000000018341ef00 = (uRam000000018341ef00 ^ uVar3) + 0x103b1e0e0c03a044 ^ 0x1db0a8b517ddc917;
  uRam000000018341ecf0 = (uRam000000018341ecf0 * 0x38c7207744ef0e83 ^ uRam000000018341ef00) + uVar3;
  uRam000000018341f018 = uRam000000018341ecf0 ^ uRam000000018341ef00;
  uRam000000018341eeb0 = 0x103b1e0e0c03a044;
  uVar2 = (uRam000000018341ed10 ^ _UNK_182a449a0) + uRam000000018341f0c0 + 0xddadfe73f175aeda;
  uVar3 = (uRam000000018341f0c0 ^ _UNK_182a449a8) + uRam000000018341ed10 + 0x328d1f9a96ac1245;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018341ed10 ^ _UNK_182a449a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018341f0c0 ^ _UNK_182a449a8;
  uRam000000018341f010 =
       func_0x00018fa4a810((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018341ed10 + 0x328d1f9a96ac1245) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018341f0c0 + 0xddadfe73f175aeda));
  uVar2 = uRam000000018341f010 << 0x34 | uRam000000018341f010 >> 0xc;
  uRam000000018341ebe0 = (uRam000000018341ebe0 ^ uVar2) + 0xef20e1e9e3fb9fba ^ 0x816a842482e8fd4b;
  uRam000000018341eed8 = (uRam000000018341eed8 * -0x5447f40ba3244b1 ^ uRam000000018341ebe0) + uVar2;
  uRam000000018341ee30 = uRam000000018341eed8 ^ uRam000000018341ebe0;
  uRam000000018341ed30 = 0xef20e1e9e3fb9fba;
  uVar2 = (~uRam000000018341ee98 + 0x328d1f9a96ac1246) *
          ((uRam000000018341ef18 ^ 0xddadfe73f175aeda) +
          (uRam000000018341ef18 & 0x5dadfe73f175aeda) * 2);
  uVar2 = (uVar2 | uRam000000018341f0b0) + (uVar2 & uRam000000018341f0b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341f0f8 =
       func_0x00018fa4a810((uVar2 | 0xef20e1e967d9bc9f) + (uVar2 & 0xef20e1e967d9bc9f));
  uRam000000018341ee60 =
       (uRam000000018341ee60 ^ uRam000000018341f0f8 ^ 0x108d1e1214040045) + 0x108d1e1214040045 ^
       0x9d9d3c854742f5ce;
  uRam000000018341eea0 =
       (uRam000000018341eea0 * -0x448c709b6b9f4015 ^ uRam000000018341ee60) +
       (uRam000000018341f0f8 ^ 0x108d1e1214040045);
  uRam000000018341ebf8 = uRam000000018341eea0 ^ uRam000000018341ee60;
  lRam000000018341ec68 = 0x108d1e1214040045;
  uVar2 = (~uRam000000018341edd0 + 0x211a3c242808008b) *
          ((uRam000000018341ec98 ^ 0xef20e1e967d9bc9f) +
          (uRam000000018341ec98 & 0x6f20e1e967d9bc9f) * 2);
  uVar2 = (uVar2 | uRam000000018341eb28) + (uVar2 & uRam000000018341eb28);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341ecb8 =
       func_0x00018fa4a810((uVar2 | 0xce3addcd4fd1bc15) + (uVar2 & 0xce3addcd4fd1bc15));
  uVar2 = uRam000000018341ecb8 >> 1 | uRam000000018341ecb8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018341ecb8;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3) *
          0x70ca364795ef7993;
  uRam000000018341eb98 = uRam000000018341ef18 ^ uVar2 ^ 0x103b1e0e0c03a044;
  uRam000000018341ef68 = (uRam000000018341ef68 ^ uVar2) + 0x103b1e0e0c03a044 ^ 0xb1fbdcfe623e0ff;
  uRam000000018341ef20 = (uRam000000018341ef20 * -0x6fde05a91873dbb5 ^ uRam000000018341ef68) + uVar2
  ;
  uRam000000018341eb68 = uRam000000018341ef20 ^ uRam000000018341ef68;
  uRam000000018341eb80 = 0x103b1e0e0c03a044;
  uRam000000018341ee90 = func_0x00018fa4a810(uRam000000018341eb08 ^ 0x4bff84a6002141);
  uRam000000018341eba8 = uRam000000018341f010 ^ uRam000000018341eb60 ^ 0x7fff;
  uRam000000018341eb30 = (uRam000000018341eb30 ^ uRam000000018341eb60) + 0x7fff ^ 0x44b4971dcd26600c
  ;
  uRam000000018341ee60 =
       (uRam000000018341ee60 * 0x618c6e7e366d21b1 ^ uRam000000018341eb30) + uRam000000018341eb60;
  uRam000000018341eea0 = uRam000000018341ee60 ^ uRam000000018341eb30;
  uRam000000018341ec80 = uRam000000018341ecb0 ^ 0x7fff;
  uRam000000018341ecc8 = 0x7fff;
  uVar2 = (uRam000000018341ec50 ^ _UNK_182a449b0) + uRam000000018341eb68 + 0xddadfe73f175aeda;
  uVar3 = (uRam000000018341eb68 ^ _UNK_182a449b8) + (uRam000000018341ec50 - 1);
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018341ec50 ^ _UNK_182a449b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018341eb68 ^ _UNK_182a449b8;
  uRam000000018341f030 =
       func_0x00018fa4a810((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018341ec50 - 1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018341eb68 + 0xddadfe73f175aeda));
  uRam000000018341ee98 =
       (uRam000000018341ee98 ^ uRam000000018341f030 ^ 0xddadfe7375578dff) + 0x2252018c8aa87200 ^
       0xad38af15f26b32be;
  uRam000000018341ede8 =
       (uRam000000018341ede8 * -0x26fc940309dc1eb5 ^ uRam000000018341ee98) +
       (uRam000000018341f030 ^ 0xddadfe7375578dff);
  uRam000000018341ef50 = uRam000000018341ede8 ^ uRam000000018341ee98;
  uRam000000018341efc8 = 0x2252018c8aa87200;
  uVar2 = (~uRam000000018341ee60 + 0x2252018c8aa87201) *
          ((uRam000000018341ee08 ^ 0xddadfe73f175aeda) +
          (uRam000000018341ee08 & 0x5dadfe73f175aeda) * 2);
  uVar2 = (uVar2 | uRam000000018341f0f8) + (uVar2 & uRam000000018341f0f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341f070 =
       func_0x00018fa4a810((uVar2 | 0xffffffff7bdddcda) + (uVar2 & 0xffffffff7bdddcda));
  uVar2 = (uRam000000018341f070 ^ 0x4c8cba42554401ff) & 0xddadfe7375578de3;
  uVar2 = (uVar2 << 0x3b | uVar2 >> 5) << 3 |
          ((uRam000000018341f070 ^ 0x4c8cba42554401ff) & 0x1f) >> 2;
  uRam000000018341ebc0 = uRam000000018341ebc0 ^ uVar2 ^ 0x63671fbfbfa16be0;
  uRam000000018341f0c8 = (uRam000000018341f0c8 * -0x6ab7805da5b0ba9b ^ uRam000000018341ebc0) + uVar2
  ;
  uRam000000018341ecd0 = uRam000000018341f0c8 ^ uRam000000018341ebc0;
  uRam000000018341eb90 = 0;
  uRam000000018341ed20 = func_0x00018fa4a810(lRam000000018341ef70 + 0xffcbff833a001dffU ^ 0xc2);
  uVar2 = uRam000000018341ebe8 & 0x3fffffffffff;
  uRam000000018341ee30 = uRam000000018341ee60 ^ uVar2 ^ 0x7fff;
  uRam000000018341ebf8 = (uRam000000018341ebf8 ^ uVar2) + 0x7fff ^ 0xb37655e9c059963e;
  uRam000000018341ee40 = (uRam000000018341ee40 * 0x57ad5b056502afaf ^ uRam000000018341ebf8) + uVar2;
  uRam000000018341ed60 = uRam000000018341ee40 ^ uRam000000018341ebf8;
  uRam000000018341edd0 = 0x7fff;
  uVar2 = (~uRam000000018341eb08 + 0xdca9d60274458560) *
          ((uRam000000018341ebe8 ^ 0xdca9d602f067a67a) +
          (uRam000000018341ebe8 & 0x5ca9d602f067a67a) * 2);
  uVar2 = (uVar2 | uRam000000018341eb40) + (uVar2 & uRam000000018341eb40);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341ee98 =
       func_0x00018fa4a810((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar2 = (uRam000000018341ee98 ^ 0xa04dfd3b42b1c000) & 0xffffffffffffe000;
  uRam000000018341eed0 = uRam000000018341eed0 ^ uVar2 ^ 0xbe481e445d9c5ac8;
  uRam000000018341ec20 = (uRam000000018341ec20 * 0xbc91c880456075d ^ uRam000000018341eed0) + uVar2;
  uRam000000018341ed68 = uRam000000018341ec20 ^ uRam000000018341eed0;
  uRam000000018341f050 = 0;
  uVar2 = ((uRam000000018341eb78 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018341eb78 & 0x84225cda) * 2) * -uRam000000018341f060;
  uVar2 = (uVar2 | uRam000000018341ef28) + (uVar2 & uRam000000018341ef28);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341f060 =
       func_0x00018fa4a810((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uRam000000018341ef98 = uRam000000018341eca8 ^ uRam000000018341f060 ^ 0x7fff;
  uRam000000018341f0f8 = (uRam000000018341f0f8 ^ uRam000000018341f060) + 0x7fff ^ 0xbf4fee76becb45d3
  ;
  uRam000000018341ebf0 =
       (uRam000000018341ebf0 * 0x2d6b54d036f9d549 ^ uRam000000018341f0f8) + uRam000000018341f060;
  uRam000000018341eb70 = uRam000000018341ebf0 ^ uRam000000018341f0f8;
  uRam000000018341eb60 = 0x7fff;
  uVar2 = (uRam000000018341edc8 ^ _UNK_182a449c0) + uRam000000018341eda0 + 0x7f5558c4;
  uVar3 = (uRam000000018341eda0 ^ _UNK_182a449c8) + uRam000000018341edc8 + 0xbb1f3230;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018341edc8 ^ _UNK_182a449c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018341eda0 ^ _UNK_182a449c8;
  uRam000000018341f020 =
       func_0x00018fa4a810((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018341edc8 + 0xbb1f3230) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018341eda0 + 0x7f5558c4));
  uVar2 = uRam000000018341f020 << 0x2b | uRam000000018341f020 >> 0x15;
  uRam000000018341eb30 = (uRam000000018341eb30 ^ uVar2) + 0xfb7f7bf1 ^ 0x115b9f5834546151;
  uRam000000018341eee0 = (uRam000000018341eee0 * 0x5c6999414c3291f3 ^ uRam000000018341eb30) + uVar2;
  uRam000000018341ef80 = uRam000000018341eee0 ^ uRam000000018341eb30;
  uRam000000018341efe0 = 0xfb7f7bf1;
  uRam000000018341ebb0 = func_0x00018fa4a810(uRam000000018341eb10 ^ 0x660017cdffece4);
  uRam000000018341ef10 = uRam000000018341ef20 ^ uRam000000018341ebb0 ^ 0xbc158577;
  uRam000000018341f0b0 =
       (uRam000000018341f0b0 ^ uRam000000018341ebb0) + 0xbc158577 ^ 0xb10227e23cd630c2;
  uRam000000018341ed18 =
       (uRam000000018341ed18 * -0x4ac2753edcd9115d ^ uRam000000018341f0b0) + uRam000000018341ebb0;
  uRam000000018341ed08 = uRam000000018341ed18 ^ uRam000000018341f0b0;
  uRam000000018341f010 = 0xbc158577;
  uVar2 = (~uRam000000018341edb8 + 0x43ea9c01) *
          ((uRam000000018341eb80 ^ 0x3837a652) +
          (ulonglong)((uint)uRam000000018341eb80 & 0x3837a652) * 2);
  uVar2 = (uVar2 | uRam000000018341eb68) + (uVar2 & uRam000000018341eb68);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341f058 =
       func_0x00018fa4a810((uVar2 | 0x7bdd3a52) + (ulonglong)((uint)uVar2 & 0x7bdd3a52));
  uRam000000018341eeb0 = uRam000000018341efb8 ^ uRam000000018341ef80 ^ 0x100002177;
  uRam000000018341ee70 =
       (uRam000000018341ee70 ^ uRam000000018341ef80) + 0x100002177 ^ 0xa0aae4a49df708ff;
  uRam000000018341f088 =
       (uRam000000018341f088 * 0x62edcb2dff5d7df5 ^ uRam000000018341ee70) + uRam000000018341ef80;
  uRam000000018341eb70 = uRam000000018341f088 ^ uRam000000018341ee70;
  uRam000000018341ee38 = 0x2177;
  uRam000000018341ee50 = func_0x00018fa4a810(uRam000000018341ecd0 + 0xffd2001ccaff6fff ^ 0x52);
  uRam000000018341efb0 = uRam000000018341efb0 - 0xb9b21568 ^ 0x80e1bf3c5fa7fe1c;
  uRam000000018341ec30 = uRam000000018341f050 * 0x3bfb7ca9807dddb7;
  uRam000000018341f050 = uRam000000018341ec30 ^ uRam000000018341efb0;
  uRam000000018341f080 = 0x464dea98;
  uVar2 = (uRam000000018341ec58 ^ _UNK_182a449d0) + uRam000000018341efb8 + 0x84220252;
  uVar3 = (uRam000000018341efb8 ^ _UNK_182a449d8) + uRam000000018341ec58 + 0xb9b21568;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018341ec58 ^ _UNK_182a449d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018341efb8 ^ _UNK_182a449d8;
  uRam000000018341efd0 =
       func_0x00018fa4a810((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018341ec58 + 0xb9b21568) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018341efb8 + 0x84220252));
  uVar2 = uRam000000018341efd0 & 0x1ffffffffff ^ 0x2177;
  uRam000000018341f050 = uRam000000018341ef18 ^ uVar2 ^ 0xb9b236df;
  uRam000000018341edb0 = (uRam000000018341edb0 ^ uVar2) + 0xb9b236df ^ 0x94289fc2c73aeda0;
  uRam000000018341f038 = (uRam000000018341f038 * -0x65f9eda6198f71c3 ^ uRam000000018341edb0) + uVar2
  ;
  uRam000000018341ebd0 = uRam000000018341f038 ^ uRam000000018341edb0;
  uRam000000018341eb78 = 0xb9b236df;
  uRam000000018341f0e8 = func_0x00018fa4a810(lRam000000018341eb50 + 0xffe3002ae200d2ffU ^ 0x95);
  uVar2 = uRam000000018341f0e8 << 6 | uRam000000018341f0e8 >> 0x3a;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar2;
  uRam000000018341ef30 = uRam000000018341ebd8 ^ uVar2 ^ 0x100002177;
  uRam000000018341edc0 = (uRam000000018341edc0 ^ uVar2) + 0x100002177 ^ 0x22a60e6ff815036e;
  uRam000000018341ecc8 = (uRam000000018341ecc8 * 0x7dd551adb18b743b ^ uRam000000018341edc0) + uVar2;
  uRam000000018341ee50 = uRam000000018341ecc8 ^ uRam000000018341edc0;
  uRam000000018341ebc8 = 0x2177;
  uVar2 = (~uRam000000018341eda0 + 0xce6c4c02) *
          ((uRam000000018341f0d0 ^ 0x84220252) +
          (ulonglong)((uint)uRam000000018341f0d0 & 0x84220252) * 2);
  uVar2 = (uVar2 | uRam000000018341f038) + (uVar2 & uRam000000018341f038);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341f020 =
       func_0x00018fa4a810((uVar2 | 0x4a4e4e53) + (ulonglong)((uint)uVar2 & 0x4a4e4e53));
  uVar2 = (ulonglong)(~(uint)uRam000000018341f020 & 0x2177);
  uRam000000018341ed50 = uRam000000018341ef00 ^ uVar2 ^ 0xce6c6d78;
  uRam000000018341ece0 = (uRam000000018341ece0 ^ uVar2) + 0xce6c6d78 ^ 0x396cb272344b925e;
  uRam000000018341f010 = (uRam000000018341f010 * 0x6fd32bfd5c6e6649 ^ uRam000000018341ece0) + uVar2;
  uRam000000018341efa0 = uRam000000018341f010 ^ uRam000000018341ece0;
  uRam000000018341ee68 = 0xce6c6d78;
  uVar2 = (~uRam000000018341eb10 + 0x3193b400) *
          ((uRam000000018341ed60 ^ 0x4a4e4e5d) +
          (ulonglong)((uint)uRam000000018341ed60 & 0x4a4e4e5d) * 2);
  uVar2 = (uVar2 | uRam000000018341ed40) + (uVar2 & uRam000000018341ed40);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018341eb08 =
       func_0x00018fa4a810((uVar2 | 0x7bddfda2) + (ulonglong)((uint)uVar2 & 0x7bddfda2));
  uVar2 = (uRam000000018341eb08 ^ 0xce6c6d78) & 0x7fffffffffffffff ^ 0xce6c6d78;
  uRam000000018341eeb0 = (uRam000000018341eeb0 ^ uVar2) + 0x100002177 ^ 0xdabf06f54a86098c;
  uRam000000018341ef10 = (uRam000000018341ef10 * -0x5a9627ff6abeaff7 ^ uRam000000018341eeb0) + uVar2
  ;
  uRam000000018341eef8 = uRam000000018341ef10 ^ uRam000000018341eeb0;
  uRam000000018341ee38 = uRam000000018341f048 ^ 0x100002177;
  uRam000000018341eb00 = 0x2177;
  uRam000000018341edd8 = func_0x00018fa4a810(lRam000000018341ef08 + 0xd8007079001effU ^ 0xd);
  uVar2 = uRam000000018341edd8 >> 1 | uRam000000018341edd8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018341edd8) & 0xfffffffffffff000;
  uRam000000018341ec58 = uRam000000018341ebb8 ^ uVar2 ^ 0x1eafe2c9e;
  uRam000000018341f0e8 = (uRam000000018341f0e8 ^ uVar2) + 0x1eafe2c9e ^ 0xa3c0164016e1fd04;
  uRam000000018341ef10 = (uRam000000018341ef10 * 0x230050110ba42f97 ^ uRam000000018341f0e8) + uVar2;
  uRam000000018341eb00 = uRam000000018341ef10 ^ uRam000000018341f0e8;
  uRam000000018341ed48 = uRam000000018341eb80 ^ 0x1eafe2c9e;
  uRam000000018341ee50 = 0xeafe2c9e;
  uRam000000018341ecc0 = func_0x00018fa4a810(uRam000000018341eb40 + 0xff68007058ffdcff ^ 0x89);
  uRam000000018341eb78 =
       (uRam000000018341eb78 ^ uRam000000018341ecc0) + 0xeb7e30a1 ^ 0x30c4c9848435e2bf;
  uRam000000018341ed98 =
       (uRam000000018341ed98 * -0x6b3a2a6b668f885d ^ uRam000000018341eb78) + uRam000000018341ecc0;
  uRam000000018341ed50 = uRam000000018341ed98 ^ uRam000000018341eb78;
  uRam000000018341ef00 = 0xeb7e30a1;
  uVar2 = (uRam000000018341ed78 ^ _UNK_182a449e0) + uRam000000018341ec48 + 0x7f5d58d4;
  uVar3 = (uRam000000018341ec48 ^ _UNK_182a449e8) + uRam000000018341ed78 + 0x480840e;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018341ed78 ^ _UNK_182a449e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018341ec48 ^ _UNK_182a449e8;
  uRam000000018341ef10 =
       func_0x00018fa4a810((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018341ed78 + 0x480840e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018341ec48 + 0x7f5d58d4));
  uVar3 = uRam000000018341ef10 ^ 0x46c3f6939610b2e;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  uRam000000018341ede8 = uRam000000018341ede8 ^ uVar3 ^ 0xa641934de9568a94;
  uRam000000018341efd8 = (uRam000000018341efd8 * 0x3a089553576bf74f ^ uRam000000018341ede8) + uVar3;
  uRam000000018341eb10 = uRam000000018341efd8 ^ uRam000000018341ede8;
  uRam000000018341ecc8 = 0;
  uVar2 = ((uRam000000018341ee70 ^ 0x84220252) +
          (ulonglong)((uint)uRam000000018341ee70 & 0x84220252) * 2) * -uRam000000018341f0a8;
  uVar2 = (uVar2 | uRam000000018341ec48) + (uVar2 & uRam000000018341ec48);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  lRam000000018341ec68 =
       func_0x00018fa4a810((uVar2 | 0x84220252) + (ulonglong)((uint)uVar2 & 0x84220252));
  uRam000000018341ee68 = (uRam000000018341ee68 ^ uRam000000018341f0f8) + 0x2177 ^ 0x88e7abf5a5322499
  ;
  uRam000000018341eb70 =
       (uRam000000018341eb70 * -0x314948555afbb6bd ^ uRam000000018341ee68) + uRam000000018341f0f8;
  uRam000000018341ed78 = uRam000000018341eb70 ^ uRam000000018341ee68;
  uRam000000018341efd0 = 0x2177;
  uVar2 = (uRam000000018341ed48 ^ _UNK_182a449f0) + uRam000000018341f0a0 + 0x7f5558c4;
  uVar3 = (uRam000000018341f0a0 ^ _UNK_182a449f8) + uRam000000018341ed48 + 0xfb777be1;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018341ed48 ^ _UNK_182a449f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018341f0a0 ^ _UNK_182a449f8;
  uRam000000018341ec00 =
       func_0x00018fa4a810((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018341ed48 + 0xfb777be1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018341f0a0 + 0x7f5558c4));
  uVar3 = uRam000000018341ec00 ^ 0xf70384af9d1ffbc1;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  uRam000000018341ede0 = uRam000000018341ede0 ^ uVar3 ^ 0x9349acb17abf427d;
  uRam000000018341ec18 = (uRam000000018341ec18 * 0x5c670b6a888fee57 ^ uRam000000018341ede0) + uVar3;
  uRam000000018341ed58 = uRam000000018341ec18 ^ uRam000000018341ede0;
  uRam000000018341ed18 = 0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5332,0x100);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fa41c41 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a42b18 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aQ; xT (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18fa4a8a0, runtime 6ffff765a8a0) =====

void FUN_18fa4a8a0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018fa4a8eb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a44b20 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aQ; xU (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18fa4b8b0, runtime 6ffff765b8b0) =====

void FUN_18fa4b8b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fa4b939 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a450e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



