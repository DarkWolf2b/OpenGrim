// ===== Lsixtwo/bs$se; _02c8e32375e80bbbd9a400eee85b58d8 ()V (handler @ image 18e8f3f00, runtime 6ffff6503f00) =====

void FUN_18e8f3f00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018e8f3fe8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18266e828 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bs$se; bV (Lsixtwo/lC;)V (handler @ image 18e8ea240, runtime 6ffff64fa240) =====

void FUN_18e8ea240(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7f51,0x15d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018e8ea2c4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18266ae40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dnk (Z)V (handler @ image 18e8ea050, runtime 6ffff64fa050) =====

void FUN_18e8ea050(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018e8ea075 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18266ad70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dnl ()Lsixtwo/bs; (handler @ image 18e907c90, runtime 6ffff6517c90) =====

void FUN_18e907c90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018e907cb0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182670720 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dnm ()Lnet/minecraft/class_1792; (handler @ image 18e907e90, runtime 6ffff6517e90) =====

void FUN_18e907e90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018e907eb0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182670800 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dnn ()Lsixtwo/rk; (handler @ image 18e908090, runtime 6ffff6518090) =====

void FUN_18e908090(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018e9080b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1826708e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dno ()Lsixtwo/rk; (handler @ image 18e908290, runtime 6ffff6518290) =====

void FUN_18e908290(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018e9082b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1826709c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dnp ()Z (handler @ image 18e908490, runtime 6ffff6518490) =====

void FUN_18e908490(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018e9084b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182670aa0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dnq (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18e908690, runtime 6ffff6518690) =====

undefined8 FUN_18e908690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/bs$se; dnr ([B)Ljava/lang/String; (handler @ image 18e908720, runtime 6ffff6518720) =====

void FUN_18e908720(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018e9087c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182670d00 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dns (IJ)I (handler @ image 18e932c70, runtime 6ffff6542c70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e932c70(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar8 = (uRam00000001833c2c10 ^ _UNK_182678560) + uRam00000001833c2e68 + 0x6b78f520ef914cea;
  uVar10 = (uRam00000001833c2e68 ^ _UNK_182678568) + uRam00000001833c2c10 + 0x56ee3c2b937ff932;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2c10 ^ _UNK_182678560;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833c2e68 ^ _UNK_182678568;
  uRam00000001833c2bf0 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001833c2c10 + 0x56ee3c2b937ff932) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833c2e68 + 0x6b78f520ef914cea));
  uRam00000001833c2cc0 =
       (uRam00000001833c2cc0 ^ uRam00000001833c2b58) + 0x7ffefd2bfbffffff ^ 0x9b024a57dc4916e4;
  uRam00000001833c2ee0 =
       (uRam00000001833c2ee0 * 0x5181af6674bfe4db ^ uRam00000001833c2cc0) + uRam00000001833c2b58;
  uRam00000001833c2e58 = uRam00000001833c2ee0 ^ uRam00000001833c2cc0;
  uRam00000001833c2dc8 = 0x7ffefd2bfbffffff;
  uVar8 = (~uRam00000001833c2b30 + 0xc786bf8ecf870a05) *
          ((uRam00000001833c2b28 ^ 0xf7989cc1d2813555) +
          (uRam00000001833c2b28 & 0x77989cc1d2813555) * 2);
  uVar8 = (uVar8 | uRam00000001833c2b98) + (uVar8 & uRam00000001833c2b98);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2dd0 =
       func_0x00018e93e6c0((uVar8 | 0x301e234f1d063f51) + (uVar8 & 0x301e234f1d063f51));
  uVar10 = uRam00000001833c2dd0 * -0x187aab385dc82425;
  uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar10;
  uRam00000001833c2d40 = (uRam00000001833c2d40 ^ uVar10) + 0x301e234f99241c74 ^ 0x26400b48e33cef2e;
  uRam00000001833c2bc0 = (uRam00000001833c2bc0 * 0xc2d7f1817bc1be9 ^ uRam00000001833c2d40) + uVar10;
  uRam00000001833c2c18 = uRam00000001833c2bc0 ^ uRam00000001833c2d40;
  uRam00000001833c2ef0 = 0x301e234f99241c74;
  uRam00000001833c2d30 = func_0x00018e93e6c0(uRam00000001833c2c18 + 0x814c90b9347dbf89 ^ 0x2f);
  uVar8 = uRam00000001833c2d30 << 0xb | uRam00000001833c2d30 >> 0x35;
  uRam00000001833c2ca0 = (uRam00000001833c2ca0 ^ uVar8) + 0x490f617ea29da810 ^ 0xedf0925b102e54c1;
  uRam00000001833c2c18 = (uRam00000001833c2c18 * -0x6c4e26fd82e33ae7 ^ uRam00000001833c2ca0) + uVar8
  ;
  uRam00000001833c2c50 = uRam00000001833c2c18 ^ uRam00000001833c2ca0;
  uRam00000001833c2d60 = 0x490f617ea29da810;
  uVar8 = (uRam00000001833c2e20 ^ _UNK_182678570) + uRam00000001833c2e68 + 0x84225cda;
  uVar10 = (uRam00000001833c2e68 ^ _UNK_182678578) + uRam00000001833c2e20 + 0xb6f09e815d6257f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2e20 ^ _UNK_182678570;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833c2e68 ^ _UNK_182678578;
  uRam00000001833c2e68 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001833c2e20 + 0xb6f09e815d6257f0) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2e68 + 0x84225cda));
  uRam00000001833c2b20 =
       (uRam00000001833c2c50 ^ uRam00000001833c2ba0 ^ 0xb6f09e815d62d7ef ^ uRam00000001833c2ba0) +
       0xb6f09e815d62d7ef ^ 0x112a1d154fc0e408;
  uRam00000001833c2e00 =
       (uRam00000001833c2e00 * 0x62e27192f59072f ^ uRam00000001833c2b20) + uRam00000001833c2ba0;
  uRam00000001833c2ce8 = uRam00000001833c2e00 ^ uRam00000001833c2b20;
  uRam00000001833c2c58 = 0xb6f09e815d62d7ef;
  uVar8 = (~uRam00000001833c2b10 + 0x490f617ea29da811) *
          ((uRam00000001833c2e80 ^ 0xb6f09e81d940f4ca) +
          (uRam00000001833c2e80 & 0x36f09e81d940f4ca) * 2);
  uVar8 = (uVar8 | uRam00000001833c2d60) + (uVar8 & uRam00000001833c2d60);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2dd0 =
       func_0x00018e93e6c0((uVar8 | 0xffffffff7bdd5cda) + (uVar8 & 0xffffffff7bdd5cda));
  uVar8 = uRam00000001833c2dd0 & 0xffffffffff000000;
  uRam00000001833c2d20 = uRam00000001833c2c18 ^ uVar8 ^ 0x7fff;
  uRam00000001833c2d48 = (uRam00000001833c2d48 ^ uVar8) + 0x7fff ^ 0xd579a846ba56f5db;
  uRam00000001833c2bb8 = (uRam00000001833c2bb8 * 0x4ac9d98dceed479d ^ uRam00000001833c2d48) + uVar8;
  uRam00000001833c2db0 = uRam00000001833c2bb8 ^ uRam00000001833c2d48;
  uRam00000001833c2b80 = 0x7fff;
  uRam00000001833c2b08 = func_0x00018e93e6c0(uRam00000001833c2eb0 ^ 0xc9132fb31b225ffa);
  uRam00000001833c2dd8 =
       (uRam00000001833c2dd8 ^ uRam00000001833c2b08) + 0xfacfd2b60e72aa00 ^ 0x5a4983804a0d0b49;
  uRam00000001833c2da0 =
       (uRam00000001833c2da0 * 0x7209e18d7b75a22d ^ uRam00000001833c2dd8) + uRam00000001833c2b08;
  uRam00000001833c2df8 = uRam00000001833c2da0 ^ uRam00000001833c2dd8;
  uRam00000001833c2e10 = 0xfacfd2b60e72aa00;
  uVar8 = (uRam00000001833c2e70 ^ _UNK_182678580) + uRam00000001833c2d28 + 0x84225cda;
  uVar10 = (uRam00000001833c2d28 ^ _UNK_182678588) + uRam00000001833c2e70 + 0x5302d49f18d5600;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2e70 ^ _UNK_182678580;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833c2d28 ^ _UNK_182678588;
  uRam00000001833c2d50 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001833c2e70 + 0x5302d49f18d5600) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2d28 + 0x84225cda));
  uVar8 = ((uRam00000001833c2d50 ^ 0x5302d49f18d7fff) << 0x16 |
          (uRam00000001833c2d50 ^ 0x5302d49f18d7fff) >> 0x2a) ^ 0x7fff;
  uRam00000001833c2bd8 = uRam00000001833c2e80 ^ uVar8 ^ 0x5302d49f18dd5ff;
  uRam00000001833c2c50 = (uRam00000001833c2c50 ^ uVar8) + 0x5302d49f18dd5ff ^ 0x37c09ee52bec3cc8;
  uRam00000001833c2e60 = (uRam00000001833c2e60 * -0x1c8efa1b53cc77ed ^ uRam00000001833c2c50) + uVar8
  ;
  uRam00000001833c2c28 = uRam00000001833c2e60 ^ uRam00000001833c2c50;
  uRam00000001833c2ec0 = 0x5302d49f18dd5ff;
  uVar8 = (~uRam00000001833c2cd0 + 0xfacfd2b60e72aa01) *
          ((uRam00000001833c2e18 ^ 0x5302d4975aff6da) +
          (uRam00000001833c2e18 & 0x5302d4975aff6da) * 2);
  uVar8 = (uVar8 | uRam00000001833c2bc8) + (uVar8 & uRam00000001833c2bc8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2b10 =
       func_0x00018e93e6c0((uVar8 | 0xffffffff7bdd5cda) + (uVar8 & 0xffffffff7bdd5cda));
  uRam00000001833c2b48 =
       (uRam00000001833c2b48 ^ ~uRam00000001833c2b10) + 0x7fff ^ 0xd36bf17e4892a0fe;
  uRam00000001833c2ea8 =
       (uRam00000001833c2ea8 * 0x272e808509a3f9b9 ^ uRam00000001833c2b48) + ~uRam00000001833c2b10;
  uRam00000001833c2bc0 = uRam00000001833c2ea8 ^ uRam00000001833c2b48;
  uRam00000001833c2c70 = 0x7fff;
  uVar8 = (uRam00000001833c2bc8 ^ _UNK_182678590) + uRam00000001833c2d88 + 0x84225cda;
  uVar10 = (uRam00000001833c2d88 ^ _UNK_182678598) + uRam00000001833c2bc8 + 0xae1d2a2c073ea720;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2bc8 ^ _UNK_182678590;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833c2d88 ^ _UNK_182678598;
  uRam00000001833c2b50 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001833c2bc8 + 0xae1d2a2c073ea720) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2d88 + 0x84225cda));
  uVar8 = uRam00000001833c2b50 ^ 0x48e5f35f4b6f803f;
  uRam00000001833c2d20 = uRam00000001833c2e08 ^ uVar8 ^ 0xae1d2a2c073f271f;
  uRam00000001833c2c30 = (uRam00000001833c2c30 ^ uVar8) + 0xae1d2a2c073f271f ^ 0x72b8c97abb9c94d9;
  uRam00000001833c2de0 = (uRam00000001833c2de0 * 0x5a3198aa594ca64d ^ uRam00000001833c2c30) + uVar8;
  uRam00000001833c2d38 = uRam00000001833c2de0 ^ uRam00000001833c2c30;
  uRam00000001833c2cb0 = 0xae1d2a2c073f271f;
  uVar8 = (~uRam00000001833c2b90 + 0x301e234f99241c75) *
          ((uRam00000001833c2bf0 ^ 0x7ffefd2b7fdddcda) +
          (uRam00000001833c2bf0 & 0x7ffefd2b7fdddcda) * 2);
  uVar8 = (uVar8 | uRam00000001833c2da0) + (uVar8 & uRam00000001833c2da0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2b80 =
       func_0x00018e93e6c0((uVar8 | 0x4fe0de64e6f9c0ae) + (uVar8 & 0x4fe0de64e6f9c0ae));
  uVar8 = (uRam00000001833c2b80 ^ 0x7ffeff6ffbffffff) * 0x6dcdb6b840970d9;
  uRam00000001833c2cb0 = uRam00000001833c2b30 ^ uVar8 ^ 0xb01d207b95241c73;
  uRam00000001833c2e50 = (uRam00000001833c2e50 ^ uVar8) + 0xb01d207b95241c73 ^ 0xa819b6e3827718d3;
  uRam00000001833c2c80 = (uRam00000001833c2c80 * 0x5bfe426712636495 ^ uRam00000001833c2e50) + uVar8;
  uRam00000001833c2db8 = uRam00000001833c2c80 ^ uRam00000001833c2e50;
  uRam00000001833c2b88 = 0xb01d207b95241c73;
  uRam00000001833c2c50 = func_0x00018e93e6c0(uRam00000001833c2ea8 + 0x643f60d9a64e9734 ^ 0x97);
  uVar8 = (uRam00000001833c2c50 ^ 0x7ffeff6ffbffffff) << 5 |
          (uRam00000001833c2c50 ^ 0x7ffeff6ffbffffff) >> 0x3b;
  uRam00000001833c2ed0 = (uRam00000001833c2ed0 ^ uVar8) + 0x4fe0de6462dbe38b ^ 0xce700e20b2781462;
  uRam00000001833c2bb8 = (uRam00000001833c2bb8 * -0x455458d4f8cf4aed ^ uRam00000001833c2ed0) + uVar8
  ;
  uRam00000001833c2cf0 = uRam00000001833c2bb8 ^ uRam00000001833c2ed0;
  uRam00000001833c2e48 = 0x4fe0de6462dbe38b;
  uRam00000001833c2d70 = func_0x00018e93e6c0(uRam00000001833c2e08 ^ 0xa4c0df199139c6c5);
  uRam00000001833c2d00 =
       (uRam00000001833c2d00 ^ uRam00000001833c2d70 & 0x7fffffffffffffff) + 0x301e210b99241c74 ^
       0xfa67354132850f06;
  uRam00000001833c2c70 =
       (uRam00000001833c2c70 * -0x66876b143b9d3f4f ^ uRam00000001833c2d00) +
       (uRam00000001833c2d70 & 0x7fffffffffffffff);
  uRam00000001833c2d88 = uRam00000001833c2c70 ^ uRam00000001833c2d00;
  uRam00000001833c2ba0 = 0x301e210b99241c74;
  uVar8 = (~uRam00000001833c2ea0 + 0x603c4217324838e9) *
          ((uRam00000001833c2c18 ^ 0x4fe0de64e6f9c0ae) +
          (uRam00000001833c2c18 & 0x4fe0de64e6f9c0ae) * 2);
  uVar8 = (uVar8 | uRam00000001833c2d20) + (uVar8 & uRam00000001833c2d20);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2e70 =
       func_0x00018e93e6c0((uVar8 | 0x2fdc9c73d4b1f846) + (uVar8 & 0x2fdc9c73d4b1f846));
  uVar8 = uRam00000001833c2e70 & 0x7fffffffff ^ 0x4fe0de6462dbe38b;
  uRam00000001833c2c08 = uRam00000001833c2de0 ^ uVar8 ^ 0xb01d207b95241c73;
  uRam00000001833c2d80 = (uRam00000001833c2d80 ^ uVar8) + 0xb01d207b95241c73 ^ 0xe8ce5a81b964f757;
  uRam00000001833c2ca8 = (uRam00000001833c2ca8 * 0x5945acbf4b141d5 ^ uRam00000001833c2d80) + uVar8;
  uRam00000001833c2d08 = uRam00000001833c2ca8 ^ uRam00000001833c2d80;
  uRam00000001833c2de0 = -0x4fe2df846adbe38d;
  uRam00000001833c2d60 = func_0x00018e93e6c0(uRam00000001833c2e18 + 0xffdf00841cffddff ^ 2);
  uRam00000001833c2e48 = uRam00000001833c2d60 & 0xfffffffffe000000;
  uRam00000001833c2df8 = uRam00000001833c2df8 ^ uRam00000001833c2e48 ^ 0xa9b55174bfda3226;
  uRam00000001833c2d50 =
       (uRam00000001833c2d50 * -0x60a9708cfacb049d ^ uRam00000001833c2df8) + uRam00000001833c2e48;
  uRam00000001833c2bb8 = uRam00000001833c2d50 ^ uRam00000001833c2df8;
  uRam00000001833c2c60 = 0;
  uRam00000001833c2bd8 = func_0x00018e93e6c0(uRam00000001833c2cc8 ^ 0xffa3ff84460021b1);
  uVar8 = uRam00000001833c2bd8 ^ 0x7fff;
  uRam00000001833c2c48 = uRam00000001833c2ee8 ^ uVar8 ^ 0x7fff;
  uRam00000001833c2c90 = (uRam00000001833c2c90 ^ uVar8) + 0x7fff ^ 0xacacf86d0fa4a43b;
  uRam00000001833c2ea0 = (uRam00000001833c2ea0 * 0x16a22fd1a2c15c2f ^ uRam00000001833c2c90) + uVar8;
  uRam00000001833c2bd0 = uRam00000001833c2ea0 ^ uRam00000001833c2c90;
  uRam00000001833c2da0 = 0x7fff;
  uRam00000001833c2b70 = func_0x00018e93e6c0(uRam00000001833c2c00 ^ 0xc1545d0929ad52de);
  uRam00000001833c2ca0 =
       uRam00000001833c2ca0 ^ uRam00000001833c2b70 ^ 0x7ffefd2bfbffffff ^ 0x93347d93fc598b6b;
  uRam00000001833c2dc8 =
       (uRam00000001833c2dc8 * -0x7357e1644ad927dd ^ uRam00000001833c2ca0) +
       (uRam00000001833c2b70 ^ 0x7ffefd2bfbffffff);
  uRam00000001833c2da8 = uRam00000001833c2dc8 ^ uRam00000001833c2ca0;
  uRam00000001833c2c68 = 0;
  uVar8 = (uRam00000001833c2c28 ^ 0x84225cda) + uRam00000001833c2c98 + 0x84225cda;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2c28 ^ 0x84225cda;
  uVar10 = ((uRam00000001833c2c98 + uRam00000001833c2c28) * 0x2000 |
           uRam00000001833c2c98 + uRam00000001833c2c28 >> 0x33) ^ uRam00000001833c2c98;
  uRam00000001833c2d38 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) - uRam00000001833c2c28 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2c98 + 0x84225cda));
  uVar8 = (uRam00000001833c2d38 ^ 0x7fff) & 0x1ffffffffffff;
  uRam00000001833c2b08 = uRam00000001833c2ce0 ^ uVar8 ^ 0x7fff;
  uRam00000001833c2bf8 = (uRam00000001833c2bf8 ^ uVar8) + 0x7fff ^ 0x9bc6b36555495900;
  uRam00000001833c2c88 = (uRam00000001833c2c88 * -0x46f1843d9c2134b9 ^ uRam00000001833c2bf8) + uVar8
  ;
  uRam00000001833c2dc8 = uRam00000001833c2c88 ^ uRam00000001833c2bf8;
  uRam00000001833c2d40 = 0x7fff;
  uVar8 = ((uRam00000001833c2e30 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833c2e30 & 0x84225cda) * 2) * -uRam00000001833c2d08;
  uVar8 = (uVar8 | uRam00000001833c2d90) + (uVar8 & uRam00000001833c2d90);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2e38 =
       func_0x00018e93e6c0((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uVar8 = uRam00000001833c2e38 * 0x7672fcc9554a38f7 & 0xfffffffffc000000;
  uRam00000001833c2bc8 = uRam00000001833c2b60 ^ uVar8 ^ 0x7fff;
  uRam00000001833c2b28 = (uRam00000001833c2b28 ^ uVar8) + 0x7fff ^ 0x3b9124757d9d0ab;
  uRam00000001833c2c90 = (uRam00000001833c2c90 * -0x21f997c9096ac7bf ^ uRam00000001833c2b28) + uVar8
  ;
  uRam00000001833c2e60 = uRam00000001833c2c90 ^ uRam00000001833c2b28;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_1826785a0,_UNK_1800170c0);
  uRam00000001833c2bb0 = 0x7fff;
  uVar10 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar10 + uRam00000001833c2e18;
  if (auVar7._4_4_ < 0) {
    uVar8 = uRam00000001833c2cf0 ^ uVar10;
  }
  uRam00000001833c2d10 = func_0x00018e93e6c0(SUB161(auVar6 ^ _UNK_1826785a0,5) ^ uVar8);
  uVar8 = uRam00000001833c2d10 >> 1 | uRam00000001833c2d10;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001833c2d10;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar2;
  uRam00000001833c2e58 = (uRam00000001833c2e58 ^ uVar8) + uVar10 ^ 0x76cf80d1ca3c9096;
  uRam00000001833c2d30 = (uRam00000001833c2d30 * -0x107f1d0bba35c4a9 ^ uRam00000001833c2e58) + uVar8
  ;
  uRam00000001833c2d08 = uRam00000001833c2d30 ^ uRam00000001833c2e58;
  uVar8 = uVar10 ^ 0x84222325 ^ uRam00000001833c2cc8;
  uVar5 = param_3 ^ uRam00000001833c2c78;
  lVar4 = (uVar10 ^ 0x84222325) + uRam00000001833c2c78;
  lVar3 = uRam00000001833c2cc8 + param_3;
  uVar9 = uVar8 + lVar4;
  uVar11 = uVar5 + lVar3;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uVar5 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar5;
  uRam00000001833c2d38 = uVar10;
  uRam00000001833c2ce8 =
       func_0x00018e93e6c0((uVar5 << 0x1d | uVar5 >> 0x23) - lVar3 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar4);
  uVar10 = ~(~(ulonglong)((uint)uRam00000001833c2ce8 ^ param_3 * uVar2) & uVar10) & uVar10;
  uRam00000001833c2c90 = (ulonglong)(uVar2 ^ param_3);
  uRam00000001833c2eb8 = (uRam00000001833c2eb8 ^ uVar10) + uRam00000001833c2c90 ^ 0x4d274b9fc9614dca
  ;
  uRam00000001833c2dd0 = (uRam00000001833c2dd0 * 0x5d6e20eda921fcd9 ^ uRam00000001833c2eb8) + uVar10
  ;
  uRam00000001833c2d48 = uRam00000001833c2dd0 ^ uRam00000001833c2eb8;
  uVar8 = (~uRam00000001833c2d98 + 0xecb47e23) *
          ((uRam00000001833c2bd0 ^ 0xb5b272a4) +
          (ulonglong)((uint)uRam00000001833c2bd0 & 0xb5b272a4) * 2);
  uVar8 = (uVar8 | uRam00000001833c2de8) + (uVar8 & uRam00000001833c2de8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2e30 =
       func_0x00018e93e6c0((uVar8 | 0x59060c86) + (ulonglong)((uint)uVar8 & 0x59060c86));
  uVar8 = uRam00000001833c2e30 & 0xffffffffffffffc0 ^ 0xecb47e22;
  uRam00000001833c2b28 = (uRam00000001833c2b28 ^ uVar8) + 0xdd242fa3 ^ 0x36a071d2ec291ee3;
  uRam00000001833c2b18 = (uRam00000001833c2b18 * -0x758809cf91e3dce1 ^ uRam00000001833c2b28) + uVar8
  ;
  uRam00000001833c2e28 = uRam00000001833c2b18 ^ uRam00000001833c2b28;
  uRam00000001833c2e80 = 0xdd242fa3;
  uVar8 = (~uRam00000001833c2d78 + 0xb3e371cd) *
          ((uRam00000001833c2b78 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833c2b78 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam00000001833c2dd0) + (uVar8 & uRam00000001833c2dd0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2bd0 =
       func_0x00018e93e6c0((uVar8 | 0x37c152e9) + (ulonglong)((uint)uVar8 & 0x37c152e9));
  uRam00000001833c2bc8 =
       (uRam00000001833c2bc8 ^ uRam00000001833c2bd0) - 0xb3e371cc ^ 0x8ded5ec26b5825a;
  uRam00000001833c2e40 =
       (uRam00000001833c2e40 * 0x116f14b858ea657b ^ uRam00000001833c2bc8) + uRam00000001833c2bd0;
  uRam00000001833c2d80 = uRam00000001833c2e40 ^ uRam00000001833c2bc8;
  uRam00000001833c2b18 = 0x4c1c8e34;
  uVar8 = (uRam00000001833c2be0 ^ _UNK_1826785b0) + uRam00000001833c2e60 + 0x37c1b89e;
  uVar10 = (uRam00000001833c2e60 ^ _UNK_1826785b8) + uRam00000001833c2be0 + 0x4c1c8e34;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2be0 ^ _UNK_1826785b0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833c2e60 ^ _UNK_1826785b8;
  uRam00000001833c2e40 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001833c2be0 + 0x4c1c8e34) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2e60 + 0x37c1b89e));
  uVar10 = uRam00000001833c2e40 * 0x1f2ac51253dada19;
  uVar8 = uVar10 >> 1 | uVar10;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar10) & 0x3ffffffffff;
  uRam00000001833c2b48 = uRam00000001833c2ea0 ^ uVar8 ^ 0x1000029ef;
  uRam00000001833c2cc8 = (uRam00000001833c2cc8 ^ uVar8) + 0x1000029ef ^ 0xa017a5d423d6c650;
  uRam00000001833c2c08 = (uRam00000001833c2c08 * 0x7e4934bb67a5b51 ^ uRam00000001833c2cc8) + uVar8;
  uRam00000001833c2dc8 = uRam00000001833c2c08 ^ uRam00000001833c2cc8;
  uRam00000001833c2e60 = 0x29ef;
  uVar8 = (~uRam00000001833c2d50 + 0x137a6c4a) *
          ((uRam00000001833c2d98 ^ 0x84220aca) +
          (ulonglong)((uint)uRam00000001833c2d98 & 0x84220aca) * 2);
  uVar8 = (uVar8 | uRam00000001833c2b60) + (uVar8 & uRam00000001833c2b60);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2c88 =
       func_0x00018e93e6c0((uVar8 | 0x97586683) + (ulonglong)((uint)uVar8 & 0x97586683));
  uRam00000001833c2e50 =
       (uRam00000001833c2e50 ^ uRam00000001833c2c88) + 0x137a9638 ^ 0x3a4422d38e7e1134;
  uRam00000001833c2d90 =
       (uRam00000001833c2d90 * -0x2257d080eb539c23 ^ uRam00000001833c2e50) + uRam00000001833c2c88;
  uRam00000001833c2e48 = uRam00000001833c2d90 ^ uRam00000001833c2e50;
  uRam00000001833c2b10 = 0x137a9638;
  uRam00000001833c2df0 = func_0x00018e93e6c0(uRam00000001833c2d48 ^ 0x2600395a005c2d);
  uVar8 = ((uRam00000001833c2df0 ^ 0xffff97bf) << 1 | uRam00000001833c2df0 >> 0x3f) ^ 0xffff058f;
  uRam00000001833c2bd0 = uRam00000001833c2d88 ^ uVar8 ^ 0x1000029ef;
  uRam00000001833c2e38 = (uRam00000001833c2e38 ^ uVar8) + 0x1000029ef ^ 0x367341eec891132a;
  uRam00000001833c2d10 = (uRam00000001833c2d10 * 0x6f8f16ee5944e71f ^ uRam00000001833c2e38) + uVar8;
  uRam00000001833c2ee8 = uRam00000001833c2d10 ^ uRam00000001833c2e38;
  uRam00000001833c2b38 = 0x29ef;
  uVar8 = (uRam00000001833c2ec8 ^ _UNK_1826785c0) + uRam00000001833c2c20 + 0x84222325;
  uVar10 = (uRam00000001833c2c20 ^ _UNK_1826785c8) + uRam00000001833c2ec8 + 0x8150969c;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2ec8 ^ _UNK_1826785c0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833c2c20 ^ _UNK_1826785c8;
  uRam00000001833c2b38 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001833c2ec8 + 0x8150969c) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2c20 + 0x84222325));
  uVar8 = ((uRam00000001833c2b38 ^ 0x8150969c) << 0x29 | (uRam00000001833c2b38 ^ 0x8150969c) >> 0x17
          ) * 0x14397e316299ca9d;
  uRam00000001833c2d30 = (uRam00000001833c2d30 ^ uVar8) - 0x8150969c ^ 0x3e846dcb15b99fc7;
  uRam00000001833c2c48 = (uRam00000001833c2c48 * 0x42bfb6336b230fd5 ^ uRam00000001833c2d30) + uVar8;
  uRam00000001833c2ba8 = uRam00000001833c2c48 ^ uRam00000001833c2d30;
  uRam00000001833c2e08 = 0x7eaf6964;
  uVar8 = (uRam00000001833c2c08 ^ _UNK_1826785d0) + uRam00000001833c2e98 + 0x84220aca;
  uVar10 = (uRam00000001833c2e98 ^ _UNK_1826785d8) + uRam00000001833c2c08 + 0x8150969c;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2c08 ^ _UNK_1826785d0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833c2e98 ^ _UNK_1826785d8;
  uRam00000001833c2ee8 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001833c2c08 + 0x8150969c) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2e98 + 0x84220aca));
  uVar8 = uRam00000001833c2ee8 * -0x2836a5789202bc8d;
  uRam00000001833c2ee0 = uRam00000001833c2d28 ^ uVar8 ^ 0x8150c08b;
  uRam00000001833c2c78 = (uRam00000001833c2c78 ^ uVar8) + 0x8150c08b ^ 0x78d6a7c8bff07c5d;
  uRam00000001833c2e78 = (uRam00000001833c2e78 * 0x13354300f73053b9 ^ uRam00000001833c2c78) + uVar8;
  uRam00000001833c2b20 = uRam00000001833c2e78 ^ uRam00000001833c2c78;
  uRam00000001833c2d20 = 0x8150c08b;
  uRam00000001833c2cd0 = func_0x00018e93e6c0(uRam00000001833c2da0 + 0x7600174a00baff ^ 0xae);
  uVar10 = _UNK_1826785e8;
  uVar8 = _UNK_1826785e0;
  uVar5 = uRam00000001833c2cd0 >> 1 | uRam00000001833c2cd0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = uRam00000001833c2cd0 ^ 0x8150c08b ^
          (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2;
  uRam00000001833c2b68 = uRam00000001833c2d00 ^ uVar5 ^ 0x1000029ef;
  uRam00000001833c2db0 = (uRam00000001833c2db0 ^ uVar5) + 0x1000029ef ^ 0xc17df41b4e4ad912;
  uRam00000001833c2c48 = (uRam00000001833c2c48 * 0x4e111371d0a2f49 ^ uRam00000001833c2db0) + uVar5;
  uRam00000001833c2e10 = uRam00000001833c2c48 ^ uRam00000001833c2db0;
  uRam00000001833c2c30 = 0x29ef;
  uVar5 = (uRam00000001833c2d38 ^ _UNK_1826785e0) + uRam00000001833c2bc0 + 0xfb45fdfb;
  uVar9 = (uRam00000001833c2bc0 ^ _UNK_1826785e8) + uRam00000001833c2d38 + 0xdd242fa3;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833c2d38 ^ _UNK_1826785e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833c2bc0 ^ _UNK_1826785e8;
  uRam00000001833c2b50 =
       func_0x00018e93e6c0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001833c2d38 + 0xdd242fa3) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833c2bc0 + 0xfb45fdfb));
  uRam00000001833c2e68 =
       (uRam00000001833c2e68 ^ uRam00000001833c2c20) + 0xa243f17d ^ 0xcb32ef01040ee8ca;
  uRam00000001833c2c78 =
       (uRam00000001833c2c78 * 0x5a8918c944ff138f ^ uRam00000001833c2e68) + uRam00000001833c2c20;
  uRam00000001833c2d68 = uRam00000001833c2c78 ^ uRam00000001833c2e68;
  uRam00000001833c2cd8 = 0xa243f17d;
  uVar5 = (uRam00000001833c2de8 ^ uVar8) + uRam00000001833c2e18 + 0xfb45fdfb;
  uVar9 = (uRam00000001833c2e18 ^ uVar10) + uRam00000001833c2de8 + 0xdd242fa3;
  uVar8 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833c2de8 ^ uVar8;
  uVar10 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833c2e18 ^ uVar10;
  uRam00000001833c2b20 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001833c2de8 + 0xdd242fa3) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2e18 + 0xfb45fdfb));
  uVar8 = ((uRam00000001833c2b20 ^ 0x362e45a95a) & 0x3fffffffff) * 0x8000;
  uRam00000001833c2d60 = (uRam00000001833c2d60 ^ uVar8) + 0x5d240e82 ^ 0x400833c2e0b13612;
  uRam00000001833c2bc8 = (uRam00000001833c2bc8 * 0x1c0169a11423b343 ^ uRam00000001833c2d60) + uVar8;
  uRam00000001833c2e00 = uRam00000001833c2bc8 ^ uRam00000001833c2d60;
  uRam00000001833c2be8 = 0x5d240e82;
  uRam00000001833c2d78 = func_0x00018e93e6c0(uRam00000001833c2ee8 ^ 0xffccff8c5bffe8c0);
  uVar8 = uRam00000001833c2d78 ^ 0xa243f17d;
  uRam00000001833c2cc0 = uRam00000001833c2c38 ^ uVar8 ^ 0x15c8c0e81;
  uRam00000001833c2d38 = (uRam00000001833c2d38 ^ uVar8) + 0x15c8c0e81 ^ 0x63de17dfeab09a1f;
  uRam00000001833c2b40 = (uRam00000001833c2b40 * 0x7df338e73a083357 ^ uRam00000001833c2d38) + uVar8;
  uRam00000001833c2c00 = uRam00000001833c2b40 ^ uRam00000001833c2d38;
  uRam00000001833c2c28 = 0x5c8c0e81;
  uVar8 = (uRam00000001833c2e78 ^ 0x84220aca) + uRam00000001833c2d50 + 0x84220aca;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2e78 ^ 0x84220aca;
  uVar10 = ((uRam00000001833c2d50 + uRam00000001833c2e78) * 0x2000 |
           uRam00000001833c2d50 + uRam00000001833c2e78 >> 0x33) ^ uRam00000001833c2d50;
  uRam00000001833c2df0 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) - uRam00000001833c2e78 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2d50 + 0x84220aca));
  uRam00000001833c2d60 = uRam00000001833c2e48 ^ uRam00000001833c2df0 ^ 0x29ef;
  uRam00000001833c2e18 = (uRam00000001833c2e18 ^ uRam00000001833c2df0) + 0x29ef ^ 0x4bb42b52527691a4
  ;
  uRam00000001833c2d80 =
       (uRam00000001833c2d80 * -0x6c09b88afb76a21f ^ uRam00000001833c2e18) + uRam00000001833c2df0;
  uRam00000001833c2e50 = uRam00000001833c2d80 ^ uRam00000001833c2e18;
  uRam00000001833c2da8 = 0x29ef;
  uVar8 = (~uRam00000001833c2d08 + 0x100000000) *
          ((uRam00000001833c2bb8 ^ 0xfb45fdfb) +
          (ulonglong)((uint)uRam00000001833c2bb8 & 0xfb45fdfb) * 2);
  uVar8 = (uVar8 | uRam00000001833c2e38) + (uVar8 & uRam00000001833c2e38);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2c58 =
       func_0x00018e93e6c0((uVar8 | 0x4ba0204) + (ulonglong)((uint)uVar8 & 0x4ba0204));
  uVar8 = (uRam00000001833c2c58 & 0x7fffffffffffffff) >> 1 |
          uRam00000001833c2c58 & 0x7fffffffffffffff;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001833c2c58 & 0x7fffffffffffffff;
  uRam00000001833c2e38 = (uRam00000001833c2e38 ^ uVar8) + 0x80982121 ^ 0x988e315d32a59e58;
  uRam00000001833c2e88 = (uRam00000001833c2e88 * 0x4b56bba946337ba3 ^ uRam00000001833c2e38) + uVar8;
  uRam00000001833c2b40 = uRam00000001833c2e88 ^ uRam00000001833c2e38;
  uRam00000001833c2bf8 = 0x80982121;
  uRam00000001833c2c60 = func_0x00018e93e6c0(uRam00000001833c2d00 + 0xff3bffd7b5ff2aff ^ 0x5a);
  uVar8 = uRam00000001833c2c60 - (uRam00000001833c2c60 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001833c2c60;
  uRam00000001833c2b80 = uRam00000001833c2bf8 ^ uVar8 ^ 0x601ea45426335ffa;
  uRam00000001833c2b68 = (uRam00000001833c2b68 * -0x463b649c2d8fd229 ^ uRam00000001833c2b80) + uVar8
  ;
  uRam00000001833c2b80 = uRam00000001833c2b68 ^ uRam00000001833c2b80;
  uRam00000001833c2bf8 = 0;
  uRam00000001833c2ef8 = func_0x00018e93e6c0(uRam00000001833c2de0 + 0xfff5ff8349ffddff ^ 0xd1);
  uVar8 = uRam00000001833c2ef8 - (uRam00000001833c2ef8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001833c2ef8;
  uRam00000001833c2c48 = uRam00000001833c2b78 ^ uVar8 ^ 0x29ef;
  uRam00000001833c2ba8 = (uRam00000001833c2ba8 ^ uVar8) + 0x29ef ^ 0xc2255f4d8b881489;
  uRam00000001833c2ee8 = (uRam00000001833c2ee8 * -0x3605b8a95ee08503 ^ uRam00000001833c2ba8) + uVar8
  ;
  uRam00000001833c2dc8 = uRam00000001833c2ee8 ^ uRam00000001833c2ba8;
  uRam00000001833c2e60 = 0x29ef;
  uVar8 = (uRam00000001833c2c18 ^ _UNK_1826785f0) + uRam00000001833c2e30 + 0xfb21b77f;
  uVar10 = (uRam00000001833c2e30 ^ _UNK_1826785f8) + uRam00000001833c2c18 + 0x7f03945a;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833c2c18 ^ _UNK_1826785f0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001833c2e30 ^ _UNK_1826785f8;
  uRam00000001833c2df8 =
       func_0x00018e93e6c0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001833c2c18 + 0x7f03945a) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833c2e30 + 0xfb21b77f));
  uRam00000001833c2eb8 =
       uRam00000001833c2eb8 ^ uRam00000001833c2df8 ^ 0x3f048d3e6317bbfe ^ 0xe31117c045435ff6;
  uRam00000001833c2ca8 =
       (uRam00000001833c2ca8 * -0x76d66196668a1831 ^ uRam00000001833c2eb8) +
       (uRam00000001833c2df8 ^ 0x3f048d3e6317bbfe);
  uRam00000001833c2e30 = uRam00000001833c2ca8 ^ uRam00000001833c2eb8;
  uRam00000001833c2ef0 = 0;
  uVar8 = ((uRam00000001833c2b10 ^ 0x84220aca) +
          (ulonglong)((uint)uRam00000001833c2b10 & 0x84220aca) * 2) * -uRam00000001833c2c10;
  uVar8 = (uVar8 | uRam00000001833c2cc8) + (uVar8 & uRam00000001833c2cc8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001833c2e10 =
       func_0x00018e93e6c0((uVar8 | 0x84220aca) + (ulonglong)((uint)uVar8 & 0x84220aca));
  uVar8 = (ulonglong)((~(uint)uRam00000001833c2e10 & 0x29c0) >> 6) * -0x12fc0b6fcd6c02c0;
  uRam00000001833c2d88 = uRam00000001833c2c10 ^ uVar8 ^ 0x29ef;
  uRam00000001833c2cd8 = (uRam00000001833c2cd8 ^ uVar8) + 0x29ef ^ 0xda9b459c60d9141a;
  uRam00000001833c2ce0 = (uRam00000001833c2ce0 * -0x587e529b71096019 ^ uRam00000001833c2cd8) + uVar8
  ;
  uRam00000001833c2cd8 = uRam00000001833c2ce0 ^ uRam00000001833c2cd8;
  uRam00000001833c2ed0 = 0x29ef;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7f51,0x15d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018e935283 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182676700 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dnt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18e8f01d0, runtime 6ffff65001d0) =====

void FUN_18e8f01d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018e8f021b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18266d278 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/bs$se; dnu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18e8f11e0, runtime 6ffff65011e0) =====

void FUN_18e8f11e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018e8f1269 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18266d838 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



