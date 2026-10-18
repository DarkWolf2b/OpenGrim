// ===== Lsixtwo/qG; _1a0104b3d4a302ac89dcc809aa4dc02f ()V (handler @ image 185056ee0, runtime 6fffecc66ee0) =====

void FUN_185056ee0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185056fc8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804136c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daA (Z)V (handler @ image 185005b30, runtime 6fffecc15b30) =====

void FUN_185005b30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185005b7a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804034a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daB ()Z (handler @ image 185005cb0, runtime 6fffecc15cb0) =====

void FUN_185005cb0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185005cf7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180403540 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daC ()Z (handler @ image 185005e40, runtime 6fffecc15e40) =====

void FUN_185005e40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185005e87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804035e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daD (Ljava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 185005fe0, runtime 6fffecc15fe0) =====

undefined8 FUN_185005fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/qG; daE ([B)Ljava/lang/String; (handler @ image 185006070, runtime 6fffecc16070) =====

void FUN_185006070(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000185006110 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804037f0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qG; daF (IJ)Ljava/lang/String; (handler @ image 18503da30, runtime 6fffecc4da30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18503da30(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uRam00000001830b9908 = func_0x000185044100(uRam00000001830b9a48 ^ 0x276d0fabde10687d);
  uRam00000001830b9c58 =
       (uRam00000001830b9c58 ^ uRam00000001830b9908 & 0x7ffffffff0000000) + 0xe5965a3cfb7bbecf ^
       0xc526ac238828d45f;
  uRam00000001830b9ac8 =
       (uRam00000001830b9ac8 * -0x1567cbfb2140dceb ^ uRam00000001830b9c58) +
       (uRam00000001830b9908 & 0x7ffffffff0000000);
  uRam00000001830b9a50 = uRam00000001830b9ac8 ^ uRam00000001830b9c58;
  uRam00000001830b9bf8 = 0xe5965a3cfb7bbecf;
  uVar7 = (uRam00000001830b9a30 ^ _UNK_18040eb20) + uRam00000001830b9a48 + 0x84222325;
  uVar9 = (uRam00000001830b9a48 ^ _UNK_18040eb28) + uRam00000001830b9a30 + 0xe0120e89526099ec;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9a30 ^ _UNK_18040eb20;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9a48 ^ _UNK_18040eb28;
  uRam00000001830b9ba8 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001830b9a30 + 0xe0120e89526099ec) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9a48 + 0x84222325));
  uRam00000001830b9b08 = uRam00000001830b9b08 + 0x1fedf176ad9f6614 ^ 0x3d460796c5251a1f;
  uRam00000001830b9b50 = uRam00000001830b9c30 * 0x6389ce2bf5210fc9;
  uRam00000001830b9c30 = uRam00000001830b9b50 ^ uRam00000001830b9b08;
  uRam00000001830b9c20 = 0x1fedf176ad9f6614;
  uRam00000001830b9b30 = func_0x000185044100(uRam00000001830b9918 + 0x87450e520dfdc1df ^ 0x17);
  uVar9 = uRam00000001830b9b30 ^ 0xe0120e895260ffff;
  uVar7 = uVar9 >> 1 | uVar9;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar9;
  uRam00000001830b9ac0 = uRam00000001830b9998 ^ uVar9 ^ 0xe0120e89526119eb;
  uRam00000001830b9ab8 = (uRam00000001830b9ab8 ^ uVar9) + 0xe0120e89526119eb ^ 0xb8761dc8d41eb71b;
  uRam00000001830b9b10 = (uRam00000001830b9b10 * 0x77af1cdc555d1e01 ^ uRam00000001830b9ab8) + uVar9;
  uRam00000001830b9b88 = uRam00000001830b9b10 ^ uRam00000001830b9ab8;
  uRam00000001830b9998 = -0x1fedf176ad9ee615;
  uRam00000001830b9b00 = func_0x000185044100(uRam00000001830b99c0 ^ 0x5cc416d955bd44be);
  uVar7 = (uRam00000001830b9b00 << 0x38 | uRam00000001830b9b00 >> 8) ^ 0xe0120e89526119eb;
  uRam00000001830b9be0 = uRam00000001830b9ab8 ^ uVar7 ^ 0x7fff;
  uRam00000001830b9c50 = (uRam00000001830b9c50 ^ uVar7) + 0x7fff ^ 0x689e3bab50c4fd5a;
  uRam00000001830b9a90 = (uRam00000001830b9a90 * 0x7c699ac0664322ab ^ uRam00000001830b9c50) + uVar7;
  uRam00000001830b9ae0 = uRam00000001830b9a90 ^ uRam00000001830b9c50;
  uRam00000001830b9b48 = 0x7fff;
  uRam00000001830b9c08 = func_0x000185044100(uRam00000001830b9b38 ^ 0x13575d9de68e829a);
  uRam00000001830b9940 =
       (uRam00000001830b9940 ^ uRam00000001830b9c08) + 0x391a40e0dd5e64be ^ 0x8f87defb99fc4224;
  uRam00000001830b9c10 =
       (uRam00000001830b9c10 * 0x4e34de980ff8d90f ^ uRam00000001830b9940) + uRam00000001830b9c08;
  uRam00000001830b9920 = uRam00000001830b9c10 ^ uRam00000001830b9940;
  uRam00000001830b99e0 = 0x391a40e0dd5e64be;
  uRam00000001830b9928 = func_0x000185044100(uRam00000001830b9b80 ^ 0x9d5470884a0b2e6f);
  uVar7 = ~uRam00000001830b9928 & 0xc6e5bf1f22a21b41;
  uRam00000001830b9b98 = uRam00000001830b9cf0 ^ uVar7 ^ 0x7fff;
  uRam00000001830b9c58 = (uRam00000001830b9c58 ^ uVar7) + 0x7fff ^ 0x9c0847d78b14b8e;
  uRam00000001830b9bc0 =
       (uRam00000001830b9bc0 * 0x307ada09564a321f ^ uRam00000001830b9c58) + uVar7 ^
       uRam00000001830b9c58;
  uRam00000001830b9c80 = 0x7fff;
  uRam00000001830b9a60 = func_0x000185044100(uRam00000001830b9a38 + 0x928398fb0b7721ba ^ 0x12);
  uRam00000001830b9b78 =
       (uRam00000001830b9b78 ^ uRam00000001830b9a60) + 0x2246766040fa5fc7 ^ 0x3028e951fde0d447;
  uRam00000001830b9b60 =
       (uRam00000001830b9b60 * 0x35518f4658b88083 ^ uRam00000001830b9b78) + uRam00000001830b9a60;
  uRam00000001830b9ae8 = uRam00000001830b9b60 ^ uRam00000001830b9b78;
  uRam00000001830b9bd0 = uRam00000001830b99d0 ^ 0x2246766040fa5fc7;
  uRam00000001830b9b68 = 0x2246766040fa5fc7;
  uVar7 = (uRam00000001830b9bf8 ^ _UNK_18040eb30) + uRam00000001830b9af0 + 0x84225cda;
  uVar9 = (uRam00000001830b9af0 ^ _UNK_18040eb38) + uRam00000001830b9bf8 + 0xddb9899fbf05a039;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9bf8 ^ _UNK_18040eb30;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9af0 ^ _UNK_18040eb38;
  uRam00000001830b99d0 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001830b9bf8 + 0xddb9899fbf05a039) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9af0 + 0x84225cda));
  uVar7 = (uRam00000001830b99d0 << 0x11 | uRam00000001830b99d0 >> 0x2f) << 0x12 |
          (uRam00000001830b99d0 & 0x7fffffffffff) >> 0x1d;
  uRam00000001830b9cc8 = uRam00000001830b9bd8 ^ uVar7 ^ 0xddb9899fbf062038;
  uRam00000001830b9ac8 = (uRam00000001830b9ac8 ^ uVar7) + 0xddb9899fbf062038 ^ 0x4d4796a8669b2d42;
  uRam00000001830b9b88 = (uRam00000001830b9b88 * -0x47d511531096209f ^ uRam00000001830b9ac8) + uVar7
  ;
  uRam00000001830b9c38 = uRam00000001830b9b88 ^ uRam00000001830b9ac8;
  uRam00000001830b9ca0 = 0xddb9899fbf062038;
  uRam00000001830b9900 = func_0x000185044100(uRam00000001830b9ae0 ^ 0xc55c3ef9a6232a0d);
  uRam00000001830b9c60 = uRam00000001830b9a40 ^ uRam00000001830b9900 ^ 0x7fff;
  uRam00000001830b9b58 = (uRam00000001830b9b58 ^ uRam00000001830b9900) + 0x7fff ^ 0xbe8f32f42dffea19
  ;
  uRam00000001830b9cc8 =
       (uRam00000001830b9cc8 * -0x7f8c87d95f1e04a1 ^ uRam00000001830b9b58) + uRam00000001830b9900;
  uRam00000001830b9b88 = uRam00000001830b9cc8 ^ uRam00000001830b9b58;
  uRam00000001830b9ad8 = 0x7fff;
  uVar7 = (~uRam00000001830b9c10 + 0xe409bd7ecfc958a3) *
          ((uRam00000001830b9c58 ^ 0xe5965a3c7f599dea) +
          (uRam00000001830b9c58 & 0x65965a3c7f599dea) * 2);
  uVar7 = (uVar7 | uRam00000001830b9b98) + (uVar7 & uRam00000001830b9b98);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830b9b20 =
       func_0x000185044100((uVar7 | 0x19fe742b090c548) + (uVar7 & 0x19fe742b090c548));
  uRam00000001830b9c30 =
       (uRam00000001830b9c30 ^ uRam00000001830b9b20) + 0x19fe74234b2e66d ^ 0x8779b98e2135cb53;
  uRam00000001830b9b78 =
       (uRam00000001830b9b78 * 0x483cfdbebdf1baef ^ uRam00000001830b9c30) + uRam00000001830b9b20;
  uRam00000001830b9ac8 = uRam00000001830b9b78 ^ uRam00000001830b9c30;
  uRam00000001830b9938 = 0x19fe74234b2e66d;
  uRam00000001830b9a20 = func_0x000185044100(uRam00000001830b9be8 + 0x41bc9e4fb8a36ffe ^ 0xd5);
  uVar9 = uRam00000001830b9a20 ^ 0x5572515ddf6ce6fe;
  uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar9) *
          0x4f51d8302f1e4605 ^ 0xe5965a3cfb7bbecf;
  uRam00000001830b99f8 = (uRam00000001830b99f8 ^ uVar7) + 0xe400183ccb491882 ^ 0x22300cfa3adc17f0;
  uRam00000001830b9ab8 = (uRam00000001830b9ab8 * -0x534d4ab5255b1b29 ^ uRam00000001830b99f8) + uVar7
  ;
  uRam00000001830b9a78 = uRam00000001830b9ab8 ^ uRam00000001830b99f8;
  uRam00000001830b9c68 = 0xe400183ccb491882;
  uVar7 = (uRam00000001830b9ab0 ^ _UNK_18040eb40) + uRam00000001830b9a38 + 0x19fe742b090c548;
  uVar9 = (uRam00000001830b9a38 ^ _UNK_18040eb48) + uRam00000001830b9ab0 + 0xc800307996923104;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9ab0 ^ _UNK_18040eb40;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9a38 ^ _UNK_18040eb48;
  uRam00000001830b9c90 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001830b9ab0 + 0xc800307996923104) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001830b9a38 + 0x19fe742b090c548));
  uVar7 = uRam00000001830b9c90 << 0x22 | uRam00000001830b9c90 >> 0x1e;
  uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar7;
  uRam00000001830b9c30 = uRam00000001830b9c38 ^ uVar7 ^ 0xc9a017bbcb451771;
  uRam00000001830b9bd8 = (uRam00000001830b9bd8 ^ uVar7) + 0xc9a017bbcb451771 ^ 0xd0f295e168501a78;
  uRam00000001830b9b10 = (uRam00000001830b9b10 * -0x70e0e570f785b667 ^ uRam00000001830b9bd8) + uVar7
  ;
  uRam00000001830b9b38 = uRam00000001830b9b10 ^ uRam00000001830b9bd8;
  uRam00000001830b9b78 = 0xc9a017bbcb451771;
  uVar7 = (~uRam00000001830b9c10 + 0xc9a017bbcb451772) *
          ((uRam00000001830b9900 ^ 0xc9a017bb4f673454) +
          (uRam00000001830b9900 & 0x49a017bb4f673454) * 2);
  uVar7 = (uVar7 | uRam00000001830b9af0) + (uVar7 & uRam00000001830b9af0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830b9970 =
       func_0x000185044100((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam00000001830b9a70 = uRam00000001830b9970 ^ 0xc9a017bbcb451771;
  uRam00000001830b9ca8 = uRam00000001830b9ca8 ^ uRam00000001830b9a70 ^ 0x397ce572fee4ac7;
  uRam00000001830b9c48 =
       (uRam00000001830b9c48 * 0x4cc0d0b8d18db605 ^ uRam00000001830b9ca8) + uRam00000001830b9a70;
  uRam00000001830b99d0 = uRam00000001830b9c48 ^ uRam00000001830b9ca8;
  uRam00000001830b9c80 = 0;
  uVar7 = (uRam00000001830b9b58 ^ 0x84225cda) + uRam00000001830b9cd0 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9b58 ^ 0x84225cda;
  uVar9 = ((uRam00000001830b9cd0 + uRam00000001830b9b58) * 0x2000 |
          uRam00000001830b9cd0 + uRam00000001830b9b58 >> 0x33) ^ uRam00000001830b9cd0;
  uRam00000001830b9c98 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - uRam00000001830b9b58 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9cd0 + 0x84225cda));
  uVar7 = uRam00000001830b9c98 & 0xfffffffffe000000;
  uRam00000001830b9a50 = uRam00000001830b9a00 ^ uVar7 ^ 0x7fff;
  uRam00000001830b9a58 = (uRam00000001830b9a58 ^ uVar7) + 0x7fff ^ 0x66e9800e9b6af0af;
  uRam00000001830b9928 = (uRam00000001830b9928 * -0x7bab2c33375e7bdf ^ uRam00000001830b9a58) + uVar7
  ;
  uRam00000001830b99f8 = uRam00000001830b9928 ^ uRam00000001830b9a58;
  uRam00000001830b9918 = 0x7fff;
  uVar7 = (uRam00000001830b9a18 ^ _UNK_18040eb50) + uRam00000001830b9b90 + 0xe5965a3c7f599dea;
  uVar9 = (uRam00000001830b9b90 ^ _UNK_18040eb58) + (uRam00000001830b9a18 - 1);
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9a18 ^ _UNK_18040eb50;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9b90 ^ _UNK_18040eb58;
  uRam00000001830b9a70 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830b9a18 - 1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001830b9b90 + 0xe5965a3c7f599dea));
  uVar7 = (uRam00000001830b9a70 ^ 0xe5965a3cfb7bb000) & 0xfffffffffffff000;
  uRam00000001830b9ad0 = (uRam00000001830b9ad0 ^ uVar7) + 0x1a69a5c304844130 ^ 0x9a99a1b98d1df711;
  uRam00000001830b9a38 = (uRam00000001830b9a38 * 0x3c3d4935a931da5f ^ uRam00000001830b9ad0) + uVar7;
  uRam00000001830b9cb8 = uRam00000001830b9a38 ^ uRam00000001830b9ad0;
  uRam00000001830b9c88 = 0x1a69a5c304844130;
  uRam00000001830b99c8 = func_0x000185044100(uRam00000001830b9a58 ^ 0xcc3335175af353c7);
  uVar7 = (uRam00000001830b99c8 & 0xffffffffff00) * 0x10000;
  uRam00000001830b9c38 = uRam00000001830b9c38 ^ uVar7 ^ 0x1c56db00ba3eb96;
  uRam00000001830b9ce8 = (uRam00000001830b9ce8 * 0x8bc52216159e78b ^ uRam00000001830b9c38) + uVar7;
  uRam00000001830b9908 = uRam00000001830b9ce8 ^ uRam00000001830b9c38;
  uRam00000001830b9ab8 = 0;
  uVar7 = ((uRam00000001830b99e8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001830b99e8 & 0x84225cda) * 2) * -uRam00000001830b9cb8;
  uVar7 = (uVar7 | uRam00000001830b9ba0) + (uVar7 & uRam00000001830b9ba0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830b9b00 =
       func_0x000185044100((uVar7 | 0x84225cda) + (ulonglong)((uint)uVar7 & 0x84225cda));
  auVar6 = _UNK_1800170c0;
  uVar7 = uRam00000001830b9b00 << 0x12 | uRam00000001830b9b00 >> 0x2e;
  uRam00000001830b9918 = uRam00000001830b99d8 ^ uVar7 ^ 0x7fff;
  uRam00000001830b9b08 = (uRam00000001830b9b08 ^ uVar7) + 0x7fff ^ 0xfab7b2b8648dd95b;
  uRam00000001830b9ae8 = (uRam00000001830b9ae8 * 0x4c80ab6b5a32f58b ^ uRam00000001830b9b08) + uVar7;
  uRam00000001830b9a20 = uRam00000001830b9ae8 ^ uRam00000001830b9b08;
  uRam00000001830b99d8 = uRam00000001830b99c8 ^ 0x7fff;
  auVar4._8_8_ = _UNK_18019c088;
  auVar4._0_8_ = param_4 ^ 0x84222325;
  uRam00000001830b9ac0 = 0x7fff;
  auVar5 = pshufb(auVar4 ^ _UNK_18040eb60,_UNK_1800170c0);
  uVar9 = auVar5._8_8_ + auVar5._0_8_;
  uVar7 = uVar9 + uRam00000001830b99c0;
  if (auVar5._4_4_ < 0) {
    uVar7 = uRam00000001830b9c80 ^ uVar9;
  }
  uRam00000001830b9ae0 = func_0x000185044100(SUB161(auVar4 ^ _UNK_18040eb60,5) ^ uVar7);
  uVar7 = (uRam00000001830b9ae0 ^ param_4) & 0xffffffffffc00000;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001830b9930 = (ulonglong)uVar2;
  uRam00000001830b9c88 = (uRam00000001830b9c88 ^ uVar7) + uRam00000001830b9930 ^ 0x97cba13d92e08fbd;
  uRam00000001830b9998 = (uRam00000001830b9998 * -0x37a6a0d569217c9d ^ uRam00000001830b9c88) + uVar7
  ;
  uRam00000001830b9b10 = uRam00000001830b9998 ^ uRam00000001830b9c88;
  uVar3 = (ulonglong)(uVar2 ^ param_3);
  uVar7 = (~uRam00000001830b9908 + 0x69ea61b0) *
          ((uRam00000001830b9a38 ^ 0x7441e74) +
          (ulonglong)((uint)uRam00000001830b9a38 & 0x7441e74) * 2);
  uVar7 = (uVar7 | uRam00000001830b9cb8) + (uVar7 & uRam00000001830b9cb8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830b9900 =
       func_0x000185044100((uVar7 | 0x6eae7fdb) + (ulonglong)((uint)uVar7 & 0x6eae7fdb));
  uRam00000001830b9c90 =
       (uRam00000001830b9c90 ^ uRam00000001830b9900 & 0xfffffffffc000) + 0xebee7dff ^
       0x91fd4c1ab2ed2bbb;
  uRam00000001830b9ce0 =
       (uRam00000001830b9ce0 * -0x2921c88a9d361579 ^ uRam00000001830b9c90) +
       (uRam00000001830b9900 & 0xfffffffffc000);
  uRam00000001830b9aa0 = uRam00000001830b9ce0 ^ uRam00000001830b9c90;
  uRam00000001830b9a38 = 0xebee7dff;
  uRam00000001830b9978 = func_0x000185044100(uRam00000001830b9a00 ^ 0x47002dc5ffb693);
  uRam00000001830b9b90 =
       (uRam00000001830b9b90 ^ uRam00000001830b9978) + 0x576b9aff ^ 0x99a00ff12b94b644;
  uRam00000001830b9bc8 =
       (uRam00000001830b9bc8 * 0x15b1612999fe769b ^ uRam00000001830b9b90) + uRam00000001830b9978;
  uRam00000001830b9b68 = uRam00000001830b9bc8 ^ uRam00000001830b9b90;
  uRam00000001830b9c00 = 0x576b9aff;
  uVar7 = (uRam00000001830b9980 ^ _UNK_18040eb70) + uRam00000001830b9938 + 0x84222325;
  uVar9 = (uRam00000001830b9938 ^ _UNK_18040eb78) + uRam00000001830b9980 + 0xf6c3cd7f;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9980 ^ _UNK_18040eb70;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9938 ^ _UNK_18040eb78;
  uRam00000001830b9c40 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830b9980 + 0xf6c3cd7f) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9938 + 0x84222325));
  uVar7 = uRam00000001830b9c40 << 0x28 | uRam00000001830b9c40 >> 0x18;
  uRam00000001830b9bd0 = (uRam00000001830b9bd0 ^ uVar7) - 0xf6c3cd7f ^ 0xe609a4845f06d70a;
  uRam00000001830b9cf0 = (uRam00000001830b9cf0 * -0x3d9a5c18bab2a1e7 ^ uRam00000001830b9bd0) + uVar7
  ;
  uRam00000001830b99c8 = uRam00000001830b9cf0 ^ uRam00000001830b9bd0;
  uRam00000001830b9c10 = 0x93c3281;
  uRam00000001830b99a8 = func_0x000185044100(uRam00000001830b9a20 + 0xff8e001214ffa0ff ^ 8);
  uVar7 = (uRam00000001830b99a8 & 0x1fff) << 0x32 | uRam00000001830b99a8 >> 0xe;
  uRam00000001830b9af8 = uRam00000001830b9c50 ^ uVar7 ^ 0xf6c449ee;
  uRam00000001830b9bd8 = (uRam00000001830b9bd8 ^ uVar7) + 0xf6c449ee ^ 0x1e67e118b80b913;
  uRam00000001830b9aa8 = (uRam00000001830b9aa8 * -0x6748e441a9e9de0d ^ uRam00000001830b9bd8) + uVar7
  ;
  uRam00000001830b99c8 = uRam00000001830b9aa8 ^ uRam00000001830b9bd8;
  uRam00000001830b9910 = 0xf6c449ee;
  uVar7 = (uRam00000001830b9940 ^ _UNK_18040eb80) + uRam00000001830b9918 + 0x72e66acb;
  uVar9 = (uRam00000001830b9918 ^ _UNK_18040eb88) + uRam00000001830b9940 + 0x93c3281;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9940 ^ _UNK_18040eb80;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9918 ^ _UNK_18040eb88;
  uVar7 = func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830b9940 + 0x93c3281) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9918 + 0x72e66acb))
  ;
  uVar7 = (uVar7 & 0x3fffffffffffff) << 9 | uVar7 >> 0x37;
  uRam00000001830b9cb0 = uRam00000001830b9b68 ^ uVar7 ^ 0x100007c6f;
  uRam00000001830b9a28 = (uRam00000001830b9a28 ^ uVar7) + 0x100007c6f ^ 0x32ce270902c454aa;
  uRam00000001830b99a0 = (uRam00000001830b99a0 * 0x1a53321563e320b ^ uRam00000001830b9a28) + uVar7;
  uRam00000001830b9b08 = uRam00000001830b99a0 ^ uRam00000001830b9a28;
  uRam00000001830b9b20 = 0x7c6f;
  uRam00000001830b9ab0 = func_0x000185044100(uRam00000001830b9920 ^ 0xffbfff98b9ffba6d);
  uVar7 = uRam00000001830b9ab0 & 0xfffffffffffff800;
  uRam00000001830b9b18 = uRam00000001830b9938 ^ uVar7 ^ 0x100007c6f;
  uRam00000001830b9ac0 = (uRam00000001830b9ac0 ^ uVar7) + 0x100007c6f ^ 0x14e34903450b21b6;
  uRam00000001830b9ae8 = (uRam00000001830b9ae8 * 0xbd07c22add28bad ^ uRam00000001830b9ac0) + uVar7;
  uRam00000001830b9a50 = uRam00000001830b9ae8 ^ uRam00000001830b9ac0;
  uRam00000001830b9a98 = 0x7c6f;
  uVar7 = (uRam00000001830b9c40 ^ _UNK_18040eb90) + uRam00000001830b9a50 + 0x84222325;
  uVar9 = (uRam00000001830b9a50 ^ _UNK_18040eb98) + uRam00000001830b9c40 + 0x51241128;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9c40 ^ _UNK_18040eb90;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9a50 ^ _UNK_18040eb98;
  uVar7 = func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830b9c40 + 0x51241128)
                              ^ (uVar7 << 0x1d | uVar7 >> 0x23) -
                                (uRam00000001830b9a50 + 0x84222325));
  uRam00000001830b9cb0 = (uRam00000001830b9cb0 ^ uVar7) - 0x51241128 ^ 0x4669ba1679d9ec8;
  uRam00000001830b9bd8 = (uRam00000001830b9bd8 * 0x6302ff58ecd5c84b ^ uRam00000001830b9cb0) + uVar7;
  uRam00000001830b9900 = uRam00000001830b9bd8 ^ uRam00000001830b9cb0;
  uRam00000001830b9bf8 = 0xaedbeed8;
  uRam00000001830b99b8 = func_0x000185044100(uRam00000001830b9a28 ^ 0x460054e20005af);
  uVar9 = _UNK_18040eba8;
  uVar7 = _UNK_18040eba0;
  uVar8 = (ulonglong)((uint)uRam00000001830b99b8 & 0x7c6f);
  uRam00000001830b9998 = uRam00000001830b9b70 ^ uVar8 ^ 0x51248d97;
  uRam00000001830b9af0 = (uRam00000001830b9af0 ^ uVar8) + 0x51248d97 ^ 0xbcca7fce4f0b36c9;
  uRam00000001830b9a88 =
       (uRam00000001830b9a88 * -0x5498fae261498165 ^ uRam00000001830b9af0) + uVar8 ^
       uRam00000001830b9af0;
  uRam00000001830b9a28 = 0x51248d97;
  uVar8 = (uRam00000001830b9a48 ^ _UNK_18040eba0) + uRam00000001830b9a10 + 0x6fcc5eda;
  uVar10 = (uRam00000001830b9a10 ^ _UNK_18040eba8) + uRam00000001830b9a48 + 0x576b9aff;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830b9a48 ^ _UNK_18040eba0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001830b9a10 ^ _UNK_18040eba8;
  uRam00000001830b9b80 =
       func_0x000185044100((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001830b9a48 + 0x576b9aff) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830b9a10 + 0x6fcc5eda));
  uRam00000001830b9cd0 = uRam00000001830b9ce8 ^ uRam00000001830b9b80 ^ 0x1435a18fe;
  uRam00000001830b9910 =
       (uRam00000001830b9910 ^ uRam00000001830b9b80) + 0x1435a18fe ^ 0x3475b74491e7c147;
  uRam00000001830b99f0 =
       (uRam00000001830b99f0 * 0x2eda27c18b2051fb ^ uRam00000001830b9910) + uRam00000001830b9b80;
  uRam00000001830b99a8 = uRam00000001830b99f0 ^ uRam00000001830b9910;
  uRam00000001830b9ab0 = 0x435a18fe;
  uVar8 = (uRam00000001830b9988 ^ uVar7) + uRam00000001830b9ae8 + 0x6fcc5eda;
  uVar10 = (uRam00000001830b9ae8 ^ uVar9) + uRam00000001830b9988 + 0x576b9aff;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830b9988 ^ uVar7;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001830b9ae8 ^ uVar9;
  uRam00000001830b9940 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830b9988 + 0x576b9aff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9ae8 + 0x6fcc5eda));
  uVar7 = (uRam00000001830b9940 << 0x10 | uRam00000001830b9940 >> 0x30) ^ 0xebee7dff;
  uRam00000001830b9a08 = (uRam00000001830b9a08 ^ uVar7) + 0xbc85e700 ^ 0x323c58b7cc97eb83;
  uRam00000001830b9cd0 = (uRam00000001830b9cd0 * 0x52e5ca0f75d8f641 ^ uRam00000001830b9a08) + uVar7;
  uRam00000001830b9cb8 = uRam00000001830b9cd0 ^ uRam00000001830b9a08;
  uRam00000001830b9c80 = uRam00000001830b9aa8 ^ 0xbc85e700;
  uRam00000001830b9b18 = 0xbc85e700;
  uRam00000001830b9b78 = func_0x000185044100(uRam00000001830b99f8 + 0x20ff7c25001dff ^ 0x30);
  uRam00000001830b9a78 = uRam00000001830b9b78 ^ 0x435a18fe;
  uVar7 = uRam00000001830b9a78 >> 1 | uRam00000001830b9a78;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uRam00000001830b9a78 =
       0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
       uRam00000001830b9a78;
  uRam00000001830b9a58 = uRam00000001830b9a58 ^ uRam00000001830b9a78 ^ 0xc67e290bd1e1722a;
  uRam00000001830b99d0 =
       (uRam00000001830b99d0 * -0x2f8855714f50714b ^ uRam00000001830b9a58) + uRam00000001830b9a78;
  uRam00000001830b99b8 = uRam00000001830b99d0 ^ uRam00000001830b9a58;
  uRam00000001830b9990 = 0;
  uVar7 = ((uRam00000001830b9b88 ^ 0x84225f4a) +
          (ulonglong)((uint)uRam00000001830b9b88 & 0x84225f4a) * 2) * -uRam00000001830b9bc8;
  uVar7 = (uVar7 | uRam00000001830b9a08) + (uVar7 & uRam00000001830b9a08);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830b9af0 =
       func_0x000185044100((uVar7 | 0x84225f4a) + (ulonglong)((uint)uVar7 & 0x84225f4a));
  uRam00000001830b9968 = uRam00000001830b9cd8 ^ uRam00000001830b9af0 ^ 0x7c6f;
  uRam00000001830b9ac8 = (uRam00000001830b9ac8 ^ uRam00000001830b9af0) + 0x7c6f ^ 0xe72351d8fd76c89;
  uRam00000001830b9bb8 =
       (uRam00000001830b9bb8 * -0x2dc8d0cc2d4d363d ^ uRam00000001830b9ac8) + uRam00000001830b9af0 ^
       uRam00000001830b9ac8;
  uRam00000001830b9a90 = 0x7c6f;
  uVar7 = (uRam00000001830b9c18 ^ _UNK_18040ebb0) + uRam00000001830b9970 + 0x6fcc5eda;
  uVar9 = (uRam00000001830b9970 ^ _UNK_18040ebb8) + uRam00000001830b9c18 + 0xffffffff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9c18 ^ _UNK_18040ebb0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9970 ^ _UNK_18040ebb8;
  uRam00000001830b9c28 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830b9c18 + 0xffffffff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9970 + 0x6fcc5eda));
  uVar9 = uRam00000001830b9c28 ^ 0xebee7dfe14118201;
  uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar9) &
          0x1ffffffff;
  uRam00000001830b9c88 = (uRam00000001830b9c88 ^ uVar7) + 0x14118200 ^ 0xad5bd90c4d9ea64e;
  uRam00000001830b9a10 = (uRam00000001830b9a10 * -0x259d6e26b79793d ^ uRam00000001830b9c88) + uVar7;
  uRam00000001830b9998 = uRam00000001830b9a10 ^ uRam00000001830b9c88;
  uRam00000001830b9ca8 = 0x14118200;
  uVar7 = (uRam00000001830b9af8 ^ _UNK_18040ebc0) + uRam00000001830b9b40 + 0x6fcc5eda;
  uVar9 = (uRam00000001830b9b40 ^ _UNK_18040ebc8) + uRam00000001830b9af8 + 0x14118200;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9af8 ^ _UNK_18040ebc0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9b40 ^ _UNK_18040ebc8;
  uRam00000001830b9c38 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830b9af8 + 0x14118200) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9b40 + 0x6fcc5eda));
  uRam00000001830b9c40 =
       uRam00000001830b9c40 ^ uRam00000001830b9c38 ^ 0xebee7dff ^ 0xe94cf4a405da276b;
  uRam00000001830b9bc0 =
       (uRam00000001830b9bc0 * 0x7161a76c82db4071 ^ uRam00000001830b9c40) +
       (uRam00000001830b9c38 ^ 0xebee7dff);
  uRam00000001830b9b98 = uRam00000001830b9bc0 ^ uRam00000001830b9c40;
  uRam00000001830b9ad0 = 0;
  uVar7 = (uRam00000001830b9c00 ^ 0x84225f4a) + uRam00000001830b9b60 + 0x84225f4a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9c00 ^ 0x84225f4a;
  uVar9 = ((uRam00000001830b9b60 + uRam00000001830b9c00) * 0x2000 |
          uRam00000001830b9b60 + uRam00000001830b9c00 >> 0x33) ^ uRam00000001830b9b60;
  uRam00000001830b9c10 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - uRam00000001830b9c00 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9b60 + 0x84225f4a));
  uVar7 = uRam00000001830b9c10 - (uRam00000001830b9c10 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001830b9c10;
  uRam00000001830b9bd8 = uRam00000001830b9978 ^ uVar7 ^ 0x7c6f;
  uRam00000001830b9cb0 = (uRam00000001830b9cb0 ^ uVar7) + 0x7c6f ^ 0xa7a2c595b99df158;
  uRam00000001830b9b98 = (uRam00000001830b9b98 * -0x6d5f9f73455005b ^ uRam00000001830b9cb0) + uVar7;
  uRam00000001830b9b78 = uRam00000001830b9b98 ^ uRam00000001830b9cb0;
  uRam00000001830b9a28 = 0x7c6f;
  uVar7 = (uRam00000001830b9b98 ^ _UNK_18040ebd0) + uRam00000001830b9908 + 0x7441e74;
  uVar9 = (uRam00000001830b9908 ^ _UNK_18040ebd8) + uRam00000001830b9b98 + 0x83663d51;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830b9b98 ^ _UNK_18040ebd0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9908 ^ _UNK_18040ebd8;
  uRam00000001830b9b00 =
       func_0x000185044100((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830b9b98 + 0x83663d51) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830b9908 + 0x7441e74));
  uVar7 = (uRam00000001830b9b00 ^ 0x83663d51) & 0x1fffffffffffff;
  uRam00000001830b9be8 = uRam00000001830b9be8 ^ uVar7 ^ 0x7db4e400372aa0e0;
  uRam00000001830b99d0 = (uRam00000001830b99d0 * 0x1d54c71dca2de5e9 ^ uRam00000001830b9be8) + uVar7;
  uRam00000001830b99b8 = uRam00000001830b99d0 ^ uRam00000001830b9be8;
  auVar5._8_8_ = _UNK_18040ebe8;
  auVar5._0_8_ = uVar3 ^ 0x84222325;
  uRam00000001830b9b38 = 0;
  auVar6 = pshufb(auVar5 ^ _UNK_18040ebf0,auVar6);
  uVar9 = auVar6._8_8_ + auVar6._0_8_;
  uVar7 = uVar9 + uRam00000001830b9c10;
  if (auVar6._4_4_ < 0) {
    uVar7 = uRam00000001830b99a8 ^ uVar9;
  }
  uRam00000001830b9a00 = func_0x000185044100(SUB161(auVar5 ^ _UNK_18040ebf0,5) ^ uVar7);
  uVar7 = (uRam00000001830b9a00 ^ uVar3) >> 0xb & 0xfffffffffffc0000;
  uRam00000001830b9bb0 = uVar3 ^ 0x7c6f;
  uRam00000001830b9ce0 = (uRam00000001830b9ce0 ^ uVar7) + uRam00000001830b9bb0 ^ 0xb097580afb26bed;
  uRam00000001830b9a18 = (uRam00000001830b9a18 * 0x70567bcc1244611d ^ uRam00000001830b9ce0) + uVar7;
  uRam00000001830b9b68 = uRam00000001830b9a18 ^ uRam00000001830b9ce0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018503fc18 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18040d198 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 185044190, runtime 6fffecc54190) =====

