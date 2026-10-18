// ===== continuation @ rva c3c82bd (image 18c3c82bd) =====

void FUN_18c3c82bd(void)

{
  return;
}



// ===== continuation @ rva c39e82b (image 18c39e82b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c39e881 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c39e82b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c3a0973 (image 18c3a0973) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c3a098a */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c3a0973(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c3a9c47 (image 18c3a9c47) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3a9c47(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000d3;
  
  uStack00000000000000d3 = in_stack_00000070;
  (**(code **)(*unaff_RSI + 0x680))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c3b7064 (image 18c3b7064) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c3b70a7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c3b7064(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c3c809c (image 18c3c809c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3c809c(void)

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



// ===== continuation @ rva c3a082a (image 18c3a082a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c3a087b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c3a082a(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c3b72cb (image 18c3b72cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c3b72e2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c3b72cb(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c39ee5a (image 18c39ee5a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c39ee9d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c39ee5a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c3a5f81 (image 18c3a5f81) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3a5f81(int param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong in_stack_00000050;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar4 = (~_DAT_1832fd728 + 0xcaf88293) *
          ((_DAT_1832fd9a0 ^ 0x93275b3b) + (ulonglong)((uint)_DAT_1832fd9a0 & 0x93275b3b) * 2);
  uVar4 = (uVar4 | _DAT_1832fd5d8) + (uVar4 & _DAT_1832fd5d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832fd9b0 = func_0x00018c3c84a0((uVar4 | 0x59dfd9a9) + (ulonglong)((uint)uVar4 & 0x59dfd9a9))
  ;
  uVar3 = _DAT_1832fd9b0 ^ 0x1240a9d1f12dbd1c;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar3;
  _DAT_1832fd690 = (_DAT_1832fd690 ^ uVar3) + 0xdffdfa9e ^ 0x5e244b8e24a6f502;
  _DAT_1832fd838 = (_DAT_1832fd838 * -0x27aac72f6371955f ^ _DAT_1832fd690) + uVar3;
  _DAT_1832fd5f8 = _DAT_1832fd838 ^ _DAT_1832fd690;
  _DAT_1832fd930 = 0xdffdfa9e;
  uVar4 = (~_DAT_1832fd7c0 + 0xa1fbb7dc) *
          ((_DAT_1832fd890 ^ 0x3dddb460) + (ulonglong)((uint)_DAT_1832fd890 & 0x3dddb460) * 2);
  uVar4 = (uVar4 | _DAT_1832fdca8) + (uVar4 & _DAT_1832fdca8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832fdc38 = func_0x00018c3c84a0((uVar4 | 0x9c2603bb) + (ulonglong)((uint)uVar4 & 0x9c2603bb))
  ;
  uVar4 = (_DAT_1832fdc38 & 0x1ffffffffff) - (_DAT_1832fdc38 >> 1 & 0x5555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832fdc38 & 0x1ffffffffff;
  _DAT_1832fda60 = (_DAT_1832fda60 ^ uVar4) + 0x1804209e ^ 0xcb87bab84737f4c5;
  _DAT_1832fd608 = (_DAT_1832fd608 * 0x39efca274a0b427 ^ _DAT_1832fda60) + uVar4;
  _DAT_1832fd658 = _DAT_1832fd608 ^ _DAT_1832fda60;
  _DAT_1832fd5d0 = 0x1804209e;
  uVar4 = (~_DAT_1832fd958 + 0xcb800901) *
          ((_DAT_1832fd588 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832fd588 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1832fdb38) + (uVar4 & _DAT_1832fdb38);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832fd778 = func_0x00018c3c84a0((uVar4 | 0x4fa22a25) + (ulonglong)((uint)uVar4 & 0x4fa22a25))
  ;
  _DAT_1832fdae0 = _DAT_1832fdae0 - 0xcb800900 ^ 0xe20fec9b963d698b;
  _DAT_1832fd568 = _DAT_1832fd7c8 * -0x7d52c55d3ae16d5d;
  _DAT_1832fd7c8 = _DAT_1832fd568 ^ _DAT_1832fdae0;
  _DAT_1832fda80 = 0x347ff700;
  uVar4 = (_DAT_1832fda18 ^ _DAT_181e6e7c0) + _DAT_1832fd730 + 0x84dd2325;
  uVar3 = (_DAT_1832fd730 ^ _UNK_181e6e7c8) + _DAT_1832fda18 + 0xcb800900;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832fda18 ^ _DAT_181e6e7c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832fd730 ^ _UNK_181e6e7c8;
  _DAT_1832fd900 =
       func_0x00018c3c84a0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832fda18 + 0xcb800900) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832fd730 + 0x84dd2325));
  _DAT_1832fd788 = _DAT_1832fd670 ^ _DAT_1832fd900 ^ 0xcc7f0900;
  _DAT_1832fd5a8 = (_DAT_1832fd5a8 ^ _DAT_1832fd900) + 0xcc7f0900 ^ 0x8b813a4af3655ddb;
  _DAT_1832fdb48 = (_DAT_1832fdb48 * 0x633e60d8ca98aaff ^ _DAT_1832fd5a8) + _DAT_1832fd900;
  _DAT_1832fd650 = _DAT_1832fdb48 ^ _DAT_1832fd5a8;
  _DAT_1832fd518 = 0xcc7f0900;
  uVar4 = (~_DAT_1832fda70 + 0x347ff701) *
          ((_DAT_1832fdcb0 ^ 0x485d2a25) + (ulonglong)((uint)_DAT_1832fdcb0 & 0x485d2a25) * 2);
  uVar4 = (uVar4 | _DAT_1832fd600) + (uVar4 & _DAT_1832fd600);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832fd970 = func_0x00018c3c84a0((uVar4 | 0x7c22dd25) + (ulonglong)((uint)uVar4 & 0x7c22dd25))
  ;
  _DAT_1832fda50 = _DAT_1832fd9d8 ^ _DAT_1832fd970 ^ 0x100ff0000;
  _DAT_1832fdc70 = (_DAT_1832fdc70 ^ _DAT_1832fd970) + 0x100ff0000 ^ 0x179c34193ab35d5a;
  _DAT_1832fd880 = (_DAT_1832fd880 * -0x6f0ef0d4f37e9dd7 ^ _DAT_1832fdc70) + _DAT_1832fd970;
  _DAT_1832fd9e0 = _DAT_1832fd880 ^ _DAT_1832fdc70;
  _DAT_1832fd848 = 0xff0000;
  uVar4 = (_DAT_1832fd7e8 ^ _DAT_181e6e7d0) + _DAT_1832fda90 + 0xef49c6fc;
  uVar3 = (_DAT_1832fda90 ^ _UNK_181e6e7d8) + _DAT_1832fd7e8 + 0x95931a27;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832fd7e8 ^ _DAT_181e6e7d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832fda90 ^ _UNK_181e6e7d8;
  _DAT_1832fdca0 =
       func_0x00018c3c84a0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832fd7e8 + 0x95931a27) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832fda90 + 0xef49c6fc));
  uVar4 = _DAT_1832fdca0 >> 1 | _DAT_1832fdca0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1832fdca0;
  _DAT_1832fd548 = _DAT_1832fdab8 ^ uVar4 ^ 0x100ff0000;
  _DAT_1832fd918 = (_DAT_1832fd918 ^ uVar4) + 0x100ff0000 ^ 0xadf967b8fb51205b;
  _DAT_1832fd920 = (_DAT_1832fd920 * 0x3c0c318ab69a0213 ^ _DAT_1832fd918) + uVar4;
  _DAT_1832fd858 = _DAT_1832fd920 ^ _DAT_1832fd918;
  _DAT_1832fd788 = 0xff0000;
  uVar4 = (_DAT_1832fd7a0 ^ _DAT_181e6e7e0) + _DAT_1832fdc60 + 0x84222325;
  uVar3 = (_DAT_1832fdc60 ^ _UNK_181e6e7e8) + _DAT_1832fd7a0 + 0x6d4d7fd8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832fd7a0 ^ _DAT_181e6e7e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832fdc60 ^ _UNK_181e6e7e8;
  _DAT_1832fd5c8 =
       func_0x00018c3c84a0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832fd7a0 + 0x6d4d7fd8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832fdc60 + 0x84222325));
  uVar4 = (_DAT_1832fd5c8 & 0xffffffff) * (_DAT_181e6e7f0 & 0xffffffff) +
          ((ulonglong)_DAT_181e6e800 * (_DAT_1832fd5c8 & 0xffffffff) +
           (_DAT_1832fd5c8 >> 0x20) * (_DAT_181e6e7f0 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  _DAT_1832fd680 = (_DAT_1832fd680 ^ uVar4) - 0x6d4d7fd8 ^ 0xb3b3eb3528e8b379;
  _DAT_1832fd7b0 = (_DAT_1832fd7b0 * -0xf1d4017ce35273f ^ _DAT_1832fd680) + uVar4;
  _DAT_1832fda60 = _DAT_1832fd7b0 ^ _DAT_1832fd680;
  _DAT_1832fd800 = 0x92b28028;
  _DAT_1832fd718 = func_0x00018c3c84a0(_DAT_1832fd7b0 + 0xffdbff98f4ff8fff ^ 0xbd);
  uVar4 = (((_DAT_1832fd718 ^ 0x6dff7fd8) & 0x1f) << 0x3a | (_DAT_1832fd718 ^ 0x6dff7fd8) >> 6) ^
          0x6d4d7fd8;
  _DAT_1832fd5f8 = _DAT_1832fd8b8 ^ uVar4 ^ 0x6e4c7fd8;
  _DAT_1832fd870 = (_DAT_1832fd870 ^ uVar4) + 0x6e4c7fd8 ^ 0x2d15779294ad6f31;
  _DAT_1832fd9e0 = (_DAT_1832fd9e0 * 0x59970493335e15e7 ^ _DAT_1832fd870) + uVar4;
  _DAT_1832fd8e0 = _DAT_1832fd9e0 ^ _DAT_1832fd870;
  _DAT_1832fd518 = 0x6e4c7fd8;
  _DAT_1832fdc60 = func_0x00018c3c84a0(_DAT_1832fd8b0 + 0xff5400372d004bffU ^ 0xda);
  uVar4 = (_DAT_1832fdc60 ^ 0xfefefff8) & 0x3fffffffffff;
  _DAT_1832fdaf8 = _DAT_1832fdbf0 ^ uVar4 ^ 0x100ff0000;
  _DAT_1832fd590 = (_DAT_1832fd590 ^ uVar4) + 0x100ff0000 ^ 0x396b8895eadd0756;
  _DAT_1832fda08 = (_DAT_1832fda08 * -0x6505b41983d9b53f ^ _DAT_1832fd590) + uVar4;
  _DAT_1832fda60 = _DAT_1832fda08 ^ _DAT_1832fd590;
  _DAT_1832fd970 = 0xff0000;
  _DAT_1832fdc18 = func_0x00018c3c84a0(_DAT_1832fdac8 ^ 0xff39003d24ffa4ef);
  uVar4 = (_DAT_1832fdc18 << 10 | _DAT_1832fdc18 >> 0x36) ^ 0xdffdfa9e;
  _DAT_1832fd970 = _DAT_1832fdca0 ^ uVar4 ^ 0xf8021b3c;
  _DAT_1832fd7b8 = (_DAT_1832fd7b8 ^ uVar4) + 0xf8021b3c ^ 0x190c6462a7923afb;
  _DAT_1832fd8d8 = (_DAT_1832fd8d8 * 0x6767377e847cb217 ^ _DAT_1832fd7b8) + uVar4;
  _DAT_1832fd6b0 = _DAT_1832fd8d8 ^ _DAT_1832fd7b8;
  _DAT_1832fd530 = 0xf8021b3c;
  uVar4 = (~_DAT_1832fd7b8 + 0x1804209f) *
          ((_DAT_1832fd798 ^ 0x5bdfd9bb) + (ulonglong)((uint)_DAT_1832fd798 & 0x5bdfd9bb) * 2);
  uVar4 = (uVar4 | _DAT_1832fd6e8) + (uVar4 & _DAT_1832fd6e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832fd898 = func_0x00018c3c84a0((uVar4 | 0x43dbf925) + (ulonglong)((uint)uVar4 & 0x43dbf925))
  ;
  _DAT_1832fdae8 = (_DAT_1832fdae8 ^ _DAT_1832fd798) + 0x1804209e ^ 0x1c6d8fab05263da;
  _DAT_1832fd8e0 = (_DAT_1832fd8e0 * 0x666312d4cac11dd3 ^ _DAT_1832fdae8) + _DAT_1832fd798;
  _DAT_1832fd9f8 = _DAT_1832fd8e0 ^ _DAT_1832fdae8;
  _DAT_1832fdc00 = 0x1804209e;
  _DAT_1832fdb38 = func_0x00018c3c84a0(_DAT_1832fd550 + 0xffdcff83e2ffe1ffU ^ 0x5d);
  _DAT_1832fd718 = _DAT_1832fdb38 & 0x1ffffffff;
  _DAT_1832fd988 = _DAT_1832fd988 ^ _DAT_1832fd718 ^ 0x5aa7023b01c3c57f;
  _DAT_1832fda38 = (_DAT_1832fda38 * 0x67a57ee0c64d848d ^ _DAT_1832fd988) + _DAT_1832fd718;
  _DAT_1832fdb58 = _DAT_1832fda38 ^ _DAT_1832fd988;
  _DAT_1832fda40 = 0;
  uVar4 = (_DAT_1832fd920 ^ 0x84dd2325) + _DAT_1832fd960 + 0x84dd2325;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832fd920 ^ 0x84dd2325;
  uVar3 = ((_DAT_1832fd960 + _DAT_1832fd920) * 0x2000 | _DAT_1832fd960 + _DAT_1832fd920 >> 0x33) ^
          _DAT_1832fd960;
  _DAT_1832fda98 =
       func_0x00018c3c84a0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1832fd920 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832fd960 + 0x84dd2325));
  uVar4 = (ulonglong)(~(uint)(_DAT_1832fda98 >> 10) & 0xff0000) ^ 0xff0000;
  _DAT_1832fd7a8 = _DAT_1832fd520 ^ uVar4 ^ 0xff0000;
  _DAT_1832fdcc0 = (_DAT_1832fdcc0 ^ uVar4) + 0xff0000 ^ 0x49b6fb51104376ea;
  _DAT_1832fda38 = (_DAT_1832fda38 * -0x38047fe8d4d1aadb ^ _DAT_1832fdcc0) + uVar4;
  _DAT_1832fd908 = _DAT_1832fda38 ^ _DAT_1832fdcc0;
  _DAT_1832fd800 = 0xff0000;
  _DAT_1832fd7b8 = func_0x00018c3c84a0(_DAT_1832fd6c0 + 0xffddff5bbbffdfffU ^ 0xb8);
  uVar4 = (_DAT_1832fd7b8 ^ 0xdffdfa9d20000000) & 0xfffffffff0000000;
  _DAT_1832fda60 = (_DAT_1832fda60 ^ uVar4) + 0x20020561 ^ 0xf6e6d43af4823485;
  _DAT_1832fdb08 = (_DAT_1832fdb08 * -0x6f8011baf8eb704d ^ _DAT_1832fda60) + uVar4;
  _DAT_1832fdb18 = _DAT_1832fdb08 ^ _DAT_1832fda60;
  _DAT_1832fd818 = 0x20020561;
  uVar4 = (_DAT_1832fdce0 ^ _DAT_181e6e810) + _DAT_1832fd878 + 0x93275b3b;
  uVar3 = (_DAT_1832fd878 ^ _UNK_181e6e818) + _DAT_1832fdce0 + 0x1705781e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832fdce0 ^ _DAT_181e6e810;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832fd878 ^ _UNK_181e6e818;
  _DAT_1832fd710 =
       func_0x00018c3c84a0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832fdce0 + 0x1705781e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832fd878 + 0x93275b3b));
  uVar4 = _DAT_1832fd710 - (_DAT_1832fd710 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1832fd710;
  _DAT_1832fdcf8 = _DAT_1832fdcf8 ^ uVar4 ^ 0xcdd86a5d80f744df;
  _DAT_1832fdcb0 = (_DAT_1832fdcb0 * -0x40aeedc944d03675 ^ _DAT_1832fdcf8) + uVar4;
  _DAT_1832fd9e0 = _DAT_1832fdcb0 ^ _DAT_1832fdcf8;
  _DAT_1832fdaf0 = _DAT_1832fd7b0;
  _DAT_1832fd8f8 = 0;
  _DAT_1832fd940 = func_0x00018c3c84a0(_DAT_1832fdbf0 + 0xffe2ff83db002aff ^ 0x9d);
  uVar4 = _DAT_1832fd940 - (_DAT_1832fd940 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ _DAT_1832fd940;
  _DAT_1832fda08 = _DAT_1832fd650 ^ uVar4 ^ 0xff0000;
  _DAT_1832fda28 = (_DAT_1832fda28 ^ uVar4) + 0xff0000 ^ 0xdec5e4ae7b52f8f4;
  _DAT_1832fd748 = (_DAT_1832fd748 * -0x696ae011f38857ef ^ _DAT_1832fda28) + uVar4;
  _DAT_1832fd830 = _DAT_1832fd748 ^ _DAT_1832fda28;
  _DAT_1832fd868 = 0xff0000;
  uVar3 = (ulonglong)(uint)(param_1 << 0x10);
  uVar4 = (~_DAT_1832fd7a0 + 0xff0001) *
          ((uVar3 ^ 0x84222325 ^ _DAT_1832fdc78) +
          (ulonglong)((uint)_DAT_1832fdc78 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | _DAT_1832fd5d8) + (uVar4 & _DAT_1832fd5d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832fdb00 =
       func_0x00018c3c84a0((uVar3 ^ 0x84dd2325 | uVar4) +
                           (ulonglong)((uint)(uVar3 ^ 0x84dd2325) & (uint)uVar4));
  uVar4 = (uVar3 * 0xff0000 ^ _DAT_1832fdb00) & 0x3ffffffffff ^ 0xff0000;
  uVar5 = (ulonglong)(param_1 << 0x10 & 0xff0000);
  _DAT_1832fdb70 = (_DAT_1832fdb70 ^ uVar4) + uVar5 ^ 0xb848b89eb66b16fd;
  _DAT_1832fdb28 = (_DAT_1832fdb28 * -0x7fb8f269f447322b ^ _DAT_1832fdb70) + uVar4;
  _DAT_1832fda08 = _DAT_1832fdb28 ^ _DAT_1832fdb70;
  uVar3 = in_stack_00000050 ^ 0x84222325;
  uVar4 = ((_DAT_1832fd8d0 ^ uVar3) + (uVar3 & _DAT_1832fd8d0) * 2) * (uVar5 - _DAT_1832fd858);
  uVar4 = (uVar4 | _DAT_1832fda10) + (uVar4 & _DAT_1832fda10);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832fd8d8 = uVar5;
  _DAT_1832fd8a0 = func_0x00018c3c84a0((uVar3 ^ uVar5 | uVar4) + (uVar4 & (uVar3 ^ uVar5)));
  _DAT_1832fd610 = in_stack_00000050 | uVar5;
  _DAT_1832fdb10 = (_DAT_1832fdb10 ^ uVar5 ^ _DAT_1832fd8a0) + _DAT_1832fd610 ^ 0xb7dbc487fc832247;
  _DAT_1832fd5b0 =
       (_DAT_1832fd5b0 * -0x47b2fda7fa2a7acb ^ _DAT_1832fdb10) + (uVar5 ^ _DAT_1832fd8a0);
  _DAT_1832fd948 = _DAT_1832fd5b0 ^ _DAT_1832fdb10;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar2 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c374027 (image 18c374027) =====

void FUN_18c374027(void)

{
  return;
}



// ===== continuation @ rva c36e667 (image 18c36e667) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c36e667(void)

{
  FUN_190ddce00();
  (*_DAT_181e60788)();
  return;
}



// ===== continuation @ rva c374016 (image 18c374016) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c374016(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181e61358)();
  return;
}



// ===== continuation @ rva c36e69a (image 18c36e69a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c36e69a(void)

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



// ===== continuation @ rva c37122e (image 18c37122e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37122e(void)

{
  FUN_190dd72e0();
  (*_DAT_181e60818)();
  return;
}



// ===== continuation @ rva c37316f (image 18c37316f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37316f(void)

{
  FUN_190dd72e0();
  (*_DAT_181e61938)();
  return;
}



// ===== continuation @ rva c374093 (image 18c374093) =====

void FUN_18c374093(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c37247c (image 18c37247c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c37247c(void)

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



// ===== continuation @ rva c3716fa (image 18c3716fa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3716fa(void)

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



// ===== continuation @ rva c371f29 (image 18c371f29) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c371f29(undefined8 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000078;
  
  (**(code **)(*unaff_RSI + 0x338))(param_1,in_stack_00000078);
  (*_DAT_181e60b18)();
  return;
}



// ===== continuation @ rva c373de0 (image 18c373de0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c373de0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e61aa8)();
  return;
}



// ===== continuation @ rva c371682 (image 18c371682) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c371682(void)

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



// ===== continuation @ rva c3782cb (image 18c3782cb) =====

void FUN_18c3782cb(void)

{
  return;
}



// ===== continuation @ rva c3742b7 (image 18c3742b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3742b7(void)

{
  FUN_190ddce00();
  (*_DAT_181e62c28)();
  return;
}



// ===== continuation @ rva c378145 (image 18c378145) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378145(void)

{
  (*_DAT_181e62b28)();
  return;
}



// ===== continuation @ rva c3787f4 (image 18c3787f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3787f4(void)

{
  (*_DAT_181e62cc8)();
  return;
}



// ===== continuation @ rva c377c0a (image 18c377c0a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c377c0a(void)

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



// ===== continuation @ rva c378369 (image 18c378369) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378369(void)

{
  FUN_190dd72e0();
  (*_DAT_181e62568)();
  return;
}



// ===== continuation @ rva c3774c7 (image 18c3774c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3774c7(void)

{
  FUN_190dd72e0();
  (*_DAT_181e629c8)();
  return;
}



// ===== continuation @ rva c3787bc (image 18c3787bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3787bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181e62b18)();
  return;
}



// ===== continuation @ rva c378397 (image 18c378397) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c378397(void)

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



// ===== continuation @ rva c378470 (image 18c378470) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378470(void)

{
  FUN_190dd72e0();
  (*_DAT_181e629f8)();
  return;
}



// ===== continuation @ rva c377690 (image 18c377690) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c377690(void)

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



// ===== continuation @ rva c378b95 (image 18c378b95) =====

void FUN_18c378b95(void)

{
  return;
}



// ===== continuation @ rva c37894c (image 18c37894c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37894c(void)

{
  FUN_190ddfc90();
  (*_DAT_181e63a48)();
  return;
}



// ===== continuation @ rva c378b35 (image 18c378b35) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378b35(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e639c8)();
  return;
}



// ===== continuation @ rva c378a0d (image 18c378a0d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c378a0d(void)

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



// ===== continuation @ rva c3789b9 (image 18c3789b9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3789b9(void)

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



// ===== continuation @ rva c378ae6 (image 18c378ae6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c378ae6(void)

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



// ===== continuation @ rva c378ba1 (image 18c378ba1) =====

void FUN_18c378ba1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c378b72 (image 18c378b72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378b72(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181e639e8)();
    return;
  }
  (*_DAT_181e639e8)();
  return;
}



