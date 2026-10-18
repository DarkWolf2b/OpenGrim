// ===== Lsixtwo/dN; _086a0a1adaee57dcf039f55a4eea9fca ()V (handler @ image 18dd0a4b0, runtime 6ffff591a4b0) =====

void FUN_18dd0a4b0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dd0a598 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823a87b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dN; aon (Lsixtwo/gz;)V (handler @ image 18dcf70e0, runtime 6ffff59070e0) =====

void FUN_18dcf70e0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xaaf7,0x1e2);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dcf71a4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823a4130 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dN; aoo (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18dcfac60, runtime 6ffff590ac60) =====

undefined8 FUN_18dcfac60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/dN; aop (IJ)I (handler @ image 18dcfacf0, runtime 6ffff590acf0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfacf0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = (~uRam0000000183386148 + 0xb814f320725f3140) *
          ((uRam00000001833862d8 ^ 0x337555d1d7d582bc) +
          (uRam00000001833862d8 & 0x337555d1d7d582bc) * 2);
  uVar3 = (uVar3 | uRam00000001833861d8) + (uVar3 & uRam00000001833861d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183385f68 =
       func_0x00018dd06700((uVar3 | 0x8b61a6f1a58ab383) + (uVar3 & 0x8b61a6f1a58ab383));
  uRam00000001833862d8 =
       (uRam00000001833862d8 ^ ~uRam0000000183385f68 & 0x337555d153f7a199) + 0xbb75f7f173ffb1bf ^
       0x92a0e0dbfaba8452;
  uRam0000000183385f18 =
       (uRam0000000183385f18 * -0x7348f2d546a0764b ^ uRam00000001833862d8) +
       (~uRam0000000183385f68 & 0x337555d153f7a199);
  uRam0000000183385f90 = uRam0000000183385f18 ^ uRam00000001833862d8;
  uRam00000001833861a0 = 0xbb75f7f173ffb1bf;
  uVar3 = (uRam0000000183386170 ^ _UNK_1823a7020) + uRam00000001833860f8 + 0xe82ad8b65f3985d9;
  uVar7 = (uRam00000001833860f8 ^ _UNK_1823a7028) + uRam0000000183386170 + 0x2877132635365ab1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183386170 ^ _UNK_1823a7020;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833860f8 ^ _UNK_1823a7028;
  uRam00000001833860c0 =
       func_0x00018dd06700((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183386170 + 0x2877132635365ab1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833860f8 + 0xe82ad8b65f3985d9));
  uVar3 = ~((uRam00000001833860c0 ^ 0xe87fdbb6ff3ffefd) * 0xe97f79629c00a9) & 0xe82ad8b6db1ba6fc;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar3;
  uRam0000000183386110 = (uRam0000000183386110 ^ uVar3) + 0xc05dcb90ee2dfc4d ^ 0xd2fecb5a1fd87903;
  uRam0000000183386100 = (uRam0000000183386100 * -0x7e4bf19fbd058e13 ^ uRam0000000183386110) + uVar3
  ;
  uRam00000001833860b0 = uRam0000000183386100 ^ uRam0000000183386110;
  uRam0000000183385f60 = 0xc05dcb90ee2dfc4d;
  uVar3 = (~uRam0000000183385f48 + 0x85df1e83781d84c9) *
          ((uRam0000000183385f18 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183385f18 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001833862f0) + (uVar3 & uRam00000001833862f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386218 =
       func_0x00018dd06700((uVar3 | 0x85df1e83fc3fa7ed) + (uVar3 & 0x85df1e83fc3fa7ed));
  uVar3 = uRam0000000183386218 >> 1 | uRam0000000183386218;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam0000000183386218;
  uVar3 = uVar3 << 4 | uVar3 >> 0x3c;
  uRam0000000183385f50 = (uRam0000000183385f50 ^ uVar3) + 0x7a20e17c87e27b38 ^ 0x1657812c57d3f26c;
  uRam0000000183386048 = (uRam0000000183386048 * -0x4d8e71c9645708ad ^ uRam0000000183385f50) + uVar3
  ;
  uRam0000000183385f40 = uRam0000000183386048 ^ uRam0000000183385f50;
  lRam0000000183386128 = 0x7a20e17c87e27b38;
  uRam0000000183385f80 = func_0x00018dd06700(uRam0000000183386010 + 0x7ea8be2bf1f63182 ^ 0xab);
  uRam0000000183386048 = uRam0000000183385fd8 ^ uRam0000000183385f80 ^ 0x85df1e83781e04c7;
  uRam0000000183386160 =
       (uRam0000000183386160 ^ uRam0000000183385f80) + 0x85df1e83781e04c7 ^ 0xadf9c763b5e6f144;
  uRam00000001833862b0 =
       (uRam00000001833862b0 * 0x6473fe696a904f59 ^ uRam0000000183386160) + uRam0000000183385f80;
  uRam0000000183385f98 = uRam00000001833862b0 ^ uRam0000000183386160;
  uRam00000001833862f8 = uRam00000001833861d8 ^ 0x85df1e83781e04c7;
  uRam00000001833860d8 = 0x85df1e83781e04c7;
  uVar3 = (~uRam0000000183386288 + 0x7a20e17c87e27b39) *
          ((uRam0000000183386298 ^ 0x85df1e83fc3c27e2) +
          (uRam0000000183386298 & 0x5df1e83fc3c27e2) * 2);
  uVar3 = (uVar3 | uRam00000001833862c8) + (uVar3 & uRam00000001833862c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386058 =
       func_0x00018dd06700((uVar3 | 0xffffffff7bde5cda) + (uVar3 & 0xffffffff7bde5cda));
  uVar3 = uRam0000000183386058 ^ 0x85df1e83781e04c7;
  uRam0000000183386220 = uRam0000000183385f50 ^ uVar3 ^ 0x7fff;
  uRam0000000183386030 = (uRam0000000183386030 ^ uVar3) + 0x7fff ^ 0xf51747416ac04dd1;
  uRam0000000183385f30 = (uRam0000000183385f30 * 0x4d357cf807920f5 ^ uRam0000000183386030) + uVar3;
  uRam00000001833860d0 = uRam0000000183385f30 ^ uRam0000000183386030;
  uRam0000000183386230 = 0x7fff;
  uVar3 = (uRam0000000183386080 ^ _UNK_1823a7030) + uRam0000000183386048 + 0x84222325;
  uVar7 = (uRam0000000183386048 ^ _UNK_1823a7038) + uRam0000000183386080 + 0xfff9e5aaee086290;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183386080 ^ _UNK_1823a7030;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183386048 ^ _UNK_1823a7038;
  uRam0000000183385fd8 =
       func_0x00018dd06700((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183386080 + 0xfff9e5aaee086290) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183386048 + 0x84222325));
  uRam00000001833861a8 =
       (uRam00000001833861a8 ^ uRam0000000183385fe8) + 0x61a5511f79d70 ^ 0x49af4ac2df5473ba;
  uRam0000000183386068 =
       (uRam0000000183386068 * -0x176a8ddb7f5d78f3 ^ uRam00000001833861a8) + uRam0000000183385fe8;
  uRam0000000183385fc8 = uRam0000000183386068 ^ uRam00000001833861a8;
  uRam0000000183385f58 = uRam0000000183385fa8 ^ 0x61a5511f79d70;
  uRam0000000183386230 = 0x61a5511f79d70;
  uRam0000000183386080 = func_0x00018dd06700(uRam00000001833861d8 + 0xe73b8d1b255a5c16 ^ 0x2d);
  uVar3 = uRam0000000183386080 & 0xfffffffffffff800;
  uRam00000001833862b0 = uRam0000000183386150 ^ uVar3 ^ 0x7fff;
  uRam0000000183386058 = (uRam0000000183386058 ^ uVar3) + 0x7fff ^ 0x962b3f7094ac24b7;
  uRam0000000183386068 = (uRam0000000183386068 * 0x50a5f6c99b3080f5 ^ uRam0000000183386058) + uVar3;
  uRam0000000183386258 = uRam0000000183386068 ^ uRam0000000183386058;
  uRam0000000183386008 = 0x7fff;
  uVar3 = (~uRam00000001833862f0 + 0x2013fa6bc77a45e5) *
          ((uRam0000000183385f80 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183385f80 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam00000001833860d8) + (uVar3 & uRam00000001833860d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386248 =
       func_0x00018dd06700((uVar3 | 0x2013fa6b4358193e) + (uVar3 & 0x2013fa6b4358193e));
  uVar7 = _UNK_1823a7048;
  uVar3 = _UNK_1823a7040;
  uVar6 = (ulonglong)((~(uint)uRam0000000183386248 & 0x7fff) << 0xf);
  uRam0000000183385f08 = uRam0000000183386118 ^ uVar6 ^ 0x2013fa6bc77ac5e3;
  uRam0000000183386198 = (uRam0000000183386198 ^ uVar6) + 0x2013fa6bc77ac5e3 ^ 0xa721e216482d6db5;
  uRam00000001833862b8 = (uRam00000001833862b8 * 0x6f1d911324c50ba1 ^ uRam0000000183386198) + uVar6;
  uRam0000000183385ff8 = uRam00000001833862b8 ^ uRam0000000183386198;
  uRam00000001833862a0 = 0x2013fa6bc77ac5e3;
  uVar6 = (uRam0000000183385f08 ^ _UNK_1823a7040) + uRam0000000183386160 + 0xbb75f7f1f7dd929a;
  uVar8 = (uRam0000000183386160 ^ _UNK_1823a7048) + uRam0000000183385f08 + 0xc05dcb90ee2dfc4d;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183385f08 ^ _UNK_1823a7040;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183386160 ^ _UNK_1823a7048;
  uRam0000000183386290 =
       func_0x00018dd06700((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183385f08 + 0xc05dcb90ee2dfc4d) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183386160 + 0xbb75f7f1f7dd929a));
  uVar6 = (uRam0000000183386290 ^ 0x3b20346111d201b2) << 0xe |
          (uRam0000000183386290 ^ 0x3b20346111d201b2) >> 0x32;
  uRam0000000183386000 = uRam0000000183386088 ^ uVar6 ^ 0x7bd3c382622dae0c;
  uRam0000000183386288 = (uRam0000000183386288 ^ uVar6) + 0x7bd3c382622dae0c ^ 0xc045b9da522ad7f5;
  uRam0000000183385fe0 = (uRam0000000183385fe0 * -0x461be132bbeb613d ^ uRam0000000183386288) + uVar6
  ;
  uRam00000001833860a8 = uRam0000000183385fe0 ^ uRam0000000183386288;
  uRam0000000183386018 = 0x7bd3c382622dae0c;
  uVar6 = (~uRam0000000183386028 + 0xc05dcb90ee2dfc4e) *
          ((uRam00000001833861b0 ^ 0xbb75f7f1f7dd929a) +
          (uRam00000001833861b0 & 0x3b75f7f1f7dd929a) * 2);
  uVar6 = (uVar6 | uRam0000000183385f90) + (uVar6 & uRam0000000183385f90);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183386258 =
       func_0x00018dd06700((uVar6 | 0x7b283c6119f06ed7) + (uVar6 & 0x7b283c6119f06ed7));
  uVar6 = (~uRam0000000183386258 & 0xbb75f7f173ffb1bf) * -0x22c2a4d6f7061669;
  uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar6;
  uRam0000000183385fa0 = (uRam0000000183385fa0 ^ uVar6) + 0x7b283c619dd24df2 ^ 0x7774f61fa8e6503a;
  uRam0000000183386288 = (uRam0000000183386288 * -0x48385c5c5a1a1ee5 ^ uRam0000000183385fa0) + uVar6
  ;
  uRam0000000183386240 = uRam0000000183386288 ^ uRam0000000183385fa0;
  uRam0000000183386238 = 0x7b283c619dd24df2;
  uVar6 = (uRam0000000183385f90 ^ uVar3) + uRam0000000183386120 + 0xbb75f7f1f7dd929a;
  uVar8 = (uRam0000000183386120 ^ uVar7) + uRam0000000183385f90 + 0xc05dcb90ee2dfc4d;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183385f90 ^ uVar3;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183386120 ^ uVar7;
  uRam00000001833861d0 =
       func_0x00018dd06700((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183385f90 + 0xc05dcb90ee2dfc4d) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183386120 + 0xbb75f7f1f7dd929a));
  uVar3 = uRam00000001833861d0 ^ 0xbb75f7f173ffb1bf;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = ~((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           uVar3) & 0xbb75f7f173ffb1bf;
  uRam0000000183385f98 = (uRam0000000183385f98 ^ uVar3) + 0x8055c390622db00d ^ 0xee3fc08ffb80f3ed;
  uRam0000000183386208 = (uRam0000000183386208 * 0x4c66fb03b3702d05 ^ uRam0000000183385f98) + uVar3;
  uRam0000000183386258 = uRam0000000183386208 ^ uRam0000000183385f98;
  uRam0000000183385f68 = 0x8055c390622db00d;
  uVar3 = (~uRam00000001833861c0 + 0xab8720c45b601b) *
          ((uRam00000001833862b8 ^ 0x7b283c6119f06ed7) +
          (uRam00000001833862b8 & 0x7b283c6119f06ed7) * 2);
  uVar3 = (uVar3 | uRam0000000183386230) + (uVar3 & uRam0000000183386230);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386190 =
       func_0x00018dd06700((uVar3 | 0x7b83bb41ddab0ecd) + (uVar3 & 0x7b83bb41ddab0ecd));
  uVar3 = uRam0000000183386190 ^ 0x7b283c619dd24df2;
  uRam0000000183386168 = uRam0000000183386218 ^ uVar3 ^ 0x7bd3c382622dae0c;
  uRam00000001833861e0 = (uRam00000001833861e0 ^ uVar3) + 0x7bd3c382622dae0c ^ 0x9a41899ee8a1b1b4;
  uRam00000001833862d8 = (uRam00000001833862d8 * -0x75e16b7798be525b ^ uRam00000001833861e0) + uVar3
  ;
  uRam0000000183385f08 = uRam00000001833862d8 ^ uRam00000001833861e0;
  uRam0000000183385f50 = 0x7bd3c382622dae0c;
  uVar3 = (~uRam0000000183386270 + 0x7bd3c382622dae0d) *
          ((uRam0000000183386158 ^ 0x7bd3c382e60f8d29) +
          (uRam0000000183386158 & 0x7bd3c382e60f8d29) * 2);
  uVar3 = (uVar3 | uRam0000000183385f00) + (uVar3 & uRam0000000183385f00);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183385f20 =
       func_0x00018dd06700((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam00000001833861b8 = uRam00000001833860c0 << 0x24 | uRam00000001833860c0 >> 0x1c;
  uRam00000001833862c8 = uRam00000001833862c8 ^ uRam00000001833861b8 ^ 0x86b2a106c0cef600;
  uRam00000001833862b8 =
       (uRam00000001833862b8 * 0x494b4f3a1830c893 ^ uRam00000001833862c8) + uRam00000001833861b8;
  uRam0000000183386028 = uRam00000001833862b8 ^ uRam00000001833862c8;
  uRam0000000183386150 = 0;
  uVar3 = ~uRam0000000183386108 *
          ((uRam00000001833860a8 ^ 0xbb75f7f1f7dd929a) +
          (uRam00000001833860a8 & 0x3b75f7f1f7dd929a) * 2);
  uVar3 = (uVar3 | uRam0000000183385fe8) + (uVar3 & uRam0000000183385fe8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833861d8 =
       func_0x00018dd06700((uVar3 | 0x448a080e08226d65) + (uVar3 & 0x448a080e08226d65));
  uRam0000000183386030 =
       (uRam0000000183386030 ^ ~uRam00000001833861d8 & 0x1fffffffff) + 0x448a080e8c004e40 ^
       0xaf9e40e36c551f01;
  uRam0000000183386280 =
       (uRam0000000183386280 * -0x739998ea7d8d89fd ^ uRam0000000183386030) +
       (~uRam00000001833861d8 & 0x1fffffffff);
  uRam0000000183385ff0 = uRam0000000183386280 ^ uRam0000000183386030;
  uRam0000000183385fc8 = 0x448a080e8c004e40;
  uVar3 = (~uRam0000000183386068 + 0x448a080e8c004e41) *
          ((uRam0000000183385fa0 ^ 0xbb75f7f1f7dd929a) +
          (uRam0000000183385fa0 & 0x3b75f7f1f7dd929a) * 2);
  uVar3 = (uVar3 | uRam0000000183385f70) + (uVar3 & uRam0000000183385f70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183385fe8 =
       func_0x00018dd06700((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uVar3 = (uRam0000000183385fe8 ^ 0xbcf9135b5c14a1c0) >> 1 |
          uRam0000000183385fe8 ^ 0xbcf9135b5c14a1c0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam0000000183385fe8 ^ 0x78ce4aa2feb107f ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20;
  uRam0000000183386080 = uRam0000000183386080 ^ uVar3 ^ 0xe6c25260d52cb6fb;
  uRam0000000183386188 = (uRam0000000183386188 * 0x2efe841afa407803 ^ uRam0000000183386080) + uVar3;
  uRam0000000183385fc8 = uRam0000000183386188 ^ uRam0000000183386080;
  uRam00000001833861d0 = 0;
  uVar3 = ((uRam00000001833861d8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833861d8 & 0x84225cda) * 2) * -uRam00000001833862e8;
  uVar3 = (uVar3 | uRam0000000183385fe0) + (uVar3 & uRam0000000183385fe0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386008 =
       func_0x00018dd06700((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = uRam0000000183386008 << 0x3d | uRam0000000183386008 >> 3;
  uRam0000000183386058 = uRam0000000183386268 ^ uVar3 ^ 0x7fff;
  uRam00000001833860c8 = (uRam00000001833860c8 ^ uVar3) + 0x7fff ^ 0x9af2c75a77d6e455;
  uRam0000000183386048 = (uRam0000000183386048 * 0x5c096b51999f23f3 ^ uRam00000001833860c8) + uVar3;
  uRam00000001833860e0 = uRam0000000183386048 ^ uRam00000001833860c8;
  uRam0000000183386028 = 0x7fff;
  uVar3 = (~uRam0000000183385ff0 + 0x337555d153f7a19a) *
          ((uRam0000000183386040 ^ 0x337555d1d7d582bc) +
          (uRam0000000183386040 & 0x337555d1d7d582bc) * 2);
  uVar3 = (uVar3 | uRam0000000183386130) + (uVar3 & uRam0000000183386130);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386080 =
       func_0x00018dd06700((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uVar3 = uRam0000000183386080 << 2 | uRam0000000183386080 >> 0x3e;
  uRam0000000183385fb8 = uRam0000000183385fb8 ^ uVar3 ^ 0xd2f551246d1091cb;
  uRam0000000183385f98 =
       (uRam0000000183386090 * 0xe5fdf2d80ff3ec7 ^ uRam0000000183385fb8) + uVar3 ^
       uRam0000000183385fb8;
  uRam0000000183386090 = 0;
  uVar3 = ((uRam0000000183385f38 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183385f38 & 0x84225cda) * 2) * -uRam0000000183385fd8;
  uVar3 = (uVar3 | uRam0000000183385f70) + (uVar3 & uRam0000000183385f70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386008 =
       func_0x00018dd06700((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = (uRam0000000183386008 << 0x2d | uRam0000000183386008 >> 0x13) ^ 0x7fff;
  uRam0000000183386000 = uRam0000000183386220 ^ uVar3 ^ 0x7fff;
  uRam0000000183385fe8 = (uRam0000000183385fe8 ^ uVar3) + 0x7fff ^ 0x33d9155e53f39a25;
  uRam0000000183386170 = (uRam0000000183386170 * -0x4b6774e0c02346ef ^ uRam0000000183385fe8) + uVar3
  ;
  uRam0000000183386028 = uRam0000000183386170 ^ uRam0000000183385fe8;
  uRam0000000183386258 = 0x7fff;
  uVar3 = (~uRam0000000183386238 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183385f48) +
          ((param_4 ^ 0x84222325) & uRam0000000183385f48) * 2);
  uVar3 = (uVar3 | uRam0000000183386120) + (uVar3 & uRam0000000183386120);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183385fa8 =
       func_0x00018dd06700((param_4 ^ 0x84225cda | uVar3) + (uVar3 & (param_4 ^ 0x84225cda)));
  uVar3 = (param_4 ^ uRam0000000183385fa8) << 4 | (param_4 ^ uRam0000000183385fa8) >> 0x3c;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar6 = (ulonglong)uVar2;
  uRam00000001833860f0 = (uRam00000001833860f0 ^ uVar3) + uVar6 ^ 0xe87ce3caadaf554f;
  uRam0000000183386100 = (uRam0000000183386100 * -0x7928fbd833635701 ^ uRam00000001833860f0) + uVar3
  ;
  uRam0000000183385f58 = uRam0000000183386100 ^ uRam00000001833860f0;
  uVar7 = (ulonglong)param_3;
  uVar8 = uVar6 ^ 0x84222325;
  uVar3 = ((uRam0000000183386190 ^ uVar8) +
          (ulonglong)((uint)uRam0000000183386190 & (uint)uVar8) * 2) *
          (uVar7 - lRam0000000183386138);
  uVar3 = (uVar3 | uRam0000000183386070) + (uVar3 & uRam0000000183386070);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386088 = uVar6;
  uRam0000000183385fc8 =
       func_0x00018dd06700((uVar8 ^ uVar7 | uVar3) +
                           (ulonglong)((uint)(uVar8 ^ uVar7) & (uint)uVar3));
  uVar8 = (uVar6 + uVar7) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001833862e0 =
       (uRam00000001833862e0 ^ uVar6 ^ uRam0000000183385fc8) + uVar8 ^ 0x4428a6c89086ed59;
  uRam0000000183386118 =
       (uRam0000000183386118 * -0x2ad695ed1f32c479 ^ uRam00000001833862e0) +
       (uVar6 ^ uRam0000000183385fc8);
  uRam0000000183385f70 = uRam0000000183386118 ^ uRam00000001833862e0;
  uVar8 = uVar8 & 0xffffffff;
  uVar3 = (~uRam0000000183386180 + 0x2df9f6b1) *
          ((uRam0000000183385ff0 ^ 0xddd42681) +
          (ulonglong)((uint)uRam0000000183385ff0 & 0xddd42681) * 2);
  uVar3 = (uVar3 | uRam0000000183386220) + (uVar3 & uRam0000000183386220);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386290 = uVar8;
  uRam0000000183386150 =
       func_0x00018dd06700((uVar3 | 0xf02dd031) + (ulonglong)((uint)uVar3 & 0xf02dd031));
  uVar3 = uRam0000000183386150 >> 1 | uRam0000000183386150;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam0000000183386150 ^ 0x59f605a4;
  uRam0000000183385f68 = (uRam0000000183385f68 ^ uVar3) + 0x7dfff7b4 ^ 0x8f63ec874cb90d65;
  uRam0000000183385fe0 = (uRam0000000183385fe0 * 0x7828209af4675435 ^ uRam0000000183385f68) + uVar3;
  uRam00000001833860f8 = uRam0000000183385fe0 ^ uRam0000000183385f68;
  uRam0000000183386180 = 0x7dfff7b4;
  uVar3 = (uRam00000001833861d8 ^ _UNK_1823a7050) + uRam00000001833860a8 + 0x84222325;
  uVar7 = (uRam00000001833860a8 ^ _UNK_1823a7058) + uRam00000001833861d8 + 0xa475a530;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833861d8 ^ _UNK_1823a7050;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833860a8 ^ _UNK_1823a7058;
  uRam0000000183385f88 =
       func_0x00018dd06700((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833861d8 + 0xa475a530) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833860a8 + 0x84222325));
  uVar3 = (uRam0000000183385f88 ^ 0xa475a530) * -0x422519be822ea71f;
  uRam0000000183386060 = (uRam0000000183386060 ^ uVar3) - 0xa475a530 ^ 0x1a9809dc530bd6c;
  uRam00000001833860f8 = (uRam00000001833860f8 * -0x760f4f7f2ed9ad05 ^ uRam0000000183386060) + uVar3
  ;
  uRam0000000183386230 = uRam00000001833860f8 ^ uRam0000000183386060;
  uRam0000000183385f28 = 0x5b8a5ad0;
  uVar3 = (uRam00000001833860d8 ^ _UNK_1823a7060) + uRam0000000183386140 + 0x84224b73;
  uVar7 = (uRam0000000183386140 ^ _UNK_1823a7068) + uRam00000001833860d8 + 0xa475a530;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833860d8 ^ _UNK_1823a7060;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183386140 ^ _UNK_1823a7068;
  uRam0000000183385f38 =
       func_0x00018dd06700((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833860d8 + 0xa475a530) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183386140 + 0x84224b73));
  uVar3 = (ulonglong)(~(uint)uRam0000000183385f38 & 0x6856);
  uRam0000000183385fb0 = uRam0000000183386240 ^ uVar3 ^ 0xa4760d86;
  uRam00000001833861b0 = (uRam00000001833861b0 ^ uVar3) + 0xa4760d86 ^ 0x5d3a607468386fa0;
  uRam0000000183385fa0 = (uRam0000000183385fa0 * 0x245021ef629407a1 ^ uRam00000001833861b0) + uVar3;
  uRam0000000183386170 = 0xa4760d86;
  uVar3 = (~uRam0000000183386028 + 0x5b8a5ad1) *
          ((uRam0000000183386258 ^ 0x20542ea3) +
          (ulonglong)((uint)uRam0000000183386258 & 0x20542ea3) * 2);
  uVar3 = (uVar3 | uRam0000000183385f90) + (uVar3 & uRam0000000183385f90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183385f78 =
       func_0x00018dd06700((uVar3 | 0x7bde7473) + (ulonglong)((uint)uVar3 & 0x7bde7473));
  uVar3 = (uRam0000000183385f78 >> 0xd) * -0x22330da90bee6000;
  uRam0000000183386188 = uRam0000000183386080 ^ uVar3 ^ 0x100006856;
  uRam00000001833862f8 = (uRam00000001833862f8 ^ uVar3) + 0x100006856 ^ 0xcc0171f9d472896b;
  uRam0000000183385f38 = (uRam0000000183385f38 * -0x2cf42696b1f698c5 ^ uRam00000001833862f8) + uVar3
  ;
  uRam00000001833862e8 = uRam0000000183385f38 ^ uRam00000001833862f8;
  uRam0000000183386050 = 0x6856;
  uVar3 = (uRam0000000183386180 ^ _UNK_1823a7070) + uRam0000000183386198 + 0x84222325;
  uVar7 = (uRam0000000183386198 ^ _UNK_1823a7078) + uRam0000000183386180 + 0xb0ea25e4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183386180 ^ _UNK_1823a7070;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183386198 ^ _UNK_1823a7078;
  uRam0000000183386060 =
       func_0x00018dd06700((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183386180 + 0xb0ea25e4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183386198 + 0x84222325));
  uVar3 = uRam0000000183386060 * 0x332092a22f525433 & 0x7ffffffffffff;
  uRam0000000183386070 = (uRam0000000183386070 ^ uVar3) - 0xb0ea25e4 ^ 0xbb6e0cafd750b22f;
  uRam0000000183386078 = (uRam0000000183386078 * 0x36cc0961da9afa53 ^ uRam0000000183386070) + uVar3;
  uRam0000000183385f08 = uRam0000000183386078 ^ uRam0000000183386070;
  uRam0000000183386100 = 0x4f15da1c;
  uRam0000000183386158 = func_0x00018dd06700(uRam0000000183385fd8 + 0x61ffeb6cffb7ff ^ 0x9a);
  uVar3 = (uRam0000000183386158 >> 0x12) * 0x3d10f2dfa48c0000;
  uRam0000000183386238 = uRam0000000183385f80 ^ uVar3 ^ 0xb0ea8e3a;
  uRam0000000183385fb0 = (uRam0000000183385fb0 ^ uVar3) + 0xb0ea8e3a ^ 0xd73ed0b0a8a0e99c;
  uRam0000000183386208 = (uRam0000000183386208 * -0x4228bc893d27b237 ^ uRam0000000183385fb0) + uVar3
  ;
  uRam00000001833861a0 = uRam0000000183386208 ^ uRam0000000183385fb0;
  uRam0000000183385f68 = 0xb0ea8e3a;
  uRam00000001833861b0 = func_0x00018dd06700(uRam0000000183385f20 ^ 0xff90ffd900ff2c49);
  uVar3 = uRam00000001833861b0 ^ 0xb0ea8e3a;
  uRam0000000183386198 = uRam0000000183386150 ^ uVar3 ^ 0x100006856;
  uRam00000001833861f8 = (uRam00000001833861f8 ^ uVar3) + 0x100006856 ^ 0x896d5ae4d76fe310;
  uRam0000000183385fd0 = (uRam0000000183385fd0 * 0x1ad5876650406169 ^ uRam00000001833861f8) + uVar3;
  uRam00000001833861d8 = uRam0000000183385fd0 ^ uRam00000001833861f8;
  uRam0000000183385fd8 = 0x6856;
  uRam0000000183386130 = func_0x00018dd06700(uRam0000000183385f48 ^ 0xff53004202fff0a6);
  uRam0000000183386068 =
       (uRam0000000183386068 ^ uRam0000000183386130) - 0xc6119620 ^ 0x3d12a59dbbfb7ae3;
  uRam0000000183385f70 =
       (uRam0000000183385f70 * -0x124c0a1aef2894af ^ uRam0000000183386068) + uRam0000000183386130;
  uRam00000001833862b0 = uRam0000000183385f70 ^ uRam0000000183386068;
  uRam0000000183386050 = 0x39ee69e0;
  uRam0000000183386238 = func_0x00018dd06700(uRam00000001833860c0 + 0xbb003e4efff2ff ^ 0x55);
  uVar3 = (ulonglong)(~(uint)uRam0000000183386238 & 0x6856);
  uRam0000000183386228 = uRam0000000183386250 ^ uVar3 ^ 0xc611fe76;
  uRam0000000183386230 = (uRam0000000183386230 ^ uVar3) + 0xc611fe76 ^ 0xd65171eaed0407ee;
  uRam0000000183386220 = (uRam0000000183386220 * -0x3bc9f4e3b9cd75d1 ^ uRam0000000183386230) + uVar3
  ;
  uRam0000000183386110 = uRam0000000183386220 ^ uRam0000000183386230;
  uRam0000000183385ff8 = 0xc611fe76;
  uVar3 = (~uRam00000001833862e8 + 0x39ee69e1) *
          ((uRam0000000183385f08 ^ 0x4233dd53) +
          (ulonglong)((uint)uRam0000000183385f08 & 0x4233dd53) * 2);
  uVar3 = (uVar3 | uRam0000000183386208) + (uVar3 & uRam0000000183386208);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386270 =
       func_0x00018dd06700((uVar3 | 0x7bddb4b3) + (ulonglong)((uint)uVar3 & 0x7bddb4b3));
  uVar3 = uRam0000000183386270 * -0x6108606469fd9bf7;
  uRam0000000183386038 = uRam0000000183386050 ^ uVar3 ^ 0x100006856;
  uRam0000000183386168 = (uRam0000000183386168 ^ uVar3) + 0x100006856 ^ 0x26dd53d9d569367f;
  uRam00000001833861c8 = (uRam00000001833861c8 * 0xb9b13ce1294fed7 ^ uRam0000000183386168) + uVar3;
  uRam0000000183385f10 = uRam00000001833861c8 ^ uRam0000000183386168;
  uRam0000000183386258 = 0x6856;
  uRam00000001833860d0 = func_0x00018dd06700(uRam0000000183385fe8 ^ 0x3a0032d30079a0);
  uVar3 = (uRam00000001833860d0 ^ 0xfd800000) & 0xffffffffff800000 ^ 0xcc578ec4;
  uRam0000000183386258 = (uRam0000000183386258 ^ uVar3) + 0xb1a87970 ^ 0xfbe387f0b22018ea;
  uRam00000001833862f0 = (uRam00000001833862f0 * 0x1de7b580eb12a67f ^ uRam0000000183386258) + uVar3;
  uRam0000000183386090 = uRam00000001833862f0 ^ uRam0000000183386258;
  uRam00000001833862e0 = 0xb1a87970;
  uVar3 = (~uRam00000001833860f8 + 0xcc578ec5) *
          ((uRam0000000183386288 ^ 0xf9ddd491) +
          (ulonglong)((uint)uRam0000000183386288 & 0xf9ddd491) * 2);
  uVar3 = (uVar3 | uRam0000000183386280) + (uVar3 & uRam0000000183386280);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386010 =
       func_0x00018dd06700((uVar3 | 0x358a5a55) + (ulonglong)((uint)uVar3 & 0x358a5a55));
  uVar3 = (uRam0000000183386010 ^ 0x649311a5118b7dd0) * 0xf72ae5fd7b466f1;
  uRam00000001833862d0 = (uRam00000001833862d0 ^ uVar3) + 0x4c578684 ^ 0xc755ab8263c85c3f;
  uRam0000000183386030 = (uRam0000000183386030 * 0x55edb2aceaee5861 ^ uRam00000001833862d0) + uVar3;
  uRam00000001833861e0 = uRam0000000183386030 ^ uRam00000001833862d0;
  uRam0000000183386228 = uRam00000001833860f0 ^ 0x4c578684;
  uRam0000000183386040 = 0x4c578684;
  uRam0000000183385fa8 = func_0x00018dd06700(uRam0000000183386110 ^ 0x50ff9b22ffda23);
  uVar3 = uRam0000000183385fa8 << 8 | (uRam0000000183385fa8 & 0x7fffffffffffffff) >> 0x38;
  uRam0000000183386218 = uRam0000000183386060 ^ uVar3 ^ 0x14a578678;
  uRam00000001833862d8 = (uRam00000001833862d8 ^ uVar3) + 0x14a578678 ^ 0x2f413628a4e8372c;
  uRam0000000183386098 = (uRam0000000183386098 * -0x7de8529516c8a109 ^ uRam00000001833862d8) + uVar3
  ;
  uRam00000001833862f0 = uRam0000000183386098 ^ uRam00000001833862d8;
  uRam0000000183386150 = 0x4a578678;
  uVar3 = (uRam0000000183386228 ^ _UNK_1823a7080) + uRam00000001833862a0 + 0xce75a55d;
  uVar7 = (uRam00000001833862a0 ^ _UNK_1823a7088) + uRam0000000183386228 + 0x4a578678;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183386228 ^ _UNK_1823a7080;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833862a0 ^ _UNK_1823a7088;
  uRam0000000183385f38 =
       func_0x00018dd06700((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183386228 + 0x4a578678) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833862a0 + 0xce75a55d));
  uVar3 = uRam0000000183385f38 >> 1 | uRam0000000183385f38;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam0000000183386148 =
       0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
       uRam0000000183385f38;
  uRam00000001833861f8 = uRam00000001833861f8 ^ uRam0000000183386148 ^ 0x66805c6ac657d270;
  uRam0000000183386110 =
       (uRam0000000183386110 * -0x3b92f681c6c65a33 ^ uRam00000001833861f8) + uRam0000000183386148;
  uRam0000000183386058 = uRam0000000183386110 ^ uRam00000001833861f8;
  uRam0000000183385f40 = 0;
  uRam00000001833862b8 = func_0x00018dd06700(lRam0000000183386128 + 0x270001a1ffddffU ^ 0x4a);
  uVar3 = (ulonglong)((uint)uRam00000001833862b8 & 0x7dfff7b4);
  uRam00000001833860c0 = (uRam00000001833860c0 ^ uVar3) + 0x8200084b ^ 0xc4b1f7eb477f5108;
  uRam0000000183385fc0 = (uRam0000000183385fc0 * 0x21f5783f8e179983 ^ uRam00000001833860c0) + uVar3;
  uRam0000000183386198 = uRam0000000183385fc0 ^ uRam00000001833860c0;
  uRam0000000183385fe0 = 0x8200084b;
  uVar3 = (~uRam00000001833861d8 + 0x8200084c) *
          ((uRam00000001833860f0 ^ 0xf9ddd491) +
          (ulonglong)((uint)uRam00000001833860f0 & 0xf9ddd491) * 2);
  uVar3 = (uVar3 | uRam0000000183386110) + (uVar3 & uRam0000000183386110);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183386098 =
       func_0x00018dd06700((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda));
  uVar7 = uRam0000000183386098 ^ 0xffffffff;
  uVar3 = uVar7 >> 1 | uVar7;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar7;
  uRam0000000183386240 = uRam0000000183386240 ^ uVar7 ^ 0xcb62cc28e5d34a38;
  uRam00000001833862c0 = (uRam00000001833862c0 * -0x3846a287f88ac7bf ^ uRam0000000183386240) + uVar7
  ;
  uRam0000000183386218 = uRam00000001833862c0 ^ uRam0000000183386240;
  lRam0000000183386128 = 0;
  uRam0000000183386170 = func_0x00018dd06700(uRam0000000183386098 ^ 0x3b0084330021b3);
  uVar3 = (ulonglong)(~(uint)uRam0000000183386170 & 0x6856) << 0x22;
  uRam0000000183385fd8 = uRam0000000183386140 ^ uVar3 ^ 0x6856;
  uRam0000000183386288 = (uRam0000000183386288 ^ uVar3) + 0x6856 ^ 0x97e9f35f100fffbd;
  uRam0000000183386008 = (uRam0000000183386008 * -0x5a438212dd788419 ^ uRam0000000183386288) + uVar3
  ;
  uRam0000000183386000 = uRam0000000183386008 ^ uRam0000000183386288;
  uRam0000000183385f38 = 0x6856;
  uVar3 = (uRam0000000183386130 ^ _UNK_1823a7090) + uRam0000000183385fc0 + 0xddd42681;
  uVar7 = (uRam0000000183385fc0 ^ _UNK_1823a7098) + uRam0000000183386130 + 0x59f605a4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183386130 ^ _UNK_1823a7090;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183385fc0 ^ _UNK_1823a7098;
  uRam0000000183385fe0 =
       func_0x00018dd06700((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183386130 + 0x59f605a4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183385fc0 + 0xddd42681));
  uRam00000001833861f8 =
       uRam0000000183386180 ^ uRam0000000183385fe0 & 0xfffffffffffffffe ^ 0xd7ff944c2361b913;
  uRam0000000183386100 =
       (uRam0000000183386100 * 0x2ba752c4ad8d2411 ^ uRam00000001833861f8) +
       (uRam0000000183385fe0 & 0xfffffffffffffffe);
  uRam00000001833861f8 = uRam0000000183386100 ^ uRam00000001833861f8;
  auVar4._8_8_ = _UNK_1823a70a8;
  auVar4._0_8_ = uVar8 ^ 0x84222325;
  uRam0000000183386200 = uRam0000000183386190;
  auVar5 = pshufb(auVar4 ^ _UNK_1823a70b0,_UNK_1800170c0);
  uRam0000000183386180 = 0;
  uVar7 = auVar5._8_8_ + auVar5._0_8_;
  uVar3 = uVar7 + uRam0000000183385f18;
  if (auVar5._4_4_ < 0) {
    uVar3 = uRam0000000183385f28 ^ uVar7;
  }
  uRam0000000183385fb0 = func_0x00018dd06700(SUB161(auVar4 ^ _UNK_1823a70b0,5) ^ uVar3);
  uRam00000001833861c8 = uVar8 ^ 0x6856;
  uRam00000001833862a0 =
       (uRam00000001833862a0 ^ uRam0000000183385fb0 & 0x7ffffffffffff) + uRam00000001833861c8 ^
       0x1e3ae9ec65e11834;
  uRam00000001833862d8 =
       (uRam00000001833862d8 * 0x34ae11d764570281 ^ uRam00000001833862a0) +
       (uRam0000000183385fb0 & 0x7ffffffffffff);
  uRam0000000183386180 = uRam00000001833862d8 ^ uRam00000001833862a0;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xaaf7,0x1e2);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dcfd6aa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823a51c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dN; aoq (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18dd06790, runtime 6ffff5916790) =====

void FUN_18dd06790(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018dd067db did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823a71e0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dN; aor (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18dd077a0, runtime 6ffff59177a0) =====

void FUN_18dd077a0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dd07829 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823a77a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



