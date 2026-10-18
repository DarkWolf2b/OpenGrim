// ===== STITCHED CORPUS: sixtwo.eQ =====
// handlers: 30  continuation blocks: 336  unresolved table targets: 0
// tables not in tables.json: ['0x122a38', '0x1c06d38', '0x1d79080', '0x1d7a218', '0x1d7a228', '0x1d7a238', '0x1d7a368', '0x1d7a378', '0x1d7a388', '0x1d7a398', '0x1d7a3a8', '0x1d7a3b8', '0x1d7a3c8', '0x1d7a3d8', '0x1d80ed0', '0x1d80ed8', '0x1d80ee0', '0x1d80ee8', '0x1d80ef0', '0x1d80f00']

// ===== Lsixtwo/eQ; YO ()V (handler @ image 18bf3de80, runtime 6ffff3b4de80) =====

void FUN_18bf3de80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf)
      /* POOL[0x3806,0xbf]: ; | ipLAD | GLrDe | Lsixtwo/gg; | wLrDR | sixtwo/gg | baf | ()Lsixtwo/gc; | DJXfP | sixtwo/gc | aZg | ()Lsixtwo/gd; | ynopW | ePBBz | aZi | (Lsixtwo/gd;)Lsixtwo/gc; | nbZRc | ijbRx | bad | FalZQ | dhh | cnP | (FFF)Lsixtwo/mG; | NLFhJ | gx */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b)
      /* POOL[0xf47e,0x29b]: pjWv | Lnet/minecraft/class_1309; | sixtwo/eQ | aBN | aCk | aBD | (Lsixtwo/eQ;)V | rqlbi | aBL | aBE | (ZLsixtwo/eQ;)V | aBF | (Lsixtwo/eQ;ZLsixtwo/qL;)Lsixtwo/ov; | NTGZO | aBO | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V | sixtwo/eT | aCm | aDw | (Lnet/minecraft/class_1657;)Z | sixtwo/eS | aCW | aBG | (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V | aBH | (Lnet/minecraft/class_1309;)Lsixtwo/oW; | sixtwo/oW | cLd | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/gg;)Lsixtwo/oW$vp; | AZdEq | sixtwo/oW$vp | dwX | (F)Lsixtwo/oW$vp; | OwGUK | dxf | (Z)Lsixtwo/oW$vp; | dxb | NCCFN | Lsixtwo/pe; | */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b)
      /* POOL[0xf47e,0x29b]: pjWv | Lnet/minecraft/class_1309; | sixtwo/eQ | aBN | aCk | aBD | (Lsixtwo/eQ;)V | rqlbi | aBL | aBE | (ZLsixtwo/eQ;)V | aBF | (Lsixtwo/eQ;ZLsixtwo/qL;)Lsixtwo/ov; | NTGZO | aBO | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V | sixtwo/eT | aCm | aDw | (Lnet/minecraft/class_1657;)Z | sixtwo/eS | aCW | aBG | (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V | aBH | (Lnet/minecraft/class_1309;)Lsixtwo/oW; | sixtwo/oW | cLd | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/gg;)Lsixtwo/oW$vp; | AZdEq | sixtwo/oW$vp | dwX | (F)Lsixtwo/oW$vp; | OwGUK | dxf | (Z)Lsixtwo/oW$vp; | dxb | NCCFN | Lsixtwo/pe; | */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b)
      /* POOL[0xf47e,0x29b]: pjWv | Lnet/minecraft/class_1309; | sixtwo/eQ | aBN | aCk | aBD | (Lsixtwo/eQ;)V | rqlbi | aBL | aBE | (ZLsixtwo/eQ;)V | aBF | (Lsixtwo/eQ;ZLsixtwo/qL;)Lsixtwo/ov; | NTGZO | aBO | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V | sixtwo/eT | aCm | aDw | (Lnet/minecraft/class_1657;)Z | sixtwo/eS | aCW | aBG | (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V | aBH | (Lnet/minecraft/class_1309;)Lsixtwo/oW; | sixtwo/oW | cLd | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/gg;)Lsixtwo/oW$vp; | AZdEq | sixtwo/oW$vp | dwX | (F)Lsixtwo/oW$vp; | OwGUK | dxf | (Z)Lsixtwo/oW$vp; | dxb | NCCFN | Lsixtwo/pe; | */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b)
      /* POOL[0xf47e,0x29b]: pjWv | Lnet/minecraft/class_1309; | sixtwo/eQ | aBN | aCk | aBD | (Lsixtwo/eQ;)V | rqlbi | aBL | aBE | (ZLsixtwo/eQ;)V | aBF | (Lsixtwo/eQ;ZLsixtwo/qL;)Lsixtwo/ov; | NTGZO | aBO | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V | sixtwo/eT | aCm | aDw | (Lnet/minecraft/class_1657;)Z | sixtwo/eS | aCW | aBG | (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V | aBH | (Lnet/minecraft/class_1309;)Lsixtwo/oW; | sixtwo/oW | cLd | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/gg;)Lsixtwo/oW$vp; | AZdEq | sixtwo/oW$vp | dwX | (F)Lsixtwo/oW$vp; | OwGUK | dxf | (Z)Lsixtwo/oW$vp; | dxb | NCCFN | Lsixtwo/pe; | */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b)
      /* POOL[0xf47e,0x29b]: pjWv | Lnet/minecraft/class_1309; | sixtwo/eQ | aBN | aCk | aBD | (Lsixtwo/eQ;)V | rqlbi | aBL | aBE | (ZLsixtwo/eQ;)V | aBF | (Lsixtwo/eQ;ZLsixtwo/qL;)Lsixtwo/ov; | NTGZO | aBO | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V | sixtwo/eT | aCm | aDw | (Lnet/minecraft/class_1657;)Z | sixtwo/eS | aCW | aBG | (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V | aBH | (Lnet/minecraft/class_1309;)Lsixtwo/oW; | sixtwo/oW | cLd | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/gg;)Lsixtwo/oW$vp; | AZdEq | sixtwo/oW$vp | dwX | (F)Lsixtwo/oW$vp; | OwGUK | dxf | (Z)Lsixtwo/oW$vp; | dxb | NCCFN | Lsixtwo/pe; | */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b)
      /* POOL[0xf47e,0x29b]: pjWv | Lnet/minecraft/class_1309; | sixtwo/eQ | aBN | aCk | aBD | (Lsixtwo/eQ;)V | rqlbi | aBL | aBE | (ZLsixtwo/eQ;)V | aBF | (Lsixtwo/eQ;ZLsixtwo/qL;)Lsixtwo/ov; | NTGZO | aBO | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V | sixtwo/eT | aCm | aDw | (Lnet/minecraft/class_1657;)Z | sixtwo/eS | aCW | aBG | (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V | aBH | (Lnet/minecraft/class_1309;)Lsixtwo/oW; | sixtwo/oW | cLd | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/gg;)Lsixtwo/oW$vp; | AZdEq | sixtwo/oW$vp | dwX | (F)Lsixtwo/oW$vp; | OwGUK | dxf | (Z)Lsixtwo/oW$vp; | dxb | NCCFN | Lsixtwo/pe; | */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf47e,0x29b)
      /* POOL[0xf47e,0x29b]: pjWv | Lnet/minecraft/class_1309; | sixtwo/eQ | aBN | aCk | aBD | (Lsixtwo/eQ;)V | rqlbi | aBL | aBE | (ZLsixtwo/eQ;)V | aBF | (Lsixtwo/eQ;ZLsixtwo/qL;)Lsixtwo/ov; | NTGZO | aBO | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V | sixtwo/eT | aCm | aDw | (Lnet/minecraft/class_1657;)Z | sixtwo/eS | aCW | aBG | (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V | aBH | (Lnet/minecraft/class_1309;)Lsixtwo/oW; | sixtwo/oW | cLd | (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/gg;)Lsixtwo/oW$vp; | AZdEq | sixtwo/oW$vp | dwX | (F)Lsixtwo/oW$vp; | OwGUK | dxf | (Z)Lsixtwo/oW$vp; | dxb | NCCFN | Lsixtwo/pe; | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bf76dbc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d7f548 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xbf3decd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3decd(void)

{
  FUN_190ddfc90();
  (*_DAT_181d75698)();
  return;
}


// ----- block @ rva 0xbf3df00 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3df00(void)

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


// ----- block @ rva 0xbf3df24 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3df24(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf3df73 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3df73(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181d75678)();
  return;
}


// ----- block @ rva 0xbf3dfc0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3dfc0(void)

{
  FUN_190dd72e0();
  (*_DAT_181d756b8)();
  return;
}


// ----- block @ rva 0xbf3dfe8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3dfe8(void)

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


// ----- block @ rva 0xbf3e060 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e060(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetBooleanField /*0x348*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75678)();
  return;
}


// ----- block @ rva 0xbf3e087 -----

void FUN_18bf3e087(void)

{
  return;
}


// ----- block @ rva 0xbf3e08f -----

void FUN_18bf3e08f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3e163 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e163(void)

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


// ----- block @ rva 0xbf3e19c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e19c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75778)();
  return;
}


// ----- block @ rva 0xbf3e1c1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e1c1(void)

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


// ----- block @ rva 0xbf3e1d6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e1d6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d757c8)();
  return;
}


// ----- block @ rva 0xbf3e1fe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e1fe(void)

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


// ----- block @ rva 0xbf3e21f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e21f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75798)();
  return;
}


// ----- block @ rva 0xbf3e252 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e252(void)

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


// ----- block @ rva 0xbf3e276 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e276(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetBooleanField /*0x348*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d757d8)();
  return;
}


// ----- block @ rva 0xbf3e29d -----

void FUN_18bf3e29d(void)

{
  return;
}


// ----- block @ rva 0xbf3e2a5 -----

void FUN_18bf3e2a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3e353 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e353(void)

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


// ----- block @ rva 0xbf3e3b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e3b1(void)

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


// ----- block @ rva 0xbf3e3c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e3c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75898)();
  return;
}


// ----- block @ rva 0xbf3e3ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e3ee(void)

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


// ----- block @ rva 0xbf3e40f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e40f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75858)();
  return;
}


// ----- block @ rva 0xbf3e442 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e442(void)

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


// ----- block @ rva 0xbf3e466 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e466(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d758b8)();
  return;
}


// ----- block @ rva 0xbf3e49e -----

void FUN_18bf3e49e(void)

{
  return;
}


// ----- block @ rva 0xbf3e4a6 -----

void FUN_18bf3e4a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3e553 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e553(void)

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


// ----- block @ rva 0xbf3e58c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e58c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75988)();
  return;
}


// ----- block @ rva 0xbf3e5c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e5c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75978)();
  return;
}


// ----- block @ rva 0xbf3e5ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e5ee(void)

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


// ----- block @ rva 0xbf3e60f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e60f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75958)();
  return;
}


// ----- block @ rva 0xbf3e642 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e642(void)

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


// ----- block @ rva 0xbf3e68d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e68d(void)

{
  (*_DAT_181d75918)();
  return;
}


// ----- block @ rva 0xbf3e69e -----

void FUN_18bf3e69e(void)

{
  return;
}


// ----- block @ rva 0xbf3e6a6 -----

void FUN_18bf3e6a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3e753 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e753(void)

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


// ----- block @ rva 0xbf3e78c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e78c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75a58)();
  return;
}


// ----- block @ rva 0xbf3e7b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e7b1(void)

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


// ----- block @ rva 0xbf3e7c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e7c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75a18)();
  return;
}


// ----- block @ rva 0xbf3e7ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e7ee(void)

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


// ----- block @ rva 0xbf3e80f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e80f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75a78)();
  return;
}


// ----- block @ rva 0xbf3e866 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e866(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75a08)();
  return;
}


// ----- block @ rva 0xbf3e88d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e88d(void)

{
  (*_DAT_181d75a28)();
  return;
}


// ----- block @ rva 0xbf3e89e -----

void FUN_18bf3e89e(void)

{
  return;
}


// ----- block @ rva 0xbf3e8a6 -----

void FUN_18bf3e8a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3e953 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e953(void)

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


// ----- block @ rva 0xbf3e98c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e98c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75b58)();
  return;
}


// ----- block @ rva 0xbf3e9c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3e9c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75ae8)();
  return;
}


// ----- block @ rva 0xbf3e9ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3e9ee(void)

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


// ----- block @ rva 0xbf3ea0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ea0f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75b48)();
  return;
}


// ----- block @ rva 0xbf3ea66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ea66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75b18)();
  return;
}


// ----- block @ rva 0xbf3ea8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ea8d(void)

{
  (*_DAT_181d75b08)();
  return;
}


// ----- block @ rva 0xbf3ea9e -----

void FUN_18bf3ea9e(void)

{
  return;
}


// ----- block @ rva 0xbf3eaa6 -----

void FUN_18bf3eaa6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3eb53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3eb53(void)

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


// ----- block @ rva 0xbf3eb8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3eb8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75c08)();
  return;
}


// ----- block @ rva 0xbf3ebb1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3ebb1(void)

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


// ----- block @ rva 0xbf3ebc6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ebc6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75c18)();
  return;
}


// ----- block @ rva 0xbf3ebee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3ebee(void)

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


// ----- block @ rva 0xbf3ec66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ec66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75bb8)();
  return;
}


// ----- block @ rva 0xbf3ec8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ec8d(void)

{
  (*_DAT_181d75be8)();
  return;
}


// ----- block @ rva 0xbf3ec9e -----

void FUN_18bf3ec9e(void)

{
  return;
}


// ----- block @ rva 0xbf3eca6 -----

void FUN_18bf3eca6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3ed53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ed53(void)

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


// ----- block @ rva 0xbf3ed8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ed8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75cd8)();
  return;
}


// ----- block @ rva 0xbf3edb1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3edb1(void)

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


// ----- block @ rva 0xbf3edc6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3edc6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75d18)();
  return;
}


// ----- block @ rva 0xbf3ee0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ee0f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75ce8)();
  return;
}


// ----- block @ rva 0xbf3ee42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3ee42(void)

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


// ----- block @ rva 0xbf3ee66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ee66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75cc8)();
  return;
}


// ----- block @ rva 0xbf3ee8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ee8d(void)

{
  (*_DAT_181d75ca8)();
  return;
}


// ----- block @ rva 0xbf3ee9e -----

void FUN_18bf3ee9e(void)

{
  return;
}


// ----- block @ rva 0xbf3eea6 -----

void FUN_18bf3eea6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3ef53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ef53(void)

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


// ----- block @ rva 0xbf3ef8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3ef8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75df8)();
  return;
}


// ----- block @ rva 0xbf3efc6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3efc6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75de8)();
  return;
}


// ----- block @ rva 0xbf3f00f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f00f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75d98)();
  return;
}


// ----- block @ rva 0xbf3f042 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f042(void)

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


// ----- block @ rva 0xbf3f066 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f066(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75dc8)();
  return;
}


// ----- block @ rva 0xbf3f08d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f08d(void)

{
  (*_DAT_181d75da8)();
  return;
}


// ----- block @ rva 0xbf3f09e -----

void FUN_18bf3f09e(void)

{
  return;
}


// ----- block @ rva 0xbf3f0a6 -----

void FUN_18bf3f0a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3f153 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f153(void)

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


// ----- block @ rva 0xbf3f18c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f18c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75ec8)();
  return;
}


// ----- block @ rva 0xbf3f1c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f1c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75eb8)();
  return;
}


// ----- block @ rva 0xbf3f1ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f1ee(void)

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


// ----- block @ rva 0xbf3f242 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f242(void)

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


// ----- block @ rva 0xbf3f266 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f266(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75e88)();
  return;
}


// ----- block @ rva 0xbf3f28d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f28d(void)

{
  (*_DAT_181d75e58)();
  return;
}


// ----- block @ rva 0xbf3f29e -----

void FUN_18bf3f29e(void)

{
  return;
}


// ----- block @ rva 0xbf3f2a6 -----

void FUN_18bf3f2a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3f353 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f353(void)

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


// ----- block @ rva 0xbf3f38c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f38c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75fa8)();
  return;
}


// ----- block @ rva 0xbf3f3c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f3c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d75f68)();
  return;
}


// ----- block @ rva 0xbf3f3ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f3ee(void)

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


// ----- block @ rva 0xbf3f40f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f40f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d75fb8)();
  return;
}


// ----- block @ rva 0xbf3f466 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f466(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d75f98)();
  return;
}


// ----- block @ rva 0xbf3f48d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f48d(void)

{
  (*_DAT_181d75f88)();
  return;
}


// ----- block @ rva 0xbf3f49e -----

void FUN_18bf3f49e(void)

{
  return;
}


// ----- block @ rva 0xbf3f4a6 -----

void FUN_18bf3f4a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3f553 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f553(void)

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


// ----- block @ rva 0xbf3f5c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f5c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d76058)();
  return;
}


// ----- block @ rva 0xbf3f5ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f5ee(void)

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


// ----- block @ rva 0xbf3f60f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f60f(void)

{
  FUN_190dd9df0();
  (*_DAT_181d76028)();
  return;
}


// ----- block @ rva 0xbf3f642 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf3f642(void)

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


// ----- block @ rva 0xbf3f666 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f666(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetBooleanField /*0x300*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d76048)();
  return;
}


// ----- block @ rva 0xbf3f68c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f68c(void)

{
  (*_DAT_181d76018)(0);
  return;
}


// ----- block @ rva 0xbf3f69c -----

void FUN_18bf3f69c(void)

{
  return;
}


// ----- block @ rva 0xbf3f6a4 -----

void FUN_18bf3f6a4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf3f7fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf3f7fd(void)

{
  FUN_190ddce00();
  (*_DAT_181d766d8)();
  return;
}


// ----- block @ rva 0xbf43ba3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf43ba3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181d76c48)();
  return;
}


// ----- block @ rva 0xbf453a7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf453a7(void)

{
  FUN_190dd9df0();
  (*_DAT_181d77528)();
  return;
}


// ----- block @ rva 0xbf45acc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf45acc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbf45f3a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf45f3a(void)

{
  (*_DAT_181d76f88)();
  return;
}


// ----- block @ rva 0xbf461b7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf461b7(void)

{
  (*_DAT_181d770e8)();
  return;
}


// ----- block @ rva 0xbf464dc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf464dc(void)

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


// ----- block @ rva 0xbf4709a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf4709a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbf470d1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf470d1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181d771e8)();
  return;
}


// ----- block @ rva 0xbf47644 -----

void FUN_18bf47644(void)

{
  return;
}


// ----- block @ rva 0xbf4803e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf4803e(void)

{
  FUN_190de3220();
  (*_DAT_181d779a8)();
  return;
}


// ----- block @ rva 0xbf481a3 -----

void FUN_18bf481a3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf48383 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf48383(void)

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


// ----- block @ rva 0xbf483bc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf483bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d78e38)();
  return;
}


// ----- block @ rva 0xbf483e1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf483e1(void)

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


// ----- block @ rva 0xbf483f6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf483f6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d78e08)();
  return;
}


// ----- block @ rva 0xbf4841e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf4841e(void)

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


// ----- block @ rva 0xbf48496 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf48496(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetBooleanField /*0x300*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d78e28)();
  return;
}


// ----- block @ rva 0xbf484bc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf484bc(void)

{
  (*_DAT_181d78de8)(0);
  return;
}


// ----- block @ rva 0xbf484cc -----

void FUN_18bf484cc(void)

{
  return;
}


// ----- block @ rva 0xbf484d4 -----

void FUN_18bf484d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf48693 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf486c9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf48693(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RBX + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xbf486e6 -----

void FUN_18bf486e6(void)

{
  uint uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = (**(code **)(unaff_RBX + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x10) = unaff_RBX;
                    /* WARNING: Could not recover jumptable at 0x00018bf48715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181d79080 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xbf48718 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf4875d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf48718(void)

{
  undefined8 uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x30) = uVar1;
  (**(code **)(unaff_RBX + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xbf49ba0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf49ba0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_R14;
  
  _DAT_1832e0760 = func_0x00018bf747d0(_DAT_1832e0bd0 + 0x5a23d98965664bc ^ 0x28);
  _DAT_1832e0740 =
       (_DAT_1832e0740 ^ _DAT_1832e0760 & 0x3ffffffffffffff) + 0xe3dff9376fed9ffb ^
       0x337c3ba9c4a02e6d;
  _DAT_1832e05c0 =
       (_DAT_1832e05c0 * -0x56f0a0051959f05b ^ _DAT_1832e0740) +
       (_DAT_1832e0760 & 0x3ffffffffffffff);
  _DAT_1832e0758 = _DAT_1832e05c0 ^ _DAT_1832e0740;
  _DAT_1832e09b8 = -0x1c2006c890126005;
  _DAT_1832e0898 = func_0x00018bf747d0(_DAT_1832e0cd8 + 0x9010717b74bbb98dU ^ 0xdf);
  uVar2 = _DAT_1832e0898 ^ 0x4d4085fd3d9f3b8a;
  uVar1 = uVar2 >> 1 | uVar2;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2)
          & 0xffffffffff000000;
  _DAT_1832e0910 = (_DAT_1832e0910 ^ uVar1) + 0xf691fc90fbe833b1 ^ 0xbc4f5e6e593af319;
  _DAT_1832e0a08 = (_DAT_1832e0a08 * -0x7b8da99026ee2193 ^ _DAT_1832e0910) + uVar1;
  _DAT_1832e05a0 = _DAT_1832e0a08 ^ _DAT_1832e0910;
  _DAT_1832e05f0 = 0xf691fc90fbe833b1;
  uVar1 = (_DAT_1832e0558 ^ _DAT_181d7a360) + _DAT_1832e0648 + 0x84222325;
  uVar2 = (_DAT_1832e0648 ^ _UNK_181d7a368) + _DAT_1832e0558 + 0x57dfeb63c3902d2c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0558 ^ _DAT_181d7a360;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0648 ^ _UNK_181d7a368;
  _DAT_1832e0a78 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0558 + 0x57dfeb63c3902d2c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0648 + 0x84222325));
  _DAT_1832e0610 = (_DAT_1832e0610 ^ _DAT_1832e0a78) + 0xa820149c3c6fd2d4 ^ 0x19e83e7f577063e2;
  _DAT_1832e07e8 = (_DAT_1832e07e8 * 0x5ddba7d8f249bbbf ^ _DAT_1832e0610) + _DAT_1832e0a78;
  _DAT_1832e0798 = _DAT_1832e07e8 ^ _DAT_1832e0610;
  _DAT_1832e0a80 = 0xa820149c3c6fd2d4;
  uVar1 = (_DAT_1832e0b90 ^ _DAT_181d7a370) + _DAT_1832e0be8 + 0x57dfeb6347b20e0f;
  uVar2 = (_DAT_1832e0be8 ^ _UNK_181d7a378) + _DAT_1832e0b90 + 0xa820149c3c6fd2d4;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0b90 ^ _DAT_181d7a370;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0be8 ^ _UNK_181d7a378;
  _DAT_1832e0630 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0b90 + 0xa820149c3c6fd2d4) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0be8 + 0x57dfeb6347b20e0f));
  uVar1 = _DAT_1832e0630 ^ 0xfffffffffffffffe;
  _DAT_1832e0958 = _DAT_1832e0b80 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0560 = (_DAT_1832e0560 ^ uVar1) - 2 ^ 0x2f209087ca4f208a;
  _DAT_1832e06f8 = (_DAT_1832e06f8 * 0x5a074bb4854e5b41 ^ _DAT_1832e0560) + uVar1;
  _DAT_1832e0c70 = _DAT_1832e06f8 ^ _DAT_1832e0560;
  _DAT_1832e07e0 = 0xfffffffffffffffe;
  _DAT_1832e08e8 = func_0x00018bf747d0(_DAT_1832e0bc8 + 0x242f99f9b716b0fe ^ 1);
  _DAT_1832e0c60 =
       (_DAT_1832e0c60 ^ _DAT_1832e08e8 ^ 0x19aebe49e73f3ed) + 0xfe65141b618c0c13 ^
       0x5438e239286921c4;
  _DAT_1832e0b08 =
       (_DAT_1832e0b08 * 0x7b589217e3e3e5fd ^ _DAT_1832e0c60) + (_DAT_1832e08e8 ^ 0x19aebe49e73f3ed)
  ;
  _DAT_1832e08b8 = _DAT_1832e0b08 ^ _DAT_1832e0c60;
  _DAT_1832e0798 = 0xfe65141b618c0c13;
  _DAT_1832e0990 = func_0x00018bf747d0(_DAT_1832e06f0 ^ 0xfc3ce7192230a278);
  uVar1 = (_DAT_1832e0990 ^ 0x19ae20080021261) & 0x19aebe49e73f3eb;
  _DAT_1832e0af8 = _DAT_1832e0620 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0858 = (_DAT_1832e0858 ^ uVar1) - 2 ^ 0x856ffcbebe042552;
  _DAT_1832e0ce8 = (_DAT_1832e0ce8 * 0x685950da2bdb1a0b ^ _DAT_1832e0858) + uVar1;
  _DAT_1832e08d0 = _DAT_1832e0ce8 ^ _DAT_1832e0858;
  _DAT_1832e0900 = 0xfffffffffffffffe;
  uVar1 = (~_DAT_1832e0570 + 0xb65093ac13a84659) *
          ((_DAT_1832e0cb0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e0cb0 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832e0c88) + (uVar1 & _DAT_1832e0c88);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0c90 = func_0x00018bf747d0((uVar1 | 0xb65093ac978a657d) + (uVar1 & 0xb65093ac978a657d));
  _DAT_1832e07a8 =
       (_DAT_1832e07a8 ^ _DAT_1832e0c90 ^ 0xb65093ac13a84658) + 0x49af6c53ec57b9a8 ^
       0x1a7a7fbc0210959a;
  _DAT_1832e09b8 =
       (_DAT_1832e09b8 * -0x325fd4d15d19313b ^ _DAT_1832e07a8) +
       (_DAT_1832e0c90 ^ 0xb65093ac13a84658);
  _DAT_1832e0ae0 = _DAT_1832e09b8 ^ _DAT_1832e07a8;
  _DAT_1832e0870 = 0x49af6c53ec57b9a8;
  _DAT_1832e0cc0 = func_0x00018bf747d0(_DAT_1832e0670 ^ 0xd38a655780a453d0);
  uVar1 = _DAT_1832e0cc0 ^ 0x49af6c53ec57b9a6;
  _DAT_1832e0608 = _DAT_1832e0978 ^ uVar1 ^ 0xb65093ac13a84656;
  _DAT_1832e08a0 = (_DAT_1832e08a0 ^ uVar1) + 0xb65093ac13a84656 ^ 0x31f03348c7d6f48b;
  _DAT_1832e09a8 = (_DAT_1832e09a8 * -0x6fd368bf17704f2f ^ _DAT_1832e08a0) + uVar1;
  _DAT_1832e0960 = _DAT_1832e09a8 ^ _DAT_1832e08a0;
  _DAT_1832e06b8 = 0xb65093ac13a84656;
  _DAT_1832e0800 = func_0x00018bf747d0(_DAT_1832e0ac0 ^ 0xbb5402e94476dd57);
  uVar1 = (_DAT_1832e0800 ^ 0xa937280ab07c4e70) << 2 | (_DAT_1832e0800 ^ 0xa937280ab07c4e70) >> 0x3e
  ;
  _DAT_1832e05f0 = _DAT_1832e0c48 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0960 = (_DAT_1832e0960 ^ uVar1) - 2 ^ 0xbc18787e0df3bbcb;
  _DAT_1832e0880 = (_DAT_1832e0880 * 0x6e7c6e960a8e767 ^ _DAT_1832e0960) + uVar1;
  _DAT_1832e0b18 = _DAT_1832e0880 ^ _DAT_1832e0960;
  _DAT_1832e0bd0 = 0xfffffffffffffffe;
  uVar1 = (~_DAT_1832e0758 + 0xf691fc90fbe833b2) *
          ((_DAT_1832e0548 ^ 0xe3dff937ebcfbcde) + (_DAT_1832e0548 & 0x63dff937ebcfbcde) * 2);
  uVar1 = (uVar1 | _DAT_1832e07f8) + (uVar1 & _DAT_1832e07f8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e09e0 = func_0x00018bf747d0((uVar1 | 0x154e05a710278f6f) + (uVar1 & 0x154e05a710278f6f));
  uVar1 = _DAT_1832e09e0 & 0xffffffffff;
  _DAT_1832e08c8 = _DAT_1832e0730 ^ uVar1 ^ 0xda71f5c86bd5d3ac;
  _DAT_1832e0c88 = (_DAT_1832e0c88 ^ uVar1) + 0xda71f5c86bd5d3ac ^ 0x12f749682b413f75;
  _DAT_1832e0758 = (_DAT_1832e0758 * -0x133b5730e779bf5f ^ _DAT_1832e0c88) + uVar1;
  _DAT_1832e07a0 = _DAT_1832e0758 ^ _DAT_1832e0c88;
  _DAT_1832e0a58 = 0xda71f5c86bd5d3ac;
  uVar1 = (~_DAT_1832e08e8 + 0xf691fc90fbe833b2) *
          ((_DAT_1832e09e8 ^ 0xe3dff937ebcfbcde) + (_DAT_1832e09e8 & 0x63dff937ebcfbcde) * 2);
  uVar1 = (uVar1 | _DAT_1832e0ba0) + (uVar1 & _DAT_1832e0ba0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0578 = func_0x00018bf747d0((uVar1 | 0x154e05a710278f6f) + (uVar1 & 0x154e05a710278f6f));
  _DAT_1832e0528 = (_DAT_1832e0528 ^ _DAT_1832e0aa8) + 0x154e05a79405ac4a ^ 0x582828dec07e6657;
  _DAT_1832e0530 = (_DAT_1832e0530 * 0x1092dc878600c8cd ^ _DAT_1832e0528) + _DAT_1832e0aa8;
  _DAT_1832e0c80 = _DAT_1832e0530 ^ _DAT_1832e0528;
  _DAT_1832e0b60 = 0x154e05a79405ac4a;
  _DAT_1832e0c80 = func_0x00018bf747d0(_DAT_1832e0918 + 0x647ece102b051eec ^ 0x4d);
  uVar1 = (_DAT_1832e0c80 ^ 0xf7dffdb7ffedbffb) << 0x29 |
          (_DAT_1832e0c80 ^ 0xf7dffdb7ffedbffb) >> 0x17;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar1;
  _DAT_1832e0930 = (_DAT_1832e0930 ^ uVar1) + 0xe291f8106be813b1 ^ 0xa3a44231c96add8c;
  _DAT_1832e0a88 = (_DAT_1832e0a88 * 0x6a496df43eb6a623 ^ _DAT_1832e0930) + uVar1;
  _DAT_1832e0a80 = _DAT_1832e0a88 ^ _DAT_1832e0930;
  _DAT_1832e0888 = 0xe291f8106be813b1;
  uVar1 = (_DAT_1832e0968 ^ _DAT_181d7a380) + _DAT_1832e0aa8 + 0x154e05a710278f6f;
  uVar2 = (_DAT_1832e0aa8 ^ _UNK_181d7a388) + _DAT_1832e0968 + 0xc523f020d7d02762;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0968 ^ _DAT_181d7a380;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0aa8 ^ _UNK_181d7a388;
  _DAT_1832e0830 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0968 + 0xc523f020d7d02762) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0aa8 + 0x154e05a710278f6f));
  uVar1 = (_DAT_1832e0830 ^ 0x3f5a7d7d5af6a) & 0x3ffffffffffff;
  _DAT_1832e08a8 = _DAT_1832e05c8 ^ uVar1 ^ 0xda71f5c86bd5d3ac;
  _DAT_1832e0520 = (_DAT_1832e0520 ^ uVar1) + 0xda71f5c86bd5d3ac ^ 0x14154e7c5b6277e9;
  _DAT_1832e05d0 = (_DAT_1832e05d0 * -0x7dbdefe9e7a9abf3 ^ _DAT_1832e0520) + uVar1;
  _DAT_1832e0ca8 = _DAT_1832e05d0 ^ _DAT_1832e0520;
  _DAT_1832e0860 = 0xda71f5c86bd5d3ac;
  uVar1 = (~_DAT_1832e09d0 + 0xda71f5c86bd5d3ad) *
          ((_DAT_1832e0680 ^ 0xda71f5c8eff7f089) + (_DAT_1832e0680 & 0x5a71f5c8eff7f089) * 2);
  uVar1 = (uVar1 | _DAT_1832e07b8) + (uVar1 & _DAT_1832e07b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e09e0 = func_0x00018bf747d0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_1832e0c60 = _DAT_1832e0c60 ^ _DAT_1832e09e0 ^ 0xbf0c5a72d0273898;
  _DAT_1832e06e8 = (_DAT_1832e06e8 * 0x6d151dfbbd029ce9 ^ _DAT_1832e0c60) + _DAT_1832e09e0;
  _DAT_1832e0ca8 = _DAT_1832e06e8 ^ _DAT_1832e0c60;
  _DAT_1832e0b30 = 0;
  uVar1 = (_DAT_1832e0bc8 ^ 0xffffffff7bdddcdb) + (_DAT_1832e0920 - 0x84222325);
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0bc8 ^ 0xffffffff7bdddcdb;
  uVar2 = ((_DAT_1832e0920 + _DAT_1832e0bc8) * 0x2000 | _DAT_1832e0920 + _DAT_1832e0bc8 >> 0x33) ^
          _DAT_1832e0920;
  _DAT_1832e0bd0 = _DAT_1832e09e0;
  _DAT_1832e0ab8 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1832e0bc8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0920 - 0x84222325));
  uVar1 = (_DAT_1832e0ab8 ^ 0xfffffffffffffffe) * 0x23660c92653fc763;
  _DAT_1832e05c8 = _DAT_1832e0cf8 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0b50 = (_DAT_1832e0b50 ^ uVar1) - 2 ^ 0x18c7a3d947fce60b;
  _DAT_1832e09f0 = (_DAT_1832e09f0 * 0x325498e176466905 ^ _DAT_1832e0b50) + uVar1;
  _DAT_1832e0cf8 = _DAT_1832e09f0 ^ _DAT_1832e0b50;
  _DAT_1832e0bf8 = 0xfffffffffffffffe;
  uVar1 = (_DAT_1832e0690 ^ _DAT_181d7a390) + _DAT_1832e0b28 + 0xe3dff937ebcfbcde;
  uVar2 = (_DAT_1832e0b28 ^ _UNK_181d7a398) + (_DAT_1832e0690 - 1);
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0690 ^ _DAT_181d7a390;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0b28 ^ _UNK_181d7a398;
  _DAT_1832e08f0 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0690 - 1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0b28 + 0xe3dff937ebcfbcde));
  _DAT_1832e0ad8 = (_DAT_1832e0ad8 ^ _DAT_1832e0908) + 0x1c2006c890126004 ^ 0x94b273ea9c62fb76;
  _DAT_1832e0608 = (_DAT_1832e0608 * 0x3a96336f747c6f01 ^ _DAT_1832e0ad8) + _DAT_1832e0908;
  _DAT_1832e0908 = _DAT_1832e0608 ^ _DAT_1832e0ad8;
  _DAT_1832e07c0 = _DAT_1832e0610 ^ 0x1c2006c890126004;
  _DAT_1832e0710 = 0x1c2006c890126004;
  _DAT_1832e0cf0 = func_0x00018bf747d0(_DAT_1832e0650 ^ 0x702444f8ba204310);
  _DAT_1832e0808 = _DAT_1832e0808 ^ _DAT_1832e0cf0 & 0xe3dff9376fed9ffb ^ 0x77f101a15fe0c54c;
  _DAT_1832e0630 =
       (_DAT_1832e0630 * 0x668c73da5e7f184f ^ _DAT_1832e0808) +
       (_DAT_1832e0cf0 & 0xe3dff9376fed9ffb);
  _DAT_1832e08e8 = _DAT_1832e0630 ^ _DAT_1832e0808;
  _DAT_1832e0aa8 = 0;
  _DAT_1832e0858 = func_0x00018bf747d0(_DAT_1832e09a0 ^ 0x63dbf28aa8a5cda2);
  _DAT_1832e0638 = _DAT_1832e0be8 ^ _DAT_1832e0858 ^ 0xfffffffffffffffe;
  _DAT_1832e0a78 = (_DAT_1832e0a78 ^ _DAT_1832e0858) - 2 ^ 0x9090284a6a6b71ad;
  _DAT_1832e0aa8 = (_DAT_1832e0aa8 * 0x4bd3d2faa82b2019 ^ _DAT_1832e0a78) + _DAT_1832e0858;
  _DAT_1832e0b78 = _DAT_1832e0aa8 ^ _DAT_1832e0a78;
  _DAT_1832e0650 = 0xfffffffffffffffe;
  uVar1 = ((_DAT_1832e09a0 ^ 0xffffffff7bdddcdb) + (_DAT_1832e09a0 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_1832e0b28;
  uVar1 = (uVar1 | _DAT_1832e05b8) + (uVar1 & _DAT_1832e05b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e09b8 = func_0x00018bf747d0((uVar1 | 0xffffffff7bdddcdb) + (uVar1 & 0xffffffff7bdddcdb));
  uVar1 = _DAT_1832e09b8 & 0x7fffffffffffffff;
  _DAT_1832e0620 = _DAT_1832e0a58 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_1832e0ac0 = (_DAT_1832e0ac0 ^ uVar1) - 2 ^ 0xedeb21fc5207af77;
  _DAT_1832e08e0 = (_DAT_1832e08e0 * 0xb5742b04874b623 ^ _DAT_1832e0ac0) + uVar1;
  _DAT_1832e0a28 = _DAT_1832e08e0 ^ _DAT_1832e0ac0;
  _DAT_1832e0510 = 0xfffffffffffffffe;
  *(longlong *)(unaff_RBP + 0xa0) = unaff_R14 + -2;
  *(longlong *)(unaff_RBP + 0x60) = unaff_RBP + -0x52 + unaff_R14;
  *(undefined1 *)(unaff_RBP + -0x52 + unaff_R14) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  _DAT_1832e0858 = func_0x00018bf747d0(_DAT_1832e0b90 ^ 0x7615d4b1b6138a01);
  _DAT_1832e0b08 = (_DAT_1832e0b08 ^ _DAT_1832e0858) + 0xf32d57fe56ff7ffb ^ 0x67b1035c7d17816e;
  _DAT_1832e0958 = (_DAT_1832e0958 * 0x47d2e358b5ad62db ^ _DAT_1832e0b08) + _DAT_1832e0858;
  _DAT_1832e0540 = _DAT_1832e0958 ^ _DAT_1832e0b08;
  _DAT_1832e06d0 = 0xf32d57fe56ff7ffb;
  uVar1 = (~_DAT_1832e0a98 + 0xea1d7caec02b533) *
          ((_DAT_1832e0c90 ^ 0x3a4a0ee42a3d7db6) + (_DAT_1832e0c90 & 0x3a4a0ee42a3d7db6) * 2);
  uVar1 = (uVar1 | _DAT_1832e0ab8) + (uVar1 & _DAT_1832e0ab8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0800 = func_0x00018bf747d0((uVar1 | 0x34ebd92ec63fc884) + (uVar1 & 0x34ebd92ec63fc884));
  uVar1 = _DAT_1832e0800 - (_DAT_1832e0800 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1832e0800;
  uVar1 = uVar2 >> 1 | uVar2;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar2;
  uVar1 = uVar2 << 1 | (ulonglong)((longlong)uVar2 < 0);
  _DAT_1832e0ca8 = (_DAT_1832e0ca8 ^ uVar1) + 0x34ebd92e421deba1 ^ 0x66787864e625312b;
  _DAT_1832e0950 = (_DAT_1832e0950 * 0x60a12a3ecfd85ccd ^ _DAT_1832e0ca8) + uVar1;
  _DAT_1832e0b80 = _DAT_1832e0950 ^ _DAT_1832e0ca8;
  _DAT_1832e0670 = 0x34ebd92e421deba1;
  uVar1 = (_DAT_1832e0580 ^ _DAT_181d7a3a0) + _DAT_1832e0548 + 0x84222325;
  uVar2 = (_DAT_1832e0548 ^ _UNK_181d7a3a8) + _DAT_1832e0580 + 0x7facbe2bd661f105;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0580 ^ _DAT_181d7a3a0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0548 ^ _UNK_181d7a3a8;
  _DAT_1832e09c8 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0580 + 0x7facbe2bd661f105) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0548 + 0x84222325));
  _DAT_1832e09d8 =
       (_DAT_1832e09d8 ^ _DAT_1832e09c8 & 0x3fffff000000) + 0x805341d4299e0efb ^ 0x837309145aa668da;
  _DAT_1832e0638 =
       (_DAT_1832e0638 * 0x6270fdb7b0afa19b ^ _DAT_1832e09d8) + (_DAT_1832e09c8 & 0x3fffff000000);
  _DAT_1832e0b68 = _DAT_1832e0638 ^ _DAT_1832e09d8;
  _DAT_1832e0510 = 0x805341d4299e0efb;
  uVar1 = (~_DAT_1832e05b0 + 0x7facbe2bd661f106) *
          ((_DAT_1832e05c0 ^ 0x84222330) + (ulonglong)((uint)_DAT_1832e05c0 & 0x84222330) * 2);
  uVar1 = (uVar1 | _DAT_1832e09d8) + (uVar1 & _DAT_1832e09d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0c50 = func_0x00018bf747d0((uVar1 | 0x7facbe2b5243d235) + (uVar1 & 0x7facbe2b5243d235));
  uVar1 = (_DAT_1832e0c50 ^ 0x792b99989608c000) & 0x7fffffffffffe000;
  _DAT_1832e0788 = _DAT_1832e09b8 ^ uVar1 ^ 0x7facbe2bd661f11a;
  _DAT_1832e0560 = (_DAT_1832e0560 ^ uVar1) + 0x7facbe2bd661f11a ^ 0x35627c1b65a0d946;
  _DAT_1832e0610 = (_DAT_1832e0610 * -0x2da7d755fe6eaf59 ^ _DAT_1832e0560) + uVar1;
  _DAT_1832e0638 = _DAT_1832e0610 ^ _DAT_1832e0560;
  _DAT_1832e0c60 = 0x7facbe2bd661f11a;
  _DAT_1832e0a80 = func_0x00018bf747d0(_DAT_1832e0860 ^ 0x2d335c9444d73457);
  uVar1 = _DAT_1832e0a80 ^ 0xfffffffffffffffb;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (ulonglong)
          ((uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          (uint)uVar1) << 0x2f | uVar1 >> 0x11;
  _DAT_1832e0550 = _DAT_1832e0b28 ^ uVar1 ^ 0x15;
  _DAT_1832e06d0 = (_DAT_1832e06d0 ^ uVar1) + 0x15 ^ 0x15d182524c5fc81;
  _DAT_1832e0870 = (_DAT_1832e0870 * 0x392838894489cec7 ^ _DAT_1832e06d0) + uVar1;
  _DAT_1832e06a0 = _DAT_1832e0870 ^ _DAT_1832e06d0;
  _DAT_1832e07e0 = 0x15;
  uVar1 = (_DAT_1832e06b8 ^ _DAT_181d7a3b0) + _DAT_1832e0870 + 0x84222325;
  uVar2 = (_DAT_1832e0870 ^ _UNK_181d7a3b8) + _DAT_1832e06b8 + 0x4402bb95c477659c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e06b8 ^ _DAT_181d7a3b0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0870 ^ _UNK_181d7a3b8;
  _DAT_1832e0630 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e06b8 + 0x4402bb95c477659c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0870 + 0x84222325));
  _DAT_1832e0810 =
       (_DAT_1832e0810 ^ _DAT_1832e0630 ^ 0x4402bb95c477659c) + 0xbbfd446a3b889a64 ^
       0x7586dd598519b70a;
  _DAT_1832e0618 =
       (_DAT_1832e0618 * 0x56bf81123bf3dcbb ^ _DAT_1832e0810) +
       (_DAT_1832e0630 ^ 0x4402bb95c477659c);
  _DAT_1832e0838 = _DAT_1832e0618 ^ _DAT_1832e0810;
  _DAT_1832e0a18 = -0x4402bb95c477659c;
  uVar1 = (~_DAT_1832e0958 + 0x4402bb95c477659d) *
          ((_DAT_1832e0898 ^ 0x84222330) + (ulonglong)((uint)_DAT_1832e0898 & 0x84222330) * 2);
  uVar1 = (uVar1 | _DAT_1832e07c8) + (uVar1 & _DAT_1832e07c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0c38 = func_0x00018bf747d0((uVar1 | 0x4402bb95405546ac) + (uVar1 & 0x4402bb95405546ac));
  uVar1 = _DAT_1832e0c38 * 0x63f3a1e8cab33b33;
  _DAT_1832e0b48 = _DAT_1832e0a28 ^ uVar1 ^ 0x4402bb95c47765b1;
  _DAT_1832e0578 = (_DAT_1832e0578 ^ uVar1) + 0x4402bb95c47765b1 ^ 0x4be0828ed0557812;
  _DAT_1832e0628 = (_DAT_1832e0628 * -0x2ff8174f8f58776b ^ _DAT_1832e0578) + uVar1;
  _DAT_1832e05c8 = _DAT_1832e0628 ^ _DAT_1832e0578;
  _DAT_1832e07a0 = 0x4402bb95c47765b1;
  uVar1 = (_DAT_1832e0580 ^ _DAT_181d7a3c0) + _DAT_1832e06e0 + 0x4402bb9540554694;
  uVar2 = (_DAT_1832e06e0 ^ _UNK_181d7a3c8) + _DAT_1832e0580 + 0xbbfd446a3b889a64;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0580 ^ _DAT_181d7a3c0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e06e0 ^ _UNK_181d7a3c8;
  _DAT_1832e0898 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0580 + 0xbbfd446a3b889a64) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e06e0 + 0x4402bb9540554694));
  uVar1 = _DAT_1832e0898 * -0x46266b1a32bedfbd;
  _DAT_1832e08f0 = _DAT_1832e08b0 ^ uVar1 ^ 0x15;
  _DAT_1832e0cd0 = (_DAT_1832e0cd0 ^ uVar1) + 0x15 ^ 0xfa0bbfa6114231df;
  _DAT_1832e09c0 = (_DAT_1832e09c0 * 0x491193aaf70847c7 ^ _DAT_1832e0cd0) + uVar1;
  _DAT_1832e0530 = _DAT_1832e09c0 ^ _DAT_1832e0cd0;
  _DAT_1832e0798 = 0x15;
  uVar1 = (~_DAT_1832e08f8 + 0x96fee7d7d4b0f8e7) *
          ((_DAT_1832e0930 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e0930 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832e0b50) + (uVar1 & _DAT_1832e0b50);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0ae0 = func_0x00018bf747d0((uVar1 | 0x96fee7d75092dbc3) + (uVar1 & 0x96fee7d75092dbc3));
  _DAT_1832e0c68 = _DAT_1832e0c68 + 0x690118282b4f071a ^ 0xc01472aa83fdd382;
  _DAT_1832e0b00 = _DAT_1832e0b38 * -0x20ccce18e4893a81;
  _DAT_1832e0b38 = _DAT_1832e0b00 ^ _DAT_1832e0c68;
  _DAT_1832e0a48 = _DAT_1832e0ae8 ^ 0x690118282b4f071a;
  _DAT_1832e0a60 = 0x690118282b4f071a;
  uVar1 = (~_DAT_1832e0530 + 0x96fee7d7d4b0f8e7) *
          ((_DAT_1832e05c8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1832e05c8 & 0x84222330) * 2);
  uVar1 = (uVar1 | _DAT_1832e0860) + (uVar1 & _DAT_1832e0860);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0860 = func_0x00018bf747d0((uVar1 | 0x96fee7d75092dbd6) + (uVar1 & 0x96fee7d75092dbd6));
  uVar1 = (_DAT_1832e0860 ^ 0xfee7d7d4b0f8e6) & 0xffffffffffffff;
  _DAT_1832e06c0 = _DAT_1832e0af0 ^ uVar1 ^ 0x96fee7d7d4b0f8fb;
  _DAT_1832e09d8 = (_DAT_1832e09d8 ^ uVar1) + 0x96fee7d7d4b0f8fb ^ 0x68e699a04975369e;
  _DAT_1832e0678 = (_DAT_1832e0678 * 0x71fb09225c45dcd5 ^ _DAT_1832e09d8) + uVar1;
  _DAT_1832e0730 = _DAT_1832e0678 ^ _DAT_1832e09d8;
  _DAT_1832e0720 = 0x96fee7d7d4b0f8fb;
  uVar1 = (_DAT_1832e0918 ^ _DAT_181d7a3d0) + _DAT_1832e09a8 + 0x96fee7d75092dbde;
  uVar2 = (_DAT_1832e09a8 ^ _UNK_181d7a3d8) + _DAT_1832e0918 + 0x690118282b4f071a;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0918 ^ _DAT_181d7a3d0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e09a8 ^ _UNK_181d7a3d8;
  _DAT_1832e0b30 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0918 + 0x690118282b4f071a) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e09a8 + 0x96fee7d75092dbde));
  uVar1 = _DAT_1832e0b30 & 0x3fffffffff ^ 0x690118282b4f071a;
  _DAT_1832e0af0 = _DAT_1832e0650 ^ uVar1 ^ 0x15;
  _DAT_1832e0580 = (_DAT_1832e0580 ^ uVar1) + 0x15 ^ 0xed38a56d1404d396;
  _DAT_1832e0c48 = (_DAT_1832e0c48 * -0x31b3f2204576ced3 ^ _DAT_1832e0580) + uVar1 ^ _DAT_1832e0580;
  _DAT_1832e0550 = 0x15;
  uVar1 = (~_DAT_1832e06c0 + 0x34ebd92e421deba2) *
          ((_DAT_1832e08d8 ^ 0xf32d57fed2dd5cde) + (_DAT_1832e08d8 & 0x732d57fed2dd5cde) * 2);
  uVar1 = (uVar1 | _DAT_1832e0640) + (uVar1 & _DAT_1832e0640);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0570 = func_0x00018bf747d0((uVar1 | 0xc7c68ed090c0b77f) + (uVar1 & 0xc7c68ed090c0b77f));
  uVar1 = (_DAT_1832e0570 ^ 0xdb7699e5db) & 0xffffffffff ^ 0xf32d57fe56ff7ffb;
  _DAT_1832e0840 = _DAT_1832e0a90 ^ uVar1 ^ 0x2819312c991d6b9c;
  _DAT_1832e0b60 = (_DAT_1832e0b60 ^ uVar1) + 0x2819312c991d6b9c ^ 0x6d0c763c5b651738;
  _DAT_1832e0850 = (_DAT_1832e0850 * -0x5521381e3ed3254d ^ _DAT_1832e0b60) + uVar1;
  _DAT_1832e0c38 = _DAT_1832e0850 ^ _DAT_1832e0b60;
  _DAT_1832e07b8 = _DAT_1832e0a08 ^ 0x2819312c991d6b9c;
  _DAT_1832e0928 = 0x2819312c991d6b9c;
  _DAT_1832e0850 = func_0x00018bf747d0(_DAT_1832e0a90 ^ uVar1 ^ 0x757775cf763d4e1);
  _DAT_1832e05b8 = (_DAT_1832e05b8 ^ _DAT_1832e0850) + 0xc7c68ed014e2945a ^ 0x8ebf9af02ee4b671;
  _DAT_1832e0ab8 = (_DAT_1832e0ab8 * 0x7cd8d3b828fef1f7 ^ _DAT_1832e05b8) + _DAT_1832e0850;
  _DAT_1832e05e0 = _DAT_1832e0ab8 ^ _DAT_1832e05b8;
  _DAT_1832e0b18 = 0xc7c68ed014e2945a;
  uVar1 = (~_DAT_1832e05c8 + 0x34ebd92e421deba2) *
          ((_DAT_1832e08c0 ^ 0xf32d57fed2dd5cde) + (_DAT_1832e08c0 & 0x732d57fed2dd5cde) * 2);
  uVar1 = (uVar1 | _DAT_1832e0a38) + (uVar1 & _DAT_1832e0a38);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e0518 = func_0x00018bf747d0((uVar1 | 0xc7c68ed090c0b77f) + (uVar1 & 0xc7c68ed090c0b77f));
  uVar1 = (_DAT_1832e0518 ^ 0xc6564cdb7699e5db) * -0x20e86b730d3e9bc9 ^ 0x34ebd92e421deba1;
  _DAT_1832e07c8 = (_DAT_1832e07c8 ^ uVar1) + 0x3029512e421d6ba1 ^ 0x38c4fa9231deb9d4;
  _DAT_1832e0ae8 = (_DAT_1832e0ae8 * -0x4008c92466363cf5 ^ _DAT_1832e07c8) + uVar1;
  _DAT_1832e0828 = _DAT_1832e0ae8 ^ _DAT_1832e07c8;
  _DAT_1832e06a8 = 0x3029512e421d6ba1;
  uVar1 = (_DAT_1832e0890 ^ 0x84222330) + _DAT_1832e06d8 + 0x84222330;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0890 ^ 0x84222330;
  uVar2 = ((_DAT_1832e06d8 + _DAT_1832e0890) * 0x2000 | _DAT_1832e06d8 + _DAT_1832e0890 >> 0x33) ^
          _DAT_1832e06d8;
  _DAT_1832e07a0 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1832e0890 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e06d8 + 0x84222330));
  uVar1 = (_DAT_1832e07a0 ^ 0x15) * -0x5aec65b3bcca9ac7;
  _DAT_1832e0ad0 = _DAT_1832e0af0 ^ uVar1 ^ 0x15;
  _DAT_1832e0758 = (_DAT_1832e0758 ^ uVar1) + 0x15 ^ 0xbc4ad8a88466126b;
  _DAT_1832e0b60 = (_DAT_1832e0b60 * 0x46920acad74e26ab ^ _DAT_1832e0758) + uVar1;
  _DAT_1832e0520 = _DAT_1832e0b60 ^ _DAT_1832e0758;
  _DAT_1832e0c38 = 0x15;
  _DAT_1832e0718 = func_0x00018bf747d0(_DAT_1832e0968 ^ 0xdd5c45245af8cd1c);
  uVar1 = ~_DAT_1832e0718;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar1;
  _DAT_1832e0658 = _DAT_1832e0658 ^ uVar1 ^ 0xf3c47bef15cb1f19;
  _DAT_1832e0578 = (_DAT_1832e0578 * 0x1e941b1af334759b ^ _DAT_1832e0658) + uVar1;
  _DAT_1832e0608 = _DAT_1832e0578 ^ _DAT_1832e0658;
  _DAT_1832e0c30 = 0;
  uVar1 = (_DAT_1832e0c08 ^ 0x84222330) + _DAT_1832e0b28 + 0x84222330;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0c08 ^ 0x84222330;
  uVar2 = ((_DAT_1832e0b28 + _DAT_1832e0c08) * 0x2000 | _DAT_1832e0b28 + _DAT_1832e0c08 >> 0x33) ^
          _DAT_1832e0b28;
  _DAT_1832e0638 =
       func_0x00018bf747d0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1832e0c08 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e0b28 + 0x84222330));
  uVar1 = (ulonglong)((uint)_DAT_1832e0638 ^ 0x15) << 0x24 | _DAT_1832e0638 >> 0x1c;
  _DAT_1832e0738 = _DAT_1832e0770 ^ uVar1 ^ 0x15;
  _DAT_1832e0538 = (_DAT_1832e0538 ^ uVar1) + 0x15 ^ 0x11684ec7abfe8536;
  _DAT_1832e0a18 = (_DAT_1832e0a18 * 0x55f365843e73afa5 ^ _DAT_1832e0538) + uVar1;
  _DAT_1832e0b40 = _DAT_1832e0a18 ^ _DAT_1832e0538;
  _DAT_1832e0a28 = 0x15;
  _DAT_1832e0c00 = func_0x00018bf747d0(_DAT_1832e0ce8 + 0xffdcff7be2ffe1ff ^ 0x9f);
  uVar1 = _DAT_1832e0c00 << 2 | _DAT_1832e0c00 >> 0x3e;
  _DAT_1832e0a30 = _DAT_1832e0a30 ^ uVar1 ^ 0xee7277c121906da;
  _DAT_1832e0648 = (_DAT_1832e0648 * 0x563df2ec91992309 ^ _DAT_1832e0a30) + uVar1;
  _DAT_1832e0710 = _DAT_1832e0648 ^ _DAT_1832e0a30;
  _DAT_1832e0a50 = 0;
  _DAT_1832e0760 = func_0x00018bf747d0(_DAT_1832e0ba8 + 0x21007c100021ffU ^ 0x12);
  uVar1 = _DAT_1832e0760 ^ 0x15;
  _DAT_1832e0600 = _DAT_1832e0748 ^ uVar1 ^ 0x15;
  _DAT_1832e0888 = (_DAT_1832e0888 ^ uVar1) + 0x15 ^ 0x3a11be80317855ea;
  _DAT_1832e0ca8 = (_DAT_1832e0ca8 * -0x384222389bdf0a47 ^ _DAT_1832e0888) + uVar1;
  _DAT_1832e06d8 = _DAT_1832e0ca8 ^ _DAT_1832e0888;
  _DAT_1832e0910 = 0x15;
  switch(*(longlong *)(unaff_RBP + 0xa0) == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf4c0c4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf4d387 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf4c0c4(void)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x18) = 0xf;
  (**(code **)(**(longlong **)(unaff_RBP + 0x10) + 0x70))
            (*(longlong **)(unaff_RBP + 0x10),*(undefined8 *)(unaff_RBP + 0x98),unaff_RBP + -0x30);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xbf4c118 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf4c118(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (in_RAX ^ _DAT_181d7a210) + param_1 + 0x84222329;
  uVar3 = (param_1 ^ _UNK_181d7a218) + in_RAX + 0x44;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ in_RAX ^ _DAT_181d7a210;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_1 ^ _UNK_181d7a218;
  _DAT_1832e0b60 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (in_RAX + 0x44) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (param_1 + 0x84222329));
  uVar2 = _DAT_1832e0b60 >> 1 | _DAT_1832e0b60;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1832e0b60) & 0x7fffffffffffffff;
  _DAT_1832e0790 = (_DAT_1832e0790 ^ uVar2) + 0x4c ^ 0x3468f45051117884;
  _DAT_1832e0598 = (_DAT_1832e0598 * -0xfa7c3dd236fd23 ^ _DAT_1832e0790) + uVar2;
  _DAT_1832e0950 = _DAT_1832e0598 ^ _DAT_1832e0790;
  _DAT_1832e0990 = 0x4c;
  uVar2 = (~_DAT_1832e0bf8 + 0xec) *
          ((_DAT_1832e07d8 ^ 0x84222312) + (ulonglong)((uint)_DAT_1832e07d8 & 0x84222312) * 2);
  uVar2 = (uVar2 | _DAT_1832e0768) + (uVar2 & _DAT_1832e0768);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e07e0 = func_0x00018bf747d0((uVar2 | 0x842223f9) + (ulonglong)((uint)uVar2 & 0x842223f9))
  ;
  uVar2 = _DAT_1832e07e0 << 0x1a | _DAT_1832e07e0 >> 0x26;
  _DAT_1832e0c98 = (_DAT_1832e0c98 ^ uVar2) + 0xdc ^ 0xb1e8d05a7975e5e6;
  _DAT_1832e0c38 = (_DAT_1832e0c38 * 0x401bfe14d4f3ff29 ^ _DAT_1832e0c98) + uVar2;
  _DAT_1832e0a28 = _DAT_1832e0c38 ^ _DAT_1832e0c98;
  _DAT_1832e0670 = 0xdc;
  uVar2 = (_DAT_1832e0a70 ^ _DAT_1805b4a60) + _DAT_1832e0b80 + 0x84222325;
  uVar3 = (_DAT_1832e0b80 ^ _UNK_1805b4a68) + _DAT_1832e0a70 + 0xc0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0a70 ^ _DAT_1805b4a60;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832e0b80 ^ _UNK_1805b4a68;
  _DAT_1832e0548 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0a70 + 0xc0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0b80 + 0x84222325));
  _DAT_1832e0760 = (_DAT_1832e0760 ^ _DAT_1832e0548 ^ 0xc0) - 0xc0 ^ 0xa2c7823234d45cc9;
  _DAT_1832e0750 = (_DAT_1832e0750 * -0x4916ab832adec851 ^ _DAT_1832e0760) + (_DAT_1832e0548 ^ 0xc0)
  ;
  _DAT_1832e0870 = _DAT_1832e0750 ^ _DAT_1832e0760;
  _DAT_1832e0800 = 0x40;
  uVar2 = (~_DAT_1832e09f0 + 0xc1) *
          ((_DAT_1832e0b50 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832e0b50 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_1832e0c10) + (uVar2 & _DAT_1832e0c10);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e0658 = func_0x00018bf747d0((uVar2 | 0x842223d5) + (ulonglong)((uint)uVar2 & 0x842223d5))
  ;
  _DAT_1832e0608 = _DAT_1832e06e8 ^ _DAT_1832e0658 ^ 0xf0;
  _DAT_1832e0848 = (_DAT_1832e0848 ^ _DAT_1832e0658) + 0xf0 ^ 0x9b0da5b70957e63e;
  _DAT_1832e0b68 = (_DAT_1832e0b68 * -0x3a87de7784fb64fd ^ _DAT_1832e0848) + _DAT_1832e0658;
  _DAT_1832e05e0 = _DAT_1832e0b68 ^ _DAT_1832e0848;
  _DAT_1832e0ae8 = 0xf0;
  _DAT_1832e0598 = func_0x00018bf747d0(_DAT_1832e0cb8 + 0x22ff838b0021ffU ^ 0xe9);
  uVar2 = _DAT_1832e0598 & 0xfffffffffe000000;
  _DAT_1832e0b78 = _DAT_1832e05f0 ^ uVar2 ^ 0x130;
  _DAT_1832e05a0 = (_DAT_1832e05a0 ^ uVar2) + 0x130 ^ 0x57dbf43e8aaca0d2;
  _DAT_1832e0830 = (_DAT_1832e0830 * -0x6bd7ec22539cd64d ^ _DAT_1832e05a0) + uVar2;
  _DAT_1832e0c18 = _DAT_1832e0830 ^ _DAT_1832e05a0;
  _DAT_1832e0c00 = 0x30;
  uVar2 = (_DAT_1832e0700 ^ _DAT_181c06d30) + _DAT_1832e0a38 + 0x84222325;
  uVar3 = (_DAT_1832e0a38 ^ _UNK_181c06d38) + _DAT_1832e0700 + 0x38;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0700 ^ _DAT_181c06d30;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832e0a38 ^ _UNK_181c06d38;
  _DAT_1832e0ca8 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0700 + 0x38) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0a38 + 0x84222325));
  _DAT_1832e0550 = (_DAT_1832e0550 ^ _DAT_1832e0ca8) - 0x38 ^ 0xfe85ce80e29f326d;
  _DAT_1832e0580 = (_DAT_1832e0580 * -0x3c60dffc83952f11 ^ _DAT_1832e0550) + _DAT_1832e0ca8;
  _DAT_1832e06a8 = _DAT_1832e0580 ^ _DAT_1832e0550;
  _DAT_1832e0a88 = 200;
  _DAT_1832e0500 = func_0x00018bf747d0(_DAT_1832e0960 + 0x1f00847b001dffU ^ 0x38);
  uVar2 = (ulonglong)(((uint)_DAT_1832e0500 ^ 0x28) & 0x68);
  _DAT_1832e07b0 = _DAT_1832e08e8 ^ uVar2 ^ 0x130;
  _DAT_1832e0c28 = (_DAT_1832e0c28 ^ uVar2) + 0x130 ^ 0xa035306244ce779d;
  _DAT_1832e07a8 = (_DAT_1832e07a8 * -0x184f84877664655 ^ _DAT_1832e0c28) + uVar2;
  _DAT_1832e0a30 = _DAT_1832e07a8 ^ _DAT_1832e0c28;
  _DAT_1832e07d0 = 0x30;
  _DAT_1832e0968 = func_0x00018bf747d0(_DAT_1832e0598 ^ 0x1d00849b001da5);
  uVar3 = _UNK_181d7a228;
  uVar2 = _DAT_181d7a220;
  uVar1 = _DAT_1832e0968 >> 1 | _DAT_1832e0968;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1832e0968;
  _DAT_1832e0c90 = _DAT_1832e06f0 ^ uVar1 ^ 0xe0;
  _DAT_1832e07e0 = (_DAT_1832e07e0 ^ uVar1) + 0xe0 ^ 0x44eb6ed62bc06d5f;
  _DAT_1832e0b18 = (_DAT_1832e0b18 * -0x66d8323c95e75881 ^ _DAT_1832e07e0) + uVar1;
  _DAT_1832e09a8 = _DAT_1832e0b18 ^ _DAT_1832e07e0;
  _DAT_1832e09e0 = 0xe0;
  uVar1 = (_DAT_1832e0680 ^ _DAT_181d7a220) + _DAT_1832e06f8 + 0x84222369;
  uVar4 = (_DAT_1832e06f8 ^ _UNK_181d7a228) + _DAT_1832e0680 + 0xdc;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0680 ^ _DAT_181d7a220;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e06f8 ^ _UNK_181d7a228;
  _DAT_1832e0c90 =
       func_0x00018bf747d0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832e0680 + 0xdc) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e06f8 + 0x84222369));
  uVar1 = _DAT_1832e0c90 ^ 0xdc;
  _DAT_1832e05f8 = _DAT_1832e09b0 ^ uVar1 ^ 0x128;
  _DAT_1832e0a20 = (_DAT_1832e0a20 ^ uVar1) + 0x128 ^ 0x2d0492e80b2382f1;
  _DAT_1832e0ba0 = (_DAT_1832e0ba0 * -0x7d18d7c67cd5cc81 ^ _DAT_1832e0a20) + uVar1;
  _DAT_1832e06c0 = _DAT_1832e0ba0 ^ _DAT_1832e0a20;
  _DAT_1832e06c8 = 0x28;
  uVar1 = (_DAT_1832e0758 ^ uVar2) + _DAT_1832e0638 + 0x84222369;
  uVar4 = (_DAT_1832e0638 ^ uVar3) + _DAT_1832e0758 + 0xdc;
  uVar2 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e0758 ^ uVar2;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e0638 ^ uVar3;
  _DAT_1832e0928 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0758 + 0xdc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0638 + 0x84222369));
  uVar2 = _DAT_1832e0928 >> 1 | _DAT_1832e0928;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1832e0928;
  _DAT_1832e06d0 = (_DAT_1832e06d0 ^ uVar2) + 0x90 ^ 0x70c889efdf193466;
  _DAT_1832e06b0 = (_DAT_1832e06b0 * -0x3e3c3967f3dd3e0d ^ _DAT_1832e06d0) + uVar2;
  _DAT_1832e0aa8 = _DAT_1832e06b0 ^ _DAT_1832e06d0;
  _DAT_1832e0b68 = 0x90;
  _DAT_1832e0a80 = func_0x00018bf747d0(_DAT_1832e07f0 + 0x1f007c24ffddffU ^ 8);
  _DAT_1832e09f0 = _DAT_1832e09a0 ^ _DAT_1832e0a80 ^ 0x128;
  _DAT_1832e0678 = (_DAT_1832e0678 ^ _DAT_1832e0a80) + 0x128 ^ 0x745f18c58f29bc45;
  _DAT_1832e06d0 = (_DAT_1832e06d0 * -0x72fdbe9d4067713d ^ _DAT_1832e0678) + _DAT_1832e0a80;
  _DAT_1832e0b20 = _DAT_1832e06d0 ^ _DAT_1832e0678;
  _DAT_1832e0c20 = 0x28;
  uVar2 = (_DAT_1832e0cd8 ^ _DAT_180595f40) + _DAT_1832e0688 + 0x8422230d;
  uVar3 = (_DAT_1832e0688 ^ _UNK_180595f48) + _DAT_1832e0cd8 + 0x28;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0cd8 ^ _DAT_180595f40;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832e0688 ^ _UNK_180595f48;
  _DAT_1832e0bf8 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0cd8 + 0x28) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0688 + 0x8422230d));
  _DAT_1832e0638 = _DAT_1832e0638 ^ _DAT_1832e0bf8 & 0xffffffffffffffc0 ^ 0x17d424bdfd14a37c;
  _DAT_1832e0ac0 =
       (_DAT_1832e0ac0 * 0x4742d3dad4b262e7 ^ _DAT_1832e0638) +
       (_DAT_1832e0bf8 & 0xffffffffffffffc0);
  _DAT_1832e05b8 = _DAT_1832e0ac0 ^ _DAT_1832e0638;
  _DAT_1832e07e0 = 0;
  uVar2 = (~_DAT_1832e05f8 + 0x100) *
          ((_DAT_1832e0a90 ^ 0x84222369) + (ulonglong)((uint)_DAT_1832e0a90 & 0x84222369) * 2);
  uVar2 = (uVar2 | _DAT_1832e05f8) + (uVar2 & _DAT_1832e05f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e0548 = func_0x00018bf747d0((uVar2 | 0x84222396) + (ulonglong)((uint)uVar2 & 0x84222396))
  ;
  _DAT_1832e0998 =
       (_DAT_1832e0998 ^ _DAT_1832e0548 & 0x7fffffffffffffff) + 0xb3 ^ 0x7e3adb92aa45766b;
  _DAT_1832e06f0 =
       (_DAT_1832e06f0 * -0x114971a8a5b79875 ^ _DAT_1832e0998) +
       (_DAT_1832e0548 & 0x7fffffffffffffff);
  _DAT_1832e0708 = _DAT_1832e06f0 ^ _DAT_1832e0998;
  _DAT_1832e08c8 = 0xb3;
  uVar2 = (_DAT_1832e0540 ^ _DAT_181d7a230) + _DAT_1832e0aa0 + 0x84222369;
  uVar3 = (_DAT_1832e0aa0 ^ _UNK_181d7a238) + _DAT_1832e0540 + 0xb3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e0540 ^ _DAT_181d7a230;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832e0aa0 ^ _UNK_181d7a238;
  _DAT_1832e0b60 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832e0540 + 0xb3) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e0aa0 + 0x84222369));
  _DAT_1832e07a0 = _DAT_1832e07a0 ^ _DAT_1832e0b60 ^ 0x4c ^ 0xf5d7d4d8a3beecda;
  _DAT_1832e08c8 = (_DAT_1832e08c8 * -0x4b3d9311bd145a07 ^ _DAT_1832e07a0) + (_DAT_1832e0b60 ^ 0x4c)
  ;
  _DAT_1832e0be8 = _DAT_1832e08c8 ^ _DAT_1832e07a0;
  _DAT_1832e09b8 = 0;
  uVar2 = ((_DAT_1832e0b58 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832e0b58 & 0x84222315) * 2) *
          -_DAT_1832e0a40;
  uVar2 = (uVar2 | _DAT_1832e0c50) + (uVar2 & _DAT_1832e0c50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e06f0 = func_0x00018bf747d0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = ((_DAT_1832e06f0 << 0xc | _DAT_1832e06f0 >> 0x34) << 9 |
          (_DAT_1832e06f0 & 0xfffffffffffff) >> 0x2b) * -0x4d48bfe04277134d;
  _DAT_1832e05a0 = _DAT_1832e0628 ^ uVar2 ^ 0x30;
  _DAT_1832e0b70 = (_DAT_1832e0b70 ^ uVar2) + 0x30 ^ 0xdbfdc6f5b3b3e87f;
  _DAT_1832e0860 = (_DAT_1832e0860 * 0x798afa068efb530d ^ _DAT_1832e0b70) + uVar2;
  _DAT_1832e08d0 = _DAT_1832e0860 ^ _DAT_1832e0b70;
  _DAT_1832e0790 = 0x30;
  uVar2 = (_DAT_1832e06f8 ^ 0x84222315) + _DAT_1832e06f8 + 0x84222315;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832e06f8 ^ 0x84222315;
  uVar3 = (_DAT_1832e06f8 << 0xe | (_DAT_1832e06f8 & 0x7fffffffffffffff) >> 0x32) ^ _DAT_1832e06f8;
  _DAT_1832e0c58 =
       func_0x00018bf747d0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1832e06f8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832e06f8 + 0x84222315));
  uVar2 = _DAT_1832e0c58 - (_DAT_1832e0c58 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1832e0c58;
  _DAT_1832e0ca0 = _DAT_1832e0720 ^ uVar2 ^ 0x30;
  _DAT_1832e0970 = (_DAT_1832e0970 ^ uVar2) + 0x30 ^ 0x5f4f0808cecc8753;
  _DAT_1832e0510 = (_DAT_1832e0510 * 0x6b3e4f1962109197 ^ _DAT_1832e0970) + uVar2;
  _DAT_1832e06a0 = _DAT_1832e0510 ^ _DAT_1832e0970;
  _DAT_1832e0ab8 = 0x30;
  uVar3 = (ulonglong)*(byte *)(unaff_RBP + 0x98);
  uVar2 = (~_DAT_1832e0c38 + 0x31) *
          ((uVar3 ^ 0x84222325 ^ _DAT_1832e0b88) +
          (ulonglong)((uint)_DAT_1832e0b88 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_1832e0c20) + (uVar2 & _DAT_1832e0c20);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832e0c30 =
       func_0x00018bf747d0((uVar3 ^ 0x84222315 | uVar2) +
                           (ulonglong)((uint)(uVar3 ^ 0x84222315) & (uint)uVar2));
  _DAT_1832e0770 = uVar3 | 0x30;
  _DAT_1832e0638 = (_DAT_1832e0638 ^ _DAT_1832e0c30) + _DAT_1832e0770 ^ 0xfed87298ab0bea5c;
  _DAT_1832e0728 = (_DAT_1832e0728 * -0x13750f41f0426263 ^ _DAT_1832e0638) + _DAT_1832e0c30;
  _DAT_1832e0b40 = _DAT_1832e0728 ^ _DAT_1832e0638;
  *(char *)(*(longlong *)(unaff_RBP + 0xa0) + -1) = (char)_DAT_1832e0770;
  switch(unaff_EDI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf4d339 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf4d387 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf4d339(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong lVar1;
  
  FUN_18414b520(unaff_RBP + -0x30,param_2,(unaff_RBP + -0x3b) - param_2);
  lVar1 = unaff_RBP + -0x30;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar1 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x10) + 0x70))
            (*(longlong **)(unaff_RBP + 0x10),*(undefined8 *)(unaff_RBP + 0x30),lVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xbf523d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf523d3(void)

{
  undefined8 uVar1;
  longlong *unaff_RBX;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  undefined8 unaff_RDI;
  
  unaff_RBP[0x13] = unaff_RDI;
  uVar1 = (**(code **)(unaff_RBX + JNI->NewCharArray /*0x588*/))();
  *unaff_RBP = uVar1;
  unaff_RBP[-1] = uVar1;
  unaff_RBP[0xe] = uVar1;
  *(undefined4 *)(unaff_RBP + 0xe) = 0;
  *(int *)(unaff_RBP + 0xf) = unaff_ESI;
  *(int *)((longlong)unaff_RBP + 0x2c) = unaff_ESI;
  switch(0 < unaff_ESI) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf536f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf536f0(void)

