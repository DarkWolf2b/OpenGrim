// ===== STITCHED CORPUS: sixtwo.ed =====
// handlers: 9  continuation blocks: 81  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x19c088', '0x1ec418', '0x225e810', '0x225ef78', '0x225ef88', '0x225ef98', '0x225efa8', '0x225efb8', '0x225efc8', '0x225efd8', '0x225efe8', '0x225eff8', '0x225f008', '0x225f018', '0x225f028', '0x225f5d8', '0x225f5e8', '0x225f5f8', '0x225f608']

// ===== Lsixtwo/ed; _a79940e05944d2ef07f1382edf83c8fc ()V (handler @ image 18d6bde10, runtime 6ffff52cde10) =====

void FUN_18d6bde10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc377,0x218)
      /* POOL[0xc377,0x218]: thod_1024 | SRuur | Ljava/util/Set; | sixtwo/ed | PQbtp | sixtwo/iY | method_5836 | bxZ | arD | method_1021 | (D)Lnet/minecraft/class_243; | net/minecraft/class_2350 | field_11036 | Lnet/minecraft/class_2350; | (Lnet/minecraft/class_243;Lnet/minecraft/class_2350;Lnet/minecraft/class_2338;Z)V | method_2896 | (Lnet/minecraft/class_746;Lnet/minecraft/class_1268;Lnet/minecraft/class_3965;)Lnet/minecraft/class_1269; | BpiUS | HfVsU | RqWGM | fokqH | TVqrW | arF | sixtwo/ef | DBoNw | IrgCI | cprxo | XgLBB | aso | arE | method_31549 | ()Lnet/minecraft/class_1656; | net/minecraft/class_1656 | field_74 */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc377,0x218)
      /* POOL[0xc377,0x218]: thod_1024 | SRuur | Ljava/util/Set; | sixtwo/ed | PQbtp | sixtwo/iY | method_5836 | bxZ | arD | method_1021 | (D)Lnet/minecraft/class_243; | net/minecraft/class_2350 | field_11036 | Lnet/minecraft/class_2350; | (Lnet/minecraft/class_243;Lnet/minecraft/class_2350;Lnet/minecraft/class_2338;Z)V | method_2896 | (Lnet/minecraft/class_746;Lnet/minecraft/class_1268;Lnet/minecraft/class_3965;)Lnet/minecraft/class_1269; | BpiUS | HfVsU | RqWGM | fokqH | TVqrW | arF | sixtwo/ef | DBoNw | IrgCI | cprxo | XgLBB | aso | arE | method_31549 | ()Lnet/minecraft/class_1656; | net/minecraft/class_1656 | field_74 */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d6bb189 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182266910 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xd55d8ac -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d55d8ac(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x1f0);
  FUN_190ddce00(plVar1,unaff_RBP + 0x1e0,*_DAT_18301ee50 + 0xc381,*_DAT_18301ee50 + 0x8e,0x7b0);
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x1f0));
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd56187b -----

void FUN_18d56187b(void)

{
  return;
}


