// ===== STITCHED CORPUS: sixtwo.dN =====
// handlers: 6  continuation blocks: 58  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x23a7020', '0x23a7028', '0x23a7030', '0x23a7038', '0x23a7040', '0x23a7048', '0x23a7050', '0x23a7058', '0x23a7060', '0x23a7068', '0x23a7070', '0x23a7078', '0x23a7080', '0x23a7088', '0x23a7090', '0x23a7098', '0x23a70a8', '0x23a70b0', '0x23aa378']

// ===== Lsixtwo/dN; _086a0a1adaee57dcf039f55a4eea9fca ()V (handler @ image 18dd0a4b0, runtime 6ffff591a4b0) =====

void FUN_18dd0a4b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dd0a598 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823a87b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dN; aon (Lsixtwo/gz;)V (handler @ image 18dcf70e0, runtime 6ffff59070e0) =====

void FUN_18dcf70e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xaaf7,0x1e2)
      /* POOL[0xaaf7,0x1e2]: lass_239; | OKemK | xmVgM | VTfqp | ans | sixtwo/dN | YAFsA | aoo | field_1869 | mOyJK | sixtwo/gz | bbK | (Lnet/minecraft/class_304;)Z | xzqVc | ievSW | aop | NTPwK | sixtwo/dO | lIFPa | dcw | OMbpn | aoJ | ERHWx | byQPn | aow | aoz | LjWLs | net/minecraft/class_490 | NTcLD | aox | sixtwo/iX | HpSlL | [Lnet/minecraft/class_304; | method_7368 | method_5438 | (I)Lnet/minecraft/class_1799; | vASOe | [Lnet/minecraft/class_1799; | sixtwo/gq | bbq | ()Lnet/minecraft/class_465; | field_8037 | Lnet/minecraft/class_1799; | aoB | method_7972 | bbp | ()Lsixtwo/lC; | aoA | (Lmixin/a */;
  cVar1 = JNI->ExceptionCheck(param_1);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xaaf7,0x1e2)
      /* POOL[0xaaf7,0x1e2]: lass_239; | OKemK | xmVgM | VTfqp | ans | sixtwo/dN | YAFsA | aoo | field_1869 | mOyJK | sixtwo/gz | bbK | (Lnet/minecraft/class_304;)Z | xzqVc | ievSW | aop | NTPwK | sixtwo/dO | lIFPa | dcw | OMbpn | aoJ | ERHWx | byQPn | aow | aoz | LjWLs | net/minecraft/class_490 | NTcLD | aox | sixtwo/iX | HpSlL | [Lnet/minecraft/class_304; | method_7368 | method_5438 | (I)Lnet/minecraft/class_1799; | vASOe | [Lnet/minecraft/class_1799; | sixtwo/gq | bbq | ()Lnet/minecraft/class_465; | field_8037 | Lnet/minecraft/class_1799; | aoB | method_7972 | bbp | ()Lsixtwo/lC; | aoA | (Lmixin/a */;
  cVar1 = JNI->ExceptionCheck(param_1);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dd07829 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823a77a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xdcf71a7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcf71a7(void)

{
  FUN_190ddce00();
  (*_DAT_1823a4898)();
  return;
}


// ----- block @ rva 0xdcf9549 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcf9549(void)

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


// ----- block @ rva 0xdcf95db -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcf95db(void)

{
  (*_DAT_1823a4868)();
  return;
}


// ----- block @ rva 0xdcf97c1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcf97c1(void)

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


// ----- block @ rva 0xdcf9f57 -----

void FUN_18dcf9f57(void)

{
  return;
}


// ----- block @ rva 0xdcfa2e0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfa2e0(void)

