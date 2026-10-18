// ===== Lsixtwo/p; _abb327e371537caac251ee182a598689 ()V (handler @ image 190a0c350, runtime 6ffff861c350) =====

void FUN_190a0c350(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190a0c438 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ddfe28 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; bV (Lsixtwo/lC;)V (handler @ image 1909b5a80, runtime 6ffff85c5a80) =====

void FUN_1909b5a80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x23a5,0x79);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001909b5b76 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dcd7b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dA (Z)V (handler @ image 190a2a0b0, runtime 6ffff863a0b0) =====

void FUN_190a2a0b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x23a5,0x79);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190a2a154 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182de3100 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dB (DDLsixtwo/mA;DD)Z (handler @ image 190a4e3c0, runtime 6ffff865e3c0) =====

void FUN_190a4e3c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x23a5,0x79);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190a4e490 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182debfb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dC (Lsixtwo/cy;ZLsixtwo/aj;)V (handler @ image 190a6e340, runtime 6ffff867e340) =====

void FUN_190a6e340(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x23a5,0x79);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190a6e434 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182df5b60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dD (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException; (handler @ image 190a83cc0, runtime 6ffff8693cc0) =====

undefined8 FUN_190a83cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/p; dE ([B)Ljava/lang/String; (handler @ image 1909c9b50, runtime 6ffff85d9b50) =====

void FUN_1909c9b50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001909c9bf3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dd4240 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/p; dF (IJ)Ljava/lang/String; (handler @ image 1909f2bd0, runtime 6ffff8602bd0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1909f2bd0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar7 = (uRam000000018348c5c8 ^ _UNK_182ddb1d0) + uRam000000018348c320 + 0xcf77011c59c6e647;
  uVar9 = (uRam000000018348c320 ^ _UNK_182ddb1d8) + uRam000000018348c5c8 + 0xf5cb0faef052c0a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c5c8 ^ _UNK_182ddb1d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348c320 ^ _UNK_182ddb1d8;
  lRam000000018348c6c0 =
       func_0x0001909f9f00((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348c5c8 + 0xf5cb0faef052c0a0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018348c320 + 0xcf77011c59c6e647));
  uRam000000018348c678 =
       (uRam000000018348c678 ^ lRam000000018348c6c0 * 0x642b1e504211de39) + 0x3abc0eb22db605c2 ^
       0x542eadd1593669dd;
  uRam000000018348c828 =
       (uRam000000018348c828 * 0x2a11e39ffa219791 ^ uRam000000018348c678) +
       lRam000000018348c6c0 * 0x642b1e504211de39;
  uRam000000018348c260 = uRam000000018348c828 ^ uRam000000018348c678;
  uRam000000018348c280 = 0x3abc0eb22db605c2;
  uVar7 = (~uRam000000018348c888 + 0xabca778ef01bd227) *
          ((uRam000000018348c830 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018348c830 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam000000018348c410) + (uVar7 & uRam000000018348c410);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c508 =
       func_0x0001909f9f00((uVar7 | 0xabca778e7439f103) + (uVar7 & 0xabca778e7439f103));
  uRam000000018348c300 =
       (uRam000000018348c300 ^ uRam000000018348c508 & 0x7fffffffffffffff) + 0x543588710fe42dda ^
       0xc94f02c6e2def29f;
  uRam000000018348c560 =
       (uRam000000018348c560 * 0x6c2ba43ffc47b647 ^ uRam000000018348c300) +
       (uRam000000018348c508 & 0x7fffffffffffffff);
  uRam000000018348c310 = uRam000000018348c560 ^ uRam000000018348c300;
  uRam000000018348c7f0 = 0x543588710fe42dda;
  uRam000000018348c388 = func_0x0001909f9f00(lRam000000018348c7d0 + 0x35547d75b5d6d9b4U ^ 0x6b);
  uVar7 = uRam000000018348c388 >> 1 | uRam000000018348c388;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018348c388;
  uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar9 = (uint)bVar1 + (uint)bVar1 ^ uVar9;
  uRam000000018348c360 = uRam000000018348c628 ^ uVar9 ^ 0x7fff;
  uRam000000018348c490 = (uRam000000018348c490 ^ uVar9) + 0x7fff ^ 0xae78c788bdf7c93a;
  uRam000000018348c738 = (uRam000000018348c738 * -0x42a017d5070d22b5 ^ uRam000000018348c490) + uVar9
  ;
  uRam000000018348c3c0 = uRam000000018348c738 ^ uRam000000018348c490;
  uRam000000018348c340 = 0x7fff;
  uVar7 = (uRam000000018348c4a0 ^ _UNK_182ddb1e0) + uRam000000018348c648 + 0x84225cda;
  uVar9 = (uRam000000018348c648 ^ _UNK_182ddb1e8) + uRam000000018348c4a0 + 0xe8b631f5ba10089c;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c4a0 ^ _UNK_182ddb1e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348c648 ^ _UNK_182ddb1e8;
  uRam000000018348c7b0 =
       func_0x0001909f9f00((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348c4a0 + 0xe8b631f5ba10089c) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c648 + 0x84225cda));
  uVar7 = uRam000000018348c7b0 >> 1 | uRam000000018348c7b0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018348c7b0;
  uRam000000018348c2d8 = uRam000000018348c8f0 ^ uVar7 ^ 0xe8b631f5ba10889b;
  uRam000000018348c250 = (uRam000000018348c250 ^ uVar7) + 0xe8b631f5ba10889b ^ 0xc862bd54b2fa1da4;
  uRam000000018348c608 = (uRam000000018348c608 * -0x3c6a2d75df5e93d1 ^ uRam000000018348c250) + uVar7
  ;
  uRam000000018348c680 = uRam000000018348c608 ^ uRam000000018348c250;
  uRam000000018348c320 = 0xe8b631f5ba10889b;
  uRam000000018348c6a0 = func_0x0001909f9f00(uRam000000018348c8f8 ^ 0xa35450f5565cd36a);
  uVar7 = (uRam000000018348c6a0 & 0x3ffffffffff) << 0xc | uRam000000018348c6a0 >> 0x34;
  uRam000000018348c6f8 = uRam000000018348c158 ^ uVar7 ^ 0x7fff;
  uRam000000018348c300 = (uRam000000018348c300 ^ uVar7) + 0x7fff ^ 0xda25b3e329e3f2b0;
  uRam000000018348c7c8 = (uRam000000018348c7c8 * -0x66e4bbf347a435e1 ^ uRam000000018348c300) + uVar7
  ;
  uRam000000018348c158 = uRam000000018348c7c8 ^ uRam000000018348c300;
  uRam000000018348c230 = 0x7fff;
  uVar7 = (~uRam000000018348c460 + 0x51137ef90b9f0ffb) *
          ((uRam000000018348c400 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018348c400 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam000000018348c610) + (uVar7 & uRam000000018348c610);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c830 =
       func_0x0001909f9f00((uVar7 | 0x51137ef98fbd2cdf) + (uVar7 & 0x51137ef98fbd2cdf));
  uRam000000018348c640 =
       (uRam000000018348c640 ^ uRam000000018348c830 ^ 0x51137ef90b9f0ffa) + 0xaeec8106f460f006 ^
       0x8c8bbebc57b9879c;
  uRam000000018348c430 =
       (uRam000000018348c430 * 0x651d7a4db7a48269 ^ uRam000000018348c640) +
       (uRam000000018348c830 ^ 0x51137ef90b9f0ffa);
  uRam000000018348c468 = uRam000000018348c430 ^ uRam000000018348c640;
  uRam000000018348c150 = 0xaeec8106f460f006;
  uRam000000018348c260 = func_0x0001909f9f00(uRam000000018348c598 ^ 0x91534ce95af632ab);
  uVar7 = uRam000000018348c3f8 >> 1 | uRam000000018348c3f8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam000000018348c3f8;
  uRam000000018348c428 = uRam000000018348c5d0 ^ uVar7 ^ 0x7fff;
  uRam000000018348c4e0 = (uRam000000018348c4e0 ^ uVar7) + 0x7fff ^ 0xcbba039d58931cc5;
  uRam000000018348c1c8 = (uRam000000018348c1c8 * -0x2fb31b9ae76f547d ^ uRam000000018348c4e0) + uVar7
  ;
  uRam000000018348c248 = uRam000000018348c1c8 ^ uRam000000018348c4e0;
  uRam000000018348c6b8 = 0x7fff;
  uVar7 = (~uRam000000018348c690 + 0x3abc0eb22db605c3) *
          ((uRam000000018348c860 ^ 0xfffddffffa549d5a) +
          (uRam000000018348c860 & 0x7ffddffffa549d5a) * 2);
  uVar7 = (uVar7 | uRam000000018348c8b8) + (uVar7 & uRam000000018348c8b8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c1e0 =
       func_0x0001909f9f00((uVar7 | 0xc541d14dd7e29898) + (uVar7 & 0xc541d14dd7e29898));
  uVar7 = uRam000000018348c1e0 - (uRam000000018348c1e0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018348c1e0;
  uRam000000018348c4e8 = uRam000000018348c6a0 ^ uVar7 ^ 0x3ab9eeb1ac2cc441;
  uRam000000018348c838 = (uRam000000018348c838 ^ uVar7) + 0x3ab9eeb1ac2cc441 ^ 0xa9901764c2cb84f2;
  uRam000000018348c6b0 = (uRam000000018348c6b0 * 0x59372258cd887167 ^ uRam000000018348c838) + uVar7;
  uRam000000018348c2c0 = uRam000000018348c6b0 ^ uRam000000018348c838;
  uRam000000018348c368 = 0x3ab9eeb1ac2cc441;
  uVar7 = (~uRam000000018348c430 + 0x3abc0eb22db605c3) *
          ((uRam000000018348c1b0 ^ 0xfffddffffa549d5a) +
          (uRam000000018348c1b0 & 0x7ffddffffa549d5a) * 2);
  uVar7 = (uVar7 | uRam000000018348c3c8) + (uVar7 & uRam000000018348c3c8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c390 =
       func_0x0001909f9f00((uVar7 | 0xc541d14dd7e29898) + (uVar7 & 0xc541d14dd7e29898));
  uVar9 = uRam000000018348c390 ^ 0x34e1eb4be8fed73e;
  uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar9) <<
          10 | uVar9 >> 0x36;
  uRam000000018348c738 = (uRam000000018348c738 ^ uVar7) + 0xc541d14d53c0bbbd ^ 0xd204ccd4ce06e262;
  uRam000000018348c8f0 = (uRam000000018348c8f0 * 0x79bff88da8ed3f3d ^ uRam000000018348c738) + uVar7;
  uRam000000018348c258 = uRam000000018348c8f0 ^ uRam000000018348c738;
  uRam000000018348c7b0 = 0xc541d14d53c0bbbd;
  uRam000000018348c838 = func_0x0001909f9f00(uRam000000018348c630 + 0x4d97bea868305d44 ^ 0x8f);
  uVar7 = ~(uRam000000018348c838 << 0x15 | uRam000000018348c838 >> 0x2b) & 0xfffddfff7e76be7f;
  uRam000000018348c278 = (uRam000000018348c278 ^ uVar7) + 0x3abc0eb22c360442 ^ 0xbea36541fc06ab02;
  uRam000000018348c6a0 = (uRam000000018348c6a0 * 0x53c3acd821662b91 ^ uRam000000018348c278) + uVar7;
  uRam000000018348c100 = uRam000000018348c6a0 ^ uRam000000018348c278;
  uRam000000018348c1e8 = 0x3abc0eb22c360442;
  uRam000000018348c430 = func_0x0001909f9f00(uRam000000018348c178 ^ 0x19903688fc348def);
  uVar7 = (uRam000000018348c430 ^ 0x1409ab2960fab574) & 0x7fffffffffffffff ^ 0xc541d14d53c0bbbd;
  uRam000000018348c600 = uRam000000018348c220 ^ uVar7 ^ 0x3ab9eeb1ac2cc441;
  uRam000000018348c1f0 = (uRam000000018348c1f0 ^ uVar7) + 0x3ab9eeb1ac2cc441 ^ 0x5680607bdc8badd8;
  uRam000000018348c420 = (uRam000000018348c420 * 0x5193544f361a7bb7 ^ uRam000000018348c1f0) + uVar7;
  uRam000000018348c630 = uRam000000018348c420 ^ uRam000000018348c1f0;
  uRam000000018348c870 = 0x3ab9eeb1ac2cc441;
  uVar7 = (~uRam000000018348c168 + 0x3ab9eeb1ac2cc442) *
          ((uRam000000018348c840 ^ 0x3ab9eeb1280ee764) +
          (uRam000000018348c840 & 0x3ab9eeb1280ee764) * 2);
  uVar7 = (uVar7 | uRam000000018348c298) + (uVar7 & uRam000000018348c298);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c1d0 =
       func_0x0001909f9f00((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam000000018348c648 = uRam000000018348c648 ^ uRam000000018348c1d0 ^ 0x66f3d0179fc7b62;
  uRam000000018348c300 =
       (uRam000000018348c300 * 0x71b6285565e0e86b ^ uRam000000018348c648) + uRam000000018348c1d0;
  uRam000000018348c378 = uRam000000018348c300 ^ uRam000000018348c648;
  uRam000000018348c340 = 0;
  uVar7 = (uRam000000018348c760 ^ 0x84225cda) + uRam000000018348c290 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c760 ^ 0x84225cda;
  uVar9 = ((uRam000000018348c290 + uRam000000018348c760) * 0x2000 |
          uRam000000018348c290 + uRam000000018348c760 >> 0x33) ^ uRam000000018348c290;
  uRam000000018348c228 = uRam000000018348c1d0;
  uRam000000018348c358 =
       func_0x0001909f9f00((uVar9 << 0x1d | uVar9 >> 0x23) - uRam000000018348c760 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c290 + 0x84225cda));
  uVar7 = uRam000000018348c358 & 0xfffffffff8000000;
  uRam000000018348c228 = uRam000000018348c690 ^ uVar7 ^ 0x7fff;
  uRam000000018348c3f0 = (uRam000000018348c3f0 ^ uVar7) + 0x7fff ^ 0x7a6b04135e74c856;
  uRam000000018348c740 = (uRam000000018348c740 * 0x69fba0f3c2539263 ^ uRam000000018348c3f0) + uVar7;
  uRam000000018348c3d0 = uRam000000018348c740 ^ uRam000000018348c3f0;
  uRam000000018348c6c8 = 0x7fff;
  uVar7 = (~uRam000000018348c790 + 0x2200081894181) *
          ((uRam000000018348c118 ^ 0xfffddffffa549d5a) +
          (uRam000000018348c118 & 0x7ffddffffa549d5a) * 2);
  uVar7 = (uVar7 | uRam000000018348c288) + (uVar7 & uRam000000018348c288);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c508 =
       func_0x0001909f9f00((uVar7 | 0xffffffff7bdddcda) + (uVar7 & 0xffffffff7bdddcda));
  uRam000000018348c568 = uRam000000018348c568 ^ ~uRam000000018348c508 ^ 0x8c388d1bb32f97d7;
  uRam000000018348c238 =
       (uRam000000018348c238 * 0x5e6430654898256b ^ uRam000000018348c568) + ~uRam000000018348c508;
  uRam000000018348c800 = uRam000000018348c238 ^ uRam000000018348c568;
  uRam000000018348c1b0 = 0;
  uVar7 = (uRam000000018348c748 ^ 0x84225cda) + uRam000000018348c4f8 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c748 ^ 0x84225cda;
  uVar9 = ((uRam000000018348c4f8 + uRam000000018348c748) * 0x2000 |
          uRam000000018348c4f8 + uRam000000018348c748 >> 0x33) ^ uRam000000018348c4f8;
  uRam000000018348c748 =
       func_0x0001909f9f00((uVar9 << 0x1d | uVar9 >> 0x23) - uRam000000018348c748 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c4f8 + 0x84225cda));
  uVar7 = (uRam000000018348c748 >> 0x2a) << 0x33 |
          ((uRam000000018348c748 ^ 0x7fff) << 0x16 | uRam000000018348c748 >> 0x2a) >> 0xd;
  uRam000000018348c708 = uRam000000018348c128 ^ uVar7 ^ 0x7fff;
  uRam000000018348c760 = (uRam000000018348c760 ^ uVar7) + 0x7fff ^ 0x23946956f89943dc;
  uRam000000018348c670 = (uRam000000018348c670 * 0x4f26e5afe0c03327 ^ uRam000000018348c760) + uVar7;
  uRam000000018348c610 = uRam000000018348c670 ^ uRam000000018348c760;
  uRam000000018348c140 = 0x7fff;
  uVar7 = (~uRam000000018348c618 + 0x77b8c2ef2e302234) *
          ((uRam000000018348c1d0 ^ 0x77b8c2efaa120116) +
          (uRam000000018348c1d0 & 0x77b8c2efaa120116) * 2);
  uVar7 = (uVar7 | uRam000000018348c630) + (uVar7 & uRam000000018348c630);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c6b0 =
       func_0x0001909f9f00((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uVar7 = (uRam000000018348c6b0 ^ 0xbae2be7e0581b41a) << 10 |
          (uRam000000018348c6b0 ^ 0xbae2be7e0581b41a) >> 0x36;
  uRam000000018348c260 = uRam000000018348c260 ^ uVar7 ^ 0xc6b79cec774b73fb;
  uRam000000018348c3e8 = (uRam000000018348c3e8 * -0x5c1d14ae1ed522e7 ^ uRam000000018348c260) + uVar7
  ;
  uRam000000018348c430 = uRam000000018348c3e8 ^ uRam000000018348c260;
  uRam000000018348c528 = 0;
  uRam000000018348c128 = func_0x0001909f9f00(uRam000000018348c650 + 0x2bff7bb5ffddff ^ 7);
  uVar7 = uRam000000018348c128 & 0xffffffffffffff;
  uRam000000018348c278 = uRam000000018348c718 ^ uVar7 ^ 0x7fff;
  uRam000000018348c750 = (uRam000000018348c750 ^ uVar7) + 0x7fff ^ 0xb1db417950998f6a;
  uRam000000018348c528 = (uRam000000018348c528 * -0x42a3a5d6ac56a455 ^ uRam000000018348c750) + uVar7
  ;
  uRam000000018348c7f0 = uRam000000018348c528 ^ uRam000000018348c750;
  uRam000000018348c3f0 = 0x7fff;
  uVar7 = (~uRam000000018348c608 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam000000018348c5c0) +
          ((param_4 ^ 0x84222325) & uRam000000018348c5c0) * 2);
  uVar7 = (uVar7 | uRam000000018348c4a0) + (uVar7 & uRam000000018348c4a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c8c0 =
       func_0x0001909f9f00((param_4 ^ 0x84225cda | uVar7) + (uVar7 & (param_4 ^ 0x84225cda)));
  uVar3 = (uint)param_4 & 0x7fff;
  uVar9 = (ulonglong)uVar3;
  uRam000000018348c7c0 =
       (uRam000000018348c7c0 ^ uRam000000018348c8c0 * 0x74d181cf478b1ed7) + uVar9 ^
       0x76e88f6233d19802;
  uRam000000018348c198 =
       (uRam000000018348c198 * -0x49f421d06b589c67 ^ uRam000000018348c7c0) +
       uRam000000018348c8c0 * 0x74d181cf478b1ed7;
  uRam000000018348c708 = uRam000000018348c198 ^ uRam000000018348c7c0;
  uVar11 = (ulonglong)param_3;
  uVar7 = uVar9 ^ 0x84222325 ^ uRam000000018348c100;
  lVar4 = (uVar9 ^ 0x84222325) + uRam000000018348c748;
  uVar8 = uVar7 + lVar4;
  uVar10 = (uVar11 ^ uRam000000018348c748) + uRam000000018348c100 + uVar11;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar11 ^ uRam000000018348c748;
  uRam000000018348c6b0 = uVar9;
  uRam000000018348c6b8 =
       func_0x0001909f9f00((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018348c100 + uVar11) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar4);
  uVar9 = (uVar9 + uVar11) - (ulonglong)((param_3 & uVar3) * 2);
  uRam000000018348c840 = (uRam000000018348c840 ^ uRam000000018348c6b8) + uVar9 ^ 0xed69307824dfdc12;
  uRam000000018348c8a0 =
       (uRam000000018348c8a0 * 0x7354dedfc34bb83b ^ uRam000000018348c840) + uRam000000018348c6b8;
  uRam000000018348c7e0 = uRam000000018348c8a0 ^ uRam000000018348c840;
  uVar9 = uVar9 & 0xffffffff;
  uRam000000018348c660 = uVar9;
  uRam000000018348c1a0 = func_0x0001909f9f00(lRam000000018348c480 + 0xff88ff5706ff48ffU ^ 0xd0);
  uRam000000018348c518 =
       (uRam000000018348c518 ^ uRam000000018348c1a0 ^ 0x1ef1d997) + 0x3ff9fdbf ^ 0xc49826c8a1d79a80;
  uRam000000018348c4e8 =
       (uRam000000018348c4e8 * 0x73518ca711c7e7cd ^ uRam000000018348c518) +
       (uRam000000018348c1a0 ^ 0x1ef1d997);
  uRam000000018348c288 = uRam000000018348c4e8 ^ uRam000000018348c518;
  uRam000000018348c820 = 0x3ff9fdbf;
  uRam000000018348c390 = func_0x0001909f9f00(uRam000000018348c648 + 0xacffa64effb4ff ^ 0xe4);
  uVar7 = (ulonglong)(((uint)uRam000000018348c390 ^ 0x14460c82) & 0x74c66da6);
  uRam000000018348c2d8 = (uRam000000018348c2d8 ^ uVar7) + 0x2e75d6f4 ^ 0x7b6f4d8387dd3ab0;
  uRam000000018348c830 = (uRam000000018348c830 * 0xd6b3fd10126787d ^ uRam000000018348c2d8) + uVar7;
  uRam000000018348c210 = uRam000000018348c830 ^ uRam000000018348c2d8;
  uRam000000018348c4d8 = 0x2e75d6f4;
  uRam000000018348c318 = func_0x0001909f9f00(uRam000000018348c648 ^ 0xff14007bf4ff6520);
  uRam000000018348c770 =
       (uRam000000018348c770 ^ uRam000000018348c318) - 0x84d738 ^ 0x2eefc27ca53e1982;
  uRam000000018348c800 =
       (uRam000000018348c800 * 0x1b82c53b855e5229 ^ uRam000000018348c770) + uRam000000018348c318;
  uRam000000018348c320 = uRam000000018348c800 ^ uRam000000018348c770;
  uRam000000018348c630 = 0xff7b28c8;
  uRam000000018348c4a0 = func_0x0001909f9f00(uRam000000018348c228 + 0x180074b2ffbbff ^ 0x46);
  uRam000000018348c5e8 = uRam000000018348c3f8 ^ uRam000000018348c4a0 ^ 0x100003c7a;
  uRam000000018348c580 =
       (uRam000000018348c580 ^ uRam000000018348c4a0) + 0x100003c7a ^ 0xd96e0771991cd158;
  uRam000000018348c2a8 =
       (uRam000000018348c2a8 * -0x43a6c39dbe47238d ^ uRam000000018348c580) + uRam000000018348c4a0;
  uRam000000018348c1f8 = uRam000000018348c2a8 ^ uRam000000018348c580;
  uRam000000018348c8d8 = 0x3c7a;
  uVar7 = (uRam000000018348c600 ^ _UNK_182ddb1f0) + uRam000000018348c5e0 + 0x84222325;
  uVar11 = (uRam000000018348c5e0 ^ _UNK_182ddb1f8) + uRam000000018348c600 + 0x8c182688;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c600 ^ _UNK_182ddb1f0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018348c5e0 ^ _UNK_182ddb1f8;
  uRam000000018348c458 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018348c600 + 0x8c182688) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c5e0 + 0x84222325));
  uRam000000018348c5e8 =
       (uRam000000018348c5e8 ^ uRam000000018348c458 * -0x376be1ee5f7264b5) - 0x8c182688 ^
       0xb2cdbdf0d93984eb;
  uRam000000018348c8f0 =
       (uRam000000018348c8f0 * 0x544ea1e504828ed5 ^ uRam000000018348c5e8) +
       uRam000000018348c458 * -0x376be1ee5f7264b5;
  uRam000000018348c708 = uRam000000018348c8f0 ^ uRam000000018348c5e8;
  uRam000000018348c7f8 = 0x73e7d978;
  uVar7 = (uRam000000018348c870 ^ _UNK_182ddb200) + uRam000000018348c638 + 0x84221f5f;
  uVar11 = (uRam000000018348c638 ^ _UNK_182ddb208) + uRam000000018348c870 + 0x8c182688;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c870 ^ _UNK_182ddb200;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018348c638 ^ _UNK_182ddb208;
  uRam000000018348c3c0 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018348c870 + 0x8c182688) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c638 + 0x84221f5f));
  uVar7 = (uRam000000018348c3c0 ^ 0x8c183efa) & 0x7fffffffffffffff;
  uRam000000018348c3a8 = uRam000000018348c250 ^ uVar7 ^ 0x8c186302;
  uRam000000018348c588 = (uRam000000018348c588 ^ uVar7) + 0x8c186302 ^ 0x2f506847dc678198;
  uRam000000018348c780 = (uRam000000018348c780 * -0xc10a7b54c265463 ^ uRam000000018348c588) + uVar7;
  uRam000000018348c580 = uRam000000018348c780 ^ uRam000000018348c588;
  uRam000000018348c7b0 = 0x8c186302;
  uRam000000018348c600 = func_0x0001909f9f00(uRam000000018348c458 ^ 0xff970024df003204);
  uVar7 = uRam000000018348c600 & 0xffffffffffff8000;
  uRam000000018348c668 = uRam000000018348c148 ^ uVar7 ^ 0x100003c7a;
  uRam000000018348c7b0 = (uRam000000018348c7b0 ^ uVar7) + 0x100003c7a ^ 0xf07ed3a3a2ddc2f9;
  uRam000000018348c428 = (uRam000000018348c428 * -0x69b5b0c7251729d ^ uRam000000018348c7b0) + uVar7;
  uRam000000018348c3f8 = uRam000000018348c428 ^ uRam000000018348c7b0;
  uRam000000018348c1e8 = 0x3c7a;
  uVar7 = (uRam000000018348c7e0 ^ _UNK_182ddb210) + uRam000000018348c5f0 + 0x84222325;
  uVar11 = (uRam000000018348c5f0 ^ _UNK_182ddb218) + uRam000000018348c7e0 + 0xc11deda4;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c7e0 ^ _UNK_182ddb210;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018348c5f0 ^ _UNK_182ddb218;
  lRam000000018348c4f0 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018348c7e0 + 0xc11deda4) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c5f0 + 0x84222325));
  uRam000000018348c428 =
       (uRam000000018348c428 ^ lRam000000018348c4f0 * -0x5aa854ee9d7d8b4f) - 0xc11deda4 ^
       0x68a90f3371b8bb4e;
  uRam000000018348c310 =
       (uRam000000018348c310 * 0x67de413e35ed8489 ^ uRam000000018348c428) +
       lRam000000018348c4f0 * -0x5aa854ee9d7d8b4f;
  uRam000000018348c188 = uRam000000018348c310 ^ uRam000000018348c428;
  uRam000000018348c1c0 = uRam000000018348c2d8 ^ 0xffffffff3ee2125c;
  uRam000000018348c368 = 0x3ee2125c;
  uVar7 = (~uRam000000018348c150 + 0xc11deda5) *
          ((uRam000000018348c438 ^ 0x84221f5f) +
          (ulonglong)((uint)uRam000000018348c438 & 0x84221f5f) * 2);
  uVar7 = (uVar7 | uRam000000018348c3e8) + (uVar7 & uRam000000018348c3e8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c5e8 =
       func_0x0001909f9f00((uVar7 | 0x453ff2fb) + (ulonglong)((uint)uVar7 & 0x453ff2fb));
  uVar7 = uRam000000018348c5e8 - (uRam000000018348c5e8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018348c5e8;
  uRam000000018348c310 = uRam000000018348c818 ^ uVar7 ^ 0xc11e2a1e;
  uRam000000018348c7c0 = (uRam000000018348c7c0 ^ uVar7) + 0xc11e2a1e ^ 0x20763d11c0c1bc8b;
  uRam000000018348c1e0 = (uRam000000018348c1e0 * -0x1243ab89a8551755 ^ uRam000000018348c7c0) + uVar7
  ;
  uRam000000018348c758 = uRam000000018348c1e0 ^ uRam000000018348c7c0;
  uRam000000018348c3f8 = 0xc11e2a1e;
  uVar7 = (uRam000000018348c660 ^ _UNK_182ddb220) + uRam000000018348c3a0 + 0x453c093b;
  uVar11 = (uRam000000018348c3a0 ^ _UNK_182ddb228) + uRam000000018348c660 + 0x3ee2125c;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c660 ^ _UNK_182ddb220;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018348c3a0 ^ _UNK_182ddb228;
  uRam000000018348c668 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018348c660 + 0x3ee2125c) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c3a0 + 0x453c093b));
  uVar7 = uRam000000018348c668 ^ 0x3ee2125c;
  uRam000000018348c2a0 = uRam000000018348c148 ^ uVar7 ^ 0x100003c7a;
  uRam000000018348c3b8 = (uRam000000018348c3b8 ^ uVar7) + 0x100003c7a ^ 0x822d9befa4424a20;
  uRam000000018348c650 = (uRam000000018348c650 * 0x67d2ea40ba63f425 ^ uRam000000018348c3b8) + uVar7;
  uRam000000018348c408 = uRam000000018348c650 ^ uRam000000018348c3b8;
  uRam000000018348c280 = 0x3c7a;
  uRam000000018348c708 = func_0x0001909f9f00(uRam000000018348c138 ^ 0x8008cde005913);
  uVar7 = uRam000000018348c708 ^ 0x40240;
  uVar7 = (uVar7 << 0x30 | uVar7 >> 0x10) >> 0x25 | (uVar7 >> 0x10) << 0x1b;
  uRam000000018348c7b8 = uRam000000018348c4b0 ^ uVar7 ^ 0x6e6fd4b3;
  uRam000000018348c178 = (uRam000000018348c178 ^ uVar7) + 0x6e6fd4b3 ^ 0xbee0e43870c7fe2e;
  uRam000000018348c210 = (uRam000000018348c210 * -0x6eb4c880edf2b74d ^ uRam000000018348c178) + uVar7
  ;
  uRam000000018348c658 = uRam000000018348c210 ^ uRam000000018348c178;
  uRam000000018348c358 = 0x6e6fd4b3;
  uRam000000018348c3b8 = func_0x0001909f9f00(uRam000000018348c3c0 + 0xfff7ff9329ff69ff ^ 0x96);
  uVar7 = uRam000000018348c3b8 & 0x7fffffffffffffff ^ 0x3ff9fdbf;
  uRam000000018348c540 = (uRam000000018348c540 ^ uVar7) + 0x2e71d4b4 ^ 0x6706e26879f76ff;
  uRam000000018348c430 = (uRam000000018348c430 * -0x70dde8e5ee3093a9 ^ uRam000000018348c540) + uVar7
  ;
  uRam000000018348c598 = uRam000000018348c430 ^ uRam000000018348c540;
  uRam000000018348c708 = 0x2e71d4b4;
  uVar7 = (uRam000000018348c880 ^ _UNK_182ddb230) + uRam000000018348c3f8 + 0x95ae086e;
  uVar11 = (uRam000000018348c3f8 ^ _UNK_182ddb238) + uRam000000018348c880 + 0x5ce3a968;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c880 ^ _UNK_182ddb230;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018348c3f8 ^ _UNK_182ddb238;
  uRam000000018348c2c0 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018348c880 + 0x5ce3a968) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c3f8 + 0x95ae086e));
  uVar7 = ((uRam000000018348c2c0 & 0xfff0001ffff80000) << 0xc | uRam000000018348c2c0 >> 0x34) << 0xf
          | (uRam000000018348c2c0 & 0xfffffffffffff) >> 0x25;
  uRam000000018348c880 = uRam000000018348c848 ^ uVar7 ^ 0x6e6fd4b3;
  uRam000000018348c588 = (uRam000000018348c588 ^ uVar7) + 0x6e6fd4b3 ^ 0x908881caff8e4458;
  uRam000000018348c698 = (uRam000000018348c698 * -0x30556ef0c7774b67 ^ uRam000000018348c588) + uVar7
  ;
  uRam000000018348c8f8 = uRam000000018348c698 ^ uRam000000018348c588;
  uRam000000018348c8f0 = 0x6e6fd4b3;
  uVar7 = (~uRam000000018348c440 + 0x6e6fd4b4) *
          ((uRam000000018348c768 ^ 0xea4df796) +
          (ulonglong)((uint)uRam000000018348c768 & 0xea4df796) * 2);
  uVar7 = (uVar7 | uRam000000018348c8c8) + (uVar7 & uRam000000018348c8c8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018348c740 =
       func_0x0001909f9f00((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam000000018348c710 = uRam000000018348c740 << 0x3b | uRam000000018348c740 >> 5;
  uVar7 = uRam000000018348c710 - (uRam000000018348c710 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uRam000000018348c710 =
       ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uRam000000018348c710
  ;
  uRam000000018348c778 = uRam000000018348c778 ^ uRam000000018348c710 ^ 0xf9b655fb4a8ca51f;
  uRam000000018348c3e8 =
       (uRam000000018348c3e8 * -0x4ddfa1a8f1e9f61d ^ uRam000000018348c778) + uRam000000018348c710;
  uRam000000018348c788 = uRam000000018348c3e8 ^ uRam000000018348c778;
  uRam000000018348c2e0 = 0;
  uRam000000018348c750 = func_0x0001909f9f00(uRam000000018348c1c8 + 0x7007bd4ffe1ff ^ 0x20);
  uRam000000018348c768 = uRam000000018348c4d8 ^ uRam000000018348c388 ^ 0x3c7a;
  uRam000000018348c858 =
       (uRam000000018348c858 * -0x1a61fda563b9e2dd ^ 0x4cfca57f559e7307) + uRam000000018348c388;
  uRam000000018348c6b8 = uRam000000018348c858 ^ 0x4cfca57f559e7307;
  uRam000000018348c828 = 0x3c7a;
  uVar7 = (uRam000000018348c8e0 ^ _UNK_182ddb240) + uRam000000018348c270 + 0xbbdbde9a;
  uVar11 = (uRam000000018348c270 ^ _UNK_182ddb248) + uRam000000018348c8e0 + 0xffffffff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c8e0 ^ _UNK_182ddb240;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018348c270 ^ _UNK_182ddb248;
  uRam000000018348c388 = 0x4cfca57f559e7307;
  uRam000000018348c478 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018348c8e0 + 0xffffffff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c270 + 0xbbdbde9a));
  uRam000000018348c330 =
       (uRam000000018348c330 ^ uRam000000018348c478 ^ 0x3ff9fdbefffffffe) + 0xc0060240 ^
       0x8714681b45cbf969;
  uRam000000018348c3d8 =
       (uRam000000018348c3d8 * 0x39268a7357ad64db ^ uRam000000018348c330) +
       (uRam000000018348c478 ^ 0x3ff9fdbefffffffe);
  uRam000000018348c6d8 = uRam000000018348c3d8 ^ uRam000000018348c330;
  uRam000000018348c200 = 0xc0060240;
  uVar7 = (uRam000000018348c8c8 ^ _UNK_182ddb250) + uRam000000018348c228 + 0xbbdbde9a;
  uVar11 = (uRam000000018348c228 ^ _UNK_182ddb258) + uRam000000018348c8c8 + 0xc0060240;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c8c8 ^ _UNK_182ddb250;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018348c228 ^ _UNK_182ddb258;
  uRam000000018348c318 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018348c8c8 + 0xc0060240) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c228 + 0xbbdbde9a));
  uRam000000018348c758 =
       uRam000000018348c758 ^ uRam000000018348c230 & 0x3ffffffff ^ 0x9af12e8561ab0292;
  uRam000000018348c8c0 =
       (uRam000000018348c8c0 * -0x7ebea88c99d11373 ^ uRam000000018348c758) +
       (uRam000000018348c230 & 0x3ffffffff);
  uRam000000018348c5f8 = uRam000000018348c8c0 ^ uRam000000018348c758;
  uRam000000018348c650 = 0;
  uVar7 = (uRam000000018348c590 ^ 0x84221f5f) + uRam000000018348c7c0 + 0x84221f5f;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c590 ^ 0x84221f5f;
  uVar11 = ((uRam000000018348c7c0 + uRam000000018348c590) * 0x2000 |
           uRam000000018348c7c0 + uRam000000018348c590 >> 0x33) ^ uRam000000018348c7c0;
  uRam000000018348c878 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - uRam000000018348c590 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c7c0 + 0x84221f5f));
  uVar7 = uRam000000018348c878 - (uRam000000018348c878 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018348c878;
  uRam000000018348c190 = uRam000000018348c870 ^ uVar7 ^ 0x3c7a;
  uRam000000018348c198 = (uRam000000018348c198 ^ uVar7) + 0x3c7a ^ 0xd444629c7299368b;
  uRam000000018348c6f8 = (uRam000000018348c6f8 * 0x38dfb91216cb1719 ^ uRam000000018348c198) + uVar7;
  uRam000000018348c4f8 = uRam000000018348c6f8 ^ uRam000000018348c198;
  uRam000000018348c518 = 0x3c7a;
  uVar7 = (uRam000000018348c1c8 ^ _UNK_182ddb260) + uRam000000018348c3c8 + 0x9ad3fab2;
  uVar11 = (uRam000000018348c3c8 ^ _UNK_182ddb268) + uRam000000018348c1c8 + 0x1ef1d997;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c1c8 ^ _UNK_182ddb260;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam000000018348c3c8 ^ _UNK_182ddb268;
  uRam000000018348c3b8 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam000000018348c1c8 + 0x1ef1d997) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c3c8 + 0x9ad3fab2));
  uRam000000018348c258 =
       uRam000000018348c258 ^ uRam000000018348c3b8 ^ 0x1ef1d997 ^ 0x9f71ed25506b765a;
  uRam000000018348c338 =
       (uRam000000018348c338 * 0x4ceae36f1b64b77 ^ uRam000000018348c258) +
       (uRam000000018348c3b8 ^ 0x1ef1d997);
  uRam000000018348c248 = uRam000000018348c338 ^ uRam000000018348c258;
  uRam000000018348c180 = 0;
  uVar7 = (uRam000000018348c4e8 ^ 0x84221f5f) + uRam000000018348c468 + 0x84221f5f;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018348c4e8 ^ 0x84221f5f;
  uVar11 = ((uRam000000018348c468 + uRam000000018348c4e8) * 0x2000 |
           uRam000000018348c468 + uRam000000018348c4e8 >> 0x33) ^ uRam000000018348c468;
  uRam000000018348c6e8 =
       func_0x0001909f9f00((uVar11 << 0x1d | uVar11 >> 0x23) - uRam000000018348c4e8 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018348c468 + 0x84221f5f));
  uVar7 = uRam000000018348c6e8 ^ 0x3c7a;
  uRam000000018348c6b0 = uRam000000018348c670 ^ uVar7 ^ 0x3c7a;
  uRam000000018348c6a0 = (uRam000000018348c6a0 ^ uVar7) + 0x3c7a ^ 0xfdddfef553099067;
  uRam000000018348c1c8 = (uRam000000018348c1c8 * -0x2fedd06b9df715a3 ^ uRam000000018348c6a0) + uVar7
  ;
  uRam000000018348c140 = uRam000000018348c1c8 ^ uRam000000018348c6a0;
  auVar5._8_8_ = _UNK_182ddb278;
  auVar5._0_8_ = uVar9 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _UNK_182ddb280,_UNK_1800170c0);
  uRam000000018348c888 = 0x3c7a;
  uVar11 = auVar6._8_8_ + auVar6._0_8_;
  uVar7 = uVar11 + uRam000000018348c858;
  if (auVar6._4_4_ < 0) {
    uVar7 = uRam000000018348c278 ^ uVar11;
  }
  uRam000000018348c528 = func_0x0001909f9f00(SUB161(auVar5 ^ _UNK_182ddb280,5) ^ uVar7);
  uRam000000018348c2e0 = uVar9 ^ 0x3c7a;
  uRam000000018348c248 =
       (uRam000000018348c248 ^ uRam000000018348c528) + uRam000000018348c2e0 ^ 0x9dea396e2ca3c172;
  uRam000000018348c3c0 =
       (uRam000000018348c3c0 * -0x5a609d935abea517 ^ uRam000000018348c248) + uRam000000018348c528;
  uRam000000018348c630 = uRam000000018348c3c0 ^ uRam000000018348c248;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x23a5,0x79);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001909f548c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dd9848 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1909f9f90, runtime 6ffff8609f90) =====

