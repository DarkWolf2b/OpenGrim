// ===== Lsixtwo/qn; _0a00388d13a333bb5f6e9ff1f3c751b0 ()V (handler @ image 1854b4cf0, runtime 6fffed0c4cf0) =====

void FUN_1854b4cf0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854b4dcc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804f3290 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXA ([B)Ljava/lang/String; (handler @ image 1854803f0, runtime 6fffed0903f0) =====

void FUN_1854803f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000185480493 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804ead50 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qn; cXB (IJ)Ljava/lang/String; (handler @ image 1854a9c20, runtime 6fffed0b9c20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854a9c20(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (uRam00000001830d26f8 ^ _UNK_1804f1bf0) + uRam00000001830d2a58 + 0x8c67d488eb3b1581;
  uVar6 = (uRam00000001830d2a58 ^ _UNK_1804f1bf8) + uRam00000001830d26f8 + 0x396b9cde3905f88;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d26f8 ^ _UNK_1804f1bf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2a58 ^ _UNK_1804f1bf8;
  uRam00000001830d2690 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830d26f8 + 0x396b9cde3905f88) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001830d2a58 + 0x8c67d488eb3b1581));
  uVar5 = uRam00000001830d2690 << 0x38 | uRam00000001830d2690 >> 8;
  uRam00000001830d27d8 = (uRam00000001830d27d8 ^ uVar5) + 0x8ff16d458c89692c ^ 0x51ce73706bf7e61c;
  uRam00000001830d2570 = (uRam00000001830d2570 * 0x29e9be4249a76e9f ^ uRam00000001830d27d8) + uVar5;
  uRam00000001830d29c8 = uRam00000001830d2570 ^ uRam00000001830d27d8;
  uRam00000001830d2660 = 0x8ff16d458c89692c;
  uVar5 = (~uRam00000001830d2a18 + 0xc29b18c02e6702ed) *
          ((uRam00000001830d2be0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001830d2be0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001830d2bd0) + (uVar5 & uRam00000001830d2bd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2a90 =
       func_0x0001854b12b0((uVar5 | 0xc29b18c0aa4521c9) + (uVar5 & 0xc29b18c0aa4521c9));
  uVar5 = uRam00000001830d2a90 >> 1 | uRam00000001830d2a90;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001830d2a90;
  uRam00000001830d26c0 = (uRam00000001830d26c0 ^ uVar5) + 0x3d64e73fd198fd14 ^ 0x71169544f9b2233a;
  uRam00000001830d2c48 = (uRam00000001830d2c48 * -0x758f481167e38fb ^ uRam00000001830d26c0) + uVar5;
  uRam00000001830d2bd0 = uRam00000001830d2c48 ^ uRam00000001830d26c0;
  uRam00000001830d2a78 = 0x3d64e73fd198fd14;
  uVar5 = (uRam00000001830d26d0 ^ _UNK_1804f1c00) + uRam00000001830d2a38 + 0x84225cda;
  uVar6 = (uRam00000001830d2a38 ^ _UNK_1804f1c08) + uRam00000001830d26d0 + 0xc29b18c02e6702ec;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d26d0 ^ _UNK_1804f1c00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2a38 ^ _UNK_1804f1c08;
  uRam00000001830d2970 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830d26d0 + 0xc29b18c02e6702ec) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2a38 + 0x84225cda));
  uRam00000001830d27f8 = uRam00000001830d2898 ^ uRam00000001830d2970 ^ 0xc29b18c02e6782eb;
  uRam00000001830d26e8 =
       (uRam00000001830d26e8 ^ uRam00000001830d2970) + 0xc29b18c02e6782eb ^ 0x40c8ebb6eb65b1c5;
  uRam00000001830d2ab8 =
       (uRam00000001830d2ab8 * -0x61f6c102164ef489 ^ uRam00000001830d26e8) + uRam00000001830d2970;
  uRam00000001830d2b80 = uRam00000001830d2ab8 ^ uRam00000001830d26e8;
  uRam00000001830d2560 = 0xc29b18c02e6782eb;
  uVar5 = (uRam00000001830d2978 ^ _UNK_1804f1c10) + uRam00000001830d27d8 + 0xc29b18c0aa45a1ce;
  uVar6 = (uRam00000001830d27d8 ^ _UNK_1804f1c18) + uRam00000001830d2978 + 0x3d64e73fd198fd14;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2978 ^ _UNK_1804f1c10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d27d8 ^ _UNK_1804f1c18;
  uRam00000001830d2548 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830d2978 + 0x3d64e73fd198fd14) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001830d27d8 + 0xc29b18c0aa45a1ce));
  uVar5 = (uRam00000001830d2548 ^ 0x8f9310c8300795c) * 0x1603d4ec9d51f5a7 & 0x7fffffffffffffff;
  uRam00000001830d2678 = uRam00000001830d25a8 ^ uVar5 ^ 0x7fff;
  uRam00000001830d2928 = (uRam00000001830d2928 ^ uVar5) + 0x7fff ^ 0x9dbef26c545791c7;
  uRam00000001830d2718 = (uRam00000001830d2718 * 0x709e6acee9122fc5 ^ uRam00000001830d2928) + uVar5;
  uRam00000001830d2900 = uRam00000001830d2718 ^ uRam00000001830d2928;
  uRam00000001830d2a38 = 0x7fff;
  uRam00000001830d2550 = func_0x0001854b12b0(uRam00000001830d27a0 ^ 0x764abe134ae02374);
  uVar5 = (ulonglong)(~(uint)uRam00000001830d2b68 & 0x7fff);
  uRam00000001830d2ca8 = uRam00000001830d2ad8 ^ uVar5 ^ 0x9842e0feb8ff8aff;
  uRam00000001830d2b00 = (uRam00000001830d2b00 ^ uVar5) + 0x9842e0feb8ff8aff ^ 0x9ab955bd9da3fc9d;
  uRam00000001830d26a8 = (uRam00000001830d26a8 * 0xb0a92fefa23db71 ^ uRam00000001830d2b00) + uVar5;
  uRam00000001830d2878 = uRam00000001830d26a8 ^ uRam00000001830d2b00;
  uRam00000001830d2920 = 0x9842e0feb8ff8aff;
  uRam00000001830d28b8 = func_0x0001854b12b0(uRam00000001830d2b78 ^ 0x1b3c6e863579c576);
  uVar5 = uRam00000001830d28b8 >> 1 | uRam00000001830d28b8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = uRam00000001830d28b8 ^ 0x9842e0feb8ff8aff ^
          0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uRam00000001830d2680 = uRam00000001830d2a00 ^ uVar5 ^ 0x7fff;
  uRam00000001830d26a0 = (uRam00000001830d26a0 ^ uVar5) + 0x7fff ^ 0xe0faa950470e2637;
  uRam00000001830d2518 = (uRam00000001830d2518 * 0x289dffd35dda3201 ^ uRam00000001830d26a0) + uVar5;
  uRam00000001830d2cf0 = uRam00000001830d2518 ^ uRam00000001830d26a0;
  uRam00000001830d2548 = 0x7fff;
  uVar5 = (~uRam00000001830d2770 + 0xf7b60129e95ee111) *
          ((uRam00000001830d28d0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001830d28d0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001830d2b10) + (uVar5 & uRam00000001830d2b10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2b80 =
       func_0x0001854b12b0((uVar5 | 0xf7b601296d7cc235) + (uVar5 & 0xf7b601296d7cc235));
  uRam00000001830d2bb8 =
       (uRam00000001830d2bb8 ^ uRam00000001830d2b80 ^ 0xf7b60129e95ee110) + 0x849fed616a11ef0 ^
       0x4b9af7d922c81c36;
  uRam00000001830d2910 =
       (uRam00000001830d2910 * 0x7857984e69b647d7 ^ uRam00000001830d2bb8) +
       (uRam00000001830d2b80 ^ 0xf7b60129e95ee110);
  uRam00000001830d2ce0 = uRam00000001830d2910 ^ uRam00000001830d2bb8;
  uRam00000001830d2cf8 = 0x849fed616a11ef0;
  uVar5 = (uRam00000001830d2558 ^ _UNK_1804f1c20) + uRam00000001830d2ca0 + 0x84225cda;
  uVar6 = (uRam00000001830d2ca0 ^ _UNK_1804f1c28) + uRam00000001830d2558 + 0xf7b60129e95ee110;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2558 ^ _UNK_1804f1c20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2ca0 ^ _UNK_1804f1c28;
  uRam00000001830d2998 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830d2558 + 0xf7b60129e95ee110) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2ca0 + 0x84225cda));
  uRam00000001830d2610 = uRam00000001830d28d0 ^ uRam00000001830d2998 ^ 0xf7b60129e95f610f;
  uRam00000001830d2938 =
       (uRam00000001830d2938 ^ uRam00000001830d2998) + 0xf7b60129e95f610f ^ 0xd0c5ebfe349ca8e;
  uRam00000001830d2bd0 =
       (uRam00000001830d2bd0 * -0x2e60ac61ff718a5b ^ uRam00000001830d2938) + uRam00000001830d2998;
  uRam00000001830d2548 = uRam00000001830d2bd0 ^ uRam00000001830d2938;
  uRam00000001830d2668 = -0x849fed616a09ef1;
  uRam00000001830d2960 = func_0x0001854b12b0(lRam00000001830d29e0 + 0xa39ae9c19132bc4fU ^ 7);
  uVar5 = uRam00000001830d2960 & 0xfffffffffffff;
  uRam00000001830d2b90 = uRam00000001830d26c0 ^ uVar5 ^ 0x6fd92c2bd8715127;
  uRam00000001830d2b18 = (uRam00000001830d2b18 ^ uVar5) + 0x6fd92c2bd8715127 ^ 0x4d200fc41d14f64d;
  uRam00000001830d29a8 = (uRam00000001830d29a8 * 0x1c0bff54a27410f1 ^ uRam00000001830d2b18) + uVar5;
  uRam00000001830d2808 = uRam00000001830d29a8 ^ uRam00000001830d2b18;
  lRam00000001830d29e0 = 0x6fd92c2bd8715127;
  uRam00000001830d2b88 = func_0x0001854b12b0(uRam00000001830d2a78 ^ 0x6092f5bd2e32b304);
  uRam00000001830d2750 =
       (uRam00000001830d2750 ^ uRam00000001830d2b88 ^ 0xdff7ffe7cfefefff) + 0x5016d3a3c76e8ed7 ^
       0x3c8934d11b2468a4;
  uRam00000001830d29a8 =
       (uRam00000001830d29a8 * -0x2621bd9096720661 ^ uRam00000001830d2750) +
       (uRam00000001830d2b88 ^ 0xdff7ffe7cfefefff);
  uRam00000001830d27b8 = uRam00000001830d29a8 ^ uRam00000001830d2750;
  uRam00000001830d25d0 = 0x5016d3a3c76e8ed7;
  uVar5 = (uRam00000001830d2be0 ^ _UNK_1804f1c30) + uRam00000001830d25f0 + 0xdfe7bee6cfc5c4de;
  uVar6 = (uRam00000001830d25f0 ^ _UNK_1804f1c38) + uRam00000001830d2be0 + 0x8ff16d458c89692c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2be0 ^ _UNK_1804f1c30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d25f0 ^ _UNK_1804f1c38;
  uRam00000001830d2720 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830d2be0 + 0x8ff16d458c89692c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001830d25f0 + 0xdfe7bee6cfc5c4de));
  uVar5 = uRam00000001830d2720 >> 1 | uRam00000001830d2720;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001830d2720;
  uRam00000001830d2cd0 = (uRam00000001830d2cd0 ^ uVar5) + 0x8fe12c4408816128 ^ 0x7a4d2583c346c62;
  uRam00000001830d2c30 = (uRam00000001830d2c30 * 0x10107e1cc5b7f54b ^ uRam00000001830d2cd0) + uVar5;
  uRam00000001830d2568 = uRam00000001830d2c30 ^ uRam00000001830d2cd0;
  uRam00000001830d2808 = 0x8fe12c4408816128;
  uVar5 = (~uRam00000001830d2c58 + 0x1fc258881102c251) *
          ((uRam00000001830d28b8 ^ 0x5016d3a3434cadf2) +
          (uRam00000001830d28b8 & 0x5016d3a3434cadf2) * 2);
  uVar5 = (uVar5 | uRam00000001830d2788) + (uVar5 & uRam00000001830d2788);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d26c8 =
       func_0x0001854b12b0((uVar5 | 0x4fd48b2b524e6fa2) + (uVar5 & 0x4fd48b2b524e6fa2));
  uRam00000001830d26a8 = uRam00000001830d2ab8 ^ uRam00000001830d26c8 ^ 0x6fd92c2bd8715127;
  uRam00000001830d26f0 =
       (uRam00000001830d26f0 ^ uRam00000001830d26c8) + 0x6fd92c2bd8715127 ^ 0x58cd815c721bc1fe;
  uRam00000001830d2958 =
       (uRam00000001830d2958 * 0x51e88cf72e8c3b83 ^ uRam00000001830d26f0) + uRam00000001830d26c8;
  uRam00000001830d2578 = uRam00000001830d2958 ^ uRam00000001830d26f0;
  uRam00000001830d25b8 = 0x6fd92c2bd8715127;
  uVar5 = (uRam00000001830d28e0 ^ _UNK_1804f1c40) + uRam00000001830d2528 + 0x6fd92c2b5c537202;
  uVar6 = (uRam00000001830d2528 ^ _UNK_1804f1c48) + uRam00000001830d28e0 + 0x6fd92c2bd8715127;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d28e0 ^ _UNK_1804f1c40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2528 ^ _UNK_1804f1c48;
  uRam00000001830d2a30 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830d28e0 + 0x6fd92c2bd8715127) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001830d2528 + 0x6fd92c2b5c537202));
  uRam00000001830d2928 = uRam00000001830d2a30 & 0xffffffff80000000;
  uRam00000001830d2c48 = uRam00000001830d2c48 ^ uRam00000001830d2928 ^ 0x948cdaf6aa1bf53;
  uRam00000001830d2798 =
       (uRam00000001830d2798 * 0x21e1d852bd1edbe5 ^ uRam00000001830d2c48) + uRam00000001830d2928;
  uRam00000001830d2960 = uRam00000001830d2798 ^ uRam00000001830d2c48;
  lRam00000001830d29e0 = 0;
  uVar5 = ((uRam00000001830d2810 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001830d2810 & 0x84225cda) * 2) * -uRam00000001830d26c0;
  uVar5 = (uVar5 | uRam00000001830d2590) + (uVar5 & uRam00000001830d2590);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2bf8 =
       func_0x0001854b12b0((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam00000001830d2bf8 << 0x34 | uRam00000001830d2bf8 >> 0xc;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uVar5 = uVar5 << 0xd | uVar5 >> 0x33;
  uRam00000001830d25f8 = uRam00000001830d28e0 ^ uVar5 ^ 0x7fff;
  uRam00000001830d2780 = (uRam00000001830d2780 ^ uVar5) + 0x7fff ^ 0x12e2419e9d9325a;
  uRam00000001830d2700 = (uRam00000001830d2700 * -0x16ff0676a186aef9 ^ uRam00000001830d2780) + uVar5
  ;
  uRam00000001830d2508 = uRam00000001830d2700 ^ uRam00000001830d2780;
  uRam00000001830d26a8 = 0x7fff;
  uRam00000001830d2858 = func_0x0001854b12b0(lRam00000001830d2ad0 + 0x18db17cfe13ed9dfU ^ 0xe0);
  uRam00000001830d2758 =
       (uRam00000001830d2758 ^ uRam00000001830d2858 ^ 0xdfe7bee64be7e7fb) + 0x20184119b4181804 ^
       0xab88dca496d20405;
  uRam00000001830d2cb8 =
       (uRam00000001830d2cb8 * 0x621781aa2218bc6f ^ uRam00000001830d2758) +
       (uRam00000001830d2858 ^ 0xdfe7bee64be7e7fb);
  uRam00000001830d28d0 = uRam00000001830d2cb8 ^ uRam00000001830d2758;
  uRam00000001830d2738 = 0x20184119b4181804;
  uVar5 = ((uRam00000001830d2778 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001830d2778 & 0x84225cda) * 2) * -uRam00000001830d2528;
  uVar5 = (uVar5 | uRam00000001830d2698) + (uVar5 & uRam00000001830d2698);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2ca8 =
       func_0x0001854b12b0((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uRam00000001830d2b98 = uRam00000001830d2748 ^ uRam00000001830d2ca8 ^ 0x7fff;
  uRam00000001830d2a08 = (uRam00000001830d2a08 ^ uRam00000001830d2ca8) + 0x7fff ^ 0x812410eee8e7a243
  ;
  uRam00000001830d2718 =
       (uRam00000001830d2718 * 0x3daf3e4710492ceb ^ uRam00000001830d2a08) + uRam00000001830d2ca8;
  uRam00000001830d2568 = uRam00000001830d2718 ^ uRam00000001830d2a08;
  uRam00000001830d29f0 = 0x7fff;
  uVar5 = (uRam00000001830d26b8 ^ _UNK_1804f1c50) + uRam00000001830d2a98 + 0xc7c6bee6cc66c09f;
  uVar6 = (uRam00000001830d2a98 ^ _UNK_1804f1c58) + uRam00000001830d26b8 + 0xc7c6bee64844e3ba;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d26b8 ^ _UNK_1804f1c50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2a98 ^ _UNK_1804f1c58;
  uRam00000001830d26c8 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830d26b8 + 0xc7c6bee64844e3ba) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001830d2a98 + 0xc7c6bee6cc66c09f));
  uVar5 = uRam00000001830d26c8 << 0x15 | uRam00000001830d26c8 >> 0x2b;
  uRam00000001830d29f0 = uRam00000001830d29f0 ^ uVar5 ^ 0xa65340a2af924738;
  uRam00000001830d2b08 = (uRam00000001830d2b08 * -0x3833dba7c700b007 ^ uRam00000001830d29f0) + uVar5
  ;
  uRam00000001830d2870 = uRam00000001830d2b08 ^ uRam00000001830d29f0;
  uRam00000001830d2b18 = 0;
  uVar5 = (uRam00000001830d2888 ^ 0x84225cda) + uRam00000001830d2bb8 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2888 ^ 0x84225cda;
  uVar6 = ((uRam00000001830d2bb8 + uRam00000001830d2888) * 0x2000 |
          uRam00000001830d2bb8 + uRam00000001830d2888 >> 0x33) ^ uRam00000001830d2bb8;
  uRam00000001830d2958 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001830d2888 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2bb8 + 0x84225cda));
  uVar5 = (uRam00000001830d2958 << 0x29 | uRam00000001830d2958 >> 0x17) >> 0x17 |
          (uRam00000001830d2958 >> 0x17) << 0x29;
  uRam00000001830d2b08 = uRam00000001830d2580 ^ uVar5 ^ 0x7fff;
  uRam00000001830d2738 = (uRam00000001830d2738 ^ uVar5) + 0x7fff ^ 0x14c14666c9ba06f0;
  uRam00000001830d2668 = (uRam00000001830d2668 * 0x6f300383b08ae77d ^ uRam00000001830d2738) + uVar5;
  uRam00000001830d27a0 = uRam00000001830d2668 ^ uRam00000001830d2738;
  uRam00000001830d2518 = uRam00000001830d2b50 ^ 0x7fff;
  uRam00000001830d27b0 = 0x7fff;
  uVar6 = (ulonglong)(param_4 & 0x7fff) ^ 0x84222325;
  uVar5 = ((uRam00000001830d2b08 ^ uVar6) +
          (ulonglong)((uint)uRam00000001830d2b08 & (uint)uVar6) * 2) *
          ((ulonglong)param_3 - lRam00000001830d28f8);
  uVar5 = (uVar5 | uRam00000001830d2a08) + (uVar5 & uRam00000001830d2a08);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar6 = uVar6 ^ param_3;
  uRam00000001830d2810 =
       func_0x0001854b12b0((uVar6 | uVar5) + (ulonglong)((uint)uVar6 & (uint)uVar5));
  param_3 = param_4 & 0x7fff ^ param_3;
  uVar3 = (ulonglong)param_3;
  uRam00000001830d2a48 =
       (uRam00000001830d2a48 ^ uRam00000001830d2810 & 0xfffffffffffffff0) + uVar3 ^
       0x126487bb75204077;
  uRam00000001830d26d8 =
       (uRam00000001830d26d8 * 0x671dfdd838d96649 ^ uRam00000001830d2a48) +
       (uRam00000001830d2810 & 0xfffffffffffffff0);
  uRam00000001830d2540 = uRam00000001830d26d8 ^ uRam00000001830d2a48;
  uVar5 = (uRam00000001830d2938 ^ _UNK_1804f1c60) + uRam00000001830d2880 + 0xa8902f34;
  uVar6 = (uRam00000001830d2880 ^ _UNK_1804f1c68) + uRam00000001830d2938 + 0x8dbab765;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2938 ^ _UNK_1804f1c60;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2880 ^ _UNK_1804f1c68;
  uRam00000001830d26f0 = uVar3;
  uVar5 = func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d2938 + 0x8dbab765)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam00000001830d2880 + 0xa8902f34));
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4;
  uRam00000001830d2500 = uVar6 + 0xadbabf75 ^ 0x8dc20c37878b6d29;
  uRam00000001830d2840 =
       (uRam00000001830d2840 * 0x3a297a68524870ef ^ uRam00000001830d2500) + (uVar6 ^ uVar5);
  uRam00000001830d2928 = uRam00000001830d2840 ^ uRam00000001830d2500;
  uRam00000001830d2700 = 0xadbabf75;
  uVar5 = (uRam00000001830d2780 ^ _UNK_1804f1c70) + uRam00000001830d26a0 + 0x73327e87;
  uVar6 = (uRam00000001830d26a0 ^ _UNK_1804f1c78) + uRam00000001830d2780 + 0xded6319;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2780 ^ _UNK_1804f1c70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d26a0 ^ _UNK_1804f1c78;
  uRam00000001830d2680 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d2780 + 0xded6319) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d26a0 + 0x73327e87));
  uRam00000001830d25c0 =
       (uRam00000001830d25c0 ^ uRam00000001830d2680 ^ 0xf7105da2) + 0xfafd3ebb ^ 0xebf6bd7f15b0ce3b;
  uRam00000001830d2be8 =
       (uRam00000001830d2be8 * 0x3c54c0aa55aca6d7 ^ uRam00000001830d25c0) +
       (uRam00000001830d2680 ^ 0xf7105da2);
  uRam00000001830d2b00 = uRam00000001830d2be8 ^ uRam00000001830d25c0;
  uRam00000001830d2a48 = 0xfafd3ebb;
  uVar5 = (uRam00000001830d2cc0 ^ _UNK_1804f1c80) + uRam00000001830d2968 + 0x84222325;
  uVar6 = (uRam00000001830d2968 ^ _UNK_1804f1c88) + uRam00000001830d2cc0 + 0xe287044d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2cc0 ^ _UNK_1804f1c80;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2968 ^ _UNK_1804f1c88;
  uRam00000001830d2770 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d2cc0 + 0xe287044d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2968 + 0x84222325));
  uVar5 = (uRam00000001830d2770 * 0x76c6fa4f75620000 |
          uRam00000001830d2770 * 0x326bb637d27bab1 >> 0x2f) ^ 0xe287044d;
  uRam00000001830d2c20 = (uRam00000001830d2c20 ^ uVar5) - 0xe287044d ^ 0x913f64838a14a922;
  uRam00000001830d2a18 = (uRam00000001830d2a18 * -0x1f7e85be0075f6bf ^ uRam00000001830d2c20) + uVar5
  ;
  uRam00000001830d2600 = uRam00000001830d2a18 ^ uRam00000001830d2c20;
  uRam00000001830d27a0 = 0x1d78fbb3;
  uVar5 = (~uRam00000001830d2a90 + 0xe287044e) *
          ((uRam00000001830d2b28 ^ 0x84226848) +
          (ulonglong)((uint)uRam00000001830d2b28 & 0x84226848) * 2);
  uVar5 = (uVar5 | uRam00000001830d2658) + (uVar5 & uRam00000001830d2658);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d27a8 =
       func_0x0001854b12b0((uVar5 | 0x66a56c05) + (ulonglong)((uint)uVar5 & 0x66a56c05));
  uVar5 = uRam00000001830d2cc0 << 0x2e | uRam00000001830d2cc0 >> 0x12;
  uRam00000001830d2ce8 = uRam00000001830d2cd8 ^ uVar5 ^ 0xe2874fba;
  uRam00000001830d2608 = (uRam00000001830d2608 ^ uVar5) + 0xe2874fba ^ 0x89e1b849a6d12e61;
  uRam00000001830d2a38 = (uRam00000001830d2a38 * -0x7d69dbbd972b8d99 ^ uRam00000001830d2608) + uVar5
  ;
  uRam00000001830d2a00 = uRam00000001830d2a38 ^ uRam00000001830d2608;
  uRam00000001830d27c0 = uRam00000001830d2780 ^ 0xe2874fba;
  uRam00000001830d25d0 = 0xe2874fba;
  uVar5 = (~uRam00000001830d2cc8 + 0x1d78fbb4) *
          ((uRam00000001830d2ae0 ^ 0x66a56c9f) +
          (ulonglong)((uint)uRam00000001830d2ae0 & 0x66a56c9f) * 2);
  uVar5 = (uVar5 | uRam00000001830d2718) + (uVar5 & uRam00000001830d2718);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d25f8 =
       func_0x0001854b12b0((uVar5 | 0x7bdd972c) + (ulonglong)((uint)uVar5 & 0x7bdd972c));
  uRam00000001830d2780 = 0x100004b6d;
  uRam00000001830d2970 =
       (uRam00000001830d2970 ^ uRam00000001830d25f8) + 0x100004b6d ^ 0x359410628ca06a79;
  uRam00000001830d2c90 =
       (uRam00000001830d2c90 * 0x668e1f52b68d4b3d ^ uRam00000001830d2970) + uRam00000001830d25f8;
  uRam00000001830d2870 = uRam00000001830d2c90 ^ uRam00000001830d2970;
  uRam00000001830d2570 = 0x4b6d;
  uRam00000001830d2b30 = func_0x0001854b12b0(uRam00000001830d2640 ^ 0xff5affd770ff9d73);
  uRam00000001830d2968 = uRam00000001830d2968 - 0x735cf8b4 ^ 0xe7e055d57e45c03;
  uRam00000001830d2848 = uRam00000001830d28c0 * 0xafd67ba80ad758b;
  uRam00000001830d28c0 = uRam00000001830d2848 ^ uRam00000001830d2968;
  uRam00000001830d25f8 = 0x8ca3074c;
  uVar5 = (uRam00000001830d27b8 ^ _UNK_1804f1c90) + uRam00000001830d2a90 + 0x84226848;
  uVar6 = (uRam00000001830d2a90 ^ _UNK_1804f1c98) + uRam00000001830d27b8 + 0x735cf8b4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d27b8 ^ _UNK_1804f1c90;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2a90 ^ _UNK_1804f1c98;
  uRam00000001830d28d0 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d27b8 + 0x735cf8b4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2a90 + 0x84226848));
  uVar5 = (uRam00000001830d28d0 ^ 0x735cf8b4) & 0x7fffffffffffffff;
  uRam00000001830d2868 = uRam00000001830d2c78 ^ uVar5 ^ 0x735d4421;
  uRam00000001830d2cc0 = (uRam00000001830d2cc0 ^ uVar5) + 0x735d4421 ^ 0x98471733ebbd9869;
  uRam00000001830d2740 = (uRam00000001830d2740 * 0x435525803aeddba5 ^ uRam00000001830d2cc0) + uVar5;
  uRam00000001830d2840 = uRam00000001830d2740 ^ uRam00000001830d2cc0;
  uRam00000001830d2748 = 0x735d4421;
  uVar5 = (~uRam00000001830d25e0 + 0x8ca3074d) *
          ((uRam00000001830d2898 ^ 0xf77f6704) +
          (ulonglong)((uint)uRam00000001830d2898 & 0xf77f6704) * 2);
  uVar5 = (uVar5 | uRam00000001830d26a8) + (uVar5 & uRam00000001830d26a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2ae0 =
       func_0x0001854b12b0((uVar5 | 0x7bdc6048) + (ulonglong)((uint)uVar5 & 0x7bdc6048));
  uVar5 = uRam00000001830d2ae0 ^ 0x735d4421;
  uRam00000001830d28c8 = uRam00000001830d25c0 ^ uVar5 ^ 0x100004b6d;
  uRam00000001830d2750 = (uRam00000001830d2750 ^ uVar5) + 0x100004b6d ^ 0x251ea4028c170cb8;
  uRam00000001830d2650 = (uRam00000001830d2650 * 0x7f46f9b4e2519d55 ^ uRam00000001830d2750) + uVar5;
  uRam00000001830d2740 = uRam00000001830d2650 ^ uRam00000001830d2750;
  uRam00000001830d29e8 = 0x4b6d;
  uVar5 = (uRam00000001830d2b00 ^ _UNK_1804f1ca0) + uRam00000001830d2cc0 + 0x84222325;
  uVar6 = (uRam00000001830d2cc0 ^ _UNK_1804f1ca8) + uRam00000001830d2b00 + 0x7ee74b70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2b00 ^ _UNK_1804f1ca0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2cc0 ^ _UNK_1804f1ca8;
  uRam00000001830d25c0 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d2b00 + 0x7ee74b70) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2cc0 + 0x84222325));
  uVar5 = uRam00000001830d25c0 << 9 | uRam00000001830d25c0 >> 0x37;
  uRam00000001830d2780 = (uRam00000001830d2780 ^ uVar5) - 0x7ee74b70 ^ 0xe0b2a0a3779c2a14;
  uRam00000001830d2890 = (uRam00000001830d2890 * 0x68541cf9d82153b5 ^ uRam00000001830d2780) + uVar5;
  uRam00000001830d28e8 = uRam00000001830d2890 ^ uRam00000001830d2780;
  uRam00000001830d25a0 = 0x8118b490;
  uRam00000001830d2708 = func_0x0001854b12b0(uRam00000001830d27a8 ^ 0xffff00155800dcca);
  uVar5 = uRam00000001830d2708 - (uRam00000001830d2708 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uRam00000001830d2708;
  uRam00000001830d26c8 = uRam00000001830d26b8 ^ uVar5 ^ 0x100004b6d;
  uRam00000001830d2b20 = (uRam00000001830d2b20 ^ uVar5) + 0x100004b6d ^ 0xb6fe69d13c91ea20;
  uRam00000001830d2728 = (uRam00000001830d2728 * 0x477a351bb2a3a95 ^ uRam00000001830d2b20) + uVar5;
  uRam00000001830d2cd8 = uRam00000001830d2728 ^ uRam00000001830d2b20;
  uRam00000001830d27f8 = 0x4b6d;
  uVar5 = (~uRam00000001830d2968 + 0xfafd3ebc) *
          ((uRam00000001830d28e0 ^ 0x29989c50) +
          (ulonglong)((uint)uRam00000001830d28e0 & 0x29989c50) * 2);
  uVar5 = (uVar5 | uRam00000001830d25d8) + (uVar5 & uRam00000001830d25d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2ac0 =
       func_0x0001854b12b0((uVar5 | 0xd365a2eb) + (ulonglong)((uint)uVar5 & 0xd365a2eb));
  uVar5 = (uRam00000001830d2ac0 ^ 0xaa543b199a693077) << 2 |
          (uRam00000001830d2ac0 ^ 0xaa543b199a693077) >> 0x3e;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar5;
  uRam00000001830d2af8 = uRam00000001830d25c0 ^ uVar5 ^ 0x1a8b7fe30;
  uRam00000001830d2ba8 = (uRam00000001830d2ba8 ^ uVar5) + 0x1a8b7fe30 ^ 0xc3374015e8069d45;
  uRam00000001830d2928 = (uRam00000001830d2928 * 0x63124115e99f581b ^ uRam00000001830d2ba8) + uVar5;
  uRam00000001830d2940 = uRam00000001830d2928 ^ uRam00000001830d2ba8;
  uRam00000001830d2658 = 0xa8b7fe30;
  lRam00000001830d2670 = func_0x0001854b12b0(uRam00000001830d2998 ^ 0x9e00319b005abc);
  uRam00000001830d26e0 =
       (uRam00000001830d26e0 ^ lRam00000001830d2670 * -0x38315056838e1221) + 0x574781ce ^
       0xa3e034d07862222a;
  uRam00000001830d26c0 =
       (uRam00000001830d26c0 * -0x220a331ead612af5 ^ uRam00000001830d26e0) +
       lRam00000001830d2670 * -0x38315056838e1221;
  uRam00000001830d29e8 = uRam00000001830d26c0 ^ uRam00000001830d26e0;
  uRam00000001830d2688 = 0x574781ce;
  uVar5 = (uRam00000001830d2770 ^ _UNK_1804f1cb0) + uRam00000001830d2938 + 0x29989c50;
  uVar6 = (uRam00000001830d2938 ^ _UNK_1804f1cb8) + uRam00000001830d2770 + 0xfafd3ebb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2770 ^ _UNK_1804f1cb0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2938 ^ _UNK_1804f1cb8;
  uRam00000001830d2a70 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d2770 + 0xfafd3ebb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2938 + 0x29989c50));
  uRam00000001830d2b28 =
       (uRam00000001830d2b28 ^ uRam00000001830d2a70 ^ 0x5245008a) + 0xa8b83e31 ^ 0x75637a149e55c0d4;
  uRam00000001830d2530 =
       (uRam00000001830d2530 * -0x3fc8af07763c30b9 ^ uRam00000001830d2b28) +
       (uRam00000001830d2a70 ^ 0x5245008a);
  uRam00000001830d2a60 = uRam00000001830d2530 ^ uRam00000001830d2b28;
  uRam00000001830d2988 = 0xa8b83e31;
  uVar5 = (uRam00000001830d2bf8 ^ _UNK_1804f1cc0) + uRam00000001830d2ca8 + 0xd365a2eb;
  uVar6 = (uRam00000001830d2ca8 ^ _UNK_1804f1cc8) + uRam00000001830d2bf8 + 0x51707c62;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2bf8 ^ _UNK_1804f1cc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2ca8 ^ _UNK_1804f1cc8;
  uRam00000001830d2be0 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d2bf8 + 0x51707c62) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2ca8 + 0xd365a2eb));
  uVar5 = uRam00000001830d2be0 >> 1 | uRam00000001830d2be0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001830d2be0;
  uRam00000001830d2b98 = uRam00000001830d26e0 ^ uVar5 ^ 0xa8b7fe30;
  uRam00000001830d2cc0 = (uRam00000001830d2cc0 ^ uVar5) + 0xa8b7fe30 ^ 0x1e8839d732ea44cb;
  uRam00000001830d25d8 = (uRam00000001830d25d8 * -0xce2e020fd3f282f ^ uRam00000001830d2cc0) + uVar5;
  uRam00000001830d2a58 = uRam00000001830d25d8 ^ uRam00000001830d2cc0;
  uRam00000001830d2a28 = 0xa8b7fe30;
  uVar5 = (uRam00000001830d2618 ^ _UNK_1804f1cd0) + uRam00000001830d2598 + 0x2c95dd15;
  uVar6 = (uRam00000001830d2598 ^ _UNK_1804f1cd8) + uRam00000001830d2618 + 0xa8b7fe30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2618 ^ _UNK_1804f1cd0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830d2598 ^ _UNK_1804f1cd8;
  uRam00000001830d26e8 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d2618 + 0xa8b7fe30) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2598 + 0x2c95dd15));
  uVar5 = uRam00000001830d26e8 - (uRam00000001830d26e8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam00000001830d2b88 =
       (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
       uRam00000001830d26e8;
  uRam00000001830d2c58 = uRam00000001830d2c58 ^ uRam00000001830d2b88 ^ 0x914bb855642fa6b9;
  uRam00000001830d2988 =
       (uRam00000001830d2988 * -0x345e1e17e8cfe505 ^ uRam00000001830d2c58) + uRam00000001830d2b88;
  uRam00000001830d2828 = uRam00000001830d2988 ^ uRam00000001830d2c58;
  uRam00000001830d2970 = 0;
  uVar5 = ((uRam00000001830d2728 ^ 0x84226848) +
          (ulonglong)((uint)uRam00000001830d2728 & 0x84226848) * 2) * -lRam00000001830d2630;
  uVar5 = (uVar5 | uRam00000001830d2c48) + (uVar5 & uRam00000001830d2c48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2c30 =
       func_0x0001854b12b0((uVar5 | 0x84226848) + (ulonglong)((uint)uVar5 & 0x84226848));
  uVar5 = uRam00000001830d2c30 * -0x29c4ff9037340633;
  uRam00000001830d2c18 = uRam00000001830d2988 ^ uVar5 ^ 0x4b6d;
  uRam00000001830d2690 = (uRam00000001830d2690 ^ uVar5) + 0x4b6d ^ 0xf3d8b545b8b95550;
  uRam00000001830d2850 = (uRam00000001830d2850 * -0x56d60c7431e89a69 ^ uRam00000001830d2690) + uVar5
  ;
  uRam00000001830d29c0 = uRam00000001830d2850 ^ uRam00000001830d2690;
  uRam00000001830d27e8 = 0x4b6d;
  uRam00000001830d2650 = func_0x0001854b12b0(uRam00000001830d2748 ^ 0x6300b65affde87);
  uVar6 = uRam00000001830d2650 ^ 0xffffffff;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar6;
  uRam00000001830d2c68 = (uRam00000001830d2c68 ^ uVar6) + 0x5245408a ^ 0x9b3b4741cd4bd7e5;
  uRam00000001830d2688 = (uRam00000001830d2688 * -0x1645548364d737e3 ^ uRam00000001830d2c68) + uVar6
  ;
  uRam00000001830d25d8 = uRam00000001830d2688 ^ uRam00000001830d2c68;
  uRam00000001830d2b38 = 0x5245408a;
  uVar5 = (~uRam00000001830d26f0 + 0x5245408b) *
          ((uRam00000001830d29b8 ^ 0x29989c50) +
          (ulonglong)((uint)uRam00000001830d29b8 & 0x29989c50) * 2);
  uVar5 = (uVar5 | uRam00000001830d2ab0) + (uVar5 & uRam00000001830d2ab0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2b20 =
       func_0x0001854b12b0((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uVar6 = uRam00000001830d2b20 * -0x2c856b4959aff51;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar6;
  uRam00000001830d29b0 = uRam00000001830d29b0 ^ uVar6 ^ 0x8bfc3134bfed5ad3;
  uRam00000001830d2cc0 = (uRam00000001830d2cc0 * 0x7c8657c821c31d65 ^ uRam00000001830d29b0) + uVar6;
  uRam00000001830d2b10 = uRam00000001830d2cc0 ^ uRam00000001830d29b0;
  uRam00000001830d2628 = 0;
  uVar5 = (uRam00000001830d2798 ^ 0x84226848) + uRam00000001830d28e8 + 0x84226848;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2798 ^ 0x84226848;
  uVar6 = ((uRam00000001830d28e8 + uRam00000001830d2798) * 0x2000 |
          uRam00000001830d28e8 + uRam00000001830d2798 >> 0x33) ^ uRam00000001830d28e8;
  uRam00000001830d2bd0 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001830d2798 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d28e8 + 0x84226848));
  uVar5 = (ulonglong)
          (~((uint)((uRam00000001830d2bd0 ^ 0x25) << 9) | (uint)(uRam00000001830d2bd0 >> 0x37)) &
          0x4b6d);
  uRam00000001830d2650 = uRam00000001830d28a8 ^ uVar5 ^ 0x4b6d;
  uRam00000001830d2920 = (uRam00000001830d2920 ^ uVar5) + 0x4b6d ^ 0x909a29726a36fa83;
  uRam00000001830d2b98 = (uRam00000001830d2b98 * 0x3153b5eaaa278207 ^ uRam00000001830d2920) + uVar5;
  uRam00000001830d2a40 = uRam00000001830d2b98 ^ uRam00000001830d2920;
  uRam00000001830d2970 = 0x4b6d;
  uVar5 = (~uRam00000001830d2918 + 0x2cb20c12) *
          ((uRam00000001830d2b90 ^ 0xa8902f34) +
          (ulonglong)((uint)uRam00000001830d2b90 & 0xa8902f34) * 2);
  uVar5 = (uVar5 | uRam00000001830d28c8) + (uVar5 & uRam00000001830d28c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830d2940 =
       func_0x0001854b12b0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam00000001830d2b80 = uRam00000001830d2b80 ^ uRam00000001830d2940 ^ 0xbde4eadb5e78d241;
  uRam00000001830d2b00 =
       (uRam00000001830d2b00 * -0x263948fe8cf111c5 ^ uRam00000001830d2b80) + uRam00000001830d2940;
  uRam00000001830d2a80 = uRam00000001830d2b00 ^ uRam00000001830d2b80;
  uRam00000001830d25b8 = 0;
  uVar5 = (uRam00000001830d2ae8 ^ 0x84226848) + uRam00000001830d2690 + 0x84226848;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830d2ae8 ^ 0x84226848;
  uVar6 = ((uRam00000001830d2690 + uRam00000001830d2ae8) * 0x2000 |
          uRam00000001830d2690 + uRam00000001830d2ae8 >> 0x33) ^ uRam00000001830d2690;
  uRam00000001830d2b10 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001830d2ae8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830d2690 + 0x84226848));
  uVar5 = uRam00000001830d2b10 & 0xffffffff80000000;
  uRam00000001830d25d8 = uRam00000001830d2b10 ^ uVar5 ^ 0x4b6d;
  uRam00000001830d28b0 = (uRam00000001830d28b0 ^ uVar5) + 0x4b6d ^ 0xd5abcc440c8718b0;
  uRam00000001830d2c40 = (uRam00000001830d2c40 * 0x3e9399930bb7d7ef ^ uRam00000001830d28b0) + uVar5;
  uRam00000001830d2cf8 = uRam00000001830d2c40 ^ uRam00000001830d28b0;
  uRam00000001830d27b8 = 0x4b6d;
  uVar5 = uVar3 ^ 0x84222325 ^ uRam00000001830d2828;
  lVar4 = (uVar3 ^ 0x84222325) + uRam00000001830d2cf0;
  uVar6 = uVar5 + lVar4;
  uVar7 = (uRam00000001830d2cf0 ^ 0x4b6d) + uRam00000001830d2828 + 0x4b6d;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d2cf0 ^ 0x4b6d;
  uRam00000001830d25c8 =
       func_0x0001854b12b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830d2828 + 0x4b6d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  lVar4 = uVar3 - (param_3 & 0x4b6d) * 2;
  uRam00000001830d2b18 =
       (uRam00000001830d2b18 ^ uRam00000001830d25c8) + lVar4 + 0x4b6d ^ 0x97a87303bd0fa53b;
  uRam00000001830d2b88 =
       (uRam00000001830d2b88 * -0x6e55951a2dfffceb ^ uRam00000001830d2b18) + uRam00000001830d25c8;
  uRam00000001830d2760 = uRam00000001830d2b88 ^ uRam00000001830d2b18;
  uRam00000001830d25c0 = lVar4 + 0x4b6dU & 0xffffffff;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854ac925 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804f0268 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1854b1340, runtime 6fffed0c1340) =====

void FUN_1854b1340(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001854b137c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804f1e60 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qn; cXD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1854b2230, runtime 6fffed0c2230) =====

void FUN_1854b2230(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854b22ad did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804f23a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXq (Ljava/lang/String;Ljava/lang/String;)V (handler @ image 1854775d0, runtime 6fffed0875d0) =====

void FUN_1854775d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000185477697 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804e81b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXr (Ljava/lang/String;Ljava/lang/String;)V (handler @ image 18547b6b0, runtime 6fffed08b6b0) =====

void FUN_18547b6b0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018547b777 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804e9480 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXs (J)V (handler @ image 1854bb0d0, runtime 6fffed0cb0d0) =====

void FUN_1854bb0d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854bb194 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804f48c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXt (J)V (handler @ image 1854bf6d0, runtime 6fffed0cf6d0) =====

void FUN_1854bf6d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854bf794 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804f5cc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXu (Ljava/lang/String;)V (handler @ image 1854f8600, runtime 6fffed108600) =====

void FUN_1854f8600(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001854f8625 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180506710 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qn; cXv (Ljava/lang/String;)V (handler @ image 1854f87f0, runtime 6fffed1087f0) =====

void FUN_1854f87f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001854f8815 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1805067e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qn; cXw (Z)V (handler @ image 1854f89e0, runtime 6fffed1089e0) =====

void FUN_1854f89e0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854f8a2a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1805068b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXx ()Z (handler @ image 1854f8b60, runtime 6fffed108b60) =====

void FUN_1854f8b60(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854f8ba7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180506950 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXy ()Z (handler @ image 1854801c0, runtime 6fffed0901c0) =====

void FUN_1854801c0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000185480207 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804eab40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; cXz (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 185480360, runtime 6fffed090360) =====

undefined8 FUN_185480360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/qn; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 1854c39c0, runtime 6fffed0d39c0) =====

void FUN_1854c39c0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854c3ac5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804f7050 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn; toJson ()Lcom/google/gson/JsonObject; (handler @ image 1854df190, runtime 6fffed0ef190) =====

void FUN_1854df190(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x14d44,0x33e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001854df280 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804fef10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