// ===== continuation @ rva c378b50 (image 18c378b50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378b50(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181e639b8)();
  return;
}



// ===== continuation @ rva c378a8f (image 18c378a8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378a8f(void)

{
  FUN_190ddfc90();
  (*_DAT_181e63a28)();
  return;
}



// ===== continuation @ rva c378b8d (image 18c378b8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378b8d(void)

{
  (*_DAT_181e639e8)();
  return;
}



// ===== continuation @ rva c378f05 (image 18c378f05) =====

void FUN_18c378f05(void)

{
  return;
}



// ===== continuation @ rva c378cbc (image 18c378cbc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378cbc(void)

{
  FUN_190ddfc90();
  (*_DAT_181e63ae8)();
  return;
}



// ===== continuation @ rva c378d7d (image 18c378d7d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c378d7d(void)

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



// ===== continuation @ rva c378d29 (image 18c378d29) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378d29(void)

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



// ===== continuation @ rva c378ec0 (image 18c378ec0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378ec0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181e63b78)();
  return;
}



// ===== continuation @ rva c378e6c (image 18c378e6c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378e6c(void)

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



// ===== continuation @ rva c378e56 (image 18c378e56) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c378e56(void)

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



// ===== continuation @ rva c378f11 (image 18c378f11) =====

void FUN_18c378f11(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c378cef (image 18c378cef) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c378cef(void)

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



// ===== continuation @ rva c378dff (image 18c378dff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378dff(void)

{
  FUN_190ddfc90();
  (*_DAT_181e63b88)();
  return;
}



// ===== continuation @ rva c378efd (image 18c378efd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c378efd(void)

{
  (*_DAT_181e63b08)();
  return;
}



// ===== continuation @ rva c378d13 (image 18c378d13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c378d13(void)

{
  longlong unaff_R14;
  
  switch(unaff_R14 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c37993b (image 18c37993b) =====

void FUN_18c37993b(void)

{
  return;
}



// ===== continuation @ rva c379028 (image 18c379028) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c379028(void)

{
  FUN_190ddce00();
  (*_DAT_181e63cd8)();
  return;
}



// ===== continuation @ rva c379689 (image 18c379689) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c379689(void)

{
  (*_DAT_181e63f18)();
  return;
}



// ===== continuation @ rva c37992a (image 18c37992a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37992a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181e63dc8)();
  return;
}



// ===== continuation @ rva c3797ef (image 18c3797ef) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3797ef(void)

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



// ===== continuation @ rva c379117 (image 18c379117) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c379117(void)

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



// ===== continuation @ rva c379945 (image 18c379945) =====

void FUN_18c379945(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c37934b (image 18c37934b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c37934b(void)

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



// ===== continuation @ rva c37990d (image 18c37990d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37990d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e63dc8)();
  return;
}



// ===== continuation @ rva c379160 (image 18c379160) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c379160(void)

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



// ===== continuation @ rva c379462 (image 18c379462) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c379462(void)

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



// ===== continuation @ rva c37bf3e (image 18c37bf3e) =====

void FUN_18c37bf3e(void)

{
  return;
}



// ===== continuation @ rva c37bda4 (image 18c37bda4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37bda4(void)

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



// ===== continuation @ rva c37cbeb (image 18c37cbeb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c37cbeb(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack000000000000007c;
  
  uStack000000000000007c = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c37cb96 (image 18c37cb96) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37cb96(void)

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



// ===== continuation @ rva c37f2cb (image 18c37f2cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37f2cb(void)

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



// ===== continuation @ rva c37f0d7 (image 18c37f0d7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c37f0d7(void)

{
  longlong in_stack_00000048;
  
  switch(in_stack_00000048 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c384496 (image 18c384496) =====

undefined4 FUN_18c384496(undefined4 param_1)

{
  char in_AL;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (in_AL == '\0') {
    uVar1 = param_1;
  }
  return uVar1;
}



// ===== continuation @ rva c37cf65 (image 18c37cf65) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37cf65(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000078;
  
  uStack0000000000000078 = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x773,0x24);
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



// ===== continuation @ rva c37cefd (image 18c37cefd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c37cefd(void)

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



// ===== continuation @ rva c380c13 (image 18c380c13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c380c13(void)

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



// ===== continuation @ rva c380928 (image 18c380928) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c380928(void)

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



// ===== continuation @ rva c37f50f (image 18c37f50f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18c380a25(void)

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



// ===== continuation @ rva c37e52c (image 18c37e52c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18c380a25(void)

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



// ===== continuation @ rva c384782 (image 18c384782) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c384782(void)

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



// ===== continuation @ rva c38472e (image 18c38472e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38472e(void)

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



// ===== continuation @ rva c385604 (image 18c385604) =====

void FUN_18c385604(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c384ecb (image 18c384ecb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c384ecb(void)

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



// ===== continuation @ rva c3855f5 (image 18c3855f5) =====

void FUN_18c3855f5(void)

{
  return;
}



// ===== continuation @ rva c3847f0 (image 18c3847f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3847f0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e664d8)();
  return;
}



// ===== continuation @ rva c38480b (image 18c38480b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38480b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_181e66278)();
  return;
}



// ===== continuation @ rva c3847a9 (image 18c3847a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3847a9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181e66368)();
  return;
}



// ===== continuation @ rva c3853b6 (image 18c3853b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3853b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_181e66398)();
  return;
}



// ===== continuation @ rva c384a4d (image 18c384a4d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c384a4d(void)

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



// ===== continuation @ rva c3855e5 (image 18c3855e5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3855e5(void)

{
  (*_DAT_181e66318)();
  return;
}



// ===== continuation @ rva c384ca9 (image 18c384ca9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c384ca9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e66318)();
  return;
}



// ===== continuation @ rva c3855c1 (image 18c3855c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3855c1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181e660b8)();
  return;
}



