// ===== Lsixtwo/li$ut; _21da57d59134a6a5e8fb76f3a1cb4a2d ()V (handler @ image 187ec2a00, runtime 6fffefad2a00) =====

void FUN_187ec2a00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187ec2adc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e096f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/li$ut; duE ()F (handler @ image 187e903a0, runtime 6fffefaa03a0) =====

void FUN_187e903a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187e903c5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e015a0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ut; duF ()F (handler @ image 187e905b0, runtime 6fffefaa05b0) =====

void FUN_187e905b0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187e905d5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e01680 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ut; duG ()F (handler @ image 187e907c0, runtime 6fffefaa07c0) =====

void FUN_187e907c0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187e907e5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e01760 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ut; duH ([B)Ljava/lang/String; (handler @ image 187e909d0, runtime 6fffefaa09d0) =====

void FUN_187e909d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000187e90a70 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e01980 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ut; duI (IJ)Ljava/lang/String; (handler @ image 187eb8490, runtime 6fffefac8490) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187eb8490(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar8 = (uRam00000001831a80c8 ^ _UNK_180e08050) + uRam00000001831a8048 + 0x3497d5766759784e;
  uVar9 = (uRam00000001831a8048 ^ _UNK_180e08058) + uRam00000001831a80c8 + 0x6b3da88d185f83fe;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a80c8 ^ _UNK_180e08050;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a8048 ^ _UNK_180e08058;
  uRam00000001831a7d60 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831a80c8 + 0x6b3da88d185f83fe) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831a8048 + 0x3497d5766759784e));
  uVar8 = uRam00000001831a7d18 - (uRam00000001831a7d18 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001831a7d18;
  uRam00000001831a7b60 = (uRam00000001831a7b60 ^ uVar8) + 0x7fbffdfffb7fdbff ^ 0x21566da96cfd16fe;
  uRam00000001831a7d80 = (uRam00000001831a7d80 * -0xcaea41c1fd024c5 ^ uRam00000001831a7b60) + uVar8;
  uRam00000001831a7c80 = uRam00000001831a7d80 ^ uRam00000001831a7b60;
  uRam00000001831a7b28 = 0x7fbffdfffb7fdbff;
  uVar8 = (uRam00000001831a8028 ^ _UNK_180e08060) + uRam00000001831a7ed0 + 0x2a0f742b15589aaa;
  uVar9 = (uRam00000001831a7ed0 ^ _UNK_180e08068) + uRam00000001831a8028 + 0x2348bcebc96b8ee5;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a8028 ^ _UNK_180e08060;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7ed0 ^ _UNK_180e08068;
  uRam00000001831a7e68 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831a8028 + 0x2348bcebc96b8ee5) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831a7ed0 + 0x2a0f742b15589aaa));
  uVar8 = uRam00000001831a7e68 & 0xffffffffffffff ^ 0x2a0f742b917ab98f;
  uRam00000001831a7e78 = (uRam00000001831a7e78 ^ uVar8) + 0x947c8c05811376a ^ 0x1034b6aa34c9601e;
  uRam00000001831a7ed0 = (uRam00000001831a7ed0 * -0x7fd39825e114c30f ^ uRam00000001831a7e78) + uVar8
  ;
  uRam00000001831a7c10 = uRam00000001831a7ed0 ^ uRam00000001831a7e78;
  uRam00000001831a7f78 = uRam00000001831a7fb8 ^ 0x947c8c05811376a;
  uRam00000001831a7e00 = 0x947c8c05811376a;
  uVar8 = (uRam00000001831a7e10 ^ _UNK_180e08070) + uRam00000001831a7ba8 + 0x84225cda;
  uVar9 = (uRam00000001831a7ba8 ^ _UNK_180e08078) + uRam00000001831a7e10 + 0x4d3abfddbcf3e31c;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a7e10 ^ _UNK_180e08070;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7ba8 ^ _UNK_180e08078;
  uRam00000001831a7c18 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831a7e10 + 0x4d3abfddbcf3e31c) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831a7ba8 + 0x84225cda));
  uRam00000001831a7f78 = uRam00000001831a7fd0 ^ uRam00000001831a7d98 ^ 0x4d3abfddbcf4631b;
  uRam00000001831a7c90 =
       (uRam00000001831a7c90 ^ uRam00000001831a7d98) + 0x4d3abfddbcf4631b ^ 0x93f0e77c13d6c201;
  uRam00000001831a7f70 =
       (uRam00000001831a7f70 * -0x22029872395b8b3d ^ uRam00000001831a7c90) + uRam00000001831a7d98;
  uRam00000001831a8088 = uRam00000001831a7f70 ^ uRam00000001831a7c90;
  uRam00000001831a7f58 = 0x4d3abfddbcf4631b;
  uRam00000001831a7d48 = func_0x000187ebefb0(uRam00000001831a7eb8 + 0xfca3a119c90245c0 ^ 1);
  uVar8 = uRam00000001831a7d48 & 0x7ffffffff8000000;
  uRam00000001831a7f28 = uRam00000001831a7ce8 ^ uVar8 ^ 0x7fff;
  uRam00000001831a7bb8 = (uRam00000001831a7bb8 ^ uVar8) + 0x7fff ^ 0x7295f73bd478c31;
  uRam00000001831a7e00 = (uRam00000001831a7e00 * -0xc952a2391119125 ^ uRam00000001831a7bb8) + uVar8;
  uRam00000001831a8050 = uRam00000001831a7e00 ^ uRam00000001831a7bb8;
  uRam00000001831a7c28 = 0x7fff;
  uRam00000001831a7e18 = func_0x000187ebefb0(uRam00000001831a7dc0 ^ 0xfcace33266dc9ec8);
  uVar8 = uRam00000001831a7e18 << 0x21 | uRam00000001831a7e18 >> 0x1f;
  uRam00000001831a7c10 = (uRam00000001831a7c10 ^ uVar8) + 0xc0dc00f3353f6f45 ^ 0xc1142d19c634b7b9;
  uRam00000001831a7cc0 = (uRam00000001831a7cc0 * -0x44ea7dff244353dd ^ uRam00000001831a7c10) + uVar8
  ;
  uRam00000001831a7f30 = uRam00000001831a7cc0 ^ uRam00000001831a7c10;
  uRam00000001831a7f18 = uRam00000001831a7dd0 ^ 0xc0dc00f3353f6f45;
  uRam00000001831a7ef0 = 0xc0dc00f3353f6f45;
  uRam00000001831a7e48 = func_0x000187ebefb0(uRam00000001831a7f30 ^ 0x944f706b6864365);
  uVar8 = (uRam00000001831a7e48 & 0x1fffffffffffff) * -0x5a29f9ebe94071a1;
  uRam00000001831a7b38 = uRam00000001831a8028 ^ uVar8 ^ 0x7fff;
  uRam00000001831a7c10 = (uRam00000001831a7c10 ^ uVar8) + 0x7fff ^ 0xf80246cdb1e31017;
  uRam00000001831a7bf0 = (uRam00000001831a7bf0 * -0x21ebb213c385c633 ^ uRam00000001831a7c10) + uVar8
  ;
  uRam00000001831a7f48 = uRam00000001831a7bf0 ^ uRam00000001831a7c10;
  uRam00000001831a7ec8 = 0x7fff;
  uVar8 = (~uRam00000001831a7f38 + 0x193cd1862813b0d7) *
          ((uRam00000001831a8020 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001831a8020 & 0x84225cda) * 2);
  uVar8 = (uVar8 | uRam00000001831a7e68) + (uVar8 & uRam00000001831a7e68);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831a8018 =
       func_0x000187ebefb0((uVar8 | 0x193cd186ac31ec0c) + (uVar8 & 0x193cd186ac31ec0c));
  uRam00000001831a7bb8 = uRam00000001831a7b58 ^ uRam00000001831a80f8 ^ 0x193cd186281430d5;
  uRam00000001831a8030 =
       (uRam00000001831a8030 ^ uRam00000001831a80f8) + 0x193cd186281430d5 ^ 0xa0c2e831d4ab21d0;
  uRam00000001831a8068 =
       (uRam00000001831a8068 * -0x1b686d9332507d71 ^ uRam00000001831a8030) + uRam00000001831a80f8;
  uRam00000001831a7cc8 = uRam00000001831a8068 ^ uRam00000001831a8030;
  uRam00000001831a8008 = uRam00000001831a7ef8 ^ 0x193cd186281430d5;
  uRam00000001831a7c98 = 0x193cd186281430d5;
  uVar8 = (uRam00000001831a7c80 ^ _UNK_180e08080) + uRam00000001831a7bf0 + 0x193cd186ac3613f0;
  uVar9 = (uRam00000001831a7bf0 ^ _UNK_180e08088) + uRam00000001831a7c80 + 0xe6c32e79d7ec4f2a;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a7c80 ^ _UNK_180e08080;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7bf0 ^ _UNK_180e08088;
  uRam00000001831a7bc8 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831a7c80 + 0xe6c32e79d7ec4f2a) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831a7bf0 + 0x193cd186ac3613f0));
  uVar8 = (uRam00000001831a7bc8 ^ 0xde8908adb5bdbdf2) & 0x7fffffffffffffff;
  uVar9 = uVar8 - (((uRam00000001831a7bc8 ^ 0xde8908adb5bdbdf2) & 0x7fffffffffffffff) >> 1 &
                  0x1555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar8;
  uRam00000001831a7e78 = uRam00000001831a8080 ^ uVar8 ^ 0x7fff;
  uRam00000001831a7b58 = (uRam00000001831a7b58 ^ uVar8) + 0x7fff ^ 0x72cbcad65041d628;
  uRam00000001831a7e48 = (uRam00000001831a7e48 * -0x6c06df8be2746b89 ^ uRam00000001831a7b58) + uVar8
  ;
  uRam00000001831a7b80 = uRam00000001831a7e48 ^ uRam00000001831a7b58;
  uRam00000001831a7cb8 = 0x7fff;
  uRam00000001831a7b08 = func_0x000187ebefb0(uRam00000001831a7e28 ^ 0xf8cf38188fccc452);
  uVar8 = uRam00000001831a7b08 ^ 0x7fbffdfffb7fdbff;
  uRam00000001831a7c28 = uRam00000001831a7cd0 ^ uVar8 ^ 0x8907c6c053911369;
  uRam00000001831a80f8 = (uRam00000001831a80f8 ^ uVar8) + 0x8907c6c053911369 ^ 0x3b719bfad38e4975;
  uRam00000001831a7f90 = (uRam00000001831a7f90 * 0x179b26757f102d21 ^ uRam00000001831a80f8) + uVar8;
  uRam00000001831a7cc8 = uRam00000001831a7f90 ^ uRam00000001831a80f8;
  uRam00000001831a7e20 = 0x8907c6c053911369;
  uVar8 = (~uRam00000001831a7eb0 + 0x120f9180b02226d5) *
          ((uRam00000001831a7ec0 ^ 0x76f8353f274ccfb0) +
          (uRam00000001831a7ec0 & 0x76f8353f274ccfb0) * 2);
  uVar8 = (uVar8 | uRam00000001831a7d50) + (uVar8 & uRam00000001831a7d50);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831a7d30 =
       func_0x000187ebefb0((uVar8 | 0x64f7a4bf976ee964) + (uVar8 & 0x64f7a4bf976ee964));
  uVar8 = uRam00000001831a7d60 ^ 0x76f8353fa36eec95;
  uRam00000001831a7e80 = uRam00000001831a80d8 ^ uVar8 ^ 0x8907c6c053911369;
  uRam00000001831a7bd8 = (uRam00000001831a7bd8 ^ uVar8) + 0x8907c6c053911369 ^ 0x85768347057cc9b0;
  uRam00000001831a7d60 = (uRam00000001831a7d60 * -0x77570d82346bc4d5 ^ uRam00000001831a7bd8) + uVar8
  ;
  uRam00000001831a7e38 = uRam00000001831a7d60 ^ uRam00000001831a7bd8;
  uRam00000001831a7d18 = 0x8907c6c053911369;
  uVar8 = (uRam00000001831a7f80 ^ _UNK_180e08090) + uRam00000001831a7d68 + 0x8907c6c0d7b3304c;
  uVar9 = (uRam00000001831a7d68 ^ _UNK_180e08098) + uRam00000001831a7f80 + 0x8907c6c053911369;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a7f80 ^ _UNK_180e08090;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7d68 ^ _UNK_180e08098;
  uRam00000001831a7d60 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831a7f80 + 0x8907c6c053911369) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831a7d68 + 0x8907c6c0d7b3304c));
  uRam00000001831a7b70 =
       (uRam00000001831a7d60 ^ 0x907c6c053911369) << 0x10 |
       ((uRam00000001831a7d60 ^ 0x907c6c053911369) & 0x1fffffffffffffff) >> 0x30;
  uRam00000001831a7f88 = uRam00000001831a7f88 ^ uRam00000001831a7b70 ^ 0x5b91ac0989c017a4;
  uRam00000001831a7c88 =
       (uRam00000001831a7c88 * -0x1d7ca040ce4deb43 ^ uRam00000001831a7f88) + uRam00000001831a7b70;
  uRam00000001831a80d0 = uRam00000001831a7c88 ^ uRam00000001831a7f88;
  uRam00000001831a7cb8 = 0;
  uRam00000001831a7ba8 = func_0x000187ebefb0(uRam00000001831a7f98 ^ 0xffbc007b5a001dde);
  uVar8 = (uRam00000001831a7ba8 << 0x2c | uRam00000001831a7ba8 >> 0x14) >> 0x2b |
          (uRam00000001831a7ba8 >> 0x14) << 0x15;
  uRam00000001831a7bb0 = uRam00000001831a7ce0 ^ uVar8 ^ 0x7fff;
  uRam00000001831a8080 = (uRam00000001831a8080 ^ uVar8) + 0x7fff ^ 0xd63c86536e69f4d0;
  uRam00000001831a7e30 = (uRam00000001831a7e30 * -0x4f01aa76f2323e13 ^ uRam00000001831a8080) + uVar8
  ;
  uRam00000001831a7ea0 = uRam00000001831a7e30 ^ uRam00000001831a8080;
  uRam00000001831a7ca8 = 0x7fff;
  uVar8 = (uRam00000001831a7ee8 ^ _UNK_180e080a0) + uRam00000001831a7e18 + 0x7fbffdff7f5df8da;
  uVar9 = (uRam00000001831a7e18 ^ _UNK_180e080a8) + (uRam00000001831a7ee8 - 1);
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a7ee8 ^ _UNK_180e080a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7e18 ^ _UNK_180e080a8;
  uVar8 = func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831a7ee8 - 1) ^
                              (uVar8 << 0x1d | uVar8 >> 0x23) -
                              (uRam00000001831a7e18 + 0x7fbffdff7f5df8da));
  uRam00000001831a80c8 =
       (uRam00000001831a80c8 ^ uVar8 & 0xffffffffc0000000) + 0x8040020004802400 ^ 0x5726dc1c0a4f4f24
  ;
  uRam00000001831a7c48 =
       (uRam00000001831a7c48 * 0x1a502ab3878aee5 ^ uRam00000001831a80c8) +
       (uVar8 & 0xffffffffc0000000);
  uRam00000001831a7ef0 = uRam00000001831a7c48 ^ uRam00000001831a80c8;
  uRam00000001831a7cc8 = uRam00000001831a7ec8 ^ 0x8040020004802400;
  uRam00000001831a7fe0 = -0x7fbffdfffb7fdc00;
  uRam00000001831a80c8 = func_0x000187ebefb0(uRam00000001831a7b58 ^ 0xffd3ff7cd6001d5e);
  uVar8 = uRam00000001831a80c8 & 0x7fffffffffffffff ^ 0x7fff;
  uRam00000001831a7c40 = uRam00000001831a7df8 ^ uVar8 ^ 0x7fff;
  uRam00000001831a7e50 = (uRam00000001831a7e50 ^ uVar8) + 0x7fff ^ 0x4daeb910959f7b80;
  uRam00000001831a8058 = (uRam00000001831a8058 * -0x6dbc0e917762ea21 ^ uRam00000001831a7e50) + uVar8
  ;
  uRam00000001831a7cf0 = uRam00000001831a8058 ^ uRam00000001831a7e50;
  uRam00000001831a7ed0 = 0x7fff;
  uRam00000001831a7df0 = func_0x000187ebefb0(uRam00000001831a80a8 ^ 0x5c007b49ffe16b);
  auVar7 = _UNK_1800170c0;
  uRam00000001831a7e40 = uRam00000001831a7c28 ^ uRam00000001831a7df0 ^ 0x7fff;
  uRam00000001831a7e48 = (uRam00000001831a7e48 ^ uRam00000001831a7df0) + 0x7fff ^ 0x9887ba26c2125c4f
  ;
  uRam00000001831a7cf0 =
       (uRam00000001831a7cf0 * -0x58d78a4effa1871 ^ uRam00000001831a7e48) + uRam00000001831a7df0;
  uRam00000001831a7f68 = uRam00000001831a7cf0 ^ uRam00000001831a7e48;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  uRam00000001831a7fd0 = 0x7fff;
  auVar6 = pshufb(auVar5 ^ _UNK_180e080b0,_UNK_1800170c0);
  uVar9 = auVar6._8_8_ + auVar6._0_8_;
  uVar8 = uVar9 + uRam00000001831a7f48;
  if (auVar6._4_4_ < 0) {
    uVar8 = uRam00000001831a7cb8 ^ uVar9;
  }
  uRam00000001831a8068 = func_0x000187ebefb0(SUB161(auVar5 ^ _UNK_180e080b0,5) ^ uVar8);
  uVar3 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam00000001831a7c58 =
       (uRam00000001831a7c58 ^ param_4 ^ uRam00000001831a8068) + uVar3 ^ 0xdcf0fb8fd5478e37;
  uRam00000001831a80f0 =
       (uRam00000001831a80f0 * 0x2351d695e94f7287 ^ uRam00000001831a7c58) +
       (param_4 ^ uRam00000001831a8068);
  uRam00000001831a8060 = uRam00000001831a80f0 ^ uRam00000001831a7c58;
  param_3 = param_3 & 0xffffffff;
  uVar8 = uVar3 ^ 0x84222325 ^ uRam00000001831a7d80;
  lVar4 = (uVar3 ^ 0x84222325) + uRam00000001831a7cd0;
  uVar9 = uVar8 + lVar4;
  uVar10 = (param_3 ^ uRam00000001831a7cd0) + uRam00000001831a7d80 + param_3;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ param_3 ^ uRam00000001831a7cd0;
  uRam00000001831a7f10 = uVar3;
  uRam00000001831a7c48 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831a7d80 + param_3) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar4);
  uVar8 = ((uVar3 | param_3) ^ uRam00000001831a7c48) & 0x7fffffffffffffff;
  uVar3 = uVar3 ^ param_3;
  uRam00000001831a7ff0 = (uRam00000001831a7ff0 ^ uVar8) + uVar3 ^ 0x1feadad4722746a1;
  uRam00000001831a7de0 = (uRam00000001831a7de0 * -0x464385caa32d4ea5 ^ uRam00000001831a7ff0) + uVar8
  ;
  uRam00000001831a7b08 = uRam00000001831a7de0 ^ uRam00000001831a7ff0;
  uRam00000001831a7d68 = uVar3;
  uRam00000001831a7ee0 = func_0x000187ebefb0(lRam00000001831a7e58 + 0xffa100385c0035ffU ^ 0xe1);
  uVar8 = uRam00000001831a7ee0 - (uRam00000001831a7ee0 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam00000001831a7ee0) & 0x7fffffffffffffff;
  uRam00000001831a8010 = (uRam00000001831a8010 ^ uVar8) + 0xddd7e3bf ^ 0x491d198d0831a831;
  uRam00000001831a80a8 = (uRam00000001831a80a8 * 0x6a17d320e6188747 ^ uRam00000001831a8010) + uVar8;
  uRam00000001831a7ec8 = uRam00000001831a80a8 ^ uRam00000001831a8010;
  uRam00000001831a7e20 = 0xddd7e3bf;
  uRam00000001831a80f0 = func_0x000187ebefb0(lRam00000001831a7f08 + 0x11ffd6c10064ffU ^ 0xad);
  uVar8 = uRam00000001831a80f0 >> 1 | uRam00000001831a80f0;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001831a80f0;
  uRam00000001831a7c98 = (uRam00000001831a7c98 ^ uVar8) - 0xbd854d64 ^ 0x3badc77225e8f4ca;
  uRam00000001831a7f18 = (uRam00000001831a7f18 * -0x6650afd49cfbbb51 ^ uRam00000001831a7c98) + uVar8
  ;
  uRam00000001831a7c68 = uRam00000001831a7f18 ^ uRam00000001831a7c98;
  uRam00000001831a7c60 = 0x427ab29c;
  uVar8 = (~uRam00000001831a7ff0 + 0xbd854d65) *
          ((uRam00000001831a8080 ^ 0x84227e7c) +
          (ulonglong)((uint)uRam00000001831a8080 & 0x84227e7c) * 2);
  uVar8 = (uVar8 | uRam00000001831a7d78) + (uVar8 & uRam00000001831a7d78);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831a80b8 =
       func_0x000187ebefb0((uVar8 | 0x39a73318) + (ulonglong)((uint)uVar8 & 0x39a73318));
  uRam00000001831a8020 = uRam00000001831a80d0 ^ uRam00000001831a80b8 ^ 0xbd85aabd;
  uRam00000001831a7fb8 =
       (uRam00000001831a7fb8 ^ uRam00000001831a80b8) + 0xbd85aabd ^ 0xc55729f69659a06a;
  uRam00000001831a80e0 =
       (uRam00000001831a80e0 * 0x2f103c8a1010b96d ^ uRam00000001831a7fb8) + uRam00000001831a80b8;
  uRam00000001831a7b88 = uRam00000001831a80e0 ^ uRam00000001831a7fb8;
  uRam00000001831a7c90 = 0xbd85aabd;
  uRam00000001831a7eb8 = func_0x000187ebefb0(uRam00000001831a7b70 + 0x5006903ffcaff ^ 0xcf);
  uVar8 = uRam00000001831a7eb8 ^ 0xbd85aabd;
  uRam00000001831a7fb0 = uRam00000001831a80c8 ^ uVar8 ^ 0x100005d59;
  uRam00000001831a7de8 = (uRam00000001831a7de8 ^ uVar8) + 0x100005d59 ^ 0xfb45f33bddb22eab;
  uRam00000001831a7fc0 = (uRam00000001831a7fc0 * 0x6e9e949d764bbc1b ^ uRam00000001831a7de8) + uVar8;
  uRam00000001831a7b28 = uRam00000001831a7fc0 ^ uRam00000001831a7de8;
  uRam00000001831a7e18 = 0x5d59;
  uVar8 = (uRam00000001831a7cd0 ^ _UNK_180e080c0) + uRam00000001831a7f60 + 0x84222325;
  uVar9 = (uRam00000001831a7f60 ^ _UNK_180e080c8) + uRam00000001831a7cd0 + 0xe21dcefc;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a7cd0 ^ _UNK_180e080c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7f60 ^ _UNK_180e080c8;
  uRam00000001831a8050 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831a7cd0 + 0xe21dcefc) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831a7f60 + 0x84222325));
  uVar8 = uRam00000001831a8050 - (uRam00000001831a8050 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar9 = (uint)bVar1 + (uint)bVar1 ^ uRam00000001831a8050;
  uVar8 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar9;
  uRam00000001831a7dd8 = (uRam00000001831a7dd8 ^ uVar9) - 0xe21dcefc ^ 0x7bb6916d0e952fd3;
  uRam00000001831a7f50 = (uRam00000001831a7f50 * 0x12a4bca46adaa95 ^ uRam00000001831a7dd8) + uVar9;
  uRam00000001831a80f0 = uRam00000001831a7f50 ^ uRam00000001831a7dd8;
  uRam00000001831a7e08 = 0x1de23104;
  uVar8 = (uRam00000001831a7c70 ^ _UNK_180e080d0) + uRam00000001831a7de8 + 0x84227e7c;
  uVar9 = (uRam00000001831a7de8 ^ _UNK_180e080d8) + uRam00000001831a7c70 + 0xe21dcefc;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a7c70 ^ _UNK_180e080d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7de8 ^ _UNK_180e080d8;
  uRam00000001831a7b18 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831a7c70 + 0xe21dcefc) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831a7de8 + 0x84227e7c));
  uVar8 = (ulonglong)(~(uint)uRam00000001831a7b18 & 0x5d59) ^ 0xe21dcefc;
  uRam00000001831a7d20 = uRam00000001831a7c90 ^ uVar8 ^ 0xe21e2c55;
  uRam00000001831a7ba0 = (uRam00000001831a7ba0 ^ uVar8) + 0xe21e2c55 ^ 0xf2c9cc0bdf56d23a;
  uRam00000001831a7b30 = (uRam00000001831a7b30 * -0x3c237ae884e8c947 ^ uRam00000001831a7ba0) + uVar8
  ;
  uRam00000001831a7c08 = uRam00000001831a7b30 ^ uRam00000001831a7ba0;
  uRam00000001831a7d10 = 0xe21e2c55;
  uRam00000001831a7ea8 = func_0x000187ebefb0(uRam00000001831a7ce0 + 0xb0ffc49fffacff ^ 0xdf);
  uRam00000001831a7e80 = uRam00000001831a7b50 ^ uRam00000001831a7ea8 ^ 0x100005d59;
  uRam00000001831a7de0 =
       (uRam00000001831a7de0 ^ uRam00000001831a7ea8) + 0x100005d59 ^ 0xd2e633f268b866da;
  uRam00000001831a8058 =
       (uRam00000001831a8058 * 0x238d3628dda65c5b ^ uRam00000001831a7de0) + uRam00000001831a7ea8;
  uRam00000001831a7c78 = uRam00000001831a8058 ^ uRam00000001831a7de0;
  uRam00000001831a7eb0 = 0x5d59;
  uVar8 = (uRam00000001831a7ec0 ^ _UNK_180e080e0) + uRam00000001831a7d30 + 0x59f5c09a;
  uVar9 = (uRam00000001831a7d30 ^ _UNK_180e080e8) + uRam00000001831a7ec0 + 0x921779f;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a7ec0 ^ _UNK_180e080e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7d30 ^ _UNK_180e080e8;
  uRam00000001831a80f0 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831a7ec0 + 0x921779f) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831a7d30 + 0x59f5c09a));
  uVar8 = (uRam00000001831a80f0 ^ 0xddd7e3bf) >> 1 | uRam00000001831a80f0 ^ 0xddd7e3bf;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = uRam00000001831a80f0 ^
          (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2;
  uRam00000001831a7e10 = (uRam00000001831a7e10 ^ uVar8) + 0xd4f69420 ^ 0x4bd5a8d2de6b3f33;
  uRam00000001831a7b88 = (uRam00000001831a7b88 * -0x70ff945eab318efd ^ uRam00000001831a7e10) + uVar8
  ;
  uRam00000001831a7f00 = uRam00000001831a7b88 ^ uRam00000001831a7e10;
  uRam00000001831a7f28 = 0xd4f69420;
  uRam00000001831a7c28 = func_0x000187ebefb0(uRam00000001831a7f90 + 0xaaffb002ffabff ^ 0xb9);
  uVar8 = (uRam00000001831a7c28 & 0xffffffffffffff) << 7 |
          (uRam00000001831a7c28 & 0x7fffffffffffffff) >> 0x39;
  uRam00000001831a7db0 = (uRam00000001831a7db0 ^ uVar8) + 0x901639f ^ 0x6e246a990b2c1f84;
  uRam00000001831a7e20 = (uRam00000001831a7e20 * -0x492f9c2a1bc65d75 ^ uRam00000001831a7db0) + uVar8
  ;
  uRam00000001831a7c90 = uRam00000001831a7e20 ^ uRam00000001831a7db0;
  uRam00000001831a7f10 = 0x901639f;
  uVar8 = (~uRam00000001831a7b58 + 0x1202c73f) *
          ((uRam00000001831a7c98 ^ 0x50d4b705) +
          (ulonglong)((uint)uRam00000001831a7c98 & 0x50d4b705) * 2);
  uVar8 = (uVar8 | uRam00000001831a7ce0) + (uVar8 & uRam00000001831a7ce0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831a7d80 =
       func_0x000187ebefb0((uVar8 | 0x42d6703b) + (ulonglong)((uint)uVar8 & 0x42d6703b));
  uVar8 = uRam00000001831a7d80 - (uRam00000001831a7d80 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam00000001831a7d80;
  uRam00000001831a7ff0 = uRam00000001831a80a8 ^ uVar8 ^ 0xe6f95b5e;
  uRam00000001831a7ba8 = (uRam00000001831a7ba8 ^ uVar8) + 0xe6f95b5e ^ 0xc665fc601981ae97;
  uRam00000001831a7cf0 = (uRam00000001831a7cf0 * -0x15badbdd071f3b1 ^ uRam00000001831a7ba8) + uVar8;
  uRam00000001831a7f40 = uRam00000001831a7cf0 ^ uRam00000001831a7ba8;
  uRam00000001831a7e38 = 0xe6f95b5e;
  uVar8 = (uRam00000001831a80a0 ^ _UNK_180e080f0) + uRam00000001831a7b40 + 0x62db787b;
  uVar9 = (uRam00000001831a7b40 ^ _UNK_180e080f8) + uRam00000001831a80a0 + 0xe6f95b5e;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a80a0 ^ _UNK_180e080f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7b40 ^ _UNK_180e080f8;
  uRam00000001831a7db0 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831a80a0 + 0xe6f95b5e) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831a7b40 + 0x62db787b));
  uRam00000001831a7b78 = uRam00000001831a7db0 & 0xffffffffffffff;
  uRam00000001831a7d98 = uRam00000001831a7d98 ^ uRam00000001831a7b78 ^ 0x195ef02ae9a50e31;
  uRam00000001831a7b48 =
       (uRam00000001831a7b48 * 0x3fb070a7fea4a991 ^ uRam00000001831a7d98) + uRam00000001831a7b78;
  uRam00000001831a7f78 = uRam00000001831a7b48 ^ uRam00000001831a7d98;
  uRam00000001831a7eb0 = 0;
  uRam00000001831a7f48 = func_0x000187ebefb0(lRam00000001831a7b68 + 0xff91ff7c0bffe1ffU ^ 4);
  uVar8 = uRam00000001831a7f48 >> 1 | uRam00000001831a7f48;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001831a7f48;
  uRam00000001831a7d78 = uRam00000001831a7b08 ^ uVar8 ^ 0x5d59;
  uRam00000001831a7fb0 = (uRam00000001831a7fb0 ^ uVar8) + 0x5d59 ^ 0x9b36556e21ea6cb7;
  uRam00000001831a7d98 = (uRam00000001831a7d98 * 0x23d462d722be9711 ^ uRam00000001831a7fb0) + uVar8;
  uRam00000001831a7ed0 = uRam00000001831a7d98 ^ uRam00000001831a7fb0;
  uRam00000001831a7d90 = 0x5d59;
  uVar8 = (~uRam00000001831a7be8 + 0x100000000) *
          ((uRam00000001831a7d10 ^ 0x59f5c09a) +
          (ulonglong)((uint)uRam00000001831a7d10 & 0x59f5c09a) * 2);
  uVar8 = (uVar8 | uRam00000001831a7b80) + (uVar8 & uRam00000001831a7b80);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831a8078 =
       func_0x000187ebefb0((uVar8 | 0xa60a3f65) + (ulonglong)((uint)uVar8 & 0xa60a3f65));
  uRam00000001831a7b90 =
       (uRam00000001831a7b90 ^ uRam00000001831a8078 ^ 0xffffffff) + 0x22281c40 ^ 0xd6c073b84831becf;
  uRam00000001831a7ec8 =
       (uRam00000001831a7ec8 * -0x3c768fdd5b4fc69b ^ uRam00000001831a7b90) +
       (uRam00000001831a8078 ^ 0xffffffff);
  uRam00000001831a7d60 = uRam00000001831a7ec8 ^ uRam00000001831a7b90;
  uRam00000001831a7b08 = 0x22281c40;
  uVar8 = (uRam00000001831a7d00 ^ _UNK_180e08100) + uRam00000001831a7c98 + 0x99e5c293;
  uVar9 = (uRam00000001831a7c98 ^ _UNK_180e08108) + uRam00000001831a7d00 + 0x1dc7e1b6;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a7d00 ^ _UNK_180e08100;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831a7c98 ^ _UNK_180e08108;
  uRam00000001831a7c70 =
       func_0x000187ebefb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831a7d00 + 0x1dc7e1b6) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831a7c98 + 0x99e5c293));
  uVar8 = (uRam00000001831a7c70 & 0x1f) << 0x28 | uRam00000001831a7c70 >> 0x18;
  uRam00000001831a7b80 = uRam00000001831a7b80 ^ uVar8 ^ 0x197f6d3e978cccd5;
  uRam00000001831a7fd0 = (uRam00000001831a7fd0 * 0x3952401fd0bf543d ^ uRam00000001831a7b80) + uVar8;
  uRam00000001831a7e70 = uRam00000001831a7fd0 ^ uRam00000001831a7b80;
  uRam00000001831a7c68 = 0;
  lRam00000001831a7d58 = func_0x000187ebefb0(uRam00000001831a80f0 + 0xffe9ff7bc40021ff ^ 0xb0);
  uVar8 = lRam00000001831a7d58 * -0x4ae2258861ae2941;
  uRam00000001831a7d48 = uRam00000001831a7e20 ^ uVar8 ^ 0x5d59;
  uRam00000001831a7c60 = (uRam00000001831a7c60 ^ uVar8) + 0x5d59 ^ 0xd14a9afdbec98843;
  uRam00000001831a7fe0 = (uRam00000001831a7fe0 * -0x593a129ef59da9b3 ^ uRam00000001831a7c60) + uVar8
  ;
  uRam00000001831a7be8 = uRam00000001831a7fe0 ^ uRam00000001831a7c60;
  auVar6._8_8_ = _UNK_180e08118;
  auVar6._0_8_ = uVar3 ^ 0x84222325;
  uRam00000001831a7df8 = 0x5d59;
  auVar7 = pshufb(auVar6 ^ _UNK_180e08120,auVar7);
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar9 + uRam00000001831a7b60;
  if (auVar7._4_4_ < 0) {
    uVar8 = uRam00000001831a7cd8 ^ uVar9;
  }
  uRam00000001831a7c90 = func_0x000187ebefb0(SUB161(auVar6 ^ _UNK_180e08120,5) ^ uVar8);
  uVar8 = ((uVar3 | 0x5d59) ^ uRam00000001831a7c90) << 0x1d | uRam00000001831a7c90 >> 0x23;
  uRam00000001831a7cd0 = uVar3 ^ 0x5d59;
  uRam00000001831a7cd8 = (uRam00000001831a7cd8 ^ uVar8) + uRam00000001831a7cd0 ^ 0x6c3865c94332d595;
  uRam00000001831a7ed0 = (uRam00000001831a7ed0 * -0x619f03c4483a6e7 ^ uRam00000001831a7cd8) + uVar8;
  uRam00000001831a7b18 = uRam00000001831a7ed0 ^ uRam00000001831a7cd8;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b14b,0x434);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187eba721 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e066c8 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/li$ut; duJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 187ebf040, runtime 6fffefacf040) =====

void FUN_187ebf040(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000187ebf07c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e082c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ut; duK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 187ebff30, runtime 6fffefacff30) =====

void FUN_187ebff30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187ebffad did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e08800 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/li$ut; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 187e71820, runtime 6fffefa81820) =====

void FUN_187e71820(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b14b,0x434);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187e718ff did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180df90c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/li$ut; toJson ()Lcom/google/gson/JsonObject; (handler @ image 187e81750, runtime 6fffefa91750) =====

void FUN_187e81750(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b14b,0x434);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187e81831 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dfd710 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



