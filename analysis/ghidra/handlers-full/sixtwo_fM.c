// ===== Lsixtwo/fM; _29ee64b3edc59393a3bb896a1fd427c8 ()V (handler @ image 18ac054e0, runtime 6ffff28154e0) =====

void FUN_18ac054e0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac055c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181968ac8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fM; aVp (Lsixtwo/gv;)V (handler @ image 18abb6960, runtime 6ffff27c6960) =====

void FUN_18abb6960(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x148f8,0x336);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018abb6a2a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181957c50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fM; aVq (Lsixtwo/gH$th;)V (handler @ image 18abbf950, runtime 6ffff27cf950) =====

void FUN_18abbf950(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x148f8,0x336);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018abbfa1a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18195ad90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fM; aVr (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18abcc870, runtime 6ffff27dc870) =====

undefined8 FUN_18abcc870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fM; aVs ([B)Ljava/lang/String; (handler @ image 18abcc900, runtime 6ffff27dc900) =====

void FUN_18abcc900(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018abcc9a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18195f7e0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fM; aVt (IJ)I (handler @ image 18abf67e0, runtime 6ffff28067e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abf67e0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  
  uRam000000018326cea0 = func_0x00018ac01730(uRam000000018326cd68 ^ 0xa890651ef237e55d);
  uVar5 = uRam000000018326cea0 - (uRam000000018326cea0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018326cea0;
  uRam000000018326ce88 = (uRam000000018326ce88 ^ uVar5) + 0xabf7ca6bfffef79f ^ 0x46e8f593a5bd0c7;
  uRam000000018326ced8 = (uRam000000018326ced8 * -0x7f622234de25e70f ^ uRam000000018326ce88) + uVar5
  ;
  uRam000000018326ce88 = uRam000000018326ced8 ^ uRam000000018326ce88;
  uRam000000018326cd60 = 0xabf7ca6bfffef79f;
  uRam000000018326ced8 = func_0x00018ac01730(uRam000000018326cd70 + 0xd15d147091f233a6 ^ 0xfc);
  uVar3 = uRam000000018326ced8 ^ 0x5b97963c8d3db2ed;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  uRam000000018326ce10 = (uRam000000018326ce10 ^ uVar3) + 0x6734f65115564094 ^ 0xc58ed989244e6be;
  uRam000000018326cde8 = (uRam000000018326cde8 * -0xbb0c8864ec0f82b ^ uRam000000018326ce10) + uVar3;
  uRam000000018326ce10 = uRam000000018326cde8 ^ uRam000000018326ce10;
  uRam000000018326ce28 = 0x6734f65115564094;
  uVar5 = (uRam000000018326cdb0 ^ _UNK_1819672d0) + uRam000000018326ce10 + 0x84222325;
  uVar3 = (uRam000000018326ce10 ^ _UNK_1819672d8) + uRam000000018326cdb0 + 0x4c16b651e8ea1036;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326cdb0 ^ _UNK_1819672d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018326ce10 ^ _UNK_1819672d8;
  uRam000000018326cef8 =
       func_0x00018ac01730((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018326cdb0 + 0x4c16b651e8ea1036) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326ce10 + 0x84222325));
  uRam000000018326cd40 =
       (uRam000000018326cd40 ^ uRam000000018326cef8) + 0xb3e949ae1715efca ^ 0xdb4977e6f5d7b7bd;
  uRam000000018326cdb0 =
       (uRam000000018326cdb0 * 0x67012215e3a55747 ^ uRam000000018326cd40) + uRam000000018326cef8;
  uRam000000018326cd08 = uRam000000018326cdb0 ^ uRam000000018326cd40;
  uRam000000018326ce98 = 0xb3e949ae1715efca;
  uRam000000018326ce90 = func_0x00018ac01730(uRam000000018326ce40 ^ 0x8cab2f1bb6d32b13);
  uRam000000018326ce08 = uRam000000018326ce30 ^ uRam000000018326ce90 ^ 0x7fff;
  uRam000000018326cd30 = (uRam000000018326cd30 ^ uRam000000018326ce90) + 0x7fff ^ 0xf64850c19736eedd
  ;
  uRam000000018326cec8 =
       (uRam000000018326cec8 * 0x4862f2a3507a4f81 ^ uRam000000018326cd30) + uRam000000018326ce90;
  uRam000000018326cd30 = uRam000000018326cec8 ^ uRam000000018326cd30;
  uRam000000018326ce48 = 0x7fff;
  uVar5 = (~uRam000000018326cec0 + 0x96d8b44beda7f8bd) *
          ((uRam000000018326ce70 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018326ce70 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018326ced8) + (uVar5 & uRam000000018326ced8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326ce08 =
       func_0x00018ac01730((uVar5 | 0x96d8b44b6985db99) + (uVar5 & 0x96d8b44b6985db99));
  uVar5 = uRam000000018326ce08 - (uRam000000018326ce08 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018326ce08;
  uRam000000018326cdd8 = (uRam000000018326cdd8 ^ uVar5) + 0x69274bb412580744 ^ 0x7c1361fc33a48eb0;
  uRam000000018326ce10 = (uRam000000018326ce10 * -0x4ae757c4d90514ed ^ uRam000000018326cdd8) + uVar5
  ;
  uRam000000018326cef0 = uRam000000018326ce10 ^ uRam000000018326cdd8;
  uRam000000018326cd10 = 0x69274bb412580744;
  uVar5 = (uRam000000018326cd20 ^ _UNK_1819672e0) + uRam000000018326cd50 + 0x84225cda;
  uVar3 = (uRam000000018326cd50 ^ _UNK_1819672e8) + uRam000000018326cd20 + 0x96d8b44beda7f8bc;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326cd20 ^ _UNK_1819672e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018326cd50 ^ _UNK_1819672e8;
  uRam000000018326cd80 =
       func_0x00018ac01730((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018326cd20 + 0x96d8b44beda7f8bc) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326cd50 + 0x84225cda));
  uVar5 = (ulonglong)(~(uint)uRam000000018326cd80 & 0x7fff);
  uRam000000018326cdd8 = uRam000000018326cdc8 ^ uVar5 ^ 0x96d8b44beda878bb;
  uRam000000018326ced0 = (uRam000000018326ced0 ^ uVar5) + 0x96d8b44beda878bb ^ 0xd4c5f932b0cfe3df;
  uRam000000018326ce58 = (uRam000000018326ce58 * -0x1603bc9010867a9 ^ uRam000000018326ced0) + uVar5;
  uRam000000018326cdc0 = uRam000000018326ce58 ^ uRam000000018326ced0;
  uRam000000018326cd00 = 0x96d8b44beda878bb;
  uVar5 = (~uRam000000018326cee8 + 0x69274bb412580745) *
          ((uRam000000018326cee8 ^ 0x96d8b44b698a5b9e) +
          (uRam000000018326cee8 & 0x16d8b44b698a5b9e) * 2);
  uVar5 = (uVar5 | uRam000000018326ce88) + (uVar5 & uRam000000018326ce88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326cd50 =
       func_0x00018ac01730((uVar5 | 0xffffffff7bd25cda) + (uVar5 & 0xffffffff7bd25cda));
  uRam000000018326ce20 =
       (uRam000000018326ce20 ^ uRam000000018326cd50 & 0xffffffffffffffc0) + 0x7fff ^
       0x921a1398e11f0f94;
  uRam000000018326ce28 =
       (uRam000000018326ce28 * -0x43066897990b2023 ^ uRam000000018326ce20) +
       (uRam000000018326cd50 & 0xffffffffffffffc0);
  uRam000000018326cea0 = uRam000000018326ce28 ^ uRam000000018326ce20;
  uRam000000018326cef8 = 0x7fff;
  uVar5 = (uRam000000018326cd48 ^ _UNK_1819672f0) + uRam000000018326cd90 + 0x84222325;
  uVar3 = (uRam000000018326cd90 ^ _UNK_1819672f8) + uRam000000018326cd48 + 0xf169f51d8d3d386c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326cd48 ^ _UNK_1819672f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018326cd90 ^ _UNK_1819672f8;
  uRam000000018326ce18 =
       func_0x00018ac01730((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018326cd48 + 0xf169f51d8d3d386c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326cd90 + 0x84222325));
  uVar5 = uRam000000018326ce18 << 2 | uRam000000018326ce18 >> 0x3e;
  uRam000000018326ce10 = (uRam000000018326ce10 ^ uVar5) + 0xe960ae272c2c794 ^ 0x8574c8f7c12c1e4f;
  uRam000000018326cd98 = (uRam000000018326cd98 * -0x797578e43b95f46d ^ uRam000000018326ce10) + uVar5
  ;
  uRam000000018326cd20 = uRam000000018326cd98 ^ uRam000000018326ce10;
  uRam000000018326cd50 = uRam000000018326ce98 ^ 0xe960ae272c2c794;
  uRam000000018326ce88 = 0xe960ae272c2c794;
  uVar5 = (~uRam000000018326cd18 + 0xf169f51d8d3d386d) *
          ((uRam000000018326cd48 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018326cd48 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018326ce40) + (uVar5 & uRam000000018326ce40);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326ce80 =
       func_0x00018ac01730((uVar5 | 0xf169f51d091f64b6) + (uVar5 & 0xf169f51d091f64b6));
  uVar5 = uRam000000018326ce80 << 0x25 | uRam000000018326ce80 >> 0x1b;
  uRam000000018326cd68 = uRam000000018326ce28 ^ uVar5 ^ 0xf169f51d8d3db86b;
  uRam000000018326ce38 = (uRam000000018326ce38 ^ uVar5) + 0xf169f51d8d3db86b ^ 0x9689080e383e80b1;
  uRam000000018326ce70 = (uRam000000018326ce70 * 0x48a38c88d873ba9b ^ uRam000000018326ce38) + uVar5;
  uRam000000018326ce88 = uRam000000018326ce70 ^ uRam000000018326ce38;
  uRam000000018326cd50 = 0xf169f51d8d3db86b;
  uVar5 = (~uRam000000018326ce08 + 0x6734f65115564095) *
          ((uRam000000018326ceb8 ^ 0xabf7ca6b7bdcd4ba) +
          (uRam000000018326ceb8 & 0x2bf7ca6b7bdcd4ba) * 2);
  uVar5 = (uVar5 | uRam000000018326ce20) + (uVar5 & uRam000000018326ce20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326ced8 =
       func_0x00018ac01730((uVar5 | 0xccc33c3a6e8a942e) + (uVar5 & 0xccc33c3a6e8a942e));
  uVar5 = uRam000000018326ced8 >> 1 | uRam000000018326ced8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018326ced8;
  uRam000000018326ce20 = uRam000000018326ce80 ^ uVar5 ^ 0x132cc0bd15553833;
  uRam000000018326cd98 = (uRam000000018326cd98 ^ uVar5) + 0x132cc0bd15553833 ^ 0x4f9093c7f8aef4f4;
  uRam000000018326cd48 = (uRam000000018326cd48 * 0x43db4711f39fcf0f ^ uRam000000018326cd98) + uVar5;
  uRam000000018326cdf8 = uRam000000018326cd48 ^ uRam000000018326cd98;
  uRam000000018326cee8 = 0x132cc0bd15553833;
  uRam000000018326ce78 = func_0x00018ac01730(uRam000000018326ce78 ^ 0x1a8b3f16160b89d7);
  uVar3 = uRam000000018326ce78 ^ 0x810f13b5f7b8e7ec;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar3;
  uRam000000018326cd80 = (uRam000000018326cd80 ^ uVar3) + 0xccc33c3aeaa8b70b ^ 0x737b9cdb8de73d95;
  uRam000000018326cd28 = (uRam000000018326cd28 * -0xa8593c34e2b036d ^ uRam000000018326cd80) + uVar3;
  uRam000000018326cd30 = uRam000000018326cd28 ^ uRam000000018326cd80;
  uRam000000018326ce68 = -0x333cc3c5155748f5;
  uVar5 = (~uRam000000018326cdc8 + 0x6734f65115564095) *
          ((uRam000000018326cd40 ^ 0xabf7ca6b7bdcd4ba) +
          (uRam000000018326cd40 & 0x2bf7ca6b7bdcd4ba) * 2);
  uVar5 = (uVar5 | uRam000000018326ce18) + (uVar5 & uRam000000018326ce18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326cd98 =
       func_0x00018ac01730((uVar5 | 0xccc33c3a6e8a942e) + (uVar5 & 0xccc33c3a6e8a942e));
  uVar5 = (uRam000000018326cd98 ^ 0x810f13b580000000) & 0xffffffff80000000;
  uRam000000018326cd38 = (uRam000000018326cd38 ^ uVar5) + 0x2334c24115564094 ^ 0xd53d67024d7da2e8;
  uRam000000018326ce58 = (uRam000000018326ce58 * 0x74af359f33c4d79d ^ uRam000000018326cd38) + uVar5;
  uRam000000018326cec0 = uRam000000018326ce58 ^ uRam000000018326cd38;
  uRam000000018326ce78 = 0x2334c24115564094;
  uVar5 = (uRam000000018326ce38 ^ _UNK_181967300) + uRam000000018326ce10 + 0x132cc0bd91771b16;
  uVar3 = (uRam000000018326ce10 ^ _UNK_181967308) + uRam000000018326ce38 + 0x132cc0bd15553833;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326ce38 ^ _UNK_181967300;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018326ce10 ^ _UNK_181967308;
  uRam000000018326cd68 =
       func_0x00018ac01730((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018326ce38 + 0x132cc0bd15553833) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018326ce10 + 0x132cc0bd91771b16));
  uRam000000018326cea8 = uRam000000018326cd68 << 0xe | uRam000000018326cd68 >> 0x32;
  uRam000000018326cef0 = uRam000000018326cef0 ^ uRam000000018326cea8 ^ 0xe9826af1903be466;
  uRam000000018326cdf0 =
       (uRam000000018326cdf0 * -0x545ee201bfa21907 ^ uRam000000018326cef0) + uRam000000018326cea8;
  uRam000000018326ce40 = uRam000000018326cdf0 ^ uRam000000018326cef0;
  uRam000000018326cd38 = 0;
  uVar5 = (uRam000000018326ceb0 ^ _UNK_181967310) + uRam000000018326cec0 + 0xabf7ca6b7bdcd4ba;
  uVar3 = (uRam000000018326cec0 ^ _UNK_181967318) + uRam000000018326ceb0 + 0x5408359400010860;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326ceb0 ^ _UNK_181967310;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018326cec0 ^ _UNK_181967318;
  uRam000000018326cd30 =
       func_0x00018ac01730((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018326ceb0 + 0x5408359400010860) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018326cec0 + 0xabf7ca6b7bdcd4ba));
  uRam000000018326cd50 =
       uRam000000018326cd50 ^ uRam000000018326cd30 & 0x7fffffffffffffff ^ 0xdf932eb871bb6266;
  uRam000000018326cdd8 =
       (uRam000000018326cdd8 * 0x660145bea1e2f31 ^ uRam000000018326cd50) +
       (uRam000000018326cd30 & 0x7fffffffffffffff);
  uRam000000018326ceb8 = uRam000000018326cdd8 ^ uRam000000018326cd50;
  uRam000000018326ce50 = 0;
  uVar5 = (uRam000000018326cd18 * -0x84225cda | uRam000000018326cd20) +
          (uRam000000018326cd18 * -0x84225cda & uRam000000018326cd20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326cd30 =
       func_0x00018ac01730((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar2 = ~(uint)uRam000000018326cd30 & 0x7fff;
  uVar4 = uVar2 >> 1 | uVar2;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar5 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          (ulonglong)uVar2;
  uRam000000018326cdf0 = uRam000000018326cd58 ^ uVar5 ^ 0x7fff;
  uRam000000018326cd78 = (uRam000000018326cd78 ^ uVar5) + 0x7fff ^ 0x4c4e1fa408a1463c;
  uRam000000018326ce28 = (uRam000000018326ce28 * -0x59b9da63169255e3 ^ uRam000000018326cd78) + uVar5
  ;
  uRam000000018326cd48 = uRam000000018326ce28 ^ uRam000000018326cd78;
  uRam000000018326cd00 = 0x7fff;
  uRam000000018326cd60 = func_0x00018ac01730(uRam000000018326cee8 ^ 0x1f00841cffddce);
  uRam000000018326ce28 =
       uRam000000018326ce28 ^ uRam000000018326cd60 ^ 0xba6e6df0701e6771 ^ 0x106222c6abba4bb3;
  uRam000000018326ced0 =
       (uRam000000018326ced0 * -0x387fcaf1209d1123 ^ uRam000000018326ce28) +
       (uRam000000018326cd60 ^ 0xba6e6df0701e6771);
  uRam000000018326cd70 = uRam000000018326ced0 ^ uRam000000018326ce28;
  uRam000000018326ceb8 = 0;
  uRam000000018326ce18 = func_0x00018ac01730(uRam000000018326cef0 + 0xffa3ff83c9ffddff ^ 0xe8);
  auVar8 = _UNK_1800170c0;
  uVar5 = uRam000000018326ce18 & 0x1fffffffffffff;
  uRam000000018326cd00 = uRam000000018326ce60 ^ uVar5 ^ 0x7fff;
  uRam000000018326cd30 = (uRam000000018326cd30 ^ uVar5) + 0x7fff ^ 0xded7de576f5e6776;
  uRam000000018326ce50 = (uRam000000018326ce50 * -0x2e458d0d061b246f ^ uRam000000018326cd30) + uVar5
  ;
  uRam000000018326cd10 = uRam000000018326ce50 ^ uRam000000018326cd30;
  uRam000000018326ce80 = uRam000000018326cec8 ^ 0x7fff;
  uRam000000018326cdd0 = 0x7fff;
  param_4 = param_4 & 0x7fff;
  auVar9._4_4_ = 0;
  auVar9._0_4_ = param_4 ^ 0x84222325;
  auVar9._8_4_ = param_3;
  auVar9._12_4_ = 0;
  auVar10 = pshufb(auVar9 ^ _UNK_181967320,_UNK_1800170c0);
  uVar3 = auVar10._8_8_ + auVar10._0_8_;
  uVar5 = uVar3 + uRam000000018326cec0;
  if (auVar10._4_4_ < 0) {
    uVar5 = uRam000000018326ce90 ^ uVar3;
  }
  uRam000000018326cdc8 = func_0x00018ac01730(SUB161(auVar9 ^ _UNK_181967320,5) ^ uVar5);
  uVar5 = uRam000000018326cdc8 << 0x30 | uRam000000018326cdc8 >> 0x10;
  uVar7 = ((ulonglong)param_4 + (ulonglong)param_3) - (ulonglong)((param_3 & param_4) * 2);
  uRam000000018326ce48 = (uRam000000018326ce48 ^ uVar5) + uVar7 ^ 0xff39fa6b4f58f97e;
  uRam000000018326cdb0 = (uRam000000018326cdb0 * 0x23778ff6c3c3a529 ^ uRam000000018326ce48) + uVar5;
  uRam000000018326ce40 = uRam000000018326cdb0 ^ uRam000000018326ce48;
  uVar3 = uVar7 & 0xffffffff;
  uVar5 = (uRam000000018326cec0 ^ _UNK_181967330) + uRam000000018326cd90 + 0x7fdf6102;
  uVar11 = (uRam000000018326cd90 ^ _UNK_181967338) + uRam000000018326cec0 + 0xe777131e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326cec0 ^ _UNK_181967330;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018326cd90 ^ _UNK_181967338;
  uRam000000018326cd20 = uVar3;
  uRam000000018326ced8 =
       func_0x00018ac01730((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018326cec0 + 0xe777131e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326cd90 + 0x7fdf6102));
  uVar5 = (ulonglong)(~(uint)uRam000000018326ced8 & 0xfbfd4227);
  uRam000000018326cea0 = (uRam000000018326cea0 ^ uVar5) + 0xffff533f ^ 0xb0c4df527073cb24;
  uRam000000018326cd78 = (uRam000000018326cd78 * -0x2791b564a40b5edf ^ uRam000000018326cea0) + uVar5
  ;
  uRam000000018326ce08 = uRam000000018326cd78 ^ uRam000000018326cea0;
  uRam000000018326cd38 = 0xffff533f;
  uVar5 = (~uRam000000018326cdc8 + 0x6b2bd890) *
          ((uRam000000018326cee0 ^ 0xea9faf47) +
          (ulonglong)((uint)uRam000000018326cee0 & 0xea9faf47) * 2);
  uVar5 = (uVar5 | uRam000000018326ceb0) + (uVar5 & uRam000000018326ceb0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326cdd8 =
       func_0x00018ac01730((uVar5 | 0x81b477c8) + (ulonglong)((uint)uVar5 & 0x81b477c8));
  uVar2 = ~(uint)uRam000000018326cdd8 & 0x6ebd8c62;
  uVar5 = (ulonglong)(uVar2 >> 0x1e) | (ulonglong)uVar2 << 0x22;
  uRam000000018326ceb0 = (uRam000000018326ceb0 ^ uVar5) + 0x59654ed ^ 0x7c46628df43b149f;
  uRam000000018326cee8 = (uRam000000018326cee8 * -0xf231d52a550ef8b ^ uRam000000018326ceb0) + uVar5;
  uRam000000018326cd30 = uRam000000018326cee8 ^ uRam000000018326ceb0;
  uRam000000018326cdc8 = uRam000000018326cd00 ^ 0x59654ed;
  uRam000000018326cd08 = 0x59654ed;
  uVar5 = (uRam000000018326cd00 ^ _UNK_181967340) + uRam000000018326ceb0 + 0x84226b16;
  uVar11 = (uRam000000018326ceb0 ^ _UNK_181967348) + uRam000000018326cd00 + 0x60b87090;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326cd00 ^ _UNK_181967340;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018326ceb0 ^ _UNK_181967348;
  uRam000000018326cd80 =
       func_0x00018ac01730((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018326cd00 + 0x60b87090) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326ceb0 + 0x84226b16));
  uVar5 = uRam000000018326cd80 - (uRam000000018326cd80 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018326cd80;
  uRam000000018326ce58 = uRam000000018326cec0 ^ uVar5 ^ 0x60b8b8c3;
  uRam000000018326cd48 = (uRam000000018326cd48 ^ uVar5) + 0x60b8b8c3 ^ 0xe9183173fd03264b;
  uRam000000018326ce10 = (uRam000000018326ce10 * 0x71d02c37b5e1e9b5 ^ uRam000000018326cd48) + uVar5;
  uRam000000018326cd58 = uRam000000018326ce10 ^ uRam000000018326cd48;
  uRam000000018326cd68 = 0x60b8b8c3;
  uVar5 = (uRam000000018326ced8 ^ _UNK_181967350) + uRam000000018326ce78 + 0xe49a9be6;
  uVar11 = (uRam000000018326ce78 ^ _UNK_181967358) + uRam000000018326ced8 + 0x9f478f70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326ced8 ^ _UNK_181967350;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018326ce78 ^ _UNK_181967358;
  uRam000000018326cec8 =
       func_0x00018ac01730((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018326ced8 + 0x9f478f70) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326ce78 + 0xe49a9be6));
  uVar5 = uRam000000018326cec8 ^ 0xffffbff3;
  uRam000000018326cea8 = uRam000000018326cdf0 ^ uVar5 ^ 0x100004833;
  uRam000000018326cd10 = (uRam000000018326cd10 ^ uVar5) + 0x100004833 ^ 0x42a48b18493e93a2;
  uRam000000018326cdc0 = (uRam000000018326cdc0 * -0x7b148a010dcfdf93 ^ uRam000000018326cd10) + uVar5
  ;
  uRam000000018326cea0 = uRam000000018326cdc0 ^ uRam000000018326cd10;
  uRam000000018326ce10 = 0x4833;
  uRam000000018326cee0 = func_0x00018ac01730(uRam000000018326ce28 ^ 0xfffbffa91a004427);
  uVar5 = (uRam000000018326cee0 ^ 0x3ec02ae10e68) * 0x5024d09fb19e9a41;
  uRam000000018326cd68 = uRam000000018326cd88 ^ uVar5 ^ 0xde7fb82b;
  uRam000000018326cdf0 = (uRam000000018326cdf0 ^ uVar5) + 0xde7fb82b ^ 0xddd3e9644c9bcd57;
  uRam000000018326ce28 = (uRam000000018326ce28 * 0xc7bd591f37b5b ^ uRam000000018326cdf0) + uVar5;
  uRam000000018326cd28 = uRam000000018326ce28 ^ uRam000000018326cdf0;
  uRam000000018326cec8 = 0xde7fb82b;
  uVar5 = (uRam000000018326ce00 ^ _UNK_181967360) + uRam000000018326cd88 + 0x5a5d9b0e;
  uVar11 = (uRam000000018326cd88 ^ _UNK_181967368) + uRam000000018326ce00 + 0x21809008;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326ce00 ^ _UNK_181967360;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018326cd88 ^ _UNK_181967368;
  uRam000000018326cd50 =
       func_0x00018ac01730((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018326ce00 + 0x21809008) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326cd88 + 0x5a5d9b0e));
  uVar5 = uRam000000018326cd50 ^ 0xde7fb82b;
  uRam000000018326ceb0 = uRam000000018326cef8 ^ uVar5 ^ 0x100004833;
  uRam000000018326ce60 = (uRam000000018326ce60 ^ uVar5) + 0x100004833 ^ 0x5b4953429f8f71c0;
  uRam000000018326cd00 = (uRam000000018326cd00 * -0x681fc2a3a2a97063 ^ uRam000000018326ce60) + uVar5
  ;
  uRam000000018326cea8 = uRam000000018326cd00 ^ uRam000000018326ce60;
  uRam000000018326cd18 = 0x4833;
  uVar5 = (~uRam000000018326cda8 + 0xe52f3c71) *
          ((uRam000000018326cda8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018326cda8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018326cd10) + (uVar5 & uRam000000018326cd10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326ced8 =
       func_0x00018ac01730((uVar5 | 0x610d1f55) + (ulonglong)((uint)uVar5 & 0x610d1f55));
  uRam000000018326cd10 =
       (uRam000000018326cd10 ^ uRam000000018326ced8 & 0xfffffffffffffffe) - 0xe52f3c70 ^
       0x20e25a3e2aa5beb9;
  uRam000000018326cdd0 =
       (uRam000000018326cdd0 * 0x2a900d0a068e093d ^ uRam000000018326cd10) +
       (uRam000000018326ced8 & 0xfffffffffffffffe);
  uRam000000018326cd10 = uRam000000018326cdd0 ^ uRam000000018326cd10;
  uRam000000018326ce28 = 0x1ad0c390;
  uVar5 = (~uRam000000018326cd18 + 0x1ad0c391) *
          ((uRam000000018326cef0 ^ 0x610da786) +
          (ulonglong)((uint)uRam000000018326cef0 & 0x610da786) * 2);
  uVar5 = (uVar5 | uRam000000018326cdb0) + (uVar5 & uRam000000018326cdb0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326cef0 =
       func_0x00018ac01730((uVar5 | 0x7bdd6416) + (ulonglong)((uint)uVar5 & 0x7bdd6416));
  uVar5 = uRam000000018326cef0 & 0x7fffffffffffffff;
  uRam000000018326ce80 = uRam000000018326cd28 ^ uVar5 ^ 0x100004833;
  uRam000000018326ce28 = (uRam000000018326ce28 ^ uVar5) + 0x100004833 ^ 0x90fe89543dacd4c4;
  uRam000000018326cd50 = (uRam000000018326cd50 * 0x721e6718849f24a1 ^ uRam000000018326ce28) + uVar5;
  uRam000000018326ce00 = uRam000000018326cd50 ^ uRam000000018326ce28;
  uRam000000018326cdb0 = 0x4833;
  uVar5 = (~uRam000000018326ce50 + 0x59654ee) *
          ((uRam000000018326cdd8 ^ 0x7bdd701a) +
          (ulonglong)((uint)uRam000000018326cdd8 & 0x7bdd701a) * 2);
  uVar5 = (uVar5 | uRam000000018326cd60) + (uVar5 & uRam000000018326cd60);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326ce78 =
       func_0x00018ac01730((uVar5 | 0x7e4b24f7) + (ulonglong)((uint)uVar5 & 0x7e4b24f7));
  uRam000000018326ce80 =
       (uRam000000018326ce80 ^ uRam000000018326ce78 ^ 0x4c0) + 0xfa6907d2 ^ 0xadb9455b0e97b0a7;
  uRam000000018326ce98 =
       (uRam000000018326ce98 * 0x68725bdcc22dfd57 ^ uRam000000018326ce80) +
       (uRam000000018326ce78 ^ 0x4c0);
  uRam000000018326cea0 = uRam000000018326ce98 ^ uRam000000018326ce80;
  uRam000000018326ce48 = 0xfa6907d2;
  uVar5 = (uRam000000018326ce90 ^ _UNK_181967370) + uRam000000018326ce78 + 0x7e4b24f7;
  uVar11 = (uRam000000018326ce78 ^ _UNK_181967378) + uRam000000018326ce90 + 0xb2ca05a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326ce90 ^ _UNK_181967370;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018326ce78 ^ _UNK_181967378;
  uRam000000018326cd10 =
       func_0x00018ac01730((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018326ce90 + 0xb2ca05a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326ce78 + 0x7e4b24f7));
  uVar5 = uRam000000018326cd10 ^ 0xaee2a3d0be7ffd4;
  uRam000000018326ce28 = uRam000000018326cec0 ^ uVar5 ^ 0x10595a82c;
  uRam000000018326ced8 = (uRam000000018326ced8 ^ uVar5) + 0x10595a82c ^ 0x8ce25a6a7d4d73e9;
  uRam000000018326cd98 = (uRam000000018326cd98 * 0x2c32b1abb36ada13 ^ uRam000000018326ced8) + uVar5;
  uRam000000018326cd90 = 0x595a82c;
  uRam000000018326ce08 = func_0x00018ac01730(uRam000000018326cec0 + 0x22ff7c24ffddff ^ 0xce);
  uRam000000018326cdc0 = uRam000000018326ce08 ^ 0x595a82c;
  uVar5 = uRam000000018326cdc0 - (uRam000000018326cdc0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam000000018326cdc0 =
       ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uRam000000018326cdc0
  ;
  uRam000000018326cd18 = uRam000000018326cd18 ^ uRam000000018326cdc0 ^ 0x51950f65e2c55ed1;
  uRam000000018326cef8 =
       (uRam000000018326cef8 * 0x18ea8ad8328e19cb ^ uRam000000018326cd18) + uRam000000018326cdc0;
  uRam000000018326cda0 = uRam000000018326cef8 ^ uRam000000018326cd18;
  uRam000000018326cef0 = 0;
  uVar5 = ((uRam000000018326ce10 ^ 0x84226b16) +
          (ulonglong)((uint)uRam000000018326ce10 & 0x84226b16) * 2) * -uRam000000018326cd38;
  uVar5 = (uVar5 | uRam000000018326ced0) + (uVar5 & uRam000000018326ced0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018326cd08 =
       func_0x00018ac01730((uVar5 | 0x84226b16) + (ulonglong)((uint)uVar5 & 0x84226b16));
  uVar5 = uRam000000018326cd08 & 0xffffffffffff0000;
  uRam000000018326ce48 = uRam000000018326cd30 ^ uVar5 ^ 0x4833;
  uRam000000018326ce00 = (uRam000000018326ce00 ^ uVar5) + 0x4833 ^ 0x2f627e6ac483d3c7;
  uRam000000018326cee8 = (uRam000000018326cee8 * 0x2a9d59686b9cd583 ^ uRam000000018326ce00) + uVar5;
  uRam000000018326cd50 = uRam000000018326cee8 ^ uRam000000018326ce00;
  uRam000000018326cea8 = 0x4833;
  uRam000000018326cee0 = func_0x00018ac01730(uRam000000018326ce28 + 0x8aff8464ffe1ff ^ 0x6f);
  uVar5 = (ulonglong)(~(uint)uRam000000018326cee0 & 0xffff533f | 0x3fff533f);
  uRam000000018326cdb8 = (uRam000000018326cdb8 ^ uVar5) + 0xacc0 ^ 0x42de4e236362b855;
  uRam000000018326cd90 = (uRam000000018326cd90 * -0x48fec98dfeb7b085 ^ uRam000000018326cdb8) + uVar5
  ;
  uRam000000018326cec8 = uRam000000018326cd90 ^ uRam000000018326cdb8;
  uRam000000018326cd80 = 0xacc0;
  uRam000000018326cd90 = func_0x00018ac01730(uRam000000018326cee8 + 0xff5c0056d600caff ^ 0xbf);
  uVar5 = (ulonglong)(~(uint)uRam000000018326cd90 & 0xffff533f);
  uRam000000018326cdb8 = uRam000000018326cdb8 ^ uVar5 ^ 0xf5a64cf0281f0bbf;
  uRam000000018326ce68 = (uRam000000018326ce68 * -0x1fae04559a1357f9 ^ uRam000000018326cdb8) + uVar5
  ;
  uRam000000018326cdf0 = uRam000000018326ce68 ^ uRam000000018326cdb8;
  uRam000000018326ce08 = 0;
  uRam000000018326cd50 = func_0x00018ac01730(uRam000000018326cd98 ^ 0xffdd007be4ffddda);
  uRam000000018326ce10 = uRam000000018326ce10 ^ uRam000000018326cd50 ^ 0xe9e03a4646d23268;
  uRam000000018326ce00 =
       (uRam000000018326ce00 * 0x34de97184d9ab887 ^ uRam000000018326ce10) + uRam000000018326cd50;
  uRam000000018326cd10 = uRam000000018326ce00 ^ uRam000000018326ce10;
  auVar10._8_8_ = _UNK_181967388;
  auVar10._0_8_ = uVar3 ^ 0x84222325;
  uRam000000018326cda0 = 0;
  auVar8 = pshufb(auVar10 ^ _UNK_181967390,auVar8);
  uVar11 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar11 + uRam000000018326cdf0;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam000000018326cde8 ^ uVar11;
  }
  uRam000000018326cd48 = func_0x00018ac01730(SUB161(auVar10 ^ _UNK_181967390,5) ^ uVar5);
  uVar5 = uRam000000018326cd48 * 0x48e15608569c38d3 << 0x20 |
          uRam000000018326cd48 * 0x48e15608569c38d3 >> 0x20;
  lVar6 = uVar3 - ((uint)uVar7 & 0x4833) * 2;
  uRam000000018326cdb0 = (uRam000000018326cdb0 ^ uVar5) + lVar6 + 0x4833 ^ 0x6074842c0517c33c;
  uRam000000018326ce50 = (uRam000000018326ce50 * 0x3fce803e410daeab ^ uRam000000018326cdb0) + uVar5;
  uRam000000018326cd38 = uRam000000018326ce50 ^ uRam000000018326cdb0;
  uRam000000018326ce48 = lVar6 + 0x4833U & 0xffffffff;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x148f8,0x336);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018abf8a2a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181965470 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fM; aVu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ac017c0, runtime 6ffff28117c0) =====

void FUN_18ac017c0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ac0180b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1819674f0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fM; aVv (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ac027d0, runtime 6ffff28127d0) =====

void FUN_18ac027d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac02859 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181967ab0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



