// ===== STITCHED CORPUS: sixtwo.li$ut =====
// handlers: 10  continuation blocks: 107  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x19c088', '0x1ec2a8', '0x404808', '0x4b72a8', '0xb163f8', '0xda4ad8', '0xe01d40', '0xe023b8', '0xe023c8', '0xe023d8', '0xe023e8', '0xe023f8', '0xe02408', '0xe02418', '0xe029d8', '0xe029e8', '0xe029f8', '0xe02a18', '0xe02a28']

// ===== Lsixtwo/li$ut; _21da57d59134a6a5e8fb76f3a1cb4a2d ()V (handler @ image 187ec2a00, runtime 6fffefad2a00) =====

void FUN_187ec2a00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b14b,0x434)
      /* POOL[0x1b14b,0x434]: es | bJh | sixtwo/lB | ()[Lsixtwo/lB; | sixtwo/li$ut | yoVgv | sixtwo/jN$tY | gCqNy | xCeuB | Lsixtwo/lB; | rMraa | qKoUX | dlmOV | UAYjd | XzVle | hJzfF | abhdR | duI | qjUBr | duH | sixtwo/li$uu | LDJil | OHOtC | peGaU | RkcnG | JluNc | Aqeil | duP | PTYcM | sixtwo/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b14b,0x434)
      /* POOL[0x1b14b,0x434]: es | bJh | sixtwo/lB | ()[Lsixtwo/lB; | sixtwo/li$ut | yoVgv | sixtwo/jN$tY | gCqNy | xCeuB | Lsixtwo/lB; | rMraa | qKoUX | dlmOV | UAYjd | XzVle | hJzfF | abhdR | duI | qjUBr | duH | sixtwo/li$uu | LDJil | OHOtC | peGaU | RkcnG | JluNc | Aqeil | duP | PTYcM | sixtwo/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b14b,0x434)
      /* POOL[0x1b14b,0x434]: es | bJh | sixtwo/lB | ()[Lsixtwo/lB; | sixtwo/li$ut | yoVgv | sixtwo/jN$tY | gCqNy | xCeuB | Lsixtwo/lB; | rMraa | qKoUX | dlmOV | UAYjd | XzVle | hJzfF | abhdR | duI | qjUBr | duH | sixtwo/li$uu | LDJil | OHOtC | peGaU | RkcnG | JluNc | Aqeil | duP | PTYcM | sixtwo/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187e81831 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dfd710 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x7e71902 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e71902(void)

{
  FUN_190ddce00();
  (*_DAT_180dfa0a8)();
  return;
}


// ----- block @ rva 0x7e791d2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e791d2(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180df97a8)();
  return;
}


// ----- block @ rva 0x7e79347 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e79347(void)

{
  FUN_190ddfc90();
  (*_DAT_180df90f8)();
  return;
}


// ----- block @ rva 0x7e7937a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e7937a(void)

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


// ----- block @ rva 0x7e7983e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e7983e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetFloatField /*0x378*/))();
  (*_DAT_180df9778)();
  return;
}


// ----- block @ rva 0x7e7d25c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e7d25c(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(unaff_RSI + JNI->NewGlobalRef /*0xa8*/))();
  FUN_190dcd3d0(0xd50,uVar1);
  (*_DAT_180df9928)();
  return;
}


// ----- block @ rva 0x7e7d361 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e7d361(void)

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


// ----- block @ rva 0x7e7d431 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e7d431(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180df9908)();
  return;
}


// ----- block @ rva 0x7e815f3 -----

void FUN_187e815f3(void)

{
  return;
}


// ----- block @ rva 0x7e8165f -----

void FUN_187e8165f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e81834 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e81834(void)

{
  FUN_190ddce00();
  (*_DAT_180dfe228)();
  return;
}


// ----- block @ rva 0x7e87534 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e87534(void)

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


// ----- block @ rva 0x7e8ba8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e8ba8d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dfea18)();
  return;
}


// ----- block @ rva 0x7e8bc32 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e8bc32(void)

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


// ----- block @ rva 0x7e8be22 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e8be22(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_180dfdae8)();
  return;
}


// ----- block @ rva 0x7e8c1cf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e8c1cf(void)

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


// ----- block @ rva 0x7e8c2e0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e8c2e0(void)

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


// ----- block @ rva 0x7e901c5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e901c5(void)

{
  longlong *in_stack_000000e0;
  
  (**(code **)(in_stack_000000e0 + JNI->CallVoidMethodA /*0x1f8*/))(in_stack_000000e0);
  (**(code **)(in_stack_000000e0 + JNI->ExceptionCheck /*0x720*/))(in_stack_000000e0);
  (*_DAT_180dfd768)();
  return;
}


// ----- block @ rva 0x7e901f6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e901f6(void)

{
  (*_DAT_180dfe008)();
  return;
}


// ----- block @ rva 0x7e9020c -----

void FUN_187e9020c(void)

{
  return;
}


// ----- block @ rva 0x7e90278 -----

void FUN_187e90278(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e903c8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e903c8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7e90429 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e90429(void)

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


// ----- block @ rva 0x7e90441 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e90441(void)

{
  FUN_190dd72e0();
  (*_DAT_180e01628)();
  return;
}


// ----- block @ rva 0x7e9048d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e9048d(void)

{
  FUN_190dd9df0();
  (*_DAT_180e015b8)();
  return;
}


// ----- block @ rva 0x7e904c0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e904c0(void)

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


// ----- block @ rva 0x7e904e7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e904e7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180e015c8)();
  return;
}


// ----- block @ rva 0x7e9050e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e9050e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180e015e8)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7e9051e -----

void FUN_187e9051e(void)

{
  return;
}


// ----- block @ rva 0x7e9052b -----

void FUN_187e9052b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e905d8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e905d8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7e90614 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e90614(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180e01698)();
  return;
}


// ----- block @ rva 0x7e90639 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e90639(void)

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


// ----- block @ rva 0x7e90651 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e90651(void)

{
  FUN_190dd72e0();
  (*_DAT_180e016b8)();
  return;
}


// ----- block @ rva 0x7e90679 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e90679(void)

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


// ----- block @ rva 0x7e9069d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e9069d(void)

{
  FUN_190dd9df0();
  (*_DAT_180e016d8)();
  return;
}


// ----- block @ rva 0x7e906d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e906d0(void)

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


// ----- block @ rva 0x7e9071e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e9071e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180e016c8)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7e9072e -----

void FUN_187e9072e(void)

{
  return;
}


// ----- block @ rva 0x7e9073b -----

void FUN_187e9073b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e907e8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e907e8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7e90849 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e90849(void)

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


// ----- block @ rva 0x7e90861 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e90861(void)

{
  FUN_190dd72e0();
  (*_DAT_180e017b8)();
  return;
}


// ----- block @ rva 0x7e90889 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e90889(void)

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


// ----- block @ rva 0x7e908ad -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e908ad(void)

{
  FUN_190dd9df0();
  (*_DAT_180e017f8)();
  return;
}


// ----- block @ rva 0x7e90907 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e90907(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180e017d8)();
  return;
}


// ----- block @ rva 0x7e9092e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e9092e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180e01788)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7e9093e -----

void FUN_187e9093e(void)

{
  return;
}


// ----- block @ rva 0x7e9094b -----

