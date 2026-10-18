// ===== Lsixtwo/hP; _e0f3161248b7711ce6ad0a0ff262febd ()V (handler @ image 189c96020, runtime 6ffff18a6020) =====

void FUN_189c96020(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189c960fc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18150e640 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hP; beC ()Lsixtwo/hZ; (handler @ image 189c51c10, runtime 6ffff1861c10) =====

void FUN_189c51c10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1630e,0x3a9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189c51cf5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181501690 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hP; beD (Lsixtwo/hX;)V (handler @ image 189c59680, runtime 6ffff1869680) =====

void FUN_189c59680(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189c59703 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1815037e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hP; beE (Ljava/lang/Boolean;)V (handler @ image 189c5ad70, runtime 6ffff186ad70) =====

void FUN_189c5ad70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1630e,0x3a9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189c5ae52 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181503fd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hP; beF (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 189c632b0, runtime 6ffff18732b0) =====

undefined8 FUN_189c632b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/hP; beG ([B)Ljava/lang/String; (handler @ image 189c63340, runtime 6ffff1873340) =====

void FUN_189c63340(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000189c633e0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1815064f0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hP; beH (IJ)Ljava/lang/String; (handler @ image 189c8b7f0, runtime 6ffff189b7f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189c8b7f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = (uRam0000000183244c90 ^ _UNK_18150d120) + uRam0000000183244c78 + 0x9fabd237f20f8e71;
  uVar8 = (uRam0000000183244c78 ^ _UNK_18150d128) + uRam0000000183244c90 + 0xcb993193f5e4c790;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244c90 ^ _UNK_18150d120;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244c78 ^ _UNK_18150d128;
  uRam0000000183244b60 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183244c90 + 0xcb993193f5e4c790) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183244c78 + 0x9fabd237f20f8e71));
  uVar7 = (uRam0000000183244b60 ^ 0x7c29eedbbe3dcb40) << 8;
  uVar7 = (uVar7 | (uRam0000000183244b60 ^ 0x7c29eedbbe3dcb40) >> 0x38) << 0x15 |
          (uVar7 & 0x7fffffffffffffff) >> 0x2b;
  uVar8 = (uRam0000000183244c98 ^ uVar7) + 0xdfbbf3b7f7edefd4;
  uRam0000000183244c98 = uVar8 ^ 0xd2a2fafce2a8445f;
  uRam0000000183244c18 = (uRam0000000183244c18 * 0x69ad79fb874945cf ^ uRam0000000183244c98) + uVar7;
  uRam0000000183244bc8 = uRam0000000183244c18 ^ uRam0000000183244c98;
  uRam0000000183244cf8 = 0xdfbbf3b7f7edefd4;
  uVar7 = (~uRam0000000183244bb0 + 0xd056ea9743f5f4d1) *
          ((uVar8 ^ 0x3290a41077334fb2) + (uRam0000000183244c98 & 0x60325eec959b0bed) * 2);
  uVar7 = (uVar7 | uRam0000000183244c78) + (uVar7 & uRam0000000183244c78);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244b98 =
       func_0x000189c925e0((uVar7 | 0x3064b47bd66eff3d) + (uVar7 & 0x3064b47bd66eff3d));
  uRam0000000183244bf8 =
       (uRam0000000183244bf8 ^ uRam0000000183244b98 & 0x1ffffffffffffff) + 0x3064b47b524cdc18 ^
       0x51d7bef3ec03f2c1;
  uRam0000000183244ba0 =
       (uRam0000000183244ba0 * 0x52f5e2cfcc7127f ^ uRam0000000183244bf8) +
       (uRam0000000183244b98 & 0x1ffffffffffffff);
  uRam0000000183244b28 = uRam0000000183244ba0 ^ uRam0000000183244bf8;
  uRam0000000183244b30 = 0x3064b47b524cdc18;
  uVar7 = (~uRam0000000183244b38 + 0x72c2731e95ed8eb1) *
          ((uRam0000000183244b50 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183244b50 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam0000000183244cf0) + (uVar7 & uRam0000000183244cf0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244cf8 =
       func_0x000189c925e0((uVar7 | 0x72c2731e11cfad95) + (uVar7 & 0x72c2731e11cfad95));
  uVar8 = (uRam0000000183244cf8 & 0xffffffff) * (_UNK_18150d130 & 0xffffffff) +
          ((ulonglong)_UNK_18150d140 * (uRam0000000183244cf8 & 0xffffffff) +
           (uRam0000000183244cf8 >> 0x20) * (_UNK_18150d130 & 0xffffffff) << 0x20);
  uVar7 = uVar8 & 0x7fffffffffffffff;
  uVar8 = (uVar8 & 0x7fffffffffffffff) >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar7;
  uRam0000000183244ba8 = (uRam0000000183244ba8 ^ uVar7) + 0x8d3d8ce16a127150 ^ 0x6a9f2cbe401fa315;
  uRam0000000183244c50 = (uRam0000000183244c50 * 0x727666f1927068a1 ^ uRam0000000183244ba8) + uVar7;
  uRam0000000183244c88 = uRam0000000183244c50 ^ uRam0000000183244ba8;
  uRam0000000183244b70 = 0x8d3d8ce16a127150;
  uRam0000000183244c08 = func_0x000189c925e0(uRam0000000183244cb8 + 0xe51c20ea5d2c6d1 ^ 0x2f);
  uVar7 = (ulonglong)(~(uint)uRam0000000183244c08 & 0x7fff);
  uRam0000000183244b68 = uRam0000000183244b90 ^ uVar7 ^ 0x72c2731e95ee0eaf;
  uRam0000000183244c30 = (uRam0000000183244c30 ^ uVar7) + 0x72c2731e95ee0eaf ^ 0xb63e4fdefc23f2f3;
  uRam0000000183244b90 = (uRam0000000183244b90 * 0x666d81f0b39fe079 ^ uRam0000000183244c30) + uVar7;
  uRam0000000183244ce8 = uRam0000000183244b90 ^ uRam0000000183244c30;
  uRam0000000183244bd8 = 0x72c2731e95ee0eaf;
  uVar7 = (uRam0000000183244b70 ^ _UNK_18150d150) + uRam0000000183244b90 + 0x72c2731e11cc2d8a;
  uVar8 = (uRam0000000183244b90 ^ _UNK_18150d158) + uRam0000000183244b70 + 0x8d3d8ce16a127150;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244b70 ^ _UNK_18150d150;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244b90 ^ _UNK_18150d158;
  uRam0000000183244b78 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183244b70 + 0x8d3d8ce16a127150) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183244b90 + 0x72c2731e11cc2d8a));
  uVar7 = (uRam0000000183244b78 & 0x3ffffffffff) >> 1 | uRam0000000183244b78 & 0x3ffffffffff;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183244b78 & 0x3ffffffffff;
  uRam0000000183244c20 = uRam0000000183244be0 ^ uVar7 ^ 0x7fff;
  uRam0000000183244b20 = (uRam0000000183244b20 ^ uVar7) + 0x7fff ^ 0x3ba99a46e6116e82;
  uRam0000000183244b00 = (uRam0000000183244b00 * -0x32daefb78c53a629 ^ uRam0000000183244b20) + uVar7
  ;
  uRam0000000183244c10 = uRam0000000183244b00 ^ uRam0000000183244b20;
  uRam0000000183244c58 = 0x7fff;
  uRam0000000183244bb0 = func_0x000189c925e0(uRam0000000183244b70 + 0x10470dc69b22217a ^ 0xbe);
  uVar7 = uRam0000000183244bb0 << 0x2e | uRam0000000183244bb0 >> 0x12;
  uRam0000000183244cd0 = (uRam0000000183244cd0 ^ uVar7) + 0x64e1ddefbcfe97c0 ^ 0xfafd8b8738054a79;
  uRam0000000183244c18 = (uRam0000000183244c18 * -0x54f98708aa78b75d ^ uRam0000000183244cd0) + uVar7
  ;
  uRam0000000183244b30 = 0x64e1ddefbcfe97c0;
  uVar7 = (~uRam0000000183244b70 + 0x64e1ddefbcfe97c1) *
          ((uRam0000000183244c08 ^ 0x9b1e2210c723cb1a) +
          (uRam0000000183244c08 & 0x1b1e2210c723cb1a) * 2);
  uVar7 = (uVar7 | uRam0000000183244ce0) + (uVar7 & uRam0000000183244ce0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244c90 =
       func_0x000189c925e0((uVar7 | 0xffffffff7bdd5cda) + (uVar7 & 0xffffffff7bdd5cda));
  uVar7 = uRam0000000183244c90 ^ 0x52b019ec50ecb07f;
  uRam0000000183244b90 = uRam0000000183244b10 ^ uVar7 ^ 0x7fff;
  uRam0000000183244cc8 = (uRam0000000183244cc8 ^ uVar7) + 0x7fff ^ 0xa06e58630c336711;
  uRam0000000183244bb8 = (uRam0000000183244bb8 * -0x255361447601bd1f ^ uRam0000000183244cc8) + uVar7
  ;
  uRam0000000183244c70 = uRam0000000183244bb8 ^ uRam0000000183244cc8;
  uRam0000000183244b18 = 0x7fff;
  uRam0000000183244be8 = func_0x000189c925e0(uRam0000000183244c18 + 0x85bbe0137d4feabf ^ 0xee);
  uRam0000000183244c58 =
       (uRam0000000183244c58 ^ uRam0000000183244c50) + 0xbfdf8f7167f69860 ^ 0x7f5107f720ca5e98;
  uRam0000000183244cb0 =
       (uRam0000000183244cb0 * -0x2fae95a4c5b7e59f ^ uRam0000000183244c58) + uRam0000000183244c50;
  uRam0000000183244c38 = uRam0000000183244cb0 ^ uRam0000000183244c58;
  uRam0000000183244ce8 = 0xbfdf8f7167f69860;
  uRam0000000183244cf0 = func_0x000189c925e0(uRam0000000183244b40 ^ 0x82251ffc1a0fe577);
  uVar7 = uRam0000000183244cf8 & 0xffffffffffffffc0;
  uVar8 = uVar7 >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar7;
  uRam0000000183244c80 = uRam0000000183244b10 ^ uVar7 ^ 0x4020708e9809e79f;
  uRam0000000183244b00 = (uRam0000000183244b00 ^ uVar7) + 0x4020708e9809e79f ^ 0xd1b295ea43f975aa;
  uRam0000000183244ba0 = (uRam0000000183244ba0 * -0x54f9b79cc492a4ed ^ uRam0000000183244b00) + uVar7
  ;
  uRam0000000183244b60 = uRam0000000183244ba0 ^ uRam0000000183244b00;
  uRam0000000183244cb8 = 0x4020708e9809e79f;
  uVar7 = (~uRam0000000183244c78 + 0xbfdf8f7167f69861) * -0x7fbf1ee34bca53a7;
  uVar7 = (uVar7 | uRam0000000183244c30) + (uVar7 & uRam0000000183244c30);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244be8 =
       func_0x000189c925e0((uVar7 | 0xffffffff7bdd5cda) + (uVar7 & 0xffffffff7bdd5cda));
  uVar7 = ~uRam0000000183244be8 & 0x4020708e9809e79f ^ 0xbfdf8f7167f69860;
  uRam0000000183244cb0 = uRam0000000183244ce0 ^ uVar7 ^ 0x7fff;
  uRam0000000183244bf8 = (uRam0000000183244bf8 ^ uVar7) + 0x7fff ^ 0x8e62f15cab9a6c1d;
  uRam0000000183244cb8 = (uRam0000000183244cb8 * -0x4e61616e72517f5f ^ uRam0000000183244bf8) + uVar7
  ;
  uRam0000000183244c80 = uRam0000000183244cb8 ^ uRam0000000183244bf8;
  uRam0000000183244c08 = 0x7fff;
  uVar7 = (~uRam0000000183244c70 + 0x3064b47b524cdc19) *
          ((uRam0000000183244c48 ^ 0xdfbbf3b773cfccf1) +
          (uRam0000000183244c48 & 0x5fbbf3b773cfccf1) * 2);
  uVar7 = (uVar7 | uRam0000000183244bf8) + (uVar7 & uRam0000000183244bf8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244bc8 =
       func_0x000189c925e0((uVar7 | 0xefdf47cc218310e9) + (uVar7 & 0xefdf47cc218310e9));
  uVar7 = uRam0000000183244bc8 >> 1 | uRam0000000183244bc8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam0000000183244bc8;
  uVar7 = (uVar7 & 0x7ffffff) << 8 | uVar7 >> 0x38;
  uRam0000000183244cc0 = uRam0000000183244b88 ^ uVar7 ^ 0x1020a8334a3acbec;
  uRam0000000183244bc0 = (uRam0000000183244bc0 ^ uVar7) + 0x1020a8334a3acbec ^ 0x7f672615ba8c4414;
  uRam0000000183244ca0 = (uRam0000000183244ca0 * 0x4e2461c9288ad8c9 ^ uRam0000000183244bc0) + uVar7;
  uRam0000000183244c90 = uRam0000000183244ca0 ^ uRam0000000183244bc0;
  uRam0000000183244c78 = 0x1020a8334a3acbec;
  uVar7 = (~uRam0000000183244cd0 + 0x3064b47b524cdc19) *
          ((uRam0000000183244bd0 ^ 0xdfbbf3b773cfccf1) +
          (uRam0000000183244bd0 & 0x5fbbf3b773cfccf1) * 2);
  uVar7 = (uVar7 | uRam0000000183244c08) + (uVar7 & uRam0000000183244c08);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244c38 =
       func_0x000189c925e0((uVar7 | 0xefdf47cc218310e9) + (uVar7 & 0xefdf47cc218310e9));
  uVar7 = (uRam0000000183244c38 ^ 0xa1dc0ea0d358abe0) * 0x5e55e341a6d5c497;
  uRam0000000183244b00 = (uRam0000000183244b00 ^ uVar7) + 0xefdf47cca5a133cc ^ 0x52c899e0c401785c;
  uRam0000000183244cb0 = (uRam0000000183244cb0 * -0x1825799a930caa5f ^ uRam0000000183244b00) + uVar7
  ;
  uRam0000000183244bd8 = uRam0000000183244cb0 ^ uRam0000000183244b00;
  uRam0000000183244b30 = 0xefdf47cca5a133cc;
  uVar7 = (~uRam0000000183244c10 + 0x3064b47b524cdc19) *
          ((uRam0000000183244ce0 ^ 0xdfbbf3b773cfccf1) +
          (uRam0000000183244ce0 & 0x5fbbf3b773cfccf1) * 2);
  uVar7 = (uVar7 | uRam0000000183244ca8) + (uVar7 & uRam0000000183244ca8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244cc0 =
       func_0x000189c925e0((uVar7 | 0xefdf47cc218310e9) + (uVar7 & 0xefdf47cc218310e9));
  uRam0000000183244bf8 =
       (uRam0000000183244bf8 ^ uRam0000000183244cc0) + 0x1020b033524ccc10 ^ 0xa621f26d4f67cbd1;
  uRam0000000183244bf0 =
       (uRam0000000183244bf0 * -0x3035307f278b0f6d ^ uRam0000000183244bf8) + uRam0000000183244cc0;
  uRam0000000183244b20 = uRam0000000183244bf0 ^ uRam0000000183244bf8;
  uRam0000000183244c30 = 0x1020b033524ccc10;
  uVar7 = (uRam0000000183244cb0 ^ _UNK_18150d160) + uRam0000000183244ba0 + 0x1020a833ce18e8c9;
  uVar8 = (uRam0000000183244ba0 ^ _UNK_18150d168) + uRam0000000183244cb0 + 0x1020a8334a3acbec;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244cb0 ^ _UNK_18150d160;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244ba0 ^ _UNK_18150d168;
  uRam0000000183244b70 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183244cb0 + 0x1020a8334a3acbec) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183244ba0 + 0x1020a833ce18e8c9));
  uRam0000000183244cc0 = uRam0000000183244cc8;
  uRam0000000183244c50 = uRam0000000183244c50 ^ uRam0000000183244cc8 ^ 0xfac39e8f91267de0;
  uRam0000000183244b80 =
       (uRam0000000183244b80 * -0x4c6674b59eef6257 ^ uRam0000000183244c50) + uRam0000000183244cc8;
  uRam0000000183244b48 = uRam0000000183244b80 ^ uRam0000000183244c50;
  uRam0000000183244cf8 = 0;
  uVar7 = (uRam0000000183244c58 ^ 0x84225cda) + uRam0000000183244bc8 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244c58 ^ 0x84225cda;
  uVar8 = ((uRam0000000183244bc8 + uRam0000000183244c58) * 0x2000 |
          uRam0000000183244bc8 + uRam0000000183244c58 >> 0x33) ^ uRam0000000183244bc8;
  uRam0000000183244ce8 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183244c58 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244bc8 + 0x84225cda));
  uVar7 = uRam0000000183244ce8 & 0xfffffffffffc0000;
  uRam0000000183244bb8 = uRam0000000183244b48 ^ uVar7 ^ 0x7fff;
  uRam0000000183244bc8 = (uRam0000000183244bc8 ^ uVar7) + 0x7fff ^ 0x8ebbbf4b85311e51;
  uRam0000000183244cc0 = (uRam0000000183244cc0 * 0x329dc7c56a88687b ^ uRam0000000183244bc8) + uVar7;
  uRam0000000183244c18 = uRam0000000183244cc0 ^ uRam0000000183244bc8;
  uRam0000000183244b38 = 0x7fff;
  uRam0000000183244b70 = func_0x000189c925e0(uRam0000000183244be0 + 0xc7ef447409f4101f ^ 0x40);
  uRam0000000183244b68 =
       (uRam0000000183244b68 ^ uRam0000000183244b70) + 0x20440c480812102b ^ 0x2792bf4116602599;
  uRam0000000183244cd8 =
       (uRam0000000183244cd8 * -0x7244bc86bd40892f ^ uRam0000000183244b68) + uRam0000000183244b70;
  uRam0000000183244b10 = uRam0000000183244cd8 ^ uRam0000000183244b68;
  uRam0000000183244b60 = 0x20440c480812102b;
  uVar7 = (uRam0000000183244c48 ^ 0x84225cda) + uRam0000000183244bc8 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244c48 ^ 0x84225cda;
  uVar8 = ((uRam0000000183244bc8 + uRam0000000183244c48) * 0x2000 |
          uRam0000000183244bc8 + uRam0000000183244c48 >> 0x33) ^ uRam0000000183244bc8;
  uRam0000000183244bf8 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183244c48 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244bc8 + 0x84225cda));
  uVar7 = uRam0000000183244bf8 ^ 0x7fff;
  uRam0000000183244c68 = uRam0000000183244c60 ^ uVar7 ^ 0x7fff;
  uRam0000000183244b68 = (uRam0000000183244b68 ^ uVar7) + 0x7fff ^ 0x96c6043643526282;
  uRam0000000183244cb8 = (uRam0000000183244cb8 * 0x27432577d3d8ad4b ^ uRam0000000183244b68) + uVar7;
  uRam0000000183244cb0 = uRam0000000183244cb8 ^ uRam0000000183244b68;
  uRam0000000183244ce8 = 0x7fff;
  uVar7 = (~uRam0000000183244cf0 + 0x9fabd237762dad55) *
          ((uRam0000000183244b88 ^ 0x9fabd237f20f8e71) +
          (uRam0000000183244b88 & 0x1fabd237f20f8e71) * 2);
  uVar7 = (uVar7 | uRam0000000183244b80) + (uVar7 & uRam0000000183244b80);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244b00 =
       func_0x000189c925e0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam0000000183244cd0 =
       uRam0000000183244cd0 ^ uRam0000000183244b00 ^ 0x9fabd237762dad54 ^ 0x40f193c962d3aa0f;
  uRam0000000183244c78 =
       (uRam0000000183244c78 * 0x4cdbd2d20de0282b ^ uRam0000000183244cd0) +
       (uRam0000000183244b00 ^ 0x9fabd237762dad54);
  uRam0000000183244b28 = uRam0000000183244c78 ^ uRam0000000183244cd0;
  uRam0000000183244c20 = 0;
  uVar7 = (uRam0000000183244c80 ^ 0x84225cda) + uRam0000000183244b00 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244c80 ^ 0x84225cda;
  uVar8 = ((uRam0000000183244b00 + uRam0000000183244c80) * 0x2000 |
          uRam0000000183244b00 + uRam0000000183244c80 >> 0x33) ^ uRam0000000183244b00;
  uRam0000000183244ba0 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183244c80 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244b00 + 0x84225cda));
  uVar7 = (uRam0000000183244ba0 & 0xfffffffffffe0000) << 0x18 | uRam0000000183244ba0 >> 0x28;
  uRam0000000183244c78 = uRam0000000183244c30 ^ uVar7 ^ 0x7fff;
  uRam0000000183244c70 = (uRam0000000183244c70 ^ uVar7) + 0x7fff ^ 0x41f9d8b9f777733b;
  uRam0000000183244c18 = (uRam0000000183244c18 * 0x4d5e19886a53493f ^ uRam0000000183244c70) + uVar7;
  uRam0000000183244be8 = uRam0000000183244c18 ^ uRam0000000183244c70;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _UNK_18150d170,_UNK_1800170c0);
  uRam0000000183244b30 = 0x7fff;
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar7 = uVar8 + uRam0000000183244b78;
  if (auVar6._4_4_ < 0) {
    uVar7 = uRam0000000183244b68 ^ uVar8;
  }
  uRam0000000183244c08 = func_0x000189c925e0(SUB161(auVar5 ^ _UNK_18150d170,5) ^ uVar7);
  uVar3 = (uint)param_4 & 0x7fff;
  uRam0000000183244ce0 = (ulonglong)uVar3;
  uRam0000000183244bf0 =
       (uRam0000000183244bf0 ^ param_4 ^ uRam0000000183244c08) + uRam0000000183244ce0 ^
       0x8f1a195034e68778;
  uRam0000000183244b88 =
       (uRam0000000183244b88 * -0x68421e1e78fdb6e7 ^ uRam0000000183244bf0) +
       (param_4 ^ uRam0000000183244c08);
  uRam0000000183244b48 = uRam0000000183244b88 ^ uRam0000000183244bf0;
  uVar8 = uRam0000000183244ce0 ^ 0x84222325;
  uVar7 = ((uRam0000000183244c48 ^ uVar8) +
          (ulonglong)((uint)uRam0000000183244c48 & (uint)uVar8) * 2) *
          (param_3 - uRam0000000183244b00);
  uVar7 = (uVar7 | uRam0000000183244b20) + (uVar7 & uRam0000000183244b20);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar8 = uVar8 ^ param_3;
  lVar2 = func_0x000189c925e0((uVar8 | uVar7) + (ulonglong)((uint)uVar8 & (uint)uVar7));
  uVar3 = uVar3 ^ param_3;
  uVar4 = (ulonglong)uVar3;
  uRam0000000183244b40 = uVar4 ^ 0xbab79bdb89226d9b;
  uRam0000000183244b00 = (uRam0000000183244b00 * -0x478b54d82fd96be1 ^ uRam0000000183244b40) + lVar2
  ;
  uRam0000000183244b18 = uRam0000000183244b00 ^ uRam0000000183244b40;
  uVar7 = (uRam0000000183244b38 ^ _UNK_18150d180) + uRam0000000183244b08 + 0xd1a53aba;
  uVar8 = (uRam0000000183244b08 ^ _UNK_18150d188) + uRam0000000183244b38 + 0x6baddf67;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244b38 ^ _UNK_18150d180;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244b08 ^ _UNK_18150d188;
  uRam0000000183244ca8 = uVar4;
  uRam0000000183244cd8 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183244b38 + 0x6baddf67) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244b08 + 0xd1a53aba));
  uVar7 = (ulonglong)(~(uint)uRam0000000183244cd8 & 0x5587199f);
  uRam0000000183244b70 = (uRam0000000183244b70 ^ uVar7) + 0x7fafdfff ^ 0x9ce4b33dadc3dd72;
  uRam0000000183244ba0 = (uRam0000000183244ba0 * -0x210c1ffc35fec52d ^ uRam0000000183244b70) + uVar7
  ;
  uRam0000000183244c80 = uRam0000000183244ba0 ^ uRam0000000183244b70;
  uRam0000000183244cd0 = 0x7fafdfff;
  uVar7 = (~uRam0000000183244b40 + 0xe3eebf6c) *
          ((uRam0000000183244b18 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183244b18 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam0000000183244bf0) + (uVar7 & uRam0000000183244bf0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244b90 =
       func_0x000189c925e0((uVar7 | 0x67cc9c4e) + (ulonglong)((uint)uVar7 & 0x67cc9c4e));
  uVar7 = (uRam0000000183244b90 << 0x34 | uRam0000000183244b90 >> 0xc) ^ 0xe3eebf6b;
  uRam0000000183244ce0 = (uRam0000000183244ce0 ^ uVar7) - 0xe3eebf6b ^ 0x954c30a837452afa;
  uRam0000000183244bf8 = (uRam0000000183244bf8 * -0x4400a209e25d6aa5 ^ uRam0000000183244ce0) + uVar7
  ;
  uRam0000000183244b80 = uRam0000000183244bf8 ^ uRam0000000183244ce0;
  uRam0000000183244c00 = 0x1c114095;
  uRam0000000183244ba8 = func_0x000189c925e0(uRam0000000183244b38 ^ 0x58001943ffc3f0);
  uRam0000000183244b50 = uRam0000000183244be0 ^ uRam0000000183244ba8 ^ 0xe3eef375;
  uRam0000000183244bd0 =
       (uRam0000000183244bd0 ^ uRam0000000183244ba8) + 0xe3eef375 ^ 0x501d35b7f14d16d1;
  uRam0000000183244cc8 =
       (uRam0000000183244cc8 * 0x4b1946e19c6e9abb ^ uRam0000000183244bd0) + uRam0000000183244ba8;
  uRam0000000183244be0 = uRam0000000183244cc8 ^ uRam0000000183244bd0;
  uRam0000000183244c80 = 0xe3eef375;
  uRam0000000183244c60 = func_0x000189c925e0(uRam0000000183244c28 ^ 0x7000354500dc6b);
  uVar7 = (ulonglong)(((uint)uRam0000000183244c60 ^ 0xa24a0064) & 0xe3eef375);
  uRam0000000183244c00 = uRam0000000183244c70 ^ uVar7 ^ 0x10000340a;
  uRam0000000183244b08 = (uRam0000000183244b08 ^ uVar7) + 0x10000340a ^ 0x2eb2d84394a732b1;
  uRam0000000183244be8 = (uRam0000000183244be8 * 0x45295e5b2c00f66d ^ uRam0000000183244b08) + uVar7;
  uRam0000000183244b48 = uRam0000000183244be8 ^ uRam0000000183244b08;
  uRam0000000183244b70 = 0x340a;
  uVar7 = (uRam0000000183244ba8 ^ _UNK_18150d190) + uRam0000000183244c28 + 0x84222325;
  uVar8 = (uRam0000000183244c28 ^ _UNK_18150d198) + uRam0000000183244ba8 + 0x9386c0c7;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244ba8 ^ _UNK_18150d190;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244c28 ^ _UNK_18150d198;
  uRam0000000183244cf8 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183244ba8 + 0x9386c0c7) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244c28 + 0x84222325));
  uVar7 = uRam0000000183244cf8 << 0x3c | uRam0000000183244cf8 >> 4;
  uRam0000000183244b58 = (uRam0000000183244b58 ^ uVar7) - 0x9386c0c7 ^ 0xec4a78272a8fa3b1;
  uRam0000000183244b28 = (uRam0000000183244b28 * 0x190008853e732a73 ^ uRam0000000183244b58) + uVar7;
  uRam0000000183244c30 = uRam0000000183244b28 ^ uRam0000000183244b58;
  uRam0000000183244b50 = 0x6c793f39;
  uRam0000000183244b40 = func_0x000189c925e0(uRam0000000183244ba0 ^ 0x50ffe8a7ffa39d);
  uVar7 = uRam0000000183244b40 ^ 0x9386c0c7;
  uRam0000000183244ba0 = uRam0000000183244c50 ^ uVar7 ^ 0x9386f4d1;
  uRam0000000183244c78 = (uRam0000000183244c78 ^ uVar7) + 0x9386f4d1 ^ 0xb0df95de613257ca;
  uRam0000000183244b18 = (uRam0000000183244b18 * -0x9da7e28ff8aa50d ^ uRam0000000183244c78) + uVar7;
  uRam0000000183244bd8 = uRam0000000183244b18 ^ uRam0000000183244c78;
  uRam0000000183244cf0 = 0x9386f4d1;
  uVar7 = (~uRam0000000183244bb8 + 0x6c793f3a) *
          ((uRam0000000183244b50 ^ 0x17a4d7f4) +
          (ulonglong)((uint)uRam0000000183244b50 & 0x17a4d7f4) * 2);
  uVar7 = (uVar7 | uRam0000000183244b28) + (uVar7 & uRam0000000183244b28);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar8 = func_0x000189c925e0((uVar7 | 0x7bdde8cd) + (ulonglong)((uint)uVar7 & 0x7bdde8cd));
  uVar8 = uVar8 ^ 0xfffffff9;
  uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar8;
  uRam0000000183244cb0 = uRam0000000183244ba8 ^ uVar8 ^ 0x10000340a;
  uRam0000000183244b60 = (uRam0000000183244b60 ^ uVar8) + 0x10000340a ^ 0xe154a46da28526a0;
  uRam0000000183244b78 = (uRam0000000183244b78 * -0x2231cd20dcb49d1d ^ uRam0000000183244b60) + uVar8
  ;
  uRam0000000183244bd8 = uRam0000000183244b78 ^ uRam0000000183244b60;
  uRam0000000183244b08 = 0x340a;
  uVar7 = (uRam0000000183244bc8 ^ _UNK_18150d1a0) + uRam0000000183244be0 + 0x84222325;
  uVar8 = (uRam0000000183244be0 ^ _UNK_18150d1a8) + uRam0000000183244bc8 + 0x4d4ce88e;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244bc8 ^ _UNK_18150d1a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244be0 ^ _UNK_18150d1a8;
  uRam0000000183244ca8 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183244bc8 + 0x4d4ce88e) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244be0 + 0x84222325));
  uRam0000000183244c90 =
       (uRam0000000183244c90 ^ uRam0000000183244ca8) - 0x4d4ce88e ^ 0x8c4835d7b9c88b0a;
  uRam0000000183244c50 =
       (uRam0000000183244c50 * -0x68c75cad81e7f5f5 ^ uRam0000000183244c90) + uRam0000000183244ca8;
  uRam0000000183244bd0 = uRam0000000183244c50 ^ uRam0000000183244c90;
  uRam0000000183244cb8 = 0xb2b31772;
  uVar7 = (uRam0000000183244c08 ^ _UNK_18150d1b0) + uRam0000000183244b90 + 0x8422172f;
  uVar8 = (uRam0000000183244b90 ^ _UNK_18150d1b8) + uRam0000000183244c08 + 0x4d4ce88e;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244c08 ^ _UNK_18150d1b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244b90 ^ _UNK_18150d1b8;
  uRam0000000183244b10 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183244c08 + 0x4d4ce88e) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244b90 + 0x8422172f));
  uVar7 = (uRam0000000183244b10 ^ 0x340a) & 0xfffffffffffe;
  uRam0000000183244bc0 = uRam0000000183244b58 ^ uVar7 ^ 0x4d4d1c98;
  uRam0000000183244c58 = (uRam0000000183244c58 ^ uVar7) + 0x4d4d1c98 ^ 0x57d17d9d125af0c5;
  uRam0000000183244b70 = (uRam0000000183244b70 * 0x68a665240a697d59 ^ uRam0000000183244c58) + uVar7;
  uRam0000000183244ce0 = uRam0000000183244b70 ^ uRam0000000183244c58;
  uRam0000000183244b30 = 0x4d4d1c98;
  uVar7 = (uRam0000000183244c40 ^ _UNK_18150d1c0) + uRam0000000183244b90 + 0xc96f3fbd;
  uVar8 = (uRam0000000183244b90 ^ _UNK_18150d1c8) + uRam0000000183244c40 + 0xb2b31772;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244c40 ^ _UNK_18150d1c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244b90 ^ _UNK_18150d1c8;
  uRam0000000183244b58 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183244c40 + 0xb2b31772) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244b90 + 0xc96f3fbd));
  uVar7 = uRam0000000183244b58 ^ 0x4d4d1c98;
  uRam0000000183244c88 = uRam0000000183244b38 ^ uVar7 ^ 0x10000340a;
  uRam0000000183244cb8 = (uRam0000000183244cb8 ^ uVar7) + 0x10000340a ^ 0xa63f14c4289691bb;
  uRam0000000183244b20 = (uRam0000000183244b20 * 0x6d797b0706e9ba73 ^ uRam0000000183244cb8) + uVar7;
  uRam0000000183244b80 = uRam0000000183244b20 ^ uRam0000000183244cb8;
  uRam0000000183244b18 = 0x340a;
  uVar7 = (~uRam0000000183244b00 + 0x58e7bf0d) *
          ((uRam0000000183244be0 ^ 0xfb8dfcda) +
          (ulonglong)((uint)uRam0000000183244be0 & 0xfb8dfcda) * 2);
  uVar7 = (uVar7 | uRam0000000183244cd8) + (uVar7 & uRam0000000183244cd8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244b58 =
       func_0x000189c925e0((uVar7 | 0xa36a43d6) + (ulonglong)((uint)uVar7 & 0xa36a43d6));
  uVar8 = _UNK_18150d1d8;
  uVar7 = _UNK_18150d1d0;
  uRam0000000183244c38 = uRam0000000183244b40 ^ uRam0000000183244cf8 ^ 0xd8979f0b;
  uRam0000000183244b08 =
       (uRam0000000183244b08 ^ uRam0000000183244cf8) + 0xd8979f0b ^ 0xbd2c9af870ea9a8;
  uRam0000000183244c58 =
       (uRam0000000183244c58 * 0xfe00f26c39ecbff ^ uRam0000000183244b08) + uRam0000000183244cf8;
  uRam0000000183244c98 = uRam0000000183244c58 ^ uRam0000000183244b08;
  uRam0000000183244cb0 = 0xd8979f0b;
  uVar9 = (uRam0000000183244b28 ^ _UNK_18150d1d0) + uRam0000000183244c00 + 0xfb8dfcda;
  uVar10 = (uRam0000000183244c00 ^ _UNK_18150d1d8) + uRam0000000183244b28 + 0x58e7bf0c;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183244b28 ^ _UNK_18150d1d0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183244c00 ^ _UNK_18150d1d8;
  uRam0000000183244c68 =
       func_0x000189c925e0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183244b28 + 0x58e7bf0c) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183244c00 + 0xfb8dfcda));
  uRam0000000183244c58 =
       (uRam0000000183244c58 ^ uRam0000000183244c68 ^ 0x402000) + 0x274860f3 ^ 0x253ce1da84d65368;
  uRam0000000183244b70 =
       (uRam0000000183244b70 * 0x22b48807acc51821 ^ uRam0000000183244c58) +
       (uRam0000000183244c68 ^ 0x402000);
  uRam0000000183244c90 = uRam0000000183244b70 ^ uRam0000000183244c58;
  uRam0000000183244c20 = 0x274860f3;
  uVar9 = (uRam0000000183244cd0 ^ uVar7) + uRam0000000183244b48 + 0xfb8dfcda;
  uVar10 = (uRam0000000183244b48 ^ uVar8) + uRam0000000183244cd0 + 0x58e7bf0c;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183244cd0 ^ uVar7;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183244b48 ^ uVar8;
  uRam0000000183244b18 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183244cd0 + 0x58e7bf0c) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244b48 + 0xfb8dfcda));
  uVar7 = (ulonglong)((uint)uRam0000000183244b18 & 0x7fafdfff) ^ 0x274860f3;
  uRam0000000183244c30 = (uRam0000000183244c30 ^ uVar7) + 0x58a79f0c ^ 0x28a391d1132eff1c;
  uRam0000000183244bf0 = (uRam0000000183244bf0 * -0x540a3409ff8509c5 ^ uRam0000000183244c30) + uVar7
  ;
  uRam0000000183244c78 = uRam0000000183244bf0 ^ uRam0000000183244c30;
  uRam0000000183244cd8 = 0x58a79f0c;
  uVar7 = (~uRam0000000183244cc0 + 0xd8979f0c) *
          ((uRam0000000183244b00 ^ 0x5cb5bc2e) +
          (ulonglong)((uint)uRam0000000183244b00 & 0x5cb5bc2e) * 2);
  uVar7 = (uVar7 | uRam0000000183244b38) + (uVar7 & uRam0000000183244b38);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244c00 =
       func_0x000189c925e0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam0000000183244cc8 = uRam0000000183244c00 << 0x1f | uRam0000000183244c00 >> 0x21;
  uRam0000000183244cd0 = uRam0000000183244cd0 ^ uRam0000000183244cc8 ^ 0x55918f1e273a92b8;
  uRam0000000183244b10 =
       (uRam0000000183244b10 * 0x33b0f8cfb183096d ^ uRam0000000183244cd0) + uRam0000000183244cc8;
  uRam0000000183244c78 = uRam0000000183244b10 ^ uRam0000000183244cd0;
  uRam0000000183244c40 = 0;
  uVar7 = (uRam0000000183244b20 ^ _UNK_18150d1e0) + uRam0000000183244c30 + 0xfb8dfcda;
  uVar8 = (uRam0000000183244c30 ^ _UNK_18150d1e8) + uRam0000000183244b20 + 0x80502000;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183244b20 ^ _UNK_18150d1e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183244c30 ^ _UNK_18150d1e8;
  uRam0000000183244ce0 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183244b20 + 0x80502000) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183244c30 + 0xfb8dfcda));
  uVar8 = uRam0000000183244ce0 ^ 0xffffffff;
  uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar8 ^
          0x7fafdffe) & 0xfffffffffffffffe;
  uRam0000000183244c00 = uRam0000000183244c00 ^ uVar7 ^ 0xb606216b0d04dec9;
  uRam0000000183244c08 = (uRam0000000183244c08 * -0x699cc4628b32e67 ^ uRam0000000183244c00) + uVar7;
  uRam0000000183244b28 = uRam0000000183244c08 ^ uRam0000000183244c00;
  uRam0000000183244b88 = 0;
  uVar7 = ((uRam0000000183244bf0 ^ 0x8422172f) +
          (ulonglong)((uint)uRam0000000183244bf0 & 0x8422172f) * 2) * -uRam0000000183244c78;
  uVar7 = (uVar7 | uRam0000000183244c28) + (uVar7 & uRam0000000183244c28);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183244b60 =
       func_0x000189c925e0((uVar7 | 0x8422172f) + (ulonglong)((uint)uVar7 & 0x8422172f));
  uRam0000000183244c50 = uRam0000000183244c20 ^ uRam0000000183244b60 ^ 0x340a;
  uRam0000000183244bc8 = (uRam0000000183244bc8 ^ uRam0000000183244b60) + 0x340a ^ 0x205f574fa45b7e;
  uRam0000000183244be8 =
       (uRam0000000183244be8 * -0x7dd493031354fa21 ^ uRam0000000183244bc8) + uRam0000000183244b60;
  uRam0000000183244bd8 = uRam0000000183244be8 ^ uRam0000000183244bc8;
  uRam0000000183244ba8 = 0x340a;
  uRam0000000183244c70 = func_0x000189c925e0(uRam0000000183244c78 + 0xffe2ff7c22ffe1ff ^ 0xf6);
  uVar7 = uRam0000000183244c70 << 5 | uRam0000000183244c70 >> 0x3b;
  uRam0000000183244bc8 = uRam0000000183244bc8 ^ uVar7 ^ 0x4de7077223b7502a;
  uRam0000000183244c10 = (uRam0000000183244c10 * -0x1d23f0b2102b967d ^ uRam0000000183244bc8) + uVar7
  ;
  uRam0000000183244cf8 = uRam0000000183244c10 ^ uRam0000000183244bc8;
  uRam0000000183244b08 = 0;
  uVar7 = uVar4 ^ 0x84222325 ^ uRam0000000183244bb8;
  lVar2 = (uVar4 ^ 0x84222325) + uRam0000000183244bb8;
  uVar8 = uVar7 + lVar2;
  uVar9 = (uRam0000000183244bb8 ^ 0x340a) + uRam0000000183244bb8 + 0x340a;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183244bb8 ^ 0x340a;
  uRam0000000183244c00 =
       func_0x000189c925e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183244bb8 + 0x340a) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar2);
  lVar2 = uVar4 - (uVar3 & 0x340a) * 2;
  uRam0000000183244c48 =
       (uRam0000000183244c48 ^ uVar4 ^ uRam0000000183244c00) + lVar2 + 0x340a ^ 0x9df55a89c8540661;
  uRam0000000183244c80 =
       (uRam0000000183244c80 * 0x1d55b4f3077e2529 ^ uRam0000000183244c48) +
       (uVar4 ^ uRam0000000183244c00);
  uRam0000000183244cc8 = uRam0000000183244c80 ^ uRam0000000183244c48;
  uRam0000000183244b40 = lVar2 + 0x340aU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1630e,0x3a9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189c8e109 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18150b798 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hP; beI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 189c92670, runtime 6ffff18a2670) =====

void FUN_189c92670(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000189c926ac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18150d230 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hP; beJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 189c93560, runtime 6ffff18a3560) =====

void FUN_189c93560(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189c935dd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18150d770 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



