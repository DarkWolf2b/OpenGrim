// ===== Lsixtwo/fy; _711a693dca6115e72fb85ef41f7a4485 ()V (handler @ image 18b0f9740, runtime 6ffff2d09740) =====

void FUN_18b0f9740(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b0f9828 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a5f518 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fy; aRJ (Lsixtwo/gH$th;)V (handler @ image 18b0efa30, runtime 6ffff2cffa30) =====

void FUN_18b0efa30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13f80,0x322);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b0efafa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a5bda0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fy; aRK ()Lnet/minecraft/class_1792; (handler @ image 18b0f8e10, runtime 6ffff2d08e10) =====

void FUN_18b0f8e10(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018b0f8e39 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a5f0d0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fy; aRL (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18b1163c0, runtime 6ffff2d263c0) =====

undefined8 FUN_18b1163c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fy; aRM ([B)Ljava/lang/String; (handler @ image 18b116450, runtime 6ffff2d26450) =====

void FUN_18b116450(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018b1164f3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a622e0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fy; aRN (IJ)Ljava/lang/String; (handler @ image 18b13df80, runtime 6ffff2d4df80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b13df80(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar8 = (~uRam000000018328a500 + 0xcfbc3a417d705cb8) *
          ((uRam000000018328a5b0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018328a5b0 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018328a228) + (uVar8 & uRam000000018328a228);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a5d8 =
       func_0x00018b144f80((uVar8 | 0xcfbc3a41f9527f92) + (uVar8 & 0xcfbc3a41f9527f92));
  uRam000000018328a688 =
       (uRam000000018328a688 ^ uRam000000018328a5d8 ^ 0xcfbc3a417d705cb7) + 0x3043c5be828fa349 ^
       0x86459dc402c59d6a;
  uRam000000018328a398 =
       (uRam000000018328a398 * -0x5f76012b2628fb5f ^ uRam000000018328a688) +
       (uRam000000018328a5d8 ^ 0xcfbc3a417d705cb7);
  uRam000000018328a278 = uRam000000018328a398 ^ uRam000000018328a688;
  uRam000000018328a7a0 = 0x3043c5be828fa349;
  uVar8 = (uRam000000018328a120 ^ _UNK_181a69010) + uRam000000018328a748 + 0x84225cda;
  uVar9 = (uRam000000018328a748 ^ _UNK_181a69018) + uRam000000018328a120 + 0xcfbc3a417d705cb7;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018328a120 ^ _UNK_181a69010;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018328a748 ^ _UNK_181a69018;
  uRam000000018328a670 =
       func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018328a120 + 0xcfbc3a417d705cb7) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018328a748 + 0x84225cda));
  uVar8 = uRam000000018328a670 ^ 0xcfbc3a417d705cb7;
  uRam000000018328a6d8 = uRam000000018328a790 ^ uVar8 ^ 0xcfbc3a417d70dcb6;
  uRam000000018328a6b8 = (uRam000000018328a6b8 ^ uVar8) + 0xcfbc3a417d70dcb6 ^ 0x44f00d082940b778;
  uRam000000018328a5c8 = (uRam000000018328a5c8 * 0x789f325521f9b397 ^ uRam000000018328a6b8) + uVar8;
  uRam000000018328a6b0 = uRam000000018328a5c8 ^ uRam000000018328a6b8;
  uRam000000018328a888 = 0xcfbc3a417d70dcb6;
  uRam000000018328a108 = func_0x00018b144f80(uRam000000018328a898 ^ 0x3fcc672f50882a95);
  uVar8 = uRam000000018328a108 << 0x2c | uRam000000018328a108 >> 0x14;
  uRam000000018328a230 = (uRam000000018328a230 ^ uVar8) + 0xeb9077be08a8086c ^ 0x58a769b65a5ffa9d;
  uRam000000018328a4b8 = (uRam000000018328a4b8 * 0x607486f9a7620a01 ^ uRam000000018328a230) + uVar8;
  uRam000000018328a218 = uRam000000018328a4b8 ^ uRam000000018328a230;
  uRam000000018328a6a0 = 0xeb9077be08a8086c;
  uVar8 = (~uRam000000018328a678 + 0xeb9077be08a8086d) *
          ((uRam000000018328a1e0 ^ 0x146f8841737a54b6) +
          (uRam000000018328a1e0 & 0x146f8841737a54b6) * 2);
  uVar8 = (uVar8 | uRam000000018328a220) + (uVar8 & uRam000000018328a220);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a8a8 =
       func_0x00018b144f80((uVar8 | 0xffffffff7bd25cda) + (uVar8 & 0xffffffff7bd25cda));
  uVar8 = uRam000000018328a8a8 ^ 0x96d2c2ca252f0268;
  uRam000000018328a768 = uRam000000018328a5b0 ^ uVar8 ^ 0x7fff;
  uRam000000018328a6a0 = (uRam000000018328a6a0 ^ uVar8) + 0x7fff ^ 0xf31f7e1274639016;
  uRam000000018328a688 = (uRam000000018328a688 * -0x2a6332292070469b ^ uRam000000018328a6a0) + uVar8
  ;
  uRam000000018328a8c8 = uRam000000018328a688 ^ uRam000000018328a6a0;
  uRam000000018328a4c8 = 0x7fff;
  uVar8 = (~uRam000000018328a140 + 0x9041f3465ddf2b3) *
          ((uRam000000018328a7f0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018328a7f0 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018328a760) + (uVar8 & uRam000000018328a760);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a550 =
       func_0x00018b144f80((uVar8 | 0x9041f34e1ffd197) + (uVar8 & 0x9041f34e1ffd197));
  uRam000000018328a848 =
       (uRam000000018328a848 ^ uRam000000018328a550) + 0xf6fbe0cb9a220d4e ^ 0x619a7856206b54c5;
  uRam000000018328a8c8 =
       (uRam000000018328a8c8 * 0x5eb40359ad70404f ^ uRam000000018328a848) + uRam000000018328a550;
  uRam000000018328a230 = uRam000000018328a8c8 ^ uRam000000018328a848;
  uRam000000018328a1c0 = 0xf6fbe0cb9a220d4e;
  uVar8 = (~uRam000000018328a170 + 0x9041f3465ddf2b3) *
          ((uRam000000018328a450 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018328a450 & 0x84225cda) * 2);
  uVar8 = (uVar8 | uRam000000018328a2d0) + (uVar8 & uRam000000018328a2d0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a578 =
       func_0x00018b144f80((uVar8 | 0x9041f34e1ffae68) + (uVar8 & 0x9041f34e1ffae68));
  uRam000000018328a6b8 = uRam000000018328a4e8 ^ uRam000000018328a578 ^ 0x9041f3465de72b1;
  uRam000000018328a440 =
       (uRam000000018328a440 ^ uRam000000018328a578) + 0x9041f3465de72b1 ^ 0xb9e6dfddaed724ba;
  uRam000000018328a3f8 =
       (uRam000000018328a3f8 * -0x306aa5c5247191c7 ^ uRam000000018328a440) + uRam000000018328a578;
  uRam000000018328a298 = uRam000000018328a3f8 ^ uRam000000018328a440;
  uRam000000018328a788 = 0x9041f3465de72b1;
  uRam000000018328a8b8 = func_0x00018b144f80(uRam000000018328a458 + 0x1ac3b756a91cbe40 ^ 0xe);
  uVar8 = uRam000000018328a8b8 & 0x7ffe00000;
  uRam000000018328a450 = uRam000000018328a870 ^ uVar8 ^ 0x7fff;
  uRam000000018328a3f8 = (uRam000000018328a3f8 ^ uVar8) + 0x7fff ^ 0xd60fc4bfdfc4ae74;
  uRam000000018328a1e8 = (uRam000000018328a1e8 * -0x1c80cd04b1238bd5 ^ uRam000000018328a3f8) + uVar8
  ;
  uRam000000018328a750 = uRam000000018328a1e8 ^ uRam000000018328a3f8;
  uRam000000018328a698 = 0x7fff;
  uVar8 = (uRam000000018328a750 ^ _UNK_181a69020) + uRam000000018328a788 + 0xdefafeff5a151d92;
  uVar9 = (uRam000000018328a788 ^ _UNK_181a69028) + uRam000000018328a750 + 0xcd907d40e4adec0f;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018328a750 ^ _UNK_181a69020;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018328a788 ^ _UNK_181a69028;
  uRam000000018328a710 =
       func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018328a750 + 0xcd907d40e4adec0f) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018328a788 + 0xdefafeff5a151d92));
  uVar8 = ~(uRam000000018328a710 << 0x2c | uRam000000018328a710 >> 0x14) & 0xdefafeffde373eb7;
  uRam000000018328a210 = uRam000000018328a320 ^ uVar8 ^ 0xac8b7c40c2e52ac6;
  uRam000000018328a148 = (uRam000000018328a148 ^ uVar8) + 0xac8b7c40c2e52ac6 ^ 0xcb801c55ab7ec513;
  uRam000000018328a248 = (uRam000000018328a248 * -0x26a762629c4d89e9 ^ uRam000000018328a148) + uVar8
  ;
  uRam000000018328a8b8 = uRam000000018328a248 ^ uRam000000018328a148;
  uRam000000018328a850 = 0xac8b7c40c2e52ac6;
  uVar8 = (~uRam000000018328a720 + 0xcd907d40e4adec10) *
          ((uRam000000018328a6b8 ^ 0xdefafeff5a151d92) +
          (uRam000000018328a6b8 & 0x5efafeff5a151d92) * 2);
  uVar8 = (uVar8 | uRam000000018328a5b8) + (uVar8 & uRam000000018328a5b8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a408 =
       func_0x00018b144f80((uVar8 | 0x136a83bfbeb8f19d) + (uVar8 & 0x136a83bfbeb8f19d));
  uVar8 = (uRam000000018328a520 ^ uRam000000018328a408 & 0x7fffffffffffffff) + 0x136a83bf3a9ad2b8;
  uRam000000018328a520 = uVar8 ^ 0x38f07011822f4a36;
  uRam000000018328a4c0 =
       (uRam000000018328a4c0 * -0x64fa6eca4bd348ef ^ uRam000000018328a520) +
       (uRam000000018328a408 & 0x7fffffffffffffff);
  uRam000000018328a538 = uRam000000018328a4c0 ^ uRam000000018328a520;
  uRam000000018328a3b8 = 0x136a83bf3a9ad2b8;
  uVar8 = (~uRam000000018328a830 + 0xcd907d40e4adec10) *
          ((uVar8 ^ 0xe60a8eeed83a57a4) + (uRam000000018328a520 & 0x5efafeff5a151d92) * 2);
  uVar8 = (uVar8 | uRam000000018328a500) + (uVar8 & uRam000000018328a500);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a220 =
       func_0x00018b144f80((uVar8 | 0x136a83bfbeb8f19d) + (uVar8 & 0x136a83bfbeb8f19d));
  uRam000000018328a858 =
       (uRam000000018328a858 ^ uRam000000018328a220 ^ 0x1fa39c950b860b9) + 0xcc907c40c4252c07 ^
       0xa830062c45cde412;
  uRam000000018328a2d0 =
       (uRam000000018328a2d0 * 0x4d96e71a20a428f9 ^ uRam000000018328a858) +
       (uRam000000018328a220 ^ 0x1fa39c950b860b9);
  uRam000000018328a620 = uRam000000018328a2d0 ^ uRam000000018328a858;
  uRam000000018328a538 = 0xcc907c40c4252c07;
  uVar8 = (~uRam000000018328a4f8 + 0x9920f881884a580f) *
          ((uRam000000018328a270 ^ 0x136a83bfbeb8f19d) +
          (uRam000000018328a270 & 0x136a83bfbeb8f19d) * 2);
  uVar8 = (uVar8 | uRam000000018328a400) + (uVar8 & uRam000000018328a400);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a138 =
       func_0x00018b144f80((uVar8 | 0x8a4a7b3e36f2a993) + (uVar8 & 0x8a4a7b3e36f2a993));
  uVar8 = uRam000000018328a138 >> 1 | uRam000000018328a138;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam000000018328a138;
  uVar8 = uVar8 << 0x3b | uVar8 >> 5;
  uRam000000018328a358 = uRam000000018328a268 ^ uVar8 ^ 0xac8b7c40c2e52ac6;
  uRam000000018328a610 = (uRam000000018328a610 ^ uVar8) + 0xac8b7c40c2e52ac6 ^ 0x26b94787067f2051;
  uRam000000018328a1b0 = (uRam000000018328a1b0 * -0x2a670d295d3f3a73 ^ uRam000000018328a610) + uVar8
  ;
  uRam000000018328a798 = uRam000000018328a1b0 ^ uRam000000018328a610;
  uRam000000018328a4c0 = uRam000000018328a490 ^ 0xac8b7c40c2e52ac6;
  uRam000000018328a128 = 0xac8b7c40c2e52ac6;
  uVar8 = ((uRam000000018328a858 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018328a858 & 0x84225cda) * 2) * -uRam000000018328a5c8;
  uVar8 = (uVar8 | uRam000000018328a798) + (uVar8 & uRam000000018328a798);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a570 =
       func_0x00018b144f80((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uVar8 = uRam000000018328a570 ^ 0x7fff;
  uRam000000018328a488 = uRam000000018328a8b0 ^ uVar8 ^ 0x7fff;
  uRam000000018328a3d0 = (uRam000000018328a3d0 ^ uVar8) + 0x7fff ^ 0x29d33f2c9b3fba78;
  uRam000000018328a6e8 = (uRam000000018328a6e8 * 0x63cd8c0417963a87 ^ uRam000000018328a3d0) + uVar8;
  uRam000000018328a6f0 = uRam000000018328a6e8 ^ uRam000000018328a3d0;
  uRam000000018328a100 = 0x7fff;
  uVar8 = (uRam000000018328a310 ^ _UNK_181a69030) + uRam000000018328a598 + 0xdefafeff5a151d92;
  uVar9 = (uRam000000018328a598 ^ _UNK_181a69038) + (uRam000000018328a310 - 1);
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018328a310 ^ _UNK_181a69030;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018328a598 ^ _UNK_181a69038;
  uRam000000018328a758 =
       func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018328a310 - 1) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018328a598 + 0xdefafeff5a151d92));
  uRam000000018328a258 =
       (uRam000000018328a258 ^ ~uRam000000018328a758 & 0xdefafeffde373eb7) + 0x2105010021c8c148 ^
       0xd4f3523aae0de928;
  uRam000000018328a440 =
       (uRam000000018328a440 * -0x116cae1e7bc11eef ^ uRam000000018328a258) +
       (~uRam000000018328a758 & 0xdefafeffde373eb7);
  uRam000000018328a7a0 = uRam000000018328a440 ^ uRam000000018328a258;
  uRam000000018328a190 = 0x2105010021c8c148;
  uVar8 = (~uRam000000018328a3f8 + 0x2105010021c8c149) *
          ((uRam000000018328a368 ^ 0xdefafeff5a151d92) +
          (uRam000000018328a368 & 0x5efafeff5a151d92) * 2);
  uVar8 = (uVar8 | uRam000000018328a300) + (uVar8 & uRam000000018328a300);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a5d0 =
       func_0x00018b144f80((uVar8 | 0xffffffff7bdddcda) + (uVar8 & 0xffffffff7bdddcda));
  uRam000000018328a158 = uRam000000018328a158 ^ uRam000000018328a5d0 ^ 0x5cc39cb51214fb3d;
  uRam000000018328a310 =
       (uRam000000018328a310 * 0x7f41de49b9fc02eb ^ uRam000000018328a158) + uRam000000018328a5d0;
  uRam000000018328a738 = uRam000000018328a310 ^ uRam000000018328a158;
  uRam000000018328a3d8 = 0;
  uVar8 = ((uRam000000018328a268 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018328a268 & 0x84225cda) * 2) * -uRam000000018328a818;
  uVar8 = (uVar8 | uRam000000018328a7b8) + (uVar8 & uRam000000018328a7b8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a3b8 =
       func_0x00018b144f80((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uVar8 = uRam000000018328a3b8 >> 1 | uRam000000018328a3b8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018328a3b8) & 0x7fffffffffffffff;
  uRam000000018328a508 = uRam000000018328a568 ^ uVar8 ^ 0x7fff;
  uRam000000018328a1d8 = (uRam000000018328a1d8 ^ uVar8) + 0x7fff ^ 0x1cfff63bde57b927;
  uRam000000018328a548 = (uRam000000018328a548 * 0x29ebe01b42da60cb ^ uRam000000018328a1d8) + uVar8;
  uRam000000018328a668 = uRam000000018328a548 ^ uRam000000018328a1d8;
  uRam000000018328a1b8 = 0x7fff;
  uVar8 = (uRam000000018328a8d8 ^ _UNK_181a69040) + uRam000000018328a818 + 0x9ed2a2fbde051fa6;
  uVar9 = (uRam000000018328a818 ^ _UNK_181a69048) + uRam000000018328a8d8 + 0x9ed2a2fb5a273c83;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018328a8d8 ^ _UNK_181a69040;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018328a818 ^ _UNK_181a69048;
  uRam000000018328a1f0 =
       func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018328a8d8 + 0x9ed2a2fb5a273c83) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018328a818 + 0x9ed2a2fbde051fa6));
  uVar8 = ~uRam000000018328a1f0 & 0x9ed2a2fb5a273c83 | 0x1a273c83;
  uRam000000018328a190 = uRam000000018328a190 ^ uVar8 ^ 0x6eb0f0ec229c5e23;
  uRam000000018328a6d8 = (uRam000000018328a6d8 * -0x79565a6d67c8ac8b ^ uRam000000018328a190) + uVar8
  ;
  uRam000000018328a750 = uRam000000018328a6d8 ^ uRam000000018328a190;
  uRam000000018328a530 = uRam000000018328a148;
  uRam000000018328a620 = 0;
  uRam000000018328a2e0 = func_0x00018b144f80(uRam000000018328a350 ^ 0x54007ba9ffddbf);
  uVar8 = uRam000000018328a2e0 - (uRam000000018328a2e0 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018328a2e0;
  uRam000000018328a378 = uRam000000018328a288 ^ uVar8 ^ 0x7fff;
  uRam000000018328a188 = (uRam000000018328a188 ^ uVar8) + 0x7fff ^ 0x2d1b7ca82d7ad389;
  uRam000000018328a310 = (uRam000000018328a310 * -0x30b6e3d5a32b357b ^ uRam000000018328a188) + uVar8
  ;
  uRam000000018328a6f0 = uRam000000018328a310 ^ uRam000000018328a188;
  uRam000000018328a598 = 0x7fff;
  param_4 = param_4 & 0x7fff;
  uVar2 = (ulonglong)param_3;
  uVar8 = (ulonglong)param_4 ^ 0x84222325;
  uVar9 = ((uRam000000018328a180 ^ uVar8) +
          (ulonglong)((uint)uRam000000018328a180 & (uint)uVar8) * 2) *
          (uVar2 - uRam000000018328a818);
  uVar9 = (uVar9 | uRam000000018328a5f8) + (uVar9 & uRam000000018328a5f8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam000000018328a5d0 =
       func_0x00018b144f80((uVar8 ^ uVar2 | uVar9) +
                           (ulonglong)((uint)(uVar8 ^ uVar2) & (uint)uVar9));
  uVar8 = uRam000000018328a5d0 >> 1 | uRam000000018328a5d0;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018328a5d0;
  uVar5 = (param_4 + uVar2) - (ulonglong)((param_3 & param_4) * 2);
  uRam000000018328a6d0 = (uRam000000018328a6d0 ^ uVar8) + uVar5 ^ 0xb93d8ae47df549dd;
  uRam000000018328a458 = (uRam000000018328a458 * 0x5fc3c1eea604d8b5 ^ uRam000000018328a6d0) + uVar8;
  uRam000000018328a4c8 = uRam000000018328a458 ^ uRam000000018328a6d0;
  uVar6 = uVar5 & 0xffffffff;
  uVar8 = (uRam000000018328a6c0 ^ _UNK_181a69050) + uRam000000018328a5d8 + 0x7334cbd;
  uVar9 = (uRam000000018328a5d8 ^ _UNK_181a69058) + uRam000000018328a6c0 + 0x32cac453;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018328a6c0 ^ _UNK_181a69050;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018328a5d8 ^ _UNK_181a69058;
  uRam000000018328a8c0 = uVar6;
  uRam000000018328a548 =
       func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018328a6c0 + 0x32cac453) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018328a5d8 + 0x7334cbd));
  uVar8 = uRam000000018328a548 << 7 | uRam000000018328a548 >> 0x39;
  uRam000000018328a448 = (uRam000000018328a448 ^ uVar8) + 0xb3dbefdb ^ 0x41508471443060e9;
  uRam000000018328a780 = (uRam000000018328a780 * 0x7e0514430368624f ^ uRam000000018328a448) + uVar8;
  uRam000000018328a270 = uRam000000018328a780 ^ uRam000000018328a448;
  uRam000000018328a2e8 = 0xb3dbefdb;
  uVar8 = (~uRam000000018328a7f0 + 0x7c6fbc01) *
          ((uRam000000018328a590 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018328a590 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018328a340) + (uVar8 & uRam000000018328a340);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a2a8 =
       func_0x00018b144f80((uVar8 | 0xf84d9f25) + (ulonglong)((uint)uVar8 & 0xf84d9f25));
  uRam000000018328a828 =
       (uRam000000018328a828 ^ uRam000000018328a2a8 & 0x1ffffffffffc000) - 0x7c6fbc00 ^
       0x9400d91cc4a5a82f;
  uRam000000018328a618 =
       (uRam000000018328a618 * 0x15643c0758010563 ^ uRam000000018328a828) +
       (uRam000000018328a2a8 & 0x1ffffffffffc000);
  uRam000000018328a248 = uRam000000018328a618 ^ uRam000000018328a828;
  uRam000000018328a8b8 = 0x83904400;
  uRam000000018328a890 = func_0x00018b144f80(lRam000000018328a238 + 0xbc001836003cffU ^ 0x6e);
  uVar8 = (uRam000000018328a890 ^ 0x7c6fbc00) << 0x14 | uRam000000018328a890 >> 0x2c;
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar8;
  uRam000000018328a618 = uRam000000018328a718 ^ uVar8 ^ 0x7c70177f;
  uRam000000018328a2c8 = (uRam000000018328a2c8 ^ uVar8) + 0x7c70177f ^ 0xd830e91c7c49731;
  uRam000000018328a300 = (uRam000000018328a300 * 0x39e218dad6d63199 ^ uRam000000018328a2c8) + uVar8;
  uRam000000018328a1d8 = uRam000000018328a300 ^ uRam000000018328a2c8;
  uRam000000018328a698 = 0x7c70177f;
  uVar8 = (uRam000000018328a390 ^ _UNK_181a69060) + uRam000000018328a430 + 0xf852345a;
  uVar9 = (uRam000000018328a430 ^ _UNK_181a69068) + uRam000000018328a390 + 0x83904400;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018328a390 ^ _UNK_181a69060;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018328a430 ^ _UNK_181a69068;
  uRam000000018328a588 =
       func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018328a390 + 0x83904400) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018328a430 + 0xf852345a));
  uVar3 = (uint)uRam000000018328a588 & 0x7c700000;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar8 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          (ulonglong)uVar3;
  uRam000000018328a368 = uRam000000018328a160 ^ uVar8 ^ 0x100005b7f;
  uRam000000018328a460 = (uRam000000018328a460 ^ uVar8) + 0x100005b7f ^ 0xb2ce6298a5999de0;
  uRam000000018328a3e0 = (uRam000000018328a3e0 * 0x20a159781e8e873b ^ uRam000000018328a460) + uVar8;
  uRam000000018328a810 = uRam000000018328a3e0 ^ uRam000000018328a460;
  uRam000000018328a680 = 0x5b7f;
  uVar8 = (~uRam000000018328a6c8 + 0xf6e18be5) *
          ((uRam000000018328a6b0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018328a6b0 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018328a588) + (uVar8 & uRam000000018328a588);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a300 =
       func_0x00018b144f80((uVar8 | 0x72c3a8c1) + (ulonglong)((uint)uVar8 & 0x72c3a8c1));
  uVar8 = (uRam000000018328a300 & 0x7fffffffffffffff) >> 1 |
          uRam000000018328a300 & 0x7fffffffffffffff;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = uRam000000018328a300 & 0x7fffffffffffffff ^ 0xf6e18be4 ^
          (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40;
  uRam000000018328a580 = (uRam000000018328a580 ^ uVar8) - 0xf6e18be4 ^ 0x114150f5ce7e3740;
  uRam000000018328a468 = (uRam000000018328a468 * 0x5bd60b54a6a55f75 ^ uRam000000018328a580) + uVar8;
  uRam000000018328a6d0 = uRam000000018328a468 ^ uRam000000018328a580;
  uRam000000018328a538 = 0x91e741c;
  uVar8 = (~uRam000000018328a370 + 0x91e741d) *
          ((uRam000000018328a848 ^ 0x72c3c446) +
          (ulonglong)((uint)uRam000000018328a848 & 0x72c3c446) * 2);
  uVar8 = (uVar8 | uRam000000018328a458) + (uVar8 & uRam000000018328a458);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a670 =
       func_0x00018b144f80((uVar8 | 0x7bddb05a) + (ulonglong)((uint)uVar8 & 0x7bddb05a));
  uVar8 = (uRam000000018328a670 & 0x7fffffffffffffff ^ 0xf6000000) & 0xfffffffffe000000;
  uRam000000018328a138 = uRam000000018328a350 ^ uVar8 ^ 0x100005b7f;
  uRam000000018328a6e0 = (uRam000000018328a6e0 ^ uVar8) + 0x100005b7f ^ 0x8ef20c5a8ce21ae4;
  uRam000000018328a648 = (uRam000000018328a648 * 0x79f92e1c56704f3f ^ uRam000000018328a6e0) + uVar8;
  uRam000000018328a330 = uRam000000018328a648 ^ uRam000000018328a6e0;
  uRam000000018328a200 = 0x5b7f;
  uVar8 = (~uRam000000018328a6a8 + 0xa28f9c41) *
          ((uRam000000018328a260 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018328a260 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018328a468) + (uVar8 & uRam000000018328a468);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a358 =
       func_0x00018b144f80((uVar8 | 0x26adbf65) + (ulonglong)((uint)uVar8 & 0x26adbf65));
  uRam000000018328a620 =
       (uRam000000018328a620 ^ uRam000000018328a880) - 0xa28f9c40 ^ 0x5722b521794b0619;
  uRam000000018328a6a0 =
       (uRam000000018328a6a0 * -0x321858e3b0d71f15 ^ uRam000000018328a620) + uRam000000018328a880;
  uRam000000018328a8d8 = uRam000000018328a6a0 ^ uRam000000018328a620;
  uRam000000018328a4c0 = 0x5d7063c0;
  uVar8 = (uRam000000018328a608 ^ _UNK_181a69070) + uRam000000018328a7b8 + 0x8422785a;
  uVar9 = (uRam000000018328a7b8 ^ _UNK_181a69078) + uRam000000018328a608 + 0xa28f9c40;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018328a608 ^ _UNK_181a69070;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018328a7b8 ^ _UNK_181a69078;
  uRam000000018328a7e8 =
       func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018328a608 + 0xa28f9c40) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018328a7b8 + 0x8422785a));
  uVar8 = (ulonglong)(((uint)uRam000000018328a7e8 ^ 0x4340) & 0x5b7f);
  uRam000000018328a7f0 = uRam000000018328a800 ^ uVar8 ^ 0xa28ff7bf;
  uRam000000018328a438 = (uRam000000018328a438 ^ uVar8) + 0xa28ff7bf ^ 0xcc8a07cbea8ee0ee;
  uRam000000018328a3f8 = (uRam000000018328a3f8 * 0x1af562e35231d0b3 ^ uRam000000018328a438) + uVar8;
  uRam000000018328a8d8 = uRam000000018328a3f8 ^ uRam000000018328a438;
  uRam000000018328a788 = 0xa28ff7bf;
  uVar8 = (~uRam000000018328a640 + 0x5d7063c1) *
          ((uRam000000018328a388 ^ 0x26add49a) +
          (ulonglong)((uint)uRam000000018328a388 & 0x26add49a) * 2);
  uVar8 = (uVar8 | uRam000000018328a538) + (uVar8 & uRam000000018328a538);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a868 =
       func_0x00018b144f80((uVar8 | 0x7bddb75a) + (ulonglong)((uint)uVar8 & 0x7bddb75a));
  uVar9 = _UNK_181a69088;
  uVar8 = _UNK_181a69080;
  uVar2 = uRam000000018328a868 ^ 0xa28ff7bf;
  uRam000000018328a450 = uRam000000018328a568 ^ uVar2 ^ 0x100005b7f;
  uRam000000018328a188 = (uRam000000018328a188 ^ uVar2) + 0x100005b7f ^ 0x5d5ad3b78c81fdc7;
  uRam000000018328a570 = (uRam000000018328a570 * -0x19c971c3ff1fa93d ^ uRam000000018328a188) + uVar2
  ;
  uRam000000018328a888 = uRam000000018328a570 ^ uRam000000018328a188;
  uRam000000018328a710 = 0x5b7f;
  uVar2 = (uRam000000018328a3f8 ^ _UNK_181a69080) + uRam000000018328a2b8 + 0x37f9ccfe;
  uVar10 = (uRam000000018328a2b8 ^ _UNK_181a69088) + uRam000000018328a3f8 + 0x68aa7fb3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018328a3f8 ^ _UNK_181a69080;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328a2b8 ^ _UNK_181a69088;
  uRam000000018328a2a8 =
       func_0x00018b144f80((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328a3f8 + 0x68aa7fb3) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018328a2b8 + 0x37f9ccfe));
  uVar2 = (uRam000000018328a2a8 ^ 0x498923361e345b21) << 0x19 |
          (uRam000000018328a2a8 ^ 0x498923361e345b21) >> 0x27;
  uRam000000018328a6d0 = (uRam000000018328a6d0 ^ uVar2) + 0xdb719068 ^ 0x9a50da2c45bf3754;
  uRam000000018328a540 = (uRam000000018328a540 * -0x231e1379ed1c5f9d ^ uRam000000018328a6d0) + uVar2
  ;
  uRam000000018328a720 = uRam000000018328a540 ^ uRam000000018328a6d0;
  uRam000000018328a530 = 0xdb719068;
  uVar2 = (uRam000000018328a668 ^ uVar8) + uRam000000018328a870 + 0x37f9ccfe;
  uVar10 = (uRam000000018328a870 ^ uVar9) + uRam000000018328a668 + 0x68aa7fb3;
  uVar8 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018328a668 ^ uVar8;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328a870 ^ uVar9;
  uRam000000018328a438 =
       func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018328a668 + 0x68aa7fb3) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018328a870 + 0x37f9ccfe));
  uRam000000018328a3e0 =
       (uRam000000018328a3e0 ^ uRam000000018328a8b8 & 0xfffffffff) + 0x208a6f93 ^ 0xeaf4888dc6f06269
  ;
  uRam000000018328a840 =
       (uRam000000018328a840 * -0xba8c244fdce2763 ^ uRam000000018328a3e0) +
       (uRam000000018328a8b8 & 0xfffffffff);
  uRam000000018328a1a8 = uRam000000018328a840 ^ uRam000000018328a3e0;
  uRam000000018328a820 = 0x208a6f93;
  uVar8 = (~uRam000000018328a630 + 0x100000000) *
          ((uRam000000018328a110 ^ 0x37f9ccfe) +
          (ulonglong)((uint)uRam000000018328a110 & 0x37f9ccfe) * 2);
  uVar8 = (uVar8 | uRam000000018328a368) + (uVar8 & uRam000000018328a368);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a8a0 =
       func_0x00018b144f80((uVar8 | 0xc8063301) + (ulonglong)((uint)uVar8 & 0xc8063301));
  uVar8 = (uRam000000018328a8a0 ^ 0xdbefda4c241025) & 0xffffffffffffff;
  uRam000000018328a450 = (uRam000000018328a450 ^ uVar8) + 0x4c241024 ^ 0x798b44dd3f541006;
  uRam000000018328a498 = (uRam000000018328a498 * 0x5ab592b90e6ea7e3 ^ uRam000000018328a450) + uVar8;
  uRam000000018328a400 = uRam000000018328a498 ^ uRam000000018328a450;
  uRam000000018328a350 = 0x4c241024;
  uVar8 = (~uRam000000018328a590 + 0x4c241025) *
          ((uRam000000018328a118 ^ 0x37f9ccfe) +
          (ulonglong)((uint)uRam000000018328a118 & 0x37f9ccfe) * 2);
  uVar8 = (uVar8 | uRam000000018328a2a0) + (uVar8 & uRam000000018328a2a0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a130 =
       func_0x00018b144f80((uVar8 | 0x7bdddcda) + (ulonglong)((uint)uVar8 & 0x7bdddcda));
  uVar3 = ~(uint)uRam000000018328a130 & 0xb3dbefdb;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar8 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          (ulonglong)~(uint)uRam000000018328a130) & 0xffffffff80000000;
  uRam000000018328a470 = uRam000000018328a470 ^ uVar8 ^ 0x46fb57848a1635d1;
  uRam000000018328a2f8 = (uRam000000018328a2f8 * 0x1cc6495f5ae87487 ^ uRam000000018328a470) + uVar8;
  uRam000000018328a298 = uRam000000018328a2f8 ^ uRam000000018328a470;
  uRam000000018328a180 = uRam000000018328a210;
  uRam000000018328a278 = 0;
  uVar8 = (uRam000000018328a580 ^ _UNK_181a69090) + uRam000000018328a8b8 + 0x7334cbd;
  uVar9 = (uRam000000018328a8b8 ^ _UNK_181a69098) + uRam000000018328a580 + 0x83116f98;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018328a580 ^ _UNK_181a69090;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018328a8b8 ^ _UNK_181a69098;
  uVar8 = func_0x00018b144f80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018328a580 + 0x83116f98)
                              ^ (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018328a8b8 + 0x7334cbd)
                             );
  uRam000000018328a7b8 = uRam000000018328a7b8 ^ uVar8 ^ 0x83116f98 ^ 0x4e195823e32af0dc;
  uRam000000018328a830 =
       (uRam000000018328a830 * 0x1cfd15e493433f2f ^ uRam000000018328a7b8) + (uVar8 ^ 0x83116f98);
  uRam000000018328a758 = uRam000000018328a830 ^ uRam000000018328a7b8;
  uRam000000018328a218 = 0;
  uVar8 = (~uRam000000018328a100 + 0x5b80) *
          ((uVar6 ^ 0x84222325 ^ uRam000000018328a738) +
          (ulonglong)((uint)uRam000000018328a738 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar8 = (uVar8 | uRam000000018328a718) + (uVar8 & uRam000000018328a718);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018328a258 =
       func_0x00018b144f80((uVar6 ^ 0x8422785a | uVar8) +
                           (ulonglong)((uint)(uVar6 ^ 0x8422785a) & (uint)uVar8));
  lVar7 = uVar6 - ((uint)uVar5 & 0x5b7f) * 2;
  uRam000000018328a118 =
       (uRam000000018328a118 ^ uRam000000018328a258 & 0xffffffffc0000000) + lVar7 + 0x5b7f ^
       0x29a5a3335a8f40c9;
  uRam000000018328a6c0 =
       (uRam000000018328a6c0 * -0x2a1487dd1dd35fb5 ^ uRam000000018328a118) +
       (uRam000000018328a258 & 0xffffffffc0000000);
  uRam000000018328a768 = uRam000000018328a6c0 ^ uRam000000018328a118;
  uRam000000018328a800 = lVar7 + 0x5b7fU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13f80,0x322);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b1404b9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a67688 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fy; aRO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18b145010, runtime 6ffff2d55010) =====

