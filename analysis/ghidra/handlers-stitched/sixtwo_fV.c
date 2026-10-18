// ===== STITCHED CORPUS: sixtwo.fV =====
// handlers: 6  continuation blocks: 52  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x1875170', '0x1875178', '0x1875180', '0x1875188', '0x1875190', '0x1875198', '0x18751a0', '0x18751a8', '0x18751b0', '0x18751b8', '0x18751c0', '0x18751d0', '0x18751d8', '0x18751e0', '0x18751e8', '0x18751f0', '0x18751f8', '0x1875200', '0x1875208']

// ===== Lsixtwo/fV; _d9531e8e50a6ac533da20314017f39c4 ()V (handler @ image 18a7881d0, runtime 6ffff23981d0) =====

void FUN_18a7881d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a7882b8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818768d8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fV; aXV (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18a779180, runtime 6ffff2389180) =====

undefined8 FUN_18a779180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/fV; aXW (IJ)I (handler @ image 18a779210, runtime 6ffff2389210) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a779210(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  
  uRam0000000183258690 = func_0x00018a784420(uRam0000000183258560 + 0x1168cda572334d42 ^ 0xfe);
  uVar4 = (uRam0000000183258690 ^ 0xb63a7e15b19dfec) << 0x27 |
          (uRam0000000183258690 ^ 0xb63a7e15b19dfec) >> 0x19;
  uRam0000000183258688 = (uRam0000000183258688 ^ uVar4) + 0xc7db3573b9fc8bdf ^ 0x2f490d33eb99ca06;
  uRam00000001832585a0 = (uRam00000001832585a0 * 0x3e4babfee5896699 ^ uRam0000000183258688) + uVar4;
  uRam0000000183258538 = uRam00000001832585a0 ^ uRam0000000183258688;
  uRam0000000183258648 = 0xc7db3573b9fc8bdf;
  uVar4 = (~uRam0000000183258610 + 0xb26d58b982b84463) *
          ((uRam0000000183258690 ^ 0x4a571e6ef5dfc1cc) +
          (uRam0000000183258690 & 0x4a571e6ef5dfc1cc) * 2);
  uVar4 = (uVar4 | uRam0000000183258638) + (uVar4 & uRam0000000183258638);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183258640 =
       func_0x00018a784420((uVar4 | 0xf83a46d7776785ae) + (uVar4 & 0xf83a46d7776785ae));
  uRam0000000183258680 =
       (uRam0000000183258680 ^ uRam0000000183258640 & 0x7fffffffffffffff) + 0xf83a46d7f345a68b ^
       0xb27db6d60454fced;
  uRam0000000183258638 =
       (uRam0000000183258638 * 0x104b074143c5115f ^ uRam0000000183258680) +
       (uRam0000000183258640 & 0x7fffffffffffffff);
  uRam00000001832586b0 = uRam0000000183258638 ^ uRam0000000183258680;
  uRam00000001832586e8 = 0xf83a46d7f345a68b;
  uVar4 = (uRam00000001832586a8 ^ _UNK_181875170) + uRam0000000183258558 + 0x84225cda;
  uVar9 = (uRam0000000183258558 ^ _UNK_181875178) + uRam00000001832586a8 + 0x4068faffefe35ac0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832586a8 ^ _UNK_181875170;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183258558 ^ _UNK_181875178;
  uRam0000000183258540 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001832586a8 + 0x4068faffefe35ac0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183258558 + 0x84225cda));
  uVar4 = uRam0000000183258540 >> 1 | uRam0000000183258540;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam0000000183258540 ^ 0x7fff;
  uRam00000001832586b8 = uRam0000000183258618 ^ uVar4 ^ 0x4068faffefe3dabf;
  uRam00000001832585f0 = (uRam00000001832585f0 ^ uVar4) + 0x4068faffefe3dabf ^ 0xf6a5838c3f615f39;
  uRam0000000183258558 = (uRam0000000183258558 * 0x63c5284ad7889ddb ^ uRam00000001832585f0) + uVar4;
  uRam0000000183258648 = uRam0000000183258558 ^ uRam00000001832585f0;
  uRam0000000183258630 = 0x4068faffefe3dabf;
  uRam0000000183258620 = func_0x00018a784420(uRam0000000183258528 + 0x14d4c3245539cbce ^ 0x1c);
  uVar4 = ~uRam0000000183258620;
  uVar9 = uVar4 >> 1 | uVar4;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar4;
  uRam00000001832585e8 = uRam00000001832585e8 ^ uVar4 ^ 0x7fff;
  uRam00000001832585d0 = (uRam00000001832585d0 ^ uVar4) + 0x7fff ^ 0x80b0a8e3c23e484;
  uRam0000000183258538 = (uRam0000000183258538 * 0x6b9c353f73e82cad ^ uRam00000001832585d0) + uVar4;
  uRam00000001832586b0 = uRam0000000183258538 ^ uRam00000001832585d0;
  uRam0000000183258548 = 0x7fff;
  uVar4 = (~uRam0000000183258510 + 0x896bbae430993f05) *
          ((uRam0000000183258510 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183258510 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001832586e0) + (uVar4 & uRam00000001832586e0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832585e0 =
       func_0x00018a784420((uVar4 | 0x896bbae4b4bb1c21) + (uVar4 & 0x896bbae4b4bb1c21));
  uRam0000000183258530 =
       (uRam0000000183258528 ^ uRam00000001832586d8) + 0x7694451bcf66c0fc ^ 0x19a0aa09d57f2ce8;
  uRam0000000183258528 =
       (uRam0000000183258528 * 0x16b0252997d252b1 ^ uRam0000000183258530) + uRam00000001832586d8;
  uRam0000000183258530 = uRam0000000183258528 ^ uRam0000000183258530;
  uRam00000001832585b0 = 0x7694451bcf66c0fc;
  uVar4 = (~uRam0000000183258688 + 0x7694451bcf66c0fd) *
          ((uRam0000000183258630 ^ 0x896bbae4b4bb9c26) +
          (uRam0000000183258630 & 0x96bbae4b4bb9c26) * 2);
  uVar4 = (uVar4 | uRam0000000183258668) + (uVar4 & uRam0000000183258668);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832585d0 =
       func_0x00018a784420((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = uRam00000001832585d0 << 0x3c | uRam00000001832585d0 >> 4;
  uRam0000000183258668 = uRam0000000183258570 ^ uVar4 ^ 0x7fff;
  uRam00000001832585f0 = (uRam00000001832585f0 ^ uVar4) + 0x7fff ^ 0x35f2b86e1adba94a;
  uRam0000000183258658 = (uRam0000000183258658 * -0x16b44ec47fd43499 ^ uRam00000001832585f0) + uVar4
  ;
  uRam0000000183258508 = uRam0000000183258658 ^ uRam00000001832585f0;
  uRam00000001832586c8 = 0x7fff;
  uVar4 = (uRam0000000183258648 ^ _UNK_181875180) + uRam0000000183258640 + 0x38f0952e70ba83f2;
  uVar9 = (uRam0000000183258640 ^ _UNK_181875188) + uRam0000000183258648 + 0xc70f6ad10b67df28;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258648 ^ _UNK_181875180;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183258640 ^ _UNK_181875188;
  uRam0000000183258580 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183258648 + 0xc70f6ad10b67df28) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183258640 + 0x38f0952e70ba83f2));
  uVar4 = uRam0000000183258580 >> 1 | uRam0000000183258580;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183258580;
  uVar4 = uVar9 >> 1 | uVar9;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uVar9 ^ 0x38f0952ef498a0d7 ^
          (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20;
  uRam0000000183258590 = uRam0000000183258600 ^ uVar4 ^ 0x7fff;
  uRam00000001832586a8 = (uRam00000001832586a8 ^ uVar4) + 0x7fff ^ 0xac8ac1889839d3fc;
  uRam0000000183258520 = (uRam0000000183258520 * 0x37b4689095993317 ^ uRam00000001832586a8) + uVar4;
  uRam0000000183258698 = uRam0000000183258520 ^ uRam00000001832586a8;
  uRam0000000183258508 = 0x7fff;
  uVar4 = (~uRam00000001832586b8 + 0xf83a46d7f345a68c) *
          ((uRam0000000183258628 ^ 0xc7db35733ddea8fa) +
          (uRam0000000183258628 & 0x47db35733ddea8fa) * 2);
  uVar4 = (uVar4 | uRam00000001832585c8) + (uVar4 & uRam00000001832585c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183258578 =
       func_0x00018a784420((uVar4 | 0x3fe173a4ce9b0e71) + (uVar4 & 0x3fe173a4ce9b0e71));
  uVar4 = uRam0000000183258578 & 0xffffffffff;
  uRam0000000183258508 = uRam0000000183258610 ^ uVar4 ^ 0xc0157c4bad42326a;
  uRam0000000183258670 = (uRam0000000183258670 ^ uVar4) + 0xc0157c4bad42326a ^ 0xfcbf52272a9af0cc;
  uRam00000001832586d0 = (uRam00000001832586d0 * -0x1c23d39eb5ea3b33 ^ uRam0000000183258670) + uVar4
  ;
  uRam0000000183258500 = uRam00000001832586d0 ^ uRam0000000183258670;
  uRam00000001832585f8 = 0xc0157c4bad42326a;
  uVar4 = (uRam0000000183258578 ^ _UNK_181875190) + uRam00000001832586d0 + 0xc7db35733ddea8fa;
  uVar9 = (uRam00000001832586d0 ^ _UNK_181875198) + uRam0000000183258578 + 0xf83a46d7f345a68b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258578 ^ _UNK_181875190;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832586d0 ^ _UNK_181875198;
  uRam00000001832586f0 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183258578 + 0xf83a46d7f345a68b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832586d0 + 0xc7db35733ddea8fa));
  uRam0000000183258510 =
       (uRam0000000183258510 ^ ~uRam00000001832586c0 & 0xc7db3573b9fc8bdf) + 0x3fe173a44ab92d54 ^
       0x456b0f900d4dc4b1;
  uRam00000001832586c8 =
       (uRam00000001832586c8 * -0x509968d4665975f7 ^ uRam0000000183258510) +
       (~uRam00000001832586c0 & 0xc7db3573b9fc8bdf);
  uRam0000000183258520 = uRam00000001832586c8 ^ uRam0000000183258510;
  uRam0000000183258558 = 0x3fe173a44ab92d54;
  uVar4 = (~uRam00000001832585b0 + 0xf83a46d7f345a68c) *
          ((uRam0000000183258680 ^ 0xc7db35733ddea8fa) +
          (uRam0000000183258680 & 0x47db35733ddea8fa) * 2);
  uVar4 = (uVar4 | uRam00000001832586e8) + (uVar4 & uRam00000001832586e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183258500 =
       func_0x00018a784420((uVar4 | 0x3fe173a4ce9b0e71) + (uVar4 & 0x3fe173a4ce9b0e71));
  uRam0000000183258550 =
       (uRam0000000183258550 ^ uRam0000000183258500 ^ 0xc7db3573b9fc8bdf) + 0xc01a0453b144828b ^
       0x378b84888b83a172;
  uRam0000000183258528 =
       (uRam0000000183258528 * -0x4089f507072430c1 ^ uRam0000000183258550) +
       (uRam0000000183258500 ^ 0xc7db3573b9fc8bdf);
  uRam0000000183258600 = uRam0000000183258528 ^ uRam0000000183258550;
  uRam0000000183258638 = 0xc01a0453b144828b;
  uVar4 = (uRam0000000183258578 ^ _UNK_1818751a0) + uRam00000001832585e8 + 0x3fe173a4ce9b0e71;
  uVar9 = (uRam00000001832585e8 ^ _UNK_1818751a8) + uRam0000000183258578 + 0x803408a762890516;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258578 ^ _UNK_1818751a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832585e8 ^ _UNK_1818751a8;
  uRam00000001832586b8 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183258578 + 0x803408a762890516) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832585e8 + 0x3fe173a4ce9b0e71));
  uVar4 = uRam00000001832586b8 & 0x7fffffffffffffff;
  uRam0000000183258668 = uRam00000001832586d0 ^ uVar4 ^ 0xc0157c4bad42326a;
  uRam0000000183258658 = (uRam0000000183258658 ^ uVar4) + 0xc0157c4bad42326a ^ 0x30a1b8ceee0e51c0;
  uRam0000000183258570 = (uRam0000000183258570 * 0x732faab5e201b909 ^ uRam0000000183258658) + uVar4;
  uRam00000001832585b0 = uRam0000000183258570 ^ uRam0000000183258658;
  uRam0000000183258698 = 0xc0157c4bad42326a;
  uVar4 = (uRam0000000183258630 ^ _UNK_1818751b0) + uRam0000000183258500 + 0xc0157c4b2960114f;
  uVar9 = (uRam0000000183258500 ^ _UNK_1818751b8) + uRam0000000183258630 + 0xc0157c4bad42326a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258630 ^ _UNK_1818751b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183258500 ^ _UNK_1818751b8;
  uRam0000000183258580 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183258630 + 0xc0157c4bad42326a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183258500 + 0xc0157c4b2960114f));
  uRam0000000183258558 = uRam0000000183258558 ^ uRam0000000183258580 ^ 0x3749a99cc3184bfa;
  uRam0000000183258530 =
       (uRam0000000183258580 * 0x657ceb3e6ffb5053 ^ uRam0000000183258558) + uRam0000000183258580;
  uRam0000000183258528 = uRam0000000183258530 ^ uRam0000000183258558;
  uRam00000001832586c8 = 0;
  uVar4 = (uRam0000000183258570 ^ 0x84225cda) + uRam0000000183258578 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258570 ^ 0x84225cda;
  uVar9 = ((uRam0000000183258578 + uRam0000000183258570) * 0x2000 |
          uRam0000000183258578 + uRam0000000183258570 >> 0x33) ^ uRam0000000183258578;
  uRam0000000183258628 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183258570 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183258578 + 0x84225cda));
  uRam0000000183258598 = uRam00000001832585c0 ^ uRam0000000183258628 ^ 0x7fff;
  uRam0000000183258558 = (uRam0000000183258558 ^ uRam0000000183258628) + 0x7fff ^ 0xc0bf3846e446a4cc
  ;
  uRam0000000183258530 =
       (uRam0000000183258530 * -0x6903d62985a7ec79 ^ uRam0000000183258558) + uRam0000000183258628;
  uRam00000001832586d0 = uRam0000000183258530 ^ uRam0000000183258558;
  uRam0000000183258638 = 0x7fff;
  uVar4 = (uRam0000000183258538 ^ 0x84225cda) + uRam0000000183258658 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258538 ^ 0x84225cda;
  uVar9 = ((uRam0000000183258658 + uRam0000000183258538) * 0x2000 |
          uRam0000000183258658 + uRam0000000183258538 >> 0x33) ^ uRam0000000183258658;
  uRam00000001832585c0 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183258538 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183258658 + 0x84225cda));
  uVar4 = uRam00000001832585c0 - (uRam00000001832585c0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam00000001832585c0;
  uRam00000001832585e0 = uRam00000001832585a0 ^ uVar4 ^ 0x7fff;
  uRam00000001832586c0 = (uRam00000001832586c0 ^ uVar4) + 0x7fff ^ 0x44529be92e6bc377;
  uRam0000000183258540 =
       (uRam0000000183258650 * 0x6d64c82b2a7e1f5f ^ uRam00000001832586c0) + uVar4 ^
       uRam00000001832586c0;
  uRam0000000183258650 = 0x7fff;
  uRam00000001832586c8 = func_0x00018a784420(uRam0000000183258520 ^ 0xffdd0083e2ffe161);
  auVar8 = _UNK_1800170c0;
  uRam00000001832586a8 =
       uRam00000001832586a8 ^ uRam00000001832586c8 ^ 0x1bc4433e91d41bc4 ^ 0x8d2bb76875664bef;
  uRam0000000183258548 =
       (uRam0000000183258548 * -0x2510bb5f4595df4b ^ uRam00000001832586a8) +
       (uRam00000001832586c8 ^ 0x1bc4433e91d41bc4);
  uRam00000001832585e0 = uRam0000000183258548 ^ uRam00000001832586a8;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183258620 = 0;
  auVar7 = pshufb(auVar6 ^ _UNK_1818751c0,_UNK_1800170c0);
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar9 + uRam0000000183258680;
  if (auVar7._4_4_ < 0) {
    uVar4 = uRam00000001832586c8 ^ uVar9;
  }
  uRam0000000183258580 = func_0x00018a784420(SUB161(auVar6 ^ _UNK_1818751c0,5) ^ uVar4);
  uVar4 = (param_4 | 0x7fff) ^ uRam0000000183258580;
  uVar3 = (uint)param_4 & 0x7fff;
  uRam00000001832586a8 = (ulonglong)uVar3;
  uRam00000001832586f0 = (uRam00000001832586f0 ^ uVar4) + uRam00000001832586a8 ^ 0x92244a3421b4711e;
  uRam0000000183258598 = (uRam0000000183258598 * 0x2147761c32dd813d ^ uRam00000001832586f0) + uVar4;
  uRam0000000183258618 = uRam0000000183258598 ^ uRam00000001832586f0;
  uRam0000000183258648 = uRam00000001832585c0 ^ uRam00000001832586a8;
  uRam00000001832585f8 = func_0x00018a784420(uRam00000001832585c8 + 0xff79ffa61e0079ff ^ 0xde);
  uRam0000000183258688 =
       (uRam0000000183258688 ^ uRam00000001832585f8 ^ 0x4d0e0c51) + 0x6faead5b ^ 0xbb29a3c11ab2c13c;
  uRam00000001832586e8 =
       (uRam00000001832586e8 * -0x4feba6130fa00617 ^ uRam0000000183258688) +
       (uRam00000001832585f8 ^ 0x4d0e0c51);
  uRam00000001832586f0 = uRam00000001832586e8 ^ uRam0000000183258688;
  uRam0000000183258610 = 0x6faead5b;
  uRam00000001832586c0 = func_0x00018a784420(uRam00000001832585c8 + 0xffae0082d3ffefff ^ 0xb8);
  uRam0000000183258518 =
       (uRam0000000183258518 ^ uRam00000001832586c0 ^ 0x69cd76e1) + 0x19329d49 ^ 0xfd58abfbf3df9816;
  uRam0000000183258550 =
       (uRam0000000183258550 * -0x48eb890d67f2fa63 ^ uRam0000000183258518) +
       (uRam00000001832586c0 ^ 0x69cd76e1);
  uRam0000000183258610 = uRam0000000183258550 ^ uRam0000000183258518;
  uRam0000000183258508 = 0x19329d49;
  uVar4 = (~uRam0000000183258660 + 0x7e474a9a) *
          ((uRam0000000183258698 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183258698 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183258578) + (uVar4 & uRam0000000183258578);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832586e0 =
       func_0x00018a784420((uVar4 | 0xfa6569bc) + (ulonglong)((uint)uVar4 & 0xfa6569bc));
  uRam0000000183258680 =
       (uRam0000000183258680 ^ uRam00000001832586e0) - 0x7e474a99 ^ 0xa848a6a8727bced2;
  uRam00000001832586e0 =
       (uRam00000001832586e0 * 0x62c99676691d1443 ^ uRam0000000183258680) + uRam00000001832586e0;
  uRam0000000183258548 = uRam00000001832586e0 ^ uRam0000000183258680;
  uRam0000000183258550 = 0x81b8b567;
  uRam00000001832585f0 = func_0x00018a784420(uRam0000000183258640 ^ 0xffed0056f2ffba03);
  uVar4 = (uRam00000001832585f0 ^ 0xfe000000) & 0xfffffffffe000000;
  uRam0000000183258538 = uRam00000001832586a0 ^ uVar4 ^ 0x1000036b6;
  uRam0000000183258598 = (uRam0000000183258598 ^ uVar4) + 0x1000036b6 ^ 0x951693123db4773f;
  uRam0000000183258638 = (uRam0000000183258638 * -0x4be7e22233499389 ^ uRam0000000183258598) + uVar4
  ;
  uRam0000000183258680 = uRam0000000183258638 ^ uRam0000000183258598;
  uRam00000001832585d8 = 0x36b6;
  uRam0000000183258528 = func_0x00018a784420(uRam0000000183258688 ^ 0xffdd0031ae006cbd);
  uVar4 = (uRam0000000183258528 & 0x3fffffff) << 0x10 | uRam0000000183258528 >> 0x30;
  uRam00000001832586e0 = (uRam00000001832586e0 ^ uVar4) - 0xd65d0c73 ^ 0xb1ec5ab2fe8b49bf;
  uRam00000001832585b0 = (uRam00000001832585b0 * 0x321a17d9837ec257 ^ uRam00000001832586e0) + uVar4;
  uRam00000001832585a8 = uRam00000001832585b0 ^ uRam00000001832586e0;
  uRam0000000183258618 = 0x29a2f38d;
  uRam0000000183258618 = func_0x00018a784420(uRam0000000183258678 ^ 0xffe900519fff8eb6);
  uVar4 = uRam0000000183258618 & 0x7fffffffffffffff;
  uRam00000001832585c0 = uRam0000000183258510 ^ uVar4 ^ 0xd65d4329;
  uRam0000000183258678 = (uRam0000000183258678 ^ uVar4) + 0xd65d4329 ^ 0xbda9200c3502ed17;
  uRam0000000183258550 = (uRam0000000183258550 * 0x36f8d75812433627 ^ uRam0000000183258678) + uVar4;
  uRam00000001832586b0 = uRam0000000183258550 ^ uRam0000000183258678;
  uRam0000000183258690 = 0xd65d4329;
  uRam0000000183258578 = func_0x00018a784420(uRam0000000183258598 + 0x1affc11eff8fff ^ 0xea);
  uVar4 = (uRam0000000183258578 ^ 0xc7b23800) >> 9 & 0x7ffffffffffff;
  uRam0000000183258660 = (uRam0000000183258660 ^ uVar4) - 0xc7b2383a ^ 0xe363eccb54363d9e;
  uRam00000001832586a0 = (uRam00000001832586a0 * 0x44a5f8def0fceb5 ^ uRam0000000183258660) + uVar4;
  uRam00000001832586a8 = uRam00000001832586a0 ^ uRam0000000183258660;
  uRam0000000183258630 = 0x384dc7c6;
  uVar4 = (~uRam00000001832585f8 + 0xc7b2383b) *
          ((uRam0000000183258670 ^ 0x84221593) +
          (ulonglong)((uint)uRam0000000183258670 & 0x84221593) * 2);
  uVar4 = (uVar4 | uRam0000000183258548) + (uVar4 & uRam0000000183258548);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832585c0 =
       func_0x00018a784420((uVar4 | 0x43902da9) + (ulonglong)((uint)uVar4 & 0x43902da9));
  uVar4 = (uRam00000001832585c0 ^ 0xc7b23e80) & 0xffffffffffffffc0;
  uRam0000000183258648 = uRam00000001832586d0 ^ uVar4 ^ 0xc7b26ef0;
  uRam0000000183258698 = (uRam0000000183258698 ^ uVar4) + 0xc7b26ef0 ^ 0xa46e990595893ae4;
  uRam00000001832585f8 = (uRam00000001832585f8 * 0x5826ae8866056e7 ^ uRam0000000183258698) + uVar4;
  uRam0000000183258538 = uRam00000001832585f8 ^ uRam0000000183258698;
  uRam00000001832586b8 = 0xc7b26ef0;
  uVar4 = (~uRam0000000183258668 + 0x384dc7c7) *
          ((uRam0000000183258560 ^ 0x43904dd5) +
          (ulonglong)((uint)uRam0000000183258560 & 0x43904dd5) * 2);
  uVar4 = (uVar4 | uRam0000000183258568) + (uVar4 & uRam0000000183258568);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183258658 =
       func_0x00018a784420((uVar4 | 0x7bdd8a13) + (ulonglong)((uint)uVar4 & 0x7bdd8a13));
  uVar4 = uRam0000000183258658 ^ 0xffffeff6;
  uRam0000000183258560 = uRam0000000183258550 ^ uVar4 ^ 0x1000036b6;
  uRam0000000183258680 = (uRam0000000183258680 ^ uVar4) + 0x1000036b6 ^ 0xa9b22728dbea952;
  uRam0000000183258520 = (uRam0000000183258520 * 0x51f21077d09d6671 ^ uRam0000000183258680) + uVar4;
  uRam00000001832585a8 = uRam0000000183258520 ^ uRam0000000183258680;
  uRam00000001832585b0 = 0x36b6;
  uRam0000000183258590 = func_0x00018a784420(uRam0000000183258610 ^ 0xfff2ff2de8ffbdbc);
  uVar4 = uRam0000000183258590 << 0x39 | uRam0000000183258590 >> 7;
  uRam0000000183258620 = (uRam0000000183258620 ^ uVar4) + 0x769c3012 ^ 0x9623cde5595ca486;
  uRam0000000183258520 = (uRam0000000183258520 * -0x6f008f8e42d19e41 ^ uRam0000000183258620) + uVar4
  ;
  uRam00000001832586c8 = uRam0000000183258520 ^ uRam0000000183258620;
  uRam0000000183258670 = 0x769c3012;
  uVar4 = (uRam0000000183258538 ^ _UNK_1818751d0) + uRam00000001832585f8 + 0xeb8c8e7e;
  uVar9 = (uRam00000001832585f8 ^ _UNK_1818751d8) + uRam0000000183258538 + 0x19329d49;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258538 ^ _UNK_1818751d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832585f8 ^ _UNK_1818751d8;
  uRam00000001832586e8 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183258538 + 0x19329d49) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832585f8 + 0xeb8c8e7e));
  uRam0000000183258520 =
       (uRam0000000183258520 ^ uRam00000001832586e8) + 0x9228d49 ^ 0xed21d20864025bd1;
  uRam00000001832585e0 =
       (uRam00000001832585e0 * 0x13744f30b5978f83 ^ uRam0000000183258520) + uRam00000001832586e8;
  uRam0000000183258558 = uRam00000001832585e0 ^ uRam0000000183258520;
  uRam00000001832586c0 = 0x9228d49;
  uRam0000000183258628 = func_0x00018a784420(uRam00000001832585b8 + 0x6ff5f64ffe4ff ^ 0xf6);
  uVar4 = (ulonglong)(~(uint)uRam0000000183258628 & 0x769c3012 ^ 0x12451a92);
  uRam00000001832585e8 = uRam00000001832585b0 ^ uVar4 ^ 0x88e14aa4;
  uRam00000001832585d0 = (uRam00000001832585d0 ^ uVar4) + 0x88e14aa4 ^ 0xa550b6c01ba92137;
  uRam0000000183258638 = (uRam0000000183258638 * -0x1ea3699aacb0719d ^ uRam00000001832585d0) + uVar4
  ;
  uRam0000000183258680 = uRam0000000183258638 ^ uRam00000001832585d0;
  uRam00000001832586e8 = 0x88e14aa4;
  uVar4 = (uRam0000000183258600 ^ _UNK_1818751e0) + uRam0000000183258578 + 0xcc36981;
  uVar9 = (uRam0000000183258578 ^ _UNK_1818751e8) + uRam0000000183258600 + 0x88e14aa4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258600 ^ _UNK_1818751e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183258578 ^ _UNK_1818751e8;
  uRam0000000183258560 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183258600 + 0x88e14aa4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183258578 + 0xcc36981));
  uVar4 = uRam0000000183258560 - (uRam0000000183258560 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uRam0000000183258580 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183258560;
  uRam00000001832586b0 = uRam00000001832586b0 ^ uRam0000000183258580 ^ 0x5e07cde8497a2ec1;
  uRam0000000183258618 =
       (uRam0000000183258618 * 0x6834d8c9451415a1 ^ uRam00000001832586b0) + uRam0000000183258580;
  uRam0000000183258660 = uRam0000000183258618 ^ uRam00000001832586b0;
  uRam0000000183258588 = 0;
  uVar4 = func_0x00018a784420(uRam00000001832586d8 ^ 0xfff3008492ffdd0d);
  uRam00000001832586c8 = ((uVar4 ^ 0x36b6) << 0x1e | uVar4 >> 0x22) ^ 0x36b6;
  uRam0000000183258678 = uRam0000000183258528 ^ uRam00000001832586c8 ^ 0x36b6;
  uRam00000001832586d8 = (uRam00000001832586d8 ^ uRam00000001832586c8) + 0x36b6 ^ 0x3f1684ca80466cfb
  ;
  uRam00000001832586c8 = (uVar4 * -0x5ee08a49c76533f ^ uRam00000001832586d8) + uRam00000001832586c8;
  uRam0000000183258508 = uRam00000001832586c8 ^ uRam00000001832586d8;
  uRam00000001832585b8 = 0x36b6;
  uRam0000000183258560 = func_0x00018a784420(0x71001381006921);
  uVar4 = (ulonglong)((uint)uRam0000000183258558 & 0x6faead5b);
  uRam0000000183258650 = (uRam0000000183258568 ^ uVar4) + 0x905152a4 ^ 0x8a0a1848145d3f79;
  uRam0000000183258528 = (uRam0000000183258528 * 0x7a9c6f1244f602cf ^ uRam0000000183258650) + uVar4;
  uRam0000000183258650 = uRam0000000183258528 ^ uRam0000000183258650;
  uRam0000000183258568 = 0x905152a4;
  uVar4 = (uRam0000000183258610 ^ _UNK_1818751f0) + uRam0000000183258660 + 0xeb8c8e7e;
  uVar9 = (uRam0000000183258660 ^ _UNK_1818751f8) + uRam0000000183258610 + 0x905152a4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258610 ^ _UNK_1818751f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183258660 ^ _UNK_1818751f8;
  uRam0000000183258550 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183258610 + 0x905152a4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183258660 + 0xeb8c8e7e));
  uVar4 = (uRam0000000183258550 ^ 0xffffffff) * -0x45a7b44c0a4f7279;
  uRam0000000183258690 = uRam0000000183258690 ^ uVar4 ^ 0xfcec79651220d1e2;
  uRam0000000183258508 = (uRam0000000183258508 * 0x29f7a618703d1c41 ^ uRam0000000183258690) + uVar4;
  uRam0000000183258588 = uRam0000000183258508 ^ uRam0000000183258690;
  uRam00000001832586f0 = 0;
  uRam00000001832585d8 = func_0x00018a784420(uRam00000001832586c8 + 0xffeb008370ffe1ff ^ 0xac);
  uVar4 = uRam00000001832585d8 ^ 0x36b6;
  uRam0000000183258610 = uRam00000001832585b8 ^ uVar4 ^ 0x36b6;
  uRam00000001832586b0 = (uRam00000001832586b0 ^ uVar4) + 0x36b6 ^ 0xd732bd00b0ad3c7a;
  uRam00000001832586f8 = (uRam00000001832586f8 * -0x6a1aa63b56b91095 ^ uRam00000001832586b0) + uVar4
  ;
  uRam0000000183258520 = uRam00000001832586f8 ^ uRam00000001832586b0;
  uRam00000001832585f0 = 0x36b6;
  uVar4 = (uRam0000000183258690 ^ _UNK_181875200) + uRam00000001832586c8 + 0xc92c2f74;
  uVar9 = (uRam00000001832586c8 ^ _UNK_181875208) + uRam0000000183258690 + 0x4d0e0c51;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183258690 ^ _UNK_181875200;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001832586c8 ^ _UNK_181875208;
  uRam00000001832586e0 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183258690 + 0x4d0e0c51) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001832586c8 + 0xc92c2f74));
  uRam00000001832585e8 =
       uRam00000001832585e8 ^ uRam00000001832586e0 & 0x7ffffffffffffff ^ 0x6a90863f938f2d76;
  uRam00000001832585b8 =
       (uRam00000001832585b8 * 0x79f4fee22b0febb1 ^ uRam00000001832585e8) +
       (uRam00000001832586e0 & 0x7ffffffffffffff);
  uRam0000000183258620 = uRam00000001832585b8 ^ uRam00000001832585e8;
  uRam0000000183258590 = 0;
  uVar4 = (uRam00000001832585f8 ^ 0x84221593) + uRam0000000183258530 + 0x84221593;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832585f8 ^ 0x84221593;
  uVar9 = ((uRam0000000183258530 + uRam00000001832585f8) * 0x2000 |
          uRam0000000183258530 + uRam00000001832585f8 >> 0x33) ^ uRam0000000183258530;
  uRam0000000183258528 =
       func_0x00018a784420((uVar9 << 0x1d | uVar9 >> 0x23) - uRam00000001832585f8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183258530 + 0x84221593));
  uVar4 = uRam0000000183258528 - (uRam0000000183258528 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183258528;
  uRam0000000183258650 = uRam0000000183258640 ^ uVar4 ^ 0x36b6;
  uRam0000000183258638 = (uRam0000000183258638 ^ uVar4) + 0x36b6 ^ 0x1b547363ac878f4d;
  uRam00000001832586f0 =
       (uRam00000001832586f0 * -0x1c2c8e5b0abaa845 ^ uRam0000000183258638) + uVar4 ^
       uRam0000000183258638;
  uVar9 = (ulonglong)(uVar3 ^ param_3);
  auVar7._8_8_ = _UNK_181875218;
  auVar7._0_8_ = uVar9 ^ 0x84222325;
  uRam00000001832585a0 = 0x36b6;
  auVar8 = pshufb(auVar7 ^ _UNK_181875220,auVar8);
  uVar5 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar5 + 0x36b6;
  if (auVar8._4_4_ < 0) {
    uVar4 = uRam00000001832586c0 ^ uVar5;
  }
  uRam0000000183258568 = func_0x00018a784420(SUB161(auVar7 ^ _UNK_181875220,5) ^ uVar4);
  uRam0000000183258578 = uVar9 ^ 0x36b6;
  uRam0000000183258548 =
       (uRam0000000183258548 ^ uRam0000000183258568) + uRam0000000183258578 ^ 0xe1f963c9e197d7a5;
  uRam00000001832586e8 =
       (uRam00000001832586e8 * -0xa63d0a20bd7bcc5 ^ uRam0000000183258548) + uRam0000000183258568;
  uRam00000001832586f0 = uRam00000001832586e8 ^ uRam0000000183258548;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x152e3,0x351)
      /* POOL[0x152e3,0x351]: aXS | sixtwo/qu | cYC | ()Lsixtwo/qu; | sixtwo/fV | sgXyu | sixtwo/qt | cYw | (I)Lsixtwo/qt; | cYF | (Lsixtwo/qt;)Lsixtwo/qu; | YELYg | cYE | (Z)Lsixtwo/qu; | LplVs | cYD | gJTkT | cYG | (Ljava/lang/String;)Lsixtwo/qu; | dczoz | oNtMH | cYH | (ZLjava/lang/String;)Lsixtwo/qu; | cYI | hGStG | LkpRK | pmRzS | aXW | byJrA | fVUJp | sixtwo/fW | zSGdC | aYa | HDivr | sixtwo/fY | RjaOd | aYB | aYC | aYb | wsVmd | JHUpj | bGcEu | AxzDu | aYE | aYA | zJAXQ | aYD | sixtwo/fZ | TkVRj | juqnP | Lsixtwo/fZ; | aYJ | (Lsixtwo/ga;Lsixtwo/ga;)Lsixtwo/ga; | noZXa | Ljava/util/concurrent/ConcurrentHashMap; | jav */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a77b5da did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181873310 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fV; aXX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18a7844b0, runtime 6ffff23944b0) =====

