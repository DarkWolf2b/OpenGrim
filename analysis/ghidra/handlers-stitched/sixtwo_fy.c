// ===== STITCHED CORPUS: sixtwo.fy =====
// handlers: 11  continuation blocks: 121  unresolved table targets: 0
// tables not in tables.json: ['0x132e68', '0x144c38', '0x170c0', '0x19c088', '0x1a625b0', '0x1a62dd8', '0x1a62de8', '0x1a62e28', '0x1a62e38', '0x1a62e48', '0x1a62e58', '0x1a63428', '0x1a63438', '0x1a63968', '0x1a63978', '0x1a63988', '0x1a63998', '0x1a639a8', '0x1a639d8', '0x1a639e8']

// ===== Lsixtwo/fy; _711a693dca6115e72fb85ef41f7a4485 ()V (handler @ image 18b0f9740, runtime 6ffff2d09740) =====

void FUN_18b0f9740(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13f80,0x322)
      /* POOL[0x13f80,0x322]: e | aRC | aRD | JkmiA | CKfua | aRG | OlRyl | sixtwo/fy | omtcl | aRL | yhrdq | jlVat | VcMsR | hSWnq | BpvnW | HJKFq | TtVtG | aRK | Egkrb | BkDbz | aRN | aRM | YfgMR | vfJqK | CHWJb | aRQ | sixtwo/fz | PnAIn | WdogO | rByTO | KZLPf | aRV | EiuwG | method_5809 | uYazo | ZGNVq | QrNyB | method_49107 | CIryL | likHN | aRX | euEJd | ddesD | aRW | sixtwo/fA | pJNbd | aSb | npLQh | cCwdY | HGYdz | gaHGm | Lblbv | BMRFS | aSd | EnpZA | jKuHD | sixtwo/fB | XVRCB | WFFVU | pKMKg | NSrLe | UkpKz | aSc | aSo | snORa | bApwx | aSi | zlYES | qRPky | EFLIl | itUea | HBnKR | cHl | MeJvD | RsARQ | XUAcx | v */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13f80,0x322)
      /* POOL[0x13f80,0x322]: e | aRC | aRD | JkmiA | CKfua | aRG | OlRyl | sixtwo/fy | omtcl | aRL | yhrdq | jlVat | VcMsR | hSWnq | BpvnW | HJKFq | TtVtG | aRK | Egkrb | BkDbz | aRN | aRM | YfgMR | vfJqK | CHWJb | aRQ | sixtwo/fz | PnAIn | WdogO | rByTO | KZLPf | aRV | EiuwG | method_5809 | uYazo | ZGNVq | QrNyB | method_49107 | CIryL | likHN | aRX | euEJd | ddesD | aRW | sixtwo/fA | pJNbd | aSb | npLQh | cCwdY | HGYdz | gaHGm | Lblbv | BMRFS | aSd | EnpZA | jKuHD | sixtwo/fB | XVRCB | WFFVU | pKMKg | NSrLe | UkpKz | aSc | aSo | snORa | bApwx | aSi | zlYES | qRPky | EFLIl | itUea | HBnKR | cHl | MeJvD | RsARQ | XUAcx | v */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13f80,0x322)
      /* POOL[0x13f80,0x322]: e | aRC | aRD | JkmiA | CKfua | aRG | OlRyl | sixtwo/fy | omtcl | aRL | yhrdq | jlVat | VcMsR | hSWnq | BpvnW | HJKFq | TtVtG | aRK | Egkrb | BkDbz | aRN | aRM | YfgMR | vfJqK | CHWJb | aRQ | sixtwo/fz | PnAIn | WdogO | rByTO | KZLPf | aRV | EiuwG | method_5809 | uYazo | ZGNVq | QrNyB | method_49107 | CIryL | likHN | aRX | euEJd | ddesD | aRW | sixtwo/fA | pJNbd | aSb | npLQh | cCwdY | HGYdz | gaHGm | Lblbv | BMRFS | aSd | EnpZA | jKuHD | sixtwo/fB | XVRCB | WFFVU | pKMKg | NSrLe | UkpKz | aSc | aSo | snORa | bApwx | aSi | zlYES | qRPky | EFLIl | itUea | HBnKR | cHl | MeJvD | RsARQ | XUAcx | v */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b154f99 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a6ccc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xb0efafd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0efafd(void)

{
  FUN_190ddce00();
  (*_DAT_181a5d838)();
  return;
}


// ----- block @ rva 0xb0f2845 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f2845(void)

{
  FUN_190de3220();
  (*_DAT_181a5caa8)();
  return;
}


// ----- block @ rva 0xb0f2f21 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f2f21(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (*_DAT_181a5d458)();
  return;
}


// ----- block @ rva 0xb0f308c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f308c(void)

{
  FUN_190dd72e0();
  (*_DAT_181a5c578)();
  return;
}


// ----- block @ rva 0xb0f3351 -----

void FUN_18b0f3351(void)

{
  return;
}


// ----- block @ rva 0xb0f428a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0f428a(void)

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


// ----- block @ rva 0xb0f56ab -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f56ab(void)

{
  (*_DAT_181a5db78)();
  return;
}


// ----- block @ rva 0xb0f75e1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0f75e1(void)

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


// ----- block @ rva 0xb0f7c9b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0f7c9b(void)

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


// ----- block @ rva 0xb0f8c67 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f8c67(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a5dd68)();
  return;
}


// ----- block @ rva 0xb0f8c84 -----

void FUN_18b0f8c84(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb0f8e3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f8e3c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a5f218)();
  return;
}


// ----- block @ rva 0xb0f8eba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f8eba(void)

{
  FUN_190dd72e0();
  (*_DAT_181a5f148)();
  return;
}


// ----- block @ rva 0xb0f8ee2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0f8ee2(void)

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


// ----- block @ rva 0xb0f8f9b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f8f9b(void)

{
  FUN_190dd72e0();
  (*_DAT_181a5f1e8)();
  return;
}


// ----- block @ rva 0xb0f925c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f925c(void)

{
  FUN_190ddfc90();
  (*_DAT_181a5f128)();
  return;
}


// ----- block @ rva 0xb0f928f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0f928f(void)

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


// ----- block @ rva 0xb0f93f4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0f93f4(void)

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


// ----- block @ rva 0xb0f95ca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0f95ca(void)

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


// ----- block @ rva 0xb0f967c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0f967c(void)

{
  (*_DAT_181a5f398)();
  return;
}


// ----- block @ rva 0xb0f9687 -----

void FUN_18b0f9687(void)

{
  return;
}


// ----- block @ rva 0xb0f968f -----