// ----- block @ rva 0xd56e258 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d56e258(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x1f0);
  FUN_190de3220(plVar1,unaff_RBP + 0x1e0,*_DAT_18301ee50 + 0x42e,*_DAT_18301ee50 + 0x441,0x14);
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x1f0));
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd586ee7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d586f3f */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d586ee7(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x1f0);
  FUN_184117d50(plVar1,*(undefined8 *)(unaff_RBP + 0x1e0));
  (**(code **)(plVar1 + JNI->SetObjectArrayElement /*0x570*/))(plVar1);
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x1f0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd59a22c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d59a27c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d59a22c(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x1f0);
  uVar2 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x299,0xf);
  *(undefined8 *)(unaff_RBP + 0x1d8) = uVar2;
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x1f0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd5cd84f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d5cd8ad */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d5cd84f(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x1f0);
  FUN_190de3220(plVar1,unaff_RBP + 0x1e0,*_DAT_18301ee50 + 0x488,*_DAT_18301ee50 + 0x490,0x15);
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x1f0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd5ea13e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d5ea159 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d5ea13e(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x1f0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd654d87 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d654de5 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d654d87(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x1f0);
  FUN_190de3220(plVar1,unaff_RBP + 0x1e0,*_DAT_18301ee50 + 0x42e,*_DAT_18301ee50 + 0x441,0x14);
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x1f0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd657339 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d657362 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d657339(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x1d0) = in_RAX;
  (**(code **)(**(longlong **)(unaff_RBP + 0x1f0) + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd682ef3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d682ef3(void)

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


// ----- block @ rva 0xd682f2c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d682f2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18225e268)();
  return;
}


// ----- block @ rva 0xd682f66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d682f66(void)

{
  FUN_190dd72e0();
  (*_DAT_18225e218)();
  return;
}


// ----- block @ rva 0xd682f8e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d682f8e(void)

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


// ----- block @ rva 0xd682faf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d682faf(void)

{
  FUN_190dd9df0();
  (*_DAT_18225e278)();
  return;
}


// ----- block @ rva 0xd683006 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d683006(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18225e228)();
  return;
}


// ----- block @ rva 0xd68302d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d68302d(void)

{
  (*_DAT_18225e248)();
  return;
}


// ----- block @ rva 0xd68303e -----

void FUN_18d68303e(void)

{
  return;
}


// ----- block @ rva 0xd683046 -----

void FUN_18d683046(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xd6830f3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6830f3(void)

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


// ----- block @ rva 0xd683151 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d683151(void)

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


// ----- block @ rva 0xd683166 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d683166(void)

{
  FUN_190dd72e0();
  (*_DAT_18225e2e8)();
  return;
}


// ----- block @ rva 0xd68318e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d68318e(void)

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


// ----- block @ rva 0xd6831af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6831af(void)

{
  FUN_190dd9df0();
  (*_DAT_18225e348)();
  return;
}


// ----- block @ rva 0xd683206 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d683206(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18225e318)();
  return;
}


// ----- block @ rva 0xd68322d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d68322d(void)

{
  (*_DAT_18225e308)();
  return;
}


// ----- block @ rva 0xd68323e -----

void FUN_18d68323e(void)

{
  return;
}


// ----- block @ rva 0xd683246 -----

void FUN_18d683246(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xd683403 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d68343a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d683403(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd68343d -----

undefined8 FUN_18d68343d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xd683458 -----

void FUN_18d683458(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x40) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018d683488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18225e810 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xd684c2a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d684c2a(ulonglong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  longlong in_RAX;
  ulonglong in_RCX;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  undefined1 auVar11 [16];
  uint uVar13;
  uint uVar14;
  uint unaff_XMM7_Da;
  ulonglong unaff_XMM13_Qa;
  uint unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  
  uVar10 = param_1 + param_2 + in_RCX;
  uVar12 = (in_RCX ^ 0xa4c68f7e983ba80e) + in_RAX + -0x5b39708167c457f2;
  param_1 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ param_1;
  uVar10 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ in_RCX ^ 0xa4c68f7e983ba80e;
  _DAT_1833608d8 =
       func_0x00018d6aed00((uVar10 << 0x1d | uVar10 >> 0x23) - (in_RAX + -0x5b39708167c457f2) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (param_2 + in_RCX));
  _DAT_183360bc0 =
       (_DAT_183360bc0 ^ _DAT_1833608d8 ^ 0xbb1934c02b2af1bb) + 0x1fdfbbbeb31159b5 ^
       0xf7e965a0048910a9;
  _DAT_183360a40 =
       (_DAT_183360a40 * -0x7b38fda7dcd6f121 ^ _DAT_183360bc0) +
       (_DAT_1833608d8 ^ 0xbb1934c02b2af1bb);
  _DAT_183360710 = _DAT_183360a40 ^ _DAT_183360bc0;
  _DAT_183360960 = 0x1fdfbbbeb31159b5;
  uVar10 = (_DAT_1833609b8 ^ _DAT_18225f5d0) + _DAT_183360c68 + 0x84222325;
  uVar12 = (_DAT_183360c68 ^ _UNK_18225f5d8) + _DAT_1833609b8 + 0xee15bbb750c048d8;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833609b8 ^ _DAT_18225f5d0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360c68 ^ _UNK_18225f5d8;
  _DAT_183360898 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833609b8 + 0xee15bbb750c048d8)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183360c68 + 0x84222325));
  _DAT_1833607f0 =
       (_DAT_1833607f0 ^ _DAT_183360898 & 0x7fffffffffffff) + 0x11ea4448af3fb728 ^
       0xdafcfbd3f30e4a97;
  _DAT_183360c20 =
       (_DAT_183360c20 * 0x5f6b8f43d70666a9 ^ _DAT_1833607f0) + (_DAT_183360898 & 0x7fffffffffffff);
  _DAT_183360c08 = _DAT_183360c20 ^ _DAT_1833607f0;
  _DAT_183360b10 = 0x11ea4448af3fb728;
  _DAT_1833608e8 = func_0x00018d6aed00(_DAT_183360a30 ^ 0x13432a86a9b9ccc8);
  uVar10 = ((_DAT_1833608e8 ^ 0xd1ef04aa48c65b70) >> 5 & 0x3fffffffffffff) << 1 |
           ((_DAT_1833608e8 ^ 0xd1ef04aa48c65b70) & 0x1f) >> 4;
  _DAT_183360c40 = _DAT_183360718 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_183360958 = (_DAT_183360958 ^ uVar10) - 2 ^ 0x811f505236d00101;
  _DAT_183360790 = (_DAT_183360790 * -0x1b5b67dbc8278423 ^ _DAT_183360958) + uVar10;
  _DAT_1833608d8 = _DAT_183360790 ^ _DAT_183360958;
  _DAT_183360a10 = -2;
  uVar10 = (_DAT_1833607d0 ^ _DAT_18225f5e0) + (_DAT_183360998 - 0x84222325);
  uVar12 = (_DAT_183360998 ^ _UNK_18225f5e8) + _DAT_1833607d0 + 0xb31f0dafdf53973f;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833607d0 ^ _DAT_18225f5e0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360998 ^ _UNK_18225f5e8;
  _DAT_183360b38 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833607d0 + 0xb31f0dafdf53973f)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183360998 - 0x84222325));
  uVar10 = _DAT_183360b38 & 0x7fffffffffffffff;
  _DAT_183360a68 = _DAT_183360858 ^ uVar10 ^ 0xb31f0dafdf53973d;
  _DAT_1833609c8 = (_DAT_1833609c8 ^ uVar10) + 0xb31f0dafdf53973d ^ 0x3da87404a1c78af2;
  _DAT_1833608b8 = (_DAT_1833608b8 * -0x6e0221deab3e78a7 ^ _DAT_1833609c8) + uVar10;
  _DAT_183360b08 = _DAT_1833608b8 ^ _DAT_1833609c8;
  _DAT_183360858 = 0xb31f0dafdf53973d;
  uVar10 = (_DAT_183360a58 ^ _DAT_18225f5f0) + _DAT_183360be0 + 0xb31f0daf5b71b418;
  uVar12 = (_DAT_183360be0 ^ _UNK_18225f5f8) + _DAT_183360a58 + 0x4ce0f25020ac68c1;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360a58 ^ _DAT_18225f5f0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360be0 ^ _UNK_18225f5f8;
  _DAT_183360780 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360a58 + 0x4ce0f25020ac68c1)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_183360be0 + 0xb31f0daf5b71b418));
  uVar10 = _DAT_183360780 >> 1 | _DAT_183360780;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           _DAT_183360780;
  _DAT_183360710 = _DAT_183360850 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1833608a8 = (_DAT_1833608a8 ^ uVar10) - 2 ^ 0xb9c6fdb28d628452;
  _DAT_183360c88 = (_DAT_183360c88 * -0x1d541263d1b1f39 ^ _DAT_1833608a8) + uVar10;
  _DAT_1833609e0 = _DAT_183360c88 ^ _DAT_1833608a8;
  _DAT_183360b78 = 0xfffffffffffffffe;
  _DAT_183360710 = func_0x00018d6aed00(_DAT_183360840 + 0xf624282df0c758b5 ^ 5);
  uVar10 = (_DAT_183360710 ^ 0x5658381ab6f90f34) << 4 |
           (_DAT_183360710 ^ 0x5658381ab6f90f34) >> 0x3c;
  _DAT_183360760 = (_DAT_183360760 ^ uVar10) + 0xa9a7c7e54906f0cc ^ 0x4dfcb52777ad315;
  _DAT_183360ab8 = (_DAT_183360ab8 * 0x2bf0b9df128f191d ^ _DAT_183360760) + uVar10;
  _DAT_183360a50 = _DAT_183360ab8 ^ _DAT_183360760;
  _DAT_183360cf0 = 0xa9a7c7e54906f0cc;
  _DAT_1833609d0 = func_0x00018d6aed00(_DAT_183360c58 ^ 0x24b358ba99411c04);
  uVar10 = _DAT_1833609d0 & 0x7fffffffffffffff ^ 0xfffffffffffffffe;
  _DAT_183360820 = _DAT_183360b60 ^ uVar10 ^ 0x5658381ab6f90f32;
  _DAT_183360700 = (_DAT_183360700 ^ uVar10) + 0x5658381ab6f90f32 ^ 0xfe170ce1efaa6b8e;
  _DAT_183360c40 = (_DAT_183360c40 * -0x727d7139ac5933d1 ^ _DAT_183360700) + uVar10;
  _DAT_183360840 = _DAT_183360c40 ^ _DAT_183360700;
  _DAT_183360928 = 0x5658381ab6f90f32;
  uVar10 = (_DAT_183360ba0 ^ _DAT_18225f600) + _DAT_183360b50 + 0x5658381a32db2c17;
  uVar12 = (_DAT_183360b50 ^ _UNK_18225f608) + _DAT_183360ba0 + 0xa9a7c7e54906f0cc;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360ba0 ^ _DAT_18225f600;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360b50 ^ _UNK_18225f608;
  _DAT_183360bc8 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360ba0 + 0xa9a7c7e54906f0cc)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_183360b50 + 0x5658381a32db2c17));
  uVar10 = (_DAT_183360bc8 ^ 0xa4eb85b8e9e2fbd8) -
           ((_DAT_183360bc8 ^ 0xa4eb85b8e9e2fbd8) >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = _DAT_183360bc8 ^ 0xf2b3bda25f1bf4ea ^
           (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4;
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar10;
  _DAT_183360b68 = _DAT_183360aa0 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_183360888 = (_DAT_183360888 ^ uVar10) - 2 ^ 0x5d94f8d6c986507;
  _DAT_183360a90 = (_DAT_183360a90 * -0x539803a4b7fa61cf ^ _DAT_183360888) + uVar10;
  _DAT_183360a50 = _DAT_183360a90 ^ _DAT_183360888;
  _DAT_183360c28 = 0xfffffffffffffffe;
  uVar10 = (_DAT_183360820 ^ _DAT_18225f610) + _DAT_1833607a0 + 0xdeefcfed7ad9ce52;
  uVar12 = (_DAT_1833607a0 ^ _UNK_18225f618) + _DAT_183360820 + 0x1fdfbbbeb31159b5;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360820 ^ _DAT_18225f610;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833607a0 ^ _UNK_18225f618;
  _DAT_183360758 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360820 + 0x1fdfbbbeb31159b5)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1833607a0 + 0xdeefcfed7ad9ce52));
  uVar10 = ~(_DAT_183360758 << 6 | (_DAT_183360758 & 0x7fffffffffffffff) >> 0x3a) &
           0xdeefcfedfefbed77;
  _DAT_183360ce8 = _DAT_1833607a8 ^ uVar10 ^ 0xfecf8bacb20d472c;
  _DAT_183360780 = (_DAT_183360780 ^ uVar10) + 0xfecf8bacb20d472c ^ 0x4c5bad78904d2943;
  _DAT_183360b70 = (_DAT_183360b70 * -0x7df6f43047b92e21 ^ _DAT_183360780) + uVar10;
  _DAT_183360978 = _DAT_183360b70 ^ _DAT_183360780;
  _DAT_183360c98 = 0xfecf8bacb20d472c;
  uVar10 = (~_DAT_1833609b8 + 0x3d9f17596422926b) *
           ((_DAT_183360a70 ^ 0xc1307453c9c897e7) + (_DAT_183360a70 & 0x41307453c9c897e7) * 2);
  uVar10 = (uVar10 | _DAT_183360c08) + (uVar10 & _DAT_183360c08);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183360ae0 =
       func_0x00018d6aed00((uVar10 | 0xfcaf630aadea058d) + (uVar10 & 0xfcaf630aadea058d));
  uVar10 = (_DAT_183360ae0 << 0xd | _DAT_183360ae0 >> 0x33) ^ 0xc13074534deab4c2;
  _DAT_183360bf0 = _DAT_183360a38 ^ uVar10 ^ 0xfecf8bacb20d472c;
  _DAT_183360c98 = (_DAT_183360c98 ^ uVar10) + 0xfecf8bacb20d472c ^ 0x6693ee6b34a7981a;
  _DAT_183360c30 = (_DAT_183360c30 * -0x44131116aef68e3 ^ _DAT_183360c98) + uVar10;
  _DAT_183360b90 = _DAT_183360c30 ^ _DAT_183360c98;
  _DAT_183360848 = 0xfecf8bacb20d472c;
  uVar10 = (_DAT_1833607e8 ^ _DAT_18225f620) + _DAT_183360830 + 0xfecf8bac362f6409;
  uVar12 = (_DAT_183360830 ^ _UNK_18225f628) + _DAT_1833607e8 + 0xfecf8bacb20d472c;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833607e8 ^ _DAT_18225f620;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360830 ^ _UNK_18225f628;
  _DAT_1833609a0 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833607e8 + 0xfecf8bacb20d472c)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_183360830 + 0xfecf8bac362f6409));
  uVar10 = _DAT_1833609a0 - (_DAT_1833609a0 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar3 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  _DAT_1833609b0 = (uint)bVar3 + (uint)bVar3 ^ _DAT_1833609a0;
  uVar10 = _DAT_1833609b0 >> 1 | _DAT_1833609b0;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  _DAT_1833609b0 =
       (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
       _DAT_1833609b0;
  uVar10 = _DAT_1833609b0 - (_DAT_1833609b0 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar3 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  _DAT_1833609b0 = (uint)bVar3 + (uint)bVar3 ^ _DAT_1833609b0;
  _DAT_183360c70 = _DAT_183360c70 ^ _DAT_1833609b0 ^ 0xff8b12d82ea44376;
  _DAT_183360c18 = (_DAT_183360c18 * 0x35c8ec8253be4a3f ^ _DAT_183360c70) + _DAT_1833609b0;
  _DAT_183360af8 = _DAT_183360c18 ^ _DAT_183360c70;
  _DAT_1833607d8 = 0;
  _DAT_183360c78 = func_0x00018d6aed00(_DAT_1833608f8 ^ 0x7aab9f15c499d488);
  uVar10 = _DAT_183360c78 & 0x7fffffffffffffff;
  _DAT_183360b70 = _DAT_183360878 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_183360bd8 = (_DAT_183360bd8 ^ uVar10) - 2 ^ 0x3b7f59c3d2b4415c;
  _DAT_183360b08 = (_DAT_183360b08 * 0x4947d7abe8468a75 ^ _DAT_183360bd8) + uVar10;
  _DAT_183360958 = _DAT_183360b08 ^ _DAT_183360bd8;
  _DAT_1833608e0 = 0xfffffffffffffffe;
  _DAT_1833609b8 = func_0x00018d6aed00(_DAT_1833607a8 ^ 0xedf10f7d530fe1bd);
  uVar10 = (_DAT_1833609b8 ^ 0x2110301201041289) << 0x12 |
           (_DAT_1833609b8 ^ 0x2110301201041289) >> 0x2e;
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar10;
  _DAT_183360898 = (_DAT_183360898 ^ uVar10) + 0x2110301201041288 ^ 0x5eb9da45cd940121;
  _DAT_183360b38 = (_DAT_183360b38 * -0x5366c9dae7e1889d ^ _DAT_183360898) + uVar10;
  _DAT_183360838 = _DAT_183360b38 ^ _DAT_183360898;
  _DAT_183360b28 = 0x2110301201041288;
  uVar10 = (~_DAT_1833608d0 + 0x2110301201041289) *
           ((_DAT_183360bb8 ^ 0xdeefcfed7ad9ce52) + (_DAT_183360bb8 & 0x5eefcfed7ad9ce52) * 2);
  uVar10 = (uVar10 | _DAT_183360758) + (uVar10 & _DAT_183360758);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1833607c8 =
       func_0x00018d6aed00((uVar10 | 0xffffffff7bdddcda) + (uVar10 & 0xffffffff7bdddcda));
  _DAT_183360cf8 = _DAT_183360cf8 ^ ~_DAT_1833607c8 & 0x7fffffffffffffff ^ 0x4b41c7229f401bcf;
  _DAT_183360a08 =
       (_DAT_183360a08 * -0x7e558957eb6b1993 ^ _DAT_183360cf8) +
       (~_DAT_1833607c8 & 0x7fffffffffffffff);
  _DAT_1833609b0 = _DAT_183360a08 ^ _DAT_183360cf8;
  _DAT_183360c70 = 0;
  uVar10 = ((_DAT_183360c68 ^ 0xffffffff7bdddcdb) + (_DAT_183360c68 & 0x7fffffff7bdddcdb) * 2) *
           -_DAT_183360bb0;
  uVar10 = (uVar10 | _DAT_183360c20) + (uVar10 & _DAT_183360c20);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183360cf8 =
       func_0x00018d6aed00((uVar10 | 0xffffffff7bdddcdb) + (uVar10 & 0xffffffff7bdddcdb));
  uVar10 = ~_DAT_183360cf8 & 0xfffffffffffffffe;
  _DAT_1833608d8 = _DAT_183360908 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_183360848 = (_DAT_183360848 ^ uVar10) - 2 ^ 0x284fcdc6e40d8820;
  _DAT_183360888 = (_DAT_183360888 * -0x1cdb9c654f4f15c9 ^ _DAT_183360848) + uVar10;
  _DAT_183360a18 = _DAT_183360888 ^ _DAT_183360848;
  _DAT_1833608b0 = 0xfffffffffffffffe;
  uVar10 = (_DAT_183360b30 ^ _DAT_18225f630) + _DAT_183360c00 + 0xdeaf47e87819a243;
  uVar12 = (_DAT_183360c00 ^ _UNK_18225f638) + _DAT_183360b30 + 0xdeaf47e8fc3b8166;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360b30 ^ _DAT_18225f630;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360c00 ^ _UNK_18225f638;
  uVar10 = func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) -
                               (_DAT_183360b30 + 0xdeaf47e8fc3b8166) ^
                               (uVar10 << 0x1d | uVar10 >> 0x23) -
                               (_DAT_183360c00 + 0xdeaf47e87819a243));
  uVar10 = uVar10 ^ 0xdeaf47e8fc3b8166;
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar10;
  _DAT_183360c60 = _DAT_183360c60 ^ uVar10 ^ 0xdb01d197ee6649a6;
  _DAT_183360a90 = (_DAT_183360a90 * 0x76c53c747b78ed99 ^ _DAT_183360c60) + uVar10;
  _DAT_1833609a0 = _DAT_183360a90 ^ _DAT_183360c60;
  _DAT_183360c48 = 0;
  uVar10 = ((_DAT_1833608d0 ^ 0xffffffff7bdddcdb) + (_DAT_1833608d0 & 0x7fffffff7bdddcdb) * 2) *
           -_DAT_1833609e8;
  uVar10 = (uVar10 | _DAT_183360c78) + (uVar10 & _DAT_183360c78);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1833609d8 =
       func_0x00018d6aed00((uVar10 | 0xffffffff7bdddcdb) + (uVar10 & 0xffffffff7bdddcdb));
  _DAT_1833609c8 = _DAT_183360ae8 ^ _DAT_1833609d8 ^ 0xfffffffffffffffe;
  _DAT_183360b70 = (_DAT_183360b70 ^ _DAT_1833609d8) - 2 ^ 0x92c6cd1d4734e826;
  _DAT_183360878 = (_DAT_183360878 * 0x73e7c10c01e762ff ^ _DAT_183360b70) + _DAT_1833609d8;
  _DAT_1833607e8 = _DAT_183360878 ^ _DAT_183360b70;
  auVar7._8_8_ = _UNK_1801ec418;
  auVar7._0_8_ = unaff_RBX ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_18225f640,_DAT_1800170c0);
  _DAT_183360a58 = 0xfffffffffffffffe;
  uVar12 = auVar8._8_8_ + auVar8._0_8_;
  uVar10 = uVar12 + _DAT_183360c80;
  if (auVar8._4_4_ < 0) {
    uVar10 = _DAT_1833608a0 ^ uVar12;
  }
  _DAT_183360b88 = func_0x00018d6aed00(SUB161(auVar7 ^ _DAT_18225f640,5) ^ uVar10);
  uVar10 = (unaff_RBX | 0xfffffffffffffffe) ^ _DAT_183360b88 ^ unaff_XMM13_Qa;
  auVar8._4_4_ = unaff_XMM15_Db;
  auVar8._0_4_ = unaff_XMM15_Da;
  auVar8._8_4_ = unaff_XMM15_Dc;
  auVar8._12_4_ = unaff_XMM15_Dd;
  uVar13 = unaff_XMM15_Da | (uint)DAT_1800b8c60;
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  auVar1._4_4_ = unaff_XMM15_Db;
  auVar1._0_4_ = unaff_XMM15_Da;
  auVar1._8_4_ = unaff_XMM15_Dc;
  auVar1._12_4_ = unaff_XMM15_Dd;
  uVar14 = SUB164(auVar8 & _DAT_1800b8c60,0);
  uVar12 = SUB168(auVar8 & _DAT_1800b8c60,0);
  uVar9 = SUB164(auVar11 ^ auVar1,0);
  uVar4 = SUB168(auVar11 ^ auVar1,0);
  auVar2._4_4_ = unaff_XMM15_Db;
  auVar2._0_4_ = unaff_XMM15_Da;
  auVar2._8_4_ = unaff_XMM15_Dc;
  auVar2._12_4_ = unaff_XMM15_Dd;
  uVar6 = SUB164(_DAT_1800b8c60 ^ auVar2,0);
  uVar5 = (((ulonglong)_DAT_18225f690 * (ulonglong)uVar9 +
            ((ulonglong)_DAT_18225f6b0 * (ulonglong)uVar9 +
             (uVar4 >> 0x20) * (ulonglong)_DAT_18225f690 << 0x20) +
            ((ulonglong)uVar13 * (ulonglong)_DAT_18225f670 + _DAT_18225f6a0 << 0x20) +
            (ulonglong)_DAT_18225f680 * (ulonglong)uVar13 +
           (ulonglong)uVar14 * (ulonglong)_DAT_18225f680 +
           ((uVar12 >> 0x20) * (ulonglong)_DAT_18225f680 +
            (ulonglong)uVar14 * (ulonglong)_DAT_18225f670 << 0x20) +
           ((ulonglong)_DAT_18225f660 * (ulonglong)unaff_XMM15_Da +
            (ulonglong)_DAT_18225f650 * (ulonglong)unaff_XMM7_Da << 0x20) +
           (ulonglong)unaff_XMM15_Da * (ulonglong)_DAT_18225f650) -
          ((ulonglong)uVar9 * (ulonglong)_DAT_18225f740 +
           ((ulonglong)_DAT_18225f750 * (ulonglong)uVar9 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_18225f740 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_18225f720 +
           ((ulonglong)_DAT_18225f730 * (ulonglong)uVar6 +
            (SUB168(_DAT_1800b8c60 ^ auVar2,0) >> 0x20) * (ulonglong)_DAT_18225f720 << 0x20) +
          (ulonglong)uVar14 * (ulonglong)_DAT_18225f700 +
          ((ulonglong)_DAT_18225f710 * (ulonglong)uVar14 +
           (uVar12 >> 0x20) * (ulonglong)_DAT_18225f700 << 0x20) +
          ((ulonglong)(unaff_XMM15_Da * _DAT_18225f6f0 + unaff_XMM7_Da * _DAT_18225f6e0) << 0x20) +
          (ulonglong)unaff_XMM15_Da * (ulonglong)_DAT_18225f6e0)) + 0x70dad51e88e25f0e;
  _DAT_183360ae8 = _DAT_183360858 ^ uVar10 ^ uVar5;
  _DAT_183360c00 = (_DAT_183360c00 ^ uVar10) + uVar5 ^ 0x265873f3f0c8ab92;
  _DAT_183360aa0 = (_DAT_183360aa0 * -0x7abc45d325fc634d ^ _DAT_183360c00) + uVar10;
  _DAT_183360c28 = _DAT_183360aa0 ^ _DAT_183360c00;
  _DAT_1833607e0 = uVar5;
  *(ulonglong *)(unaff_RBP + 0x50) = uVar5 + unaff_RBP + -0x50;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar5) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar10 = (~_DAT_183360718 + 0x82b6350e627cacd4) *
           ((_DAT_183360750 ^ 0x53907da09e8c15df) + (_DAT_183360750 & 0x53907da09e8c15df) * 2);
  uVar10 = (uVar10 | _DAT_1833607f0) + (uVar10 & _DAT_1833607f0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183360b68 =
       func_0x00018d6aed00((uVar10 | 0xd12648aefcf0b90c) + (uVar10 & 0xd12648aefcf0b90c));
  uVar10 = (_DAT_183360b68 ^ 0xd3b67dae7afebefb) << 0x1b |
           (_DAT_183360b68 ^ 0xd3b67dae7afebefb) >> 0x25;
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar10;
  _DAT_183360be8 = (_DAT_183360be8 ^ uVar10) + 0xd12648ae78d29a29 ^ 0x7e69431b29b0f2e4;
  _DAT_183360790 = (_DAT_183360790 * 0x2562b1d858e5b8a5 ^ _DAT_183360be8) + uVar10;
  _DAT_183360bd0 = _DAT_183360790 ^ _DAT_183360be8;
  _DAT_183360978 = 0xd12648ae78d29a29;
  uVar10 = (~_DAT_1833608f8 + 0xf39a40ef6a556331) *
           ((_DAT_1833609c8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1833609c8 & 0x84222330) * 2);
  uVar10 = (uVar10 | _DAT_183360bf0) + (uVar10 & _DAT_183360bf0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183360b08 =
       func_0x00018d6aed00((uVar10 | 0xf39a40efee774000) + (uVar10 & 0xf39a40efee774000));
  uVar10 = (_DAT_183360b08 ^ 0xf39a40ef6a556000) & 0xfffffffffffff800;
  _DAT_183360c28 = _DAT_183360938 ^ uVar10 ^ 0xf39a40ef6a556345;
  _DAT_183360be8 = (_DAT_183360be8 ^ uVar10) + 0xf39a40ef6a556345 ^ 0x7cb4cc49fdb1e0d1;
  _DAT_183360a10 = (_DAT_183360a10 * -0x2fd96b34d0f46e91 ^ _DAT_183360be8) + uVar10;
  _DAT_1833609e0 = _DAT_183360a10 ^ _DAT_183360be8;
  _DAT_183360938 = _DAT_183360848 ^ 0xf39a40ef6a556345;
  _DAT_183360b98 = 0xf39a40ef6a556345;
  uVar10 = (~_DAT_1833609d8 + 0xc65bf1095aa9cd1) *
           ((_DAT_183360c08 ^ 0xf39a40efee774060) + (_DAT_183360c08 & 0x739a40efee774060) * 2);
  uVar10 = (uVar10 | _DAT_1833609e8) + (uVar10 & _DAT_1833609e8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183360850 =
       func_0x00018d6aed00((uVar10 | 0xffffffff7bdddcb0) + (uVar10 & 0xffffffff7bdddcb0));
  _DAT_183360b08 = _DAT_1833609c8 ^ _DAT_183360aa8 ^ 0x15;
  _DAT_183360a58 = (_DAT_183360a58 ^ _DAT_183360aa8) + 0x15 ^ 0x976d2f369ccf2d5;
  _DAT_183360848 = (_DAT_183360848 * 0x643163e5baca1b93 ^ _DAT_183360a58) + _DAT_183360aa8;
  _DAT_183360a00 = _DAT_183360848 ^ _DAT_183360a58;
  _DAT_183360ca0 = 0x15;
  _DAT_1833608a8 = func_0x00018d6aed00(_DAT_183360810 ^ 0x7ec5d58bf7d33389);
  uVar10 = _DAT_1833608a8 ^ 0x237b538108f7693d;
  _DAT_183360960 = _DAT_1833607a8 ^ uVar10 ^ 0x237b538108f7694d;
  _DAT_183360ab0 = (_DAT_183360ab0 ^ uVar10) + 0x237b538108f7694d ^ 0xad5e9481f97d3999;
  _DAT_183360cd0 = (_DAT_183360cd0 * -0x554b1b28fb11dc47 ^ _DAT_183360ab0) + uVar10;
  _DAT_183360728 = _DAT_183360cd0 ^ _DAT_183360ab0;
  _DAT_183360868 = 0x237b538108f7694d;
  uVar10 = (_DAT_183360738 ^ _DAT_18225f760) + _DAT_183360be0 + 0x84222325;
  uVar12 = (_DAT_183360be0 ^ _UNK_18225f768) + _DAT_183360738 + 0x34f9c90acbdaafb8;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360738 ^ _DAT_18225f760;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360be0 ^ _UNK_18225f768;
  _DAT_183360750 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360738 + 0x34f9c90acbdaafb8)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183360be0 + 0x84222325));
  uVar10 = (_DAT_183360750 ^ 0x34f9c90acbdaafa0) & 0x7fffffffffffffe0;
  _DAT_1833607b0 = (_DAT_1833607b0 ^ uVar10) + 0xcb0636f534255048 ^ 0x8479dd9ead9c6adc;
  _DAT_183360a98 = (_DAT_183360a98 * 0x4506690e5bae153 ^ _DAT_1833607b0) + uVar10;
  _DAT_1833607b0 = _DAT_183360a98 ^ _DAT_1833607b0;
  _DAT_183360c48 = 0xcb0636f534255048;
  uVar10 = (~_DAT_183360af8 + 0x34f9c90acbdaafb9) *
           ((_DAT_183360860 ^ 0x84222330) + (ulonglong)((uint)_DAT_183360860 & 0x84222330) * 2);
  uVar10 = (uVar10 | _DAT_183360b98) + (uVar10 & _DAT_183360b98);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183360908 =
       func_0x00018d6aed00((uVar10 | 0x34f9c90a4ff88c88) + (uVar10 & 0x34f9c90a4ff88c88));
  uVar10 = _DAT_183360908 - (_DAT_183360908 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_183360908
  ;
  _DAT_183360bb8 = _DAT_183360a00 ^ uVar10 ^ 0x34f9c90acbdaafcd;
  _DAT_183360a80 = (_DAT_183360a80 ^ uVar10) + 0x34f9c90acbdaafcd ^ 0x43ecb677787cb9c9;
  _DAT_1833608d8 = (_DAT_1833608d8 * 0x4553ed3ce53e7763 ^ _DAT_183360a80) + uVar10;
  _DAT_1833609f8 = _DAT_1833608d8 ^ _DAT_183360a80;
  _DAT_1833607b0 = 0x34f9c90acbdaafcd;
  uVar10 = (~_DAT_183360ab0 + 0xcb0636f534255049) *
           ((_DAT_183360c40 ^ 0x34f9c90a4ff88ce8) + (_DAT_183360c40 & 0x34f9c90a4ff88ce8) * 2);
  uVar10 = (uVar10 | _DAT_183360c28) + (uVar10 & _DAT_183360c28);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar10 = func_0x00018d6aed00((uVar10 | 0xffffffff7bdddca0) + (uVar10 & 0xffffffff7bdddca0));
  uVar12 = uVar10 ^ 0xffffffffffffffcd;
  uVar4 = uVar12 >> 1 | uVar12;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
           ^ uVar12;
  _DAT_183360ad0 = _DAT_183360b08 ^ uVar12 ^ 0x15;
  _DAT_183360c40 = (uVar10 ^ uVar12) + 0x15 ^ 0xaff58d961ee24d36;
  _DAT_183360a28 = (_DAT_183360a28 * -0x5d7125b6262ade55 ^ _DAT_183360c40) + uVar12;
  _DAT_1833609a8 = _DAT_183360a28 ^ _DAT_183360c40;
  _DAT_183360898 = 0x15;
  _DAT_183360ca8 = func_0x00018d6aed00(_DAT_183360bd0 ^ 0xef8c78fdef16bedf);
  uVar10 = _DAT_183360ca8 & 0x3fffffffffffffff;
  _DAT_183360b90 = _DAT_183360b90 ^ uVar10 ^ 0x50d5a70d77046826;
  _DAT_183360730 = (_DAT_183360730 ^ uVar10) + 0x50d5a70d77046826 ^ 0x73b03964c4ac9b10;
  _DAT_183360828 = (_DAT_183360828 * -0x2cb0b47b48e40695 ^ _DAT_183360730) + uVar10;
  _DAT_183360818 = _DAT_183360828 ^ _DAT_183360730;
  _DAT_183360ad8 = 0x50d5a70d77046826;
  _DAT_183360728 = func_0x00018d6aed00(_DAT_1833609b8 ^ 0x503376fe70f5be27);
  uVar10 = _DAT_183360728 & 0x7fffffffffffffff ^ 0xae8916f086e357d4;
  _DAT_183360828 = (_DAT_183360828 ^ uVar10) + 0xae8916f086e357d4 ^ 0xeaf20c4ae004fe8;
  _DAT_183360cd0 = (_DAT_183360cd0 * 0x50282d158821a703 ^ _DAT_183360828) + uVar10;
  _DAT_183360ab0 = _DAT_183360cd0 ^ _DAT_183360828;
  _DAT_1833609d0 = 0xae8916f086e357d4;
  uVar10 = (_DAT_183360b78 ^ _DAT_18225f770) + _DAT_1833607c8 + 0x7faf5e5e7a13eed8;
  uVar12 = (_DAT_1833607c8 ^ _UNK_18225f778) + _DAT_183360b78 + 0xd12648ae78d29a29;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360b78 ^ _DAT_18225f770;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833607c8 ^ _UNK_18225f778;
  _DAT_183360878 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360b78 + 0xd12648ae78d29a29)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1833607c8 + 0x7faf5e5e7a13eed8));
  _DAT_1833609b8 =
       (_DAT_1833609b8 ^ _DAT_183360878 & 0x7ffffffff) + 0x5126480e78108829 ^ 0x7105321fbdcde8f1;
  _DAT_183360ae0 =
       (_DAT_183360ae0 * 0x380e7b113712f279 ^ _DAT_1833609b8) + (_DAT_183360878 & 0x7ffffffff);
  _DAT_183360780 = _DAT_183360ae0 ^ _DAT_1833609b8;
  _DAT_1833608c8 = 0x5126480e78108829;
  uVar10 = (_DAT_183360c98 ^ _DAT_18225f780) + _DAT_1833607d0 + 0xae8916f002c174f1;
  uVar12 = (_DAT_1833607d0 ^ _UNK_18225f788) + _DAT_183360c98 + 0xa24c901cf0211052;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360c98 ^ _DAT_18225f780;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833607d0 ^ _UNK_18225f788;
  _DAT_183360b60 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360c98 + 0xa24c901cf0211052)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1833607d0 + 0xae8916f002c174f1));
  uVar10 = _DAT_183360b60 ^ 0xae8916f086e357d4;
  _DAT_183360740 = _DAT_183360890 ^ uVar10 ^ 0x50d5a70d77046826;
  _DAT_183360be0 = (_DAT_183360be0 ^ uVar10) + 0x50d5a70d77046826 ^ 0xe5da54f45ae96bb6;
  _DAT_1833608a8 = (_DAT_1833608a8 * -0x5af93e52c2092d31 ^ _DAT_183360be0) + uVar10;
  _DAT_183360c88 = _DAT_1833608a8 ^ _DAT_183360be0;
  _DAT_183360a38 = 0x50d5a70d77046826;
  uVar10 = (_DAT_1833607d0 ^ _DAT_18225f790) + _DAT_183360920 + 0x50d5a70df3264b03;
  uVar12 = (_DAT_183360920 ^ _UNK_18225f798) + _DAT_1833607d0 + 0x50d5a70d77046826;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1833607d0 ^ _DAT_18225f790;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360920 ^ _UNK_18225f798;
  _DAT_183360ad0 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833607d0 + 0x50d5a70d77046826)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_183360920 + 0x50d5a70df3264b03));
  uVar10 = _DAT_183360ad0 >> 1 | _DAT_183360ad0;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  _DAT_183360a30 =
       (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
       _DAT_183360ad0;
  _DAT_1833608c0 = _DAT_1833608c0 ^ _DAT_183360a30 ^ 0xe8a948a565faac66;
  _DAT_183360818 = (_DAT_183360818 * 0x19813743b7b3526d ^ _DAT_1833608c0) + _DAT_183360a30;
  _DAT_183360a28 = _DAT_183360818 ^ _DAT_1833608c0;
  _DAT_183360c10 = 0;
  uVar10 = (_DAT_183360c48 ^ 0x84222330) + _DAT_183360bd0 + 0x84222330;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360c48 ^ 0x84222330;
  uVar12 = ((_DAT_183360bd0 + _DAT_183360c48) * 0x2000 | _DAT_183360bd0 + _DAT_183360c48 >> 0x33) ^
           _DAT_183360bd0;
  _DAT_183360bc8 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_183360c48 ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183360bd0 + 0x84222330));
  uVar10 = _DAT_183360bc8 & 0x7fffffffffffffff;
  _DAT_183360a50 = _DAT_183360830 ^ uVar10 ^ 0x15;
  _DAT_183360cd8 = (_DAT_183360cd8 ^ uVar10) + 0x15 ^ 0x4512904a27de271c;
  _DAT_183360a18 = (_DAT_183360a18 * 0x4ce18ea7b6f09f3f ^ _DAT_183360cd8) + uVar10;
  _DAT_183360a30 = _DAT_183360a18 ^ _DAT_183360cd8;
  _DAT_183360ad0 = 0x15;
  uVar10 = (_DAT_183360ae8 ^ _DAT_18225f7a0) + _DAT_1833607e0 + 0x7faf5e5e7a13eed8;
  uVar12 = (_DAT_1833607e0 ^ _UNK_18225f7a8) + (_DAT_183360ae8 - 1);
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360ae8 ^ _DAT_18225f7a0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833607e0 ^ _UNK_18225f7a8;
  _DAT_183360bd0 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360ae8 - 1) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1833607e0 + 0x7faf5e5e7a13eed8)
                          );
  _DAT_183360800 = (_DAT_183360800 ^ _DAT_183360bd0) + 0x8050a1a101ce3202 ^ 0x76d411a66884c146;
  _DAT_183360c58 = (_DAT_183360c58 * -0x602e248f3d9de12f ^ _DAT_183360800) + _DAT_183360bd0;
  _DAT_1833607d8 = _DAT_183360c58 ^ _DAT_183360800;
  _DAT_183360718 = 0x8050a1a101ce3202;
  uVar10 = (_DAT_183360780 ^ _DAT_18225f7b0) + _DAT_183360780 + 0x7faf5e5e7a13eed8;
  uVar12 = (_DAT_183360780 ^ _UNK_18225f7b8) + _DAT_183360780 + 0x8050a1a101ce3202;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183360780 ^ _DAT_18225f7b0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360780 ^ _UNK_18225f7b8;
  _DAT_183360930 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360780 + 0x8050a1a101ce3202)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_183360780 + 0x7faf5e5e7a13eed8));
  _DAT_183360b80 = _DAT_183360b80 ^ ~_DAT_183360930 ^ 0x8b5758f9bd6f1c34;
  _DAT_183360bb8 =
       (_DAT_183360b00 * 0x3e38829e341845f7 ^ _DAT_183360b80) + ~_DAT_183360930 ^ _DAT_183360b80;
  _DAT_183360b00 = 0;
  uVar10 = (~_DAT_183360898 + 0x7daa421e5e31c14a) *
           ((_DAT_183360948 ^ 0x7daa421eda13e26c) + (_DAT_183360948 & 0x7daa421eda13e26c) * 2);
  uVar10 = (uVar10 | _DAT_183360aa8) + (uVar10 & _DAT_183360aa8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar10 = func_0x00018d6aed00((uVar10 | 0x84222325) + (ulonglong)((uint)uVar10 & 0x84222325));
  _DAT_183360808 = uVar10 ^ uVar10 ^ 0x7daa421e5e31c149 ^ 0x69d302f6087fb921;
  _DAT_183360b68 =
       (_DAT_183360b68 * 0x6b83a8b0eea7d5f7 ^ _DAT_183360808) + (uVar10 ^ 0x7daa421e5e31c149);
  _DAT_183360758 = _DAT_183360b68 ^ _DAT_183360808;
  _DAT_1833607f8 = 0;
  switch(uVar5 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd68a00b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d68a00b(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong unaff_RBP;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  ulonglong uVar29;
  uint uVar31;
  
  uVar13 = *(ulonglong *)(*(longlong *)(unaff_RBP + 0x50) + -8);
  uVar12 = (~_DAT_183360ca8 + 0x8dc1efd41fccd0f5) *
           ((_DAT_183360b90 ^ 0xf34ac611975a5cb1) + (_DAT_183360b90 & 0x734ac611975a5cb1) * 2);
  uVar12 = (uVar12 | _DAT_183360b90) + (uVar12 & _DAT_183360b90);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_183360c00 =
       func_0x00018d6aed00((uVar12 | 0x7e8b29c588968c45) + (uVar12 & 0x7e8b29c588968c45));
  _DAT_183360bc8 =
       (_DAT_183360bc8 ^ ~_DAT_183360c00 & 0x734ac61113787f94) + 0xffcbefd51ffcfff4 ^
       0xd4fbf33cc7cad232;
  _DAT_1833609e0 =
       (_DAT_1833609e0 * -0x3a404b924a452135 ^ _DAT_183360bc8) +
       (~_DAT_183360c00 & 0x734ac61113787f94);
  _DAT_183360ba0 = _DAT_1833609e0 ^ _DAT_183360bc8;
  _DAT_183360870 = 0xffcbefd51ffcfff4;
  uVar12 = (~_DAT_183360978 + 0xe6e4e89962bc87bf) *
           ((_DAT_183360a30 ^ 0xfaec5d411f256290) + (_DAT_183360a30 & 0x7aec5d411f256290) * 2);
  uVar12 = (uVar12 | _DAT_183360bd8) + (uVar12 & _DAT_183360bd8);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_183360ae8 =
       func_0x00018d6aed00((uVar12 | 0x1c08b5d87d99e52e) + (uVar12 & 0x1c08b5d87d99e52e));
  _DAT_183360740 =
       (_DAT_183360740 ^ _DAT_183360ae8 ^ 0x22dbe05bf6f276e3) + 0x1c08b5d8f9bbc60b ^
       0x7fa16bad10223851;
  _DAT_1833608f8 =
       (_DAT_1833608f8 * 0x23b2367357f78efb ^ _DAT_183360740) +
       (_DAT_183360ae8 ^ 0x22dbe05bf6f276e3);
  _DAT_183360708 = _DAT_1833608f8 ^ _DAT_183360740;
  _DAT_183360850 = 0x1c08b5d8f9bbc60b;
  uVar12 = (~_DAT_1833607a0 + 0x6d7076a09ab63721) *
           ((_DAT_183360710 ^ 0x84222325) + (ulonglong)((uint)_DAT_183360710 & 0x84222325) * 2);
  uVar12 = (uVar12 | _DAT_183360ae8) + (uVar12 & _DAT_183360ae8);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_183360768 =
       func_0x00018d6aed00((uVar12 | 0x6d7076a01e941405) + (uVar12 & 0x6d7076a01e941405));
  _DAT_183360c40 =
       (_DAT_183360c40 ^ _DAT_183360768 * -0x285211d839bafbe7) + 0x928f895f6549c8e0 ^
       0xb4acfcd287b90483;
  _DAT_183360750 =
       (_DAT_183360750 * -0x5be40791e17865db ^ _DAT_183360c40) +
       _DAT_183360768 * -0x285211d839bafbe7;
  _DAT_1833609d0 = _DAT_183360750 ^ _DAT_183360c40;
  _DAT_183360ce0 = 0x928f895f6549c8e0;
  _DAT_183360780 = func_0x00018d6aed00(_DAT_183360ce8 + 0xee3bc7493ca2cd62 ^ 0x51);
  uVar12 = _DAT_183360780 ^ 0x6d7076a09ab63718;
  _DAT_183360c48 = _DAT_183360a10 ^ uVar12 ^ 0xfffffffffffffff8;
  _DAT_183360c60 = (_DAT_183360c60 ^ uVar12) - 8 ^ 0x60b55ba464791f8e;
  _DAT_1833609a0 = (_DAT_1833609a0 * 0x4237d0038d567d57 ^ _DAT_183360c60) + uVar12;
  _DAT_183360bf0 = _DAT_1833609a0 ^ _DAT_183360c60;
  _DAT_1833608c8 = 0xfffffffffffffff8;
  uVar12 = (_DAT_183360b30 ^ _DAT_18225f950) + _DAT_183360928 + 0x84222325;
  uVar19 = (_DAT_183360928 ^ _UNK_18225f958) + _DAT_183360b30 + 0xd068fc0d63509bef;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360b30 ^ _DAT_18225f950;
  uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ _DAT_183360928 ^ _UNK_18225f958;
  _DAT_183360ae8 =
       func_0x00018d6aed00((uVar19 << 0x1d | uVar19 >> 0x23) - (_DAT_183360b30 + 0xd068fc0d63509bef)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360928 + 0x84222325));
  _DAT_183360cf0 = (_DAT_183360cf0 ^ _DAT_183360ae8) + 0x2f9703f29caf6411 ^ 0x1e912443c01644c3;
  _DAT_183360738 =
       (_DAT_183360738 * 0x424a57950f6be46f ^ _DAT_183360cf0) + _DAT_183360ae8 ^ _DAT_183360cf0;
  _DAT_183360c30 = 0x2f9703f29caf6411;
  _DAT_183360b50 = func_0x00018d6aed00(_DAT_183360b48 ^ 0x723d70f7d1fc82aa);
  uVar12 = (_DAT_183360b50 ^ 0x3f29caf6410) & 0xfffffffffff ^ 0xfffffffffffffff8;
  _DAT_183360880 = _DAT_183360930 ^ uVar12 ^ 0xd068fc0d63509be7;
  _DAT_183360958 = (_DAT_183360958 ^ uVar12) + 0xd068fc0d63509be7 ^ 0xe91b4b79c6b78d43;
  _DAT_1833608a8 = (_DAT_1833608a8 * -0x599e90a6cdb5c7b9 ^ _DAT_183360958) + uVar12 ^ _DAT_183360958
  ;
  _DAT_183360a90 = 0xd068fc0d63509be7;
  uVar12 = (_DAT_1833609c8 ^ _DAT_18225f960) + _DAT_183360cc0 + 0x84222325;
  uVar19 = (_DAT_183360cc0 ^ _UNK_18225f968) + _DAT_1833609c8 + 0xfbfd517ed0c2ee38;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833609c8 ^ _DAT_18225f960;
  uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ _DAT_183360cc0 ^ _UNK_18225f968;
  _DAT_183360a68 =
       func_0x00018d6aed00((uVar19 << 0x1d | uVar19 >> 0x23) - (_DAT_1833609c8 + 0xfbfd517ed0c2ee38)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360cc0 + 0x84222325));
  _DAT_183360788 = (_DAT_183360788 ^ _DAT_183360a68) + 0x402ae812f3d11c8 ^ 0x89205d2a8546b1a0;
  _DAT_183360bc0 = (_DAT_183360bc0 * 0x3a19ec3d6ec18523 ^ _DAT_183360788) + _DAT_183360a68;
  _DAT_183360738 = _DAT_183360bc0 ^ _DAT_183360788;
  _DAT_183360700 = 0x402ae812f3d11c8;
  uVar12 = (~_DAT_183360a30 + 0x1c08b5d8f9bbc60c) *
           ((_DAT_1833607b0 ^ 0xffcbefd59bdedcd1) + (_DAT_1833607b0 & 0x7fcbefd59bdedcd1) * 2);
  uVar12 = (uVar12 | _DAT_1833609a0) + (uVar12 & _DAT_1833609a0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1833608d8 =
       func_0x00018d6aed00((uVar12 | 0xe3c35a0d62651ada) + (uVar12 & 0xe3c35a0d62651ada));
  uVar12 = _DAT_1833608d8 ^ 0x1c08b5d8f9bbc60b;
  _DAT_183360a68 = _DAT_183360c80 ^ uVar12 ^ 0x1bd4a5ae19b8c5ff;
  _DAT_1833609b8 = (_DAT_1833609b8 ^ uVar12) + 0x1bd4a5ae19b8c5ff ^ 0x69545e465f8916ca;
  _DAT_183360c58 = (_DAT_183360c58 * -0x131b4d4574065a61 ^ _DAT_1833609b8) + uVar12;
  _DAT_183360958 = _DAT_183360c58 ^ _DAT_1833609b8;
  _DAT_183360948 = 0x1bd4a5ae19b8c5ff;
  _DAT_183360b00 = func_0x00018d6aed00(_DAT_183360a38 ^ 0xf4f9bea2da45db2c);
  _DAT_183360a78 = (_DAT_183360a78 ^ _DAT_183360b00) + 0x1c08a5d019b8c600 ^ 0x2527daef2b1d1c99;
  _DAT_183360a98 = (_DAT_183360a98 * 0x77b940f0fe56620b ^ _DAT_183360a78) + _DAT_183360b00;
  _DAT_183360bc0 = _DAT_183360a98 ^ _DAT_183360a78;
  _DAT_183360ae0 = 0x1c08a5d019b8c600;
  uVar12 = (~_DAT_1833608e0 + 0x1bd4a5ae19b8c600) *
           ((_DAT_183360900 ^ 0x1bd4a5ae9d9ae6da) + (_DAT_183360900 & 0x1bd4a5ae9d9ae6da) * 2);
  uVar12 = (uVar12 | _DAT_1833607a0) + (uVar12 & _DAT_1833607a0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_183360bd0 =
       func_0x00018d6aed00((uVar12 | 0x84222325) + (ulonglong)((uint)uVar12 & 0x84222325));
  _DAT_183360ce8 = (_DAT_183360bd0 ^ 0xe15578ad05b27401) * 0x6b08c6fe4eba77c1;
  _DAT_1833607e8 = _DAT_1833607e8 ^ _DAT_183360ce8 ^ 0xdbb3e417e0b5d231;
  _DAT_183360760 = (_DAT_183360760 * 0x131a0f65e036bcaf ^ _DAT_1833607e8) + _DAT_183360ce8;
  _DAT_1833609d0 = _DAT_183360760 ^ _DAT_1833607e8;
  _DAT_183360c40 = 0;
  uVar12 = ((_DAT_183360ce0 ^ 0xffffffff7bdddcdd) + (_DAT_183360ce0 & 0x7fffffff7bdddcdd) * 2) *
           -_DAT_183360968;
  uVar12 = (uVar12 | _DAT_183360cb0) + (uVar12 & _DAT_183360cb0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_183360ae8 =
       func_0x00018d6aed00((uVar12 | 0xffffffff7bdddcdd) + (uVar12 & 0xffffffff7bdddcdd));
  uVar12 = (_DAT_183360ae8 ^ 0xfffffffffffffff8) * -0x4621675a62567ab1;
  _DAT_183360b78 = _DAT_183360a28 ^ uVar12 ^ 0xfffffffffffffff8;
  _DAT_183360c28 = (_DAT_183360c28 ^ uVar12) - 8 ^ 0x8aa7cb073856ab1d;
  _DAT_1833607e0 = (_DAT_1833607e0 * -0x35062e82c5710903 ^ _DAT_183360c28) + uVar12;
  _DAT_183360ac0 = _DAT_1833607e0 ^ _DAT_183360c28;
  _DAT_183360938 = -8;
  uVar12 = (~_DAT_183360770 + 0x34102ae003000c) *
           ((_DAT_183360a18 ^ 0xffcbefd59bdedcd1) + (_DAT_183360a18 & 0x7fcbefd59bdedcd1) * 2);
  uVar12 = (uVar12 | _DAT_183360a10) + (uVar12 & _DAT_183360a10);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_183360880 =
       func_0x00018d6aed00((uVar12 | 0xffffffff7bdddcda) + (uVar12 & 0xffffffff7bdddcda));
  uVar12 = _DAT_183360880 - (_DAT_183360880 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
           _DAT_183360880;
  _DAT_183360bd0 = _DAT_183360bd0 ^ uVar12 ^ 0xc6509e0c087a07f;
  _DAT_183360ce8 = (_DAT_183360ce8 * -0x63151c03fbd7a6c1 ^ _DAT_183360bd0) + uVar12;
  _DAT_183360710 = _DAT_183360ce8 ^ _DAT_183360bd0;
  _DAT_183360b18 = 0;
  _DAT_183360910 = func_0x00018d6aed00(_DAT_183360810 + 0x3f2b86a7cae42410 ^ 0x72);
  _DAT_183360960 = _DAT_1833609c0 ^ _DAT_183360910 ^ 0xfffffffffffffff8;
  _DAT_183360768 = (_DAT_183360768 ^ _DAT_183360910) - 8 ^ 0xe1be80e58879632f;
  _DAT_1833607b0 = (_DAT_1833607b0 * -0x472dd4aebba3c8af ^ _DAT_183360768) + _DAT_183360910;
  _DAT_183360870 = _DAT_1833607b0 ^ _DAT_183360768;
  _DAT_1833608b0 = 0xfffffffffffffff8;
  uVar12 = *(ulonglong *)(unaff_RBP + 0x50);
  uVar19 = (~_DAT_183360730 - 7) *
           ((uVar12 ^ 0x84222325 ^ _DAT_1833607a0) + ((uVar12 ^ 0x84222325) & _DAT_1833607a0) * 2);
  uVar19 = (uVar19 | _DAT_183360cf8) + (uVar19 & _DAT_183360cf8);
  uVar19 = uVar19 * 0x2000 ^ uVar19;
  uVar19 = uVar19 >> 7 ^ uVar19;
  uVar19 = uVar19 << 0x11 ^ uVar19;
  _DAT_183360a48 =
       func_0x00018d6aed00((uVar12 ^ 0xffffffff7bdddcdd | uVar19) +
                           (uVar19 & (uVar12 ^ 0xffffffff7bdddcdd)));
  uVar16 = (uint)(uVar12 >> 0x20);
  auVar14._8_4_ = (uint)uVar12;
  auVar14._0_8_ = uVar12;
  auVar14._12_4_ = uVar16;
  uVar23 = (uint)uVar12 | (uint)DAT_1800627b0;
  uVar28 = SUB164(auVar14 & _DAT_1800627b0,0);
  uVar26 = SUB168(auVar14 & _DAT_1800627b0,0);
  uVar22 = SUB164(_DAT_1800627b0 ^ auVar14,0);
  uVar17 = SUB164(auVar14 ^ _DAT_18001a710,0);
  uVar19 = (uVar12 * -8 ^ _DAT_183360a48) * 0x4d26414f6db3cf37 & 0x3fffffffffff;
  lVar18 = ((ulonglong)_DAT_18225fa00 * (uVar12 & 0xffffffff) +
            (ulonglong)_DAT_18225f9f0 * (ulonglong)uVar16 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_18225f9f0;
  uVar26 = (((ulonglong)uVar17 * (ulonglong)_DAT_18225f9b0 +
             ((SUB168(auVar14 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_18225f9b0 +
              (ulonglong)_DAT_18225f970 * (ulonglong)uVar17 << 0x20) +
             (ulonglong)uVar22 * (ulonglong)_DAT_18225f9a0 +
             ((SUB168(_DAT_1800627b0 ^ auVar14,0) >> 0x20) * (ulonglong)_DAT_18225f9a0 +
              (ulonglong)_DAT_18225f990 * (ulonglong)uVar22 << 0x20) +
             (ulonglong)uVar28 * (ulonglong)_DAT_18225f9a0 +
             ((uVar26 >> 0x20) * (ulonglong)_DAT_18225f9a0 +
              (ulonglong)uVar28 * (ulonglong)_DAT_18225f990 << 0x20) +
             (ulonglong)_DAT_18225f980 * (uVar12 & 0xffffffff) +
             ((ulonglong)uVar16 * (ulonglong)_DAT_18225f980 +
              (uVar12 & 0xffffffff) * (ulonglong)_DAT_18225f970 << 0x20) + lVar18 +
            ((ulonglong)_DAT_18225f9d0 * (ulonglong)uVar23 + _DAT_18225f9e0 << 0x20) +
            (ulonglong)_DAT_18225f9c0 * (ulonglong)uVar23) -
           (((ulonglong)uVar23 * (ulonglong)_DAT_18225fa30 + _DAT_18225fa50 << 0x20) +
            (ulonglong)_DAT_18225fa40 * (ulonglong)uVar23 +
            (ulonglong)uVar28 * (ulonglong)_DAT_18225fa40 +
            ((uVar26 >> 0x20) * (ulonglong)_DAT_18225fa40 +
             (ulonglong)uVar28 * (ulonglong)_DAT_18225fa30 << 0x20) +
            (uVar12 & 0xffffffff) * (ulonglong)_DAT_18225fa10 +
            ((uVar12 & 0xffffffff) * (ulonglong)_DAT_18225fa20 +
             (ulonglong)uVar16 * (ulonglong)_DAT_18225fa10 << 0x20) + lVar18)) + _DAT_18225fa60;
  _DAT_183360ba0 = _DAT_183360c98 ^ uVar19 ^ uVar26;
  _DAT_183360c88 = (_DAT_183360c88 ^ uVar19) + uVar26 ^ 0xb630fb08e4c1dc72;
  _DAT_183360b48 = (_DAT_183360b48 * -0x1206f938e1b6a2c5 ^ _DAT_183360c88) + uVar19;
  _DAT_183360b38 = _DAT_183360b48 ^ _DAT_183360c88;
  auVar15._0_8_ = _DAT_1800632f0 ^ uVar26;
  *(ulonglong *)(unaff_RBP + 0x88) = uVar13;
  auVar15._8_8_ = uVar13;
  auVar14 = pshufb(auVar15 ^ _DAT_18225fa70,_DAT_1800170c0);
  uVar19 = auVar14._8_8_ + auVar14._0_8_;
  uVar12 = uVar19 + _DAT_183360a60;
  if (auVar14._4_4_ < 0) {
    uVar12 = _DAT_183360be0 ^ uVar19;
  }
  _DAT_183360bc0 = uVar26;
  _DAT_183360950 = func_0x00018d6aed00(SUB161(auVar15 ^ _DAT_18225fa70,5) ^ uVar12);
  uVar23 = _DAT_18225fb20;
  uVar17 = _DAT_18225fb10;
  uVar11 = _DAT_183360950 ^ uVar26;
  uVar27 = (uint)(uVar26 >> 0x20);
  auVar21._8_4_ = (int)uVar26;
  auVar21._0_8_ = uVar26;
  auVar21._12_4_ = uVar27;
  uVar30 = (uint)(uVar13 >> 0x20);
  auVar20._8_4_ = (int)uVar13;
  auVar20._0_8_ = uVar13;
  auVar20._12_4_ = uVar30;
  uVar6 = (ulonglong)_DAT_18225fa80;
  uVar12 = (ulonglong)_DAT_18225fa90;
  uVar19 = (ulonglong)_DAT_18225fa80;
  auVar15 = auVar21 ^ auVar20;
  auVar14 = auVar20 ^ _DAT_18001a710;
  uVar1 = (ulonglong)_DAT_18225fab0;
  uVar7 = (ulonglong)_DAT_18225faa0;
  uVar2 = (ulonglong)_DAT_18225faa0;
  uVar3 = (ulonglong)_DAT_18225fae0;
  uVar22 = SUB164(auVar21 & auVar20,0);
  uVar4 = (ulonglong)_DAT_18225fad0;
  uVar29 = SUB168(auVar21 & auVar20,0);
  uVar8 = (ulonglong)_DAT_18225fad0;
  uVar5 = (ulonglong)_DAT_18225fb00;
  uVar31 = SUB164(auVar21 | auVar20,0);
  uVar9 = (ulonglong)_DAT_18225faf0;
  uVar10 = (ulonglong)_DAT_18225faf0;
  *(undefined1 (*) [16])(unaff_RBP + 0x20) = auVar15;
  uVar28 = _DAT_18225fb30;
  uVar16 = _DAT_18225fac0;
  *(undefined1 (*) [16])(unaff_RBP + 0x50) = auVar14;
  auVar25._8_4_ = 0xffffffff;
  auVar25._0_8_ = 0xffffffffffffffff;
  auVar25._12_4_ = 0xffffffff;
  uVar24 = SUB164(auVar25 ^ auVar21,0);
  uVar19 = (((ulonglong)uVar16 * (ulonglong)auVar14._0_4_ +
             ((ulonglong)uVar28 * (ulonglong)auVar14._0_4_ +
              (auVar14._0_8_ >> 0x20) * (ulonglong)uVar16 << 0x20) +
            (ulonglong)uVar17 * (ulonglong)auVar15._0_4_ +
            ((ulonglong)uVar23 * (ulonglong)auVar15._0_4_ +
             (auVar15._0_8_ >> 0x20) * (ulonglong)uVar17 << 0x20) +
            uVar31 * uVar10 +
            (uVar5 * uVar31 + (SUB168(auVar21 | auVar20,0) >> 0x20) * uVar9 << 0x20) +
            uVar4 * uVar22 + (uVar3 * uVar22 + (uVar29 >> 0x20) * uVar8 << 0x20) +
            (uVar1 * (uVar13 & 0xffffffff) + uVar2 * uVar30 << 0x20) + (uVar13 & 0xffffffff) * uVar7
            + uVar19 * (uVar26 & 0xffffffff) +
            (uVar12 * (uVar26 & 0xffffffff) + uVar27 * uVar6 << 0x20)) -
           ((ulonglong)*(uint *)(unaff_RBP + 0x50) * (_DAT_18225fc00 & 0xffffffff) +
            ((ulonglong)_DAT_18225fc10 * (ulonglong)*(uint *)(unaff_RBP + 0x50) +
             (auVar14._0_8_ >> 0x20) * (_DAT_18225fc00 & 0xffffffff) << 0x20) +
           (ulonglong)uVar24 * (ulonglong)_DAT_18225fbe0 +
           ((ulonglong)_DAT_18225fbf0 * (ulonglong)uVar24 +
            (SUB168(auVar25 ^ auVar21,0) >> 0x20) * (ulonglong)_DAT_18225fbe0 << 0x20) +
           (ulonglong)*(uint *)(unaff_RBP + 0x20) * (ulonglong)_DAT_18225fbc0 +
           ((ulonglong)_DAT_18225fbd0 * (ulonglong)*(uint *)(unaff_RBP + 0x20) +
            (auVar15._0_8_ >> 0x20) * (ulonglong)_DAT_18225fbc0 << 0x20) +
           (ulonglong)uVar22 * (ulonglong)_DAT_18225fba0 +
           ((ulonglong)_DAT_18225fbb0 * (ulonglong)uVar22 +
            (uVar29 >> 0x20) * (ulonglong)_DAT_18225fba0 << 0x20) +
           ((uVar13 & 0xffffffff) * (ulonglong)_DAT_18225fb90 +
            (ulonglong)uVar30 * (ulonglong)_DAT_18225fb80 << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_18225fb80 +
           (uVar26 & 0xffffffff) * (ulonglong)_DAT_18225fb60 +
           ((ulonglong)_DAT_18225fb70 * (uVar26 & 0xffffffff) +
            (ulonglong)uVar27 * (ulonglong)_DAT_18225fb60 << 0x20))) + 0x1263ba8eeb224a3;
  _DAT_1833607c0 = uVar19 ^ uVar11;
  _DAT_183360bf0 = (_DAT_183360bf0 ^ uVar11) + uVar19 ^ 0xff943094ff79e48d;
  _DAT_1833608f8 = (_DAT_1833608f8 * -0x6de29c96efeb8ba9 ^ _DAT_183360bf0) + uVar11;
  _DAT_183360bd0 = _DAT_1833608f8 ^ _DAT_183360bf0;
  uVar13 = (~_DAT_183360a30 + 0x50e94a561f2e803c) *
           ((_DAT_183360bc0 ^ 0x75582415b0b73205) + (_DAT_183360bc0 & 0x75582415b0b73205) * 2);
  uVar13 = (uVar13 | _DAT_183360c78) + (uVar13 & _DAT_183360c78);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_183360b80 = uVar19;
  _DAT_183360768 =
       func_0x00018d6aed00((uVar13 | 0x25b16e43af99b23e) + (uVar13 & 0x25b16e43af99b23e));
  uVar13 = (_DAT_183360768 << 6 | _DAT_183360768 >> 0x3a) << 10 |
           (_DAT_183360768 & 0x3ffffffffffffff) >> 0x30;
  _DAT_1833609d0 = (_DAT_1833609d0 ^ uVar13) + 0x75f96e573fbf913b ^ 0xcbcb45efdf0cac9c;
  _DAT_1833609b0 = (_DAT_1833609b0 * 0x70bd6e9ea858f03b ^ _DAT_1833609d0) + uVar13;
  _DAT_183360808 = _DAT_1833609b0 ^ _DAT_1833609d0;
  _DAT_183360948 = 0x75f96e573fbf913b;
  uVar13 = (~_DAT_1833607d8 + 0xc53b72ae2e0084b9) *
           ((_DAT_183360900 ^ 0xddc6dcd4189af10d) + (_DAT_183360900 & 0x5dc6dcd4189af10d) * 2);
  uVar13 = (uVar13 | _DAT_183360ba0) + (uVar13 & _DAT_183360ba0);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_183360c58 =
       func_0x00018d6aed00((uVar13 | 0x18fdae7a369a75b5) + (uVar13 & 0x18fdae7a369a75b5));
  uVar13 = (_DAT_183360c58 ^ 0xddc6dcd49cb8d228) << 0x21 |
           (_DAT_183360c58 ^ 0xddc6dcd49cb8d228) >> 0x1f;
  _DAT_1833608e8 = (_DAT_1833608e8 ^ uVar13) + 0x18fdae7ab2b85690 ^ 0x6cfe4925e715dca8;
  _DAT_183360b10 = (_DAT_183360b10 * 0x2a24ce3d9fb6c01b ^ _DAT_1833608e8) + uVar13;
  _DAT_183360788 = _DAT_183360b10 ^ _DAT_1833608e8;
  _DAT_183360a80 = 0x18fdae7ab2b85690;
  uVar13 = (~_DAT_1833609f8 + 0x81bb252022a4d401) *
           ((_DAT_183360c48 ^ 0x84222325) + (ulonglong)((uint)_DAT_183360c48 & 0x84222325) * 2);
  uVar13 = (uVar13 | _DAT_183360810) + (uVar13 & _DAT_183360810);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_1833609a8 =
       func_0x00018d6aed00((uVar13 | 0x81bb2520a686f725) + (uVar13 & 0x81bb2520a686f725));
  uVar13 = _DAT_1833609a8 << 0x18 | _DAT_1833609a8 >> 0x28;
  _DAT_183360738 = (_DAT_183360738 ^ uVar13) + 0x7e44dadfdd5b2c00 ^ 0x1136c5419b93fdff;
  _DAT_1833607d8 = (_DAT_1833607d8 * -0xe54ce67507f1a6b ^ _DAT_183360738) + uVar13;
  _DAT_183360868 = _DAT_1833607d8 ^ _DAT_183360738;
  _DAT_183360aa8 = 0x7e44dadfdd5b2c00;
  _DAT_1833608b0 = func_0x00018d6aed00(_DAT_183360b20 ^ 0xe0b45ba604e28184);
  uVar13 = _DAT_1833608b0 >> 1 | _DAT_1833608b0;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = (ulonglong)
           (~((uint)_DAT_1833608b0 ^
             (0x40 - (uint)(byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                 >> 0x38)) * 2) & 0x20);
  _DAT_1833609f8 = _DAT_183360be0 ^ uVar13 ^ 0x81bb252022a4d420;
  _DAT_183360710 = (_DAT_183360710 ^ uVar13) + 0x81bb252022a4d420 ^ 0x558ecba14082f1d4;
  _DAT_183360750 = (_DAT_183360750 * -0x3a614d8673e639d3 ^ _DAT_183360710) + uVar13;
  _DAT_183360b10 = _DAT_183360750 ^ _DAT_183360710;
  _DAT_183360790 = 0x81bb252022a4d420;
  _DAT_1833607f8 = func_0x00018d6aed00(_DAT_183360a48 + 0x93badb49024db210 ^ 0x26);
  uVar13 = (_DAT_1833607f8 ^ 0x7e44dadfdd5b2c00) & 0xffffffffffffffe0;
  _DAT_1833607b8 = _DAT_183360b88 ^ uVar13 ^ 0x20;
  _DAT_1833608b8 = (_DAT_1833608b8 ^ uVar13) + 0x20 ^ 0x13fa2342702836b9;
  _DAT_183360c50 = (_DAT_183360c50 * 0x69b787e6aa447e0b ^ _DAT_1833608b8) + uVar13;
  _DAT_183360760 = _DAT_183360c50 ^ _DAT_1833608b8;
  _DAT_183360980 = 0x20;
  uVar13 = (~_DAT_183360a80 + 0x7e23db9aa3e52e81) *
           ((_DAT_183360710 ^ 0x84222325) + (ulonglong)((uint)_DAT_183360710 & 0x84222325) * 2);
  uVar13 = (uVar13 | _DAT_183360ba0) + (uVar13 & _DAT_183360ba0);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_183360bc8 =
       func_0x00018d6aed00((uVar13 | 0x7e23db9a27c70da5) + (uVar13 & 0x7e23db9a27c70da5));
  uVar13 = (_DAT_183360bc8 ^ 0x7e23db9aa3e52e80) & 0xfffffffffffffff8 ^ 0x7e23db9aa3e52e80;
  _DAT_1833609c0 = (_DAT_1833609c0 ^ uVar13) + 0x81dc24655c1ad180 ^ 0x133b8816d565fc9a;
  _DAT_183360a88 = (_DAT_183360a88 * -0x7bad264c8afd35f ^ _DAT_1833609c0) + uVar13;
  _DAT_183360c30 = 0x81dc24655c1ad180;
  uVar13 = (_DAT_183360988 ^ _DAT_18225fc20) + _DAT_183360cd8 + 0x84222305;
  uVar12 = (_DAT_183360cd8 ^ _UNK_18225fc28) + _DAT_183360988 + 0x7e23db9aa3e52e80;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183360988 ^ _DAT_18225fc20;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360cd8 ^ _UNK_18225fc28;
  _DAT_183360a70 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360988 + 0x7e23db9aa3e52e80)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183360cd8 + 0x84222305));
  uVar12 = _DAT_183360a70 ^ 0x20;
  uVar13 = uVar12 >> 1 | uVar12;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10 ^ uVar12;
  uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar12 = (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar12;
  _DAT_1833608c8 = _DAT_183360890 ^ uVar12 ^ 0x7e23db9aa3e52ea0;
  _DAT_183360aa8 = (_DAT_183360aa8 ^ uVar12) + 0x7e23db9aa3e52ea0 ^ 0x9baa89e4b4a9cf08;
  _DAT_183360a40 = (_DAT_183360a40 * -0x375a0a2affd11259 ^ _DAT_183360aa8) + uVar12;
  _DAT_1833608e0 = _DAT_183360a40 ^ _DAT_183360aa8;
  _DAT_183360ab8 = 0x7e23db9aa3e52ea0;
  uVar13 = (_DAT_183360860 ^ _DAT_18225fc30) + _DAT_183360a18 + 0x7e23db9a27c70d85;
  uVar12 = (_DAT_183360a18 ^ _UNK_18225fc38) + _DAT_183360860 + 0x81dc24655c1ad180;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183360860 ^ _DAT_18225fc30;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360a18 ^ _UNK_18225fc38;
  _DAT_1833607d0 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360860 + 0x81dc24655c1ad180)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183360a18 + 0x7e23db9a27c70d85));
  uVar13 = (_DAT_1833607d0 ^ 0x3f44849e7f000) & 0x3ffffffffffff;
  _DAT_1833609a0 = _DAT_183360948 ^ uVar13 ^ 0x20;
  _DAT_183360c28 = (_DAT_183360c28 ^ uVar13) + 0x20 ^ 0x98e74e62c0fc6e43;
  _DAT_183360b80 = (_DAT_183360b80 * 0x20b7a319b019a4ef ^ _DAT_183360c28) + uVar13;
  _DAT_183360908 = _DAT_183360b80 ^ _DAT_183360c28;
  _DAT_183360758 = 0x20;
  _DAT_183360888 = func_0x00018d6aed00(_DAT_183360b30 + 0x97b94a3404e18bb4 ^ 0x79);
  _DAT_183360af8 = (_DAT_183360af8 ^ _DAT_183360968) + 0x555aee99b0beea20 ^ 0xfdf74badccbc6cf4;
  _DAT_183360c48 = (_DAT_183360c48 * -0x6366f0fbe764e9ff ^ _DAT_183360af8) + _DAT_183360968;
  _DAT_183360bb0 = _DAT_183360c48 ^ _DAT_183360af8;
  _DAT_183360b10 = 0x555aee99b0beea20;
  uVar13 = (_DAT_183360aa8 ^ _DAT_18225fc40) + _DAT_183360af0 + 0x555aee99349cc905;
  uVar12 = (_DAT_183360af0 ^ _UNK_18225fc48) + _DAT_183360aa8 + 0xaaa511664f411600;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183360aa8 ^ _DAT_18225fc40;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360af0 ^ _UNK_18225fc48;
  _DAT_183360a58 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360aa8 + 0xaaa511664f411600)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183360af0 + 0x555aee99349cc905));
  uVar13 = _DAT_183360ab0 & 0xffffffffffe00000;
  _DAT_1833608a0 = _DAT_183360a58 ^ uVar13 ^ 0x20;
  _DAT_183360968 = (_DAT_183360968 ^ uVar13) + 0x20 ^ 0x87e56a8329a6bcad;
  _DAT_183360868 = (_DAT_183360868 * -0x64062f5c31898603 ^ _DAT_183360968) + uVar13;
  _DAT_183360760 = _DAT_183360868 ^ _DAT_183360968;
  _DAT_1833609a8 = 0x20;
  _DAT_183360718 = func_0x00018d6aed00(_DAT_183360708 ^ 0x1d9bfbf68a402428);
  uVar13 = (_DAT_183360718 ^ 0x7dfdee7fbfbfd7bb) * -0x720559682afb4929;
  _DAT_183360bf8 = _DAT_183360b28 ^ uVar13 ^ 0x8ef71cd1f277e7cb;
  _DAT_183360a70 = (_DAT_183360a70 ^ uVar13) + 0x8ef71cd1f277e7cb ^ 0xc8b57b4309ad154;
  _DAT_183360a80 = (_DAT_183360a80 * 0x23cd56046b8fc559 ^ _DAT_183360a70) + uVar13;
  _DAT_183360c40 = _DAT_183360a80 ^ _DAT_183360a70;
  _DAT_183360b48 = 0x8ef71cd1f277e7cb;
  _DAT_183360918 = func_0x00018d6aed00(_DAT_183360958 ^ 0x135c04067e4025b8);
  _DAT_1833608e0 = (_DAT_1833608e0 ^ _DAT_183360918) + 0x6d04c02d8d07c7ab ^ 0x189db1ef0a98d6e3;
  _DAT_183360800 = (_DAT_183360800 * -0x6a68efc6cadfb545 ^ _DAT_1833608e0) + _DAT_183360918;
  _DAT_183360830 = _DAT_183360800 ^ _DAT_1833608e0;
  _DAT_183360b60 = 0x6d04c02d8d07c7ab;
  uVar13 = (_DAT_183360af0 ^ _DAT_18225fc50) + _DAT_183360b50 + 0x75f96e57bb9db21e;
  uVar12 = (_DAT_183360b50 ^ _UNK_18225fc58) + _DAT_183360af0 + 0x18fdae7ab2b85690;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183360af0 ^ _DAT_18225fc50;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360b50 ^ _UNK_18225fc58;
  _DAT_183360740 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360af0 + 0x18fdae7ab2b85690)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183360b50 + 0x75f96e57bb9db21e));
  uVar13 = _DAT_183360740 - (_DAT_183360740 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_183360740
  ;
  _DAT_183360c88 = (_DAT_183360c88 ^ uVar13) + 0x10f92e5232b81010 ^ 0x8e10e8eba7e57cf4;
  _DAT_183360700 = (_DAT_183360700 * 0x253ec59cb7957531 ^ _DAT_183360c88) + uVar13;
  _DAT_183360b58 = _DAT_183360700 ^ _DAT_183360c88;
  _DAT_183360970 = 0x10f92e5232b81010;
  uVar13 = (_DAT_183360c00 ^ _DAT_18225fc60) + _DAT_183360b88 + 0x6d04c02d0925e48e;
  uVar12 = (_DAT_183360b88 ^ _UNK_18225fc68) + _DAT_183360c00 + 0x21f25ca465702020;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183360c00 ^ _DAT_18225fc60;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360b88 ^ _UNK_18225fc68;
  _DAT_183360a30 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360c00 + 0x21f25ca465702020)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183360b88 + 0x6d04c02d0925e48e));
  uVar13 = _DAT_183360a30 - (_DAT_183360a30 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
           _DAT_183360a30;
  _DAT_183360ba0 = _DAT_1833609d8 ^ uVar13 ^ 0x8ef71cd1f277e7cb;
  _DAT_183360c18 = (_DAT_183360c18 ^ uVar13) + 0x8ef71cd1f277e7cb ^ 0x15d51218f7c4b4bd;
  _DAT_183360938 = (_DAT_183360938 * -0x7029dec82458ad09 ^ _DAT_183360c18) + uVar13;
  _DAT_183360b20 = _DAT_183360938 ^ _DAT_183360c18;
  _DAT_183360840 = _DAT_183360868 ^ 0x8ef71cd1f277e7cb;
  _DAT_183360898 = -0x7108e32e0d881835;
  uVar13 = (~_DAT_183360738 + 0x8ef71cd1f277e7cc) *
           ((_DAT_183360960 ^ 0x8ef71cd17655c4ee) + (_DAT_183360960 & 0xef71cd17655c4ee) * 2);
  uVar13 = (uVar13 | _DAT_183360b08) + (uVar13 & _DAT_183360b08);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_183360978 =
       func_0x00018d6aed00((uVar13 | 0x84222325) + (ulonglong)((uint)uVar13 & 0x84222325));
  _DAT_183360c78 = _DAT_183360978 & 0x8ef71cd1f277e7cb;
  _DAT_183360c98 = _DAT_183360c98 ^ _DAT_183360c78 ^ 0x446c313c3844c20d;
  _DAT_183360b88 = (_DAT_183360b88 * 0x4f9da2c2e64494f5 ^ _DAT_183360c98) + _DAT_183360c78;
  _DAT_183360770 = _DAT_183360b88 ^ _DAT_183360c98;
  _DAT_1833607a8 = 0;
  _DAT_183360c10 = func_0x00018d6aed00(_DAT_183360890 ^ 0x20ff83faffddbc);
  uVar13 = _DAT_183360c10 >> 1 | _DAT_183360c10;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = 0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_183360c10;
  uVar13 = (uVar13 ^ 0x20) << 0x27 | uVar13 >> 0x19;
  _DAT_183360860 = _DAT_183360aa8 ^ uVar13 ^ 0x20;
  _DAT_183360998 = (_DAT_183360998 ^ uVar13) + 0x20 ^ 0x199b575704e27b89;
  _DAT_1833607b8 = (_DAT_1833607b8 * -0x41f394254d0f798d ^ _DAT_183360998) + uVar13;
  _DAT_183360990 = _DAT_1833607b8 ^ _DAT_183360998;
  _DAT_1833608c8 = 0x20;
  uVar13 = (_DAT_183360bc8 ^ _DAT_18225fc70) + _DAT_183360cd0 + 0x75f96e57bb9db21e;
  uVar12 = (_DAT_183360cd0 ^ _UNK_18225fc78) + _DAT_183360bc8 + 0x8a0691a8c0406ec4;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183360bc8 ^ _DAT_18225fc70;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360cd0 ^ _UNK_18225fc78;
  _DAT_1833607a8 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183360bc8 + 0x8a0691a8c0406ec4)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183360cd0 + 0x75f96e57bb9db21e));
  uVar13 = (~_DAT_1833607a8 & 7) << 0x2d | ~_DAT_1833607a8 >> 0x13;
  _DAT_183360ce8 = _DAT_183360ce8 ^ uVar13 ^ 0xd1ab1aa5fddf6727;
  _DAT_183360870 = (_DAT_183360870 * 0x1ec577341d73cd85 ^ _DAT_183360ce8) + uVar13;
  _DAT_183360a10 = _DAT_183360870 ^ _DAT_183360ce8;
  _DAT_183360ab8 = 0;
  _DAT_183360be0 = func_0x00018d6aed00(_DAT_183360bc0 ^ 0xffdd007bfcffdd6b);
  uVar13 = _DAT_183360be0 & 0x7ffffffffff;
  _DAT_1833609a0 = _DAT_183360c88 ^ uVar13 ^ 0x20;
  _DAT_1833608e8 = (_DAT_1833608e8 ^ uVar13) + 0x20 ^ 0x38f94fb84a130fab;
  _DAT_1833607e0 = (_DAT_1833607e0 * 0x46f83626fc74d341 ^ _DAT_1833608e8) + uVar13;
  _DAT_183360b38 = _DAT_1833607e0 ^ _DAT_1833608e8;
  _DAT_1833607f0 = 0x20;
  _DAT_183360cd0 = func_0x00018d6aed00(_DAT_183360898 + 0x22ff83fb001dffU ^ 0x8f);
  uVar13 = (ulonglong)((uint)_DAT_183360cd0 ^ 0x20) << 0x2a | _DAT_183360cd0 >> 0x16;
  _DAT_183360b78 = _DAT_183360888 ^ uVar13 ^ 0x20;
  _DAT_183360ba0 = (_DAT_183360ba0 ^ uVar13) + 0x20 ^ 0xe62eb0aef30c0a0d;
  _DAT_183360900 = (_DAT_183360900 * 0xe51c637bfa246c1 ^ _DAT_183360ba0) + uVar13;
  _DAT_183360a48 = _DAT_183360900 ^ _DAT_183360ba0;
  _DAT_183360a88 = 0x20;
  switch(uVar19 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd68dcf9 -----

undefined8 FUN_18d68dcf9(void)

{
  func_0x000180001044();
  return 0;
}


// ----- block @ rva 0xd696021 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d696021(void)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *unaff_RBP;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar13;
  uint uVar14;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM12_Qb;
  uint uVar15;
  
  *(bool *)(unaff_RBP + 10) = *unaff_RBP == 0;
  _DAT_183360a38 = func_0x00018d6aed00(_DAT_183360750 + 0xeeff4f14005bff ^ 0xbe);
  _DAT_183360ab0 = (_DAT_183360ab0 ^ _DAT_183360a38 ^ 0x91f54256) + 0xd5ffced7 ^ 0xe7e1751fe3a9ba86;
  _DAT_183360868 =
       (_DAT_183360868 * 0x37bf38416232503 ^ _DAT_183360ab0) + (_DAT_183360a38 ^ 0x91f54256);
  _DAT_183360890 = _DAT_183360868 ^ _DAT_183360ab0;
  _DAT_183360ce0 = 0xd5ffced7;
  uVar8 = (_DAT_183360a70 ^ _DAT_18225ef70) + _DAT_183360818 + 0x6442bf17;
  uVar11 = (_DAT_183360818 ^ _UNK_18225ef78) + _DAT_183360a70 + 0xfb0146e4;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360a70 ^ _DAT_18225ef70;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360818 ^ _UNK_18225ef78;
  _DAT_183360c58 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360a70 + 0xfb0146e4) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360818 + 0x6442bf17));
  uVar8 = _DAT_183360c58 * 0xd1fea8cd373a24b;
  uVar11 = uVar8 >> 1 | uVar8;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar8;
  _DAT_1833608f0 = (_DAT_1833608f0 ^ uVar8) + 0x1b61dad6 ^ 0xa2b3eb809e2b60b;
  _DAT_183360a48 = (_DAT_183360a48 * -0x59a3780da609663f ^ _DAT_1833608f0) + uVar8;
  _DAT_1833609a0 = _DAT_183360a48 ^ _DAT_1833608f0;
  _DAT_1833607a8 = 0x1b61dad6;
  uVar8 = (~_DAT_183360ab0 + 0x26e3999e) *
          ((_DAT_1833608d8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833608d8 & 0x84222325) * 2);
  uVar8 = (uVar8 | _DAT_183360bd8) + (uVar8 & _DAT_183360bd8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_183360c28 = func_0x00018d6aed00((uVar8 | 0xa2c1bab8) + (ulonglong)((uint)uVar8 & 0xa2c1bab8))
  ;
  _DAT_183360890 = (_DAT_183360890 ^ _DAT_183360918 ^ 0x26e3999d) - 0x26e3999d ^ 0x1a43c9f40e451b5e;
  _DAT_1833609a8 =
       (_DAT_1833609a8 * -0x14276c34e46998fd ^ _DAT_183360890) + (_DAT_183360918 ^ 0x26e3999d);
  _DAT_183360c80 = _DAT_1833609a8 ^ _DAT_183360890;
  _DAT_183360c00 = 0xd91c6663;
  _DAT_183360848 = func_0x00018d6aed00(_DAT_1833607c0 ^ 0x84ff9dd7ff3eda);
  uVar8 = (_DAT_183360848 ^ 0x26e39e5d) & 0xfffffffffff;
  _DAT_183360760 = _DAT_183360818 ^ uVar8 ^ 0x26e3a15d;
  _DAT_183360828 = (_DAT_183360828 ^ uVar8) + 0x26e3a15d ^ 0x93e820dc3c06ced;
  _DAT_183360b88 = (_DAT_183360b88 * 0x1facadf93c37254f ^ _DAT_183360828) + uVar8;
  _DAT_183360c90 = _DAT_183360b88 ^ _DAT_183360828;
  _DAT_1833607a0 = 0x26e3a15d;
  uVar8 = (_DAT_183360a70 ^ _DAT_18225ef80) + _DAT_183360a48 + 0xa2c18278;
  uVar11 = (_DAT_183360a48 ^ _UNK_18225ef88) + _DAT_183360a70 + 0xd91c6663;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360a70 ^ _DAT_18225ef80;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360a48 ^ _UNK_18225ef88;
  _DAT_183360760 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360a70 + 0xd91c6663) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360a48 + 0xa2c18278));
  uVar8 = (_DAT_183360760 ^ 0xffffe77f) & 0x7fffffffffffffff;
  _DAT_183360898 = _DAT_183360910 ^ uVar8 ^ 0x1000007c0;
  _DAT_1833607b8 = (_DAT_1833607b8 ^ uVar8) + 0x1000007c0 ^ 0x1c6560d0a98fa328;
  _DAT_183360ae0 = (_DAT_183360ae0 * -0x3e504fd7f54f64c5 ^ _DAT_1833607b8) + uVar8;
  _DAT_183360930 = _DAT_183360ae0 ^ _DAT_1833607b8;
  _DAT_1833609f0 = 0x7c0;
  uVar8 = (_DAT_183360c68 ^ _DAT_18225ef90) + _DAT_183360ab0 + 0x842224e5;
  uVar11 = (_DAT_183360ab0 ^ _UNK_18225ef98) + _DAT_183360c68 + 0x544393ac;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360c68 ^ _DAT_18225ef90;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360ab0 ^ _UNK_18225ef98;
  _DAT_1833608e8 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360c68 + 0x544393ac) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360ab0 + 0x842224e5));
  uVar8 = ((_DAT_1833608e8 ^ 0x28d0bb87500) << 0xd | _DAT_1833608e8 >> 0x33) ^ 0x7c0;
  _DAT_183360a60 = _DAT_183360928 ^ uVar8 ^ 0x54439b6c;
  _DAT_183360bd8 = (_DAT_183360bd8 ^ uVar8) + 0x54439b6c ^ 0xdc3f75df450d4423;
  _DAT_183360838 = (_DAT_183360838 * 0x38734ade3d0483df ^ _DAT_183360bd8) + uVar8;
  _DAT_183360970 = _DAT_183360838 ^ _DAT_183360bd8;
  _DAT_183360c68 = 0x54439b6c;
  uVar8 = (~_DAT_183360b10 + 0xabbc6c55) *
          ((_DAT_183360c30 ^ 0xd061b849) + (ulonglong)((uint)_DAT_183360c30 & 0xd061b849) * 2);
  uVar8 = (uVar8 | _DAT_183360720) + (uVar8 & _DAT_183360720);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_183360a78 = func_0x00018d6aed00((uVar8 | 0x7bddd41d) + (ulonglong)((uint)uVar8 & 0x7bddd41d))
  ;
  uVar8 = (_DAT_183360a78 ^ 0xabbc6410) & 0x7fffffffffffffff;
  uVar11 = uVar8 - (((_DAT_183360a78 ^ 0xabbc6410) & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8;
  _DAT_183360778 = _DAT_183360ca8 ^ uVar8 ^ 0x1000007c0;
  _DAT_1833609d8 = (_DAT_1833609d8 ^ uVar8) + 0x1000007c0 ^ 0x889d8724cba7303a;
  _DAT_183360898 = (_DAT_183360898 * -0x699e56e20a41a789 ^ _DAT_1833609d8) + uVar8;
  _DAT_1833607f0 = _DAT_183360898 ^ _DAT_1833609d8;
  _DAT_183360738 = 0x7c0;
  _DAT_183360a70 = func_0x00018d6aed00(_DAT_183360af0 + 0x34ffca9d00b0ffU ^ 0x11);
  _DAT_1833607c8 = _DAT_1833607c8 - 0xde937c86 ^ 0xd21f1fd0afaaa8b5;
  _DAT_183360830 = _DAT_183360ad8 * -0x31c2cd00cad04ff7;
  _DAT_183360ad8 = _DAT_183360830 ^ _DAT_1833607c8;
  _DAT_183360ce0 = _DAT_183360c90 ^ 0xffffffff216c837a;
  _DAT_183360700 = 0x216c837a;
  _DAT_183360a70 = func_0x00018d6aed00(_DAT_183360a70 + 0x47ffc5a10090ff ^ 0x32);
  uVar8 = _DAT_183360a70 ^ 0xde937806;
  uVar11 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar8;
  _DAT_183360ac0 = _DAT_183360a90 ^ uVar8 ^ 0xde938446;
  _DAT_183360ad8 = (_DAT_183360ad8 ^ uVar8) + 0xde938446 ^ 0xbbedd56c9d530a68;
  _DAT_183360790 = (_DAT_183360790 * -0x447670ba39aceb8f ^ _DAT_183360ad8) + uVar8;
  _DAT_183360948 = _DAT_183360790 ^ _DAT_183360ad8;
  _DAT_183360a18 = 0xde938446;
  _DAT_183360b68 = func_0x00018d6aed00(0xffe3ffbbf793c717);
  _DAT_183360a88 = _DAT_183360850 ^ _DAT_183360b68 ^ 0x1000007c0;
  _DAT_183360cc0 = (_DAT_183360cc0 ^ _DAT_183360b68) + 0x1000007c0 ^ 0x5fe643e332e731ea;
  _DAT_1833607e8 = (_DAT_1833607e8 * 0x6a47b371849edee7 ^ _DAT_183360cc0) + _DAT_183360b68;
  _DAT_1833609b0 = _DAT_1833607e8 ^ _DAT_183360cc0;
  _DAT_183360ca8 = _DAT_183360880 ^ 0x1000007c0;
  _DAT_183360c90 = 0x7c0;
  _DAT_183360c28 = func_0x00018d6aed00(_DAT_183360828 + 0xffe8ffb5dbff83ff ^ 0x34);
  uVar8 = (_DAT_183360c28 << 0x3e | _DAT_183360c28 >> 2) ^ 0x1b61dad6;
  _DAT_183360968 = _DAT_1833607a0 ^ uVar8 ^ 0xf161a9ad;
  _DAT_183360a50 = (_DAT_183360a50 ^ uVar8) + 0xf161a9ad ^ 0xd2e826efc60d328;
  _DAT_1833607f8 = (_DAT_1833607f8 * -0x2b01e9892dadf6bd ^ _DAT_183360a50) + uVar8;
  _DAT_183360a38 = _DAT_1833607f8 ^ _DAT_183360a50;
  _DAT_183360ca0 = 0xf161a9ad;
  uVar8 = (~_DAT_183360908 + 0x1b61dad7) *
          ((_DAT_183360c28 ^ 0x51ddedf2) + (ulonglong)((uint)_DAT_183360c28 & 0x51ddedf2) * 2);
  uVar8 = (uVar8 | _DAT_183360ac0) + (uVar8 & _DAT_183360ac0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uVar8 = func_0x00018d6aed00((uVar8 | 0x4abc3724) + (ulonglong)((uint)uVar8 & 0x4abc3724));
  uVar8 = (ulonglong)(~((uint)((uVar8 ^ 0x12) << 0x1b) | (uint)(uVar8 >> 0x25)) & 0xd5ffced7) ^
          0xd5ffced7;
  _DAT_183360800 = (_DAT_183360800 ^ uVar8) + 0xce9e1401 ^ 0x83ead928cfef59ad;
  _DAT_183360758 = (_DAT_183360758 * 0x7d82dfde70366da7 ^ _DAT_183360800) + uVar8;
  _DAT_183360968 = _DAT_183360758 ^ _DAT_183360800;
  _DAT_183360880 = 0xce9e1401;
  uVar8 = (~_DAT_1833607c0 + 0x1b61dad7) *
          ((_DAT_183360908 ^ 0x51ddedf2) + (ulonglong)((uint)_DAT_183360908 & 0x51ddedf2) * 2);
  uVar8 = (uVar8 | _DAT_1833609d8) + (uVar8 & _DAT_1833609d8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_1833608d8 = func_0x00018d6aed00((uVar8 | 0x4abc3724) + (ulonglong)((uint)uVar8 & 0x4abc3724))
  ;
  _DAT_183360cb8 =
       (_DAT_183360cb8 ^ _DAT_1833608d8 & 0x7fffffffffffffff) + 0x1161cad6 ^ 0x219a5d61d611653b;
  _DAT_183360a08 =
       (_DAT_183360a08 * -0x67d2a8b951c02ccf ^ _DAT_183360cb8) +
       (_DAT_1833608d8 & 0x7fffffffffffffff);
  _DAT_183360ca8 = _DAT_183360a08 ^ _DAT_183360cb8;
  _DAT_183360750 = 0x1161cad6;
  _DAT_183360c60 = func_0x00018d6aed00(_DAT_1833609c8 ^ 0x62005888006a49);
  uVar8 = _DAT_183360c60 >> 1 | _DAT_183360c60;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183360c60;
  _DAT_183360a10 = _DAT_183360ae8 ^ uVar8 ^ 0xf161a9ad;
  _DAT_183360948 = (_DAT_183360948 ^ uVar8) + 0xf161a9ad ^ 0x30d2d5052dae936f;
  _DAT_183360998 = (_DAT_183360998 * -0x582de107e079806f ^ _DAT_183360948) + uVar8;
  _DAT_183360778 = _DAT_183360998 ^ _DAT_183360948;
  _DAT_183360ae8 = 0xf161a9ad;
  uVar8 = (_DAT_183360a50 ^ _DAT_18225efa0) + _DAT_183360898 + 0x51ddedf2;
  uVar11 = (_DAT_183360898 ^ _UNK_18225efa8) + _DAT_183360a50 + 0xffffffff;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360a50 ^ _DAT_18225efa0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360898 ^ _UNK_18225efa8;
  _DAT_183360760 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360a50 + 0xffffffff) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360898 + 0x51ddedf2));
  uVar8 = _DAT_183360760 & 0x7fffffffffffffff ^ 0xffffffff;
  _DAT_183360c30 = (_DAT_183360c30 ^ uVar8) + 0x2a003128 ^ 0x6d92438c113bc21c;
  _DAT_183360c40 = (_DAT_183360c40 * 0x20d19a41d91ef813 ^ _DAT_183360c30) + uVar8;
  _DAT_183360ca0 = _DAT_183360c40 ^ _DAT_183360c30;
  _DAT_183360b40 = 0x2a003128;
  uVar8 = (_DAT_1833607a0 ^ _DAT_18225efb0) + _DAT_183360c60 + 0x51ddedf2;
  uVar11 = (_DAT_183360c60 ^ _UNK_18225efb8) + _DAT_1833607a0 + 0x2a003128;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833607a0 ^ _DAT_18225efb0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360c60 ^ _UNK_18225efb8;
  _DAT_1833608f0 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833607a0 + 0x2a003128) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360c60 + 0x51ddedf2));
  uVar8 = _DAT_1833608f0 ^ 0xffffffff;
  uVar11 = uVar8 >> 1 | uVar8;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x80 ^ uVar8) * -0x71325a7204897c1f;
  _DAT_183360b00 = _DAT_183360b00 ^ uVar8 ^ 0x4a371d730d42f06a;
  _DAT_183360cc0 = (_DAT_183360cc0 * -0x61de599ac6f7154f ^ _DAT_183360b00) + uVar8;
  _DAT_183360b10 = _DAT_183360cc0 ^ _DAT_183360b00;
  _DAT_1833608e8 = 0;
  uVar8 = (_DAT_183360c30 ^ _DAT_18225efc0) + _DAT_183360c80 + 0x4059ada2;
  uVar11 = (_DAT_183360c80 ^ _UNK_18225efc8) + _DAT_183360c30 + 0xc47b8e87;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360c30 ^ _DAT_18225efc0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360c80 ^ _UNK_18225efc8;
  _DAT_183360938 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360c30 + 0xc47b8e87) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360c80 + 0x4059ada2));
  uVar8 = (_DAT_183360938 ^ 0xc47b8e87) * -0x594503ce60b6ffe5;
  _DAT_1833608d0 = _DAT_1833608d0 ^ uVar8 ^ 0xf8fc4d8568b39df9;
  _DAT_183360c08 = (_DAT_183360c08 * -0x3218f03f41581ffd ^ _DAT_1833608d0) + uVar8;
  _DAT_1833608b8 = _DAT_183360c08 ^ _DAT_1833608d0;
  _DAT_1833609d0 = 0;
  _DAT_183360ca0 = func_0x00018d6aed00(_DAT_183360bb0 ^ 0xffdbff7c9d0021a4);
  _DAT_183360988 = _DAT_183360798 ^ _DAT_183360ca0 ^ 0x7c0;
  _DAT_183360840 = (_DAT_183360840 ^ _DAT_183360ca0) + 0x7c0 ^ 0x5955ac55cbc1501d;
  _DAT_183360a10 = (_DAT_183360a10 * 0x78c0e716b9cd17e7 ^ _DAT_183360840) + _DAT_183360ca0;
  _DAT_183360b60 = _DAT_183360a10 ^ _DAT_183360840;
  _DAT_183360c18 = 0x7c0;
  uVar5 = *(uint *)(unaff_RBP + 0x11);
  uVar11 = (ulonglong)uVar5;
  uVar8 = (~_DAT_183360710 + 0x7c1) *
          ((uVar11 ^ 0x84222325 ^ _DAT_1833609d0) +
          (ulonglong)((uint)_DAT_1833609d0 & (uint)(uVar11 ^ 0x84222325)) * 2);
  uVar8 = (uVar8 | _DAT_183360798) + (uVar8 & _DAT_183360798);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_183360c38 =
       func_0x00018d6aed00((uVar11 ^ 0x842224e5 | uVar8) +
                           (ulonglong)((uint)(uVar11 ^ 0x842224e5) & (uint)uVar8));
  uVar8 = (_DAT_183360c38 ^ uVar11) & 0xffffffffffe00000;
  _DAT_183360700 = (ulonglong)(uVar5 & 0x7c0);
  unaff_RBP[0x11] = _DAT_183360700;
  _DAT_183360ca0 = (_DAT_183360ca0 ^ uVar8) + _DAT_183360700 ^ 0x1f52d157e4cbf51d;
  _DAT_183360ba0 = (_DAT_183360ba0 * -0x389ed9abb66d4cd ^ _DAT_183360ca0) + uVar8;
  _DAT_183360b80 = _DAT_183360ba0 ^ _DAT_183360ca0;
  plVar2 = (longlong *)unaff_RBP[8];
  lVar3 = (**(code **)(plVar2 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(plVar2);
  *(int *)(unaff_RBP + 0xc) = (int)*(char *)(lVar3 + (int)unaff_RBP[0xd]);
  (**(code **)(plVar2 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(plVar2);
  uVar5 = *(uint *)(unaff_RBP + 0xc);
  _DAT_183360998 = func_0x00018d6aed00(_DAT_183360ab8 ^ 0x2fff49a6ff83a7);
  uVar8 = _DAT_183360998 ^ 0xffbf77df;
  uVar11 = uVar8 >> 1 | uVar8;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar8 = (ulonglong)
          (((uint)uVar8 ^
           0x40 - (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
          & 0xc993541b);
  _DAT_183360b00 = (_DAT_183360b00 ^ uVar8) + 0xffbf77df ^ 0x33d3c1d57d1c6b12;
  _DAT_183360bd8 = (_DAT_183360bd8 * 0x7bf75d255efb90db ^ _DAT_183360b00) + uVar8;
  _DAT_183360c50 = _DAT_183360bd8 ^ _DAT_183360b00;
  _DAT_183360ce8 = 0xffbf77df;
  uVar8 = (_DAT_1833608e0 ^ _DAT_18225efd0) + _DAT_183360c60 + 0x1705ba27;
  uVar11 = (_DAT_183360c60 ^ _UNK_18225efd8) + _DAT_1833608e0 + 0x401cfe81;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833608e0 ^ _DAT_18225efd0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360c60 ^ _UNK_18225efd8;
  _DAT_183360870 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1833608e0 + 0x401cfe81) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360c60 + 0x1705ba27));
  _DAT_183360c50 =
       (_DAT_183360c50 ^ _DAT_183360870 ^ 0x24da90e03fdb8f00) + 0xd33b6783 ^ 0xa461b238e0440595;
  _DAT_183360ae8 =
       (_DAT_183360ae8 * -0x254e501c1fb4cab1 ^ _DAT_183360c50) +
       (_DAT_183360870 ^ 0x24da90e03fdb8f00);
  _DAT_183360840 = _DAT_183360ae8 ^ _DAT_183360c50;
  _DAT_183360aa8 = 0xd33b6783;
  uVar8 = (_DAT_183360858 ^ _DAT_18225efe0) + _DAT_183360950 + 0x8422231a;
  uVar11 = (_DAT_183360950 ^ _UNK_18225efe8) + _DAT_183360858 + 0x3c894510;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360858 ^ _DAT_18225efe0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360950 ^ _UNK_18225efe8;
  _DAT_183360918 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360858 + 0x3c894510) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360950 + 0x8422231a));
  uVar8 = _DAT_183360918 << 7 | _DAT_183360918 >> 0x39;
  _DAT_183360890 = _DAT_183360b48 ^ uVar8 ^ 0x3c89454f;
  _DAT_1833607d0 = (_DAT_1833607d0 ^ uVar8) + 0x3c89454f ^ 0xf0bb36aadc34df8b;
  _DAT_1833608f8 = (_DAT_1833608f8 * 0x537542efca0861b9 ^ _DAT_1833607d0) + uVar8;
  _DAT_183360930 = _DAT_1833608f8 ^ _DAT_1833607d0;
  _DAT_183360cd8 = 0x3c89454f;
  uVar8 = (~_DAT_183360b90 + 0xc376baf1) *
          ((_DAT_183360cf8 ^ 0xb8ab666a) + (ulonglong)((uint)_DAT_183360cf8 & 0xb8ab666a) * 2);
  uVar8 = (uVar8 | _DAT_183360998) + (uVar8 & _DAT_183360998);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_183360838 = func_0x00018d6aed00((uVar8 | 0x7bdddc9a) + (ulonglong)((uint)uVar8 & 0x7bdddc9a))
  ;
  uVar8 = _DAT_183360838 & 0x7fffffffffffffff;
  _DAT_183360c20 = _DAT_1833607d0 ^ uVar8 ^ 0x10000003f;
  _DAT_183360ce0 = (_DAT_183360ce0 ^ uVar8) + 0x10000003f ^ 0x1af6fec113de0865;
  _DAT_183360cd8 = (_DAT_183360cd8 * 0x664df8dff926b38d ^ _DAT_183360ce0) + uVar8;
  _DAT_1833607c0 = _DAT_183360cd8 ^ _DAT_183360ce0;
  _DAT_183360bd8 = 0x3f;
  uVar8 = (~_DAT_1833609f0 + 0xa4468031) *
          ((_DAT_183360a38 ^ 0x84222325) + (ulonglong)((uint)_DAT_183360a38 & 0x84222325) * 2);
  uVar8 = (uVar8 | _DAT_1833609f8) + (uVar8 & _DAT_1833609f8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_183360a08 = func_0x00018d6aed00((uVar8 | 0x2064a315) + (ulonglong)((uint)uVar8 & 0x2064a315))
  ;
  _DAT_183360890 = (_DAT_183360890 ^ _DAT_183360a08) - 0xa4468030 ^ 0xac5a462025ac81c1;
  _DAT_183360ca0 = (_DAT_183360ca0 * 0x9dbd98faeac598b ^ _DAT_183360890) + _DAT_183360a08;
  _DAT_183360be0 = _DAT_183360ca0 ^ _DAT_183360890;
  _DAT_183360a50 = 0x5bb97fd0;
  uVar8 = (_DAT_183360728 ^ _DAT_18225eff0) + _DAT_183360b80 + 0x8422231a;
  uVar11 = (_DAT_183360b80 ^ _UNK_18225eff8) + _DAT_183360728 + 0xa4468030;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360728 ^ _DAT_18225eff0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360b80 ^ _UNK_18225eff8;
  _DAT_183360c20 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360728 + 0xa4468030) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360b80 + 0x8422231a));
  _DAT_183360ac8 = _DAT_183360980 ^ _DAT_183360be0 ^ 0xa446806f;
  _DAT_183360918 = (_DAT_183360918 ^ _DAT_183360be0) + 0xa446806f ^ 0x3b2e76271e342d0d;
  _DAT_183360a00 = (_DAT_183360a00 * -0xa53fee8a684bc65 ^ _DAT_183360918) + _DAT_183360be0;
  _DAT_183360cb8 = _DAT_183360a00 ^ _DAT_183360918;
  _DAT_183360760 = 0xa446806f;
  _DAT_183360a80 = func_0x00018d6aed00(_DAT_183360830 ^ 0xff5c007579ff342e);
  uVar8 = _DAT_183360a80 ^ 0xffffffff;
  _DAT_183360bd8 = _DAT_1833609d8 ^ uVar8 ^ 0x10000003f;
  _DAT_183360cb8 = (_DAT_183360cb8 ^ uVar8) + 0x10000003f ^ 0xacefbb04be5d0e8a;
  _DAT_183360c18 = (_DAT_183360c18 * 0x6ce9296a7d1de127 ^ _DAT_183360cb8) + uVar8;
  _DAT_183360a38 = _DAT_183360c18 ^ _DAT_183360cb8;
  _DAT_183360ca0 = 0x3f;
  _DAT_183360720 = func_0x00018d6aed00(_DAT_183360730 + 0xffef00bc6d0091ff ^ 100);
  _DAT_183360ba8 = (_DAT_183360ba8 ^ _DAT_183360720 >> 1) - 0x48d012c8 ^ 0xd9ce4c5c56dd4b20;
  _DAT_183360c08 = (_DAT_183360c08 * -0x5fa84cad07aa99fd ^ _DAT_183360ba8) + (_DAT_183360720 >> 1);
  _DAT_183360970 = _DAT_183360c08 ^ _DAT_183360ba8;
  _DAT_1833607a0 = _DAT_183360bc8 ^ 0xffffffffb72fed38;
  _DAT_183360a48 = 0xb72fed38;
  uVar8 = (_DAT_183360ba0 ^ _DAT_18225f000) + _DAT_183360c60 + 0x8422231a;
  uVar11 = (_DAT_183360c60 ^ _UNK_18225f008) + _DAT_183360ba0 + 0x48d012c8;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360ba0 ^ _DAT_18225f000;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360c60 ^ _UNK_18225f008;
  _DAT_183360888 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360ba0 + 0x48d012c8) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360c60 + 0x8422231a));
  uVar8 = (_DAT_183360888 ^ 0x11eb349f38) & 0x3ffffffffffffff ^ 0x3f;
  _DAT_183360978 = _DAT_183360b18 ^ uVar8 ^ 0x48d01307;
  _DAT_183360ba8 = (_DAT_183360ba8 ^ uVar8) + 0x48d01307 ^ 0x8189a964f615cd9;
  _DAT_183360a58 = (_DAT_183360a58 * -0x24c112e01e0e0523 ^ _DAT_183360ba8) + uVar8;
  _DAT_183360750 = _DAT_183360a58 ^ _DAT_183360ba8;
  _DAT_183360960 = 0x48d01307;
  _DAT_183360858 = func_0x00018d6aed00(_DAT_1833608f8 ^ 0xab00290a00cc9c);
  uVar11 = _UNK_18225f018;
  uVar8 = _DAT_18225f010;
  uVar4 = (_DAT_183360858 << 0x20 | _DAT_183360858 >> 0x20) ^ 0x48d01307;
  uVar4 = uVar4 << 0x3c | uVar4 >> 4;
  _DAT_183360880 = _DAT_183360c18 ^ uVar4 ^ 0x10000003f;
  _DAT_183360a60 = (_DAT_183360a60 ^ uVar4) + 0x10000003f ^ 0x13e7a4a593df1df8;
  _DAT_183360b48 = (_DAT_183360b48 * -0x680d4c40b0a1afa5 ^ _DAT_183360a60) + uVar4;
  _DAT_183360988 = _DAT_183360b48 ^ _DAT_183360a60;
  _DAT_183360c50 = 0x3f;
  uVar4 = (_DAT_1833608b0 ^ _DAT_18225f010) + _DAT_183360760 + 0x7b9d54fa;
  uVar12 = (_DAT_183360760 ^ _UNK_18225f018) + _DAT_1833608b0 + 0xd33b6783;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833608b0 ^ _DAT_18225f010;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360760 ^ _UNK_18225f018;
  _DAT_1833608b0 =
       func_0x00018d6aed00((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833608b0 + 0xd33b6783) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183360760 + 0x7b9d54fa));
  uVar4 = _DAT_1833608b0 & 0x7fffffffffffffff ^ 0xffbf77df;
  _DAT_183360c68 = (_DAT_183360c68 ^ uVar4) + 0x2c84105c ^ 0xa528aebef4550719;
  _DAT_183360700 = (_DAT_183360700 * 0x56ba5440968bae5d ^ _DAT_183360c68) + uVar4;
  _DAT_183360918 = _DAT_183360700 ^ _DAT_183360c68;
  _DAT_1833609c0 = 0x2c84105c;
  uVar4 = (_DAT_183360758 ^ uVar8) + _DAT_183360c88 + 0x7b9d54fa;
  uVar12 = (_DAT_183360c88 ^ uVar11) + _DAT_183360758 + 0xd33b6783;
  uVar8 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183360758 ^ uVar8;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183360c88 ^ uVar11;
  _DAT_183360a58 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360758 + 0xd33b6783) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360c88 + 0x7b9d54fa));
  _DAT_183360760 = (_DAT_183360760 ^ _DAT_183360a58 ^ 0xffbf77df) + 0xd33b6783 ^ 0x43076f191a519a8f;
  _DAT_1833608d8 =
       (_DAT_1833608d8 * 0x424d2b97a085ccd7 ^ _DAT_183360760) + (_DAT_183360a58 ^ 0xffbf77df);
  _DAT_1833608f0 = _DAT_1833608d8 ^ _DAT_183360760;
  _DAT_183360c20 = 0xd33b6783;
  uVar8 = (_DAT_183360760 ^ _DAT_18225f020) + _DAT_183360bf0 + 0x7b9d54fa;
  uVar11 = (_DAT_183360bf0 ^ _UNK_18225f028) + _DAT_183360760 + 0x408820;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360760 ^ _DAT_18225f020;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183360bf0 ^ _UNK_18225f028;
  _DAT_183360bc0 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183360760 + 0x408820) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360bf0 + 0x7b9d54fa));
  _DAT_183360ad8 = _DAT_183360ad8 ^ _DAT_183360bc0 ^ 0xffbf77df ^ 0xe10d99c42ce063f5;
  _DAT_183360788 =
       (_DAT_183360788 * 0x626285c335da6627 ^ _DAT_183360ad8) + (_DAT_183360bc0 ^ 0xffbf77df);
  _DAT_1833609c0 = _DAT_183360788 ^ _DAT_183360ad8;
  _DAT_1833609f0 = 0;
  uVar8 = (_DAT_183360a28 ^ 0x8422231a) + _DAT_183360930 + 0x8422231a;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183360a28 ^ 0x8422231a;
  uVar11 = ((_DAT_183360930 + _DAT_183360a28) * 0x2000 | _DAT_183360930 + _DAT_183360a28 >> 0x33) ^
           _DAT_183360930;
  _DAT_183360a20 =
       func_0x00018d6aed00((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183360a28 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183360930 + 0x8422231a));
  uVar8 = _DAT_183360a20 - (_DAT_183360a20 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183360a20;
  _DAT_1833608a8 = _DAT_183360a60 ^ uVar8 ^ 0x3f;
  _DAT_183360810 = (_DAT_183360810 ^ uVar8) + 0x3f ^ 0x2e761ba56773aaa8;
  _DAT_183360c08 = (_DAT_183360c08 * 0x79fddd53b69cd3bf ^ _DAT_183360810) + uVar8;
  _DAT_183360c90 = _DAT_183360c08 ^ _DAT_183360810;
  _DAT_183360a08 = 0x3f;
  _DAT_1833609b0 = func_0x00018d6aed00(_DAT_183360b00 ^ 0xffe0ff841a002129);
  auVar10 = _DAT_1800170c0;
  _DAT_183360ac8 = _DAT_183360830 ^ _DAT_1833609b0 ^ 0x3f;
  _DAT_183360990 = (_DAT_183360990 ^ _DAT_1833609b0) + 0x3f ^ 0xd42e36ea72bfe3f5;
  _DAT_183360b78 = (_DAT_183360b78 * -0x2de2b30bf87b72ad ^ _DAT_183360990) + _DAT_1833609b0;
  _DAT_183360710 = _DAT_183360b78 ^ _DAT_183360990;
  _DAT_1833608a8 = 0x3f;
  auVar9._8_8_ = unaff_XMM12_Qb;
  auVar9._0_8_ = (ulonglong)uVar5 ^ 0x84222325;
  auVar6 = pshufb(auVar9 ^ _DAT_18225f030,_DAT_1800170c0);
  uVar11 = auVar6._8_8_ + auVar6._0_8_;
  uVar8 = uVar11 + _DAT_183360ae0;
  if (auVar6._4_4_ < 0) {
    uVar8 = _DAT_183360ca8 ^ uVar11;
  }
  _DAT_183360a08 = func_0x00018d6aed00(SUB161(auVar9 ^ _DAT_18225f030,5) ^ uVar8);
  uVar8 = (_DAT_183360a08 & 0x7fffffffffffffff) * 0x7b0711081b9214eb;
  uVar5 = uVar5 & 0x3f;
  uVar12 = (ulonglong)uVar5;
  _DAT_183360ad0 = (_DAT_183360ad0 ^ uVar8) + uVar12 ^ 0xbe2dba9a509549bb;
  _DAT_183360a00 = (_DAT_183360a00 * -0x731abd1680af1aa9 ^ _DAT_183360ad0) + uVar8;
  _DAT_183360960 = _DAT_183360a00 ^ _DAT_183360ad0;
  uVar8 = unaff_RBP[0x11];
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar5 ^ 0x84222325;
  auVar6._8_8_ = uVar8;
  auVar9 = pshufb(auVar6 ^ _DAT_18225f040,auVar10);
  uVar4 = auVar9._8_8_ + auVar9._0_8_;
  uVar11 = uVar4 + _DAT_183360ac8;
  if (auVar9._4_4_ < 0) {
    uVar11 = _DAT_183360b00 ^ uVar4;
  }
  _DAT_183360b50 = uVar12;
  _DAT_183360c60 = func_0x00018d6aed00(SUB161(auVar6 ^ _DAT_18225f040,5) ^ uVar11);
  uVar11 = uVar12 ^ _DAT_183360c60;
  uVar4 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar11 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar11;
  _DAT_183360ac0 = uVar12 | uVar8;
  _DAT_1833607c0 = (_DAT_1833607c0 ^ uVar11) + _DAT_183360ac0 ^ 0x8a443cfbd8f81fd3;
  _DAT_183360cb8 = (_DAT_183360cb8 * -0x6cd7f1728f246515 ^ _DAT_1833607c0) + uVar11;
  _DAT_183360968 = _DAT_183360cb8 ^ _DAT_1833607c0;
  unaff_RBP[0xc] = unaff_RBP[3];
  uVar1 = *(uint *)(unaff_RBP + 4);
  uVar12 = (ulonglong)uVar1;
  auVar7._8_8_ = unaff_XMM9_Qb;
  auVar7._0_8_ = uVar12 ^ 0x84222325;
  *(uint *)(unaff_RBP + 0xd) = uVar1;
  auVar10 = pshufb(auVar7 ^ _DAT_18225f050,auVar10);
  uVar4 = auVar10._8_8_ + auVar10._0_8_;
  uVar11 = uVar4 + _DAT_183360798;
  if (auVar10._4_4_ < 0) {
    uVar11 = _DAT_183360700 ^ uVar4;
  }
  uVar11 = func_0x00018d6aed00(SUB161(auVar7 ^ _DAT_18225f050,5) ^ uVar11);
  uVar14 = uVar1 & _DAT_18001a990;
  uVar13 = uVar1 | _DAT_18001a990;
  uVar15 = uVar1 ^ _DAT_18001a990;
  uVar11 = (((uVar12 | 1) ^ uVar11) & 0x1fffffffffff) << 0xb | uVar11 >> 0x35;
  _DAT_183360ac0 =
       ((ulonglong)uVar15 * (ulonglong)_DAT_18225f0d0 << 0x20) +
       (ulonglong)uVar15 * (ulonglong)_DAT_18225f0c0 +
       ((ulonglong)uVar13 * (ulonglong)_DAT_18225f0b0 << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_18225f0a0 +
       ((ulonglong)uVar14 * (ulonglong)_DAT_18225f090 << 0x20 |
       (ulonglong)uVar14 * (ulonglong)_DAT_18225f080) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_18225f070 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_18225f060 +
       (-(((uVar12 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_18225f100 +
          ((_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_18225f100 +
           ((uVar12 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_18225f110 << 0x20) +
         ((ulonglong)uVar15 * (ulonglong)_DAT_18225f130 << 0x20) +
         (ulonglong)uVar15 * (ulonglong)_DAT_18225f120 +
         ((ulonglong)uVar14 * (ulonglong)_DAT_18225f130 << 0x20 |
         (ulonglong)uVar14 * (ulonglong)_DAT_18225f120) +
         ((ulonglong)uVar1 * (ulonglong)_DAT_18225f110 << 0x20) +
         (ulonglong)uVar1 * (ulonglong)_DAT_18225f100) -
       (((ulonglong)uVar13 * (ulonglong)_DAT_18225f150 << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_18225f140)) + 0xfbb10fb90589d13a;
  _DAT_1833608c8 = _DAT_183360bf0 ^ uVar11 ^ _DAT_183360ac0;
  _DAT_183360a58 = (_DAT_183360a58 ^ uVar11) + _DAT_183360ac0 ^ 0xba0cd5a9bb78ca55;
  _DAT_183360718 = (_DAT_183360718 * 0x7982def59ae8ff4f ^ _DAT_183360a58) + uVar11;
  _DAT_1833609a0 = _DAT_183360718 ^ _DAT_183360a58;
  _DAT_183360700 = _DAT_183360730 ^ _DAT_183360ac0;
  _DAT_183360ac0 = _DAT_183360ac0 & 0xffffffff;
  *(uint *)(unaff_RBP + 0xe) = uVar5 | (uint)uVar8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[10]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd698d77 -----

undefined8 thunk_FUN_18d68343d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xd698fa6 -----

undefined8 thunk_FUN_18d68343d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xd699031 -----

void FUN_18d699031(void)

{
  return;
}


// ----- block @ rva 0xd699182 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d699182(longlong param_1)

{
  switch(0xf < *(ulonglong *)(param_1 + 0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd6b1979 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6b1979(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xd6b1b1d -----

void FUN_18d6b1b1d(void)

{
  return;
}


// ----- block @ rva 0xd6b2bc3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6b2bc3(void)

{
  char cVar1;
  longlong *in_RAX;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*in_RAX + 0x773,0x24);
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


// ----- block @ rva 0xd6b3838 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6b3838(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined4 uStack000000000000009e;
  undefined2 uStack00000000000000a2;
  
  rdtsc();
  uStack000000000000009e = 0x450044;
  uStack00000000000000a2 = 0x53;
  (**(code **)(in_stack_00000030 + JNI->NewString /*0x518*/))(in_stack_00000030,&stack0x0000009e,3);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xbc9,0x2f);
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


// ----- block @ rva 0xd6b3f7e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6b3f7e(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
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


// ----- block @ rva 0xd6b4219 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6b4219(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_stack_00000030 + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))(in_stack_00000030,param_2,in_stack_00000038);
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


// ----- block @ rva 0xd6b46a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6b46a3(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd6b6677 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6b6677(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,param_2,0x2c);
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


// ----- block @ rva 0xd6b9eb9 -----

void FUN_18d6b9eb9(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0xd6ba13e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6ba13e(void)

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


// ----- block @ rva 0xd6ba192 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6ba192(void)

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


// ----- block @ rva 0xd6ba3ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6ba3ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1822667f8)();
  return;
}


// ----- block @ rva 0xd6ba60e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6ba60e(void)

{
  FUN_190ddfc90();
  (*_DAT_182266588)();
  return;
}


// ----- block @ rva 0xd6ba665 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6ba665(void)

{
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd6ba680 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6ba680(void)

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


// ----- block @ rva 0xd6ba6d4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6ba6d4(void)

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


// ----- block @ rva 0xd6bab68 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bab68(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_182266808)();
  return;
}


// ----- block @ rva 0xd6bace6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bace6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_182266858)();
  return;
}


// ----- block @ rva 0xd6bad60 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bad60(void)

{
  FUN_190dd72e0();
  (*_DAT_182266478)();
  return;
}


// ----- block @ rva 0xd6badc6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6badc6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_182266668)();
  return;
}


// ----- block @ rva 0xd6bb005 -----

void FUN_18d6bb005(void)

{
  return;
}


// ----- block @ rva 0xd6bb18c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bb18c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1822673c8)();
  return;
}


// ----- block @ rva 0xd6bb315 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bb315(void)

{
  FUN_190dd72e0();
  (*_DAT_182267448)();
  return;
}


// ----- block @ rva 0xd6bb5fb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6bb5fb(void)

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


// ----- block @ rva 0xd6bb9ad -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bb9ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182266fd8)();
  return;
}


// ----- block @ rva 0xd6bc398 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6bc398(void)

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


// ----- block @ rva 0xd6bc45c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bc45c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1822675d8)();
  return;
}


// ----- block @ rva 0xd6bc496 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6bc496(void)

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


// ----- block @ rva 0xd6bd126 -----

void FUN_18d6bd126(void)

{
  return;
}


// ----- block @ rva 0xd6bd1c8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6bd1c8(void)

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


// ----- block @ rva 0xd6bd3a0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bd3a0(void)

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


// ----- block @ rva 0xd6bdc64 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6bdc64(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1822671f8)();
  return;
}


// ----- block @ rva 0xd6bdcca -----

void FUN_18d6bdcca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xd6bdefb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d6bdf51 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d6bdefb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd6bdf54 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d6bdf87 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d6bdf54(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd6bfa0a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d6bfa9d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d6bfa0a(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined2 uStack000000000000010a;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000168;
  
  uStack0000000000000048 = CONCAT44((int)((ulonglong)in_stack_00000040 >> 0x20),2);
  uStack0000000000000168 = 0x59265b6c;
  rdtsc();
  uStack000000000000010a = 0x44;
  uStack000000000000010c = 0x530045;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd6c02fc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d6c0313 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d6c02fc(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd6c11be -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d6c11d5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d6c11be(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd6c1bf0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d6c1c07 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d6c1bf0(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd6c3656 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d6c36d7 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d6c3656(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd6d92b5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6d92b5(void)

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


// ----- block @ rva 0xd6d9a6c -----

void thunk_FUN_18d6c0187(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xd6da0a4 -----

void FUN_18d6da0a4(void)

{
  return;
}