{
  int iVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_R14D;
  
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x98);
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_R14D;
  iVar1 = (**(code **)(unaff_RBX + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf5a63b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf5a63b(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  uint uVar6;
  undefined1 unaff_XMM8 [16];
  uint unaff_XMM10_Da;
  uint uVar7;
  uint uVar8;
  
  auVar4 = pshufb(in_XMM0,unaff_XMM8);
  uVar3 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar3 + _DAT_1832e0890;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_1832e0a78 ^ uVar3;
  }
  _DAT_1832e0cd0 = func_0x00018bf747d0(in_XMM0[5] ^ uVar2);
  uVar7 = unaff_ESI & unaff_XMM10_Da;
  uVar8 = unaff_ESI ^ unaff_XMM10_Da;
  uVar6 = unaff_ESI ^ (uint)DAT_18001a710;
  lVar5 = ((ulonglong)unaff_ESI * (ulonglong)_DAT_181d79b60 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_181d79b50;
  uVar2 = _DAT_1832e0cd0 & 0x1fffffffffff;
  uVar3 = ((((ulonglong)uVar6 * (ulonglong)_DAT_181d79b30 + _DAT_181d79b40 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_181d79b20 + lVar5 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_181d79b10 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_181d79b00 +
           ((ulonglong)(unaff_ESI | unaff_XMM10_Da) * (ulonglong)_DAT_181d79af0 << 0x20) +
           (ulonglong)(unaff_ESI | unaff_XMM10_Da) * (ulonglong)_DAT_181d79ae0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_181d79ad0 << 0x20 |
           (ulonglong)uVar7 * (ulonglong)_DAT_181d79ac0) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_181d79ab0 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_181d79aa0) -
          (((ulonglong)uVar6 * (ulonglong)_DAT_181d79be0 + _DAT_181d79bf0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_181d79bd0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_181d79bc0 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_181d79bb0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_181d79ba0 << 0x20 |
           (ulonglong)uVar7 * (ulonglong)_DAT_181d79b90) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_181d79b80 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_181d79b70 + lVar5)) + 0x1024df15351ce44a;
  _DAT_1832e0ac0 = _DAT_1832e0540 ^ uVar2 ^ uVar3;
  _DAT_1832e0550 = (_DAT_1832e0550 ^ uVar2) + uVar3 ^ 0xe69f53cf0fb4edce;
  _DAT_1832e0b40 = (_DAT_1832e0b40 * -0x6699a7e685973fd7 ^ _DAT_1832e0550) + uVar2;
  _DAT_1832e07d0 = _DAT_1832e0b40 ^ _DAT_1832e0550;
  _DAT_1832e0640 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar3;
  iVar1 = (**(code **)(unaff_RBX + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf5d98d -----

undefined8 FUN_18bf5d98d(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x70);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ----- block @ rva 0xbf76dbf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf76dbf(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf76f68 -----

void FUN_18bf76f68(void)

{
  return;
}


// ----- block @ rva 0xbf77855 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf77855(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->GetStaticObjectField /*0x488*/))();
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


// ----- block @ rva 0xbf77a02 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18bf773f8(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf77c0b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf77c0b(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  cVar1 = (**(code **)(unaff_R12 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf77d5d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf77d5d(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf7862c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18bf773f8(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf79612 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf79612(void)

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


// ----- block @ rva 0xbf796ce -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf796ce(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
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


// ----- block @ rva 0xbf7990a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7990a(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf7999a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7999a(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  cVar1 = (**(code **)(unaff_R12 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf79a2c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf79a2c(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf7b78f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7b78f(void)

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


// ----- block @ rva 0xbf7b7e3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7b7e3(void)

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


// ----- block @ rva 0xbf7bc2f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7bc2f(void)

{
  FUN_190ddfc90();
  (*_DAT_181d811f8)();
  return;
}


// ----- block @ rva 0xbf7bdac -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7bdac(void)

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


// ----- block @ rva 0xbf7be42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7be42(void)

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


// ----- block @ rva 0xbf7c0ea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c0ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_181d81208)();
  return;
}


// ----- block @ rva 0xbf7c16d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c16d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181d815a8)();
  return;
}


// ----- block @ rva 0xbf7c247 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7c247(void)

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


// ----- block @ rva 0xbf7c4bf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c4bf(void)

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


// ----- block @ rva 0xbf7c513 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c513(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d814e8)();
  return;
}


// ----- block @ rva 0xbf7c548 -----

void FUN_18bf7c548(void)

{
  return;
}


// ----- block @ rva 0xbf7c556 -----

void FUN_18bf7c556(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf7c6c0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7c6c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181d81ee8)();
  return;
}


// ----- block @ rva 0xbf7da07 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7da07(void)

{
  FUN_190dd72e0();
  (*_DAT_181d81c38)();
  return;
}


// ----- block @ rva 0xbf7db0e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7db0e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181d82248)();
  return;
}


// ----- block @ rva 0xbf7dd6e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7dd6e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbf7e2fe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7e2fe(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000078;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000078 < 0 || iVar1 <= in_stack_00000078) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf7e9b5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7e9b5(void)

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


// ----- block @ rva 0xbf7e9d9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7e9d9(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf7ec12 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf7ec12(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbf7ee3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf7ee3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181d82498)();
  return;
}


