// ===== STITCHED CORPUS: sixtwo.ir =====
// handlers: 13  continuation blocks: 129  unresolved table targets: 0
// tables not in tables.json: ['0x12ca710', '0x12cacc8', '0x12cacd8', '0x12cace8', '0x12cacf8', '0x12cafd8', '0x12cafe8', '0x12cb008', '0x12cb018', '0x12cb028', '0x12cb038', '0x12cbad8', '0x12cbae8', '0x12cbaf8', '0x12cbb08', '0x12cbb18', '0x12d1630', '0x12d1638', '0x12d1640', '0x144c38']

// ===== Lsixtwo/ir; _746b4bb81a153ba095982d63ae6cba3f ()V (handler @ image 189290f10, runtime 6ffff0ea0f10) =====

void FUN_189290f10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189290fec did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812c4160 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ir; bkO ()Ljava/lang/String; (handler @ image 1892a6c60, runtime 6ffff0eb6c60) =====

void FUN_1892a6c60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001892a6c80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812c9fb0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ir; bkP ()Z (handler @ image 189283300, runtime 6ffff0e93300) =====

undefined1 FUN_189283300(void)

{
  return 1;
}




// ===== Lsixtwo/ir; bmB ()Ljava/lang/String; (handler @ image 1892a6e60, runtime 6ffff0eb6e60) =====

void FUN_1892a6e60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001892a6e80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812ca090 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ir; bmC (Ljava/lang/String;)Lsixtwo/ir; (handler @ image 1892a7060, runtime 6ffff0eb7060) =====