void FUN_18b0f968f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb0f982b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b0f9881 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b0f982b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb0fbbab -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b0fbbc2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b0fbbab(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb0fe282 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b0fe2e4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b0fe282(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000060;
  undefined8 uStack0000000000000068;
  
  uStack0000000000000068 = in_stack_00000060;
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb0ff1ca -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b0ff1e2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b0ff1ca(void)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb107455 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b107455(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000ac;
  
  uStack00000000000000ac = in_stack_00000070;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
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


// ----- block @ rva 0xb1155ea -----

void thunk_FUN_18b0fbd33(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xb1157b1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1157b1(void)

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


// ----- block @ rva 0xb115987 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b115987(void)

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


// ----- block @ rva 0xb116145 -----

void FUN_18b116145(void)

{
  return;
}


// ----- block @ rva 0xb1161b1 -----

void FUN_18b1161b1(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0xb1164f6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b11652d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b1164f6(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb11654b -----

void FUN_18b11654b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0x58) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018b116584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a625b0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xb116740 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b116740(void)

{
  undefined1 auVar1 [16];
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  longlong in_R9;
  ulonglong uVar4;
  ulonglong unaff_R15;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  ulonglong uVar8;
  
  *(uint *)(unaff_RBP + 0x60) = unaff_EDI;
  *(uint *)(unaff_RBP + 0x70) = unaff_EDI;
  *(char *)(unaff_RBP + 0x30) =
       (char)unaff_EDI + (char)(uint)((ulonglong)unaff_EDI * in_R9 >> 0x23) * -10;
  uVar2 = (~_DAT_183288d88 + 0xb1) *
          ((_DAT_183288da8 ^ 0x8422234c) + (ulonglong)((uint)_DAT_183288da8 & 0x8422234c) * 2);
  uVar2 = (uVar2 | _DAT_183288e68) + (uVar2 & _DAT_183288e68);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018b13def0((uVar2 | 0x842223fc) + (ulonglong)((uint)uVar2 & 0x842223fc));
  uVar3 = _DAT_183288d18 * -0x722e62f96a5635c7 & 0x7ffffffff;
  _DAT_183289018 = (uVar2 ^ uVar3) + 0xf9 ^ 0x7971556596f6b982;
  _DAT_183288fb0 = (_DAT_183288fb0 * -0x78759089a0506a29 ^ _DAT_183289018) + uVar3;
  _DAT_183288f58 = _DAT_183288fb0 ^ _DAT_183289018;
  _DAT_183289088 = 0xf9;
  uVar2 = (_DAT_1832890f8 ^ _DAT_181a63420) + _DAT_183289090 + 0x84222379;
  uVar3 = (_DAT_183289090 ^ _UNK_181a63428) + _DAT_1832890f8 + 0x1c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832890f8 ^ _DAT_181a63420;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183289090 ^ _UNK_181a63428;
  _DAT_183288ea0 =
       func_0x00018b13def0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832890f8 + 0x1c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183289090 + 0x84222379));
  _DAT_183288ff8 = (_DAT_183288ff8 ^ _DAT_183288ea0) + 0x40 ^ 0x4c5255aeac7d197a;
  _DAT_183288e98 = (_DAT_183288e98 * -0xf70b8fdfff7339b ^ _DAT_183288ff8) + _DAT_183288ea0;
  _DAT_183288d68 = _DAT_183288e98 ^ _DAT_183288ff8;
  _DAT_183288ed0 = 0x40;
  _DAT_183288f50 = func_0x00018b13def0(_DAT_1832890e8 ^ 0xffe3007c20ffe17f);
  uVar2 = _DAT_183288f50 << 0x36 | _DAT_183288f50 >> 10;
  _DAT_183288dc0 = (_DAT_183288dc0 ^ uVar2) - 4 ^ 0x810c1dba6811eaae;
  _DAT_183289028 = (_DAT_183289028 * -0x5c7b7e899358be83 ^ _DAT_183288dc0) + uVar2;
  _DAT_183288e78 = _DAT_183289028 ^ _DAT_183288dc0;
  _DAT_183288f10 = 0xfc;
  uVar2 = func_0x00018b13def0(_DAT_183288f98 + 0x20ff7b630021ff ^ 0x53);
  uVar2 = uVar2 << 0x25 | uVar2 >> 0x1b;
  _DAT_183289050 = _DAT_183289038 ^ uVar2 ^ 0x130;
  _DAT_183288f50 = (_DAT_183288f50 ^ uVar2) + 0x130 ^ 0xbb1d067806304379;
  _DAT_183288d00 = (_DAT_183288d00 * 0x36697b0686923267 ^ _DAT_183288f50) + uVar2;
  _DAT_183289098 = _DAT_183288d00 ^ _DAT_183288f50;
  _DAT_183289068 = 0x30;
  _DAT_183288e18 = func_0x00018b13def0(_DAT_183288f68 ^ 0xffe300844affe188);
  uVar2 = (_DAT_183288e18 ^ 0xf0) * -0x5577351b7c8d47f9;
  _DAT_183288f88 = _DAT_183288f40 ^ uVar2 ^ 0xf0;
  _DAT_183288ed8 = (_DAT_183288ed8 ^ uVar2) + 0xf0 ^ 0x1f9c89f0e1ba053c;
  _DAT_183289088 = (_DAT_183289088 * 0x627802beaca50ec3 ^ _DAT_183288ed8) + uVar2;
  _DAT_183288e08 = _DAT_183289088 ^ _DAT_183288ed8;
  _DAT_183288e30 = 0xf0;
  _DAT_183288e20 = func_0x00018b13def0(_DAT_183288ee8 + 0xffe0ff7b6b0021ffU ^ 0x1c);
  _DAT_183288e90 = _DAT_183288e70 ^ _DAT_183288e20 ^ 0x130;
  _DAT_183288d58 = (_DAT_183288d58 ^ _DAT_183288e20) + 0x130 ^ 0x90392401badffc9a;
  _DAT_183288d10 = (_DAT_183288d10 * 0x39fa76db4ad167d ^ _DAT_183288d58) + _DAT_183288e20;
  _DAT_1832890d8 = _DAT_183288d10 ^ _DAT_183288d58;
  _DAT_183288d30 = 0x30;
  uVar2 = (_DAT_183288d28 ^ _DAT_1804b72f0) + _DAT_183288d08 + 0x84222315;
  uVar3 = (_DAT_183288d08 ^ _UNK_1804b72f8) + _DAT_183288d28 + 0xd0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183288d28 ^ _DAT_1804b72f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183288d08 ^ _UNK_1804b72f8;
  _DAT_183288e40 =
       func_0x00018b13def0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183288d28 + 0xd0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183288d08 + 0x84222315));
  uVar2 = _DAT_183288e40 ^ 0xc0;
  _DAT_183288ed8 = _DAT_183288f28 ^ uVar2 ^ 0x100;
  _DAT_183288f90 = (_DAT_183288f90 ^ uVar2) + 0x100 ^ 0xf15589094515d647;
  _DAT_183288eb0 = (_DAT_183288eb0 * -0xb556a359af22691 ^ _DAT_183288f90) + uVar2;
  _DAT_183288e30 = _DAT_183288eb0 ^ _DAT_183288f90;
  _DAT_1832890a8 = 0;
  uVar2 = (~_DAT_183288fb0 + 0x31) *
          ((_DAT_183288da8 ^ 0x84222325) + (ulonglong)((uint)_DAT_183288da8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183288d08) + (uVar2 & _DAT_183288d08);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183289008 = func_0x00018b13def0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = _DAT_183289008 & 0xfffffffffffffff0;
  _DAT_183288f40 = _DAT_183288f30 ^ uVar2 ^ 0x30;
  _DAT_183288f88 = (_DAT_183288f88 ^ uVar2) + 0x30 ^ 0x28257f497259985f;
  _DAT_183288d08 = (_DAT_183288d08 * -0x63e04fab5d78ef2d ^ _DAT_183288f88) + uVar2;
  _DAT_183288e50 = _DAT_183288d08 ^ _DAT_183288f88;
  _DAT_1832890c0 = 0x30;
  _DAT_183288e30 = func_0x00018b13def0(_DAT_183289090 ^ 0x20ff7c8bffdd65);
  uVar2 = _DAT_183288e30 & 0xffffffffff000000;
  _DAT_183288f08 = _DAT_183289020 ^ uVar2 ^ 0x139;
  _DAT_183288d30 = (_DAT_183288d30 ^ uVar2) + 0x139 ^ 0x29a002b734c767cc;
  _DAT_183288f50 = (_DAT_183288f50 * -0x36cf6fac9574ab45 ^ _DAT_183288d30) + uVar2;
  _DAT_183288f28 = _DAT_183288f50 ^ _DAT_183288d30;
  _DAT_183288fc8 = 0x39;
  _DAT_183288f50 = func_0x00018b13def0(_DAT_183288d78 ^ 0xffe0ff7b94001d47);
  uVar2 = (ulonglong)(((uint)_DAT_183288d00 ^ 0xb9) & 0xf9);
  _DAT_183288d38 = (_DAT_183288d38 ^ uVar2) + 0xb9 ^ 0x80c7c24af560c80;
  _DAT_183288f28 = (_DAT_183288f28 * -0x6d64c59a5b98ac97 ^ _DAT_183288d38) + uVar2;
  _DAT_183288d98 = _DAT_183288f28 ^ _DAT_183288d38;
  _DAT_183288ff8 = 0xb9;
  _DAT_183289048 = func_0x00018b13def0(_DAT_183288d28 ^ 0x2300849bffdd75);
  uVar2 = _DAT_183289048 >> 1 | _DAT_183289048;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_RBX) + (uVar2 >> 2 & unaff_RBX);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & unaff_R15) * unaff_RSI >> 0x38)) * 8 ^ _DAT_183289048) &
          0x7fffffffff;
  _DAT_183288ef8 = (_DAT_183288ef8 ^ uVar2) + 0x40 ^ 0x66a1a24d9e825408;
  _DAT_183288dc0 = (_DAT_183288dc0 * -0x604250801a0de9bb ^ _DAT_183288ef8) + uVar2;
  _DAT_183288fc0 = _DAT_183288dc0 ^ _DAT_183288ef8;
  _DAT_1832890b0 = 0x40;
  uVar2 = (~_DAT_183288f98 + 0x81) *
          ((_DAT_183288f80 ^ 0x8422239c) + (ulonglong)((uint)_DAT_183288f80 & 0x8422239c) * 2);
  uVar2 = (uVar2 | _DAT_183288fc0) + (uVar2 & _DAT_183288fc0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183288d30 = func_0x00018b13def0((uVar2 | 0x8422231c) + (ulonglong)((uint)uVar2 & 0x8422231c))
  ;
  _DAT_183288f88 = _DAT_183288d58 ^ _DAT_183288ff8 ^ 0x139;
  _DAT_183288ed8 = (_DAT_183288ed8 ^ _DAT_183288ff8) + 0x139 ^ 0xf35164d10ef3e801;
  _DAT_183288e28 = (_DAT_183288e28 * -0x2494bb4e979f8d89 ^ _DAT_183288ed8) + _DAT_183288ff8;
  _DAT_183288eb8 = _DAT_183288e28 ^ _DAT_183288ed8;
  _DAT_183288e20 = 0x39;
  uVar2 = (~_DAT_183288e18 + 0x3a) *
          ((_DAT_183288fc8 ^ 0x8422231c) + (ulonglong)((uint)_DAT_183288fc8 & 0x8422231c) * 2);
  uVar2 = (uVar2 | _DAT_183288da0) + (uVar2 & _DAT_183288da0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183288ef0 = func_0x00018b13def0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_183288d30 = _DAT_183288d30 ^ _DAT_183288ef0 ^ 0x4c251e7b0001f7fe;
  _DAT_183288e10 = (_DAT_183288e10 * 0x4612c9f7ee7c2bc5 ^ _DAT_183288d30) + _DAT_183288ef0;
  _DAT_183288d80 = _DAT_183288e10 ^ _DAT_183288d30;
  _DAT_183289088 = 0;
  uVar2 = (_DAT_183288d28 ^ 0x84222315) + _DAT_183288fc8 + 0x84222315;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183288d28 ^ 0x84222315;
  uVar3 = ((_DAT_183288fc8 + _DAT_183288d28) * 0x2000 | _DAT_183288fc8 + _DAT_183288d28 >> 0x33) ^
          _DAT_183288fc8;
  _DAT_183288f68 = _DAT_183288ef0;
  _DAT_183288f70 =
       func_0x00018b13def0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_183288d28 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183288fc8 + 0x84222315));
  _DAT_183288f28 = _DAT_183288eb8 ^ _DAT_183288f70 ^ 0x30;
  _DAT_183288e98 = (_DAT_183288e98 ^ _DAT_183288f70) + 0x30 ^ 0x39f70bff98c4196e;
  _DAT_183288de8 = (_DAT_183288de8 * 0x5ce6e5fddd03ecc9 ^ _DAT_183288e98) + _DAT_183288f70;
  _DAT_183288d48 = _DAT_183288de8 ^ _DAT_183288e98;
  _DAT_183288d30 = 0x30;
  uVar2 = (_DAT_183288fd0 ^ _DAT_180de1a40) + _DAT_183288e98 + 0x842223dc;
  uVar3 = (_DAT_183288e98 ^ _UNK_180de1a48) + _DAT_183288fd0 + 0xff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183288fd0 ^ _DAT_180de1a40;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183288e98 ^ _UNK_180de1a48;
  _DAT_183289098 =
       func_0x00018b13def0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183288fd0 + 0xff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183288e98 + 0x842223dc));
  uVar2 = ((_DAT_183289098 ^ 0xf807) & 0xffffffffff) * 0x100000;
  _DAT_183288db8 = (_DAT_183288db8 ^ uVar2) + 6 ^ 0x9691eee3d24379f7;
  _DAT_183288ef8 = (_DAT_183288ef8 * -0x4d4ba89bc70044f1 ^ _DAT_183288db8) + uVar2;
  _DAT_183288d08 = _DAT_183288ef8 ^ _DAT_183288db8;
  _DAT_183288d48 = 6;
  _DAT_1832890c0 = func_0x00018b13def0(_DAT_183289060 ^ 0x1f0084b5ffe1b8);
  uVar2 = _DAT_1832890c0 >> 1 | _DAT_1832890c0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_RBX) + (uVar2 >> 2 & unaff_RBX);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & unaff_R15) * unaff_RSI >> 0x38)) * 4 ^ _DAT_1832890c0 ^
          0xf9;
  _DAT_183288de8 = _DAT_183288de8 ^ uVar2 ^ 0xc02f0b9d7a29b9c8;
  _DAT_183289070 = (_DAT_183289070 * -0x6a1fa01143ee9cdf ^ _DAT_183288de8) + uVar2;
  _DAT_183288db8 = _DAT_183289070 ^ _DAT_183288de8;
  _DAT_183288f50 = 0;
  uVar2 = (_DAT_1832890b0 ^ _DAT_181a63430) + _DAT_183288d88 + 0x8422234c;
  uVar3 = (_DAT_183288d88 ^ _UNK_181a63438) + _DAT_1832890b0 + 0x69;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832890b0 ^ _DAT_181a63430;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183288d88 ^ _UNK_181a63438;
  _DAT_183288ef0 =
       func_0x00018b13def0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832890b0 + 0x69) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183288d88 + 0x8422234c));
  uVar2 = _DAT_183288ef0 - (_DAT_183288ef0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_RBX) + (uVar2 >> 2 & unaff_RBX);
  uVar2 = (ulonglong)
          (((uint)_DAT_183288ef0 ^
           (uint)(byte)(((uVar2 >> 4) + uVar2 & unaff_R15) * unaff_RSI >> 0x38)) & 0x69);
  _DAT_183288da0 = _DAT_183288da0 ^ uVar2 ^ 0x41f2a9ea6990d53e;
  _DAT_183288f90 = (_DAT_183288f90 * -0x599b7167f4d8d223 ^ _DAT_183288da0) + uVar2;
  _DAT_183289008 = _DAT_183288f90 ^ _DAT_183288da0;
  _DAT_183288ed8 = 0;
  uVar4 = (ulonglong)*(byte *)(unaff_RBP + 0x30);
  uVar2 = (~_DAT_183288f10 + 0x31) *
          ((uVar4 ^ 0x84222325 ^ _DAT_183288fd8) +
          (ulonglong)((uint)_DAT_183288fd8 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_183289060) + (uVar2 & _DAT_183289060);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183288d78 =
       func_0x00018b13def0((uVar4 ^ 0x84222315 | uVar2) +
                           (ulonglong)((uint)(uVar4 ^ 0x84222315) & (uint)uVar2));
  uVar4 = uVar4 | 0x30;
  uVar2 = _DAT_183288d78 ^ uVar4 ^ 0x30;
  _DAT_183288f78 = (_DAT_183288f78 ^ uVar2) + uVar4 ^ 0x19ac5319f2425bcc;
  _DAT_183288d90 = (_DAT_183288d90 * -0x25b48adf2f70b39d ^ _DAT_183288f78) + uVar2;
  _DAT_183288f58 = _DAT_183288d90 ^ _DAT_183288f78;
  uVar2 = ~_DAT_183288fe8 *
          ((in_RAX ^ 0x84222325 ^ _DAT_183288dc0) + ((in_RAX ^ 0x84222325) & _DAT_183288dc0) * 2);
  uVar2 = (uVar2 | _DAT_183288e38) + (uVar2 & _DAT_183288e38);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183288d28 = uVar4;
  uVar2 = func_0x00018b13def0((in_RAX ^ 0xffffffff7bdddcda | uVar2) +
                              (uVar2 & (in_RAX ^ 0xffffffff7bdddcda)));
  uVar5 = (uint)(in_RAX >> 0x20);
  auVar1._8_4_ = (int)in_RAX;
  auVar1._0_8_ = in_RAX;
  auVar1._12_4_ = uVar5;
  uVar7 = (ulonglong)uVar5;
  uVar8 = SUB168(auVar1 ^ _DAT_18001a710,0);
  uVar6 = SUB164(auVar1 ^ _DAT_18001a710,0);
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_RBX) + (uVar3 >> 2 & unaff_RBX);
  _DAT_183288fd8 = (((uVar3 >> 4) + uVar3 & unaff_R15) * unaff_RSI >> 0x38) << 7 ^ uVar2;
  _DAT_183288e70 =
       (ulonglong)uVar6 * (ulonglong)unaff_XMM11_Da +
       ((ulonglong)uVar6 * (ulonglong)_DAT_181a634b0 + (uVar8 >> 0x20) * (ulonglong)unaff_XMM11_Da
       << 0x20) +
       (ulonglong)uVar6 * (ulonglong)unaff_XMM9_Da +
       ((ulonglong)uVar6 * (ulonglong)_DAT_181a63490 + (uVar8 >> 0x20) * (ulonglong)unaff_XMM9_Da <<
       0x20) + ((in_RAX & 0xffffffff) * (ulonglong)_DAT_181a63470 + uVar7 * _DAT_181a63460 << 0x20)
               + (in_RAX & 0xffffffff) * (ulonglong)_DAT_181a63460 +
               ((in_RAX & 0xffffffff) * (ulonglong)_DAT_181a63450 +
                (ulonglong)uVar5 * (ulonglong)_DAT_181a63440 << 0x20) +
               (in_RAX & 0xffffffff) * (ulonglong)_DAT_181a63440 +
       (-((ulonglong)uVar6 * (ulonglong)unaff_XMM12_Da +
         ((ulonglong)uVar6 * (ulonglong)_DAT_181a63550 + (uVar8 >> 0x20) * (ulonglong)unaff_XMM12_Da
         << 0x20)) -
       ((ulonglong)uVar6 * (ulonglong)unaff_XMM13_Da +
        ((ulonglong)uVar6 * (ulonglong)_DAT_181a63540 + (uVar8 >> 0x20) * (ulonglong)unaff_XMM13_Da
        << 0x20) +
       ((in_RAX & 0xffffffff) * (ulonglong)_DAT_181a63510 + uVar7 * unaff_XMM8_Da << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM8_Da +
       ((in_RAX & 0xffffffff) * (ulonglong)_DAT_181a634f0 + uVar7 * unaff_XMM10_Da << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM10_Da)) + 0xa1faee401ba5fe55;
  _DAT_183288de0 = _DAT_183289030 ^ _DAT_183288fd8 ^ _DAT_183288e70;
  _DAT_183288da0 = (_DAT_183288da0 ^ _DAT_183288fd8) + _DAT_183288e70 ^ 0x6f8f558464a0f22e;
  _DAT_183288fd8 = (uVar2 * -0x3cc28c8f8ed6f9c7 ^ _DAT_183288da0) + _DAT_183288fd8;
  _DAT_183288f20 = _DAT_183288fd8 ^ _DAT_183288da0;
  *(char *)(unaff_RBP + -0x50 + _DAT_183288e70) = (char)uVar4;
  switch(*(uint *)(unaff_RBP + 0x70) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb11a06a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b11b419 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b11a06a(void)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x18) = 0xf;
  (**(code **)(**(longlong **)(unaff_RBP + 0x58) + 0x70))
            (*(longlong **)(unaff_RBP + 0x58),*(undefined8 *)(unaff_RBP + 0x20),unaff_RBP + -0x30);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb11af0e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b11b419 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b11af0e(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar13;
  uint uVar15;
  undefined1 auVar14 [16];
  ulonglong uVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar20;
  undefined1 auVar19 [16];
  ulonglong uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  
  uVar1 = unaff_RBP - 0x3b;
  uVar11 = uVar1 ^ 0x84222325;
  plVar2 = *(longlong **)(unaff_RBP + 0x58);
  uVar13 = (unaff_RDI - _DAT_1832890e8) *
           ((_DAT_183288d40 ^ uVar11) + (uVar11 & _DAT_183288d40) * 2);
  uVar13 = (uVar13 | _DAT_183288d68) + (uVar13 & _DAT_183288d68);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_183288e18 =
       func_0x00018b13def0((uVar11 ^ unaff_RDI | uVar13) + (uVar13 & (uVar11 ^ unaff_RDI)));
  auVar19._8_8_ = 0;
  auVar19._0_8_ = unaff_RDI;
  uVar8 = _DAT_183288e18 ^ unaff_RDI;
  uVar15 = (uint)(uVar1 >> 0x20);
  auVar17._8_4_ = (int)uVar1;
  auVar17._0_8_ = uVar1;
  auVar17._12_4_ = uVar15;
  uVar20 = (uint)(unaff_RDI >> 0x20);
  auVar23._8_4_ = (int)unaff_RDI;
  auVar23._0_8_ = unaff_RDI;
  auVar23._12_4_ = uVar20;
  uVar4 = (ulonglong)_DAT_181a63770;
  uVar13 = (ulonglong)_DAT_181a63770;
  auVar14 = auVar17 | auVar23;
  uVar11 = (ulonglong)_DAT_181a63760;
  *(ulonglong *)(unaff_RBP + 0x70) = (ulonglong)uVar20;
  *(ulonglong *)(unaff_RBP + 0x78) = auVar23._8_8_ >> 0x20;
  uVar10 = _DAT_181a637b0;
  uVar9 = _DAT_181a637a0;
  uVar20 = _DAT_181a63790;
  uVar25 = SUB164(auVar17 & auVar23,0);
  uVar5 = (ulonglong)_DAT_181a63790;
  uVar16 = SUB168(auVar17 & auVar23,0);
  uVar6 = (ulonglong)_DAT_181a637a0;
  uVar7 = (ulonglong)_DAT_181a637a0;
  uVar3 = (ulonglong)_DAT_181a637c0;
  *(undefined1 (*) [16])(unaff_RBP + 0x30) = auVar14;
  auVar23 = auVar17 ^ auVar23;
  uVar22 = auVar23._0_4_;
  *(ulonglong *)(unaff_RBP + 0x60) = auVar23._0_8_ >> 0x20;
  *(ulonglong *)(unaff_RBP + 0x68) = auVar23._8_8_ >> 0x20;
  auVar26._8_4_ = 0xffffffff;
  auVar26._0_8_ = 0xffffffffffffffff;
  auVar26._12_4_ = 0xffffffff;
  uVar24 = SUB164(auVar17 ^ auVar26,0);
  uVar21 = SUB168(auVar17 ^ auVar26,0);
  uVar18 = SUB164(auVar19 ^ auVar26,0);
  _DAT_183288ea8 =
       (((ulonglong)_DAT_181a63780 * (ulonglong)uVar24 +
         ((uVar21 >> 0x20) * (ulonglong)_DAT_181a63780 +
          (ulonglong)_DAT_181a63760 * (ulonglong)uVar24 << 0x20) +
        (ulonglong)uVar9 * (ulonglong)uVar22 +
        ((auVar23._0_8_ >> 0x20) * (ulonglong)uVar9 + (ulonglong)uVar20 * (ulonglong)uVar22 << 0x20)
        + uVar25 * uVar7 + ((uVar16 >> 0x20) * uVar6 + uVar25 * uVar5 << 0x20) +
          ((uVar13 * (uVar1 & 0xffffffff) + (uVar15 * uVar4 + (uVar1 & 0xffffffff) * uVar11 << 0x20)
           ) - unaff_RDI) +
        (ulonglong)uVar10 * (ulonglong)auVar14._0_4_ +
        (uVar3 * auVar14._0_4_ + (auVar14._0_8_ >> 0x20) * (ulonglong)uVar10 << 0x20)) -
       ((ulonglong)uVar18 * (_DAT_181a63820 & 0xffffffff) +
        ((SUB168(auVar19 ^ auVar26,0) >> 0x20) * (_DAT_181a63820 & 0xffffffff) +
         (ulonglong)_DAT_181a63810 * (ulonglong)uVar18 << 0x20) +
        (ulonglong)uVar24 * (ulonglong)_DAT_181a63800 +
        ((uVar21 >> 0x20) * (ulonglong)_DAT_181a63800 +
         (ulonglong)_DAT_181a637f0 * (ulonglong)uVar24 << 0x20) +
       (ulonglong)uVar22 * (ulonglong)_DAT_181a63840 +
       ((ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_181a63840 +
        (ulonglong)_DAT_181a63830 * (ulonglong)uVar22 << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_181a63840 +
       ((uVar16 >> 0x20) * (ulonglong)_DAT_181a63840 + (ulonglong)uVar25 * (ulonglong)_DAT_181a63830
       << 0x20) +
       (unaff_RDI & 0xffffffff) * (_DAT_181a63820 & 0xffffffff) +
       ((ulonglong)*(uint *)(unaff_RBP + 0x70) * (_DAT_181a63820 & 0xffffffff) +
        (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_181a63810 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_181a63800 +
       ((ulonglong)uVar15 * (ulonglong)_DAT_181a63800 +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_181a637f0 << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 0x30) * (ulonglong)_DAT_181a63850 +
       ((ulonglong)_DAT_181a63860 * (ulonglong)*(uint *)(unaff_RBP + 0x30) +
        (auVar14._0_8_ >> 0x20) * (ulonglong)_DAT_181a63850 << 0x20))) + 0x1a0fe10f2ec0a620;
  _DAT_1832890b0 = _DAT_183288ea8 ^ uVar8;
  _DAT_183288fc8 = (_DAT_183288fc8 ^ uVar8) + _DAT_183288ea8 ^ 0x6132bc7f0267f116;
  _DAT_1832890b8 = (_DAT_1832890b8 * -0x62d0d839f425da3b ^ _DAT_183288fc8) + uVar8;
  _DAT_183288f98 = _DAT_1832890b8 ^ _DAT_183288fc8;
  lVar12 = unaff_RBP + -0x30;
  FUN_18414b520(lVar12);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar12 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 0x10),lVar12);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb11b41c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b11b41c(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  uint uVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar19;
  undefined1 auVar18 [16];
  
  auVar11._8_8_ = _UNK_180062bf8;
  auVar11._0_8_ = unaff_RSI ^ 0x84222325;
  auVar11 = auVar11 ^ _DAT_181a63870;
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + -0x30);
  auVar14 = pshufb(auVar11,_DAT_1800170c0);
  uVar9 = auVar14._8_8_ + auVar14._0_8_;
  uVar13 = uVar9 + _DAT_183288d80;
  if (auVar14._4_4_ < 0) {
    uVar13 = _DAT_183288de0 ^ uVar9;
  }
  uVar8 = func_0x00018b13def0(auVar11[5] ^ uVar13);
  auVar11 = _DAT_18001a990;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = unaff_RSI;
  uVar19 = (uint)(unaff_RSI >> 0x20);
  uVar10 = (uint)unaff_RSI & (uint)DAT_18001a990;
  auVar14._8_4_ = (uint)unaff_RSI;
  auVar14._0_8_ = unaff_RSI;
  auVar14._12_4_ = uVar19;
  uVar5 = (ulonglong)_DAT_181a63880;
  uVar13 = (ulonglong)_DAT_181a63880;
  uVar9 = (ulonglong)_DAT_181a63890;
  uVar15 = (ulonglong)_DAT_181a638a0;
  uVar1 = (ulonglong)_DAT_181a638b0;
  uVar2 = (ulonglong)_DAT_181a638d0;
  uVar16 = SUB164(auVar14 | _DAT_18001a990,0);
  uVar3 = (ulonglong)_DAT_181a638c0;
  uVar6 = (ulonglong)_DAT_181a63950;
  uVar4 = (ulonglong)_DAT_181a63950;
  uVar17 = SUB168(auVar14 | _DAT_18001a990,0);
  uVar7 = (ulonglong)_DAT_181a638c0;
  _DAT_183288fa0 = uVar8;
  *(ulonglong *)(unaff_RBP + 0x60) = unaff_RSI;
  uVar8 = uVar8 ^ unaff_RSI;
  uVar12 = SUB164(auVar11 ^ auVar18,0);
  uVar9 = (((ulonglong)uVar12 * (ulonglong)_DAT_181a638e0 +
            ((ulonglong)_DAT_181a638f0 * (ulonglong)uVar12 +
             (SUB168(auVar11 ^ auVar18,0) >> 0x20) * (ulonglong)_DAT_181a638e0 << 0x20) +
           uVar3 * uVar16 + (uVar2 * uVar16 + (uVar17 >> 0x20) * uVar7 << 0x20) +
           (uVar1 * uVar10 << 0x20 | uVar15 * uVar10) +
           (uVar9 * (unaff_RSI & 0xffffffff) + uVar13 * uVar19 << 0x20) +
           (unaff_RSI & 0xffffffff) * uVar5) -
          ((ulonglong)uVar16 * (ulonglong)_DAT_181a63940 +
           ((uVar17 >> 0x20) * (ulonglong)_DAT_181a63940 + uVar4 * uVar16 << 0x20) +
           (uVar10 * uVar6 << 0x20 | (ulonglong)uVar10 * (ulonglong)_DAT_181a63940) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_181a63920 +
          ((ulonglong)_DAT_181a63930 * (unaff_RSI & 0xffffffff) +
           (unaff_RSI >> 0x20) * (ulonglong)_DAT_181a63920 << 0x20))) + 0xd0f29cb0d5c1c7bc;
  _DAT_183288dc0 = _DAT_183288e98 ^ uVar8 ^ uVar9;
  _DAT_183288f68 = (_DAT_183288f68 ^ uVar8) + uVar9 ^ 0x83bf13dfd4cdc29e;
  _DAT_183288de8 = (_DAT_183288de8 * -0x5ecf16c75eea5745 ^ _DAT_183288f68) + uVar8;
  _DAT_183288d10 = _DAT_183288de8 ^ _DAT_183288f68;
  uVar13 = (_DAT_183288d28 ^ _DAT_181a63960) + _DAT_183288fe8 + 0x65c6e607991f8a1e;
  uVar15 = (_DAT_183288fe8 ^ _UNK_181a63968) + _DAT_183288d28 + 0xfbf7b02dd53add55;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288d28 ^ _DAT_181a63960;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_183288fe8 ^ _UNK_181a63968;
  _DAT_183288fd8 = uVar9;
  _DAT_183288ea8 =
       func_0x00018b13def0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_183288d28 + 0xfbf7b02dd53add55)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183288fe8 + 0x65c6e607991f8a1e));
  _DAT_183288d38 = (_DAT_183288d38 ^ _DAT_183288ea8) + 0xfff7f62fdd3ffd7f ^ 0xfdd02328df5c00b;
  _DAT_183289078 = (_DAT_183289078 * -0x3edd0f628e9f5a11 ^ _DAT_183288d38) + _DAT_183288ea8;
  _DAT_183288e48 = _DAT_183289078 ^ _DAT_183288d38;
  _DAT_183288d28 = 0xfff7f62fdd3ffd7f;
  uVar13 = (_DAT_183288f88 ^ _DAT_181a63970) + _DAT_183288d98 + 0x84222cda;
  uVar15 = (_DAT_183288d98 ^ _UNK_181a63978) + _DAT_183288f88 + 0x7bbdf38e3742f95e;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288f88 ^ _DAT_181a63970;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_183288d98 ^ _UNK_181a63978;
  _DAT_183288d18 =
       func_0x00018b13def0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_183288f88 + 0x7bbdf38e3742f95e)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183288d98 + 0x84222cda));
  uVar13 = _DAT_183288d18 << 5 | _DAT_183288d18 >> 0x3b;
  _DAT_183288fa8 = _DAT_183288d28 ^ uVar13 ^ 0x7bbdf38e3743095d;
  _DAT_183288de8 = (_DAT_183288de8 ^ uVar13) + 0x7bbdf38e3743095d ^ 0x5ba3285af02b9286;
  _DAT_183288de0 = (_DAT_183288de0 * 0x3649f3f9f68729d5 ^ _DAT_183288de8) + uVar13;
  _DAT_183288fa0 = _DAT_183288de0 ^ _DAT_183288de8;
  _DAT_183288e40 = 0x7bbdf38e3743095d;
  uVar13 = (_DAT_183288f98 ^ _DAT_181a63980) + _DAT_183289038 + 0x7bbdf38eb3612a78;
  uVar15 = (_DAT_183289038 ^ _UNK_181a63988) + _DAT_183288f98 + 0x84420c71c8bd06a2;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288f98 ^ _DAT_181a63980;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_183289038 ^ _UNK_181a63988;
  _DAT_183288de0 =
       func_0x00018b13def0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_183288f98 + 0x84420c71c8bd06a2)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183289038 + 0x7bbdf38eb3612a78));
  uVar13 = _DAT_183288de0 ^ 0xefabeca82b0e1387;
  _DAT_183288f38 = _DAT_183288e88 ^ uVar13 ^ 0xfff;
  _DAT_183288f88 = (_DAT_183288f88 ^ uVar13) + 0xfff ^ 0xc57224f266047c3;
  _DAT_183288e70 = (_DAT_183288e70 * -0x20321a144595090d ^ _DAT_183288f88) + uVar13;
  _DAT_183288ec8 = _DAT_183288e70 ^ _DAT_183288f88;
  _DAT_183288f98 = 0xfff;
  _DAT_183288d70 = func_0x00018b13def0(_DAT_183289088 + 0x4123e1a2142be753U ^ 0xa9);
  uVar13 = _DAT_183288d70 ^ 0xfff;
  _DAT_183289098 = _DAT_183288e20 ^ uVar13 ^ 0xec66d45f265a18f5;
  _DAT_183288fa0 = (_DAT_183288fa0 ^ uVar13) + 0xec66d45f265a18f5 ^ 0x6a89aea8e08f8191;
  _DAT_183288e00 = (_DAT_183288e00 * -0x32a4f52dae01fc75 ^ _DAT_183288fa0) + uVar13;
  _DAT_183288f80 = _DAT_183288e00 ^ _DAT_183288fa0;
  _DAT_183288dc8 = 0xec66d45f265a18f5;
  uVar13 = (~_DAT_183288f88 + 0x13992ba0d9a5f70b) *
           ((_DAT_183288eb0 ^ 0xec66d45fa2783bd0) + (_DAT_183288eb0 & 0x6c66d45fa2783bd0) * 2);
  uVar13 = (uVar13 | _DAT_183289020) + (uVar13 & _DAT_183289020);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_183288e68 =
       func_0x00018b13def0((uVar13 | 0xffffffff7bddccda) + (uVar13 & 0xffffffff7bddccda));
  uVar13 = _DAT_183288e68 >> 1 | _DAT_183288e68;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = ~((0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
             0x40 ^ _DAT_183288e68) & 0xec66d45f265a18f5;
  uVar13 = uVar13 << 0x26 | uVar13 >> 0x1a;
  _DAT_183288f98 = _DAT_183288e80 ^ uVar13 ^ 0xfff;
  _DAT_183288e98 = (_DAT_183288e98 ^ uVar13) + 0xfff ^ 0x8fda1eb56ea1d700;
  _DAT_183288f88 = (_DAT_183288f88 * 0x60535abdfe677c61 ^ _DAT_183288e98) + uVar13;
  _DAT_1832890f8 = _DAT_183288f88 ^ _DAT_183288e98;
  _DAT_183288da0 = 0xfff;
  uVar13 = (~_DAT_183288d38 + 0xc0a7291e344b8c3c) *
           ((_DAT_183288d70 ^ 0xfff7f62f591dde5a) + (_DAT_183288d70 & 0x7ff7f62f591dde5a) * 2);
  uVar13 = (uVar13 | _DAT_183288e78) + (uVar13 & _DAT_183288e78);
  uVar13 = uVar13 * 0x2000 ^ uVar13;
  uVar13 = uVar13 >> 7 ^ uVar13;
  uVar13 = uVar13 << 0x11 ^ uVar13;
  _DAT_183288d68 =
       func_0x00018b13def0((uVar13 | 0x3f50df316d565261) + (uVar13 & 0x3f50df316d565261));
  uVar13 = _DAT_183288d68 & 0xfff7f62fdd3ffd7f;
  _DAT_183288f80 = _DAT_183288e70 ^ uVar13 ^ 0xc09f1f4e118b89ba;
  _DAT_183288df0 = (_DAT_183288df0 ^ uVar13) + 0xc09f1f4e118b89ba ^ 0x844a2883a1fd738c;
  _DAT_183289098 = (_DAT_183289098 * -0x60e69af0531b2763 ^ _DAT_183288df0) + uVar13;
  _DAT_183288f18 = _DAT_183289098 ^ _DAT_183288df0;
  _DAT_183288fd0 = -0x3f60e0b1ee747646;
  uVar13 = (_DAT_1832890f8 ^ _DAT_181a63990) + _DAT_183289030 + 0xfff7f62f591dde5a;
  uVar15 = (_DAT_183289030 ^ _UNK_181a63998) + _DAT_1832890f8 + 0xc0a7291e344b8c3b;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1832890f8 ^ _DAT_181a63990;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_183289030 ^ _UNK_181a63998;
  _DAT_1832890c0 =
       func_0x00018b13def0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_1832890f8 + 0xc0a7291e344b8c3b)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183289030 + 0xfff7f62f591dde5a));
  uVar13 = (_DAT_1832890c0 ^ 0xfff7ff3ffd7f0000) & 0xffffffffffff0000;
  _DAT_183288de8 = (_DAT_183288de8 ^ uVar13) + 0x3f50df31e9747144 ^ 0x408641dd867a96ae;
  _DAT_183288fd0 = (_DAT_183288fd0 * -0x7ded8d3ad7ca273f ^ _DAT_183288de8) + uVar13;
  _DAT_183288f10 = _DAT_183288fd0 ^ _DAT_183288de8;
  _DAT_183288e40 = _DAT_183288e38 ^ 0x3f50df31e9747144;
  _DAT_183288dc8 = 0x3f50df31e9747144;
  _DAT_183288d78 = func_0x00018b13def0(_DAT_183288d68 + 0xd12e2f9ca122b214 ^ 0xa1);
  uVar13 = (_DAT_183288d78 << 0x29 | _DAT_183288d78 >> 0x17) << 10 |
           (_DAT_183288d78 & 0x7fffff) >> 0xd;
  _DAT_183289028 = (_DAT_183289028 ^ uVar13) + 0xc0a7200e140b8c3b ^ 0xcac41db88b179bf8;
  _DAT_183288e88 = (_DAT_183288e88 * -0x254e94aacf79bec1 ^ _DAT_183289028) + uVar13;
  _DAT_183289098 = _DAT_183288e88 ^ _DAT_183289028;
  _DAT_1832890c8 = 0xc0a7200e140b8c3b;
  uVar13 = (_DAT_183288d50 ^ _DAT_181a639a0) + _DAT_183288e08 + 0x3f50df316d565261;
  uVar15 = (_DAT_183288e08 ^ _UNK_181a639a8) + _DAT_183288d50 + 0x814e401c28171876;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288d50 ^ _DAT_181a639a0;
  uVar15 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_183288e08 ^ _UNK_181a639a8;
  _DAT_183288db8 =
       func_0x00018b13def0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_183288d50 + 0x814e401c28171876)
                           ^ (uVar13 << 0x1d | uVar13 >> 0x23) -
                             (_DAT_183288e08 + 0x3f50df316d565261));
  _DAT_183289000 = _DAT_183288d30 ^ _DAT_183288ef0 ^ 0xc09f1f4e118b89ba;
  _DAT_183288e88 = (_DAT_183288e88 ^ _DAT_183288ef0) + 0xc09f1f4e118b89ba ^ 0x41296b0c075d9853;
  _DAT_183288d60 = (_DAT_183288d60 * 0x5726e25de619f33d ^ _DAT_183288e88) + _DAT_183288ef0;
  _DAT_183288d78 = _DAT_183288d60 ^ _DAT_183288e88;
  _DAT_1832890e0 = 0xc09f1f4e118b89ba;
  _DAT_183288ff0 = func_0x00018b13def0(_DAT_183288f90 + 0x23007c1cffddffU ^ 0x23);
  _DAT_183288fd0 = (_DAT_183288ff0 << 0x37 | _DAT_183288ff0 >> 9) * -0x242725ecd8ea4707;
  _DAT_183288e08 = _DAT_183288e08 ^ _DAT_183288fd0 ^ 0x61600f8305175952;
  _DAT_183288f10 = (_DAT_183288f10 * 0x2e66a1f9e5fec511 ^ _DAT_183288e08) + _DAT_183288fd0;
  _DAT_183288de0 = _DAT_183288f10 ^ _DAT_183288e08;
  _DAT_183288f48 = 0;
  uVar13 = (_DAT_183288ed8 ^ 0x84222cda) + _DAT_183288da0 + 0x84222cda;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288ed8 ^ 0x84222cda;
  uVar15 = ((_DAT_183288da0 + _DAT_183288ed8) * 0x2000 | _DAT_183288da0 + _DAT_183288ed8 >> 0x33) ^
           _DAT_183288da0;
  _DAT_183288ec8 =
       func_0x00018b13def0((uVar15 << 0x1d | uVar15 >> 0x23) - _DAT_183288ed8 ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183288da0 + 0x84222cda));
  uVar13 = (_DAT_183288ec8 ^ 0xfff) >> 1 | _DAT_183288ec8 ^ 0xfff;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar13 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x10 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar13;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_183288ec8) & 0x7ffffffff8000000;
  _DAT_183289048 = _DAT_183288f98 ^ uVar13 ^ 0xfff;
  _DAT_183289078 = (_DAT_183289078 ^ uVar13) + 0xfff ^ 0xfa1b1ed7d97ceb2f;
  _DAT_183289068 = (_DAT_183289068 * 0x30b888b627c56ad3 ^ _DAT_183289078) + uVar13;
  _DAT_183288e10 = _DAT_183289068 ^ _DAT_183289078;
  _DAT_183288f08 = 0xfff;
  _DAT_183288f68 = func_0x00018b13def0(_DAT_183288ec0 ^ 0x40d4e4d8a9264d21);
  uVar13 = ((_DAT_183288f68 & 0xffffffff) * (ulonglong)_DAT_181a639c0 +
            (_DAT_183288f68 >> 0x20) * (_DAT_181a639b0 & 0xffffffff) << 0x20) +
           (_DAT_183288f68 & 0xffffffff) * (_DAT_181a639b0 & 0xffffffff) & 0x7fffffffffffffff;
  _DAT_183288d30 = _DAT_183288d30 ^ uVar13 ^ 0x1ba6471570953aa3;
  _DAT_183288e88 = (_DAT_183288e88 * -0x773468481ac224c7 ^ _DAT_183288d30) + uVar13;
  _DAT_183288ee8 = _DAT_183288e88 ^ _DAT_183288d30;
  _DAT_183288f30 = 0;
  _DAT_183288fd0 = func_0x00018b13def0(_DAT_1832890a0 ^ 0x22ff7c1d0021d4);
  uVar13 = _DAT_183288fd0 << 0x3d | _DAT_183288fd0 >> 3;
  _DAT_183289080 = _DAT_183289080 ^ uVar13 ^ 0xadae869e5946ea82;
  _DAT_1832890d8 = (_DAT_1832890d8 * 0x740cc66ad0756277 ^ _DAT_183289080) + uVar13;
  _DAT_183288f58 = _DAT_1832890d8 ^ _DAT_183289080;
  _DAT_183288fc8 = 0;
  switch(0xfff < uVar9) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb11c4d5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b11c4d5(void)

