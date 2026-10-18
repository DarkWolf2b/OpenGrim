// ===== Lsixtwo/eQ; YO ()V (handler @ image 18bf3de80, runtime 6ffff3b4de80) =====

void FUN_18bf3de80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bf3deca did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75660 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; _653fe65b581c1d9c4d0f0c67cfd570a4 ()V (handler @ image 18bf8e1f0, runtime 6ffff3b9e1f0) =====

void FUN_18bf8e1f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bf8e2d8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d85b88 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18bf7b750, runtime 6ffff3b8b750) =====

void FUN_18bf7b750(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018bf7b78c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d810f0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18bf7c640, runtime 6ffff3b8c640) =====

void FUN_18bf7c640(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bf7c6bd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d81630 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCC (IJ)I (handler @ image 18bf7f100, runtime 6ffff3b8f100) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7f100(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = (uRam00000001832e1940 ^ _UNK_181d84390) + uRam00000001832e1a40 + 0x328925ea36c6ce3b;
  uVar7 = (uRam00000001832e1a40 ^ _UNK_181d84398) + uRam00000001832e1940 + 0x27abc354fd8ae1e9;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1940 ^ _UNK_181d84390;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1a40 ^ _UNK_181d84398;
  uRam00000001832e1af0 =
       func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832e1940 + 0x27abc354fd8ae1e9) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832e1a40 + 0x328925ea36c6ce3b));
  uVar6 = uRam00000001832e1af0 ^ 0x27abc354fd8ae1e9;
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar6;
  uRam00000001832e1a58 = (uRam00000001832e1a58 ^ uVar6) + 0x37abe7feffeeedff ^ 0xb4e7fba36ffda1a2;
  uRam00000001832e1ac0 = (uRam00000001832e1ac0 * 0x776321b812f6b8e9 ^ uRam00000001832e1a58) + uVar6;
  uRam00000001832e1a70 = uRam00000001832e1ac0 ^ uRam00000001832e1a58;
  uRam00000001832e1940 = 0x37abe7feffeeedff;
  uRam00000001832e1ae0 = func_0x00018bf8a440(uRam00000001832e19b8 ^ 0x52b9ad0f4dedaee9);
  uVar6 = (uRam00000001832e1ae0 & 0xffffffffffff8000 ^ 0x538aa790cbaca92) * -0x3eee33be9a85bcd9;
  uRam00000001832e1910 = (uRam00000001832e1910 ^ uVar6) + 0x7fbd127e8b75e997 ^ 0x586454692c2b4314;
  uRam00000001832e1a88 = (uRam00000001832e1a88 * 0x7b3b548e06a3e4e3 ^ uRam00000001832e1910) + uVar6;
  uRam00000001832e1a70 = uRam00000001832e1a88 ^ uRam00000001832e1910;
  uRam00000001832e19d0 = 0x7fbd127e8b75e997;
  uVar6 = (uRam00000001832e1a90 ^ _UNK_181d843a0) + uRam00000001832e1ac8 + 0x84222325;
  uVar7 = (uRam00000001832e1ac8 ^ _UNK_181d843a8) + uRam00000001832e1a90 + 0x6c16c7eea730c2c4;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1a90 ^ _UNK_181d843a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1ac8 ^ _UNK_181d843a8;
  uRam00000001832e1a10 =
       func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832e1a90 + 0x6c16c7eea730c2c4) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1ac8 + 0x84222325));
  uVar6 = uRam00000001832e1a10 << 0xc | uRam00000001832e1a10 >> 0x34;
  uRam00000001832e1ae0 = (uRam00000001832e1ae0 ^ uVar6) + 0x93e9381158cf3d3c ^ 0x45d49bfbcce3c636;
  uRam00000001832e1960 = (uRam00000001832e1960 * -0x10a8d27c9c95a529 ^ uRam00000001832e1ae0) + uVar6
  ;
  uRam00000001832e1a50 = uRam00000001832e1960 ^ uRam00000001832e1ae0;
  uRam00000001832e1af8 = 0x93e9381158cf3d3c;
  uVar6 = (~uRam00000001832e1a28 + 0x6c16c7eea730c2c5) *
          ((uRam00000001832e19b8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832e19b8 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam00000001832e1af0) + (uVar6 & uRam00000001832e1af0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018bf8a440((uVar6 | 0x6c16c7ee23129e1e) + (uVar6 & 0x6c16c7ee23129e1e));
  uVar6 = (uVar6 ^ 0xf7e08ba9ba313d3c) * 0x6c7cb865c24fd80b;
  uRam00000001832e1938 = uRam00000001832e19b0 ^ uVar6 ^ 0x6c16c7eea73142c3;
  uRam00000001832e19b8 = (uRam00000001832e19b8 ^ uVar6) + 0x6c16c7eea73142c3 ^ 0x7c28de140e5e6f50;
  uRam00000001832e1980 = (uRam00000001832e1980 * -0x5be9ef45133f643b ^ uRam00000001832e19b8) + uVar6
  ;
  uRam00000001832e1908 = uRam00000001832e1980 ^ uRam00000001832e19b8;
  uRam00000001832e1a58 = 0x6c16c7eea73142c3;
  uVar6 = (~uRam00000001832e1980 + 0x93e9381158cf3d3d) *
          ((uRam00000001832e1a88 ^ 0x6c16c7ee231361e6) +
          (uRam00000001832e1a88 & 0x6c16c7ee231361e6) * 2);
  uVar6 = (uVar6 | uRam00000001832e19e0) + (uVar6 & uRam00000001832e19e0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1a48 =
       func_0x00018bf8a440((uVar6 | 0xffffffff7bdc5cda) + (uVar6 & 0xffffffff7bdc5cda));
  uVar6 = uRam00000001832e1a48 ^ 0xffffffffffff7fff;
  uRam00000001832e19c8 = uRam00000001832e1980 ^ uVar6 ^ 0x7fff;
  uRam00000001832e19a0 = (uRam00000001832e19a0 ^ uVar6) + 0x7fff ^ 0x6e3071bd21420600;
  uRam00000001832e1a28 = (uRam00000001832e1a28 * -0x1ee07aafb0d14ebb ^ uRam00000001832e19a0) + uVar6
  ;
  uRam00000001832e1a38 = uRam00000001832e1a28 ^ uRam00000001832e19a0;
  uRam00000001832e1a18 = 0x7fff;
  uVar6 = (~uRam00000001832e1998 + 0xb4848bb8fdeba801) *
          ((uRam00000001832e1948 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832e1948 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam00000001832e19e8) + (uVar6 & uRam00000001832e19e8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1938 =
       func_0x00018bf8a440((uVar6 | 0xb4848bb879c98b25) + (uVar6 & 0xb4848bb879c98b25));
  uRam00000001832e1940 =
       (uRam00000001832e1940 ^ uRam00000001832e1938 ^ 0xb4848bb8fdeba800) + 0x4b7b744702145800 ^
       0xb9567ea2beaef910;
  uRam00000001832e1aa8 =
       (uRam00000001832e1aa8 * 0x464a06029790e1d9 ^ uRam00000001832e1940) +
       (uRam00000001832e1938 ^ 0xb4848bb8fdeba800);
  uRam00000001832e1a18 = uRam00000001832e1aa8 ^ uRam00000001832e1940;
  uRam00000001832e1a00 = 0x4b7b744702145800;
  uRam00000001832e1a88 = func_0x00018bf8a440(uRam00000001832e1ae8 + 0xa72b7bb9c68bb74b ^ 0xcb);
  uRam00000001832e1970 = uRam00000001832e1aa8 ^ uRam00000001832e1a88 ^ 0xb4848bb8fdec27ff;
  uRam00000001832e1af8 =
       (uRam00000001832e1af8 ^ uRam00000001832e1a88) + 0xb4848bb8fdec27ff ^ 0x89cb04f4ce3e23a5;
  uRam00000001832e1a00 =
       (uRam00000001832e1a00 * -0x53844274895b250f ^ uRam00000001832e1af8) + uRam00000001832e1a88;
  uRam00000001832e1918 = uRam00000001832e1a00 ^ uRam00000001832e1af8;
  uRam00000001832e1980 = -0x4b7b74470213d801;
  uVar6 = (~uRam00000001832e1a08 + 0x4b7b744702145801) *
          ((uRam00000001832e1a90 ^ 0xb4848bb879ce04da) +
          (uRam00000001832e1a90 & 0x34848bb879ce04da) * 2);
  uVar6 = (uVar6 | uRam00000001832e19e8) + (uVar6 & uRam00000001832e19e8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e19f8 =
       func_0x00018bf8a440((uVar6 | 0xffffffff7bda5cda) + (uVar6 & 0xffffffff7bda5cda));
  uVar6 = uRam00000001832e19f8 ^ 0x4b7b744702145800;
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar6;
  uRam00000001832e19d0 = uRam00000001832e1958 ^ uVar6 ^ 0x7fff;
  uRam00000001832e19e0 = (uRam00000001832e19e0 ^ uVar6) + 0x7fff ^ 0xc09562d860f49b0a;
  uRam00000001832e1a60 = (uRam00000001832e1a60 * -0x53118c4b6fdb42c9 ^ uRam00000001832e19e0) + uVar6
  ;
  uRam00000001832e1a88 = uRam00000001832e1a60 ^ uRam00000001832e19e0;
  uRam00000001832e19a8 = 0x7fff;
  uVar6 = (~uRam00000001832e1a58 + 0xb47e7edfa95fe9f5) *
          ((uRam00000001832e1a68 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832e1a68 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam00000001832e19c8) + (uVar6 & uRam00000001832e19c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1ae0 =
       func_0x00018bf8a440((uVar6 | 0xb47e7edf2d7dcad1) + (uVar6 & 0xb47e7edf2d7dcad1));
  uRam00000001832e1a78 = uRam00000001832e1a78 + 0x4b81812056a0160c ^ 0xaa261ab9622c95ae;
  uRam00000001832e1ad0 = uRam00000001832e1ad0 * 0x4ee1ec03f2c47a4d ^ uRam00000001832e1a78;
  uRam00000001832e19f0 = 0x4b81812056a0160c;
  uVar6 = (uRam00000001832e19d8 ^ _UNK_181d843b0) + uRam00000001832e1908 + 0x84225cda;
  uVar7 = (uRam00000001832e1908 ^ _UNK_181d843b8) + uRam00000001832e19d8 + 0xb47e7edfa95fe9f4;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e19d8 ^ _UNK_181d843b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1908 ^ _UNK_181d843b8;
  uVar6 = func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) -
                              (uRam00000001832e19d8 + 0xb47e7edfa95fe9f4) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1908 + 0x84225cda))
  ;
  uVar6 = (uVar6 & 0xfffffffffffc0000) << 8 | uVar6 >> 0x38;
  uRam00000001832e1950 = uRam00000001832e1ac8 ^ uVar6 ^ 0xb47e7edfa96069f3;
  uRam00000001832e19d0 = (uRam00000001832e19d0 ^ uVar6) + 0xb47e7edfa96069f3 ^ 0x673b728d972d28c9;
  uRam00000001832e1ae0 = (uRam00000001832e1ae0 * 0xd7bde189b59025f ^ uRam00000001832e19d0) + uVar6;
  uRam00000001832e1af8 = uRam00000001832e1ae0 ^ uRam00000001832e19d0;
  uRam00000001832e1958 = 0xb47e7edfa96069f3;
  uRam00000001832e1a70 = func_0x00018bf8a440(uRam00000001832e1948 + 0x92abd887b5ae22da ^ 0x57);
  uVar6 = uRam00000001832e1a70 ^ 0xb47e7edfa96069f3;
  uRam00000001832e1928 = uRam00000001832e19c0 ^ uVar6 ^ 0x7fff;
  uRam00000001832e19a0 = (uRam00000001832e19a0 ^ uVar6) + 0x7fff ^ 0x4097635a90a59ba7;
  uRam00000001832e1ad0 = (uRam00000001832e1ad0 * 0x64cdf7534ddd5def ^ uRam00000001832e19a0) + uVar6;
  uRam00000001832e1938 = uRam00000001832e1ad0 ^ uRam00000001832e19a0;
  uRam00000001832e1a48 = 0x7fff;
  uRam00000001832e1a60 = func_0x00018bf8a440(uRam00000001832e1958 ^ 0x7fe3121044eb76c7);
  uVar6 = uRam00000001832e1a60 - (uRam00000001832e1a60 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001832e1a60) << 5 | uRam00000001832e1a60 >> 0x3b;
  uRam00000001832e1948 = uRam00000001832e1af8 ^ uVar6 ^ 0xb768fa7d8b64d796;
  uRam00000001832e1aa0 = (uRam00000001832e1aa0 ^ uVar6) + 0xb768fa7d8b64d796 ^ 0xb40c0e090334f3d5;
  uRam00000001832e1ab8 = (uRam00000001832e1ab8 * -0x625451588fdf8fe1 ^ uRam00000001832e1aa0) + uVar6
  ;
  uRam00000001832e1918 = uRam00000001832e1ab8 ^ uRam00000001832e1aa0;
  uRam00000001832e1990 = 0xb768fa7d8b64d796;
  uVar6 = (~uRam00000001832e19c0 + 0x7fbd127e8b75e998) *
          ((uRam00000001832e1ad0 ^ 0x37abe7fe7bccceda) +
          (uRam00000001832e1ad0 & 0x37abe7fe7bccceda) * 2);
  uVar6 = (uVar6 | uRam00000001832e19c0) + (uVar6 & uRam00000001832e19c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1ae0 =
       func_0x00018bf8a440((uVar6 | 0x4816f580f0b9274d) + (uVar6 & 0x4816f580f0b9274d));
  uVar6 = ((uRam00000001832e1ae0 ^ 0x7fbff7feffffedff) << 0xb |
          (uRam00000001832e1ae0 ^ 0x7fbff7feffffedff) >> 0x35) * 0x100bb4eb9f5eff0b;
  uVar7 = (uRam00000001832e1ad8 ^ uVar6) + 0x37a9027e8b64e997;
  uRam00000001832e1ad8 = uVar7 ^ 0xefea66b1cc333aa;
  uRam00000001832e1998 = (uRam00000001832e1998 * -0x4a663e5c21fc6311 ^ uRam00000001832e1ad8) + uVar6
  ;
  uRam00000001832e1900 = uRam00000001832e1998 ^ uRam00000001832e1ad8;
  uRam00000001832e19a8 = 0x37a9027e8b64e997;
  uVar6 = (~uRam00000001832e1998 + 0x6f5204fd16c9d32f) *
          ((uVar7 ^ 0x46e853ebec7a14e7) + (uRam00000001832e1ad8 & 0x4816f580f0b9274d) * 2);
  uVar6 = (uVar6 | uRam00000001832e1990) + (uVar6 & uRam00000001832e1990);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1a80 =
       func_0x00018bf8a440((uVar6 | 0x2744f17de670f463) + (uVar6 & 0x2744f17de670f463));
  uRam00000001832e19a0 = uRam00000001832e1a18 ^ uRam00000001832e1a80 ^ 0xb768fa7d8b64d796;
  uRam00000001832e1a18 =
       (uRam00000001832e1a18 ^ uRam00000001832e1a80) + 0xb768fa7d8b64d796 ^ 0xb232dd98baaedb98;
  uRam00000001832e1988 =
       (uRam00000001832e1988 * 0x62b30e698fa9b011 ^ uRam00000001832e1a18) + uRam00000001832e1a80;
  uRam00000001832e1950 = uRam00000001832e1988 ^ uRam00000001832e1a18;
  uRam00000001832e1ab8 = 0xb768fa7d8b64d796;
  uVar6 = (~uRam00000001832e1a18 + 0xb768fa7d8b64d797) *
          ((uRam00000001832e1a58 ^ 0xb768fa7d0f46f4b3) +
          (uRam00000001832e1a58 & 0x3768fa7d0f46f4b3) * 2);
  uVar6 = (uVar6 | uRam00000001832e1920) + (uVar6 & uRam00000001832e1920);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1ac0 =
       func_0x00018bf8a440((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uRam00000001832e19d0 = uRam00000001832e19d0 ^ uRam00000001832e1ac0 ^ 0x202440ba1da14232;
  uRam00000001832e1980 =
       (uRam00000001832e1980 * -0x7f8605a43b4cecc1 ^ uRam00000001832e19d0) + uRam00000001832e1ac0;
  uRam00000001832e1940 = uRam00000001832e1980 ^ uRam00000001832e19d0;
  uRam00000001832e1ac8 = 0;
  uRam00000001832e1ad8 = uRam00000001832e1ac0;
  uRam00000001832e1a10 = func_0x00018bf8a440(uRam00000001832e1a18 ^ 0x10ed47be4e7ceb7);
  uRam00000001832e1978 =
       (uRam00000001832e1978 ^ uRam00000001832e1a10 & 0x37abe7feffeeed80) + 0xc854180100111200 ^
       0x94b3a109dc99ffa2;
  uRam00000001832e1948 =
       (uRam00000001832e1948 * -0x668c256fbef37623 ^ uRam00000001832e1978) +
       (uRam00000001832e1a10 & 0x37abe7feffeeed80);
  uRam00000001832e1a00 = uRam00000001832e1948 ^ uRam00000001832e1978;
  uRam00000001832e1a28 = 0xc854180100111200;
  uVar6 = func_0x00018bf8a440(uRam00000001832e1950 ^ 0x13abb8b4ca7b2577);
  uRam00000001832e1930 = uVar6 ^ ~uVar6 & 0x37abe7feffeeedff ^ 0x5cdaefc059fa20a1;
  uRam00000001832e1ae0 =
       (uRam00000001832e1ae0 * 0x76e25d9a9439ef2f ^ uRam00000001832e1930) +
       (~uVar6 & 0x37abe7feffeeedff);
  uRam00000001832e1a70 = uRam00000001832e1ae0 ^ uRam00000001832e1930;
  uRam00000001832e1998 = 0;
  uRam00000001832e1ab8 = func_0x00018bf8a440(uRam00000001832e1ad8 + 0x44007cb60021ff ^ 0x73);
  uRam00000001832e1a68 = (ulonglong)(~(uint)uRam00000001832e1ab8 & 0x7fff);
  uVar6 = uRam00000001832e1ab0 ^ uRam00000001832e1a68;
  uRam00000001832e1ab0 = (uRam00000001832e1ab0 ^ uRam00000001832e1a68) + 0x7fff ^ 0xd07980000855f04f
  ;
  uRam00000001832e1a68 =
       ((uVar6 ^ 0x7fff) * 0x510f3cca4b4d529d ^ uRam00000001832e1ab0) + uRam00000001832e1a68;
  uRam00000001832e1ae8 = uRam00000001832e1a68 ^ uRam00000001832e1ab0;
  uRam00000001832e1938 = 0x7fff;
  uRam00000001832e1900 = func_0x00018bf8a440(uRam00000001832e1a20 + 0x230083db001dff ^ 0x72);
  uVar6 = (uRam00000001832e1900 ^ 0x328925eab2e4ed1e) << 0xc |
          (uRam00000001832e1900 ^ 0x328925eab2e4ed1e) >> 0x34;
  uRam00000001832e1a90 = uRam00000001832e1a90 ^ uVar6 ^ 0x2b0dcd1d104b0985;
  uRam00000001832e1ad8 = (uRam00000001832e1ad8 * 0x5ad07c8c6c582ceb ^ uRam00000001832e1a90) + uVar6;
  uRam00000001832e1a80 = uRam00000001832e1ad8 ^ uRam00000001832e1a90;
  uRam00000001832e1980 = 0;
  uVar6 = ((uRam00000001832e1ae0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832e1ae0 & 0x84225cda) * 2) * -uRam00000001832e19c8;
  uVar6 = (uVar6 | uRam00000001832e1a38) + (uVar6 & uRam00000001832e1a38);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1910 =
       func_0x00018bf8a440((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = uRam00000001832e1910 ^ 0x7fff;
  uRam00000001832e1aa0 = uRam00000001832e1a10 ^ uVar6 ^ 0x7fff;
  uRam00000001832e1a40 = (uRam00000001832e1a40 ^ uVar6) + 0x7fff ^ 0x8168573745ca142e;
  uRam00000001832e1a88 = (uRam00000001832e1a88 * 0x509c4731ea12c647 ^ uRam00000001832e1a40) + uVar6;
  uRam00000001832e1a90 = uRam00000001832e1a88 ^ uRam00000001832e1a40;
  uRam00000001832e1aa8 = 0x7fff;
  uVar6 = param_4 ^ 0x84222325 ^ uRam00000001832e19a8;
  lVar3 = (param_4 ^ 0x84222325) + uRam00000001832e1a60;
  uVar7 = uVar6 + lVar3;
  uVar9 = (uRam00000001832e1a60 ^ 0x7fff) + uRam00000001832e19a8 + 0x7fff;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832e1a60 ^ 0x7fff;
  uVar6 = func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e19a8 + 0x7fff) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - lVar3);
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 0x20;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar5 = (ulonglong)uVar2;
  uRam00000001832e19a0 = uVar7 + uVar5 ^ 0x63493e5aedb13f53;
  uRam00000001832e1ae8 =
       (uRam00000001832e1ae8 * 0x4ea74c38ac43b9ed ^ uRam00000001832e19a0) + (uVar7 ^ uVar6);
  uRam00000001832e19d8 = uRam00000001832e1ae8 ^ uRam00000001832e19a0;
  uVar6 = uVar5 ^ 0x84222325 ^ uRam00000001832e1990;
  uVar7 = param_3 ^ uRam00000001832e1930;
  lVar4 = (uVar5 ^ 0x84222325) + uRam00000001832e1930;
  lVar3 = uRam00000001832e1990 + param_3;
  uVar9 = uVar6 + lVar4;
  uVar8 = uVar7 + lVar3;
  uVar6 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uRam00000001832e1ab0 = uVar5;
  uRam00000001832e19a0 =
       func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) - lVar3 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar4);
  uVar9 = (ulonglong)(uVar2 ^ param_3);
  uRam00000001832e1ae0 =
       (uRam00000001832e1ae0 ^ uVar5 ^ uRam00000001832e19a0) + uVar9 ^ 0x7e6e754ebce70ca9;
  uRam00000001832e19d0 =
       (uRam00000001832e19d0 * 0x505086ac7bfbbaa9 ^ uRam00000001832e1ae0) +
       (uVar5 ^ uRam00000001832e19a0);
  uRam00000001832e1a50 = uRam00000001832e19d0 ^ uRam00000001832e1ae0;
  uVar6 = (uRam00000001832e1990 ^ _UNK_181d843c0) + uRam00000001832e1918 + 0xb46bb162;
  uVar7 = (uRam00000001832e1918 ^ _UNK_181d843c8) + uRam00000001832e1990 + 0x7dfecf87;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1990 ^ _UNK_181d843c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1918 ^ _UNK_181d843c8;
  uRam00000001832e19e8 = uVar9;
  uRam00000001832e1a18 =
       func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e1990 + 0x7dfecf87) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1918 + 0xb46bb162));
  uVar6 = (uRam00000001832e1ab8 << 0x31 | uRam00000001832e1ab8 >> 0xf) ^ 0x30499247;
  uRam00000001832e19a0 = (uRam00000001832e19a0 ^ uVar6) + 0x4db75dc0 ^ 0xc83f4134ca0407b7;
  uRam00000001832e1988 = (uRam00000001832e1988 * 0x6f80509b6873139b ^ uRam00000001832e19a0) + uVar6;
  uRam00000001832e1a60 = uRam00000001832e1988 ^ uRam00000001832e19a0;
  uRam00000001832e1a40 = 0x4db75dc0;
  uVar6 = (~uRam00000001832e1990 + 0x363b7c01) *
          ((uRam00000001832e1938 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832e1938 & 0x84222325) * 2);
  uVar6 = (uVar6 | 0x4db75dc0) + (uVar6 & 0x4db75dc0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e19d8 =
       func_0x00018bf8a440((uVar6 | 0xb2195f25) + (ulonglong)((uint)uVar6 & 0xb2195f25));
  uVar6 = (uRam00000001832e19d8 ^ 0x36000000) & 0xffffffffff800000;
  uRam00000001832e1980 = (uRam00000001832e1980 ^ uVar6) - 0x363b7c00 ^ 0xa3f97e2ec9a6a62b;
  uRam00000001832e1ad8 = (uRam00000001832e1ad8 * -0x716d7669696c97ab ^ uRam00000001832e1980) + uVar6
  ;
  uRam00000001832e1968 = uRam00000001832e1ad8 ^ uRam00000001832e1980;
  uRam00000001832e1a20 = 0xc9c48400;
  uVar6 = (uRam00000001832e19d0 ^ _UNK_181d843d0) + uRam00000001832e1920 + 0xb219a57c;
  uVar7 = (uRam00000001832e1920 ^ _UNK_181d843d8) + uRam00000001832e19d0 + 0xc9c48400;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e19d0 ^ _UNK_181d843d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1920 ^ _UNK_181d843d8;
  uRam00000001832e1ad0 =
       func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e19d0 + 0xc9c48400) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1920 + 0xb219a57c));
  uVar7 = uRam00000001832e1ad0 << 0x3c | uRam00000001832e1ad0 >> 4;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  uRam00000001832e1908 = uRam00000001832e1a98 ^ uVar7 ^ 0x100000a59;
  uRam00000001832e19c0 = (uRam00000001832e19c0 ^ uVar7) + 0x100000a59 ^ 0x6c7dcb0a703eddef;
  uRam00000001832e1a48 = (uRam00000001832e1a48 * 0x20130066955ce03 ^ uRam00000001832e19c0) + uVar7;
  uRam00000001832e1960 = uRam00000001832e1a48 ^ uRam00000001832e19c0;
  uRam00000001832e1a28 = 0xa59;
  uRam00000001832e1a28 = func_0x00018bf8a440(uRam00000001832e1a98 ^ 0xffa0ff6b3a00ebb5);
  uVar6 = (uRam00000001832e1a28 << 0x2d | uRam00000001832e1a28 >> 0x13) >> 0x12 |
          (uRam00000001832e1a28 >> 0x13) << 0x2e;
  uRam00000001832e1ac8 = uRam00000001832e1ac8 ^ uVar6 ^ 0x2bd65313;
  uRam00000001832e1a38 = (uRam00000001832e1a38 ^ uVar6) + 0x2bd65313 ^ 0x8d79ca3e2b56e5fa;
  uRam00000001832e1910 = (uRam00000001832e1910 * -0x118137813e4da351 ^ uRam00000001832e1a38) + uVar6
  ;
  uRam00000001832e1908 = uRam00000001832e1910 ^ uRam00000001832e1a38;
  uRam00000001832e19a0 = 0x2bd65313;
  uRam00000001832e1aa8 = func_0x00018bf8a440(uRam00000001832e19e8 + 0xff45007ad00052ff ^ 0x73);
  uVar6 = uRam00000001832e1aa8 << 0x1f | uRam00000001832e1aa8 >> 0x21;
  uRam00000001832e1950 = uRam00000001832e1930 ^ uVar6 ^ 0x100000a59;
  uRam00000001832e1a10 = (uRam00000001832e1a10 ^ uVar6) + 0x100000a59 ^ 0x6502bafb1f6b1b0a;
  uRam00000001832e1a30 = (uRam00000001832e1a30 * -0x1989d0c1195a3191 ^ uRam00000001832e1a10) + uVar6
  ;
  uRam00000001832e19b8 = uRam00000001832e1a30 ^ uRam00000001832e1a10;
  uRam00000001832e1920 = 0xa59;
  uRam00000001832e1a68 = func_0x00018bf8a440(uRam00000001832e1a30 + 0xff56ffc65d00a7ff ^ 0x5d);
  uRam00000001832e1940 = uRam00000001832e1940 - 0xdd9a9ac0 ^ 0x3328c4310be14dfa;
  uRam00000001832e1ab0 = uRam00000001832e1a58 * 0x2059a844cca83017;
  uRam00000001832e1a58 = uRam00000001832e1ab0 ^ uRam00000001832e1940;
  uRam00000001832e19f8 = 0x22656540;
  uVar6 = (uRam00000001832e1a58 ^ _UNK_181d843e0) + uRam00000001832e1a70 + 0x8422297c;
  uVar7 = (uRam00000001832e1a70 ^ _UNK_181d843e8) + uRam00000001832e1a58 + 0xdd9a9ac0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1a58 ^ _UNK_181d843e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1a70 ^ _UNK_181d843e8;
  uRam00000001832e1a28 =
       func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e1a58 + 0xdd9a9ac0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1a70 + 0x8422297c));
  uVar6 = (ulonglong)((~(uint)uRam00000001832e1a28 & 0xa59) << 0xd) * 0x20000;
  uRam00000001832e1930 = uRam00000001832e1968 ^ uVar6 ^ 0xdd9aa519;
  uRam00000001832e1a00 = (uRam00000001832e1a00 ^ uVar6) + 0xdd9aa519 ^ 0xd5fb364b798f413a;
  uRam00000001832e1a88 = (uRam00000001832e1a88 * 0x1421f7d7bffcb845 ^ uRam00000001832e1a00) + uVar6;
  uRam00000001832e1a78 = uRam00000001832e1a88 ^ uRam00000001832e1a00;
  uRam00000001832e1ad0 = 0xdd9aa519;
  uVar6 = (~uRam00000001832e19c0 + 0x22656541) *
          ((uRam00000001832e1978 ^ 0x59b8863c) +
          (ulonglong)((uint)uRam00000001832e1978 & 0x59b8863c) * 2);
  uVar6 = (uVar6 | uRam00000001832e1980) + (uVar6 & uRam00000001832e1980);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018bf8a440((uVar6 | 0x7bdde37c) + (ulonglong)((uint)uVar6 & 0x7bdde37c));
  uVar6 = uVar6 ^ 0xdd9aa519;
  uRam00000001832e1a50 = uRam00000001832e1940 ^ uVar6 ^ 0x100000a59;
  uRam00000001832e1a70 = (uRam00000001832e1a70 ^ uVar6) + 0x100000a59 ^ 0xb63ba073cc6a448c;
  uRam00000001832e19b8 = (uRam00000001832e19b8 * -0x50d3d5213cb57045 ^ uRam00000001832e1a70) + uVar6
  ;
  uRam00000001832e1978 = uRam00000001832e19b8 ^ uRam00000001832e1a70;
  uRam00000001832e1920 = 0xa59;
  uVar6 = (~uRam00000001832e1958 + 0x4db75dc1) *
          ((uRam00000001832e1af0 ^ 0x3942dcd7) +
          (ulonglong)((uint)uRam00000001832e1af0 & 0x3942dcd7) * 2);
  uVar6 = (uVar6 | uRam00000001832e19b8) + (uVar6 & uRam00000001832e19b8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1a88 =
       func_0x00018bf8a440((uVar6 | 0x74f58117) + (ulonglong)((uint)uVar6 & 0x74f58117));
  uVar6 = uRam00000001832e1a88 & 0xfffffffff;
  uRam00000001832e1928 = uRam00000001832e1a98 ^ uVar6 ^ 0x10b185db2;
  uRam00000001832e1a60 = (uRam00000001832e1a60 ^ uVar6) + 0x10b185db2 ^ 0xd01fd10c66ee8f1d;
  uRam00000001832e1a30 = (uRam00000001832e1a30 * -0x3f3a1c4668088a0d ^ uRam00000001832e1a60) + uVar6
  ;
  uRam00000001832e1978 = uRam00000001832e1a30 ^ uRam00000001832e1a60;
  uRam00000001832e19d8 = 0xb185db2;
  uVar6 = (~uRam00000001832e1ad0 + 0x1a40bb81) *
          ((uRam00000001832e1a28 ^ 0x74f58117) +
          (ulonglong)((uint)uRam00000001832e1a28 & 0x74f58117) * 2);
  uVar6 = (uVar6 | uRam00000001832e1ad0) + (uVar6 & uRam00000001832e1ad0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1aa8 =
       func_0x00018bf8a440((uVar6 | 0x6eb53a97) + (ulonglong)((uint)uVar6 & 0x6eb53a97));
  uRam00000001832e1ae8 = uRam00000001832e19b8 ^ uRam00000001832e1aa8 ^ 0x10b185db2;
  uRam00000001832e1a20 =
       (uRam00000001832e1a20 ^ uRam00000001832e1aa8) + 0x10b185db2 ^ 0x5e55c2031dba382c;
  uRam00000001832e1958 =
       (uRam00000001832e1958 * -0x306f4c0f083941ad ^ uRam00000001832e1a20) + uRam00000001832e1aa8;
  uRam00000001832e19c0 = uRam00000001832e1958 ^ uRam00000001832e1a20;
  uRam00000001832e19d0 = 0xb185db2;
  uRam00000001832e1988 = func_0x00018bf8a440(uRam00000001832e19e0 ^ 0x16ff846bffdddc);
  uVar6 = uRam00000001832e1988 ^ 0xa59;
  uRam00000001832e1af0 = uRam00000001832e1a48 ^ uVar6 ^ 0xa59;
  uRam00000001832e1928 = (uRam00000001832e1928 ^ uVar6) + 0xa59 ^ 0x969ec605efdd1715;
  uRam00000001832e1a58 = (uRam00000001832e1a58 * 0x31b01b305939ffeb ^ uRam00000001832e1928) + uVar6;
  uRam00000001832e1af8 = uRam00000001832e1a58 ^ uRam00000001832e1928;
  uRam00000001832e1910 = 0xa59;
  uVar6 = (uRam00000001832e1938 ^ _UNK_181d843f0) + uRam00000001832e19c8 + 0x3942dcd7;
  uVar7 = (uRam00000001832e19c8 ^ _UNK_181d843f8) + uRam00000001832e1938 + 0x429f000d;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1938 ^ _UNK_181d843f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e19c8 ^ _UNK_181d843f8;
  uRam00000001832e1900 =
       func_0x00018bf8a440((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e1938 + 0x429f000d) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e19c8 + 0x3942dcd7));
  uVar6 = (uRam00000001832e1900 ^ 0x429f000d) * -0x58d8698b0195bc19;
  uRam00000001832e1918 = uRam00000001832e1918 ^ uVar6 ^ 0xbffc85944c7b6354;
  uRam00000001832e1a48 = (uRam00000001832e1a48 * 0x18f79f72f04137d5 ^ uRam00000001832e1918) + uVar6;
  uRam00000001832e1918 = uRam00000001832e1a48 ^ uRam00000001832e1918;
  uRam00000001832e1ad0 = 0;
  uVar6 = func_0x00018bf8a440(uRam00000001832e1ab8 ^ 0xffd6ff7babffdd70);
  uVar6 = uVar6 ^ 0xa59;
  uRam00000001832e1a10 = uRam00000001832e19f0 ^ uVar6 ^ 0xa59;
  uRam00000001832e1a90 = (uRam00000001832e1a90 ^ uVar6) + 0xa59 ^ 0x1ac94e37038fae4f;
  uRam00000001832e1a00 = (uRam00000001832e1a00 * -0x67dd75496b464af7 ^ uRam00000001832e1a90) + uVar6
  ;
  uRam00000001832e1a98 = uRam00000001832e1a00 ^ uRam00000001832e1a90;
  uRam00000001832e1aa8 = 0xa59;
  uVar6 = (~uRam00000001832e1940 + 0xa5a) *
          ((uVar9 ^ 0x84222325 ^ uRam00000001832e1a18) +
          (ulonglong)((uint)uRam00000001832e1a18 & (uint)(uVar9 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | uRam00000001832e1ad8) + (uVar6 & uRam00000001832e1ad8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1948 =
       func_0x00018bf8a440((uVar9 ^ 0x8422297c | uVar6) +
                           (ulonglong)((uint)(uVar9 ^ 0x8422297c) & (uint)uVar6));
  uRam00000001832e1958 = uVar9 ^ 0xa59;
  uRam00000001832e1a28 =
       (uRam00000001832e1a28 ^ uRam00000001832e1948 & 0x7fffffffffffffff) + uRam00000001832e1958 ^
       0x53c00c304133cb4d;
  uRam00000001832e1a78 =
       (uRam00000001832e1a78 * -0x366c68a9a02ab999 ^ uRam00000001832e1a28) +
       (uRam00000001832e1948 & 0x7fffffffffffffff);
  uRam00000001832e19d8 = uRam00000001832e1a78 ^ uRam00000001832e1a28;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bf81417 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d82530 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18bf8a4d0, runtime 6ffff3b9a4d0) =====

void FUN_18bf8a4d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018bf8a51b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d845b0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18bf8b4e0, runtime 6ffff3b9b4e0) =====

void FUN_18bf8b4e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bf8b569 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d84b70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCd (Lsixtwo/gM;)V (handler @ image 18bf3e140, runtime 6ffff3b4e140) =====

void FUN_18bf3e140(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3e160 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75750 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCe (Lsixtwo/gH$th;)V (handler @ image 18bf3f730, runtime 6ffff3b4f730) =====

void FUN_18bf3f730(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bf3f7fa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d760f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCf (Lsixtwo/hw$tv;)V (handler @ image 18bfa9ee0, runtime 6ffff3bb9ee0) =====

void FUN_18bfa9ee0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bfa9faa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d885f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCg (Lsixtwo/hw$tw;)V (handler @ image 18bfb3100, runtime 6ffff3bc3100) =====

void FUN_18bfb3100(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bfb31c1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d8b4c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCh (Lsixtwo/gA;)V (handler @ image 18bfb7610, runtime 6ffff3bc7610) =====

void FUN_18bfb7610(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bfb76d4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d8c930 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCi ()Z (handler @ image 18bfbb260, runtime 6ffff3bcb260) =====

void FUN_18bfbb260(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bfbb31e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d8db50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCj ()Lsixtwo/ct; (handler @ image 18bfc1710, runtime 6ffff3bd1710) =====

void FUN_18bfc1710(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bfc1730 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d8f8e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCk ()Lsixtwo/cu; (handler @ image 18bfc1910, runtime 6ffff3bd1910) =====

void FUN_18bfc1910(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bfc1930 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d8f9c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCl ()Lsixtwo/cu; (handler @ image 18bfc1b10, runtime 6ffff3bd1b10) =====

void FUN_18bfc1b10(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bfc1b30 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d8faa0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCm ()Lsixtwo/cC; (handler @ image 18bf3e330, runtime 6ffff3b4e330) =====

void FUN_18bf3e330(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3e350 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75820 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCn ()Lsixtwo/cC; (handler @ image 18bf3e530, runtime 6ffff3b4e530) =====

void FUN_18bf3e530(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3e550 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75900 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCo ()Lsixtwo/ct; (handler @ image 18bf3e730, runtime 6ffff3b4e730) =====

void FUN_18bf3e730(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3e750 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d759e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCp ()Lsixtwo/cu; (handler @ image 18bf3e930, runtime 6ffff3b4e930) =====

void FUN_18bf3e930(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3e950 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75ac0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCq ()Lsixtwo/cu; (handler @ image 18bf3eb30, runtime 6ffff3b4eb30) =====

void FUN_18bf3eb30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3eb50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75ba0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCr ()Lsixtwo/cu; (handler @ image 18bf3ed30, runtime 6ffff3b4ed30) =====

void FUN_18bf3ed30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3ed50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75c80 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCs ()Lsixtwo/cC; (handler @ image 18bf3ef30, runtime 6ffff3b4ef30) =====

void FUN_18bf3ef30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3ef50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75d60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCt ()Lsixtwo/cD; (handler @ image 18bf3f130, runtime 6ffff3b4f130) =====

void FUN_18bf3f130(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3f150 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75e40 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCu ()Lsixtwo/mT; (handler @ image 18bf3f330, runtime 6ffff3b4f330) =====

void FUN_18bf3f330(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3f350 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d75f20 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCv ()Z (handler @ image 18bf3f530, runtime 6ffff3b4f530) =====

void FUN_18bf3f530(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf3f550 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d76000 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCw ()Z (handler @ image 18bf48360, runtime 6ffff3b58360) =====

void FUN_18bf48360(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bf48380 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d78dd0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCx (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18bf48560, runtime 6ffff3b58560) =====

undefined8 FUN_18bf48560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/eQ; aCy ([B)Ljava/lang/String; (handler @ image 18bf485f0, runtime 6ffff3b585f0) =====

void FUN_18bf485f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018bf48690 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d79030 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eQ; aCz (IJ)Ljava/lang/String; (handler @ image 18bf74860, runtime 6ffff3b84860) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf74860(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (uRam00000001832e1828 ^ _UNK_181d80ed0) + uRam00000001832e18c0 + 0xb32882a2eee5abfa;
  uVar7 = (uRam00000001832e18c0 ^ _UNK_181d80ed8) + uRam00000001832e1828 + 0x323a7e4ad5aaa63b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1828 ^ _UNK_181d80ed0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e18c0 ^ _UNK_181d80ed8;
  uRam00000001832e1890 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832e1828 + 0x323a7e4ad5aaa63b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832e18c0 + 0xb32882a2eee5abfa));
  uVar6 = uRam00000001832e1890 * -0x1c32977b466f3b35 & 0xfffffffffffff;
  uRam00000001832e18d0 = (uRam00000001832e18d0 ^ uVar6) + 0xb33afeeaffefaeff ^ 0x72ddc22f84696d40;
  uRam00000001832e17a8 = (uRam00000001832e17a8 * 0x2e8cd122855b6f9d ^ uRam00000001832e18d0) + uVar6;
  uRam00000001832e1800 = uRam00000001832e17a8 ^ uRam00000001832e18d0;
  uRam00000001832e1798 = 0xb33afeeaffefaeff;
  uVar6 = (~uRam00000001832e1868 + 0xdf745731cfeb2997) *
          ((uRam00000001832e17b0 ^ 0x67c1a4d7b5596a8c) +
          (uRam00000001832e17b0 & 0x67c1a4d7b5596a8c) * 2);
  uVar6 = (uVar6 | uRam00000001832e1800) + (uVar6 & uRam00000001832e1800);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e18e0 =
       func_0x00018bf7b6c0((uVar6 | 0xb8b5f3e67ab2431a) + (uVar6 & 0xb8b5f3e67ab2431a));
  uRam00000001832e17a8 =
       (uRam00000001832e17a8 ^ uRam00000001832e1800) + 0xb8b5f3e6fe90603f ^ 0x5d97403095319d70;
  uRam00000001832e1830 =
       (uRam00000001832e1780 * 0x1702c6d3367835a1 ^ uRam00000001832e17a8) + uRam00000001832e1800 ^
       uRam00000001832e17a8;
  uRam00000001832e1780 = 0xb8b5f3e6fe90603f;
  uVar6 = (uRam00000001832e18c0 ^ _UNK_181d80ee0) + uRam00000001832e17f8 + 0x84222325;
  uVar7 = (uRam00000001832e17f8 ^ _UNK_181d80ee8) + uRam00000001832e18c0 + 0x412485912d65c7d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e18c0 ^ _UNK_181d80ee0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e17f8 ^ _UNK_181d80ee8;
  uRam00000001832e1768 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832e18c0 + 0x412485912d65c7d0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e17f8 + 0x84222325));
  uVar6 = uRam00000001832e1768 - (uRam00000001832e1768 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001832e1768;
  uRam00000001832e17a0 = (uRam00000001832e17a0 ^ uVar6) + 0xbedb7a6ed29a3830 ^ 0x42a2e15e20e51898;
  uRam00000001832e1818 = (uRam00000001832e1818 * 0x49fa6bfa67b005fd ^ uRam00000001832e17a0) + uVar6;
  uRam00000001832e1788 = uRam00000001832e1818 ^ uRam00000001832e17a0;
  uRam00000001832e1810 = 0xbedb7a6ed29a3830;
  uVar6 = (~uRam00000001832e1840 + 0x412485912d65c7d1) *
          ((uRam00000001832e1840 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832e1840 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam00000001832e17a0) + (uVar6 & uRam00000001832e17a0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e18b8 =
       func_0x00018bf7b6c0((uVar6 | 0x41248591a9479b0a) + (uVar6 & 0x41248591a9479b0a));
  uVar6 = uRam00000001832e18b8 ^ 0x1a41121b68247cf;
  uRam00000001832e1828 = uRam00000001832e18d0 ^ uVar6 ^ 0x412485912d6647cf;
  uRam00000001832e18c0 = (uRam00000001832e18c0 ^ uVar6) + 0x412485912d6647cf ^ 0x802937eccd29c2c;
  uRam00000001832e1800 = (uRam00000001832e1800 * -0x33bff90018162fd9 ^ uRam00000001832e18c0) + uVar6
  ;
  uRam00000001832e1810 = uRam00000001832e1800 ^ uRam00000001832e18c0;
  uRam00000001832e1720 = 0x412485912d6647cf;
  uVar6 = (~uRam00000001832e18b8 + 0xbedb7a6ed29a3831) *
          ((uRam00000001832e17b0 ^ 0x41248591a94464ea) +
          (uRam00000001832e17b0 & 0x41248591a94464ea) * 2);
  uVar6 = (uVar6 | uRam00000001832e1850) + (uVar6 & uRam00000001832e1850);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1850 =
       func_0x00018bf7b6c0((uVar6 | 0xffffffff7bde5cda) + (uVar6 & 0xffffffff7bde5cda));
  uVar6 = uRam00000001832e1850 ^ 0xbedb7a6ed29a3830;
  uRam00000001832e1740 = uRam00000001832e18d0 ^ uVar6 ^ 0x7fff;
  uRam00000001832e1720 = (uRam00000001832e1720 ^ uVar6) + 0x7fff ^ 0x409b6f0639b6a45d;
  uRam00000001832e18d0 = (uRam00000001832e18d0 * 0x6ef000057e650179 ^ uRam00000001832e1720) + uVar6;
  uRam00000001832e1838 = uRam00000001832e18d0 ^ uRam00000001832e1720;
  uRam00000001832e1860 = 0x7fff;
  uRam00000001832e1880 = func_0x00018bf7b6c0(uRam00000001832e18e0 + 0xab7076d4a3edeea7 ^ 0x20);
  uVar6 = uRam00000001832e1880 - (uRam00000001832e1880 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001832e1880;
  uRam00000001832e1778 = (uRam00000001832e1778 ^ uVar6) + 0x5770eda34e2f4db7 ^ 0xb16f0e35fba12bfb;
  uRam00000001832e17d0 = (uRam00000001832e17d0 * 0x4cad30ddf722fd9b ^ uRam00000001832e1778) + uVar6;
  uRam00000001832e17b8 = uRam00000001832e17d0 ^ uRam00000001832e1778;
  uRam00000001832e18c0 = 0x5770eda34e2f4db7;
  uVar6 = (~uRam00000001832e1800 + 0xa88f125cb1d0b24a) *
          ((uRam00000001832e17f8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832e17f8 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam00000001832e1818) + (uVar6 & uRam00000001832e1818);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1720 =
       func_0x00018bf7b6c0((uVar6 | 0xa88f125c35f2ee93) + (uVar6 & 0xa88f125c35f2ee93));
  uVar6 = uRam00000001832e1720 - (uRam00000001832e1720 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001832e1720;
  uRam00000001832e18f0 = uRam00000001832e1888 ^ uVar6 ^ 0xa88f125cb1d13248;
  uRam00000001832e18e0 = (uRam00000001832e18e0 ^ uVar6) + 0xa88f125cb1d13248 ^ 0xd1819094f5efc814;
  uRam00000001832e1770 = (uRam00000001832e1770 * 0xb264c245f59b5c1 ^ uRam00000001832e18e0) + uVar6;
  uRam00000001832e18a8 = uRam00000001832e1770 ^ uRam00000001832e18e0;
  uRam00000001832e1798 = 0xa88f125cb1d13248;
  uRam00000001832e1718 = func_0x00018bf7b6c0(uRam00000001832e1800 + 0xe40fecae20694caa ^ 0xe1);
  uVar6 = uRam00000001832e1718 >> 1 | uRam00000001832e1718;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001832e1718;
  uVar6 = (uVar6 & 0xffffffff) * (ulonglong)_UNK_181d80ef0 +
          ((ulonglong)_UNK_181d80f00 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_UNK_181d80ef0 << 0x20) & 0x7fffffffffffffff;
  uRam00000001832e1830 = (uRam00000001832e1830 ^ uVar6) + 0x44ca691b2968ccfb ^ 0x7f594c86e5bca124;
  uRam00000001832e1740 = (uRam00000001832e1740 * -0x3516af99e1d3c909 ^ uRam00000001832e1830) + uVar6
  ;
  uRam00000001832e1820 = uRam00000001832e1740 ^ uRam00000001832e1830;
  uRam00000001832e1818 = 0x44ca691b2968ccfb;
  uVar6 = (uRam00000001832e17f0 ^ _UNK_181d80f10) - 0x83e1a2e4;
  uVar7 = (_UNK_181d80f18 ^ 0x44ca691b2968ccfb) + uRam00000001832e17f0 + 0x44ca691b2968ccfb;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e17f0 ^ _UNK_181d80f10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _UNK_181d80f18 ^ 0x44ca691b2968ccfb;
  uRam00000001832e1878 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832e17f0 + 0x44ca691b2968ccfb) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) + 0x83e1a2e4);
  uVar6 = uRam00000001832e1878 & 0x1ffffffffffff ^ 0x44ca691b2968ccfb;
  uRam00000001832e1708 = uRam00000001832e18f8 ^ uVar6 ^ 0x7fff;
  uRam00000001832e1818 = (uRam00000001832e1818 ^ uVar6) + 0x7fff ^ 0x74d78ffd16f2480b;
  uRam00000001832e17e8 = (uRam00000001832e17e8 * -0x16517303565c9b53 ^ uRam00000001832e1818) + uVar6
  ;
  uRam00000001832e1728 = uRam00000001832e17e8 ^ uRam00000001832e1818;
  uRam00000001832e18c8 = 0x7fff;
  uVar6 = (~uRam00000001832e1740 + 0xb8b5f3e6fe906040) *
          ((uRam00000001832e18e0 ^ 0xb33afeea7bcd8dda) +
          (uRam00000001832e18e0 & 0x333afeea7bcd8dda) * 2);
  uVar6 = (uVar6 | uRam00000001832e18f0) + (uVar6 & uRam00000001832e18f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1860 =
       func_0x00018bf7b6c0((uVar6 | 0xb8f0d0c855dede5) + (uVar6 & 0xb8f0d0c855dede5));
  uVar6 = (uRam00000001832e1860 ^ 0x5c4f0b0000) & 0x7ffffff0000;
  uRam00000001832e1840 = uRam00000001832e17c0 ^ uVar6 ^ 0x6bf0f2d1fe800f3e;
  uRam00000001832e17f8 = (uRam00000001832e17f8 ^ uVar6) + 0x6bf0f2d1fe800f3e ^ 0x3b9e627efb5ce06f;
  uRam00000001832e17a8 = (uRam00000001832e17a8 * 0x1894ece313b4685f ^ uRam00000001832e17f8) + uVar6;
  uRam00000001832e1878 = uRam00000001832e17a8 ^ uRam00000001832e17f8;
  uRam00000001832e1750 = 0x6bf0f2d1fe800f3e;
  uVar6 = (~uRam00000001832e1728 + 0xb8b5f3e6fe906040) *
          ((uRam00000001832e1898 ^ 0xb33afeea7bcd8dda) +
          (uRam00000001832e1898 & 0x333afeea7bcd8dda) * 2);
  uVar6 = (uVar6 | uRam00000001832e1748) + (uVar6 & uRam00000001832e1748);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1718 =
       func_0x00018bf7b6c0((uVar6 | 0xb8f0d0c855dede5) + (uVar6 & 0xb8f0d0c855dede5));
  uRam00000001832e18e8 =
       (uRam00000001832e18e8 ^ uRam00000001832e1718 ^ 0xb33afeeaffefaeff) + 0xb8f0d0c017fcec0 ^
       0x1e2b1c8157a45727;
  uRam00000001832e1848 =
       (uRam00000001832e1848 * -0x42197e343d7a86d9 ^ uRam00000001832e18e8) +
       (uRam00000001832e1718 ^ 0xb33afeeaffefaeff);
  uRam00000001832e1700 = uRam00000001832e1848 ^ uRam00000001832e18e8;
  uRam00000001832e17e0 = 0xb8f0d0c017fcec0;
  uVar6 = (uRam00000001832e17e8 ^ _UNK_181d80f20) + uRam00000001832e1740 + 0xb33afeea7bcd8dda;
  uVar7 = (uRam00000001832e1740 ^ _UNK_181d80f28) + uRam00000001832e17e8 + 0xb8b5f3e6fe90603f;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e17e8 ^ _UNK_181d80f20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1740 ^ _UNK_181d80f28;
  uRam00000001832e1898 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832e17e8 + 0xb8b5f3e6fe90603f) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832e1740 + 0xb33afeea7bcd8dda));
  uRam00000001832e1708 =
       (uRam00000001832e1708 ^ uRam00000001832e1898 ^ 0x8cc016b6b0e41e3e) + 0xb030f2e2fe80203f ^
       0x5b7b15e1e0f43e;
  uRam00000001832e17e0 =
       (uRam00000001832e17e0 * 0x64adc9f579cf72f1 ^ uRam00000001832e1708) +
       (uRam00000001832e1898 ^ 0x8cc016b6b0e41e3e);
  uRam00000001832e1738 = uRam00000001832e17e0 ^ uRam00000001832e1708;
  uRam00000001832e18c0 = 0xb030f2e2fe80203f;
  uRam00000001832e1898 = func_0x00018bf7b6c0(uRam00000001832e1818 + 0xb69a9a489827bd1a ^ 0xc);
  uVar6 = ~uRam00000001832e1898 & 0xb8f0d0c017fcec0;
  uRam00000001832e1708 = uRam00000001832e1880 ^ uVar6 ^ 0x6bf0f2d1fe800f3e;
  uRam00000001832e1798 = (uRam00000001832e1798 ^ uVar6) + 0x6bf0f2d1fe800f3e ^ 0xb9d5c93b16702d1c;
  uRam00000001832e1890 = (uRam00000001832e1890 * 0xa72634d2e930f2f ^ uRam00000001832e1798) + uVar6;
  uRam00000001832e1818 = uRam00000001832e1890 ^ uRam00000001832e1798;
  lRam00000001832e1870 = 0x6bf0f2d1fe800f3e;
  uRam00000001832e1750 = func_0x00018bf7b6c0(uRam00000001832e1888 ^ 0x21007bdb0021ff);
  uRam00000001832e1820 = uRam00000001832e1820 ^ uRam00000001832e1750 ^ 0xc044a2a88c1261c0;
  uRam00000001832e17b0 =
       (uRam00000001832e17b0 * -0x486ea59f218cc4eb ^ uRam00000001832e1820) + uRam00000001832e1750;
  uRam00000001832e1868 = uRam00000001832e17b0 ^ uRam00000001832e1820;
  uRam00000001832e17e0 = 0;
  uVar6 = (uRam00000001832e1758 ^ _UNK_181d80f30) + uRam00000001832e17c8 + 0xb33afeea7bcd8dda;
  uVar7 = (uRam00000001832e17c8 ^ _UNK_181d80f38) + uRam00000001832e1758 + 0x4cc5011500105100;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1758 ^ _UNK_181d80f30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e17c8 ^ _UNK_181d80f38;
  uRam00000001832e18a0 = uRam00000001832e1750;
  uRam00000001832e17d8 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832e1758 + 0x4cc5011500105100) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832e17c8 + 0xb33afeea7bcd8dda));
  uVar6 = ((uRam00000001832e17d8 & 0xffffffffffffffc0) << 0x30 | uRam00000001832e17d8 >> 0x10) ^
          0xb33afeeaffefaeff;
  uRam00000001832e1808 = uRam00000001832e1808 ^ uVar6 ^ 0xfe45d0e205daae3f;
  uRam00000001832e1830 = (uRam00000001832e1830 * -0x2139934eb73dab8d ^ uRam00000001832e1808) + uVar6
  ;
  uRam00000001832e18b8 = uRam00000001832e1830 ^ uRam00000001832e1808;
  uRam00000001832e17c8 = 0;
  uVar6 = ((uRam00000001832e1780 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832e1780 & 0x84225cda) * 2) * -uRam00000001832e1740;
  uVar6 = (uVar6 | uRam00000001832e18c8) + (uVar6 & uRam00000001832e18c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e18e8 =
       func_0x00018bf7b6c0((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uRam00000001832e18d8 = uRam00000001832e1790 ^ uRam00000001832e18e8 ^ 0x7fff;
  uRam00000001832e17b8 = (uRam00000001832e17b8 ^ uRam00000001832e18e8) + 0x7fff ^ 0x87f857c00bfd3700
  ;
  uRam00000001832e1890 =
       (uRam00000001832e1890 * 0x19103a071fde5bc9 ^ uRam00000001832e17b8) + uRam00000001832e18e8;
  uRam00000001832e1898 = uRam00000001832e1890 ^ uRam00000001832e17b8;
  uRam00000001832e17c0 = 0x7fff;
  uVar6 = ((uRam00000001832e18f8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832e18f8 & 0x84225cda) * 2) * -lRam00000001832e1870;
  uVar6 = (uVar6 | uRam00000001832e1800) + (uVar6 & uRam00000001832e1800);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e17b0 =
       func_0x00018bf7b6c0((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = uRam00000001832e17b0 ^ 0x7fff;
  uRam00000001832e1820 = uRam00000001832e1700 ^ uVar6 ^ 0x7fff;
  uRam00000001832e1810 = (uRam00000001832e1810 ^ uVar6) + 0x7fff ^ 0x9524df3795dc49ff;
  uRam00000001832e18a0 = (uRam00000001832e18a0 * -0x1f1c4793623ad419 ^ uRam00000001832e1810) + uVar6
  ;
  uRam00000001832e1738 = 0x7fff;
  uVar6 = (~uRam00000001832e1770 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001832e1820) +
          ((param_4 ^ 0x84222325) & uRam00000001832e1820) * 2);
  uVar6 = (uVar6 | uRam00000001832e17c0) + (uVar6 & uRam00000001832e17c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1710 =
       func_0x00018bf7b6c0((param_4 ^ 0x84225cda | uVar6) + (uVar6 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar2;
  uRam00000001832e1840 = (uRam00000001832e1840 ^ uRam00000001832e1710) + uVar7 ^ 0x398fc3fcd19588da;
  uRam00000001832e17d0 =
       (uRam00000001832e17d0 * 0x10e32b0db305993f ^ uRam00000001832e1840) + uRam00000001832e1710;
  uRam00000001832e18c8 = uRam00000001832e17d0 ^ uRam00000001832e1840;
  uVar3 = (ulonglong)param_3;
  uVar4 = uVar7 ^ 0x84222325;
  uVar6 = ((uRam00000001832e17b0 ^ uVar4) +
          (ulonglong)((uint)uRam00000001832e17b0 & (uint)uVar4) * 2) *
          (uVar3 - uRam00000001832e18a0);
  uVar6 = (uVar6 | uRam00000001832e18f0) + (uVar6 & uRam00000001832e18f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1768 = uVar7;
  uRam00000001832e1768 =
       func_0x00018bf7b6c0((uVar4 ^ uVar3 | uVar6) +
                           (ulonglong)((uint)(uVar4 ^ uVar3) & (uint)uVar6));
  uVar3 = (uVar7 + uVar3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001832e1888 = (uRam00000001832e1888 ^ uRam00000001832e1768) + uVar3 ^ 0x73b35a9a8b243964;
  uRam00000001832e17b0 =
       (uRam00000001832e17b0 * 0x47400f6fd655eae1 ^ uRam00000001832e1888) + uRam00000001832e1768;
  uRam00000001832e1860 = uRam00000001832e17b0 ^ uRam00000001832e1888;
  uRam00000001832e17e8 = uRam00000001832e18f0 ^ uVar3;
  uVar4 = uVar3 & 0xffffffff;
  uVar6 = (uRam00000001832e18c8 ^ _UNK_181d80f40) + uRam00000001832e1760 + 0xcca34f83;
  uVar7 = (uRam00000001832e1760 ^ _UNK_181d80f48) + uRam00000001832e18c8 + 0x270e0493;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e18c8 ^ _UNK_181d80f40;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1760 ^ _UNK_181d80f48;
  uRam00000001832e1790 = uVar4;
  uRam00000001832e1810 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e18c8 + 0x270e0493) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1760 + 0xcca34f83));
  uRam00000001832e18a8 =
       (uRam00000001832e18a8 ^ uRam00000001832e1810) + 0x6f8f6cb7 ^ 0x2101e06be944dd50;
  uRam00000001832e1708 =
       (uRam00000001832e1708 * -0x28aa983505b93dfd ^ uRam00000001832e18a8) + uRam00000001832e1810;
  uRam00000001832e1788 = uRam00000001832e1708 ^ uRam00000001832e18a8;
  uRam00000001832e1828 = 0x6f8f6cb7;
  uRam00000001832e1778 = func_0x00018bf7b6c0(uRam00000001832e17d8 + 0xff83005063ffd6ff ^ 0xb7);
  uRam00000001832e1860 =
       (uRam00000001832e1860 ^ uRam00000001832e1778 ^ 0x9ee5132b) + 0xeb5ba681 ^ 0xf68ed09d4c940bbd;
  uRam00000001832e1820 =
       (uRam00000001832e1820 * 0x232b440e460cc267 ^ uRam00000001832e1860) +
       (uRam00000001832e1778 ^ 0x9ee5132b);
  uRam00000001832e1790 = uRam00000001832e1820 ^ uRam00000001832e1860;
  uRam00000001832e18c0 = 0xeb5ba681;
  uVar6 = (~uRam00000001832e17d0 + 0x5949926d) *
          ((uRam00000001832e17c8 ^ 0x842276b5) +
          (ulonglong)((uint)uRam00000001832e17c8 & 0x842276b5) * 2);
  uVar6 = (uVar6 | uRam00000001832e1700) + (uVar6 & uRam00000001832e1700);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1840 =
       func_0x00018bf7b6c0((uVar6 | 0xdd6be4d9) + (ulonglong)((uint)uVar6 & 0xdd6be4d9));
  uVar6 = (uRam00000001832e1840 ^ 0x5949826c) & 0x7fffffffffffffff;
  uRam00000001832e1820 = uRam00000001832e1760 ^ uVar6 ^ 0x5949e7fc;
  uRam00000001832e1898 = (uRam00000001832e1898 ^ uVar6) + 0x5949e7fc ^ 0x534d606713a4f8c9;
  uRam00000001832e1778 = (uRam00000001832e1778 * 0x1f2d14de85684bf ^ uRam00000001832e1898) + uVar6;
  uRam00000001832e1718 = uRam00000001832e1778 ^ uRam00000001832e1898;
  uRam00000001832e18a0 = 0x5949e7fc;
  uVar6 = (~uRam00000001832e18e8 + 0xa6b66d95) * 0x136b5acd5;
  uVar6 = (uVar6 | uRam00000001832e17f8) + (uVar6 & uRam00000001832e17f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e17c8 =
       func_0x00018bf7b6c0((uVar6 | 0x7bdda94d) + (ulonglong)((uint)uVar6 & 0x7bdda94d));
  uVar6 = uRam00000001832e17c8 ^ 0xa6b60800;
  uRam00000001832e1788 = uRam00000001832e17b0 ^ uVar6 ^ 0x100005590;
  uRam00000001832e1710 = (uRam00000001832e1710 ^ uVar6) + 0x100005590 ^ 0x431a4b54a8140f20;
  uRam00000001832e17a8 = (uRam00000001832e17a8 * -0x621ea159425fa4b7 ^ uRam00000001832e1710) + uVar6
  ;
  uRam00000001832e17e8 = uRam00000001832e17a8 ^ uRam00000001832e1710;
  uRam00000001832e1748 = 0x5590;
  uVar6 = (uRam00000001832e1738 ^ _UNK_181d80f50) + uRam00000001832e1708 + 0x84222325;
  uVar7 = (uRam00000001832e1708 ^ _UNK_181d80f58) + uRam00000001832e1738 + 0x4ac13de8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1738 ^ _UNK_181d80f50;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1708 ^ _UNK_181d80f58;
  uRam00000001832e1790 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e1738 + 0x4ac13de8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1708 + 0x84222325));
  uVar6 = uRam00000001832e1790 << 7 | uRam00000001832e1790 >> 0x39;
  uRam00000001832e1880 = (uRam00000001832e1880 ^ uVar6) - 0x4ac13de8 ^ 0xb408664cdb3f657f;
  uRam00000001832e17a8 = (uRam00000001832e17a8 * 0x1f7e3372e6ddb47 ^ uRam00000001832e1880) + uVar6;
  uRam00000001832e1798 = uRam00000001832e17a8 ^ uRam00000001832e1880;
  uRam00000001832e18f8 = 0xb53ec218;
  uRam00000001832e1748 = func_0x00018bf7b6c0(uRam00000001832e1860 ^ 0x38ffce3affdcd8);
  uVar6 = uRam00000001832e1748 - (uRam00000001832e1748 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (~((uint)uRam00000001832e1748 ^
            (uint)((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5)) &
          0x5590);
  uRam00000001832e1810 = uRam00000001832e17e8 ^ uVar6 ^ 0x4ac19378;
  uRam00000001832e1838 = (uRam00000001832e1838 ^ uVar6) + 0x4ac19378 ^ 0xee82da3f6815e28;
  uRam00000001832e18c8 = (uRam00000001832e18c8 * 0x1fbdd1955dacf63b ^ uRam00000001832e1838) + uVar6;
  uRam00000001832e1838 = uRam00000001832e18c8 ^ uRam00000001832e1838;
  uRam00000001832e18b0 = 0x4ac19378;
  uVar6 = (uRam00000001832e17c0 ^ _UNK_181d80f60) + uRam00000001832e1878 + 0x84222325;
  uVar7 = (uRam00000001832e1878 ^ _UNK_181d80f68) + uRam00000001832e17c0 + 0xeb978f10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e17c0 ^ _UNK_181d80f60;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1878 ^ _UNK_181d80f68;
  uRam00000001832e18d8 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e17c0 + 0xeb978f10) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1878 + 0x84222325));
  uVar6 = (uRam00000001832e18d8 ^ 0xeb978f10) & 0x7fffffffffffffff;
  uRam00000001832e17a0 = (uRam00000001832e17a0 ^ uVar6) - 0xeb978f10 ^ 0x2bdb49c6371b4025;
  uRam00000001832e1830 =
       (uRam00000001832e1830 * 0x7d6b4e8c89f09af9 ^ uRam00000001832e17a0) + uVar6 ^
       uRam00000001832e17a0;
  uRam00000001832e1720 = 0x146870f0;
  uVar6 = (~uRam00000001832e17f8 + 0xeb978f11) *
          ((uRam00000001832e1738 ^ 0x842276b5) +
          (ulonglong)((uint)uRam00000001832e1738 & 0x842276b5) * 2);
  uVar6 = (uVar6 | uRam00000001832e17f0) + (uVar6 & uRam00000001832e17f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e18f0 =
       func_0x00018bf7b6c0((uVar6 | 0x6fb5f9a5) + (ulonglong)((uint)uVar6 & 0x6fb5f9a5));
  uVar6 = uRam00000001832e18f0 ^ 0xeb978a00;
  uRam00000001832e1788 = uRam00000001832e17d0 ^ uVar6 ^ 0xeb97e4a0;
  uRam00000001832e18a0 = (uRam00000001832e18a0 ^ uVar6) + 0xeb97e4a0 ^ 0xff15e1a6dbae4fff;
  uRam00000001832e1848 = (uRam00000001832e1848 * -0x7a7298e0e1b32563 ^ uRam00000001832e18a0) + uVar6
  ;
  uRam00000001832e1828 = uRam00000001832e1848 ^ uRam00000001832e18a0;
  uRam00000001832e1770 = 0xeb97e4a0;
  uRam00000001832e17c0 = func_0x00018bf7b6c0(uRam00000001832e1798 + 0xff6f007af2ffd2ff ^ 0xae);
  uVar6 = uRam00000001832e17c0 ^ 0xfffff4f0;
  uRam00000001832e1820 = uRam00000001832e18e0 ^ uVar6 ^ 0x100005590;
  uRam00000001832e18e8 = (uRam00000001832e18e8 ^ uVar6) + 0x100005590 ^ 0xd4c5719486934c9a;
  uRam00000001832e18a8 = (uRam00000001832e18a8 * 0x5edfc75fcd651f61 ^ uRam00000001832e18e8) + uVar6;
  uRam00000001832e18c0 = uRam00000001832e18a8 ^ uRam00000001832e18e8;
  uRam00000001832e18d8 = 0x5590;
  uVar6 = (uRam00000001832e1778 ^ _UNK_181d80f70) + uRam00000001832e18b8 + 0xebad4f92;
  uVar7 = (uRam00000001832e18b8 ^ _UNK_181d80f78) + uRam00000001832e1778 + 0xeb5ba681;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1778 ^ _UNK_181d80f70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e18b8 ^ _UNK_181d80f78;
  uRam00000001832e17c0 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e1778 + 0xeb5ba681) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e18b8 + 0xebad4f92));
  uVar6 = (uRam00000001832e17c0 ^ 0x66909956d9d17237) << 0x34 |
          (uRam00000001832e17c0 ^ 0x66909956d9d17237) >> 0xc;
  uRam00000001832e1778 = uRam00000001832e1778 ^ uVar6 ^ 0x15aeb1338;
  uRam00000001832e1890 = (uRam00000001832e1890 ^ uVar6) + 0x15aeb1338 ^ 0x4c531030541814ac;
  uRam00000001832e1700 = (uRam00000001832e1700 * -0x31f26f187e6e6187 ^ uRam00000001832e1890) + uVar6
  ;
  uRam00000001832e1728 = uRam00000001832e1700 ^ uRam00000001832e1890;
  uRam00000001832e1718 = 0x5aeb1338;
  uRam00000001832e1710 = func_0x00018bf7b6c0(uRam00000001832e1768 ^ 0xff9700000cff552d);
  uVar6 = (ulonglong)(((uint)uRam00000001832e1710 ^ 0x260e0c80) & 0x6f8f6cb7) ^ 0x6f8f6cb7;
  uRam00000001832e1720 = (uRam00000001832e1720 ^ uVar6) + 0x84d4ca36 ^ 0xfa1ce4a9d973d23e;
  uRam00000001832e1810 = (uRam00000001832e1810 * -0x6b3c2de60e945ec9 ^ uRam00000001832e1720) + uVar6
  ;
  uRam00000001832e18e0 = uRam00000001832e1810 ^ uRam00000001832e1720;
  uRam00000001832e1708 = 0x84d4ca36;
  uVar6 = (uRam00000001832e1730 ^ _UNK_181d80f80) + 0x85cbb349;
  uVar7 = (_UNK_181d80f88 ^ 0x84d4ca36) + uRam00000001832e1730 + 0xd6164902;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1730 ^ _UNK_181d80f80;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _UNK_181d80f88 ^ 0x84d4ca36;
  uRam00000001832e18a8 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e1730 + 0xd6164902) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - 0x85cbb349);
  uRam00000001832e1808 = uRam00000001832e17f8 ^ uRam00000001832e1790 ^ 0x15aeb1338;
  uRam00000001832e17f8 =
       (uRam00000001832e17f8 ^ uRam00000001832e1790) + 0x15aeb1338 ^ 0x51a67688deea89c6;
  uRam00000001832e1780 =
       (uRam00000001832e1780 * -0x6e4845c4fd8390ab ^ uRam00000001832e17f8) + uRam00000001832e1790;
  uRam00000001832e17d0 = uRam00000001832e1780 ^ uRam00000001832e17f8;
  uRam00000001832e1838 = 0x5aeb1338;
  uVar6 = (uRam00000001832e1730 ^ 0x842276b5) + uRam00000001832e18a0 + 0x842276b5;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1730 ^ 0x842276b5;
  uVar7 = ((uRam00000001832e18a0 + uRam00000001832e1730) * 0x2000 |
          uRam00000001832e18a0 + uRam00000001832e1730 >> 0x33) ^ uRam00000001832e18a0;
  uRam00000001832e1710 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam00000001832e1730 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e18a0 + 0x842276b5));
  uRam00000001832e18c8 = uRam00000001832e18c8 & 0x7fffffffffffffff;
  uRam00000001832e1720 = uRam00000001832e1708 ^ uRam00000001832e18c8 ^ 0x5590;
  uRam00000001832e1708 = (uRam00000001832e1708 ^ uRam00000001832e18c8) + 0x5590 ^ 0x7fc41185b04a93ea
  ;
  uRam00000001832e18c8 =
       (uRam00000001832e1718 * -0x2884e27efc286f67 ^ uRam00000001832e1708) + uRam00000001832e18c8 ^
       uRam00000001832e1708;
  uRam00000001832e1718 = 0x5590;
  uVar6 = (uRam00000001832e1768 ^ _UNK_181d80f90) + uRam00000001832e1850 + 0xebad4f92;
  uVar7 = (uRam00000001832e1850 ^ _UNK_181d80f98) + uRam00000001832e1768 + 0xffffffff;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e1768 ^ _UNK_181d80f90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832e1850 ^ _UNK_181d80f98;
  uRam00000001832e1828 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e1768 + 0xffffffff) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e1850 + 0xebad4f92));
  uVar6 = (ulonglong)(~(uint)uRam00000001832e1828 & 0x6f8f6cb7);
  uRam00000001832e1788 = (uRam00000001832e1788 ^ uVar6) + 0x90709348 ^ 0x25b91cc49104f22d;
  uRam00000001832e1700 = (uRam00000001832e1700 * -0x4a33a3407627e97b ^ uRam00000001832e1788) + uVar6
  ;
  uRam00000001832e1868 = uRam00000001832e1700 ^ uRam00000001832e1788;
  uRam00000001832e18b0 = 0x90709348;
  uVar6 = (~uRam00000001832e1810 + 0x48816ca7) *
          ((uRam00000001832e1768 ^ 0xcca34f83) +
          (ulonglong)((uint)uRam00000001832e1768 & 0xcca34f83) * 2);
  uVar6 = (uVar6 | uRam00000001832e17b0) + (uVar6 & uRam00000001832e17b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e1718 =
       func_0x00018bf7b6c0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uVar6 = uRam00000001832e1718 << 8 | uRam00000001832e1718 >> 0x38;
  uVar7 = uRam00000001832e1768 ^ uVar6;
  uRam00000001832e1768 = uVar7 ^ 0x3fb80d72dc8dfa48;
  uRam00000001832e1730 = (uRam00000001832e1730 * 0x5ace3b41bdc39e0b ^ uRam00000001832e1768) + uVar6;
  uRam00000001832e17d0 = uRam00000001832e1730 ^ uRam00000001832e1768;
  uRam00000001832e18e0 = 0;
  uRam00000001832e1810 = func_0x00018bf7b6c0(uVar7 ^ 0x3fc9f2f6898ddb71);
  uRam00000001832e17c8 = uRam00000001832e18b0 ^ uRam00000001832e1810 ^ 0x5590;
  uRam00000001832e18b0 = (uRam00000001832e18b0 ^ uRam00000001832e1810) + 0x5590 ^ 0xf00f5e04ced1200e
  ;
  uRam00000001832e1708 =
       (uRam00000001832e1708 * 0x30776cc2585b5faf ^ uRam00000001832e18b0) + uRam00000001832e1810;
  uRam00000001832e1838 = uRam00000001832e1708 ^ uRam00000001832e18b0;
  uRam00000001832e1790 = 0x5590;
  uVar6 = uVar4 ^ 0x84222325 ^ uRam00000001832e1878;
  lVar5 = (uVar4 ^ 0x84222325) + uRam00000001832e17b0;
  uVar7 = uVar6 + lVar5;
  uVar8 = (uRam00000001832e17b0 ^ 0x5590) + uRam00000001832e1878 + 0x5590;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e17b0 ^ 0x5590;
  uRam00000001832e17f0 =
       func_0x00018bf7b6c0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832e1878 + 0x5590) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar5);
  lVar5 = uVar4 - ((uint)uVar3 & 0x5590) * 2;
  uRam00000001832e1700 =
       (uRam00000001832e1700 ^ uRam00000001832e17f0) + lVar5 + 0x5590 ^ 0xee4b42dbf208461e;
  uRam00000001832e17c0 =
       (uRam00000001832e17c0 * -0x7185196448c6d97f ^ uRam00000001832e1700) + uRam00000001832e17f0;
  uRam00000001832e18a0 = uRam00000001832e17c0 ^ uRam00000001832e1700;
  uRam00000001832e1760 = lVar5 + 0x5590U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bf76dbc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d7f548 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



