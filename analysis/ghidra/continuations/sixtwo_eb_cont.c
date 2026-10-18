// ===== continuation @ rva d72ece2 (image 18d72ece2) =====

void FUN_18d72ece2(void)

{
  return;
}



// ===== continuation @ rva d712e4b (image 18d712e4b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d712ea1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d712e4b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d72801e (image 18d72801e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d72801e(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d72ec92 (image 18d72ec92) =====

void thunk_FUN_18d71503a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva d714ff2 (image 18d714ff2) =====

void thunk_FUN_18d71503a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva d713235 (image 18d713235) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d713278 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d713235(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d716c79 (image 18d716c79) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d716c94 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d716c79(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d725611 (image 18d725611) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d725611(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  _DAT_183363c88 = func_0x00018d72eec0(_DAT_183363c10 ^ 0x8200285e000ec1);
  _DAT_183363ba8 = (_DAT_183363ba8 ^ _DAT_183363c88 ^ 0xf3aa7ad9) + 0xffbbfbdb ^ 0x60e63982eead3a26;
  _DAT_183363b80 =
       (_DAT_183363b80 * -0x7351b8ae63d15847 ^ _DAT_183363ba8) + (_DAT_183363c88 ^ 0xf3aa7ad9);
  _DAT_183363cc8 = _DAT_183363b80 ^ _DAT_183363ba8;
  _DAT_183363b38 = 0xffbbfbdb;
  uVar3 = (~_DAT_183363b40 + 0xace49f5c) *
          ((_DAT_183363b40 ^ 0xc03bc704) + (ulonglong)((uint)_DAT_183363b40 & 0xc03bc704) * 2);
  uVar3 = (uVar3 | _DAT_183363c90) + (uVar3 & _DAT_183363c90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183363b50 = func_0x00018d72eec0((uVar3 | 0x6cdf585f) + (ulonglong)((uint)uVar3 & 0x6cdf585f))
  ;
  uVar3 = ((_DAT_183363b50 ^ 0x2dfe36b9e751729a) & 0x7fffffffffffffff) * -0xf573fcf54ce62c5;
  _DAT_183363c48 = (_DAT_183363c48 ^ uVar3) + 0xe8fd7b7a ^ 0xa3a2771f5b40bdfc;
  _DAT_183363b70 = (_DAT_183363b70 * -0x2dd0a7ecd71664c5 ^ _DAT_183363c48) + uVar3;
  _DAT_183363b18 = _DAT_183363b70 ^ _DAT_183363c48;
  _DAT_183363bc0 = 0xe8fd7b7a;
  _DAT_183363cb8 = func_0x00018d72eec0(_DAT_183363bf8 + 0xfff6ff85990008ff ^ 0xce);
  uVar3 = _DAT_183363cb8 ^ 0xedbffcc;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  _DAT_183363b70 = _DAT_183363c40 ^ uVar3 ^ 0xedcd4cc;
  _DAT_183363b68 = (_DAT_183363b68 ^ uVar3) + 0xedcd4cc ^ 0x2e219f2aca31e4bb;
  _DAT_183363bc0 = (_DAT_183363bc0 * -0x798fa01e1a40229f ^ _DAT_183363b68) + uVar3;
  _DAT_183363bd8 = _DAT_183363bc0 ^ _DAT_183363b68;
  _DAT_183363c58 = 0xedcd4cc;
  uVar3 = (_DAT_183363c28 ^ _DAT_18227d2c0) + _DAT_183363c00 + 0x8afef7e9;
  uVar2 = (_DAT_183363c00 ^ _UNK_18227d2c8) + _DAT_183363c28 + 0xf1242a34;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363c28 ^ _DAT_18227d2c0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183363c00 ^ _UNK_18227d2c8;
  _DAT_183363ca8 =
       func_0x00018d72eec0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363c28 + 0xf1242a34) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363c00 + 0x8afef7e9));
  uVar2 = _DAT_183363ca8 ^ 0xfffcfefc;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar2;
  _DAT_183363b60 = _DAT_183363ce0 ^ uVar2 ^ 0x10000ff00;
  _DAT_183363c88 = (_DAT_183363c88 ^ uVar2) + 0x10000ff00 ^ 0xcc6801e4d4718e21;
  _DAT_183363bb8 = (_DAT_183363bb8 * -0x1883b487c0a95e53 ^ _DAT_183363c88) + uVar2;
  _DAT_183363ce8 = 0xff00;
  _DAT_183363b58 = func_0x00018d72eec0(_DAT_183363ca0 ^ 0xffbbff778afff3b5);
  uVar3 = (_DAT_183363b58 ^ 0xd5667b0) << 0x28 | (_DAT_183363b58 ^ 0xd5667b0) >> 0x18;
  _DAT_183363b40 = (_DAT_183363b40 ^ uVar3) - 0xd5667b0 ^ 0xf1f5ea3f1d8b4b94;
  _DAT_183363bd0 = (_DAT_183363bd0 * -0x3d8ea0db4a802cd3 ^ _DAT_183363b40) + uVar3;
  _DAT_183363c00 = _DAT_183363bd0 ^ _DAT_183363b40;
  _DAT_183363c38 = 0xf2a99850;
  uVar3 = (_DAT_183363b88 ^ _DAT_18227d2d0) + _DAT_183363cf0 + 0x8422dc25;
  uVar2 = (_DAT_183363cf0 ^ _UNK_18227d2d8) + _DAT_183363b88 + 0xd5667b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363b88 ^ _DAT_18227d2d0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183363cf0 ^ _UNK_18227d2d8;
  _DAT_183363cf8 =
       func_0x00018d72eec0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363b88 + 0xd5667b0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363cf0 + 0x8422dc25));
  _DAT_183363c10 = _DAT_183363bc0 ^ _DAT_183363cf8 ^ 0xd5766b0;
  _DAT_183363b28 = (_DAT_183363b28 ^ _DAT_183363cf8) + 0xd5766b0 ^ 0x83bcb6d083a7c32c;
  _DAT_183363c78 = (_DAT_183363c78 * -0x2a230a5a7a17da3d ^ _DAT_183363b28) + _DAT_183363cf8;
  _DAT_183363bd0 = _DAT_183363c78 ^ _DAT_183363b28;
  _DAT_183363c88 = 0xd5766b0;
  uVar3 = (_DAT_183363cd8 ^ _DAT_18227d2e0) + _DAT_183363bc8 + 0x89754595;
  uVar2 = (_DAT_183363bc8 ^ _UNK_18227d2e8) + _DAT_183363cd8 + 0xf2a99850;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363cd8 ^ _DAT_18227d2e0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183363bc8 ^ _UNK_18227d2e8;
  _DAT_183363c28 =
       func_0x00018d72eec0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363cd8 + 0xf2a99850) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363bc8 + 0x89754595));
  uVar3 = _DAT_183363c28 & 0xfffffffff8000000;
  _DAT_183363b80 = _DAT_183363b68 ^ uVar3 ^ 0x10000ff00;
  _DAT_183363c48 = (_DAT_183363c48 ^ uVar3) + 0x10000ff00 ^ 0xf0503ddcc1331882;
  _DAT_183363ca0 = (_DAT_183363ca0 * 0x52a9071e2aef948b ^ _DAT_183363c48) + uVar3;
  _DAT_183363ca8 = _DAT_183363ca0 ^ _DAT_183363c48;
  _DAT_183363b60 = 0xff00;
  uVar3 = (~_DAT_183363cc0 + 0xd8f91091) *
          ((_DAT_183363bf8 ^ 0xa325cd55) + (ulonglong)((uint)_DAT_183363bf8 & 0xa325cd55) * 2);
  uVar3 = (uVar3 | _DAT_183363c30) + (uVar3 & _DAT_183363c30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183363cd0 = func_0x00018d72eec0((uVar3 | 0x7bdcddc5) + (ulonglong)((uint)uVar3 & 0x7bdcddc5))
  ;
  uVar3 = (ulonglong)(~(uint)_DAT_183363cd0 & 0x2707ee70) << 0x19 ^ 0x2707ee70;
  _DAT_183363c58 = _DAT_183363c28 ^ uVar3 ^ 0x10000ff00;
  _DAT_183363ce8 = (_DAT_183363ce8 ^ uVar3) + 0x10000ff00 ^ 0x270036841023c96d;
  _DAT_183363c38 = (_DAT_183363c38 * -0x7dc6ecbaa7f659d1 ^ _DAT_183363ce8) + uVar3;
  _DAT_183363b08 = _DAT_183363c38 ^ _DAT_183363ce8;
  _DAT_183363ca8 = 0xff00;
  _DAT_183363b28 = func_0x00018d72eec0(_DAT_183363cf0 + 0x2b003df00011ff ^ 0xce);
  uVar3 = _DAT_183363b28 << 0x1b | _DAT_183363b28 >> 0x25;
  _DAT_183363b38 = _DAT_183363b48 ^ uVar3 ^ 0xe8b97755;
  _DAT_183363c88 = (_DAT_183363c88 ^ uVar3) + 0xe8b97755 ^ 0xa999fb2115b4881;
  _DAT_183363b60 = (_DAT_183363b60 * -0x756a0de42873be5d ^ _DAT_183363c88) + uVar3;
  _DAT_183363b10 = _DAT_183363b60 ^ _DAT_183363c88;
  _DAT_183363cb8 = 0xe8b97755;
  uVar3 = (_DAT_183363cf8 ^ _DAT_18227d2f0) + _DAT_183363bf8 + 0x6c9b5470;
  uVar2 = (_DAT_183363bf8 ^ _UNK_18227d2f8) + _DAT_183363cf8 + 0xe8b97755;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363cf8 ^ _DAT_18227d2f0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183363bf8 ^ _UNK_18227d2f8;
  _DAT_183363b88 =
       func_0x00018d72eec0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363cf8 + 0xe8b97755) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363bf8 + 0x6c9b5470));
  _DAT_183363b40 = _DAT_183363b40 ^ _DAT_183363b88 ^ 0xc6b0fcbf7863145d;
  _DAT_183363c08 = (_DAT_183363c08 * -0x2e3a7796d433b8e3 ^ _DAT_183363b40) + _DAT_183363b88;
  _DAT_183363ca8 = _DAT_183363c08 ^ _DAT_183363b40;
  _DAT_183363b80 = 0;
  uVar3 = ((_DAT_183363c38 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183363c38 & 0x8422dc25) * 2) *
          -_DAT_183363c70;
  uVar3 = (uVar3 | _DAT_183363ce8) + (uVar3 & _DAT_183363ce8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183363cb0 = _DAT_183363b88;
  _DAT_183363b98 = func_0x00018d72eec0((uVar3 | 0x8422dc25) + (ulonglong)((uint)uVar3 & 0x8422dc25))
  ;
  uVar3 = _DAT_183363b98 << 0x1b | _DAT_183363b98 >> 0x25 & 0xffffffffffe00000;
  _DAT_183363b40 = _DAT_183363cc8 ^ uVar3 ^ 0xff00;
  _DAT_183363ca8 = (_DAT_183363ca8 ^ uVar3) + 0xff00 ^ 0x8494bea4da2cbdea;
  _DAT_183363c18 = (_DAT_183363c18 * 0x699fdafd851e2895 ^ _DAT_183363ca8) + uVar3;
  _DAT_183363b90 = _DAT_183363c18 ^ _DAT_183363ca8;
  _DAT_183363c20 = 0xff00;
  uVar3 = func_0x00018d72eec0(_DAT_183363c40 + 0x27008400ffe1ff ^ 0x21);
  _DAT_183363b20 = (_DAT_183363b20 ^ uVar3 ^ 0xffbbfbdb) + 0x440424 ^ 0xc9662c225870735f;
  _DAT_183363cb8 = (uVar3 * -0x5066968a63b1775d ^ _DAT_183363b20) + (uVar3 ^ 0xffbbfbdb);
  _DAT_183363c98 = _DAT_183363cb8 ^ _DAT_183363b20;
  _DAT_183363b00 = 0x440424;
  uVar3 = (~_DAT_183363b48 + 0xfb9db83) *
          ((_DAT_183363cc8 ^ 0x8b9bf8a7) + (ulonglong)((uint)_DAT_183363cc8 & 0x8b9bf8a7) * 2);
  uVar3 = (uVar3 | _DAT_183363b88) + (uVar3 & _DAT_183363b88);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183363b08 = func_0x00018d72eec0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar3 = _DAT_183363b08 ^ 0xfb9db82;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3) &
          0x3fffffffffffffff;
  _DAT_183363bb8 = _DAT_183363bb8 ^ uVar3 ^ 0xf450296c41689545;
  _DAT_183363cf8 = (_DAT_183363cf8 * 0x469b8d7e31f79bd5 ^ _DAT_183363bb8) + uVar3;
  _DAT_183363b78 = _DAT_183363cf8 ^ _DAT_183363bb8;
  _DAT_183363c28 = 0;
  uVar3 = ((_DAT_183363bf8 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183363bf8 & 0x8422dc25) * 2) *
          -_DAT_183363c70;
  uVar3 = (uVar3 | _DAT_183363bd0) + (uVar3 & _DAT_183363bd0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183363be0 = func_0x00018d72eec0((uVar3 | 0x8422dc25) + (ulonglong)((uint)uVar3 & 0x8422dc25))
  ;
  uVar3 = _DAT_183363be0 & 0xffffffffffffff;
  _DAT_183363cb8 = _DAT_183363b70 ^ uVar3 ^ 0xff00;
  _DAT_183363c50 = (_DAT_183363c50 ^ uVar3) + 0xff00 ^ 0x14cca3fddf7ad8ec;
  _DAT_183363c98 = (_DAT_183363c98 * 0x6326413e50135133 ^ _DAT_183363c50) + uVar3;
  _DAT_183363b60 = _DAT_183363c98 ^ _DAT_183363c50;
  _DAT_183363b10 = 0xff00;
  uVar3 = (ulonglong)(uint)(param_1 << 8) ^ 0x84222325;
  uVar2 = uVar3 ^ _DAT_183363bb0;
  lVar4 = uVar3 + _DAT_183363ca0;
  uVar3 = uVar2 + lVar4;
  uVar5 = (_DAT_183363ca0 ^ 0xff00) + _DAT_183363bb0 + 0xff00;
  uVar2 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar2;
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183363ca0 ^ 0xff00;
  _DAT_183363c38 =
       func_0x00018d72eec0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363bb0 + 0xff00) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  uVar3 = _DAT_183363c38 >> 1 | _DAT_183363c38;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183363c38;
  _DAT_183363b50 = (ulonglong)(uint)(param_1 << 8) & 0xffff;
  _DAT_183363cf0 = (_DAT_183363cf0 ^ uVar3) + _DAT_183363b50 ^ 0xf23d857709ad26ca;
  _DAT_183363b18 = (_DAT_183363b18 * -0x100f321916967c93 ^ _DAT_183363cf0) + uVar3;
  _DAT_183363ce8 = _DAT_183363b18 ^ _DAT_183363cf0;
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d72e334 (image 18d72e334) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d72e34b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d72e334(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d6f632e (image 18d6f632e) =====

void FUN_18d6f632e(void)

{
  return;
}



// ===== continuation @ rva d6f2741 (image 18d6f2741) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6f2741(void)

{
  FUN_190ddce00();
  (*_DAT_1822737a8)();
  return;
}



// ===== continuation @ rva d70a611 (image 18d70a611) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d70a611(void)

{
  longlong in_stack_00000098;
  
  switch(in_stack_00000098 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d70979b (image 18d70979b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d70979b(void)

{
  int in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d70a39c (image 18d70a39c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70a39c(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1822749d8)();
  return;
}



// ===== continuation @ rva d70999f (image 18d70999f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70999f(void)

{
  undefined8 in_stack_00000040;
  
  FUN_190ddfc90(in_stack_00000040,&stack0x00000058,*_DAT_18301ee50 + 0x1591,*_DAT_18301ee50 + 0xe42,
                0x9a);
  (*_DAT_182275f88)();
  return;
}



// ===== continuation @ rva d70c0f3 (image 18d70c0f3) =====

void FUN_18d70c0f3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d7075d3 (image 18d7075d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7075d3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d70c0b7 (image 18d70c0b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70c0b7(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x68))();
  (*_DAT_182275d08)();
  return;
}



// ===== continuation @ rva d7028ed (image 18d7028ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7028ed(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7016d4 (image 18d7016d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7016d4(void)

{
  (*_DAT_182275ea8)();
  return;
}



// ===== continuation @ rva d6f8a4b (image 18d6f8a4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6f8a4b(void)

{
  (*_DAT_182275478)();
  return;
}



// ===== continuation @ rva d70789c (image 18d70789c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70789c(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182275878)();
  return;
}



// ===== continuation @ rva d7043b8 (image 18d7043b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7043b8(void)

{
  undefined8 in_stack_00000040;
  
  FUN_190ddfc90(in_stack_00000040,&stack0x00000058,*_DAT_18301ee50 + 0x9753,*_DAT_18301ee50 + 0x9756
                ,0x8dd);
  (*_DAT_182275a18)();
  return;
}



// ===== continuation @ rva d70fcda (image 18d70fcda) =====

void FUN_18d70fcda(void)

{
  return;
}



// ===== continuation @ rva d70c344 (image 18d70c344) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70c344(void)

{
  FUN_190ddce00();
  (*_DAT_182278bc8)();
  return;
}



// ===== continuation @ rva d70fe2c (image 18d70fe2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70fe2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182278ce8)();
  return;
}



// ===== continuation @ rva d70fd88 (image 18d70fd88) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d70fd88(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d70c3bc (image 18d70c3bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70c3bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_182278c58)();
  return;
}



// ===== continuation @ rva d70f8f0 (image 18d70f8f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70f8f0(void)

{
  (*_DAT_182278c38)();
  return;
}



// ===== continuation @ rva d70fe87 (image 18d70fe87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70fe87(void)

{
  (*_DAT_182278da8)();
  return;
}



// ===== continuation @ rva d70ff87 (image 18d70ff87) =====

void FUN_18d70ff87(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d70ff64 (image 18d70ff64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70ff64(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_1822789e8)();
    return;
  }
  (*_DAT_1822789e8)();
  return;
}



// ===== continuation @ rva d70f88a (image 18d70f88a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d70f88a(void)

{
  (*_DAT_182278c38)();
  return;
}



// ===== continuation @ rva d70f806 (image 18d70f806) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d70f806(void)

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



// ===== continuation @ rva d72eff1 (image 18d72eff1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d72eff1(void)

{
  FUN_190dd72e0();
  (*_DAT_18227d798)();
  return;
}



// ===== continuation @ rva d72ef73 (image 18d72ef73) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d72ef73(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18227d718)();
  return;
}



// ===== continuation @ rva d72f310 (image 18d72f310) =====

void FUN_18d72f310(void)

{
  return;
}



// ===== continuation @ rva d72f272 (image 18d72f272) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d72f272(void)

{
  FUN_190de3220();
  (*_DAT_18227d738)();
  return;
}



// ===== continuation @ rva d72f308 (image 18d72f308) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d72f308(void)

{
  (*_DAT_18227d758)();
  return;
}



// ===== continuation @ rva d72f0ae (image 18d72f0ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d72f0ae(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d72f1e4 (image 18d72f1e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d72f1e4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_18227d648)();
  return;
}



