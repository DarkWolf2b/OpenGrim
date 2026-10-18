// ===== STITCHED CORPUS: sixtwo.ex =====
// handlers: 5  continuation blocks: 55  unresolved table targets: 0
// tables not in tables.json: ['0x20a5550', '0x20a5558', '0x20a5560', '0x20a5568', '0x20a5570', '0x20a5578', '0x20a5580', '0x20a5588', '0x20a5590', '0x20a5598', '0x20a55a0', '0x20a55a8', '0x20a55b0', '0x20a55b8', '0x20a55c0', '0x20a55c8', '0x20a55d0', '0x20a55d8', '0x20a55e0', '0x20a55e8']

// ===== Lsixtwo/ex; _bdc1508d9422d0323ece295e1c5c3830 ()V (handler @ image 18cdf60b0, runtime 6ffff4a060b0) =====

void FUN_18cdf60b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cdf6198 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820a6d08 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ex; auV ()Lsixtwo/cJ; (handler @ image 18cde7370, runtime 6ffff49f7370) =====

void FUN_18cde7370(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018cde7390 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820a35e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ex; auW (IJ)I (handler @ image 18cde7570, runtime 6ffff49f7570) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cde7570(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (uRam000000018333e4e8 ^ _UNK_1820a5550) + uRam000000018333e3f0 + 0xa1902c59bbc162f5;
  uVar6 = (uRam000000018333e3f0 ^ _UNK_1820a5558) + uRam000000018333e4e8 + 0xb4c1a1b1a057f048;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e4e8 ^ _UNK_1820a5550;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e3f0 ^ _UNK_1820a5558;
  uRam000000018333e460 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018333e4e8 + 0xb4c1a1b1a057f048) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018333e3f0 + 0xa1902c59bbc162f5));
  uVar5 = (uRam000000018333e460 ^ 0xb5d1adf9bff7f1d8) << 0x10 |
          (uRam000000018333e460 ^ 0xb5d1adf9bff7f1d8) >> 0x30;
  uRam000000018333e3e8 = (uRam000000018333e3e8 ^ uVar5) + 0x15518de89fb4b198 ^ 0x8e4652ef64d9656c;
  uRam000000018333e4e8 = (uRam000000018333e4e8 * 0x5bfd9178a647ab1d ^ uRam000000018333e3e8) + uVar5;
  uRam000000018333e4e0 = uRam000000018333e4e8 ^ uRam000000018333e3e8;
  uRam000000018333e428 = 0x15518de89fb4b198;
  uRam000000018333e468 = func_0x00018cdf2300(uRam000000018333e350 ^ 0xc42a37fb5d3c2257);
  uRam000000018333e3f8 =
       (uRam000000018333e3f8 ^ uRam000000018333e468 & 0x7fffffffffffffff) + 0x10a7a3ba76830640 ^
       0x34855c68b6573d5c;
  uRam000000018333e358 =
       (uRam000000018333e358 * 0x5d10e50660c82041 ^ uRam000000018333e3f8) +
       (uRam000000018333e468 & 0x7fffffffffffffff);
  uRam000000018333e478 = uRam000000018333e358 ^ uRam000000018333e3f8;
  uRam000000018333e408 = 0x10a7a3ba76830640;
  uVar5 = (uRam000000018333e3b0 ^ _UNK_1820a5560) + uRam000000018333e498 + 0x84225cda;
  uVar6 = (uRam000000018333e498 ^ _UNK_1820a5568) + uRam000000018333e3b0 + 0xef585c45897cf9c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e3b0 ^ _UNK_1820a5560;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e498 ^ _UNK_1820a5568;
  uRam000000018333e468 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018333e3b0 + 0xef585c45897cf9c0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e498 + 0x84225cda));
  uRam000000018333e4d0 =
       (uRam000000018333e438 ^ uRam000000018333e468) + 0xef585c45897d79bf ^ 0x4862684e10fa118c;
  uRam000000018333e498 =
       (uRam000000018333e498 * 0x443519c657496191 ^ uRam000000018333e4d0) + uRam000000018333e468;
  uRam000000018333e4d0 = uRam000000018333e498 ^ uRam000000018333e4d0;
  uRam000000018333e3f0 = uRam000000018333e4e0 ^ 0xef585c45897d79bf;
  uRam000000018333e438 = 0xef585c45897d79bf;
  uVar5 = (uRam000000018333e340 ^ _UNK_1820a5570) + uRam000000018333e350 + 0xef585c450d5f5a9a;
  uVar6 = (uRam000000018333e350 ^ _UNK_1820a5578) + uRam000000018333e340 + 0x10a7a3ba76830640;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e340 ^ _UNK_1820a5570;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e350 ^ _UNK_1820a5578;
  uRam000000018333e3b0 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018333e340 + 0x10a7a3ba76830640) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018333e350 + 0xef585c450d5f5a9a));
  uRam000000018333e3a8 = uRam000000018333e3a0 ^ uRam000000018333e3b0 ^ 0x7fff;
  uRam000000018333e368 = (uRam000000018333e368 ^ uRam000000018333e3b0) + 0x7fff ^ 0xd114e91a566c9d2;
  uRam000000018333e410 =
       (uRam000000018333e410 * 0x10187df4c5ab46e9 ^ uRam000000018333e368) + uRam000000018333e3b0;
  uRam000000018333e388 = uRam000000018333e410 ^ uRam000000018333e368;
  uRam000000018333e428 = 0x7fff;
  uRam000000018333e348 = func_0x00018cdf2300(uRam000000018333e468 ^ 0x773324d72914c100);
  uVar5 = ~uRam000000018333e348 & 0xd3546de451706aff;
  uRam000000018333e490 = uRam000000018333e4b8 ^ uVar5 ^ 0x7fff;
  uRam000000018333e4d8 = (uRam000000018333e4d8 ^ uVar5) + 0x7fff ^ 0xd5079484db95b29a;
  uRam000000018333e4b8 = (uRam000000018333e4b8 * -0x6bf051a46811e795 ^ uRam000000018333e4d8) + uVar5
  ;
  uRam000000018333e318 = uRam000000018333e4b8 ^ uRam000000018333e4d8;
  uRam000000018333e468 = 0x7fff;
  uVar5 = (~uRam000000018333e4f8 + 0x3f8e3072906a7781) *
          ((uRam000000018333e488 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018333e488 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018333e458) + (uVar5 & uRam000000018333e458);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e4b0 =
       func_0x00018cdf2300((uVar5 | 0x3f8e3072144854a5) + (uVar5 & 0x3f8e3072144854a5));
  uVar5 = uRam000000018333e4b0 >> 1 | uRam000000018333e4b0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018333e4b0;
  uRam000000018333e440 = (uRam000000018333e440 ^ uVar5) + 0xc071cf8d6f958880 ^ 0x239c374b86b84c37;
  uRam000000018333e310 = (uRam000000018333e310 * -0x33366019d64e5b89 ^ uRam000000018333e440) + uVar5
  ;
  uRam000000018333e3b0 = uRam000000018333e310 ^ uRam000000018333e440;
  uRam000000018333e4f8 = 0xc071cf8d6f958880;
  uRam000000018333e400 = func_0x00018cdf2300(uRam000000018333e3e0 + 0x5cc375744a864dd8 ^ 0xc3);
  uVar6 = _UNK_1820a5588;
  uVar5 = _UNK_1820a5580;
  uVar2 = uRam000000018333e400 << 0x17 | uRam000000018333e400 >> 0x29;
  uRam000000018333e4a8 = uRam000000018333e480 ^ uVar2 ^ 0x7fff;
  uRam000000018333e4b0 = (uRam000000018333e4b0 ^ uVar2) + 0x7fff ^ 0xadc4285cc6042881;
  uRam000000018333e388 = (uRam000000018333e388 * -0x707d4e360cab7f17 ^ uRam000000018333e4b0) + uVar2
  ;
  uRam000000018333e3a0 = uRam000000018333e388 ^ uRam000000018333e4b0;
  uRam000000018333e308 = 0x7fff;
  uVar2 = (uRam000000018333e420 ^ _UNK_1820a5580) + uRam000000018333e338 + 0xdfba797dcdc8dfaf;
  uVar7 = (uRam000000018333e338 ^ _UNK_1820a5588) + uRam000000018333e420 + 0x15518de89fb4b198;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018333e420 ^ _UNK_1820a5580;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018333e338 ^ _UNK_1820a5588;
  uRam000000018333e3a8 =
       func_0x00018cdf2300((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018333e420 + 0x15518de89fb4b198) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018333e338 + 0xdfba797dcdc8dfaf));
  uVar2 = ((uRam000000018333e3a8 ^ 0xdffbfdfddffefd9a) & 0x3ff) << 0x35 |
          (uRam000000018333e3a8 ^ 0xdffbfdfddffefd9a) >> 0xb;
  uRam000000018333e418 = (uRam000000018333e418 ^ uVar2) + 0xcaebf495d65e4d12 ^ 0x3987ec787dd67693;
  uRam000000018333e3f0 = (uRam000000018333e3f0 * -0x29aa1adefb612091 ^ uRam000000018333e418) + uVar2
  ;
  uRam000000018333e460 = uRam000000018333e3f0 ^ uRam000000018333e418;
  uRam000000018333e3d0 = 0xcaebf495d65e4d12;
  uVar2 = (uRam000000018333e468 ^ uVar5) + uRam000000018333e458 + 0xdfba797dcdc8dfaf;
  uVar7 = (uRam000000018333e458 ^ uVar6) + uRam000000018333e468 + 0x15518de89fb4b198;
  uVar5 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018333e468 ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018333e458 ^ uVar6;
  uRam000000018333e4e0 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018333e468 + 0x15518de89fb4b198) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018333e458 + 0xdfba797dcdc8dfaf));
  uVar5 = ~(uRam000000018333e4e0 * 0x1bedc44f8a62b547) & 0xdfba797d49eafc8a;
  uVar6 = uVar5 - (~(uRam000000018333e4e0 * 0x1bedc44f8a62b547) >> 1 & 0x4555141404555445);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5;
  uRam000000018333e330 = (uRam000000018333e330 ^ uVar5) + 0x1510096809a0b088 ^ 0x2e7b54b625f6b386;
  uRam000000018333e4d0 = (uRam000000018333e4d0 * -0x4b888c852051dca1 ^ uRam000000018333e330) + uVar5
  ;
  uRam000000018333e348 = 0x1510096809a0b088;
  uVar5 = (uRam000000018333e4e0 ^ _UNK_1820a5590) + uRam000000018333e438 + 0xcaebf495527c6e37;
  uVar6 = (uRam000000018333e438 ^ _UNK_1820a5598) + uRam000000018333e4e0 + 0x2a2012d013416110;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e4e0 ^ _UNK_1820a5590;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e438 ^ _UNK_1820a5598;
  uRam000000018333e3f8 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018333e4e0 + 0x2a2012d013416110) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018333e438 + 0xcaebf495527c6e37));
  uRam000000018333e478 = uRam000000018333e320 ^ uRam000000018333e3f8 ^ 0xf50c0765e99fae22;
  uRam000000018333e350 =
       (uRam000000018333e350 ^ uRam000000018333e3f8) + 0xf50c0765e99fae22 ^ 0xfd42819f6ab15853;
  uRam000000018333e440 =
       (uRam000000018333e440 * 0x2bcd0ce1163cba43 ^ uRam000000018333e350) + uRam000000018333e3f8;
  uRam000000018333e448 = uRam000000018333e440 ^ uRam000000018333e350;
  uRam000000018333e398 = 0xf50c0765e99fae22;
  uVar5 = (uRam000000018333e3a8 ^ _UNK_1820a55a0) + uRam000000018333e4b8 + 0xf50c07656dbd8d07;
  uVar6 = (uRam000000018333e4b8 ^ _UNK_1820a55a8) + uRam000000018333e3a8 + 0xf50c0765e99fae22;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e3a8 ^ _UNK_1820a55a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e4b8 ^ _UNK_1820a55a8;
  uRam000000018333e4d0 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018333e3a8 + 0xf50c0765e99fae22) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018333e4b8 + 0xf50c07656dbd8d07));
  uRam000000018333e320 = uRam000000018333e4b0 ^ 0xf50c0765e99fae22;
  uRam000000018333e358 = uRam000000018333e358 ^ uRam000000018333e320 ^ 0xfd689251e28670c8;
  uRam000000018333e340 =
       (uRam000000018333e340 * 0x2afea841b13be8b ^ uRam000000018333e358) + uRam000000018333e320;
  uRam000000018333e310 = uRam000000018333e340 ^ uRam000000018333e358;
  uRam000000018333e3a8 = 0;
  uVar5 = (uRam000000018333e400 ^ _UNK_1820a55b0) + uRam000000018333e3b0 + 0xdfba797dcdc8dfaf;
  uVar6 = (uRam000000018333e3b0 ^ _UNK_1820a55b8) + uRam000000018333e400 + 0x20458682b6150375;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e400 ^ _UNK_1820a55b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e3b0 ^ _UNK_1820a55b8;
  uRam000000018333e488 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018333e400 + 0x20458682b6150375) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018333e3b0 + 0xdfba797dcdc8dfaf));
  uVar5 = (uRam000000018333e488 ^ 0x20458682b6150340) & 0xffffffffffffffc0;
  uRam000000018333e3f0 = uRam000000018333e3f0 ^ uVar5 ^ 0xe5ae0871d8b67d63;
  uRam000000018333e4d8 = (uRam000000018333e4d8 * 0x416af8c474a7a8d ^ uRam000000018333e3f0) + uVar5;
  uRam000000018333e460 = uRam000000018333e4d8 ^ uRam000000018333e3f0;
  uRam000000018333e378 = 0;
  uVar5 = ((uRam000000018333e318 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018333e318 & 0x84225cda) * 2) * -uRam000000018333e480;
  uVar5 = (uVar5 | uRam000000018333e438) + (uVar5 & uRam000000018333e438);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e390 =
       func_0x00018cdf2300((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam000000018333e390 << 9 ^ 0xfffe00;
  uVar6 = uVar5 >> 9;
  uVar5 = uVar5 >> 10 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar6;
  uRam000000018333e458 = uRam000000018333e480 ^ uVar6 ^ 0x7fff;
  uRam000000018333e4b8 = (uRam000000018333e4b8 ^ uVar6) + 0x7fff ^ 0xb0fef590a4059167;
  uRam000000018333e4b0 = (uRam000000018333e4b0 * 0x683a0b51cea408f1 ^ uRam000000018333e4b8) + uVar6;
  uRam000000018333e360 = uRam000000018333e4b0 ^ uRam000000018333e4b8;
  uRam000000018333e4d8 = 0x7fff;
  uRam000000018333e428 = func_0x00018cdf2300(uRam000000018333e310 ^ 0xffdeff8422ffe18a);
  uVar5 = ((uRam000000018333e428 ^ 0xdf1a384948caa000) & 0xffffffffffffe000) << 0x18 |
          (uRam000000018333e428 ^ 0xdf1a384948caa000) >> 0x28;
  uRam000000018333e4d0 = uRam000000018333e4d0 ^ uVar5 ^ 0xc0aed73158d5a426;
  uRam000000018333e318 = (uRam000000018333e318 * 0x79f3499136281bed ^ uRam000000018333e4d0) + uVar5;
  uRam000000018333e340 = uRam000000018333e318 ^ uRam000000018333e4d0;
  uRam000000018333e348 = 0;
  uVar5 = (uRam000000018333e308 ^ 0x84225cda) + uRam000000018333e318 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e308 ^ 0x84225cda;
  uVar6 = ((uRam000000018333e318 + uRam000000018333e308) * 0x2000 |
          uRam000000018333e318 + uRam000000018333e308 >> 0x33) ^ uRam000000018333e318;
  uRam000000018333e390 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) - uRam000000018333e308 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e318 + 0x84225cda));
  uRam000000018333e3d0 = uRam000000018333e310 ^ uRam000000018333e390 ^ 0x7fff;
  uRam000000018333e490 = (uRam000000018333e490 ^ uRam000000018333e390) + 0x7fff ^ 0x9f4130647d43f2e3
  ;
  uRam000000018333e410 =
       (uRam000000018333e410 * 0xd1cdb3f0de877df ^ uRam000000018333e490) + uRam000000018333e390;
  uRam000000018333e450 = uRam000000018333e410 ^ uRam000000018333e490;
  uRam000000018333e318 = 0x7fff;
  uVar5 = (ulonglong)(param_4 & 0x7fff) ^ 0x84222325;
  uVar6 = uVar5 ^ uRam000000018333e320;
  uVar2 = param_3 ^ uRam000000018333e410;
  lVar4 = uVar5 + uRam000000018333e410;
  lVar3 = uRam000000018333e320 + param_3;
  uVar5 = uVar6 + lVar4;
  uVar7 = uVar2 + lVar3;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar2;
  uRam000000018333e3f0 =
       func_0x00018cdf2300((uVar2 << 0x1d | uVar2 >> 0x23) - lVar3 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar4);
  param_3 = param_4 & 0x7fff ^ param_3;
  uVar2 = (ulonglong)param_3;
  uRam000000018333e468 =
       (uRam000000018333e468 ^ uRam000000018333e3f0 & 0x1fffffffffff) + uVar2 ^ 0xa7bbd92fe5c159f4;
  uRam000000018333e3a0 =
       (uRam000000018333e3a0 * 0x34b5563d170c0905 ^ uRam000000018333e468) +
       (uRam000000018333e3f0 & 0x1fffffffffff);
  uRam000000018333e4c0 = uRam000000018333e3a0 ^ uRam000000018333e468;
  uVar5 = (~uRam000000018333e340 + 0x80cab0be) *
          ((uRam000000018333e4c8 ^ 0x304216a7) +
          (ulonglong)((uint)uRam000000018333e4c8 & 0x304216a7) * 2);
  uVar5 = (uVar5 | uRam000000018333e3d8) + (uVar5 & uRam000000018333e3d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e4d0 = uVar2;
  uRam000000018333e420 =
       func_0x00018cdf2300((uVar5 | 0xb088a61a) + (ulonglong)((uint)uVar5 & 0xb088a61a));
  uVar5 = (uRam000000018333e420 ^ 0x4000000000040000) & 0x40000000168c0000;
  uVar5 = (ulonglong)(~((uint)(uVar5 << 3) | (uint)(uVar5 >> 0x3d)) & 0xb4603582);
  uRam000000018333e3e0 = (uRam000000018333e368 ^ uVar5) + 0xb4eab5bf ^ 0x1fff311c4441d56b;
  uRam000000018333e450 = (uRam000000018333e450 * 0x603988b4106e78e3 ^ uRam000000018333e3e0) + uVar5;
  uRam000000018333e3e0 = uRam000000018333e450 ^ uRam000000018333e3e0;
  uRam000000018333e368 = 0xb4eab5bf;
  uVar5 = (~uRam000000018333e440 + 0xe5ecd6ad) *
          ((uRam000000018333e4d0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018333e4d0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018333e3e8) + (uVar5 & uRam000000018333e3e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e4a0 =
       func_0x00018cdf2300((uVar5 | 0x61cef589) + (ulonglong)((uint)uVar5 & 0x61cef589));
  uRam000000018333e3e0 =
       (uRam000000018333e3e0 ^ uRam000000018333e4a0 * -0x15c78cfbd2c0b01b) - 0xe5ecd6ac ^
       0x3a315df33ee78ee1;
  uRam000000018333e4c0 =
       (uRam000000018333e4c0 * -0xa635a4d6efe15a1 ^ uRam000000018333e3e0) +
       uRam000000018333e4a0 * -0x15c78cfbd2c0b01b;
  uRam000000018333e4a8 = 0x1a132954;
  uRam000000018333e368 = func_0x00018cdf2300(uRam000000018333e4d8 ^ 0x20fff685ff523b);
  uVar5 = (ulonglong)(((uint)uRam000000018333e368 ^ 0xe5ecc2a3) & 0xe5ecebf7);
  uRam000000018333e3b8 = uRam000000018333e3f8 ^ uVar5 ^ 0x10000154b;
  uRam000000018333e498 = (uRam000000018333e498 ^ uVar5) + 0x10000154b ^ 0xbb7d4052cee92406;
  uRam000000018333e458 = (uRam000000018333e458 * -0x4dcc3c9c0bf6bf4b ^ uRam000000018333e498) + uVar5
  ;
  uRam000000018333e470 = uRam000000018333e458 ^ uRam000000018333e498;
  uRam000000018333e3c0 = 0x154b;
  uRam000000018333e3a8 = func_0x00018cdf2300(uRam000000018333e418 + 0xff57ffd6eeff8dff ^ 0x3e);
  uVar5 = uRam000000018333e3a8 << 4 | uRam000000018333e3a8 >> 0x3c;
  uRam000000018333e320 = (uRam000000018333e320 ^ uVar5) - 0xefb48b14 ^ 0xa1b1fe2c3b051d2e;
  uRam000000018333e340 = (uRam000000018333e340 * -0x1a00509f53c56001 ^ uRam000000018333e320) + uVar5
  ;
  uRam000000018333e430 = uRam000000018333e340 ^ uRam000000018333e320;
  uRam000000018333e488 = 0x104b74ec;
  uVar5 = (uRam000000018333e388 ^ _UNK_1820a55c0) + uRam000000018333e4f8 + 0x8422366e;
  uVar6 = (uRam000000018333e4f8 ^ _UNK_1820a55c8) + uRam000000018333e388 + 0xefb48b14;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e388 ^ _UNK_1820a55c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e4f8 ^ _UNK_1820a55c8;
  uRam000000018333e370 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018333e388 + 0xefb48b14) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e4f8 + 0x8422366e));
  uVar5 = uRam000000018333e370 ^ 0x154b;
  uRam000000018333e3f0 = uRam000000018333e3d0 ^ uVar5 ^ 0xefb4a05f;
  uRam000000018333e300 = (uRam000000018333e300 ^ uVar5) + 0xefb4a05f ^ 0x2b30701e82dc9f3f;
  uRam000000018333e338 = (uRam000000018333e338 * 0x6633ccfab1fbdf17 ^ uRam000000018333e300) + uVar5;
  uRam000000018333e430 = uRam000000018333e338 ^ uRam000000018333e300;
  uRam000000018333e4c8 = uRam000000018333e330 ^ 0xefb4a05f;
  uRam000000018333e488 = 0xefb4a05f;
  uVar5 = (uRam000000018333e4a0 ^ _UNK_1820a55d0) + uRam000000018333e478 + 0x84222325;
  uVar6 = (uRam000000018333e478 ^ _UNK_1820a55d8) + uRam000000018333e4a0 + 0x36e74478;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e4a0 ^ _UNK_1820a55d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e478 ^ _UNK_1820a55d8;
  uRam000000018333e4b8 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018333e4a0 + 0x36e74478) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e478 + 0x84222325));
  uVar5 = ((uRam000000018333e4b8 ^ 0x36e74478) & 7) << 0x3c |
          (uRam000000018333e4b8 ^ 0x36e74478) >> 4;
  uRam000000018333e350 = (uRam000000018333e350 ^ uVar5) - 0x36e74478 ^ 0x3eff1952554ae5e6;
  uRam000000018333e468 = (uRam000000018333e468 * -0x3c48f581ceedd6a1 ^ uRam000000018333e350) + uVar5
  ;
  uRam000000018333e488 = uRam000000018333e468 ^ uRam000000018333e350;
  uRam000000018333e388 = uRam000000018333e480 ^ 0xffffffffc918bb88;
  uRam000000018333e420 = 0xc918bb88;
  uVar5 = (uRam000000018333e418 ^ _UNK_1820a55e0) + uRam000000018333e3f0 + 0x8422366e;
  uVar6 = (uRam000000018333e3f0 ^ _UNK_1820a55e8) + uRam000000018333e418 + 0x36e74478;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e418 ^ _UNK_1820a55e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e3f0 ^ _UNK_1820a55e8;
  uRam000000018333e450 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018333e418 + 0x36e74478) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e3f0 + 0x8422366e));
  uVar5 = uRam000000018333e450 >> 1 | uRam000000018333e450;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018333e450) & 0x3fffffffffffffff;
  uRam000000018333e358 = uRam000000018333e308 ^ uVar5 ^ 0x36e759c3;
  uRam000000018333e300 = (uRam000000018333e300 ^ uVar5) + 0x36e759c3 ^ 0x3c10eb151d2b7936;
  uRam000000018333e440 = (uRam000000018333e440 * 0x44f773b9cc08e935 ^ uRam000000018333e300) + uVar5;
  uRam000000018333e430 = uRam000000018333e440 ^ uRam000000018333e300;
  uRam000000018333e438 = 0x36e759c3;
  uRam000000018333e3e8 = func_0x00018cdf2300(uRam000000018333e3a0 ^ 0x410074a1ffca0d);
  uVar6 = uRam000000018333e3e8 * -0xf7507d5e02919fb;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar6;
  uRam000000018333e4f0 = uRam000000018333e4c8 ^ uVar6 ^ 0x10000154b;
  uRam000000018333e438 = (uRam000000018333e438 ^ uVar6) + 0x10000154b ^ 0x9e175ba85e54319b;
  uRam000000018333e378 = (uRam000000018333e378 * 0x621c035d0a91f5b7 ^ uRam000000018333e438) + uVar6;
  uRam000000018333e400 = uRam000000018333e378 ^ uRam000000018333e438;
  uRam000000018333e300 = 0x154b;
  uVar5 = (uRam000000018333e350 ^ _UNK_1820a55f0) + uRam000000018333e4e8 + 0x30c8969a;
  uVar6 = (uRam000000018333e4e8 ^ _UNK_1820a55f8) + uRam000000018333e350 + 0xc6a78f82;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e350 ^ _UNK_1820a55f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e4e8 ^ _UNK_1820a55f8;
  uRam000000018333e3c0 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018333e350 + 0xc6a78f82) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e4e8 + 0x30c8969a));
  uRam000000018333e3d0 = uRam000000018333e398 ^ uRam000000018333e330 ^ 0x17b924541;
  uRam000000018333e4a8 =
       (uRam000000018333e3b0 ^ uRam000000018333e330) + 0x17b924541 ^ 0x4a097764a114b008;
  uRam000000018333e430 =
       (uRam000000018333e430 * -0x39d84db1c86f9c33 ^ uRam000000018333e4a8) + uRam000000018333e330;
  uRam000000018333e4a8 = uRam000000018333e430 ^ uRam000000018333e4a8;
  uRam000000018333e3b0 = 0x7b924541;
  uVar5 = (~uRam000000018333e368 + 0xc6a78f83) *
          ((uRam000000018333e3c0 ^ 0x30c8969a) +
          (ulonglong)((uint)uRam000000018333e3c0 & 0x30c8969a) * 2);
  uVar5 = (uVar5 | uRam000000018333e468) + (uVar5 & uRam000000018333e468);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e468 =
       func_0x00018cdf2300((uVar5 | 0xf66f1918) + (ulonglong)((uint)uVar5 & 0xf66f1918));
  uVar5 = (uRam000000018333e468 << 0x3a | uRam000000018333e468 >> 6) >> 0x38 |
          (uRam000000018333e468 >> 6) << 8;
  uRam000000018333e418 = (uRam000000018333e418 ^ uVar5) + 0x84a28582 ^ 0xeb62fb05b0e7380c;
  uRam000000018333e388 = (uRam000000018333e388 * -0x3148eeab7b6ee36d ^ uRam000000018333e418) + uVar5
  ;
  uRam000000018333e4c0 = uRam000000018333e388 ^ uRam000000018333e418;
  uRam000000018333e3c0 = 0x84a28582;
  uVar5 = (uRam000000018333e4f0 ^ _UNK_1820a5600) + uRam000000018333e310 + 0xf66f1918;
  uVar6 = (uRam000000018333e310 ^ _UNK_1820a5608) + uRam000000018333e4f0 + 0x9450b04;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e4f0 ^ _UNK_1820a5600;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e310 ^ _UNK_1820a5608;
  uRam000000018333e330 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018333e4f0 + 0x9450b04) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e310 + 0xf66f1918));
  uVar5 = uRam000000018333e330 & 0xfffffffffc000000;
  uRam000000018333e430 = uRam000000018333e308 ^ uVar5 ^ 0x7b924541;
  uRam000000018333e4d0 = (uRam000000018333e4d0 ^ uVar5) + 0x7b924541 ^ 0x44d489a98c7e6db5;
  uRam000000018333e420 = (uRam000000018333e420 * -0x27a6e4b3477e6e97 ^ uRam000000018333e4d0) + uVar5
  ;
  uRam000000018333e478 = uRam000000018333e420 ^ uRam000000018333e4d0;
  uRam000000018333e320 = 0x7b924541;
  uVar5 = (~uRam000000018333e470 + 0x7b924542) *
          ((uRam000000018333e3e8 ^ 0xffb06664) +
          (ulonglong)((uint)uRam000000018333e3e8 & 0xffb06664) * 2);
  uVar5 = (uVar5 | uRam000000018333e470) + (uVar5 & uRam000000018333e470);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e4b8 =
       func_0x00018cdf2300((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018333e388 = (uRam000000018333e4b8 << 0x39 | uRam000000018333e4b8 >> 7) ^ 0x7b924541;
  uRam000000018333e368 = uRam000000018333e368 ^ uRam000000018333e388 ^ 0x11cbcb825bb4739d;
  uRam000000018333e308 =
       (uRam000000018333e308 * 0x62d96e58d9506a65 ^ uRam000000018333e368) + uRam000000018333e388;
  uRam000000018333e420 = uRam000000018333e308 ^ uRam000000018333e368;
  uRam000000018333e468 = uRam000000018333e458;
  uRam000000018333e4d0 = 0;
  uVar5 = (uRam000000018333e300 ^ _UNK_1820a5610) + uRam000000018333e320 + 0x30c8969a;
  uVar6 = (uRam000000018333e320 ^ _UNK_1820a5618) + uRam000000018333e300 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e300 ^ _UNK_1820a5610;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e320 ^ _UNK_1820a5618;
  uRam000000018333e3c8 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018333e300 + 0xffffffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e320 + 0x30c8969a));
  uRam000000018333e458 =
       (uRam000000018333e458 ^ uRam000000018333e3c8 ^ 0xffffffff) + 0x4b154a40 ^ 0xc599f43324cd364c;
  uRam000000018333e3d0 =
       (uRam000000018333e3d0 * -0x65f14503dec0a30d ^ uRam000000018333e458) +
       (uRam000000018333e3c8 ^ 0xffffffff);
  uRam000000018333e408 = uRam000000018333e3d0 ^ uRam000000018333e458;
  uRam000000018333e3e0 = 0x4b154a40;
  uRam000000018333e3d0 = func_0x00018cdf2300(uRam000000018333e388 ^ 0xdbfff7b5ff22ae);
  uVar5 = (ulonglong)(~(uint)uRam000000018333e3d0 & 0xb4eab5bf) ^ 0xb4eab5bf;
  uRam000000018333e358 = uRam000000018333e358 ^ uVar5 ^ 0xabc7bb4670280bf5;
  uRam000000018333e4a8 = (uRam000000018333e4a8 * 0x611e4bcf7d0a4e2b ^ uRam000000018333e358) + uVar5;
  uRam000000018333e310 = uRam000000018333e4a8 ^ uRam000000018333e358;
  uRam000000018333e388 = 0;
  uVar5 = ((uRam000000018333e488 ^ 0x8422366e) +
          (ulonglong)((uint)uRam000000018333e488 & 0x8422366e) * 2) * -uRam000000018333e480;
  uVar5 = (uVar5 | uRam000000018333e410) + (uVar5 & uRam000000018333e410);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e440 =
       func_0x00018cdf2300((uVar5 | 0x8422366e) + (ulonglong)((uint)uVar5 & 0x8422366e));
  uVar5 = uRam000000018333e440 << 0x12 | uRam000000018333e440 >> 0x2e;
  uRam000000018333e4a8 = uRam000000018333e3e8 ^ uVar5 ^ 0x154b;
  uRam000000018333e328 = (uRam000000018333e328 ^ uVar5) + 0x154b ^ 0x6a13d9c05551839;
  uRam000000018333e480 = (uRam000000018333e480 * 0x2ec7e82f0dd1b091 ^ uRam000000018333e328) + uVar5;
  uRam000000018333e420 = uRam000000018333e480 ^ uRam000000018333e328;
  uRam000000018333e448 = 0x154b;
  uVar5 = (uRam000000018333e418 ^ _UNK_1820a5620) + uRam000000018333e398 + 0x304216a7;
  uVar6 = (uRam000000018333e398 ^ _UNK_1820a5628) + uRam000000018333e418 + 0xb4603582;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018333e418 ^ _UNK_1820a5620;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018333e398 ^ _UNK_1820a5628;
  uRam000000018333e3f8 =
       func_0x00018cdf2300((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018333e418 + 0xb4603582) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018333e398 + 0x304216a7));
  uVar5 = (uRam000000018333e3f8 << 0x14 | uRam000000018333e3f8 >> 0x2c) << 0x18 |
          (uRam000000018333e3f8 & 0xfffffffffff) >> 0x14;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5;
  uRam000000018333e498 = uRam000000018333e498 ^ uVar5 ^ 0xb2a983416e8eab35;
  uRam000000018333e380 = (uRam000000018333e380 * -0x75c8bd7d6a48f685 ^ uRam000000018333e498) + uVar5
  ;
  uRam000000018333e3d8 = uRam000000018333e380 ^ uRam000000018333e498;
  uRam000000018333e460 = 0;
  uVar5 = ((uRam000000018333e4e0 ^ 0x8422366e) +
          (ulonglong)((uint)uRam000000018333e4e0 & 0x8422366e) * 2) * -uRam000000018333e4f0;
  uVar5 = (uVar5 | uRam000000018333e3b8) + (uVar5 & uRam000000018333e3b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e478 =
       func_0x00018cdf2300((uVar5 | 0x8422366e) + (ulonglong)((uint)uVar5 & 0x8422366e));
  uRam000000018333e3b0 = uRam000000018333e3f8 ^ uRam000000018333e360 ^ 0x154b;
  uRam000000018333e4e8 = (uRam000000018333e4e8 ^ uRam000000018333e360) + 0x154b ^ 0x79684201e2b46a5d
  ;
  uRam000000018333e398 =
       (uRam000000018333e398 * -0x3dec857ce6415883 ^ uRam000000018333e4e8) + uRam000000018333e360;
  uRam000000018333e4f0 = uRam000000018333e398 ^ uRam000000018333e4e8;
  uRam000000018333e3d8 = 0x154b;
  uVar5 = (~uRam000000018333e428 + 0x154c) *
          ((uVar2 ^ 0x84222325 ^ uRam000000018333e458) +
          (ulonglong)((uint)uRam000000018333e458 & (uint)(uVar2 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam000000018333e3a0) + (uVar5 & uRam000000018333e3a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018333e470 =
       func_0x00018cdf2300((uVar2 ^ 0x8422366e | uVar5) +
                           (ulonglong)((uint)(uVar2 ^ 0x8422366e) & (uint)uVar5));
  uVar5 = uVar2 * 0x154b ^ uRam000000018333e470;
  uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
  lVar3 = uVar2 - (param_3 & 0x154b) * 2;
  uRam000000018333e318 = (uRam000000018333e318 ^ uVar5) + lVar3 + 0x154b ^ 0x33f5fa8018520b20;
  uRam000000018333e360 = (uRam000000018333e360 * 0x5b105811cd2986ab ^ uRam000000018333e318) + uVar5;
  uRam000000018333e370 = uRam000000018333e360 ^ uRam000000018333e318;
  uRam000000018333e4f0 = lVar3 + 0x154bU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd9cf,0x25e)
      /* POOL[0xd9cf,0x25e]: tityAccessor | setJumpDelay | PkbYQ | sixtwo/ex | pyxZq | OqVLr | jBHTq | xLPDH | vtEAj | auW | sixtwo/ey | rLHZE | avg | kPBXI | AOxxs | UMfxq | OpYvN | method_5624 | TYnKu | bBA | (Lnet/minecraft/class_1297;)Lnet/minecraft/class_238; | kYSPP | Lnet/minecraft/class_238; | qXoKw | FTaWP | Ljava/util/concurrent/atomic/AtomicBoolean; | java/util/concurrent/atomic/AtomicBoolean | BeDJP | Ljava/util/Queue; | java/util/Queue | poll | avf | sTmtd | sixtwo/gL$tk | bcf | ()Lnet/minecraft/class_2596; | net/minecraft/class_2743 | sixtwo/gL$tj | net/minecraft/class_6374 | method_11818 | cQjjl | method_56 */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cde9a6b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820a36f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ex; auX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18cdf2390, runtime 6ffff4a02390) =====

void FUN_18cdf2390(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018cdf23db did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820a5730 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ex; auY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18cdf33a0, runtime 6ffff4a033a0) =====

void FUN_18cdf33a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cdf3429 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820a5cf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xcde7393 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cde7393(void)

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


// ----- block @ rva 0xcde73cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cde73cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1820a3678)();
  return;
}


// ----- block @ rva 0xcde7406 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cde7406(void)

{
  FUN_190dd72e0();
  (*_DAT_1820a3658)();
  return;
}


// ----- block @ rva 0xcde742e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cde742e(void)

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


// ----- block @ rva 0xcde744f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cde744f(void)

{
  FUN_190dd9df0();
  (*_DAT_1820a3628)();
  return;
}


// ----- block @ rva 0xcde7482 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cde7482(void)

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


// ----- block @ rva 0xcde74a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cde74a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1820a3618)();
  return;
}


