// ===== STITCHED CORPUS: sixtwo.fC =====
// handlers: 12  continuation blocks: 134  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x1a0f700', '0x1a10548', '0x1a10558', '0x1a10568', '0x1a10578', '0x1a10588', '0x1a10598', '0x1a105a8', '0x1a105b8', '0x1a105c8', '0x1a157b0', '0x1a157c0', '0x1a157d0', '0x1a157d8', '0x1a157e0', '0x1a157e8', '0x1a157f0', '0x1a157f8', '0x1a15800']

// ===== Lsixtwo/fC; _fa31f22af70cbdf56e21b1052cda26bc ()V (handler @ image 18af382a0, runtime 6ffff2b482a0) =====

void FUN_18af382a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af38388 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a0bf60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fC; aSA ([B)Ljava/lang/String; (handler @ image 18af55340, runtime 6ffff2b65340) =====

void FUN_18af55340(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018af553e3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a0f290 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fC; aSB (IJ)Ljava/lang/String; (handler @ image 18af7aeb0, runtime 6ffff2b8aeb0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af7aeb0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar4 = (~uRam0000000183280640 + 0xb90a49ce5b3949f3) *
          ((uRam0000000183280500 ^ 0xa9aa77b5cb55cd18) +
          (uRam0000000183280500 & 0x29aa77b5cb55cd18) * 2);
  uVar4 = (uVar4 | uRam00000001832805f8) + (uVar4 & uRam00000001832805f8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183280558 =
       func_0x00018af81ea0((uVar4 | 0x10a03e7b906c84ea) + (uVar4 & 0x10a03e7b906c84ea));
  lVar9 = (uRam0000000183280558 & 0xffffffff) * (ulonglong)_UNK_181a157b0;
  uVar4 = lVar9 << 0x2c |
          (lVar9 + ((ulonglong)_UNK_181a157c0 * (uRam0000000183280558 & 0xffffffff) +
                    (uRam0000000183280558 >> 0x20) * (ulonglong)_UNK_181a157b0 << 0x20) &
          0x7fffffffffffffff) >> 0x14;
  uRam00000001832805e0 = (uRam00000001832805e0 ^ uVar4) + 0x10a03e7b144ea7cf ^ 0x4c31ba455c37a1d1;
  uRam00000001832805c8 = (uRam00000001832805c8 * 0x1e5902fc291e2b37 ^ uRam00000001832805e0) + uVar4;
  uRam0000000183280618 = uRam00000001832805c8 ^ uRam00000001832805e0;
  uRam0000000183280548 = 0x10a03e7b144ea7cf;
  uVar4 = (uRam0000000183280630 ^ _UNK_181a157d0) + uRam0000000183280520 + 0x69cf17ac935d91da;
  uVar7 = (uRam0000000183280520 ^ _UNK_181a157d8) + uRam0000000183280630 + 0x9630e853e880cd00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183280630 ^ _UNK_181a157d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183280520 ^ _UNK_181a157d8;
  uRam0000000183280658 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183280630 + 0x9630e853e880cd00) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183280520 + 0x69cf17ac935d91da));
  uVar4 = uRam0000000183280658 * -0x46e127e75f9613e3;
  uRam00000001832806b8 = uRam0000000183280530 ^ uVar4 ^ 0x7fff;
  uRam00000001832806a8 = (uRam00000001832806a8 ^ uVar4) + 0x7fff ^ 0xb4e816f174c9b722;
  uRam0000000183280500 = (uRam0000000183280500 * 0x33e24ef6955d13bf ^ uRam00000001832806a8) + uVar4;
  uRam0000000183280520 = uRam0000000183280500 ^ uRam00000001832806a8;
  uRam00000001832805d8 = 0x7fff;
  uVar4 = (~uRam0000000183280610 + 0xc2b7dbff67f6042c) *
          ((uRam00000001832806d8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832806d8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001832805b8) + (uVar4 & uRam00000001832805b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832805e8 =
       func_0x00018af81ea0((uVar4 | 0xc2b7dbffe3d4270e) + (uVar4 & 0xc2b7dbffe3d4270e));
  uRam0000000183280598 = uRam0000000183280598 + 0x3d4824009809fbd5 ^ 0x17053bf26264c38;
  uRam00000001832806c0 = uRam0000000183280668 * -0x702de07e5edbc4ed;
  uRam0000000183280668 = uRam00000001832806c0 ^ uRam0000000183280598;
  uRam0000000183280540 = 0x3d4824009809fbd5;
  uVar4 = (uRam0000000183280588 ^ _UNK_181a157e0) + uRam0000000183280550 + 0xc2b7dbffe3d4a70f;
  uVar7 = (uRam0000000183280550 ^ _UNK_181a157e8) + uRam0000000183280588 + 0x3d4824009809fbd5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183280588 ^ _UNK_181a157e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183280550 ^ _UNK_181a157e8;
  uRam0000000183280648 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183280588 + 0x3d4824009809fbd5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183280550 + 0xc2b7dbffe3d4a70f));
  uVar4 = ~uRam0000000183280648;
  uVar7 = uVar4 >> 1 | uVar4;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar4;
  uRam0000000183280638 = uRam00000001832806f8 ^ uVar4 ^ 0x7fff;
  uRam00000001832806d8 = (uRam00000001832806d8 ^ uVar4) + 0x7fff ^ 0x7ae9dc886a0aac25;
  uRam0000000183280600 = (uRam0000000183280600 * 0x2be9ee6477f5a34b ^ uRam00000001832806d8) + uVar4;
  uRam0000000183280650 = uRam0000000183280600 ^ uRam00000001832806d8;
  uRam00000001832805a0 = 0x7fff;
  uVar4 = (~uRam00000001832805e8 + 0xe502871d2869a6f1) *
          ((uRam0000000183280578 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183280578 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001832805c0) + (uVar4 & uRam00000001832805c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183280570 =
       func_0x00018af81ea0((uVar4 | 0xe502871dac4b85d5) + (uVar4 & 0xe502871dac4b85d5));
  uVar4 = ((uRam0000000183280570 ^ 0xe502871d2869a6f0) & 0x7ffffffff) << 0x1c |
          (uRam0000000183280570 ^ 0xe502871d2869a6f0) >> 0x24;
  uRam00000001832805d0 = (uRam00000001832805d0 ^ uVar4) + 0x1afd78e2d7965910 ^ 0x587e9f64e81e250f;
  uRam00000001832806f0 = (uRam00000001832806f0 * -0x7329e1828ed0a2ed ^ uRam00000001832805d0) + uVar4
  ;
  uRam0000000183280508 = uRam00000001832806f0 ^ uRam00000001832805d0;
  uRam00000001832805c8 = 0x1afd78e2d7965910;
  uRam00000001832805d8 = func_0x00018af81ea0(uRam00000001832805a0 + 0xf395fe94167d3ae2 ^ 0x92);
  uVar4 = uRam00000001832805d8 >> 1 | uRam00000001832805d8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001832805d8;
  uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar1 + (uint)bVar1 ^ uVar7;
  uRam0000000183280580 = uRam0000000183280528 ^ uVar7 ^ 0xe502871d286a26ef;
  uRam0000000183280560 = (uRam0000000183280560 ^ uVar7) + 0xe502871d286a26ef ^ 0xd40e41591591385;
  uRam0000000183280680 =
       (uRam0000000183280680 * 0x649550d767ebf02f ^ uRam0000000183280560) + uVar7 ^
       uRam0000000183280560;
  uRam00000001832806f8 = 0xe502871d286a26ef;
  uRam0000000183280580 = func_0x00018af81ea0(uRam0000000183280508 + 0x74bacd72934b636 ^ 0x1a);
  uRam0000000183280590 = ~(uRam0000000183280580 * 0x396b0fe87c74e6e1) & 0xe502871d286a26ef;
  uRam00000001832805a8 = (uRam00000001832805a8 ^ uRam0000000183280590) + 0x7fff ^ 0xcbe7c4707c94bbb7
  ;
  uRam0000000183280590 =
       ((uRam00000001832806d8 ^ uRam0000000183280590 ^ 0x7fff) * 0x2b50faeb8a8fea2d ^
       uRam00000001832805a8) + uRam0000000183280590;
  uRam0000000183280520 = uRam0000000183280590 ^ uRam00000001832805a8;
  uRam00000001832806e0 = 0x7fff;
  uRam00000001832806e8 = func_0x00018af81ea0(uRam0000000183280690 + 0x263a3b56f3c05082 ^ 0xed);
  uVar4 = (uRam00000001832806e8 & 0xfffffffffffe0000) -
          (uRam00000001832806e8 >> 1 & 0x5555555555550000);
  uVar4 = (uVar4 & 0x3333333333330000) + (uVar4 >> 2 & 0x3333333333330000);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0000) * 0x101010101010101 >> 0x37 &
          0xfffffffffffe01c0 | uRam00000001832806e8 & 0xfffffffffffe0000;
  uRam00000001832805a0 = (uRam00000001832805a0 ^ uVar4) + 0x87dfc126ef931932 ^ 0xb56fc44015e1122c;
  uRam0000000183280588 = (uRam0000000183280588 * 0x18a816cd02a2d1a1 ^ uRam00000001832805a0) + uVar4;
  uRam00000001832806f8 = uRam0000000183280588 ^ uRam00000001832805a0;
  uRam0000000183280560 = 0x87dfc126ef931932;
  uRam00000001832805b0 = func_0x00018af81ea0(uRam00000001832806c0 + 0xde19251509407080 ^ 0x89);
  uRam0000000183280648 =
       (uRam0000000183280648 ^ uRam00000001832805b8 & 0x7fffffffffffff) + 0x10203e59104ca6cd ^
       0xa147c1dad7ef05f8;
  uRam0000000183280640 =
       (uRam0000000183280640 * 0x32b067b69ad6f287 ^ uRam0000000183280648) +
       (uRam00000001832805b8 & 0x7fffffffffffff);
  uRam0000000183280578 = uRam0000000183280640 ^ uRam0000000183280648;
  uRam0000000183280630 = 0x10203e59104ca6cd;
  uRam0000000183280610 = func_0x00018af81ea0(uRam00000001832806d8 + 0x747760ba837d1760 ^ 0xdf);
  uVar7 = uRam0000000183280610 ^ 0xb8e6364fabf33214;
  uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar7;
  uRam0000000183280558 = uRam00000001832805a8 ^ uVar7 ^ 0xa8203dd9102c66cc;
  uRam00000001832806b0 = (uRam00000001832806b0 ^ uVar7) + 0xa8203dd9102c66cc ^ 0x4c99bed04b1f33f8;
  uRam0000000183280508 = (uRam0000000183280508 * 0x6d1f9b5569567a05 ^ uRam00000001832806b0) + uVar7;
  uRam0000000183280628 = uRam0000000183280508 ^ uRam00000001832806b0;
  uRam0000000183280588 = -0x57dfc226efd39934;
  uRam0000000183280530 = func_0x00018af81ea0(uRam00000001832806a8 ^ 0xffdf0083e4ffe19d);
  uRam0000000183280658 = uRam0000000183280530 & 0xffffffffffc00000;
  uVar4 = uRam0000000183280600 ^ uRam0000000183280658 ^ 0xe371a3ea1a0b9a02;
  uRam0000000183280588 =
       (uRam0000000183280588 * -0x7a9dd8bb2b7bee23 ^ uVar4) + uRam0000000183280658 ^ uVar4;
  uRam0000000183280600 = 0;
  uRam0000000183280690 = func_0x00018af81ea0(uRam0000000183280508 ^ 0x2bff835a001dc2);
  uVar4 = uRam0000000183280690 << 0x2f | uRam0000000183280690 >> 0x11;
  uRam00000001832805a0 = (uRam00000001832805a0 ^ uVar4) + 0x7fff ^ 0x3ee5161813fb276e;
  uRam0000000183280630 = (uRam0000000183280630 * -0x3f07a60d7b6475a1 ^ uRam00000001832805a0) + uVar4
  ;
  uRam0000000183280640 = uRam0000000183280630 ^ uRam00000001832805a0;
  uRam0000000183280648 = 0x7fff;
  uVar4 = (uRam00000001832806f8 ^ _UNK_181a157f0) + uRam00000001832805e0 + 0x977fff5d7fff9dd8;
  uVar7 = (uRam00000001832805e0 ^ _UNK_181a157f8) + uRam00000001832806f8 + 0x688000a204224102;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832806f8 ^ _UNK_181a157f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832805e0 ^ _UNK_181a157f8;
  uRam0000000183280660 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832806f8 + 0x688000a204224102) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832805e0 + 0x977fff5d7fff9dd8));
  uRam0000000183280508 =
       uRam0000000183280508 ^ uRam0000000183280660 & 0xfffffffffff00000 ^ 0xc39ed5fb3fed6fd3;
  uRam0000000183280630 =
       (uRam0000000183280630 * -0x1b3e5ff731698bb ^ uRam0000000183280508) +
       (uRam0000000183280660 & 0xfffffffffff00000);
  uRam0000000183280508 = uRam0000000183280630 ^ uRam0000000183280508;
  uRam0000000183280670 = 0;
  uVar4 = (uRam0000000183280538 ^ 0x84225cda) + uRam00000001832805b8 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183280538 ^ 0x84225cda;
  uVar7 = ((uRam00000001832805b8 + uRam0000000183280538) * 0x2000 |
          uRam00000001832805b8 + uRam0000000183280538 >> 0x33) ^ uRam00000001832805b8;
  uRam0000000183280608 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183280538 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832805b8 + 0x84225cda));
  uVar4 = uRam0000000183280608 >> 0x13 & 0x3ffffffffff;
  uRam0000000183280638 = uRam0000000183280678 ^ uVar4 ^ 0x7fff;
  uRam00000001832806e8 = (uRam00000001832806e8 ^ uVar4) + 0x7fff ^ 0xc27b66089d399905;
  uRam0000000183280698 = (uRam0000000183280698 * -0x4e1d9b9d34b0b0b9 ^ uRam00000001832806e8) + uVar4
  ;
  uRam0000000183280558 = uRam0000000183280698 ^ uRam00000001832806e8;
  uRam0000000183280598 = 0x7fff;
  uVar4 = (uRam0000000183280678 ^ _UNK_181a15800) + uRam00000001832806e8 + 0x937a8e1dbd3f93d5;
  uVar7 = (uRam00000001832806e8 ^ _UNK_181a15808) + uRam0000000183280678 + 0x937a8e1d391db0f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183280678 ^ _UNK_181a15800;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832806e8 ^ _UNK_181a15808;
  uRam00000001832805f0 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183280678 + 0x937a8e1d391db0f0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832806e8 + 0x937a8e1dbd3f93d5));
  uRam00000001832806b8 =
       uRam00000001832806b8 ^ uRam00000001832805f0 & 0xfffffffffe000000 ^ 0xd9a883044d92b4ae;
  uRam0000000183280690 =
       (uRam0000000183280690 * -0x6485addf0f837d21 ^ uRam00000001832806b8) +
       (uRam00000001832805f0 & 0xfffffffffe000000);
  uRam0000000183280670 = uRam0000000183280690 ^ uRam00000001832806b8;
  uRam00000001832806d8 = 0;
  uVar4 = (uRam00000001832806d0 ^ 0x84225cda) + uRam0000000183280690 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832806d0 ^ 0x84225cda;
  uVar7 = ((uRam0000000183280690 + uRam00000001832806d0) * 0x2000 |
          uRam0000000183280690 + uRam00000001832806d0 >> 0x33) ^ uRam0000000183280690;
  uRam00000001832806f0 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam00000001832806d0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183280690 + 0x84225cda));
  uVar4 = uRam00000001832806f0 & 0x7fffffffffff;
  uRam00000001832806c8 = uRam0000000183280698 ^ uVar4 ^ 0x7fff;
  uRam00000001832806b8 = (uRam00000001832806b8 ^ uVar4) + 0x7fff ^ 0xf02eae8a784c1bd9;
  uRam0000000183280698 = (uRam0000000183280698 * 0xc492472010ddf41 ^ uRam00000001832806b8) + uVar4;
  uRam0000000183280620 = uRam0000000183280698 ^ uRam00000001832806b8;
  uRam00000001832806a0 = 0x7fff;
  uVar4 = (~uRam0000000183280538 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001832805f0) +
          ((param_4 ^ 0x84222325) & uRam00000001832805f0) * 2);
  uVar4 = (uVar4 | uRam0000000183280690) + (uVar4 & uRam0000000183280690);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183280578 =
       func_0x00018af81ea0((param_4 ^ 0x84225cda | uVar4) + (uVar4 & (param_4 ^ 0x84225cda)));
  uVar3 = (uint)param_4 & 0x7fff;
  uRam00000001832805a0 = (ulonglong)uVar3;
  uRam00000001832806c8 =
       (uRam00000001832806c8 ^ uRam0000000183280578 & 0x1fffffffffffff) + uRam00000001832805a0 ^
       0x41f14c451c0f96b3;
  uRam0000000183280678 =
       (uRam0000000183280678 * -0x741124c1b475cc35 ^ uRam00000001832806c8) +
       (uRam0000000183280578 & 0x1fffffffffffff);
  uRam00000001832806e8 = uRam0000000183280678 ^ uRam00000001832806c8;
  uVar4 = uRam00000001832805a0 ^ 0x84222325 ^ uRam0000000183280630;
  uVar7 = param_3 ^ uRam00000001832805d8;
  lVar5 = (uRam00000001832805a0 ^ 0x84222325) + uRam00000001832805d8;
  lVar9 = uRam0000000183280630 + param_3;
  uVar6 = uVar4 + lVar5;
  uVar8 = uVar7 + lVar9;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uRam00000001832806b8 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) - lVar9 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uRam0000000183280680 = (ulonglong)(uVar3 ^ param_3);
  uRam00000001832806d8 =
       (uRam00000001832806d8 ^ uRam00000001832806b8) + uRam0000000183280680 ^ 0xc6b2528b535abc54;
  uRam0000000183280530 =
       (uRam0000000183280530 * -0x2955b899317a9edb ^ uRam00000001832806d8) + uRam00000001832806b8;
  uRam0000000183280588 = uRam0000000183280530 ^ uRam00000001832806d8;
  uVar4 = (~uRam0000000183280540 + 0x49f2ab1) *
          ((uRam0000000183280638 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183280638 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183280658) + (uVar4 & uRam0000000183280658);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183280520 =
       func_0x00018af81ea0((uVar4 | 0x80bd0995) + (ulonglong)((uint)uVar4 & 0x80bd0995));
  uRam00000001832806c0 = uRam00000001832806c0 - 0x49f2ab0 ^ 0x679025b06b076e97;
  uRam0000000183280608 = uRam00000001832806c8 * 0x34d1d83078747233;
  uRam00000001832806c8 = uRam0000000183280608 ^ uRam00000001832806c0;
  uRam0000000183280688 = uRam00000001832806d0 ^ 0xfffffffffb60d550;
  uRam0000000183280678 = 0xfb60d550;
  uVar4 = (uRam00000001832806b0 ^ _UNK_181a15810) + uRam00000001832806c8 + 0x84225a99;
  uVar7 = (uRam00000001832806c8 ^ _UNK_181a15818) + uRam00000001832806b0 + 0x49f2ab0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832806b0 ^ _UNK_181a15810;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832806c8 ^ _UNK_181a15818;
  uRam00000001832805a0 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832806b0 + 0x49f2ab0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832806c8 + 0x84225a99));
  uVar4 = (uRam00000001832805a0 ^ 0x49f0200) << 0x11 | uRam00000001832805a0 >> 0x2f;
  uRam0000000183280560 = uRam00000001832805b8 ^ uVar4 ^ 0x49fa46c;
  uRam00000001832805a8 = (uRam00000001832805a8 ^ uVar4) + 0x49fa46c ^ 0x92381f5e221b8ea8;
  uRam0000000183280640 = (uRam0000000183280640 * 0x545671d30560d82b ^ uRam00000001832805a8) + uVar4;
  uRam00000001832806f8 = uRam0000000183280640 ^ uRam00000001832805a8;
  uRam0000000183280590 = 0x49fa46c;
  uRam0000000183280550 = func_0x00018af81ea0(uRam00000001832806d8 + 0xffce00651700baff ^ 0xe);
  uVar4 = uRam0000000183280550 ^ 0x49fa46c;
  uRam0000000183280570 = uRam00000001832806b0 ^ uVar4 ^ 0x1000079bc;
  uRam00000001832805a8 = (uRam00000001832805a8 ^ uVar4) + 0x1000079bc ^ 0x6ef2c8f2bc939721;
  uRam0000000183280678 = (uRam0000000183280678 * -0x54dad94748e0b7c1 ^ uRam00000001832805a8) + uVar4
  ;
  uRam0000000183280618 = uRam0000000183280678 ^ uRam00000001832805a8;
  uRam00000001832806b0 = 0x79bc;
  uVar4 = (~uRam0000000183280688 + 0x60251b19) *
          ((uRam0000000183280618 ^ 0x84225a99) +
          (ulonglong)((uint)uRam0000000183280618 & 0x84225a99) * 2);
  uVar4 = (uVar4 | uRam00000001832806c0) + (uVar4 & uRam00000001832806c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183280558 =
       func_0x00018af81ea0((uVar4 | 0xe4074181) + (ulonglong)((uint)uVar4 & 0xe4074181));
  uVar4 = uRam0000000183280558 & 0x3ffffffffff;
  uRam00000001832805b0 = uRam0000000183280528 ^ uVar4 ^ 0x602594d4;
  uRam0000000183280628 = (uRam0000000183280628 ^ uVar4) + 0x602594d4 ^ 0xa15e43a2f0931cf4;
  uRam00000001832806e8 = (uRam00000001832806e8 * -0x4075134c611a2cdb ^ uRam0000000183280628) + uVar4
  ;
  uRam0000000183280628 = uRam00000001832806e8 ^ uRam0000000183280628;
  uRam00000001832806a0 = 0x602594d4;
  uVar4 = (uRam00000001832805c8 ^ _UNK_181a15820) + uRam0000000183280540 + 0xe407b7f1;
  uVar7 = (uRam0000000183280540 ^ _UNK_181a15828) + uRam00000001832805c8 + 0x9fdae4e8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832805c8 ^ _UNK_181a15820;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183280540 ^ _UNK_181a15828;
  uRam00000001832805c0 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832805c8 + 0x9fdae4e8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183280540 + 0xe407b7f1));
  uVar4 = uRam00000001832805c0 & 0xffffffffe0000000;
  uRam00000001832806a8 = uRam0000000183280540 ^ uVar4 ^ 0x1000079bc;
  uRam00000001832805f0 = (uRam00000001832805f0 ^ uVar4) + 0x1000079bc ^ 0xc2d5f6cf0234c718;
  uRam00000001832805c8 = (uRam00000001832805c8 * -0x3231afa535303f6d ^ uRam00000001832805f0) + uVar4
  ;
  uRam00000001832806f0 = uRam00000001832805c8 ^ uRam00000001832805f0;
  uRam0000000183280568 = 0x79bc;
  uVar4 = (~uRam0000000183280588 + 0xb2571329) *
          ((uRam0000000183280500 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183280500 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001832806c8) + (uVar4 & uRam00000001832806c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183280570 =
       func_0x00018af81ea0((uVar4 | 0x3675300d) + (ulonglong)((uint)uVar4 & 0x3675300d));
  uRam0000000183280610 =
       (uRam0000000183280610 ^ uRam0000000183280570) - 0xb2571328 ^ 0x1864fe8cef2737b8;
  uRam00000001832806b8 =
       (uRam00000001832806b8 * -0x24305e5c31fbcd47 ^ uRam0000000183280610) + uRam0000000183280570;
  uRam0000000183280608 = uRam00000001832806b8 ^ uRam0000000183280610;
  uRam00000001832805e0 = 0x4da8ecd8;
  uVar4 = (uRam00000001832805e8 ^ _UNK_181a15830) + uRam0000000183280620 + 0x84225a99;
  uVar7 = (uRam0000000183280620 ^ _UNK_181a15838) + uRam00000001832805e8 + 0xb2571328;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832805e8 ^ _UNK_181a15830;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183280620 ^ _UNK_181a15838;
  uRam0000000183280630 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832805e8 + 0xb2571328) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183280620 + 0x84225a99));
  uRam0000000183280528 = uRam0000000183280670 ^ uRam0000000183280630 ^ 0xb2578ce4;
  uRam0000000183280578 =
       (uRam0000000183280578 ^ uRam0000000183280630) + 0xb2578ce4 ^ 0x4c42f41a9b4a8d1;
  uRam0000000183280650 =
       (uRam0000000183280650 * 0x51f4072ce33cd59b ^ uRam0000000183280578) + uRam0000000183280630;
  uRam0000000183280680 = uRam0000000183280650 ^ uRam0000000183280578;
  uRam0000000183280570 = 0xb2578ce4;
  uRam0000000183280528 = func_0x00018af81ea0(uRam0000000183280508 ^ 0xffbeffdb0900babf);
  uVar4 = (uRam0000000183280528 ^ 0x4da8ecd8) << 0x1f | uRam0000000183280528 >> 0x21;
  uRam00000001832805e8 = uRam0000000183280678 ^ uVar4 ^ 0x1000079bc;
  uRam0000000183280610 = (uRam0000000183280610 ^ uVar4) + 0x1000079bc ^ 0x17efe0c314c6d360;
  uRam0000000183280550 = (uRam0000000183280550 * 0x2ce3303ea82484d ^ uRam0000000183280610) + uVar4;
  uRam0000000183280530 = uRam0000000183280550 ^ uRam0000000183280610;
  uRam0000000183280548 = 0x79bc;
  uVar4 = (~uRam0000000183280598 + 0x4c103b73) *
          ((uRam00000001832806f0 ^ 0x3e5cc899) +
          (ulonglong)((uint)uRam00000001832806f0 & 0x3e5cc899) * 2);
  uVar4 = (uVar4 | uRam0000000183280658) + (uVar4 & uRam0000000183280658);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x00018af81ea0((uVar4 | 0x724cf3eb) + (ulonglong)((uint)uVar4 & 0x724cf3eb));
  uVar4 = uVar4 & 0x3fffffffffffff ^ 0xba7eebbc;
  uRam0000000183280590 = uRam0000000183280640 ^ uVar4 ^ 0x1068f272e;
  uRam00000001832806c8 = (uRam00000001832806c8 ^ uVar4) + 0x1068f272e ^ 0x86a078c870887e7e;
  uRam0000000183280668 =
       (uRam0000000183280580 * 0x62b10ebc4f5c9123 ^ uRam00000001832806c8) + uVar4 ^
       uRam00000001832806c8;
  uRam0000000183280580 = 0x68f272e;
  uVar4 = (uRam00000001832805f0 ^ _UNK_181a15840) + 0x44ebefc7;
  uVar7 = (_UNK_181a15848 ^ 0x68f272e) + uRam00000001832805f0 + 0x4c103b72;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832805f0 ^ _UNK_181a15840;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _UNK_181a15848 ^ 0x68f272e;
  uRam0000000183280620 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832805f0 + 0x4c103b72) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - 0x44ebefc7);
  uVar4 = uRam0000000183280620 << 0x29 | uRam0000000183280620 >> 0x17;
  uRam00000001832805f8 = (uRam00000001832805f8 ^ uVar4) + 0xf66ed0ce ^ 0x8d56564d9182d5dd;
  uRam0000000183280630 = (uRam0000000183280630 * -0x2bb38ef01de679c9 ^ uRam00000001832805f8) + uVar4
  ;
  uRam0000000183280550 = uRam0000000183280630 ^ uRam00000001832805f8;
  uRam00000001832805f0 = 0xf66ed0ce;
  uVar4 = (~uRam0000000183280628 + 0x4c103b73) *
          ((uRam00000001832806e0 ^ 0x3e5cc899) +
          (ulonglong)((uint)uRam00000001832806e0 & 0x3e5cc899) * 2);
  uVar4 = (uVar4 | uRam00000001832805b0) + (uVar4 & uRam00000001832805b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183280678 =
       func_0x00018af81ea0((uVar4 | 0x724cf3eb) + (ulonglong)((uint)uVar4 & 0x724cf3eb));
  uVar4 = uRam0000000183280678 & 0x3ffffffffffffff ^ 0xba7eebbc;
  uVar4 = uVar4 << 0x22 | uVar4 >> 0x1e;
  uRam0000000183280640 = (uRam0000000183280580 ^ uVar4) + 0x8102b30 ^ 0xcf02ea1e3499c697;
  uRam0000000183280570 = (uRam0000000183280570 * 0x75f785d1c3a41b13 ^ uRam0000000183280640) + uVar4;
  uRam0000000183280640 = uRam0000000183280570 ^ uRam0000000183280640;
  uRam0000000183280580 = 0x8102b30;
  uVar4 = (~uRam0000000183280558 + 0x10205661) *
          ((uRam00000001832805a0 ^ 0x724cf3eb) +
          (ulonglong)((uint)uRam00000001832805a0 & 0x724cf3eb) * 2);
  uVar4 = (uVar4 | uRam0000000183280548) + (uVar4 & uRam0000000183280548);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832805e8 =
       func_0x00018af81ea0((uVar4 | 0x626ca58b) + (ulonglong)((uint)uVar4 & 0x626ca58b));
  uRam0000000183280578 = uRam00000001832805b8 ^ uRam0000000183280698 ^ 0x1068f272e;
  uRam0000000183280518 =
       (uRam0000000183280518 ^ uRam0000000183280698) + 0x1068f272e ^ 0xbf040beb51bfa78c;
  uRam0000000183280550 =
       (uRam0000000183280550 * -0x4fb308ebc36e1741 ^ uRam0000000183280518) + uRam0000000183280698;
  uRam0000000183280590 = uRam0000000183280550 ^ uRam0000000183280518;
  uRam00000001832806d8 = 0x68f272e;
  uVar4 = (_UNK_181a15850 ^ 0x68f272e) + uRam0000000183280580 + 0x82ad040b;
  uVar7 = (uRam0000000183280580 ^ _UNK_181a15858) + 0xd1e4e5c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _UNK_181a15850 ^ 0x68f272e;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183280580 ^ _UNK_181a15858;
  uRam0000000183280508 =
       func_0x00018af81ea0((uVar7 << 0x1d | uVar7 >> 0x23) - 0xd1e4e5c ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183280580 + 0x82ad040b));
  uRam00000001832806c0 = (uRam0000000183280508 ^ 0x68f272e) & 0x7fffffffffffffff;
  uRam00000001832805c8 = uRam00000001832805c8 ^ uRam00000001832806c0 ^ 0xf8c72689152261e5;
  uRam00000001832806a0 =
       (uRam00000001832806a0 * 0x1b41379383a26c45 ^ uRam00000001832805c8) + uRam00000001832806c0;
  uRam0000000183280668 = uRam00000001832806a0 ^ uRam00000001832805c8;
  uRam0000000183280528 = 0;
  uRam00000001832806c0 = func_0x00018af81ea0(uRam00000001832805b0 + 0xffa6007b690021ff ^ 0x8f);
  uRam0000000183280580 = (uRam0000000183280580 ^ uRam00000001832806c0) + 0x79bc ^ 0xb3b2bc2c33b1dcb1
  ;
  uRam00000001832806d0 =
       ((uRam00000001832806f8 ^ uRam00000001832806c0 ^ 0x79bc) * 0x66766d1284e84a55 ^
       uRam0000000183280580) + uRam00000001832806c0;
  uRam0000000183280648 = uRam00000001832806d0 ^ uRam0000000183280580;
  uRam0000000183280568 = 0x79bc;
  uVar4 = (~uRam0000000183280600 + 0x100000000) *
          ((uRam00000001832806f8 ^ 0x3e5cc899) +
          (ulonglong)((uint)uRam00000001832806f8 & 0x3e5cc899) * 2);
  uVar4 = (uVar4 | uRam0000000183280608) + (uVar4 & uRam0000000183280608);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832805c0 =
       func_0x00018af81ea0((uVar4 | 0xc1a33766) + (ulonglong)((uint)uVar4 & 0xc1a33766));
  uRam0000000183280598 =
       (uRam0000000183280598 ^ uRam00000001832805c0 ^ 0xba7eebbc) + 0x45811443 ^ 0xa8096a70ed53baa6;
  uRam00000001832806b8 =
       (uRam00000001832806b8 * 0x19df1f31bd661d5f ^ uRam0000000183280598) +
       (uRam00000001832805c0 ^ 0xba7eebbc);
  uRam0000000183280668 = uRam00000001832806b8 ^ uRam0000000183280598;
  uRam0000000183280698 = 0x45811443;
  uRam0000000183280628 = func_0x00018af81ea0(uRam0000000183280548 + 0xffb400045a004aff ^ 0x1d);
  uVar4 = (uRam0000000183280628 ^ 0x32a23e412f5e6234) << 0x29 |
          (uRam0000000183280628 ^ 0x32a23e412f5e6234) >> 0x17;
  uVar7 = uVar4 >> 1 | uVar4;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar4;
  uRam0000000183280610 = uRam0000000183280610 ^ uVar4 ^ 0x7c1df59275a16ef9;
  uRam00000001832805f8 = (uRam00000001832805f8 * 0x604393c0d515cf8d ^ uRam0000000183280610) + uVar4;
  uRam00000001832806e0 = uRam00000001832805f8 ^ uRam0000000183280610;
  uRam00000001832806b8 = 0;
  uVar4 = ((uRam0000000183280620 ^ 0x84225a99) +
          (ulonglong)((uint)uRam0000000183280620 & 0x84225a99) * 2) * -uRam00000001832805a0;
  uVar4 = (uVar4 | uRam00000001832806e8) + (uVar4 & uRam00000001832806e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183280570 =
       func_0x00018af81ea0((uVar4 | 0x84225a99) + (ulonglong)((uint)uVar4 & 0x84225a99));
  uRam00000001832805f8 = (uRam00000001832805f8 ^ uRam0000000183280570) + 0x79bc ^ 0x9935246333871ef2
  ;
  uRam0000000183280660 =
       (uRam0000000183280660 * 0x3589622893530f23 ^ uRam00000001832805f8) + uRam0000000183280570;
  uRam0000000183280580 = uRam0000000183280660 ^ uRam00000001832805f8;
  uRam0000000183280698 = 0x79bc;
  uRam00000001832805c8 = func_0x00018af81ea0(uRam0000000183280550 + 0x1cff8425001dff ^ 0x94);
  uVar4 = (uRam00000001832805c8 ^ 0x741a10d222e4e90) & 0x1fffffffffffffff;
  uRam0000000183280600 = uRam0000000183280600 ^ uVar4 ^ 0xe87a0fb084ecaea9;
  uRam0000000183280620 = (uRam0000000183280620 * 0x1a475d590431b0a9 ^ uRam0000000183280600) + uVar4;
  uRam0000000183280688 = uRam0000000183280620 ^ uRam0000000183280600;
  uRam00000001832805f8 = 0;
  uRam0000000183280508 = func_0x00018af81ea0(uRam00000001832805b0 + 0xffb5ff7c89001dff ^ 0x21);
  uVar4 = uRam0000000183280508 * -0x26df973cab5cb673 & 0xfffffffffffffe00;
  uRam00000001832805c8 = uRam00000001832805f0 ^ uVar4 ^ 0x79bc;
  uRam00000001832806b8 = (uRam00000001832806b8 ^ uVar4) + 0x79bc ^ 0x1dd0dbf67669dc66;
  uRam00000001832805b8 = (uRam00000001832805b8 * -0x3c447686abc21e53 ^ uRam00000001832806b8) + uVar4
  ;
  uRam00000001832806d0 = uRam00000001832805b8 ^ uRam00000001832806b8;
  uRam00000001832805e0 = 0x79bc;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14179,0x326)
      /* POOL[0x14179,0x326]: YSeRv | aSt | mldcd | aSk | PEgLw | ftPwi | sixtwo/fC | sLnpv | aSz | pltDm | method_5771 | bwT | (Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture; | oUOJc | hXcoz | mixin/accessors/ClientboundSetEntityMotionPacketAccessor | method_73085 | setMovement | aSx | (DDI)D | aSy | (Lnet/minecraft/class_2743;DDD)V | rFUaB | jqBCR | aSB | LKrNn | aSA | MZPLF | rcPcu | LCHwy | aSE | sixtwo/fD | ATgii | uboIQ | aSJ | MXvEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af7d474 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a13e28 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fC; aSC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18af81f30, runtime 6ffff2b91f30) =====

void FUN_18af81f30(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018af81f6c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a15990 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fC; aSD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18af82e20, runtime 6ffff2b92e20) =====

void FUN_18af82e20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af82e9d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a15ed0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fC; aSE (IJ)I (handler @ image 18af858e0, runtime 6ffff2b958e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af858e0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar5 = (~uRam00000001832809c0 + 0xdb5c2bc0ee3b54ca) *
          ((uRam0000000183280b48 ^ 0xc8a6d4dd15065ef) +
          (uRam0000000183280b48 & 0xc8a6d4dd15065ef) * 2);
  uVar5 = (uVar5 | uRam00000001832808d8) + (uVar5 & uRam00000001832808d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280a30 =
       func_0x00018af909f0((uVar5 | 0xd7d6468d3f6b3126) + (uVar5 & 0xd7d6468d3f6b3126));
  uVar5 = (uRam0000000183280a30 << 0x2b | uRam0000000183280a30 >> 0x15) ^ 0xc8a6d4d557246ca;
  uRam0000000183280c88 = (uRam0000000183280c88 ^ uVar5) + 0xdfde6fcdff7b56cb ^ 0x5e5ca6a80f99c98a;
  uRam0000000183280ae0 = (uRam0000000183280ae0 * 0x3bd8a693d2db43f9 ^ uRam0000000183280c88) + uVar5;
  uRam0000000183280740 = uRam0000000183280ae0 ^ uRam0000000183280c88;
  uRam0000000183280b48 = -0x202190320084a935;
  uRam0000000183280768 = func_0x00018af909f0(uRam00000001832808c8 ^ 0x43e8f783a1500194);
  uRam0000000183280b88 =
       (uRam0000000183280b88 ^ uRam0000000183280768 ^ 0x5309f0c40b213a84) + 0xacf60f3bf4dec57c ^
       0xeb69ac3f25f1c06a;
  uRam0000000183280c68 =
       (uRam0000000183280c68 * -0x1ff99b8c197b50cd ^ uRam0000000183280b88) +
       (uRam0000000183280768 ^ 0x5309f0c40b213a84);
  uRam0000000183280ac0 = uRam0000000183280c68 ^ uRam0000000183280b88;
  uRam0000000183280700 = 0xacf60f3bf4dec57c;
  uVar5 = (~uRam0000000183280a98 + 0x5309f0c40b213a85) *
          ((uRam0000000183280a48 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183280a48 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam0000000183280800) + (uVar5 & uRam0000000183280800);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832808a0 =
       func_0x00018af909f0((uVar5 | 0x5309f0c48f03665e) + (uVar5 & 0x5309f0c48f03665e));
  uVar5 = uRam00000001832808a0 << 0x2d | uRam00000001832808a0 >> 0x13;
  uRam0000000183280918 = uRam0000000183280bb0 ^ uVar5 ^ 0x5309f0c40b21ba83;
  uRam0000000183280bd8 = (uRam0000000183280bd8 ^ uVar5) + 0x5309f0c40b21ba83 ^ 0x436120ecf8ced1eb;
  uRam0000000183280b48 = (uRam0000000183280b48 * 0xfc88489761d4a6b ^ uRam0000000183280bd8) + uVar5;
  uRam0000000183280af8 = uRam0000000183280b48 ^ uRam0000000183280bd8;
  lRam0000000183280ba8 = 0x5309f0c40b21ba83;
  uVar5 = (~uRam00000001832809d0 + 0xacf60f3bf4dec57d) *
          ((uRam0000000183280a50 ^ 0x5309f0c48f0399a6) +
          (uRam0000000183280a50 & 0x5309f0c48f0399a6) * 2);
  uVar5 = (uVar5 | uRam0000000183280b88) + (uVar5 & uRam0000000183280b88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280be0 =
       func_0x00018af909f0((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = ~uRam0000000183280be0;
  uVar2 = uVar5 >> 1 | uVar5;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uRam0000000183280990 = uRam0000000183280990 ^ uVar5 ^ 0x7fff;
  uRam0000000183280960 = (uRam0000000183280960 ^ uVar5) + 0x7fff ^ 0xb004eb099ad6e5fe;
  uRam0000000183280ba0 = (uRam0000000183280ba0 * -0x6d748b01af348727 ^ uRam0000000183280960) + uVar5
  ;
  uRam0000000183280780 = uRam0000000183280ba0 ^ uRam0000000183280960;
  uRam0000000183280b80 = 0x7fff;
  uRam0000000183280768 = func_0x00018af909f0(uRam0000000183280c80 + 0xc7cb5afee4da7c28 ^ 0x93);
  uVar5 = uRam0000000183280768 << 4 | uRam0000000183280768 >> 0x3c;
  uRam0000000183280af0 = (uRam0000000183280af0 ^ uVar5) + 0xc622d5b77c59a100 ^ 0x9fa016db1772a754;
  uRam0000000183280a20 = (uRam0000000183280a20 * -0x22981183ab4f560b ^ uRam0000000183280af0) + uVar5
  ;
  uRam0000000183280a58 = uRam0000000183280a20 ^ uRam0000000183280af0;
  uRam00000001832807a0 = 0xc622d5b77c59a100;
  uVar5 = (~uRam0000000183280b60 + 0x39dd2a4883a65f01) *
          ((uRam0000000183280930 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183280930 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam0000000183280730) + (uVar5 & uRam0000000183280730);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280c80 =
       func_0x00018af909f0((uVar5 | 0x39dd2a48078403da) + (uVar5 & 0x39dd2a48078403da));
  uVar5 = uRam0000000183280c80 << 0x1f | uRam0000000183280c80 >> 0x21;
  uRam0000000183280728 = uRam0000000183280c80 ^ uVar5 ^ 0x39dd2a4883a6deff;
  uRam0000000183280c18 = (uRam0000000183280c18 ^ uVar5) + 0x39dd2a4883a6deff ^ 0xddff5c013a53e20e;
  uRam0000000183280c40 = (uRam0000000183280c40 * 0x36055ea70523f6ff ^ uRam0000000183280c18) + uVar5;
  uRam00000001832807d0 = uRam0000000183280c40 ^ uRam0000000183280c18;
  uRam0000000183280a88 = 0x39dd2a4883a6deff;
  uRam0000000183280c08 = func_0x00018af909f0(lRam0000000183280c00 + 0xdb53bb4b3aa8a46aU ^ 0xd4);
  uVar5 = uRam0000000183280c08 - (uRam0000000183280c08 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183280c08;
  uRam0000000183280ca8 = uRam0000000183280a90 ^ uVar5 ^ 0x7fff;
  uRam0000000183280cd8 = (uRam0000000183280cd8 ^ uVar5) + 0x7fff ^ 0x2cd91e0b8973ade0;
  uRam0000000183280828 = (uRam0000000183280828 * 0x4d6e230519a467a9 ^ uRam0000000183280cd8) + uVar5;
  uRam0000000183280c98 = uRam0000000183280828 ^ uRam0000000183280cd8;
  uRam0000000183280810 = 0x7fff;
  uVar5 = (uRam00000001832809e8 ^ _UNK_181a18c30) + uRam0000000183280bb0 + 0x84222325;
  uVar2 = (uRam0000000183280bb0 ^ _UNK_181a18c38) + uRam00000001832809e8 + 0xe854f94560250b28;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832809e8 ^ _UNK_181a18c30;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183280bb0 ^ _UNK_181a18c38;
  uRam00000001832807f0 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001832809e8 + 0xe854f94560250b28) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280bb0 + 0x84222325));
  uVar5 = uRam00000001832807f0 * 0x650a94ccf5ee7249 << 0x2a |
          uRam00000001832807f0 * 0x650a94ccf5ee7249 >> 0x16;
  uRam0000000183280910 = (uRam0000000183280910 ^ uVar5) + 0x17ab06ba9fdaf4d8 ^ 0x9d77a82eda40b8a;
  uRam0000000183280a30 = (uRam0000000183280a30 * -0x60a4d2c46aad2437 ^ uRam0000000183280910) + uVar5
  ;
  uRam0000000183280be8 = uRam0000000183280a30 ^ uRam0000000183280910;
  uRam0000000183280cd8 = 0x17ab06ba9fdaf4d8;
  uVar5 = (uRam0000000183280b68 ^ _UNK_181a18c40) + uRam00000001832807e8 + 0x84225cda;
  uVar2 = (uRam00000001832807e8 ^ _UNK_181a18c48) + uRam0000000183280b68 + 0xe854f94560250b28;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280b68 ^ _UNK_181a18c40;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832807e8 ^ _UNK_181a18c48;
  uRam0000000183280a18 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183280b68 + 0xe854f94560250b28) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832807e8 + 0x84225cda));
  uVar5 = uRam0000000183280a18 ^ 0x944db6cd256ef4d8;
  uRam0000000183280b18 = uRam0000000183280730 ^ uVar5 ^ 0xe854f94560258b27;
  uRam0000000183280988 = (uRam0000000183280988 ^ uVar5) + 0xe854f94560258b27 ^ 0x481f0dd9b74f78ce;
  uRam0000000183280cb0 = (uRam0000000183280cb0 * 0x519749126018d599 ^ uRam0000000183280988) + uVar5;
  uRam0000000183280bd0 = uRam0000000183280cb0 ^ uRam0000000183280988;
  uRam0000000183280c40 = 0xe854f94560258b27;
  uRam00000001832807b8 = func_0x00018af909f0(lRam0000000183280948 + 0x2aaca28b25de4b1aU ^ 0x6f);
  uVar2 = uRam00000001832807b8 ^ 0x91aaa7e8a08494e8;
  uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar2;
  uRam0000000183280c08 = uRam0000000183280ab8 ^ uVar2 ^ 0x7fff;
  uRam00000001832807a8 = (uRam00000001832807a8 ^ uVar2) + 0x7fff ^ 0xb61c3be0569592a4;
  uRam0000000183280b30 = (uRam0000000183280b30 * 0x19667275b1c20ff7 ^ uRam00000001832807a8) + uVar2;
  uRam0000000183280998 = uRam0000000183280b30 ^ uRam00000001832807a8;
  uRam0000000183280728 = 0x7fff;
  uVar5 = (~uRam00000001832807e8 + 0xee2b524b77c44e96) *
          ((uRam0000000183280770 ^ 0xdfde6fcd7b5975ee) +
          (uRam0000000183280770 & 0x5fde6fcd7b5975ee) * 2);
  uVar5 = (uVar5 | uRam0000000183280a88) + (uVar5 & uRam0000000183280a88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280bf8 =
       func_0x00018af909f0((uVar5 | 0x31f53d860c9d3b7b) + (uVar5 & 0x31f53d860c9d3b7b));
  uVar5 = uRam0000000183280bf8 & 0x1fffffffffff;
  uRam0000000183280c30 = uRam0000000183280cf8 ^ uVar5 ^ 0xce09c219773fa560;
  uRam0000000183280c20 = (uRam0000000183280c20 ^ uVar5) + 0xce09c219773fa560 ^ 0xd28ee138183899c4;
  uRam0000000183280858 = (uRam0000000183280858 * 0xbe0840986eed45d ^ uRam0000000183280c20) + uVar5;
  uRam00000001832808b8 = uRam0000000183280858 ^ uRam0000000183280c20;
  uRam00000001832809a0 = 0xce09c219773fa560;
  uVar5 = (uRam00000001832809c0 ^ _UNK_181a18c50) + uRam0000000183280a60 + 0xdfde6fcd7b5975ee;
  uVar2 = (uRam0000000183280a60 ^ _UNK_181a18c58) + uRam00000001832809c0 + 0xee2b524b77c44e95;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832809c0 ^ _UNK_181a18c50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183280a60 ^ _UNK_181a18c58;
  uRam00000001832809a8 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001832809c0 + 0xee2b524b77c44e95) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183280a60 + 0xdfde6fcd7b5975ee));
  uRam0000000183280a10 =
       (uRam0000000183280a10 ^ uRam00000001832809a8) + 0xce0a424977404681 ^ 0xfd2627bde87bbb2d;
  uRam00000001832809b8 =
       (uRam00000001832809b8 * -0x54ef071b779c30ff ^ uRam0000000183280a10) + uRam00000001832809a8;
  uRam0000000183280b98 = uRam00000001832809b8 ^ uRam0000000183280a10;
  uRam0000000183280c58 = 0xce0a424977404681;
  uVar5 = (~uRam0000000183280aa8 + 0x9c148492ee808d03) *
          ((uRam0000000183280c20 ^ 0x31f53d860c9d3b7b) +
          (uRam0000000183280c20 & 0x31f53d860c9d3b7b) * 2);
  uVar5 = (uVar5 | uRam0000000183280740) + (uVar5 & uRam0000000183280740);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832807b8 =
       func_0x00018af909f0((uVar5 | 0xade1b914e21db679) + (uVar5 & 0xade1b914e21db679));
  uVar5 = uRam00000001832807b8 ^ 0x9c148492ee808d02;
  uRam0000000183280ac0 = uRam0000000183280ac0 ^ uVar5 ^ 0xce09c219773fa560;
  uRam00000001832807d0 = (uRam00000001832807d0 ^ uVar5) + 0xce09c219773fa560 ^ 0xce02d49a7adae2c3;
  uRam0000000183280880 = (uRam0000000183280880 * 0x447dde01b266d877 ^ uRam00000001832807d0) + uVar5;
  uRam0000000183280cd0 = uRam0000000183280880 ^ uRam00000001832807d0;
  uRam0000000183280b60 = uRam0000000183280a30 ^ 0xce09c219773fa560;
  uRam0000000183280aa0 = 0xce09c219773fa560;
  uRam0000000183280b58 = func_0x00018af909f0(uRam0000000183280ba0 ^ 0xffe1007bdcffe1c3);
  uRam00000001832808e0 = uRam0000000183280b58 ^ 0xd769ca4b672b4160;
  uRam0000000183280cc8 = uRam0000000183280cc8 ^ uRam00000001832808e0 ^ 0x68ee8704f81413d2;
  uRam00000001832808a0 =
       (uRam00000001832808a0 * -0x2559e78403da3b6f ^ uRam0000000183280cc8) + uRam00000001832808e0;
  uRam0000000183280740 = uRam00000001832808a0 ^ uRam0000000183280cc8;
  uRam0000000183280c08 = 0;
  uVar5 = (uRam0000000183280750 ^ 0x84225cda) + uRam0000000183280918 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280750 ^ 0x84225cda;
  uVar2 = ((uRam0000000183280918 + uRam0000000183280750) * 0x2000 |
          uRam0000000183280918 + uRam0000000183280750 >> 0x33) ^ uRam0000000183280918;
  uRam0000000183280938 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - uRam0000000183280750 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280918 + 0x84225cda));
  uVar5 = (ulonglong)(~((int)uRam0000000183280938 * -0x388a363d) & 0x7fff);
  uRam0000000183280758 = uRam0000000183280988 ^ uVar5 ^ 0x7fff;
  uRam0000000183280858 = (uRam0000000183280858 ^ uVar5) + 0x7fff ^ 0xd0faed7eb6c1898e;
  uRam0000000183280ce8 = (uRam0000000183280ce8 * -0xb2992240c8d3ff5 ^ uRam0000000183280858) + uVar5;
  uRam0000000183280a40 = uRam0000000183280ce8 ^ uRam0000000183280858;
  uRam0000000183280748 = 0x7fff;
  uRam0000000183280890 = func_0x00018af909f0(uRam0000000183280bd0 ^ 0xee86217c0f909d03);
  uRam0000000183280a98 =
       (uRam0000000183280a98 ^ uRam0000000183280890 & 0x7fffffffff) + 0x202190320084a934 ^
       0x50d346f51c1a86a8;
  uRam0000000183280998 =
       (uRam0000000183280998 * -0x7bab0f5dc7b74b3d ^ uRam0000000183280a98) +
       (uRam0000000183280890 & 0x7fffffffff);
  uRam00000001832807b0 = uRam0000000183280998 ^ uRam0000000183280a98;
  uRam0000000183280868 = 0x202190320084a934;
  uRam0000000183280748 = func_0x00018af909f0(uRam0000000183280850 ^ 0xffcc007b45ffe10f);
  uVar5 = uRam0000000183280748 << 0x3e | uRam0000000183280748 >> 2;
  uRam0000000183280bf0 = uRam0000000183280790 ^ uVar5 ^ 0x7fff;
  uRam0000000183280cf8 = (uRam0000000183280cf8 ^ uVar5) + 0x7fff ^ 0x19c09c0c66fb9f6c;
  uRam0000000183280870 = (uRam0000000183280870 * 0x3d56835692ca9a63 ^ uRam0000000183280cf8) + uVar5;
  uRam0000000183280a70 = uRam0000000183280870 ^ uRam0000000183280cf8;
  param_4 = param_4 & 0x7fff;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = param_4 ^ 0x84222325;
  auVar6._8_4_ = param_3;
  auVar6._12_4_ = 0;
  uRam0000000183280840 = 0x7fff;
  auVar7 = pshufb(auVar6 ^ _UNK_181a18c60,_UNK_1800170c0);
  uVar2 = auVar7._8_8_ + auVar7._0_8_;
  uVar5 = uVar2 + lRam0000000183280ba8;
  if (auVar7._4_4_ < 0) {
    uVar5 = uRam0000000183280968 ^ uVar2;
  }
  uRam0000000183280b60 = func_0x00018af909f0(SUB161(auVar6 ^ _UNK_181a18c60,5) ^ uVar5);
  uVar2 = (param_4 | param_3) ^ uRam0000000183280b60;
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ~(ulonglong)
           ((uint)uVar2 ^
           (0x40 - (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38)) * 4) & (ulonglong)param_4;
  uVar3 = (ulonglong)(param_4 ^ param_3);
  uRam00000001832808d8 = (uRam00000001832808d8 ^ uVar5) + uVar3 ^ 0x449acbdb6ad179c2;
  uRam0000000183280bc8 = (uRam0000000183280bc8 * 0x5ad47985b89aae95 ^ uRam00000001832808d8) + uVar5;
  uRam0000000183280a58 = uRam0000000183280bc8 ^ uRam00000001832808d8;
  uVar5 = (~uRam0000000183280a58 + 0x83ba2749) *
          ((uRam00000001832808e0 ^ 0x1ac3b5e3) +
          (ulonglong)((uint)uRam00000001832808e0 & 0x1ac3b5e3) * 2);
  uVar5 = (uVar5 | uRam0000000183280880) + (uVar5 & uRam0000000183280880);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280818 = uVar3;
  uRam00000001832808e8 =
       func_0x00018af909f0((uVar5 | 0x997992ab) + (ulonglong)((uint)uVar5 & 0x997992ab));
  uRam0000000183280ab0 =
       (uRam0000000183280ab0 ^ uRam00000001832808e8 ^ 0x9ee196c6) + 0x1d5bb18e ^ 0xf8065a289cd27e25;
  uRam0000000183280748 =
       (uRam0000000183280748 * -0x71909b5d03a5b47 ^ uRam0000000183280ab0) +
       (uRam00000001832808e8 ^ 0x9ee196c6);
  uRam00000001832808d0 = uRam0000000183280748 ^ uRam0000000183280ab0;
  uRam0000000183280818 = 0x1d5bb18e;
  uVar5 = (uRam00000001832808a8 ^ _UNK_181a18c70) + uRam0000000183280928 + 0x84222325;
  uVar2 = (uRam0000000183280928 ^ _UNK_181a18c78) + uRam00000001832808a8 + 0xe704a5c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832808a8 ^ _UNK_181a18c70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183280928 ^ _UNK_181a18c78;
  uRam0000000183280b80 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001832808a8 + 0xe704a5c0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280928 + 0x84222325));
  uVar5 = ((uRam0000000183280b80 ^ 0xe704a5c0) & 0x3f) << 0x39 |
          (uRam0000000183280b80 ^ 0xe704a5c0) >> 7;
  uRam0000000183280ab8 = (uRam0000000183280ab8 ^ uVar5) - 0xe704a5c0 ^ 0x755df737ce176085;
  uRam0000000183280800 = (uRam0000000183280800 * -0x6765d8c525577cbb ^ uRam0000000183280ab8) + uVar5
  ;
  uRam00000001832808f0 = uRam0000000183280800 ^ uRam0000000183280ab8;
  uRam00000001832808f8 = 0x18fb5a40;
  uRam00000001832808e8 = func_0x00018af909f0(uRam0000000183280850 ^ 0xff5cffdfa2001925);
  uVar5 = (uRam00000001832808e8 & 0x7fffffffffffffff) -
          ((uRam00000001832808e8 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001832808e8 & 0x7fffffffffffffff;
  uRam0000000183280870 = uRam0000000183280a40 ^ uVar5 ^ 0xe704cf07;
  uRam00000001832807e0 = (uRam00000001832807e0 ^ uVar5) + 0xe704cf07 ^ 0x8debaadbc1a57c42;
  uRam0000000183280b88 = (uRam0000000183280b88 * -0x65eacaaf2c19fefd ^ uRam00000001832807e0) + uVar5
  ;
  uRam0000000183280b50 = uRam0000000183280b88 ^ uRam00000001832807e0;
  uRam0000000183280710 = 0xe704cf07;
  uVar5 = (uRam0000000183280ad0 ^ _UNK_181a18c80) + uRam00000001832809d0 + 0x84222325;
  uVar2 = (uRam00000001832809d0 ^ _UNK_181a18c88) + uRam0000000183280ad0 + 0x6d4dd2a8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280ad0 ^ _UNK_181a18c80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001832809d0 ^ _UNK_181a18c88;
  uRam00000001832807f8 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183280ad0 + 0x6d4dd2a8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832809d0 + 0x84222325));
  uRam0000000183280b60 =
       (uRam0000000183280b60 ^ uRam00000001832807f8 & 0xfffffffffffe0000) - 0x6d4dd2a8 ^
       0x34af5c11c8cfe00c;
  uRam00000001832808d0 =
       (uRam00000001832808d0 * 0x21c4190c3f85f12b ^ uRam0000000183280b60) +
       (uRam00000001832807f8 & 0xfffffffffffe0000);
  uRam0000000183280b08 = uRam00000001832808d0 ^ uRam0000000183280b60;
  uRam00000001832808a0 = 0x92b22d58;
  uVar5 = (~uRam00000001832808c8 + 0xc1bc181) *
          ((uRam0000000183280cc0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183280cc0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001832808f0) + (uVar5 & uRam00000001832808f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832807b0 =
       func_0x00018af909f0((uVar5 | 0x8839e2a5) + (ulonglong)((uint)uVar5 & 0x8839e2a5));
  uVar5 = uRam00000001832807b0 << 0x1f | uRam00000001832807b0 >> 0x21;
  uRam0000000183280bc8 = (uRam0000000183280bc8 ^ uVar5) - 0xc1bc180 ^ 0xfb5d056b760567fb;
  uRam0000000183280a80 = (uRam0000000183280a80 * -0x674cd75ce664f751 ^ uRam0000000183280bc8) + uVar5
  ;
  uRam0000000183280820 = uRam0000000183280a80 ^ uRam0000000183280bc8;
  uRam0000000183280b48 = 0xf3e43e80;
  uRam0000000183280cd0 = func_0x00018af909f0(uRam0000000183280a00 ^ 0xb900785dffc877);
  uVar5 = uRam0000000183280cd0 * 0x46c7fe97f9bcc5c9;
  uRam0000000183280c78 = uRam0000000183280800 ^ uVar5 ^ 0xc1beac7;
  uRam0000000183280a68 = (uRam0000000183280a68 ^ uVar5) + 0xc1beac7 ^ 0x995b835650cd4107;
  uRam00000001832807c8 = (uRam00000001832807c8 * -0x30fd331b33669809 ^ uRam0000000183280a68) + uVar5
  ;
  uRam0000000183280b10 = uRam00000001832807c8 ^ uRam0000000183280a68;
  uRam00000001832809b0 = uRam0000000183280940 ^ 0xc1beac7;
  uRam0000000183280af0 = 0xc1beac7;
  uVar5 = (uRam0000000183280798 ^ _UNK_181a18c90) + uRam0000000183280b30 + 0x8839c9e2;
  uVar2 = (uRam0000000183280b30 ^ _UNK_181a18c98) + uRam0000000183280798 + 0xf3e43e80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280798 ^ _UNK_181a18c90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183280b30 ^ _UNK_181a18c98;
  uRam0000000183280bb8 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183280798 + 0xf3e43e80) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280b30 + 0x8839c9e2));
  uVar5 = uRam0000000183280bb8 << 0x28 | (uRam0000000183280bb8 & 0x7fffffffffffffff) >> 0x18;
  uRam0000000183280b78 = uRam0000000183280838 ^ uVar5 ^ 0x100002947;
  uRam0000000183280958 = (uRam0000000183280958 ^ uVar5) + 0x100002947 ^ 0xf578c47b1a4484fa;
  uRam0000000183280ac0 = (uRam0000000183280ac0 * -0x5c436b7739089dc3 ^ uRam0000000183280958) + uVar5
  ;
  uRam0000000183280ac8 = uRam0000000183280ac0 ^ uRam0000000183280958;
  uRam0000000183280998 = 0x2947;
  uVar5 = (uRam0000000183280a00 ^ _UNK_181a18ca0) + uRam0000000183280878 + 0x739f7c51;
  uVar2 = (uRam0000000183280878 ^ _UNK_181a18ca8) + uRam0000000183280a00 + 0x1d5bb18e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280a00 ^ _UNK_181a18ca0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183280878 ^ _UNK_181a18ca8;
  uRam0000000183280770 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183280a00 + 0x1d5bb18e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280878 + 0x739f7c51));
  uVar5 = uRam0000000183280770 & 0x7ffffffffff ^ 0x1d5bb18e;
  uRam0000000183280cf0 = uRam0000000183280cf8 ^ uVar5 ^ 0x115191102;
  uRam0000000183280820 = (uRam0000000183280820 ^ uVar5) + 0x115191102 ^ 0x56c9155fa514e3d1;
  uRam0000000183280a48 = (uRam0000000183280a48 * -0x4a504bad66a85a07 ^ uRam0000000183280820) + uVar5
  ;
  uRam0000000183280ad8 = uRam0000000183280a48 ^ uRam0000000183280820;
  uRam0000000183280af0 = 0x15191102;
  uRam0000000183280848 = func_0x00018af909f0(uRam0000000183280940 + 0xffc2ffe2d30043ff ^ 0x69);
  uVar5 = uRam0000000183280848 * -0x724c435f73c00000 |
          uRam0000000183280848 * -0x5cd23dc9310d7dcf >> 0x2a;
  uRam00000001832807f0 = (uRam00000001832807f0 ^ uVar5) + 0xeae6eefa ^ 0x32d9934d801b7324;
  uRam0000000183280c38 = (uRam0000000183280c38 * -0x5798f47a6de03445 ^ uRam00000001832807f0) + uVar5
  ;
  uRam0000000183280b60 = uRam0000000183280c38 ^ uRam00000001832807f0;
  uRam0000000183280c58 = 0xeae6eefa;
  uVar5 = (~uRam0000000183280a80 + 0x1d5bb18f) *
          ((uRam0000000183280848 ^ 0x739f7c51) +
          (ulonglong)((uint)uRam0000000183280848 & 0x739f7c51) * 2);
  uVar5 = (uVar5 | uRam0000000183280908) + (uVar5 & uRam0000000183280908);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280a50 =
       func_0x00018af909f0((uVar5 | 0x6ec4cddf) + (ulonglong)((uint)uVar5 & 0x6ec4cddf));
  uRam0000000183280750 =
       (uRam0000000183280750 ^ uRam0000000183280a50 ^ 0xfffffffe) + 0x15191104 ^ 0xb9ebc2ebb0a78cf7;
  uRam0000000183280b00 =
       (uRam0000000183280b00 * -0x726dc944d1201771 ^ uRam0000000183280750) +
       (uRam0000000183280a50 ^ 0xfffffffe);
  uRam00000001832808c8 = uRam0000000183280b00 ^ uRam0000000183280750;
  uRam0000000183280a60 = 0x15191104;
  uVar5 = (uRam0000000183280b68 ^ _UNK_181a18cb0) + uRam0000000183280bd8 + 0x6ec4cddf;
  uVar2 = (uRam0000000183280bd8 ^ _UNK_181a18cb8) + uRam0000000183280b68 + 0x2a322208;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280b68 ^ _UNK_181a18cb0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183280bd8 ^ _UNK_181a18cb8;
  uRam00000001832808c8 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183280b68 + 0x2a322208) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280bd8 + 0x6ec4cddf));
  uVar5 = uRam00000001832808c8 ^ 0xeae6eefa;
  uRam0000000183280c60 = uRam0000000183280b40 ^ uVar5 ^ 0x115191102;
  uRam0000000183280780 = (uRam0000000183280780 ^ uVar5) + 0x115191102 ^ 0x3e27b39134c02e6b;
  uRam0000000183280a58 = (uRam0000000183280a58 * 0x167996c1885e6b8b ^ uRam0000000183280780) + uVar5;
  uRam0000000183280968 = uRam0000000183280a58 ^ uRam0000000183280780;
  uRam0000000183280c28 = 0x15191102;
  uVar5 = (uRam0000000183280a18 ^ _UNK_181a18cc0) + uRam0000000183280b58 + 0x913b3227;
  uVar2 = (uRam0000000183280b58 ^ _UNK_181a18cc8) + uRam0000000183280a18 + 0x15191102;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280a18 ^ _UNK_181a18cc0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183280b58 ^ _UNK_181a18cc8;
  uRam00000001832809f8 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183280a18 + 0x15191102) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280b58 + 0x913b3227));
  uRam0000000183280ce8 =
       (uRam00000001832809f8 << 0x1c | uRam00000001832809f8 >> 0x24) >> 0x18 |
       (uRam00000001832809f8 >> 0x24) << 0x28;
  uRam00000001832809e8 = uRam00000001832809e8 ^ uRam0000000183280ce8 ^ 0xcae2f3d277496c97;
  uRam00000001832807b8 =
       (uRam00000001832807b8 * 0xa289a0b13eddda7 ^ uRam00000001832809e8) + uRam0000000183280ce8;
  uRam0000000183280cf0 = uRam00000001832807b8 ^ uRam00000001832809e8;
  uRam0000000183280ba0 = 0;
  uVar5 = (uRam0000000183280918 ^ 0x84220a62) + uRam00000001832808c0 + 0x84220a62;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280918 ^ 0x84220a62;
  uVar2 = ((uRam00000001832808c0 + uRam0000000183280918) * 0x2000 |
          uRam00000001832808c0 + uRam0000000183280918 >> 0x33) ^ uRam00000001832808c0;
  uRam0000000183280950 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - uRam0000000183280918 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832808c0 + 0x84220a62));
  uRam0000000183280998 = uRam0000000183280bc8 ^ uRam0000000183280950 ^ 0x2947;
  uRam0000000183280848 = (uRam0000000183280848 ^ uRam0000000183280950) + 0x2947 ^ 0x33574ea203795d53
  ;
  uRam0000000183280a40 =
       (uRam0000000183280a40 * 0x7926e5b2e845fad5 ^ uRam0000000183280848) + uRam0000000183280950;
  uRam0000000183280a58 = uRam0000000183280a40 ^ uRam0000000183280848;
  uRam0000000183280ac0 = 0x2947;
  uVar5 = (~uRam0000000183280c58 + 0x100000000) *
          ((uRam0000000183280768 ^ 0x739f7c51) +
          (ulonglong)((uint)uRam0000000183280768 & 0x739f7c51) * 2);
  uVar5 = (uVar5 | uRam0000000183280a40) + (uVar5 & uRam0000000183280a40);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280788 =
       func_0x00018af909f0((uVar5 | 0x8c6083ae) + (ulonglong)((uint)uVar5 & 0x8c6083ae));
  uVar5 = uRam0000000183280788 ^ 0xffffffff;
  uVar5 = (uVar5 << 0x32 | uVar5 >> 0xe) >> 0x27 | (uVar5 >> 0xe) << 0x19;
  uRam00000001832807c0 = (uRam00000001832807c0 ^ uVar5) + 0x842a08b ^ 0x9a1aeaa6cb59435;
  uRam0000000183280838 = (uRam0000000183280838 * 0x42f1e118be74af43 ^ uRam00000001832807c0) + uVar5;
  uRam0000000183280980 = uRam0000000183280838 ^ uRam00000001832807c0;
  uRam0000000183280868 = 0x842a08b;
  uVar5 = (uRam0000000183280aa8 ^ _UNK_181a18cd0) + uRam0000000183280bf8 + 0x739f7c51;
  uVar2 = (uRam0000000183280bf8 ^ _UNK_181a18cd8) + uRam0000000183280aa8 + 0x842a08b;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280aa8 ^ _UNK_181a18cd0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183280bf8 ^ _UNK_181a18cd8;
  uRam00000001832807f8 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183280aa8 + 0x842a08b) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280bf8 + 0x739f7c51));
  uVar5 = uRam00000001832807f8 << 9 | uRam00000001832807f8 >> 0x37;
  uVar2 = uVar5 >> 1 | uVar5;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uRam00000001832809e0 = uRam00000001832809e0 ^ uVar5 ^ 0x867b757d1042bc5;
  uRam0000000183280968 = (uRam0000000183280968 * 0x501a25fb568a64d5 ^ uRam00000001832809e0) + uVar5;
  uRam0000000183280a08 = uRam0000000183280968 ^ uRam00000001832809e0;
  uRam0000000183280c50 = 0;
  uRam0000000183280708 = func_0x00018af909f0(uRam0000000183280cf0 + 0xfff5ff7ba1ffddff ^ 0x70);
  uRam0000000183280b20 = uRam0000000183280c20 ^ uRam0000000183280708 ^ 0x2947;
  uRam00000001832809e0 = (uRam00000001832809e0 ^ uRam0000000183280708) + 0x2947 ^ 0xf8c67d4ffdcb4956
  ;
  uRam0000000183280a98 =
       (uRam0000000183280a98 * 0x494781939e8fbbd3 ^ uRam00000001832809e0) + uRam0000000183280708;
  uRam0000000183280c40 = uRam0000000183280a98 ^ uRam00000001832809e0;
  uRam0000000183280978 = uRam0000000183280af0 ^ 0x2947;
  uRam0000000183280ad0 = 0x2947;
  uVar5 = (~uRam0000000183280870 + 0x73995855) *
          ((uRam0000000183280a60 ^ 0xf7bb7b71) +
          (ulonglong)((uint)uRam0000000183280a60 & 0xf7bb7b71) * 2);
  uVar5 = (uVar5 | uRam0000000183280b88) + (uVar5 & uRam0000000183280b88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280c98 =
       func_0x00018af909f0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam0000000183280a80 = uRam0000000183280a80 ^ uRam0000000183280c98 ^ 0x988458e5263bd230;
  uRam00000001832807f8 =
       (uRam00000001832807f8 * -0x6ae5d13589ecd639 ^ uRam0000000183280a80) + uRam0000000183280c98;
  uRam0000000183280a70 = uRam00000001832807f8 ^ uRam0000000183280a80;
  uRam0000000183280878 = 0;
  uVar5 = (uRam0000000183280a00 ^ 0x84220a62) + uRam0000000183280788 + 0x84220a62;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183280a00 ^ 0x84220a62;
  uVar2 = ((uRam0000000183280788 + uRam0000000183280a00) * 0x2000 |
          uRam0000000183280788 + uRam0000000183280a00 >> 0x33) ^ uRam0000000183280788;
  uRam0000000183280ac0 =
       func_0x00018af909f0((uVar2 << 0x1d | uVar2 >> 0x23) - uRam0000000183280a00 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183280788 + 0x84220a62));
  uVar5 = uRam0000000183280ac0 << 0x24 | (uRam0000000183280ac0 & 0x7fffffffffffffff) >> 0x1c;
  uRam0000000183280960 = uRam00000001832809e8 ^ uVar5 ^ 0x2947;
  uRam0000000183280a40 = (uRam0000000183280a40 ^ uVar5) + 0x2947 ^ 0xefa9cf2a613b9cd7;
  uRam0000000183280708 = (uRam0000000183280708 * 0x51aab75af6e934c5 ^ uRam0000000183280a40) + uVar5;
  uRam0000000183280710 = uRam0000000183280708 ^ uRam0000000183280a40;
  uRam00000001832808c0 = 0x2947;
  uVar5 = (~uRam0000000183280880 + 0x2948) *
          ((uVar3 ^ 0x84222325 ^ uRam00000001832809a0) +
          (ulonglong)((uint)uRam00000001832809a0 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam0000000183280b18) + (uVar5 & uRam0000000183280b18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183280b10 =
       func_0x00018af909f0((uVar3 ^ 0x84220a62 | uVar5) +
                           (ulonglong)((uint)(uVar3 ^ 0x84220a62) & (uint)uVar5));
  uVar5 = ((uVar3 | 0x2947) ^ uRam0000000183280b10) & 0xffffffffffff;
  lVar4 = uVar3 - ((param_4 ^ param_3) & 0x2947) * 2;
  uRam0000000183280b58 = (uRam0000000183280b58 ^ uVar5) + lVar4 + 0x2947 ^ 0xaeb5c8a0fd5ccf02;
  uRam0000000183280c10 = (uRam0000000183280c10 * 0x22539019fe896a4b ^ uRam0000000183280b58) + uVar5;
  uRam0000000183280818 = uRam0000000183280c10 ^ uRam0000000183280b58;
  uRam0000000183280a78 = lVar4 + 0x2947U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14179,0x326)
      /* POOL[0x14179,0x326]: YSeRv | aSt | mldcd | aSk | PEgLw | ftPwi | sixtwo/fC | sLnpv | aSz | pltDm | method_5771 | bwT | (Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture; | oUOJc | hXcoz | mixin/accessors/ClientboundSetEntityMotionPacketAccessor | method_73085 | setMovement | aSx | (DDI)D | aSy | (Lnet/minecraft/class_2743;DDD)V | rFUaB | jqBCR | aSB | LKrNn | aSA | MZPLF | rcPcu | LCHwy | aSE | sixtwo/fD | ATgii | uboIQ | aSJ | MXvEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af87f56 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a16dd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fC; aSF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18af90a80, runtime 6ffff2ba0a80) =====

void FUN_18af90a80(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018af90acb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a18df0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fC; aSG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18af35590, runtime 6ffff2b45590) =====

void FUN_18af35590(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af35619 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a0af48 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fC; aSw (Lsixtwo/gL$tk;)V (handler @ image 18af2bc60, runtime 6ffff2b3bc60) =====

void FUN_18af2bc60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14179,0x326)
      /* POOL[0x14179,0x326]: YSeRv | aSt | mldcd | aSk | PEgLw | ftPwi | sixtwo/fC | sLnpv | aSz | pltDm | method_5771 | bwT | (Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture; | oUOJc | hXcoz | mixin/accessors/ClientboundSetEntityMotionPacketAccessor | method_73085 | setMovement | aSx | (DDI)D | aSy | (Lnet/minecraft/class_2743;DDD)V | rFUaB | jqBCR | aSB | LKrNn | aSA | MZPLF | rcPcu | LCHwy | aSE | sixtwo/fD | ATgii | uboIQ | aSJ | MXvEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af2bd32 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a07a60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fC; aSx (DDI)D (handler @ image 18af349c0, runtime 6ffff2b449c0) =====

void FUN_18af349c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14179,0x326)
      /* POOL[0x14179,0x326]: YSeRv | aSt | mldcd | aSk | PEgLw | ftPwi | sixtwo/fC | sLnpv | aSz | pltDm | method_5771 | bwT | (Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture; | oUOJc | hXcoz | mixin/accessors/ClientboundSetEntityMotionPacketAccessor | method_73085 | setMovement | aSx | (DDI)D | aSy | (Lnet/minecraft/class_2743;DDD)V | rFUaB | jqBCR | aSB | LKrNn | aSA | MZPLF | rcPcu | LCHwy | aSE | sixtwo/fD | ATgii | uboIQ | aSJ | MXvEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af34a34 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a0aae0 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}




// ===== Lsixtwo/fC; aSy (Lnet/minecraft/class_2743;DDD)V (handler @ image 18af54690, runtime 6ffff2b64690) =====

void FUN_18af54690(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14240,0x327)
      /* POOL[0x14240,0x327]: /CompletableFuture; | oUOJc | hXcoz | mixin/accessors/ClientboundSetEntityMotionPacketAccessor | method_73085 | setMovement | aSx | (DDI)D | aSy | (Lnet/minecraft/class_2743;DDD)V | rFUaB | jqBCR | aSB | LKrNn | aSA | MZPLF | rcPcu | LCHwy | aSE | sixtwo/fD | ATgii | uboIQ | aSJ | MXvEw | Fdfgt | OcUPP | ByUPz | QIEUj | aSK | sixtwo/fE | jDLKd | aSP | aoNus | noHUW | mcfaS | JDHpD | vDVkv | zeyXv | aSQ | sixtwo/fF | foCtx | aSX | VImHE | Nlyhu | VtwAF | QcPEg | gBIsx | LQzFK | nWCXe | HWaak | vQdJp | MftPL | cdAZQ | dsIVg | aSZ | dsyYm | RObGI | VvKfB | KkvzL | aSY | pPuZs | YpcbG | hDdWr | vf */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018af54704 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a0ec30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fC; aSz (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18af552b0, runtime 6ffff2b652b0) =====

