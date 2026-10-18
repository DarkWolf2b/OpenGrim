// ===== Lsixtwo/fh; _b58c3a1e6fcffbd8ed7b7af2a9e6b5d0 ()V (handler @ image 18c9d22a0, runtime 6ffff45e22a0) =====

void FUN_18c9d22a0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c9d2388 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fccf88 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fh; aJf (Lsixtwo/gH$th;)V (handler @ image 18c990c90, runtime 6ffff45a0c90) =====

void FUN_18c990c90(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x11b99,0x2dd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c990d51 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fc1820 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fh; aJg (Lsixtwo/hw$tv;)V (handler @ image 18c994c90, runtime 6ffff45a4c90) =====

void FUN_18c994c90(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x11b99,0x2dd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c994d54 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fc29a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fh; aJh (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18c99a000, runtime 6ffff45aa000) =====

undefined8 FUN_18c99a000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fh; aJi ([B)Ljava/lang/String; (handler @ image 18c99a090, runtime 6ffff45aa090) =====

void FUN_18c99a090(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018c99a130 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fc4510 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fh; aJj (IJ)I (handler @ image 18c9c3220, runtime 6ffff45d3220) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c9c3220(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  
  uRam0000000183327e58 = func_0x00018c9ce4f0(uRam0000000183327910 + 0xbfbde6fa579f99dc ^ 0x36);
  uVar3 = (uRam0000000183327e58 ^ 0xd058d03b670fb1de) -
          ((uRam0000000183327e58 ^ 0xd058d03b670fb1de) >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam0000000183327e58 ^ 0x6400fc9954d8197c ^
          (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2;
  uRam0000000183327978 = (uRam0000000183327978 ^ uVar3) + 0xbd7fade2b3dfe9bf ^ 0x29ae4c8c03b339ee;
  uRam0000000183327b20 = (uRam0000000183327b20 * -0x5d06e11b8a14f269 ^ uRam0000000183327978) + uVar3
  ;
  uRam0000000183327840 = uRam0000000183327b20 ^ uRam0000000183327978;
  uRam00000001833277d8 = 0xbd7fade2b3dfe9bf;
  uVar3 = (~uRam00000001833277e0 + 0x6bdac0676e99e2f6) *
          ((uRam0000000183327770 ^ 0x6d3a62f8d9a5650a) +
          (uRam0000000183327770 & 0x6d3a62f8d9a5650a) * 2);
  uVar3 = (uVar3 | uRam0000000183327778) + (uVar3 & uRam0000000183327778);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183327d18 =
       func_0x00018c9ce4f0((uVar3 | 0x6e0a29fb73c87ff) + (uVar3 & 0x6e0a29fb73c87ff));
  uRam0000000183327a10 =
       (uRam0000000183327a10 ^ uRam0000000183327d18 & 0x6d3a62f85d87462f) + 0x6e0a29f331ea4da ^
       0xcc88fca31a1f9a38;
  uRam0000000183327ed0 =
       (uRam0000000183327ed0 * 0x2fbf647ff060fc59 ^ uRam0000000183327a10) +
       (uRam0000000183327d18 & 0x6d3a62f85d87462f);
  uRam0000000183327c60 = uRam0000000183327ed0 ^ uRam0000000183327a10;
  uRam0000000183327808 = 0x6e0a29f331ea4da;
  uVar3 = (~uRam0000000183327778 + 0xc1629f399f7e6845) *
          ((uRam0000000183327c78 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183327c78 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183327d28) + (uVar3 & uRam0000000183327d28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183327858 =
       func_0x00018c9ce4f0((uVar3 | 0xc1629f391b5c4b61) + (uVar3 & 0xc1629f391b5c4b61));
  uVar3 = (uRam0000000183327858 ^ 0xc1629f399f7e6844) << 0x20 |
          (uRam0000000183327858 ^ 0xc1629f399f7e6844) >> 0x20;
  uRam0000000183327b00 = (uRam0000000183327b00 ^ uVar3) + 0x3e9d60c6608197bc ^ 0xce5c31ba91e91399;
  uRam0000000183327ac8 = (uRam0000000183327ac8 * -0x12b051cad42000d3 ^ uRam0000000183327b00) + uVar3
  ;
  uRam0000000183327890 = uRam0000000183327ac8 ^ uRam0000000183327b00;
  uRam0000000183327b78 = 0x3e9d60c6608197bc;
  uVar3 = (~uRam0000000183327ba0 + 0x3e9d60c6608197bd) *
          ((uRam0000000183327e48 ^ 0xc1629f391b5ccb66) +
          (uRam0000000183327e48 & 0x41629f391b5ccb66) * 2);
  uVar3 = (uVar3 | uRam00000001833277d0) + (uVar3 & uRam00000001833277d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183327df8 =
       func_0x00018c9ce4f0((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar3 = (uRam0000000183327df8 ^ 0x3e9d60c6608197bc) << 0x2e |
          (uRam0000000183327df8 ^ 0x3e9d60c6608197bc) >> 0x12;
  uRam0000000183327c20 = uRam0000000183327d30 ^ uVar3 ^ 0x7fff;
  uRam0000000183327890 = (uRam0000000183327890 ^ uVar3) + 0x7fff ^ 0x7e18986a65de8f3e;
  uRam0000000183327d00 = (uRam0000000183327d00 * 0x51b9f78df0af2389 ^ uRam0000000183327890) + uVar3;
  uRam0000000183327e80 = uRam0000000183327d00 ^ uRam0000000183327890;
  uRam0000000183327ea0 = 0x7fff;
  uRam0000000183327df0 = func_0x00018c9ce4f0(uRam0000000183327c48 ^ 0xd663f894d1fd795b);
  uVar3 = uRam0000000183327df0 << 0x13 | uRam0000000183327df0 >> 0x2d;
  uRam0000000183327908 = (uRam0000000183327908 ^ uVar3) + 0x42f4f201e724b009 ^ 0xc2d4a11e76a4a263;
  uRam0000000183327bd8 =
       (lRam0000000183327be8 * 0x16060b8f1972035 ^ uRam0000000183327908) + uVar3 ^
       uRam0000000183327908;
  lRam0000000183327be8 = 0x42f4f201e724b009;
  uRam0000000183327b20 = func_0x00018c9ce4f0(uRam0000000183327808 ^ 0xb5f3079c2503a7f4);
  uRam00000001833277b8 = uRam0000000183327760 ^ uRam0000000183327b20 ^ 0xbd0b0dfe18dbcff6;
  uRam0000000183327cb8 =
       (uRam0000000183327cb8 ^ uRam0000000183327b20) + 0xbd0b0dfe18dbcff6 ^ 0x625883a9024a169c;
  uRam0000000183327d18 =
       (uRam0000000183327d18 * 0x77cb12738b19b651 ^ uRam0000000183327cb8) + uRam0000000183327b20;
  uRam0000000183327918 = uRam0000000183327d18 ^ uRam0000000183327cb8;
  uRam0000000183327710 = 0xbd0b0dfe18dbcff6;
  uVar3 = (uRam0000000183327de0 ^ _UNK_181fcb780) + uRam0000000183327aa8 + 0xbd0b0dfe9cf9ecd3;
  uVar6 = (uRam0000000183327aa8 ^ _UNK_181fcb788) + uRam0000000183327de0 + 0x42f4f201e724b009;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327de0 ^ _UNK_181fcb780;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183327aa8 ^ _UNK_181fcb788;
  uRam0000000183327c50 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183327de0 + 0x42f4f201e724b009) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183327aa8 + 0xbd0b0dfe9cf9ecd3));
  uVar3 = ~uRam0000000183327c50 << 0x17 | ~uRam0000000183327c50 >> 0x29;
  uRam0000000183327aa8 = uRam0000000183327910 ^ uVar3 ^ 0x7fff;
  uRam0000000183327cd0 = (uRam0000000183327cd0 ^ uVar3) + 0x7fff ^ 0xa4b509cddcc76c4c;
  uRam00000001833278f0 = (uRam00000001833278f0 * -0x7e953a67c9f4a135 ^ uRam0000000183327cd0) + uVar3
  ;
  uRam0000000183327740 = uRam00000001833278f0 ^ uRam0000000183327cd0;
  uRam0000000183327eb8 = 0x7fff;
  uRam0000000183327c80 = func_0x00018c9ce4f0(lRam0000000183327b68 + 0xcfe3d7302bbdeb0cU ^ 0xc9);
  uVar3 = ((ulonglong)((uint)uRam0000000183327c80 ^ 0x15c91ff0) & 0x3fffffff) << 3 |
          uRam0000000183327c80 >> 0x3d;
  uRam0000000183327ec8 = (uRam0000000183327ec8 ^ uVar3) + 0xe2a43a0f2a36e010 ^ 0xeda1050a98b6598b;
  uRam0000000183327708 = (uRam0000000183327708 * 0x33ebd8a3badc6ca5 ^ uRam0000000183327ec8) + uVar3;
  uRam0000000183327720 = uRam0000000183327708 ^ uRam0000000183327ec8;
  uRam0000000183327d38 = 0xe2a43a0f2a36e010;
  uRam00000001833279c8 = func_0x00018c9ce4f0(uRam0000000183327c38 ^ 0xd03d5b2f25c4194d);
  uVar3 = uRam00000001833279c8 ^ 0xc59ca4f3ba2ee010;
  uVar3 = (uVar3 << 0x2b | uVar3 >> 0x15) << 0xe | (uVar3 & 0x1fffff) >> 7;
  uRam0000000183327ab8 = uRam0000000183327bd8 ^ uVar3 ^ 0x1d5bc5f0d5c99fef;
  uRam0000000183327768 = (uRam0000000183327768 ^ uVar3) + 0x1d5bc5f0d5c99fef ^ 0x49ff97c22f8fdd59;
  uRam0000000183327ca8 = (uRam0000000183327ca8 * -0x516563026c7859d3 ^ uRam0000000183327768) + uVar3
  ;
  uRam0000000183327b28 = uRam0000000183327ca8 ^ uRam0000000183327768;
  uRam0000000183327d80 = 0x1d5bc5f0d5c99fef;
  uRam0000000183327eb8 = func_0x00018c9ce4f0(uRam0000000183327840 + 0x635b652aca83448e ^ 0xc1);
  uRam0000000183327e60 = uRam0000000183327cc0 ^ uRam0000000183327eb8 ^ 0x7fff;
  uRam0000000183327978 = (uRam0000000183327978 ^ uRam0000000183327eb8) + 0x7fff ^ 0x6ccbea411e365e30
  ;
  uRam0000000183327950 =
       (uRam0000000183327950 * -0x69eb758346dd3243 ^ uRam0000000183327978) + uRam0000000183327eb8;
  uRam0000000183327e80 = uRam0000000183327950 ^ uRam0000000183327978;
  uRam0000000183327af8 = 0x7fff;
  uVar3 = (~uRam0000000183327810 + 0x6e0a29f331ea4db) *
          ((uRam0000000183327e48 ^ 0xbd7fade237fdca9a) +
          (uRam0000000183327e48 & 0x3d7fade237fdca9a) * 2);
  uVar3 = (uVar3 | uRam0000000183327b28) + (uVar3 & uRam0000000183327b28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183327b60 =
       func_0x00018c9ce4f0((uVar3 | 0xbb9f0f7d04e36e40) + (uVar3 & 0xbb9f0f7d04e36e40));
  uRam0000000183327a80 = uRam00000001833278b8 ^ uRam0000000183327b60 ^ 0xc4605081e6fe8e99;
  uRam0000000183327a30 =
       (uRam0000000183327a30 ^ uRam0000000183327b60) + 0xc4605081e6fe8e99 ^ 0x7940764753c57de1;
  uRam0000000183327908 =
       (uRam0000000183327908 * -0x7b9738109422c453 ^ uRam0000000183327a30) + uRam0000000183327b60;
  uRam0000000183327b80 = uRam0000000183327908 ^ uRam0000000183327a30;
  uRam0000000183327c90 = 0xc4605081e6fe8e99;
  uVar3 = (uRam0000000183327d00 ^ _UNK_181fcb790) + uRam0000000183327858 + 0xbd7fade237fdca9a;
  uVar6 = (uRam0000000183327858 ^ _UNK_181fcb798) + uRam0000000183327d00 + 0x6e0a29f331ea4da;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327d00 ^ _UNK_181fcb790;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183327858 ^ _UNK_181fcb798;
  uRam0000000183327c40 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183327d00 + 0x6e0a29f331ea4da) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183327858 + 0xbd7fade237fdca9a));
  uVar3 = uRam0000000183327c40 - (uRam0000000183327c40 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam0000000183327c40;
  uRam0000000183327970 = (uRam0000000183327970 ^ uVar3) + 0x460a082331ea09a ^ 0xd8a42347f7712462;
  uRam0000000183327828 = (uRam0000000183327828 * -0x3026a526cb355219 ^ uRam0000000183327970) + uVar3
  ;
  uRam0000000183327d40 = uRam0000000183327828 ^ uRam0000000183327970;
  uRam0000000183327ab0 = 0x460a082331ea09a;
  uVar3 = (uRam0000000183327bc0 ^ _UNK_181fcb7a0) + uRam0000000183327c08 + 0xbb9f0f7d04e36e40;
  uVar6 = (uRam0000000183327c08 ^ _UNK_181fcb7a8) + uRam0000000183327bc0 + 0x8c14104663d4134;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327bc0 ^ _UNK_181fcb7a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183327c08 ^ _UNK_181fcb7a8;
  uRam0000000183327950 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183327bc0 + 0x8c14104663d4134) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183327c08 + 0xbb9f0f7d04e36e40));
  uVar3 = uRam0000000183327950 * -0x4dbd47706a2027b9;
  uRam0000000183327e58 = uRam0000000183327750 ^ uVar3 ^ 0xc4605081e6fe8e99;
  uRam0000000183327c50 = (uRam0000000183327c50 ^ uVar3) + 0xc4605081e6fe8e99 ^ 0xdcfad59b893c9a6;
  uRam0000000183327760 = (uRam0000000183327760 * 0x5703c82df6072a1b ^ uRam0000000183327c50) + uVar3;
  uRam0000000183327c40 = uRam0000000183327760 ^ uRam0000000183327c50;
  uRam00000001833279c8 = -0x3b9faf7e19017167;
  uRam0000000183327eb8 = func_0x00018c9ce4f0(uRam0000000183327c38 + 0x1d00841d0021ff ^ 0xc0);
  uRam0000000183327bd8 = (uRam0000000183327eb8 ^ 0xf0d9bb8c330a1771) * -0x52552ae65d14a189;
  uVar3 = uRam0000000183327bd8 - (uRam0000000183327bd8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uRam0000000183327bd8 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183327bd8;
  uRam0000000183327888 = uRam0000000183327888 ^ uRam0000000183327bd8 ^ 0x77828ecc561ad45b;
  uRam00000001833279d8 =
       (uRam00000001833279d8 * -0x74fbe145c36ada49 ^ uRam0000000183327888) + uRam0000000183327bd8;
  uRam0000000183327ed0 = uRam00000001833279d8 ^ uRam0000000183327888;
  uRam0000000183327a88 = 0;
  uRam0000000183327de0 = func_0x00018c9ce4f0(uRam00000001833279c8 + 0x3da380f729d55360 ^ 0x6a);
  uRam0000000183327d90 =
       uRam0000000183327d90 ^ uRam0000000183327de0 & 0xbd7fade2b3dfe9bf ^ 0x6be14c5186c9a3e4;
  uRam0000000183327bd0 =
       (uRam0000000183327bd0 * -0x158e8dcdda0b666b ^ uRam0000000183327d90) +
       (uRam0000000183327de0 & 0xbd7fade2b3dfe9bf);
  uRam0000000183327da0 = uRam0000000183327bd0 ^ uRam0000000183327d90;
  uRam0000000183327880 = 0;
  uRam0000000183327928 = func_0x00018c9ce4f0(uRam0000000183327820 + 0xffc4008459ffddff ^ 0x85);
  uRam0000000183327a08 = uRam0000000183327d28 ^ uRam0000000183327928 ^ 0x7fff;
  uRam0000000183327a50 = (uRam0000000183327a50 ^ uRam0000000183327928) + 0x7fff ^ 0x5bfdb656c3208fee
  ;
  uRam0000000183327c50 =
       (uRam0000000183327c50 * -0xb7e96c79132b143 ^ uRam0000000183327a50) + uRam0000000183327928;
  uRam0000000183327bf0 = uRam0000000183327c50 ^ uRam0000000183327a50;
  uRam00000001833277e0 = 0x7fff;
  uRam0000000183327708 = func_0x00018c9ce4f0(lRam00000001833277c8 + 0x210083daffddffU ^ 0x9f);
  uVar3 = ~(uRam0000000183327708 * -0x74e1053239f807) & 0xb4582ca233d7a8a2;
  uRam0000000183327e00 = uRam0000000183327e00 ^ uVar3 ^ 0x1fb19c096c3d39e5;
  uRam0000000183327e78 = (uRam0000000183327e78 * -0x6816e39e26db2075 ^ uRam0000000183327e00) + uVar3
  ;
  uRam0000000183327c20 = uRam0000000183327e78 ^ uRam0000000183327e00;
  uRam00000001833277d0 = 0;
  uVar3 = ((uRam00000001833278b8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833278b8 & 0x84225cda) * 2) * -uRam0000000183327bb0;
  uVar3 = (uVar3 | uRam0000000183327d60) + (uVar3 & uRam0000000183327d60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183327ad0 =
       func_0x00018c9ce4f0((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uRam0000000183327ea0 = uRam0000000183327cb8;
  uRam0000000183327c70 = (uRam0000000183327c70 ^ 0x7fff) + 0x7fff ^ 0x7b58f96904395561;
  uRam0000000183327de8 = (uRam0000000183327de8 * 0x56f4db6d0cb94f4f ^ uRam0000000183327c70) + 0x7fff
  ;
  uRam00000001833277f0 = uRam0000000183327de8 ^ uRam0000000183327c70;
  auVar4._8_8_ = _UNK_18019c088;
  auVar4._0_8_ = param_4 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _UNK_181fcb7b0,_UNK_1800170c0);
  uRam0000000183327b50 = 0x7fff;
  uVar6 = auVar5._8_8_ + auVar5._0_8_;
  uVar3 = uVar6 + uRam0000000183327d08;
  if (auVar5._4_4_ < 0) {
    uVar3 = uRam0000000183327dd8 ^ uVar6;
  }
  uRam0000000183327d80 = func_0x00018c9ce4f0(SUB161(auVar4 ^ _UNK_181fcb7b0,5) ^ uVar3);
  uVar6 = param_4 * 0x7fff ^ uRam0000000183327d80;
  uVar3 = uVar6 >> 1 | uVar6;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar6) & 0x3ffffffffff;
  uRam0000000183327908 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam0000000183327e98 = (uRam0000000183327e98 ^ uVar3) + uRam0000000183327908 ^ 0x20b618bfaa568709;
  uRam00000001833279d8 = (uRam00000001833279d8 * -0x3ee9256a3e7b6595 ^ uRam0000000183327e98) + uVar3
  ;
  uRam0000000183327950 = uRam00000001833279d8 ^ uRam0000000183327e98;
  uVar3 = (~uRam0000000183327df0 + 0x66c0fc32) *
          ((uRam0000000183327e38 ^ 0x1149549a) +
          (ulonglong)((uint)uRam0000000183327e38 & 0x1149549a) * 2);
  uVar3 = (uVar3 | uRam00000001833278f0) + (uVar3 & uRam00000001833278f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183327dd0 =
       func_0x00018c9ce4f0((uVar3 | 0x7789a8ab) + (ulonglong)((uint)uVar3 & 0x7789a8ab));
  uRam0000000183327a48 =
       (uRam0000000183327a48 ^ uRam0000000183327dd0) + 0xf7ebffbf ^ 0x340806bad1e73ea2;
  uRam00000001833279e8 =
       (uRam00000001833279e8 * -0x75570fefabfb830d ^ uRam0000000183327a48) + uRam0000000183327dd0;
  uRam0000000183327828 = uRam00000001833279e8 ^ uRam0000000183327a48;
  uRam0000000183327c60 = 0xf7ebffbf;
  uVar3 = (uRam0000000183327b88 ^ _UNK_181fcb7c0) + uRam0000000183327820 + 0x84222325;
  uVar6 = (uRam0000000183327820 ^ _UNK_181fcb7c8) + uRam0000000183327b88 + 0x9337ed1b;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327b88 ^ _UNK_181fcb7c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183327820 ^ _UNK_181fcb7c8;
  uRam0000000183327e20 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183327b88 + 0x9337ed1b) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183327820 + 0x84222325));
  uRam00000001833279a8 =
       (uRam00000001833279a8 ^ uRam0000000183327e20 ^ 0x9337ed1b) - 0x9337ed1b ^ 0x9f30db67849408f4;
  uRam0000000183327988 =
       (uRam0000000183327988 * 0x743bfa619183943b ^ uRam00000001833279a8) +
       (uRam0000000183327e20 ^ 0x9337ed1b);
  uRam0000000183327920 = uRam0000000183327988 ^ uRam00000001833279a8;
  uRam00000001833277c0 = 0x6cc812e5;
  uVar3 = (~uRam0000000183327868 + 0x9337ed1c) *
          ((uRam0000000183327a08 ^ 0x842267d9) +
          (ulonglong)((uint)uRam0000000183327a08 & 0x842267d9) * 2);
  uVar3 = (uVar3 | uRam0000000183327968) + (uVar3 & uRam0000000183327968);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183327e30 =
       func_0x00018c9ce4f0((uVar3 | 0x17158ac2) + (ulonglong)((uint)uVar3 & 0x17158ac2));
  uVar3 = (uRam0000000183327e30 ^ 0x93340000) & 0x7fffffffc0000;
  uRam0000000183327bc8 = uRam0000000183327888 ^ uVar3 ^ 0x93383217;
  uRam0000000183327860 = (uRam0000000183327860 ^ uVar3) + 0x93383217 ^ 0x3e3478499ffedc38;
  uRam0000000183327dd0 =
       (uRam0000000183327dd0 * -0x203e612be362708b ^ uRam0000000183327860) + uVar3 ^
       uRam0000000183327860;
  uRam0000000183327778 = 0x93383217;
  uRam0000000183327b28 = func_0x00018c9ce4f0(lRam0000000183327ae8 + 0x2ff8b51002dffU ^ 0xdf);
  uVar3 = uRam0000000183327b28 & 0xffffffffffffffe0;
  uRam0000000183327db8 = uRam0000000183327b50 ^ uVar3 ^ 0x1000044fc;
  uRam0000000183327c30 = (uRam0000000183327c30 ^ uVar3) + 0x1000044fc ^ 0x83fef82d67ae257a;
  uRam0000000183327a28 = (uRam0000000183327a28 * -0x4522626989ae4377 ^ uRam0000000183327c30) + uVar3
  ;
  uRam00000001833279a0 = uRam0000000183327a28 ^ uRam0000000183327c30;
  uRam0000000183327e10 = 0x44fc;
  uRam0000000183327b50 = func_0x00018c9ce4f0(lRam0000000183327780 + 0x24006cac0030ffU ^ 0x67);
  uRam0000000183327830 =
       (uRam0000000183327830 ^ uRam0000000183327b50 & 0x7ffffffffffffff) - 0x10131f99 ^
       0xe5750caebd79decd;
  uRam0000000183327a18 =
       (uRam0000000183327a18 * 0x5087eeecf4c39571 ^ uRam0000000183327830) +
       (uRam0000000183327b50 & 0x7ffffffffffffff);
  uRam0000000183327a20 = uRam0000000183327a18 ^ uRam0000000183327830;
  uRam00000001833279b0 = 0xefece067;
  uVar3 = (uRam0000000183327ef8 ^ _UNK_181fcb7d0) + uRam0000000183327ed8 + 0x842267d9;
  uVar6 = (uRam0000000183327ed8 ^ _UNK_181fcb7d8) + uRam0000000183327ef8 + 0x10131f99;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327ef8 ^ _UNK_181fcb7d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183327ed8 ^ _UNK_181fcb7d8;
  uRam00000001833278d0 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183327ef8 + 0x10131f99) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183327ed8 + 0x842267d9));
  uVar3 = uRam00000001833278d0 ^ 0x10131b01;
  uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  uRam0000000183327c08 = uRam0000000183327740 ^ uVar3 ^ 0x10136495;
  uRam00000001833278b8 = (uRam00000001833278b8 ^ uVar3) + 0x10136495 ^ 0x8e65aa32d0b0c79;
  uRam0000000183327cd8 = (uRam0000000183327cd8 * 0x774fdf6589b1b7a1 ^ uRam00000001833278b8) + uVar3;
  uRam00000001833279d8 = uRam0000000183327cd8 ^ uRam00000001833278b8;
  uRam0000000183327c00 = 0x10136495;
  uRam0000000183327840 = func_0x00018c9ce4f0(uRam0000000183327738 + 0xff9effc5c900a4ff ^ 0xbb);
  uVar3 = (uRam0000000183327840 ^ 0xf10fadf44200000) & 0xfffffffffff00000;
  uRam00000001833278c8 = uRam0000000183327770 ^ uVar3 ^ 0x1000044fc;
  uRam0000000183327a70 = (uRam0000000183327a70 ^ uVar3) + 0x1000044fc ^ 0x51aac765bfe73b6;
  uRam0000000183327bf0 = (uRam0000000183327bf0 * -0x1495707f20a8623f ^ uRam0000000183327a70) + uVar3
  ;
  uRam0000000183327a70 = uRam0000000183327bf0 ^ uRam0000000183327a70;
  uRam0000000183327b50 = 0x44fc;
  uRam0000000183327df0 = func_0x00018c9ce4f0(uRam0000000183327c50 ^ 0x1affc934ff4571);
  uVar3 = (uRam0000000183327df0 ^ 0xfffc3efa) * 0x2792754c3875d4f9;
  uVar6 = uVar3 >> 1 | uVar3;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  uRam00000001833279d0 = uRam00000001833278e8 ^ uVar3 ^ 0x1000044fc;
  uRam0000000183327868 = (uRam0000000183327868 ^ uVar3) + 0x1000044fc ^ 0xff7b650e998ccb31;
  uRam0000000183327a80 = (uRam0000000183327a80 * 0xf8ddc5ae79ec583 ^ uRam0000000183327868) + uVar3;
  uRam0000000183327d68 = uRam0000000183327a80 ^ uRam0000000183327868;
  uRam00000001833278f0 = 0x44fc;
  uVar3 = (uRam0000000183327d08 ^ _UNK_181fcb7e0) + uRam0000000183327cf8 + 0x73c9dc9a;
  uVar6 = (uRam0000000183327cf8 ^ _UNK_181fcb7e8) + uRam0000000183327d08 + 0x7f31d7a3;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327d08 ^ _UNK_181fcb7e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183327cf8 ^ _UNK_181fcb7e8;
  uRam0000000183327c60 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183327d08 + 0x7f31d7a3) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183327cf8 + 0x73c9dc9a));
  uVar3 = ((uRam0000000183327c60 ^ 0xe003ffbf) & 0x7ffff) << 0x23 |
          (uRam0000000183327c60 ^ 0xe003ffbf) >> 0x1d;
  uRam0000000183327c08 = (uRam0000000183327c08 ^ uVar3) + 0x88da281c ^ 0x65ad059065bebf9a;
  uRam0000000183327e38 = (uRam0000000183327e38 * 0x3ff2e6eb9ced9d81 ^ uRam0000000183327c08) + uVar3;
  uRam0000000183327960 = uRam0000000183327e38 ^ uRam0000000183327c08;
  uRam0000000183327a38 = 0x88da281c;
  uVar3 = (uRam0000000183327930 ^ _UNK_181fcb7f0) + 0x95d23355;
  uVar6 = (_UNK_181fcb7f8 ^ 0x88da281c) + uRam0000000183327930 + 0xee43af46;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327930 ^ _UNK_181fcb7f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _UNK_181fcb7f8 ^ 0x88da281c;
  uRam0000000183327ee8 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183327930 + 0xee43af46) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - 0x95d23355);
  uVar3 = (ulonglong)(~((uint)uRam0000000183327ee8 ^ 0x14661ba8) & 0x88da2818);
  uRam0000000183327ba0 = uRam0000000183327c08 ^ uVar3 ^ 0x1771dd762;
  uRam0000000183327850 = (uRam0000000183327850 ^ uVar3) + 0x1771dd762 ^ 0x3c6d6bb166c20ab5;
  uRam0000000183327738 = (uRam0000000183327738 * 0x66e4e9258a0633a5 ^ uRam0000000183327850) + uVar3;
  uRam0000000183327ae0 = uRam0000000183327738 ^ uRam0000000183327850;
  uRam00000001833277e8 = 0x771dd762;
  uVar3 = (~uRam0000000183327cf8 + 0x771dd763) *
          ((uRam0000000183327ea8 ^ 0xf33ff447) +
          (ulonglong)((uint)uRam0000000183327ea8 & 0xf33ff447) * 2);
  uVar3 = (uVar3 | uRam0000000183327870) + (uVar3 & uRam0000000183327870);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183327bc0 =
       func_0x00018c9ce4f0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam0000000183327bb0 = uRam0000000183327bc0 << 0x20 | uRam0000000183327bc0 >> 0x20;
  uRam0000000183327c20 = uRam0000000183327c20 ^ uRam0000000183327bb0 ^ 0x1bf0fbff3d1ffe88;
  uRam0000000183327750 =
       (uRam0000000183327750 * 0x14605dceaa518df ^ uRam0000000183327c20) + uRam0000000183327bb0;
  uRam0000000183327720 = uRam0000000183327750 ^ uRam0000000183327c20;
  uRam0000000183327818 = 0;
  uVar3 = (uRam0000000183327ab0 ^ 0x842267d9) + uRam0000000183327c70 + 0x842267d9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327ab0 ^ 0x842267d9;
  uVar6 = ((uRam0000000183327c70 + uRam0000000183327ab0) * 0x2000 |
          uRam0000000183327c70 + uRam0000000183327ab0 >> 0x33) ^ uRam0000000183327c70;
  uRam0000000183327960 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam0000000183327ab0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183327c70 + 0x842267d9));
  uVar3 = (uRam0000000183327960 << 0x31 | uRam0000000183327960 >> 0xf) >> 4 |
          (uRam0000000183327960 >> 0xf) << 0x3c;
  uRam0000000183327860 = uRam0000000183327cb8 ^ uVar3 ^ 0x44fc;
  uRam0000000183327a48 = (uRam0000000183327a48 ^ uVar3) + 0x44fc ^ 0xca8688be4cf3206b;
  uRam0000000183327a00 = (uRam0000000183327a00 * -0x468bfd3a5ea2abef ^ uRam0000000183327a48) + uVar3
  ;
  uRam0000000183327d60 = uRam0000000183327a00 ^ uRam0000000183327a48;
  uRam0000000183327bb0 = uRam0000000183327bd0 ^ 0x44fc;
  uRam0000000183327ec0 = 0x44fc;
  lRam00000001833278f8 = func_0x00018c9ce4f0(lRam0000000183327d10 + 0xffdf0084a90021ffU ^ 0x49);
  uVar3 = lRam00000001833278f8 * 0x8d0ccc9a31c615f;
  uRam0000000183327950 = uRam0000000183327768 ^ uVar3 ^ 0x44fc;
  uRam0000000183327880 = (uRam0000000183327880 ^ uVar3) + 0x44fc ^ 0x784a6bba0d749983;
  uRam0000000183327b70 = (uRam0000000183327b70 * 0x618080655bfc05ad ^ uRam0000000183327880) + uVar3;
  uRam0000000183327b80 = uRam0000000183327b70 ^ uRam0000000183327880;
  uRam00000001833278a8 = 0x44fc;
  uVar3 = (uRam0000000183327bf8 ^ _UNK_181fcb800) + uRam0000000183327850 + 0x1149549a;
  uVar6 = (uRam0000000183327850 ^ _UNK_181fcb808) + uRam0000000183327bf8 + 0x956b77bf;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327bf8 ^ _UNK_181fcb800;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183327850 ^ _UNK_181fcb808;
  uRam0000000183327d30 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183327bf8 + 0x956b77bf) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183327850 + 0x1149549a));
  uVar3 = uRam0000000183327d30 & 0xfffffffffffffff ^ 0x956b77bf;
  uRam00000001833277c0 = uRam00000001833277c0 ^ uVar3 ^ 0xe5cfe0f1d65ee6f3;
  uRam0000000183327e30 = (uRam0000000183327e30 * -0xdedd1e1459d13d7 ^ uRam00000001833277c0) + uVar3;
  uRam0000000183327b90 = uRam0000000183327e30 ^ uRam00000001833277c0;
  uRam0000000183327aa8 = 0;
  uVar3 = (uRam0000000183327840 ^ 0x842267d9) + uRam00000001833279c0 + 0x842267d9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183327840 ^ 0x842267d9;
  uVar6 = ((uRam00000001833279c0 + uRam0000000183327840) * 0x2000 |
          uRam00000001833279c0 + uRam0000000183327840 >> 0x33) ^ uRam00000001833279c0;
  uRam0000000183327910 =
       func_0x00018c9ce4f0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam0000000183327840 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833279c0 + 0x842267d9));
  uRam0000000183327798 = uRam0000000183327b30 ^ uRam00000001833279f8 ^ 0x44fc;
  uRam00000001833277a8 = (uRam00000001833277a8 ^ uRam00000001833279f8) + 0x44fc ^ 0x9964559d431da3bf
  ;
  uRam0000000183327e28 =
       (uRam0000000183327e28 * 0x64c369aef0e9f977 ^ uRam00000001833277a8) + uRam00000001833279f8;
  uRam0000000183327eb8 = uRam0000000183327e28 ^ uRam00000001833277a8;
  uRam0000000183327dc0 = 0x44fc;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x11b99,0x2dd);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c9c538a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fc9920 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fh; aJk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18c9ce580, runtime 6ffff45de580) =====

void FUN_18c9ce580(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018c9ce5cb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fcb9b0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fh; aJl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18c9cf590, runtime 6ffff45df590) =====

void FUN_18c9cf590(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c9cf619 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181fcbf70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