// ----- block @ rva 0xcde74cd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cde74cd(void)

{
  (*_DAT_1820a3638)();
  return;
}


// ----- block @ rva 0xcde74de -----

void FUN_18cde74de(void)

{
  return;
}


// ----- block @ rva 0xcde74e6 -----

void FUN_18cde74e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xcde9a6e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cde9a6e(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xcde9c0f -----

void FUN_18cde9c0f(void)

{
  return;
}


// ----- block @ rva 0xcdead69 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cdead69(void)

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


// ----- block @ rva 0xcdeb479 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cdeb479(void)

{
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcdeb6d5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdeb6d5(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcdebb69 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18cdee6ce(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
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


// ----- block @ rva 0xcdec23a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18cdee6ce(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
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


// ----- block @ rva 0xcded465 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cded465(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x724,0x22);
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


// ----- block @ rva 0xcded5f1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cded5f1(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xbc9,0x2f);
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


// ----- block @ rva 0xcded914 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cded914(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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


// ----- block @ rva 0xcdeda9d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdeda9d(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->GetObjectArrayElement /*0x568*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb4a,0x2e);
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


// ----- block @ rva 0xcdf2158 -----

void FUN_18cdf2158(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0xcdf23de -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf23de(void)

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


// ----- block @ rva 0xcdf2432 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cdf2432(void)

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


// ----- block @ rva 0xcdf24a0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf24a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1820a5c68)();
  return;
}


// ----- block @ rva 0xcdf2766 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf2766(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1820a5c68)();
  return;
}


// ----- block @ rva 0xcdf2cda -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf2cda(void)

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


// ----- block @ rva 0xcdf2d90 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf2d90(void)

{
  FUN_190ddce00();
  (*_DAT_1820a5888)();
  return;
}


// ----- block @ rva 0xcdf2e08 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf2e08(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1820a58b8)();
  return;
}


// ----- block @ rva 0xcdf3028 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cdf3028(void)

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


// ----- block @ rva 0xcdf318a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cdf318a(void)

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


// ----- block @ rva 0xcdf32a5 -----

void FUN_18cdf32a5(void)

{
  return;
}


// ----- block @ rva 0xcdf32b4 -----

void FUN_18cdf32b4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xcdf342c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf342c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1820a5ff8)();
  return;
}


