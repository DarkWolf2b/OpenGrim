// ===== Lsixtwo/lZ; _79b7d5c12970b68433b46e9c3bbea341 ()V (handler @ image 1878ff3c0, runtime 6fffef50f3c0) =====

void FUN_1878ff3c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001878ff4a8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cbeee0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lZ; cjn ([Ljava/lang/Class;)V (handler @ image 18789c900, runtime 6fffef4ac900) =====

void FUN_18789c900(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1bce7,0x452);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018789c9eb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cacc28 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lZ; cjo (Ljava/lang/reflect/Field;)Z (handler @ image 1878c15b0, runtime 6fffef4d15b0) =====

void FUN_1878c15b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1bce7,0x452);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001878c1671 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cb41f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lZ; cjp (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1878c69c0, runtime 6fffef4d69c0) =====

undefined8 FUN_1878c69c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/lZ; cjq ([B)Ljava/lang/String; (handler @ image 1878c6a50, runtime 6fffef4d6a50) =====

void FUN_1878c6a50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001878c6af0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cb5de0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/lZ; cjr (IJ)I (handler @ image 1878f0220, runtime 6fffef500220) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878f0220(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  
  uRam0000000183191e90 = func_0x0001878fb610(uRam0000000183191d30 ^ 0x873bfdaffafc64e4);
  uRam0000000183191ee0 =
       (uRam0000000183191ee0 ^ uRam0000000183191e90 * -0x7d2e80f00367de9b) + 0xaffabc8bf5d7df2a ^
       0x30823b8448c1476f;
  uRam0000000183191d88 =
       (uRam0000000183191d88 * 0x41fad0cab097be55 ^ uRam0000000183191ee0) +
       uRam0000000183191e90 * -0x7d2e80f00367de9b;
  uRam0000000183192028 = uRam0000000183191d88 ^ uRam0000000183191ee0;
  uRam0000000183191fb0 = 0xaffabc8bf5d7df2a;
  uRam0000000183191ef8 = func_0x0001878fb610(uRam0000000183191980 ^ 0x6dedc8d5e782a897);
  uRam0000000183191cf8 =
       (uRam0000000183191cf8 ^ uRam0000000183191a28) + 0xd2b478514105cac4 ^ 0xa682887b6fed2005;
  uRam0000000183191af8 =
       (uRam0000000183191af8 * 0x3f6827826d06518f ^ uRam0000000183191cf8) + uRam0000000183191a28;
  uRam00000001831919d0 = uRam0000000183191af8 ^ uRam0000000183191cf8;
  uRam0000000183191a60 = -0x2d4b87aebefa353c;
  uRam00000001831920a8 = func_0x0001878fb610(uRam0000000183191bd8 + 0x5de8c4da2183b814 ^ 0x75);
  uVar3 = uRam00000001831920a8 ^ 0x2d4b87aebefa0000;
  uRam0000000183191d30 = uRam0000000183191d18 ^ uVar3 ^ 0x2d4b87aebefab53b;
  uRam0000000183191d08 = (uRam0000000183191d08 ^ uVar3) + 0x2d4b87aebefab53b ^ 0xab024675c0427377;
  uRam0000000183191a50 = (uRam0000000183191a50 * 0x772e53a27b9eb409 ^ uRam0000000183191d08) + uVar3;
  uRam0000000183191d90 = uRam0000000183191a50 ^ uRam0000000183191d08;
  uRam0000000183191c40 = 0x2d4b87aebefab53b;
  uVar3 = (~uRam0000000183191ee8 + 0xd2b478514105cac5) *
          ((uRam0000000183191d48 ^ 0x2d4b87ae3ad8961e) +
          (uRam0000000183191d48 & 0x2d4b87ae3ad8961e) * 2);
  uVar3 = (uVar3 | uRam0000000183191f78) + (uVar3 & uRam0000000183191f78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191c48 =
       func_0x0001878fb610((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uRam0000000183192080 = uRam00000001831919a8 ^ uRam0000000183191c48 ^ 0x7fff;
  uRam00000001831920b8 = (uRam00000001831920b8 ^ uRam0000000183191c48) + 0x7fff ^ 0x984857f33f47993a
  ;
  uRam0000000183191a58 =
       (uRam0000000183191a58 * 0x381a4f5b7e5fff9 ^ uRam00000001831920b8) + uRam0000000183191c48;
  uRam0000000183192060 = uRam0000000183191a58 ^ uRam00000001831920b8;
  uRam0000000183191d08 = 0x7fff;
  uVar3 = (~uRam00000001831920e0 + 0xe63e89e41f40c385) *
          ((uRam0000000183191eb8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183191eb8 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183191ac8) + (uVar3 & uRam0000000183191ac8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191de8 =
       func_0x0001878fb610((uVar3 | 0xe63e89e49b62e0a1) + (uVar3 & 0xe63e89e49b62e0a1));
  uRam0000000183192048 =
       (uRam0000000183192048 ^ uRam0000000183191de8) + 0x19c1761be0bf3c7c ^ 0x32dc762b0b786006;
  uRam0000000183191b88 =
       (uRam0000000183191b88 * -0x6767e6381d27689d ^ uRam0000000183192048) + uRam0000000183191de8;
  uRam0000000183191c28 = uRam0000000183191b88 ^ uRam0000000183192048;
  uRam0000000183191f80 = 0x19c1761be0bf3c7c;
  uVar3 = (uRam00000001831919d8 ^ _UNK_180cbd730) + uRam0000000183191ef0 + 0x84225cda;
  uVar10 = (uRam0000000183191ef0 ^ _UNK_180cbd738) + uRam00000001831919d8 + 0xe63e89e41f40c384;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001831919d8 ^ _UNK_180cbd730;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183191ef0 ^ _UNK_180cbd738;
  uRam0000000183191d50 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831919d8 + 0xe63e89e41f40c384) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183191ef0 + 0x84225cda));
  uVar3 = (uRam0000000183191d50 & 0xffffffff) * (_UNK_180cbd740 & 0xffffffff) +
          ((ulonglong)_UNK_180cbd750 * (uRam0000000183191d50 & 0xffffffff) +
           (uRam0000000183191d50 >> 0x20) * (_UNK_180cbd740 & 0xffffffff) << 0x20) &
          0x7fffffffffffffff;
  uRam0000000183191e08 = uRam0000000183191a90 ^ uVar3 ^ 0xe63e89e41f414383;
  uRam0000000183191bb0 = (uRam0000000183191bb0 ^ uVar3) + 0xe63e89e41f414383 ^ 0x952e9b25552f6df6;
  uRam0000000183191c98 = (uRam0000000183191c98 * 0x6788d607ffadc0e3 ^ uRam0000000183191bb0) + uVar3;
  uRam0000000183191fd8 = uRam0000000183191c98 ^ uRam0000000183191bb0;
  uRam0000000183191c40 = 0xe63e89e41f414383;
  uVar3 = (~uRam0000000183191de0 + 0x19c1761be0bf3c7d) *
          ((uRam0000000183191c08 ^ 0xe63e89e49b6360a6) +
          (uRam0000000183191c08 & 0x663e89e49b6360a6) * 2);
  uVar3 = (uVar3 | uRam0000000183191e80) + (uVar3 & uRam0000000183191e80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191ae0 =
       func_0x0001878fb610((uVar3 | 0xffffffff7bdc5cda) + (uVar3 & 0xffffffff7bdc5cda));
  uVar3 = uRam0000000183191ae0 & 0xffffffffffc00000;
  uVar10 = uVar3 >> 1 | uVar3;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar3 = ~((0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
            0x20 ^ uVar3) & 0xe63e89e41f414383;
  uRam0000000183191c50 = uRam0000000183191b60 ^ uVar3 ^ 0x7fff;
  uRam0000000183191ab0 = (uRam0000000183191ab0 ^ uVar3) + 0x7fff ^ 0x1b94120d5a2b0fd3;
  uRam0000000183191eb0 = (uRam0000000183191eb0 * -0x70bf4c455530f9b1 ^ uRam0000000183191ab0) + uVar3
  ;
  uRam0000000183191a98 = uRam0000000183191eb0 ^ uRam0000000183191ab0;
  uRam0000000183191c40 = 0x7fff;
  uVar3 = (uRam0000000183191fe0 ^ _UNK_180cbd760) + uRam0000000183191d68 + 0x84222325;
  uVar10 = (uRam0000000183191d68 ^ _UNK_180cbd768) + uRam0000000183191fe0 + 0x23e5428de2309d64;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183191fe0 ^ _UNK_180cbd760;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183191d68 ^ _UNK_180cbd768;
  uRam0000000183191c18 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183191fe0 + 0x23e5428de2309d64) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183191d68 + 0x84222325));
  uRam0000000183191cf8 =
       (uRam0000000183191cf8 ^ uRam0000000183191c18 * 0x7e54d5c125f25501) + 0xdc1abd721dcf629c ^
       0x971b6dfad11bdd13;
  uRam0000000183192010 =
       (uRam0000000183192010 * 0x25514a83ec0344bf ^ uRam0000000183191cf8) +
       uRam0000000183191c18 * 0x7e54d5c125f25501;
  uRam0000000183191b38 = uRam0000000183192010 ^ uRam0000000183191cf8;
  uRam0000000183191b88 = 0xdc1abd721dcf629c;
  uVar3 = (~uRam0000000183191f18 + 0x23e5428de2309d65) *
          ((uRam0000000183191e80 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183191e80 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam00000001831920e0) + (uVar3 & uRam00000001831920e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001831919a8 =
       func_0x0001878fb610((uVar3 | 0x23e5428d6612c1be) + (uVar3 & 0x23e5428d6612c1be));
  uVar3 = uRam00000001831919a8 ^ 0x7fff;
  uRam0000000183191cf0 = uRam0000000183191a70 ^ uVar3 ^ 0x23e5428de2311d63;
  uRam00000001831920c8 = (uRam00000001831920c8 ^ uVar3) + 0x23e5428de2311d63 ^ 0xa246e8ff218b0f83;
  uRam0000000183191a60 = (uRam0000000183191a60 * -0x17d870c65e1ccb79 ^ uRam00000001831920c8) + uVar3
  ;
  uRam0000000183191fa8 = uRam0000000183191a60 ^ uRam00000001831920c8;
  uRam0000000183191da8 = 0x23e5428de2311d63;
  uVar3 = (uRam00000001831920d0 ^ _UNK_180cbd770) + uRam0000000183191f38 + 0x23e5428d66133e46;
  uVar10 = (uRam0000000183191f38 ^ _UNK_180cbd778) + uRam00000001831920d0 + 0xdc1abd721dcf629c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001831920d0 ^ _UNK_180cbd770;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183191f38 ^ _UNK_180cbd778;
  uRam0000000183191a40 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831920d0 + 0xdc1abd721dcf629c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183191f38 + 0x23e5428d66133e46));
  uVar3 = (uRam0000000183191a40 ^ 0x9327822d9d3ace54) << 0x3a |
          ((uRam0000000183191a40 ^ 0x9327822d9d3ace54) & 0x7fffffffffffffff) >> 6;
  uRam0000000183191a90 = uRam00000001831919a8 ^ uVar3 ^ 0x7fff;
  uRam0000000183191bb8 = (uRam0000000183191bb8 ^ uVar3) + 0x7fff ^ 0x6024fd6ae1eb2fc6;
  uRam0000000183191960 = (uRam0000000183191960 * 0x5099c1d07f54b1d5 ^ uRam0000000183191bb8) + uVar3;
  uRam0000000183191b58 = uRam0000000183191960 ^ uRam0000000183191bb8;
  uRam00000001831920c0 = 0x7fff;
  uVar3 = (uRam0000000183191b10 ^ _UNK_180cbd780) + uRam0000000183191f00 + 0xaffabc8b71f5fc0f;
  uVar10 = (uRam0000000183191f00 ^ _UNK_180cbd788) + uRam0000000183191b10 + 0x49495a71a4dabd60;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183191b10 ^ _UNK_180cbd780;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183191f00 ^ _UNK_180cbd788;
  uRam0000000183191eb8 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183191b10 + 0x49495a71a4dabd60) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183191f00 + 0xaffabc8b71f5fc0f));
  uVar3 = uRam0000000183191eb8 << 5 | uRam0000000183191eb8 >> 0x3b;
  uRam0000000183191ea0 = uRam0000000183191c70 ^ uVar3 ^ 0xf94416fd9ab29c8a;
  uRam0000000183191e18 = (uRam0000000183191e18 ^ uVar3) + 0xf94416fd9ab29c8a ^ 0x72ceb8ac53347696;
  uRam0000000183191c10 = (uRam0000000183191c10 * -0x10e939ef3757c1e3 ^ uRam0000000183191e18) + uVar3
  ;
  uRam0000000183191f70 = uRam0000000183191c10 ^ uRam0000000183191e18;
  uRam0000000183191e90 = 0xf94416fd9ab29c8a;
  uRam0000000183191da8 = func_0x0001878fb610(uRam0000000183191fd8 + 0x9a3f92d35ade2aa1 ^ 0x6a);
  uRam0000000183191920 =
       (uRam0000000183191920 ^ uRam0000000183191da8) + 0xe6b3e6fa510d624a ^ 0xb596c129009ffeac;
  uRam0000000183191e48 =
       (uRam0000000183191e48 * 0x6ae25a7295da3b61 ^ uRam0000000183191920) + uRam0000000183191da8;
  uRam0000000183191a48 = uRam0000000183191e48 ^ uRam0000000183191920;
  uRam0000000183191b40 = 0xe6b3e6fa510d624a;
  uVar3 = (~uRam0000000183191bd8 + 0x49495a71a4dabd61) *
          ((uRam0000000183191978 ^ 0xaffabc8b71f5fc0f) +
          (uRam0000000183191978 & 0x2ffabc8b71f5fc0f) * 2);
  uVar3 = (uVar3 | uRam0000000183191f60) + (uVar3 & uRam0000000183191f60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x0001878fb610((uVar3 | 0xe6b3e6fad52f416f) + (uVar3 & 0xe6b3e6fad52f416f));
  uRam0000000183191ff0 =
       (uRam0000000183191ff0 ^ uVar3 ^ 0xaffabc8bf5d7df2a) + 0x9481801a4d29d20 ^ 0x2803a4d85ba7db26;
  uRam0000000183192018 =
       (uVar3 * -0x7fc06306649ef003 ^ uRam0000000183191ff0) + (uVar3 ^ 0xaffabc8bf5d7df2a);
  uRam0000000183191b78 = uRam0000000183192018 ^ uRam0000000183191ff0;
  uRam0000000183191ed0 = 0x9481801a4d29d20;
  uRam0000000183191d20 = func_0x0001878fb610(uRam0000000183191d70 ^ 0xc724df83eab27ae6);
  uVar3 = (uRam0000000183191d20 & 0x3fffffffffffff) * -0x4116055027eeedbf;
  uRam0000000183191c68 = uRam0000000183191be0 ^ uVar3 ^ 0xf94416fd9ab29c8a;
  uRam00000001831919f8 = (uRam00000001831919f8 ^ uVar3) + 0xf94416fd9ab29c8a ^ 0xc9855f5dd40d2e34;
  uRam0000000183191c40 = (uRam0000000183191c40 * -0x36a818ae089657df ^ uRam00000001831919f8) + uVar3
  ;
  uRam0000000183191a58 = uRam0000000183191c40 ^ uRam00000001831919f8;
  uRam0000000183191bc8 = 0xf94416fd9ab29c8a;
  uVar3 = (~uRam0000000183191e40 + 0xf94416fd9ab29c8b) *
          ((uRam0000000183191d70 ^ 0xf94416fd1e90bfaf) +
          (uRam0000000183191d70 & 0x794416fd1e90bfaf) * 2);
  uVar3 = (uVar3 | uRam0000000183191d28) + (uVar3 & uRam0000000183191d28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191e08 =
       func_0x0001878fb610((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam0000000183191ce0 = uRam0000000183191e08 << 0x2d | uRam0000000183191e08 >> 0x13;
  uRam00000001831920a0 = uRam00000001831920a0 ^ uRam0000000183191ce0 ^ 0xba136ed7a1977686;
  uRam0000000183191e60 =
       (uRam0000000183191e60 * -0x6160c6ca71a5f0ff ^ uRam00000001831920a0) + uRam0000000183191ce0;
  uRam0000000183191f58 = uRam0000000183191e60 ^ uRam00000001831920a0;
  uRam0000000183191e88 = 0;
  uVar3 = (uRam0000000183191b78 ^ 0x84225cda) + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183191b78 ^ 0x84225cda;
  uRam0000000183192028 =
       func_0x0001878fb610(((uRam0000000183191b78 * 0x2000 | uRam0000000183191b78 >> 0x33) << 0x1d |
                           (uRam0000000183191b78 & 0x7ffffffffffff) >> 0x16) - uRam0000000183191b78
                           ^ (uVar3 << 0x1d | uVar3 >> 0x23) - 0x84225cda);
  uVar3 = uRam0000000183192028 * -0x193b0a9b2c4af4df;
  uRam0000000183191f60 = uRam0000000183191df8 ^ uVar3 ^ 0x7fff;
  uRam00000001831919d0 = (uRam00000001831919d0 ^ uVar3) + 0x7fff ^ 0x1a61a9f475f070f7;
  uRam0000000183192020 = (uRam0000000183192020 * -0x7e7f1926833ff111 ^ uRam00000001831919d0) + uVar3
  ;
  uRam0000000183191d30 = uRam0000000183192020 ^ uRam00000001831919d0;
  uRam0000000183191e88 = 0x7fff;
  uVar3 = ~uRam0000000183191eb8 *
          ((uRam0000000183191b58 ^ 0xaffabc8b71f5fc0f) +
          (uRam0000000183191b58 & 0x2ffabc8b71f5fc0f) * 2);
  uVar3 = (uVar3 | uRam0000000183191e58) + (uVar3 & uRam0000000183191e58);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191bd8 =
       func_0x0001878fb610((uVar3 | 0x500543748e0a03f0) + (uVar3 & 0x500543748e0a03f0));
  uRam0000000183191d08 =
       (uRam0000000183191d08 ^ uRam0000000183191bd8) + 0x500543740a2820d5 ^ 0x3402295629f79cbe;
  uRam0000000183191cf0 =
       (uRam0000000183191cf0 * -0x71b502038e644317 ^ uRam0000000183191d08) + uRam0000000183191bd8;
  uRam0000000183191a88 = uRam0000000183191cf0 ^ uRam0000000183191d08;
  uRam0000000183191bc8 = 0x500543740a2820d5;
  uVar3 = (uRam0000000183191c10 ^ _UNK_180cbd790) + uRam00000001831919e8 + 0xaffabc8b71f5fc0f;
  uVar10 = (uRam00000001831919e8 ^ _UNK_180cbd798) + uRam0000000183191c10 + 0x500543740a2820d5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183191c10 ^ _UNK_180cbd790;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831919e8 ^ _UNK_180cbd798;
  uRam0000000183191b78 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183191c10 + 0x500543740a2820d5) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001831919e8 + 0xaffabc8b71f5fc0f));
  uRam0000000183191f88 =
       uRam0000000183191f88 ^ uRam0000000183191b78 ^ 0xaffabc8bf5d7df2a ^ 0x18fd24a0248017a5;
  uRam0000000183191bb0 =
       (uRam0000000183191bb0 * -0x173b24bdb8752ebb ^ uRam0000000183191f88) +
       (uRam0000000183191b78 ^ 0xaffabc8bf5d7df2a);
  uRam0000000183191af0 = uRam0000000183191bb0 ^ uRam0000000183191f88;
  uRam0000000183191968 = 0;
  uVar3 = ((uRam0000000183191d68 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183191d68 & 0x84225cda) * 2) * -uRam0000000183191f70;
  uVar3 = (uVar3 | uRam0000000183191fb0) + (uVar3 & uRam0000000183191fb0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183192010 =
       func_0x0001878fb610((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar2 = ~(uint)uRam0000000183192010 & 0x7fff;
  uVar4 = uVar2 >> 1 | uVar2;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar3 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          (ulonglong)uVar2;
  uRam0000000183191ec0 = uRam0000000183191d30 ^ uVar3 ^ 0x7fff;
  uRam00000001831920b8 = (uRam00000001831920b8 ^ uVar3) + 0x7fff ^ 0x533ffacffd4689a9;
  uRam0000000183191a38 = (uRam0000000183191a38 * -0x592eb3603ffa3ee7 ^ uRam00000001831920b8) + uVar3
  ;
  uRam0000000183191ac8 = uRam0000000183191a38 ^ uRam00000001831920b8;
  uRam0000000183191d18 = 0x7fff;
  uVar3 = (uRam0000000183191c10 ^ 0x84225cda) + uRam0000000183192030 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183191c10 ^ 0x84225cda;
  uVar10 = ((uRam0000000183192030 + uRam0000000183191c10) * 0x2000 |
           uRam0000000183192030 + uRam0000000183191c10 >> 0x33) ^ uRam0000000183192030;
  uRam00000001831920a8 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) - uRam0000000183191c10 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183192030 + 0x84225cda));
  uVar3 = (uRam00000001831920a8 ^ 0x7f80) & 0xffffffffffff80;
  uRam0000000183192070 = uRam0000000183191b48 ^ uVar3 ^ 0x7fff;
  uRam0000000183191ff8 = (uRam0000000183191ff8 ^ uVar3) + 0x7fff ^ 0x3616f2c5c6ccc843;
  uRam0000000183191af0 = (uRam0000000183191af0 * -0x42efe21cf1e52acd ^ uRam0000000183191ff8) + uVar3
  ;
  uRam00000001831920a0 = uRam0000000183191af0 ^ uRam0000000183191ff8;
  uRam0000000183191fc0 = 0x7fff;
  uVar3 = (~uRam0000000183191b38 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001831920e0) +
          ((param_4 ^ 0x84222325) & uRam00000001831920e0) * 2);
  uVar3 = (uVar3 | uRam0000000183191a98) + (uVar3 & uRam0000000183191a98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183192078 =
       func_0x0001878fb610((param_4 ^ 0x84225cda | uVar3) + (uVar3 & (param_4 ^ 0x84225cda)));
  uVar3 = uRam0000000183192078 << 0xb | uRam0000000183192078 >> 0x35;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar2;
  uRam0000000183191cf0 = (uRam0000000183191cf0 ^ uVar3) + uVar10 ^ 0x53319b7f29a0c760;
  uRam0000000183191ce0 = (uRam0000000183191ce0 * -0x770b64ac196a7d09 ^ uRam0000000183191cf0) + uVar3
  ;
  uRam0000000183191b70 = uRam0000000183191ce0 ^ uRam0000000183191cf0;
  uVar7 = (ulonglong)param_3;
  uVar6 = uVar10 ^ 0x84222325;
  uVar3 = ((uRam00000001831919b8 ^ uVar6) +
          (ulonglong)((uint)uRam00000001831919b8 & (uint)uVar6) * 2) *
          (uVar7 - uRam0000000183191ad0);
  uVar3 = (uVar3 | uRam0000000183191da0) + (uVar3 & uRam0000000183191da0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191a40 = uVar10;
  uRam0000000183191ce8 =
       func_0x0001878fb610((uVar6 ^ uVar7 | uVar3) +
                           (ulonglong)((uint)(uVar6 ^ uVar7) & (uint)uVar3));
  uVar6 = uVar10 * uVar7 ^ uRam0000000183191ce8;
  uVar3 = uVar6 >> 1 | uVar6;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar10 = ~(ulonglong)
            ((uint)uVar6 ^
             (0x40 - (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38)) * 0x80 ^ uVar2) & uVar10;
  uVar6 = (ulonglong)(uVar2 ^ param_3);
  uRam0000000183192028 = (uRam0000000183192028 ^ uVar10) + uVar6 ^ 0xb8f6868df2b4c827;
  uRam0000000183191dc0 = (uRam0000000183191dc0 * 0x7883c0330362127d ^ uRam0000000183192028) + uVar10
  ;
  uRam0000000183191ee0 = uRam0000000183191dc0 ^ uRam0000000183192028;
  uVar3 = (~uRam0000000183191da8 + 0x3f3d051e) *
          ((uRam0000000183191910 ^ 0xd1278cbf) +
          (ulonglong)((uint)uRam0000000183191910 & 0xd1278cbf) * 2);
  uVar3 = (uVar3 | uRam0000000183191d70) + (uVar3 & uRam0000000183191d70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191d00 = uVar6;
  uRam0000000183191920 =
       func_0x0001878fb610((uVar3 | 0xee1a89a2) + (ulonglong)((uint)uVar3 & 0xee1a89a2));
  uVar3 = uRam0000000183191cf0 * -0xe804ea47178e69 << 0x26 |
          uRam0000000183191cf0 * -0xe804ea47178e69 >> 0x1a;
  uRam0000000183192030 = (uRam0000000183192030 ^ uVar3) + 0x7f3daf9f ^ 0x7ea500d1861d9248;
  uRam0000000183191cd8 = (uRam0000000183191cd8 * 0x4e8490aee3a026b5 ^ uRam0000000183192030) + uVar3;
  uRam0000000183191c48 = uRam0000000183191cd8 ^ uRam0000000183192030;
  uRam0000000183191d68 = 0x7f3daf9f;
  uRam00000001831919e0 = func_0x0001878fb610(uRam0000000183191eb8 + 0x6cffef8cffe6ff ^ 0x95);
  uVar3 = uRam00000001831919e0 - (uRam00000001831919e0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001831919e0;
  uRam0000000183191be0 = (uRam0000000183191be0 ^ uVar3) - 0x940b5eb0 ^ 0xb1d1b381eed83cfb;
  uRam0000000183191d98 = (uRam0000000183191d98 * -0x388784a3750dd01 ^ uRam0000000183191be0) + uVar3;
  uRam0000000183191980 = uRam0000000183191d98 ^ uRam0000000183191be0;
  uRam0000000183192028 = 0x6bf4a150;
  uVar3 = (uRam0000000183192018 ^ _UNK_180cbd7a0) + uRam0000000183191998 + 0x842233e4;
  uVar10 = (uRam0000000183191998 ^ _UNK_180cbd7a8) + uRam0000000183192018 + 0x940b5eb0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183192018 ^ _UNK_180cbd7a0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183191998 ^ _UNK_180cbd7a8;
  uRam0000000183191ca0 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183192018 + 0x940b5eb0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183191998 + 0x842233e4));
  uVar3 = uRam0000000183191ca0 << 0x3a | uRam0000000183191ca0 >> 6;
  uRam0000000183191908 = uRam0000000183191cb8 ^ uVar3 ^ 0x940b6f71;
  uRam0000000183191e38 = (uRam0000000183191e38 ^ uVar3) + 0x940b6f71 ^ 0xcd3cf3828e27f33;
  uRam00000001831919b0 = (uRam00000001831919b0 * -0x7442eadea6f8ac5f ^ uRam0000000183191e38) + uVar3
  ;
  uRam0000000183191c18 = uRam00000001831919b0 ^ uRam0000000183191e38;
  uRam0000000183191b20 = 0x940b6f71;
  uVar3 = (uRam0000000183191a68 ^ _UNK_180cbd7b0) + uRam0000000183191b00 + 0x10294c54;
  uVar10 = (uRam0000000183191b00 ^ _UNK_180cbd7b8) + uRam0000000183191a68 + 0x6bf4a150;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183191a68 ^ _UNK_180cbd7b0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183191b00 ^ _UNK_180cbd7b8;
  uRam0000000183191f18 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183191a68 + 0x6bf4a150) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183191b00 + 0x10294c54));
  uVar3 = (uRam0000000183191f18 ^ 0x3e6e3fc3e75ce450) << 4 |
          (uRam0000000183191f18 ^ 0x3e6e3fc3e75ce450) >> 0x3c;
  uRam0000000183191e70 = uRam0000000183191df0 ^ uVar3 ^ 0x1000010c1;
  uRam0000000183192048 = (uRam0000000183192048 ^ uVar3) + 0x1000010c1 ^ 0x8a5f59978167aa0;
  uRam0000000183191d80 = (uRam0000000183191d80 * -0x6ee941f69b298eef ^ uRam0000000183192048) + uVar3
  ;
  uRam0000000183191d58 = uRam0000000183191d80 ^ uRam0000000183192048;
  uRam0000000183191ac0 = 0x10c1;
  uVar3 = (uRam00000001831920e8 ^ _UNK_180cbd7c0) + uRam00000001831919e8 + 0x842233e4;
  uVar10 = (uRam00000001831919e8 ^ _UNK_180cbd7c8) + uRam00000001831920e8 + 0x515e770c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001831920e8 ^ _UNK_180cbd7c0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831919e8 ^ _UNK_180cbd7c8;
  uRam0000000183191958 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831920e8 + 0x515e770c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001831919e8 + 0x842233e4));
  uVar3 = (uRam0000000183191958 ^ 0x10c1) << 0x1c | uRam0000000183191958 >> 0x24;
  uRam0000000183192008 = uRam0000000183191bd8 ^ uVar3 ^ 0x515e87cd;
  uRam0000000183191cb8 = (uRam0000000183191cb8 ^ uVar3) + 0x515e87cd ^ 0x9da77ebd90666d55;
  uRam0000000183191f98 = (uRam0000000183191f98 * -0x42e7a5d09804c9d9 ^ uRam0000000183191cb8) + uVar3
  ;
  uRam0000000183191e70 = uRam0000000183191f98 ^ uRam0000000183191cb8;
  uRam0000000183191a78 = 0x515e87cd;
  uVar3 = (~uRam0000000183191dd8 + 0xaea188f5) *
          ((uRam0000000183191f20 ^ 0xd57ca4e8) +
          (ulonglong)((uint)uRam0000000183191f20 & 0xd57ca4e8) * 2);
  uVar3 = (uVar3 | uRam0000000183191cf8) + (uVar3 & uRam0000000183191cf8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191d58 =
       func_0x0001878fb610((uVar3 | 0x7bdd2c1c) + (ulonglong)((uint)uVar3 & 0x7bdd2c1c));
  uVar3 = uRam0000000183191d58 & 0xfffffffffff00000;
  uRam0000000183191d78 = uRam0000000183192068 ^ uVar3 ^ 0x1000010c1;
  uRam0000000183191960 = (uRam0000000183191960 ^ uVar3) + 0x1000010c1 ^ 0x79a02e3498b0c6a2;
  uRam0000000183191dc0 = (uRam0000000183191dc0 * 0x7c4d12dfa6be8a75 ^ uRam0000000183191960) + uVar3;
  uRam0000000183191f10 = uRam0000000183191dc0 ^ uRam0000000183191960;
  uRam0000000183191af0 = 0x10c1;
  uVar3 = (~uRam0000000183191b08 + 0x8710d30d) *
          ((uRam0000000183191900 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183191900 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001831920a0) + (uVar3 & uRam00000001831920a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191dc8 =
       func_0x0001878fb610((uVar3 | 0x332f029) + (ulonglong)((uint)uVar3 & 0x332f029));
  uVar3 = (uRam0000000183191dc8 ^ 0x8710d30c) & 0x7fffffffff;
  uRam0000000183191df0 = (uRam0000000183191df0 ^ uVar3) - 0x8710d30c ^ 0x65171e98a1420d;
  uRam0000000183191d40 = (uRam0000000183191d40 * -0x4a54d4469b162371 ^ uRam0000000183191df0) + uVar3
  ;
  uRam0000000183191d08 = uRam0000000183191d40 ^ uRam0000000183191df0;
  uRam0000000183191ba0 = 0x78ef2cf4;
  uVar3 = (uRam00000001831919e8 ^ _UNK_180cbd7d0) + uRam00000001831919c8 + 0x842233e4;
  uVar10 = (uRam00000001831919c8 ^ _UNK_180cbd7d8) + uRam00000001831919e8 + 0x8710d30c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001831919e8 ^ _UNK_180cbd7d0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831919c8 ^ _UNK_180cbd7d8;
  uRam0000000183191980 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831919e8 + 0x8710d30c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001831919c8 + 0x842233e4));
  uVar3 = uRam0000000183191980 - (uRam0000000183191980 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183191980;
  uRam0000000183191d70 = uRam0000000183191ac8 ^ uVar3 ^ 0x8710e3cd;
  uRam0000000183191a38 = (uRam0000000183191a38 ^ uVar3) + 0x8710e3cd ^ 0x33aac858e6bc6fd0;
  uRam0000000183191a70 = (uRam0000000183191a70 * -0x3331efc36e4962ed ^ uRam0000000183191a38) + uVar3
  ;
  uRam00000001831919c0 = uRam0000000183191a70 ^ uRam0000000183191a38;
  uRam0000000183191cf0 = 0x8710e3cd;
  uVar3 = (~uRam0000000183191cc8 + 0x5ccfa80f) *
          ((uRam0000000183191d78 ^ 0xfb1f8cba) +
          (ulonglong)((uint)uRam0000000183191d78 & 0xfb1f8cba) * 2);
  uVar3 = (uVar3 | uRam0000000183191d40) + (uVar3 & uRam0000000183191d40);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191ef8 =
       func_0x0001878fb610((uVar3 | 0xa7d024b4) + (ulonglong)((uint)uVar3 & 0xa7d024b4));
  uVar3 = (uRam0000000183191ef8 ^ 0x7fc00000) & 0x7fffffffffc00000;
  uRam0000000183191d78 = uRam0000000183191bf8 ^ uVar3 ^ 0xdc0d57ad;
  uRam0000000183191e48 = (uRam0000000183191e48 ^ uVar3) + 0xdc0d57ad ^ 0x7f09c05c8b9767d;
  uRam0000000183191d58 = (uRam0000000183191d58 * 0x41043830ae60e3e9 ^ uRam0000000183191e48) + uVar3;
  uRam0000000183191dc0 = uRam0000000183191d58 ^ uRam0000000183191e48;
  uRam0000000183191a48 = 0xdc0d57ad;
  uRam0000000183192028 = func_0x0001878fb610(uRam0000000183191c50 + 0x24006493ff2fff ^ 0x59);
  uRam0000000183191ca8 =
       (uRam0000000183191ca8 ^ uRam0000000183192028) + 0x23f20791 ^ 0xb1ee4c27ffc131fc;
  uRam0000000183191d70 =
       (uRam0000000183191d70 * 0x67b479bdcb006ec5 ^ uRam0000000183191ca8) + uRam0000000183192028;
  uRam0000000183191eb0 = uRam0000000183191d70 ^ uRam0000000183191ca8;
  uRam00000001831920a0 = 0x23f20791;
  uRam0000000183191eb8 = func_0x0001878fb610(lRam0000000183191cc0 + 0x24005cabffcfffU ^ 0x9e);
  uRam0000000183191908 =
       (uRam0000000183191908 ^ uRam0000000183191eb8 ^ 0x7f3daf9f) + 0x5c0da80e ^ 0x12fa439b4fb7c4c5;
  uRam0000000183191ff0 =
       (uRam0000000183191ff0 * -0x52c1783463c0f207 ^ uRam0000000183191908) +
       (uRam0000000183191eb8 ^ 0x7f3daf9f);
  uRam0000000183191b68 = uRam0000000183191ff0 ^ uRam0000000183191908;
  uRam00000001831919a8 = 0x5c0da80e;
  uVar3 = (uRam0000000183191d38 ^ _UNK_180cbd7e0) + uRam0000000183191f50 + 0xa7d024b4;
  uVar10 = (uRam0000000183191f50 ^ _UNK_180cbd7e8) + uRam0000000183191d38 + 0xb81b501c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183191d38 ^ _UNK_180cbd7e0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183191f50 ^ _UNK_180cbd7e8;
  uRam0000000183192048 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183191d38 + 0xb81b501c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183191f50 + 0xa7d024b4));
  uVar3 = (uRam0000000183192048 ^ 0x19d9cb36952123dc) & 0x7fffffffffffffff ^ 0x23f20791;
  uRam0000000183191d50 = uRam0000000183191f28 ^ uVar3 ^ 0xdc0d57ad;
  uRam0000000183191ce0 = (uRam0000000183191ce0 ^ uVar3) + 0xdc0d57ad ^ 0xc533cbddc824c262;
  uRam0000000183191ff8 = (uRam0000000183191ff8 * -0x15c0d26d8cb6ba0f ^ uRam0000000183191ce0) + uVar3
  ;
  uRam0000000183191ac8 = uRam0000000183191ff8 ^ uRam0000000183191ce0;
  uRam0000000183191b20 = 0xdc0d57ad;
  uVar3 = (~uRam0000000183191e90 + 0xdc0d57ae) *
          ((uRam0000000183191c08 ^ 0x582f7488) +
          (ulonglong)((uint)uRam0000000183191c08 & 0x582f7488) * 2);
  uVar3 = (uVar3 | uRam00000001831920e8) + (uVar3 & uRam00000001831920e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183191bb8 =
       func_0x0001878fb610((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam0000000183191d10 = (uRam0000000183191bb8 ^ 0x235d990ae9) & 0x3fffffffff;
  uRam0000000183191ce8 = uRam0000000183191ce8 ^ uRam0000000183191d10 ^ 0x89aa459e8c40b20d;
  uRam0000000183191ad0 =
       (uRam0000000183191ad0 * 0x77c11c5130c5611d ^ uRam0000000183191ce8) + uRam0000000183191d10;
  uRam0000000183191e28 = uRam0000000183191ad0 ^ uRam0000000183191ce8;
  uRam0000000183191e70 = 0;
  uVar3 = (uRam0000000183192068 ^ _UNK_180cbd7f0) + uRam0000000183191fe8 + 0xfb1f8cba;
  uVar10 = (uRam0000000183191fe8 ^ _UNK_180cbd7f8) + uRam0000000183192068 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183192068 ^ _UNK_180cbd7f0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183191fe8 ^ _UNK_180cbd7f8;
  uRam0000000183191c80 =
       func_0x0001878fb610((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183192068 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183191fe8 + 0xfb1f8cba));
  uVar3 = uRam0000000183191c80 << 0x32 | uRam0000000183191c80 >> 0xe;
  uRam0000000183191f78 = (uRam0000000183191f78 ^ uVar3) + 0x80c25060 ^ 0x207aa5020a78387;
  uRam0000000183191a60 = (uRam0000000183191a60 * -0x377c234309a7eb21 ^ uRam0000000183191f78) + uVar3
  ;
  uRam0000000183192050 = uRam0000000183191a60 ^ uRam0000000183191f78;
  uRam00000001831919b0 = 0x80c25060;
  uRam0000000183191f38 = func_0x0001878fb610(uRam0000000183191ef8 ^ 0xffef007b9bffe185);
  uVar3 = uRam0000000183191f38 & 0x7fffffffffffffff;
  uRam0000000183191d08 = uRam0000000183192000 ^ uVar3 ^ 0x10c1;
  uRam0000000183191c40 = (uRam0000000183191c40 ^ uVar3) + 0x10c1 ^ 0x572f8281f2986509;
  uRam0000000183191ec8 = (uRam0000000183191ec8 * 0x56ded7b5c434d2fd ^ uRam0000000183191c40) + uVar3;
  uRam0000000183191d40 = uRam0000000183191ec8 ^ uRam0000000183191c40;
  uRam0000000183191ee8 = 0x10c1;
  uRam00000001831920b0 = func_0x0001878fb610(uRam0000000183191980 ^ 0xfff2ff8423ffdd80);
  uVar3 = uRam00000001831920b0 ^ 0x10c1;
  uRam00000001831919b0 = uRam0000000183191920 ^ uVar3 ^ 0x10c1;
  uRam0000000183191940 = (uRam0000000183191940 ^ uVar3) + 0x10c1 ^ 0xa404ab353bb9f2ee;
  uRam00000001831920d0 = (uRam00000001831920d0 * 0x1182025b44ca90f7 ^ uRam0000000183191940) + uVar3;
  uRam0000000183191918 = uRam00000001831920d0 ^ uRam0000000183191940;
  auVar8._8_8_ = _UNK_180cbd808;
  auVar8._0_8_ = uVar6 ^ 0x84222325;
  auVar9 = pshufb(auVar8 ^ _UNK_180cbd810,_UNK_1800170c0);
  uRam00000001831919f8 = 0x10c1;
  uVar10 = auVar9._8_8_ + auVar9._0_8_;
  uVar3 = uVar10 + uRam0000000183191cf0;
  if (auVar9._4_4_ < 0) {
    uVar3 = uRam0000000183191f38 ^ uVar10;
  }
  uRam0000000183191b10 = func_0x0001878fb610(SUB161(auVar8 ^ _UNK_180cbd810,5) ^ uVar3);
  uVar3 = uRam0000000183191b10 >> 1 | uRam0000000183191b10;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uVar6 ^ ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
                   * 0x80 ^ uRam0000000183191b10) & 0x7fffffffffffffff;
  lVar5 = uVar6 - ((uVar2 ^ param_3) & 0x10c1) * 2;
  uRam0000000183191f18 = (uRam0000000183191f18 ^ uVar3) + lVar5 + 0x10c1 ^ 0x6f1d45485af7026a;
  uRam0000000183191d28 = (uRam0000000183191d28 * -0x20beb4dc363b95ad ^ uRam0000000183191f18) + uVar3
  ;
  uRam0000000183191be8 = uRam0000000183191d28 ^ uRam0000000183191f18;
  uRam0000000183191ef8 = lVar5 + 0x10c1U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1bce7,0x452);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001878f2b28 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cbb8d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lZ; cjs (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1878fb6a0, runtime 6fffef50b6a0) =====

void FUN_1878fb6a0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001878fb6eb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cbd930 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/lZ; cjt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1878fc6b0, runtime 6fffef50c6b0) =====

void FUN_1878fc6b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001878fc739 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cbdef0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



