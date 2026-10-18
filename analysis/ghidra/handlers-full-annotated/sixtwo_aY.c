// ===== Lsixtwo/aY; Aa ([Ljava/lang/String;)V (handler @ image 18f68c8a0, runtime 6ffff729c8a0) =====

void FUN_18f68c8a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x631f,0x122);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f68c8ea did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182974118 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aY; Ab ()[Ljava/lang/String; (handler @ image 18f647270, runtime 6ffff7257270) =====

void FUN_18f647270(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x631f,0x122);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f6472b6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182966dd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aY; Ac (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18f647400, runtime 6ffff7257400) =====

undefined8 FUN_18f647400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/aY; Ad ([B)Ljava/lang/String; (handler @ image 18f647490, runtime 6ffff7257490) =====

void FUN_18f647490(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f647533 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182966ff0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aY; Ae (IJ)Ljava/lang/String; (handler @ image 18f6714f0, runtime 6ffff72814f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f6714f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

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
  
  uVar3 = (~uRam00000001834076f0 + 0xc719f49ecf5f0daa) *
          ((uRam00000001834075f8 ^ 0x6b636419a1824970) +
          (uRam00000001834075f8 & 0x6b636419a1824970) * 2);
  uVar3 = (uVar3 | uRam00000001834071f0) + (uVar3 & uRam00000001834071f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183407280 =
       func_0x00018f6784f0((uVar3 | 0xac7a90876edd44d9) + (uVar3 & 0xac7a90876edd44d9));
  uRam00000001834071d0 =
       (uRam00000001834071d0 ^ uRam0000000183407280) + 0xef7bf49fefff6ffd ^ 0x93306e8410890e3f;
  uRam0000000183407258 =
       (uRam0000000183407258 * -0x7c997d16d7d0b265 ^ uRam00000001834071d0) + uRam0000000183407280;
  uRam00000001834071c8 = uRam0000000183407258 ^ uRam00000001834071d0;
  uRam0000000183407528 = 0xef7bf49fefff6ffd;
  uVar3 = (~uRam0000000183407188 + 0x874634ab207be00a) *
          ((uRam00000001834072b0 ^ 0xb0d1661edfc17f5) +
          (uRam00000001834072b0 & 0xb0d1661edfc17f5) * 2);
  uVar3 = (uVar3 | uRam0000000183407190) + (uVar3 & uRam0000000183407190);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183407288 =
       func_0x00018f6784f0((uVar3 | 0x8c4b22cacd87f7fc) + (uVar3 & 0x8c4b22cacd87f7fc));
  uRam0000000183407400 =
       (uRam0000000183407400 ^ uRam0000000183407288 & 0x7fffffffffffffff) + 0x8c4b22ca49a5d4d9 ^
       0xf38ad3bd2bdfa70d;
  uRam00000001834072d0 =
       (uRam00000001834072d0 * -0xd99286bd48260bd ^ uRam0000000183407400) +
       (uRam0000000183407288 & 0x7fffffffffffffff);
  uRam0000000183407468 = uRam00000001834072d0 ^ uRam0000000183407400;
  uRam0000000183407470 = 0x8c4b22ca49a5d4d9;
  uVar3 = (uRam00000001834075c8 ^ _UNK_18296e130) + uRam00000001834076a0 + 0x84222325;
  uVar8 = (uRam00000001834076a0 ^ _UNK_18296e138) + uRam00000001834075c8 + 0xa058f800ac2eb2b1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001834075c8 ^ _UNK_18296e130;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001834076a0 ^ _UNK_18296e138;
  uRam0000000183407360 =
       func_0x00018f6784f0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001834075c8 + 0xa058f800ac2eb2b1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001834076a0 + 0x84222325));
  uRam0000000183407548 =
       (uRam0000000183407548 ^ uRam00000001834071a8) + 0x5fa707ff53d14d4f ^ 0xee407cb550613956;
  uRam0000000183407358 =
       (uRam0000000183407358 * -0x54dc29f5025445a5 ^ uRam0000000183407548) + uRam00000001834071a8;
  uRam00000001834074d0 = uRam0000000183407358 ^ uRam0000000183407548;
  uRam00000001834075f0 = 0x5fa707ff53d14d4f;
  uVar3 = (uRam0000000183407540 ^ _UNK_18296e140) + uRam00000001834076c8 + 0x84225cda;
  uVar8 = (uRam00000001834076c8 ^ _UNK_18296e148) + uRam0000000183407540 + 0xa058f800ac2eb2b1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183407540 ^ _UNK_18296e140;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001834076c8 ^ _UNK_18296e148;
  uRam0000000183407278 =
       func_0x00018f6784f0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183407540 + 0xa058f800ac2eb2b1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001834076c8 + 0x84225cda));
  uVar3 = uRam0000000183407278 ^ 0xdba75e16ad29cd4f;
  uRam0000000183407408 = uRam0000000183407120 ^ uVar3 ^ 0xa058f800ac2f32b0;
  uRam00000001834073a8 = (uRam00000001834073a8 ^ uVar3) + 0xa058f800ac2f32b0 ^ 0x7ce41560c4705678;
  uRam00000001834076f0 = (uRam00000001834076f0 * 0x1b4197720e1882d5 ^ uRam00000001834073a8) + uVar3;
  uRam00000001834072d0 = uRam00000001834076f0 ^ uRam00000001834073a8;
  uRam0000000183407638 = 0xa058f800ac2f32b0;
  uRam0000000183407150 = func_0x00018f6784f0(lRam0000000183407480 + 0x8eb6d823da13bec0U ^ 5);
  uVar3 = uRam0000000183407150 >> 1 | uRam0000000183407150;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam0000000183407150;
  uVar3 = uVar8 >> 1 | uVar8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar8;
  uVar3 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8;
  uRam0000000183407638 = (uRam0000000183407638 ^ uVar8) + 0x2027086c971c9700 ^ 0xe727143a7c19bce2;
  uRam0000000183407378 = (uRam0000000183407378 * 0x3a99f227ecf8bfdd ^ uRam0000000183407638) + uVar8;
  uRam0000000183407178 = uRam0000000183407378 ^ uRam0000000183407638;
  uRam00000001834074d0 = uRam00000001834072c0 ^ 0x2027086c971c9700;
  uRam00000001834075c8 = 0x2027086c971c9700;
  uVar3 = (~uRam0000000183407550 + 0x2027086c971c9701) *
          ((uRam00000001834075c0 ^ 0xdfd8f793ecc1cbda) +
          (uRam00000001834075c0 & 0x5fd8f793ecc1cbda) * 2);
  uVar3 = (uVar3 | uRam0000000183407578) + (uVar3 & uRam0000000183407578);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183407600 =
       func_0x00018f6784f0((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar3 = uRam0000000183407600 >> 1 | uRam0000000183407600;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam0000000183407600 ^ 0xdfd8f79368e3e8ff ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2;
  uRam0000000183407580 = uRam0000000183407228 ^ uVar3 ^ 0x7fff;
  uRam0000000183407118 = (uRam0000000183407118 ^ uVar3) + 0x7fff ^ 0xebfec5ea39a03049;
  uRam00000001834076f0 = (uRam00000001834076f0 * -0x578207e9e97093f5 ^ uRam0000000183407118) + uVar3
  ;
  uRam0000000183407238 = uRam00000001834076f0 ^ uRam0000000183407118;
  uRam0000000183407500 = 0x7fff;
  uRam00000001834073e8 = func_0x00018f6784f0(uRam0000000183407368 + 0xdbf865b1952c89ff ^ 0x68);
  uRam0000000183407538 =
       (uRam0000000183407538 ^ uRam00000001834073e8 ^ 0xa6536cd7bcda90) + 0xff59ac9328432570 ^
       0x19d632d43b5bb2f6;
  uRam00000001834071a0 =
       (uRam00000001834071a0 * 0x1b5b58db7a45d243 ^ uRam0000000183407538) +
       (uRam00000001834073e8 ^ 0xa6536cd7bcda90);
  uRam0000000183407368 = uRam00000001834071a0 ^ uRam0000000183407538;
  uRam0000000183407540 = 0xff59ac9328432570;
  uVar3 = (~uRam00000001834074a8 + 0xa6536cd7bcda91) *
          ((uRam0000000183407470 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183407470 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam00000001834072b0) + (uVar3 & uRam00000001834072b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834073c0 =
       func_0x00018f6784f0((uVar3 | 0xa6536c539e864a) + (uVar3 & 0xa6536c539e864a));
  uVar3 = (ulonglong)(~(uint)uRam00000001834073c0 & 0x7fff);
  uRam00000001834076b0 = uRam0000000183407308 ^ uVar3 ^ 0xa6536cd7bd5a8f;
  uRam0000000183407318 = (uRam0000000183407318 ^ uVar3) + 0xa6536cd7bd5a8f ^ 0xbb50a46e359c4bc8;
  uRam0000000183407188 = (uRam0000000183407188 * 0x75d37e406c10075d ^ uRam0000000183407318) + uVar3;
  uRam00000001834075f8 = uRam0000000183407188 ^ uRam0000000183407318;
  uRam0000000183407638 = uRam00000001834072a8 ^ 0xa6536cd7bd5a8f;
  uRam00000001834071a0 = 0xa6536cd7bd5a8f;
  uRam0000000183407688 = func_0x00018f6784f0(uRam00000001834072e0 + 0x9d34590b3981433c ^ 0x40);
  uVar3 = (uRam0000000183407688 & 0x7fffffffffffffff) >> 1 |
          uRam0000000183407688 & 0x7fffffffffffffff;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183407688 & 0x7fffffffffffffff;
  uRam00000001834075a8 = uRam0000000183407240 ^ uVar3 ^ 0x7fff;
  uRam00000001834071f0 = (uRam00000001834071f0 ^ uVar3) + 0x7fff ^ 0xf76e8359c351cd34;
  uRam00000001834076e0 = (uRam00000001834076e0 * -0x1730c0cad76fdf2d ^ uRam00000001834071f0) + uVar3
  ;
  uRam0000000183407690 = uRam00000001834076e0 ^ uRam00000001834071f0;
  uRam0000000183407578 = uRam0000000183407298 ^ 0x7fff;
  uRam00000001834075d0 = 0x7fff;
  uRam0000000183407548 = func_0x00018f6784f0(lRam0000000183407130 + 0xcc68101dfe563820U ^ 0x36);
  uVar3 = ((uRam0000000183407548 & 0xffffffff) * (ulonglong)_UNK_18296e160 +
           (uRam0000000183407548 >> 0x20) * (_UNK_18296e150 & 0xffffffff) << 0x20) +
          (uRam0000000183407548 & 0xffffffff) * (_UNK_18296e150 & 0xffffffff) & 0x7fffffffffffffff;
  uRam0000000183407148 = uRam0000000183407578 ^ uVar3 ^ 0x7bc7176a39a544d6;
  uRam0000000183407560 = (uRam0000000183407560 ^ uVar3) + 0x7bc7176a39a544d6 ^ 0x5c3df8016e8051c6;
  uRam00000001834076b0 = (uRam00000001834076b0 * 0x5e4572c11753d39 ^ uRam0000000183407560) + uVar3;
  uRam00000001834072d0 = uRam00000001834076b0 ^ uRam0000000183407560;
  uRam00000001834073e8 = 0x7bc7176a39a544d6;
  uVar3 = (~uRam0000000183407610 + 0x8c4b22ca49a5d4da) *
          ((uRam0000000183407450 ^ 0xef7bf49f6bdd4cd8) +
          (uRam0000000183407450 & 0x6f7bf49f6bdd4cd8) * 2);
  uVar3 = (uVar3 | uRam0000000183407638) + (uVar3 & uRam0000000183407638);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183407640 =
       func_0x00018f6784f0((uVar3 | 0x6330d65522789801) + (uVar3 & 0x6330d65522789801));
  uRam0000000183407440 =
       (uRam0000000183407440 ^ uRam0000000183407640 ^ 0xe8f26e4c02f1a5ac) + 0x6330d655a65abb24 ^
       0xd1d3d402309cf345;
  uRam00000001834071d0 =
       (uRam00000001834071d0 * -0x20f57f5ceb669fdd ^ uRam0000000183407440) +
       (uRam0000000183407640 ^ 0xe8f26e4c02f1a5ac);
  uRam00000001834072c0 = uRam00000001834071d0 ^ uRam0000000183407440;
  uRam00000001834076a8 = 0x6330d655a65abb24;
  uRam00000001834073d0 = func_0x00018f6784f0(lRam0000000183407488 + 0xad77f01e004e3822U ^ 0x3a);
  uVar3 = uRam00000001834073d0 >> 1 | uRam00000001834073d0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001834073d0;
  uVar3 = uVar3 << 0x2a | uVar3 >> 0x16;
  uRam0000000183407190 = (uRam0000000183407190 ^ uVar3) + 0x8c4b208a49a544d9 ^ 0xa9d9c7b041b707ae;
  uRam0000000183407448 = (uRam0000000183407448 * -0x7ac49eae48648f17 ^ uRam0000000183407190) + uVar3
  ;
  uRam00000001834072b8 = uRam0000000183407448 ^ uRam0000000183407190;
  uRam0000000183407410 = 0x8c4b208a49a544d9;
  uVar3 = ((uRam0000000183407360 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183407360 & 0x84225cda) * 2) * -uRam0000000183407690;
  uVar3 = (uVar3 | uRam00000001834073e8) + (uVar3 & uRam00000001834073e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834072f0 =
       func_0x00018f6784f0((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = uRam00000001834072f0 & 0xffffffffff;
  uRam0000000183407220 = uRam00000001834073e0 ^ uVar3 ^ 0x7fff;
  uRam0000000183407428 = (uRam0000000183407428 ^ uVar3) + 0x7fff ^ 0x38545dd6c1b56e6e;
  uRam00000001834071a8 = (uRam00000001834071a8 * 0x2805832d17a955ff ^ uRam0000000183407428) + uVar3;
  uRam00000001834074c8 = uRam00000001834071a8 ^ uRam0000000183407428;
  lRam00000001834076f8 = 0x7fff;
  uVar3 = (uRam0000000183407548 ^ _UNK_18296e170) + uRam0000000183407168 + 0xef7bf49f6bdd4cd8;
  uVar8 = (uRam0000000183407168 ^ _UNK_18296e178) + (uRam0000000183407548 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183407548 ^ _UNK_18296e170;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183407168 ^ _UNK_18296e178;
  uRam00000001834071b0 =
       func_0x00018f6784f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183407548 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183407168 + 0xef7bf49f6bdd4cd8));
  uVar3 = (uRam00000001834076b8 & 0x7ffffffffffffff) -
          (uRam00000001834076b8 >> 1 & 0x155555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam00000001834076b8 & 0x7ffffffffffffff;
  uRam00000001834076f0 = (uRam00000001834076f0 ^ uVar3) + 0x10840b6010009002 ^ 0x7a40f8a4c6f3f81f;
  uRam0000000183407110 = (uRam0000000183407110 * -0x544c446d548318db ^ uRam00000001834076f0) + uVar3
  ;
  uRam0000000183407398 = uRam0000000183407110 ^ uRam00000001834076f0;
  uRam0000000183407440 = 0x10840b6010009002;
  uRam0000000183407268 = func_0x00018f6784f0(uRam00000001834072c8 ^ 0x9d44e4fbd6f0dba0);
  uRam0000000183407558 = uRam0000000183407558 ^ uRam0000000183407268 ^ 0x9dfa3bbf97a04959;
  uRam0000000183407278 =
       (uRam0000000183407278 * -0x42373fb206a62b63 ^ uRam0000000183407558) + uRam0000000183407268;
  uRam00000001834073b8 = uRam0000000183407278 ^ uRam0000000183407558;
  uRam0000000183407688 = 0;
  uVar3 = ((uRam0000000183407358 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183407358 & 0x84225cda) * 2) * -lRam00000001834076f8;
  uVar3 = (uVar3 | uRam0000000183407528) + (uVar3 & uRam0000000183407528);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834073c0 =
       func_0x00018f6784f0((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uRam0000000183407200 = uRam0000000183407468 ^ 0x7fff;
  uRam0000000183407368 = uRam0000000183407148 * -0x235da31e95e8bcbf;
  uRam0000000183407450 = uRam0000000183407450 + 0x7fff ^ 0xe426add442c4689f;
  uRam0000000183407148 = uRam0000000183407368 ^ uRam0000000183407450;
  uRam0000000183407300 = 0x7fff;
  lRam0000000183407340 = func_0x00018f6784f0(uRam0000000183407630 ^ 0x1f007be4ffdd6b);
  uVar3 = (lRam0000000183407340 * -0x20c022f57c180d49 ^ 0x6b63641920000000U) & 0xffffffffe0000000;
  uRam0000000183407258 = uRam0000000183407258 ^ uVar3 ^ 0xb2e30c56b48e5249;
  uRam00000001834075a0 = (uRam00000001834075a0 * -0xc8ca29c47421a73 ^ uRam0000000183407258) + uVar3;
  uRam00000001834072f0 = uRam00000001834075a0 ^ uRam0000000183407258;
  uRam0000000183407150 = 0;
  uRam00000001834073d8 = func_0x00018f6784f0(uRam0000000183407668 ^ 0xffbbff832a0021db);
  uVar3 = uRam00000001834073d8 << 0x23 | uRam00000001834073d8 >> 0x1d;
  uRam0000000183407278 = uRam0000000183407120 ^ uVar3 ^ 0x7fff;
  uRam0000000183407310 = (uRam0000000183407310 ^ uVar3) + 0x7fff ^ 0x27696a316c2629a8;
  uRam00000001834075b0 = (uRam00000001834075b0 * 0x4d814d6f7045fe9d ^ uRam0000000183407310) + uVar3;
  uRam0000000183407490 = uRam00000001834075b0 ^ uRam0000000183407310;
  uRam0000000183407410 = uRam0000000183407510 ^ 0x7fff;
  uRam0000000183407198 = 0x7fff;
  uVar3 = param_4 ^ 0x84222325 ^ uRam0000000183407248;
  lVar4 = (param_4 ^ 0x84222325) + uRam0000000183407650;
  uVar8 = uVar3 + lVar4;
  uVar10 = (uRam0000000183407650 ^ 0x7fff) + uRam0000000183407248 + 0x7fff;
  uVar3 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar3;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183407650 ^ 0x7fff;
  uRam0000000183407400 =
       func_0x00018f6784f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183407248 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001834076f0 = (ulonglong)uVar2;
  uRam00000001834071c0 =
       (uRam00000001834071c0 ^ uRam0000000183407400) + uRam00000001834076f0 ^ 0xe6c9e17d8af77538;
  uRam0000000183407660 =
       (uRam0000000183407660 * 0x3c92993dba5e0c17 ^ uRam00000001834071c0) + uRam0000000183407400;
  uRam0000000183407628 = uRam0000000183407660 ^ uRam00000001834071c0;
  uVar3 = uRam00000001834076f0 ^ 0x84222325 ^ uRam0000000183407500;
  uVar8 = param_3 ^ uRam0000000183407280;
  lVar5 = (uRam00000001834076f0 ^ 0x84222325) + uRam0000000183407280;
  lVar4 = uRam0000000183407500 + param_3;
  uVar10 = uVar3 + lVar5;
  uVar9 = uVar8 + lVar4;
  uVar3 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar3;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uRam00000001834073f8 =
       func_0x00018f6784f0((uVar8 << 0x1d | uVar8 >> 0x23) - lVar4 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar3 = uRam00000001834073f8 >> 1 | uRam00000001834073f8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001834073f8;
  uVar10 = (ulonglong)(uVar2 ^ param_3);
  uRam00000001834076d8 = (uRam00000001834076d8 ^ uVar3) + uVar10 ^ 0x60fea9688fa95bb4;
  uRam0000000183407380 = (uRam0000000183407380 * 0x5641873bf44c8d47 ^ uRam00000001834076d8) + uVar3;
  uRam0000000183407520 = uRam0000000183407380 ^ uRam00000001834076d8;
  uVar3 = (~uRam0000000183407608 + 0x6ef1cf0b) *
          ((uRam00000001834075b8 ^ 0xa74d3ccb) +
          (ulonglong)((uint)uRam00000001834075b8 & 0xa74d3ccb) * 2);
  uVar3 = (uVar3 | uRam0000000183407630) + (uVar3 & uRam0000000183407630);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834071d8 = uVar10;
  uRam00000001834074a0 =
       func_0x00018f6784f0((uVar3 | 0xc9bcf3c1) + (ulonglong)((uint)uVar3 & 0xc9bcf3c1));
  uRam00000001834075d8 =
       (uRam00000001834075d8 ^ uRam00000001834074a0) + 0x6fffdfee ^ 0xc57f5ec4663d19e9;
  uRam0000000183407490 =
       (uRam0000000183407490 * 0x56a553c1cdda8f8b ^ uRam00000001834075d8) + uRam00000001834074a0;
  uRam00000001834075a0 = uRam0000000183407490 ^ uRam00000001834075d8;
  uRam0000000183407650 = 0x6fffdfee;
  uVar3 = (~uRam00000001834075c0 + 0x632767) *
          ((uRam00000001834074a0 ^ 0xf6f6ee95) +
          (ulonglong)((uint)uRam00000001834074a0 & 0xf6f6ee95) * 2);
  uVar3 = (uVar3 | uRam0000000183407460) + (uVar3 & uRam0000000183407460);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834073d0 =
       func_0x00018f6784f0((uVar3 | 0xf695c9f3) + (ulonglong)((uint)uVar3 & 0xf695c9f3));
  uVar3 = (uRam00000001834073d0 ^ 0x72d4cdb0) << 0x38 | (uRam00000001834073d0 ^ 0x72d4cdb0) >> 8;
  uRam0000000183407180 = (uRam0000000183407180 ^ uVar3) + 0x72b7ead6 ^ 0xc4e38195cbf484ef;
  uRam00000001834072c0 =
       (uRam00000001834072c0 * -0x1a70c1c6de73edff ^ uRam0000000183407180) + uVar3 ^
       uRam0000000183407180;
  uRam0000000183407368 = 0x72b7ead6;
  uVar3 = (~uRam0000000183407410 + 0x8705f955) *
          ((uRam00000001834072b8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001834072b8 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001834073a0) + (uVar3 & uRam00000001834073a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183407410 =
       func_0x00018f6784f0((uVar3 | 0x327da71) + (ulonglong)((uint)uVar3 & 0x327da71));
  uRam0000000183407578 = uRam0000000183407578 - 0x8705f954 ^ 0x70ed0fc3b8b128b7;
  uRam0000000183407200 = uRam0000000183407158 * -0x5c10b92497c8767;
  uRam0000000183407158 = uRam0000000183407200 ^ uRam0000000183407578;
  uRam00000001834071f0 = 0x78fa06ac;
  uRam00000001834075e8 = func_0x00018f6784f0(lRam00000001834076c0 + 0xb500b62500cbffU ^ 0x55);
  uVar3 = uRam00000001834075e8 << 0x2e | uRam00000001834075e8 >> 0x12;
  uRam0000000183407460 = (uRam0000000183407460 ^ uVar3) - 0x4afe9e00 ^ 0x2c73c34309a0e8af;
  uRam00000001834074f8 = (uRam00000001834074f8 * -0x513038360f0b38ef ^ uRam0000000183407460) + uVar3
  ;
  uRam00000001834074e8 = uRam00000001834074f8 ^ uRam0000000183407460;
  uRam0000000183407310 = 0xb5016200;
  uVar3 = (uRam00000001834073e8 ^ _UNK_18296e180) + uRam0000000183407128 + 0x84223dad;
  uVar8 = (uRam0000000183407128 ^ _UNK_18296e188) + uRam00000001834073e8 + 0x4afe9e00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001834073e8 ^ _UNK_18296e180;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183407128 ^ _UNK_18296e188;
  uRam0000000183407230 =
       func_0x00018f6784f0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001834073e8 + 0x4afe9e00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183407128 + 0x84223dad));
  uVar8 = uRam0000000183407230 ^ 0x8f1adc7f000;
  uVar3 = uVar8 >> 1 | uVar8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar8;
  uRam0000000183407478 = uRam0000000183407278 ^ uVar8 ^ 0x4afebc88;
  uRam00000001834073e8 = (uRam00000001834073e8 ^ uVar8) + 0x4afebc88 ^ 0x970b70be7d8db429;
  uRam0000000183407300 = (uRam0000000183407300 * 0x2ddf27d4e595102d ^ uRam00000001834073e8) + uVar8;
  uRam0000000183407288 = uRam0000000183407300 ^ uRam00000001834073e8;
  uRam00000001834072f0 = 0x4afebc88;
  uRam0000000183407140 = func_0x00018f6784f0(uRam00000001834076b8 ^ 0x64ffb95cff3450);
  uVar3 = uRam0000000183407140 & 0xffffffffffffff00 ^ 0x4afebc88;
  uRam0000000183407460 = uRam0000000183407398 ^ uVar3 ^ 0x100001e88;
  uRam00000001834076a0 = (uRam00000001834076a0 ^ uVar3) + 0x100001e88 ^ 0x522e81c917f7c8e8;
  uRam0000000183407300 = (uRam0000000183407300 * 0x70331554ea7fb0c3 ^ uRam00000001834076a0) + uVar3;
  uRam00000001834075b0 = uRam0000000183407300 ^ uRam00000001834076a0;
  uRam0000000183407688 = 0x1e88;
  uRam0000000183407100 = func_0x00018f6784f0(lRam0000000183407508 + 0xff46001aa4ff3affU ^ 0x99);
  uVar3 = uRam0000000183407100 << 6 | uRam0000000183407100 >> 0x3a;
  uVar8 = uVar3 >> 1 | uVar3;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  uRam00000001834073d0 = uRam0000000183407128 ^ uVar3 ^ 0x100001e88;
  uRam0000000183407188 = (uRam0000000183407188 ^ uVar3) + 0x100001e88 ^ 0x8fa2f68b16d3f665;
  uRam0000000183407420 = (uRam0000000183407420 * -0x1922dafe09248429 ^ uRam0000000183407188) + uVar3
  ;
  uRam0000000183407218 = uRam0000000183407420 ^ uRam0000000183407188;
  uRam0000000183407460 = 0x1e88;
  uRam00000001834072e0 = func_0x00018f6784f0(uRam0000000183407468 + 0x1200970cffa9ff ^ 0x36);
  uRam00000001834076f0 = uRam0000000183407288 ^ uRam00000001834072e0 ^ 0xe2b7cac4;
  uRam00000001834071d0 =
       (uRam00000001834071d0 ^ uRam00000001834072e0) + 0xe2b7cac4 ^ 0x254842af742b6230;
  uRam0000000183407238 =
       (uRam0000000183407238 * 0x6f96bb780523ba7b ^ uRam00000001834071d0) + uRam00000001834072e0;
  uRam0000000183407678 = uRam0000000183407238 ^ uRam00000001834071d0;
  uRam0000000183407228 = 0xe2b7cac4;
  uRam00000001834073c0 = func_0x00018f6784f0(uRam00000001834076c8 + 0xe009912ffd9ff ^ 0x37);
  uRam0000000183407240 =
       (uRam0000000183407240 ^ uRam00000001834073c0 ^ 0x7ffffffe) + 0x1d483538 ^ 0xa794090f79eb6360;
  uRam0000000183407658 =
       (uRam0000000183407658 * -0x2c4bcd18f7a95941 ^ uRam0000000183407240) +
       (uRam00000001834073c0 ^ 0x7ffffffe);
  uRam0000000183407278 = uRam0000000183407658 ^ uRam0000000183407240;
  uRam00000001834074f8 = 0x1d483538;
  uRam0000000183407218 = func_0x00018f6784f0(uRam0000000183407280 ^ 0xffedff8703002543);
  uRam0000000183407450 =
       (uRam0000000183407450 ^ uRam0000000183407218 * -0x33b5ffbdc94c8345) + 0x62b7cac6 ^
       0xe9bfdcac22a628c3;
  uRam0000000183407318 =
       (uRam0000000183407318 * -0x609aaf223e64ceb3 ^ uRam0000000183407450) +
       uRam0000000183407218 * -0x33b5ffbdc94c8345;
  uRam0000000183407538 = uRam0000000183407318 ^ uRam0000000183407450;
  uRam00000001834075a8 = 0x62b7cac6;
  uVar3 = (~uRam0000000183407520 + 0xc56f958d) *
          ((uRam00000001834071a0 ^ 0x996a161d) +
          (ulonglong)((uint)uRam00000001834071a0 & 0x996a161d) * 2);
  uVar3 = (uVar3 | uRam0000000183407360) + (uVar3 & uRam0000000183407360);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834074c8 =
       func_0x00018f6784f0((uVar3 | 0x5c058391) + (ulonglong)((uint)uVar3 & 0x5c058391));
  uVar3 = uRam00000001834074c8 & 0x1fffffffffffffff ^ 0x1d483538;
  uRam0000000183407190 = uRam0000000183407198 ^ uVar3 ^ 0xe2b7cac4;
  uRam00000001834072c8 = (uRam00000001834072c8 ^ uVar3) + 0xe2b7cac4 ^ 0x685ee118f8b0e54f;
  uRam00000001834073b8 = (uRam00000001834073b8 * -0x1d656b31d3e5381b ^ uRam00000001834072c8) + uVar3
  ;
  uRam0000000183407518 = uRam00000001834073b8 ^ uRam00000001834072c8;
  uRam0000000183407510 = 0xe2b7cac4;
  uVar3 = (~uRam0000000183407588 + 0xe2b7cac5) *
          ((uRam0000000183407230 ^ 0x6695e9e1) +
          (ulonglong)((uint)uRam0000000183407230 & 0x6695e9e1) * 2);
  uVar3 = (uVar3 | uRam0000000183407240) + (uVar3 & uRam0000000183407240);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834073d8 =
       func_0x00018f6784f0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam0000000183407160 = uRam00000001834071a8;
  uRam0000000183407310 = uRam0000000183407310 ^ uRam00000001834071a8 ^ 0x4d8cf5b897d2b321;
  uRam0000000183407260 =
       (uRam0000000183407260 * -0x18238c919730372b ^ uRam0000000183407310) + uRam00000001834071a8;
  uRam0000000183407288 = uRam0000000183407260 ^ uRam0000000183407310;
  uRam0000000183407668 = 0;
  uRam0000000183407628 = func_0x00018f6784f0(uRam0000000183407420 ^ 0xfffd0084630021df);
  uVar3 = (uRam0000000183407628 & 0xffffffffffff0000) -
          (uRam0000000183407628 >> 1 & 0x5555555555550000);
  uVar3 = (uVar3 & 0x3333333333330000) + (uVar3 >> 2 & 0x3333333333330000);
  uVar3 = (uRam0000000183407628 & 0xffffffffffff0000) +
          (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0000) * 0x101010101010101 >> 0x38) * 8 &
          0x7fffffffffffffff;
  uRam0000000183407330 = uRam00000001834073b0 ^ uVar3 ^ 0x1e88;
  uRam00000001834074c0 = (uRam00000001834074c0 ^ uVar3) + 0x1e88 ^ 0xc3860dd6e1362c99;
  uRam00000001834075a0 = (uRam00000001834075a0 * 0x562d0b94babe1af3 ^ uRam00000001834074c0) + uVar3;
  uRam00000001834074d0 = uRam00000001834075a0 ^ uRam00000001834074c0;
  uRam0000000183407150 = 0x1e88;
  uRam0000000183407658 = func_0x00018f6784f0(uRam0000000183407318 + 0xfffcfff42bffe1ff ^ 0x99);
  uVar8 = uRam0000000183407658 ^ 0xffffffff;
  uVar3 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar8;
  uRam0000000183407210 = (uRam0000000183407210 ^ uVar8) + 0x90002011 ^ 0x3f76e0ea02e4131d;
  uRam0000000183407548 = (uRam0000000183407548 * -0x6d4d00a9e215ea2d ^ uRam0000000183407210) + uVar8
  ;
  uRam00000001834071e8 = uRam0000000183407548 ^ uRam0000000183407210;
  lRam00000001834076c0 = 0x90002011;
  uVar3 = (~uRam00000001834073d8 + 0x90002012) *
          ((uRam0000000183407358 ^ 0xebddfccb) +
          (ulonglong)((uint)uRam0000000183407358 & 0xebddfccb) * 2);
  uVar3 = (uVar3 | uRam0000000183407678) + (uVar3 & uRam0000000183407678);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183407658 =
       func_0x00018f6784f0((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda));
  uVar3 = (uRam0000000183407658 ^ 0xfe000000) & 0xfffffffffe000000;
  uRam0000000183407110 = uRam0000000183407110 ^ uVar3 ^ 0x43845d12bb81c4ff;
  uRam0000000183407458 = (uRam0000000183407458 * -0x24c150de35579017 ^ uRam0000000183407110) + uVar3
  ;
  uRam0000000183407170 = uRam0000000183407458 ^ uRam0000000183407110;
  auVar6._8_8_ = _UNK_18296e198;
  auVar6._0_8_ = uVar10 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_18296e1a0,_UNK_1800170c0);
  uRam0000000183407370 = 0;
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar8 + uRam00000001834076c8;
  if (auVar7._4_4_ < 0) {
    uVar3 = uRam0000000183407650 ^ uVar8;
  }
  uRam0000000183407610 = func_0x00018f6784f0(SUB161(auVar6 ^ _UNK_18296e1a0,5) ^ uVar3);
  uVar3 = (uVar10 | 0x1e88) ^ uRam0000000183407610 ^ 0x1e88;
  uRam0000000183407538 = uVar10 ^ 0x1e88;
  uRam0000000183407218 = (uRam0000000183407218 ^ uVar3) + uRam0000000183407538 ^ 0x760ac2f5d9963257;
  lRam0000000183407338 = (lRam0000000183407338 * -0x48ebcfd4596d0baf ^ uRam0000000183407218) + uVar3
  ;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x631f,0x122);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f6739c9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18296c7a8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aY; Af (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18f678580, runtime 6ffff7288580) =====

void FUN_18f678580(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018f6785bc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18296e2b0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aY; Ag (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18f679470, runtime 6ffff7289470) =====

void FUN_18f679470(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f6794ed did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18296e7f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aY; _4b4858161f15e00bdcc164d6c97f7d0d ()V (handler @ image 18f67bf30, runtime 6ffff728bf30) =====

void FUN_18f67bf30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f67c00c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18296f6e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aY; bV (Lsixtwo/lC;)V (handler @ image 18f641dc0, runtime 6ffff7251dc0) =====

void FUN_18f641dc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x245,0xe);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f641e65 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182965520 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aY; fC (DDD)Z (handler @ image 18f643470, runtime 6ffff7253470) =====

void FUN_18f643470(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x631f,0x122);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f643538 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182965c90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/aY; zT ()[I (handler @ image 18f682460, runtime 6ffff7292460) =====

void FUN_18f682460(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f682480 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182970ef0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aY; zU ()Lsixtwo/iM; (handler @ image 18f682660, runtime 6ffff7292660) =====

void FUN_18f682660(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f682680 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182970fd0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aY; zV ()Lsixtwo/am; (handler @ image 18f682860, runtime 6ffff7292860) =====

void FUN_18f682860(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f682880 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829710b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aY; zW ()Lsixtwo/af; (handler @ image 18f682a60, runtime 6ffff7292a60) =====

void FUN_18f682a60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f682a80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182971190 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aY; zX ()Lsixtwo/af; (handler @ image 18f682c60, runtime 6ffff7292c60) =====

void FUN_18f682c60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f682c80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182971270 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aY; zY ()Lsixtwo/af; (handler @ image 18f682e60, runtime 6ffff7292e60) =====

void FUN_18f682e60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f682e80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182971350 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/aY; zZ (Lsixtwo/lC;)V (handler @ image 18f683060, runtime 6ffff7293060) =====

void FUN_18f683060(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x631f,0x122);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f683148 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182971450 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



