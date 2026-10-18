// ===== Lsixtwo/ex; _bdc1508d9422d0323ece295e1c5c3830 ()V (handler @ image 18cdf60b0, runtime 6ffff4a060b0) =====

void FUN_18cdf60b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd9cf,0x25e);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cdf3429 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820a5cf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



