// ===== Lsixtwo/fI; _f77c9f3042371eaf0e4288a4283006be ()V (handler @ image 18aca9670, runtime 6ffff28b9670) =====

void FUN_18aca9670(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aca9758 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181986fe8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fI; aUB (Lsixtwo/gH$th;)V (handler @ image 18ac92720, runtime 6ffff28a2720) =====

void FUN_18ac92720(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x146b4,0x32f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ac9281c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18197f8f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fI; aUC (Lsixtwo/gA;)V (handler @ image 18aca1410, runtime 6ffff28b1410) =====

void FUN_18aca1410(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x146b4,0x32f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aca14d4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181984580 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fI; aUD (Lnet/minecraft/class_1676;)Z (handler @ image 18acc5540, runtime 6ffff28d5540) =====

void FUN_18acc5540(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x146b4,0x32f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018acc560d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181989aa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fI; aUE ()V (handler @ image 18acd3d30, runtime 6ffff28e3d30) =====

void FUN_18acd3d30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x146b4,0x32f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018acd3df1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18198ea90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fI; aUF (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18acd8880, runtime 6ffff28e8880) =====

undefined8 FUN_18acd8880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fI; aUG ([B)Ljava/lang/String; (handler @ image 18acd8910, runtime 6ffff28e8910) =====

void FUN_18acd8910(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018acd89b3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819903a0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fI; aUH (IJ)Ljava/lang/String; (handler @ image 18ad03190, runtime 6ffff2913190) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad03190(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar5 = (~uRam0000000183272640 + 0xad4fc31695ae17a4) *
          ((uRam0000000183272be8 ^ 0x8d6f18558e81ff30) +
          (uRam0000000183272be8 & 0xd6f18558e81ff30) * 2);
  uVar5 = (uVar5 | uRam00000001832725e8) + (uVar5 & uRam00000001832725e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272c20 =
       func_0x00018ad0a250((uVar5 | 0x2020db431b2fe893) + (uVar5 & 0x2020db431b2fe893));
  uRam0000000183272c48 =
       (uRam0000000183272c48 ^ uRam0000000183272830) + 0xad6fdb579fafdfb7 ^ 0xe06dec564ca03d60;
  uRam0000000183272808 =
       (uRam0000000183272808 * 0x7d37418f39e283b5 ^ uRam0000000183272c48) + uRam0000000183272830;
  uRam0000000183272c30 = uRam0000000183272808 ^ uRam0000000183272c48;
  uRam00000001832728c8 = 0xad6fdb579fafdfb7;
  uRam0000000183272620 = func_0x00018ad0a250(uRam0000000183272b80 + 0x9f8e12f72af799b ^ 0x14);
  uRam0000000183272ae8 =
       (uRam0000000183272ae8 ^ uRam0000000183272620 ^ 0xac617136d4a424b2) + 0x539e8ec92b5bdb4e ^
       0x1892021e5d40c9f7;
  uRam0000000183272830 =
       (uRam0000000183272830 * 0x1c8b0baf9b082327 ^ uRam0000000183272ae8) +
       (uRam0000000183272620 ^ 0xac617136d4a424b2);
  uRam00000001832725e8 = uRam0000000183272830 ^ uRam0000000183272ae8;
  uRam0000000183272990 = 0x539e8ec92b5bdb4e;
  uVar5 = (uRam0000000183272ab0 ^ _UNK_1819978c0) + uRam0000000183272cc0 + 0x84225cda;
  uVar10 = (uRam0000000183272cc0 ^ _UNK_1819978c8) + uRam0000000183272ab0 + 0xac617136d4a424b2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272ab0 ^ _UNK_1819978c0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272cc0 ^ _UNK_1819978c8;
  uRam00000001832729e8 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183272ab0 + 0xac617136d4a424b2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272cc0 + 0x84225cda));
  uVar5 = uRam00000001832729e8 << 0x1c | (uRam00000001832729e8 & 0x7fffffffffffffff) >> 0x24;
  uRam0000000183272780 = uRam0000000183272ab8 ^ uVar5 ^ 0xac617136d4a4a4b1;
  uRam0000000183272700 = (uRam0000000183272700 ^ uVar5) + 0xac617136d4a4a4b1 ^ 0xce685822cd90c35c;
  uRam00000001832726e8 = (uRam00000001832726e8 * -0x77487e4935174215 ^ uRam0000000183272700) + uVar5
  ;
  uRam0000000183272aa0 = uRam00000001832726e8 ^ uRam0000000183272700;
  uRam0000000183272b00 = uRam0000000183272890 ^ 0xac617136d4a4a4b1;
  uRam0000000183272ca8 = 0xac617136d4a4a4b1;
  uVar5 = (uRam00000001832729a8 ^ _UNK_1819978d0) + uRam0000000183272af0 + 0xac61713650868794;
  uVar10 = (uRam0000000183272af0 ^ _UNK_1819978d8) + uRam00000001832729a8 + 0x539e8ec92b5bdb4e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832729a8 ^ _UNK_1819978d0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272af0 ^ _UNK_1819978d8;
  uRam00000001832726f8 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001832729a8 + 0x539e8ec92b5bdb4e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183272af0 + 0xac61713650868794));
  uVar5 = uRam00000001832726f8 & 0xac617136d4a4a4b1;
  uRam0000000183272a40 = uRam00000001832727a8 ^ uVar5 ^ 0x7fff;
  uRam0000000183272aa8 = (uRam0000000183272aa8 ^ uVar5) + 0x7fff ^ 0x84dfff9ca7951b47;
  uRam00000001832728e0 = (uRam00000001832728e0 * 0x2a9e595f7a9fac89 ^ uRam0000000183272aa8) + uVar5;
  uRam0000000183272c88 = uRam00000001832728e0 ^ uRam0000000183272aa8;
  uRam00000001832726d8 = 0x7fff;
  uVar5 = (~uRam0000000183272948 + 0x2f775909a631f735) *
          ((uRam00000001832726c0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832726c0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001832727b8) + (uVar5 & uRam00000001832727b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272668 =
       func_0x00018ad0a250((uVar5 | 0x2f7759092213d411) + (uVar5 & 0x2f7759092213d411));
  uRam0000000183272ab8 =
       (uRam0000000183272ab8 ^ uRam0000000183272668) + 0xd088a6f659ce08cc ^ 0xcbd62d1a10db1732;
  uRam0000000183272780 =
       (uRam0000000183272780 * -0xe4923382c9bb5a3 ^ uRam0000000183272ab8) + uRam0000000183272668;
  uRam0000000183272a40 = uRam0000000183272780 ^ uRam0000000183272ab8;
  uRam0000000183272af8 = -0x2f775909a631f734;
  uVar5 = (uRam0000000183272660 ^ _UNK_1819978e0) + uRam00000001832729c0 + 0x84225cda;
  uVar10 = (uRam00000001832729c0 ^ _UNK_1819978e8) + uRam0000000183272660 + 0x2f775909a631f734;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272660 ^ _UNK_1819978e0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001832729c0 ^ _UNK_1819978e8;
  uRam0000000183272578 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183272660 + 0x2f775909a631f734) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832729c0 + 0x84225cda));
  uVar5 = uRam0000000183272578 & 0x7fffffffffffffff;
  uRam0000000183272818 = uRam0000000183272a80 ^ uVar5 ^ 0x2f775909a6327733;
  uRam0000000183272748 = (uRam0000000183272748 ^ uVar5) + 0x2f775909a6327733 ^ 0xe1ab6439d6a49236;
  uRam0000000183272608 = (uRam0000000183272608 * -0x2553409444ed4d3d ^ uRam0000000183272748) + uVar5
  ;
  uRam0000000183272cf0 = uRam0000000183272608 ^ uRam0000000183272748;
  uRam00000001832729f8 = 0x2f775909a6327733;
  uVar5 = (uRam0000000183272bd0 ^ _UNK_1819978f0) + uRam00000001832727c0 + 0x2f77590922105416;
  uVar10 = (uRam00000001832727c0 ^ _UNK_1819978f8) + uRam0000000183272bd0 + 0xd088a6f659ce08cc;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272bd0 ^ _UNK_1819978f0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001832727c0 ^ _UNK_1819978f8;
  uRam0000000183272570 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183272bd0 + 0xd088a6f659ce08cc) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832727c0 + 0x2f77590922105416));
  uVar5 = (uRam0000000183272570 & 0x7fffffffff) * 0x10000;
  uRam0000000183272cc0 = uRam0000000183272538 ^ uVar5 ^ 0x7fff;
  uRam00000001832725e0 = (uRam0000000183272740 ^ uVar5) + 0x7fff ^ 0x7b6fbfa307f9f2db;
  uRam0000000183272868 = (uRam0000000183272868 * 0x680372882873d25f ^ uRam00000001832725e0) + uVar5;
  uRam00000001832725e0 = uRam0000000183272868 ^ uRam00000001832725e0;
  uRam0000000183272740 = 0x7fff;
  uRam0000000183272c00 = func_0x00018ad0a250(uRam00000001832729f0 ^ 0x39c8d3cd5fa1a730);
  uVar5 = ((uRam0000000183272c00 ^ 0xb1f8970340000000) & 0xffffffffe0000000) << 0x1f |
          (uRam0000000183272c00 ^ 0xb1f8970340000000) >> 0x21;
  uRam0000000183272748 = uRam0000000183272bc0 ^ uVar5 ^ 0x9eeca1ca719c1478;
  uRam0000000183272930 = (uRam0000000183272930 ^ uVar5) + 0x9eeca1ca719c1478 ^ 0xfb8b8d6296caa7fa;
  uRam0000000183272960 = (uRam0000000183272960 * -0x229015ac5f09b72b ^ uRam0000000183272930) + uVar5
  ;
  uRam0000000183272a68 = uRam0000000183272960 ^ uRam0000000183272930;
  uRam0000000183272520 = uRam0000000183272698 ^ 0x9eeca1ca719c1478;
  uRam0000000183272588 = 0x9eeca1ca719c1478;
  uVar5 = (~uRam0000000183272c98 + 0x61135e358e646b88) *
          ((uRam0000000183272860 ^ 0x9eeca1caf5be375d) +
          (uRam0000000183272860 & 0x1eeca1caf5be375d) * 2);
  uVar5 = (uVar5 | uRam0000000183272700) + (uVar5 & uRam0000000183272700);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832729a0 =
       func_0x00018ad0a250((uVar5 | 0xffffffff7bda5cda) + (uVar5 & 0xffffffff7bda5cda));
  uVar5 = uRam00000001832729a0 >> 1 | uRam00000001832729a0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001832729a0) & 0x7fffffffffffffff;
  uRam00000001832726c8 = uRam0000000183272740 ^ uVar5 ^ 0x7fff;
  uRam00000001832725c0 = (uRam00000001832725c0 ^ uVar5) + 0x7fff ^ 0x33ff1ea5d4580c85;
  uRam0000000183272670 =
       (uRam0000000183272670 * 0xdaa36bc5a8f8af3 ^ uRam00000001832725c0) + uVar5 ^
       uRam00000001832725c0;
  uRam0000000183272880 = 0x7fff;
  uVar5 = (~uRam0000000183272a48 + 0x2699115714407dd2) *
          ((uRam0000000183272870 ^ 0xad6fdb571b8dfc92) +
          (uRam0000000183272870 & 0x2d6fdb571b8dfc92) * 2);
  uVar5 = (uVar5 | uRam0000000183272a10) + (uVar5 & uRam0000000183272a10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272748 =
       func_0x00018ad0a250((uVar5 | 0x8bf6ca000fcd8143) + (uVar5 & 0x8bf6ca000fcd8143));
  uVar5 = ~uRam0000000183272748 & 0xfdb579f800000;
  uRam00000001832726d8 = uRam00000001832725d8 ^ uVar5 ^ 0xd408ecaeb3f05d88;
  uRam0000000183272770 = (uRam0000000183272770 ^ uVar5) + 0xd408ecaeb3f05d88 ^ 0xc1f7cf64c07fbbae;
  uRam0000000183272cc8 = (uRam0000000183272cc8 * -0x1a3a0c8da25670d5 ^ uRam0000000183272770) + uVar5
  ;
  uRam00000001832729c8 = uRam0000000183272cc8 ^ uRam0000000183272770;
  uRam0000000183272788 = 0xd408ecaeb3f05d88;
  uRam0000000183272668 = func_0x00018ad0a250(uRam0000000183272af0 + 0x7fcdfb3ecacc76 ^ 0x4b);
  uVar10 = uRam0000000183272668 ^ 0xafffdb579feffff7;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
           ^ uVar10;
  uRam00000001832726a0 = (uRam00000001832726a0 ^ uVar10) + 0x2409115714005d91 ^ 0xed2ac914cc6dcb31;
  uRam0000000183272570 =
       (uRam0000000183272570 * -0x5222b8664cb5fd79 ^ uRam00000001832726a0) + uVar10;
  uRam0000000183272c98 = uRam0000000183272570 ^ uRam00000001832726a0;
  uRam00000001832727a8 = 0x2409115714005d91;
  uVar5 = (~uRam0000000183272770 + 0x481222ae2800bb23) *
          ((uRam0000000183272a60 ^ 0x8bf6ca000fcd8143) +
          (uRam0000000183272a60 & 0xbf6ca000fcd8143) * 2);
  uVar5 = (uVar5 | uRam0000000183272c20) + (uVar5 & uRam0000000183272c20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272bb0 =
       func_0x00018ad0a250((uVar5 | 0xc3e4e8ae27cd3a61) + (uVar5 & 0xc3e4e8ae27cd3a61));
  uVar5 = uRam0000000183272ac8 << 9 | uRam0000000183272ac8 >> 0x37;
  uVar10 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uVar5;
  uRam00000001832729e0 = uRam0000000183272b88 ^ uVar5 ^ 0xd408ecaeb3f05d88;
  uRam0000000183272c48 = (uRam0000000183272c48 ^ uVar5) + 0xd408ecaeb3f05d88 ^ 0x8f79d78d274714f1;
  uRam00000001832726a8 = (uRam00000001832726a8 * 0x31d6c8407b5ceed ^ uRam0000000183272c48) + uVar5;
  uRam0000000183272540 = uRam00000001832726a8 ^ uRam0000000183272c48;
  uRam0000000183272ad0 = 0xd408ecaeb3f05d88;
  uRam0000000183272a50 = func_0x00018ad0a250(uRam0000000183272760 ^ 0xffe0ff8422ffddc3);
  uRam0000000183272a08 =
       (uRam0000000183272a50 ^ 0xd408ecaeb3f05d88) << 0x15 |
       (uRam0000000183272a50 ^ 0xd408ecaeb3f05d88) >> 0x2b;
  uRam0000000183272b10 = uRam0000000183272b10 ^ uRam0000000183272a08 ^ 0x4477d20f29a624c;
  uRam00000001832725e0 =
       (uRam00000001832725e0 * 0x74d085c50999f953 ^ uRam0000000183272b10) + uRam0000000183272a08;
  uRam00000001832729d8 = uRam00000001832725e0 ^ uRam0000000183272b10;
  uRam00000001832726b8 = 0;
  uVar5 = (uRam0000000183272c48 ^ 0x84225cda) + uRam0000000183272a40 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272c48 ^ 0x84225cda;
  uVar10 = ((uRam0000000183272a40 + uRam0000000183272c48) * 0x2000 |
           uRam0000000183272a40 + uRam0000000183272c48 >> 0x33) ^ uRam0000000183272a40;
  uRam0000000183272698 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - uRam0000000183272c48 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272a40 + 0x84225cda));
  uVar5 = uRam0000000183272698 & 0x7fffffffffffffff;
  uRam00000001832728c0 = uRam0000000183272c78 ^ uVar5 ^ 0x7fff;
  uRam00000001832728f8 = (uRam00000001832728f8 ^ uVar5) + 0x7fff ^ 0x3574f90ce75bb75f;
  uRam0000000183272a40 = (uRam0000000183272a40 * -0x3c7d9dfade290dbf ^ uRam00000001832728f8) + uVar5
  ;
  uRam0000000183272a98 = uRam0000000183272a40 ^ uRam00000001832728f8;
  uRam0000000183272718 = 0x7fff;
  uVar5 = (uRam0000000183272928 ^ _UNK_181997900) + uRam0000000183272740 + 0xad6fdb571b8dfc92;
  uVar10 = (uRam0000000183272740 ^ _UNK_181997908) + (uRam0000000183272928 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272928 ^ _UNK_181997900;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272740 ^ _UNK_181997908;
  uRam0000000183272708 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272928 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183272740 + 0xad6fdb571b8dfc92));
  uVar5 = uRam0000000183272708 << 0x1c | uRam0000000183272708 >> 0x24;
  uRam0000000183272558 = (uRam0000000183272558 ^ uVar5) + 0x529024a860502048 ^ 0xd37cee3e106e42d6;
  uRam0000000183272b40 = (uRam0000000183272b40 * -0x34bc19093d142fa3 ^ uRam0000000183272558) + uVar5
  ;
  uRam0000000183272b58 = uRam0000000183272b40 ^ uRam0000000183272558;
  uRam00000001832725e0 = 0x529024a860502048;
  uRam0000000183272c38 = func_0x00018ad0a250(uRam00000001832726c8 + 0xffbc008345ffe1ff ^ 0xc2);
  uVar5 = (uRam0000000183272c38 << 0x1a | uRam0000000183272c38 >> 0x26) << 0x1c |
          (uRam0000000183272c38 & 0x3fffffffff) >> 10;
  uRam0000000183272ae0 = uRam0000000183272968 ^ uVar5 ^ 0x7fff;
  uRam0000000183272a78 = (uRam0000000183272a78 ^ uVar5) + 0x7fff ^ 0x186510a5d2e3bb94;
  uRam0000000183272ac0 = (uRam0000000183272ac0 * 0x58a22e3e64447efb ^ uRam0000000183272a78) + uVar5;
  uRam0000000183272640 = uRam0000000183272ac0 ^ uRam0000000183272a78;
  uRam0000000183272a70 = 0x7fff;
  uVar5 = (uRam00000001832729e8 ^ _UNK_181997910) + uRam00000001832727a8 + 0x8d6f18558e81ff30;
  uVar10 = (uRam00000001832727a8 ^ _UNK_181997918) + uRam00000001832729e8 + 0x8d6f18550aa3dc15;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832729e8 ^ _UNK_181997910;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001832727a8 ^ _UNK_181997918;
  uRam0000000183272770 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001832729e8 + 0x8d6f18550aa3dc15) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832727a8 + 0x8d6f18558e81ff30));
  uRam0000000183272b00 = uRam0000000183272b00 ^ uRam0000000183272770 ^ 0xfa1d3c7eb1203909;
  uRam0000000183272780 =
       (uRam0000000183272780 * 0x570eb5d2d1598567 ^ uRam0000000183272b00) + uRam0000000183272770;
  uRam0000000183272a88 = uRam0000000183272780 ^ uRam0000000183272b00;
  auVar8._8_8_ = _UNK_18019c088;
  auVar8._0_8_ = param_4 ^ 0x84222325;
  auVar9 = pshufb(auVar8 ^ _UNK_181997920,_UNK_1800170c0);
  uRam0000000183272c20 = 0;
  uVar10 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar10 + lRam0000000183272958;
  if (auVar9._4_4_ < 0) {
    uVar5 = uRam00000001832725c8 ^ uVar10;
  }
  uRam0000000183272b68 = func_0x00018ad0a250(SUB161(auVar8 ^ _UNK_181997920,5) ^ uVar5);
  uVar3 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar3;
  uRam0000000183272960 =
       (uRam0000000183272960 ^ param_4 ^ uRam0000000183272b68) + uVar10 ^ 0xca58eeca8c7f544b;
  uRam0000000183272a20 =
       (uRam0000000183272a20 * -0x1c4978be760b2c0f ^ uRam0000000183272960) +
       (param_4 ^ uRam0000000183272b68);
  uRam0000000183272750 = uRam0000000183272a20 ^ uRam0000000183272960;
  uVar4 = (ulonglong)param_3;
  uVar6 = uVar10 ^ 0x84222325;
  uVar5 = ((uRam0000000183272740 ^ uVar6) +
          (ulonglong)((uint)uRam0000000183272740 & (uint)uVar6) * 2) *
          (uVar4 - uRam0000000183272990);
  uVar5 = (uVar5 | uRam0000000183272aa0) + (uVar5 & uRam0000000183272aa0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272c70 = uVar10;
  uRam00000001832725c0 =
       func_0x00018ad0a250((uVar6 ^ uVar4 | uVar5) +
                           (ulonglong)((uint)(uVar6 ^ uVar4) & (uint)uVar5));
  uVar6 = (uVar10 + uVar4) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183272760 =
       (uRam0000000183272760 ^ uVar10 ^ uRam00000001832725c0) + uVar6 ^ 0x34ecda38f6e2f6d4;
  uRam00000001832728f0 =
       (uRam00000001832728f0 * 0x37e2d6576e903ead ^ uRam0000000183272760) +
       (uVar10 ^ uRam00000001832725c0);
  uRam00000001832727c8 = uRam00000001832728f0 ^ uRam0000000183272760;
  uVar4 = uVar6 & 0xffffffff;
  uVar5 = (uRam0000000183272bc8 ^ _UNK_181997930) + uRam0000000183272b88 + 0xaed2b07f;
  uVar10 = (uRam0000000183272b88 ^ _UNK_181997938) + uRam0000000183272bc8 + 0xa8fd788;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272bc8 ^ _UNK_181997930;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272b88 ^ _UNK_181997938;
  uRam0000000183272648 = uVar4;
  uRam00000001832726f0 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272bc8 + 0xa8fd788) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272b88 + 0xaed2b07f));
  uVar5 = (uRam00000001832726f0 << 0x24 | uRam00000001832726f0 >> 0x1c) ^ 0x2af0935a;
  uRam0000000183272848 = (uRam0000000183272848 ^ uVar5) + 0x2affd7da ^ 0x778f5b479cff7663;
  uRam0000000183272af8 = (uRam0000000183272af8 * 0x4ada0aa538121d53 ^ uRam0000000183272848) + uVar5;
  uRam00000001832728d8 = uRam0000000183272af8 ^ uRam0000000183272848;
  uRam0000000183272660 = 0x2affd7da;
  uVar5 = (uRam0000000183272a38 ^ _UNK_181997940) + uRam0000000183272580 + 0xcb970e6;
  uVar10 = (uRam0000000183272580 ^ _UNK_181997948) + uRam0000000183272a38 + 0x63c5c6ad;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272a38 ^ _UNK_181997940;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272580 ^ _UNK_181997948;
  uRam0000000183272780 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272a38 + 0x63c5c6ad) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272580 + 0xcb970e6));
  uVar5 = uRam0000000183272780 & 0xfffffffffff00000 ^ 0x889b53c3;
  uRam0000000183272c80 = (uRam0000000183272c80 ^ uVar5) + 0xeb5e956e ^ 0xadf27f11c7a43d6d;
  uRam0000000183272590 = (uRam0000000183272590 * 0xfaf5f2049d02377 ^ uRam0000000183272c80) + uVar5;
  uRam0000000183272a50 = uRam0000000183272590 ^ uRam0000000183272c80;
  uRam00000001832725a8 = 0xeb5e956e;
  uVar5 = (~uRam00000001832727b8 + 0x30181f09) *
          ((uRam00000001832725e0 ^ 0x84221c82) +
          (ulonglong)((uint)uRam00000001832725e0 & 0x84221c82) * 2);
  uVar5 = (uVar5 | uRam0000000183272780) + (uVar5 & uRam0000000183272780);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272cf0 =
       func_0x00018ad0a250((uVar5 | 0xb43a038a) + (ulonglong)((uint)uVar5 & 0xb43a038a));
  uRam0000000183272898 = uRam0000000183272570 ^ 0x30186108;
  uRam0000000183272848 = (uRam0000000183272848 ^ 0x3fa7) + 0x30185eaf ^ 0xd3400343694598a9;
  uRam00000001832727b0 = (uRam00000001832727b0 * 0x2d25e4c1ee3b50d ^ uRam0000000183272848) + 0x3fa7;
  uRam00000001832729a8 = uRam00000001832727b0 ^ uRam0000000183272848;
  uRam0000000183272af8 = 0x30185eaf;
  uVar5 = (uRam0000000183272cd0 ^ _UNK_181997950) + uRam0000000183272be0 + 0xb43a7d8a;
  uVar10 = (uRam0000000183272be0 ^ _UNK_181997958) + uRam0000000183272cd0 + 0xcfe7e0f8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272cd0 ^ _UNK_181997950;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272be0 ^ _UNK_181997958;
  uRam0000000183272680 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272cd0 + 0xcfe7e0f8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272be0 + 0xb43a7d8a));
  uVar5 = uRam0000000183272680 & 0x1fffffffffffffff;
  uRam00000001832728e8 = uRam0000000183272920 ^ uVar5 ^ 0x100003fa7;
  uRam0000000183272540 = (uRam0000000183272540 ^ uVar5) + 0x100003fa7 ^ 0x78dd9f8a1ddab87b;
  uRam0000000183272908 = (uRam0000000183272908 * 0x6795c8aaac577221 ^ uRam0000000183272540) + uVar5;
  uRam00000001832728e0 = uRam0000000183272908 ^ uRam0000000183272540;
  uRam0000000183272b80 = 0x3fa7;
  uVar5 = (~uRam0000000183272c10 + 0xcf5bf66a) *
          ((uRam0000000183272cb8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183272cb8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183272a50) + (uVar5 & uRam0000000183272a50);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272b80 =
       func_0x00018ad0a250((uVar5 | 0x4b79d54c) + (ulonglong)((uint)uVar5 & 0x4b79d54c));
  uVar5 = (uRam0000000183272b80 << 0x2d | (uRam0000000183272b80 & 0x7fffffffffffffff) >> 0x13) ^
          0xcf5bf669;
  uRam0000000183272718 = (uRam0000000183272718 ^ uVar5) - 0xcf5bf669 ^ 0x23eeeb7e9dc0ae2;
  uRam0000000183272728 = (uRam0000000183272728 * 0x3a22ad4fd8cac05d ^ uRam0000000183272718) + uVar5;
  uRam0000000183272680 = uRam0000000183272728 ^ uRam0000000183272718;
  uRam0000000183272550 = 0x30a40997;
  uVar5 = (uRam0000000183272a50 ^ _UNK_181997960) + uRam0000000183272b98 + 0x4b7e1535;
  uVar10 = (uRam0000000183272b98 ^ _UNK_181997968) + uRam0000000183272a50 + 0x30a40997;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272a50 ^ _UNK_181997960;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272b98 ^ _UNK_181997968;
  uRam0000000183272b50 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272a50 + 0x30a40997) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272b98 + 0x4b7e1535));
  uVar5 = uRam0000000183272b50 ^ 0x30a40997;
  uRam0000000183272bf0 = uRam0000000183272990 ^ uVar5 ^ 0x100003fa7;
  uRam00000001832728a8 = (uRam00000001832728a8 ^ uVar5) + 0x100003fa7 ^ 0x19701fe09d53df40;
  uRam0000000183272880 = (uRam0000000183272880 * -0x78e48cf5fece02d ^ uRam00000001832728a8) + uVar5;
  uRam00000001832728a8 = uRam0000000183272880 ^ uRam00000001832728a8;
  uRam0000000183272698 = 0x3fa7;
  uVar5 = (~uRam00000001832726d8 + 0x40843d45) *
          ((uRam0000000183272c38 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183272c38 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001832727b8) + (uVar5 & uRam00000001832727b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272ad0 =
       func_0x00018ad0a250((uVar5 | 0xc4a61e61) + (ulonglong)((uint)uVar5 & 0xc4a61e61));
  uVar5 = uRam0000000183272ad0 ^ 0x40843d44;
  uVar10 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar5;
  uRam0000000183272568 = (uRam0000000183272568 ^ uVar5) - 0x40843d44 ^ 0x7fefc819d42dc77a;
  uRam0000000183272a40 = (uRam0000000183272a40 * 0x3bceb66e04abb549 ^ uRam0000000183272568) + uVar5;
  uRam0000000183272a38 = uRam0000000183272a40 ^ uRam0000000183272568;
  uRam0000000183272b30 = 0xbf7bc2bc;
  uVar5 = (uRam0000000183272790 ^ _UNK_181997970) + uRam00000001832727e0 + 0x84221c82;
  uVar10 = (uRam00000001832727e0 ^ _UNK_181997978) + uRam0000000183272790 + 0x40843d44;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272790 ^ _UNK_181997970;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001832727e0 ^ _UNK_181997978;
  uRam0000000183272558 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272790 + 0x40843d44) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832727e0 + 0x84221c82));
  uVar5 = uRam0000000183272558 >> 1 | uRam0000000183272558;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183272558;
  uRam00000001832727a0 = uRam0000000183272aa8 ^ uVar5 ^ 0x40847ceb;
  uRam00000001832726e0 = (uRam00000001832726e0 ^ uVar5) + 0x40847ceb ^ 0x2797f516bbb37da4;
  uRam0000000183272690 = (uRam0000000183272690 * -0x400dad251483a287 ^ uRam00000001832726e0) + uVar5
  ;
  uRam0000000183272680 = uRam0000000183272690 ^ uRam00000001832726e0;
  uRam0000000183272c40 = 0x40847ceb;
  uVar5 = (~uRam00000001832726e8 + 0xeb5e956f) * 0xef6271ea;
  uVar5 = (uVar5 | uRam0000000183272a50) + (uVar5 & uRam0000000183272a50);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183272ae8 =
       func_0x00018ad0a250((uVar5 | 0x45836191) + (ulonglong)((uint)uVar5 & 0x45836191));
  uVar5 = (uRam0000000183272ac0 ^ 0x2affd7da) & 0x7fffffffffffffff;
  uRam00000001832729a8 = uRam0000000183272518 ^ uVar5 ^ 0x1165e6d48;
  uRam0000000183272b58 = (uRam0000000183272b58 ^ uVar5) + 0x1165e6d48 ^ 0xe7951b88fcaf6c21;
  uRam0000000183272510 = (uRam0000000183272510 * 0x69039698d188ea1f ^ uRam0000000183272b58) + uVar5;
  uRam0000000183272768 = uRam0000000183272510 ^ uRam0000000183272b58;
  uRam0000000183272cc8 = 0x165e6d48;
  uVar5 = (uRam0000000183272c40 ^ _UNK_181997980) + uRam00000001832729c8 + 0xaeddf4ff;
  uVar10 = (uRam00000001832729c8 ^ _UNK_181997988) + uRam0000000183272c40 + 0xeb5e956e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272c40 ^ _UNK_181997980;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001832729c8 ^ _UNK_181997988;
  uRam0000000183272550 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272c40 + 0xeb5e956e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832729c8 + 0xaeddf4ff));
  uRam00000001832727b0 =
       (uRam00000001832727b0 ^ uRam0000000183272640) + 0xc1a142b4 ^ 0x185cbcd27b19086;
  uRam0000000183272600 =
       (uRam0000000183272600 * 0x1a0d603ae168d7dd ^ uRam00000001832727b0) + uRam0000000183272640;
  uRam00000001832728f8 = uRam0000000183272600 ^ uRam00000001832727b0;
  uRam0000000183272800 = 0xc1a142b4;
  uRam0000000183272810 = func_0x00018ad0a250(lRam0000000183272a00 + 0xff9f004590ff7cffU ^ 0xce);
  uRam0000000183272b70 =
       (uRam0000000183272b70 ^ uRam0000000183272810 ^ 0x2788be2fc29ca1ac) + 0x2a5e954a ^
       0xc41a0fb3fc5bd3ef;
  uRam0000000183272598 =
       (uRam0000000183272598 * -0x732c04b3f7d373c1 ^ uRam0000000183272b70) +
       (uRam0000000183272810 ^ 0x2788be2fc29ca1ac);
  uRam0000000183272cb8 = uRam0000000183272598 ^ uRam0000000183272b70;
  uRam0000000183272cf8 = 0x2a5e954a;
  uVar5 = (uRam0000000183272c40 ^ _UNK_181997990) + uRam0000000183272838 + 0x45836191;
  uVar10 = (uRam0000000183272838 ^ _UNK_181997998) + uRam0000000183272c40 + 0x54bd2a94;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272c40 ^ _UNK_181997990;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272838 ^ _UNK_181997998;
  uRam0000000183272698 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272c40 + 0x54bd2a94) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272838 + 0x45836191));
  uVar5 = uRam0000000183272698 & 0xfffffffffffffff8;
  uRam0000000183272ba0 = uRam00000001832728f0 ^ uVar5 ^ 0x1165e6d48;
  uRam0000000183272ad8 = (uRam00000001832726a0 ^ uVar5) + 0x1165e6d48 ^ 0x40c7dacc09d9a207;
  uRam00000001832726a0 = (uRam00000001832726a0 * 0x4a9832b6553de909 ^ uRam0000000183272ad8) + uVar5;
  uRam0000000183272ad8 = uRam00000001832726a0 ^ uRam0000000183272ad8;
  uRam00000001832727c8 = 0x165e6d48;
  uVar5 = (uRam0000000183272730 ^ 0x84221c82) + uRam00000001832726d0 + 0x84221c82;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272730 ^ 0x84221c82;
  uVar10 = ((uRam00000001832726d0 + uRam0000000183272730) * 0x2000 |
           uRam00000001832726d0 + uRam0000000183272730 >> 0x33) ^ uRam00000001832726d0;
  uRam0000000183272c60 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - uRam0000000183272730 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832726d0 + 0x84221c82));
  uVar5 = uRam0000000183272c60 & 0xffffffffe0000000;
  uRam0000000183272930 = uRam0000000183272950 ^ uVar5 ^ 0x3fa7;
  uRam0000000183272720 = (uRam0000000183272720 ^ uVar5) + 0x3fa7 ^ 0x408d0a05813084b3;
  uRam00000001832728b8 = (uRam00000001832728b8 * 0x50f4677d37a488df ^ uRam0000000183272720) + uVar5;
  uRam0000000183272b90 = uRam00000001832728b8 ^ uRam0000000183272720;
  uRam0000000183272a18 = 0x3fa7;
  uVar5 = (~uRam0000000183272a08 + 0x100000000) *
          ((uRam00000001832726b8 ^ 0xaeddf4ff) +
          (ulonglong)((uint)uRam00000001832726b8 & 0xaeddf4ff) * 2);
  uVar5 = (uVar5 | uRam0000000183272728) + (uVar5 & uRam0000000183272728);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832729f8 =
       func_0x00018ad0a250((uVar5 | 0x51220b00) + (ulonglong)((uint)uVar5 & 0x51220b00));
  uVar5 = (uRam00000001832729f8 ^ 0x2affd7d9d5000000) & 0xfffffffffffe0000;
  uRam0000000183272990 = (uRam0000000183272990 ^ uVar5) + 0xd5002825 ^ 0x1ed5c7e1a7c6116d;
  uRam0000000183272988 = (uRam0000000183272988 * -0x13d90fc434a8384f ^ uRam0000000183272990) + uVar5
  ;
  uRam0000000183272ca0 = uRam0000000183272988 ^ uRam0000000183272990;
  uRam0000000183272b88 = 0xd5002825;
  uVar5 = (uRam0000000183272920 ^ _UNK_1819979a0) + uRam0000000183272ba0 + 0xaed2b07f;
  uVar10 = (uRam0000000183272ba0 ^ _UNK_1819979a8) + uRam0000000183272920 + 0x2af0935a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272920 ^ _UNK_1819979a0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183272ba0 ^ _UNK_1819979a8;
  uRam0000000183272aa8 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272920 + 0x2af0935a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272ba0 + 0xaed2b07f));
  uVar5 = (ulonglong)(~(uint)uRam0000000183272aa8 & 0x2af0935a) ^ 0x2af0935a;
  uRam0000000183272508 = uRam0000000183272508 ^ uVar5 ^ 0xfc86c0af1ef95882;
  uRam0000000183272c70 = (uRam0000000183272c70 * 0x3b2871115bc55617 ^ uRam0000000183272508) + uVar5;
  uRam0000000183272800 = uRam0000000183272c70 ^ uRam0000000183272508;
  uRam0000000183272628 = 0;
  uRam0000000183272980 = func_0x00018ad0a250(uRam0000000183272530 ^ 0x1c008382002177);
  uVar5 = uRam0000000183272980 - (uRam0000000183272980 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam0000000183272980;
  uRam0000000183272aa0 = uRam00000001832728e8 ^ uVar5 ^ 0x3fa7;
  uRam00000001832728c8 = (uRam00000001832728c8 ^ uVar5) + 0x3fa7 ^ 0xdb3cf3f9dda08bc;
  uRam00000001832729e8 = (uRam00000001832729e8 * 0x1779e651a879e77 ^ uRam00000001832728c8) + uVar5;
  uRam0000000183272c98 = uRam00000001832729e8 ^ uRam00000001832728c8;
  uRam0000000183272790 = 0x3fa7;
  uVar5 = uVar4 ^ 0x84222325 ^ uRam0000000183272518;
  lVar7 = (uVar4 ^ 0x84222325) + uRam0000000183272530;
  uVar10 = uVar5 + lVar7;
  uVar11 = (uRam0000000183272530 ^ 0x3fa7) + uRam0000000183272518 + 0x3fa7;
  uVar5 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar5;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183272530 ^ 0x3fa7;
  uRam0000000183272628 =
       func_0x00018ad0a250((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183272518 + 0x3fa7) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar7);
  uVar10 = (uVar4 | 0x3fa7) ^ uRam0000000183272628;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar10) * -0x6715b6ce88ce6751;
  lVar7 = uVar4 - ((uint)uVar6 & 0x3fa7) * 2;
  uRam0000000183272990 = (uRam0000000183272990 ^ uVar5) + lVar7 + 0x3fa7 ^ 0xda7eac5f336ddbf7;
  uRam0000000183272850 = (uRam0000000183272850 * 0x41c73170e39a726b ^ uRam0000000183272990) + uVar5;
  uRam00000001832729e8 = uRam0000000183272850 ^ uRam0000000183272990;
  uRam0000000183272560 = lVar7 + 0x3fa7U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x146b4,0x32f);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ad059f4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181995f38 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fI; aUI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18ad0a2e0, runtime 6ffff291a2e0) =====

