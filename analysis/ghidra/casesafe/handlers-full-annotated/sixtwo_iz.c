// ===== Lsixtwo/iz; _45fb4338132e5801a8181880c713bccf ()V (handler @ image 188e720c0, runtime 6ffff0a820c0) =====

void FUN_188e720c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188e721a8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c6638 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; bpA (Ljava/util/List;)V (handler @ image 188d81450, runtime 6ffff0991450) =====

void FUN_188d81450(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d81475 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187c10 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpB (Ljava/util/List;)V (handler @ image 188d81640, runtime 6ffff0991640) =====

void FUN_188d81640(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d81665 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187ce0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpC (Ljava/util/List;)V (handler @ image 188d81830, runtime 6ffff0991830) =====

void FUN_188d81830(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d81855 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187db0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpD (Ljava/util/List;)V (handler @ image 188d81a20, runtime 6ffff0991a20) =====

void FUN_188d81a20(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d81a45 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187e80 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpE (Ljava/lang/Object;)Z (handler @ image 188d8fa40, runtime 6ffff099fa40) =====

void FUN_188d8fa40(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x17b6d,0x3ce);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188d8fa91 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18118ce70 + (ulonglong)(param_3 == 0 || cVar1 != '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; bpF (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 188e31580, runtime 6ffff0a41580) =====

undefined8 FUN_188e31580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/iz; bpG ([B)Ljava/lang/String; (handler @ image 188e31810, runtime 6ffff0a41810) =====

void FUN_188e31810(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000188e318b3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811bafa0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpH (IJ)Ljava/lang/String; (handler @ image 188e58d00, runtime 6ffff0a68d00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e58d00(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar4 = (~uRam00000001831f9948 + 0xeaf9bc0745204e8a) *
          ((uRam00000001831f9a88 ^ 0x5f8006df2ec2071f) +
          (uRam00000001831f9a88 & 0x5f8006df2ec2071f) * 2);
  uVar4 = (uVar4 | uRam00000001831f9958) + (uVar4 & uRam00000001831f9958);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f9c08 =
       func_0x000188e5fe80((uVar4 | 0xb579bad86be24996) + (uVar4 & 0xb579bad86be24996));
  uVar4 = uRam00000001831f9c08 >> 1 | uRam00000001831f9c08;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ uRam00000001831f9c08) & 0x3fffffffffffffff;
  uRam00000001831f9918 = (uRam00000001831f9918 ^ uVar4) + 0xb579bad8efc06ab3 ^ 0xfb2d473c10a4e196;
  uRam00000001831f9b40 = (uRam00000001831f9b40 * 0x108d4f1b1e8701 ^ uRam00000001831f9918) + uVar4;
  uRam00000001831f9918 = uRam00000001831f9b40 ^ uRam00000001831f9918;
  uRam00000001831f9c48 = 0xb579bad8efc06ab3;
  uVar4 = (~uRam00000001831f99e0 + 0xf797b359f3eb9a1) *
          ((uRam00000001831f99d0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831f99d0 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001831f9b30) + (uVar4 & uRam00000001831f9b30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f9b30 =
       func_0x000188e5fe80((uVar4 | 0xf797b351b1c9a85) + (uVar4 & 0xf797b351b1c9a85));
  uVar4 = uRam00000001831f9b30 ^ 0xf797b359f3eb9a0;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4;
  uVar4 = uVar4 << 0x32 | (uVar4 & 0x7fffffffffffffff) >> 0xe;
  uRam00000001831f9918 = (uRam00000001831f9918 ^ uVar4) + 0xf08684ca60c14660 ^ 0x3e53d8bf161ff7b0;
  uRam00000001831f9b10 = (uRam00000001831f9b10 * -0x5d7c7b03ca568427 ^ uRam00000001831f9918) + uVar4
  ;
  uRam00000001831f9c48 = uRam00000001831f9b10 ^ uRam00000001831f9918;
  uRam00000001831f9b98 = 0xf08684ca60c14660;
  uVar4 = (uRam00000001831f9a60 ^ _UNK_1811c1a60) + uRam00000001831f9c08 + 0x84225cda;
  uVar5 = (uRam00000001831f9c08 ^ _UNK_1811c1a68) + uRam00000001831f9a60 + 0xf797b359f3eb9a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9a60 ^ _UNK_1811c1a60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9c08 ^ _UNK_1811c1a68;
  uRam00000001831f9a88 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831f9a60 + 0xf797b359f3eb9a0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9c08 + 0x84225cda));
  uVar4 = uRam00000001831f9a88 ^ 0xae215469bd914660;
  uRam00000001831f9b78 = uRam00000001831f9af8 ^ uVar4 ^ 0xf797b359f3f399f;
  uRam00000001831f9c80 = (uRam00000001831f9c80 ^ uVar4) + 0xf797b359f3f399f ^ 0x6ae4640bf530ad1e;
  uRam00000001831f9c50 = (uRam00000001831f9c50 * -0x3ba26185e9337b8f ^ uRam00000001831f9c80) + uVar4
  ;
  uRam00000001831f9c58 = uRam00000001831f9c50 ^ uRam00000001831f9c80;
  uRam00000001831f9af0 = 0xf797b359f3f399f;
  uVar4 = (uRam00000001831f9af8 ^ _UNK_1811c1a70) + uRam00000001831f9ca8 + 0xf797b351b1d1aba;
  uVar5 = (uRam00000001831f9ca8 ^ _UNK_1811c1a78) + uRam00000001831f9af8 + 0xf08684ca60c14660;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9af8 ^ _UNK_1811c1a70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9ca8 ^ _UNK_1811c1a78;
  uRam00000001831f9b28 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831f9af8 + 0xf08684ca60c14660) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001831f9ca8 + 0xf797b351b1d1aba));
  uVar4 = (uRam00000001831f9b28 ^ 0xffffffffffff7fff) * 0x27b53ea6f090000 |
          (uRam00000001831f9b28 ^ 0xffffffffffff7fff) * 0x101a027b53ea6f09 >> 0x30;
  uRam00000001831f9930 = uRam00000001831f99d8 ^ uVar4 ^ 0x7fff;
  uRam00000001831f9b58 = (uRam00000001831f9b58 ^ uVar4) + 0x7fff ^ 0x234af4a9e57da341;
  uRam00000001831f9b18 = (uRam00000001831f9b18 * -0x171f4790f7aec6e9 ^ uRam00000001831f9b58) + uVar4
  ;
  uRam00000001831f9b50 = uRam00000001831f9b18 ^ uRam00000001831f9b58;
  uRam00000001831f9b70 = 0x7fff;
  uVar4 = (~uRam00000001831f9c08 + 0x826f2151c3a157e1) *
          ((uRam00000001831f9a98 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831f9a98 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001831f9b98) + (uVar4 & uRam00000001831f9b98);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f9c18 =
       func_0x000188e5fe80((uVar4 | 0x826f2151478374c5) + (uVar4 & 0x826f2151478374c5));
  uRam00000001831f9af0 =
       (uRam00000001831f9af0 ^ uRam00000001831f9c18) + 0x7d90deae3c5ea820 ^ 0xdf6c36f8da5ce6f0;
  uRam00000001831f99d0 =
       (uRam00000001831f99d0 * 0x5fd0ca4f35c260ab ^ uRam00000001831f9af0) + uRam00000001831f9c18;
  uRam00000001831f99a8 = uRam00000001831f99d0 ^ uRam00000001831f9af0;
  uRam00000001831f99b0 = 0x7d90deae3c5ea820;
  uRam00000001831f9c48 = func_0x000188e5fe80(lRam00000001831f9a90 + 0x2ef9654529df8081U ^ 0x5e);
  uVar4 = (ulonglong)((uint)uRam00000001831f9c48 & 0x7fff);
  uRam00000001831f9a28 = uRam00000001831f9c68 ^ uVar4 ^ 0x826f2151c3a1d7df;
  uRam00000001831f9a40 = (uRam00000001831f9a40 ^ uVar4) + 0x826f2151c3a1d7df ^ 0x58d6b9c9d74d4845;
  uRam00000001831f9af0 = (uRam00000001831f9af0 * -0x7c61caa2c34a5171 ^ uRam00000001831f9a40) + uVar4
  ;
  uRam00000001831f9b68 = uRam00000001831f9af0 ^ uRam00000001831f9a40;
  uRam00000001831f9a38 = 0x826f2151c3a1d7df;
  uRam00000001831f9bc0 = func_0x000188e5fe80(uRam00000001831f9c88 ^ 0xfb4c2b28cac8b2c8);
  uVar4 = uRam00000001831f9948 * -0x24608e98a75079dd;
  uRam00000001831f9b78 = uRam00000001831f9a18 ^ uVar4 ^ 0x7fff;
  uRam00000001831f99a0 = (uRam00000001831f99a0 ^ uVar4) + 0x7fff ^ 0xc8ca016296d59380;
  uRam00000001831f9b98 = (uRam00000001831f9b98 * -0xf4f7e38dd053879 ^ uRam00000001831f99a0) + uVar4;
  uRam00000001831f9b90 = uRam00000001831f9b98 ^ uRam00000001831f99a0;
  uRam00000001831f9940 = 0x7fff;
  uRam00000001831f9b50 = func_0x000188e5fe80(uRam00000001831f9910 + 0x6ae65dc3dfdb1b41 ^ 0xad);
  uRam00000001831f9928 =
       (uRam00000001831f9928 ^ uRam00000001831f9b50 & 0xfffffffffffffe00) + 0x42a67f75f83fcd05 ^
       0x50de116233b688de;
  uRam00000001831f9ac8 =
       (uRam00000001831f9ac8 * 0x4e2f5b05d5469ead ^ uRam00000001831f9928) +
       (uRam00000001831f9b50 & 0xfffffffffffffe00);
  uRam00000001831f9cd8 = uRam00000001831f9ac8 ^ uRam00000001831f9928;
  uRam00000001831f9aa0 = 0x42a67f75f83fcd05;
  uVar4 = (uRam00000001831f9a10 ^ _UNK_1811c1a80) + uRam00000001831f9c10 + 0xf7dfc5ad93dd8493;
  uVar5 = (uRam00000001831f9c10 ^ _UNK_1811c1a88) + uRam00000001831f9a10 + 0xb579bad8efc06ab3;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9a10 ^ _UNK_1811c1a80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9c10 ^ _UNK_1811c1a88;
  uRam00000001831f9a50 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831f9a10 + 0xb579bad8efc06ab3) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001831f9c10 + 0xf7dfc5ad93dd8493));
  uRam00000001831f9c30 =
       (uRam00000001831f9c30 ^ uRam00000001831f9a50 ^ 0xf7dfc5ad17ffa7b6) + 0xb559808807c022b2 ^
       0x39605ce9288e1b0b;
  uRam00000001831f9918 =
       (uRam00000001831f9918 * 0x32d7aa1810cb9379 ^ uRam00000001831f9c30) +
       (uRam00000001831f9a50 ^ 0xf7dfc5ad17ffa7b6);
  uRam00000001831f9960 = uRam00000001831f9918 ^ uRam00000001831f9c30;
  uRam00000001831f9ce8 = 0xb559808807c022b2;
  uVar4 = (~uRam00000001831f9a00 + 0x6ab301100f804565) *
          ((uRam00000001831f9b90 ^ 0x42a67f757c1dee20) +
          (uRam00000001831f9b90 & 0x42a67f757c1dee20) * 2);
  uVar4 = (uVar4 | uRam00000001831f9a50) + (uVar4 & uRam00000001831f9a50);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f9908 =
       func_0x000188e5fe80((uVar4 | 0x28157e65739dab44) + (uVar4 & 0x28157e65739dab44));
  uRam00000001831f99f8 =
       (uRam00000001831f99f8 ^ uRam00000001831f9908 ^ 0x42a67f75f83fcd05) + 0xad59808607c01269 ^
       0xb57d72a07513a1a;
  uRam00000001831f9c38 =
       (uRam00000001831f9c38 * -0x7072e1056411bda3 ^ uRam00000001831f99f8) +
       (uRam00000001831f9908 ^ 0x42a67f75f83fcd05);
  uRam00000001831f9988 = uRam00000001831f9c38 ^ uRam00000001831f99f8;
  uRam00000001831f9ac0 = 0xad59808607c01269;
  uVar4 = (~uRam00000001831f9a10 + 0xad59808607c0126a) *
          ((uRam00000001831f9ba0 ^ 0xad59808683e2314c) +
          (uRam00000001831f9ba0 & 0x2d59808683e2314c) * 2);
  uVar4 = (uVar4 | uRam00000001831f9c20) + (uVar4 & uRam00000001831f9c20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f9980 =
       func_0x000188e5fe80((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uVar4 = uRam00000001831f9980 ^ 0xad59808607c01269;
  uVar5 = (uVar4 & 0x7fffffffffffffff) - ((uVar4 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam00000001831f9ce8 =
       (uVar4 & 0x7fffffffffffffff) >> 0x28 |
       ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
       uVar4 & 0x7fffffffffffffff) << 0x18;
  uRam00000001831f9bf8 = uRam00000001831f9bf8 ^ uRam00000001831f9ce8 ^ 0xd4c1548ef0a06b97;
  uRam00000001831f9a18 =
       (uRam00000001831f9a18 * 0x46f6687a0e626083 ^ uRam00000001831f9bf8) + uRam00000001831f9ce8;
  uRam00000001831f9b18 = uRam00000001831f9a18 ^ uRam00000001831f9bf8;
  uRam00000001831f9b68 = 0;
  uVar4 = (uRam00000001831f9958 ^ 0x84225cda) + uRam00000001831f9958 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9958 ^ 0x84225cda;
  uVar5 = (uRam00000001831f9958 << 0xe | (uRam00000001831f9958 & 0x7fffffffffffffff) >> 0x32) ^
          uRam00000001831f9958;
  uRam00000001831f9b50 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001831f9958 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9958 + 0x84225cda));
  uVar4 = uRam00000001831f9b50 * -0x6b74542bdf175ef1 ^ 0x7fff;
  uRam00000001831f9c58 = uRam00000001831f9bb0 ^ uVar4 ^ 0x7fff;
  uRam00000001831f9af8 = (uRam00000001831f9af8 ^ uVar4) + 0x7fff ^ 0x3955892e0af1f49d;
  uRam00000001831f9c38 = (uRam00000001831f9c38 * 0x278306a50c80509f ^ uRam00000001831f9af8) + uVar4;
  uRam00000001831f9c68 = uRam00000001831f9c38 ^ uRam00000001831f9af8;
  uRam00000001831f9958 = 0x7fff;
  uVar4 = (uRam00000001831f9a78 ^ _UNK_1811c1a90) + uRam00000001831f99c0 + 0xf7dfc5ad93dd8493;
  uVar5 = (uRam00000001831f99c0 ^ _UNK_1811c1a98) + (uRam00000001831f9a78 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9a78 ^ _UNK_1811c1a90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f99c0 ^ _UNK_1811c1a98;
  uRam00000001831f9ca0 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9a78 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001831f99c0 + 0xf7dfc5ad93dd8493));
  uRam00000001831f9c20 =
       (uRam00000001831f9c20 ^ ~uRam00000001831f9ca0) + 0x8203a52e8005849 ^ 0xc8ccc4ec9551dddb;
  uRam00000001831f99a0 =
       (uRam00000001831f99a0 * 0x40966ecdbddb5b1 ^ uRam00000001831f9c20) + ~uRam00000001831f9ca0;
  uRam00000001831f9bf8 = uRam00000001831f99a0 ^ uRam00000001831f9c20;
  uRam00000001831f9ae0 = 0x8203a52e8005849;
  uVar4 = (uRam00000001831f9a30 ^ _UNK_1811c1aa0) + uRam00000001831f9a38 + 0xf7dfc5ad93dd8493;
  uVar5 = (uRam00000001831f9a38 ^ _UNK_1811c1aa8) + uRam00000001831f9a30 + 0x8203a52e8005849;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9a30 ^ _UNK_1811c1aa0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9a38 ^ _UNK_1811c1aa8;
  uRam00000001831f9960 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831f9a30 + 0x8203a52e8005849) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001831f9a38 + 0xf7dfc5ad93dd8493));
  uVar4 = (uRam00000001831f9960 << 2 | uRam00000001831f9960 >> 0x3e) >> 1 |
          (uRam00000001831f9960 >> 0x3e) << 0x3f;
  uRam00000001831f9b30 = uRam00000001831f9b30 ^ uVar4 ^ 0x795da3ddfb683f04;
  uRam00000001831f9c38 = (uRam00000001831f9c38 * -0x4aa20a7322e7e9d3 ^ uRam00000001831f9b30) + uVar4
  ;
  uRam00000001831f9b48 = uRam00000001831f9c38 ^ uRam00000001831f9b30;
  uRam00000001831f9a78 = uRam00000001831f9b20;
  uRam00000001831f9ad8 = 0;
  uRam00000001831f9ad0 = func_0x000188e5fe80(uRam00000001831f9c08 + 0x34007cca0021ff);
  uVar4 = uRam00000001831f9ad0 ^ 0x7fff;
  uRam00000001831f9ce0 = uRam00000001831f9a58 ^ uVar4 ^ 0x7fff;
  uRam00000001831f9970 = (uRam00000001831f9970 ^ uVar4) + 0x7fff ^ 0x406c10568fc7e5b6;
  uRam00000001831f9930 = (uRam00000001831f9930 * 0x3236cd5057b93715 ^ uRam00000001831f9970) + uVar4;
  uRam00000001831f9c90 = uRam00000001831f9930 ^ uRam00000001831f9970;
  uRam00000001831f99f8 = 0x7fff;
  uRam00000001831f99e0 = func_0x000188e5fe80(uRam00000001831f9cd0 + 0x1d0084230021ff ^ 0x25);
  uRam00000001831f9af8 =
       uRam00000001831f9af8 ^ uRam00000001831f99e0 ^ 0x939a8429174b2786 ^ 0xa199014eb88cc0b9;
  uRam00000001831f99a0 =
       (uRam00000001831f99a0 * -0x6f72730db58e2647 ^ uRam00000001831f9af8) +
       (uRam00000001831f99e0 ^ 0x939a8429174b2786);
  uRam00000001831f9948 = uRam00000001831f99a0 ^ uRam00000001831f9af8;
  uRam00000001831f9b88 = 0;
  uVar4 = (uRam00000001831f9c78 ^ 0x84225cda) + uRam00000001831f9b40 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9c78 ^ 0x84225cda;
  uVar5 = ((uRam00000001831f9b40 + uRam00000001831f9c78) * 0x2000 |
          uRam00000001831f9b40 + uRam00000001831f9c78 >> 0x33) ^ uRam00000001831f9b40;
  uRam00000001831f9c40 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001831f9c78 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9b40 + 0x84225cda));
  uVar4 = (uRam00000001831f9c40 ^ 0x7ffc) & 0xfffffffffffffffc;
  uRam00000001831f9920 = uRam00000001831f9b78 ^ uVar4 ^ 0x7fff;
  uRam00000001831f9bf0 = (uRam00000001831f9bf0 ^ uVar4) + 0x7fff ^ 0xdac59eb941981201;
  uRam00000001831f9b18 = (uRam00000001831f9b18 * 0x78c4e729914450ef ^ uRam00000001831f9bf0) + uVar4;
  uRam00000001831f9c20 = uRam00000001831f9b18 ^ uRam00000001831f9bf0;
  auVar7._8_8_ = _UNK_18019c088;
  auVar7._0_8_ = param_4 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _UNK_1811c1ab0,_UNK_1800170c0);
  uRam00000001831f9cc0 = 0x7fff;
  uVar5 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar5 + uRam00000001831f9a50;
  if (auVar8._4_4_ < 0) {
    uVar4 = uRam00000001831f99d0 ^ uVar5;
  }
  uRam00000001831f9cc8 = func_0x000188e5fe80(SUB161(auVar7 ^ _UNK_1811c1ab0,5) ^ uVar4);
  uVar3 = (uint)param_4 & 0x7fff;
  uVar2 = (ulonglong)uVar3;
  uRam00000001831f9ce8 =
       (uRam00000001831f9ce8 ^ param_4 & uRam00000001831f9cc8) + uVar2 ^ 0x5fd7a44f551cb4af;
  uRam00000001831f9b90 =
       (uRam00000001831f9b90 * -0x752426e8827c30c1 ^ uRam00000001831f9ce8) +
       (param_4 & uRam00000001831f9cc8);
  uRam00000001831f9c70 = uRam00000001831f9b90 ^ uRam00000001831f9ce8;
  uVar5 = (ulonglong)param_3;
  uVar4 = uVar2 ^ 0x84222325 ^ uRam00000001831f99a8;
  lVar6 = (uVar2 ^ 0x84222325) + uRam00000001831f9b88;
  uVar9 = uVar4 + lVar6;
  uVar10 = (uVar5 ^ uRam00000001831f9b88) + uRam00000001831f99a8 + uVar5;
  uVar4 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar4;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar5 ^ uRam00000001831f9b88;
  uRam00000001831f9a80 = uVar2;
  uRam00000001831f9a30 =
       func_0x000188e5fe80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831f99a8 + uVar5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar6);
  uRam00000001831f9a88 = (uVar2 + uVar5) - (ulonglong)((param_3 & uVar3) * 2);
  uRam00000001831f9b98 =
       (uRam00000001831f9b98 ^ uRam00000001831f9a30 & 0xfffffffff) + uRam00000001831f9a88 ^
       0x659d85a0ef8c4309;
  uRam00000001831f99c0 =
       (uRam00000001831f99c0 * -0x68127a9c98dffc7f ^ uRam00000001831f9b98) +
       (uRam00000001831f9a30 & 0xfffffffff);
  uRam00000001831f9a80 = uRam00000001831f99c0 ^ uRam00000001831f9b98;
  uRam00000001831f9a88 = uRam00000001831f9a88 & 0xffffffff;
  uRam00000001831f9ce0 = func_0x000188e5fe80(uRam00000001831f9bf8 + 0x7dffa655ffd1ff ^ 0xbd);
  uVar4 = uRam00000001831f9ce0 << 0x2c | uRam00000001831f9ce0 >> 0x14;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar4;
  uRam00000001831f9ae8 = (uRam00000001831f9ae8 ^ uVar4) + 0x7d70a59f ^ 0x4c7c475032a58ae2;
  uRam00000001831f9b30 = (uRam00000001831f9b30 * 0x3d26b25e03ec25ed ^ uRam00000001831f9ae8) + uVar4;
  uRam00000001831f9a88 = uRam00000001831f9b30 ^ uRam00000001831f9ae8;
  uRam00000001831f9c48 = 0x7d70a59f;
  uVar4 = (uRam00000001831f9cc8 ^ _UNK_1811c1ac0) + uRam00000001831f9b78 + 0x84222325;
  uVar5 = (uRam00000001831f9b78 ^ _UNK_1811c1ac8) + uRam00000001831f9cc8 + 0x83c44694;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9cc8 ^ _UNK_1811c1ac0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9b78 ^ _UNK_1811c1ac8;
  uRam00000001831f9cc8 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9cc8 + 0x83c44694) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9b78 + 0x84222325));
  uRam00000001831f9a50 =
       (uRam00000001831f9a50 ^ uRam00000001831f9cc8 * 0x5269946c99c8269b) - 0x83c44694 ^
       0xfc10b6c2e0f2df87;
  uRam00000001831f9b78 =
       (uRam00000001831f9b78 * 0x6ddf6af19e653ea5 ^ uRam00000001831f9a50) +
       uRam00000001831f9cc8 * 0x5269946c99c8269b;
  uRam00000001831f9c20 = uRam00000001831f9b78 ^ uRam00000001831f9a50;
  uRam00000001831f9950 = 0x7c3bb96c;
  uVar4 = (~uRam00000001831f9a98 + 0x83c44695) *
          ((uRam00000001831f9ae8 ^ 0x84226aa4) +
          (ulonglong)((uint)uRam00000001831f9ae8 & 0x84226aa4) * 2);
  uVar4 = (uVar4 | uRam00000001831f9bf0) + (uVar4 & uRam00000001831f9bf0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f99b8 =
       func_0x000188e5fe80((uVar4 | 0x7e62c30) + (ulonglong)((uint)uVar4 & 0x7e62c30));
  uVar4 = uRam00000001831f99b8 << 0x20 | uRam00000001831f99b8 >> 0x20;
  uRam00000001831f9ac0 = uRam00000001831f9bd8 ^ uVar4 ^ 0x83c49015;
  uRam00000001831f99d8 = (uRam00000001831f99d8 ^ uVar4) + 0x83c49015 ^ 0x3cbc56098bda3e2a;
  uRam00000001831f99d0 = (uRam00000001831f99d0 * 0x157b1f5aa3cf26e9 ^ uRam00000001831f99d8) + uVar4;
  uRam00000001831f99c8 = uRam00000001831f99d0 ^ uRam00000001831f99d8;
  uRam00000001831f99e0 = 0x83c49015;
  uVar4 = (uRam00000001831f9b30 ^ _UNK_1811c1ad0) + uRam00000001831f9c40 + 0x84222325;
  uVar5 = (uRam00000001831f9c40 ^ _UNK_1811c1ad8) + uRam00000001831f9b30 + 0x9c6f5bec;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9b30 ^ _UNK_1811c1ad0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9c40 ^ _UNK_1811c1ad8;
  uRam00000001831f9a20 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9b30 + 0x9c6f5bec) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9c40 + 0x84222325));
  uVar4 = uRam00000001831f9a20 >> 1 | uRam00000001831f9a20;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001831f9a20;
  uRam00000001831f99b8 = (uRam00000001831f99b8 ^ uVar4) - 0x9c6f5bec ^ 0xff5b779a289c5256;
  uRam00000001831f9ad8 = (uRam00000001831f9ad8 * 0x5ab2f25b68d540ab ^ uRam00000001831f99b8) + uVar4;
  uRam00000001831f9a70 = uRam00000001831f9ad8 ^ uRam00000001831f99b8;
  uRam00000001831f9c40 = 0x6390a414;
  uVar4 = (~uRam00000001831f9b70 + 0x9c6f5bed) *
          ((uRam00000001831f9c20 ^ 0x84226aa4) +
          (ulonglong)((uint)uRam00000001831f9c20 & 0x84226aa4) * 2);
  uVar4 = (uVar4 | uRam00000001831f9b40) + (uVar4 & uRam00000001831f9b40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f9b58 =
       func_0x000188e5fe80((uVar4 | 0x184d3148) + (ulonglong)((uint)uVar4 & 0x184d3148));
  uVar4 = uRam00000001831f9b58 ^ 0x9c6f5bed;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4;
  uRam00000001831f9ae0 = uRam00000001831f9b00 ^ uVar4 ^ 0x9c6fa56d;
  uRam00000001831f9ac8 = (uRam00000001831f9ac8 ^ uVar4) + 0x9c6fa56d ^ 0x81b3441671a39464;
  uRam00000001831f9ab0 = (uRam00000001831f9ab0 * -0x2a90669eb4fbe061 ^ uRam00000001831f9ac8) + uVar4
  ;
  uRam00000001831f9b90 = uRam00000001831f9ab0 ^ uRam00000001831f9ac8;
  uRam00000001831f9950 = 0x9c6fa56d;
  uRam00000001831f9b60 = func_0x000188e5fe80(uRam00000001831f9cf0 + 0x66ffab430045ff ^ 0x58);
  uRam00000001831f9bd0 =
       (uRam00000001831f9bd0 ^ uRam00000001831f9b60 & 0x7fffffffffffffff) - 0x6f988a60 ^
       0x5a26fa7a1fde235a;
  uRam00000001831f9a70 =
       (uRam00000001831f9a70 * -0x11f83945a0f4897d ^ uRam00000001831f9bd0) +
       (uRam00000001831f9b60 & 0x7fffffffffffffff);
  uRam00000001831f9a18 = uRam00000001831f9a70 ^ uRam00000001831f9bd0;
  uRam00000001831f9ad8 = 0x906775a0;
  uVar4 = (~uRam00000001831f9a88 + 0x6f988a61) *
          ((uRam00000001831f9998 ^ 0x84226aa4) +
          (ulonglong)((uint)uRam00000001831f9998 & 0x84226aa4) * 2);
  uVar4 = (uVar4 | uRam00000001831f9ab0) + (uVar4 & uRam00000001831f9ab0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f9c40 =
       func_0x000188e5fe80((uVar4 | 0xebbae0c4) + (ulonglong)((uint)uVar4 & 0xebbae0c4));
  uVar5 = uRam00000001831f9c40 ^ 0x200abb531a60;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5) &
          0x1fffffffffff;
  uRam00000001831f9c70 = uRam00000001831f99e8 ^ uVar4 ^ 0x6f98d3e1;
  uRam00000001831f9920 = (uRam00000001831f9920 ^ uVar4) + 0x6f98d3e1 ^ 0xd15eb5f3bba6df86;
  uRam00000001831f9bb0 = (uRam00000001831f9bb0 * -0x52f10b6754670fe7 ^ uRam00000001831f9920) + uVar4
  ;
  uRam00000001831f9a00 = uRam00000001831f9bb0 ^ uRam00000001831f9920;
  uRam00000001831f99d8 = 0x6f98d3e1;
  uRam00000001831f9bd0 = func_0x000188e5fe80(uRam00000001831f9be0 ^ 0x8300156400bc45);
  uVar5 = _UNK_1811c1ae8;
  uVar4 = _UNK_1811c1ae0;
  uVar2 = uRam00000001831f9bd0 ^ 0x6f988241;
  uRam00000001831f9a00 = uRam00000001831f99b0 ^ uVar2 ^ 0x100004981;
  uRam00000001831f9a10 = (uRam00000001831f9a10 ^ uVar2) + 0x100004981 ^ 0x82c761463656cf45;
  uRam00000001831f9c88 = (uRam00000001831f9c88 * 0x1584307e16316e71 ^ uRam00000001831f9a10) + uVar2;
  uRam00000001831f9c70 = uRam00000001831f9c88 ^ uRam00000001831f9a10;
  uRam00000001831f9b58 = 0x4981;
  uVar2 = (uRam00000001831f9a00 ^ _UNK_1811c1ae0) + uRam00000001831f9bd0 + 0xe39cdc1a;
  uVar9 = (uRam00000001831f9bd0 ^ _UNK_1811c1ae8) + uRam00000001831f9a00 + 0x7d70a59f;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831f9a00 ^ _UNK_1811c1ae0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831f9bd0 ^ _UNK_1811c1ae8;
  uRam00000001831f9be0 =
       func_0x000188e5fe80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831f9a00 + 0x7d70a59f) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831f9bd0 + 0xe39cdc1a));
  uVar2 = uRam00000001831f9be0 >> 1 | uRam00000001831f9be0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001831f9be0;
  uRam00000001831f9cb0 = uRam00000001831f9aa0 ^ uVar2 ^ 0xe52fa4de;
  uRam00000001831f9c88 = (uRam00000001831f9c88 ^ uVar2) + 0xe52fa4de ^ 0xe68239abfaad4c4;
  uRam00000001831f9a08 = (uRam00000001831f9a08 * -0x795f63d172b654dd ^ uRam00000001831f9c88) + uVar2
  ;
  uRam00000001831f9b58 = uRam00000001831f9a08 ^ uRam00000001831f9c88;
  uRam00000001831f9b80 = 0xe52fa4de;
  uVar2 = (~uRam00000001831f9cf0 + 0x7d70a5a0) *
          ((uRam00000001831f9aa8 ^ 0xe39cdc1a) +
          (ulonglong)((uint)uRam00000001831f9aa8 & 0xe39cdc1a) * 2);
  uVar2 = (uVar2 | uRam00000001831f9ac8) + (uVar2 & uRam00000001831f9ac8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831f9b58 =
       func_0x000188e5fe80((uVar2 | 0x9eec7985) + (ulonglong)((uint)uVar2 & 0x9eec7985));
  uVar2 = (ulonglong)(~(uint)uRam00000001831f9b58 & 0x67beff3f);
  uRam00000001831f9bb0 = (uRam00000001831f9bb0 ^ uVar2) + 0x1ace5aa0 ^ 0x6837e144d1d2f1a4;
  uRam00000001831f9978 = (uRam00000001831f9978 * 0x70a9a65bed777a0b ^ uRam00000001831f9bb0) + uVar2;
  uRam00000001831f9a40 = uRam00000001831f9978 ^ uRam00000001831f9bb0;
  uRam00000001831f9ba8 = 0x1ace5aa0;
  uVar2 = (uRam00000001831f9c58 ^ uVar4) + uRam00000001831f9c88 + 0xe39cdc1a;
  uVar9 = (uRam00000001831f9c88 ^ uVar5) + uRam00000001831f9c58 + 0x7d70a59f;
  uVar4 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831f9c58 ^ uVar4;
  uVar5 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831f9c88 ^ uVar5;
  uRam00000001831f9b98 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9c58 + 0x7d70a59f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9c88 + 0xe39cdc1a));
  uVar4 = uRam00000001831f9b98 << 0x2b | uRam00000001831f9b98 >> 0x15;
  uRam00000001831f9a58 = (uRam00000001831f9a58 ^ uVar4) + 0x6530a51f ^ 0x600a001bf2199ea5;
  uRam00000001831f9ad8 = (uRam00000001831f9ad8 * -0x3e038f6662a62517 ^ uRam00000001831f9a58) + uVar4
  ;
  uRam00000001831f99d8 = uRam00000001831f9ad8 ^ uRam00000001831f9a58;
  uRam00000001831f9948 = 0x6530a51f;
  uVar4 = (uRam00000001831f9928 ^ _UNK_1811c1af0) + uRam00000001831f9980 + 0x9eec7985;
  uVar5 = (uRam00000001831f9980 ^ _UNK_1811c1af8) + uRam00000001831f9928 + 0xca614a3e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9928 ^ _UNK_1811c1af0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9980 ^ _UNK_1811c1af8;
  uRam00000001831f9b00 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9928 + 0xca614a3e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9980 + 0x9eec7985));
  uVar4 = uRam00000001831f9b00 * 0x64b1dce93abe872f;
  uRam00000001831f9ab0 = uRam00000001831f9c60 ^ uVar4 ^ 0xe52fa4de;
  uRam00000001831f9a10 = (uRam00000001831f9a10 ^ uVar4) + 0xe52fa4de ^ 0xdc164d8a39e0d5a4;
  uRam00000001831f99c0 = (uRam00000001831f99c0 * -0x50195b4b0492e625 ^ uRam00000001831f9a10) + uVar4
  ;
  uRam00000001831f9c00 = uRam00000001831f99c0 ^ uRam00000001831f9a10;
  uRam00000001831f9950 = 0xe52fa4de;
  uRam00000001831f9c80 = func_0x000188e5fe80(uRam00000001831f9b88 ^ 0x59ff7c9c001dcb);
  uRam00000001831f9a80 = uRam00000001831f9c48 ^ uRam00000001831f9a60 ^ 0x4981;
  uRam00000001831f9950 = (uRam00000001831f9950 ^ uRam00000001831f9a60) + 0x4981 ^ 0x5cc5722df1008f77
  ;
  uRam00000001831f9ce0 =
       (uRam00000001831f9ce0 * 0x14963cea91d4f331 ^ uRam00000001831f9950) + uRam00000001831f9a60;
  uRam00000001831f9ac0 = uRam00000001831f9ce0 ^ uRam00000001831f9950;
  uRam00000001831f9bf8 = 0x4981;
  uVar4 = (~uRam00000001831f9ae8 + 0x100000000) *
          ((uRam00000001831f9918 ^ 0xe39cdc1a) +
          (ulonglong)((uint)uRam00000001831f9918 & 0xe39cdc1a) * 2);
  uVar4 = (uVar4 | uRam00000001831f9ab8) + (uVar4 & uRam00000001831f9ab8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831f9960 =
       func_0x000188e5fe80((uVar4 | 0x1c6323e5) + (ulonglong)((uint)uVar4 & 0x1c6323e5));
  uVar4 = (uRam00000001831f9960 ^ 0x67beff3e984100c1) >> 0x35;
  uVar4 = uVar4 << 0x3e |
          (((uRam00000001831f9960 ^ 0x67beff3e984100c1) & 0xfffffffffffff) << 0xb | uVar4) >> 2;
  uRam00000001831f9a00 = (uRam00000001831f9a00 ^ uVar4) + 0x984100c0 ^ 0xd0318ae66c71ff93;
  uRam00000001831f9cb0 = (uRam00000001831f9cb0 * 0x394fd7e9113eab29 ^ uRam00000001831f9a00) + uVar4;
  uRam00000001831f9cd0 = uRam00000001831f9cb0 ^ uRam00000001831f9a00;
  uRam00000001831f99e8 = 0x984100c0;
  uVar4 = (uRam00000001831f9b08 ^ _UNK_1811c1b00) + uRam00000001831f9af8 + 0xe39cdc1a;
  uVar5 = (uRam00000001831f9af8 ^ _UNK_1811c1b08) + uRam00000001831f9b08 + 0x984100c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9b08 ^ _UNK_1811c1b00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9af8 ^ _UNK_1811c1b08;
  uRam00000001831f9af8 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9b08 + 0x984100c0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9af8 + 0xe39cdc1a));
  uVar4 = uRam00000001831f9af8 >> 1 | uRam00000001831f9af8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001831f9af8;
  uRam00000001831f9948 = uRam00000001831f9948 ^ uVar4 ^ 0xd8e01a82f3c3e51e;
  uRam00000001831f9ac8 = (uRam00000001831f9ac8 * -0x6f2f7871dbe57 ^ uRam00000001831f9948) + uVar4;
  uRam00000001831f9a08 = uRam00000001831f9ac8 ^ uRam00000001831f9948;
  uRam00000001831f9b58 = 0;
  uVar4 = (uRam00000001831f9910 ^ 0x84226aa4) + uRam00000001831f9970 + 0x84226aa4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9910 ^ 0x84226aa4;
  uVar5 = ((uRam00000001831f9970 + uRam00000001831f9910) * 0x2000 |
          uRam00000001831f9970 + uRam00000001831f9910 >> 0x33) ^ uRam00000001831f9970;
  uRam00000001831f9a20 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001831f9910 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9970 + 0x84226aa4));
  uVar4 = (ulonglong)(~(uint)uRam00000001831f9a20 & 0x4981) ^ 0x4981;
  uRam00000001831f9a68 = uRam00000001831f9b68 ^ uVar4 ^ 0x4981;
  uRam00000001831f99a8 = (uRam00000001831f99a8 ^ uVar4) + 0x4981 ^ 0x3d29ac215a574123;
  uRam00000001831f9c30 = (uRam00000001831f9c30 * -0x3bf20e81c0e41c9f ^ uRam00000001831f99a8) + uVar4
  ;
  uRam00000001831f9b40 = uRam00000001831f9c30 ^ uRam00000001831f99a8;
  uRam00000001831f9b98 = 0x4981;
  uVar4 = (uRam00000001831f9ae0 ^ _UNK_1811c1b10) + uRam00000001831f9c70 + 0xa5149f1b;
  uVar5 = (uRam00000001831f9c70 ^ _UNK_1811c1b18) + uRam00000001831f9ae0 + 0x2136bc3e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9ae0 ^ _UNK_1811c1b10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9c70 ^ _UNK_1811c1b18;
  uRam00000001831f9a30 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9ae0 + 0x2136bc3e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9c70 + 0xa5149f1b));
  uRam00000001831f99d0 = uRam00000001831f99d0 ^ uRam00000001831f9a30 ^ 0xef32062327c47b7f;
  uRam00000001831f99b0 =
       (uRam00000001831f99b0 * 0x7f4b8e163316d809 ^ uRam00000001831f99d0) + uRam00000001831f9a30;
  uRam00000001831f9a20 = uRam00000001831f99b0 ^ uRam00000001831f99d0;
  uRam00000001831f9980 = 0;
  uVar4 = (uRam00000001831f9948 ^ 0x84226aa4) + uRam00000001831f9b48 + 0x84226aa4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831f9948 ^ 0x84226aa4;
  uVar5 = ((uRam00000001831f9b48 + uRam00000001831f9948) * 0x2000 |
          uRam00000001831f9b48 + uRam00000001831f9948 >> 0x33) ^ uRam00000001831f9b48;
  uRam00000001831f9ce8 =
       func_0x000188e5fe80((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001831f9948 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831f9b48 + 0x84226aa4));
  uVar4 = (ulonglong)((uint)uRam00000001831f9ce8 & 0x4981);
  uRam00000001831f9b08 = uRam00000001831f9ae8 ^ uVar4 ^ 0x4981;
  uRam00000001831f9ab0 = (uRam00000001831f9ab0 ^ uVar4) + 0x4981 ^ 0x824bf825c7f14d4e;
  uRam00000001831f9918 = (uRam00000001831f9918 * -0x2b22c40e7ef0af51 ^ uRam00000001831f9ab0) + uVar4
  ;
  uRam00000001831f9968 = uRam00000001831f9918 ^ uRam00000001831f9ab0;
  uRam00000001831f9bd0 = 0x4981;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x17b6d,0x3ce);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188e5b57c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c00d8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; bpI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 188e5ff10, runtime 6ffff0a6ff10) =====