{
  longlong lVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  undefined8 *unaff_RBP;
  longlong unaff_R13;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar7;
  undefined1 auVar6 [16];
  uint uVar8;
  longlong lVar9;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  uint uVar10;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar11 [16];
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  uint uVar12;
  undefined1 auVar13 [16];
  
  *unaff_RBP = unaff_XMM13_Qa;
  unaff_RBP[1] = unaff_XMM13_Qb;
  unaff_RBP[4] = unaff_XMM8_Qa;
  unaff_RBP[5] = unaff_XMM8_Qb;
  unaff_RBP[6] = unaff_XMM6_Qa;
  unaff_RBP[7] = unaff_XMM6_Qb;
  lVar1 = *(longlong *)(unaff_RBX - 8);
  uVar4 = (_DAT_1832890c0 ^ _DAT_181a639d0) + _DAT_183288fc8 + 0xd5c77c3dcaebf6de;
  uVar5 = (_DAT_183288fc8 ^ _UNK_181a639d8) + _DAT_1832890c0 + 0xeec65a41c346e0be;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832890c0 ^ _DAT_181a639d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183288fc8 ^ _UNK_181a639d8;
  _DAT_183289078 =
       func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832890c0 + 0xeec65a41c346e0be) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183288fc8 + 0xd5c77c3dcaebf6de));
  _DAT_183288de8 =
       (_DAT_183288de8 ^ _DAT_183289078 & 0xfffffffffff80000) + 0xffc77e7dcfcff5ff ^
       0x702bbd2d6f17ca38;
  _DAT_183288e78 =
       (_DAT_183288e78 * -0x367657836eb24169 ^ _DAT_183288de8) +
       (_DAT_183289078 & 0xfffffffffff80000);
  _DAT_183288fe8 = _DAT_183288e78 ^ _DAT_183288de8;
  _DAT_183288e58 = 0xffc77e7dcfcff5ff;
  uVar4 = (_DAT_183288fc8 ^ _DAT_181a639e0) + _DAT_183289098 + 0x30952ed2ee143b5a;
  uVar5 = (_DAT_183289098 ^ _UNK_181a639e8) + _DAT_183288fc8 + 0x4fac61640389d92a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183288fc8 ^ _DAT_181a639e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183289098 ^ _UNK_181a639e8;
  _DAT_183288ee0 =
       func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183288fc8 + 0x4fac61640389d92a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183289098 + 0x30952ed2ee143b5a));
  uVar4 = (_DAT_183288ee0 ^ 0x95c13465e09aabd6) * -0x36bff996e41160c9;
  uVar4 = uVar4 << 0x36 | uVar4 >> 10;
  _DAT_183288e98 = (_DAT_183288e98 ^ uVar4) + 0x7f394fb669bfc155 ^ 0x9b5b6418560df13f;
  _DAT_183288ef0 = (_DAT_183288ef0 * -0x4784be8f43fa6413 ^ _DAT_183288e98) + uVar4;
  _DAT_183288ff8 = _DAT_183288ef0 ^ _DAT_183288e98;
  _DAT_183289070 = 0x7f394fb669bfc155;
  uVar4 = (~_DAT_183288e80 + 0xbc6f4b610780a4f) *
          ((_DAT_183289038 ^ 0xf4390b496ba5d68f) + (_DAT_183289038 & 0x74390b496ba5d68f) * 2);
  uVar4 = (uVar4 | _DAT_183288ff8) + (uVar4 & _DAT_183288ff8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183289000 = func_0x00018b13def0((uVar4 | 0xffffffff7bdddcc1) + (uVar4 & 0xffffffff7bdddcc1));
  uVar4 = _DAT_183289000 ^ 0xb67b3d6202cd7782;
  _DAT_183288fd8 = _DAT_183289088 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_183289060 = (_DAT_183289060 ^ uVar4) - 8 ^ 0xd26239897905bec0;
  _DAT_183288ed0 = (_DAT_183288ed0 * -0x5d4791cb9eeacbdf ^ _DAT_183289060) + uVar4;
  _DAT_183288d08 = _DAT_183288ed0 ^ _DAT_183289060;
  _DAT_183288e10 = 0xfffffffffffffff8;
  _DAT_183288d38 = func_0x00018b13def0(_DAT_183288f70 ^ 0x4bbae6c723aa5bc);
  uVar4 = (_DAT_183288d38 & 0x1f) << 0x1f | _DAT_183288d38 >> 0x21;
  _DAT_183288da0 = (_DAT_183288da0 ^ uVar4) + 0x8689baf40ebb1869 ^ 0x634665b8bdf4659c;
  _DAT_183289010 = (_DAT_183289010 * 0x2149b3a747867bbd ^ _DAT_183288da0) + uVar4;
  _DAT_183288db0 = _DAT_183289010 ^ _DAT_183288da0;
  _DAT_183289008 = 0x8689baf40ebb1869;
  uVar4 = (~_DAT_183288e48 + 0xf2b4f90bb67773b3) *
          ((_DAT_1832890c0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832890c0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183288e18) + (uVar4 & _DAT_183288e18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183288d40 = func_0x00018b13def0((uVar4 | 0xf2b4f90b32555097) + (uVar4 & 0xf2b4f90b32555097));
  uVar4 = _DAT_183288d40 - (_DAT_183288d40 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38) << 5 ^ _DAT_183288d40) &
          0x7fffffffffffffff;
  _DAT_183288ea0 = (_DAT_183288ea0 ^ uVar4) + 0xd4b06f449888c4e ^ 0x61931c66a0412b44;
  _DAT_183288ec8 = (_DAT_183288ec8 * -0x11dbbaca01168c7 ^ _DAT_183288ea0) + uVar4;
  _DAT_183288f90 = _DAT_183288ec8 ^ _DAT_183288ea0;
  _DAT_1832890c8 = 0xd4b06f449888c4e;
  uVar4 = (_DAT_1832890a8 ^ _DAT_181a639f0) + _DAT_183288fb8 + 0xf2b4f90b3255508f;
  uVar5 = (_DAT_183288fb8 ^ _UNK_181a639f8) + _DAT_1832890a8 + 0xd4b06f449888c4e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832890a8 ^ _DAT_181a639f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183288fb8 ^ _UNK_181a639f8;
  _DAT_183289008 =
       func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832890a8 + 0xd4b06f449888c4e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183288fb8 + 0xf2b4f90b3255508f));
  uVar4 = _DAT_183289008 >> 1 | _DAT_183289008;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 8 ^
          _DAT_183289008) * 0x746f73acdfaaca1b;
  _DAT_183289090 = _DAT_1832890d8 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_1832890d8 = (_DAT_1832890d8 ^ uVar4) - 8 ^ 0x531a8e87b5801b26;
  _DAT_183289070 = (_DAT_183289070 * -0x22387f372ffae911 ^ _DAT_1832890d8) + uVar4;
  _DAT_1832890c0 = _DAT_183289070 ^ _DAT_1832890d8;
  _DAT_183288e90 = 0xfffffffffffffff8;
  _DAT_1832890a8 = func_0x00018b13def0(_DAT_183289010 ^ 0xbae9621d82ef5225);
  uVar4 = _DAT_1832890a8 * -0x4ce3c06f50e255ed & 0xffffffffffffffc0;
  _DAT_183288f78 = (_DAT_183288f78 ^ uVar4) + 0x7f014e34498fc155 ^ 0x30b89fac5cf5b958;
  _DAT_183289018 = (_DAT_183289018 * 0x45fb4af807985523 ^ _DAT_183288f78) + uVar4;
  _DAT_183288fc0 = _DAT_183289018 ^ _DAT_183288f78;
  _DAT_183289080 = 0x7f014e34498fc155;
  _DAT_183289080 = func_0x00018b13def0(_DAT_183288fd0 + 0x9d8c0c4ee25b4b61 ^ 0x16);
  uVar4 = (_DAT_183289080 ^ 0x30ea57fd74ce4) & 0xfffffffffffff;
  _DAT_183288d38 = _DAT_1832890f0 ^ uVar4 ^ 0x7f00ce34398fb754;
  _DAT_183288ed8 = (_DAT_183288ed8 ^ uVar4) + 0x7f00ce34398fb754 ^ 0x5dd7fc01f8d80c34;
  _DAT_183288df0 = (_DAT_183288df0 * 0x470f6c91863f2d23 ^ _DAT_183288ed8) + uVar4;
  _DAT_1832890f0 = _DAT_183288df0 ^ _DAT_183288ed8;
  _DAT_183288de0 = 0x7f00ce34398fb754;
  uVar4 = (_DAT_183288ff8 ^ _DAT_181a63a00) + _DAT_183288f38 + 0x7f00ce34bdad9471;
  uVar5 = (_DAT_183288f38 ^ _UNK_181a63a08) + _DAT_183288ff8 + 0x7f00ce34398fb754;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183288ff8 ^ _DAT_181a63a00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183288f38 ^ _UNK_181a63a08;
  _DAT_183288e50 =
       func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183288ff8 + 0x7f00ce34398fb754) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183288f38 + 0x7f00ce34bdad9471));
  _DAT_183288fa0 = ~_DAT_183288e50 & 0x7f00ce34398fb754;
  _DAT_183288ea8 = _DAT_183288ea8 ^ _DAT_183288fa0 ^ 0x7e28f855add9c319;
  _DAT_183288ed0 = (_DAT_183288ed0 * -0x629196b2c5bbfb8b ^ _DAT_183288ea8) + _DAT_183288fa0;
  _DAT_183288d30 = _DAT_183288ed0 ^ _DAT_183288ea8;
  _DAT_183289068 = 0;
  _DAT_1832890a0 = func_0x00018b13def0(_DAT_183288e60 + 0x3ac3f4b542c74302 ^ 99);
  uVar4 = _DAT_1832890a0 >> 1 | _DAT_1832890a0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 4 ^
          _DAT_1832890a0;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38 ^ uVar5 ^
          0xfffffffffffffff8;
  _DAT_183288e10 = _DAT_183288d48 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_183289090 = (_DAT_183289090 ^ uVar4) - 8 ^ 0x469a75127847ea78;
  _DAT_183288e30 = (_DAT_183288e30 * -0x623189ebe1e567cd ^ _DAT_183289090) + uVar4;
  _DAT_183288e90 = _DAT_183288e30 ^ _DAT_183289090;
  _DAT_183289078 = 0xfffffffffffffff8;
  uVar4 = func_0x00018b13def0(_DAT_183288f08 ^ 0xc9a3c6c5d6be238f);
  _DAT_183288e20 = _DAT_183288e20 ^ ~uVar4 & 0xfffffffffffffff ^ 0xfba7e9cd2e44d9f8;
  _DAT_183288fe8 = (uVar4 * -0x78b6ec435baee991 ^ _DAT_183288e20) + (~uVar4 & 0xfffffffffffffff);
  _DAT_183288e80 = _DAT_183288fe8 ^ _DAT_183288e20;
  _DAT_183288da8 = 0;
  uVar4 = func_0x00018b13def0(_DAT_183288db8 + 0x4cc4b0b4dda942e0 ^ 0xd4);
  uVar5 = uVar4 ^ 0xfffffffffffffff8;
  _DAT_183288e70 = _DAT_183288fb0 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_183288ff8 = (uVar4 ^ uVar5) - 8 ^ 0xb72b2b143808ac1e;
  _DAT_183288f80 = (_DAT_183288f80 * -0xa2452707c90b7d5 ^ _DAT_183288ff8) + uVar5;
  _DAT_183288df0 = _DAT_183288f80 ^ _DAT_183288ff8;
  _DAT_183288e88 = 0xfffffffffffffff8;
  uVar4 = (_DAT_183288d60 ^ _DAT_181a63a10) + _DAT_183288fb0 + 0xd5c77c3dcaebf6de;
  uVar5 = (_DAT_183288fb0 ^ _UNK_181a63a18) + _DAT_183288d60 + 0xd5c77c3d4ec9d5fb;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183288d60 ^ _DAT_181a63a10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183288fb0 ^ _UNK_181a63a18;
  _DAT_183288ed0 =
       func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183288d60 + 0xd5c77c3d4ec9d5fb) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183288fb0 + 0xd5c77c3dcaebf6de));
  _DAT_1832890d0 = _DAT_1832890d0 ^ _DAT_183288ed0 ^ 0xd5c77c3d4ec9d5fb ^ 0x93c354b47fd5890;
  _DAT_183288e60 =
       (_DAT_183288e60 * 0x1229848647301553 ^ _DAT_1832890d0) +
       (_DAT_183288ed0 ^ 0xd5c77c3d4ec9d5fb);
  _DAT_183288e10 = _DAT_183288e60 ^ _DAT_1832890d0;
  _DAT_183288e00 = _DAT_183288e30;
  _DAT_183288eb8 = 0;
  _DAT_1832890d0 = func_0x00018b13def0(_DAT_183288fe8 ^ 0xf62304d5c29b2d3f);
  _DAT_183288ef8 = _DAT_183288d20 ^ _DAT_1832890d0 ^ 0xfffffffffffffff8;
  _DAT_183289088 = (_DAT_183289088 ^ _DAT_1832890d0) - 8 ^ 0xe4ddaefabf7ece29;
  _DAT_183288fb8 = (_DAT_183288fb8 * -0x4efc27558cc3c179 ^ _DAT_183289088) + _DAT_1832890d0;
  _DAT_183288fd0 = _DAT_183288fb8 ^ _DAT_183289088;
  _DAT_183288fd8 = 0xfffffffffffffff8;
  uVar4 = (~_DAT_183288d00 - 7) *
          ((unaff_RBX ^ 0x84222325 ^ _DAT_183288fb8) +
          ((unaff_RBX ^ 0x84222325) & _DAT_183288fb8) * 2);
  uVar4 = (uVar4 | _DAT_183288ee8) + (uVar4 & _DAT_183288ee8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183288f78 =
       func_0x00018b13def0((unaff_RBX ^ 0xffffffff7bdddcdd | uVar4) +
                           (uVar4 & (unaff_RBX ^ 0xffffffff7bdddcdd)));
  auVar6._8_8_ = 0;
  auVar6._0_8_ = unaff_RBX;
  uVar4 = _DAT_183288f78 ^ unaff_RBX;
  uVar7 = (uint)(unaff_RBX >> 0x20);
  auVar13._8_4_ = (uint)unaff_RBX;
  auVar13._0_8_ = unaff_RBX;
  auVar13._12_4_ = uVar7;
  uVar3 = (uint)unaff_RBX | (uint)DAT_1800627b0;
  uVar12 = SUB164(auVar13 & _DAT_1800627b0,0);
  uVar5 = SUB168(auVar13 & _DAT_1800627b0,0);
  uVar8 = SUB164(_DAT_1800627b0 ^ auVar13,0);
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar11 ^ auVar6,0);
  lVar9 = ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181a63ab0 +
           (ulonglong)uVar7 * (ulonglong)_DAT_181a63aa0 << 0x20) +
          (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181a63aa0;
  uVar2 = (((ulonglong)uVar10 * (ulonglong)_DAT_181a63a90 +
            ((SUB168(auVar11 ^ auVar6,0) >> 0x20) * (ulonglong)_DAT_181a63a90 +
             (ulonglong)_DAT_181a63a20 * (ulonglong)uVar10 << 0x20) +
            (ulonglong)uVar8 * (ulonglong)_DAT_181a63a50 +
            ((SUB168(_DAT_1800627b0 ^ auVar13,0) >> 0x20) * (ulonglong)_DAT_181a63a50 +
             (ulonglong)_DAT_181a63a40 * (ulonglong)uVar8 << 0x20) +
            (ulonglong)uVar12 * (ulonglong)_DAT_181a63a50 +
            ((uVar5 >> 0x20) * (ulonglong)_DAT_181a63a50 +
             (ulonglong)uVar12 * (ulonglong)_DAT_181a63a40 << 0x20) +
            (ulonglong)_DAT_181a63a30 * (unaff_RBX & 0xffffffff) +
            ((ulonglong)uVar7 * (ulonglong)_DAT_181a63a30 +
             (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181a63a20 << 0x20) + lVar9 +
           ((ulonglong)_DAT_181a63a70 * (ulonglong)uVar3 + _DAT_181a63a80 << 0x20) +
           (ulonglong)_DAT_181a63a60 * (ulonglong)uVar3) -
          (((ulonglong)uVar3 * (ulonglong)_DAT_181a63ae0 + _DAT_181a63b00 << 0x20) +
           (ulonglong)_DAT_181a63af0 * (ulonglong)uVar3 +
           (ulonglong)uVar12 * (ulonglong)_DAT_181a63af0 +
           ((uVar5 >> 0x20) * (ulonglong)_DAT_181a63af0 +
            (ulonglong)uVar12 * (ulonglong)_DAT_181a63ae0 << 0x20) +
           (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181a63ac0 +
           ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181a63ad0 +
            (unaff_RBX >> 0x20) * (ulonglong)_DAT_181a63ac0 << 0x20) + lVar9)) + 0x6e20dc160d9f2d8c;
  _DAT_183288ea0 = _DAT_183288d20 ^ uVar4 ^ uVar2;
  _DAT_183288eb8 = (_DAT_183288eb8 ^ uVar4) + uVar2 ^ 0x17c6fbee904d112b;
  _DAT_183288d90 = (_DAT_183288d90 * -0x4c2be199311ae613 ^ _DAT_183288eb8) + uVar4;
  _DAT_183288db8 = _DAT_183288d90 ^ _DAT_183288eb8;
  _DAT_183288fa8 = uVar2;
  unaff_RBP[0xe] = lVar1;
  _DAT_183288d20 = func_0x00018b13def0(_DAT_183288fe8 ^ 0xfaf88a83be8af800);
  uVar5 = _DAT_183288d20 ^ 0xc57664c77a9541fc;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38) ^ uVar5;
  _DAT_183288e40 = (_DAT_183288e40 ^ uVar5) + 0xdd77fdcf7a9f6bfc ^ 0xf83b2c0f613e5d0c;
  _DAT_183288ff8 = (_DAT_183288ff8 * 0x7d6d0f98a7aeb771 ^ _DAT_183288e40) + uVar5;
  _DAT_183288fc0 = _DAT_183288ff8 ^ _DAT_183288e40;
  _DAT_183288f60 = 0xdd77fdcf7a9f6bfc;
  _DAT_183289048 = func_0x00018b13def0(_DAT_183288dd8 + 0x5f05d6f48a3a7765 ^ 0x31);
  uVar4 = (_DAT_183289048 ^ 0x9bbe7b1dcf22b857) * -0x59e37364d86dbb01 ^ 0x9eb76d8dc175195;
  _DAT_183288f70 = (_DAT_183288f70 ^ uVar4) + 0x6affc7a188b52eae ^ 0xdbef643465cde862;
  _DAT_183288db8 = (_DAT_183288db8 * 0x70471878d4ec85f ^ _DAT_183288f70) + uVar4;
  _DAT_183288e30 = _DAT_183288db8 ^ _DAT_183288f70;
  _DAT_183288dd0 = 0x6affc7a188b52eae;
  _DAT_183288f20 = func_0x00018b13def0(_DAT_183288e00 ^ 0x852818547af5f134);
  _DAT_183288d00 =
       (_DAT_183288d00 ^ _DAT_183288f20 ^ 0xb428168d70305ba0) + 0x4bd7e9728fcfa460 ^
       0x95f078423988e039;
  _DAT_183288eb8 =
       (_DAT_183288eb8 * -0x48463ea2a0c861eb ^ _DAT_183288d00) +
       (_DAT_183288f20 ^ 0xb428168d70305ba0);
  _DAT_183289058 = _DAT_183288eb8 ^ _DAT_183288d00;
  _DAT_1832890e8 = 0x4bd7e9728fcfa460;
  uVar4 = (~_DAT_1832890f0 + 0xb428168d70305ba1) *
          ((_DAT_183288d18 ^ 0x84222305) + (ulonglong)((uint)_DAT_183288d18 & 0x84222305) * 2);
  uVar4 = (uVar4 | _DAT_183288d10) + (uVar4 & _DAT_183288d10);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183288f80 = func_0x00018b13def0((uVar4 | 0xb428168df41278a5) + (uVar4 & 0xb428168df41278a5));
  uVar3 = ~(uint)_DAT_183288f80 & 0x20;
  uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1);
  uVar4 = (uVar4 & 0x3333333333333330) + (uVar4 >> 2 & 0x3333333333333330);
  uVar4 = (ulonglong)
          ((uint)((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f07) * unaff_R13 >> 0x38) << 7) | uVar3);
  _DAT_183288db0 = _DAT_183288f58 ^ uVar4 ^ 0xb428168d70305bc0;
  _DAT_183288d00 = (_DAT_183288d00 ^ uVar4) + 0xb428168d70305bc0 ^ 0xcda33629f82c9067;
  _DAT_183289060 = (_DAT_183289060 * 0x27bfe211e411c8e3 ^ _DAT_183288d00) + uVar4;
  _DAT_183288e78 = _DAT_183289060 ^ _DAT_183288d00;
  _DAT_183288fe0 = 0xb428168d70305bc0;
  uVar4 = (~_DAT_183288da0 + 0x4bd7e9728fcfa461) *
          ((_DAT_183289078 ^ 0xb428168df41278e5) + (_DAT_183289078 & 0x3428168df41278e5) * 2);
  uVar4 = (uVar4 | _DAT_183288ff8) + (uVar4 & _DAT_183288ff8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183288f30 = func_0x00018b13def0((uVar4 | 0xffffffff7bdddc85) + (uVar4 & 0xffffffff7bdddc85));
  uVar4 = ~_DAT_183288f30 & 0xb428168d70305bc0;
  _DAT_183288e88 = _DAT_183288d20 ^ uVar4 ^ 0x20;
  _DAT_183288fa8 = (_DAT_183288fa8 ^ uVar4) + 0x20 ^ 0xa64fc06ba16fee72;
  _DAT_183288ee0 = (_DAT_183288ee0 * -0x699d19fdfba3a917 ^ _DAT_183288fa8) + uVar4;
  _DAT_183288ee8 = _DAT_183288ee0 ^ _DAT_183288fa8;
  _DAT_183288da8 = 0x20;
  uVar4 = (~_DAT_183288dd8 + 0x6e5263996e289549) *
          ((_DAT_183288d78 ^ 0x84222325) + (ulonglong)((uint)_DAT_183288d78 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183288ec8) + (uVar4 & _DAT_183288ec8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183288f10 = func_0x00018b13def0((uVar4 | 0x6e526399ea0ab66d) + (uVar4 & 0x6e526399ea0ab66d));
  _DAT_183288e68 =
       (_DAT_183288e68 ^ _DAT_183288f10 & 0x1ffffffffffffff) + 0x91ad9c6691d76ab8 ^
       0x508ba28bac241cec;
  _DAT_183289010 =
       (_DAT_183289010 * 0x3738c0f0e30fcae5 ^ _DAT_183288e68) + (_DAT_183288f10 & 0x1ffffffffffffff)
  ;
  _DAT_183288f58 = _DAT_183289010 ^ _DAT_183288e68;
  _DAT_183288ff8 = 0x91ad9c6691d76ab8;
  uVar4 = (_DAT_183288ef8 ^ _DAT_181a63b10) + _DAT_183288d08 + 0x84222305;
  uVar5 = (_DAT_183288d08 ^ _UNK_181a63b18) + _DAT_183288ef8 + 0x6e5263996e289548;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183288ef8 ^ _DAT_181a63b10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183288d08 ^ _UNK_181a63b18;
  _DAT_183288dc8 =
       func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183288ef8 + 0x6e5263996e289548) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183288d08 + 0x84222305));
  _DAT_183288d18 = _DAT_183288d78 ^ _DAT_183288dc8 ^ 0x6e5263996e289568;
  _DAT_183288e58 = (_DAT_183288e58 ^ _DAT_183288dc8) + 0x6e5263996e289568 ^ 0x58ba7a8652bf6597;
  _DAT_183288fa8 = (_DAT_183288fa8 * -0x296aa65a03e3dd2b ^ _DAT_183288e58) + _DAT_183288dc8;
  _DAT_183288d68 = _DAT_183288fa8 ^ _DAT_183288e58;
  _DAT_183288de8 = 0x6e5263996e289568;
  _DAT_183288d48 = func_0x00018b13def0(_DAT_183288da0 + 0xe243440c3d4fc8bf ^ 0x70);
  _DAT_183289000 =
       (_DAT_183289000 ^ _DAT_183288d48 & 0x1ffffffffffffff) + 0xbfb3af1977149998 ^
       0x71d14e02b3272b27;
  _DAT_183288d90 =
       (_DAT_183288d90 * -0x57406f7539ac6439 ^ _DAT_183289000) +
       (_DAT_183288d48 & 0x1ffffffffffffff);
  _DAT_183288f00 = _DAT_183288d90 ^ _DAT_183289000;
  _DAT_183288f88 = 0xbfb3af1977149998;
  uVar4 = (_DAT_1832890e0 ^ _DAT_181a63b20) + _DAT_183288ee0 + 0x84222305;
  uVar5 = (_DAT_183288ee0 ^ _UNK_181a63b28) + _DAT_1832890e0 + 0x404c50e688eb6668;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832890e0 ^ _DAT_181a63b20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183288ee0 ^ _UNK_181a63b28;
  uVar4 = func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) -
                              (_DAT_1832890e0 + 0x404c50e688eb6668) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183288ee0 + 0x84222305));
  _DAT_183288ea0 = (uVar4 ^ 0x2688eb6648) & 0x3fffffffff;
  _DAT_183288f38 = _DAT_183288f18 ^ _DAT_183288ea0 ^ 0x404c50e688eb6688;
  _DAT_183288f30 = (_DAT_183288f30 ^ _DAT_183288ea0) + 0x404c50e688eb6688 ^ 0x31e828a3271dcc74;
  _DAT_183288ea0 = (uVar4 * -0x219c90f09ac191fd ^ _DAT_183288f30) + _DAT_183288ea0;
  _DAT_183288d08 = _DAT_183288ea0 ^ _DAT_183288f30;
  _DAT_183288ee8 = 0x404c50e688eb6688;
  uVar4 = (~_DAT_183288d30 + 0x90ef8b02112a5559) *
          ((_DAT_183288e60 ^ 0xb7883a6e76086677) + (_DAT_183288e60 & 0x37883a6e76086677) * 2);
  uVar4 = (uVar4 | _DAT_183288da8) + (uVar4 & _DAT_183288da8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183288e18 = func_0x00018b13def0((uVar4 | 0x2767b16c6722332f) + (uVar4 & 0x2767b16c6722332f));
  uVar4 = _DAT_183288e18 ^ 0xf60986b919000e30;
  _DAT_183288fe8 = _DAT_183288fe8 ^ uVar4 ^ 0x4877c57103549aaa;
  _DAT_1832890e8 = (_DAT_1832890e8 ^ uVar4) + 0x4877c57103549aaa ^ 0x1c05d478ade73e14;
  _DAT_183288f90 = (_DAT_183288f90 * 0x764aa069faf359ad ^ _DAT_1832890e8) + uVar4;
  _DAT_183288ff8 = _DAT_183288f90 ^ _DAT_1832890e8;
  _DAT_183288e78 = 0x4877c57103549aaa;
  uVar4 = (_DAT_183288df8 ^ _DAT_181a63b30) + _DAT_183288e40 + 0xdd77fdcffebd48d9;
  uVar5 = (_DAT_183288e40 ^ _UNK_181a63b38) + (_DAT_183288df8 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183288df8 ^ _DAT_181a63b30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183288e40 ^ _UNK_181a63b38;
  _DAT_183288ec8 =
       func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183288df8 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183288e40 + 0xdd77fdcffebd48d9));
  uVar4 = _DAT_183288ec8 - (_DAT_183288ec8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ~((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38) << 5 ^ _DAT_183288ec8)
          & 0x5d77fdcf7a9f6bfc;
  _DAT_183288fd0 = (_DAT_183288fd0 ^ uVar4) + 0x2288023085609403 ^ 0x9da857ee8472933b;
  _DAT_183288e58 = (_DAT_183288e58 * -0x13c07a55cc5bc311 ^ _DAT_183288fd0) + uVar4;
  _DAT_183289060 = _DAT_183288e58 ^ _DAT_183288fd0;
  _DAT_183288d88 = 0x2288023085609403;
  uVar4 = (~_DAT_183288fa0 + 0x2288023085609404) *
          ((_DAT_183288da8 ^ 0xdd77fdcffebd48d9) + (_DAT_183288da8 & 0x5d77fdcffebd48d9) * 2);
  uVar4 = (uVar4 | _DAT_183288ee8) + (uVar4 & _DAT_183288ee8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183288e00 = func_0x00018b13def0((uVar4 | 0xffffffff7bdddcda) + (uVar4 & 0xffffffff7bdddcda));
  _DAT_183288f90 = _DAT_183288f90 ^ ~_DAT_183288e00 & 0xffffffffffffffc0 ^ 0xec3eacda28a9f10c;
  _DAT_183288d48 =
       (_DAT_183288d48 * -0x368b83fd9dbb7e41 ^ _DAT_183288f90) +
       (~_DAT_183288e00 & 0xffffffffffffffc0) ^ _DAT_183288f90;
  _DAT_183288ed8 = 0;
  _DAT_183289078 = func_0x00018b13def0(_DAT_183288ff8 + 0x1d0084050021ff ^ 0xb4);
  uVar4 = _DAT_183289078 & 0xfffffffffffff800;
  _DAT_183288eb8 = _DAT_183288d20 ^ uVar4 ^ 0x20;
  _DAT_183288ee0 = (_DAT_183288ee0 ^ uVar4) + 0x20 ^ 0xd682b46e368f901b;
  _DAT_183288e28 = (_DAT_183288e28 * 0x58f6f1ddaff1d021 ^ _DAT_183288ee0) + uVar4;
  _DAT_183289028 = _DAT_183288e28 ^ _DAT_183288ee0;
  _DAT_183288fb0 = 0x20;
  uVar4 = (_DAT_183288f58 ^ 0x84222305) + _DAT_183288fe0 + 0x84222305;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183288f58 ^ 0x84222305;
  uVar5 = ((_DAT_183288fe0 + _DAT_183288f58) * 0x2000 | _DAT_183288fe0 + _DAT_183288f58 >> 0x33) ^
          _DAT_183288fe0;
  _DAT_183288f90 =
       func_0x00018b13def0((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_183288f58 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183288fe0 + 0x84222305));
  uVar4 = (ulonglong)(~(uint)_DAT_183288f90 & 0x20);
  _DAT_183288f50 = _DAT_183288d90 ^ uVar4 ^ 0x20;
  uVar5 = (_DAT_183288f48 ^ uVar4) + 0x20 ^ 0x14b8a95ca1086fff;
  _DAT_183288e70 = (_DAT_183288e70 * 0x49727139b206b1b1 ^ uVar5) + uVar4;
  _DAT_183288f48 = _DAT_183288e70 ^ uVar5;
  _DAT_183288f60 = 0x20;
  switch(uVar2 - lVar1 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb11fc8a -----

undefined8 FUN_18b11fc8a(void)

{
  func_0x000180001044();
  return 0;
}


// ----- block @ rva 0xb128ce2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b128ce2(void)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int unaff_EBX;
  undefined8 *unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint unaff_XMM10_Da;
  ulonglong unaff_XMM12_Qa;
  
  *(undefined4 *)((longlong)unaff_RBP + 0x54) = unaff_ESI;
  uVar13 = _DAT_183288fc8;
  uVar9 = _DAT_183288f50;
  uVar7 = unaff_EBX << 6;
  *(bool *)(unaff_RBP + 0xc) = unaff_RBP[-1] == 0;
  uVar8 = uVar13 ^ _DAT_181a62dd0;
  uVar14 = uVar9 ^ _UNK_181a62dd8;
  lVar6 = uVar9 + 0x620fe34e;
  lVar4 = uVar13 + 0x388c9c13;
  uVar9 = uVar8 + lVar6;
  uVar13 = uVar14 + lVar4;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uVar14 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar14;
  _DAT_183288de0 =
       func_0x00018b13def0((uVar14 << 0x1d | uVar14 >> 0x23) - lVar4 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar6);
  _DAT_183288e20 = (_DAT_183288e20 ^ _DAT_183288de0 ^ 0xe62dc06b) + 0xdea15c78 ^ 0x1c8a4bb71d4c1d9;
  _DAT_183288fb8 =
       (_DAT_183288fb8 * -0x70ae51c19cfc149b ^ _DAT_183288e20) + (_DAT_183288de0 ^ 0xe62dc06b);
  _DAT_183289088 = _DAT_183288fb8 ^ _DAT_183288e20;
  _DAT_183288d28 = 0xdea15c78;
  _DAT_183288f78 = func_0x00018b13def0(_DAT_183289010 + 0x1a001a0affe7ff ^ 0x28);
  uVar9 = (_DAT_183288f78 & 0x3ffffffffff) >> 1 | _DAT_183288f78 & 0x3ffffffffff;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183288f78 & 0x3ffffffffff;
  uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar9 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar9;
  _DAT_183288ff0 = (_DAT_183288ff0 ^ uVar9) - 0x9e4a052e ^ 0xd1e327548ab984b7;
  _DAT_183288da0 = (_DAT_183288da0 * -0x16122c684cd788c5 ^ _DAT_183288ff0) + uVar9;
  _DAT_183289008 = _DAT_183288da0 ^ _DAT_183288ff0;
  _DAT_1832890f0 = _DAT_183288e28 ^ 0xffffffff61b5fad2;
  _DAT_183288e98 = 0x61b5fad2;
  uVar9 = (_DAT_183288f70 ^ _DAT_181a62de0) + _DAT_183288fd8 + 0x842224e5;
  uVar13 = (_DAT_183288fd8 ^ _UNK_181a62de8) + _DAT_183288f70 + 0x9e4a052e;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183288f70 ^ _DAT_181a62de0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288fd8 ^ _UNK_181a62de8;
  _DAT_183288de0 =
       func_0x00018b13def0((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183288f70 + 0x9e4a052e) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183288fd8 + 0x842224e5));
  uVar9 = _DAT_183288de0 ^ 0x9e4a052e;
  _DAT_183288ee8 = _DAT_183288f40 ^ uVar9 ^ 0x9e4a0cee;
  _DAT_183288f98 = (_DAT_183288f98 ^ uVar9) + 0x9e4a0cee ^ 0xd4608424e67272cf;
  _DAT_183288d28 = (_DAT_183288d28 * 0x20172b94ca35f961 ^ _DAT_183288f98) + uVar9;
  _DAT_183288f30 = _DAT_183288d28 ^ _DAT_183288f98;
  _DAT_183288db0 = 0x9e4a0cee;
  uVar9 = (~_DAT_183288dd8 + 0x61b5fad3) *
          ((_DAT_183288d70 ^ 0x1a682fcb) + (ulonglong)((uint)_DAT_183288d70 & 0x1a682fcb) * 2);
  uVar9 = (uVar9 | _DAT_183288d58) + (uVar9 & _DAT_183288d58);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_1832890d0 = func_0x00018b13def0((uVar9 | 0x7bddd519) + (ulonglong)((uint)uVar9 & 0x7bddd519))
  ;
  uVar9 = _DAT_1832890d0 >> 1 | _DAT_1832890d0;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = ((0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ _DAT_1832890d0) & 0x7fffffffffffffff;
  _DAT_183288dc0 = _DAT_1832890f8 ^ uVar9 ^ 0x1000007c0;
  _DAT_183288d90 = (_DAT_183288d90 ^ uVar9) + 0x1000007c0 ^ 0x94e4b9ec5544483;
  _DAT_183289050 = (_DAT_183289050 * 0x6a4554ed3ff8eaad ^ _DAT_183288d90) + uVar9;
  _DAT_183288f80 = _DAT_183289050 ^ _DAT_183288d90;
  _DAT_183288e48 = 0x7c0;
  _DAT_183289090 = func_0x00018b13def0(_DAT_183288ee0 + 0xd3ffa71900caffU ^ 0xe3);
  _DAT_183288fb0 = _DAT_1832890a0 ^ _DAT_183289090 ^ 0x1000007c0;
  _DAT_183288f28 = (_DAT_183288f28 ^ _DAT_183289090) + 0x1000007c0 ^ 0x3b845b22ac8accc;
  _DAT_183288e98 = (_DAT_183288e98 * -0x2a51311843201525 ^ _DAT_183288f28) + _DAT_183289090;
  _DAT_1832890e0 = _DAT_183288e98 ^ _DAT_183288f28;
  _DAT_183288d60 = 0x7c0;
  _DAT_183288d20 = func_0x00018b13def0(_DAT_1832890c8 ^ 0xffe3ffd096ffbbe0);
  uVar9 = _DAT_183288d20 & 0xfffffffff0000000;
  _DAT_183288e88 = _DAT_183289068 ^ uVar9 ^ 0x74ee480a;
  _DAT_183288ff8 = (_DAT_183288ff8 ^ uVar9) + 0x74ee480a ^ 0x53b4972c54e23e33;
  _DAT_183288d98 = (_DAT_183288d98 * 0x1bcd167ea4a0bf93 ^ _DAT_183288ff8) + uVar9;
  _DAT_183288d48 = _DAT_183288d98 ^ _DAT_183288ff8;
  _DAT_183288fd0 = 0x74ee480a;
  uVar9 = (~_DAT_183288e78 + 0xdea15c79) *
          ((_DAT_183288d70 ^ 0x1b75fcc2) + (ulonglong)((uint)_DAT_183288d70 & 0x1b75fcc2) * 2);
  uVar9 = (uVar9 | _DAT_1832890f0) + (uVar9 & _DAT_1832890f0);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183288f08 = func_0x00018b13def0((uVar9 | 0xc5d4a0ba) + (ulonglong)((uint)uVar9 & 0xc5d4a0ba))
  ;
  uVar9 = (ulonglong)(~(uint)_DAT_183288f08 & 0x9f57dfe7);
  _DAT_183289098 = _DAT_183288f50 ^ uVar9 ^ 0x17df93c5f;
  _DAT_183288d00 = (_DAT_183288d00 ^ uVar9) + 0x17df93c5f ^ 0x3e31eb29ad669c73;
  _DAT_183288fc8 = (_DAT_183288fc8 * -0x6a76a3c39d51159f ^ _DAT_183288d00) + uVar9;
  _DAT_183289058 = _DAT_183288fc8 ^ _DAT_183288d00;
  _DAT_183288da0 = 0x7df93c5f;
  uVar9 = (~_DAT_183288ea8 + 0xdea15c79) *
          ((_DAT_1832890e0 ^ 0x1b75fcc2) + (ulonglong)((uint)_DAT_1832890e0 & 0x1b75fcc2) * 2);
  uVar9 = (uVar9 | _DAT_183289020) + (uVar9 & _DAT_183289020);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183288fe0 = func_0x00018b13def0((uVar9 | 0xc5d4a0ba) + (ulonglong)((uint)uVar9 & 0xc5d4a0ba))
  ;
  uVar9 = (_DAT_183288fe0 ^ 0xdea15c78) * -0x11b4881003368d93;
  _DAT_183288f90 = (_DAT_183288f90 ^ uVar9) + 0x9e015c60 ^ 0xd24d5ebd3773ee24;
  _DAT_183288ea8 = (_DAT_183288ea8 * -0x525e6fdef2a408c3 ^ _DAT_183288f90) + uVar9;
  _DAT_183288f58 = _DAT_183288ea8 ^ _DAT_183288f90;
  _DAT_183288e80 = 0x9e015c60;
  uVar9 = (~_DAT_1832890f0 + 0x3c02b8c1) *
          ((_DAT_183288e28 ^ 0xc5d4a0ba) + (ulonglong)((uint)_DAT_183288e28 & 0xc5d4a0ba) * 2);
  uVar9 = (uVar9 | _DAT_183288f18) + (uVar9 & _DAT_183288f18);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183288f98 = func_0x00018b13def0((uVar9 | 0xf9d6187a) + (ulonglong)((uint)uVar9 & 0xf9d6187a))
  ;
  uVar9 = _DAT_183288f98 - (_DAT_183288f98 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183288f98;
  _DAT_183288d38 = _DAT_183288d58 ^ uVar9 ^ 0x7df93c5f;
  _DAT_1832890e0 = (_DAT_1832890e0 ^ uVar9) + 0x7df93c5f ^ 0x6b4f2d85de9f551b;
  _DAT_183288de8 = (_DAT_183288de8 * 0xd75437bb7e5643 ^ _DAT_1832890e0) + uVar9;
  _DAT_183289010 = _DAT_183288de8 ^ _DAT_1832890e0;
  _DAT_183288fa0 = 0x7df93c5f;
  uVar9 = func_0x00018b13def0(_DAT_183289028 + 0xffdd0083db001dff ^ 0x2a);
  uVar13 = uVar9 ^ 0x3dfd579b450aab41;
  _DAT_183288db8 =
       (uVar13 & 0xffffffff) * (_DAT_181a62df0 & 0xffffffff) +
       ((uVar13 & 0xffffffff) * (ulonglong)_DAT_181a62e00 +
        ((uVar13 & 0x7fffffffffffffff) >> 0x20) * (_DAT_181a62df0 & 0xffffffff) << 0x20) &
       0x7fffffffffffffff;
  _DAT_183288e10 = _DAT_183288e10 ^ _DAT_183288db8 ^ 0xcca99274df8ced0c;
  _DAT_1832890c8 = (uVar9 * -0x3cd50a70336a6345 ^ _DAT_183288e10) + _DAT_183288db8;
  _DAT_183288e78 = _DAT_1832890c8 ^ _DAT_183288e10;
  _DAT_183289020 = 0;
  _DAT_183288df0 = func_0x00018b13def0(_DAT_183288e68 + 0xff5c006a5a00c2ff ^ 0xb7);
  _DAT_183288e58 = _DAT_183288e58 ^ _DAT_183288df0 ^ 0x60a82018 ^ 0xdf1e3e9ea7eebb63;
  _DAT_183288f18 =
       (_DAT_183288f18 * -0x5e16e4d597d875c7 ^ _DAT_183288e58) + (_DAT_183288df0 ^ 0x60a82018);
  _DAT_183288fe0 = _DAT_183288f18 ^ _DAT_183288e58;
  _DAT_183288e08 = 0;
  _DAT_183288f10 = func_0x00018b13def0(_DAT_183289098 + 0xffdc007be2ffddff ^ 0xf6);
  uVar9 = _DAT_183288f10 << 0x3e | _DAT_183288f10 >> 2;
  _DAT_183288ef8 = _DAT_183288dc8 ^ uVar9 ^ 0x7c0;
  _DAT_183288f88 = (_DAT_183288f88 ^ uVar9) + 0x7c0 ^ 0xa11211a86aec3e5a;
  _DAT_183288d50 = (_DAT_183288d50 * 0x589398c36d02e63d ^ _DAT_183288f88) + uVar9;
  _DAT_1832890f0 = _DAT_183288d50 ^ _DAT_183288f88;
  _DAT_183288fd8 = 0x7c0;
  _DAT_183289090 = func_0x00018b13def0(_DAT_183288dc8 ^ uVar9 ^ 0x23ff839b00262f);
  auVar12 = _DAT_1800170c0;
  uVar9 = _DAT_183289090 >> 1 | _DAT_183289090;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183289090;
  _DAT_1832890b8 = _DAT_183289038 ^ uVar9 ^ 0x7c0;
  _DAT_183288e88 = (_DAT_183288e88 ^ uVar9) + 0x7c0 ^ 0xc104458ad8d7835b;
  _DAT_183289010 = (_DAT_183289010 * 0x4f35676241d8670d ^ _DAT_183288e88) + uVar9;
  _DAT_183288ee8 = _DAT_183289010 ^ _DAT_183288e88;
  _DAT_183289020 = 0x7c0;
  auVar10._8_8_ = _UNK_180144c38;
  auVar10._0_8_ = (ulonglong)uVar7 ^ 0x84222325;
  auVar11 = pshufb(auVar10 ^ _DAT_181a62e10,_DAT_1800170c0);
  uVar13 = auVar11._8_8_ + auVar11._0_8_;
  uVar9 = uVar13 + _DAT_183288d78;
  if (auVar11._4_4_ < 0) {
    uVar9 = _DAT_183288df8 ^ uVar13;
  }
  _DAT_183288f20 = func_0x00018b13def0(SUB161(auVar10 ^ _DAT_181a62e10,5) ^ uVar9);
  uVar9 = (_DAT_183288f20 << 0x3a | (_DAT_183288f20 ^ uVar7) >> 6) & 0x7ffffffffffffe00;
  _DAT_183288d48 = (ulonglong)(uVar7 & 0x7c0);
  _DAT_1832890c0 = (_DAT_1832890c0 ^ uVar9) + _DAT_183288d48 ^ 0xc670fc4e0957e01f;
  _DAT_183288ed0 = (_DAT_183288ed0 * 0x698daf8c658ed763 ^ _DAT_1832890c0) + uVar9;
  _DAT_183288da0 = _DAT_183288ed0 ^ _DAT_1832890c0;
  *(uint *)(unaff_RBP + 6) = uVar7 & 0x7c0;
  plVar2 = (longlong *)unaff_RBP[0xb];
  uVar3 = unaff_RBP[4];
  lVar4 = (**(code **)(plVar2 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(plVar2,uVar3,0);
  *(int *)(unaff_RBP + 0x10) = (int)*(char *)(lVar4 + *(int *)(unaff_RBP + 0x11));
  (**(code **)(plVar2 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(plVar2,uVar3,lVar4,2);
  unaff_RBP[3] = (ulonglong)*(uint *)(unaff_RBP + 0x10);
  _DAT_183289028 = func_0x00018b13def0(_DAT_1832890e8 ^ 0x19ff3a62ffac6d);
  uVar9 = _DAT_183289028 << 5 | _DAT_183289028 >> 0x3b;
  uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar9;
  _DAT_183289088 = (_DAT_183289088 ^ uVar9) + 0x7f8fbbfe ^ 0x7d97c2d5a24fbd64;
  _DAT_183288d98 = (_DAT_183288d98 * 0x3634ca145e9ec3d7 ^ _DAT_183289088) + uVar9;
  _DAT_183288e68 = _DAT_183288d98 ^ _DAT_183289088;
  _DAT_183288f70 = 0x7f8fbbfe;
  uVar9 = (~_DAT_183288e20 + 0xe7b5a4f9) *
          ((_DAT_183288d08 ^ 0xb140f5eb) + (ulonglong)((uint)_DAT_183288d08 & 0xb140f5eb) * 2);
  uVar9 = (uVar9 | _DAT_183288e40) + (uVar9 & _DAT_183288e40);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183288f28 = func_0x00018b13def0((uVar9 | 0x56f55113) + (ulonglong)((uint)uVar9 & 0x56f55113))
  ;
  _DAT_183288d68 =
       (_DAT_183288d68 ^ _DAT_183288f28 & 0x7fffffffffffff80) + 0xd2d77236 ^ 0xff02fdf40b31f479;
  _DAT_183289028 =
       (_DAT_183289028 * 0x100dbc34f5269de3 ^ _DAT_183288d68) +
       (_DAT_183288f28 & 0x7fffffffffffff80);
  _DAT_183288e48 = _DAT_183289028 ^ _DAT_183288d68;
  _DAT_183288ff0 = 0xd2d77236;
  uVar9 = (_DAT_183288e58 ^ _DAT_181a62e20) + _DAT_183289090 + 0x84222325;
  uVar13 = (_DAT_183289090 ^ _UNK_181a62e28) + _DAT_183288e58 + 0x40569be4;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183288e58 ^ _DAT_181a62e20;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183289090 ^ _UNK_181a62e28;
  _DAT_183288f88 =
       func_0x00018b13def0((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183288e58 + 0x40569be4) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183289090 + 0x84222325));
  uVar9 = _DAT_183288f88 << 0x15 | _DAT_183288f88 >> 0x2b;
  _DAT_183288e78 = (_DAT_183288e78 ^ uVar9) - 0x40569be4 ^ 0xfa5e30d235f4b84;
  _DAT_183288fb0 = (_DAT_183288fb0 * 0x15b4bc3a71ed5d27 ^ _DAT_183288e78) + uVar9;
  _DAT_183288e38 = _DAT_183288fb0 ^ _DAT_183288e78;
  _DAT_183289090 = 0xbfa9641c;
  uVar9 = (~_DAT_183288fb8 + 0x40569be5) *
          ((_DAT_183288d88 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183288d88 & 0x8422231a) * 2);
  uVar9 = (uVar9 | _DAT_183288f28) + (uVar9 & _DAT_183288f28);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183288de0 = func_0x00018b13def0((uVar9 | 0xc474b8fe) + (ulonglong)((uint)uVar9 & 0xc474b8fe))
  ;
  uVar9 = (_DAT_183288de0 ^ 0x40569bff) & 0x7ffffffffffff;
  _DAT_183289050 = _DAT_183288d40 ^ uVar9 ^ 0x40569c23;
  _DAT_183288da8 = (_DAT_183288da8 ^ uVar9) + 0x40569c23 ^ 0x5ff7977bc4633b9d;
  _DAT_183288e80 = (_DAT_183288e80 * -0x520d34d389e84dc3 ^ _DAT_183288da8) + uVar9;
  _DAT_183288e30 = _DAT_183288e80 ^ _DAT_183288da8;
  _DAT_183288f90 = 0x40569c23;
  _DAT_183288f58 = func_0x00018b13def0(_DAT_1832890d8 + 0x5aff96ea00dcff ^ 0x5d);
  uVar9 = (_DAT_183288f58 * -0x2461865a9d2bfcdb ^ 0x40569c23) & 0x7fffffffffff;
  _DAT_1832890c0 = _DAT_1832890a0 ^ uVar9 ^ 0x10000003f;
  _DAT_183288f08 = (_DAT_183288f08 ^ uVar9) + 0x10000003f ^ 0x711773a5e98dd984;
  _DAT_183288d18 = (_DAT_183288d18 * -0x74eec9f77f6f45fd ^ _DAT_183288f08) + uVar9;
  _DAT_183288f50 = _DAT_183288d18 ^ _DAT_183288f08;
  _DAT_183288e88 = 0x3f;
  uVar9 = (_DAT_183289070 ^ _DAT_181a62e30) + _DAT_183288d00 + 0x8422231a;
  uVar13 = (_DAT_183288d00 ^ _UNK_181a62e38) + _DAT_183289070 + 0x12c506d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183289070 ^ _DAT_181a62e30;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288d00 ^ _UNK_181a62e38;
  _DAT_1832890c8 =
       func_0x00018b13def0((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183289070 + 0x12c506d0) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183288d00 + 0x8422231a));
  uVar9 = _DAT_1832890c8 ^ 0x12c506ff;
  _DAT_183288fa8 = _DAT_183288fb8 ^ uVar9 ^ 0x12c5070f;
  _DAT_183288ee8 = (_DAT_183288ee8 ^ uVar9) + 0x12c5070f ^ 0x8846af4327976d75;
  _DAT_183288db0 = (_DAT_183288db0 * 0x1becd39b81986a7f ^ _DAT_183288ee8) + uVar9;
  _DAT_183289068 = _DAT_183288db0 ^ _DAT_183288ee8;
  _DAT_183288f58 = 0x12c5070f;
  uVar9 = (~_DAT_183288df8 + 0xed3af931) *
          ((_DAT_183288e78 ^ 0x96e7242a) + (ulonglong)((uint)_DAT_183288e78 & 0x96e7242a) * 2);
  uVar9 = (uVar9 | _DAT_183288e58) + (uVar9 & _DAT_183288e58);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183289090 = func_0x00018b13def0((uVar9 | 0x7bdddd1a) + (ulonglong)((uint)uVar9 & 0x7bdddd1a))
  ;
  uVar9 = (ulonglong)(~(uint)_DAT_183289090 & 0x12c5070f) ^ 0x12c5070f;
  _DAT_183288fe8 = (_DAT_1832890a8 ^ uVar9 ^ 0x10000003f ^ uVar9) + 0x10000003f ^ 0xbf9b83e850f50145
  ;
  _DAT_183288e90 = (_DAT_183288e90 * -0x767690f57309227b ^ _DAT_183288fe8) + uVar9;
  _DAT_183288e28 = _DAT_183288e90 ^ _DAT_183288fe8;
  _DAT_183288f90 = 0x3f;
  _DAT_183288e70 = func_0x00018b13def0(_DAT_183289040 + 0x8e003d91ff71ff ^ 3);
  uVar9 = _DAT_183288e70 << 0xe | _DAT_183288e70 >> 0x32;
  _DAT_1832890a0 = _DAT_183288f58 ^ uVar9 ^ 0xc2bcb1a7;
  _DAT_183288f88 = (_DAT_183288f88 ^ uVar9) + 0xc2bcb1a7 ^ 0xce2a79f7a56b518a;
  _DAT_183289068 = (_DAT_183289068 * -0x3414c5635c939265 ^ _DAT_183288f88) + uVar9;
  _DAT_183288dc0 = _DAT_183289068 ^ _DAT_183288f88;
  _DAT_183288e10 = 0xc2bcb1a7;
  uVar9 = (_DAT_1832890e8 ^ _DAT_181a62e40) + _DAT_183288e80 + 0x469e9282;
  uVar13 = (_DAT_183288e80 ^ _UNK_181a62e48) + _DAT_1832890e8 + 0x3d434e98;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832890e8 ^ _DAT_181a62e40;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288e80 ^ _UNK_181a62e48;
  _DAT_183288e98 =
       func_0x00018b13def0((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1832890e8 + 0x3d434e98) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183288e80 + 0x469e9282));
  _DAT_183288e48 = _DAT_183288d98 ^ _DAT_183288e98 ^ 0x10000003f;
  _DAT_183288eb8 = (_DAT_183288eb8 ^ _DAT_183288e98) + 0x10000003f ^ 0x6d4dad06bd9ffb60;
  _DAT_183288ff8 = (_DAT_183288ff8 * -0x4a17ee7d907a3493 ^ _DAT_183288eb8) + _DAT_183288e98;
  _DAT_183288de0 = _DAT_183288ff8 ^ _DAT_183288eb8;
  _DAT_183288e78 = 0x3f;
  uVar9 = (~_DAT_183288fa8 + 0xd2d77237) *
          ((_DAT_183288f50 ^ 0xfbad98db) + (ulonglong)((uint)_DAT_183288f50 & 0xfbad98db) * 2);
  uVar9 = (uVar9 | _DAT_183288f10) + (uVar9 & _DAT_183288f10);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183289038 = func_0x00018b13def0((uVar9 | 0x297aeaed) + (ulonglong)((uint)uVar9 & 0x297aeaed))
  ;
  _DAT_183289020 = (_DAT_183289020 ^ _DAT_183288ea0) + 0x52873236 ^ 0x97d3bef2ceff1f1b;
  _DAT_183288fc8 = (_DAT_183288fc8 * 0x88a12c395f6a0a5 ^ _DAT_183289020) + _DAT_183288ea0;
  _DAT_183288f00 = _DAT_183288fc8 ^ _DAT_183289020;
  _DAT_1832890b0 = 0x52873236;
  uVar9 = (~_DAT_183288d60 + 0xa50e646d) *
          ((_DAT_183288e40 ^ 0x297aeaed) + (ulonglong)((uint)_DAT_183288e40 & 0x297aeaed) * 2);
  uVar9 = (uVar9 | _DAT_183288f28) + (uVar9 & _DAT_183288f28);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183288ea8 = func_0x00018b13def0((uVar9 | 0x8c748e81) + (ulonglong)((uint)uVar9 & 0x8c748e81))
  ;
  uVar9 = _DAT_183288ea8 - (_DAT_183288ea8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = _DAT_183288ea8 ^ 0xad58c9c8 ^
          (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7;
  _DAT_183288e58 = _DAT_183288f40 ^ uVar9 ^ 0x152672e34;
  _DAT_183288f10 = (_DAT_183288f10 ^ uVar9) + 0x152672e34 ^ 0x1abb51cc87fd5ef7;
  _DAT_183288e90 = (_DAT_183288e90 * -0x22930243d291461d ^ _DAT_183288f10) + uVar9;
  _DAT_183288d90 = _DAT_183288e90 ^ _DAT_183288f10;
  _DAT_183288f00 = 0x52672e34;
  uVar9 = ((_DAT_183288f28 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183288f28 & 0x8422231a) * 2) *
          -_DAT_183288f28;
  uVar9 = (uVar9 | _DAT_183288ef0) + (uVar9 & _DAT_183288ef0);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183288d58 = func_0x00018b13def0((uVar9 | 0x8422231a) + (ulonglong)((uint)uVar9 & 0x8422231a))
  ;
  _DAT_183288f40 = _DAT_1832890f8 ^ _DAT_183288d58 ^ 0x3f;
  _DAT_183289080 = (_DAT_183289080 ^ _DAT_183288d58) + 0x3f ^ 0x9e5f04176bfd6146;
  _DAT_183288e88 = (_DAT_183288e88 * -0x59fe170796128001 ^ _DAT_183289080) + _DAT_183288d58;
  _DAT_183288d20 = _DAT_183288e88 ^ _DAT_183289080;
  _DAT_183288ea8 = 0x3f;
  _DAT_183288da0 = func_0x00018b13def0(_DAT_183288f20 + 0xffe30003e4002dff ^ 0x61);
  _DAT_183289040 = (_DAT_1832890f8 ^ _DAT_183288da0 ^ 0x7f8fbbfe) + 0x80704401;
  _DAT_1832890f8 = _DAT_183289040 ^ 0xa31ef91531c36a65;
  _DAT_183288f18 =
       (_DAT_183288f18 * 0x3652189db009346f ^ _DAT_1832890f8) + (_DAT_183288da0 ^ 0x7f8fbbfe);
  _DAT_183289040 = _DAT_183289040 ^ 0xa31ef915b1b32e64;
  _DAT_183289090 = 0x80704401;
  uVar9 = (_DAT_183288d80 ^ _DAT_181a62e50) + _DAT_183288ea0 + 0xfbad98db;
  uVar13 = (_DAT_183288ea0 ^ _UNK_181a62e58) + _DAT_183288d80 + 0x80704401;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183288d80 ^ _DAT_181a62e50;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183288ea0 ^ _UNK_181a62e58;
  _DAT_183288d90 =
       func_0x00018b13def0((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183288d80 + 0x80704401) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183288ea0 + 0xfbad98db));
  uVar9 = (ulonglong)((uint)~((int)_DAT_183288d90 * 2) >> 1 & 0x7f8fbbfe) * -0x57eddb04ebdaed41;
  _DAT_183289010 = _DAT_183289010 ^ uVar9 ^ 0xaf08f08f4854989e;
  _DAT_183288d60 = (_DAT_183288d60 * -0x32b09e56602dd6bd ^ _DAT_183289010) + uVar9;
  _DAT_183288ea0 = _DAT_183288d60 ^ _DAT_183289010;
  _DAT_183288fd0 = 0;
  uVar9 = ((_DAT_1832890b8 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1832890b8 & 0x8422231a) * 2) *
          -_DAT_183288e88;
  uVar9 = (uVar9 | _DAT_183288e00) + (uVar9 & _DAT_183288e00);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183288d68 = func_0x00018b13def0((uVar9 | 0x8422231a) + (ulonglong)((uint)uVar9 & 0x8422231a))
  ;
  uVar9 = _DAT_183288d68 & 0xfffffffff;
  _DAT_183289000 = _DAT_183288f20 ^ uVar9 ^ 0x3f;
  _DAT_183288fd8 = (_DAT_183288fd8 ^ uVar9) + 0x3f ^ 0x18cb6acaca53573a;
  _DAT_183288db0 = (_DAT_183288db0 * 0x5485af0407dc5f23 ^ _DAT_183288fd8) + uVar9;
  _DAT_183289050 = _DAT_183288db0 ^ _DAT_183288fd8;
  _DAT_183289070 = 0x3f;
  uVar9 = (_DAT_183288ef0 ^ 0x8422231a) + _DAT_183289008 + 0x8422231a;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183288ef0 ^ 0x8422231a;
  uVar13 = ((_DAT_183289008 + _DAT_183288ef0) * 0x2000 | _DAT_183289008 + _DAT_183288ef0 >> 0x33) ^
           _DAT_183289008;
  _DAT_183288d98 =
       func_0x00018b13def0((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_183288ef0 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183289008 + 0x8422231a));
  uVar9 = _DAT_183288d98 << 0x2f | (_DAT_183288d98 & 0x7fffffffffffffff) >> 0x11;
  _DAT_183288d68 = _DAT_183288fb8 ^ uVar9 ^ 0x3f;
  _DAT_1832890c8 = (_DAT_1832890c8 ^ uVar9) + 0x3f ^ 0xf50506ef697dd855;
  _DAT_183288f18 = (_DAT_183288f18 * -0x54f1259678937b87 ^ _DAT_1832890c8) + uVar9;
  _DAT_183288e30 = _DAT_183288f18 ^ _DAT_1832890c8;
  _DAT_183289078 = 0x3f;
  uVar9 = unaff_RBP[3];
  auVar11._8_8_ = _UNK_180132e68;
  auVar11._0_8_ = uVar9 ^ 0x84222325;
  auVar12 = pshufb(auVar11 ^ _DAT_181a62e60,auVar12);
  uVar8 = auVar12._8_8_ + auVar12._0_8_;
  uVar13 = uVar8 + _DAT_183289038;
  if (auVar12._4_4_ < 0) {
    uVar13 = _DAT_183288fc8 ^ uVar8;
  }
  _DAT_183288f58 = func_0x00018b13def0(SUB161(auVar11 ^ _DAT_181a62e60,5) ^ uVar13);
  uVar13 = _DAT_183288f58 >> 1 | (ulonglong)((_DAT_183288f58 & 1) != 0) << 0x3f;
  uVar5 = (uint)uVar9 & 0x3f;
  _DAT_183288ed8 = (ulonglong)uVar5;
  _DAT_1832890e8 = (_DAT_1832890e8 ^ uVar13) + _DAT_183288ed8 ^ 0xe0e8847334e893f0;
  _DAT_183288da8 = (_DAT_183288da8 * -0x757a87957ed4a315 ^ _DAT_1832890e8) + uVar13;
  _DAT_1832890a8 = _DAT_183288da8 ^ _DAT_1832890e8;
  unaff_RBP[0x10] = *unaff_RBP;
  uVar7 = *(uint *)(unaff_RBP + 0xe);
  *(uint *)(unaff_RBP + 0x11) = uVar7;
  uVar9 = (ulonglong)uVar7 ^ 0x84222325;
  uVar13 = uVar9 ^ _DAT_183288ee8;
  lVar4 = uVar9 + _DAT_183288d68;
  uVar9 = uVar13 + lVar4;
  uVar8 = (_DAT_183288d68 ^ 1) + _DAT_183288ee8 + 1;
  iVar1 = *(int *)(unaff_RBP + 6);
  uVar13 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar13;
  uVar9 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183288d68 ^ 1;
  _DAT_183288f38 =
       func_0x00018b13def0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183288ee8 + 1) ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - lVar4);
  uVar15 = uVar7 & unaff_XMM10_Da;
  uVar16 = uVar7 ^ unaff_XMM10_Da;
  uVar13 = uVar7 ^ unaff_XMM12_Qa;
  uVar9 = _DAT_183288f38 << 0x2b | _DAT_183288f38 >> 0x15;
  _DAT_183288dc8 =
       (uVar13 & 0xffffffff) * (ulonglong)_DAT_181a62eb0 +
       ((uVar13 & 0xffffffff) * (ulonglong)_DAT_181a62ee0 +
        (unaff_XMM12_Qa >> 0x20) * (ulonglong)_DAT_181a62eb0 << 0x20) +
       ((ulonglong)uVar16 * (ulonglong)_DAT_181a62ed0 << 0x20) +
       (ulonglong)uVar16 * (ulonglong)_DAT_181a62ec0 +
       ((ulonglong)uVar15 * (ulonglong)_DAT_181a62ea0 << 0x20 |
       (ulonglong)uVar15 * (ulonglong)_DAT_181a62e90) +
       ((ulonglong)uVar7 * (ulonglong)_DAT_181a62e80 << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_181a62e70 +
       (-(((ulonglong)uVar16 * (ulonglong)_DAT_181a62f20 << 0x20) +
         (ulonglong)uVar16 * (ulonglong)_DAT_181a62f10) -
       (((ulonglong)(uVar7 | unaff_XMM10_Da) * (ulonglong)_DAT_181a62f40 << 0x20) +
       (ulonglong)(uVar7 | unaff_XMM10_Da) * (ulonglong)_DAT_181a62f30 +
       ((ulonglong)uVar15 * (ulonglong)_DAT_181a62f20 << 0x20 |
       (ulonglong)uVar15 * (ulonglong)_DAT_181a62f10))) + 0xabfaf56aded63fe3;
  _DAT_1832890d8 = _DAT_183289040 ^ uVar9 ^ _DAT_183288dc8;
  _DAT_183288d70 = (_DAT_183288d70 ^ uVar9) + _DAT_183288dc8 ^ 0xbc7abc1c29d59dc3;
  _DAT_1832890c0 = (_DAT_1832890c0 * 0x208d20874e1d2243 ^ _DAT_183288d70) + uVar9;
  _DAT_183288da8 = _DAT_1832890c0 ^ _DAT_183288d70;
  _DAT_183288dc8 = _DAT_183288dc8 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x12) = uVar5 + iVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0xc)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb12b3e9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b12b3e9(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x88) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb12b55f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b12b55f(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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


// ----- block @ rva 0xb12b5e0 -----

undefined8 thunk_FUN_18b116530(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xb12b73b -----

void FUN_18b12b73b(void)

{
  return;
}


// ----- block @ rva 0xb1404bc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1404bc(void)

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


// ----- block @ rva 0xb140515 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b140515(void)

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


// ----- block @ rva 0xb140658 -----

void FUN_18b140658(void)

{
  return;
}


// ----- block @ rva 0xb14108a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b14108a(void)

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


// ----- block @ rva 0xb141dcb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18b140ad4(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  (**(code **)(unaff_R14 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0xb1425ed -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1425ed(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->NewByteArray /*0x580*/))();
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


// ----- block @ rva 0xb1441cd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1441cd(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb1442b7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1442b7(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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


// ----- block @ rva 0xb144793 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b144793(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb14504f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b14504f(void)

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


// ----- block @ rva 0xb1450a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1450a3(void)

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


// ----- block @ rva 0xb1450fc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1450fc(void)

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


// ----- block @ rva 0xb1451fa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1451fa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a69558)();
  return;
}


// ----- block @ rva 0xb1452bd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1452bd(void)

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


// ----- block @ rva 0xb145311 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b145311(void)

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


// ----- block @ rva 0xb14539d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b14539d(void)

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


// ----- block @ rva 0xb1458f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1458f2(void)

{
  FUN_190ddce00();
  (*_DAT_181a69488)();
  return;
}


// ----- block @ rva 0xb145ac7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b145ac7(void)

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


// ----- block @ rva 0xb145d64 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b145d64(void)

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


// ----- block @ rva 0xb145dd3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b145dd3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a69578)();
  return;
}


// ----- block @ rva 0xb145e08 -----

void FUN_18b145e08(void)

{
  return;
}


// ----- block @ rva 0xb145f80 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b145f80(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181a6a328)();
  return;
}


// ----- block @ rva 0xb1460e8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1460e8(void)

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


// ----- block @ rva 0xb146761 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b146761(void)

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


// ----- block @ rva 0xb146d11 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b146d11(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181a69e18)();
  return;
}


// ----- block @ rva 0xb14772f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b14772f(void)

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


// ----- block @ rva 0xb147a8c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b147a8c(void)

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


// ----- block @ rva 0xb147b58 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b147b58(void)

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


// ----- block @ rva 0xb1480ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1480ac(void)

{
  FUN_190de3220();
  (*_DAT_181a69bf8)();
  return;
}


// ----- block @ rva 0xb14843d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b14843d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a69f98)();
  return;
}