void FUN_187e9094b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e90a73 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187e90aa9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187e90a73(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7e90ac6 -----

void FUN_187e90ac6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000187e90af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180e01d40 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x7e90b94 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e90b94(longlong param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int in_EAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar10;
  longlong lVar11;
  byte in_XMM0_Bf;
  longlong in_XMM1_Qb;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  uVar12 = in_XMM1_Qb + param_1 + _DAT_1831a73b0;
  if (in_EAX < 0) {
    uVar12 = _DAT_1831a6fa8 ^ in_XMM1_Qb + param_1;
  }
  _DAT_1831a7128 = func_0x000187eb8400(in_XMM0_Bf ^ uVar12);
  uVar9 = _DAT_180e02b00;
  uVar8 = _DAT_180e02af0;
  uVar7 = _DAT_180e02ad0;
  uVar6 = _DAT_180e02ab0;
  uVar5 = _DAT_180e02a90;
  uVar4 = _DAT_180e02a70;
  uVar3 = _DAT_180e02a50;
  uVar10 = -unaff_RSI;
  _DAT_1831a6f20 =
       (_DAT_1831a6f20 ^ _DAT_1831a7128 * 0x497d155dea347ad) - unaff_RSI ^ 0x670d10abbd14a54f;
  _DAT_1831a7388 =
       (_DAT_1831a7388 * 0x5cf4e5f7225a51b3 ^ _DAT_1831a6f20) + _DAT_1831a7128 * 0x497d155dea347ad;
  _DAT_1831a7410 = _DAT_1831a7388 ^ _DAT_1831a6f20;
  _DAT_1831a7280 = uVar10 & 0xffffffff;
  *(char *)(unaff_RBP + 0x50) = (char)uVar10 + (char)((uVar10 & 0xffffffff) / 10) * -10;
  _DAT_1831a6f98 = func_0x000187eb8400(_DAT_1831a7000 + 0xffe0ff8393ffe1ffU ^ 0xd9);
  _DAT_1831a6f10 = (_DAT_1831a6f10 ^ _DAT_1831a6f98) - 0x91 ^ 0x81d657f7344b674a;
  _DAT_1831a7178 = (_DAT_1831a7178 * -0x64da5cbf171be475 ^ _DAT_1831a6f10) + _DAT_1831a6f98;
  _DAT_1831a7390 = _DAT_1831a7178 ^ _DAT_1831a6f10;
  _DAT_1831a74a0 = 0x6f;
  uVar12 = (_DAT_1831a71a8 ^ _DAT_180da4ad0) + _DAT_1831a7120 + 0x84222315;
  uVar13 = (_DAT_1831a7120 ^ _UNK_180da4ad8) + _DAT_1831a71a8 + 0x91;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831a71a8 ^ _DAT_180da4ad0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831a7120 ^ _UNK_180da4ad8;
  _DAT_1831a7460 =
       func_0x000187eb8400((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831a71a8 + 0x91) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831a7120 + 0x84222315));
  uVar12 = _DAT_1831a7460 ^ 0x30;
  _DAT_1831a71c0 = _DAT_1831a74a0 ^ uVar12 ^ 0xc1;
  _DAT_1831a7250 = (_DAT_1831a7250 ^ uVar12) + 0xc1 ^ 0x2f2e0d7aa875bc03;
  _DAT_1831a70d8 = (_DAT_1831a70d8 * 0x7505f1cfca898f19 ^ _DAT_1831a7250) + uVar12;
  _DAT_1831a7300 = _DAT_1831a70d8 ^ _DAT_1831a7250;
  _DAT_1831a7380 = 0xc1;
  _DAT_1831a7410 = func_0x000187eb8400(_DAT_1831a7150 + 0xffdeff8488ffe1ff ^ 0xef);
  uVar12 = (_DAT_1831a7410 ^ 0x2e) & 0x7ffffffff;
  _DAT_1831a7388 = _DAT_1831a7150 ^ uVar12 ^ 0x130;
  _DAT_1831a7100 = (_DAT_1831a7100 ^ uVar12) + 0x130 ^ 0xcdb721b4696e9166;
  _DAT_1831a7348 = (_DAT_1831a7348 * -0x38a87031d529d5a7 ^ _DAT_1831a7100) + uVar12;
  _DAT_1831a7488 = _DAT_1831a7348 ^ _DAT_1831a7100;
  _DAT_1831a7128 = 0x30;
  uVar12 = (~_DAT_1831a74c0 + 0xdd) *
           ((_DAT_1831a7308 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a7308 & 0x84222325) * 2);
  uVar12 = (uVar12 | _DAT_1831a73d8) + (uVar12 & _DAT_1831a73d8);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a71a0 =
       func_0x000187eb8400((uVar12 | 0x842223f9) + (ulonglong)((uint)uVar12 & 0x842223f9));
  _DAT_1831a6fd8 = (_DAT_1831a6fd8 ^ _DAT_1831a71a0 & 0x3ffffffffff) - 0xdc ^ 0x3a1254985e839528;
  _DAT_1831a71a8 =
       (_DAT_1831a71a8 * 0x4934f876fbe1c771 ^ _DAT_1831a6fd8) + (_DAT_1831a71a0 & 0x3ffffffffff);
  _DAT_1831a7318 = _DAT_1831a71a8 ^ _DAT_1831a6fd8;
  _DAT_1831a7070 = 0x24;
  _DAT_1831a74e0 = func_0x000187eb8400(_DAT_1831a6f60 ^ 0x1eff7c03002180);
  uVar12 = _DAT_1831a74e0 ^ 0x20;
  _DAT_1831a6f18 = _DAT_1831a7460 ^ uVar12 ^ 0x30;
  _DAT_1831a6f00 = (_DAT_1831a6f00 ^ uVar12) + 0x30 ^ 0xcbf5ff4c6134340b;
  _DAT_1831a6f48 = (_DAT_1831a6f48 * 0x4a01bebeff0c2e95 ^ _DAT_1831a6f00) + uVar12;
  _DAT_1831a7290 = _DAT_1831a6f48 ^ _DAT_1831a6f00;
  _DAT_1831a7168 = 0x30;
  uVar12 = (~_DAT_1831a6f48 + 0x8b) *
           ((_DAT_1831a70d0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a70d0 & 0x84222325) * 2);
  uVar12 = (uVar12 | _DAT_1831a6f30) + (uVar12 & _DAT_1831a6f30);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a70e0 =
       func_0x000187eb8400((uVar12 | 0x842223af) + (ulonglong)((uint)uVar12 & 0x842223af));
  _DAT_1831a71c8 = (_DAT_1831a71c8 ^ _DAT_1831a70e0) - 0x8a ^ 0x2f2b46810ae7df4b;
  _DAT_1831a7048 = (_DAT_1831a7048 * -0x9812c4e1a457283 ^ _DAT_1831a71c8) + _DAT_1831a70e0;
  _DAT_1831a70d0 = _DAT_1831a7048 ^ _DAT_1831a71c8;
  _DAT_1831a7150 = 0x76;
  uVar12 = (_DAT_1831a7138 ^ _DAT_180b163f0) + _DAT_1831a7228 + 0x84222315;
  uVar13 = (_DAT_1831a7228 ^ _UNK_180b163f8) + _DAT_1831a7138 + 0x8a;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831a7138 ^ _DAT_180b163f0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831a7228 ^ _UNK_180b163f8;
  _DAT_1831a7208 =
       func_0x000187eb8400((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831a7138 + 0x8a) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831a7228 + 0x84222315));
  uVar12 = (ulonglong)((uint)~((int)_DAT_1831a7208 * 2) >> 1 & 0x30);
  _DAT_1831a7010 = _DAT_1831a7070 ^ uVar12 ^ 0xba;
  _DAT_1831a7378 = (_DAT_1831a7378 ^ uVar12) + 0xba ^ 0x266799115f59081a;
  _DAT_1831a70b8 = (_DAT_1831a70b8 * -0x3923960bb2581c9b ^ _DAT_1831a7378) + uVar12;
  _DAT_1831a7468 = _DAT_1831a70b8 ^ _DAT_1831a7378;
  _DAT_1831a6f68 = 0xba;
  _DAT_1831a7108 = func_0x000187eb8400(_DAT_1831a7058 ^ 0x20ff7c4effe151);
  uVar12 = _DAT_1831a7108 ^ 0x4bb2;
  _DAT_1831a7200 = _DAT_1831a6fc0 ^ uVar12 ^ 0x11a;
  _DAT_1831a70a0 = (_DAT_1831a70a0 ^ uVar12) + 0x11a ^ 0x8186210aed1a3224;
  _DAT_1831a6f20 = (_DAT_1831a6f20 * -0x5eeedc5a853999 ^ _DAT_1831a70a0) + uVar12;
  _DAT_1831a7498 = _DAT_1831a6f20 ^ _DAT_1831a70a0;
  _DAT_1831a7328 = 0x1a;
  uVar12 = (~_DAT_1831a73a8 + 0xa4) *
           ((_DAT_1831a72a8 ^ 0x84222352) + (ulonglong)((uint)_DAT_1831a72a8 & 0x84222352) * 2);
  uVar12 = (uVar12 | _DAT_1831a73d0) + (uVar12 & _DAT_1831a73d0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a6f48 =
       func_0x000187eb8400((uVar12 | 0x842223f1) + (ulonglong)((uint)uVar12 & 0x842223f1));
  uVar12 = (ulonglong)(((uint)_DAT_1831a6f48 ^ 0x45) & 0x77) ^ 0xa3;
  _DAT_1831a7338 = (_DAT_1831a7338 ^ uVar12) + 0xd4 ^ 0xc305d9c80acb9e69;
  _DAT_1831a7288 = (_DAT_1831a7288 * 0x4fe1a04e0dac3c71 ^ _DAT_1831a7338) + uVar12;
  _DAT_1831a7238 = _DAT_1831a7288 ^ _DAT_1831a7338;
  _DAT_1831a6f08 = 0xd4;
  uVar12 = (_DAT_1831a6f60 ^ _DAT_180e02a10) + _DAT_1831a7138 + 0x84222352;
  uVar13 = (_DAT_1831a7138 ^ _UNK_180e02a18) + _DAT_1831a6f60 + 0xa3;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831a6f60 ^ _DAT_180e02a10;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831a7138 ^ _UNK_180e02a18;
  _DAT_1831a6fb8 =
       func_0x000187eb8400((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831a6f60 + 0xa3) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831a7138 + 0x84222352));
  uVar12 = (ulonglong)((uint)_DAT_1831a6fb8 & 0x77) << 0x35;
  _DAT_1831a70d8 = (_DAT_1831a70d8 ^ uVar12) + 0x23 ^ 0xc44b76daa92477f2;
  _DAT_1831a71a8 = (_DAT_1831a71a8 * 0x373a976c7b8a0e77 ^ _DAT_1831a70d8) + uVar12;
  _DAT_1831a7220 = _DAT_1831a71a8 ^ _DAT_1831a70d8;
  _DAT_1831a7040 = 0x23;
  uVar12 = (_DAT_1831a74a8 ^ _DAT_180e02a20) + _DAT_1831a6f48 + 0x842223f1;
  uVar13 = (_DAT_1831a6f48 ^ _UNK_180e02a28) + _DAT_1831a74a8 + 0x46;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831a74a8 ^ _DAT_180e02a20;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1831a6f48 ^ _UNK_180e02a28;
  _DAT_1831a72d8 =
       func_0x000187eb8400((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1831a74a8 + 0x46) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831a6f48 + 0x842223f1));
  uVar12 = _DAT_1831a72d8 << 0x1a | _DAT_1831a72d8 >> 0x26;
  _DAT_1831a7340 = _DAT_1831a6f60 ^ uVar12 ^ 0x11a;
  _DAT_1831a7470 = (_DAT_1831a7470 ^ uVar12) + 0x11a ^ 0xc650b09cd94d471b;
  _DAT_1831a73a8 = (_DAT_1831a73a8 * 0x6b4e8267f7e68c53 ^ _DAT_1831a7470) + uVar12;
  _DAT_1831a72e8 = _DAT_1831a73a8 ^ _DAT_1831a7470;
  _DAT_1831a72c8 = 0x1a;
  uVar12 = (~_DAT_1831a71c8 + 0x1b) *
           ((_DAT_1831a74d8 ^ 0x8422233f) + (ulonglong)((uint)_DAT_1831a74d8 & 0x8422233f) * 2);
  uVar12 = (uVar12 | _DAT_1831a7258) + (uVar12 & _DAT_1831a7258);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a73e8 =
       func_0x000187eb8400((uVar12 | 0x84222325) + (ulonglong)((uint)uVar12 & 0x84222325));
  _DAT_1831a74f0 = (_DAT_1831a73e8 ^ 0x2a4) << 0x16 | _DAT_1831a73e8 >> 0x2a;
  _DAT_1831a74d8 = _DAT_1831a74d8 ^ _DAT_1831a74f0 ^ 0xfa2953cbd85efd0e;
  _DAT_1831a7240 = (_DAT_1831a7240 * -0x860a7c9282dbbef ^ _DAT_1831a74d8) + _DAT_1831a74f0;
  _DAT_1831a7468 = _DAT_1831a7240 ^ _DAT_1831a74d8;
  _DAT_1831a6f60 = 0;
  uVar12 = ((_DAT_1831a73f8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1831a73f8 & 0x84222315) * 2) *
           -_DAT_1831a7418;
  uVar12 = (uVar12 | _DAT_1831a7020) + (uVar12 & _DAT_1831a7020);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a7158 =
       func_0x000187eb8400((uVar12 | 0x84222315) + (ulonglong)((uint)uVar12 & 0x84222315));
  uVar12 = (ulonglong)(~(uint)_DAT_1831a7158 & 0x30);
  _DAT_1831a7228 = _DAT_1831a7360 ^ uVar12 ^ 0x30;
  _DAT_1831a7490 = (_DAT_1831a7490 ^ uVar12) + 0x30 ^ 0x687c8c4a14e406cb;
  _DAT_1831a72a0 = (_DAT_1831a72a0 * 0xe1651c378f1d765 ^ _DAT_1831a7490) + uVar12;
  _DAT_1831a7208 = _DAT_1831a72a0 ^ _DAT_1831a7490;
  _DAT_1831a7348 = 0x30;
  uVar12 = (~_DAT_1831a70b0 + 0x100) *
           ((_DAT_1831a7250 ^ 0x84222352) + (ulonglong)((uint)_DAT_1831a7250 & 0x84222352) * 2);
  uVar12 = (uVar12 | _DAT_1831a6f20) + (uVar12 & _DAT_1831a6f20);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a7450 =
       func_0x000187eb8400((uVar12 | 0x842223ad) + (ulonglong)((uint)uVar12 & 0x842223ad));
  _DAT_1831a7248 = (_DAT_1831a7248 ^ _DAT_1831a7450 ^ 0x76fe) + 0x88 ^ 0x80432e908dfcb06;
  _DAT_1831a6f48 =
       (_DAT_1831a6f48 * -0x41645a5fcb7ee529 ^ _DAT_1831a7248) + (_DAT_1831a7450 ^ 0x76fe);
  _DAT_1831a6f28 = _DAT_1831a6f48 ^ _DAT_1831a7248;
  _DAT_1831a7360 = 0x88;
  uVar12 = (~_DAT_1831a7178 + 0x89) *
           ((_DAT_1831a6f30 ^ 0x84222352) + (ulonglong)((uint)_DAT_1831a6f30 & 0x84222352) * 2);
  uVar12 = (uVar12 | _DAT_1831a6f38) + (uVar12 & _DAT_1831a6f38);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a7108 =
       func_0x000187eb8400((uVar12 | 0x842223da) + (ulonglong)((uint)uVar12 & 0x842223da));
  uVar12 = _DAT_1831a7108 << 0x2d | _DAT_1831a7108 >> 0x13;
  _DAT_1831a7300 = _DAT_1831a7300 ^ uVar12 ^ 0x638d7b1dbe816c4c;
  _DAT_1831a7048 = (_DAT_1831a7048 * 0x713fbc8e17d76ff1 ^ _DAT_1831a7300) + uVar12;
  _DAT_1831a7250 = _DAT_1831a7048 ^ _DAT_1831a7300;
  _DAT_1831a6fd0 = 0;
  uVar12 = (_DAT_1831a6f68 ^ 0x84222315) + _DAT_1831a7170 + 0x84222315;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831a6f68 ^ 0x84222315;
  uVar13 = ((_DAT_1831a7170 + _DAT_1831a6f68) * 0x2000 | _DAT_1831a7170 + _DAT_1831a6f68 >> 0x33) ^
           _DAT_1831a7170;
  _DAT_1831a7398 =
       func_0x000187eb8400((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_1831a6f68 ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831a7170 + 0x84222315));
  _DAT_1831a7088 = _DAT_1831a7110 ^ _DAT_1831a7398 ^ 0x30;
  _DAT_1831a72a0 = (_DAT_1831a72a0 ^ _DAT_1831a7398) + 0x30 ^ 0x7abbb1a43b8dc983;
  _DAT_1831a70c8 = (_DAT_1831a70c8 * -0x60491a5b61cd4c3d ^ _DAT_1831a72a0) + _DAT_1831a7398;
  _DAT_1831a74c8 = 0x30;
  uVar12 = (~_DAT_1831a71d8 + 0x18) *
           ((_DAT_1831a71d0 ^ 0x84222332) + (ulonglong)((uint)_DAT_1831a71d0 & 0x84222332) * 2);
  uVar12 = (uVar12 | _DAT_1831a6f20) + (uVar12 & _DAT_1831a6f20);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a6fb0 =
       func_0x000187eb8400((uVar12 | 0x84222325) + (ulonglong)((uint)uVar12 & 0x84222325));
  _DAT_1831a6f98 = _DAT_1831a6f98 ^ _DAT_1831a6fb0 ^ 0xac13b2580f863318;
  _DAT_1831a73d0 = (_DAT_1831a73d0 * -0x6e957ceb4cf08573 ^ _DAT_1831a6f98) + _DAT_1831a6fb0;
  _DAT_1831a7168 = _DAT_1831a73d0 ^ _DAT_1831a6f98;
  _DAT_1831a74a0 = 0;
  uVar12 = ((_DAT_1831a7098 ^ 0x84222315) + (ulonglong)((uint)_DAT_1831a7098 & 0x84222315) * 2) *
           -_DAT_1831a6f10;
  uVar12 = (uVar12 | _DAT_1831a7318) + (uVar12 & _DAT_1831a7318);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a72d8 =
       func_0x000187eb8400((uVar12 | 0x84222315) + (ulonglong)((uint)uVar12 & 0x84222315));
  uVar12 = (ulonglong)(~(uint)_DAT_1831a72d8 & 0x30) ^ 0x30;
  _DAT_1831a7158 = _DAT_1831a7268 ^ uVar12 ^ 0x30;
  _DAT_1831a7308 = (_DAT_1831a7308 ^ uVar12) + 0x30 ^ 0x4565d4b2bacd8b49;
  _DAT_1831a71d8 = (_DAT_1831a71d8 * 0x71883eaedbe3690d ^ _DAT_1831a7308) + uVar12;
  _DAT_1831a7188 = _DAT_1831a71d8 ^ _DAT_1831a7308;
  _DAT_1831a6f38 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x50);
  uVar12 = (ulonglong)bVar1 ^ 0x84222325;
  uVar13 = uVar12 ^ _DAT_1831a7348;
  lVar11 = uVar12 + _DAT_1831a7030;
  uVar12 = uVar13 + lVar11;
  uVar14 = (_DAT_1831a7030 ^ 0x30) + _DAT_1831a7348 + 0x30;
  uVar13 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar13;
  uVar12 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1831a7030 ^ 0x30;
  _DAT_1831a7058 =
       func_0x000187eb8400((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831a7348 + 0x30) ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - lVar11);
  uVar13 = (ulonglong)bVar1 * 0x30 ^ _DAT_1831a7058;
  uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar13 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar13;
  uVar14 = (ulonglong)bVar1 | 0x30;
  _DAT_1831a6f30 = (_DAT_1831a6f30 ^ uVar13) + uVar14 ^ 0x4137e6c14817d7d0;
  _DAT_1831a6f88 = (_DAT_1831a6f88 * -0x39e20a6ad867526d ^ _DAT_1831a6f30) + uVar13;
  _DAT_1831a7498 = _DAT_1831a6f88 ^ _DAT_1831a6f30;
  uVar12 = ~_DAT_1831a72b8 * ((_DAT_1831a6fe8 ^ 0x84222330) + (_DAT_1831a6fe8 & 0x84222330) * 2);
  uVar12 = (uVar12 | _DAT_1831a6f50) + (uVar12 & _DAT_1831a6f50);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_1831a7410 = uVar14;
  _DAT_1831a7418 =
       func_0x000187eb8400((uVar12 | 0xffffffff7bdddccf) + (uVar12 & 0xffffffff7bdddccf));
  auVar2._8_4_ = 0x15;
  auVar2._0_8_ = 0x15;
  auVar2._12_4_ = 0;
  uVar13 = SUB168(auVar2 ^ _DAT_18001a710,0);
  uVar15 = SUB164(auVar2 ^ _DAT_18001a710,0);
  lVar11 = ((ulonglong)_DAT_180e02aa0 * 0x15 << 0x20) + (ulonglong)uVar5 * 0x15;
  uVar12 = ((_DAT_1831a7418 ^ 0xffffffffffffffeb) << 0x15 |
           (_DAT_1831a7418 ^ 0xffffffffffffffeb) >> 0x2b) * 0x1b42045cc72e850d;
  _DAT_1831a73e8 =
       ((((ulonglong)_DAT_180e02a60 * 0x15 << 0x20) + (ulonglong)uVar3 * 0x15 +
         ((ulonglong)_DAT_180e02a40 * 0x15 << 0x20) + (ulonglong)_DAT_180e02a30 * 0x15 + lVar11 +
        (ulonglong)uVar15 * (ulonglong)uVar4 +
        ((ulonglong)uVar15 * (ulonglong)_DAT_180e02a80 + (uVar13 >> 0x20) * (ulonglong)uVar4 << 0x20
        )) - ((ulonglong)uVar15 * (ulonglong)uVar8 +
              ((ulonglong)uVar15 * (ulonglong)_DAT_180e02b20 + (uVar13 >> 0x20) * (ulonglong)uVar8
              << 0x20) + lVar11 +
             (ulonglong)uVar15 * (ulonglong)uVar9 +
             ((ulonglong)uVar15 * (ulonglong)_DAT_180e02b10 + (uVar13 >> 0x20) * (ulonglong)uVar9 <<
             0x20) + ((ulonglong)_DAT_180e02ae0 * 0x15 << 0x20) + (ulonglong)uVar7 * 0x15 +
                     ((ulonglong)_DAT_180e02ac0 * 0x15 << 0x20) + (ulonglong)uVar6 * 0x15)) +
       0xcc2b508f6018ac1d;
  _DAT_1831a74b8 = _DAT_1831a73e0 ^ uVar12 ^ _DAT_1831a73e8;
  _DAT_1831a74b0 = (_DAT_1831a74b0 ^ uVar12) + _DAT_1831a73e8 ^ 0x88b3b148c524f7c3;
  _DAT_1831a6fa8 = (_DAT_1831a6fa8 * -0x43d710f49ead4cd7 ^ _DAT_1831a74b0) + uVar12;
  _DAT_1831a7098 = _DAT_1831a6fa8 ^ _DAT_1831a74b0;
  *(char *)(unaff_RBP + -0x50 + _DAT_1831a73e8) = (char)uVar14;
  switch((uint)uVar10 < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e90cad -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e90cad(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_RDI;
  longlong lVar3;
  ulonglong unaff_R12;
  ulonglong unaff_R14;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint uVar8;
  uint unaff_XMM15_Da;
  
  _DAT_1831a6f98 = func_0x000187eb8400(_DAT_1831a7000 + 0xffe0ff8393ffe1ffU ^ 0xd9);
  _DAT_1831a6f10 = (_DAT_1831a6f10 ^ _DAT_1831a6f98) - 0x91 ^ 0x81d657f7344b674a;
  _DAT_1831a7178 = (_DAT_1831a7178 * -0x64da5cbf171be475 ^ _DAT_1831a6f10) + _DAT_1831a6f98;
  _DAT_1831a7390 = _DAT_1831a7178 ^ _DAT_1831a6f10;
  _DAT_1831a74a0 = 0x6f;
  uVar4 = (_DAT_1831a71a8 ^ _DAT_180da4ad0) + _DAT_1831a7120 + unaff_RDI;
  uVar5 = (_DAT_1831a7120 ^ _UNK_180da4ad8) + _DAT_1831a71a8 + 0x91;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a71a8 ^ _DAT_180da4ad0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a7120 ^ _UNK_180da4ad8;
  _DAT_1831a7460 =
       func_0x000187eb8400((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a71a8 + 0x91) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7120 + unaff_RDI));
  uVar4 = _DAT_1831a7460 ^ 0x30;
  _DAT_1831a71c0 = _DAT_1831a74a0 ^ uVar4 ^ 0xc1;
  _DAT_1831a7250 = (_DAT_1831a7250 ^ uVar4) + 0xc1 ^ 0x2f2e0d7aa875bc03;
  _DAT_1831a70d8 = (_DAT_1831a70d8 * 0x7505f1cfca898f19 ^ _DAT_1831a7250) + uVar4;
  _DAT_1831a7300 = _DAT_1831a70d8 ^ _DAT_1831a7250;
  _DAT_1831a7380 = 0xc1;
  _DAT_1831a7410 = func_0x000187eb8400(_DAT_1831a7150 + 0xffdeff8488ffe1ff ^ 0xef);
  uVar4 = (_DAT_1831a7410 ^ 0x2e) & 0x7ffffffff;
  _DAT_1831a7388 = _DAT_1831a7150 ^ uVar4 ^ 0x130;
  _DAT_1831a7100 = (_DAT_1831a7100 ^ uVar4) + 0x130 ^ 0xcdb721b4696e9166;
  _DAT_1831a7348 = (_DAT_1831a7348 * -0x38a87031d529d5a7 ^ _DAT_1831a7100) + uVar4;
  _DAT_1831a7488 = _DAT_1831a7348 ^ _DAT_1831a7100;
  _DAT_1831a7128 = 0x30;
  uVar4 = (~_DAT_1831a74c0 + 0xdd) *
          ((_DAT_1831a7308 ^ unaff_R14) + (ulonglong)((uint)_DAT_1831a7308 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1831a73d8) + (uVar4 & _DAT_1831a73d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a71a0 = func_0x000187eb8400((uVar4 | 0x842223f9) + (ulonglong)((uint)uVar4 & 0x842223f9))
  ;
  _DAT_1831a6fd8 = (_DAT_1831a6fd8 ^ _DAT_1831a71a0 & 0x3ffffffffff) - 0xdc ^ 0x3a1254985e839528;
  _DAT_1831a71a8 =
       (_DAT_1831a71a8 * 0x4934f876fbe1c771 ^ _DAT_1831a6fd8) + (_DAT_1831a71a0 & 0x3ffffffffff);
  _DAT_1831a7318 = _DAT_1831a71a8 ^ _DAT_1831a6fd8;
  _DAT_1831a7070 = 0x24;
  _DAT_1831a74e0 = func_0x000187eb8400(_DAT_1831a6f60 ^ 0x1eff7c03002180);
  uVar4 = _DAT_1831a74e0 ^ 0x20;
  _DAT_1831a6f18 = _DAT_1831a7460 ^ uVar4 ^ 0x30;
  _DAT_1831a6f00 = (_DAT_1831a6f00 ^ uVar4) + 0x30 ^ 0xcbf5ff4c6134340b;
  _DAT_1831a6f48 = (_DAT_1831a6f48 * 0x4a01bebeff0c2e95 ^ _DAT_1831a6f00) + uVar4;
  _DAT_1831a7290 = _DAT_1831a6f48 ^ _DAT_1831a6f00;
  _DAT_1831a7168 = 0x30;
  uVar4 = (~_DAT_1831a6f48 + 0x8b) *
          ((_DAT_1831a70d0 ^ unaff_R14) + (ulonglong)((uint)_DAT_1831a70d0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1831a6f30) + (uVar4 & _DAT_1831a6f30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a70e0 = func_0x000187eb8400((uVar4 | 0x842223af) + (ulonglong)((uint)uVar4 & 0x842223af))
  ;
  _DAT_1831a71c8 = (_DAT_1831a71c8 ^ _DAT_1831a70e0) - 0x8a ^ 0x2f2b46810ae7df4b;
  _DAT_1831a7048 = (_DAT_1831a7048 * -0x9812c4e1a457283 ^ _DAT_1831a71c8) + _DAT_1831a70e0;
  _DAT_1831a70d0 = _DAT_1831a7048 ^ _DAT_1831a71c8;
  _DAT_1831a7150 = 0x76;
  uVar4 = (_DAT_1831a7138 ^ _DAT_180b163f0) + _DAT_1831a7228 + unaff_RDI;
  uVar5 = (_DAT_1831a7228 ^ _UNK_180b163f8) + _DAT_1831a7138 + 0x8a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a7138 ^ _DAT_180b163f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a7228 ^ _UNK_180b163f8;
  _DAT_1831a7208 =
       func_0x000187eb8400((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a7138 + 0x8a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7228 + unaff_RDI));
  uVar4 = (ulonglong)((uint)~((int)_DAT_1831a7208 * 2) >> 1 & 0x30);
  _DAT_1831a7010 = _DAT_1831a7070 ^ uVar4 ^ 0xba;
  _DAT_1831a7378 = (_DAT_1831a7378 ^ uVar4) + 0xba ^ 0x266799115f59081a;
  _DAT_1831a70b8 = (_DAT_1831a70b8 * -0x3923960bb2581c9b ^ _DAT_1831a7378) + uVar4;
  _DAT_1831a7468 = _DAT_1831a70b8 ^ _DAT_1831a7378;
  _DAT_1831a6f68 = 0xba;
  _DAT_1831a7108 = func_0x000187eb8400(_DAT_1831a7058 ^ 0x20ff7c4effe151);
  uVar4 = _DAT_1831a7108 ^ 0x4bb2;
  _DAT_1831a7200 = _DAT_1831a6fc0 ^ uVar4 ^ 0x11a;
  _DAT_1831a70a0 = (_DAT_1831a70a0 ^ uVar4) + 0x11a ^ 0x8186210aed1a3224;
  _DAT_1831a6f20 = (_DAT_1831a6f20 * -0x5eeedc5a853999 ^ _DAT_1831a70a0) + uVar4;
  _DAT_1831a7498 = _DAT_1831a6f20 ^ _DAT_1831a70a0;
  _DAT_1831a7328 = 0x1a;
  uVar4 = (~_DAT_1831a73a8 + 0xa4) *
          ((_DAT_1831a72a8 ^ 0x84222352) + (ulonglong)((uint)_DAT_1831a72a8 & 0x84222352) * 2);
  uVar4 = (uVar4 | _DAT_1831a73d0) + (uVar4 & _DAT_1831a73d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a6f48 = func_0x000187eb8400((uVar4 | 0x842223f1) + (ulonglong)((uint)uVar4 & 0x842223f1))
  ;
  uVar4 = (ulonglong)(((uint)_DAT_1831a6f48 ^ 0x45) & 0x77) ^ 0xa3;
  _DAT_1831a7338 = (_DAT_1831a7338 ^ uVar4) + 0xd4 ^ 0xc305d9c80acb9e69;
  _DAT_1831a7288 = (_DAT_1831a7288 * 0x4fe1a04e0dac3c71 ^ _DAT_1831a7338) + uVar4;
  _DAT_1831a7238 = _DAT_1831a7288 ^ _DAT_1831a7338;
  _DAT_1831a6f08 = 0xd4;
  uVar4 = (_DAT_1831a6f60 ^ _DAT_180e02a10) + _DAT_1831a7138 + 0x84222352;
  uVar5 = (_DAT_1831a7138 ^ _UNK_180e02a18) + _DAT_1831a6f60 + 0xa3;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a6f60 ^ _DAT_180e02a10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a7138 ^ _UNK_180e02a18;
  _DAT_1831a6fb8 =
       func_0x000187eb8400((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a6f60 + 0xa3) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7138 + 0x84222352));
  uVar4 = (ulonglong)((uint)_DAT_1831a6fb8 & 0x77) << 0x35;
  _DAT_1831a70d8 = (_DAT_1831a70d8 ^ uVar4) + 0x23 ^ 0xc44b76daa92477f2;
  _DAT_1831a71a8 = (_DAT_1831a71a8 * 0x373a976c7b8a0e77 ^ _DAT_1831a70d8) + uVar4;
  _DAT_1831a7220 = _DAT_1831a71a8 ^ _DAT_1831a70d8;
  _DAT_1831a7040 = 0x23;
  uVar4 = (_DAT_1831a74a8 ^ _DAT_180e02a20) + _DAT_1831a6f48 + 0x842223f1;
  uVar5 = (_DAT_1831a6f48 ^ _UNK_180e02a28) + _DAT_1831a74a8 + 0x46;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a74a8 ^ _DAT_180e02a20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a6f48 ^ _UNK_180e02a28;
  _DAT_1831a72d8 =
       func_0x000187eb8400((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831a74a8 + 0x46) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a6f48 + 0x842223f1));
  uVar4 = _DAT_1831a72d8 << 0x1a | _DAT_1831a72d8 >> 0x26;
  _DAT_1831a7340 = _DAT_1831a6f60 ^ uVar4 ^ 0x11a;
  _DAT_1831a7470 = (_DAT_1831a7470 ^ uVar4) + 0x11a ^ 0xc650b09cd94d471b;
  _DAT_1831a73a8 = (_DAT_1831a73a8 * 0x6b4e8267f7e68c53 ^ _DAT_1831a7470) + uVar4;
  _DAT_1831a72e8 = _DAT_1831a73a8 ^ _DAT_1831a7470;
  _DAT_1831a72c8 = 0x1a;
  uVar4 = (~_DAT_1831a71c8 + 0x1b) *
          ((_DAT_1831a74d8 ^ 0x8422233f) + (ulonglong)((uint)_DAT_1831a74d8 & 0x8422233f) * 2);
  uVar4 = (uVar4 | _DAT_1831a7258) + (uVar4 & _DAT_1831a7258);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a73e8 = func_0x000187eb8400((uVar4 | unaff_R14) + (ulonglong)((uint)uVar4 & 0x84222325));
  _DAT_1831a74f0 = (_DAT_1831a73e8 ^ 0x2a4) << 0x16 | _DAT_1831a73e8 >> 0x2a;
  _DAT_1831a74d8 = _DAT_1831a74d8 ^ _DAT_1831a74f0 ^ 0xfa2953cbd85efd0e;
  _DAT_1831a7240 = (_DAT_1831a7240 * -0x860a7c9282dbbef ^ _DAT_1831a74d8) + _DAT_1831a74f0;
  _DAT_1831a7468 = _DAT_1831a7240 ^ _DAT_1831a74d8;
  _DAT_1831a6f60 = 0;
  uVar4 = ((_DAT_1831a73f8 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1831a73f8 & 0x84222315) * 2) *
          -_DAT_1831a7418;
  uVar4 = (uVar4 | _DAT_1831a7020) + (uVar4 & _DAT_1831a7020);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a7158 = func_0x000187eb8400((uVar4 | unaff_RDI) + (ulonglong)((uint)uVar4 & 0x84222315));
  uVar4 = (ulonglong)(~(uint)_DAT_1831a7158 & 0x30);
  _DAT_1831a7228 = _DAT_1831a7360 ^ uVar4 ^ 0x30;
  _DAT_1831a7490 = (_DAT_1831a7490 ^ uVar4) + 0x30 ^ 0x687c8c4a14e406cb;
  _DAT_1831a72a0 = (_DAT_1831a72a0 * 0xe1651c378f1d765 ^ _DAT_1831a7490) + uVar4;
  _DAT_1831a7208 = _DAT_1831a72a0 ^ _DAT_1831a7490;
  _DAT_1831a7348 = 0x30;
  uVar4 = (~_DAT_1831a70b0 + 0x100) *
          ((_DAT_1831a7250 ^ 0x84222352) + (ulonglong)((uint)_DAT_1831a7250 & 0x84222352) * 2);
  uVar4 = (uVar4 | _DAT_1831a6f20) + (uVar4 & _DAT_1831a6f20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a7450 = func_0x000187eb8400((uVar4 | 0x842223ad) + (ulonglong)((uint)uVar4 & 0x842223ad))
  ;
  _DAT_1831a7248 = (_DAT_1831a7248 ^ _DAT_1831a7450 ^ 0x76fe) + 0x88 ^ 0x80432e908dfcb06;
  _DAT_1831a6f48 =
       (_DAT_1831a6f48 * -0x41645a5fcb7ee529 ^ _DAT_1831a7248) + (_DAT_1831a7450 ^ 0x76fe);
  _DAT_1831a6f28 = _DAT_1831a6f48 ^ _DAT_1831a7248;
  _DAT_1831a7360 = 0x88;
  uVar4 = (~_DAT_1831a7178 + 0x89) *
          ((_DAT_1831a6f30 ^ 0x84222352) + (ulonglong)((uint)_DAT_1831a6f30 & 0x84222352) * 2);
  uVar4 = (uVar4 | _DAT_1831a6f38) + (uVar4 & _DAT_1831a6f38);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a7108 = func_0x000187eb8400((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  uVar4 = _DAT_1831a7108 << 0x2d | _DAT_1831a7108 >> 0x13;
  _DAT_1831a7300 = _DAT_1831a7300 ^ uVar4 ^ 0x638d7b1dbe816c4c;
  _DAT_1831a7048 = (_DAT_1831a7048 * 0x713fbc8e17d76ff1 ^ _DAT_1831a7300) + uVar4;
  _DAT_1831a7250 = _DAT_1831a7048 ^ _DAT_1831a7300;
  _DAT_1831a6fd0 = 0;
  uVar4 = (_DAT_1831a6f68 ^ unaff_RDI) + _DAT_1831a7170 + unaff_RDI;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a6f68 ^ unaff_RDI;
  uVar5 = ((_DAT_1831a7170 + _DAT_1831a6f68) * 0x2000 | _DAT_1831a7170 + _DAT_1831a6f68 >> 0x33) ^
          _DAT_1831a7170;
  _DAT_1831a7398 =
       func_0x000187eb8400((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_1831a6f68 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7170 + unaff_RDI));
  _DAT_1831a7088 = _DAT_1831a7110 ^ _DAT_1831a7398 ^ 0x30;
  _DAT_1831a72a0 = (_DAT_1831a72a0 ^ _DAT_1831a7398) + 0x30 ^ 0x7abbb1a43b8dc983;
  _DAT_1831a70c8 = (_DAT_1831a70c8 * -0x60491a5b61cd4c3d ^ _DAT_1831a72a0) + _DAT_1831a7398;
  _DAT_1831a74c8 = 0x30;
  uVar4 = (~_DAT_1831a71d8 + 0x18) *
          ((_DAT_1831a71d0 ^ 0x84222332) + (ulonglong)((uint)_DAT_1831a71d0 & 0x84222332) * 2);
  uVar4 = (uVar4 | _DAT_1831a6f20) + (uVar4 & _DAT_1831a6f20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a6fb0 = func_0x000187eb8400((uVar4 | unaff_R14) + (ulonglong)((uint)uVar4 & 0x84222325));
  _DAT_1831a6f98 = _DAT_1831a6f98 ^ _DAT_1831a6fb0 ^ 0xac13b2580f863318;
  _DAT_1831a73d0 = (_DAT_1831a73d0 * -0x6e957ceb4cf08573 ^ _DAT_1831a6f98) + _DAT_1831a6fb0;
  _DAT_1831a7168 = _DAT_1831a73d0 ^ _DAT_1831a6f98;
  _DAT_1831a74a0 = 0;
  uVar4 = ((_DAT_1831a7098 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1831a7098 & 0x84222315) * 2) *
          -_DAT_1831a6f10;
  uVar4 = (uVar4 | _DAT_1831a7318) + (uVar4 & _DAT_1831a7318);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a72d8 = func_0x000187eb8400((uVar4 | unaff_RDI) + (ulonglong)((uint)uVar4 & 0x84222315));
  uVar4 = (ulonglong)(~(uint)_DAT_1831a72d8 & 0x30) ^ 0x30;
  _DAT_1831a7158 = _DAT_1831a7268 ^ uVar4 ^ 0x30;
  _DAT_1831a7308 = (_DAT_1831a7308 ^ uVar4) + 0x30 ^ 0x4565d4b2bacd8b49;
  _DAT_1831a71d8 = (_DAT_1831a71d8 * 0x71883eaedbe3690d ^ _DAT_1831a7308) + uVar4;
  _DAT_1831a7188 = _DAT_1831a71d8 ^ _DAT_1831a7308;
  _DAT_1831a6f38 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x50);
  uVar4 = bVar1 ^ unaff_R14;
  uVar5 = uVar4 ^ _DAT_1831a7348;
  lVar3 = uVar4 + _DAT_1831a7030;
  uVar4 = uVar5 + lVar3;
  uVar6 = (_DAT_1831a7030 ^ 0x30) + _DAT_1831a7348 + 0x30;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831a7030 ^ 0x30;
  _DAT_1831a7058 =
       func_0x000187eb8400((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7348 + 0x30) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar5 = (ulonglong)bVar1 * 0x30 ^ _DAT_1831a7058;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar5;
  uVar6 = (ulonglong)bVar1 | 0x30;
  _DAT_1831a6f30 = (_DAT_1831a6f30 ^ uVar5) + uVar6 ^ 0x4137e6c14817d7d0;
  _DAT_1831a6f88 = (_DAT_1831a6f88 * -0x39e20a6ad867526d ^ _DAT_1831a6f30) + uVar5;
  _DAT_1831a7498 = _DAT_1831a6f88 ^ _DAT_1831a6f30;
  uVar4 = ~_DAT_1831a72b8 *
          ((unaff_R12 ^ unaff_R14 ^ _DAT_1831a6fe8) + ((unaff_R12 ^ unaff_R14) & _DAT_1831a6fe8) * 2
          );
  uVar4 = (uVar4 | _DAT_1831a6f50) + (uVar4 & _DAT_1831a6f50);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831a7410 = uVar6;
  _DAT_1831a7418 =
       func_0x000187eb8400((unaff_R12 ^ 0xffffffff7bdddcda | uVar4) +
                           (uVar4 & (unaff_R12 ^ 0xffffffff7bdddcda)));
  uVar8 = (uint)(unaff_R12 >> 0x20);
  auVar2._8_4_ = (int)unaff_R12;
  auVar2._0_8_ = unaff_R12;
  auVar2._12_4_ = uVar8;
  uVar5 = SUB168(auVar2 ^ _DAT_18001a710,0);
  uVar7 = SUB164(auVar2 ^ _DAT_18001a710,0);
  lVar3 = ((unaff_R12 & 0xffffffff) * (ulonglong)_DAT_180e02aa0 +
           (ulonglong)uVar8 * (ulonglong)unaff_XMM7_Da << 0x20) +
          (unaff_R12 & 0xffffffff) * (ulonglong)unaff_XMM7_Da;
  uVar4 = ((-unaff_R12 ^ _DAT_1831a7418) << 0x15 | (-unaff_R12 ^ _DAT_1831a7418) >> 0x2b) *
          0x1b42045cc72e850d;
  _DAT_1831a73e8 =
       ((((unaff_R12 & 0xffffffff) * (ulonglong)_DAT_180e02a60 +
          (unaff_R12 >> 0x20) * (ulonglong)unaff_XMM13_Da << 0x20) +
         (unaff_R12 & 0xffffffff) * (ulonglong)unaff_XMM13_Da +
         ((unaff_R12 & 0xffffffff) * (ulonglong)_DAT_180e02a40 +
          (unaff_R12 >> 0x20) * (ulonglong)_DAT_180e02a30 << 0x20) +
         (unaff_R12 & 0xffffffff) * (ulonglong)_DAT_180e02a30 + lVar3 +
        (ulonglong)uVar7 * (ulonglong)unaff_XMM15_Da +
        ((ulonglong)uVar7 * (ulonglong)_DAT_180e02a80 + (uVar5 >> 0x20) * (ulonglong)unaff_XMM15_Da
        << 0x20)) -
       ((ulonglong)uVar7 * (ulonglong)unaff_XMM6_Da +
        ((ulonglong)uVar7 * (ulonglong)_DAT_180e02b20 + (uVar5 >> 0x20) * (ulonglong)unaff_XMM6_Da
        << 0x20) + lVar3 +
       (ulonglong)uVar7 * (ulonglong)unaff_XMM8_Da +
       ((ulonglong)uVar7 * (ulonglong)_DAT_180e02b10 + (uVar5 >> 0x20) * (ulonglong)unaff_XMM8_Da <<
       0x20) + ((unaff_R12 & 0xffffffff) * (ulonglong)_DAT_180e02ae0 +
                (ulonglong)uVar8 * (ulonglong)unaff_XMM12_Da << 0x20) +
               (unaff_R12 & 0xffffffff) * (ulonglong)unaff_XMM12_Da +
               ((unaff_R12 & 0xffffffff) * (ulonglong)_DAT_180e02ac0 +
                (ulonglong)uVar8 * (ulonglong)unaff_XMM9_Da << 0x20) +
               (unaff_R12 & 0xffffffff) * (ulonglong)unaff_XMM9_Da)) + 0xcc2b508f6018ac1d;
  _DAT_1831a74b8 = _DAT_1831a73e0 ^ uVar4 ^ _DAT_1831a73e8;
  _DAT_1831a74b0 = (_DAT_1831a74b0 ^ uVar4) + _DAT_1831a73e8 ^ 0x88b3b148c524f7c3;
  _DAT_1831a6fa8 = (_DAT_1831a6fa8 * -0x43d710f49ead4cd7 ^ _DAT_1831a74b0) + uVar4;
  _DAT_1831a7098 = _DAT_1831a6fa8 ^ _DAT_1831a74b0;
  *(char *)(unaff_RBP + -0x50 + _DAT_1831a73e8) = (char)uVar6;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e94860 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e94860(void)

{
  longlong in_RAX;
  uint unaff_ESI;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = (_DAT_1831a7450 ^ _DAT_1804b72a0) + _DAT_1831a74b8 + 0x84222315;
  uVar4 = (_DAT_1831a74b8 ^ _UNK_1804b72a8) + _DAT_1831a7450 + 0x7c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a7450 ^ _DAT_1804b72a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a74b8 ^ _UNK_1804b72a8;
  _DAT_1831a7120 =
       func_0x000187eb8400((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7450 + 0x7c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a74b8 + 0x84222315));
  uVar2 = (_DAT_1831a7120 & 0xffffffff) * (ulonglong)_DAT_180e029b0 +
          ((ulonglong)_DAT_180e029c0 * (_DAT_1831a7120 & 0xffffffff) +
           (_DAT_1831a7120 >> 0x20) * (ulonglong)_DAT_180e029b0 << 0x20) & 0x7fffffffffffffff;
  _DAT_1831a73c0 = _DAT_1831a7090 ^ uVar2 ^ 0xac;
  _DAT_1831a74f0 = (_DAT_1831a74f0 ^ uVar2) + 0xac ^ 0x47b8e84c81f015d1;
  _DAT_1831a7220 = (_DAT_1831a7220 * -0x78ed299a80d2ebe7 ^ _DAT_1831a74f0) + uVar2;
  _DAT_1831a70b8 = _DAT_1831a7220 ^ _DAT_1831a74f0;
  _DAT_1831a7218 = 0xac;
  uVar2 = (_DAT_1831a7358 ^ _DAT_1801ec2a0) + _DAT_1831a7210 + 0x84222389;
  uVar4 = (_DAT_1831a7210 ^ _UNK_1801ec2a8) + _DAT_1831a7358 + 0x84;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a7358 ^ _DAT_1801ec2a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a7210 ^ _UNK_1801ec2a8;
  _DAT_1831a7368 =
       func_0x000187eb8400((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7358 + 0x84) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a7210 + 0x84222389));
  uVar2 = _DAT_1831a72f0 & 0xfffffffffffffc00;
  _DAT_1831a7358 = _DAT_1831a6f90 ^ uVar2 ^ 0x130;
  _DAT_1831a7088 = (_DAT_1831a7088 ^ uVar2) + 0x130 ^ 0x3cd8cad2daac17c3;
  _DAT_1831a73d0 = (_DAT_1831a73d0 * 0x2c98072119575499 ^ _DAT_1831a7088) + uVar2;
  _DAT_1831a71b0 = _DAT_1831a73d0 ^ _DAT_1831a7088;
  _DAT_1831a7200 = _DAT_1831a7440 ^ 0x130;
  _DAT_1831a6f70 = 0x30;
  uVar2 = (_DAT_1831a7230 ^ _DAT_180e029d0) + _DAT_1831a7398 + 0x84222325;
  uVar4 = (_DAT_1831a7398 ^ _UNK_180e029d8) + _DAT_1831a7230 + 0xca;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a7230 ^ _DAT_180e029d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a7398 ^ _UNK_180e029d8;
  _DAT_1831a7120 =
       func_0x000187eb8400((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7230 + 0xca) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a7398 + 0x84222325));
  _DAT_1831a7190 = (_DAT_1831a7190 ^ _DAT_1831a7120 ^ 0xca) - 0xca ^ 0x4a28f8f8802f4e5c;
  _DAT_1831a71c8 = (_DAT_1831a71c8 * -0x2c2818f25566360d ^ _DAT_1831a7190) + (_DAT_1831a7120 ^ 0xca)
  ;
  _DAT_1831a7008 = _DAT_1831a71c8 ^ _DAT_1831a7190;
  _DAT_1831a70b0 = 0x36;
  uVar2 = (_DAT_1831a6f70 ^ _DAT_180404800) + _DAT_1831a7168 + 0x84222315;
  uVar4 = (_DAT_1831a7168 ^ _UNK_180404808) + _DAT_1831a6f70 + 0xca;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a6f70 ^ _DAT_180404800;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a7168 ^ _UNK_180404808;
  _DAT_1831a7198 =
       func_0x000187eb8400((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a6f70 + 0xca) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a7168 + 0x84222315));
  uVar2 = _DAT_1831a7198 & 0x1ffffffffffffff;
  _DAT_1831a7008 = _DAT_1831a7158 ^ uVar2 ^ 0xfa;
  _DAT_1831a6f08 = (_DAT_1831a6f08 ^ uVar2) + 0xfa ^ 0xb99e1473a6b5b69f;
  _DAT_1831a7390 = (_DAT_1831a7390 * -0x6a97d845a5d5c43d ^ _DAT_1831a6f08) + uVar2;
  _DAT_1831a72e8 = _DAT_1831a7390 ^ _DAT_1831a6f08;
  _DAT_1831a73e8 = 0xfa;
  _DAT_1831a70e8 = func_0x000187eb8400(_DAT_1831a7048 ^ 0xffe0ff7b57002197);
  uVar2 = (_DAT_1831a70e8 ^ 0xfe) & 0x7fffffffffffffff;
  _DAT_1831a6fa0 = _DAT_1831a6f80 ^ uVar2 ^ 0x130;
  _DAT_1831a7110 = (_DAT_1831a7110 ^ uVar2) + 0x130 ^ 0x32847f2d30214f71;
  _DAT_1831a7050 = (_DAT_1831a7050 * -0x191643dc0294cae5 ^ _DAT_1831a7110) + uVar2;
  _DAT_1831a6f28 = _DAT_1831a7050 ^ _DAT_1831a7110;
  _DAT_1831a71c8 = 0x30;
  uVar2 = (_DAT_1831a7338 ^ _DAT_180e029e0) + _DAT_1831a74b0 + 0x84222373;
  uVar4 = (_DAT_1831a74b0 ^ _UNK_180e029e8) + _DAT_1831a7338 + 0xda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a7338 ^ _DAT_180e029e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a74b0 ^ _UNK_180e029e8;
  _DAT_1831a7180 =
       func_0x000187eb8400((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a7338 + 0xda) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a74b0 + 0x84222373));
  uVar2 = _DAT_1831a7180 - (_DAT_1831a7180 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1831a7180;
  _DAT_1831a7258 = _DAT_1831a74f0 ^ uVar2 ^ 0x130;
  _DAT_1831a7260 = (_DAT_1831a7260 ^ uVar2) + 0x130 ^ 0xc01c5bb44670c1dd;
  _DAT_1831a7110 = (_DAT_1831a7110 * 0x4466114de7c7ffa1 ^ _DAT_1831a7260) + uVar2;
  _DAT_1831a71d8 = _DAT_1831a7110 ^ _DAT_1831a7260;
  _DAT_1831a7130 = 0x30;
  uVar2 = (_DAT_1831a70b8 ^ _DAT_180e029f0) + _DAT_1831a6f18 + 0x842223df;
  uVar4 = (_DAT_1831a6f18 ^ _UNK_180e029f8) + _DAT_1831a70b8 + 0xa8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a70b8 ^ _DAT_180e029f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831a6f18 ^ _UNK_180e029f8;
  _DAT_1831a7110 =
       func_0x000187eb8400((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a70b8 + 0xa8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a6f18 + 0x842223df));
  _DAT_1831a7428 = (_DAT_1831a7428 ^ _DAT_1831a7110 & 0xfffffffffffff) + 0xa8 ^ 0x3ae0f76355ea46a5;
  _DAT_1831a7338 =
       (_DAT_1831a7338 * -0x7d32eee483656fe5 ^ _DAT_1831a7428) + (_DAT_1831a7110 & 0xfffffffffffff);
  _DAT_1831a72d0 = _DAT_1831a7338 ^ _DAT_1831a7428;
  _DAT_1831a70e8 = 0xa8;
  _DAT_1831a7160 = func_0x000187eb8400(_DAT_1831a7380 + 0xffe30083d9001dff ^ 0xcf);
  uVar2 = _DAT_1831a7160 ^ 0x52;
  _DAT_1831a72d8 = _DAT_1831a7338 ^ uVar2 ^ 0xa2;
  _DAT_1831a6f48 = (_DAT_1831a6f48 ^ uVar2) + 0xa2 ^ 0x846f12a2e1ccbfdd;
  _DAT_1831a7340 = (_DAT_1831a7340 * -0x401882a9c47a825f ^ _DAT_1831a6f48) + uVar2;
  _DAT_1831a7450 = _DAT_1831a7340 ^ _DAT_1831a6f48;
  _DAT_1831a6f98 = 0xa2;
  uVar2 = ((_DAT_1831a74d8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1831a74d8 & 0x84222315) * 2) *
          -_DAT_1831a7388;
  uVar2 = (uVar2 | _DAT_1831a74f8) + (uVar2 & _DAT_1831a74f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831a7478 = func_0x000187eb8400((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  _DAT_1831a71e8 = _DAT_1831a7250 ^ _DAT_1831a7478 ^ 0x30;
  _DAT_1831a6ff0 = (_DAT_1831a6ff0 ^ _DAT_1831a7478) + 0x30 ^ 0x7e632b24be15edd8;
  _DAT_1831a7218 = (_DAT_1831a7218 * 0x6fe13dbdf287b293 ^ _DAT_1831a6ff0) + _DAT_1831a7478;
  _DAT_1831a70a8 = _DAT_1831a7218 ^ _DAT_1831a6ff0;
  _DAT_1831a7148 = _DAT_1831a74c8 ^ 0x30;
  _DAT_1831a70c8 = 0x30;
  uVar2 = (~_DAT_1831a7440 + 0x100) *
          ((_DAT_1831a7428 ^ 0x842223df) + (ulonglong)((uint)_DAT_1831a7428 & 0x842223df) * 2);
  uVar2 = (uVar2 | _DAT_1831a72c0) + (uVar2 & _DAT_1831a72c0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831a7078 = func_0x000187eb8400((uVar2 | 0x84222320) + (ulonglong)((uint)uVar2 & 0x84222320))
  ;
  _DAT_1831a7120 = (_DAT_1831a7120 ^ _DAT_1831a71d8 & 0x3fffffffffffffff) + 5 ^ 0x15de4126def5a21f;
  _DAT_1831a6f00 =
       (_DAT_1831a6f00 * -0x2f7d9b4703d81409 ^ _DAT_1831a7120) +
       (_DAT_1831a71d8 & 0x3fffffffffffffff);
  _DAT_1831a7068 = _DAT_1831a6f00 ^ _DAT_1831a7120;
  _DAT_1831a74d0 = 5;
  uVar2 = (~_DAT_1831a6f48 + 6) *
          ((_DAT_1831a7498 ^ 0x842223df) + (ulonglong)((uint)_DAT_1831a7498 & 0x842223df) * 2);
  uVar2 = (uVar2 | _DAT_1831a71a8) + (uVar2 & _DAT_1831a71a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831a7438 = func_0x000187eb8400((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  _DAT_1831a7380 = _DAT_1831a7380 ^ _DAT_1831a7310 ^ 0x90ca826ce755b95d;
  _DAT_1831a7058 = (_DAT_1831a7058 * -0x437122847a248643 ^ _DAT_1831a7380) + _DAT_1831a7310;
  _DAT_1831a7398 = _DAT_1831a7058 ^ _DAT_1831a7380;
  _DAT_1831a7400 = 0;
  uVar2 = ((_DAT_1831a7250 ^ 0x84222315) + (ulonglong)((uint)_DAT_1831a7250 & 0x84222315) * 2) *
          -_DAT_1831a7340;
  uVar2 = (uVar2 | _DAT_1831a7130) + (uVar2 & _DAT_1831a7130);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831a6fe0 = func_0x000187eb8400((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = _DAT_1831a6fe0 & 0x3ffffffff;
  _DAT_1831a7368 = _DAT_1831a7098 ^ uVar2 ^ 0x30;
  _DAT_1831a7128 = (_DAT_1831a7128 ^ uVar2) + 0x30 ^ 0xd0beef7531570290;
  _DAT_1831a7020 = (_DAT_1831a7020 * 0x36e63b005a3f7161 ^ _DAT_1831a7128) + uVar2;
  _DAT_1831a7278 = _DAT_1831a7020 ^ _DAT_1831a7128;
  _DAT_1831a70f8 = 0x30;
  uVar2 = (_DAT_1831a7430 ^ 0x84222315) + _DAT_1831a74a8 + 0x84222315;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a7430 ^ 0x84222315;
  uVar4 = ((_DAT_1831a74a8 + _DAT_1831a7430) * 0x2000 | _DAT_1831a74a8 + _DAT_1831a7430 >> 0x33) ^
          _DAT_1831a74a8;
  _DAT_1831a7410 =
       func_0x000187eb8400((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1831a7430 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a74a8 + 0x84222315));
  uVar2 = _DAT_1831a7410 & 0x7fffffffffffffff;
  _DAT_1831a7078 = _DAT_1831a7108 ^ uVar2 ^ 0x30;
  _DAT_1831a71a0 = (_DAT_1831a71a0 ^ uVar2) + 0x30 ^ 0x23fa74f45298c6cd;
  _DAT_1831a6fc8 = (_DAT_1831a6fc8 * -0x45a23dc80e85c35b ^ _DAT_1831a71a0) + uVar2;
  _DAT_1831a6fd0 = _DAT_1831a6fc8 ^ _DAT_1831a71a0;
  _DAT_1831a6fe8 = 0x30;
  uVar4 = (ulonglong)(unaff_ESI % 10);
  uVar2 = uVar4 ^ 0x84222325 ^ _DAT_1831a74c8;
  lVar1 = (uVar4 ^ 0x84222325) + _DAT_1831a7378;
  uVar3 = uVar2 + lVar1;
  uVar5 = (_DAT_1831a7378 ^ 0x30) + _DAT_1831a74c8 + 0x30;
  uVar2 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar2;
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831a7378 ^ 0x30;
  _DAT_1831a7438 =
       func_0x000187eb8400((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831a74c8 + 0x30) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar1);
  _DAT_1831a7428 = uVar4 | 0x30;
  _DAT_1831a73e8 = (_DAT_1831a73e8 ^ uVar4 ^ _DAT_1831a7438) + _DAT_1831a7428 ^ 0xa8dcffaf5e6c074a;
  _DAT_1831a6f80 =
       (_DAT_1831a6f80 * -0x2e16109bbc943ead ^ _DAT_1831a73e8) + (uVar4 ^ _DAT_1831a7438);
  _DAT_1831a6f68 = _DAT_1831a6f80 ^ _DAT_1831a73e8;
  *(char *)(in_RAX + -1) = (char)_DAT_1831a7428;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e957be -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187e95c90 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187e957be(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong unaff_RBP;
  ulonglong uVar10;
  ulonglong unaff_R14;
  uint uVar12;
  undefined1 auVar11 [16];
  uint uVar14;
  undefined1 auVar13 [16];
  uint uVar15;
  undefined1 auVar16 [16];
  uint uVar17;
  undefined1 auVar18 [16];
  ulonglong uVar19;
  uint uVar20;
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar7 = uVar1 ^ 0x84222325;
  plVar2 = *(longlong **)(unaff_RBP + 0xa0);
  uVar10 = (unaff_R14 - _DAT_1831a7138) * ((_DAT_1831a6f40 ^ uVar7) + (uVar7 & _DAT_1831a6f40) * 2);
  uVar10 = (uVar10 | _DAT_1831a7468) + (uVar10 & _DAT_1831a7468);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831a7458 =
       func_0x000187eb8400((uVar7 ^ unaff_R14 | uVar10) + (uVar10 & (uVar7 ^ unaff_R14)));
  uVar6 = _DAT_180e02ba0;
  uVar4 = (uVar1 * unaff_R14 ^ _DAT_1831a7458) & 0xffffffffffff ^ uVar1;
  uVar12 = (uint)(uVar1 >> 0x20);
  auVar16._8_4_ = (int)uVar1;
  auVar16._0_8_ = uVar1;
  auVar16._12_4_ = uVar12;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = unaff_R14;
  uVar14 = (uint)(unaff_R14 >> 0x20);
  auVar11._8_4_ = (int)unaff_R14;
  auVar11._0_8_ = unaff_R14;
  auVar11._12_4_ = uVar14;
  auVar18._8_4_ = 0xffffffff;
  auVar18._0_8_ = 0xffffffffffffffff;
  auVar18._12_4_ = 0xffffffff;
  uVar3 = (ulonglong)_DAT_180e02b80;
  uVar7 = (ulonglong)_DAT_180e02b80;
  uVar10 = (ulonglong)_DAT_180e02ba0;
  *(undefined1 (*) [16])(unaff_RBP + 0x30) = auVar16 & auVar11;
  *(undefined1 (*) [16])(unaff_RBP + 0x50) = auVar16 | auVar11;
  uVar17 = SUB164(auVar16 ^ auVar18,0);
  uVar19 = SUB168(auVar16 ^ auVar18,0);
  uVar20 = SUB164(auVar13 ^ auVar18,0);
  uVar8 = uVar4 << 0x32 | uVar4 >> 0xe;
  uVar4 = *(ulonglong *)(unaff_RBP + 0x30);
  uVar5 = *(ulonglong *)(unaff_RBP + 0x50);
  uVar15 = SUB164(auVar16 ^ auVar11,0);
  _DAT_1831a7270 =
       (((ulonglong)uVar20 * (ulonglong)_DAT_180e02bc0 +
         ((SUB168(auVar13 ^ auVar18,0) >> 0x20) * (ulonglong)_DAT_180e02bc0 +
          (ulonglong)_DAT_180e02b90 * (ulonglong)uVar20 << 0x20) +
         (ulonglong)_DAT_180e02bb0 * (ulonglong)uVar17 +
         ((uVar19 >> 0x20) * (ulonglong)_DAT_180e02bb0 +
          (ulonglong)_DAT_180e02b70 * (ulonglong)uVar17 << 0x20) +
        uVar10 * (unaff_R14 & 0xffffffff) +
        ((ulonglong)uVar14 * (ulonglong)uVar6 + (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180e02b90
        << 0x20) +
        uVar7 * (uVar1 & 0xffffffff) +
        (uVar12 * uVar3 + (uVar1 & 0xffffffff) * (ulonglong)_DAT_180e02b70 << 0x20)) -
       ((ulonglong)uVar17 * (_DAT_180e02c30 & 0xffffffff) +
        ((ulonglong)_DAT_180e02ca0 * (ulonglong)uVar17 +
         (uVar19 >> 0x20) * (_DAT_180e02c30 & 0xffffffff) << 0x20) +
       (ulonglong)uVar15 * (ulonglong)_DAT_180e02c80 +
       ((ulonglong)_DAT_180e02c90 * (ulonglong)uVar15 +
        (SUB168(auVar16 ^ auVar11,0) >> 0x20) * (ulonglong)_DAT_180e02c80 << 0x20) +
       (uVar5 & 0xffffffff) * (ulonglong)_DAT_180e02c60 +
       ((ulonglong)_DAT_180e02c70 * (uVar5 & 0xffffffff) +
        (uVar5 >> 0x20) * (ulonglong)_DAT_180e02c60 << 0x20) +
       (uVar4 & 0xffffffff) * (ulonglong)_DAT_180e02c40 +
       ((ulonglong)_DAT_180e02c50 * (uVar4 & 0xffffffff) +
        (uVar4 >> 0x20) * (ulonglong)_DAT_180e02c40 << 0x20) +
       ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180e02c20 +
        (ulonglong)uVar14 * (ulonglong)_DAT_180e02c10 << 0x20) +
       (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_180e02c10 +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_180e02c00 +
        (ulonglong)uVar12 * (ulonglong)_DAT_180e02bf0 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_180e02bf0)) + 0xacf41abf7dbef893;
  _DAT_1831a7380 = _DAT_1831a7270 ^ uVar8;
  _DAT_1831a7278 = (_DAT_1831a7278 ^ uVar8) + _DAT_1831a7270 ^ 0xb94ccf14ad959b4f;
  _DAT_1831a72c0 = (_DAT_1831a72c0 * 0x5d710e6f8067ff13 ^ _DAT_1831a7278) + uVar8;
  _DAT_1831a7158 = _DAT_1831a72c0 ^ _DAT_1831a7278;
  lVar9 = unaff_RBP + -0x30;
  FUN_18414b520(lVar9);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar9 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 0x10),lVar9);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7e99c0c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_187e99c0c(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 + in_RCX + param_2;
  uVar2 = param_4 + in_RAX + param_3;
  param_1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ param_1;
  param_4 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_4;
  _DAT_1831a74a8 =
       func_0x000187eb8400((param_4 << 0x1d | param_4 >> 0x23) - (in_RAX + param_3) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  uVar1 = ((_DAT_1831a74a8 ^ 0xeed67ff797000000) & 0xffffffffff000000 ^ 0x82924a549378a7dd) >> 0xe |
          0x9f74000000000000;
  _DAT_1831a7120 = (_DAT_1831a7120 ^ uVar1) + 0xeed67ff797fcefdd ^ 0xdcadebfb12ade815;
  _DAT_1831a7148 = (_DAT_1831a7148 * 0x3ea11e3b75c26491 ^ _DAT_1831a7120) + uVar1;
  _DAT_1831a7238 = _DAT_1831a7148 ^ _DAT_1831a7120;
  _DAT_1831a7448 = 0xeed67ff797fcefdd;
  uVar1 = (_DAT_1831a71d8 ^ _DAT_180e02fd0) + _DAT_1831a7090 + 0x84222325;
  uVar2 = (_DAT_1831a7090 ^ _UNK_180e02fd8) + _DAT_1831a71d8 + 0x8a36a985a296aa36;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a71d8 ^ _DAT_180e02fd0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a7090 ^ _UNK_180e02fd8;
  _DAT_1831a6fb0 =
       func_0x000187eb8400((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a71d8 + 0x8a36a985a296aa36) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a7090 + 0x84222325));
  uVar1 = _DAT_1831a6fb0 >> 1 | _DAT_1831a6fb0;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1831a6fb0;
  uVar1 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar2;
  _DAT_1831a7300 = (_DAT_1831a7300 ^ uVar2) + 0x75c9567a5d6955ca ^ 0xbd766deafa1b3912;
  _DAT_1831a7368 = (_DAT_1831a7368 * 0x1cd0df5d8a8a7a77 ^ _DAT_1831a7300) + uVar2;
  _DAT_1831a7388 = _DAT_1831a7368 ^ _DAT_1831a7300;
  _DAT_1831a73a0 = 0x75c9567a5d6955ca;
  uVar1 = (_DAT_1831a7060 ^ _DAT_180e02fe0) + _DAT_1831a7100 + 0x8422230d;
  uVar2 = (_DAT_1831a7100 ^ _UNK_180e02fe8) + _DAT_1831a7060 + 0x8a36a985a296aa36;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a7060 ^ _DAT_180e02fe0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a7100 ^ _UNK_180e02fe8;
  _DAT_1831a7260 =
       func_0x000187eb8400((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a7060 + 0x8a36a985a296aa36) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a7100 + 0x8422230d));
  _DAT_1831a70a8 = _DAT_1831a7448 ^ _DAT_1831a72a0 ^ 0x8a36a985a296aa5e;
  _DAT_1831a7090 = (_DAT_1831a7090 ^ _DAT_1831a72a0) + 0x8a36a985a296aa5e ^ 0x394ce3d593c3cac4;
  _DAT_1831a71f0 = (_DAT_1831a71f0 * 0x3a6f34b8e785a505 ^ _DAT_1831a7090) + _DAT_1831a72a0;
  _DAT_1831a71d8 = _DAT_1831a71f0 ^ _DAT_1831a7090;
  _DAT_1831a6fc8 = 0x8a36a985a296aa5e;
  uVar1 = (_DAT_1831a7440 ^ _DAT_180e02ff0) + _DAT_1831a72c0 + 0x8a36a98526b4897b;
  uVar2 = (_DAT_1831a72c0 ^ _UNK_180e02ff8) + _DAT_1831a7440 + 0x75c9567a5d6955ca;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a7440 ^ _DAT_180e02ff0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a72c0 ^ _UNK_180e02ff8;
  _DAT_1831a7108 =
       func_0x000187eb8400((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a7440 + 0x75c9567a5d6955ca) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a72c0 + 0x8a36a98526b4897b));
  uVar1 = (_DAT_1831a7108 ^ 0xffffffffffffffd8) & 0xfffffffffffffff8 ^ 0x8a36a985a296aa5e;
  _DAT_1831a6fc0 = _DAT_1831a7130 ^ uVar1 ^ 0x28;
  _DAT_1831a7088 = (_DAT_1831a7088 ^ uVar1) + 0x28 ^ 0x808dcdc716455391;
  _DAT_1831a7138 = (_DAT_1831a7138 * 0x686ffef3b6e4b6b ^ _DAT_1831a7088) + uVar1;
  _DAT_1831a7188 = _DAT_1831a7138 ^ _DAT_1831a7088;
  _DAT_1831a6fd8 = _DAT_1831a6f08 ^ 0x28;
  _DAT_1831a7410 = 0x28;
  _DAT_1831a73c0 = func_0x000187eb8400(_DAT_1831a7040 ^ 0x5b126e559a74b024);
  uVar1 = _DAT_1831a73c0 << 0x2d | _DAT_1831a73c0 >> 0x13;
  _DAT_1831a7228 = _DAT_1831a7348 ^ uVar1 ^ 0xfbb27bfd5e723493;
  _DAT_1831a7318 = (_DAT_1831a7318 ^ uVar1) + 0xfbb27bfd5e723493 ^ 0x163b06310cc91d00;
  _DAT_1831a7328 = (_DAT_1831a7328 * 0x2299edc322598fed ^ _DAT_1831a7318) + uVar1;
  _DAT_1831a7268 = _DAT_1831a7328 ^ _DAT_1831a7318;
  _DAT_1831a7110 = 0xfbb27bfd5e723493;
  uVar1 = (~_DAT_1831a70c0 + 0x44d8402a18dcb96) *
          ((_DAT_1831a7040 ^ 0xfbb27bfdda5017b6) + (_DAT_1831a7040 & 0x7bb27bfdda5017b6) * 2);
  uVar1 = (uVar1 | _DAT_1831a7128) + (uVar1 & _DAT_1831a7128);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a6f68 = func_0x000187eb8400((uVar1 | 0xffffffff7bdddc23) + (uVar1 & 0xffffffff7bdddc23));
  uVar1 = (_DAT_1831a6f68 ^ 0x9dec5a84ae521e1c) & 0x7fffffffffffffff;
  _DAT_1831a7158 = _DAT_1831a6fb8 ^ uVar1 ^ 0x28;
  _DAT_1831a7320 = (_DAT_1831a7320 ^ uVar1) + 0x28 ^ 0x35087a23f7753d48;
  _DAT_1831a7068 = (_DAT_1831a7068 * 0x31af3241fc14fa81 ^ _DAT_1831a7320) + uVar1;
  _DAT_1831a7138 = _DAT_1831a7068 ^ _DAT_1831a7320;
  _DAT_1831a7078 = 0x28;
  _DAT_1831a6f88 = func_0x000187eb8400(_DAT_1831a71d8 + 0x9910d04d838c21f3 ^ 0x37);
  uVar1 = _DAT_1831a6f88 ^ 0x7091ec4de19ba481;
  _DAT_1831a7278 = _DAT_1831a71e0 ^ uVar1 ^ 0x1c519c6776fc30a9;
  _DAT_1831a7298 = (_DAT_1831a7298 ^ uVar1) + 0x1c519c6776fc30a9 ^ 0x5935842e8787baaf;
  _DAT_1831a7128 = (_DAT_1831a7128 * 0x1a35fdc394fa34f7 ^ _DAT_1831a7298) + uVar1;
  _DAT_1831a6fc8 = _DAT_1831a7128 ^ _DAT_1831a7298;
  _DAT_1831a6f60 = 0x1c519c6776fc30a9;
  uVar1 = (~_DAT_1831a7030 + 0xe3ae63988903cf80) *
          ((_DAT_1831a7400 ^ 0x1c519c67f2de138c) + (_DAT_1831a7400 & 0x1c519c67f2de138c) * 2);
  uVar1 = (uVar1 | _DAT_1831a7060) + (uVar1 & _DAT_1831a7060);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a71e0 = func_0x000187eb8400((uVar1 | 0xffffffff7bdddcf3) + (uVar1 & 0xffffffff7bdddcf3));
  uVar1 = _DAT_1831a71e0 ^ 0xe3ae63988903cf7f;
  _DAT_1831a73f0 = _DAT_1831a7188 ^ uVar1 ^ 0x28;
  _DAT_1831a74b8 = (_DAT_1831a74b8 ^ uVar1) + 0x28 ^ 0x9166c8ce649c9b8d;
  _DAT_1831a7418 = (_DAT_1831a7418 * 0x551113e0c25ea1d5 ^ _DAT_1831a74b8) + uVar1;
  _DAT_1831a7210 = _DAT_1831a7418 ^ _DAT_1831a74b8;
  _DAT_1831a7280 = 0x28;
  uVar1 = (~_DAT_1831a7140 + 0x29aeed6bb0cf7ee5) *
          ((_DAT_1831a7018 ^ 0xeed67ff713deccf8) + (_DAT_1831a7018 & 0x6ed67ff713deccf8) * 2);
  uVar1 = (uVar1 | _DAT_1831a7228) + (uVar1 & _DAT_1831a7228);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a7170 = func_0x000187eb8400((uVar1 | 0xc778929ca311b21c) + (uVar1 & 0xc778929ca311b21c));
  _DAT_1831a71b8 =
       (_DAT_1831a71b8 ^ _DAT_1831a7170 ^ 0x29aeed6bb0cf7ee4) + 0xc778929c27339139 ^
       0x95546c14195fcc0;
  _DAT_1831a74c0 =
       (_DAT_1831a74c0 * -0x3d8eb02159de41e3 ^ _DAT_1831a71b8) +
       (_DAT_1831a7170 ^ 0x29aeed6bb0cf7ee4);
  _DAT_1831a7308 = _DAT_1831a74c0 ^ _DAT_1831a71b8;
  _DAT_1831a7360 = 0xc778929c27339139;
  _DAT_1831a71f0 = func_0x000187eb8400(_DAT_1831a7150 ^ 0x8c8d989f13720e9c);
  uVar1 = (_DAT_1831a71f0 ^ 0xeffeffffb7fffffd) << 0x37 | (_DAT_1831a71f0 ^ 0xeffeffffb7fffffd) >> 9
  ;
  _DAT_1831a7280 = (_DAT_1831a7280 ^ uVar1) + 0x28866d6390cc6ec4 ^ 0xb210837ae3a16d15;
  _DAT_1831a7058 = (_DAT_1831a7058 * -0x1d5c4fb8a8921f9b ^ _DAT_1831a7280) + uVar1;
  _DAT_1831a7248 = _DAT_1831a7058 ^ _DAT_1831a7280;
  _DAT_1831a6fc8 = 0x28866d6390cc6ec4;
  uVar1 = (~_DAT_1831a7090 + 0x18856d6348cc6ec2) *
          ((_DAT_1831a7348 ^ 0x18856d63ccee4de4) + (_DAT_1831a7348 & 0x18856d63ccee4de4) * 2);
  uVar1 = (uVar1 | _DAT_1831a74c8) + (uVar1 & _DAT_1831a74c8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a6ff0 = func_0x000187eb8400((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = _DAT_1831a6ff0 - (_DAT_1831a6ff0 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  _DAT_1831a7388 =
       (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
       _DAT_1831a6ff0;
  _DAT_1831a70c0 = _DAT_1831a70c0 ^ _DAT_1831a7388 ^ 0x39cd3ae0f57ad01a;
  _DAT_1831a71f0 = (_DAT_1831a71f0 * 0x16e4785af58c2039 ^ _DAT_1831a70c0) + _DAT_1831a7388;
  _DAT_1831a71a8 = _DAT_1831a71f0 ^ _DAT_1831a70c0;
  _DAT_1831a73f8 = 0;
  uVar1 = ((_DAT_1831a7288 ^ 0x8422230d) + (ulonglong)((uint)_DAT_1831a7288 & 0x8422230d) * 2) *
          -_DAT_1831a7030;
  uVar1 = (uVar1 | _DAT_1831a72e0) + (uVar1 & _DAT_1831a72e0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar1 = func_0x000187eb8400((uVar1 | 0x8422230d) + (ulonglong)((uint)uVar1 & 0x8422230d));
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_1831a7108 =
       (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^ uVar1
  ;
  _DAT_1831a7348 = _DAT_1831a7038 ^ _DAT_1831a7108 ^ 0x28;
  _DAT_1831a6f90 = (_DAT_1831a6f90 ^ _DAT_1831a7108) + 0x28 ^ 0xca958e7461b519b4;
  _DAT_1831a7108 = (uVar1 * 0x692845a2d4d4c093 ^ _DAT_1831a6f90) + _DAT_1831a7108;
  _DAT_1831a7418 = _DAT_1831a7108 ^ _DAT_1831a6f90;
  _DAT_1831a74e0 = 0x28;
  uVar1 = ~_DAT_1831a7438 *
          ((_DAT_1831a7338 ^ 0xeed67ff713deccf8) + (_DAT_1831a7338 & 0x6ed67ff713deccf8) * 2);
  uVar1 = (uVar1 | _DAT_1831a7328) + (uVar1 & _DAT_1831a7328);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a7028 = func_0x000187eb8400((uVar1 | 0x11298008ec213307) + (uVar1 & 0x11298008ec213307));
  _DAT_1831a7118 = (_DAT_1831a7118 ^ _DAT_1831a7028) + 0x1129800868031022 ^ 0x5f15e19238b276cd;
  _DAT_1831a7480 = (_DAT_1831a7480 * -0x6eb41979af7b9ea9 ^ _DAT_1831a7118) + _DAT_1831a7028;
  _DAT_1831a7048 = _DAT_1831a7480 ^ _DAT_1831a7118;
  _DAT_1831a7020 = 0x1129800868031022;
  uVar1 = (_DAT_1831a6f00 ^ _DAT_180e03000) + _DAT_1831a7200 + 0xeed67ff713deccf8;
  uVar2 = (_DAT_1831a7200 ^ _UNK_180e03008) + _DAT_1831a6f00 + 0x1129800868031022;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a6f00 ^ _DAT_180e03000;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a7200 ^ _UNK_180e03008;
  _DAT_1831a7468 =
       func_0x000187eb8400((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a6f00 + 0x1129800868031022) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a7200 + 0xeed67ff713deccf8));
  uVar1 = ~_DAT_1831a7468 << 0x2d | ~_DAT_1831a7468 >> 0x13;
  _DAT_1831a70a0 = _DAT_1831a70a0 ^ uVar1 ^ 0x1d48db6bac7bddc7;
  _DAT_1831a6f10 = (_DAT_1831a6f10 * 0x501d0b2db76774d3 ^ _DAT_1831a70a0) + uVar1;
  _DAT_1831a7360 = _DAT_1831a6f10 ^ _DAT_1831a70a0;
  _DAT_1831a7428 = 0;
  uVar1 = (_DAT_1831a7250 ^ 0x8422230d) + _DAT_1831a7108 + 0x8422230d;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a7250 ^ 0x8422230d;
  uVar2 = ((_DAT_1831a7108 + _DAT_1831a7250) * 0x2000 | _DAT_1831a7108 + _DAT_1831a7250 >> 0x33) ^
          _DAT_1831a7108;
  _DAT_1831a70d0 =
       func_0x000187eb8400((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1831a7250 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a7108 + 0x8422230d));
  uVar1 = _DAT_1831a70d0 << 0x14 | _DAT_1831a70d0 >> 0x2c;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar1;
  _DAT_1831a6f98 = _DAT_1831a72a8 ^ uVar1 ^ 0x28;
  _DAT_1831a7098 = (_DAT_1831a7098 ^ uVar1) + 0x28 ^ 0x8191c89c7c70b30b;
  _DAT_1831a7300 = (_DAT_1831a7300 * 0x50e2d7698934fce9 ^ _DAT_1831a7098) + uVar1;
  _DAT_1831a71b0 = _DAT_1831a7300 ^ _DAT_1831a7098;
  _DAT_1831a7158 = 0x28;
  func_0x000180001044(*(undefined8 *)(unaff_RBP + 0xa0),*(longlong *)(unaff_RBP + 0x30) + 0x28);
  return 0;
}


// ----- block @ rva 0x7e9c1d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e9c1d0(void)

{
  int iVar1;
  longlong unaff_RBP;
  undefined4 unaff_R12D;
  undefined8 unaff_R13;
  longlong *unaff_R15;
  
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_R13;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_R12D;
  iVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7ea34e4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ea34e4(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong in_RAX;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RBP;
  longlong lVar10;
  ulonglong unaff_XMM6_Qa;
  uint unaff_XMM8_Da;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  *(bool *)(unaff_RBP + 0x50) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar7 = (~param_1 + 0xcee96340) *
          ((param_2 ^ 0x4aa4e9c9) + (ulonglong)((uint)param_2 & 0x4aa4e9c9) * 2);
  uVar7 = (uVar7 | in_RAX) + (uVar7 & in_RAX);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a7178 = func_0x000187eb8400((uVar7 | 0x844d8af6) + (ulonglong)((uint)uVar7 & 0x844d8af6))
  ;
  _DAT_1831a72b8 = (_DAT_1831a72b8 ^ _DAT_1831a7178) + 0xceefebff ^ 0x3bb065d2ee248fb0;
  _DAT_1831a6f30 = (_DAT_1831a6f30 * -0x15bf4c970afe4999 ^ _DAT_1831a72b8) + _DAT_1831a7178;
  _DAT_1831a72e8 = _DAT_1831a6f30 ^ _DAT_1831a72b8;
  _DAT_1831a7138 = 0xceefebff;
  _DAT_1831a71e0 = func_0x000187eb8400(_DAT_1831a7140 + 0x7fff479fffbdff ^ 0x21);
  uVar8 = _DAT_1831a71e0 ^ 0x67e44ffe9020f74;
  uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar8;
  uVar7 = uVar8 >> 1 | uVar8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar8;
  _DAT_1831a72b8 = (_DAT_1831a72b8 ^ uVar8) + 0x4c64a3c5 ^ 0x45e8a4d5671cf005;
  _DAT_1831a7020 = (_DAT_1831a7020 * -0x462bb4de21ca865 ^ _DAT_1831a72b8) + uVar8;
  _DAT_1831a73a0 = _DAT_1831a7020 ^ _DAT_1831a72b8;
  _DAT_1831a73e0 = 0x4c64a3c5;
  _DAT_1831a7050 = func_0x000187eb8400(_DAT_1831a7308 + 0xffde006f9b00c4ffU ^ 0x65);
  _DAT_1831a6f58 = _DAT_1831a6f58 - 0x34f90dc0 ^ 0x129b84be1c5d5df5;
  _DAT_1831a74e8 = _DAT_1831a7108 * -0x42c3cf41244ac687;
  _DAT_1831a7108 = _DAT_1831a74e8 ^ _DAT_1831a6f58;
  _DAT_1831a7418 = 0xcb06f240;
  uVar7 = (_DAT_1831a72e8 ^ _DAT_180e023b0) + _DAT_1831a73a0 + 0x842224e5;
  uVar8 = (_DAT_1831a73a0 ^ _UNK_180e023b8) + _DAT_1831a72e8 + 0x34f90dc0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a72e8 ^ _DAT_180e023b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831a73a0 ^ _UNK_180e023b8;
  _DAT_1831a73a0 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831a72e8 + 0x34f90dc0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a73a0 + 0x842224e5));
  uVar7 = ((_DAT_1831a73a0 ^ 0x19a8a2a9000) >> 8 | _DAT_1831a73a0 << 0x38) ^ 0x7c0;
  _DAT_1831a7370 = _DAT_1831a7080 ^ uVar7 ^ 0x34f91580;
  _DAT_1831a7238 = (_DAT_1831a7238 ^ uVar7) + 0x34f91580 ^ 0x8ab0489afd811a7f;
  _DAT_1831a7288 = (_DAT_1831a7288 * 0x4f6413df0797786f ^ _DAT_1831a7238) + uVar7;
  _DAT_1831a6f68 = _DAT_1831a7288 ^ _DAT_1831a7238;
  _DAT_1831a73d8 = 0x34f91580;
  uVar7 = (_DAT_1831a6f38 ^ _DAT_180e023c0) + _DAT_1831a7348 + 0xb0db36a5;
  uVar8 = (_DAT_1831a7348 ^ _UNK_180e023c8) + _DAT_1831a6f38 + 0xcb06f240;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a6f38 ^ _DAT_180e023c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831a7348 ^ _UNK_180e023c8;
  _DAT_1831a70b0 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831a6f38 + 0xcb06f240) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7348 + 0xb0db36a5));
  uVar7 = _DAT_1831a70b0 ^ 0xfffff7c0;
  _DAT_1831a7058 = _DAT_1831a7170 ^ uVar7 ^ 0x1000007c0;
  _DAT_1831a7378 = (_DAT_1831a7378 ^ uVar7) + 0x1000007c0 ^ 0xd6279d505756bb98;
  _DAT_1831a6f50 = (_DAT_1831a6f50 * 0x34f34ecc1f5d386f ^ _DAT_1831a7378) + uVar7;
  _DAT_1831a7260 = _DAT_1831a6f50 ^ _DAT_1831a7378;
  _DAT_1831a7348 = 0x7c0;
  _DAT_1831a6f80 = func_0x000187eb8400(_DAT_1831a7030 ^ 0xffa1ffe4bb001f09);
  uVar7 = (_DAT_1831a6f80 ^ 0x79c2c160) & 0x7ffffffff;
  uVar8 = ((_DAT_1831a6f80 ^ 0x79c2c160) & 0x7ffffffff) >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar9 = uVar8 >> 4 | uVar8;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar8 = uVar8 >> 0x20 | uVar9 >> 0x10 | uVar9;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar7;
  _DAT_1831a7408 = (_DAT_1831a7408 ^ uVar7) - 0x79c2c160 ^ 0xfea4b60ce4ad7b3d;
  _DAT_1831a72a8 = (_DAT_1831a72a8 * 0x71b981e7f702eadb ^ _DAT_1831a7408) + uVar7;
  _DAT_1831a74b0 = _DAT_1831a72a8 ^ _DAT_1831a7408;
  _DAT_1831a7100 = 0x863d3ea0;
  _DAT_1831a71c0 = func_0x000187eb8400(_DAT_1831a7360 + 0xa300bb7d009fff ^ 0x24);
  uVar7 = _DAT_1831a71c0 & 0xfffffffffc000000;
  _DAT_1831a6f10 = _DAT_1831a7228 ^ uVar7 ^ 0x79c2c920;
  _DAT_1831a7088 = (_DAT_1831a7088 ^ uVar7) + 0x79c2c920 ^ 0xe21def6913ed20e6;
  _DAT_1831a7200 = (_DAT_1831a7200 * -0x4d6f6161cc3a85bf ^ _DAT_1831a7088) + uVar7;
  _DAT_1831a7258 = _DAT_1831a7200 ^ _DAT_1831a7088;
  _DAT_1831a7018 = 0x79c2c920;
  uVar7 = (_DAT_1831a70b0 ^ _DAT_180e023d0) + _DAT_1831a7458 + 0xfde0ea05;
  uVar8 = (_DAT_1831a7458 ^ _UNK_180e023d8) + _DAT_1831a70b0 + 0x863d3ea0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a70b0 ^ _DAT_180e023d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831a7458 ^ _UNK_180e023d8;
  _DAT_1831a74b8 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831a70b0 + 0x863d3ea0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7458 + 0xfde0ea05));
  uVar7 = (_DAT_1831a74b8 << 0x3a | _DAT_1831a74b8 >> 6) * 0x301057500e571bc7;
  _DAT_1831a71e8 = _DAT_1831a72a8 ^ uVar7 ^ 0x1000007c0;
  _DAT_1831a7418 = (_DAT_1831a7418 ^ uVar7) + 0x1000007c0 ^ 0x5f480c344956907d;
  _DAT_1831a73d0 = (_DAT_1831a73d0 * -0x7ce525efa756ab83 ^ _DAT_1831a7418) + uVar7;
  _DAT_1831a7020 = _DAT_1831a73d0 ^ _DAT_1831a7418;
  _DAT_1831a6fb8 = 0x7c0;
  _DAT_1831a7408 = func_0x000187eb8400(_DAT_1831a7400 + 0xffdcff7e5d009fff ^ 0xca);
  uVar7 = _DAT_1831a7408 * 0x3d6dac1fd52e914b;
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar5 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar5 + (uint)bVar5 ^ uVar7;
  _DAT_1831a7410 = (_DAT_1831a7410 ^ uVar7) - 0x3ac2c680 ^ 0x785cf4341fef16c2;
  _DAT_1831a70f0 = (_DAT_1831a70f0 * 0x247a43ed09619771 ^ _DAT_1831a7410) + uVar7;
  _DAT_1831a7108 = _DAT_1831a70f0 ^ _DAT_1831a7410;
  _DAT_1831a7170 = 0xc53d3980;
  uVar7 = (~_DAT_1831a7028 + 0x3ac2c681) *
          ((_DAT_1831a70d8 ^ 0x842224e5) + (ulonglong)((uint)_DAT_1831a70d8 & 0x842224e5) * 2);
  uVar7 = (uVar7 | _DAT_1831a7448) + (uVar7 & _DAT_1831a7448);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a7498 = func_0x000187eb8400((uVar7 | 0xbee0e265) + (ulonglong)((uint)uVar7 & 0xbee0e265))
  ;
  uVar7 = (_DAT_1831a7498 << 0x16 | _DAT_1831a7498 >> 0x2a) ^ 0x7c0;
  _DAT_1831a7400 = _DAT_1831a7298 ^ uVar7 ^ 0x3ac2ce40;
  _DAT_1831a6fc8 = (_DAT_1831a6fc8 ^ uVar7) + 0x3ac2ce40 ^ 0xfa26d2e321d09882;
  _DAT_1831a7070 = (_DAT_1831a7070 * 0x5625cddb40ee9369 ^ _DAT_1831a6fc8) + uVar7;
  _DAT_1831a7018 = _DAT_1831a7070 ^ _DAT_1831a6fc8;
  _DAT_1831a6ff8 = 0x3ac2ce40;
  uVar7 = (_DAT_1831a7098 ^ _DAT_180e023e0) + _DAT_1831a72e0 + 0xbee0ed65;
  uVar8 = (_DAT_1831a72e0 ^ _UNK_180e023e8) + _DAT_1831a7098 + 0xc53d3980;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a7098 ^ _DAT_180e023e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831a72e0 ^ _UNK_180e023e8;
  _DAT_1831a7370 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831a7098 + 0xc53d3980) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a72e0 + 0xbee0ed65));
  uVar7 = (ulonglong)(~(uint)_DAT_1831a7370 & 0x3ac2ce40);
  _DAT_1831a7010 = _DAT_1831a7228 ^ uVar7 ^ 0x1000007c0;
  _DAT_1831a71e8 = (_DAT_1831a71e8 ^ uVar7) + 0x1000007c0 ^ 0xaad45ffa976298ba;
  _DAT_1831a7128 = (_DAT_1831a7128 * -0x4beb0a427d624719 ^ _DAT_1831a71e8) + uVar7;
  _DAT_1831a70b8 = _DAT_1831a7128 ^ _DAT_1831a71e8;
  _DAT_1831a6ff0 = 0x7c0;
  _DAT_1831a72a8 = func_0x000187eb8400(_DAT_1831a7188 ^ 0x5afffa04ff96b8);
  uVar7 = _DAT_1831a72a8 ^ 0xceefebff;
  _DAT_1831a6ff8 = _DAT_1831a70b0 ^ uVar7 ^ 0x11b548fc4;
  _DAT_1831a71f0 = (_DAT_1831a71f0 ^ uVar7) + 0x11b548fc4 ^ 0x368c502daae7e3be;
  _DAT_1831a7228 = (_DAT_1831a7228 * 0x61a3b16f50ae41b ^ _DAT_1831a71f0) + uVar7;
  _DAT_1831a71d8 = _DAT_1831a7228 ^ _DAT_1831a71f0;
  _DAT_1831a6f58 = 0x1b548fc4;
  uVar7 = (~_DAT_1831a6f30 + 0x4c64a3c6) *
          ((_DAT_1831a7148 ^ 0x4acdc8da) + (ulonglong)((uint)_DAT_1831a7148 & 0x4acdc8da) * 2);
  uVar7 = (uVar7 | _DAT_1831a6f38) + (uVar7 & _DAT_1831a6f38);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a6fd0 = func_0x000187eb8400((uVar7 | 0x6a96b1f) + (ulonglong)((uint)uVar7 & 0x6a96b1f));
  _DAT_1831a6f00 =
       (_DAT_1831a6f00 ^ _DAT_1831a6fd0 ^ 0x3dc09429e57ff83b) + 0x4c64a3c5 ^ 0x90523af7b156aee5;
  _DAT_1831a6f30 =
       (_DAT_1831a6f30 * -0x1b5dd47823930c69 ^ _DAT_1831a6f00) +
       (_DAT_1831a6fd0 ^ 0x3dc09429e57ff83b);
  _DAT_1831a72a8 = _DAT_1831a6f30 ^ _DAT_1831a6f00;
  _DAT_1831a6f70 = 0x4c64a3c5;
  _DAT_1831a6f60 = func_0x000187eb8400(_DAT_1831a7498 ^ 0x31007322fff12f);
  _DAT_1831a7450 = (_DAT_1831a7450 ^ _DAT_1831a7418) + 0x31101400 ^ 0x7c1d89f9bf0096ae;
  _DAT_1831a7230 = (_DAT_1831a7230 * -0x25bda8ca7407d67 ^ _DAT_1831a7450) + _DAT_1831a7418;
  _DAT_1831a7128 = _DAT_1831a7230 ^ _DAT_1831a7450;
  _DAT_1831a7440 = 0x31101400;
  uVar7 = (_DAT_1831a7058 ^ 0x842224e5) + _DAT_1831a7328 + 0x842224e5;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a7058 ^ 0x842224e5;
  uVar8 = ((_DAT_1831a7328 + _DAT_1831a7058) * 0x2000 | _DAT_1831a7328 + _DAT_1831a7058 >> 0x33) ^
          _DAT_1831a7328;
  _DAT_1831a71c0 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_1831a7058 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7328 + 0x842224e5));
  uVar7 = _DAT_1831a71c0 & 0x3fffffffff;
  _DAT_1831a7378 = _DAT_1831a74a0 ^ uVar7 ^ 0x7c0;
  _DAT_1831a6f68 = (_DAT_1831a6f68 ^ uVar7) + 0x7c0 ^ 0xfe23d8de15b6ccfa;
  _DAT_1831a7430 = (_DAT_1831a7430 * 0x6450d91dec5110e3 ^ _DAT_1831a6f68) + uVar7;
  _DAT_1831a7230 = _DAT_1831a7430 ^ _DAT_1831a6f68;
  _DAT_1831a7178 = 0x7c0;
  _DAT_1831a70a0 = func_0x000187eb8400(_DAT_1831a6ff8 ^ 0x1d007bdb001dca);
  uVar7 = (ulonglong)(~(uint)_DAT_1831a70a0 & 0xce86caec);
  _DAT_1831a74a0 = _DAT_1831a74a0 ^ uVar7 ^ 0xf20d5ef75b0c5e4b;
  _DAT_1831a6f28 = (_DAT_1831a6f28 * -0x667035d5240264d ^ _DAT_1831a74a0) + uVar7;
  _DAT_1831a7100 = _DAT_1831a6f28 ^ _DAT_1831a74a0;
  _DAT_1831a7290 = _DAT_1831a6f60;
  _DAT_1831a7028 = 0;
  uVar7 = ((_DAT_1831a74c0 ^ 0x842224e5) + (ulonglong)((uint)_DAT_1831a74c0 & 0x842224e5) * 2) *
          -_DAT_1831a6f10;
  uVar7 = (uVar7 | _DAT_1831a6f68) + (uVar7 & _DAT_1831a6f68);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a71d8 = func_0x000187eb8400((uVar7 | 0x842224e5) + (ulonglong)((uint)uVar7 & 0x842224e5))
  ;
  _DAT_1831a7078 = _DAT_1831a74a8 ^ _DAT_1831a71d8 ^ 0x7c0;
  _DAT_1831a6fc0 = (_DAT_1831a6fc0 ^ _DAT_1831a71d8) + 0x7c0 ^ 0xb67cbe57c5275fba;
  _DAT_1831a7360 = (_DAT_1831a7360 * -0x639dd14ac2f1f1fb ^ _DAT_1831a6fc0) + _DAT_1831a71d8;
  _DAT_1831a7338 = _DAT_1831a7360 ^ _DAT_1831a6fc0;
  _DAT_1831a6fc8 = 0x7c0;
  uVar6 = *(uint *)(unaff_RBP + 0x30);
  uVar7 = (ulonglong)uVar6 ^ 0x84222325;
  uVar8 = uVar7 ^ _DAT_1831a7498;
  lVar10 = uVar7 + _DAT_1831a7310;
  uVar7 = uVar8 + lVar10;
  uVar9 = (_DAT_1831a7310 ^ 0x7c0) + _DAT_1831a7498 + 0x7c0;
  uVar8 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar8;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831a7310 ^ 0x7c0;
  _DAT_1831a72c0 =
       func_0x000187eb8400((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7498 + 0x7c0) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar10);
  uVar7 = (_DAT_1831a72c0 >> 0xc ^ 0x7c0) & 0x3fffffffffff;
  uVar6 = uVar6 & 0x7c0;
  _DAT_1831a6f98 = (ulonglong)uVar6;
  _DAT_1831a7178 = (_DAT_1831a7178 ^ uVar7) + _DAT_1831a6f98 ^ 0x983dff77387f276d;
  _DAT_1831a7298 = (_DAT_1831a7298 * 0x4306475383b813e1 ^ _DAT_1831a7178) + uVar7;
  _DAT_1831a74a8 = _DAT_1831a7298 ^ _DAT_1831a7178;
  *(uint *)(unaff_RBP + 0x30) = uVar6;
  plVar3 = *(longlong **)(unaff_RBP + 0xa0);
  uVar4 = *(undefined8 *)(unaff_RBP + 0x48);
  lVar10 = (**(code **)(plVar3 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(plVar3,uVar4,0);
  *(int *)(unaff_RBP + 0x70) = (int)*(char *)(lVar10 + *(int *)(unaff_RBP + 0x78));
  (**(code **)(plVar3 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(plVar3,uVar4,lVar10,2);
  uVar6 = *(uint *)(unaff_RBP + 0x70);
  uVar7 = (~_DAT_1831a7468 + 0x63d37cc3) *
          ((_DAT_1831a74c0 ^ 0x57221bb1) + (ulonglong)((uint)_DAT_1831a74c0 & 0x57221bb1) * 2);
  uVar7 = (uVar7 | _DAT_1831a7010) + (uVar7 & _DAT_1831a7010);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a7198 = func_0x000187eb8400((uVar7 | 0x34f16773) + (ulonglong)((uint)uVar7 & 0x34f16773))
  ;
  _DAT_1831a7360 =
       (_DAT_1831a7360 ^ _DAT_1831a7198 & 0xfffffffffffff800) + 0xb0d34456 ^ 0x9dd2873a374794a6;
  _DAT_1831a6fd0 =
       (_DAT_1831a7060 * -0x43aef52144392ef9 ^ _DAT_1831a7360) +
       (_DAT_1831a7198 & 0xfffffffffffff800) ^ _DAT_1831a7360;
  _DAT_1831a7060 = 0xb0d34456;
  _DAT_1831a7488 = func_0x000187eb8400(_DAT_1831a73c0 ^ 0x16ff7431ff7f5d);
  uVar7 = _DAT_1831a7488 - (_DAT_1831a7488 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1831a7488;
  _DAT_1831a70d8 = _DAT_1831a7120 ^ uVar7 ^ 0x18a21aa7;
  _DAT_1831a7248 = (_DAT_1831a7248 ^ uVar7) + 0x18a21aa7 ^ 0x31a2f5f0c4d73e82;
  _DAT_1831a7260 = (_DAT_1831a7260 * -0x6a623e9233f1b165 ^ _DAT_1831a7248) + uVar7;
  _DAT_1831a6f68 = _DAT_1831a7260 ^ _DAT_1831a7248;
  _DAT_1831a7288 = 0x18a21aa7;
  uVar7 = (_DAT_1831a71e0 ^ _DAT_180e023f0) + _DAT_1831a7130 + 0x84222325;
  uVar8 = (_DAT_1831a7130 ^ _UNK_180e023f8) + _DAT_1831a71e0 + 0x2942a6d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a71e0 ^ _DAT_180e023f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831a7130 ^ _UNK_180e023f8;
  _DAT_1831a70f0 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831a71e0 + 0x2942a6d0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7130 + 0x84222325));
  _DAT_1831a7278 =
       (_DAT_1831a7278 ^ _DAT_1831a70f0 & 0xfffffffffffffffe) - 0x2942a6d0 ^ 0x20741bcb821a32c0;
  _DAT_1831a7130 =
       (_DAT_1831a7130 * -0x10c1676ad9c5bf53 ^ _DAT_1831a7278) +
       (_DAT_1831a70f0 & 0xfffffffffffffffe);
  _DAT_1831a70e8 = _DAT_1831a7130 ^ _DAT_1831a7278;
  _DAT_1831a71d0 = 0xd6bd5930;
  _DAT_1831a7158 = func_0x000187eb8400(_DAT_1831a71b8 ^ 0x82ffaac5ff9fe9);
  uVar7 = (_DAT_1831a7158 ^ 0x2942a600) & 0xffffffffffffff00;
  _DAT_1831a72f0 = _DAT_1831a7020 ^ uVar7 ^ 0x2942a70f;
  _DAT_1831a6fd8 = (_DAT_1831a6fd8 ^ uVar7) + 0x2942a70f ^ 0xa5efe385c7d586c7;
  _DAT_1831a7480 = (_DAT_1831a7480 * 0x4d8a8fd2a23eff19 ^ _DAT_1831a6fd8) + uVar7;
  _DAT_1831a74e0 = _DAT_1831a7480 ^ _DAT_1831a6fd8;
  _DAT_1831a7248 = 0x2942a70f;
  uVar7 = (~_DAT_1831a7310 + 0xd6bd5931) *
          ((_DAT_1831a7180 ^ 0xad60842a) + (ulonglong)((uint)_DAT_1831a7180 & 0xad60842a) * 2);
  uVar7 = (uVar7 | _DAT_1831a7490) + (uVar7 & _DAT_1831a7490);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a7468 = func_0x000187eb8400((uVar7 | 0x7bdddd1a) + (ulonglong)((uint)uVar7 & 0x7bdddd1a))
  ;
  uVar7 = (_DAT_1831a7468 ^ 0xffffff00) & 0xffffffffffffffc0;
  _DAT_1831a6f48 = _DAT_1831a7318 ^ uVar7 ^ 0x10000003f;
  _DAT_1831a70e0 = (_DAT_1831a70e0 ^ uVar7) + 0x10000003f ^ 0x3075ceb0f1df9051;
  _DAT_1831a7060 = (_DAT_1831a7060 * 0x31667a8ea08f9eb7 ^ _DAT_1831a70e0) + uVar7;
  _DAT_1831a70c8 = _DAT_1831a7060 ^ _DAT_1831a70e0;
  _DAT_1831a7438 = 0x3f;
  uVar7 = (_DAT_1831a7158 ^ _DAT_180e02400) + _DAT_1831a7140 + 0x84222325;
  uVar8 = (_DAT_1831a7140 ^ _UNK_180e02408) + _DAT_1831a7158 + 0xdf2ee51c;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a7158 ^ _DAT_180e02400;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831a7140 ^ _UNK_180e02408;
  _DAT_1831a74d8 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831a7158 + 0xdf2ee51c) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7140 + 0x84222325));
  uVar7 = (_DAT_1831a74d8 ^ 0xdf2ee51c) & 0x7fffffffffffffff;
  _DAT_1831a6f30 = (_DAT_1831a6f30 ^ uVar7) - 0xdf2ee51c ^ 0xbe5fdcd7229cb97c;
  _DAT_1831a71e8 = (_DAT_1831a71e8 * -0x7c5f3b1021c2f179 ^ _DAT_1831a6f30) + uVar7;
  _DAT_1831a7490 = _DAT_1831a71e8 ^ _DAT_1831a6f30;
  _DAT_1831a72f0 = 0x20d11ae4;
  uVar7 = (~_DAT_1831a74d0 + 0xdf2ee51d) *
          ((_DAT_1831a7390 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1831a7390 & 0x8422231a) * 2);
  uVar7 = (uVar7 | _DAT_1831a7020) + (uVar7 & _DAT_1831a7020);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a7000 = func_0x000187eb8400((uVar7 | 0x5b0cc606) + (ulonglong)((uint)uVar7 & 0x5b0cc606))
  ;
  uVar7 = (_DAT_1831a7000 ^ 0xdf2ee000) & 0xffffffffffffe000;
  _DAT_1831a6fc8 = _DAT_1831a7458 ^ uVar7 ^ 0xdf2ee55b;
  _DAT_1831a74b8 = (_DAT_1831a74b8 ^ uVar7) + 0xdf2ee55b ^ 0xb48385a2657247b;
  _DAT_1831a6f40 = (_DAT_1831a6f40 * 0x61978c62d9b7965d ^ _DAT_1831a74b8) + uVar7;
  _DAT_1831a7358 = _DAT_1831a6f40 ^ _DAT_1831a74b8;
  _DAT_1831a7128 = 0xdf2ee55b;
  _DAT_1831a73c0 = func_0x000187eb8400(_DAT_1831a7390 + 0xffb4002576005cff ^ 0xdb);
  uVar7 = _DAT_1831a73c0 ^ 0x1c9c2966285a830c;
  _DAT_1831a70f0 = _DAT_1831a7468 ^ uVar7 ^ 0x10000003f;
  _DAT_1831a7150 = (_DAT_1831a7150 ^ uVar7) + 0x10000003f ^ 0x1706375b91e17d9;
  _DAT_1831a7320 = (_DAT_1831a7320 * 0x6fe8ad85fe09e617 ^ _DAT_1831a7150) + uVar7;
  _DAT_1831a70e0 = _DAT_1831a7320 ^ _DAT_1831a7150;
  _DAT_1831a7198 = 0x3f;
  uVar7 = (~_DAT_1831a74b0 + 0xb0d34457) *
          ((_DAT_1831a7000 ^ 0x6fdd9cda) + (ulonglong)((uint)_DAT_1831a7000 & 0x6fdd9cda) * 2);
  uVar7 = (uVar7 | _DAT_1831a70c8) + (uVar7 & _DAT_1831a70c8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a6f80 = func_0x000187eb8400((uVar7 | 0xdf0ed88c) + (ulonglong)((uint)uVar7 & 0xdf0ed88c))
  ;
  uVar7 = (_DAT_1831a6f80 << 0x2a | (_DAT_1831a6f80 & 0x7fffffffffffffff) >> 0x16) ^ 0xb0d34456;
  _DAT_1831a7448 = _DAT_1831a7420 ^ uVar7 ^ 0x19cd30455;
  _DAT_1831a7068 = (_DAT_1831a7068 ^ uVar7) + 0x19cd30455 ^ 0x260b3b2853889a28;
  _DAT_1831a7258 = (_DAT_1831a7258 * 0xf5d8135f3c895c9 ^ _DAT_1831a7068) + uVar7;
  _DAT_1831a73a0 = _DAT_1831a7258 ^ _DAT_1831a7068;
  _DAT_1831a7290 = 0x9cd30455;
  _DAT_1831a7190 = func_0x000187eb8400(_DAT_1831a6fb8 + 0x2800c273fffdffU ^ 0x9a);
  _DAT_1831a7238 = (_DAT_1831a7238 ^ _DAT_1831a7138) + 0x5b2cfba9 ^ 0x669cc49916393e7d;
  _DAT_1831a7480 = (_DAT_1831a7480 * -0xabc1def1858e187 ^ _DAT_1831a7238) + _DAT_1831a7138;
  _DAT_1831a6f68 = _DAT_1831a7480 ^ _DAT_1831a7238;
  _DAT_1831a6fc0 = 0x5b2cfba9;
  _DAT_1831a6f20 = func_0x000187eb8400(_DAT_1831a7120 ^ 0x1cff7c1b00213f);
  _DAT_1831a7380 = (_DAT_1831a6f20 ^ 0x6011db3720e3c06c) * 0x38fa9fda18d38465;
  _DAT_1831a7150 = _DAT_1831a7150 ^ _DAT_1831a7380 ^ 0xefe36528f4873edc;
  _DAT_1831a7108 = (_DAT_1831a7108 * 0x7fcb5dfa5e7f0257 ^ _DAT_1831a7150) + _DAT_1831a7380;
  _DAT_1831a72b0 = _DAT_1831a7108 ^ _DAT_1831a7150;
  _DAT_1831a7030 = 0;
  uVar7 = (_DAT_1831a7278 ^ 0x8422231a) + _DAT_1831a7360 + 0x8422231a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a7278 ^ 0x8422231a;
  uVar8 = ((_DAT_1831a7360 + _DAT_1831a7278) * 0x2000 | _DAT_1831a7360 + _DAT_1831a7278 >> 0x33) ^
          _DAT_1831a7360;
  _DAT_1831a70e8 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_1831a7278 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7360 + 0x8422231a));
  uVar7 = (_DAT_1831a70e8 << 0x3d | _DAT_1831a70e8 >> 3) ^ 0x3f;
  _DAT_1831a6ff0 = _DAT_1831a7178 ^ uVar7 ^ 0x3f;
  _DAT_1831a7460 = (_DAT_1831a7460 ^ uVar7) + 0x3f ^ 0xf39026f7e43ab86d;
  _DAT_1831a7338 = (_DAT_1831a7338 * 0x62e015bfe1ef5715 ^ _DAT_1831a7460) + uVar7;
  _DAT_1831a7140 = _DAT_1831a7338 ^ _DAT_1831a7460;
  _DAT_1831a7030 = 0x3f;
  _DAT_1831a6f78 = func_0x000187eb8400(_DAT_1831a7358 + 0xff9f008fdcffddff ^ 0xec);
  uVar7 = _DAT_1831a6f78 - (_DAT_1831a6f78 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_1831a6f78;
  _DAT_1831a7200 = (_DAT_1831a7200 ^ uVar7) + 0x14004000 ^ 0x92668699df3883a8;
  _DAT_1831a7010 = (_DAT_1831a7010 * 0x367a6a1cdb8da41 ^ _DAT_1831a7200) + uVar7;
  _DAT_1831a6f18 = _DAT_1831a7010 ^ _DAT_1831a7200;
  _DAT_1831a7208 = 0x14004000;
  uVar7 = (_DAT_1831a7050 ^ _DAT_180e02410) + _DAT_1831a7448 + 0x6fdd9cda;
  uVar8 = (_DAT_1831a7448 ^ _UNK_180e02418) + _DAT_1831a7050 + 0x14004000;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831a7050 ^ _DAT_180e02410;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831a7448 ^ _UNK_180e02418;
  _DAT_1831a7220 =
       func_0x000187eb8400((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831a7050 + 0x14004000) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7448 + 0x6fdd9cda));
  _DAT_1831a7160 = _DAT_1831a7160 ^ _DAT_1831a7220 ^ 0xd456276003ba68e9;
  _DAT_1831a6f50 = (_DAT_1831a6f50 * 0x1fb5fd35248091d ^ _DAT_1831a7160) + _DAT_1831a7220;
  _DAT_1831a6f40 = _DAT_1831a6f50 ^ _DAT_1831a7160;
  _DAT_1831a7010 = 0;
  uVar7 = ((_DAT_1831a7210 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1831a7210 & 0x8422231a) * 2) *
          -_DAT_1831a7150;
  uVar7 = (uVar7 | _DAT_1831a6f28) + (uVar7 & _DAT_1831a6f28);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831a7170 = func_0x000187eb8400((uVar7 | 0x8422231a) + (ulonglong)((uint)uVar7 & 0x8422231a))
  ;
  uVar7 = _DAT_1831a7170 << 0x34 | _DAT_1831a7170 >> 0xc;
  _DAT_1831a6f88 = _DAT_1831a6fd8 ^ uVar7 ^ 0x3f;
  _DAT_1831a70e8 = (_DAT_1831a70e8 ^ uVar7) + 0x3f ^ 0x238a25807b8167d5;
  _DAT_1831a73a0 = (_DAT_1831a73a0 * 0x13e7849c304e01 ^ _DAT_1831a70e8) + uVar7;
  _DAT_1831a7238 = _DAT_1831a73a0 ^ _DAT_1831a70e8;
  _DAT_1831a6f40 = 0x3f;
  _DAT_1831a7250 = func_0x000187eb8400(_DAT_1831a7340 + 0x20ff7bdd001dffU ^ 0x88);
  uVar7 = _DAT_1831a7250 * -0x3f3275eef84c9103 ^ 0xe3f9bae5;
  _DAT_1831a71b0 = _DAT_1831a71b0 ^ uVar7 ^ 0x3858ca0d2b928538;
  _DAT_1831a6f58 = (_DAT_1831a6f58 * 0x4c0d378544037cf5 ^ _DAT_1831a71b0) + uVar7;
  _DAT_1831a7168 = _DAT_1831a6f58 ^ _DAT_1831a71b0;
  _DAT_1831a7088 = 0;
  _DAT_1831a7490 = func_0x000187eb8400(_DAT_1831a6f20 ^ 0x1eff83fa002151);
  uVar7 = _DAT_1831a7490 - (_DAT_1831a7490 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1831a7490) << 0x16 | _DAT_1831a7490 >> 0x2a;
  _DAT_1831a7258 = _DAT_1831a73f8 ^ uVar7 ^ 0x3f;
  _DAT_1831a7140 = (_DAT_1831a7140 ^ uVar7) + 0x3f ^ 0xd086150348a8609f;
  _DAT_1831a71e8 = (_DAT_1831a71e8 * 0x2c5ec840f2e8d39f ^ _DAT_1831a7140) + uVar7;
  _DAT_1831a7300 = _DAT_1831a71e8 ^ _DAT_1831a7140;
  _DAT_1831a7238 = 0x3f;
  uVar7 = (ulonglong)uVar6 ^ 0x84222325;
  uVar8 = uVar7 ^ _DAT_1831a74c8;
  lVar10 = uVar7 + _DAT_1831a73c0;
  uVar7 = uVar8 + lVar10;
  uVar9 = (_DAT_1831a73c0 ^ 0x3f) + _DAT_1831a74c8 + 0x3f;
  uVar8 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar8;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831a73c0 ^ 0x3f;
  _DAT_1831a7290 =
       func_0x000187eb8400((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a74c8 + 0x3f) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar10);
  uVar7 = _DAT_1831a7290 << 0x16 | _DAT_1831a7290 >> 0x2a;
  uVar6 = uVar6 & 0x3f;
  _DAT_1831a6f30 = (ulonglong)uVar6;
  _DAT_1831a72c0 = (_DAT_1831a72c0 ^ uVar7) + _DAT_1831a6f30 ^ 0xae3a6729f7b0d606;
  _DAT_1831a7350 = (_DAT_1831a7350 * -0x72453812b8669ee5 ^ _DAT_1831a72c0) + uVar7;
  _DAT_1831a72b0 = _DAT_1831a7350 ^ _DAT_1831a72c0;
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x18);
  uVar1 = *(uint *)(unaff_RBP + 0x6c);
  *(uint *)(unaff_RBP + 0x78) = uVar1;
  uVar7 = (ulonglong)uVar1 ^ 0x84222325;
  uVar8 = uVar7 ^ _DAT_1831a7290;
  lVar10 = uVar7 + _DAT_1831a73c0;
  uVar7 = uVar8 + lVar10;
  uVar9 = (_DAT_1831a73c0 ^ 1) + _DAT_1831a7290 + 1;
  iVar2 = *(int *)(unaff_RBP + 0x30);
  uVar8 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar8;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831a73c0 ^ 1;
  _DAT_1831a7470 =
       func_0x000187eb8400((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831a7290 + 1) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar10);
  uVar11 = uVar1 & unaff_XMM8_Da;
  uVar12 = uVar1 | unaff_XMM8_Da;
  uVar13 = uVar1 ^ unaff_XMM8_Da;
  uVar8 = uVar1 ^ unaff_XMM6_Qa;
  uVar7 = (_DAT_1831a7470 & 0xfffffffffffffff) >> 1 | _DAT_1831a7470 & 0xfffffffffffffff;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1831a7470 & 0xfffffffffffffff;
  _DAT_1831a7420 =
       (((uVar8 & 0xffffffff) * (ulonglong)_DAT_180e02460 +
         ((uVar8 & 0xffffffff) * (ulonglong)_DAT_180e024b0 +
          (unaff_XMM6_Qa >> 0x20) * (ulonglong)_DAT_180e02460 << 0x20) +
        ((ulonglong)uVar13 * (ulonglong)_DAT_180e024a0 << 0x20) +
        (ulonglong)uVar13 * (ulonglong)_DAT_180e02490 +
        ((ulonglong)uVar12 * (ulonglong)_DAT_180e02480 << 0x20) +
        (ulonglong)uVar12 * (ulonglong)_DAT_180e02470 +
        ((ulonglong)uVar11 * (ulonglong)_DAT_180e02450 << 0x20 |
        (ulonglong)uVar11 * (ulonglong)_DAT_180e02440) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_180e02430 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_180e02420) -
       (((ulonglong)uVar13 * (ulonglong)_DAT_180e02550 << 0x20) +
        (ulonglong)uVar13 * (ulonglong)_DAT_180e02540 +
        ((ulonglong)uVar12 * (ulonglong)_DAT_180e02530 << 0x20) +
        (ulonglong)uVar12 * (ulonglong)_DAT_180e02520 +
       ((ulonglong)uVar11 * (ulonglong)_DAT_180e02510 << 0x20 |
       (ulonglong)uVar11 * (ulonglong)_DAT_180e02500) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_180e024f0 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_180e024e0)) + 0xad20840f160f999d;
  _DAT_1831a6f58 = _DAT_1831a74c8 ^ uVar7 ^ _DAT_1831a7420;
  _DAT_1831a73a0 = (_DAT_1831a73a0 ^ uVar7) + _DAT_1831a7420 ^ 0x4128e426edc9f2cd;
  _DAT_1831a70e8 = (_DAT_1831a70e8 * 0x6654e9aafb7f1bcd ^ _DAT_1831a73a0) + uVar7;
  _DAT_1831a72a0 = _DAT_1831a70e8 ^ _DAT_1831a73a0;
  _DAT_1831a7420 = _DAT_1831a7420 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x80) = uVar6 + iVar2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x50)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7ea5e63 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ea5e63(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x10) = uVar2;
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


// ----- block @ rva 0x7ea5f87 -----

undefined8 thunk_FUN_187e90aac(void)

{
  longlong *unaff_R15;
  
  (**(code **)(unaff_R15 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x7ea6298 -----

void FUN_187ea6298(void)

{
  return;
}


// ----- block @ rva 0x7eba724 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187eba724(void)

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


// ----- block @ rva 0x7eba8cb -----

void FUN_187eba8cb(void)

{
  return;
}


// ----- block @ rva 0x7ebb0d7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ebb0d7(void)

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


// ----- block @ rva 0x7ebbd5f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebbd5f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0x7ebc104 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187ebad5b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x7ebc109 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebc109(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0x7ebcabd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187ebad5b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x7ebd40c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187ebad5b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x7ebdd74 -----

undefined8 thunk_FUN_187ebdb66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x7ebdf6b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ebdf6b(void)

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


// ----- block @ rva 0x7ebf07f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebf07f(void)

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


// ----- block @ rva 0x7ebf0d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ebf0d3(void)

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


// ----- block @ rva 0x7ebf0fa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebf0fa(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180e08508)();
  return;
}


// ----- block @ rva 0x7ebf141 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebf141(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180e087b8)();
  return;
}


// ----- block @ rva 0x7ebf15c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebf15c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectArrayElement /*0x568*/))();
  (*_DAT_180e08358)();
  return;
}


// ----- block @ rva 0x7ebf99a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebf99a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_180e08788)();
  return;
}


// ----- block @ rva 0x7ebf9f4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ebf9f4(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7ebfaa6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebfaa6(void)

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


// ----- block @ rva 0x7ebfaf7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ebfaf7(void)

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


// ----- block @ rva 0x7ebfdaf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebfdaf(void)

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


// ----- block @ rva 0x7ebfe03 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebfe03(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180e08698)();
  return;
}


// ----- block @ rva 0x7ebfe38 -----

void FUN_187ebfe38(void)

{
  return;
}


// ----- block @ rva 0x7ebffb0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ebffb0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180e091c8)();
  return;
}


// ----- block @ rva 0x7ec0600 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec0600(void)

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


// ----- block @ rva 0x7ec092b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec092b(void)

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


// ----- block @ rva 0x7ec0da5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec0da5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180e08c78)();
  return;
}


// ----- block @ rva 0x7ec0fa6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec0fa6(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180e08ec8)();
  return;
}