undefined8 FUN_18af552b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xaf2bd35 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af2bd35(void)

{
  FUN_190ddce00();
  (*_DAT_181a09d38)();
  return;
}


// ----- block @ rva 0xaf2f2ae -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af2f2ae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a091d8)();
  return;
}


// ----- block @ rva 0xaf2f79f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af2f79f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a08668)();
  return;
}


// ----- block @ rva 0xaf300a1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af300a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a09a28)();
  return;
}


// ----- block @ rva 0xaf309b7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af309b7(void)

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


// ----- block @ rva 0xaf318d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af318d3(void)

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


// ----- block @ rva 0xaf31ed3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af31ed3(void)

{
  (*_DAT_181a091a8)();
  return;
}


// ----- block @ rva 0xaf32eab -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af32eab(void)

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


// ----- block @ rva 0xaf32f9a -----

void FUN_18af32f9a(void)

{
  return;
}


// ----- block @ rva 0xaf3305e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af3305e(void)

{
  (*_DAT_181a09ef8)();
  return;
}


// ----- block @ rva 0xaf346cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af346cb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallDoubleMethodA /*0x1e0*/))();
  (*_DAT_181a096e8)();
  return;
}


// ----- block @ rva 0xaf34841 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af34841(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a09a28)();
  return;
}