// ----- block @ rva 0xb148802 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b148802(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a69958)();
  return;
}


// ----- block @ rva 0xb14885d -----

void FUN_18b14885d(void)

{
  return;
}


// ----- block @ rva 0xb148871 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b148871(void)

{
  (*_DAT_181a6a548)();
  return;
}


// ----- block @ rva 0xb14887c -----

void FUN_18b14887c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb14b18b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b14b18b(void)

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


// ----- block @ rva 0xb14b32c -----

void FUN_18b14b32c(void)

{
  return;
}


// ----- block @ rva 0xb14b395 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b14b395(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int iStack0000000000000050;
  ulonglong uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined8 in_stack_00000090;
  
  iStack0000000000000050 = 0;
  uStack0000000000000060 = 0x38;
  uStack0000000000000058 = (ulonglong)(uint)(int)(char)((ulonglong)in_stack_00000090 >> 0x38);
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb14b9fe -----

undefined8 thunk_FUN_18b14b315(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xb14c70b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b14c70b(void)

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


// ----- block @ rva 0xb14d46f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b14d46f(void)

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


// ----- block @ rva 0xb14e7fa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b14e7fa(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb14e93d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b14e93d(void)

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


// ----- block @ rva 0xb14fe11 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b14fe11(undefined8 param_1,undefined8 param_2)

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


// ----- block @ rva 0xb15381d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b15381d(void)

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


// ----- block @ rva 0xb153f4e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b153f4e(void)

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


// ----- block @ rva 0xb153fa2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b153fa2(void)

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


// ----- block @ rva 0xb154091 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b154091(void)

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


// ----- block @ rva 0xb154451 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b154451(void)

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


// ----- block @ rva 0xb15456c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15456c(void)

{
  FUN_190de3220();
  (*_DAT_181a6c968)();
  return;
}


// ----- block @ rva 0xb1545e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1545e6(void)

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


// ----- block @ rva 0xb154687 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b154687(void)

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


// ----- block @ rva 0xb154c33 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b154c33(void)

{
  FUN_190de3220();
  (*_DAT_181a6ca78)();
  return;
}


// ----- block @ rva 0xb154cd2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b154cd2(void)

{
  FUN_190dd72e0();
  (*_DAT_181a6cbf8)();
  return;
}


// ----- block @ rva 0xb154de1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b154de1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a6c938)();
  return;
}