// ----- block @ rva 0xbf7ef9d -----

void FUN_18bf7ef9d(void)

{
  return;
}


// ----- block @ rva 0xbf7efbc -----

void FUN_18bf7efbc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf8141a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8141a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xbf815b6 -----

void FUN_18bf815b6(void)

{
  return;
}


// ----- block @ rva 0xbf82c1e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf82c1e(void)

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


// ----- block @ rva 0xbf83b5c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf83b5c(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf83e8e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf83e8e(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (*in_RAX)(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf860fe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf860fe(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined4 uStack00000000000000a4;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined2 uStack00000000000000c0;
  
  uStack00000000000000a4 = 0x49a740b4;
  rdtsc();
  uStack00000000000000b0 = 0x74007800690073;
  rdtsc();
  uStack00000000000000b8 = 0x65002f006f0077;
  rdtsc();
  uStack00000000000000c0 = 0x51;
  in_stack_00000050 =
       (**(code **)(in_stack_00000030 + JNI->NewString /*0x518*/))(in_stack_00000030,&stack0x000000b0,9);
  FUN_190ddfc90(in_stack_00000030,&stack0x00000038,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xdad,
                0x43);
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


// ----- block @ rva 0xbf89e18 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf89e18(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf8a0de -----

undefined8 thunk_FUN_18bf8159f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xbf8a29a -----

