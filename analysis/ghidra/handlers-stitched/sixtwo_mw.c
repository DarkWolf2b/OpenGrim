// ===== STITCHED CORPUS: sixtwo.mw =====
// handlers: 9  continuation blocks: 90  unresolved table targets: 0
// tables not in tables.json: ['0x1098d8', '0x170c0', '0x19c088', '0x62bf8', '0xb2a8f0', '0xb2ae08', '0xb2ae18', '0xb2ae28', '0xb2ae38', '0xb2ae58', '0xb2ae68', '0xb2ae78', '0xb2ae88', '0xb2ae98', '0xb31e40', '0xb31e48', '0xb31e50', '0xb31e58', '0xb31e60', '0xb31e68']

// ===== Lsixtwo/mw; _6cbe60407787b8c91479d0775ab74599 ()V (handler @ image 1871c8d00, runtime 6fffeedd8d00) =====

void FUN_1871c8d00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001871c8e09 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b33668 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mw; cmD ()I (handler @ image 18718b150, runtime 6fffeed9b150) =====

void FUN_18718b150(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018718b170 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b28c00 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/mw; cmE ()[Lsixtwo/mw; (handler @ image 18718b350, runtime 6fffeed9b350) =====

void FUN_18718b350(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xa51e,0x1d2)
      /* POOL[0xa51e,0x1d2]: xtwo/oo | (Lsixtwo/os;ZZZIZ)V | ane | sixtwo/mw | uWTdl | Lsixtwo/mw; | sixtwo/qL | dbI | (Lnet/minecraft/class_243;Lsixtwo/ou;Lsixtwo/mw;Lsixtwo/gg;)V | sixtwo/gV | bcl | ()Lnet/minecraft/class_2680; | bck | sixtwo/eJ | cnb | sixtwo/eK | method_26215 | aAa | ImshN | aAM | ()Lsixtwo/oj; | sixtwo/oj | cEy | cEE | anf | method_49638 | (Lnet/minecraft/class_2374;)Lnet/minecraft/class_2338; | aAe | zrgbM | cnd | method_2902 | (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Z | CzAnG | method_6104 | (Lnet/minecraft/class_1268;) */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018718b429 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b28cf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mw; cmF ([B)Ljava/lang/String; (handler @ image 187190230, runtime 6fffeeda0230) =====

void FUN_187190230(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001871902d3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b2a480 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/mw; cmG (IJ)I (handler @ image 1871ba4c0, runtime 6fffeedca4c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871ba4c0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uRam000000018317ff60 = func_0x0001871c4f50(uRam00000001831800c0 ^ 0xddabb1001d8529ab);
  uRam0000000183180078 =
       (uRam0000000183180078 ^ uRam000000018317ff60 * -0x65ae9bfef9b60031) + 0xe35bc7dfd7ff8f3b ^
       0x5c1507262eefda2c;
  uRam0000000183180028 =
       (uRam0000000183180028 * -0x64678829e94939e7 ^ uRam0000000183180078) +
       uRam000000018317ff60 * -0x65ae9bfef9b60031;
  uRam0000000183180090 = uRam0000000183180028 ^ uRam0000000183180078;
  uRam00000001831800f0 = 0xe35bc7dfd7ff8f3b;
  uVar7 = (uRam000000018317ffd8 ^ _UNK_180b31e40) + uRam0000000183180038 + 0xde936b1e29409373;
  uVar8 = (uRam0000000183180038 ^ _UNK_180b31e48) + uRam000000018317ffd8 + 0x490e81ce29007137;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018317ffd8 ^ _UNK_180b31e40;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183180038 ^ _UNK_180b31e48;
  uRam0000000183180020 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018317ffd8 + 0x490e81ce29007137) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183180038 + 0xde936b1e29409373));
  uVar7 = uRam0000000183180020 << 0x22 | uRam0000000183180020 >> 0x1e;
  uRam00000001831800f8 = (uRam00000001831800f8 ^ uVar7) + 0x979dead08462c161 ^ 0xd512dfa9ab1d20c9;
  uRam000000018317ff78 = (uRam000000018317ff78 * 0x30428092fe8836b7 ^ uRam00000001831800f8) + uVar7;
  uRam000000018317ff80 = uRam000000018317ff78 ^ uRam00000001831800f8;
  uRam000000018317ffd0 = 0x979dead08462c161;
  uRam00000001831800f0 = func_0x0001871c4f50(lRam000000018317ff90 + 0x1d7aab93645c0e42U ^ 0xbc);
  uVar7 = uRam00000001831800f0 << 0x39 | uRam00000001831800f0 >> 7;
  uRam000000018317fff0 = (uRam000000018317fff0 ^ uVar7) + 0x328b23d2efcfa737 ^ 0xa178baf0e18fda91;
  uRam00000001831800e8 = (uRam00000001831800e8 * -0x78c2fa4a437dfd69 ^ uRam000000018317fff0) + uVar7
  ;
  uRam0000000183180070 = uRam00000001831800e8 ^ uRam000000018317fff0;
  uRam000000018317ffb0 = 0x328b23d2efcfa737;
  uVar7 = (~uRam000000018317ffc0 + 0xcd74dc2d103058ca) *
          ((uRam0000000183180018 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183180018 & 0x84225cda) * 2);
  uVar7 = (uVar7 | uRam00000001831800b0) + (uVar7 & uRam00000001831800b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar7 = func_0x0001871c4f50((uVar7 | 0xcd74dc2d94120413) + (uVar7 & 0xcd74dc2d94120413));
  uVar7 = uVar7 & 0xffffffffff000000;
  uRam000000018317ffe0 = uRam000000018317ffa8 ^ uVar7 ^ 0xcd74dc2d1030d8c8;
  uRam00000001831800f8 = (uRam00000001831800f8 ^ uVar7) + 0xcd74dc2d1030d8c8 ^ 0x3b7c68b3e6f71ea;
  uRam000000018317ffb8 = (uRam000000018317ffb8 * -0x261e4cd9ccb7c20b ^ uRam00000001831800f8) + uVar7
  ;
  uRam000000018317ff50 = uRam000000018317ffb8 ^ uRam00000001831800f8;
  uRam00000001831800b8 = 0xcd74dc2d1030d8c8;
  uVar7 = (~uRam000000018317ffc8 + 0x328b23d2efcfa738) *
          ((uRam000000018317fff0 ^ 0xcd74dc2d9412fbed) +
          (uRam000000018317fff0 & 0x4d74dc2d9412fbed) * 2);
  uVar7 = (uVar7 | uRam000000018317ff18) + (uVar7 & uRam000000018317ff18);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018317ff70 =
       func_0x0001871c4f50((uVar7 | 0xffffffff7bdd5cda) + (uVar7 & 0xffffffff7bdd5cda));
  uVar7 = uRam000000018317ff70 << 0x30 | uRam000000018317ff70 >> 0x10;
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar7;
  uRam0000000183180060 = uRam000000018317ffb0 ^ uVar7 ^ 0x7fff;
  uRam0000000183180090 = (uRam0000000183180090 ^ uVar7) + 0x7fff ^ 0xfe765a2b7f31b526;
  uRam000000018317ff38 = (uRam000000018317ff38 * 0x1967d5075c4ece35 ^ uRam0000000183180090) + uVar7;
  uRam0000000183180078 = uRam000000018317ff38 ^ uRam0000000183180090;
  uRam0000000183180048 = 0x7fff;
  uRam00000001831800f8 = func_0x0001871c4f50(uRam0000000183180030 ^ 0x92f511f502316200);
  uRam000000018317ffa8 =
       (uRam000000018317ffa8 ^ uRam00000001831800f8) + 0x8bed2e6c70b3d3c8 ^ 0x86adaf919d57b4ff;
  uRam0000000183180090 =
       (uRam0000000183180090 * -0x1ffae4be0adf6723 ^ uRam000000018317ffa8) + uRam00000001831800f8;
  uRam0000000183180030 = uRam0000000183180090 ^ uRam000000018317ffa8;
  uRam00000001831800a8 = 0x8bed2e6c70b3d3c8;
  uVar7 = (~uRam0000000183180070 + 0x7412d1938f4c2c39) *
          ((uRam000000018317ffa0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018317ffa0 & 0x84225cda) * 2);
  uVar7 = (uVar7 | uRam000000018317ffd8) + (uVar7 & uRam000000018317ffd8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001831800e0 =
       func_0x0001871c4f50((uVar7 | 0x7412d1930b6e70e2) + (uVar7 & 0x7412d1930b6e70e2));
  uRam000000018317ffb8 =
       (uRam000000018317ffb8 ^ uRam00000001831800e0 & 0x3ffffffff) + 0x7412d1938f4cac37 ^
       0x3e5700a7323e3372;
  uRam000000018317ffa0 =
       (uRam000000018317ffa0 * -0x24c04d20e3c0edd7 ^ uRam000000018317ffb8) +
       (uRam00000001831800e0 & 0x3ffffffff);
  uRam0000000183180098 = uRam000000018317ffa0 ^ uRam000000018317ffb8;
  uRam0000000183180070 = 0x7412d1938f4cac37;
  uVar7 = (uRam000000018317fff8 ^ _UNK_180b31e50) + uRam000000018317ffd8 + 0x7412d1930b6e8f12;
  uVar8 = (uRam000000018317ffd8 ^ _UNK_180b31e58) + uRam000000018317fff8 + 0x8bed2e6c70b3d3c8;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018317fff8 ^ _UNK_180b31e50;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018317ffd8 ^ _UNK_180b31e58;
  uRam00000001831800f0 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018317fff8 + 0x8bed2e6c70b3d3c8) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018317ffd8 + 0x7412d1930b6e8f12));
  uVar7 = uRam00000001831800f0 >> 1 | uRam00000001831800f0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001831800f0;
  uRam0000000183180080 = uRam00000001831800c0 ^ uVar7 ^ 0x7fff;
  uRam0000000183180070 = (uRam0000000183180070 ^ uVar7) + 0x7fff ^ 0xe6e297160e7a8a7a;
  uRam00000001831800d8 = (uRam00000001831800d8 * -0x7cb147c8ed21731 ^ uRam0000000183180070) + uVar7;
  uRam00000001831800e0 = uRam00000001831800d8 ^ uRam0000000183180070;
  uRam0000000183180028 = 0x7fff;
  uRam000000018317ff80 = func_0x0001871c4f50(uRam0000000183180050 ^ 0xd57c8fb3cc6bf01b);
  uVar7 = uRam000000018317ff80 >> 1 | uRam000000018317ff80;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018317ff80;
  uRam00000001831800a8 = (uRam00000001831800a8 ^ uVar7) + 0x6c6f6b8a37ed5918 ^ 0xbf2eb3b467489097;
  uRam000000018317ff08 = (uRam000000018317ff08 * 0x30bc699becc4f38f ^ uRam00000001831800a8) + uVar7;
  uRam0000000183180068 = uRam000000018317ff08 ^ uRam00000001831800a8;
  uRam000000018317ff58 = 0x6c6f6b8a37ed5918;
  uVar7 = (uRam0000000183180018 ^ _UNK_180b31e60) + uRam0000000183180038 + 0x84225cda;
  uVar8 = (uRam0000000183180038 ^ _UNK_180b31e68) + uRam0000000183180018 + 0x93909475c812a6e8;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183180018 ^ _UNK_180b31e60;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183180038 ^ _UNK_180b31e68;
  uRam000000018317ff68 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183180018 + 0x93909475c812a6e8) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183180038 + 0x84225cda));
  uRam000000018317ffe8 = uRam000000018317ffe0 ^ uRam000000018317ff68 ^ 0x93909475c81326e7;
  uRam0000000183180080 =
       (uRam0000000183180080 ^ uRam000000018317ff68) + 0x93909475c81326e7 ^ 0xc43498290efa961f;
  uRam000000018317ff50 =
       (uRam000000018317ff50 * -0xa121127592d88c1 ^ uRam0000000183180080) + uRam000000018317ff68;
  uRam00000001831800d8 = uRam000000018317ff50 ^ uRam0000000183180080;
  uRam00000001831800a8 = 0x93909475c81326e7;
  uVar7 = func_0x0001871c4f50(uRam00000001831800b0 + 0xb5547a984ac92468 ^ 0xe4);
  uRam000000018317ffa8 = uVar7 ^ 0x5efba360f2cf4a8;
  uVar8 = uRam000000018317ffa8 >> 1 | uRam000000018317ffa8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uRam000000018317ffa8 =
       0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
       uRam000000018317ffa8;
  uRam000000018317fff0 = uRam000000018317ff80 ^ uRam000000018317ffa8 ^ 0x7fff;
  uRam00000001831800c8 = (uRam00000001831800c8 ^ uRam000000018317ffa8) + 0x7fff ^ 0x3672ec4663a210d5
  ;
  uRam000000018317ffa8 = (uVar7 * 0x705f66d9ee548d65 ^ uRam00000001831800c8) + uRam000000018317ffa8;
  uRam0000000183180098 = uRam000000018317ffa8 ^ uRam00000001831800c8;
  uRam000000018317ff80 = 0x7fff;
  uVar7 = (~uRam000000018317ff68 + 0x979dead08462c162) *
          ((uRam00000001831800b8 ^ 0xe35bc7df53ddac1e) +
          (uRam00000001831800b8 & 0x635bc7df53ddac1e) * 2);
  uVar7 = (uVar7 | uRam000000018317ff50) + (uVar7 & uRam000000018317ff50);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183180088 =
       func_0x0001871c4f50((uVar7 | 0x74c62d0fd7bf6d7f) + (uVar7 & 0x74c62d0fd7bf6d7f));
  uVar7 = (uRam0000000183180088 ^ 0x346414780000000) & 0xffffffff80000000;
  uRam0000000183180000 = uRam00000001831800d0 ^ uVar7 ^ 0x7af9b2b05c62509c;
  uRam000000018317ffe0 = (uRam000000018317ffe0 ^ uVar7) + 0x7af9b2b05c62509c ^ 0x1d0dc90efc6c49b8;
  uRam000000018317ffa0 = (uRam000000018317ffa0 * 0x7f0ecdc2c575d7bb ^ uRam000000018317ffe0) + uVar7;
  uRam0000000183180078 = uRam000000018317ffa0 ^ uRam000000018317ffe0;
  uRam000000018317ff20 = 0x7af9b2b05c62509c;
  uRam000000018317ff08 = func_0x0001871c4f50(uRam000000018317ff08 + 0xf8d53a4b04ec84eb ^ 0x5d);
  uRam000000018317ff70 =
       (uRam000000018317ff70 ^ uRam0000000183180050) + 0x74c62d0f539d4e5a ^ 0xe8d875c784bfcbef;
  uRam0000000183180020 =
       (uRam0000000183180020 * 0x22aa752205609e05 ^ uRam000000018317ff70) + uRam0000000183180050;
  uRam00000001831800f0 = uRam0000000183180020 ^ uRam000000018317ff70;
  uRam000000018317ffd8 = 0x74c62d0f539d4e5a;
  uRam0000000183180020 = func_0x0001871c4f50(uRam00000001831800e8 + 0x5c008326001dff ^ 0xf5);
  uVar7 = (ulonglong)(~(uint)uRam0000000183180020 & 0x7fff);
  uRam000000018317ff50 = uRam0000000183180018 ^ uVar7 ^ 0x7fff;
  uVar8 = (uRam000000018317ffb8 ^ uVar7) + 0x7fff;
  uRam000000018317ffb8 = uVar8 ^ 0xce76669b8dcc9dbd;
  uRam000000018317ffe8 = (uRam000000018317ffe8 * 0x5b5950e35db10d41 ^ uRam000000018317ffb8) + uVar7;
  uRam0000000183180040 = uRam000000018317ffe8 ^ uRam000000018317ffb8;
  uRam000000018317ff60 = 0x7fff;
  uVar7 = ((uVar8 ^ 0xce76669b09eec167) + (ulonglong)((uint)uRam000000018317ffb8 & 0x84225cda) * 2)
          * -uRam000000018317ff00;
  uVar7 = (uVar7 | uRam000000018317ff98) + (uVar7 & uRam000000018317ff98);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183180010 =
       func_0x0001871c4f50((uVar7 | 0x84225cda) + (ulonglong)((uint)uVar7 & 0x84225cda));
  uVar7 = uRam0000000183180010 * 0x5681cf8f96ea82bf;
  uRam000000018317ff60 = uRam00000001831800a8 ^ uVar7 ^ 0x7fff;
  uRam0000000183180020 = (uRam0000000183180020 ^ uVar7) + 0x7fff ^ 0x5a5c73bbdd0481f8;
  uRam000000018317ff00 = (uRam000000018317ff00 * 0x2feebb95d7b38ad9 ^ uRam0000000183180020) + uVar7;
  uRam0000000183180088 = uRam000000018317ff00 ^ uRam0000000183180020;
  uRam000000018317ffe0 = 0x7fff;
  uVar7 = (uRam0000000183180000 ^ _UNK_180b31e70) + uRam00000001831800e8 + 0xe1184500d7282214;
  uVar8 = (uRam00000001831800e8 ^ _UNK_180b31e78) + uRam0000000183180000 + 0xe1184500530a0131;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183180000 ^ _UNK_180b31e70;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831800e8 ^ _UNK_180b31e78;
  uRam00000001831800c0 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183180000 + 0xe1184500530a0131) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831800e8 + 0xe1184500d7282214));
  uVar7 = ((uRam00000001831800c0 ^ 0xe1184500530a0131) << 0x31 |
          (uRam00000001831800c0 ^ 0xe1184500530a0131) >> 0xf) ^ 0xe1184500530a0131;
  uRam000000018317ff48 = uRam000000018317ff48 ^ uVar7 ^ 0xc81950e0178bf88f;
  uRam0000000183180020 = (uRam0000000183180020 * -0x34ba03147179d439 ^ uRam000000018317ff48) + uVar7
  ;
  uRam000000018317fff0 = uRam0000000183180020 ^ uRam000000018317ff48;
  uRam00000001831800a0 = 0;
  uRam000000018317ff50 = func_0x0001871c4f50(uRam000000018317ffc0 ^ 0xffac007b25ffddb8);
  uVar7 = uRam000000018317ff50 ^ 0x7fff;
  uRam0000000183180098 = uRam000000018317ffb0 ^ uVar7 ^ 0x7fff;
  uRam0000000183180058 = (uRam0000000183180058 ^ uVar7) + 0x7fff ^ 0x43df3d7cf394dee0;
  uRam000000018317ff78 = (uRam000000018317ff78 * -0x254cefa8d4911ee9 ^ uRam0000000183180058) + uVar7
  ;
  uRam000000018317ffd0 = uRam000000018317ff78 ^ uRam0000000183180058;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _UNK_180b31e80,_UNK_1800170c0);
  uRam000000018317ff60 = 0x7fff;
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar7 = uVar8 + uRam00000001831800d0;
  if (auVar6._4_4_ < 0) {
    uVar7 = uRam00000001831800a8 ^ uVar8;
  }
  uRam000000018317ff78 = func_0x0001871c4f50(SUB161(auVar5 ^ _UNK_180b31e80,5) ^ uVar7);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001831800b8 = (ulonglong)uVar2;
  uRam000000018317ff28 =
       (uRam000000018317ff28 ^ uRam000000018317ff78 & 0x1ffffffffffff) + uRam00000001831800b8 ^
       0xbad0c99563b4d498;
  uRam000000018317ff58 =
       (uRam000000018317ff58 * 0x17eb27eddcdc0517 ^ uRam000000018317ff28) +
       (uRam000000018317ff78 & 0x1ffffffffffff);
  uRam000000018317ff48 = uRam000000018317ff58 ^ uRam000000018317ff28;
  uVar7 = (uRam0000000183180008 ^ _UNK_180b31e90) + uRam000000018317ff98 + 0x3645fae8;
  uVar8 = (uRam000000018317ff98 ^ _UNK_180b31e98) + uRam0000000183180008 + 0xe17b3230;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183180008 ^ _UNK_180b31e90;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018317ff98 ^ _UNK_180b31e98;
  uVar7 = func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183180008 + 0xe17b3230)
                              ^ (uVar7 << 0x1d | uVar7 >> 0x23) -
                                (uRam000000018317ff98 + 0x3645fae8));
  uRam000000018317ff78 =
       (uRam000000018317ff78 ^ uVar7 & 0xfffffffffff00000) + 0x531cebfd ^ 0xb046ea0a31fbaf49;
  uRam0000000183180028 =
       (uVar7 * 0x6ce63edc672053d3 ^ uRam000000018317ff78) + (uVar7 & 0xfffffffffff00000);
  uRam00000001831800f8 = uRam0000000183180028 ^ uRam000000018317ff78;
  uRam0000000183180010 = 0x531cebfd;
  uVar7 = (uRam000000018317ff28 ^ _UNK_180b31ea0) + uRam000000018317ff60 + 0x84222325;
  uVar8 = (uRam000000018317ff60 ^ _UNK_180b31ea8) + uRam000000018317ff28 + 0xc8f40b90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018317ff28 ^ _UNK_180b31ea0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018317ff60 ^ _UNK_180b31ea8;
  uRam00000001831800b8 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018317ff28 + 0xc8f40b90) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018317ff60 + 0x84222325));
  uVar7 = uRam00000001831800b8 >> 1 | uRam00000001831800b8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001831800b8;
  uRam0000000183180088 = (uRam0000000183180088 ^ uVar7) - 0xc8f40b90 ^ 0x8ba1c6a41ba7a2e0;
  uRam00000001831800e8 = (uRam00000001831800e8 * 0x66220d1421605851 ^ uRam0000000183180088) + uVar7;
  uRam0000000183180058 = uRam00000001831800e8 ^ uRam0000000183180088;
  uRam0000000183180098 = 0x370bf470;
  uVar7 = (~uRam0000000183180070 + 0xc8f40b91) *
          ((uRam000000018317ff58 ^ 0x8422185a) +
          (ulonglong)((uint)uRam000000018317ff58 & 0x8422185a) * 2);
  uVar7 = (uVar7 | uRam00000001831800a8) + (uVar7 & uRam00000001831800a8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam0000000183180000 =
       func_0x0001871c4f50((uVar7 | 0x4cd613ca) + (ulonglong)((uint)uVar7 & 0x4cd613ca));
  uVar7 = (uRam0000000183180000 ^ 0xc8f43bff) << 0x29 | (uRam0000000183180000 ^ 0xc8f43bff) >> 0x17;
  uRam000000018317ff80 = uRam0000000183180090 ^ uVar7 ^ 0xc8f4470f;
  uRam0000000183180010 = (uRam0000000183180010 ^ uVar7) + 0xc8f4470f ^ 0x8a777251a35a2694;
  uRam00000001831800d8 = (uRam00000001831800d8 * 0x8e43048f75291a5 ^ uRam0000000183180010) + uVar7;
  uRam000000018317ff28 = uRam00000001831800d8 ^ uRam0000000183180010;
  uRam000000018317ffe0 = 0xc8f4470f;
  uVar7 = (~uRam0000000183180038 + 0x370bf471) *
          ((uRam0000000183180060 ^ 0x4cd6642a) +
          (ulonglong)((uint)uRam0000000183180060 & 0x4cd6642a) * 2);
  uVar7 = (uVar7 | uRam0000000183180058) + (uVar7 & uRam0000000183180058);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001831800f0 =
       func_0x0001871c4f50((uVar7 | 0x7bdd905a) + (ulonglong)((uint)uVar7 & 0x7bdd905a));
  uVar7 = uRam00000001831800f0 - (uRam00000001831800f0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001831800f0;
  uRam00000001831800c0 = uRam0000000183180048 ^ uVar7 ^ 0x100003b7f;
  uRam0000000183180060 = (uRam0000000183180060 ^ uVar7) + 0x100003b7f ^ 0xdd286414597f58ef;
  uRam000000018317ff98 = (uRam000000018317ff98 * 0x4964bb77b6cc5693 ^ uRam0000000183180060) + uVar7;
  uRam0000000183180008 = uRam000000018317ff98 ^ uRam0000000183180060;
  uRam000000018317ff50 = 0x3b7f;
  uVar7 = (_UNK_180b31eb0 ^ 0x3b7f) + uRam0000000183180098 + 0x84222325;
  uVar8 = (uRam0000000183180098 ^ _UNK_180b31eb8) + 0x50f5f1a3;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _UNK_180b31eb0 ^ 0x3b7f;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183180098 ^ _UNK_180b31eb8;
  uRam000000018317ff88 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) - 0x50f5f1a3 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183180098 + 0x84222325));
  uRam00000001831800e8 =
       (uRam00000001831800e8 ^ uRam000000018317ff88) - 0x50f5b624 ^ 0x97d52640f99a3be2;
  uRam0000000183180008 =
       (uRam0000000183180008 * -0x78f7c3a587467659 ^ uRam00000001831800e8) + uRam000000018317ff88;
  uRam00000001831800a0 = uRam0000000183180008 ^ uRam00000001831800e8;
  uRam000000018317ffe0 = 0xaf0a49dc;
  uVar7 = (uRam0000000183180050 ^ _UNK_180b31ec0) + uRam00000001831800d0 + 0x8422185a;
  uVar8 = (uRam00000001831800d0 ^ _UNK_180b31ec8) + uRam0000000183180050 + 0x50f5b624;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183180050 ^ _UNK_180b31ec0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831800d0 ^ _UNK_180b31ec8;
  uRam000000018317ff10 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183180050 + 0x50f5b624) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001831800d0 + 0x8422185a));
  uVar7 = (uRam000000018317ff10 ^ 0x50f5bf7f) & 0x7fffffffffffff;
  uRam0000000183180018 = uRam0000000183180058 ^ uVar7 ^ 0x50f5f1a3;
  uRam00000001831800c8 = (uRam00000001831800c8 ^ uVar7) + 0x50f5f1a3 ^ 0x8359a7dae4193836;
  uRam000000018317ffb0 = (uRam000000018317ffb0 * 0x4af5259ef2dbca19 ^ uRam00000001831800c8) + uVar7;
  uRam0000000183180028 = uRam000000018317ffb0 ^ uRam00000001831800c8;
  uRam0000000183180050 = 0x50f5f1a3;
  uVar7 = (~uRam0000000183180048 + 0xaf0a49dd) *
          ((uRam0000000183180030 ^ 0xd4d7d286) +
          (ulonglong)((uint)uRam0000000183180030 & 0xd4d7d286) * 2);
  uVar7 = (uVar7 | uRam0000000183180088) + (uVar7 & uRam0000000183180088);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001831800e8 =
       func_0x0001871c4f50((uVar7 | 0x7bdd9b5a) + (ulonglong)((uint)uVar7 & 0x7bdd9b5a));
  uVar7 = (ulonglong)((uint)uRam00000001831800e8 & 0x50f5f1a3);
  uRam000000018317ffd8 = uRam000000018317ff40 ^ uVar7 ^ 0x100003b7f;
  uRam000000018317ff80 = (uRam000000018317ff80 ^ uVar7) + 0x100003b7f ^ 0x747b7f70a727da0c;
  uRam00000001831800d0 = (uRam00000001831800d0 * -0x66194546cff500cd ^ uRam000000018317ff80) + uVar7
  ;
  uRam000000018317ff00 = uRam00000001831800d0 ^ uRam000000018317ff80;
  uRam0000000183180008 = 0x3b7f;
  uVar7 = (uRam0000000183180090 ^ _UNK_180b31ed0) + uRam000000018317ffa0 + 0x84222325;
  uVar8 = (uRam000000018317ffa0 ^ _UNK_180b31ed8) + uRam0000000183180090 + 0xe1ea08e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183180090 ^ _UNK_180b31ed0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018317ffa0 ^ _UNK_180b31ed8;
  uRam000000018317ff80 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183180090 + 0xe1ea08e0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018317ffa0 + 0x84222325));
  uVar7 = uRam000000018317ff80 << 0x1f | uRam000000018317ff80 >> 0x21;
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar7;
  uRam0000000183180070 = (uRam0000000183180070 ^ uVar7) - 0xe1ea08e0 ^ 0x1ea3bc61b2e43fd0;
  uRam0000000183180060 = (uRam0000000183180060 * -0x4769cc530176f843 ^ uRam0000000183180070) + uVar7
  ;
  uRam0000000183180028 = uRam0000000183180060 ^ uRam0000000183180070;
  uRam00000001831800d0 = 0x1e15f720;
  uVar7 = (uRam000000018317ffc0 ^ _UNK_180b31ee0) + uRam000000018317ff18 + 0x8422185a;
  uVar8 = (uRam000000018317ff18 ^ _UNK_180b31ee8) + uRam000000018317ffc0 + 0xe1ea08e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018317ffc0 ^ _UNK_180b31ee0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018317ff18 ^ _UNK_180b31ee8;
  uRam000000018317ffc8 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018317ffc0 + 0xe1ea08e0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018317ff18 + 0x8422185a));
  uVar7 = (uRam000000018317ffc8 << 0x19 | uRam000000018317ffc8 >> 0x27) ^ 0x3b7f;
  uRam0000000183180070 = uRam000000018317ff30 ^ uVar7 ^ 0xe1ea445f;
  uRam0000000183180020 = (uRam0000000183180020 ^ uVar7) + 0xe1ea445f ^ 0x9d5ceaba5524e845;
  uRam0000000183180018 = (uRam0000000183180018 * 0x341afb9436f8de77 ^ uRam0000000183180020) + uVar7;
  uRam0000000183180058 = uRam0000000183180018 ^ uRam0000000183180020;
  uRam000000018317ff80 = 0xe1ea445f;
  uRam0000000183180008 = func_0x0001871c4f50(uRam00000001831800d8 + 0xfff10068a30060ff ^ 0x1b);
  uVar7 = (uRam0000000183180008 ^ 0x3e21bd7353c2dafc) -
          ((uRam0000000183180008 ^ 0x3e21bd7353c2dafc) >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = uRam0000000183180008 ^ 0x3e21bd73ec9d2183 ^
          (ulonglong)
          ((uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2)
  ;
  uRam00000001831800e0 = uRam0000000183180028 ^ uVar7 ^ 0x1127ce77c;
  uRam0000000183180010 = (uRam0000000183180010 ^ uVar7) + 0x1127ce77c ^ 0xfef5fcdd78821d53;
  uRam000000018317ffc8 = (uRam000000018317ffc8 * -0xb31ee397cbdf817 ^ uRam0000000183180010) + uVar7;
  uRam0000000183180028 = uRam000000018317ffc8 ^ uRam0000000183180010;
  uRam000000018317ff20 = 0x127ce77c;
  uVar7 = (uRam000000018317ff10 ^ _UNK_180b31ef0) + uRam0000000183180090 + 0x3b7dd85a;
  uVar8 = (uRam0000000183180090 ^ _UNK_180b31ef8) + uRam000000018317ff10 + 0x531cebfd;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018317ff10 ^ _UNK_180b31ef0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183180090 ^ _UNK_180b31ef8;
  uRam00000001831800c8 =
       func_0x0001871c4f50((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018317ff10 + 0x531cebfd) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183180090 + 0x3b7dd85a));
  uVar7 = (uRam00000001831800c8 ^ 0x3e21bd73ec9d2183) * 0xb06c88e167ee183 ^ 0xbf5ffb7f;
  uVar8 = uVar7 >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar7;
  uRam0000000183180078 = (uRam0000000183180078 ^ uVar7) + 0xec431082 ^ 0x63621ed88f069c3c;
  uRam00000001831800a8 = (uRam00000001831800a8 * 0x690de3a44af62fdb ^ uRam0000000183180078) + uVar7;
  uRam00000001831800b0 = uRam00000001831800a8 ^ uRam0000000183180078;
  uRam000000018317ff08 = 0xec431082;
  uRam000000018317ffe0 = func_0x0001871c4f50(uRam0000000183180020 + 0x12ffa7a0ff9eff ^ 0xf2);
  uVar7 = uRam000000018317ffe0 ^ 0xbf5ffb7f;
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar7;
  uRam000000018317ff68 = (uRam000000018317ff68 ^ uVar7) + 0x131ceb7d ^ 0x85bd8e3a534c1927;
  uRam00000001831800d8 = (uRam00000001831800d8 * 0x2124959f912dd0e7 ^ uRam000000018317ff68) + uVar7;
  uRam0000000183180058 = uRam00000001831800d8 ^ uRam000000018317ff68;
  uRam0000000183180018 = 0x131ceb7d;
  uRam00000001831800e0 = func_0x0001871c4f50(uRam0000000183180000 + 0x1d004dccffa7ff ^ 0x67);
  uVar7 = uRam00000001831800e0 & 0x1fffffffffff;
  uRam00000001831800c8 = uRam000000018317ff60 ^ uVar7 ^ 0x1127ce77c;
  uRam00000001831800b8 = (uRam00000001831800b8 ^ uVar7) + 0x1127ce77c ^ 0xf9b65abf0b8dfd9b;
  uRam0000000183180030 = (uRam0000000183180030 * 0x6e9b0c47ed870b67 ^ uRam00000001831800b8) + uVar7;
  uRam000000018317ff10 = uRam0000000183180030 ^ uRam00000001831800b8;
  uRam000000018317ff28 = 0x127ce77c;
  uRam0000000183180008 = func_0x0001871c4f50(uRam00000001831800d8 + 0x2c0057d600a4ff ^ 0xe8);
  uRam000000018317fff8 = uRam000000018317fff8 ^ uRam0000000183180008 ^ 0xb8c68b3f620a9046;
  uRam00000001831800c8 =
       (uRam00000001831800c8 * -0x47ed51f2fce61b83 ^ uRam000000018317fff8) + uRam0000000183180008;
  uRam00000001831800a0 = uRam00000001831800c8 ^ uRam000000018317fff8;
  uRam00000001831800e0 = 0;
  uVar3 = (ulonglong)(uVar2 ^ param_3);
  uVar7 = uVar3 ^ 0x84222325;
  uVar8 = uVar7 ^ uRam0000000183180070;
  lVar4 = uVar7 + uRam000000018317fff0;
  uVar7 = uVar8 + lVar4;
  uVar9 = (uRam000000018317fff0 ^ 0x3b7f) + uRam0000000183180070 + 0x3b7f;
  uVar8 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar8;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018317fff0 ^ 0x3b7f;
  uRam000000018317ffb8 =
       func_0x0001871c4f50((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183180070 + 0x3b7f) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar4);
  uRam000000018317ff08 = uVar3 ^ 0x3b7f;
  uRam0000000183180018 =
       (uRam0000000183180018 ^ uRam000000018317ffb8 & 0x1fffffff80) + uRam000000018317ff08 ^
       0x4c83c3a79e34cf10;
  uRam000000018317ff88 =
       (uRam000000018317ff88 * 0x70155130cf6bf5cf ^ uRam0000000183180018) +
       (uRam000000018317ffb8 & 0x1fffffff80);
  uRam0000000183180028 = uRam000000018317ff88 ^ uRam0000000183180018;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xa51e,0x1d2)
      /* POOL[0xa51e,0x1d2]: xtwo/oo | (Lsixtwo/os;ZZZIZ)V | ane | sixtwo/mw | uWTdl | Lsixtwo/mw; | sixtwo/qL | dbI | (Lnet/minecraft/class_243;Lsixtwo/ou;Lsixtwo/mw;Lsixtwo/gg;)V | sixtwo/gV | bcl | ()Lnet/minecraft/class_2680; | bck | sixtwo/eJ | cnb | sixtwo/eK | method_26215 | aAa | ImshN | aAM | ()Lsixtwo/oj; | sixtwo/oj | cEy | cEE | anf | method_49638 | (Lnet/minecraft/class_2374;)Lnet/minecraft/class_2338; | aAe | zrgbM | cnd | method_2902 | (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Z | CzAnG | method_6104 | (Lnet/minecraft/class_1268;) */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001871bc724 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b2ffe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mw; cmH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1871c4fe0, runtime 6fffeedd4fe0) =====

