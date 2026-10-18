// ===== Lsixtwo/dV; YO ()V (handler @ image 18d917450, runtime 6ffff5527450) =====

void FUN_18d917450(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb9c3,0x200);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d9174a3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822db920 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dV; _f41f24ca18273d66e52f46718dd5f912 ()V (handler @ image 18d9512a0, runtime 6ffff55612a0) =====

void FUN_18d9512a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d951388 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822e5008 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dV; aaj ()V (handler @ image 18d911b30, runtime 6ffff5521b30) =====

void FUN_18d911b30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb9c3,0x200);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d911bf1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822d9dd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dV; aqd ()Lsixtwo/cC; (handler @ image 18d918c70, runtime 6ffff5528c70) =====

void FUN_18d918c70(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018d918c90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822dc250 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dV; aqe ()I (handler @ image 18d918e70, runtime 6ffff5528e70) =====

void FUN_18d918e70(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018d918e90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822dc330 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dV; aqf (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d919070, runtime 6ffff5529070) =====

undefined8 FUN_18d919070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/dV; aqg ([B)Ljava/lang/String; (handler @ image 18d919100, runtime 6ffff5529100) =====

void FUN_18d919100(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018d9191a3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822dc590 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dV; aqh (IJ)I (handler @ image 18d942130, runtime 6ffff5552130) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d942130(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  
  uRam0000000183370df8 = func_0x00018d94d4f0(lRam0000000183370870 + 0x1396f2cb7bc9c565U ^ 0x6e);
  uVar2 = uRam0000000183370df8 >> 1 | uRam0000000183370df8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183370df8;
  uRam0000000183370c98 = (uRam0000000183370c98 ^ uVar2) + 0xba0dca7cd01ccca9 ^ 0x6bcf1b3d40caacc2;
  uRam0000000183370d58 = (uRam0000000183370d58 * -0x7f1c3cd604679c79 ^ uRam0000000183370c98) + uVar2
  ;
  uRam0000000183370ec8 = uRam0000000183370d58 ^ uRam0000000183370c98;
  uRam0000000183370778 = -0x45f235832fe33357;
  uVar2 = (uRam0000000183370e80 ^ _UNK_1822e3850) + uRam0000000183370da0 + 0x84222325;
  uVar7 = (uRam0000000183370da0 ^ _UNK_1822e3858) + uRam0000000183370e80 + 0x1e9c099d7ee48877;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183370e80 ^ _UNK_1822e3850;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183370da0 ^ _UNK_1822e3858;
  uRam0000000183370a50 =
       func_0x00018d94d4f0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183370e80 + 0x1e9c099d7ee48877) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183370da0 + 0x84222325));
  uRam0000000183370ab0 =
       (uRam0000000183370ab0 ^ uRam0000000183370a50 ^ 0x1e9c099d7ee48877) + 0xe163f662811b7789 ^
       0x691d651955873395;
  uRam0000000183370a80 =
       (uRam0000000183370a80 * -0x26ff0749089d89dd ^ uRam0000000183370ab0) +
       (uRam0000000183370a50 ^ 0x1e9c099d7ee48877);
  uRam0000000183370ac0 = uRam0000000183370a80 ^ uRam0000000183370ab0;
  uRam0000000183370a58 = 0xe163f662811b7789;
  uVar2 = (~uRam0000000183370b88 + 0xe163f662811b778a) *
          ((uRam0000000183370bd0 ^ 0x1e9c099dfac72b53) +
          (uRam0000000183370bd0 & 0x1e9c099dfac72b53) * 2);
  uVar2 = (uVar2 | uRam0000000183370ef0) + (uVar2 & uRam0000000183370ef0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833708d8 =
       func_0x00018d94d4f0((uVar2 | 0xffffffff7bdc5cda) + (uVar2 & 0xffffffff7bdc5cda));
  uVar2 = uRam00000001833708d8 & 0x1ffffffffffff;
  uRam0000000183370c48 = uRam0000000183370dc0 ^ uVar2 ^ 0x7fff;
  uRam0000000183370af8 = (uRam0000000183370af8 ^ uVar2) + 0x7fff ^ 0x8fd7a548c0194ebb;
  uRam0000000183370a68 = (uRam0000000183370a68 * 0x487ea7cefd188f51 ^ uRam0000000183370af8) + uVar2;
  uRam0000000183370838 = uRam0000000183370a68 ^ uRam0000000183370af8;
  uRam0000000183370840 = 0x7fff;
  uVar2 = (~uRam00000001833709c0 + 0xf2cd0335a9604bee) *
          ((uRam0000000183370b78 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183370b78 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam0000000183370c10) + (uVar2 & uRam0000000183370c10);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183370738 =
       func_0x00018d94d4f0((uVar2 | 0xf2cd03352d4268c8) + (uVar2 & 0xf2cd03352d4268c8));
  uRam0000000183370780 = uRam0000000183370780 + 0xd32fcca569fb413 ^ 0xd39614515ca73ff9;
  uRam00000001833707b0 = uRam0000000183370888 * -0x9e47a083abcd6c1;
  uRam0000000183370888 = uRam00000001833707b0 ^ uRam0000000183370780;
  uRam0000000183370a90 = 0xd32fcca569fb413;
  uRam0000000183370ca0 = func_0x00018d94d4f0(lRam0000000183370b70 + 0xaf340956d9345aa8U ^ 0x1a);
  uRam0000000183370ee0 = uRam0000000183370e78 ^ uRam0000000183370ca0 ^ 0x7fff;
  uRam0000000183370cd0 = (uRam0000000183370cd0 ^ uRam0000000183370ca0) + 0x7fff ^ 0xca8e8ad8ed0eb38b
  ;
  uRam0000000183370b08 =
       (uRam0000000183370b08 * -0x5a3cc63a5e0a394d ^ uRam0000000183370cd0) + uRam0000000183370ca0;
  uRam0000000183370998 = uRam0000000183370b08 ^ uRam0000000183370cd0;
  uRam0000000183370988 = 0x7fff;
  uVar2 = (~uRam0000000183370798 + 0x65c50ca4f9efe0c7) *
          ((uRam0000000183370e58 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183370e58 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam0000000183370d10) + (uVar2 & uRam0000000183370d10);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183370ed8 =
       func_0x00018d94d4f0((uVar2 | 0x65c50ca47dcdc3e3) + (uVar2 & 0x65c50ca47dcdc3e3));
  uRam0000000183370d28 = uRam0000000183370d28 + 0x9a3af35b06101f3a ^ 0x4980dc10dd2f23f1;
  uRam0000000183370790 = uRam0000000183370a30 * 0x5ce81a4d17f2ecd9;
  uRam0000000183370a30 = uRam0000000183370790 ^ uRam0000000183370d28;
  uRam0000000183370ee0 = -0x65c50ca4f9efe0c6;
  uVar2 = (~uRam0000000183370878 + 0x65c50ca4f9efe0c7) *
          ((uRam0000000183370ce8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183370ce8 & 0x84225cda) * 2);
  uVar2 = (uVar2 | uRam0000000183370cd0) + (uVar2 & uRam0000000183370cd0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183370c28 =
       func_0x00018d94d4f0((uVar2 | 0x65c50ca47dcdbc1c) + (uVar2 & 0x65c50ca47dcdbc1c));
  uVar2 = uRam0000000183370c28 << 0xb | uRam0000000183370c28 >> 0x35;
  uRam0000000183370c80 = uRam0000000183370e88 ^ uVar2 ^ 0x65c50ca4f9f060c5;
  uRam0000000183370c60 = (uRam0000000183370c60 ^ uVar2) + 0x65c50ca4f9f060c5 ^ 0x6c3be4c03f8e062;
  uRam0000000183370ef0 = (uRam0000000183370ef0 * 0x5efe111ad6c74a13 ^ uRam0000000183370c60) + uVar2;
  uRam0000000183370810 = uRam0000000183370ef0 ^ uRam0000000183370c60;
  uRam0000000183370ed0 = 0x65c50ca4f9f060c5;
  uVar2 = (uRam0000000183370ca8 ^ _UNK_1822e3860) + uRam0000000183370950 + 0x65c50ca47dd243e0;
  uVar7 = (uRam0000000183370950 ^ _UNK_1822e3868) + uRam0000000183370ca8 + 0x9a3af35b06101f3a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183370ca8 ^ _UNK_1822e3860;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183370950 ^ _UNK_1822e3868;
  uRam00000001833707b0 =
       func_0x00018d94d4f0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183370ca8 + 0x9a3af35b06101f3a) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183370950 + 0x65c50ca47dd243e0));
  uVar2 = (uRam00000001833707b0 ^ 0x9a3af35b06101e00) & 0xfffffffffffffe00;
  uRam00000001833708c0 = uRam0000000183370750 ^ uVar2 ^ 0x7fff;
  uRam0000000183370e50 = (uRam0000000183370e50 ^ uVar2) + 0x7fff ^ 0xe0d60dc1e5411f44;
  uRam0000000183370cd8 = (uRam0000000183370cd8 * 0x19f1090a66c98cbf ^ uRam0000000183370e50) + uVar2;
  uRam0000000183370d88 = uRam0000000183370cd8 ^ uRam0000000183370e50;
  uRam0000000183370c00 = 0x7fff;
  uRam0000000183370e70 = func_0x00018d94d4f0(uRam0000000183370ee0 + 0xefeff764a8ab3840 ^ 0x7a);
  uVar2 = ((uRam0000000183370e70 ^ 0x1e7e0fe22cc9fc98) << 7 |
          (uRam0000000183370e70 ^ 0x1e7e0fe22cc9fc98) >> 0x39) ^ 0xfb757f6cfbf6ffe7;
  uRam0000000183370be0 = uRam0000000183370b98 ^ uVar2 ^ 0xb58349e9cc13cc90;
  uRam0000000183370e60 = (uRam0000000183370e60 ^ uVar2) + 0xb58349e9cc13cc90 ^ 0x20c3cb586f12303;
  uRam0000000183370b90 = (uRam0000000183370b90 * -0x741179b5809436af ^ uRam0000000183370e60) + uVar2
  ;
  uRam0000000183370e78 = uRam0000000183370b90 ^ uRam0000000183370e60;
  uRam0000000183370998 = 0xb58349e9cc13cc90;
  lRam0000000183370828 = func_0x00018d94d4f0(lRam0000000183370898 + 0xff03794e66a4840U ^ 0x50);
  uRam0000000183370cd8 =
       (uRam0000000183370cd8 ^ lRam0000000183370828 * -0x7a07bb6b879d350b) + 0xba054a6cd014cca1 ^
       0xce4a2b0960e836fb;
  uRam0000000183370768 =
       (uRam0000000183370768 * -0x1b8fac22286ec7d7 ^ uRam0000000183370cd8) +
       lRam0000000183370828 * -0x7a07bb6b879d350b;
  uRam0000000183370ea0 = uRam0000000183370768 ^ uRam0000000183370cd8;
  uRam0000000183370c28 = uRam0000000183370da8 ^ 0xba054a6cd014cca1;
  uRam0000000183370c80 = 0xba054a6cd014cca1;
  uVar2 = (~uRam00000001833707a0 + 0x740a94d9a0299943) *
          ((uRam00000001833709c8 ^ 0x4178b510afc8106b) +
          (uRam00000001833709c8 & 0x4178b510afc8106b) * 2);
  uVar2 = (uVar2 | uRam0000000183370b78) + (uVar2 & uRam0000000183370b78);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183370cb8 =
       func_0x00018d94d4f0((uVar2 | 0x357221c90fe18929) + (uVar2 & 0x357221c90fe18929));
  uVar2 = uRam0000000183370cb8 ^ 0x757ab5d9abebbb4e;
  uRam0000000183370a08 = uRam0000000183370858 ^ uVar2 ^ 0xb58349e9cc13cc90;
  uRam00000001833709e8 = (uRam00000001833709e8 ^ uVar2) + 0xb58349e9cc13cc90 ^ 0x925f763883d5bb50;
  uRam0000000183370e20 = (uRam0000000183370e20 * -0x75790aef7df974a3 ^ uRam00000001833709e8) + uVar2
  ;
  uRam0000000183370ab0 = uRam0000000183370e20 ^ uRam00000001833709e8;
  uRam00000001833708a0 = 0xb58349e9cc13cc90;
  uVar2 = (uRam00000001833709b0 ^ _UNK_1822e3870) + uRam0000000183370988 + 0xb58349e94831efb5;
  uVar7 = (uRam0000000183370988 ^ _UNK_1822e3878) + uRam00000001833709b0 + 0xb58349e9cc13cc90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833709b0 ^ _UNK_1822e3870;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183370988 ^ _UNK_1822e3878;
  uRam0000000183370d10 =
       func_0x00018d94d4f0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833709b0 + 0xb58349e9cc13cc90) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183370988 + 0xb58349e94831efb5));
  uRam00000001833708a0 = uRam00000001833707b8 & 0xfffffffffffffe00;
  uRam0000000183370748 = uRam0000000183370748 ^ uRam00000001833708a0 ^ 0x2b307232311b61ac;
  uRam0000000183370b60 =
       (uRam0000000183370b60 * -0x7ea022809837d933 ^ uRam0000000183370748) + uRam00000001833708a0;
  uRam0000000183370a40 = uRam0000000183370b60 ^ uRam0000000183370748;
  uRam0000000183370e28 = 0;
  uRam0000000183370b58 = func_0x00018d94d4f0(uRam0000000183370da0 + 0x3bff7ca6001dff ^ 0x21);
  uVar2 = uRam0000000183370b58 & 0xfffffffffc000000;
  uRam0000000183370948 = uRam00000001833708b0 ^ uVar2 ^ 0x7fff;
  uRam0000000183370aa0 = (uRam0000000183370aa0 ^ uVar2) + 0x7fff ^ 0xc396c127105c6328;
  uRam0000000183370b80 = (uRam0000000183370b80 * -0x42a142dfb8ae4f07 ^ uRam0000000183370aa0) + uVar2
  ;
  uRam0000000183370e30 = uRam0000000183370b80 ^ uRam0000000183370aa0;
  uRam0000000183370cc8 = 0x7fff;
  uRam0000000183370ec0 = func_0x00018d94d4f0(uRam0000000183370940 + 0x6ce376801a8028fb ^ 2);
  uRam0000000183370ca8 =
       (uRam0000000183370ca8 ^ ~uRam0000000183370ec0) + 0x48a809304090018 ^ 0x69a92f090be35fd1;
  uRam0000000183370c58 =
       (uRam0000000183370c58 * -0x1cf99fe1566bd655 ^ uRam0000000183370ca8) + ~uRam0000000183370ec0;
  uRam0000000183370e70 = uRam0000000183370c58 ^ uRam0000000183370ca8;
  uRam0000000183370a88 = 0x48a809304090018;
  uRam0000000183370e68 = func_0x00018d94d4f0(uRam0000000183370c20 + 0xb45c7af53645c2ee ^ 0xa2);
  uVar7 = uRam0000000183370e68 ^ 0x7f171b8b3a46fda8;
  uVar2 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar7;
  uVar2 = uVar7 >> 1 | uVar7;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar7;
  uRam0000000183370900 = uRam0000000183370900 ^ uVar7 ^ 0x1a11c6d1a60f18ad;
  uRam0000000183370b00 = (uRam0000000183370b00 * 0x7f49e1941c12ed93 ^ uRam0000000183370900) + uVar7;
  uRam0000000183370708 = uRam0000000183370b00 ^ uRam0000000183370900;
  uRam00000001833708c8 = 0;
  lRam0000000183370aa8 = func_0x00018d94d4f0(uRam0000000183370be0 + 0xffe100841b0021ff ^ 0x9e);
  uVar2 = lRam0000000183370aa8 * -0x20f2212e60f98b09 ^ 0x93705b60fb06ebe7;
  uVar7 = uVar2 >> 1 | uVar2;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar2;
  uRam0000000183370c48 = uRam0000000183370c48 ^ uVar2 ^ 0xa128d4770c04fe61;
  uRam0000000183370778 = (uRam0000000183370778 * 0x250e5219b9e70387 ^ uRam0000000183370c48) + uVar2;
  uRam00000001833707e8 = uRam0000000183370778 ^ uRam0000000183370c48;
  uRam0000000183370af0 = 0;
  uVar2 = param_4 ^ 0x84222325 ^ uRam0000000183370840;
  lVar4 = (param_4 ^ 0x84222325) + uRam0000000183370d50;
  uVar7 = uVar2 + lVar4;
  uVar8 = (uRam0000000183370d50 ^ 0x7fff) + uRam0000000183370840 + 0x7fff;
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar2;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183370d50 ^ 0x7fff;
  uRam0000000183370ca8 =
       func_0x00018d94d4f0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183370840 + 0x7fff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  lVar4 = ((param_4 * 0x7fff ^ uRam0000000183370ca8) >> 0x11) * 0x6a094c52f9fe0000;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar8 = (ulonglong)uVar3;
  uRam00000001833708a0 = (lVar4 + 0x7fffU ^ uRam00000001833708a0) + uVar8 ^ 0xeb0fdaba6b9d2c0a;
  uRam0000000183370ce8 =
       lVar4 + (uRam0000000183370ce8 * 0xb2ac89f6af3a60d ^ uRam00000001833708a0) + 0x7fff;
  uRam0000000183370990 = uRam00000001833708a0 ^ uRam0000000183370ce8;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar3 ^ 0x84222325;
  auVar5._8_4_ = param_3;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ _UNK_1822e3880,_UNK_1800170c0);
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar7 + lRam0000000183370a98;
  if (auVar6._4_4_ < 0) {
    uVar2 = uRam0000000183370738 ^ uVar7;
  }
  uRam0000000183370bc0 = uVar8;
  uRam0000000183370cf8 = func_0x00018d94d4f0(SUB161(auVar5 ^ _UNK_1822e3880,5) ^ uVar2);
  uVar7 = (uVar8 + param_3) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183370770 =
       (uRam0000000183370770 ^ uRam0000000183370cf8 * 0x306aba5cb4993653) + uVar7 ^
       0xf9b629425b1afba3;
  uRam0000000183370778 =
       (uRam0000000183370778 * -0x4ab81d75ddd49a0f ^ uRam0000000183370770) +
       uRam0000000183370cf8 * 0x306aba5cb4993653;
  uRam0000000183370cd0 = uRam0000000183370778 ^ uRam0000000183370770;
  uVar7 = uVar7 & 0xffffffff;
  uVar2 = (~uRam0000000183370c20 + 0xca633c8) *
          ((uRam00000001833709b8 ^ 0xb636d79f) +
          (ulonglong)((uint)uRam00000001833709b8 & 0xb636d79f) * 2);
  uVar2 = (uVar2 | uRam00000001833707c8) + (uVar2 & uRam00000001833707c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183370a88 = uVar7;
  uRam0000000183370ec0 =
       func_0x00018d94d4f0((uVar2 | 0xba90e458) + (ulonglong)((uint)uVar2 & 0xba90e458));
  uVar2 = uRam0000000183370ec0 >> 1 | uRam0000000183370ec0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183370ec0;
  uVar2 = uVar2 << 0x1b | uVar2 >> 0x25;
  uRam0000000183370c68 = (uRam0000000183370c68 ^ uVar2) + 0x3eb6f7ff ^ 0xc008af487aaac9c3;
  uRam00000001833709e8 = (uRam00000001833709e8 * -0x2cdf2089da13ca73 ^ uRam0000000183370c68) + uVar2
  ;
  uRam0000000183370be8 = uRam00000001833709e8 ^ uRam0000000183370c68;
  uRam0000000183370b98 = 0x3eb6f7ff;
  uRam0000000183370dd8 = func_0x00018d94d4f0(lRam0000000183370718 + 0xffb3ffc42bff58ffU ^ 0xac);
  uVar2 = (uRam0000000183370dd8 & 0x7ffffffffff) << 0x14 | uRam0000000183370dd8 >> 0x2c;
  uRam0000000183370b60 = (uRam0000000183370b60 ^ uVar2) + 0xf88bfff1 ^ 0xde0f67562ae712e7;
  uRam0000000183370dc0 = (uRam0000000183370dc0 * -0x3373acee0cf3a2af ^ uRam0000000183370b60) + uVar2
  ;
  uRam0000000183370b40 = uRam0000000183370dc0 ^ uRam0000000183370b60;
  uRam0000000183370b68 = 0xf88bfff1;
  uVar2 = (uRam0000000183370940 ^ _UNK_1822e3890) + uRam0000000183370e80 + 0x84222325;
  uVar8 = (uRam0000000183370e80 ^ _UNK_1822e3898) + uRam0000000183370940 + 0x12888d50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183370940 ^ _UNK_1822e3890;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183370e80 ^ _UNK_1822e3898;
  uRam0000000183370838 =
       func_0x00018d94d4f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183370940 + 0x12888d50) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183370e80 + 0x84222325));
  uVar2 = uRam0000000183370838 << 0x1d | uRam0000000183370838 >> 0x23;
  uRam0000000183370dd0 = (uRam0000000183370dd0 ^ uVar2) - 0x12888d50 ^ 0x8b3c3392e33bc04f;
  uRam0000000183370938 = (uRam0000000183370938 * -0x2429e6e6730b50f5 ^ uRam0000000183370dd0) + uVar2
  ;
  uRam0000000183370a58 = uRam0000000183370938 ^ uRam0000000183370dd0;
  uRam00000001833709f8 = 0xed7772b0;
  uRam0000000183370ba0 = func_0x00018d94d4f0(uRam0000000183370bf8 ^ 0xb60075e6ff5589);
  uVar2 = (uRam0000000183370ba0 ^ 0x1288e000) & 0xffffffffffffe000;
  uRam0000000183370988 = uRam0000000183370e88 ^ uVar2 ^ 0x128901ac;
  uRam0000000183370cf8 = (uRam0000000183370cf8 ^ uVar2) + 0x128901ac ^ 0xcb003efa75e073bc;
  uRam0000000183370a88 = (uRam0000000183370a88 * 0x54230224af7b776f ^ uRam0000000183370cf8) + uVar2;
  uRam00000001833707c8 = uRam0000000183370a88 ^ uRam0000000183370cf8;
  uRam0000000183370ac0 = 0x128901ac;
  uVar2 = (uRam0000000183370860 ^ _UNK_1822e38a0) + uRam0000000183370a38 + 0x96ab2289;
  uVar8 = (uRam0000000183370a38 ^ _UNK_1822e38a8) + uRam0000000183370860 + 0xed7772b0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183370860 ^ _UNK_1822e38a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183370a38 ^ _UNK_1822e38a8;
  func_0x00018d94d4f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183370860 + 0xed7772b0) ^
                      (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183370a38 + 0x96ab2289));
  uRam0000000183370c30 = uRam0000000183370e20 ^ uRam0000000183370b00 ^ 0x10000745c;
  uRam00000001833708c8 =
       (uRam00000001833708c8 ^ uRam0000000183370b00) + 0x10000745c ^ 0x414bf9a2e44c3cfa;
  uRam0000000183370900 =
       (uRam0000000183370900 * 0x618b692d099ff377 ^ uRam00000001833708c8) + uRam0000000183370b00;
  uRam0000000183370db0 = uRam0000000183370900 ^ uRam00000001833708c8;
  uRam0000000183370e70 = 0x745c;
  uRam0000000183370dd0 = func_0x00018d94d4f0(uRam0000000183370ce8 + 0xfff7ffbeaf0013ff ^ 0xd6);
  uVar2 = uRam0000000183370dd0 & 0x7fffffffffffffff ^ 0x745c;
  uRam0000000183370e60 = uRam0000000183370808 ^ uVar2 ^ 0x450ed3e4;
  uRam00000001833707a0 = (uRam00000001833707a0 ^ uVar2) + 0x450ed3e4 ^ 0x74b42e6de8580801;
  uRam0000000183370a78 = (uRam0000000183370a78 * 0x1a4d318ff61182f5 ^ uRam00000001833707a0) + uVar2;
  uRam0000000183370738 = uRam0000000183370a78 ^ uRam00000001833707a0;
  uRam00000001833709c8 = 0x450ed3e4;
  uRam00000001833707c8 = func_0x00018d94d4f0(uRam0000000183370ca0 ^ 0x4fff8a4900a4a3);
  uVar2 = uRam00000001833707c8 ^ 0x450e5384;
  uRam0000000183370e18 = uRam0000000183370ea8 ^ uVar2 ^ 0x10000745c;
  uRam0000000183370968 = (uRam0000000183370968 ^ uVar2) + 0x10000745c ^ 0x1f3d5fdc42ddfab6;
  uRam0000000183370a38 = (uRam0000000183370a38 * -0x69baa4407e52d611 ^ uRam0000000183370968) + uVar2
  ;
  uRam0000000183370e90 = uRam0000000183370a38 ^ uRam0000000183370968;
  uRam0000000183370b28 = 0x745c;
  uVar2 = (uRam0000000183370c28 ^ _UNK_1822e38b0) + uRam0000000183370a08 + 0x84222325;
  uVar8 = (uRam0000000183370a08 ^ _UNK_1822e38b8) + uRam0000000183370c28 + 0xd16e7b38;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183370c28 ^ _UNK_1822e38b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183370a08 ^ _UNK_1822e38b8;
  uRam0000000183370b48 =
       func_0x00018d94d4f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183370c28 + 0xd16e7b38) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183370a08 + 0x84222325));
  uRam0000000183370e28 =
       (uRam0000000183370e28 ^ uRam00000001833707c8) - 0xd16e7b38 ^ 0xad5d3fc8f2531af;
  uRam0000000183370e60 =
       (uRam0000000183370e60 * 0x49cebc9f9f990811 ^ uRam0000000183370e28) + uRam00000001833707c8;
  uRam0000000183370a00 = uRam0000000183370e60 ^ uRam0000000183370e28;
  uRam0000000183370cf0 = 0x2e9184c8;
  uVar2 = (uRam0000000183370db0 ^ _UNK_1822e38c0) + uRam0000000183370ad8 + 0x421f2b2b;
  uVar8 = (uRam0000000183370ad8 ^ _UNK_1822e38c8) + uRam0000000183370db0 + 0x7105efe2;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183370db0 ^ _UNK_1822e38c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183370ad8 ^ _UNK_1822e38c8;
  uRam0000000183370b50 =
       func_0x00018d94d4f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183370db0 + 0x7105efe2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183370ad8 + 0x421f2b2b));
  uVar2 = uRam0000000183370b50 ^ 0x5785898152ac2e5c;
  uRam0000000183370a00 = uRam0000000183370ab8 ^ uVar2 ^ 0x13742f7f0;
  uRam0000000183370878 = (uRam0000000183370878 ^ uVar2) + 0x13742f7f0 ^ 0xe08e31afd1db06ef;
  uRam0000000183370868 = (uRam0000000183370868 * 0x5b8f14a0bc17278f ^ uRam0000000183370878) + uVar2;
  uRam0000000183370e38 = uRam0000000183370868 ^ uRam0000000183370878;
  uRam0000000183370ab0 = 0x3742f7f0;
  uVar2 = (uRam0000000183370908 ^ _UNK_1822e38d0) + uRam00000001833709c0 + 0xb360d4d5;
  uVar8 = (uRam00000001833709c0 ^ _UNK_1822e38d8) + uRam0000000183370908 + 0x3742f7f0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183370908 ^ _UNK_1822e38d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833709c0 ^ _UNK_1822e38d8;
  uRam0000000183370720 =
       func_0x00018d94d4f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183370908 + 0x3742f7f0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833709c0 + 0xb360d4d5));
  uRam0000000183370be8 = uRam00000001833707d8;
  uRam0000000183370cb8 = uRam0000000183370cb8 ^ uRam00000001833707d8 ^ 0xe6be688eafd63efc;
  uRam00000001833709b0 =
       (uRam00000001833709b0 * 0x22c050ef00458ac9 ^ uRam0000000183370cb8) + uRam00000001833707d8;
  uRam00000001833707c8 = uRam00000001833709b0 ^ uRam0000000183370cb8;
  uRam0000000183370c48 = 0;
  uVar2 = ((uRam0000000183370890 ^ 0x84225779) +
          (ulonglong)((uint)uRam0000000183370890 & 0x84225779) * 2) * -lRam0000000183370960;
  uVar2 = (uVar2 | uRam0000000183370908) + (uVar2 & uRam0000000183370908);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183370848 =
       func_0x00018d94d4f0((uVar2 | 0x84225779) + (ulonglong)((uint)uVar2 & 0x84225779));
  uVar2 = uRam0000000183370848 << 0x36 | uRam0000000183370848 >> 10;
  uRam0000000183370be8 = uRam00000001833709e8 ^ uVar2 ^ 0x745c;
  uRam0000000183370a50 = (uRam0000000183370a50 ^ uVar2) + 0x745c ^ 0xed774ab5d7e1ac36;
  uRam0000000183370c58 = (uRam0000000183370c58 * -0xa724c582ee44dc5 ^ uRam0000000183370a50) + uVar2;
  uRam0000000183370af0 = uRam0000000183370c58 ^ uRam0000000183370a50;
  uRam0000000183370900 = 0x745c;
  uVar2 = (uRam0000000183370d90 ^ _UNK_1822e38e0) + uRam0000000183370d30 + 0xba94d4da;
  uVar8 = (uRam0000000183370d30 ^ _UNK_1822e38e8) + uRam0000000183370d90 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183370d90 ^ _UNK_1822e38e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183370d30 ^ _UNK_1822e38e8;
  uRam0000000183370990 =
       func_0x00018d94d4f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183370d90 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183370d30 + 0xba94d4da));
  uRam0000000183370e98 =
       (uRam0000000183370e98 ^ uRam0000000183370990 ^ 0x3eb6f7ff) + 0xc1490800 ^ 0x27787517bf5f6375;
  uRam0000000183370bc0 =
       (uRam0000000183370bc0 * -0x319b912f473824b3 ^ uRam0000000183370e98) +
       (uRam0000000183370990 ^ 0x3eb6f7ff);
  uRam0000000183370770 = uRam0000000183370bc0 ^ uRam0000000183370e98;
  uRam0000000183370930 = 0xc1490800;
  uRam0000000183370a60 = func_0x00018d94d4f0(uRam0000000183370ca0 + 0xffbc0049da0032ff);
  uRam0000000183370bc0 = uRam0000000183370bc0 ^ uRam0000000183370a60 ^ 0xbb3c1e1c7932d04;
  uRam0000000183370b58 =
       (uRam0000000183370b58 * 0x2f18f42f2d7c5df3 ^ uRam0000000183370bc0) + uRam0000000183370a60;
  uRam0000000183370d78 = uRam0000000183370b58 ^ uRam0000000183370bc0;
  uRam0000000183370e38 = 0;
  uVar2 = (uRam00000001833708e8 ^ _UNK_1822e38f0) + uRam0000000183370c18 + 0xb636d79f;
  uVar8 = (uRam0000000183370c18 ^ _UNK_1822e38f8) + uRam00000001833708e8 + 0x3214f4ba;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833708e8 ^ _UNK_1822e38f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183370c18 ^ _UNK_1822e38f8;
  uRam0000000183370dc8 =
       func_0x00018d94d4f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833708e8 + 0x3214f4ba) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183370c18 + 0xb636d79f));
  uRam0000000183370a30 =
       uRam0000000183370a30 ^ uRam0000000183370b48 ^ 0x3214f4ba ^ 0xfaa41cf5a72229cf;
  uRam00000001833709e0 =
       (uRam00000001833709e0 * -0x4f144cf7ad790b7b ^ uRam0000000183370a30) +
       (uRam0000000183370b48 ^ 0x3214f4ba);
  uRam0000000183370e18 = uRam00000001833709e0 ^ uRam0000000183370a30;
  uRam0000000183370b30 = 0;
  uRam0000000183370d58 = func_0x00018d94d4f0(uRam0000000183370938 + 0xffacff83a6ffe1ff ^ 0x83);
  uRam0000000183370e68 = uRam00000001833709e0 ^ uRam0000000183370d58 ^ 0x745c;
  uRam0000000183370a00 = (uRam0000000183370a00 ^ uRam0000000183370d58) + 0x745c ^ 0xb02a632be4690484
  ;
  uRam0000000183370c70 =
       (uRam0000000183370c70 * -0x33aa744ed89097eb ^ uRam0000000183370a00) + uRam0000000183370d58;
  uRam0000000183370d30 = uRam0000000183370c70 ^ uRam0000000183370a00;
  uRam0000000183370a20 = 0x745c;
  uVar2 = uVar7 ^ 0x84222325 ^ uRam0000000183370750;
  lVar4 = (uVar7 ^ 0x84222325) + uRam00000001833708e0;
  uVar8 = uVar2 + lVar4;
  uVar9 = (uRam00000001833708e0 ^ 0x745c) + uRam0000000183370750 + 0x745c;
  uVar2 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833708e0 ^ 0x745c;
  uRam0000000183370e00 =
       func_0x00018d94d4f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183370750 + 0x745c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  uVar2 = uVar7 ^ (uVar7 | 0x745c) ^ uRam0000000183370e00;
  uVar2 = uVar2 << 0x2c | uVar2 >> 0x14;
  uRam00000001833707e0 = uVar7 ^ 0x745c;
  uRam0000000183370a10 = (uRam0000000183370a10 ^ uVar2) + uRam00000001833707e0 ^ 0xd7c911cd3775705c;
  uRam0000000183370cd8 = (uRam0000000183370cd8 * -0x5be0f0a5709b0b55 ^ uRam0000000183370a10) + uVar2
  ;
  uRam00000001833708c8 = uRam0000000183370cd8 ^ uRam0000000183370a10;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb9c3,0x200);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d9442a9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822e19f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dV; aqi (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d94d580, runtime 6ffff555d580) =====

void FUN_18d94d580(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d94d5cb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822e3a30 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dV; aqj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d94e590, runtime 6ffff555e590) =====

void FUN_18d94e590(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d94e619 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822e3ff0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