void FUN_18bf8a29a(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0xbf8a51e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8a51e(void)

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


// ----- block @ rva 0xbf8a572 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8a572(void)

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


// ----- block @ rva 0xbf8a661 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8a661(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbf8a692 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8a692(void)

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


// ----- block @ rva 0xbf8a6e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8a6e6(void)

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


// ----- block @ rva 0xbf8ab1b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8ab1b(void)

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


// ----- block @ rva 0xbf8ab6f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8ab6f(void)

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


// ----- block @ rva 0xbf8ad8c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8ad8c(void)

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


// ----- block @ rva 0xbf8afa2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8afa2(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbf8b396 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8b396(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181d849f8)();
  return;
}


// ----- block @ rva 0xbf8b3b1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8b3b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d84938)();
  return;
}


// ----- block @ rva 0xbf8b3e5 -----

void FUN_18bf8b3e5(void)

{
  return;
}


// ----- block @ rva 0xbf8b3f4 -----

void FUN_18bf8b3f4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf8b56c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8b56c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181d85088)();
  return;
}


// ----- block @ rva 0xbf8b771 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8b771(void)

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


// ----- block @ rva 0xbf8bdbc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8bdbc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbf8c36a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8c36a(void)

{
  (*_DAT_181d859a8)();
  return;
}