void FUN_1871c4fe0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001871c502b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b32030 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/mw; cmI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1871c5ff0, runtime 6fffeedd5ff0) =====

void FUN_1871c5ff0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001871c6079 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b325f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mw; valueOf (Ljava/lang/String;)Lsixtwo/mw; (handler @ image 18718aea0, runtime 6fffeed9aea0) =====

void FUN_18718aea0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xa51e,0x1d2)
      /* POOL[0xa51e,0x1d2]: xtwo/oo | (Lsixtwo/os;ZZZIZ)V | ane | sixtwo/mw | uWTdl | Lsixtwo/mw; | sixtwo/qL | dbI | (Lnet/minecraft/class_243;Lsixtwo/ou;Lsixtwo/mw;Lsixtwo/gg;)V | sixtwo/gV | bcl | ()Lnet/minecraft/class_2680; | bck | sixtwo/eJ | cnb | sixtwo/eK | method_26215 | aAa | ImshN | aAM | ()Lsixtwo/oj; | sixtwo/oj | cEy | cEE | anf | method_49638 | (Lnet/minecraft/class_2374;)Lnet/minecraft/class_2338; | aAe | zrgbM | cnd | method_2902 | (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Z | CzAnG | method_6104 | (Lnet/minecraft/class_1268;) */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018718aee8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b28ae0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mw; values ()[Lsixtwo/mw; (handler @ image 18718ab20, runtime 6fffeed9ab20) =====

void FUN_18718ab20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xa51e,0x1d2)
      /* POOL[0xa51e,0x1d2]: xtwo/oo | (Lsixtwo/os;ZZZIZ)V | ane | sixtwo/mw | uWTdl | Lsixtwo/mw; | sixtwo/qL | dbI | (Lnet/minecraft/class_243;Lsixtwo/ou;Lsixtwo/mw;Lsixtwo/gg;)V | sixtwo/gV | bcl | ()Lnet/minecraft/class_2680; | bck | sixtwo/eJ | cnb | sixtwo/eK | method_26215 | aAa | ImshN | aAM | ()Lsixtwo/oj; | sixtwo/oj | cEy | cEE | anf | method_49638 | (Lnet/minecraft/class_2374;)Lnet/minecraft/class_2338; | aAe | zrgbM | cnd | method_2902 | (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Z | CzAnG | method_6104 | (Lnet/minecraft/class_1268;) */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018718ab67 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b28980 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x718ab6a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718ab6a(void)

