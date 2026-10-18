// ===== Lsixtwo/fR; _be8876597688c4e993e11acafd73b0dc ()V (handler @ image 18a91a090, runtime 6ffff252a090) =====

void FUN_18a91a090(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a91a178 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c5d08 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fR; aWH ()Lsixtwo/ct; (handler @ image 18a8e0e70, runtime 6ffff24f0e70) =====

void FUN_18a8e0e70(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018a8e0e90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818bcb40 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fR; aWI ()Lsixtwo/cu; (handler @ image 18a8e1070, runtime 6ffff24f1070) =====

void FUN_18a8e1070(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018a8e1090 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818bcc20 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fR; aWJ ()Lsixtwo/cu; (handler @ image 18a8e1270, runtime 6ffff24f1270) =====

void FUN_18a8e1270(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018a8e1290 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818bcd00 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fR; aWK ()Lsixtwo/cC; (handler @ image 18a8e1470, runtime 6ffff24f1470) =====

void FUN_18a8e1470(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018a8e1490 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818bcde0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fR; aWL ([B)Ljava/lang/String; (handler @ image 18a8e1670, runtime 6ffff24f1670) =====

void FUN_18a8e1670(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018a8e1710 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818bd000 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fR; aWM (IJ)I (handler @ image 18a90aba0, runtime 6ffff251aba0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a90aba0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar4 = (~uRam00000001832615f8 + 0x1f3119cac1ec1c68) *
          ((uRam0000000183261430 ^ 0x831dbf8fc6e88d73) +
          (uRam0000000183261430 & 0x31dbf8fc6e88d73) * 2);
  uVar4 = (uVar4 | uRam0000000183261378) + (uVar4 & uRam0000000183261378);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832616a0 =
       func_0x00018a9162e0((uVar4 | 0x9c2ca64507049114) + (uVar4 & 0x9c2ca64507049114));
  uRam0000000183261318 =
       (uRam0000000183261318 ^ uRam00000001832616a0 & 0x831dbf8f42caae56) + 0x9f3dbfcfc3eebe77 ^
       0xaedca2481e6a77c0;
  uRam0000000183261610 =
       (uRam0000000183261610 * 0x643bbd40d7f36a63 ^ uRam0000000183261318) +
       (uRam00000001832616a0 & 0x831dbf8f42caae56);
  uRam0000000183261398 = uRam0000000183261610 ^ uRam0000000183261318;
  uRam0000000183261400 = 0x9f3dbfcfc3eebe77;
  uRam00000001832615d0 = func_0x00018a9162e0(uRam0000000183261678 ^ 0xeeb0523bc0df0b29);
  uVar4 = (uRam00000001832615d0 ^ 0x47e4f77e7065afc) << 0x1c |
          (uRam00000001832615d0 ^ 0x47e4f77e7065afc) >> 0x24;
  uRam0000000183261678 = (uRam0000000183261678 ^ uVar4) + 0x525ee076c1de93e5 ^ 0x3071206c74214ba1;
  uRam00000001832615a8 = (uRam00000001832615a8 * -0x34f94bdc84fc8997 ^ uRam0000000183261678) + uVar4
  ;
  uRam0000000183261470 = uRam00000001832615a8 ^ uRam0000000183261678;
  uRam00000001832616f0 = 0x525ee076c1de93e5;
  uVar4 = (~uRam0000000183261598 + 0xaf5ddd23960340f5) *
          ((uRam00000001832615f8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832615f8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183261620) + (uVar4 & uRam0000000183261620);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832614c0 =
       func_0x00018a9162e0((uVar4 | 0xaf5ddd23122163d1) + (uVar4 & 0xaf5ddd23122163d1));
  uRam00000001832614e0 = uRam00000001832614e0 + 0x50a222dc69fcbf0c ^ 0x6f584d1fff037d59;
  uRam0000000183261628 = uRam0000000183261630 * -0x655daf17380f74b5;
  uRam0000000183261630 = uRam0000000183261628 ^ uRam00000001832614e0;
  uRam00000001832613f8 = 0x50a222dc69fcbf0c;
  uVar4 = (uRam0000000183261418 ^ _UNK_1818c4560) + uRam00000001832616b8 + 0xaf5ddd231221e3d6;
  uVar9 = (uRam00000001832616b8 ^ _UNK_1818c4568) + uRam0000000183261418 + 0x50a222dc69fcbf0c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183261418 ^ _UNK_1818c4560;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832616b8 ^ _UNK_1818c4568;
  uRam0000000183261358 =
       func_0x00018a9162e0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183261418 + 0x50a222dc69fcbf0c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832616b8 + 0xaf5ddd231221e3d6));
  uVar4 = ~uRam0000000183261358;
  uRam0000000183261428 = uRam00000001832616e0 ^ uVar4 ^ 0x7fff;
  uRam0000000183261578 = (uRam0000000183261578 ^ uVar4) + 0x7fff ^ 0x87ebbf3e4856824e;
  uRam0000000183261598 =
       (uRam00000001832616b0 * -0x209f5cd85b4510e5 ^ uRam0000000183261578) + uVar4 ^
       uRam0000000183261578;
  uRam00000001832616b0 = 0x7fff;
  uVar4 = (uRam00000001832616f0 ^ _UNK_1818c4570) + uRam0000000183261638 + 0x84222325;
  uVar9 = (uRam0000000183261638 ^ _UNK_1818c4578) + uRam00000001832616f0 + 0x6023c75a5890d30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832616f0 ^ _UNK_1818c4570;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183261638 ^ _UNK_1818c4578;
  uRam00000001832616e0 =
       func_0x00018a9162e0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001832616f0 + 0x6023c75a5890d30) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183261638 + 0x84222325));
  uVar4 = uRam0000000183261368 - (uRam0000000183261368 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183261368;
  uRam0000000183261670 = (uRam0000000183261670 ^ uVar4) + 0xf9fdc38a5a76f2d0 ^ 0xe15ac91419a9a645;
  uRam00000001832614a0 = (uRam00000001832614a0 * -0x2a2732076d3b85a3 ^ uRam0000000183261670) + uVar4
  ;
  uRam0000000183261660 = uRam00000001832614a0 ^ uRam0000000183261670;
  uRam0000000183261590 = 0xf9fdc38a5a76f2d0;
  uVar4 = (~uRam00000001832613c8 + 0x6023c75a5890d31) *
          ((uRam00000001832614f0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832614f0 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183261388) + (uVar4 & uRam0000000183261388);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183261568 =
       func_0x00018a9162e0((uVar4 | 0x6023c7521ab51ea) + (uVar4 & 0x6023c7521ab51ea));
  uVar4 = uRam0000000183261568 ^ 0x6023c75a5890000;
  uRam0000000183261600 = uRam0000000183261400 ^ uVar4 ^ 0x6023c75a5898d2f;
  uRam0000000183261488 = (uRam0000000183261488 ^ uVar4) + 0x6023c75a5898d2f ^ 0xa913bfffb78cf57a;
  uRam0000000183261550 = (uRam0000000183261550 * -0x25c13d597fc91269 ^ uRam0000000183261488) + uVar4
  ;
  uRam0000000183261650 = uRam0000000183261550 ^ uRam0000000183261488;
  uRam00000001832614c0 = 0x6023c75a5898d2f;
  uVar4 = (~uRam0000000183261628 + 0xf9fdc38a5a76f2d1) *
          ((uRam0000000183261580 ^ 0x6023c7521abae0a) +
          (uRam0000000183261580 & 0x6023c7521abae0a) * 2);
  uVar4 = (uVar4 | uRam00000001832613a0) + (uVar4 & uRam00000001832613a0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183261660 =
       func_0x00018a9162e0((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = uRam0000000183261660 & 0x6023c75a5898d2f;
  uRam0000000183261408 = uRam00000001832615c0 ^ uVar4 ^ 0x7fff;
  uRam00000001832613c0 = (uRam00000001832613c0 ^ uVar4) + 0x7fff ^ 0xd27807113ae56243;
  uRam00000001832615e8 = (uRam00000001832615e8 * -0x2dfbe766dfd75eb3 ^ uRam00000001832613c0) + uVar4
  ;
  uRam0000000183261368 = uRam00000001832615e8 ^ uRam00000001832613c0;
  uRam00000001832616d0 = 0x7fff;
  uRam00000001832613a8 = func_0x00018a9162e0(uRam0000000183261418 ^ 0x831d640e625efeb9);
  uVar4 = uRam00000001832613a8 << 7 | uRam00000001832613a8 >> 0x39;
  uRam00000001832615b0 = uRam0000000183261328 ^ uVar4 ^ 0x85e4a385b62dbe77;
  uRam00000001832613c0 = (uRam00000001832613c0 ^ uVar4) + 0x85e4a385b62dbe77 ^ 0xce44f9589dd422d6;
  uRam0000000183261440 = (uRam0000000183261440 * 0x4270182f9978481 ^ uRam00000001832613c0) + uVar4;
  uRam00000001832615e0 = uRam0000000183261440 ^ uRam00000001832613c0;
  uRam00000001832616e8 = 0x85e4a385b62dbe77;
  uVar4 = (~uRam0000000183261400 + 0x7a1b5c7a49d2c189) *
          ((uRam00000001832615e8 ^ 0x85e4a385320f9d52) +
          (uRam00000001832615e8 & 0x5e4a385320f9d52) * 2);
  uVar4 = (uVar4 | uRam00000001832614b0) + (uVar4 & uRam00000001832614b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183261560 =
       func_0x00018a9162e0((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = ~uRam0000000183261560 & 0x85e4a385b62dbe77;
  uRam0000000183261440 = uRam00000001832616f8 ^ uVar4 ^ 0x7fff;
  uRam00000001832614b0 = (uRam00000001832614b0 ^ uVar4) + 0x7fff ^ 0xff1eb6186f540872;
  uRam0000000183261400 = (uRam0000000183261400 * -0xa16fdc134617f19 ^ uRam00000001832614b0) + uVar4;
  uRam00000001832614e0 = uRam0000000183261400 ^ uRam00000001832614b0;
  uRam0000000183261438 = 0x7fff;
  uRam00000001832616b0 = func_0x00018a9162e0(uRam00000001832614a8 ^ 0xa705dc865754ed18);
  uVar9 = uRam00000001832616b0 ^ 0xdf7fffffc3febff7;
  uVar4 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar9 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar9;
  uRam00000001832613e0 = uRam00000001832613d0 ^ uVar9 ^ 0xf19ca04685cd525c;
  uRam0000000183261618 = (uRam0000000183261618 ^ uVar9) + 0xf19ca04685cd525c ^ 0x79a9520f89a938a6;
  uRam0000000183261340 = (uRam0000000183261340 * -0x3e5f6d42e8d2069 ^ uRam0000000183261618) + uVar9;
  uRam00000001832614f8 = uRam0000000183261340 ^ uRam0000000183261618;
  uRam0000000183261328 = -0xe635fb97a32ada4;
  uVar4 = (uRam0000000183261450 ^ _UNK_1818c4580) + uRam0000000183261410 + 0x9f3dbfcf47cc9d52;
  uVar9 = (uRam0000000183261410 ^ _UNK_1818c4588) + uRam0000000183261450 + 0x525ee076c1de93e5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183261450 ^ _UNK_1818c4580;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183261410 ^ _UNK_1818c4588;
  uRam0000000183261640 =
       func_0x00018a9162e0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183261450 + 0x525ee076c1de93e5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183261410 + 0x9f3dbfcf47cc9d52));
  uRam00000001832616d8 =
       (uRam00000001832616d8 ^ uRam0000000183261640) + 0x121ca046c1ce9265 ^ 0x34a6d95536379dba;
  uRam0000000183261380 =
       (uRam0000000183261380 * -0x17b2ae50ca135327 ^ uRam00000001832616d8) + uRam0000000183261640;
  uRam0000000183261470 = uRam0000000183261380 ^ uRam00000001832616d8;
  uRam0000000183261630 = 0x121ca046c1ce9265;
  uRam00000001832614b8 = func_0x00018a9162e0(uRam0000000183261368 + 0x2fdebe88a2bfec9f ^ 0x8a);
  uRam00000001832615c0 =
       (uRam00000001832615c0 ^ uRam00000001832614b8 * 0x462f701ac6586455) + 0x60c240303c114188 ^
       0x4c6eab5a82359123;
  uRam0000000183261548 =
       (uRam0000000183261548 * 0x1ea96506f5a5849 ^ uRam00000001832615c0) +
       uRam00000001832614b8 * 0x462f701ac6586455;
  uRam0000000183261540 = uRam0000000183261548 ^ uRam00000001832615c0;
  uRam0000000183261640 = 0x60c240303c114188;
  uRam00000001832615a8 = func_0x00018a9162e0(uRam0000000183261378 + 0xffa4007c3a0021ff ^ 0x16);
  uVar4 = (uRam00000001832615a8 << 0x28 | uRam00000001832615a8 >> 0x18) ^ 0x7fff;
  uRam00000001832613f8 = uRam0000000183261620 ^ uVar4 ^ 0x7fff;
  uRam00000001832614f0 = (uRam00000001832614f0 ^ uVar4) + 0x7fff ^ 0xd889b95885da65d9;
  uRam0000000183261358 = (uRam0000000183261358 * -0x366398614b13652d ^ uRam00000001832614f0) + uVar4
  ;
  uRam00000001832616d8 = uRam0000000183261358 ^ uRam00000001832614f0;
  uRam0000000183261588 = 0x7fff;
  uRam0000000183261490 = func_0x00018a9162e0(uRam00000001832615b0 + 0x5c007c59ffe1ff ^ 0x2d);
  uVar4 = uRam0000000183261490 << 0x28 | uRam0000000183261490 >> 0x18;
  uVar9 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4) &
          0x7fffffffffffffff;
  uRam0000000183261690 =
       (uRam0000000183261478 ^ uVar4 ^ 0x7fff ^ uVar4) + 0x7fff ^ 0xdd3020ed75c545ce;
  uRam0000000183261610 = (uRam0000000183261610 * 0x3e01e3017acb78e5 ^ uRam0000000183261690) + uVar4;
  uRam0000000183261440 = uRam0000000183261610 ^ uRam0000000183261690;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_1818c4590,_UNK_1800170c0);
  uRam0000000183261518 = 0x7fff;
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar9 + uRam0000000183261318;
  if (auVar7._4_4_ < 0) {
    uVar4 = uRam0000000183261370 ^ uVar9;
  }
  uRam0000000183261398 = func_0x00018a9162e0(SUB161(auVar6 ^ _UNK_1818c4590,5) ^ uVar4);
  uVar4 = uRam0000000183261398 << 3 | uRam0000000183261398 >> 0x3d;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001832615c0 = (ulonglong)uVar2;
  uRam00000001832615b0 = (uRam00000001832615b0 ^ uVar4) + uRam00000001832615c0 ^ 0x119ef8c6f22963d4;
  uRam00000001832613c0 = (uRam00000001832613c0 * -0x316fe8d32e8b5799 ^ uRam00000001832615b0) + uVar4
  ;
  uRam0000000183261450 = uRam00000001832613c0 ^ uRam00000001832615b0;
  uVar4 = uRam00000001832615c0 ^ 0x84222325 ^ uRam0000000183261380;
  uVar9 = param_3 ^ uRam00000001832614a8;
  lVar5 = (uRam00000001832615c0 ^ 0x84222325) + uRam00000001832614a8;
  lVar3 = uRam0000000183261380 + param_3;
  uVar8 = uVar4 + lVar5;
  uVar10 = uVar9 + lVar3;
  uVar4 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar4;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar9;
  uRam0000000183261468 =
       func_0x00018a9162e0((uVar9 << 0x1d | uVar9 >> 0x23) - lVar3 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar2 = uVar2 ^ param_3;
  uVar9 = (ulonglong)uVar2;
  uRam00000001832614e0 =
       (uRam00000001832614e0 ^ uRam00000001832614f8 & 0x3fffffffffff) + uVar9 ^ 0xc1267e4328ccf9d2;
  uRam0000000183261388 =
       (uRam0000000183261388 * 0x4600bd8c73d7f0db ^ uRam00000001832614e0) +
       (uRam00000001832614f8 & 0x3fffffffffff);
  uRam0000000183261310 = uRam0000000183261388 ^ uRam00000001832614e0;
  uRam00000001832615b8 = uVar9;
  uVar4 = func_0x00018a9162e0(uRam00000001832616f8 ^ 0xffc9ff4e91fff03d);
  uRam0000000183261448 = (uRam0000000183261448 ^ uVar4) + 0xd73f7ffb ^ 0xe4abefc167ddb90b;
  uRam0000000183261328 = (uRam0000000183261328 * -0x6f91337403fa4a87 ^ uRam0000000183261448) + uVar4
  ;
  uRam00000001832614a8 = uRam0000000183261328 ^ uRam0000000183261448;
  uRam0000000183261498 = 0xd73f7ffb;
  uVar4 = (~uRam00000001832614f0 + 0xaa431a46) *
          ((uRam0000000183261610 ^ 0x3d9a756a) +
          (ulonglong)((uint)uRam0000000183261610 & 0x3d9a756a) * 2);
  uVar4 = (uVar4 | uRam00000001832615b0) + (uVar4 & uRam00000001832615b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lRam0000000183261338 =
       func_0x00018a9162e0((uVar4 | 0x97d96f2f) + (ulonglong)((uint)uVar4 & 0x97d96f2f));
  uVar4 = (ulonglong)
          (~((int)lRam0000000183261338 * -0x60000000 |
            (uint)((ulonglong)(lRam0000000183261338 * -0x58d642ccb7121d0b) >> 0x23)) & 0xb9b8564f);
  uRam0000000183261320 = (uRam0000000183261320 ^ uVar4) + 0x13fb4c0a ^ 0x4e0de7d79c100e26;
  uRam00000001832613f8 = (uRam00000001832613f8 * 0x34138567a885ee6f ^ uRam0000000183261320) + uVar4;
  uRam0000000183261410 = uRam00000001832613f8 ^ uRam0000000183261320;
  uRam0000000183261650 = 0x13fb4c0a;
  uRam00000001832616b8 = func_0x00018a9162e0(uRam00000001832614b0 ^ 0xa700347dff65f9);
  uVar4 = (uRam0000000183261310 ^ uRam00000001832616b8 ^ 0xd0b8ca9b) - 0xd0b8ca9b;
  uRam0000000183261310 = uVar4 ^ 0x257dab2855f0645d;
  uRam0000000183261568 =
       (uRam0000000183261568 * 0x72c30d1e9cae2a39 ^ uRam0000000183261310) +
       (uRam00000001832616b8 ^ 0xd0b8ca9b);
  uRam0000000183261570 = uRam0000000183261568 ^ uRam0000000183261310;
  uRam0000000183261478 = 0x2f473565;
  uRam0000000183261370 = func_0x00018a9162e0(uVar4 ^ 0xdac6ab04c1f0f1e1);
  uRam00000001832616e8 = uRam0000000183261610 ^ uRam0000000183261370 ^ 0xd0b8fca5;
  uRam0000000183261498 =
       (uRam0000000183261498 ^ uRam0000000183261370) + 0xd0b8fca5 ^ 0x699dc3365467768;
  uRam00000001832615c8 =
       (uRam00000001832615c8 * 0x190b8359b11dc78b ^ uRam0000000183261498) + uRam0000000183261370;
  uRam00000001832616e0 = uRam00000001832615c8 ^ uRam0000000183261498;
  uRam00000001832614c0 = 0xd0b8fca5;
  uRam0000000183261390 = func_0x00018a9162e0(uRam0000000183261438 ^ 0x1a00475affcaea);
  uVar4 = (ulonglong)(~(uint)uRam0000000183261390 & 0xd0b8fca5);
  uRam00000001832613f8 = uRam0000000183261470 ^ uVar4 ^ 0x10000320a;
  uRam00000001832616b8 = (uRam00000001832616b8 ^ uVar4) + 0x10000320a ^ 0x7447a7b88fc04b44;
  uRam0000000183261420 = (uRam0000000183261420 * 0x33409e3a836c7877 ^ uRam00000001832616b8) + uVar4;
  uRam00000001832616f8 = uRam0000000183261420 ^ uRam00000001832616b8;
  uRam0000000183261328 = 0x320a;
  uVar4 = (~uRam0000000183261680 + 0x512ad807) * 0x8422552f;
  uVar4 = (uVar4 | uRam00000001832615a8) + (uVar4 & uRam00000001832615a8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183261538 =
       func_0x00018a9162e0((uVar4 | 0xd508fb23) + (ulonglong)((uint)uVar4 & 0xd508fb23));
  uVar4 = ((uRam0000000183261538 ^ 0x512ad806) & 0x1fffffffffffff) * 0x586ed9af855b1441;
  uRam00000001832615c8 = (uRam00000001832615c8 ^ uVar4) - 0x512ad806 ^ 0xe52bce2f8ff21c8c;
  uRam0000000183261558 = (uRam0000000183261558 * 0x20213b90ec8c250d ^ uRam00000001832615c8) + uVar4;
  uRam0000000183261320 = uRam0000000183261558 ^ uRam00000001832615c8;
  uRam00000001832614f8 = uRam00000001832614d0 ^ 0xffffffffaed527fa;
  uRam0000000183261328 = 0xaed527fa;
  uVar4 = (uRam0000000183261368 ^ _UNK_1818c45a0) + uRam0000000183261318 + 0x8422112f;
  uVar8 = (uRam0000000183261318 ^ _UNK_1818c45a8) + uRam0000000183261368 + 0x512ad806;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183261368 ^ _UNK_1818c45a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183261318 ^ _UNK_1818c45a8;
  uRam0000000183261568 =
       func_0x00018a9162e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183261368 + 0x512ad806) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183261318 + 0x8422112f));
  uVar4 = (uRam0000000183261568 ^ 0xfdd89dda000) & 0xffffffffffffe000;
  uRam0000000183261690 = uRam0000000183261688 ^ uVar4 ^ 0x512b0a10;
  uRam0000000183261560 = (uRam0000000183261560 ^ uVar4) + 0x512b0a10 ^ 0x832c87e55a431a8e;
  uRam00000001832614b8 = (uRam00000001832614b8 * 0x7b3ed6f7e08068f ^ uRam0000000183261560) + uVar4;
  uRam0000000183261680 = uRam00000001832614b8 ^ uRam0000000183261560;
  uRam00000001832616b8 = 0x512b0a10;
  uRam0000000183261468 = func_0x00018a9162e0(uRam00000001832614f0 ^ 0xfff9ffba39003b1c);
  uVar4 = uRam0000000183261468 >> 1 | uRam0000000183261468;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam0000000183261468;
  uRam0000000183261340 = uRam0000000183261630 ^ uVar4 ^ 0x10000320a;
  uRam0000000183261670 = (uRam0000000183261670 ^ uVar4) + 0x10000320a ^ 0xbe675bc60b3c59ee;
  uRam0000000183261688 = (uRam0000000183261688 * -0x517fdea0a244e891 ^ uRam0000000183261670) + uVar4
  ;
  uRam0000000183261300 = uRam0000000183261688 ^ uRam0000000183261670;
  uRam0000000183261328 = 0x320a;
  uRam0000000183261380 = func_0x00018a9162e0(uRam0000000183261628 + 0x17ffb4c1ff8eff ^ 0xff);
  uVar4 = uRam0000000183261380 * 0x29ce710d319209b1;
  uVar4 = (uVar4 << 0x2e | uVar4 >> 0x12) << 3 | (uVar4 & 0x3ffff) >> 0xf;
  uRam0000000183261318 = uRam00000001832615b8 ^ uVar4 ^ 0x49935b73;
  uRam0000000183261308 = (uRam0000000183261308 ^ uVar4) + 0x49935b73 ^ 0x343d7b5e7bc63f64;
  uRam0000000183261518 = (uRam0000000183261518 * 0x5684afdb09e94555 ^ uRam0000000183261308) + uVar4;
  uRam0000000183261658 = uRam0000000183261518 ^ uRam0000000183261308;
  uRam0000000183261698 = 0x49935b73;
  uVar4 = (~uRam0000000183261390 + 0xb66cd698) *
          ((uRam0000000183261678 ^ 0xcdb17856) +
          (ulonglong)((uint)uRam0000000183261678 & 0xcdb17856) * 2);
  uVar4 = (uVar4 | uRam00000001832615f0) + (uVar4 & uRam00000001832615f0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832616d0 =
       func_0x00018a9162e0((uVar4 | 0x7bddaec1) + (ulonglong)((uint)uVar4 & 0x7bddaec1));
  uRam0000000183261508 = uRam0000000183261638 ^ uRam00000001832616d0 ^ 0x10000320a;
  uRam00000001832614f0 =
       (uRam00000001832614f0 ^ uRam00000001832616d0) + 0x10000320a ^ 0x437fefdfa96c0816;
  uRam00000001832616f0 =
       (uRam00000001832616f0 * -0x2c5158bb2e97b637 ^ uRam00000001832614f0) + uRam00000001832616d0;
  uRam00000001832613c8 = uRam00000001832616f0 ^ uRam00000001832614f0;
  uRam0000000183261558 = 0x320a;
  uRam00000001832614b8 = func_0x00018a9162e0(uRam0000000183261570 ^ 0x100040cbffa563);
  uVar4 = uRam00000001832614b8 ^ 0xc40433f1;
  uRam0000000183261300 = uRam00000001832615c8 ^ uVar4 ^ 0xeb3acc05;
  uRam00000001832614e8 = (uRam00000001832614e8 ^ uVar4) + 0xeb3acc05 ^ 0xbc4e86aa8e448556;
  uRam0000000183261528 = (uRam0000000183261528 * -0x189ea70b252d392b ^ uRam00000001832614e8) + uVar4
  ;
  uRam0000000183261548 = uRam0000000183261528 ^ uRam00000001832614e8;
  uRam0000000183261318 = 0xeb3acc05;
  uVar4 = (~uRam0000000183261508 + 0x13fb4c0b) *
          ((uRam0000000183261580 ^ 0x531d5cde) +
          (ulonglong)((uint)uRam0000000183261580 & 0x531d5cde) * 2);
  uVar4 = (uVar4 | uRam00000001832615d0) + (uVar4 & uRam00000001832615d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183261310 =
       func_0x00018a9162e0((uVar4 | 0x40e610d4) + (ulonglong)((uint)uVar4 & 0x40e610d4));
  uRam0000000183261630 =
       (uRam0000000183261630 ^ uRam0000000183261310) + 0xc4c433f1 ^ 0x329825e75c192599;
  uRam0000000183261360 =
       (uRam0000000183261360 * 0x18a85059e39e8aa7 ^ uRam0000000183261630) + uRam0000000183261310;
  uRam0000000183261420 = uRam0000000183261360 ^ uRam0000000183261630;
  uRam0000000183261418 = 0xc4c433f1;
  uVar4 = (~uRam0000000183261450 + 0x13fb4c0b) *
          ((uRam00000001832615f0 ^ 0x531d5cde) +
          (ulonglong)((uint)uRam00000001832615f0 & 0x531d5cde) * 2);
  uVar4 = (uVar4 | uRam0000000183261440) + (uVar4 & uRam0000000183261440);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832616f0 =
       func_0x00018a9162e0((uVar4 | 0x40e610d4) + (ulonglong)((uint)uVar4 & 0x40e610d4));
  uRam0000000183261688 =
       (uRam0000000183261688 ^ uRam00000001832616f0 & 0x7fffffffffffffff) + 0x133b4c0a ^
       0x8352a1a196b0225c;
  uRam00000001832615e8 =
       (uRam00000001832615e8 * -0xc9f0af8140b0ca7 ^ uRam0000000183261688) +
       (uRam00000001832616f0 & 0x7fffffffffffffff);
  uRam00000001832613e0 = uRam00000001832615e8 ^ uRam0000000183261688;
  uRam0000000183261528 = 0x133b4c0a;
  uVar4 = (uRam0000000183261368 ^ _UNK_1818c45b0) + uRam00000001832613b8 + 0x40e610d4;
  uVar8 = (uRam00000001832613b8 ^ _UNK_1818c45b8) + uRam0000000183261368 + 0x26769814;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183261368 ^ _UNK_1818c45b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832613b8 ^ _UNK_1818c45b8;
  uRam0000000183261518 =
       func_0x00018a9162e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183261368 + 0x26769814) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832613b8 + 0x40e610d4));
  uVar4 = uRam0000000183261518 ^ 0x26769814;
  uRam00000001832614b8 = uRam0000000183261630 ^ uVar4 ^ 0xeb3acc05;
  uRam00000001832616a0 = (uRam00000001832616a0 ^ uVar4) + 0xeb3acc05 ^ 0x72a8b8748de94b0b;
  uRam0000000183261500 = (uRam0000000183261500 * -0x14d3e74b39aa71a1 ^ uRam00000001832616a0) + uVar4
  ;
  uRam00000001832615f8 = uRam0000000183261500 ^ uRam00000001832616a0;
  uRam0000000183261380 = 0xeb3acc05;
  uVar4 = (~uRam00000001832615d8 + 0xeb3acc06) *
          ((uRam0000000183261698 ^ 0x6f18ef20) +
          (ulonglong)((uint)uRam0000000183261698 & 0x6f18ef20) * 2);
  uVar4 = (uVar4 | uRam00000001832616d0) + (uVar4 & uRam00000001832616d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832614b0 =
       func_0x00018a9162e0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam00000001832615f8 = uRam0000000183261410;
  uRam00000001832615b0 = uRam0000000183261688 ^ uRam0000000183261410 ^ 0x88e4ad155f023b11;
  uRam0000000183261448 =
       (uRam0000000183261448 * -0x6ac059d8f2b640b1 ^ uRam00000001832615b0) + uRam0000000183261410;
  uRam00000001832615b0 = uRam0000000183261448 ^ uRam00000001832615b0;
  uRam0000000183261688 = uRam0000000183261490;
  uRam00000001832613f0 = 0;
  uVar4 = (~uRam0000000183261370 + 0x100000000) *
          ((uRam0000000183261400 ^ 0x531d5cde) +
          (ulonglong)((uint)uRam0000000183261400 & 0x531d5cde) * 2);
  uVar4 = (uVar4 | uRam00000001832613e8) + (uVar4 & uRam00000001832613e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832616a0 =
       func_0x00018a9162e0((uVar4 | 0xace2a321) + (ulonglong)((uint)uVar4 & 0xace2a321));
  uVar4 = (ulonglong)(~(uint)uRam00000001832616a0 & 0xd73f7ffb) * 0x800;
  uRam0000000183261460 = (uRam0000000183261460 ^ uVar4) + 0x28c08004 ^ 0x260740ef6db33e2b;
  uRam00000001832616a8 = (uRam00000001832616a8 * 0x27902873d3b236af ^ uRam0000000183261460) + uVar4;
  uRam00000001832616c0 = uRam00000001832616a8 ^ uRam0000000183261460;
  uRam0000000183261528 = 0x28c08004;
  uVar4 = (~uRam0000000183261490 + 0x28c08005) *
          ((uRam0000000183261520 ^ 0x531d5cde) +
          (ulonglong)((uint)uRam0000000183261520 & 0x531d5cde) * 2);
  uVar4 = (uVar4 | uRam0000000183261568) + (uVar4 & uRam0000000183261568);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832613b8 =
       func_0x00018a9162e0((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda));
  uVar4 = (uRam00000001832613b8 ^ 0xd73f7ffa) & 0x7ffffffffffffffe;
  uRam0000000183261490 = uRam0000000183261490 ^ uVar4 ^ 0x55ea71ef0b3f2cdb;
  uRam0000000183261370 = (uRam0000000183261370 * 0x83c68e70f89526f ^ uRam0000000183261490) + uVar4;
  uRam0000000183261358 = uRam0000000183261370 ^ uRam0000000183261490;
  uRam0000000183261430 = 0;
  uRam0000000183261450 = func_0x00018a9162e0(uRam0000000183261620 + 0x110083e90021ff ^ 0x9c);
  uVar4 = uRam0000000183261450 << 0x34 | uRam0000000183261450 >> 0xc;
  uRam0000000183261658 = uRam0000000183261440 ^ uVar4 ^ 0x320a;
  uRam0000000183261498 = (uRam0000000183261498 ^ uVar4) + 0x320a ^ 0x440e8e13c5f07fc5;
  uRam00000001832614c8 = (uRam00000001832614c8 * -0x31784ca8d215da43 ^ uRam0000000183261498) + uVar4
  ;
  uRam0000000183261468 = uRam00000001832614c8 ^ uRam0000000183261498;
  uRam00000001832613b0 = 0x320a;
  uVar4 = (~uRam0000000183261438 + 0x803713fc) *
          ((uRam00000001832613a0 ^ 0x41530de) +
          (ulonglong)((uint)uRam00000001832613a0 & 0x41530de) * 2);
  uVar4 = (uVar4 | uRam0000000183261470) + (uVar4 & uRam0000000183261470);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183261628 =
       func_0x00018a9162e0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uVar4 = (uRam0000000183261628 ^ 0x803713fb) << 0x10 | uRam0000000183261628 >> 0x30;
  uRam00000001832614d0 = uRam00000001832614d0 ^ uVar4 ^ 0xefe3e9b09ce73194;
  uRam0000000183261528 = (uRam0000000183261528 * 0xa3df43b8b2b8da1 ^ uRam00000001832614d0) + uVar4;
  uRam0000000183261380 = uRam0000000183261528 ^ uRam00000001832614d0;
  uRam00000001832614f8 = 0;
  uVar4 = (uRam00000001832613b0 ^ 0x8422112f) + uRam00000001832615e0 + 0x8422112f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832613b0 ^ 0x8422112f;
  uVar8 = ((uRam00000001832615e0 + uRam00000001832613b0) * 0x2000 |
          uRam00000001832615e0 + uRam00000001832613b0 >> 0x33) ^ uRam00000001832615e0;
  uRam00000001832614c0 =
       func_0x00018a9162e0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001832613b0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832615e0 + 0x8422112f));
  uVar4 = uRam00000001832614c0 & 0xffffffffffffffc0;
  uRam0000000183261550 = uRam00000001832613c8 ^ uVar4 ^ 0x320a;
  uRam0000000183261350 = (uRam0000000183261350 ^ uVar4) + 0x320a ^ 0xcb57348909df2efc;
  uRam0000000183261388 = (uRam0000000183261388 * -0x745ba39280b7d245 ^ uRam0000000183261350) + uVar4
  ;
  uRam00000001832613a8 = uRam0000000183261388 ^ uRam0000000183261350;
  uRam0000000183261440 = 0x320a;
  uVar4 = uVar9 ^ 0x84222325 ^ uRam0000000183261410;
  lVar3 = (uVar9 ^ 0x84222325) + uRam0000000183261640;
  uVar8 = uVar4 + lVar3;
  uVar10 = (uRam0000000183261640 ^ 0x320a) + uRam0000000183261410 + 0x320a;
  uVar4 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar4;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183261640 ^ 0x320a;
  uRam0000000183261490 =
       func_0x00018a9162e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183261410 + 0x320a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  lVar3 = uVar9 - (uVar2 & 0x320a) * 2;
  uRam0000000183261698 =
       (uRam0000000183261698 ^ uRam0000000183261480) + lVar3 + 0x320a ^ 0x1738dee44acb2f0b;
  uRam0000000183261448 =
       (uRam0000000183261448 * 0x111ca4ea8a00f4f7 ^ uRam0000000183261698) + uRam0000000183261480;
  uRam0000000183261318 = uRam0000000183261448 ^ uRam0000000183261698;
  uRam00000001832615f8 = lVar3 + 0x320aU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15012,0x347);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a90cee0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c2700 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fR; aWN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18a916370, runtime 6ffff2526370) =====

void FUN_18a916370(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018a9163bb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c4730 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fR; aWO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18a917380, runtime 6ffff2527380) =====

void FUN_18a917380(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a917409 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c4cf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



