// ===== Lsixtwo/bc; BA (Lsixtwo/bc$sa;Lsixtwo/bc$sa;)I (handler @ image 18f1b0490, runtime 6ffff6dc0490) =====

void FUN_18f1b0490(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bff,0x132);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f1b0554 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182851f90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; BB (Lsixtwo/lC;)V (handler @ image 18f1b3380, runtime 6ffff6dc3380) =====

void FUN_18f1b3380(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bff,0x132);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f1b349f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182852c00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; BC (Lsixtwo/bc;)Lsixtwo/rk; (handler @ image 18f1c1650, runtime 6ffff6dd1650) =====

void FUN_18f1c1650(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f1c1670 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828575b0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; BD (Lsixtwo/bc;)F (handler @ image 18f1c1850, runtime 6ffff6dd1850) =====

void FUN_18f1c1850(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f1c1875 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182857690 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; BE (Lsixtwo/bc;)F (handler @ image 18f1c1a60, runtime 6ffff6dd1a60) =====

void FUN_18f1c1a60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f1c1a85 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182857770 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; BF (Lsixtwo/bc;)F (handler @ image 18f1c1c70, runtime 6ffff6dd1c70) =====

void FUN_18f1c1c70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f1c1c95 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182857850 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; BG (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18f1c7460, runtime 6ffff6dd7460) =====

undefined8 FUN_18f1c7460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/bc; BH ([B)Ljava/lang/String; (handler @ image 18f1c74f0, runtime 6ffff6dd74f0) =====

void FUN_18f1c74f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f1c7593 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182859580 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; BI (IJ)Ljava/lang/String; (handler @ image 18f1f13f0, runtime 6ffff6e013f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1f13f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  
  uVar7 = (~uRam00000001833f25c8 + 0x4be5b97ce91046fe) *
          ((uRam00000001833f24d8 ^ 0xd3a1e03e97c0060) +
          (uRam00000001833f24d8 & 0xd3a1e03e97c0060) * 2);
  uVar7 = (uVar7 | uRam00000001833f2548) + (uVar7 & uRam00000001833f2548);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f2558 =
       func_0x00018f1f8190((uVar7 | 0x46dfa77f006c469d) + (uVar7 & 0x46dfa77f006c469d));
  uVar3 = uRam00000001833f2558 ^ 0xd3a1e036d5e2345;
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  uRam00000001833f24a8 = (uRam00000001833f24a8 ^ uVar3) + 0x4fffbf7fed5e67fd ^ 0x1f351439772d4de1;
  uRam00000001833f25b8 = (uRam00000001833f25b8 * 0x249ea5f39e096b1 ^ uRam00000001833f24a8) + uVar3;
  uRam00000001833f2628 = uRam00000001833f25b8 ^ uRam00000001833f24a8;
  uRam00000001833f23f8 = 0x4fffbf7fed5e67fd;
  uVar7 = ((uRam00000001833f25d8 ^ 0xcbd2eabbd0713834) +
          (uRam00000001833f25d8 & 0x4bd2eabbd0713834) * 2) * 0xd5cf7054865f763;
  uVar7 = (uVar7 | uRam00000001833f24c0) + (uVar7 & uRam00000001833f24c0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f2590 =
       func_0x00018f1f8190((uVar7 | 0x968e5c3ee5b56754) + (uVar7 & 0x968e5c3ee5b56754));
  uVar7 = (uRam00000001833f2590 ^ 0x428a2140420a11) & 0xcbd2eabb54531b11;
  uRam00000001833f26b8 = (uRam00000001833f26b8 ^ uVar7) + 0x968e5c3e61974471 ^ 0x6a54d45e5a43096d;
  uRam00000001833f2338 = (uRam00000001833f2338 * -0x4e7e4806eb1193f5 ^ uRam00000001833f26b8) + uVar7
  ;
  uRam00000001833f26c8 = uRam00000001833f2338 ^ uRam00000001833f26b8;
  uRam00000001833f25d8 = 0x968e5c3e61974471;
  uVar7 = (~uRam00000001833f24e0 + 0xe65da63fff7de0cc) *
          ((uRam00000001833f24c0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833f24c0 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam00000001833f2558) + (uVar7 & uRam00000001833f2558);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f2678 =
       func_0x00018f1f8190((uVar7 | 0xe65da63f7b5fc3ee) + (uVar7 & 0xe65da63f7b5fc3ee));
  uVar7 = uRam00000001833f2678 << 0xe | uRam00000001833f2678 >> 0x32;
  uRam00000001833f26b8 = (uRam00000001833f26b8 ^ uVar7) + 0x19a259c000821f35 ^ 0xe477ad341de10e88;
  uRam00000001833f2610 = (uRam00000001833f2610 * -0x24abc88b0a0d7e79 ^ uRam00000001833f26b8) + uVar7
  ;
  uRam00000001833f23a0 = uRam00000001833f2610 ^ uRam00000001833f26b8;
  uRam00000001833f2368 = 0x19a259c000821f35;
  uVar7 = (~uRam00000001833f23e8 + 0xe65da63fff7de0cc) *
          ((uRam00000001833f2400 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833f2400 & 0x84225cda) * 2);
  uVar7 = (uVar7 | uRam00000001833f25b0) + (uVar7 & uRam00000001833f25b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f25e8 =
       func_0x00018f1f8190((uVar7 | 0xe65da63f7b5fbc11) + (uVar7 & 0xe65da63f7b5fbc11));
  uRam00000001833f25e0 = uRam00000001833f26f8 ^ uRam00000001833f25e8 ^ 0xe65da63fff7e60ca;
  uRam00000001833f25b8 =
       (uRam00000001833f25b8 ^ uRam00000001833f25e8) + 0xe65da63fff7e60ca ^ 0x8e176e6e9ccf9405;
  uRam00000001833f2688 =
       (uRam00000001833f2688 * -0x267eaa8e9e319e3d ^ uRam00000001833f25b8) + uRam00000001833f25e8;
  uRam00000001833f2670 = uRam00000001833f2688 ^ uRam00000001833f25b8;
  uRam00000001833f2580 = 0xe65da63fff7e60ca;
  uRam00000001833f24d8 = func_0x00018f1f8190(uRam00000001833f23f8 ^ 0x38d37569c510d18e);
  uVar7 = uRam00000001833f24d8 << 0x1e | uRam00000001833f24d8 >> 0x22;
  uRam00000001833f2348 = uRam00000001833f2410 ^ uVar7 ^ 0x7fff;
  uRam00000001833f2358 = (uRam00000001833f2358 ^ uVar7) + 0x7fff ^ 0xd358da736d306bc2;
  uRam00000001833f2688 = (uRam00000001833f2688 * 0x5173bd185bf6eec3 ^ uRam00000001833f2358) + uVar7;
  uRam00000001833f24a0 = uRam00000001833f2688 ^ uRam00000001833f2358;
  uRam00000001833f2420 = 0x7fff;
  uVar7 = (uRam00000001833f2600 ^ _UNK_1828607f0) + uRam00000001833f24f8 + 0x84222325;
  uVar3 = (uRam00000001833f24f8 ^ _UNK_1828607f8) + uRam00000001833f2600 + 0x53a53d811efd4612;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833f2600 ^ _UNK_1828607f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833f24f8 ^ _UNK_1828607f8;
  uRam00000001833f2460 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833f2600 + 0x53a53d811efd4612) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833f24f8 + 0x84222325));
  uRam00000001833f23b8 =
       (uRam00000001833f23b8 ^ uRam00000001833f2460) + 0xac5ac27ee102b9ee ^ 0x9c4b4ccde9a45bfb;
  uRam00000001833f2380 =
       (uRam00000001833f2380 * 0x40102514a5874dcb ^ uRam00000001833f23b8) + uRam00000001833f2460;
  uRam00000001833f26b8 = uRam00000001833f2380 ^ uRam00000001833f23b8;
  uRam00000001833f2570 = 0xac5ac27ee102b9ee;
  uVar7 = (uRam00000001833f2548 ^ _UNK_182860800) + uRam00000001833f24c8 + 0x53a53d819adfe534;
  uVar3 = (uRam00000001833f24c8 ^ _UNK_182860808) + uRam00000001833f2548 + 0xac5ac27ee102b9ee;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833f2548 ^ _UNK_182860800;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833f24c8 ^ _UNK_182860808;
  uRam00000001833f2470 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833f2548 + 0xac5ac27ee102b9ee) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833f24c8 + 0x53a53d819adfe534));
  uVar7 = ((uRam00000001833f2470 ^ 0xac5ac27ee10239ee) << 0x34 |
          (uRam00000001833f2470 ^ 0xac5ac27ee10239ee) >> 0xc) ^ 0x53a53d811efdc611;
  uRam00000001833f25f8 = uRam00000001833f2628 ^ uVar7 ^ 0x7fff;
  uRam00000001833f24f8 = (uRam00000001833f24f8 ^ uVar7) + 0x7fff ^ 0x4804b91a2545af2;
  uRam00000001833f24a8 = (uRam00000001833f24a8 * 0x3aa2b907657f9e57 ^ uRam00000001833f24f8) + uVar7;
  uRam00000001833f2698 = uRam00000001833f24a8 ^ uRam00000001833f24f8;
  uRam00000001833f24b8 = 0x7fff;
  uVar7 = (~uRam00000001833f2600 + 0xe28327b1b7edd603) *
          ((uRam00000001833f2430 ^ 0x1d7cd84ecc308ad8) +
          (uRam00000001833f2430 & 0x1d7cd84ecc308ad8) * 2);
  uVar7 = (uVar7 | uRam00000001833f24d0) + (uVar7 & uRam00000001833f24d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f2508 =
       func_0x00018f1f8190((uVar7 | 0xffffffff7bdd5cda) + (uVar7 & 0xffffffff7bdd5cda));
  uVar7 = (uRam00000001833f2508 & 0x7ffffffffff) - (uRam00000001833f2508 >> 1 & 0x15555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uRam00000001833f2508 & 0x7ffffffffff) >> 0x26 |
          ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam00000001833f2508 & 0x7ffffffffff) << 0x1a;
  uRam00000001833f2388 = uRam00000001833f2610 ^ uVar7 ^ 0x7fff;
  uRam00000001833f23d0 = (uRam00000001833f23d0 ^ uVar7) + 0x7fff ^ 0x4d9264204e2040ca;
  uRam00000001833f26c0 = (uRam00000001833f26c0 * 0x10e8a76d6b3096a5 ^ uRam00000001833f23d0) + uVar7;
  uRam00000001833f2370 = uRam00000001833f26c0 ^ uRam00000001833f23d0;
  uRam00000001833f25c0 = 0x7fff;
  uVar7 = (~uRam00000001833f24c0 + 0x968e5c3e61974472) *
          ((uRam00000001833f2528 ^ 0x4fffbf7f697c44d8) +
          (uRam00000001833f2528 & 0x4fffbf7f697c44d8) * 2);
  uVar7 = (uVar7 | uRam00000001833f2338) + (uVar7 & uRam00000001833f2338);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f2510 =
       func_0x00018f1f8190((uVar7 | 0xd971e34108eb00a9) + (uVar7 & 0xd971e34108eb00a9));
  uRam00000001833f26c0 = uRam00000001833f25c0 ^ uRam00000001833f2510 ^ 0xe68e1bbe4ef5ac6e;
  uRam00000001833f2500 =
       (uRam00000001833f2500 ^ uRam00000001833f2510) + 0xe68e1bbe4ef5ac6e ^ 0xf7349d5dffb85809;
  uRam00000001833f2410 =
       (uRam00000001833f2410 * -0x36e1e67da88a5d17 ^ uRam00000001833f2500) + uRam00000001833f2510;
  uRam00000001833f25b0 = uRam00000001833f2410 ^ uRam00000001833f2500;
  uRam00000001833f2660 = uRam00000001833f2628 ^ 0xe68e1bbe4ef5ac6e;
  uRam00000001833f2380 = 0xe68e1bbe4ef5ac6e;
  lRam00000001833f2638 = func_0x00018f1f8190(uRam00000001833f2308 + 0xbf00510856e01648 ^ 0x7a);
  uRam00000001833f24d8 =
       (uRam00000001833f24d8 ^ lRam00000001833f2638 * -0x45710aa3ffb3f9b9) + 0xd971e3418cc9238c ^
       0xa8c5533df3850deb;
  uRam00000001833f2668 =
       (uRam00000001833f2668 * 0x72029a60943d2a1f ^ uRam00000001833f24d8) +
       lRam00000001833f2638 * -0x45710aa3ffb3f9b9;
  uRam00000001833f2550 = uRam00000001833f2668 ^ uRam00000001833f24d8;
  uRam00000001833f2518 = 0xd971e3418cc9238c;
  uVar7 = (~uRam00000001833f2400 + 0x968e5c3e61974472) *
          ((uRam00000001833f2588 ^ 0x4fffbf7f697c44d8) +
          (uRam00000001833f2588 & 0x4fffbf7f697c44d8) * 2);
  uVar7 = (uVar7 | uRam00000001833f2508) + (uVar7 & uRam00000001833f2508);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f25b0 =
       func_0x00018f1f8190((uVar7 | 0xd971e34108eb00a9) + (uVar7 & 0xd971e34108eb00a9));
  uRam00000001833f25f8 =
       (uRam00000001833f25f8 ^ uRam00000001833f25b0 ^ 0xdfffff7feddf67fd) + 0x68e1c3e61164471 ^
       0x2cfc9eadc30a477e;
  uRam00000001833f24e8 =
       (uRam00000001833f24e8 * -0x22010c095584ce37 ^ uRam00000001833f25f8) +
       (uRam00000001833f25b0 ^ 0xdfffff7feddf67fd);
  uRam00000001833f2578 = uRam00000001833f24e8 ^ uRam00000001833f25f8;
  uRam00000001833f2398 = 0x68e1c3e61164471;
  uVar7 = (~uRam00000001833f2348 + 0xd1c387cc22c88e3) *
          ((uRam00000001833f2550 ^ 0xd971e34108eb00a9) +
          (uRam00000001833f2550 & 0x5971e34108eb00a9) * 2);
  uVar7 = (uVar7 | uRam00000001833f2530) + (uVar7 & uRam00000001833f2530);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f26c8 =
       func_0x00018f1f8190((uVar7 | 0xd46ddb3dcac7884b) + (uVar7 & 0xd46ddb3dcac7884b));
  uVar7 = (uRam00000001833f26c8 ^ 0x63bde9fb5883c198) << 0xf |
          (uRam00000001833f26c8 ^ 0x63bde9fb5883c198) >> 0x31;
  uRam00000001833f2648 = uRam00000001833f2480 ^ uVar7 ^ 0xe68e1bbe4ef5ac6e;
  uRam00000001833f23e0 = (uRam00000001833f23e0 ^ uVar7) + 0xe68e1bbe4ef5ac6e ^ 0x20b14ab6ea222825;
  uRam00000001833f2448 = (uRam00000001833f2448 * 0x56d8dc5086864313 ^ uRam00000001833f23e0) + uVar7;
  uRam00000001833f2380 = uRam00000001833f2448 ^ uRam00000001833f23e0;
  uRam00000001833f26a0 = 0xe68e1bbe4ef5ac6e;
  uVar7 = (~uRam00000001833f2540 + 0xe68e1bbe4ef5ac6f) *
          ((uRam00000001833f2360 ^ 0xe68e1bbecad78f4b) +
          (uRam00000001833f2360 & 0x668e1bbecad78f4b) * 2);
  uVar7 = (uVar7 | uRam00000001833f2438) + (uVar7 & uRam00000001833f2438);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f23e8 =
       func_0x00018f1f8190((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam00000001833f2320 = uRam00000001833f23e8 << 0x31 | uRam00000001833f23e8 >> 0xf;
  uVar7 = uRam00000001833f2320 >> 1 | uRam00000001833f2320;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uRam00000001833f2320 =
       (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       uRam00000001833f2320;
  uRam00000001833f2488 = uRam00000001833f2488 ^ uRam00000001833f2320 ^ 0x31e0fcb8293177ac;
  uRam00000001833f26d0 =
       (uRam00000001833f26d0 * 0x58838e6c45aec99 ^ uRam00000001833f2488) + uRam00000001833f2320;
  uRam00000001833f2688 = uRam00000001833f26d0 ^ uRam00000001833f2488;
  uRam00000001833f2390 = 0;
  uRam00000001833f2610 = func_0x00018f1f8190(uRam00000001833f26a0 ^ 0xffbbff7cd60021a8);
  uRam00000001833f2380 = uRam00000001833f23e8 ^ uRam00000001833f2610 ^ 0x7fff;
  uRam00000001833f2470 = (uRam00000001833f2470 ^ uRam00000001833f2610) + 0x7fff ^ 0x875ceaa8132e60d8
  ;
  uRam00000001833f2668 =
       (uRam00000001833f2668 * 0x37e4ea72d1a78d9 ^ uRam00000001833f2470) + uRam00000001833f2610;
  uRam00000001833f2648 = uRam00000001833f2668 ^ uRam00000001833f2470;
  uRam00000001833f23a0 = 0x7fff;
  uRam00000001833f25c0 = func_0x00018f1f8190(uRam00000001833f25a0 + 0x8049006a194083af ^ 0x7e);
  uRam00000001833f2508 =
       (uRam00000001833f2508 ^ ~uRam00000001833f25c0 & 0x4fffbf7fed5e67fd) + 0xb000408012a19802 ^
       0xe5cc646200195cc1;
  uRam00000001833f2408 =
       (uRam00000001833f2408 * 0x2f862e8124c016a9 ^ uRam00000001833f2508) +
       (~uRam00000001833f25c0 & 0x4fffbf7fed5e67fd);
  uRam00000001833f24d0 = uRam00000001833f2408 ^ uRam00000001833f2508;
  uRam00000001833f2698 = 0xb000408012a19802;
  uVar7 = (uRam00000001833f2668 ^ _UNK_182860810) + uRam00000001833f25a0 + 0x4fffbf7f697c44d8;
  uVar3 = (uRam00000001833f25a0 ^ _UNK_182860818) + uRam00000001833f2668 + 0xb000408012a19802;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833f2668 ^ _UNK_182860810;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833f25a0 ^ _UNK_182860818;
  uRam00000001833f25b0 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833f2668 + 0xb000408012a19802) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833f25a0 + 0x4fffbf7f697c44d8));
  uRam00000001833f25c0 =
       uRam00000001833f25b8 ^ uRam00000001833f24c8 & 0x7fffffffffffffff ^ 0xaad02c0e9ae6c68e;
  uRam00000001833f2640 =
       (uRam00000001833f2640 * -0x2019139ce12bbc2b ^ uRam00000001833f25c0) +
       (uRam00000001833f24c8 & 0x7fffffffffffffff);
  uRam00000001833f25c0 = uRam00000001833f2640 ^ uRam00000001833f25c0;
  uRam00000001833f25b8 = 0;
  uRam00000001833f2380 = func_0x00018f1f8190(uRam00000001833f2418 ^ 0x22ff8424ffdd1b);
  uRam00000001833f23f0 =
       uRam00000001833f23f0 ^ uRam00000001833f2380 & 0x7ffffffffff ^ 0xe477c97b6d3682a7;
  uRam00000001833f2670 =
       (uRam00000001833f2670 * -0x517b49f35f64a4df ^ uRam00000001833f23f0) +
       (uRam00000001833f2380 & 0x7ffffffffff);
  uRam00000001833f25f0 = uRam00000001833f2670 ^ uRam00000001833f23f0;
  uRam00000001833f2358 = 0;
  uVar7 = (~uRam00000001833f2490 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001833f2510) +
          ((param_4 ^ 0x84222325) & uRam00000001833f2510) * 2);
  uVar7 = (uVar7 | uRam00000001833f23a0) + (uVar7 & uRam00000001833f23a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f2690 =
       func_0x00018f1f8190((param_4 ^ 0x84225cda | uVar7) + (uVar7 & (param_4 ^ 0x84225cda)));
  auVar9 = _UNK_1800170c0;
  uVar7 = uRam00000001833f2690 - (uRam00000001833f2690 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam00000001833f2690) << 5 | uRam00000001833f2690 >> 0x3b;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar3 = (ulonglong)uVar2;
  uRam00000001833f2578 = (uRam00000001833f2578 ^ uVar7) + uVar3 ^ 0xda7a7ffb273e0bfa;
  uRam00000001833f2530 = (uRam00000001833f2530 * -0x2390a791afb35099 ^ uRam00000001833f2578) + uVar7
  ;
  uRam00000001833f2380 = uRam00000001833f2530 ^ uRam00000001833f2578;
  auVar10._4_4_ = 0;
  auVar10._0_4_ = uVar2 ^ 0x84222325;
  auVar10._8_4_ = param_3;
  auVar10._12_4_ = 0;
  auVar11 = pshufb(auVar10 ^ _UNK_182860820,_UNK_1800170c0);
  uVar8 = auVar11._8_8_ + auVar11._0_8_;
  uVar7 = uVar8 + uRam00000001833f25b0;
  if (auVar11._4_4_ < 0) {
    uVar7 = uRam00000001833f2610 ^ uVar8;
  }
  uRam00000001833f23c8 = uVar3;
  uRam00000001833f2608 = func_0x00018f1f8190(SUB161(auVar10 ^ _UNK_182860820,5) ^ uVar7);
  uVar7 = ~(ulonglong)((uint)uRam00000001833f2608 ^ uVar2 * param_3) & uVar3;
  uVar4 = (uVar3 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001833f2690 = (uRam00000001833f2690 ^ uVar7) + uVar4 ^ 0xa41c3e491cb91c90;
  uRam00000001833f24d8 = (uRam00000001833f24d8 * 0x30d28b755b4cb60f ^ uRam00000001833f2690) + uVar7;
  uRam00000001833f2378 = uRam00000001833f24d8 ^ uRam00000001833f2690;
  uVar5 = uVar4 & 0xffffffff;
  uVar7 = (~uRam00000001833f26f0 + 0xf8a57abd) *
          ((uRam00000001833f2448 ^ 0x5aaa1e3e) +
          (ulonglong)((uint)uRam00000001833f2448 & 0x5aaa1e3e) * 2);
  uVar7 = (uVar7 | uRam00000001833f2580) + (uVar7 & uRam00000001833f2580);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f2698 = uVar5;
  uRam00000001833f2528 =
       func_0x00018f1f8190((uVar7 | 0xa20f6482) + (ulonglong)((uint)uVar7 & 0xa20f6482));
  uRam00000001833f2320 =
       (uRam00000001833f2320 ^ uRam00000001833f2528 & 0x1ffffffff) + 0xfead7fbf ^ 0xb0b4a3e1c53ccc17
  ;
  uRam00000001833f2460 =
       (uRam00000001833f2460 * 0x2b79c419579d944b ^ uRam00000001833f2320) +
       (uRam00000001833f2528 & 0x1ffffffff);
  uRam00000001833f23e8 = uRam00000001833f2460 ^ uRam00000001833f2320;
  uRam00000001833f25d8 = 0xfead7fbf;
  uRam00000001833f2618 = func_0x00018f1f8190(uRam00000001833f25b8 + 0x6ae0008fff ^ 0x8e);
  uRam00000001833f2348 =
       (uRam00000001833f2348 ^ uRam00000001833f2618) - 0x1fb22345 ^ 0x21cbc51773b1135d;
  uRam00000001833f2358 =
       (uRam00000001833f2358 * -0x72b207f9412dd391 ^ uRam00000001833f2348) + uRam00000001833f2618;
  uRam00000001833f2450 = uRam00000001833f2358 ^ uRam00000001833f2348;
  uRam00000001833f2620 = 0xe04ddcbb;
  uVar7 = (uRam00000001833f24d0 ^ _UNK_182860830) + uRam00000001833f26b0 + 0x84227afe;
  uVar3 = (uRam00000001833f26b0 ^ _UNK_182860838) + uRam00000001833f24d0 + 0xd7d52640;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833f24d0 ^ _UNK_182860830;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833f26b0 ^ _UNK_182860838;
  uRam00000001833f2520 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833f24d0 + 0xd7d52640) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833f26b0 + 0x84227afe));
  uVar7 = uRam00000001833f2520 - (uRam00000001833f2520 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam00000001833f2520;
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  uRam00000001833f2468 = uRam00000001833f2388 ^ uVar3 ^ 0xd7d5801b;
  uRam00000001833f2348 = (uRam00000001833f2348 ^ uVar3) + 0xd7d5801b ^ 0x3928cdd09c552e16;
  uRam00000001833f2538 = (uRam00000001833f2538 * 0x61b7ca5ade1541ef ^ uRam00000001833f2348) + uVar3;
  uRam00000001833f25f0 = uRam00000001833f2538 ^ uRam00000001833f2348;
  uRam00000001833f2668 = 0xd7d5801b;
  uVar7 = (uRam00000001833f2528 ^ _UNK_182860840) + uRam00000001833f2688 + 0x53f7a33e;
  uVar3 = (uRam00000001833f2688 ^ _UNK_182860848) + uRam00000001833f2528 + 0x282ad9c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833f2528 ^ _UNK_182860840;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833f2688 ^ _UNK_182860848;
  uRam00000001833f23d0 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833f2528 + 0x282ad9c0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833f2688 + 0x53f7a33e));
  uRam00000001833f2678 = uRam00000001833f25e8 ^ uRam00000001833f23d0 ^ 0x1000059db;
  uRam00000001833f2540 =
       (uRam00000001833f2540 ^ uRam00000001833f23d0) + 0x1000059db ^ 0xc55bdcc5002cf37f;
  uRam00000001833f25c0 =
       (uRam00000001833f25c0 * 0x40c419307b6722ab ^ uRam00000001833f2540) + uRam00000001833f23d0;
  uRam00000001833f23a8 = uRam00000001833f25c0 ^ uRam00000001833f2540;
  uRam00000001833f2560 = 0x59db;
  uRam00000001833f2540 = func_0x00018f1f8190(lRam00000001833f26e0 + 0x4ff69a30019ffU ^ 0x91);
  uRam00000001833f2588 =
       (uRam00000001833f2378 ^ uRam00000001833f2540) - 0x3d0c2e80 ^ 0xcc9990a785cacf78;
  uRam00000001833f2568 =
       (uRam00000001833f2568 * -0x21b9d220bb9223bf ^ uRam00000001833f2588) + uRam00000001833f2540;
  uRam00000001833f2588 = uRam00000001833f2568 ^ uRam00000001833f2588;
  uRam00000001833f2378 = 0xc2f3d180;
  uRam00000001833f2560 = func_0x00018f1f8190(uRam00000001833f2480 ^ 0x4c0098860019f3);
  uVar3 = _UNK_182860858;
  uVar7 = _UNK_182860850;
  uVar8 = uRam00000001833f2560 >> 1 | uRam00000001833f2560;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001833f2560;
  uRam00000001833f26c8 = uRam00000001833f2668 ^ uVar8 ^ 0x3d0c885b;
  uRam00000001833f2370 = (uRam00000001833f2370 ^ uVar8) + 0x3d0c885b ^ 0x9401c5727cdfe90a;
  uRam00000001833f25b0 = (uRam00000001833f25b0 * 0x1ad2c473baf1e9cd ^ uRam00000001833f2370) + uVar8;
  uRam00000001833f2488 = uRam00000001833f25b0 ^ uRam00000001833f2370;
  uRam00000001833f26f8 = 0x3d0c885b;
  uVar8 = (uRam00000001833f23f8 ^ _UNK_182860850) + uRam00000001833f2368 + 0x7a8f5c9a;
  uVar12 = (uRam00000001833f2368 ^ _UNK_182860858) + uRam00000001833f23f8 + 0xa759a0d4;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833f23f8 ^ _UNK_182860850;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001833f2368 ^ _UNK_182860858;
  uRam00000001833f2360 =
       func_0x00018f1f8190((uVar12 << 0x1d | uVar12 >> 0x23) - (uRam00000001833f23f8 + 0xa759a0d4) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833f2368 + 0x7a8f5c9a));
  uVar8 = uRam00000001833f2360 >> 1 | uRam00000001833f2360;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001833f2360) & 0xffffffffff000000;
  uRam00000001833f24f8 = uRam00000001833f2338 ^ uVar8 ^ 0x1a6072093;
  uRam00000001833f25c8 = (uRam00000001833f25c8 ^ uVar8) + 0x1a6072093 ^ 0x52dc86c30fa3902d;
  uRam00000001833f2420 = (uRam00000001833f2420 * 0x269c2a8d93d4026f ^ uRam00000001833f25c8) + uVar8;
  uRam00000001833f2500 = uRam00000001833f2420 ^ uRam00000001833f25c8;
  uRam00000001833f24a0 = uRam00000001833f2538 ^ 0x1a6072093;
  uRam00000001833f23c0 = 0xa6072093;
  uRam00000001833f2660 = func_0x00018f1f8190(uRam00000001833f24c0 + 0xff9c003b3e00b1ff ^ 0x6c);
  uRam00000001833f23e0 =
       (uRam00000001833f23e0 ^ uRam00000001833f2660 & 0x7fffffffffffffff) + 0x59f4df6b ^
       0x4636c6db07bd983;
  uRam00000001833f2418 =
       (uRam00000001833f2418 * 0x40a204cd399557db ^ uRam00000001833f23e0) +
       (uRam00000001833f2660 & 0x7fffffffffffffff);
  uRam00000001833f2620 = uRam00000001833f2418 ^ uRam00000001833f23e0;
  uRam00000001833f2498 = 0x59f4df6b;
  uVar8 = (uRam00000001833f2478 ^ uVar7) + uRam00000001833f25e8 + 0x7a8f5c9a;
  uVar12 = (uRam00000001833f25e8 ^ uVar3) + uRam00000001833f2478 + 0xa759a0d4;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833f2478 ^ uVar7;
  uVar3 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001833f25e8 ^ uVar3;
  uRam00000001833f2528 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833f2478 + 0xa759a0d4) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833f25e8 + 0x7a8f5c9a));
  uVar7 = (uRam00000001833f2528 ^ 0xfffdffff) & 0x7fffffffffffffff;
  uRam00000001833f2670 = (uRam00000001833f2670 ^ uVar7) + 0xa6092094 ^ 0x84c3b8ee7e84191e;
  uRam00000001833f2488 = (uRam00000001833f2488 * -0x247fa280057f9b29 ^ uRam00000001833f2670) + uVar7
  ;
  uRam00000001833f2650 = uRam00000001833f2488 ^ uRam00000001833f2670;
  uRam00000001833f2310 = 0xa6092094;
  uRam00000001833f2570 = func_0x00018f1f8190(uRam00000001833f2698 + 0x9b0070a6003bff ^ 9);
  uVar7 = (uRam00000001833f2570 ^ 0x4c124128) & 0x3ffffffff;
  uVar3 = ((uRam00000001833f2570 ^ 0x4c124128) & 0x3ffffffff) >> 1 | uVar7;
  uVar8 = uVar3 >> 2 | uVar3;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar3 = uVar3 >> 0x20 | uVar8 >> 0x10 | uVar8;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  uRam00000001833f2360 = uRam00000001833f2308 ^ uVar7 ^ 0xa6072093;
  uRam00000001833f25d8 = (uRam00000001833f25d8 ^ uVar7) + 0xa6072093 ^ 0xd7c003f8f79b77f1;
  uRam00000001833f26b8 = (uRam00000001833f26b8 * 0x7bbb1dad57f8f9eb ^ uRam00000001833f25d8) + uVar7;
  uRam00000001833f2518 = uRam00000001833f26b8 ^ uRam00000001833f25d8;
  uRam00000001833f2418 = 0xa6072093;
  uVar7 = (uRam00000001833f2450 ^ _UNK_182860860) + uRam00000001833f2358 + 0x222503b6;
  uVar3 = (uRam00000001833f2358 ^ _UNK_182860868) + uRam00000001833f2450 + 0xa6072093;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833f2450 ^ _UNK_182860860;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833f2358 ^ _UNK_182860868;
  uRam00000001833f25a0 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833f2450 + 0xa6072093) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833f2358 + 0x222503b6));
  uRam00000001833f2658 = uRam00000001833f2658 ^ uRam00000001833f25a0 ^ 0xd15f719e87f58406;
  uRam00000001833f25c8 =
       (uRam00000001833f25c8 * 0x199a854bef84d6f7 ^ uRam00000001833f2658) + uRam00000001833f25a0;
  uRam00000001833f2520 = uRam00000001833f25c8 ^ uRam00000001833f2658;
  uRam00000001833f2698 = 0;
  uVar7 = uRam00000001833f25f8 + 0x10844f5fc;
  uVar3 = (uRam00000001833f25f8 * 0x2000 | uRam00000001833f25f8 >> 0x33) ^ uRam00000001833f25f8;
  uRam00000001833f2660 = uRam00000001833f25a0;
  uRam00000001833f26d8 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) ^
                           (((uVar7 * 0x2000 | uVar7 >> 0x33) ^ 0x84227afe) << 0x1d |
                           (uVar7 & 0x7ffffffffffff) >> 0x16) - (uRam00000001833f25f8 + 0x84227afe))
  ;
  uRam00000001833f2628 = uRam00000001833f2360 ^ uRam00000001833f26d8 ^ 0x59db;
  uRam00000001833f2508 = (uRam00000001833f2508 ^ uRam00000001833f26d8) + 0x59db ^ 0x9021b227d5b63248
  ;
  uRam00000001833f2610 =
       (uRam00000001833f2610 * -0x6e09ec51979ec15 ^ uRam00000001833f2508) + uRam00000001833f26d8;
  uRam00000001833f25f0 = uRam00000001833f2610 ^ uRam00000001833f2508;
  uRam00000001833f2410 = 0x59db;
  uVar7 = (uRam00000001833f2628 ^ _UNK_182860870) + uRam00000001833f2340 + 0x7a8f5c9a;
  uVar3 = (uRam00000001833f2340 ^ _UNK_182860878) + uRam00000001833f2628 + 0xffffffff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833f2628 ^ _UNK_182860870;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833f2340 ^ _UNK_182860878;
  uRam00000001833f2448 =
       func_0x00018f1f8190((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833f2628 + 0xffffffff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833f2340 + 0x7a8f5c9a));
  uRam00000001833f2608 =
       (uRam00000001833f2608 ^ uRam00000001833f2448 & 0x7fffffffffffffff) + 0x1528040 ^
       0xd64148801eb8cb17;
  uRam00000001833f25e0 =
       (uRam00000001833f25e0 * 0x14d79edd88c1643b ^ uRam00000001833f2608) +
       (uRam00000001833f2448 & 0x7fffffffffffffff);
  uRam00000001833f2558 = uRam00000001833f25e0 ^ uRam00000001833f2608;
  uRam00000001833f2478 = 0x1528040;
  uVar7 = (~uRam00000001833f2608 + 0xde883d1c) *
          ((uRam00000001833f23e0 ^ 0x5aaa1e3e) +
          (ulonglong)((uint)uRam00000001833f23e0 & 0x5aaa1e3e) * 2);
  uVar7 = (uVar7 | uRam00000001833f2408) + (uVar7 & uRam00000001833f2408);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001833f2418 =
       func_0x00018f1f8190((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam00000001833f2408 = uRam00000001833f2408 ^ uRam00000001833f2418 ^ 0xf9071909372b2867;
  uRam00000001833f2428 =
       (uRam00000001833f2428 * -0x181a820e3de2e919 ^ uRam00000001833f2408) + uRam00000001833f2418;
  uRam00000001833f2508 = uRam00000001833f2428 ^ uRam00000001833f2408;
  uRam00000001833f2578 = 0;
  uRam00000001833f26d0 = func_0x00018f1f8190(uRam00000001833f2508 + 0xffc6007c49ffddff ^ 0xc1);
  uVar7 = uRam00000001833f26d0 ^ 0x59db;
  uRam00000001833f2550 = uRam00000001833f23f0 ^ uVar7 ^ 0x59db;
  uRam00000001833f2538 = (uRam00000001833f2538 ^ uVar7) + 0x59db ^ 0xe0cf42a5bff5c6da;
  uRam00000001833f2438 = (uRam00000001833f2438 * 0x6e128f58bcfbdd33 ^ uRam00000001833f2538) + uVar7;
  uRam00000001833f26b8 = uRam00000001833f2438 ^ uRam00000001833f2538;
  auVar11._8_8_ = _UNK_182860888;
  auVar11._0_8_ = uVar5 ^ 0x84222325;
  uRam00000001833f24b0 = 0x59db;
  auVar9 = pshufb(auVar11 ^ _UNK_182860890,auVar9);
  uVar3 = auVar9._8_8_ + auVar9._0_8_;
  uVar7 = uVar3 + uRam00000001833f2378;
  if (auVar9._4_4_ < 0) {
    uVar7 = uRam00000001833f23c8 ^ uVar3;
  }
  uRam00000001833f2488 = func_0x00018f1f8190(SUB161(auVar11 ^ _UNK_182860890,5) ^ uVar7);
  uVar7 = (uRam00000001833f2488 & 0x7fffffffffff) * 0x763ce10cbdf9555;
  lVar6 = uVar5 - ((uint)uVar4 & 0x59db) * 2;
  uRam00000001833f24c8 = (uRam00000001833f24c8 ^ uVar7) + lVar6 + 0x59db ^ 0xe755d1d8d7f64276;
  uRam00000001833f2598 = (uRam00000001833f2598 * 0x54abf251dfb37181 ^ uRam00000001833f24c8) + uVar7;
  uRam00000001833f2650 = uRam00000001833f2598 ^ uRam00000001833f24c8;
  uRam00000001833f25c0 = lVar6 + 0x59dbU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bff,0x132);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f1f3856 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18285ee68 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; BJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18f1f8220, runtime 6ffff6e08220) =====