void FUN_1909f9f90(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001909f9fcc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ddb3b0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/p; dH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1909fae80, runtime 6ffff860ae80) =====

void FUN_1909fae80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001909faefd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ddb8f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dI (IJ)I (handler @ image 1909fd940, runtime 6ffff860d940) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1909fd940(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uRam000000018348cea8 = func_0x000190a085b0(uRam000000018348cd78 + 0x17ca6dd8cc37b28 ^ 0xc1);
  uRam000000018348ceb0 =
       (uRam000000018348ceb0 ^ uRam000000018348cea8 & 0xffffffffff000000) + 0xe9f63daffeafe6de ^
       0x7df973248984dc5a;
  uRam000000018348cc50 =
       (uRam000000018348cc50 * -0x62f9c7e78ea74971 ^ uRam000000018348ceb0) +
       (uRam000000018348cea8 & 0xffffffffff000000);
  uRam000000018348cb20 = uRam000000018348cc50 ^ uRam000000018348ceb0;
  uRam000000018348cbb0 = 0xe9f63daffeafe6de;
  uVar8 = (uRam000000018348cd10 ^ _UNK_182dde650) + uRam000000018348cb50 + 0x2c30a47a6a17fdba;
  uVar9 = (uRam000000018348cb50 ^ _UNK_182dde658) + uRam000000018348cd10 + 0xdb08b8bf7a4339b7;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018348cd10 ^ _UNK_182dde650;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348cb50 ^ _UNK_182dde658;
  uRam000000018348ce70 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348cd10 + 0xdb08b8bf7a4339b7) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018348cb50 + 0x2c30a47a6a17fdba));
  uVar8 = (uRam000000018348ce70 & 0xffffffffffffff80) -
          (uRam000000018348ce70 >> 1 & 0x5555555555555540);
  uVar8 = (uVar8 & 0x3333333333333300) + (uVar8 >> 2 & 0x3333333333333330);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f03) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018348ce70 & 0xffffffffffffff80;
  uRam000000018348d020 = (uRam000000018348d020 ^ uVar8) + 0xf7381cc59476e728 ^ 0x740c365b7af29f32;
  uRam000000018348cb60 = (uRam000000018348cb60 * 0x12e35474373d90ed ^ uRam000000018348d020) + uVar8;
  uRam000000018348ce28 = uRam000000018348cb60 ^ uRam000000018348d020;
  uRam000000018348ca18 = 0xf7381cc59476e728;
  uRam000000018348cbc8 = func_0x000190a085b0(uRam000000018348c908 ^ 0x7aee780f961bc1e0);
  uVar8 = (uRam000000018348cbc8 ^ 0x9598249d94600000) & 0xfffffffffff80000;
  uRam000000018348ce38 = uRam000000018348cfc0 ^ uVar8 ^ 0x9598249d9465eb3f;
  uRam000000018348cef0 = (uRam000000018348cef0 ^ uVar8) + 0x9598249d9465eb3f ^ 0xcb8ca41803b30dd5;
  uRam000000018348cfb8 = (uRam000000018348cfb8 * 0x445607183684f8ad ^ uRam000000018348cef0) + uVar8;
  uRam000000018348cda8 = uRam000000018348cfb8 ^ uRam000000018348cef0;
  uRam000000018348cdf0 = 0x9598249d9465eb3f;
  uVar8 = (uRam000000018348cb00 ^ _UNK_182dde660) + uRam000000018348d088 + 0x84222325;
  uVar9 = (uRam000000018348d088 ^ _UNK_182dde668) + uRam000000018348cb00 + 0x8ad9e26b6ed14eed;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018348cb00 ^ _UNK_182dde660;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348d088 ^ _UNK_182dde668;
  uRam000000018348cd70 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348cb00 + 0x8ad9e26b6ed14eed) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018348d088 + 0x84222325));
  uRam000000018348cb18 =
       (uRam000000018348cb18 ^ uRam000000018348cd70 ^ 0x8ad9e26b6ed14eed) + 0x75261d94912eb113 ^
       0x681d6e811826c4bb;
  uRam000000018348cc28 =
       (uRam000000018348cc28 * -0x1cf7f07b6e2876b ^ uRam000000018348cb18) +
       (uRam000000018348cd70 ^ 0x8ad9e26b6ed14eed);
  uRam000000018348cf30 = uRam000000018348cc28 ^ uRam000000018348cb18;
  uRam000000018348c960 = 0x75261d94912eb113;
  uVar8 = (uRam000000018348cc10 ^ _UNK_182dde670) + uRam000000018348d0f8 + 0x84225cda;
  uVar9 = (uRam000000018348d0f8 ^ _UNK_182dde678) + uRam000000018348cc10 + 0x8ad9e26b6ed14eed;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018348cc10 ^ _UNK_182dde670;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348d0f8 ^ _UNK_182dde678;
  uRam000000018348cf90 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348cc10 + 0x8ad9e26b6ed14eed) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018348d0f8 + 0x84225cda));
  uVar9 = uRam000000018348cf90 ^ 0x665bd4fd38a53113;
  uVar8 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (ulonglong)
          (~((uint)uVar9 ^
            (uint)((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7)) &
          0x7fff);
  uRam000000018348cb80 = uRam000000018348cad0 ^ uVar8 ^ 0x8ad9e26b6ed1ceec;
  uRam000000018348cfa0 = (uRam000000018348cfa0 ^ uVar8) + 0x8ad9e26b6ed1ceec ^ 0xe30eaf7c71651ea7;
  uRam000000018348cc38 = (uRam000000018348cc38 * -0x20f5b565a8552e15 ^ uRam000000018348cfa0) + uVar8
  ;
  uRam000000018348cd28 = uRam000000018348cc38 ^ uRam000000018348cfa0;
  uRam000000018348cd78 = 0x8ad9e26b6ed1ceec;
  uVar8 = (uRam000000018348d040 ^ _UNK_182dde680) + uRam000000018348cf28 + 0x84225cda;
  uVar9 = (uRam000000018348cf28 ^ _UNK_182dde688) + uRam000000018348d040 + 0xfdd9014168161540;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018348d040 ^ _UNK_182dde680;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348cf28 ^ _UNK_182dde688;
  uRam000000018348c958 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348d040 + 0xfdd9014168161540) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018348cf28 + 0x84225cda));
  uVar8 = uRam000000018348c958 ^ 0xfdd9014168161540;
  uRam000000018348cd88 = uRam000000018348c9d0 ^ uVar8 ^ 0xfdd901416816953f;
  uRam000000018348cee8 = (uRam000000018348cee8 ^ uVar8) + 0xfdd901416816953f ^ 0xa5d1534468333124;
  uRam000000018348d0b8 = (uRam000000018348d0b8 * -0x42e951ddf48c0a87 ^ uRam000000018348cee8) + uVar8
  ;
  uRam000000018348cb00 = uRam000000018348d0b8 ^ uRam000000018348cee8;
  uRam000000018348d090 = 0xfdd901416816953f;
  uRam000000018348d0a8 = func_0x000190a085b0(uRam000000018348cbc0 ^ 0x8cd4ad05b5bd523a);
  uVar9 = _UNK_182dde698;
  uVar8 = _UNK_182dde690;
  uVar3 = (~(~uRam000000018348d0a8 << 0x35 | ~uRam000000018348d0a8 >> 0xb) & 0xfdd901416816953f) *
          0x502bd0089f4751e7;
  uRam000000018348cc38 = uRam000000018348cf48 ^ uVar3 ^ 0x7fff;
  uRam000000018348cdd0 = (uRam000000018348cdd0 ^ uVar3) + 0x7fff ^ 0x9ef8a6588a9c441;
  uRam000000018348ccf8 = (uRam000000018348ccf8 * -0x11693699a852c551 ^ uRam000000018348cdd0) + uVar3
  ;
  uRam000000018348d080 = uRam000000018348ccf8 ^ uRam000000018348cdd0;
  uRam000000018348ca38 = 0x7fff;
  uVar3 = (uRam000000018348cce8 ^ _UNK_182dde690) + uRam000000018348d018 + 0xe9f63daf7a8dc5fb;
  uVar10 = (uRam000000018348d018 ^ _UNK_182dde698) + uRam000000018348cce8 + 0xf7381cc59476e728;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018348cce8 ^ _UNK_182dde690;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018348d018 ^ _UNK_182dde698;
  uRam000000018348cd78 =
       func_0x000190a085b0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018348cce8 + 0xf7381cc59476e728) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018348d018 + 0xe9f63daf7a8dc5fb));
  uVar3 = uRam000000018348cd78 << 0x31 | uRam000000018348cd78 >> 0xf;
  uVar10 = uVar3 >> 1 | uVar3;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  uRam000000018348ca10 = (uRam000000018348ca10 ^ uVar3) + 0x1ece216a6ad901f6 ^ 0xb109e4540900b2ce;
  uRam000000018348d0a0 = (uRam000000018348d0a0 * -0x1ef0b334d2fe2dfb ^ uRam000000018348ca10) + uVar3
  ;
  uRam000000018348cde0 = uRam000000018348d0a0 ^ uRam000000018348ca10;
  uRam000000018348cc40 = 0x1ece216a6ad901f6;
  uVar3 = (uRam000000018348cc38 ^ uVar8) + uRam000000018348cfd8 + 0xe9f63daf7a8dc5fb;
  uVar10 = (uRam000000018348cfd8 ^ uVar9) + uRam000000018348cc38 + 0xf7381cc59476e728;
  uVar8 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018348cc38 ^ uVar8;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018348cfd8 ^ uVar9;
  uRam000000018348cb68 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348cc38 + 0xf7381cc59476e728) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018348cfd8 + 0xe9f63daf7a8dc5fb));
  uVar8 = uRam000000018348cb68 << 0x1a | uRam000000018348cb68 >> 0x26;
  uRam000000018348ccb0 = (uRam000000018348ccb0 ^ uVar8) + 0xe1301c859426e608 ^ 0x5eab868131f13452;
  uRam000000018348cb58 = (uRam000000018348cb58 * 0x55c3972e34e36227 ^ uRam000000018348ccb0) + uVar8;
  uRam000000018348ca58 = uRam000000018348cb58 ^ uRam000000018348ccb0;
  uRam000000018348cc08 = 0xe1301c859426e608;
  uRam000000018348d048 = func_0x000190a085b0(uRam000000018348cd98 ^ 0x605292c6bd1792d8);
  uVar8 = uRam000000018348d048 ^ 0x1ece216a6ad901f6;
  uRam000000018348cac0 = uRam000000018348cc98 ^ uVar8 ^ 0xe12e5a759326ce06;
  uRam000000018348ca28 = (uRam000000018348ca28 ^ uVar8) + 0xe12e5a759326ce06 ^ 0x71bcf0c4efdbe146;
  uRam000000018348c9d8 = (uRam000000018348c9d8 * -0x5c56e36119b332dd ^ uRam000000018348ca28) + uVar8
  ;
  uRam000000018348cb98 = uRam000000018348c9d8 ^ uRam000000018348ca28;
  uRam000000018348cd78 = 0xe12e5a759326ce06;
  uVar8 = (uRam000000018348cd30 ^ _UNK_182dde6a0) + uRam000000018348ca18 + 0xe12e5a751704ed23;
  uVar9 = (uRam000000018348ca18 ^ _UNK_182dde6a8) + uRam000000018348cd30 + 0xe12e5a759326ce06;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018348cd30 ^ _UNK_182dde6a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348ca18 ^ _UNK_182dde6a8;
  uRam000000018348d020 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348cd30 + 0xe12e5a759326ce06) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018348ca18 + 0xe12e5a751704ed23));
  uVar8 = uRam000000018348d020 << 0x18 ^ 0x759326ce06000000;
  uRam000000018348ccb8 = uVar8 >> 0x18;
  uVar8 = uVar8 >> 0x19 | uRam000000018348ccb8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar9 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar9 >> 0x10 | uVar9;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uRam000000018348ccb8 =
       (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
       uRam000000018348ccb8;
  uRam000000018348ca40 = uRam000000018348ca40 ^ uRam000000018348ccb8 ^ 0x5af61a3a65f5f13f;
  uRam000000018348d0c0 =
       (uRam000000018348d0c0 * -0x7ad2a28404dc4a6b ^ uRam000000018348ca40) + uRam000000018348ccb8;
  uRam000000018348cf88 = uRam000000018348d0c0 ^ uRam000000018348ca40;
  uRam000000018348cfd8 = 0;
  uRam000000018348ccf0 = func_0x000190a085b0(uRam000000018348ce58 ^ 0x54008426002166);
  uRam000000018348c928 = uRam000000018348cf28 ^ uRam000000018348caa8 ^ 0x7fff;
  uRam000000018348cbd8 = (uRam000000018348cbd8 ^ uRam000000018348caa8) + 0x7fff ^ 0x9d7da3a3f40dc360
  ;
  uRam000000018348cf68 =
       (uRam000000018348cf68 * -0x748d8f23011240b1 ^ uRam000000018348cbd8) + uRam000000018348caa8;
  uRam000000018348ce68 = uRam000000018348cf68 ^ uRam000000018348cbd8;
  uRam000000018348ccc0 = 0x7fff;
  uVar8 = (uRam000000018348cfc0 ^ _UNK_182dde6b0) + uRam000000018348cce8 + 0xe9f63daf7a8dc5fb;
  uVar9 = (uRam000000018348cce8 ^ _UNK_182dde6b8) + uRam000000018348cfc0 + 0x1609c25001501921;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018348cfc0 ^ _UNK_182dde6b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348cce8 ^ _UNK_182dde6b8;
  uRam000000018348cc98 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018348cfc0 + 0x1609c25001501921) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018348cce8 + 0xe9f63daf7a8dc5fb));
  uRam000000018348ca40 = uRam000000018348ca40 ^ uRam000000018348cd70 ^ 0x1ed9cbde4a94218c;
  uRam000000018348cdc8 =
       (uRam000000018348cdc8 * 0xc70061f31de7693 ^ uRam000000018348ca40) + uRam000000018348cd70;
  uRam000000018348cc88 = uRam000000018348cdc8 ^ uRam000000018348ca40;
  uRam000000018348ccb0 = 0;
  uVar8 = ((uRam000000018348d0a0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018348d0a0 & 0x84225cda) * 2) * -lRam000000018348ca48;
  uVar8 = (uVar8 | uRam000000018348cb48) + (uVar8 & uRam000000018348cb48);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348ce78 =
       func_0x000190a085b0((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uVar8 = uRam000000018348ce78 >> 1 | uRam000000018348ce78;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = 0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018348ce78;
  uRam000000018348cae8 = uRam000000018348ca70 ^ uVar8 ^ 0x7fff;
  uRam000000018348ca00 = (uRam000000018348ca00 ^ uVar8) + 0x7fff ^ 0x6faefaf76f58cff3;
  uRam000000018348c9a0 = (uRam000000018348c9a0 * 0x276aa34aed8e9627 ^ uRam000000018348ca00) + uVar8;
  uRam000000018348d010 = uRam000000018348c9a0 ^ uRam000000018348ca00;
  uRam000000018348cfd8 = 0x7fff;
  uRam000000018348cf28 = func_0x000190a085b0(uRam000000018348cde8 ^ 0x4c008335ffe14d);
  uVar8 = (uRam000000018348cf28 ^ 0x7fff) << 0x35 |
          ((uRam000000018348cf28 ^ 0x7fff) & 0x7fffffffffffffff) >> 0xb;
  uRam000000018348ca78 = uRam000000018348c980 ^ uVar8 ^ 0x7fff;
  uRam000000018348cfe8 = (uRam000000018348cfe8 ^ uVar8) + 0x7fff ^ 0x48ebf692d2c56b7d;
  uRam000000018348c9b0 = (uRam000000018348c9b0 * -0xf01c24fbf1ed403 ^ uRam000000018348cfe8) + uVar8;
  uRam000000018348cf50 = uRam000000018348c9b0 ^ uRam000000018348cfe8;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_182dde6c0,_UNK_1800170c0);
  uRam000000018348cbd8 = 0x7fff;
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar9 + lRam000000018348c940;
  if (auVar7._4_4_ < 0) {
    uVar8 = uRam000000018348c9f0 ^ uVar9;
  }
  uRam000000018348ca00 = func_0x000190a085b0(SUB161(auVar6 ^ _UNK_182dde6c0,5) ^ uVar8);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018348cef8 = (ulonglong)uVar2;
  uRam000000018348cba0 =
       (uRam000000018348cba0 ^ param_4 ^ uRam000000018348ca00) + uRam000000018348cef8 ^
       0x1693972a8a41034f;
  uRam000000018348cba8 =
       (uRam000000018348cba8 * -0x46bc24e1c0b8973 ^ uRam000000018348cba0) +
       (param_4 ^ uRam000000018348ca00);
  uRam000000018348cc18 = uRam000000018348cba8 ^ uRam000000018348cba0;
  uVar8 = uRam000000018348cef8 ^ 0x84222325 ^ uRam000000018348cbc8;
  uVar9 = param_3 ^ uRam000000018348cac0;
  lVar5 = (uRam000000018348cef8 ^ 0x84222325) + uRam000000018348cac0;
  lVar4 = uRam000000018348cbc8 + param_3;
  uVar3 = uVar8 + lVar5;
  uVar10 = uVar9 + lVar4;
  uVar8 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar8;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar9;
  uRam000000018348ce78 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) - lVar4 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar5);
  uVar8 = uRam000000018348ce78 >> 1 | uRam000000018348ce78;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = 0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018348ce78;
  uRam000000018348d020 = (ulonglong)(uVar2 ^ param_3);
  uRam000000018348d018 = (uRam000000018348ca40 ^ uVar8) + uRam000000018348d020 ^ 0x29a766d6019c8462;
  uRam000000018348ca40 = (uRam000000018348ca40 * 0x3b1f25c3f033ad8f ^ uRam000000018348d018) + uVar8;
  uRam000000018348d018 = uRam000000018348ca40 ^ uRam000000018348d018;
  uRam000000018348cd40 = func_0x000190a085b0(uRam000000018348c918 ^ 0xff52ffc713ff5cc9);
  uVar2 = ~(uint)uRam000000018348cc10 & 0x18576401;
  uVar8 = (ulonglong)uVar2 - (ulonglong)(~(uint)uRam000000018348cc10 >> 1 & 0x4011000);
  uVar8 = (uVar8 & 0x3333333333333001) + (uVar8 >> 2 & 0x3333333333333100);
  uVar8 = (ulonglong)
          (uVar2 + (uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f01) * 0x101010101010101 >>
                               0x38) * 4);
  uRam000000018348c908 = uRam000000018348c968 ^ uVar8 ^ 0x100004e59;
  uRam000000018348cdb0 = (uRam000000018348cdb0 ^ uVar8) + 0x100004e59 ^ 0x20bc60b08e142641;
  uRam000000018348c918 = (uRam000000018348c918 * -0x2ab503912c95619b ^ uRam000000018348cdb0) + uVar8
  ;
  uRam000000018348cd30 = uRam000000018348c918 ^ uRam000000018348cdb0;
  uRam000000018348cb20 = 0x4e59;
  uVar8 = (~uRam000000018348cf80 + 0x4f5c0794) *
          ((uRam000000018348ca10 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018348ca10 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018348cb08) + (uVar8 & uRam000000018348cb08);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348cfb8 =
       func_0x000190a085b0((uVar8 | 0xcb7e24b6) + (ulonglong)((uint)uVar8 & 0xcb7e24b6));
  uRam000000018348ce78 =
       (uRam000000018348ce78 ^ uRam000000018348cfb8) - 0x4f5c0793 ^ 0x776bea693e4b4dd8;
  uRam000000018348ce10 =
       (uRam000000018348ce10 * 0x1013718699819adf ^ uRam000000018348ce78) + uRam000000018348cfb8;
  uRam000000018348cd20 = uRam000000018348ce10 ^ uRam000000018348ce78;
  uRam000000018348cc58 = 0xb0a3f86d;
  uVar8 = (~uRam000000018348cc98 + 0x4f5c0794) *
          ((uRam000000018348c9a0 ^ 0x84226d7c) +
          (ulonglong)((uint)uRam000000018348c9a0 & 0x84226d7c) * 2);
  uVar8 = (uVar8 | uRam000000018348c928) + (uVar8 & uRam000000018348c928);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348ca68 =
       func_0x000190a085b0((uVar8 | 0xcb7e6aef) + (ulonglong)((uint)uVar8 & 0xcb7e6aef));
  uVar8 = (uRam000000018348ca68 ^ 0x1849a14d6c1b) << 0x35 |
          (uRam000000018348ca68 ^ 0x1849a14d6c1b) >> 0xb;
  uRam000000018348cb18 = uRam000000018348cae0 ^ uVar8 ^ 0x4f5c55ec;
  uRam000000018348ccb8 = (uRam000000018348ccb8 ^ uVar8) + 0x4f5c55ec ^ 0x439cca530920336;
  uRam000000018348ceb0 = (uRam000000018348ceb0 * 0x6dac26b66fa36f27 ^ uRam000000018348ccb8) + uVar8;
  uRam000000018348ce18 = uRam000000018348ceb0 ^ uRam000000018348ccb8;
  uRam000000018348cf20 = 0x4f5c55ec;
  uVar8 = (~uRam000000018348cf38 + 0x14c283d9) *
          ((uRam000000018348cb08 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018348cb08 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018348cc28) + (uVar8 & uRam000000018348cc28);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348cb70 =
       func_0x000190a085b0((uVar8 | 0x90e0a0fd) + (ulonglong)((uint)uVar8 & 0x90e0a0fd));
  uRam000000018348cb30 = uRam000000018348cff8 * -0x2309f83ff14ac1f9;
  uRam000000018348d088 = uRam000000018348d088 - 0x14c283d8 ^ 0x90b2ae566c6af136;
  uRam000000018348cff8 = uRam000000018348cb30 ^ uRam000000018348d088;
  uRam000000018348c900 = 0xeb3d7c28;
  uVar8 = (~uRam000000018348cdf0 + 0x14c283d9) *
          ((uRam000000018348ca70 ^ 0x84226d7c) +
          (ulonglong)((uint)uRam000000018348ca70 & 0x84226d7c) * 2);
  uVar8 = (uVar8 | uRam000000018348cca0) + (uVar8 & uRam000000018348cca0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348c9c8 =
       func_0x000190a085b0((uVar8 | 0x90e0eea4) + (ulonglong)((uint)uVar8 & 0x90e0eea4));
  uVar8 = (ulonglong)((uint)uRam000000018348c9c8 & 0x4e59);
  uRam000000018348cc70 = uRam000000018348c9b8 ^ uVar8 ^ 0x14c2d231;
  uRam000000018348cb38 = (uRam000000018348cb38 ^ uVar8) + 0x14c2d231 ^ 0xc7eefeee09ffbd0e;
  uRam000000018348cf40 = (uRam000000018348cf40 * -0x534c0540de1f478d ^ uRam000000018348cb38) + uVar8
  ;
  uRam000000018348ca90 = uRam000000018348cf40 ^ uRam000000018348cb38;
  uRam000000018348caa0 = 0x14c2d231;
  uVar8 = (~uRam000000018348d088 + 0xeb3d7c29) *
          ((uRam000000018348cd68 ^ 0x90e0f114) +
          (ulonglong)((uint)uRam000000018348cd68 & 0x90e0f114) * 2);
  uVar8 = (uVar8 | uRam000000018348cd68) + (uVar8 & uRam000000018348cd68);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348cf28 =
       func_0x000190a085b0((uVar8 | 0x7bdd8d3c) + (ulonglong)((uint)uVar8 & 0x7bdd8d3c));
  uVar8 = uRam000000018348cf28 * -0x3899ae08a7a6ff5 ^ 0xeb3d7c28;
  uRam000000018348cc38 = uRam000000018348c908 ^ uVar8 ^ 0x100004e59;
  uRam000000018348cf90 = (uRam000000018348cf90 ^ uVar8) + 0x100004e59 ^ 0xfc2713be034503b4;
  uRam000000018348ca50 = (uRam000000018348ca50 * -0x4f27f93464a9e849 ^ uRam000000018348cf90) + uVar8
  ;
  uRam000000018348cf08 = uRam000000018348ca50 ^ uRam000000018348cf90;
  uRam000000018348d0e8 = 0x4e59;
  uVar8 = (~uRam000000018348d010 + 0x6ad16803) *
          ((uRam000000018348c9a0 ^ 0x2bd9bc43) +
          (ulonglong)((uint)uRam000000018348c9a0 & 0x2bd9bc43) * 2);
  uVar8 = (uVar8 | uRam000000018348ccd8) + (uVar8 & uRam000000018348ccd8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348c930 =
       func_0x000190a085b0((uVar8 | 0x4108d441) + (ulonglong)((uint)uVar8 & 0x4108d441));
  uRam000000018348cd28 =
       (uRam000000018348cd28 ^ uRam000000018348c930 ^ 0x496e23ecf6feaecc) + 0x2ad10802 ^
       0xd8d417e3d58bc160;
  uRam000000018348cff8 =
       (uRam000000018348cff8 * -0x1454ecb4d2ab60a1 ^ uRam000000018348cd28) +
       (uRam000000018348c930 ^ 0x496e23ecf6feaecc);
  uRam000000018348ce88 = uRam000000018348cff8 ^ uRam000000018348cd28;
  uRam000000018348c9e8 = 0x2ad10802;
  uVar8 = (uRam000000018348cb98 ^ _UNK_182dde6d0) + uRam000000018348cb08 + 0x4108d441;
  uVar9 = (uRam000000018348cb08 ^ _UNK_182dde6d8) + uRam000000018348cb98 + 0x55a21004;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018348cb98 ^ _UNK_182dde6d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348cb08 ^ _UNK_182dde6d8;
  uRam000000018348cfb0 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018348cb98 + 0x55a21004) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018348cb08 + 0x4108d441));
  uVar8 = uRam000000018348cfb0 ^ 0x41f415aa856a1d90;
  uRam000000018348c968 = uRam000000018348cd40 ^ uVar8 ^ 0x11acd0768;
  uRam000000018348d090 = (uRam000000018348d090 ^ uVar8) + 0x11acd0768 ^ 0xa1ef82937af52060;
  uRam000000018348cbb8 = (uRam000000018348cbb8 * -0x5569abddf44b9eb ^ uRam000000018348d090) + uVar8;
  uRam000000018348c9c0 = uRam000000018348cbb8 ^ uRam000000018348d090;
  uRam000000018348cb78 = 0x1acd0768;
  uVar8 = (~uRam000000018348cb80 + 0x5004609a) *
          ((uRam000000018348cfb0 ^ 0x2bd9bc43) +
          (ulonglong)((uint)uRam000000018348cfb0 & 0x2bd9bc43) * 2);
  uVar8 = (uVar8 | uRam000000018348cea0) + (uVar8 & uRam000000018348cea0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348cfa0 =
       func_0x000190a085b0((uVar8 | 0x7bdddcda) + (ulonglong)((uint)uVar8 & 0x7bdddcda));
  uRam000000018348cce8 =
       uRam000000018348cce8 ^ uRam000000018348cfa0 & 0xfffffffffffc0000 ^ 0x687ab0fe577e28f3;
  uRam000000018348cf40 =
       (uRam000000018348cf40 * -0x6745dc64cde417db ^ uRam000000018348cce8) +
       (uRam000000018348cfa0 & 0xfffffffffffc0000);
  uRam000000018348caa0 = uRam000000018348cf40 ^ uRam000000018348cce8;
  uRam000000018348cf70 = 0;
  uVar8 = ((uRam000000018348cf38 ^ 0x84226d7c) +
          (ulonglong)((uint)uRam000000018348cf38 & 0x84226d7c) * 2) * -lRam000000018348c950;
  uVar8 = (uVar8 | uRam000000018348c938) + (uVar8 & uRam000000018348c938);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018348cd60 =
       func_0x000190a085b0((uVar8 | 0x84226d7c) + (ulonglong)((uint)uVar8 & 0x84226d7c));
  uVar8 = uRam000000018348cd60 & 0xffffffffffffffc0;
  uRam000000018348ca18 = uRam000000018348cb00 ^ uVar8 ^ 0x4e59;
  uRam000000018348ca90 = (uRam000000018348ca90 ^ uVar8) + 0x4e59 ^ 0x88518eaa9bbf4ca3;
  uRam000000018348c970 = (uRam000000018348c970 * -0x5e6e22070c1cd197 ^ uRam000000018348ca90) + uVar8
  ;
  uRam000000018348cfe8 = uRam000000018348c970 ^ uRam000000018348ca90;
  uRam000000018348cbb0 = 0x4e59;
  uVar8 = (uRam000000018348cd68 ^ _UNK_182dde6e0) + uRam000000018348ce28 + 0x2d583e03;
  uVar9 = (uRam000000018348ce28 ^ _UNK_182dde6e8) + uRam000000018348cd68 + 0xa97a1d26;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018348cd68 ^ _UNK_182dde6e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018348ce28 ^ _UNK_182dde6e8;
  uRam000000018348ca98 =
       func_0x000190a085b0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018348cd68 + 0xa97a1d26) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018348ce28 + 0x2d583e03));
  uRam000000018348cd08 = uRam000000018348cd08 ^ uRam000000018348cc00 ^ 0x300e69622db540de;
  uRam000000018348cf28 =
       (uRam000000018348cf28 * -0x7b415e4d85ef09 ^ uRam000000018348cd08) + uRam000000018348cc00;
  uRam000000018348cd00 = uRam000000018348cf28 ^ uRam000000018348cd08;
  uRam000000018348cc58 = 0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x23a5,0x79);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001909ff753 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ddc7f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 190a08640, runtime 6ffff8618640) =====