// ----- block @ rva 0xbf8c8e3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8c8e3(void)

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


// ----- block @ rva 0xbf8d161 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8d161(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_181d84fe8)();
  return;
}


// ----- block @ rva 0xbf8d4ab -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8d4ab(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181d85078)();
  return;
}


// ----- block @ rva 0xbf8d506 -----

void FUN_18bf8d506(void)

{
  return;
}


// ----- block @ rva 0xbf8db3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8db3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181d858e8)();
  return;
}


// ----- block @ rva 0xbf8dea1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bf8dea1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbf8e044 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf8e044(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181d85878)();
  return;
}


// ----- block @ rva 0xbf8e0aa -----

void FUN_18bf8e0aa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbf8e2db -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf8e331 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf8e2db(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xbf8e81b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf8e871 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf8e81b(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000050;
  
  uStack0000000000000050 = 0xd;
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xbf9111a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf91131 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf9111a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xbf91f1d -----

void thunk_FUN_18bf8e463(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xbf93dc0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018bf950d7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18bf93dc0(void)

{
  char cVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar2 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  cVar1 = *(char *)(lVar2 + in_stack_00000060);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar2,2);
  uVar7 = (_DAT_1832e2248 ^ _DAT_181d87f70) + _DAT_1832e2058 + 0x84222325;
  uVar8 = (_DAT_1832e2058 ^ _UNK_181d87f78) + _DAT_1832e2248 + 0x36259804;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e2248 ^ _DAT_181d87f70;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e2058 ^ _UNK_181d87f78;
  _DAT_1832e1c58 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e2248 + 0x36259804) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e2058 + 0x84222325));
  uVar7 = _DAT_1832e1c58 >> 1 | _DAT_1832e1c58;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ _DAT_1832e1c58) * 0x66c81d07e66c4021;
  _DAT_1832e20b0 = (_DAT_1832e20b0 ^ uVar7) - 0x36259804 ^ 0xfe8eebf93ce0c03d;
  _DAT_1832e1cb0 = (_DAT_1832e1cb0 * -0x289326caf0275a11 ^ _DAT_1832e20b0) + uVar7;
  _DAT_1832e1c38 = _DAT_1832e1cb0 ^ _DAT_1832e20b0;
  _DAT_1832e1fe0 = 0xc9da67fc;
  _DAT_1832e1d50 = func_0x00018bfa9e50(_DAT_1832e1c00 ^ 0xff68ff8dba00044f);
  uVar7 = _DAT_1832e1d50 ^ 0x35ef726b03;
  _DAT_1832e1d60 = _DAT_1832e2288 ^ uVar7 ^ 0x36259903;
  _DAT_1832e1b10 = (_DAT_1832e1b10 ^ uVar7) + 0x36259903 ^ 0xbf89ba0624a859fa;
  _DAT_1832e1d68 = (_DAT_1832e1d68 * 0x5a3a2735c738ff2f ^ _DAT_1832e1b10) + uVar7;
  _DAT_1832e1bf8 = _DAT_1832e1d68 ^ _DAT_1832e1b10;
  _DAT_1832e1d98 = 0x36259903;
  uVar7 = (_DAT_1832e20a8 ^ _DAT_181d87f80) + _DAT_1832e2208 + 0xb207ba26;
  uVar8 = (_DAT_1832e2208 ^ _UNK_181d87f88) + _DAT_1832e20a8 + 0xc9da67fc;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e20a8 ^ _DAT_181d87f80;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e2208 ^ _UNK_181d87f88;
  _DAT_1832e1d60 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e20a8 + 0xc9da67fc) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e2208 + 0xb207ba26));
  uVar7 = (ulonglong)(((uint)_DAT_1832e1d60 ^ 0x22050803) & 0x36259903) * 0x6f044ee5d1df97e7;
  _DAT_1832e1b50 = _DAT_1832e1ed8 ^ uVar7 ^ 0x1000000ff;
  _DAT_1832e1ef8 = (_DAT_1832e1ef8 ^ uVar7) + 0x1000000ff ^ 0xe4deccd585aa491c;
  _DAT_1832e22c8 = (_DAT_1832e22c8 * 0x322f6c65a80471ff ^ _DAT_1832e1ef8) + uVar7;
  _DAT_1832e2078 = _DAT_1832e22c8 ^ _DAT_1832e1ef8;
  _DAT_1832e1b68 = 0xff;
  _DAT_1832e1be0 = func_0x00018bfa9e50(_DAT_1832e1b40 ^ 0x87ffe669fff142);
  uVar7 = _DAT_1832e1be0 - (_DAT_1832e1be0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1832e1be0;
  _DAT_1832e1c20 = (_DAT_1832e1c20 ^ uVar7) - 0xaed0ab4f ^ 0x51b469682cc04fa9;
  _DAT_1832e2118 = (_DAT_1832e2118 * 0x101040902790d6df ^ _DAT_1832e1c20) + uVar7;
  _DAT_1832e1f30 = _DAT_1832e2118 ^ _DAT_1832e1c20;
  _DAT_1832e1f18 = 0x512f54b1;
  uVar7 = (~_DAT_1832e2098 + 0x512f54b2) *
          ((_DAT_1832e2158 ^ 0x2af28f6b) + (ulonglong)((uint)_DAT_1832e2158 & 0x2af28f6b) * 2);
  uVar7 = (uVar7 | _DAT_1832e1dd8) + (uVar7 & _DAT_1832e1dd8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1d88 = func_0x00018bfa9e50((uVar7 | 0x7bdddbda) + (ulonglong)((uint)uVar7 & 0x7bdddbda))
  ;
  uVar7 = _DAT_1832e1d88 ^ 0xfffff8ff;
  _DAT_1832e1bf8 = _DAT_1832e2038 ^ uVar7 ^ 0x1000000ff;
  _DAT_1832e1c48 = (_DAT_1832e1d90 ^ uVar7) + 0x1000000ff ^ 0xb4c22cc2d4c3d80;
  _DAT_1832e1d90 = (_DAT_1832e1d90 * 0x21371efc983ec3c5 ^ _DAT_1832e1c48) + uVar7;
  _DAT_1832e1c48 = _DAT_1832e1d90 ^ _DAT_1832e1c48;
  _DAT_1832e1d78 = 0xff;
  uVar7 = (~_DAT_1832e1de0 + 0x5442542d) *
          ((_DAT_1832e1b48 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e1b48 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_1832e1d60) + (uVar7 & _DAT_1832e1d60);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e2080 = func_0x00018bfa9e50((uVar7 | 0xd0607709) + (ulonglong)((uint)uVar7 & 0xd0607709))
  ;
  uVar7 = (_DAT_1832e2080 & 0x3fffffffff) << 0x19 | _DAT_1832e2080 >> 0x27;
  _DAT_1832e1ba8 = (_DAT_1832e1ba8 ^ uVar7) - 0x5442542c ^ 0xa539ea979bbe4373;
  _DAT_1832e1fa8 = (_DAT_1832e1fa8 * -0x5be45d58f0c9ff1f ^ _DAT_1832e1ba8) + uVar7;
  _DAT_1832e1d20 = _DAT_1832e1fa8 ^ _DAT_1832e1ba8;
  _DAT_1832e1f70 = 0xabbdabd4;
  uVar7 = (_DAT_1832e1ee0 ^ _DAT_181d87f90) + _DAT_1832e1ca8 + 0x6bdddcda;
  uVar8 = (_DAT_1832e1ca8 ^ _UNK_181d87f98) + _DAT_1832e1ee0 + 0x11e42613;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e1ee0 ^ _DAT_181d87f90;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e1ca8 ^ _UNK_181d87f98;
  _DAT_1832e2278 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e1ee0 + 0x11e42613) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e1ca8 + 0x6bdddcda));
  uVar7 = _DAT_1832e2278 ^ 0xefffffff;
  _DAT_1832e1ec8 = _DAT_1832e2208 ^ uVar7 ^ 0x101e42612;
  _DAT_1832e22c0 = (_DAT_1832e22c0 ^ uVar7) + 0x101e42612 ^ 0x941d79a055ec1dbd;
  _DAT_1832e2150 = (_DAT_1832e2150 * 0x56ce51d3501b6a3f ^ _DAT_1832e22c0) + uVar7;
  _DAT_1832e1ce0 = _DAT_1832e2150 ^ _DAT_1832e22c0;
  _DAT_1832e21f8 = 0x1e42612;
  uVar7 = (~_DAT_1832e1bd0 + 0x11e42614) *
          ((_DAT_1832e2088 ^ 0x6bdddcda) + (ulonglong)((uint)_DAT_1832e2088 & 0x6bdddcda) * 2);
  uVar7 = (uVar7 | _DAT_1832e21c0) + (uVar7 & _DAT_1832e21c0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1bf0 = func_0x00018bfa9e50((uVar7 | 0x7a39fac9) + (ulonglong)((uint)uVar7 & 0x7a39fac9))
  ;
  uVar7 = (_DAT_1832e1bf0 ^ 0xffffffff) & 0x7fffffffffffffff ^ 0xefffffff;
  uVar8 = uVar7 >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar7;
  _DAT_1832e1c08 = (_DAT_1832e1c08 ^ uVar7) + 0xfe1bd9ec ^ 0x9460a53b3f77dce7;
  _DAT_1832e2138 = (_DAT_1832e2138 * -0x3d290eb055b350e7 ^ _DAT_1832e1c08) + uVar7;
  _DAT_1832e1cd0 = _DAT_1832e2138 ^ _DAT_1832e1c08;
  _DAT_1832e20c8 = 0xfe1bd9ec;
  uVar7 = (~_DAT_1832e20f8 + 0x11e42614) *
          ((_DAT_1832e1d08 ^ 0x6bdddcda) + (ulonglong)((uint)_DAT_1832e1d08 & 0x6bdddcda) * 2);
  uVar7 = (uVar7 | _DAT_1832e1d28) + (uVar7 & _DAT_1832e1d28);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1fd0 = func_0x00018bfa9e50((uVar7 | 0x7a39fac9) + (ulonglong)((uint)uVar7 & 0x7a39fac9))
  ;
  _DAT_1832e1ce8 =
       (_DAT_1832e1ce8 ^ _DAT_1832e1fd0 & 0xffffffffffff0000) + 0x1e42613 ^ 0x82964338d3459016;
  _DAT_1832e1dc0 =
       (_DAT_1832e1dc0 * -0x71f81b5de5dc8ae5 ^ _DAT_1832e1ce8) +
       (_DAT_1832e1fd0 & 0xffffffffffff0000);
  _DAT_1832e1fc8 = _DAT_1832e1dc0 ^ _DAT_1832e1ce8;
  _DAT_1832e1f60 = 0x1e42613;
  uVar7 = (_DAT_1832e1f70 ^ _DAT_181d87fa0) + _DAT_1832e20e8 + 0x7a39fac9;
  uVar8 = (_DAT_1832e20e8 ^ _UNK_181d87fa8) + _DAT_1832e1f70 + 0x3c84c26;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e1f70 ^ _DAT_181d87fa0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e20e8 ^ _UNK_181d87fa8;
  _DAT_1832e1b68 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e1f70 + 0x3c84c26) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e20e8 + 0x7a39fac9));
  _DAT_1832e20e0 = _DAT_1832e1ef8 ^ _DAT_1832e1b68 ^ 0x101e42612;
  _DAT_1832e1d08 = (_DAT_1832e1d08 ^ _DAT_1832e1b68) + 0x101e42612 ^ 0xb919947a40d86d8e;
  _DAT_1832e2108 = (_DAT_1832e2108 * -0x39c059fc688cb275 ^ _DAT_1832e1d08) + _DAT_1832e1b68;
  _DAT_1832e1b70 = _DAT_1832e2108 ^ _DAT_1832e1d08;
  _DAT_1832e20a0 = 0x1e42612;
  uVar7 = (_DAT_1832e1b60 ^ _DAT_181d87fb0) + _DAT_1832e1c38 + 0x85c60537;
  uVar8 = (_DAT_1832e1c38 ^ _UNK_181d87fb8) + _DAT_1832e1b60 + 0x1e42612;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e1b60 ^ _DAT_181d87fb0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e1c38 ^ _UNK_181d87fb8;
  _DAT_1832e2230 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e1b60 + 0x1e42612) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e1c38 + 0x85c60537));
  _DAT_1832e1ff8 = (_DAT_1832e2230 ^ 0x1e42612) << 0x1b | _DAT_1832e2230 >> 0x25;
  _DAT_1832e1d10 = _DAT_1832e1d10 ^ _DAT_1832e1ff8 ^ 0xb6b70adf94ca44dd;
  _DAT_1832e20a0 = (_DAT_1832e20a0 * 0x7224f96bb4b874e1 ^ _DAT_1832e1d10) + _DAT_1832e1ff8;
  _DAT_1832e1c78 = _DAT_1832e20a0 ^ _DAT_1832e1d10;
  _DAT_1832e22e8 = 0;
  uVar7 = ((_DAT_1832e22f0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1832e22f0 & 0x842223da) * 2) *
          -_DAT_1832e2018;
  uVar7 = (uVar7 | _DAT_1832e20b8) + (uVar7 & _DAT_1832e20b8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1ed0 = func_0x00018bfa9e50((uVar7 | 0x842223da) + (ulonglong)((uint)uVar7 & 0x842223da))
  ;
  uVar7 = _DAT_1832e1ed0 >> 1 | _DAT_1832e1ed0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1832e1ed0;
  uVar7 = uVar7 << 0x30 | uVar7 >> 0x10;
  _DAT_1832e2070 = _DAT_1832e1ec0 ^ uVar7 ^ 0xff;
  _DAT_1832e1e90 = (_DAT_1832e1e90 ^ uVar7) + 0xff ^ 0xebb989f6fa68afe8;
  _DAT_1832e1fd8 = (_DAT_1832e1c90 * -0x2bb8d9141539e00d ^ _DAT_1832e1e90) + uVar7 ^ _DAT_1832e1e90;
  _DAT_1832e1c90 = 0xff;
  _DAT_1832e21f0 = func_0x00018bfa9e50(_DAT_1832e1c50 + 0xffe0ff93daffddffU ^ 0x12);
  uVar7 = _DAT_1832e21f0 & 0xfffffffffffff000 ^ 0xffffffff;
  _DAT_1832e1f38 = (_DAT_1832e1f38 ^ uVar7) + 0x10000000 ^ 0x2a8f6b78e93ea7c;
  _DAT_1832e1c58 = (_DAT_1832e1c58 * 0x4763b622bed63ab7 ^ _DAT_1832e1f38) + uVar7;
  _DAT_1832e20d0 = _DAT_1832e1c58 ^ _DAT_1832e1f38;
  _DAT_1832e1bc0 = 0x10000000;
  uVar7 = (_DAT_1832e1b20 ^ _DAT_181d87fc0) + _DAT_1832e2030 + 0x6bdddcda;
  uVar8 = (_DAT_1832e2030 ^ _UNK_181d87fc8) + _DAT_1832e1b20 + 0x10000000;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832e1b20 ^ _DAT_181d87fc0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832e2030 ^ _UNK_181d87fc8;
  _DAT_1832e2230 =
       func_0x00018bfa9e50((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832e1b20 + 0x10000000) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832e2030 + 0x6bdddcda));
  _DAT_1832e1e20 = _DAT_1832e1e20 ^ _DAT_1832e2230 ^ 0x6d32fb8f06c3ccbc;
  _DAT_1832e1cb8 = (_DAT_1832e1cb8 * 0x49dc9fc3c4d633c3 ^ _DAT_1832e1e20) + _DAT_1832e2230;
  _DAT_1832e1be8 = _DAT_1832e1cb8 ^ _DAT_1832e1e20;
  _DAT_1832e2170 = 0;
  uVar7 = (~_DAT_1832e2238 + 0x2d966cef) *
          ((_DAT_1832e1ed8 ^ 0xa9b44fcb) + (ulonglong)((uint)_DAT_1832e1ed8 & 0xa9b44fcb) * 2);
  uVar7 = (uVar7 | _DAT_1832e2110) + (uVar7 & _DAT_1832e2110);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832e1b28 = func_0x00018bfa9e50((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_1832e2080 = _DAT_1832e2080 ^ _DAT_1832e1b28 ^ 0x81e3aafacd7c1aa ^ 0x1b559b985711b079;
  _DAT_1832e2198 =
       (_DAT_1832e2198 * 0x658b4c381758e683 ^ _DAT_1832e2080) + (_DAT_1832e1b28 ^ 0x81e3aafacd7c1aa)
  ;
  _DAT_1832e21f8 = _DAT_1832e2198 ^ _DAT_1832e2080;
  auVar3._8_8_ = _UNK_180122a38;
  auVar3._0_8_ = (ulonglong)(uint)(int)cVar1 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_181d87fd0,_DAT_1800170c0);
  _DAT_1832e2160 = 0;
  uVar8 = auVar4._8_8_ + auVar4._0_8_;
  uVar7 = uVar8 + _DAT_1832e21b0;
  if (auVar4._4_4_ < 0) {
    uVar7 = _DAT_1832e1d68 ^ uVar8;
  }
  _DAT_1832e1d40 = func_0x00018bfa9e50(SUB161(auVar3 ^ _DAT_181d87fd0,5) ^ uVar7);
  _DAT_1832e1b00 = (ulonglong)(uint)(int)cVar1 & 0xff;
  _DAT_1832e1ea8 = (_DAT_1832e1ea8 ^ _DAT_1832e1d40 ^ 0xff) + _DAT_1832e1b00 ^ 0x6d7f7815ad5e37e2;
  _DAT_1832e2130 = (_DAT_1832e2130 * 0x14add97040787d6b ^ _DAT_1832e1ea8) + (_DAT_1832e1d40 ^ 0xff);
  _DAT_1832e21f0 = _DAT_1832e2130 ^ _DAT_1832e1ea8;
  uVar8 = _DAT_1832e1b00 << 0x30;
  uVar7 = in_stack_00000050 ^ 0x84222325 ^ _DAT_1832e1ef8;
  lVar2 = (in_stack_00000050 ^ 0x84222325) + _DAT_1832e20c0;
  uVar5 = uVar7 + lVar2;
  uVar6 = (uVar8 ^ _DAT_1832e20c0) + _DAT_1832e1ef8 + uVar8;
  uVar7 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar7;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar8 ^ _DAT_1832e20c0;
  _DAT_1832e20d8 =
       func_0x00018bfa9e50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e1ef8 + uVar8) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar2);
  _DAT_1832e1bc0 = uVar8 | in_stack_00000050;
  in_stack_00000050 = in_stack_00000050 ^ _DAT_1832e20d8 ^ _DAT_1832e1bc0;
  _DAT_1832e1ca0 = (_DAT_1832e1ca0 ^ in_stack_00000050) + _DAT_1832e1bc0 ^ 0xeabbd5b2d8e2f826;
  _DAT_1832e22d0 = (_DAT_1832e22d0 * -0x4780b0fa95aadcad ^ _DAT_1832e1ca0) + in_stack_00000050;
  _DAT_1832e1c68 = _DAT_1832e22d0 ^ _DAT_1832e1ca0;
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xbf9f098 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bf9f098(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 unaff_XMM10_Qb;
  ulonglong in_stack_00000058;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  _DAT_1832e21b0 = func_0x00018bfa9e50(_DAT_1832e2098 + 0x5e00208fffc9ffU ^ 0x6b);
  uVar5 = _DAT_1832e21b0 - (_DAT_1832e21b0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1832e21b0;
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
  _DAT_1832e22c8 = (_DAT_1832e22c8 ^ uVar4) + 0xa5689d55 ^ 0xa9fb120d5af87005;
  _DAT_1832e1d28 = (_DAT_1832e1d28 * 0x29494370749c63b1 ^ _DAT_1832e22c8) + uVar4;
  _DAT_1832e1ba8 = _DAT_1832e1d28 ^ _DAT_1832e22c8;
  _DAT_1832e1f78 = 0xa5689d55;
  uVar5 = (~_DAT_1832e1fa8 + 0x51616335) *
          ((_DAT_1832e2170 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e2170 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1832e22f0) + (uVar5 & _DAT_1832e22f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e1d20 = func_0x00018bfa9e50((uVar5 | 0xd5434011) + (ulonglong)((uint)uVar5 & 0xd5434011))
  ;
  _DAT_1832e2200 = (_DAT_1832e2200 ^ _DAT_1832e1e40) - 0x51616334 ^ 0xddc3652d2976ed82;
  _DAT_1832e20c0 = (_DAT_1832e20c0 * -0x7b63e282cbd7717f ^ _DAT_1832e2200) + _DAT_1832e1e40;
  _DAT_1832e1e70 = _DAT_1832e20c0 ^ _DAT_1832e2200;
  _DAT_1832e1f50 = 0xae9e9ccc;
  _DAT_1832e1ef8 = func_0x00018bfa9e50(_DAT_1832e1f78 + 0xffc000caeeff83ffU ^ 0xea);
  uVar4 = _DAT_1832e1ef8 * 0xc6f56bb8b694471;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ uVar4;
  _DAT_1832e21c0 = _DAT_1832e22b0 ^ uVar4 ^ 0x52606334;
  _DAT_1832e1b78 = (_DAT_1832e1b78 ^ uVar4) + 0x52606334 ^ 0x429f9fbbecc20146;
  _DAT_1832e1f98 = (_DAT_1832e1f98 * -0x3aa1829b0fe040bf ^ _DAT_1832e1b78) + uVar4;
  _DAT_1832e20f0 = _DAT_1832e1f98 ^ _DAT_1832e1b78;
  _DAT_1832e2008 = 0x52606334;
  uVar5 = (_DAT_1832e21c0 ^ _DAT_181d88380) + _DAT_1832e2258 + 0x84dd2325;
  uVar4 = (_DAT_1832e2258 ^ _UNK_181d88388) + _DAT_1832e21c0 + 0xd371fe27;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832e21c0 ^ _DAT_181d88380;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e2258 ^ _UNK_181d88388;
  _DAT_1832e1ee0 =
       func_0x00018bfa9e50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832e21c0 + 0xd371fe27) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e2258 + 0x84dd2325));
  uVar5 = _DAT_1832e1ee0 << 0x19 | _DAT_1832e1ee0 >> 0x27;
  _DAT_1832e1e70 = _DAT_1832e1bd8 ^ uVar5 ^ 0xd470fe27;
  _DAT_1832e1f18 = (_DAT_1832e1f18 ^ uVar5) + 0xd470fe27 ^ 0xa67c52febb1ab403;
  _DAT_1832e1d90 = (_DAT_1832e1d90 * -0x7b801508c23ded35 ^ _DAT_1832e1f18) + uVar5;
  _DAT_1832e1ca0 = _DAT_1832e1d90 ^ _DAT_1832e1f18;
  _DAT_1832e1cf0 = 0xd470fe27;
  uVar5 = (~_DAT_1832e1c90 + 0x2c8e01da) *
          ((_DAT_1832e1e58 ^ 0x5052dd02) + (ulonglong)((uint)_DAT_1832e1e58 & 0x5052dd02) * 2);
  uVar5 = (uVar5 | _DAT_1832e2100) + (uVar5 & _DAT_1832e2100);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e2188 = func_0x00018bfa9e50((uVar5 | 0x7cdcdcdb) + (ulonglong)((uint)uVar5 & 0x7cdcdcdb))
  ;
  uVar5 = _DAT_1832e2188 - (_DAT_1832e2188 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832e2188;
  _DAT_1832e1e50 = _DAT_1832e1ff0 ^ uVar5 ^ 0x100ff0000;
  _DAT_1832e2228 = (_DAT_1832e2228 ^ uVar5) + 0x100ff0000 ^ 0xa03d634f4ebd8b87;
  _DAT_1832e2248 = (_DAT_1832e2248 * 0x688d402f94001e6b ^ _DAT_1832e2228) + uVar5;
  _DAT_1832e1db0 = _DAT_1832e2248 ^ _DAT_1832e2228;
  _DAT_1832e1e30 = 0xff0000;
  uVar5 = (~_DAT_1832e1fd0 + 0xa5689d56) *
          ((_DAT_1832e1ff0 ^ 0xbf5dcc9e) + (ulonglong)((uint)_DAT_1832e1ff0 & 0xbf5dcc9e) * 2);
  uVar5 = (uVar5 | _DAT_1832e2028) + (uVar5 & _DAT_1832e2028);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e20b0 = func_0x00018bfa9e50((uVar5 | 0x1a3551cb) + (ulonglong)((uint)uVar5 & 0x1a3551cb))
  ;
  _DAT_1832e2038 = _DAT_1832e1ca8 ^ _DAT_1832e20b0 ^ 0xe0e88d10;
  _DAT_1832e1ce0 = (_DAT_1832e1ce0 ^ _DAT_1832e20b0) + 0xe0e88d10 ^ 0xcacf7616eb09440d;
  _DAT_1832e1e18 = (_DAT_1832e1e18 * -0x44aadbfec23680c3 ^ _DAT_1832e1ce0) + _DAT_1832e20b0;
  _DAT_1832e1c28 = _DAT_1832e1e18 ^ _DAT_1832e1ce0;
  _DAT_1832e1e90 = 0xe0e88d10;
  uVar5 = (_DAT_1832e1d70 ^ _DAT_181d88390) + _DAT_1832e1ee0 + 0xbf5dcc9e;
  uVar4 = (_DAT_1832e1ee0 ^ _UNK_181d88398) + _DAT_1832e1d70 + 0xa5689d55;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832e1d70 ^ _DAT_181d88390;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e1ee0 ^ _UNK_181d88398;
  _DAT_1832e1d68 =
       func_0x00018bfa9e50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832e1d70 + 0xa5689d55) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e1ee0 + 0xbf5dcc9e));
  uVar2 = ~(uint)_DAT_1832e1d68 & 0x3b7fefbb;
  uVar5 = (ulonglong)(uVar2 >> 4) | (ulonglong)uVar2 << 0x3c;
  _DAT_1832e2210 = (_DAT_1832e2210 ^ uVar5) + 0x21688d11 ^ 0xf7ed5bcc122868e5;
  _DAT_1832e1c38 = (_DAT_1832e1c38 * 0x44ab42633fc05043 ^ _DAT_1832e2210) + uVar5;
  _DAT_1832e1fd8 = _DAT_1832e1c38 ^ _DAT_1832e2210;
  _DAT_1832e1bd8 = 0x21688d11;
  _DAT_1832e1b58 = func_0x00018bfa9e50(_DAT_1832e1bc0 + 0xffc8ffd8d6ff63ff ^ 0x60);
  uVar5 = _DAT_1832e1b58 & 0x7fffffffffffffff;
  _DAT_1832e1f50 = _DAT_1832e20c0 ^ uVar5 ^ 0xe0e88d10;
  _DAT_1832e1da8 = (_DAT_1832e1da8 ^ uVar5) + 0xe0e88d10 ^ 0x266301944960fc8d;
  _DAT_1832e2078 = (_DAT_1832e2078 * 0x340debef4fdf137b ^ _DAT_1832e1da8) + uVar5;
  _DAT_1832e2278 = _DAT_1832e2078 ^ _DAT_1832e1da8;
  _DAT_1832e1e28 = 0xe0e88d10;
  uVar5 = (~_DAT_1832e1cb8 + 0xe0e88d11) *
          ((_DAT_1832e1fe0 ^ 0x64caae35) + (ulonglong)((uint)_DAT_1832e1fe0 & 0x64caae35) * 2);
  uVar5 = (uVar5 | _DAT_1832e1d98) + (uVar5 & _DAT_1832e1d98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e1d48 = func_0x00018bfa9e50((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1832e2210 = _DAT_1832e1d48 & 0xffffffffffe00000;
  _DAT_1832e1ce0 = _DAT_1832e1ce0 ^ _DAT_1832e2210 ^ 0x7139c1489a736c9f;
  _DAT_1832e1bc0 = (_DAT_1832e1bc0 * -0x53c69ce9a56de189 ^ _DAT_1832e1ce0) + _DAT_1832e2210;
  _DAT_1832e22b8 = _DAT_1832e1bc0 ^ _DAT_1832e1ce0;
  _DAT_1832e1bb0 = 0;
  uVar5 = (_DAT_1832e1c58 ^ _DAT_181d883a0) + _DAT_1832e2168 + 0xbf5dcc9e;
  uVar4 = (_DAT_1832e2168 ^ _UNK_181d883a8) + _DAT_1832e1c58 + 0xc4801044;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832e1c58 ^ _DAT_181d883a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832e2168 ^ _UNK_181d883a8;
  _DAT_1832e2290 =
       func_0x00018bfa9e50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832e1c58 + 0xc4801044) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e2168 + 0xbf5dcc9e));
  _DAT_1832e2238 = _DAT_1832e2238 ^ _DAT_1832e2290 * 0x670054c96480d2ad ^ 0xf3c0de84d4f0fb53;
  _DAT_1832e1d88 =
       (_DAT_1832e1d88 * 0x634adcc036c34919 ^ _DAT_1832e2238) + _DAT_1832e2290 * 0x670054c96480d2ad;
  _DAT_1832e2280 = _DAT_1832e1d88 ^ _DAT_1832e2238;
  _DAT_1832e1e60 = 0;
  _DAT_1832e22b0 = func_0x00018bfa9e50(_DAT_1832e1e48 ^ 0x21008422ffe1ca);
  uVar5 = (_DAT_1832e22b0 ^ 0x3957e7aa) & 0x7fffffffffffffff;
  _DAT_1832e1cf8 = _DAT_1832e1cf8 ^ uVar5 ^ 0xd42a38d8347e01db;
  _DAT_1832e1b08 = (_DAT_1832e1b08 * 0x6407f3f504e08ff7 ^ _DAT_1832e1cf8) + uVar5;
  _DAT_1832e1e98 = _DAT_1832e1b08 ^ _DAT_1832e1cf8;
  _DAT_1832e2128 = 0;
  _DAT_1832e1ca0 = func_0x00018bfa9e50(_DAT_1832e1b00 ^ 0x20ff7bdaffc47a);
  uVar5 = ~(ulonglong)~(uint)_DAT_1832e1ca0 & (ulonglong)DAT_180416b10 & 0x7fffffff;
  _DAT_1832e1cd0 = _DAT_1832e1c70 ^ uVar5 ^ 0xff0000;
  _DAT_1832e1ff0 = (_DAT_1832e1ff0 ^ uVar5) + 0xff0000 ^ 0xa14cfe9010bc621d;
  _DAT_1832e1e40 = (_DAT_1832e1e40 * -0x66c8bad8942e9753 ^ _DAT_1832e1ff0) + uVar5;
  _DAT_1832e1e58 = _DAT_1832e1e40 ^ _DAT_1832e1ff0;
  auVar7._8_8_ = unaff_XMM10_Qb;
  auVar7._0_8_ = (ulonglong)(uint)(param_1 << 0x10) ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_181d883b0,_DAT_1800170c0);
  _DAT_1832e2268 = 0xff0000;
  uVar4 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar4 + _DAT_1832e1de8;
  if (auVar8._4_4_ < 0) {
    uVar5 = _DAT_1832e1d38 ^ uVar4;
  }
  _DAT_1832e1ca0 = func_0x00018bfa9e50(SUB161(auVar7 ^ _DAT_181d883b0,5) ^ uVar5);
  uVar5 = _DAT_1832e1ca0 * -0x79251971a46ae0f7 << 0x27 |
          _DAT_1832e1ca0 * -0x79251971a46ae0f7 >> 0x19;
  uVar6 = (ulonglong)(param_1 << 0x10 & 0xff0000);
  _DAT_1832e1b28 = (_DAT_1832e1b28 ^ uVar5) + uVar6 ^ 0xa58a815941a9cb7a;
  _DAT_1832e1e38 = (_DAT_1832e1e38 * 0xd6870dc026aedbf ^ _DAT_1832e1b28) + uVar5;
  _DAT_1832e22a8 = _DAT_1832e1e38 ^ _DAT_1832e1b28;
  uVar4 = in_stack_00000058 ^ 0x84222325;
  uVar5 = ((_DAT_1832e1d40 ^ uVar4) + (uVar4 & _DAT_1832e1d40) * 2) * (uVar6 - _DAT_1832e2128);
  uVar5 = (uVar5 | _DAT_1832e1f80) + (uVar5 & _DAT_1832e1f80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832e2150 = uVar6;
  _DAT_1832e1f10 = func_0x00018bfa9e50((uVar4 ^ uVar6 | uVar5) + (uVar5 & (uVar4 ^ uVar6)));
  _DAT_1832e1fd8 = in_stack_00000058 | uVar6;
  _DAT_1832e2218 = (_DAT_1832e2218 ^ _DAT_1832e1f10) + _DAT_1832e1fd8 ^ 0xf4e94603c351a909;
  _DAT_1832e2280 = (_DAT_1832e2280 * 0xc31138406806b19 ^ _DAT_1832e2218) + _DAT_1832e1f10;
  _DAT_1832e1d18 = _DAT_1832e2280 ^ _DAT_1832e2218;
  iVar3 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar3 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbfa113f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfa113f(uint param_1)

{
  undefined8 *unaff_RBX;
  longlong *unaff_RSI;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_XMM9_Qb;
  int iStack0000000000000058;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar1 = (~_DAT_1832e1c40 + 0xb9ce3772) *
          ((_DAT_1832e2078 ^ 0x75e03d26) + (ulonglong)((uint)_DAT_1832e2078 & 0x75e03d26) * 2);
  uVar1 = (uVar1 | _DAT_1832e2248) + (uVar1 & _DAT_1832e2248);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e21b8 = func_0x00018bfa9e50((uVar1 | 0xcc2e0a57) + (ulonglong)((uint)uVar1 & 0xcc2e0a57))
  ;
  uVar1 = _DAT_1832e21b8 - (_DAT_1832e21b8 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1832e21b8;
  _DAT_1832e1d98 = (_DAT_1832e1d98 ^ uVar1) + 0xf9ce3f73 ^ 0xbb1d92f1ea73df49;
  _DAT_1832e1ca0 = (_DAT_1832e1ca0 * -0x5e72ea803ce61b6f ^ _DAT_1832e1d98) + uVar1;
  _DAT_1832e21c8 = _DAT_1832e1ca0 ^ _DAT_1832e1d98;
  _DAT_1832e1dd8 = 0xf9ce3f73;
  uVar1 = (~_DAT_1832e1b08 + 0xcece6150) *
          ((_DAT_1832e1fa8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e1fa8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832e1f50) + (uVar1 & _DAT_1832e1f50);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1c70 = func_0x00018bfa9e50((uVar1 | 0x4aec426a) + (ulonglong)((uint)uVar1 & 0x4aec426a))
  ;
  _DAT_1832e2210 = _DAT_1832e1bb0 * 0x6e1c36dfb639e4f5;
  _DAT_1832e1d68 = _DAT_1832e1d68 - 0xcece614f ^ 0x291722d4fdde3870;
  _DAT_1832e1bb0 = _DAT_1832e2210 ^ _DAT_1832e1d68;
  _DAT_1832e1df0 = 0x31319eb1;
  uVar1 = (_DAT_1832e2090 ^ _DAT_181d88410) + _DAT_1832e1c78 + 0x4aec416b;
  uVar6 = (_DAT_1832e1c78 ^ _UNK_181d88418) + _DAT_1832e2090 + 0x31319eb1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e2090 ^ _DAT_181d88410;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832e1c78 ^ _UNK_181d88418;
  _DAT_1832e20e8 =
       func_0x00018bfa9e50((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832e2090 + 0x31319eb1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e1c78 + 0x4aec416b));
  uVar1 = _DAT_1832e20e8 ^ 0x27bd9684d28279a0;
  _DAT_1832e2248 = _DAT_1832e1ce8 ^ uVar1 ^ 0x1000000ff;
  _DAT_1832e1d30 = (_DAT_1832e1d30 ^ uVar1) + 0x1000000ff ^ 0x77e128bac90ccc29;
  _DAT_1832e1e18 = (_DAT_1832e1e18 * -0x7b21e4c75bec9993 ^ _DAT_1832e1d30) + uVar1;
  _DAT_1832e1fc8 = _DAT_1832e1e18 ^ _DAT_1832e1d30;
  _DAT_1832e1fb0 = 0xff;
  uVar1 = (~_DAT_1832e22a0 + 0x65c761bd) *
          ((_DAT_1832e1f38 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832e1f38 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832e1c20) + (uVar1 & _DAT_1832e1c20);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1e38 = func_0x00018bfa9e50((uVar1 | 0xe1e54299) + (ulonglong)((uint)uVar1 & 0xe1e54299))
  ;
  uVar1 = _DAT_1832e1e38 << 0x2b | _DAT_1832e1e38 >> 0x15;
  _DAT_1832e1df8 = (_DAT_1832e1df8 ^ uVar1) - 0x65c761bc ^ 0x909793ff8b6e3a29;
  _DAT_1832e20f0 = (_DAT_1832e20f0 * 0x3cbdf5e7389b6671 ^ _DAT_1832e1df8) + uVar1;
  _DAT_1832e1e58 = _DAT_1832e20f0 ^ _DAT_1832e1df8;
  _DAT_1832e2270 = 0x9a389e44;
  _DAT_1832e2260 = func_0x00018bfa9e50(_DAT_1832e1c10 ^ 0x41ffe0a5ff9cb0);
  uVar1 = _DAT_1832e2260 ^ 0xff;
  _DAT_1832e1e18 = _DAT_1832e2258 ^ uVar1 ^ 0x65c762bb;
  _DAT_1832e1cc8 = (_DAT_1832e1cc8 ^ uVar1) + 0x65c762bb ^ 0x5ff979fb2debf6ac;
  _DAT_1832e1c10 = (_DAT_1832e1c10 * -0x2a24a9355ae2f287 ^ _DAT_1832e1cc8) + uVar1;
  _DAT_1832e1f50 = _DAT_1832e1c10 ^ _DAT_1832e1cc8;
  _DAT_1832e2258 = 0x65c762bb;
  _DAT_1832e1df8 = func_0x00018bfa9e50(_DAT_1832e21a0 + 0x5e00421bff79ff ^ 0x22);
  uVar1 = _DAT_1832e1df8 - (_DAT_1832e1df8 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832e1df8) << 0x1b | _DAT_1832e1df8 >> 0x25;
  _DAT_1832e1dc8 = (_DAT_1832e1dc8 ^ uVar1) - 0x46acc101 ^ 0x2e99049c0ec7848e;
  _DAT_1832e22d0 = (_DAT_1832e22d0 * 0x6321e818ce79224f ^ _DAT_1832e1dc8) + uVar1;
  _DAT_1832e2220 = _DAT_1832e22d0 ^ _DAT_1832e1dc8;
  _DAT_1832e1b48 = 0xb9533eff;
  _DAT_1832e1fa0 = func_0x00018bfa9e50(_DAT_1832e1be8 + 0x1dffc2b8ff81ff ^ 0xd3);
  uVar1 = (_DAT_1832e1fa0 ^ 0x46acc1ff) << 10 | _DAT_1832e1fa0 >> 0x36;
  _DAT_1832e2198 = _DAT_1832e21a0 ^ uVar1 ^ 0x46acc200;
  _DAT_1832e2278 = (_DAT_1832e2278 ^ uVar1) + 0x46acc200 ^ 0xe420b66ad892ad89;
  _DAT_1832e1dd0 = (_DAT_1832e1dd0 * -0x842fbf55be52b43 ^ _DAT_1832e2278) + uVar1;
  _DAT_1832e2008 = _DAT_1832e1dd0 ^ _DAT_1832e2278;
  _DAT_1832e1f78 = 0x46acc200;
  _DAT_1832e1d98 = func_0x00018bfa9e50(_DAT_1832e1b68 + 0xff2effe8da00daffU ^ 0x68);
  uVar1 = _DAT_1832e1d98 >> 1 | _DAT_1832e1d98;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (ulonglong)
          (~((uint)_DAT_1832e1d98 ^
            (0x40 - (uint)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x80) & 0x46acc200) * 0x7235c29ce25bd893;
  _DAT_1832e1e20 = _DAT_1832e2038 ^ uVar1 ^ 0x1000000ff;
  _DAT_1832e1b30 = (_DAT_1832e1b30 ^ uVar1) + 0x1000000ff ^ 0x8c116172ab362281;
  _DAT_1832e1d38 = (_DAT_1832e1d38 * -0xb2f066ac0f0127d ^ _DAT_1832e1b30) + uVar1;
  _DAT_1832e1cf0 = _DAT_1832e1d38 ^ _DAT_1832e1b30;
  _DAT_1832e1ea8 = 0xff;
  uVar1 = (~_DAT_1832e1fb0 + 0x97d41fbe) *
          ((_DAT_1832e1d98 ^ 0x7dec1c56) + (ulonglong)((uint)_DAT_1832e1d98 & 0x7dec1c56) * 2);
  uVar1 = (uVar1 | _DAT_1832e20d8) + (uVar1 & _DAT_1832e20d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1ed8 = func_0x00018bfa9e50((uVar1 | 0xea3803eb) + (ulonglong)((uint)uVar1 & 0xea3803eb))
  ;
  uVar1 = (_DAT_1832e1ed8 ^ 0xffde3fff) & 0x7ffffffffff;
  _DAT_1832e1cf0 = _DAT_1832e1e68 ^ uVar1 ^ 0x191a25f30;
  _DAT_1832e1e70 = (_DAT_1832e1e70 ^ uVar1) + 0x191a25f30 ^ 0xa373b6ac7065289a;
  _DAT_1832e1e90 = (_DAT_1832e1e90 * 0x263252c0afb08107 ^ _DAT_1832e1e70) + uVar1;
  _DAT_1832e1d40 = _DAT_1832e1e90 ^ _DAT_1832e1e70;
  _DAT_1832e2100 = 0x91a25f30;
  _DAT_1832e22c0 = func_0x00018bfa9e50(_DAT_1832e1f38 ^ 0xfffeffd916ffd76c);
  _DAT_1832e1f68 = (_DAT_1832e1f68 ^ _DAT_1832e22c0) + 0x6e1a20ce ^ 0x37b9a0d9b9726e76;
  _DAT_1832e1d70 = (_DAT_1832e1d70 * -0x71482daa0e2514bb ^ _DAT_1832e1f68) + _DAT_1832e22c0;
  _DAT_1832e1be8 = _DAT_1832e1d70 ^ _DAT_1832e1f68;
  _DAT_1832e22d0 = 0x6e1a20ce;
  uVar1 = (~_DAT_1832e1e10 + 0x97d41fbe) *
          ((_DAT_1832e1fc0 ^ 0x7dec1c56) + (ulonglong)((uint)_DAT_1832e1fc0 & 0x7dec1c56) * 2);
  uVar1 = (uVar1 | _DAT_1832e2058) + (uVar1 & _DAT_1832e2058);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1fb8 = func_0x00018bfa9e50((uVar1 | 0xea3803eb) + (ulonglong)((uint)uVar1 & 0xea3803eb))
  ;
  uVar1 = (_DAT_1832e1fb8 & 0xffffffff) * (_DAT_181d88420 & 0xffffffff) +
          ((ulonglong)_DAT_181d88430 * (_DAT_1832e1fb8 & 0xffffffff) +
           ((_DAT_1832e1fb8 & 0xffffffffffff) >> 0x20) * (_DAT_181d88420 & 0xffffffff) << 0x20) &
          0x7fffffffffffffff;
  _DAT_1832e1f10 = (_DAT_1832e1f10 ^ uVar1) + 0x91c41f31 ^ 0xc11708c4c1a0322e;
  _DAT_1832e22a8 = (_DAT_1832e22a8 * -0x2372fd653f29c34d ^ _DAT_1832e1f10) + uVar1;
  _DAT_1832e21e8 = _DAT_1832e22a8 ^ _DAT_1832e1f10;
  _DAT_1832e1e88 = 0x91c41f31;
  uVar1 = (~_DAT_1832e2088 + 0x23883e63) *
          ((_DAT_1832e1d18 ^ 0xea3803eb) + (ulonglong)((uint)_DAT_1832e1d18 & 0xea3803eb) * 2);
  uVar1 = (uVar1 | _DAT_1832e20b8) + (uVar1 & _DAT_1832e20b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e2048 = func_0x00018bfa9e50((uVar1 | 0xc9b03d89) + (ulonglong)((uint)uVar1 & 0xc9b03d89))
  ;
  uVar1 = _DAT_1832e2048 << 0x26 | _DAT_1832e2048 >> 0x1a;
  _DAT_1832e1b80 = _DAT_1832e1d08 ^ uVar1 ^ 0x91a25f30;
  _DAT_1832e21b8 = (_DAT_1832e21b8 ^ uVar1) + 0x91a25f30 ^ 0xff876211a50af5d9;
  _DAT_1832e1ba8 = (_DAT_1832e1ba8 * -0xb5ec11f9db5f65 ^ _DAT_1832e21b8) + uVar1;
  _DAT_1832e2010 = _DAT_1832e1ba8 ^ _DAT_1832e21b8;
  _DAT_1832e2230 = 0x91a25f30;
  _DAT_1832e2280 = func_0x00018bfa9e50(_DAT_1832e1fb8 ^ 0x22ff7c22ffdd45);
  _DAT_1832e1e30 = (ulonglong)(~(uint)_DAT_1832e2280 & 0x91a25f30);
  _DAT_1832e21a0 = _DAT_1832e21a0 ^ _DAT_1832e1e30 ^ 0x2db618eca3c37f53;
  _DAT_1832e1f78 = (_DAT_1832e1f78 * 0x777594b09b999ce5 ^ _DAT_1832e21a0) + _DAT_1832e1e30;
  _DAT_1832e2170 = _DAT_1832e1f78 ^ _DAT_1832e21a0;
  _DAT_1832e1cf8 = 0;
  uVar1 = (~_DAT_1832e1cb0 + 0x631c08d) *
          ((_DAT_1832e2160 ^ 0x7dec1c56) + (ulonglong)((uint)_DAT_1832e2160 & 0x7dec1c56) * 2);
  uVar1 = (uVar1 | _DAT_1832e2050) + (uVar1 & _DAT_1832e2050);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832e1f30 = func_0x00018bfa9e50((uVar1 | 0x7bdddcda) + (ulonglong)((uint)uVar1 & 0x7bdddcda))
  ;
  uVar1 = _DAT_1832e1f30 >> 1 | _DAT_1832e1f30;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           _DAT_1832e1f30 ^ 0xf9ce3f73) & 0x7fffffffffffffff;
  _DAT_1832e1d18 = _DAT_1832e1d18 ^ uVar1 ^ 0xf56f5a8466ccbae4;
  _DAT_1832e22e0 = (_DAT_1832e22e0 * -0x59d7db7ce0c64f93 ^ _DAT_1832e1d18) + uVar1;
  _DAT_1832e1d70 = _DAT_1832e22e0 ^ _DAT_1832e1d18;
  _DAT_1832e1d58 = 0;
  uVar1 = (_DAT_1832e1de0 ^ 0x842223da) + _DAT_1832e1b38 + 0x842223da;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e1de0 ^ 0x842223da;
  uVar6 = ((_DAT_1832e1b38 + _DAT_1832e1de0) * 0x2000 | _DAT_1832e1b38 + _DAT_1832e1de0 >> 0x33) ^
          _DAT_1832e1b38;
  _DAT_1832e1d70 =
       func_0x00018bfa9e50((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1832e1de0 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e1b38 + 0x842223da));
  uVar1 = _DAT_1832e1d70 * 0x4ccdd2c69e18e705 ^ 0xff;
  _DAT_1832e1d40 = _DAT_1832e1c60 ^ uVar1 ^ 0xff;
  _DAT_1832e2220 = (_DAT_1832e2220 ^ uVar1) + 0xff ^ 0x4feb46b49f6e2025;
  _DAT_1832e1e18 = (_DAT_1832e1e18 * 0x76759d6ccdbfe31d ^ _DAT_1832e2220) + uVar1;
  _DAT_1832e1d30 = _DAT_1832e1e18 ^ _DAT_1832e2220;
  _DAT_1832e1dc8 = 0xff;
  _DAT_1832e2160 = func_0x00018bfa9e50(_DAT_1832e1c90 ^ 0x23008424ffe166);
  uVar1 = (_DAT_1832e2160 << 0x21 | _DAT_1832e2160 >> 0x1f) ^ 0xf1c21e03;
  uVar6 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar1 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar1;
  _DAT_1832e1ec0 = _DAT_1832e1ec0 ^ uVar1 ^ 0x4db4d051d787f37f;
  _DAT_1832e2018 = (_DAT_1832e2018 * 0xb6b54f2d1e320e7 ^ _DAT_1832e1ec0) + uVar1;
  _DAT_1832e1d08 = _DAT_1832e2018 ^ _DAT_1832e1ec0;
  _DAT_1832e1be0 = 0;
  uVar1 = (_DAT_1832e20d8 ^ 0x842223da) + _DAT_1832e1e70 + 0x842223da;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832e20d8 ^ 0x842223da;
  uVar6 = ((_DAT_1832e1e70 + _DAT_1832e20d8) * 0x2000 | _DAT_1832e1e70 + _DAT_1832e20d8 >> 0x33) ^
          _DAT_1832e1e70;
  _DAT_1832e1b58 =
       func_0x00018bfa9e50((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1832e20d8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832e1e70 + 0x842223da));
  _DAT_1832e2228 = _DAT_1832e22e0 ^ _DAT_1832e1b58 ^ 0xff;
  _DAT_1832e20a8 = (_DAT_1832e20a8 ^ _DAT_1832e1b58) + 0xff ^ 0x32798b3cdc1ef098;
  _DAT_1832e2138 = (_DAT_1832e2138 * 0x4a2a1dcd749781a9 ^ _DAT_1832e20a8) + _DAT_1832e1b58;
  _DAT_1832e2140 = _DAT_1832e2138 ^ _DAT_1832e20a8;
  auVar3._8_8_ = unaff_XMM9_Qb;
  auVar3._0_8_ = (ulonglong)param_1 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_181d88440,_DAT_1800170c0);
  _DAT_1832e1ca0 = 0xff;
  uVar6 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar6 + _DAT_1832e1ef0;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_1832e1b80 ^ uVar6;
  }
  _DAT_1832e2048 = func_0x00018bfa9e50(SUB161(auVar3 ^ _DAT_181d88440,5) ^ uVar1);
  uVar1 = _DAT_1832e2048 ^ 0xff;
  uVar6 = uVar1 >> 1 | uVar1;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar1 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar1) * -0x6f3f48afcdcea497;
  uVar6 = (ulonglong)param_1 & 0xff;
  _DAT_1832e1e98 = (_DAT_1832e1e98 ^ uVar1) + uVar6 ^ 0x77c7d12073b400e1;
  _DAT_1832e1e58 = (_DAT_1832e1e58 * -0x36e46173e7bfd9e3 ^ _DAT_1832e1e98) + uVar1;
  _DAT_1832e2008 = _DAT_1832e1e58 ^ _DAT_1832e1e98;
  uVar1 = _iStack0000000000000058 ^ 0x84222325 ^ _DAT_1832e1bf8;
  lVar2 = (_iStack0000000000000058 ^ 0x84222325) + _DAT_1832e1b20;
  uVar5 = uVar1 + lVar2;
  uVar7 = (uVar6 ^ _DAT_1832e1b20) + _DAT_1832e1bf8 + uVar6;
  uVar1 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar1;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6 ^ _DAT_1832e1b20;
  _DAT_1832e21e8 = uVar6;
  _DAT_1832e22c0 =
       func_0x00018bfa9e50((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832e1bf8 + uVar6) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - lVar2);
  uVar1 = _DAT_1832e22c0 - (_DAT_1832e22c0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832e22c0;
  _DAT_1832e1f88 = (_DAT_1832e1f88 ^ uVar1) + (_iStack0000000000000058 | uVar6) ^ 0x90392bff179379d7
  ;
  _DAT_1832e20a8 = (_DAT_1832e20a8 * -0xb5580020b13f2e5 ^ _DAT_1832e1f88) + uVar1;
  _DAT_1832e22f8 = _DAT_1832e20a8 ^ _DAT_1832e1f88;
  _DAT_1832e1f08 = _iStack0000000000000058 | uVar6;
  iStack0000000000000058 = (int)*unaff_RBX;
  switch(iStack0000000000000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbfa8ec1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfa8ec1(void)

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


// ----- block @ rva 0xbfa9019 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfa9019(void)

{
  char cVar1;
  code *in_RAX;
  
  cVar1 = (*in_RAX)();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbfa9c6f -----

void FUN_18bfa9c6f(void)

{
  return;
}


// ----- block @ rva 0xbfa9fad -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfa9fad(void)

{
  FUN_190ddce00();
  (*_DAT_181d89ba8)();
  return;
}


// ----- block @ rva 0xbfadfdf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfadfdf(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbfaf15e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfaf15e(void)

{
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
  (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  (*_DAT_181d889f8)();
  return;
}


// ----- block @ rva 0xbfaf1e5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfaf1e5(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xf47e,0x29b);
  (*_DAT_181d894c8)();
  return;
}


// ----- block @ rva 0xbfb0a5c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb0a5c(void)

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


// ----- block @ rva 0xbfb0d27 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb0d27(void)

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


// ----- block @ rva 0xbfb15b3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb15b3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbfb25e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb25e1(void)

{
  (*_DAT_181d8a7f8)();
  return;
}


// ----- block @ rva 0xbfb2a8e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb2a8e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbfb2f2d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb2f2d(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->Throw /*0x68*/))();
  (*_DAT_181d89e38)();
  return;
}


// ----- block @ rva 0xbfb2f3e -----

void FUN_18bfb2f3e(void)

{
  return;
}


// ----- block @ rva 0xbfb2faa -----

void FUN_18bfb2faa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfb31c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb31c4(void)

{
  FUN_190ddce00();
  (*_DAT_181d8bf50)();
  return;
}


// ----- block @ rva 0xbfb6021 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb6021(void)

{
  longlong in_stack_00000068;
  
  switch(in_stack_00000068 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbfb67c9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb67c9(void)

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


// ----- block @ rva 0xbfb68a8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb68a8(void)

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


// ----- block @ rva 0xbfb6c1a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb6c1a(void)

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


// ----- block @ rva 0xbfb6d90 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb6d90(void)

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


// ----- block @ rva 0xbfb6f2e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfb6f2e(void)

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


// ----- block @ rva 0xbfb6f6d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb6f6d(void)

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


// ----- block @ rva 0xbfb7334 -----

void FUN_18bfb7334(void)

{
  return;
}


// ----- block @ rva 0xbfb73a0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb73a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (*_DAT_181d8b650)();
  return;
}


// ----- block @ rva 0xbfb74f3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb74f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8be00)();
  return;
}


// ----- block @ rva 0xbfb7519 -----

void FUN_18bfb7519(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfb76d7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb76d7(void)

{
  FUN_190ddce00();
  (*_DAT_181d8cae8)();
  return;
}


// ----- block @ rva 0xbfb9f2e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfb9f2e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8cbe8)();
  return;
}


// ----- block @ rva 0xbfba15f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfba15f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181d8cd78)();
  return;
}


// ----- block @ rva 0xbfba1eb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfba1eb(void)

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


// ----- block @ rva 0xbfba21b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfba21b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1842a3a30();
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


// ----- block @ rva 0xbfba5c9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfba5c9(void)

{
  (*_DAT_181d8d008)();
  return;
}


// ----- block @ rva 0xbfba623 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfba623(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8d0b8)();
  return;
}


// ----- block @ rva 0xbfba6a0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfba6a0(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8ceb8)();
  return;
}


// ----- block @ rva 0xbfba7f6 -----

void FUN_18bfba7f6(void)

{
  return;
}


// ----- block @ rva 0xbfba891 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfba891(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbfbad5d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbad5d(void)

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


// ----- block @ rva 0xbfbb0fc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbb0fc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184194800();
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


// ----- block @ rva 0xbfbb136 -----

void FUN_18bfbb136(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfbb321 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfbb321(void)

{
  FUN_190ddce00();
  (*_DAT_181d8df68)();
  return;
}


// ----- block @ rva 0xbfbf228 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbf228(void)

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


// ----- block @ rva 0xbfbf2e0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbf2e0(void)

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


// ----- block @ rva 0xbfbf31a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfbf31a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8e238)();
  return;
}


// ----- block @ rva 0xbfbf397 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfbf397(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8dee8)();
  return;
}


// ----- block @ rva 0xbfbff60 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfbff60(void)

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


// ----- block @ rva 0xbfc03e6 -----

void FUN_18bfc03e6(void)

{
  return;
}


// ----- block @ rva 0xbfc0d18 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc0d18(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181d8dea8)();
  return;
}


// ----- block @ rva 0xbfc1010 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1010(void)

{
  (*_DAT_181d8e848)();
  return;
}


// ----- block @ rva 0xbfc12fa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc12fa(void)

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


// ----- block @ rva 0xbfc15bd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc15bd(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->CallBooleanMethodA /*0x138*/))(in_stack_00000030);
  (*_DAT_181d8e8e8)();
  return;
}


