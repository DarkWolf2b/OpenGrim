// ===== Lsixtwo/fC; _fa31f22af70cbdf56e21b1052cda26bc ()V (handler @ image 18af382a0, runtime 6ffff2b482a0) =====

void FUN_18af382a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14179,0x326);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14179,0x326);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14179,0x326);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14179,0x326);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14240,0x327);
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