// ===== continuation @ rva d72f102 (image 18d72f102) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d72f102(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d72f208 (image 18d72f208) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d72f208(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d72efdc (image 18d72efdc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d72efdc(void)

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



// ===== continuation @ rva d72efb7 (image 18d72efb7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d72efb7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18227d658)();
  return;
}



// ===== continuation @ rva d72f229 (image 18d72f229) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d72f229(void)

{
  FUN_190dd72e0();
  (*_DAT_18227d698)();
  return;
}



// ===== continuation @ rva d72f529 (image 18d72f529) =====

void FUN_18d72f529(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00018d72f55e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18227d990 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva d72f4d6 (image 18d72f4d6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d72f50c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d72f4d6(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d744c2e (image 18d744c2e) =====

void FUN_18d744c2e(void)

{
  return;
}



// ===== continuation @ rva d744bd3 (image 18d744bd3) =====

undefined8 FUN_18d744bd3(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  return 0;
}



// ===== continuation @ rva d744d82 (image 18d744d82) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d744d82(longlong param_1)

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



// ===== continuation @ rva d739eb8 (image 18d739eb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d739eb8(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  int unaff_R12D;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x588))();
  *(undefined8 *)(unaff_RBP + -0x10) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x90) = uVar1;
  *(undefined4 *)(unaff_RBP + 0x90) = 0;
  *(int *)(unaff_RBP + 0x98) = unaff_R12D;
  switch(0 < unaff_R12D) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d72f561 (image 18d72f561) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d72f5a6 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d72f561(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x48) = uVar1;
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d73afd8 (image 18d73afd8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d73afd8(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  ulonglong uVar4;
  undefined4 unaff_R14D;
  uint uVar5;
  longlong *unaff_R15;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  ulonglong unaff_XMM14_Qa;
  ulonglong unaff_XMM14_Qb;
  
  *(undefined4 *)(unaff_RBP + 0x20) = unaff_R14D;
  *(undefined4 *)(unaff_RBP + 0x60) = unaff_ESI;
  lVar2 = (**(code **)(*unaff_R15 + 0x6f0))();
  *(int *)(unaff_RBP + 0x98) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0xa0));
  (**(code **)(*unaff_R15 + 0x6f8))();
  uVar5 = *(uint *)(unaff_RBP + 0x90);
  uVar1 = *(uint *)(unaff_RBP + 0x98);
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar1 ^ 0x84222325;
  auVar6._8_4_ = uVar5;
  auVar6._12_4_ = 0;
  auVar7 = pshufb(auVar6 ^ _DAT_18227e1c0,_DAT_1800170c0);
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar4 + _DAT_183363e08;
  if (auVar7._4_4_ < 0) {
    uVar3 = _DAT_183363fa8 ^ uVar4;
  }
  _DAT_183363e60 = func_0x00018d758e90(SUB161(auVar6 ^ _DAT_18227e1c0,5) ^ uVar3);
  uVar5 = uVar5 & uVar1;
  _DAT_183364130 = (ulonglong)uVar5;
  _DAT_183364138 =
       (_DAT_183364138 ^ _DAT_183363e60 & 0xfffffffffffffe00) + _DAT_183364130 ^ 0x79dfd920ae20a238;
  _DAT_183363fd8 =
       (_DAT_183363fd8 * 0x7faf4492b3b34ac3 ^ _DAT_183364138) +
       (_DAT_183363e60 & 0xfffffffffffffe00);
  _DAT_1833644c8 = _DAT_183363fd8 ^ _DAT_183364138;
  *(uint *)(unaff_RBP + 0x90) = uVar5;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(int *)(unaff_RBP + 0x80) = (int)*(undefined8 *)(unaff_RBP + 0x90);
  uVar3 = (~_DAT_183364458 + 0x4b5091f5) *
          ((_DAT_183364280 ^ 0x62cfbc69) + (ulonglong)((uint)_DAT_183364280 & 0x62cfbc69) * 2);
  uVar3 = (uVar3 | _DAT_183363fb0) + (uVar3 & _DAT_183363fb0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833642c8 = func_0x00018d758e90((uVar3 | 0x299f2d9d) + (ulonglong)((uint)uVar3 & 0x299f2d9d))
  ;
  uVar3 = _DAT_1833642c8 >> 1 | _DAT_1833642c8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1833642c8;
  _DAT_1833640c0 = (_DAT_1833640c0 ^ uVar3) + 0xeffd9ffc ^ 0xa9b826de5bffdf87;
  _DAT_1833640b0 = (_DAT_1833640b0 * -0x7a8304b7859c1e1d ^ _DAT_1833640c0) + uVar3;
  _DAT_183364118 = _DAT_1833640b0 ^ _DAT_1833640c0;
  _DAT_183364130 = 0xeffd9ffc;
  uVar3 = (_DAT_183363d70 ^ _DAT_18227e1d0) + _DAT_183363d10 + 0x84222325;
  uVar4 = (_DAT_183363d10 ^ _UNK_18227e1d8) + _DAT_183363d70 + 0xbb244f20;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363d70 ^ _DAT_18227e1d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363d10 ^ _UNK_18227e1d8;
  _DAT_183364008 =
       func_0x00018d758e90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183363d70 + 0xbb244f20) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363d10 + 0x84222325));
  uVar3 = _DAT_183364008 & 0x7fffffffffffffff ^ 0xbb244f20;
  _DAT_1833641e8 = (_DAT_1833641e8 ^ uVar3) - 0xbb244f20 ^ 0x476e16f0c4f01f88;
  _DAT_183363e28 = (_DAT_183363e28 * 0x30458ac57485567 ^ _DAT_1833641e8) + uVar3;
  _DAT_183364018 = _DAT_183363e28 ^ _DAT_1833641e8;
  _DAT_183363ee8 = 0x44dbb0e0;
  _DAT_1833641d0 = func_0x00018d758e90(_DAT_183363d88 ^ 0x6c00336600056f);
  uVar3 = (ulonglong)(~(uint)_DAT_1833641d0 & 0xbf);
  _DAT_183364418 = _DAT_183363e38 ^ uVar3 ^ 0xbb244fdf;
  _DAT_183364410 = (_DAT_183364410 ^ uVar3) + 0xbb244fdf ^ 0x187355871be64ae5;
  _DAT_183364330 = (_DAT_183364330 * -0x50d1fd7f6737f3a1 ^ _DAT_183364410) + uVar3;
  _DAT_1833642d8 = _DAT_183364330 ^ _DAT_183364410;
  _DAT_183364380 = 0xbb244fdf;
  _DAT_183364068 = func_0x00018d758e90(_DAT_183364110 + 0xff34006b0a003cffU ^ 0xae);
  uVar3 = _DAT_183364068 ^ 0x32563e94fd507cff;
  _DAT_183364098 = _DAT_1833640b8 ^ uVar3 ^ 0x1000000bf;
  _DAT_183364480 = (_DAT_183364480 ^ uVar3) + 0x1000000bf ^ 0xc940deccba2b2fca;
  _DAT_183363d90 = (_DAT_183363d90 * 0x425f245f4e0fbf43 ^ _DAT_183364480) + uVar3;
  _DAT_183364228 = _DAT_183363d90 ^ _DAT_183364480;
  _DAT_183364320 = 0xbf;
  uVar3 = (_DAT_183364390 ^ _DAT_18227e1e0) + _DAT_183364450 + 0x84222325;
  uVar4 = (_DAT_183364450 ^ _UNK_18227e1e8) + _DAT_183364390 + 0x6d10c07;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183364390 ^ _DAT_18227e1e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183364450 ^ _UNK_18227e1e8;
  _DAT_1833644d8 =
       func_0x00018d758e90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183364390 + 0x6d10c07) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183364450 + 0x84222325));
  _DAT_183363e40 = (_DAT_183363e40 ^ _DAT_1833644d8) - 0x6d10c07 ^ 0xde0dbc17b8ef7afd;
  _DAT_1833642c8 = (_DAT_1833642c8 * 0x3bfdba2c564e8019 ^ _DAT_183363e40) + _DAT_1833644d8;
  _DAT_183364440 = _DAT_1833642c8 ^ _DAT_183363e40;
  _DAT_1833641c8 = 0xf92ef3f9;
  uVar3 = (_DAT_183364248 ^ _DAT_18227e1f0) + _DAT_183363d80 + 0x8422239a;
  uVar4 = (_DAT_183363d80 ^ _UNK_18227e1f8) + _DAT_183364248 + 0x6d10c07;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183364248 ^ _DAT_18227e1f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363d80 ^ _UNK_18227e1f8;
  _DAT_183363e90 =
       func_0x00018d758e90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183364248 + 0x6d10c07) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363d80 + 0x8422239a));
  uVar3 = _DAT_183363e90 ^ 0x6d10cbf;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  uVar4 = uVar3 & 0x7fffffffffffff;
  uVar3 = (uVar3 & 0x7fffffffffffff) >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4;
  _DAT_183363e10 = _DAT_183363f80 ^ uVar4 ^ 0x6d10cc6;
  _DAT_183363f30 = (_DAT_183363f30 ^ uVar4) + 0x6d10cc6 ^ 0x5b2c264533576494;
  _DAT_183364378 = (_DAT_183364378 * 0x65d72cc6c628c69d ^ _DAT_183363f30) + uVar4;
  _DAT_183363eb8 = _DAT_183364378 ^ _DAT_183363f30;
  _DAT_183364240 = 0x6d10cc6;
  uVar3 = (_DAT_183363d20 ^ _DAT_18227e200) + _DAT_183363e38 + 0x84222325;
  uVar4 = (_DAT_183363e38 ^ _UNK_18227e208) + _DAT_183363d20 + 0x78f33174;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363d20 ^ _DAT_18227e200;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363e38 ^ _UNK_18227e208;
  _DAT_183364060 =
       func_0x00018d758e90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183363d20 + 0x78f33174) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363e38 + 0x84222325));
  uVar3 = (_DAT_183364060 ^ 0x78f33174) & 0x7fffffffffffffff;
  _DAT_183363e18 = (_DAT_183363e18 ^ uVar3) - 0x78f33174 ^ 0x2d6300fcf517f812;
  _DAT_183363f58 = (_DAT_183363f58 * -0x5274d8edbae53b6d ^ _DAT_183363e18) + uVar3;
  _DAT_183364438 = _DAT_183363f58 ^ _DAT_183363e18;
  _DAT_1833640a0 = 0x870cce8c;
  uVar3 = (~_DAT_1833641b0 + 0x78f33175) *
          ((_DAT_183363df0 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183363df0 & 0x8422239a) * 2);
  uVar3 = (uVar3 | _DAT_183363de0) + (uVar3 & _DAT_183363de0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833640c8 = func_0x00018d758e90((uVar3 | 0xfcd112ee) + (ulonglong)((uint)uVar3 & 0xfcd112ee))
  ;
  uVar3 = _DAT_1833640c8 ^ 0x5a3d71e58c;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3 ^
          0xbf;
  _DAT_1833644f0 = _DAT_183364020 ^ uVar3 ^ 0x78f33233;
  _DAT_183364408 = (_DAT_183364408 ^ uVar3) + 0x78f33233 ^ 0xb67a7311d8c20c77;
  _DAT_183363d48 = (_DAT_183363d48 * 0x6c203ee1944043af ^ _DAT_183364408) + uVar3;
  _DAT_183363ef8 = _DAT_183363d48 ^ _DAT_183364408;
  _DAT_183363dc8 = 0x78f33233;
  uVar3 = (_DAT_183363fc0 ^ _DAT_18227e210) + _DAT_183364270 + 0xfcd11116;
  uVar4 = (_DAT_183364270 ^ _UNK_18227e218) + _DAT_183363fc0 + 0x870cce8c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363fc0 ^ _DAT_18227e210;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183364270 ^ _UNK_18227e218;
  _DAT_183363d30 =
       func_0x00018d758e90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183363fc0 + 0x870cce8c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183364270 + 0xfcd11116));
  uVar3 = _DAT_183363d30 >> 1 | _DAT_183363d30;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183363d30;
  _DAT_183364070 = _DAT_183363f28 ^ uVar3 ^ 0x1000000bf;
  _DAT_183364100 = (_DAT_183364100 ^ uVar3) + 0x1000000bf ^ 0x6230d068a7746078;
  _DAT_183364350 = (_DAT_183364350 * -0x57387e995482ee0b ^ _DAT_183364100) + uVar3;
  _DAT_183363f68 = _DAT_183364350 ^ _DAT_183364100;
  _DAT_1833643e8 = 0xbf;
  _DAT_183364308 = func_0x00018d758e90(_DAT_1833640b8 + 0xdff4a730066ff ^ 0x66);
  uVar3 = _DAT_183364308 & 0x1ffffffffff;
  _DAT_183363da8 = _DAT_183363f98 ^ uVar3 ^ 0x1ae75e228;
  _DAT_183364260 = (_DAT_183364260 ^ uVar3) + 0x1ae75e228 ^ 0x382c0712a6257d0;
  _DAT_183364480 = (_DAT_183364480 * -0x61ced4164ff238f ^ _DAT_183364260) + uVar3;
  _DAT_1833641f0 = _DAT_183364480 ^ _DAT_183364260;
  _DAT_183364288 = 0xae75e228;
  uVar3 = (_DAT_183363f60 ^ unaff_XMM9_Qa) + _DAT_183363f28 + 0x6bdfbcd9;
  uVar4 = (_DAT_183363f28 ^ unaff_XMM9_Qb) + _DAT_183363f60 + 0xbe78422c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363f60 ^ unaff_XMM9_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363f28 ^ unaff_XMM9_Qb;
  _DAT_183363e78 =
       func_0x00018d758e90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183363f60 + 0xbe78422c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363f28 + 0x6bdfbcd9));
  _DAT_1833643d8 =
       (_DAT_1833643d8 ^ _DAT_183363e78 * 0x688ed933d2409a2b) + 0x5185ddd0 ^ 0xc9cc6bcb211278a;
  _DAT_183364430 =
       (_DAT_183364430 * 0x738e51d15a7755a3 ^ _DAT_1833643d8) + _DAT_183363e78 * 0x688ed933d2409a2b;
  _DAT_183363e58 = _DAT_183364430 ^ _DAT_1833643d8;
  _DAT_183364090 = 0x5185ddd0;
  uVar3 = (_DAT_1833644a8 ^ unaff_XMM9_Qa) + _DAT_1833644a0 + 0x6bdfbcd9;
  uVar4 = (_DAT_1833644a0 ^ unaff_XMM9_Qb) + _DAT_1833644a8 + 0xbe78422c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833644a8 ^ unaff_XMM9_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833644a0 ^ unaff_XMM9_Qb;
  _DAT_183364300 =
       func_0x00018d758e90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833644a8 + 0xbe78422c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833644a0 + 0x6bdfbcd9));
  _DAT_183364068 = (_DAT_183364068 ^ _DAT_183364300 ^ 0xeffd9ffc) + 0xae78022c ^ 0x230a32ba2900e451;
  _DAT_183363ec0 =
       (_DAT_183363ec0 * -0x739d13d6ef81c929 ^ _DAT_183364068) + (_DAT_183364300 ^ 0xeffd9ffc);
  _DAT_183363f00 = _DAT_183363ec0 ^ _DAT_183364068;
  _DAT_183364408 = 0xae78022c;
  uVar3 = (~_DAT_183364198 + 0x5cf00459) *
          ((_DAT_1833644e8 ^ 0xd5a7fef5) + (ulonglong)((uint)_DAT_1833644e8 & 0xd5a7fef5) * 2);
  uVar3 = (uVar3 | _DAT_183363f50) + (uVar3 & _DAT_183363f50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183364158 = func_0x00018d758e90((uVar3 | 0x8957faad) + (ulonglong)((uint)uVar3 & 0x8957faad))
  ;
  _DAT_183364060 = _DAT_1833641c8 ^ _DAT_183364158 ^ 0xae75e228;
  _DAT_183364168 = (_DAT_183364168 ^ _DAT_183364158) + 0xae75e228 ^ 0x2e1ac6c2e2f3e738;
  _DAT_183364200 = (_DAT_183364200 * -0x25bebf7b749748ed ^ _DAT_183364168) + _DAT_183364158;
  _DAT_183364420 = _DAT_183364200 ^ _DAT_183364168;
  _DAT_183363db0 = 0xae75e228;
  uVar3 = (_DAT_183364348 ^ unaff_XMM14_Qa) + _DAT_183363d80 + 0x2a57c10d;
  uVar4 = (_DAT_183363d80 ^ unaff_XMM14_Qb) + _DAT_183364348 + 0xae75e228;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183364348 ^ unaff_XMM14_Qa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363d80 ^ unaff_XMM14_Qb;
  _DAT_183364290 =
       func_0x00018d758e90((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183364348 + 0xae75e228) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363d80 + 0x2a57c10d));
  _DAT_183363de0 = _DAT_183364290 & 0xfffffffff0000000;
  _DAT_183363e58 = _DAT_183363e58 ^ _DAT_183363de0 ^ 0xa63a7777590b34;
  _DAT_1833643e0 = (_DAT_1833643e0 * 0x68790e1c16da319 ^ _DAT_183363e58) + _DAT_183363de0;
  _DAT_183363eb8 = _DAT_1833643e0 ^ _DAT_183363e58;
  _DAT_183364238 = 0;
  uVar3 = ((_DAT_183364048 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183364048 & 0x8422239a) * 2) *
          -_DAT_183364200;
  uVar3 = (uVar3 | _DAT_1833641b8) + (uVar3 & _DAT_1833641b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183364120 = func_0x00018d758e90((uVar3 | 0x8422239a) + (ulonglong)((uint)uVar3 & 0x8422239a))
  ;
  _DAT_183364288 = _DAT_183363dd0 ^ _DAT_183363fe0 ^ 0xbf;
  _DAT_1833643d8 = (_DAT_1833643d8 ^ _DAT_183363fe0) + 0xbf ^ 0xc65ca22019a8076c;
  _DAT_183363fd8 = (_DAT_183363fd8 * 0x389e85f8dd7e5f4b ^ _DAT_1833643d8) + _DAT_183363fe0;
  _DAT_183363dc0 = _DAT_183363fd8 ^ _DAT_1833643d8;
  _DAT_183363ea8 = 0xbf;
  _DAT_183364068 = func_0x00018d758e90(_DAT_183363df0 ^ 0x2c0074c5ffb296);
  uVar3 = _DAT_183364068 - (_DAT_183364068 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183364068;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar4;
  _DAT_183364370 = _DAT_183364370 ^ uVar4 ^ 0xd942ecf2138d77ee;
  _DAT_183364310 = (_DAT_183364310 * -0x360559c2d0f6315 ^ _DAT_183364370) + uVar4;
  _DAT_1833641d0 = _DAT_183364310 ^ _DAT_183364370;
  _DAT_183364480 = 0;
  uVar3 = ((_DAT_183363d10 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183363d10 & 0x8422239a) * 2) *
          -_DAT_183364008;
  uVar3 = (uVar3 | _DAT_1833642c8) + (uVar3 & _DAT_1833642c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833644a8 = func_0x00018d758e90((uVar3 | 0x8422239a) + (ulonglong)((uint)uVar3 & 0x8422239a))
  ;
  uVar3 = _DAT_1833644a8 << 5 | _DAT_1833644a8 >> 0x3b;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  _DAT_183364018 = _DAT_183364090 ^ uVar3 ^ 0xbf;
  _DAT_1833643a8 = (_DAT_1833643a8 ^ uVar3) + 0xbf ^ 0xcddfacc7980d166c;
  _DAT_183363f10 = (_DAT_183363f10 * 0x3b32954b5dd29d0b ^ _DAT_1833643a8) + uVar3;
  _DAT_1833640d0 = _DAT_183363f10 ^ _DAT_1833643a8;
  _DAT_183364390 = 0xbf;
  _DAT_183363d78 = func_0x00018d758e90(_DAT_183363d80 + 0xffdeff7bdb0021ff ^ 0x3a);
  uVar3 = (_DAT_183363d78 ^ 0xe6ed9f4c) << 0x34 |
          ((_DAT_183363d78 ^ 0xe6ed9f4c) & 0x7ffffffffffff) >> 0xc;
  _DAT_183364018 = _DAT_183364018 ^ uVar3 ^ 0x923183ba52775282;
  _DAT_183363ed0 = (_DAT_183363ed0 * -0x1ecfce52433a3527 ^ _DAT_183364018) + uVar3;
  _DAT_183363ec8 = _DAT_183363ed0 ^ _DAT_183364018;
  _DAT_183363d90 = 0;
  switch(0xbf < (int)uVar5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d744935 (image 18d744935) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d744973 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d744935(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d73affc (image 18d73affc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d73affc(undefined4 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  uint uVar4;
  longlong *unaff_R15;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  ulonglong unaff_XMM14_Qa;
  ulonglong unaff_XMM14_Qb;
  
  *(undefined4 *)(unaff_RBP + 0x98) = param_1;
  (**(code **)(*unaff_R15 + 0x6f8))();
  uVar4 = *(uint *)(unaff_RBP + 0x90);
  uVar1 = *(uint *)(unaff_RBP + 0x98);
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar1 ^ 0x84222325;
  auVar5._8_4_ = uVar4;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ _DAT_18227e1c0,_DAT_1800170c0);
  uVar3 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar3 + _DAT_183363e08;
  if (auVar6._4_4_ < 0) {
    uVar2 = _DAT_183363fa8 ^ uVar3;
  }
  _DAT_183363e60 = func_0x00018d758e90(SUB161(auVar5 ^ _DAT_18227e1c0,5) ^ uVar2);
  uVar4 = uVar4 & uVar1;
  _DAT_183364130 = (ulonglong)uVar4;
  _DAT_183364138 =
       (_DAT_183364138 ^ _DAT_183363e60 & 0xfffffffffffffe00) + _DAT_183364130 ^ 0x79dfd920ae20a238;
  _DAT_183363fd8 =
       (_DAT_183363fd8 * 0x7faf4492b3b34ac3 ^ _DAT_183364138) +
       (_DAT_183363e60 & 0xfffffffffffffe00);
  _DAT_1833644c8 = _DAT_183363fd8 ^ _DAT_183364138;
  *(uint *)(unaff_RBP + 0x90) = uVar4;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(int *)(unaff_RBP + 0x80) = (int)*(undefined8 *)(unaff_RBP + 0x90);
  uVar2 = (~_DAT_183364458 + 0x4b5091f5) *
          ((_DAT_183364280 ^ 0x62cfbc69) + (ulonglong)((uint)_DAT_183364280 & 0x62cfbc69) * 2);
  uVar2 = (uVar2 | _DAT_183363fb0) + (uVar2 & _DAT_183363fb0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833642c8 = func_0x00018d758e90((uVar2 | 0x299f2d9d) + (ulonglong)((uint)uVar2 & 0x299f2d9d))
  ;
  uVar2 = _DAT_1833642c8 >> 1 | _DAT_1833642c8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1833642c8;
  _DAT_1833640c0 = (_DAT_1833640c0 ^ uVar2) + 0xeffd9ffc ^ 0xa9b826de5bffdf87;
  _DAT_1833640b0 = (_DAT_1833640b0 * -0x7a8304b7859c1e1d ^ _DAT_1833640c0) + uVar2;
  _DAT_183364118 = _DAT_1833640b0 ^ _DAT_1833640c0;
  _DAT_183364130 = 0xeffd9ffc;
  uVar2 = (_DAT_183363d70 ^ _DAT_18227e1d0) + _DAT_183363d10 + 0x84222325;
  uVar3 = (_DAT_183363d10 ^ _UNK_18227e1d8) + _DAT_183363d70 + 0xbb244f20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183363d70 ^ _DAT_18227e1d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363d10 ^ _UNK_18227e1d8;
  _DAT_183364008 =
       func_0x00018d758e90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363d70 + 0xbb244f20) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363d10 + 0x84222325));
  uVar2 = _DAT_183364008 & 0x7fffffffffffffff ^ 0xbb244f20;
  _DAT_1833641e8 = (_DAT_1833641e8 ^ uVar2) - 0xbb244f20 ^ 0x476e16f0c4f01f88;
  _DAT_183363e28 = (_DAT_183363e28 * 0x30458ac57485567 ^ _DAT_1833641e8) + uVar2;
  _DAT_183364018 = _DAT_183363e28 ^ _DAT_1833641e8;
  _DAT_183363ee8 = 0x44dbb0e0;
  _DAT_1833641d0 = func_0x00018d758e90(_DAT_183363d88 ^ 0x6c00336600056f);
  uVar2 = (ulonglong)(~(uint)_DAT_1833641d0 & 0xbf);
  _DAT_183364418 = _DAT_183363e38 ^ uVar2 ^ 0xbb244fdf;
  _DAT_183364410 = (_DAT_183364410 ^ uVar2) + 0xbb244fdf ^ 0x187355871be64ae5;
  _DAT_183364330 = (_DAT_183364330 * -0x50d1fd7f6737f3a1 ^ _DAT_183364410) + uVar2;
  _DAT_1833642d8 = _DAT_183364330 ^ _DAT_183364410;
  _DAT_183364380 = 0xbb244fdf;
  _DAT_183364068 = func_0x00018d758e90(_DAT_183364110 + 0xff34006b0a003cffU ^ 0xae);
  uVar2 = _DAT_183364068 ^ 0x32563e94fd507cff;
  _DAT_183364098 = _DAT_1833640b8 ^ uVar2 ^ 0x1000000bf;
  _DAT_183364480 = (_DAT_183364480 ^ uVar2) + 0x1000000bf ^ 0xc940deccba2b2fca;
  _DAT_183363d90 = (_DAT_183363d90 * 0x425f245f4e0fbf43 ^ _DAT_183364480) + uVar2;
  _DAT_183364228 = _DAT_183363d90 ^ _DAT_183364480;
  _DAT_183364320 = 0xbf;
  uVar2 = (_DAT_183364390 ^ _DAT_18227e1e0) + _DAT_183364450 + 0x84222325;
  uVar3 = (_DAT_183364450 ^ _UNK_18227e1e8) + _DAT_183364390 + 0x6d10c07;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183364390 ^ _DAT_18227e1e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183364450 ^ _UNK_18227e1e8;
  _DAT_1833644d8 =
       func_0x00018d758e90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183364390 + 0x6d10c07) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183364450 + 0x84222325));
  _DAT_183363e40 = (_DAT_183363e40 ^ _DAT_1833644d8) - 0x6d10c07 ^ 0xde0dbc17b8ef7afd;
  _DAT_1833642c8 = (_DAT_1833642c8 * 0x3bfdba2c564e8019 ^ _DAT_183363e40) + _DAT_1833644d8;
  _DAT_183364440 = _DAT_1833642c8 ^ _DAT_183363e40;
  _DAT_1833641c8 = 0xf92ef3f9;
  uVar2 = (_DAT_183364248 ^ _DAT_18227e1f0) + _DAT_183363d80 + 0x8422239a;
  uVar3 = (_DAT_183363d80 ^ _UNK_18227e1f8) + _DAT_183364248 + 0x6d10c07;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183364248 ^ _DAT_18227e1f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363d80 ^ _UNK_18227e1f8;
  _DAT_183363e90 =
       func_0x00018d758e90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183364248 + 0x6d10c07) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363d80 + 0x8422239a));
  uVar2 = _DAT_183363e90 ^ 0x6d10cbf;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar2;
  uVar3 = uVar2 & 0x7fffffffffffff;
  uVar2 = (uVar2 & 0x7fffffffffffff) >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  _DAT_183363e10 = _DAT_183363f80 ^ uVar3 ^ 0x6d10cc6;
  _DAT_183363f30 = (_DAT_183363f30 ^ uVar3) + 0x6d10cc6 ^ 0x5b2c264533576494;
  _DAT_183364378 = (_DAT_183364378 * 0x65d72cc6c628c69d ^ _DAT_183363f30) + uVar3;
  _DAT_183363eb8 = _DAT_183364378 ^ _DAT_183363f30;
  _DAT_183364240 = 0x6d10cc6;
  uVar2 = (_DAT_183363d20 ^ _DAT_18227e200) + _DAT_183363e38 + 0x84222325;
  uVar3 = (_DAT_183363e38 ^ _UNK_18227e208) + _DAT_183363d20 + 0x78f33174;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183363d20 ^ _DAT_18227e200;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363e38 ^ _UNK_18227e208;
  _DAT_183364060 =
       func_0x00018d758e90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363d20 + 0x78f33174) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363e38 + 0x84222325));
  uVar2 = (_DAT_183364060 ^ 0x78f33174) & 0x7fffffffffffffff;
  _DAT_183363e18 = (_DAT_183363e18 ^ uVar2) - 0x78f33174 ^ 0x2d6300fcf517f812;
  _DAT_183363f58 = (_DAT_183363f58 * -0x5274d8edbae53b6d ^ _DAT_183363e18) + uVar2;
  _DAT_183364438 = _DAT_183363f58 ^ _DAT_183363e18;
  _DAT_1833640a0 = 0x870cce8c;
  uVar2 = (~_DAT_1833641b0 + 0x78f33175) *
          ((_DAT_183363df0 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183363df0 & 0x8422239a) * 2);
  uVar2 = (uVar2 | _DAT_183363de0) + (uVar2 & _DAT_183363de0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833640c8 = func_0x00018d758e90((uVar2 | 0xfcd112ee) + (ulonglong)((uint)uVar2 & 0xfcd112ee))
  ;
  uVar2 = _DAT_1833640c8 ^ 0x5a3d71e58c;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2 ^
          0xbf;
  _DAT_1833644f0 = _DAT_183364020 ^ uVar2 ^ 0x78f33233;
  _DAT_183364408 = (_DAT_183364408 ^ uVar2) + 0x78f33233 ^ 0xb67a7311d8c20c77;
  _DAT_183363d48 = (_DAT_183363d48 * 0x6c203ee1944043af ^ _DAT_183364408) + uVar2;
  _DAT_183363ef8 = _DAT_183363d48 ^ _DAT_183364408;
  _DAT_183363dc8 = 0x78f33233;
  uVar2 = (_DAT_183363fc0 ^ _DAT_18227e210) + _DAT_183364270 + 0xfcd11116;
  uVar3 = (_DAT_183364270 ^ _UNK_18227e218) + _DAT_183363fc0 + 0x870cce8c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183363fc0 ^ _DAT_18227e210;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183364270 ^ _UNK_18227e218;
  _DAT_183363d30 =
       func_0x00018d758e90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363fc0 + 0x870cce8c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183364270 + 0xfcd11116));
  uVar2 = _DAT_183363d30 >> 1 | _DAT_183363d30;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183363d30;
  _DAT_183364070 = _DAT_183363f28 ^ uVar2 ^ 0x1000000bf;
  _DAT_183364100 = (_DAT_183364100 ^ uVar2) + 0x1000000bf ^ 0x6230d068a7746078;
  _DAT_183364350 = (_DAT_183364350 * -0x57387e995482ee0b ^ _DAT_183364100) + uVar2;
  _DAT_183363f68 = _DAT_183364350 ^ _DAT_183364100;
  _DAT_1833643e8 = 0xbf;
  _DAT_183364308 = func_0x00018d758e90(_DAT_1833640b8 + 0xdff4a730066ff ^ 0x66);
  uVar2 = _DAT_183364308 & 0x1ffffffffff;
  _DAT_183363da8 = _DAT_183363f98 ^ uVar2 ^ 0x1ae75e228;
  _DAT_183364260 = (_DAT_183364260 ^ uVar2) + 0x1ae75e228 ^ 0x382c0712a6257d0;
  _DAT_183364480 = (_DAT_183364480 * -0x61ced4164ff238f ^ _DAT_183364260) + uVar2;
  _DAT_1833641f0 = _DAT_183364480 ^ _DAT_183364260;
  _DAT_183364288 = 0xae75e228;
  uVar2 = (_DAT_183363f60 ^ unaff_XMM9_Qa) + _DAT_183363f28 + 0x6bdfbcd9;
  uVar3 = (_DAT_183363f28 ^ unaff_XMM9_Qb) + _DAT_183363f60 + 0xbe78422c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183363f60 ^ unaff_XMM9_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363f28 ^ unaff_XMM9_Qb;
  _DAT_183363e78 =
       func_0x00018d758e90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183363f60 + 0xbe78422c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363f28 + 0x6bdfbcd9));
  _DAT_1833643d8 =
       (_DAT_1833643d8 ^ _DAT_183363e78 * 0x688ed933d2409a2b) + 0x5185ddd0 ^ 0xc9cc6bcb211278a;
  _DAT_183364430 =
       (_DAT_183364430 * 0x738e51d15a7755a3 ^ _DAT_1833643d8) + _DAT_183363e78 * 0x688ed933d2409a2b;
  _DAT_183363e58 = _DAT_183364430 ^ _DAT_1833643d8;
  _DAT_183364090 = 0x5185ddd0;
  uVar2 = (_DAT_1833644a8 ^ unaff_XMM9_Qa) + _DAT_1833644a0 + 0x6bdfbcd9;
  uVar3 = (_DAT_1833644a0 ^ unaff_XMM9_Qb) + _DAT_1833644a8 + 0xbe78422c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833644a8 ^ unaff_XMM9_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833644a0 ^ unaff_XMM9_Qb;
  _DAT_183364300 =
       func_0x00018d758e90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833644a8 + 0xbe78422c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833644a0 + 0x6bdfbcd9));
  _DAT_183364068 = (_DAT_183364068 ^ _DAT_183364300 ^ 0xeffd9ffc) + 0xae78022c ^ 0x230a32ba2900e451;
  _DAT_183363ec0 =
       (_DAT_183363ec0 * -0x739d13d6ef81c929 ^ _DAT_183364068) + (_DAT_183364300 ^ 0xeffd9ffc);
  _DAT_183363f00 = _DAT_183363ec0 ^ _DAT_183364068;
  _DAT_183364408 = 0xae78022c;
  uVar2 = (~_DAT_183364198 + 0x5cf00459) *
          ((_DAT_1833644e8 ^ 0xd5a7fef5) + (ulonglong)((uint)_DAT_1833644e8 & 0xd5a7fef5) * 2);
  uVar2 = (uVar2 | _DAT_183363f50) + (uVar2 & _DAT_183363f50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183364158 = func_0x00018d758e90((uVar2 | 0x8957faad) + (ulonglong)((uint)uVar2 & 0x8957faad))
  ;
  _DAT_183364060 = _DAT_1833641c8 ^ _DAT_183364158 ^ 0xae75e228;
  _DAT_183364168 = (_DAT_183364168 ^ _DAT_183364158) + 0xae75e228 ^ 0x2e1ac6c2e2f3e738;
  _DAT_183364200 = (_DAT_183364200 * -0x25bebf7b749748ed ^ _DAT_183364168) + _DAT_183364158;
  _DAT_183364420 = _DAT_183364200 ^ _DAT_183364168;
  _DAT_183363db0 = 0xae75e228;
  uVar2 = (_DAT_183364348 ^ unaff_XMM14_Qa) + _DAT_183363d80 + 0x2a57c10d;
  uVar3 = (_DAT_183363d80 ^ unaff_XMM14_Qb) + _DAT_183364348 + 0xae75e228;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183364348 ^ unaff_XMM14_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183363d80 ^ unaff_XMM14_Qb;
  _DAT_183364290 =
       func_0x00018d758e90((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183364348 + 0xae75e228) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183363d80 + 0x2a57c10d));
  _DAT_183363de0 = _DAT_183364290 & 0xfffffffff0000000;
  _DAT_183363e58 = _DAT_183363e58 ^ _DAT_183363de0 ^ 0xa63a7777590b34;
  _DAT_1833643e0 = (_DAT_1833643e0 * 0x68790e1c16da319 ^ _DAT_183363e58) + _DAT_183363de0;
  _DAT_183363eb8 = _DAT_1833643e0 ^ _DAT_183363e58;
  _DAT_183364238 = 0;
  uVar2 = ((_DAT_183364048 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183364048 & 0x8422239a) * 2) *
          -_DAT_183364200;
  uVar2 = (uVar2 | _DAT_1833641b8) + (uVar2 & _DAT_1833641b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183364120 = func_0x00018d758e90((uVar2 | 0x8422239a) + (ulonglong)((uint)uVar2 & 0x8422239a))
  ;
  _DAT_183364288 = _DAT_183363dd0 ^ _DAT_183363fe0 ^ 0xbf;
  _DAT_1833643d8 = (_DAT_1833643d8 ^ _DAT_183363fe0) + 0xbf ^ 0xc65ca22019a8076c;
  _DAT_183363fd8 = (_DAT_183363fd8 * 0x389e85f8dd7e5f4b ^ _DAT_1833643d8) + _DAT_183363fe0;
  _DAT_183363dc0 = _DAT_183363fd8 ^ _DAT_1833643d8;
  _DAT_183363ea8 = 0xbf;
  _DAT_183364068 = func_0x00018d758e90(_DAT_183363df0 ^ 0x2c0074c5ffb296);
  uVar2 = _DAT_183364068 - (_DAT_183364068 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183364068;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar3;
  _DAT_183364370 = _DAT_183364370 ^ uVar3 ^ 0xd942ecf2138d77ee;
  _DAT_183364310 = (_DAT_183364310 * -0x360559c2d0f6315 ^ _DAT_183364370) + uVar3;
  _DAT_1833641d0 = _DAT_183364310 ^ _DAT_183364370;
  _DAT_183364480 = 0;
  uVar2 = ((_DAT_183363d10 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183363d10 & 0x8422239a) * 2) *
          -_DAT_183364008;
  uVar2 = (uVar2 | _DAT_1833642c8) + (uVar2 & _DAT_1833642c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833644a8 = func_0x00018d758e90((uVar2 | 0x8422239a) + (ulonglong)((uint)uVar2 & 0x8422239a))
  ;
  uVar2 = _DAT_1833644a8 << 5 | _DAT_1833644a8 >> 0x3b;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar2;
  _DAT_183364018 = _DAT_183364090 ^ uVar2 ^ 0xbf;
  _DAT_1833643a8 = (_DAT_1833643a8 ^ uVar2) + 0xbf ^ 0xcddfacc7980d166c;
  _DAT_183363f10 = (_DAT_183363f10 * 0x3b32954b5dd29d0b ^ _DAT_1833643a8) + uVar2;
  _DAT_1833640d0 = _DAT_183363f10 ^ _DAT_1833643a8;
  _DAT_183364390 = 0xbf;
  _DAT_183363d78 = func_0x00018d758e90(_DAT_183363d80 + 0xffdeff7bdb0021ff ^ 0x3a);
  uVar2 = (_DAT_183363d78 ^ 0xe6ed9f4c) << 0x34 |
          ((_DAT_183363d78 ^ 0xe6ed9f4c) & 0x7ffffffffffff) >> 0xc;
  _DAT_183364018 = _DAT_183364018 ^ uVar2 ^ 0x923183ba52775282;
  _DAT_183363ed0 = (_DAT_183363ed0 * -0x1ecfce52433a3527 ^ _DAT_183364018) + uVar2;
  _DAT_183363ec8 = _DAT_183363ed0 ^ _DAT_183364018;
  _DAT_183363d90 = 0;
  switch(0xbf < (int)uVar4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7422e2 (image 18d7422e2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7422e2(ulonglong param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_RDI;
  longlong *unaff_R12;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  
  *(bool *)(unaff_RBP + 0x80) = *(longlong *)(unaff_RBP + -0x10) == 0;
  uVar4 = (~param_1 + 0x37919613) *
          ((param_2 ^ 0x30a77bb9) + (ulonglong)((uint)param_2 & 0x30a77bb9) * 2);
  uVar4 = (uVar4 | in_RAX) + (uVar4 & in_RAX);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363e20 = func_0x00018d758e90((uVar4 | 0x736edab) + (ulonglong)((uint)uVar4 & 0x736edab));
  uVar4 = _DAT_183363e20 >> 0x18 & 0x1ffffffff;
  _DAT_183363e68 = (_DAT_183363e68 ^ uVar4) + 0xb795de9e ^ 0x15886e5339c08ac3;
  _DAT_183363f18 = (_DAT_183363f18 * 0x6975f88a465bb6b5 ^ _DAT_183363e68) + uVar4;
  _DAT_183363fc0 = _DAT_183363f18 ^ _DAT_183363e68;
  _DAT_183364218 = 0xb795de9e;
  uVar4 = (~_DAT_183364228 + 0xb5208e00) *
          ((_DAT_183364410 ^ 0xc016872f) + (ulonglong)((uint)_DAT_183364410 & 0xc016872f) * 2);
  uVar4 = (uVar4 | _DAT_183364420) + (uVar4 & _DAT_183364420);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363d28 = func_0x00018d758e90((uVar4 | 0x75360ad0) + (ulonglong)((uint)uVar4 & 0x75360ad0))
  ;
  uVar4 = _DAT_183363d28 << 0x35 | _DAT_183363d28 >> 0xb;
  _DAT_1833643e8 = (_DAT_1833643e8 ^ uVar4) + 0xf11429f5 ^ 0xfd37a3cc27bcacf;
  _DAT_183363ed8 = (_DAT_183363ed8 * -0x3da62175a59d2963 ^ _DAT_1833643e8) + uVar4;
  _DAT_183363ef8 = _DAT_183363ed8 ^ _DAT_1833643e8;
  _DAT_1833641f8 = 0xf11429f5;
  uVar4 = (_DAT_183363fe0 ^ _DAT_18227e480) + _DAT_183363e88 + unaff_RDI;
  uVar8 = (_DAT_183363e88 ^ _UNK_18227e488) + _DAT_183363fe0 + 0xe46b89c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363fe0 ^ _DAT_18227e480;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183363e88 ^ _UNK_18227e488;
  _DAT_1833642b0 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183363fe0 + 0xe46b89c0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183363e88 + unaff_RDI));
  _DAT_183364230 =
       (_DAT_183364230 ^ _DAT_1833642b0 & 0x7fffffffffffffff) - 0xe46b89c0 ^ 0x2c6a936fdc4d0719;
  _DAT_183364280 =
       (_DAT_183364280 * 0x3a27806c66056561 ^ _DAT_183364230) +
       (_DAT_1833642b0 & 0x7fffffffffffffff);
  _DAT_1833640d8 = _DAT_183364280 ^ _DAT_183364230;
  _DAT_183363ef8 = 0x1b947640;
  _DAT_183364000 = func_0x00018d758e90(_DAT_183364170 + 0xff3c00359cffbaffU ^ 0x5f);
  _DAT_183363e28 = _DAT_1833642c8 ^ _DAT_183364000 ^ 0x1000007c0;
  _DAT_1833640f8 = (_DAT_1833640f8 ^ _DAT_183364000) + 0x1000007c0 ^ 0xe4b18bb4b919f774;
  _DAT_1833642e8 = (_DAT_1833642e8 * -0x2eaf0dc90d2a8a23 ^ _DAT_1833640f8) + _DAT_183364000;
  _DAT_183363f18 = _DAT_1833642e8 ^ _DAT_1833640f8;
  _DAT_1833644c0 = 0x7c0;
  uVar4 = (~_DAT_183364090 + 0xb1cd5971) *
          ((_DAT_1833640f0 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1833640f0 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183364190) + (uVar4 & _DAT_183364190);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363f28 = func_0x00018d758e90((uVar4 | 0x35ef7a55) + (ulonglong)((uint)uVar4 & 0x35ef7a55))
  ;
  _DAT_183363e18 = (_DAT_183363e18 ^ _DAT_183363f28) - 0xb1cd5970 ^ 0x746adf09dba1459a;
  _DAT_183364468 = (_DAT_183364468 * -0x20403f61273aba41 ^ _DAT_183363e18) + _DAT_183363f28;
  _DAT_183364220 = _DAT_183364468 ^ _DAT_183363e18;
  _DAT_183363ea0 = 0x4e32a690;
  uVar4 = (_DAT_1833644e0 ^ _DAT_18227e490) + _DAT_1833643a8 + 0x842224e5;
  uVar8 = (_DAT_1833643a8 ^ _UNK_18227e498) + _DAT_1833644e0 + 0xb1cd5970;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833644e0 ^ _DAT_18227e490;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833643a8 ^ _UNK_18227e498;
  _DAT_183363d38 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1833644e0 + 0xb1cd5970) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833643a8 + 0x842224e5));
  uVar4 = _DAT_183363d38 & 0x7fffffffffffffff ^ 0xb1cd5eb0;
  _DAT_183363d20 = _DAT_183363d88 ^ uVar4 ^ 0xb1cd6130;
  _DAT_183363e18 = (_DAT_183363e18 ^ uVar4) + 0xb1cd6130 ^ 0xad5c79ffb2b59a0a;
  _DAT_183364308 = (_DAT_183364308 * -0x1332eb41453c8d27 ^ _DAT_183363e18) + uVar4;
  _DAT_1833643d0 = _DAT_183364308 ^ _DAT_183363e18;
  _DAT_1833643a0 = 0xb1cd6130;
  uVar4 = (_DAT_183363df8 ^ _DAT_18227e4a0) + _DAT_183364058 + 0x35ef4215;
  uVar8 = (_DAT_183364058 ^ _UNK_18227e4a8) + _DAT_183363df8 + 0x4e32a690;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363df8 ^ _DAT_18227e4a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183364058 ^ _UNK_18227e4a8;
  _DAT_183364078 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183363df8 + 0x4e32a690) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183364058 + 0x35ef4215));
  uVar4 = _DAT_183364078 & 0x7fffffffffffffff;
  _DAT_1833642e8 = _DAT_183363e58 ^ uVar4 ^ 0x1000007c0;
  _DAT_183364280 = (_DAT_183364280 ^ uVar4) + 0x1000007c0 ^ 0xd690e05b5d24e41;
  _DAT_183364140 = (_DAT_183364140 * -0x7abeab0cea17881f ^ _DAT_183364280) + uVar4;
  _DAT_183364448 = _DAT_183364140 ^ _DAT_183364280;
  _DAT_1833640d8 = 0x7c0;
  uVar4 = (~_DAT_1833642a8 + 0x3195f889) *
          ((_DAT_1833644a8 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1833644a8 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183363d48) + (uVar4 & _DAT_183363d48);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183364268 = func_0x00018d758e90((uVar4 | 0xb5b7dbad) + (ulonglong)((uint)uVar4 & 0xb5b7dbad))
  ;
  _DAT_183364028 = (_DAT_183364028 ^ _DAT_183364268) - 0x3195f888 ^ 0x10427aed61643042;
  _DAT_183363d10 = (_DAT_183363d10 * -0xa3088fa9df41eb5 ^ _DAT_183364028) + _DAT_183364268;
  _DAT_183364440 = _DAT_183363d10 ^ _DAT_183364028;
  _DAT_183363e40 = 0xce6a0778;
  _DAT_183364468 = func_0x00018d758e90(_DAT_183363f68 ^ 0xc400536500aecc);
  uVar4 = (_DAT_183364468 & 0x3ffffffffffffff) >> 0x30 |
          ((_DAT_183364468 ^ 0x1804a461e00) << 6 | _DAT_183364468 >> 0x3a) << 10;
  _DAT_1833641f0 = _DAT_183364240 ^ uVar4 ^ 0x31960048;
  _DAT_183364420 = (_DAT_183364420 ^ uVar4) + 0x31960048 ^ 0x714a0cf5e2e79735;
  _DAT_183363ef8 = (_DAT_183363ef8 * -0x76ddd15e6abb5a4b ^ _DAT_183364420) + uVar4;
  _DAT_183363e70 = _DAT_183363ef8 ^ _DAT_183364420;
  _DAT_1833641d8 = 0x31960048;
  uVar4 = (~_DAT_183364038 + 0xce6a0779) *
          ((_DAT_183363f70 ^ 0xb5b4236d) + (ulonglong)((uint)_DAT_183363f70 & 0xb5b4236d) * 2);
  uVar4 = (uVar4 | _DAT_183364290) + (uVar4 & _DAT_183364290);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183364218 = func_0x00018d758e90((uVar4 | 0x7bde2415) + (ulonglong)((uint)uVar4 & 0x7bde2415))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_183364218 & 0x31960048);
  _DAT_183364260 = _DAT_183363f00 ^ uVar4 ^ 0x1000007c0;
  _DAT_183363ea8 = (_DAT_183363ea8 ^ uVar4) + 0x1000007c0 ^ 0x61e1cfe82e636672;
  _DAT_183363fc0 = (_DAT_183363fc0 * -0x27f2c32d02598cb7 ^ _DAT_183363ea8) + uVar4;
  _DAT_183363fb0 = _DAT_183363fc0 ^ _DAT_183363ea8;
  _DAT_183364240 = 0x7c0;
  _DAT_183364160 = func_0x00018d758e90(_DAT_1833640a8 ^ 0xff53ffc23a005c42);
  _DAT_1833643f8 = _DAT_183363d48 ^ _DAT_183364160 ^ 0x1a8aa0893;
  _DAT_183363f58 = (_DAT_183363f58 ^ _DAT_183364160) + 0x1a8aa0893 ^ 0xcc67bd66fbc289b6;
  _DAT_183364160 = (_DAT_183364160 * -0x6fe697b84578bc43 ^ _DAT_183363f58) + _DAT_183364160;
  _DAT_1833643c8 = _DAT_183364160 ^ _DAT_183363f58;
  _DAT_183364300 = 0xa8aa0893;
  uVar4 = (~_DAT_183364330 + 0xf11429f6) *
          ((_DAT_183364460 ^ 0x33b7fdbb) + (ulonglong)((uint)_DAT_183364460 & 0x33b7fdbb) * 2);
  uVar4 = (uVar4 | _DAT_183364010) + (uVar4 & _DAT_183364010);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363ee0 = func_0x00018d758e90((uVar4 | 0xc2a3d44e) + (ulonglong)((uint)uVar4 & 0xc2a3d44e))
  ;
  _DAT_1833641c8 = (_DAT_1833641c8 ^ _DAT_183363ee0) + 0x4681f76b ^ 0xf65a2569b543ba02;
  _DAT_183363fc8 = (_DAT_183363fc8 * 0x50273f7dde2cfc4f ^ _DAT_1833641c8) + _DAT_183363ee0;
  _DAT_183364438 = _DAT_183363fc8 ^ _DAT_1833641c8;
  _DAT_1833640c0 = 0x4681f76b;
  uVar4 = (~_DAT_183364408 + 0xa8aa0894) *
          ((_DAT_183364140 ^ 0x2c882bb6) + (ulonglong)((uint)_DAT_183364140 & 0x2c882bb6) * 2);
  uVar4 = (uVar4 | _DAT_183364118) + (uVar4 & _DAT_183364118);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363e88 = func_0x00018d758e90((uVar4 | unaff_RDI) + (ulonglong)((uint)uVar4 & 0x84222325));
  _DAT_183364360 = _DAT_183364360 ^ _DAT_183363e88 ^ 0xa84495271eac80ac;
  _DAT_183364290 = (_DAT_183364290 * -0x6c5cb0fe3d93fa03 ^ _DAT_183364360) + _DAT_183363e88;
  _DAT_183364458 = _DAT_183364290 ^ _DAT_183364360;
  _DAT_183363d68 = 0;
  uVar4 = (_DAT_183363fe0 ^ 0x842224e5) + _DAT_183363e58 + 0x842224e5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363fe0 ^ 0x842224e5;
  uVar8 = ((_DAT_183363e58 + _DAT_183363fe0) * 0x2000 | _DAT_183363e58 + _DAT_183363fe0 >> 0x33) ^
          _DAT_183363e58;
  _DAT_183364098 = _DAT_183363e88;
  _DAT_1833643f0 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_183363fe0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183363e58 + 0x842224e5));
  uVar4 = _DAT_1833643f0 ^ 0x7c0;
  _DAT_183364018 = _DAT_1833644d8 ^ uVar4 ^ 0x7c0;
  _DAT_183364080 = (_DAT_183364080 ^ uVar4) + 0x7c0 ^ 0xbbfec91bba8e4919;
  _DAT_1833642a0 = (_DAT_1833642a0 * -0x151ce9a60d6714df ^ _DAT_183364080) + uVar4;
  _DAT_183363d60 = _DAT_1833642a0 ^ _DAT_183364080;
  _DAT_183364338 = 0x7c0;
  uVar4 = (_DAT_183363f68 ^ _DAT_18227e4b0) + _DAT_183363d90 + 0x33b7fdbb;
  uVar8 = (_DAT_183363d90 ^ _UNK_18227e4b8) + _DAT_183363f68 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363f68 ^ _DAT_18227e4b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183363d90 ^ _UNK_18227e4b8;
  _DAT_183363fb0 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183363f68 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183363d90 + 0x33b7fdbb));
  _DAT_183363d38 = (_DAT_183363d38 ^ _DAT_183363fb0) + 0x486a2161 ^ 0xa0d315cd0e3a25ab;
  _DAT_183364240 = (_DAT_183364240 * 0x16d2c383ea5ad8f ^ _DAT_183363d38) + _DAT_183363fb0;
  _DAT_183364088 = _DAT_183364240 ^ _DAT_183363d38;
  _DAT_183363e40 = 0x486a2161;
  uVar4 = (~_DAT_183363fa8 + 0xb485589d) *
          ((_DAT_1833641e8 ^ 0x30a77bb9) + (ulonglong)((uint)_DAT_1833641e8 & 0x30a77bb9) * 2);
  uVar4 = (uVar4 | _DAT_183364390) + (uVar4 & _DAT_183364390);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833641b0 = func_0x00018d758e90((uVar4 | unaff_RDI) + (ulonglong)((uint)uVar4 & 0x84222325));
  uVar4 = (ulonglong)((uint)_DAT_1833641b0 & 0xb485589c);
  _DAT_1833642c0 = _DAT_1833642c0 ^ uVar4 ^ 0xb557d66067bb25b6;
  _DAT_183364410 = (_DAT_183364410 * 0xc9c7bba6c70ae23 ^ _DAT_1833642c0) + uVar4;
  _DAT_1833643a8 = _DAT_183364410 ^ _DAT_1833642c0;
  _DAT_183364108 = 0;
  auVar6._8_8_ = _UNK_180144c38;
  auVar6._0_8_ = unaff_ESI ^ unaff_RDI;
  auVar7 = pshufb(auVar6 ^ _DAT_18227e4c0,_DAT_1800170c0);
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar8 + _DAT_1833640d8;
  if (auVar7._4_4_ < 0) {
    uVar4 = _DAT_183364250 ^ uVar8;
  }
  _DAT_1833640c0 = func_0x00018d758e90(SUB161(auVar6 ^ _DAT_18227e4c0,5) ^ uVar4);
  uVar5 = (ulonglong)(unaff_ESI & 0x7c0);
  _DAT_183363f28 =
       (_DAT_183363f28 ^ _DAT_1833640c0 & 0x3ffffffffffffff) + uVar5 ^ 0x9bd15c7e58c80bd1;
  _DAT_183363e88 =
       (_DAT_183363e88 * -0x10f6ca8bb3b3d7eb ^ _DAT_183363f28) +
       (_DAT_1833640c0 & 0x3ffffffffffffff);
  _DAT_183363f58 = _DAT_183363e88 ^ _DAT_183363f28;
  _DAT_183363ef0 = uVar5;
  lVar1 = (**(code **)(*unaff_R12 + 0x6f0))();
  *(int *)(unaff_RBP + 0x90) = (int)*(char *)(lVar1 + *(int *)(unaff_RBP + 0x98));
  (**(code **)(*unaff_R12 + 0x6f8))();
  *(ulonglong *)(unaff_RBP + 0x20) = (ulonglong)*(uint *)(unaff_RBP + 0x90);
  uVar4 = (~_DAT_1833641b0 + 0x1272c799) *
          ((_DAT_1833644d8 ^ 0xa3438112) + (ulonglong)((uint)_DAT_1833644d8 & 0xa3438112) * 2);
  uVar4 = (uVar4 | _DAT_183363f80) + (uVar4 & _DAT_183363f80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833644c8 = func_0x00018d758e90((uVar4 | 0xb131468a) + (ulonglong)((uint)uVar4 & 0xb131468a))
  ;
  uVar4 = _DAT_1833644c8 - (_DAT_1833644c8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1833644c8;
  _DAT_183364400 = (_DAT_183364400 ^ uVar4) + 0x3773e7bf ^ 0xfabebc34a0ba3eb1;
  _DAT_183363f80 = (_DAT_183363f80 * 0xe2249c0ea12eb0b ^ _DAT_183364400) + uVar4;
  _DAT_183363d40 = _DAT_183363f80 ^ _DAT_183364400;
  _DAT_183364208 = 0x3773e7bf;
  uVar4 = (~_DAT_183364228 + 0x25232730) *
          ((_DAT_183364100 ^ 0xa6d61898) + (ulonglong)((uint)_DAT_183364100 & 0xa6d61898) * 2);
  uVar4 = (uVar4 | _DAT_183363d00) + (uVar4 & _DAT_183363d00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363e08 = func_0x00018d758e90((uVar4 | 0x83f53fb7) + (ulonglong)((uint)uVar4 & 0x83f53fb7))
  ;
  _DAT_183364378 = (_DAT_183364378 ^ _DAT_183363e08 ^ 0x2d41890) + 0x7d71c92 ^ 0x9fd0aa544fb37223;
  _DAT_1833642c8 =
       (_DAT_1833642c8 * 0x6d4c8198e9a67c49 ^ _DAT_183364378) + (_DAT_183363e08 ^ 0x2d41890);
  _DAT_183364110 = _DAT_1833642c8 ^ _DAT_183364378;
  _DAT_183363ea0 = 0x7d71c92;
  _DAT_183364320 = func_0x00018d758e90(_DAT_183363d98 ^ 0x940037f7ff5d8c);
  uVar4 = _DAT_183364320 >> 1 | _DAT_183364320;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183364320;
  uVar4 = uVar4 << 0x2e | uVar4 >> 0x12;
  _DAT_183363dc0 = (_DAT_183363dc0 ^ uVar4) - 0xfcc4bf2d ^ 0x366569b9e0556685;
  _DAT_1833642a0 = (_DAT_1833642a0 * 0x360794fb5c4977c9 ^ _DAT_183363dc0) + uVar4;
  _DAT_183363e30 = _DAT_1833642a0 ^ _DAT_183363dc0;
  _DAT_183363ee8 = 0x33b40d3;
  _DAT_183363f10 = func_0x00018d758e90(_DAT_183363d80 + 0xff7bfff7f2ff99ff ^ 0x6a);
  uVar4 = _DAT_183363f10 - (_DAT_183363f10 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_183363f10;
  _DAT_183363eb8 = _DAT_1833644b8 ^ uVar4 ^ 0xfcc4bf6c;
  _DAT_183364110 = (_DAT_183364110 ^ uVar4) + 0xfcc4bf6c ^ 0x741f0860bc4133f8;
  _DAT_183364330 = (_DAT_183364330 * -0x603d6ae44141cf7 ^ _DAT_183364110) + uVar4;
  _DAT_183363f50 = _DAT_183364330 ^ _DAT_183364110;
  _DAT_183364228 = 0xfcc4bf6c;
  uVar4 = (~_DAT_183364378 + 0x33b40d4) *
          ((_DAT_183364378 ^ 0x78e69c49) + (ulonglong)((uint)_DAT_183364378 & 0x78e69c49) * 2);
  uVar4 = (uVar4 | _DAT_183364458) + (uVar4 & _DAT_183364458);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183364280 = func_0x00018d758e90((uVar4 | 0x7bdddc9a) + (ulonglong)((uint)uVar4 & 0x7bdddc9a))
  ;
  uVar4 = _DAT_183364280 & 0x1fffffffffffff ^ 0x33b40d3;
  _DAT_183364210 = _DAT_1833644a8 ^ uVar4 ^ 0x10000003f;
  _DAT_183363e98 = (_DAT_183363e98 ^ uVar4) + 0x10000003f ^ 0x8a0b49d3dcd106d6;
  _DAT_1833640a0 = (_DAT_1833640a0 * -0x509cef51b5bf5f9f ^ _DAT_183363e98) + uVar4;
  _DAT_1833641b0 = _DAT_1833640a0 ^ _DAT_183363e98;
  _DAT_1833643f0 = 0x3f;
  _DAT_1833643b8 = func_0x00018d758e90(_DAT_1833641a8 + 0x6b00114f0010ffU ^ 0x30);
  _DAT_183363f70 = (_DAT_183363f70 ^ _DAT_1833643b8 ^ 0xaa33d6f4) - 0xaa33d6f4 ^ 0xcb6edf4b8eca6294;
  _DAT_183364128 =
       (_DAT_183364128 * -0x192c0d69c30b6755 ^ _DAT_183363f70) + (_DAT_1833643b8 ^ 0xaa33d6f4);
  _DAT_1833640e8 = _DAT_183364128 ^ _DAT_183363f70;
  _DAT_183364250 = 0x55cc290c;
  uVar4 = (~_DAT_183363f20 + 0xaa33d6f5) *
          ((_DAT_183364480 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183364480 & 0x8422231a) * 2);
  uVar4 = (uVar4 | _DAT_1833641c0) + (uVar4 & _DAT_1833641c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183364218 = func_0x00018d758e90((uVar4 | 0x2e11f5ee) + (ulonglong)((uint)uVar4 & 0x2e11f5ee))
  ;
  uVar4 = (_DAT_183364218 ^ 0x29e2c1e60c) << 0xc |
          ((_DAT_183364218 ^ 0x29e2c1e60c) & 0x7fffffffffffffff) >> 0x34;
  uVar8 = uVar4 - (uVar4 >> 1 & 0x5555555555555155);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar4;
  _DAT_183364100 = _DAT_183363fd0 ^ uVar4 ^ 0xaa33d733;
  _DAT_1833642b0 = (_DAT_1833642b0 ^ uVar4) + 0xaa33d733 ^ 0x516567e56e3f28f;
  _DAT_183363db8 = (_DAT_183363db8 * -0x780c9708d8722361 ^ _DAT_1833642b0) + uVar4;
  _DAT_183364050 = _DAT_183363db8 ^ _DAT_1833642b0;
  _DAT_183364410 = 0xaa33d733;
  _DAT_183363ea8 = func_0x00018d758e90(_DAT_183364118 ^ 0x5eff7a26009183);
  _DAT_183364418 =
       (_DAT_183364418 ^ _DAT_183363ea8 & 0xfffffffffffffff8) - 0x3e8c8203 ^ 0x5e873f79e454fb6a;
  _DAT_183363f08 =
       (_DAT_183363f08 * 0x53c884d40a06f873 ^ _DAT_183364418) +
       (_DAT_183363ea8 & 0xfffffffffffffff8);
  _DAT_1833640e8 = _DAT_183363f08 ^ _DAT_183364418;
  _DAT_1833643f8 = 0xc1737dfd;
  _DAT_183363fc8 = func_0x00018d758e90(_DAT_183364118 ^ 0x5eff55e700a978);
  _DAT_1833641e0 = _DAT_183364088 ^ 0x3e8c8242;
  _DAT_183364390 = _DAT_183364390 + 0x3e8c8242 ^ 0x307a252498d11431;
  _DAT_183364408 = _DAT_183363e50 * 0x507f99f597a5deb;
  _DAT_183363e50 = _DAT_183364408 ^ _DAT_183364390;
  _DAT_183363fe8 = 0x3e8c8242;
  uVar4 = (~_DAT_1833642f0 + 0xc1737dfe) *
          ((_DAT_183364338 ^ 0xbaaea167) + (ulonglong)((uint)_DAT_183364338 & 0xbaaea167) * 2);
  uVar4 = (uVar4 | _DAT_183363d80) + (uVar4 & _DAT_183363d80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363d40 = func_0x00018d758e90((uVar4 | 0x7bdddc9a) + (ulonglong)((uint)uVar4 & 0x7bdddc9a))
  ;
  _DAT_1833644d8 = _DAT_1833642b0 ^ _DAT_183363d40 ^ 0x10000003f;
  _DAT_183364120 = (_DAT_183364120 ^ _DAT_183363d40) + 0x10000003f ^ 0x240f5090535ae733;
  _DAT_183364190 = (_DAT_183364190 * 0x22c848b717697183 ^ _DAT_183364120) + _DAT_183363d40;
  _DAT_183363e78 = _DAT_183364190 ^ _DAT_183364120;
  _DAT_183364150 = 0x3f;
  uVar4 = (~_DAT_183364268 + 0x7d71c93) *
          ((_DAT_183364098 ^ 0xb351c49a) + (ulonglong)((uint)_DAT_183364098 & 0xb351c49a) * 2);
  uVar4 = (uVar4 | _DAT_183364028) + (uVar4 & _DAT_183364028);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363fd0 = func_0x00018d758e90((uVar4 | 0xb486d808) + (ulonglong)((uint)uVar4 & 0xb486d808))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_183363fd0 & 0x3773e7bf);
  _DAT_183363fa8 = (_DAT_183363fa8 ^ uVar4) + 0x30a4fb2d ^ 0xc530841b2ad53a53;
  _DAT_183363d60 = (_DAT_183363d60 * -0x1c2e527caabf53b9 ^ _DAT_183363fa8) + uVar4;
  _DAT_1833640f8 = _DAT_183363d60 ^ _DAT_183363fa8;
  _DAT_183364268 = 0x30a4fb2d;
  uVar4 = (~_DAT_183364198 + 0x7d71c93) *
          ((_DAT_183364060 ^ 0xb351c49a) + (ulonglong)((uint)_DAT_183364060 & 0xb351c49a) * 2);
  uVar4 = (uVar4 | _DAT_1833642d8) + (uVar4 & _DAT_1833642d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183364478 = func_0x00018d758e90((uVar4 | 0xb486d808) + (ulonglong)((uint)uVar4 & 0xb486d808))
  ;
  _DAT_183364100 = (_DAT_183364100 ^ _DAT_183364478 ^ 0x7d71c92) + 0x7530492 ^ 0x5b729f0ec4beb113;
  _DAT_183363df0 =
       (_DAT_183363df0 * -0x3991258d40ba3c11 ^ _DAT_183364100) + (_DAT_183364478 ^ 0x7d71c92);
  _DAT_183363f58 = _DAT_183363df0 ^ _DAT_183364100;
  _DAT_183363ff8 = 0x7530492;
  uVar4 = (~_DAT_183363e48 + 0xea60925) *
          ((_DAT_183364070 ^ 0xb486d808) + (ulonglong)((uint)_DAT_183364070 & 0xb486d808) * 2);
  uVar4 = (uVar4 | _DAT_183364410) + (uVar4 & _DAT_183364410);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833641b0 = func_0x00018d758e90((uVar4 | 0xba20d12c) + (ulonglong)((uint)uVar4 & 0xba20d12c))
  ;
  uVar4 = _DAT_1833641b0 ^ 0x2c89273f935e754;
  _DAT_183364058 = _DAT_183364488 ^ uVar4 ^ 0x3f4b0451;
  _DAT_183364378 = (_DAT_183364378 ^ uVar4) + 0x3f4b0451 ^ 0x9bdf134b53c802f7;
  _DAT_183364410 = (_DAT_183364410 * -0x4e18123c8e84132d ^ _DAT_183364378) + uVar4;
  _DAT_183364290 = _DAT_183364410 ^ _DAT_183364378;
  _DAT_183364428 = 0x3f4b0451;
  uVar4 = (_DAT_183363fd8 ^ _DAT_18227e4d0) + _DAT_183364100 + 0xbb692774;
  uVar8 = (_DAT_183364100 ^ _UNK_18227e4d8) + _DAT_183363fd8 + 0x3f4b0451;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363fd8 ^ _DAT_18227e4d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183364100 ^ _UNK_18227e4d8;
  _DAT_183364190 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183363fd8 + 0x3f4b0451) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183364100 + 0xbb692774));
  _DAT_1833640b8 = _DAT_183364190 ^ 0x3f4b0451;
  _DAT_183364288 = _DAT_183364288 ^ _DAT_1833640b8 ^ 0xd0bd7ab769e4591;
  _DAT_183364060 = (_DAT_183364060 * -0x411db5db1b455997 ^ _DAT_183364288) + _DAT_1833640b8;
  _DAT_1833643a0 = _DAT_183364060 ^ _DAT_183364288;
  _DAT_183363e68 = 0;
  uVar4 = (_DAT_183363d10 ^ 0x8422231a) + _DAT_183363ee0 + 0x8422231a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363d10 ^ 0x8422231a;
  uVar8 = ((_DAT_183363ee0 + _DAT_183363d10) * 0x2000 | _DAT_183363ee0 + _DAT_183363d10 >> 0x33) ^
          _DAT_183363ee0;
  _DAT_1833643a8 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_183363d10 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183363ee0 + 0x8422231a));
  _DAT_183363d08 = _DAT_183364218 ^ _DAT_1833643a8 ^ 0x3f;
  _DAT_183363f38 = (_DAT_183363f38 ^ _DAT_1833643a8) + 0x3f ^ 0x5b596b75d448047f;
  _DAT_183363e68 = (_DAT_183363e68 * -0x41e515f97f7d730d ^ _DAT_183363f38) + _DAT_1833643a8;
  _DAT_1833641d8 = _DAT_183363e68 ^ _DAT_183363f38;
  _DAT_183364160 = 0x3f;
  _DAT_1833643b8 = func_0x00018d758e90(_DAT_183363d78 + 0x28ffb3db0069ffU ^ 0x3f);
  uVar4 = ((_DAT_1833643b8 & 0xffffffff) * (ulonglong)_DAT_18227e4f0 +
           (_DAT_1833643b8 >> 0x20) * (ulonglong)_DAT_18227e4e0 << 0x20) +
          (_DAT_1833643b8 & 0xffffffff) * (ulonglong)_DAT_18227e4e0 & 0x7fffffffffffffff;
  _DAT_183364300 = (_DAT_183364300 ^ uVar4) + 0xc88c1840 ^ 0xc86f209ae83a4828;
  _DAT_183364140 = (_DAT_183364140 * 0x212fceb0d78feff ^ _DAT_183364300) + uVar4;
  _DAT_1833642c0 = _DAT_183364140 ^ _DAT_183364300;
  _DAT_183364278 = 0xc88c1840;
  uVar4 = (_DAT_183363ea0 ^ _DAT_18227e500) + _DAT_1833643a0 + 0xb351c49a;
  uVar8 = (_DAT_1833643a0 ^ _UNK_18227e508) + _DAT_183363ea0 + 0xc88c1840;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183363ea0 ^ _DAT_18227e500;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833643a0 ^ _UNK_18227e508;
  _DAT_183364470 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183363ea0 + 0xc88c1840) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833643a0 + 0xb351c49a));
  uVar4 = _DAT_183364470 & 0xfffffffff8000000;
  uVar8 = uVar4 >> 1 | uVar4;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4 ^
          0x3773e7bf;
  _DAT_183363db0 = _DAT_183363db0 ^ uVar4 ^ 0xcdf930c69847813;
  _DAT_1833644c0 = (_DAT_1833644c0 * 0x35b1021dd06c907b ^ _DAT_183363db0) + uVar4;
  _DAT_1833642c8 = _DAT_1833644c0 ^ _DAT_183363db0;
  _DAT_1833644b0 = 0;
  _DAT_183364390 = func_0x00018d758e90(_DAT_1833641b8 ^ 0xffe1007c19ffdd51);
  uVar4 = _DAT_183364390 ^ 0x3f;
  _DAT_183363ed8 = _DAT_183363ff8 ^ uVar4 ^ 0x3f;
  _DAT_183363d98 = (_DAT_183363d98 ^ uVar4) + 0x3f ^ 0xbb6d678585d7a704;
  _DAT_183363df0 = (_DAT_183363df0 * 0x2d8415397df302c9 ^ _DAT_183363d98) + uVar4;
  _DAT_183364470 = _DAT_183363df0 ^ _DAT_183363d98;
  _DAT_183363e70 = 0x3f;
  uVar4 = *(ulonglong *)(unaff_RBP + 0x20);
  uVar8 = uVar4 ^ 0x84222325;
  uVar2 = uVar8 ^ _DAT_183363f18;
  lVar1 = uVar8 + _DAT_183363e38;
  uVar8 = uVar2 + lVar1;
  uVar9 = (_DAT_183363e38 ^ 0x3f) + _DAT_183363f18 + 0x3f;
  uVar2 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183363e38 ^ 0x3f;
  _DAT_183363fb8 =
       func_0x00018d758e90((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183363f18 + 0x3f) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar1);
  uVar3 = (uint)uVar4 & 0x3f;
  _DAT_183363e10 = (ulonglong)uVar3;
  _DAT_183364358 =
       (_DAT_183364358 ^ _DAT_183363fb8 * -0x7991e45991c875af) + _DAT_183363e10 ^ 0xcf38d8e60a3d1b1b
  ;
  _DAT_183364068 =
       (_DAT_183364068 * 0x7192deafcd76916d ^ _DAT_183364358) + _DAT_183363fb8 * -0x7991e45991c875af
  ;
  _DAT_1833642f0 = _DAT_183364068 ^ _DAT_183364358;
  uVar8 = _DAT_183363e10 ^ 0x84222325;
  uVar4 = ((_DAT_183364418 ^ uVar8) + (ulonglong)((uint)_DAT_183364418 & (uint)uVar8) * 2) *
          (uVar5 - _DAT_183364038);
  uVar4 = (uVar4 | _DAT_183364448) + (uVar4 & _DAT_183364448);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183363d68 =
       func_0x00018d758e90((uVar8 ^ uVar5 | uVar4) +
                           (ulonglong)((uint)(uVar8 ^ uVar5) & (uint)uVar4));
  uVar3 = uVar3 | unaff_ESI & 0x7c0;
  _DAT_183364378 = (ulonglong)uVar3;
  _DAT_183363e60 =
       (_DAT_183363e60 ^ _DAT_183363d68 ^ _DAT_183364378) + _DAT_183364378 ^ 0x422d227b0921104d;
  _DAT_183363ff0 =
       (_DAT_183363ff0 * 0x1b88d8d9a9b1b19b ^ _DAT_183363e60) + (_DAT_183363d68 ^ _DAT_183364378);
  _DAT_183363f20 = _DAT_183363ff0 ^ _DAT_183363e60;
  *(undefined8 *)(unaff_RBP + 0x90) = *(undefined8 *)(unaff_RBP + 0x58);
  *(undefined4 *)(unaff_RBP + 0x98) = *(undefined4 *)(unaff_RBP + 0x60);
  *(uint *)(unaff_RBP + 0xa0) = uVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x80)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d73d7fd (image 18d73d7fd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d73d7fd(undefined4 param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R14;
  longlong *unaff_R15;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(undefined4 *)(unaff_RBP + 0x90) = param_1;
  (**(code **)(*unaff_R15 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0xa0) = 6;
  *(undefined8 *)(unaff_RBP + 0x90) = unaff_RBX;
  auVar5._8_8_ = _UNK_180019298;
  auVar5._0_8_ = unaff_R14 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_18227e630,_DAT_1800170c0);
  uVar2 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar2 + _DAT_183363d88;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_183363ed0 ^ uVar2;
  }
  _DAT_183364380 = func_0x00018d758e90(SUB161(auVar5 ^ _DAT_18227e630,5) ^ uVar3);
  uVar3 = _DAT_183364380 ^ unaff_R14;
  uVar7 = (uint)unaff_R14;
  uVar8 = uVar7 & _DAT_180017990;
  uVar9 = uVar7 ^ _DAT_180017990;
  uVar4 = uVar7 ^ (uint)DAT_18001a710;
  uVar2 = ((((ulonglong)uVar4 * (ulonglong)_DAT_18227e6b0 + _DAT_18227e6c0 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_18227e6a0 +
            ((ulonglong)uVar9 * (ulonglong)_DAT_18227e690 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_18227e680 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_18227e670 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_18227e660) +
           ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_18227e650 << 0x20) +
           (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_18227e640) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_18227e760 + _DAT_18227e770 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_18227e750 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_18227e740 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_18227e730 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_18227e720 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_18227e710) +
          ((ulonglong)(uVar7 * _DAT_18227e700) << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_18227e6f0)) + 0xb751474155c55fa1;
  _DAT_183364010 = _DAT_183363e10 ^ uVar3 ^ uVar2;
  _DAT_183363ff0 = (_DAT_183363ff0 ^ uVar3) + uVar2 ^ 0x1b45c7fef6ced6ea;
  _DAT_1833644b0 = (_DAT_1833644b0 * -0x5ae2a9175ef6671d ^ _DAT_183363ff0) + uVar3;
  _DAT_183364308 = _DAT_1833644b0 ^ _DAT_183363ff0;
  _DAT_183363f08 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x98) = (int)uVar2;
  iVar1 = (**(code **)(*unaff_R15 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x98) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x98)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d75b562 (image 18d75b562) =====