void FUN_1892a7060(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001892a7085 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812ca170 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ir; bmD (Ljava/lang/String;)Lsixtwo/ir; (handler @ image 1892a7260, runtime 6ffff0eb7260) =====

void FUN_1892a7260(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001892a7285 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812ca250 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ir; bmE (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1892a7460, runtime 6ffff0eb7460) =====

undefined8 FUN_1892a7460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/ir; bmF ([B)Ljava/lang/String; (handler @ image 1892a74f0, runtime 6ffff0eb74f0) =====

void FUN_1892a74f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001892a7590 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812ca4b0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ir; bmG (IJ)Ljava/lang/String; (handler @ image 1892d2870, runtime 6ffff0ee2870) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d2870(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar5 = (~uRam0000000183209b68 + 0x667c81a4d8d454ae) *
          ((uRam0000000183209518 ^ 0x15593a91b87ec785) +
          (uRam0000000183209518 & 0x15593a91b87ec785) * 2);
  uVar5 = (uVar5 | uRam0000000183209b28) + (uVar5 & uRam0000000183209b28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209b30 =
       func_0x0001892d94a0((uVar5 | 0x7325bb3560aa9328) + (uVar5 & 0x7325bb3560aa9328));
  uRam0000000183209630 =
       (uRam0000000183209630 ^ uRam0000000183209b30 ^ 0xb7efb0489a4b0020) + 0x777dbbb5fcdcf4ad ^
       0x5d8c53ba57ddc084;
  uRam0000000183209cb8 =
       (uRam0000000183209cb8 * 0x1a917e6e41515bf5 ^ uRam0000000183209630) +
       (uRam0000000183209b30 ^ 0xb7efb0489a4b0020);
  uRam0000000183209be8 = uRam0000000183209cb8 ^ uRam0000000183209630;
  uRam0000000183209848 = 0x777dbbb5fcdcf4ad;
  uVar5 = (~uRam0000000183209588 + 0xb1444b863bb4cd38) *
          ((uRam00000001832097e0 ^ 0xa7e5426d0aebee87) +
          (uRam00000001832097e0 & 0x27e5426d0aebee87) * 2);
  uVar5 = (uVar5 | uRam0000000183209b88) + (uVar5 & uRam0000000183209b88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209778 =
       func_0x0001892d94a0((uVar5 | 0x16a109eb315f23b0) + (uVar5 & 0x16a109eb315f23b0));
  uRam00000001832097a8 =
       (uRam00000001832097a8 ^ uRam0000000183209778 & 0x3ffffffffff) + 0x16a109ebb57d0095 ^
       0xc845aee487165646;
  uRam0000000183209b28 =
       (uRam0000000183209b28 * 0x236f52ef67ebf543 ^ uRam00000001832097a8) +
       (uRam0000000183209778 & 0x3ffffffffff);
  uRam0000000183209bc8 = uRam0000000183209b28 ^ uRam00000001832097a8;
  uRam0000000183209920 = 0x16a109ebb57d0095;
  uVar5 = (~uRam0000000183209c68 + 0x683e57eb76f83c01) *
          ((uRam0000000183209bd8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183209bd8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001832096b0) + (uVar5 & uRam00000001832096b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209738 =
       func_0x0001892d94a0((uVar5 | 0x683e57ebf2da1f25) + (uVar5 & 0x683e57ebf2da1f25));
  uVar5 = (uRam0000000183209738 & 0x3fffffff) << 0x15 | uRam0000000183209738 >> 0x2b;
  uRam0000000183209650 = (uRam0000000183209650 ^ uVar5) + 0x97c1a8148907c400 ^ 0xc09bb24632f4e899;
  uRam0000000183209988 = (uRam0000000183209988 * 0x119792c3847203d7 ^ uRam0000000183209650) + uVar5;
  uRam0000000183209718 = uRam0000000183209988 ^ uRam0000000183209650;
  uRam0000000183209b68 = 0x97c1a8148907c400;
  uVar5 = (~uRam0000000183209798 + 0x683e57eb76f83c01) *
          ((uRam0000000183209c38 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183209c38 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam0000000183209740) + (uVar5 & uRam0000000183209740);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209688 =
       func_0x0001892d94a0((uVar5 | 0x683e57ebf2da60da) + (uVar5 & 0x683e57ebf2da60da));
  uVar5 = (uRam0000000183209688 ^ 0xc3b76390a7060000) & 0xfffffffffffe0000;
  uRam0000000183209ca8 = uRam0000000183209950 ^ uVar5 ^ 0x683e57eb76f8bbff;
  uRam0000000183209c20 = (uRam0000000183209c20 ^ uVar5) + 0x683e57eb76f8bbff ^ 0x391f5d647468384f;
  uRam0000000183209598 = (uRam0000000183209598 * 0x5c6130e1460286b3 ^ uRam0000000183209c20) + uVar5;
  uRam0000000183209850 = uRam0000000183209598 ^ uRam0000000183209c20;
  uRam00000001832099c8 = 0x683e57eb76f8bbff;
  uVar5 = (~uRam0000000183209708 + 0x97c1a8148907c401) *
          ((uRam0000000183209be8 ^ 0x683e57ebf2da98da) +
          (uRam0000000183209be8 & 0x683e57ebf2da98da) * 2);
  uVar5 = (uVar5 | uRam0000000183209990) + (uVar5 & uRam0000000183209990);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209ae8 =
       func_0x0001892d94a0((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = uRam0000000183209ae8 << 0x31 | uRam0000000183209ae8 >> 0xf;
  uRam00000001832095d8 = uRam0000000183209a08 ^ uVar5 ^ 0x7fff;
  uRam00000001832099c0 = (uRam00000001832099c0 ^ uVar5) + 0x7fff ^ 0x6a3a5197b2f51efc;
  uRam00000001832097c0 = (uRam00000001832097c0 * -0x6d50afcee76ec21 ^ uRam00000001832099c0) + uVar5;
  uRam0000000183209510 = uRam00000001832097c0 ^ uRam00000001832099c0;
  uRam0000000183209c80 = 0x7fff;
  uRam0000000183209b30 = func_0x0001892d94a0(uRam0000000183209ca0 ^ 0xb9cbaa76ad0058df);
  uRam0000000183209b70 =
       (uRam0000000183209b70 ^ uRam0000000183209b30) + 0x86a5feb5f5348838 ^ 0x1e6898347e3964f0;
  uRam0000000183209a78 =
       (uRam0000000183209a78 * -0x503711c422834a71 ^ uRam0000000183209b70) + uRam0000000183209b30;
  uRam00000001832098f0 = uRam0000000183209a78 ^ uRam0000000183209b70;
  uRam0000000183209590 = 0x86a5feb5f5348838;
  uVar5 = (uRam0000000183209b78 ^ _UNK_1812d1630) + uRam0000000183209940 + 0x84225cda;
  uVar10 = (uRam0000000183209940 ^ _UNK_1812d1638) + uRam0000000183209b78 + 0x795a014a0acb77c8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183209b78 ^ _UNK_1812d1630;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183209940 ^ _UNK_1812d1638;
  uRam0000000183209898 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183209b78 + 0x795a014a0acb77c8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183209940 + 0x84225cda));
  uVar5 = (uRam0000000183209898 ^ 0x795a014a0acb7fff) & 0x7ffffffffff00000;
  uRam0000000183209b40 = uRam0000000183209668 ^ uVar5 ^ 0x795a014a0acbf7c7;
  uRam0000000183209770 = (uRam0000000183209770 ^ uVar5) + 0x795a014a0acbf7c7 ^ 0x88fb579802811c91;
  uRam0000000183209ab0 = (uRam0000000183209ab0 * -0x357430e4e1c560f7 ^ uRam0000000183209770) + uVar5
  ;
  uRam0000000183209ca8 = uRam0000000183209ab0 ^ uRam0000000183209770;
  uRam0000000183209b20 = 0x795a014a0acbf7c7;
  uRam00000001832097d0 = func_0x0001892d94a0(uRam00000001832096b8 ^ 0xa6ab7f4555712d62);
  uVar5 = uRam00000001832097d0 & 0xfffffffffff00000;
  uRam0000000183209a08 = uRam0000000183209a10 ^ uVar5 ^ 0x7fff;
  uRam0000000183209c48 = (uRam0000000183209c48 ^ uVar5) + 0x7fff ^ 0xee787ccb6a382e8;
  uRam0000000183209860 = (uRam0000000183209860 * 0x7449d97e7a53d5e9 ^ uRam0000000183209c48) + uVar5;
  uRam0000000183209c00 = uRam0000000183209860 ^ uRam0000000183209c48;
  uRam0000000183209538 = 0x7fff;
  uRam00000001832098b0 = func_0x0001892d94a0(uRam0000000183209998 ^ 0xb143cd9d5a6f6059);
  uVar10 = uRam00000001832098b0 ^ 0xdef2b0d229c2ec80;
  uVar5 = uVar10 >> 1 | uVar10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
           ^ uVar10;
  uRam0000000183209ba0 = (uRam0000000183209ba0 ^ uVar10) + 0x210d4f2dd63d1380 ^ 0x8555e5c967e20dec;
  uRam0000000183209818 = (uRam0000000183209818 * 0xb246521e5f4a2d ^ uRam0000000183209ba0) + uVar10;
  uRam0000000183209cb0 = uRam0000000183209818 ^ uRam0000000183209ba0;
  uRam0000000183209750 = 0x210d4f2dd63d1380;
  uVar5 = (~uRam0000000183209758 + 0xdef2b0d229c2ec81) *
          ((uRam0000000183209bf8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183209bf8 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam0000000183209658) + (uVar5 & uRam0000000183209658);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209520 =
       func_0x0001892d94a0((uVar5 | 0xdef2b0d2ade0b05a) + (uVar5 & 0xdef2b0d2ade0b05a));
  uVar5 = (uRam0000000183209520 ^ 0xdef2b0d229c2ffff) << 10 |
          (uRam0000000183209520 ^ 0xdef2b0d229c2ffff) >> 0x36;
  uRam00000001832095f0 = uRam0000000183209a20 ^ uVar5 ^ 0xdef2b0d229c36c7f;
  uRam0000000183209ba0 = (uRam0000000183209ba0 ^ uVar5) + 0xdef2b0d229c36c7f ^ 0xd66dbd3601c548a4;
  uRam0000000183209c70 = (uRam0000000183209c70 * -0x2e2f35960e94f455 ^ uRam0000000183209ba0) + uVar5
  ;
  uRam0000000183209b68 = uRam0000000183209c70 ^ uRam0000000183209ba0;
  uRam0000000183209800 = 0xdef2b0d229c36c7f;
  uVar5 = func_0x0001892d94a0(uRam0000000183209c00 + 0xe92c2cc9b9fdd384 ^ 0x7e);
  uVar5 = (uVar5 ^ 0xd4bd95c46706ac80) & 0x3fffffffff;
  uRam0000000183209998 = uRam00000001832095a8 ^ uVar5 ^ 0x7fff;
  uRam0000000183209a50 = (uRam0000000183209a50 ^ uVar5) + 0x7fff ^ 0xde3913c46319e423;
  uRam0000000183209a60 = (uRam0000000183209a60 * 0x1ef50fd1e7900bc5 ^ uRam0000000183209a50) + uVar5;
  uRam0000000183209858 = uRam0000000183209a60 ^ uRam0000000183209a50;
  uRam00000001832096b0 = 0x7fff;
  uRam0000000183209628 = func_0x0001892d94a0(uRam0000000183209b20 ^ 0xb153c3ccf2717d4d);
  uVar10 = _UNK_1812d1648;
  uVar5 = _UNK_1812d1640;
  uVar4 = uRam0000000183209628 ^ 0x77fdbbfffdfdf4bd;
  uVar2 = uVar4 >> 1 | uVar4;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar4;
  uRam00000001832096b8 = uRam0000000183209c20 ^ uVar4 ^ 0x8e1ec5a1b259f542;
  uRam00000001832097e8 = (uRam00000001832097e8 ^ uVar4) + 0x8e1ec5a1b259f542 ^ 0xa48846eb5e6228e7;
  uRam00000001832099a8 = (uRam00000001832099a8 * 0x1126fea8bf5a5ec1 ^ uRam00000001832097e8) + uVar4;
  uRam0000000183209b80 = uRam00000001832099a8 ^ uRam00000001832097e8;
  uRam0000000183209830 = 0x8e1ec5a1b259f542;
  uVar2 = (uRam0000000183209800 ^ _UNK_1812d1640) + uRam00000001832095a0 + 0x777dbbb578fed788;
  uVar4 = (uRam00000001832095a0 ^ _UNK_1812d1648) + uRam0000000183209800 + 0x16a109ebb57d0095;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183209800 ^ _UNK_1812d1640;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832095a0 ^ _UNK_1812d1648;
  uRam0000000183209540 =
       func_0x0001892d94a0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183209800 + 0x16a109ebb57d0095) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001832095a0 + 0x777dbbb578fed788));
  uRam00000001832098a0 =
       (uRam00000001832098a0 ^ uRam0000000183209540) + 0x61dcb25e49a1f438 ^ 0x537f948d1f04a73b;
  uRam0000000183209a68 =
       (uRam0000000183209a68 * 0x40ecd50ce3b5e713 ^ uRam00000001832098a0) + uRam0000000183209540;
  uRam00000001832096e0 = uRam0000000183209a68 ^ uRam00000001832098a0;
  uRam0000000183209688 = 0x61dcb25e49a1f438;
  uVar2 = (uRam0000000183209af8 ^ uVar5) + uRam0000000183209c88 + 0x777dbbb578fed788;
  uVar4 = (uRam0000000183209c88 ^ uVar10) + uRam0000000183209af8 + 0x16a109ebb57d0095;
  uVar5 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183209af8 ^ uVar5;
  uVar10 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183209c88 ^ uVar10;
  uRam0000000183209bb8 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183209af8 + 0x16a109ebb57d0095) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183209c88 + 0x777dbbb578fed788));
  uVar5 = uRam0000000183209bb8 - (uRam0000000183209bb8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183209bb8;
  uRam0000000183209808 = (uRam0000000183209808 ^ uVar5) + 0x162109a1b45c0085 ^ 0x75b804f737adafb5;
  uRam00000001832099c8 = (uRam00000001832099c8 * -0x2d96d175625823e1 ^ uRam0000000183209808) + uVar5
  ;
  uRam00000001832096f0 = uRam00000001832099c8 ^ uRam0000000183209808;
  uRam0000000183209ac8 = 0x162109a1b45c0085;
  uVar5 = (~uRam0000000183209780 + 0x2c42134368b8010b) *
          ((uRam0000000183209a20 ^ 0x61dcb25ecd83d71d) +
          (uRam0000000183209a20 & 0x61dcb25ecd83d71d) * 2);
  uVar5 = (uVar5 | uRam0000000183209a48) + (uVar5 & uRam0000000183209a48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209ae8 =
       func_0x0001892d94a0((uVar5 | 0x4d9ea11da53bd617) + (uVar5 & 0x4d9ea11da53bd617));
  uVar5 = (uRam0000000183209ae8 << 0x23 | uRam0000000183209ae8 >> 0x1d) << 0xc |
          (uRam0000000183209ae8 & 0x1fffffff) >> 0x11;
  uRam00000001832099b0 = uRam0000000183209a88 ^ uVar5 ^ 0x8e1ec5a1b259f542;
  uRam0000000183209930 = (uRam0000000183209930 ^ uVar5) + 0x8e1ec5a1b259f542 ^ 0x50bedfcd8c3d6696;
  uRam0000000183209808 = (uRam0000000183209808 * 0x6a1a1694894f4619 ^ uRam0000000183209930) + uVar5;
  uRam0000000183209c10 = uRam0000000183209808 ^ uRam0000000183209930;
  uRam0000000183209850 = 0x8e1ec5a1b259f542;
  uRam0000000183209898 = func_0x0001892d94a0(uRam0000000183209518 ^ 0x21007c22ffe12a);
  uRam0000000183209758 =
       ~((uRam0000000183209898 ^ 0x8e1ec5a1b259f542) * -0x2052849e476445f5) & 0x8e1ec5a1b259f542;
  uRam0000000183209918 = uRam0000000183209918 ^ uRam0000000183209758 ^ 0x1245e125879fd056;
  uRam0000000183209a08 =
       (uRam0000000183209a08 * 0x45dc187d22d9f3e7 ^ uRam0000000183209918) + uRam0000000183209758;
  uRam00000001832098d8 = uRam0000000183209a08 ^ uRam0000000183209918;
  uRam00000001832096f0 = 0;
  uVar5 = ((uRam0000000183209668 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183209668 & 0x84225cda) * 2) * -lRam0000000183209c18;
  uVar5 = (uVar5 | uRam00000001832098d0) + (uVar5 & uRam00000001832098d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832097b0 =
       func_0x0001892d94a0((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam00000001832097b0 & 0x7fffffffffffffff;
  uRam0000000183209a50 = uRam0000000183209500 ^ uVar5 ^ 0x7fff;
  uRam0000000183209c68 = (uRam0000000183209c68 ^ uVar5) + 0x7fff ^ 0xe6ccaff1f924ea64;
  uRam0000000183209520 = (uRam0000000183209520 * -0xa466c2252e9ffc3 ^ uRam0000000183209c68) + uVar5;
  uRam00000001832095c8 = uRam0000000183209520 ^ uRam0000000183209c68;
  uRam0000000183209710 = 0x7fff;
  uVar5 = (uRam0000000183209ab0 ^ _UNK_1812d1650) + uRam0000000183209930 + 0x15593a91b87ec785;
  uVar10 = (uRam0000000183209930 ^ _UNK_1812d1658) + uRam0000000183209ab0 + 0x15593a913c5ce4a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183209ab0 ^ _UNK_1812d1650;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183209930 ^ _UNK_1812d1658;
  uRam0000000183209be0 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183209ab0 + 0x15593a913c5ce4a0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183209930 + 0x15593a91b87ec785));
  auVar9 = _UNK_1800170c0;
  uVar5 = (uRam0000000183209be0 ^ 0xbe4f2a201f2d6400) << 9 |
          (uRam0000000183209be0 ^ 0xbe4f2a201f2d6400) >> 0x37;
  uRam00000001832096f8 = uRam00000001832096f8 ^ uVar5 ^ 0x1cbb1dfc8158ddc3;
  uRam00000001832096a0 = (uRam00000001832096a0 * 0x413c5f7f4e4ce18b ^ uRam00000001832096f8) + uVar5;
  uRam0000000183209690 = uRam00000001832096a0 ^ uRam00000001832096f8;
  auVar7._8_8_ = _UNK_18019c088;
  auVar7._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183209768 = 0;
  auVar8 = pshufb(auVar7 ^ _UNK_1812d1660,_UNK_1800170c0);
  uVar10 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar10 + lRam00000001832096a8;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam0000000183209bd0 ^ uVar10;
  }
  uRam0000000183209a30 = func_0x0001892d94a0(SUB161(auVar7 ^ _UNK_1812d1660,5) ^ uVar5);
  uVar3 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar3;
  uRam0000000183209ab0 = (uRam0000000183209ab0 ^ uRam0000000183209a30) + uVar10 ^ 0xc51a8146705bead4
  ;
  uRam0000000183209b68 =
       (uRam0000000183209b68 * 0x5245c4898819e983 ^ uRam0000000183209ab0) + uRam0000000183209a30;
  uRam0000000183209868 = uRam0000000183209b68 ^ uRam0000000183209ab0;
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar3 ^ 0x84222325;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = 0;
  auVar9 = pshufb(auVar8 ^ _UNK_1812d1670,auVar9);
  uVar2 = auVar9._8_8_ + auVar9._0_8_;
  uVar5 = uVar2 + lRam0000000183209c50;
  if (auVar9._4_4_ < 0) {
    uVar5 = uRam0000000183209b40 ^ uVar2;
  }
  uRam0000000183209818 = uVar10;
  uRam0000000183209780 = func_0x0001892d94a0(SUB161(auVar8 ^ _UNK_1812d1670,5) ^ uVar5);
  uVar5 = (uVar3 ^ param_3) ^ uRam0000000183209780;
  uVar2 = (uVar10 + param_3) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183209a38 = (uRam0000000183209a38 ^ uVar5) + uVar2 ^ 0xba95524145f4c088;
  uRam0000000183209c20 = (uRam0000000183209c20 * 0x608b244776df3d71 ^ uRam0000000183209a38) + uVar5;
  uRam0000000183209b90 = uRam0000000183209c20 ^ uRam0000000183209a38;
  uVar4 = uVar2 & 0xffffffff;
  uRam0000000183209c10 = uVar4;
  uRam0000000183209a60 = func_0x0001892d94a0(uRam0000000183209530 + 0xff230023dc0005ff ^ 0x29);
  uVar5 = uRam0000000183209a60 << 0x2e | (uRam0000000183209a60 & 0x3ffffffff) >> 0x12;
  uRam0000000183209b40 = (uRam0000000183209b40 ^ uVar5) + 0xeb3cfff9 ^ 0x833db608f03be2f3;
  uRam0000000183209a38 = (uRam0000000183209a38 * 0x5fb106b6497e845b ^ uRam0000000183209b40) + uVar5;
  uRam0000000183209710 = uRam0000000183209a38 ^ uRam0000000183209b40;
  uRam00000001832099d8 = uRam0000000183209960 ^ 0xeb3cfff9;
  uRam0000000183209940 = 0xeb3cfff9;
  uVar5 = (uRam0000000183209980 ^ _UNK_1812d1680) + uRam0000000183209b78 + 0x74133ea8;
  uVar10 = (uRam0000000183209b78 ^ _UNK_1812d1688) + uRam0000000183209980 + 0xb3ae087;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183209980 ^ _UNK_1812d1680;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183209b78 ^ _UNK_1812d1688;
  uRam0000000183209970 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183209980 + 0xb3ae087) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183209b78 + 0x74133ea8));
  uVar5 = uRam0000000183209970 >> 1 | uRam0000000183209970;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183209970;
  uRam0000000183209b60 = (uRam0000000183209b60 ^ uVar5) + 0xfb0bfd0a ^ 0xb96653d41b4fdaa1;
  uRam00000001832098e8 = (uRam00000001832098e8 * 0x654d071e1ffd823 ^ uRam0000000183209b60) + uVar5;
  uRam00000001832096e0 = uRam00000001832098e8 ^ uRam0000000183209b60;
  uRam0000000183209980 = 0xfb0bfd0a;
  uVar5 = (~uRam0000000183209bb0 + 0x4fd40841) *
          ((uRam0000000183209ca0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183209ca0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183209cc0) + (uVar5 & uRam0000000183209cc0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832096a0 =
       func_0x0001892d94a0((uVar5 | 0xcbf62b65) + (ulonglong)((uint)uVar5 & 0xcbf62b65));
  uRam0000000183209ae0 =
       (uRam0000000183209ae0 ^ uRam00000001832096a0 * 0x648eb9cac255c895) - 0x4fd40840 ^
       0xedabe0e278814c72;
  uRam0000000183209948 =
       (uRam0000000183209948 * -0x8e78941543d2f33 ^ uRam0000000183209ae0) +
       uRam00000001832096a0 * 0x648eb9cac255c895;
  uRam00000001832096e8 = uRam0000000183209948 ^ uRam0000000183209ae0;
  uRam00000001832095b0 = uRam00000001832099a0 ^ 0xffffffffb02bf7c0;
  uRam0000000183209b70 = 0xb02bf7c0;
  uVar5 = (uRam00000001832095c8 ^ _UNK_1812d1690) + uRam0000000183209b90 + 0x84227bad;
  uVar10 = (uRam0000000183209b90 ^ _UNK_1812d1698) + uRam00000001832095c8 + 0x4fd40840;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832095c8 ^ _UNK_1812d1690;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183209b90 ^ _UNK_1812d1698;
  uRam00000001832098d8 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001832095c8 + 0x4fd40840) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183209b90 + 0x84227bad));
  uVar5 = uRam00000001832098d8 ^ 0x1b9b4b7a6200;
  uRam00000001832099f8 = uRam00000001832095f8 ^ uVar5 ^ 0x4fd460c8;
  uRam0000000183209a00 = (uRam0000000183209a00 ^ uVar5) + 0x4fd460c8 ^ 0x4cb762978cb97ebe;
  uRam0000000183209718 = (uRam0000000183209718 * 0x37b4c2fcf86437 ^ uRam0000000183209a00) + uVar5;
  uRam0000000183209b80 = uRam0000000183209718 ^ uRam0000000183209a00;
  uRam0000000183209cf0 = 0x4fd460c8;
  uVar5 = (uRam0000000183209c00 ^ _UNK_1812d16a0) + uRam0000000183209b80 + 0x84227bad;
  uVar10 = (uRam0000000183209b80 ^ _UNK_1812d16a8) + uRam0000000183209c00 + 0xd1f55b1d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183209c00 ^ _UNK_1812d16a0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183209b80 ^ _UNK_1812d16a8;
  uRam0000000183209c40 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183209c00 + 0xd1f55b1d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183209b80 + 0x84227bad));
  uVar5 = uRam0000000183209c40 - (uRam0000000183209c40 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183209c40;
  uVar5 = uVar5 << 0x39 | uVar5 >> 7;
  uRam0000000183209778 = uRam00000001832095b8 ^ uVar5 ^ 0xd1f5b3a5;
  uRam00000001832097d0 = (uRam00000001832097d0 ^ uVar5) + 0xd1f5b3a5 ^ 0x254b49756d8a2cb2;
  uRam0000000183209ad8 = (uRam0000000183209ad8 * 0xe8fe82d4dc7ba0b ^ uRam00000001832097d0) + uVar5;
  uRam0000000183209a40 = uRam0000000183209ad8 ^ uRam00000001832097d0;
  uRam0000000183209788 = uRam0000000183209568 ^ 0xd1f5b3a5;
  uRam0000000183209b48 = 0xd1f5b3a5;
  uVar5 = (~uRam0000000183209960 + 0x2e0aa4e4) *
          ((uRam0000000183209968 ^ 0x55d79080) +
          (ulonglong)((uint)uRam0000000183209968 & 0x55d79080) * 2);
  uVar5 = (uVar5 | uRam0000000183209c70) + (uVar5 & uRam0000000183209c70);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832095a8 =
       func_0x0001892d94a0((uVar5 | 0x7bdd3463) + (ulonglong)((uint)uVar5 & 0x7bdd3463));
  uVar5 = uRam00000001832095a8 >> 1 | uRam00000001832095a8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001832095a8;
  uRam0000000183209ba8 = uRam0000000183209858 ^ uVar5 ^ 0x100005888;
  uRam0000000183209578 = (uRam0000000183209578 ^ uVar5) + 0x100005888 ^ 0x8907843389fd1e95;
  uRam0000000183209780 = (uRam0000000183209780 * -0x5402f589fe3ab67 ^ uRam0000000183209578) + uVar5;
  uRam0000000183209ad0 = uRam0000000183209780 ^ uRam0000000183209578;
  uRam0000000183209940 = 0x5888;
  uVar5 = (~uRam00000001832096e0 + 0xa2451961) *
          ((uRam0000000183209978 ^ 0xd9991c0d) +
          (ulonglong)((uint)uRam0000000183209978 & 0xd9991c0d) * 2);
  uVar5 = (uVar5 | uRam0000000183209820) + (uVar5 & uRam0000000183209820);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209b48 =
       func_0x0001892d94a0((uVar5 | 0x7bdc056d) + (ulonglong)((uint)uVar5 & 0x7bdc056d));
  uVar5 = uRam0000000183209b48 ^ 0xffff3f68;
  uRam0000000183209c98 = uRam0000000183209890 ^ uVar5 ^ 0x100005888;
  uRam00000001832096f0 = (uRam00000001832096f0 ^ uVar5) + 0x100005888 ^ 0x691cf1fa41d600b4;
  uRam0000000183209b98 = (uRam0000000183209b98 * -0x6806774b3f71f925 ^ uRam00000001832096f0) + uVar5
  ;
  uRam0000000183209cd0 = uRam0000000183209b98 ^ uRam00000001832096f0;
  uRam0000000183209c78 = 0x5888;
  uVar5 = (~uRam0000000183209b40 + 0xfb0bfd0b) *
          ((uRam0000000183209830 ^ 0x6f1edcdc) +
          (ulonglong)((uint)uRam0000000183209830 & 0x6f1edcdc) * 2);
  uVar5 = (uVar5 | uRam00000001832099e8) + (uVar5 & uRam00000001832099e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209cb0 =
       func_0x0001892d94a0((uVar5 | 0x941521d6) + (ulonglong)((uint)uVar5 & 0x941521d6));
  uRam0000000183209c40 =
       (uRam0000000183209c40 ^ uRam0000000183209cb0) + 0x103702f3 ^ 0xb7a805a4d719b3f7;
  uRam0000000183209b78 =
       (uRam0000000183209b78 * 0x254c26d6e9214381 ^ uRam0000000183209c40) + uRam0000000183209cb0;
  uRam0000000183209978 = uRam0000000183209b78 ^ uRam0000000183209c40;
  uRam00000001832099e8 = 0x103702f3;
  uVar5 = (uRam0000000183209870 ^ _UNK_1812d16b0) + uRam00000001832097b8 + 0x6f1edcdc;
  uVar10 = (uRam00000001832097b8 ^ _UNK_1812d16b8) + uRam0000000183209870 + 0xfb0bfd0a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183209870 ^ _UNK_1812d16b0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001832097b8 ^ _UNK_1812d16b8;
  uRam0000000183209758 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183209870 + 0xfb0bfd0a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832097b8 + 0x6f1edcdc));
  uVar5 = uRam0000000183209758 - (uRam0000000183209758 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183209758;
  uRam0000000183209bc0 = (uRam0000000183209bc0 ^ uVar5) + 0xeb08fd08 ^ 0x5008ecd150057bb6;
  uRam0000000183209888 = (uRam0000000183209888 * 0x214e7e683cf4a39b ^ uRam0000000183209bc0) + uVar5;
  uRam0000000183209c10 = uRam0000000183209888 ^ uRam0000000183209bc0;
  uRam0000000183209bd8 = 0xeb08fd08;
  uRam0000000183209bd0 = func_0x0001892d94a0(uRam0000000183209918 ^ 0xffe0ff7be4ffe1ea);
  uRam0000000183209500 = (ulonglong)(~(uint)uRam0000000183209bd0 & 0xe648fd03);
  uRam0000000183209798 = uRam0000000183209798 ^ uRam0000000183209500 ^ 0x6532c1917b6d4c94;
  uRam0000000183209820 =
       (uRam0000000183209820 * 0x193e6cc9d66571cd ^ uRam0000000183209798) + uRam0000000183209500;
  uRam00000001832096a0 = uRam0000000183209820 ^ uRam0000000183209798;
  uRam00000001832096b0 = 0;
  uVar5 = (uRam0000000183209a80 ^ 0x84227bad) + uRam0000000183209be8 + 0x84227bad;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183209a80 ^ 0x84227bad;
  uVar10 = ((uRam0000000183209be8 + uRam0000000183209a80) * 0x2000 |
           uRam0000000183209be8 + uRam0000000183209a80 >> 0x33) ^ uRam0000000183209be8;
  uRam0000000183209948 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) - uRam0000000183209a80 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183209be8 + 0x84227bad));
  uVar5 = uRam0000000183209948 << 0x14 | uRam0000000183209948 >> 0x2c;
  uRam0000000183209718 = uRam0000000183209bc0 ^ uVar5 ^ 0x5888;
  uRam0000000183209938 = (uRam0000000183209938 ^ uVar5) + 0x5888 ^ 0x2c3ccf4f068158b6;
  uRam0000000183209ab8 = (uRam0000000183209ab8 * -0x1c446de32b167171 ^ uRam0000000183209938) + uVar5
  ;
  uRam00000001832096f0 = uRam0000000183209ab8 ^ uRam0000000183209938;
  uRam00000001832099c8 = 0x5888;
  uVar5 = (~uRam0000000183209520 + 0x100000000) *
          ((uRam0000000183209a20 ^ 0x6f1edcdc) +
          (ulonglong)((uint)uRam0000000183209a20 & 0x6f1edcdc) * 2);
  uVar5 = (uVar5 | uRam0000000183209ad0) + (uVar5 & uRam0000000183209ad0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832096e0 =
       func_0x0001892d94a0((uVar5 | 0x90e12323) + (ulonglong)((uint)uVar5 & 0x90e12323));
  uRam0000000183209c80 =
       (uRam0000000183209c80 ^ uRam00000001832096e0 & 0xffffffffffffffe0) + 0x14c30006 ^
       0xe2d97d5f0a9a118b;
  uRam0000000183209958 =
       (uRam0000000183209958 * -0x5d10d7832e676eb7 ^ uRam0000000183209c80) +
       (uRam00000001832096e0 & 0xffffffffffffffe0);
  uRam0000000183209690 = uRam0000000183209958 ^ uRam0000000183209c80;
  uRam00000001832096c8 = 0x14c30006;
  uVar5 = (~uRam0000000183209788 + 0x14c30007) *
          ((uRam0000000183209710 ^ 0x6f1edcdc) +
          (ulonglong)((uint)uRam0000000183209710 & 0x6f1edcdc) * 2);
  uVar5 = (uVar5 | uRam0000000183209810) + (uVar5 & uRam0000000183209810);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209638 =
       func_0x0001892d94a0((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uVar5 = uRam0000000183209638 ^ 0xeb3cfff9;
  uVar10 = uVar5 >> 1 | uVar5;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uRam0000000183209ae0 = uRam0000000183209ae0 ^ uVar5 ^ 0x960aacbe8267c0e7;
  uRam0000000183209870 = (uRam0000000183209870 * -0x7386b1eae086fd63 ^ uRam0000000183209ae0) + uVar5
  ;
  uRam0000000183209bd8 = uRam0000000183209870 ^ uRam0000000183209ae0;
  uRam0000000183209c08 = uRam0000000183209798;
  uRam00000001832096b0 = 0;
  uVar5 = ((uRam00000001832097e0 ^ 0x84227bad) +
          (ulonglong)((uint)uRam00000001832097e0 & 0x84227bad) * 2) * -uRam0000000183209a00;
  uVar5 = (uVar5 | uRam00000001832096d8) + (uVar5 & uRam00000001832096d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209ce8 =
       func_0x0001892d94a0((uVar5 | 0x84227bad) + (ulonglong)((uint)uVar5 & 0x84227bad));
  uVar5 = uRam0000000183209ce8 & 0x3fffffffffffff;
  uRam0000000183209760 = uRam0000000183209728 ^ uVar5 ^ 0x5888;
  uRam0000000183209cd8 = (uRam0000000183209cd8 ^ uVar5) + 0x5888 ^ 0x1f8ad7d2f9633e2e;
  uRam0000000183209ad0 = (uRam0000000183209ad0 * -0x74150b1a9a0dc27b ^ uRam0000000183209cd8) + uVar5
  ;
  uRam0000000183209a70 = uRam0000000183209ad0 ^ uRam0000000183209cd8;
  uRam0000000183209720 = 0x5888;
  uVar5 = (~uRam00000001832099c0 + 0x6a18aff9) *
          ((uRam0000000183209ca0 ^ 0xee3a8cdd) +
          (ulonglong)((uint)uRam0000000183209ca0 & 0xee3a8cdd) * 2);
  uVar5 = (uVar5 | uRam0000000183209930) + (uVar5 & uRam0000000183209930);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183209c70 =
       func_0x0001892d94a0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam0000000183209c08 = uRam0000000183209c08 ^ uRam0000000183209c70 ^ 0x7bd096c0554dbb84;
  uRam0000000183209b90 =
       (uRam0000000183209b90 * -0x696e6bf6d31edc9 ^ uRam0000000183209c08) + uRam0000000183209c70;
  uRam0000000183209b30 = uRam0000000183209b90 ^ uRam0000000183209c08;
  uRam0000000183209b40 = 0;
  uRam0000000183209bf8 = func_0x0001892d94a0(uRam0000000183209bc8 + 0x7008495001dff ^ 0x41);
  uVar5 = uRam0000000183209bf8 << 0x15 | (uRam0000000183209bf8 & 0x7ffffffffffff) >> 0x2b;
  uRam0000000183209620 = uRam00000001832095b0 ^ uVar5 ^ 0x5888;
  uRam0000000183209a70 = (uRam0000000183209a70 ^ uVar5) + 0x5888 ^ 0xf7dd289a42653b42;
  uRam0000000183209b08 = (uRam0000000183209b08 * -0x5b1058e7ebaf803f ^ uRam0000000183209a70) + uVar5
  ;
  uRam0000000183209920 = uRam0000000183209b08 ^ uRam0000000183209a70;
  uRam0000000183209cd8 = 0x5888;
  uVar5 = uVar4 ^ 0x84222325 ^ uRam0000000183209c08;
  lVar6 = (uVar4 ^ 0x84222325) + uRam00000001832096e8;
  uVar10 = uVar5 + lVar6;
  uVar11 = (uRam00000001832096e8 ^ 0x5888) + uRam0000000183209c08 + 0x5888;
  uVar5 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar5;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001832096e8 ^ 0x5888;
  uRam0000000183209898 =
       func_0x0001892d94a0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183209c08 + 0x5888) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar5 = (uRam0000000183209898 & 0xfffffffffffffff) >> 1 | uRam0000000183209898 & 0xfffffffffffffff
  ;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam0000000183209898 & 0xfffffffffffffff;
  lVar6 = uVar4 - ((uint)uVar2 & 0x5888) * 2;
  uRam0000000183209530 = (uRam0000000183209530 ^ uVar5) + lVar6 + 0x5888 ^ 0xd4b1d44d909a82ae;
  uRam0000000183209c00 = (uRam0000000183209c00 * -0x13544d6468addfed ^ uRam0000000183209530) + uVar5
  ;
  uRam00000001832099f0 = uRam0000000183209c00 ^ uRam0000000183209530;
  uRam00000001832096c8 = lVar6 + 0x5888U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xe91,0x35)
      /* POOL[0xe91,0x35]: l/concurrent/CompletableFuture; | sixtwo/ir | toString | ja */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001892d4fd0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812cfca8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ir; bmH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18928d560, runtime 6ffff0e9d560) =====

void FUN_18928d560(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018928d59c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812c2d30 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ir; bmI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18928e450, runtime 6ffff0e9e450) =====

void FUN_18928e450(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018928e4cd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812c3270 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ir; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 189283390, runtime 6ffff0e93390) =====

void FUN_189283390(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xe91,0x35)
      /* POOL[0xe91,0x35]: l/concurrent/CompletableFuture; | sixtwo/ir | toString | ja */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018928346f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812c0280 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ir; toJson ()Lcom/google/gson/JsonObject; (handler @ image 189296cc0, runtime 6ffff0ea6cc0) =====

void FUN_189296cc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xe91,0x35)
      /* POOL[0xe91,0x35]: l/concurrent/CompletableFuture; | sixtwo/ir | toString | ja */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189296dae did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812c5730 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x9283472 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189283472(void)