// ----- block @ rva 0x7ec1004 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec1004(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_180e08fd8)();
  return;
}


// ----- block @ rva 0x7ec1928 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec1928(void)

{
  FUN_190dd72e0();
  (*_DAT_180e08838)();
  return;
}


// ----- block @ rva 0x7ec1950 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec1950(void)

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


// ----- block @ rva 0x7ec1bc7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec1bc7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180e08e78)();
  return;
}


// ----- block @ rva 0x7ec232d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec232d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180e09628)();
  return;
}


// ----- block @ rva 0x7ec279a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec279a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180e09108)();
  return;
}


// ----- block @ rva 0x7ec283a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec283a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180e08d58)();
  return;
}


// ----- block @ rva 0x7ec2895 -----

void FUN_187ec2895(void)

{
  return;
}


// ----- block @ rva 0x7ec28b4 -----

void FUN_187ec28b4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7ec2adf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec2adf(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
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


// ----- block @ rva 0x7ec433e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec433e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
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


// ----- block @ rva 0x7ec4b20 -----

void thunk_FUN_187ec4b68(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x7ec4ff5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec4ff5(void)

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


// ----- block @ rva 0x7ec5b4c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec5b4c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
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


// ----- block @ rva 0x7ec7378 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec7378(void)

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


// ----- block @ rva 0x7ec7eb1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec7eb1(void)

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


// ----- block @ rva 0x7ec7fd9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ec7fd9(void)

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


// ----- block @ rva 0x7ec82fd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ec82fd(void)

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


// ----- block @ rva 0x7ec84a2 -----

void FUN_187ec84a2(void)

{
  return;
}