// ===== continuation @ rva c384f48 (image 18c384f48) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c384f48(void)

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



// ===== continuation @ rva c387716 (image 18c387716) =====

void FUN_18c387716(void)

{
  return;
}



// ===== continuation @ rva c38577c (image 18c38577c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38577c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181e66898)();
  return;
}



// ===== continuation @ rva c388082 (image 18c388082) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c388082(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e671e8)();
  return;
}



// ===== continuation @ rva c387c4a (image 18c387c4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c387c4a(void)

{
  FUN_190dd72e0();
  (*_DAT_181e66c28)();
  return;
}



// ===== continuation @ rva c3865e0 (image 18c3865e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3865e0(void)

{
  (*_DAT_181e674b8)();
  return;
}



// ===== continuation @ rva c38632a (image 18c38632a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38632a(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e66d78)();
  return;
}



// ===== continuation @ rva c385c12 (image 18c385c12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c385c12(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_181e67308)();
  return;
}



// ===== continuation @ rva c3874a0 (image 18c3874a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3874a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e66bb8)();
  return;
}



// ===== continuation @ rva c386eb7 (image 18c386eb7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c386eb7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e66a78)();
  return;
}



// ===== continuation @ rva c388011 (image 18c388011) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c388011(void)

{
  (*_DAT_181e674b8)();
  return;
}