void FUN_18ad0a2e0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ad0a31c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181997a90 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fI; aUJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ad0b1d0, runtime 6ffff291b1d0) =====

void FUN_18ad0b1d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ad0b24d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181997fd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fI; aUK (IJ)I (handler @ image 18ad0dc90, runtime 6ffff291dc90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0dc90(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (uRam00000001832730b0 ^ _UNK_18199ad30) + uRam0000000183272f88 + 0x58d945b822886e78;
  uVar5 = (uRam0000000183272f88 ^ _UNK_18199ad38) + uRam00000001832730b0 + 0x7c84f8d975c52d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832730b0 ^ _UNK_18199ad30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272f88 ^ _UNK_18199ad38;
  uVar2 = (ulonglong)param_3;
  uRam0000000183272d00 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832730b0 + 0x7c84f8d975c52d0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183272f88 + 0x58d945b822886e78));
  uRam0000000183273058 =
       (uRam0000000183273058 ^ uRam0000000183272d00 ^ 0x5fd94fbdb7fe5fdd) + 0x5fd94fbdb7fe5fdd ^
       0x70681042e103c367;
  uRam0000000183273008 =
       (uRam0000000183273008 * -0x4823e8e6df8e3eab ^ uRam0000000183273058) +
       (uRam0000000183272d00 ^ 0x5fd94fbdb7fe5fdd);
  uRam0000000183272e10 = uRam0000000183273008 ^ uRam0000000183273058;
  uRam0000000183272d08 = 0x5fd94fbdb7fe5fdd;
  uVar4 = (uRam0000000183272f00 ^ _UNK_18199ad40) + uRam0000000183273030 + 0x6c805bf29406507e;
  uVar5 = (uRam0000000183273030 ^ _UNK_18199ad48) + uRam0000000183272f00 + 0x2ff1ad450a24aaf7;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183272f00 ^ _UNK_18199ad40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183273030 ^ _UNK_18199ad48;
  uRam0000000183273060 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183272f00 + 0x2ff1ad450a24aaf7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183273030 + 0x6c805bf29406507e));
  uVar4 = (uRam0000000183273060 ^ 0x9905bd6e8e91bacd) & 0x7fffffffffff8000;
  uRam0000000183272da8 = (uRam0000000183272f00 ^ uVar4) + 0x4371f6b71a00d9ac ^ 0x15e411188f5d178d;
  uRam0000000183272d38 = (uRam0000000183272d38 * 0x7b24f9663efecb0f ^ uRam0000000183272da8) + uVar4;
  uRam0000000183272da8 = uRam0000000183272d38 ^ uRam0000000183272da8;
  uRam0000000183272f00 = 0x4371f6b71a00d9ac;
  uRam0000000183272ed8 = func_0x00018ad187c0(uRam0000000183272f58 + 0x31dd2722444f54f7 ^ 0x7b);
  uVar4 = uRam0000000183272ed8 ^ 0x8ff57cea2773f96;
  uRam0000000183273098 = uRam0000000183272f48 ^ uVar4 ^ 0x8ff57cea277bf95;
  uRam0000000183272f28 = (uRam0000000183272f28 ^ uVar4) + 0x8ff57cea277bf95 ^ 0xe938fe7e331cb053;
  uRam0000000183272d08 = (uRam0000000183272d08 * -0x40d2d98f7b796a03 ^ uRam0000000183272f28) + uVar4
  ;
  uRam0000000183273040 = uRam0000000183272d08 ^ uRam0000000183272f28;
  uRam0000000183272d20 = 0x8ff57cea277bf95;
  uVar4 = (~uRam0000000183272e88 + 0xf700a8315d88c06b) *
          ((uRam0000000183272d30 ^ 0x8ff57ce26559cb0) +
          (uRam0000000183272d30 & 0x8ff57ce26559cb0) * 2);
  uVar4 = (uVar4 | uRam0000000183272fa8) + (uVar4 & uRam0000000183272fa8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272ef0 =
       func_0x00018ad187c0((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = ~uRam0000000183272ef0 & 0x7fffffffffffffff;
  uRam0000000183272e70 =
       (uRam0000000183272e38 ^ uVar4 ^ 0x7fff ^ uVar4) + 0x7fff ^ 0x6aef468c7cb0f947;
  uRam0000000183272ff0 = (uRam0000000183272ff0 * -0x55651d9909a9fddd ^ uRam0000000183272e70) + uVar4
  ;
  uRam0000000183273038 = uRam0000000183272ff0 ^ uRam0000000183272e70;
  uRam0000000183272fa8 = 0x7fff;
  uRam0000000183273068 = func_0x00018ad187c0(uRam0000000183273040 + 0xd9cb8881a092da3b ^ 0x78);
  uRam0000000183273020 =
       (uRam0000000183273020 ^ uRam0000000183273068) + 0x3b676205e580a97c ^ 0xedfd0bb6c8e14838;
  uRam0000000183272f00 =
       (uRam0000000183272f00 * 0x5f8582212dea81d9 ^ uRam0000000183273020) + uRam0000000183273068;
  uRam0000000183272f80 = uRam0000000183272f00 ^ uRam0000000183273020;
  uRam00000001832730c8 = 0x3b676205e580a97c;
  uRam0000000183273090 = func_0x00018ad187c0(uRam0000000183272eb0 ^ 0x260a9899a972c3d1);
  uVar4 = uRam0000000183273090 - (uRam0000000183273090 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183273090;
  uVar4 = (uVar4 << 0x34 | uVar4 >> 0xc) * -0x103940f3550da5ad;
  uRam0000000183273018 = uRam0000000183272e68 ^ uVar4 ^ 0xc4989dfa1a7fd683;
  uRam0000000183273050 = (uRam0000000183273050 ^ uVar4) + 0xc4989dfa1a7fd683 ^ 0xc30ebcc251c00df7;
  uRam0000000183272d48 = (uRam0000000183272d48 * 0x1c715a5d34fca46b ^ uRam0000000183273050) + uVar4;
  uRam0000000183272d60 = uRam0000000183272d48 ^ uRam0000000183273050;
  uRam0000000183272ef8 = -0x3b676205e580297d;
  uRam0000000183272ee0 = func_0x00018ad187c0(uRam0000000183272ec0 + 0xd6b3d8c4366e454c ^ 0xb7);
  uVar4 = uRam0000000183272d60 & 0x7fffffffffffffff;
  uRam00000001832730f0 = uRam0000000183272d50 ^ uVar4 ^ 0x7fff;
  uRam0000000183272f50 = (uRam0000000183272f50 ^ uVar4) + 0x7fff ^ 0xc01cdf8a67e9161c;
  uRam0000000183272e70 = (uRam0000000183272e70 * -0x40e0488cc6085a9f ^ uRam0000000183272f50) + uVar4
  ;
  uRam0000000183272df0 = uRam0000000183272e70 ^ uRam0000000183272f50;
  uRam0000000183272df8 = 0x7fff;
  uVar4 = (uRam0000000183272d18 ^ _UNK_18199ad50) + uRam0000000183272d08 + 0x5fd94fbd33dc7cf8;
  uVar5 = (uRam0000000183272d08 ^ _UNK_18199ad58) + uRam0000000183272d18 + 0x4371f6b71a00d9ac;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183272d18 ^ _UNK_18199ad50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272d08 ^ _UNK_18199ad58;
  uRam0000000183272eb8 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183272d18 + 0x4371f6b71a00d9ac) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183272d08 + 0x5fd94fbd33dc7cf8));
  uVar4 = (uRam0000000183272eb8 & 0xfffff) << 0x2b | uRam0000000183272eb8 >> 0x15;
  uRam0000000183273018 = uRam0000000183272f18 ^ uVar4 ^ 0xa34b4674d1ff3989;
  uRam0000000183272d50 = (uRam0000000183272d50 ^ uVar4) + 0xa34b4674d1ff3989 ^ 0xbf3f1c3248cc865e;
  uRam0000000183273028 = (uRam0000000183273028 * 0x236b66a306b09de7 ^ uRam0000000183272d50) + uVar4;
  uRam0000000183272fb0 = uRam0000000183273028 ^ uRam0000000183272d50;
  uRam0000000183272eb0 = 0xa34b4674d1ff3989;
  uRam0000000183272d80 = func_0x00018ad187c0(uRam0000000183272e10 + 0xf69c67e6b4a7240b ^ 0xb2);
  uVar4 = uRam0000000183272d80 << 0x1f | uRam0000000183272d80 >> 0x21;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar4;
  uRam0000000183272e30 = (uRam0000000183272e30 ^ uVar4) + 0x1ca8b90aadfe8671 ^ 0x25fa909731f69bfb;
  uRam0000000183272ef8 = (uRam0000000183272ef8 * -0x276ad6652c343df ^ uRam0000000183272e30) + uVar4;
  uRam0000000183273000 = uRam0000000183272ef8 ^ uRam0000000183272e30;
  uRam0000000183272db0 = 0x1ca8b90aadfe8671;
  uVar4 = (~uRam00000001832730b0 + 0x86a28d6a2400b319) *
          ((uRam00000001832730e0 ^ 0x1ca8b90a29dca554) +
          (uRam00000001832730e0 & 0x1ca8b90a29dca554) * 2);
  uVar4 = (uVar4 | uRam0000000183272df0) + (uVar4 & uRam0000000183272df0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272f78 =
       func_0x00018ad187c0((uVar4 | 0x9a0a34600ddc164c) + (uVar4 & 0x9a0a34600ddc164c));
  uVar4 = ~uRam0000000183272f78 & 0x10aadfe8671;
  uRam0000000183273038 = uRam0000000183272e28 ^ uVar4 ^ 0xa34b4674d1ff3989;
  uRam0000000183272f90 = (uRam0000000183272f90 ^ uVar4) + 0xa34b4674d1ff3989 ^ 0xccbc7c90d43453a1;
  uRam0000000183272ed0 = (uRam0000000183272ed0 * -0x7d7a947fe684b887 ^ uRam0000000183272f90) + uVar4
  ;
  uRam0000000183272f58 = uRam0000000183272ed0 ^ uRam0000000183272f90;
  uRam0000000183272e10 = 0xa34b4674d1ff3989;
  uVar4 = (uRam0000000183272e08 ^ _UNK_18199ad60) + uRam0000000183272fa0 + 0xa34b467455dd1aac;
  uVar5 = (uRam0000000183272fa0 ^ _UNK_18199ad68) + uRam0000000183272e08 + 0xa34b4674d1ff3989;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183272e08 ^ _UNK_18199ad60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272fa0 ^ _UNK_18199ad68;
  uRam00000001832730e8 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183272e08 + 0xa34b4674d1ff3989) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183272fa0 + 0xa34b467455dd1aac));
  uRam0000000183272ff8 = uRam00000001832730e8 << 0x2a | uRam00000001832730e8 >> 0x16;
  uRam0000000183273060 = uRam0000000183273060 ^ uRam0000000183272ff8 ^ 0xddfdfbb88ec26940;
  uRam0000000183272e78 =
       (uRam0000000183272e78 * -0x4a41864fd6efd4a5 ^ uRam0000000183273060) + uRam0000000183272ff8;
  uRam00000001832730c8 = uRam0000000183272e78 ^ uRam0000000183273060;
  uRam0000000183273018 = 0;
  uVar4 = (uRam0000000183272d98 ^ 0x84225cda) + uRam0000000183272fc8 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183272d98 ^ 0x84225cda;
  uVar5 = ((uRam0000000183272fc8 + uRam0000000183272d98) * 0x2000 |
          uRam0000000183272fc8 + uRam0000000183272d98 >> 0x33) ^ uRam0000000183272fc8;
  uRam0000000183272d38 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam0000000183272d98 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183272fc8 + 0x84225cda));
  uVar4 = (uRam0000000183272d38 ^ 0x7fff) & 0x7fffffffff;
  uRam00000001832730b0 = uRam00000001832730f8 ^ uVar4 ^ 0x7fff;
  uRam0000000183272f70 = (uRam0000000183272f70 ^ uVar4) + 0x7fff ^ 0x19a5b5df9f1e03a9;
  uRam0000000183272e38 = (uRam0000000183272e38 * -0x701ae382efb741ff ^ uRam0000000183272f70) + uVar4
  ;
  uRam0000000183273080 = uRam0000000183272e38 ^ uRam0000000183272f70;
  uRam0000000183272d78 = uRam0000000183272ea8 ^ 0x7fff;
  lRam0000000183272ec8 = 0x7fff;
  uRam0000000183272e38 = func_0x00018ad187c0(uRam0000000183272e00 + 0x427eddbc056fdf5f ^ 0xd4);
  uRam0000000183272f08 =
       (uRam0000000183272f08 ^ uRam0000000183272e38 & 0x5fd94fbdb7fe5fdd) + 0xa026b0424801a022 ^
       0xef7c95718d24dc35;
  uRam0000000183272e00 =
       (uRam0000000183272e00 * 0x46cb1b1b0d9fce33 ^ uRam0000000183272f08) +
       (uRam0000000183272e38 & 0x5fd94fbdb7fe5fdd);
  uRam0000000183272d60 = uRam0000000183272e00 ^ uRam0000000183272f08;
  uRam0000000183272ec0 = 0xa026b0424801a022;
  uRam0000000183272fe8 = func_0x00018ad187c0(lRam0000000183272f68 + 0xd953351aaa974da6U ^ 0xcb);
  uRam0000000183273030 =
       uRam0000000183273030 ^ uRam0000000183272fe8 ^ 0xa026b0424801a022 ^ 0x7eab440c71f2d9c;
  uRam0000000183272f80 =
       (uRam0000000183272f80 * 0x10cf90cfa4ffd84d ^ uRam0000000183273030) +
       (uRam0000000183272fe8 ^ 0xa026b0424801a022);
  uRam0000000183272d50 = uRam0000000183272f80 ^ uRam0000000183273030;
  uRam0000000183272f70 = 0;
  uRam00000001832730e8 = func_0x00018ad187c0(lRam0000000183272d70 + 0xffd4007ba5ffddffU ^ 0x79);
  uVar4 = uRam00000001832730e8 << 0x27 | uRam00000001832730e8 >> 0x19;
  uRam0000000183272d28 = uRam0000000183272df8 ^ uVar4 ^ 0x7fff;
  uRam0000000183272e20 = (uRam0000000183272e20 ^ uVar4) + 0x7fff ^ 0x30243646e1c6a4c6;
  uRam0000000183272fe8 = (uRam0000000183272fe8 * 0x699743ffc3e08be9 ^ uRam0000000183272e20) + uVar4;
  uRam00000001832730b8 = uRam0000000183272fe8 ^ uRam0000000183272e20;
  uRam0000000183272ed0 = 0x7fff;
  uVar4 = (uRam0000000183272d90 ^ 0x84225cda) + uRam0000000183272d80 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183272d90 ^ 0x84225cda;
  uVar5 = ((uRam0000000183272d80 + uRam0000000183272d90) * 0x2000 |
          uRam0000000183272d80 + uRam0000000183272d90 >> 0x33) ^ uRam0000000183272d80;
  uRam0000000183272f50 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam0000000183272d90 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183272d80 + 0x84225cda));
  uVar4 = uRam0000000183272f50 << 0x2a | uRam0000000183272f50 >> 0x16;
  uRam0000000183272e40 = uRam0000000183273060 ^ uVar4 ^ 0x7fff;
  uRam0000000183273070 = (uRam0000000183273070 ^ uVar4) + 0x7fff ^ 0x20802df1a6d63af4;
  uRam0000000183272e08 = (uRam0000000183272e08 * 0x513c7cd8cd3103f9 ^ uRam0000000183273070) + uVar4;
  uRam0000000183272f88 = uRam0000000183272e08 ^ uRam0000000183273070;
  uRam0000000183272e98 = 0x7fff;
  uVar5 = (ulonglong)(param_4 & 0x7fff);
  uVar3 = uVar5 ^ 0x84222325;
  uVar4 = ((uRam00000001832730a0 ^ uVar3) +
          (ulonglong)((uint)uRam00000001832730a0 & (uint)uVar3) * 2) *
          (uVar2 - uRam0000000183272ff8);
  uVar4 = (uVar4 | uRam0000000183272f60) + (uVar4 & uRam0000000183272f60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272eb0 =
       func_0x00018ad187c0((uVar3 ^ uVar2 | uVar4) +
                           (ulonglong)((uint)(uVar3 ^ uVar2) & (uint)uVar4));
  uRam0000000183273090 = (uVar5 + uVar2) - (ulonglong)((param_3 & param_4 & 0x7fff) * 2);
  uRam0000000183272d90 =
       (uRam0000000183272d90 ^ uVar5 ^ uRam0000000183272eb0) + uRam0000000183273090 ^
       0x420826d620a7a988;
  uRam0000000183272fd8 =
       (uRam0000000183272fd8 * -0x7a96f1f1af309dc5 ^ uRam0000000183272d90) +
       (uVar5 ^ uRam0000000183272eb0);
  uRam0000000183272fb8 = uRam0000000183272fd8 ^ uRam0000000183272d90;
  uRam0000000183273090 = uRam0000000183273090 & 0xffffffff;
  uRam0000000183272f60 = func_0x00018ad187c0(uRam0000000183272e60 - 0xd77100b501 ^ 0xce);
  uVar4 = (uRam0000000183272f60 ^ 0xf05a8000) & 0xffffffffffff8000;
  uRam0000000183272de8 = (uRam0000000183272de8 ^ uVar4) + 0x6df72394 ^ 0x31204daef6b495e7;
  uRam0000000183272e50 = (uRam0000000183272e50 * -0x741e43f8525b5c05 ^ uRam0000000183272de8) + uVar4
  ;
  uRam0000000183273088 = uRam0000000183272e50 ^ uRam0000000183272de8;
  uRam0000000183272f80 = 0x6df72394;
  uRam0000000183272d38 = func_0x00018ad187c0(uRam0000000183273090 + 0x93007588ffb3ff ^ 0xa7);
  uVar4 = uRam0000000183272d38 >> 1 | uRam0000000183272d38;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uRam0000000183272d38) * 0x7dbc618e46cf7cb3;
  uRam0000000183272e08 = (uRam0000000183272e08 ^ uVar4) - 0xf176b0aa ^ 0xe59c279925480837;
  uRam0000000183272e40 = (uRam0000000183272e40 * 0x51851f07290dd20d ^ uRam0000000183272e08) + uVar4;
  uRam0000000183272f50 = uRam0000000183272e40 ^ uRam0000000183272e08;
  uRam0000000183272d90 = 0xe894f56;
  uVar4 = (~uRam0000000183272f60 + 0xe894f57) *
          ((uRam00000001832730b0 ^ 0x7555093f) +
          (ulonglong)((uint)uRam00000001832730b0 & 0x7555093f) * 2);
  uVar4 = (uVar4 | uRam0000000183272d60) + (uVar4 & uRam0000000183272d60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272fd8 =
       func_0x00018ad187c0((uVar4 | 0x7bdc4669) + (ulonglong)((uint)uVar4 & 0x7bdc4669));
  uVar4 = uRam0000000183272fd8 * -0xed4bef2666aba07;
  uRam0000000183272f50 = uRam0000000183272e98 ^ uVar4 ^ 0x100007970;
  uRam0000000183272e40 = (uRam0000000183272e40 ^ uVar4) + 0x100007970 ^ 0x367642e54e068268;
  uRam0000000183272f88 = (uRam0000000183272f88 * 0x10ad37558c76f10d ^ uRam0000000183272e40) + uVar4;
  uRam0000000183272f80 = uRam0000000183272f88 ^ uRam0000000183272e40;
  uRam0000000183272dc8 = 0x7970;
  uRam0000000183272ed0 = func_0x00018ad187c0(uRam00000001832730e8 ^ 0xff7a001e49004e24);
  uRam0000000183272f70 =
       (uRam0000000183272f70 ^ uRam0000000183272ed0) - 0xa273a5fc ^ 0x45007224508e3479;
  uRam0000000183272d60 =
       (uRam0000000183272d60 * -0xeb62738dbf94c53 ^ uRam0000000183272f70) + uRam0000000183272ed0;
  uRam0000000183273070 = uRam0000000183272d60 ^ uRam0000000183272f70;
  uRam0000000183272df8 = 0x5d8c5a04;
  uRam0000000183272d50 = func_0x00018ad187c0(uRam0000000183272e38 + 0x9cffd959002eff ^ 0x34);
  uRam0000000183272ee8 = uRam0000000183272e78 ^ uRam00000001832730b8 ^ 0xa2741f6c;
  uRam0000000183272f60 =
       (uRam0000000183272f60 ^ uRam00000001832730b8) + 0xa2741f6c ^ 0x27c523b01a7f86d3;
  uRam0000000183272ff0 =
       (uRam0000000183272ff0 * -0x7abea357319889eb ^ uRam0000000183272f60) + uRam00000001832730b8;
  uRam00000001832730d8 = uRam0000000183272ff0 ^ uRam0000000183272f60;
  uRam0000000183272e10 = 0xa2741f6c;
  uVar4 = (~uRam0000000183272dc0 + 0x5d8c5a05) *
          ((uRam0000000183272e80 ^ 0x26563c49) +
          (ulonglong)((uint)uRam0000000183272e80 & 0x26563c49) * 2);
  uVar4 = (uVar4 | uRam0000000183273078) + (uVar4 & uRam0000000183273078);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272f70 =
       func_0x00018ad187c0((uVar4 | 0x7bda664d) + (ulonglong)((uint)uVar4 & 0x7bda664d));
  uRam0000000183272d20 = uRam0000000183272e58 ^ uRam0000000183272f70 ^ 0x100007970;
  uRam0000000183272f30 =
       (uRam0000000183272f30 ^ uRam0000000183272f70) + 0x100007970 ^ 0x1713f84b447f3e4;
  uRam0000000183272d50 =
       (uRam0000000183272d50 * -0x2cfce7b1aa137cd5 ^ uRam0000000183272f30) + uRam0000000183272f70;
  uRam0000000183272d10 = uRam0000000183272d50 ^ uRam0000000183272f30;
  uRam00000001832730c0 = 0x7970;
  uVar4 = (uRam0000000183272d30 ^ _UNK_18199ad70) + uRam0000000183272fc0 + 0x84222325;
  uVar5 = (uRam0000000183272fc0 ^ _UNK_18199ad78) + uRam0000000183272d30 + 0xdb35e558;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183272d30 ^ _UNK_18199ad70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272fc0 ^ _UNK_18199ad78;
  uRam0000000183272ea8 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272d30 + 0xdb35e558) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183272fc0 + 0x84222325));
  uVar4 = uRam0000000183272ea8 >> 1 | uRam0000000183272ea8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam0000000183272ea8;
  uRam0000000183272d90 = (uRam0000000183272d90 ^ uVar4) - 0xdb35e558 ^ 0x1dfc475bc2d2cd3e;
  uRam0000000183272f48 = (uRam0000000183272f48 * 0x1481565a2506648f ^ uRam0000000183272d90) + uVar4;
  uRam0000000183272e80 = uRam0000000183272f48 ^ uRam0000000183272d90;
  uRam0000000183272e58 = 0x24ca1aa8;
  uVar4 = (~uRam0000000183272ef8 + 0xdb35e559) *
          ((uRam0000000183272d60 ^ 0x84225a55) +
          (ulonglong)((uint)uRam0000000183272d60 & 0x84225a55) * 2);
  uVar4 = (uVar4 | uRam0000000183272fa0) + (uVar4 & uRam0000000183272fa0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272db8 =
       func_0x00018ad187c0((uVar4 | 0x5f17bf0d) + (ulonglong)((uint)uVar4 & 0x5f17bf0d));
  uVar4 = uRam0000000183272db8 - (uRam0000000183272db8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183272db8 ^ 0x7970;
  uRam0000000183273010 = uRam0000000183272ea8 ^ uVar4 ^ 0xdb365ec8;
  uRam0000000183272eb8 = (uRam0000000183272eb8 ^ uVar4) + 0xdb365ec8 ^ 0xbd6e0ebcd126c706;
  uRam0000000183272f38 = (uRam0000000183272f38 * -0x2fc4417e57d133a1 ^ uRam0000000183272eb8) + uVar4
  ;
  uRam0000000183272e58 = uRam0000000183272f38 ^ uRam0000000183272eb8;
  uRam0000000183273058 = 0xdb365ec8;
  uVar4 = (uRam0000000183273090 ^ _UNK_18199ad80) + uRam0000000183272d58 + 0x5f147ded;
  uVar5 = (uRam0000000183272d58 ^ _UNK_18199ad88) + uRam0000000183273090 + 0x24ca1aa8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183273090 ^ _UNK_18199ad80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272d58 ^ _UNK_18199ad88;
  uRam0000000183272ff0 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183273090 + 0x24ca1aa8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183272d58 + 0x5f147ded));
  uVar4 = (uRam0000000183272ff0 & 0xfffffffffffffff0) * 0x4000;
  uRam00000001832730a0 = uRam0000000183272ea8 ^ uVar4 ^ 0x100007970;
  uRam0000000183272d68 = (uRam0000000183272d68 ^ uVar4) + 0x100007970 ^ 0x8deacc4d14a56910;
  uRam0000000183272f20 = (uRam0000000183272f20 * -0x5289ab42606992d7 ^ uRam0000000183272d68) + uVar4
  ;
  uRam0000000183272f28 = uRam0000000183272f20 ^ uRam0000000183272d68;
  uRam0000000183273080 = 0x7970;
  uVar4 = (~uRam0000000183272f30 + 0x6df72395) *
          ((uRam0000000183272d38 ^ 0x7bdd67de) +
          (ulonglong)((uint)uRam0000000183272d38 & 0x7bdd67de) * 2);
  uVar4 = (uVar4 | uRam0000000183272d58) + (uVar4 & uRam0000000183272d58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272e90 =
       func_0x00018ad187c0((uVar4 | 0x162a444a) + (ulonglong)((uint)uVar4 & 0x162a444a));
  uVar5 = (uRam0000000183272e90 ^ 0xfff00000) & 0xfffffffffff00000;
  uRam0000000183272f90 = uRam0000000183272e08 ^ uVar5 ^ 0x16df6688f;
  uVar4 = (uRam0000000183272e60 ^ uVar5) + 0x16df6688f;
  uRam0000000183272e60 = uVar4 ^ 0x9a3bbae17475fc6f;
  uRam0000000183273008 = (uRam0000000183273008 * 0x245ce987f8e6614b ^ uRam0000000183272e60) + uVar5;
  uRam0000000183272ed0 = uRam0000000183273008 ^ uRam0000000183272e60;
  uRam00000001832730f0 = 0x6df6688f;
  uVar4 = (~uRam0000000183272e18 + 0x6df72395) *
          ((uVar4 ^ 0x9a3bbae10fa89bb1) + (ulonglong)((uint)uRam0000000183272e60 & 0x7bdd67de) * 2);
  uVar4 = (uVar4 | uRam0000000183272ec0) + (uVar4 & uRam0000000183272ec0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272fe0 =
       func_0x00018ad187c0((uVar4 | 0x162a444a) + (ulonglong)((uint)uVar4 & 0x162a444a));
  uRam0000000183272e58 =
       (uRam0000000183272e58 ^ uRam0000000183272fe0) + 0x9208676f ^ 0x96a5c00054e43747;
  uRam0000000183273060 =
       (uRam0000000183273060 * -0x5bc48f471ebdecd3 ^ uRam0000000183272e58) + uRam0000000183272fe0;
  uRam0000000183272d58 = uRam0000000183273060 ^ uRam0000000183272e58;
  uRam0000000183272d28 = 0x9208676f;
  uVar4 = (uRam0000000183272d10 ^ _UNK_18199ad90) + uRam0000000183273098 + 0x7bdd67de;
  uVar5 = (uRam0000000183273098 ^ _UNK_18199ad98) + uRam0000000183272d10 + 0x6df72394;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183272d10 ^ _UNK_18199ad90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183273098 ^ _UNK_18199ad98;
  uRam0000000183272eb8 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272d10 + 0x6df72394) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183273098 + 0x7bdd67de));
  uRam0000000183272ee0 =
       (uRam0000000183272ee0 ^ uRam0000000183272eb8) + 0x6df70090 ^ 0xbe5a192b864f2963;
  uRam0000000183272d78 =
       (uRam0000000183272d78 * 0x5f9461ba5c67f6f3 ^ uRam0000000183272ee0) + uRam0000000183272eb8;
  uRam0000000183272fa0 = uRam0000000183272d78 ^ uRam0000000183272ee0;
  uRam0000000183272d00 = 0x6df70090;
  uRam0000000183272ff8 = func_0x00018ad187c0(uRam0000000183272fa0 ^ 0xffc5ff844d001d1d);
  uVar4 = uRam0000000183272ff8 * 0x3efe1305a4aee6c3;
  uRam0000000183273070 = uRam0000000183272d20 ^ uVar4 ^ 0x7970;
  uRam00000001832730d8 = (uRam00000001832730d8 ^ uVar4) + 0x7970 ^ 0xba540be7648a5a5c;
  uRam0000000183272f10 = (uRam0000000183272f10 * 0x29fc00cec36e8ef5 ^ uRam00000001832730d8) + uVar4;
  uRam0000000183272d50 = uRam0000000183272f10 ^ uRam00000001832730d8;
  uRam0000000183272e80 = 0x7970;
  uVar4 = (~uRam00000001832730c8 + 0x100000000) *
          ((uRam0000000183272e10 ^ 0x7bdd67de) +
          (ulonglong)((uint)uRam0000000183272e10 & 0x7bdd67de) * 2);
  uVar4 = (uVar4 | uRam0000000183272e18) + (uVar4 & uRam0000000183272e18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183272ea0 =
       func_0x00018ad187c0((uVar4 | 0x84229821) + (ulonglong)((uint)uVar4 & 0x84229821));
  uVar4 = (uRam0000000183272ea0 ^ 0xffffffff) >> 1 | uRam0000000183272ea0 ^ 0xffffffff;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uRam0000000183272ea0 ^ 0xbb04 ^
          (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2;
  uRam0000000183272f18 = (uRam0000000183272f18 ^ uVar4) + 0xbb04 ^ 0x594af1a53ae4bbb8;
  uRam0000000183272f30 = (uRam0000000183272f30 * -0x7c0d03985228d6c9 ^ uRam0000000183272f18) + uVar4
  ;
  uRam00000001832730f0 = uRam0000000183272f30 ^ uRam0000000183272f18;
  uRam0000000183272d10 = 0xbb04;
  uVar4 = (uRam0000000183272d38 ^ _UNK_18199ada0) + uRam0000000183272fe0 + 0x7bdd67de;
  uVar5 = (uRam0000000183272fe0 ^ _UNK_18199ada8) + uRam0000000183272d38 + 0xbb04;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183272d38 ^ _UNK_18199ada0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183272fe0 ^ _UNK_18199ada8;
  uRam00000001832730b0 =
       func_0x00018ad187c0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183272d38 + 0xbb04) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183272fe0 + 0x7bdd67de));
  uVar4 = (uRam00000001832730b0 ^ 0xffffffff) & 0x7fffffffffffffff;
  uRam0000000183272dd0 = uRam0000000183272dd0 ^ uVar4 ^ 0xb42c2d8a2a40f22;
  uRam0000000183272e48 = (uRam0000000183272e48 * -0x2bdc404b8946bc7 ^ uRam0000000183272dd0) + uVar4;
  uRam0000000183272dd8 = uRam0000000183272e48 ^ uRam0000000183272dd0;
  uRam0000000183272db0 = 0;
  uRam0000000183272f00 = func_0x00018ad187c0(lRam0000000183272ec8 + 0xffe0ff8425001dffU ^ 0xb6);
  uVar4 = uRam0000000183272f00 << 0x34 | uRam0000000183272f00 >> 0xc;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar4;
  uRam0000000183272fc8 = uRam0000000183272fc8 ^ uVar4 ^ 0x93636580aa20821e;
  uRam0000000183272d78 =
       (uRam0000000183272d78 * 0x47ed1e6234c41b09 ^ uRam0000000183272fc8) + uVar4 ^
       uRam0000000183272fc8;
  uRam0000000183272da0 = 0;
  uRam0000000183272df0 = func_0x00018ad187c0(lRam0000000183272d88 + 0x55ff83ccffe1ffU ^ 0x32);
  uVar4 = (uRam0000000183272df0 & 0x1fff) << 0x32 | uRam0000000183272df0 >> 0xe;
  uRam0000000183272d60 = uRam00000001832730e0 ^ uVar4 ^ 0x7970;
  uRam0000000183272e38 = (uRam0000000183272e38 ^ uVar4) + 0x7970 ^ 0xb2d58dd2d5adbedf;
  uRam0000000183272e70 = (uRam0000000183272e70 * -0x40e9d0463c298517 ^ uRam0000000183272e38) + uVar4
  ;
  uRam0000000183272d08 = uRam0000000183272e70 ^ uRam0000000183272e38;
  uRam0000000183272f58 = 0x7970;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x146b4,0x32f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ad0fe12 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181998ed0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fI; aUL (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18aca5950, runtime 6ffff28b5950) =====

void FUN_18aca5950(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018aca599b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181985a10 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fI; aUM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18aca6960, runtime 6ffff28b6960) =====

void FUN_18aca6960(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aca69e9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181985fd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