void FUN_18b145010(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018b14504c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a69200 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fy; aRP (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18b145f00, runtime 6ffff2d55f00) =====

void FUN_18b145f00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b145f7d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a69740 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fy; aRQ (IJ)I (handler @ image 18b1489c0, runtime 6ffff2d589c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1489c0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar5 = (~uRam000000018328a9f8 + 0xb3e5a8c0ae25d912) *
          ((uRam000000018328a958 ^ 0xbd861e75992613f0) +
          (uRam000000018328a958 & 0x3d861e75992613f0) * 2);
  uVar5 = (uVar5 | uRam000000018328aa30) + (uVar5 & uRam000000018328aa30);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018328aa60 =
       func_0x00018b153e70((uVar5 | 0xe63b6b53703cae1) + (uVar5 & 0xe63b6b53703cae1));
  uRam000000018328aae8 =
       (uRam000000018328aae8 ^ uRam000000018328aa60 ^ 0xbfe7bef5bf25f9d5) + 0xbfe7bef5bf25f9d5 ^
       0x2d19821cebfa9280;
  uRam000000018328a9b0 =
       (uRam000000018328a9b0 * 0x76e255287f93baf9 ^ uRam000000018328aae8) +
       (uRam000000018328aa60 ^ 0xbfe7bef5bf25f9d5);
  uRam000000018328a968 = uRam000000018328a9b0 ^ uRam000000018328aae8;
  uRam000000018328a938 = -0x4018410a40da062b;
  uRam000000018328aa20 = func_0x00018b153e70(uRam000000018328aaa8 + 0xb655fc7bfac7a1ff ^ 0xf9);
  uRam000000018328a970 =
       (uRam000000018328a970 ^ uRam000000018328aa20) + 0xff033784ffbb77a1 ^ 0x701d6c246cb2cfa6;
  uRam000000018328aa18 =
       (uRam000000018328aa18 * -0x15d2744591269ee5 ^ uRam000000018328a970) + uRam000000018328aa20;
  uRam000000018328a990 = uRam000000018328aa18 ^ uRam000000018328a970;
  uRam000000018328a960 = 0xff033784ffbb77a1;
  uVar5 = (uRam000000018328aa58 ^ _UNK_181a6c4a0) + uRam000000018328aa48 + 0xfcc87b84672b7b;
  uVar10 = (uRam000000018328aa48 ^ _UNK_181a6c4a8) + uRam000000018328aa58 + 0xff033784ffbb77a1;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328aa58 ^ _UNK_181a6c4a0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aa48 ^ _UNK_181a6c4a8;
  uRam000000018328aa00 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018328aa58 + 0xff033784ffbb77a1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018328aa48 + 0xfcc87b84672b7b));
  uRam000000018328a900 = uRam000000018328a9b8 ^ uRam000000018328aa98 ^ 0x7fff;
  uRam000000018328aa40 = (uRam000000018328aa40 ^ uRam000000018328aa98) + 0x7fff ^ 0xc9e982dea6bfeb93
  ;
  uRam000000018328a970 =
       (uRam000000018328a970 * 0x6a237240afce308b ^ uRam000000018328aa40) + uRam000000018328aa98;
  uRam000000018328aab0 = uRam000000018328a970 ^ uRam000000018328aa40;
  uRam000000018328a950 = 0x7fff;
  uVar5 = (uRam000000018328a948 ^ _UNK_181a6c4b0) + uRam000000018328aa40 + 0x40e4a1f0025d229e;
  uVar10 = (uRam000000018328aa40 ^ _UNK_181a6c4b8) + uRam000000018328a948 + 0xbf1b5e0f79817e44;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328a948 ^ _UNK_181a6c4b0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aa40 ^ _UNK_181a6c4b8;
  uRam000000018328a9c8 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018328a948 + 0xbf1b5e0f79817e44) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018328aa40 + 0x40e4a1f0025d229e));
  uVar5 = uRam000000018328a9c8 ^ 0xffffffffffff7fff;
  uVar10 = uVar5 >> 1 | uVar5;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uRam000000018328aa18 = uRam000000018328aa28 ^ uVar5 ^ 0x7fff;
  uRam000000018328a9f0 = (uRam000000018328a9f0 ^ uVar5) + 0x7fff ^ 0xd10673868aa07fd0;
  uRam000000018328aaa8 = (uRam000000018328aaa8 * -0x74448c01dd71f31b ^ uRam000000018328a9f0) + uVar5
  ;
  uRam000000018328a960 = uRam000000018328aaa8 ^ uRam000000018328a9f0;
  uRam000000018328aac8 = 0x7fff;
  uVar5 = (~uRam000000018328aa60 + 0xc8c185240eb21d7f) *
          ((uRam000000018328a940 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018328a940 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018328aa80) + (uVar5 & uRam000000018328aa80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018328aa80 =
       func_0x00018b153e70((uVar5 | 0xc8c185248a9041a4) + (uVar5 & 0xc8c185248a9041a4));
  uVar10 = _UNK_181a6c4c8;
  uVar5 = _UNK_181a6c4c0;
  uVar3 = uRam000000018328aa80 << 0x2c | uRam000000018328aa80 >> 0x14;
  uRam000000018328a990 = uRam000000018328aa48 ^ uVar3 ^ 0xc8c185240eb29d7d;
  uRam000000018328aaf0 = (uRam000000018328aaf0 ^ uVar3) + 0xc8c185240eb29d7d ^ 0xb1fade6d6d90859b;
  uRam000000018328aa90 = (uRam000000018328aa90 * -0x36c9baeebafc49a7 ^ uRam000000018328aaf0) + uVar3
  ;
  uRam000000018328a948 = uRam000000018328aa90 ^ uRam000000018328aaf0;
  uRam000000018328aa78 = 0xc8c185240eb29d7d;
  uVar3 = (uRam000000018328aab8 ^ _UNK_181a6c4c0) + uRam000000018328aab8 + 0xbfe7bef53b07daf0;
  uVar11 = (uRam000000018328aab8 ^ _UNK_181a6c4c8) + uRam000000018328aab8 + 0xcd3ea05c17b5b593;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018328aab8 ^ _UNK_181a6c4c0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018328aab8 ^ _UNK_181a6c4c8;
  uRam000000018328aa00 =
       func_0x00018b153e70((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam000000018328aab8 + 0xcd3ea05c17b5b593) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018328aab8 + 0xbfe7bef53b07daf0));
  uRam000000018328aa08 = uRam000000018328a9a8 ^ uRam000000018328aa00 ^ 0x8d265f51d6dbaf68;
  uRam000000018328a9f8 =
       (uRam000000018328a9f8 ^ uRam000000018328aa00) + 0x8d265f51d6dbaf68 ^ 0x459155215726b3e0;
  uRam000000018328a948 =
       (uRam000000018328a948 * 0x23ac51702a11f86f ^ uRam000000018328a9f8) + uRam000000018328aa00;
  uRam000000018328aa80 = uRam000000018328a948 ^ uRam000000018328a9f8;
  uRam000000018328aa60 = 0x8d265f51d6dbaf68;
  uVar3 = (~uRam000000018328aad0 + 0xcd3ea05c17b5b594) *
          ((uRam000000018328a9b8 ^ 0xbfe7bef53b07daf0) +
          (uRam000000018328a9b8 & 0x3fe7bef53b07daf0) * 2);
  uVar3 = (uVar3 | uRam000000018328aa08) + (uVar3 & uRam000000018328aa08);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018328aad8 =
       func_0x00018b153e70((uVar3 | 0x72d91ea92cb26f63) + (uVar3 & 0x72d91ea92cb26f63));
  uVar3 = uRam000000018328aad8 >> 1 | uRam000000018328aad8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam000000018328aad8) & 0x7fffffffffffffff;
  uRam000000018328a9d8 = (uRam000000018328a9d8 ^ uVar3) + 0x72d91ea9a8904c46 ^ 0x454a7a76479bc01b;
  uRam000000018328a9f8 = (uRam000000018328a9f8 * -0x7fd99991d97d1421 ^ uRam000000018328a9d8) + uVar3
  ;
  uRam000000018328aa00 = uRam000000018328a9f8 ^ uRam000000018328a9d8;
  uRam000000018328aa50 = 0x72d91ea9a8904c46;
  uVar3 = (uRam000000018328a958 ^ uVar5) + uRam000000018328aa18 + 0xbfe7bef53b07daf0;
  uVar11 = (uRam000000018328aa18 ^ uVar10) + uRam000000018328a958 + 0xcd3ea05c17b5b593;
  uVar5 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018328a958 ^ uVar5;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018328aa18 ^ uVar10;
  uRam000000018328aa20 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018328a958 + 0xcd3ea05c17b5b593) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018328aa18 + 0xbfe7bef53b07daf0));
  uRam000000018328a978 =
       (uRam000000018328a978 ^ uRam000000018328aa20 ^ 0xbfe7bef5bf25f9d5) + 0x8d26a0541725b191 ^
       0x1b5045ae869516af;
  uRam000000018328a908 =
       (uRam000000018328a908 * -0x882b43e2bc0df1 ^ uRam000000018328a978) +
       (uRam000000018328aa20 ^ 0xbfe7bef5bf25f9d5);
  uRam000000018328a9b8 = uRam000000018328a908 ^ uRam000000018328a978;
  uRam000000018328aa40 = 0x8d26a0541725b191;
  uVar5 = (uRam000000018328aaf8 ^ _UNK_181a6c4d0) + uRam000000018328a900 + 0x72d91ea92cb26f63;
  uVar10 = (uRam000000018328a900 ^ _UNK_181a6c4d8) + uRam000000018328aaf8 + 0x1a4d40a82e4b6322;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328aaf8 ^ _UNK_181a6c4d0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328a900 ^ _UNK_181a6c4d8;
  uRam000000018328aa38 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018328aaf8 + 0x1a4d40a82e4b6322) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018328a900 + 0x72d91ea92cb26f63));
  uVar5 = uRam000000018328aa38 ^ 0x1c58920ab5bb7f0a;
  uRam000000018328aa80 = uRam000000018328a9a0 ^ uVar5 ^ 0x8d265f51d6dbaf68;
  uRam000000018328aa10 = (uRam000000018328aa10 ^ uVar5) + 0x8d265f51d6dbaf68 ^ 0xb85b219316457087;
  uRam000000018328a9c0 = (uRam000000018328a9c0 * -0x6626e0c2f91f4dbf ^ uRam000000018328aa10) + uVar5
  ;
  uRam000000018328aa60 = uRam000000018328a9c0 ^ uRam000000018328aa10;
  uRam000000018328aab0 = 0x8d265f51d6dbaf68;
  uRam000000018328aa00 = func_0x00018b153e70(uRam000000018328aa60 + 0xffdeff7be4ffddff ^ 0xb0);
  uVar5 = uRam000000018328aa00 >> 1 | uRam000000018328aa00;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam000000018328a980 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40;
  uRam000000018328aa00 = uRam000000018328a980 ^ uRam000000018328aa00;
  uRam000000018328a980 = uRam000000018328a980 ^ 0xbbb1cf65915c506;
  uRam000000018328a9f0 =
       (uRam000000018328a9f0 * 0x765e3dfbe1e941b1 ^ uRam000000018328a980) + uRam000000018328aa00;
  uRam000000018328aa78 = uRam000000018328a9f0 ^ uRam000000018328a980;
  uRam000000018328a950 = 0;
  uRam000000018328a9b0 = func_0x00018b153e70(uRam000000018328a9d8 ^ 0xffdbff7c46001db3);
  uVar5 = (ulonglong)(~(uint)uRam000000018328a9b0 & 0x7fff);
  uRam000000018328a920 = uRam000000018328a900 ^ uVar5 ^ 0x7fff;
  uRam000000018328a900 = (uRam000000018328a900 ^ uVar5) + 0x7fff ^ 0x136c1d9e826eac4a;
  uRam000000018328aa90 = (uRam000000018328aa90 * 0x2e15279479a75ffb ^ uRam000000018328a900) + uVar5;
  uRam000000018328a9c0 = uRam000000018328aa90 ^ uRam000000018328a900;
  uRam000000018328aaf8 = 0x7fff;
  uRam000000018328a908 = func_0x00018b153e70(uRam000000018328a990 ^ 0xf9e507bbf0be68a7);
  uVar5 = (uRam000000018328a908 ^ 0x4018410a40da062b) & 0x7fffffffffffffff;
  uRam000000018328aa80 = (uRam000000018328aa80 ^ uVar5) + 0x4018410a40da062a ^ 0x9eb2fb6f7ed09e8b;
  uRam000000018328aad0 = (uRam000000018328aad0 * -0x4885014a08135a29 ^ uRam000000018328aa80) + uVar5
  ;
  uRam000000018328aaf8 = uRam000000018328aad0 ^ uRam000000018328aa80;
  uRam000000018328a990 = 0x4018410a40da062a;
  uVar5 = (uRam000000018328a998 ^ _UNK_181a6c4e0) + uRam000000018328aa78 + 0xbfe7bef53b07daf0;
  uVar10 = (uRam000000018328aa78 ^ _UNK_181a6c4e8) + uRam000000018328a998 + 0x4018410a40da062a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328a998 ^ _UNK_181a6c4e0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aa78 ^ _UNK_181a6c4e8;
  uRam000000018328aaa8 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018328a998 + 0x4018410a40da062a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018328aa78 + 0xbfe7bef53b07daf0));
  uRam000000018328aa90 =
       uRam000000018328aa90 ^ uRam000000018328aaa8 ^ 0xbfe7bef5bf25f9d5 ^ 0xc3342250e5d10e9;
  uRam000000018328a990 =
       (uRam000000018328a990 * 0x699678e476fe5661 ^ uRam000000018328aa90) +
       (uRam000000018328aaa8 ^ 0xbfe7bef5bf25f9d5);
  uRam000000018328a978 = uRam000000018328a990 ^ uRam000000018328aa90;
  uRam000000018328aaa0 = 0;
  uVar5 = func_0x00018b153e70(uRam000000018328aaf8 ^ 0xffbc007c29ffddff);
  uRam000000018328a920 = (uVar5 << 0xc | uVar5 >> 0x34) ^ 0x7fff;
  uRam000000018328aab8 = uRam000000018328aa28 ^ uRam000000018328a920 ^ 0x7fff;
  uRam000000018328aae0 = (uRam000000018328aae0 ^ uRam000000018328a920) + 0x7fff ^ 0x3b59cb18396f0987
  ;
  uRam000000018328a920 = (uVar5 * 0x1cb0ad8949d03ff3 ^ uRam000000018328aae0) + uRam000000018328a920;
  uRam000000018328a980 = uRam000000018328a920 ^ uRam000000018328aae0;
  uRam000000018328aa40 = 0x7fff;
  uRam000000018328a910 = func_0x00018b153e70(0x340083ca005de1);
  auVar9 = _UNK_1800170c0;
  uVar5 = uRam000000018328a910 & 0x1fffffffffff;
  uRam000000018328aaf0 = uRam000000018328a9f8 ^ uVar5 ^ 0x7fff;
  uRam000000018328a908 = (uRam000000018328a908 ^ uVar5) + 0x7fff ^ 0xf18ce5aa3d10810;
  uRam000000018328aa48 = (uRam000000018328aa48 * -0x4e333b78f6dfc03f ^ uRam000000018328a908) + uVar5
  ;
  uRam000000018328a918 = uRam000000018328aa48 ^ uRam000000018328a908;
  auVar7._8_8_ = _UNK_18019c088;
  auVar7._0_8_ = param_4 ^ 0x84222325;
  uRam000000018328a9a8 = 0x7fff;
  auVar8 = pshufb(auVar7 ^ _UNK_181a6c4f0,_UNK_1800170c0);
  uVar10 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar10 + uRam000000018328aa88;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam000000018328a958 ^ uVar10;
  }
  uRam000000018328a930 = func_0x00018b153e70(SUB161(auVar7 ^ _UNK_181a6c4f0,5) ^ uVar5);
  uVar5 = (uRam000000018328a930 & 0x3ffffffffffff) - (uRam000000018328a930 >> 1 & 0x1555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018328a930 & 0x3ffffffffffff;
  uVar4 = (uint)param_4 & 0x7fff;
  uVar3 = (ulonglong)uVar4;
  uRam000000018328a918 = (uRam000000018328a918 ^ uVar5) + uVar3 ^ 0x270813a9144691cc;
  uRam000000018328a980 = (uRam000000018328a980 * -0x7217a4699c731d93 ^ uRam000000018328a918) + uVar5
  ;
  uRam000000018328a960 = uRam000000018328a980 ^ uRam000000018328a918;
  uVar10 = (ulonglong)param_3;
  uVar5 = uVar3 ^ 0x84222325 ^ uRam000000018328aa08;
  lVar6 = (uVar3 ^ 0x84222325) + uRam000000018328a9d0;
  uVar11 = uVar5 + lVar6;
  uVar12 = (uVar10 ^ uRam000000018328a9d0) + uRam000000018328aa08 + uVar10;
  uVar5 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar5;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar10 ^ uRam000000018328a9d0;
  uRam000000018328a940 = uVar3;
  uRam000000018328aa58 =
       func_0x00018b153e70((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018328aa08 + uVar10) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar3 = (uVar3 + uVar10) - (ulonglong)((param_3 & uVar4) * 2);
  uRam000000018328a9e0 =
       (uRam000000018328a9e0 ^ uRam000000018328aa58 & 0xfffffffffffffc00) + uVar3 ^
       0x86e6980f5a9304b3;
  uRam000000018328aa10 =
       (uRam000000018328aac0 * -0x34bf7c76cf93466b ^ uRam000000018328a9e0) +
       (uRam000000018328aa58 & 0xfffffffffffffc00) ^ uRam000000018328a9e0;
  uRam000000018328aac0 = uRam000000018328a920 ^ uVar3;
  uVar3 = uVar3 & 0xffffffff;
  uVar5 = (uRam000000018328aaa0 ^ _UNK_181a6c500) + uRam000000018328a9b8 + 0x8e2977e6;
  uVar10 = (uRam000000018328a9b8 ^ _UNK_181a6c508) + uRam000000018328aaa0 + 0xc778f330;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328aaa0 ^ _UNK_181a6c500;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328a9b8 ^ _UNK_181a6c508;
  uRam000000018328aa00 = uVar3;
  uRam000000018328aa40 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328aaa0 + 0xc778f330) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328a9b8 + 0x8e2977e6));
  uRam000000018328a9e0 =
       (uRam000000018328a9e0 ^ uRam000000018328aa40) + 0xcf7bf7f3 ^ 0x76908e70134d5cd3;
  uRam000000018328a938 =
       (uRam000000018328a938 * -0x345829cbf22954ed ^ uRam000000018328a9e0) + uRam000000018328aa40;
  uRam000000018328aa08 = uRam000000018328a938 ^ uRam000000018328a9e0;
  uRam000000018328aa20 = 0xcf7bf7f3;
  uVar5 = (uRam000000018328a980 ^ _UNK_181a6c510) + uRam000000018328a9d8 + 0xfba3296;
  uVar10 = (uRam000000018328a9d8 ^ _UNK_181a6c518) + uRam000000018328a980 + 0x6c32bd63;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328a980 ^ _UNK_181a6c510;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328a9d8 ^ _UNK_181a6c518;
  uRam000000018328aa20 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328a980 + 0x6c32bd63) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328a9d8 + 0xfba3296));
  uVar5 = (uRam000000018328aa20 & 0xfffffffffff) >> 1 | uRam000000018328aa20 & 0xfffffffffff;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam000000018328aa20 & 0xfffffffffff;
  uRam000000018328aaa8 = (uRam000000018328aaa8 ^ uVar5) + 0xe7aaacd0 ^ 0x656ff428281450d;
  uRam000000018328aad8 = (uRam000000018328aad8 * 0x14dbef487fad6961 ^ uRam000000018328aaa8) + uVar5;
  uRam000000018328aaf0 = uRam000000018328aad8 ^ uRam000000018328aaa8;
  uRam000000018328a9f0 = 0xe7aaacd0;
  uVar5 = (uRam000000018328a968 ^ _UNK_181a6c520) + uRam000000018328aa98 + 0x84222325;
  uVar10 = (uRam000000018328aa98 ^ _UNK_181a6c528) + uRam000000018328a968 + 0xb4cf76d2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328a968 ^ _UNK_181a6c520;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aa98 ^ _UNK_181a6c528;
  uRam000000018328aae8 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328a968 + 0xb4cf76d2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328aa98 + 0x84222325));
  uRam000000018328a9e0 =
       (uRam000000018328a9e0 ^ uRam000000018328aae8) - 0xb4cf76d2 ^ 0x6fc67709af3daed0;
  uRam000000018328aae8 =
       (uRam000000018328aae8 * -0x20ff722c97606305 ^ uRam000000018328a9e0) + uRam000000018328aae8;
  uRam000000018328aa08 = uRam000000018328aae8 ^ uRam000000018328a9e0;
  uRam000000018328aaa8 = 0x4b30892e;
  uVar5 = (uRam000000018328aa78 ^ _UNK_181a6c530) + uRam000000018328a9c0 + 0x84220854;
  uVar10 = (uRam000000018328a9c0 ^ _UNK_181a6c538) + uRam000000018328aa78 + 0xb4cf76d2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328aa78 ^ _UNK_181a6c530;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328a9c0 ^ _UNK_181a6c538;
  uRam000000018328aae0 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328aa78 + 0xb4cf76d2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328a9c0 + 0x84220854));
  uRam000000018328a9e0 =
       (uRam000000018328a9e0 ^ uRam000000018328aae0 * 0x5994bc2e5b083e8f) + 0xb4cfa243 ^
       0x3cc0c5bf70c68065;
  uRam000000018328a9d8 =
       (uRam000000018328a9d8 * 0x1836e3062a01b9db ^ uRam000000018328a9e0) +
       uRam000000018328aae0 * 0x5994bc2e5b083e8f;
  uRam000000018328aa98 = uRam000000018328a9d8 ^ uRam000000018328a9e0;
  uRam000000018328aa38 = 0xb4cfa243;
  uVar5 = (uRam000000018328a9b8 ^ _UNK_181a6c540) + uRam000000018328aa28 + 0x30ed8166;
  uVar10 = (uRam000000018328aa28 ^ _UNK_181a6c548) + uRam000000018328a9b8 + 0x4b30892e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328a9b8 ^ _UNK_181a6c540;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aa28 ^ _UNK_181a6c548;
  uRam000000018328aa50 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328a9b8 + 0x4b30892e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328aa28 + 0x30ed8166));
  uRam000000018328aa90 = uRam000000018328aa98 ^ uRam000000018328aa50 ^ 0x100002b71;
  uRam000000018328aab8 =
       (uRam000000018328aab8 ^ uRam000000018328aa50) + 0x100002b71 ^ 0x3b15a548334458f1;
  uRam000000018328a9a8 =
       (uRam000000018328a9a8 * 0x4292c16f66390043 ^ uRam000000018328aab8) + uRam000000018328aa50;
  uRam000000018328aa68 = uRam000000018328a9a8 ^ uRam000000018328aab8;
  uRam000000018328a910 = 0x2b71;
  uRam000000018328a9f0 = func_0x00018b153e70(uRam000000018328a968 + 0xff5b001df4ffddff ^ 0x6f);
  uVar5 = uRam000000018328a9f0 - (uRam000000018328a9f0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (((uint)bVar1 + (uint)bVar1 ^ uRam000000018328a9f0) & 0x1fffffffffff) << 10 |
          uRam000000018328a9f0 >> 0x36;
  uRam000000018328aa20 = (uRam000000018328aa20 ^ uVar5) - 0xaa0c8c3a ^ 0xccf89162fb931273;
  uRam000000018328aa60 = (uRam000000018328aa60 * -0x4897e56f6b360cdf ^ uRam000000018328aa20) + uVar5
  ;
  uRam000000018328a908 = uRam000000018328aa60 ^ uRam000000018328aa20;
  uRam000000018328aad0 = 0x55f373c6;
  uVar5 = (~uRam000000018328aa88 + 0xaa0c8c3b) *
          ((uRam000000018328a9b8 ^ 0x84220854) +
          (ulonglong)((uint)uRam000000018328a9b8 & 0x84220854) * 2);
  uVar5 = (uVar5 | uRam000000018328aa00) + (uVar5 & uRam000000018328aa00);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018328a950 =
       func_0x00018b153e70((uVar5 | 0x2e2e846e) + (ulonglong)((uint)uVar5 & 0x2e2e846e));
  uVar5 = uRam000000018328a950 ^ 0x2b71;
  uVar10 = uVar5 >> 1 | uVar5;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar5;
  uRam000000018328aac8 = uRam000000018328aa40 ^ uVar5 ^ 0xaa0cb7ab;
  uRam000000018328aad8 = (uRam000000018328aad8 ^ uVar5) + 0xaa0cb7ab ^ 0xbf1bd0d00c8b04f4;
  uRam000000018328aa88 = (uRam000000018328aa88 * -0x6c41dd9fa9900bb7 ^ uRam000000018328aad8) + uVar5
  ;
  uRam000000018328a9a8 = uRam000000018328aa88 ^ uRam000000018328aad8;
  uRam000000018328a9d0 = 0xaa0cb7ab;
  uVar5 = (~uRam000000018328a920 + 0x55f373c7) *
          ((uRam000000018328aa30 ^ 0x2e2e948e) +
          (ulonglong)((uint)uRam000000018328aa30 & 0x2e2e948e) * 2);
  uVar5 = (uVar5 | uRam000000018328aa28) + (uVar5 & uRam000000018328aa28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018328a970 =
       func_0x00018b153e70((uVar5 | 0x7bdde748) + (ulonglong)((uint)uVar5 & 0x7bdde748));
  uVar5 = (uRam000000018328a970 ^ 0x3917eff55aa8df42) & 0x7fffffffffffffff;
  uVar10 = ((uRam000000018328a970 ^ 0x3917eff55aa8df42) & 0x7fffffffffffffff) >> 1 | uVar5;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uVar5;
  uRam000000018328a928 = uRam000000018328aa48 ^ uVar5 ^ 0x100002b71;
  uRam000000018328aad0 = (uRam000000018328a958 ^ uVar5) + 0x100002b71 ^ 0x26d5178822c966df;
  uRam000000018328a958 = (uRam000000018328a958 * 0x26211006c891ff95 ^ uRam000000018328aad0) + uVar5;
  uRam000000018328aad0 = uRam000000018328a958 ^ uRam000000018328aad0;
  uRam000000018328a9b0 = 0x2b71;
  uVar5 = (~uRam000000018328aa30 + 0xec17dcdc) *
          ((uRam000000018328a908 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018328a908 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018328a908) + (uVar5 & uRam000000018328a908);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018328aaa8 =
       func_0x00018b153e70((uVar5 | 0x6835fffe) + (ulonglong)((uint)uVar5 & 0x6835fffe));
  uRam000000018328a9d0 =
       (uRam000000018328a9d0 ^ uRam000000018328aaa8) - 0xec17dcdb ^ 0x932de7bff123a7b7;
  uRam000000018328a9e8 =
       (uRam000000018328a9e8 * 0x3222b529061157dd ^ uRam000000018328a9d0) + uRam000000018328aaa8 ^
       uRam000000018328a9d0;
  uRam000000018328a910 = 0x13e82325;
  uVar5 = (uRam000000018328aa48 ^ _UNK_181a6c550) + uRam000000018328aa50 + 0x84220854;
  uVar10 = (uRam000000018328aa50 ^ _UNK_181a6c558) + uRam000000018328aa48 + 0xec17dcdb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328aa48 ^ _UNK_181a6c550;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aa50 ^ _UNK_181a6c558;
  uRam000000018328aa38 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328aa48 + 0xec17dcdb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328aa50 + 0x84220854));
  uVar5 = uRam000000018328aa38 & 0x7fffffffffffffff;
  uRam000000018328aa68 = uRam000000018328a9d0 ^ uVar5 ^ 0xec18084c;
  uRam000000018328a978 = (uRam000000018328a978 ^ uVar5) + 0xec18084c ^ 0x626da09addb5087b;
  uRam000000018328aa40 = (uRam000000018328aa40 * -0x5defc6abf3661687 ^ uRam000000018328a978) + uVar5
  ;
  uRam000000018328aa78 = uRam000000018328aa40 ^ uRam000000018328a978;
  uRam000000018328aa60 = 0xec18084c;
  uVar5 = (uRam000000018328aa00 ^ _UNK_181a6c560) + uRam000000018328aa30 + 0x683a2b69;
  uVar10 = (uRam000000018328aa30 ^ _UNK_181a6c568) + uRam000000018328aa00 + 0x13e82325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328aa00 ^ _UNK_181a6c560;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aa30 ^ _UNK_181a6c568;
  uRam000000018328a918 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328aa00 + 0x13e82325) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328aa30 + 0x683a2b69));
  uVar5 = (uRam000000018328a918 ^ 0xec18084c) & 0x7fffffffffffffff;
  uRam000000018328a990 = uRam000000018328a9b8 ^ uVar5 ^ 0x100002b71;
  uRam000000018328aa80 = (uRam000000018328aa80 ^ uVar5) + 0x100002b71 ^ 0xb6f5f470633ae12f;
  uRam000000018328aa40 = (uRam000000018328aa40 * -0x2aacdbcb26f00e8d ^ uRam000000018328aa80) + uVar5
  ;
  uRam000000018328aab0 = uRam000000018328aa40 ^ uRam000000018328aa80;
  uRam000000018328aa00 = 0x2b71;
  uVar5 = (uRam000000018328aac0 ^ _UNK_181a6c570) + uRam000000018328aaf8 + 0x4b59d4d6;
  uVar10 = (uRam000000018328aaf8 ^ _UNK_181a6c578) + uRam000000018328aac0 + 0xe7aaacd0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328aac0 ^ _UNK_181a6c570;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aaf8 ^ _UNK_181a6c578;
  uRam000000018328aa08 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328aac0 + 0xe7aaacd0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328aaf8 + 0x4b59d4d6));
  uVar5 = uRam000000018328aa08 & 0x7fffffffffffff;
  uRam000000018328a918 = uRam000000018328a9a0 ^ uVar5 ^ 0x1b726a4c3;
  uRam000000018328a990 = (uRam000000018328aa70 ^ uVar5) + 0x1b726a4c3 ^ 0xd8e25ae81cf0d48f;
  uRam000000018328aa70 = (uRam000000018328aa70 * 0x126b67651532e595 ^ uRam000000018328a990) + uVar5;
  uRam000000018328a990 = uRam000000018328aa70 ^ uRam000000018328a990;
  uRam000000018328aae8 = 0xb726a4c3;
  uVar5 = (~uRam000000018328aaa8 + 0xe7aaacd1) *
          ((uRam000000018328aa00 ^ 0x4b59d4d6) +
          (ulonglong)((uint)uRam000000018328aa00 & 0x4b59d4d6) * 2);
  uVar5 = (uVar5 | uRam000000018328aa18) + (uVar5 & uRam000000018328aa18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018328a9f8 =
       func_0x00018b153e70((uVar5 | 0xacf37806) + (ulonglong)((uint)uVar5 & 0xacf37806));
  uVar5 = (uRam000000018328a9f8 ^ 0xcf7bf7f3) << 0x16 | uRam000000018328a9f8 >> 0x2a;
  uRam000000018328a940 = (uRam000000018328a940 ^ uVar5) + 0x28d15b23 ^ 0xab18fbf5631b9d3f;
  uRam000000018328a9f0 = (uRam000000018328a9f0 * 0x94f617ca18d1597 ^ uRam000000018328a940) + uVar5;
  uRam000000018328a950 = uRam000000018328a9f0 ^ uRam000000018328a940;
  uRam000000018328aa48 = 0x28d15b23;
  uRam000000018328aac0 = func_0x00018b153e70(uRam000000018328a9e0 + 0xffdcff7be30021ff ^ 0x55);
  uRam000000018328a908 = uRam000000018328a920;
  uRam000000018328a9a8 = uRam000000018328a9a8 ^ uRam000000018328a920 ^ 0xc9f70ab536984d6e;
  uRam000000018328a910 =
       (uRam000000018328a910 * 0x1be48d1ab9b3df89 ^ uRam000000018328a9a8) + uRam000000018328a920;
  uRam000000018328a968 = uRam000000018328a910 ^ uRam000000018328a9a8;
  uRam000000018328a980 = 0;
  uVar5 = (uRam000000018328aab8 ^ _UNK_181a6c580) + uRam000000018328aae8 + 0x4b59d4d6;
  uVar10 = (uRam000000018328aae8 ^ _UNK_181a6c588) + uRam000000018328aab8 + 0x3084080c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018328aab8 ^ _UNK_181a6c580;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018328aae8 ^ _UNK_181a6c588;
  uRam000000018328a9e0 =
       func_0x00018b153e70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018328aab8 + 0x3084080c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018328aae8 + 0x4b59d4d6));
  uRam000000018328a9f0 = uRam000000018328a9f0 ^ uRam000000018328a910 ^ 0x9ce37273ae0c4c7f;
  uRam000000018328aaf0 =
       (uRam000000018328aaf0 * 0x721c20e1171085ad ^ uRam000000018328a9f0) + uRam000000018328a910;
  uRam000000018328aa88 = uRam000000018328aaf0 ^ uRam000000018328a9f0;
  uRam000000018328a910 = 0;
  uRam000000018328a980 = func_0x00018b153e70(uRam000000018328aa80 ^ 0xfff7ff83ac001d0a);
  uVar5 = (uRam000000018328a980 << 0x20 | uRam000000018328a980 >> 0x20) >> 10 |
          (uRam000000018328a980 >> 0x20) << 0x36;
  uRam000000018328aaa0 = uRam000000018328aab8 ^ uVar5 ^ 0x2b71;
  uRam000000018328a910 = (uRam000000018328a910 ^ uVar5) + 0x2b71 ^ 0xd28f40312cc99bc4;
  uRam000000018328aa30 = (uRam000000018328aa30 * -0x109daec515c30a1d ^ uRam000000018328a910) + uVar5
  ;
  uRam000000018328a950 = uRam000000018328aa30 ^ uRam000000018328a910;
  uRam000000018328a9c0 = 0x2b71;
  uVar5 = (~uRam000000018328a9a0 + 0xa0b54c4) *
          ((uRam000000018328a9d8 ^ 0x8e2977e6) +
          (ulonglong)((uint)uRam000000018328a9d8 & 0x8e2977e6) * 2);
  uVar5 = (uVar5 | uRam000000018328a9d0) + (uVar5 & uRam000000018328a9d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018328a950 =
       func_0x00018b153e70((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018328aae0 = uRam000000018328aae0 ^ uRam000000018328a950 ^ 0x5920df9ac9fb2d4c;
  uRam000000018328aa38 =
       (uRam000000018328aa38 * 0x239688b17f397357 ^ uRam000000018328aae0) + uRam000000018328a950;
  uRam000000018328a980 = uRam000000018328aa38 ^ uRam000000018328aae0;
  uRam000000018328a9d0 = 0;
  uVar5 = ((uRam000000018328aa88 ^ 0x84220854) +
          (ulonglong)((uint)uRam000000018328aa88 & 0x84220854) * 2) * -uRam000000018328a9e0;
  uVar5 = (uVar5 | uRam000000018328aaf8) + (uVar5 & uRam000000018328aaf8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018328aa88 =
       func_0x00018b153e70((uVar5 | 0x84220854) + (ulonglong)((uint)uVar5 & 0x84220854));
  uRam000000018328aaa0 = uRam000000018328a9e8 ^ uRam000000018328aa80 ^ 0x2b71;
  uRam000000018328aa28 = (uRam000000018328aa28 ^ uRam000000018328aa80) + 0x2b71 ^ 0x5174cdb02433fc1d
  ;
  uRam000000018328a960 =
       (uRam000000018328a960 * 0x28e351c27b7a1d93 ^ uRam000000018328aa28) + uRam000000018328aa80;
  uRam000000018328a9a8 = uRam000000018328a960 ^ uRam000000018328aa28;
  auVar8._8_8_ = _UNK_181a6c598;
  auVar8._0_8_ = uVar3 ^ 0x84222325;
  uRam000000018328aad8 = 0x2b71;
  auVar9 = pshufb(auVar8 ^ _UNK_181a6c5a0,auVar9);
  uVar10 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar10 + uRam000000018328aa88;
  if (auVar9._4_4_ < 0) {
    uVar5 = uRam000000018328a930 ^ uVar10;
  }
  uRam000000018328a9c0 = func_0x00018b153e70(SUB161(auVar8 ^ _UNK_181a6c5a0,5) ^ uVar5);
  uVar10 = (uVar3 | 0x2b71) ^ uRam000000018328a9c0;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar10) & 0x7fffffffffffffff;
  uRam000000018328aa20 = uVar3 ^ 0x2b71;
  uRam000000018328aa88 = (uRam000000018328aa88 ^ uVar5) + uRam000000018328aa20 ^ 0xc2144e5c9dcbb55a;
  uRam000000018328a920 = (uRam000000018328a920 * 0x2ffbf53df6b010af ^ uRam000000018328aa88) + uVar5;
  uRam000000018328a940 = uRam000000018328a920 ^ uRam000000018328aa88;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13f80,0x322);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b14b188 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a6a640 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fy; aRR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18b153f00, runtime 6ffff2d63f00) =====

void FUN_18b153f00(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018b153f4b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a6c700 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fy; aRS (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18b154f10, runtime 6ffff2d64f10) =====

void FUN_18b154f10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b154f99 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a6ccc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