{
  FUN_190ddce00();
  (*_DAT_1812c0dc8)();
  return;
}


// ----- block @ rva 0x92886da -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892886da(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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


// ----- block @ rva 0x9289062 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189289062(void)

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


// ----- block @ rva 0x928957f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18928957f(void)

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


// ----- block @ rva 0x928bd09 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18928bd09(void)

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


// ----- block @ rva 0x928c095 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18928c095(void)

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


// ----- block @ rva 0x928c487 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928c487(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_1812c0b88)();
  return;
}


// ----- block @ rva 0x928d3b3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18928d3b3(void)

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


// ----- block @ rva 0x928d3e3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928d3e3(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->Throw /*0x68*/))();
  (*_DAT_1812c0f98)();
  return;
}


// ----- block @ rva 0x928d3f4 -----

void FUN_18928d3f4(void)

{
  return;
}


// ----- block @ rva 0x928d460 -----

void FUN_18928d460(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x928d59f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928d59f(void)

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


// ----- block @ rva 0x928d5d8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928d5d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1812c31c8)();
  return;
}


// ----- block @ rva 0x928d5f3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18928d5f3(void)

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


// ----- block @ rva 0x928d74a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928d74a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1812c31b8)();
  return;
}


// ----- block @ rva 0x928d896 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18928d896(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x928db37 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928db37(void)

{
  FUN_190dd72e0();
  (*_DAT_1812c30a8)();
  return;
}


// ----- block @ rva 0x928df7d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928df7d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1812c31c8)();
  return;
}


// ----- block @ rva 0x928e175 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928e175(void)

{
  FUN_190de3220();
  (*_DAT_1812c2ea8)();
  return;
}


// ----- block @ rva 0x928e1cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928e1cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_1812c31a8)();
  return;
}


// ----- block @ rva 0x928e358 -----

void FUN_18928e358(void)

{
  return;
}


// ----- block @ rva 0x928e4d0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928e4d0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1812c3e18)();
  return;
}


// ----- block @ rva 0x928ed43 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928ed43(void)

{
  (*_DAT_1812c3e08)();
  return;
}


// ----- block @ rva 0x928f409 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928f409(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined2 uStack00000000000000b6;
  undefined8 uStack00000000000000b8;
  undefined2 uStack00000000000000c0;
  
  uStack00000000000000b6 = 0x74;
  rdtsc();
  uStack00000000000000b8 = 0x69002f006f0077;
  rdtsc();
  uStack00000000000000c0 = 0x72;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
  FUN_190ddfc90();
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


// ----- block @ rva 0x928f6be -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928f6be(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1812c3dd8)();
  return;
}


// ----- block @ rva 0x928fc10 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18928fc10(void)

{
  (*_DAT_1812c3e08)();
  return;
}


// ----- block @ rva 0x92900a8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892900a8(void)

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


// ----- block @ rva 0x929076e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18929076e(void)

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


// ----- block @ rva 0x9290b49 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189290b49(void)

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


// ----- block @ rva 0x9290d52 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189290d52(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1812c3ec8)();
  return;
}


// ----- block @ rva 0x9290dad -----

void FUN_189290dad(void)

{
  return;
}


// ----- block @ rva 0x9290dcc -----

void FUN_189290dcc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9290fef -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189290fef(void)

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


// ----- block @ rva 0x92926b0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892926b0(void)

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


// ----- block @ rva 0x9293506 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189293506(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack0000000000000098;
  
  uStack0000000000000098 = 0;
  uStack0000000000000058 = 0x18;
  uStack0000000000000050 = CONCAT44(in_stack_00000048._4_4_,0x18);
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


// ----- block @ rva 0x9293859 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189293859(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
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


// ----- block @ rva 0x9293932 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189293932(void)

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


// ----- block @ rva 0x9296459 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189296459(void)

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


// ----- block @ rva 0x92966be -----

void thunk_FUN_189292eec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x92969cb -----

void thunk_FUN_189292eec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x9296a4c -----

void FUN_189296a4c(void)

{
  return;
}


// ----- block @ rva 0x9296db1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189296db1(void)

{
  FUN_190ddce00();
  (*_DAT_1812c6538)();
  return;
}


// ----- block @ rva 0x929d9af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18929d9af(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_RAX + 0x560))(in_stack_00000038,2);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x3d1,0x14);
  (*_DAT_1812c6a08)();
  return;
}


// ----- block @ rva 0x929dff2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18929dff2(void)

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


// ----- block @ rva 0x92a363c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a363c(void)

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


// ----- block @ rva 0x92a41cc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a41cc(void)

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


// ----- block @ rva 0x92a433c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a433c(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1812c70b8)();
  return;
}


// ----- block @ rva 0x92a48d2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a48d2(void)

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


// ----- block @ rva 0x92a4e33 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a4e33(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190de3220(in_stack_00000038,&stack0x00000098,*_DAT_18301ee50 + 0x42e,*_DAT_18301ee50 + 0x441,
                0x14);
  (*_DAT_1812c6708)();
  return;
}


// ----- block @ rva 0x92a5048 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a5048(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1812c67b8)();
  return;
}


// ----- block @ rva 0x92a54aa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a54aa(void)

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


// ----- block @ rva 0x92a67c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a67c4(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1812c5f18)();
  return;
}


// ----- block @ rva 0x92a6acc -----

void FUN_1892a6acc(void)

{
  return;
}


// ----- block @ rva 0x92a6b38 -----

void FUN_1892a6b38(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92a6c83 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6c83(void)

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


// ----- block @ rva 0x92a6cbc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6cbc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812c9fd8)();
  return;
}


// ----- block @ rva 0x92a6ce1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a6ce1(void)

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


// ----- block @ rva 0x92a6cf6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6cf6(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ca018)();
  return;
}


// ----- block @ rva 0x92a6d1e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a6d1e(void)

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


// ----- block @ rva 0x92a6d3f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6d3f(void)

{
  FUN_190dd9df0();
  (*_DAT_1812ca028)();
  return;
}


// ----- block @ rva 0x92a6d72 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a6d72(void)

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


// ----- block @ rva 0x92a6d96 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6d96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812ca038)();
  return;
}


// ----- block @ rva 0x92a6dce -----

void FUN_1892a6dce(void)

{
  return;
}


// ----- block @ rva 0x92a6dd6 -----

void FUN_1892a6dd6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92a6e83 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6e83(void)

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


// ----- block @ rva 0x92a6ebc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6ebc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812ca128)();
  return;
}


// ----- block @ rva 0x92a6ef6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6ef6(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ca0e8)();
  return;
}


// ----- block @ rva 0x92a6f1e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a6f1e(void)

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


// ----- block @ rva 0x92a6f72 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a6f72(void)

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


// ----- block @ rva 0x92a6f96 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6f96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812ca0b8)();
  return;
}


// ----- block @ rva 0x92a6fbd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a6fbd(void)

{
  (*_DAT_1812ca0c8)();
  return;
}


// ----- block @ rva 0x92a6fce -----

void FUN_1892a6fce(void)

{
  return;
}


// ----- block @ rva 0x92a6fd6 -----

void FUN_1892a6fd6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92a7088 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a7088(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92a70c1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a70c1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812ca188)();
  return;
}


// ----- block @ rva 0x92a70e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a70e6(void)

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


// ----- block @ rva 0x92a70fb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a70fb(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ca198)();
  return;
}


// ----- block @ rva 0x92a7123 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a7123(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92a7144 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a7144(void)

{
  FUN_190dd9df0();
  (*_DAT_1812ca208)();
  return;
}


// ----- block @ rva 0x92a719b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a719b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812ca1f8)();
  return;
}