{
  FUN_190ddce00();
  (*_DAT_180b28a18)();
  return;
}


// ----- block @ rva 0x718abc1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718abc1(void)

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


// ----- block @ rva 0x718abe2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718abe2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_180b28a78)();
  return;
}


// ----- block @ rva 0x718ac69 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718ac69(void)

{
  FUN_190ddfc90();
  (*_DAT_180b289e8)();
  return;
}


// ----- block @ rva 0x718ac9c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718ac9c(void)

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


// ----- block @ rva 0x718ad87 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718ad87(void)

{
  FUN_190dd72e0();
  (*_DAT_180b28a58)();
  return;
}


// ----- block @ rva 0x718add0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718add0(undefined8 param_1)

{
  undefined8 in_stack_00000030;
  
  (*_DAT_180b28a08)(param_1,in_stack_00000030);
  return;
}


// ----- block @ rva 0x718addb -----

void FUN_18718addb(void)

{
  return;
}


// ----- block @ rva 0x718ade3 -----

void FUN_18718ade3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x718aeeb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718aeeb(void)

{
  FUN_190dd72e0();
  (*_DAT_180b28b48)();
  return;
}


// ----- block @ rva 0x718af1d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718af1d(void)

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


// ----- block @ rva 0x718af95 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718af95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180b28b78)();
  return;
}


// ----- block @ rva 0x718b002 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718b002(void)

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


// ----- block @ rva 0x718b023 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718b023(void)

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


// ----- block @ rva 0x718b097 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b097(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180b28b58)();
  return;
}


// ----- block @ rva 0x718b0b4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b0b4(void)

{
  (*_DAT_180b28b08)();
  return;
}


// ----- block @ rva 0x718b0bf -----

void FUN_18718b0bf(void)

{
  return;
}


// ----- block @ rva 0x718b0c7 -----

void FUN_18718b0c7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x718b173 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b173(void)

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


// ----- block @ rva 0x718b1d1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718b1d1(void)

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


// ----- block @ rva 0x718b1e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b1e6(void)

{
  FUN_190dd72e0();
  (*_DAT_180b28c28)();
  return;
}


// ----- block @ rva 0x718b20e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718b20e(void)

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


// ----- block @ rva 0x718b22f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b22f(void)

