// ===== STITCHED CORPUS: sixtwo.li$uw =====
// handlers: 11  continuation blocks: 117  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x19c088', '0x62bf8', '0xdc8b40', '0xdc91b8', '0xdc91c8', '0xdc91d8', '0xdc9208', '0xdc9218', '0xdc9228', '0xdc9238', '0xdc99a8', '0xdc99b8', '0xdc99c8', '0xdc99d8', '0xdc9b38', '0xdc9b48', '0xdcfd90', '0xdcfd98', '0xdcfda0']

// ===== Lsixtwo/li$uw; _0a83ae2426c6512d17bcc5ebcfaae924 ()V (handler @ image 187d7b530, runtime 6fffef98b530) =====

void FUN_187d7b530(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d7b60c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc6fe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li$uw; dvb ()F (handler @ image 187d814f0, runtime 6fffef9914f0) =====

void FUN_187d814f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187d81515 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc8620 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uw; dvc ()F (handler @ image 187d81700, runtime 6fffef991700) =====

void FUN_187d81700(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187d81725 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc8700 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uw; dvd ()F (handler @ image 187d81910, runtime 6fffef991910) =====

void FUN_187d81910(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187d81935 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc87e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uw; dve ()F (handler @ image 187d81b20, runtime 6fffef991b20) =====

void FUN_187d81b20(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187d81b45 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc88c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uw; dvf ([B)Ljava/lang/String; (handler @ image 187d81d30, runtime 6fffef991d30) =====

void FUN_187d81d30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000187d81dd3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc8ae0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uw; dvg (IJ)Ljava/lang/String; (handler @ image 187da8b60, runtime 6fffef9b8b60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187da8b60(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar10;
  undefined1 auVar9 [16];
  
  uVar5 = (~uRam00000001831a2158 + 0x5e896f8dd401a5d2) *
          ((uRam00000001831a1d68 ^ 0xc23ac26bf1f7de9d) +
          (uRam00000001831a1d68 & 0x423ac26bf1f7de9d) * 2);
  uVar5 = (uVar5 | uRam00000001831a21a0) + (uVar5 & uRam00000001831a21a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a2068 =
       func_0x000187daffe0((uVar5 | 0x9cb3ade625f67b4c) + (uVar5 & 0x9cb3ade625f67b4c));
  uVar5 = (uRam00000001831a2068 << 0x2c | (uRam00000001831a2068 & 0x7fffffffffffffff) >> 0x14) << 8
          | (uRam00000001831a2068 & 0xfffff) >> 0xc;
  uRam00000001831a1e08 = (uRam00000001831a1e08 ^ uVar5) + 0xdebbefeff5d5fdf9 ^ 0x770c77b8a4555ef0;
  uRam00000001831a1c58 = (uRam00000001831a1c58 * 0x68ed9fe2850c5a9 ^ uRam00000001831a1e08) + uVar5;
  uRam00000001831a1f20 = uRam00000001831a1c58 ^ uRam00000001831a1e08;
  uRam00000001831a1f90 = 0xdebbefeff5d5fdf9;
  uVar5 = (uRam00000001831a1d00 ^ _UNK_180dcfd90) + uRam00000001831a1ee8 + 0xf16e2d4ed91fe031;
  uVar10 = (uRam00000001831a1ee8 ^ _UNK_180dcfd98) + uRam00000001831a1d00 + 0x3af6ccd3e3c149c9;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1d00 ^ _UNK_180dcfd90;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1ee8 ^ _UNK_180dcfd98;
  uRam00000001831a1bc8 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831a1d00 + 0x3af6ccd3e3c149c9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831a1ee8 + 0xf16e2d4ed91fe031));
  uVar5 = ((uRam00000001831a1bc8 << 0x2d | uRam00000001831a1bc8 >> 0x13) >> 0x1f |
          (uRam00000001831a1bc8 >> 0x13) << 0x21) ^ 0xf16e2d4e5d3dc314;
  uRam00000001831a1e18 = (uRam00000001831a1e18 ^ uVar5) + 0xcb98e19dbefc8add ^ 0xd2ab058262dbb6b9;
  uRam00000001831a1fb8 = (uRam00000001831a1fb8 * 0x45b8dc402e2f531 ^ uRam00000001831a1e18) + uVar5;
  uRam00000001831a1ff8 = uRam00000001831a1fb8 ^ uRam00000001831a1e18;
  uRam00000001831a2028 = 0xcb98e19dbefc8add;
  uVar5 = (~uRam00000001831a2168 + 0x3987390cb72b8341) *
          ((uRam00000001831a1b58 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831a1b58 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001831a1ef0) + (uVar5 & uRam00000001831a1ef0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a1f78 =
       func_0x000187daffe0((uVar5 | 0x3987390c3309a065) + (uVar5 & 0x3987390c3309a065));
  uRam00000001831a1f90 =
       (uRam00000001831a1f90 ^ 0x3987390cb72b8340) + 0xc678c6f348d47cc0 ^ 0xeee5ecba3df278f;
  uRam00000001831a1ce0 =
       (uRam00000001831a1ce0 * -0x45c0700f32bf727d ^ uRam00000001831a1f90) + 0x3987390cb72b8340;
  uRam00000001831a2278 = uRam00000001831a1ce0 ^ uRam00000001831a1f90;
  uRam00000001831a1b20 = 0xc678c6f348d47cc0;
  uRam00000001831a1e70 = func_0x000187daffe0(uRam00000001831a1b88 ^ 0xba6830e6606f784);
  uRam00000001831a1e18 = uRam00000001831a22a8 ^ uRam00000001831a1e70 ^ 0x3987390cb72c033f;
  uRam00000001831a1f58 =
       (uRam00000001831a1f58 ^ uRam00000001831a1e70) + 0x3987390cb72c033f ^ 0x552d74da21ebdbf8;
  uRam00000001831a21c0 =
       (uRam00000001831a21c0 * 0x4605c569db1356f5 ^ uRam00000001831a1f58) + uRam00000001831a1e70;
  uRam00000001831a2148 = uRam00000001831a21c0 ^ uRam00000001831a1f58;
  uRam00000001831a2178 = 0x3987390cb72c033f;
  uVar5 = (~uRam00000001831a1da8 + 0xc678c6f348d47cc1) *
          ((uRam00000001831a22b0 ^ 0x3987390c330e201a) +
          (uRam00000001831a22b0 & 0x3987390c330e201a) * 2);
  uVar5 = (uVar5 | uRam00000001831a1dc0) + (uVar5 & uRam00000001831a1dc0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a1c28 =
       func_0x000187daffe0((uVar5 | 0xffffffff7bda5cda) + (uVar5 & 0xffffffff7bda5cda));
  uVar5 = uRam00000001831a1c28 >> 1 | uRam00000001831a1c28;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001831a1c28;
  uRam00000001831a22d8 = uRam00000001831a1fc8 ^ uVar5 ^ 0x7fff;
  uRam00000001831a2068 = (uRam00000001831a2068 ^ uVar5) + 0x7fff ^ 0x8b1b9e332891bfad;
  uRam00000001831a1d50 = (uRam00000001831a1d50 * -0x62f53e2a47ffc9fb ^ uRam00000001831a2068) + uVar5
  ;
  uRam00000001831a2210 = uRam00000001831a1d50 ^ uRam00000001831a2068;
  uRam00000001831a2258 = uRam00000001831a1e60 ^ 0x7fff;
  uRam00000001831a1cc0 = 0x7fff;
  uRam00000001831a1d48 = func_0x000187daffe0(uRam00000001831a1ce0 ^ 0x15acd91912fc834f);
  uVar5 = (uRam00000001831a1d48 ^ 0x212b1d1aa3a69030) & 0x7fffffffffffffff;
  uRam00000001831a22a0 = (uRam00000001831a22a0 ^ uVar5) + 0xded4e2e55c596fd0 ^ 0xc730d2d95f2e4651;
  uRam00000001831a1f00 = (uRam00000001831a1f00 * 0x5d1d5cebae540aa3 ^ uRam00000001831a22a0) + uVar5;
  uRam00000001831a1de0 = uRam00000001831a1f00 ^ uRam00000001831a22a0;
  uRam00000001831a1d50 = -0x212b1d1aa3a69030;
  uVar5 = (~uRam00000001831a2060 + 0xded4e2e55c596fd1) *
          ((uRam00000001831a21f0 ^ 0x212b1d1a2785330a) +
          (uRam00000001831a21f0 & 0x212b1d1a2785330a) * 2);
  uVar5 = (uVar5 | uRam00000001831a2088) + (uVar5 & uRam00000001831a2088);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a2240 =
       func_0x000187daffe0((uVar5 | 0xffffffff7bdc5cda) + (uVar5 & 0xffffffff7bdc5cda));
  uVar5 = ~((uRam00000001831a2240 ^ 0x5f60198aec188730) * 2) >> 1 & 0x212b1d1aa3a7102f;
  uRam00000001831a2210 = uRam00000001831a2040 ^ uVar5 ^ 0x7fff;
  uRam00000001831a1cc0 = (uRam00000001831a1cc0 ^ uVar5) + 0x7fff ^ 0xb4f252bd58b41113;
  uRam00000001831a1c78 = (uRam00000001831a1c78 * -0x635b98bc8d1be8c7 ^ uRam00000001831a1cc0) + uVar5
  ;
  uRam00000001831a1ef8 = uRam00000001831a1c78 ^ uRam00000001831a1cc0;
  uRam00000001831a2040 = 0x7fff;
  uVar5 = (uRam00000001831a1cf0 ^ _UNK_180dcfda0) + uRam00000001831a1e28 + 0x84222325;
  uVar10 = (uRam00000001831a1e28 ^ _UNK_180dcfda8) + uRam00000001831a1cf0 + 0x8f942d539c305160;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1cf0 ^ _UNK_180dcfda0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1e28 ^ _UNK_180dcfda8;
  uRam00000001831a22e0 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831a1cf0 + 0x8f942d539c305160) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a1e28 + 0x84222325));
  uVar5 = uRam00000001831a22e0 - (uRam00000001831a22e0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001831a22e0;
  uRam00000001831a1c40 = (uRam00000001831a1c40 ^ uVar5) + 0x706bd2ac63cfaea0 ^ 0xbeedbef9e82af01b;
  uRam00000001831a1d78 = (uRam00000001831a1d78 * -0x720297622e54327b ^ uRam00000001831a1c40) + uVar5
  ;
  uRam00000001831a2280 = uRam00000001831a1d78 ^ uRam00000001831a1c40;
  uRam00000001831a1dd0 = 0x706bd2ac63cfaea0;
  uVar5 = (uRam00000001831a1b78 ^ _UNK_180dcfdb0) + uRam00000001831a20c0 + 0x8f942d531812f27a;
  uVar10 = (uRam00000001831a20c0 ^ _UNK_180dcfdb8) + uRam00000001831a1b78 + 0x706bd2ac63cfaea0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1b78 ^ _UNK_180dcfdb0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a20c0 ^ _UNK_180dcfdb8;
  uRam00000001831a22d0 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831a1b78 + 0x706bd2ac63cfaea0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831a20c0 + 0x8f942d531812f27a));
  uVar10 = uRam00000001831a22d0 ^ 0x7eaeeeafd5a26d60;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar10;
  uRam00000001831a1d88 = uRam00000001831a1d08 ^ uVar10 ^ 0x7fff;
  uRam00000001831a2148 = (uRam00000001831a2148 ^ uVar10) + 0x7fff ^ 0xe2696a83c6cb427e;
  uRam00000001831a1ee8 = (uRam00000001831a1ee8 * 0x17f811f7d2162f15 ^ uRam00000001831a2148) + uVar10
  ;
  uRam00000001831a1e60 = uRam00000001831a1ee8 ^ uRam00000001831a2148;
  uRam00000001831a1c00 = 0x7fff;
  uRam00000001831a2048 = func_0x000187daffe0(uRam00000001831a1d08 + 0x8dabdebb01020912 ^ 0x89);
  uVar5 = uRam00000001831a2048 - (uRam00000001831a2048 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam00000001831a2048) << 4 | uRam00000001831a2048 >> 0x3c;
  uRam00000001831a2100 = (uRam00000001831a2100 ^ uVar5) + 0x15230e724b297724 ^ 0xd16acdfd835c7c96;
  uRam00000001831a1b70 = (uRam00000001831a1b70 * -0xb739c9f3abaf573 ^ uRam00000001831a2100) + uVar5;
  uRam00000001831a1ee0 = uRam00000001831a1b70 ^ uRam00000001831a2100;
  uRam00000001831a1ed8 = 0x15230e724b297724;
  uVar5 = (uRam00000001831a2268 ^ _UNK_180dcfdc0) + uRam00000001831a1d20 + 0xdebbefef71f7dedc;
  uVar10 = (uRam00000001831a1d20 ^ _UNK_180dcfdc8) + uRam00000001831a2268 + 0xcb98e19dbefc8add;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a2268 ^ _UNK_180dcfdc0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1d20 ^ _UNK_180dcfdc8;
  uRam00000001831a1e20 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831a2268 + 0xcb98e19dbefc8add) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831a1d20 + 0xdebbefef71f7dedc));
  uVar5 = (~uRam00000001831a1e20 & 0xdebbefeff5d5fdf9) * 0x86c3664f1bc3bff;
  uRam00000001831a2128 = (uRam00000001831a2128 ^ uVar5) + 0xca98e18db4d488d9 ^ 0xefcb9375c18a0542;
  uRam00000001831a2240 = (uRam00000001831a2240 * -0x70752eced7b3b231 ^ uRam00000001831a2128) + uVar5
  ;
  uRam00000001831a1c78 = uRam00000001831a2240 ^ uRam00000001831a2128;
  uRam00000001831a2010 = 0xca98e18db4d488d9;
  uVar5 = (~uRam00000001831a1c30 + 0x9531c31b69a911b3) *
          ((uRam00000001831a1ba0 ^ 0x15230e72cf0b5401) +
          (uRam00000001831a1ba0 & 0x15230e72cf0b5401) * 2);
  uVar5 = (uVar5 | uRam00000001831a1e70) + (uVar5 & uRam00000001831a1e70);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a22c0 =
       func_0x000187daffe0((uVar5 | 0x8012cd69a6a245b3) + (uVar5 & 0x8012cd69a6a245b3));
  uVar5 = uRam00000001831a1d60 ^ 0x9531c31b69a911b2;
  uRam00000001831a1e60 = uRam00000001831a2028 ^ uVar5 ^ 0xaa54d18db4d288d6;
  uRam00000001831a1c10 = (uRam00000001831a1c10 ^ uVar5) + 0xaa54d18db4d288d6 ^ 0x9d43a1aba381640a;
  uRam00000001831a1c08 = (uRam00000001831a1c08 * 0x7ed0f2660ce08585 ^ uRam00000001831a1c10) + uVar5;
  uRam00000001831a1d68 = uRam00000001831a1c08 ^ uRam00000001831a1c10;
  uRam00000001831a21d0 = -0x55ab2e724b2d772a;
  uVar5 = (uRam00000001831a1d58 ^ _UNK_180dcfdd0) + uRam00000001831a1c58 + 0xaa54d18d30f0abf3;
  uVar10 = (uRam00000001831a1c58 ^ _UNK_180dcfdd8) + uRam00000001831a1d58 + 0xaa54d18db4d288d6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1d58 ^ _UNK_180dcfdd0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1c58 ^ _UNK_180dcfdd8;
  uRam00000001831a1d20 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831a1d58 + 0xaa54d18db4d288d6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831a1c58 + 0xaa54d18d30f0abf3));
  uRam00000001831a2150 = uRam00000001831a2150 ^ uRam00000001831a1d20 ^ 0xb42d4521346fbe90;
  uRam00000001831a1bb8 =
       (uRam00000001831a1bb8 * 0xa19295fe0a02c5d ^ uRam00000001831a2150) + uRam00000001831a1d20;
  uRam00000001831a1db8 = uRam00000001831a1bb8 ^ uRam00000001831a2150;
  uRam00000001831a1c88 = 0;
  uVar5 = ((uRam00000001831a21b0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001831a21b0 & 0x84225cda) * 2) * -uRam00000001831a2068;
  uVar5 = (uVar5 | uRam00000001831a2108) + (uVar5 & uRam00000001831a2108);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a1d58 = uRam00000001831a1d20;
  uRam00000001831a1f00 =
       func_0x000187daffe0((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uRam00000001831a2050 = uRam00000001831a2068 ^ uRam00000001831a1f00 ^ 0x7fff;
  uRam00000001831a2018 = (uRam00000001831a2018 ^ uRam00000001831a1f00) + 0x7fff ^ 0x24859079909002b6
  ;
  uRam00000001831a1f18 =
       (uRam00000001831a1f18 * -0x59ec089ac635e6df ^ uRam00000001831a2018) + uRam00000001831a1f00;
  uRam00000001831a1e70 = uRam00000001831a1f18 ^ uRam00000001831a2018;
  uRam00000001831a1c68 = 0x7fff;
  uVar5 = (uRam00000001831a1cc8 ^ _UNK_180dcfde0) + uRam00000001831a1d40 + 0xdebbefef71f7dedc;
  uVar10 = (uRam00000001831a1d40 ^ _UNK_180dcfde8) + (uRam00000001831a1cc8 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1cc8 ^ _UNK_180dcfde0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1d40 ^ _UNK_180dcfde8;
  uRam00000001831a1db0 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831a1cc8 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831a1d40 + 0xdebbefef71f7dedc));
  uVar5 = (uRam00000001831a1db0 ^ 0xdebbefeff5d5fdf8) & 0xdebbefeff5d5fdf9;
  uRam00000001831a1d18 = (uRam00000001831a1d18 ^ uVar5) + 0x214410100a2a0206 ^ 0x22b11ddf0a9865dd;
  uRam00000001831a21d8 = (uRam00000001831a21d8 * -0x241c4ae22a0b7c7d ^ uRam00000001831a1d18) + uVar5
  ;
  uRam00000001831a2058 = uRam00000001831a21d8 ^ uRam00000001831a1d18;
  uRam00000001831a1e98 = 0x214410100a2a0206;
  uRam00000001831a1db8 = func_0x000187daffe0(uRam00000001831a1e40 ^ 0xadca4c555f0db72);
  uRam00000001831a1d98 =
       uRam00000001831a1d98 ^ uRam00000001831a1db8 & 0xffffffffe0000000 ^ 0xcdad467575060af6;
  uRam00000001831a1b48 =
       (uRam00000001831a1b48 * 0x4db239cb6dcf9b3f ^ uRam00000001831a1d98) +
       (uRam00000001831a1db8 & 0xffffffffe0000000);
  uRam00000001831a1f80 = uRam00000001831a1b48 ^ uRam00000001831a1d98;
  uRam00000001831a2280 = 0;
  uVar5 = (uRam00000001831a2080 ^ 0x84225cda) + uRam00000001831a22e0 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a2080 ^ 0x84225cda;
  uVar10 = ((uRam00000001831a22e0 + uRam00000001831a2080) * 0x2000 |
           uRam00000001831a22e0 + uRam00000001831a2080 >> 0x33) ^ uRam00000001831a22e0;
  uRam00000001831a1f08 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - uRam00000001831a2080 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a22e0 + 0x84225cda));
  uVar5 = uRam00000001831a1f08 << 0x12 | uRam00000001831a1f08 >> 0x2e;
  uRam00000001831a21c0 = uRam00000001831a1fe8 ^ uVar5 ^ 0x7fff;
  uRam00000001831a1c28 = (uRam00000001831a1c28 ^ uVar5) + 0x7fff ^ 0x9404f8e8d0c3056e;
  uRam00000001831a2168 = (uRam00000001831a2168 * 0x79c85f0ce79e57b5 ^ uRam00000001831a1c28) + uVar5;
  uRam00000001831a1e28 = uRam00000001831a2168 ^ uRam00000001831a1c28;
  uRam00000001831a1b60 = 0x7fff;
  uVar5 = (uRam00000001831a1b08 ^ 0x84225cda) + uRam00000001831a2000 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1b08 ^ 0x84225cda;
  uVar10 = ((uRam00000001831a2000 + uRam00000001831a1b08) * 0x2000 |
           uRam00000001831a2000 + uRam00000001831a1b08 >> 0x33) ^ uRam00000001831a2000;
  uRam00000001831a21c8 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - uRam00000001831a1b08 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a2000 + 0x84225cda));
  auVar9 = _UNK_1800170c0;
  uVar5 = uRam00000001831a21c8 & 0xffffffffffe00000;
  uRam00000001831a22c0 = uRam00000001831a1b58 ^ uVar5 ^ 0x7fff;
  uRam00000001831a2100 = (uRam00000001831a2100 ^ uVar5) + 0x7fff ^ 0x57b32473b463b1a7;
  uRam00000001831a2078 = (uRam00000001831a2078 * -0x225b4fb0567ffc51 ^ uRam00000001831a2100) + uVar5
  ;
  uRam00000001831a1bc0 = uRam00000001831a2078 ^ uRam00000001831a2100;
  auVar7._8_8_ = _UNK_18019c088;
  auVar7._0_8_ = param_4 ^ 0x84222325;
  uRam00000001831a22e0 = 0x7fff;
  auVar8 = pshufb(auVar7 ^ _UNK_180dcfdf0,_UNK_1800170c0);
  uVar10 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar10 + lRam00000001831a2038;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam00000001831a1d88 ^ uVar10;
  }
  uRam00000001831a2150 = func_0x000187daffe0(SUB161(auVar7 ^ _UNK_180dcfdf0,5) ^ uVar5);
  uVar5 = (uRam00000001831a2150 & 0xfffffffff) >> 1 | uRam00000001831a2150 & 0xfffffffff;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar10 = uVar5 >> 4 | uVar5;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar5 = uVar5 >> 0x20 | uVar10 >> 0x10 | uVar10;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001831a2150 & 0xfffffffff;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar2;
  uRam00000001831a1b98 = (uRam00000001831a1b98 ^ uVar5) + uVar10 ^ 0xc08be529e5b55f8a;
  uRam00000001831a20a8 = (uRam00000001831a20a8 * 0x4c8af44ae9216f7b ^ uRam00000001831a1b98) + uVar5;
  uRam00000001831a1e38 = uRam00000001831a20a8 ^ uRam00000001831a1b98;
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar2 ^ 0x84222325;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = 0;
  auVar9 = pshufb(auVar8 ^ _UNK_180dcfe00,auVar9);
  uVar6 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar6 + uRam00000001831a1bf8;
  if (auVar9._4_4_ < 0) {
    uVar5 = uRam00000001831a1c90 ^ uVar6;
  }
  uRam00000001831a1b00 = uVar10;
  uRam00000001831a1b60 = func_0x000187daffe0(SUB161(auVar8 ^ _UNK_180dcfe00,5) ^ uVar5);
  uVar6 = (uVar10 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001831a1e08 =
       (uRam00000001831a1e08 ^ uRam00000001831a1b60 & 0xffffffff80000000) + uVar6 ^
       0xa86e59eecaff3545;
  uRam00000001831a1be8 =
       (uRam00000001831a1be8 * -0x3788d81fe93733b ^ uRam00000001831a1e08) +
       (uRam00000001831a1b60 & 0xffffffff80000000);
  uRam00000001831a2288 = uRam00000001831a1be8 ^ uRam00000001831a1e08;
  uVar3 = uVar6 & 0xffffffff;
  uVar5 = (uRam00000001831a2128 ^ _UNK_180dcfe10) + uRam00000001831a1b60 + 0x1df99349;
  uVar10 = (uRam00000001831a1b60 ^ _UNK_180dcfe18) + uRam00000001831a2128 + 0xc6932be;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a2128 ^ _UNK_180dcfe10;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1b60 ^ _UNK_180dcfe18;
  uRam00000001831a1c10 = uVar3;
  uRam00000001831a1b98 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831a2128 + 0xc6932be) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a1b60 + 0x1df99349));
  uVar5 = uRam00000001831a1b98 - (uRam00000001831a1b98 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001831a1b98;
  uRam00000001831a1cf0 = (uRam00000001831a1cf0 ^ uVar5) + 0x9dfbb2fe ^ 0x4f3beafb0d189b44;
  uRam00000001831a1e78 = (uRam00000001831a1e78 * 0x5a153d3749a4a9b9 ^ uRam00000001831a1cf0) + uVar5;
  uRam00000001831a1c10 = uRam00000001831a1e78 ^ uRam00000001831a1cf0;
  uRam00000001831a1fd8 = 0x9dfbb2fe;
  uVar5 = (~uRam00000001831a1f98 + 0x170e732f) *
          ((uRam00000001831a2078 ^ 0xeb1da955) +
          (ulonglong)((uint)uRam00000001831a2078 & 0xeb1da955) * 2);
  uVar5 = (uVar5 | uRam00000001831a2258) + (uVar5 & uRam00000001831a2258);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a1c78 =
       func_0x000187daffe0((uVar5 | 0xfc13da7b) + (ulonglong)((uint)uVar5 & 0xfc13da7b));
  uRam00000001831a1bf8 =
       (uRam00000001831a1bf8 ^ uRam00000001831a1c78 ^ 0x170e732e) + 0x7831f95e ^ 0x9af7af5616f59d80;
  uRam00000001831a21e8 =
       (uRam00000001831a21e8 * -0x7583799bd6bafd3f ^ uRam00000001831a1bf8) +
       (uRam00000001831a1c78 ^ 0x170e732e);
  uRam00000001831a1be0 = uRam00000001831a21e8 ^ uRam00000001831a1bf8;
  uRam00000001831a1c80 = 0x7831f95e;
  uVar5 = (uRam00000001831a1f80 ^ _UNK_180dcfe20) + uRam00000001831a1ea0 + 0x84222325;
  uVar10 = (uRam00000001831a1ea0 ^ _UNK_180dcfe28) + uRam00000001831a1f80 + 0x32a34270;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1f80 ^ _UNK_180dcfe20;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1ea0 ^ _UNK_180dcfe28;
  uRam00000001831a22b0 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831a1f80 + 0x32a34270) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a1ea0 + 0x84222325));
  uVar5 = uRam00000001831a22b0 >> 1 | uRam00000001831a22b0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001831a22b0;
  uRam00000001831a1dc0 = (uRam00000001831a1dc0 ^ uVar5) - 0x32a34270 ^ 0x7b529abab6a4aea9;
  uRam00000001831a1f50 = (uRam00000001831a1f50 * 0x7acff0704dcd8ea7 ^ uRam00000001831a1dc0) + uVar5;
  uRam00000001831a1f88 = uRam00000001831a1f50 ^ uRam00000001831a1dc0;
  uRam00000001831a22f8 = 0xcd5cbd90;
  uVar5 = (uRam00000001831a2008 ^ _UNK_180dcfe30) + uRam00000001831a1ca8 + 0x842228b5;
  uVar10 = (uRam00000001831a1ca8 ^ _UNK_180dcfe38) + uRam00000001831a2008 + 0x32a34270;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a2008 ^ _UNK_180dcfe30;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1ca8 ^ _UNK_180dcfe38;
  uRam00000001831a1ff8 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831a2008 + 0x32a34270) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a1ca8 + 0x842228b5));
  uVar5 = uRam00000001831a1ff8 & 0xfffffffffff00000;
  uRam00000001831a1f08 = uRam00000001831a1c48 ^ uVar5 ^ 0x32a34e00;
  uRam00000001831a20f8 = (uRam00000001831a20f8 ^ uVar5) + 0x32a34e00 ^ 0x4b01f4862c97da1f;
  uRam00000001831a1b90 = (uRam00000001831a1b90 * -0x2fe5781b1c0aeda1 ^ uRam00000001831a20f8) + uVar5
  ;
  uRam00000001831a1d60 = uRam00000001831a1b90 ^ uRam00000001831a20f8;
  uRam00000001831a20e8 = 0x32a34e00;
  uRam00000001831a1bb0 = func_0x000187daffe0(uRam00000001831a1c98 + 0xcffff654ff32ff ^ 0x68);
  uVar5 = (uRam00000001831a1bb0 & 0xfffffffffffff) >> 1 | uRam00000001831a1bb0 & 0xfffffffffffff;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001831a1bb0 & 0xfffffffffffff ^ 0x32a34e00;
  uRam00000001831a1b30 = uRam00000001831a22f8 ^ uVar5 ^ 0x100000b90;
  uRam00000001831a1d28 = (uRam00000001831a1d28 ^ uVar5) + 0x100000b90 ^ 0xc04c53ea4c80dd1d;
  uRam00000001831a1d18 = (uRam00000001831a1d18 * 0x69d395a8816a4ec7 ^ uRam00000001831a1d28) + uVar5;
  uRam00000001831a21f8 = uRam00000001831a1d18 ^ uRam00000001831a1d28;
  uRam00000001831a1cd0 = 0xb90;
  uVar5 = (~uRam00000001831a2040 + 0x9d019101) *
          ((uRam00000001831a1d48 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831a1d48 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001831a1b20) + (uVar5 & uRam00000001831a1b20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a1fe0 =
       func_0x000187daffe0((uVar5 | 0x1923b225) + (ulonglong)((uint)uVar5 & 0x1923b225));
  uRam00000001831a1c00 =
       (uRam00000001831a1c00 ^ uRam00000001831a1fe0 & 0x7fffffffffffffff) - 0x9d019100 ^
       0xe01f81aaf208a918;
  uRam00000001831a2040 =
       (uRam00000001831a2040 * 0x1239172ce90fe4d7 ^ uRam00000001831a1c00) +
       (uRam00000001831a1fe0 & 0x7fffffffffffffff);
  uRam00000001831a1f60 = uRam00000001831a2040 ^ uRam00000001831a1c00;
  uRam00000001831a2050 = 0x62fe6f00;
  uVar5 = (uRam00000001831a1cc0 ^ _UNK_180dcfe40) + uRam00000001831a1c90 + 0x842228b5;
  uVar10 = (uRam00000001831a1c90 ^ _UNK_180dcfe48) + uRam00000001831a1cc0 + 0x9d019100;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1cc0 ^ _UNK_180dcfe40;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1c90 ^ _UNK_180dcfe48;
  uRam00000001831a1c58 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831a1cc0 + 0x9d019100) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a1c90 + 0x842228b5));
  uVar5 = (uRam00000001831a1c58 ^ 0x9d019b90) & 0x7fffffffffffffff;
  uRam00000001831a1f28 = uRam00000001831a1e18 ^ uVar5 ^ 0x9d019c90;
  uRam00000001831a1d60 = (uRam00000001831a1d60 ^ uVar5) + 0x9d019c90 ^ 0xff80e4f64c6ff12c;
  uRam00000001831a1e38 = (uRam00000001831a1e38 * -0x581c9b726595e84d ^ uRam00000001831a1d60) + uVar5
  ;
  uRam00000001831a1e30 = uRam00000001831a1e38 ^ uRam00000001831a1d60;
  uRam00000001831a2160 = 0x9d019c90;
  uRam00000001831a2108 = func_0x000187daffe0(uRam00000001831a1ff0 ^ 0x4fffcb4d005c54);
  uVar5 = (uRam00000001831a2108 ^ 0xffffff90) << 0x2b | (uRam00000001831a2108 ^ 0xffffff90) >> 0x15;
  uVar10 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5)
          & 0x7fffffffffffffff;
  uRam00000001831a1c68 = uRam00000001831a1fa0 ^ uVar5 ^ 0x100000b90;
  uRam00000001831a1b18 = (uRam00000001831a1b18 ^ uVar5) + 0x100000b90 ^ 0x71ac14174841a41a;
  uRam00000001831a2068 = (uRam00000001831a2068 * 0x40e0f6714bf67c6d ^ uRam00000001831a1b18) + uVar5;
  uRam00000001831a2180 = uRam00000001831a2068 ^ uRam00000001831a1b18;
  uRam00000001831a1c88 = 0xb90;
  uVar5 = (uRam00000001831a1b30 ^ _UNK_180dcfe50) + uRam00000001831a1e70 + 0xac30eaf5;
  uVar10 = (uRam00000001831a1e70 ^ _UNK_180dcfe58) + uRam00000001831a1b30 + 0xd7ed41c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1b30 ^ _UNK_180dcfe50;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1e70 ^ _UNK_180dcfe58;
  uRam00000001831a20d8 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831a1b30 + 0xd7ed41c0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a1e70 + 0xac30eaf5));
  uVar10 = uRam00000001831a20d8 ^ 0x21cceb2d58e52c00;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
           ^ uVar10;
  uVar5 = uVar10 << 0xd | uVar10 >> 0x33;
  uRam00000001831a1db8 = uRam00000001831a1f18 ^ uVar5 ^ 0x100000b90;
  uRam00000001831a1ec8 = (uRam00000001831a1ec8 ^ uVar5) + 0x100000b90 ^ 0xc61ef80d87194993;
  uRam00000001831a21d0 = (uRam00000001831a21d0 * -0x64ea0c365868b775 ^ uRam00000001831a1ec8) + uVar5
  ;
  uRam00000001831a2258 = uRam00000001831a21d0 ^ uRam00000001831a1ec8;
  lRam00000001831a22f0 = 0xb90;
  uVar5 = (uRam00000001831a1fd0 ^ _UNK_180dcfe60) + uRam00000001831a22e8 + 0x19d991db;
  uVar10 = (uRam00000001831a22e8 ^ _UNK_180dcfe68) + uRam00000001831a1fd0 + 0x7831f95e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1fd0 ^ _UNK_180dcfe60;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a22e8 ^ _UNK_180dcfe68;
  uRam00000001831a1c98 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831a1fd0 + 0x7831f95e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a22e8 + 0x19d991db));
  uRam00000001831a1d78 =
       (uRam00000001831a1d78 ^ uRam00000001831a1c98 & 0xfffffffffff00000) + 0xe5ca4ba0 ^
       0x16ec4211d689932c;
  uRam00000001831a1d50 =
       (uRam00000001831a1d50 * 0x16ddfa0cb28e552f ^ uRam00000001831a1d78) +
       (uRam00000001831a1c98 & 0xfffffffffff00000);
  uRam00000001831a1f50 = uRam00000001831a1d50 ^ uRam00000001831a1d78;
  uRam00000001831a1ba0 = 0xe5ca4ba0;
  uRam00000001831a2050 = func_0x000187daffe0(uRam00000001831a1d08 + 0x17ffdf7aff97ff ^ 0x1e);
  uVar5 = (ulonglong)(~(uint)uRam00000001831a2050 & 0x9dfbb2fe);
  uRam00000001831a1d50 = (uRam00000001831a1d50 ^ uVar5) + 0x1831b05e ^ 0x490ebc1434074db9;
  uRam00000001831a1b90 = (uRam00000001831a1b90 * -0x2f64f304612861dd ^ uRam00000001831a1d50) + uVar5
  ;
  uRam00000001831a1e58 = uRam00000001831a1b90 ^ uRam00000001831a1d50;
  uRam00000001831a1f98 = 0x1831b05e;
  uRam00000001831a1ea8 = func_0x000187daffe0(uRam00000001831a20d8 + 0x7ffb1170074ff ^ 0xc);
  uVar5 = uRam00000001831a1ea8 & 0x3ffffffffffffff;
  uRam00000001831a2120 = uRam00000001831a1f30 ^ uVar5 ^ 0x1162dac5c;
  uRam00000001831a1b38 = (uRam00000001831a1b38 ^ uVar5) + 0x1162dac5c ^ 0xf099e75cad8ae92c;
  uRam00000001831a1c60 = (uRam00000001831a1c60 * 0x9e978a40b981af5 ^ uRam00000001831a1b38) + uVar5;
  uRam00000001831a1c10 = uRam00000001831a1c60 ^ uRam00000001831a1b38;
  uRam00000001831a2110 = 0x162dac5c;
  uVar5 = (~uRam00000001831a21b0 + 0x162dac5d) *
          ((uRam00000001831a2208 ^ 0x920f8f79) +
          (ulonglong)((uint)uRam00000001831a2208 & 0x920f8f79) * 2);
  uVar5 = (uVar5 | uRam00000001831a1d48) + (uVar5 & uRam00000001831a1d48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a22c8 =
       func_0x000187daffe0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam00000001831a2240 = uRam00000001831a22c8 ^ 0x162dac5c;
  uRam00000001831a1d48 = uRam00000001831a1d48 ^ uRam00000001831a2240 ^ 0xabaa0bafc87b5db2;
  uRam00000001831a1c90 =
       (uRam00000001831a1c90 * 0x6b6dc135fe59bf1f ^ uRam00000001831a1d48) + uRam00000001831a2240;
  uRam00000001831a1bb8 = uRam00000001831a1c90 ^ uRam00000001831a1d48;
  uRam00000001831a2080 = 0;
  uVar5 = ((uRam00000001831a20f0 ^ 0x842228b5) +
          (ulonglong)((uint)uRam00000001831a20f0 & 0x842228b5) * 2) * -lRam00000001831a22f0;
  uVar5 = (uVar5 | uRam00000001831a2118) + (uVar5 & uRam00000001831a2118);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a1f60 =
       func_0x000187daffe0((uVar5 | 0x842228b5) + (ulonglong)((uint)uVar5 & 0x842228b5));
  uVar5 = uRam00000001831a1f60 << 2 | uRam00000001831a1f60 >> 0x3e;
  uRam00000001831a2030 = uRam00000001831a1f08 ^ uVar5 ^ 0xb90;
  uRam00000001831a1eb0 = (uRam00000001831a1eb0 ^ uVar5) + 0xb90 ^ 0xad12d6055e435e70;
  uRam00000001831a1e78 = (uRam00000001831a1e78 * 0x17b733d13aa55b79 ^ uRam00000001831a1eb0) + uVar5;
  uRam00000001831a1b60 = uRam00000001831a1e78 ^ uRam00000001831a1eb0;
  uRam00000001831a22e8 = 0xb90;
  uRam00000001831a21b0 = func_0x000187daffe0(uRam00000001831a22f8 + 0xbbffc735ffaaff ^ 0x51);
  uRam00000001831a1e48 =
       uRam00000001831a1e48 ^ uRam00000001831a21b0 & 0xffffffffe0000000 ^ 0x97335e96c8428393;
  uRam00000001831a1ef0 =
       (uRam00000001831a1ef0 * 0x5d994993dac16f1f ^ uRam00000001831a1e48) +
       (uRam00000001831a21b0 & 0xffffffffe0000000);
  uRam00000001831a1d58 = uRam00000001831a1ef0 ^ uRam00000001831a1e48;
  uRam00000001831a1df0 = 0;
  uRam00000001831a22d0 = func_0x000187daffe0(uRam00000001831a1e30 + 0x28007caaffddff ^ 0xa5);
  uVar5 = uRam00000001831a22e8 * 0x665e15c5972e0c5d;
  uRam00000001831a2088 = uRam00000001831a2230 ^ uVar5 ^ 0xb90;
  uRam00000001831a1f20 = (uRam00000001831a1f20 ^ uVar5) + 0xb90 ^ 0x29a2d9394592de24;
  uRam00000001831a2058 = (uRam00000001831a2058 * -0x5ef24ba7be23663 ^ uRam00000001831a1f20) + uVar5;
  uRam00000001831a1bf0 = uRam00000001831a2058 ^ uRam00000001831a1f20;
  uRam00000001831a22d8 = 0xb90;
  uVar5 = (uRam00000001831a1c20 ^ _UNK_180dcfe70) + uRam00000001831a1d40 + 0x1df99349;
  uVar10 = (uRam00000001831a1d40 ^ _UNK_180dcfe78) + uRam00000001831a1c20 + 0x99dbb06c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831a1c20 ^ _UNK_180dcfe70;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831a1d40 ^ _UNK_180dcfe78;
  uRam00000001831a1fd8 =
       func_0x000187daffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001831a1c20 + 0x99dbb06c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831a1d40 + 0x1df99349));
  uVar2 = (uint)uRam00000001831a1fd8 & 0x99dbb06c;
  uVar5 = (ulonglong)uVar2 - (ulonglong)((uint)(uRam00000001831a1fd8 >> 1) & 0x44455014);
  uVar5 = (uVar5 & 0x3333333333333330) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          ((uint)((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5) ^
          uVar2);
  uRam00000001831a2238 = uRam00000001831a2238 ^ uVar5 ^ 0xb83dce9723c63440;
  uRam00000001831a1eb0 = (uRam00000001831a1eb0 * -0x5882593076d13367 ^ uRam00000001831a2238) + uVar5
  ;
  uRam00000001831a1ca8 = uRam00000001831a1eb0 ^ uRam00000001831a2238;
  uRam00000001831a1bb0 = 0;
  uRam00000001831a1cb0 = func_0x000187daffe0(uRam00000001831a20f8 + 0xffe7ff836affe1ff ^ 0x43);
  uVar5 = uRam00000001831a1cb0 & 0x7ffffffffff;
  uRam00000001831a1ec0 = uRam00000001831a1cd0 ^ uVar5 ^ 0xb90;
  uRam00000001831a1b38 = (uRam00000001831a1b38 ^ uVar5) + 0xb90 ^ 0xe8fa7ff378cab0da;
  uRam00000001831a1dd0 = (uRam00000001831a1dd0 * 0x78669cf47fdb08c3 ^ uRam00000001831a1b38) + uVar5;
  uRam00000001831a1b40 = uRam00000001831a1dd0 ^ uRam00000001831a1b38;
  uRam00000001831a1e88 = 0xb90;
  uVar5 = (~uRam00000001831a1e70 + 0xb91) *
          ((uVar3 ^ 0x84222325 ^ uRam00000001831a1b40) +
          (ulonglong)((uint)uRam00000001831a1b40 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam00000001831a20b0) + (uVar5 & uRam00000001831a20b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831a1ec0 =
       func_0x000187daffe0((uVar3 ^ 0x842228b5 | uVar5) +
                           (ulonglong)((uint)(uVar3 ^ 0x842228b5) & (uint)uVar5));
  lVar4 = uVar3 - ((uint)uVar6 & 0xb90) * 2;
  uRam00000001831a22b0 =
       (uRam00000001831a22b0 ^ uRam00000001831a1ec0 * 0x5842d1a7c664eee7) + lVar4 + 0xb90 ^
       0x43f4d3c386d1c85b;
  uRam00000001831a1c10 =
       (uRam00000001831a1c10 * 0x4e0018f23c2f8a89 ^ uRam00000001831a22b0) +
       uRam00000001831a1ec0 * 0x5842d1a7c664eee7;
  uRam00000001831a2260 = uRam00000001831a1c10 ^ uRam00000001831a22b0;
  uRam00000001831a20e0 = lVar4 + 0xb90U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b219,0x438)
      /* POOL[0x1b219,0x438]: two/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187dab624 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dce408 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li$uw; dvh (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 187db0070, runtime 6fffef9c0070) =====

void FUN_187db0070(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000187db00ac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dcffa0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uw; dvi (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 187db0f60, runtime 6fffef9c0f60) =====

void FUN_187db0f60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187db0fdd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dd04e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li$uw; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 187d55560, runtime 6fffef965560) =====

void FUN_187d55560(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b219,0x438)
      /* POOL[0x1b219,0x438]: two/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d5563f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dbcf90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li$uw; toJson ()Lcom/google/gson/JsonObject; (handler @ image 187d67fe0, runtime 6fffef977fe0) =====

void FUN_187d67fe0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b219,0x438)
      /* POOL[0x1b219,0x438]: two/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d680bc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc1e00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x7d55642 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d55642(void)

{
  FUN_190ddce00();
  (*_DAT_180dbd998)();
  return;
}


// ----- block @ rva 0x7d5b7cf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d5b7cf(void)

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


// ----- block @ rva 0x7d5e984 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d5e984(void)

{
  FUN_190dd72e0();
  (*_DAT_180dbdd88)();
  return;
}


// ----- block @ rva 0x7d5ea3d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d5ea3d(void)

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


// ----- block @ rva 0x7d63e72 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d63e72(void)

{
  FUN_190ddfc90();
  (*_DAT_180dbe6a8)();
  return;
}


// ----- block @ rva 0x7d6776d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d6776d(void)

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


// ----- block @ rva 0x7d678f6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d678f6(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180dbe1d8)();
  return;
}


// ----- block @ rva 0x7d67a22 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d67a22(void)

{
  FUN_190dd72e0();
  (*_DAT_180dbdf28)();
  return;
}


// ----- block @ rva 0x7d67b1c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d67b1c(void)

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


// ----- block @ rva 0x7d67e82 -----

void FUN_187d67e82(void)

{
  return;
}


// ----- block @ rva 0x7d67eee -----

void FUN_187d67eee(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d680bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d680bf(void)

{
  FUN_190ddce00();
  (*_DAT_180dc3498)();
  return;
}


// ----- block @ rva 0x7d6e2a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d6e2a2(void)

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


// ----- block @ rva 0x7d6e558 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d6e558(void)

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


// ----- block @ rva 0x7d72e93 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d72e93(void)

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


// ----- block @ rva 0x7d76a94 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d76a94(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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


// ----- block @ rva 0x7d76bcb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d76bcb(void)

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


// ----- block @ rva 0x7d7aad9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d7aad9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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


// ----- block @ rva 0x7d7ad8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d7ad8d(void)

{
  FUN_190ddfc90();
  (*_DAT_180dc25d8)();
  return;
}


// ----- block @ rva 0x7d7b35f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d7b35f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dc2bd8)();
  return;
}


// ----- block @ rva 0x7d7b39e -----

void FUN_187d7b39e(void)

{
  return;
}


// ----- block @ rva 0x7d7b40a -----

void FUN_187d7b40a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d7b60f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d7b60f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
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


// ----- block @ rva 0x7d7b791 -----

void FUN_187d7b791(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x7d7bb43 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d7bb43(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000050;
  
  uStack0000000000000050 = 0xd;
  FUN_190ddfc90();
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


// ----- block @ rva 0x7d7dd1a -----

void thunk_FUN_187d7b791(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x7d7e62f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d7e62f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
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


// ----- block @ rva 0x7d7fe5e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d7fe5e(void)

{
  ulonglong uVar1;
  uint unaff_EBP;
  longlong *unaff_RSI;
  ulonglong uVar2;
  uint unaff_R15D;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint unaff_XMM10_Da;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 in_stack_00000090;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  auVar3._4_4_ = 0;
  auVar3._0_4_ = unaff_R15D ^ 0x84222325;
  auVar3._8_4_ = unaff_EBP;
  auVar3._12_4_ = 0;
  auVar4 = pshufb(auVar3 ^ _DAT_180dc82f0,_DAT_1800170c0);
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar2 + _DAT_1831a0780;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_1831a0618 ^ uVar2;
  }
  _DAT_1831a06e0 = func_0x000187d81460(SUB161(auVar3 ^ _DAT_180dc82f0,5) ^ uVar1);
  uVar1 = _DAT_1831a06e0 ^ unaff_R15D;
  uVar5 = unaff_R15D & unaff_EBP;
  uVar6 = unaff_R15D | unaff_EBP;
  uVar8 = unaff_R15D ^ unaff_EBP;
  uVar7 = unaff_EBP ^ unaff_XMM10_Da;
  uVar2 = ((ulonglong)uVar7 * (ulonglong)_DAT_180dc83b0 + _DAT_180dc83c0 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_180dc83a0 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_180dc8390 << 0x20) +
          (ulonglong)uVar8 * (ulonglong)_DAT_180dc8380 +
          ((ulonglong)uVar6 * (ulonglong)_DAT_180dc8370 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_180dc8360 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180dc8350 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180dc8340 +
          ((ulonglong)unaff_EBP * (ulonglong)_DAT_180dc8330 << 0x20) +
          (ulonglong)unaff_EBP * (ulonglong)_DAT_180dc8320 +
          ((ulonglong)unaff_R15D * (ulonglong)_DAT_180dc8310 << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_180dc8300 +
          (-(((ulonglong)uVar7 * (ulonglong)_DAT_180dc84a0 + _DAT_180dc84b0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_180dc8490) -
          (((ulonglong)uVar8 * (ulonglong)_DAT_180dc8480 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180dc8470 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_180dc8460 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_180dc8450 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180dc8440 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180dc8430 +
          ((ulonglong)unaff_EBP * (ulonglong)_DAT_180dc8420 << 0x20) +
          (ulonglong)unaff_EBP * (ulonglong)_DAT_180dc8410 +
          ((ulonglong)unaff_R15D * (ulonglong)_DAT_180dc8400 << 0x20) +
          (ulonglong)unaff_R15D * (ulonglong)_DAT_180dc83f0)) + 0x9b5913329ee83479;
  _DAT_1831a03b8 = _DAT_1831a0740 ^ uVar1 ^ uVar2;
  _DAT_1831a03a8 = (_DAT_1831a03a8 ^ uVar1) + uVar2 ^ 0xe6304706ccd48dd7;
  _DAT_1831a0358 = (_DAT_1831a0358 * -0x43e174df34dc481b ^ _DAT_1831a03a8) + uVar1;
  _DAT_1831a05b8 = _DAT_1831a0358 ^ _DAT_1831a03a8;
  _DAT_1831a0670 = uVar2 & 0xffffffff;
  switch((int)uVar2 < in_stack_00000090._4_4_) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d80d4c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d80d4c(void)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  uint unaff_R15D;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint unaff_XMM10_Da;
  
  auVar4._8_8_ = _UNK_180062bf8;
  auVar4._0_8_ = (ulonglong)unaff_R15D ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_180dc7f90,_DAT_1800170c0);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_1831a0668;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_1831a0578 ^ uVar3;
  }
  _DAT_1831a07e8 = func_0x000187d81460(SUB161(auVar4 ^ _DAT_180dc7f90,5) ^ uVar2);
  uVar2 = _DAT_1831a07e8 ^ unaff_R15D;
  uVar6 = unaff_R15D ^ unaff_XMM10_Da;
  _DAT_1831a0828 =
       ((((ulonglong)(unaff_R15D | _DAT_18001a990) * (ulonglong)_DAT_180dc7fd0 << 0x20) +
         (ulonglong)(unaff_R15D | _DAT_18001a990) * (ulonglong)_DAT_180dc7fc0 +
         ((ulonglong)(unaff_R15D & _DAT_18001a990) * (ulonglong)_DAT_180dc7fd0 << 0x20 |
         (ulonglong)(unaff_R15D & _DAT_18001a990) * (ulonglong)_DAT_180dc7fc0) +
         ((ulonglong)unaff_R15D * (ulonglong)_DAT_180dc7fb0 << 0x20) +
         (ulonglong)unaff_R15D * (ulonglong)_DAT_180dc7fa0 +
        ((ulonglong)uVar6 * (ulonglong)_DAT_180dc7ff0 + _DAT_180dc8000 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_180dc7fe0) -
       (((ulonglong)uVar6 * (ulonglong)_DAT_180dc8040 + _DAT_180dc8050 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_180dc8030 +
       ((ulonglong)unaff_R15D * (ulonglong)_DAT_180dc8040 << 0x20) +
       (ulonglong)unaff_R15D * (ulonglong)_DAT_180dc8030)) + 0x29ddd193d4dfc06c;
  _DAT_1831a0388 = _DAT_1831a0478 ^ uVar2 ^ _DAT_1831a0828;
  _DAT_1831a0358 = (_DAT_1831a0358 ^ uVar2) + _DAT_1831a0828 ^ 0x66c3fa1a44f2c31e;
  _DAT_1831a0650 = (_DAT_1831a0650 * 0x5396e5c3558c3f0f ^ _DAT_1831a0358) + uVar2;
  _DAT_1831a0628 = _DAT_1831a0650 ^ _DAT_1831a0358;
  _DAT_1831a0828 = _DAT_1831a0828 & 0xffffffff;
  FUN_190dd72e0((ulonglong)uVar6 * (ulonglong)_DAT_180dc8030,*_DAT_18301ee50 + 0x2e9,0x12);
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


// ----- block @ rva 0x7d80de9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d80de9(void)

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


// ----- block @ rva 0x7d80ea5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d80ea5(void)

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


// ----- block @ rva 0x7d8109a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d8109a(void)

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


// ----- block @ rva 0x7d81279 -----

void FUN_187d81279(void)

{
  return;
}


// ----- block @ rva 0x7d81518 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81518(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7d81579 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d81579(void)

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


// ----- block @ rva 0x7d81591 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81591(void)

{
  FUN_190dd72e0();
  (*_DAT_180dc8638)();
  return;
}


// ----- block @ rva 0x7d815b9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d815b9(void)

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


// ----- block @ rva 0x7d815dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d815dd(void)

{
  FUN_190dd9df0();
  (*_DAT_180dc8688)();
  return;
}


// ----- block @ rva 0x7d81610 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d81610(void)

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


// ----- block @ rva 0x7d8165e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d8165e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180dc8658)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7d8166e -----

void FUN_187d8166e(void)

{
  return;
}


// ----- block @ rva 0x7d8167b -----

void FUN_187d8167b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d81728 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81728(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7d81764 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81764(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dc8798)();
  return;
}


// ----- block @ rva 0x7d817a1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d817a1(void)

{
  FUN_190dd72e0();
  (*_DAT_180dc8788)();
  return;
}


// ----- block @ rva 0x7d817ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d817ed(void)

{
  FUN_190dd9df0();
  (*_DAT_180dc8748)();
  return;
}


// ----- block @ rva 0x7d81820 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d81820(void)

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


// ----- block @ rva 0x7d81847 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81847(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dc8718)();
  return;
}


// ----- block @ rva 0x7d8186e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d8186e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180dc8728)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7d8187e -----

void FUN_187d8187e(void)

{
  return;
}


// ----- block @ rva 0x7d8188b -----

void FUN_187d8188b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d81938 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81938(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7d81974 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81974(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dc8848)();
  return;
}


// ----- block @ rva 0x7d81999 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d81999(void)

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


// ----- block @ rva 0x7d819b1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d819b1(void)

{
  FUN_190dd72e0();
  (*_DAT_180dc8858)();
  return;
}


// ----- block @ rva 0x7d819d9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d819d9(void)

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


// ----- block @ rva 0x7d81a30 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d81a30(void)

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


// ----- block @ rva 0x7d81a57 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81a57(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dc8808)();
  return;
}


// ----- block @ rva 0x7d81a7e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81a7e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180dc8878)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7d81a8e -----

void FUN_187d81a8e(void)

{
  return;
}


// ----- block @ rva 0x7d81a9b -----

void FUN_187d81a9b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d81b48 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81b48(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7d81ba9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d81ba9(void)

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


// ----- block @ rva 0x7d81bc1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81bc1(void)

{
  FUN_190dd72e0();
  (*_DAT_180dc88d8)();
  return;
}


// ----- block @ rva 0x7d81be9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d81be9(void)

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


// ----- block @ rva 0x7d81c0d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81c0d(void)

{
  FUN_190dd9df0();
  (*_DAT_180dc88f8)();
  return;
}


// ----- block @ rva 0x7d81c40 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d81c40(void)

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


// ----- block @ rva 0x7d81c67 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81c67(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dc8938)();
  return;
}


// ----- block @ rva 0x7d81c8e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d81c8e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180dc8928)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7d81c9e -----

void FUN_187d81c9e(void)

{
  return;
}


// ----- block @ rva 0x7d81cab -----

void FUN_187d81cab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d81dd6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187d81e0c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187d81dd6(void)

{
  longlong *unaff_R14;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7d81e29 -----

void FUN_187d81e29(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R14;
  
  uVar1 = (**(code **)(unaff_R14 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0x30) = unaff_R14;
                    /* WARNING: Could not recover jumptable at 0x000187d81e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc8b40 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x7d81e64 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187d81ea9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187d81e64(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_R14;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x40) = uVar1;
  (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7d81e92 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187d81ea9 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187d81e92(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7d820e0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d820e0(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  uint unaff_EDI;
  longlong in_R9;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  
  *(undefined8 *)(unaff_RBP + 0x60) = in_RAX;
  *(uint *)(unaff_RBP + 0x50) = unaff_EDI;
  uVar1 = (_DAT_1831a0c68 ^ unaff_XMM6_Qa) + _DAT_1831a0bc0 + 0x8422236b;
  uVar2 = (_DAT_1831a0bc0 ^ unaff_XMM6_Qb) + _DAT_1831a0c68 + 0x52;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a0c68 ^ unaff_XMM6_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a0bc0 ^ unaff_XMM6_Qb;
  _DAT_1831a0d38 =
       func_0x000187da8ad0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a0c68 + 0x52) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a0bc0 + 0x8422236b));
  _DAT_1831a0f80 = (_DAT_1831a0f80 ^ _DAT_1831a0d38 ^ 0x4e) + 0x5e ^ 0xa0a576c0caa42113;
  _DAT_1831a0b08 = (_DAT_1831a0b08 * 0xf9b09bf9efb32d1 ^ _DAT_1831a0f80) + (_DAT_1831a0d38 ^ 0x4e);
  _DAT_1831a0d78 = _DAT_1831a0b08 ^ _DAT_1831a0f80;
  _DAT_1831a0c40 = 0x5e;
  _DAT_1831a1050 = func_0x000187da8ad0(_DAT_1831a0b18 ^ 0xffdf0083a30021e1);
  uVar1 = (ulonglong)((uint)_DAT_1831a1050 ^ 0x8f) << 0x33 | _DAT_1831a1050 >> 0xd;
  _DAT_1831a0e68 = (_DAT_1831a0e68 ^ uVar1) + 0x86 ^ 0xd82c0dd23b1a1637;
  _DAT_1831a0f50 = (_DAT_1831a0f50 * 0x3e7b0646c43cff67 ^ _DAT_1831a0e68) + uVar1;
  _DAT_1831a1030 = _DAT_1831a0f50 ^ _DAT_1831a0e68;
  _DAT_1831a0f98 = 0x86;
  uVar1 = (~_DAT_1831a1080 + 0x61) *
          ((_DAT_1831a0d58 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a0d58 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1831a0e60) + (uVar1 & _DAT_1831a0e60);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0cb0 = func_0x000187da8ad0((uVar1 | 0x84222345) + (ulonglong)((uint)uVar1 & 0x84222345))
  ;
  _DAT_1831a0b10 =
       (_DAT_1831a0b10 ^ _DAT_1831a0cb0 & 0x7fffffffffffffff) - 0x60 ^ 0xfea6b8e208a58b65;
  _DAT_1831a0fe0 =
       (_DAT_1831a0fe0 * -0x5d9dc5e51bd8255 ^ _DAT_1831a0b10) +
       (_DAT_1831a0cb0 & 0x7fffffffffffffff);
  _DAT_1831a0968 = _DAT_1831a0fe0 ^ _DAT_1831a0b10;
  _DAT_1831a0bd8 = 0xa0;
  uVar1 = (_DAT_1831a0a98 ^ unaff_XMM7_Qa) + _DAT_1831a0f80 + 0x842223b5;
  uVar2 = (_DAT_1831a0f80 ^ unaff_XMM7_Qb) + _DAT_1831a0a98 + 0xa0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a0a98 ^ unaff_XMM7_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a0f80 ^ unaff_XMM7_Qb;
  _DAT_1831a0930 =
       func_0x000187da8ad0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a0a98 + 0xa0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a0f80 + 0x842223b5));
  uVar1 = _DAT_1831a0930 << 0x2e | _DAT_1831a0930 >> 0x12;
  _DAT_1831a0c08 = _DAT_1831a0d20 ^ uVar1 ^ 0x130;
  _DAT_1831a0ee8 = (_DAT_1831a0ee8 ^ uVar1) + 0x130 ^ 0x2f254cc35dda442f;
  _DAT_1831a0ff0 = (_DAT_1831a0ff0 * -0x2ed941e8e47db841 ^ _DAT_1831a0ee8) + uVar1;
  _DAT_1831a0cd0 = _DAT_1831a0ff0 ^ _DAT_1831a0ee8;
  _DAT_1831a0fc8 = 0x30;
  uVar1 = (~_DAT_1831a0d98 + 0x2e) *
          ((_DAT_1831a0ce0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a0ce0 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1831a0d80) + (uVar1 & _DAT_1831a0d80);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0b40 = func_0x000187da8ad0((uVar1 | 0x84222308) + (ulonglong)((uint)uVar1 & 0x84222308))
  ;
  _DAT_1831a0b38 = (_DAT_1831a0b38 ^ _DAT_1831a0b40) - 0x2d ^ 0xe97706c99badf9a3;
  _DAT_1831a10d0 = (_DAT_1831a10d0 * 0x34923fd9aafaade5 ^ _DAT_1831a0b38) + _DAT_1831a0b40;
  _DAT_1831a0f90 = _DAT_1831a10d0 ^ _DAT_1831a0b38;
  _DAT_1831a0ad0 = 0xd3;
  _DAT_1831a1000 = func_0x000187da8ad0(_DAT_1831a0ee0 ^ 0xffdd00843800210c);
  uVar1 = _DAT_1831a1000 ^ 0x30;
  uVar2 = uVar1 - (uVar1 >> 1 & unaff_R13);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & unaff_R12) * 0x101010101010101 >> 0x38) << 5 ^ uVar1;
  _DAT_1831a0cd0 = _DAT_1831a0c30 ^ uVar1 ^ 0x5d;
  _DAT_1831a0dd8 = (_DAT_1831a0dd8 ^ uVar1) + 0x5d ^ 0xdc9366ce338879ca;
  _DAT_1831a10d0 = (_DAT_1831a10d0 * 0x44590065a516ba7 ^ _DAT_1831a0dd8) + uVar1;
  _DAT_1831a09a0 = _DAT_1831a10d0 ^ _DAT_1831a0dd8;
  _DAT_1831a0ca0 = 0x5d;
  uVar1 = (_DAT_1831a0ed8 ^ unaff_XMM8_Qa) + _DAT_1831a0c98 + unaff_RSI;
  uVar2 = (_DAT_1831a0c98 ^ unaff_XMM8_Qb) + _DAT_1831a0ed8 + 0x18;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a0ed8 ^ unaff_XMM8_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a0c98 ^ unaff_XMM8_Qb;
  _DAT_1831a0a38 =
       func_0x000187da8ad0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a0ed8 + 0x18) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a0c98 + unaff_RSI));
  uVar1 = (_DAT_1831a0a38 & 0x7fffffffffff) >> 1 | _DAT_1831a0a38 & 0x7fffffffffff;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & unaff_R13);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_1831a0a38 & 0x7fffffffffff;
  _DAT_1831a0a40 = _DAT_1831a0908 ^ uVar1 ^ 0x48;
  _DAT_1831a0bb8 = (_DAT_1831a0bb8 ^ uVar1) + 0x48 ^ 0x9eae41584d90b10;
  _DAT_1831a0fa8 = (_DAT_1831a0fa8 * 0x3392adf235d3c64f ^ _DAT_1831a0bb8) + uVar1;
  _DAT_1831a0f68 = 0x48;
  uVar1 = (~_DAT_1831a1038 + 0xe9) *
          ((_DAT_1831a0aa8 ^ 0x8422236d) + (ulonglong)((uint)_DAT_1831a0aa8 & 0x8422236d) * 2);
  uVar1 = (uVar1 | _DAT_1831a0b30) + (uVar1 & _DAT_1831a0b30);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a1068 = func_0x000187da8ad0((uVar1 | 0x84222385) + (ulonglong)((uint)uVar1 & 0x84222385))
  ;
  uVar1 = _DAT_1831a1068 ^ 0xe8;
  _DAT_1831a0ff8 = _DAT_1831a0e08 ^ uVar1 ^ 0x130;
  _DAT_1831a0ec0 = (_DAT_1831a0ec0 ^ uVar1) + 0x130 ^ 0x9d8f5caf1a54484e;
  _DAT_1831a0fc8 = (_DAT_1831a0fc8 * 0x715fbb37379f1379 ^ _DAT_1831a0ec0) + uVar1;
  _DAT_1831a0bf8 = _DAT_1831a0fc8 ^ _DAT_1831a0ec0;
  _DAT_1831a0c18 = 0x30;
  uVar1 = (~_DAT_1831a0f48 + 0xd) *
          ((_DAT_1831a0910 ^ 0x842223fd) + (ulonglong)((uint)_DAT_1831a0910 & 0x842223fd) * 2);
  uVar1 = (uVar1 | _DAT_1831a0f40) + (uVar1 & _DAT_1831a0f40);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0fb8 = func_0x000187da8ad0((uVar1 | 0x842223f1) + (ulonglong)((uint)uVar1 & 0x842223f1))
  ;
  uVar1 = _DAT_1831a0fb8 ^ 0xdc;
  uVar2 = uVar1 - (uVar1 >> 1 & unaff_R13);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & unaff_R12) * 0x101010101010101 >> 0x38) << 5 ^ uVar1;
  _DAT_1831a0e58 = _DAT_1831a09a8 ^ uVar1 ^ 0xe4;
  _DAT_1831a0cd0 = (_DAT_1831a0cd0 ^ uVar1) + 0xe4 ^ 0x7450144a1f8e0561;
  _DAT_1831a1018 = (_DAT_1831a1018 * 0x456fbd3d1ec62a3 ^ _DAT_1831a0cd0) + uVar1;
  _DAT_1831a09e8 = _DAT_1831a1018 ^ _DAT_1831a0cd0;
  _DAT_1831a1038 = 0xe4;
  _DAT_1831a0a08 = func_0x000187da8ad0(_DAT_1831a0c20 ^ 0x22ff7c22ffdd46);
  _DAT_1831a0d70 = (_DAT_1831a0a08 ^ 0xcb10) << 3 | _DAT_1831a0a08 >> 0x3d;
  _DAT_1831a0f48 = _DAT_1831a0f48 ^ _DAT_1831a0d70 ^ 0xd69f2ab871118030;
  _DAT_1831a0d10 = (_DAT_1831a0d10 * 0x71d1c1e5e9343523 ^ _DAT_1831a0f48) + _DAT_1831a0d70;
  _DAT_1831a0dc0 = _DAT_1831a0d10 ^ _DAT_1831a0f48;
  _DAT_1831a0df0 = 0;
  uVar1 = ((_DAT_1831a0e40 ^ unaff_RSI) + (ulonglong)((uint)_DAT_1831a0e40 & 0x84222315) * 2) *
          -_DAT_1831a0b48;
  uVar1 = (uVar1 | _DAT_1831a0ee8) + (uVar1 & _DAT_1831a0ee8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0e20 = func_0x000187da8ad0((uVar1 | unaff_RSI) + (ulonglong)((uint)uVar1 & 0x84222315));
  uVar1 = (ulonglong)(~((int)_DAT_1831a0e20 * 0x68939c85) & 0x30);
  _DAT_1831a0c18 = _DAT_1831a0a38 ^ uVar1 ^ 0x30;
  _DAT_1831a0d18 = (_DAT_1831a0d18 ^ uVar1) + 0x30 ^ 0x60099ab65b26b8c1;
  _DAT_1831a0e28 = (_DAT_1831a0e28 * 0x2758249fcbf0e8a3 ^ _DAT_1831a0d18) + uVar1;
  _DAT_1831a0bf8 = _DAT_1831a0e28 ^ _DAT_1831a0d18;
  _DAT_1831a09b8 = 0x30;
  uVar1 = (~_DAT_1831a0d80 + 0xa2) *
          ((_DAT_1831a0e40 ^ 0x8422237b) + (ulonglong)((uint)_DAT_1831a0e40 & 0x8422237b) * 2);
  uVar1 = (uVar1 | _DAT_1831a0a60) + (uVar1 & _DAT_1831a0a60);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0f18 = func_0x000187da8ad0((uVar1 | 0x842223da) + (ulonglong)((uint)uVar1 & 0x842223da))
  ;
  uVar1 = (_DAT_1831a0f18 ^ 0x5e) << 0x15 | _DAT_1831a0f18 >> 0x2b;
  _DAT_1831a0c50 = _DAT_1831a0c50 ^ uVar1 ^ 0x7a8771aeacfef096;
  _DAT_1831a0c18 = (_DAT_1831a0c18 * -0x405ca13fdcd9b7d5 ^ _DAT_1831a0c50) + uVar1;
  _DAT_1831a0eb0 = _DAT_1831a0c18 ^ _DAT_1831a0c50;
  _DAT_1831a0ce0 = 0;
  uVar1 = (_DAT_1831a0970 ^ unaff_XMM9_Qa) + _DAT_1831a0e10 + 0x8422236b;
  uVar2 = (_DAT_1831a0e10 ^ unaff_XMM9_Qb) + _DAT_1831a0970 + 0x4e;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a0970 ^ unaff_XMM9_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a0e10 ^ unaff_XMM9_Qb;
  _DAT_1831a0fa0 =
       func_0x000187da8ad0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a0970 + 0x4e) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a0e10 + 0x8422236b));
  uVar1 = (_DAT_1831a0fa0 ^ 0x4e) << 0x10 | _DAT_1831a0fa0 >> 0x30;
  _DAT_1831a0988 = _DAT_1831a0988 ^ uVar1 ^ 0x64f90a3e60d1d56e;
  _DAT_1831a0ed0 = (_DAT_1831a0ed0 * 0x57cf32451fb1acb9 ^ _DAT_1831a0988) + uVar1;
  _DAT_1831a0f90 = _DAT_1831a0ed0 ^ _DAT_1831a0988;
  _DAT_1831a0f58 = 0;
  *(byte *)(unaff_RBP + -0x51 + *(longlong *)(unaff_RBP + 0x60)) =
       (char)unaff_EDI + (char)(uint)((ulonglong)unaff_EDI * in_R9 >> 0x23) * -10 | 0x30;
  switch(unaff_EDI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d82e4c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d82e4c(void)

{
  undefined1 auVar1 [16];
  longlong unaff_RBP;
  ulonglong uVar2;
  ulonglong unaff_R15;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar7;
  undefined1 auVar6 [16];
  uint uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar14;
  ulonglong uVar15;
  
  _DAT_1831a1008 = func_0x000187da8ad0(_DAT_1831a1000 ^ 0x7b428273023b5a5c);
  _DAT_1831a0ad0 = (_DAT_1831a0ad0 ^ _DAT_1831a1008) + 0xd583458d098fe127 ^ 0xe1214ab8b586ac70;
  _DAT_1831a0a88 = (_DAT_1831a0a88 * -0x4b90c35f790e522f ^ _DAT_1831a0ad0) + _DAT_1831a1008;
  _DAT_1831a0900 = _DAT_1831a0a88 ^ _DAT_1831a0ad0;
  _DAT_1831a0ac0 = 0xd583458d098fe127;
  uVar5 = (_DAT_1831a0ad8 ^ _DAT_180dc99a0) + _DAT_1831a0be8 + 0x84222325;
  uVar7 = (_DAT_1831a0be8 ^ _UNK_180dc99a8) + _DAT_1831a0ad8 + 0x50c5911931f7d990;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0ad8 ^ _DAT_180dc99a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a0be8 ^ _UNK_180dc99a8;
  _DAT_1831a0f60 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a0ad8 + 0x50c5911931f7d990) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0be8 + 0x84222325));
  _DAT_1831a0f50 =
       (_DAT_1831a0f50 ^ _DAT_1831a0f60 * 0x3853a29a45bc0fed) + 0xaf3a6ee6ce082670 ^
       0xfe42eac95e0e09a2;
  _DAT_1831a0960 =
       (_DAT_1831a0960 * 0x6ee57feeeb71a957 ^ _DAT_1831a0f50) + _DAT_1831a0f60 * 0x3853a29a45bc0fed;
  _DAT_1831a0ba0 = _DAT_1831a0960 ^ _DAT_1831a0f50;
  _DAT_1831a0c30 = 0xaf3a6ee6ce082670;
  uVar5 = (~_DAT_1831a0ac8 + 0x50c5911931f7d991) *
          ((_DAT_1831a0e98 ^ 0xffffffff7bdddcdb) + (_DAT_1831a0e98 & 0x7fffffff7bdddcdb) * 2);
  uVar5 = (uVar5 | _DAT_1831a0f28) + (uVar5 & _DAT_1831a0f28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0eb0 = func_0x000187da8ad0((uVar5 | 0xaf3a6ee64a2a054b) + (uVar5 & 0xaf3a6ee64a2a054b));
  uVar5 = _DAT_1831a0eb0 & 0x3ffffffff;
  _DAT_1831a0bc8 = _DAT_1831a0978 ^ uVar5 ^ 0x50c5911931f7d98e;
  _DAT_1831a0ae8 = (_DAT_1831a0ae8 ^ uVar5) + 0x50c5911931f7d98e ^ 0x4531f2a8621eedf6;
  _DAT_1831a0f40 = (_DAT_1831a0f40 * 0x6a742faf8c48b6e5 ^ _DAT_1831a0ae8) + uVar5;
  _DAT_1831a0b70 = _DAT_1831a0f40 ^ _DAT_1831a0ae8;
  _DAT_1831a0c50 = 0x50c5911931f7d98e;
  uVar5 = (~_DAT_1831a0998 + 0xaf3a6ee6ce082671) *
          ((_DAT_1831a1018 ^ 0x50c59119b5d5faab) + (_DAT_1831a1018 & 0x50c59119b5d5faab) * 2);
  uVar5 = (uVar5 | _DAT_1831a1028) + (uVar5 & _DAT_1831a1028);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0fc8 = func_0x000187da8ad0((uVar5 | 0xffffffff7bdddcdb) + (uVar5 & 0xffffffff7bdddcdb));
  _DAT_1831a09d8 = _DAT_1831a0be0 ^ _DAT_1831a0fc8 ^ 0xfffffffffffffffe;
  _DAT_1831a0ab8 = (_DAT_1831a0ab8 ^ _DAT_1831a0fc8) - 2 ^ 0xb3ca574bee1e1499;
  _DAT_1831a0a88 = (_DAT_1831a0a88 * 0x667fed7ab06bc491 ^ _DAT_1831a0ab8) + _DAT_1831a0fc8;
  _DAT_1831a0f10 = _DAT_1831a0a88 ^ _DAT_1831a0ab8;
  _DAT_1831a0bb8 = 0xfffffffffffffffe;
  _DAT_1831a0d68 = func_0x000187da8ad0(_DAT_1831a0a48 ^ 0x94252a1764de14f1);
  uVar5 = _DAT_1831a0d68 ^ 0xe0a91d6b13c9b17f;
  _DAT_1831a0ef0 = _DAT_1831a10f0 ^ uVar5 ^ 0xe0a91d6b13c9b17d;
  _DAT_1831a0d30 = (_DAT_1831a0d30 ^ uVar5) + 0xe0a91d6b13c9b17d ^ 0x2f585b8a6e371cc2;
  _DAT_1831a0ea8 = (_DAT_1831a0ea8 * -0x7e32ed6ab2b722c1 ^ _DAT_1831a0d30) + uVar5;
  _DAT_1831a1008 = _DAT_1831a0ea8 ^ _DAT_1831a0d30;
  _DAT_1831a0998 = 0xe0a91d6b13c9b17d;
  uVar5 = (~_DAT_1831a0e10 + 0x1f56e294ec364e82) *
          ((_DAT_1831a0ae8 ^ 0xe0a91d6b97eb9258) + (_DAT_1831a0ae8 & 0x60a91d6b97eb9258) * 2);
  uVar5 = (uVar5 | _DAT_1831a0988) + (uVar5 & _DAT_1831a0988);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0af8 = func_0x000187da8ad0((uVar5 | 0xffffffff7bdddcd9) + (uVar5 & 0xffffffff7bdddcd9));
  uVar5 = _DAT_1831a0af8 ^ 0x1f56e294ec364e81;
  _DAT_1831a10e8 = _DAT_1831a0cb8 ^ uVar5 ^ 0xfffffffffffffffe;
  _DAT_1831a0e28 = (_DAT_1831a0e28 ^ uVar5) - 2 ^ 0x122ddce490aaf983;
  _DAT_1831a0a00 = (_DAT_1831a0a00 * -0x6c5b303995a686ff ^ _DAT_1831a0e28) + uVar5;
  _DAT_1831a0cd8 = _DAT_1831a0a00 ^ _DAT_1831a0e28;
  _DAT_1831a0b08 = 0xfffffffffffffffe;
  uVar5 = (_DAT_1831a0aa0 ^ _DAT_180dc99b0) + _DAT_1831a0f10 + 0x84222325;
  uVar7 = (_DAT_1831a0f10 ^ _UNK_180dc99b8) + _DAT_1831a0aa0 + 0x8aba6684f043d010;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0aa0 ^ _DAT_180dc99b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a0f10 ^ _UNK_180dc99b8;
  _DAT_1831a09e0 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a0aa0 + 0x8aba6684f043d010) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0f10 + 0x84222325));
  _DAT_1831a0b78 = (_DAT_1831a0b78 ^ _DAT_1831a09e0) + 0x7545997b0fbc2ff0 ^ 0xece054c294e8350b;
  _DAT_1831a09c8 = (_DAT_1831a09c8 * -0x73db4bcfa06692a1 ^ _DAT_1831a0b78) + _DAT_1831a09e0;
  _DAT_1831a09e8 = _DAT_1831a09c8 ^ _DAT_1831a0b78;
  _DAT_1831a0da8 = 0x7545997b0fbc2ff0;
  uVar5 = (_DAT_1831a10f0 ^ _DAT_180dc99c0) + (_DAT_1831a0b80 - 0x84222325);
  uVar7 = (_DAT_1831a0b80 ^ _UNK_180dc99c8) + _DAT_1831a10f0 + 0x8aba6684f043d010;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a10f0 ^ _DAT_180dc99c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a0b80 ^ _UNK_180dc99c8;
  _DAT_1831a0bf8 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a10f0 + 0x8aba6684f043d010) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0b80 - 0x84222325));
  uVar5 = _DAT_1831a0bf8 ^ 0xfffffffffffffffe;
  _DAT_1831a0928 = _DAT_1831a0a50 ^ uVar5 ^ 0x8aba6684f043d00e;
  _DAT_1831a0f48 = (_DAT_1831a0f48 ^ uVar5) + 0x8aba6684f043d00e ^ 0xbf2f648fff68507a;
  _DAT_1831a0c50 = (_DAT_1831a0c50 * -0x14ee28a8f2e92a43 ^ _DAT_1831a0f48) + uVar5;
  _DAT_1831a0aa0 = _DAT_1831a0c50 ^ _DAT_1831a0f48;
  _DAT_1831a1028 = 0x8aba6684f043d00e;
  uVar5 = (~_DAT_1831a0a98 + 0x7545997b0fbc2ff1) *
          ((_DAT_1831a0a38 ^ 0x8aba66847461f32b) + (_DAT_1831a0a38 & 0xaba66847461f32b) * 2);
  uVar5 = (uVar5 | _DAT_1831a0d98) + (uVar5 & _DAT_1831a0d98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0b48 = func_0x000187da8ad0((uVar5 | 0xffffffff7bdddcdb) + (uVar5 & 0xffffffff7bdddcdb));
  _DAT_1831a0bb8 = (_DAT_1831a09f0 ^ _DAT_1831a0b48) - 2 ^ 0x2e8b7eceee466ecd;
  _DAT_1831a0ba8 = (_DAT_1831a0ba8 * -0x6a6486c4310752b1 ^ _DAT_1831a0bb8) + _DAT_1831a0b48;
  _DAT_1831a0bb8 = _DAT_1831a0ba8 ^ _DAT_1831a0bb8;
  _DAT_1831a09f0 = 0xfffffffffffffffe;
  uVar5 = (~_DAT_1831a0d00 + 0xd583458d098fe128) *
          ((_DAT_1831a0c48 ^ 0x731ff1fffbd8d892) + (_DAT_1831a0c48 & 0x731ff1fffbd8d892) * 2);
  uVar5 = (uVar5 | _DAT_1831a0a68) + (uVar5 & _DAT_1831a0a68);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0b90 = func_0x000187da8ad0((uVar5 | 0xa69cb472f25739b5) + (uVar5 & 0xa69cb472f25739b5));
  uVar5 = _DAT_1831a0b90 ^ 0xd583458d098fe127;
  _DAT_1831a0c30 = _DAT_1831a0f98 ^ uVar5 ^ 0x48a3378c898adcde;
  _DAT_1831a0da0 = (_DAT_1831a0da0 ^ uVar5) + 0x48a3378c898adcde ^ 0x56ed8954781e5961;
  _DAT_1831a0ef0 = (_DAT_1831a0ef0 * -0x1292ee97ee0f7329 ^ _DAT_1831a0da0) + uVar5;
  _DAT_1831a0af8 = _DAT_1831a0ef0 ^ _DAT_1831a0da0;
  _DAT_1831a0ea8 = 0x48a3378c898adcde;
  _DAT_1831a09f8 = func_0x000187da8ad0(_DAT_1831a0af0 + 0xee369351946baf99U ^ 0x59);
  uVar7 = _DAT_1831a09f8 ^ 0xf79ff5ff7ffffbb7;
  uVar5 = uVar7 >> 1 | uVar7;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar7) & 0x1ffffffffffff;
  _DAT_1831a0f68 = (_DAT_1831a0f68 ^ uVar5) + 0xa69cb47276751a90 ^ 0x68706c2769588bba;
  _DAT_1831a0fa8 = (_DAT_1831a0fa8 * 0x8d2b1b0324c4a0f ^ _DAT_1831a0f68) + uVar5;
  _DAT_1831a0920 = _DAT_1831a0fa8 ^ _DAT_1831a0f68;
  _DAT_1831a0e08 = -0x59634b8d898ae570;
  uVar5 = (_DAT_1831a1020 ^ _DAT_180dc99d0) + _DAT_1831a1040 + 0x731ff1fffbd8d892;
  uVar7 = (_DAT_1831a1040 ^ _UNK_180dc99d8) + _DAT_1831a1020 + 0xd583458d098fe127;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a1020 ^ _DAT_180dc99d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a1040 ^ _UNK_180dc99d8;
  _DAT_1831a09b8 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a1020 + 0xd583458d098fe127) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a1040 + 0x731ff1fffbd8d892));
  uVar5 = _DAT_1831a09b8 & 0x7ffffffffffffff ^ 0xd583458d098fe127;
  _DAT_1831a0e78 = (_DAT_1831a0e78 ^ uVar5) + 0x5103418d098ae127 ^ 0xb51e3ad2ce323a44;
  _DAT_1831a09d8 = (_DAT_1831a09d8 * -0x740a0d1ff5924007 ^ _DAT_1831a0e78) + uVar5;
  _DAT_1831a0d30 = _DAT_1831a09d8 ^ _DAT_1831a0e78;
  _DAT_1831a0dc8 = 0x5103418d098ae127;
  uVar5 = (~_DAT_1831a0da0 + 0x48a3378c898adcdf) *
          ((_DAT_1831a0dc0 ^ 0x48a3378c0da8fffb) + (_DAT_1831a0dc0 & 0x48a3378c0da8fffb) * 2);
  uVar5 = (uVar5 | _DAT_1831a0968) + (uVar5 & _DAT_1831a0968);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0a20 = func_0x000187da8ad0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1831a0b70 = _DAT_1831a0a20 ^ 0x8762e28879e65084;
  _DAT_1831a1070 = _DAT_1831a1070 ^ _DAT_1831a0b70 ^ 0xa578b0b305eca6f1;
  _DAT_1831a0da0 = (_DAT_1831a0da0 * -0x25b1a25c03b545f ^ _DAT_1831a1070) + _DAT_1831a0b70;
  _DAT_1831a0ad0 = _DAT_1831a0da0 ^ _DAT_1831a1070;
  _DAT_1831a1078 = _DAT_1831a0c38;
  _DAT_1831a1028 = 0;
  uVar5 = (_DAT_1831a0de8 ^ 0xffffffff7bdddcdb) + (_DAT_1831a09c0 - 0x84222325);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0de8 ^ 0xffffffff7bdddcdb;
  uVar7 = ((_DAT_1831a09c0 + _DAT_1831a0de8) * 0x2000 | _DAT_1831a09c0 + _DAT_1831a0de8 >> 0x33) ^
          _DAT_1831a09c0;
  _DAT_1831a0d98 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_1831a0de8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a09c0 - 0x84222325));
  uVar5 = _DAT_1831a0d98 ^ 0xfffffffffffffffe;
  _DAT_1831a0b58 = _DAT_1831a0f50 ^ uVar5 ^ 0xfffffffffffffffe;
  _DAT_1831a0960 = (_DAT_1831a0960 ^ uVar5) - 2 ^ 0xdb89af4c2d81e152;
  _DAT_1831a0938 = (_DAT_1831a0938 * -0x1422dd28e5e8bb37 ^ _DAT_1831a0960) + uVar5;
  _DAT_1831a0e00 = _DAT_1831a0938 ^ _DAT_1831a0960;
  _DAT_1831a0e68 = 0xfffffffffffffffe;
  uVar5 = ~_DAT_1831a0af8 *
          ((_DAT_1831a0bb0 ^ 0x731ff1fffbd8d892) + (_DAT_1831a0bb0 & 0x731ff1fffbd8d892) * 2);
  uVar5 = (uVar5 | _DAT_1831a0ba8) + (uVar5 & _DAT_1831a0ba8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a1018 = func_0x000187da8ad0((uVar5 | 0x8ce00e000427276d) + (uVar5 & 0x8ce00e000427276d));
  _DAT_1831a0e78 =
       (_DAT_1831a0e78 ^ ~_DAT_1831a1018 & 0x11ff1ff7ffafbb7) + 0x8ce00e0080050448 ^
       0x5b90421bd9ab3850;
  _DAT_1831a0d10 =
       (_DAT_1831a0d10 * -0x5106fe1a883f9f51 ^ _DAT_1831a0e78) +
       (~_DAT_1831a1018 & 0x11ff1ff7ffafbb7);
  _DAT_1831a0c78 = _DAT_1831a0d10 ^ _DAT_1831a0e78;
  _DAT_1831a0a78 = 0x8ce00e0080050448;
  uVar5 = (_DAT_1831a0d48 ^ 0xffffffff7bdddcdb) + (_DAT_1831a0ea0 - 0x84222325);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0d48 ^ 0xffffffff7bdddcdb;
  uVar7 = ((_DAT_1831a0ea0 + _DAT_1831a0d48) * 0x2000 | _DAT_1831a0ea0 + _DAT_1831a0d48 >> 0x33) ^
          _DAT_1831a0ea0;
  _DAT_1831a0b30 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_1831a0d48 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0ea0 - 0x84222325));
  _DAT_1831a1008 = _DAT_1831a1080 ^ _DAT_1831a0b30 ^ 0xfffffffffffffffe;
  _DAT_1831a0ce0 = (_DAT_1831a0ce0 ^ _DAT_1831a0b30) - 2 ^ 0xde769604e773c409;
  _DAT_1831a0e70 = (_DAT_1831a0e70 * -0x20fc39ac9bea7b2b ^ _DAT_1831a0ce0) + _DAT_1831a0b30;
  _DAT_1831a1000 = _DAT_1831a0e70 ^ _DAT_1831a0ce0;
  _DAT_1831a0b90 = 0xfffffffffffffffe;
  uVar5 = ((_DAT_1831a0b38 ^ 0xffffffff7bdddcdb) + (_DAT_1831a0b38 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_1831a0fb0;
  uVar5 = (uVar5 | _DAT_1831a0ab0) + (uVar5 & _DAT_1831a0ab0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0dc8 = func_0x000187da8ad0((uVar5 | 0xffffffff7bdddcdb) + (uVar5 & 0xffffffff7bdddcdb));
  uVar5 = _DAT_1831a0dc8 ^ 0xfffffffffffffffe;
  _DAT_1831a0db8 = _DAT_1831a0ae8 ^ uVar5 ^ 0xfffffffffffffffe;
  _DAT_1831a0e68 = (_DAT_1831a0e68 ^ uVar5) - 2 ^ 0x78c13e600250ef15;
  _DAT_1831a0ad0 = (_DAT_1831a0ad0 * 0x3339ec257fb201bb ^ _DAT_1831a0e68) + uVar5;
  _DAT_1831a0f70 = _DAT_1831a0ad0 ^ _DAT_1831a0e68;
  _DAT_1831a0d48 = _DAT_1831a0de8 ^ 0xfffffffffffffffe;
  _DAT_1831a0c10 = 0xfffffffffffffffe;
  uVar5 = (~_DAT_1831a09d8 - 1) *
          ((unaff_R15 ^ 0x84222325 ^ _DAT_1831a0e50) +
          ((unaff_R15 ^ 0x84222325) & _DAT_1831a0e50) * 2);
  uVar5 = (uVar5 | _DAT_1831a0ab0) + (uVar5 & _DAT_1831a0ab0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0bc0 =
       func_0x000187da8ad0((unaff_R15 ^ 0xffffffff7bdddcdb | uVar5) +
                           (uVar5 & (unaff_R15 ^ 0xffffffff7bdddcdb)));
  auVar1 = _DAT_1800b8c60;
  uVar3 = (uint)(unaff_R15 >> 0x20);
  auVar12._8_4_ = (uint)unaff_R15;
  auVar12._0_8_ = unaff_R15;
  auVar12._12_4_ = uVar3;
  auVar9 = _DAT_1800b8c60 ^ auVar12;
  auVar6._8_4_ = 0xffffffff;
  auVar6._0_8_ = 0xffffffffffffffff;
  auVar6._12_4_ = 0xffffffff;
  uVar5 = (ulonglong)_DAT_180dc99f0;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = auVar12;
  auVar13 = auVar12 & auVar1;
  uVar10 = (uint)unaff_R15 | auVar1._0_4_;
  uVar11 = auVar13._0_4_;
  uVar15 = auVar13._0_8_;
  uVar8 = auVar9._0_4_;
  uVar2 = auVar9._0_8_;
  uVar4 = SUB164(auVar6 ^ auVar12,0);
  uVar14 = SUB168(auVar6 ^ auVar12,0);
  uVar7 = (_DAT_1831a0bc0 & 0xfffffffff) * 0x1dbfb5f3e5c53b13;
  uVar2 = (((ulonglong)_DAT_180dc9a20 * (ulonglong)uVar4 +
            ((ulonglong)_DAT_180dc9a80 * (ulonglong)uVar4 +
             (uVar14 >> 0x20) * (ulonglong)_DAT_180dc9a20 << 0x20) +
           (ulonglong)_DAT_180dc9a60 * (ulonglong)uVar8 +
           ((ulonglong)_DAT_180dc9a70 * (ulonglong)uVar8 +
            (uVar2 >> 0x20) * (ulonglong)_DAT_180dc9a60 << 0x20) +
           ((ulonglong)uVar10 * (ulonglong)_DAT_180dc9a40 + _DAT_180dc9a50 << 0x20) +
           (ulonglong)_DAT_180dc9a30 * (ulonglong)uVar10 +
           (ulonglong)_DAT_180dc9a00 * (ulonglong)uVar11 +
           ((ulonglong)_DAT_180dc9a10 * (ulonglong)uVar11 +
            (uVar15 >> 0x20) * (ulonglong)_DAT_180dc9a00 << 0x20) +
           (uVar5 * (unaff_R15 & 0xffffffff) + (ulonglong)_DAT_180dc99e0 * (ulonglong)uVar3 << 0x20)
           + (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180dc99e0) -
          ((ulonglong)uVar4 * (_DAT_180dc9af0 & 0xffffffff) +
           ((ulonglong)_DAT_180dc9b20 * (ulonglong)uVar4 +
            (uVar14 >> 0x20) * (_DAT_180dc9af0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180dc9b00 +
           ((ulonglong)_DAT_180dc9b10 * (ulonglong)uVar8 +
            (uVar2 >> 0x20) * (ulonglong)_DAT_180dc9b00 << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_DAT_180dc9ad0 +
          ((ulonglong)_DAT_180dc9ae0 * (ulonglong)uVar11 +
           (uVar15 >> 0x20) * (ulonglong)_DAT_180dc9ad0 << 0x20) +
          ((unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180dc9ac0 +
           (ulonglong)uVar3 * (ulonglong)_DAT_180dc9ab0 << 0x20) +
          (ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_180dc9ab0)) + 0x138f5609583263a0;
  _DAT_1831a09f8 = _DAT_1831a0bf0 ^ uVar7 ^ uVar2;
  _DAT_1831a1068 = (_DAT_1831a1068 ^ uVar7) + uVar2 ^ 0x5a2208132cc591ff;
  _DAT_1831a0de8 = (_DAT_1831a0de8 * 0x94af821d00c371f ^ _DAT_1831a1068) + uVar7;
  _DAT_1831a10d8 = _DAT_1831a0de8 ^ _DAT_1831a1068;
  _DAT_1831a0b90 = uVar2;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar2) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar5 = (~_DAT_1831a0a88 + 0x652b819f5d9d92a6) *
          ((_DAT_1831a1070 ^ 0x4817ea6e6567aefa) + (_DAT_1831a1070 & 0x4817ea6e6567aefa) * 2);
  uVar5 = (uVar5 | _DAT_1831a0c28) + (uVar5 & _DAT_1831a0c28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0a18 = func_0x000187da8ad0((uVar5 | 0x2d3c6bf138fa3c5f) + (uVar5 & 0x2d3c6bf138fa3c5f));
  _DAT_1831a09b8 =
       (_DAT_1831a09b8 ^ ~_DAT_1831a0a18 & 0x4817ea6ee1458ddf) + 0x6d3febfffddd9fff ^
       0x7f54e679bf5bbc35;
  _DAT_1831a0d48 =
       (_DAT_1831a0d48 * -0x1817e67366800717 ^ _DAT_1831a09b8) +
       (~_DAT_1831a0a18 & 0x4817ea6ee1458ddf);
  _DAT_1831a0c98 = _DAT_1831a0d48 ^ _DAT_1831a09b8;
  _DAT_1831a1038 = 0x6d3febfffddd9fff;
  _DAT_1831a0b58 = func_0x000187da8ad0(_DAT_1831a0be8 ^ 0xd89e5156925f755a);
  _DAT_1831a09c8 = _DAT_1831a09c8 + 0xe24e1fa702273a49 ^ 0x266c880ff07bac95;
  _DAT_1831a0988 = _DAT_1831a0978 * -0x105211839c3845f9;
  _DAT_1831a0978 = _DAT_1831a0988 ^ _DAT_1831a09c8;
  _DAT_1831a0e38 = 0xe24e1fa702273a49;
  uVar5 = (~_DAT_1831a0be0 + 0x1db1e058fdd8c5b8) *
          ((_DAT_1831a0fa8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831a0fa8 & 0x84222330) * 2);
  uVar5 = (uVar5 | _DAT_1831a0cc8) + (uVar5 & _DAT_1831a0cc8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0918 = func_0x000187da8ad0((uVar5 | 0x1db1e05879fae687) + (uVar5 & 0x1db1e05879fae687));
  uVar5 = (ulonglong)((uint)~((int)_DAT_1831a0918 * 2) >> 1 & 0x15);
  _DAT_1831a0b08 = _DAT_1831a0a20 ^ uVar5 ^ 0x1db1e058fdd8c5cc;
  _DAT_1831a0980 = (_DAT_1831a0980 ^ uVar5) + 0x1db1e058fdd8c5cc ^ 0x4d5dd39a728e6375;
  _DAT_1831a0e08 = (_DAT_1831a0e08 * 0x6acf75267be9137d ^ _DAT_1831a0980) + uVar5;
  _DAT_1831a0fe0 = _DAT_1831a0e08 ^ _DAT_1831a0980;
  _DAT_1831a0ec0 = 0x1db1e058fdd8c5cc;
  uVar5 = (_DAT_1831a0b30 ^ _DAT_180dc9b30) + _DAT_1831a0b40 + 0x84222325;
  uVar7 = (_DAT_1831a0b40 ^ _UNK_180dc9b38) + _DAT_1831a0b30 + 0xc9dd0d87f8df860f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0b30 ^ _DAT_180dc9b30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a0b40 ^ _UNK_180dc9b38;
  _DAT_1831a0958 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a0b30 + 0xc9dd0d87f8df860f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0b40 + 0x84222325));
  uVar5 = _DAT_1831a0958 << 0x39 | (_DAT_1831a0958 & 0xffffffffffff) >> 7;
  _DAT_1831a0aa8 = (_DAT_1831a0aa8 ^ uVar5) + 0x3622f278072079f1 ^ 0x8cde0be767de5ea1;
  _DAT_1831a0bd8 = (_DAT_1831a0bd8 * -0x479bbf143b729b65 ^ _DAT_1831a0aa8) + uVar5;
  _DAT_1831a0e48 = _DAT_1831a0bd8 ^ _DAT_1831a0aa8;
  _DAT_1831a0b28 = _DAT_1831a0be0 ^ 0x3622f278072079f1;
  _DAT_1831a0ed8 = 0x3622f278072079f1;
  uVar5 = (~_DAT_1831a0f50 + 0xc9dd0d87f8df8610) *
          ((_DAT_1831a0bc0 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831a0bc0 & 0x84222330) * 2);
  uVar5 = (uVar5 | _DAT_1831a0930) + (uVar5 & _DAT_1831a0930);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0fb0 = func_0x000187da8ad0((uVar5 | 0xc9dd0d877cfda53f) + (uVar5 & 0xc9dd0d877cfda53f));
  uVar5 = _DAT_1831a0fb0 << 9 | _DAT_1831a0fb0 >> 0x37;
  _DAT_1831a0c78 = _DAT_1831a1070 ^ uVar5 ^ 0xc9dd0d87f8df8624;
  _DAT_1831a09e8 = (_DAT_1831a09e8 ^ uVar5) + 0xc9dd0d87f8df8624 ^ 0x326508c06f3579b8;
  _DAT_1831a10c8 = (_DAT_1831a10c8 * -0x7ada9951d8faeca9 ^ _DAT_1831a09e8) + uVar5;
  _DAT_1831a10f8 = _DAT_1831a10c8 ^ _DAT_1831a09e8;
  _DAT_1831a0bc0 = 0xc9dd0d87f8df8624;
  _DAT_1831a0d38 = func_0x000187da8ad0(_DAT_1831a0e40 ^ 0xbf447b74cf85cc1e);
  uVar5 = _DAT_1831a0d38 * -0x5dca57a982c9825 ^ 0x3622f278072079f1;
  _DAT_1831a0920 = _DAT_1831a0a30 ^ uVar5 ^ 0x15;
  _DAT_1831a0be8 = (_DAT_1831a0be8 ^ uVar5) + 0x15 ^ 0x1869044937eff7dd;
  _DAT_1831a0cd8 = (_DAT_1831a0cd8 * 0x14e8d83567c83e6b ^ _DAT_1831a0be8) + uVar5;
  _DAT_1831a0d88 = _DAT_1831a0cd8 ^ _DAT_1831a0be8;
  _DAT_1831a10c8 = 0x15;
  uVar5 = (_DAT_1831a1010 ^ _DAT_180dc9b40) + _DAT_1831a0c30 + 0x6d3febff79ffbcda;
  uVar7 = (_DAT_1831a0c30 ^ _UNK_180dc9b48) + _DAT_1831a1010 + 0xd150010b16c8d97d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a1010 ^ _DAT_180dc9b40;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a0c30 ^ _UNK_180dc9b48;
  _DAT_1831a0db8 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a1010 + 0xd150010b16c8d97d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0c30 + 0x6d3febff79ffbcda));
  _DAT_1831a0ca0 =
       (_DAT_1831a0ca0 ^ _DAT_1831a0db8 ^ 0xfd7febffffdddfff) + 0x4110010b14c8997d ^
       0x49da3cbd4c9daf71;
  _DAT_1831a0ae8 =
       (_DAT_1831a0ae8 * 0x4ce3957b5fb6a61 ^ _DAT_1831a0ca0) + (_DAT_1831a0db8 ^ 0xfd7febffffdddfff)
  ;
  _DAT_1831a0d00 = _DAT_1831a0ae8 ^ _DAT_1831a0ca0;
  _DAT_1831a0f88 = 0x4110010b14c8997d;
  _DAT_1831a0c30 = func_0x000187da8ad0(_DAT_1831a1010 + 0x1e32bcc5ba68a63d ^ 0x2e);
  uVar5 = ((_DAT_1831a0c30 ^ 0xbe6feaf6eb9576fa) & 0xff) << 0x37 |
          (_DAT_1831a0c30 ^ 0xbe6feaf6eb9576fa) >> 9;
  _DAT_1831a0978 = _DAT_1831a0d10 ^ uVar5 ^ 0x3e8fed0b14a6797c;
  _DAT_1831a0a10 = (_DAT_1831a0a10 ^ uVar5) + 0x3e8fed0b14a6797c ^ 0x6e760a12583210d0;
  _DAT_1831a0c48 = (_DAT_1831a0c48 * 0x11b823ec3b78cabd ^ _DAT_1831a0a10) + uVar5;
  _DAT_1831a0ff0 = _DAT_1831a0c48 ^ _DAT_1831a0a10;
  _DAT_1831a0960 = 0x3e8fed0b14a6797c;
  _DAT_1831a0c10 = func_0x000187da8ad0(_DAT_1831a0d20 ^ 0x20ff7c1cffdd3a);
  _DAT_1831a0900 = _DAT_1831a0c10 & 0x7fffffffffffffff;
  _DAT_1831a0c18 = _DAT_1831a0c18 ^ _DAT_1831a0900 ^ 0x5989766f1707d44a;
  _DAT_1831a10d0 = (_DAT_1831a10d0 * -0x3db3ec4e3b90d3bb ^ _DAT_1831a0c18) + _DAT_1831a0900;
  _DAT_1831a0a90 = _DAT_1831a10d0 ^ _DAT_1831a0c18;
  _DAT_1831a0910 = 0;
  uVar5 = ((_DAT_1831a0b90 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831a0b90 & 0x84222330) * 2) *
          -_DAT_1831a0e90;
  uVar5 = (uVar5 | _DAT_1831a0e30) + (uVar5 & _DAT_1831a0e30);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0ff8 = func_0x000187da8ad0((uVar5 | 0x84222330) + (ulonglong)((uint)uVar5 & 0x84222330))
  ;
  uVar5 = _DAT_1831a0ff8 * 0x24d4d29299647b83;
  _DAT_1831a0c08 = _DAT_1831a0f48 ^ uVar5 ^ 0x15;
  _DAT_1831a0cb0 = (_DAT_1831a0cb0 ^ uVar5) + 0x15 ^ 0xebd1c93262150292;
  _DAT_1831a0a80 = (_DAT_1831a0a80 * 0x1881ad6004083beb ^ _DAT_1831a0cb0) + uVar5;
  _DAT_1831a0b40 = _DAT_1831a0a80 ^ _DAT_1831a0cb0;
  _DAT_1831a09a8 = 0x15;
  uVar5 = ~_DAT_1831a0f78 *
          ((_DAT_1831a0d78 ^ 0x6d3febff79ffbcda) + (_DAT_1831a0d78 & 0x6d3febff79ffbcda) * 2);
  uVar5 = (uVar5 | _DAT_1831a09f8) + (uVar5 & _DAT_1831a09f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0f28 = func_0x000187da8ad0((uVar5 | 0x92c0140086004325) + (uVar5 & 0x92c0140086004325));
  _DAT_1831a0908 = (_DAT_1831a0908 ^ _DAT_1831a0f28) + 0x92c0140002226000 ^ 0x7af29b0719993052;
  _DAT_1831a1088 = (_DAT_1831a1088 * 0x571507ea135a9657 ^ _DAT_1831a0908) + _DAT_1831a0f28;
  _DAT_1831a0de8 = _DAT_1831a1088 ^ _DAT_1831a0908;
  _DAT_1831a0b00 = 0x92c0140002226000;
  _DAT_1831a0b50 = func_0x000187da8ad0(_DAT_1831a0e28 + 0x8dc41d25399ac214 ^ 0x4d);
  _DAT_1831a0f50 = _DAT_1831a0f50 ^ _DAT_1831a0b50 ^ 0x92c0140002226000 ^ 0x7354666a45d3534f;
  _DAT_1831a0b78 =
       (_DAT_1831a0b78 * 0x66a598206014efd9 ^ _DAT_1831a0f50) +
       (_DAT_1831a0b50 ^ 0x92c0140002226000);
  _DAT_1831a0e18 = _DAT_1831a0b78 ^ _DAT_1831a0f50;
  _DAT_1831a0d68 = 0;
  uVar5 = (_DAT_1831a0d10 ^ 0x84222330) + _DAT_1831a1098 + 0x84222330;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0d10 ^ 0x84222330;
  uVar7 = ((_DAT_1831a1098 + _DAT_1831a0d10) * 0x2000 | _DAT_1831a1098 + _DAT_1831a0d10 >> 0x33) ^
          _DAT_1831a1098;
  _DAT_1831a0f00 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_1831a0d10 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a1098 + 0x84222330));
  uVar5 = _DAT_1831a0f00 & 0x7fffffffffffffff;
  _DAT_1831a0d18 = _DAT_1831a0b88 ^ uVar5 ^ 0x15;
  _DAT_1831a0e88 = (_DAT_1831a0e88 ^ uVar5) + 0x15 ^ 0x38a2865da51a4478;
  _DAT_1831a0e98 = (_DAT_1831a0e98 * 0x5ecb648f2b643b6d ^ _DAT_1831a0e88) + uVar5;
  _DAT_1831a0e10 = _DAT_1831a0e98 ^ _DAT_1831a0e88;
  _DAT_1831a0f80 = 0x15;
  uVar5 = (~_DAT_1831a0e48 + 0x4817ea6ee1458de0) *
          ((_DAT_1831a0ef8 ^ 0x4817ea6e6567aefa) + (_DAT_1831a0ef8 & 0x4817ea6e6567aefa) * 2);
  uVar5 = (uVar5 | _DAT_1831a0ac8) + (uVar5 & _DAT_1831a0ac8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831a0eb0 = func_0x000187da8ad0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  uVar5 = _DAT_1831a0eb0 ^ 0x4817ea6ee1458ddf;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5;
  _DAT_1831a0be8 = _DAT_1831a0be8 ^ uVar5 ^ 0xfb1ca90a477e2266;
  _DAT_1831a1070 = (_DAT_1831a1070 * 0xd33d81e85c919eb ^ _DAT_1831a0be8) + uVar5;
  _DAT_1831a10e8 = _DAT_1831a1070 ^ _DAT_1831a0be8;
  _DAT_1831a0c80 = 0;
  uVar5 = (_DAT_1831a0c00 ^ 0x84222330) + _DAT_1831a10e8 + 0x84222330;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0c00 ^ 0x84222330;
  uVar7 = ((_DAT_1831a10e8 + _DAT_1831a0c00) * 0x2000 | _DAT_1831a10e8 + _DAT_1831a0c00 >> 0x33) ^
          _DAT_1831a10e8;
  _DAT_1831a0f98 =
       func_0x000187da8ad0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_1831a0c00 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a10e8 + 0x84222330));
  uVar5 = ((_DAT_1831a0f98 ^ 0x15) << 10 | _DAT_1831a0f98 >> 0x36) ^ 0x15;
  _DAT_1831a0c00 = _DAT_1831a0f50 ^ uVar5 ^ 0x15;
  _DAT_1831a0b38 = (_DAT_1831a0b38 ^ uVar5) + 0x15 ^ 0x4678f62df604c766;
  _DAT_1831a0ce0 = (_DAT_1831a0ce0 * -0x5a7280c0b94065fd ^ _DAT_1831a0b38) + uVar5;
  _DAT_1831a0ee8 = _DAT_1831a0ce0 ^ _DAT_1831a0b38;
  _DAT_1831a09a8 = 0x15;
  switch(uVar2 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d8af7d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d8af7d(void)

{
  undefined8 uVar1;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  longlong *unaff_R14;
  
  uVar1 = (**(code **)(unaff_R14 + JNI->NewCharArray /*0x588*/))();
  *unaff_RBP = uVar1;
  unaff_RBP[0x10] = uVar1;
  *(undefined4 *)(unaff_RBP + 0x10) = 0;
  *(int *)(unaff_RBP + 0x11) = unaff_ESI;
  switch(0 < unaff_ESI) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d8afbe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d8afbe(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined8 unaff_R13;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R13;
  *(undefined4 *)(unaff_RBP + 0x20) = unaff_ESI;
  uVar4 = (_DAT_1831a10a0 ^ _DAT_180dc91b0) + _DAT_1831a0b38 + 0x918aca59;
  uVar5 = (_DAT_1831a0b38 ^ _UNK_180dc91b8) + _DAT_1831a10a0 + 0xb677b5e5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a10a0 ^ _DAT_180dc91b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0b38 ^ _UNK_180dc91b8;
  _DAT_1831a0e30 =
       func_0x000187da8ad0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a10a0 + 0xb677b5e5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a0b38 + 0x918aca59));
  uVar4 = (_DAT_1831a0e30 & 0x1ffffffffe000) * 0x8000;
  _DAT_1831a0fe8 = (_DAT_1831a0fe8 ^ uVar4) + 0xb7fffdfd ^ 0x8598a99aa5dafb23;
  _DAT_1831a0d68 = (_DAT_1831a0d68 * 0x739045fb9f9f5663 ^ _DAT_1831a0fe8) + uVar4;
  _DAT_1831a0970 = _DAT_1831a0d68 ^ _DAT_1831a0fe8;
  _DAT_1831a10d0 = 0xb7fffdfd;
  uVar4 = (_DAT_1831a0fc8 ^ _DAT_180dc91c0) + _DAT_1831a0e78 + 0xefb77adb;
  uVar5 = (_DAT_1831a0e78 ^ _UNK_180dc91c8) + _DAT_1831a0fc8 + 0x8c1d7b68;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a0fc8 ^ _DAT_180dc91c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0e78 ^ _UNK_180dc91c8;
  _DAT_1831a0d70 =
       func_0x000187da8ad0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0fc8 + 0x8c1d7b68) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a0e78 + 0xefb77adb));
  _DAT_1831a0e20 = (_DAT_1831a0e20 ^ _DAT_1831a0d70) + 0xe7882296 ^ 0x56fd52e241c6b99;
  _DAT_1831a0cc0 = (_DAT_1831a0cc0 * 0x7eaef6ed03b5539b ^ _DAT_1831a0e20) + _DAT_1831a0d70;
  _DAT_1831a09d8 = _DAT_1831a0cc0 ^ _DAT_1831a0e20;
  _DAT_1831a0ba0 = 0xe7882296;
  uVar4 = (_DAT_1831a0af8 ^ _DAT_180dc91d0) + _DAT_1831a0f18 + 0x84222325;
  uVar5 = (_DAT_1831a0f18 ^ _UNK_180dc91d8) + _DAT_1831a0af8 + 0xb6e40810;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a0af8 ^ _DAT_180dc91d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0f18 ^ _UNK_180dc91d8;
  _DAT_1831a0f90 =
       func_0x000187da8ad0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0af8 + 0xb6e40810) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a0f18 + 0x84222325));
  uVar4 = (_DAT_1831a0f90 & 0xffffffff) * (ulonglong)_DAT_180dc91e0 +
          ((ulonglong)_DAT_180dc91f0 * (_DAT_1831a0f90 & 0xffffffff) +
           (_DAT_1831a0f90 >> 0x20) * (ulonglong)_DAT_180dc91e0 << 0x20) & 0x7fffffffffffffff;
  _DAT_1831a0b30 = (_DAT_1831a0b30 ^ uVar4) - 0xb6e40810 ^ 0x3da1e930fe7f785a;
  _DAT_1831a09f0 = (_DAT_1831a09f0 * 0x28ea9c38ea3aacef ^ _DAT_1831a0b30) + uVar4;
  _DAT_1831a0938 = _DAT_1831a09f0 ^ _DAT_1831a0b30;
  _DAT_1831a0fd8 = 0x491bf7f0;
  uVar4 = (_DAT_1831a10f0 ^ _DAT_180dc9200) + _DAT_1831a0ea0 + 0x7bdddcdb;
  uVar5 = (_DAT_1831a0ea0 ^ _UNK_180dc9208) + _DAT_1831a10f0 + 0xb6e40810;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a10f0 ^ _DAT_180dc9200;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0ea0 ^ _UNK_180dc9208;
  _DAT_1831a0f88 =
       func_0x000187da8ad0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a10f0 + 0xb6e40810) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a0ea0 + 0x7bdddcdb));
  uVar4 = (_DAT_1831a0f88 ^ 0xfffffffe) & 0x3ffffffffffff;
  _DAT_1831a0eb8 = _DAT_1831a0db0 ^ uVar4 ^ 0x1b6e4080e;
  _DAT_1831a1068 = (_DAT_1831a1068 ^ uVar4) + 0x1b6e4080e ^ 0xa24849222b804adc;
  _DAT_1831a0c98 = (_DAT_1831a0c98 * 0x355a3966ca03bf81 ^ _DAT_1831a1068) + uVar4;
  _DAT_1831a0e48 = _DAT_1831a0c98 ^ _DAT_1831a1068;
  _DAT_1831a0c00 = 0xb6e4080e;
  _DAT_1831a0b10 = func_0x000187da8ad0(_DAT_1831a0948 ^ 0xff3c0045ab002203);
  uVar4 = _DAT_1831a0b10 ^ 0xb6e4080e;
  _DAT_1831a0b28 = _DAT_1831a1008 ^ uVar4 ^ 0xfffffffe;
  _DAT_1831a10b8 = (_DAT_1831a10b8 ^ uVar4) + 0xfffffffe ^ 0xed24fb56529323d8;
  _DAT_1831a1018 = (_DAT_1831a1018 * 0x2ecfd361fe46077b ^ _DAT_1831a10b8) + uVar4;
  _DAT_1831a1038 = _DAT_1831a1018 ^ _DAT_1831a10b8;
  _DAT_1831a0c70 = _DAT_1831a0f40 ^ 0xfffffffe;
  _DAT_1831a1010 = 0xfffffffe;
  uVar4 = (~_DAT_1831a0918 + 0x335b4735) *
          ((_DAT_1831a0a88 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a0a88 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1831a09b0) + (uVar4 & _DAT_1831a09b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a0f48 = func_0x000187da8ad0((uVar4 | 0xb7796411) + (ulonglong)((uint)uVar4 & 0xb7796411))
  ;
  _DAT_1831a0920 =
       (_DAT_1831a0920 ^ _DAT_1831a0f48 & 0x7fffffffffffffff) - 0x335b4734 ^ 0x314ef4b80d97d436;
  _DAT_1831a1050 =
       (_DAT_1831a1050 * 0x40c7f9badf7ff8a1 ^ _DAT_1831a0920) +
       (_DAT_1831a0f48 & 0x7fffffffffffffff);
  _DAT_1831a10a8 = _DAT_1831a1050 ^ _DAT_1831a0920;
  _DAT_1831a0f30 = 0xcca4b8cc;
  uVar4 = (_DAT_1831a0b48 ^ _DAT_180dc9210) + _DAT_1831a0c30 + 0x7bdddcdb;
  uVar5 = (_DAT_1831a0c30 ^ _UNK_180dc9218) + _DAT_1831a0b48 + 0x335b4734;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a0b48 ^ _DAT_180dc9210;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0c30 ^ _UNK_180dc9218;
  _DAT_1831a1048 =
       func_0x000187da8ad0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0b48 + 0x335b4734) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a0c30 + 0x7bdddcdb));
  _DAT_1831a0af8 = _DAT_1831a0d38 ^ _DAT_1831a1048 ^ 0x1335b4732;
  _DAT_1831a0c30 = (_DAT_1831a0c30 ^ _DAT_1831a1048) + 0x1335b4732 ^ 0xe5bc5c9c58a33f9c;
  _DAT_1831a0bc8 = (_DAT_1831a0bc8 * -0x13a29465f9e89949 ^ _DAT_1831a0c30) + _DAT_1831a1048;
  _DAT_1831a0b48 = _DAT_1831a0bc8 ^ _DAT_1831a0c30;
  _DAT_1831a09f0 = 0x335b4732;
  uVar4 = (~_DAT_1831a0b00 + 0xd494b089) *
          ((_DAT_1831a0db0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a0db0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1831a0950) + (uVar4 & _DAT_1831a0950);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x000187da8ad0((uVar4 | 0x50b693ad) + (ulonglong)((uint)uVar4 & 0x50b693ad));
  uVar4 = (uVar4 & 0xfffffffffffffff0) << 8 | uVar4 >> 0x38;
  _DAT_1831a0ef0 = (_DAT_1831a0ef0 ^ uVar4) - 0xd494b088 ^ 0x52c0fc5ea5f94adc;
  _DAT_1831a0aa0 = (_DAT_1831a0aa0 * -0x675784821ea5c69d ^ _DAT_1831a0ef0) + uVar4;
  _DAT_1831a0b60 = _DAT_1831a0aa0 ^ _DAT_1831a0ef0;
  _DAT_1831a0a50 = 0x2b6b4f78;
  _DAT_1831a0b08 = func_0x000187da8ad0(_DAT_1831a0f78 + 0xff9c0095310046ffU ^ 0x4f);
  uVar4 = (_DAT_1831a0b08 ^ 0xfffffffe) & 0x7ffffffffffff;
  _DAT_1831a1050 = _DAT_1831a0e88 ^ uVar4 ^ 0x1d494b086;
  _DAT_1831a0fb0 = (_DAT_1831a0fb0 ^ uVar4) + 0x1d494b086 ^ 0x375ed52f6be951c3;
  _DAT_1831a0dd8 = (_DAT_1831a0dd8 * -0x44625200db0bdbc1 ^ _DAT_1831a0fb0) + uVar4;
  _DAT_1831a0e80 = _DAT_1831a0dd8 ^ _DAT_1831a0fb0;
  _DAT_1831a0918 = 0xd494b086;
  _DAT_1831a0e80 = func_0x000187da8ad0(_DAT_1831a0a90 ^ 0xff5bff9aa6ff4c83);
  uVar4 = _DAT_1831a0e80 << 0x1e | _DAT_1831a0e80 >> 0x22;
  _DAT_1831a1040 = _DAT_1831a0bb8 ^ uVar4 ^ 0xfffffffe;
  _DAT_1831a0a90 = (_DAT_1831a0a90 ^ uVar4) + 0xfffffffe ^ 0x4fe75d40585be794;
  _DAT_1831a09d0 = (_DAT_1831a09d0 * 0x55f68dfc0855d2ab ^ _DAT_1831a0a90) + uVar4;
  _DAT_1831a0af0 = _DAT_1831a09d0 ^ _DAT_1831a0a90;
  _DAT_1831a0cb8 = 0xfffffffe;
  uVar4 = (~_DAT_1831a0d50 + 0xe7882297) *
          ((_DAT_1831a0fb8 ^ 0x33ddded8) + (ulonglong)((uint)_DAT_1831a0fb8 & 0x33ddded8) * 2);
  uVar4 = (uVar4 | _DAT_1831a0c68) + (uVar4 & _DAT_1831a0c68);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a0bc0 = func_0x000187da8ad0((uVar4 | 0xd455fc4e) + (ulonglong)((uint)uVar4 & 0xd455fc4e))
  ;
  _DAT_1831a0ac0 = _DAT_1831a0d90 ^ _DAT_1831a0bc0 ^ 0x19f882093;
  _DAT_1831a0de0 = (_DAT_1831a0de0 ^ _DAT_1831a0bc0) + 0x19f882093 ^ 0xb453db71ded61806;
  _DAT_1831a0e08 =
       (_DAT_1831a0e08 * 0x60d35c8bf9c9cc57 ^ _DAT_1831a0de0) + _DAT_1831a0bc0 ^ _DAT_1831a0de0;
  _DAT_1831a09d8 = 0x9f882093;
  _DAT_1831a0af8 = func_0x000187da8ad0(_DAT_1831a0bd0 + 0xff64004c3a0052ffU ^ 0xc);
  _DAT_1831a0e30 = (_DAT_1831a0e30 ^ _DAT_1831a0af8 ^ 0x1077dd69) + 0x5077df6b ^ 0x1419eddf75b5fe3;
  _DAT_1831a0ca8 =
       (_DAT_1831a0ca8 * -0x33b31108bdffe7a3 ^ _DAT_1831a0e30) + (_DAT_1831a0af8 ^ 0x1077dd69);
  _DAT_1831a0ac0 = _DAT_1831a0ca8 ^ _DAT_1831a0e30;
  _DAT_1831a0e20 = 0x5077df6b;
  _DAT_1831a0ad0 = func_0x000187da8ad0(_DAT_1831a09e8 + 0xff2bff2bca004cffU ^ 0x5a);
  uVar4 = _DAT_1831a0ad0 & 0xffffffffffffff ^ 0xb7fffdfd;
  _DAT_1831a0c50 = (_DAT_1831a0c50 ^ uVar4) + 0xa7882094 ^ 0xcaad777de9ee805b;
  _DAT_1831a0ae0 = (_DAT_1831a0ae0 * 0x11f1ca967fa7efa3 ^ _DAT_1831a0c50) + uVar4;
  _DAT_1831a0fe0 = _DAT_1831a0ae0 ^ _DAT_1831a0c50;
  _DAT_1831a0e30 = 0xa7882094;
  uVar4 = ((_DAT_1831a1028 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_1831a1028 & 0x7bdddcdb) * 2) *
          -_DAT_1831a0950;
  uVar4 = (uVar4 | _DAT_1831a0c68) + (uVar4 & _DAT_1831a0c68);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a1018 = func_0x000187da8ad0((uVar4 | 0x7bdddcdb) + (ulonglong)((uint)uVar4 & 0x7bdddcdb))
  ;
  uVar4 = _DAT_1831a1018 << 0x24 | _DAT_1831a1018 >> 0x1c;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar2 + (uint)bVar2 ^ uVar4;
  _DAT_1831a1098 = _DAT_1831a09a0 ^ uVar4 ^ 0xfffffffe;
  _DAT_1831a0ad0 = (_DAT_1831a0ad0 ^ uVar4) + 0xfffffffe ^ 0xc89f91fbb16b2344;
  _DAT_1831a0b30 = (_DAT_1831a0b30 * 0x41cdb5b9dce27f41 ^ _DAT_1831a0ad0) + uVar4;
  _DAT_1831a0a40 = _DAT_1831a0b30 ^ _DAT_1831a0ad0;
  _DAT_1831a0be8 = 0xfffffffe;
  uVar4 = (_DAT_1831a10c8 ^ _DAT_180dc9220) + _DAT_1831a0a00 + 0x33ddded8;
  uVar5 = (_DAT_1831a0a00 ^ _UNK_180dc9228) + _DAT_1831a10c8 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a10c8 ^ _DAT_180dc9220;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0a00 ^ _UNK_180dc9228;
  _DAT_1831a10c0 =
       func_0x000187da8ad0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a10c8 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a0a00 + 0x33ddded8));
  uVar4 = (_DAT_1831a10c0 ^ 0xffffffff) << 0x33 | (_DAT_1831a10c0 ^ 0xffffffff) >> 0xd;
  _DAT_1831a1050 = (_DAT_1831a1050 ^ uVar4) + 0x48000202 ^ 0x5686cc74bfd3a90b;
  _DAT_1831a0e60 = (_DAT_1831a0e60 * -0x19fb5a7f7c7d3abb ^ _DAT_1831a1050) + uVar4;
  _DAT_1831a0ab0 = _DAT_1831a0e60 ^ _DAT_1831a1050;
  _DAT_1831a0f30 = 0x48000202;
  uVar4 = (_DAT_1831a0ab0 ^ _DAT_180dc9230) + _DAT_1831a0d50 + 0x33ddded8;
  uVar5 = (_DAT_1831a0d50 ^ _UNK_180dc9238) + _DAT_1831a0ab0 + 0x48000202;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a0ab0 ^ _DAT_180dc9230;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0d50 ^ _UNK_180dc9238;
  _DAT_1831a0db8 =
       func_0x000187da8ad0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a0ab0 + 0x48000202) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a0d50 + 0x33ddded8));
  uVar4 = _DAT_1831a0db8 << 0x28 | _DAT_1831a0db8 >> 0x18;
  _DAT_1831a0ad0 = _DAT_1831a0ad0 ^ uVar4 ^ 0xccd3c3b9f1ed69d1;
  _DAT_1831a0e78 = (_DAT_1831a0e78 * 0x4aad7755612ed9b5 ^ _DAT_1831a0ad0) + uVar4;
  _DAT_1831a0918 = _DAT_1831a0e78 ^ _DAT_1831a0ad0;
  _DAT_1831a0990 = 0;
  uVar4 = (~_DAT_1831a0c00 + 0x15a8e97d) *
          ((_DAT_1831a0e70 ^ 0x918aca59) + (ulonglong)((uint)_DAT_1831a0e70 & 0x918aca59) * 2);
  uVar4 = (uVar4 | _DAT_1831a0ff0) + (uVar4 & _DAT_1831a0ff0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a1000 = func_0x000187da8ad0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = _DAT_1831a1000 ^ 0x15a8e97c;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar4;
  _DAT_1831a1078 = _DAT_1831a1078 ^ uVar4 ^ 0x1d5c1ebbab22ef17;
  _DAT_1831a10c0 = (_DAT_1831a10c0 * -0xbeea3a1f253ec3f ^ _DAT_1831a1078) + uVar4;
  _DAT_1831a09d0 = _DAT_1831a10c0 ^ _DAT_1831a1078;
  _DAT_1831a0b50 = 0;
  uVar1 = *(uint *)(unaff_RBP + 0x20);
  uVar5 = CONCAT44(0,uVar1);
  uVar4 = (~_DAT_1831a1050 + 0xffffffff) *
          ((uVar5 ^ 0x84222325 ^ _DAT_1831a0ee0) +
          (ulonglong)((uint)_DAT_1831a0ee0 & (uint)(uVar5 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | _DAT_1831a10d0) + (uVar4 & _DAT_1831a10d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a0e30 =
       func_0x000187da8ad0((uVar5 ^ 0x7bdddcdb | uVar4) +
                           (ulonglong)((uint)(uVar5 ^ 0x7bdddcdb) & (uint)uVar4));
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar5;
  uVar4 = ((uVar5 << 0x20) + uVar5 * -2 ^ _DAT_1831a0e30) & 0x3ffffffffffff;
  auVar8._8_4_ = 0xffffffff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8._12_4_ = 0xffffffff;
  uVar7 = SUB164(auVar6 ^ auVar8,0);
  _DAT_1831a0c60 =
       (uVar5 - ((ulonglong)uVar7 * (ulonglong)_DAT_180dc9270 +
                 ((SUB168(auVar6 ^ auVar8,0) >> 0x20) * (ulonglong)_DAT_180dc9270 +
                  (ulonglong)_DAT_180dc9260 * (ulonglong)uVar7 << 0x20) +
                (ulonglong)uVar1 * (ulonglong)_DAT_180dc9270 +
                ((ulonglong)uVar1 * (ulonglong)_DAT_180dc9260 << 0x20))) + 0x4d462e1e147622c3;
  _DAT_1831a0c98 = _DAT_1831a10a0 ^ uVar4 ^ _DAT_1831a0c60;
  _DAT_1831a0c10 = (_DAT_1831a0c10 ^ uVar4) + _DAT_1831a0c60 ^ 0xf7b6a7e1f725db89;
  _DAT_1831a0dd8 = (_DAT_1831a0dd8 * -0x106631df5cb454b1 ^ _DAT_1831a0c10) + uVar4;
  _DAT_1831a0fd8 = _DAT_1831a0dd8 ^ _DAT_1831a0c10;
  *(int *)(unaff_RBP + -4) = (int)_DAT_1831a0c60;
  _DAT_1831a0c60 = _DAT_1831a0c60 & 0xffffffff;
  *(undefined8 *)(unaff_RBP + -0x38) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x80) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x88) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x90) = 0;
  iVar3 = (**(code **)(**(longlong **)(unaff_RBP + 0x30) + 0x558))(*(longlong **)(unaff_RBP + 0x30))
  ;
  switch(*(int *)(unaff_RBP + 0x90) < 0 || iVar3 <= *(int *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d8c31b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d8c31b(undefined4 param_1)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  uint uVar2;
  longlong *unaff_R14;
  ulonglong uVar3;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  
  *(undefined4 *)(unaff_RBP + 0x88) = param_1;
  (**(code **)(unaff_R14 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar2 = *(uint *)(unaff_RBP + 0x88) & *(uint *)(unaff_RBP + 0x80);
  *(uint *)(unaff_RBP + 0x80) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(int *)(unaff_RBP + 0x60) = (int)*(undefined8 *)(unaff_RBP + 0x80);
  _DAT_1831a0e08 = func_0x000187da8ad0(_DAT_1831a0ba8 + 0xfff7ff4900ff36ffU ^ 0xb7);
  uVar1 = _DAT_1831a0e08 << 0x22 | _DAT_1831a0e08 >> 0x1e;
  _DAT_1831a10b0 = (_DAT_1831a10b0 ^ uVar1) + 0x7fffffff ^ 0xec8b5eb1c670b8a9;
  _DAT_1831a0e10 = (_DAT_1831a0e10 * -0x1cba5cc7b4a96451 ^ _DAT_1831a10b0) + uVar1;
  _DAT_1831a0fc0 = _DAT_1831a0e10 ^ _DAT_1831a10b0;
  _DAT_1831a0f00 = 0x7fffffff;
  uVar1 = (~_DAT_1831a0df8 + 0xfd09fb97) *
          ((_DAT_1831a0960 ^ 0x306c9a2e) + (ulonglong)((uint)_DAT_1831a0960 & 0x306c9a2e) * 2);
  uVar1 = (uVar1 | _DAT_1831a0e60) + (uVar1 & _DAT_1831a0e60);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0fe0 = func_0x000187da8ad0((uVar1 | 0xcd6561b8) + (ulonglong)((uint)uVar1 & 0xcd6561b8))
  ;
  _DAT_1831a0f10 = (_DAT_1831a0f10 ^ _DAT_1831a0fe0) + 0x4947429d ^ 0x648b89d757906284;
  _DAT_1831a0e10 = (_DAT_1831a0e10 * 0x1baeaa5145e42533 ^ _DAT_1831a0f10) + _DAT_1831a0fe0;
  _DAT_1831a0990 = _DAT_1831a0e10 ^ _DAT_1831a0f10;
  _DAT_1831a0918 = 0x4947429d;
  uVar1 = (~_DAT_1831a0fc8 + 0x97578754) *
          ((_DAT_1831a0de0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a0de0 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1831a0ae0) + (uVar1 & _DAT_1831a0ae0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0e10 = func_0x000187da8ad0((uVar1 | 0x1375a476) + (ulonglong)((uint)uVar1 & 0x1375a476))
  ;
  _DAT_1831a0ce8 = (_DAT_1831a0ce8 ^ 0xe9c8d79bcc9981c0) - 0x97578753 ^ 0x73e690e94e03f6f5;
  _DAT_1831a0bb0 = (_DAT_1831a0bb0 * 0xe72c85d7973019b ^ _DAT_1831a0ce8) + 0xe9c8d79bcc9981c0;
  _DAT_1831a0b60 = _DAT_1831a0bb0 ^ _DAT_1831a0ce8;
  _DAT_1831a10a0 = 0x68a878ad;
  uVar1 = (_DAT_1831a0f90 ^ unaff_XMM7_Qa) + _DAT_1831a0fe0 + 0x8422239a;
  uVar3 = (_DAT_1831a0fe0 ^ unaff_XMM7_Qb) + _DAT_1831a0f90 + 0x97578753;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a0f90 ^ unaff_XMM7_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1831a0fe0 ^ unaff_XMM7_Qb;
  _DAT_1831a10e8 =
       func_0x000187da8ad0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831a0f90 + 0x97578753) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a0fe0 + 0x8422239a));
  uVar1 = (_DAT_1831a10e8 ^ 0x70ea4df6ed) << 0x33 | (_DAT_1831a10e8 ^ 0x70ea4df6ed) >> 0xd;
  _DAT_1831a0f50 = _DAT_1831a0d30 ^ uVar1 ^ 0x97578812;
  _DAT_1831a0d38 = (_DAT_1831a0d38 ^ uVar1) + 0x97578812 ^ 0x929a23c79a05a57d;
  _DAT_1831a0f90 = (_DAT_1831a0f90 * 0x1b62ae91efd5e099 ^ _DAT_1831a0d38) + uVar1;
  _DAT_1831a09a8 = _DAT_1831a0f90 ^ _DAT_1831a0d38;
  _DAT_1831a0d68 = 0x97578812;
  _DAT_1831a0980 = func_0x000187da8ad0(_DAT_1831a0eb0 ^ 0x85ff428eff7daa);
  _DAT_1831a0910 = (_DAT_1831a0910 ^ _DAT_1831a0980) - 0x41bca9b2 ^ 0xea4ca970f35b904e;
  _DAT_1831a0e40 = (_DAT_1831a0e40 * -0x49efeba69e41dbad ^ _DAT_1831a0910) + _DAT_1831a0980;
  _DAT_1831a0ac8 = _DAT_1831a0e40 ^ _DAT_1831a0910;
  _DAT_1831a0c28 = 0xbe43564e;
  uVar1 = (~_DAT_1831a0d40 + 0x41bca9b3) *
          ((_DAT_1831a0950 ^ 0x8422239a) + (ulonglong)((uint)_DAT_1831a0950 & 0x8422239a) * 2);
  uVar1 = (uVar1 | _DAT_1831a0b20) + (uVar1 & _DAT_1831a0b20);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0a28 = func_0x000187da8ad0((uVar1 | 0xc59e8a28) + (ulonglong)((uint)uVar1 & 0xc59e8a28))
  ;
  _DAT_1831a0e20 = _DAT_1831a0ab0 ^ _DAT_1831a0a28 ^ 0x41bcaa71;
  _DAT_1831a0dc8 = (_DAT_1831a0dc8 ^ _DAT_1831a0a28) + 0x41bcaa71 ^ 0xa0bbd77bb49a6749;
  _DAT_1831a0a80 = (_DAT_1831a0a80 * -0x2b27230957c7c915 ^ _DAT_1831a0dc8) + _DAT_1831a0a28;
  _DAT_1831a0a90 = _DAT_1831a0a80 ^ _DAT_1831a0dc8;
  _DAT_1831a0b00 = 0x41bcaa71;
  uVar1 = (~_DAT_1831a0fc8 + 0x33bc2b90) *
          ((_DAT_1831a0e60 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a0e60 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1831a0f10) + (uVar1 & _DAT_1831a0f10);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0d80 = func_0x000187da8ad0((uVar1 | 0xb79e08aa) + (ulonglong)((uint)uVar1 & 0xb79e08aa))
  ;
  _DAT_1831a0f08 = (_DAT_1831a0f08 ^ _DAT_1831a0958) - 0x33bc2b8f ^ 0xba67a81e3569a684;
  _DAT_1831a0c68 = (_DAT_1831a0c68 * -0x301858c087f5fc4f ^ _DAT_1831a0f08) + _DAT_1831a0958;
  _DAT_1831a0e40 = _DAT_1831a0c68 ^ _DAT_1831a0f08;
  _DAT_1831a0af8 = 0xcc43d471;
  _DAT_1831a0ef0 = func_0x000187da8ad0(_DAT_1831a0f90 ^ 0x9e00b1c10085ee);
  uVar1 = (ulonglong)(~(uint)_DAT_1831a0ef0 & 0x7fffffff);
  _DAT_1831a0cf8 = (_DAT_1831a0cf8 ^ uVar1) + 0x36b8bd62 ^ 0x95eba028c4c42020;
  _DAT_1831a0a70 = (_DAT_1831a0a70 * 0x2f25e5dac136e121 ^ _DAT_1831a0cf8) + uVar1;
  _DAT_1831a0ab8 = _DAT_1831a0a70 ^ _DAT_1831a0cf8;
  _DAT_1831a0ce8 = 0x36b8bd62;
  _DAT_1831a0be0 = func_0x000187da8ad0(_DAT_1831a0d60 + 0xff9e00723f0065ffU ^ 0xfe);
  uVar1 = (ulonglong)((uint)_DAT_1831a0be0 & 0x7fffffff);
  _DAT_1831a0ed8 = (_DAT_1831a0ed8 ^ uVar1) + 0x4947429d ^ 0x8de0c4b0cc3545cc;
  _DAT_1831a0960 = (_DAT_1831a0960 * -0x3131effaeace82f ^ _DAT_1831a0ed8) + uVar1;
  _DAT_1831a0c50 = _DAT_1831a0960 ^ _DAT_1831a0ed8;
  _DAT_1831a0f38 = 0x4947429d;
  _DAT_1831a0f98 = func_0x000187da8ad0(_DAT_1831a0ac8 ^ 0xffa4007aa9ffccd4);
  _DAT_1831a0c58 = _DAT_1831a0c58 ^ _DAT_1831a0f98 & 0x7fffffffffff ^ 0xf4ec1ca641aa84b4;
  _DAT_1831a0a78 =
       (_DAT_1831a0a78 * -0x29678fb9b6e00fe3 ^ _DAT_1831a0c58) + (_DAT_1831a0f98 & 0x7fffffffffff);
  _DAT_1831a0ab8 = _DAT_1831a0a78 ^ _DAT_1831a0c58;
  _DAT_1831a1040 = 0;
  uVar1 = ((_DAT_1831a0db0 ^ 0x8422239a) + (ulonglong)((uint)_DAT_1831a0db0 & 0x8422239a) * 2) *
          -_DAT_1831a0ca0;
  uVar1 = (uVar1 | _DAT_1831a0a38) + (uVar1 & _DAT_1831a0a38);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0e28 = func_0x000187da8ad0((uVar1 | 0x8422239a) + (ulonglong)((uint)uVar1 & 0x8422239a))
  ;
  uVar1 = _DAT_1831a0e28 & 0x7fffffffffffffff;
  _DAT_1831a0988 = _DAT_1831a0a98 ^ uVar1 ^ 0xbf;
  _DAT_1831a09d8 = (_DAT_1831a09d8 ^ uVar1) + 0xbf ^ 0x94b11cf2422c83d8;
  _DAT_1831a0f90 = (_DAT_1831a0f90 * 0xf89f2c26c452d93 ^ _DAT_1831a09d8) + uVar1;
  _DAT_1831a0cf8 = _DAT_1831a0f90 ^ _DAT_1831a09d8;
  _DAT_1831a0fc0 = 0xbf;
  uVar1 = (~_DAT_1831a1070 + 0x7ce7efdc) *
          ((_DAT_1831a0eb0 ^ 0xf8c5ccfe) + (ulonglong)((uint)_DAT_1831a0eb0 & 0xf8c5ccfe) * 2);
  uVar1 = (uVar1 | _DAT_1831a0bb0) + (uVar1 & _DAT_1831a0bb0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a0908 = func_0x000187da8ad0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_1831a0a08 = _DAT_1831a0a08 ^ _DAT_1831a0c68 ^ 0x5e0bfa142a61c8a9;
  _DAT_1831a0d50 = (_DAT_1831a0d50 * 0x49f59ee677286b47 ^ _DAT_1831a0a08) + _DAT_1831a0c68;
  _DAT_1831a0a98 = _DAT_1831a0d50 ^ _DAT_1831a0a08;
  _DAT_1831a1060 = 0;
  _DAT_1831a0d48 = func_0x000187da8ad0(_DAT_1831a0be0 ^ 0xffdf008466001d3e);
  uVar1 = _DAT_1831a0d48 >> 1 | _DAT_1831a0d48;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1831a0d48) & 0x7ffffffffffff;
  _DAT_1831a0fd0 = _DAT_1831a10d8 ^ uVar1 ^ 0xbf;
  _DAT_1831a0e80 = (_DAT_1831a0e80 ^ uVar1) + 0xbf ^ 0xd610c02ab0102441;
  _DAT_1831a0a70 = (_DAT_1831a0a70 * -0x61023ea9a4fe519 ^ _DAT_1831a0e80) + uVar1;
  _DAT_1831a09e8 = _DAT_1831a0a70 ^ _DAT_1831a0e80;
  _DAT_1831a0de0 = 0xbf;
  switch(0xbf < (int)uVar2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d8e13c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d8e13c(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  longlong *unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = (**(code **)(unaff_R14 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x80) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x88));
  (**(code **)(unaff_R14 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  *(undefined4 *)(unaff_RBP + 0x90) = 6;
  *(undefined8 *)(unaff_RBP + 0x80) = unaff_RBX;
  uVar3 = unaff_R15 ^ unaff_R12 ^ _DAT_1831a0f28;
  lVar2 = (unaff_R15 ^ unaff_R12) + _DAT_1831a0b10;
  uVar4 = uVar3 + lVar2;
  uVar5 = (_DAT_1831a0b10 ^ 2) + _DAT_1831a0f28 + 2;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a0b10 ^ 2;
  _DAT_1831a0f80 =
       func_0x000187da8ad0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a0f28 + 2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar3 = (unaff_R15 * 2 ^ _DAT_1831a0f80) & 0xfffffffffffffffe ^ unaff_R15;
  uVar8 = (uint)unaff_R15;
  uVar7 = uVar8 & _DAT_180017990;
  uVar6 = uVar8 | _DAT_180017990;
  uVar8 = uVar8 ^ _DAT_180017990;
  uVar4 = unaff_R15 ^ _DAT_18001a710;
  lVar2 = ((unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180dc96e0 << 0x20) +
          (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180dc96d0;
  uVar4 = (((uVar4 & 0xffffffff) * (ulonglong)_DAT_180dc96a0 +
            ((uVar4 >> 0x20) * (ulonglong)_DAT_180dc96a0 +
             (uVar4 & 0xffffffff) * (ulonglong)_DAT_180dc9660 << 0x20) +
            ((ulonglong)uVar8 * (ulonglong)_DAT_180dc9690 << 0x20) +
            (ulonglong)uVar8 * (ulonglong)_DAT_180dc9680 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_180dc9690 << 0x20 |
            (ulonglong)uVar7 * (ulonglong)_DAT_180dc9680) +
            (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180dc9670 +
            ((unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180dc9660 << 0x20) + lVar2 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_180dc96c0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_180dc96b0) -
          (((ulonglong)uVar8 * (ulonglong)_DAT_180dc9760 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180dc9750 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_180dc9740 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_180dc9730 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_180dc9720 << 0x20 |
           (ulonglong)uVar7 * (ulonglong)_DAT_180dc9710) +
           ((unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180dc9700 << 0x20) +
           (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180dc96f0 + lVar2)) + 0x1bf6fb45be40d834;
  _DAT_1831a10e8 = _DAT_1831a0eb8 ^ uVar3 ^ uVar4;
  _DAT_1831a0b10 = (_DAT_1831a0b10 ^ uVar3) + uVar4 ^ 0x48b6e7083c0c9265;
  _DAT_1831a0f58 = (_DAT_1831a0f58 * 0x7c8c6757bf0304d7 ^ _DAT_1831a0b10) + uVar3;
  _DAT_1831a0db8 = _DAT_1831a0f58 ^ _DAT_1831a0b10;
  _DAT_1831a09e0 = uVar4 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar4;
  iVar1 = (**(code **)(unaff_R14 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d94f51 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d94f51(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R14;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x40) = uVar2;
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d94f9b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d94f9b(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  undefined8 unaff_R13;
  longlong *unaff_R14;
  
  uVar2 = (**(code **)(unaff_R14 + JNI->AllocObject /*0xd8*/))();
  *(undefined8 *)(unaff_RBP + 0x80) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x88) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x90) = unaff_R13;
  *(undefined4 *)(unaff_RBP + 0x98) = 0;
  *(undefined4 *)(unaff_RBP + 0xa0) = unaff_EDI;
  FUN_190ddfc90();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d9525c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d9525c(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d9536c -----

void FUN_187d9536c(void)

{
  return;
}


// ----- block @ rva 0x7dab627 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187dab627(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7dab7c4 -----

void FUN_187dab7c4(void)

{
  return;
}


// ----- block @ rva 0x7dac2c3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187dabc54(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7daca88 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187daca88(void)

{
  char cVar1;
  longlong *unaff_R12;
  undefined4 uStack000000000000009c;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  
  uStack000000000000009c = 0xc02c1c2d;
  rdtsc();
  uStack00000000000000e0 = 0x2f005300450044;
  rdtsc();
  uStack00000000000000e8 = 0x2f004300420043;
  rdtsc();
  uStack00000000000000f0 = 0x530043004b0050;
  rdtsc();
  uStack00000000000000f8 = 0x64006100500035;
  rdtsc();
  uStack0000000000000100 = 0x67006e00690064;
  (**(code **)(unaff_R12 + JNI->NewString /*0x518*/))();
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


// ----- block @ rva 0x7dacfc4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187dacfc4(void)

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


// ----- block @ rva 0x7dadd80 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187dabc54(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7daf6e4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187daf6e4(void)

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


// ----- block @ rva 0x7dafa8f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187dafa8f(void)

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


// ----- block @ rva 0x7dafb2f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187dafb2f(void)

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


// ----- block @ rva 0x7db00af -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db00af(void)

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


// ----- block @ rva 0x7db00e8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db00e8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180dd0378)();
  return;
}


// ----- block @ rva 0x7db0103 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187db0103(void)

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


// ----- block @ rva 0x7db015c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187db015c(void)

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


// ----- block @ rva 0x7db0356 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db0356(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180dd0378)();
  return;
}


// ----- block @ rva 0x7db0783 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db0783(void)

{
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = in_stack_00000030;
  FUN_190dd72e0();
  (*_DAT_180dd0108)();
  return;
}


// ----- block @ rva 0x7db080e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187db080e(void)

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


// ----- block @ rva 0x7db0bea -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187db0bea(void)

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


// ----- block @ rva 0x7db0cdc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db0cdc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180dd0438)();
  return;
}


// ----- block @ rva 0x7db0e68 -----

void FUN_187db0e68(void)

{
  return;
}


// ----- block @ rva 0x7db0e76 -----

void FUN_187db0e76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7db0fe0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db0fe0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180dd07c8)();
  return;
}


// ----- block @ rva 0x7db11b2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db11b2(void)

{
  FUN_190de3220();
  (*_DAT_180dd08e8)();
  return;
}


// ----- block @ rva 0x7db169b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187db169b(void)

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


// ----- block @ rva 0x7db1792 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db1792(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180dd0708)();
  return;
}


// ----- block @ rva 0x7db191f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db191f(void)

{
  (*_DAT_180dd1008)();
  return;
}


// ----- block @ rva 0x7db1a48 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db1a48(void)

{
  (*_DAT_180dd1018)();
  return;
}


// ----- block @ rva 0x7db2863 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187db2863(void)

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


// ----- block @ rva 0x7db331c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db331c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dd08b8)();
  return;
}


// ----- block @ rva 0x7db33ce -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db33ce(void)

{
  (*_DAT_180dd1008)();
  return;
}


// ----- block @ rva 0x7db37ca -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187db37ca(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dd0d68)();
  return;
}


// ----- block @ rva 0x7db38c5 -----

void FUN_187db38c5(void)

{
  return;
}


// ----- block @ rva 0x7db38e4 -----

void FUN_187db38e4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

