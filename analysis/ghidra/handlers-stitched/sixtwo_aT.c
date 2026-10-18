// ===== STITCHED CORPUS: sixtwo.aT =====
// handlers: 8  continuation blocks: 81  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x19c088', '0x29f8040', '0x29f8668', '0x29f8678', '0x29f8de8', '0x29f8df8', '0x29f8e08', '0x29ff3b0', '0x29ff3b8', '0x29ff3c0', '0x29ff3c8', '0x29ff3d0', '0x29ff3d8', '0x29ff3e0', '0x29ff3e8', '0x29ff3f0', '0x29ff3f8', '0x29ff400', '0x29ff410']

// ===== Lsixtwo/aT; _292906081032bf46121a3a79a384cbfd ()V (handler @ image 18f917780, runtime 6ffff7527780) =====

void FUN_18f917780(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f917840 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182a00bb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/aT; bV (Lsixtwo/lC;)V (handler @ image 18f8d6a60, runtime 6ffff74e6a60) =====

void FUN_18f8d6a60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5a04,0x113)
      /* POOL[0x5a04,0x113]: Lsixtwo/aT; | bXs | (Lsixtwo/lc;)V | sixtwo/aT | xw | (Lsixtwo/lC;Lsixtwo/lc;)Lsixtwo/pi; | gUcHl | pNlKr | bEgXx | Lsixtwo/ag; | sixtwo/ag | sixtwo/pi | placements | yV | (ZZ)Lsixtwo/aT; | xv | xx | (Lsixtwo/lC;Lsixtwo/pi;)Lsixtwo/pN; | nl | (Lsixtwo/lC;Z)Lsixtwo/lc; | OiKGb | Lsixtwo/pN; | OcfDY | llMcT | tjQNE | OOHfm | L */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f8d6b32 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829f4b80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/aT; yV (ZZ)Lsixtwo/aT; (handler @ image 18f8df6c0, runtime 6ffff74ef6c0) =====

void FUN_18f8df6c0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f8df6e9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829f7a50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/aT; yW (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18f8df9e0, runtime 6ffff74ef9e0) =====