// ===== continuation @ rva c387166 (image 18c387166) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c387166(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e667b8)();
  return;
}



// ===== continuation @ rva c386e5b (image 18c386e5b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c386e5b(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c38756c (image 18c38756c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c38756c(void)

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



// ===== continuation @ rva c38727c (image 18c38727c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38727c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181e66ff8)();
  return;
}



// ===== continuation @ rva c38e2eb (image 18c38e2eb) =====

void FUN_18c38e2eb(void)

{
  return;
}



// ===== continuation @ rva c38e14c (image 18c38e14c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38e14c(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c3901ed (image 18c3901ed) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3901ed(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c38ffd2 (image 18c38ffd2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38ffd2(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva c39a7ff (image 18c39a7ff) =====

void FUN_18c39a7ff(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva c390eb7 (image 18c390eb7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c390eb7(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c390a43 (image 18c390a43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c390a43(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c39009a (image 18c39009a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c39009a(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c392cb6 (image 18c392cb6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c392cb6(void)

{
  char cVar1;
  longlong *unaff_RDI;
  longlong *unaff_R12;
  undefined4 uStack00000000000000a4;
  
  (**(code **)(*unaff_RDI + 0xd8))();
  uStack00000000000000a4 = 0x3b51dcc9;
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(*unaff_R12 + 0x518))();
  FUN_190ddfc90();
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



// ===== continuation @ rva c38f7ed (image 18c38f7ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c38f7ed(void)

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



// ===== continuation @ rva c39aaa2 (image 18c39aaa2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c39aaa2(void)

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



// ===== continuation @ rva c39aa4e (image 18c39aa4e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39aa4e(void)

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



// ===== continuation @ rva c39b93a (image 18c39b93a) =====

void FUN_18c39b93a(void)

{
  return;
}



// ===== continuation @ rva c39b1c5 (image 18c39b1c5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39b1c5(void)

{
  FUN_190de3220();
  (*_DAT_181e6ac18)();
  return;
}



// ===== continuation @ rva c39b949 (image 18c39b949) =====

void FUN_18c39b949(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c39ac84 (image 18c39ac84) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c39ac84(void)

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



// ===== continuation @ rva c39b185 (image 18c39b185) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39b185(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181e6ab88)();
  return;
}



// ===== continuation @ rva c39b6e2 (image 18c39b6e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39b6e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e6b018)();
  return;
}



// ===== continuation @ rva c39b291 (image 18c39b291) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c39b291(void)

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



// ===== continuation @ rva c39b309 (image 18c39b309) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39b309(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181e6abf8)();
  return;
}



// ===== continuation @ rva c39b248 (image 18c39b248) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c39b248(void)

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



// ===== continuation @ rva c39da56 (image 18c39da56) =====

void FUN_18c39da56(void)

{
  return;
}



// ===== continuation @ rva c39babc (image 18c39babc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39babc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181e6b438)();
  return;
}



// ===== continuation @ rva c39e594 (image 18c39e594) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39e594(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e6b4b8)();
  return;
}



// ===== continuation @ rva c39cecb (image 18c39cecb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c39cecb(void)

{
  longlong *unaff_RSI;
  longlong in_stack_00000060;
  
  (**(code **)(*unaff_RSI + 0x518))();
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c39c3a9 (image 18c39c3a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39c3a9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e6b4e8)();
  return;
}



// ===== continuation @ rva c39bce5 (image 18c39bce5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39bce5(void)

{
  FUN_190dd72e0();
  (*_DAT_181e6b908)();
  return;
}



// ===== continuation @ rva c39c533 (image 18c39c533) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39c533(void)

{
  (*_DAT_181e6be98)();
  return;
}



// ===== continuation @ rva c39c730 (image 18c39c730) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39c730(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e6b228)();
  return;
}



// ===== continuation @ rva c39c024 (image 18c39c024) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39c024(void)

{
  FUN_190de3220();
  (*_DAT_181e6b5e8)();
  return;
}



// ===== continuation @ rva c39cf46 (image 18c39cf46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c39cf46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e6b828)();
  return;
}



// ===== continuation @ rva c39e5fa (image 18c39e5fa) =====

void FUN_18c39e5fa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c39c7c5 (image 18c39c7c5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c39c7c5(void)

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



// ===== continuation @ rva c39d90a (image 18c39d90a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c39d90a(void)

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



// ===== continuation @ rva c3532ac (image 18c3532ac) =====

void FUN_18c3532ac(void)

{
  return;
}



// ===== continuation @ rva c34dced (image 18c34dced) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c34dced(void)

{
  FUN_190ddce00();
  (*_DAT_181e56c58)();
  return;
}



// ===== continuation @ rva c353a30 (image 18c353a30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c353a30(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181e57188)();
  return;
}



// ===== continuation @ rva c350df9 (image 18c350df9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c350df9(void)

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



// ===== continuation @ rva c351874 (image 18c351874) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c351874(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e57188)();
  return;
}



// ===== continuation @ rva c353a4d (image 18c353a4d) =====

void FUN_18c353a4d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c35303b (image 18c35303b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c35303b(void)

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



// ===== continuation @ rva c352eb7 (image 18c352eb7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c352eb7(void)

{
  (*_DAT_181e57128)();
  return;
}



// ===== continuation @ rva c35177b (image 18c35177b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c35177b(void)

{
  FUN_190dd72e0();
  (*_DAT_181e56598)();
  return;
}



// ===== continuation @ rva c351235 (image 18c351235) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c351235(void)

{
  (*_DAT_181e57208)();
  return;
}



// ===== continuation @ rva c351453 (image 18c351453) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c351453(void)

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



// ===== continuation @ rva c35c13e (image 18c35c13e) =====

void FUN_18c35c13e(void)

{
  return;
}



// ===== continuation @ rva c353c91 (image 18c353c91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c353c91(void)

{
  FUN_190ddce00();
  (*_DAT_181e59e20)();
  return;
}



// ===== continuation @ rva c35e7f5 (image 18c35e7f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c35e7f5(void)

{
  (*_DAT_181e5a490)();
  return;
}



// ===== continuation @ rva c35dbd2 (image 18c35dbd2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c35dbd2(void)

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



// ===== continuation @ rva c35dda8 (image 18c35dda8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c35dda8(void)

{
  (*_DAT_181e5a1f0)();
  return;
}



// ===== continuation @ rva c35b601 (image 18c35b601) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c35b601(void)

{
  (*_DAT_181e58130)();
  return;
}



// ===== continuation @ rva c357562 (image 18c357562) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c357562(void)

{
  int in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c360883 (image 18c360883) =====

void FUN_18c360883(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c35a46a (image 18c35a46a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c35a46a(void)

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



// ===== continuation @ rva c35adf7 (image 18c35adf7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c35adf7(void)

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



// ===== continuation @ rva c35f5a5 (image 18c35f5a5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c35f5a5(void)

{
  (*_DAT_181e5a1f0)();
  return;
}



// ===== continuation @ rva c35e8b0 (image 18c35e8b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c35e8b0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e5a500)();
  return;
}



// ===== continuation @ rva c35e538 (image 18c35e538) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c35e538(void)

{
  int in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c38bd74 (image 18c38bd74) =====

void FUN_18c38bd74(void)

{
  return;
}



// ===== continuation @ rva c3884c4 (image 18c3884c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3884c4(void)

{
  FUN_190ddce00();
  (*_DAT_181e67d38)();
  return;
}



// ===== continuation @ rva c38adea (image 18c38adea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c38adea(void)

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



// ===== continuation @ rva c38bcec (image 18c38bcec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38bcec(void)

{
  FUN_190dd9df0();
  (*_DAT_181e67a48)();
  return;
}



// ===== continuation @ rva c38bc6f (image 18c38bc6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38bc6f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181e67928)();
  return;
}



// ===== continuation @ rva c38b115 (image 18c38b115) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38b115(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e67a88)();
  return;
}



// ===== continuation @ rva c38a904 (image 18c38a904) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38a904(void)

{
  FUN_190dd72e0();
  (*_DAT_181e67af8)();
  return;
}



// ===== continuation @ rva c38ae0b (image 18c38ae0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38ae0b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181e67d98)();
  return;
}



// ===== continuation @ rva c38b83a (image 18c38b83a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38b83a(void)

{
  (*_DAT_181e67648)();
  return;
}



// ===== continuation @ rva c38bde0 (image 18c38bde0) =====

void FUN_18c38bde0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c38b7bb (image 18c38b7bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c38b7bb(void)

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



// ===== continuation @ rva c38b7fa (image 18c38b7fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38b7fa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181e67d08)();
  return;
}



// ===== continuation @ rva c38af0b (image 18c38af0b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c38af0b(void)

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



// ===== continuation @ rva c3cc8a2 (image 18c3cc8a2) =====

void FUN_18c3cc8a2(void)

{
  return;
}



// ===== continuation @ rva c3c861b (image 18c3c861b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3c861b(void)

{
  FUN_190ddce00();
  (*_DAT_181e70928)();
  return;
}



// ===== continuation @ rva c3cc0fa (image 18c3cc0fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3cc0fa(void)

{
  (*_DAT_181e70898)();
  return;
}



// ===== continuation @ rva c3cc77c (image 18c3cc77c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3cc77c(void)

{
  FUN_190de3220();
  (*_DAT_181e6ffc8)();
  return;
}



// ===== continuation @ rva c3d2879 (image 18c3d2879) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d2879(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e70098)();
  return;
}



// ===== continuation @ rva c3d129d (image 18c3d129d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d129d(void)

{
  FUN_190ddfc90();
  (*_DAT_181e6fc18)();
  return;
}



// ===== continuation @ rva c3d2b9a (image 18c3d2b9a) =====

void FUN_18c3d2b9a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c3d2842 (image 18c3d2842) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3d2842(void)

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



// ===== continuation @ rva c3cd1c7 (image 18c3cd1c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3cd1c7(void)

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



// ===== continuation @ rva c3d2b34 (image 18c3d2b34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d2b34(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e704a8)();
  return;
}