// ----- block @ rva 0xaf34865 -----

void FUN_18af34865(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf34a37 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af34a37(void)

{
  FUN_190ddce00();
  (*_DAT_181a0ac08)();
  return;
}


// ----- block @ rva 0xaf34bd3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af34bd3(void)

{
  int in_stack_000000c0;
  
  switch(in_stack_000000c0 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf34c49 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af34c49(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a0aee8)();
  return;
}


// ----- block @ rva 0xaf34d58 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af34d58(void)

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


// ----- block @ rva 0xaf34d99 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af34d99(void)

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


// ----- block @ rva 0xaf34e2f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af34e2f(undefined8 param_1)

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


// ----- block @ rva 0xaf34e89 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af34e89(void)

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


// ----- block @ rva 0xaf3510d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af3510d(void)

{
  FUN_190dd9df0();
  (*_DAT_181a0ac48)();
  return;
}


// ----- block @ rva 0xaf3539e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af3539e(void)

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


// ----- block @ rva 0xaf35461 -----

void FUN_18af35461(void)

{
  return;
}


// ----- block @ rva 0xaf3547d -----

void FUN_18af3547d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf3561c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af3561c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181a0af80)();
  return;
}


// ----- block @ rva 0xaf3563b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af3563b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000160;
  
  uStack0000000000000060 = in_stack_00000160;
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