void FUN_185044190(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001850441cc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18040ec40 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qG; daH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 185045080, runtime 6fffecc55080) =====

void FUN_185045080(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001850450fd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18040f180 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daI (IJ)I (handler @ image 185047b40, runtime 6fffecc57b40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185047b40(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar5 = (~uRam00000001830ba018 + 0xaa0e723b137ea8bd) *
          ((uRam00000001830b9f48 ^ 0x505c14007238d79) +
          (uRam00000001830b9f48 & 0x505c14007238d79) * 2);
  uVar5 = (uVar5 | uRam00000001830b9f00) + (uVar5 & uRam00000001830b9f00);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830b9f48 =
       func_0x000185053130((uVar5 | 0xaf0bb37b145d25c5) + (uVar5 & 0xaf0bb37b145d25c5));
  uRam00000001830ba058 =
       (uRam00000001830ba058 ^ uRam00000001830b9f48) + 0xaf0ff37b937faefc ^ 0x78e63f82758cd6b9;
  uRam00000001830ba170 =
       (uRam00000001830ba170 * 0x32dfa7dd06195f41 ^ uRam00000001830ba058) + uRam00000001830b9f48;
  uRam00000001830ba060 = uRam00000001830ba170 ^ uRam00000001830ba058;
  uRam00000001830b9fe8 = -0x50f00c846c805104;
  uRam00000001830ba048 = func_0x000185053130(uRam00000001830ba290 + 0x24ba1a977f2996ba ^ 0xbb);
  uVar3 = uRam00000001830ba048 ^ 0xab1f7addbe11a288;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  uRam00000001830b9d70 = (uRam00000001830b9d70 ^ uVar3) + 0x5fe72a3bed9564a4 ^ 0xb67c3633aa7ec1d2;
  uRam00000001830ba020 = (uRam00000001830ba020 * 0x289a2a35ce557f97 ^ uRam00000001830b9d70) + uVar3;
  uRam00000001830b9d88 = uRam00000001830ba020 ^ uRam00000001830b9d70;
  uRam00000001830ba170 = 0x5fe72a3bed9564a4;
  uVar5 = (uRam00000001830ba060 ^ _UNK_180411ee0) + uRam00000001830ba2f0 + 0x84222325;
  uVar3 = (uRam00000001830ba2f0 ^ _UNK_180411ee8) + uRam00000001830ba060 + 0x18735f83dc560370;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830ba060 ^ _UNK_180411ee0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830ba2f0 ^ _UNK_180411ee8;
  uRam00000001830b9e50 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001830ba060 + 0x18735f83dc560370) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830ba2f0 + 0x84222325));
  uRam00000001830ba0f0 =
       (uRam00000001830ba0f0 ^ uRam00000001830b9e50 ^ 0x18735f83dc560370) + 0xe78ca07c23a9fc90 ^
       0x3d568e622696560a;
  uRam00000001830b9f10 =
       (uRam00000001830b9f10 * 0x323556c7c67b681f ^ uRam00000001830ba0f0) +
       (uRam00000001830b9e50 ^ 0x18735f83dc560370);
  uRam00000001830ba108 = uRam00000001830b9f10 ^ uRam00000001830ba0f0;
  uRam00000001830b9d78 = 0xe78ca07c23a9fc90;
  uRam00000001830ba198 = func_0x000185053130(uRam00000001830ba058 + 0x7d4d334899a2cc17 ^ 0xa1);
  uVar5 = uRam00000001830ba198 & 0xfffffffffff80000 ^ 0x18735f83dc560370;
  uRam00000001830b9e08 = uRam00000001830ba228 ^ uVar5 ^ 0x18735f83dc56836f;
  uRam00000001830ba020 = (uRam00000001830ba020 ^ uVar5) + 0x18735f83dc56836f ^ 0x1d33f4af914787f;
  uRam00000001830ba1a0 = (uRam00000001830ba1a0 * -0x5d2a1558a0c11fc5 ^ uRam00000001830ba020) + uVar5
  ;
  uRam00000001830ba0d8 = uRam00000001830ba1a0 ^ uRam00000001830ba020;
  uRam00000001830b9e50 = 0x18735f83dc56836f;
  uVar5 = (~uRam00000001830ba2c0 + 0xe78ca07c23a9fc91) *
          ((uRam00000001830ba210 ^ 0x18735f835874a04a) +
          (uRam00000001830ba210 & 0x18735f835874a04a) * 2);
  uVar5 = (uVar5 | uRam00000001830ba2c0) + (uVar5 & uRam00000001830ba2c0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830ba060 =
       func_0x000185053130((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = uRam00000001830ba060 & 0x18735f83dc56836f;
  uRam00000001830b9fc0 = uRam00000001830ba240 ^ uVar5 ^ 0x7fff;
  uRam00000001830ba0d8 = (uRam00000001830ba0d8 ^ uVar5) + 0x7fff ^ 0xfc06cc7eccba6a79;
  uRam00000001830ba068 = (uRam00000001830ba068 * 0x2f3ba79e78df6463 ^ uRam00000001830ba0d8) + uVar5;
  uRam00000001830b9e68 = uRam00000001830ba068 ^ uRam00000001830ba0d8;
  uRam00000001830ba080 = 0x7fff;
  uRam00000001830ba1c0 = func_0x000185053130(lRam00000001830b9fb8 + 0x1938460cb5b93a5aU ^ 0xb8);
  uVar5 = uRam00000001830ba1c0 & 0xfffffffffff;
  uRam00000001830ba250 = uRam00000001830ba228 ^ uVar5 ^ 0xa7da47298b1914ff;
  uRam00000001830ba018 = (uRam00000001830ba018 ^ uVar5) + 0xa7da47298b1914ff ^ 0xad972c83cb54964b;
  uRam00000001830b9fa8 = (uRam00000001830b9fa8 * 0x7bf45bc340bc546f ^ uRam00000001830ba018) + uVar5;
  uRam00000001830b9da0 = uRam00000001830b9fa8 ^ uRam00000001830ba018;
  lRam00000001830b9f60 = -0x5825b8d674e6eb01;
  uVar5 = (uRam00000001830b9fa0 ^ _UNK_180411ef0) + uRam00000001830b9ed0 + 0xa7da47290f3b37da;
  uVar3 = (uRam00000001830b9ed0 ^ _UNK_180411ef8) + uRam00000001830b9fa0 + 0x5825b8d674e76b00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830b9fa0 ^ _UNK_180411ef0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830b9ed0 ^ _UNK_180411ef8;
  uRam00000001830ba168 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001830b9fa0 + 0x5825b8d674e76b00) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001830b9ed0 + 0xa7da47290f3b37da));
  uRam00000001830b9f08 = uRam00000001830ba190 ^ uRam00000001830ba168 ^ 0x7fff;
  uRam00000001830b9d48 = (uRam00000001830b9d48 ^ uRam00000001830ba168) + 0x7fff ^ 0xab0fadaac6d121fe
  ;
  uRam00000001830b9dd8 =
       (uRam00000001830b9dd8 * 0x6410a7bb6868815 ^ uRam00000001830b9d48) + uRam00000001830ba168;
  uRam00000001830ba080 = uRam00000001830b9dd8 ^ uRam00000001830b9d48;
  uRam00000001830b9d40 = 0x7fff;
  uRam00000001830ba190 = func_0x000185053130(uRam00000001830ba278 + 0x54b09077c2cf1a09 ^ 0x9c);
  uRam00000001830b9ef8 =
       (uRam00000001830b9ef8 ^ uRam00000001830ba190 & 0xfffffffffffffe00) + 0xc50faea403f3aca0 ^
       0xdf4b9bc8d77b47eb;
  uRam00000001830b9f40 =
       (uRam00000001830b9f40 * 0x639b4fda8b6cda0b ^ uRam00000001830b9ef8) +
       (uRam00000001830ba190 & 0xfffffffffffffe00);
  uRam00000001830ba038 = uRam00000001830b9f40 ^ uRam00000001830b9ef8;
  uRam00000001830b9e90 = uRam00000001830ba158 ^ 0xc50faea403f3aca0;
  uRam00000001830b9f38 = 0xc50faea403f3aca0;
  uVar5 = (uRam00000001830b9ef8 ^ _UNK_180411f00) + uRam00000001830b9d88 + 0x84225cda;
  uVar3 = (uRam00000001830b9d88 ^ _UNK_180411f08) + uRam00000001830b9ef8 + 0x3af0515bfc0c5360;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830b9ef8 ^ _UNK_180411f00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830b9d88 ^ _UNK_180411f08;
  uRam00000001830b9d90 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001830b9ef8 + 0x3af0515bfc0c5360) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830b9d88 + 0x84225cda));
  uVar5 = ((uRam00000001830b9d90 & 0xfffffffffffffff) << 3 | uRam00000001830b9d90 >> 0x3d) ^
          0x3af0515bfc0c5360;
  uRam00000001830b9fc0 = uRam00000001830b9e88 ^ uVar5 ^ 0x3af0515bfc0cd35f;
  uRam00000001830b9f58 = (uRam00000001830b9f58 ^ uVar5) + 0x3af0515bfc0cd35f ^ 0x2a9f1a065301897e;
  uRam00000001830ba248 = (uRam00000001830ba248 * 0x65fdea48f2d35fe5 ^ uRam00000001830b9f58) + uVar5;
  uRam00000001830ba0e8 = uRam00000001830ba248 ^ uRam00000001830b9f58;
  uRam00000001830ba0b0 = 0x3af0515bfc0cd35f;
  uVar5 = (uRam00000001830ba288 ^ _UNK_180411f10) + uRam00000001830ba2f0 + 0xaf0ff37b175d8dd9;
  uVar3 = (uRam00000001830ba2f0 ^ _UNK_180411f18) + uRam00000001830ba288 + 0x5fe72a3bed9564a4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830ba288 ^ _UNK_180411f10;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830ba2f0 ^ _UNK_180411f18;
  uRam00000001830b9f30 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001830ba288 + 0x5fe72a3bed9564a4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001830ba2f0 + 0xaf0ff37b175d8dd9));
  uVar5 = uRam00000001830b9f30 & 0xfffffffffffffff;
  uRam00000001830b9f78 = uRam00000001830b9d90 ^ uVar5 ^ 0xef71db7811513a0;
  uRam00000001830ba038 = (uRam00000001830ba038 ^ uVar5) + 0xef71db7811513a0 ^ 0x1f0e6489ac22e64a;
  uRam00000001830ba298 = (uRam00000001830ba298 * -0x18f8125096a4a8f1 ^ uRam00000001830ba038) + uVar5
  ;
  uRam00000001830b9e78 = uRam00000001830ba298 ^ uRam00000001830ba038;
  uRam00000001830ba1d8 = 0xef71db7811513a0;
  uVar5 = (~uRam00000001830b9d20 + 0x5fe72a3bed9564a5) *
          ((uRam00000001830b9df8 ^ 0xaf0ff37b175d8dd9) +
          (uRam00000001830b9df8 & 0x2f0ff37b175d8dd9) * 2);
  uVar5 = (uVar5 | uRam00000001830ba160) + (uVar5 & uRam00000001830ba160);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830b9db8 =
       func_0x000185053130((uVar5 | 0xf0e8d940fac8e97d) + (uVar5 & 0xf0e8d940fac8e97d));
  uVar3 = uRam00000001830b9db8 ^ 0x50e008006c804000;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3;
  uRam00000001830ba040 = (uRam00000001830ba040 ^ uVar3) + 0xf0e8d9407eeaca58 ^ 0xba1fa249d00ced0e;
  uRam00000001830b9f20 = (uRam00000001830b9f20 * -0x2cc1daee36f3e5fd ^ uRam00000001830ba040) + uVar3
  ;
  uRam00000001830ba158 = uRam00000001830b9f20 ^ uRam00000001830ba040;
  uRam00000001830b9e38 = -0xf1726bf811535a8;
  uRam00000001830ba158 = func_0x000185053130(uRam00000001830ba1b0 ^ 0xbf17973a0b26b76f);
  uVar3 = uRam00000001830ba158 ^ 0xffeffb7bffffeefc;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  uRam00000001830ba038 = (uRam00000001830ba038 ^ uVar3) + 0xf07223b811524a4 ^ 0xe881e0832778285b;
  uRam00000001830ba140 = (uRam00000001830ba140 * -0x6f8437fe584cbe15 ^ uRam00000001830ba038) + uVar3
  ;
  uRam00000001830b9f00 = uRam00000001830ba140 ^ uRam00000001830ba038;
  uRam00000001830b9e88 = 0xf07223b811524a4;
  uVar5 = (uRam00000001830b9fe0 ^ _UNK_180411f20) + uRam00000001830b9f40 + 0xf0e8d940fac8e97d;
  uVar3 = (uRam00000001830b9f40 ^ _UNK_180411f28) + uRam00000001830b9fe0 + 0x1e0e4477022a4948;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830b9fe0 ^ _UNK_180411f20;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830b9f40 ^ _UNK_180411f28;
  uRam00000001830b9d80 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001830b9fe0 + 0x1e0e4477022a4948) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001830b9f40 + 0xf0e8d940fac8e97d));
  uRam00000001830ba010 = uRam00000001830b9d80 << 0x1d | uRam00000001830b9d80 >> 0x23;
  uRam00000001830b9ef0 =
       (uRam00000001830b9ef0 ^ uRam00000001830ba010) + 0xef71db7811513a0 ^ 0x6a32e5b1f059e360;
  uRam00000001830ba010 =
       ((uRam00000001830ba028 ^ uRam00000001830ba010 ^ 0xef71db7811513a0) * 0x6e0089b0f7fd519b ^
       uRam00000001830b9ef0) + uRam00000001830ba010;
  uRam00000001830b9f80 = uRam00000001830ba010 ^ uRam00000001830b9ef0;
  lRam00000001830ba1a8 = 0xef71db7811513a0;
  uVar5 = (~uRam00000001830b9e28 + 0xef71db7811513a1) *
          ((uRam00000001830ba018 ^ 0xef71db705373085) +
          (uRam00000001830ba018 & 0xef71db705373085) * 2);
  uVar5 = (uVar5 | uRam00000001830ba0e8) + (uVar5 & uRam00000001830ba0e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  lRam00000001830b9eb8 =
       func_0x000185053130((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam00000001830b9e00 = ~(lRam00000001830b9eb8 * 0x15331973c41465d3) & 0xef71db7811513a0;
  uRam00000001830ba060 = uRam00000001830ba060 ^ uRam00000001830b9e00 ^ 0x65ebf8567f7ab6fb;
  uRam00000001830ba200 =
       (uRam00000001830ba200 * 0x5fe13dc38d4e9013 ^ uRam00000001830ba060) + uRam00000001830b9e00;
  uRam00000001830b9e88 = uRam00000001830ba200 ^ uRam00000001830ba060;
  uRam00000001830b9d78 = 0;
  uRam00000001830b9f28 = func_0x000185053130(lRam00000001830b9f60 + 0x842e0fe7ddfc5dafU ^ 0xf6);
  uRam00000001830b9dc8 =
       (uRam00000001830b9dc8 ^ ~uRam00000001830b9f28 & 0x7fffffffffffffff) + 0x50f00c846c805103 ^
       0x1b6b2b8955dac5f6;
  uRam00000001830b9d08 =
       (uRam00000001830b9d08 * 0x6787a2720ca64849 ^ uRam00000001830b9dc8) +
       (~uRam00000001830b9f28 & 0x7fffffffffffffff);
  uRam00000001830b9ec8 = uRam00000001830b9d08 ^ uRam00000001830b9dc8;
  uRam00000001830b9d38 = 0x50f00c846c805103;
  uVar5 = (~uRam00000001830b9f00 + 0x50f00c846c805104) *
          ((uRam00000001830ba238 ^ 0xaf0ff37b175d8dd9) +
          (uRam00000001830ba238 & 0x2f0ff37b175d8dd9) * 2);
  uVar5 = (uVar5 | uRam00000001830ba118) + (uVar5 & uRam00000001830ba118);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830b9ed8 =
       func_0x000185053130((uVar5 | 0xffffffff7bdddcda) + (uVar5 & 0xffffffff7bdddcda));
  uVar5 = (uRam00000001830b9ed8 ^ 0x3eedcc8f4) << 0x3b |
          ((uRam00000001830b9ed8 ^ 0x3eedcc8f4) & 0x3ffffffff) >> 5;
  uRam00000001830ba278 = uRam00000001830ba278 ^ uVar5 ^ 0xc8dce8e960e7fb12;
  uRam00000001830ba2d0 = (uRam00000001830ba2d0 * 0x2350c96ffcd0450b ^ uRam00000001830ba278) + uVar5;
  uRam00000001830b9d00 = uRam00000001830ba2d0 ^ uRam00000001830ba278;
  uRam00000001830b9e68 = 0;
  uVar5 = ((uRam00000001830ba2e0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001830ba2e0 & 0x84225cda) * 2) * -uRam00000001830ba170;
  uVar5 = (uVar5 | uRam00000001830ba020) + (uVar5 & uRam00000001830ba020);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830ba140 =
       func_0x000185053130((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uRam00000001830b9ef8 = uRam00000001830ba190 ^ uRam00000001830ba140 ^ 0x7fff;
  uRam00000001830b9e00 = (uRam00000001830b9e00 ^ uRam00000001830ba140) + 0x7fff ^ 0xb2e3daaa40c8c4b3
  ;
  uRam00000001830b9e58 =
       (uRam00000001830b9e58 * 0x34f63c451b13ecdb ^ uRam00000001830b9e00) + uRam00000001830ba140;
  uRam00000001830ba1b0 = uRam00000001830b9e58 ^ uRam00000001830b9e00;
  uRam00000001830ba240 = 0x7fff;
  uVar5 = (~uRam00000001830b9d20 + 0x505c1408301ae5d) *
          ((uRam00000001830b9d90 ^ 0x505c14007238d79) +
          (uRam00000001830b9d90 & 0x505c14007238d79) * 2);
  uVar5 = (uVar5 | uRam00000001830ba158) + (uVar5 & uRam00000001830ba158);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830ba290 =
       func_0x000185053130((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar3 = uRam00000001830ba290 ^ 0x505c1408301ae5c;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar3;
  uRam00000001830b9e98 = uRam00000001830b9e98 ^ uVar3 ^ 0x56ac9de3f6f12ca1;
  uRam00000001830b9fe0 = (uRam00000001830b9fe0 * -0x3b1a1a8b00a77355 ^ uRam00000001830b9e98) + uVar3
  ;
  uRam00000001830ba108 = uRam00000001830b9fe0 ^ uRam00000001830b9e98;
  uRam00000001830ba298 = 0;
  uRam00000001830b9fc0 = func_0x000185053130(uRam00000001830b9e00 ^ 0x3bff7c3a002188);
  uVar5 = uRam00000001830b9fc0 << 10 | uRam00000001830b9fc0 >> 0x36;
  uRam00000001830ba100 = uRam00000001830ba0a8 ^ uVar5 ^ 0x7fff;
  uRam00000001830ba0c8 = (uRam00000001830ba0c8 ^ uVar5) + 0x7fff ^ 0xe17f2aba0076ceba;
  uRam00000001830ba1f8 = (uRam00000001830ba1f8 * -0x18dba421d85c17c1 ^ uRam00000001830ba0c8) + uVar5
  ;
  uRam00000001830b9ee8 = uRam00000001830ba1f8 ^ uRam00000001830ba0c8;
  uRam00000001830b9d08 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam00000001830ba1b8;
  lVar6 = (param_4 ^ 0x84222325) + uRam00000001830b9de0;
  uVar3 = uVar5 + lVar6;
  uVar10 = (uRam00000001830b9de0 ^ 0x7fff) + uRam00000001830ba1b8 + 0x7fff;
  uVar5 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar5;
  uVar3 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001830b9de0 ^ 0x7fff;
  uRam00000001830b9d70 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001830ba1b8 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar5 = ((uRam00000001830b9d70 ^ 0x7fff) << 0x35 | (uRam00000001830b9d70 ^ 0x7fff) >> 0xb) *
          0x1dd2c1f0397bdffd;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar2;
  uRam00000001830ba128 = (uRam00000001830ba128 ^ uVar5) + uVar10 ^ 0x31416c25a4bd2067;
  uRam00000001830ba120 = (uRam00000001830ba120 * -0xa10bd72a7cc5b9 ^ uRam00000001830ba128) + uVar5;
  uRam00000001830ba148 = uRam00000001830ba120 ^ uRam00000001830ba128;
  uVar3 = uVar10 ^ 0x84222325;
  uVar5 = ((uRam00000001830ba0b8 ^ uVar3) +
          (ulonglong)((uint)uRam00000001830ba0b8 & (uint)uVar3) * 2) *
          ((ulonglong)param_3 - lRam00000001830ba2f8);
  uVar5 = (uVar5 | uRam00000001830ba1c8) + (uVar5 & uRam00000001830ba1c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar3 = uVar3 ^ param_3;
  uRam00000001830ba118 = uVar10;
  uRam00000001830b9d90 =
       func_0x000185053130((uVar3 | uVar5) + (ulonglong)((uint)uVar3 & (uint)uVar5));
  uVar5 = (~(ulonglong)((uint)uRam00000001830b9d90 ^ param_3 * uVar2) & uVar10) << 0x2f;
  uVar4 = (ulonglong)(uVar2 ^ param_3);
  uRam00000001830ba2f0 = (uRam00000001830ba2f0 ^ uVar5) + uVar4 ^ 0xc1054647148a5d15;
  uRam00000001830ba000 = (uRam00000001830ba000 * -0x2fb446097c9aecff ^ uRam00000001830ba2f0) + uVar5
  ;
  uRam00000001830b9ee8 = uRam00000001830ba000 ^ uRam00000001830ba2f0;
  uRam00000001830b9f90 = uVar4;
  uRam00000001830b9d68 = func_0x000185053130(uRam00000001830ba0a8 + 0xffad009908ff5eff ^ 0x5e);
  uVar5 = (ulonglong)(~(uint)uRam00000001830b9d68 & 0x165c8b5d);
  uRam00000001830b9fb0 = (uRam00000001830b9fb0 ^ uVar5) + 0x3fdddb7d ^ 0xed3a65742b2cfdbb;
  uRam00000001830b9fc0 = (uRam00000001830b9fc0 * -0x51663d95ba4f6f97 ^ uRam00000001830b9fb0) + uVar5
  ;
  uRam00000001830b9ec8 = uRam00000001830b9fc0 ^ uRam00000001830b9fb0;
  lRam00000001830ba1e8 = 0x3fdddb7d;
  uVar5 = (uRam00000001830b9d58 ^ _UNK_180411f30) + uRam00000001830ba238 + 0x8422289f;
  uVar3 = (uRam00000001830ba238 ^ _UNK_180411f38) + uRam00000001830b9d58 + 0x7cf24e26;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830b9d58 ^ _UNK_180411f30;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830ba238 ^ _UNK_180411f38;
  uRam00000001830ba020 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001830b9d58 + 0x7cf24e26) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830ba238 + 0x8422289f));
  uVar5 = uRam00000001830ba020 << 0x10 | uRam00000001830ba020 >> 0x30;
  uRam00000001830b9de8 = uRam00000001830b9f28 ^ uVar5 ^ 0x7cf259e0;
  uRam00000001830b9ec8 = (uRam00000001830b9ec8 ^ uVar5) + 0x7cf259e0 ^ 0x496d158f9fccc73;
  uRam00000001830b9fe8 = (uRam00000001830b9fe8 * 0x594571b9890cfb87 ^ uRam00000001830b9ec8) + uVar5;
  uRam00000001830b9e30 = uRam00000001830b9fe8 ^ uRam00000001830b9ec8;
  uRam00000001830ba278 = 0x7cf259e0;
  uVar5 = (uRam00000001830ba260 ^ _UNK_180411f40) + uRam00000001830b9e68 + 0xf8d07ac5;
  uVar3 = (uRam00000001830b9e68 ^ _UNK_180411f48) + uRam00000001830ba260 + 0x830db1da;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830ba260 ^ _UNK_180411f40;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830b9e68 ^ _UNK_180411f48;
  uRam00000001830ba050 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001830ba260 + 0x830db1da) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830b9e68 + 0xf8d07ac5));
  uVar5 = uRam00000001830ba050 & 0x7fffffffff;
  uRam00000001830ba0b8 = uRam00000001830ba1d8 ^ uVar5 ^ 0x100000bba;
  uRam00000001830b9da0 = (uRam00000001830b9da0 ^ uVar5) + 0x100000bba ^ 0xa09cd6e0b43a813f;
  uRam00000001830ba068 = (uRam00000001830ba068 * -0x1442e52220165fc9 ^ uRam00000001830b9da0) + uVar5
  ;
  uRam00000001830b9d98 = uRam00000001830ba068 ^ uRam00000001830b9da0;
  uRam00000001830ba150 = 0xbba;
  uRam00000001830b9e98 = func_0x000185053130(uRam00000001830ba158 ^ 0xff7c0024b30054d5);
  uVar5 = uRam00000001830b9e98 >> 1 | uRam00000001830b9e98;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001830b9e98;
  uRam00000001830b9d88 = (uRam00000001830b9d88 ^ uVar5) - 0xb84fdff0 ^ 0x5bceb4b334630e3a;
  uRam00000001830ba160 = (uRam00000001830ba160 * -0x3ff89c36c75202e7 ^ uRam00000001830b9d88) + uVar5
  ;
  uRam00000001830ba280 = uRam00000001830ba160 ^ uRam00000001830b9d88;
  uRam00000001830ba008 = 0x47b02010;
  uVar5 = (~uRam00000001830ba2c0 + 0xb84fdff1) *
          ((uRam00000001830b9e98 ^ 0x8422289f) +
          (ulonglong)((uint)uRam00000001830b9e98 & 0x8422289f) * 2);
  uVar5 = (uVar5 | uRam00000001830b9f58) + (uVar5 & uRam00000001830b9f58);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830ba0a0 =
       func_0x000185053130((uVar5 | 0x3c6df76f) + (ulonglong)((uint)uVar5 & 0x3c6df76f));
  uVar5 = uRam00000001830ba0a0 << 0x17 | (uRam00000001830ba0a0 & 0x7ffffffffffff) >> 0x29;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555400155);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5;
  uRam00000001830ba2c8 = uRam00000001830ba080 ^ uVar5 ^ 0xb84febaa;
  uRam00000001830b9e50 = (uRam00000001830b9e50 ^ uVar5) + 0xb84febaa ^ 0x11c2f49120d276d;
  uRam00000001830ba220 = (uRam00000001830ba220 * 0x5caed89da2e783c1 ^ uRam00000001830b9e50) + uVar5;
  uRam00000001830ba000 = uRam00000001830ba220 ^ uRam00000001830b9e50;
  uRam00000001830ba080 = uRam00000001830b9ec0 ^ 0xb84febaa;
  uRam00000001830ba2b0 = 0xb84febaa;
  uVar5 = (~uRam00000001830ba180 + 0x46252c65) *
          ((uRam00000001830ba168 ^ 0x8422289f) +
          (ulonglong)((uint)uRam00000001830ba168 & 0x8422289f) * 2);
  uVar5 = (uVar5 | uRam00000001830ba2e8) + (uVar5 & uRam00000001830ba2e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830ba2d0 =
       func_0x000185053130((uVar5 | 0xc20704fb) + (ulonglong)((uint)uVar5 & 0xc20704fb));
  uVar5 = uRam00000001830ba2d0 & 0xffffffffffffffe0;
  uRam00000001830b9d68 = uRam00000001830b9e20 ^ uVar5 ^ 0x4625381e;
  uRam00000001830ba2b0 = (uRam00000001830ba2b0 ^ uVar5) + 0x4625381e ^ 0xbc2e39f81afcd2b7;
  uRam00000001830b9e38 = (uRam00000001830b9e38 * -0x6d4c2ef27d43d1eb ^ uRam00000001830ba2b0) + uVar5
  ;
  uRam00000001830ba258 = uRam00000001830b9e38 ^ uRam00000001830ba2b0;
  uRam00000001830b9d40 = 0x4625381e;
  uRam00000001830b9f08 = func_0x000185053130(lRam00000001830ba1a8 + 0xffc7ff849d00b4ffU ^ 0x44);
  uVar3 = _UNK_180411f58;
  uVar5 = _UNK_180411f50;
  uVar10 = uRam00000001830b9f08 << 0x3a | uRam00000001830b9f08 >> 6;
  uRam00000001830b9d30 = uRam00000001830ba148 ^ uVar10 ^ 0x100000bba;
  uRam00000001830b9ff8 = (uRam00000001830b9ff8 ^ uVar10) + 0x100000bba ^ 0x7a6499073f6aee92;
  uRam00000001830b9f58 = (uRam00000001830b9f58 * 0x2f191308aa35d59f ^ uRam00000001830b9ff8) + uVar10
  ;
  uRam00000001830b9fe8 = uRam00000001830b9f58 ^ uRam00000001830b9ff8;
  uRam00000001830ba1d8 = 0xbba;
  uVar10 = (uRam00000001830ba030 ^ _UNK_180411f50) + uRam00000001830b9d70 + 0xbbfff858;
  uVar9 = (uRam00000001830b9d70 ^ _UNK_180411f58) + uRam00000001830ba030 + 0x960ae862;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001830ba030 ^ _UNK_180411f50;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830b9d70 ^ _UNK_180411f58;
  uRam00000001830ba128 =
       func_0x000185053130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001830ba030 + 0x960ae862) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001830b9d70 + 0xbbfff858));
  uRam00000001830ba098 = uRam00000001830b9d20 ^ uRam00000001830ba128 ^ 0xd5e8c3df;
  uRam00000001830ba270 =
       (uRam00000001830ba270 ^ uRam00000001830ba128) + 0xd5e8c3df ^ 0x47223d3804bfbc29;
  uRam00000001830ba1b0 =
       (uRam00000001830ba1b0 * -0x1d47cb87344e7e55 ^ uRam00000001830ba270) + uRam00000001830ba128;
  uRam00000001830ba240 = uRam00000001830ba1b0 ^ uRam00000001830ba270;
  uRam00000001830b9dd0 = 0xd5e8c3df;
  uVar10 = (~uRam00000001830b9f80 + 0x960ae863) *
           ((uRam00000001830b9ee0 ^ 0xbbfff858) +
           (ulonglong)((uint)uRam00000001830b9ee0 & 0xbbfff858) * 2);
  uVar10 = (uVar10 | uRam00000001830ba290) + (uVar10 & uRam00000001830ba290);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uRam00000001830b9f68 =
       func_0x000185053130((uVar10 | 0x2df5103a) + (ulonglong)((uint)uVar10 & 0x2df5103a));
  uVar10 = uRam00000001830b9f68 ^ 0x3fdddb7d;
  uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar10 = ((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar10)
           & 0xffffffffffff;
  uRam00000001830ba148 = (uRam00000001830ba148 ^ uVar10) + 0xa9d7331f ^ 0x2edb5a26bd2fd34e;
  uRam00000001830b9d30 =
       (uRam00000001830b9d30 * -0x2e705b2e629c0541 ^ uRam00000001830ba148) + uVar10;
  uRam00000001830ba238 = uRam00000001830b9d30 ^ uRam00000001830ba148;
  uRam00000001830ba230 = 0xa9d7331f;
  uVar10 = (uRam00000001830b9df0 ^ uVar5) + uRam00000001830ba1c0 + 0xbbfff858;
  uVar9 = (uRam00000001830ba1c0 ^ uVar3) + uRam00000001830b9df0 + 0x960ae862;
  uVar5 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001830b9df0 ^ uVar5;
  uVar3 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830ba1c0 ^ uVar3;
  uRam00000001830ba180 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001830b9df0 + 0x960ae862) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830ba1c0 + 0xbbfff858));
  uRam00000001830ba0b0 =
       (uRam00000001830ba0b0 ^ uRam00000001830ba180 ^ 0x3fdddb7d) + 0x1608c860 ^ 0x36b791e5f2c41caa;
  uRam00000001830ba098 =
       (uRam00000001830ba098 * 0x3332c3ebc1a3440d ^ uRam00000001830ba0b0) +
       (uRam00000001830ba180 ^ 0x3fdddb7d);
  uRam00000001830b9e80 = uRam00000001830ba098 ^ uRam00000001830ba0b0;
  uRam00000001830ba258 = 0x1608c860;
  uRam00000001830b9f28 = func_0x000185053130(uRam00000001830b9d70 + 0x80000089ff23ff ^ 0x88);
  uVar5 = (uRam00000001830b9f28 ^ 0xadd7b3df) << 0x1f |
          ((uRam00000001830b9f28 ^ 0xadd7b3df) & 0x7fffffffffffffff) >> 0x21;
  uRam00000001830ba070 = uRam00000001830b9ea0 ^ uVar5 ^ 0xd5e8c3df;
  uRam00000001830ba178 = (uRam00000001830ba178 ^ uVar5) + 0xd5e8c3df ^ 0x38ae96caaf020326;
  uRam00000001830ba058 = (uRam00000001830ba058 * -0x26c2473cce18de03 ^ uRam00000001830ba178) + uVar5
  ;
  uRam00000001830ba2f0 = uRam00000001830ba058 ^ uRam00000001830ba178;
  uRam00000001830ba0b0 = uRam00000001830b9ee8 ^ 0xd5e8c3df;
  uRam00000001830ba140 = 0xd5e8c3df;
  uRam00000001830ba278 = func_0x000185053130(uRam00000001830ba178 + 0x20ff7c1cffe1ff ^ 0xcf);
  uRam00000001830b9f50 = uRam00000001830ba278 ^ 0xd5e8c3df;
  uRam00000001830b9d78 = uRam00000001830b9d78 ^ uRam00000001830b9f50 ^ 0xbcaed155e45cf10c;
  uRam00000001830b9e20 =
       (uRam00000001830b9e20 * -0x3b4a5067f476e015 ^ uRam00000001830b9d78) + uRam00000001830b9f50;
  uRam00000001830ba060 = uRam00000001830b9e20 ^ uRam00000001830b9d78;
  uRam00000001830ba158 = 0;
  uVar5 = (uRam00000001830ba1e0 ^ 0x8422289f) + uRam00000001830ba098 + 0x8422289f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830ba1e0 ^ 0x8422289f;
  uVar3 = ((uRam00000001830ba098 + uRam00000001830ba1e0) * 0x2000 |
          uRam00000001830ba098 + uRam00000001830ba1e0 >> 0x33) ^ uRam00000001830ba098;
  uRam00000001830ba070 =
       func_0x000185053130((uVar3 << 0x1d | uVar3 >> 0x23) - uRam00000001830ba1e0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830ba098 + 0x8422289f));
  uVar5 = uRam00000001830ba070 * 0x6696dbec14c309c3 << 0x3a |
          (uRam00000001830ba070 * 0x6696dbec14c309c3 & 0x1ffffffffffff) >> 6;
  uRam00000001830b9ed0 = uRam00000001830b9d40 ^ uVar5 ^ 0xbba;
  uRam00000001830b9ee0 = (uRam00000001830b9ee0 ^ uVar5) + 0xbba ^ 0xf43a24ee8cda8986;
  uRam00000001830b9d70 = (uRam00000001830b9d70 * -0x77f7c4dc3a81158d ^ uRam00000001830b9ee0) + uVar5
  ;
  uRam00000001830b9f78 = uRam00000001830b9d70 ^ uRam00000001830b9ee0;
  uRam00000001830b9f50 = 0xbba;
  uRam00000001830b9fd8 = func_0x000185053130(uRam00000001830ba020 ^ 0x17ff8462ffe174);
  uVar5 = uRam00000001830b9fd8 ^ 0xbba;
  uVar3 = uVar5 >> 1 | uVar5;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
           ^ uVar5) & 0x7fffffffffffffff) * -0x5c06c0060ef8adaf;
  uRam00000001830ba268 = uRam00000001830b9f30 ^ uVar5 ^ 0xbba;
  uRam00000001830b9ea0 = (uRam00000001830b9ea0 ^ uVar5) + 0xbba ^ 0x21a636348aff840c;
  uRam00000001830ba2d0 = (uRam00000001830ba2d0 * 0x400b6b56c582257f ^ uRam00000001830b9ea0) + uVar5;
  uRam00000001830b9e70 = uRam00000001830ba2d0 ^ uRam00000001830b9ea0;
  uRam00000001830b9e18 = 0xbba;
  uRam00000001830ba050 = func_0x000185053130(uRam00000001830ba128 ^ 0x1d0083dd001d17);
  uRam00000001830ba040 =
       uRam00000001830ba040 ^ uRam00000001830ba050 * 0x34349ca4c36fcdb3 ^ 0xe9af4f5bad66716d;
  uRam00000001830ba0a0 =
       (uRam00000001830ba0a0 * 0x6d52ea5b074079a9 ^ uRam00000001830ba040) +
       uRam00000001830ba050 * 0x34349ca4c36fcdb3;
  uRam00000001830ba248 = uRam00000001830ba0a0 ^ uRam00000001830ba040;
  uRam00000001830ba158 = 0;
  uVar5 = ((uRam00000001830b9fa0 ^ 0x8422289f) +
          (ulonglong)((uint)uRam00000001830b9fa0 & 0x8422289f) * 2) * -lRam00000001830ba1e8;
  uVar5 = (uVar5 | uRam00000001830b9eb0) + (uVar5 & uRam00000001830b9eb0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830b9ee8 =
       func_0x000185053130((uVar5 | 0x8422289f) + (ulonglong)((uint)uVar5 & 0x8422289f));
  uRam00000001830b9eb0 = uRam00000001830b9ee8 & 0x7fffffffff;
  uRam00000001830b9e48 = (uRam00000001830b9e48 ^ uRam00000001830b9eb0) + 0xbba ^ 0xcb24cf52ec388fe;
  uRam00000001830b9eb0 =
       ((uRam00000001830ba010 ^ uRam00000001830b9eb0 ^ 0xbba) * -0x46f5be79801b4c39 ^
       uRam00000001830b9e48) + uRam00000001830b9eb0;
  uRam00000001830ba060 = uRam00000001830b9eb0 ^ uRam00000001830b9e48;
  auVar7._8_8_ = _UNK_180411f68;
  auVar7._0_8_ = uVar4 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _UNK_180411f70,_UNK_1800170c0);
  uRam00000001830b9e30 = 0xbba;
  uVar3 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar3 + uRam00000001830ba2e8;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam00000001830ba2a8 ^ uVar3;
  }
  uRam00000001830ba100 = func_0x000185053130(SUB161(auVar7 ^ _UNK_180411f70,5) ^ uVar5);
  uVar5 = uVar4 ^ (uVar4 * 0xbba ^ uRam00000001830ba100) & 0x7fffffffff;
  lVar6 = uVar4 - ((uVar2 ^ param_3) & 0xbba) * 2;
  uRam00000001830b9f38 = (uRam00000001830b9f38 ^ uVar5) + lVar6 + 0xbba ^ 0x656d87a73fd55039;
  uRam00000001830ba130 = (uRam00000001830ba130 * 0x325a3524272890c3 ^ uRam00000001830b9f38) + uVar5;
  uRam00000001830ba280 = uRam00000001830ba130 ^ uRam00000001830b9f38;
  uRam00000001830b9ed8 = lVar6 + 0xbbaU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018504a2d2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180410080 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1850531c0, runtime 6fffecc631c0) =====