// ----- block @ rva 0x92a71d3 -----

void FUN_1892a71d3(void)

{
  return;
}


// ----- block @ rva 0x92a71dd -----

void FUN_1892a71dd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92a7288 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a7288(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92a72c1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a72c1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812ca298)();
  return;
}


// ----- block @ rva 0x92a72e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a72e6(void)

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


// ----- block @ rva 0x92a72fb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a72fb(void)

{
  FUN_190dd72e0();
  (*_DAT_1812ca2d8)();
  return;
}


// ----- block @ rva 0x92a7344 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a7344(void)

{
  FUN_190dd9df0();
  (*_DAT_1812ca2c8)();
  return;
}


// ----- block @ rva 0x92a7377 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892a7377(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92a739b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a739b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812ca288)();
  return;
}


// ----- block @ rva 0x92a73c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892a73c2(void)

{
  (*_DAT_1812ca2e8)();
  return;
}


// ----- block @ rva 0x92a73d3 -----

void FUN_1892a73d3(void)

{
  return;
}


// ----- block @ rva 0x92a73dd -----

void FUN_1892a73dd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92a7593 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001892a75c9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1892a7593(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x92a75e6 -----

void FUN_1892a75e6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0001892a7611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812ca710 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x92aca41 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892aca41(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  uint uVar11;
  undefined1 auVar10 [16];
  
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + -0x30);
  uVar3 = (~_DAT_183208968 + 2) *
          ((_DAT_183208a00 ^ unaff_RSI ^ 0x84222325) +
          ((unaff_RSI ^ 0x84222325) & _DAT_183208a00) * 2);
  uVar3 = (uVar3 | _DAT_183208ae0) + (uVar3 & _DAT_183208ae0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x0001892d27e0((unaff_RSI ^ 0x84222324 | uVar3) + (uVar3 & (unaff_RSI ^ 0x84222324)))
  ;
  _DAT_183208a98 = uVar3;
  *(ulonglong *)(unaff_RBP + 0x90) = unaff_RSI;
  _DAT_1832089a8 = _DAT_183208a88;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = unaff_RSI;
  uVar5 = (uint)unaff_RSI;
  uVar11 = (uint)(unaff_RSI >> 0x20);
  uVar4 = uVar5 & (uint)DAT_18001a990;
  auVar1._8_4_ = uVar5;
  auVar1._0_8_ = unaff_RSI;
  auVar1._12_4_ = uVar11;
  auVar2._8_4_ = uVar5;
  auVar2._0_8_ = unaff_RSI;
  auVar2._12_4_ = uVar11;
  uVar7 = SUB164(auVar1 | _DAT_18001a990,0);
  uVar5 = SUB164(_DAT_18001a990 ^ auVar2,0);
  uVar6 = SUB168(_DAT_18001a990 ^ auVar2,0);
  auVar9._8_4_ = 0xffffffff;
  auVar9._0_8_ = 0xffffffffffffffff;
  auVar9._12_4_ = 0xffffffff;
  uVar8 = SUB164(auVar9 ^ auVar10,0);
  _DAT_1832089b8 =
       (ulonglong)_DAT_1812cba10 * (ulonglong)uVar5 +
       ((ulonglong)_DAT_1812cba20 * (ulonglong)uVar5 + (uVar6 >> 0x20) * (ulonglong)_DAT_1812cba10
       << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_1812cb9f0 +
       ((ulonglong)_DAT_1812cba00 * (ulonglong)uVar7 +
        (SUB168(auVar1 | _DAT_18001a990,0) >> 0x20) * (ulonglong)_DAT_1812cb9f0 << 0x20) +
       ((ulonglong)_DAT_1812cb9e0 * (ulonglong)uVar4 << 0x20 |
       (ulonglong)_DAT_1812cb9d0 * (ulonglong)uVar4) +
       ((ulonglong)_DAT_1812cb9c0 * (unaff_RSI & 0xffffffff) +
        (ulonglong)_DAT_1812cb9b0 * (ulonglong)uVar11 << 0x20) +
       (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_1812cb9b0 +
       (-((ulonglong)uVar8 * (ulonglong)_DAT_1812cba90 +
         ((ulonglong)_DAT_1812cbac0 * (ulonglong)uVar8 +
          (SUB168(auVar9 ^ auVar10,0) >> 0x20) * (ulonglong)_DAT_1812cba90 << 0x20)) -
       ((ulonglong)uVar5 * (ulonglong)_DAT_1812cbaa0 +
        ((ulonglong)_DAT_1812cbab0 * (ulonglong)uVar5 + (uVar6 >> 0x20) * (ulonglong)_DAT_1812cbaa0
        << 0x20) +
       ((ulonglong)uVar4 * (ulonglong)_DAT_1812cba80 << 0x20 |
       (ulonglong)_DAT_1812cba70 * (ulonglong)uVar4) +
       ((ulonglong)_DAT_1812cba60 * (unaff_RSI & 0xffffffff) +
        (ulonglong)_DAT_1812cba50 * (ulonglong)uVar11 << 0x20) +
       (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_1812cba50)) + 0x86436507c8f579f7;
  _DAT_1832089f8 = _DAT_183208970 ^ uVar3 ^ _DAT_1832089b8;
  _DAT_183208a08 = (_DAT_183208a08 ^ uVar3) + _DAT_1832089b8 ^ 0xc44ca0e7428bb79d;
  _DAT_183208af8 = (_DAT_183208af8 * 0x441f81c525b08a6d ^ _DAT_183208a08) + uVar3;
  _DAT_183208938 = _DAT_183208af8 ^ _DAT_183208a08;
  *(ulonglong *)(unaff_RBP + 0xa0) = _DAT_1832089b8;
  _DAT_1832089a8 = _DAT_1832089a8 ^ _DAT_1832089b8;
  uVar3 = (~_DAT_183208af8 + 0xfea5a0fb0917d831) *
          ((_DAT_183208960 ^ 0xa0bd756a1f7be9c2) + (_DAT_183208960 & 0x20bd756a1f7be9c2) * 2);
  uVar3 = (uVar3 | _DAT_183208a08) + (uVar3 & _DAT_183208a08);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183208ab0 = func_0x0001892d27e0((uVar3 | 0x5e18d591166c31f2) + (uVar3 & 0x5e18d591166c31f2));
  _DAT_183208918 = (_DAT_183208918 ^ _DAT_183208998) + 0xfebdf5fb9b5fdaf7 ^ 0xd6984f9713f20418;
  _DAT_1832089e8 = (_DAT_1832089e8 * -0x42aa44d477650b0b ^ _DAT_183208918) + _DAT_183208998;
  _DAT_183208a48 = _DAT_1832089e8 ^ _DAT_183208918;
  _DAT_183208af8 = 0xfebdf5fb9b5fdaf7;
  _DAT_183208a28 = func_0x0001892d27e0(_DAT_183208988 ^ 0xd24ab494fe3a935c);
  _DAT_183208970 =
       (_DAT_183208970 ^ _DAT_183208a28 & 0x1ffffffffffff) + 0x534bc42dc4ae07d9 ^ 0x18dc561d35169841
  ;
  _DAT_183208a38 =
       (_DAT_183208a38 * 0x6056bb852b8dc8e7 ^ _DAT_183208970) + (_DAT_183208a28 & 0x1ffffffffffff);
  _DAT_183208a30 = _DAT_183208a38 ^ _DAT_183208970;
  _DAT_183208a10 = 0x534bc42dc4ae07d9;
  uVar3 = (~_DAT_183208ae8 + 0xacb43bd23b51f828) *
          ((_DAT_183208998 ^ 0x84222cda) + (ulonglong)((uint)_DAT_183208998 & 0x84222cda) * 2);
  uVar3 = (uVar3 | 0x534bc42dc4ae07d9) + (uVar3 & 0x534bc42dc4ae07d9);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183208ae8 = func_0x0001892d27e0((uVar3 | 0xacb43bd2bf73d4fd) + (uVar3 & 0xacb43bd2bf73d4fd));
  uVar3 = _DAT_183208ae8 & 0xffffffffffffffc0;
  _DAT_183208998 = _DAT_183208a38 ^ uVar3 ^ 0xacb43bd23b520826;
  _DAT_183208988 = (_DAT_183208988 ^ uVar3) + 0xacb43bd23b520826 ^ 0xf9cc787075bff5b;
  _DAT_1832089e8 = (_DAT_1832089e8 * -0x694e8441dafa988b ^ _DAT_183208988) + uVar3 ^ _DAT_183208988;
  _DAT_183208a08 = 0xacb43bd23b520826;
  uVar3 = (_DAT_183208a28 ^ _DAT_1812cbad0) + _DAT_183208938 + 0xacb43bd2bf702b03;
  uVar6 = (_DAT_183208938 ^ _UNK_1812cbad8) + _DAT_183208a28 + 0x534bc42dc4ae07d9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208a28 ^ _DAT_1812cbad0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183208938 ^ _UNK_1812cbad8;
  uVar3 = func_0x0001892d27e0((uVar6 << 0x1d | uVar6 >> 0x23) -
                              (_DAT_183208a28 + 0x534bc42dc4ae07d9) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) -
                              (_DAT_183208938 + 0xacb43bd2bf702b03));
  _DAT_183208ab0 = uVar3 << 8 | uVar3 >> 0x38;
  _DAT_183208a00 = (_DAT_183208a00 ^ _DAT_183208ab0) + 0xfff ^ 0x2f948a05c1729032;
  _DAT_183208ab0 = (uVar3 * 0x6167e27dcdd3bfe1 ^ _DAT_183208a00) + _DAT_183208ab0;
  _DAT_183208960 = _DAT_183208ab0 ^ _DAT_183208a00;
  _DAT_183208940 = 0xfff;
  _DAT_183208a38 = func_0x0001892d27e0(_DAT_183208988 + 0x57037e7d5421cbe6 ^ 0x82);
  _DAT_183208970 = _DAT_183208a60 * -0x33bbb3e21d3002cd;
  _DAT_183208a60 = _DAT_183208970 ^ _DAT_183208920 + 0xd47d1da8f889d88fU ^ 0x50ff935302710050;
  _DAT_183208920 = 0xd47d1da8f889d88f;
  uVar3 = (_DAT_183208968 ^ _DAT_1812cbae0) + _DAT_183208a68 + 0x84222cda;
  uVar6 = (_DAT_183208a68 ^ _UNK_1812cbae8) + _DAT_183208968 + 0x2b82e25707762771;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208968 ^ _DAT_1812cbae0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183208a68 ^ _UNK_1812cbae8;
  _DAT_183208ae8 =
       func_0x0001892d27e0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183208968 + 0x2b82e25707762771) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183208a68 + 0x84222cda));
  _DAT_183208990 = _DAT_183208928 ^ _DAT_183208918 ^ 0x2b82e25707763770;
  _DAT_183208a70 = (_DAT_183208a70 ^ _DAT_183208918) + 0x2b82e25707763770 ^ 0xb8dcbcd673405c08;
  _DAT_1832089f8 = (_DAT_1832089f8 * 0x7ada1f48a447885b ^ _DAT_183208a70) + _DAT_183208918;
  _DAT_183208908 = _DAT_1832089f8 ^ _DAT_183208a70;
  _DAT_183208a28 = 0x2b82e25707763770;
  uVar3 = (_DAT_183208998 ^ _DAT_1812cbaf0) + _DAT_183208ae0 + 0x2b82e25783541455;
  uVar6 = (_DAT_183208ae0 ^ _UNK_1812cbaf8) + _DAT_183208998 + 0xd47d1da8f889d88f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208998 ^ _DAT_1812cbaf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183208ae0 ^ _UNK_1812cbaf8;
  _DAT_1832089f0 =
       func_0x0001892d27e0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183208998 + 0xd47d1da8f889d88f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183208ae0 + 0x2b82e25783541455));
  uVar3 = (_DAT_1832089f0 ^ 0xd47d1da8f889d88f) << 0x27 |
          (_DAT_1832089f0 ^ 0xd47d1da8f889d88f) >> 0x19;
  _DAT_183208af0 = _DAT_183208958 ^ uVar3 ^ 0xfff;
  _DAT_183208ab8 = (_DAT_183208ab8 ^ uVar3) + 0xfff ^ 0xda42959dfa2df44b;
  _DAT_183208948 = (_DAT_183208948 * -0x5c061663920a39a3 ^ _DAT_183208ab8) + uVar3;
  _DAT_183208a40 = _DAT_183208948 ^ _DAT_183208ab8;
  _DAT_183208a50 = 0xfff;
  uVar3 = (~_DAT_183208ab0 + 0x249847e6b34d62ef) *
          ((_DAT_183208a38 ^ 0x84222325) + (ulonglong)((uint)_DAT_183208a38 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183208a68) + (uVar3 & _DAT_183208a68);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183208a50 = func_0x0001892d27e0((uVar3 | 0x249847e6376f41cb) + (uVar3 & 0x249847e6376f41cb));
  uVar3 = (_DAT_183208a50 ^ 0x249847e6b0000000) & 0xfffffffffc000000;
  uVar6 = uVar3 >> 1 | uVar3;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  _DAT_183208a10 = (_DAT_183208a10 ^ uVar3) + 0xdb67b8194cb29d12 ^ 0xd6a97bfc18b3a4c6;
  _DAT_183208950 = (_DAT_183208950 * -0x7be016837cc22ea9 ^ _DAT_183208a10) + uVar3;
  _DAT_183208970 = _DAT_183208950 ^ _DAT_183208a10;
  _DAT_1832089c0 = _DAT_183208940 ^ 0xdb67b8194cb29d12;
  _DAT_183208a40 = -0x249847e6b34d62ee;
  uVar3 = (_DAT_183208ac0 ^ _DAT_1812cbb00) + _DAT_183208a50 + 0x84222cda;
  uVar6 = (_DAT_183208a50 ^ _UNK_1812cbb08) + _DAT_183208ac0 + 0x249847e6b34d62ee;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208ac0 ^ _DAT_1812cbb00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183208a50 ^ _UNK_1812cbb08;
  _DAT_183208a60 =
       func_0x0001892d27e0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183208ac0 + 0x249847e6b34d62ee) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183208a50 + 0x84222cda));
  _DAT_1832089d0 = _DAT_1832089c0 ^ _DAT_183208a60 ^ 0x249847e6b34d72ed;
  _DAT_1832089e8 = (_DAT_1832089e8 ^ _DAT_183208a60) + 0x249847e6b34d72ed ^ 0xa8fecf54020e9f4e;
  _DAT_183208978 = (_DAT_183208978 * 0x625d26a19c8bcd13 ^ _DAT_1832089e8) + _DAT_183208a60;
  _DAT_183208918 = _DAT_183208978 ^ _DAT_1832089e8;
  _DAT_183208a70 = 0x249847e6b34d72ed;
  _DAT_183208ae0 = func_0x0001892d27e0(_DAT_183208958 + 0x790f84ace4bcacab ^ 0xac);
  uVar3 = _DAT_183208ae0 ^ 0xfebdf5fb9b5fdaf7;
  _DAT_183208a10 = _DAT_183208a70 ^ uVar3 ^ 0x50f8ac77e631c4a0;
  _DAT_1832089d0 = (_DAT_1832089d0 ^ uVar3) + 0x50f8ac77e631c4a0 ^ 0xedc3059e6d0193a3;
  _DAT_183208a68 = (_DAT_183208a68 * 0x61c3e3cd72230081 ^ _DAT_1832089d0) + uVar3;
  _DAT_183208990 = _DAT_183208a68 ^ _DAT_1832089d0;
  _DAT_1832089a0 = 0x50f8ac77e631c4a0;
  uVar3 = (~_DAT_183208990 + 0x523ab67c4ad1e9aa) *
          ((_DAT_183208938 ^ 0xfebdf5fb1f7df9d2) + (_DAT_183208938 & 0x7ebdf5fb1f7df9d2) * 2);
  uVar3 = (uVar3 | _DAT_183208960) + (uVar3 & _DAT_183208960);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183208ab0 = func_0x0001892d27e0((uVar3 | 0xac87438755ac107b) + (uVar3 & 0xac87438755ac107b));
  uVar3 = _DAT_183208ab0 ^ 0xfebff7ffdbdffbff;
  uVar6 = uVar3 >> 1 | uVar3;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar3;
  _DAT_183208968 = (_DAT_183208968 ^ uVar3) + 0xac874387d18e335e ^ 0x4d23b4ad786738e;
  _DAT_183208a48 = (_DAT_183208a48 * -0x4a07884dbc6dc47 ^ _DAT_183208968) + uVar3;
  _DAT_183208a38 = _DAT_183208a48 ^ _DAT_183208968;
  _DAT_183208a10 = 0xac874387d18e335e;
  uVar3 = (~_DAT_183208998 + 0x523ab67c4ad1e9aa) *
          ((_DAT_1832089b0 ^ 0xfebdf5fb1f7df9d2) + (_DAT_1832089b0 & 0x7ebdf5fb1f7df9d2) * 2);
  uVar3 = (uVar3 | _DAT_183208ad8) + (uVar3 & _DAT_183208ad8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183208960 = func_0x0001892d27e0((uVar3 | 0xac87438755ac107b) + (uVar3 & 0xac87438755ac107b));
  uVar3 = _DAT_183208960 ^ 0xfebff7ffdbdffbff;
  uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3;
  _DAT_183208a30 = (_DAT_183208a30 ^ uVar3) + 0x5238b4780a51c8a1 ^ 0xe45907520a0f839;
  _DAT_183208a40 = (_DAT_183208a40 * -0x691c2d9fa3e65377 ^ _DAT_183208a30) + uVar3;
  _DAT_183208a80 = _DAT_183208a40 ^ _DAT_183208a30;
  _DAT_183208a28 = 0x5238b4780a51c8a1;
  uVar3 = (~_DAT_1832089b8 + 0xa47168f014a39143) *
          ((_DAT_183208a50 ^ 0xac87438755ac107b) + (_DAT_183208a50 & 0x2c87438755ac107b) * 2);
  uVar3 = (uVar3 | _DAT_183208af0) + (uVar3 & _DAT_183208af0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183208990 = func_0x0001892d27e0((uVar3 | 0x8f62b77410f8139) + (uVar3 & 0x8f62b77410f8139));
  uVar3 = _DAT_183208990 & 0xfffffffffc000000;
  uVar6 = uVar3 >> 1 | uVar3;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  _DAT_183208ad0 = _DAT_1832089d8 ^ uVar3 ^ 0x50f8ac77e631c4a0;
  _DAT_183208930 = (_DAT_183208930 ^ uVar3) + 0x50f8ac77e631c4a0 ^ 0xb16a2ee6e5df0881;
  _DAT_183208928 = (_DAT_183208928 * -0x5d71972332691e1 ^ _DAT_183208930) + uVar3;
  _DAT_183208a60 = _DAT_183208928 ^ _DAT_183208930;
  _DAT_183208ac8 = 0x50f8ac77e631c4a0;
  _DAT_183208a08 = func_0x0001892d27e0(_DAT_183208938 ^ 0xffe2ff83e4ffdd37);
  _DAT_183208a40 = (_DAT_183208a08 ^ 0x5080ac43a23080a0) & 0x50f8ac77e631c4a0;
  _DAT_1832089d0 = _DAT_1832089d0 ^ _DAT_183208a40 ^ 0x6e871939ea7758cd;
  _DAT_183208ab0 = (_DAT_183208ab0 * 0x7945051b864919d ^ _DAT_1832089d0) + _DAT_183208a40;
  _DAT_183208a30 = _DAT_183208ab0 ^ _DAT_1832089d0;
  _DAT_183208928 = 0;
  uVar3 = ((_DAT_1832089e8 ^ 0x84222cda) + (ulonglong)((uint)_DAT_1832089e8 & 0x84222cda) * 2) *
          -_DAT_183208938;
  uVar3 = (uVar3 | _DAT_183208978) + (uVar3 & _DAT_183208978);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183208a10 = func_0x0001892d27e0((uVar3 | 0x84222cda) + (ulonglong)((uint)uVar3 & 0x84222cda))
  ;
  _DAT_183208ad8 = _DAT_1832089d8 ^ _DAT_183208a10 ^ 0xfff;
  _DAT_183208af8 = (_DAT_183208af8 ^ _DAT_183208a10) + 0xfff ^ 0x2f965849d5d2a728;
  _DAT_183208900 = (_DAT_183208900 * 0x42f23d90034ad559 ^ _DAT_183208af8) + _DAT_183208a10;
  _DAT_183208ab0 = _DAT_183208900 ^ _DAT_183208af8;
  _DAT_183208ac0 = 0xfff;
  uVar3 = (_DAT_1832089d0 ^ _DAT_1812cbb10) + _DAT_183208978 + 0xfebdf5fb1f7df9d2;
  uVar6 = (_DAT_183208978 ^ _UNK_1812cbb18) + (_DAT_1832089d0 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832089d0 ^ _DAT_1812cbb10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183208978 ^ _UNK_1812cbb18;
  _DAT_1832089d8 =
       func_0x0001892d27e0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832089d0 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183208978 + 0xfebdf5fb1f7df9d2));
  uVar3 = (~_DAT_1832089d8 & 0xfebdf5fb9b5fdaf7) << 0x14 |
          (~_DAT_1832089d8 & 0xfebdf5fb9b5fdaf7) >> 0x2c;
  _DAT_183208af8 = (_DAT_183208988 ^ uVar3) + 0x1420a0464a02508;
  _DAT_183208988 = _DAT_183208af8 ^ 0xca7e931e46e5739c;
  _DAT_183208a40 = (_DAT_183208a40 * -0x2225960f58818a79 ^ _DAT_183208988) + uVar3;
  _DAT_183208a88 = _DAT_183208a40 ^ _DAT_183208988;
  _DAT_183208af8 = _DAT_183208af8 ^ 0xcb3c991a22455694;
  _DAT_183208980 = 0x1420a0464a02508;
  uVar3 = (~_DAT_183208a48 + 0x1420a0464a02509) *
          ((_DAT_183208ab0 ^ 0xfebdf5fb1f7df9d2) + (_DAT_183208ab0 & 0x7ebdf5fb1f7df9d2) * 2);
  uVar3 = (uVar3 | _DAT_183208a40) + (uVar3 & _DAT_183208a40);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183208948 = func_0x0001892d27e0((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uVar3 = _DAT_183208948 << 0x29 | _DAT_183208948 >> 0x17;
  _DAT_183208ad0 = _DAT_183208ad0 ^ uVar3 ^ 0xc17645f9cb2c37af;
  _DAT_183208af0 = (_DAT_183208af0 * -0x58d0e902677c3853 ^ _DAT_183208ad0) + uVar3;
  _DAT_1832089f8 = _DAT_183208af0 ^ _DAT_183208ad0;
  _DAT_183208970 = 0;
  uVar3 = (~_DAT_183208a28 + 0xa0bd756a9b59cae8) *
          ((_DAT_183208a48 ^ 0xa0bd756a1f7be9c2) + (_DAT_183208a48 & 0x20bd756a1f7be9c2) * 2);
  uVar3 = (uVar3 | _DAT_1832089c8) + (uVar3 & _DAT_1832089c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832089a0 = func_0x0001892d27e0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar3 = (_DAT_1832089a0 ^ 0xa0bd756a9b59cae7) << 0x28 |
          (_DAT_1832089a0 ^ 0xa0bd756a9b59cae7) >> 0x18;
  _DAT_183208a50 = _DAT_183208a50 ^ uVar3 ^ 0x256d665be2d89627;
  _DAT_183208988 = (_DAT_183208988 * -0x7c2483ec7a6ca7d9 ^ _DAT_183208a50) + uVar3;
  _DAT_183208ae8 = _DAT_183208988 ^ _DAT_183208a50;
  _DAT_1832089b0 = 0;
  uVar3 = (_DAT_183208990 ^ 0x84222cda) + _DAT_183208a68 + 0x84222cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208990 ^ 0x84222cda;
  uVar6 = ((_DAT_183208a68 + _DAT_183208990) * 0x2000 | _DAT_183208a68 + _DAT_183208990 >> 0x33) ^
          _DAT_183208a68;
  _DAT_1832089a0 =
       func_0x0001892d27e0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183208990 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183208a68 + 0x84222cda));
  uVar3 = _DAT_1832089a0 & 0x7fffffffffffffff ^ 0xfff;
  uVar3 = uVar3 << 0x3b | uVar3 >> 5;
  _DAT_183208ad8 = _DAT_183208a78 ^ uVar3 ^ 0xfff;
  _DAT_183208a78 = (_DAT_183208a78 ^ uVar3) + 0xfff ^ 0x456a5b1f36aa7c26;
  _DAT_183208930 = (_DAT_183208930 * 0x152dc67a68fa2637 ^ _DAT_183208a78) + uVar3;
  _DAT_1832089b0 = _DAT_183208930 ^ _DAT_183208a78;
  _DAT_183208ab8 = 0xfff;
  switch(0xfff < *(ulonglong *)(unaff_RBP + 0xa0)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92b3bb1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892b3bb1(undefined4 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  uint uVar5;
  longlong *unaff_R15;
  
  *(undefined4 *)(unaff_RBP + 0x68) = param_1;
  (**(code **)(unaff_R15 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar1 = *(uint *)(unaff_RBP + 0x60);
  uVar5 = *(uint *)(unaff_RBP + 0x68);
  uVar2 = (ulonglong)uVar5 ^ 0x84222325;
  uVar3 = uVar2 ^ uVar1;
  uVar2 = ((_DAT_183208a70 ^ uVar2) + (ulonglong)((uint)_DAT_183208a70 & (uint)uVar2) * 2) *
          (uVar1 - _DAT_183208a18);
  uVar2 = (uVar2 | _DAT_183208a80) + (uVar2 & _DAT_183208a80);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183208990 = func_0x0001892d27e0((uVar3 | uVar2) + (ulonglong)((uint)uVar3 & (uint)uVar2));
  uVar2 = _DAT_183208990 >> 1 | _DAT_183208990;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183208990;
  uVar5 = uVar5 & uVar1;
  _DAT_183208ab0 = (ulonglong)uVar5;
  _DAT_183208a90 = (_DAT_183208a90 ^ uVar2) + _DAT_183208ab0 ^ 0x57735a02597a3603;
  _DAT_183208ac8 = (_DAT_183208ac8 * 0x1840f8d72a3c0861 ^ _DAT_183208a90) + uVar2;
  _DAT_183208908 = _DAT_183208ac8 ^ _DAT_183208a90;
  *(uint *)(unaff_RBP + 0x60) = uVar5;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  uVar2 = (~_DAT_183208930 + 0x8e87d776) *
          ((_DAT_183208910 ^ 0x769c4549) + (ulonglong)((uint)_DAT_183208910 & 0x769c4549) * 2);
  uVar2 = (uVar2 | _DAT_183208ac8) + (uVar2 & _DAT_183208ac8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  *(int *)(unaff_RBP + 0xa0) = (int)*(undefined8 *)(unaff_RBP + 0x60);
  _DAT_183208a58 = func_0x0001892d27e0((uVar2 | 0xf81b923c) + (ulonglong)((uint)uVar2 & 0xf81b923c))
  ;
  uVar2 = (_DAT_183208a58 ^ 0xfebff77d) << 7 | _DAT_183208a58 >> 0x39;
  _DAT_183208948 = (_DAT_183208948 ^ uVar2) + 0x7c39b119 ^ 0xf5be132c69a6098a;
  _DAT_183208a48 = (_DAT_183208a48 * 0x4678502bb83aa613 ^ _DAT_183208948) + uVar2;
  _DAT_183208ac0 = _DAT_183208a48 ^ _DAT_183208948;
  _DAT_183208a10 = 0x7c39b119;
  uVar2 = (_DAT_183208998 ^ _DAT_1812cacc0) + _DAT_183208af0 + 0x84222325;
  uVar3 = (_DAT_183208af0 ^ _UNK_1812cacc8) + _DAT_183208998 + 0xc9de59cc;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183208998 ^ _DAT_1812cacc0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208af0 ^ _UNK_1812cacc8;
  _DAT_183208ad8 =
       func_0x0001892d27e0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183208998 + 0xc9de59cc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183208af0 + 0x84222325));
  _DAT_183208ac8 = (_DAT_183208ac8 ^ _DAT_183208ad8 ^ 0xc9de59cc) - 0xc9de59cc ^ 0xbc10893f4a2e9ba3;
  _DAT_1832089d8 =
       (_DAT_1832089d8 * 0x59c272a72c20e9f5 ^ _DAT_183208ac8) + (_DAT_183208ad8 ^ 0xc9de59cc);
  _DAT_183208a50 = _DAT_1832089d8 ^ _DAT_183208ac8;
  _DAT_183208918 = 0x3621a634;
  _DAT_1832089b8 = func_0x0001892d27e0(_DAT_183208910 ^ 0x5b007b9a00d260);
  uVar2 = (_DAT_1832089b8 ^ 0x3621a634) << 0x22 | _DAT_1832089b8 >> 0x1e;
  _DAT_183208ac0 = _DAT_183208a10 ^ uVar2 ^ 0x1000000bf;
  _DAT_183208af0 = (_DAT_183208af0 ^ uVar2) + 0x1000000bf ^ 0x1804c3c1b6bd7a32;
  _DAT_183208a78 = (_DAT_183208a78 * -0x582308e438e2c697 ^ _DAT_183208af0) + uVar2;
  _DAT_183208af0 = _DAT_183208a78 ^ _DAT_183208af0;
  _DAT_183208990 = 0xbf;
  uVar2 = (_DAT_183208a10 ^ _DAT_1812cacd0) + _DAT_183208a18 + 0x8422239a;
  uVar3 = (_DAT_183208a18 ^ _UNK_1812cacd8) + _DAT_183208a10 + 0xe2db3b70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183208a10 ^ _DAT_1812cacd0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208a18 ^ _UNK_1812cacd8;
  uVar2 = func_0x0001892d27e0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183208a10 + 0xe2db3b70) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183208a18 + 0x8422239a));
  uVar3 = (uVar2 ^ 0xe2db3bff) * 0x5d69ea3d99d78d99;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_183208ad8 =
       ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3) *
       0x33907ff79d3efa1b;
  _DAT_183208a20 = _DAT_183208960 ^ _DAT_183208ad8 ^ 0xe2db3c2f;
  _DAT_183208a18 = (_DAT_183208a18 ^ _DAT_183208ad8) + 0xe2db3c2f ^ 0x6bec6b369caaad58;
  _DAT_183208ad8 = (uVar2 * 0x40fad293d7f5d1a9 ^ _DAT_183208a18) + _DAT_183208ad8;
  _DAT_183208940 = _DAT_183208ad8 ^ _DAT_183208a18;
  _DAT_183208920 = 0xe2db3c2f;
  uVar2 = (_DAT_1832089d8 ^ _DAT_1812cace0) + _DAT_183208a68 + 0x84222325;
  uVar3 = (_DAT_183208a68 ^ _UNK_1812cace8) + _DAT_1832089d8 + 0x9aef9c28;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832089d8 ^ _DAT_1812cace0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208a68 ^ _UNK_1812cace8;
  _DAT_183208960 =
       func_0x0001892d27e0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832089d8 + 0x9aef9c28) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183208a68 + 0x84222325));
  _DAT_183208910 = (_DAT_183208910 ^ _DAT_183208960) - 0x9aef9c28 ^ 0x71734d8699920ac6;
  _DAT_1832089c0 = (_DAT_1832089c0 * -0x5859f2b63b4535eb ^ _DAT_183208910) + _DAT_183208960;
  _DAT_183208aa8 = _DAT_1832089c0 ^ _DAT_183208910;
  _DAT_183208a80 = 0x651063d8;
  uVar2 = (~_DAT_183208af0 + 0x651063d9) *
          ((_DAT_183208970 ^ 0x1ecdbfc2) + (ulonglong)((uint)_DAT_183208970 & 0x1ecdbfc2) * 2);
  uVar2 = (uVar2 | _DAT_183208920) + (uVar2 & _DAT_183208920);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183208af0 = func_0x0001892d27e0((uVar2 | 0x7bdddc1a) + (ulonglong)((uint)uVar2 & 0x7bdddc1a))
  ;
  _DAT_1832089d0 = _DAT_1832089a8 ^ _DAT_183208900 ^ 0x1000000bf;
  _DAT_1832089e8 = (_DAT_1832089e8 ^ _DAT_183208900) + 0x1000000bf ^ 0x5f35bf66f9faaff1;
  _DAT_183208af8 = (_DAT_183208af8 * 0x7e03a319b98a08f7 ^ _DAT_1832089e8) + _DAT_183208900;
  _DAT_183208a50 = _DAT_183208af8 ^ _DAT_1832089e8;
  _DAT_183208918 = 0xbf;
  _DAT_183208a70 = func_0x0001892d27e0(_DAT_183208948 + 0xffa2ffbbbf005fff ^ 0x8d);
  uVar2 = _DAT_183208a70 - (_DAT_183208a70 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183208a70;
  _DAT_183208a90 = _DAT_183208970 ^ uVar2 ^ 0x13035a914;
  _DAT_183208900 = (_DAT_183208900 ^ uVar2) + 0x13035a914 ^ 0x8203563cb919987d;
  _DAT_183208a10 = (_DAT_183208a10 * 0x5897a11e3c79679f ^ _DAT_183208900) + uVar2;
  _DAT_183208960 = _DAT_183208a10 ^ _DAT_183208900;
  _DAT_183208a78 = 0x3035a914;
  uVar2 = (~_DAT_1832089e0 + 0x7c39b11a) *
          ((_DAT_183208a18 ^ 0x37d9d4de) + (ulonglong)((uint)_DAT_183208a18 & 0x37d9d4de) * 2);
  uVar2 = (uVar2 | _DAT_1832089a8) + (uVar2 & _DAT_1832089a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183208900 = func_0x0001892d27e0((uVar2 | 0x4be065c7) + (ulonglong)((uint)uVar2 & 0x4be065c7))
  ;
  _DAT_183208a70 = (_DAT_183208a70 ^ _DAT_183208900 ^ 0x7c39b119) + 0xcfc246e2 ^ 0x99a57b0bd0b6a708;
  _DAT_1832089f0 =
       (_DAT_1832089f0 * 0x3d1456e20e3e22b5 ^ _DAT_183208a70) + (_DAT_183208900 ^ 0x7c39b119);
  _DAT_183208a18 = _DAT_1832089f0 ^ _DAT_183208a70;
  _DAT_183208a40 = 0xcfc246e2;
  uVar2 = (~_DAT_183208990 + 0x60736233) *
          ((_DAT_183208ac0 ^ 0x4be065c7) + (ulonglong)((uint)_DAT_183208ac0 & 0x4be065c7) * 2);
  uVar2 = (uVar2 | _DAT_183208978) + (uVar2 & _DAT_183208978);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832089b8 = func_0x0001892d27e0((uVar2 | 0x2b9307f5) + (ulonglong)((uint)uVar2 & 0x2b9307f5))
  ;
  uVar2 = _DAT_1832089b8 & 0x7fffffffffffffff;
  _DAT_183208900 = _DAT_183208ad8 ^ uVar2 ^ 0x13035a914;
  _DAT_183208930 = (_DAT_183208930 ^ uVar2) + 0x13035a914 ^ 0x16c577ccf80872cf;
  _DAT_183208a20 = (_DAT_183208a20 * -0x216446162fd2a375 ^ _DAT_183208930) + uVar2;
  _DAT_183208a98 = _DAT_183208a20 ^ _DAT_183208930;
  _DAT_1832089a8 = 0x3035a914;
  _DAT_183208aa0 = func_0x0001892d27e0(_DAT_1832089d0 ^ 0xffdf0083daffddcb);
  _DAT_183208a20 = (_DAT_183208aa0 & 0x7fffffffffffffff) * 0x916748c5b3f31bf;
  _DAT_1832089e0 = _DAT_1832089e0 ^ _DAT_183208a20 ^ 0xfe97b9bb9df09de1;
  _DAT_183208ab8 = (_DAT_183208ab8 * 0x7dab4f0dafb387ef ^ _DAT_1832089e0) + _DAT_183208a20;
  _DAT_183208a30 = _DAT_183208ab8 ^ _DAT_1832089e0;
  _DAT_183208948 = 0;
  _DAT_183208990 = func_0x0001892d27e0(_DAT_183208a30 + 0xffdeff846a001dff ^ 0xad);
  uVar2 = _DAT_183208990 & 0xfffffffffff ^ 0xbf;
  _DAT_183208aa8 = _DAT_1832089d0 ^ uVar2 ^ 0xbf;
  _DAT_183208970 = (_DAT_183208970 ^ uVar2) + 0xbf ^ 0x994dffbd630a5dc4;
  _DAT_1832089f8 = (_DAT_1832089f8 * -0x5725c8472dd14d35 ^ _DAT_183208970) + uVar2;
  _DAT_183208980 = _DAT_1832089f8 ^ _DAT_183208970;
  _DAT_183208960 = 0xbf;
  _DAT_183208950 = func_0x0001892d27e0(_DAT_183208a88 ^ 0x14ffb7e0ffd98e);
  uVar2 = (_DAT_183208950 << 0x12 | _DAT_183208950 >> 0x2e) ^ 0x4c040804;
  _DAT_183208aa8 = (_DAT_183208aa8 ^ uVar2) + 0x4c040804 ^ 0xe7c978ca6095e2d8;
  _DAT_183208a18 = (_DAT_183208a18 * 0x7870644c26388f51 ^ _DAT_183208aa8) + uVar2;
  _DAT_183208af8 = _DAT_183208a18 ^ _DAT_183208aa8;
  _DAT_183208a90 = 0x4c040804;
  uVar2 = (_DAT_183208a48 ^ _DAT_1812cacf0) + _DAT_183208a00 + 0x37d9d4de;
  uVar3 = (_DAT_183208a00 ^ _UNK_1812cacf8) + _DAT_183208a48 + 0x4c040804;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183208a48 ^ _DAT_1812cacf0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183208a00 ^ _UNK_1812cacf8;
  _DAT_183208ad8 =
       func_0x0001892d27e0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183208a48 + 0x4c040804) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183208a00 + 0x37d9d4de));
  _DAT_183208a30 = _DAT_183208a30 ^ _DAT_183208ad8 & 0x7fffffffffffff80 ^ 0x734c2e2675a2156e;
  _DAT_183208948 =
       (_DAT_183208948 * 0x9d6d5838d6e2851 ^ _DAT_183208a30) + (_DAT_183208ad8 & 0x7fffffffffffff80)
  ;
  _DAT_183208ac0 = _DAT_183208948 ^ _DAT_183208a30;
  _DAT_183208970 = 0;
  uVar2 = ((_DAT_183208a40 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183208a40 & 0x8422239a) * 2) *
          -_DAT_183208910;
  uVar2 = (uVar2 | _DAT_183208ae8) + (uVar2 & _DAT_183208ae8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183208940 = func_0x0001892d27e0((uVar2 | 0x8422239a) + (ulonglong)((uint)uVar2 & 0x8422239a))
  ;
  _DAT_183208a58 = _DAT_183208a00 ^ _DAT_183208940 ^ 0xbf;
  _DAT_183208950 = (_DAT_183208950 ^ _DAT_183208940) + 0xbf ^ 0x1a0e3dbb3983a4ce;
  _DAT_183208900 = (_DAT_183208900 * 0x60bd29df5ec1940f ^ _DAT_183208950) + _DAT_183208940;
  _DAT_1832089a8 = _DAT_183208900 ^ _DAT_183208950;
  _DAT_183208930 = 0xbf;
  uVar2 = (~_DAT_1832089d8 + 0x8343d76b) *
          ((_DAT_183208a98 ^ 0x761f44f) + (ulonglong)((uint)_DAT_183208a98 & 0x761f44f) * 2);
  uVar2 = (uVar2 | _DAT_1832089a8) + (uVar2 & _DAT_1832089a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183208990 = func_0x0001892d27e0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_1832089e8 = _DAT_1832089e8 ^ _DAT_183208990 ^ 0x8343d76a ^ 0xaefe9e21573070b0;
  _DAT_183208ab8 =
       (_DAT_183208ab8 * -0x1363ded7b23526d1 ^ _DAT_1832089e8) + (_DAT_183208990 ^ 0x8343d76a);
  _DAT_1832089e8 = _DAT_183208ab8 ^ _DAT_1832089e8;
  _DAT_183208a60 = _DAT_183208930;
  _DAT_183208998 = 0;
  uVar2 = (_DAT_183208a68 ^ 0x8422239a) + _DAT_183208910 + 0x8422239a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183208a68 ^ 0x8422239a;
  uVar3 = ((_DAT_183208910 + _DAT_183208a68) * 0x2000 | _DAT_183208910 + _DAT_183208a68 >> 0x33) ^
          _DAT_183208910;
  _DAT_183208ac8 =
       func_0x0001892d27e0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_183208a68 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183208910 + 0x8422239a));
  uVar2 = _DAT_183208ac8 ^ 0xbf;
  _DAT_183208ac0 = _DAT_183208a78 ^ uVar2 ^ 0xbf;
  _DAT_183208ad0 = (_DAT_183208ad0 ^ uVar2) + 0xbf ^ 0x7e4a860325ea79a8;
  _DAT_183208a38 = (_DAT_183208a38 * 0x551b76c8d59c5be5 ^ _DAT_183208ad0) + uVar2;
  _DAT_183208960 = _DAT_183208a38 ^ _DAT_183208ad0;
  _DAT_1832089d0 = 0xbf;
  switch(0xbf < (int)uVar5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92bbb5d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892bbb5d(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  ulonglong uVar9;
  longlong unaff_R12;
  ulonglong uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulonglong uVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong unaff_XMM11_Qa;
  uint uVar15;
  uint uVar16;
  
  *(undefined4 *)(unaff_RBP + 0x5c) = unaff_ESI;
  uVar10 = _DAT_183208ab8;
  uVar5 = _DAT_183208a58;
  uVar8 = _DAT_183208a58 ^ 0x9c0436b9;
  *(bool *)(unaff_RBP + 0xa0) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar9 = uVar10 ^ 0xd6e7371f;
  lVar7 = uVar10 + 0x9c0436b9;
  uVar10 = uVar8 + lVar7;
  uVar14 = uVar9 + uVar5 + 0xd6e7371f;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar8;
  uVar9 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar9;
  _DAT_183208928 =
       func_0x0001892d27e0((uVar9 << 0x1d | uVar9 >> 0x23) - (uVar5 + 0xd6e7371f) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar7);
  _DAT_183208ac0 = (_DAT_183208ac0 ^ _DAT_183208928 ^ 0xc6c12203) + 0xdee7379f ^ 0xfbcfb7a5d0c7d910;
  _DAT_183208aa0 =
       (_DAT_183208aa0 * -0x74bc702f3288636d ^ _DAT_183208ac0) + (_DAT_183208928 ^ 0xc6c12203);
  _DAT_183208af0 = _DAT_183208aa0 ^ _DAT_183208ac0;
  _DAT_183208ad0 = 0xdee7379f;
  _DAT_1832089e8 = func_0x0001892d27e0(_DAT_183208a78 + 0x4003a3dff47ff ^ 0x5c);
  uVar5 = _DAT_1832089e8 * -0x54235cd52ab8ff3f ^ 0x919890a0;
  _DAT_183208a38 = (_DAT_183208a38 ^ uVar5) + 0xc2fa2fe7 ^ 0x3cffa5915c5b9a70;
  _DAT_1832089a8 = (_DAT_1832089a8 * -0x36963163c71215d1 ^ _DAT_183208a38) + uVar5;
  _DAT_183208918 = _DAT_1832089a8 ^ _DAT_183208a38;
  _DAT_183208968 = 0xc2fa2fe7;
  uVar5 = (~_DAT_183208ae0 + 0x33393f41) *
          ((_DAT_183208a10 ^ 0x84222325) + (ulonglong)((uint)_DAT_183208a10 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_183208990) + (uVar5 & _DAT_183208990);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183208a28 = func_0x0001892d27e0((uVar5 | 0xb71b1c65) + (ulonglong)((uint)uVar5 & 0xb71b1c65))
  ;
  uVar5 = _DAT_183208a28 ^ 0x33393f40;
  uVar10 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * unaff_R12 >> 0x38);
  uVar5 = (uint)bVar4 + (uint)bVar4 ^ uVar5;
  _DAT_1832089d8 = (_DAT_1832089d8 ^ uVar5) - 0x33393f40 ^ 0x1f3d7a6540fd91cd;
  _DAT_1832089d0 = (_DAT_183208af8 * 0x4833d365a6ad75cf ^ _DAT_1832089d8) + uVar5 ^ _DAT_1832089d8;
  _DAT_1832089f0 = _DAT_183208a80 ^ 0xffffffffccc6c0c0;
  _DAT_183208af8 = 0xccc6c0c0;
  _DAT_183208a40 = func_0x0001892d27e0(_DAT_183208a60 + 0xff63fff8e500baff ^ 0xe5);
  _DAT_183208af0 = _DAT_183208aa8 ^ _DAT_183208a40 ^ 0x1000007c0;
  _DAT_1832089c0 = (_DAT_1832089c0 ^ _DAT_183208a40) + 0x1000007c0 ^ 0x15e3c0cce6d31d60;
  _DAT_183208a38 = (_DAT_183208a38 * 0x7ba7e58955f19d91 ^ _DAT_1832089c0) + _DAT_183208a40;
  _DAT_183208940 = _DAT_183208a38 ^ _DAT_1832089c0;
  _DAT_183208ab0 = 0x7c0;
  _DAT_1832089c8 = func_0x0001892d27e0(_DAT_183208a68 + 0x7d00ac22ffc3ff ^ 0x3c);
  _DAT_1832089a0 = _DAT_1832089a0 - 0x68fea000 ^ 0x600009549f8080ee;
  _DAT_183208918 = _DAT_183208aa8 * 0x60fd4c05035d3717;
  _DAT_183208aa8 = _DAT_183208918 ^ _DAT_1832089a0;
  _DAT_183208a40 = 0x97016000;
  _DAT_183208908 = func_0x0001892d27e0(_DAT_183208990 ^ 0xff910028e3000849);
  _DAT_183208930 = (_DAT_183208930 ^ _DAT_183208908) - 0x7319b200 ^ 0x19a74576fce94d3a;
  _DAT_1832089c0 = (_DAT_1832089c0 * 0x51b1dae85a5329ed ^ _DAT_183208930) + _DAT_183208908;
  _DAT_183208a00 = _DAT_1832089c0 ^ _DAT_183208930;
  _DAT_183208918 = 0x8ce64e00;
  uVar5 = (_DAT_183208aa8 ^ _DAT_1812cafd0) + _DAT_183208a40 + 0xf73b9ae5;
  uVar10 = (_DAT_183208a40 ^ _UNK_1812cafd8) + _DAT_183208aa8 + 0x8ce64e00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183208aa8 ^ _DAT_1812cafd0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183208a40 ^ _UNK_1812cafd8;
  _DAT_183208a60 =
       func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183208aa8 + 0x8ce64e00) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183208a40 + 0xf73b9ae5));
  uVar5 = _DAT_183208a60 ^ 0x3f599dc3ca0139c0;
  _DAT_183208a00 = _DAT_1832089f8 ^ uVar5 ^ 0x1000007c0;
  _DAT_183208a78 = (_DAT_183208a78 ^ uVar5) + 0x1000007c0 ^ 0x2a7bd0b462a67c96;
  _DAT_183208978 = (_DAT_183208978 * -0x714d69bce5762acf ^ _DAT_183208a78) + uVar5;
  _DAT_183208948 = _DAT_183208978 ^ _DAT_183208a78;
  _DAT_1832089a8 = 0x7c0;
  uVar5 = (~_DAT_183208a50 + 0xc2fa2fe8) *
          ((_DAT_183208988 ^ 0x5ac514ba) + (ulonglong)((uint)_DAT_183208988 & 0x5ac514ba) * 2);
  uVar5 = (uVar5 | _DAT_183208a98) + (uVar5 & _DAT_183208a98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183208a40 = func_0x0001892d27e0((uVar5 | 0x983f3b5d) + (ulonglong)((uint)uVar5 & 0x983f3b5d))
  ;
  uVar5 = _DAT_183208a40 ^ 0xdeff3fff;
  _DAT_183208980 = _DAT_183208ab8 ^ uVar5 ^ 0x1a1e16786;
  _DAT_183208ab0 = (_DAT_183208ab0 ^ uVar5) + 0x1a1e16786 ^ 0xa57c5eea8c98927c;
  _DAT_183208a70 = (_DAT_183208a70 * 0x53ee626b169ffeb3 ^ _DAT_183208ab0) + uVar5;
  _DAT_183208910 = _DAT_183208a70 ^ _DAT_183208ab0;
  _DAT_183208988 = 0xa1e16786;
  _DAT_1832089d0 = func_0x0001892d27e0(_DAT_1832089b8 ^ 0xfffaff9834ffd235);
  _DAT_1832089f0 = (_DAT_1832089f0 ^ _DAT_1832089d0 ^ 0xdee7379f) + 0xc2e22787 ^ 0xf355798c36538c8f;
  _DAT_1832089f8 =
       (_DAT_1832089f8 * 0x11de7c9155dad337 ^ _DAT_1832089f0) + (_DAT_1832089d0 ^ 0xdee7379f);
  _DAT_183208958 = _DAT_1832089f8 ^ _DAT_1832089f0;
  _DAT_183208ae8 = 0xc2e22787;
  uVar5 = (_DAT_183208948 ^ _DAT_1812cafe0) + _DAT_1832089a8 + 0x983f3b5d;
  uVar10 = (_DAT_1832089a8 ^ _UNK_1812cafe8) + _DAT_183208948 + 0x85c44f0e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183208948 ^ _DAT_1812cafe0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832089a8 ^ _UNK_1812cafe8;
  _DAT_183208960 =
       func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183208948 + 0x85c44f0e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832089a8 + 0x983f3b5d));
  uVar5 = _DAT_183208960 & 0xffffffffc0;
  _DAT_183208af0 = _DAT_183208a50 ^ uVar5 ^ 0xa1e16786;
  _DAT_183208a20 = (_DAT_183208a20 ^ uVar5) + 0xa1e16786 ^ 0xcdb03a695066c131;
  _DAT_1832089b0 = (_DAT_1832089b0 * 0x5748bb92a5f77bad ^ _DAT_183208a20) + uVar5;
  _DAT_183208940 = _DAT_1832089b0 ^ _DAT_183208a20;
  _DAT_1832089c0 = _DAT_183208948 ^ 0xa1e16786;
  _DAT_183208ae8 = 0xa1e16786;
  _DAT_183208a88 = func_0x0001892d27e0(_DAT_183208a68 ^ 0x1f007be2ffe12b);
  _DAT_1832089a8 = _DAT_1832089e8;
  _DAT_183208a20 = _DAT_183208a20 ^ _DAT_1832089e8 ^ 0x9208486db568fd4d;
  _DAT_1832089d8 = (_DAT_1832089d8 * 0x3b4b3c27f156933 ^ _DAT_183208a20) + _DAT_1832089e8;
  _DAT_183208a40 = _DAT_1832089d8 ^ _DAT_183208a20;
  _DAT_183208ab0 = 0;
  _DAT_183208a70 = func_0x0001892d27e0(_DAT_183208928 ^ 0xffa4003629ff4a67);
  uVar5 = (_DAT_183208a70 & 0x3ffffff) << 0x1d | _DAT_183208a70 >> 0x23;
  _DAT_183208a40 = _DAT_183208a40 ^ uVar5 ^ 0x7568b733fdf15a05;
  _DAT_183208a50 = (_DAT_183208a50 * -0x696b871ed42fc51f ^ _DAT_183208a40) + uVar5;
  _DAT_183208908 = _DAT_183208a50 ^ _DAT_183208a40;
  _DAT_1832089e0 = 0;
  uVar5 = (_DAT_183208990 ^ 0x842224e5) + _DAT_183208a48 + 0x842224e5;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183208990 ^ 0x842224e5;
  uVar10 = ((_DAT_183208a48 + _DAT_183208990) * 0x2000 | _DAT_183208a48 + _DAT_183208990 >> 0x33) ^
           _DAT_183208a48;
  _DAT_183208a20 =
       func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_183208990 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183208a48 + 0x842224e5));
  auVar13 = _DAT_1800170c0;
  uVar5 = _DAT_183208a20 - (_DAT_183208a20 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183208a20;
  _DAT_183208a10 = _DAT_183208a18 ^ uVar5 ^ 0x7c0;
  _DAT_183208ab0 = (_DAT_183208ab0 ^ uVar5) + 0x7c0 ^ 0xdc7238e43d9b40ef;
  _DAT_183208900 = (_DAT_183208900 * -0x6cc864d75766eaf3 ^ _DAT_183208ab0) + uVar5;
  _DAT_183208a88 = _DAT_183208900 ^ _DAT_183208ab0;
  _DAT_183208938 = 0x7c0;
  auVar11._8_8_ = _UNK_180144c38;
  auVar11._0_8_ = (ulonglong)(uint)(unaff_EDI << 6) ^ 0x84222325;
  auVar12 = pshufb(auVar11 ^ _DAT_1812caff0,_DAT_1800170c0);
  uVar10 = auVar12._8_8_ + auVar12._0_8_;
  uVar5 = uVar10 + _DAT_1832089c8;
  if (auVar12._4_4_ < 0) {
    uVar5 = _DAT_183208968 ^ uVar10;
  }
  _DAT_183208a30 = func_0x0001892d27e0(SUB161(auVar11 ^ _DAT_1812caff0,5) ^ uVar5);
  uVar5 = _DAT_183208a30 << 0xd | _DAT_183208a30 >> 0x33;
  uVar6 = unaff_EDI << 6 & 0x7c0;
  _DAT_183208920 = (ulonglong)uVar6;
  _DAT_183208930 = (_DAT_183208930 ^ uVar5) + _DAT_183208920 ^ 0xcf58ddc47a80e29c;
  _DAT_183208ae8 = (_DAT_183208ae8 * -0x7ae8d2c17c603c7d ^ _DAT_183208930) + uVar5;
  _DAT_183208ac8 = _DAT_183208ae8 ^ _DAT_183208930;
  *(uint *)(unaff_RBP + 0x90) = uVar6;
  uVar3 = *(undefined8 *)(unaff_RBP + 0x40);
  lVar7 = (**(code **)(unaff_RBX + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(extraout_XMM0_Qa,uVar3,0);
  *(int *)(unaff_RBP + 0x60) = (int)*(char *)(lVar7 + *(int *)(unaff_RBP + 0x68));
  (**(code **)(unaff_RBX + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa_00,uVar3,lVar7,2);
  uVar6 = *(uint *)(unaff_RBP + 0x60);
  uVar8 = (ulonglong)uVar6;
  _DAT_183208978 = func_0x0001892d27e0(_DAT_1832089c8 ^ 0xff7fff7a75003408);
  _DAT_183208ac0 = (_DAT_183208ac0 ^ _DAT_183208978 ^ 0xa227cb46) + 0xa37febde ^ 0xdd77167402b8df8a;
  _DAT_183208a70 =
       (_DAT_183208a70 * 0x7626928697016581 ^ _DAT_183208ac0) + (_DAT_183208978 ^ 0xa227cb46);
  _DAT_183208a48 = _DAT_183208a70 ^ _DAT_183208ac0;
  _DAT_183208990 = 0xa37febde;
  uVar5 = (_DAT_1832089e8 ^ _DAT_1812cb000) + _DAT_183208ac8 + 0x56f15296;
  uVar10 = (_DAT_183208ac8 ^ _UNK_1812cb008) + _DAT_1832089e8 + 0x2b70c3a7;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832089e8 ^ _DAT_1812cb000;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183208ac8 ^ _UNK_1812cb008;
  _DAT_1832089f0 =
       func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832089e8 + 0x2b70c3a7) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183208ac8 + 0x56f15296));
  _DAT_183208988 =
       (_DAT_183208988 ^ _DAT_1832089f0 ^ 0x23c661bbb409f576) + 0xf9a3b214 ^ 0x287b4f5932b7bf87;
  _DAT_183208a90 =
       (_DAT_183208a90 * -0xf9c92c6b3170e61 ^ _DAT_183208988) +
       (_DAT_1832089f0 ^ 0x23c661bbb409f576) ^ _DAT_183208988;
  _DAT_183208ad8 = 0xf9a3b214;
  uVar5 = (_DAT_183208af0 ^ _DAT_1812cb010) + _DAT_1832089f8 + 0x84222325;
  uVar10 = (_DAT_1832089f8 ^ _UNK_1812cb018) + _DAT_183208af0 + 0x2984a264;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183208af0 ^ _DAT_1812cb010;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832089f8 ^ _UNK_1812cb018;
  _DAT_1832089b0 =
       func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183208af0 + 0x2984a264) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832089f8 + 0x84222325));
  _DAT_183208a30 =
       (_DAT_183208a30 ^ _DAT_1832089b0 & 0x1ffffffffff) - 0x2984a264 ^ 0x5c73b9ff99504f27;
  _DAT_183208928 =
       (_DAT_183208928 * -0x3709b8799ea8e1b ^ _DAT_183208a30) + (_DAT_1832089b0 & 0x1ffffffffff);
  _DAT_183208990 = _DAT_183208928 ^ _DAT_183208a30;
  _DAT_183208ac0 = 0xd67b5d9c;
  uVar5 = (~_DAT_183208a10 + 0x2984a265) *
          ((_DAT_183208a50 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183208a50 & 0x8422231a) * 2);
  uVar5 = (uVar5 | _DAT_183208948) + (uVar5 & _DAT_183208948);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183208940 = func_0x0001892d27e0((uVar5 | 0xada6817e) + (ulonglong)((uint)uVar5 & 0xada6817e))
  ;
  uVar5 = _DAT_183208940 & 0xffffffffffffff00;
  _DAT_1832089a8 = _DAT_183208ad8 ^ uVar5 ^ 0x2984a2a3;
  _DAT_1832089c8 = (_DAT_1832089c8 ^ uVar5) + 0x2984a2a3 ^ 0x25f87c1a48ff8c1d;
  _DAT_183208938 = (_DAT_183208938 * -0x297c7d4656afd4bd ^ _DAT_1832089c8) + uVar5;
  _DAT_1832089e0 = _DAT_183208938 ^ _DAT_1832089c8;
  _DAT_183208978 = 0x2984a2a3;
  uVar5 = (~_DAT_1832089d8 + 0x2a91c98e) *
          ((_DAT_1832089b8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832089b8 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1832089d0) + (uVar5 & _DAT_1832089d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183208a80 = func_0x0001892d27e0((uVar5 | 0xaeb3eaa8) + (ulonglong)((uint)uVar5 & 0xaeb3eaa8))
  ;
  uVar5 = _DAT_183208a80 << 0x18 | _DAT_183208a80 >> 0x28;
  _DAT_183208940 = (_DAT_183208940 ^ uVar5) - 0x2a91c98d ^ 0x2309798c96cc3252;
  _DAT_183208a40 = (_DAT_183208a40 * -0x3d878ee41d3fbc8f ^ _DAT_183208940) + uVar5;
  _DAT_183208a38 = _DAT_183208a40 ^ _DAT_183208940;
  _DAT_1832089a0 = 0xd56e3673;
  uVar5 = (_DAT_183208920 ^ _DAT_1812cb020) + _DAT_1832089c8 + 0x8422231a;
  uVar10 = (_DAT_1832089c8 ^ _UNK_1812cb028) + _DAT_183208920 + 0x2a91c98d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183208920 ^ _DAT_1812cb020;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832089c8 ^ _UNK_1812cb028;
  uVar5 = func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183208920 + 0x2a91c98d) ^
                              (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832089c8 + 0x8422231a));
  uVar10 = uVar5 >> 1 | uVar5;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar5;
  _DAT_183208a20 = _DAT_183208930 ^ uVar5 ^ 0x2a91c9cc;
  _DAT_183208a90 = (_DAT_183208a90 ^ uVar5) + 0x2a91c9cc ^ 0xad72c83aca6c58bb;
  _DAT_183208910 = (_DAT_183208910 * -0x3fd188a7c8a96b61 ^ _DAT_183208a90) + uVar5;
  _DAT_1832089b0 = _DAT_183208910 ^ _DAT_183208a90;
  _DAT_183208aa8 = 0x2a91c9cc;
  uVar5 = (~_DAT_183208a18 + 0xd56e3674) *
          ((_DAT_1832089b8 ^ 0xaeb3eae9) + (ulonglong)((uint)_DAT_1832089b8 & 0xaeb3eae9) * 2);
  uVar5 = (uVar5 | _DAT_183208978) + (uVar5 & _DAT_183208978);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832089b8 = func_0x0001892d27e0((uVar5 | 0x7bdddc9a) + (ulonglong)((uint)uVar5 & 0x7bdddc9a))
  ;
  _DAT_183208930 = _DAT_183208a28 ^ _DAT_1832089b8 ^ 0x10000003f;
  _DAT_183208940 = (_DAT_183208940 ^ _DAT_1832089b8) + 0x10000003f ^ 0xc95825334f4cc21c;
  _DAT_183208978 =
       (_DAT_183208990 * 0x20b798d4dcd84505 ^ _DAT_183208940) + _DAT_1832089b8 ^ _DAT_183208940;
  _DAT_183208990 = 0x3f;
  _DAT_1832089b0 = func_0x0001892d27e0(_DAT_183208ad0 + 0x64000b00ffd8ff ^ 0x72);
  _DAT_183208a38 = (_DAT_183208a38 ^ _DAT_1832089b0) - 0x914b4f22 ^ 0x81bcdb99fa4c87dd;
  _DAT_1832089c8 = (_DAT_1832089c8 * -0x6b961072e657b17f ^ _DAT_183208a38) + _DAT_1832089b0;
  _DAT_183208af0 = _DAT_1832089c8 ^ _DAT_183208a38;
  _DAT_183208910 = 0x6eb4b0de;
  _DAT_1832089f0 = func_0x0001892d27e0(_DAT_1832089e0 ^ 0x2bffeae7ffd88a);
  _DAT_183208ab0 =
       (_DAT_183208ab0 ^ _DAT_1832089f0 & 0xfffffffffffffffc) + 0x914b4f61 ^ 0x71c43431c7ddbc43;
  _DAT_183208a98 =
       (_DAT_183208a98 * -0x114e3df2b669a7b3 ^ _DAT_183208ab0) +
       (_DAT_1832089f0 & 0xfffffffffffffffc);
  _DAT_183208aa0 = _DAT_183208a98 ^ _DAT_183208ab0;
  _DAT_1832089a8 = 0x914b4f61;
  uVar5 = func_0x0001892d27e0(_DAT_183208a30 ^ 0xffcbff9b75ffca90);
  _DAT_183208918 = _DAT_1832089f0 ^ uVar5 ^ 0x10000003f;
  _DAT_183208ab8 = (_DAT_183208ab8 ^ uVar5) + 0x10000003f ^ 0x151017536b5627b2;
  _DAT_183208900 = (_DAT_183208900 * -0x2a6e7d40eb747e5f ^ _DAT_183208ab8) + uVar5;
  _DAT_1832089d0 = _DAT_183208900 ^ _DAT_183208ab8;
  _DAT_183208980 = 0x3f;
  uVar5 = (~_DAT_1832089d0 + 0xf9a3b215) *
          ((_DAT_183208a80 ^ 0x275dc8fb) + (ulonglong)((uint)_DAT_183208a80 & 0x275dc8fb) * 2);
  uVar5 = (uVar5 | _DAT_183208a30) + (uVar5 & _DAT_183208a30);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832089c8 = func_0x0001892d27e0((uVar5 | 0xdefe7aef) + (ulonglong)((uint)uVar5 & 0xdefe7aef))
  ;
  _DAT_183208948 = _DAT_183208a58 ^ _DAT_1832089c8 ^ 0x19d239df2;
  _DAT_183208a90 = (_DAT_183208a90 ^ _DAT_1832089c8) + 0x19d239df2 ^ 0x7405226392561460;
  _DAT_183208a68 = (_DAT_183208a68 * -0x20a4a03dd42403f9 ^ _DAT_183208a90) + _DAT_1832089c8;
  _DAT_183208950 = _DAT_183208a68 ^ _DAT_183208a90;
  _DAT_183208928 = 0x9d239df2;
  _DAT_183208a40 = func_0x0001892d27e0(_DAT_183208ad8 ^ 0x6600add300392c);
  uVar5 = ((_DAT_183208a40 ^ 0x9f6ff89977272286) << 0x2c |
          (_DAT_183208a40 ^ 0x9f6ff89977272286) >> 0x14) ^ 0xa37febde;
  _DAT_183208ac0 = (_DAT_183208ac0 ^ uVar5) + 0x5adc59ca ^ 0x6e9a9909ed98570b;
  _DAT_183208978 = (_DAT_183208978 * 0x384ce83d54412905 ^ _DAT_183208ac0) + uVar5;
  _DAT_183208a68 = _DAT_183208978 ^ _DAT_183208ac0;
  _DAT_1832089a8 = 0x5adc59ca;
  uVar5 = (_DAT_183208a28 ^ _DAT_1812cb030) + _DAT_183208918 + 0x275dc8fb;
  uVar10 = (_DAT_183208918 ^ _UNK_1812cb038) + _DAT_183208a28 + 0xf9a3b214;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183208a28 ^ _DAT_1812cb030;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183208918 ^ _UNK_1812cb038;
  _DAT_1832089a0 =
       func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183208a28 + 0xf9a3b214) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183208918 + 0x275dc8fb));
  _DAT_183208910 = (_DAT_183208910 ^ _DAT_1832089a0) + 0xa123a214 ^ 0xa35a4c006a35b7cc;
  _DAT_183208a40 = (_DAT_183208a40 * -0x20514ec8fcab0039 ^ _DAT_183208910) + _DAT_1832089a0;
  _DAT_183208ac8 = _DAT_183208a40 ^ _DAT_183208910;
  _DAT_183208908 = 0xa123a214;
  _DAT_183208a60 = func_0x0001892d27e0(_DAT_1832089f0 ^ 0xffedff6344ff5672);
  uVar5 = _DAT_183208a60 ^ 0x5adc59ca;
  _DAT_183208a40 = _DAT_183208970 ^ uVar5 ^ 0x9d239df2;
  _DAT_183208af0 = (_DAT_183208af0 ^ uVar5) + 0x9d239df2 ^ 0x477323d2bf49662f;
  _DAT_183208938 = (_DAT_183208938 * 0xfe0f25bb445390b ^ _DAT_183208af0) + uVar5;
  _DAT_183208af8 = _DAT_183208938 ^ _DAT_183208af0;
  _DAT_1832089f8 = _DAT_183208920 ^ 0x9d239df2;
  _DAT_1832089b8 = 0x9d239df2;
  _DAT_1832089c8 = func_0x0001892d27e0(0x22ff84b8237bff);
  _DAT_1832089c0 = (_DAT_1832089c8 & 0x7fffffffffffffff) * -0xc1267fddd2fe10d & 0x3fffffffffff;
  _DAT_183208a18 = _DAT_183208a18 ^ _DAT_1832089c0 ^ 0xde4c3a0dbc31d90f;
  _DAT_1832089e0 = (_DAT_1832089e0 * -0x3c95f344adb3831b ^ _DAT_183208a18) + _DAT_1832089c0;
  _DAT_183208a28 = _DAT_1832089e0 ^ _DAT_183208a18;
  _DAT_183208ac8 = 0;
  _DAT_183208968 = func_0x0001892d27e0(_DAT_183208ae8 + 0xffdf0083fa0021ff ^ 0xff);
  uVar5 = _DAT_183208968 << 10 | _DAT_183208968 >> 0x36;
  _DAT_183208ae0 = _DAT_183208998 ^ uVar5 ^ 0x3f;
  _DAT_183208a90 = (_DAT_183208a90 ^ uVar5) + 0x3f ^ 0x1ef0a24d4611c770;
  _DAT_183208ad0 = (_DAT_183208ad0 * -0x1ac75e8c1dba4933 ^ _DAT_183208a90) + uVar5;
  _DAT_183208ab8 = _DAT_183208ad0 ^ _DAT_183208a90;
  _DAT_183208a88 = 0x3f;
  uVar5 = (~_DAT_183208a28 + 0x5c801422) *
          ((_DAT_183208920 ^ 0x275dc8fb) + (ulonglong)((uint)_DAT_183208920 & 0x275dc8fb) * 2);
  uVar5 = (uVar5 | _DAT_183208918) + (uVar5 & _DAT_183208918);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183208ae8 = func_0x0001892d27e0((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda))
  ;
  _DAT_183208af0 = _DAT_183208af0 ^ _DAT_183208ae8 & 0x7fffffffffffffff ^ 0xfe7836974bf3df80;
  _DAT_183208a08 =
       (_DAT_183208a08 * 0x301dc481c924ad61 ^ _DAT_183208af0) +
       (_DAT_183208ae8 & 0x7fffffffffffffff);
  _DAT_183208a98 = _DAT_183208a08 ^ _DAT_183208af0;
  _DAT_1832089c8 = 0;
  uVar5 = (_DAT_183208af8 ^ 0x8422231a) + _DAT_183208960 + 0x8422231a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183208af8 ^ 0x8422231a;
  uVar10 = ((_DAT_183208960 + _DAT_183208af8) * 0x2000 | _DAT_183208960 + _DAT_183208af8 >> 0x33) ^
           _DAT_183208960;
  _DAT_183208a30 =
       func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_183208af8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183208960 + 0x8422231a));
  _DAT_183208958 = _DAT_183208980 ^ _DAT_183208a30 ^ 0x3f;
  _DAT_183208aa0 = (_DAT_183208aa0 ^ _DAT_183208a30) + 0x3f ^ 0xb459869f3b99d8d;
  _DAT_183208ab0 = (_DAT_183208ab0 * 0x688325bfc70c7923 ^ _DAT_183208aa0) + _DAT_183208a30;
  _DAT_183208988 = _DAT_183208ab0 ^ _DAT_183208aa0;
  _DAT_183208970 = 0x3f;
  _DAT_183208a60 = func_0x0001892d27e0(_DAT_1832089a0 ^ 0x20ff7c25001d48);
  uVar5 = (_DAT_183208a60 ^ 0xa2260000) & 0xfffffffffffe0000;
  _DAT_183208938 = _DAT_183208938 ^ uVar5 ^ 0x16295961c8783cdf;
  _DAT_183208a38 = (_DAT_183208ad8 * 0x5beb65f4db1480e9 ^ _DAT_183208938) + uVar5 ^ _DAT_183208938;
  _DAT_183208ad8 = 0;
  uVar5 = (_DAT_1832089a8 ^ 0x8422231a) + _DAT_183208a78 + 0x8422231a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832089a8 ^ 0x8422231a;
  uVar10 = ((_DAT_183208a78 + _DAT_1832089a8) * 0x2000 | _DAT_183208a78 + _DAT_1832089a8 >> 0x33) ^
           _DAT_183208a78;
  _DAT_183208950 =
       func_0x0001892d27e0((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_1832089a8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183208a78 + 0x8422231a));
  uVar5 = _DAT_183208950 - (_DAT_183208950 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar4 + (uint)bVar4 ^ _DAT_183208950;
  _DAT_1832089f8 = _DAT_183208918 ^ uVar5 ^ 0x3f;
  _DAT_1832089a8 = (_DAT_1832089a8 ^ uVar5) + 0x3f ^ 0x562e795593f69f8c;
  _DAT_183208a38 = (_DAT_183208a38 * -0x196769d6fffd1529 ^ _DAT_1832089a8) + uVar5;
  _DAT_183208a20 = _DAT_183208a38 ^ _DAT_1832089a8;
  _DAT_183208a68 = 0x3f;
  uVar5 = (~_DAT_183208a30 + 0x40) *
          ((uVar8 ^ 0x84222325 ^ _DAT_183208998) +
          (ulonglong)((uint)_DAT_183208998 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | _DAT_183208920) + (uVar5 & _DAT_183208920);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x0001892d27e0((uVar8 ^ 0x8422231a | uVar5) +
                              (ulonglong)((uint)(uVar8 ^ 0x8422231a) & (uint)uVar5));
  uVar8 = ~(uVar8 * 0x3f ^ uVar5) & uVar8;
  uVar6 = uVar6 & 0x3f;
  _DAT_183208918 = (ulonglong)uVar6;
  _DAT_183208a40 = (_DAT_183208a40 ^ uVar8) + _DAT_183208918 ^ 0x37b65142844db35;
  _DAT_183208a00 = (uVar5 * -0x4f4aa84d9ba4c68f ^ _DAT_183208a40) + uVar8;
  _DAT_183208a80 = _DAT_183208a00 ^ _DAT_183208a40;
  iVar1 = *(int *)(unaff_RBP + 0x90);
  *(undefined8 *)(unaff_RBP + 0x60) = *(undefined8 *)(unaff_RBP + 0x10);
  uVar2 = *(uint *)(unaff_RBP + 0x98);
  *(uint *)(unaff_RBP + 0x68) = uVar2;
  uVar10 = (ulonglong)uVar2;
  auVar12._8_8_ = _UNK_180062bf8;
  auVar12._0_8_ = uVar10 ^ 0x84222325;
  auVar13 = pshufb(auVar12 ^ _DAT_1812cb040,auVar13);
  uVar8 = auVar13._8_8_ + auVar13._0_8_;
  uVar5 = uVar8 + _DAT_1832089b0;
  if (auVar13._4_4_ < 0) {
    uVar5 = _DAT_183208ae8 ^ uVar8;
  }
  _DAT_183208ad8 = func_0x0001892d27e0(SUB161(auVar12 ^ _DAT_1812cb040,5) ^ uVar5);
  uVar15 = uVar2 & (uint)_DAT_18001a990;
  uVar16 = uVar2 | (uint)_DAT_18001a990;
  uVar5 = _DAT_183208ad8 ^ 1;
  _DAT_183208908 =
       ((((uVar10 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)_DAT_1812cb0b0 +
         (((uVar10 ^ _DAT_18001a990) & 0xffffffff) * (ulonglong)_DAT_1812cb0c0 +
          (_DAT_18001a990 >> 0x20) * (ulonglong)_DAT_1812cb0b0 << 0x20) +
        ((ulonglong)uVar16 * (ulonglong)_DAT_1812cb0a0 << 0x20) +
        (ulonglong)uVar16 * (ulonglong)_DAT_1812cb090 +
        ((ulonglong)uVar15 * (ulonglong)_DAT_1812cb080 << 0x20 |
        (ulonglong)uVar15 * (ulonglong)_DAT_1812cb070) +
        ((ulonglong)uVar2 * (ulonglong)_DAT_1812cb060 << 0x20) +
        (ulonglong)uVar2 * (ulonglong)_DAT_1812cb050) -
       (((uVar10 ^ unaff_XMM11_Qa) & 0xffffffff) * (ulonglong)_DAT_1812cb130 +
        (((uVar10 ^ unaff_XMM11_Qa) & 0xffffffff) * (ulonglong)_DAT_1812cb140 +
         (unaff_XMM11_Qa >> 0x20) * (ulonglong)_DAT_1812cb130 << 0x20) +
       ((ulonglong)uVar16 * (ulonglong)_DAT_1812cb120 << 0x20) +
       (ulonglong)uVar16 * (ulonglong)_DAT_1812cb110 +
       ((ulonglong)uVar15 * (ulonglong)_DAT_1812cb120 << 0x20 |
       (ulonglong)uVar15 * (ulonglong)_DAT_1812cb110) +
       ((ulonglong)uVar2 * (ulonglong)_DAT_1812cb100 << 0x20) +
       (ulonglong)uVar2 * (ulonglong)_DAT_1812cb0f0)) + 0x59440fe863564b21;
  _DAT_183208958 = _DAT_183208a28 ^ uVar5 ^ _DAT_183208908;
  _DAT_183208a38 = (_DAT_183208a38 ^ uVar5) + _DAT_183208908 ^ 0x4eaafe3454d93e37;
  _DAT_1832089e0 = (_DAT_1832089e0 * 0x55e904b182788cbb ^ _DAT_183208a38) + uVar5;
  _DAT_183208a80 = _DAT_1832089e0 ^ _DAT_183208a38;
  _DAT_183208908 = _DAT_183208908 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x70) = uVar6 + iVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0xa0)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92be374 -----

undefined8 thunk_FUN_1892a75cc(void)

{
  longlong *unaff_R15;
  
  (**(code **)(unaff_R15 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x92be3ee -----

undefined8 FUN_1892be3ee(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x92be446 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892be446(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBX + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92be623 -----

void FUN_1892be623(void)

{
  return;
}


// ----- block @ rva 0x92be772 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892be772(longlong param_1)

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


// ----- block @ rva 0x92d4fd3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d4fd3(void)

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


// ----- block @ rva 0x92d5192 -----

void FUN_1892d5192(void)

{
  return;
}


// ----- block @ rva 0x92d5c57 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892d5c57(void)

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


// ----- block @ rva 0x92d5c83 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1892d55cb(void)

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


// ----- block @ rva 0x92d63ba -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d63ba(void)

{
  char cVar1;
  longlong *unaff_R13;
  undefined4 uStack000000000000009c;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  
  uStack000000000000009c = 0xc801de62;
  rdtsc();
  uStack00000000000000e0 = 0x2f005300450044;
  rdtsc();
  uStack00000000000000e8 = 0x2f004300420043;
  rdtsc();
  uStack00000000000000f0 = 0x530043004b0050;
  rdtsc();
  uStack00000000000000f8 = 0x64006100500035;
  rdtsc();
  uStack0000000000000100 = 0x67006e00690064;
  (**(code **)(unaff_R13 + JNI->NewString /*0x518*/))();
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


// ----- block @ rva 0x92d6538 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892d6538(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->CallStaticObjectMethodA /*0x3a0*/))();
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


// ----- block @ rva 0x92d67c7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d67c7(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92d6be7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d6be7(void)

{
  char cVar1;
  code *in_RAX;
  longlong *unaff_R13;
  
  (*in_RAX)();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92d8b8a -----

undefined8 thunk_FUN_1892d574c(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x92d932d -----

void FUN_1892d932d(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x92d94da -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d94da(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1812d16d8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x92d94e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892d94e6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92d9503 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d9503(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1812d16e8)();
  return;
}


// ----- block @ rva 0x92d950c -----

void FUN_1892d950c(void)

{
  return;
}


// ----- block @ rva 0x92d950d -----

undefined4 * FUN_1892d950d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x92d9594 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d9594(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812d1b18)();
  return;
}


// ----- block @ rva 0x92d9612 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892d9612(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d2278)();
  return;
}


// ----- block @ rva 0x92da1e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892da1e1(void)

{
  FUN_190ddfc90();
  (*_DAT_1812d1d38)();
  return;
}


// ----- block @ rva 0x92da4d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892da4d0(void)

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


// ----- block @ rva 0x92dac0b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892dac0b(void)

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


// ----- block @ rva 0x92dad8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dad8c(void)

{
  FUN_190dd72e0();
  (*_DAT_1812d1ff8)();
  return;
}


// ----- block @ rva 0x92dafda -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892dafda(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_1812d2078)();
  return;
}


// ----- block @ rva 0x92db54e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892db54e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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


// ----- block @ rva 0x92db654 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892db654(void)

{
  FUN_190de3220();
  (*_DAT_1812d1938)();
  return;
}


// ----- block @ rva 0x92db81c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892db81c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_1812d1888)();
  return;
}


// ----- block @ rva 0x92db856 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892db856(void)

{
  (*_DAT_1812d2188)();
  return;
}


// ----- block @ rva 0x92db85e -----

void FUN_1892db85e(void)

{
  return;
}