// ===== continuation @ rva c3c86b2 (image 18c3c86b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3c86b2(void)

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



// ===== continuation @ rva c3d0f56 (image 18c3d0f56) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3d0f56(void)

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



// ===== continuation @ rva c3dbd19 (image 18c3dbd19) =====

void FUN_18c3dbd19(void)

{
  return;
}



// ===== continuation @ rva c3d2dec (image 18c3d2dec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d2dec(void)

{
  FUN_190ddce00();
  (*_DAT_181e74798)();
  return;
}



// ===== continuation @ rva c3d8c70 (image 18c3d8c70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d8c70(void)

{
  FUN_190dd72e0();
  (*_DAT_181e73298)();
  return;
}



// ===== continuation @ rva c3dab16 (image 18c3dab16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3dab16(void)

{
  (*_DAT_181e74a48)();
  return;
}



// ===== continuation @ rva c3daeee (image 18c3daeee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3daeee(void)

{
  (*_DAT_181e74848)();
  return;
}



// ===== continuation @ rva c3d9983 (image 18c3d9983) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3d9983(void)

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



// ===== continuation @ rva c3d6a92 (image 18c3d6a92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d6a92(void)

{
  FUN_190de3220();
  (*_DAT_181e73668)();
  return;
}



// ===== continuation @ rva c3d9e23 (image 18c3d9e23) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d9e23(void)

