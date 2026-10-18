// ===== Lsixtwo/li$uw; _0a83ae2426c6512d17bcc5ebcfaae924 ()V (handler @ image 187d7b530, runtime 6fffef98b530) =====

void FUN_187d7b530(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b219,0x438);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b219,0x438);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b219,0x438);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d680bc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dc1e00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



