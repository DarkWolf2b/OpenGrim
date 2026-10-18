// ===== Lsixtwo/ar$rT; _41499fd393f6cea041c30dfbc357fbb5 ()V (handler @ image 18fcacb80, runtime 6ffff78bcb80) =====

void FUN_18fcacb80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fcacc68 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ada408 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dmS ()Lsixtwo/rk; (handler @ image 18fca9a60, runtime 6ffff78b9a60) =====

void FUN_18fca9a60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fca9a80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ad9230 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dmT ()Lsixtwo/rk; (handler @ image 18fca9c60, runtime 6ffff78b9c60) =====

void FUN_18fca9c60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fca9c80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ad9310 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dmU ()Lsixtwo/rk; (handler @ image 18fcc7060, runtime 6ffff78d7060) =====

void FUN_18fcc7060(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcc7080 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182adc200 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dmV ()Lsixtwo/rk; (handler @ image 18fcc7260, runtime 6ffff78d7260) =====

void FUN_18fcc7260(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcc7280 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182adc2e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dmW ()Lsixtwo/mG; (handler @ image 18fcc7460, runtime 6ffff78d7460) =====

void FUN_18fcc7460(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcc7480 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182adc3c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dmX ()I (handler @ image 18fcc7660, runtime 6ffff78d7660) =====

void FUN_18fcc7660(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcc7680 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182adc4a0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dmY ()Z (handler @ image 18fcc7860, runtime 6ffff78d7860) =====

void FUN_18fcc7860(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcc7880 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182adc580 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dmZ (Z)V (handler @ image 18fcc7a60, runtime 6ffff78d7a60) =====

void FUN_18fcc7a60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcc7a85 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182adc660 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dna (IJ)I (handler @ image 18fcc7c50, runtime 6ffff78d7c50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcc7c50(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  
  uVar2 = func_0x00018fcd35b0(uRam0000000183432c28 ^ 0xdc2e4e884e9d5e43);
  uRam0000000183432c68 =
       (uVar2 << 0xf | (uVar2 & 0x7fffffffffffff) >> 0x31) << 0x17 |
       (uVar2 & 0x1ffffffffffff) >> 0x1a;
  uRam0000000183432b48 =
       (uRam0000000183432b48 ^ uRam0000000183432c68) + 0xbff1ea749dcd5cfb ^ 0x269846379d95b78b;
  uRam0000000183432c68 = (uVar2 * 0x364ed33d76258147 ^ uRam0000000183432b48) + uRam0000000183432c68;
  uRam0000000183432a68 = uRam0000000183432c68 ^ uRam0000000183432b48;
  uRam0000000183432928 = 0xbff1ea749dcd5cfb;
  uRam0000000183432a98 = func_0x00018fcd35b0(uRam0000000183432960 ^ 0x3f06155bb9f20124);
  uVar2 = (uRam0000000183432a98 ^ 0xf8b55f6ff2bf7dff) * -0x43e91e35b45b6f2b;
  uRam0000000183432a80 = (uRam0000000183432a80 ^ uVar2) + 0xb0151243202d25ef ^ 0xaf5aa1f0501b0803;
  uRam0000000183432b50 = (uRam0000000183432b50 * 0x42ad58ff35bb6623 ^ uRam0000000183432a80) + uVar2;
  uRam0000000183432bd8 = uRam0000000183432b50 ^ uRam0000000183432a80;
  uRam0000000183432920 = -0x4feaedbcdfd2da11;
  uRam0000000183432ae8 = func_0x00018fcd35b0(lRam0000000183432cc8 + 0xdd43041a55ca11f0U ^ 0x22);
  uRam00000001834329f0 = uRam00000001834329d8 ^ uRam0000000183432a18 ^ 0x31047affee511b7f;
  uRam0000000183432930 =
       (uRam0000000183432930 ^ uRam0000000183432a18) + 0x31047affee511b7f ^ 0x67c7a859e1fec9ce;
  uRam0000000183432b50 =
       (uRam0000000183432b50 * -0x6141219a6bb3a15b ^ uRam0000000183432930) + uRam0000000183432a18;
  uRam0000000183432c20 = uRam0000000183432b50 ^ uRam0000000183432930;
  uRam0000000183432950 = 0x31047affee511b7f;
  uVar2 = (~uRam0000000183432c90 + 0xcefb850011af6481) *
          ((uRam0000000183432b00 ^ 0x31047aff6a73385a) +
          (uRam0000000183432b00 & 0x31047aff6a73385a) * 2);
  uVar2 = (uVar2 | uRam0000000183432c10) + (uVar2 & uRam0000000183432c10);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432b18 =
       func_0x00018fcd35b0((uVar2 | 0xffffffff7bdc5cda) + (uVar2 & 0xffffffff7bdc5cda));
  uVar2 = uRam0000000183432b18 << 0x1b | uRam0000000183432b18 >> 0x25;
  uRam0000000183432bd0 = uRam0000000183432950 ^ uVar2 ^ 0x7fff;
  uRam0000000183432a18 = (uRam0000000183432a18 ^ uVar2) + 0x7fff ^ 0x1795263dae9f342e;
  uRam0000000183432900 = (uRam0000000183432900 * 0x2e01b6446125d565 ^ uRam0000000183432a18) + uVar2;
  uRam0000000183432980 = uRam0000000183432900 ^ uRam0000000183432a18;
  uRam0000000183432cc0 = 0x7fff;
  uVar2 = (~uRam0000000183432a18 + 0xe61692f6ebc17aa5) *
          ((uRam0000000183432978 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183432978 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam0000000183432b10) + (uVar2 & uRam0000000183432b10);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432b38 =
       func_0x00018fcd35b0((uVar2 | 0xe61692f66fe35981) + (uVar2 & 0xe61692f66fe35981));
  uVar2 = uRam0000000183432b38 - (uRam0000000183432b38 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183432b38) * 0x6a34889896a7ea27;
  uRam0000000183432988 = (uRam0000000183432988 ^ uVar2) + 0x19e96d09143e855c ^ 0xc189669ac283b327;
  uRam0000000183432b20 = (uRam0000000183432b20 * -0x4d26052685855057 ^ uRam0000000183432988) + uVar2
  ;
  uRam0000000183432cb8 = uRam0000000183432b20 ^ uRam0000000183432988;
  uRam0000000183432ae0 = 0x19e96d09143e855c;
  uVar2 = func_0x00018fcd35b0(uRam0000000183432cd0 + 0xd5baf38d9e2257e ^ 0x71);
  uVar4 = uVar2 & 0x1ffffe000;
  uRam0000000183432c40 = uRam0000000183432c50 ^ uVar4 ^ 0x7fff;
  uRam0000000183432a88 = (uVar2 ^ uVar4) + 0x7fff ^ 0xfb70fbc89302e9c7;
  uRam0000000183432b58 = (uRam0000000183432b58 * -0xa1a7ffd3251c3d7 ^ uRam0000000183432a88) + uVar4;
  uRam00000001834329b0 = uRam0000000183432b58 ^ uRam0000000183432a88;
  uRam0000000183432be0 = 0x7fff;
  uRam0000000183432aa8 = func_0x00018fcd35b0(uRam0000000183432b40 ^ 0xc8651a9fc4b0cc46);
  uVar2 = (uRam0000000183432aa8 & 0x7fffffffffffffff) >> 1 |
          uRam0000000183432aa8 & 0x7fffffffffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam0000000183432aa8 & 0x7fffffffffffffff;
  uRam0000000183432ac0 = (uRam0000000183432ac0 ^ uVar2) + 0x3b11ae26db894220 ^ 0x337658cb201c6bd5;
  uRam00000001834329a0 = (uRam00000001834329a0 * 0x4a86a0e2989e431 ^ uRam0000000183432ac0) + uVar2;
  uRam0000000183432c80 = uRam00000001834329a0 ^ uRam0000000183432ac0;
  uRam0000000183432c38 = 0x3b11ae26db894220;
  uVar2 = (uRam0000000183432a78 ^ _UNK_182ade5c0) + uRam0000000183432a28 + 0x84225cda;
  uVar4 = (uRam0000000183432a28 ^ _UNK_182ade5c8) + uRam0000000183432a78 + 0xc4ee51d92476bde0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432a78 ^ _UNK_182ade5c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183432a28 ^ _UNK_182ade5c8;
  uVar2 = func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) -
                              (uRam0000000183432a78 + 0xc4ee51d92476bde0) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183432a28 + 0x84225cda))
  ;
  uVar4 = uVar2 >> 1 | uVar2;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar2;
  uRam0000000183432cb0 = uRam00000001834329e0 ^ uVar2 ^ 0xc4ee51d924773ddf;
  uRam0000000183432bf0 = (uRam0000000183432bf0 ^ uVar2) + 0xc4ee51d924773ddf ^ 0xf215cfeffbbb248b;
  uRam0000000183432a10 = (uRam0000000183432a10 * -0x737a8a6674490c71 ^ uRam0000000183432bf0) + uVar2
  ;
  uRam0000000183432ac8 = uRam0000000183432a10 ^ uRam0000000183432bf0;
  uRam00000001834329d0 = 0xc4ee51d924773ddf;
  uVar2 = (~uRam0000000183432960 + 0x3b11ae26db894221) *
          ((uRam0000000183432ca8 ^ 0xc4ee51d9a0551efa) +
          (uRam0000000183432ca8 & 0x44ee51d9a0551efa) * 2);
  uVar2 = (uVar2 | uRam0000000183432cf8) + (uVar2 & uRam0000000183432cf8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432c40 =
       func_0x00018fcd35b0((uVar2 | 0xffffffff7bdc5cda) + (uVar2 & 0xffffffff7bdc5cda));
  uVar2 = uRam0000000183432c40 - (uRam0000000183432c40 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183432c40;
  uRam0000000183432978 = uRam0000000183432990 ^ uVar2 ^ 0x7fff;
  uRam0000000183432c20 = (uRam00000001834329e8 ^ uVar2) + 0x7fff ^ 0x68de0c5858665a63;
  uRam0000000183432b10 = (uRam0000000183432b10 * -0x5a452380fbd95a07 ^ uRam0000000183432c20) + uVar2
  ;
  uRam0000000183432c20 = uRam0000000183432b10 ^ uRam0000000183432c20;
  uRam00000001834329e8 = uRam00000001834329f0 ^ 0x7fff;
  uRam0000000183432b00 = 0x7fff;
  uVar2 = (uRam0000000183432ad0 ^ _UNK_182ade5d0) + uRam00000001834329d0 + 0xbff1ea7419ef7fde;
  uVar4 = (uRam00000001834329d0 ^ _UNK_182ade5d8) + uRam0000000183432ad0 + 0xb0151243202d25ef;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432ad0 ^ _UNK_182ade5d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001834329d0 ^ _UNK_182ade5d8;
  uRam0000000183432c30 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183432ad0 + 0xb0151243202d25ef) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001834329d0 + 0xbff1ea7419ef7fde));
  uVar2 = uRam0000000183432c30 ^ 0xe1d62217b9491555;
  uRam0000000183432af8 = uRam0000000183432950 ^ uVar2 ^ 0x7006fcb7bdfa82ea;
  uRam0000000183432a80 = (uRam0000000183432a80 ^ uVar2) + 0x7006fcb7bdfa82ea ^ 0x3998281ac5f2d0d4;
  uRam0000000183432920 = (uRam0000000183432920 * 0x4af8009f0d2c559 ^ uRam0000000183432a80) + uVar2;
  uRam0000000183432b50 = uRam0000000183432920 ^ uRam0000000183432a80;
  lRam0000000183432a60 = 0x7006fcb7bdfa82ea;
  uVar2 = (~uRam0000000183432b40 + 0xb0151243202d25f0) *
          ((uRam0000000183432b38 ^ 0xbff1ea7419ef7fde) +
          (uRam0000000183432b38 & 0x3ff1ea7419ef7fde) * 2);
  uVar2 = (uVar2 | uRam0000000183432cb8) + (uVar2 & uRam0000000183432cb8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432b80 =
       func_0x00018fcd35b0((uVar2 | 0xfe4f83739c25a31) + (uVar2 & 0xfe4f83739c25a31));
  uRam0000000183432be8 =
       (uRam0000000183432be8 ^ ~uRam0000000183432b80 & 0xbff1ea749dcd5cfb) + 0xb0110240000d04eb ^
       0x6c8241adc3f15669;
  uRam0000000183432a50 =
       (uRam0000000183432a50 * -0x17a4edb854ecfb63 ^ uRam0000000183432be8) +
       (~uRam0000000183432b80 & 0xbff1ea749dcd5cfb);
  uRam0000000183432a68 = uRam0000000183432a50 ^ uRam0000000183432be8;
  uRam0000000183432cb0 = 0xb0110240000d04eb;
  uVar2 = (uRam0000000183432998 ^ _UNK_182ade5e0) + uRam0000000183432a08 + 0x7006fcb739d8a1cf;
  uVar4 = (uRam0000000183432a08 ^ _UNK_182ade5e8) + uRam0000000183432998 + 0x7006fcb7bdfa82ea;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432998 ^ _UNK_182ade5e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183432a08 ^ _UNK_182ade5e8;
  uRam0000000183432960 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183432998 + 0x7006fcb7bdfa82ea) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183432a08 + 0x7006fcb739d8a1cf));
  uRam0000000183432958 = uRam0000000183432960 ^ 0x3dd7b4fd77fa7de4;
  uRam0000000183432bc8 = uRam0000000183432bc8 ^ uRam0000000183432958 ^ 0xb3630d6b165cd01c;
  uRam0000000183432b50 =
       (uRam0000000183432b50 * 0x77ef0120d0ac3b21 ^ uRam0000000183432bc8) + uRam0000000183432958;
  uRam0000000183432a98 = uRam0000000183432b50 ^ uRam0000000183432bc8;
  uRam0000000183432ce8 = 0;
  uVar2 = (uRam0000000183432aa8 ^ 0x84225cda) + uRam0000000183432ba8 + 0x84225cda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432aa8 ^ 0x84225cda;
  uVar4 = ((uRam0000000183432ba8 + uRam0000000183432aa8) * 0x2000 |
          uRam0000000183432ba8 + uRam0000000183432aa8 >> 0x33) ^ uRam0000000183432ba8;
  uRam0000000183432c30 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183432aa8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183432ba8 + 0x84225cda));
  uVar2 = uRam0000000183432c30 * 0x1bb7828b79021a1f & 0x7fffffffffff;
  uRam0000000183432b28 = uRam0000000183432968 ^ uVar2 ^ 0x7fff;
  uRam0000000183432a90 = (uRam0000000183432a90 ^ uVar2) + 0x7fff ^ 0xdbe266875274c39d;
  uRam00000001834329d0 = (uRam00000001834329d0 * -0x3ee9c14bcad1a48f ^ uRam0000000183432a90) + uVar2
  ;
  uRam0000000183432910 = uRam00000001834329d0 ^ uRam0000000183432a90;
  uRam0000000183432978 = 0x7fff;
  uVar2 = ~uRam0000000183432bd0 *
          ((uRam0000000183432b20 ^ 0xbff1ea7419ef7fde) +
          (uRam0000000183432b20 & 0x3ff1ea7419ef7fde) * 2);
  uVar2 = (uVar2 | uRam0000000183432c58) + (uVar2 & uRam0000000183432c58);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432938 =
       func_0x00018fcd35b0((uVar2 | 0x400e158be6108021) + (uVar2 & 0x400e158be6108021));
  uRam0000000183432b90 =
       (uRam0000000183432b90 ^ ~uRam0000000183432938) + 0x400e158b6232a304 ^ 0xca5f1e7d4a19bf87;
  uRam0000000183432a20 =
       (uRam0000000183432a20 * 0x441164a0abcac1b3 ^ uRam0000000183432b90) + ~uRam0000000183432938;
  uRam0000000183432968 = uRam0000000183432a20 ^ uRam0000000183432b90;
  uRam00000001834329d8 = 0x400e158b6232a304;
  uVar2 = (uRam0000000183432908 ^ _UNK_182ade5f0) + uRam0000000183432ae0 + 0xbff1ea7419ef7fde;
  uVar4 = (uRam0000000183432ae0 ^ _UNK_182ade5f8) + uRam0000000183432908 + 0x400e158b6232a304;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432908 ^ _UNK_182ade5f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183432ae0 ^ _UNK_182ade5f8;
  uRam0000000183432980 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183432908 + 0x400e158b6232a304) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183432ae0 + 0xbff1ea7419ef7fde));
  uRam0000000183432b48 = uRam0000000183432b48 ^ ~uRam0000000183432980 ^ 0x64671fb5ec1bce60;
  uRam0000000183432a90 =
       (uRam0000000183432a90 * 0x323c7b181a042137 ^ uRam0000000183432b48) + ~uRam0000000183432980;
  uRam0000000183432b28 = uRam0000000183432a90 ^ uRam0000000183432b48;
  lRam0000000183432ab0 = 0;
  uVar2 = ((uRam0000000183432960 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183432960 & 0x84225cda) * 2) * -lRam0000000183432a60;
  uVar2 = (uVar2 | uRam0000000183432c58) + (uVar2 & uRam0000000183432c58);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432bd0 =
       func_0x00018fcd35b0((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uVar2 = (uRam0000000183432bd0 ^ 0x7fff) & 0x7fffffffffffffff ^ 0x7fff;
  uRam0000000183432bc8 = uRam0000000183432ae0 ^ uVar2 ^ 0x7fff;
  uRam0000000183432c00 = (uRam0000000183432c00 ^ uVar2) + 0x7fff ^ 0xdbb88946a7046d7e;
  uRam0000000183432ad0 = (uRam0000000183432ad0 * -0x2ed3785cb18c880d ^ uRam0000000183432c00) + uVar2
  ;
  uRam00000001834329f0 = uRam0000000183432ad0 ^ uRam0000000183432c00;
  uRam0000000183432ca8 = 0x7fff;
  uVar2 = ((uRam0000000183432930 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183432930 & 0x84225cda) * 2) * -lRam0000000183432a40;
  uVar2 = (uVar2 | uRam0000000183432c90) + (uVar2 & uRam0000000183432c90);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432b88 =
       func_0x00018fcd35b0((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uVar2 = uRam0000000183432b88 ^ 0x7fff;
  uRam0000000183432b18 = uRam0000000183432c20 ^ uVar2 ^ 0x7fff;
  uRam00000001834329e0 = (uRam00000001834329e0 ^ uVar2) + 0x7fff ^ 0xbe8c7c0324086399;
  uRam0000000183432b78 = (uRam0000000183432b78 * -0x3247445e184caa41 ^ uRam00000001834329e0) + uVar2
  ;
  uRam0000000183432c38 = uRam0000000183432b78 ^ uRam00000001834329e0;
  auVar7._8_8_ = _UNK_18019c088;
  auVar7._0_8_ = param_4 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _UNK_182ade600,_UNK_1800170c0);
  uRam0000000183432c60 = 0x7fff;
  uVar4 = auVar8._8_8_ + auVar8._0_8_;
  uVar2 = uVar4 + uRam0000000183432a28;
  if (auVar8._4_4_ < 0) {
    uVar2 = uRam0000000183432bb8 ^ uVar4;
  }
  uRam0000000183432bc8 = func_0x00018fcd35b0(SUB161(auVar7 ^ _UNK_182ade600,5) ^ uVar2);
  uVar2 = uRam0000000183432bc8 << 0x3d | uRam0000000183432bc8 >> 3;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar3;
  uRam0000000183432af0 = (uRam0000000183432af0 ^ uVar2) + uVar4 ^ 0xdfec0fff8e2ae703;
  uRam00000001834329a8 = (uRam00000001834329a8 * 0x694096e1a243ab1d ^ uRam0000000183432af0) + uVar2;
  uRam0000000183432af8 = uRam00000001834329a8 ^ uRam0000000183432af0;
  uVar9 = (ulonglong)param_3;
  uVar5 = uVar4 ^ 0x84222325;
  uVar2 = ((uRam0000000183432c40 ^ uVar5) +
          (ulonglong)((uint)uRam0000000183432c40 & (uint)uVar5) * 2) *
          (uVar9 - uRam0000000183432cd0);
  uVar2 = (uVar2 | uRam0000000183432bc0) + (uVar2 & uRam0000000183432bc0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001834329b0 = uVar4;
  uRam0000000183432990 =
       func_0x00018fcd35b0((uVar5 ^ uVar9 | uVar2) +
                           (ulonglong)((uint)(uVar5 ^ uVar9) & (uint)uVar2));
  uVar5 = (uVar4 + uVar9) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183432ca0 =
       (uRam0000000183432ca0 ^ uVar9 ^ uRam0000000183432990) + uVar5 ^ 0xaf9f0bf2396ef2e6;
  uRam0000000183432960 =
       (uRam0000000183432960 * 0x701ab33853d18689 ^ uRam0000000183432ca0) +
       (uVar9 ^ uRam0000000183432990);
  uVar5 = uVar5 & 0xffffffff;
  uRam0000000183432a08 = uVar5;
  uVar2 = func_0x00018fcd35b0(lRam0000000183432ab0 + 0x5e005705ff9fffU ^ 0xad);
  uVar4 = (ulonglong)(~(uint)uVar2 & 0x330c42d2);
  uRam0000000183432b50 = (uVar2 ^ uVar4) + 0x7f4ec7df ^ 0xa4d323848893b12f;
  uRam0000000183432bc0 = (uRam0000000183432bc0 * -0x4f68cb554e52523d ^ uRam0000000183432b50) + uVar4
  ;
  uRam0000000183432c40 = uRam0000000183432bc0 ^ uRam0000000183432b50;
  uRam0000000183432a88 = 0x7f4ec7df;
  uVar2 = (~uRam0000000183432988 + 0x4753e4dd) *
          ((uRam0000000183432938 ^ 0xc3fafdcf) +
          (ulonglong)((uint)uRam0000000183432938 & 0xc3fafdcf) * 2);
  uVar2 = (uVar2 | uRam0000000183432bf0) + (uVar2 & uRam0000000183432bf0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432c70 =
       func_0x00018fcd35b0((uVar2 | 0x84a91913) + (ulonglong)((uint)uVar2 & 0x84a91913));
  uVar2 = uRam0000000183432c70 << 0xb | uRam0000000183432c70 >> 0x35;
  uRam0000000183432af0 = (uRam0000000183432af0 ^ uVar2) + 0x8b3a36 ^ 0x9e1487659be974e9;
  uRam0000000183432bb0 = (uRam0000000183432bb0 * 0x84862f33208c0a7 ^ uRam0000000183432af0) + uVar2;
  uRam0000000183432938 = uRam0000000183432bb0 ^ uRam0000000183432af0;
  uRam0000000183432940 = 0x8b3a36;
  uVar2 = (~uRam00000001834329b8 + 0x7af53af5) *
          ((uRam0000000183432c58 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183432c58 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam0000000183432c38) + (uVar2 & uRam0000000183432c38);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  lRam0000000183432ab0 =
       func_0x00018fcd35b0((uVar2 | 0xfed719d1) + (ulonglong)((uint)uVar2 & 0xfed719d1));
  uRam0000000183432be8 = uRam0000000183432ac0 * -0x6fff23655d4c0a15;
  uRam0000000183432a20 = uRam0000000183432a20 - 0x7af53af4 ^ 0xde18e7f95c96a8e9;
  uRam0000000183432ac0 = uRam0000000183432be8 ^ uRam0000000183432a20;
  uRam00000001834329e8 = 0x850ac50c;
  uVar2 = (~uRam0000000183432b98 + 0x850ac50d) *
          ((uRam00000001834329e0 ^ 0xfed7b108) +
          (ulonglong)((uint)uRam00000001834329e0 & 0xfed7b108) * 2);
  uVar2 = (uVar2 | uRam0000000183432ad0) + (uVar2 & uRam0000000183432ad0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432a98 =
       func_0x00018fcd35b0((uVar2 | 0x7bdd7404) + (ulonglong)((uint)uVar2 & 0x7bdd7404));
  uVar2 = uRam0000000183432a98 << 0x27 | uRam0000000183432a98 >> 0x19;
  uRam0000000183432aa8 = uRam0000000183432b40 ^ uVar2 ^ 0x100005739;
  uRam0000000183432980 = (uRam0000000183432980 ^ uVar2) + 0x100005739 ^ 0x3633d410507b1067;
  uRam0000000183432b18 = (uRam0000000183432b18 * -0x6690c90227f0ec2b ^ uRam0000000183432980) + uVar2
  ;
  uRam0000000183432948 = 0x5739;
  uVar2 = (uRam0000000183432a30 ^ _UNK_182ade610) + uRam0000000183432b08 + 0x84222325;
  uVar4 = (uRam0000000183432b08 ^ _UNK_182ade618) + uRam0000000183432a30 + 0x9ac66940;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432a30 ^ _UNK_182ade610;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183432b08 ^ _UNK_182ade618;
  uRam0000000183432a20 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183432a30 + 0x9ac66940) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183432b08 + 0x84222325));
  uVar2 = uRam0000000183432a20 - (uRam0000000183432a20 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183432a20;
  uRam0000000183432cd0 = (uRam0000000183432cd0 ^ uVar2) - 0x9ac66940 ^ 0xa69c47403aa0ad4c;
  uRam0000000183432a28 = (uRam0000000183432a28 * -0x1ef4c20a57c97e4b ^ uRam0000000183432cd0) + uVar2
  ;
  uRam0000000183432b48 = uRam0000000183432a28 ^ uRam0000000183432cd0;
  uRam0000000183432988 = 0x653996c0;
  uRam0000000183432918 = func_0x00018fcd35b0(uRam0000000183432990 + 0xd004b6bffa2ff ^ 0xe5);
  uVar2 = uRam0000000183432918 & 0x7fffffffff;
  uRam0000000183432bb0 = uRam0000000183432ae8 ^ uVar2 ^ 0x100005739;
  uRam0000000183432ba8 = (uRam0000000183432ba8 ^ uVar2) + 0x100005739 ^ 0x139e6604dce3bcea;
  uRam0000000183432c98 = (uRam0000000183432c98 * -0x56ab225ccef64869 ^ uRam0000000183432ba8) + uVar2
  ;
  uRam0000000183432b30 = uRam0000000183432c98 ^ uRam0000000183432ba8;
  uRam0000000183432b38 = 0x5739;
  uVar2 = (~uRam0000000183432988 + 0xd9d619a9) *
          ((uRam0000000183432a98 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183432a98 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam0000000183432cd0) + (uVar2 & uRam0000000183432cd0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432958 =
       func_0x00018fcd35b0((uVar2 | 0x5df43a8d) + (ulonglong)((uint)uVar2 & 0x5df43a8d));
  uRam0000000183432cd8 =
       (uRam0000000183432cd8 ^ uRam0000000183432958) - 0xd9d619a8 ^ 0xc21ee4c97f0a5b5f;
  uRam00000001834329d0 =
       (uRam00000001834329d0 * -0x267c9bcce088c807 ^ uRam0000000183432cd8) + uRam0000000183432958;
  uRam0000000183432b50 = uRam00000001834329d0 ^ uRam0000000183432cd8;
  uRam0000000183432bb0 = 0x2629e658;
  uVar2 = (uRam0000000183432c30 ^ _UNK_182ade620) + uRam0000000183432c28 + 0x8422741c;
  uVar4 = (uRam0000000183432c28 ^ _UNK_182ade628) + uRam0000000183432c30 + 0xd9d619a8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432c30 ^ _UNK_182ade620;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183432c28 ^ _UNK_182ade628;
  uRam00000001834329c0 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183432c30 + 0xd9d619a8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183432c28 + 0x8422741c));
  uVar2 = uRam0000000183432c50 >> 1 | uRam0000000183432c50;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183432c50;
  uRam0000000183432c98 = uRam00000001834329e0 ^ uVar2 ^ 0xd9d670e1;
  uRam0000000183432c60 = (uRam0000000183432c60 ^ uVar2) + 0xd9d670e1 ^ 0x6c8fbf7e7f7e390;
  uRam0000000183432920 = (uRam0000000183432920 * -0x5241afd351477537 ^ uRam0000000183432c60) + uVar2
  ;
  uRam0000000183432c68 = uRam0000000183432920 ^ uRam0000000183432c60;
  uRam0000000183432cf8 = 0xd9d670e1;
  uRam00000001834329d0 = func_0x00018fcd35b0(uRam0000000183432a10 ^ 0xd9ff85b3ff9ec9);
  uVar2 = uRam00000001834329d0 - (uRam00000001834329d0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam00000001834329d0) * 0x66b97e8484a3455d;
  uRam0000000183432cb0 = (uRam0000000183432cb0 ^ uVar2) + 0x7fc5fde9 ^ 0x3dcae88f05deb55e;
  uRam0000000183432af0 = (uRam0000000183432af0 * 0x3aa46aba425a440f ^ uRam0000000183432cb0) + uVar2;
  uRam00000001834329e8 = uRam0000000183432af0 ^ uRam0000000183432cb0;
  lRam0000000183432a60 = 0x7fc5fde9;
  uRam0000000183432b20 = func_0x00018fcd35b0(uRam0000000183432a00 + 0xffcdfff7cc00dcff ^ 100);
  uRam0000000183432c80 =
       (uRam0000000183432c80 ^ uRam0000000183432b20) + 0xa0216 ^ 0xde0585466516cd12;
  uRam0000000183432b18 =
       (uRam0000000183432b18 * -0xe52846904184ac1 ^ uRam0000000183432c80) + uRam0000000183432b20;
  uRam0000000183432920 = uRam0000000183432b18 ^ uRam0000000183432c80;
  uRam00000001834329e8 = 0xa0216;
  uRam0000000183432b20 = func_0x00018fcd35b0(uRam0000000183432c78 ^ 0x1cff83daffe178);
  uRam0000000183432cb0 = uRam0000000183432b20 ^ 0x3fda07b81e1257ac;
  uRam0000000183432a18 = uRam0000000183432a18 ^ uRam0000000183432cb0 ^ 0xaa415b5a1ab6e56c;
  uRam0000000183432c40 =
       (uRam0000000183432c40 * -0x728fc4b52713f487 ^ uRam0000000183432a18) + uRam0000000183432cb0;
  uRam0000000183432a10 = uRam0000000183432c40 ^ uRam0000000183432a18;
  lRam0000000183432a40 = 0;
  uVar2 = (uRam0000000183432a30 ^ 0x8422741c) + uRam0000000183432c70 + 0x8422741c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432a30 ^ 0x8422741c;
  uVar4 = ((uRam0000000183432c70 + uRam0000000183432a30) * 0x2000 |
          uRam0000000183432c70 + uRam0000000183432a30 >> 0x33) ^ uRam0000000183432c70;
  uRam0000000183432bc0 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183432a30 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183432c70 + 0x8422741c));
  uVar2 = (uRam0000000183432bc0 ^ 0x5739) << 0x28 | uRam0000000183432bc0 >> 0x18;
  uRam0000000183432bd8 = uRam0000000183432a18 ^ uVar2 ^ 0x5739;
  uRam0000000183432908 = (uRam0000000183432908 ^ uVar2) + 0x5739 ^ 0x89c576c870bb0a1;
  uRam0000000183432a88 = (uRam0000000183432a88 * 0x3770790025d86bbd ^ uRam0000000183432908) + uVar2;
  uRam00000001834329e8 = uRam0000000183432a88 ^ uRam0000000183432908;
  uRam0000000183432b18 = 0x5739;
  uVar2 = (~uRam00000001834329f0 + 0x100000000) *
          ((uRam0000000183432c30 ^ 0xfb6ce4fa) +
          (ulonglong)((uint)uRam0000000183432c30 & 0xfb6ce4fa) * 2);
  uVar2 = (uVar2 | uRam0000000183432a08) + (uVar2 & uRam0000000183432a08);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432a50 =
       func_0x00018fcd35b0((uVar2 | 0x4931b05) + (ulonglong)((uint)uVar2 & 0x4931b05));
  uVar2 = (uRam0000000183432bd0 ^ uRam0000000183432a50 ^ 0x7f4ec7df) + 0x80b13820;
  uRam0000000183432bd0 = uVar2 ^ 0x7c8fa442b3ba54f7;
  uRam0000000183432c48 =
       (uRam0000000183432960 * 0x774110e59ec37b83 ^ uRam0000000183432bd0) +
       (uRam0000000183432a50 ^ 0x7f4ec7df) ^ uRam0000000183432bd0;
  uRam0000000183432960 = 0x80b13820;
  uVar2 = (~uRam0000000183432b90 + 0x80b13821) *
          ((uVar2 ^ 0x7c8fa44248d6b00d) + (ulonglong)((uint)uRam0000000183432bd0 & 0xfb6ce4fa) * 2);
  uVar2 = (uVar2 | uRam0000000183432a00) + (uVar2 & uRam0000000183432a00);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432b50 =
       func_0x00018fcd35b0((uVar2 | 0x7bdddcda) + (ulonglong)((uint)uVar2 & 0x7bdddcda));
  uVar2 = uRam0000000183432b50 - (uRam0000000183432b50 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183432b50;
  uVar2 = uVar4 & 0x3ffffffff;
  uVar4 = uVar2 - (uVar4 >> 1 & 0x155555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar2;
  uRam0000000183432ad8 = uRam0000000183432ad8 ^ uVar2 ^ 0x815ace09e11c2387;
  uRam0000000183432c10 = (uRam0000000183432c10 * -0x2422fd189e0328cd ^ uRam0000000183432ad8) + uVar2
  ;
  uRam0000000183432968 = uRam0000000183432c10 ^ uRam0000000183432ad8;
  uRam0000000183432cd8 = 0;
  uVar2 = ((uRam0000000183432a58 ^ 0x8422741c) +
          (ulonglong)((uint)uRam0000000183432a58 & 0x8422741c) * 2) * -uRam0000000183432b48;
  uVar2 = (uVar2 | uRam0000000183432b30) + (uVar2 & uRam0000000183432b30);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183432a18 =
       func_0x00018fcd35b0((uVar2 | 0x8422741c) + (ulonglong)((uint)uVar2 & 0x8422741c));
  uRam0000000183432b38 = uRam0000000183432bd0 ^ uRam0000000183432a18 ^ 0x5739;
  uRam0000000183432ca8 = (uRam0000000183432ca8 ^ uRam0000000183432a18) + 0x5739 ^ 0x7149d89b8ab8e20e
  ;
  uRam0000000183432968 =
       (uRam0000000183432968 * -0x7fe9f60552270443 ^ uRam0000000183432ca8) + uRam0000000183432a18;
  uRam0000000183432c10 = uRam0000000183432968 ^ uRam0000000183432ca8;
  uRam0000000183432aa8 = uRam0000000183432980 ^ 0x5739;
  uRam0000000183432980 = 0x5739;
  uVar2 = (~uRam0000000183432a98 + 0x330c42d3) *
          ((uRam0000000183432a18 ^ 0xb72e61f7) +
          (ulonglong)((uint)uRam0000000183432a18 & 0xb72e61f7) * 2);
  uVar2 = (uVar2 | uRam0000000183432bc0) + (uVar2 & uRam0000000183432bc0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001834329c0 =
       func_0x00018fcd35b0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar2 = uRam00000001834329c0 ^ 0x330c42d2;
  uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar2) &
          0x1ffffffffffff;
  uRam0000000183432ac0 = uRam0000000183432ac0 ^ uVar2 ^ 0x597a272efa5963ab;
  uRam0000000183432b80 = (uRam0000000183432b80 * 0x405c693be2d75d03 ^ uRam0000000183432ac0) + uVar2;
  uRam0000000183432b00 = uRam0000000183432b80 ^ uRam0000000183432ac0;
  lRam0000000183432a40 = 0;
  uVar2 = (uRam0000000183432b28 ^ 0x8422741c) + uRam0000000183432cd0 + 0x8422741c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183432b28 ^ 0x8422741c;
  uVar4 = ((uRam0000000183432cd0 + uRam0000000183432b28) * 0x2000 |
          uRam0000000183432cd0 + uRam0000000183432b28 >> 0x33) ^ uRam0000000183432cd0;
  uRam0000000183432bd0 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183432b28 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183432cd0 + 0x8422741c));
  uVar2 = uRam0000000183432bd0 ^ 0x5739;
  uRam0000000183432bf8 = uRam00000001834329c8 ^ uVar2 ^ 0x5739;
  uRam0000000183432ce0 = (uRam0000000183432ce0 ^ uVar2) + 0x5739 ^ 0x29418a41727674f;
  uRam0000000183432ba0 = (uRam0000000183432ba0 * -0xb5754e60fdcc5e5 ^ uRam0000000183432ce0) + uVar2;
  uRam0000000183432950 = uRam0000000183432ba0 ^ uRam0000000183432ce0;
  uRam0000000183432900 = 0x5739;
  uVar2 = uVar5 ^ 0x84222325 ^ uRam0000000183432ab8;
  lVar6 = (uVar5 ^ 0x84222325) + uRam0000000183432ae0;
  uVar4 = uVar2 + lVar6;
  uVar9 = (uRam0000000183432ae0 ^ 0x5739) + uRam0000000183432ab8 + 0x5739;
  uVar2 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar2;
  uVar4 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183432ae0 ^ 0x5739;
  uRam0000000183432b58 =
       func_0x00018fcd35b0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183432ab8 + 0x5739) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar6);
  uVar2 = uRam0000000183432b58 >> 1 | uRam0000000183432b58;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183432b58;
  uRam0000000183432b90 = uVar5 ^ 0x5739;
  uRam0000000183432a30 = (uRam0000000183432a30 ^ uVar2) + uRam0000000183432b90 ^ 0xcb241e847128a866;
  uRam0000000183432bf0 = (uRam0000000183432bf0 * 0x703247ef0bd26259 ^ uRam0000000183432a30) + uVar2;
  uRam0000000183432b38 = uRam0000000183432bf0 ^ uRam0000000183432a30;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4f52,0xf4);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fcca2df did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182adc760 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dnb (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18fcd3640, runtime 6ffff78e3640) =====

void FUN_18fcd3640(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018fcd368b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ade7d0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ar$rT; dnc (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18fca9e60, runtime 6ffff78b9e60) =====

void FUN_18fca9e60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fca9ee9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ad93f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



