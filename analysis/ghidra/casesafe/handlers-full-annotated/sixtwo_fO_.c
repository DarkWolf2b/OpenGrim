// ===== Lsixtwo/fO; YO ()V (handler @ image 18aa91760, runtime 6ffff26a1760) =====

void FUN_18aa91760(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14ccb,0x33c);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aa917a6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18191bbf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fO; _f119d8f6a1bb3ad0f1fb0c30292c429a ()V (handler @ image 18aadc580, runtime 6ffff26ec580) =====

void FUN_18aadc580(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aadc668 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18192a850 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fO; aWj ()V (handler @ image 18aa918e0, runtime 6ffff26a18e0) =====

void FUN_18aa918e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14cbd,0x33b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aa919c2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18191bcd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fO; aWk (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18aaa80b0, runtime 6ffff26b80b0) =====

undefined8 FUN_18aaa80b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fO; aWl ([B)Ljava/lang/String; (handler @ image 18aaa8140, runtime 6ffff26b8140) =====

void FUN_18aaa8140(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018aaa81e0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181922270 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fO; aWm (IJ)Ljava/lang/String; (handler @ image 18aad1f20, runtime 6ffff26e1f20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aad1f20(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (uRam0000000183266e48 ^ _UNK_1819291f0) + uRam0000000183266e80 + 0x431a2bc55606baeb;
  uVar5 = (uRam0000000183266e80 ^ _UNK_1819291f8) + uRam0000000183266e48 + 0x16789ecc14a2dca1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266e48 ^ _UNK_1819291f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266e80 ^ _UNK_1819291f8;
  uRam0000000183266dd0 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183266e48 + 0x16789ecc14a2dca1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183266e80 + 0x431a2bc55606baeb));
  uVar4 = uRam0000000183266e08 & 0x1fffffffffffff ^ 0x431a2bc5d22499ce;
  uRam0000000183266c30 = (uRam0000000183266c30 ^ uVar4) + 0x577abfcdd6a6ddef ^ 0x6b7424411dfd3d25;
  uRam0000000183266db8 =
       (uRam0000000183266db8 * 0xda7ab79216d9251 ^ uRam0000000183266c30) + uVar4 ^
       uRam0000000183266c30;
  uRam0000000183266dc8 = 0x577abfcdd6a6ddef;
  uVar4 = (~uRam0000000183266ba8 + 0x9ea19cd7680ec9a4) *
          ((uRam0000000183266bb0 ^ 0x270715e828110184) +
          (uRam0000000183266bb0 & 0x270715e828110184) * 2);
  uVar4 = (uVar4 | uRam0000000183266d20) + (uVar4 & uRam0000000183266d20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183266be8 =
       func_0x00018aad8b40((uVar4 | 0xb9a6893f401fc827) + (uVar4 & 0xb9a6893f401fc827));
  uRam0000000183266b70 =
       (uRam0000000183266b70 ^ uRam0000000183266be8 & 0x7fffffffffffffff) + 0xb9a6893fc43deb02 ^
       0x867b092fc07fc926;
  uRam0000000183266e10 =
       (uRam0000000183266e10 * -0x1d780eec3ed59607 ^ uRam0000000183266b70) +
       (uRam0000000183266be8 & 0x7fffffffffffffff);
  uRam0000000183266eb0 = uRam0000000183266e10 ^ uRam0000000183266b70;
  uRam0000000183266ec8 = 0xb9a6893fc43deb02;
  uVar4 = (~uRam0000000183266c48 + 0xb6caaeaa4ae4553d) *
          ((uRam0000000183266ba8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183266ba8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183266c18) + (uVar4 & uRam0000000183266c18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lRam0000000183266cb8 =
       func_0x00018aad8b40((uVar4 | 0xb6caaeaacec67619) + (uVar4 & 0xb6caaeaacec67619));
  uRam0000000183266ba0 =
       (uRam0000000183266ba0 ^ lRam0000000183266cb8 * -0x384105280e20491d) + 0x49355155b51baac4 ^
       0x4ec7b4d1bbb2794d;
  uRam0000000183266c50 =
       (uRam0000000183266c50 * 0x7a7ca19831f7a279 ^ uRam0000000183266ba0) +
       lRam0000000183266cb8 * -0x384105280e20491d;
  uRam0000000183266b68 = uRam0000000183266c50 ^ uRam0000000183266ba0;
  uRam0000000183266c30 = 0x49355155b51baac4;
  uRam0000000183266e20 = func_0x00018aad8b40(uRam0000000183266ea0 ^ 0x69f939bda6adc646);
  uVar4 = uRam0000000183266e20 << 0x36 | uRam0000000183266e20 >> 10;
  uRam0000000183266e60 = uRam0000000183266e00 ^ uVar4 ^ 0xb6caaeaa4ae4d53b;
  uRam0000000183266c50 = (uRam0000000183266c50 ^ uVar4) + 0xb6caaeaa4ae4d53b ^ 0x41c14381dceeb72;
  uRam0000000183266bf8 = (uRam0000000183266bf8 * -0x2516c701d040143d ^ uRam0000000183266c50) + uVar4
  ;
  uRam0000000183266e88 = uRam0000000183266bf8 ^ uRam0000000183266c50;
  uRam0000000183266e58 = 0xb6caaeaa4ae4d53b;
  uVar4 = (uRam0000000183266e68 ^ _UNK_181929200) + uRam0000000183266ee0 + 0x84222325;
  uVar5 = (uRam0000000183266ee0 ^ _UNK_181929208) + uRam0000000183266e68 + 0x80a917c5b638bff9;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266e68 ^ _UNK_181929200;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266ee0 ^ _UNK_181929208;
  uRam0000000183266cf0 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183266e68 + 0x80a917c5b638bff9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183266ee0 + 0x84222325));
  uRam0000000183266ed0 = uRam0000000183266ed0 + 0x7f56e83a49c74007 ^ 0x51790facf825f95a;
  uRam0000000183266b18 = uRam0000000183266ea8 * -0x3e4377ce65b90631;
  uRam0000000183266ea8 = uRam0000000183266b18 ^ uRam0000000183266ed0;
  uRam0000000183266d30 = 0x7f56e83a49c74007;
  uVar4 = (uRam0000000183266ba0 ^ _UNK_181929210) + uRam0000000183266bb0 + 0x80a917c5321b1cdd;
  uVar5 = (uRam0000000183266bb0 ^ _UNK_181929218) + uRam0000000183266ba0 + 0x7f56e83a49c74007;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266ba0 ^ _UNK_181929210;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266bb0 ^ _UNK_181929218;
  uRam0000000183266b38 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183266ba0 + 0x7f56e83a49c74007) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183266bb0 + 0x80a917c5321b1cdd));
  uRam0000000183266cc8 = uRam0000000183266b58 ^ uRam0000000183266b38 ^ 0x7fff;
  uRam0000000183266b68 = (uRam0000000183266b68 ^ uRam0000000183266b38) + 0x7fff ^ 0x8f375ba2cacf7fbb
  ;
  uRam0000000183266d90 =
       (uRam0000000183266d90 * -0x1dd07fd4c516555f ^ uRam0000000183266b68) + uRam0000000183266b38;
  uRam0000000183266e58 = uRam0000000183266d90 ^ uRam0000000183266b68;
  uRam0000000183266e10 = 0x7fff;
  uVar4 = (~uRam0000000183266d80 + 0x5b0935f10670213d) *
          ((uRam0000000183266d98 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183266d98 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183266d68) + (uVar4 & uRam0000000183266d68);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183266e78 =
       func_0x00018aad8b40((uVar4 | 0x5b0935f182520219) + (uVar4 & 0x5b0935f182520219));
  uVar4 = uRam0000000183266e78 >> 1 | uRam0000000183266e78;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183266e78) & 0x7fffffffffffffff;
  uRam0000000183266bd0 = (uRam0000000183266bd0 ^ uVar4) + 0xa4f6ca0ef98fdec4 ^ 0x53ba969bc76573b;
  uRam0000000183266ce0 = (uRam0000000183266ce0 * 0x4c9703f566ff3b35 ^ uRam0000000183266bd0) + uVar4;
  uRam0000000183266c60 = uRam0000000183266ce0 ^ uRam0000000183266bd0;
  uRam0000000183266cc8 = 0xa4f6ca0ef98fdec4;
  uRam0000000183266ee0 = func_0x00018aad8b40(uRam0000000183266b10 + 0xd0a30682e5d33228 ^ 0xce);
  uVar4 = ~uRam0000000183266ee0 & 0x7fff;
  uRam0000000183266cc8 = uRam0000000183266ed8 ^ uVar4 ^ 0x5b0935f10670a13b;
  uRam0000000183266e28 = (uRam0000000183266e28 ^ uVar4) + 0x5b0935f10670a13b ^ 0x5692c67c3e7d972;
  uRam0000000183266da8 = (uRam0000000183266da8 * -0x5bcc77ab66f731f ^ uRam0000000183266e28) + uVar4;
  uRam0000000183266c38 = uRam0000000183266da8 ^ uRam0000000183266e28;
  uRam0000000183266d80 = uRam0000000183266c10 ^ 0x5b0935f10670a13b;
  uRam0000000183266bc8 = 0x5b0935f10670a13b;
  uVar4 = (~uRam0000000183266ec0 + 0xa4f6ca0ef98fdec5) *
          ((uRam0000000183266b10 ^ 0x5b0935f18252821e) +
          (uRam0000000183266b10 & 0x5b0935f18252821e) * 2);
  uVar4 = (uVar4 | uRam0000000183266e98) + (uVar4 & uRam0000000183266e98);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183266bc8 =
       func_0x00018aad8b40((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = ((uRam0000000183266bc8 ^ 0x34cdd5150d019b2c) << 10 |
          (uRam0000000183266bc8 ^ 0x34cdd5150d019b2c) >> 0x36) * 0x1fa559c6bcf2924f;
  uRam0000000183266c70 = uRam0000000183266e60 ^ uVar4 ^ 0x7fff;
  uRam0000000183266e50 = (uRam0000000183266e50 ^ uVar4) + 0x7fff ^ 0x9f55f8bb6eb09378;
  uRam0000000183266ed0 = (uRam0000000183266ed0 * -0x39a54bfc7fa4cb53 ^ uRam0000000183266e50) + uVar4
  ;
  uRam0000000183266c30 = uRam0000000183266ed0 ^ uRam0000000183266e50;
  uRam0000000183266b08 = 0x7fff;
  uVar4 = (~uRam0000000183266c78 + 0xb9a6893fc43deb03) *
          ((uRam0000000183266da8 ^ 0x577abfcd5284feca) +
          (uRam0000000183266da8 & 0x577abfcd5284feca) * 2);
  uVar4 = (uVar4 | uRam0000000183266df8) + (uVar4 & uRam0000000183266df8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183266b50 =
       func_0x00018aad8b40((uVar4 | 0xeedc36f296b915c8) + (uVar4 & 0xeedc36f296b915c8));
  uVar5 = uRam0000000183266b50 ^ 0xfffebfffd6bfffef;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar5;
  uRam0000000183266bb0 = (uRam0000000183266bb0 ^ uVar5) + 0xeedc36f2129b36ed ^ 0x4ba59ac236ad136c;
  uRam0000000183266ca8 = (uRam0000000183266ca8 * 0x6cb8773d4103919f ^ uRam0000000183266bb0) + uVar5;
  uRam0000000183266e38 = uRam0000000183266ca8 ^ uRam0000000183266bb0;
  uRam0000000183266c30 = -0x1123c90ded64c913;
  uRam0000000183266b70 = func_0x00018aad8b40(uRam0000000183266ea0 ^ 0x31f24c8eb7ed47fe);
  uVar4 = uRam0000000183266b70 << 0x3b | uRam0000000183266b70 >> 5 & 0xffffffffffffffe0;
  uRam0000000183266c48 = (uRam0000000183266c48 ^ uVar4) + 0x1122890dc424c902 ^ 0x64901b263687a6f1;
  uRam0000000183266c20 = (uRam0000000183266c20 * -0x12793060106e0bad ^ uRam0000000183266c48) + uVar4
  ;
  uRam0000000183266db0 = uRam0000000183266c20 ^ uRam0000000183266c48;
  uRam0000000183266bf0 = 0x1122890dc424c902;
  uVar4 = (uRam0000000183266bd8 ^ _UNK_181929220) + uRam0000000183266d48 + 0xeedc36f296b915c8;
  uVar5 = (uRam0000000183266d48 ^ _UNK_181929228) + uRam0000000183266bd8 + 0x2245121b88499204;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266bd8 ^ _UNK_181929220;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266d48 ^ _UNK_181929228;
  uRam0000000183266ec8 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183266bd8 + 0x2245121b88499204) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183266d48 + 0xeedc36f296b915c8));
  uVar4 = (uRam0000000183266ec8 & 0xeedc36f2129b36ed) << 0xb |
          (uRam0000000183266ec8 & 0xeedc36f2129b36ed) >> 0x35;
  uRam0000000183266ba8 = uRam0000000183266d30 ^ uVar4 ^ 0x1121490d9ae4c8f1;
  uRam0000000183266b98 = (uRam0000000183266b98 ^ uVar4) + 0x1121490d9ae4c8f1 ^ 0x1bdf700df67a8616;
  uRam0000000183266b00 = (uRam0000000183266b00 * 0x37a0720d5a127905 ^ uRam0000000183266b98) + uVar4;
  uRam0000000183266c28 = uRam0000000183266b00 ^ uRam0000000183266b98;
  uRam0000000183266b58 = 0x1121490d9ae4c8f1;
  uVar4 = (uRam0000000183266ca8 ^ 0x84225cda) + uRam0000000183266bd8 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266ca8 ^ 0x84225cda;
  uVar5 = ((uRam0000000183266bd8 + uRam0000000183266ca8) * 0x2000 |
          uRam0000000183266bd8 + uRam0000000183266ca8 >> 0x33) ^ uRam0000000183266bd8;
  uRam0000000183266d98 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) - uRam0000000183266ca8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183266bd8 + 0x84225cda));
  uVar4 = (uRam0000000183266d98 ^ 0x7fff) & 0x7fffffffffffffff;
  uRam0000000183266da0 = uRam0000000183266b18 ^ uVar4 ^ 0x7fff;
  uRam0000000183266c20 = (uRam0000000183266c20 ^ uVar4) + 0x7fff ^ 0xd8a87b8a2e823fdb;
  uRam0000000183266b70 = (uRam0000000183266b70 * -0x7d762a649a9d3d6f ^ uRam0000000183266c20) + uVar4
  ;
  uRam0000000183266dc0 = uRam0000000183266b70 ^ uRam0000000183266c20;
  uRam0000000183266d80 = uRam0000000183266c50 ^ 0x7fff;
  uRam0000000183266b58 = 0x7fff;
  uRam0000000183266cf8 = func_0x00018aad8b40(uRam0000000183266ea0 ^ 0x50bb6cb555c93380);
  uVar4 = uRam0000000183266cf8 << 3 | uRam0000000183266cf8 >> 0x3d;
  uRam0000000183266ce0 = uRam0000000183266ce0 ^ uVar4 ^ 0x9aed8277bddabf2f;
  uRam0000000183266cd8 = (uRam0000000183266cd8 * -0x5725ec4e2d3b7535 ^ uRam0000000183266ce0) + uVar4
  ;
  uRam0000000183266c00 = uRam0000000183266cd8 ^ uRam0000000183266ce0;
  uRam0000000183266ec0 = 0;
  uVar4 = (~uRam0000000183266d48 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183266cd8) +
          ((param_4 ^ 0x84222325) & uRam0000000183266cd8) * 2);
  uVar4 = (uVar4 | uRam0000000183266ce8) + (uVar4 & uRam0000000183266ce8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lVar2 = func_0x00018aad8b40((param_4 ^ 0x84225cda | uVar4) + (uVar4 & (param_4 ^ 0x84225cda)));
  uVar3 = (uint)param_4 & 0x7fff;
  uRam0000000183266b20 = (ulonglong)uVar3;
  uRam0000000183266c90 =
       (uRam0000000183266c90 ^ param_4 ^ uRam0000000183266ba0) + uRam0000000183266b20 ^
       0xa273ee9c54ca7756;
  uRam0000000183266b88 =
       (lVar2 * 0x1f18a84b61c61527 ^ uRam0000000183266c90) + (param_4 ^ uRam0000000183266ba0);
  uRam0000000183266c00 = uRam0000000183266b88 ^ uRam0000000183266c90;
  uVar3 = uVar3 ^ param_3;
  uRam0000000183266e88 = func_0x00018aad8b40(uRam0000000183266dc0 ^ 0xffd8ffed11ffbade);
  uVar4 = (uRam0000000183266e88 ^ 0x1a37e56573d04b78) & 0x7fffffffffffffff;
  uRam0000000183266ba0 = (uRam0000000183266ba0 ^ uVar4) + 0xb57f5a2b ^ 0xe2c3b5016055d660;
  uRam0000000183266ba8 = (uRam0000000183266ba8 * 0x7f5ce0315da22327 ^ uRam0000000183266ba0) + uVar4;
  uRam0000000183266b40 = uRam0000000183266ba8 ^ uRam0000000183266ba0;
  uRam0000000183266e60 = 0xb57f5a2b;
  uVar4 = (uRam0000000183266e70 ^ _UNK_181929230) + uRam0000000183266b88 + 0x84226c5b;
  uVar5 = (uRam0000000183266b88 ^ _UNK_181929238) + uRam0000000183266e70 + 0x64f093be;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266e70 ^ _UNK_181929230;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266b88 ^ _UNK_181929238;
  uRam0000000183266df8 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183266e70 + 0x64f093be) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183266b88 + 0x84226c5b));
  uVar4 = uRam0000000183266df8 >> 1 | uRam0000000183266df8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183266df8;
  uRam0000000183266db0 = uRam0000000183266d90 ^ uVar4 ^ 0x64f0e33c;
  uRam0000000183266be0 = (uRam0000000183266be0 ^ uVar4) + 0x64f0e33c ^ 0xe15c7587a82ec7b9;
  uRam0000000183266c60 = (uRam0000000183266c60 * -0x3e4b81a2a9a22721 ^ uRam0000000183266be0) + uVar4
  ;
  uRam0000000183266b60 = uRam0000000183266c60 ^ uRam0000000183266be0;
  uRam0000000183266b68 = 0x64f0e33c;
  uVar4 = (uRam0000000183266e68 ^ _UNK_181929240) + uRam0000000183266cd8 + 0xe0d2c019;
  uVar5 = (uRam0000000183266cd8 ^ _UNK_181929248) + uRam0000000183266e68 + 0x9b0f6c42;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266e68 ^ _UNK_181929240;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266cd8 ^ _UNK_181929248;
  uRam0000000183266b70 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183266e68 + 0x9b0f6c42) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183266cd8 + 0xe0d2c019));
  uVar4 = uRam0000000183266b70 << 8 | uRam0000000183266b70 >> 0x38;
  uRam0000000183266ec8 = uRam0000000183266ed8 ^ uVar4 ^ 0x100004f7e;
  uRam0000000183266c20 = (uRam0000000183266c20 ^ uVar4) + 0x100004f7e ^ 0xcf7646b15c8d434d;
  uRam0000000183266c30 = (uRam0000000183266c30 * 0xac28d80265bc825 ^ uRam0000000183266c20) + uVar4;
  uRam0000000183266da0 = uRam0000000183266c30 ^ uRam0000000183266c20;
  uRam0000000183266d58 = 0x4f7e;
  uVar4 = (~uRam0000000183266ec8 + 0xd06a4a49) *
          ((uRam0000000183266de0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183266de0 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183266ed8) + (uVar4 & uRam0000000183266ed8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183266ca8 =
       func_0x00018aad8b40((uVar4 | 0x5448696d) + (ulonglong)((uint)uVar4 & 0x5448696d));
  uRam0000000183266e10 =
       (uRam0000000183266e10 ^ uRam0000000183266ca8 & 0x3ffffffffffffff) - 0xd06a4a48 ^
       0x5ce7714931d6d283;
  uRam0000000183266ef8 =
       (uRam0000000183266ef8 * -0x3828adf6b35d1def ^ uRam0000000183266e10) +
       (uRam0000000183266ca8 & 0x3ffffffffffffff);
  uRam0000000183266d30 = uRam0000000183266ef8 ^ uRam0000000183266e10;
  uRam0000000183266c08 = 0x2f95b5b8;
  uVar4 = (uRam0000000183266d70 ^ _UNK_181929250) + uRam0000000183266c10 + 0x84226c5b;
  uVar5 = (uRam0000000183266c10 ^ _UNK_181929258) + uRam0000000183266d70 + 0xd06a4a48;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266d70 ^ _UNK_181929250;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266c10 ^ _UNK_181929258;
  uRam0000000183266c48 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183266d70 + 0xd06a4a48) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183266c10 + 0x84226c5b));
  uVar4 = uRam0000000183266c48 ^ 0xd06a0536;
  uRam0000000183266b20 = uRam0000000183266c98 ^ uVar4 ^ 0xd06a99c6;
  uRam0000000183266bf8 = (uRam0000000183266bf8 ^ uVar4) + 0xd06a99c6 ^ 0xad144a47019c76ef;
  uRam0000000183266ba8 = (uRam0000000183266ba8 * 0x7b7de1a0904d92c5 ^ uRam0000000183266bf8) + uVar4;
  uRam0000000183266c60 = uRam0000000183266ba8 ^ uRam0000000183266bf8;
  uRam0000000183266b98 = 0xd06a99c6;
  uVar4 = (~uRam0000000183266d48 + 0x2f95b5b9) *
          ((uRam0000000183266c48 ^ 0x5448bae3) +
          (ulonglong)((uint)uRam0000000183266c48 & 0x5448bae3) * 2);
  uVar4 = (uVar4 | uRam0000000183266c50) + (uVar4 & uRam0000000183266c50);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183266eb8 =
       func_0x00018aad8b40((uVar4 | 0x7bdd0f5b) + (ulonglong)((uint)uVar4 & 0x7bdd0f5b));
  uVar4 = (uRam0000000183266eb8 ^ 0xffffbdfe) * 0x7d5757cf603348f5;
  uRam0000000183266e40 = uRam0000000183266b28 ^ uVar4 ^ 0x100004f7e;
  uRam0000000183266c10 = (uRam0000000183266c10 ^ uVar4) + 0x100004f7e ^ 0x750368e2118f63;
  uRam0000000183266c00 = (uRam0000000183266c00 * -0x67519b09fa2d2d6b ^ uRam0000000183266c10) + uVar4
  ;
  uRam0000000183266df0 = uRam0000000183266c00 ^ uRam0000000183266c10;
  uRam0000000183266ca0 = 0x4f7e;
  uRam0000000183266cf0 = func_0x00018aad8b40(uRam0000000183266e30 ^ 0xffb1ff43d8ff0817);
  uRam0000000183266e90 =
       (uRam0000000183266e90 ^ uRam0000000183266cf0 & 0x7fffffffffffffff) - 0x48db911c ^
       0xd3f050664102b968;
  uRam0000000183266cd0 =
       (uRam0000000183266cd0 * -0x5634585956e9a757 ^ uRam0000000183266e90) +
       (uRam0000000183266cf0 & 0x7fffffffffffffff);
  uRam0000000183266ba8 = uRam0000000183266cd0 ^ uRam0000000183266e90;
  uRam0000000183266b18 = 0xb7246ee4;
  uVar4 = (uRam0000000183266d00 ^ _UNK_181929260) + uRam0000000183266bb8 + 0x84226c5b;
  uVar5 = (uRam0000000183266bb8 ^ _UNK_181929268) + uRam0000000183266d00 + 0x48db911c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266d00 ^ _UNK_181929260;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266bb8 ^ _UNK_181929268;
  uRam0000000183266d38 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183266d00 + 0x48db911c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183266bb8 + 0x84226c5b));
  uVar4 = uRam0000000183266d38 << 0x14 | uRam0000000183266d38 >> 0x2c;
  uRam0000000183266ef8 = uRam0000000183266c10 ^ uVar4 ^ 0x48dbe09a;
  uRam0000000183266d90 = (uRam0000000183266d90 ^ uVar4) + 0x48dbe09a ^ 0x900d9098ed8944ac;
  uRam0000000183266b98 = (uRam0000000183266b98 * 0x793349c930fbdbf3 ^ uRam0000000183266d90) + uVar4;
  uRam0000000183266b58 = uRam0000000183266b98 ^ uRam0000000183266d90;
  uRam0000000183266e90 = 0x48dbe09a;
  uRam0000000183266b20 = func_0x00018aad8b40(uRam0000000183266e40 + 0x9b00675b00aaff ^ 0xb0);
  uVar4 = uRam0000000183266b20 ^ 0x341f8c09beda5bcc;
  uRam0000000183266d88 = uRam0000000183266ed8 ^ uVar4 ^ 0x100004f7e;
  uRam0000000183266bd8 = (uRam0000000183266bd8 ^ uVar4) + 0x100004f7e ^ 0xccaa3bac545f47d1;
  uRam0000000183266d38 = (uRam0000000183266d38 * 0x1998bd23cf10b759 ^ uRam0000000183266bd8) + uVar4;
  uRam0000000183266df0 = uRam0000000183266d38 ^ uRam0000000183266bd8;
  uRam0000000183266c50 = 0x4f7e;
  uRam0000000183266d20 = func_0x00018aad8b40(uRam0000000183266c18 + 0xab005291000cff ^ 100);
  uVar4 = (uRam0000000183266d20 ^ 0x5feb361aee329cb5) * -0x55bfa1b47ba38613;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4;
  uRam0000000183266db8 = uRam0000000183266da8 ^ uVar4 ^ 0x13cca2eca;
  uRam0000000183266c28 = (uRam0000000183266c28 ^ uVar4) + 0x13cca2eca ^ 0x3b909b5ee804dfb6;
  uRam0000000183266b70 = (uRam0000000183266b70 * 0x42b56dfecad9fc41 ^ uRam0000000183266c28) + uVar4;
  uRam0000000183266c98 = uRam0000000183266b70 ^ uRam0000000183266c28;
  uRam0000000183266b80 = 0x3cca2eca;
  uVar4 = (uRam0000000183266e48 ^ _UNK_181929270) + uRam0000000183266e90 + 0x315d790e;
  uVar5 = (uRam0000000183266e90 ^ _UNK_181929278) + uRam0000000183266e48 + 0x874ad49f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266e48 ^ _UNK_181929270;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183266e90 ^ _UNK_181929278;
  uRam0000000183266d48 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183266e48 + 0x874ad49f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183266e90 + 0x315d790e));
  uVar4 = uRam0000000183266d48 ^ 0xb57f5a2b;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar4;
  uRam0000000183266eb0 = (uRam0000000183266eb0 ^ uVar4) + 0x32358eb4 ^ 0x95cd2cdfab48c379;
  uRam0000000183266b70 = (uRam0000000183266b70 * 0x22aaa6f000bbe589 ^ uRam0000000183266eb0) + uVar4;
  uRam0000000183266b80 = uRam0000000183266b70 ^ uRam0000000183266eb0;
  uRam0000000183266d38 = uRam0000000183266ca0 ^ 0x32358eb4;
  uRam0000000183266e88 = 0x32358eb4;
  uRam0000000183266cc0 = func_0x00018aad8b40(uRam0000000183266d98 + 0x9d00566f0016ff ^ 0x45);
  uVar4 = (uRam0000000183266cc0 ^ 0x5feb361a5b4dc69e) * -0xf33aa548e74bfff;
  uRam0000000183266c88 = (uRam0000000183266c88 ^ uVar4) + 0x854a500b ^ 0x9c90c5942e93853;
  uRam0000000183266e88 = (uRam0000000183266e88 * 0x68944c827a92f361 ^ uRam0000000183266c88) + uVar4;
  uRam0000000183266b60 = uRam0000000183266e88 ^ uRam0000000183266c88;
  uRam0000000183266d50 = 0x854a500b;
  uRam0000000183266ec8 = func_0x00018aad8b40(uRam0000000183266db0 + 0x21007bdb001dff ^ 0x90);
  uRam0000000183266cb0 = (uRam0000000183266ec8 ^ 0x3cca2eca) & 0x3ffffffffffffff;
  uVar4 = ((uRam0000000183266ec8 ^ 0x3cca2eca) & 0x3ffffffffffffff) >> 1 | uRam0000000183266cb0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uRam0000000183266cb0 =
       0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
       uRam0000000183266cb0;
  uRam0000000183266ee0 = uRam0000000183266be8 ^ uRam0000000183266cb0 ^ 0xfbbde8986bcde1e8;
  uRam0000000183266b28 =
       (uRam0000000183266b28 * -0x4183d3c14297f919 ^ uRam0000000183266ee0) + uRam0000000183266cb0;
  uRam0000000183266ee0 = uRam0000000183266b28 ^ uRam0000000183266ee0;
  uRam0000000183266be8 = 0;
  uVar4 = ((uRam0000000183266da0 ^ 0x84226c5b) +
          (ulonglong)((uint)uRam0000000183266da0 & 0x84226c5b) * 2) * -uRam0000000183266ce8;
  uVar4 = (uVar4 | uRam0000000183266ba8) + (uVar4 & uRam0000000183266ba8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183266bb8 =
       func_0x00018aad8b40((uVar4 | 0x84226c5b) + (ulonglong)((uint)uVar4 & 0x84226c5b));
  uRam0000000183266e30 = uRam0000000183266b78 ^ 0x4f7e;
  uRam0000000183266d10 = uRam0000000183266b60 * 0x38855f4c020c4171;
  uRam0000000183266dc8 = uRam0000000183266dc8 + 0x4f7e ^ 0x34b75b37e98e564f;
  uRam0000000183266b60 = uRam0000000183266d10 ^ uRam0000000183266dc8;
  uRam0000000183266c00 = 0x4f7e;
  uRam0000000183266c40 = func_0x00018aad8b40(uRam0000000183266d80 ^ 0xff5c005a4a00b482);
  uVar4 = (uRam0000000183266c40 ^ 0xffffffff) << 0x2e | (uRam0000000183266c40 ^ 0xffffffff) >> 0x12;
  uRam0000000183266d90 = uRam0000000183266d90 ^ uVar4 ^ 0xd09c266ccb35e9ac;
  uRam0000000183266bc8 = (uRam0000000183266bc8 * -0x2786e3c8dcce6633 ^ uRam0000000183266d90) + uVar4
  ;
  uRam0000000183266cf0 = uRam0000000183266bc8 ^ uRam0000000183266d90;
  uRam0000000183266c70 = 0;
  uVar4 = (uRam0000000183266c38 ^ 0x84226c5b) + uRam0000000183266c50 + 0x84226c5b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183266c38 ^ 0x84226c5b;
  uVar5 = ((uRam0000000183266c50 + uRam0000000183266c38) * 0x2000 |
          uRam0000000183266c50 + uRam0000000183266c38 >> 0x33) ^ uRam0000000183266c50;
  uRam0000000183266eb0 =
       func_0x00018aad8b40((uVar5 << 0x1d | uVar5 >> 0x23) - uRam0000000183266c38 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183266c50 + 0x84226c5b));
  uVar4 = uRam0000000183266eb0 - (uRam0000000183266eb0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183266eb0;
  uRam0000000183266e18 = uRam0000000183266de8 ^ uVar4 ^ 0x4f7e;
  uRam0000000183266d50 = (uRam0000000183266d50 ^ uVar4) + 0x4f7e ^ 0x22e95afa30f01ea2;
  uRam0000000183266d48 = (uRam0000000183266d48 * 0x79e5ea44193b76e5 ^ uRam0000000183266d50) + uVar4;
  uRam0000000183266dc8 = uRam0000000183266d48 ^ uRam0000000183266d50;
  uRam0000000183266cc8 = 0x4f7e;
  uRam0000000183266b98 = func_0x00018aad8b40(uRam0000000183266be8 ^ 0x13ff7bb8ffe131);
  uRam0000000183266b80 = uRam0000000183266db0 ^ uRam0000000183266ef0 ^ 0x4f7e;
  uRam0000000183266e80 = (uRam0000000183266e80 ^ uRam0000000183266ef0) + 0x4f7e ^ 0xef1329f443a4d479
  ;
  uRam0000000183266d98 =
       (uRam0000000183266d98 * -0x31e3bd56c9d38229 ^ uRam0000000183266e80) + uRam0000000183266ef0;
  uRam0000000183266e40 = uRam0000000183266d98 ^ uRam0000000183266e80;
  uRam0000000183266b38 = 0x4f7e;
  uVar5 = (ulonglong)uVar3;
  uVar4 = (~uRam0000000183266bd8 + 0x4f7f) *
          ((uVar5 ^ 0x84222325 ^ uRam0000000183266e70) +
          (ulonglong)((uint)uRam0000000183266e70 & (uint)(uVar5 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uRam0000000183266dd8) + (uVar4 & uRam0000000183266dd8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183266c88 =
       func_0x00018aad8b40((uVar5 ^ 0x84226c5b | uVar4) +
                           (ulonglong)((uint)(uVar5 ^ 0x84226c5b) & (uint)uVar4));
  lVar2 = uVar5 - (uVar3 & 0x4f7e) * 2;
  uRam0000000183266c08 =
       (uRam0000000183266c08 ^ uVar5 ^ uRam0000000183266c88) + lVar2 + 0x4f7e ^ 0x1279feaced640eac;
  lRam0000000183266b30 =
       (lRam0000000183266b30 * 0x616382fc746e37d9 ^ uRam0000000183266c08) +
       (uVar5 ^ uRam0000000183266c88);
  uRam0000000183266de0 = lVar2 + 0x4f7eU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14cbd,0x33b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aad424f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181927868 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fO; aWn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18aad8bd0, runtime 6ffff26e8bd0) =====

void FUN_18aad8bd0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018aad8c0c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819293c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fO; aWo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18aad9ac0, runtime 6ffff26e9ac0) =====

void FUN_18aad9ac0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aad9b3d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181929900 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fO; aaj ()V (handler @ image 18aa91470, runtime 6ffff26a1470) =====

void FUN_18aa91470(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018aa914ba did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18191baf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