void FUN_18d75b562(void)

{
  return;
}



// ===== continuation @ rva d75b3c1 (image 18d75b3c1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d75b3c1(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R14 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d75c5e1 (image 18d75c5e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d75c5e1(void)

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



// ===== continuation @ rva d75ea62 (image 18d75ea62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d75ea62(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d75ea1d (image 18d75ea1d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d75ea1d(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d75c4bc (image 18d75c4bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d75c4bc(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d75dfaf (image 18d75dfaf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d75b9de(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R14 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d75ccf7 (image 18d75ccf7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d75ccf7(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d75e356 (image 18d75e356) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d75e356(void)

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



// ===== continuation @ rva d75fcf1 (image 18d75fcf1) =====

undefined8 thunk_FUN_18d75b54b(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva d75ffa3 (image 18d75ffa3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d75ffa3(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d75ff4f (image 18d75ff4f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d75ff4f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d760d08 (image 18d760d08) =====

void FUN_18d760d08(void)

{
  return;
}



// ===== continuation @ rva d76092d (image 18d76092d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76092d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182285098)();
  return;
}



// ===== continuation @ rva d760d16 (image 18d760d16) =====

void FUN_18d760d16(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d7606f6 (image 18d7606f6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7606f6(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d760b7c (image 18d760b7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d760b7c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182284ef8)();
  return;
}



// ===== continuation @ rva d760539 (image 18d760539) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d760539(void)

{
  FUN_190de3220();
  (*_DAT_182285118)();
  return;
}



// ===== continuation @ rva d7603ef (image 18d7603ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7603ef(void)

{
  FUN_190ddfc90();
  (*_DAT_182285148)();
  return;
}



// ===== continuation @ rva d76090c (image 18d76090c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d76090c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d760ac8 (image 18d760ac8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d760ac8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182284e58)();
  return;
}



// ===== continuation @ rva d760a62 (image 18d760a62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d760a62(void)

{
  FUN_190dd72e0();
  (*_DAT_182284f88)();
  return;
}



// ===== continuation @ rva d76375d (image 18d76375d) =====

void FUN_18d76375d(void)

{
  return;
}



// ===== continuation @ rva d760e80 (image 18d760e80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d760e80(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182285b68)();
  return;
}



// ===== continuation @ rva d7636f7 (image 18d7636f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7636f7(void)

{
  (*_DAT_182285fe8)();
  return;
}



// ===== continuation @ rva d76377c (image 18d76377c) =====

void FUN_18d76377c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d761b80 (image 18d761b80) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d761b80(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d762f8b (image 18d762f8b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d762f8b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7625cb (image 18d7625cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7625cb(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76228d (image 18d76228d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76228d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182285578)();
  return;
}



// ===== continuation @ rva d7635fc (image 18d7635fc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7635fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1822853c8)();
  return;
}



// ===== continuation @ rva d76239d (image 18d76239d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d76239d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d762157 (image 18d762157) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d762157(void)

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



// ===== continuation @ rva d761120 (image 18d761120) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d761120(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d765fa6 (image 18d765fa6) =====

void FUN_18d765fa6(void)

{
  return;
}



// ===== continuation @ rva d765e02 (image 18d765e02) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d765e02(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76c2fd (image 18d76c2fd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76c2fd(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong unaff_R13;
  ulonglong uVar8;
  longlong *in_stack_00000030;
  uint in_stack_00000040;
  int in_stack_00000050;
  undefined8 in_stack_00000070;
  
  lVar4 = (**(code **)(*in_stack_00000030 + 0x6f0))(in_stack_00000030,in_stack_00000070,0);
  cVar1 = *(char *)(lVar4 + in_stack_00000050);
  (**(code **)(*in_stack_00000030 + 0x6f8))(in_stack_00000030,in_stack_00000070,lVar4,2);
  uVar5 = (~_DAT_1833659a8 + 0x2c7e5387) *
          ((_DAT_183365db0 ^ 0x5ce617f6) + (ulonglong)((uint)_DAT_183365db0 & 0x5ce617f6) * 2);
  uVar5 = (uVar5 | _DAT_183365d98) + (uVar5 & _DAT_183365d98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183365dc0 = func_0x00018d76eda0((uVar5 | 0x70984470) + (ulonglong)((uint)uVar5 & 0x70984470))
  ;
  _DAT_183365eb0 =
       (_DAT_183365eb0 ^ _DAT_183365dc0 & 0x7fffffffffffffff) + 0xfcfe77d7 ^ 0x2125dd54d17ac586;
  _DAT_183365b20 =
       (_DAT_183365b20 * 0x1742c6e056f56759 ^ _DAT_183365eb0) +
       (_DAT_183365dc0 & 0x7fffffffffffffff);
  _DAT_183365d38 = _DAT_183365b20 ^ _DAT_183365eb0;
  _DAT_183365e30 = 0xfcfe77d7;
  _DAT_183365e00 = func_0x00018d76eda0(_DAT_183365d18 + 0xb3ffca16004dff ^ 5);
  uVar5 = (_DAT_183365e00 & 0x7fff) << 0x30 | _DAT_183365e00 >> 0x10;
  _DAT_183365b58 = (_DAT_183365b58 ^ uVar5) - 0xcedc9733 ^ 0x10246653111334b2;
  _DAT_183365b48 = (_DAT_183365b48 * -0x75edaa9d0b448c87 ^ _DAT_183365b58) + uVar5;
  _DAT_183365ed8 = _DAT_183365b48 ^ _DAT_183365b58;
  _DAT_183365bc0 = 0x312368cd;
  _DAT_1833659f0 = func_0x00018d76eda0(_DAT_183365c10 + 0xffb6ffba15ffb1ff ^ 0x1e);
  uVar5 = (_DAT_1833659f0 ^ 0xff00) << 0x26 | ((_DAT_1833659f0 ^ 0xff00) & 0x3ffffffffff) >> 0x1a;
  _DAT_183365ad8 = _DAT_183365dd0 ^ uVar5 ^ 0xcedd9633;
  _DAT_183365a80 = (_DAT_183365a80 ^ uVar5) + 0xcedd9633 ^ 0x80b47b4f6a6017b4;
  _DAT_183365b50 = (_DAT_183365b50 * 0x7ba739d7e9ad70c1 ^ _DAT_183365a80) + uVar5;
  _DAT_1833659d8 = _DAT_183365b50 ^ _DAT_183365a80;
  _DAT_1833659f8 = 0xcedd9633;
  _DAT_183365a08 = func_0x00018d76eda0(0x3aff8799ddd587);
  uVar6 = _DAT_183365a08 ^ 0x27b506baf86efed7;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R13) + (uVar5 >> 2 & unaff_R13);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar2 + (uint)bVar2 ^ uVar6;
  _DAT_183365b30 = _DAT_183365ec8 ^ uVar6 ^ 0x10000ff00;
  _DAT_183365aa0 = (_DAT_183365aa0 ^ uVar6) + 0x10000ff00 ^ 0x5f5bf58d742e9307;
  _DAT_183365c70 = (_DAT_183365c70 * 0x7c252a6cd9bf7c9b ^ _DAT_183365aa0) + uVar6;
  _DAT_183365b70 = _DAT_183365c70 ^ _DAT_183365aa0;
  _DAT_183365948 = 0xff00;
  uVar5 = (_DAT_1833659e0 ^ _DAT_182288090) + _DAT_183365a00 + 0x84222325;
  uVar6 = (_DAT_183365a00 ^ _UNK_182288098) + _DAT_1833659e0 + 0x9b0b770a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833659e0 ^ _DAT_182288090;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183365a00 ^ _UNK_182288098;
  _DAT_183365938 =
       func_0x00018d76eda0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833659e0 + 0x9b0b770a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183365a00 + 0x84222325));
  uVar5 = _DAT_183365938 >> 1 | _DAT_183365938;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R13) + (uVar5 >> 2 & unaff_R13);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183365938;
  _DAT_183365e88 = (_DAT_183365e88 ^ uVar5) - 0x9b0b770a ^ 0xc2c174cd8e845587;
  _DAT_183365e60 = (_DAT_183365e60 * -0x7250771cf95c4211 ^ _DAT_183365e88) + uVar5;
  _DAT_183365a48 = _DAT_183365e60 ^ _DAT_183365e88;
  _DAT_183365ec0 = 0x64f488f6;
  uVar5 = (_DAT_183365b88 ^ _DAT_1822880a0) + _DAT_183365b68 + 0x8422dc25;
  uVar6 = (_DAT_183365b68 ^ _UNK_1822880a8) + _DAT_183365b88 + 0x9b0b770a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183365b88 ^ _DAT_1822880a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183365b68 ^ _UNK_1822880a8;
  _DAT_183365c08 =
       func_0x00018d76eda0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183365b88 + 0x9b0b770a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183365b68 + 0x8422dc25));
  uVar5 = (_DAT_183365c08 ^ 0x9a706b92f600) * 0x1d0811ae41cacf1;
  _DAT_183365e50 = _DAT_183365c90 ^ uVar5 ^ 0x9b0c760a;
  _DAT_183365de0 = (_DAT_183365de0 ^ uVar5) + 0x9b0c760a ^ 0xae955cad1528f267;
  _DAT_183365e88 = (_DAT_183365e88 * 0x4c34492f3b744775 ^ _DAT_183365de0) + uVar5;
  _DAT_183365928 = _DAT_183365e88 ^ _DAT_183365de0;
  _DAT_183365ae8 = 0x9b0c760a;
  uVar5 = (_DAT_1833659a8 ^ _DAT_1822880b0) + _DAT_183365b88 + 0x1f2e552f;
  uVar6 = (_DAT_183365b88 ^ _UNK_1822880b8) + _DAT_1833659a8 + 0x64f488f6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833659a8 ^ _DAT_1822880b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183365b88 ^ _UNK_1822880b8;
  _DAT_183365d08 =
       func_0x00018d76eda0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833659a8 + 0x64f488f6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183365b88 + 0x1f2e552f));
  uVar5 = _DAT_183365d08 ^ 0xfffcfefe;
  _DAT_183365aa0 = _DAT_183365ab0 ^ uVar5 ^ 0x10000ff00;
  _DAT_183365970 = (_DAT_183365970 ^ uVar5) + 0x10000ff00 ^ 0x2ad33a7b1da5d2a6;
  _DAT_183365948 = (_DAT_183365948 * 0x4abe3e2d0ba857bd ^ _DAT_183365970) + uVar5;
  _DAT_183365b20 = _DAT_183365948 ^ _DAT_183365970;
  _DAT_183365ce8 = 0xff00;
  uVar5 = (~_DAT_183365b60 + 0xe5fa4000) *
          ((_DAT_183365ae8 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183365ae8 & 0x8422dc25) * 2);
  uVar5 = (uVar5 | _DAT_183365d10) + (uVar5 & _DAT_183365d10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183365ad8 = func_0x00018d76eda0((uVar5 | 0x61d8e3da) + (ulonglong)((uint)uVar5 & 0x61d8e3da))
  ;
  _DAT_183365c40 = _DAT_183365e10 ^ _DAT_183365ad8 ^ 0xe5fb3eff;
  _DAT_183365988 = (_DAT_183365988 ^ _DAT_183365ad8) + 0xe5fb3eff ^ 0xda3dbb0783f42e22;
  _DAT_183365b38 = (_DAT_183365b38 * 0x37247102917ca863 ^ _DAT_183365988) + _DAT_183365ad8;
  _DAT_183365d08 = _DAT_183365b38 ^ _DAT_183365988;
  _DAT_183365aa0 = 0xe5fb3eff;
  _DAT_183365c68 = func_0x00018d76eda0(_DAT_183365c10 ^ 0x2cff8a44ff3bf0);
  uVar5 = _DAT_183365c68 ^ 0x1a05c001;
  _DAT_183365c58 = _DAT_183365c40 ^ uVar5 ^ 0x10000ff00;
  _DAT_183365a78 = (_DAT_183365a78 ^ uVar5) + 0x10000ff00 ^ 0xea07c4cfbbddfee4;
  _DAT_183365d18 = (_DAT_183365d18 * 0x7e68232c963907b3 ^ _DAT_183365a78) + uVar5;
  _DAT_183365e38 = _DAT_183365d18 ^ _DAT_183365a78;
  _DAT_183365a48 = 0xff00;
  uVar5 = (_DAT_183365e00 ^ _DAT_1822880c0) + _DAT_183365e08 + 0x78dc54f2;
  uVar6 = (_DAT_183365e08 ^ _UNK_1822880c8) + _DAT_183365e00 + 0x504b3575;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183365e00 ^ _DAT_1822880c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183365e08 ^ _UNK_1822880c8;
  _DAT_183365e48 =
       func_0x00018d76eda0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183365e00 + 0x504b3575) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183365e08 + 0x78dc54f2));
  uVar5 = _DAT_183365e48 & 0x3fffffffffffff ^ 0x504b3575;
  _DAT_183365970 = _DAT_183365e60 ^ uVar5 ^ 0x14d49ad4c;
  _DAT_183365ea0 = (_DAT_183365ea0 ^ uVar5) + 0x14d49ad4c ^ 0xb556963a604c4fd1;
  _DAT_183365bb0 = (_DAT_183365bb0 * -0x4079b3a2febd3043 ^ _DAT_183365ea0) + uVar5;
  _DAT_183365bf0 = _DAT_183365bb0 ^ _DAT_183365ea0;
  _DAT_183365a58 = 0x4d49ad4c;
  _DAT_183365b58 = func_0x00018d76eda0(_DAT_183365ce0 ^ 0xffe0ff7c1d001df6);
  _DAT_183365988 = _DAT_183365988 ^ _DAT_183365b58 ^ 0x37f8946f3b264529;
  _DAT_183365dd8 = (_DAT_183365dd8 * 0x62beee64a39e1df7 ^ _DAT_183365988) + _DAT_183365b58;
  _DAT_183365c00 = _DAT_183365dd8 ^ _DAT_183365988;
  _DAT_183365db0 = 0;
  uVar5 = (~_DAT_183365980 + 0x100000000) *
          ((_DAT_183365eb8 ^ 0x78dc54f2) + (ulonglong)((uint)_DAT_183365eb8 & 0x78dc54f2) * 2);
  uVar5 = (uVar5 | _DAT_183365b20) + (uVar5 & _DAT_183365b20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183365d60 = _DAT_183365b58;
  _DAT_183365de0 = func_0x00018d76eda0((uVar5 | 0x8723ab0d) + (ulonglong)((uint)uVar5 & 0x8723ab0d))
  ;
  uVar5 = (_DAT_183365de0 << 0x24 | _DAT_183365de0 >> 0x1c) << 0x15 |
          (_DAT_183365de0 & 0xfffffff) >> 7;
  _DAT_183365b08 = (_DAT_183365b08 ^ uVar5) + 0x3018828 ^ 0x5e06d3af133a427b;
  _DAT_183365968 = (_DAT_183365968 * -0x5eeec1ba5f348fef ^ _DAT_183365b08) + uVar5;
  _DAT_183365d18 = _DAT_183365968 ^ _DAT_183365b08;
  _DAT_183365e18 = 0x3018828;
  _DAT_183365e90 = func_0x00018d76eda0(_DAT_1833659a8 + 0xffcbff7c25001dff ^ 0x9b);
  uVar5 = _DAT_183365e90 ^ 0xff00;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_R13) + (uVar6 >> 2 & unaff_R13);
  bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar2 + (uint)bVar2 ^ uVar5;
  _DAT_183365be8 = _DAT_183365ee0 ^ uVar5 ^ 0xff00;
  _DAT_183365a30 = (_DAT_183365a30 ^ uVar5) + 0xff00 ^ 0x117a67e7d503279c;
  _DAT_183365930 = (_DAT_183365930 * 0x173914906dac6727 ^ _DAT_183365a30) + uVar5;
  _DAT_183365ba0 = _DAT_183365930 ^ _DAT_183365a30;
  _DAT_183365920 = 0xff00;
  _DAT_183365ba0 = func_0x00018d76eda0(_DAT_1833659c8 + 0xffac007be4ffddffU ^ 0x48);
  _DAT_183365c30 = _DAT_183365a80;
  _DAT_183365d10 = (_DAT_183365d10 ^ 0xff00) + 0xff00 ^ 0xd15c63198814d01c;
  _DAT_183365cf8 = (_DAT_183365cf8 * 0x3532ddf11b546a2f ^ _DAT_183365d10) + 0xff00;
  _DAT_183365dd8 = _DAT_183365cf8 ^ _DAT_183365d10;
  _DAT_183365be8 = 0xff00;
  uVar6 = (ulonglong)(uint)((int)cVar1 << 8);
  uVar5 = (~_DAT_183365968 + 0xff01) *
          ((uVar6 ^ 0x84222325 ^ _DAT_183365ea0) +
          (ulonglong)((uint)_DAT_183365ea0 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | _DAT_183365bd0) + (uVar5 & _DAT_183365bd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183365ef8 =
       func_0x00018d76eda0((uVar6 ^ 0x8422dc25 | uVar5) +
                           (ulonglong)((uint)(uVar6 ^ 0x8422dc25) & (uint)uVar5));
  uVar5 = (uVar6 | 0xff00) ^ _DAT_183365ef8;
  uVar5 = uVar6 ^ (uVar5 & 0xffffffff) * (_DAT_1822880d0 & 0xffffffff) +
                  ((ulonglong)_DAT_1822880e0 * (uVar5 & 0xffffffff) +
                   (_DAT_183365ef8 >> 0x20) * (_DAT_1822880d0 & 0xffffffff) << 0x20);
  uVar6 = uVar6 & 0xffff;
  _DAT_183365a48 = (_DAT_183365a48 ^ uVar5) + uVar6 ^ 0x4ef627011d4482bc;
  _DAT_183365ab0 = (_DAT_183365ab0 * 0x2678642d1fb19a75 ^ _DAT_183365a48) + uVar5;
  _DAT_183365c58 = _DAT_183365ab0 ^ _DAT_183365a48;
  uVar8 = (ulonglong)in_stack_00000040;
  uVar7 = uVar8 ^ 0x84222325;
  uVar5 = ((_DAT_183365b68 ^ uVar7) + (ulonglong)((uint)_DAT_183365b68 & (uint)uVar7) * 2) *
          (uVar6 - _DAT_183365be0);
  uVar5 = (uVar5 | _DAT_183365de0) + (uVar5 & _DAT_183365de0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183365ba0 = uVar6;
  _DAT_183365b10 =
       func_0x00018d76eda0((uVar7 ^ uVar6 | uVar5) +
                           (ulonglong)((uint)(uVar7 ^ uVar6) & (uint)uVar5));
  uVar5 = uVar6 ^ uVar8 * uVar6 ^ _DAT_183365b10;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_R13) + (uVar7 >> 2 & unaff_R13);
  uVar5 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar5;
  _DAT_183365ed0 = uVar8 | uVar6;
  _DAT_183365a58 = (_DAT_183365a58 ^ uVar5) + _DAT_183365ed0 ^ 0xd7f581f7368a5176;
  _DAT_183365b98 = (_DAT_183365b98 * 0x5d639cf72857a653 ^ _DAT_183365a58) + uVar5;
  _DAT_183365ee8 = _DAT_183365b98 ^ _DAT_183365a58;
  _DAT_183365dc8 = _DAT_1833659e8 ^ _DAT_183365ed0;
  iVar3 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(iVar3 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76c2a8 (image 18d76c2a8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76c2a8(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d768fb3 (image 18d768fb3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d76aab3(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x88))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76a59a (image 18d76a59a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76a59a(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76a2ef (image 18d76a2ef) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76a2ef(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0x70))(in_stack_00000030,in_stack_00000038,&UNK_182f702a8);
  uVar2 = (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d768236 (image 18d768236) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d768236(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x570))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xc38,0x31);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76810b (image 18d76810b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76810b(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d766a0b (image 18d766a0b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d766a0b(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *in_stack_00000030;
  int iStack0000000000000050;
  ulonglong uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  iStack0000000000000050 = 1;
  uStack0000000000000060 = 0x30;
  uStack0000000000000058 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_RSI >> 0x30);
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7695fe (image 18d7695fe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7695fe(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7694bb (image 18d7694bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7694bb(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76760e (image 18d76760e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d76760e(void)

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



// ===== continuation @ rva d7675b9 (image 18d7675b9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7675b9(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x724,0x22);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76eed2 (image 18d76eed2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d76eed2(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76ee7e (image 18d76ee7e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76ee7e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76fd54 (image 18d76fd54) =====

void FUN_18d76fd54(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d76f61b (image 18d76f61b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d76f61b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76f23d (image 18d76f23d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76f23d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76f988 (image 18d76f988) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76f988(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182288588)();
  return;
}



// ===== continuation @ rva d76f922 (image 18d76f922) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76f922(void)

{
  FUN_190dd72e0();
  (*_DAT_182288428)();
  return;
}



// ===== continuation @ rva d76fd45 (image 18d76fd45) =====

void FUN_18d76fd45(void)

{
  return;
}



// ===== continuation @ rva d76f0d8 (image 18d76f0d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d76f0d8(void)

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



// ===== continuation @ rva d76f63c (image 18d76f63c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d76f63c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de6ea0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d76f02b (image 18d76f02b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76f02b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182288678)();
  return;
}



// ===== continuation @ rva d76fd11 (image 18d76fd11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76fd11(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1822885a8)();
  return;
}



// ===== continuation @ rva d76fc2a (image 18d76fc2a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d76fc2a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d712076 (image 18d712076) =====

void FUN_18d712076(void)

{
  return;
}



// ===== continuation @ rva d7100dc (image 18d7100dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7100dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18227a438)();
  return;
}



// ===== continuation @ rva d7109c9 (image 18d7109c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7109c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18227a0f8)();
  return;
}



// ===== continuation @ rva d710305 (image 18d710305) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d710305(void)

{
  FUN_190dd72e0();
  (*_DAT_182279c08)();
  return;
}



// ===== continuation @ rva d710a2f (image 18d710a2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d710a2f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182279cd8)();
  return;
}



// ===== continuation @ rva d710351 (image 18d710351) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d710351(void)

{
  FUN_190ddce00();
  (*_DAT_18227a068)();
  return;
}



// ===== continuation @ rva d711e66 (image 18d711e66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d711e66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182279b58)();
  return;
}



// ===== continuation @ rva d711c78 (image 18d711c78) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d711c78(void)

{
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 3;
  FUN_190dd72e0();
  (*_DAT_18227a098)();
  return;
}



// ===== continuation @ rva d712c1a (image 18d712c1a) =====

void FUN_18d712c1a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d7122b4 (image 18d7122b4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7122b4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d710b8d (image 18d710b8d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d710b8d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7121b5 (image 18d7121b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7121b5(void)

{
  (*_DAT_18227a758)();
  return;
}



// ===== continuation @ rva d710244 (image 18d710244) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d710244(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



