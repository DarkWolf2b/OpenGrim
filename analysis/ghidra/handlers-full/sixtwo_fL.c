// ===== Lsixtwo/fL; YO ()V (handler @ image 18ac1ff00, runtime 6ffff282ff00) =====

void FUN_18ac1ff00(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac1ff4a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18196ae30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fL; _31c3a3d62932965f4ffe30371de80c96 ()V (handler @ image 18ac2ca20, runtime 6ffff283ca20) =====

void FUN_18ac2ca20(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac2cb08 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18196f3c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fL; aVf (Lsixtwo/gH$th;)V (handler @ image 18ac20330, runtime 6ffff2830330) =====

void FUN_18ac20330(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14844,0x335);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac203fa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18196afc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fL; aVg (Lnet/minecraft/class_2680;)V (handler @ image 18ac47cc0, runtime 6ffff2857cc0) =====

void FUN_18ac47cc0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14844,0x335);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac47da8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181971f00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fL; aVh (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18ac51560, runtime 6ffff2861560) =====

undefined8 FUN_18ac51560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fL; aVi ([B)Ljava/lang/String; (handler @ image 18ac515f0, runtime 6ffff28615f0) =====

void FUN_18ac515f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018ac51693 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181974cc0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fL; aVj (IJ)Ljava/lang/String; (handler @ image 18ac7b830, runtime 6ffff288b830) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac7b830(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar8;
  
  uRam000000018326f968 = func_0x00018ac82910(uRam000000018326fc20 ^ 0x78d4b670007ce212);
  uVar2 = (uRam000000018326f968 ^ 0xa251216738b73843) << 4 |
          (uRam000000018326f968 ^ 0xa251216738b73843) >> 0x3c;
  uRam000000018326f920 = (uRam000000018326f920 ^ uVar2) + 0xffd7afff3cbf3e67 ^ 0x7341e6503c647c8b;
  uRam000000018326fa68 = (uRam000000018326fa68 * 0x1322ea170f9d42f1 ^ uRam000000018326f920) + uVar2;
  uRam000000018326fcd0 = uRam000000018326fa68 ^ uRam000000018326f920;
  uRam000000018326fb48 = 0xffd7afff3cbf3e67;
  uVar2 = (~uRam000000018326fce8 + 0xd6114f55a81003b9) *
          ((uRam000000018326fb10 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018326fb10 & 0x84222325) * 2);
  uVar2 = (uVar2 | 0xffd7afff3cbf3e67) + (uVar2 & 0xffd7afff3cbf3e67);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f710 =
       func_0x00018ac82910((uVar2 | 0xd6114f552c32209d) + (uVar2 & 0xd6114f552c32209d));
  uRam000000018326fa68 =
       (uRam000000018326fa68 ^ uRam000000018326f710 & 0x7ffffffff) + 0x29eeb0aa57effc48 ^
       0xf5cb4ca1cb24519c;
  uRam000000018326f9c8 =
       (uRam000000018326f9c8 * -0x5f0f26744dcf646f ^ uRam000000018326fa68) +
       (uRam000000018326f710 & 0x7ffffffff);
  uRam000000018326f9c0 = uRam000000018326f9c8 ^ uRam000000018326fa68;
  uRam000000018326f778 = 0x29eeb0aa57effc48;
  uRam000000018326fba8 = func_0x00018ac82910(uRam000000018326f968 ^ 0xd33cf0d421c92d59);
  uVar2 = uRam000000018326fba8 & 0x7fffffffffffffff;
  uRam000000018326f9d8 = uRam000000018326f890 ^ uVar2 ^ 0xd6114f55a81083b7;
  uRam000000018326f910 = (uRam000000018326f910 ^ uVar2) + 0xd6114f55a81083b7 ^ 0x14a58ac7a19c2452;
  uRam000000018326fcb8 = (uRam000000018326fcb8 * 0x26ad1d02bcaab607 ^ uRam000000018326f910) + uVar2;
  uRam000000018326f7a8 = uRam000000018326fcb8 ^ uRam000000018326f910;
  uRam000000018326f8f8 = 0xd6114f55a81083b7;
  uVar2 = (uRam000000018326f990 ^ _UNK_18197bd50) + uRam000000018326f910 + 0xd6114f552c32a092;
  uVar7 = (uRam000000018326f910 ^ _UNK_18197bd58) + uRam000000018326f990 + 0x29eeb0aa57effc48;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326f990 ^ _UNK_18197bd50;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f910 ^ _UNK_18197bd58;
  uRam000000018326f938 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018326f990 + 0x29eeb0aa57effc48) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018326f910 + 0xd6114f552c32a092));
  uVar2 = (uRam000000018326f938 ^ 0x3fffff7fff) & 0x3fffffffff;
  uRam000000018326f930 = uRam000000018326f9f8 ^ uVar2 ^ 0x7fff;
  uRam000000018326fba0 = (uRam000000018326fba0 ^ uVar2) + 0x7fff ^ 0x79b6c9dbe9d7a268;
  uRam000000018326fc10 = (uRam000000018326fc10 * -0x6d7360388fc4ea7b ^ uRam000000018326fba0) + uVar2
  ;
  uRam000000018326f7a8 = uRam000000018326fc10 ^ uRam000000018326fba0;
  uRam000000018326fb38 = 0x7fff;
  uVar2 = (uRam000000018326f960 ^ _UNK_18197bd60) + uRam000000018326f950 + 0x84222325;
  uVar7 = (uRam000000018326f950 ^ _UNK_18197bd68) + uRam000000018326f960 + 0xaf810421a706dfa8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326f960 ^ _UNK_18197bd60;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f950 ^ _UNK_18197bd68;
  uRam000000018326fc80 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018326f960 + 0xaf810421a706dfa8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018326f950 + 0x84222325));
  uRam000000018326fca0 = uRam000000018326fca0 + 0x507efbde58f92058 ^ 0xb8a6d106b4e130aa;
  uRam000000018326f820 = uRam000000018326fc00 * -0x6756951016a05d49;
  uRam000000018326fc00 = uRam000000018326f820 ^ uRam000000018326fca0;
  uRam000000018326f8e8 = 0x507efbde58f92058;
  uVar2 = (uRam000000018326fbc0 ^ _UNK_18197bd70) + uRam000000018326f9a0 + 0x84225cda;
  uVar7 = (uRam000000018326f9a0 ^ _UNK_18197bd78) + uRam000000018326fbc0 + 0xaf810421a706dfa8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326fbc0 ^ _UNK_18197bd70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f9a0 ^ _UNK_18197bd78;
  uRam000000018326fb08 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018326fbc0 + 0xaf810421a706dfa8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018326f9a0 + 0x84225cda));
  uVar2 = uRam000000018326fb08 & 0xfffffffffffc0000;
  uRam000000018326fb28 = uRam000000018326f9b0 ^ uVar2 ^ 0xaf810421a7075fa7;
  uRam000000018326f848 = (uRam000000018326f848 ^ uVar2) + 0xaf810421a7075fa7 ^ 0x931c1626e8ec6677;
  uRam000000018326fbb8 = (uRam000000018326fbb8 * 0x3e9dc9982f980261 ^ uRam000000018326f848) + uVar2;
  uRam000000018326f858 = uRam000000018326fbb8 ^ uRam000000018326f848;
  uRam000000018326f720 = 0xaf810421a7075fa7;
  uVar2 = (uRam000000018326fbf8 ^ _UNK_18197bd80) + uRam000000018326f998 + 0xaf81042123257c82;
  uVar7 = (uRam000000018326f998 ^ _UNK_18197bd88) + uRam000000018326fbf8 + 0x507efbde58f92058;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326fbf8 ^ _UNK_18197bd80;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f998 ^ _UNK_18197bd88;
  uRam000000018326fa48 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018326fbf8 + 0x507efbde58f92058) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018326f998 + 0xaf81042123257c82));
  uVar2 = ~uRam000000018326fa48 & 0xaf810421a7075fa7;
  uRam000000018326f790 = uRam000000018326f9d8 ^ uVar2 ^ 0x7fff;
  uRam000000018326f898 = (uRam000000018326f898 ^ uVar2) + 0x7fff ^ 0xd4d55f358f513106;
  uRam000000018326fac8 = (uRam000000018326fac8 * 0x16e7314d35f74abd ^ uRam000000018326f898) + uVar2;
  uRam000000018326f850 = uRam000000018326fac8 ^ uRam000000018326f898;
  uRam000000018326fa18 = 0x7fff;
  uVar2 = (~uRam000000018326f960 + 0x6fcd8d244b264995) *
          ((uRam000000018326f750 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018326f750 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam000000018326f768) + (uVar2 & uRam000000018326f768);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326fc30 =
       func_0x00018ac82910((uVar2 | 0x6fcd8d24cf046ab1) + (uVar2 & 0x6fcd8d24cf046ab1));
  uRam000000018326fbd8 =
       (uRam000000018326fbd8 ^ uRam000000018326fc30) + 0x903272dbb4d9b66c ^ 0x86be23de8054872b;
  uRam000000018326f7c0 =
       (uRam000000018326f7c0 * -0x4692f210af6520db ^ uRam000000018326fbd8) + uRam000000018326fc30;
  uRam000000018326f8b0 = uRam000000018326f7c0 ^ uRam000000018326fbd8;
  uRam000000018326f888 = uRam000000018326fa20 ^ 0x903272dbb4d9b66c;
  uRam000000018326f968 = 0x903272dbb4d9b66c;
  uVar2 = (uRam000000018326fc30 ^ _UNK_18197bd90) + uRam000000018326f848 + 0x84225cda;
  uVar7 = (uRam000000018326f848 ^ _UNK_18197bd98) + uRam000000018326fc30 + 0x6fcd8d244b264994;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326fc30 ^ _UNK_18197bd90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f848 ^ _UNK_18197bd98;
  uRam000000018326f730 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018326fc30 + 0x6fcd8d244b264994) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018326f848 + 0x84225cda));
  uVar2 = (uRam000000018326f730 & 0xff) << 0x36 | uRam000000018326f730 >> 10;
  uRam000000018326fa60 = uRam000000018326f880 ^ uVar2 ^ 0x6fcd8d244b26c993;
  uRam000000018326f9e8 = (uRam000000018326f9e8 ^ uVar2) + 0x6fcd8d244b26c993 ^ 0x9c1da0cc5c2c5035;
  uRam000000018326f9a8 = (uRam000000018326f9a8 * -0x43178c84221138f7 ^ uRam000000018326f9e8) + uVar2
  ;
  uRam000000018326fc80 = uRam000000018326f9a8 ^ uRam000000018326f9e8;
  uRam000000018326f818 = 0x6fcd8d244b26c993;
  uVar2 = (uRam000000018326fc58 ^ _UNK_18197bda0) + uRam000000018326fb10 + 0x6fcd8d24cf04eab6;
  uVar7 = (uRam000000018326fb10 ^ _UNK_18197bda8) + uRam000000018326fc58 + 0x903272dbb4d9b66c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326fc58 ^ _UNK_18197bda0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326fb10 ^ _UNK_18197bda8;
  uRam000000018326fc30 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018326fc58 + 0x903272dbb4d9b66c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018326fb10 + 0x6fcd8d24cf04eab6));
  uVar2 = ~uRam000000018326fc30;
  uRam000000018326f7b0 = uRam000000018326fb88 ^ uVar2 ^ 0x7fff;
  uRam000000018326f858 = (uRam000000018326f858 ^ uVar2) + 0x7fff ^ 0xabf2816a863a2676;
  uRam000000018326fbc0 = (uRam000000018326fbc0 * 0x1c4a494f928aba5b ^ uRam000000018326f858) + uVar2;
  uRam000000018326f818 = uRam000000018326fbc0 ^ uRam000000018326f858;
  uRam000000018326f808 = 0x7fff;
  uVar2 = (~uRam000000018326fba0 + 0x247b416bafed6bfc) *
          ((uRam000000018326f918 ^ 0xffd7afffb89d1d42) +
          (uRam000000018326f918 & 0x7fd7afffb89d1d42) * 2);
  uVar2 = (uVar2 | uRam000000018326fb50) + (uVar2 & uRam000000018326fb50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326fba8 =
       func_0x00018ac82910((uVar2 | 0xdbacee94177076b9) + (uVar2 & 0xdbacee94177076b9));
  uVar2 = uRam000000018326fba8 - (uRam000000018326fba8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam000000018326fba8;
  uRam000000018326fc40 = uRam000000018326fc60 ^ uVar2 ^ 0x2452f16aecacaa62;
  uRam000000018326fcc8 = (uRam000000018326fcc8 ^ uVar2) + 0x2452f16aecacaa62 ^ 0x4a87f8384f426e1;
  uRam000000018326fad8 = (uRam000000018326fad8 * -0x43b4c7f9e0a19ac3 ^ uRam000000018326fcc8) + uVar2
  ;
  uRam000000018326fa40 = uRam000000018326fad8 ^ uRam000000018326fcc8;
  uRam000000018326fbf0 = 0x2452f16aecacaa62;
  uVar2 = (~uRam000000018326f9d0 + 0x247b416bafed6bfc) *
          ((uRam000000018326f9c0 ^ 0xffd7afffb89d1d42) +
          (uRam000000018326f9c0 & 0x7fd7afffb89d1d42) * 2);
  uVar2 = (uVar2 | uRam000000018326f7a8) + (uVar2 & uRam000000018326f7a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f9e8 =
       func_0x00018ac82910((uVar2 | 0xdbacee94177076b9) + (uVar2 & 0xdbacee94177076b9));
  uVar2 = (uRam000000018326f9e8 & 0x1fffffffff) >> 1 | uRam000000018326f9e8 & 0x1fffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar7 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar7 >> 0x10 | uVar7;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018326f9e8 & 0x1fffffffff;
  uRam000000018326fae0 = (uRam000000018326fae0 ^ uVar2) + 0xdbacee949352559c ^ 0x1234813c425941a7;
  uRam000000018326f798 = (uRam000000018326f798 * -0x64f5aebf2df33943 ^ uRam000000018326fae0) + uVar2
  ;
  uRam000000018326fba0 = uRam000000018326f798 ^ uRam000000018326fae0;
  uRam000000018326f950 = 0xdbacee949352559c;
  uVar2 = (~uRam000000018326fc90 + 0x247b416bafed6bfc) *
          ((uRam000000018326fc90 ^ 0xffd7afffb89d1d42) +
          (uRam000000018326fc90 & 0x7fd7afffb89d1d42) * 2);
  uVar2 = (uVar2 | uRam000000018326fa48) + (uVar2 & uRam000000018326fa48);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f908 =
       func_0x00018ac82910((uVar2 | 0xdbacee94177076b9) + (uVar2 & 0xdbacee94177076b9));
  uRam000000018326fcc0 =
       (uRam000000018326fcc0 ^ uRam000000018326f908 & 0xffd7afff3cbf3e67) + 0x2453016b2cad2a63 ^
       0x776c4d1c8b3d971a;
  uRam000000018326faa0 =
       (uRam000000018326faa0 * -0x736d5d6fb5f50317 ^ uRam000000018326fcc0) +
       (uRam000000018326f908 & 0xffd7afff3cbf3e67);
  uRam000000018326fb28 = uRam000000018326faa0 ^ uRam000000018326fcc0;
  uRam000000018326f790 = 0x2453016b2cad2a63;
  uVar2 = (~uRam000000018326f8e0 + 0x48a602d6595a54c7) *
          ((uRam000000018326fb60 ^ 0xdbacee94177076b9) +
          (uRam000000018326fb60 & 0x5bacee94177076b9) * 2);
  uVar2 = (uVar2 | uRam000000018326fac0) + (uVar2 & uRam000000018326fac0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f960 =
       func_0x00018ac82910((uVar2 | 0x930aec424e2a227f) + (uVar2 & 0x930aec424e2a227f));
  uVar2 = (uRam000000018326f960 << 7 | uRam000000018326f960 >> 0x39) ^ 0xdbacee949352559c;
  uRam000000018326f938 = uRam000000018326fca8 ^ uVar2 ^ 0x2452f16aecacaa62;
  uRam000000018326fcd8 = (uRam000000018326fcd8 ^ uVar2) + 0x2452f16aecacaa62 ^ 0xfe0590dfcd283534;
  uRam000000018326fbd8 = (uRam000000018326fbd8 * 0x61307c6f1d725797 ^ uRam000000018326fcd8) + uVar2;
  uRam000000018326f990 = uRam000000018326fbd8 ^ uRam000000018326fcd8;
  uRam000000018326fc20 = 0x2452f16aecacaa62;
  uVar2 = ((uRam000000018326f848 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018326f848 & 0x84225cda) * 2) * -uRam000000018326fba0;
  uVar2 = (uVar2 | uRam000000018326f918) + (uVar2 & uRam000000018326f918);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f828 =
       func_0x00018ac82910((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uVar2 = uRam000000018326f828 ^ 0x7fff;
  uRam000000018326f920 = uRam000000018326fb88 ^ uVar2 ^ 0x7fff;
  uRam000000018326fb38 = (uRam000000018326fb38 ^ uVar2) + 0x7fff ^ 0xd0eb6d755436dbf2;
  uRam000000018326f960 = (uRam000000018326f960 * 0x7fce58b277930091 ^ uRam000000018326fb38) + uVar2;
  uRam000000018326f8e8 = uRam000000018326f960 ^ uRam000000018326fb38;
  uRam000000018326f9c8 = 0x7fff;
  uVar2 = (~uRam000000018326faa8 + 0x285000c340c199) *
          ((uRam000000018326fae8 ^ 0xffd7afffb89d1d42) +
          (uRam000000018326fae8 & 0x7fd7afffb89d1d42) * 2);
  uVar2 = (uVar2 | uRam000000018326fa80) + (uVar2 & uRam000000018326fa80);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326fb08 =
       func_0x00018ac82910((uVar2 | 0xffffffff7bdddcda) + (uVar2 & 0xffffffff7bdddcda));
  uRam000000018326fbd0 = uRam000000018326fbd0 ^ uRam000000018326fb08 ^ 0x5c9aec4a98f6a21b;
  uRam000000018326fa18 =
       (uRam000000018326fa18 * -0x67c15886ef75ef8d ^ uRam000000018326fbd0) + uRam000000018326fb08;
  uRam000000018326f750 = uRam000000018326fa18 ^ uRam000000018326fbd0;
  uRam000000018326f990 = 0;
  uVar2 = ((uRam000000018326fc90 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018326fc90 & 0x84225cda) * 2) * -uRam000000018326fb50;
  uVar2 = (uVar2 | uRam000000018326fba8) + (uVar2 & uRam000000018326fba8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f728 =
       func_0x00018ac82910((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uVar2 = uRam000000018326f728 ^ 0x7fff;
  uRam000000018326faa8 = uRam000000018326f950 ^ uVar2 ^ 0x7fff;
  uRam000000018326fcb0 = (uRam000000018326fcb0 ^ uVar2) + 0x7fff ^ 0xd34442612e93cdaf;
  uRam000000018326f780 = (uRam000000018326f780 * -0x6e959876e9b18753 ^ uRam000000018326fcb0) + uVar2
  ;
  uRam000000018326f810 = uRam000000018326f780 ^ uRam000000018326fcb0;
  uRam000000018326f980 = 0x7fff;
  uVar2 = (uRam000000018326f830 ^ _UNK_18197bdb0) + uRam000000018326fbe8 + 0xa2512167bc951b66;
  uVar7 = (uRam000000018326fbe8 ^ _UNK_18197bdb8) + uRam000000018326f830 + 0xa251216738b73843;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326f830 ^ _UNK_18197bdb0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326fbe8 ^ _UNK_18197bdb8;
  uRam000000018326fcb8 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018326f830 + 0xa251216738b73843) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018326fbe8 + 0xa2512167bc951b66));
  uRam000000018326f750 = uRam000000018326f750 ^ uRam000000018326f800 ^ 0xe89ddf8244e655ee;
  uRam000000018326f748 =
       (uRam000000018326f748 * 0x6e9668bb53a4ed63 ^ uRam000000018326f750) + uRam000000018326f800;
  uRam000000018326f840 = uRam000000018326f748 ^ uRam000000018326f750;
  uRam000000018326fc08 = 0;
  uRam000000018326fa28 = func_0x00018ac82910(uRam000000018326fcb0 + 0x5bff7bc9ffe1ff ^ 0x4e);
  uVar2 = uRam000000018326fa28 >> 1 | uRam000000018326fa28;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam000000018326fa28;
  uRam000000018326fb28 = uRam000000018326f930 ^ uVar2 ^ 0x7fff;
  uRam000000018326f848 = (uRam000000018326f848 ^ uVar2) + 0x7fff ^ 0xc869b9245554fb8b;
  uRam000000018326fbc0 = (uRam000000018326fbc0 * -0x6b98b87ab7d231eb ^ uRam000000018326f848) + uVar2
  ;
  uRam000000018326f880 = uRam000000018326fbc0 ^ uRam000000018326f848;
  uRam000000018326f7f8 = 0x7fff;
  uVar2 = param_4 ^ 0x84222325 ^ uRam000000018326fb60;
  lVar4 = (param_4 ^ 0x84222325) + uRam000000018326f730;
  uVar7 = uVar2 + lVar4;
  uVar8 = (uRam000000018326f730 ^ 0x7fff) + uRam000000018326fb60 + 0x7fff;
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar2;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018326f730 ^ 0x7fff;
  uRam000000018326f968 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018326fb60 + 0x7fff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  uVar2 = (param_4 * 0x7fff ^ uRam000000018326f968) * -0x60f734e8f6befec3;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar3;
  uRam000000018326f9b0 = (uRam000000018326f9b0 ^ uVar2) + uVar7 ^ 0xb0c074e765347ce1;
  uRam000000018326fa20 = (uRam000000018326fa20 * -0x2a3c706bc06e158f ^ uRam000000018326f9b0) + uVar2
  ;
  uRam000000018326fc48 = uRam000000018326fa20 ^ uRam000000018326f9b0;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar3 ^ 0x84222325;
  auVar5._8_4_ = param_3;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ _UNK_18197bdc0,_UNK_1800170c0);
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar8 + uRam000000018326fce8;
  if (auVar6._4_4_ < 0) {
    uVar2 = uRam000000018326f738 ^ uVar8;
  }
  uRam000000018326f758 = uVar7;
  uRam000000018326f9e8 = func_0x00018ac82910(SUB161(auVar5 ^ _UNK_18197bdc0,5) ^ uVar2);
  uRam000000018326fcd8 = (ulonglong)(uVar3 ^ param_3);
  uRam000000018326f998 =
       (uRam000000018326f998 ^ uVar7 ^ uRam000000018326f9e8) + uRam000000018326fcd8 ^
       0x74ced697e9ba6993;
  uRam000000018326fa58 =
       (uRam000000018326fa58 * -0x110142c1617d326d ^ uRam000000018326f998) +
       (uVar7 ^ uRam000000018326f9e8);
  uRam000000018326f978 = uRam000000018326fa58 ^ uRam000000018326f998;
  uVar2 = (~uRam000000018326f720 + 0x150aafb) *
          ((uRam000000018326f8f0 ^ 0xb89d10c2) +
          (ulonglong)((uint)uRam000000018326f8f0 & 0xb89d10c2) * 2);
  uVar2 = (uVar2 | uRam000000018326f9a0) + (uVar2 & uRam000000018326f9a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f820 =
       func_0x00018ac82910((uVar2 | 0xb9cdba38) + (ulonglong)((uint)uVar2 & 0xb9cdba38));
  uVar2 = (uRam000000018326f820 ^ 0x3dffbbff) & 0x7fffffffffff;
  uRam000000018326fc10 = (uRam000000018326fc10 ^ uVar2) + 0x3dffbbff ^ 0xe4acd44f893959a2;
  uRam000000018326f918 = (uRam000000018326f918 * -0x869a92fc34d85b9 ^ uRam000000018326fc10) + uVar2;
  uRam000000018326fcd8 = uRam000000018326f918 ^ uRam000000018326fc10;
  uRam000000018326f790 = 0x3dffbbff;
  uVar2 = (~uRam000000018326f958 + 0xde34e777) *
          ((uRam000000018326f868 ^ 0xe7567d0f) +
          (ulonglong)((uint)uRam000000018326f868 & 0xe7567d0f) * 2);
  uVar2 = (uVar2 | uRam000000018326fbf8) + (uVar2 & uRam000000018326fbf8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326fc90 =
       func_0x00018ac82910((uVar2 | 0x39629a79) + (ulonglong)((uint)uVar2 & 0x39629a79));
  uVar2 = uRam000000018326fc90 >> 1 | uRam000000018326fc90;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (ulonglong)
          (~((uint)uRam000000018326fc90 ^
            (0x40 - (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x40) & 0x63745e2a);
  uRam000000018326fb10 = (uRam000000018326fb10 ^ uVar2) + 0xbd40b95c ^ 0x865e4f6b841be83a;
  uRam000000018326faa8 = (uRam000000018326faa8 * 0x2871e474021bcd7b ^ uRam000000018326fb10) + uVar2;
  uRam000000018326f728 = uRam000000018326faa8 ^ uRam000000018326fb10;
  uRam000000018326f970 = 0xbd40b95c;
  uRam000000018326fce8 = func_0x00018ac82910(uRam000000018326f7d8 ^ 0x440012e5ffd40a);
  uRam000000018326f818 =
       (uRam000000018326f818 ^ uRam000000018326fce8) - 0x910f5f0f ^ 0x9120c27d4ae4ce82;
  uRam000000018326f8b8 =
       (uRam000000018326f8b8 * -0x4712193a38c3d6db ^ uRam000000018326f818) + uRam000000018326fce8;
  uRam000000018326fc10 = uRam000000018326f8b8 ^ uRam000000018326f818;
  uRam000000018326fbc0 = 0x6ef0a0f1;
  uVar2 = (~uRam000000018326f870 + 0x910f5f10) *
          ((uRam000000018326fb60 ^ 0x84221eb6) +
          (ulonglong)((uint)uRam000000018326fb60 & 0x84221eb6) * 2);
  uVar2 = (uVar2 | uRam000000018326fba0) + (uVar2 & uRam000000018326fba0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326fb38 =
       func_0x00018ac82910((uVar2 | 0x152d41b9) + (ulonglong)((uint)uVar2 & 0x152d41b9));
  uVar7 = uRam000000018326fb38 ^ 0x910f420c;
  uVar2 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar7;
  uRam000000018326f828 = uRam000000018326fc48 ^ uVar7 ^ 0x910f9ca2;
  uRam000000018326f948 = (uRam000000018326f948 ^ uVar7) + 0x910f9ca2 ^ 0x2978f3901539236;
  uRam000000018326f7f0 = (uRam000000018326f7f0 * -0x7bea3b4d133bb317 ^ uRam000000018326f948) + uVar7
  ;
  uRam000000018326fbe8 = uRam000000018326f7f0 ^ uRam000000018326f948;
  uRam000000018326f980 = 0x910f9ca2;
  uVar2 = (uRam000000018326f938 ^ _UNK_18197bdd0) + uRam000000018326f720 + 0x152dbf87;
  uVar7 = (uRam000000018326f720 ^ _UNK_18197bdd8) + uRam000000018326f938 + 0x6ef0a0f1;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326f938 ^ _UNK_18197bdd0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f720 ^ _UNK_18197bdd8;
  uRam000000018326fab8 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018326f938 + 0x6ef0a0f1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018326f720 + 0x152dbf87));
  uVar2 = uRam000000018326fab8 & 0xffffffffffff;
  uRam000000018326fbf0 = uRam000000018326fb30 ^ uVar2 ^ 0x100003d93;
  uRam000000018326f8e8 = (uRam000000018326f8e8 ^ uVar2) + 0x100003d93 ^ 0x3625574b2a60d836;
  uRam000000018326f988 = (uRam000000018326f988 * 0x5df0dd49f8c57417 ^ uRam000000018326f8e8) + uVar2;
  uRam000000018326fcb8 = uRam000000018326f988 ^ uRam000000018326f8e8;
  uRam000000018326f878 = 0x3d93;
  uVar2 = (~uRam000000018326fa28 + 0x52302aad) *
          ((uRam000000018326f8f8 ^ 0x84221eb6) +
          (ulonglong)((uint)uRam000000018326f8f8 & 0x84221eb6) * 2);
  uVar2 = (uVar2 | uRam000000018326fa10) + (uVar2 & uRam000000018326fa10);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326fc18 =
       func_0x00018ac82910((uVar2 | 0xd612341a) + (ulonglong)((uint)uVar2 & 0xd612341a));
  uVar2 = uRam000000018326fc18 ^ 0x52303fbf;
  uVar7 = uVar2 >> 1 | uVar2;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar2;
  uRam000000018326f8e0 = uRam000000018326fc20 ^ uVar2 ^ 0x5230683f;
  uRam000000018326f840 = (uRam000000018326f840 ^ uVar2) + 0x5230683f ^ 0x3643c502a40be45f;
  uRam000000018326f738 = (uRam000000018326f738 * -0x54caff72a123f7a5 ^ uRam000000018326f840) + uVar2
  ;
  uRam000000018326fcd8 = uRam000000018326f738 ^ uRam000000018326f840;
  uRam000000018326f828 = 0x5230683f;
  uVar2 = (uRam000000018326fc58 ^ _UNK_18197bde0) + uRam000000018326f7e0 + 0xd6124b1a;
  uVar7 = (uRam000000018326f7e0 ^ _UNK_18197bde8) + uRam000000018326fc58 + 0xadcfd554;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326fc58 ^ _UNK_18197bde0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f7e0 ^ _UNK_18197bde8;
  uRam000000018326f8f0 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018326fc58 + 0xadcfd554) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018326f7e0 + 0xd6124b1a));
  uVar2 = (ulonglong)(((uint)uRam000000018326f8f0 ^ 0x42302007) & 0x5230683f);
  uRam000000018326f978 = uRam000000018326f830 ^ uVar2 ^ 0x100003d93;
  uRam000000018326f830 = (uRam000000018326f830 ^ uVar2) + 0x100003d93 ^ 0x6107bb347a30ec55;
  uRam000000018326f7b8 = (uRam000000018326f7b8 * -0x65a5caf451772847 ^ uRam000000018326f830) + uVar2
  ;
  uRam000000018326fb98 = uRam000000018326f7b8 ^ uRam000000018326f830;
  uRam000000018326fbe0 = 0x3d93;
  uVar2 = (~uRam000000018326fce8 + 0x7a66a149) *
          ((uRam000000018326f720 ^ 0x84221eb6) +
          (ulonglong)((uint)uRam000000018326f720 & 0x84221eb6) * 2);
  uVar2 = (uVar2 | uRam000000018326fc10) + (uVar2 & uRam000000018326fc10);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f7d0 =
       func_0x00018ac82910((uVar2 | 0xfe44bffe) + (ulonglong)((uint)uVar2 & 0xfe44bffe));
  uVar2 = (uRam000000018326f7d0 & 0xffffffffffc00000 | 0x3d93) << 0xd | uRam000000018326f7d0 >> 0x33
  ;
  uRam000000018326fc48 = uRam000000018326faa0 ^ uVar2 ^ 0x7a66dedb;
  uRam000000018326f900 = (uRam000000018326f900 ^ uVar2) + 0x7a66dedb ^ 0x63b1f089e6635ffe;
  uRam000000018326fce8 = (uRam000000018326fce8 * -0x6cbe436021b7c93 ^ uRam000000018326f900) + uVar2;
  uRam000000018326fb88 = uRam000000018326fce8 ^ uRam000000018326f900;
  uRam000000018326fb48 = 0x7a66dedb;
  uRam000000018326f8b0 = func_0x00018ac82910(lRam000000018326fc88 + 0xffa1002b45ff42ffU ^ 0x10);
  uVar2 = (uRam000000018326f8b0 ^ 0x7a660000) & 0xfffffffffffe0000;
  uRam000000018326fc68 = uRam000000018326f8e8 ^ uVar2 ^ 0x100003d93;
  uRam000000018326fc20 = (uRam000000018326fc20 ^ uVar2) + 0x100003d93 ^ 0x12434f7bf64d8be1;
  uRam000000018326f8d8 = (uRam000000018326f8d8 * 0x55a2ec192425cb5d ^ uRam000000018326fc20) + uVar2;
  uRam000000018326f7f8 = uRam000000018326f8d8 ^ uRam000000018326fc20;
  uRam000000018326f890 = 0x3d93;
  uVar2 = (~uRam000000018326fad0 + 0xbd40b95d) *
          ((uRam000000018326f970 ^ 0xb9dd98da) +
          (ulonglong)((uint)uRam000000018326f970 & 0xb9dd98da) * 2);
  uVar2 = (uVar2 | uRam000000018326fa90) + (uVar2 & uRam000000018326fa90);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f788 =
       func_0x00018ac82910((uVar2 | 0x49d2186) + (ulonglong)((uint)uVar2 & 0x49d2186));
  uRam000000018326fa20 = uRam000000018326fb30 ^ uRam000000018326f788 ^ 0xfb40755b;
  uRam000000018326f800 =
       (uRam000000018326f800 ^ uRam000000018326f788) + 0xfb40755b ^ 0x16f7daffd663f7a5;
  uRam000000018326fc08 =
       (uRam000000018326fc08 * 0x292597f90f5a8b73 ^ uRam000000018326f800) + uRam000000018326f788;
  uRam000000018326fb18 = uRam000000018326fc08 ^ uRam000000018326f800;
  uRam000000018326fa90 = uRam000000018326f948 ^ 0xfb40755b;
  uRam000000018326fb78 = 0xfb40755b;
  uVar2 = (~uRam000000018326f898 + 0xbd40b95d) *
          ((uRam000000018326f778 ^ 0xb9dd98da) +
          (ulonglong)((uint)uRam000000018326f778 & 0xb9dd98da) * 2);
  uVar2 = (uVar2 | uRam000000018326f8a0) + (uVar2 & uRam000000018326f8a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018ac82910((uVar2 | 0x49d2186) + (ulonglong)((uint)uVar2 & 0x49d2186));
  uRam000000018326fad8 = (uVar2 ^ uVar2 ^ 0x3dffbbff) + 0x80bf02a3 ^ 0x8c365cdb7e2969c2;
  uRam000000018326f8e0 =
       (uRam000000018326f8e0 * 0x32bef20b11e16cb ^ uRam000000018326fad8) + (uVar2 ^ 0x3dffbbff);
  uRam000000018326f720 = uRam000000018326f8e0 ^ uRam000000018326fad8;
  uRam000000018326f710 = 0x80bf02a3;
  uVar2 = (~uRam000000018326f760 + 0xbd40b95d) *
          ((uRam000000018326f810 ^ 0xb9dd98da) +
          (ulonglong)((uint)uRam000000018326f810 & 0xb9dd98da) * 2);
  uVar2 = (uVar2 | uRam000000018326fa80) + (uVar2 & uRam000000018326fa80);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326f790 =
       func_0x00018ac82910((uVar2 | 0x49d2186) + (ulonglong)((uint)uVar2 & 0x49d2186));
  uVar2 = (uRam000000018326f790 ^ 0xbd400000) & 0xffffffffffff0000;
  uRam000000018326f770 = (uRam000000018326f770 ^ uVar2) + 0x3d40b95c ^ 0xc9ff22c9bbde46ef;
  uRam000000018326fa20 = (uRam000000018326fa20 * 0x22218586715db159 ^ uRam000000018326f770) + uVar2;
  uRam000000018326f9a0 = uRam000000018326fa20 ^ uRam000000018326f770;
  uRam000000018326fc10 = 0x3d40b95c;
  uVar2 = (uRam000000018326fc40 ^ _UNK_18197bdf0) + uRam000000018326fa98 + 0x49d2186;
  uVar7 = (uRam000000018326fa98 ^ _UNK_18197bdf8) + uRam000000018326fc40 + 0x7a8172b8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326fc40 ^ _UNK_18197bdf0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326fa98 ^ _UNK_18197bdf8;
  uRam000000018326fbf0 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018326fc40 + 0x7a8172b8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018326fa98 + 0x49d2186));
  uVar7 = uRam000000018326fbf0 ^ 0xfabf72bb;
  uVar2 = uVar7 >> 1 | uVar7;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar7;
  uRam000000018326f7a0 = uRam000000018326f7d0 ^ uVar7 ^ 0xfb40755b;
  uRam000000018326f798 = (uRam000000018326f798 ^ uVar7) + 0xfb40755b ^ 0xf6d40e3ec5807cc0;
  uRam000000018326fbd0 = (uRam000000018326fbd0 * -0x6bf12536cba39fc3 ^ uRam000000018326f798) + uVar7
  ;
  uRam000000018326f700 = uRam000000018326fbd0 ^ uRam000000018326f798;
  uRam000000018326fa60 = 0xfb40755b;
  uVar2 = (~uRam000000018326fbb8 + 0xfb40755c) *
          ((uRam000000018326f880 ^ 0x7f62567e) +
          (ulonglong)((uint)uRam000000018326f880 & 0x7f62567e) * 2);
  uVar2 = (uVar2 | uRam000000018326f968) + (uVar2 & uRam000000018326f968);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326fa98 =
       func_0x00018ac82910((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar2 = (uRam000000018326fa98 ^ 0xf697765b554c4e59) -
          ((uRam000000018326fa98 ^ 0xf697765b554c4e59) >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uRam000000018326f850 =
       uRam000000018326fa98 ^ 0xf697765bae0c3b02 ^
       ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uRam000000018326f760 = uRam000000018326f760 ^ uRam000000018326f850 ^ 0xbcf9b6bdccf724fb;
  uRam000000018326fcc8 =
       (uRam000000018326fcc8 * -0x64580ff20f401751 ^ uRam000000018326f760) + uRam000000018326f850;
  uRam000000018326fcb0 = uRam000000018326fcc8 ^ uRam000000018326f760;
  uRam000000018326fa10 = 0;
  lRam000000018326f708 = func_0x00018ac82910(uRam000000018326f818 + 0x2007c720021ff ^ 0x6b);
  uVar2 = lRam000000018326f708 * 0x35e36bd3834b19d5;
  uRam000000018326f838 = uRam000000018326f740 ^ uVar2 ^ 0x3d93;
  uRam000000018326fa30 = (uRam000000018326fa30 ^ uVar2) + 0x3d93 ^ 0x6fa3608c008dab29;
  uRam000000018326fb98 = (uRam000000018326fb98 * 0x42e5eedaa5e4c661 ^ uRam000000018326fa30) + uVar2;
  uRam000000018326fa38 = uRam000000018326fb98 ^ uRam000000018326fa30;
  uRam000000018326fa90 = 0x3d93;
  uRam000000018326f748 = func_0x00018ac82910(lRam000000018326fc38 + 0xffdaffc5e2ffe1ffU ^ 0xb3);
  uRam000000018326f9c0 =
       (uRam000000018326f9c0 ^ uRam000000018326f748) + 0xc2004400 ^ 0x5ce77ca798b993e4;
  uRam000000018326f878 =
       (uRam000000018326f878 * 0x26fcd4d849722671 ^ uRam000000018326f9c0) + uRam000000018326f748;
  uRam000000018326fa58 = uRam000000018326f878 ^ uRam000000018326f9c0;
  uRam000000018326f830 = 0xc2004400;
  uVar2 = (uRam000000018326fc50 ^ _UNK_18197be00) + uRam000000018326f878 + 0xb9dd98da;
  uVar7 = (uRam000000018326f878 ^ _UNK_18197be08) + uRam000000018326fc50 + 0xc2004400;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326fc50 ^ _UNK_18197be00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f878 ^ _UNK_18197be08;
  uRam000000018326fc20 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018326fc50 + 0xc2004400) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018326f878 + 0xb9dd98da));
  uRam000000018326faa8 = uRam000000018326faa8 ^ uRam000000018326fc20 ^ 0x2401bdb21f006a09;
  uRam000000018326fb58 =
       (uRam000000018326fb58 * -0x6aafc1ddf7e503d5 ^ uRam000000018326faa8) + uRam000000018326fc20;
  uRam000000018326f7d8 = uRam000000018326fb58 ^ uRam000000018326faa8;
  uRam000000018326fa80 = 0;
  uVar2 = ((uRam000000018326f870 ^ 0x84221eb6) +
          (ulonglong)((uint)uRam000000018326f870 & 0x84221eb6) * 2) * -uRam000000018326f818;
  uVar2 = (uVar2 | uRam000000018326f848) + (uVar2 & uRam000000018326f848);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018326fbe0 =
       func_0x00018ac82910((uVar2 | 0x84221eb6) + (ulonglong)((uint)uVar2 & 0x84221eb6));
  uRam000000018326fae0 = uRam000000018326f7e0 ^ uRam000000018326fbe0 ^ 0x3d93;
  uRam000000018326f9a8 = (uRam000000018326f9a8 ^ uRam000000018326fbe0) + 0x3d93 ^ 0xd8d61015ae80753;
  uRam000000018326fce8 =
       (uRam000000018326fce8 * -0x7b9e0a380393237f ^ uRam000000018326f9a8) + uRam000000018326fbe0;
  uRam000000018326fc18 = uRam000000018326fce8 ^ uRam000000018326f9a8;
  uRam000000018326f880 = 0x3d93;
  uVar2 = (uRam000000018326f9d8 ^ _UNK_18197be10) + uRam000000018326f9a0 + 0xb89d10c2;
  uVar7 = (uRam000000018326f9a0 ^ _UNK_18197be18) + uRam000000018326f9d8 + 0x3cbf33e7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018326f9d8 ^ _UNK_18197be10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018326f9a0 ^ _UNK_18197be18;
  uRam000000018326fa70 =
       func_0x00018ac82910((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018326f9d8 + 0x3cbf33e7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018326f9a0 + 0xb89d10c2));
  uVar2 = uRam000000018326fa70 >> 1 | uRam000000018326fa70;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018326fa70;
  uRam000000018326f9a0 = uRam000000018326f9a0 ^ uVar2 ^ 0xc07a5c485c979449;
  uRam000000018326fa88 = (uRam000000018326fa88 * -0x60eec91213df10c1 ^ uRam000000018326f9a0) + uVar2
  ;
  uRam000000018326fac8 = uRam000000018326fa88 ^ uRam000000018326f9a0;
  uRam000000018326fb78 = 0;
  uVar2 = func_0x00018ac82910(uRam000000018326fbd0 ^ 0x6007c4a001d68);
  uRam000000018326fce0 = uRam000000018326f970 ^ uVar2 ^ 0x3d93;
  uRam000000018326f9c8 = (uRam000000018326f9c8 ^ uVar2) + 0x3d93 ^ 0x3fce0e2b7e35489e;
  uRam000000018326fcc8 = (uRam000000018326fcc8 * -0x59b5f556f2069549 ^ uRam000000018326f9c8) + uVar2
  ;
  uRam000000018326fcb0 = uRam000000018326fcc8 ^ uRam000000018326f9c8;
  uRam000000018326fa00 = 0x3d93;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14844,0x335);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac7e444 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18197a3c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fL; aVk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18ac829a0, runtime 6ffff28929a0) =====

void FUN_18ac829a0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ac829dc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18197be60 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fL; aVl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ac83890, runtime 6ffff2893890) =====

void FUN_18ac83890(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac8390d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18197c3a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fL; aVm (IJ)I (handler @ image 18ac86350, runtime 6ffff2896350) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac86350(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = (uRam000000018326fe48 ^ _UNK_18197f100) + uRam000000018326fe90 + 0x3769f1204fb4f47;
  uVar5 = (uRam000000018326fe90 ^ _UNK_18197f108) + uRam000000018326fe48 + 0x3b488faa318af69a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fe48 ^ _UNK_18197f100;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fe90 ^ _UNK_18197f108;
  uRam000000018326fea0 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018326fe48 + 0x3b488faa318af69a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018326fe90 + 0x3769f1204fb4f47));
  uRam000000018326fd50 =
       (uRam000000018326fd50 ^ uRam000000018326fea0 & 0x7fffffffffffffff) + 0x383e10b8b1539af8 ^
       0xa02e3ed7c9bd158d;
  uRam000000018326fd68 =
       (uRam000000018326fd68 * 0xeda1ef5c63c1f75 ^ uRam000000018326fd50) +
       (uRam000000018326fea0 & 0x7fffffffffffffff);
  uRam000000018326fd98 = uRam000000018326fd68 ^ uRam000000018326fd50;
  uRam000000018326fe38 = 0x383e10b8b1539af8;
  uVar4 = (uRam000000018326fd70 ^ _UNK_18197f110) + uRam000000018326fd98 + 0x84225cda;
  uVar5 = (uRam000000018326fd98 ^ _UNK_18197f118) + uRam000000018326fd70 + 0xa0894d2f9b0cee40;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fd70 ^ _UNK_18197f110;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fd98 ^ _UNK_18197f118;
  uRam000000018326fdf8 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018326fd70 + 0xa0894d2f9b0cee40) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018326fd98 + 0x84225cda));
  uVar4 = uRam000000018326fdf8 - (uRam000000018326fdf8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018326fdf8;
  uRam000000018326fec0 = uRam000000018326fe30 ^ uVar4 ^ 0xa0894d2f9b0d6e3f;
  uRam000000018326fde8 = (uRam000000018326fde8 ^ uVar4) + 0xa0894d2f9b0d6e3f ^ 0xaf2599a3aa09e76c;
  uRam000000018326fea0 = (uRam000000018326fea0 * 0x66d96c8fcdada769 ^ uRam000000018326fde8) + uVar4;
  uRam000000018326fdb8 = uRam000000018326fea0 ^ uRam000000018326fde8;
  uRam000000018326fda0 = 0xa0894d2f9b0d6e3f;
  uRam000000018326fdd0 = func_0x00018ac91680(uRam000000018326fd30 + 0x2353c56459efb416 ^ 0x77);
  uRam000000018326fde8 = uRam000000018326fec8 ^ uRam000000018326fdd0 ^ 0x7fff;
  uRam000000018326fe68 = (uRam000000018326fe68 ^ uRam000000018326fdd0) + 0x7fff ^ 0xc10d42539a5245c9
  ;
  uRam000000018326fd78 =
       (uRam000000018326fd78 * -0x4f4f5c9c991b501d ^ uRam000000018326fe68) + uRam000000018326fdd0;
  uRam000000018326fd40 = uRam000000018326fd78 ^ uRam000000018326fe68;
  uRam000000018326feb8 = 0x7fff;
  uRam000000018326fe40 = func_0x00018ac91680(uRam000000018326fd80 ^ 0xa389edcd2a22a4b);
  uRam000000018326fd00 = uRam000000018326fd00 + 0x7a1c41f554a0a408 ^ 0xb87d5c082e39db2f;
  uRam000000018326fd88 = uRam000000018326fef8 * 0x518d75b4eb74ee27;
  uRam000000018326fef8 = uRam000000018326fd88 ^ uRam000000018326fd00;
  uRam000000018326fd90 = 0x7a1c41f554a0a408;
  uRam000000018326fe78 = func_0x00018ac91680(uRam000000018326fd60 + 0xf604a125216a3c7a ^ 0x55);
  uVar4 = (uRam000000018326fe78 ^ 0x85e3be0aab5f0000) & 0x7fffffffffffffff ^ 0x85e3be0aab5f5bf8;
  uRam000000018326feb0 = uRam000000018326fdb8 ^ uVar4 ^ 0x85e3be0aab5fdbf7;
  uRam000000018326fea0 = (uRam000000018326fea0 ^ uVar4) + 0x85e3be0aab5fdbf7 ^ 0x2ff65d8e5587d5b4;
  uRam000000018326fec0 = (uRam000000018326fec0 * 0x38722c640b17936d ^ uRam000000018326fea0) + uVar4;
  uRam000000018326fd20 = uRam000000018326fec0 ^ uRam000000018326fea0;
  uRam000000018326fee8 = 0x85e3be0aab5fdbf7;
  uVar4 = (~uRam000000018326fe20 + 0x7a1c41f554a0a409) *
          ((uRam000000018326fe50 ^ 0x85e3be0a2f7df8d2) +
          (uRam000000018326fe50 & 0x5e3be0a2f7df8d2) * 2);
  uVar4 = (uVar4 | uRam000000018326fd60) + (uVar4 & uRam000000018326fd60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fdb0 =
       func_0x00018ac91680((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = uRam000000018326fdb0 ^ 0x85e3be0aab5fdbf7;
  uRam000000018326fe58 = uRam000000018326fe20 ^ uVar4 ^ 0x7fff;
  uRam000000018326fed8 = (uRam000000018326fed8 ^ uVar4) + 0x7fff ^ 0xf0030062decc839b;
  uRam000000018326fe80 = (uRam000000018326fe80 * -0x7810b4bb2c62010f ^ uRam000000018326fed8) + uVar4
  ;
  uRam000000018326fd28 = uRam000000018326fe80 ^ uRam000000018326fed8;
  uRam000000018326fdf8 = 0x7fff;
  uVar4 = (~uRam000000018326fda0 + 0x8a1790b0306bc0c1) *
          ((uRam000000018326fe50 ^ 0x75e86f4f4bb69c1a) +
          (uRam000000018326fe50 & 0x75e86f4f4bb69c1a) * 2);
  uVar4 = (uVar4 | uRam000000018326fdd0) + (uVar4 & uRam000000018326fdd0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fed0 =
       func_0x00018ac91680((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = (uRam000000018326fed0 << 0x12 | uRam000000018326fed0 >> 0x2e) * -0x15b93ec3929135b9;
  uRam000000018326fdb0 = uRam000000018326fdb8 ^ uVar4 ^ 0x7fff;
  uRam000000018326fef8 = (uRam000000018326fef8 ^ uVar4) + 0x7fff ^ 0x9f7e54e848da2674;
  uRam000000018326fde8 = (uRam000000018326fde8 * -0x6ea7348869d93873 ^ uRam000000018326fef8) + uVar4
  ;
  uRam000000018326fd90 = uRam000000018326fde8 ^ uRam000000018326fef8;
  uRam000000018326fea8 = 0x7fff;
  uRam000000018326fe28 = func_0x00018ac91680(uRam000000018326fef0 ^ 0xc30fbeca23a81da5);
  uVar4 = (uRam000000018326fe28 ^ 0x7fffd8ffff53baf8) * 0x1204e4e885eca7d;
  uRam000000018326fed0 = uRam000000018326fe70 ^ uVar4 ^ 0xb83dd9b8b0a64330;
  uRam000000018326fec0 = (uRam000000018326fec0 ^ uVar4) + 0xb83dd9b8b0a64330 ^ 0x94903e5011aa7030;
  uRam000000018326fe00 = (uRam000000018326fe00 * -0x2c4cecc2a0a13943 ^ uRam000000018326fec0) + uVar4
  ;
  uRam000000018326fe58 = uRam000000018326fe00 ^ uRam000000018326fec0;
  uRam000000018326fee8 = 0xb83dd9b8b0a64330;
  uRam000000018326fdb8 = func_0x00018ac91680(uRam000000018326feb0 ^ 0x3aeec0c6e55823a0);
  uVar4 = uRam000000018326fdb8 << 0x1e | uRam000000018326fdb8 >> 0x22;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  uRam000000018326fe88 = (uRam000000018326fe88 ^ uVar4) + 0x47c1d8474e0132c0 ^ 0x792f4089a44903db;
  uRam000000018326fe90 = (uRam000000018326fe90 * -0x54652505328e348d ^ uRam000000018326fe88) + uVar4
  ;
  uRam000000018326fe88 = uRam000000018326fe90 ^ uRam000000018326fe88;
  uRam000000018326fd18 = 0x47c1d8474e0132c0;
  uVar4 = (uRam000000018326fda0 ^ _UNK_18197f120) + uRam000000018326fda0 + 0x7fffc8ff7b708b1d;
  uVar5 = (uRam000000018326fda0 ^ _UNK_18197f128) + uRam000000018326fda0 + 0x383e10b8b1539af8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fda0 ^ _UNK_18197f120;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fda0 ^ _UNK_18197f128;
  uRam000000018326fdc0 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018326fda0 + 0x383e10b8b1539af8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018326fda0 + 0x7fffc8ff7b708b1d));
  uRam000000018326fd68 =
       (uRam000000018326fd68 ^ uRam000000018326fdc0) + 0x383e00b8b1528838 ^ 0x4a68fce4a5e30962;
  uRam000000018326feb8 =
       (uRam000000018326feb8 * -0x1d392b46320a3923 ^ uRam000000018326fd68) + uRam000000018326fdc0 ^
       uRam000000018326fd68;
  uRam000000018326fd48 = 0x383e00b8b1528838;
  uRam000000018326fe68 = func_0x00018ac91680(uRam000000018326fec8 + 0x35ff4c976bb67e16 ^ 0xea);
  uVar4 = uRam000000018326fe68 >> 1 | uRam000000018326fe68;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam000000018326fe68;
  uRam000000018326fd40 = uRam000000018326fe58 ^ uVar4 ^ 0xb83dd9b8b0a64330;
  uRam000000018326fd78 = (uRam000000018326fd78 ^ uVar4) + 0xb83dd9b8b0a64330 ^ 0xdbdcbe30c48f2d21;
  uRam000000018326fe40 = (uRam000000018326fe40 * -0x6453ef95a39b18a9 ^ uRam000000018326fd78) + uVar4
  ;
  uRam000000018326fdc8 = uRam000000018326fe40 ^ uRam000000018326fd78;
  uRam000000018326fdb8 = 0xb83dd9b8b0a64330;
  uVar4 = ((uRam000000018326fd38 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018326fd38 & 0x84225cda) * 2) * -uRam000000018326feb8;
  uVar4 = (uVar4 | uRam000000018326fd60) + (uVar4 & uRam000000018326fd60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fd38 =
       func_0x00018ac91680((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = uRam000000018326fd38 >> 0x16 & 0xffffffffff;
  uRam000000018326fd28 = uRam000000018326fee0 ^ uVar4 ^ 0x7fff;
  uRam000000018326fe98 = (uRam000000018326fe98 ^ uVar4) + 0x7fff ^ 0xfbd2ab972abfedb3;
  uRam000000018326fdb0 = (uRam000000018326fdb0 * 0x34fe5c51b7a981dd ^ uRam000000018326fe98) + uVar4;
  uRam000000018326feb8 = uRam000000018326fdb0 ^ uRam000000018326fe98;
  uRam000000018326fe40 = 0x7fff;
  uVar4 = (uRam000000018326fe58 ^ _UNK_18197f130) + uRam000000018326fe98 + 0x7fffc8ff7b708b1d;
  uVar5 = (uRam000000018326fe98 ^ _UNK_18197f138) + (uRam000000018326fe58 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fe58 ^ _UNK_18197f130;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fe98 ^ _UNK_18197f138;
  uRam000000018326fee8 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326fe58 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018326fe98 + 0x7fffc8ff7b708b1d));
  uRam000000018326fed8 =
       (uRam000000018326fed8 ^ uRam000000018326fee8 ^ 0x7fffc8ffff52a837) + 0x8000370000ad57c7 ^
       0x71b12bff774233ca;
  uRam000000018326fdf0 =
       (uRam000000018326fdf0 * -0x2b31e5aa9ab55ceb ^ uRam000000018326fed8) +
       (uRam000000018326fee8 ^ 0x7fffc8ffff52a837);
  uRam000000018326fd50 = uRam000000018326fdf0 ^ uRam000000018326fed8;
  uRam000000018326fe08 = 0x8000370000ad57c7;
  uVar4 = (~uRam000000018326fd08 + 0x8000370000ad57c8) *
          ((uRam000000018326fd80 ^ 0x7fffc8ff7b708b1d) +
          (uRam000000018326fd80 & 0x7fffc8ff7b708b1d) * 2);
  uVar4 = (uVar4 | uRam000000018326feb8) + (uVar4 & uRam000000018326feb8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fdd8 =
       func_0x00018ac91680((uVar4 | 0xffffffff7bdddcda) + (uVar4 & 0xffffffff7bdddcda));
  uRam000000018326fd60 =
       uRam000000018326fd60 ^ ~uRam000000018326fdd8 & 0xffffffffffff8000 ^ 0xd73bc36068d37734;
  uRam000000018326fd78 =
       (uRam000000018326fd78 * -0x11ce02ad69acd1d1 ^ uRam000000018326fd60) +
       (~uRam000000018326fdd8 & 0xffffffffffff8000);
  uRam000000018326fda0 = uRam000000018326fd78 ^ uRam000000018326fd60;
  uRam000000018326fe98 = 0;
  uVar4 = (~uRam000000018326fef8 + 0x7fff400564522829) *
          ((uRam000000018326fd68 ^ 0x7fff4005e0700b0d) +
          (uRam000000018326fd68 & 0x7fff4005e0700b0d) * 2);
  uVar4 = (uVar4 | uRam000000018326fde0) + (uVar4 & uRam000000018326fde0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fd20 =
       func_0x00018ac91680((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uVar4 = uRam000000018326fd20 & 0x7fffffffff ^ 0x7fff400564522828;
  uRam000000018326fd40 = uRam000000018326fd40 ^ uVar4 ^ 0x5c89c464692818f;
  uRam000000018326fee8 = (uRam000000018326fee8 * -0xc990a61e054ff3d ^ uRam000000018326fd40) + uVar4;
  uRam000000018326fda0 = uRam000000018326fee8 ^ uRam000000018326fd40;
  uRam000000018326fe28 = 0;
  param_4 = param_4 & 0x7fff;
  uVar2 = (ulonglong)param_3;
  uVar4 = (ulonglong)param_4 ^ 0x84222325;
  uVar5 = uVar4 ^ uRam000000018326fe08;
  lVar3 = uVar4 + uRam000000018326fe08;
  uVar4 = uVar5 + lVar3;
  uVar6 = (uVar2 ^ uRam000000018326fe08) + uRam000000018326fe08 + uVar2;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar2 ^ uRam000000018326fe08;
  uRam000000018326fdc8 =
       func_0x00018ac91680((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018326fe08 + uVar2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar6 = (param_4 + uVar2) - (ulonglong)((param_3 & param_4) * 2);
  uRam000000018326fea8 =
       (uRam000000018326fea8 ^ uVar2 ^ uRam000000018326fdc8) + uVar6 ^ 0x65e70889785aed9c;
  uRam000000018326fe88 =
       (uRam000000018326fe88 * 0x3f09f2e1aae60a33 ^ uRam000000018326fea8) +
       (uVar2 ^ uRam000000018326fdc8);
  uRam000000018326fd90 = uRam000000018326fe88 ^ uRam000000018326fea8;
  uRam000000018326fdb8 = uRam000000018326fe70 ^ uVar6;
  uVar2 = uVar6 & 0xffffffff;
  uRam000000018326fd48 = uVar2;
  uRam000000018326fd10 = func_0x00018ac91680(uRam000000018326feb8 + 0xffbdffae4fff6eff ^ 0x48);
  uVar4 = uRam000000018326fd10 ^ 0x37bbf1fd;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4)
          & 0x7fffffffffffffff) * -0x790bc2c2bf365d39;
  uRam000000018326fed8 = (uRam000000018326fed8 ^ uVar4) + 0x37bbf1fd ^ 0xe2c5c6a8194b39b5;
  uRam000000018326fee0 = (uRam000000018326fee0 * -0x6fd1ecaccad54483 ^ uRam000000018326fed8) + uVar4
  ;
  uRam000000018326fd90 = uRam000000018326fee0 ^ uRam000000018326fed8;
  uRam000000018326fde0 = 0x37bbf1fd;
  uVar4 = (~uRam000000018326fe00 + 0xc2b5f501) *
          ((uRam000000018326fd98 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018326fd98 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018326fd38) + (uVar4 & uRam000000018326fd38);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fe70 =
       func_0x00018ac91680((uVar4 | 0x4697d625) + (ulonglong)((uint)uVar4 & 0x4697d625));
  uRam000000018326fd08 =
       (uRam000000018326fd08 ^ uRam000000018326fe70 & 0x3ffffffffff) - 0xc2b5f500 ^
       0xcdc686592aa9083d;
  uRam000000018326fdf0 =
       (uRam000000018326fdf0 * -0x48771c9b236dde9 ^ uRam000000018326fd08) +
       (uRam000000018326fe70 & 0x3ffffffffff);
  uRam000000018326fd00 = uRam000000018326fdf0 ^ uRam000000018326fd08;
  uRam000000018326fdb8 = 0x3d4a0b00;
  uVar4 = (~uRam000000018326fe20 + 0xc2b5f501) *
          ((uRam000000018326fe50 ^ 0x84227550) +
          (ulonglong)((uint)uRam000000018326fe50 & 0x84227550) * 2);
  uVar4 = (uVar4 | uRam000000018326fd10) + (uVar4 & uRam000000018326fd10);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fdc0 =
       func_0x00018ac91680((uVar4 | 0x46978050) + (ulonglong)((uint)uVar4 & 0x46978050));
  uVar4 = uRam000000018326fdc0 ^ 0x5675;
  uRam000000018326fdb8 = uRam000000018326fe48 ^ uVar4 ^ 0xc2b64b75;
  uRam000000018326fdf8 = (uRam000000018326fdf8 ^ uVar4) + 0xc2b64b75 ^ 0xd8983188c1434943;
  uRam000000018326fe90 = (uRam000000018326fe90 * -0xbd62a26726b80e3 ^ uRam000000018326fdf8) + uVar4;
  uRam000000018326fd90 = uRam000000018326fe90 ^ uRam000000018326fdf8;
  uRam000000018326fed0 = uRam000000018326fe58 ^ 0xc2b64b75;
  uRam000000018326fe50 = 0xc2b64b75;
  uVar4 = (uRam000000018326fd70 ^ _UNK_18197f140) + uRam000000018326fde8 + 0x46946850;
  uVar5 = (uRam000000018326fde8 ^ _UNK_18197f148) + uRam000000018326fd70 + 0x3d4a0b00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fd70 ^ _UNK_18197f140;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fde8 ^ _UNK_18197f148;
  uRam000000018326fef8 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326fd70 + 0x3d4a0b00) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018326fde8 + 0x46946850));
  uVar4 = (uRam000000018326fef8 ^ 0xfffe4b00) & 0xffffffffffffff00;
  uRam000000018326fe88 =
       (uRam000000018326fdd0 ^ uVar4 ^ 0x100005675 ^ uVar4) + 0x100005675 ^ 0x2df4358f1164c090;
  uRam000000018326fd78 = (uRam000000018326fd78 * -0x732ac129a8c371a5 ^ uRam000000018326fe88) + uVar4
  ;
  uRam000000018326fd38 = uRam000000018326fd78 ^ uRam000000018326fe88;
  uRam000000018326fd08 = 0x5675;
  uVar4 = (~uRam000000018326fd68 + 0xcb2be301) *
          ((uRam000000018326fd40 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018326fd40 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018326fe48) + (uVar4 & uRam000000018326fe48);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fea8 =
       func_0x00018ac91680((uVar4 | 0x4f09c025) + (ulonglong)((uint)uVar4 & 0x4f09c025));
  uVar4 = (uRam000000018326fea8 & 0x7ffffffff) - (uRam000000018326fea8 >> 1 & 0x155555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018326fea8 & 0x7ffffffff;
  uRam000000018326fe78 = (uRam000000018326fd60 ^ uVar4) - 0xcb2be300 ^ 0x3fcf8b7f751c47e2;
  uRam000000018326fd60 = (uRam000000018326fd60 * -0x4d9ba68d9bb93797 ^ uRam000000018326fe78) + uVar4
  ;
  uRam000000018326fe78 = uRam000000018326fd60 ^ uRam000000018326fe78;
  uRam000000018326fd78 = 0x34d41d00;
  uVar4 = (~uRam000000018326fe38 + 0xcb2be301) *
          ((uRam000000018326fe40 ^ 0x84227550) +
          (ulonglong)((uint)uRam000000018326fe40 & 0x84227550) * 2);
  uVar4 = (uVar4 | uRam000000018326fe90) + (uVar4 & uRam000000018326fe90);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fe88 =
       func_0x00018ac91680((uVar4 | 0x4f099650) + (ulonglong)((uint)uVar4 & 0x4f099650));
  uVar4 = uRam000000018326fe88 << 0x22 | (uRam000000018326fe88 & 0x7fffffffffffffff) >> 0x1e;
  uRam000000018326fe30 = uRam000000018326fd70 ^ uVar4 ^ 0xcb2c3975;
  uRam000000018326fdd8 = (uRam000000018326fdd8 ^ uVar4) + 0xcb2c3975 ^ 0x416ff8b2a4b1e946;
  uRam000000018326fe60 = (uRam000000018326fe60 * -0x3da0e70b167ea879 ^ uRam000000018326fdd8) + uVar4
  ;
  uRam000000018326fee8 = uRam000000018326fe60 ^ uRam000000018326fdd8;
  uRam000000018326fd40 = 0xcb2c3975;
  uVar4 = (~uRam000000018326fe18 + 0x34d41d01) *
          ((uRam000000018326feb8 ^ 0x4f0e1a50) +
          (ulonglong)((uint)uRam000000018326feb8 & 0x4f0e1a50) * 2);
  uVar4 = (uVar4 | uRam000000018326fd18) + (uVar4 & uRam000000018326fd18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fe28 =
       func_0x00018ac91680((uVar4 | 0x7bda0750) + (ulonglong)((uint)uVar4 & 0x7bda0750));
  uRam000000018326fe08 = uRam000000018326fe10 ^ uRam000000018326fe28 ^ 0x100005675;
  uRam000000018326fde8 =
       (uRam000000018326fde8 ^ uRam000000018326fe28) + 0x100005675 ^ 0x4ab0c8ea59007075;
  uRam000000018326fda0 =
       (uRam000000018326fda0 * -0x57fbb0349fbc0de9 ^ uRam000000018326fde8) + uRam000000018326fe28;
  uRam000000018326fdb8 = uRam000000018326fda0 ^ uRam000000018326fde8;
  uRam000000018326fd00 = 0x5675;
  uRam000000018326feb8 = func_0x00018ac91680(uRam000000018326fe10 + 0x8700139cffafff ^ 0xb6);
  uVar4 = (uRam000000018326feb8 ^ 0x9872a880) & 0x7fffffffffffffff;
  uRam000000018326fd78 = (uRam000000018326fd78 ^ uVar4) - 0x9872a880 ^ 0x2d89fc6746b62598;
  uRam000000018326fd58 = (uRam000000018326fd58 * 0x468c492974f06b3f ^ uRam000000018326fd78) + uVar4;
  uRam000000018326fec0 = uRam000000018326fd58 ^ uRam000000018326fd78;
  uRam000000018326fe78 = 0x678d5780;
  uVar4 = (~uRam000000018326fde8 + 0x9872a881) *
          ((uRam000000018326fe98 ^ 0x84227550) +
          (ulonglong)((uint)uRam000000018326fe98 & 0x84227550) * 2);
  uVar4 = (uVar4 | uRam000000018326fe10) + (uVar4 & uRam000000018326fe10);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fd30 =
       func_0x00018ac91680((uVar4 | 0x1c50ddd0) + (ulonglong)((uint)uVar4 & 0x1c50ddd0));
  uRam000000018326fe10 = uRam000000018326fd88 ^ uRam000000018326fd30 ^ 0x9872fef5;
  uRam000000018326fee0 =
       (uRam000000018326fee0 ^ uRam000000018326fd30) + 0x9872fef5 ^ 0x30cf901ba4a2f30c;
  uRam000000018326fdf0 =
       (uRam000000018326fdf0 * -0x6858e20504539cb3 ^ uRam000000018326fee0) + uRam000000018326fd30;
  uRam000000018326fdd8 = uRam000000018326fdf0 ^ uRam000000018326fee0;
  uRam000000018326feb8 = 0x9872fef5;
  uVar4 = (~uRam000000018326fd78 + 0xd1e301b5) *
          ((uRam000000018326fdc0 ^ 0xb399d2d8) +
          (ulonglong)((uint)uRam000000018326fdc0 & 0xb399d2d8) * 2);
  uVar4 = (uVar4 | uRam000000018326fd10) + (uVar4 & uRam000000018326fd10);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fd60 =
       func_0x00018ac91680((uVar4 | 0x627ad36c) + (ulonglong)((uint)uVar4 & 0x627ad36c));
  uVar5 = uRam000000018326fd60 ^ 0x2db1dc960c6f22e4;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar5;
  uRam000000018326fee8 = uRam000000018326fd58 ^ uVar5 ^ 0x1099ef3b1;
  uRam000000018326fed0 = (uRam000000018326fed0 ^ uVar5) + 0x1099ef3b1 ^ 0x1c20bac25c825f86;
  uRam000000018326fe80 = (uRam000000018326fe80 * 0x484fa066cecde765 ^ uRam000000018326fed0) + uVar5;
  uRam000000018326fe58 = uRam000000018326fe80 ^ uRam000000018326fed0;
  uRam000000018326fe00 = 0x99ef3b1;
  uVar4 = (uRam000000018326fd50 ^ _UNK_18197f150) + uRam000000018326fdf8 + 0xb399d2d8;
  uVar5 = (uRam000000018326fdf8 ^ _UNK_18197f158) + uRam000000018326fd50 + 0xd1e301b4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fd50 ^ _UNK_18197f150;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fdf8 ^ _UNK_18197f158;
  uRam000000018326fe88 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326fd50 + 0xd1e301b4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018326fdf8 + 0xb399d2d8));
  uRam000000018326fec0 =
       (uRam000000018326fe18 ^ uRam000000018326fe88 * -0x4435da85d869a5f1) + 0x11a301b4 ^
       0x529f48afc543ef80;
  uRam000000018326fef0 =
       (uRam000000018326fef0 * -0x5b7edef5645d8973 ^ uRam000000018326fec0) +
       uRam000000018326fe88 * -0x4435da85d869a5f1;
  uRam000000018326fec0 = uRam000000018326fef0 ^ uRam000000018326fec0;
  uRam000000018326fd90 = uRam000000018326fd68 ^ 0x11a301b4;
  uRam000000018326fe18 = 0x11a301b4;
  uVar4 = (uRam000000018326fd80 ^ _UNK_18197f160) + uRam000000018326fe30 + 0x627ad36c;
  uVar5 = (uRam000000018326fe30 ^ _UNK_18197f168) + uRam000000018326fd80 + 0x23460368;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fd80 ^ _UNK_18197f160;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fe30 ^ _UNK_18197f168;
  uRam000000018326fdc8 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326fd80 + 0x23460368) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018326fe30 + 0x627ad36c));
  uVar4 = (uRam000000018326fdc8 ^ 0x1fbd283c4de878a8) << 2 | uRam000000018326fdc8 >> 0x3e;
  uRam000000018326fdd8 = uRam000000018326fe80 ^ uVar4 ^ 0x1099ef3b1;
  uRam000000018326fd50 = (uRam000000018326fd50 ^ uVar4) + 0x1099ef3b1 ^ 0x71a9cc86271eba81;
  uRam000000018326fd88 = (uRam000000018326fd88 * 0x1b0bae2fb07206f ^ uRam000000018326fd50) + uVar4;
  uRam000000018326fee0 = uRam000000018326fd88 ^ uRam000000018326fd50;
  uRam000000018326fd18 = 0x99ef3b1;
  uRam000000018326fd30 = func_0x00018ac91680(uRam000000018326fd38 ^ 0x1f007bdb002127);
  uRam000000018326fe80 = (ulonglong)(~(uint)((uRam000000018326fd30 ^ 0x19e7220) >> 5) & 0x99ef3b1);
  uRam000000018326fe60 = uRam000000018326fe60 ^ uRam000000018326fe80 ^ 0x6bf7d69944e5197;
  uRam000000018326fd98 =
       (uRam000000018326fd98 * 0x53fa2bf38db592f1 ^ uRam000000018326fe60) + uRam000000018326fe80;
  uRam000000018326fd38 = uRam000000018326fd98 ^ uRam000000018326fe60;
  uRam000000018326fdd0 = 0;
  uVar4 = ((uRam000000018326fef0 ^ 0x84227550) +
          (ulonglong)((uint)uRam000000018326fef0 & 0x84227550) * 2) * -uRam000000018326fe00;
  uVar4 = (uVar4 | uRam000000018326fda0) + (uVar4 & uRam000000018326fda0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fd48 =
       func_0x00018ac91680((uVar4 | 0x84227550) + (ulonglong)((uint)uVar4 & 0x84227550));
  uRam000000018326fdc8 = uRam000000018326fec0 ^ uRam000000018326fd48 ^ 0x5675;
  uRam000000018326fe20 = (uRam000000018326fe20 ^ uRam000000018326fd48) + 0x5675 ^ 0x25ff500a0e9ba526
  ;
  uRam000000018326fe68 =
       (uRam000000018326fe68 * 0x7c8824b1617f882b ^ uRam000000018326fe20) + uRam000000018326fd48;
  uRam000000018326fd80 = 0x5675;
  uVar4 = (uRam000000018326fdf8 ^ _UNK_18197f170) + uRam000000018326fe68 + 0xb399d2d8;
  uVar5 = (uRam000000018326fe68 ^ _UNK_18197f178) + uRam000000018326fdf8 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fdf8 ^ _UNK_18197f170;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fe68 ^ _UNK_18197f178;
  uVar4 = func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326fdf8 + 0xffffffff)
                              ^ (uVar4 << 0x1d | uVar4 >> 0x23) -
                                (uRam000000018326fe68 + 0xb399d2d8));
  uVar4 = uVar4 << 0x2c | uVar4 >> 0x14;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar4;
  uRam000000018326fd18 = (uRam000000018326fd18 ^ uVar4) + 0xc8440e02 ^ 0x1ef0f5e7894f36bd;
  uRam000000018326fda0 = (uRam000000018326fda0 * -0xc486e4a984b9bc5 ^ uRam000000018326fd18) + uVar4;
  uRam000000018326fd00 = uRam000000018326fda0 ^ uRam000000018326fd18;
  uRam000000018326fe08 = 0xc8440e02;
  uVar4 = (uRam000000018326fed0 ^ _UNK_18197f180) + uRam000000018326fd88 + 0xb399d2d8;
  uVar5 = (uRam000000018326fd88 ^ _UNK_18197f188) + uRam000000018326fed0 + 0xc8440e02;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fed0 ^ _UNK_18197f180;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018326fd88 ^ _UNK_18197f188;
  uRam000000018326fed0 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018326fed0 + 0xc8440e02) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018326fd88 + 0xb399d2d8));
  uVar4 = (uRam000000018326fed0 ^ 0x2b99a606a5e7b9fa) * 0x36c335e00ba6d65;
  uRam000000018326fec8 = uRam000000018326fec8 ^ uVar4 ^ 0x943af5f95b6f2def;
  uRam000000018326fe48 = (uRam000000018326fe48 * 0x84925b6f9ed2d21 ^ uRam000000018326fec8) + uVar4;
  uRam000000018326fd68 = uRam000000018326fe48 ^ uRam000000018326fec8;
  uRam000000018326fe80 = 0;
  uRam000000018326fd48 = func_0x00018ac91680(uRam000000018326feb0 ^ 0x32ff7c4fffe1a7);
  uVar4 = uRam000000018326fd48 ^ 0x5675;
  uRam000000018326fe90 = uRam000000018326fe58 ^ uVar4 ^ 0x5675;
  uRam000000018326fef0 = (uRam000000018326fef0 ^ uVar4) + 0x5675 ^ 0x743008a9e303700e;
  uRam000000018326fdd0 = (uRam000000018326fdd0 * -0x79f081fd780fbac5 ^ uRam000000018326fef0) + uVar4
  ;
  uRam000000018326fe48 = uRam000000018326fdd0 ^ uRam000000018326fef0;
  uRam000000018326fe98 = 0x5675;
  uRam000000018326fe78 = func_0x00018ac91680(uRam000000018326fe68 + 0xffe3007bdcffe1ff ^ 0x61);
  uRam000000018326fe18 = uRam000000018326fe18 ^ uRam000000018326fe78 ^ 0xb6a5566a928e4212;
  uRam000000018326fed0 =
       (uRam000000018326fed0 * 0x4c5c4147557ee7f7 ^ uRam000000018326fe18) + uRam000000018326fe78;
  uRam000000018326fe30 = uRam000000018326fed0 ^ uRam000000018326fe18;
  uRam000000018326fd20 = 0;
  uVar4 = (uRam000000018326fe78 ^ 0x84227550) + uRam000000018326fda8 + 0x84227550;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018326fe78 ^ 0x84227550;
  uVar5 = ((uRam000000018326fda8 + uRam000000018326fe78) * 0x2000 |
          uRam000000018326fda8 + uRam000000018326fe78 >> 0x33) ^ uRam000000018326fda8;
  uRam000000018326fd98 =
       func_0x00018ac91680((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018326fe78 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018326fda8 + 0x84227550));
  uRam000000018326fd58 = uRam000000018326fd00 ^ uRam000000018326fd98 ^ 0x5675;
  uRam000000018326fd08 = (uRam000000018326fd08 ^ uRam000000018326fd98) + 0x5675 ^ 0xd7b2412d5be3c4a7
  ;
  uRam000000018326fe78 =
       (uRam000000018326fe78 * -0x5d2b835015f77c15 ^ uRam000000018326fd08) + uRam000000018326fd98;
  uRam000000018326fe90 = uRam000000018326fe78 ^ uRam000000018326fd08;
  uRam000000018326fe58 = 0x5675;
  uVar4 = (~uRam000000018326fd58 + 0x5676) *
          ((uVar2 ^ 0x84222325 ^ uRam000000018326fd38) +
          (ulonglong)((uint)uRam000000018326fd38 & (uint)(uVar2 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uRam000000018326fe00) + (uVar4 & uRam000000018326fe00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018326fe08 =
       func_0x00018ac91680((uVar2 ^ 0x84227550 | uVar4) +
                           (ulonglong)((uint)(uVar2 ^ 0x84227550) & (uint)uVar4));
  uVar4 = uRam000000018326fe08 >> 1 | uRam000000018326fe08;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018326fe08;
  lVar3 = uVar2 - ((uint)uVar6 & 0x5675) * 2;
  uRam000000018326fdd8 = lVar3 + 0x5675;
  uRam000000018326fd98 = (uRam000000018326fd98 ^ uVar4) + lVar3 + 0x5675 ^ 0x5c12025400bb41a3;
  uRam000000018326fd88 = (uRam000000018326fd88 * 0x75b68349412a2081 ^ uRam000000018326fd98) + uVar4;
  uRam000000018326feb8 = uRam000000018326fd88 ^ uRam000000018326fd98;
  uRam000000018326fd28 = uRam000000018326fdc0 ^ uRam000000018326fdd8;
  uRam000000018326fdd8 = uRam000000018326fdd8 & 0xffffffff;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14844,0x335);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac8891b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18197d2a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fL; aVn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ac91710, runtime 6ffff28a1710) =====

void FUN_18ac91710(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ac9175b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18197f320 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fL; aVo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ac29d10, runtime 6ffff2839d10) =====

void FUN_18ac29d10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ac29d99 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18196e3b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