// ----- block @ rva 0xbfc1610 -----

void FUN_18bfc1610(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfc1733 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1733(void)

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


// ----- block @ rva 0xbfc176c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc176c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8f928)();
  return;
}


// ----- block @ rva 0xbfc1791 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1791(void)

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


// ----- block @ rva 0xbfc17a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc17a6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8f8f8)();
  return;
}


// ----- block @ rva 0xbfc17ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc17ce(void)

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


// ----- block @ rva 0xbfc1822 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1822(void)

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


// ----- block @ rva 0xbfc1846 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1846(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8f948)();
  return;
}


// ----- block @ rva 0xbfc186d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc186d(void)

{
  (*_DAT_181d8f968)();
  return;
}


// ----- block @ rva 0xbfc187e -----

void FUN_18bfc187e(void)

{
  return;
}


// ----- block @ rva 0xbfc1886 -----

void FUN_18bfc1886(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfc1933 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1933(void)

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


// ----- block @ rva 0xbfc196c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc196c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8fa08)();
  return;
}


// ----- block @ rva 0xbfc1991 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1991(void)

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


// ----- block @ rva 0xbfc19a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc19a6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8fa58)();
  return;
}


// ----- block @ rva 0xbfc19ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc19ef(void)

{
  FUN_190dd9df0();
  (*_DAT_181d8fa38)();
  return;
}