undefined8 FUN_18f8df9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/aT; yX ([B)Ljava/lang/String; (handler @ image 18f8dfa70, runtime 6ffff74efa70) =====

void FUN_18f8dfa70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f8dfb13 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829f7d30 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/aT; yY (IJ)I (handler @ image 18f907f50, runtime 6ffff7517f50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f907f50(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  
  uVar5 = (~uRam0000000183414df8 + 0x8d3b5e8369053166) *
          ((uRam0000000183414e00 ^ 0xb93940f9f05aa654) +
          (uRam0000000183414e00 & 0x393940f9f05aa654) * 2);
  uVar5 = (uVar5 | uRam0000000183414bc8) + (uVar5 & uRam0000000183414bc8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414c10 =
       func_0x00018f9139d0((uVar5 | 0x34021e7a995f9731) + (uVar5 & 0x34021e7a995f9731));
  uVar5 = (uRam0000000183414c10 ^ 0x8d3b5e8369053165) << 0x26 |
          (uRam0000000183414c10 ^ 0x8d3b5e8369053165) >> 0x1a;
  uRam0000000183414c60 = (uRam0000000183414c60 ^ uVar5) + 0xbd3b5efb7d7db575 ^ 0xe78aa4499cd6ac0;
  uRam0000000183414e90 = (uRam0000000183414e90 * 0x59d657569812c76d ^ uRam0000000183414c60) + uVar5;
  uRam0000000183414d18 = uRam0000000183414e90 ^ uRam0000000183414c60;
  uRam0000000183414c70 = 0xbd3b5efb7d7db575;
  uRam0000000183414bd8 = func_0x00018f9139d0(uRam0000000183414bc0 + 0x4d3e1cc41876510e ^ 0xde);
  uVar5 = (uRam0000000183414bd8 ^ 0x110743047cc00464) & 0x9d076fa67ec30f6e;
  uRam0000000183414e28 = (uRam0000000183414e28 ^ uVar5) + 0x1123b6754891e10d ^ 0x35b89dcdac40d90b;
  uRam0000000183414ef8 = (uRam0000000183414ef8 * -0xbbed42412511127 ^ uRam0000000183414e28) + uVar5;
  uRam0000000183414ea8 = uRam0000000183414ef8 ^ uRam0000000183414e28;
  uRam0000000183414cd8 = 0x1123b6754891e10d;
  uVar5 = (uRam0000000183414b40 ^ _UNK_1829ff3b0) + 0x4851b25140a7cbd9;
  uVar9 = (_UNK_1829ff3b8 ^ 0x1123b6754891e10d) + uRam0000000183414b40 + 0xc8d2042483c8b616;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414b40 ^ _UNK_1829ff3b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _UNK_1829ff3b8 ^ 0x1123b6754891e10d;
  uRam0000000183414bb8 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183414b40 + 0xc8d2042483c8b616) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) + 0xb7ae4daebf583427);
  uVar5 = (uRam0000000183414bb8 << 1 | (ulonglong)((longlong)uRam0000000183414bb8 < 0)) ^
          0xc8d2042483c8b616;
  uRam0000000183414e58 = uRam0000000183414d60 ^ uVar5 ^ 0x7fff;
  uRam0000000183414ec0 = (uRam0000000183414ec0 ^ uVar5) + 0x7fff ^ 0x7fb9d48b7f06cf33;
  uRam0000000183414b50 = (uRam0000000183414b50 * 0x6a717a9a9fa1f329 ^ uRam0000000183414ec0) + uVar5;
  uRam0000000183414df0 = uRam0000000183414b50 ^ uRam0000000183414ec0;
  uRam0000000183414cb0 = uRam0000000183414b88 ^ 0x7fff;
  uRam0000000183414ba8 = 0x7fff;
  uRam0000000183414d20 = func_0x00018f9139d0(uRam0000000183414bb0 ^ 0x4b2783057501207f);
  uRam0000000183414c60 = uRam0000000183414c60 + 0x137af82a7cfdb550 ^ 0xb1aaeb1ae381821b;
  uRam0000000183414eb0 = uRam0000000183414c88 * 0x23aa82ab1ff8e347;
  uRam0000000183414c88 = uRam0000000183414eb0 ^ uRam0000000183414c60;
  uRam0000000183414c10 = 0x137af82a7cfdb550;
  uVar5 = (~uRam0000000183414e80 + 0xbe7f1aef0bc5fa39) *
          ((uRam0000000183414b88 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183414b88 & 0x84222325) * 2);
  uVar5 = (uVar5 | 0x137af82a7cfdb550) + (uVar5 & 0x137af82a7cfdb550);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414e98 =
       func_0x00018f9139d0((uVar5 | 0xbe7f1aef8fe7d91d) + (uVar5 & 0xbe7f1aef8fe7d91d));
  uVar5 = (uRam0000000183414e98 << 0x29 | uRam0000000183414e98 >> 0x17) >> 8 |
          (uRam0000000183414e98 >> 0x17) << 0x38;
  uRam0000000183414e60 = (uRam0000000183414e60 ^ uVar5) + 0x4180e510f43a05c8 ^ 0xf4acfa909910f597;
  uRam0000000183414b60 = (uRam0000000183414b60 * -0x4d8725d0799f07b ^ uRam0000000183414e60) + uVar5;
  uRam0000000183414c08 = uRam0000000183414b60 ^ uRam0000000183414e60;
  uRam0000000183414df8 = 0x4180e510f43a05c8;
  uVar5 = (uRam0000000183414eb0 ^ _UNK_1829ff3c0) + uRam0000000183414b60 + 0x84225cda;
  uVar9 = (uRam0000000183414b60 ^ _UNK_1829ff3c8) + uRam0000000183414eb0 + 0xbe7f1aef0bc5fa38;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414eb0 ^ _UNK_1829ff3c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414b60 ^ _UNK_1829ff3c8;
  uRam0000000183414b60 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183414eb0 + 0xbe7f1aef0bc5fa38) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183414b60 + 0x84225cda));
  uVar5 = (uRam0000000183414b60 ^ 0x7fff) & 0x7fffffffffffffff;
  uVar9 = ((uRam0000000183414b60 ^ 0x7fff) & 0x7fffffffffffffff) >> 1 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5;
  uRam0000000183414da0 = uRam0000000183414d00 ^ uVar5 ^ 0xbe7f1aef0bc67a37;
  uRam0000000183414e00 = (uRam0000000183414e00 ^ uVar5) + 0xbe7f1aef0bc67a37 ^ 0xc42b86f980cff0ab;
  uRam0000000183414b80 = (uRam0000000183414b80 * -0x4041aa1762c4c3b9 ^ uRam0000000183414e00) + uVar5
  ;
  uRam0000000183414d60 = uRam0000000183414b80 ^ uRam0000000183414e00;
  uRam0000000183414d80 = 0xbe7f1aef0bc67a37;
  uVar5 = (~uRam0000000183414e10 + 0x4180e510f43a05c9) *
          ((uRam0000000183414e70 ^ 0xbe7f1aef8fe45912) +
          (uRam0000000183414e70 & 0x3e7f1aef8fe45912) * 2);
  uVar5 = (uVar5 | uRam0000000183414b88) + (uVar5 & uRam0000000183414b88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414e20 =
       func_0x00018f9139d0((uVar5 | 0xffffffff7bde5cda) + (uVar5 & 0xffffffff7bde5cda));
  uVar5 = uRam0000000183414e20 << 0x3d | uRam0000000183414e20 >> 3;
  uRam0000000183414be0 = uRam0000000183414e30 ^ uVar5 ^ 0x7fff;
  uRam0000000183414de8 = (uRam0000000183414de8 ^ uVar5) + 0x7fff ^ 0x70eb63024265f454;
  uRam0000000183414da0 = (uRam0000000183414da0 * 0x28e839dc69a556b3 ^ uRam0000000183414de8) + uVar5;
  uRam0000000183414ce8 = uRam0000000183414da0 ^ uRam0000000183414de8;
  uRam0000000183414c58 = 0x7fff;
  uVar5 = (uRam0000000183414c98 ^ _UNK_1829ff3d0) + uRam0000000183414bb8 + 0xbd3b5efbf95f9650;
  uVar9 = (uRam0000000183414bb8 ^ _UNK_1829ff3d8) + uRam0000000183414c98 + 0x1123b6754891e10d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414c98 ^ _UNK_1829ff3d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414bb8 ^ _UNK_1829ff3d8;
  uRam0000000183414da8 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183414c98 + 0x1123b6754891e10d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183414bb8 + 0xbd3b5efbf95f9650));
  uVar5 = uRam0000000183414da8 ^ 0xbd3b5efb7d7db575;
  uRam0000000183414d40 = uRam0000000183414d98 ^ uVar5 ^ 0xce5f1570c60f9682;
  uRam0000000183414ef8 = (uRam0000000183414ef8 ^ uVar5) + 0xce5f1570c60f9682 ^ 0xb09d40b25a13cc9b;
  uRam0000000183414c60 = (uRam0000000183414c60 * 0xbc4c7073f81fb89 ^ uRam0000000183414ef8) + uVar5;
  uRam0000000183414be8 = uRam0000000183414c60 ^ uRam0000000183414ef8;
  uRam0000000183414c28 = 0xce5f1570c60f9682;
  uVar5 = (~uRam0000000183414eb8 + 0x1123b6754891e10e) *
          ((uRam0000000183414c20 ^ 0xbd3b5efbf95f9650) +
          (uRam0000000183414c20 & 0x3d3b5efbf95f9650) * 2);
  uVar5 = (uVar5 | uRam0000000183414bd0) + (uVar5 & uRam0000000183414bd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414cd0 =
       func_0x00018f9139d0((uVar5 | 0xac18e88eb1ce775d) + (uVar5 & 0xac18e88eb1ce775d));
  uVar5 = uRam0000000183414cd0 ^ 0xac18e88e35ec5478;
  uVar9 = uVar5 >> 1 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uRam0000000183414cc8 = (uRam0000000183414cc8 ^ uVar5) + 0xac18e88e35ec5478 ^ 0xd7a0c951d1b1de61;
  uRam0000000183414b70 = (uRam0000000183414b70 * -0x66972fdcf2cb8791 ^ uRam0000000183414cc8) + uVar5
  ;
  uRam0000000183414b30 = uRam0000000183414b70 ^ uRam0000000183414cc8;
  uRam0000000183414ca8 = 0xac18e88e35ec5478;
  uRam0000000183414ee0 = func_0x00018f9139d0(uRam0000000183414b18 ^ 0x818b08915517ce2a);
  uRam0000000183414ea0 =
       (uRam0000000183414ea0 ^ uRam0000000183414ef0) + 0x112316714811a105 ^ 0x9ca3c22182b17b1b;
  uRam0000000183414cd8 =
       (uRam0000000183414cd8 * -0x37741bb404996c15 ^ uRam0000000183414ea0) + uRam0000000183414ef0;
  uRam0000000183414cc0 = uRam0000000183414cd8 ^ uRam0000000183414ea0;
  uRam0000000183414d90 = 0x112316714811a105;
  uVar5 = (uRam0000000183414e10 ^ _UNK_1829ff3e0) + uRam0000000183414c28 + 0xac18e88eb1ce775d;
  uVar9 = (uRam0000000183414c28 ^ _UNK_1829ff3e8) + uRam0000000183414e10 + 0x22462ce29023420a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414e10 ^ _UNK_1829ff3e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414c28 ^ _UNK_1829ff3e8;
  uRam0000000183414b18 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183414e10 + 0x22462ce29023420a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183414c28 + 0xac18e88eb1ce775d));
  uVar5 = uRam0000000183414b18 & 0xffffffffffffff00;
  uRam0000000183414d20 = uRam0000000183414cf0 ^ uVar5 ^ 0xce5f1570c60f9682;
  uRam0000000183414c18 = (uRam0000000183414c18 ^ uVar5) + 0xce5f1570c60f9682 ^ 0x309c11663198269f;
  uRam0000000183414c90 = (uRam0000000183414c90 * -0x57a9fad2f3f658d5 ^ uRam0000000183414c18) + uVar5
  ;
  uRam0000000183414ca8 = uRam0000000183414c90 ^ uRam0000000183414c18;
  uRam0000000183414e50 = 0xce5f1570c60f9682;
  uVar5 = (uRam0000000183414dc0 ^ _UNK_1829ff3f0) + uRam0000000183414ec8 + 0xce5f1570422db5a7;
  uVar9 = (uRam0000000183414ec8 ^ _UNK_1829ff3f8) + uRam0000000183414dc0 + 0xce5f1570c60f9682;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414dc0 ^ _UNK_1829ff3f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414ec8 ^ _UNK_1829ff3f8;
  uRam0000000183414d90 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183414dc0 + 0xce5f1570c60f9682) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183414ec8 + 0xce5f1570422db5a7));
  uVar5 = uRam0000000183414d90 >> 1 | uRam0000000183414d90;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam0000000183414e78 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
       uRam0000000183414d90;
  uRam0000000183414cc0 = uRam0000000183414cc0 ^ uRam0000000183414e78 ^ 0x7c48a2a6a8d5565d;
  uRam0000000183414e08 =
       (uRam0000000183414e08 * -0x548060cf524849ff ^ uRam0000000183414cc0) + uRam0000000183414e78;
  uRam0000000183414ca0 = uRam0000000183414e08 ^ uRam0000000183414cc0;
  uRam0000000183414ee0 = 0;
  uRam0000000183414ba8 = func_0x00018f9139d0(uRam0000000183414e08 ^ 0xd7db4977a90cb31e);
  uVar5 = (uRam0000000183414ba8 ^ 0x84311e58745c1465) & 0xbd3b5efb7d7db575;
  uRam0000000183414ed8 = uRam0000000183414ed8 ^ uVar5 ^ 0x28914183aab0c49;
  uRam0000000183414b48 = (uRam0000000183414b48 * -0x3680bedbe676a37f ^ uRam0000000183414ed8) + uVar5
  ;
  uRam0000000183414bf8 = uRam0000000183414b48 ^ uRam0000000183414ed8;
  uRam0000000183414e28 = 0;
  uVar5 = (~uRam0000000183414c58 + 0xb93940f974788572) *
          ((uRam0000000183414bf8 ^ 0xb93940f9f05aa654) +
          (uRam0000000183414bf8 & 0x393940f9f05aa654) * 2);
  uVar5 = (uVar5 | uRam0000000183414de8) + (uVar5 & uRam0000000183414de8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414d18 =
       func_0x00018f9139d0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  auVar8 = _UNK_1800170c0;
  uRam0000000183414ef0 =
       uRam0000000183414ef0 ^ uRam0000000183414d18 ^ 0xb93940f974788571 ^ 0xee913feac812f9d9;
  uRam0000000183414b20 =
       (uRam0000000183414b20 * -0x412e284ff842b051 ^ uRam0000000183414ef0) +
       (uRam0000000183414d18 ^ 0xb93940f974788571);
  uRam0000000183414e78 = uRam0000000183414b20 ^ uRam0000000183414ef0;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183414bb8 = 0;
  auVar7 = pshufb(auVar6 ^ _UNK_1829ff400,_UNK_1800170c0);
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar5 = uVar9 + lRam0000000183414c78;
  if (auVar7._4_4_ < 0) {
    uVar5 = uRam0000000183414b98 ^ uVar9;
  }
  uRam0000000183414df0 = func_0x00018f9139d0(SUB161(auVar6 ^ _UNK_1829ff400,5) ^ uVar5);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam0000000183414ee8 = (ulonglong)uVar2;
  uRam0000000183414b20 =
       (uRam0000000183414b20 ^ uRam0000000183414df0 & 0x7fffffffffffffff) + uRam0000000183414ee8 ^
       0x43160287f1ed05c0;
  uRam0000000183414cf0 =
       (uRam0000000183414cf0 * 0x77b018ec3e011d83 ^ uRam0000000183414b20) +
       (uRam0000000183414df0 & 0x7fffffffffffffff);
  uRam0000000183414b58 = uRam0000000183414cf0 ^ uRam0000000183414b20;
  uVar9 = uRam0000000183414ee8 ^ 0x84222325;
  uVar5 = ((uRam0000000183414e08 ^ uVar9) +
          (ulonglong)((uint)uRam0000000183414e08 & (uint)uVar9) * 2) *
          (param_3 - uRam0000000183414eb8);
  uVar5 = (uVar5 | uRam0000000183414c90) + (uVar5 & uRam0000000183414c90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar9 = uVar9 ^ param_3;
  uRam0000000183414de8 =
       func_0x00018f9139d0((uVar9 | uVar5) + (ulonglong)((uint)uVar9 & (uint)uVar5));
  uVar2 = uVar2 ^ param_3;
  uVar3 = (ulonglong)uVar2;
  uRam0000000183414e60 = (uRam0000000183414e60 ^ uRam0000000183414de8) + uVar3 ^ 0x4aaabd02c5bc1d16;
  uRam0000000183414be8 =
       (uRam0000000183414be8 * -0x1ad3c022cddee1a5 ^ uRam0000000183414e60) + uRam0000000183414de8;
  uRam0000000183414e38 = uRam0000000183414be8 ^ uRam0000000183414e60;
  uVar5 = (~uRam0000000183414ea0 + 0x40875460) *
          ((uRam0000000183414c90 ^ 0x8609085f) +
          (ulonglong)((uint)uRam0000000183414c90 & 0x8609085f) * 2);
  uVar5 = (uVar5 | uRam0000000183414d90) + (uVar5 & uRam0000000183414d90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414ba8 = uVar3;
  uRam0000000183414ee0 =
       func_0x00018f9139d0((uVar5 | 0xc68e5c00) + (ulonglong)((uint)uVar5 & 0xc68e5c00));
  uVar5 = (uRam0000000183414ee0 & 0x7fffff) << 0xc | uRam0000000183414ee0 >> 0x34;
  uRam0000000183414c80 = (uRam0000000183414c80 ^ uVar5) + 0x42af7f7f ^ 0xcdc8e599b70f2bf7;
  uRam0000000183414e58 = (uRam0000000183414e58 * 0x69b3cdb6341f2041 ^ uRam0000000183414c80) + uVar5;
  uRam0000000183414ed8 = uRam0000000183414e58 ^ uRam0000000183414c80;
  uRam0000000183414b98 = 0x42af7f7f;
  uVar5 = (uRam0000000183414ce8 ^ _UNK_1829ff410) + uRam0000000183414bf8 + 0x84222325;
  uVar9 = (uRam0000000183414bf8 ^ _UNK_1829ff418) + uRam0000000183414ce8 + 0xfd28dcfc;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414ce8 ^ _UNK_1829ff410;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414bf8 ^ _UNK_1829ff418;
  uRam0000000183414ef0 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183414ce8 + 0xfd28dcfc) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183414bf8 + 0x84222325));
  uRam0000000183414b30 =
       (uRam0000000183414b30 ^ uRam0000000183414ef0) - 0xfd28dcfc ^ 0x8ef059a486fbab96;
  uRam0000000183414cf8 =
       (uRam0000000183414cf8 * 0x3cd5ae53f230567f ^ uRam0000000183414b30) + uRam0000000183414ef0;
  uRam0000000183414c88 = uRam0000000183414cf8 ^ uRam0000000183414b30;
  uRam0000000183414e38 = 0x2d72304;
  uRam0000000183414ea8 = func_0x00018f9139d0(uRam0000000183414b78 ^ 0xff4affc8b500099c);
  uVar5 = (uRam0000000183414ea8 & 0x1ffffffffff) * -0x15569fdd905e72d7;
  uRam0000000183414bb0 = uRam0000000183414dc8 ^ uVar5 ^ 0xfd290f02;
  uRam0000000183414e98 = (uRam0000000183414e98 ^ uVar5) + 0xfd290f02 ^ 0x21b91e6c3ab89811;
  uRam0000000183414c58 = (uRam0000000183414c58 * 0x2da66f537f7d5fd5 ^ uRam0000000183414e98) + uVar5;
  uRam0000000183414be0 = uRam0000000183414c58 ^ uRam0000000183414e98;
  uRam0000000183414ec0 = 0xfd290f02;
  uVar5 = (uRam0000000183414d28 ^ _UNK_1829ff420) + uRam0000000183414de0 + 0x84221123;
  uVar9 = (uRam0000000183414de0 ^ _UNK_1829ff428) + uRam0000000183414d28 + 0xb3f34078;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414d28 ^ _UNK_1829ff420;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414de0 ^ _UNK_1829ff428;
  uRam0000000183414b80 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183414d28 + 0xb3f34078) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183414de0 + 0x84221123));
  uVar5 = uRam0000000183414b80 ^ 0xb3f3727e;
  uVar9 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar5;
  uRam0000000183414e50 = uRam0000000183414ec0 ^ uVar5 ^ 0xb3f3727e;
  uRam0000000183414ca8 = (uRam0000000183414ca8 ^ uVar5) + 0xb3f3727e ^ 0xba098debfb1d619d;
  uRam0000000183414e20 = (uRam0000000183414e20 * 0x56970e406e574587 ^ uRam0000000183414ca8) + uVar5;
  uRam0000000183414c10 = uRam0000000183414e20 ^ uRam0000000183414ca8;
  uRam0000000183414c20 = 0xb3f3727e;
  uRam0000000183414d50 = func_0x00018f9139d0(uRam0000000183414bb0 ^ 0x99fff630ffb246);
  uVar5 = uRam0000000183414d50 ^ 0x4c0cbf88;
  uRam0000000183414bc8 = uRam0000000183414d18 ^ uVar5 ^ 0x100003206;
  uRam0000000183414db0 = (uRam0000000183414db0 ^ uVar5) + 0x100003206 ^ 0xa92d29b3267912db;
  uRam0000000183414c98 = (uRam0000000183414c98 * 0x3d43a4d880e6101f ^ uRam0000000183414db0) + uVar5;
  uRam0000000183414c68 = uRam0000000183414c98 ^ uRam0000000183414db0;
  uRam0000000183414b20 = 0x3206;
  uVar5 = (~uRam0000000183414d60 + 0x7f2eb169) *
          ((uRam0000000183414e70 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183414e70 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183414ec0) + (uVar5 & uRam0000000183414ec0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414e18 =
       func_0x00018f9139d0((uVar5 | 0xfb0c924d) + (ulonglong)((uint)uVar5 & 0xfb0c924d));
  uVar5 = uRam0000000183414e18 << 9 | (uRam0000000183414e18 & 0x7fffffffffffffff) >> 0x37;
  uRam0000000183414bf0 = (uRam0000000183414bf0 ^ uVar5) - 0x7f2eb168 ^ 0x19b367daaf42ff2;
  uRam0000000183414cd8 = (uRam0000000183414cd8 * 0x3184c2270bd97719 ^ uRam0000000183414bf0) + uVar5;
  uRam0000000183414d00 = uRam0000000183414cd8 ^ uRam0000000183414bf0;
  uRam0000000183414da8 = 0x80d14e98;
  uRam0000000183414bd0 = func_0x00018f9139d0(uRam0000000183414ca0 + 0xa00084b90003ff ^ 0x56);
  uVar5 = uRam0000000183414bd0 ^ 0x3206;
  uRam0000000183414ee8 = uRam0000000183414dd8 ^ uVar5 ^ 0x7f2ee36e;
  uRam0000000183414ec0 = (uRam0000000183414ec0 ^ uVar5) + 0x7f2ee36e ^ 0xf186581655471e09;
  uRam0000000183414d60 = (uRam0000000183414d60 * 0x154ac23e6104e9ef ^ uRam0000000183414ec0) + uVar5;
  uRam0000000183414c30 = uRam0000000183414d60 ^ uRam0000000183414ec0;
  uRam0000000183414ca8 = 0x7f2ee36e;
  uVar5 = (uRam0000000183414c38 ^ _UNK_1829ff430) + uRam0000000183414d88 + 0xfb0cc04b;
  uVar9 = (uRam0000000183414d88 ^ _UNK_1829ff438) + uRam0000000183414c38 + 0x80d14e98;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414c38 ^ _UNK_1829ff430;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414d88 ^ _UNK_1829ff438;
  uRam0000000183414de0 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183414c38 + 0x80d14e98) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183414d88 + 0xfb0cc04b));
  uVar5 = uRam0000000183414de0 ^ 0x7f2ee36e;
  uRam0000000183414c40 = uRam0000000183414d78 ^ uVar5 ^ 0x100003206;
  uRam0000000183414e30 = (uRam0000000183414e30 ^ uVar5) + 0x100003206 ^ 0xfb1cfa14232cbfaf;
  uRam0000000183414ef8 = (uRam0000000183414ef8 * 0x6b4b688ba2c92ae1 ^ uRam0000000183414e30) + uVar5;
  uRam0000000183414d10 = uRam0000000183414ef8 ^ uRam0000000183414e30;
  uRam0000000183414cb0 = 0x3206;
  uVar5 = (~uRam0000000183414bb8 + 0xedd509ee) *
          ((uRam0000000183414c30 ^ 0xc68d5c5a) +
          (ulonglong)((uint)uRam0000000183414c30 & 0xc68d5c5a) * 2);
  uVar5 = (uVar5 | uRam0000000183414b10) + (uVar5 & uRam0000000183414b10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414e88 =
       func_0x00018f9139d0((uVar5 | 0x2b5855b7) + (ulonglong)((uint)uVar5 & 0x2b5855b7));
  uVar5 = (uRam0000000183414e88 ^ 0xefff7fff) & 0x7fffffffffffffff;
  uRam0000000183414e40 = uRam0000000183414d80 ^ uVar5 ^ 0x13084896c;
  uRam0000000183414b38 = (uRam0000000183414b38 ^ uVar5) + 0x13084896c ^ 0xece3831c25542ca3;
  uRam0000000183414ed8 =
       (uRam0000000183414ed8 * 0x2fd14fd1d2a16dbb ^ uRam0000000183414b38) + uVar5 ^
       uRam0000000183414b38;
  uRam0000000183414b00 = 0x3084896c;
  uRam0000000183414ba0 = func_0x00018f9139d0(uRam0000000183414e28 + 0x2d0016550047ff ^ 0xb1);
  uRam0000000183414ee8 =
       (uRam0000000183414ee8 ^ uRam0000000183414ba0 & 0xffffffffffff) + 0xaf7a7692 ^
       0xd5ee8622925014a5;
  uRam0000000183414d20 =
       (uRam0000000183414d20 * 0x2c5147d086e8606d ^ uRam0000000183414ee8) +
       (uRam0000000183414ba0 & 0xffffffffffff);
  uRam0000000183414b28 = uRam0000000183414d20 ^ uRam0000000183414ee8;
  lRam0000000183414c78 = 0xaf7a7692;
  uVar5 = (uRam0000000183414e10 ^ _UNK_1829ff440) + uRam0000000183414c68 + 0x2b5855b7;
  uVar9 = (uRam0000000183414c68 ^ _UNK_1829ff448) + uRam0000000183414e10 + 0x810a12da;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414e10 ^ _UNK_1829ff440;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414c68 ^ _UNK_1829ff448;
  uRam0000000183414d88 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183414e10 + 0x810a12da) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183414c68 + 0x2b5855b7));
  uRam0000000183414c68 = uRam0000000183414e48 ^ uRam0000000183414d88 ^ 0x13084896c;
  uRam0000000183414d20 =
       (uRam0000000183414d20 ^ uRam0000000183414d88) + 0x13084896c ^ 0x5b60091903a37a85;
  uRam0000000183414e28 =
       (uRam0000000183414e28 * 0x28d399276e3e8955 ^ uRam0000000183414d20) + uRam0000000183414d88;
  uRam0000000183414b80 = uRam0000000183414e28 ^ uRam0000000183414d20;
  uRam0000000183414d60 = 0x3084896c;
  uVar5 = (uRam0000000183414e88 ^ _UNK_1829ff450) + uRam0000000183414e18 + 0xb4a6aa49;
  uVar9 = (uRam0000000183414e18 ^ _UNK_1829ff458) + uRam0000000183414e88 + 0x3084896c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414e88 ^ _UNK_1829ff450;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414e18 ^ _UNK_1829ff458;
  uRam0000000183414b38 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183414e88 + 0x3084896c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183414e18 + 0xb4a6aa49));
  uRam0000000183414ef8 = uRam0000000183414b38 ^ 0x3084896c;
  uRam0000000183414b48 = uRam0000000183414b48 ^ uRam0000000183414ef8 ^ 0xa312f5c4a85696eb;
  uRam0000000183414b50 =
       (uRam0000000183414b50 * 0x6dae6ab87b3de15b ^ uRam0000000183414b48) + uRam0000000183414ef8;
  uRam0000000183414c60 = uRam0000000183414b50 ^ uRam0000000183414b48;
  uRam0000000183414ba8 = 0;
  uVar5 = (uRam0000000183414b70 ^ 0x84221123) + uRam0000000183414c18 + 0x84221123;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414b70 ^ 0x84221123;
  uVar9 = ((uRam0000000183414c18 + uRam0000000183414b70) * 0x2000 |
          uRam0000000183414c18 + uRam0000000183414b70 >> 0x33) ^ uRam0000000183414c18;
  uRam0000000183414d78 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183414b70 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183414c18 + 0x84221123));
  uVar5 = uRam0000000183414d78 & 0x7fffffffffffffff;
  uRam0000000183414d18 = uRam0000000183414dc8 ^ uVar5 ^ 0x3206;
  uRam0000000183414d80 = (uRam0000000183414d80 ^ uVar5) + 0x3206 ^ 0xdd8b1f7f65173c11;
  uRam0000000183414c68 = (uRam0000000183414c68 * -0x79b1c5c3f07274db ^ uRam0000000183414d80) + uVar5
  ;
  uRam0000000183414bc0 = uRam0000000183414c68 ^ uRam0000000183414d80;
  uRam0000000183414bc8 = 0x3206;
  uVar5 = (uRam0000000183414ee0 ^ _UNK_1829ff460) + uRam0000000183414be8 + 0xc68d5c5a;
  uVar9 = (uRam0000000183414be8 ^ _UNK_1829ff468) + uRam0000000183414ee0 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183414ee0 ^ _UNK_1829ff460;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183414be8 ^ _UNK_1829ff468;
  uRam0000000183414eb8 =
       func_0x00018f9139d0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183414ee0 + 0xffffffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183414be8 + 0xc68d5c5a));
  uRam0000000183414e18 =
       (uRam0000000183414e18 ^ uRam0000000183414eb8 ^ 0x42af7f7ebd508081) + 0xbd508080 ^
       0x9f4f3f7efe566e4a;
  uRam0000000183414b90 =
       (uRam0000000183414b90 * -0x4ed5e8baa92415c9 ^ uRam0000000183414e18) +
       (uRam0000000183414eb8 ^ 0x42af7f7ebd508081);
  uRam0000000183414e90 = uRam0000000183414b90 ^ uRam0000000183414e18;
  uRam0000000183414c88 = 0xbd508080;
  uVar5 = (~uRam0000000183414cd8 + 0xbd508081) *
          ((uRam0000000183414b40 ^ 0xc68d5c5a) +
          (ulonglong)((uint)uRam0000000183414b40 & 0xc68d5c5a) * 2);
  uVar5 = (uVar5 | uRam0000000183414e28) + (uVar5 & uRam0000000183414e28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414e58 =
       func_0x00018f9139d0((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uRam0000000183414d18 =
       uRam0000000183414d18 ^ uRam0000000183414e58 ^ 0x31508971b22f3f80 ^ 0x7da68de1baa62dc0;
  uRam0000000183414bb0 =
       (uRam0000000183414bb0 * -0x6888fe3ca949c4a9 ^ uRam0000000183414d18) +
       (uRam0000000183414e58 ^ 0x31508971b22f3f80);
  uRam0000000183414d40 = uRam0000000183414bb0 ^ uRam0000000183414d18;
  uRam0000000183414ee0 = 0;
  uRam0000000183414b80 = func_0x00018f9139d0(uRam0000000183414cd0 + 0x10ff84230021ff ^ 0x6c);
  uRam0000000183414bd0 = uRam0000000183414c88 ^ uRam0000000183414b80 ^ 0x3206;
  uRam0000000183414c30 = (uRam0000000183414c30 ^ uRam0000000183414b80) + 0x3206 ^ 0xe270fbe885490d12
  ;
  uRam0000000183414ba0 =
       (uRam0000000183414ba0 * 0x1cc95a65d0ddba3 ^ uRam0000000183414c30) + uRam0000000183414b80;
  uRam0000000183414cd0 = uRam0000000183414ba0 ^ uRam0000000183414c30;
  uRam0000000183414eb8 = uRam0000000183414ed8 ^ 0x3206;
  uRam0000000183414c18 = 0x3206;
  uVar5 = (~uRam0000000183414d08 + 0x22b2b7b) *
          ((uRam0000000183414c40 ^ 0x8609085f) +
          (ulonglong)((uint)uRam0000000183414c40 & 0x8609085f) * 2);
  uVar5 = (uVar5 | uRam0000000183414d38) + (uVar5 & uRam0000000183414d38);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183414c70 =
       func_0x00018f9139d0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = uRam0000000183414c70 >> 10 ^ 0x8aca;
  uVar9 = uVar5 * 0x400;
  uVar5 = uVar9 + (uVar5 & 0x2aaaaaaaaaaaaa) * -0x200;
  uVar5 = (uVar5 & 0x3333333333333000) + (uVar5 >> 2 & 0x3333333333333300);
  uVar9 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f00) * 0x101010101010101 >> 0x38) << 4 ^ uVar9;
  uRam0000000183414cf8 = uRam0000000183414cf8 ^ uVar9 ^ 0xb7c71232d59ac8b9;
  uRam0000000183414d78 = (uRam0000000183414d78 * 0x7439eedabcdc837b ^ uRam0000000183414cf8) + uVar9;
  uRam0000000183414b40 = uRam0000000183414d78 ^ uRam0000000183414cf8;
  auVar7._8_8_ = _UNK_1829ff478;
  auVar7._0_8_ = uVar3 ^ 0x84222325;
  uRam0000000183414d10 = uRam0000000183414ef0;
  uRam0000000183414c88 = 0;
  auVar8 = pshufb(auVar7 ^ _UNK_1829ff480,auVar8);
  uVar9 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar9 + uRam0000000183414e90;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam0000000183414b50 ^ uVar9;
  }
  uRam0000000183414b88 = func_0x00018f9139d0(SUB161(auVar7 ^ _UNK_1829ff480,5) ^ uVar5);
  uVar5 = uVar3 * 0x3206 ^ uRam0000000183414b88;
  lVar4 = uVar3 - (uVar2 & 0x3206) * 2;
  uRam0000000183414d08 = (uRam0000000183414d08 ^ uVar5) + lVar4 + 0x3206 ^ 0x2abc6a681e097c29;
  uRam0000000183414bf0 = (uRam0000000183414bf0 * -0x56b1569a05c6e3f1 ^ uRam0000000183414d08) + uVar5
  ;
  uRam0000000183414c58 = uRam0000000183414bf0 ^ uRam0000000183414d08;
  uRam0000000183414c20 = lVar4 + 0x3206U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5a04,0x113)
      /* POOL[0x5a04,0x113]: Lsixtwo/aT; | bXs | (Lsixtwo/lc;)V | sixtwo/aT | xw | (Lsixtwo/lC;Lsixtwo/lc;)Lsixtwo/pi; | gUcHl | pNlKr | bEgXx | Lsixtwo/ag; | sixtwo/ag | sixtwo/pi | placements | yV | (ZZ)Lsixtwo/aT; | xv | xx | (Lsixtwo/lC;Lsixtwo/pi;)Lsixtwo/pN; | nl | (Lsixtwo/lC;Z)Lsixtwo/lc; | OiKGb | Lsixtwo/pN; | OcfDY | llMcT | tjQNE | OOHfm | L */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f90a278 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829fd550 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/aT; yZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18f913a60, runtime 6ffff7523a60) =====

