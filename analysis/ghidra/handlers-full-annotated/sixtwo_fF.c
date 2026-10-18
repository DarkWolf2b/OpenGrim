// ===== Lsixtwo/fF; _a8e2baaa9a1887663570348d5ce6a137 ()V (handler @ image 18ae684a0, runtime 6ffff2a784a0) =====

void FUN_18ae684a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ae68588 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819e8ac8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fF; aST (Lsixtwo/gH$th;)V (handler @ image 18ae4c850, runtime 6ffff2a5c850) =====

void FUN_18ae4c850(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1436a,0x32a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ae4c949 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819de870 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fF; aSU ()Ljava/lang/Boolean; (handler @ image 18ae64330, runtime 6ffff2a74330) =====

void FUN_18ae64330(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ae64350 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819e7320 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fF; aSV ()Ljava/lang/Boolean; (handler @ image 18ae847f0, runtime 6ffff2a947f0) =====

void FUN_18ae847f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ae84810 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819eb5b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fF; aSW ()Ljava/lang/Boolean; (handler @ image 18ae84c40, runtime 6ffff2a94c40) =====

void FUN_18ae84c40(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ae84c60 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819eb790 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fF; aSX (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18ae85090, runtime 6ffff2a95090) =====

undefined8 FUN_18ae85090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fF; aSY ([B)Ljava/lang/String; (handler @ image 18ae85120, runtime 6ffff2a95120) =====

void FUN_18ae85120(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018ae851c3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819ebaf0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fF; aSZ (IJ)Ljava/lang/String; (handler @ image 18aeb33c0, runtime 6ffff2ac33c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aeb33c0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uRam000000018327bc08 = func_0x00018aeb9b80(uRam000000018327b900 ^ 0xafcda364560c2cf3);
  uVar2 = uRam000000018327bc08 << 0x10 | uRam000000018327bc08 >> 0x30;
  uRam000000018327b600 = (uRam000000018327b600 ^ uVar2) + 0xffdfbdf6bbf77f7f ^ 0x25d418b955e73cde;
  uRam000000018327b870 = (uRam000000018327b870 * -0x64166b23429114a7 ^ uRam000000018327b600) + uVar2
  ;
  uRam000000018327b730 = uRam000000018327b870 ^ uRam000000018327b600;
  uRam000000018327b688 = uRam000000018327b858 ^ 0xffdfbdf6bbf77f7f;
  uRam000000018327ba80 = -0x20420944088081;
  uVar2 = (uRam000000018327b850 ^ _UNK_1819f3d20) + uRam000000018327bbe8 + 0x84222325;
  uVar5 = (uRam000000018327bbe8 ^ _UNK_1819f3d28) + uRam000000018327b850 + 0x912cb8378d051528;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018327b850 ^ _UNK_1819f3d20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327bbe8 ^ _UNK_1819f3d28;
  uRam000000018327bc70 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327b850 + 0x912cb8378d051528) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018327bbe8 + 0x84222325));
  uRam000000018327bb70 =
       (uRam000000018327bb70 ^ uRam000000018327bc70) + 0x6ed347c872faead8 ^ 0x9667c7c735128ec6;
  uRam000000018327ba40 =
       (uRam000000018327ba40 * -0x7f8100de8d3d8f4f ^ uRam000000018327bb70) + uRam000000018327bc70;
  uRam000000018327bad8 = uRam000000018327ba40 ^ uRam000000018327bb70;
  uRam000000018327b568 = 0x6ed347c872faead8;
  uVar2 = (~uRam000000018327b8d0 + 0x912cb8378d051529) *
          ((uRam000000018327b708 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327b708 & 0x84225cda) * 2);
  uVar2 = (uVar2 | uRam000000018327bb68) + (uVar2 & uRam000000018327bb68);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327bc30 =
       func_0x00018aeb9b80((uVar2 | 0x912cb837092749f2) + (uVar2 & 0x912cb837092749f2));
  uRam000000018327b7b0 = uRam000000018327b848 ^ uRam000000018327bc30 ^ 0x912cb8378d059527;
  uRam000000018327b830 =
       (uRam000000018327b830 ^ uRam000000018327bc30) + 0x912cb8378d059527 ^ 0x7b0a90e836e1c4cc;
  uRam000000018327b6f0 =
       (uRam000000018327b6f0 * -0x3ced52d570674af7 ^ uRam000000018327b830) + uRam000000018327bc30;
  uRam000000018327bb60 = uRam000000018327b6f0 ^ uRam000000018327b830;
  uRam000000018327bca8 = 0x912cb8378d059527;
  uVar2 = (uRam000000018327b5c0 ^ _UNK_1819f3d30) + uRam000000018327b7e0 + 0x912cb8370927b602;
  uVar5 = (uRam000000018327b7e0 ^ _UNK_1819f3d38) + uRam000000018327b5c0 + 0x6ed347c872faead8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018327b5c0 ^ _UNK_1819f3d30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327b7e0 ^ _UNK_1819f3d38;
  uRam000000018327b990 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327b5c0 + 0x6ed347c872faead8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018327b7e0 + 0x912cb8370927b602));
  uVar2 = ~uRam000000018327b990 & 0x912cb8378d059527;
  uRam000000018327b758 = uRam000000018327b6d8 ^ uVar2 ^ 0x7fff;
  uRam000000018327bb18 = (uRam000000018327bb18 ^ uVar2) + 0x7fff ^ 0xa18ff866568e748b;
  uRam000000018327bc00 = (uRam000000018327bc00 * -0x8afab6d373d501b ^ uRam000000018327bb18) + uVar2;
  uRam000000018327b600 = uRam000000018327bc00 ^ uRam000000018327bb18;
  uRam000000018327bb50 = 0x7fff;
  uRam000000018327b888 = func_0x00018aeb9b80(lRam000000018327b798 + 0x4f237d7b2aa74d84U ^ 0xd3);
  uVar2 = (uRam000000018327b888 ^ 0xfffffffffff87fff) << 0x23 |
          (uRam000000018327b888 ^ 0xfffffffffff87fff) >> 0x1d;
  uRam000000018327ba98 = uRam000000018327b8b8 ^ uVar2 ^ 0x7fff;
  uRam000000018327b870 = (uRam000000018327b870 ^ uVar2) + 0x7fff ^ 0x235e4d4e68a02498;
  uRam000000018327b7f8 = (uRam000000018327b7f8 * -0x62463db36e7a7055 ^ uRam000000018327b870) + uVar2
  ;
  uRam000000018327ba70 = uRam000000018327b7f8 ^ uRam000000018327b870;
  uRam000000018327b968 = 0x7fff;
  uRam000000018327b768 = func_0x00018aeb9b80(lRam000000018327b5c8 + 0x4f475b09a490879aU ^ 0x66);
  uRam000000018327b660 =
       (uRam000000018327b660 ^ uRam000000018327b768 & 0x7fffffffffffff) + 0x98524cb065558780 ^
       0xeb49a4b5fac5c06;
  uRam000000018327b908 =
       (uRam000000018327b908 * 0x4d2a815ee1014399 ^ uRam000000018327b660) +
       (uRam000000018327b768 & 0x7fffffffffffff);
  uRam000000018327bc38 = uRam000000018327b908 ^ uRam000000018327b660;
  uRam000000018327bcb8 = 0x98524cb065558780;
  uVar2 = (uRam000000018327b580 ^ _UNK_1819f3d40) + uRam000000018327b9a0 + 0xffdfbdf63fd55c5a;
  uVar5 = (uRam000000018327b9a0 ^ _UNK_1819f3d48) + uRam000000018327b580 + 0x4774fc2c9adb48fd;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018327b580 ^ _UNK_1819f3d40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327b9a0 ^ _UNK_1819f3d48;
  uRam000000018327b9c0 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327b580 + 0x4774fc2c9adb48fd) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018327b9a0 + 0xffdfbdf63fd55c5a));
  uVar2 = (uRam000000018327b9c0 >> 8 ^ 0x1f6bbf77f7f) & 0x3ffffffffff;
  uRam000000018327b508 = uRam000000018327b628 ^ uVar2 ^ 0x4754ba2356d2c87c;
  uRam000000018327b868 = (uRam000000018327b868 ^ uVar2) + 0x4754ba2356d2c87c ^ 0x24e4cd1f70fa686c;
  uRam000000018327b840 = (uRam000000018327b840 * 0x1ea42890cbd92711 ^ uRam000000018327b868) + uVar2;
  uRam000000018327bb20 = uRam000000018327b840 ^ uRam000000018327b868;
  uRam000000018327b568 = 0x4754ba2356d2c87c;
  uRam000000018327b6d8 = func_0x00018aeb9b80(uRam000000018327b768 + 0xc5f4a95a5f40f197 ^ 99);
  uVar2 = uRam000000018327b6d8 - (uRam000000018327b6d8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018327b6d8;
  uRam000000018327b9a0 = (uRam000000018327b9a0 ^ uVar2) + 0x4754bc249ad3487d ^ 0x1a77994226f6b166;
  uRam000000018327b5f0 = (uRam000000018327b5f0 * 0x6572324d1ac4aa9 ^ uRam000000018327b9a0) + uVar2;
  uRam000000018327bbc8 = uRam000000018327b5f0 ^ uRam000000018327b9a0;
  uRam000000018327b6b8 = 0x4754bc249ad3487d;
  uRam000000018327bca8 = func_0x00018aeb9b80(uRam000000018327b968 ^ 0x9383fe905cd968e2);
  uVar2 = uRam000000018327bca8 ^ 0x600380114828078;
  uRam000000018327b868 = uRam000000018327b698 ^ uVar2 ^ 0x4754ba2356d2c87c;
  uRam000000018327b5f8 = (uRam000000018327b5f8 ^ uVar2) + 0x4754ba2356d2c87c ^ 0x90793fea074df626;
  uRam000000018327bc20 = (uRam000000018327bc20 * -0x3edf700d727d7dcb ^ uRam000000018327b5f8) + uVar2
  ;
  uRam000000018327b758 = uRam000000018327bc20 ^ uRam000000018327b5f8;
  uRam000000018327b670 = 0x4754ba2356d2c87c;
  uVar2 = (uRam000000018327b968 ^ 0x84225cda) + uRam000000018327b680 + 0x84225cda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018327b968 ^ 0x84225cda;
  uVar5 = ((uRam000000018327b680 + uRam000000018327b968) * 0x2000 |
          uRam000000018327b680 + uRam000000018327b968 >> 0x33) ^ uRam000000018327b680;
  lRam000000018327b778 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018327b968 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018327b680 + 0x84225cda));
  uVar2 = lRam000000018327b778 * 0xed540fb117dc1cf;
  uRam000000018327b6c8 = uRam000000018327bc90 ^ uVar2 ^ 0x7fff;
  uRam000000018327b7b0 = (uRam000000018327b7b0 ^ uVar2) + 0x7fff ^ 0x430f3d271f242071;
  uRam000000018327b668 = (uRam000000018327b668 * 0x45273a833dbeaae1 ^ uRam000000018327b7b0) + uVar2;
  uRam000000018327ba38 = uRam000000018327b668 ^ uRam000000018327b7b0;
  uRam000000018327bab8 = uRam000000018327bc98 ^ 0x7fff;
  uRam000000018327b978 = 0x7fff;
  uRam000000018327b7a0 = func_0x00018aeb9b80(uRam000000018327b610 ^ 0xf6631fbf5cc1e550);
  uVar2 = uRam000000018327b7a0 >> 1 | uRam000000018327b7a0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018327b7a0) & 0xffdfbdf6bbf77f7f;
  uRam000000018327bab8 = (uRam000000018327bab8 ^ uVar2) + 0x20420944088080 ^ 0xe93a5983b204a0f6;
  uRam000000018327bc30 = (uRam000000018327bc30 * 0x5645440dfdefd78b ^ uRam000000018327bab8) + uVar2;
  uRam000000018327b768 = uRam000000018327bc30 ^ uRam000000018327bab8;
  uRam000000018327b8a0 = 0x20420944088080;
  uRam000000018327b508 = func_0x00018aeb9b80(uRam000000018327b730 + 0xffbbff7baa0021ff ^ 0x45);
  uVar2 = uRam000000018327b508 ^ 0x7fff;
  uRam000000018327b858 = uRam000000018327b668 ^ uVar2 ^ 0x7fff;
  uRam000000018327b8b8 = (uRam000000018327b8b8 ^ uVar2) + 0x7fff ^ 0xe27d5ea16406234d;
  uRam000000018327b7f0 = (uRam000000018327b7f0 * 0x2dd0fdb946aaed7f ^ uRam000000018327b8b8) + uVar2;
  uRam000000018327b800 = uRam000000018327b7f0 ^ uRam000000018327b8b8;
  lRam000000018327b828 = 0x7fff;
  uVar2 = (~uRam000000018327b9e0 + 0xbf1b9d76bb63733b) *
          ((uRam000000018327b728 ^ 0xbf1b9d763f41501f) +
          (uRam000000018327b728 & 0x3f1b9d763f41501f) * 2);
  uVar2 = (uVar2 | uRam000000018327b850) + (uVar2 & uRam000000018327b850);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327bc70 =
       func_0x00018aeb9b80((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar2 = uRam000000018327bc70 - (uRam000000018327bc70 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018327bc70) * 0x5a274fc69526fb3f;
  uRam000000018327b750 = uRam000000018327b750 ^ uVar2 ^ 0x6911f7fb3232e013;
  uRam000000018327b788 = (uRam000000018327b788 * -0x15687405f624e649 ^ uRam000000018327b750) + uVar2
  ;
  uRam000000018327bc28 = uRam000000018327b788 ^ uRam000000018327b750;
  uRam000000018327b680 = 0;
  uVar2 = ((uRam000000018327ba18 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327ba18 & 0x84225cda) * 2) * -lRam000000018327b828;
  uVar2 = (uVar2 | uRam000000018327b738) + (uVar2 & uRam000000018327b738);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327ba18 =
       func_0x00018aeb9b80((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uVar2 = uRam000000018327ba18 * -0x6ee7eb4c28ac9f8d;
  uRam000000018327b6b0 = uRam000000018327b888 ^ uVar2 ^ 0x7fff;
  uRam000000018327ba10 = (uRam000000018327ba10 ^ uVar2) + 0x7fff ^ 0xdd2af0943bcfc011;
  uRam000000018327b5a0 = (uRam000000018327b5a0 * 0x4a2b523b8411be3b ^ uRam000000018327ba10) + uVar2;
  uRam000000018327b758 = uRam000000018327b5a0 ^ uRam000000018327ba10;
  uRam000000018327b868 = 0x7fff;
  uVar2 = param_4 ^ 0x84222325 ^ uRam000000018327b740;
  lVar4 = (param_4 ^ 0x84222325) + uRam000000018327b9b0;
  uVar5 = uVar2 + lVar4;
  uVar6 = (uRam000000018327b9b0 ^ 0x7fff) + uRam000000018327b740 + 0x7fff;
  uVar2 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar2;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018327b9b0 ^ 0x7fff;
  uRam000000018327b6a8 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327b740 + 0x7fff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  uVar2 = uRam000000018327b6a8 << 0x13 | uRam000000018327b6a8 >> 0x2d;
  uVar3 = (uint)param_4 & 0x7fff;
  uRam000000018327b660 = (ulonglong)uVar3;
  uRam000000018327b9b8 = (uRam000000018327b9b8 ^ uVar2) + uRam000000018327b660 ^ 0x16e8688b31c5c6f8;
  uRam000000018327bbc8 = (uRam000000018327bbc8 * 0xaaabff78e687467 ^ uRam000000018327b9b8) + uVar2;
  uRam000000018327ba10 = uRam000000018327bbc8 ^ uRam000000018327b9b8;
  uVar5 = uRam000000018327b660 ^ 0x84222325;
  uVar2 = ((uRam000000018327b5e0 ^ uVar5) +
          (ulonglong)((uint)uRam000000018327b5e0 & (uint)uVar5) * 2) *
          (param_3 - uRam000000018327bb48);
  uVar2 = (uVar2 | uRam000000018327b6c0) + (uVar2 & uRam000000018327b6c0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar5 = uVar5 ^ param_3;
  uRam000000018327bc48 =
       func_0x00018aeb9b80((uVar5 | uVar2) + (ulonglong)((uint)uVar5 & (uint)uVar2));
  uVar2 = (uRam000000018327bc48 & 0x3fff) << 0x2e | uRam000000018327bc48 >> 0x12;
  uRam000000018327b888 = (ulonglong)(uVar3 ^ param_3);
  uRam000000018327bbf0 = (uRam000000018327bbf0 ^ uVar2) + uRam000000018327b888 ^ 0xc1a3d54427103f01;
  uRam000000018327b970 = (uRam000000018327b970 * -0x3099f0beb92f372d ^ uRam000000018327bbf0) + uVar2
  ;
  uRam000000018327b510 = uRam000000018327b970 ^ uRam000000018327bbf0;
  uVar2 = (uRam000000018327b690 ^ _UNK_1819f3d50) + uRam000000018327b950 + 0x9ed9d2db;
  uVar5 = (uRam000000018327b950 ^ _UNK_1819f3d58) + uRam000000018327b690 + 0x4c479529;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018327b690 ^ _UNK_1819f3d50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327b950 ^ _UNK_1819f3d58;
  uRam000000018327b838 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327b690 + 0x4c479529) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018327b950 + 0x9ed9d2db));
  uRam000000018327b8a0 =
       (uRam000000018327b8a0 ^ uRam000000018327b838 & 0x1fffffffffffffff) + 0x56bc64d7 ^
       0x241835023cea9db9;
  uRam000000018327b670 =
       (uRam000000018327b670 * -0xbd7dc28b3a230af ^ uRam000000018327b8a0) +
       (uRam000000018327b838 & 0x1fffffffffffffff);
  uRam000000018327bc48 = uRam000000018327b670 ^ uRam000000018327b8a0;
  uRam000000018327b740 = 0x56bc64d7;
  uVar2 = (uRam000000018327b500 ^ _UNK_1819f3d60) + uRam000000018327bb10 + 0x84222325;
  uVar5 = (uRam000000018327bb10 ^ _UNK_1819f3d68) + uRam000000018327b500 + 0x22d25700;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018327b500 ^ _UNK_1819f3d60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327bb10 ^ _UNK_1819f3d68;
  uRam000000018327ba00 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327b500 + 0x22d25700) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018327bb10 + 0x84222325));
  uRam000000018327b540 =
       (uRam000000018327b540 ^ uRam000000018327ba00 ^ 0x22d25700) - 0x22d25700 ^ 0x15ba89ea3bbecb9f;
  uRam000000018327b9c0 =
       (uRam000000018327b9c0 * 0x5dce8c9f5700dfab ^ uRam000000018327b540) +
       (uRam000000018327ba00 ^ 0x22d25700);
  uRam000000018327b918 = uRam000000018327b9c0 ^ uRam000000018327b540;
  uRam000000018327bb48 = 0xdd2da900;
  uRam000000018327b700 = func_0x00018aeb9b80(uRam000000018327b938 ^ 0x5ff5a32ff2f5d);
  uVar2 = (ulonglong)(((uint)uRam000000018327b700 ^ 0x2876) & 0x7e76);
  uRam000000018327b580 = uRam000000018327bab8 ^ uVar2 ^ 0x22d2d576;
  uRam000000018327b6e0 = (uRam000000018327b6e0 ^ uVar2) + 0x22d2d576 ^ 0xc0d6227ad7708bfd;
  uRam000000018327b5b0 = (uRam000000018327b5b0 * 0x111d8cef89d889dd ^ uRam000000018327b6e0) + uVar2;
  uRam000000018327bca0 = uRam000000018327b5b0 ^ uRam000000018327b6e0;
  uRam000000018327b678 = 0x22d2d576;
  uVar2 = (uRam000000018327ba18 ^ _UNK_1819f3d70) + uRam000000018327b748 + 0x84222325;
  uVar5 = (uRam000000018327b748 ^ _UNK_1819f3d78) + uRam000000018327ba18 + 0x38c4eb58;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018327ba18 ^ _UNK_1819f3d70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327b748 ^ _UNK_1819f3d78;
  uRam000000018327b7b8 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327ba18 + 0x38c4eb58) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018327b748 + 0x84222325));
  uRam000000018327b9f0 =
       (uRam000000018327b9f0 ^ uRam000000018327b7b8 & 0x1ffffffffffffff) - 0x38c4eb58 ^
       0x73934ec3b4e5bbde;
  uRam000000018327bb40 =
       (uRam000000018327bb40 * 0x1e9061097c9a3e2d ^ uRam000000018327b9f0) +
       (uRam000000018327b7b8 & 0x1ffffffffffffff);
  uRam000000018327b948 = uRam000000018327bb40 ^ uRam000000018327b9f0;
  uRam000000018327bb38 = 0xc73b14a8;
  uVar2 = (uRam000000018327b6e0 ^ _UNK_1819f3d80) + uRam000000018327b820 + 0x84225d53;
  uVar5 = (uRam000000018327b820 ^ _UNK_1819f3d88) + uRam000000018327b6e0 + 0x38c4eb58;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018327b6e0 ^ _UNK_1819f3d80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327b820 ^ _UNK_1819f3d88;
  uRam000000018327b7c0 =
       func_0x00018aeb9b80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327b6e0 + 0x38c4eb58) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018327b820 + 0x84225d53));
  uVar2 = (ulonglong)(((uint)uRam000000018327b7c0 ^ 0x3466) & 0x7e76);
  uRam000000018327bb98 = uRam000000018327bbe8 ^ uVar2 ^ 0x38c569ce;
  uRam000000018327b530 = (uRam000000018327b530 ^ uVar2) + 0x38c569ce ^ 0xeecf30b7272ccfff;
  uRam000000018327b6c0 = (uRam000000018327b6c0 * -0x11db3cf7d2510089 ^ uRam000000018327b530) + uVar2
  ;
  uRam000000018327b840 = uRam000000018327b6c0 ^ uRam000000018327b530;
  uRam000000018327b7e0 = 0x38c569ce;
  uVar2 = (~uRam000000018327b638 + 0xc73b14a9) *
          ((uRam000000018327bc90 ^ 0xbce74aeb) +
          (ulonglong)((uint)uRam000000018327bc90 & 0xbce74aeb) * 2);
  uVar2 = (uVar2 | uRam000000018327ba50) + (uVar2 & uRam000000018327ba50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327bbb0 =
       func_0x00018aeb9b80((uVar2 | 0x7bdc5e43) + (ulonglong)((uint)uVar2 & 0x7bdc5e43));
  uVar2 = uRam000000018327bbb0 - (uRam000000018327bbb0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam000000018327bbb0 ^ 0x38c569ce;
  uRam000000018327b5a8 = uRam000000018327b6c0 ^ uVar2 ^ 0x100007e76;
  uRam000000018327b8f0 = (uRam000000018327b8f0 ^ uVar2) + 0x100007e76 ^ 0xbcb79e8c0399f3e3;
  uRam000000018327b610 = (uRam000000018327b610 * 0x3da62468ebd8d4d5 ^ uRam000000018327b8f0) + uVar2;
  uRam000000018327b628 = uRam000000018327b610 ^ uRam000000018327b8f0;
  uRam000000018327b6a0 = 0x7e76;
  uVar2 = ((uRam000000018327b700 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018327b700 & 0x84222325) * 2) * 0x70a4322a;
  uVar2 = (uVar2 | uRam000000018327b970) + (uVar2 & uRam000000018327b970);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327bb08 =
       func_0x00018aeb9b80((uVar2 | 0xf4869385) + (ulonglong)((uint)uVar2 & 0xf4869385));
  uRam000000018327bb98 =
       (uRam000000018327bb98 ^ uRam000000018327bb08 & 0x7fffffffffffffff) - 0x70a4b0a0 ^
       0xc3fb454b56c6b5e8;
  uRam000000018327bb58 =
       (uRam000000018327bb58 * -0x4caa45d989414853 ^ uRam000000018327bb98) +
       (uRam000000018327bb08 & 0x7fffffffffffffff);
  uRam000000018327b748 = uRam000000018327bb58 ^ uRam000000018327bb98;
  uRam000000018327b7b8 = 0x8f5b4f60;
  uVar2 = func_0x00018aeb9b80(uRam000000018327bcb0 ^ 0xff1500b370ff79c7);
  uVar2 = uVar2 & 0xfffffffffff80000 ^ 0x70a4b0a0;
  uRam000000018327b508 = uRam000000018327b8c8 ^ uVar2 ^ 0x70a52f16;
  uRam000000018327b9f8 = (uRam000000018327b9f8 ^ uVar2) + 0x70a52f16 ^ 0xc412d3a4ba642531;
  uRam000000018327b698 = (uRam000000018327b698 * -0x2a9ce5e04bc95b63 ^ uRam000000018327b9f8) + uVar2
  ;
  uRam000000018327bcc0 = uRam000000018327b698 ^ uRam000000018327b9f8;
  uRam000000018327b9f0 = 0x70a52f16;
  uVar2 = (~uRam000000018327b5d0 + 0x56bc64d8) *
          ((uRam000000018327bae0 ^ 0x39dd9c98) +
          (ulonglong)((uint)uRam000000018327bae0 & 0x39dd9c98) * 2);
  uVar2 = (uVar2 | uRam000000018327b720) + (uVar2 & uRam000000018327b720);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327b9c0 =
       func_0x00018aeb9b80((uVar2 | 0x6f61f84f) + (ulonglong)((uint)uVar2 & 0x6f61f84f));
  uVar2 = uRam000000018327b9c0 ^ 0xbdffbfbd;
  uRam000000018327b988 = uRam000000018327b908 ^ uVar2 ^ 0x114bc2494;
  uRam000000018327b738 = (uRam000000018327b738 ^ uVar2) + 0x114bc2494 ^ 0x8c8f3d1889dfb123;
  uRam000000018327b6d0 = (uRam000000018327b6d0 * -0x6f0ce9f21db4bfe1 ^ uRam000000018327b738) + uVar2
  ;
  uRam000000018327ba88 = uRam000000018327b6d0 ^ uRam000000018327b738;
  uRam000000018327bb30 = 0x14bc2494;
  uVar2 = (~uRam000000018327b750 + 0x56bc64d8) *
          ((uRam000000018327b820 ^ 0x39dd9c98) +
          (ulonglong)((uint)uRam000000018327b820 & 0x39dd9c98) * 2);
  uVar2 = (uVar2 | uRam000000018327b838) + (uVar2 & uRam000000018327b838);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327bb60 =
       func_0x00018aeb9b80((uVar2 | 0x6f61f84f) + (ulonglong)((uint)uVar2 & 0x6f61f84f));
  uVar2 = (ulonglong)(~(uint)(uRam000000018327bb60 >> 0x1a) & 0xbdffbfbd);
  uRam000000018327b838 = (uRam000000018327b838 ^ uVar2) + 0xeb43db6a ^ 0xe7c4c0bf55d72804;
  uRam000000018327bb48 = (uRam000000018327bb48 * 0x166eba9df8c14229 ^ uRam000000018327b838) + uVar2;
  uRam000000018327b6c8 = uRam000000018327bb48 ^ uRam000000018327b838;
  uRam000000018327b940 = 0xeb43db6a;
  uRam000000018327bc18 = func_0x00018aeb9b80(uRam000000018327bbb0 ^ 0xff18006b4b001e3d);
  uVar2 = (uRam000000018327bc18 ^ 0x405fbd11c57bdbbb) * 0x26f68f89f206daa7 ^ 0x56bc64d7;
  uRam000000018327b990 = (uRam000000018327b990 ^ uVar2) + 0x14bc2495 ^ 0x6db680cebce5fee6;
  uRam000000018327b558 = (uRam000000018327b558 * -0x1c03e13a579ab2b ^ uRam000000018327b990) + uVar2;
  uRam000000018327bb40 = uRam000000018327b558 ^ uRam000000018327b990;
  uRam000000018327b740 = 0x14bc2495;
  uRam000000018327bb00 = func_0x00018aeb9b80(uRam000000018327b8f0 ^ 0x90ffba5d000813);
  uVar2 = (uRam000000018327bb00 ^ 0x261c692fc6633964) & 0x7fffffffffffffff;
  uRam000000018327b698 = uRam000000018327ba20 ^ uVar2 ^ 0x114bc2494;
  uRam000000018327b910 = (uRam000000018327b910 ^ uVar2) + 0x114bc2494 ^ 0xcdf1872ce8d40240;
  uRam000000018327b5f0 = (uRam000000018327b5f0 * -0x685dcfdfc0d4054b ^ uRam000000018327b910) + uVar2
  ;
  uRam000000018327b988 = uRam000000018327b5f0 ^ uRam000000018327b910;
  uRam000000018327bb08 = 0x14bc2494;
  uVar2 = (~uRam000000018327b9d8 + 0x100000000) *
          ((uRam000000018327b800 ^ 0x39dd9c98) +
          (ulonglong)((uint)uRam000000018327b800 & 0x39dd9c98) * 2);
  uVar2 = (uVar2 | uRam000000018327b8b0) + (uVar2 & uRam000000018327b8b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327bbb0 =
       func_0x00018aeb9b80((uVar2 | 0xc6226367) + (ulonglong)((uint)uVar2 & 0xc6226367));
  uRam000000018327b9a8 =
       (uRam000000018327b9a8 ^ uRam000000018327bbb0 ^ 0xbdffbfbd) + 0x42004042 ^ 0x8b831cd819aaccc4;
  uRam000000018327bcf0 =
       (uRam000000018327bcf0 * -0x38f35321b0787187 ^ uRam000000018327b9a8) +
       (uRam000000018327bbb0 ^ 0xbdffbfbd);
  uRam000000018327b578 = uRam000000018327bcf0 ^ uRam000000018327b9a8;
  uRam000000018327bb10 = 0x42004042;
  uRam000000018327b820 = func_0x00018aeb9b80(lRam000000018327b770 + 0x2cff7bcf0021ffU ^ 0x4f);
  uVar5 = uRam000000018327b820 * 0x78b162c131293f73;
  uVar2 = uVar5 >> 1 | uVar5;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar5;
  uRam000000018327bb18 = uRam000000018327b8e0 ^ uVar5 ^ 0x7e76;
  uRam000000018327bc30 = (uRam000000018327bc30 ^ uVar5) + 0x7e76 ^ 0x9484fe96cb9f492d;
  uRam000000018327bab8 = (uRam000000018327bab8 * -0x1d33ea72cdd9c5ff ^ uRam000000018327bc30) + uVar5
  ;
  uRam000000018327b8c0 = uRam000000018327bab8 ^ uRam000000018327bc30;
  uRam000000018327b8a0 = 0x7e76;
  uVar2 = (~uRam000000018327b698 + 0x94b2bab1) *
          ((uRam000000018327ba68 ^ 0x10909995) +
          (ulonglong)((uint)uRam000000018327ba68 & 0x10909995) * 2);
  uVar2 = (uVar2 | uRam000000018327b8e8) + (uVar2 & uRam000000018327b8e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018327b678 =
       func_0x00018aeb9b80((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam000000018327bc08 = uRam000000018327bc08 ^ uRam000000018327b678 ^ 0x153cfc6ee64d1e93;
  uRam000000018327b668 =
       (uRam000000018327b668 * 0xe80559949e4f1c7 ^ uRam000000018327bc08) + uRam000000018327b678;
  uRam000000018327b6e8 = uRam000000018327b668 ^ uRam000000018327bc08;
  uRam000000018327b538 = 0;
  uRam000000018327bbd8 = func_0x00018aeb9b80(uRam000000018327bb90 ^ 0xffb3007c50ffdd30);
  uVar2 = uRam000000018327bbd8 ^ 0x7e76;
  uRam000000018327bc38 = uRam000000018327b860 ^ uVar2 ^ 0x7e76;
  uRam000000018327b5e0 = (uRam000000018327b5e0 ^ uVar2) + 0x7e76 ^ 0x5ce70365a5d2c262;
  uRam000000018327ba80 = (uRam000000018327ba80 * -0x2428995512a445db ^ uRam000000018327b5e0) + uVar2
  ;
  uRam000000018327bcf0 = uRam000000018327ba80 ^ uRam000000018327b5e0;
  uRam000000018327bbf8 = 0x7e76;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1436a,0x32a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aeb5366 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819f2398 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fF; aTa (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18aeb9c10, runtime 6ffff2ac9c10) =====

void FUN_18aeb9c10(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018aeb9c4c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819f3ed0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fF; aTb (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18aebab00, runtime 6ffff2acab00) =====

void FUN_18aebab00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aebab7d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819f4410 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fF; aTc (IJ)I (handler @ image 18aebd5c0, runtime 6ffff2acd5c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aebd5c0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar5 = (~uRam000000018327bec8 + 0x8cae0d97b4799801) *
          ((uRam000000018327beb8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018327beb8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018327c1a0) + (uVar5 & uRam000000018327c1a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327bfe0 =
       func_0x00018aec8d10((uVar5 | 0x8cae0d97305bbb25) + (uVar5 & 0x8cae0d97305bbb25));
  uRam000000018327c310 =
       (uRam000000018327c310 ^ uRam000000018327bfe0) + 0x7351f2684b866800 ^ 0xbfd7c67b702816ee;
  uRam000000018327c180 =
       (uRam000000018327c180 * -0x1da9ac01676c110d ^ uRam000000018327c310) + uRam000000018327bfe0;
  uRam000000018327c3f8 = uRam000000018327c180 ^ uRam000000018327c310;
  uRam000000018327c258 = 0x7351f2684b866800;
  uVar5 = (uRam000000018327bff8 ^ _UNK_1819f7170) + uRam000000018327c4d8 + 0x84225cda;
  uVar9 = (uRam000000018327c4d8 ^ _UNK_1819f7178) + uRam000000018327bff8 + 0x8cae0d97b4799800;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327bff8 ^ _UNK_1819f7170;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c4d8 ^ _UNK_1819f7178;
  uRam000000018327bff0 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018327bff8 + 0x8cae0d97b4799800) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327c4d8 + 0x84225cda));
  uVar5 = uRam000000018327bff0 - (uRam000000018327bff0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam000000018327bff0;
  uRam000000018327bff8 = uRam000000018327c288 ^ uVar5 ^ 0x8cae0d97b47a17ff;
  uRam000000018327be40 = (uRam000000018327be40 ^ uVar5) + 0x8cae0d97b47a17ff ^ 0x5a9d44893369f5a8;
  uRam000000018327c1a0 = (uRam000000018327c1a0 * 0x64b489b5db015a15 ^ uRam000000018327be40) + uVar5;
  uRam000000018327bd98 = uRam000000018327c1a0 ^ uRam000000018327be40;
  uRam000000018327c160 = 0x8cae0d97b47a17ff;
  uRam000000018327bd08 = func_0x00018aec8d10(uRam000000018327c3c8 + 0x4b2ba4d5a6b231ee ^ 0xd9);
  uVar5 = uRam000000018327be70 << 0x3b | uRam000000018327be70 >> 5;
  uRam000000018327c0e8 = uRam000000018327c338 ^ uVar5 ^ 0x7fff;
  uRam000000018327c300 = (uRam000000018327c300 ^ uVar5) + 0x7fff ^ 0x80cd5ce81a76da8c;
  uRam000000018327c4a0 =
       (uRam000000018327c4a0 * 0x716404175e4eb86f ^ uRam000000018327c300) + uVar5 ^
       uRam000000018327c300;
  uRam000000018327c420 = 0x7fff;
  uVar5 = (~uRam000000018327c2f0 + 0x7df8a6a6e614e271) *
          ((uRam000000018327bd60 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018327bd60 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018327c198) + (uVar5 & uRam000000018327c198);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327bdc8 =
       func_0x00018aec8d10((uVar5 | 0x7df8a6a66236c155) + (uVar5 & 0x7df8a6a66236c155));
  uRam000000018327c4f8 =
       (uRam000000018327c4f8 ^ uRam000000018327bdc8 & 0xfffffffffffffe00) + 0x8207595919eb1d90 ^
       0x45f866bccfff6fa8;
  uRam000000018327c198 =
       (uRam000000018327c198 * 0x4333b4b5be4963f3 ^ uRam000000018327c4f8) +
       (uRam000000018327bdc8 & 0xfffffffffffffe00);
  uRam000000018327be68 = uRam000000018327c198 ^ uRam000000018327c4f8;
  uRam000000018327be30 = 0x8207595919eb1d90;
  uRam000000018327c040 = func_0x00018aec8d10(uRam000000018327c450 ^ 0x5d3b914bc94ddc28);
  uVar5 = ~uRam000000018327c040 & 0x7df8a6a6e615626f;
  uRam000000018327c190 = uRam000000018327c3e0 ^ uVar5 ^ 0x7fff;
  uRam000000018327c3e8 = (uRam000000018327c3e8 ^ uVar5) + 0x7fff ^ 0xb2cdb5ecd18e1a05;
  uRam000000018327c148 = (uRam000000018327c148 * 0x37da5340d279296d ^ uRam000000018327c3e8) + uVar5;
  uRam000000018327c340 = uRam000000018327c148 ^ uRam000000018327c3e8;
  uRam000000018327c458 = 0x7fff;
  uVar5 = (uRam000000018327bf18 ^ _UNK_1819f7180) + uRam000000018327c1b0 + 0x84222325;
  uVar9 = (uRam000000018327c1b0 ^ _UNK_1819f7188) + uRam000000018327bf18 + 0xda3bb98b480980;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327bf18 ^ _UNK_1819f7180;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c1b0 ^ _UNK_1819f7188;
  uRam000000018327c260 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018327bf18 + 0xda3bb98b480980) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327c1b0 + 0x84222325));
  uVar5 = uRam000000018327c260 << 0x28 | uRam000000018327c260 >> 0x18;
  uRam000000018327bd38 = (uRam000000018327bd38 ^ uVar5) + 0xff25c44674b7f680 ^ 0xca0ab34b8b58c32d;
  uRam000000018327bee0 = (uRam000000018327bee0 * 0x40d7ec4f21e79c8d ^ uRam000000018327bd38) + uVar5;
  uRam000000018327c268 = uRam000000018327bee0 ^ uRam000000018327bd38;
  uRam000000018327c238 = 0xff25c44674b7f680;
  uVar5 = (uRam000000018327c170 ^ _UNK_1819f7190) + uRam000000018327c148 + 0xda3bb90f6aaa5a;
  uVar9 = (uRam000000018327c148 ^ _UNK_1819f7198) + uRam000000018327c170 + 0xff25c44674b7f680;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327c170 ^ _UNK_1819f7190;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c148 ^ _UNK_1819f7198;
  uRam000000018327bd98 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018327c170 + 0xff25c44674b7f680) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327c148 + 0xda3bb90f6aaa5a));
  uVar5 = uRam000000018327bd98 & 0xffffffffffffffe0;
  uRam000000018327bf38 = uRam000000018327c4f8 ^ uVar5 ^ 0x7fff;
  uRam000000018327c1a8 = (uRam000000018327c1a8 ^ uVar5) + 0x7fff ^ 0xc5920ac3242e6e44;
  uRam000000018327c0e8 = (uRam000000018327c0e8 * -0x619b247886cd3f61 ^ uRam000000018327c1a8) + uVar5
  ;
  uRam000000018327bf20 = uRam000000018327c0e8 ^ uRam000000018327c1a8;
  uRam000000018327be30 = 0x7fff;
  uRam000000018327c378 = func_0x00018aec8d10(lRam000000018327c358 + 0x2db5bc58c2c2f29eU ^ 0x29);
  uVar5 = uRam000000018327c378 << 0x35 | uRam000000018327c378 >> 0xb & 0xffffffffffffe000;
  uRam000000018327c1e0 = uRam000000018327be70 ^ uVar5 ^ 0x7fe18ff1bbd99170;
  uRam000000018327c010 = (uRam000000018327c010 ^ uVar5) + 0x7fe18ff1bbd99170 ^ 0xc23f1a0298567eec;
  uRam000000018327c2c0 = (uRam000000018327c2c0 * 0x292f47379903f835 ^ uRam000000018327c010) + uVar5;
  uRam000000018327c068 = uRam000000018327c2c0 ^ uRam000000018327c010;
  uRam000000018327c1e8 = 0x7fe18ff1bbd99170;
  uVar5 = (~uRam000000018327c058 + 0x8806a223cc661409) *
          ((uRam000000018327bf20 ^ 0xf7daedcd6b515e4d) +
          (uRam000000018327bf20 & 0x77daedcd6b515e4d) * 2);
  uVar5 = (uVar5 | uRam000000018327c0b0) + (uVar5 & uRam000000018327c0b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327c000 =
       func_0x00018aec8d10((uVar5 | 0x7fdc4feea7374a45) + (uVar5 & 0x7fdc4feea7374a45));
  uRam000000018327bde0 =
       (uRam000000018327bde0 ^ uRam000000018327c370 ^ 0xf7daedcdef737d68) + 0x7fdc4fee23156960 ^
       0x7cad50589d24a6d9;
  uRam000000018327bf98 =
       (uRam000000018327bf98 * 0x2b4a70a2c775f25d ^ uRam000000018327bde0) +
       (uRam000000018327c370 ^ 0xf7daedcdef737d68);
  uRam000000018327c2c0 = uRam000000018327bf98 ^ uRam000000018327bde0;
  uRam000000018327bfb0 = 0x7fdc4fee23156960;
  uVar5 = (uRam000000018327bda8 ^ _UNK_1819f71a0) + uRam000000018327c1a0 + 0xf7daedcd6b515e4d;
  uVar9 = (uRam000000018327c1a0 ^ _UNK_1819f71a8) + uRam000000018327bda8 + 0x8806a223cc661408;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327bda8 ^ _UNK_1819f71a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c1a0 ^ _UNK_1819f71a8;
  uRam000000018327bf38 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018327bda8 + 0x8806a223cc661408) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327c1a0 + 0xf7daedcd6b515e4d));
  uVar5 = (uRam000000018327bf38 ^ 0xfefef777d68) & 0xfffffffffff ^ 0xf7daedcdef737d68;
  uRam000000018327bd80 = (uRam000000018327bd80 ^ uVar5) + 0x8002a001cc621408 ^ 0x1b629353bd5731e2;
  uRam000000018327c438 = (uRam000000018327c438 * 0x44c7b1930779761 ^ uRam000000018327bd80) + uVar5;
  uRam000000018327c4e0 = uRam000000018327c438 ^ uRam000000018327bd80;
  uRam000000018327bd88 = 0x8002a001cc621408;
  uRam000000018327c2b8 = func_0x00018aec8d10(lRam000000018327c0f0 + 0xffe30083e50021ffU ^ 0xdf);
  uRam000000018327c1f0 = (uRam000000018327c2b8 ^ 0x7fe18ff1bbd99170) * 0x623b3c4af9b6ba83;
  uRam000000018327bde0 = uRam000000018327bde0 ^ uRam000000018327c1f0 ^ 0xe56186ae91d4a0b7;
  uRam000000018327c158 =
       (uRam000000018327c158 * -0x2736762bf76470e9 ^ uRam000000018327bde0) + uRam000000018327c1f0;
  uRam000000018327be68 = uRam000000018327c158 ^ uRam000000018327bde0;
  uRam000000018327c350 = 0;
  uVar5 = (uRam000000018327c150 ^ _UNK_1819f71b0) + uRam000000018327c4e8 + 0xf7daedcd6b515e4d;
  uVar9 = (uRam000000018327c4e8 ^ _UNK_1819f71b8) + (uRam000000018327c150 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327c150 ^ _UNK_1819f71b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c4e8 ^ _UNK_1819f71b8;
  uRam000000018327c450 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018327c150 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327c4e8 + 0xf7daedcd6b515e4d));
  uVar5 = uRam000000018327c450 - (uRam000000018327c450 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam000000018327c450;
  uRam000000018327bea0 = (uRam000000018327bea0 ^ uVar5) + 0x8251232108c8297 ^ 0x291d09926f05fbe0;
  uRam000000018327bd38 = (uRam000000018327bd38 * -0x9c6c8d13589539d ^ uRam000000018327bea0) + uVar5;
  uRam000000018327c0e8 = uRam000000018327bd38 ^ uRam000000018327bea0;
  uRam000000018327bff8 = 0x8251232108c8297;
  uRam000000018327c1b0 = func_0x00018aec8d10(uRam000000018327bf98 ^ 0x34007cd6001da3);
  uVar5 = (uRam000000018327c1b0 & 0x7fffffffffffffff) -
          ((uRam000000018327c1b0 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018327c1b0 & 0x7fffffffffffffff;
  uRam000000018327c390 = uRam000000018327be20 ^ uVar5 ^ 0x7fff;
  uRam000000018327c3d0 = (uRam000000018327c3d0 ^ uVar5) + 0x7fff ^ 0x8a2000b350ddc1ad;
  uRam000000018327c3c0 = (uRam000000018327c3c0 * -0x36705da70ef6fe17 ^ uRam000000018327c3d0) + uVar5
  ;
  uRam000000018327bd80 = uRam000000018327c3c0 ^ uRam000000018327c3d0;
  uRam000000018327be78 = 0x7fff;
  uVar5 = (uRam000000018327bf80 ^ _UNK_1819f71c0) + uRam000000018327c1b8 + 0x7508ccc1e8605e05;
  uVar9 = (uRam000000018327c1b8 ^ _UNK_1819f71c8) + uRam000000018327bf80 + 0x7508ccc16c427d20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327bf80 ^ _UNK_1819f71c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c1b8 ^ _UNK_1819f71c8;
  uRam000000018327be88 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018327bf80 + 0x7508ccc16c427d20) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018327c1b8 + 0x7508ccc1e8605e05));
  uVar5 = (uRam000000018327be88 ^ 0x7508ccc16c427c00) & 0xfffffffffffffc00;
  uRam000000018327bed8 = uRam000000018327bed8 ^ uVar5 ^ 0xf5e812dea2d67fae;
  uRam000000018327c3e0 = (uRam000000018327c3e0 * -0x349d579d697b009b ^ uRam000000018327bed8) + uVar5
  ;
  uRam000000018327c490 = uRam000000018327c3e0 ^ uRam000000018327bed8;
  uRam000000018327c018 = 0;
  uVar5 = ((uRam000000018327c050 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018327c050 & 0x84225cda) * 2) * -uRam000000018327c1f8;
  uVar5 = (uVar5 | uRam000000018327c138) + (uVar5 & uRam000000018327c138);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327bf80 =
       func_0x00018aec8d10((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam000000018327bf80 << 0x1b | uRam000000018327bf80 >> 0x25;
  uVar9 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uVar5;
  uRam000000018327bf20 = uRam000000018327c3a8 ^ uVar5 ^ 0x7fff;
  uRam000000018327c280 = (uRam000000018327c280 ^ uVar5) + 0x7fff ^ 0x83b760ef48b3065b;
  uRam000000018327c100 = (uRam000000018327c100 * 0x2456ad951916e667 ^ uRam000000018327c280) + uVar5;
  uRam000000018327c120 = uRam000000018327c100 ^ uRam000000018327c280;
  param_4 = param_4 & 0x7fff;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = param_4 ^ 0x84222325;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = 0;
  uRam000000018327be88 = 0x7fff;
  auVar8 = pshufb(auVar7 ^ _UNK_1819f71d0,_UNK_1800170c0);
  uVar9 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar9 + lRam000000018327c328;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam000000018327c2e0 ^ uVar9;
  }
  uRam000000018327c208 = func_0x00018aec8d10(SUB161(auVar7 ^ _UNK_1819f71d0,5) ^ uVar5);
  uVar5 = ~(ulonglong)((uint)uRam000000018327c208 ^ (param_3 | param_4) ^ param_3) &
          (ulonglong)param_4;
  uVar4 = (ulonglong)(param_4 ^ param_3);
  uRam000000018327bea8 = (uRam000000018327bd28 ^ uVar5) + uVar4 ^ 0xdabd02cd8cf61ea1;
  uRam000000018327bd28 = (uRam000000018327bd28 * -0x673a475429242fed ^ uRam000000018327bea8) + uVar5
  ;
  uRam000000018327bea8 = uRam000000018327bd28 ^ uRam000000018327bea8;
  uRam000000018327bf48 = uVar4;
  uRam000000018327c138 = func_0x00018aec8d10(uRam000000018327c410 ^ 0xff79ff27a000cd96);
  uVar5 = uRam000000018327c138 ^ 0xecfc9f95;
  uVar5 = (uVar5 << 0x22 | uVar5 >> 0x1e) >> 0x15 | (uVar5 >> 0x1e) << 0x2b;
  uRam000000018327bd70 = (uRam000000018327bd70 ^ uVar5) + 0xecfc9f95 ^ 0xd2d2c5f7f0d5ec2f;
  uRam000000018327c320 = (uRam000000018327c320 * 0x1be07414089d47f1 ^ uRam000000018327bd70) + uVar5;
  uRam000000018327bf78 = uRam000000018327c320 ^ uRam000000018327bd70;
  uRam000000018327bfb8 = 0xecfc9f95;
  uVar5 = (~uRam000000018327bd28 + 0x25dcdd95) *
          ((uRam000000018327c188 ^ 0xe4e3052b) +
          (ulonglong)((uint)uRam000000018327c188 & 0xe4e3052b) * 2);
  uVar5 = (uVar5 | uRam000000018327c208) + (uVar5 & uRam000000018327c208);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327c1b0 =
       func_0x00018aec8d10((uVar5 | 0xc13fd8bf) + (ulonglong)((uint)uVar5 & 0xc13fd8bf));
  uVar5 = (ulonglong)(~(uint)uRam000000018327c1b0 & 0x60c1260e);
  uRam000000018327c198 = (uRam000000018327c198 ^ uVar5) + 0x451dfb9a ^ 0x593b07e2dad205f4;
  uRam000000018327c0b8 = (uRam000000018327c0b8 * 0x1dce0ee8618d7e63 ^ uRam000000018327c198) + uVar5;
  uRam000000018327bfd0 = uRam000000018327c0b8 ^ uRam000000018327c198;
  uRam000000018327bf80 = 0x451dfb9a;
  uVar5 = (uRam000000018327c2e8 ^ _UNK_1819f71e0) + uRam000000018327c318 + 0x84222325;
  uVar9 = (uRam000000018327c318 ^ _UNK_1819f71e8) + uRam000000018327c2e8 + 0x26374e2f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327c2e8 ^ _UNK_1819f71e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c318 ^ _UNK_1819f71e8;
  uRam000000018327c3c8 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018327c2e8 + 0x26374e2f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327c318 + 0x84222325));
  uVar5 = uRam000000018327c3c8 ^ 0x26374e2f;
  uVar9 = uVar5 >> 1 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar5;
  uRam000000018327c220 = (uRam000000018327c220 ^ uVar5) - 0x26374e2f ^ 0x263144a04d7bb141;
  uRam000000018327bdc8 = (uRam000000018327bdc8 * 0x3305bab9b2172ab ^ uRam000000018327c220) + uVar5;
  uRam000000018327c168 = uRam000000018327bdc8 ^ uRam000000018327c220;
  uRam000000018327be18 = 0xd9c8b1d1;
  uVar5 = (uRam000000018327c470 ^ _UNK_1819f71f0) + uRam000000018327c058 + 0x84227100;
  uVar9 = (uRam000000018327c058 ^ _UNK_1819f71f8) + uRam000000018327c470 + 0x26374e2f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327c470 ^ _UNK_1819f71f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c058 ^ _UNK_1819f71f8;
  uRam000000018327c428 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018327c470 + 0x26374e2f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327c058 + 0x84227100));
  uVar5 = (uRam000000018327c428 & 0xfffffffffff) >> 0x29 |
          ((uRam000000018327c428 ^ 0x26375e2f) << 0x14 | uRam000000018327c428 >> 0x2c) << 3;
  uRam000000018327c390 = uRam000000018327bff0 ^ uVar5 ^ 0x2637a054;
  uRam000000018327c1e0 = (uRam000000018327c1e0 ^ uVar5) + 0x2637a054 ^ 0x6c4a3f5621468ef7;
  uRam000000018327c350 = (uRam000000018327c350 * -0x6fe7d11492b2341f ^ uRam000000018327c1e0) + uVar5
  ;
  uRam000000018327c4b8 = uRam000000018327c350 ^ uRam000000018327c1e0;
  uRam000000018327c4c0 = 0x2637a054;
  uVar5 = (uRam000000018327c230 ^ _UNK_1819f7200) + uRam000000018327bed0 + 0xa2158371;
  uVar9 = (uRam000000018327bed0 ^ _UNK_1819f7208) + uRam000000018327c230 + 0xd9c8b1d1;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327c230 ^ _UNK_1819f7200;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327bed0 ^ _UNK_1819f7208;
  uRam000000018327c4d0 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018327c230 + 0xd9c8b1d1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327bed0 + 0xa2158371));
  uRam000000018327c0b8 = uRam000000018327c3d0 ^ uRam000000018327c4d0 ^ 0x100005225;
  uRam000000018327c2f8 =
       (uRam000000018327c2f8 ^ uRam000000018327c4d0) + 0x100005225 ^ 0xd38616ddd56e2a16;
  uRam000000018327bf90 =
       (uRam000000018327bf90 * 0x4283b48a8b442503 ^ uRam000000018327c2f8) + uRam000000018327c4d0;
  uRam000000018327bef8 = uRam000000018327bf90 ^ uRam000000018327c2f8;
  uRam000000018327bfc8 = uRam000000018327beb0 ^ 0x100005225;
  uRam000000018327c050 = 0x5225;
  uVar5 = (~uRam000000018327bd78 + 0xa000a0e5) *
          ((uRam000000018327c330 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018327c330 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018327c2f0) + (uVar5 & uRam000000018327c2f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327bf18 =
       func_0x00018aec8d10((uVar5 | 0x242283c1) + (ulonglong)((uint)uVar5 & 0x242283c1));
  uVar5 = uRam000000018327bf18 >> 1 | uRam000000018327bf18;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam000000018327bf18;
  uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar9;
  uVar5 = uVar9 >> 1 | uVar9;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar9;
  uRam000000018327c330 = (uRam000000018327c330 ^ uVar9) - 0xa000a0e4 ^ 0xe763dc7e8b4003ed;
  uRam000000018327c2b8 = (uRam000000018327c2b8 * 0x482ed4d980bdf451 ^ uRam000000018327c330) + uVar9;
  uRam000000018327c0a8 = uRam000000018327c2b8 ^ uRam000000018327c330;
  uRam000000018327bf78 = 0x5fff5f1c;
  uVar5 = (~uRam000000018327c1b8 + 0xa000a0e5) *
          ((uRam000000018327c468 ^ 0x84227100) +
          (ulonglong)((uint)uRam000000018327c468 & 0x84227100) * 2);
  uVar5 = (uVar5 | uRam000000018327bd38) + (uVar5 & uRam000000018327bd38);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327c1e8 =
       func_0x00018aec8d10((uVar5 | 0x2422d1e4) + (ulonglong)((uint)uVar5 & 0x2422d1e4));
  uVar5 = (uRam000000018327c1e8 ^ 0x5225) & 0x7fffffffffff;
  uRam000000018327c178 = uRam000000018327be40 ^ uVar5 ^ 0xa000f309;
  uRam000000018327bdc8 = (uRam000000018327bdc8 ^ uVar5) + 0xa000f309 ^ 0x91c9c44d485791af;
  uRam000000018327c2d0 = (uRam000000018327c2d0 * -0x2c32b832c4190c87 ^ uRam000000018327bdc8) + uVar5
  ;
  uRam000000018327c118 = uRam000000018327c2d0 ^ uRam000000018327bdc8;
  uRam000000018327bd90 = 0xa000f309;
  uVar5 = (~uRam000000018327c4e0 + 0x5fff5f1d) *
          ((uRam000000018327bfc8 ^ 0x2422d02c) +
          (ulonglong)((uint)uRam000000018327bfc8 & 0x2422d02c) * 2);
  uVar5 = (uVar5 | uRam000000018327c480) + (uVar5 & uRam000000018327c480);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327bde0 =
       func_0x00018aec8d10((uVar5 | 0x7bdd8f30) + (ulonglong)((uint)uVar5 & 0x7bdd8f30));
  uVar5 = uRam000000018327bde0 & 0x7fffffffffffffff;
  uRam000000018327bd70 = uRam000000018327c088 ^ uVar5 ^ 0x100005225;
  uRam000000018327c098 = (uRam000000018327c098 ^ uVar5) + 0x100005225 ^ 0xe40a74bb42d9c804;
  uRam000000018327c308 = (uRam000000018327c308 * -0x65c2bad0b85689e3 ^ uRam000000018327c098) + uVar5
  ;
  uRam000000018327bd38 = uRam000000018327c308 ^ uRam000000018327c098;
  uRam000000018327c388 = 0x5225;
  uRam000000018327c008 = func_0x00018aec8d10(uRam000000018327c028 ^ 0x4c0068d500b5af);
  uVar5 = uRam000000018327c008 - (uRam000000018327c008 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = ((uint)bVar1 + (uint)bVar1 ^ uRam000000018327c008) << 0x29 | uRam000000018327c008 >> 0x17;
  uRam000000018327c270 = (uRam000000018327c270 ^ uVar5) - 0xecf49fde ^ 0xd6117b6fe189f432;
  uRam000000018327bd30 = (uRam000000018327bd30 * 0xc9fc99bf39ec047 ^ uRam000000018327c270) + uVar5;
  uRam000000018327c318 = uRam000000018327bd30 ^ uRam000000018327c270;
  uRam000000018327bd38 = uRam000000018327bd60 ^ 0xffffffff130b6022;
  uRam000000018327c238 = 0x130b6022;
  uVar5 = (~uRam000000018327bd08 + 0xecf49fdf) *
          ((uRam000000018327c038 ^ 0x84227100) +
          (ulonglong)((uint)uRam000000018327c038 & 0x84227100) * 2);
  uVar5 = (uVar5 | uRam000000018327bda0) + (uVar5 & uRam000000018327bda0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327c4c0 =
       func_0x00018aec8d10((uVar5 | 0x68d6eede) + (ulonglong)((uint)uVar5 & 0x68d6eede));
  uVar5 = uRam000000018327c4c0 & 0xfffffffff0000000;
  uRam000000018327c3a0 = uRam000000018327c098 ^ uVar5 ^ 0xecf4f203;
  uRam000000018327c378 = (uRam000000018327c378 ^ uVar5) + 0xecf4f203 ^ 0x9dee04f2c3af5e01;
  uRam000000018327c0e8 = (uRam000000018327c0e8 * 0x4ad60a10e0371a3 ^ uRam000000018327c378) + uVar5;
  uRam000000018327bf70 = uRam000000018327c0e8 ^ uRam000000018327c378;
  uRam000000018327bda8 = 0xecf4f203;
  uVar5 = (uRam000000018327be28 ^ _UNK_1819f7210) + uRam000000018327c1c0 + 0x68d6d126;
  uVar9 = (uRam000000018327c1c0 ^ _UNK_1819f7218) + uRam000000018327be28 + 0x130b6022;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327be28 ^ _UNK_1819f7210;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c1c0 ^ _UNK_1819f7218;
  uRam000000018327c3f0 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018327be28 + 0x130b6022) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327c1c0 + 0x68d6d126));
  uVar5 = uRam000000018327c3f0 - (uRam000000018327c3f0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018327c3f0;
  uRam000000018327c470 = uRam000000018327be18 ^ uVar5 ^ 0x100005225;
  uRam000000018327c138 = (uRam000000018327c138 ^ uVar5) + 0x100005225 ^ 0x1304a74c97ac3bc;
  uRam000000018327bf18 = (uRam000000018327bf18 * 0x22d75bce164b4513 ^ uRam000000018327c138) + uVar5;
  uRam000000018327c288 = uRam000000018327bf18 ^ uRam000000018327c138;
  uRam000000018327c3e8 = 0x5225;
  uVar5 = (uRam000000018327bee0 ^ _UNK_1819f7220) + uRam000000018327c428 + 0x68debcb0;
  uVar9 = (uRam000000018327c428 ^ _UNK_1819f7228) + uRam000000018327bee0 + 0x451dfb9a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018327bee0 ^ _UNK_1819f7220;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018327c428 ^ _UNK_1819f7228;
  uRam000000018327c3c0 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018327bee0 + 0x451dfb9a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018327c428 + 0x68debcb0));
  uVar5 = uRam000000018327c3c0 - (uRam000000018327c3c0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam000000018327c3c0;
  uRam000000018327c230 = uRam000000018327bdc0 ^ uVar5 ^ 0x1321a9b2f;
  uRam000000018327be00 = (uRam000000018327be00 ^ uVar5) + 0x1321a9b2f ^ 0xb389d0f8dd9ef033;
  uRam000000018327c300 = (uRam000000018327c300 * 0x46b59f7da58e0a53 ^ uRam000000018327be00) + uVar5;
  uRam000000018327c360 = uRam000000018327c300 ^ uRam000000018327be00;
  uRam000000018327c2f8 = 0x321a9b2f;
  uRam000000018327c278 = func_0x00018aec8d10(uRam000000018327bff0 + 0xffbb00152a00c2ff ^ 0x9c);
  uRam000000018327c3b0 =
       (uRam000000018327c3b0 ^ uRam000000018327c278) + 0x441c9b90 ^ 0x6f8e1c65372888fc;
  uRam000000018327c280 =
       (uRam000000018327c280 * -0x7e106f0058a41153 ^ uRam000000018327c3b0) + uRam000000018327c278;
  uRam000000018327c498 = uRam000000018327c280 ^ uRam000000018327c3b0;
  uRam000000018327c3c0 = 0x441c9b90;
  uRam000000018327c448 = func_0x00018aec8d10(uRam000000018327c230 + 0x2fff64f60009ff ^ 0xef);
  uVar5 = uRam000000018327c448 & 0xfffffffffffffc00;
  uRam000000018327c3a8 = uRam000000018327c1d0 ^ uVar5 ^ 0x1321a9b2f;
  uRam000000018327bf68 = (uRam000000018327bf68 ^ uVar5) + 0x1321a9b2f ^ 0x1cd77e087d2a784d;
  uRam000000018327c2a8 = (uRam000000018327c2a8 * 0x19e39efdf2de84cd ^ uRam000000018327bf68) + uVar5;
  uRam000000018327bf08 = uRam000000018327c2a8 ^ uRam000000018327bf68;
  uRam000000018327bdf8 = 0x321a9b2f;
  uRam000000018327be28 = func_0x00018aec8d10(uRam000000018327c0c8 ^ 0xffdd007c25002185);
  uVar3 = ~(uint)uRam000000018327be28 & 0x321a9b2f;
  uVar5 = (ulonglong)uVar3 - (ulonglong)(~(uint)uRam000000018327be28 >> 1 & 0x11054515);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam000000018327bd20 =
       (ulonglong)
       ((uint)((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5) ^
       uVar3) ^ 0x321a9b2f;
  uRam000000018327c2f8 = uRam000000018327c2f8 ^ uRam000000018327bd20 ^ 0x45633817362a31dc;
  uRam000000018327c0e8 =
       (uRam000000018327c0e8 * 0x5795be38d0e5fba5 ^ uRam000000018327c2f8) + uRam000000018327bd20;
  uRam000000018327c1f8 = uRam000000018327c0e8 ^ uRam000000018327c2f8;
  uRam000000018327c290 = 0;
  uRam000000018327bd38 = func_0x00018aec8d10(uRam000000018327c350 ^ 0x10ff7bffffe12b);
  uVar5 = uRam000000018327bd38 * 0x31fe03c1621676d7;
  uRam000000018327c240 = uRam000000018327c4f8 ^ uVar5 ^ 0x5225;
  uRam000000018327bd80 = (uRam000000018327bd80 ^ uVar5) + 0x5225 ^ 0x65dd391bde5bd16a;
  uRam000000018327c0e0 = (uRam000000018327c0e0 * -0x5557797ec1577779 ^ uRam000000018327bd80) + uVar5
  ;
  uRam000000018327c450 = uRam000000018327c0e0 ^ uRam000000018327bd80;
  uRam000000018327c1e8 = 0x5225;
  uVar5 = (~uRam000000018327bfc8 + 0x100000000) *
          ((uRam000000018327c0d0 ^ 0x68debcb0) +
          (ulonglong)((uint)uRam000000018327c0d0 & 0x68debcb0) * 2);
  uVar5 = (uVar5 | uRam000000018327bd80) + (uVar5 & uRam000000018327bd80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327c308 =
       func_0x00018aec8d10((uVar5 | 0x9721434f) + (ulonglong)((uint)uVar5 & 0x9721434f));
  uVar9 = uRam000000018327c308 ^ 0xecfc9f941303606b;
  uVar5 = uVar9 >> 1 | uVar9;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar9;
  uRam000000018327be20 = (uRam000000018327be20 ^ uVar9) + 0x1303606a ^ 0xbf98641dab362179;
  uRam000000018327be80 = (uRam000000018327be80 * 0x11703a722130e485 ^ uRam000000018327be20) + uVar9;
  uRam000000018327c2b8 = uRam000000018327be80 ^ uRam000000018327be20;
  uRam000000018327c000 = 0x1303606a;
  uRam000000018327bf78 = func_0x00018aec8d10(uRam000000018327c208 + 0x3c006739ff2aff ^ 0x2a);
  uRam000000018327c2b8 =
       uRam000000018327c2b8 ^ ~uRam000000018327bf78 & 0xecfc9f95 ^ 0x5012617e086391e4;
  uRam000000018327c390 =
       (uRam000000018327c390 * 0x47bcc2f00b3893f9 ^ uRam000000018327c2b8) +
       (~uRam000000018327bf78 & 0xecfc9f95);
  uRam000000018327c090 = uRam000000018327c390 ^ uRam000000018327c2b8;
  uRam000000018327c4e0 = 0;
  uVar5 = ((uRam000000018327bd40 ^ 0x84227100) +
          (ulonglong)((uint)uRam000000018327bd40 & 0x84227100) * 2) * -uRam000000018327bd60;
  uVar5 = (uVar5 | uRam000000018327c1e8) + (uVar5 & uRam000000018327c1e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327bf28 =
       func_0x00018aec8d10((uVar5 | 0x84227100) + (ulonglong)((uint)uVar5 & 0x84227100));
  uVar5 = uRam000000018327bf28 - (uRam000000018327bf28 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam000000018327bf28;
  uRam000000018327c108 = uRam000000018327bd78 ^ uVar5 ^ 0x5225;
  uRam000000018327bdf8 = (uRam000000018327bdf8 ^ uVar5) + 0x5225 ^ 0xf0382d0c264b7327;
  uRam000000018327bf70 = (uRam000000018327bf70 * 0xaac76dd8a779939 ^ uRam000000018327bdf8) + uVar5;
  uRam000000018327bd30 = uRam000000018327bf70 ^ uRam000000018327bdf8;
  uRam000000018327c498 = 0x5225;
  uVar5 = (~uRam000000018327c150 + 0x88cc9616) *
          ((uRam000000018327c378 ^ 0xceeb530) +
          (ulonglong)((uint)uRam000000018327c378 & 0xceeb530) * 2);
  uVar5 = (uVar5 | uRam000000018327bda0) + (uVar5 & uRam000000018327bda0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018327bea0 =
       func_0x00018aec8d10((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar9 = uRam000000018327bea0 ^ 0x88cc9615;
  uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar9;
  uVar5 = uVar9 << 0x39 | uVar9 >> 7;
  uVar9 = uVar5 >> 1 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5;
  uRam000000018327bd80 = uRam000000018327bd80 ^ uVar5 ^ 0x3b7065937c0f399d;
  uRam000000018327bf00 = (uRam000000018327bf00 * 0x3b83c326d8cb1ff3 ^ uRam000000018327bd80) + uVar5;
  uRam000000018327c010 = uRam000000018327bf00 ^ uRam000000018327bd80;
  uRam000000018327c1e8 = 0;
  uVar5 = uVar4 ^ 0x84222325 ^ uRam000000018327be58;
  lVar6 = (uVar4 ^ 0x84222325) + uRam000000018327bea0;
  uVar9 = uVar5 + lVar6;
  uVar10 = (uRam000000018327bea0 ^ 0x5225) + uRam000000018327be58 + 0x5225;
  uVar5 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar5;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018327bea0 ^ 0x5225;
  uRam000000018327c238 =
       func_0x00018aec8d10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018327be58 + 0x5225) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar5 = (uVar4 | 0x5225) ^ uRam000000018327c238;
  uRam000000018327c250 = uVar4 ^ 0x5225;
  uRam000000018327bd70 = (uRam000000018327bd70 ^ uVar5) + uRam000000018327c250 ^ 0xe4cc472acdb4afca;
  uRam000000018327be78 = (uRam000000018327be78 * 0x2cb67d28e3d43977 ^ uRam000000018327bd70) + uVar5;
  uRam000000018327bf10 = uRam000000018327be78 ^ uRam000000018327bd70;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1436a,0x32a);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aebfdae did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819f5310 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fF; aTd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ae64780, runtime 6ffff2a74780) =====

void FUN_18ae64780(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ae647cb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819e74f0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fF; aTe (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ae65790, runtime 6ffff2a75790) =====

void FUN_18ae65790(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ae65819 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819e7ab0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



