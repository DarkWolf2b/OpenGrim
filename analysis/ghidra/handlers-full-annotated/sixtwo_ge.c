// ===== Lsixtwo/ge; _a98ef9fceb6c88f8af19b70052dc846c ()V (handler @ image 189ecfe80, runtime 6ffff1adfe80) =====

void FUN_189ecfe80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ecff68 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181581380 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZA (Z)V (handler @ image 189efef10, runtime 6ffff1b0ef10) =====

void FUN_189efef10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189efef5a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18158b630 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZB ()Z (handler @ image 189e87230, runtime 6ffff1a97230) =====

void FUN_189e87230(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189e87277 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181573900 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZC ()Z (handler @ image 189e873c0, runtime 6ffff1a973c0) =====

void FUN_189e873c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189e87407 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1815739a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZD (Ljava/lang/Exception;)Ljava/lang/Exception; (handler @ image 189e87560, runtime 6ffff1a97560) =====

undefined8 FUN_189e87560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/ge; aZE ([B)Ljava/lang/String; (handler @ image 189e875f0, runtime 6ffff1a975f0) =====

void FUN_189e875f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000189e87690 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181573bb0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ge; aZF (IJ)Ljava/lang/String; (handler @ image 189eb0a00, runtime 6ffff1ac0a00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189eb0a00(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (~uRam0000000183250c88 + 0xb5367b395ed33e22) *
          ((uRam0000000183250af8 ^ 0x312835148452efc4) +
          (uRam0000000183250af8 & 0x312835148452efc4) * 2);
  uVar5 = (uVar5 | uRam0000000183250960) + (uVar5 & uRam0000000183250960);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250898 =
       func_0x000189eb7540((uVar5 | 0x841e4e2dda81d1e5) + (uVar5 & 0x841e4e2dda81d1e5));
  uVar5 = (uRam0000000183250898 ^ 0xb53e7f3d5ef3fe00) & 0xfffffffffffffe00;
  uRam00000001832507e8 = (uRam00000001832507e8 ^ uVar5) + 0xb53e7f3d5ef3fee1 ^ 0x148aa01718432c2e;
  uRam0000000183250808 = (uRam0000000183250808 * 0x7dc730dce7c77889 ^ uRam00000001832507e8) + uVar5;
  uRam0000000183250908 = uRam0000000183250808 ^ uRam00000001832507e8;
  uRam0000000183250c10 = 0xb53e7f3d5ef3fee1;
  uVar5 = (~uRam0000000183250e38 + 0x817c625b9415e05d) *
          ((uRam0000000183250a70 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183250a70 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183250a40) + (uVar5 & uRam0000000183250a40);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250800 =
       func_0x000189eb7540((uVar5 | 0x817c625b1037c379) + (uVar5 & 0x817c625b1037c379));
  uRam0000000183250e10 =
       (uRam0000000183250e10 ^ uRam0000000183250800 & 0xfffffffffffffc00) + 0x7e839da46bea1fa4 ^
       0xd4399df2563c5310;
  uRam00000001832509d8 =
       (uRam00000001832509d8 * -0x39702b22bc95576f ^ uRam0000000183250e10) +
       (uRam0000000183250800 & 0xfffffffffffffc00);
  uRam00000001832508a0 = uRam00000001832509d8 ^ uRam0000000183250e10;
  uRam0000000183250878 = 0x7e839da46bea1fa4;
  uVar5 = (uRam0000000183250d00 ^ _UNK_18157aa60) + uRam0000000183250d38 + 0x84225cda;
  uVar7 = (uRam0000000183250d38 ^ _UNK_18157aa68) + uRam0000000183250d00 + 0x817c625b9415e05c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183250d00 ^ _UNK_18157aa60;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183250d38 ^ _UNK_18157aa68;
  uRam0000000183250c10 =
       func_0x000189eb7540((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183250d00 + 0x817c625b9415e05c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183250d38 + 0x84225cda));
  uRam0000000183250ce0 = uRam0000000183250a60 ^ uRam0000000183250c10 ^ 0x817c625b9416605b;
  uRam0000000183250d50 =
       (uRam0000000183250d50 ^ uRam0000000183250c10) + 0x817c625b9416605b ^ 0x80c4ec37a1d95b59;
  uRam00000001832509f8 =
       (uRam00000001832509f8 * -0x3dd909669442c7a7 ^ uRam0000000183250d50) + uRam0000000183250c10;
  uRam0000000183250778 = uRam00000001832509f8 ^ uRam0000000183250d50;
  uRam0000000183250940 = 0x817c625b9416605b;
  uVar5 = (~uRam0000000183250b28 + 0x68af368517b62435) *
          ((uRam0000000183250e60 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183250e60 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183250bd0) + (uVar5 & uRam0000000183250bd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250eb0 =
       func_0x000189eb7540((uVar5 | 0x68af368593940711) + (uVar5 & 0x68af368593940711));
  uVar5 = uRam0000000183250eb0 - (uRam0000000183250eb0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183250eb0;
  uVar5 = uVar5 << 0x36 | uVar5 >> 10;
  uRam0000000183250e58 = (uRam0000000183250e58 ^ uVar5) + 0x9750c97ae849dbcc ^ 0xb7722064653f398;
  uRam0000000183250ef0 = (uRam0000000183250ef0 * 0x4fc96d6738a1e07 ^ uRam0000000183250e58) + uVar5;
  uRam00000001832507c0 = uRam0000000183250ef0 ^ uRam0000000183250e58;
  uRam0000000183250b08 = 0x9750c97ae849dbcc;
  uRam0000000183250db0 = func_0x000189eb7540(uRam0000000183250a60 ^ 0x8567a78dea097377);
  uVar5 = (uRam0000000183250db0 ^ 0x32935555fa63dbcc) >> 3;
  uVar5 = uVar5 << 0x3e |
          (((uRam0000000183250db0 ^ 0x32935555fa63dbcc) << 0x3d | uVar5) ^ 0x68af368517b62434) >> 2;
  uRam0000000183250908 = uRam00000001832507b8 ^ uVar5 ^ 0x68af368517b6a433;
  uRam0000000183250e18 = (uRam0000000183250e18 ^ uVar5) + 0x68af368517b6a433 ^ 0x319317993216918;
  uRam0000000183250e90 = (uRam0000000183250e90 * -0x330c2ee6429e705d ^ uRam0000000183250e18) + uVar5
  ;
  uRam00000001832508f8 = uRam0000000183250e90 ^ uRam0000000183250e18;
  uRam0000000183250790 = 0x68af368517b6a433;
  uVar5 = (~uRam0000000183250c00 + 0x9750c97ae849dbcd) *
          ((uRam0000000183250ad8 ^ 0x68af368593948716) +
          (uRam0000000183250ad8 & 0x68af368593948716) * 2);
  uVar5 = (uVar5 | uRam0000000183250a38) + (uVar5 & uRam0000000183250a38);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250c30 =
       func_0x000189eb7540((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = ~uRam0000000183250c30 & 0x1ffffffffffffff;
  uVar7 = uVar5 - (~uRam0000000183250c30 >> 1 & 0x55555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar5;
  uRam0000000183250ef0 = uRam00000001832509a0 ^ uVar5 ^ 0x7fff;
  uRam0000000183250e50 = (uRam0000000183250e50 ^ uVar5) + 0x7fff ^ 0xb101ba1f24fbb613;
  uRam0000000183250b90 = (uRam0000000183250b90 * 0x4794505eb7d6571f ^ uRam0000000183250e50) + uVar5;
  uRam00000001832507b0 = uRam0000000183250b90 ^ uRam0000000183250e50;
  uRam0000000183250ba0 = 0x7fff;
  uRam0000000183250970 = func_0x000189eb7540(lRam0000000183250888 + 0x102117a09876ceffU ^ 0x77);
  uVar5 = uRam0000000183250970 >> 1 | uRam0000000183250970;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam0000000183250970) & 0x7fffffffffffff;
  uRam0000000183250ad0 = uRam00000001832507f0 ^ uVar5 ^ 0x6a94886a98f63b5d;
  uRam0000000183250aa8 = (uRam0000000183250aa8 ^ uVar5) + 0x6a94886a98f63b5d ^ 0x8a50188f5a429419;
  uRam00000001832507e8 = (uRam00000001832507e8 * -0x7990207069e2cb27 ^ uRam0000000183250aa8) + uVar5
  ;
  uRam0000000183250e28 = uRam00000001832507e8 ^ uRam0000000183250aa8;
  uRam0000000183250a88 = 0x6a94886a98f63b5d;
  uRam0000000183250c38 = func_0x000189eb7540(uRam0000000183250ec0 ^ 0xefa098df67d152d2);
  uRam0000000183250b28 =
       (uRam0000000183250b28 ^ uRam0000000183250c38 & 0xffffffffe0000000) + 0x68761064f1c29d ^
       0xf8f371ae913efc0;
  uRam00000001832509b8 =
       (uRam00000001832509b8 * 0x2f4aeaee72c67b77 ^ uRam0000000183250b28) +
       (uRam0000000183250c38 & 0xffffffffe0000000);
  uRam0000000183250ad8 = uRam00000001832509b8 ^ uRam0000000183250b28;
  uRam0000000183250ca8 = 0x68761064f1c29d;
  uRam0000000183250808 = func_0x000189eb7540(uRam0000000183250bd8 ^ 0xefe1571f47ea5047);
  uRam0000000183250b08 =
       (uRam0000000183250b08 ^ uRam0000000183250eb8) + 0xb516092d1a023c60 ^ 0x6630009bd18316cf;
  uRam0000000183250960 =
       (uRam0000000183250960 * 0x3d8faca4b0dfd2d ^ uRam0000000183250b08) + uRam0000000183250eb8;
  uRam0000000183250758 = uRam0000000183250960 ^ uRam0000000183250b08;
  uRam00000001832509d8 = 0xb516092d1a023c60;
  uRam00000001832508f0 = func_0x000189eb7540(uRam0000000183250758 + 0xc577442c479b2b69 ^ 0x89);
  uVar5 = (uRam00000001832508f0 ^ 0x6a6c765a74f5f000) & 0xfffffffffffff000;
  uRam0000000183250ab0 = uRam0000000183250ac8 ^ uVar5 ^ 0x6a94886a98f63b5d;
  uRam00000001832508b0 = (uRam00000001832508b0 ^ uVar5) + 0x6a94886a98f63b5d ^ 0x98cb17bf77626746;
  uRam0000000183250ed8 = (uRam0000000183250ed8 * 0x3a6eb3d0486058dd ^ uRam00000001832508b0) + uVar5;
  uRam0000000183250d48 = uRam0000000183250ed8 ^ uRam00000001832508b0;
  uRam0000000183250e98 = 0x6a94886a98f63b5d;
  uVar5 = (~uRam0000000183250b20 + 0x6a94886a98f63b5e) *
          ((uRam0000000183250bf0 ^ 0x6a94886a1cd41878) +
          (uRam0000000183250bf0 & 0x6a94886a1cd41878) * 2);
  uVar5 = (uVar5 | uRam00000001832509a0) + (uVar5 & uRam00000001832509a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250bd8 =
       func_0x000189eb7540((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = uRam0000000183250bd8 >> 0xd ^ 0x354a44354c7b1;
  uRam00000001832508a8 = uVar5 * 0x2000;
  uVar5 = uRam00000001832508a8 + (uVar5 & 0x5555555555555) * -0x1000;
  uVar5 = (uVar5 & 0x3333333333333000) + (uVar5 >> 2 & 0x3333333333333000);
  uRam00000001832508a8 =
       (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0700) * 0x101010101010101 >> 0x38) << 5 |
       uRam00000001832508a8;
  uRam0000000183250c80 = uRam0000000183250c80 ^ uRam00000001832508a8 ^ 0x469f0e7ea731a21c;
  uRam0000000183250db0 =
       (uRam0000000183250db0 * 0x22829785f8fa202f ^ uRam0000000183250c80) + uRam00000001832508a8;
  uRam0000000183250d08 = uRam0000000183250db0 ^ uRam0000000183250c80;
  uRam0000000183250a18 = 0;
  uVar5 = (uRam0000000183250748 ^ _UNK_18157aa70) + uRam0000000183250860 + 0xb53e7f3ddad1ddc4;
  uVar7 = (uRam0000000183250860 ^ _UNK_18157aa78) + (uRam0000000183250748 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183250748 ^ _UNK_18157aa70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183250860 ^ _UNK_18157aa78;
  uRam0000000183250b20 =
       func_0x000189eb7540((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183250748 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183250860 + 0xb53e7f3ddad1ddc4));
  uRam0000000183250ec0 =
       (uRam0000000183250ec0 ^ uRam0000000183250b20 ^ 0x4ac180c2a10c011e) + 0x4ac180c2a10c011e ^
       0x28e0385d40598ce9;
  uRam0000000183250da8 =
       (uRam0000000183250da8 * 0x730ad77c6bea5faf ^ uRam0000000183250ec0) +
       (uRam0000000183250b20 ^ 0x4ac180c2a10c011e);
  uRam0000000183250e10 = uRam0000000183250da8 ^ uRam0000000183250ec0;
  uRam0000000183250d80 = 0x4ac180c2a10c011e;
  uRam0000000183250930 = func_0x000189eb7540(uRam0000000183250cf8 ^ 0xae3c428a2521d2dc);
  uVar5 = (uRam0000000183250930 ^ 0x3162b3cd8822bf5e) & 0x7fffffffffffffff;
  uRam0000000183250970 = uRam0000000183250970 ^ uVar5 ^ 0x5335ddb69076c549;
  uRam0000000183250b20 = (uRam0000000183250b20 * -0x675504130d21db11 ^ uRam0000000183250970) + uVar5
  ;
  uRam0000000183250a08 = uRam0000000183250b20 ^ uRam0000000183250970;
  uRam0000000183250bd8 = 0;
  uVar5 = ((uRam0000000183250dd0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183250dd0 & 0x84225cda) * 2) * -lRam0000000183250a48;
  uVar5 = (uVar5 | uRam0000000183250780) + (uVar5 & uRam0000000183250780);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250700 =
       func_0x000189eb7540((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam0000000183250700 ^ 0x7fff;
  uRam0000000183250bb8 = uRam0000000183250e40 ^ uVar5 ^ 0x7fff;
  uRam0000000183250778 = (uRam0000000183250778 ^ uVar5) + 0x7fff ^ 0xfb3f7629cacf8047;
  uRam0000000183250708 = (uRam0000000183250708 * 0x74474da6190894bb ^ uRam0000000183250778) + uVar5;
  uRam0000000183250c50 = uRam0000000183250708 ^ uRam0000000183250778;
  uRam0000000183250a30 = 0x7fff;
  uVar5 = (~uRam0000000183250798 + 0x312835140070cce2) *
          ((uRam0000000183250ce8 ^ 0x312835148452efc4) +
          (uRam0000000183250ce8 & 0x312835148452efc4) * 2);
  uVar5 = (uVar5 | uRam0000000183250780) + (uVar5 & uRam0000000183250780);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250af8 =
       func_0x000189eb7540((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam0000000183250ca8 =
       uRam0000000183250ca8 ^ uRam0000000183250af8 & 0xfffffffffc000000 ^ 0x6c7370cd017500a8;
  uRam0000000183250cf8 =
       (uRam0000000183250cf8 * 0x6668bb3ad149f7c3 ^ uRam0000000183250ca8) +
       (uRam0000000183250af8 & 0xfffffffffc000000);
  uRam0000000183250d58 = uRam0000000183250cf8 ^ uRam0000000183250ca8;
  uRam0000000183250b10 = 0;
  uVar5 = ((uRam0000000183250bf0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183250bf0 & 0x84225cda) * 2) * -uRam0000000183250ad0;
  uVar5 = (uVar5 | uRam0000000183250a80) + (uVar5 & uRam0000000183250a80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250cf8 =
       func_0x000189eb7540((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam0000000183250cf8 ^ 0x7fff;
  uRam0000000183250788 = uRam0000000183250e10 ^ uVar5 ^ 0x7fff;
  uRam0000000183250de8 = (uRam0000000183250de8 ^ uVar5) + 0x7fff ^ 0x35622eb68f81e297;
  uRam0000000183250d68 = (uRam0000000183250d68 * -0x42403d76b6651e63 ^ uRam0000000183250de8) + uVar5
  ;
  uRam00000001832508a8 = uRam0000000183250d68 ^ uRam0000000183250de8;
  uRam0000000183250ae8 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam0000000183250ab8;
  lVar6 = (param_4 ^ 0x84222325) + uRam0000000183250e88;
  uVar7 = uVar5 + lVar6;
  uVar8 = (uRam0000000183250e88 ^ 0x7fff) + uRam0000000183250ab8 + 0x7fff;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183250e88 ^ 0x7fff;
  uRam0000000183250c48 =
       func_0x000189eb7540((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183250ab8 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar7 = uRam0000000183250c48 << 0x38 | uRam0000000183250c48 >> 8;
  uVar4 = (uint)param_4 & 0x7fff;
  uVar5 = (ulonglong)uVar4;
  uRam0000000183250b98 = (uRam0000000183250b98 ^ uVar7) + uVar5 ^ 0xd5e9ee7039df879;
  uRam0000000183250b68 = (uRam0000000183250b68 * -0x3c42b25b4ab64ced ^ uRam0000000183250b98) + uVar7
  ;
  uRam0000000183250d68 = uRam0000000183250b68 ^ uRam0000000183250b98;
  uVar8 = uVar5 ^ 0x84222325;
  uVar7 = ((uRam0000000183250d88 ^ uVar8) +
          (ulonglong)((uint)uRam0000000183250d88 & (uint)uVar8) * 2) *
          (param_3 - uRam0000000183250ba0);
  uVar7 = (uVar7 | uRam0000000183250ad0) + (uVar7 & uRam0000000183250ad0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar8 = uVar8 ^ param_3;
  uRam0000000183250a70 = uVar5;
  uRam0000000183250d88 =
       func_0x000189eb7540((uVar8 | uVar7) + (ulonglong)((uint)uVar8 & (uint)uVar7));
  uVar5 = uVar5 ^ (uVar4 | param_3) ^ uRam0000000183250d88;
  uVar5 = uVar5 << 0x12 | (uVar5 & 0x7fffffffffffffff) >> 0x2e;
  uVar8 = (ulonglong)(uVar4 ^ param_3);
  uRam0000000183250768 = (uRam0000000183250768 ^ uVar5) + uVar8 ^ 0xdef60c2a7e731472;
  uRam0000000183250790 = (uRam0000000183250790 * 0x202203806cd3f41 ^ uRam0000000183250768) + uVar5;
  uRam0000000183250ad8 = uRam0000000183250790 ^ uRam0000000183250768;
  uVar5 = (~uRam00000001832507b8 + 0xe1d68553) *
          ((uRam0000000183250a88 ^ 0x811d088) +
          (ulonglong)((uint)uRam0000000183250a88 & 0x811d088) * 2);
  uVar5 = (uVar5 | uRam0000000183250968) + (uVar5 & uRam0000000183250968);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250740 = uVar8;
  uRam0000000183250c90 =
       func_0x000189eb7540((uVar5 | 0xe9c755da) + (ulonglong)((uint)uVar5 & 0xe9c755da));
  uRam0000000183250ea0 =
       (uRam0000000183250ea0 ^ uRam0000000183250c90) + 0x6de576ff ^ 0x469fadc1c0a39d42;
  uRam0000000183250a20 =
       (uRam0000000183250a20 * -0x4ac4c907af5a62ef ^ uRam0000000183250ea0) + uRam0000000183250c90;
  uRam00000001832508e0 = uRam0000000183250a20 ^ uRam0000000183250ea0;
  uRam0000000183250ad8 = 0x6de576ff;
  uRam0000000183250978 = func_0x000189eb7540(uRam00000001832508f8 + 0xff9fff9b03ff51ff ^ 0x7b);
  uVar5 = (uRam0000000183250978 ^ 0x8713f17788a) & 0x7fffffffffffffff;
  uRam0000000183250b40 = uRam0000000183250e78 ^ uVar5 ^ 0x21f4fc2d;
  uRam0000000183250e60 = (uRam0000000183250e60 ^ uVar5) + 0x21f4fc2d ^ 0x86c118ca3ebd4ad5;
  uRam0000000183250a10 = (uRam0000000183250a10 * -0x307e0cf275586dbf ^ uRam0000000183250e60) + uVar5
  ;
  uRam0000000183250d18 = uRam0000000183250a10 ^ uRam0000000183250e60;
  uRam00000001832509f0 = 0x21f4fc2d;
  uVar5 = (~uRam0000000183250b78 + 0xde0b437a) *
          ((uRam0000000183250738 ^ 0xa5d6df08) +
          (ulonglong)((uint)uRam0000000183250738 & 0xa5d6df08) * 2);
  uVar5 = (uVar5 | uRam0000000183250a00) + (uVar5 & uRam0000000183250a00);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250d40 =
       func_0x000189eb7540((uVar5 | 0x7bdd9c71) + (ulonglong)((uint)uVar5 & 0x7bdd9c71));
  uVar5 = uRam0000000183250d40 & 0x7ffffffffff ^ 0xffffbf54;
  uRam0000000183250d20 = uRam0000000183250b00 ^ uVar5 ^ 0x100003fa6;
  uRam0000000183250b78 = (uRam0000000183250b78 ^ uVar5) + 0x100003fa6 ^ 0x417fce72d6e649ca;
  uRam0000000183250740 = (uRam0000000183250740 * 0x61d47c23654a05d ^ uRam0000000183250b78) + uVar5;
  uRam0000000183250a68 = uRam0000000183250740 ^ uRam0000000183250b78;
  uRam0000000183250e48 = 0x3fa6;
  uVar5 = (~uRam0000000183250a18 + 0xf1a5e32) *
          ((uRam0000000183250850 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183250850 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183250a60) + (uVar5 & uRam0000000183250a60);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832507f8 =
       func_0x000189eb7540((uVar5 | 0x8b387d14) + (ulonglong)((uint)uVar5 & 0x8b387d14));
  uRam0000000183250e20 =
       (uRam0000000183250e20 ^ uRam00000001832507f8) - 0xf1a5e31 ^ 0xc89c395155e70be2;
  uRam0000000183250ae8 =
       (uRam0000000183250ae8 * 0x5006a267be9cb6b3 ^ uRam0000000183250e20) + uRam00000001832507f8;
  uRam0000000183250e08 = uRam0000000183250ae8 ^ uRam0000000183250e20;
  uRam0000000183250980 = 0xf0e5a1cf;
  uVar5 = (~uRam00000001832508e0 + 0xf1a5e32) *
          ((uRam0000000183250818 ^ 0x84221c83) +
          (ulonglong)((uint)uRam0000000183250818 & 0x84221c83) * 2);
  uVar5 = (uVar5 | uRam00000001832507c8) + (uVar5 & uRam00000001832507c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250880 =
       func_0x000189eb7540((uVar5 | 0x8b3842b2) + (ulonglong)((uint)uVar5 & 0x8b3842b2));
  uVar5 = (uRam0000000183250880 ^ 0xf1a7fb7) & 0x7fffffffffffffff ^ 0xf1a5e31;
  uRam0000000183250c40 = uRam0000000183250b18 ^ uVar5 ^ 0xf1a9dd7;
  uRam0000000183250c48 = (uRam0000000183250c48 ^ uVar5) + 0xf1a9dd7 ^ 0xdbac9bec715497dd;
  uRam0000000183250c30 = (uRam0000000183250c30 * -0x203ba19e9aa1baad ^ uRam0000000183250c48) + uVar5
  ;
  uRam00000001832508b8 = uRam0000000183250c30 ^ uRam0000000183250c48;
  uRam0000000183250e58 = 0xf1a9dd7;
  uVar5 = (~uRam0000000183250a28 + 0xfa53a7d7) *
          ((uRam0000000183250ab0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183250ab0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183250e90) + (uVar5 & uRam0000000183250e90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832507d0 =
       func_0x000189eb7540((uVar5 | 0x7e7184f3) + (ulonglong)((uint)uVar5 & 0x7e7184f3));
  uVar5 = (uRam00000001832507d0 ^ 0xe0000000) & 0xffffffffe0000000;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = uVar5 ^ 0xfa53a7d6 ^
          0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uRam0000000183250e40 = (uRam0000000183250e40 ^ uVar5) - 0xfa53a7d6 ^ 0x4a83313472664ade;
  uRam0000000183250948 = (uRam0000000183250948 * -0x37ca6adbd2c428e1 ^ uRam0000000183250e40) + uVar5
  ;
  uRam00000001832508d8 = uRam0000000183250948 ^ uRam0000000183250e40;
  uRam0000000183250d28 = 0x5ac582a;
  uVar5 = (~uRam0000000183250d20 + 0xfa53a7d7) *
          ((uRam00000001832507d8 ^ 0x84221c83) +
          (ulonglong)((uint)uRam00000001832507d8 & 0x84221c83) * 2);
  uVar5 = (uVar5 | uRam0000000183250740) + (uVar5 & uRam0000000183250740);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250dc0 =
       func_0x000189eb7540((uVar5 | 0x7e71bb55) + (ulonglong)((uint)uVar5 & 0x7e71bb55));
  uVar5 = uRam0000000183250dc0 & 0xfffffffff;
  uRam0000000183250eb8 = uRam0000000183250c80 ^ uVar5 ^ 0xfa53e77c;
  uRam0000000183250e90 = (uRam0000000183250e90 ^ uVar5) + 0xfa53e77c ^ 0xdb5c713ef9b70d39;
  uRam0000000183250db0 = (uRam0000000183250db0 * -0xaefacfefdd15d5b ^ uRam0000000183250e90) + uVar5;
  uRam0000000183250ba0 = uRam0000000183250db0 ^ uRam0000000183250e90;
  lRam0000000183250888 = 0xfa53e77c;
  uRam0000000183250710 = func_0x000189eb7540(uRam0000000183250870 ^ 0x59ff530300273c);
  uVar5 = (uRam0000000183250710 ^ 0x1a14134eb9000000) & 0xffffffffff000000;
  uRam00000001832509b0 = uRam00000001832507e0 ^ uVar5 ^ 0xaaa52ade;
  uRam0000000183250db8 = (uRam0000000183250db8 ^ uVar5) + 0xaaa52ade ^ 0x74fbf01126244e4e;
  uRam00000001832509d0 = (uRam00000001832509d0 * 0x2dbf3c6c1535de85 ^ uRam0000000183250db8) + uVar5;
  uRam00000001832509e0 = uRam00000001832509d0 ^ uRam0000000183250db8;
  uRam00000001832509f8 = 0xaaa52ade;
  uVar5 = (~uRam0000000183250a10 + 0x6de57700) *
          ((uRam0000000183250d48 ^ 0xb89d90fa) +
          (ulonglong)((uint)uRam0000000183250d48 & 0xb89d90fa) * 2);
  uVar5 = (uVar5 | uRam0000000183250800) + (uVar5 & uRam0000000183250800);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250b88 =
       func_0x000189eb7540((uVar5 | 0xd578e605) + (ulonglong)((uint)uVar5 & 0xd578e605));
  uVar5 = uRam0000000183250b88 << 0x2d | uRam0000000183250b88 >> 0x13;
  uRam00000001832508c8 = (uRam00000001832508c8 ^ uVar5) + 0x515ac520 ^ 0xca6458cd1f981ee4;
  uRam0000000183250908 = (uRam0000000183250908 * 0x61dc8be55b20807d ^ uRam00000001832508c8) + uVar5;
  uRam0000000183250cf8 = uRam0000000183250908 ^ uRam00000001832508c8;
  uRam0000000183250c08 = 0x515ac520;
  uVar5 = (~uRam00000001832508f8 + 0x594a65bf) *
          ((uRam0000000183250880 ^ 0xd578e605) +
          (ulonglong)((uint)uRam0000000183250880 & 0xd578e605) * 2);
  uVar5 = (uVar5 | uRam0000000183250858) + (uVar5 & uRam0000000183250858);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250cd0 =
       func_0x000189eb7540((uVar5 | 0x8c3283bb) + (ulonglong)((uint)uVar5 & 0x8c3283bb));
  uVar7 = uRam0000000183250cd0 ^ 0x1c60331a4c63edc0;
  uVar5 = uVar7 >> 1 | uVar7;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar7) & 0x7fffffffffffffff;
  uRam0000000183250e88 = uRam0000000183250d00 ^ uVar5 ^ 0xaaa52ade;
  uRam0000000183250700 = (uRam0000000183250700 ^ uVar5) + 0xaaa52ade ^ 0x655d1c018d4d8ad7;
  uRam0000000183250cf8 = (uRam0000000183250cf8 * -0x331c8829a54c2b8f ^ uRam0000000183250700) + uVar5
  ;
  uRam00000001832509b8 = uRam0000000183250cf8 ^ uRam0000000183250700;
  uRam0000000183250ea0 = 0xaaa52ade;
  uRam0000000183250e50 = func_0x000189eb7540(lRam0000000183250b38 + 0xffebff837f0021ffU ^ 0xef);
  uVar5 = uRam0000000183250e50 ^ 0x3fa6;
  uRam0000000183250aa0 = uRam00000001832508e8 ^ uVar5 ^ 0x3fa6;
  uRam0000000183250a40 = (uRam0000000183250a40 ^ uVar5) + 0x3fa6 ^ 0xd09b3ad5a7f81d1;
  uRam0000000183250a60 = (uRam0000000183250a60 * 0x2b03a8da4206cfcf ^ uRam0000000183250a40) + uVar5;
  uRam00000001832508b8 = uRam0000000183250a60 ^ uRam0000000183250a40;
  uRam0000000183250c40 = 0x3fa6;
  uRam0000000183250bc0 = func_0x000189eb7540(uRam0000000183250bd8 + 0x4007c82ffe1ff ^ 0x37);
  uVar3 = (uint)uRam0000000183250bc0 & 0x3fa6;
  uVar5 = (ulonglong)uVar3 - (ulonglong)((uint)(uRam0000000183250bc0 >> 1) & 0x1551);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          ((uint)((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5) ^
          uVar3);
  uRam0000000183250780 = uRam0000000183250718 ^ uVar5 ^ 0x3fa6;
  uRam0000000183250c70 = (uRam0000000183250c70 ^ uVar5) + 0x3fa6 ^ 0x7e233f83a679bac8;
  uRam0000000183250d00 =
       (uRam00000001832509f0 * -0x4d5d710be5e5cb09 ^ uRam0000000183250c70) + uVar5 ^
       uRam0000000183250c70;
  uRam00000001832509f0 = uRam0000000183250990 ^ 0x3fa6;
  uRam0000000183250ce8 = 0x3fa6;
  uVar5 = (~uRam00000001832509b0 + 0x14af92d0) *
          ((uRam0000000183250d78 ^ 0x908db1ea) +
          (ulonglong)((uint)uRam0000000183250d78 & 0x908db1ea) * 2);
  uVar5 = (uVar5 | uRam0000000183250db8) + (uVar5 & uRam0000000183250db8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250d90 =
       func_0x000189eb7540((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam00000001832509c0 = uRam00000001832509c0 ^ uRam0000000183250710 ^ 0x32b05bf5ed4fc3fc;
  uRam0000000183250b08 =
       (uRam0000000183250b08 * -0x125ae897142a89a9 ^ uRam00000001832509c0) + uRam0000000183250710;
  uRam0000000183250c20 = uRam0000000183250b08 ^ uRam00000001832509c0;
  uRam0000000183250bc8 = 0;
  uVar5 = ((uRam0000000183250dd0 ^ 0x84221c83) +
          (ulonglong)((uint)uRam0000000183250dd0 & 0x84221c83) * 2) * -uRam0000000183250ad0;
  uVar5 = (uVar5 | uRam0000000183250e28) + (uVar5 & uRam0000000183250e28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183250c88 =
       func_0x000189eb7540((uVar5 | 0x84221c83) + (ulonglong)((uint)uVar5 & 0x84221c83));
  uVar5 = uRam0000000183250c88 - (uRam0000000183250c88 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~((uint)uRam0000000183250c88 ^
            (uint)((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7)) &
          0x3fa6);
  uRam0000000183250cf0 = uRam0000000183250e58 ^ uVar5 ^ 0x3fa6;
  uRam0000000183250968 = (uRam0000000183250968 ^ uVar5) + 0x3fa6 ^ 0x24da06ba2bf8a86e;
  uRam0000000183250ea8 = (uRam0000000183250ea8 * -0x5f4f949d56825f93 ^ uRam0000000183250968) + uVar5
  ;
  uRam0000000183250918 = uRam0000000183250ea8 ^ uRam0000000183250968;
  uRam0000000183250900 = 0x3fa6;
  uVar5 = uVar8 ^ 0x84222325 ^ uRam0000000183250ef0;
  lVar6 = (uVar8 ^ 0x84222325) + uRam0000000183250c78;
  uVar7 = uVar5 + lVar6;
  uVar9 = (uRam0000000183250c78 ^ 0x3fa6) + uRam0000000183250ef0 + 0x3fa6;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183250c78 ^ 0x3fa6;
  uRam0000000183250a60 =
       func_0x000189eb7540((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183250ef0 + 0x3fa6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar5 = uRam0000000183250a60 - (uRam0000000183250a60 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (~(ulonglong)((uint)uRam0000000183250a60 ^ (uint)bVar1 + (uint)bVar1) & uVar8) *
          -0x672c0db88452932b;
  lVar6 = uVar8 - ((uVar4 ^ param_3) & 0x3fa6) * 2;
  uRam0000000183250ef0 = (uRam0000000183250ef0 ^ uVar5) + lVar6 + 0x3fa6 ^ 0x832b12ac92fadd5b;
  uRam00000001832509a8 = (uRam00000001832509a8 * 0x642e5926e1d45da1 ^ uRam0000000183250ef0) + uVar5;
  uRam0000000183250ca8 = uRam00000001832509a8 ^ uRam0000000183250ef0;
  uRam0000000183250768 = lVar6 + 0x3fa6U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189eb2c4e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1815790d8 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 189eb75d0, runtime 6ffff1ac75d0) =====

void FUN_189eb75d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000189eb760c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18157abf0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ge; aZH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 189eb84c0, runtime 6ffff1ac84c0) =====

void FUN_189eb84c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189eb853d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18157b130 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZI (IJ)I (handler @ image 189ebaf80, runtime 6ffff1acaf80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189ebaf80(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (uRam00000001832513f8 ^ _UNK_18157de90) + uRam0000000183251418 + 0xd1e8922089f946bf;
  uVar3 = (uRam0000000183251418 ^ _UNK_18157de98) + uRam00000001832513f8 + 0x9c49ca4c80ee25a5;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832513f8 ^ _UNK_18157de90;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183251418 ^ _UNK_18157de98;
  uRam0000000183250f00 =
       func_0x000189ec6780((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832513f8 + 0x9c49ca4c80ee25a5) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183251418 + 0xd1e8922089f946bf));
  uVar2 = ~(~uRam0000000183250f00 & 0x51e892200ddb659a) & 0xd1e892200ddb659a;
  uRam00000001832511f0 = (uRam00000001832511f0 ^ uVar2) + 0xdde9da6c8dff65bf ^ 0x21cb69f2f7fcd848;
  uRam00000001832514e0 = (uRam00000001832514e0 * 0x199cae2f337322f7 ^ uRam00000001832511f0) + uVar2;
  uRam00000001832512a0 = uRam00000001832514e0 ^ uRam00000001832511f0;
  uRam00000001832515b0 = 0xdde9da6c8dff65bf;
  uVar2 = (~uRam00000001832516b0 + 0xd47f7fb1c060bb7a) *
          ((uRam00000001832510a8 ^ 0x5d23c6490e516f68) +
          (uRam00000001832510a8 & 0x5d23c6490e516f68) * 2);
  uVar2 = (uVar2 | uRam0000000183250fa0) + (uVar2 & uRam0000000183250fa0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183251130 =
       func_0x000189ec6780((uVar2 | 0x895cb9f8ce31d411) + (uVar2 & 0x895cb9f8ce31d411));
  uVar2 = uRam0000000183251130 & 0xffffffff80000000 ^ 0xd47f7fb1c060bb79;
  uRam0000000183250f68 = (uRam0000000183250f68 ^ uVar2) + 0x895cb9f84a13f734 ^ 0x4601e1b4fe31d6a4;
  uRam0000000183250f80 = (uRam0000000183250f80 * 0x6b6352503ae0205d ^ uRam0000000183250f68) + uVar2;
  uRam00000001832512b0 = uRam0000000183250f80 ^ uRam0000000183250f68;
  uRam00000001832512c8 = 0x895cb9f84a13f734;
  uVar2 = (~uRam0000000183251130 + 0xae7d2375d4948db1) *
          ((uRam0000000183251658 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183251658 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam0000000183251338) + (uVar2 & uRam0000000183251338);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183251118 =
       func_0x000189ec6780((uVar2 | 0xae7d237550b6ae95) + (uVar2 & 0xae7d237550b6ae95));
  uVar2 = uRam0000000183251118 >> 1 | uRam0000000183251118;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183251118;
  uRam0000000183251608 = (uRam0000000183251608 ^ uVar2) + 0x5182dc8a2b6b7250 ^ 0xa90513da8bdad7c;
  uRam0000000183250f40 = (uRam0000000183250f40 * -0x5721edf97ef98643 ^ uRam0000000183251608) + uVar2
  ;
  uRam0000000183251320 = uRam0000000183250f40 ^ uRam0000000183251608;
  uRam0000000183251190 = 0x5182dc8a2b6b7250;
  uRam0000000183251080 = func_0x000189ec6780(lRam00000001832514c0 + 0xacaf6b2f99dfaa65U ^ 0x91);
  uVar2 = uRam0000000183251080 >> 1 | uRam0000000183251080;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uRam0000000183251080) & 0x7fffffffffffffff;
  uRam0000000183251020 = uRam00000001832514f8 ^ uVar2 ^ 0xae7d2375d4950daf;
  uRam0000000183251648 = (uRam0000000183251648 ^ uVar2) + 0xae7d2375d4950daf ^ 0x3f69869a12764c0;
  uRam00000001832513c0 = (uRam00000001832513c0 * -0x3f89b40fab94342d ^ uRam0000000183251648) + uVar2
  ;
  uRam0000000183251628 = uRam00000001832513c0 ^ uRam0000000183251648;
  uRam0000000183250f58 = 0xae7d2375d4950daf;
  uRam0000000183250fd8 = func_0x000189ec6780(uRam0000000183251310 ^ 0xc8d45ad625425bef);
  uVar2 = uRam0000000183250fd8 & 0xfffffffffffffffe;
  uRam00000001832515c8 = uRam00000001832514d0 ^ uVar2 ^ 0x7fff;
  uRam0000000183250fa8 = (uRam0000000183250fa8 ^ uVar2) + 0x7fff ^ 0x95ad7145cafcfa4a;
  uRam00000001832514d0 = (uRam00000001832514d0 * -0x69c5c84822ac36d9 ^ uRam0000000183250fa8) + uVar2
  ;
  uRam0000000183251058 = uRam00000001832514d0 ^ uRam0000000183250fa8;
  uRam0000000183250f00 = 0x7fff;
  uVar2 = (~uRam0000000183250f50 + 0x30c264320912bc14) *
          ((uRam0000000183251448 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183251448 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam00000001832512f0) + (uVar2 & uRam00000001832512f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183250f50 =
       func_0x000189ec6780((uVar2 | 0x30c264328d309f36) + (uVar2 & 0x30c264328d309f36));
  uVar2 = uRam0000000183250f50 >> 1 | uRam0000000183250f50;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183250f50;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  uRam00000001832514f8 = (uRam00000001832514f8 ^ uVar3) + 0xcf3d9bcdf6ed43ed ^ 0x9e0c52b6b8365f80;
  uRam0000000183251540 = (uRam0000000183251540 * -0x18468bdfce86c58f ^ uRam00000001832514f8) + uVar3
  ;
  uRam00000001832510d0 = uRam0000000183251540 ^ uRam00000001832514f8;
  uRam00000001832512a8 = 0xcf3d9bcdf6ed43ed;
  uVar2 = (uRam00000001832510c0 ^ _UNK_18157dea0) + uRam0000000183251468 + 0x84225cda;
  uVar3 = (uRam0000000183251468 ^ _UNK_18157dea8) + uRam00000001832510c0 + 0x30c264320912bc13;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832510c0 ^ _UNK_18157dea0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183251468 ^ _UNK_18157dea8;
  uRam00000001832515d0 =
       func_0x000189ec6780((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832510c0 + 0x30c264320912bc13) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183251468 + 0x84225cda));
  uVar3 = uRam00000001832515d0 ^ 0x156a05754f6c3ed;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar3 ^
          0x7fff;
  uRam00000001832511a8 = uRam0000000183251270 ^ uVar2 ^ 0x30c2643209133c12;
  uRam0000000183251118 = (uRam0000000183251118 ^ uVar2) + 0x30c2643209133c12 ^ 0x929c1c787c73b783;
  uRam0000000183251128 = (uRam0000000183251128 * 0x3ac32620441dafcf ^ uRam0000000183251118) + uVar2;
  uRam0000000183251688 = uRam0000000183251128 ^ uRam0000000183251118;
  uRam0000000183251630 = 0x30c2643209133c12;
  uVar2 = (uRam00000001832512b8 ^ _UNK_18157deb0) + uRam00000001832513c8 + 0x30c264328d311f37;
  uVar3 = (uRam00000001832513c8 ^ _UNK_18157deb8) + uRam00000001832512b8 + 0xcf3d9bcdf6ed43ed;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832512b8 ^ _UNK_18157deb0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832513c8 ^ _UNK_18157deb8;
  uRam0000000183251158 =
       func_0x000189ec6780((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832512b8 + 0xcf3d9bcdf6ed43ed) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001832513c8 + 0x30c264328d311f37));
  uVar3 = (uRam0000000183251158 ^ 0x1080401201022c10) & 0x30c2643209133c12;
  uVar2 = uVar3 - ((uRam0000000183251158 ^ 0x1080401201022c10) >> 1 & 0x1041101104011401);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3;
  uRam0000000183251528 = uRam0000000183251430 ^ uVar3 ^ 0x7fff;
  uRam0000000183251340 = (uRam0000000183251340 ^ uVar3) + 0x7fff ^ 0xc1180705e086f153;
  uRam0000000183251100 = (uRam0000000183251100 * -0x2a3094d22194d7c7 ^ uRam0000000183251340) + uVar3
  ;
  uRam00000001832514c8 = uRam0000000183251100 ^ uRam0000000183251340;
  uRam0000000183251018 = 0x7fff;
  uVar2 = (~uRam0000000183251660 + 0x41e85f1f667c2757) *
          ((uRam0000000183251100 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183251100 & 0x84225cda) * 2);
  uVar2 = (uVar2 | uRam0000000183251078) + (uVar2 & uRam0000000183251078);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183251168 =
       func_0x000189ec6780((uVar2 | 0x41e85f1fe25e7b8c) + (uVar2 & 0x41e85f1fe25e7b8c));
  uRam0000000183251128 = uRam00000001832512d8 ^ uRam00000001832516f0 ^ 0x41e85f1f667ca755;
  uRam00000001832513f0 =
       (uRam00000001832513f0 ^ uRam00000001832516f0) + 0x41e85f1f667ca755 ^ 0xc2fd7199fcabf725;
  uRam00000001832513f8 =
       (uRam00000001832513f8 * 0x2855161f8d7f9c6f ^ uRam00000001832513f0) + uRam00000001832516f0;
  uRam0000000183251178 = uRam00000001832513f8 ^ uRam00000001832513f0;
  uRam0000000183251338 = 0x41e85f1f667ca755;
  uVar2 = (uRam0000000183250f70 ^ _UNK_18157dec0) + uRam0000000183251330 + 0x41e85f1fe25e8470;
  uVar3 = (uRam0000000183251330 ^ _UNK_18157dec8) + uRam0000000183250f70 + 0xbe17a0e09983d8aa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183250f70 ^ _UNK_18157dec0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183251330 ^ _UNK_18157dec8;
  uRam0000000183251230 =
       func_0x000189ec6780((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183250f70 + 0xbe17a0e09983d8aa) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183251330 + 0x41e85f1fe25e8470));
  uVar2 = uRam0000000183251230 & 0x41e85f1f667ca755 | 0x67ca755;
  uRam0000000183250f28 = uRam00000001832513d8 ^ uVar2 ^ 0x7fff;
  uRam0000000183250f78 = (uRam0000000183250f78 ^ uVar2) + 0x7fff ^ 0x84a0eaa1579d222b;
  uRam0000000183251200 = (uRam0000000183251200 * -0x1a4584a2d0d8d42f ^ uRam0000000183250f78) + uVar2
  ;
  uRam0000000183251640 = uRam0000000183251200 ^ uRam0000000183250f78;
  uRam0000000183251380 = 0x7fff;
  uRam0000000183251560 = func_0x000189ec6780(uRam0000000183251078 + 0x6c706b3da65e3253 ^ 0x65);
  uVar2 = uRam0000000183251560 ^ 0xddfdfbfccffff7bf;
  uRam00000001832514f8 = uRam0000000183250fc8 ^ uVar2 ^ 0x67469464d8135cf3;
  uRam00000001832515f0 = (uRam00000001832515f0 ^ uVar2) + 0x67469464d8135cf3 ^ 0x92860a865490fed0;
  uRam0000000183251400 = (uRam0000000183251400 * 0x498450925bc792a1 ^ uRam00000001832515f0) + uVar2;
  uRam0000000183250f70 = uRam0000000183251400 ^ uRam00000001832515f0;
  uRam00000001832513e0 = 0x67469464d8135cf3;
  uRam0000000183251280 = func_0x000189ec6780(uRam0000000183250fa8 + 0xffe30083dcffddff ^ 0x5c);
  uVar2 = uRam0000000183251280 >> 1 | uRam0000000183251280;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uRam00000001832513f8 =
       (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
       uRam0000000183251280;
  uRam0000000183251318 = uRam0000000183251318 ^ uRam00000001832513f8 ^ 0x1c7807ec8ab973d3;
  uRam0000000183251548 =
       (uRam0000000183251548 * -0x472cc8fe9a37242d ^ uRam0000000183251318) + uRam00000001832513f8;
  uRam00000001832512e8 = uRam0000000183251548 ^ uRam0000000183251318;
  lRam0000000183251408 = 0;
  uRam0000000183250f90 = func_0x000189ec6780(uRam00000001832516c8 ^ 0xffcbff84ba001d85);
  uRam0000000183251598 = uRam0000000183251298 ^ uRam0000000183250f90 ^ 0x7fff;
  uRam0000000183250ff0 = (uRam0000000183250ff0 ^ uRam0000000183250f90) + 0x7fff ^ 0x86a39820f6cdc726
  ;
  uRam0000000183251018 =
       (uRam0000000183251018 * -0x73c8c94eeacf9803 ^ uRam0000000183250ff0) + uRam0000000183250f90;
  uRam00000001832511f0 = uRam0000000183251018 ^ uRam0000000183250ff0;
  uRam0000000183251690 = 0x7fff;
  uVar2 = (uRam0000000183250f38 ^ _UNK_18157ded0) + uRam0000000183250fc8 + 0xdde9da6c09dd469a;
  uVar3 = (uRam0000000183250fc8 ^ _UNK_18157ded8) + (uRam0000000183250f38 - 1);
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183250f38 ^ _UNK_18157ded0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183250fc8 ^ _UNK_18157ded8;
  uRam00000001832512e0 =
       func_0x000189ec6780((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183250f38 - 1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183250fc8 + 0xdde9da6c09dd469a));
  uRam0000000183250fe0 =
       (uRam0000000183250fe0 ^ uRam00000001832512e0 & 0x7fffffffffffffff) + 0x2216259372009a40 ^
       0x638a275b6caef2c9;
  uRam00000001832515e0 =
       (uRam00000001832515e0 * -0x694173a88fed6e75 ^ uRam0000000183250fe0) +
       (uRam00000001832512e0 & 0x7fffffffffffffff);
  uRam0000000183251688 = uRam00000001832515e0 ^ uRam0000000183250fe0;
  uRam00000001832513a8 = 0x2216259372009a40;
  uVar2 = (uRam0000000183251490 ^ _UNK_18157dee0) + uRam0000000183251598 + 0xdde9da6c09dd469a;
  uVar3 = (uRam0000000183251598 ^ _UNK_18157dee8) + uRam0000000183251490 + 0x2216259372009a40;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183251490 ^ _UNK_18157dee0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183251598 ^ _UNK_18157dee8;
  uRam00000001832514d8 =
       func_0x000189ec6780((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183251490 + 0x2216259372009a40) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183251598 + 0xdde9da6c09dd469a));
  uRam00000001832516b8 =
       uRam00000001832516b8 ^ uRam00000001832514d8 & 0x7ffffffff ^ 0x3173bba4fb013d5f;
  uRam0000000183251608 =
       (uRam0000000183251608 * -0x554a9dcd0671b283 ^ uRam00000001832516b8) +
       (uRam00000001832514d8 & 0x7ffffffff);
  uRam00000001832514b8 = uRam0000000183251608 ^ uRam00000001832516b8;
  uRam0000000183251390 = 0;
  uVar2 = ((uRam0000000183250f48 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183250f48 & 0x84225cda) * 2) * -lRam0000000183251210;
  uVar2 = (uVar2 | uRam0000000183251630) + (uVar2 & uRam0000000183251630);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832513a0 =
       func_0x000189ec6780((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uVar2 = uRam00000001832513a0 & 0xfffffffffff80000;
  uRam0000000183251288 = uRam0000000183251628 ^ uVar2 ^ 0x7fff;
  uRam0000000183251360 = (uRam0000000183251360 ^ uVar2) + 0x7fff ^ 0x9a501c692ad5a586;
  uRam0000000183250f78 = (uRam0000000183250f78 * -0xc72008c00b09a3f ^ uRam0000000183251360) + uVar2;
  uRam0000000183251518 = uRam0000000183250f78 ^ uRam0000000183251360;
  uRam00000001832510a0 = 0x7fff;
  uVar2 = (~uRam0000000183251020 + 0xd1e892200ddb659b) *
          ((uRam0000000183251548 ^ 0xd1e8922089f946bf) +
          (uRam0000000183251548 & 0x51e8922089f946bf) * 2);
  uVar2 = (uVar2 | uRam0000000183251610) + (uVar2 & uRam0000000183251610);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832513c0 =
       func_0x000189ec6780((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam0000000183251640 = uRam0000000183251640 ^ uRam00000001832513c0 ^ 0xfe2c6ee58c422b43;
  uRam0000000183251070 =
       (uRam0000000183251070 * -0x7cc071879fdb776f ^ uRam0000000183251640) + uRam00000001832513c0;
  uRam00000001832511a0 = uRam0000000183251070 ^ uRam0000000183251640;
  uRam00000001832511f8 = 0;
  uRam00000001832515b8 = func_0x000189ec6780(uRam00000001832512b8 ^ 0xffd3ff7b2a001d01);
  uVar2 = (uRam00000001832515b8 & 0xffffffffffffffe0) -
          (uRam00000001832515b8 >> 1 & 0x5555555555555550);
  uVar2 = (uVar2 & 0x3333333333333330) + (uVar2 >> 2 & 0x3333333333333330);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f07) * 0x101010101010101 >> 0x38) << 4 ^
          uRam00000001832515b8 & 0xffffffffffffffe0;
  uRam0000000183250ff8 = uRam0000000183251020 ^ uVar2 ^ 0x7fff;
  uRam0000000183251520 = (uRam0000000183251520 ^ uVar2) + 0x7fff ^ 0x9a41ca33d4d5df0a;
  uRam00000001832516b0 = (uRam00000001832516b0 * -0x158b3d70beda5beb ^ uRam0000000183251520) + uVar2
  ;
  uRam00000001832510a0 = uRam00000001832516b0 ^ uRam0000000183251520;
  uRam0000000183251668 = 0x7fff;
  uVar3 = (ulonglong)(param_4 & 0x7fff ^ param_3);
  uRam0000000183251568 = func_0x000189ec6780(uRam0000000183251018 + 0xffeaff599900c9ff ^ 0x25);
  uVar2 = uRam0000000183251568 << 0x31 | uRam0000000183251568 >> 0xf;
  uRam00000001832510b0 = (uRam00000001832510b0 ^ uVar2) - 0x2bfc368c ^ 0x29dccd72e68ace43;
  uRam0000000183251598 = (uRam0000000183251598 * 0x2526799b4ba22311 ^ uRam00000001832510b0) + uVar2;
  uRam00000001832512b8 = uRam0000000183251598 ^ uRam00000001832510b0;
  uRam0000000183251530 = 0xd403c974;
  uRam0000000183251508 = func_0x000189ec6780(uRam0000000183251018 ^ 0xffc6ff6ef7ff4da6);
  uRam00000001832511d0 = uRam00000001832514e0 ^ uRam0000000183251508 ^ 0x2bfc912d;
  uRam00000001832510d0 =
       (uRam00000001832510d0 ^ uRam0000000183251508) + 0x2bfc912d ^ 0x18c79e83fce48a85;
  uRam0000000183251478 =
       (uRam0000000183251478 * 0x625ce9e7eabe1a43 ^ uRam00000001832510d0) + uRam0000000183251508;
  uRam0000000183251588 = uRam0000000183251478 ^ uRam00000001832510d0;
  uRam0000000183251060 = 0x2bfc912d;
  uRam00000001832516b0 = func_0x000189ec6780(uRam00000001832510e8 ^ 0xffe1ffcf90006b68);
  uRam00000001832510f8 =
       (uRam00000001832510f8 ^ uRam00000001832516b0 & 0xffffffffffffffc0) - 0xd5560595 ^
       0xcee75f123ca967fe;
  uRam0000000183251208 =
       (uRam0000000183251208 * -0x101e8d7830e225ef ^ uRam00000001832510f8) +
       (uRam00000001832516b0 & 0xffffffffffffffc0);
  uRam0000000183251498 = uRam0000000183251208 ^ uRam00000001832510f8;
  uRam0000000183251300 = 0x2aa9fa6b;
  uVar2 = (~uRam0000000183251420 + 0xd5560596) *
          ((uRam0000000183251280 ^ 0x84227984) +
          (ulonglong)((uint)uRam0000000183251280 & 0x84227984) * 2);
  uVar2 = (uVar2 | uRam00000001832511a0) + (uVar2 & uRam00000001832511a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832510c0 =
       func_0x000189ec6780((uVar2 | 0x51747c11) + (ulonglong)((uint)uVar2 & 0x51747c11));
  uRam0000000183251348 = 0xd5566036;
  uRam0000000183251208 =
       (uRam0000000183251208 ^ uRam00000001832510c0) + 0xd5566036 ^ 0x74e9a747433970d9;
  uRam0000000183251598 =
       (uRam0000000183251598 * -0x1a952ec3170a3fdd ^ uRam0000000183251208) + uRam00000001832510c0;
  uRam0000000183251588 = uRam0000000183251598 ^ uRam0000000183251208;
  uRam0000000183251578 = 0xd5566036;
  uRam00000001832513d0 = func_0x000189ec6780(uRam00000001832515a8 ^ 0x870028b7ff32ce);
  uVar2 = uRam00000001832513d0 & 0x7fffffffffffffff;
  uRam0000000183250f08 = uRam0000000183251508 ^ uVar2 ^ 0x100005aa1;
  uRam0000000183251648 = (uRam0000000183251648 ^ uVar2) + 0x100005aa1 ^ 0xf687f8b213a00943;
  uRam0000000183250fc8 = (uRam0000000183250fc8 * 0x6a376917d804a555 ^ uRam0000000183251648) + uVar2;
  uRam00000001832514a0 = uRam0000000183250fc8 ^ uRam0000000183251648;
  uRam00000001832512a8 = 0x5aa1;
  uRam0000000183251250 = func_0x000189ec6780(uRam0000000183251648 + 0x650081b4ffdeff ^ 0x17);
  uVar2 = (uRam0000000183251250 & 0x7fffffffffffffff) >> 1 |
          uRam0000000183251250 & 0x7fffffffffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam0000000183251250 & 0x7fffffffffffffff;
  uRam0000000183251618 = (uRam0000000183251618 ^ uVar2) - 0x6034e78 ^ 0xc2fe526d6b128926;
  uRam0000000183250ff0 = (uRam0000000183250ff0 * -0x9c5dcd665d2d8fd ^ uRam0000000183251618) + uVar2;
  uRam00000001832511c8 = uRam0000000183250ff0 ^ uRam0000000183251618;
  uRam00000001832513a0 = 0xf9fcb188;
  uRam0000000183251418 = func_0x000189ec6780(uRam00000001832510f0 ^ 0x2eff7e03ffe03c);
  uVar2 = uRam0000000183251418 ^ 0x220f1aad3d9;
  uRam00000001832514d0 = uRam0000000183250f60 ^ uVar2 ^ 0x603a919;
  uRam0000000183251080 = (uRam0000000183251080 ^ uVar2) + 0x603a919 ^ 0x7ba146d1ed66cbc7;
  uRam00000001832511e0 = (uRam00000001832511e0 * -0x6e5953ea42fedb59 ^ uRam0000000183251080) + uVar2
  ;
  uRam0000000183250f08 = uRam00000001832511e0 ^ uRam0000000183251080;
  uRam0000000183251300 = 0x603a919;
  uRam0000000183250f50 = func_0x000189ec6780(lRam0000000183251558 + 0xffbe008463ff7affU ^ 0x5f);
  uVar2 = uRam0000000183250f50 ^ 0x8bd6dc9;
  uRam0000000183251198 = uRam0000000183251370 ^ uVar2 ^ 0x6d42722d;
  uRam0000000183251300 = (uRam0000000183251300 ^ uVar2) + 0x6d42722d ^ 0x5831a699a72af270;
  uRam0000000183251390 = (uRam0000000183251390 * -0x75b0484f5983b571 ^ uRam0000000183251300) + uVar2
  ;
  uRam0000000183251110 = uRam0000000183251390 ^ uRam0000000183251300;
  uRam0000000183251030 = 0x6d42722d;
  uVar2 = (~uRam0000000183251330 + 0x32428233) *
          ((uRam0000000183251658 ^ 0xbeddccde) +
          (ulonglong)((uint)uRam0000000183251658 & 0xbeddccde) * 2);
  uVar2 = (uVar2 | uRam0000000183251430) + (uVar2 & uRam0000000183251430);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001832516e8 =
       func_0x000189ec6780((uVar2 | 0x8c9f4eec) + (ulonglong)((uint)uVar2 & 0x8c9f4eec));
  uVar2 = (uRam00000001832516e8 >> 0xf) * 0x160ff29bb7208000;
  uRam0000000183251090 = (uRam0000000183251090 ^ uVar2) + 0x8bd6dc9 ^ 0x664dadd72c42f267;
  uRam0000000183250fa0 = (uRam0000000183250fa0 * -0x16ae344449ac637 ^ uRam0000000183251090) + uVar2;
  uRam00000001832513e8 = uRam0000000183250fa0 ^ uRam0000000183251090;
  uRam0000000183250f40 = 0x8bd6dc9;
  uVar2 = (uRam0000000183250fa0 ^ _UNK_18157def0) + uRam0000000183251620 + 0xbeddccde;
  uVar4 = (uRam0000000183251620 ^ _UNK_18157def8) + uRam0000000183250fa0 + 0x32428232;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183250fa0 ^ _UNK_18157def0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183251620 ^ _UNK_18157def8;
  uRam00000001832515f8 =
       func_0x000189ec6780((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183250fa0 + 0x32428232) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183251620 + 0xbeddccde));
  uVar2 = (ulonglong)(~(uint)uRam00000001832515f8 & 0x3affeffb) ^ 0x3affeffb;
  uRam00000001832515c8 = (uRam00000001832515c8 ^ uVar2) + 0x32428232 ^ 0x3bf81fa22a4d5162;
  uRam0000000183250f38 = (uRam0000000183250f38 * -0x306886ebb250186b ^ uRam00000001832515c8) + uVar2
  ;
  uRam0000000183250f40 = uRam0000000183250f38 ^ uRam00000001832515c8;
  uRam0000000183251538 = 0x32428232;
  uRam0000000183251160 = func_0x000189ec6780(lRam0000000183251590 + 0x4a009777fff5ffU ^ 0xe1);
  uVar2 = uRam0000000183251160 << 0x3a | uRam0000000183251160 >> 6;
  uRam0000000183251580 = uRam00000001832512b0 ^ uVar2 ^ 0x6d42722d;
  uRam0000000183251208 = (uRam0000000183251208 ^ uVar2) + 0x6d42722d ^ 0xa32901571ffbad21;
  uRam00000001832514d8 = (uRam00000001832514d8 * 0x11fd47da6ce9d6bd ^ uRam0000000183251208) + uVar2;
  uRam00000001832512d0 = uRam00000001832514d8 ^ uRam0000000183251208;
  uRam00000001832514a0 = 0x6d42722d;
  uRam0000000183251518 = func_0x000189ec6780(uRam0000000183250f08 ^ 0x1d0083dcffdd14);
  uRam00000001832510e8 = uRam00000001832510e8 ^ uRam0000000183251518 ^ 0xd7d57cf48ce6de25;
  uRam0000000183251300 =
       (uRam0000000183251300 * 0x5d1777ab3239996f ^ uRam00000001832510e8) + uRam0000000183251518;
  uRam00000001832514e8 = uRam0000000183251300 ^ uRam00000001832510e8;
  uRam0000000183250fb0 = uRam0000000183251358;
  uRam0000000183251320 = 0;
  uRam00000001832515c8 = uRam0000000183251518;
  uRam0000000183251090 = func_0x000189ec6780(uRam0000000183250f60 + 0x26ff8483ffe1ff ^ 0x86);
  uVar2 = uRam0000000183251090 & 0xfffffffffffffc00;
  uRam0000000183250fa0 = uRam00000001832512a8 ^ uVar2 ^ 0x5aa1;
  uRam00000001832515f8 = (uRam00000001832515f8 ^ uVar2) + 0x5aa1 ^ 0xe1f72aa2056f9652;
  uRam0000000183251028 = (uRam0000000183251028 * -0x1fa5b1c2adf2a1d1 ^ uRam00000001832515f8) + uVar2
  ;
  uRam0000000183251520 = uRam0000000183251028 ^ uRam00000001832515f8;
  uRam0000000183251278 = 0x5aa1;
  uRam00000001832512a0 = func_0x000189ec6780(lRam0000000183251408 + 0xff2bffb55a0034ffU ^ 0x79);
  uVar2 = uRam00000001832512a0 - (uRam00000001832512a0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam00000001832512a0;
  uRam0000000183251018 = uRam0000000183251018 ^ uVar2 ^ 0x3478f90088b7000c;
  uRam00000001832516c0 = (uRam00000001832516c0 * 0x189a7a9de18b6895 ^ uRam0000000183251018) + uVar2;
  uRam0000000183251070 = uRam00000001832516c0 ^ uRam0000000183251018;
  uRam0000000183251600 = 0;
  lRam0000000183251590 = func_0x000189ec6780(uRam0000000183251560 ^ 0xff99007b84002195);
  uVar2 = (ulonglong)((uint)lRam0000000183251590 & 0x5aa1);
  uRam0000000183250f38 = uRam0000000183251638 ^ uVar2 ^ 0x5aa1;
  uRam00000001832513b8 = (uRam00000001832513b8 ^ uVar2) + 0x5aa1 ^ 0xa82c561c985f6496;
  uRam00000001832514a0 = (uRam00000001832514a0 * 0x5bf3627eeabf9ea9 ^ uRam00000001832513b8) + uVar2;
  uRam00000001832512f0 = uRam00000001832514a0 ^ uRam00000001832513b8;
  uRam0000000183251478 = 0x5aa1;
  uRam0000000183250f20 = func_0x000189ec6780(uRam0000000183251148 ^ 0x7900847bffe17e);
  uVar2 = uRam0000000183250f20 ^ 0x5aa1;
  uRam0000000183251240 = uRam0000000183251600 ^ uVar2 ^ 0x5aa1;
  uRam0000000183251128 = (uRam0000000183251128 ^ uVar2) + 0x5aa1 ^ 0x7ac024d255a897b3;
  uRam0000000183251270 = (uRam0000000183251270 * 0x612e71c58e7cab5 ^ uRam0000000183251128) + uVar2;
  uRam00000001832514a0 = uRam0000000183251270 ^ uRam0000000183251128;
  uRam0000000183251388 = 0x5aa1;
  uVar2 = (~uRam00000001832510b8 + 0x5aa2) *
          ((uVar3 ^ 0x84222325 ^ uRam0000000183250f58) +
          (ulonglong)((uint)uRam0000000183250f58 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | uRam0000000183251680) + (uVar2 & uRam0000000183251680);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183251568 =
       func_0x000189ec6780((uVar3 ^ 0x84227984 | uVar2) +
                           (ulonglong)((uint)(uVar3 ^ 0x84227984) & (uint)uVar2));
  uVar2 = (uVar3 ^ uVar3 * 0x5aa1 ^ uRam0000000183251568) & 0x3ffffffffffff;
  uRam00000001832510c0 = uVar3 ^ 0x5aa1;
  uRam0000000183251620 = (uRam0000000183251620 ^ uVar2) + uRam00000001832510c0 ^ 0xa998c254fb26db43;
  uRam0000000183251268 = (uRam0000000183251268 * -0x7215e429dd20c177 ^ uRam0000000183251620) + uVar2
  ;
  uRam00000001832512e0 = uRam0000000183251268 ^ uRam0000000183251620;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ebd18d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18157c030 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 189ec6810, runtime 6ffff1ad6810) =====

void FUN_189ec6810(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000189ec685b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18157e060 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ge; aZK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 189ec7820, runtime 6ffff1ad7820) =====

void FUN_189ec7820(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ec78a9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18157e620 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZq (Ljava/lang/String;)V (handler @ image 189e3c650, runtime 6ffff1a4c650) =====

void FUN_189e3c650(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189e3c71d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18155d110 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZr (Ljava/lang/String;)V (handler @ image 189e5a7c0, runtime 6ffff1a6a7c0) =====

void FUN_189e5a7c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189e5a8bb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181566d90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZs ()V (handler @ image 189eca530, runtime 6ffff1ada530) =====

void FUN_189eca530(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189eca5fa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18157f5b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZt (Lsixtwo/gA;)V (handler @ image 189ee6100, runtime 6ffff1af6100) =====

void FUN_189ee6100(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ee61ee did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181583b60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZu (Lsixtwo/gg;)V (handler @ image 189ef8d30, runtime 6ffff1b08d30) =====

void FUN_189ef8d30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ef8d8a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181589700 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZv ()Lsixtwo/fo; (handler @ image 189ef9eb0, runtime 6ffff1b09eb0) =====

void FUN_189ef9eb0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ef9eff did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181589df0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZw (Ljava/util/function/Predicate;)Ljava/util/List; (handler @ image 189efa180, runtime 6ffff1b0a180) =====

void FUN_189efa180(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189efa1aa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181589f20 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ge; aZy (I)Lsixtwo/gg; (handler @ image 189efa890, runtime 6ffff1b0a890) =====

void FUN_189efa890(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189efa954 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18158a1f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ge; aZz ()Ljava/util/Map; (handler @ image 189efed10, runtime 6ffff1b0ed10) =====

void FUN_189efed10(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189efed30 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18158b550 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