void FUN_188e5ff10(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000188e5ff4c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c1c40 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 188e60e00, runtime 6ffff0a70e00) =====

void FUN_188e60e00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188e60e7d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c2170 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; bpK (IJ)I (handler @ image 188e638c0, runtime 6ffff0a738c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188e638c0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  
  uVar2 = (~uRam00000001831fa490 + 0x35dd8ed35f8b24ba) *
          ((uRam00000001831fa108 ^ 0xe719bc5e918af653) +
          (uRam00000001831fa108 & 0x6719bc5e918af653) * 2);
  uVar2 = (uVar2 | uRam00000001831fa238) + (uVar2 & uRam00000001831fa238);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831fa0c0 =
       func_0x000188e6e310((uVar2 | 0xd2c4328dce01d2ea) + (uVar2 & 0xd2c4328dce01d2ea));
  uRam00000001831f9ea8 =
       (uRam00000001831f9ea8 ^ uRam00000001831fa0c0 * -0xaedd610e306fab9) + 0xf7ddbedf5fabf5ff ^
       0xe0ea8a8df5dc037c;
  uRam00000001831f9e20 =
       (uRam00000001831f9e20 * 0x3f3a80b618b14ab3 ^ uRam00000001831f9ea8) +
       uRam00000001831fa0c0 * -0xaedd610e306fab9;
  uRam00000001831fa0e8 = uRam00000001831f9e20 ^ uRam00000001831f9ea8;
  uRam00000001831fa178 = 0xf7ddbedf5fabf5ff;
  uRam00000001831f9fb8 = func_0x000188e6e310(uRam00000001831fa1e8 ^ 0x5022919a1a84d560);
  uVar2 = uRam00000001831f9fb8 << 0x19 | uRam00000001831f9fb8 >> 0x27;
  uRam00000001831fa478 = (uRam00000001831fa478 ^ uVar2) + 0xabb184706ef41d03 ^ 0xfee6b9cda998f9e5;
  uRam00000001831fa3f8 = (uRam00000001831fa3f8 * 0x39154e502122868f ^ uRam00000001831fa478) + uVar2;
  uRam00000001831fa350 = uRam00000001831fa3f8 ^ uRam00000001831fa478;
  uRam00000001831f9ff8 = 0xabb184706ef41d03;
  uVar2 = (uRam00000001831fa330 ^ _UNK_1811c4ed0) + uRam00000001831fa140 + 0x84222325;
  uVar5 = (uRam00000001831fa140 ^ _UNK_1811c4ed8) + uRam00000001831fa330 + 0x22260b5e90cc3810;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831fa330 ^ _UNK_1811c4ed0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831fa140 ^ _UNK_1811c4ed8;
  lRam00000001831fa430 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831fa330 + 0x22260b5e90cc3810) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831fa140 + 0x84222325));
  uRam00000001831fa408 =
       (uRam00000001831fa408 ^ lRam00000001831fa430 * 0x6d5e83d429c0db0f) + 0xddd9f4a16f33c7f0 ^
       0x2b5331145115dbde;
  uRam00000001831f9d88 =
       (uRam00000001831f9d88 * 0x47a7ae9320b0b485 ^ uRam00000001831fa408) +
       lRam00000001831fa430 * 0x6d5e83d429c0db0f;
  uRam00000001831f9f10 = uRam00000001831f9d88 ^ uRam00000001831fa408;
  uRam00000001831fa308 = 0xddd9f4a16f33c7f0;
  uVar2 = (uRam00000001831fa258 ^ _UNK_1811c4ee0) + uRam00000001831fa080 + 0x84225cda;
  uVar5 = (uRam00000001831fa080 ^ _UNK_1811c4ee8) + uRam00000001831fa258 + 0x22260b5e90cc3810;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831fa258 ^ _UNK_1811c4ee0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831fa080 ^ _UNK_1811c4ee8;
  uRam00000001831fa320 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831fa258 + 0x22260b5e90cc3810) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831fa080 + 0x84225cda));
  uRam00000001831fa010 = (uRam00000001831fa320 ^ 0x7fff) << 0x16 | uRam00000001831fa320 >> 0x2a;
  uRam00000001831fa1b8 =
       (uRam00000001831fa1b8 ^ uRam00000001831fa010) + 0x22260b5e90ccb80f ^ 0xd2c934e415bb1436;
  uRam00000001831fa010 =
       ((uRam00000001831f9d00 ^ uRam00000001831fa010 ^ 0x22260b5e90ccb80f) * 0x41bd25fc7d67029b ^
       uRam00000001831fa1b8) + uRam00000001831fa010;
  uRam00000001831f9e00 = uRam00000001831fa010 ^ uRam00000001831fa1b8;
  uRam00000001831fa350 = 0x22260b5e90ccb80f;
  uVar2 = (~uRam00000001831fa0f0 + 0xddd9f4a16f33c7f1) *
          ((uRam00000001831fa2c8 ^ 0x22260b5e14ee9b2a) +
          (uRam00000001831fa2c8 & 0x22260b5e14ee9b2a) * 2);
  uVar2 = (uVar2 | uRam00000001831fa198) + (uVar2 & uRam00000001831fa198);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831fa148 =
       func_0x000188e6e310((uVar2 | 0xffffffff7bdd5cda) + (uVar2 & 0xffffffff7bdd5cda));
  uVar2 = uRam00000001831fa148 ^ 0x22260b5e90ccb80f;
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar2;
  uRam00000001831f9e68 = uRam00000001831f9f98 ^ uVar2 ^ 0x7fff;
  uRam00000001831fa0a0 = (uRam00000001831fa0a0 ^ uVar2) + 0x7fff ^ 0xa9ee91baad6eaa36;
  uRam00000001831fa348 = (uRam00000001831fa348 * 0x79bef4f0b1546283 ^ uRam00000001831fa0a0) + uVar2;
  uRam00000001831f9ef0 = uRam00000001831fa348 ^ uRam00000001831fa0a0;
  uRam00000001831f9da8 = 0x7fff;
  uRam00000001831f9d88 = func_0x000188e6e310(uRam00000001831fa2c8 ^ 0x98634b9487ad5ec);
  uVar2 = uRam00000001831f9d88 - (uRam00000001831f9d88 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001831f9d88;
  uRam00000001831fa220 = (uRam00000001831fa220 ^ uVar2) + 0xa8a879e5b2375aa4 ^ 0x41d0f09002547e3f;
  uRam00000001831f9e68 = (uRam00000001831f9e68 * 0x2086c0f1b06b6563 ^ uRam00000001831fa220) + uVar2;
  uRam00000001831f9f28 = uRam00000001831f9e68 ^ uRam00000001831fa220;
  uRam00000001831f9d08 = 0xa8a879e5b2375aa4;
  lRam00000001831fa338 = func_0x000188e6e310(uRam00000001831fa1a8 + 0x548c939857a164a ^ 0x21);
  uVar2 = lRam00000001831fa338 * -0x4b0beb82f4000000 |
          (ulonglong)(lRam00000001831fa338 * 0x4f23872d3d051f43) >> 0x26;
  uRam00000001831f9fa0 = uRam00000001831fa1d8 ^ uVar2 ^ 0x5757861a4dc9255b;
  uRam00000001831fa228 = (uRam00000001831fa228 ^ uVar2) + 0x5757861a4dc9255b ^ 0x992479965bc673a7;
  uRam00000001831fa210 = (uRam00000001831fa210 * -0x707085a847a9a265 ^ uRam00000001831fa228) + uVar2
  ;
  uRam00000001831fa3d8 = uRam00000001831fa210 ^ uRam00000001831fa228;
  uRam00000001831f9e18 = 0x5757861a4dc9255b;
  uVar2 = (uRam00000001831fa078 ^ _UNK_1811c4ef0) + uRam00000001831fa008 + 0x84222325;
  uVar5 = (uRam00000001831fa008 ^ _UNK_1811c4ef8) + uRam00000001831fa078 + 0xe2025be5af17fdd4;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831fa078 ^ _UNK_1811c4ef0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831fa008 ^ _UNK_1811c4ef8;
  uRam00000001831fa120 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831fa078 + 0xe2025be5af17fdd4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831fa008 + 0x84222325));
  uRam00000001831f9d80 =
       (uRam00000001831f9d80 ^ uRam00000001831fa120 & 0xffffffffe0000000) + 0x1dfda41a50e8022c ^
       0xf8665590e71978bb;
  uRam00000001831fa3e0 =
       (uRam00000001831fa3e0 * -0x7c2cb759edabbae9 ^ uRam00000001831f9d80) +
       (uRam00000001831fa120 & 0xffffffffe0000000);
  uRam00000001831fa428 = uRam00000001831fa3e0 ^ uRam00000001831f9d80;
  uRam00000001831f9f60 = 0x1dfda41a50e8022c;
  uRam00000001831fa0c8 = func_0x000188e6e310(lRam00000001831fa288 + 0x639f022b0dcb1561U ^ 0x33);
  uVar2 = uRam00000001831fa0c8 & 0x3ffffffffff;
  uRam00000001831fa278 = uRam00000001831fa4c8 ^ uVar2 ^ 0xe2025be5af187dd3;
  uRam00000001831fa2b8 = (uRam00000001831fa2b8 ^ uVar2) + 0xe2025be5af187dd3 ^ 0x48811684cf76a035;
  uRam00000001831f9d10 = (uRam00000001831f9d10 * 0x74c667124630a06b ^ uRam00000001831fa2b8) + uVar2;
  uRam00000001831fa3a8 = uRam00000001831f9d10 ^ uRam00000001831fa2b8;
  uRam00000001831f9f20 = 0xe2025be5af187dd3;
  uVar2 = (~uRam00000001831fa258 + 0x1dfda41a50e8022d) *
          ((uRam00000001831fa0a0 ^ 0xe2025be52b3a5ef6) +
          (uRam00000001831fa0a0 & 0x62025be52b3a5ef6) * 2);
  uVar2 = (uVar2 | uRam00000001831fa0d8) + (uVar2 & uRam00000001831fa0d8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831f9e48 =
       func_0x000188e6e310((uVar2 | 0xffffffff7bd25cda) + (uVar2 & 0xffffffff7bd25cda));
  uVar2 = uRam00000001831f9e48 & 0x7ffffffff8000000;
  uRam00000001831fa0b8 = uRam00000001831fa2f0 ^ uVar2 ^ 0x7fff;
  uRam00000001831fa108 = (uRam00000001831fa108 ^ uVar2) + 0x7fff ^ 0x66aca7aee4fc09dc;
  uRam00000001831fa350 = (uRam00000001831fa350 * -0x6445fc060c28069 ^ uRam00000001831fa108) + uVar2;
  uRam00000001831f9f58 = uRam00000001831fa350 ^ uRam00000001831fa108;
  uRam00000001831f9d30 = 0x7fff;
  uVar2 = (uRam00000001831fa438 ^ _UNK_1811c4f00) + uRam00000001831fa2d8 + 0xf7ddbedfdb89d6da;
  uVar5 = (uRam00000001831fa2d8 ^ _UNK_1811c4f08) + uRam00000001831fa438 + 0xabb184706ef41d03;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831fa438 ^ _UNK_1811c4f00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831fa2d8 ^ _UNK_1811c4f08;
  uRam00000001831f9fb8 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831fa438 + 0xabb184706ef41d03) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001831fa2d8 + 0xf7ddbedfdb89d6da));
  uRam00000001831f9d28 =
       (uRam00000001831f9d28 ^ uRam00000001831f9fb8 & 0x7fffffffffffffff) + 0xa39184504ea01503 ^
       0x90c93996926152b0;
  uRam00000001831fa4d0 =
       (uRam00000001831fa4d0 * 0x43edcf92da234c91 ^ uRam00000001831f9d28) +
       (uRam00000001831f9fb8 & 0x7fffffffffffffff);
  uRam00000001831f9e48 = uRam00000001831fa4d0 ^ uRam00000001831f9d28;
  uRam00000001831f9fe8 = 0xa39184504ea01503;
  uVar2 = (uRam00000001831fa3e0 ^ _UNK_1811c4f10) + uRam00000001831f9ef8 + 0x5c6c3aafb57dcbd9;
  uVar5 = (uRam00000001831f9ef8 ^ _UNK_1811c4f18) + uRam00000001831fa3e0 + 0x472308a09d402a06;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831fa3e0 ^ _UNK_1811c4f10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9ef8 ^ _UNK_1811c4f18;
  uRam00000001831f9ff8 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831fa3e0 + 0x472308a09d402a06) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001831f9ef8 + 0x5c6c3aafb57dcbd9));
  uVar2 = uRam00000001831f9ff8 << 0xe | (uRam00000001831f9ff8 & 0x7fffffffffffffff) >> 0x32;
  uRam00000001831fa318 = uRam00000001831f9d90 ^ uVar2 ^ 0xa38f434fcea01302;
  uRam00000001831fa280 = (uRam00000001831fa280 ^ uVar2) + 0xa38f434fcea01302 ^ 0x12d37afc51517f4;
  uRam00000001831fa018 = (uRam00000001831fa018 * -0x60edb51a0aeb5405 ^ uRam00000001831fa280) + uVar2
  ;
  uRam00000001831fa388 = uRam00000001831fa018 ^ uRam00000001831fa280;
  uRam00000001831fa480 = 0xa38f434fcea01302;
  uVar2 = (uRam00000001831f9e40 ^ _UNK_1811c4f20) + uRam00000001831f9da0 + 0xa38f434f4a823027;
  uVar5 = (uRam00000001831f9da0 ^ _UNK_1811c4f28) + uRam00000001831f9e40 + 0xa38f434fcea01302;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831f9e40 ^ _UNK_1811c4f20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9da0 ^ _UNK_1811c4f28;
  uRam00000001831f9d48 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831f9e40 + 0xa38f434fcea01302) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001831f9da0 + 0xa38f434f4a823027));
  uRam00000001831f9de8 = uRam00000001831f9d48 & 0xa38f434fcea01302;
  uRam00000001831fa468 = uRam00000001831fa468 ^ uRam00000001831f9de8 ^ 0x606890f11f44d6b2;
  uRam00000001831f9f78 =
       (uRam00000001831f9f78 * -0x617594a6b3caff9b ^ uRam00000001831fa468) + uRam00000001831f9de8;
  uRam00000001831fa1e8 = uRam00000001831f9f78 ^ uRam00000001831fa468;
  lRam00000001831fa338 = 0;
  uVar2 = (uRam00000001831fa2e0 ^ 0x84225cda) + uRam00000001831f9d68 + 0x84225cda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831fa2e0 ^ 0x84225cda;
  uVar5 = ((uRam00000001831f9d68 + uRam00000001831fa2e0) * 0x2000 |
          uRam00000001831f9d68 + uRam00000001831fa2e0 >> 0x33) ^ uRam00000001831f9d68;
  uRam00000001831fa498 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001831fa2e0 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831f9d68 + 0x84225cda));
  uVar2 = (ulonglong)(~(uint)uRam00000001831fa498 & 0x7fff);
  uRam00000001831f9d28 = uRam00000001831fa340 ^ uVar2 ^ 0x7fff;
  uRam00000001831f9d40 = (uRam00000001831f9d40 ^ uVar2) + 0x7fff ^ 0x12e79088bd3bb774;
  uRam00000001831f9db0 = (uRam00000001831f9db0 * 0x2432557d5b193e55 ^ uRam00000001831f9d40) + uVar2;
  uRam00000001831fa460 = uRam00000001831f9db0 ^ uRam00000001831f9d40;
  uRam00000001831fa358 = 0x7fff;
  uRam00000001831fa098 = func_0x000188e6e310(lRam00000001831f9df0 + 0xe019221be2be9207U ^ 0xae);
  uVar2 = (uRam00000001831fa098 ^ 0x8224120a0540a01) & 0x7fffffffffffffff;
  uVar5 = uVar2 - (((uRam00000001831fa098 ^ 0x8224120a0540a01) & 0x7fffffffffffffff) >> 1 &
                  0x1555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2 ^
          uVar2;
  uRam00000001831f9d40 = (uRam00000001831f9d40 ^ uVar2) + 0x8224120a0540a00 ^ 0x8c1598f2cf00e3cb;
  uRam00000001831f9eb8 = (uRam00000001831f9eb8 * -0x560d5349e5dd589d ^ uRam00000001831f9d40) + uVar2
  ;
  uRam00000001831f9e48 = uRam00000001831f9eb8 ^ uRam00000001831f9d40;
  uRam00000001831f9e88 = 0x8224120a0540a00;
  uRam00000001831f9d58 = func_0x000188e6e310(uRam00000001831fa1e8 ^ 0xffabff7cca00216d);
  uVar2 = uRam00000001831f9d58 & 0x1fffffffffff;
  uRam00000001831f9f60 = uRam00000001831f9fb0 ^ uVar2 ^ 0x7fff;
  uRam00000001831fa1a0 = (uRam00000001831fa1a0 ^ uVar2) + 0x7fff ^ 0x89a2cbfa5566706;
  uRam00000001831fa1b0 = (uRam00000001831fa1b0 * 0x77d78737a2253d87 ^ uRam00000001831fa1a0) + uVar2;
  uRam00000001831fa438 = uRam00000001831fa1b0 ^ uRam00000001831fa1a0;
  uRam00000001831fa1c0 = 0x7fff;
  uVar2 = ((uRam00000001831f9e68 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001831f9e68 & 0x84225cda) * 2) * -uRam00000001831fa148;
  uVar2 = (uVar2 | uRam00000001831fa380) + (uVar2 & uRam00000001831fa380);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831fa460 =
       func_0x000188e6e310((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uRam00000001831fa478 = uRam00000001831f9f38 ^ uRam00000001831fa460 ^ 0x7fff;
  uRam00000001831f9fe0 = (uRam00000001831f9fe0 ^ uRam00000001831fa460) + 0x7fff ^ 0x39c527ddee671e6e
  ;
  uRam00000001831fa3b8 =
       (uRam00000001831fa3b8 * -0x3b0c19eb8424b4a9 ^ uRam00000001831f9fe0) + uRam00000001831fa460;
  uRam00000001831fa450 = uRam00000001831fa3b8 ^ uRam00000001831f9fe0;
  auVar3._8_8_ = _UNK_18019c088;
  auVar3._0_8_ = param_4 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _UNK_1811c4f30,_UNK_1800170c0);
  uRam00000001831f9ec8 = 0x7fff;
  uVar5 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar5 + lRam00000001831f9f68;
  if (auVar4._4_4_ < 0) {
    uVar2 = uRam00000001831fa330 ^ uVar5;
  }
  uRam00000001831fa488 = func_0x000188e6e310(SUB161(auVar3 ^ _UNK_1811c4f30,5) ^ uVar2);
  uVar2 = (param_4 * 0x7fff ^ uRam00000001831fa488) & 0x7fffffffffffffff;
  uRam00000001831fa0a8 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam00000001831f9ec0 = (uRam00000001831f9ec0 ^ uVar2) + uRam00000001831fa0a8 ^ 0xc53e2208c18f3664;
  uRam00000001831fa4a8 = (uRam00000001831fa4a8 * 0x155ec260970fe9c5 ^ uRam00000001831f9ec0) + uVar2;
  uRam00000001831fa160 = uRam00000001831fa4a8 ^ uRam00000001831f9ec0;
  uVar2 = (uRam00000001831f9df8 ^ _UNK_1811c4f40) + uRam00000001831fa028 + 0x887ccadc;
  uVar5 = (uRam00000001831fa028 ^ _UNK_1811c4f48) + uRam00000001831f9df8 + 0xde42ee71;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831f9df8 ^ _UNK_1811c4f40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831fa028 ^ _UNK_1811c4f48;
  uRam00000001831fa380 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9df8 + 0xde42ee71) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831fa028 + 0x887ccadc));
  uVar2 = (uRam00000001831fa380 ^ 0xd2000600) << 0x31 | (uRam00000001831fa380 ^ 0xd2000600) >> 0xf;
  uRam00000001831fa368 = (uRam00000001831fa368 ^ uVar2) + 0xde5eeff9 ^ 0x91f0f1618528994a;
  uRam00000001831f9fd0 = (uRam00000001831f9fd0 * -0x62f5e9a7ef6d1a17 ^ uRam00000001831fa368) + uVar2
  ;
  uRam00000001831fa348 = uRam00000001831f9fd0 ^ uRam00000001831fa368;
  uRam00000001831fa2a8 = 0xde5eeff9;
  uRam00000001831f9db0 = func_0x000188e6e310(uRam00000001831fa370 ^ 0xb3ff67f00085bd);
  uRam00000001831fa2d0 =
       (uRam00000001831fa2d0 ^ uRam00000001831f9db0 ^ 0x2ca89735) - 0x2ca89735 ^ 0xfe0c864948d1963d;
  uRam00000001831fa090 =
       (uRam00000001831fa090 * -0x4743bf570ff07991 ^ uRam00000001831fa2d0) +
       (uRam00000001831f9db0 ^ 0x2ca89735);
  uRam00000001831fa1b0 = uRam00000001831fa090 ^ uRam00000001831fa2d0;
  uRam00000001831fa050 = 0xd35768cb;
  uVar2 = (uRam00000001831fa220 ^ _UNK_1811c4f50) + uRam00000001831f9ec0 + 0x84226e29;
  uVar5 = (uRam00000001831f9ec0 ^ _UNK_1811c4f58) + uRam00000001831fa220 + 0x2ca89735;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831fa220 ^ _UNK_1811c4f50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9ec0 ^ _UNK_1811c4f58;
  uRam00000001831fa170 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831fa220 + 0x2ca89735) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831f9ec0 + 0x84226e29));
  uVar2 = uRam00000001831fa170 & 0x7fffffffffffffff;
  uRam00000001831f9ec0 = uRam00000001831fa020 ^ uVar2 ^ 0x2ca8e441;
  uRam00000001831fa3c8 = (uRam00000001831fa3c8 ^ uVar2) + 0x2ca8e441 ^ 0xe49e03826579df80;
  uRam00000001831fa310 = (uRam00000001831fa310 * 0x3fe5bac91adedc01 ^ uRam00000001831fa3c8) + uVar2;
  uRam00000001831fa208 = uRam00000001831fa310 ^ uRam00000001831fa3c8;
  uRam00000001831fa348 = 0x2ca8e441;
  uRam00000001831f9df8 = func_0x000188e6e310(uRam00000001831fa408 + 0x53002b6effccff ^ 0x5f);
  uVar2 = uRam00000001831f9df8 << 0x39 | (uRam00000001831f9df8 & 0x3fffffffffffff) >> 7;
  uRam00000001831fa090 = uRam00000001831fa488 ^ uVar2 ^ 0x100004d0c;
  uRam00000001831fa300 = (uRam00000001831fa300 ^ uVar2) + 0x100004d0c ^ 0x898513baecac2407;
  uRam00000001831f9e20 = (uRam00000001831f9e20 * -0x108d9721ac5ba2c7 ^ uRam00000001831fa300) + uVar2
  ;
  uRam00000001831f9dd8 = uRam00000001831f9e20 ^ uRam00000001831fa300;
  uRam00000001831fa3e8 = 0x4d0c;
  uVar2 = (~uRam00000001831fa098 + 0xaade29f9) *
          ((uRam00000001831f9fb0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831f9fb0 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam00000001831f9ed8) + (uVar2 & uRam00000001831f9ed8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831fa118 =
       func_0x000188e6e310((uVar2 | 0x2efc0add) + (ulonglong)((uint)uVar2 & 0x2efc0add));
  uRam00000001831f9d30 =
       (uRam00000001831f9d30 ^ uRam00000001831fa118 ^ 0xaade29f8) - 0xaade29f8 ^ 0x91930983401710c;
  uRam00000001831f9e88 =
       (uRam00000001831f9e88 * 0x717ccf7b282efd89 ^ uRam00000001831f9d30) +
       (uRam00000001831fa118 ^ 0xaade29f8);
  uRam00000001831f9df8 = uRam00000001831f9e88 ^ uRam00000001831f9d30;
  uRam00000001831fa350 = 0x5521d608;
  uRam00000001831f9ff8 = func_0x000188e6e310(uRam00000001831fa200 ^ 0xffc2ffd24f0053b2);
  uVar2 = uRam00000001831f9ff8 & 0x3fffffffffffff0;
  uRam00000001831fa3e0 = uRam00000001831fa008 ^ uVar2 ^ 0xaade7704;
  uRam00000001831fa458 = (uRam00000001831fa458 ^ uVar2) + 0xaade7704 ^ 0xedf35fe033404dc4;
  uRam00000001831fa000 = (uRam00000001831fa000 * -0x146c90b51bba2803 ^ uRam00000001831fa458) + uVar2
  ;
  uRam00000001831f9e48 = uRam00000001831fa000 ^ uRam00000001831fa458;
  uRam00000001831f9e78 = 0xaade7704;
  uVar2 = (uRam00000001831f9f58 ^ _UNK_1811c4f60) + uRam00000001831fa1e8 + 0x84222325;
  uVar5 = (uRam00000001831fa1e8 ^ _UNK_1811c4f68) + uRam00000001831f9f58 + 0xa11cb636;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831f9f58 ^ _UNK_1811c4f60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831fa1e8 ^ _UNK_1811c4f68;
  uRam00000001831f9ed8 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9f58 + 0xa11cb636) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831fa1e8 + 0x84222325));
  uVar2 = uRam00000001831f9ed8 ^ 0xa11cb636;
  uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar2;
  uRam00000001831fa008 = (uRam00000001831fa008 ^ uVar2) - 0xa11cb636 ^ 0x877148f378feac0b;
  uRam00000001831fa050 = (uRam00000001831fa050 * -0x21949d78c14711 ^ uRam00000001831fa008) + uVar2;
  uRam00000001831fa470 = uRam00000001831fa050 ^ uRam00000001831fa008;
  uRam00000001831f9e80 = 0x5ee349ca;
  uVar2 = (uRam00000001831f9e30 ^ _UNK_1811c4f70) + uRam00000001831fa2f8 + 0x84226e29;
  uVar5 = (uRam00000001831fa2f8 ^ _UNK_1811c4f78) + uRam00000001831f9e30 + 0xa11cb636;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831f9e30 ^ _UNK_1811c4f70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831fa2f8 ^ _UNK_1811c4f78;
  uRam00000001831f9f40 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9e30 + 0xa11cb636) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831fa2f8 + 0x84226e29));
  uVar2 = ((uRam00000001831f9f40 ^ 0x307d3026c888) << 0x12 | uRam00000001831f9f40 >> 0x2e) ^ 0x4d0c;
  uRam00000001831fa138 = uRam00000001831f9fe8 ^ uVar2 ^ 0xa11d0342;
  uRam00000001831fa028 = (uRam00000001831fa028 ^ uVar2) + 0xa11d0342 ^ 0xe25edeb0b1226c05;
  uRam00000001831fa1d0 = (uRam00000001831fa1d0 * 0x442a4a0404e79bbf ^ uRam00000001831fa028) + uVar2;
  uRam00000001831f9fc8 = uRam00000001831fa1d0 ^ uRam00000001831fa028;
  lRam00000001831f9df0 = 0xa11d0342;
  uVar2 = (~uRam00000001831f9ed0 + 0x7d33ac99) *
          ((uRam00000001831fa3c0 ^ 0x5a7cccdc) +
          (ulonglong)((uint)uRam00000001831fa3c0 & 0x5a7cccdc) * 2);
  uVar2 = (uVar2 | uRam00000001831fa388) + (uVar2 & uRam00000001831fa388);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831fa300 =
       func_0x000188e6e310((uVar2 | 0x274f6044) + (ulonglong)((uint)uVar2 & 0x274f6044));
  uVar2 = uRam00000001831fa300 - (uRam00000001831fa300 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam00000001831fa300;
  uVar2 = uVar2 << 0x10 | (uVar2 & 0x7ffffffffffffff) >> 0x30;
  uRam00000001831fa0c8 = uRam00000001831f9d18 ^ uVar2 ^ 0x15b929c91;
  uRam00000001831fa0c0 = (uRam00000001831fa0c0 ^ uVar2) + 0x15b929c91 ^ 0xe20069c1c5a17f16;
  uRam00000001831f9ff0 = (uRam00000001831f9ff0 * 0x4ba27778f8f69e61 ^ uRam00000001831fa0c0) + uVar2;
  uRam00000001831fa2d0 = uRam00000001831f9ff0 ^ uRam00000001831fa0c0;
  uRam00000001831fa240 = 0x5b929c91;
  uVar2 = (uRam00000001831f9eb0 ^ _UNK_1811c4f80) + uRam00000001831f9f28 + 0x5a7cccdc;
  uVar5 = (uRam00000001831f9f28 ^ _UNK_1811c4f88) + uRam00000001831f9eb0 + 0x7d33ac98;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831f9eb0 ^ _UNK_1811c4f80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831f9f28 ^ _UNK_1811c4f88;
  uRam00000001831f9d38 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831f9eb0 + 0x7d33ac98) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831f9f28 + 0x5a7cccdc));
  uVar2 = uRam00000001831f9d38 >> 1 | uRam00000001831f9d38;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001831f9d38;
  uRam00000001831fa408 = (uRam00000001831fa408 ^ uVar2) + 0xa36d4361 ^ 0x50f486f7dd40978b;
  uRam00000001831fa360 = (uRam00000001831fa360 * 0x2d8ef95ea06c0f69 ^ uRam00000001831fa408) + uVar2;
  uRam00000001831f9d58 = uRam00000001831fa360 ^ uRam00000001831fa408;
  uRam00000001831f9e18 = 0xa36d4361;
  uRam00000001831f9e10 = func_0x000188e6e310(uRam00000001831fa428 + 0xffe0001ebc003aff ^ 0xe1);
  uRam00000001831f9e40 =
       (uRam00000001831f9e40 ^ uRam00000001831f9e10 & 0x1ffffffffffff) + 0x5c12ac98 ^
       0x7d3aa610b25419c1;
  uRam00000001831f9dc0 =
       (uRam00000001831f9dc0 * 0x2e419ff370f8f709 ^ uRam00000001831f9e40) +
       (uRam00000001831f9e10 & 0x1ffffffffffff);
  uRam00000001831fa4f8 = uRam00000001831f9dc0 ^ uRam00000001831f9e40;
  uRam00000001831fa010 = 0x5c12ac98;
  uVar2 = (~uRam00000001831fa418 + 0xb8255931) *
          ((uRam00000001831fa1f8 ^ 0x274f6044) +
          (ulonglong)((uint)uRam00000001831fa1f8 & 0x274f6044) * 2);
  uVar2 = (uVar2 | uRam00000001831fa3a8) + (uVar2 & uRam00000001831fa3a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831fa498 =
       func_0x000188e6e310((uVar2 | 0x9f6a3974) + (ulonglong)((uint)uVar2 & 0x9f6a3974));
  uVar2 = (uRam00000001831fa498 ^ 0x758e602815ee5b30) << 0x15 |
          (uRam00000001831fa498 ^ 0x758e602815ee5b30) >> 0x2b;
  uRam00000001831fa360 = uRam00000001831fa358 ^ uVar2 ^ 0x15b929c91;
  uRam00000001831f9f78 = (uRam00000001831f9f78 ^ uVar2) + 0x15b929c91 ^ 0x6f60abc588808f56;
  uRam00000001831fa120 = (uRam00000001831fa120 * -0x4b46ce3000972713 ^ uRam00000001831f9f78) + uVar2
  ;
  uRam00000001831f9d28 = uRam00000001831fa120 ^ uRam00000001831f9f78;
  uRam00000001831fa0f0 = 0x5b929c91;
  uVar2 = (~uRam00000001831fa488 + 0x5b929c92) *
          ((uRam00000001831fa198 ^ 0xdfb0bfb4) +
          (ulonglong)((uint)uRam00000001831fa198 & 0xdfb0bfb4) * 2);
  uVar2 = (uVar2 | uRam00000001831fa298) + (uVar2 & uRam00000001831fa298);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831fa268 =
       func_0x000188e6e310((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam00000001831f9e80 =
       (ulonglong)(~((int)uRam00000001831fa268 * 0x4c2a0cd5) & 0x5b929c91) ^ 0x5b929c91;
  uRam00000001831fa460 = uRam00000001831fa460 ^ uRam00000001831f9e80 ^ 0x329e03220470f316;
  uRam00000001831fa1f0 =
       (uRam00000001831fa1f0 * 0x3cbecdb65aae5a35 ^ uRam00000001831fa460) + uRam00000001831f9e80;
  uRam00000001831fa0b8 = uRam00000001831fa1f0 ^ uRam00000001831fa460;
  uRam00000001831f9d10 = 0;
  uVar2 = func_0x000188e6e310(uRam00000001831fa4c8 + 0xffa2008418ffddff ^ 0xcd);
  uRam00000001831f9dd8 = (uVar2 << 0x29 | uVar2 >> 0x17) >> 0x23 | (uVar2 >> 0x17) << 0x1d;
  uRam00000001831fa0c8 = uRam00000001831f9d48 ^ uRam00000001831f9dd8 ^ 0x4d0c;
  uRam00000001831fa450 = (uRam00000001831fa450 ^ uRam00000001831f9dd8) + 0x4d0c ^ 0xff15bf83f89d38ce
  ;
  uRam00000001831f9dd8 = (uVar2 * -0x238e15b45666e7b ^ uRam00000001831fa450) + uRam00000001831f9dd8;
  uRam00000001831fa1e8 = uRam00000001831f9dd8 ^ uRam00000001831fa450;
  uRam00000001831fa268 = 0x4d0c;
  uVar2 = (uRam00000001831fa320 ^ _UNK_1811c4f90) + uRam00000001831fa1a8 + 0x5a7cccdc;
  uVar5 = (uRam00000001831fa1a8 ^ _UNK_1811c4f98) + uRam00000001831fa320 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001831fa320 ^ _UNK_1811c4f90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831fa1a8 ^ _UNK_1811c4f98;
  uRam00000001831fa1f0 =
       func_0x000188e6e310((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831fa320 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001831fa1a8 + 0x5a7cccdc));
  uVar2 = (ulonglong)(((uint)uRam00000001831fa1f0 ^ 0xde5eeff8) & 0xde5eeff9);
  uRam00000001831fa000 = (uRam00000001831fa000 ^ uVar2) + 0x21a11006 ^ 0xd579641c47dd7eb1;
  uRam00000001831fa3f8 = (uRam00000001831fa3f8 * 0xe5881ea169f3f9b ^ uRam00000001831fa000) + uVar2;
  uRam00000001831f9d70 = uRam00000001831fa3f8 ^ uRam00000001831fa000;
  uRam00000001831fa010 = 0x21a11006;
  uVar2 = ((uRam00000001831fa148 ^ 0x84226e29) +
          (ulonglong)((uint)uRam00000001831fa148 & 0x84226e29) * 2) * -uRam00000001831fa370;
  uVar2 = (uVar2 | uRam00000001831fa4a0) + (uVar2 & uRam00000001831fa4a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001831fa0e0 =
       func_0x000188e6e310((uVar2 | 0x84226e29) + (ulonglong)((uint)uVar2 & 0x84226e29));
  uVar2 = (ulonglong)(~(uint)uRam00000001831fa0e0 & 0x4d0c) * -0x5060dfb299f45fdb;
  uRam00000001831fa158 = uRam00000001831fa2a0 ^ uVar2 ^ 0x4d0c;
  uRam00000001831fa310 = (uRam00000001831fa310 ^ uVar2) + 0x4d0c ^ 0xc8f640d61a0068c7;
  uRam00000001831fa380 = (uRam00000001831fa380 * 0x48c65d3a45d02a8b ^ uRam00000001831fa310) + uVar2;
  uRam00000001831f9e70 = uRam00000001831fa380 ^ uRam00000001831fa310;
  uRam00000001831fa3f8 = 0x4d0c;
  uRam00000001831fa450 = func_0x000188e6e310(lRam00000001831fa188 + 0x560083d90021ffU ^ 0xef);
  uVar2 = uRam00000001831fa450 << 0x24 | uRam00000001831fa450 >> 0x1c;
  uRam00000001831fa038 = uRam00000001831f9f28 ^ uVar2 ^ 0x4d0c;
  uRam00000001831fa090 = (uRam00000001831fa090 ^ uVar2) + 0x4d0c ^ 0x9c29b5e6e318c9c7;
  uRam00000001831f9ed8 = (uRam00000001831f9ed8 * -0x6365a593db79083b ^ uRam00000001831fa090) + uVar2
  ;
  uRam00000001831fa470 = uRam00000001831f9ed8 ^ uRam00000001831fa090;
  uRam00000001831fa210 = 0x4d0c;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x17b6d,0x3ce);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188e65c30 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c3070 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; bpL (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 188e6e3a0, runtime 6ffff0a7e3a0) =====

void FUN_188e6e3a0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000188e6e3eb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c5050 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 188e6f3b0, runtime 6ffff0a7f3b0) =====

void FUN_188e6f3b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188e6f439 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c5610 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; bpg ()Ljava/lang/String; (handler @ image 188d7fad0, runtime 6ffff098fad0) =====

void FUN_188d7fad0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d7faf0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187130 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bph ()Ljava/util/List; (handler @ image 188d81060, runtime 6ffff0991060) =====

void FUN_188d81060(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d81080 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187a60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpi ()Ljava/util/List; (handler @ image 188e31610, runtime 6ffff0a41610) =====

void FUN_188e31610(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188e31630 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811bad80 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpj ()Ljava/util/List; (handler @ image 188e8ff70, runtime 6ffff0a9ff70) =====

void FUN_188e8ff70(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188e8ff90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c98b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpk ()Ljava/util/List; (handler @ image 188e90170, runtime 6ffff0aa0170) =====

void FUN_188e90170(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188e90190 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c9990 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpl ()Ljava/util/List; (handler @ image 188e90370, runtime 6ffff0aa0370) =====

void FUN_188e90370(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188e90390 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c9a70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpm ()Ljava/util/List; (handler @ image 188e90570, runtime 6ffff0aa0570) =====

void FUN_188e90570(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188e90590 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c9b50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpn ()Ljava/util/List; (handler @ image 188e90770, runtime 6ffff0aa0770) =====

void FUN_188e90770(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188e90790 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c9c30 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpo ()Ljava/util/List; (handler @ image 188e90970, runtime 6ffff0aa0970) =====

void FUN_188e90970(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188e90990 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811c9d10 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpp ()Ljava/util/List; (handler @ image 188d7fcd0, runtime 6ffff098fcd0) =====

void FUN_188d7fcd0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d7fcf0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187210 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpq ()Ljava/util/List; (handler @ image 188d7fed0, runtime 6ffff098fed0) =====

void FUN_188d7fed0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d7fef0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811872f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpr ()Ljava/util/List; (handler @ image 188d800d0, runtime 6ffff09900d0) =====

void FUN_188d800d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d800f0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811873d0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bps (Ljava/lang/String;)V (handler @ image 188d802d0, runtime 6ffff09902d0) =====

void FUN_188d802d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d802f5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811874b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpt (Ljava/util/List;)V (handler @ image 188d804c0, runtime 6ffff09904c0) =====

void FUN_188d804c0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d804e5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187580 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpu (Ljava/util/List;)V (handler @ image 188d806b0, runtime 6ffff09906b0) =====

void FUN_188d806b0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d806d5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187650 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpv (Ljava/util/List;)V (handler @ image 188d808a0, runtime 6ffff09908a0) =====

void FUN_188d808a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d808c5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187720 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpw (Ljava/util/List;)V (handler @ image 188d80a90, runtime 6ffff0990a90) =====

void FUN_188d80a90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d80ab5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811877f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpx (Ljava/util/List;)V (handler @ image 188d80c80, runtime 6ffff0990c80) =====

void FUN_188d80c80(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d80ca5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811878c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpy (Ljava/util/List;)V (handler @ image 188d80e70, runtime 6ffff0990e70) =====

void FUN_188d80e70(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d80e95 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187990 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; bpz (Ljava/util/List;)V (handler @ image 188d81260, runtime 6ffff0991260) =====

void FUN_188d81260(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000188d81285 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187b40 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/iz; equals (Ljava/lang/Object;)Z (handler @ image 188d81c10, runtime 6ffff0991c10) =====

void FUN_188d81c10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x17b6d,0x3ce);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188d81cdd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181187f60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 188d4d630, runtime 6ffff095d630) =====

void FUN_188d4d630(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x17b6d,0x3ce);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188d4d718 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811798e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; hashCode ()I (handler @ image 188d8fb40, runtime 6ffff099fb40) =====

void FUN_188d8fb40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x17b6d,0x3ce);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188d8fc33 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18118cfc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iz; toString ()Ljava/lang/String; (handler @ image 188dfd880, runtime 6ffff0a0d880) =====

void FUN_188dfd880(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x17b6d,0x3ce);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188dfd96e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1811acfa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



