// ===== Lsixtwo/mw; _6cbe60407787b8c91479d0775ab74599 ()V (handler @ image 1871c8d00, runtime 6fffeedd8d00) =====

void FUN_1871c8d00(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xa51e,0x1d2);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xa51e,0x1d2);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001871c6079 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b325f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mw; valueOf (Ljava/lang/String;)Lsixtwo/mw; (handler @ image 18718aea0, runtime 6fffeed9aea0) =====

void FUN_18718aea0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xa51e,0x1d2);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018718aee8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b28ae0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mw; values ()[Lsixtwo/mw; (handler @ image 18718ab20, runtime 6fffeed9ab20) =====

void FUN_18718ab20(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xa51e,0x1d2);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018718ab67 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b28980 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