void FUN_1850531c0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018505320b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804120b0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qG; daK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1850541d0, runtime 6fffecc641d0) =====

void FUN_1850541d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185054259 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180412670 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; dah (Lnet/minecraft/class_1011;)Lnet/minecraft/class_1011; (handler @ image 184fcede0, runtime 6fffecbdede0) =====

void FUN_184fcede0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184fceec4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1803f3c50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; dai ()V (handler @ image 184fdc0a0, runtime 6fffecbec0a0) =====

void FUN_184fdc0a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184fdc16a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1803f7670 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; dam ()V (handler @ image 18502ec40, runtime 6fffecc3ec40) =====

void FUN_18502ec40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018502ed33 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180408cc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; dan ([I)[I (handler @ image 18507d300, runtime 6fffecc8d300) =====

void FUN_18507d300(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018507d3c1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180417240 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; dao (Ljava/lang/String;Ljava/lang/String;)V (handler @ image 185082e70, runtime 6fffecc92e70) =====

void FUN_185082e70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185082f75 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180418c60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; dap (Ljava/lang/String;Ljava/lang/String;)V (handler @ image 1850894b0, runtime 6fffecc994b0) =====

void FUN_1850894b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001850895a1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18041aab0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daq (Ljava/lang/String;Ljava/lang/String;)V (handler @ image 18508e5a0, runtime 6fffecc9e5a0) =====

void FUN_18508e5a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018508e699 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18041c230 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; das ()Ljava/util/Map; (handler @ image 185093660, runtime 6fffecca3660) =====

void FUN_185093660(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000185093680 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18041d940 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qG; dat ()Ljava/util/Map; (handler @ image 185093860, runtime 6fffecca3860) =====

void FUN_185093860(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000185093880 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18041da20 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qG; dau (Ljava/lang/String;Lnet/minecraft/class_1060;Lnet/minecraft/class_1011;)V (handler @ image 185093a60, runtime 6fffecca3a60) =====

void FUN_185093a60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x487b,0xe3);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185093af7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18041db00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; dav ()Ljava/lang/String; (handler @ image 184fe4ee0, runtime 6fffecbf4ee0) =====

void FUN_184fe4ee0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184fe4fb9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1803fa1d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; daw (Lsixtwo/lw;Ljava/lang/String;Lnet/minecraft/class_1060;Ljava/util/List;)V (handler @ image 184feb800, runtime 6fffecbfb800) =====

void FUN_184feb800(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184feb902 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1803fbd30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; dax ()Ljava/lang/String; (handler @ image 184ff2fc0, runtime 6fffecc02fc0) =====

void FUN_184ff2fc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184ff309c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1803fe150 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qG; day (Ljava/lang/String;)V (handler @ image 184ff9bc0, runtime 6fffecc09bc0) =====

void FUN_184ff9bc0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000184ff9be5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1803ffc60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qG; daz (Ljava/lang/String;Ljava/lang/String;)V (handler @ image 184ff9f10, runtime 6fffecc09f10) =====

void FUN_184ff9f10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x21d18,0x53a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184ffa012 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1803ffdf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