{
  (*_DAT_181e74088)();
  return;
}



// ===== continuation @ rva c3dbcfb (image 18c3dbcfb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3dbcfb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181e74478)();
  return;
}



// ===== continuation @ rva c3d9600 (image 18c3d9600) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3d9600(void)

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



// ===== continuation @ rva c3d7799 (image 18c3d7799) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d7799(void)

{
  (*_DAT_181e73d88)();
  return;
}



// ===== continuation @ rva c3d8fc0 (image 18c3d8fc0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3d8fc0(void)

{
  FUN_190dd72e0();
  (*_DAT_181e726e8)();
  return;
}



// ===== continuation @ rva c3e0c34 (image 18c3e0c34) =====

void FUN_18c3e0c34(void)

{
  return;
}



// ===== continuation @ rva c3dbfa4 (image 18c3dbfa4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3dbfa4(void)

{
  FUN_190ddce00();
  (*_DAT_181e75a38)();
  return;
}



// ===== continuation @ rva c3e0e47 (image 18c3e0e47) =====

void FUN_18c3e0e47(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c3dfc82 (image 18c3dfc82) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3dfc82(void)

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



// ===== continuation @ rva c3df3d8 (image 18c3df3d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3df3d8(void)

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



// ===== continuation @ rva c3dfe3d (image 18c3dfe3d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3dfe3d(void)

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



// ===== continuation @ rva c3dfb36 (image 18c3dfb36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3dfb36(void)

{
  char cVar1;
  longlong *in_stack_00000060;
  
  FUN_184117d80(in_stack_00000060);
  cVar1 = (**(code **)(*in_stack_00000060 + 0x720))(in_stack_00000060);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c3dfadf (image 18c3dfadf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3dfadf(void)

{
  char cVar1;
  longlong *in_stack_00000060;
  
  FUN_190dd72e0(in_stack_00000060,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*in_stack_00000060 + 0x720))(in_stack_00000060);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c3e0e16 (image 18c3e0e16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e0e16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x368))();
  (*_DAT_181e76058)();
  return;
}



// ===== continuation @ rva c3df3f9 (image 18c3df3f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3df3f9(void)

{
  FUN_190ddfc90();
  (*_DAT_181e757a8)();
  return;
}



// ===== continuation @ rva c3dfb6c (image 18c3dfb6c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3dfb6c(void)

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



// ===== continuation @ rva c3e4701 (image 18c3e4701) =====

void FUN_18c3e4701(void)

{
  return;
}



// ===== continuation @ rva c3e1034 (image 18c3e1034) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e1034(void)

{
  FUN_190ddce00();
  (*_DAT_181e771a8)();
  return;
}



// ===== continuation @ rva c3e4d9e (image 18c3e4d9e) =====

void FUN_18c3e4d9e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c3e40a9 (image 18c3e40a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3e40a9(void)

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



// ===== continuation @ rva c3e3804 (image 18c3e3804) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e3804(void)

{
  FUN_190dd72e0();
  (*_DAT_181e76ef8)();
  return;
}



// ===== continuation @ rva c3e416f (image 18c3e416f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3e416f(void)

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



// ===== continuation @ rva c3e3ab3 (image 18c3e3ab3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e3ab3(void)

{
  (*_DAT_181e778c8)();
  return;
}



// ===== continuation @ rva c3e4524 (image 18c3e4524) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e4524(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181e771c8)();
  return;
}



// ===== continuation @ rva c3e3eb8 (image 18c3e3eb8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e3eb8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e77348)();
  return;
}