{
  FUN_190dd9df0();
  (*_DAT_180b28c58)();
  return;
}


// ----- block @ rva 0x718b262 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718b262(void)

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


// ----- block @ rva 0x718b286 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b286(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180b28c78)();
  return;
}


// ----- block @ rva 0x718b2ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b2ac(void)

{
  (*_DAT_180b28c88)();
  return;
}


// ----- block @ rva 0x718b2bc -----

void FUN_18718b2bc(void)

{
  return;
}


// ----- block @ rva 0x718b2c4 -----

void FUN_18718b2c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x718b42c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b42c(void)

{
  FUN_190ddce00();
  (*_DAT_180b29028)();
  return;
}


// ----- block @ rva 0x718b4e7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718b4e7(void)

{
  (*_DAT_180b291d8)();
  return;
}


// ----- block @ rva 0x718f062 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718f062(void)

{
  FUN_190dd72e0();
  (*_DAT_180b29118)();
  return;
}


// ----- block @ rva 0x718f264 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718f264(void)

{
  FUN_190dd72e0();
  (*_DAT_180b29488)();
  return;
}


// ----- block @ rva 0x718f381 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718f381(void)

{
  FUN_190ddfc90();
  (*_DAT_180b29558)();
  return;
}


// ----- block @ rva 0x718f50e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718f50e(void)

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


// ----- block @ rva 0x718fa34 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18718fa34(void)

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


// ----- block @ rva 0x718fad2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18718fad2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_180b29178)();
  return;
}


// ----- block @ rva 0x7190081 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187190081(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180b29258)();
  return;
}


// ----- block @ rva 0x71900a2 -----

void FUN_1871900a2(void)

{
  return;
}


// ----- block @ rva 0x71902d6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018719030c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1871902d6(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7190329 -----