void FUN_18f913a60(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018f913aab did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829ff600 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/aT; za (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18f914a70, runtime 6ffff7524a70) =====

void FUN_18f914a70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f914af9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829ffbc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xf8d6b35 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8d6b35(void)

{
  FUN_190ddce00();
  (*_DAT_1829f5888)();
  return;
}


// ----- block @ rva 0xf8da5c2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8da5c2(void)

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


// ----- block @ rva 0xf8db3a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8db3a8(void)

{
  longlong in_RAX;
  longlong *in_stack_00000040;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000040);
  (**(code **)(in_stack_00000040 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000040);
  (*_DAT_1829f6418)();
  return;
}


// ----- block @ rva 0xf8db964 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8db964(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1829f5d88)();
  return;
}


// ----- block @ rva 0xf8dba91 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8dba91(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000040;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1829f54e8)();
  return;
}


// ----- block @ rva 0xf8dbc77 -----

void FUN_18f8dbc77(void)

{
  return;
}


// ----- block @ rva 0xf8dc65f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8dc65f(void)

{
  undefined8 in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x6200,0x11e);
  (*_DAT_1829f6838)();
  return;
}


// ----- block @ rva 0xf8dcb12 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8dcb12(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(in_stack_00000040 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1829f5968)();
  return;
}


// ----- block @ rva 0xf8dd154 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8dd154(void)

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