// ----- block @ rva 0xaf356e0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af356e0(void)

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


// ----- block @ rva 0xaf36993 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af36993(void)

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


// ----- block @ rva 0xaf36e76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af36e76(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a0b170)();
  return;
}


// ----- block @ rva 0xaf3706c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af3706c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_181a0b930)();
  return;
}


// ----- block @ rva 0xaf375b6 -----

void FUN_18af375b6(void)

{
  return;
}


// ----- block @ rva 0xaf37a24 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af37a24(void)

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


// ----- block @ rva 0xaf37ac9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af37ac9(void)

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


// ----- block @ rva 0xaf37b6c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af37b6c(void)

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


// ----- block @ rva 0xaf380f4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af380f4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a0b790)();
  return;
}


// ----- block @ rva 0xaf3815a -----

void FUN_18af3815a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf3838b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af383e1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af3838b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf3a8a4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af3a8a4(void)

{
  longlong in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf3aa08 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af3aa1f */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af3aa08(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf3ba71 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af3baba */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af3ba71(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf3c916 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af3c931 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af3c916(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf3c934 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af3c934(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewByteArray /*0x580*/))();
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


// ----- block @ rva 0xaf45f88 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af45f88(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf53b4c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af53b4c(void)

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


// ----- block @ rva 0xaf53e2a -----

void thunk_FUN_18af3a980(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xaf54417 -----

void FUN_18af54417(void)

{
  return;
}


// ----- block @ rva 0xaf54707 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af54707(void)

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


// ----- block @ rva 0xaf54738 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af54738(void)

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


// ----- block @ rva 0xaf5478a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af5478a(void)

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


// ----- block @ rva 0xaf548d7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af548d7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a0ee88)();
  return;
}


// ----- block @ rva 0xaf54deb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af54deb(void)

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


// ----- block @ rva 0xaf54e0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af54e0f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetDoubleField /*0x338*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a0f018)();
  return;
}


// ----- block @ rva 0xaf54f45 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af54f45(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetDoubleField /*0x338*/))();
  (*_DAT_181a0edc8)();
  return;
}


// ----- block @ rva 0xaf54f88 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af54f88(void)

{
  double unaff_XMM6_Qa;
  double dStack0000000000000068;
  double in_stack_00000128;
  
  dStack0000000000000068 = unaff_XMM6_Qa + in_stack_00000128;
  FUN_190ddfc90();
  (*_DAT_181a0ef88)();
  return;
}


// ----- block @ rva 0xaf5513f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af5513f(void)

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


// ----- block @ rva 0xaf551d2 -----

void FUN_18af551d2(void)

{
  return;
}


// ----- block @ rva 0xaf551f3 -----

void FUN_18af551f3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf553e6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af5541c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af553e6(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf55439 -----

void FUN_18af55439(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0x30) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x00018af55472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a0f700 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xaf555e0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af555e0(void)

{
  longlong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  uint unaff_R14D;
  ulonglong unaff_R15;
  ulonglong uVar3;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  
  _DAT_18327f3f0 = func_0x00018af7ae20(_DAT_18327f338 + 0x1f007c970021ffU ^ 0x5e);
  _DAT_18327f310 = (_DAT_18327f310 ^ _DAT_18327f3f0 ^ 0xaf) + 0xaf ^ 0x98984ecb840fb45c;
  _DAT_18327f308 = (_DAT_18327f308 * 0x76360b6264fa7b23 ^ _DAT_18327f310) + (_DAT_18327f3f0 ^ 0xaf);
  _DAT_18327f4a8 = _DAT_18327f308 ^ _DAT_18327f310;
  _DAT_18327f490 = 0xaf;
  uVar2 = (~_DAT_18327f488 + 0xf6) *
          ((_DAT_18327f408 ^ 0x84222325) + (ulonglong)((uint)_DAT_18327f408 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18327f3f8) + (uVar2 & _DAT_18327f3f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18327f3d0 = func_0x00018af7ae20((uVar2 | 0x842223d0) + (ulonglong)((uint)uVar2 & 0x842223d0))
  ;
  uVar2 = ((_DAT_18327f3d0 << 0xc | _DAT_18327f3d0 >> 0x34) >> 8 | (_DAT_18327f3d0 >> 0x34) << 0x38)
          ^ 0xf5;
  _DAT_18327f368 = (_DAT_18327f368 ^ uVar2) - 0xf5 ^ 0xfe383c028ac67fd8;
  _DAT_18327f388 = (_DAT_18327f388 * -0x1c7b1bd128952373 ^ _DAT_18327f368) + uVar2;
  _DAT_18327f4e0 = _DAT_18327f388 ^ _DAT_18327f368;
  _DAT_18327f428 = 0xb;
  uVar2 = (_DAT_18327f360 ^ unaff_XMM6_Qa) + _DAT_18327f408 + 0x84222300;
  uVar3 = (_DAT_18327f408 ^ unaff_XMM6_Qb) + _DAT_18327f360 + 0xb;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f360 ^ unaff_XMM6_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18327f408 ^ unaff_XMM6_Qb;
  _DAT_18327f398 =
       func_0x00018af7ae20((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18327f360 + 0xb) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f408 + 0x84222300));
  uVar2 = _DAT_18327f398 ^ 0x2f;
  _DAT_18327f350 = _DAT_18327f400 ^ uVar2 ^ 0x30;
  _DAT_18327f3c8 = (_DAT_18327f3c8 ^ uVar2) + 0x30 ^ 0xf2abc4ba7ccaa566;
  _DAT_18327f498 = (_DAT_18327f498 * 0x32b5f6fc9d36d9e9 ^ _DAT_18327f3c8) + uVar2;
  _DAT_18327f4d0 = _DAT_18327f498 ^ _DAT_18327f3c8;
  _DAT_18327f4a8 = 0x30;
  uVar2 = (_DAT_18327f3d8 ^ unaff_XMM7_Qa) + _DAT_18327f3d0 + unaff_RDI;
  uVar3 = (_DAT_18327f3d0 ^ unaff_XMM7_Qb) + _DAT_18327f3d8 + 0xb5;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f3d8 ^ unaff_XMM7_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18327f3d0 ^ unaff_XMM7_Qb;
  _DAT_18327f4f8 =
       func_0x00018af7ae20((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18327f3d8 + 0xb5) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f3d0 + unaff_RDI));
  uVar2 = (_DAT_18327f4f8 << 0x31 | _DAT_18327f4f8 >> 0xf) ^ 0xb5;
  _DAT_18327f360 = _DAT_18327f360 ^ uVar2 ^ 0xe5;
  _DAT_18327f358 = (_DAT_18327f358 ^ uVar2) + 0xe5 ^ 0xeac747d7f98c3eac;
  _DAT_18327f4a8 = (_DAT_18327f4a8 * -0x3f35d8bcdce5d85f ^ _DAT_18327f358) + uVar2;
  _DAT_18327f490 = _DAT_18327f4a8 ^ _DAT_18327f358;
  _DAT_18327f4b0 = 0xe5;
  _DAT_18327f400 = func_0x00018af7ae20(_DAT_18327f348 ^ 0x20ff847affe17d);
  uVar2 = _DAT_18327f400 ^ 10;
  _DAT_18327f3a0 = _DAT_18327f380 ^ uVar2 ^ 0x130;
  _DAT_18327f4e8 = (_DAT_18327f4e8 ^ uVar2) + 0x130 ^ 0x9ba3920f0534149;
  _DAT_18327f458 = (_DAT_18327f458 * -0x4b00bf83b72292b3 ^ _DAT_18327f4e8) + uVar2;
  _DAT_18327f3b8 = _DAT_18327f458 ^ _DAT_18327f4e8;
  _DAT_18327f480 = 0x30;
  uVar2 = (~_DAT_18327f4e8 + 8) *
          ((_DAT_18327f388 ^ unaff_RDI) + (ulonglong)((uint)_DAT_18327f388 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_18327f3e8) + (uVar2 & _DAT_18327f3e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18327f338 = func_0x00018af7ae20((uVar2 | 0x84222312) + (ulonglong)((uint)uVar2 & 0x84222312))
  ;
  uVar2 = _DAT_18327f338 * -0x2b784e1277a923d;
  _DAT_18327f340 = _DAT_18327f360 ^ uVar2 ^ 0x37;
  _DAT_18327f4e8 = (_DAT_18327f4e8 ^ uVar2) + 0x37 ^ 0x2b8ad9e63de5a34;
  _DAT_18327f410 = (_DAT_18327f410 * 0x6d3089231c62f87b ^ _DAT_18327f4e8) + uVar2;
  _DAT_18327f4c0 = _DAT_18327f410 ^ _DAT_18327f4e8;
  _DAT_18327f428 = 0x37;
  uVar2 = (_DAT_18327f348 ^ unaff_XMM8_Qa) + _DAT_18327f340 + unaff_R15;
  uVar3 = (_DAT_18327f340 ^ unaff_XMM8_Qb) + _DAT_18327f348 + 0x3f;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f348 ^ unaff_XMM8_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18327f340 ^ unaff_XMM8_Qb;
  _DAT_18327f460 =
       func_0x00018af7ae20((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18327f348 + 0x3f) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f340 + unaff_R15));
  uVar2 = _DAT_18327f460 ^ 0x2b11;
  _DAT_18327f3e8 = _DAT_18327f458 ^ uVar2 ^ 0xee;
  _DAT_18327f350 = (_DAT_18327f350 ^ uVar2) + 0xee ^ 0x54b7b742b2c1f100;
  _DAT_18327f400 = (_DAT_18327f400 * -0x7086c1ae65ad46e9 ^ _DAT_18327f350) + uVar2;
  _DAT_18327f300 = _DAT_18327f400 ^ _DAT_18327f350;
  _DAT_18327f3a0 = 0xee;
  _DAT_18327f370 = func_0x00018af7ae20(_DAT_18327f428 ^ 0x1f007b96ffe132);
  uVar2 = _DAT_18327f370 & 0xffffffffffe00000;
  _DAT_18327f4b8 = _DAT_18327f360 ^ uVar2 ^ 0xee;
  _DAT_18327f458 = (_DAT_18327f458 ^ uVar2) + 0xee ^ 0x564e39f0a75694ca;
  _DAT_18327f430 = (_DAT_18327f430 * -0x2752ebd71afa9ec9 ^ _DAT_18327f458) + uVar2;
  _DAT_18327f3c8 = _DAT_18327f430 ^ _DAT_18327f458;
  _DAT_18327f4d8 = 0xee;
  _DAT_18327f478 = func_0x00018af7ae20(_DAT_18327f4d0 ^ 0x21007c24ffdd25);
  _DAT_18327f428 = _DAT_18327f478 ^ 0xdd44;
  _DAT_18327f3f0 = _DAT_18327f3f0 ^ _DAT_18327f428 ^ 0xa88500c3f7503111;
  _DAT_18327f450 = (_DAT_18327f450 * -0x383463c4355890d1 ^ _DAT_18327f3f0) + _DAT_18327f428;
  _DAT_18327f3b8 = _DAT_18327f450 ^ _DAT_18327f3f0;
  _DAT_18327f498 = 0;
  _DAT_18327f3a8 = func_0x00018af7ae20(_DAT_18327f368 + 0xffe300840b0021ff ^ 0xa1);
  uVar2 = _DAT_18327f3a8 & 0xf80000000;
  _DAT_18327f308 = _DAT_18327f4c0 ^ uVar2 ^ 0x30;
  _DAT_18327f3f8 = (_DAT_18327f3f8 ^ uVar2) + 0x30 ^ 0x11bfc631335284df;
  _DAT_18327f440 = (_DAT_18327f440 * 0x9d68d1fd9b2543 ^ _DAT_18327f3f8) + uVar2;
  _DAT_18327f3a0 = _DAT_18327f440 ^ _DAT_18327f3f8;
  _DAT_18327f450 = 0x30;
  _DAT_18327f370 = func_0x00018af7ae20(0x23008412ffde97);
  uVar2 = _DAT_18327f370 - (_DAT_18327f370 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18327f370;
  _DAT_18327f358 = (_DAT_18327f358 ^ uVar2) + 0x50 ^ 0xd7d82ddfb0dcc618;
  _DAT_18327f4e8 = (_DAT_18327f4e8 * -0x4d04ac5b61ca9437 ^ _DAT_18327f358) + uVar2;
  _DAT_18327f398 = _DAT_18327f4e8 ^ _DAT_18327f358;
  _DAT_18327f300 = 0x50;
  uVar2 = (~_DAT_18327f320 + 0x51) *
          ((_DAT_18327f408 ^ unaff_R15) + (ulonglong)((uint)_DAT_18327f408 & 0x8422238a) * 2);
  uVar2 = (uVar2 | _DAT_18327f4c0) + (uVar2 & _DAT_18327f4c0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18327f4a0 = func_0x00018af7ae20((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  uVar2 = _DAT_18327f4a0 * -0x59dd6b8d9792845f ^ 0x50;
  _DAT_18327f470 = _DAT_18327f470 ^ uVar2 ^ 0x6821613cd2cd17de;
  _DAT_18327f400 = (_DAT_18327f400 * -0x3424c6ca3a1a7993 ^ _DAT_18327f470) + uVar2;
  _DAT_18327f3c0 = _DAT_18327f400 ^ _DAT_18327f470;
  _DAT_18327f3d8 = 0;
  uVar2 = ((_DAT_18327f460 ^ unaff_RDI) + (ulonglong)((uint)_DAT_18327f460 & 0x84222315) * 2) *
          -_DAT_18327f4c0;
  uVar2 = (uVar2 | _DAT_18327f4a8) + (uVar2 & _DAT_18327f4a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18327f3a8 = func_0x00018af7ae20((uVar2 | unaff_RDI) + (ulonglong)((uint)uVar2 & 0x84222315));
  uVar2 = (_DAT_18327f3a8 ^ 0x30) << 0x25 | _DAT_18327f3a8 >> 0x1b;
  _DAT_18327f4e0 = _DAT_18327f400 ^ uVar2 ^ 0x30;
  _DAT_18327f450 = (_DAT_18327f450 ^ uVar2) + 0x30 ^ 0x6c6ede9eb267d9dd;
  _DAT_18327f4e8 = (_DAT_18327f4e8 * 0xc1a908cbecbf46f ^ _DAT_18327f450) + uVar2;
  _DAT_18327f498 = _DAT_18327f4e8 ^ _DAT_18327f450;
  _DAT_18327f428 = 0x30;
  lVar1 = func_0x00018af7ae20(_DAT_18327f360 ^ 0xffdcff7beaffdd94);
  _DAT_18327f320 = (_DAT_18327f320 ^ lVar1 * 0x7fc7763c588c55f3) + 0x30 ^ 0x1a32359b049f0259;
  _DAT_18327f460 =
       (_DAT_18327f460 * 0x11ee4c0caeb74695 ^ _DAT_18327f320) + lVar1 * 0x7fc7763c588c55f3;
  _DAT_18327f3a0 = _DAT_18327f460 ^ _DAT_18327f320;
  _DAT_18327f418 = 0x30;
  *(byte *)(unaff_RBP + -0x51 + in_RAX) =
       (char)unaff_R14D + (char)(uint)((ulonglong)unaff_R14D * unaff_RSI >> 0x23) * -10 | 0x30;
  switch(unaff_R14D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf5623e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af5623e(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (~_DAT_18327f320 + 0x7c149f787136b044) *
          ((_DAT_18327f408 ^ 0xb6858d146a4d9430) + (_DAT_18327f408 & 0xb6858d146a4d9430) * 2);
  uVar1 = (uVar1 | _DAT_18327f320) + (uVar1 & _DAT_18327f320);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f3e8 = func_0x00018af7ae20((uVar1 | 0xca91126c1b7b2473) + (uVar1 & 0xca91126c1b7b2473));
  uVar1 = _DAT_18327f3e8 >> 1 | _DAT_18327f3e8;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_18327f3e8;
  _DAT_18327f470 = (_DAT_18327f470 ^ uVar1) + 0xca91126c9f590756 ^ 0x4b00a530c409549c;
  _DAT_18327f380 = (_DAT_18327f380 * 0x1f6a839fae2a6859 ^ _DAT_18327f470) + uVar1;
  _DAT_18327f300 = _DAT_18327f380 ^ _DAT_18327f470;
  _DAT_18327f4d0 = 0xca91126c9f590756;
  uVar1 = (~_DAT_18327f400 + 0x9839ab3ad89d6001) *
          ((_DAT_18327f4c0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18327f4c0 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_18327f408) + (uVar1 & _DAT_18327f408);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f4b8 = func_0x00018af7ae20((uVar1 | 0x9839ab3a5cbf4325) + (uVar1 & 0x9839ab3a5cbf4325));
  _DAT_18327f3a8 =
       (_DAT_18327f3a8 ^ _DAT_18327f4b8 ^ 0x9839ab3ad89d6000) + 0x67c654c52762a000 ^
       0x354cc4e7071ef9bb;
  _DAT_18327f428 =
       (_DAT_18327f428 * 0x335dc11ead96f3b9 ^ _DAT_18327f3a8) +
       (_DAT_18327f4b8 ^ 0x9839ab3ad89d6000);
  _DAT_18327f3e8 = _DAT_18327f428 ^ _DAT_18327f3a8;
  _DAT_18327f4c0 = 0x67c654c52762a000;
  uVar1 = (_DAT_18327f3d8 ^ _DAT_181a10540) + (_DAT_18327f328 - 0x84222325);
  uVar2 = (_DAT_18327f328 ^ _UNK_181a10548) + _DAT_18327f3d8 + 0x9839ab3ad89d6000;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f3d8 ^ _DAT_181a10540;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f328 ^ _UNK_181a10548;
  _DAT_18327f388 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f3d8 + 0x9839ab3ad89d6000) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18327f328 - 0x84222325));
  _DAT_18327f4f8 = _DAT_18327f438 ^ _DAT_18327f388 ^ 0x9839ab3ad89d5ffe;
  _DAT_18327f348 = (_DAT_18327f348 ^ _DAT_18327f388) + 0x9839ab3ad89d5ffe ^ 0x32febcba359c23a8;
  _DAT_18327f4a0 = (_DAT_18327f4a0 * 0x3881ac8d64b870f3 ^ _DAT_18327f348) + _DAT_18327f388;
  _DAT_18327f3f0 = _DAT_18327f4a0 ^ _DAT_18327f348;
  _DAT_18327f398 = 0x9839ab3ad89d5ffe;
  uVar1 = (_DAT_18327f430 ^ _DAT_181a10550) + _DAT_18327f338 + 0x9839ab3a5cbf7cdb;
  uVar2 = (_DAT_18327f338 ^ _UNK_181a10558) + _DAT_18327f430 + 0x67c654c52762a000;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f430 ^ _DAT_181a10550;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f338 ^ _UNK_181a10558;
  _DAT_18327f430 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f430 + 0x67c654c52762a000) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18327f338 + 0x9839ab3a5cbf7cdb));
  uVar1 = _DAT_18327f430 >> 1 | _DAT_18327f430;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = _DAT_18327f430 ^ 0x9839ab3ad89d5ffe ^
          0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  _DAT_18327f318 = (_DAT_18327f480 ^ uVar1 ^ 0xfffffffffffffffe ^ uVar1) - 2 ^ 0x6cdbb805e4d06152;
  _DAT_18327f448 = (_DAT_18327f448 * -0x245f2b2425f6901f ^ _DAT_18327f318) + uVar1;
  _DAT_18327f400 = _DAT_18327f448 ^ _DAT_18327f318;
  _DAT_18327f4f0 = 0xfffffffffffffffe;
  uVar1 = (~_DAT_18327f448 + 0x63d4e5c5141eefd) *
          ((_DAT_18327f450 ^ 0x84222325) + (ulonglong)((uint)_DAT_18327f450 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_18327f450) + (uVar1 & _DAT_18327f450);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f390 = func_0x00018af7ae20((uVar1 | 0x63d4e5cd563cdd9) + (uVar1 & 0x63d4e5cd563cdd9));
  _DAT_18327f360 =
       (_DAT_18327f360 ^ _DAT_18327f390 & 0x3fffffffffff) + 0xf9c2b1a3aebe1104 ^ 0xb62045afe28a0354;
  _DAT_18327f498 =
       (_DAT_18327f498 * -0x403b53bea4f6a873 ^ _DAT_18327f360) + (_DAT_18327f390 & 0x3fffffffffff);
  _DAT_18327f4f8 = _DAT_18327f498 ^ _DAT_18327f360;
  _DAT_18327f470 = 0xf9c2b1a3aebe1104;
  _DAT_18327f3d8 = func_0x00018af7ae20(_DAT_18327f3b8 ^ 0xb9a43afac891a5d0);
  uVar1 = _DAT_18327f3d8 & 0x7fffffffffffffff;
  _DAT_18327f3a0 = _DAT_18327f4f0 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_18327f468 = (_DAT_18327f468 ^ uVar1) - 2 ^ 0xfc22a7302fe84137;
  _DAT_18327f3c8 = (_DAT_18327f3c8 * -0x17c86df9f149798b ^ _DAT_18327f468) + uVar1;
  _DAT_18327f430 = 0xfffffffffffffffe;
  _DAT_18327f4c8 = func_0x00018af7ae20(_DAT_18327f3a0 + 0xc03c22b422cf1858 ^ 0xc4);
  uVar1 = _DAT_18327f3f8 << 0x36 | _DAT_18327f3f8 >> 10;
  _DAT_18327f330 = (_DAT_18327f330 ^ uVar1) + 0x6dace3f37349900 ^ 0x299590daae789138;
  _DAT_18327f490 = (_DAT_18327f490 * -0x4f9c16011f2f5f39 ^ _DAT_18327f330) + uVar1;
  _DAT_18327f480 = _DAT_18327f490 ^ _DAT_18327f330;
  _DAT_18327f388 = 0x6dace3f37349900;
  _DAT_18327f490 = func_0x00018af7ae20(_DAT_18327f400 + 0x4b556af44b1e9f9 ^ 0x51);
  uVar1 = _DAT_18327f490 - (_DAT_18327f490 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_18327f490;
  _DAT_18327f3b8 = _DAT_18327f400 ^ uVar1 ^ 0xf92531c0c8cb66fe;
  _DAT_18327f458 = (_DAT_18327f458 ^ uVar1) + 0xf92531c0c8cb66fe ^ 0x4c6cbe73725b4f03;
  _DAT_18327f368 = (_DAT_18327f368 * 0x509bf0e23ee00471 ^ _DAT_18327f458) + uVar1;
  _DAT_18327f4f0 = _DAT_18327f368 ^ _DAT_18327f458;
  _DAT_18327f308 = 0xf92531c0c8cb66fe;
  uVar1 = (~_DAT_18327f388 + 0x6dace3f37349901) *
          ((_DAT_18327f358 ^ 0xf92531c04ce945db) + (_DAT_18327f358 & 0x792531c04ce945db) * 2);
  uVar1 = (uVar1 | _DAT_18327f3a8) + (uVar1 & _DAT_18327f3a8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f3c8 = func_0x00018af7ae20((uVar1 | 0xffffffff7bdddcdb) + (uVar1 & 0xffffffff7bdddcdb));
  uVar1 = _DAT_18327f3c8 << 0x18 | _DAT_18327f3c8 >> 0x28;
  _DAT_18327f448 = _DAT_18327f368 ^ uVar1 ^ 0xfffffffffffffffe;
  _DAT_18327f3d0 = (_DAT_18327f3d0 ^ uVar1) - 2 ^ 0x6ed12c758aeea987;
  _DAT_18327f388 = (_DAT_18327f388 * -0x1f9f8ac3131095c1 ^ _DAT_18327f3d0) + uVar1;
  _DAT_18327f338 = _DAT_18327f388 ^ _DAT_18327f3d0;
  _DAT_18327f490 = 0xfffffffffffffffe;
  uVar1 = (~_DAT_18327f380 + 0xca91126c9f590757) *
          ((_DAT_18327f370 ^ 0xb2b3fbbf61c9d8ce) + (_DAT_18327f370 & 0x32b3fbbf61c9d8ce) * 2);
  uVar1 = (uVar1 | 0xfffffffffffffffe) + (uVar1 & 0xfffffffffffffffe);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x00018af7ae20((uVar1 | 0x7822e9d3fe90df98) + (uVar1 & 0x7822e9d3fe90df98));
  _DAT_18327f410 = _DAT_18327f430 ^ uVar1 ^ 0x7d450e2c85450341;
  _DAT_18327f3b0 = 0x790dc18bd9544722;
  _DAT_18327f438 = (_DAT_18327f438 * 0x65ca6404b413093 ^ 0x790dc18bd9544722) + uVar1;
  _DAT_18327f3c0 = _DAT_18327f438 ^ 0x790dc18bd9544722;
  _DAT_18327f388 = 0x7d450e2c85450341;
  uVar1 = (~_DAT_18327f430 + 0xca91126c9f590757) *
          ((_DAT_18327f370 ^ 0xb2b3fbbf61c9d8ce) + (_DAT_18327f370 & 0x32b3fbbf61c9d8ce) * 2);
  uVar1 = (uVar1 | _DAT_18327f468) + (uVar1 & _DAT_18327f468);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f4c8 = func_0x00018af7ae20((uVar1 | 0x7822e9d3fe90df98) + (uVar1 & 0x7822e9d3fe90df98));
  uVar1 = _DAT_18327f4c8 - (_DAT_18327f4c8 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = _DAT_18327f4c8 ^ 0xb2b3fbbfe5ebfbeb ^
          ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  _DAT_18327f3d8 = (_DAT_18327f3d8 ^ uVar1) + 0x7822e9d37ab2fcbd ^ 0x235369fcb74d38d6;
  _DAT_18327f318 = (_DAT_18327f318 * 0x16d98f715495feaf ^ _DAT_18327f3d8) + uVar1;
  _DAT_18327f348 = _DAT_18327f318 ^ _DAT_18327f3d8;
  _DAT_18327f430 = 0x7822e9d37ab2fcbd;
  uVar1 = (~_DAT_18327f348 + 0xca91126c9f590757) *
          ((_DAT_18327f4a8 ^ 0xb2b3fbbf61c9d8ce) + (_DAT_18327f4a8 & 0x32b3fbbf61c9d8ce) * 2);
  uVar1 = (uVar1 | _DAT_18327f4c8) + (uVar1 & _DAT_18327f4c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f3c0 = func_0x00018af7ae20((uVar1 | 0x7822e9d3fe90df98) + (uVar1 & 0x7822e9d3fe90df98));
  uVar1 = _DAT_18327f3c0 - (_DAT_18327f3c0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18327f3c0;
  _DAT_18327f450 = (_DAT_18327f450 ^ uVar1) + 0x8291122c85490342 ^ 0xc66a7862a0f0c918;
  _DAT_18327f300 = (_DAT_18327f300 * -0x29d69565a16f7f05 ^ _DAT_18327f450) + uVar1;
  _DAT_18327f390 = _DAT_18327f300 ^ _DAT_18327f450;
  _DAT_18327f398 = 0x8291122c85490342;
  uVar1 = (~_DAT_18327f4b0 + 0x52224590a920685) *
          ((_DAT_18327f478 ^ 0x7822e9d3fe90df98) + (_DAT_18327f478 & 0x7822e9d3fe90df98) * 2);
  uVar1 = (uVar1 | _DAT_18327f440) + (uVar1 & _DAT_18327f440);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f3d0 = func_0x00018af7ae20((uVar1 | 0x7d00cd8af402d91c) + (uVar1 & 0x7d00cd8af402d91c));
  uVar1 = (_DAT_18327f3d0 & 0x1fffffffffff) << 0x12 | _DAT_18327f3d0 >> 0x2e;
  _DAT_18327f478 = _DAT_18327f428 ^ uVar1 ^ 0x7d450e2c85450341;
  _DAT_18327f420 = (_DAT_18327f420 ^ uVar1) + 0x7d450e2c85450341 ^ 0x20f28210d498884c;
  _DAT_18327f4b8 = (_DAT_18327f4b8 * -0x3a99556482160d55 ^ _DAT_18327f420) + uVar1;
  _DAT_18327f3a8 = _DAT_18327f4b8 ^ _DAT_18327f420;
  _DAT_18327f3f8 = 0x7d450e2c85450341;
  _DAT_18327f3a0 = func_0x00018af7ae20(_DAT_18327f370 ^ 0xffdeff83e5001d3b);
  _DAT_18327f300 = _DAT_18327f3a0 * 0x50137b6406a93c15;
  _DAT_18327f3b8 = _DAT_18327f3b8 ^ _DAT_18327f300 ^ 0xa34bf709656a8896;
  _DAT_18327f4e8 = (_DAT_18327f4e8 * 0x7dcc033a6324ae55 ^ _DAT_18327f3b8) + _DAT_18327f300;
  _DAT_18327f490 = _DAT_18327f4e8 ^ _DAT_18327f3b8;
  _DAT_18327f438 = 0;
  uVar1 = (_DAT_18327f448 ^ _DAT_181a10560) + _DAT_18327f370 + 0xb2b3fbbf61c9d8ce;
  uVar2 = (_DAT_18327f370 ^ _UNK_181a10568) + _DAT_18327f448 + 0x4d4c04401a140414;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f448 ^ _DAT_181a10560;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f370 ^ _UNK_181a10568;
  _DAT_18327f428 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f448 + 0x4d4c04401a140414) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18327f370 + 0xb2b3fbbf61c9d8ce));
  _DAT_18327f488 = _DAT_18327f488 ^ _DAT_18327f428 ^ 0x841b10d9872c021e;
  _DAT_18327f398 =
       (_DAT_18327f320 * -0x66224981d4f6ca8f ^ _DAT_18327f488) + _DAT_18327f428 ^ _DAT_18327f488;
  _DAT_18327f320 = 0;
  uVar1 = ((_DAT_18327f448 ^ 0xffffffff7bdddcdb) + (_DAT_18327f448 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_18327f4b8;
  uVar1 = (uVar1 | _DAT_18327f318) + (uVar1 & _DAT_18327f318);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f4e0 = func_0x00018af7ae20((uVar1 | 0xffffffff7bdddcdb) + (uVar1 & 0xffffffff7bdddcdb));
  _DAT_18327f360 = _DAT_18327f3e0 ^ _DAT_18327f4e0 ^ 0xfffffffffffffffe;
  _DAT_18327f3c0 = (_DAT_18327f3c0 ^ _DAT_18327f4e0) - 2 ^ 0x1591a7c69259675d;
  _DAT_18327f4e8 = (_DAT_18327f4e8 * -0x7cd5420f2b1f377 ^ _DAT_18327f3c0) + _DAT_18327f4e0;
  _DAT_18327f410 = _DAT_18327f4e8 ^ _DAT_18327f3c0;
  _DAT_18327f420 = _DAT_18327f470 ^ 0xfffffffffffffffe;
  _DAT_18327f328 = 0xfffffffffffffffe;
  uVar1 = (_DAT_18327f340 ^ _DAT_181a10570) + 0xb213522ee1c3f8e3;
  uVar2 = (_UNK_181a10578 ^ 0xfffffffffffffffe) + _DAT_18327f340 + 0xb213522e65e1dbc0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f340 ^ _DAT_181a10570;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _UNK_181a10578 ^ 0xfffffffffffffffe;
  _DAT_18327f4f0 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f340 + 0xb213522e65e1dbc0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) + 0x4decadd11e3c071d);
  _DAT_18327f378 = _DAT_18327f378 ^ _DAT_18327f4f0 & 0x7fffffffffffffff ^ 0x7b7cc9e503706d4d;
  _DAT_18327f3b0 =
       (_DAT_18327f3b0 * 0xbc3931ddf76a713 ^ _DAT_18327f378) + (_DAT_18327f4f0 & 0x7fffffffffffffff)
  ;
  _DAT_18327f388 = _DAT_18327f3b0 ^ _DAT_18327f378;
  _DAT_18327f3e0 = 0;
  _DAT_18327f3e0 = func_0x00018af7ae20(_DAT_18327f470 ^ 0x2ddb84d9b832c2a9);
  _DAT_18327f3a0 = _DAT_18327f478 ^ _DAT_18327f3e0 ^ 0xfffffffffffffffe;
  _DAT_18327f440 = (_DAT_18327f440 ^ _DAT_18327f3e0) - 2 ^ 0xb2cd6079f5d1e511;
  _DAT_18327f360 = (_DAT_18327f360 * -0x4685185dd4a15105 ^ _DAT_18327f440) + _DAT_18327f3e0;
  _DAT_18327f3b8 = _DAT_18327f360 ^ _DAT_18327f440;
  _DAT_18327f478 = 0xfffffffffffffffe;
  *(longlong *)(unaff_RBP + 0x50) = unaff_RBX + -2;
  *(longlong *)(unaff_RBP + 0x60) = unaff_RBP + -0x52 + unaff_RBX;
  *(undefined1 *)(unaff_RBP + -0x52 + unaff_RBX) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar1 = (~_DAT_18327f410 + 0xd172ce87f896a3a9) *
          ((_DAT_18327f310 ^ 0xf1c94267865b8f97) + (_DAT_18327f310 & 0x71c94267865b8f97) * 2);
  uVar1 = (uVar1 | _DAT_18327f448) + (uVar1 & _DAT_18327f448);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f3f0 = func_0x00018af7ae20((uVar1 | 0x20bb8ce07ecd2c3f) + (uVar1 & 0x20bb8ce07ecd2c3f));
  uVar1 = (_DAT_18327f3f0 ^ 0x148004502610422) & 0xf1c942670279acb2;
  _DAT_18327f3c0 = (_DAT_18327f3c0 ^ uVar1) + 0xf1fbcee7faffafba ^ 0x9f06c22729a0a55;
  _DAT_18327f4c0 = (_DAT_18327f4c0 * -0x3d13ff520111364b ^ _DAT_18327f3c0) + uVar1;
  _DAT_18327f328 = _DAT_18327f4c0 ^ _DAT_18327f3c0;
  _DAT_18327f348 = _DAT_18327f490 ^ 0xf1fbcee7faffafba;
  _DAT_18327f390 = -0xe04311805005046;
  uVar1 = (_DAT_18327f4c8 ^ _DAT_181a10580) + _DAT_18327f4e8 + 0x84222330;
  uVar2 = (_DAT_18327f4e8 ^ _UNK_181a10588) + _DAT_18327f4c8 + 0x9b9a760b751c31a0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f4c8 ^ _DAT_181a10580;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f4e8 ^ _UNK_181a10588;
  _DAT_18327f410 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f4c8 + 0x9b9a760b751c31a0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18327f4e8 + 0x84222330));
  uVar1 = _DAT_18327f410 >> 1 | _DAT_18327f410;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_18327f410) & 0xfffffffff0000000;
  _DAT_18327f3a8 = _DAT_18327f400 ^ uVar1 ^ 0x9b9a760b751c31b5;
  _DAT_18327f458 = (_DAT_18327f458 ^ uVar1) + 0x9b9a760b751c31b5 ^ 0xd55b4775955b239a;
  _DAT_18327f490 = (_DAT_18327f490 * 0x4f20daad92e7a51d ^ _DAT_18327f458) + uVar1;
  _DAT_18327f4a0 = _DAT_18327f490 ^ _DAT_18327f458;
  _DAT_18327f4f8 = 0x9b9a760b751c31b5;
  uVar1 = (~_DAT_18327f398 + 0x646589f48ae3ce61) *
          ((_DAT_18327f3d0 ^ 0x9b9a760bf13e1290) + (_DAT_18327f3d0 & 0x1b9a760bf13e1290) * 2);
  uVar1 = (uVar1 | _DAT_18327f420) + (uVar1 & _DAT_18327f420);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f420 = func_0x00018af7ae20((uVar1 | 0xffffffff7bdddcf0) + (uVar1 & 0xffffffff7bdddcf0));
  uVar1 = _DAT_18327f420 - (_DAT_18327f420 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18327f420;
  _DAT_18327f380 = _DAT_18327f3e8 ^ uVar1 ^ 0x15;
  _DAT_18327f3c0 = (_DAT_18327f3c0 ^ uVar1) + 0x15 ^ 0x23fa19145c895443;
  _DAT_18327f440 = (_DAT_18327f440 * -0x391574710d637dc7 ^ _DAT_18327f3c0) + uVar1;
  _DAT_18327f370 = _DAT_18327f440 ^ _DAT_18327f3c0;
  _DAT_18327f480 = 0x15;
  _DAT_18327f388 = func_0x00018af7ae20(_DAT_18327f328 ^ 0xfe0fce46e3151f8f);
  _DAT_18327f358 = (_DAT_18327f358 * -0x48b6fc09bb628f31 ^ 0x4482bddec2530cca) + _DAT_18327f4b0;
  _DAT_18327f350 = _DAT_18327f358 ^ 0x4482bddec2530cca;
  _DAT_18327f308 = 0x3629eaf130f2ed00;
  uVar1 = (~_DAT_18327f428 + 0xc9d6150ecf0d1301) *
          ((_DAT_18327f408 ^ 0x84222330) + (ulonglong)((uint)_DAT_18327f408 & 0x84222330) * 2);
  uVar1 = (uVar1 | _DAT_18327f4d0) + (uVar1 & _DAT_18327f4d0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f4b0 = 0x4482bddec2530cca;
  uVar1 = func_0x00018af7ae20((uVar1 | 0xc9d6150e4b2f3030) + (uVar1 & 0xc9d6150e4b2f3030));
  uVar1 = uVar1 ^ 0xc9d6150ecf0d1300;
  _DAT_18327f460 = _DAT_18327f400 ^ uVar1 ^ 0xc9d6150ecf0d1315;
  _DAT_18327f4c0 = (_DAT_18327f4c0 ^ uVar1) + 0xc9d6150ecf0d1315 ^ 0xb33ecac144957969;
  _DAT_18327f3e0 = (_DAT_18327f3e0 * 0x5a187344f799bac9 ^ _DAT_18327f4c0) + uVar1;
  _DAT_18327f380 = _DAT_18327f3e0 ^ _DAT_18327f4c0;
  _DAT_18327f328 = 0xc9d6150ecf0d1315;
  uVar1 = (_DAT_18327f4b8 ^ _DAT_181a10590) + 0x93ac2a1d1a3c4345;
  uVar2 = (_UNK_181a10598 ^ 0xc9d6150ecf0d1315) + _DAT_18327f4b8 + 0x3629eaf130f2ed00;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f4b8 ^ _DAT_181a10590;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _UNK_181a10598 ^ 0xc9d6150ecf0d1315;
  _DAT_18327f318 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f4b8 + 0x3629eaf130f2ed00) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) + 0x6c53d5e2e5c3bcbb);
  uVar1 = _DAT_18327f318 - (_DAT_18327f318 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18327f318) << 0x1d | _DAT_18327f318 >> 0x23;
  _DAT_18327f488 = _DAT_18327f478 ^ uVar1 ^ 0x15;
  _DAT_18327f458 = (_DAT_18327f458 ^ uVar1) + 0x15 ^ 0xb513462ff6fed701;
  _DAT_18327f4c0 = (_DAT_18327f4c0 * 0x5e1fc7a8ed5405a1 ^ _DAT_18327f458) + uVar1;
  _DAT_18327f3c0 = _DAT_18327f4c0 ^ _DAT_18327f458;
  _DAT_18327f398 = 0x15;
  uVar1 = (_DAT_18327f3c8 ^ _DAT_181a105a0) + _DAT_18327f4f0 + 0x84222325;
  uVar2 = (_DAT_18327f4f0 ^ _UNK_181a105a8) + _DAT_18327f3c8 + 0xf759a197ae0d45a8;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f3c8 ^ _DAT_181a105a0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f4f0 ^ _UNK_181a105a8;
  _DAT_18327f410 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f3c8 + 0xf759a197ae0d45a8) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18327f4f0 + 0x84222325));
  uVar1 = _DAT_18327f410 << 8 | _DAT_18327f410 >> 0x38;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar1;
  _DAT_18327f358 = (_DAT_18327f358 ^ uVar1) + 0x8a65e6851f2ba58 ^ 0x8ee920774b5b42a8;
  _DAT_18327f4f0 = (_DAT_18327f4f0 * -0x37e09a024738703d ^ _DAT_18327f358) + uVar1;
  _DAT_18327f3d0 = _DAT_18327f4f0 ^ _DAT_18327f358;
  _DAT_18327f388 = 0x8a65e6851f2ba58;
  uVar1 = (_DAT_18327f3b8 ^ _DAT_181a105b0) + _DAT_18327f490 + 0x84222330;
  uVar2 = (_DAT_18327f490 ^ _UNK_181a105b8) + _DAT_18327f3b8 + 0xf759a197ae0d45a8;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f3b8 ^ _DAT_181a105b0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f490 ^ _UNK_181a105b8;
  _DAT_18327f458 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18327f3b8 + 0xf759a197ae0d45a8) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18327f490 + 0x84222330));
  _DAT_18327f310 = _DAT_18327f450 ^ _DAT_18327f458 ^ 0xf759a197ae0d45bd;
  _DAT_18327f370 = (_DAT_18327f370 ^ _DAT_18327f458) + 0xf759a197ae0d45bd ^ 0xa315119879205833;
  _DAT_18327f398 = (_DAT_18327f398 * -0x70364b72c9d2109f ^ _DAT_18327f370) + _DAT_18327f458;
  _DAT_18327f3f8 = _DAT_18327f398 ^ _DAT_18327f370;
  _DAT_18327f348 = 0xf759a197ae0d45bd;
  uVar1 = (~_DAT_18327f400 + 0x8a65e6851f2ba59) *
          ((_DAT_18327f418 ^ 0xf759a1972a2f6698) + (_DAT_18327f418 & 0x7759a1972a2f6698) * 2);
  uVar1 = (uVar1 | _DAT_18327f380) + (uVar1 & _DAT_18327f380);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f4c8 = func_0x00018af7ae20((uVar1 | 0xffffffff7bdddcc0) + (uVar1 & 0xffffffff7bdddcc0));
  uVar1 = _DAT_18327f4c8 >> 1 | _DAT_18327f4c8;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = _DAT_18327f4c8 ^ 0xf759a197ae0d45bd ^
          (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40;
  _DAT_18327f398 = _DAT_18327f328 ^ uVar1 ^ 0x15;
  _DAT_18327f300 = (_DAT_18327f300 ^ uVar1) + 0x15 ^ 0xefdfebe9adc1e03;
  _DAT_18327f390 = (_DAT_18327f390 * 0x30fef66189125ae9 ^ _DAT_18327f300) + uVar1;
  _DAT_18327f3c8 = _DAT_18327f390 ^ _DAT_18327f300;
  _DAT_18327f4b8 = 0x15;
  uVar1 = (_DAT_181a105c0 ^ 0x15) + _DAT_18327f4d8 + 0xf1fbcee77edd8c9f;
  uVar2 = (_DAT_18327f4d8 ^ _UNK_181a105c8) + 0x9be96f3fba040ad9;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_181a105c0 ^ 0x15;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18327f4d8 ^ _UNK_181a105c8;
  _DAT_18327f360 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) + 0x641690c045fbf527 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18327f4d8 + 0xf1fbcee77edd8c9f));
  _DAT_18327f368 =
       (_DAT_18327f368 ^ _DAT_18327f360 & 0xfffffffffffe0000) + 0x6a12a1d840fba57e ^
       0xea3d23d71c102d72;
  _DAT_18327f480 =
       (_DAT_18327f480 * -0x17366044cbddc031 ^ _DAT_18327f368) +
       (_DAT_18327f360 & 0xfffffffffffe0000);
  _DAT_18327f358 = _DAT_18327f480 ^ _DAT_18327f368;
  _DAT_18327f370 = 0x6a12a1d840fba57e;
  _DAT_18327f328 = func_0x00018af7ae20(_DAT_18327f460 + 0x577a1143ab5e5729 ^ 0x9c);
  _DAT_18327f400 = (_DAT_18327f400 ^ _DAT_18327f328) + 0x91e94e27ba040a80 ^ 0x510f295052d9aaca;
  _DAT_18327f368 = (_DAT_18327f368 * -0x1826e7ad09c086d3 ^ _DAT_18327f400) + _DAT_18327f328;
  _DAT_18327f398 = _DAT_18327f368 ^ _DAT_18327f400;
  _DAT_18327f330 = _DAT_18327f4a8 ^ 0x91e94e27ba040a80;
  _DAT_18327f480 = 0x91e94e27ba040a80;
  _DAT_18327f328 = func_0x00018af7ae20(_DAT_18327f468 ^ 0x1f00841b002143);
  _DAT_18327f460 = _DAT_18327f460 ^ _DAT_18327f328 ^ 0x2e8045eb2f2ade4b;
  _DAT_18327f4c8 = (_DAT_18327f4c8 * -0x723f90ccab9fd7e5 ^ _DAT_18327f460) + _DAT_18327f328;
  _DAT_18327f420 = _DAT_18327f4c8 ^ _DAT_18327f460;
  _DAT_18327f3d8 = 0;
  uVar1 = (_DAT_18327f488 ^ 0x84222330) + _DAT_18327f430 + 0x84222330;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18327f488 ^ 0x84222330;
  uVar2 = ((_DAT_18327f430 + _DAT_18327f488) * 0x2000 | _DAT_18327f430 + _DAT_18327f488 >> 0x33) ^
          _DAT_18327f430;
  _DAT_18327f4e8 = _DAT_18327f328;
  _DAT_18327f4f0 =
       func_0x00018af7ae20((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_18327f488 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18327f430 + 0x84222330));
  _DAT_18327f380 = _DAT_18327f3f0 ^ _DAT_18327f4f0 ^ 0x15;
  _DAT_18327f338 = (_DAT_18327f338 ^ _DAT_18327f4f0) + 0x15 ^ 0xe1b51123254277da;
  _DAT_18327f440 = (_DAT_18327f440 * -0x7e7bb3231987d969 ^ _DAT_18327f338) + _DAT_18327f4f0;
  _DAT_18327f478 = _DAT_18327f440 ^ _DAT_18327f338;
  _DAT_18327f450 = 0x15;
  uVar1 = (~_DAT_18327f328 + 0xe04311805005046) *
          ((_DAT_18327f3e0 ^ 0xf1fbcee77edd8c9f) + (_DAT_18327f3e0 & 0x71fbcee77edd8c9f) * 2);
  uVar1 = (uVar1 | _DAT_18327f318) + (uVar1 & _DAT_18327f318);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f4b0 = func_0x00018af7ae20((uVar1 | 0xffffffff7bdddcda) + (uVar1 & 0xffffffff7bdddcda));
  uVar1 = _DAT_18327f4b0 - (_DAT_18327f4b0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18327f4b0;
  _DAT_18327f3f8 = _DAT_18327f3f8 ^ uVar1 ^ 0xebc49a2cfa403ee2;
  _DAT_18327f370 = (_DAT_18327f370 * 0x6bb304f672006b25 ^ _DAT_18327f3f8) + uVar1;
  _DAT_18327f4b8 = _DAT_18327f370 ^ _DAT_18327f3f8;
  _DAT_18327f350 = 0;
  uVar1 = (~_DAT_18327f4e8 + 0xf1c942670279acb3) *
          ((_DAT_18327f498 ^ 0xf1c94267865b8f97) + (_DAT_18327f498 & 0x71c94267865b8f97) * 2);
  uVar1 = (uVar1 | _DAT_18327f378) + (uVar1 & _DAT_18327f378);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18327f3f0 = func_0x00018af7ae20((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_18327f4a8 = _DAT_18327f4a8 ^ _DAT_18327f3f0 ^ 0xf1c942670279acb2 ^ 0x40429d1d7db3b12a;
  _DAT_18327f3e8 =
       (_DAT_18327f3e8 * -0x5a6aeb092caf13a7 ^ _DAT_18327f4a8) +
       (_DAT_18327f3f0 ^ 0xf1c942670279acb2);
  _DAT_18327f488 = _DAT_18327f3e8 ^ _DAT_18327f4a8;
  _DAT_18327f3b0 = 0;
  _DAT_18327f378 = func_0x00018af7ae20(_DAT_18327f428 + 0x23007bd00021ff ^ 0x4f);
  uVar1 = (_DAT_18327f378 ^ 0x15) << 8 | _DAT_18327f378 >> 0x38;
  _DAT_18327f470 = _DAT_18327f310 ^ uVar1 ^ 0x15;
  _DAT_18327f350 = (_DAT_18327f350 ^ uVar1) + 0x15 ^ 0x818c42a916cd6de3;
  _DAT_18327f4c0 = (_DAT_18327f4c0 * 0x74781dfefc4c3eef ^ _DAT_18327f350) + uVar1;
  _DAT_18327f3f8 = _DAT_18327f4c0 ^ _DAT_18327f350;
  _DAT_18327f468 = 0x15;
  switch(*(longlong *)(unaff_RBP + 0x50) == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf58644 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af59b63 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af58644(void)

{
  undefined8 *unaff_RBP;
  
  unaff_RBP[-3] = 0xf;
  (**(code **)(*(longlong *)unaff_RBP[6] + 0x70))
            ((longlong *)unaff_RBP[6],*unaff_RBP,unaff_RBP + -6);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf596c6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018af59b63 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18af596c6(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar21;
  undefined1 auVar20 [16];
  ulonglong uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  uint uVar25;
  undefined1 auVar26 [16];
  ulonglong uVar28;
  undefined1 auVar29 [16];
  uint uVar27;
  
  uVar1 = unaff_RBP - 0x3b;
  auVar29._8_8_ = unaff_RDI;
  auVar29._0_8_ = uVar1 ^ 0x84222325;
  plVar2 = *(longlong **)(unaff_RBP + 0x30);
  auVar20 = pshufb(auVar29 ^ _DAT_181a105d0,_DAT_1800170c0);
  uVar18 = auVar20._8_8_ + auVar20._0_8_;
  uVar19 = uVar18 + _DAT_18327f3e8;
  if (auVar20._4_4_ < 0) {
    uVar19 = _DAT_18327f488 ^ uVar18;
  }
  _DAT_18327f3f8 = func_0x00018af7ae20(SUB161(auVar29 ^ _DAT_181a105d0,5) ^ uVar19);
  uVar21 = (uint)(uVar1 >> 0x20);
  auVar24._8_4_ = (int)uVar1;
  auVar24._0_8_ = uVar1;
  auVar24._12_4_ = uVar21;
  uVar27 = (uint)(unaff_RDI >> 0x20);
  auVar26._8_4_ = (int)unaff_RDI;
  auVar26._0_8_ = unaff_RDI;
  auVar26._12_4_ = uVar27;
  auVar20._8_4_ = 0xffffffff;
  auVar20._0_8_ = 0xffffffffffffffff;
  auVar20._12_4_ = 0xffffffff;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = auVar20 ^ auVar24;
  uVar15 = _DAT_181a10680;
  uVar14 = _DAT_181a10670;
  uVar18 = (ulonglong)_DAT_181a105f0;
  auVar29 = auVar24 ^ auVar26;
  uVar8 = (ulonglong)_DAT_181a105e0;
  uVar3 = (ulonglong)_DAT_181a105e0;
  uVar9 = (ulonglong)_DAT_181a10600;
  uVar19 = (ulonglong)_DAT_181a10610;
  uVar10 = (ulonglong)_DAT_181a10600;
  uVar4 = (ulonglong)_DAT_181a10640;
  uVar25 = SUB164(auVar24 & auVar26,0);
  uVar5 = (ulonglong)_DAT_181a10630;
  uVar22 = SUB168(auVar24 & auVar26,0);
  uVar11 = (ulonglong)_DAT_181a10630;
  uVar6 = (ulonglong)_DAT_181a10660;
  uVar23 = SUB164(auVar24 | auVar26,0);
  uVar7 = (ulonglong)_DAT_181a10650;
  uVar28 = SUB168(auVar24 | auVar26,0);
  uVar12 = (ulonglong)_DAT_181a10650;
  *(undefined1 (*) [16])(unaff_RBP + 0x50) = auVar29;
  uVar13 = *(ulonglong *)(unaff_RBP + 0x60);
  uVar16 = uVar1 * unaff_RDI ^ _DAT_18327f3f8;
  _DAT_18327f300 =
       (((ulonglong)_DAT_181a10620 * (uVar13 & 0xffffffff) +
         ((ulonglong)_DAT_181a10690 * (uVar13 & 0xffffffff) +
          (uVar13 >> 0x20) * (ulonglong)_DAT_181a10620 << 0x20) +
        (ulonglong)uVar14 * (ulonglong)auVar29._0_4_ +
        ((ulonglong)uVar15 * (ulonglong)auVar29._0_4_ + (auVar29._0_8_ >> 0x20) * (ulonglong)uVar14
        << 0x20) + uVar7 * uVar23 + (uVar6 * uVar23 + (uVar28 >> 0x20) * uVar12 << 0x20) +
        uVar5 * uVar25 + (uVar4 * uVar25 + (uVar22 >> 0x20) * uVar11 << 0x20) +
        ((unaff_RDI & 0xffffffff) * uVar19 + uVar27 * uVar10 << 0x20) +
        (unaff_RDI & 0xffffffff) * uVar9 +
        (uVar18 * (uVar1 & 0xffffffff) + uVar3 * uVar21 << 0x20) + (uVar1 & 0xffffffff) * uVar8) -
       ((ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_181a106d0 +
        ((uVar13 >> 0x20) * (ulonglong)_DAT_181a106d0 +
         (ulonglong)_DAT_181a106c0 * (ulonglong)*(uint *)(unaff_RBP + 0x60) << 0x20) +
        (ulonglong)*(uint *)(unaff_RBP + 0x50) * (ulonglong)_DAT_181a106f0 +
        ((auVar29._0_8_ >> 0x20) * (ulonglong)_DAT_181a106f0 +
         (ulonglong)_DAT_181a106e0 * (ulonglong)*(uint *)(unaff_RBP + 0x50) << 0x20) +
        (ulonglong)uVar25 * (ulonglong)_DAT_181a106f0 +
        ((uVar22 >> 0x20) * (ulonglong)_DAT_181a106f0 +
         (ulonglong)uVar25 * (ulonglong)_DAT_181a106e0 << 0x20) +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_181a106d0 +
        ((ulonglong)uVar21 * (ulonglong)_DAT_181a106d0 +
         (uVar1 & 0xffffffff) * (ulonglong)_DAT_181a106c0 << 0x20) +
       (ulonglong)uVar23 * (ulonglong)_DAT_181a10700 +
       ((ulonglong)_DAT_181a10710 * (ulonglong)uVar23 + (uVar28 >> 0x20) * (ulonglong)_DAT_181a10700
       << 0x20))) + 0xcf9dabf9876f47ad;
  _DAT_18327f370 = _DAT_18327f300 ^ uVar16;
  _DAT_18327f330 = (_DAT_18327f330 ^ uVar16) + _DAT_18327f300 ^ 0xb859b0b292fe6737;
  _DAT_18327f378 = (_DAT_18327f378 * 0x7dc073fe1c184f39 ^ _DAT_18327f330) + uVar16;
  _DAT_18327f358 = _DAT_18327f378 ^ _DAT_18327f330;
  lVar17 = unaff_RBP + -0x30;
  FUN_18414b520(lVar17);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar17 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 0x10),lVar17);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xaf66e09 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af66e09(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x30) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x30),*(undefined8 *)(unaff_RBP + 0x18));
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf69655 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af69655(void)

{
  int iVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(unaff_RBX + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf696e5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af696e5(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  int unaff_EDI;
  ulonglong uVar2;
  uint unaff_R14D;
  byte in_XMM0_Bf;
  undefined1 in_XMM1 [16];
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_XMM15_Da;
  
  uVar1 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar2 = uVar1 + _DAT_18327f320;
  if (in_XMM1._4_4_ < 0) {
    uVar2 = _DAT_18327f398 ^ uVar1;
  }
  _DAT_18327f4c8 = func_0x00018af7ae20(in_XMM0_Bf ^ uVar2);
  uVar5 = unaff_R14D & unaff_XMM15_Da;
  uVar3 = unaff_R14D | unaff_XMM15_Da;
  uVar6 = unaff_R14D ^ unaff_XMM15_Da;
  lVar4 = ((ulonglong)unaff_R14D * (ulonglong)_DAT_181a10440 << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_181a10430;
  uVar2 = (_DAT_18327f4c8 & 0x7fffffffffffffff) -
          ((_DAT_18327f4c8 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_18327f4c8 & 0x7fffffffffffffff;
  uVar1 = ((((ulonglong)uVar6 * (ulonglong)_DAT_181a10420 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_181a10410 +
            ((ulonglong)uVar3 * (ulonglong)_DAT_181a10400 << 0x20) +
            (ulonglong)uVar3 * (ulonglong)_DAT_181a103f0 +
            ((ulonglong)uVar5 * (ulonglong)_DAT_181a103e0 << 0x20 |
            (ulonglong)uVar5 * (ulonglong)_DAT_181a103d0) +
            ((ulonglong)unaff_R14D * (ulonglong)_DAT_181a103c0 << 0x20) +
            (ulonglong)unaff_R14D * (ulonglong)_DAT_181a103b0 + lVar4) -
          (((ulonglong)uVar6 * (ulonglong)_DAT_181a104c0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_181a104b0 +
           ((ulonglong)uVar3 * (ulonglong)_DAT_181a104a0 << 0x20) +
           (ulonglong)uVar3 * (ulonglong)_DAT_181a10490 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_181a10480 << 0x20 |
           (ulonglong)uVar5 * (ulonglong)_DAT_181a10470) +
           ((ulonglong)unaff_R14D * (ulonglong)_DAT_181a10460 << 0x20) +
           (ulonglong)unaff_R14D * (ulonglong)_DAT_181a10450 + lVar4)) + 0xff10b0d285a175a9;
  _DAT_18327f400 = (_DAT_18327f380 ^ uVar2 ^ uVar1 ^ uVar2) + uVar1 ^ 0x66db3503637b78d5;
  _DAT_18327f348 = (_DAT_18327f348 * 0x13f644aacdbdd025 ^ _DAT_18327f400) + uVar2;
  _DAT_18327f3c8 = _DAT_18327f348 ^ _DAT_18327f400;
  _DAT_18327f420 = uVar1 & 0xffffffff;
  *(int *)(unaff_RBP + 0x80) = (int)uVar1;
  *(int *)(unaff_RBP + 0x88) = unaff_EDI;
  switch((int)uVar1 < unaff_EDI) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf69b79 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af69b79(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x30);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50,0);
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf69c54 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af69c54(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBX + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf69f42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af69f42(longlong param_1)

{
  switch(0xf < *(ulonglong *)(param_1 + 0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf7d477 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af7d477(void)

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


// ----- block @ rva 0xaf7d620 -----

void FUN_18af7d620(void)

{
  return;
}


// ----- block @ rva 0xaf7d8a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af7d8a3(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf7dc32 -----

undefined8 FUN_18af7dc32(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xaf7f27e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af7f27e(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(unaff_RBP + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf7f915 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af7f915(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(unaff_RBP + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf7fad3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18af7dab0(void)

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


// ----- block @ rva 0xaf7fdaa -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af7fdaa(void)

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


// ----- block @ rva 0xaf800b1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af800b1(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBP + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf81015 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af81015(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
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


// ----- block @ rva 0xaf81056 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af81056(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
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


// ----- block @ rva 0xaf81f6f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af81f6f(void)

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


// ----- block @ rva 0xaf81fc3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af81fc3(void)

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


// ----- block @ rva 0xaf823b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af823b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a15e88)();
  return;
}


// ----- block @ rva 0xaf82507 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af82507(void)

{
  FUN_190dd72e0();
  (*_DAT_181a15e48)();
  return;
}


// ----- block @ rva 0xaf826f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af826f2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181a15c88)();
  return;
}


// ----- block @ rva 0xaf827c2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af827c2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000068 = 0;
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


// ----- block @ rva 0xaf828ca -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af828ca(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_181a15a58)();
  return;
}


// ----- block @ rva 0xaf82c84 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af82c84(void)

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


// ----- block @ rva 0xaf82cd8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af82cd8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a15c78)();
  return;
}


// ----- block @ rva 0xaf82d28 -----

void FUN_18af82d28(void)

{
  return;
}


// ----- block @ rva 0xaf82d36 -----

void FUN_18af82d36(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xaf82ea0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af82ea0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181a168d8)();
  return;
}


// ----- block @ rva 0xaf833f3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af833f3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a16848)();
  return;
}


// ----- block @ rva 0xaf83a42 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af83a42(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a16628)();
  return;
}


// ----- block @ rva 0xaf841c6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af841c6(void)

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


// ----- block @ rva 0xaf84217 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af84217(void)

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


// ----- block @ rva 0xaf84292 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af84292(void)

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


// ----- block @ rva 0xaf84904 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af84904(void)

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


// ----- block @ rva 0xaf84f80 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af84f80(void)

{
  FUN_190dd72e0();
  (*_DAT_181a16a28)();
  return;
}


// ----- block @ rva 0xaf8513e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af8513e(void)

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


// ----- block @ rva 0xaf852f7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af852f7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a16318)();
  return;
}


// ----- block @ rva 0xaf85722 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af85722(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a16838)();
  return;
}


// ----- block @ rva 0xaf8577d -----

void FUN_18af8577d(void)

{
  return;
}


// ----- block @ rva 0xaf87f59 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af87f59(void)

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


// ----- block @ rva 0xaf87fad -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af87fad(void)

{
  char cVar1;
  longlong *unaff_R14;
  
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


// ----- block @ rva 0xaf880ee -----

void FUN_18af880ee(void)

{
  return;
}


// ----- block @ rva 0xaf88286 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af88286(void)

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


// ----- block @ rva 0xaf882d1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af882d1(void)

{
  int iVar1;
  longlong *unaff_R14;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000086;
  
  uStack0000000000000086 = in_stack_00000058;
  (**(code **)(unaff_R14 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_R14 + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf89451 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af89451(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xaf8a942 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af8a942(void)

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


// ----- block @ rva 0xaf8bc16 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af8bc16(void)

{
  char cVar1;
  longlong *in_RAX;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*in_RAX + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xaf8c0e6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18af8cbc7(void)

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


// ----- block @ rva 0xaf8cbee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af8cbee(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,param_2,0x2c);
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


// ----- block @ rva 0xaf90ace -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af90ace(void)

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


// ----- block @ rva 0xaf90b22 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af90b22(void)

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


// ----- block @ rva 0xaf90c11 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af90c11(void)

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


// ----- block @ rva 0xaf90ff5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af90ff5(void)

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


// ----- block @ rva 0xaf91049 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af91049(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a19278)();
  return;
}


// ----- block @ rva 0xaf91572 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af91572(void)

{
  FUN_190dd72e0();
  (*_DAT_181a190e8)();
  return;
}


// ----- block @ rva 0xaf915d8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af915d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181a18f78)();
  return;
}


// ----- block @ rva 0xaf91655 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af91655(void)

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


// ----- block @ rva 0xaf916b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af916b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_181a19138)();
  return;
}


// ----- block @ rva 0xaf91852 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af91852(void)

{
  FUN_190dd72e0();
  (*_DAT_181a19168)();
  return;
}


// ----- block @ rva 0xaf91995 -----

void FUN_18af91995(void)

{
  return;
}


// ----- block @ rva 0xaf91adf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af91adf(void)

{
  FUN_190ddfc90();
  (*_DAT_181a19588)();
  return;
}


// ----- block @ rva 0xaf91c4e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af91c4e(void)

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


// ----- block @ rva 0xaf91cf7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af91cf7(void)

{
  FUN_190ddfc90();
  (*_DAT_181a193c8)();
  return;
}


// ----- block @ rva 0xaf91d2a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af91d2a(void)

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


// ----- block @ rva 0xaf91de5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af91de5(void)

{
  FUN_190dd72e0();
  (*_DAT_181a194e8)();
  return;
}


// ----- block @ rva 0xaf91f18 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af91f18(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a195e8)();
  return;
}


// ----- block @ rva 0xaf91fd0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18af91fd0(void)

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


// ----- block @ rva 0xaf9205c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18af9205c(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a195b8)();
  return;
}


// ----- block @ rva 0xaf9207c -----

void FUN_18af9207c(void)

{
  return;
}


// ----- block @ rva 0xaf92086 -----

void FUN_18af92086(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