void FUN_18a7844b0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018a7844fb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181875300 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fV; aXY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18a7854c0, runtime 6ffff23954c0) =====

void FUN_18a7854c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a785549 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1818758c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fV; aaj ()V (handler @ image 18a777690, runtime 6ffff2387690) =====

void FUN_18a777690(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x152c7,0x350)
      /* POOL[0x152c7,0x350]: C | qvWvL | ddC | YJICs | KrrAc | aXR | aXS | sixtwo/qu | cYC | ()Lsixtwo/qu; | sixtwo/fV | sgXyu | sixtwo/qt | cYw | (I)Lsixtwo/qt; | cYF | (Lsixtwo/qt;)Lsixtwo/qu; | YELYg | cYE | (Z)Lsixtwo/qu; | LplVs | cYD | gJTkT | cYG | (Ljava/lang/String;)Lsixtwo/qu; | dczoz | oNtMH | cYH | (ZLjava/lang/String;)Lsixtwo/qu; | cYI | hGStG | LkpRK | pmRzS | aXW | byJrA | fVUJp | sixtwo/fW | zSGdC | aYa | HDivr | sixtwo/fY | RjaOd | aYB | aYC | aYb | wsVmd | JHUpj | bGcEu | AxzDu | aYE | aYA | zJAXQ | aYD | sixtwo/fZ | TkVRj | juqnP | Lsixtwo/fZ; | aYJ | (Lsixtwo/ga;Lsixtwo/ga;)Lsixtwo/ga; | noZXa | Ljava/ */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018a7776e5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181872810 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xa7776e8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7776e8(void)