// ----- block @ rva 0xf8de07d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8de07d(void)

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


// ----- block @ rva 0xf8dec92 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8dec92(undefined4 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(unaff_RSI + JNI->CallStaticFloatMethodA /*0x448*/))(param_1,in_stack_00000030);
  (*_DAT_1829f5448)();
  return;
}


// ----- block @ rva 0xf8df567 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8df567(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(in_stack_00000040 + JNI->CallVoidMethodA /*0x1f8*/))(in_stack_00000040);
  (**(code **)(in_stack_00000040 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000040);
  (*_DAT_1829f6148)();
  return;
}


// ----- block @ rva 0xf8df590 -----

void FUN_18f8df590(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xf8df6ec -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8df6ec(void)

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


// ----- block @ rva 0xf8df725 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8df725(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1829f7b28)();
  return;
}


// ----- block @ rva 0xf8df75f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8df75f(void)

{
  FUN_190dd72e0();
  (*_DAT_1829f7a68)();
  return;
}


// ----- block @ rva 0xf8df787 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8df787(void)

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


// ----- block @ rva 0xf8df7db -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8df7db(void)

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


// ----- block @ rva 0xf8df7ff -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8df7ff(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetBooleanField /*0x348*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1829f7b68)();
  return;
}


// ----- block @ rva 0xf8df8af -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8df8af(void)

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


// ----- block @ rva 0xf8df8c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8df8c4(void)

{
  FUN_190dd9df0();
  (*_DAT_1829f7b38)();
  return;
}


// ----- block @ rva 0xf8df942 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8df942(void)

{
  (*_DAT_1829f7ae8)();
  return;
}


// ----- block @ rva 0xf8df953 -----

void FUN_18f8df953(void)

{
  return;
}


// ----- block @ rva 0xf8df95e -----