// ===== continuation @ rva c3e40e0 (image 18c3e40e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e40e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_181e772f8)();
  return;
}



// ===== continuation @ rva c3e3a05 (image 18c3e3a05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e3a05(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181e776d8)();
  return;
}



// ===== continuation @ rva c3e3be5 (image 18c3e3be5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e3be5(void)

{
  (*_DAT_181e778c8)();
  return;
}



// ===== continuation @ rva c3ee16d (image 18c3ee16d) =====

void FUN_18c3ee16d(void)

{
  return;
}



// ===== continuation @ rva c3e4f89 (image 18c3e4f89) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e4f89(void)

{
  FUN_190ddce00();
  (*_DAT_181e783e8)();
  return;
}



// ===== continuation @ rva c3ed633 (image 18c3ed633) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3ed633(void)

{
  (*_DAT_181e79688)();
  return;
}



// ===== continuation @ rva c3ee15c (image 18c3ee15c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3ee15c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181e79338)();
  return;
}



// ===== continuation @ rva c3ee021 (image 18c3ee021) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3ee021(void)

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



// ===== continuation @ rva c3e87b7 (image 18c3e87b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3e87b7(void)

{
  longlong in_stack_00000068;
  
  switch(in_stack_00000068 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c3e902c (image 18c3e902c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3e902c(void)

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



// ===== continuation @ rva c3ee1d9 (image 18c3ee1d9) =====

void FUN_18c3ee1d9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c3edcb2 (image 18c3edcb2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3edcb2(void)

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



// ===== continuation @ rva c3e9185 (image 18c3e9185) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e9185(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_184117d50();
  (*_DAT_181e78128)();
  return;
}



// ===== continuation @ rva c3e880b (image 18c3e880b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3e880b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e79668)();
  return;
}



// ===== continuation @ rva c3efe6d (image 18c3efe6d) =====

void FUN_18c3efe6d(void)

{
  return;
}



// ===== continuation @ rva c3ee38a (image 18c3ee38a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3ee38a(void)

{
  FUN_190ddfc90();
  (*_DAT_181e7ae08)();
  return;
}



// ===== continuation @ rva c3efc84 (image 18c3efc84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3efc84(void)

{
  double unaff_XMM7_Qa;
  double dStack0000000000000048;
  
  dStack0000000000000048 = _DAT_181e7b4d0 * unaff_XMM7_Qa;
  (*_DAT_181e7ab58)();
  return;
}



// ===== continuation @ rva c3efe61 (image 18c3efe61) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3efe61(void)

{
  undefined8 in_stack_00000040;
  
  (*_DAT_181e7b4a8)(in_stack_00000040);
  return;
}



// ===== continuation @ rva c3efbc6 (image 18c3efbc6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3efbc6(void)

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



// ===== continuation @ rva c3ef75e (image 18c3ef75e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3ef75e(void)

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



// ===== continuation @ rva c3eee77 (image 18c3eee77) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3eee77(void)

{
  FUN_190de3220();
  (*_DAT_181e7af18)();
  return;
}



// ===== continuation @ rva c3eeb3b (image 18c3eeb3b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3eeb3b(void)

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



// ===== continuation @ rva c3ee8c1 (image 18c3ee8c1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3ee8c1(undefined8 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50 + 0x98a3,0x1b0);
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



// ===== continuation @ rva c3eead2 (image 18c3eead2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3eead2(void)

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



// ===== continuation @ rva c3f0bc1 (image 18c3f0bc1) =====

void FUN_18c3f0bc1(void)

{
  return;
}



// ===== continuation @ rva c3f001e (image 18c3f001e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3f001e(void)

{
  FUN_190ddfc90();
  (*_DAT_181e7b740)();
  return;
}



// ===== continuation @ rva c3f056d (image 18c3f056d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3f056d(void)

{
  FUN_190ddfc90();
  (*_DAT_181e7b890)();
  return;
}



// ===== continuation @ rva c3f0387 (image 18c3f0387) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3f0387(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181e7b990)();
  return;
}



// ===== continuation @ rva c3f0730 (image 18c3f0730) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3f0730(void)

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



// ===== continuation @ rva c3f07cb (image 18c3f07cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3f07cb(void)

{
  FUN_190dd72e0();
  (*_DAT_181e7b7b0)();
  return;
}



// ===== continuation @ rva c3f01d8 (image 18c3f01d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3f01d8(void)

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



// ===== continuation @ rva c3f0818 (image 18c3f0818) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c3f0818(void)

{
  FUN_190dd9df0();
  (*_DAT_181e7b5b0)();
  return;
}



// ===== continuation @ rva c3f0bdb (image 18c3f0bdb) =====

void FUN_18c3f0bdb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c3f0a92 (image 18c3f0a92) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3f0a92(void)

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



// ===== continuation @ rva c364828 (image 18c364828) =====

void FUN_18c364828(void)

{
  return;
}



// ===== continuation @ rva c360b12 (image 18c360b12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c360b12(void)

{
  FUN_190ddce00();
  (*_DAT_181e5db68)();
  return;
}



// ===== continuation @ rva c36e3cf (image 18c36e3cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c36e3cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181e5f288)();
  return;
}



// ===== continuation @ rva c366f62 (image 18c366f62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c366f62(void)

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



// ===== continuation @ rva c366422 (image 18c366422) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c366422(void)

{
  (*_DAT_181e5c2e8)();
  return;
}



// ===== continuation @ rva c366c58 (image 18c366c58) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c366c58(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181e5dd28)();
  return;
}



// ===== continuation @ rva c366c04 (image 18c366c04) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c366c04(void)

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



// ===== continuation @ rva c369740 (image 18c369740) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c369740(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
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



// ===== continuation @ rva c363e52 (image 18c363e52) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c363e52(void)

{
  (*_DAT_181e5e928)();
  return;
}



// ===== continuation @ rva c367771 (image 18c367771) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c367771(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181e5ee18)();
  return;
}



// ===== continuation @ rva c3654ba (image 18c3654ba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c3654ba(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184d353c0();
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



// ===== continuation @ rva c36532e (image 18c36532e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c36532e(void)

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