// ----- block @ rva 0xcdf35b5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf35b5(void)

{
  FUN_190dd72e0();
  (*_DAT_1820a6668)();
  return;
}


// ----- block @ rva 0xcdf3c4d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf3c4d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1820a63f8)();
  return;
}


// ----- block @ rva 0xcdf44db -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf44db(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000c0;
  undefined2 uStack00000000000000c4;
  undefined4 uStack00000000000000f4;
  
  uStack00000000000000f4 = 0x8db4e6bc;
  uVar1 = rdtsc();
  uStack00000000000000c0 = 0x690073;
  uStack00000000000000c4 = 0x78;
  (*_DAT_1820a6718)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}


// ----- block @ rva 0xcdf4c47 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cdf4c47(void)

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


// ----- block @ rva 0xcdf5145 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf5145(void)

{
  (*_DAT_1820a6948)();
  return;
}


// ----- block @ rva 0xcdf51e5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cdf51e5(void)

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


// ----- block @ rva 0xcdf5211 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf5211(void)

{
  (*_DAT_1820a6948)();
  return;
}


// ----- block @ rva 0xcdf53c6 -----

void FUN_18cdf53c6(void)

{
  return;
}


// ----- block @ rva 0xcdf5bc9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cdf5bc9(void)

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


// ----- block @ rva 0xcdf5f04 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdf5f04(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1820a6798)();
  return;
}


