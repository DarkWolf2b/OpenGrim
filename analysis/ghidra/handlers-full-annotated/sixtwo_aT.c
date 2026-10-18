// ===== Lsixtwo/aT; _292906081032bf46121a3a79a384cbfd ()V (handler @ image 18f917780, runtime 6ffff7527780) =====

void FUN_18f917780(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5a04,0x113);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x5a04,0x113);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f914af9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1829ffbc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



