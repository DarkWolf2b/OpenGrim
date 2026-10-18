// ===== STITCHED CORPUS: sixtwo.fR =====
// handlers: 9  continuation blocks: 98  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x18bd1e0', '0x18be3d8', '0x18be3e8', '0x18be3f8', '0x18be408', '0x18be678', '0x18be688', '0x18be698', '0x18be6a8', '0x18c4560', '0x18c4568', '0x18c4570', '0x18c4578', '0x18c4580', '0x18c4588', '0x18c4590', '0x18c45a0', '0x18c45a8', '0x18c45b0']

// ===== Lsixtwo/fR; _be8876597688c4e993e11acafd73b0dc ()V (handler @ image 18a91a090, runtime 6ffff252a090) =====

void FUN_18a91a090(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15012,0x347)
      /* POOL[0x15012,0x347]: sixtwo/fQ | YXdPC | endsWith | AXCPX | sixtwo/fR | foDkU | sxltZ | uLWvr | ZvuAA | KCbXY | aChQX | QkNsh | OFbuO | aWM | rOGIl | ymMTJ | sixtwo/fS$sV | sQGRe | Ljava/lang/StringBuilder; | aWL | length | sixtwo/fT | aXt | fTEJu | aXu | aXH | (Ljava/lang/Exception;)Ljava/lang/Exception; | net/minecraft/class_2720 | start | aXv | HRntz | aXy | aXw | NKPoi | split | (Ljava/lang/String;)[Ljava/lang/String; | aXx | aXz | aXB | aXA | lastIndexOf | UpGbN | IVIuI | net/minecraft/class_2856 | comp_2158 | net/minecraft/class_2856$class_2857 | field_13016 | Lnet/minecraft/class_2856$class_2857; | (Ljava/u */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a917409 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818c4cf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xa8e0e93 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e0e93(void)

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


// ----- block @ rva 0xa8e0ecc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e0ecc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818bcb68)();
  return;
}


// ----- block @ rva 0xa8e0ef1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e0ef1(void)

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


// ----- block @ rva 0xa8e0f06 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e0f06(void)

{
  FUN_190dd72e0();
  (*_DAT_1818bcb78)();
  return;
}


// ----- block @ rva 0xa8e0f2e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e0f2e(void)

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


// ----- block @ rva 0xa8e0f82 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e0f82(void)

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


// ----- block @ rva 0xa8e0fcd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e0fcd(void)

{
  (*_DAT_1818bcbb8)();
  return;
}


// ----- block @ rva 0xa8e0fde -----

void FUN_18a8e0fde(void)

{
  return;
}


// ----- block @ rva 0xa8e0fe6 -----

void FUN_18a8e0fe6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa8e1093 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e1093(void)

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


// ----- block @ rva 0xa8e10cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e10cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818bcc38)();
  return;
}


// ----- block @ rva 0xa8e10f1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e10f1(void)

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


// ----- block @ rva 0xa8e1106 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e1106(void)

{
  FUN_190dd72e0();
  (*_DAT_1818bcca8)();
  return;
}


// ----- block @ rva 0xa8e114f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e114f(void)

{
  FUN_190dd9df0();
  (*_DAT_1818bcc98)();
  return;
}


// ----- block @ rva 0xa8e1182 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e1182(void)

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


// ----- block @ rva 0xa8e11a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e11a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818bcc48)();
  return;
}


// ----- block @ rva 0xa8e11cd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e11cd(void)

{
  (*_DAT_1818bccb8)();
  return;
}


// ----- block @ rva 0xa8e11de -----

void FUN_18a8e11de(void)

{
  return;
}


// ----- block @ rva 0xa8e11e6 -----

void FUN_18a8e11e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa8e1293 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e1293(void)

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


// ----- block @ rva 0xa8e12cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e12cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818bcd48)();
  return;
}


// ----- block @ rva 0xa8e12f1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e12f1(void)

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


// ----- block @ rva 0xa8e1306 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e1306(void)

{
  FUN_190dd72e0();
  (*_DAT_1818bcd78)();
  return;
}


// ----- block @ rva 0xa8e132e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e132e(void)

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


// ----- block @ rva 0xa8e134f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e134f(void)

{
  FUN_190dd9df0();
  (*_DAT_1818bcd68)();
  return;
}


// ----- block @ rva 0xa8e1382 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e1382(void)

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


// ----- block @ rva 0xa8e13a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e13a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818bcd58)();
  return;
}


// ----- block @ rva 0xa8e13cd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e13cd(void)

{
  (*_DAT_1818bcd88)();
  return;
}


// ----- block @ rva 0xa8e13de -----

void FUN_18a8e13de(void)

{
  return;
}


// ----- block @ rva 0xa8e13e6 -----

void FUN_18a8e13e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa8e1493 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e1493(void)

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


// ----- block @ rva 0xa8e14cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e14cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818bce38)();
  return;
}


// ----- block @ rva 0xa8e14f1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e14f1(void)

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


// ----- block @ rva 0xa8e1506 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e1506(void)

{
  FUN_190dd72e0();
  (*_DAT_1818bce58)();
  return;
}


// ----- block @ rva 0xa8e152e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e152e(void)

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


// ----- block @ rva 0xa8e154f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e154f(void)

{
  FUN_190dd9df0();
  (*_DAT_1818bce28)();
  return;
}


// ----- block @ rva 0xa8e1582 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8e1582(void)

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


// ----- block @ rva 0xa8e15de -----

void FUN_18a8e15de(void)

{
  return;
}


// ----- block @ rva 0xa8e15e6 -----