void FUN_187190329(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00018719035d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b2a8f0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x719cd1c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18719cd1c(void)

{
  longlong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (_DAT_18317f550 ^ 0x76f85a6c) + _DAT_18317f6b0 + 0x76f85a6c;
  uVar2 = (_DAT_18317f6b0 ^ 0xb09395df) + _DAT_18317f550 + 0xb09395df;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18317f550 ^ 0x76f85a6c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f6b0 ^ 0xb09395df;
  _DAT_18317f630 =
       func_0x0001871ba430((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f550 + 0xb09395df) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18317f6b0 + 0x76f85a6c));
  _DAT_18317f5f8 =
       (_DAT_18317f5f8 ^ _DAT_18317f630 * -0x3af7e9bae388d9c9) + 0xf2dbfddf ^ 0xe4fff4794bd65fc1;
  _DAT_18317f5a0 =
       (_DAT_18317f5a0 * 0x5b79fd48566b17f ^ _DAT_18317f5f8) + _DAT_18317f630 * -0x3af7e9bae388d9c9;
  _DAT_18317f628 = _DAT_18317f5a0 ^ _DAT_18317f5f8;
  _DAT_18317f5a8 = 0xf2dbfddf;
  _DAT_18317f5d0 = func_0x0001871ba430(_DAT_18317f6b0 ^ 0xffe7fff5cfffb79b);
  _DAT_18317f560 = (_DAT_18317f560 ^ _DAT_18317f5d0 ^ 0x9e5e2ff5) + 0x8e5a0b75 ^ 0x9454a1238156c9b2;
  _DAT_18317f5a0 =
       (_DAT_18317f5a0 * -0x1964a15915cf65ab ^ _DAT_18317f560) + (_DAT_18317f5d0 ^ 0x9e5e2ff5);
  _DAT_18317f5f8 = _DAT_18317f5a0 ^ _DAT_18317f560;
  _DAT_18317f510 = 0x8e5a0b75;
  uVar1 = (_DAT_18317f590 ^ _DAT_180b2ae50) + _DAT_18317f618 + 0x842223fa;
  uVar2 = (_DAT_18317f618 ^ _UNK_180b2ae58) + _DAT_18317f590 + 0xc684be1c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18317f590 ^ _DAT_180b2ae50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f618 ^ _UNK_180b2ae58;
  _DAT_18317f698 =
       func_0x0001871ba430((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f590 + 0xc684be1c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18317f618 + 0x842223fa));
  _DAT_18317f608 = _DAT_18317f520 ^ 0xc684be24;
  _DAT_18317f5f8 = (_DAT_18317f5f8 ^ 0xdf) + 0xc684befb ^ 0x5ce74f6d4235ffe0;
  _DAT_18317f690 = (_DAT_18317f690 * 0x86d8e4784d6fc27 ^ _DAT_18317f5f8) + 0xdf;
  _DAT_18317f630 = _DAT_18317f690 ^ _DAT_18317f5f8;
  _DAT_18317f5f0 = 0xc684befb;
  uVar1 = (_DAT_18317f558 ^ _DAT_180b2ae60) + _DAT_18317f6a0 + 0x42a69dde;
  uVar2 = (_DAT_18317f6a0 ^ _UNK_180b2ae68) + _DAT_18317f558 + 0x397b41e4;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18317f558 ^ _DAT_180b2ae60;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f6a0 ^ _UNK_180b2ae68;
  _DAT_18317f5f8 =
       func_0x0001871ba430((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f558 + 0x397b41e4) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18317f6a0 + 0x42a69dde));
  uVar1 = _DAT_18317f5f8 & 0xffffffffff800000;
  _DAT_18317f530 = _DAT_18317f560 ^ uVar1 ^ 0x1000000df;
  _DAT_18317f670 = (_DAT_18317f670 ^ uVar1) + 0x1000000df ^ 0x71107fa0cd008246;
  _DAT_18317f5c8 = (_DAT_18317f5c8 * 0x3d647f263c8a4cfb ^ _DAT_18317f670) + uVar1;
  _DAT_18317f6a0 = _DAT_18317f5c8 ^ _DAT_18317f670;
  _DAT_18317f6a8 = 0xdf;
  _DAT_18317f678 = func_0x0001871ba430(_DAT_18317f628 ^ 0xff9cff8cdaff8d7a);
  _DAT_18317f6b0 = (_DAT_18317f6b0 ^ _DAT_18317f678 ^ 0xf1504600) - 0xf1504600 ^ 0x6f968d7830ab7bf0;
  _DAT_18317f600 =
       (_DAT_18317f600 * 0x1c7dffd380fcfee5 ^ _DAT_18317f6b0) + (_DAT_18317f678 ^ 0xf1504600);
  _DAT_18317f6f8 = _DAT_18317f600 ^ _DAT_18317f6b0;
  _DAT_18317f680 = 0xeafba00;
  _DAT_18317f5b0 = func_0x0001871ba430(0xffbb001af8af8c4c);
  uVar1 = _DAT_18317f5b0 >> 1 | _DAT_18317f5b0;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_18317f5b0;
  _DAT_18317f5f8 = _DAT_18317f5d0 ^ uVar1 ^ 0x1000000df;
  _DAT_18317f548 = (_DAT_18317f548 ^ uVar1) + 0x1000000df ^ 0x2036e00207181f93;
  _DAT_18317f640 = (_DAT_18317f640 * -0xd7e9f0525b8eb2b ^ _DAT_18317f548) + uVar1;
  _DAT_18317f508 = _DAT_18317f640 ^ _DAT_18317f548;
  _DAT_18317f6a8 = 0xdf;
  uVar1 = (~_DAT_18317f5e0 + 0x657982a1) *
          ((_DAT_18317f688 ^ 0x84222325) + (ulonglong)((uint)_DAT_18317f688 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_18317f5f0) + (uVar1 & _DAT_18317f5f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18317f5b0 = func_0x0001871ba430((uVar1 | 0xe15ba185) + (ulonglong)((uint)uVar1 & 0xe15ba185))
  ;
  _DAT_18317f568 = _DAT_18317f568 - 0x657982a0 ^ 0xa293932440afbacc;
  _DAT_18317f570 = _DAT_18317f6f8 * 0x29d5690699a3f2d5;
  _DAT_18317f6f8 = _DAT_18317f570 ^ _DAT_18317f568;
  _DAT_18317f638 = 0x9a867d60;
  uVar1 = (_DAT_18317f668 ^ _DAT_180b2ae70) + _DAT_18317f538 + 0x842223fa;
  uVar2 = (_DAT_18317f538 ^ _UNK_180b2ae78) + _DAT_18317f668 + 0x657982a0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18317f668 ^ _DAT_180b2ae70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f538 ^ _UNK_180b2ae78;
  _DAT_18317f668 =
       func_0x0001871ba430((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f668 + 0x657982a0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18317f538 + 0x842223fa));
  _DAT_18317f590 = _DAT_18317f570 ^ _DAT_18317f668 ^ 0x6579837f;
  _DAT_18317f5a8 = (_DAT_18317f5a8 ^ _DAT_18317f668) + 0x6579837f ^ 0x2836e53c06000829;
  _DAT_18317f568 = (_DAT_18317f568 * -0x52f1aec3accaee5d ^ _DAT_18317f5a8) + _DAT_18317f668;
  _DAT_18317f538 = _DAT_18317f568 ^ _DAT_18317f5a8;
  _DAT_18317f518 = 0x6579837f;
  uVar1 = (_DAT_18317f610 ^ _DAT_180b2ae80) + _DAT_18317f528 + 0x76f9defa;
  uVar2 = (_DAT_18317f528 ^ _UNK_180b2ae88) + _DAT_18317f610 + 0x8e5a0b75;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18317f610 ^ _DAT_180b2ae80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f528 ^ _UNK_180b2ae88;
  _DAT_18317f570 =
       func_0x0001871ba430((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f610 + 0x8e5a0b75) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18317f528 + 0x76f9defa));
  uVar1 = (_DAT_18317f570 << 0x36 | _DAT_18317f570 >> 10) ^ 0xf2dbfddf;
  _DAT_18317f530 = (_DAT_18317f530 ^ uVar1) + 0x7c81f6aa ^ 0x4826b07d5e33276d;
  _DAT_18317f580 = (_DAT_18317f580 * 0x5af86f50deb602e3 ^ _DAT_18317f530) + uVar1;
  _DAT_18317f590 = _DAT_18317f580 ^ _DAT_18317f530;
  _DAT_18317f6c8 = 0x7c81f6aa;
  uVar1 = (~_DAT_18317f610 + 0x8e5a0b76) *
          ((_DAT_18317f678 ^ 0x76f9defa) + (ulonglong)((uint)_DAT_18317f678 & 0x76f9defa) * 2);
  uVar1 = (uVar1 | _DAT_18317f538) + (uVar1 & _DAT_18317f538);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18317f6b0 = func_0x0001871ba430((uVar1 | 0xf8a3d58f) + (ulonglong)((uint)uVar1 & 0xf8a3d58f))
  ;
  _DAT_18317f660 =
       (_DAT_18317f660 ^ _DAT_18317f6b0 & 0x7fffffffffffffff) + 0x825a0955 ^ 0x3cb95ca8fddbc9ba;
  _DAT_18317f690 =
       (_DAT_18317f690 * -0x354eb8d1db85d873 ^ _DAT_18317f660) +
       (_DAT_18317f6b0 & 0x7fffffffffffffff);
  _DAT_18317f580 = _DAT_18317f690 ^ _DAT_18317f660;
  _DAT_18317f508 = 0x825a0955;
  uVar1 = (_DAT_18317f6f0 ^ _DAT_180b2ae90) + _DAT_18317f540 + 0xf8a3d58f;
  uVar2 = (_DAT_18317f540 ^ _UNK_180b2ae98) + _DAT_18317f6f0 + 0x4b412aa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18317f6f0 ^ _DAT_180b2ae90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f540 ^ _UNK_180b2ae98;
  _DAT_18317f6b0 =
       func_0x0001871ba430((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f6f0 + 0x4b412aa) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18317f540 + 0xf8a3d58f));
  uVar1 = (_DAT_18317f6b0 ^ 0x7cb5f6aa) << 0xc | _DAT_18317f6b0 >> 0x34;
  _DAT_18317f5d0 = _DAT_18317f540 ^ uVar1 ^ 0x81360954;
  _DAT_18317f618 = (_DAT_18317f618 ^ uVar1) + 0x81360954 ^ 0x69c32cc9de309d24;
  _DAT_18317f628 = (_DAT_18317f628 * 0x7f05932344d45023 ^ _DAT_18317f618) + uVar1;
  _DAT_18317f6b8 = _DAT_18317f628 ^ _DAT_18317f618;
  _DAT_18317f520 = 0x81360954;
  uVar1 = (~_DAT_18317f6e0 + 0x81360955) *
          ((_DAT_18317f6b0 ^ 0x5142a71) + (ulonglong)((uint)_DAT_18317f6b0 & 0x5142a71) * 2);
  uVar1 = (uVar1 | _DAT_18317f618) + (uVar1 & _DAT_18317f618);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18317f508 = func_0x0001871ba430((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_18317f658 = (ulonglong)(~(uint)_DAT_18317f508 & 0x81360954);
  _DAT_18317f6d0 = _DAT_18317f6d0 ^ _DAT_18317f658 ^ 0x245b11d4bdbb4cc0;
  _DAT_18317f528 = (_DAT_18317f528 * -0x734f712577f5bf33 ^ _DAT_18317f6d0) + _DAT_18317f658;
  _DAT_18317f6d8 = _DAT_18317f528 ^ _DAT_18317f6d0;
  _DAT_18317f590 = 0;
  _DAT_18317f5a0 = func_0x0001871ba430(_DAT_18317f6d8 ^ 0x20ff7c8a001df7);
  uVar1 = _DAT_18317f5a0 & 0xfffffffffffffffe;
  _DAT_18317f570 = _DAT_18317f630 ^ uVar1 ^ 0xdf;
  _DAT_18317f630 = (_DAT_18317f630 ^ uVar1) + 0xdf ^ 0xd3f6e710630f7426;
  _DAT_18317f610 = (_DAT_18317f610 * -0xbdf625e38241933 ^ _DAT_18317f630) + uVar1;
  _DAT_18317f640 = _DAT_18317f610 ^ _DAT_18317f630;
  _DAT_18317f690 = 0xdf;
  uVar1 = (~_DAT_18317f540 + 0x100000000) *
          ((_DAT_18317f580 ^ 0x76f9defa) + (ulonglong)((uint)_DAT_18317f580 & 0x76f9defa) * 2);
  uVar1 = (uVar1 | _DAT_18317f650) + (uVar1 & _DAT_18317f650);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18317f6f0 = func_0x0001871ba430((uVar1 | 0x89062105) + (ulonglong)((uint)uVar1 & 0x89062105))
  ;
  _DAT_18317f500 = (_DAT_18317f500 ^ _DAT_18317f6f0 ^ 0xf2dbfddf) + 0xd240220 ^ 0xcf0392460e80b44f;
  _DAT_18317f520 =
       (_DAT_18317f520 * 0x40e33e6bbe4b955f ^ _DAT_18317f500) + (_DAT_18317f6f0 ^ 0xf2dbfddf);
  _DAT_18317f558 = _DAT_18317f520 ^ _DAT_18317f500;
  _DAT_18317f650 = 0xd240220;
  _DAT_18317f628 = func_0x0001871ba430(_DAT_18317f5e0 + 0xffc3ffaab9ff22ff ^ 0x47);
  uVar1 = (_DAT_18317f628 ^ 0xc7754d819d779e0) & 0x7fffffffffffffff;
  _DAT_18317f698 = _DAT_18317f698 ^ uVar1 ^ 0x3b0704c9b1a5b2f5;
  _DAT_18317f5b8 = (_DAT_18317f5b8 * -0x6475df45958aa24b ^ _DAT_18317f698) + uVar1;
  _DAT_18317f680 = _DAT_18317f5b8 ^ _DAT_18317f698;
  _DAT_18317f640 = 0;
  uVar1 = (_DAT_18317f660 ^ 0x842223fa) + _DAT_18317f6a8 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18317f660 ^ 0x842223fa;
  uVar2 = ((_DAT_18317f6a8 + _DAT_18317f660) * 0x2000 | _DAT_18317f6a8 + _DAT_18317f660 >> 0x33) ^
          _DAT_18317f6a8;
  _DAT_18317f510 =
       func_0x0001871ba430((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_18317f660 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18317f6a8 + 0x842223fa));
  uVar1 = _DAT_18317f510 ^ 0xdf;
  _DAT_18317f550 = _DAT_18317f6e0 ^ uVar1 ^ 0xdf;
  _DAT_18317f5e0 = (_DAT_18317f5e0 ^ uVar1) + 0xdf ^ 0xa4d3b7605dac622f;
  _DAT_18317f528 = (_DAT_18317f528 * 0x6fae853d38c263b3 ^ _DAT_18317f5e0) + uVar1;
  _DAT_18317f678 = _DAT_18317f528 ^ _DAT_18317f5e0;
  _DAT_18317f6b8 = 0xdf;
  uVar1 = (~_DAT_18317f6f0 + 0xf2da794a) *
          ((_DAT_18317f588 ^ 0x76f85a6c) + (ulonglong)((uint)_DAT_18317f588 & 0x76f85a6c) * 2);
  uVar1 = (uVar1 | _DAT_18317f6d0) + (uVar1 & _DAT_18317f6d0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18317f678 = func_0x0001871ba430((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = _DAT_18317f678 >> 1 | _DAT_18317f678;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18317f678;
  _DAT_18317f658 = _DAT_18317f658 ^ uVar1 ^ 0xcc5c5141199a8efe;
  _DAT_18317f6f0 = (_DAT_18317f6f0 * -0x30b73f5c8fd85531 ^ _DAT_18317f658) + uVar1;
  _DAT_18317f618 = _DAT_18317f6f0 ^ _DAT_18317f658;
  _DAT_18317f6a0 = 0;
  _DAT_18317f588 = func_0x0001871ba430(_DAT_18317f680 ^ 0xffe0ff83a6002148);
  uVar1 = (_DAT_18317f588 & 0x1ffffffffff) * -0x3a1e5414c00b6cd3;
  _DAT_18317f590 = _DAT_18317f540 ^ uVar1 ^ 0xdf;
  _DAT_18317f680 = (_DAT_18317f680 ^ uVar1) + 0xdf ^ 0x59184d4e440ac2fa;
  _DAT_18317f540 = (_DAT_18317f540 * 0x2335bd8e67998981 ^ _DAT_18317f680) + uVar1;
  _DAT_18317f598 = _DAT_18317f540 ^ _DAT_18317f680;
  _DAT_18317f638 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x60)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x719df09 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18719df09(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x90) = 2;
  switch(*(int *)(unaff_RBP + 0x40) < *(int *)(unaff_RBP + -0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x71a1d10 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871a1d10(void)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar6;
  longlong unaff_R15;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint uVar12;
  
  *(undefined8 *)(unaff_RBP + 0x80) = *(undefined8 *)(unaff_RBP + 0x18);
  uVar1 = *(uint *)(unaff_RBP + 0x30);
  *(uint *)(unaff_RBP + 0x88) = uVar1;
  uVar3 = _DAT_18317f630;
  uVar5 = _DAT_18317f5d8;
  uVar4 = _DAT_18317f5b0;
  uVar6 = (ulonglong)uVar1;
  uVar9 = (uint)_DAT_18317f5b0;
  *(bool *)(unaff_RBP + 0x30) = *(longlong *)(unaff_RBP + -8) == 0;
  uVar4 = (~uVar5 + 2) *
          ((uVar4 ^ uVar6 ^ 0x84222325) + (ulonglong)(uVar9 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uVar3) + (uVar4 & uVar3);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18317f5c0 =
       func_0x0001871ba430((uVar6 ^ 0x84222324 | uVar4) +
                           (ulonglong)((uint)(uVar6 ^ 0x84222324) & (uint)uVar4));
  uVar11 = uVar1 & _DAT_18001a990;
  uVar9 = uVar1 | _DAT_18001a990;
  uVar12 = uVar1 ^ _DAT_18001a990;
  lVar10 = ((ulonglong)uVar1 * (ulonglong)unaff_XMM8_Da << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_DAT_180b2ad60;
  uVar4 = (_DAT_18317f5c0 ^ uVar6) & 0x1fffffffff;
  _DAT_18317f5a8 =
       ((((ulonglong)uVar12 * (ulonglong)_DAT_180b2ad50 << 0x20) +
         (ulonglong)uVar12 * (ulonglong)_DAT_180b2ad40 +
         ((ulonglong)uVar9 * (ulonglong)_DAT_180b2ad30 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)_DAT_180b2ad20 +
         ((ulonglong)uVar11 * (ulonglong)_DAT_180b2ad10 << 0x20 |
         (ulonglong)uVar11 * (ulonglong)_DAT_180b2ad00) +
         ((ulonglong)uVar1 * (ulonglong)_DAT_180b2acf0 << 0x20) +
         (ulonglong)uVar1 * (ulonglong)_DAT_180b2ace0 + lVar10) -
       (((ulonglong)uVar12 * (ulonglong)_DAT_180b2adf0 << 0x20) +
        (ulonglong)uVar12 * (ulonglong)_DAT_180b2ade0 +
        ((ulonglong)uVar9 * (ulonglong)_DAT_180b2add0 << 0x20) +
        (ulonglong)uVar9 * (ulonglong)unaff_XMM12_Da +
        ((ulonglong)uVar11 * (ulonglong)unaff_XMM11_Da << 0x20 |
        (ulonglong)uVar11 * (ulonglong)unaff_XMM10_Da) +
        ((ulonglong)uVar1 * (ulonglong)unaff_XMM9_Da << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_180b2ad80 + lVar10)) + 0x1d61e5245b89b2c9;
  _DAT_18317f608 = _DAT_18317f578 ^ uVar4 ^ _DAT_18317f5a8;
  _DAT_18317f600 = (_DAT_18317f600 ^ uVar4) + _DAT_18317f5a8 ^ 0xd3c2c8603367e8b8;
  _DAT_18317f570 = (_DAT_18317f570 * 0x1d510e1b8eb9beab ^ _DAT_18317f600) + uVar4;
  _DAT_18317f690 = _DAT_18317f570 ^ _DAT_18317f600;
  _DAT_18317f5a8 = _DAT_18317f5a8 & 0xffffffff;
  uVar4 = (~_DAT_18317f658 + 0x772d0429) *
          ((_DAT_18317f5e8 ^ 0x84222325) + (ulonglong)((uint)_DAT_18317f5e8 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_18317f6a8) + (uVar4 & _DAT_18317f6a8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18317f5d0 = func_0x0001871ba430((uVar4 | 0xf30f270d) + (ulonglong)((uint)uVar4 & 0xf30f270d))
  ;
  uVar4 = _DAT_18317f5d0 - (_DAT_18317f5d0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_R13) + (uVar4 >> 2 & unaff_R13);
  uVar4 = ((((uVar4 >> 4) + uVar4 & unaff_R12) * unaff_R15 >> 0x38) << 2 ^ _DAT_18317f5d0) *
          -0x22c595700c51d81f;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R13) + (uVar5 >> 2 & unaff_R13);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & unaff_R12) * unaff_R15 >> 0x38);
  uVar4 = (uint)bVar2 + (uint)bVar2 ^ uVar4;
  _DAT_18317f638 = (_DAT_18317f638 ^ uVar4) - 0x772d0428 ^ 0xdd46defe2ce67c50;
  _DAT_18317f548 = (_DAT_18317f548 * -0x7cfb78323c1d0219 ^ _DAT_18317f638) + uVar4;
  _DAT_18317f638 = _DAT_18317f548 ^ _DAT_18317f638;
  _DAT_18317f5a8 = 0x88d2fbd8;
  uVar4 = (~_DAT_18317f550 + 0x772d0429) *
          ((_DAT_18317f530 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_18317f530 & 0x8422dcda) * 2);
  uVar4 = (uVar4 | _DAT_18317f6f0) + (uVar4 & _DAT_18317f6f0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x0001871ba430((uVar4 | 0xf30fd8f2) + (ulonglong)((uint)uVar4 & 0xf30fd8f2));
  _DAT_18317f6c0 = _DAT_18317f620 ^ uVar4 ^ 0x772e0427;
  _DAT_18317f610 = 0x3ddb495bd1612f57;
  _DAT_18317f528 = (_DAT_18317f528 * -0x5c7770ac44fb1f67 ^ 0x3ddb495bd1612f57) + uVar4;
  _DAT_18317f698 = _DAT_18317f528 ^ 0x3ddb495bd1612f57;
  _DAT_18317f600 = 0x772e0427;
  uVar4 = func_0x0001871ba430(_DAT_18317f6d8 ^ 0xffa3fff7d5ff456d);
  _DAT_18317f5b8 = uVar4 & 0xfffffffffffffffc;
  _DAT_18317f588 = _DAT_18317f510 ^ _DAT_18317f5b8 ^ 0x10000ffff;
  _DAT_18317f528 = (_DAT_18317f528 ^ _DAT_18317f5b8) + 0x10000ffff ^ 0xea2e938eed90b7dc;
  _DAT_18317f5b8 = (uVar4 * -0x66cb6767c90c50af ^ _DAT_18317f528) + _DAT_18317f5b8;
  _DAT_18317f620 = _DAT_18317f5b8 ^ _DAT_18317f528;
  _DAT_18317f5b0 = 0xffff;
  uVar4 = (_DAT_18317f548 ^ _DAT_180b2ae00) + _DAT_18317f550 + 0x84222325;
  uVar5 = (_DAT_18317f550 ^ _UNK_180b2ae08) + _DAT_18317f548 + 0xe07d61da;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18317f548 ^ _DAT_180b2ae00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18317f550 ^ _UNK_180b2ae08;
  _DAT_18317f680 =
       func_0x0001871ba430((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18317f548 + 0xe07d61da) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18317f550 + 0x84222325));
  uVar4 = _DAT_18317f680 << 0x1d | _DAT_18317f680 >> 0x23;
  _DAT_18317f548 = (_DAT_18317f548 ^ uVar4) - 0xe07d61da ^ 0xd432383f76a3d38d;
  _DAT_18317f650 = (_DAT_18317f650 * -0x1d5f453be7df1e1b ^ _DAT_18317f548) + uVar4;
  _DAT_18317f648 = _DAT_18317f650 ^ _DAT_18317f548;
  _DAT_18317f6c0 = 0x1f829e26;
  uVar4 = (~_DAT_18317f530 + 0xe07d61db) *
          ((_DAT_18317f588 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_18317f588 & 0x8422dcda) * 2);
  uVar4 = (uVar4 | _DAT_18317f548) + (uVar4 & _DAT_18317f548);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18317f590 = func_0x0001871ba430((uVar4 | 0x645fbd00) + (ulonglong)((uint)uVar4 & 0x645fbd00))
  ;
  uVar4 = _DAT_18317f590 * 0x19d6d53ef1d39dbf ^ 0xe07d61da;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R13) + (uVar5 >> 2 & unaff_R13);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & unaff_R12) * unaff_R15 >> 0x38)) * 0x10 ^ uVar4;
  _DAT_18317f660 = _DAT_18317f658 ^ uVar4 ^ 0xe07e61d9;
  _DAT_18317f5f8 = (_DAT_18317f5f8 ^ uVar4) + 0xe07e61d9 ^ 0x99268a6f15140df8;
  _DAT_18317f518 = (_DAT_18317f518 * 0x96509e112ae127d ^ _DAT_18317f5f8) + uVar4;
  _DAT_18317f5b8 = _DAT_18317f518 ^ _DAT_18317f5f8;
  _DAT_18317f620 = 0xe07e61d9;
  uVar4 = (~_DAT_18317f6b0 + 0xc1d41d42) *
          ((_DAT_18317f600 ^ 0xf9d5cc3a) + (ulonglong)((uint)_DAT_18317f600 & 0xf9d5cc3a) * 2);
  uVar4 = (uVar4 | _DAT_18317f650) + (uVar4 & _DAT_18317f650);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18317f6e8 = func_0x0001871ba430((uVar4 | 0x3801d17b) + (ulonglong)((uint)uVar4 & 0x3801d17b))
  ;
  uVar4 = (_DAT_18317f6e8 ^ 0x5f604afdca95cb81) * 0x69d98b04bdb99db9;
  _DAT_18317f6c8 = _DAT_18317f690 ^ uVar4 ^ 0x13fcc0c60;
  _DAT_18317f598 = (_DAT_18317f598 ^ uVar4) + 0x13fcc0c60 ^ 0x218ed162a607597a;
  _DAT_18317f5d8 = (_DAT_18317f5d8 * 0x3f17d327485707e9 ^ _DAT_18317f598) + uVar4;
  _DAT_18317f650 = _DAT_18317f5d8 ^ _DAT_18317f598;
  _DAT_18317f6d8 = 0x3fcc0c60;
  uVar4 = func_0x0001871ba430(_DAT_18317f520 + 0xffd10007b50000ff ^ 0x5a);
  uVar5 = (ulonglong)(((uint)uVar4 ^ 0x941c600) & 0x7df7ef1f);
  _DAT_18317f620 = (uVar4 ^ uVar5) + 0xbc23f25e ^ 0xbe5c52282ffc2178;
  _DAT_18317f678 = (_DAT_18317f678 * 0x4f21a29ea09fc2ed ^ _DAT_18317f620) + uVar5;
  _DAT_18317f618 = 0xbc23f25e;
  uVar4 = (_DAT_18317f558 ^ _DAT_180b2ae10) + _DAT_18317f5d0 + 0x3801d17b;
  uVar5 = (_DAT_18317f5d0 ^ _UNK_180b2ae18) + _DAT_18317f558 + 0x83a81a02;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18317f558 ^ _DAT_180b2ae10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18317f5d0 ^ _UNK_180b2ae18;
  _DAT_18317f5e0 =
       func_0x0001871ba430((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18317f558 + 0x83a81a02) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18317f5d0 + 0x3801d17b));
  uVar4 = _DAT_18317f5e0 ^ 0xbc23f25e;
  _DAT_18317f650 = _DAT_18317f6e8 ^ uVar4 ^ 0x13fcc0c60;
  _DAT_18317f6b0 = (_DAT_18317f6b0 ^ uVar4) + 0x13fcc0c60 ^ 0x39f8ce801a2a4d8d;
  _DAT_18317f508 = (_DAT_18317f508 * -0x7bbf186fbfc4b24d ^ _DAT_18317f6b0) + uVar4;
  _DAT_18317f558 = _DAT_18317f508 ^ _DAT_18317f6b0;
  _DAT_18317f5b8 = 0x3fcc0c60;
  uVar4 = (_DAT_18317f680 ^ _DAT_180b2ae20) + _DAT_18317f6f8 + 0xbbee2f45;
  uVar5 = (_DAT_18317f6f8 ^ _UNK_180b2ae28) + _DAT_18317f680 + 0x3fcc0c60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18317f680 ^ _DAT_180b2ae20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18317f6f8 ^ _UNK_180b2ae28;
  uVar4 = func_0x0001871ba430((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18317f680 + 0x3fcc0c60) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18317f6f8 + 0xbbee2f45));
  _DAT_18317f6b0 = uVar4 ^ 0x3fcc0c60;
  _DAT_18317f668 = _DAT_18317f668 ^ _DAT_18317f6b0 ^ 0x3dfc3bc24988caeb;
  _DAT_18317f578 = (uVar4 * -0x74e203c201d07833 ^ _DAT_18317f668) + _DAT_18317f6b0;
  _DAT_18317f6c0 = _DAT_18317f578 ^ _DAT_18317f668;
  _DAT_18317f510 = 0;
  _DAT_18317f5f8 = func_0x0001871ba430(_DAT_18317f6f8 ^ 0x30fffe42ffe518);
  _DAT_18317f5b0 = (_DAT_18317f5b0 ^ _DAT_18317f5f8) + 0x820810e0 ^ 0x748c4e51a7e16aff;
  _DAT_18317f6a0 = (_DAT_18317f6a0 * 0x7e4d10983c55c637 ^ _DAT_18317f5b0) + _DAT_18317f5f8;
  _DAT_18317f608 = _DAT_18317f6a0 ^ _DAT_18317f5b0;
  _DAT_18317f6c8 = 0x820810e0;
  uVar4 = (_DAT_18317f538 ^ _DAT_180b2ae30) + _DAT_18317f588 + 0xf9d5cc3a;
  uVar5 = (_DAT_18317f588 ^ _UNK_180b2ae38) + _DAT_18317f538 + 0x820810e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18317f538 ^ _DAT_180b2ae30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18317f588 ^ _UNK_180b2ae38;
  _DAT_18317f668 =
       func_0x0001871ba430((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18317f538 + 0x820810e0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18317f588 + 0xf9d5cc3a));
  uVar4 = (_DAT_18317f668 ^ 0xffffffff) * -0x141791f238c4e01d ^ 0x820810e0;
  _DAT_18317f5d0 = _DAT_18317f5d0 ^ uVar4 ^ 0x9911e18a882e468a;
  _DAT_18317f628 = (_DAT_18317f628 * 0x1f57143a017f7107 ^ _DAT_18317f5d0) + uVar4;
  _DAT_18317f6c0 = _DAT_18317f628 ^ _DAT_18317f5d0;
  _DAT_18317f508 = 0;
  uVar4 = (~_DAT_18317f520 + 0x79f54b0f) *
          ((_DAT_18317f538 ^ 0xfdd7682b) + (ulonglong)((uint)_DAT_18317f538 & 0xfdd7682b) * 2);
  uVar4 = (uVar4 | _DAT_18317f6f8) + (uVar4 & _DAT_18317f6f8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18317f578 = func_0x0001871ba430((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_18317f578 & 0x79f54b0e) * 0x49071235e8eaf055;
  _DAT_18317f580 = _DAT_18317f580 ^ uVar4 ^ 0x2129cd13ea1f21b1;
  _DAT_18317f670 = (_DAT_18317f670 * -0x442c0120e8548c03 ^ _DAT_18317f580) + uVar4;
  _DAT_18317f508 = _DAT_18317f670 ^ _DAT_18317f580;
  _DAT_18317f658 = 0;
  uVar4 = ((_DAT_18317f6b0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_18317f6b0 & 0x8422dcda) * 2) *
          -_DAT_18317f5f8;
  uVar4 = (uVar4 | _DAT_18317f6b8) + (uVar4 & _DAT_18317f6b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18317f6a8 = func_0x0001871ba430((uVar4 | 0x8422dcda) + (ulonglong)((uint)uVar4 & 0x8422dcda))
  ;
  _DAT_18317f560 = _DAT_18317f550 ^ _DAT_18317f6a8 ^ 0xffff;
  _DAT_18317f530 = (_DAT_18317f530 ^ _DAT_18317f6a8) + 0xffff ^ 0xecdcda89f17e8914;
  _DAT_18317f6b0 = (_DAT_18317f6b0 * 0x7f04bce31ad849c1 ^ _DAT_18317f530) + _DAT_18317f6a8;
  _DAT_18317f638 = _DAT_18317f6b0 ^ _DAT_18317f530;
  _DAT_18317f518 = 0xffff;
  uVar1 = *(uint *)(unaff_RBP + 0x60);
  auVar7._8_8_ = _UNK_1801098d8;
  auVar7._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_180b2ae40,_DAT_1800170c0);
  uVar5 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar5 + _DAT_18317f598;
  if (auVar8._4_4_ < 0) {
    uVar4 = _DAT_18317f6d0 ^ uVar5;
  }
  _DAT_18317f608 = func_0x0001871ba430(SUB161(auVar7 ^ _DAT_180b2ae40,5) ^ uVar4);
  uVar4 = _DAT_18317f608 << 0x29 | _DAT_18317f608 >> 0x17;
  _DAT_18317f550 = (ulonglong)uVar1 & 0xffff;
  _DAT_18317f6e8 = (_DAT_18317f6e8 ^ uVar4) + _DAT_18317f550 ^ 0xb2ad6a378d84b07c;
  _DAT_18317f5c8 = (_DAT_18317f5c8 * -0xf69ce3dadb2201d ^ _DAT_18317f6e8) + uVar4;
  _DAT_18317f650 = _DAT_18317f5c8 ^ _DAT_18317f6e8;
  _DAT_18317f508 = _DAT_18317f670 ^ _DAT_18317f550;
  *(int *)(unaff_RBP + 0x90) = (int)_DAT_18317f550;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x30)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x71a1d5a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871a1d5a(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  longlong unaff_R15;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint uVar9;
  
  *(bool *)(unaff_RBP + 0x30) = *(longlong *)(unaff_RBP + -8) == 0;
  uVar2 = (~param_2 + 2) * ((param_3 ^ in_RAX) + param_4 * 2);
  uVar2 = (uVar2 | param_1) + (uVar2 & param_1);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18317f5c0 =
       func_0x0001871ba430((in_RAX ^ 1 | uVar2) + (ulonglong)((uint)(in_RAX ^ 1) & (uint)uVar2));
  uVar9 = (uint)unaff_R14;
  uVar8 = uVar9 & _DAT_18001a990;
  uVar6 = uVar9 | _DAT_18001a990;
  uVar9 = uVar9 ^ _DAT_18001a990;
  lVar7 = ((unaff_R14 & 0xffffffff) * (ulonglong)unaff_XMM8_Da << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180b2ad60;
  uVar2 = (_DAT_18317f5c0 ^ unaff_R14) & 0x1fffffffff;
  _DAT_18317f5a8 =
       ((((ulonglong)uVar9 * (ulonglong)_DAT_180b2ad50 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)_DAT_180b2ad40 +
         ((ulonglong)uVar6 * (ulonglong)_DAT_180b2ad30 << 0x20) +
         (ulonglong)uVar6 * (ulonglong)_DAT_180b2ad20 +
         ((ulonglong)uVar8 * (ulonglong)_DAT_180b2ad10 << 0x20 |
         (ulonglong)uVar8 * (ulonglong)_DAT_180b2ad00) +
         ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180b2acf0 << 0x20) +
         (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180b2ace0 + lVar7) -
       (((ulonglong)uVar9 * (ulonglong)_DAT_180b2adf0 << 0x20) +
        (ulonglong)uVar9 * (ulonglong)_DAT_180b2ade0 +
        ((ulonglong)uVar6 * (ulonglong)_DAT_180b2add0 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)unaff_XMM12_Da +
        ((ulonglong)uVar8 * (ulonglong)unaff_XMM11_Da << 0x20 |
        (ulonglong)uVar8 * (ulonglong)unaff_XMM10_Da) +
        ((unaff_R14 & 0xffffffff) * (ulonglong)unaff_XMM9_Da << 0x20) +
        (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180b2ad80 + lVar7)) + 0x1d61e5245b89b2c9;
  _DAT_18317f608 = _DAT_18317f578 ^ uVar2 ^ _DAT_18317f5a8;
  _DAT_18317f600 = (_DAT_18317f600 ^ uVar2) + _DAT_18317f5a8 ^ 0xd3c2c8603367e8b8;
  _DAT_18317f570 = (_DAT_18317f570 * 0x1d510e1b8eb9beab ^ _DAT_18317f600) + uVar2;
  _DAT_18317f690 = _DAT_18317f570 ^ _DAT_18317f600;
  _DAT_18317f5a8 = _DAT_18317f5a8 & 0xffffffff;
  uVar2 = (~_DAT_18317f658 + 0x772d0429) *
          ((_DAT_18317f5e8 ^ unaff_RBX) + (ulonglong)((uint)_DAT_18317f5e8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18317f6a8) + (uVar2 & _DAT_18317f6a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18317f5d0 = func_0x0001871ba430((uVar2 | 0xf30f270d) + (ulonglong)((uint)uVar2 & 0xf30f270d))
  ;
  uVar2 = _DAT_18317f5d0 - (_DAT_18317f5d0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_R13) + (uVar2 >> 2 & unaff_R13);
  uVar2 = ((((uVar2 >> 4) + uVar2 & unaff_R12) * unaff_R15 >> 0x38) << 2 ^ _DAT_18317f5d0) *
          -0x22c595700c51d81f;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R13) + (uVar3 >> 2 & unaff_R13);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & unaff_R12) * unaff_R15 >> 0x38);
  uVar2 = (uint)bVar1 + (uint)bVar1 ^ uVar2;
  _DAT_18317f638 = (_DAT_18317f638 ^ uVar2) - 0x772d0428 ^ 0xdd46defe2ce67c50;
  _DAT_18317f548 = (_DAT_18317f548 * -0x7cfb78323c1d0219 ^ _DAT_18317f638) + uVar2;
  _DAT_18317f638 = _DAT_18317f548 ^ _DAT_18317f638;
  _DAT_18317f5a8 = 0x88d2fbd8;
  uVar2 = (~_DAT_18317f550 + 0x772d0429) *
          ((_DAT_18317f530 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_18317f530 & 0x8422dcda) * 2);
  uVar2 = (uVar2 | _DAT_18317f6f0) + (uVar2 & _DAT_18317f6f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x0001871ba430((uVar2 | 0xf30fd8f2) + (ulonglong)((uint)uVar2 & 0xf30fd8f2));
  _DAT_18317f6c0 = _DAT_18317f620 ^ uVar2 ^ 0x772e0427;
  _DAT_18317f610 = 0x3ddb495bd1612f57;
  _DAT_18317f528 = (_DAT_18317f528 * -0x5c7770ac44fb1f67 ^ 0x3ddb495bd1612f57) + uVar2;
  _DAT_18317f698 = _DAT_18317f528 ^ 0x3ddb495bd1612f57;
  _DAT_18317f600 = 0x772e0427;
  uVar2 = func_0x0001871ba430(_DAT_18317f6d8 ^ 0xffa3fff7d5ff456d);
  _DAT_18317f5b8 = uVar2 & 0xfffffffffffffffc;
  _DAT_18317f588 = _DAT_18317f510 ^ _DAT_18317f5b8 ^ 0x10000ffff;
  _DAT_18317f528 = (_DAT_18317f528 ^ _DAT_18317f5b8) + 0x10000ffff ^ 0xea2e938eed90b7dc;
  _DAT_18317f5b8 = (uVar2 * -0x66cb6767c90c50af ^ _DAT_18317f528) + _DAT_18317f5b8;
  _DAT_18317f620 = _DAT_18317f5b8 ^ _DAT_18317f528;
  _DAT_18317f5b0 = 0xffff;
  uVar2 = (_DAT_18317f548 ^ _DAT_180b2ae00) + _DAT_18317f550 + 0x84222325;
  uVar3 = (_DAT_18317f550 ^ _UNK_180b2ae08) + _DAT_18317f548 + 0xe07d61da;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f548 ^ _DAT_180b2ae00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18317f550 ^ _UNK_180b2ae08;
  _DAT_18317f680 =
       func_0x0001871ba430((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18317f548 + 0xe07d61da) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f550 + 0x84222325));
  uVar2 = _DAT_18317f680 << 0x1d | _DAT_18317f680 >> 0x23;
  _DAT_18317f548 = (_DAT_18317f548 ^ uVar2) - 0xe07d61da ^ 0xd432383f76a3d38d;
  _DAT_18317f650 = (_DAT_18317f650 * -0x1d5f453be7df1e1b ^ _DAT_18317f548) + uVar2;
  _DAT_18317f648 = _DAT_18317f650 ^ _DAT_18317f548;
  _DAT_18317f6c0 = 0x1f829e26;
  uVar2 = (~_DAT_18317f530 + 0xe07d61db) *
          ((_DAT_18317f588 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_18317f588 & 0x8422dcda) * 2);
  uVar2 = (uVar2 | _DAT_18317f548) + (uVar2 & _DAT_18317f548);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18317f590 = func_0x0001871ba430((uVar2 | 0x645fbd00) + (ulonglong)((uint)uVar2 & 0x645fbd00))
  ;
  uVar2 = _DAT_18317f590 * 0x19d6d53ef1d39dbf ^ 0xe07d61da;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R13) + (uVar3 >> 2 & unaff_R13);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_R12) * unaff_R15 >> 0x38)) * 0x10 ^ uVar2;
  _DAT_18317f660 = _DAT_18317f658 ^ uVar2 ^ 0xe07e61d9;
  _DAT_18317f5f8 = (_DAT_18317f5f8 ^ uVar2) + 0xe07e61d9 ^ 0x99268a6f15140df8;
  _DAT_18317f518 = (_DAT_18317f518 * 0x96509e112ae127d ^ _DAT_18317f5f8) + uVar2;
  _DAT_18317f5b8 = _DAT_18317f518 ^ _DAT_18317f5f8;
  _DAT_18317f620 = 0xe07e61d9;
  uVar2 = (~_DAT_18317f6b0 + 0xc1d41d42) *
          ((_DAT_18317f600 ^ 0xf9d5cc3a) + (ulonglong)((uint)_DAT_18317f600 & 0xf9d5cc3a) * 2);
  uVar2 = (uVar2 | _DAT_18317f650) + (uVar2 & _DAT_18317f650);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18317f6e8 = func_0x0001871ba430((uVar2 | 0x3801d17b) + (ulonglong)((uint)uVar2 & 0x3801d17b))
  ;
  uVar2 = (_DAT_18317f6e8 ^ 0x5f604afdca95cb81) * 0x69d98b04bdb99db9;
  _DAT_18317f6c8 = _DAT_18317f690 ^ uVar2 ^ 0x13fcc0c60;
  _DAT_18317f598 = (_DAT_18317f598 ^ uVar2) + 0x13fcc0c60 ^ 0x218ed162a607597a;
  _DAT_18317f5d8 = (_DAT_18317f5d8 * 0x3f17d327485707e9 ^ _DAT_18317f598) + uVar2;
  _DAT_18317f650 = _DAT_18317f5d8 ^ _DAT_18317f598;
  _DAT_18317f6d8 = 0x3fcc0c60;
  uVar2 = func_0x0001871ba430(_DAT_18317f520 + 0xffd10007b50000ff ^ 0x5a);
  uVar3 = (ulonglong)(((uint)uVar2 ^ 0x941c600) & 0x7df7ef1f);
  _DAT_18317f620 = (uVar2 ^ uVar3) + 0xbc23f25e ^ 0xbe5c52282ffc2178;
  _DAT_18317f678 = (_DAT_18317f678 * 0x4f21a29ea09fc2ed ^ _DAT_18317f620) + uVar3;
  _DAT_18317f618 = 0xbc23f25e;
  uVar2 = (_DAT_18317f558 ^ _DAT_180b2ae10) + _DAT_18317f5d0 + 0x3801d17b;
  uVar3 = (_DAT_18317f5d0 ^ _UNK_180b2ae18) + _DAT_18317f558 + 0x83a81a02;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f558 ^ _DAT_180b2ae10;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18317f5d0 ^ _UNK_180b2ae18;
  _DAT_18317f5e0 =
       func_0x0001871ba430((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18317f558 + 0x83a81a02) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f5d0 + 0x3801d17b));
  uVar2 = _DAT_18317f5e0 ^ 0xbc23f25e;
  _DAT_18317f650 = _DAT_18317f6e8 ^ uVar2 ^ 0x13fcc0c60;
  _DAT_18317f6b0 = (_DAT_18317f6b0 ^ uVar2) + 0x13fcc0c60 ^ 0x39f8ce801a2a4d8d;
  _DAT_18317f508 = (_DAT_18317f508 * -0x7bbf186fbfc4b24d ^ _DAT_18317f6b0) + uVar2;
  _DAT_18317f558 = _DAT_18317f508 ^ _DAT_18317f6b0;
  _DAT_18317f5b8 = 0x3fcc0c60;
  uVar2 = (_DAT_18317f680 ^ _DAT_180b2ae20) + _DAT_18317f6f8 + 0xbbee2f45;
  uVar3 = (_DAT_18317f6f8 ^ _UNK_180b2ae28) + _DAT_18317f680 + 0x3fcc0c60;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f680 ^ _DAT_180b2ae20;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18317f6f8 ^ _UNK_180b2ae28;
  uVar2 = func_0x0001871ba430((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18317f680 + 0x3fcc0c60) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f6f8 + 0xbbee2f45));
  _DAT_18317f6b0 = uVar2 ^ 0x3fcc0c60;
  _DAT_18317f668 = _DAT_18317f668 ^ _DAT_18317f6b0 ^ 0x3dfc3bc24988caeb;
  _DAT_18317f578 = (uVar2 * -0x74e203c201d07833 ^ _DAT_18317f668) + _DAT_18317f6b0;
  _DAT_18317f6c0 = _DAT_18317f578 ^ _DAT_18317f668;
  _DAT_18317f510 = 0;
  _DAT_18317f5f8 = func_0x0001871ba430(_DAT_18317f6f8 ^ 0x30fffe42ffe518);
  _DAT_18317f5b0 = (_DAT_18317f5b0 ^ _DAT_18317f5f8) + 0x820810e0 ^ 0x748c4e51a7e16aff;
  _DAT_18317f6a0 = (_DAT_18317f6a0 * 0x7e4d10983c55c637 ^ _DAT_18317f5b0) + _DAT_18317f5f8;
  _DAT_18317f608 = _DAT_18317f6a0 ^ _DAT_18317f5b0;
  _DAT_18317f6c8 = 0x820810e0;
  uVar2 = (_DAT_18317f538 ^ _DAT_180b2ae30) + _DAT_18317f588 + 0xf9d5cc3a;
  uVar3 = (_DAT_18317f588 ^ _UNK_180b2ae38) + _DAT_18317f538 + 0x820810e0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18317f538 ^ _DAT_180b2ae30;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18317f588 ^ _UNK_180b2ae38;
  _DAT_18317f668 =
       func_0x0001871ba430((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18317f538 + 0x820810e0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18317f588 + 0xf9d5cc3a));
  uVar2 = (_DAT_18317f668 ^ 0xffffffff) * -0x141791f238c4e01d ^ 0x820810e0;
  _DAT_18317f5d0 = _DAT_18317f5d0 ^ uVar2 ^ 0x9911e18a882e468a;
  _DAT_18317f628 = (_DAT_18317f628 * 0x1f57143a017f7107 ^ _DAT_18317f5d0) + uVar2;
  _DAT_18317f6c0 = _DAT_18317f628 ^ _DAT_18317f5d0;
  _DAT_18317f508 = 0;
  uVar2 = (~_DAT_18317f520 + 0x79f54b0f) *
          ((_DAT_18317f538 ^ 0xfdd7682b) + (ulonglong)((uint)_DAT_18317f538 & 0xfdd7682b) * 2);
  uVar2 = (uVar2 | _DAT_18317f6f8) + (uVar2 & _DAT_18317f6f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18317f578 = func_0x0001871ba430((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar2 = (ulonglong)(~(uint)_DAT_18317f578 & 0x79f54b0e) * 0x49071235e8eaf055;
  _DAT_18317f580 = _DAT_18317f580 ^ uVar2 ^ 0x2129cd13ea1f21b1;
  _DAT_18317f670 = (_DAT_18317f670 * -0x442c0120e8548c03 ^ _DAT_18317f580) + uVar2;
  _DAT_18317f508 = _DAT_18317f670 ^ _DAT_18317f580;
  _DAT_18317f658 = 0;
  uVar2 = ((_DAT_18317f6b0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_18317f6b0 & 0x8422dcda) * 2) *
          -_DAT_18317f5f8;
  uVar2 = (uVar2 | _DAT_18317f6b8) + (uVar2 & _DAT_18317f6b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18317f6a8 = func_0x0001871ba430((uVar2 | 0x8422dcda) + (ulonglong)((uint)uVar2 & 0x8422dcda))
  ;
  _DAT_18317f560 = _DAT_18317f550 ^ _DAT_18317f6a8 ^ 0xffff;
  _DAT_18317f530 = (_DAT_18317f530 ^ _DAT_18317f6a8) + 0xffff ^ 0xecdcda89f17e8914;
  _DAT_18317f6b0 = (_DAT_18317f6b0 * 0x7f04bce31ad849c1 ^ _DAT_18317f530) + _DAT_18317f6a8;
  _DAT_18317f638 = _DAT_18317f6b0 ^ _DAT_18317f530;
  _DAT_18317f518 = 0xffff;
  uVar9 = *(uint *)(unaff_RBP + 0x60);
  auVar4._8_8_ = _UNK_1801098d8;
  auVar4._0_8_ = (ulonglong)uVar9 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_180b2ae40,_DAT_1800170c0);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_18317f598;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_18317f6d0 ^ uVar3;
  }
  _DAT_18317f608 = func_0x0001871ba430(SUB161(auVar4 ^ _DAT_180b2ae40,5) ^ uVar2);
  uVar2 = _DAT_18317f608 << 0x29 | _DAT_18317f608 >> 0x17;
  _DAT_18317f550 = (ulonglong)uVar9 & 0xffff;
  _DAT_18317f6e8 = (_DAT_18317f6e8 ^ uVar2) + _DAT_18317f550 ^ 0xb2ad6a378d84b07c;
  _DAT_18317f5c8 = (_DAT_18317f5c8 * -0xf69ce3dadb2201d ^ _DAT_18317f6e8) + uVar2;
  _DAT_18317f650 = _DAT_18317f5c8 ^ _DAT_18317f6e8;
  _DAT_18317f508 = _DAT_18317f670 ^ _DAT_18317f550;
  *(int *)(unaff_RBP + 0x90) = (int)_DAT_18317f550;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x30)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x71a2eb0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871a2eb0(void)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_XMM14_Da;
  
  uVar2 = *(undefined8 *)(unaff_RBP + 0x78);
  *(undefined8 *)(unaff_RBP + 0x80) = uVar2;
  uVar1 = *(uint *)(unaff_RBP + 0x40);
  uVar7 = uVar1 ^ unaff_RBX ^ _DAT_18317f618;
  plVar3 = *(longlong **)(unaff_RBP + 0x58);
  lVar6 = (uVar1 ^ unaff_RBX) + _DAT_18317f680;
  uVar8 = uVar7 + lVar6;
  uVar9 = (_DAT_18317f680 ^ 1) + _DAT_18317f618 + 1;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18317f680 ^ 1;
  _DAT_18317f5c8 =
       func_0x0001871ba430((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18317f618 + 1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar6);
  uVar10 = uVar1 & _DAT_18001a990;
  uVar11 = uVar1 ^ _DAT_18001a990;
  uVar7 = _DAT_18317f5c8 << 0x13 | _DAT_18317f5c8 >> 0x2d;
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar4 + (uint)bVar4 ^ uVar7;
  uVar8 = ((ulonglong)uVar11 * (ulonglong)_DAT_180b2aef0 << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_DAT_180b2aee0 +
          ((ulonglong)uVar10 * (ulonglong)_DAT_180b2aed0 << 0x20 |
          (ulonglong)uVar10 * (ulonglong)_DAT_180b2aec0) +
          ((ulonglong)uVar1 * (ulonglong)_DAT_180b2aeb0 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_180b2aea0 +
          (-(((ulonglong)(uVar1 ^ unaff_XMM14_Da) * (ulonglong)_DAT_180b2afb0 + _DAT_180b2afc0 <<
             0x20) + (ulonglong)(uVar1 ^ unaff_XMM14_Da) * (ulonglong)_DAT_180b2afa0) -
          (((ulonglong)uVar11 * (ulonglong)_DAT_180b2af90 << 0x20) +
           (ulonglong)uVar11 * (ulonglong)_DAT_180b2af80 +
           ((ulonglong)(uVar1 | _DAT_18001a990) * (ulonglong)_DAT_180b2af70 << 0x20) +
           (ulonglong)(uVar1 | _DAT_18001a990) * (ulonglong)_DAT_180b2af60 +
          ((ulonglong)uVar10 * (ulonglong)_DAT_180b2af50 << 0x20 |
          (ulonglong)uVar10 * (ulonglong)_DAT_180b2af40) +
          ((ulonglong)uVar1 * (ulonglong)_DAT_180b2af30 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_180b2af20)) + 0xf0a1e6da0124853a;
  _DAT_18317f508 = _DAT_18317f540 ^ uVar7 ^ uVar8;
  _DAT_18317f558 = (_DAT_18317f558 ^ uVar7) + uVar8 ^ 0x8bcdf9240b4444ba;
  _DAT_18317f580 = (_DAT_18317f580 * -0x2d578b2cc2338b07 ^ _DAT_18317f558) + uVar7;
  _DAT_18317f658 = _DAT_18317f580 ^ _DAT_18317f558;
  _DAT_18317f520 = uVar8 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar8;
  iVar5 = (**(code **)(plVar3 + JNI->GetArrayLength /*0x558*/))(plVar3,uVar2);
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar5 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x71a59cb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871a59cb(void)

{
  char cVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  undefined8 unaff_R12;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_RBP + 0x90) = unaff_R12;
  *(undefined4 *)(unaff_RBP + 0x98) = 0;
  *(undefined4 *)(unaff_RBP + 0xa0) = unaff_EDI;
  FUN_190ddfc90();
  cVar1 = (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x71a5d28 -----

undefined8 FUN_1871a5d28(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(unaff_RBX + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x71a5d80 -----

void FUN_1871a5d80(void)

{
  return;
}


// ----- block @ rva 0x71a5ed2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871a5ed2(longlong param_1)

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


// ----- block @ rva 0x71bc727 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871bc727(void)

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


// ----- block @ rva 0x71bc8d0 -----

void FUN_1871bc8d0(void)

{
  return;
}


// ----- block @ rva 0x71be2a4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871be2a4(void)

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


// ----- block @ rva 0x71be73a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871be73a(void)

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


// ----- block @ rva 0x71be88e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1871c13f6(void)

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


// ----- block @ rva 0x71be9b1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1871c13f6(void)

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


// ----- block @ rva 0x71c0553 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1871c13f6(void)

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


// ----- block @ rva 0x71c0f70 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c0f70(void)

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


// ----- block @ rva 0x71c12d1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c12d1(void)

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


// ----- block @ rva 0x71c139a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c139a(void)

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


// ----- block @ rva 0x71c502e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c502e(void)

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


// ----- block @ rva 0x71c5082 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c5082(void)

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


// ----- block @ rva 0x71c51a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c51a2(void)

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


// ----- block @ rva 0x71c51f6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c51f6(void)

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


// ----- block @ rva 0x71c544c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c544c(void)

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


// ----- block @ rva 0x71c54a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c54a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180b32538)();
  return;
}


// ----- block @ rva 0x71c5531 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c5531(void)

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


// ----- block @ rva 0x71c564c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c564c(void)

{
  FUN_190de3220();
  (*_DAT_180b32178)();
  return;
}


// ----- block @ rva 0x71c5ea6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c5ea6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180b32538)();
  return;
}


// ----- block @ rva 0x71c5ec1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c5ec1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180b323f8)();
  return;
}


// ----- block @ rva 0x71c5ef5 -----

void FUN_1871c5ef5(void)

{
  return;
}


// ----- block @ rva 0x71c5f04 -----

void FUN_1871c5f04(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x71c607c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c607c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180b32658)();
  return;
}


// ----- block @ rva 0x71c609b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c609b(void)

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


// ----- block @ rva 0x71c6e7a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c6e7a(void)

{
  (*_DAT_180b33528)();
  return;
}


// ----- block @ rva 0x71c7b61 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c7b61(void)

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


// ----- block @ rva 0x71c7d95 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c7d95(void)

{
  (*_DAT_180b33448)();
  return;
}


// ----- block @ rva 0x71c8016 -----

void FUN_1871c8016(void)

{
  return;
}


// ----- block @ rva 0x71c8374 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c8374(void)

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


// ----- block @ rva 0x71c8529 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871c8529(void)

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


// ----- block @ rva 0x71c89dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c89dd(void)

{
  (*_DAT_180b33488)();
  return;
}


// ----- block @ rva 0x71c8b54 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871c8b54(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180b32e08)();
  return;
}


// ----- block @ rva 0x71c8e0c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001871c8e62 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1871c8e0c(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x71cd7c9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001871cde72 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1871cd7c9(undefined4 param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint unaff_EBP;
  ulonglong uVar6;
  longlong *unaff_RSI;
  uint uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  ulonglong unaff_XMM11_Qa;
  uint uVar12;
  uint uVar13;
  uint uStack00000000000000c8;
  undefined4 uStack00000000000000f0;
  
  auVar9._8_8_ = _UNK_180062bf8;
  auVar9._0_8_ = (ulonglong)unaff_EBP ^ 0x84222325;
  auVar10 = pshufb(auVar9 ^ _DAT_180b38130,_DAT_1800170c0);
  uVar5 = auVar10._8_8_ + auVar10._0_8_;
  uVar2 = uVar5 + _DAT_183180508;
  if (auVar10._4_4_ < 0) {
    uVar2 = _DAT_183180810 ^ uVar5;
  }
  uStack00000000000000c8 = param_2;
  uStack00000000000000f0 = param_1;
  _DAT_183180550 = func_0x0001871f06e0(SUB161(auVar9 ^ _DAT_180b38130,5) ^ uVar2);
  uVar1 = uStack00000000000000c8;
  uVar12 = unaff_EBP & unaff_XMM7_Da;
  uVar13 = unaff_EBP | unaff_XMM7_Da;
  uVar7 = unaff_EBP ^ (uint)unaff_XMM11_Qa;
  uVar2 = _DAT_183180550 << 0xf | _DAT_183180550 >> 0x31;
  uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar2;
  uVar3 = ((((ulonglong)(unaff_EBP ^ unaff_XMM7_Da) * (ulonglong)_DAT_180b381b0 << 0x20) +
            (ulonglong)(unaff_EBP ^ unaff_XMM7_Da) * (ulonglong)_DAT_180b381a0 +
            ((ulonglong)uVar13 * (ulonglong)_DAT_180b38190 << 0x20) +
            (ulonglong)uVar13 * (ulonglong)_DAT_180b38180 +
           ((ulonglong)uVar12 * (ulonglong)_DAT_180b38170 << 0x20 |
           (ulonglong)uVar12 * (ulonglong)_DAT_180b38160) +
           ((ulonglong)unaff_EBP * (ulonglong)_DAT_180b38150 << 0x20) +
           (ulonglong)unaff_EBP * (ulonglong)_DAT_180b38140) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_180b38230 + _DAT_180b38240 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180b38220 +
          ((ulonglong)uVar13 * (ulonglong)_DAT_180b38210 << 0x20) +
          (ulonglong)uVar13 * (ulonglong)_DAT_180b38200 +
          ((ulonglong)uVar12 * (ulonglong)_DAT_180b38210 << 0x20 |
          (ulonglong)uVar12 * (ulonglong)_DAT_180b38200) +
          (ulonglong)unaff_EBP * (ulonglong)_DAT_180b381e0 +
          ((ulonglong)unaff_EBP * (ulonglong)_DAT_180b381f0 << 0x20))) + 0x562554dc3f0790a;
  _DAT_183180758 = _DAT_183180870 ^ uVar2 ^ uVar3;
  _DAT_183180768 = (_DAT_183180768 ^ uVar2) + uVar3 ^ 0x1eafeaa934c4c694;
  _DAT_183180540 = (_DAT_183180540 * 0x3b92f7ffa875d91f ^ _DAT_183180768) + uVar2;
  _DAT_1831802c0 = _DAT_183180540 ^ _DAT_183180768;
  _DAT_1831801a0 = uVar3 & 0xffffffff;
  uVar2 = (ulonglong)uStack00000000000000c8;
  uVar6 = uVar3 & 0xffffffff;
  uVar5 = uVar2 ^ 0x84222325;
  uVar4 = ((_DAT_183180748 ^ uVar5) + (ulonglong)((uint)_DAT_183180748 & (uint)uVar5) * 2) *
          (uVar6 - _DAT_1831805c0);
  uVar4 = (uVar4 | _DAT_183180840) + (uVar4 & _DAT_183180840);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183180538 =
       func_0x0001871f06e0((uVar5 ^ uVar6 | uVar4) +
                           (ulonglong)((uint)(uVar5 ^ uVar6) & (uint)uVar4));
  uVar12 = uVar1 & (uint)uVar3;
  uVar13 = uVar1 | (uint)uVar3;
  uVar2 = uVar2 ^ uVar6;
  uVar5 = (ulonglong)uVar1 * (uVar3 & 0xffffffff);
  lVar11 = (uVar5 & 0xffffffff) * (ulonglong)_DAT_180b382d0 +
           ((uVar5 & 0xffffffff) * (ulonglong)_DAT_180b382e0 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_180b382d0 << 0x20);
  uVar7 = uVar1 ^ (uint)unaff_XMM11_Qa;
  lVar8 = ((uVar6 ^ unaff_XMM11_Qa) & 0xffffffff) * (ulonglong)unaff_XMM6_Da +
          ((unaff_XMM11_Qa >> 0x20) * (ulonglong)unaff_XMM6_Da +
           ((uVar6 ^ unaff_XMM11_Qa) & 0xffffffff) * (ulonglong)_DAT_180b38320 << 0x20) +
          ((uVar3 & 0xffffffff) * (ulonglong)_DAT_180b38320 << 0x20) +
          (uVar3 & 0xffffffff) * (ulonglong)unaff_XMM6_Da +
          ((ulonglong)uVar1 * (ulonglong)_DAT_180b38300 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_180b382f0 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_180b38300 + _DAT_180b38330 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_180b382f0 + lVar11;
  uVar5 = _DAT_183180538 & 0x7fffffffffffffff;
  _DAT_183180738 =
       ((uVar2 * _DAT_180b382b0 + (uVar2 * _DAT_180b382c0 << 0x20) +
         ((ulonglong)uVar13 * (ulonglong)_DAT_180b382a0 << 0x20) +
         (ulonglong)uVar13 * (ulonglong)_DAT_180b38290 +
         ((ulonglong)uVar12 * (ulonglong)_DAT_180b38280 << 0x20) +
         (ulonglong)uVar12 * (ulonglong)_DAT_180b38270 +
         ((uVar3 & 0xffffffff) * (ulonglong)_DAT_180b38260 << 0x20) +
         (uVar3 & 0xffffffff) * (ulonglong)_DAT_180b38250 +
         ((ulonglong)uVar1 * (ulonglong)_DAT_180b38260 << 0x20) +
         (ulonglong)uVar1 * (ulonglong)_DAT_180b38250 + lVar11) - lVar8) + 0x2fce7ca3a430571;
  _DAT_183180850 = _DAT_183180688 ^ uVar5 ^ _DAT_183180738;
  _DAT_183180130 = (_DAT_183180130 ^ uVar5) + _DAT_183180738 ^ 0x7c8b8ed698cc512a;
  _DAT_183180658 = (_DAT_183180658 * -0xfd2330e2c30605 ^ _DAT_183180130) + uVar5;
  _DAT_1831807c0 = _DAT_183180658 ^ _DAT_183180130;
  _DAT_183180738 = _DAT_183180738 & 0xffffffff;
  FUN_190dd72e0(lVar8,*_DAT_18301ee50 + 0x2e9,0x12);
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x71ce3c5 -----

void thunk_FUN_1871cae30(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x71d6ba5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001871d6bbc */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1871d6ba5(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x71e4668 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871e4668(void)

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


// ----- block @ rva 0x71e72b0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871e72b0(void)

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


// ----- block @ rva 0x71ef7d4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871ef7d4(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x570))();
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


// ----- block @ rva 0x71f04d4 -----

void FUN_1871f04d4(void)

{
  return;
}


// ----- block @ rva 0x71f0540 -----

void FUN_1871f0540(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