void FUN_190a08640(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000190a0868b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dde840 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/p; dK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 190a09650, runtime 6ffff8619650) =====

void FUN_190a09650(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190a096d9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ddee00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dk (DDLsixtwo/mA;)Z (handler @ image 190a3f920, runtime 6ffff864f920) =====

void FUN_190a3f920(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x23a5,0x79);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190a3fa1a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182de7610 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dl (DDLsixtwo/mA;)V (handler @ image 190a55ce0, runtime 6ffff8665ce0) =====

void FUN_190a55ce0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000190a55d23 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dee610 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/p; dm (III)Z (handler @ image 190a56250, runtime 6ffff8666250) =====

void FUN_190a56250(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x23a5,0x79);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190a56349 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dee880 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/p; dn ()F (handler @ image 190a6e120, runtime 6ffff867e120) =====

void FUN_190a6e120(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000190a6e145 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182df5a60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/p; dz (Lsixtwo/lC;FFF)V (handler @ image 1909c93c0, runtime 6ffff85d93c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1909c93c0(longlong *param_1)

{
  char cVar1;
  float in_stack_00000030;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(_DAT_1806ca0ec - (in_stack_00000030 + in_stack_00000030),
                *plRam000000018301ee50 + 0x1ca4,0x62);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001909c9472 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dd3e70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