// ----- block @ rva 0xb154e15 -----

void FUN_18b154e15(void)

{
  return;
}


// ----- block @ rva 0xb154e24 -----

void FUN_18b154e24(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb154f9c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b154f9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181a6d8e8)();
  return;
}


// ----- block @ rva 0xb1556c1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1556c1(void)

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


// ----- block @ rva 0xb15594a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b15594a(void)

{
  (*_DAT_181a6dbf8)();
  return;
}


// ----- block @ rva 0xb15610d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b15610d(void)

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


// ----- block @ rva 0xb156383 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b156383(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000b4;
  undefined2 uStack00000000000000b8;
  undefined4 uStack00000000000000ec;
  
  uStack00000000000000ec = 0xf6d16018;
  uVar1 = rdtsc();
  uStack00000000000000b4 = 0x3a0020;
  uStack00000000000000b8 = 0x20;
  (*_DAT_181a6cdc8)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}


// ----- block @ rva 0xb1564b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b1564b1(void)

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


// ----- block @ rva 0xb156573 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b156573(void)

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


// ----- block @ rva 0xb1569e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b1569e1(void)

{
  (*_DAT_181a6d968)();
  return;
}


// ----- block @ rva 0xb156f36 -----

void FUN_18b156f36(void)

{
  return;
}


// ----- block @ rva 0xb157a74 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157a74(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a6d278)();
  return;
}


// ----- block @ rva 0xb157ada -----

void FUN_18b157ada(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb157c6d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157c6d(void)

{
  FUN_190ddfc90();
  (*_DAT_181a6dcf8)();
  return;
}


// ----- block @ rva 0xb157cc4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b157cc4(void)

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


// ----- block @ rva 0xb157cda -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157cda(void)

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


// ----- block @ rva 0xb157d13 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157d13(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a6dc88)();
  return;
}


// ----- block @ rva 0xb157d2c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b157d2c(void)

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


// ----- block @ rva 0xb157ddc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b157ddc(void)

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


// ----- block @ rva 0xb157e00 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b157e00(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a6dc68)();
  return;
}


// ----- block @ rva 0xb157e20 -----

void FUN_18b157e20(void)

{
  return;
}


// ----- block @ rva 0xb157e28 -----

void FUN_18b157e28(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

