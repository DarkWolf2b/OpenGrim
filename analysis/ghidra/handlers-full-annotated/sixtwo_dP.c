// ===== Lsixtwo/dP; YO ()V (handler @ image 18dbc7c20, runtime 6ffff57d7c20) =====

void FUN_18dbc7c20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xaec1,0x1e8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dbc7ce1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182360550 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dP; _dbdd37ae9e60b3e40dfe5790eb5fd042 ()V (handler @ image 18dbee740, runtime 6ffff57fe740) =====

void FUN_18dbee740(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dbee828 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18236ae58 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dP; aoR (Lsixtwo/gO$tm;)V (handler @ image 18dbcd490, runtime 6ffff57dd490) =====

void FUN_18dbcd490(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xaec1,0x1e8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dbcd55a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182361f90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dP; aoS (Lsixtwo/gO$tn;)V (handler @ image 18dbd49b0, runtime 6ffff57e49b0) =====

void FUN_18dbd49b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xaec1,0x1e8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dbd4a71 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182364560 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dP; aoT ()Lnet/minecraft/class_1268; (handler @ image 18dbd96d0, runtime 6ffff57e96d0) =====

void FUN_18dbd96d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xaec1,0x1e8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dbd9791 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182365d60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dP; aoU (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18dbded70, runtime 6ffff57eed70) =====

undefined8 FUN_18dbded70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/dP; aoV (IJ)I (handler @ image 18dbdee00, runtime 6ffff57eee00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbdee00(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = (~uRam000000018337ec50 + 0x23707b051999470) *
          ((uRam000000018337eb68 ^ 0xe2aa3e41ad0690ad) +
          (uRam000000018337eb68 & 0x62aa3e41ad0690ad) * 2);
  uVar5 = (uVar5 | uRam000000018337ec78) + (uVar5 & uRam000000018337ec78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337ecb8 =
       func_0x00018dbea990((uVar5 | 0xe09d39f1fc9f04c2) + (uVar5 & 0xe09d39f1fc9f04c2));
  uRam000000018337ec80 =
       (uRam000000018337ec80 ^ uRam000000018337ecb8 ^ 0xe088384128242380) + 0xe2bf3ff179bdb7ef ^
       0x4de28e40ecb89a2;
  uRam000000018337eb88 =
       (uRam000000018337eb88 * 0x23f4cce98d3ddd05 ^ uRam000000018337ec80) +
       (uRam000000018337ecb8 ^ 0xe088384128242380);
  uRam000000018337ecd0 = uRam000000018337eb88 ^ uRam000000018337ec80;
  uRam000000018337ec10 = 0xe2bf3ff179bdb7ef;
  uVar5 = (~uRam000000018337ecc0 + 0x12578ccc05030581) *
          ((uRam000000018337eb60 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018337eb60 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018337eb58) + (uVar5 & uRam000000018337eb58);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337ec18 =
       func_0x00018dbea990((uVar5 | 0x12578ccc812126a5) + (uVar5 & 0x12578ccc812126a5));
  uRam000000018337ecd8 =
       (uRam000000018337ecd8 ^ uRam000000018337ec18) + 0xeda87333fafcfa80 ^ 0x4617dd6f2f66bb1;
  uRam000000018337ec78 =
       (uRam000000018337ec78 * 0x1baa84ac81b9a051 ^ uRam000000018337ecd8) + uRam000000018337ec18;
  uRam000000018337ebb0 = uRam000000018337ec78 ^ uRam000000018337ecd8;
  uRam000000018337ec00 = 0xeda87333fafcfa80;
  uRam000000018337ecb0 = func_0x00018dbea990(uRam000000018337eb48 ^ 0x1541f9cf259e8593);
  uVar5 = uRam000000018337ecb0 ^ 0x321a9e7dd5d87fff;
  uRam000000018337ebe0 = uRam000000018337ec10 ^ uVar5 ^ 0x321a9e7dd5d89eaf;
  uRam000000018337eca8 = (uRam000000018337eca8 ^ uVar5) + 0x321a9e7dd5d89eaf ^ 0x585d2e9e785bf34b;
  uRam000000018337ebc0 = (uRam000000018337ebc0 * -0xd713fae0a4d7be7 ^ uRam000000018337eca8) + uVar5;
  uRam000000018337ec08 = uRam000000018337ebc0 ^ uRam000000018337eca8;
  uRam000000018337eb68 = 0x321a9e7dd5d89eaf;
  uRam000000018337eb20 = func_0x00018dbea990(uRam000000018337ec10 ^ uVar5 ^ 0xe6d994f58c0a2ca4);
  uVar5 = uRam000000018337eb20 ^ 0xab91bc50cc0afb1f;
  uRam000000018337ecf0 = uRam000000018337ec58 ^ uVar5 ^ 0x7fff;
  uRam000000018337eb88 = (uRam000000018337eb88 ^ uVar5) + 0x7fff ^ 0xb7c1ee4f5f3a9123;
  uRam000000018337eba8 = (uRam000000018337eba8 * 0x7604a451a09e6143 ^ uRam000000018337eb88) + uVar5;
  uRam000000018337ece8 = uRam000000018337eba8 ^ uRam000000018337eb88;
  uRam000000018337eb58 = 0x7fff;
  uVar5 = (uRam000000018337eb28 ^ _UNK_182369690) + uRam000000018337eb18 + 0x84222325;
  uVar7 = (uRam000000018337eb18 ^ _UNK_182369698) + uRam000000018337eb28 + 0x75ecbe1a79cd1400;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337eb28 ^ _UNK_182369690;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337eb18 ^ _UNK_182369698;
  uRam000000018337ec18 =
       func_0x00018dbea990((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018337eb28 + 0x75ecbe1a79cd1400) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018337eb18 + 0x84222325));
  uVar5 = (uRam000000018337ec18 ^ 0x75ecbe1a60000000) >> 5 & 0xffffffffff000000;
  uRam000000018337ebd8 = (uRam000000018337ebd8 ^ uVar5) + 0x8a1341e58632ec00 ^ 0x2d0f464926e8c25a;
  uRam000000018337ebc8 = (uRam000000018337ebc8 * -0x7a339f946f981ff3 ^ uRam000000018337ebd8) + uVar5
  ;
  uRam000000018337ecb0 = uRam000000018337ebc8 ^ uRam000000018337ebd8;
  uRam000000018337ebc0 = 0x8a1341e58632ec00;
  uRam000000018337ec00 = func_0x00018dbea990(uRam000000018337ec40 ^ 0xe93d6a1c72ec29c3);
  uRam000000018337eb10 = uRam000000018337ecc0 ^ uRam000000018337ec00 ^ 0x36e8531094840e4e;
  uRam000000018337ec98 =
       (uRam000000018337ec98 ^ uRam000000018337ec00) + 0x36e8531094840e4e ^ 0xc976a6183595e598;
  uRam000000018337ec50 =
       (uRam000000018337ec50 * 0x69f3ac66e5625781 ^ uRam000000018337ec98) + uRam000000018337ec00;
  uRam000000018337ec58 = uRam000000018337ec50 ^ uRam000000018337ec98;
  uRam000000018337ec10 = 0x36e8531094840e4e;
  uRam000000018337ec58 = func_0x00018dbea990(uRam000000018337ecc8 + 0x56bd725894e457b5 ^ 0x89);
  uRam000000018337ebc8 =
       (uRam000000018337ebc8 ^ uRam000000018337ec58 * 0x76e3be77013d2c07) + 0x402913111884164f ^
       0x89decd5b99e92930;
  uRam000000018337ec90 =
       (uRam000000018337ec90 * -0x140c223e785f5089 ^ uRam000000018337ebc8) +
       uRam000000018337ec58 * 0x76e3be77013d2c07;
  uRam000000018337eb90 = uRam000000018337ec90 ^ uRam000000018337ebc8;
  uRam000000018337ec30 = 0x402913111884164f;
  uRam000000018337eba0 = func_0x00018dbea990(uRam000000018337eb38 ^ 0x22ff7c1affe10f);
  uRam000000018337eb60 = uRam000000018337eba0 * -0x2552254c6340d605;
  uRam000000018337eb48 = uRam000000018337eb48 ^ uRam000000018337eb60 ^ 0xaf931e0d5f9dee4d;
  uRam000000018337eca0 =
       (uRam000000018337eca0 * 0x291dfe3d64fa9711 ^ uRam000000018337eb48) + uRam000000018337eb60;
  uRam000000018337ec18 = uRam000000018337eca0 ^ uRam000000018337eb48;
  uRam000000018337ebc0 = 0;
  uVar5 = (uRam000000018337eb90 ^ 0x84225cda) + uRam000000018337ebd0 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337eb90 ^ 0x84225cda;
  uVar7 = ((uRam000000018337ebd0 + uRam000000018337eb90) * 0x2000 |
          uRam000000018337ebd0 + uRam000000018337eb90 >> 0x33) ^ uRam000000018337ebd0;
  uRam000000018337eb10 =
       func_0x00018dbea990((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018337eb90 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018337ebd0 + 0x84225cda));
  uVar5 = (uRam000000018337eb10 ^ 0x7fff) << 0x1b | uRam000000018337eb10 >> 0x25;
  uRam000000018337ebf8 = uRam000000018337eb98 ^ uVar5 ^ 0x7fff;
  uRam000000018337eb30 = (uRam000000018337eb30 ^ uVar5) + 0x7fff ^ 0xb88b657ea93c344e;
  uRam000000018337ecb0 = (uRam000000018337ecb0 * 0x774f43ccdc4d99f9 ^ uRam000000018337eb30) + uVar5;
  uRam000000018337eb68 = uRam000000018337ecb0 ^ uRam000000018337eb30;
  uRam000000018337ecf8 = 0x7fff;
  lVar2 = func_0x00018dbea990(0xf19abffdd440e01a);
  uVar5 = lVar2 * -0x714fe64e63b5f8a5 & 0x3fffffffffff;
  uRam000000018337ecf0 = (uRam000000018337ecf0 ^ uVar5) + 0x1d40c00e86424810 ^ 0xd802afc9667e28e1;
  uRam000000018337eb38 = (uRam000000018337eb38 * 0x4cb83479ebb00475 ^ uRam000000018337ecf0) + uVar5;
  uRam000000018337ebf8 = uRam000000018337eb38 ^ uRam000000018337ecf0;
  uRam000000018337ece8 = 0x1d40c00e86424810;
  uVar5 = (~uRam000000018337eb38 + 0x1d40c00e86424811) *
          ((uRam000000018337eb90 ^ 0xe2bf3ff1fd9f94ca) +
          (uRam000000018337eb90 & 0x62bf3ff1fd9f94ca) * 2);
  uVar5 = (uVar5 | uRam000000018337eba0) + (uVar5 & uRam000000018337eba0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337ec70 =
       func_0x00018dbea990((uVar5 | 0xffffffff7bdddcda) + (uVar5 & 0xffffffff7bdddcda));
  uVar5 = ~((uRam000000018337ec70 ^ 0xd8fde9977d34b6f0) * 2) >> 1 & 0xe2bf3ff179bdb7ef |
          0x80000000000037ef;
  uRam000000018337eb00 = uRam000000018337eb00 ^ uVar5 ^ 0x274c0d8434d01ba8;
  uRam000000018337eb18 = (uRam000000018337eb18 * -0x6f51349aa2f49aed ^ uRam000000018337eb00) + uVar5
  ;
  uRam000000018337ebf8 = uRam000000018337eb18 ^ uRam000000018337eb00;
  uRam000000018337ecf8 = 0;
  uVar5 = ((uRam000000018337eb18 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018337eb18 & 0x84225cda) * 2) * -uRam000000018337eba8;
  uVar5 = (uVar5 | uRam000000018337eb50) + (uVar5 & uRam000000018337eb50);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337eb28 =
       func_0x00018dbea990((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam000000018337eb28 >> 1;
  uRam000000018337eba8 = uRam000000018337ebd0 ^ uVar5 ^ 0x7fff;
  uRam000000018337eb38 = (uRam000000018337eb38 ^ uVar5) + 0x7fff ^ 0x3460138dab0fbee0;
  uRam000000018337ec60 = (uRam000000018337ec60 * -0x3093e13e59e9a741 ^ uRam000000018337eb38) + uVar5
  ;
  uRam000000018337eb48 = uRam000000018337ec60 ^ uRam000000018337eb38;
  uRam000000018337ecf8 = 0x7fff;
  uVar5 = func_0x00018dbea990(uRam000000018337ecc0 + 0xffe2ff8422ffddff ^ 0x15);
  uVar5 = uVar5 << 0x11 | uVar5 >> 0x2f;
  uRam000000018337ebf0 = uRam000000018337ebf0 ^ uVar5 ^ 0xedff39f3436a217;
  uRam000000018337ec48 = (uRam000000018337ec48 * 0x5a37942e24ca05df ^ uRam000000018337ebf0) + uVar5;
  uRam000000018337eca8 = uRam000000018337ec48 ^ uRam000000018337ebf0;
  uRam000000018337ec60 = 0;
  uVar5 = ((uRam000000018337ec88 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018337ec88 & 0x84225cda) * 2) * -uRam000000018337eb80;
  uVar5 = (uVar5 | uRam000000018337ec48) + (uVar5 & uRam000000018337ec48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337eb08 =
       func_0x00018dbea990((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam000000018337eb08 & 0x7fffffffffffffff;
  uRam000000018337eb90 = uRam000000018337ece8 ^ uVar5 ^ 0x7fff;
  uRam000000018337ec20 = (uRam000000018337ec20 ^ uVar5) + 0x7fff ^ 0x5af8804aa9bcc256;
  uRam000000018337ebe0 = (uRam000000018337ebe0 * 0x356422eea2d6d2c7 ^ uRam000000018337ec20) + uVar5;
  uRam000000018337ecc8 = 0x7fff;
  uVar5 = (~uRam000000018337ec40 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam000000018337ece8) +
          ((param_4 ^ 0x84222325) & uRam000000018337ece8) * 2);
  uVar5 = (uVar5 | uRam000000018337ec28) + (uVar5 & uRam000000018337ec28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337eb90 =
       func_0x00018dbea990((param_4 ^ 0x84225cda | uVar5) + (uVar5 & (param_4 ^ 0x84225cda)));
  uVar5 = param_4 ^ ((uRam000000018337eb90 ^ param_4) & 0xfffffffffff80000 | _UNK_180269590);
  uVar3 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar3;
  uRam000000018337ec20 = (uRam000000018337ec20 ^ uVar5) + uVar4 ^ 0xefaef4ecd8fb7e49;
  uRam000000018337ec00 = (uRam000000018337ec00 * -0x11fea7969df78803 ^ uRam000000018337ec20) + uVar5
  ;
  uRam000000018337eb68 = uRam000000018337ec00 ^ uRam000000018337ec20;
  uVar6 = (ulonglong)param_3;
  uVar7 = uVar4 ^ 0x84222325;
  uVar5 = ((uRam000000018337ec58 ^ uVar7) +
          (ulonglong)((uint)uRam000000018337ec58 & (uint)uVar7) * 2) *
          (uVar6 - uRam000000018337eca0);
  uVar5 = (uVar5 | uRam000000018337ec28) + (uVar5 & uRam000000018337ec28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337ec70 = uVar4;
  uRam000000018337ebd8 =
       func_0x00018dbea990((uVar7 ^ uVar6 | uVar5) +
                           (ulonglong)((uint)(uVar7 ^ uVar6) & (uint)uVar5));
  uVar6 = (uVar4 + uVar6) - (ulonglong)((param_3 & uVar3) * 2);
  uRam000000018337ec60 = (uRam000000018337ec60 ^ uRam000000018337ecd0) + uVar6 ^ 0x45773c0eec928de7;
  uRam000000018337eb40 =
       (uRam000000018337eb40 * 0x3f2c43fa102a723 ^ uRam000000018337ec60) + uRam000000018337ecd0;
  uRam000000018337ec80 = uRam000000018337eb40 ^ uRam000000018337ec60;
  uVar5 = uVar6 & 0xffffffff;
  uVar7 = (~uRam000000018337ebf8 + 0xd75b1462) *
          ((uRam000000018337ebc0 ^ 0x8b797a24) +
          (ulonglong)((uint)uRam000000018337ebc0 & 0x8b797a24) * 2);
  uVar7 = (uVar7 | uRam000000018337ebc8) + (uVar7 & uRam000000018337ebc8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018337eb28 = uVar5;
  uRam000000018337eb00 =
       func_0x00018dbea990((uVar7 | 0x5c226e45) + (ulonglong)((uint)uVar7 & 0x5c226e45));
  uVar7 = uRam000000018337eb00 >> 1 | uRam000000018337eb00;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018337eb00;
  uVar7 = uVar4 >> 1 | uVar4;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uVar4) * 0x1e53361bbb89da4f;
  uRam000000018337eba0 = (uRam000000018337eba0 ^ uVar7) + 0xd8004d60 ^ 0xb67f04cc7b1b76e6;
  uRam000000018337ec80 = (uRam000000018337ec80 * 0x247635de9b0db4e9 ^ uRam000000018337eba0) + uVar7;
  uRam000000018337ec88 = uRam000000018337ec80 ^ uRam000000018337eba0;
  uRam000000018337ecd8 = 0xd8004d60;
  uVar7 = (uRam000000018337eb70 ^ _UNK_1823696a0) + uRam000000018337ec48 + 0x84220a00;
  uVar4 = (uRam000000018337ec48 ^ _UNK_1823696a8) + uRam000000018337eb70 + 0x12047f40;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337eb70 ^ _UNK_1823696a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018337ec48 ^ _UNK_1823696a8;
  uRam000000018337eb20 =
       func_0x00018dbea990((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018337eb70 + 0x12047f40) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337ec48 + 0x84220a00));
  uVar7 = (uRam000000018337eb20 ^ 0x12047f65) << 0x33 |
          ((uRam000000018337eb20 ^ 0x12047f65) & 0x7fffffffffffffff) >> 0xd;
  uRam000000018337ecb0 = uRam000000018337eb50 ^ uVar7 ^ 0x1204a865;
  uRam000000018337ec00 = (uRam000000018337ec00 ^ uVar7) + 0x1204a865 ^ 0x9f29004987e9f121;
  uRam000000018337ec48 = (uRam000000018337ec48 * 0x2252ce6cdc96d87d ^ uRam000000018337ec00) + uVar7;
  uRam000000018337eca8 = uRam000000018337ec48 ^ uRam000000018337ec00;
  uRam000000018337eb60 = 0x1204a865;
  uRam000000018337ebe0 = func_0x00018dbea990(uRam000000018337ece8 ^ 0xaffc680004a46);
  uVar7 = uRam000000018337ebe0 & 0xffffffffffffffc0;
  uRam000000018337ec80 = uRam000000018337eb20 ^ uVar7 ^ 0x100002925;
  uRam000000018337eb18 = (uRam000000018337eb18 ^ uVar7) + 0x100002925 ^ 0x5db31a77d25f296f;
  uRam000000018337ec90 = (uRam000000018337ec90 * -0x281ce3dbbb6f0f7f ^ uRam000000018337eb18) + uVar7
  ;
  uRam000000018337eb40 = uRam000000018337ec90 ^ uRam000000018337eb18;
  uRam000000018337eca0 = 0x2925;
  uVar7 = (~uRam000000018337ec68 + 0x2167916d) *
          ((uRam000000018337ecd0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018337ecd0 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam000000018337ec40) + (uVar7 & uRam000000018337ec40);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018337ebf8 =
       func_0x00018dbea990((uVar7 | 0xa545b249) + (ulonglong)((uint)uVar7 & 0xa545b249));
  uVar7 = uRam000000018337ebf8 >> 1 | uRam000000018337ebf8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam000000018337ebf8;
  uRam000000018337ec60 = (uRam000000018337ec60 ^ uVar7) - 0x2167916c ^ 0xf22a16a65e404f04;
  uRam000000018337ec80 = (uRam000000018337ec80 * -0x47e07e0e28bbe457 ^ uRam000000018337ec60) + uVar7
  ;
  uRam000000018337ec70 = uRam000000018337ec80 ^ uRam000000018337ec60;
  uRam000000018337ebb0 = 0xde986e94;
  uRam000000018337ec20 = func_0x00018dbea990(uRam000000018337ec70 ^ 0xff9b00a2d3ffc263);
  uVar7 = uRam000000018337ec20 ^ 0x2167916c;
  uRam000000018337ec40 = uRam000000018337ebc8 ^ uVar7 ^ 0x2167ba91;
  uRam000000018337ecc8 = (uRam000000018337ecc8 ^ uVar7) + 0x2167ba91 ^ 0x2f1db5488aca7b1c;
  uRam000000018337ecb8 = (uRam000000018337ecb8 * 0x6a42faeb0372527 ^ uRam000000018337ecc8) + uVar7;
  uRam000000018337ebd0 = uRam000000018337ecb8 ^ uRam000000018337ecc8;
  uRam000000018337ec98 = 0x2167ba91;
  uVar7 = (~uRam000000018337ec78 + 0xde986e95) *
          ((uRam000000018337eb80 ^ 0xa54599b4) +
          (ulonglong)((uint)uRam000000018337eb80 & 0xa54599b4) * 2);
  uVar7 = (uVar7 | uRam000000018337ecd8) + (uVar7 & uRam000000018337ecd8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018337ec68 =
       func_0x00018dbea990((uVar7 | 0x7bddf720) + (ulonglong)((uint)uVar7 & 0x7bddf720));
  uRam000000018337eb00 = uRam000000018337ecd0 ^ uRam000000018337ec68 ^ 0x100002925;
  uRam000000018337ec60 =
       (uRam000000018337ec60 ^ uRam000000018337ec68) + 0x100002925 ^ 0x7bac38f3357d331d;
  uRam000000018337ebe8 =
       (uRam000000018337ebe8 * -0x59967c2f62762951 ^ uRam000000018337ec60) + uRam000000018337ec68;
  uRam000000018337eb50 = uRam000000018337ebe8 ^ uRam000000018337ec60;
  uRam000000018337ebe0 = 0x2925;
  uRam000000018337ebd8 = func_0x00018dbea990(uRam000000018337eca8 ^ 0xffd6003ca9004900);
  uRam000000018337ec60 =
       (uRam000000018337ec60 ^ uRam000000018337ebd8 * 0x5350b66325f7c75b) - 0x41f4095a ^
       0x55234a7edfa22f37;
  uRam000000018337ebc8 =
       (uRam000000018337ebc8 * 0x2485230cfe0fa789 ^ uRam000000018337ec60) +
       uRam000000018337ebd8 * 0x5350b66325f7c75b;
  uRam000000018337ec50 = uRam000000018337ebc8 ^ uRam000000018337ec60;
  uRam000000018337ece0 = 0xbe0bf6a6;
  uVar7 = (uRam000000018337ecb0 ^ _UNK_1823696b0) + uRam000000018337ec30 + 0x84220a00;
  uVar4 = (uRam000000018337ec30 ^ _UNK_1823696b8) + uRam000000018337ecb0 + 0x41f4095a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337ecb0 ^ _UNK_1823696b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018337ec30 ^ _UNK_1823696b8;
  uVar7 = func_0x00018dbea990((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018337ecb0 + 0x41f4095a)
                              ^ (uVar7 << 0x1d | uVar7 >> 0x23) -
                                (uRam000000018337ec30 + 0x84220a00));
  uVar4 = uVar7 & 0xfffffffffffffc00;
  uRam000000018337ebe8 = uRam000000018337eb08 ^ uVar4 ^ 0x41f4327f;
  uRam000000018337eb20 = (uVar7 ^ uVar4) + 0x41f4327f ^ 0x3de5983b795b777;
  uRam000000018337eb30 = (uRam000000018337eb30 * -0x2a05839f71c784f1 ^ uRam000000018337eb20) + uVar4
  ;
  uRam000000018337ec50 = uRam000000018337eb30 ^ uRam000000018337eb20;
  uRam000000018337eb70 = 0x41f4327f;
  uVar7 = (uRam000000018337ec98 ^ _UNK_1823696c0) + uRam000000018337ebc8 + 0xc5d6115a;
  uVar4 = (uRam000000018337ebc8 ^ _UNK_1823696c8) + uRam000000018337ec98 + 0xbe0bf6a6;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337ec98 ^ _UNK_1823696c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018337ebc8 ^ _UNK_1823696c8;
  uRam000000018337eb08 =
       func_0x00018dbea990((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018337ec98 + 0xbe0bf6a6) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337ebc8 + 0xc5d6115a));
  uVar7 = (uRam000000018337eb08 ^ 0x30f65283da53c85a) << 0x25 |
          (uRam000000018337eb08 ^ 0x30f65283da53c85a) >> 0x1b;
  uRam000000018337eb80 = uRam000000018337ec00 ^ uVar7 ^ 0x100002925;
  uRam000000018337eb20 = (uRam000000018337eb20 ^ uVar7) + 0x100002925 ^ 0xbb5d8bd30d1ed694;
  uRam000000018337ecf0 = (uRam000000018337ecf0 * 0x32888adafe175049 ^ uRam000000018337eb20) + uVar7;
  uRam000000018337eb18 = uRam000000018337ecf0 ^ uRam000000018337eb20;
  uRam000000018337eb38 = 0x2925;
  uVar7 = (uRam000000018337ecd0 ^ _UNK_1823696d0) + uRam000000018337ebd0 + 0x7bddf5fa;
  uVar4 = (uRam000000018337ebd0 ^ _UNK_1823696d8) + uRam000000018337ecd0 + 0xd8004d60;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337ecd0 ^ _UNK_1823696d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018337ebd0 ^ _UNK_1823696d8;
  uRam000000018337ec90 =
       func_0x00018dbea990((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018337ecd0 + 0xd8004d60) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337ebd0 + 0x7bddf5fa));
  uVar7 = uRam000000018337ec90 * 0x4e555c32291af6c9;
  uRam000000018337ecf0 = uRam000000018337ec10 ^ uVar7 ^ 0x1d800243f;
  uRam000000018337ec78 = (uRam000000018337ec78 ^ uVar7) + 0x1d800243f ^ 0x35966ca820a0effc;
  uRam000000018337eb40 = (uRam000000018337eb40 * -0x69ed2c5f9802c05d ^ uRam000000018337ec78) + uVar7
  ;
  uRam000000018337eb18 = uRam000000018337eb40 ^ uRam000000018337ec78;
  uRam000000018337ec50 = 0xd800243f;
  uRam000000018337ec38 = func_0x00018dbea990(uRam000000018337eb98 ^ 0xff7800a189ff2c95);
  uRam000000018337ebd8 =
       (uRam000000018337ebd8 ^ uRam000000018337ec38 & 0x1ffffffff) + 0x27ff9bbf ^ 0x363fc0d86225194;
  uRam000000018337eb30 =
       (uRam000000018337eb30 * 0x3db5ef9c0f32fc1b ^ uRam000000018337ebd8) +
       (uRam000000018337ec38 & 0x1ffffffff);
  uRam000000018337ec70 = uRam000000018337eb30 ^ uRam000000018337ebd8;
  uRam000000018337eb10 = 0x27ff9bbf;
  uVar7 = (~uRam000000018337eb00 + 0xb0008881) *
          ((uRam000000018337eb70 ^ 0xa3ddb89a) +
          (ulonglong)((uint)uRam000000018337eb70 & 0xa3ddb89a) * 2);
  uVar7 = (uVar7 | uRam000000018337eb98) + (uVar7 & uRam000000018337eb98);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018337eca0 =
       func_0x00018dbea990((uVar7 | 0x13dd301a) + (ulonglong)((uint)uVar7 & 0x13dd301a));
  uVar4 = uRam000000018337eca0 ^ 0x1b7fd0671a8b5780;
  uVar7 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  uRam000000018337ebe8 = uRam000000018337eb78 ^ uVar4 ^ 0xd800243f;
  uRam000000018337eb50 = (uRam000000018337eb50 ^ uVar4) + 0xd800243f ^ 0xe539d22e244f72bd;
  uRam000000018337ecf8 = (uRam000000018337ecf8 * 0x2488e167ccd32945 ^ uRam000000018337eb50) + uVar4;
  uRam000000018337eb38 = uRam000000018337ecf8 ^ uRam000000018337eb50;
  uRam000000018337ecb0 = 0xd800243f;
  uVar7 = (uRam000000018337eb50 ^ _UNK_1823696e0) + uRam000000018337ec50 + 0x5c22071a;
  uVar4 = (uRam000000018337ec50 ^ _UNK_1823696e8) + uRam000000018337eb50 + 0xd800243f;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337eb50 ^ _UNK_1823696e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018337ec50 ^ _UNK_1823696e8;
  uRam000000018337ebe8 =
       func_0x00018dbea990((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018337eb50 + 0xd800243f) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337ec50 + 0x5c22071a));
  uVar7 = uRam000000018337ebe8 >> 1 | uRam000000018337ebe8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uRam000000018337eb28 =
       (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
       uRam000000018337ebe8;
  uRam000000018337eca0 = uRam000000018337eca0 ^ uRam000000018337eb28 ^ 0xae2b3ef61ec5daf7;
  uRam000000018337ecb8 =
       (uRam000000018337ecb8 * -0x47f627325879e481 ^ uRam000000018337eca0) + uRam000000018337eb28;
  uRam000000018337ecd8 = uRam000000018337ecb8 ^ uRam000000018337eca0;
  uRam000000018337ec00 = 0;
  uVar7 = ((uRam000000018337ec38 ^ 0x84220a00) +
          (ulonglong)((uint)uRam000000018337ec38 & 0x84220a00) * 2) * -uRam000000018337eb98;
  uVar7 = (uVar7 | uRam000000018337ec18) + (uVar7 & uRam000000018337ec18);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018337eb10 =
       func_0x00018dbea990((uVar7 | 0x84220a00) + (ulonglong)((uint)uVar7 & 0x84220a00));
  uVar7 = uRam000000018337eb10 - (uRam000000018337eb10 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam000000018337eb10;
  uRam000000018337ec20 = uRam000000018337ec50 ^ uVar7 ^ 0x2925;
  uRam000000018337ebb0 = (uRam000000018337ebb0 ^ uVar7) + 0x2925 ^ 0xa5bc80088ff66d79;
  uRam000000018337eb80 = (uRam000000018337eb80 * 0x68e74cd59f772b23 ^ uRam000000018337ebb0) + uVar7;
  uRam000000018337ecb0 = uRam000000018337eb80 ^ uRam000000018337ebb0;
  uRam000000018337ec80 = 0x2925;
  uRam000000018337eb00 = func_0x00018dbea990(uRam000000018337ebf0 ^ 0x5ff83faffe115);
  uVar7 = (uRam000000018337eb00 & 3) << 0x26 | uRam000000018337eb00 >> 0x1a;
  uRam000000018337eb70 = (uRam000000018337eb70 ^ uVar7) + 0x2920 ^ 0x9bac4e5207a60a41;
  uRam000000018337ece0 = (uRam000000018337ece0 * -0xbf79b9c63860d3f ^ uRam000000018337eb70) + uVar7;
  uRam000000018337ec88 = uRam000000018337ece0 ^ uRam000000018337eb70;
  uRam000000018337eb90 = 0x2920;
  uVar7 = (~uRam000000018337ebd0 + 0x2921) *
          ((uRam000000018337ec60 ^ 0x7bddf5fa) +
          (ulonglong)((uint)uRam000000018337ec60 & 0x7bddf5fa) * 2);
  uVar7 = (uVar7 | uRam000000018337eb38) + (uVar7 & uRam000000018337eb38);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018337eb68 =
       func_0x00018dbea990((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda));
  uVar7 = (uRam000000018337eb68 ^ 0xffffd6df) & 0x3ffffffff;
  uRam000000018337ebf8 = uRam000000018337ebf8 ^ uVar7 ^ 0xb2b3943c9bd809d5;
  uRam000000018337ec90 = (uRam000000018337ec90 * 0x6be7ac83f36f336f ^ uRam000000018337ebf8) + uVar7;
  uRam000000018337eb18 = uRam000000018337ec90 ^ uRam000000018337ebf8;
  uRam000000018337eba8 = 0;
  uVar7 = ((uRam000000018337ecb0 ^ 0x84220a00) +
          (ulonglong)((uint)uRam000000018337ecb0 & 0x84220a00) * 2) * -uRam000000018337ecc8;
  uVar7 = (uVar7 | uRam000000018337ecd0) + (uVar7 & uRam000000018337ecd0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam000000018337eb58 =
       func_0x00018dbea990((uVar7 | 0x84220a00) + (ulonglong)((uint)uVar7 & 0x84220a00));
  uRam000000018337eba8 = uRam000000018337eb28 ^ uRam000000018337eb58 ^ 0x2925;
  uRam000000018337ec88 = (uRam000000018337ec88 ^ uRam000000018337eb58) + 0x2925 ^ 0x910f4ac6bbb9803;
  uRam000000018337ece0 =
       (uRam000000018337ece0 * 0x25f088488743eecf ^ uRam000000018337ec88) + uRam000000018337eb58;
  uRam000000018337ebc8 = uRam000000018337ece0 ^ uRam000000018337ec88;
  uRam000000018337ecf8 = 0x2925;
  uVar7 = (uRam000000018337ec68 ^ _UNK_1823696f0) + uRam000000018337ec70 + 0x53dff7a8;
  uVar4 = (uRam000000018337ec70 ^ _UNK_1823696f8) + uRam000000018337ec68 + 0xd7fdd48d;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337ec68 ^ _UNK_1823696f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018337ec70 ^ _UNK_1823696f8;
  uRam000000018337eb78 =
       func_0x00018dbea990((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018337ec68 + 0xd7fdd48d) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337ec70 + 0x53dff7a8));
  uVar7 = (uRam000000018337eb78 << 6 | uRam000000018337eb78 >> 0x3a) << 0x1a |
          (uRam000000018337eb78 & 0x3ffffffffffffff) >> 0x20;
  uRam000000018337ebd0 = uRam000000018337ebd0 ^ uVar7 ^ 0x8b2133cdc786bd63;
  uRam000000018337eba8 = (uRam000000018337eba8 * 0x6f243a045672fea7 ^ uRam000000018337ebd0) + uVar7;
  uRam000000018337ecb0 = uRam000000018337eba8 ^ uRam000000018337ebd0;
  uRam000000018337eb60 = 0;
  uRam000000018337ecd0 = func_0x00018dbea990(uRam000000018337ecc0 ^ 0xfff9ff7c000021f1);
  uVar7 = uRam000000018337ecd0 - (uRam000000018337ecd0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam000000018337ecd0;
  uRam000000018337ec68 = (uRam000000018337ec68 ^ uVar7) + 0x2925 ^ 0x1041ef7989e8a87a;
  uRam000000018337eb58 = (uRam000000018337eb58 * -0x3fb5083aa30ee91f ^ uRam000000018337ec68) + uVar7
  ;
  uRam000000018337ec10 = uRam000000018337eb58 ^ uRam000000018337ec68;
  uRam000000018337ec40 = 0x2925;
  uVar7 = uVar5 ^ 0x84222325 ^ uRam000000018337ebe0;
  lVar2 = (uVar5 ^ 0x84222325) + uRam000000018337ebf0;
  uVar4 = uVar7 + lVar2;
  uVar8 = (uRam000000018337ebf0 ^ 0x2925) + uRam000000018337ebe0 + 0x2925;
  uVar7 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar7;
  uVar4 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018337ebf0 ^ 0x2925;
  uRam000000018337eb40 =
       func_0x00018dbea990((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018337ebe0 + 0x2925) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar2);
  lVar2 = uVar5 - ((uint)uVar6 & 0x2925) * 2;
  uRam000000018337ec90 =
       (uRam000000018337ec90 ^ uRam000000018337eb40 & 0x7fffffffffffff) + lVar2 + 0x2925 ^
       0x6ec2e9f0fce1db0c;
  uRam000000018337ec70 =
       (uRam000000018337ec70 * -0x4889f652dfdedeb7 ^ uRam000000018337ec90) +
       (uRam000000018337eb40 & 0x7fffffffffffff);
  uRam000000018337ec10 = uRam000000018337ec70 ^ uRam000000018337ec90;
  uRam000000018337eb38 = lVar2 + 0x2925U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xaec1,0x1e8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dbe11aa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182367830 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dP; aoW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18dbeaa20, runtime 6ffff57faa20) =====

void FUN_18dbeaa20(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018dbeaa6b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182369880 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dP; aoX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18dbeba30, runtime 6ffff57fba30) =====

void FUN_18dbeba30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dbebab9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182369e40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