{
  int in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdcfa573 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfa573(void)

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


// ----- block @ rva 0xdcfa7c7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfa7c7(void)

{
  int in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdcfa97a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfa97a(void)

{
  (*_DAT_1823a4998)();
  return;
}


// ----- block @ rva 0xdcfaa1a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfaa1a(void)

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


// ----- block @ rva 0xdcfab53 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfab53(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_1823a4a28)();
  return;
}


// ----- block @ rva 0xdcfab62 -----

void FUN_18dcfab62(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xdcfd6ad -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfd6ad(void)

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


// ----- block @ rva 0xdcfd7eb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfd7eb(void)

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


// ----- block @ rva 0xdcfd84a -----

void FUN_18dcfd84a(void)

{
  return;
}


// ----- block @ rva 0xdcfd866 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfd866(void)

{
  longlong lVar1;
  longlong *unaff_R13;
  
  lVar1 = (**(code **)(unaff_R13 + JNI->GetObjectArrayElement /*0x568*/))();
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdcfd940 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfd940(void)

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


// ----- block @ rva 0xdcfe0e5 -----

undefined8 thunk_FUN_18dcfe89f(void)

{
  longlong *unaff_R14;
  
  (**(code **)(unaff_R14 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xdcfe30f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dcfe30f(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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


// ----- block @ rva 0xdcfe364 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfe364(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000086;
  
  uStack0000000000000086 = in_stack_00000058;
  (**(code **)(in_stack_00000030 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdcfe7af -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfe7af(void)

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


// ----- block @ rva 0xdcfee49 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dcfee49(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  cVar1 = (**(code **)(unaff_RBX + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd0643b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd0643b(void)

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


// ----- block @ rva 0xdd067de -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd067de(void)

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


// ----- block @ rva 0xdd06832 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd06832(void)

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


// ----- block @ rva 0xdd06afd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd06afd(void)

{
  int in_EAX;
  int in_stack_00000048;
  
  switch(in_stack_00000048 < 0 || in_EAX <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd06d59 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd06d59(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1823a7748)();
  return;
}


// ----- block @ rva 0xdd06ec3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd06ec3(void)

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


// ----- block @ rva 0xdd06fd0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd06fd0(void)

{
  FUN_190dd72e0();
  (*_DAT_1823a75f8)();
  return;
}


// ----- block @ rva 0xdd07227 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd07227(void)

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


// ----- block @ rva 0xdd073c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd073c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_1823a7708)();
  return;
}


// ----- block @ rva 0xdd075de -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd075de(void)

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


// ----- block @ rva 0xdd07671 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd07671(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1823a72c8)();
  return;
}


// ----- block @ rva 0xdd076a5 -----

void FUN_18dd076a5(void)

{
  return;
}


// ----- block @ rva 0xdd076b4 -----

void FUN_18dd076b4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xdd0782c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd0782c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1823a8078)();
  return;
}


// ----- block @ rva 0xdd08345 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd08345(void)

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


// ----- block @ rva 0xdd08a59 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd08a59(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000ba;
  undefined2 uStack00000000000000be;
  undefined4 uStack00000000000000f0;
  
  uStack00000000000000f0 = 0x76902871;
  uVar1 = rdtsc();
  uStack00000000000000ba = 0x3a0020;
  uStack00000000000000be = 0x20;
  (*_DAT_1823a7ee8)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}


// ----- block @ rva 0xdd08fd8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd08fd8(void)

{
  (*_DAT_1823a84e8)();
  return;
}


// ----- block @ rva 0xdd092ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd092ba(void)

{
  FUN_190ddfc90();
  (*_DAT_1823a7b98)();
  return;
}


// ----- block @ rva 0xdd0948b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd0948b(void)

{
  FUN_190dd72e0();
  (*_DAT_1823a8128)();
  return;
}


// ----- block @ rva 0xdd097c6 -----

void FUN_18dd097c6(void)

{
  return;
}


// ----- block @ rva 0xdd097da -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd097da(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1823a7db8)();
  return;
}


// ----- block @ rva 0xdd0993f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd0993f(void)

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


// ----- block @ rva 0xdd09cfa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd09cfa(void)

{
  FUN_190dd72e0();
  (*_DAT_1823a79f8)();
  return;
}


// ----- block @ rva 0xdd0a132 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd0a132(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1823a7ce8)();
  return;
}


// ----- block @ rva 0xdd0a304 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd0a304(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1823a8068)();
  return;
}


// ----- block @ rva 0xdd0a36a -----

void FUN_18dd0a36a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xdd0a59b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd0a5f1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd0a59b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdd14bf1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd14bf1(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 2;
  uStack0000000000000078 = 0x28;
  uStack0000000000000070 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_R14 >> 0x28);
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000068 < 0 || iVar1 <= iStack0000000000000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd187ea -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd187ea(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000058;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  auVar4._8_4_ = param_1 << 0x18;
  auVar4._0_8_ = in_stack_00000058 ^ 0x84222325;
  auVar4._12_4_ = 0;
  auVar5 = pshufb(auVar4 ^ _DAT_1823aa290,_DAT_1800170c0);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_1833868b0;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_183386600 ^ uVar3;
  }
  _DAT_1833868b8 = func_0x00018dd23860(SUB161(auVar4 ^ _DAT_1823aa290,5) ^ uVar2);
  uVar2 = (_DAT_1833868b8 & 0x7ffffffff) << 0x10;
  uVar3 = (_DAT_1833868b8 & 0x7ffffffff) << 0xf | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar2;
  _DAT_1833865e0 = in_stack_00000058 | (uint)(param_1 << 0x18);
  _DAT_1833865f8 = (_DAT_1833865f8 ^ uVar2) + _DAT_1833865e0 ^ 0xea1e216b87e21c2e;
  _DAT_183386770 = (_DAT_183386770 * 0x6361eeb616e9619f ^ _DAT_1833865f8) + uVar2;
  _DAT_1833867e0 = _DAT_183386770 ^ _DAT_1833865f8;
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))(extraout_XMM0_Qa,in_stack_00000038);
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd1b0bf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd1b0bf(void)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *unaff_RBX;
  longlong *unaff_RSI;
  ulonglong uVar3;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000038;
  int iStack0000000000000058;
  int in_stack_00000068;
  
  lVar2 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  bVar1 = *(byte *)(lVar2 + in_stack_00000068);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar2,2);
  uVar4 = (_DAT_183386850 ^ _DAT_1823aa370) + _DAT_183386350 + 0xf3a4e64f;
  uVar5 = (_DAT_183386350 ^ _UNK_1823aa378) + _DAT_183386850 + 0xa77b1c0d;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183386850 ^ _DAT_1823aa370;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183386350 ^ _UNK_1823aa378;
  uVar3 = (ulonglong)bVar1;
  _DAT_183386350 =
       func_0x00018dd23860((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183386850 + 0xa77b1c0d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183386350 + 0xf3a4e64f));
  uVar4 = ((_DAT_183386350 & 0x3fffffffffff) >> 8) << 0xd | (_DAT_183386350 & 0xff) << 5;
  _DAT_183386728 = (_DAT_183386728 ^ uVar4) + 0xd0fdd967 ^ 0xc660576a67b304da;
  _DAT_183386520 = (_DAT_183386520 * 0x6169050ef40d74c9 ^ _DAT_183386728) + uVar4;
  _DAT_1833863a8 = _DAT_183386520 ^ _DAT_183386728;
  _DAT_1833866d0 = 0xd0fdd967;
  uVar4 = (~_DAT_183386600 + 0xccaa8d8d) *
          ((_DAT_183386678 ^ 0x84222325) + (ulonglong)((uint)_DAT_183386678 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183386558) + (uVar4 & _DAT_183386558);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833867f8 = func_0x00018dd23860((uVar4 | 0x4888aea9) + (ulonglong)((uint)uVar4 & 0x4888aea9))
  ;
  _DAT_1833866a0 =
       (_DAT_1833866a0 ^ _DAT_1833867f8 & 0x7fffffffffffffff) - 0xccaa8d8c ^ 0xc7d349de530561df;
  _DAT_183386440 =
       (_DAT_183386440 * 0x6295521143720e09 ^ _DAT_1833866a0) +
       (_DAT_1833867f8 & 0x7fffffffffffffff);
  _DAT_183386508 = _DAT_183386440 ^ _DAT_1833866a0;
  _DAT_1833864f8 = 0x33557274;
  _DAT_1833868b0 = func_0x00018dd23860(_DAT_183386338 ^ 0xff61ffb831ff8748);
  uVar4 = (_DAT_1833868b0 ^ 0x80000000) & 0xffffffff80000000;
  _DAT_183386448 = _DAT_1833863a0 ^ uVar4 ^ 0xccaa8e8b;
  _DAT_183386478 = (_DAT_183386478 ^ uVar4) + 0xccaa8e8b ^ 0xbc70ce8dc7dcd400;
  _DAT_183386830 = (_DAT_183386830 * -0x784a8205418db25b ^ _DAT_183386478) + uVar4;
  _DAT_183386660 = _DAT_183386830 ^ _DAT_183386478;
  _DAT_1833867d8 = 0xccaa8e8b;
  _DAT_1833863a0 = func_0x00018dd23860(_DAT_183386378 ^ 0xff5affa4d5ff4c41);
  _DAT_183386750 = _DAT_183386558 ^ _DAT_1833863a0 ^ 0x1000000ff;
  _DAT_1833863b8 = (_DAT_1833863b8 ^ _DAT_1833863a0) + 0x1000000ff ^ 0xe540ca0a49c6178e;
  _DAT_1833868f0 = (_DAT_1833868f0 * -0x33afc6b9bb178749 ^ _DAT_1833863b8) + _DAT_1833863a0;
  _DAT_1833864f8 = _DAT_1833868f0 ^ _DAT_1833863b8;
  _DAT_1833867c0 = 0xff;
  uVar4 = (~_DAT_183386460 + 0x1a858501) *
          ((_DAT_183386568 ^ 0x84222325) + (ulonglong)((uint)_DAT_183386568 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183386408) + (uVar4 & _DAT_183386408);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833865b0 = func_0x00018dd23860((uVar4 | 0x9ea7a625) + (ulonglong)((uint)uVar4 & 0x9ea7a625))
  ;
  _DAT_1833866f0 = _DAT_1833866f0 - 0x1a858500 ^ 0xe5e949ce79288e77;
  _DAT_183386460 = _DAT_1833867e0 * -0x4a190d6e60f077b5;
  _DAT_1833867e0 = _DAT_183386460 ^ _DAT_1833866f0;
  _DAT_183386318 = 0xe57a7b00;
  _DAT_183386488 = func_0x00018dd23860(_DAT_183386398 ^ 0xa200793600a4e7);
  uVar4 = _DAT_183386488 ^ 0x1a8585ff;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4 ^
          0x1a858500;
  _DAT_183386730 = _DAT_1833865c8 ^ uVar4 ^ 0x1a8585ff;
  _DAT_1833863c8 = (_DAT_1833863c8 ^ uVar4) + 0x1a8585ff ^ 0xa7402b086cf08735;
  _DAT_183386608 = (_DAT_183386608 * 0x31c3d527736c581f ^ _DAT_1833863c8) + uVar4;
  _DAT_183386658 = _DAT_183386608 ^ _DAT_1833863c8;
  _DAT_1833866a0 = 0x1a8585ff;
  uVar4 = (~_DAT_183386850 + 0xfb3ed1d9) *
          ((_DAT_183386598 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386598 & 0x842223da) * 2);
  uVar4 = (uVar4 | _DAT_183386368) + (uVar4 & _DAT_183386368);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183386398 = func_0x00018dd23860((uVar4 | 0x7f1cf202) + (ulonglong)((uint)uVar4 & 0x7f1cf202))
  ;
  uVar4 = _DAT_183386398 ^ 0xfb3ed1ff;
  _DAT_183386470 = _DAT_183386608 ^ uVar4 ^ 0xfb3ed2d7;
  _DAT_183386320 = (_DAT_183386320 ^ uVar4) + 0xfb3ed2d7 ^ 0x4ec7414476c6d20a;
  _DAT_183386810 = (_DAT_183386810 * -0x682e06906f4b7513 ^ _DAT_183386320) + uVar4;
  _DAT_183386380 = _DAT_183386810 ^ _DAT_183386320;
  _DAT_183386448 = 0xfb3ed2d7;
  _DAT_1833863d0 = func_0x00018dd23860(_DAT_183386388 ^ 0xffc10069b80017b9);
  uVar4 = (_DAT_1833863d0 << 8 | _DAT_1833863d0 >> 0x38) >> 6 | (_DAT_1833863d0 >> 0x38) << 0x3a;
  _DAT_183386468 = _DAT_1833863d0 ^ uVar4 ^ 0x1cff59561;
  _DAT_183386570 = (_DAT_183386570 ^ uVar4) + 0x1cff59561 ^ 0x7310e950f653ee72;
  _DAT_1833868a8 = (_DAT_1833868a8 * 0x25343202fdbbb2a1 ^ _DAT_183386570) + uVar4;
  _DAT_183386690 = _DAT_1833868a8 ^ _DAT_183386570;
  _DAT_183386530 = 0xcff59561;
  _DAT_183386670 = func_0x00018dd23860(_DAT_183386760 + 0xffbf009697ffd7ffU ^ 0xc5);
  _DAT_1833867c8 = (_DAT_1833867c8 ^ _DAT_183386670) + 0x2e0a629d ^ 0x913527515ee0ad42;
  _DAT_183386580 = (_DAT_183386580 * 0x79d5c1df2708d14b ^ _DAT_1833867c8) + _DAT_183386670;
  _DAT_183386648 = _DAT_183386580 ^ _DAT_1833867c8;
  _DAT_183386438 = 0x2e0a629d;
  _DAT_183386418 = func_0x00018dd23860(_DAT_1833863d0 + 0xffbeffa647ffe7ff ^ 0xad);
  uVar4 = (_DAT_183386418 ^ 0xfee00000) & 0xffffffffffe00000;
  _DAT_183386440 = (_DAT_183386440 ^ uVar4) + 0xd0f59962 ^ 0xbff90ae0c8136b0d;
  _DAT_1833866c8 = (_DAT_1833866c8 * -0x5063f3f80e1c07fd ^ _DAT_183386440) + uVar4;
  _DAT_183386548 = _DAT_1833866c8 ^ _DAT_183386440;
  _DAT_183386608 = 0xd0f59962;
  uVar4 = (_DAT_183386820 ^ _DAT_1823aa380) + _DAT_1833863b0 + 0xaa2841b8;
  uVar5 = (_DAT_1833863b0 ^ _UNK_1823aa388) + _DAT_183386820 + 0xa1eb32c4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183386820 ^ _DAT_1823aa380;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833863b0 ^ _UNK_1823aa388;
  _DAT_183386810 =
       func_0x00018dd23860((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183386820 + 0xa1eb32c4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833863b0 + 0xaa2841b8));
  uVar4 = _DAT_183386810 ^ 0xafeb72dd;
  _DAT_1833866c8 = _DAT_183386800 ^ uVar4 ^ 0xcff59561;
  _DAT_1833865a0 = (_DAT_1833865a0 ^ uVar4) + 0xcff59561 ^ 0xb4c88bd9fb57d94b;
  _DAT_1833868e0 = (_DAT_1833868e0 * -0x66b851f7898b3ee3 ^ _DAT_1833865a0) + uVar4;
  _DAT_1833865f0 = _DAT_1833868e0 ^ _DAT_1833865a0;
  _DAT_1833867b8 = 0xcff59561;
  _DAT_183386770 = func_0x00018dd23860(_DAT_183386538 + 0x1f00841cffddff ^ 0xc0);
  uVar4 = (ulonglong)(~(uint)_DAT_183386770 & 0xcff59561);
  _DAT_1833864e8 = uVar4 << 6;
  uVar4 = uVar4 << 5 | _DAT_1833864e8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar5 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar5 >> 0x10 | uVar5;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_1833864e8 =
       (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       _DAT_1833864e8;
  _DAT_183386520 = _DAT_183386520 ^ _DAT_1833864e8 ^ 0xbd67f1c88a5227f0;
  _DAT_183386350 = (_DAT_183386350 * -0x27fa00bbadb55ff1 ^ _DAT_183386520) + _DAT_1833864e8;
  _DAT_183386610 = _DAT_183386350 ^ _DAT_183386520;
  _DAT_1833866c0 = 0;
  uVar4 = ((_DAT_183386548 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386548 & 0x842223da) * 2) *
          -_DAT_183386480;
  uVar4 = (uVar4 | _DAT_183386420) + (uVar4 & _DAT_183386420);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183386590 = func_0x00018dd23860((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  uVar4 = (ulonglong)((uint)_DAT_183386590 ^ 0xff) << 0x2f | _DAT_183386590 >> 0x11;
  _DAT_1833864b8 = _DAT_183386538 ^ uVar4 ^ 0xff;
  _DAT_1833866f8 = (_DAT_1833866f8 ^ uVar4) + 0xff ^ 0x63f88df0b0af4873;
  _DAT_183386400 = (_DAT_183386400 * 0x7bdb258036fc3fab ^ _DAT_1833866f8) + uVar4;
  _DAT_183386300 = _DAT_183386400 ^ _DAT_1833866f8;
  _DAT_1833867c8 = 0xff;
  _DAT_183386858 = func_0x00018dd23860(_DAT_1833865f8 ^ 0x230084e00019d4);
  _DAT_183386480 = (_DAT_183386480 ^ _DAT_183386858 ^ 0xfef7bbfa) + 0x1084405 ^ 0x31817033d51fb764;
  _DAT_183386460 =
       (_DAT_183386460 * 0x542d95ac4d880ec5 ^ _DAT_183386480) + (_DAT_183386858 ^ 0xfef7bbfa);
  _DAT_1833867e0 = _DAT_183386460 ^ _DAT_183386480;
  _DAT_1833868f8 = 0x1084405;
  uVar4 = (_DAT_183386430 ^ _DAT_1823aa390) + _DAT_183386510 + 0x7ad598df;
  uVar5 = (_DAT_183386510 ^ _UNK_1823aa398) + _DAT_183386430 + 0x1084405;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183386430 ^ _DAT_1823aa390;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183386510 ^ _UNK_1823aa398;
  _DAT_1833865a0 =
       func_0x00018dd23860((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183386430 + 0x1084405) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183386510 + 0x7ad598df));
  _DAT_183386878 = _DAT_183386878 ^ _DAT_1833865a0 & 0x7fffffffff ^ 0x9ca15f715df0724e;
  _DAT_1833867a8 =
       (_DAT_1833867a8 * 0x76301fb24a3618b7 ^ _DAT_183386878) + (_DAT_1833865a0 & 0x7fffffffff);
  _DAT_1833866b8 = _DAT_1833867a8 ^ _DAT_183386878;
  _DAT_183386768 = 0;
  uVar4 = ((_DAT_1833867d0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833867d0 & 0x842223da) * 2) *
          -_DAT_183386518;
  uVar4 = (uVar4 | _DAT_183386830) + (uVar4 & _DAT_183386830);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183386390 = func_0x00018dd23860((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  uVar4 = _DAT_183386390 << 0x38 | _DAT_183386390 >> 8;
  _DAT_183386680 = _DAT_1833863b0 ^ uVar4 ^ 0xff;
  _DAT_183386580 = (_DAT_183386580 ^ uVar4) + 0xff ^ 0x942ce00ed760ca7f;
  _DAT_1833865c0 = (_DAT_1833865c0 * 0xa7cc256e6bcb631 ^ _DAT_183386580) + uVar4;
  _DAT_183386578 = _DAT_1833865c0 ^ _DAT_183386580;
  _DAT_1833863b8 = 0xff;
  _DAT_1833863c8 = func_0x00018dd23860(_DAT_183386520 ^ 0x1f007c1cffdd28);
  _DAT_1833867d8 = _DAT_1833867d8 ^ _DAT_1833863c8 ^ 0xde37b3d2 ^ 0x7f27d347b3a68bac;
  _DAT_183386330 =
       (_DAT_183386330 * 0x69d755ba1876fc59 ^ _DAT_1833867d8) + (_DAT_1833863c8 ^ 0xde37b3d2);
  _DAT_183386848 = _DAT_183386330 ^ _DAT_1833867d8;
  _DAT_183386430 = 0;
  uVar4 = _iStack0000000000000058 ^ 0x84222325 ^ _DAT_1833868c8;
  lVar2 = (_iStack0000000000000058 ^ 0x84222325) + _DAT_183386688;
  uVar5 = uVar4 + lVar2;
  uVar6 = (uVar3 ^ _DAT_183386688) + _DAT_1833868c8 + uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3 ^ _DAT_183386688;
  _DAT_183386528 =
       func_0x00018dd23860((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833868c8 + uVar3) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  uVar4 = uVar3 ^ _DAT_183386528;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar4) <<
          0x34 | _DAT_183386528 >> 0xc;
  _DAT_183386890 = (_DAT_183386890 ^ uVar4) + (_iStack0000000000000058 | uVar3) ^ 0x4189f82e72e136cb
  ;
  _DAT_183386358 = (_DAT_183386358 * 0x7bbef71bafce6c67 ^ _DAT_183386890) + uVar4;
  _DAT_183386368 = _DAT_183386358 ^ _DAT_183386890;
  _DAT_183386598 = _iStack0000000000000058 | uVar3;
  iStack0000000000000058 = (int)*unaff_RBX;
  switch(iStack0000000000000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd22951 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd22951(void)

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


// ----- block @ rva 0xdd22a92 -----

void thunk_FUN_18dd0cc85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xdd22fc5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd22fc5(void)

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


// ----- block @ rva 0xdd234bc -----

void thunk_FUN_18dd0cc85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xdd23683 -----

void FUN_18dd23683(void)

{
  return;
}


// ----- block @ rva 0xdd236ef -----

void FUN_18dd236ef(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