void FUN_18f1f8220(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018f1f825c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182860a00 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; BK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18f1f9110, runtime 6ffff6e09110) =====

void FUN_18f1f9110(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f1f918d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182860f40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; BL (IJ)I (handler @ image 18f1fbbd0, runtime 6ffff6e0bbd0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f1fbbd0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (uRam00000001833f2770 ^ _UNK_182863ca0) + uRam00000001833f2a50 + 0x84222325;
  uVar6 = (uRam00000001833f2a50 ^ _UNK_182863ca8) + uRam00000001833f2770 + 0x37bb5495b5cb402c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2770 ^ _UNK_182863ca0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f2a50 ^ _UNK_182863ca8;
  uRam00000001833f2780 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001833f2770 + 0x37bb5495b5cb402c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833f2a50 + 0x84222325));
  uRam00000001833f2ba8 =
       (uRam00000001833f2ba8 ^ uRam00000001833f2780 & 0x7fffffffffffffff) + 0xc844ab6a4a34bfd4 ^
       0xeb4db5c8c01c95dd;
  uRam00000001833f2850 =
       (uRam00000001833f2850 * 0x1b1edcbe5cb26183 ^ uRam00000001833f2ba8) +
       (uRam00000001833f2780 & 0x7fffffffffffffff);
  uRam00000001833f27a8 = uRam00000001833f2850 ^ uRam00000001833f2ba8;
  uRam00000001833f2d20 = -0x37bb5495b5cb402c;
  uRam00000001833f2a90 = func_0x00018f2074a0(uRam00000001833f2cd8 ^ 0x72f49b2f2e2c277c);
  uVar5 = uRam00000001833f2a90 ^ 0x37bb5495b5cb0000;
  uRam00000001833f2c50 = uRam00000001833f2c38 ^ uVar5 ^ 0x37bb5495b5cbc02b;
  uRam00000001833f2cc8 = (uRam00000001833f2cc8 ^ uVar5) + 0x37bb5495b5cbc02b ^ 0xa2a7f5e7325c57a2;
  uRam00000001833f2cd0 = (uRam00000001833f2cd0 * -0x23f48b92442fb8cb ^ uRam00000001833f2cc8) + uVar5
  ;
  uRam00000001833f2798 = uRam00000001833f2cd0 ^ uRam00000001833f2cc8;
  uRam00000001833f2848 = 0x37bb5495b5cbc02b;
  uRam00000001833f2d78 = func_0x00018f2074a0(uRam00000001833f27d0 + 0xf933c12ab57f4c62 ^ 0x3f);
  uRam00000001833f27f0 = uRam00000001833f2940 ^ uRam00000001833f2d78 ^ 0x7fff;
  uRam00000001833f2830 = (uRam00000001833f2830 ^ uRam00000001833f2d78) + 0x7fff ^ 0x927cacdbc2e9331c
  ;
  uRam00000001833f2d78 =
       (uRam00000001833f2d78 * -0x6f0e087012127895 ^ uRam00000001833f2830) + uRam00000001833f2d78;
  uRam00000001833f2c30 = uRam00000001833f2d78 ^ uRam00000001833f2830;
  uRam00000001833f2c38 = 0x7fff;
  uVar5 = (~uRam00000001833f2a68 + 0x8935ae901c0f767d) *
          ((uRam00000001833f2878 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833f2878 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001833f2990) + (uVar5 & uRam00000001833f2990);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2be8 =
       func_0x00018f2074a0((uVar5 | 0x8935ae90982d2aa6) + (uVar5 & 0x8935ae90982d2aa6));
  uVar5 = (uRam00000001833f2be8 ^ 0x8935ae901c0f7fff) * -0x2f9bd6191f888847;
  uRam00000001833f2eb0 = uRam00000001833f2aa0 ^ uVar5 ^ 0x8935ae901c0ff67b;
  uRam00000001833f2c50 = (uRam00000001833f2c50 ^ uVar5) + 0x8935ae901c0ff67b ^ 0xf67479b742126f1e;
  uRam00000001833f2d40 = (uRam00000001833f2d40 * -0x6a86a150d8d02b85 ^ uRam00000001833f2c50) + uVar5
  ;
  uRam00000001833f2920 = uRam00000001833f2d40 ^ uRam00000001833f2c50;
  uRam00000001833f2d30 = 0x8935ae901c0ff67b;
  uVar5 = (~uRam00000001833f2c18 + 0x76ca516fe3f08985) *
          ((uRam00000001833f2910 ^ 0x8935ae90982dd55e) +
          (uRam00000001833f2910 & 0x935ae90982dd55e) * 2);
  uVar5 = (uVar5 | uRam00000001833f2bf0) + (uVar5 & uRam00000001833f2bf0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2e68 =
       func_0x00018f2074a0((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = ~uRam00000001833f2d88 & 0x8935ae901c0ff67b;
  uRam00000001833f2950 = uRam00000001833f2b78 ^ uVar5 ^ 0x7fff;
  uRam00000001833f2c38 = (uRam00000001833f2c38 ^ uVar5) + 0x7fff ^ 0x8e44ebc76bf6c87f;
  uRam00000001833f2c68 = (uRam00000001833f2c68 * -0x7e2a45297bec57c1 ^ uRam00000001833f2c38) + uVar5
  ;
  uRam00000001833f29b0 = uRam00000001833f2c68 ^ uRam00000001833f2c38;
  uRam00000001833f2968 = 0x7fff;
  uVar5 = (uRam00000001833f2d78 ^ _UNK_182863cb0) + uRam00000001833f2eb0 + 0x84222325;
  uVar6 = (uRam00000001833f2eb0 ^ _UNK_182863cb8) + uRam00000001833f2d78 + 0x7aba8704d07ff3b8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2d78 ^ _UNK_182863cb0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f2eb0 ^ _UNK_182863cb8;
  uRam00000001833f2c90 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001833f2d78 + 0x7aba8704d07ff3b8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833f2eb0 + 0x84222325));
  uVar5 = uRam00000001833f2c90 >> 1 | uRam00000001833f2c90;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001833f2c90;
  uRam00000001833f2868 = (uRam00000001833f2868 ^ uVar5) + 0x854578fb2f800c48 ^ 0xb1bb15974c7df711;
  uRam00000001833f2870 = (uRam00000001833f2870 * -0x54fda7d974c6a73d ^ uRam00000001833f2868) + uVar5
  ;
  uRam00000001833f2c80 = uRam00000001833f2870 ^ uRam00000001833f2868;
  uRam00000001833f2be8 = 0x854578fb2f800c48;
  uVar5 = (~uRam00000001833f2988 + 0x7aba8704d07ff3b9) *
          ((uRam00000001833f2910 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833f2910 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001833f27f8) + (uVar5 & uRam00000001833f27f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2c40 =
       func_0x00018f2074a0((uVar5 | 0x7aba8704545daf62) + (uVar5 & 0x7aba8704545daf62));
  uVar5 = uRam00000001833f2c40 ^ 0x7aba8704d07fffff;
  uRam00000001833f2890 = uRam00000001833f2d00 ^ uVar5 ^ 0x7aba8704d08073b7;
  uRam00000001833f2710 = (uRam00000001833f2710 ^ uVar5) + 0x7aba8704d08073b7 ^ 0x260f4dd69421bc43;
  uRam00000001833f2e58 = (uRam00000001833f2e58 * -0x623faec276608fbb ^ uRam00000001833f2710) + uVar5
  ;
  uRam00000001833f2c30 = uRam00000001833f2e58 ^ uRam00000001833f2710;
  uRam00000001833f28d0 = 0x7aba8704d08073b7;
  uVar5 = (~uRam00000001833f2e10 + 0x854578fb2f800c49) *
          ((uRam00000001833f2768 ^ 0x7aba870454a25092) +
          (uRam00000001833f2768 & 0x7aba870454a25092) * 2);
  uVar5 = (uVar5 | uRam00000001833f2898) + (uVar5 & uRam00000001833f2898);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2768 =
       func_0x00018f2074a0((uVar5 | 0xffffffff7b225cda) + (uVar5 & 0xffffffff7b225cda));
  uVar6 = uRam00000001833f2768 ^ 0x8efc45061e0d1f78;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar6;
  uVar5 = uVar6 << 0x20 | uVar6 >> 0x20;
  uRam00000001833f2e60 = uRam00000001833f28b0 ^ uVar5 ^ 0x7fff;
  uRam00000001833f2a08 = (uRam00000001833f2a08 ^ uVar5) + 0x7fff ^ 0x8052b6d7854234fc;
  uRam00000001833f2e18 = (uRam00000001833f2e18 * 0x49aafb9dcddf07db ^ uRam00000001833f2a08) + uVar5;
  uRam00000001833f2e68 = uRam00000001833f2e18 ^ uRam00000001833f2a08;
  uRam00000001833f2968 = 0x7fff;
  uVar5 = func_0x00018f2074a0(uRam00000001833f2ba8 + 0xe77ecec1386ec21b ^ 0x72);
  uRam00000001833f2958 = uVar5 ^ 0x7bbdbdb79ffdfdb6;
  uRam00000001833f2950 = uRam00000001833f2e60 ^ uRam00000001833f2958 ^ 0xe3488a63fa9b5b61;
  uRam00000001833f2ac8 =
       (uRam00000001833f2ac8 ^ uRam00000001833f2958) + 0xe3488a63fa9b5b61 ^ 0x7dc7982e7939b5a9;
  uRam00000001833f2958 = (uVar5 * 0x6550c8d32809930b ^ uRam00000001833f2ac8) + uRam00000001833f2958;
  uRam00000001833f2728 = uRam00000001833f2958 ^ uRam00000001833f2ac8;
  uRam00000001833f2718 = 0xe3488a63fa9b5b61;
  uVar5 = (uRam00000001833f2ee0 ^ _UNK_182863cc0) + uRam00000001833f28d8 + 0x7bbdbdb71bdfde93;
  uVar6 = (uRam00000001833f28d8 ^ _UNK_182863cc8) + uRam00000001833f2ee0 + 0x678accac5a9d5dab;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2ee0 ^ _UNK_182863cc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f28d8 ^ _UNK_182863cc8;
  uRam00000001833f27e0 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001833f2ee0 + 0x678accac5a9d5dab) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833f28d8 + 0x7bbdbdb71bdfde93));
  uRam00000001833f2d68 =
       (uRam00000001833f2d68 ^ uRam00000001833f27e0 & 0xffffffffff800000) + 0x1c37711bc560a01d ^
       0x5f8060cc053adc87;
  uRam00000001833f2b70 =
       (uRam00000001833f2b70 * -0x51e5fb27a9eea749 ^ uRam00000001833f2d68) +
       (uRam00000001833f27e0 & 0xffffffffff800000);
  uRam00000001833f2790 = uRam00000001833f2b70 ^ uRam00000001833f2d68;
  uRam00000001833f2eb0 = 0x1c37711bc560a01d;
  uRam00000001833f2d08 = func_0x00018f2074a0(uRam00000001833f28f0 ^ 0xfb83113ee84f3ee1);
  uVar6 = uRam00000001833f2d08 ^ 0x60755705b8719692;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar6;
  uRam00000001833f2ac8 = (uRam00000001833f2ac8 ^ uVar6) + 0x63888ca41a9d5da2 ^ 0xf590b3d093bb2e17;
  uRam00000001833f2c30 = (uRam00000001833f2c30 * -0x536b58d426c3fcb5 ^ uRam00000001833f2ac8) + uVar6
  ;
  uRam00000001833f2770 = uRam00000001833f2c30 ^ uRam00000001833f2ac8;
  uRam00000001833f2e98 = 0x63888ca41a9d5da2;
  uVar5 = (~uRam00000001833f2ac8 + 0xc7111948353abb45) *
          ((uRam00000001833f2948 ^ 0x1c37711b41428338) +
          (uRam00000001833f2948 & 0x1c37711b41428338) * 2);
  uVar5 = (uVar5 | uRam00000001833f2db8) + (uVar5 & uRam00000001833f2db8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2c78 =
       func_0x00018f2074a0((uVar5 | 0xdb2668537478387c) + (uVar5 & 0xdb2668537478387c));
  uVar5 = (uRam00000001833f2c78 & 0x7fffffffff ^ 0x1c37711bc560a01d) * 0x61d5af508cfbde9b;
  uRam00000001833f2a60 = uRam00000001833f2b28 ^ uVar5 ^ 0xe3488a63fa9b5b61;
  uRam00000001833f28e0 = (uRam00000001833f28e0 ^ uVar5) + 0xe3488a63fa9b5b61 ^ 0x53ec00fb34d0b282;
  uRam00000001833f29d0 = (uRam00000001833f29d0 * -0x8c6bc3a98de3b3f ^ uRam00000001833f28e0) + uVar5;
  uRam00000001833f2818 = uRam00000001833f29d0 ^ uRam00000001833f28e0;
  uRam00000001833f2780 = 0xe3488a63fa9b5b61;
  uRam00000001833f2e00 = func_0x00018f2074a0(lRam00000001833f2b50 + 0x230083dcffe1ffU ^ 0xf1);
  uRam00000001833f2af0 = (uRam00000001833f2e00 ^ 0xe3488a63fa9b4000) & 0xffffffffffffc000;
  uRam00000001833f2c38 = uRam00000001833f2c38 ^ uRam00000001833f2af0 ^ 0xe11b556b3983bfd2;
  uRam00000001833f2d20 =
       (uRam00000001833f2d20 * -0x2aca5f773d6f276b ^ uRam00000001833f2c38) + uRam00000001833f2af0;
  uRam00000001833f2e70 = uRam00000001833f2d20 ^ uRam00000001833f2c38;
  uRam00000001833f2c88 = 0;
  uRam00000001833f2770 = func_0x00018f2074a0(uRam00000001833f2918 + 0xffc4007bba0021ff ^ 0x34);
  uVar5 = uRam00000001833f2770 & 0xfffffffff8000000;
  uRam00000001833f2838 = uRam00000001833f2ee0 ^ uVar5 ^ 0x7fff;
  uRam00000001833f2d90 = (uRam00000001833f2d90 ^ uVar5) + 0x7fff ^ 0xfce23bf9a51e3db4;
  uRam00000001833f2b78 = (uRam00000001833f2b78 * -0x59c0a625446fe68f ^ uRam00000001833f2d90) + uVar5
  ;
  uRam00000001833f2b00 = uRam00000001833f2b78 ^ uRam00000001833f2d90;
  uRam00000001833f2940 = 0x7fff;
  uVar5 = (uRam00000001833f2768 ^ _UNK_182863cd0) + uRam00000001833f2910 + 0x7bbdbdb71bdfde93;
  uVar6 = (uRam00000001833f2910 ^ _UNK_182863cd8) + (uRam00000001833f2768 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2768 ^ _UNK_182863cd0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f2910 ^ _UNK_182863cd8;
  uRam00000001833f2ba8 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001833f2768 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833f2910 + 0x7bbdbdb71bdfde93));
  uRam00000001833f2b90 =
       (uRam00000001833f2b90 ^ uRam00000001833f2ba8 ^ 0x8442424860020249) + 0x8442424860020249 ^
       0x878a0bf3132b5f74;
  uRam00000001833f2788 =
       (uRam00000001833f2788 * 0x493e8ebf9e4717c7 ^ uRam00000001833f2b90) +
       (uRam00000001833f2ba8 ^ 0x8442424860020249);
  uRam00000001833f2928 = uRam00000001833f2788 ^ uRam00000001833f2b90;
  uRam00000001833f2d10 = 0x8442424860020249;
  uRam00000001833f2da8 = func_0x00018f2074a0(uRam00000001833f2b30 + 0x3ea30f7ad934c456 ^ 0x1a);
  uVar5 = uRam00000001833f2ef8 ^ uRam00000001833f2da8 ^ 0x22ff857c4030305;
  uRam00000001833f2ef8 =
       (uRam00000001833f2ef8 * -0xff77a9f6710a29d ^ uVar5) + uRam00000001833f2da8 ^ uVar5;
  uRam00000001833f2ea8 = 0;
  uRam00000001833f2a68 = func_0x00018f2074a0(uRam00000001833f2dd0 ^ 0x53ff7c5600218a);
  uRam00000001833f2b78 = uRam00000001833f2b88 ^ uRam00000001833f2a68 ^ 0x7fff;
  uRam00000001833f2d88 = (uRam00000001833f2d88 ^ uRam00000001833f2a68) + 0x7fff ^ 0xa5c6429cb4dec396
  ;
  uRam00000001833f2bd8 =
       (uRam00000001833f2bd8 * 0x72cb5d129b39de1d ^ uRam00000001833f2d88) + uRam00000001833f2a68;
  uRam00000001833f2830 = uRam00000001833f2bd8 ^ uRam00000001833f2d88;
  uRam00000001833f2d78 = 0x7fff;
  uVar5 = (uRam00000001833f2aa0 ^ _UNK_182863ce0) + uRam00000001833f2e70 + 0x303cb1338316c697;
  uVar6 = (uRam00000001833f2e70 ^ _UNK_182863ce8) + uRam00000001833f2aa0 + 0x303cb1330734e5b2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2aa0 ^ _UNK_182863ce0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f2e70 ^ _UNK_182863ce8;
  uRam00000001833f29c0 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001833f2aa0 + 0x303cb1330734e5b2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833f2e70 + 0x303cb1338316c697));
  uRam00000001833f27a8 =
       uRam00000001833f27a8 ^ uRam00000001833f29c0 ^ 0x70579869da67efc4 ^ 0x55efa4885ce7a153;
  uRam00000001833f2800 =
       (uRam00000001833f2800 * -0x2d153cd33ec25cef ^ uRam00000001833f27a8) +
       (uRam00000001833f29c0 ^ 0x70579869da67efc4);
  uRam00000001833f2c98 = uRam00000001833f2800 ^ uRam00000001833f27a8;
  uRam00000001833f2d90 = uRam00000001833f2b28;
  uRam00000001833f29c8 = 0;
  uVar5 = (uRam00000001833f2b18 ^ 0x84225cda) + uRam00000001833f2838 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2b18 ^ 0x84225cda;
  uVar6 = ((uRam00000001833f2838 + uRam00000001833f2b18) * 0x2000 |
          uRam00000001833f2838 + uRam00000001833f2b18 >> 0x33) ^ uRam00000001833f2838;
  uRam00000001833f2710 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001833f2b18 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833f2838 + 0x84225cda));
  uVar5 = uRam00000001833f2710 >> 1 | uRam00000001833f2710;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~((uint)uRam00000001833f2710 ^
            (0x40 - (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 2) & 0x7fff);
  uRam00000001833f2ee8 = uRam00000001833f2a50 ^ uVar5 ^ 0x7fff;
  uRam00000001833f2750 = (uRam00000001833f2750 ^ uVar5) + 0x7fff ^ 0x615ce918170d5360;
  uRam00000001833f2aa0 = (uRam00000001833f2aa0 * 0x35f5eed791502595 ^ uRam00000001833f2750) + uVar5;
  uRam00000001833f2e88 = uRam00000001833f2aa0 ^ uRam00000001833f2750;
  uRam00000001833f2898 = 0x7fff;
  uVar5 = (~uRam00000001833f2960 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001833f2bb8) +
          ((param_4 ^ 0x84222325) & uRam00000001833f2bb8) * 2);
  uVar5 = (uVar5 | uRam00000001833f2cc0) + (uVar5 & uRam00000001833f2cc0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2e08 =
       func_0x00018f2074a0((param_4 ^ 0x84225cda | uVar5) + (uVar5 & (param_4 ^ 0x84225cda)));
  uVar5 = uRam00000001833f2e08 - (uRam00000001833f2e08 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam00000001833f2e08;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar3 = (ulonglong)uVar2;
  uRam00000001833f2a28 = (uRam00000001833f2a28 ^ uVar5) + uVar3 ^ 0x443e2ade2f0ded02;
  uRam00000001833f28d0 = (uRam00000001833f28d0 * -0x7c6226a4b360e315 ^ uRam00000001833f2a28) + uVar5
  ;
  uRam00000001833f2c68 = uRam00000001833f28d0 ^ uRam00000001833f2a28;
  uVar4 = (ulonglong)param_3;
  uVar5 = uVar3 ^ 0x84222325;
  uVar6 = ((uRam00000001833f2ab8 ^ uVar5) +
          (ulonglong)((uint)uRam00000001833f2ab8 & (uint)uVar5) * 2) *
          (uVar4 - uRam00000001833f2920);
  uVar6 = (uVar6 | uRam00000001833f2e40) + (uVar6 & uRam00000001833f2e40);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001833f2e20 = uVar3;
  uRam00000001833f2ac8 =
       func_0x00018f2074a0((uVar5 ^ uVar4 | uVar6) +
                           (ulonglong)((uint)(uVar5 ^ uVar4) & (uint)uVar6));
  uVar5 = (uRam00000001833f2ac8 << 0x31 | uRam00000001833f2ac8 >> 0xf) * 0xd7e738c4394ad95;
  uRam00000001833f2a88 = (uVar3 + uVar4) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001833f2c60 = (uRam00000001833f2c60 ^ uVar5) + uRam00000001833f2a88 ^ 0x79a9cfb6586e6c68;
  uRam00000001833f2ae0 = (uRam00000001833f2ae0 * -0x2afca1c6eb7dbcc1 ^ uRam00000001833f2c60) + uVar5
  ;
  uRam00000001833f2948 = uRam00000001833f2ae0 ^ uRam00000001833f2c60;
  uRam00000001833f2a88 = uRam00000001833f2a88 & 0xffffffff;
  uVar5 = (~uRam00000001833f2bc8 + 0xe3d11367) *
          ((uRam00000001833f2b40 ^ 0x11cb4c5a) +
          (ulonglong)((uint)uRam00000001833f2b40 & 0x11cb4c5a) * 2);
  uVar5 = (uVar5 | uRam00000001833f27e8) + (uVar5 & uRam00000001833f27e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2a78 =
       func_0x00018f2074a0((uVar5 | 0xf21a5f3c) + (ulonglong)((uint)uVar5 & 0xf21a5f3c));
  uVar5 = (uRam00000001833f2a78 ^ 0x95e96f7f) * 0x1f413c8adc630093;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5;
  uRam00000001833f2b30 = (uRam00000001833f2b30 ^ uVar5) + 0xf7f97f7f ^ 0x8d9d507ee7e5c92e;
  uRam00000001833f2ba0 = (uRam00000001833f2ba0 * 0xf1ffee09f6a7f8d ^ uRam00000001833f2b30) + uVar5;
  uRam00000001833f2780 = uRam00000001833f2ba0 ^ uRam00000001833f2b30;
  uRam00000001833f2e28 = 0xf7f97f7f;
  uVar5 = (~uRam00000001833f2bc0 + 0xed56e674) *
          ((uRam00000001833f2920 ^ 0xf2fdd0db) +
          (ulonglong)((uint)uRam00000001833f2920 & 0xf2fdd0db) * 2);
  uVar5 = (uVar5 | uRam00000001833f2c78) + (uVar5 & uRam00000001833f2c78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2a90 =
       func_0x00018f2074a0((uVar5 | 0x1fab36a8) + (ulonglong)((uint)uVar5 & 0x1fab36a8));
  uRam00000001833f2bf0 =
       (uRam00000001833f2bf0 ^ uRam00000001833f2a90 * -0x1d1860e77189cd0b) + 0x9b89158d ^
       0xd68e910854e3aaed;
  uRam00000001833f27f8 =
       (uRam00000001833f27f8 * -0x5e50b309ebc3fb45 ^ uRam00000001833f2bf0) +
       uRam00000001833f2a90 * -0x1d1860e77189cd0b ^ uRam00000001833f2bf0;
  uRam00000001833f2c20 = 0x9b89158d;
  uVar5 = (uRam00000001833f27d0 ^ _UNK_182863cf0) + uRam00000001833f29f0 + 0x84221a95;
  uVar6 = (uRam00000001833f29f0 ^ _UNK_182863cf8) + uRam00000001833f27d0 + 0x1914a4cf;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f27d0 ^ _UNK_182863cf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f29f0 ^ _UNK_182863cf8;
  uRam00000001833f2e88 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001833f27d0 + 0x1914a4cf) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833f29f0 + 0x84221a95));
  uVar5 = (uRam00000001833f2e88 ^ 0x39b0) << 10 | uRam00000001833f2e88 >> 0x36;
  uRam00000001833f2e48 = uRam00000001833f28b0 ^ uVar5 ^ 0x1914de7f;
  uRam00000001833f2df8 = (uRam00000001833f2df8 ^ uVar5) + 0x1914de7f ^ 0xd2676afc53ac6924;
  uRam00000001833f2ae0 = (uRam00000001833f2ae0 * 0x6c1812410b3c766f ^ uRam00000001833f2df8) + uVar5;
  uRam00000001833f2b90 = uRam00000001833f2ae0 ^ uRam00000001833f2df8;
  uRam00000001833f2c98 = uRam00000001833f2c08 ^ 0x1914de7f;
  uRam00000001833f27c0 = 0x1914de7f;
  uVar5 = (uRam00000001833f2e48 ^ _UNK_182863d00) + 0xb64bdbd9;
  uVar6 = (_UNK_182863d08 ^ 0x1914de7f) + uRam00000001833f2e48 + 0xe6eb5b31;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2e48 ^ _UNK_182863d00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _UNK_182863d08 ^ 0x1914de7f;
  uRam00000001833f2718 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001833f2e48 + 0xe6eb5b31) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - 0xb64bdbd9);
  uVar5 = uRam00000001833f2718 ^ 0x169fcefd7641e07e;
  uRam00000001833f29a8 = uRam00000001833f27a8 ^ uVar5 ^ 0x1000039b0;
  uRam00000001833f2d20 = (uRam00000001833f2d20 ^ uVar5) + 0x1000039b0 ^ 0x2575a1c6cf22abee;
  uRam00000001833f2c78 = (uRam00000001833f2c78 * 0x350dd50bde5ee121 ^ uRam00000001833f2d20) + uVar5;
  uRam00000001833f2800 = uRam00000001833f2c78 ^ uRam00000001833f2d20;
  uRam00000001833f2ad8 = 0x39b0;
  uVar5 = (uRam00000001833f2820 ^ _UNK_182863d10) + uRam00000001833f2a40 + 0x84222325;
  uVar6 = (uRam00000001833f2a40 ^ _UNK_182863d18) + uRam00000001833f2820 + 0xf327f2c8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2820 ^ _UNK_182863d10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f2a40 ^ _UNK_182863d18;
  uRam00000001833f2948 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001833f2820 + 0xf327f2c8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833f2a40 + 0x84222325));
  uRam00000001833f2750 =
       (uRam00000001833f2750 ^ uRam00000001833f2948 & 0x7fffffffffffffff) - 0xf327f2c8 ^
       0xc4b4e795099eb77b;
  uRam00000001833f29b0 =
       (uRam00000001833f29b0 * -0x500319b4f04e22e9 ^ uRam00000001833f2750) +
       (uRam00000001833f2948 & 0x7fffffffffffffff);
  uRam00000001833f28a8 = uRam00000001833f29b0 ^ uRam00000001833f2750;
  uRam00000001833f2d90 = 0xcd80d38;
  uVar5 = (~uRam00000001833f2a10 + 0xf327f2c9) *
          ((uRam00000001833f2df8 ^ 0x84221a95) +
          (ulonglong)((uint)uRam00000001833f2df8 & 0x84221a95) * 2);
  uVar5 = (uVar5 | uRam00000001833f2bd8) + (uVar5 & uRam00000001833f2bd8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2dc8 =
       func_0x00018f2074a0((uVar5 | 0x7705e85d) + (ulonglong)((uint)uVar5 & 0x7705e85d));
  uRam00000001833f2e48 = uRam00000001833f2a98 ^ uRam00000001833f2dc8 ^ 0xf3282c78;
  uRam00000001833f2708 =
       (uRam00000001833f2708 ^ uRam00000001833f2dc8) + 0xf3282c78 ^ 0x33f725719dc2f03e;
  uRam00000001833f2800 =
       (uRam00000001833f2800 * 0x24a595080dcd2dc9 ^ uRam00000001833f2708) + uRam00000001833f2dc8;
  uRam00000001833f29a0 = uRam00000001833f2800 ^ uRam00000001833f2708;
  uRam00000001833f2ab0 = 0xf3282c78;
  uRam00000001833f2be8 = func_0x00018f2074a0(uRam00000001833f2a88 ^ 0xff8400369500502a);
  uVar5 = uRam00000001833f2be8 ^ 0xcd759ef8;
  uRam00000001833f2c08 = uRam00000001833f2de8 ^ uVar5 ^ 0xcd75d8a8;
  uRam00000001833f2dd8 = (uRam00000001833f2dd8 ^ uVar5) + 0xcd75d8a8 ^ 0xa8769718042db821;
  uRam00000001833f2d68 = (uRam00000001833f2d68 * 0x6b1af5c75545c5cd ^ uRam00000001833f2dd8) + uVar5;
  uRam00000001833f2b88 = uRam00000001833f2d68 ^ uRam00000001833f2dd8;
  uRam00000001833f29d8 = 0xcd75d8a8;
  uVar5 = (uRam00000001833f2ae0 ^ _UNK_182863d20) + uRam00000001833f2d60 + 0x4957fb8d;
  uVar6 = (uRam00000001833f2d60 ^ _UNK_182863d28) + uRam00000001833f2ae0 + 0x328a6108;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2ae0 ^ _UNK_182863d20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f2d60 ^ _UNK_182863d28;
  uRam00000001833f2a50 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001833f2ae0 + 0x328a6108) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833f2d60 + 0x4957fb8d));
  uVar5 = (uRam00000001833f2a50 << 0x2b | uRam00000001833f2a50 >> 0x15) ^ 0x328a6108;
  uRam00000001833f2918 = uRam00000001833f2ee0 ^ uVar5 ^ 0x1000039b0;
  uRam00000001833f2e28 = (uRam00000001833f2e28 ^ uVar5) + 0x1000039b0 ^ 0x64a8f5e22c999c98;
  uRam00000001833f2968 = (uRam00000001833f2968 * -0x73c708414a5dd26f ^ uRam00000001833f2e28) + uVar5
  ;
  uRam00000001833f2760 = uRam00000001833f2968 ^ uRam00000001833f2e28;
  uRam00000001833f2ce8 = 0x39b0;
  uVar5 = func_0x00018f2074a0(uRam00000001833f2af8 ^ 0xffb700d7a9004d7b);
  uVar5 = ((uVar5 ^ 0xfff97fff) << 0x2c | (uVar5 ^ 0xfff97fff) >> 0x14) ^ 0xf7f97f7f;
  uRam00000001833f2960 = uRam00000001833f2e80 ^ uVar5 ^ 0x19382950c;
  uRam00000001833f2d88 = (uRam00000001833f2d88 ^ uVar5) + 0x19382950c ^ 0x2bb25f7995ddef;
  uRam00000001833f2980 = (uRam00000001833f2980 * -0x7d4efb9472a57d9 ^ uRam00000001833f2d88) + uVar5;
  uRam00000001833f2ef8 = uRam00000001833f2980 ^ uRam00000001833f2d88;
  uRam00000001833f2e08 = 0x9382950c;
  uVar5 = (~uRam00000001833f2d80 + 0x27122a1b) *
          ((uRam00000001833f2bf8 ^ 0xe85249d7) +
          (ulonglong)((uint)uRam00000001833f2bf8 & 0xe85249d7) * 2);
  uVar5 = (uVar5 | uRam00000001833f2db0) + (uVar5 & uRam00000001833f2db0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2e20 =
       func_0x00018f2074a0((uVar5 | 0xcf4063cd) + (ulonglong)((uint)uVar5 & 0xcf4063cd));
  uRam00000001833f2820 = uRam00000001833f2ae8 ^ uRam00000001833f2e20 ^ 0x9382950c;
  uRam00000001833f2a30 =
       (uRam00000001833f2a30 ^ uRam00000001833f2e20) + 0x9382950c ^ 0xd6504ac9f90b4f1c;
  uRam00000001833f27c0 =
       (uRam00000001833f27c0 * -0x36366cdbd6dea145 ^ uRam00000001833f2a30) + uRam00000001833f2e20;
  uRam00000001833f2bb0 = uRam00000001833f27c0 ^ uRam00000001833f2a30;
  uRam00000001833f27a0 = 0x9382950c;
  uVar5 = (~uRam00000001833f27e8 + 0x9382950d) *
          ((uRam00000001833f27a8 ^ 0x17a0b629) +
          (ulonglong)((uint)uRam00000001833f27a8 & 0x17a0b629) * 2);
  uVar5 = (uVar5 | uRam00000001833f2818) + (uVar5 & uRam00000001833f2818);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2c68 =
       func_0x00018f2074a0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam00000001833f2838 = uRam00000001833f2838 ^ uRam00000001833f2c68 ^ 0x89b789b4ab1c33cc;
  uRam00000001833f2988 =
       (uRam00000001833f2988 * 0x72762003d074c49 ^ uRam00000001833f2838) + uRam00000001833f2c68;
  uRam00000001833f28d8 = uRam00000001833f2988 ^ uRam00000001833f2838;
  uRam00000001833f28e8 = 0;
  uVar5 = ((uRam00000001833f2db8 ^ 0x84221a95) +
          (ulonglong)((uint)uRam00000001833f2db8 & 0x84221a95) * 2) * -lRam00000001833f28c0;
  uVar5 = (uVar5 | uRam00000001833f2c28) + (uVar5 & uRam00000001833f2c28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2c80 = uRam00000001833f2c68;
  uRam00000001833f2c48 =
       func_0x00018f2074a0((uVar5 | 0x84221a95) + (ulonglong)((uint)uVar5 & 0x84221a95));
  uVar5 = uRam00000001833f2c48 & 0xfffffffffc000000;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uRam00000001833f2c80 = uRam00000001833f28d0 ^ uVar5 ^ 0x39b0;
  uRam00000001833f2e40 = (uRam00000001833f2e40 ^ uVar5) + 0x39b0 ^ 0xbd33df5cce63ef57;
  uRam00000001833f2a48 = (uRam00000001833f2a48 * -0x66f3b6b5a3386a05 ^ uRam00000001833f2e40) + uVar5
  ;
  uRam00000001833f2a50 = uRam00000001833f2a48 ^ uRam00000001833f2e40;
  uRam00000001833f2ed0 = 0x39b0;
  uVar5 = (~uRam00000001833f2c28 + 0x100000000) *
          ((uRam00000001833f2828 ^ 0x73db5c5a) +
          (ulonglong)((uint)uRam00000001833f2828 & 0x73db5c5a) * 2);
  uVar5 = (uVar5 | uRam00000001833f27f8) + (uVar5 & uRam00000001833f27f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2ed8 =
       func_0x00018f2074a0((uVar5 | 0x8c24a3a5) + (ulonglong)((uint)uVar5 & 0x8c24a3a5));
  uRam00000001833f2d18 =
       (uRam00000001833f2d18 ^ uRam00000001833f2ed8) + 0x8068080 ^ 0xcc0e5d8aff53ffb6;
  uRam00000001833f29e8 =
       (uRam00000001833f29e8 * 0x686afdaa15311a7d ^ uRam00000001833f2d18) + uRam00000001833f2ed8;
  uRam00000001833f2760 = uRam00000001833f29e8 ^ uRam00000001833f2d18;
  uRam00000001833f2d98 = 0x8068080;
  uVar5 = (~uRam00000001833f2d20 + 0x8068081) *
          ((uRam00000001833f2ef0 ^ 0x73db5c5a) +
          (ulonglong)((uint)uRam00000001833f2ef0 & 0x73db5c5a) * 2);
  uVar5 = (uVar5 | uRam00000001833f2a78) + (uVar5 & uRam00000001833f2a78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f29f8 =
       func_0x00018f2074a0((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uVar5 = (uRam00000001833f29f8 ^ 0x8000000) & 0xffffffffff800000;
  uRam00000001833f2c68 = uRam00000001833f2c68 ^ uVar5 ^ 0x75849651b0854367;
  uRam00000001833f29c8 = (uRam00000001833f29c8 * -0x25612b6e1f39aec7 ^ uRam00000001833f2c68) + uVar5
  ;
  uRam00000001833f2c88 = uRam00000001833f29c8 ^ uRam00000001833f2c68;
  uRam00000001833f2850 = 0;
  uVar5 = ((uRam00000001833f28b8 ^ 0x84221a95) +
          (ulonglong)((uint)uRam00000001833f28b8 & 0x84221a95) * 2) * -lRam00000001833f2df0;
  uVar5 = (uVar5 | uRam00000001833f2a08) + (uVar5 & uRam00000001833f2a08);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833f2768 =
       func_0x00018f2074a0((uVar5 | 0x84221a95) + (ulonglong)((uint)uVar5 & 0x84221a95));
  uVar6 = (uRam00000001833f2768 ^ 0x39b0) & 0x7ffffffffff;
  uVar5 = uVar6 - (((uRam00000001833f2768 ^ 0x39b0) & 0x7ffffffffff) >> 1 & 0x15555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar6;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar6;
  uRam00000001833f2b30 = uRam00000001833f2b10 ^ uVar6 ^ 0x39b0;
  uRam00000001833f2e88 = (uRam00000001833f2e88 ^ uVar6) + 0x39b0 ^ 0xd72b86379b85d923;
  uRam00000001833f2dd8 = (uRam00000001833f2dd8 * -0x381f5e2510800e93 ^ uRam00000001833f2e88) + uVar6
  ;
  uRam00000001833f2758 = uRam00000001833f2dd8 ^ uRam00000001833f2e88;
  uRam00000001833f29d0 = 0x39b0;
  uVar5 = (uRam00000001833f2708 ^ _UNK_182863d30) + uRam00000001833f2980 + 0x11cb4c5a;
  uVar6 = (uRam00000001833f2980 ^ _UNK_182863d38) + uRam00000001833f2708 + 0x95e96f7f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833f2708 ^ _UNK_182863d30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833f2980 ^ _UNK_182863d38;
  uRam00000001833f2b08 =
       func_0x00018f2074a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001833f2708 + 0x95e96f7f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833f2980 + 0x11cb4c5a));
  uRam00000001833f2748 = uRam00000001833f2748 ^ uRam00000001833f2b08 ^ 0x578cfdabc1bf6caf;
  uRam00000001833f2bc0 =
       (uRam00000001833f2bc0 * 0x36502d32e405743b ^ uRam00000001833f2748) + uRam00000001833f2b08;
  uRam00000001833f2ee8 = uRam00000001833f2bc0 ^ uRam00000001833f2748;
  uRam00000001833f2ec0 = 0;
  uRam00000001833f2dd0 = func_0x00018f2074a0(uRam00000001833f2a50 ^ 0xfff5ff7c73001de7);
  uVar5 = (uRam00000001833f2dd0 << 0x2a | uRam00000001833f2dd0 >> 0x16) ^ 0x39b0;
  uRam00000001833f2850 = uRam00000001833f2748 ^ uVar5 ^ 0x39b0;
  uRam00000001833f27f8 = (uRam00000001833f27f8 ^ uVar5) + 0x39b0 ^ 0x611c7c0da01f6f6e;
  uRam00000001833f2938 = (uRam00000001833f2938 * 0x45551b0a983d8465 ^ uRam00000001833f27f8) + uVar5;
  uRam00000001833f2bc0 = uRam00000001833f2938 ^ uRam00000001833f27f8;
  uRam00000001833f2e18 = 0x39b0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bff,0x132);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f1fe41b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182861e40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; BM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18f207530, runtime 6ffff6e17530) =====

void FUN_18f207530(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018f20757b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182863ee0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; BN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18f208540, runtime 6ffff6e18540) =====

void FUN_18f208540(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f2085c9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828644a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; Br ()V (handler @ image 18f190ef0, runtime 6ffff6da0ef0) =====

void FUN_18f190ef0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bff,0x132);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f190ffb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828476d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; Bs ()[I (handler @ image 18f243e50, runtime 6ffff6e53e50) =====

void FUN_18f243e50(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f243e70 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828713c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; Bt ()[I (handler @ image 18f244050, runtime 6ffff6e54050) =====

void FUN_18f244050(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f244070 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828714a0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; Bu ()[I (handler @ image 18f244250, runtime 6ffff6e54250) =====

void FUN_18f244250(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f244270 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182871580 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; Bv ()Lsixtwo/ad; (handler @ image 18f244450, runtime 6ffff6e54450) =====

void FUN_18f244450(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f244470 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182871660 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; Bw ()[Lsixtwo/bc$sb; (handler @ image 18f1af9e0, runtime 6ffff6dbf9e0) =====

void FUN_18f1af9e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f1afa00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182851ae0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; Bx ()Lsixtwo/rk; (handler @ image 18f1afbe0, runtime 6ffff6dbfbe0) =====

void FUN_18f1afbe0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f1afc00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182851bc0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; By ()I (handler @ image 18f1afde0, runtime 6ffff6dbfde0) =====

void FUN_18f1afde0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f1afe00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182851ca0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; Bz (Lnet/minecraft/class_241;Lsixtwo/bc$sb;)Z (handler @ image 18f1affe0, runtime 6ffff6dbffe0) =====

void FUN_18f1affe0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f1b000f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182851d80 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; _c3587351bd7b3f25ef6a6c2432b254b1 ()V (handler @ image 18f20b250, runtime 6ffff6e1b250) =====

void FUN_18f20b250(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f20b338 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828654c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; bV (Lsixtwo/lC;)V (handler @ image 18f18f840, runtime 6ffff6d9f840) =====

void FUN_18f18f840(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x245,0xe);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f18f8e5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182846f40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; dk (DDLsixtwo/mA;)Z (handler @ image 18f1c1e80, runtime 6ffff6dd1e80) =====

void FUN_18f1c1e80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bff,0x132);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f1c1f50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182857940 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; dl (DDLsixtwo/mA;)V (handler @ image 18f227840, runtime 6ffff6e37840) =====

void FUN_18f227840(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f22787a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828684e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bc; dm (III)Z (handler @ image 18f227d40, runtime 6ffff6e37d40) =====

void FUN_18f227d40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bff,0x132);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f227e5f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182868710 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bc; eK (C)Z (handler @ image 18f23f7f0, runtime 6ffff6e4f7f0) =====

void FUN_18f23f7f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bff,0x132);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f23f8b4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18286ffe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



