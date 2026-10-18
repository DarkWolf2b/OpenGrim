// ===== Lsixtwo/ed; _a79940e05944d2ef07f1382edf83c8fc ()V (handler @ image 18d6bde10, runtime 6ffff52cde10) =====

void FUN_18d6bde10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d6bdef8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182267928 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ed; aaj ()V (handler @ image 18d55d7f0, runtime 6ffff516d7f0) =====

void FUN_18d55d7f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc377,0x218);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d55d8a9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182228018 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ed; arB ()Lsixtwo/cC; (handler @ image 18d682ed0, runtime 6ffff5292ed0) =====

void FUN_18d682ed0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018d682ef0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18225e1e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ed; arC ()Lsixtwo/cJ; (handler @ image 18d6830d0, runtime 6ffff52930d0) =====

void FUN_18d6830d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018d6830f0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18225e2c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ed; arD (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d6832d0, runtime 6ffff52932d0) =====

undefined8 FUN_18d6832d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/ed; arE ([B)Ljava/lang/String; (handler @ image 18d683360, runtime 6ffff5293360) =====

void FUN_18d683360(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018d683400 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18225e520 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ed; arF (IJ)I (handler @ image 18d6aed90, runtime 6ffff52bed90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6aed90(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar8 = (~uRam0000000183361528 + 0xb2008eb356fd4dfe) *
          ((uRam0000000183361ac8 ^ 0xd5aaf3cda27de94) +
          (uRam0000000183361ac8 & 0xd5aaf3cda27de94) * 2);
  uVar8 = (uVar8 | uRam0000000183361830) + (uVar8 & uRam0000000183361830);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183361bd8 =
       func_0x00018d6ba060((uVar8 | 0xbf5a218f8cda9369) + (uVar8 & 0xbf5a218f8cda9369));
  uRam0000000183361648 =
       (uRam0000000183361648 ^ uRam0000000183361bd8) + 0xbf5aafbf5efdfdfd ^ 0x14a9c349141213db;
  uRam00000001833615f0 =
       (uRam00000001833615f0 * 0x3cb05ad489b7d8b5 ^ uRam0000000183361648) + uRam0000000183361bd8;
  uRam0000000183361610 = uRam00000001833615f0 ^ uRam0000000183361648;
  uRam00000001833615e0 = 0xbf5aafbf5efdfdfd;
  uVar8 = (~uRam00000001833615d0 + 0x3ec262a50155d281) *
          ((uRam0000000183361960 ^ 0x5f2faf7ce3f21e2) +
          (uRam0000000183361960 & 0x5f2faf7ce3f21e2) * 2);
  uVar8 = (uVar8 | uRam0000000183361a90) + (uVar8 & uRam0000000183361a90);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  lRam00000001833615a8 =
       func_0x00018d6ba060((uVar8 | 0x3b309852cf6af362) + (uVar8 & 0x3b309852cf6af362));
  uRam00000001833619a8 =
       (uRam00000001833619a8 ^ lRam00000001833615a8 * 0x3521d40b5a8e0bc3) + 0x3b3098524b48d047 ^
       0x18ae123b25323b51;
  uRam0000000183361970 =
       (uRam0000000183361970 * 0x2d2d9db110731ceb ^ uRam00000001833619a8) +
       lRam00000001833615a8 * 0x3521d40b5a8e0bc3;
  uRam0000000183361b10 = uRam0000000183361970 ^ uRam00000001833619a8;
  uRam0000000183361b18 = 0x3b3098524b48d047;
  uVar8 = (~uRam0000000183361748 + 0x9a89f4d4549b8a3d) *
          ((uRam0000000183361760 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183361760 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam0000000183361bb8) + (uVar8 & uRam0000000183361bb8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833619b0 =
       func_0x00018d6ba060((uVar8 | 0x9a89f4d4d0b9a919) + (uVar8 & 0x9a89f4d4d0b9a919));
  uRam0000000183361598 =
       (uRam0000000183361598 ^ uRam00000001833619b0 ^ 0x9a89f4d4549b8a3c) + 0x65760b2bab6475c4 ^
       0x2989437524d52ea0;
  uRam0000000183361ae0 =
       (uRam0000000183361ae0 * -0x49d13b08d663d309 ^ uRam0000000183361598) +
       (uRam00000001833619b0 ^ 0x9a89f4d4549b8a3c);
  uRam0000000183361af0 = uRam0000000183361ae0 ^ uRam0000000183361598;
  uRam0000000183361578 = 0x65760b2bab6475c4;
  uRam0000000183361af8 = func_0x00018d6ba060(uRam0000000183361a60 ^ 0x2c5688b09d4b8842);
  uVar8 = uRam0000000183361af8 ^ 0x9a89f4d4549bffff;
  uRam0000000183361640 = uRam0000000183361c40 ^ uVar8 ^ 0x9a89f4d4549c0a3b;
  uRam00000001833615d0 = (uRam00000001833615d0 ^ uVar8) + 0x9a89f4d4549c0a3b ^ 0x4758054dfd9583d6;
  uRam0000000183361a10 = (uRam0000000183361a10 * -0x641fdcca2b90de9d ^ uRam00000001833615d0) + uVar8
  ;
  uRam0000000183361748 = uRam0000000183361a10 ^ uRam00000001833615d0;
  uRam0000000183361860 = 0x9a89f4d4549c0a3b;
  uRam0000000183361880 = func_0x00018d6ba060(lRam00000001833619f8 + 0xacb490f5d50e3a7eU ^ 7);
  uVar8 = uRam0000000183361880 & 0x1ffffffffffffff;
  uRam0000000183361708 = uRam00000001833615c0 ^ uVar8 ^ 0x7fff;
  uRam0000000183361a30 = (uRam0000000183361a30 ^ uVar8) + 0x7fff ^ 0x73d3324ade34cbbd;
  uRam0000000183361ca8 = (uRam0000000183361ca8 * 0x5876d9005e5a1195 ^ uRam0000000183361a30) + uVar8;
  uRam0000000183361660 = uRam0000000183361ca8 ^ uRam0000000183361a30;
  uRam0000000183361558 = 0x7fff;
  uRam0000000183361b10 = func_0x00018d6ba060(uRam0000000183361618 + 0x16cf1948d2e04934 ^ 0x77);
  uVar8 = (uRam0000000183361b10 << 0x15 | (uRam0000000183361b10 & 0x7fffffffffffffff) >> 0x2b) <<
          0x12 | (uRam0000000183361b10 & 0x7ffffffffff) >> 0x19;
  uRam0000000183361cf0 = (uRam0000000183361cf0 ^ uVar8) + 0x34c61e9603038b38 ^ 0x7d1a7b02132ef40a;
  uRam00000001833618f0 = (uRam00000001833618f0 * -0x2dc259e44e933a71 ^ uRam0000000183361cf0) + uVar8
  ;
  uRam0000000183361910 = uRam00000001833618f0 ^ uRam0000000183361cf0;
  uRam00000001833616c0 = 0x34c61e9603038b38;
  uVar8 = (~uRam0000000183361bb0 + 0xcb39e169fcfc74c9) *
          ((uRam0000000183361920 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183361920 & 0x84225cda) * 2);
  uVar8 = (uVar8 | uRam00000001833618f8) + (uVar8 & uRam00000001833618f8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183361680 =
       func_0x00018d6ba060((uVar8 | 0xcb39e16978de2812) + (uVar8 & 0xcb39e16978de2812));
  uVar8 = uRam0000000183361680 ^ 0xee42fc7dc19bfff0;
  uRam0000000183361c88 = uRam0000000183361730 ^ uVar8 ^ 0xcb39e169fcfcf4c7;
  uRam00000001833619a8 = (uRam00000001833619a8 ^ uVar8) + 0xcb39e169fcfcf4c7 ^ 0x4a4ff9f7cc04e42d;
  uRam0000000183361ad0 = (uRam0000000183361ad0 * 0x1c37500a0b3dd527 ^ uRam00000001833619a8) + uVar8;
  uRam0000000183361a40 = uRam0000000183361ad0 ^ uRam00000001833619a8;
  uRam0000000183361c10 = -0x34c61e9603030b39;
  uVar8 = (uRam00000001833616b8 ^ _UNK_182266190) + uRam00000001833616f0 + 0xcb39e16978ded7e2;
  uVar12 = (uRam00000001833616f0 ^ _UNK_182266198) + uRam00000001833616b8 + 0x34c61e9603038b38;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833616b8 ^ _UNK_182266190;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001833616f0 ^ _UNK_182266198;
  uRam0000000183361b40 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) -
                           (uRam00000001833616b8 + 0x34c61e9603038b38) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833616f0 + 0xcb39e16978ded7e2));
  uVar8 = uRam0000000183361b40 >> 1 | uRam0000000183361b40;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam0000000183361b40) & 0x1fffffffff;
  uRam0000000183361b90 = uRam0000000183361708 ^ uVar8 ^ 0x7fff;
  uRam00000001833619f0 = (uRam00000001833619f0 ^ uVar8) + 0x7fff ^ 0xf12b6dc60b2832c9;
  uRam0000000183361598 = (uRam0000000183361598 * -0x749aa3c256b6d8fd ^ uRam00000001833619f0) + uVar8
  ;
  uRam00000001833616b8 = uRam0000000183361598 ^ uRam00000001833619f0;
  uRam0000000183361b80 = 0x7fff;
  uRam0000000183361948 = func_0x00018d6ba060(uRam00000001833616f8 ^ 0x506f8d13180758ed);
  uRam0000000183361ad0 =
       (uRam0000000183361ad0 ^ uRam0000000183361948) + 0xc548f60868b54cf3 ^ 0xf9a30702f0a98ae7;
  uRam0000000183361890 =
       (uRam0000000183361890 * 0x4a006effae68b7d1 ^ uRam0000000183361ad0) + uRam0000000183361948;
  uRam0000000183361a58 = uRam0000000183361890 ^ uRam0000000183361ad0;
  uRam0000000183361708 = -0x3ab709f7974ab30d;
  uVar8 = (~uRam00000001833619d0 + 0x3ab709f7974ab30e) *
          ((uRam0000000183361c88 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183361c88 & 0x84225cda) * 2);
  uVar8 = (uVar8 | uRam0000000183361530) + (uVar8 & uRam0000000183361530);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183361520 =
       func_0x00018d6ba060((uVar8 | 0x3ab709f71368efd7) + (uVar8 & 0x3ab709f71368efd7));
  uVar8 = uRam0000000183361520 & 0x1ffffffff ^ 0x7fff;
  uRam0000000183361670 = uRam0000000183361938 ^ uVar8 ^ 0x3ab709f7974b330c;
  uRam00000001833615c0 = (uRam00000001833615c0 ^ uVar8) + 0x3ab709f7974b330c ^ 0x2edcf513665b704c;
  uRam0000000183361758 = (uRam0000000183361758 * -0x8f27660e6256a8b ^ uRam00000001833615c0) + uVar8;
  uRam0000000183361560 = uRam0000000183361758 ^ uRam00000001833615c0;
  uRam0000000183361578 = 0x3ab709f7974b330c;
  uRam0000000183361888 = func_0x00018d6ba060(uRam00000001833616c8 ^ 0xd1442f2846dacb2d);
  uVar12 = _UNK_1822661a8;
  uVar8 = _UNK_1822661a0;
  uVar6 = uRam0000000183361868 - (uRam0000000183361868 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183361868;
  uRam0000000183361918 = uRam00000001833617c0 ^ uVar6 ^ 0x7fff;
  uRam0000000183361810 = (uRam0000000183361810 ^ uVar6) + 0x7fff ^ 0x9ab9b77b443e6b94;
  uRam0000000183361990 = (uRam0000000183361990 * 0x5f61b97a7b697819 ^ uRam0000000183361810) + uVar6;
  uRam0000000183361840 = uRam0000000183361990 ^ uRam0000000183361810;
  uRam0000000183361900 = uRam0000000183361c90 ^ 0x7fff;
  uRam0000000183361850 = 0x7fff;
  uVar6 = (uRam0000000183361b78 ^ _UNK_1822661a0) + uRam00000001833617a0 + 0xbf5aafbfdadfded8;
  uVar13 = (uRam00000001833617a0 ^ _UNK_1822661a8) + uRam0000000183361b78 + 0x3b3098524b48d047;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183361b78 ^ _UNK_1822661a0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uRam00000001833617a0 ^ _UNK_1822661a8;
  uRam0000000183361808 =
       func_0x00018d6ba060((uVar13 << 0x1d | uVar13 >> 0x23) -
                           (uRam0000000183361b78 + 0x3b3098524b48d047) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001833617a0 + 0xbf5aafbfdadfded8));
  uVar13 = uRam0000000183361808 * -0x499885b59009b135;
  uVar6 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar13 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar13;
  uRam0000000183361698 = uRam0000000183361640 ^ uVar13 ^ 0xfa8b4811aa46ce44;
  uRam0000000183361b30 = (uRam0000000183361b30 ^ uVar13) + 0xfa8b4811aa46ce44 ^ 0xd1af97c96df5c766;
  uRam0000000183361950 = (uRam0000000183361950 * 0x6e5bf62284d76cad ^ uRam0000000183361b30) + uVar13
  ;
  uRam0000000183361bf0 = uRam0000000183361950 ^ uRam0000000183361b30;
  uRam0000000183361b28 = 0xfa8b4811aa46ce44;
  uVar6 = (uRam0000000183361760 ^ uVar8) + uRam00000001833619a8 + 0xbf5aafbfdadfded8;
  uVar13 = (uRam00000001833619a8 ^ uVar12) + uRam0000000183361760 + 0x3b3098524b48d047;
  uVar8 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183361760 ^ uVar8;
  uVar12 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uRam00000001833619a8 ^ uVar12;
  uRam0000000183361558 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) -
                           (uRam0000000183361760 + 0x3b3098524b48d047) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833619a8 + 0xbf5aafbfdadfded8));
  uVar8 = uRam0000000183361788 << 0x23 | uRam0000000183361788 >> 0x1d;
  uRam0000000183361738 = (uRam0000000183361738 ^ uVar8) + 0x846a37ed15b52dba ^ 0xd93a0fc9f35b71be;
  uRam0000000183361cb8 = (uRam0000000183361cb8 * -0x692fd8f6038ee9bd ^ uRam0000000183361738) + uVar8
  ;
  uRam0000000183361868 = uRam0000000183361cb8 ^ uRam0000000183361738;
  uRam00000001833617e0 = 0x846a37ed15b52dba;
  uRam0000000183361718 = func_0x00018d6ba060(uRam0000000183361890 + 0x13019a8e8f328f83 ^ 0xfd);
  uVar8 = (uRam0000000183361718 ^ 0x6a32ef2444f7012b) * -0x6ff3ab75e7fe54cb ^ 0x3b3098524b48d047;
  uVar8 = uVar8 << 0x36 | uVar8 >> 10;
  uRam00000001833615c0 = (uRam00000001833615c0 ^ uVar8) + 0x3b1088124a48d045 ^ 0x3753bee8933be7c6;
  uRam0000000183361b58 = (uRam0000000183361b58 * -0x23ccaea698ff5115 ^ uRam00000001833615c0) + uVar8
  ;
  uRam0000000183361888 = uRam0000000183361b58 ^ uRam00000001833615c0;
  uRam0000000183361878 = 0x3b1088124a48d045;
  uRam0000000183361b50 = func_0x00018d6ba060(uRam0000000183361ce0 ^ 0x486e47030cdcfec3);
  uVar8 = (uRam0000000183361b50 ^ 0x7ed95b5adba) << 0x1c |
          ((uRam0000000183361b50 ^ 0x7ed95b5adba) & 0x7ffffffffff) >> 0x24;
  uRam0000000183361b28 = uRam00000001833615b0 ^ uVar8 ^ 0xfa8b4811aa46ce44;
  uRam0000000183361510 = (uRam0000000183361510 ^ uVar8) + 0xfa8b4811aa46ce44 ^ 0x4a6b588c908e73cd;
  uRam0000000183361618 = (uRam0000000183361618 * -0x791155b0dc20ea99 ^ uRam0000000183361510) + uVar8
  ;
  uRam0000000183361758 = uRam0000000183361618 ^ uRam0000000183361510;
  uRam00000001833616e0 = 0xfa8b4811aa46ce44;
  uRam0000000183361a58 = func_0x00018d6ba060(uRam0000000183361580 + 0x1d007c22ffe1ff ^ 0xe7);
  uRam0000000183361958 = uRam0000000183361a58 ^ 0xfa8b4811aa46ce44;
  uRam00000001833615e0 = uRam00000001833615e0 ^ uRam0000000183361958 ^ 0xf6f17d9d82f1c80a;
  uRam0000000183361ad0 =
       (uRam0000000183361ad0 * 0x2e902a360d04be55 ^ uRam00000001833615e0) + uRam0000000183361958;
  uRam0000000183361990 = uRam0000000183361ad0 ^ uRam00000001833615e0;
  uRam00000001833619d8 = 0;
  uVar8 = ((uRam0000000183361a38 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183361a38 & 0x84225cda) * 2) * -uRam0000000183361908;
  uVar8 = (uVar8 | uRam0000000183361568) + (uVar8 & uRam0000000183361568);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183361658 =
       func_0x00018d6ba060((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uVar8 = uRam0000000183361658 >> 1 | uRam0000000183361658;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183361658;
  uRam0000000183361648 = uRam0000000183361530 ^ uVar8 ^ 0x7fff;
  uRam0000000183361810 = (uRam0000000183361810 ^ uVar8) + 0x7fff ^ 0x7a54363ef47f68d7;
  uRam0000000183361598 =
       (uRam0000000183361b50 * -0x23f4f430a61b06b5 ^ uRam0000000183361810) + uVar8 ^
       uRam0000000183361810;
  uRam0000000183361b50 = 0x7fff;
  uVar8 = (uRam0000000183361638 ^ _UNK_1822661b0) + uRam0000000183361c40 + 0xbf5aafbfdadfded8;
  uVar12 = (uRam0000000183361c40 ^ _UNK_1822661b8) + (uRam0000000183361638 - 1);
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361638 ^ _UNK_1822661b0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam0000000183361c40 ^ _UNK_1822661b8;
  uRam0000000183361610 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - (uRam0000000183361638 - 1) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183361c40 + 0xbf5aafbfdadfded8));
  uRam0000000183361cb8 =
       (uRam0000000183361cb8 ^ ~uRam0000000183361610 * 0x68f1724f8e2833ab) + 0x40a55040a1020202 ^
       0x289674365b02ce77;
  uRam0000000183361680 =
       (uRam0000000183361680 * 0x301851fe0e6fd35b ^ uRam0000000183361cb8) +
       ~uRam0000000183361610 * 0x68f1724f8e2833ab;
  uRam0000000183361a10 = uRam0000000183361680 ^ uRam0000000183361cb8;
  uRam0000000183361c20 = 0x40a55040a1020202;
  uVar8 = (uRam0000000183361788 ^ _UNK_1822661c0) + uRam0000000183361850 + 0xbf5aafbfdadfded8;
  uVar12 = (uRam0000000183361850 ^ _UNK_1822661c8) + uRam0000000183361788 + 0x40a55040a1020202;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361788 ^ _UNK_1822661c0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam0000000183361850 ^ _UNK_1822661c8;
  uRam0000000183361610 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) -
                           (uRam0000000183361788 + 0x40a55040a1020202) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183361850 + 0xbf5aafbfdadfded8));
  uRam0000000183361830 =
       uRam0000000183361830 ^ uRam0000000183361610 & 0xffffffff80000000 ^ 0x29f95cecc58b496b;
  uRam0000000183361c80 =
       (uRam0000000183361c80 * 0x6dbc823d97d4bb15 ^ uRam0000000183361830) +
       (uRam0000000183361610 & 0xffffffff80000000);
  uRam00000001833616a8 = uRam0000000183361c80 ^ uRam0000000183361830;
  uRam00000001833617d8 = 0;
  uVar8 = (uRam0000000183361c90 ^ 0x84225cda) + uRam00000001833617f0 + 0x84225cda;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361c90 ^ 0x84225cda;
  uVar12 = ((uRam00000001833617f0 + uRam0000000183361c90) * 0x2000 |
           uRam00000001833617f0 + uRam0000000183361c90 >> 0x33) ^ uRam00000001833617f0;
  uRam0000000183361ad8 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - uRam0000000183361c90 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833617f0 + 0x84225cda));
  uVar8 = uRam0000000183361ad8 << 2 | uRam0000000183361ad8 >> 0x3e;
  uRam0000000183361bc0 = uRam0000000183361730 ^ uVar8 ^ 0x7fff;
  uRam0000000183361b90 = (uRam0000000183361b90 ^ uVar8) + 0x7fff ^ 0x4c76f6a6cc0c4af1;
  uRam00000001833617f8 = (uRam00000001833617f8 * 0x6525f0f607cf9d91 ^ uRam0000000183361b90) + uVar8;
  uRam00000001833618c0 = uRam00000001833617f8 ^ uRam0000000183361b90;
  uRam00000001833617e8 = 0x7fff;
  uRam00000001833619c8 = func_0x00018d6ba060(uRam0000000183361908 ^ 0xffdcff83dcffdd66);
  auVar11 = _UNK_1800170c0;
  uVar12 = uRam00000001833619c8 ^ 0xd5aaf3c5e05fdb1;
  uVar8 = uVar12 >> 1 | uVar12;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar12;
  uRam0000000183361638 = uRam00000001833615e0 ^ uVar12 ^ 0x654d0f961e2c4dcb;
  uRam00000001833615e0 = (uRam00000001833615e0 * -0x5c0a31982d694ab ^ uRam0000000183361638) + uVar12
  ;
  uRam0000000183361638 = uRam00000001833615e0 ^ uRam0000000183361638;
  auVar9._8_8_ = _UNK_18019c088;
  auVar9._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183361798 = 0;
  auVar10 = pshufb(auVar9 ^ _UNK_1822661d0,_UNK_1800170c0);
  uVar12 = auVar10._8_8_ + auVar10._0_8_;
  uVar8 = uVar12 + uRam0000000183361918;
  if (auVar10._4_4_ < 0) {
    uVar8 = uRam0000000183361be0 ^ uVar12;
  }
  uRam00000001833618e8 = func_0x00018d6ba060(SUB161(auVar9 ^ _UNK_1822661d0,5) ^ uVar8);
  uVar8 = (~uRam00000001833618e8 & param_4) * -0x6898612bbf089979;
  uVar3 = (uint)param_4 & 0x7fff;
  uRam0000000183361520 = (ulonglong)uVar3;
  uRam0000000183361ae8 = (uRam0000000183361ae8 ^ uVar8) + uRam0000000183361520 ^ 0x5a5a46d8706a6830;
  uRam0000000183361700 = (uRam0000000183361700 * 0x2d6dfad7db8de6b9 ^ uRam0000000183361ae8) + uVar8;
  uRam0000000183361938 = uRam0000000183361700 ^ uRam0000000183361ae8;
  uVar3 = uVar3 ^ param_3;
  uVar8 = (~uRam0000000183361cf8 + 0xaaeacec) *
          ((uRam0000000183361be8 ^ 0x3825ed12) +
          (ulonglong)((uint)uRam0000000183361be8 & 0x3825ed12) * 2);
  uVar8 = (uVar8 | uRam0000000183361a18) + (uVar8 & uRam0000000183361a18);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833615a0 =
       func_0x00018d6ba060((uVar8 | 0x328b41f9) + (ulonglong)((uint)uVar8 & 0x328b41f9));
  uVar8 = (ulonglong)(((uint)uRam00000001833615a0 ^ 0x94068800) & 0xbc07c800);
  uRam0000000183361c40 = (uRam0000000183361c40 ^ uVar8) + 0xbeafeeff ^ 0x9c82915fbffb5ed0;
  uRam0000000183361558 = (uRam0000000183361558 * -0x5dcfae0fccfc6ebf ^ uRam0000000183361c40) + uVar8
  ;
  uRam0000000183361998 = uRam0000000183361558 ^ uRam0000000183361c40;
  uRam0000000183361860 = 0xbeafeeff;
  uVar8 = (uRam0000000183361620 ^ _UNK_1822661e0) + uRam00000001833617a0 + 0x9598d05a;
  uVar12 = (uRam00000001833617a0 ^ _UNK_1822661e8) + uRam0000000183361620 + 0x5a9d4bcd;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361620 ^ _UNK_1822661e0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001833617a0 ^ _UNK_1822661e8;
  uRam0000000183361b98 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - (uRam0000000183361620 + 0x5a9d4bcd) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833617a0 + 0x9598d05a));
  uRam0000000183361620 =
       (uRam0000000183361620 ^ uRam0000000183361b98 & 0x7fffffffffffffff) + 0x4b27b8b2 ^
       0x619f33fe4d19c214;
  uRam0000000183361618 =
       (uRam0000000183361618 * -0x44aa2b69d0e16825 ^ uRam0000000183361620) +
       (uRam0000000183361b98 & 0x7fffffffffffffff);
  uRam0000000183361620 = uRam0000000183361618 ^ uRam0000000183361620;
  uRam0000000183361b70 = 0x4b27b8b2;
  uVar8 = (uRam0000000183361820 ^ _UNK_1822661f0) + uRam00000001833617c0 + 0x84222325;
  uVar12 = (uRam00000001833617c0 ^ _UNK_1822661f8) + uRam0000000183361820 + 0x75bc00b6;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361820 ^ _UNK_1822661f0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001833617c0 ^ _UNK_1822661f8;
  uRam0000000183361b08 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - (uRam0000000183361820 + 0x75bc00b6) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833617c0 + 0x84222325));
  uRam0000000183361c78 =
       (uRam0000000183361c78 ^ uRam0000000183361b08 & 0x7ffffffffffff) - 0x75bc00b6 ^
       0xafe80acc256b9cb7;
  uRam0000000183361708 =
       (uRam0000000183361708 * 0x45ed5018c4b0c1d3 ^ uRam0000000183361c78) +
       (uRam0000000183361b08 & 0x7ffffffffffff);
  uRam0000000183361788 = uRam0000000183361708 ^ uRam0000000183361c78;
  uRam00000001833617a0 = 0x8a43ff4a;
  uRam0000000183361510 = func_0x00018d6ba060(uRam0000000183361738 ^ 0x60ff8f18ff854d);
  uVar8 = uRam0000000183361510 ^ 0x75bc40be;
  uRam0000000183361818 = uRam0000000183361630 ^ uVar8 ^ 0x75bc415e;
  uRam0000000183361c00 = (uRam0000000183361c00 ^ uVar8) + 0x75bc415e ^ 0xfac10deccda5439f;
  uRam0000000183361bb0 = (uRam0000000183361bb0 * -0x33faf4b80cb02ec7 ^ uRam0000000183361c00) + uVar8
  ;
  uRam0000000183361888 = uRam0000000183361bb0 ^ uRam0000000183361c00;
  uRam0000000183361b68 = 0x75bc415e;
  uVar8 = (~uRam0000000183361878 + 0x8a43ff4b) *
          ((uRam0000000183361a68 ^ 0xf19e627b) +
          (ulonglong)((uint)uRam0000000183361a68 & 0xf19e627b) * 2);
  uVar8 = (uVar8 | uRam0000000183361cb8) + (uVar8 & uRam0000000183361cb8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183361c48 =
       func_0x00018d6ba060((uVar8 | 0x7bdd9d31) + (ulonglong)((uint)uVar8 & 0x7bdd9d31));
  uVar8 = uRam0000000183361c48 & 0x7fffffffffffffff;
  uRam0000000183361720 = uRam0000000183361a88 ^ uVar8 ^ 0x1000040a8;
  uRam0000000183361518 = (uRam0000000183361518 ^ uVar8) + 0x1000040a8 ^ 0x983f06ce5e55fe1e;
  uRam0000000183361860 = (uRam0000000183361860 * 0x137421f90a590eff ^ uRam0000000183361518) + uVar8;
  uRam0000000183361ca0 = uRam0000000183361860 ^ uRam0000000183361518;
  uRam0000000183361b28 = 0x40a8;
  uRam00000001833616e8 = func_0x00018d6ba060(uRam0000000183361758 + 0x78ffbcf4ffc9ff ^ 0x30);
  uRam0000000183361580 =
       (uRam0000000183361580 ^ uRam00000001833616e8 & 0xffffffffffff0000) - 0x49ecb8da ^
       0xa8c06146ec92087d;
  uRam0000000183361c10 =
       (uRam0000000183361c10 * -0x3bee3efbe959ffb5 ^ uRam0000000183361580) +
       (uRam00000001833616e8 & 0xffffffffffff0000);
  uRam00000001833618c8 = uRam0000000183361c10 ^ uRam0000000183361580;
  uRam0000000183361af0 = 0xb6134726;
  uVar8 = (uRam0000000183361898 ^ _UNK_182266200) + uRam0000000183361a78 + 0x8422638d;
  uVar12 = (uRam0000000183361a78 ^ _UNK_182266208) + uRam0000000183361898 + 0x49ecb8da;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361898 ^ _UNK_182266200;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam0000000183361a78 ^ _UNK_182266208;
  uRam0000000183361798 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - (uRam0000000183361898 + 0x49ecb8da) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183361a78 + 0x8422638d));
  uRam0000000183361ab8 = uRam00000001833617d8 ^ uRam0000000183361798 ^ 0x49ecf982;
  uRam0000000183361660 =
       (uRam0000000183361660 ^ uRam0000000183361798) + 0x49ecf982 ^ 0x943ada4232c0b652;
  uRam0000000183361cc8 =
       (uRam0000000183361cc8 * -0x20854699939be8b3 ^ uRam0000000183361660) + uRam0000000183361798;
  uRam0000000183361818 = uRam0000000183361cc8 ^ uRam0000000183361660;
  uRam0000000183361600 = 0x49ecf982;
  uVar8 = (~uRam0000000183361858 + 0xb6134727) *
          ((uRam0000000183361b50 ^ 0xcdcedaa7) +
          (ulonglong)((uint)uRam0000000183361b50 & 0xcdcedaa7) * 2);
  uVar8 = (uVar8 | uRam0000000183361a10) + (uVar8 & uRam0000000183361a10);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183361b40 =
       func_0x00018d6ba060((uVar8 | 0x7bdd9d81) + (ulonglong)((uint)uVar8 & 0x7bdd9d81));
  uRam00000001833616e8 = uRam0000000183361950 ^ uRam0000000183361b40 ^ 0x1000040a8;
  uRam0000000183361638 =
       (uRam0000000183361638 ^ uRam0000000183361b40) + 0x1000040a8 ^ 0x4301247c48869625;
  uRam0000000183361b40 =
       (uRam0000000183361b40 * -0x5e2e7db1a60849d9 ^ uRam0000000183361638) + uRam0000000183361b40;
  uRam0000000183361a00 = uRam0000000183361b40 ^ uRam0000000183361638;
  uRam0000000183361920 = 0x40a8;
  uVar8 = (uRam00000001833615f0 ^ _UNK_182266210) + uRam0000000183361890 + 0x84222325;
  uVar12 = (uRam0000000183361890 ^ _UNK_182266218) + uRam00000001833615f0 + 0xfa017a1;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833615f0 ^ _UNK_182266210;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam0000000183361890 ^ _UNK_182266218;
  uRam0000000183361928 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - (uRam00000001833615f0 + 0xfa017a1) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183361890 + 0x84222325));
  uRam00000001833618c8 =
       (uRam00000001833618c8 ^ uRam0000000183361b08) - 0xfa017a1 ^ 0x771ae31efc7da2fa;
  uRam0000000183361c58 =
       (uRam0000000183361c58 * 0x70dfdca48ab38997 ^ uRam00000001833618c8) + uRam0000000183361b08;
  uRam00000001833619a8 = uRam0000000183361c58 ^ uRam00000001833618c8;
  uRam0000000183361c10 = 0xf05fe85f;
  uRam0000000183361b38 = func_0x00018d6ba060(lRam00000001833618b8 + 0x73ff74ec007dffU ^ 0xb2);
  uVar8 = (uRam0000000183361b38 ^ 0x3f246f7c1a8) & 0x7fffffffffffffff ^ 0x40a8;
  uRam0000000183361710 = uRam0000000183361ae8 ^ uVar8 ^ 0xfa05849;
  uRam0000000183361c30 = (uRam0000000183361c30 ^ uVar8) + 0xfa05849 ^ 0x8de16b206b98566a;
  uRam00000001833619f0 = (uRam00000001833619f0 * 0x16a0aa8974264415 ^ uRam0000000183361c30) + uVar8;
  uRam0000000183361830 = uRam00000001833619f0 ^ uRam0000000183361c30;
  uRam0000000183361a18 = 0xfa05849;
  uVar8 = (~uRam0000000183361b90 + 0xf05fe860) *
          ((uRam0000000183361b90 ^ 0x8b827b6c) +
          (ulonglong)((uint)uRam0000000183361b90 & 0x8b827b6c) * 2);
  uVar8 = (uVar8 | uRam0000000183361660) + (uVar8 & uRam0000000183361660);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833617b8 =
       func_0x00018d6ba060((uVar8 | 0x7bdd9333) + (ulonglong)((uint)uVar8 & 0x7bdd9333));
  uVar8 = uRam00000001833617b8 & 0xfffffffffff80000;
  uRam0000000183361920 = uRam0000000183361740 ^ uVar8 ^ 0x1000040a8;
  uRam0000000183361680 = (uRam0000000183361680 ^ uVar8) + 0x1000040a8 ^ 0xcb96590c467ed487;
  uRam0000000183361cc8 = (uRam0000000183361cc8 * 0x16abdfa90fe3838f ^ uRam0000000183361680) + uVar8;
  uRam00000001833615f8 = uRam0000000183361cc8 ^ uRam0000000183361680;
  uRam0000000183361658 = 0x40a8;
  uRam0000000183361b70 = func_0x00018d6ba060(uRam0000000183361c50 + 0xffed0070a80055ff ^ 0x61);
  uVar4 = (uint)uRam0000000183361b70 & 0xbeafeeff;
  uVar8 = (ulonglong)uVar4 - (ulonglong)((uint)(uRam0000000183361b70 >> 1) & 0x55555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ uVar4;
  uVar8 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          (ulonglong)uVar4;
  uRam0000000183361670 = uRam0000000183361778 ^ uVar8 ^ 0x109d7a7b1;
  uRam0000000183361600 = (uRam0000000183361600 ^ uVar8) + 0x109d7a7b1 ^ 0xee610175ca147f67;
  uRam0000000183361500 = (uRam0000000183361500 * 0x696e15274028927b ^ uRam0000000183361600) + uVar8;
  uRam0000000183361980 = uRam0000000183361500 ^ uRam0000000183361600;
  uRam00000001833618c0 = 0x9d7a7b1;
  uRam0000000183361b38 = func_0x00018d6ba060(lRam00000001833618d8 + 0x6b0011180055ffU ^ 0x6f);
  uVar8 = uRam0000000183361b38 ^ 0xffaffeff;
  uVar8 = (uVar8 << 0x2d | uVar8 >> 0x13) << 7 | (uVar8 & 0x7ffff) >> 0xc;
  uRam0000000183361ab8 = (uRam0000000183361ab8 ^ uVar8) + 0xf588564d ^ 0x19ffca48ec691d35;
  uRam0000000183361bc0 = (uRam0000000183361bc0 * -0x73a36ee985e9d07b ^ uRam0000000183361ab8) + uVar8
  ;
  uRam0000000183361bf0 = uRam0000000183361bc0 ^ uRam0000000183361ab8;
  uRam0000000183361988 = 0xf588564d;
  uRam0000000183361780 = func_0x00018d6ba060(lRam0000000183361b20 + 0xd002ed7ff99ffU ^ 0x66);
  uVar12 = uRam0000000183361780 ^ 0x37fb216527f4754e;
  uVar8 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x37 ^ uVar12) &
          0xfffffffffffffffe;
  uRam0000000183361c50 = (uRam0000000183361c50 ^ uVar8) + 0xa27a8b2 ^ 0x43111b6a8598ff78;
  uRam0000000183361b40 = (uRam0000000183361b40 * 0x77be0a642199e3e1 ^ uRam0000000183361c50) + uVar8;
  uRam0000000183361cf0 = uRam0000000183361b40 ^ uRam0000000183361c50;
  uRam0000000183361c80 = 0xa27a8b2;
  uVar8 = (uRam0000000183361808 ^ _UNK_182266220) + uRam0000000183361580 + 0x71aa7568;
  uVar12 = (uRam0000000183361580 ^ _UNK_182266228) + uRam0000000183361808 + 0x144f5164;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361808 ^ _UNK_182266220;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam0000000183361580 ^ _UNK_182266228;
  uRam0000000183361768 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - (uRam0000000183361808 + 0x144f5164) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183361580 + 0x71aa7568));
  uVar8 = uRam0000000183361768 ^ 0xf588564d;
  uRam0000000183361848 = uRam00000001833615c0 ^ uVar8 ^ 0x109d7a7b1;
  uRam0000000183361a20 = (uRam0000000183361a20 ^ uVar8) + 0x109d7a7b1 ^ 0xaa016d0269800f66;
  uRam0000000183361c50 = (uRam0000000183361c50 * -0x20cdc028e240c845 ^ uRam0000000183361a20) + uVar8
  ;
  uRam0000000183361af8 = uRam0000000183361c50 ^ uRam0000000183361a20;
  uRam0000000183361690 = 0x9d7a7b1;
  uVar8 = ((uRam0000000183361818 ^ 0x8422638d) +
          (ulonglong)((uint)uRam0000000183361818 & 0x8422638d) * 2) * -lRam0000000183361870;
  uVar8 = (uVar8 | uRam0000000183361ad0) + (uVar8 & uRam0000000183361ad0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183361580 =
       func_0x00018d6ba060((uVar8 | 0x8422638d) + (ulonglong)((uint)uVar8 & 0x8422638d));
  uVar8 = uRam0000000183361580 - (uRam0000000183361580 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183361580;
  uRam00000001833615d8 = uRam0000000183361ad0 ^ uVar8 ^ 0x40a8;
  uRam00000001833618b0 = (uRam00000001833618b0 ^ uVar8) + 0x40a8 ^ 0x8a70650b25b7050c;
  uRam0000000183361a70 = (uRam0000000183361a70 * 0x4f84c0e816fa95d7 ^ uRam00000001833618b0) + uVar8;
  uRam0000000183361cb0 = uRam0000000183361a70 ^ uRam00000001833618b0;
  uRam0000000183361a88 = 0x40a8;
  uRam00000001833618d0 = func_0x00018d6ba060(uRam0000000183361688 ^ 0xfff200c4e5005161);
  uRam0000000183361ae0 =
       (uRam0000000183361ae0 ^ uRam00000001833618d0 & 0xfffffffffff00000) + 0x41501100 ^
       0xbc744881a7b7a89c;
  uRam0000000183361928 =
       (uRam0000000183361928 * 0x4aa04a8498d34d73 ^ uRam0000000183361ae0) +
       (uRam00000001833618d0 & 0xfffffffffff00000);
  uRam0000000183361ae0 = uRam0000000183361928 ^ uRam0000000183361ae0;
  uRam00000001833617b0 = 0x41501100;
  uRam0000000183361748 = func_0x00018d6ba060(uRam0000000183361860 + 0xff3bff94b9ff2aff ^ 0xa1);
  uVar5 = (uint)uRam0000000183361748 & 0xbeafeeff;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar8 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          (ulonglong)uVar5;
  uRam00000001833617c8 = uRam00000001833617c8 ^ uVar8 ^ 0x97a08ab4d95aea2e;
  uRam0000000183361630 = (uRam0000000183361630 * -0x1c06fe10d3b27f97 ^ uRam00000001833617c8) + uVar8
  ;
  uRam0000000183361cc0 = uRam0000000183361630 ^ uRam00000001833617c8;
  uRam0000000183361908 = 0;
  uVar8 = (uRam0000000183361bb8 ^ 0x8422638d) + uRam0000000183361790 + 0x8422638d;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361bb8 ^ 0x8422638d;
  uVar12 = ((uRam0000000183361790 + uRam0000000183361bb8) * 0x2000 |
           uRam0000000183361790 + uRam0000000183361bb8 >> 0x33) ^ uRam0000000183361790;
  uVar8 = func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - uRam0000000183361bb8 ^
                              (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183361790 + 0x8422638d))
  ;
  uRam0000000183361c08 = (uVar8 & 0xffffffffffff0000) << 0x15 | uVar8 >> 0x2b;
  uRam0000000183361650 = uRam0000000183361528 ^ uRam0000000183361c08 ^ 0x40a8;
  uRam00000001833618a0 = (uRam00000001833618a0 ^ uRam0000000183361c08) + 0x40a8 ^ 0xff2430c996550b14
  ;
  uRam0000000183361c08 = (uVar8 * -0x1e84aa16410b3ab7 ^ uRam00000001833618a0) + uRam0000000183361c08
  ;
  uRam0000000183361c18 = uRam0000000183361c08 ^ uRam00000001833618a0;
  uRam0000000183361cb0 = 0x40a8;
  uVar8 = (uRam0000000183361aa8 ^ _UNK_182266230) + uRam0000000183361858 + 0x3825ed12;
  uVar12 = (uRam0000000183361858 ^ _UNK_182266238) + uRam0000000183361aa8 + 0xbc07ce37;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183361aa8 ^ _UNK_182266230;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam0000000183361858 ^ _UNK_182266238;
  lRam0000000183361678 =
       func_0x00018d6ba060((uVar12 << 0x1d | uVar12 >> 0x23) - (uRam0000000183361aa8 + 0xbc07ce37) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183361858 + 0x3825ed12));
  uVar8 = lRam0000000183361678 * -0x6869707edada9869 ^ 0xbc07ce37;
  uRam0000000183361cb8 = uRam0000000183361cb8 ^ uVar8 ^ 0x37854d5ddc9498f9;
  uRam0000000183361cd0 = (uRam0000000183361cd0 * 0x7c61e6ea05d679d3 ^ uRam0000000183361cb8) + uVar8;
  uRam0000000183361610 = uRam0000000183361cd0 ^ uRam0000000183361cb8;
  uRam0000000183361780 = 0;
  uVar8 = ((uRam0000000183361720 ^ 0x8422638d) +
          (ulonglong)((uint)uRam0000000183361720 & 0x8422638d) * 2) * -uRam0000000183361660;
  uVar8 = (uVar8 | uRam0000000183361700) + (uVar8 & uRam0000000183361700);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183361b10 =
       func_0x00018d6ba060((uVar8 | 0x8422638d) + (ulonglong)((uint)uVar8 & 0x8422638d));
  uVar8 = ((uRam0000000183361b10 ^ 0x40a8) << 0xb | uRam0000000183361b10 >> 0x35) *
          -0x20033227e1b12c6d;
  uVar12 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar8;
  uRam0000000183361a58 = uRam00000001833617e8 ^ uVar8 ^ 0x40a8;
  uRam0000000183361898 = (uRam0000000183361898 ^ uVar8) + 0x40a8 ^ 0x53588a0256745d71;
  uRam0000000183361910 = (uRam0000000183361910 * -0x33e9fd4792d3273d ^ uRam0000000183361898) + uVar8
  ;
  uRam0000000183361610 = uRam0000000183361910 ^ uRam0000000183361898;
  uVar12 = (ulonglong)uVar3;
  auVar10._8_8_ = _UNK_182266248;
  auVar10._0_8_ = uVar12 ^ 0x84222325;
  uRam00000001833616f8 = 0x40a8;
  auVar11 = pshufb(auVar10 ^ _UNK_182266250,auVar11);
  uVar6 = auVar11._8_8_ + auVar11._0_8_;
  uVar8 = uVar6 + uRam0000000183361740;
  if (auVar11._4_4_ < 0) {
    uVar8 = uRam0000000183361cb8 ^ uVar6;
  }
  uRam0000000183361a28 = func_0x00018d6ba060(SUB161(auVar10 ^ _UNK_182266250,5) ^ uVar8);
  uVar8 = (uVar12 ^ ((uVar12 | 0x40a8) ^ uRam0000000183361a28) & 0x7fffffffffffffff) & 0x3ffffffff;
  lVar7 = uVar12 - (uVar3 & 0x40a8) * 2;
  uRam0000000183361730 = (uRam0000000183361730 ^ uVar8) + lVar7 + 0x40a8 ^ 0xa5264f6577043987;
  uRam0000000183361978 = (uRam0000000183361978 * -0x239d71e1fe957965 ^ uRam0000000183361730) + uVar8
  ;
  uRam0000000183361c60 = uRam0000000183361978 ^ uRam0000000183361730;
  uRam0000000183361600 = lVar7 + 0x40a8U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc377,0x218);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d6b1976 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182264330 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ed; arG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d6ba0f0, runtime 6ffff52ca0f0) =====

void FUN_18d6ba0f0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d6ba13b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182266350 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ed; arH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d6bb100, runtime 6ffff52cb100) =====

void FUN_18d6bb100(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d6bb189 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182266910 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



