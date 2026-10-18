// ===== Lsixtwo/em; _8b967bade6a5815b769653759123e3a3 ()V (handler @ image 18d1c6da0, runtime 6ffff4dd6da0) =====

void FUN_18d1c6da0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1c6e88 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182175588 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/em; ati (Lsixtwo/hs;)V (handler @ image 18d1a6f20, runtime 6ffff4db6f20) =====

void FUN_18d1a6f20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcf35,0x23a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1a6fe4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18216c590 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/em; atj (Lsixtwo/gH$th;)V (handler @ image 18d1ac2c0, runtime 6ffff4dbc2c0) =====

void FUN_18d1ac2c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcf35,0x23a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1ac38a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18216ddf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/em; atk (Lnet/minecraft/class_2627;)Z (handler @ image 18d1b3400, runtime 6ffff4dc3400) =====

void FUN_18d1b3400(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcf35,0x23a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1b347c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182170490 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/em; atl (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d1b7a70, runtime 6ffff4dc7a70) =====

undefined8 FUN_18d1b7a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/em; atm (IJ)I (handler @ image 18d1b7b00, runtime 6ffff4dc7b00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1b7b00(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (~uRam000000018334d528 + 0x3a609dfa1dab48c6) *
          ((uRam000000018334d588 ^ 0x98e313600d5568b5) +
          (uRam000000018334d588 & 0x18e313600d5568b5) * 2);
  uVar4 = (uVar4 | uRam000000018334d550) + (uVar4 & uRam000000018334d550);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d510 =
       func_0x00018d1c2ff0((uVar4 | 0xa2838e9a10fe2070) + (uVar4 & 0xa2838e9a10fe2070));
  uVar4 = (uRam000000018334d510 ^ 0x89774b90) & 0x3ffffffff;
  uRam000000018334d568 = (uRam000000018334d568 ^ uVar4) + 0xbae39ffa9dff4bd5 ^ 0xfb766ffad47867eb;
  uRam000000018334d500 = (uRam000000018334d500 * -0x27d6ef0375af68ab ^ uRam000000018334d568) + uVar4
  ;
  uRam000000018334d5c0 = uRam000000018334d500 ^ uRam000000018334d568;
  uRam000000018334d590 = 0xbae39ffa9dff4bd5;
  uVar4 = (uRam000000018334d600 ^ _UNK_182173e00) + uRam000000018334d600 + 0xc161200d25f1f4f0;
  uVar5 = (uRam000000018334d600 ^ _UNK_182173e08) + uRam000000018334d600 + 0x2b963ff35c015c70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d600 ^ _UNK_182173e00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d600 ^ _UNK_182173e08;
  uRam000000018334d558 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334d600 + 0x2b963ff35c015c70) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018334d600 + 0xc161200d25f1f4f0));
  uVar4 = (uRam000000018334d558 << 0x3c | uRam000000018334d558 >> 4) ^ 0xeaf71ffefdd28ba5;
  uRam000000018334d600 = (uRam000000018334d600 ^ uVar4) + 0xeaf71ffefdd28ba5 ^ 0xeba44edc4e632361;
  uRam000000018334d570 = (uRam000000018334d570 * 0x450cd004997ed07 ^ uRam000000018334d600) + uVar4;
  uRam000000018334d6a0 = uRam000000018334d570 ^ uRam000000018334d600;
  uRam000000018334d518 = 0xeaf71ffefdd28ba5;
  uVar4 = (~uRam000000018334d530 + 0x5b9f9eb12f13e101) *
          ((uRam000000018334d508 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018334d508 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018334d6d0) + (uVar4 & uRam000000018334d6d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d698 =
       func_0x00018d1c2ff0((uVar4 | 0x5b9f9eb1ab31c225) + (uVar4 & 0x5b9f9eb1ab31c225));
  uRam000000018334d638 =
       (uRam000000018334d638 ^ uRam000000018334d698) + 0xa460614ed0ec1f00 ^ 0xc5df233c88e1a6e2;
  uRam000000018334d6c8 =
       (uRam000000018334d6c8 * 0x55a5cca2c3981d83 ^ uRam000000018334d638) + uRam000000018334d698;
  uRam000000018334d5c8 = uRam000000018334d6c8 ^ uRam000000018334d638;
  uRam000000018334d508 = -0x5b9f9eb12f13e100;
  uVar4 = (uRam000000018334d698 ^ _UNK_182173e10) + uRam000000018334d648 + 0x84225cda;
  uVar5 = (uRam000000018334d648 ^ _UNK_182173e18) + uRam000000018334d698 + 0x5b9f9eb12f13e100;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d698 ^ _UNK_182173e10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d648 ^ _UNK_182173e18;
  uRam000000018334d578 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334d698 + 0x5b9f9eb12f13e100) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334d648 + 0x84225cda));
  uVar4 = (ulonglong)(~(((uint)(uRam000000018334d578 >> 0x20) ^ 0xb8f800) >> 9) & 0x7fff);
  uRam000000018334d630 = uRam000000018334d580 ^ uVar4 ^ 0x5b9f9eb12f1460ff;
  uRam000000018334d678 = (uRam000000018334d678 ^ uVar4) + 0x5b9f9eb12f1460ff ^ 0x7151911d12147655;
  uRam000000018334d620 = (uRam000000018334d620 * -0x30fbb6ba9dcf100b ^ uRam000000018334d678) + uVar4
  ;
  uRam000000018334d6d8 = uRam000000018334d620 ^ uRam000000018334d678;
  uRam000000018334d618 = 0x5b9f9eb12f1460ff;
  uVar4 = (uRam000000018334d5c8 ^ _UNK_182173e20) + 0xb73f3d62da4aa4d9;
  uVar5 = (_UNK_182173e28 ^ 0x5b9f9eb12f1460ff) + uRam000000018334d5c8 + 0xa460614ed0ec1f00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d5c8 ^ _UNK_182173e20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _UNK_182173e28 ^ 0x5b9f9eb12f1460ff;
  uRam000000018334d598 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334d5c8 + 0xa460614ed0ec1f00) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) + 0x48c0c29d25b55b27);
  uVar4 = ~uRam000000018334d598 & 0x5b9f9eb12f1460ff;
  uRam000000018334d618 = uRam000000018334d570 ^ uVar4 ^ 0x7fff;
  uRam000000018334d518 = (uRam000000018334d518 ^ uVar4) + 0x7fff ^ 0x9726d318b0e33c85;
  uRam000000018334d520 = (uRam000000018334d520 * 0x339349912ea613d ^ uRam000000018334d518) + uVar4;
  uRam000000018334d5a0 = uRam000000018334d520 ^ uRam000000018334d518;
  uRam000000018334d648 = 0x7fff;
  uRam000000018334d6d0 = func_0x00018d1c2ff0(uRam000000018334d5d0 + 0x7308324a62d242a5 ^ 0xdf);
  uRam000000018334d5d0 =
       (uRam000000018334d5d0 ^ uRam000000018334d6d0 & 0x7fffffffffffffff) + 0x95cc2d4cae80e479 ^
       0x8f79d8c5b22a72f3;
  uRam000000018334d508 =
       (uRam000000018334d508 * 0x4619e16126208615 ^ uRam000000018334d5d0) +
       (uRam000000018334d6d0 & 0x7fffffffffffffff);
  uRam000000018334d570 = uRam000000018334d508 ^ uRam000000018334d5d0;
  uRam000000018334d520 = -0x6a33d2b3517f1b87;
  uRam000000018334d620 = func_0x00018d1c2ff0(uRam000000018334d610 ^ 0xb2b8f3d52d4e25d8);
  uVar4 = uRam000000018334d678 & 0x7fffffffffffffff;
  uRam000000018334d698 = uRam000000018334d690 ^ uVar4 ^ 0x6a33d2b3517f9b86;
  uRam000000018334d560 = (uRam000000018334d560 ^ uVar4) + 0x6a33d2b3517f9b86 ^ 0xd849cb6ce322f780;
  uRam000000018334d520 = (uRam000000018334d520 * -0x45f5b3d797639285 ^ uRam000000018334d560) + uVar4
  ;
  uRam000000018334d538 = uRam000000018334d520 ^ uRam000000018334d560;
  uRam000000018334d668 = 0x6a33d2b3517f9b86;
  uRam000000018334d658 = func_0x00018d1c2ff0(uRam000000018334d6f8 + 0xabdb0a1292f9ee1b ^ 0x17);
  uVar4 = uRam000000018334d658 * -0x609d56e0952d96f ^ 0x3c0a0aecab347850;
  uRam000000018334d5c0 = (uRam000000018334d5c0 ^ uVar4) + 0xc3f5f51354cb87b0 ^ 0x539a934af087fba4;
  uRam000000018334d530 = (uRam000000018334d530 * -0x2cceb044d4ec360b ^ uRam000000018334d5c0) + uVar4
  ;
  uRam000000018334d588 = uRam000000018334d530 ^ uRam000000018334d5c0;
  uRam000000018334d558 = 0xc3f5f51354cb87b0;
  uVar4 = (~uRam000000018334d560 + 0x3c0a0aecab347851) *
          ((uRam000000018334d6f0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018334d6f0 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam000000018334d6c8) + (uVar4 & uRam000000018334d6c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d6c8 =
       func_0x00018d1c2ff0((uVar4 | 0x3c0a0aec2f16248a) + (uVar4 & 0x3c0a0aec2f16248a));
  uVar4 = uRam000000018334d6c8 << 0x3d | uRam000000018334d6c8 >> 3;
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
  uRam000000018334d658 = uRam000000018334d620 ^ uVar4 ^ 0x3c0a0aecab34f84f;
  uRam000000018334d640 = (uRam000000018334d640 ^ uVar4) + 0x3c0a0aecab34f84f ^ 0x985aa85b3e705072;
  uRam000000018334d638 = (uRam000000018334d638 * 0x2a36122e543409df ^ uRam000000018334d640) + uVar4;
  uRam000000018334d5f0 = uRam000000018334d638 ^ uRam000000018334d640;
  uRam000000018334d560 = 0x3c0a0aecab34f84f;
  uRam000000018334d6f0 = func_0x00018d1c2ff0(uRam000000018334d6b0 ^ 0x172c7944d5a8358a);
  uVar4 = ~uRam000000018334d6f0;
  uRam000000018334d568 = uRam000000018334d5d8 ^ uVar4 ^ 0x7fff;
  uRam000000018334d6e8 = (uRam000000018334d6e8 ^ uVar4) + 0x7fff ^ 0xf50baa46e4f5fc8d;
  uRam000000018334d520 = (uRam000000018334d520 * 0x7f6fa0df0b664467 ^ uRam000000018334d6e8) + uVar4;
  uRam000000018334d5b8 = uRam000000018334d520 ^ uRam000000018334d6e8;
  uRam000000018334d528 = 0x7fff;
  uVar4 = (~uRam000000018334d6a8 + 0xeaf71ffefdd28ba6) *
          ((uRam000000018334d580 ^ 0xbae39ffa19dd68f0) +
          (uRam000000018334d580 & 0x3ae39ffa19dd68f0) * 2);
  uVar4 = (uVar4 | uRam000000018334d540) + (uVar4 & uRam000000018334d540);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d6d8 =
       func_0x00018d1c2ff0((uVar4 | 0x50148004e40fe355) + (uVar4 & 0x50148004e40fe355));
  uVar4 = uRam000000018334d6d8 * -0x5bcfd32466431749;
  uRam000000018334d5f0 = uRam000000018334d618 ^ uVar4 ^ 0xa5dabff99bd1d77a;
  uRam000000018334d6a0 = (uRam000000018334d6a0 ^ uVar4) + 0xa5dabff99bd1d77a ^ 0x783651ccedcf604f;
  uRam000000018334d608 = (uRam000000018334d608 * -0x3a985855cbc03e0f ^ uRam000000018334d6a0) + uVar4
  ;
  uRam000000018334d628 = uRam000000018334d608 ^ uRam000000018334d6a0;
  uRam000000018334d580 = 0xa5dabff99bd1d77a;
  uRam000000018334d5f8 = func_0x00018d1c2ff0(uRam000000018334d6b0 ^ 0x4a0eb9bb27ff4a5);
  uVar4 = (uRam000000018334d5f8 ^ 0xfaf79ffefdffcbf5) << 0x1e |
          (uRam000000018334d5f8 ^ 0xfaf79ffefdffcbf5) >> 0x22;
  uRam000000018334d618 = (uRam000000018334d618 ^ uVar4) + 0x50148004602dc070 ^ 0x5d19972dc02f5dd2;
  uRam000000018334d5c8 = (uRam000000018334d5c8 * 0x2f67c1fadeb8d51 ^ uRam000000018334d618) + uVar4;
  uRam000000018334d6f0 = uRam000000018334d5c8 ^ uRam000000018334d618;
  uRam000000018334d5d0 = 0x50148004602dc070;
  uVar4 = (~uRam000000018334d648 + 0xeaf71ffefdd28ba6) *
          ((uRam000000018334d5f8 ^ 0xbae39ffa19dd68f0) +
          (uRam000000018334d5f8 & 0x3ae39ffa19dd68f0) * 2);
  uVar4 = (uVar4 | uRam000000018334d600) + (uVar4 & uRam000000018334d600);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d5d0 =
       func_0x00018d1c2ff0((uVar4 | 0x50148004e40fe355) + (uVar4 & 0x50148004e40fe355));
  uVar4 = uRam000000018334d5d0 * 0x7add64f4b68f533d & 0x1ffffffff;
  uRam000000018334d6b8 = (uRam000000018334d6b8 ^ uVar4) + 0xaae31ffa9dd20b85 ^ 0x6d905befb2cf1aea;
  uRam000000018334d568 =
       (uRam000000018334d5c8 * 0x65c74ea630052ee5 ^ uRam000000018334d6b8) + uVar4 ^
       uRam000000018334d6b8;
  uRam000000018334d5c8 = 0xaae31ffa9dd20b85;
  uRam000000018334d6f8 = func_0x00018d1c2ff0(uRam000000018334d568 + 0xf1d34da2ce435504 ^ 1);
  uVar5 = uRam000000018334d6f8 ^ 0x520a48a8f5d39460;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5;
  uRam000000018334d6d0 = uRam000000018334d5e0 ^ uVar5 ^ 0xa5dabff99bd1d77a;
  uRam000000018334d5a8 = (uRam000000018334d5a8 ^ uVar5) + 0xa5dabff99bd1d77a ^ 0x1f2daee7e0eb63ef;
  uRam000000018334d560 = (uRam000000018334d560 * -0x6a8d86d83294d55b ^ uRam000000018334d5a8) + uVar5
  ;
  uRam000000018334d640 = uRam000000018334d560 ^ uRam000000018334d5a8;
  uRam000000018334d5e0 = 0xa5dabff99bd1d77a;
  uVar4 = (uRam000000018334d528 ^ _UNK_182173e30) + uRam000000018334d658 + 0xa5dabff91ff3f45f;
  uVar5 = (uRam000000018334d658 ^ _UNK_182173e38) + uRam000000018334d528 + 0xa5dabff99bd1d77a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d528 ^ _UNK_182173e30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d658 ^ _UNK_182173e38;
  uRam000000018334d500 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334d528 + 0xa5dabff99bd1d77a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018334d658 + 0xa5dabff91ff3f45f));
  uRam000000018334d508 = uRam000000018334d500 ^ 0xa5dabff99bd1d77a;
  uRam000000018334d590 = uRam000000018334d590 ^ uRam000000018334d508 ^ 0x83ffcbc571d80d27;
  uRam000000018334d6b8 =
       (uRam000000018334d6b8 * 0x2f8b4690260ae203 ^ uRam000000018334d590) + uRam000000018334d508;
  uRam000000018334d660 = uRam000000018334d6b8 ^ uRam000000018334d590;
  uRam000000018334d568 = uRam000000018334d608;
  uRam000000018334d5b8 = 0;
  uRam000000018334d6a0 = func_0x00018d1c2ff0(uRam000000018334d5d0 + 0x4c0084ba001dff ^ 0xe5);
  uVar4 = uRam000000018334d6a0 ^ 0x7fff;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4)
          & 0x7fffffffffffffff;
  uRam000000018334d5a0 = uRam000000018334d530 ^ uVar4 ^ 0x7fff;
  uRam000000018334d600 = (uRam000000018334d600 ^ uVar4) + 0x7fff ^ 0xd808140c26b0b92;
  uRam000000018334d508 = (uRam000000018334d508 * 0x2414f756a37b9fd5 ^ uRam000000018334d600) + uVar4;
  uRam000000018334d5e8 = uRam000000018334d508 ^ uRam000000018334d600;
  uRam000000018334d618 = 0x7fff;
  uRam000000018334d520 = func_0x00018d1c2ff0(uRam000000018334d5b8 ^ 0xfa74f31df3601ecf);
  uVar4 = uRam000000018334d520 >> 1 | uRam000000018334d520;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam000000018334d520;
  uRam000000018334d640 = (uRam000000018334d640 ^ uVar4) + 0x451c60056200b42a ^ 0x26e204581c4410a6;
  uRam000000018334d680 = (uRam000000018334d680 * -0x6dafc20c9b0cf08f ^ uRam000000018334d640) + uVar4
  ;
  uRam000000018334d6b0 = uRam000000018334d680 ^ uRam000000018334d640;
  uRam000000018334d588 = 0x451c60056200b42a;
  uVar4 = (uRam000000018334d6b8 ^ _UNK_182173e40) + uRam000000018334d678 + 0x98e313600d5568b5;
  uVar5 = (uRam000000018334d678 ^ _UNK_182173e48) + uRam000000018334d6b8 + 0x98e3136089774b90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d6b8 ^ _UNK_182173e40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d678 ^ _UNK_182173e48;
  uRam000000018334d6d8 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334d6b8 + 0x98e3136089774b90) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018334d678 + 0x98e313600d5568b5));
  uVar4 = (uRam000000018334d6d8 ^ 0x98e3136089774b90) << 0x39 |
          (uRam000000018334d6d8 ^ 0x98e3136089774b90) >> 7;
  uRam000000018334d530 = uRam000000018334d530 ^ uVar4 ^ 0x5fff9ee0f193781;
  uRam000000018334d568 = (uRam000000018334d568 * 0x152f6179d3fe0947 ^ uRam000000018334d530) + uVar4;
  uRam000000018334d500 = uRam000000018334d568 ^ uRam000000018334d530;
  uRam000000018334d610 = 0;
  uRam000000018334d570 = func_0x00018d1c2ff0(0x4bff84a6001dc4);
  uRam000000018334d640 = uRam000000018334d6a8 ^ uRam000000018334d570 ^ 0x7fff;
  uRam000000018334d578 = (uRam000000018334d578 ^ uRam000000018334d570) + 0x7fff ^ 0xb08001f514c1025e
  ;
  uRam000000018334d500 =
       (uRam000000018334d500 * -0x75b94738cf743c9f ^ uRam000000018334d578) + uRam000000018334d570;
  uRam000000018334d610 = uRam000000018334d500 ^ uRam000000018334d578;
  uRam000000018334d600 = 0x7fff;
  uVar4 = (~uRam000000018334d558 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam000000018334d598) +
          ((param_4 ^ 0x84222325) & uRam000000018334d598) * 2);
  uVar4 = (uVar4 | uRam000000018334d508) + (uVar4 & uRam000000018334d508);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d5c8 =
       func_0x00018d1c2ff0((param_4 ^ 0x84225cda | uVar4) + (uVar4 & (param_4 ^ 0x84225cda)));
  uVar4 = param_4 * 0x7fff ^ uRam000000018334d5c8;
  uVar4 = uVar4 << 0x15 | uVar4 >> 0x2b;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018334d568 = (ulonglong)uVar2;
  uRam000000018334d648 = (uRam000000018334d648 ^ uVar4) + uRam000000018334d568 ^ 0x71817d9648a85f2a;
  uRam000000018334d540 = (uRam000000018334d540 * 0xd15f20a51b57bd ^ uRam000000018334d648) + uVar4;
  uRam000000018334d550 = uRam000000018334d540 ^ uRam000000018334d648;
  uVar5 = uRam000000018334d568 ^ 0x84222325;
  uVar4 = ((uRam000000018334d540 ^ uVar5) +
          (ulonglong)((uint)uRam000000018334d540 & (uint)uVar5) * 2) *
          (param_3 - uRam000000018334d6c8);
  uVar4 = (uVar4 | uRam000000018334d678) + (uVar4 & uRam000000018334d678);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar5 = uVar5 ^ param_3;
  uRam000000018334d530 =
       func_0x00018d1c2ff0((uVar5 | uVar4) + (ulonglong)((uint)uVar5 & (uint)uVar4));
  uRam000000018334d598 = (ulonglong)(uVar2 ^ param_3);
  uRam000000018334d688 =
       (uRam000000018334d688 ^ uRam000000018334d530 & 0xffffffffff) + uRam000000018334d598 ^
       0x2e44488332ab4a1b;
  uRam000000018334d660 =
       (uRam000000018334d660 * -0x1a328bef04bdc369 ^ uRam000000018334d688) +
       (uRam000000018334d530 & 0xffffffffff);
  uRam000000018334d648 = uRam000000018334d660 ^ uRam000000018334d688;
  uVar4 = (uRam000000018334d6a8 ^ _UNK_182173e50) + uRam000000018334d588 + 0x261896d2;
  uVar5 = (uRam000000018334d588 ^ _UNK_182173e58) + uRam000000018334d6a8 + 0x469bf8c8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d6a8 ^ _UNK_182173e50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d588 ^ _UNK_182173e58;
  uRam000000018334d6c0 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334d6a8 + 0x469bf8c8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334d588 + 0x261896d2));
  uVar4 = uRam000000018334d6c0 << 0x25 | uRam000000018334d6c0 >> 0x1b;
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
  uRam000000018334d500 = (uRam000000018334d500 ^ uVar4) + 0xe6bbfdff ^ 0xa5e069bb7fda4825;
  uRam000000018334d5c8 = (uRam000000018334d5c8 * -0x2c1a78e15fad8dcf ^ uRam000000018334d500) + uVar4
  ;
  uRam000000018334d670 = uRam000000018334d5c8 ^ uRam000000018334d500;
  uRam000000018334d618 = 0xe6bbfdff;
  uVar4 = (~uRam000000018334d5e0 + 0x81c73bfc) *
          ((uRam000000018334d508 ^ 0x5f6f2dfd) +
          (ulonglong)((uint)uRam000000018334d508 & 0x5f6f2dfd) * 2);
  uVar4 = (uVar4 | uRam000000018334d6c0) + (uVar4 & uRam000000018334d6c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d518 =
       func_0x00018d1c2ff0((uVar4 | 0xdea81606) + (ulonglong)((uint)uVar4 & 0xdea81606));
  uRam000000018334d5a0 =
       (uRam000000018334d5a0 ^ uRam000000018334d518 & 0x7fffffffffffffff) + 0x5a8a3523 ^
       0x80e3501d5b413127;
  uRam000000018334d6f0 =
       (uRam000000018334d6f0 * 0x7a58d9e9b0bcdcd1 ^ uRam000000018334d5a0) +
       (uRam000000018334d518 & 0x7fffffffffffffff);
  uRam000000018334d628 = uRam000000018334d6f0 ^ uRam000000018334d5a0;
  uRam000000018334d660 = 0x5a8a3523;
  uRam000000018334d6e0 = func_0x00018d1c2ff0(uRam000000018334d630 + 0x2a002658ff21ff ^ 0x22);
  uRam000000018334d668 =
       (uRam000000018334d668 ^ uRam000000018334d6e0) - 0xe2c07d8a ^ 0xad5eb48e42b56c95;
  uRam000000018334d6f0 =
       (uRam000000018334d6f0 * -0x80bcfbac992e7f3 ^ uRam000000018334d668) + uRam000000018334d6e0;
  uRam000000018334d688 = uRam000000018334d6f0 ^ uRam000000018334d668;
  uRam000000018334d518 = 0x1d3f8276;
  uVar4 = (uRam000000018334d618 ^ _UNK_182173e60) + uRam000000018334d5c8 + 0x84224d9b;
  uVar5 = (uRam000000018334d5c8 ^ _UNK_182173e68) + uRam000000018334d618 + 0xe2c07d8a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d618 ^ _UNK_182173e60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d5c8 ^ _UNK_182173e68;
  uRam000000018334d590 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334d618 + 0xe2c07d8a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334d5c8 + 0x84224d9b));
  uVar4 = uRam000000018334d590 & 0xfffffffffffffc00;
  uRam000000018334d588 = uRam000000018334d670 ^ uVar4 ^ 0xe2c0ec48;
  uRam000000018334d570 = (uRam000000018334d570 ^ uVar4) + 0xe2c0ec48 ^ 0x6f14931e1cc6c388;
  uRam000000018334d5a8 = (uRam000000018334d5a8 * 0x57fbe3eaa4b98ac3 ^ uRam000000018334d570) + uVar4;
  uRam000000018334d6a8 = uRam000000018334d5a8 ^ uRam000000018334d570;
  uRam000000018334d518 = 0xe2c0ec48;
  uRam000000018334d618 = func_0x00018d1c2ff0(uRam000000018334d660 ^ 0xffccffdb1500caf1);
  uVar4 = uRam000000018334d618 ^ 0xe2c0ec48;
  uRam000000018334d5c0 = uRam000000018334d6e8 ^ uVar4 ^ 0x100006ebe;
  uRam000000018334d588 = (uRam000000018334d588 ^ uVar4) + 0x100006ebe ^ 0xd6550d682dc6c2f4;
  uRam000000018334d6e0 = (uRam000000018334d6e0 * -0x1b7aa88edcab917f ^ uRam000000018334d588) + uVar4
  ;
  uRam000000018334d6d8 = uRam000000018334d6e0 ^ uRam000000018334d588;
  uRam000000018334d658 = 0x6ebe;
  uRam000000018334d680 = func_0x00018d1c2ff0(uRam000000018334d5e8 + 0xffb6ff1f04ff63ff ^ 0x7b);
  uVar4 = uRam000000018334d680 ^ 0x2c06d1414580;
  uRam000000018334d540 = uRam000000018334d508 ^ uVar4 ^ 0x65c6a53e;
  uRam000000018334d6e0 = (uRam000000018334d6e0 ^ uVar4) + 0x65c6a53e ^ 0x5395b1518ab9df4d;
  uRam000000018334d608 =
       (uRam000000018334d608 * -0x1fe254485793b287 ^ uRam000000018334d6e0) + uVar4 ^
       uRam000000018334d6e0;
  uRam000000018334d530 = 0x65c6a53e;
  uVar4 = (uRam000000018334d6a8 ^ _UNK_182173e70) + uRam000000018334d568 + 0xe1e4861b;
  uVar5 = (uRam000000018334d568 ^ _UNK_182173e78) + uRam000000018334d6a8 + 0x9a39c980;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d6a8 ^ _UNK_182173e70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d568 ^ _UNK_182173e78;
  uRam000000018334d580 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334d6a8 + 0x9a39c980) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334d568 + 0xe1e4861b));
  uVar4 = uRam000000018334d580 >> 1 | uRam000000018334d580;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uRam000000018334d580 ^ 0x9a39c980 ^
          (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8;
  uRam000000018334d5d8 = uRam000000018334d568 ^ uVar4 ^ 0x100006ebe;
  uRam000000018334d6f8 = (uRam000000018334d6f8 ^ uVar4) + 0x100006ebe ^ 0x4e189a982b8f7e06;
  uRam000000018334d5d0 = (uRam000000018334d5d0 * 0x1f8594a3749b9641 ^ uRam000000018334d6f8) + uVar4;
  uRam000000018334d608 = uRam000000018334d5d0 ^ uRam000000018334d6f8;
  uRam000000018334d5e0 = 0x6ebe;
  uRam000000018334d500 = func_0x00018d1c2ff0(uRam000000018334d508 + 0x3900048d008aff ^ 0xa9);
  uRam000000018334d6e8 =
       (uRam000000018334d6e8 ^ uRam000000018334d500 ^ 0x88d96ab0) - 0x88d96ab0 ^ 0x20cf304aa0d617d0;
  uRam000000018334d6d0 =
       (uRam000000018334d6d0 * -0xc6644745e7389c5 ^ uRam000000018334d6e8) +
       (uRam000000018334d500 ^ 0x88d96ab0);
  uRam000000018334d578 = uRam000000018334d6d0 ^ uRam000000018334d6e8;
  uRam000000018334d580 = 0x77269550;
  uRam000000018334d668 = func_0x00018d1c2ff0(uRam000000018334d638 + 0x1b000428ffe4ff ^ 0x2a);
  uVar4 = (ulonglong)(~(uint)uRam000000018334d668 & 0x6ebe);
  uRam000000018334d550 = uRam000000018334d6f0 ^ uVar4 ^ 0x88d9d96e;
  uRam000000018334d6f8 = (uRam000000018334d6f8 ^ uVar4) + 0x88d9d96e ^ 0xe29d4bd12a422a7a;
  uRam000000018334d6b0 = (uRam000000018334d6b0 * 0x72bb8c66f24f8f3d ^ uRam000000018334d6f8) + uVar4;
  uRam000000018334d5d0 = uRam000000018334d6b0 ^ uRam000000018334d6f8;
  uRam000000018334d6d8 = 0x88d9d96e;
  uVar4 = (uRam000000018334d530 ^ _UNK_182173e80) + uRam000000018334d5a8 + 0xcfbfa4b;
  uVar5 = (uRam000000018334d5a8 ^ _UNK_182173e88) + uRam000000018334d530 + 0x77269550;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d530 ^ _UNK_182173e80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d5a8 ^ _UNK_182173e88;
  uRam000000018334d548 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334d530 + 0x77269550) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334d5a8 + 0xcfbfa4b));
  uVar4 = uRam000000018334d548 * -0x98d1ad83f2ac5f9;
  uRam000000018334d608 = uRam000000018334d688 ^ uVar4 ^ 0x100006ebe;
  uRam000000018334d6b8 = (uRam000000018334d6b8 ^ uVar4) + 0x100006ebe ^ 0xd7f23945397efb22;
  uRam000000018334d660 = (uRam000000018334d660 * 0x6e469fba1100f083 ^ uRam000000018334d6b8) + uVar4;
  uRam000000018334d6c0 = uRam000000018334d660 ^ uRam000000018334d6b8;
  uRam000000018334d648 = 0x6ebe;
  uRam000000018334d680 = func_0x00018d1c2ff0(uRam000000018334d6b8 + 0xff6b0018270012ff ^ 8);
  uRam000000018334d6e8 =
       (uRam000000018334d6e8 ^ uRam000000018334d680 ^ 0xe6bbfdff) + 0xbc31c8dc ^ 0x6734b96cbdd29f10;
  uRam000000018334d548 =
       (uRam000000018334d548 * -0x57da15d35627080f ^ uRam000000018334d6e8) +
       (uRam000000018334d680 ^ 0xe6bbfdff);
  uRam000000018334d690 = uRam000000018334d548 ^ uRam000000018334d6e8;
  uRam000000018334d670 = uRam000000018334d538 ^ 0xbc31c8dc;
  uRam000000018334d5d8 = 0xbc31c8dc;
  uVar4 = (~uRam000000018334d538 + 0x5a8a3524) *
          ((uRam000000018334d548 ^ 0x6299deda) +
          (ulonglong)((uint)uRam000000018334d548 & 0x6299deda) * 2);
  uVar4 = (uVar4 | uRam000000018334d6c0) + (uVar4 & uRam000000018334d6c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d560 =
       func_0x00018d1c2ff0((uVar4 | 0x3813ebf9) + (ulonglong)((uint)uVar4 & 0x3813ebf9));
  uVar4 = uRam000000018334d560 << 0x21 | uRam000000018334d560 >> 0x1f;
  uRam000000018334d5b0 = (uRam000000018334d5b0 ^ uVar4) + 0x428a3523 ^ 0xf4ce77922b32bee6;
  uRam000000018334d6e8 = (uRam000000018334d6e8 * -0x6ea47680e1e9cc49 ^ uRam000000018334d5b0) + uVar4
  ;
  uRam000000018334d680 = uRam000000018334d6e8 ^ uRam000000018334d5b0;
  uRam000000018334d628 = 0x428a3523;
  uVar4 = (~uRam000000018334d508 + 0x41463323) *
          ((uRam000000018334d608 ^ 0xc5641007) +
          (ulonglong)((uint)uRam000000018334d608 & 0xc5641007) * 2);
  uVar4 = (uVar4 | uRam000000018334d508) + (uVar4 & uRam000000018334d508);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d530 =
       func_0x00018d1c2ff0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam000000018334d6f8 = uRam000000018334d530 ^ 0x10a4b93744ce9084;
  uRam000000018334d5c8 = uRam000000018334d5c8 ^ uRam000000018334d6f8 ^ 0xa14dd6dc6559b73a;
  uRam000000018334d600 =
       (uRam000000018334d600 * -0x29bb00a78856c40b ^ uRam000000018334d5c8) + uRam000000018334d6f8;
  uRam000000018334d5e8 = uRam000000018334d600 ^ uRam000000018334d5c8;
  uRam000000018334d6f0 = 0;
  uVar4 = ((uRam000000018334d6c0 ^ 0x84224d9b) +
          (ulonglong)((uint)uRam000000018334d6c0 & 0x84224d9b) * 2) * -uRam000000018334d550;
  uVar4 = (uVar4 | uRam000000018334d6d8) + (uVar4 & uRam000000018334d6d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018334d5d8 =
       func_0x00018d1c2ff0((uVar4 | 0x84224d9b) + (ulonglong)((uint)uVar4 & 0x84224d9b));
  uRam000000018334d5c8 =
       (uRam000000018334d5c8 ^ uRam000000018334d5d8 ^ 0x6ebe) + 0x6ebe ^ 0xc092d25e3a3b7a81;
  uRam000000018334d570 =
       (uRam000000018334d570 * 0x7d44c543879cd9af ^ uRam000000018334d5c8) +
       (uRam000000018334d5d8 ^ 0x6ebe);
  uRam000000018334d6c8 = uRam000000018334d570 ^ uRam000000018334d5c8;
  uRam000000018334d610 = 0x6ebe;
  uVar4 = (uRam000000018334d6a8 ^ _UNK_182173e90) + uRam000000018334d6f0 + 0x6299deda;
  uVar5 = (uRam000000018334d6f0 ^ _UNK_182173e98) + uRam000000018334d6a8 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d6a8 ^ _UNK_182173e90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334d6f0 ^ _UNK_182173e98;
  uRam000000018334d588 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334d6a8 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334d6f0 + 0x6299deda));
  uVar2 = ~(uint)uRam000000018334d588 & 0xe6bbfdff;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          (ulonglong)uVar2;
  uRam000000018334d658 = (uRam000000018334d658 ^ uVar4) + 0x19440200 ^ 0xdb52d929f9b94338;
  uRam000000018334d5b0 = (uRam000000018334d5b0 * 0x6707f391423a0a5b ^ uRam000000018334d658) + uVar4;
  uRam000000018334d6e0 = uRam000000018334d5b0 ^ uRam000000018334d658;
  uRam000000018334d558 = 0x19440200;
  uRam000000018334d638 = func_0x00018d1c2ff0(uRam000000018334d600 ^ 0x2400595a00c20e);
  uVar4 = uRam000000018334d638 & 0x3ffffffffff ^ 0x19440200;
  uRam000000018334d6d8 = uRam000000018334d6d8 ^ uVar4 ^ 0x5d214f6054126ed3;
  uRam000000018334d680 = (uRam000000018334d680 * -0x7e39832c122dbba7 ^ uRam000000018334d6d8) + uVar4
  ;
  uRam000000018334d6f0 = uRam000000018334d680 ^ uRam000000018334d6d8;
  uRam000000018334d580 = 0;
  uVar4 = func_0x00018d1c2ff0(uRam000000018334d668 ^ 0xffb2ff7b770021ed);
  uVar4 = uVar4 ^ 0x6ebe;
  uRam000000018334d538 = uRam000000018334d558 ^ uVar4 ^ 0x6ebe;
  uRam000000018334d6b0 = (uRam000000018334d6b0 ^ uVar4) + 0x6ebe ^ 0xb799bb395089052;
  uRam000000018334d500 = (uRam000000018334d500 * -0x67cb24001492ee05 ^ uRam000000018334d6b0) + uVar4
  ;
  uRam000000018334d6f0 = uRam000000018334d500 ^ uRam000000018334d6b0;
  uRam000000018334d5e8 = uRam000000018334d5e8 ^ 0x6ebe;
  uRam000000018334d600 = 0x6ebe;
  uVar4 = func_0x00018d1c2ff0(uRam000000018334d658 ^ 0x22ff83dd001dee);
  uRam000000018334d5a8 = (uVar4 ^ 0xa2000000) & 0xffffffffffc00000;
  uRam000000018334d648 = uRam000000018334d648 ^ uRam000000018334d5a8 ^ 0x6b77dfa9c77d394d;
  uRam000000018334d5a8 = (uVar4 * 0x6ea961db120e0f9f ^ uRam000000018334d648) + uRam000000018334d5a8;
  uRam000000018334d630 = uRam000000018334d5a8 ^ uRam000000018334d648;
  uRam000000018334d668 = 0;
  uVar4 = (uRam000000018334d608 ^ 0x84224d9b) + uRam000000018334d670 + 0x84224d9b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018334d608 ^ 0x84224d9b;
  uVar5 = ((uRam000000018334d670 + uRam000000018334d608) * 0x2000 |
          uRam000000018334d670 + uRam000000018334d608 >> 0x33) ^ uRam000000018334d670;
  uRam000000018334d620 =
       func_0x00018d1c2ff0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018334d608 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018334d670 + 0x84224d9b));
  uVar4 = uRam000000018334d620 ^ 0x6ebe;
  uRam000000018334d6b0 = uRam000000018334d608 ^ uVar4 ^ 0x6ebe;
  uRam000000018334d5e8 = (uRam000000018334d5e8 ^ uVar4) + 0x6ebe ^ 0xfa7d7a606de6240e;
  uRam000000018334d5a0 = (uRam000000018334d5a0 * -0x30aed53ecf5c2a4d ^ uRam000000018334d5e8) + uVar4
  ;
  uRam000000018334d5d8 = uRam000000018334d5a0 ^ uRam000000018334d5e8;
  uRam000000018334d648 = 0x6ebe;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcf35,0x23a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1ba249 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182171fa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/em; atn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d1c3080, runtime 6ffff4dd3080) =====

void FUN_18d1c3080(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d1c30cb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182173fb0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/em; ato (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d1c4090, runtime 6ffff4dd4090) =====

void FUN_18d1c4090(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1c4119 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182174570 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