void FUN_18f8df95e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xf8dfb16 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f8dfb4d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f8dfb16(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xf8dfb6b -----

void FUN_18f8dfb6b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0x30) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018f8dfba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829f8040 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xf8dfc48 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8dfc48(ulonglong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBP;
  uint uVar9;
  longlong unaff_RSI;
  ulonglong in_XMM0_Qb;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = in_XMM0_Qb + in_RAX + unaff_RSI;
  param_1 = ((param_1 + in_RCX) * 0x2000 | param_1 + in_RCX >> 0x33) ^ param_1;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ in_XMM0_Qb;
  _DAT_183413fc0 =
       func_0x00018f907ec0((uVar10 << 0x1d | uVar10 >> 0x23) - (in_RAX + unaff_RSI) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - in_RCX);
  uVar8 = _DAT_1829f8ec0;
  uVar7 = _DAT_1829f8eb0;
  uVar6 = _DAT_1829f8ea0;
  uVar5 = _DAT_1829f8e90;
  uVar4 = _DAT_1829f8e50;
  uVar3 = _DAT_1829f8e30;
  uVar2 = _DAT_1829f8e10;
  uVar9 = -(int)unaff_RSI;
  _DAT_1834142a0 = (_DAT_1834142a0 ^ 0x1000) - unaff_RSI ^ 0x35f998bb8cf1766d;
  _DAT_1834140a0 = (_DAT_1834140a0 * 0x5ba8c3a049a3baad ^ _DAT_1834142a0) + 0x1000;
  _DAT_183413ff8 = _DAT_1834140a0 ^ _DAT_1834142a0;
  _DAT_183414020 = (ulonglong)uVar9;
  *(uint *)(unaff_RBP + 0x70) = uVar9;
  *(char *)(unaff_RBP + 0xa8) = (char)uVar9 + (char)(uVar9 / 10) * -10;
  uVar10 = (_DAT_183413f98 ^ _DAT_1829f8df0) + _DAT_1834142e0 + 0x842223ee;
  uVar11 = (_DAT_1834142e0 ^ _UNK_1829f8df8) + _DAT_183413f98 + 0xbd;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183413f98 ^ _DAT_1829f8df0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1834142e0 ^ _UNK_1829f8df8;
  _DAT_183413fb8 =
       func_0x00018f907ec0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183413f98 + 0xbd) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1834142e0 + 0x842223ee));
  uVar10 = (_DAT_183413fb8 & 0x7ffff0000000) * -0x558cceebd1d282dd;
  _DAT_1834140a8 = (_DAT_1834140a8 ^ uVar10) + 0xff ^ 0x39e39fb747027fa5;
  _DAT_183413f48 = (_DAT_183413f48 * 0x6f17a66ff7bdab87 ^ _DAT_1834140a8) + uVar10;
  _DAT_1834140a0 = _DAT_183413f48 ^ _DAT_1834140a8;
  _DAT_1834144d8 = 0xff;
  _DAT_183414430 = func_0x00018f907ec0(_DAT_183414278 + 0x23007c10ffe1ffU ^ 0x65);
  uVar10 = _DAT_183414430 ^ 0x642;
  _DAT_183414458 = _DAT_183414248 ^ uVar10 ^ 0x52;
  _DAT_1834141a8 = (_DAT_1834141a8 ^ uVar10) + 0x52 ^ 0x1b69da70fb357534;
  _DAT_1834140e8 = (_DAT_1834140e8 * 0x7ada5e6d1c626465 ^ _DAT_1834141a8) + uVar10;
  _DAT_183414488 = _DAT_1834140e8 ^ _DAT_1834141a8;
  _DAT_183414088 = 0x52;
  uVar10 = (~_DAT_183413f90 + 0xdf) *
           ((_DAT_183414370 ^ 0x84222377) + (ulonglong)((uint)_DAT_183414370 & 0x84222377) * 2);
  uVar10 = (uVar10 | _DAT_1834141d0) + (uVar10 & _DAT_1834141d0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar10 = func_0x00018f907ec0((uVar10 | 0x842223a9) + (ulonglong)((uint)uVar10 & 0x842223a9));
  _DAT_183414150 = _DAT_183413f40 ^ uVar10 ^ 0x130;
  _DAT_1834144e8 = (_DAT_1834144e8 ^ uVar10) + 0x130 ^ 0x88d9bd1a3f2c5c9a;
  _DAT_183414488 = (_DAT_183414488 * 0x3aa11a43c3aa5943 ^ _DAT_1834144e8) + uVar10;
  _DAT_183414300 = _DAT_183414488 ^ _DAT_1834144e8;
  _DAT_1834144c0 = 0x30;
  uVar10 = (~_DAT_1834144a8 + 0xd8) *
           ((_DAT_183414350 ^ 0x84222325) + (ulonglong)((uint)_DAT_183414350 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_183414010) + (uVar10 & _DAT_183414010);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183414040 =
       func_0x00018f907ec0((uVar10 | 0x842223f2) + (ulonglong)((uint)uVar10 & 0x842223f2));
  uVar10 = _DAT_183414098 >> 1 | _DAT_183414098;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10 ^ _DAT_183414098;
  _DAT_183414050 = (_DAT_183414050 ^ uVar10) - 0xd7 ^ 0xfd35e0e9721ed7bc;
  _DAT_183414438 = (_DAT_183414438 * -0x2071dc38c1901c5b ^ _DAT_183414050) + uVar10;
  _DAT_183414068 = _DAT_183414438 ^ _DAT_183414050;
  _DAT_1834142a0 = 0x29;
  _DAT_183414138 = func_0x00018f907ec0(_DAT_183414328 ^ 0xffdcff83c1ffe19e);
  uVar10 = _DAT_183414138 >> 1 | _DAT_183414138;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = 0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_183414138;
  _DAT_1834143d8 = _DAT_1834143e0 ^ uVar10 ^ 0x107;
  _DAT_183413ff8 = (_DAT_183413ff8 ^ uVar10) + 0x107 ^ 0x6f5a015630a7208d;
  _DAT_183414438 = (_DAT_183414438 * -0x3e8a574a76160f25 ^ _DAT_183413ff8) + uVar10;
  _DAT_183413f78 = _DAT_183414438 ^ _DAT_183413ff8;
  _DAT_183414318 = 7;
  _DAT_183414118 = func_0x00018f907ec0(_DAT_183414238 + 0x22ff83f50021ffU ^ 0xd9);
  uVar10 = (_DAT_183414118 ^ 0x2f) & 0x7fffffffffffffff ^ 0x29;
  _DAT_183414008 = _DAT_1834144d8 ^ uVar10 ^ 0x30;
  _DAT_183414248 = (_DAT_1834141a0 ^ uVar10) + 0x30 ^ 0x8f72edd4f1c50886;
  _DAT_1834141a0 = (_DAT_1834141a0 * 0x245f8648cce84349 ^ _DAT_183414248) + uVar10;
  _DAT_183414248 = _DAT_1834141a0 ^ _DAT_183414248;
  _DAT_183414450 = 0x30;
  uVar10 = (_DAT_1834143d8 ^ _DAT_1807068b0) + _DAT_183414178 + 0x8422233a;
  uVar11 = (_DAT_183414178 ^ _UNK_1807068b8) + _DAT_1834143d8 + 0x11;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1834143d8 ^ _DAT_1807068b0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183414178 ^ _UNK_1807068b8;
  _DAT_1834143e0 =
       func_0x00018f907ec0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1834143d8 + 0x11) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183414178 + 0x8422233a));
  _DAT_183413fe0 = _DAT_183413f58 ^ _DAT_183414308 ^ 0x30;
  _DAT_183414380 = (_DAT_183414380 ^ _DAT_183414308) + 0x30 ^ 0x914ff0fc69c135b3;
  _DAT_183414170 = (_DAT_183414170 * 0x638f41cac88882ff ^ _DAT_183414380) + _DAT_183414308;
  _DAT_183414180 = _DAT_183414170 ^ _DAT_183414380;
  _DAT_183413ff0 = 0x30;
  _DAT_1834144a0 = func_0x00018f907ec0(_DAT_183414428 ^ 0x20ff83c6ffddd6);
  uVar10 = _DAT_1834144a0 & 0x1ffffffffffff;
  _DAT_183414160 = _DAT_183414140 ^ uVar10 ^ 0x102;
  _DAT_183414180 = (_DAT_183414180 ^ uVar10) + 0x102 ^ 0xa3f182058ed7412c;
  _DAT_183413f80 = (_DAT_183413f80 * -0xbf5df4f880fba65 ^ _DAT_183414180) + uVar10;
  _DAT_1834140f8 = _DAT_183413f80 ^ _DAT_183414180;
  _DAT_1834141a8 = 2;
  uVar10 = (_DAT_1834143b0 ^ _DAT_1829f8e00) + _DAT_1834141e0 + 0x842223da;
  uVar11 = (_DAT_1834141e0 ^ _UNK_1829f8e08) + _DAT_1834143b0 + 3;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1834143b0 ^ _DAT_1829f8e00;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1834141e0 ^ _UNK_1829f8e08;
  _DAT_183414160 =
       func_0x00018f907ec0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1834143b0 + 3) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1834141e0 + 0x842223da));
  _DAT_1834141b0 = (_DAT_1834141b0 ^ _DAT_183414160 ^ 0x2fd) + 0xfc ^ 0x5f774475378a7722;
  _DAT_183413f88 = (_DAT_183413f88 * 0x7098cdbee9b4aa6f ^ _DAT_1834141b0) + (_DAT_183414160 ^ 0x2fd)
  ;
  _DAT_183413fd8 = _DAT_183413f88 ^ _DAT_1834141b0;
  _DAT_183413f38 = 0xfc;
  uVar10 = (~_DAT_183414008 + 4) *
           ((_DAT_183414360 ^ 0x842223da) + (ulonglong)((uint)_DAT_183414360 & 0x842223da) * 2);
  uVar10 = (uVar10 | _DAT_183414290) + (uVar10 & _DAT_183414290);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1834141f8 =
       func_0x00018f907ec0((uVar10 | 0x842223d9) + (ulonglong)((uint)uVar10 & 0x842223d9));
  uVar10 = (_DAT_1834141f8 << 0x11 | _DAT_1834141f8 >> 0x2f) << 0x14 |
           (_DAT_1834141f8 & 0x7fffffffffff) >> 0x1b;
  _DAT_183414348 = (_DAT_183414348 ^ uVar10) + 3 ^ 0x814ded4dfd9643a4;
  _DAT_183414260 = (_DAT_183414260 * -0x195ce62477dec6af ^ _DAT_183414348) + uVar10;
  _DAT_1834142d0 = _DAT_183414260 ^ _DAT_183414348;
  _DAT_183414188 = 3;
  uVar10 = (~_DAT_183413f90 + 0x100) *
           ((_DAT_183413fc0 ^ 0x842223da) + (ulonglong)((uint)_DAT_183413fc0 & 0x842223da) * 2);
  uVar10 = (uVar10 | _DAT_1834141d0) + (uVar10 & _DAT_1834141d0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183413fe0 =
       func_0x00018f907ec0((uVar10 | 0x84222325) + (ulonglong)((uint)uVar10 & 0x84222325));
  uVar10 = ((_DAT_183413fe0 ^ 0xff) * 0x47864081786c34b9 ^ 0xff) * -0x1476136ad0d5eeb;
  _DAT_183413f98 = _DAT_183413f98 ^ uVar10 ^ 0x823abed0cb65176b;
  _DAT_183413fe8 = (_DAT_183413fe8 * -0x308406bf810d6d6d ^ _DAT_183413f98) + uVar10;
  _DAT_183414218 = _DAT_183413fe8 ^ _DAT_183413f98;
  _DAT_183414028 = _DAT_1834141b8;
  _DAT_1834143f0 = 0;
  _DAT_183413f38 = func_0x00018f907ec0(_DAT_183414348 + 0xffdf0084260021ff ^ 0x70);
  _DAT_183414138 = _DAT_183414138 ^ _DAT_183413f38 ^ 0x6195b1a7be24156;
  _DAT_183414308 = (_DAT_183414308 * 0x11eb596bbbf2c95 ^ _DAT_183414138) + _DAT_183413f38;
  _DAT_183414038 = _DAT_183414308 ^ _DAT_183414138;
  _DAT_183413f40 = 0;
  uVar10 = (_DAT_183413f58 ^ 0x84222315) + _DAT_183413f38 + 0x84222315;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183413f58 ^ 0x84222315;
  uVar11 = ((_DAT_183413f38 + _DAT_183413f58) * 0x2000 | _DAT_183413f38 + _DAT_183413f58 >> 0x33) ^
           _DAT_183413f38;
  uVar10 = func_0x00018f907ec0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183413f58 ^
                               (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183413f38 + 0x84222315));
  _DAT_1834143f0 = (uVar10 & 0xfffff) << 0xf | uVar10 >> 0x31;
  _DAT_183413f20 = _DAT_183414260 ^ _DAT_1834143f0 ^ 0x30;
  _DAT_1834141b0 = (_DAT_1834141b0 ^ _DAT_1834143f0) + 0x30 ^ 0x13e60402067e8cff;
  _DAT_1834143f0 = (uVar10 * 0x4ca73ea3cd083557 ^ _DAT_1834141b0) + _DAT_1834143f0;
  _DAT_183413fb8 = _DAT_1834143f0 ^ _DAT_1834141b0;
  _DAT_1834141d8 = 0x30;
  uVar10 = (_DAT_1834140b0 ^ 0x84222330) + _DAT_1834143b8 + 0x84222330;
  uVar11 = ~_DAT_1834143b8 + (_DAT_1834140b0 - 1);
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1834140b0 ^ 0x84222330;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ ~_DAT_1834143b8;
  bVar1 = *(byte *)(unaff_RBP + 0xa8);
  _DAT_1834141a8 =
       func_0x00018f907ec0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1834140b0 - 1) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1834143b8 + 0x84222330));
  uVar10 = _DAT_1834141a8 ^ 0x15;
  _DAT_183414248 =
       ((((_DAT_18001a710 ^ 0x15) & 0xffffffff) * (ulonglong)uVar4 +
         (((_DAT_18001a710 ^ 0x15) & 0xffffffff) * (ulonglong)_DAT_1829f8e60 +
          (_DAT_18001a710 >> 0x20) * (ulonglong)uVar4 << 0x20) +
        ((ulonglong)_DAT_1829f8e40 * 0x15 << 0x20) + (ulonglong)uVar3 * 0x15 +
        ((ulonglong)_DAT_1829f8e20 * 0x15 << 0x20) + (ulonglong)uVar2 * 0x15) -
       (((ulonglong)uVar8 * 0x15 << 0x20) + (ulonglong)uVar7 * 0x15 +
       ((ulonglong)uVar6 * 0x15 << 0x20) + (ulonglong)uVar5 * 0x15)) + 0x856cebda970eb47e;
  _DAT_1834141e8 = _DAT_1834142a8 ^ uVar10 ^ _DAT_183414248;
  _DAT_183414388 = (_DAT_183414388 ^ uVar10) + _DAT_183414248 ^ 0x8ebc8658c269cf32;
  _DAT_183414220 = (_DAT_183414220 * -0x67ad297c6dbfb9cb ^ _DAT_183414388) + uVar10;
  _DAT_183414018 = _DAT_183414220 ^ _DAT_183414388;
  *(byte *)(unaff_RBP + -0x50 + _DAT_183414248) = bVar1 | 0x30;
  switch(uVar9 < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf8e3000 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8e3000(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  ulonglong uVar1;
  uint unaff_EDI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *(uint *)(unaff_RBP + 0xa8) = unaff_EDI;
  *(uint *)(unaff_RBP + 0x70) = unaff_EDI;
  *(char *)(unaff_RBP + 0xb0) = (char)unaff_EDI + (char)(unaff_EDI / 10) * -10;
  uVar2 = (_DAT_183414198 ^ _DAT_1829f8de0) + _DAT_1834143e8 + 0x842223f8;
  uVar3 = (_DAT_1834143e8 ^ _UNK_1829f8de8) + _DAT_183414198 + 0x6c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183414198 ^ _DAT_1829f8de0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1834143e8 ^ _UNK_1829f8de8;
  _DAT_183414448 =
       func_0x00018f907ec0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183414198 + 0x6c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1834143e8 + 0x842223f8));
  _DAT_183413f48 = (_DAT_183413f48 ^ _DAT_183414448) + 0xfd ^ 0xcab648c2f64aebe9;
  _DAT_183414180 = (_DAT_183414180 * -0x328bc3c0f3c5e783 ^ _DAT_183413f48) + _DAT_183414448;
  _DAT_1834143f0 = _DAT_183414180 ^ _DAT_183413f48;
  _DAT_183414138 = 0xfd;
  uVar2 = (~_DAT_183414080 + 0x1d) *
          ((_DAT_1834140b8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1834140b8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183414328) + (uVar2 & _DAT_183414328);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183413f00 = func_0x00018f907ec0((uVar2 | 0x84222339) + (ulonglong)((uint)uVar2 & 0x84222339))
  ;
  _DAT_183414060 = (_DAT_183414060 ^ _DAT_183413f00) - 0x1c ^ 0x57a0c8efdf96357b;
  _DAT_183414030 = (_DAT_183414030 * -0x59960803bad92481 ^ _DAT_183414060) + _DAT_183413f00;
  _DAT_1834143e0 = _DAT_183414030 ^ _DAT_183414060;
  _DAT_183414190 = 0xe4;
  _DAT_1834143c8 = func_0x00018f907ec0(_DAT_1834142d0 + 0xffe300838b001dffU ^ 0x16);
  uVar2 = _DAT_1834143a0 ^ 0x4c;
  _DAT_183414020 = _DAT_183413f68 ^ uVar2 ^ 0x130;
  _DAT_1834144a8 = (_DAT_1834144a8 ^ uVar2) + 0x130 ^ 0x99cf70fb72d2c552;
  _DAT_183413fe0 = (_DAT_183413fe0 * -0xfeb32af0c0bbcd ^ _DAT_1834144a8) + uVar2;
  _DAT_1834141e8 = _DAT_183413fe0 ^ _DAT_1834144a8;
  _DAT_183414258 = 0x30;
  uVar2 = ((_DAT_183414220 ^ 0x84222315) + (ulonglong)((uint)_DAT_183414220 & 0x84222315) * 2) *
          -_DAT_1834141f0;
  uVar2 = (uVar2 | _DAT_183414120) + (uVar2 & _DAT_183414120);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1834141a0 = func_0x00018f907ec0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = _DAT_1834141a0 & 0x7fffffffffffffff;
  _DAT_183414440 = _DAT_183414438 ^ uVar2 ^ 0x30;
  _DAT_1834144d0 = (_DAT_1834144d0 ^ uVar2) + 0x30 ^ 0x1f4565caf8990702;
  _DAT_1834144c8 = (_DAT_1834144c8 * 0x59622e8e1fef213b ^ _DAT_1834144d0) + uVar2;
  _DAT_183414108 = _DAT_1834144c8 ^ _DAT_1834144d0;
  _DAT_183414200 = 0x30;
  uVar2 = (~_DAT_183414318 + 0x31) *
          ((_DAT_183414260 ^ 0x84222315) + (ulonglong)((uint)_DAT_183414260 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_183414058) + (uVar2 & _DAT_183414058);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183414008 = func_0x00018f907ec0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar2 = _DAT_183414008 & 0x7ffffffffe000000;
  _DAT_1834144e0 = _DAT_1834144a8 ^ uVar2 ^ 0x60;
  _DAT_183414068 = (_DAT_183414068 ^ uVar2) + 0x60 ^ 0xb1f20fedc2330db1;
  _DAT_183414180 = (_DAT_183414180 * 0x6d63047df8ef5fa3 ^ _DAT_183414068) + uVar2;
  _DAT_183414018 = _DAT_183414180 ^ _DAT_183414068;
  _DAT_183414230 = 0x60;
  uVar2 = (_DAT_183414350 ^ _DAT_1803d59f0) + _DAT_183413f88 + 0x84222345;
  uVar3 = (_DAT_183413f88 ^ _UNK_1803d59f8) + _DAT_183414350 + 0xd0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183414350 ^ _DAT_1803d59f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183413f88 ^ _UNK_1803d59f8;
  _DAT_1834140b8 =
       func_0x00018f907ec0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183414350 + 0xd0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183413f88 + 0x84222345));
  uVar2 = (_DAT_1834140b8 ^ 0x4e00) << 4 | _DAT_1834140b8 >> 0x3c;
  _DAT_183413f08 = _DAT_1834140d8 ^ uVar2 ^ 0x130;
  _DAT_1834143d0 = (_DAT_1834143d0 ^ uVar2) + 0x130 ^ 0x3eaa8f16aac7602c;
  _DAT_183414430 = (_DAT_183414430 * 0x1edda4ae11d4420f ^ _DAT_1834143d0) + uVar2;
  _DAT_1834144f0 = _DAT_183414430 ^ _DAT_1834143d0;
  _DAT_183413f00 = 0x30;
  _DAT_183414140 = func_0x00018f907ec0(_DAT_183414400 + 0xffdf0084b7ffe1ffU ^ 0x26);
  uVar2 = _DAT_183414140 << 0xd | _DAT_183414140 >> 0x33;
  _DAT_183414038 = _DAT_1834143a8 ^ uVar2 ^ 0x15d;
  _DAT_183413ff8 = (_DAT_183413ff8 ^ uVar2) + 0x15d ^ 0x69f24afa02af7614;
  _DAT_183413fa0 = (_DAT_183413fa0 * -0x9ec4df3a759a3e5 ^ _DAT_183413ff8) + uVar2;
  _DAT_183414448 = _DAT_183413fa0 ^ _DAT_183413ff8;
  _DAT_1834144b8 = 0x5d;
  _DAT_183414220 = func_0x00018f907ec0(_DAT_183414358 ^ 0xffdd00847800219f);
  _DAT_183413f18 = (_DAT_183413f18 ^ _DAT_183414220 ^ 0x5e80) + 0x60 ^ 0x84fbb27439518051;
  _DAT_183414138 =
       (_DAT_183414138 * 0x66c7573c9cf5e117 ^ _DAT_183413f18) + (_DAT_183414220 ^ 0x5e80);
  _DAT_1834141f0 = _DAT_183414138 ^ _DAT_183413f18;
  _DAT_1834141a8 = 0x60;
  _DAT_183414198 = func_0x00018f907ec0(_DAT_183414308 + 0xffdd008448001dff ^ 0xa3);
  uVar2 = (_DAT_183414198 ^ 0x40) << 6 | _DAT_183414198 >> 0x3a;
  _DAT_183414160 = _DAT_183414078 ^ uVar2 ^ 0x15d;
  _DAT_1834143a0 = (_DAT_1834143a0 ^ uVar2) + 0x15d ^ 0xab48fba314ab596c;
  _DAT_183414470 = (_DAT_183414470 * 0x20f568f0819bbcc7 ^ _DAT_1834143a0) + uVar2;
  _DAT_1834143e8 = _DAT_183414470 ^ _DAT_1834143a0;
  _DAT_183414078 = 0x5d;
  uVar2 = (~_DAT_183413f48 + 0x5e) *
          ((_DAT_183414428 ^ 0x84222378) + (ulonglong)((uint)_DAT_183414428 & 0x84222378) * 2);
  uVar2 = (uVar2 | _DAT_1834140e8) + (uVar2 & _DAT_1834140e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1834141d0 = func_0x00018f907ec0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_183414108 = _DAT_183414108 ^ _DAT_1834141d0 ^ 0x3280c13bb951df50;
  _DAT_1834143c0 = (_DAT_1834143c0 * 0x2bcece6a27f2bedb ^ _DAT_183414108) + _DAT_1834141d0;
  _DAT_183413ff8 = _DAT_1834143c0 ^ _DAT_183414108;
  _DAT_183414278 = 0;
  _DAT_183414320 = _DAT_1834141d0;
  _DAT_183413fc8 = func_0x00018f907ec0(_DAT_183414220 + 0x20ff840d001dff ^ 0xb4);
  uVar2 = _DAT_183413fc8 >> 1 | _DAT_183413fc8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ _DAT_183413fc8) & 0x7fffffffffffffff;
  _DAT_183413f80 = _DAT_183414180 ^ uVar2 ^ 0x30;
  _DAT_183414308 = (_DAT_183414308 ^ uVar2) + 0x30 ^ 0x1d13c46f004b846;
  _DAT_1834143e8 = (_DAT_1834143e8 * -0x7d3b32f7d04484e5 ^ _DAT_183414308) + uVar2;
  _DAT_1834143a0 = _DAT_1834143e8 ^ _DAT_183414308;
  _DAT_183413f68 = 0x30;
  uVar2 = (~_DAT_183414350 + 0x100) *
          ((_DAT_183414420 ^ 0x842223d8) + (ulonglong)((uint)_DAT_183414420 & 0x842223d8) * 2);
  uVar2 = (uVar2 | _DAT_1834144a8) + (uVar2 & _DAT_1834144a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183414030 = func_0x00018f907ec0((uVar2 | 0x84222327) + (ulonglong)((uint)uVar2 & 0x84222327))
  ;
  uVar2 = _DAT_183414030 << 8 | _DAT_183414030 >> 0x38;
  _DAT_1834142f0 = (_DAT_1834142f0 ^ uVar2) + 2 ^ 0xb57a80490da0e4e7;
  _DAT_183414140 = (_DAT_183414140 * -0x79f70081167c039 ^ _DAT_1834142f0) + uVar2;
  _DAT_1834144f0 = _DAT_183414140 ^ _DAT_1834142f0;
  _DAT_183414050 = 2;
  uVar2 = (~_DAT_1834142a0 + 3) *
          ((_DAT_183414020 ^ 0x842223d8) + (ulonglong)((uint)_DAT_183414020 & 0x842223d8) * 2);
  uVar2 = (uVar2 | _DAT_183414208) + (uVar2 & _DAT_183414208);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1834140c8 = func_0x00018f907ec0((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  uVar2 = _DAT_183414498 & 0x7fffffffffffffff ^ 0xfd;
  _DAT_183414320 = _DAT_183414320 ^ uVar2 ^ 0xfc94138c441e9a41;
  _DAT_183414218 = (_DAT_183414218 * 0x71b8965d432fa09f ^ _DAT_183414320) + uVar2;
  _DAT_183414440 = _DAT_183414218 ^ _DAT_183414320;
  _DAT_183414468 = 0;
  uVar2 = ((_DAT_1834142e8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1834142e8 & 0x84222315) * 2) *
          -_DAT_183413fb0;
  uVar2 = (uVar2 | _DAT_1834141b0) + (uVar2 & _DAT_1834141b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183414108 = func_0x00018f907ec0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  _DAT_183414178 = _DAT_183414488 ^ _DAT_183414108 ^ 0x30;
  _DAT_183414300 = (_DAT_183414300 ^ _DAT_183414108) + 0x30 ^ 0x7b361430643d3c4e;
  _DAT_1834141b0 = (_DAT_1834141b0 * -0x6e7793721248e5bf ^ _DAT_183414300) + _DAT_183414108;
  _DAT_1834144b0 = _DAT_1834141b0 ^ _DAT_183414300;
  _DAT_183414308 = 0x30;
  _DAT_183414480 = func_0x00018f907ec0(_DAT_183414398 + 0xffdeff7c130021ff ^ 0x19);
  _DAT_183414208 = _DAT_183414118 ^ _DAT_183414480 ^ 0x30;
  _DAT_183413f60 = (_DAT_183413f60 ^ _DAT_183414480) + 0x30 ^ 0xc5d04e1ab29fdbbe;
  _DAT_183414280 = (_DAT_183414280 * -0xf071390900e3465 ^ _DAT_183413f60) + _DAT_183414480;
  _DAT_1834141c8 = _DAT_183414280 ^ _DAT_183413f60;
  _DAT_183413f40 = 0x30;
  uVar1 = (ulonglong)*(byte *)(unaff_RBP + 0xb0);
  uVar2 = (~_DAT_1834144c0 + 0x31) *
          ((uVar1 ^ 0x84222325 ^ _DAT_183414138) +
          (ulonglong)((uint)_DAT_183414138 & (uint)(uVar1 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_1834141c8) + (uVar2 & _DAT_1834141c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183414398 =
       func_0x00018f907ec0((uVar1 ^ 0x84222315 | uVar2) +
                           (ulonglong)((uint)(uVar1 ^ 0x84222315) & (uint)uVar2));
  uVar2 = _DAT_183414398 >> 1 | _DAT_183414398;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183414398;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  _DAT_1834144f8 = uVar1 | 0x30;
  _DAT_183414380 = (_DAT_183414380 ^ uVar3) + _DAT_1834144f8 ^ 0x8a9b1f234fa66544;
  _DAT_183414078 = (_DAT_183414078 * -0x7e07e3ff8a3c3e57 ^ _DAT_183414380) + uVar3 ^ _DAT_183414380;
  *(char *)(in_RAX + -1) = (char)_DAT_1834144f8;
  switch(*(uint *)(unaff_RBP + 0x70) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf8e303a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8e303a(ulonglong param_1)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong uVar1;
  longlong unaff_R15;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (in_RAX ^ _DAT_1829f8de0) + param_1 + 0x842223f8;
  uVar3 = (param_1 ^ _UNK_1829f8de8) + in_RAX + 0x6c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ in_RAX ^ _DAT_1829f8de0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_1 ^ _UNK_1829f8de8;
  _DAT_183414448 =
       func_0x00018f907ec0((uVar3 << 0x1d | uVar3 >> 0x23) - (in_RAX + 0x6c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (param_1 + 0x842223f8));
  _DAT_183413f48 = (_DAT_183413f48 ^ _DAT_183414448) + 0xfd ^ 0xcab648c2f64aebe9;
  _DAT_183414180 = (_DAT_183414180 * -0x328bc3c0f3c5e783 ^ _DAT_183413f48) + _DAT_183414448;
  _DAT_1834143f0 = _DAT_183414180 ^ _DAT_183413f48;
  _DAT_183414138 = 0xfd;
  uVar2 = (~_DAT_183414080 + 0x1d) *
          ((_DAT_1834140b8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1834140b8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183414328) + (uVar2 & _DAT_183414328);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183413f00 = func_0x00018f907ec0((uVar2 | 0x84222339) + (ulonglong)((uint)uVar2 & 0x84222339))
  ;
  _DAT_183414060 = (_DAT_183414060 ^ _DAT_183413f00) - 0x1c ^ 0x57a0c8efdf96357b;
  _DAT_183414030 = (_DAT_183414030 * -0x59960803bad92481 ^ _DAT_183414060) + _DAT_183413f00;
  _DAT_1834143e0 = _DAT_183414030 ^ _DAT_183414060;
  _DAT_183414190 = 0xe4;
  _DAT_1834143c8 = func_0x00018f907ec0(_DAT_1834142d0 + 0xffe300838b001dffU ^ 0x16);
  uVar2 = _DAT_1834143a0 ^ 0x4c;
  _DAT_183414020 = _DAT_183413f68 ^ uVar2 ^ 0x130;
  _DAT_1834144a8 = (_DAT_1834144a8 ^ uVar2) + 0x130 ^ 0x99cf70fb72d2c552;
  _DAT_183413fe0 = (_DAT_183413fe0 * -0xfeb32af0c0bbcd ^ _DAT_1834144a8) + uVar2;
  _DAT_1834141e8 = _DAT_183413fe0 ^ _DAT_1834144a8;
  _DAT_183414258 = 0x30;
  uVar2 = ((_DAT_183414220 ^ 0x84222315) + (ulonglong)((uint)_DAT_183414220 & 0x84222315) * 2) *
          -_DAT_1834141f0;
  uVar2 = (uVar2 | _DAT_183414120) + (uVar2 & _DAT_183414120);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1834141a0 = func_0x00018f907ec0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = _DAT_1834141a0 & 0x7fffffffffffffff;
  _DAT_183414440 = _DAT_183414438 ^ uVar2 ^ 0x30;
  _DAT_1834144d0 = (_DAT_1834144d0 ^ uVar2) + 0x30 ^ 0x1f4565caf8990702;
  _DAT_1834144c8 = (_DAT_1834144c8 * 0x59622e8e1fef213b ^ _DAT_1834144d0) + uVar2;
  _DAT_183414108 = _DAT_1834144c8 ^ _DAT_1834144d0;
  _DAT_183414200 = 0x30;
  uVar2 = (~_DAT_183414318 + 0x31) *
          ((_DAT_183414260 ^ 0x84222315) + (ulonglong)((uint)_DAT_183414260 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_183414058) + (uVar2 & _DAT_183414058);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183414008 = func_0x00018f907ec0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar2 = _DAT_183414008 & 0x7ffffffffe000000;
  _DAT_1834144e0 = _DAT_1834144a8 ^ uVar2 ^ 0x60;
  _DAT_183414068 = (_DAT_183414068 ^ uVar2) + 0x60 ^ 0xb1f20fedc2330db1;
  _DAT_183414180 = (_DAT_183414180 * 0x6d63047df8ef5fa3 ^ _DAT_183414068) + uVar2;
  _DAT_183414018 = _DAT_183414180 ^ _DAT_183414068;
  _DAT_183414230 = 0x60;
  uVar2 = (_DAT_183414350 ^ _DAT_1803d59f0) + _DAT_183413f88 + 0x84222345;
  uVar3 = (_DAT_183413f88 ^ _UNK_1803d59f8) + _DAT_183414350 + 0xd0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183414350 ^ _DAT_1803d59f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183413f88 ^ _UNK_1803d59f8;
  _DAT_1834140b8 =
       func_0x00018f907ec0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183414350 + 0xd0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183413f88 + 0x84222345));
  uVar2 = (_DAT_1834140b8 ^ 0x4e00) << 4 | _DAT_1834140b8 >> 0x3c;
  _DAT_183413f08 = _DAT_1834140d8 ^ uVar2 ^ 0x130;
  _DAT_1834143d0 = (_DAT_1834143d0 ^ uVar2) + 0x130 ^ 0x3eaa8f16aac7602c;
  _DAT_183414430 = (_DAT_183414430 * 0x1edda4ae11d4420f ^ _DAT_1834143d0) + uVar2;
  _DAT_1834144f0 = _DAT_183414430 ^ _DAT_1834143d0;
  _DAT_183413f00 = 0x30;
  _DAT_183414140 = func_0x00018f907ec0(_DAT_183414400 + 0xffdf0084b7ffe1ffU ^ 0x26);
  uVar2 = _DAT_183414140 << 0xd | _DAT_183414140 >> 0x33;
  _DAT_183414038 = _DAT_1834143a8 ^ uVar2 ^ 0x15d;
  _DAT_183413ff8 = (_DAT_183413ff8 ^ uVar2) + 0x15d ^ 0x69f24afa02af7614;
  _DAT_183413fa0 = (_DAT_183413fa0 * -0x9ec4df3a759a3e5 ^ _DAT_183413ff8) + uVar2;
  _DAT_183414448 = _DAT_183413fa0 ^ _DAT_183413ff8;
  _DAT_1834144b8 = 0x5d;
  _DAT_183414220 = func_0x00018f907ec0(_DAT_183414358 ^ 0xffdd00847800219f);
  _DAT_183413f18 = (_DAT_183413f18 ^ _DAT_183414220 ^ 0x5e80) + 0x60 ^ 0x84fbb27439518051;
  _DAT_183414138 =
       (_DAT_183414138 * 0x66c7573c9cf5e117 ^ _DAT_183413f18) + (_DAT_183414220 ^ 0x5e80);
  _DAT_1834141f0 = _DAT_183414138 ^ _DAT_183413f18;
  _DAT_1834141a8 = 0x60;
  _DAT_183414198 = func_0x00018f907ec0(_DAT_183414308 + 0xffdd008448001dff ^ 0xa3);
  uVar2 = (_DAT_183414198 ^ 0x40) << 6 | _DAT_183414198 >> 0x3a;
  _DAT_183414160 = _DAT_183414078 ^ uVar2 ^ 0x15d;
  _DAT_1834143a0 = (_DAT_1834143a0 ^ uVar2) + 0x15d ^ 0xab48fba314ab596c;
  _DAT_183414470 = (_DAT_183414470 * 0x20f568f0819bbcc7 ^ _DAT_1834143a0) + uVar2;
  _DAT_1834143e8 = _DAT_183414470 ^ _DAT_1834143a0;
  _DAT_183414078 = 0x5d;
  uVar2 = (~_DAT_183413f48 + 0x5e) *
          ((_DAT_183414428 ^ 0x84222378) + (ulonglong)((uint)_DAT_183414428 & 0x84222378) * 2);
  uVar2 = (uVar2 | _DAT_1834140e8) + (uVar2 & _DAT_1834140e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1834141d0 = func_0x00018f907ec0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_183414108 = _DAT_183414108 ^ _DAT_1834141d0 ^ 0x3280c13bb951df50;
  _DAT_1834143c0 = (_DAT_1834143c0 * 0x2bcece6a27f2bedb ^ _DAT_183414108) + _DAT_1834141d0;
  _DAT_183413ff8 = _DAT_1834143c0 ^ _DAT_183414108;
  _DAT_183414278 = 0;
  _DAT_183414320 = _DAT_1834141d0;
  _DAT_183413fc8 = func_0x00018f907ec0(_DAT_183414220 + 0x20ff840d001dff ^ 0xb4);
  uVar2 = _DAT_183413fc8 >> 1 | _DAT_183413fc8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ _DAT_183413fc8) & 0x7fffffffffffffff;
  _DAT_183413f80 = _DAT_183414180 ^ uVar2 ^ 0x30;
  _DAT_183414308 = (_DAT_183414308 ^ uVar2) + 0x30 ^ 0x1d13c46f004b846;
  _DAT_1834143e8 = (_DAT_1834143e8 * -0x7d3b32f7d04484e5 ^ _DAT_183414308) + uVar2;
  _DAT_1834143a0 = _DAT_1834143e8 ^ _DAT_183414308;
  _DAT_183413f68 = 0x30;
  uVar2 = (~_DAT_183414350 + 0x100) *
          ((_DAT_183414420 ^ 0x842223d8) + (ulonglong)((uint)_DAT_183414420 & 0x842223d8) * 2);
  uVar2 = (uVar2 | _DAT_1834144a8) + (uVar2 & _DAT_1834144a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183414030 = func_0x00018f907ec0((uVar2 | 0x84222327) + (ulonglong)((uint)uVar2 & 0x84222327))
  ;
  uVar2 = _DAT_183414030 << 8 | _DAT_183414030 >> 0x38;
  _DAT_1834142f0 = (_DAT_1834142f0 ^ uVar2) + 2 ^ 0xb57a80490da0e4e7;
  _DAT_183414140 = (_DAT_183414140 * -0x79f70081167c039 ^ _DAT_1834142f0) + uVar2;
  _DAT_1834144f0 = _DAT_183414140 ^ _DAT_1834142f0;
  _DAT_183414050 = 2;
  uVar2 = (~_DAT_1834142a0 + 3) *
          ((_DAT_183414020 ^ 0x842223d8) + (ulonglong)((uint)_DAT_183414020 & 0x842223d8) * 2);
  uVar2 = (uVar2 | _DAT_183414208) + (uVar2 & _DAT_183414208);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1834140c8 = func_0x00018f907ec0((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  uVar2 = _DAT_183414498 & 0x7fffffffffffffff ^ 0xfd;
  _DAT_183414320 = _DAT_183414320 ^ uVar2 ^ 0xfc94138c441e9a41;
  _DAT_183414218 = (_DAT_183414218 * 0x71b8965d432fa09f ^ _DAT_183414320) + uVar2;
  _DAT_183414440 = _DAT_183414218 ^ _DAT_183414320;
  _DAT_183414468 = 0;
  uVar2 = ((_DAT_1834142e8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1834142e8 & 0x84222315) * 2) *
          -_DAT_183413fb0;
  uVar2 = (uVar2 | _DAT_1834141b0) + (uVar2 & _DAT_1834141b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183414108 = func_0x00018f907ec0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  _DAT_183414178 = _DAT_183414488 ^ _DAT_183414108 ^ 0x30;
  _DAT_183414300 = (_DAT_183414300 ^ _DAT_183414108) + 0x30 ^ 0x7b361430643d3c4e;
  _DAT_1834141b0 = (_DAT_1834141b0 * -0x6e7793721248e5bf ^ _DAT_183414300) + _DAT_183414108;
  _DAT_1834144b0 = _DAT_1834141b0 ^ _DAT_183414300;
  _DAT_183414308 = 0x30;
  _DAT_183414480 = func_0x00018f907ec0(_DAT_183414398 + 0xffdeff7c130021ff ^ 0x19);
  _DAT_183414208 = _DAT_183414118 ^ _DAT_183414480 ^ 0x30;
  _DAT_183413f60 = (_DAT_183413f60 ^ _DAT_183414480) + 0x30 ^ 0xc5d04e1ab29fdbbe;
  _DAT_183414280 = (_DAT_183414280 * -0xf071390900e3465 ^ _DAT_183413f60) + _DAT_183414480;
  _DAT_1834141c8 = _DAT_183414280 ^ _DAT_183413f60;
  _DAT_183413f40 = 0x30;
  uVar1 = (ulonglong)*(byte *)(unaff_RBP + 0xb0);
  uVar2 = (~_DAT_1834144c0 + 0x31) *
          ((uVar1 ^ 0x84222325 ^ _DAT_183414138) +
          (ulonglong)((uint)_DAT_183414138 & (uint)(uVar1 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_1834141c8) + (uVar2 & _DAT_1834141c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183414398 =
       func_0x00018f907ec0((uVar1 ^ 0x84222315 | uVar2) +
                           (ulonglong)((uint)(uVar1 ^ 0x84222315) & (uint)uVar2));
  uVar2 = _DAT_183414398 >> 1 | _DAT_183414398;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183414398;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  _DAT_1834144f8 = uVar1 | 0x30;
  _DAT_183414380 = (_DAT_183414380 ^ uVar3) + _DAT_1834144f8 ^ 0x8a9b1f234fa66544;
  _DAT_183414078 = (_DAT_183414078 * -0x7e07e3ff8a3c3e57 ^ _DAT_183414380) + uVar3 ^ _DAT_183414380;
  *(char *)(unaff_R15 + -1) = (char)_DAT_1834144f8;
  switch(*(uint *)(unaff_RBP + 0x70) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf8e3f5c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f8e3fbb */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f8e3f5c(void)

{
  longlong unaff_RBP;
  longlong lVar1;
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  FUN_18414b520(unaff_RBP + -0x30);
  lVar1 = unaff_RBP + -0x30;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar1 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x30) + 0x70))
            (*(longlong **)(unaff_RBP + 0x30),*(undefined8 *)(unaff_RBP + 0x48),lVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xf8eb24a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8eb24a(ulonglong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2 + param_1 + param_4;
  uVar2 = (param_1 ^ 0x7d2abd9c) + in_RAX + 0x7d2abd9c;
  param_2 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ param_2;
  uVar1 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_1 ^ 0x7d2abd9c;
  _DAT_183413fa8 =
       func_0x00018f907ec0((uVar1 << 0x1d | uVar1 >> 0x23) - (in_RAX + 0x7d2abd9c) ^
                           (param_2 << 0x1d | param_2 >> 0x23) - (param_1 + param_4));
  uVar1 = _DAT_183413fa8 - (_DAT_183413fa8 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_RDI) + (uVar1 >> 2 & unaff_RDI);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183413fa8;
  _DAT_183413fd0 = (_DAT_183413fd0 ^ uVar1) + 0x75b48a3d ^ 0x7e84548729789e46;
  _DAT_1834141f8 = (_DAT_1834141f8 * 0x11b81683a84fa53f ^ _DAT_183413fd0) + uVar1;
  _DAT_183414038 = _DAT_1834141f8 ^ _DAT_183413fd0;
  _DAT_183414398 = 0x75b48a3d;
  _DAT_183414058 = func_0x00018f907ec0(_DAT_183413f08 ^ 0xffcc004c2bffb946);
  uVar1 = _DAT_183414058 ^ 0x8e;
  _DAT_183414220 = _DAT_183414008 ^ uVar1 ^ 0x48e8f06d;
  _DAT_183413f18 = (_DAT_183413f18 ^ uVar1) + 0x48e8f06d ^ 0x4d4b8cc77c50f0f7;
  _DAT_183414268 = (_DAT_183414268 * 0x3af84039a4201e9d ^ _DAT_183413f18) + uVar1;
  _DAT_183414348 = _DAT_183414268 ^ _DAT_183413f18;
  _DAT_183414470 = 0x48e8f06d;
  uVar1 = (~_DAT_183414338 + 0xb7171073) *
          ((_DAT_183414330 ^ 0xcccad348) + (ulonglong)((uint)_DAT_183414330 & 0xcccad348) * 2);
  uVar1 = (uVar1 | _DAT_183414040) + (uVar1 & _DAT_183414040);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183414160 = func_0x00018f907ec0((uVar1 | 0x7bddc33a) + (ulonglong)((uint)uVar1 & 0x7bddc33a))
  ;
  uVar1 = _DAT_183414160 << 0x1d | _DAT_183414160 >> 0x23;
  _DAT_183413f40 = _DAT_183414418 ^ uVar1 ^ 0x1000000df;
  _DAT_183414418 = (_DAT_183414418 ^ uVar1) + 0x1000000df ^ 0xd7cc144df507f29f;
  _DAT_183413f68 = (_DAT_183413f68 * 0x4eadbf4e0bd0b37d ^ _DAT_183414418) + uVar1;
  _DAT_1834143c0 = _DAT_183413f68 ^ _DAT_183414418;
  _DAT_183413fd0 = 0xdf;
  uVar1 = (~_DAT_1834141a0 + 0x8948cacb) *
          ((_DAT_183414310 ^ 0x84222325) + (ulonglong)((uint)_DAT_183414310 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_183413f60) + (uVar1 & _DAT_183413f60);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183414078 = func_0x00018f907ec0((uVar1 | 0xd6ae9ef) + (ulonglong)((uint)uVar1 & 0xd6ae9ef));
  _DAT_183414090 = (_DAT_183414090 ^ _DAT_183414078) - 0x8948caca ^ 0xe0b708c78a1c54ca;
  _DAT_183413f80 = (_DAT_183413f80 * -0x49c1ca601ea51d3d ^ _DAT_183414090) + _DAT_183414078;
  _DAT_1834143a0 = _DAT_183413f80 ^ _DAT_183414090;
  _DAT_183414400 = 0x76b73536;
  uVar1 = (_DAT_183414248 ^ _DAT_1829f8660) + _DAT_1834144b0 + 0x84222325;
  uVar2 = (_DAT_1834144b0 ^ _UNK_1829f8668) + _DAT_183414248 + 0x2d99539e;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183414248 ^ _DAT_1829f8660;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1834144b0 ^ _UNK_1829f8668;
  _DAT_1834142c0 =
       func_0x00018f907ec0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183414248 + 0x2d99539e) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1834144b0 + 0x84222325));
  uVar1 = (_DAT_1834142c0 & 0x3fffffff) << 0x21 | _DAT_1834142c0 >> 0x1f;
  _DAT_1834142a0 = (_DAT_1834142a0 ^ uVar1) - 0x2d99539e ^ 0x5782f7a06c1c19b5;
  _DAT_183414120 = (_DAT_183414120 * -0x2581518ecc9b59cf ^ _DAT_1834142a0) + uVar1;
  _DAT_183414158 = _DAT_183414120 ^ _DAT_1834142a0;
  _DAT_1834143c0 = 0xd266ac62;
  _DAT_183414450 = func_0x00018f907ec0(_DAT_183414200 + 0xfff58e3ffaaffU ^ 0x84);
  _DAT_183413f98 = _DAT_183413f38 ^ _DAT_183414450 ^ 0x2d99547d;
  _DAT_183414350 = (_DAT_183414350 ^ _DAT_183414450) + 0x2d99547d ^ 0x1cd3bd9613b53da9;
  _DAT_183414010 = (_DAT_183414010 * 0x2ceaee99457952b5 ^ _DAT_183414350) + _DAT_183414450;
  _DAT_1834142f0 = _DAT_183414010 ^ _DAT_183414350;
  _DAT_183414240 = 0x2d99547d;
  func_0x00018f907ec0(_DAT_1834141a0 ^ 0xff3b000b09ffdaaa);
  _DAT_183413f00 = _DAT_183414100 ^ _DAT_1834140a0 ^ 0x1000000df;
  _DAT_183414078 = (_DAT_183414078 ^ _DAT_1834140a0) + 0x1000000df ^ 0xa7234952c9709c0d;
  _DAT_183414310 = (_DAT_183414310 * -0x7368143d62862dcb ^ _DAT_183414078) + _DAT_1834140a0;
  _DAT_183414240 = _DAT_183414310 ^ _DAT_183414078;
  _DAT_183413fc8 = 0xdf;
  uVar1 = (~_DAT_183414480 + 0x75b48a3e) *
          ((_DAT_183414390 ^ 0x59dded4a) + (ulonglong)((uint)_DAT_183414390 & 0x59dded4a) * 2);
  uVar1 = (uVar1 | _DAT_183414328) + (uVar1 & _DAT_183414328);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1834141e8 = func_0x00018f907ec0((uVar1 | 0x2c696777) + (ulonglong)((uint)uVar1 & 0x2c696777))
  ;
  uVar1 = _DAT_1834141e8 & 0x7fffffffffffffff;
  _DAT_1834143b8 = _DAT_183414318 ^ uVar1 ^ 0x153b458ac;
  _DAT_1834140a0 = (_DAT_1834140a0 ^ uVar1) + 0x153b458ac ^ 0x4f7c45296dcb8fd2;
  _DAT_183414008 = (_DAT_183414008 * 0x47d53b8a13f2d293 ^ _DAT_1834140a0) + uVar1;
  _DAT_183414198 = _DAT_183414008 ^ _DAT_1834140a0;
  _DAT_183414298 = 0x53b458ac;
  uVar1 = (~_DAT_183414460 + 0x75b48a3e) *
          ((_DAT_183413fc8 ^ 0x59dded4a) + (ulonglong)((uint)_DAT_183413fc8 & 0x59dded4a) * 2);
  uVar1 = (uVar1 | _DAT_1834140e8) + (uVar1 & _DAT_1834140e8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183414388 = func_0x00018f907ec0((uVar1 | 0x2c696777) + (ulonglong)((uint)uVar1 & 0x2c696777))
  ;
  _DAT_183413f88 = (_DAT_183413f88 ^ _DAT_183414388 ^ 0xddffce6f) + 0x55b48a2d ^ 0xe955d55e040b4b90;
  _DAT_1834144a8 =
       (_DAT_1834144a8 * -0x65270ad1e7a638f9 ^ _DAT_183413f88) + (_DAT_183414388 ^ 0xddffce6f);
  _DAT_183414288 = _DAT_1834144a8 ^ _DAT_183413f88;
  _DAT_183413fe0 = 0x55b48a2d;
  uVar1 = (_DAT_183414358 ^ _DAT_1829f8670) + _DAT_183413f88 + 0x2c696777;
  uVar2 = (_DAT_183413f88 ^ _UNK_1829f8678) + _DAT_183414358 + 0xab69145a;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183414358 ^ _DAT_1829f8670;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183413f88 ^ _UNK_1829f8678;
  _DAT_183414428 =
       func_0x00018f907ec0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183414358 + 0xab69145a) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183413f88 + 0x2c696777));
  uVar1 = _DAT_183414428 ^ 0xab69145a;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_RDI) + (uVar2 >> 2 & unaff_RDI);
  uVar1 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1) *
          -0xb073cbdac85425;
  _DAT_1834140b8 = _DAT_183414340 ^ uVar1 ^ 0x153b458ac;
  _DAT_183414400 = (_DAT_183414400 ^ uVar1) + 0x153b458ac ^ 0x9e4ba59a3b9d1584;
  _DAT_183414068 = (_DAT_183414068 * 0x61322d8f56fa04ff ^ _DAT_183414400) + uVar1;
  _DAT_183413f70 = _DAT_183414068 ^ _DAT_183414400;
  _DAT_183413f58 = 0x53b458ac;
  _DAT_183414240 = func_0x00018f907ec0(0x1cff7b39b44597);
  uVar1 = _DAT_183414240 ^ 0xdf;
  _DAT_1834144c8 = _DAT_183414378 ^ uVar1 ^ 0xdf;
  _DAT_183414448 = (_DAT_183414448 ^ uVar1) + 0xdf ^ 0xb7b8af39b8106e68;
  _DAT_1834144b0 = (_DAT_1834144b0 * -0x4bed61ca66302cfd ^ _DAT_183414448) + uVar1;
  _DAT_1834141d8 = _DAT_1834144b0 ^ _DAT_183414448;
  _DAT_183413fb0 = _DAT_183413f48 ^ 0xdf;
  _DAT_183413f00 = 0xdf;
  _DAT_183414430 = func_0x00018f907ec0(_DAT_183414420 + -0x4bffc936003301);
  _DAT_1834144c0 = _DAT_1834144c0 ^ _DAT_183413fa0 ^ 0xb3755f91e048411c;
  _DAT_183414108 = (_DAT_183414108 * 0x466e4ddfd9387dc5 ^ _DAT_1834144c0) + _DAT_183413fa0;
  _DAT_183414480 = _DAT_183414108 ^ _DAT_1834144c0;
  _DAT_183414378 = 0;
  uVar1 = ((_DAT_183413ff0 ^ 0x842223fa) + (ulonglong)((uint)_DAT_183413ff0 & 0x842223fa) * 2) *
          -_DAT_1834144d0;
  uVar1 = (uVar1 | _DAT_183414008) + (uVar1 & _DAT_183414008);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183413fb8 = func_0x00018f907ec0((uVar1 | 0x842223fa) + (ulonglong)((uint)uVar1 & 0x842223fa))
  ;
  uVar1 = _DAT_183413fb8 << 0x3d | _DAT_183413fb8 >> 3;
  _DAT_183414398 = _DAT_1834143d0 ^ uVar1 ^ 0xdf;
  _DAT_183413f28 = (_DAT_183413f28 ^ uVar1) + 0xdf ^ 0x51c5930828fae3dc;
  _DAT_183413fe8 = (_DAT_183413fe8 * -0x5106da9efc6d4fcd ^ _DAT_183413f28) + uVar1;
  _DAT_183413fd0 = _DAT_183413fe8 ^ _DAT_183413f28;
  _DAT_1834142b0 = 0xdf;
  _DAT_1834142b0 = func_0x00018f907ec0(_DAT_183414150 ^ 0x23007c1b00216e);
  _DAT_1834144f8 = _DAT_1834144f8 ^ _DAT_183414360 ^ 0x90a56a593fd58154;
  _DAT_183414140 = (_DAT_183414140 * -0x109dece5900ae683 ^ _DAT_1834144f8) + _DAT_183414360;
  _DAT_183414340 = _DAT_183414140 ^ _DAT_1834144f8;
  _DAT_183414380 = 0;
  uVar1 = (_DAT_1834141d0 ^ 0x842223fa) + _DAT_1834141c0 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1834141d0 ^ 0x842223fa;
  uVar2 = ((_DAT_1834141c0 + _DAT_1834141d0) * 0x2000 | _DAT_1834141c0 + _DAT_1834141d0 >> 0x33) ^
          _DAT_1834141c0;
  _DAT_183414088 =
       func_0x00018f907ec0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1834141d0 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1834141c0 + 0x842223fa));
  uVar1 = _DAT_183414088 ^ 0xdf;
  _DAT_1834142c0 = _DAT_183414268 ^ uVar1 ^ 0xdf;
  _DAT_183414010 = (_DAT_183414010 ^ uVar1) + 0xdf ^ 0x70207b18c727369;
  _DAT_183414298 = (_DAT_183414298 * -0x144bff61d4c05fb ^ _DAT_183414010) + uVar1;
  _DAT_183414300 = _DAT_183414298 ^ _DAT_183414010;
  _DAT_183413f90 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x70)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf8ec046 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8ec046(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x90) = 2;
  switch(*(int *)(unaff_RBP + 0xb0) < *(int *)(unaff_RBP + 0x1c)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf8f0f10 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f8f0f10(void)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  longlong *unaff_R13;
  ulonglong unaff_R14;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_XMM12_Da;
  
  uVar2 = *(undefined8 *)(unaff_RBP + 0x50);
  *(undefined8 *)(unaff_RBP + 0x80) = uVar2;
  uVar1 = *(uint *)(unaff_RBP + 0xb0);
  uVar4 = uVar1 ^ unaff_R14;
  uVar5 = (~_DAT_183413fb0 + 2) *
          ((_DAT_183414478 ^ uVar4) + (ulonglong)((uint)_DAT_183414478 & (uint)uVar4) * 2);
  uVar5 = (uVar5 | _DAT_183414200) + (uVar5 & _DAT_183414200);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1834141e0 =
       func_0x00018f907ec0((uVar4 ^ 1 | uVar5) + (ulonglong)((uint)(uVar4 ^ 1) & (uint)uVar5));
  uVar9 = uVar1 & unaff_XMM12_Da;
  uVar7 = uVar1 | unaff_XMM12_Da;
  uVar10 = uVar1 ^ unaff_XMM12_Da;
  lVar8 = ((ulonglong)uVar1 * (ulonglong)_DAT_1829f8710 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_1829f8700;
  lVar6 = ((ulonglong)uVar10 * (ulonglong)_DAT_1829f8790 << 0x20) +
          (ulonglong)uVar10 * (ulonglong)_DAT_1829f8780 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_1829f8770 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_1829f8760 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_1829f8750 << 0x20 |
          (ulonglong)uVar9 * (ulonglong)_DAT_1829f8740) +
          ((ulonglong)uVar1 * (ulonglong)_DAT_1829f8730 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_1829f8720 + lVar8;
  uVar4 = ((((ulonglong)uVar10 * (ulonglong)_DAT_1829f86f0 << 0x20) +
            (ulonglong)uVar10 * (ulonglong)_DAT_1829f86e0 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_1829f86d0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_1829f86c0 +
            ((ulonglong)uVar9 * (ulonglong)_DAT_1829f86b0 << 0x20 |
            (ulonglong)uVar9 * (ulonglong)_DAT_1829f86a0) +
            ((ulonglong)uVar1 * (ulonglong)_DAT_1829f8690 << 0x20) +
            (ulonglong)uVar1 * (ulonglong)_DAT_1829f8680 + lVar8) - lVar6) + 0x7d4a3182c343a8a6;
  _DAT_1834142d8 =
       (_DAT_1834140f0 ^ _DAT_1834141e0 ^ uVar4 ^ _DAT_1834141e0) + uVar4 ^ 0x3c696c3b519969c1;
  _DAT_183414438 = (_DAT_183414438 * 0x3b14f51ba43c1551 ^ _DAT_1834142d8) + _DAT_1834141e0;
  _DAT_183414430 = _DAT_183414438 ^ _DAT_1834142d8;
  _DAT_183413f10 = uVar4 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar4;
  iVar3 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))(lVar6,uVar2);
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar3 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf8f3df1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f8f3df1(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x88) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf8f3e48 -----

undefined8 thunk_FUN_18f8dfb50(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xf8f414e -----

void FUN_18f8f414e(void)

{
  return;
}


// ----- block @ rva 0xf90a27b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f90a27b(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf90a41f -----

void FUN_18f90a41f(void)

{
  return;
}


// ----- block @ rva 0xf90b169 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f90b169(void)

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


// ----- block @ rva 0xf90b1be -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f90b1be(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack000000000000007b;
  
  uStack000000000000007b = in_stack_00000058;
  (**(code **)(in_stack_00000030 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf90b875 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f90b875(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf90b9dd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f90b9dd(void)

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


// ----- block @ rva 0xf90bfa1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f90bfa1(void)

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


// ----- block @ rva 0xf90c0cc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f90c0cc(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined4 uStack0000000000000092;
  undefined2 uStack0000000000000096;
  undefined4 in_stack_000000a8;
  
  (**(code **)(in_stack_00000030 + JNI->SetObjectArrayElement /*0x570*/))();
  in_stack_000000a8 = 0xe4daa5d;
  rdtsc();
  uStack0000000000000092 = 0x450044;
  uStack0000000000000096 = 0x53;
  (**(code **)(in_stack_00000030 + JNI->NewString /*0x518*/))(in_stack_00000030,&stack0x00000092,3);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xbc9,0x2f);
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


// ----- block @ rva 0xf90e1a6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f90e1a6(void)

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


// ----- block @ rva 0xf90eb80 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f90eb80(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xf910b7e -----

undefined8 thunk_FUN_18f90b43e(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xf913aae -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f913aae(void)

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


// ----- block @ rva 0xf913b02 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f913b02(void)

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


// ----- block @ rva 0xf9142a0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f9142a0(void)

{
  FUN_190dd72e0();
  (*_DAT_1829ff618)();
  return;
}


// ----- block @ rva 0xf9142c8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f9142c8(void)

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


// ----- block @ rva 0xf914410 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f914410(void)

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


// ----- block @ rva 0xf914460 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f914460(void)

{
  FUN_190ddce00();
  (*_DAT_1829ffa58)();
  return;
}


// ----- block @ rva 0xf914656 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f914656(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1829ff7c8)();
  return;
}


// ----- block @ rva 0xf9146f8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f9146f8(void)

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


// ----- block @ rva 0xf914736 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f914736(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1829ff888)();
  return;
}


// ----- block @ rva 0xf91485a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f91485a(void)

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


// ----- block @ rva 0xf914941 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f914941(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1829ffb58)();
  return;
}


// ----- block @ rva 0xf914975 -----

void FUN_18f914975(void)

{
  return;
}


// ----- block @ rva 0xf914984 -----

void FUN_18f914984(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xf914afc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f914afc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1829ffff8)();
  return;
}


// ----- block @ rva 0xf915141 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f915141(void)

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


// ----- block @ rva 0xf915418 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f915418(void)

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


// ----- block @ rva 0xf915e06 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f915e06(void)

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


// ----- block @ rva 0xf9165fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f9165fc(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1829ffe98)();
  return;
}


// ----- block @ rva 0xf9167bf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f9167bf(void)

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


// ----- block @ rva 0xf9168ec -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f9168ec(void)

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


// ----- block @ rva 0xf916a96 -----

void FUN_18f916a96(void)

{
  return;
}


// ----- block @ rva 0xf916df4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f916df4(void)

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


// ----- block @ rva 0xf9175d4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f9175d4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1829ffbe8)();
  return;
}


// ----- block @ rva 0xf917603 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f917603(void)

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


// ----- block @ rva 0xf91763a -----

void FUN_18f91763a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xf917843 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f917899 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f917843(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xf917977 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f917977(void)

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


// ----- block @ rva 0xf917cc7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f917ce5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f917cc7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xf917d04 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f917d1f */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f917d04(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xf91a480 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f91a4d1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f91a480(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xf91a5b1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f91a602 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f91a5b1(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xf91a857 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018f91a8e6 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18f91a857(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  in_stack_00000060 = (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  uVar1 = in_stack_00000058;
  in_stack_00000068 = in_stack_00000058;
  in_stack_00000058 = in_stack_00000060;
  FUN_190ddfc90(uVar1,&stack0x00000030,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xc5a,0x38);
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xf91aa58 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f91aa58(void)

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


// ----- block @ rva 0xf92aa3a -----

void FUN_18f92aa3a(void)

{
  return;
}