void FUN_18a8e15e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa8e1713 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a8e174a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a8e1713(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa8e174d -----

undefined8 FUN_18a8e174d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xa8e1768 -----

void FUN_18a8e1768(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00018a8e1794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818bd1e0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xa8e81fd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8e81fd(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar6 [16];
  uint uVar10;
  undefined1 auVar9 [16];
  uint uVar11;
  ulonglong uVar13;
  undefined1 auVar12 [16];
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  
  uVar5 = (in_RAX ^ _DAT_1818be3d0) + param_1 + 0x4c7e1aa06914ab59;
  uVar8 = (param_1 ^ _UNK_1818be3d8) + in_RAX + 0xc4eec81dff67da0d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ in_RAX ^ _DAT_1818be3d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ param_1 ^ _UNK_1818be3d8;
  _DAT_1832602f8 =
       func_0x00018a90ab10((uVar8 << 0x1d | uVar8 >> 0x23) - (in_RAX + 0xc4eec81dff67da0d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (param_1 + 0x4c7e1aa06914ab59));
  uVar5 = _DAT_1832602f8 * -0x40bde3772a70bcd1 & 0x1fffffffffff;
  _DAT_1832604a8 = (_DAT_1832604a8 ^ uVar5) + 0xccfedabdff77da7d ^ 0xe31a35bbb77e5ff1;
  _DAT_183260538 = (_DAT_183260538 * -0x5cf775afbf422c19 ^ _DAT_1832604a8) + uVar5;
  _DAT_1832605b0 = _DAT_183260538 ^ _DAT_1832604a8;
  _DAT_183260500 = 0xccfedabdff77da7d;
  _DAT_1832605e0 = func_0x00018a90ab10(_DAT_183260228 ^ 0x8ad91ff365493360);
  _DAT_183260650 = (_DAT_183260650 ^ _DAT_1832605e0) + 0xaf9cb60888a18780 ^ 0xd5a65c689d838584;
  _DAT_183260170 = (_DAT_183260170 * 0x59b123f88878757f ^ _DAT_183260650) + _DAT_1832605e0;
  _DAT_183260158 = _DAT_183260170 ^ _DAT_183260650;
  _DAT_1832604b0 = 0xaf9cb60888a18780;
  _DAT_183260548 = func_0x00018a90ab10(_DAT_1832604f0 ^ 0xf76383fc2c917c88);
  uVar5 = _DAT_183260548 & 0xffffffffff000000;
  _DAT_1832605a0 = _DAT_183260538 ^ uVar5 ^ 0x506349f7775e7878;
  _DAT_1832602d8 = (_DAT_183260178 ^ uVar5) + 0x506349f7775e7878 ^ 0x50c937cc0fcadef5;
  _DAT_183260178 = (_DAT_183260178 * -0x6345ad9394d53261 ^ _DAT_1832602d8) + uVar5;
  _DAT_1832602d8 = _DAT_183260178 ^ _DAT_1832602d8;
  _DAT_183260268 = 0x506349f7775e7878;
  _DAT_1832602d0 = func_0x00018a90ab10(_DAT_1832605b8 + 0xd7c410d64405a354 ^ 2);
  uVar5 = (_DAT_1832602d0 ^ 0xfffffffffffffff8) << 0xf |
          (_DAT_1832602d0 ^ 0xfffffffffffffff8) >> 0x31;
  _DAT_1832604b8 = _DAT_1832603c0 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_183260190 = (_DAT_183260190 ^ uVar5) - 8 ^ 0x8c537307736c5c60;
  _DAT_1832602d8 = (_DAT_1832602d8 * 0x1bdfe7970a26d2b5 ^ _DAT_183260190) + uVar5;
  _DAT_183260350 = _DAT_1832602d8 ^ _DAT_183260190;
  _DAT_183260360 = 0xfffffffffffffff8;
  _DAT_1832601d8 = func_0x00018a90ab10(_DAT_183260510 + 0x94ddea7f91544bc6 ^ 0x5d);
  uVar5 = _DAT_1832601d8 & 0x1ffffffffffff;
  _DAT_183260448 = _DAT_1832601f0 ^ uVar5 ^ 0x38caaa90fb69fe64;
  _DAT_1832602d8 = (_DAT_1832602d8 ^ uVar5) + 0x38caaa90fb69fe64 ^ 0xd63e3db26be973b;
  _DAT_183260540 = (_DAT_183260540 * -0x4f9c640afa6c338f ^ _DAT_1832602d8) + uVar5;
  _DAT_183260570 = _DAT_183260540 ^ _DAT_1832602d8;
  _DAT_1832604e8 = 0x38caaa90fb69fe64;
  _DAT_183260270 = func_0x00018a90ab10(_DAT_1832605f8 ^ 0x44ac17794d4f5ba1);
  uVar5 = _DAT_183260270 ^ 0xfffffffffffffff4;
  uVar8 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar5;
  _DAT_183260240 = _DAT_183260180 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1832604a0 = (_DAT_1832604a0 ^ uVar5) - 8 ^ 0xb231f80cc887977d;
  _DAT_183260458 = (_DAT_183260458 * -0x1d59f5f7a4c4bb49 ^ _DAT_1832604a0) + uVar5;
  _DAT_1832604e8 = _DAT_183260458 ^ _DAT_1832604a0;
  _DAT_1832604c0 = 0xfffffffffffffff8;
  _DAT_183260638 = func_0x00018a90ab10(_DAT_1832603d8 ^ 0x336792e49a4e0acc);
  _DAT_183260428 = (_DAT_183260428 ^ _DAT_183260318) + 0xf90a2dab97ea7738 ^ 0x472d0d7cd997ade3;
  _DAT_183260180 = (_DAT_183260180 * -0x5ada4775fd3af41 ^ _DAT_183260428) + _DAT_183260318;
  _DAT_183260168 = _DAT_183260180 ^ _DAT_183260428;
  _DAT_183260478 = 0xf90a2dab97ea7738;
  uVar5 = (~_DAT_1832606d0 + 0x6f5d254681588c9) *
          ((_DAT_183260220 ^ 0xffffffff7bdddcdd) + (_DAT_183260220 & 0x7fffffff7bdddcdd) * 2);
  uVar5 = (uVar5 | _DAT_183260318) + (uVar5 & _DAT_183260318);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183260560 = func_0x00018a90ab10((uVar5 | 0xf90a2dab13c85415) + (uVar5 & 0xf90a2dab13c85415));
  uVar5 = _DAT_183260560 * -0x6fd6f310073c1397;
  _DAT_1832603c8 = _DAT_183260220 ^ uVar5 ^ 0x6f5d254681588c0;
  _DAT_183260458 = (_DAT_183260458 ^ uVar5) + 0x6f5d254681588c0 ^ 0xf4de9089571a7d11;
  _DAT_1832601b8 = (_DAT_1832601b8 * 0x68b25fea23f22aa1 ^ _DAT_183260458) + uVar5;
  _DAT_183260310 = _DAT_1832601b8 ^ _DAT_183260458;
  _DAT_183260420 = 0x6f5d254681588c0;
  _DAT_183260408 = func_0x00018a90ab10(_DAT_1832606e8 + 0xc6ce0b6f6142482fU ^ 0xb4);
  _DAT_1832604b0 =
       (_DAT_1832604b0 ^ ~_DAT_183260408 & 0xccfedabdff77da7d) + 0x30fdc6cf136a7144 ^
       0x9cc9e4b665f8e7a9;
  _DAT_183260630 =
       (_DAT_183260630 * -0x13d47784ad717103 ^ _DAT_1832604b0) +
       (~_DAT_183260408 & 0xccfedabdff77da7d);
  _DAT_1832606b8 = _DAT_183260630 ^ _DAT_1832604b0;
  _DAT_1832603f8 = 0x30fdc6cf136a7144;
  uVar5 = (_DAT_1832602e0 ^ _DAT_1818be3e0) + _DAT_183260368 + 0xccfedabd7b55f958;
  uVar8 = (_DAT_183260368 ^ _UNK_1818be3e8) + _DAT_1832602e0 + 0xfc031c72ec1dab39;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832602e0 ^ _DAT_1818be3e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183260368 ^ _UNK_1818be3e8;
  _DAT_183260458 =
       func_0x00018a90ab10((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832602e0 + 0xfc031c72ec1dab39) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183260368 + 0xccfedabd7b55f958));
  _DAT_1832603a8 = (_DAT_1832603a8 ^ _DAT_183260458) + 0xcc021830ec158a39 ^ 0xd21f26711d852dbe;
  _DAT_183260688 = (_DAT_183260688 * -0x313ef7c0f26c2441 ^ _DAT_1832603a8) + _DAT_183260458;
  _DAT_183260320 = _DAT_183260688 ^ _DAT_1832603a8;
  _DAT_1832602b0 = 0xcc021830ec158a39;
  uVar5 = (_DAT_183260360 ^ _DAT_1818be3f0) + _DAT_183260460 + 0x30fdc6cf97485261;
  uVar8 = (_DAT_183260460 ^ _UNK_1818be3f8) + _DAT_183260360 + 0x98043061d82b1472;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183260360 ^ _DAT_1818be3f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183260460 ^ _UNK_1818be3f8;
  _DAT_183260648 =
       func_0x00018a90ab10((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183260360 + 0x98043061d82b1472) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183260460 + 0x30fdc6cf97485261));
  uVar5 = _DAT_183260648 ^ 0x88003020c8010432;
  _DAT_183260518 = _DAT_1832605d8 ^ uVar5 ^ 0xc901f730eb9585b6;
  _DAT_1832604a0 = (_DAT_1832604a0 ^ uVar5) + 0xc901f730eb9585b6 ^ 0x9aef8a7c604b8bf3;
  _DAT_1832605e0 = (_DAT_1832605e0 * -0x340debd58e3c7b3f ^ _DAT_1832604a0) + uVar5;
  _DAT_1832604a8 = _DAT_1832605e0 ^ _DAT_1832604a0;
  _DAT_1832601f8 = -0x36fe08cf146a7a4a;
  uVar5 = (_DAT_183260640 ^ _DAT_1818be400) + _DAT_183260548 + 0xc901f7306fb7a693;
  uVar8 = (_DAT_183260548 ^ _UNK_1818be408) + _DAT_183260640 + 0xc901f730eb9585b6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183260640 ^ _DAT_1818be400;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183260548 ^ _UNK_1818be408;
  _DAT_1832604c8 =
       func_0x00018a90ab10((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183260640 + 0xc901f730eb9585b6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183260548 + 0xc901f7306fb7a693));
  _DAT_183260660 = _DAT_1832604c8 ^ 0xc901f730eb9585b6;
  _DAT_183260238 = _DAT_183260238 ^ _DAT_183260660 ^ 0xb98a9cc970f492d5;
  _DAT_183260158 = (_DAT_183260158 * 0xbfe4abefdab03b5 ^ _DAT_183260238) + _DAT_183260660;
  _DAT_183260668 = _DAT_183260158 ^ _DAT_183260238;
  _DAT_183260108 = _DAT_1832601b0;
  _DAT_183260620 = 0;
  uVar5 = ((_DAT_1832604b8 ^ 0xffffffff7bdddcdd) + (_DAT_1832604b8 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_183260408;
  uVar5 = (uVar5 | _DAT_1832603b8) + (uVar5 & _DAT_1832603b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183260440 = func_0x00018a90ab10((uVar5 | 0xffffffff7bdddcdd) + (uVar5 & 0xffffffff7bdddcdd));
  _DAT_1832606f0 = _DAT_1832601b0 ^ _DAT_183260440 ^ 0xfffffffffffffff8;
  _DAT_183260500 = (_DAT_183260500 ^ _DAT_183260440) - 8 ^ 0x25c1c70e6c5eb2cf;
  _DAT_183260108 = (_DAT_183260108 * 0x1c2545c4c2bfd00f ^ _DAT_183260500) + _DAT_183260440;
  _DAT_183260160 = _DAT_183260108 ^ _DAT_183260500;
  _DAT_183260288 = 0xfffffffffffffff8;
  uVar5 = ~_DAT_183260160 *
          ((_DAT_183260650 ^ 0xccfedabd7b55f958) + (_DAT_183260650 & 0x4cfedabd7b55f958) * 2);
  uVar5 = (uVar5 | _DAT_183260430) + (uVar5 & _DAT_183260430);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832601b0 = func_0x00018a90ab10((uVar5 | 0x3301254284aa06a7) + (uVar5 & 0x3301254284aa06a7));
  _DAT_183260360 = (_DAT_183260360 ^ _DAT_183260470) + 0x3301254200882582 ^ 0x1cdf9ee554eb36b8;
  _DAT_183260520 = (_DAT_183260520 * 0x14fbbddc902d3c8f ^ _DAT_183260360) + _DAT_183260470;
  _DAT_1832606f0 = _DAT_183260520 ^ _DAT_183260360;
  _DAT_183260610 = 0x3301254200882582;
  _DAT_183260510 = func_0x00018a90ab10(_DAT_183260190 + 0xc82c613bc9e1c404 ^ 0x70);
  uVar5 = (~_DAT_183260510 & 0xccfedabdff77da7d) << 5 |
          (~_DAT_183260510 & 0xccfedabdff77da7d) >> 0x3b;
  _DAT_183260580 = _DAT_183260580 ^ uVar5 ^ 0xf9da598a9916e191;
  _DAT_183260460 = (_DAT_183260460 * -0x5b050b4260f15231 ^ _DAT_183260580) + uVar5;
  _DAT_183260398 = _DAT_183260460 ^ _DAT_183260580;
  _DAT_183260568 = 0;
  _DAT_1832606f8 = func_0x00018a90ab10(_DAT_183260150 + 0x693b96a75a75c2b6 ^ 0x3a);
  _DAT_183260318 = _DAT_1832605a0 ^ _DAT_1832606f8 ^ 0xfffffffffffffff8;
  _DAT_1832604a0 = (_DAT_1832604a0 ^ _DAT_1832606f8) - 8 ^ 0x513b508f8f01636d;
  _DAT_1832605c0 = (_DAT_1832605c0 * 0x57199801c80ef9b ^ _DAT_1832604a0) + _DAT_1832606f8;
  _DAT_1832603d8 = _DAT_1832605c0 ^ _DAT_1832604a0;
  _DAT_183260160 = 0xfffffffffffffff8;
  uVar5 = (~_DAT_1832604d0 + 0x4c7e1aa0ed36887d) *
          ((_DAT_183260670 ^ 0x4c7e1aa06914ab59) + (_DAT_183260670 & 0x4c7e1aa06914ab59) * 2);
  uVar5 = (uVar5 | _DAT_1832602b0) + (uVar5 & _DAT_1832602b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183260130 = func_0x00018a90ab10((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_183260310 = _DAT_183260310 ^ _DAT_183260130 & 0x7fffffffffffffff ^ 0xb94ca5e8fea8518d;
  _DAT_183260320 =
       (_DAT_183260320 * 0x5cda75abca37dc73 ^ _DAT_183260310) +
       (_DAT_183260130 & 0x7fffffffffffffff);
  _DAT_1832602a0 = _DAT_183260320 ^ _DAT_183260310;
  _DAT_183260660 = 0;
  uVar5 = ((_DAT_183260158 ^ 0xffffffff7bdddcdd) + (_DAT_183260158 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_183260618;
  uVar5 = (uVar5 | _DAT_183260148) + (uVar5 & _DAT_183260148);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183260310 = func_0x00018a90ab10((uVar5 | 0xffffffff7bdddcdd) + (uVar5 & 0xffffffff7bdddcdd));
  uVar5 = _DAT_183260310 & 0x7ffffffffffff8;
  _DAT_183260538 = _DAT_1832605b8 ^ uVar5 ^ 0xfffffffffffffff8;
  _DAT_1832603c8 = (_DAT_1832603c8 ^ uVar5) - 8 ^ 0xae90a2b6f55b6bd9;
  _DAT_183260198 = (_DAT_183260198 * 0x56ce5d6c6675c27d ^ _DAT_1832603c8) + uVar5;
  _DAT_183260328 = _DAT_183260198 ^ _DAT_1832603c8;
  _DAT_1832605d0 = 0xfffffffffffffff8;
  uVar5 = *(ulonglong *)(unaff_RBP + 0x30);
  uVar8 = (~_DAT_183260660 - 7) *
          ((uVar5 ^ 0x84222325 ^ _DAT_183260688) + ((uVar5 ^ 0x84222325) & _DAT_183260688) * 2);
  uVar8 = (uVar8 | _DAT_183260450) + (uVar8 & _DAT_183260450);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_183260668 =
       func_0x00018a90ab10((uVar5 ^ 0xffffffff7bdddcdd | uVar8) +
                           (uVar8 & (uVar5 ^ 0xffffffff7bdddcdd)));
  uVar10 = (uint)(uVar5 >> 0x20);
  auVar6._8_4_ = (uint)uVar5;
  auVar6._0_8_ = uVar5;
  auVar6._12_4_ = uVar10;
  uVar14 = (uint)uVar5 | (uint)DAT_1800627b0;
  uVar7 = SUB164(auVar6 & _DAT_1800627b0,0);
  uVar22 = SUB168(auVar6 & _DAT_1800627b0,0);
  uVar11 = SUB164(_DAT_1800627b0 ^ auVar6,0);
  uVar13 = SUB168(_DAT_1800627b0 ^ auVar6,0);
  uVar8 = (_DAT_183260668 ^ uVar5) & 0xffffffffc0000000;
  uVar17 = (((_DAT_1818be480 & 0xffffffff) * (ulonglong)uVar11 +
             ((_DAT_1818be490 & 0xffffffff) * (ulonglong)uVar11 +
              (uVar13 >> 0x20) * (_DAT_1818be480 & 0xffffffff) << 0x20) +
             ((_DAT_1818be460 & 0xffffffff) * (ulonglong)uVar14 + _DAT_1818be470 << 0x20) +
             (_DAT_1818be450 & 0xffffffff) * (ulonglong)uVar14 +
            (_DAT_1818be430 & 0xffffffff) * (ulonglong)uVar7 +
            ((_DAT_1818be440 & 0xffffffff) * (ulonglong)uVar7 +
             (uVar22 >> 0x20) * (_DAT_1818be430 & 0xffffffff) << 0x20) +
            ((_DAT_1818be420 & 0xffffffff) * (uVar5 & 0xffffffff) +
             (_DAT_1818be410 & 0xffffffff) * (ulonglong)uVar10 << 0x20) +
            (uVar5 & 0xffffffff) * (_DAT_1818be410 & 0xffffffff)) -
           ((ulonglong)uVar11 * (ulonglong)_DAT_1818be530 +
            ((_DAT_1818be540 & 0xffffffff) * (ulonglong)uVar11 +
             (uVar13 >> 0x20) * (ulonglong)_DAT_1818be530 << 0x20) +
            ((ulonglong)uVar14 * (ulonglong)_DAT_1818be510 + _DAT_1818be520 << 0x20) +
            (_DAT_1818be500 & 0xffffffff) * (ulonglong)uVar14 +
           (ulonglong)uVar7 * (ulonglong)_DAT_1818be4e0 +
           ((_DAT_1818be4f0 & 0xffffffff) * (ulonglong)uVar7 +
            (uVar22 >> 0x20) * (ulonglong)_DAT_1818be4e0 << 0x20) +
           ((uVar5 & 0xffffffff) * (ulonglong)_DAT_1818be4d0 +
            (ulonglong)uVar10 * (ulonglong)_DAT_1818be4c0 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_1818be4c0)) + _DAT_1818be550;
  _DAT_183260480 = _DAT_1832603d0 ^ uVar8 ^ uVar17;
  _DAT_183260658 = (_DAT_183260658 ^ uVar8) + uVar17 ^ 0xe805c04d7e97602b;
  _DAT_1832603a0 = (_DAT_1832603a0 * 0x6076a5071d4bc2c7 ^ _DAT_183260658) + uVar8;
  _DAT_1832605b8 = _DAT_1832603a0 ^ _DAT_183260658;
  _DAT_183260378 = _DAT_183260288 ^ uVar17;
  uVar5 = uVar17 ^ 0x84222325 ^ _DAT_183260430;
  lVar4 = (uVar17 ^ 0x84222325) + _DAT_183260138;
  uVar8 = uVar5 + lVar4;
  uVar13 = (unaff_RDI ^ _DAT_183260138) + _DAT_183260430 + unaff_RDI;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5;
  uVar8 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ unaff_RDI ^ _DAT_183260138;
  _DAT_183260648 = uVar17;
  _DAT_1832603d0 =
       func_0x00018a90ab10((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183260430 + unaff_RDI) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar18 = (uint)(uVar17 >> 0x20);
  auVar12._8_4_ = (int)uVar17;
  auVar12._0_8_ = uVar17;
  auVar12._12_4_ = uVar18;
  *(ulonglong *)(unaff_RBP + 0x88) = unaff_RDI;
  uVar14 = _DAT_1818be5b0;
  uVar11 = _DAT_1818be5a0;
  uVar10 = _DAT_1818be590;
  uVar7 = (uint)(unaff_RDI >> 0x20);
  auVar9._8_4_ = (int)unaff_RDI;
  auVar9._0_8_ = unaff_RDI;
  auVar9._12_4_ = uVar7;
  uVar22 = (ulonglong)_DAT_1818be570;
  uVar8 = (ulonglong)_DAT_1818be570;
  auVar6 = auVar12 | auVar9;
  uVar19 = uVar17 ^ _DAT_18001a710;
  uVar5 = (ulonglong)_DAT_1818be560;
  uVar21 = SUB164(auVar12 & auVar9,0);
  uVar1 = (ulonglong)_DAT_1818be590;
  uVar20 = SUB168(auVar12 & auVar9,0);
  uVar2 = (ulonglong)_DAT_1818be5a0;
  uVar3 = (ulonglong)_DAT_1818be5a0;
  uVar13 = (ulonglong)_DAT_1818be5c0;
  *(undefined1 (*) [16])(unaff_RBP + 0x30) = auVar6;
  uVar15 = SUB164(auVar12 ^ auVar9,0);
  uVar16 = SUB168(auVar12 ^ auVar9,0);
  uVar8 = (((uVar19 & 0xffffffff) * (ulonglong)_DAT_1818be580 +
            ((uVar19 >> 0x20) * (ulonglong)_DAT_1818be580 +
             (ulonglong)_DAT_1818be560 * (uVar19 & 0xffffffff) << 0x20) +
            (ulonglong)uVar11 * (ulonglong)uVar15 +
            ((uVar16 >> 0x20) * (ulonglong)uVar11 + (ulonglong)uVar10 * (ulonglong)uVar15 << 0x20) +
            uVar21 * uVar3 + ((uVar20 >> 0x20) * uVar2 + uVar21 * uVar1 << 0x20) +
            ((uVar8 * (uVar17 & 0xffffffff) +
             (uVar18 * uVar22 + (uVar17 & 0xffffffff) * uVar5 << 0x20)) - unaff_RDI) +
           (ulonglong)uVar14 * (ulonglong)auVar6._0_4_ +
           (uVar13 * auVar6._0_4_ + (auVar6._0_8_ >> 0x20) * (ulonglong)uVar14 << 0x20)) -
          ((ulonglong)uVar15 * (ulonglong)_DAT_1818be650 +
           ((ulonglong)_DAT_1818be660 * (ulonglong)uVar15 +
            (uVar16 >> 0x20) * (ulonglong)_DAT_1818be650 << 0x20) +
           (ulonglong)*(uint *)(unaff_RBP + 0x30) * (ulonglong)_DAT_1818be630 +
           ((ulonglong)_DAT_1818be640 * (ulonglong)*(uint *)(unaff_RBP + 0x30) +
            (auVar6._0_8_ >> 0x20) * (ulonglong)_DAT_1818be630 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_1818be610 +
          ((ulonglong)_DAT_1818be620 * (ulonglong)uVar21 +
           (uVar20 >> 0x20) * (ulonglong)_DAT_1818be610 << 0x20) +
          (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1818be600 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_1818be600 +
           (ulonglong)_DAT_1818be5f0 * (unaff_RDI & 0xffffffff) << 0x20) +
          (uVar17 & 0xffffffff) * (ulonglong)_DAT_1818be600 +
          ((ulonglong)uVar18 * (ulonglong)_DAT_1818be600 +
           (uVar17 & 0xffffffff) * (ulonglong)_DAT_1818be5f0 << 0x20))) + 0x151935c754d0245e;
  _DAT_1832601b8 = uVar8 ^ _DAT_1832603d0;
  _DAT_183260450 = (_DAT_183260450 ^ _DAT_1832603d0) + uVar8 ^ 0x460a3c8740ef81bd;
  _DAT_1832601f8 = (_DAT_1832601f8 * -0x362a506585045e45 ^ _DAT_183260450) + _DAT_1832603d0;
  _DAT_1832605c8 = _DAT_1832601f8 ^ _DAT_183260450;
  uVar5 = (_DAT_1832602e0 ^ _DAT_1818be670) + _DAT_1832601e8 + 0x7a90db822d69cba6;
  uVar13 = (_DAT_1832601e8 ^ _UNK_1818be678) + _DAT_1832602e0 + 0x478cf7725432133c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832602e0 ^ _DAT_1818be670;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1832601e8 ^ _UNK_1818be678;
  _DAT_183260150 = uVar8;
  _DAT_1832605a8 =
       func_0x00018a90ab10((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1832602e0 + 0x478cf7725432133c)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832601e8 + 0x7a90db822d69cba6)
                          );
  uVar5 = (_DAT_1832605a8 ^ 0x57180da4b5a237b4) & 0x7fffffffc0000000;
  _DAT_183260478 = (_DAT_183260478 ^ uVar5) + 0x7f9cfff2fd7bfbbf ^ 0xfefc5438e01f3232;
  _DAT_183260240 = (_DAT_183260240 * 0x6b79cc2a2f347ac3 ^ _DAT_183260478) + uVar5;
  _DAT_183260510 = _DAT_183260240 ^ _DAT_183260478;
  _DAT_183260400 = 0x7f9cfff2fd7bfbbf;
  _DAT_183260558 = func_0x00018a90ab10(_DAT_183260338 + 0xfb9979b84a857b3fU ^ 0x6f);
  _DAT_183260190 =
       (_DAT_183260190 ^ _DAT_183260558 & 0xfffffffffffffff) + 0xc0868604cd9fb890 ^
       0xb141f1fcc4420230;
  _DAT_183260318 =
       (_DAT_183260318 * 0x229539ddc0a908d ^ _DAT_183260190) + (_DAT_183260558 & 0xfffffffffffffff);
  _DAT_183260148 = _DAT_183260318 ^ _DAT_183260190;
  _DAT_183260320 = 0xc0868604cd9fb890;
  uVar5 = (~_DAT_1832602d8 + 0xcdd95f5d149ec60d) *
          ((_DAT_183260640 ^ 0x84222305) + (ulonglong)((uint)_DAT_183260640 & 0x84222305) * 2);
  uVar5 = (uVar5 | _DAT_183260668) + (uVar5 & _DAT_183260668);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832601b0 = func_0x00018a90ab10((uVar5 | 0xcdd95f5d90bce509) + (uVar5 & 0xcdd95f5d90bce509));
  uVar5 = (_DAT_1832601b0 & 0xffffffffffff8000) << 0x21 | _DAT_1832601b0 >> 0x1f;
  _DAT_183260198 = _DAT_1832605c8 ^ uVar5 ^ 0xcdd95f5d149ec62c;
  _DAT_183260560 = (_DAT_183260560 ^ uVar5) + 0xcdd95f5d149ec62c ^ 0x47aaeac9d4a84cd;
  _DAT_183260408 = (_DAT_183260408 * 0x23e7929c6b14334f ^ _DAT_183260560) + uVar5 ^ _DAT_183260560;
  _DAT_1832605e0 = 0xcdd95f5d149ec62c;
  uVar5 = (~_DAT_183260350 + 0x3226a0a2eb6139f5) *
          ((_DAT_1832603a8 ^ 0xcdd95f5d90bce509) + (_DAT_1832603a8 & 0x4dd95f5d90bce509) * 2);
  uVar5 = (uVar5 | _DAT_183260298) + (uVar5 & _DAT_183260298);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183260398 = func_0x00018a90ab10((uVar5 | 0xffffffff7bdddcfd) + (uVar5 & 0xffffffff7bdddcfd));
  uVar5 = _DAT_183260398 ^ 0x3226a0a2eb6139f4;
  _DAT_183260650 = _DAT_1832601b0 ^ uVar5 ^ 0x20;
  _DAT_1832602a8 = (_DAT_1832602a8 ^ uVar5) + 0x20 ^ 0x27758ad5707f2b76;
  _DAT_1832603a0 = (_DAT_1832603a0 * -0xd8df749c19e861f ^ _DAT_1832602a8) + uVar5;
  _DAT_1832602d8 = _DAT_1832603a0 ^ _DAT_1832602a8;
  _DAT_183260310 = 0x20;
  uVar5 = (~_DAT_183260540 + 0x2ac3bece30ed8881) *
          ((_DAT_183260248 ^ 0x84222325) + (ulonglong)((uint)_DAT_183260248 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1832601c0) + (uVar5 & _DAT_1832601c0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183260630 = func_0x00018a90ab10((uVar5 | 0x2ac3beceb4cfaba5) + (uVar5 & 0x2ac3beceb4cfaba5));
  _DAT_1832601a0 = (_DAT_1832601a0 ^ _DAT_183260630) + 0xd53c4131cf127780 ^ 0xd562a5aecaa671d3;
  _DAT_1832601d0 = (_DAT_1832601d0 * -0x429614232521423d ^ _DAT_1832601a0) + _DAT_183260630;
  _DAT_183260550 = _DAT_1832601d0 ^ _DAT_1832601a0;
  _DAT_183260598 = 0xd53c4131cf127780;
  uVar5 = (_DAT_1832604a8 ^ _DAT_1818be680) + _DAT_183260580 + 0x84222305;
  uVar13 = (_DAT_183260580 ^ _UNK_1818be688) + _DAT_1832604a8 + 0x2ac3bece30ed8880;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832604a8 ^ _DAT_1818be680;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183260580 ^ _UNK_1818be688;
  _DAT_183260610 =
       func_0x00018a90ab10((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1832604a8 + 0x2ac3bece30ed8880)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183260580 + 0x84222305));
  _DAT_183260108 =
       (_DAT_183260108 ^ _DAT_183260610 ^ 0x5877d9c61db11020) + 0x2ac3bece30ed88a0 ^
       0xda15e4b6e38ba1ce;
  _DAT_183260190 =
       (_DAT_183260190 * 0x174d79a79d47b06d ^ _DAT_183260108) +
       (_DAT_183260610 ^ 0x5877d9c61db11020);
  _DAT_1832603d8 = _DAT_183260190 ^ _DAT_183260108;
  _DAT_183260368 = 0x2ac3bece30ed88a0;
  uVar5 = (_DAT_183260498 ^ _DAT_1818be690) + _DAT_1832603f0 + 0x84222325;
  uVar13 = (_DAT_1832603f0 ^ _UNK_1818be698) + _DAT_183260498 + 0x369c32135a9c9914;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183260498 ^ _DAT_1818be690;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1832603f0 ^ _UNK_1818be698;
  _DAT_1832605c8 =
       func_0x00018a90ab10((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183260498 + 0x369c32135a9c9914)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832603f0 + 0x84222325));
  _DAT_183260250 = (_DAT_183260250 ^ _DAT_1832605c8) + 0xc963cdeca56366ec ^ 0xc7903d77208cfc84;
  _DAT_183260630 = (_DAT_183260630 * 0x7ca0f4661e8fe931 ^ _DAT_183260250) + _DAT_1832605c8;
  _DAT_183260558 = _DAT_183260630 ^ _DAT_183260250;
  _DAT_1832605f0 = _DAT_1832606f8 ^ 0xc963cdeca56366ec;
  _DAT_183260140 = 0xc963cdeca56366ec;
  _DAT_183260108 = func_0x00018a90ab10(_DAT_1832601a0 ^ 0x11a673ae1111aad6);
  uVar5 = (ulonglong)(~(uint)_DAT_183260108 & 0x20) << 0x29;
  _DAT_1832603c0 = _DAT_183260688 ^ uVar5 ^ 0x369c32135a9c9934;
  _DAT_183260500 = (_DAT_183260500 ^ uVar5) + 0x369c32135a9c9934 ^ 0x2b3168b4aba02e66;
  _DAT_183260350 = (_DAT_183260350 * 0x55723958736e2559 ^ _DAT_183260500) + uVar5;
  _DAT_183260378 = _DAT_183260350 ^ _DAT_183260500;
  _DAT_183260390 = 0x369c32135a9c9934;
  uVar5 = (_DAT_1832604b8 ^ _DAT_1818be6a0) + _DAT_1832601a0 + 0x369c3213debeba11;
  uVar13 = (_DAT_1832601a0 ^ _UNK_1818be6a8) + _DAT_1832604b8 + 0xc963cdeca56366ec;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832604b8 ^ _DAT_1818be6a0;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1832601a0 ^ _UNK_1818be6a8;
  _DAT_183260230 =
       func_0x00018a90ab10((uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_1832604b8 + 0xc963cdeca56366ec)
                           ^ (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832601a0 + 0x369c3213debeba11)
                          );
  uVar5 = _DAT_183260230 ^ 0xc963cdeca56366ec;
  _DAT_183260678 = _DAT_1832606c0 ^ uVar5 ^ 0x20;
  _DAT_183260110 = (_DAT_183260110 ^ uVar5) + 0x20 ^ 0x699066a83c5f7419;
  _DAT_183260640 = (_DAT_183260640 * -0x7f79ff403343c34f ^ _DAT_183260110) + uVar5;
  _DAT_1832605a8 = _DAT_183260640 ^ _DAT_183260110;
  _DAT_1832602c8 = 0x20;
  uVar5 = (~_DAT_183260318 + 0xc0868604cd9fb891) *
          ((_DAT_1832605e0 ^ 0x7f9cfff27959d89a) + (_DAT_1832605e0 & 0x7f9cfff27959d89a) * 2);
  uVar5 = (uVar5 | _DAT_1832602d8) + (uVar5 & _DAT_1832602d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183260660 = func_0x00018a90ab10((uVar5 | 0xbf1a79f6b4c6600a) + (uVar5 & 0xbf1a79f6b4c6600a));
  uVar5 = (_DAT_183260660 ^ 0xff9efff6fdfffbbf) << 0xb |
          (_DAT_183260660 ^ 0xff9efff6fdfffbbf) >> 0x35;
  _DAT_183260230 = (_DAT_183260230 ^ uVar5) + 0xbf1a79f630e4432f ^ 0x8d9ea65e774275af;
  _DAT_183260240 = (_DAT_183260240 * -0x200919d6d016f027 ^ _DAT_183260230) + uVar5;
  _DAT_1832604b8 = _DAT_183260240 ^ _DAT_183260230;
  _DAT_183260690 = 0xbf1a79f630e4432f;
  _DAT_183260690 = func_0x00018a90ab10(_DAT_183260388 ^ 0x1d007be5002153);
  _DAT_1832603a0 = _DAT_183260690 ^ 0x402385f7cb1bb44f;
  _DAT_1832603b8 = _DAT_1832603b8 ^ _DAT_1832603a0 ^ 0x9b48d43f4f70a39c;
  _DAT_183260358 = (_DAT_183260358 * -0x1ac1ea124720637 ^ _DAT_1832603b8) + _DAT_1832603a0;
  _DAT_183260608 = _DAT_183260358 ^ _DAT_1832603b8;
  _DAT_1832604d0 = 0;
  uVar5 = (_DAT_183260118 ^ 0x84222305) + _DAT_183260200 + 0x84222305;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183260118 ^ 0x84222305;
  uVar13 = ((_DAT_183260200 + _DAT_183260118) * 0x2000 | _DAT_183260200 + _DAT_183260118 >> 0x33) ^
           _DAT_183260200;
  _DAT_183260230 =
       func_0x00018a90ab10((uVar13 << 0x1d | uVar13 >> 0x23) - _DAT_183260118 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183260200 + 0x84222305));
  uVar5 = _DAT_183260230 & 0x7fffffffffff0000;
  _DAT_183260228 = _DAT_183260508 ^ uVar5 ^ 0x20;
  _DAT_1832602b8 = (_DAT_1832602b8 ^ uVar5) + 0x20 ^ 0x849cc2273acf75e2;
  _DAT_183260200 = (_DAT_183260200 * -0x31f0dbd75a4b4fcf ^ _DAT_1832602b8) + uVar5;
  _DAT_183260398 = _DAT_183260200 ^ _DAT_1832602b8;
  _DAT_183260488 = 0x20;
  _DAT_1832605b0 = func_0x00018a90ab10(_DAT_183260450 + 0x82c5eb6da67cc7e ^ 0xb3);
  _DAT_1832604b8 = _DAT_1832604b8 ^ _DAT_1832605b0 & 0x7fffffffffff8000 ^ 0xd73361ebcd167943;
  _DAT_183260308 =
       (_DAT_183260308 * 0x397f275ccc3eb06b ^ _DAT_1832604b8) +
       (_DAT_1832605b0 & 0x7fffffffffff8000);
  _DAT_183260608 = _DAT_183260308 ^ _DAT_1832604b8;
  _DAT_1832604e0 = 0;
  uVar5 = ((_DAT_183260178 ^ 0x84222305) + (ulonglong)((uint)_DAT_183260178 & 0x84222305) * 2) *
          -_DAT_183260220;
  uVar5 = (uVar5 | _DAT_183260130) + (uVar5 & _DAT_183260130);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183260650 = func_0x00018a90ab10((uVar5 | 0x84222305) + (ulonglong)((uint)uVar5 & 0x84222305))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_183260650 & 0x20);
  _DAT_1832606d8 = _DAT_183260380 ^ uVar5 ^ 0x20;
  _DAT_1832603c0 = (_DAT_1832603c0 ^ uVar5) + 0x20 ^ 0x6a3f1d93a77eef7;
  _DAT_183260128 = (_DAT_183260128 * 0x7851d6775e85f7dd ^ _DAT_1832603c0) + uVar5;
  _DAT_1832605b8 = _DAT_183260128 ^ _DAT_1832603c0;
  _DAT_183260300 = 0x20;
  _DAT_183260528 = func_0x00018a90ab10(_DAT_1832604a0 + 0xffdf007c22ffe1ff ^ 100);
  uVar5 = (_DAT_183260528 ^ 0x7a90db8280000000) & 0xffffffffc0000000;
  _DAT_183260558 = _DAT_183260558 ^ uVar5 ^ 0xc22cbde91542914a;
  _DAT_183260680 = (_DAT_183260680 * 0xc3f9100dbbbb099 ^ _DAT_183260558) + uVar5;
  _DAT_183260210 = _DAT_183260680 ^ _DAT_183260558;
  _DAT_1832602d0 = 0;
  switch(uVar8 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa8ecd50 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8ecd50(void)

{
  int iVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  undefined8 unaff_R14;
  
  *(undefined4 *)(unaff_RBP + 0x50) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x58) = unaff_R14;
  *(undefined4 *)(unaff_RBP + 0x60) = unaff_EDI;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x60) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x60)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa8eed9a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8eed9a(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar3;
  longlong *unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined8 *)(unaff_RBP + 0x50) = unaff_R14;
  uVar3 = (ulonglong)unaff_EDI ^ 0x84222325 ^ _DAT_183260200;
  lVar2 = ((ulonglong)unaff_EDI ^ 0x84222325) + _DAT_1832604d0;
  uVar4 = uVar3 + lVar2;
  uVar5 = (_DAT_1832604d0 ^ 1) + _DAT_183260200 + 1;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832604d0 ^ 1;
  _DAT_183260468 =
       func_0x00018a90ab10((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183260200 + 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar7 = unaff_EDI & _DAT_18001a990;
  uVar6 = unaff_EDI | _DAT_18001a990;
  uVar8 = unaff_EDI ^ _DAT_18001a990;
  lVar2 = ((ulonglong)unaff_EDI * (ulonglong)_DAT_1818bdb10 << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_1818bdb00;
  uVar3 = ((((ulonglong)uVar8 * (ulonglong)_DAT_1818bdaf0 << 0x20) +
            (ulonglong)uVar8 * (ulonglong)_DAT_1818bdae0 +
            ((ulonglong)uVar6 * (ulonglong)_DAT_1818bdad0 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_1818bdac0 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_1818bdab0 << 0x20 |
            (ulonglong)uVar7 * (ulonglong)_DAT_1818bdaa0) +
            ((ulonglong)unaff_EDI * (ulonglong)_DAT_1818bda90 << 0x20) +
            (ulonglong)unaff_EDI * (ulonglong)_DAT_1818bda80 + lVar2) -
          (((ulonglong)uVar8 * (ulonglong)_DAT_1818bdb90 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_1818bdb80 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_1818bdb70 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_1818bdb60 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_1818bdb50 << 0x20 |
           (ulonglong)uVar7 * (ulonglong)_DAT_1818bdb40) +
           ((ulonglong)unaff_EDI * (ulonglong)_DAT_1818bdb30 << 0x20) +
           (ulonglong)unaff_EDI * (ulonglong)_DAT_1818bdb20 + lVar2)) + 0xcfc2413d3b69fa6c;
  _DAT_183260348 = _DAT_183260100 ^ _DAT_183260468 ^ uVar3;
  _DAT_1832603e8 = (_DAT_1832603e8 ^ _DAT_183260468) + uVar3 ^ 0x9201935ff77ab5fa;
  _DAT_1832601f0 = (_DAT_1832601f0 * -0x952a62a2661207f ^ _DAT_1832603e8) + _DAT_183260468;
  _DAT_183260498 = _DAT_1832601f0 ^ _DAT_1832603e8;
  _DAT_183260440 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x58) = (int)uVar3;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x58) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x58)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa8f6a1c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8f6a1c(void)

{
  longlong unaff_RBP;
  int unaff_EDI;
  
  *(int *)(unaff_RBP + 0x50) = unaff_EDI + 1;
  *(int *)(unaff_RBP + 0x58) = *(int *)(unaff_RBP + 0x84);
  switch(unaff_EDI + 1 < *(int *)(unaff_RBP + 0x84)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa8f6a48 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a8f6a48(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x18) = uVar2;
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


// ----- block @ rva 0xa8f6bd6 -----

undefined8 FUN_18a8f6bd6(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x50);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ----- block @ rva 0xa8f6e6e -----

void FUN_18a8f6e6e(void)

{
  return;
}


// ----- block @ rva 0xa8f6fc2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a8f6fc2(longlong param_1)

{
  switch(0xf < *(ulonglong *)(param_1 + 0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa90cee3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a90cee3(void)

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


// ----- block @ rva 0xa90d07f -----

void FUN_18a90d07f(void)

{
  return;
}


// ----- block @ rva 0xa90dc03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a90dc03(void)

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


// ----- block @ rva 0xa90dc58 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a90dc58(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack000000000000008d;
  
  uStack000000000000008d = in_stack_00000058;
  (**(code **)(in_stack_00000030 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa90f559 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a90f559(void)

{
  char cVar1;
  longlong *in_RAX;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*in_RAX + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa910141 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a910141(void)

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


// ----- block @ rva 0xa91157d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a91157d(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190ddfc90(in_stack_00000030,&stack0x00000078,*_DAT_18301ee50 + 0xca6,*_DAT_18301ee50 + 0xcab,
                0x3b);
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


// ----- block @ rva 0xa91170a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a91170a(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa911a2e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a911a2e(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa911ac8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a911ac8(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
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


// ----- block @ rva 0xa911db1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a911db1(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa915ee2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a915ee2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
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


// ----- block @ rva 0xa9163be -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9163be(void)

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


// ----- block @ rva 0xa916412 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a916412(void)

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


// ----- block @ rva 0xa9166fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9166fd(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c4ae8)();
  return;
}


// ----- block @ rva 0xa916763 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a916763(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectArrayElement /*0x568*/))();
  (*_DAT_1818c4778)();
  return;
}


// ----- block @ rva 0xa91677d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a91677d(void)

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


// ----- block @ rva 0xa916836 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a916836(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818c4c28)();
  return;
}


// ----- block @ rva 0xa916a0f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a916a0f(void)

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


// ----- block @ rva 0xa916bb0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a916bb0(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c4938)();
  return;
}


// ----- block @ rva 0xa916bf9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a916bf9(void)

{
  FUN_190de3220();
  (*_DAT_1818c4ad8)();
  return;
}


// ----- block @ rva 0xa916e28 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a916e28(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_1818c4b28)();
  return;
}


// ----- block @ rva 0xa917251 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a917251(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1818c47b8)();
  return;
}


// ----- block @ rva 0xa917285 -----

void FUN_18a917285(void)

{
  return;
}


// ----- block @ rva 0xa917294 -----

void FUN_18a917294(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa91740c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a91740c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1818c5bc8)();
  return;
}


// ----- block @ rva 0xa917547 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a917547(void)

{
  FUN_190dd72e0();
  (*_DAT_1818c57c8)();
  return;
}


// ----- block @ rva 0xa9176fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9176fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1818c5608)();
  return;
}


// ----- block @ rva 0xa917e28 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a917e28(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1818c5a18)();
  return;
}


// ----- block @ rva 0xa91835c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a91835c(void)

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


// ----- block @ rva 0xa91857d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a91857d(void)

{
  longlong in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa9193a6 -----

void FUN_18a9193a6(void)

{
  return;
}


// ----- block @ rva 0xa919469 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a919469(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1818c5428)();
  return;
}


// ----- block @ rva 0xa919681 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a919681(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1818c5b28)();
  return;
}


// ----- block @ rva 0xa9197c9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9197c9(void)

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


// ----- block @ rva 0xa919da7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a919da7(void)

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


// ----- block @ rva 0xa919ee4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a919ee4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1818c5698)();
  return;
}


// ----- block @ rva 0xa919f4a -----

void FUN_18a919f4a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa91a17b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a91a1d1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a91a17b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa91a2af -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a91a2af(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa91a407 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a91a422 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a91a407(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa91c467 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a91c47e */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a91c467(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa91d227 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a91d23e */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a91d227(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa92db0b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a92db0b(void)

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


// ----- block @ rva 0xa933ddb -----

void thunk_FUN_18a91c2f2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xa9344f1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9344f1(void)

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


// ----- block @ rva 0xa934805 -----

void FUN_18a934805(void)

{
  return;
}


// ----- block @ rva 0xa934871 -----

void FUN_18a934871(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