// ----- block @ rva 0xcdf5f6a -----

void FUN_18cdf5f6a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xcdf619b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cdf61f1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cdf619b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xcdf636c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cdf63af */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cdf636c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xcdf650c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cdf6542 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cdf650c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xcdf6545 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cdf657d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cdf6545(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallLongMethodA /*0x1b0*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xcdfd32d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cdfd32d(int param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000050;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar6 = param_1 << 0x10;
  uVar4 = (~_DAT_18333e8d8 + 0xd3455267) *
          ((_DAT_18333ebe0 ^ 0xbfbafded) + (ulonglong)((uint)_DAT_18333ebe0 & 0xbfbafded) * 2);
  uVar4 = (uVar4 | _DAT_18333ec20) + (uVar4 & _DAT_18333ec20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18333e5d8 = func_0x00018ce0ee50((uVar4 | 0x6cffaf8b) + (ulonglong)((uint)uVar4 & 0x6cffaf8b))
  ;
  uVar4 = (ulonglong)(~(uint)((_DAT_18333e5d8 ^ 0xb9900000) >> 0x11) & 0x3b98dec8);
  _DAT_18333e818 = (_DAT_18333e818 ^ uVar4) + 0xfbdddeee ^ 0xd08d84cd2ef0e6a;
  _DAT_18333ec78 = (_DAT_18333ec78 * 0x2d45351a8b40f4f9 ^ _DAT_18333e818) + uVar4;
  _DAT_18333ea18 = _DAT_18333ec78 ^ _DAT_18333e818;
  _DAT_18333e760 = 0xfbdddeee;
  _DAT_18333ec68 = func_0x00018ce0ee50(_DAT_18333eca0 + 0x87000634ff93ff ^ 3);
  uVar3 = _DAT_18333ec68 ^ 0xefffacfc;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3)
          & 0x1fffffffffffff;
  _DAT_18333ea10 = (_DAT_18333ea10 ^ uVar4) + 0x8f96a4f8 ^ 0xcc13ee306f985b34;
  _DAT_18333e810 = (_DAT_18333e810 * -0x6efc3fda3c45aed9 ^ _DAT_18333ea10) + uVar4;
  _DAT_18333e7a0 = _DAT_18333e810 ^ _DAT_18333ea10;
  _DAT_18333ea30 = 0x8f96a4f8;
  uVar4 = (~_DAT_18333e978 + 0xd930ae01) *
          ((_DAT_18333e528 ^ 0x84222325) + (ulonglong)((uint)_DAT_18333e528 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18333e5e0) + (uVar4 & _DAT_18333e5e0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18333e578 = func_0x00018ce0ee50((uVar4 | 0x5d128d25) + (ulonglong)((uint)uVar4 & 0x5d128d25))
  ;
  _DAT_18333e7d8 = (_DAT_18333e7d8 ^ _DAT_18333e578 ^ 0xd930ae00) - 0xd930ae00 ^ 0x6c447c2bd3727974;
  _DAT_18333e8d0 =
       (_DAT_18333e8d0 * 0x6b2dd414844f292d ^ _DAT_18333e7d8) + (_DAT_18333e578 ^ 0xd930ae00);
  _DAT_18333e788 = _DAT_18333e8d0 ^ _DAT_18333e7d8;
  _DAT_18333e618 = 0x26cf5200;
  _DAT_18333ec08 = func_0x00018ce0ee50(_DAT_18333e640 + 0x72ffb51d006cff ^ 0x43);
  uVar4 = _DAT_18333ec08 << 0x3b | _DAT_18333ec08 >> 5;
  _DAT_18333e560 = _DAT_18333e868 ^ uVar4 ^ 0xda2fae00;
  _DAT_18333ebf8 = (_DAT_18333ebf8 ^ uVar4) + 0xda2fae00 ^ 0xe80623af13a1ea24;
  _DAT_18333ec88 = (_DAT_18333ec88 * 0x2867bb0017e48c03 ^ _DAT_18333ebf8) + uVar4;
  _DAT_18333e750 = _DAT_18333ec88 ^ _DAT_18333ebf8;
  _DAT_18333e8b0 = 0xda2fae00;
  uVar4 = (_DAT_18333ea20 ^ _DAT_1820a85a0) + _DAT_18333ebc8 + 0x5e0d8d25;
  uVar3 = (_DAT_18333ebc8 ^ _UNK_1820a85a8) + _DAT_18333ea20 + 0x26cf5200;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18333ea20 ^ _DAT_1820a85a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18333ebc8 ^ _UNK_1820a85a8;
  _DAT_18333ea08 =
       func_0x00018ce0ee50((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18333ea20 + 0x26cf5200) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18333ebc8 + 0x5e0d8d25));
  uVar4 = (ulonglong)(~(uint)_DAT_18333ea08 & 0xda2fae00);
  _DAT_18333e8a0 = _DAT_18333e7c0 ^ uVar4 ^ 0x100ff0000;
  _DAT_18333ea38 = (_DAT_18333ea38 ^ uVar4) + 0x100ff0000 ^ 0xf468b567f4e19c3;
  _DAT_18333ea18 = (_DAT_18333ea18 * 0x40082215116739ff ^ _DAT_18333ea38) + uVar4;
  _DAT_18333ead0 = _DAT_18333ea18 ^ _DAT_18333ea38;
  _DAT_18333e868 = 0xff0000;
  uVar4 = (_DAT_18333eb90 ^ _DAT_1820a85b0) + _DAT_18333e9a0 + 0x84222325;
  uVar3 = (_DAT_18333e9a0 ^ _UNK_1820a85b8) + _DAT_18333eb90 + 0xfe532470;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18333eb90 ^ _DAT_1820a85b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18333e9a0 ^ _UNK_1820a85b8;
  _DAT_18333e870 =
       func_0x00018ce0ee50((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18333eb90 + 0xfe532470) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18333e9a0 + 0x84222325));
  uVar4 = _DAT_18333e870 * 0x79991da43f19bcf3 & 0xffffffffff800000;
  _DAT_18333ec88 = (_DAT_18333ec88 ^ uVar4) - 0xfe532470 ^ 0xa300c81dc81e4a74;
  _DAT_18333e550 = (_DAT_18333e550 * 0x296d577468451cbd ^ _DAT_18333ec88) + uVar4;
  _DAT_18333e540 = _DAT_18333e550 ^ _DAT_18333ec88;
  _DAT_18333e900 = 0x1acdb90;
  _DAT_18333eac0 = func_0x00018ce0ee50(_DAT_18333ecb0 ^ 0xfffb0035d30079fe);
  uVar4 = _DAT_18333eac0 * 0x4eba2c018ae80000 |
          (ulonglong)(_DAT_18333eac0 * -0x117d9628ba7fcea3) >> 0x2d;
  _DAT_18333e698 = _DAT_18333e910 ^ uVar4 ^ 0xff522470;
  _DAT_18333ea78 = (_DAT_18333ea78 ^ uVar4) + 0xff522470 ^ 0xb18a1ef2bd048925;
  _DAT_18333e768 = (_DAT_18333e768 * 0x2980b017cac334b ^ _DAT_18333ea78) + uVar4;
  _DAT_18333ec60 = _DAT_18333e768 ^ _DAT_18333ea78;
  _DAT_18333e9c0 = 0xff522470;
  uVar4 = (_DAT_18333e8a8 ^ _DAT_1820a85c0) + _DAT_18333e870 + 0xec873ec5;
  uVar3 = (_DAT_18333e870 ^ _UNK_1820a85c8) + _DAT_18333e8a8 + 0x9859e220;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18333e8a8 ^ _DAT_1820a85c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18333e870 ^ _UNK_1820a85c8;
  _DAT_18333e6d8 =
       func_0x00018ce0ee50((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18333e8a8 + 0x9859e220) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18333e870 + 0xec873ec5));
  _DAT_18333ecb0 = _DAT_18333eb30 ^ _DAT_18333e5b0 ^ 0x100ff0000;
  _DAT_18333e718 = (_DAT_18333e718 ^ _DAT_18333e5b0) + 0x100ff0000 ^ 0x2f0730b3688d22b2;
  _DAT_18333e8b0 = (_DAT_18333e8b0 * -0x2414446c6ba45641 ^ _DAT_18333e718) + _DAT_18333e5b0;
  _DAT_18333e5a8 = _DAT_18333e8b0 ^ _DAT_18333e718;
  _DAT_18333e8f8 = 0xff0000;
  _DAT_18333e990 = func_0x00018ce0ee50(_DAT_18333e6e0 ^ 0x3700afd0ffd880);
  uVar4 = (_DAT_18333e990 & 0x3ffffffffff) * 0x80;
  _DAT_18333e8b8 = _DAT_18333eca0 ^ uVar4 ^ 0x18b7483e6;
  _DAT_18333e718 = (ulonglong)(&UNK_18b7483e6 + (_DAT_18333e718 ^ uVar4)) ^ 0xb4f7ea06d543282;
  _DAT_18333ec08 = (_DAT_18333ec08 * 0x5fc5f0121f2d5667 ^ _DAT_18333e718) + uVar4;
  _DAT_18333e558 = _DAT_18333ec08 ^ _DAT_18333e718;
  _DAT_18333e690 = 0x8b7483e6;
  uVar4 = (_DAT_18333ea78 ^ _DAT_1820a85d0) + _DAT_18333eb30 + 0x7ffffdcb;
  uVar3 = (_DAT_18333eb30 ^ _UNK_1820a85d8) + _DAT_18333ea78 + 0x8f96a4f8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18333ea78 ^ _DAT_1820a85d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18333eb30 ^ _UNK_1820a85d8;
  _DAT_18333e878 =
       func_0x00018ce0ee50((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18333ea78 + 0x8f96a4f8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18333eb30 + 0x7ffffdcb));
  uVar4 = _DAT_18333e878 - (_DAT_18333e878 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_18333e878;
  uVar4 = uVar4 << 0x36 | uVar4 >> 10;
  _DAT_18333e718 = (_DAT_18333e718 ^ uVar4) + 0x8b9484e8 ^ 0x6238d82338d199e8;
  _DAT_18333e9e8 = (_DAT_18333e9e8 * -0x7494a0c697a70eb7 ^ _DAT_18333e718) + uVar4;
  _DAT_18333e998 = _DAT_18333e9e8 ^ _DAT_18333e718;
  _DAT_18333e720 = 0x8b9484e8;
  _DAT_18333e640 = func_0x00018ce0ee50(_DAT_18333e900 ^ 0x1f008424ffe15d);
  _DAT_18333e6b0 = (_DAT_18333e640 ^ 0x8b7483e6) * 0x4113e3858b835e8f;
  _DAT_18333ea38 = _DAT_18333ea38 ^ _DAT_18333e6b0 ^ 0xb0658605d6f19e6e;
  _DAT_18333e728 = (_DAT_18333e728 * -0x2081c0c49fca87af ^ _DAT_18333ea38) + _DAT_18333e6b0;
  _DAT_18333ea20 = _DAT_18333e728 ^ _DAT_18333ea38;
  _DAT_18333e8c0 = 0;
  uVar4 = ((_DAT_18333e810 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18333e810 & 0x84dd2325) * 2) *
          -_DAT_18333ec08;
  uVar4 = (uVar4 | _DAT_18333ecd8) + (uVar4 & _DAT_18333ecd8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18333eb38 = func_0x00018ce0ee50((uVar4 | 0x84dd2325) + (ulonglong)((uint)uVar4 & 0x84dd2325))
  ;
  uVar4 = (_DAT_18333eb38 ^ 0xff0000) << 0x21 | _DAT_18333eb38 >> 0x1f;
  _DAT_18333e590 = _DAT_18333e990 ^ uVar4 ^ 0xff0000;
  _DAT_18333e7e8 = (_DAT_18333e7e8 ^ uVar4) + 0xff0000 ^ 0xd77c456c2e864fd3;
  _DAT_18333e580 = (_DAT_18333e580 * 0x74ee7a0ccb608bcf ^ _DAT_18333e7e8) + uVar4;
  _DAT_18333ea60 = _DAT_18333e580 ^ _DAT_18333e7e8;
  _DAT_18333e978 = 0xff0000;
  _DAT_18333ead0 = func_0x00018ce0ee50(_DAT_18333e850 + 0x2007febffffffU ^ 0x16);
  uVar4 = (_DAT_18333ead0 ^ 0xffffffff) & 0x7fffffffffffffff;
  uVar3 = (_DAT_18333e740 ^ uVar4) + 0x4222111;
  _DAT_18333e740 = uVar3 ^ 0x256572950c508891;
  _DAT_18333e9a8 = (_DAT_18333e9a8 * -0x1e9074ba7d322ac9 ^ _DAT_18333e740) + uVar4;
  _DAT_18333eb88 = _DAT_18333e9a8 ^ _DAT_18333e740;
  _DAT_18333ec68 = 0x4222111;
  _DAT_18333ecd0 = func_0x00018ce0ee50(uVar3 ^ 0xda858d112f50aaba);
  uVar4 = (ulonglong)(~(uint)_DAT_18333ecd0 & 0xff0000);
  _DAT_18333e940 = _DAT_18333eb38 ^ uVar4 ^ 0xff0000;
  _DAT_18333e648 = (_DAT_18333e648 ^ uVar4) + 0xff0000 ^ 0xe5277aa625c94dde;
  _DAT_18333e6f0 = (_DAT_18333e6f0 * -0x46ba8e01dc382325 ^ _DAT_18333e648) + uVar4;
  _DAT_18333e760 = _DAT_18333e6f0 ^ _DAT_18333e648;
  _DAT_18333eb88 = 0xff0000;
  uVar4 = (~_DAT_18333e838 + 0x3b98dec9) *
          ((_DAT_18333e598 ^ 0xbfbafded) + (ulonglong)((uint)_DAT_18333e598 & 0xbfbafded) * 2);
  uVar4 = (uVar4 | _DAT_18333e8c8) + (uVar4 & _DAT_18333e8c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18333ec98 = func_0x00018ce0ee50((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_18333e528 = _DAT_18333e528 ^ _DAT_18333e930 ^ 0x4671bb3d84eed435;
  _DAT_18333e700 = (_DAT_18333e700 * 0x537e3730ef7321b5 ^ _DAT_18333e528) + _DAT_18333e930;
  _DAT_18333e9e0 = _DAT_18333e700 ^ _DAT_18333e528;
  _DAT_18333ead0 = 0;
  uVar4 = ((_DAT_18333ea40 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18333ea40 & 0x84dd2325) * 2) *
          -_DAT_18333eb00;
  uVar4 = (uVar4 | _DAT_18333eca8) + (uVar4 & _DAT_18333eca8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18333e620 = func_0x00018ce0ee50((uVar4 | 0x84dd2325) + (ulonglong)((uint)uVar4 & 0x84dd2325))
  ;
  _DAT_18333ec68 = _DAT_18333e820 ^ _DAT_18333e620 ^ 0xff0000;
  _DAT_18333e5b8 = (_DAT_18333e5b8 ^ _DAT_18333e620) + 0xff0000 ^ 0x756214f835e5cf0d;
  _DAT_18333e6b0 = (_DAT_18333e6b0 * -0x94c8d0f0ccd57ef ^ _DAT_18333e5b8) + _DAT_18333e620;
  _DAT_18333e880 = _DAT_18333e6b0 ^ _DAT_18333e5b8;
  _DAT_18333ec00 = 0xff0000;
  uVar4 = (ulonglong)uVar6 ^ 0x84222325;
  uVar3 = uVar4 ^ _DAT_18333e5c0;
  lVar5 = uVar4 + _DAT_18333e680;
  uVar4 = uVar3 + lVar5;
  uVar7 = (_DAT_18333e680 ^ 0xff0000) + _DAT_18333e5c0 + 0xff0000;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18333e680 ^ 0xff0000;
  _DAT_18333e6b8 =
       func_0x00018ce0ee50((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18333e5c0 + 0xff0000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar4 = ~(_DAT_18333e6b8 << 0x15 | _DAT_18333e6b8 >> 0x2b) & (ulonglong)uVar6;
  uVar7 = (ulonglong)(uVar6 & 0xff0000);
  _DAT_18333ebd0 = (_DAT_18333ebd0 ^ uVar4) + uVar7 ^ 0x98899ce574bef2dc;
  _DAT_18333e6f0 = (_DAT_18333e6f0 * 0x4e880bfb63b0be5d ^ _DAT_18333ebd0) + uVar4;
  _DAT_18333e7f8 = _DAT_18333e6f0 ^ _DAT_18333ebd0;
  uVar3 = in_stack_00000050 ^ 0x84222325;
  uVar4 = ((_DAT_18333e6e8 ^ uVar3) + (uVar3 & _DAT_18333e6e8) * 2) * (uVar7 - _DAT_18333ec00);
  uVar4 = (uVar4 | _DAT_18333e8b8) + (uVar4 & _DAT_18333e8b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18333e768 = uVar7;
  _DAT_18333e968 = func_0x00018ce0ee50((uVar3 ^ uVar7 | uVar4) + (uVar4 & (uVar3 ^ uVar7)));
  uVar3 = in_stack_00000050 * uVar7 ^ _DAT_18333e968;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = in_stack_00000050 ^ (uint)bVar1 + (uint)bVar1 ^ uVar3;
  _DAT_18333e9e8 = in_stack_00000050 | uVar7;
  _DAT_18333e6c8 = (_DAT_18333e6c8 ^ uVar4) + _DAT_18333e9e8 ^ 0xf4ac27246a42c69d;
  _DAT_18333e548 = (_DAT_18333e548 * -0x385efbfb50b5a7d ^ _DAT_18333e6c8) + uVar4;
  _DAT_18333ea90 = _DAT_18333e548 ^ _DAT_18333e6c8;
  iVar2 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar2 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce0143e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce0143e(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce0a8cc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ce0a8cc(uint param_1)

{
  int iVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong in_stack_00000050;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar5 = (_DAT_18333e560 ^ _DAT_1820a89f0) + _DAT_18333e908 + 0x5c148640;
  uVar6 = (_DAT_18333e908 ^ _UNK_1820a89f8) + _DAT_18333e560 + 0x46974d17;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18333e560 ^ _DAT_1820a89f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18333e908 ^ _UNK_1820a89f8;
  _DAT_18333e6d8 =
       func_0x00018ce0ee50((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18333e560 + 0x46974d17) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18333e908 + 0x5c148640));
  _DAT_18333eae8 = (_DAT_18333eae8 ^ _DAT_18333e6d8) + 0xdeb7ed77 ^ 0xe1a9e53fe4d62cfa;
  _DAT_18333e820 = (_DAT_18333e820 * -0x46dd7b6c5b0107b1 ^ _DAT_18333eae8) + _DAT_18333e6d8;
  _DAT_18333e810 = _DAT_18333e820 ^ _DAT_18333eae8;
  _DAT_18333eab8 = 0xdeb7ed77;
  uVar5 = (_DAT_18333e8c8 ^ _DAT_1820a8a00) + _DAT_18333ec78 + 0x2eaf7cd3;
  uVar6 = (_DAT_18333ec78 ^ _UNK_1820a8a08) + _DAT_18333e8c8 + 0x38836626;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18333e8c8 ^ _DAT_1820a8a00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18333ec78 ^ _UNK_1820a8a08;
  _DAT_18333e798 =
       func_0x00018ce0ee50((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18333e8c8 + 0x38836626) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18333ec78 + 0x2eaf7cd3));
  _DAT_18333e5a0 = (_DAT_18333e5a0 ^ _DAT_18333e798) + 0x920e39d0 ^ 0xb1435e5f51898c13;
  _DAT_18333eae0 = (_DAT_18333eae0 * -0x53eae40e7f6b45d7 ^ _DAT_18333e5a0) + _DAT_18333e798;
  _DAT_18333e508 = _DAT_18333eae0 ^ _DAT_18333e5a0;
  _DAT_18333ea98 = 0x920e39d0;
  uVar5 = (~_DAT_18333e8c0 + 0xaaaee361) *
          ((_DAT_18333e870 ^ 0x84222325) + (ulonglong)((uint)_DAT_18333e870 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_18333e600) + (uVar5 & _DAT_18333e600);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18333e648 = func_0x00018ce0ee50((uVar5 | 0x2e8cc045) + (ulonglong)((uint)uVar5 & 0x2e8cc045))
  ;
  uVar5 = (_DAT_18333e5f8 ^ _DAT_18333e648) - 0xaaaee360;
  _DAT_18333e5f8 = uVar5 ^ 0x4a686e805ffbecc1;
  _DAT_18333ebb0 = (_DAT_18333ebb0 * -0x16db297cff5a3359 ^ _DAT_18333e5f8) + _DAT_18333e648;
  _DAT_18333ea60 = _DAT_18333ebb0 ^ _DAT_18333e5f8;
  _DAT_18333e870 = 0x55511ca0;
  uVar5 = (~_DAT_18333e9b0 + 0x55511ca1) *
          ((uVar5 ^ 0x4a686e8071772bbb) + (ulonglong)((uint)_DAT_18333e5f8 & 0x2e8cc77a) * 2);
  uVar5 = (uVar5 | _DAT_18333e800) + (uVar5 & _DAT_18333e800);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18333e690 = func_0x00018ce0ee50((uVar5 | 0x7bdddbda) + (ulonglong)((uint)uVar5 & 0x7bdddbda))
  ;
  uVar5 = _DAT_18333e690 << 0x1e | (_DAT_18333e690 & 0x7fffffffffffffff) >> 0x22;
  _DAT_18333e718 = _DAT_18333e758 ^ uVar5 ^ 0x1000000ff;
  _DAT_18333e728 = (_DAT_18333e728 ^ uVar5) + 0x1000000ff ^ 0xe6030e420de4ca5b;
  _DAT_18333e7b0 = (_DAT_18333e7b0 * -0x5abcbcebfa4d180b ^ _DAT_18333e728) + uVar5;
  _DAT_18333e698 = _DAT_18333e7b0 ^ _DAT_18333e728;
  _DAT_18333e6b8 = 0xff;
  uVar5 = (_DAT_18333e540 ^ _DAT_1820a8a10) + _DAT_18333e640 + 0x95ada896;
  uVar6 = (_DAT_18333e640 ^ _UNK_1820a8a18) + _DAT_18333e540 + 0xee70754c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18333e540 ^ _DAT_1820a8a10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18333e640 ^ _UNK_1820a8a18;
  _DAT_18333e818 =
       func_0x00018ce0ee50((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18333e540 + 0xee70754c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18333e640 + 0x95ada896));
  uVar6 = _DAT_18333e818 << 0x24 | _DAT_18333e818 >> 0x1c;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar6;
  _DAT_18333ebb8 = _DAT_18333ea68 ^ uVar6 ^ 0x1000000ff;
  _DAT_18333ebe8 = (_DAT_18333ebe8 ^ uVar6) + 0x1000000ff ^ 0x48df1ea18f2ddfa0;
  _DAT_18333e9f8 = (_DAT_18333e9f8 * 0x4f091b8a6dc02d0d ^ _DAT_18333ebe8) + uVar6;
  _DAT_18333e948 = _DAT_18333e9f8 ^ _DAT_18333ebe8;
  _DAT_18333e908 = 0xff;
  uVar5 = (~_DAT_18333ec30 + 0xc9e119a5) *
          ((_DAT_18333ec20 ^ 0x84222325) + (ulonglong)((uint)_DAT_18333ec20 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_18333e680) + (uVar5 & _DAT_18333e680);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18333e7a0 = func_0x00018ce0ee50((uVar5 | 0x4dc33a81) + (ulonglong)((uint)uVar5 & 0x4dc33a81))
  ;
  uVar5 = (_DAT_18333e7a0 ^ 0xc9e119a4) * 0x49afa99287a1c955;
  _DAT_18333e928 = (_DAT_18333e928 ^ uVar5) - 0xc9e119a4 ^ 0xa3554d11a0d7523a;
  _DAT_18333eaf0 = (_DAT_18333eaf0 * 0x2f13f982e23ef591 ^ _DAT_18333e928) + uVar5;
  _DAT_18333eb80 = _DAT_18333eaf0 ^ _DAT_18333e928;
  _DAT_18333e9b8 = 0x361ee65c;
  uVar5 = (_DAT_18333e5f8 ^ _DAT_1820a8a20) + _DAT_18333e518 + 0x842223da;
  uVar6 = (_DAT_18333e518 ^ _UNK_1820a8a28) + _DAT_18333e5f8 + 0xc9e119a4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18333e5f8 ^ _DAT_1820a8a20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18333e518 ^ _UNK_1820a8a28;
  _DAT_18333e9b0 =
       func_0x00018ce0ee50((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18333e5f8 + 0xc9e119a4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18333e518 + 0x842223da));
  uVar5 = (_DAT_18333e9b0 ^ 0xc917388a5c) & 0x7fffffffffffffff;
  _DAT_18333e968 = _DAT_18333e9e0 ^ uVar5 ^ 0xc9e11aa3;
  uVar6 = (_DAT_18333ec98 ^ uVar5) + 0xc9e11aa3;
  _DAT_18333ec98 = uVar6 ^ 0x6b01ebb6c04a0b78;
  _DAT_18333ecd8 = (_DAT_18333ecd8 * -0x26c38a1ba700ce2b ^ _DAT_18333ec98) + uVar5;
  _DAT_18333e770 = _DAT_18333ecd8 ^ _DAT_18333ec98;
  _DAT_18333ebc8 = 0xc9e11aa3;
  uVar5 = (~_DAT_18333e6c0 + 0x920e39d1) *
          ((uVar6 ^ 0x6b01ebb69adfc52a) + (ulonglong)((uint)_DAT_18333ec98 & 0x5a95ce52) * 2);
  uVar5 = (uVar5 | _DAT_18333eb50) + (uVar5 & _DAT_18333eb50);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18333e5f8 = func_0x00018ce0ee50((uVar5 | 0xc89bf782) + (ulonglong)((uint)uVar5 & 0xc89bf782))
  ;
  uVar5 = (_DAT_18333e5f8 & 0xfffffffffffffff0) - (_DAT_18333e5f8 >> 1 & 0x5555555555555550);
  uVar5 = (uVar5 & 0x3333333333333330) + (uVar5 >> 2 & 0x3333333333333330);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f07) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_18333e5f8 & 0xfffffffffffffff0;
  _DAT_18333eb68 = _DAT_18333e9a8 ^ uVar5 ^ 0x170c62747;
  _DAT_18333eb90 = (_DAT_18333eb90 ^ uVar5) + 0x170c62747 ^ 0x49c5022f6776807;
  _DAT_18333e9f8 = (_DAT_18333e9f8 * 0x641cce3339e9502d ^ _DAT_18333eb90) + uVar5;
  _DAT_18333e6b0 = _DAT_18333e9f8 ^ _DAT_18333eb90;
  _DAT_18333e8a0 = 0x70c62747;
  _DAT_18333ebd0 = func_0x00018ce0ee50(_DAT_18333ec80 + 0xf2ffc87e0084ff ^ 0xfd);
  uVar5 = _DAT_18333ebd0 - (_DAT_18333ebd0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18333ebd0;
  _DAT_18333ec08 = (_DAT_18333ec08 ^ uVar5) + 0x4cb9d4a7 ^ 0xca43f3398d494768;
  _DAT_18333eb48 = (_DAT_18333eb48 * -0x62298a3deed5e779 ^ _DAT_18333ec08) + uVar5;
  _DAT_18333e7b8 = _DAT_18333eb48 ^ _DAT_18333ec08;
  _DAT_18333e5b0 = 0x4cb9d4a7;
  uVar5 = (_DAT_18333e600 ^ _DAT_1820a8a30) + _DAT_18333eaf0 + 0x5a95ce52;
  uVar6 = (_DAT_18333eaf0 ^ _UNK_1820a8a38) + _DAT_18333e600 + 0x920e39d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18333e600 ^ _DAT_1820a8a30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18333eaf0 ^ _UNK_1820a8a38;
  _DAT_18333e9a0 =
       func_0x00018ce0ee50((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18333e600 + 0x920e39d0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18333eaf0 + 0x5a95ce52));
  _DAT_18333e538 =
       (_DAT_18333e538 ^ _DAT_18333e9a0 * 0x695af1a63553a5c7) + 0x92062950 ^ 0x2a6d4317cdba3f3a;
  _DAT_18333ebf0 =
       (_DAT_18333ebf0 * 0x1011af6263c4ef57 ^ _DAT_18333e538) + _DAT_18333e9a0 * 0x695af1a63553a5c7;
  _DAT_18333e7b8 = _DAT_18333ebf0 ^ _DAT_18333e538;
  _DAT_18333ec90 = 0x92062950;
  uVar5 = (_DAT_18333e508 ^ _DAT_1820a8a40) + _DAT_18333ec38 + 0xc89bf782;
  uVar6 = (_DAT_18333ec38 ^ _UNK_1820a8a48) + _DAT_18333e508 + 0x240c52a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18333e508 ^ _DAT_1820a8a40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18333ec38 ^ _UNK_1820a8a48;
  uVar5 = func_0x00018ce0ee50((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18333e508 + 0x240c52a0) ^
                              (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18333ec38 + 0xc89bf782));
  uVar5 = uVar5 ^ 0xacdd360ee166660;
  _DAT_18333e938 = _DAT_18333e758 ^ uVar5 ^ 0x70c62747;
  _DAT_18333e998 = (_DAT_18333e998 ^ uVar5) + 0x70c62747 ^ 0x4a9965c7e79ab029;
  _DAT_18333ecd8 = (_DAT_18333ecd8 * -0x7e193d304a326547 ^ _DAT_18333e998) + uVar5;
  _DAT_18333e760 = _DAT_18333ecd8 ^ _DAT_18333e998;
  _DAT_18333e9d8 = 0x70c62747;
  _DAT_18333ea90 = func_0x00018ce0ee50(_DAT_18333e8b8 ^ 0x22ff7c25001ddf);
  _DAT_18333ec40 =
       (_DAT_18333ea90 ^ 0x31adfbbe971c92f6) << 0x1b | (_DAT_18333ea90 ^ 0x31adfbbe971c92f6) >> 0x25
  ;
  _DAT_18333eac8 = _DAT_18333eac8 ^ _DAT_18333ec40 ^ 0x211afebcfffb2159;
  _DAT_18333ebe0 = (_DAT_18333ebe0 * -0x5564232e9c8217f7 ^ _DAT_18333eac8) + _DAT_18333ec40;
  _DAT_18333e850 = _DAT_18333ebe0 ^ _DAT_18333eac8;
  _DAT_18333e858 = 0;
  uVar5 = (_DAT_18333e720 ^ 0x842223da) + _DAT_18333eae0 + 0x842223da;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18333e720 ^ 0x842223da;
  uVar6 = ((_DAT_18333eae0 + _DAT_18333e720) * 0x2000 | _DAT_18333eae0 + _DAT_18333e720 >> 0x33) ^
          _DAT_18333eae0;
  _DAT_18333ec48 =
       func_0x00018ce0ee50((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_18333e720 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18333eae0 + 0x842223da));
  uVar5 = (ulonglong)(~(uint)((ulonglong)_DAT_18333ec48 >> 0x28) & 0xff);
  _DAT_18333e8f8 = _DAT_18333e560 ^ uVar5 ^ 0xff;
  _DAT_18333e958 = (_DAT_18333e958 ^ uVar5) + 0xff ^ 0x8adaaeed753b573;
  _DAT_18333e518 = (_DAT_18333e518 * 0x539c109da8672ef9 ^ _DAT_18333e958) + uVar5;
  _DAT_18333e508 = _DAT_18333e518 ^ _DAT_18333e958;
  _DAT_18333e5b8 = 0xff;
  _DAT_18333ead8 = func_0x00018ce0ee50(_DAT_18333ea28 ^ 0xffcc001a460034e6);
  uVar5 = _DAT_18333ead8 << 0x15 | _DAT_18333ead8 >> 0x2b;
  _DAT_18333e988 = _DAT_18333e988 ^ uVar5 ^ 0x563575ca5cb1e758;
  _DAT_18333e770 = (_DAT_18333e770 * 0x2755de1543d202ab ^ _DAT_18333e988) + uVar5;
  _DAT_18333eb78 = _DAT_18333e770 ^ _DAT_18333e988;
  _DAT_18333ec80 = 0;
  _DAT_18333ebc0 = func_0x00018ce0ee50(_DAT_18333e6e8 ^ 0xffe10084c60021d2);
  uVar5 = (_DAT_18333ebc0 * -0x3dbc970f99400000 |
          (ulonglong)(_DAT_18333ebc0 * -0x7b374cf6f25c3e65) >> 0x2a) >> 6 |
          ((ulonglong)(_DAT_18333ebc0 * -0x7b374cf6f25c3e65) >> 0x2a) << 0x3a;
  _DAT_18333ec68 = _DAT_18333e868 ^ uVar5 ^ 0xff;
  _DAT_18333ec80 = (_DAT_18333ec80 ^ uVar5) + 0xff ^ 0x966fa496bc7ad32f;
  _DAT_18333e850 = (_DAT_18333e850 * 0x1cb61209ba038b7d ^ _DAT_18333ec80) + uVar5;
  _DAT_18333e8c8 = _DAT_18333e850 ^ _DAT_18333ec80;
  _DAT_18333e840 = 0xff;
  uVar5 = ((_DAT_18333e7d0 ^ 0x842223da) + (ulonglong)((uint)_DAT_18333e7d0 & 0x842223da) * 2) *
          -_DAT_18333e828;
  uVar5 = (uVar5 | _DAT_18333e700) + (uVar5 & _DAT_18333e700);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18333eb28 = func_0x00018ce0ee50((uVar5 | 0x842223da) + (ulonglong)((uint)uVar5 & 0x842223da))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_18333eb28 & 0xff);
  _DAT_18333e6a0 = _DAT_18333ec70 ^ uVar5 ^ 0xff;
  _DAT_18333eb48 = (_DAT_18333eb48 ^ uVar5) + 0xff ^ 0xe3a37fe6578e2f8d;
  _DAT_18333e700 = (_DAT_18333e700 * -0x478b40f150a2e2ab ^ _DAT_18333eb48) + uVar5;
  _DAT_18333e778 = _DAT_18333e700 ^ _DAT_18333eb48;
  _DAT_18333ec28 = 0xff;
  uVar2 = ((ulonglong)param_1 & 0xff) << 0x20;
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_1820a8a50,_DAT_1800170c0);
  uVar6 = auVar4._8_8_ + auVar4._0_8_;
  uVar5 = uVar6 + _DAT_18333e878;
  if (auVar4._4_4_ < 0) {
    uVar5 = _DAT_18333e758 ^ uVar6;
  }
  _DAT_18333e6b8 = func_0x00018ce0ee50(SUB161(auVar3 ^ _DAT_1820a8a50,5) ^ uVar5);
  uVar5 = (_DAT_18333e6b8 & 0xfffffffffff00000) - (_DAT_18333e6b8 >> 1 & 0x5555555555500000);
  uVar5 = (uVar5 & 0x3333333333300000) + (uVar5 >> 2 & 0x3333333333300000);
  uVar5 = (_DAT_18333e6b8 & 0xfffffffffff00000) +
          (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f070000) * 0x101010101010101 >> 0x38) * 2;
  uVar2 = uVar2 | in_stack_00000050;
  _DAT_18333e638 = (_DAT_18333e550 ^ uVar5) + uVar2 ^ 0x564e91d85e47fea3;
  _DAT_18333ec50 = (_DAT_18333ec50 * -0x1b1c478d2d8db9bf ^ _DAT_18333e638) + uVar5;
  _DAT_18333e638 = _DAT_18333ec50 ^ _DAT_18333e638;
  _DAT_18333e550 = uVar2;
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xce0deac -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ce0deac(void)

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


// ----- block @ rva 0xce0ec74 -----

void FUN_18ce0ec74(void)

{
  return;
}


// ----- block @ rva 0xce0ece0 -----

void FUN_18ce0ece0(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