{
  FUN_190de3220();
  (*_DAT_181872bf8)();
  return;
}


// ----- block @ rva 0xa7777ec -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7777ec(void)

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


// ----- block @ rva 0xa777e1e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a777e1e(void)

{
  FUN_190ddfc90();
  (*_DAT_181872ca8)();
  return;
}


// ----- block @ rva 0xa778060 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a778060(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa778254 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a778254(void)

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


// ----- block @ rva 0xa7788db -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7788db(void)

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


// ----- block @ rva 0xa778bb4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a778bb4(void)

{
  FUN_190dd72e0();
  (*_DAT_181872bb8)();
  return;
}


// ----- block @ rva 0xa778e4e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a778e4e(void)

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


// ----- block @ rva 0xa778fe1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a778fe1(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181873118)();
  return;
}


// ----- block @ rva 0xa778ffe -----

void FUN_18a778ffe(void)

{
  return;
}


// ----- block @ rva 0xa779008 -----

void FUN_18a779008(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa77b5dd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a77b5dd(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa77b786 -----

void FUN_18a77b786(void)

{
  return;
}


// ----- block @ rva 0xa77bcdf -----

undefined8 thunk_FUN_18a77b76e(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xa77c67b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a77c67b(void)

{
  int iVar1;
  undefined8 unaff_R12;
  longlong *in_stack_00000030;
  int iStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  iStack0000000000000050 = 6;
  uStack0000000000000060 = 8;
  uStack0000000000000058 =
       CONCAT44((uint)((ulonglong)unaff_R12 >> 0x28),(int)(char)((ulonglong)unaff_R12 >> 8));
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa77e033 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a77e033(void)

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


// ----- block @ rva 0xa77e7da -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a77e7da(void)

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


// ----- block @ rva 0xa77ea88 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18a7802a8(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
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


// ----- block @ rva 0xa77f164 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18a7802a8(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
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


// ----- block @ rva 0xa77fb06 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a77fb06(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (*in_RAX)(in_stack_00000030);
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


// ----- block @ rva 0xa7844fe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7844fe(void)

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


// ----- block @ rva 0xa784552 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a784552(void)

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


// ----- block @ rva 0xa7845f8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a7845f8(void)

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


// ----- block @ rva 0xa784641 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a784641(void)

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


// ----- block @ rva 0xa78481d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a78481d(void)

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


// ----- block @ rva 0xa784bb7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a784bb7(void)

{
  FUN_190dd72e0();
  (*_DAT_1818756e8)();
  return;
}


// ----- block @ rva 0xa784d90 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a784d90(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181875708)();
  return;
}


// ----- block @ rva 0xa784e60 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a784e60(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000068 = 0;
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


// ----- block @ rva 0xa785322 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a785322(void)

{
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xa785391 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a785391(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181875388)();
  return;
}


// ----- block @ rva 0xa7853c5 -----

void FUN_18a7853c5(void)

{
  return;
}


// ----- block @ rva 0xa7853d4 -----

void FUN_18a7853d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa78554c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a78554c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181875f58)();
  return;
}


// ----- block @ rva 0xa785f5d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a785f5d(void)

{
  (*_DAT_181876508)();
  return;
}


// ----- block @ rva 0xa786029 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a786029(void)

{
  (*_DAT_181876778)();
  return;
}


// ----- block @ rva 0xa7862bb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7862bb(void)

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


// ----- block @ rva 0xa786416 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a786416(void)

{
  (*_DAT_181876508)();
  return;
}


// ----- block @ rva 0xa786fb9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a786fb9(void)

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


// ----- block @ rva 0xa787305 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a787305(void)

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


// ----- block @ rva 0xa7874e6 -----

void FUN_18a7874e6(void)

{
  return;
}


// ----- block @ rva 0xa787ce9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a787ce9(void)

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


// ----- block @ rva 0xa788024 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a788024(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1818760d8)();
  return;
}


// ----- block @ rva 0xa78808a -----

void FUN_18a78808a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xa7882bb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a788311 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a7882bb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa78a89f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a78a8b6 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a78a89f(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa78b75e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018a78b7c2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18a78b75e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xa7a0cfa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7a0cfa(void)

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


// ----- block @ rva 0xa7a176a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7a176a(void)

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


// ----- block @ rva 0xa7a1800 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7a1800(void)

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


// ----- block @ rva 0xa7a192c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a7a192c(void)

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


// ----- block @ rva 0xa7a194b -----

void FUN_18a7a194b(void)

{
  return;
}


// ----- block @ rva 0xa7a19b7 -----

void FUN_18a7a19b7(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

