// ===== Lsixtwo/oI; _46a80b374e1aa282fd748f80b5cdc450 ()V (handler @ image 1862603f0, runtime 6fffede703f0) =====

void FUN_1862603f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018626047f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807dec00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oI; cIC ()Z (handler @ image 186254c10, runtime 6fffede64c10) =====

void FUN_186254c10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x9bce,0x1bc);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186254cd1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807db350 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oI; cID ()Lnet/minecraft/class_1657; (handler @ image 186277250, runtime 6fffede87250) =====

void FUN_186277250(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186277270 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e1c30 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/oI; cIE ()I (handler @ image 186277450, runtime 6fffede87450) =====

void FUN_186277450(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186277470 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e1d10 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/oI; cIF (Ljava/lang/String;)V (handler @ image 186277650, runtime 6fffede87650) =====

void FUN_186277650(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x9bce,0x1bc);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018627769a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e1df0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oI; cIG ()Ljava/lang/String; (handler @ image 1862777d0, runtime 6fffede877d0) =====

void FUN_1862777d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x9bce,0x1bc);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186277816 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e1e90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oI; cIH (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException; (handler @ image 186277960, runtime 6fffede87960) =====

undefined8 FUN_186277960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/oI; cII ([B)Ljava/lang/String; (handler @ image 1862779f0, runtime 6fffede879f0) =====

void FUN_1862779f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000186277a90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e20b0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/oI; cIJ (IJ)I (handler @ image 1862a0c90, runtime 6fffedeb0c90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862a0c90(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = (~uRam0000000183124450 + 0x6d45c33b6f681690) *
          ((uRam0000000183123fa0 ^ 0x4fd8d225b15287b) +
          (uRam0000000183123fa0 & 0x4fd8d225b15287b) * 2);
  uVar4 = (uVar4 | uRam0000000183123d70) + (uVar4 & uRam0000000183123d70);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831242c8 =
       func_0x0001862ab780((uVar4 | 0x69b84e19347d3ef4) + (uVar4 & 0x69b84e19347d3ef4));
  uRam0000000183123db0 =
       (uRam0000000183123db0 ^ uRam00000001831242c8 & 0xfffffffff) + 0x6dfdcf3bff7f1fdf ^
       0x8c3a0d83f1679e7a;
  uRam0000000183123d90 =
       (uRam0000000183123d90 * 0x1239e4adcaed1c0d ^ uRam0000000183123db0) +
       (uRam00000001831242c8 & 0xfffffffff);
  uRam00000001831242f8 = uRam0000000183123d90 ^ uRam0000000183123db0;
  uRam00000001831242b0 = 0x6dfdcf3bff7f1fdf;
  uVar4 = (uRam00000001831244f0 ^ _UNK_1807e9780) + uRam00000001831242f0 + 0x84222325;
  uVar6 = (uRam00000001831242f0 ^ _UNK_1807e9788) + uRam00000001831244f0 + 0x65455c95aa7b1d70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831244f0 ^ _UNK_1807e9780;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831242f0 ^ _UNK_1807e9788;
  uRam0000000183124440 =
       func_0x0001862ab780((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001831244f0 + 0x65455c95aa7b1d70) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831242f0 + 0x84222325));
  uRam0000000183124210 =
       (uRam0000000183124210 ^ uRam0000000183124440) + 0x9abaa36a5584e290 ^ 0xc088233b412c2210;
  uRam0000000183124110 =
       (uRam0000000183124110 * 0x670589201513974b ^ uRam0000000183124210) + uRam0000000183124440;
  uRam0000000183123d68 = uRam0000000183124110 ^ uRam0000000183124210;
  uRam0000000183123e98 = 0x9abaa36a5584e290;
  uRam0000000183124120 = func_0x0001862ab780(lRam0000000183123eb8 + 0x8cc1452ea9bc36e4U ^ 0xf);
  uRam00000001831242c8 = uRam0000000183123f90 ^ uRam0000000183124120 ^ 0x65455c95aa7b9d6f;
  uRam00000001831244c0 =
       (uRam00000001831244c0 ^ uRam0000000183124120) + 0x65455c95aa7b9d6f ^ 0x7c9c497b036d80ab;
  uRam0000000183123f40 =
       (uRam0000000183123f40 * 0x1307b3eda79a492f ^ uRam00000001831244c0) + uRam0000000183124120;
  uRam0000000183123e08 = uRam0000000183123f40 ^ uRam00000001831244c0;
  uRam0000000183124360 = 0x65455c95aa7b9d6f;
  uRam00000001831240e0 = func_0x0001862ab780(uRam0000000183123d20 + 0x734caf18baa233c2 ^ 0xd1);
  uVar4 = uRam00000001831240e0 ^ 0x65455c95aa7b9d6f;
  uRam00000001831240b0 = uRam00000001831240a0 ^ uVar4 ^ 0x7fff;
  uRam0000000183123e90 = (uRam0000000183123e90 ^ uVar4) + 0x7fff ^ 0xb65c03c6f8def080;
  uRam0000000183123f48 = (uRam0000000183123f48 * 0x67a5df28d690f61d ^ uRam0000000183123e90) + uVar4;
  uRam0000000183123ff8 = uRam0000000183123f48 ^ uRam0000000183123e90;
  uRam0000000183124100 = 0x7fff;
  uVar4 = (~uRam0000000183123e50 + 0xdc01dc72e0ff0001) *
          ((uRam0000000183123f98 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183123f98 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183124308) + (uVar4 & uRam0000000183124308);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831242d0 =
       func_0x0001862ab780((uVar4 | 0xdc01dc7264dd2325) + (uVar4 & 0xdc01dc7264dd2325));
  uVar4 = uRam00000001831242d0 << 0x1d | (uRam00000001831242d0 & 0x3ffffffffffffff) >> 0x23;
  uRam0000000183123e68 = (uRam0000000183123e68 ^ uVar4) + 0x23fe238d1f010000 ^ 0x9df312640a08a13c;
  uRam0000000183123e00 = (uRam0000000183123e00 * 0x1ee262dce8f55d6d ^ uRam0000000183123e68) + uVar4;
  uRam0000000183124348 = uRam0000000183123e00 ^ uRam0000000183123e68;
  uRam00000001831240a0 = 0x23fe238d1f010000;
  uRam0000000183123ea8 = func_0x0001862ab780(uRam0000000183124178 ^ 0x6b5b96e6d5f4d496);
  uVar4 = ~(((uRam0000000183123ea8 & 0xffffffff) * (ulonglong)_UNK_1807e97a0 +
             (uRam0000000183123ea8 >> 0x20) * (_UNK_1807e9790 & 0xffffffff) << 0x20) +
            (uRam0000000183123ea8 & 0xffffffff) * (_UNK_1807e9790 & 0xffffffff) & 0x7fffffffffffffff
           ) & 0xdc01dc72e0ff7fff;
  uRam0000000183124130 = uRam00000001831240b8 ^ uVar4 ^ 0x7fff;
  uRam0000000183124228 = (uRam0000000183124228 ^ uVar4) + 0x7fff ^ 0x2022dbe08c37e168;
  uRam0000000183124400 = (uRam0000000183124400 * 0xbdff1e0421fbb25 ^ uRam0000000183124228) + uVar4;
  uRam00000001831244b0 = uRam0000000183124400 ^ uRam0000000183124228;
  uRam00000001831242b8 = uRam00000001831240a0 ^ 0x7fff;
  uRam00000001831243e0 = 0x7fff;
  uVar4 = (~uRam0000000183123ed0 + 0xf3955d4b9a6e2201) *
          ((uRam0000000183124300 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183124300 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam00000001831244c8) + (uVar4 & uRam00000001831244c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183124488 =
       func_0x0001862ab780((uVar4 | 0xf3955d4b1e4c7eda) + (uVar4 & 0xf3955d4b1e4c7eda));
  uVar4 = uRam0000000183124488 & 0xfffffffffc000000;
  uRam0000000183124000 = uRam00000001831240f8 ^ uVar4 ^ 0xf3955d4b9a6ea1ff;
  uRam00000001831244b0 = (uRam00000001831244b0 ^ uVar4) + 0xf3955d4b9a6ea1ff ^ 0x38b04116b035076a;
  uRam0000000183124240 = (uRam0000000183124240 * 0x65163da952c67ebd ^ uRam00000001831244b0) + uVar4;
  uRam00000001831242d8 = uRam0000000183124240 ^ uRam00000001831244b0;
  uRam0000000183123fb8 = 0xf3955d4b9a6ea1ff;
  uVar4 = (~uRam0000000183124418 + 0xc6aa2b46591de01) *
          ((uRam0000000183123eb0 ^ 0xf3955d4b1e4c82da) +
          (uRam0000000183123eb0 & 0x73955d4b1e4c82da) * 2);
  uVar4 = (uVar4 | uRam0000000183124270) + (uVar4 & uRam0000000183124270);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183124470 =
       func_0x0001862ab780((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uRam0000000183124090 = uRam0000000183123e60 ^ uRam0000000183124470 ^ 0x7fff;
  uRam0000000183124200 = (uRam0000000183124200 ^ uRam0000000183124470) + 0x7fff ^ 0xf18d2ce4a33b4b90
  ;
  uRam0000000183123df8 =
       (uRam0000000183123df8 * 0x7c1c27c9f49c6799 ^ uRam0000000183124200) + uRam0000000183124470;
  uRam00000001831244b8 = uRam0000000183123df8 ^ uRam0000000183124200;
  uRam0000000183124128 = 0x7fff;
  uVar4 = (~uRam00000001831240f8 + 0xb226e5c701abfe7b) *
          ((uRam0000000183123d20 ^ 0x6dfdcf3b7b5d3cfa) +
          (uRam0000000183123d20 & 0x6dfdcf3b7b5d3cfa) * 2);
  uVar4 = (uVar4 | uRam0000000183123e28) + (uVar4 & uRam0000000183123e28);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183123d78 =
       func_0x0001862ab780((uVar4 | 0xdfdb2afc7af6c280) + (uVar4 & 0xdfdb2afc7af6c280));
  uVar4 = uRam0000000183123d78 ^ 0x6dfdcf3bff7f1fdf;
  uRam00000001831244d8 = uRam0000000183124320 ^ uVar4 ^ 0x2024b503012b1e59;
  uRam0000000183123dc0 = (uRam0000000183123dc0 ^ uVar4) + 0x2024b503012b1e59 ^ 0xac8fd312cce46094;
  uRam0000000183123ea8 = (uRam0000000183123ea8 * 0x78c4a0386cdcef99 ^ uRam0000000183123dc0) + uVar4;
  uRam0000000183124230 = uRam0000000183123ea8 ^ uRam0000000183123dc0;
  uRam0000000183123fb8 = 0x2024b503012b1e59;
  uVar4 = (uRam0000000183124038 ^ _UNK_1807e97b0) + uRam0000000183123e30 + 0xdfdb2afc7af6c280;
  uVar6 = (uRam0000000183123e30 ^ _UNK_1807e97b8) + uRam0000000183124038 + 0x40498a0602563cb4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183124038 ^ _UNK_1807e97b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183123e30 ^ _UNK_1807e97b8;
  uRam0000000183124468 =
       func_0x0001862ab780((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183124038 + 0x40498a0602563cb4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183123e30 + 0xdfdb2afc7af6c280));
  uVar4 = (uRam0000000183124468 ^ 0x5e0d2c3ed72bb5a1) << 0x2c |
          (uRam0000000183124468 ^ 0x5e0d2c3ed72bb5a1) >> 0x14;
  uRam0000000183123e70 = uRam00000001831241d0 ^ uVar4 ^ 0x2024b503012b1e59;
  uRam0000000183124450 = (uRam0000000183124450 ^ uVar4) + 0x2024b503012b1e59 ^ 0x34ba8b1b700402ae;
  uRam00000001831241e0 = (uRam00000001831241e0 * 0x36026a26638a1691 ^ uRam0000000183124450) + uVar4;
  uRam0000000183123de0 = uRam00000001831241e0 ^ uRam0000000183124450;
  uRam00000001831244e0 = 0x2024b503012b1e59;
  uRam0000000183124440 = func_0x0001862ab780(uRam0000000183124400 ^ 0x1f008424ffdd6b);
  uRam0000000183123ea8 = (uRam0000000183124440 ^ 0x24a501012a1a51) & 0x2024b503012b1e59;
  uRam0000000183124370 = uRam0000000183124370 ^ uRam0000000183123ea8 ^ 0xf0a63f40c983f489;
  uRam0000000183123f38 =
       (uRam0000000183123f38 * -0x3ec46956bbd0f7a5 ^ uRam0000000183124370) + uRam0000000183123ea8;
  uRam0000000183124170 = uRam0000000183123f38 ^ uRam0000000183124370;
  uRam0000000183124030 = 0;
  uRam0000000183123e48 = func_0x0001862ab780(uRam00000001831243f0 ^ 0x23ff8336002107);
  uRam0000000183124030 = uRam0000000183123d18 ^ uRam0000000183123e48 ^ 0x7fff;
  uRam00000001831243d0 = (uRam00000001831243d0 ^ uRam0000000183123e48) + 0x7fff ^ 0x4c75498bb3b44d1e
  ;
  uRam0000000183124468 =
       (uRam0000000183124468 * -0x26be3b5c772b1707 ^ uRam00000001831243d0) + uRam0000000183123e48;
  uRam0000000183123d60 = uRam0000000183124468 ^ uRam00000001831243d0;
  uRam0000000183123de8 = 0x7fff;
  uVar4 = ~uRam00000001831240a8 *
          ((uRam00000001831244a0 ^ 0x6dfdcf3b7b5d3cfa) +
          (uRam00000001831244a0 & 0x6dfdcf3b7b5d3cfa) * 2);
  uVar4 = (uVar4 | uRam00000001831240f8) + (uVar4 & uRam00000001831240f8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183123ee0 =
       func_0x0001862ab780((uVar4 | 0x920230c484a2c305) + (uVar4 & 0x920230c484a2c305));
  uVar4 = uRam0000000183123ee0 >> 1 | uRam0000000183123ee0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uRam0000000183123ee0) * -0x17573fec11ae27f1;
  uRam0000000183124270 = (uRam0000000183124270 ^ uVar4) + 0x920230c40080e020 ^ 0xfdc32f2f8412d3f5;
  uRam0000000183123d50 = (uRam0000000183123d50 * 0x1353ba415915287f ^ uRam0000000183124270) + uVar4;
  uRam00000001831240c8 = uRam0000000183123d50 ^ uRam0000000183124270;
  uRam00000001831240a8 = 0x920230c40080e020;
  uVar4 = (~uRam0000000183124238 + 0x920230c40080e021) *
          ((uRam0000000183123ec8 ^ 0x6dfdcf3b7b5d3cfa) +
          (uRam0000000183123ec8 & 0x6dfdcf3b7b5d3cfa) * 2);
  uVar4 = (uVar4 | uRam0000000183124210) + (uVar4 & uRam0000000183124210);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183123db0 =
       func_0x0001862ab780((uVar4 | 0xffffffff7bdddcda) + (uVar4 & 0xffffffff7bdddcda));
  uVar4 = uRam0000000183123db0 >> 1 | uRam0000000183123db0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ~((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
           ^ uRam0000000183123db0) & 0x6dfdcf3bff7f1fdf;
  uRam0000000183124260 = uRam0000000183124260 ^ uVar4 ^ 0xda3129a5741a0ec6;
  uRam0000000183124008 = (uRam0000000183124008 * -0x7fe0c9c19aaa719f ^ uRam0000000183124260) + uVar4
  ;
  uRam00000001831244e8 = uRam0000000183124008 ^ uRam0000000183124260;
  uRam0000000183123f38 = 0;
  uVar4 = (~uRam00000001831243b0 + 0x4fd8d22df370b5f) *
          ((uRam0000000183124310 ^ 0x4fd8d225b15287b) +
          (uRam0000000183124310 & 0x4fd8d225b15287b) * 2);
  uVar4 = (uVar4 | uRam0000000183123e40) + (uVar4 & uRam0000000183123e40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183123e80 =
       func_0x0001862ab780((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam0000000183124120 =
       uRam0000000183124120 ^ uRam0000000183123e80 ^ 0x4fd8d22df370b5e ^ 0x8969fab47bd3da0e;
  uRam0000000183123f00 =
       (uRam0000000183123f00 * -0x245e33534760b147 ^ uRam0000000183124120) +
       (uRam0000000183123e80 ^ 0x4fd8d22df370b5e);
  uRam0000000183123e78 = uRam0000000183123f00 ^ uRam0000000183124120;
  uRam0000000183124368 = 0;
  uVar4 = (uRam0000000183123f18 ^ 0x84225cda) + uRam00000001831241c0 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183123f18 ^ 0x84225cda;
  uVar6 = ((uRam00000001831241c0 + uRam0000000183123f18) * 0x2000 |
          uRam00000001831241c0 + uRam0000000183123f18 >> 0x33) ^ uRam00000001831241c0;
  uRam0000000183123fa0 =
       func_0x0001862ab780((uVar6 << 0x1d | uVar6 >> 0x23) - uRam0000000183123f18 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831241c0 + 0x84225cda));
  uVar4 = (ulonglong)(~(uint)uRam0000000183123fa0 & 0x7fff);
  uRam0000000183123d08 = uRam0000000183124060 ^ uVar4 ^ 0x7fff;
  uRam0000000183124440 = (uRam0000000183124440 ^ uVar4) + 0x7fff ^ 0x9730ead34169917e;
  uRam00000001831241b8 = (uRam00000001831241b8 * -0x62b72f9b9dc79a1 ^ uRam0000000183124440) + uVar4;
  uRam0000000183123e90 = uRam00000001831241b8 ^ uRam0000000183124440;
  uRam0000000183124138 = 0x7fff;
  uVar4 = (~uRam0000000183124180 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183123e80) +
          ((param_4 ^ 0x84222325) & uRam0000000183123e80) * 2);
  uVar4 = (uVar4 | uRam00000001831244e8) + (uVar4 & uRam00000001831244e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183123fe8 =
       func_0x0001862ab780((param_4 ^ 0x84225cda | uVar4) + (uVar4 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uRam0000000183123e58 = (ulonglong)uVar2;
  uRam0000000183123ee0 =
       (uRam0000000183123ee0 ^ uRam0000000183123d80 ^ 0x7fff) + uRam0000000183123e58 ^
       0x178fe688da3618e6;
  uRam0000000183124470 =
       (uRam0000000183124470 * 0x57ee85a3444a66f1 ^ uRam0000000183123ee0) +
       (uRam0000000183123d80 ^ 0x7fff);
  uRam0000000183124308 = uRam0000000183124470 ^ uRam0000000183123ee0;
  uRam0000000183123d80 = func_0x0001862ab780(uRam00000001831244c0 + 0xffc700545bffa4ff ^ 0xac);
  uRam0000000183124320 =
       (uRam0000000183124320 ^ uRam0000000183123d80 ^ 0xf14d7d69) + 0xf14d7d69 ^ 0xca2b4b55476740c2;
  uRam00000001831242b8 =
       (uRam00000001831242b8 * -0x3ec1f92ad976fb71 ^ uRam0000000183124320) +
       (uRam0000000183123d80 ^ 0xf14d7d69) ^ uRam0000000183124320;
  uRam0000000183124158 = 0xf14d7d69;
  uVar4 = (uRam0000000183123ec0 ^ _UNK_1807e97c0) + uRam0000000183123d00 + 0xc9bf7529;
  uVar6 = (uRam0000000183123d00 ^ _UNK_1807e97c8) + uRam0000000183123ec0 + 0xd85042cd;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183123ec0 ^ _UNK_1807e97c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183123d00 ^ _UNK_1807e97c8;
  uRam0000000183124118 =
       func_0x0001862ab780((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183123ec0 + 0xd85042cd) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183123d00 + 0xc9bf7529));
  uRam0000000183123d48 =
       (uRam0000000183123d48 ^ uRam0000000183124118 ^ 0x4195160562bcbd51) + 0x95cd14c1 ^
       0xbbe56f270add737c;
  uRam0000000183123f28 =
       (uRam0000000183123f28 * -0x141b0e591a522057 ^ uRam0000000183123d48) +
       (uRam0000000183124118 ^ 0x4195160562bcbd51);
  uRam00000001831241f0 = uRam0000000183123f28 ^ uRam0000000183123d48;
  uRam0000000183124468 = 0x95cd14c1;
  uVar4 = (~uRam0000000183124238 + 0x5a71e06f) *
          ((uRam0000000183123e78 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183123e78 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183124140) + (uVar4 & uRam0000000183124140);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183124448 =
       func_0x0001862ab780((uVar4 | 0xde53c34b) + (ulonglong)((uint)uVar4 & 0xde53c34b));
  uRam00000001831243e8 =
       (uRam00000001831243e8 ^ uRam0000000183124448) - 0x5a71e06e ^ 0x3cdc7432161cdc1c;
  uRam0000000183124270 =
       (uRam0000000183124270 * -0x5a035ab3366109e5 ^ uRam00000001831243e8) + uRam0000000183124448;
  uRam0000000183123f90 = uRam0000000183124270 ^ uRam00000001831243e8;
  uRam0000000183124148 = 0xa58e1f92;
  uRam0000000183123d28 = func_0x0001862ab780(lRam0000000183124460 + 0xff78003646ffceffU ^ 0x31);
  uVar4 = uRam0000000183123dc8 & 0x7fffffffffffffff;
  uRam0000000183124220 = uRam0000000183123ec0 ^ uVar4 ^ 0x5a723b7a;
  uRam0000000183123dd0 = (uRam0000000183123dd0 ^ uVar4) + 0x5a723b7a ^ 0xe1c1f13d3fe72d3f;
  uRam0000000183124228 = (uRam0000000183124228 * 0x6dd9a4498c3a1e65 ^ uRam0000000183123dd0) + uVar4;
  uRam0000000183123dc0 = uRam0000000183124228 ^ uRam0000000183123dd0;
  uRam0000000183124300 = 0x5a723b7a;
  uVar4 = (~uRam0000000183124108 + 0x37ac9c01) *
          ((uRam00000001831242e0 ^ 0x84227829) +
          (ulonglong)((uint)uRam00000001831242e0 & 0x84227829) * 2);
  uVar4 = (uVar4 | uRam0000000183123d50) + (uVar4 & uRam0000000183123d50);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183123e48 =
       func_0x0001862ab780((uVar4 | 0xb38ee429) + (ulonglong)((uint)uVar4 & 0xb38ee429));
  uVar4 = (uRam0000000183123e48 ^ 0x37acdf0c) >> 1 | uRam0000000183123e48 << 0x3f;
  uRam0000000183123f30 = uRam0000000183124018 ^ uVar4 ^ 0x37acf70c;
  uRam0000000183123d08 = (uRam0000000183123d08 ^ uVar4) + 0x37acf70c ^ 0xc0fdbc6bf61894fc;
  uRam0000000183124158 = (uRam0000000183124158 * -0x1fd305a19497b28d ^ uRam0000000183123d08) + uVar4
  ;
  uRam0000000183124490 = uRam0000000183124158 ^ uRam0000000183123d08;
  uRam0000000183124400 = uRam00000001831240b0 ^ 0x37acf70c;
  uRam0000000183123e80 = 0x37acf70c;
  uVar4 = (uRam0000000183124010 ^ _UNK_1807e97d0) + uRam0000000183123ea8 + 0xb38ed429;
  uVar6 = (uRam0000000183123ea8 ^ _UNK_1807e97d8) + uRam0000000183124010 + 0xc8536400;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183124010 ^ _UNK_1807e97d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183123ea8 ^ _UNK_1807e97d8;
  uRam0000000183124300 =
       func_0x0001862ab780((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183124010 + 0xc8536400) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183123ea8 + 0xb38ed429));
  uVar4 = (uRam0000000183124300 ^ 0x2b9143d53ec8470c) & 0x7fffffffffffffff;
  uVar6 = ((uRam0000000183124300 ^ 0x2b9143d53ec8470c) & 0x7fffffffffffffff) >> 1 | uVar4;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4;
  uRam0000000183123ec8 = uRam00000001831244d8 ^ uVar4 ^ 0x100005b0c;
  uRam0000000183123fb8 = (uRam0000000183123fb8 ^ uVar4) + 0x100005b0c ^ 0x64176a7413599e31;
  uRam0000000183123d18 = (uRam0000000183123d18 * 0x177c6f09afa2959b ^ uRam0000000183123fb8) + uVar4;
  uRam00000001831243b0 = uRam0000000183123d18 ^ uRam0000000183123fb8;
  uRam0000000183123fc0 = 0x5b0c;
  uVar4 = func_0x0001862ab780(uRam0000000183123d98 ^ 0xff440074b8ff86df);
  uRam00000001831242b0 = (uVar4 ^ uVar4 ^ 0xb99ef6c) - 0xb99ef6c ^ 0x301c52ab015303de;
  uRam0000000183124060 =
       (uRam0000000183124060 * 0x429a5e70a01fe6c5 ^ uRam00000001831242b0) + (uVar4 ^ 0xb99ef6c);
  uRam0000000183124310 = uRam0000000183124060 ^ uRam00000001831242b0;
  uRam0000000183123fc8 = 0xf4661094;
  uRam0000000183123e18 = func_0x0001862ab780(uRam00000001831241e0 ^ 0xff8b007cbd0096ee);
  uVar4 = uRam0000000183123e18 - (uRam0000000183123e18 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183123e18) & 0xfffffffffffff;
  uRam0000000183124318 = uRam0000000183124210 ^ uVar4 ^ 0xb9a4a78;
  uRam0000000183124178 = (uRam0000000183124178 ^ uVar4) + 0xb9a4a78 ^ 0x50626847b6377edc;
  uRam00000001831241d8 = (uRam00000001831241d8 * -0x65f80c142dfd8b5 ^ uRam0000000183124178) + uVar4;
  uRam0000000183124490 = uRam00000001831241d8 ^ uRam0000000183124178;
  lRam0000000183123eb8 = 0xb9a4a78;
  uVar4 = (~uRam00000001831244b0 + 0x95cd14c2) *
          ((uRam0000000183124258 ^ 0x756f5e4c) +
          (ulonglong)((uint)uRam0000000183124258 & 0x756f5e4c) * 2);
  uVar4 = (uVar4 | uRam0000000183123ff8) + (uVar4 & uRam0000000183123ff8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x0001862ab780((uVar4 | 0xe0a24a8d) + (ulonglong)((uint)uVar4 & 0xe0a24a8d));
  uRam0000000183124378 =
       (uRam0000000183124378 ^ uVar4 ^ 0xf5cd7de9) + 0x648069a8 ^ 0x344377cd087f2739;
  uRam0000000183124038 =
       (uRam0000000183124038 * -0x425893abe4ec4de3 ^ uRam0000000183124378) + (uVar4 ^ 0xf5cd7de9);
  uRam00000001831242b8 = uRam0000000183124038 ^ uRam0000000183124378;
  uRam0000000183124240 = 0x648069a8;
  uVar4 = (uRam00000001831240c0 ^ _UNK_1807e97e0) + uRam00000001831240c8 + 0x756f5e4c;
  uVar6 = (uRam00000001831240c8 ^ _UNK_1807e97e8) + uRam00000001831240c0 + 0x95cd14c1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831240c0 ^ _UNK_1807e97e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831240c8 ^ _UNK_1807e97e8;
  uRam0000000183124290 =
       func_0x0001862ab780((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831240c0 + 0x95cd14c1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831240c8 + 0x756f5e4c));
  uVar4 = (ulonglong)
          (~((uint)((uRam0000000183124290 ^ 0x800000003084029) << 5) |
            (uint)((uRam0000000183124290 ^ 0x800000003084029) >> 0x3b)) & 0xf14d7d69);
  uRam00000001831241a8 = (uRam00000001831241a8 ^ uVar4) + 0x914d1441 ^ 0xb462dc3f07162396;
  uRam0000000183123fb0 = (uRam0000000183123fb0 * -0x5dee1a4b623f0415 ^ uRam00000001831241a8) + uVar4
  ;
  uRam0000000183124060 = uRam0000000183123fb0 ^ uRam00000001831241a8;
  uRam0000000183124440 = 0x914d1441;
  uRam00000001831241c0 = func_0x0001862ab780(lRam0000000183124198 + 0xffe2ff7c22ffe1ffU ^ 0x2d);
  uVar4 = uRam00000001831241c0 >> 1 | uRam00000001831241c0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001831241c0;
  uRam0000000183123f00 = uVar4 << 0x25 | uVar4 >> 0x1b;
  uRam00000001831241a8 = uRam00000001831241a8 ^ uRam0000000183123f00 ^ 0xcff5e41d158f2aa5;
  uRam0000000183123fc0 =
       (uRam0000000183123fc0 * 0x1c9da36dba1f94e5 ^ uRam00000001831241a8) + uRam0000000183123f00;
  uRam00000001831241b0 = uRam0000000183123fc0 ^ uRam00000001831241a8;
  uRam0000000183123f80 = 0;
  uVar4 = ((uRam0000000183123dd8 ^ 0x84227829) +
          (ulonglong)((uint)uRam0000000183123dd8 & 0x84227829) * 2) * -uRam0000000183123d48;
  uVar4 = (uVar4 | uRam0000000183123ff8) + (uVar4 & uRam0000000183123ff8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183124410 =
       func_0x0001862ab780((uVar4 | 0x84227829) + (ulonglong)((uint)uVar4 & 0x84227829));
  uRam0000000183123fb0 = uRam0000000183124290 ^ uRam0000000183124410 ^ 0x5b0c;
  uRam0000000183123d88 = (uRam0000000183123d88 ^ uRam0000000183124410) + 0x5b0c ^ 0x92b0ed41cf8dcb5b
  ;
  uRam0000000183123d60 =
       (uRam0000000183123d60 * -0x654c8fec266e0bd ^ uRam0000000183123d88) + uRam0000000183124410;
  uRam0000000183124068 = uRam0000000183123d60 ^ uRam0000000183123d88;
  uRam0000000183124490 = 0x5b0c;
  uVar4 = (uRam0000000183123dd0 ^ _UNK_1807e97f0) + uRam0000000183123f60 + 0x756f5e4c;
  uVar6 = (uRam0000000183123f60 ^ _UNK_1807e97f8) + uRam0000000183123dd0 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183123dd0 ^ _UNK_1807e97f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183123f60 ^ _UNK_1807e97f8;
  uRam0000000183123ed0 =
       func_0x0001862ab780((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183123dd0 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183123f60 + 0x756f5e4c));
  uRam0000000183123d08 =
       (uRam0000000183123d08 ^ uRam0000000183123ed0 & 0x7fffffffffffffff) + 0xeb28296 ^
       0xb60154cad1215f76;
  uRam0000000183123f40 =
       (uRam0000000183123f40 * 0xd74381df4ee6127 ^ uRam0000000183123d08) +
       (uRam0000000183123ed0 & 0x7fffffffffffffff);
  uRam0000000183123dc8 = uRam0000000183123f40 ^ uRam0000000183123d08;
  uRam0000000183123e20 = 0xeb28296;
  uRam0000000183123f90 = func_0x0001862ab780(uRam0000000183124200 + 0xff23ffb829ffccff ^ 0xb3);
  uRam0000000183124080 =
       uRam0000000183124080 ^ uRam0000000183123f90 ^ 0xdda7fd3ae18cd86 ^ 0x480dbdca57444757;
  uRam00000001831243c8 =
       (uRam00000001831243c8 * -0x947a369b19b0ebb ^ uRam0000000183124080) +
       (uRam0000000183123f90 ^ 0xdda7fd3ae18cd86);
  uRam0000000183124400 = uRam00000001831243c8 ^ uRam0000000183124080;
  uRam0000000183123e50 = 0;
  uRam00000001831242d8 = func_0x0001862ab780(uRam0000000183124220 + 0xfff7ff83d6ffe1ff ^ 0xac);
  uVar4 = uRam00000001831242d8 * 0x76ae9b72148d4ec7;
  uRam0000000183124438 = uRam00000001831240e8 ^ uVar4 ^ 0x5b0c;
  uRam00000001831243f8 = (uRam00000001831243f8 ^ uVar4) + 0x5b0c ^ 0x25bb55df792e4a55;
  uRam0000000183124050 = (uRam0000000183124050 * -0x69675ab2fe5f229f ^ uRam00000001831243f8) + uVar4
  ;
  uRam0000000183124100 = uRam0000000183124050 ^ uRam00000001831243f8;
  uRam0000000183124390 = 0x5b0c;
  uVar3 = (ulonglong)(uVar2 ^ param_3);
  uVar4 = uVar3 ^ 0x84222325;
  uVar6 = uVar4 ^ uRam0000000183124140;
  lVar5 = uVar4 + uRam00000001831243f0;
  uVar4 = uVar6 + lVar5;
  uVar7 = (uRam00000001831243f0 ^ 0x5b0c) + uRam0000000183124140 + 0x5b0c;
  uVar6 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831243f0 ^ 0x5b0c;
  uRam0000000183124030 =
       func_0x0001862ab780((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183124140 + 0x5b0c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar5);
  uRam0000000183123e68 = uVar3 ^ 0x5b0c;
  uRam00000001831242d8 =
       (uRam00000001831242d8 ^ uRam0000000183124030 & 0xfffffffffc000000) + uRam0000000183123e68 ^
       0xe7bc6f9821a7d70f;
  uRam0000000183124210 =
       (uRam0000000183124210 * -0x47321d6d5914f0dd ^ uRam00000001831242d8) +
       (uRam0000000183124030 & 0xfffffffffc000000);
  uRam00000001831244a8 = uRam0000000183124210 ^ uRam00000001831242d8;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x9bce,0x1bc);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001862a2da8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e7920 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oI; cIK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18625c6d0, runtime 6fffede6c6d0) =====

void FUN_18625c6d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018625c71b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807dd650 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/oI; cIL (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18625d6e0, runtime 6fffede6d6e0) =====

void FUN_18625d6e0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018625d769 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807ddc10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oI; cIu ()Lnet/minecraft/class_1799; (handler @ image 186258770, runtime 6fffede68770) =====

void FUN_186258770(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x9bce,0x1bc);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186258831 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807dc3b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oI; cIv ()I (handler @ image 186272630, runtime 6fffede82630) =====

void FUN_186272630(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x9bce,0x1bc);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018627270c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e0750 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