// ----- block @ rva 0xbfc1a22 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1a22(void)

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


// ----- block @ rva 0xbfc1a46 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1a46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8fa48)();
  return;
}


// ----- block @ rva 0xbfc1a7e -----

void FUN_18bfc1a7e(void)

{
  return;
}


// ----- block @ rva 0xbfc1a86 -----

void FUN_18bfc1a86(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfc1b33 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1b33(void)

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


// ----- block @ rva 0xbfc1b6c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1b6c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8fab8)();
  return;
}


// ----- block @ rva 0xbfc1b91 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1b91(void)

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


// ----- block @ rva 0xbfc1ba6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1ba6(void)

{
  FUN_190dd72e0();
  (*_DAT_181d8fb18)();
  return;
}


// ----- block @ rva 0xbfc1bce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1bce(void)

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


// ----- block @ rva 0xbfc1bef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1bef(void)

{
  FUN_190dd9df0();
  (*_DAT_181d8faf8)();
  return;
}


// ----- block @ rva 0xbfc1c22 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1c22(void)

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


// ----- block @ rva 0xbfc1c46 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1c46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8fb28)();
  return;
}


// ----- block @ rva 0xbfc1c7e -----

void FUN_18bfc1c7e(void)

{
  return;
}


// ----- block @ rva 0xbfc1c86 -----

void FUN_18bfc1c86(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfc1d5d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1d5d(void)

{
  FUN_190ddfc90();
  (*_DAT_181d8fc28)();
  return;
}


// ----- block @ rva 0xbfc1dca -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1dca(void)

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


// ----- block @ rva 0xbfc1e03 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1e03(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181d8fbc8)();
  return;
}


// ----- block @ rva 0xbfc1e1c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1e1c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117db0();
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


// ----- block @ rva 0xbfc1e78 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1e78(void)

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


// ----- block @ rva 0xbfc1e99 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1e99(void)

{
  FUN_190ddfc90();
  (*_DAT_181d8fbb8)();
  return;
}


// ----- block @ rva 0xbfc1ecc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc1ecc(void)

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


// ----- block @ rva 0xbfc1ef0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc1ef0(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8fbc8)();
  return;
}


// ----- block @ rva 0xbfc1f10 -----

void FUN_18bfc1f10(void)

{
  return;
}


// ----- block @ rva 0xbfc1f18 -----

void FUN_18bfc1f18(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfc204d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc204d(void)

{
  FUN_190ddfc90();
  (*_DAT_181d8fc88)();
  return;
}


// ----- block @ rva 0xbfc2080 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc2080(void)

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


// ----- block @ rva 0xbfc20a4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc20a4(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbfc20ba -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc20ba(void)

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


// ----- block @ rva 0xbfc20f3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc20f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181d8fca8)();
  return;
}


// ----- block @ rva 0xbfc210c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc210c(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181d8fca8)();
  return;
}


// ----- block @ rva 0xbfc212c -----

void FUN_18bfc212c(void)

{
  return;
}


// ----- block @ rva 0xbfc2134 -----

void FUN_18bfc2134(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbfc219a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc219a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181d8fcf8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0xbfc21a6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc21a6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbfc21c3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc21c3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_181d8fd08)();
  return;
}


// ----- block @ rva 0xbfc21cc -----

void FUN_18bfc21cc(void)

{
  return;
}


// ----- block @ rva 0xbfc2250 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc2250(void)

{
  FUN_190ddce00();
  (*_DAT_181d8ff28)();
  return;
}


// ----- block @ rva 0xbfc22c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc22c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticLongField /*0x4b8*/))();
  (*_DAT_181d8fd88)();
  return;
}


// ----- block @ rva 0xbfc22e7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc22e7(void)

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


// ----- block @ rva 0xbfc235b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc235b(void)

{
  FUN_190ddfc90();
  (*_DAT_181d8fef8)();
  return;
}


// ----- block @ rva 0xbfc240f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc240f(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_181d8fe68)();
  return;
}


// ----- block @ rva 0xbfc2486 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc2486(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181d8ff58)();
  return;
}


// ----- block @ rva 0xbfc26db -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc26db(void)

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


// ----- block @ rva 0xbfc26fc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc26fc(void)

{
  int in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbfc28c4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bfc28c4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xbfc28fb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc28fb(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181d8ff48)();
  return;
}


// ----- block @ rva 0xbfc295e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc295e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181d8ffd8)();
  return;
}


// ----- block @ rva 0xbfc29d3 -----

void FUN_18bfc29d3(void)

{
  return;
}


// ----- block @ rva 0xbfc2b11 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bfc2b11(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181d8fdc8)();
  return;
}


// ----- block @ rva 0xbfc2b77 -----

void FUN_18bfc2b77(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

