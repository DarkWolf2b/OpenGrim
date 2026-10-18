// ===== continuation @ rva dbcd329 (image 18dbcd329) =====

void FUN_18dbcd329(void)

{
  return;
}



// ===== continuation @ rva dbc7ce4 (image 18dbc7ce4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbc7ce4(void)

{
  FUN_190ddce00();
  (*_DAT_1823607d8)();
  return;
}



// ===== continuation @ rva dbcd395 (image 18dbcd395) =====

void FUN_18dbcd395(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbcbb87 (image 18dbcbb87) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbcbb87(void)

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



// ===== continuation @ rva dbcbdbb (image 18dbcbdbb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbcbdbb(void)

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



// ===== continuation @ rva dbcc6dc (image 18dbcc6dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbcc6dc(void)

{
  (*_DAT_182360828)();
  return;
}



// ===== continuation @ rva dbcc57f (image 18dbcc57f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbcc57f(void)

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



// ===== continuation @ rva dbcc3ec (image 18dbcc3ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbcc3ec(void)

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



// ===== continuation @ rva dbcca09 (image 18dbcca09) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbcca09(void)

{
  (*_DAT_182360b48)();
  return;
}



// ===== continuation @ rva dbccc7c (image 18dbccc7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbccc7c(void)

{
  (*_DAT_182360cd8)();
  return;
}



// ===== continuation @ rva dbcc6d1 (image 18dbcc6d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbcc6d1(void)

{
  (*_DAT_182360cd8)();
  return;
}



// ===== continuation @ rva dc0804f (image 18dc0804f) =====

void FUN_18dc0804f(void)

{
  return;
}



// ===== continuation @ rva dbee82b (image 18dbee82b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dbee881 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dbee82b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dbf7fe5 (image 18dbf7fe5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbf7fe5(uint param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  undefined1 unaff_XMM8 [16];
  uint uVar16;
  undefined1 auVar17 [16];
  ulonglong in_stack_00000050;
  undefined8 in_stack_000000a0;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  _DAT_18337ed40 = func_0x00018dc08230(_DAT_18337ed98 ^ 0xff8affa55aff4f5b);
  uVar10 = (ulonglong)(~(uint)_DAT_18337ed40 & 0xc8f651fc);
  _DAT_18337eea0 = (_DAT_18337eea0 ^ uVar10) + 0xdaf6f9fe ^ 0x514d74ce0186113f;
  _DAT_18337ee20 = (_DAT_18337ee20 * -0x48ffca184cfe9105 ^ _DAT_18337eea0) + uVar10;
  _DAT_18337edc0 = _DAT_18337ee20 ^ _DAT_18337eea0;
  _DAT_18337ed48 = 0xdaf6f9fe;
  uVar10 = (_DAT_18337ed98 ^ _DAT_18236c800) + _DAT_18337eee0 + 0x84222325;
  uVar12 = (_DAT_18337eee0 ^ _UNK_18236c808) + _DAT_18337ed98 + 0xcb99e530;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18337ed98 ^ _DAT_18236c800;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18337eee0 ^ _UNK_18236c808;
  _DAT_18337ed78 =
       func_0x00018dc08230((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18337ed98 + 0xcb99e530) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18337eee0 + 0x84222325));
  uVar10 = _DAT_18337ed78 << 0x27 | _DAT_18337ed78 >> 0x19;
  _DAT_18337eeb8 = (_DAT_18337eeb8 ^ uVar10) - 0xcb99e530 ^ 0x6eff0de9b20fc4f4;
  _DAT_18337eeb0 = (_DAT_18337eeb0 * -0x820e6f79abcce17 ^ _DAT_18337eeb8) + uVar10;
  _DAT_18337ed80 = _DAT_18337eeb0 ^ _DAT_18337eeb8;
  _DAT_18337ee80 = 0x34661ad0;
  uVar10 = (_DAT_18337ed10 ^ _DAT_18236c810) + _DAT_18337ed70 + 0x842223da;
  uVar12 = (_DAT_18337ed70 ^ _UNK_18236c818) + _DAT_18337ed10 + 0xcb99e530;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18337ed10 ^ _DAT_18236c810;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18337ed70 ^ _UNK_18236c818;
  _DAT_18337edf0 =
       func_0x00018dc08230((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18337ed10 + 0xcb99e530) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18337ed70 + 0x842223da));
  uVar10 = _DAT_18337edf0 << 0x1f | _DAT_18337edf0 >> 0x21;
  _DAT_18337ee90 = _DAT_18337eee8 ^ uVar10 ^ 0xcb99e62f;
  _DAT_18337ed88 = (_DAT_18337ed88 ^ uVar10) + 0xcb99e62f ^ 0x328505724d51301b;
  _DAT_18337ed20 = (_DAT_18337ed20 * 0x2ef681eb63f4d6ff ^ _DAT_18337ed88) + uVar10;
  _DAT_18337ee80 = _DAT_18337ed20 ^ _DAT_18337ed88;
  _DAT_18337eec8 = 0xcb99e62f;
  uVar10 = (~_DAT_18337ee50 + 0x34661ad1) *
           ((_DAT_18337ee40 ^ 0x4fbbc50a) + (ulonglong)((uint)_DAT_18337ee40 & 0x4fbbc50a) * 2);
  uVar10 = (uVar10 | _DAT_18337ed58) + (uVar10 & _DAT_18337ed58);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18337eef0 =
       func_0x00018dc08230((uVar10 | 0x7bdddfda) + (ulonglong)((uint)uVar10 & 0x7bdddfda));
  uVar10 = (_DAT_18337eef0 ^ 0xcb99e62f) * -0x3e767bf4c862b13b;
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar10;
  _DAT_18337ed08 = _DAT_18337ed18 ^ uVar10 ^ 0x1000000ff;
  _DAT_18337ee78 = (_DAT_18337ee78 ^ uVar10) + 0x1000000ff ^ 0x820fdbaaad7dbd;
  _DAT_18337ee68 = (_DAT_18337ee68 * 0x526405f7c6db0a23 ^ _DAT_18337ee78) + uVar10;
  _DAT_18337eeb8 = _DAT_18337ee68 ^ _DAT_18337ee78;
  _DAT_18337ee90 = 0xff;
  uVar10 = (_DAT_18337ee00 ^ _DAT_18236c820) + _DAT_18337ede0 + 0x84222325;
  uVar12 = (_DAT_18337ede0 ^ _UNK_18236c828) + _DAT_18337ee00 + 0xa295c000;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18337ee00 ^ _DAT_18236c820;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18337ede0 ^ _UNK_18236c828;
  _DAT_18337ee50 =
       func_0x00018dc08230((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18337ee00 + 0xa295c000) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18337ede0 + 0x84222325));
  _DAT_18337ee10 = _DAT_18337ee10 - 0xa295c000 ^ 0x372dc8301f42393e;
  _DAT_18337eec0 = _DAT_18337ed48 * -0x1d11dfe2a2b42161;
  _DAT_18337ed48 = _DAT_18337eec0 ^ _DAT_18337ee10;
  _DAT_18337ed50 = 0x5d6a4000;
  uVar10 = (~_DAT_18337ee58 + 0x5d6a4001) *
           ((_DAT_18337eee8 ^ 0x26b7e3da) + (ulonglong)((uint)_DAT_18337eee8 & 0x26b7e3da) * 2);
  uVar10 = (uVar10 | _DAT_18337eed0) + (uVar10 & _DAT_18337eed0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18337edf8 =
       func_0x00018dc08230((uVar10 | 0x7bdda3da) + (ulonglong)((uint)uVar10 & 0x7bdda3da));
  uVar10 = _DAT_18337edf8 ^ 0x5d6a4000;
  _DAT_18337ee88 = _DAT_18337edd0 ^ uVar10 ^ 0x1000000ff;
  _DAT_18337edb8 = (_DAT_18337edb8 ^ uVar10) + 0x1000000ff ^ 0x6aeb368ed217022f;
  _DAT_18337eee8 = (_DAT_18337eee8 * -0x78c17b584f7ee70b ^ _DAT_18337edb8) + uVar10;
  _DAT_18337eda0 = _DAT_18337eee8 ^ _DAT_18337edb8;
  _DAT_18337edb0 = 0xff;
  _DAT_18337ed90 = func_0x00018dc08230(_DAT_18337ee68 + 0x3100432500a6ff ^ 0xe1);
  _DAT_18337ee80 = (_DAT_18337ee80 ^ _DAT_18337ed90 & 0x3ffffffff) - 0x43fdf000 ^ 0xd3c0c40afe6bc391
  ;
  _DAT_18337ed40 =
       (_DAT_18337ed40 * -0xa3e20856d4cef45 ^ _DAT_18337ee80) + (_DAT_18337ed90 & 0x3ffffffff);
  _DAT_18337ee20 = _DAT_18337ed40 ^ _DAT_18337ee80;
  _DAT_18337eeb0 = 0xbc021000;
  uVar10 = (_DAT_18337ed68 ^ _DAT_18236c830) + _DAT_18337ee90 + 0x842223da;
  uVar12 = (_DAT_18337ee90 ^ _UNK_18236c838) + _DAT_18337ed68 + 0x43fdf000;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18337ed68 ^ _DAT_18236c830;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18337ee90 ^ _UNK_18236c838;
  _DAT_18337ee18 =
       func_0x00018dc08230((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18337ed68 + 0x43fdf000) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18337ee90 + 0x842223da));
  uVar10 = (_DAT_18337ee18 & 0xff) - (ulonglong)((uint)(_DAT_18337ee18 >> 1) & 0x55);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
           _DAT_18337ee18 & 0xff;
  _DAT_18337ed40 = (_DAT_18337ed40 ^ uVar10) + 0x43fdf0ff ^ 0xf37a423015590684;
  _DAT_18337ee28 = (_DAT_18337ee28 * 0x49e172cbcf215ca3 ^ _DAT_18337ed40) + uVar10;
  _DAT_18337ede0 = _DAT_18337ee28 ^ _DAT_18337ed40;
  _DAT_18337ee40 = 0x43fdf0ff;
  _DAT_18337ee10 = func_0x00018dc08230(_DAT_18337ed40 + 0xffbf0049a600dcff ^ 0xbb);
  uVar12 = _UNK_18236c848;
  uVar10 = _DAT_18236c840;
  uVar5 = _DAT_18337ee10 >> 1 | _DAT_18337ee10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18337ee10;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6;
  _DAT_18337ed78 = _DAT_18337ee28 ^ uVar6 ^ 0x1000000ff;
  _DAT_18337edd0 = (_DAT_18337edd0 ^ uVar6) + 0x1000000ff ^ 0x27c15e9798ffd4db;
  _DAT_18337ee00 = (_DAT_18337ee00 * 0x304c79efe39db90b ^ _DAT_18337edd0) + uVar6;
  _DAT_18337ee98 = _DAT_18337ee00 ^ _DAT_18337edd0;
  _DAT_18337ee70 = 0xff;
  uVar5 = (_DAT_18337eef0 ^ _DAT_18236c840) + _DAT_18337ed68 + 0x5ed4dadb;
  uVar6 = (_DAT_18337ed68 ^ _UNK_18236c848) + _DAT_18337eef0 + 0xdbb3b449;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18337eef0 ^ _DAT_18236c840;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18337ed68 ^ _UNK_18236c848;
  _DAT_18337eed0 =
       func_0x00018dc08230((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18337eef0 + 0xdbb3b449) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18337ed68 + 0x5ed4dadb));
  uVar5 = _DAT_18337eed0 << 0x2a | _DAT_18337eed0 >> 0x16;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar5) *
          -0x37cd293f6471cb93;
  _DAT_18337eda8 = _DAT_18337ee00 ^ uVar5 ^ 0x1b6aaae47;
  _DAT_18337ee78 = (_DAT_18337ee78 ^ uVar5) + 0x1b6aaae47 ^ 0x5ed518eea7a16fe;
  _DAT_18337ee20 = (_DAT_18337ee20 * -0x3036d7ad0f9f79f9 ^ _DAT_18337ee78) + uVar5;
  _DAT_18337ed10 = _DAT_18337ee20 ^ _DAT_18337ee78;
  _DAT_18337ed20 = 0xb6aaae47;
  uVar5 = _DAT_18337ed48 ^ uVar10;
  uVar6 = _DAT_18337ede8 ^ uVar12;
  uVar11 = uVar5 + _DAT_18337ede8 + 0x5ed4dadb;
  uVar13 = uVar6 + _DAT_18337ed48 + 0xdbb3b449;
  uVar5 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar5;
  uVar6 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar6;
  _DAT_18337ee10 =
       func_0x00018dc08230((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18337ed48 + 0xdbb3b449) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18337ede8 + 0x5ed4dadb));
  uVar5 = _DAT_18337ee10 >> 1 | _DAT_18337ee10;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ _DAT_18337ee10) & 0x7fffffffffffff;
  _DAT_18337ee40 = (_DAT_18337ee40 ^ uVar5) + 0x1454db7 ^ 0x88af5ae6b2a2dffc;
  _DAT_18337edb8 = (_DAT_18337edb8 * -0x68835467b9595b23 ^ _DAT_18337ee40) + uVar5;
  _DAT_18337ed78 = _DAT_18337edb8 ^ _DAT_18337ee40;
  _DAT_18337ee00 = 0x1454db7;
  uVar10 = _DAT_18337ee78 ^ uVar10;
  uVar12 = _DAT_18337ee20 ^ uVar12;
  uVar5 = uVar10 + _DAT_18337ee20 + 0x5ed4dadb;
  uVar6 = uVar12 + _DAT_18337ee78 + 0xdbb3b449;
  uVar10 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar10;
  uVar12 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar12;
  _DAT_18337edd8 =
       func_0x00018dc08230((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18337ee78 + 0xdbb3b449) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18337ee20 + 0x5ed4dadb));
  uVar10 = (_DAT_18337edd8 ^ 0xbbeafcc12ecc0000) & 0xfffffffffffc0000;
  uVar12 = uVar10 >> 1 | uVar10;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar10 = 0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           uVar10;
  _DAT_18337ee38 = (_DAT_18337ee38 ^ uVar10) + 0xdab2b048 ^ 0x26ec9bc444cb0a73;
  _DAT_18337ed58 = (_DAT_18337ed58 * -0xcd71fc0eb441e65 ^ _DAT_18337ee38) + uVar10;
  _DAT_18337ed48 = _DAT_18337ed58 ^ _DAT_18337ee38;
  _DAT_18337ee78 = 0xdab2b048;
  uVar10 = (~_DAT_18337ee28 + 0xb6aaae48) *
           ((_DAT_18337ee10 ^ 0x32888d62) + (ulonglong)((uint)_DAT_18337ee10 & 0x32888d62) * 2);
  uVar10 = (uVar10 | _DAT_18337ee48) + (uVar10 & _DAT_18337ee48);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18337eee8 =
       func_0x00018dc08230((uVar10 | 0x84222325) + (ulonglong)((uint)uVar10 & 0x84222325));
  uVar10 = _DAT_18337eee8 >> 1 | _DAT_18337eee8;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x80 ^ _DAT_18337eee8;
  _DAT_18337ed00 = uVar10 << 7 | uVar10 >> 0x39;
  _DAT_18337ee00 = _DAT_18337ee00 ^ _DAT_18337ed00 ^ 0xeafb9dd6e709f7e0;
  _DAT_18337ed90 = (_DAT_18337ed90 * 0x22897ba11a438ced ^ _DAT_18337ee00) + _DAT_18337ed00;
  _DAT_18337ee08 = _DAT_18337ed90 ^ _DAT_18337ee00;
  _DAT_18337edf0 = 0;
  _DAT_18337eda0 = func_0x00018dc08230(_DAT_18337edf8 ^ 0xffe2ff7cd9ffdd01);
  _DAT_18337ee30 = _DAT_18337edb8 ^ _DAT_18337eda0 ^ 0xff;
  _DAT_18337ed40 = (_DAT_18337ed40 ^ _DAT_18337eda0) + 0xff ^ 0x668d8d671234fec0;
  _DAT_18337ed28 = (_DAT_18337ed28 * -0x1471324132bd766f ^ _DAT_18337ed40) + _DAT_18337eda0;
  _DAT_18337edc8 = _DAT_18337ed28 ^ _DAT_18337ed40;
  _DAT_18337eee0 = 0xff;
  uVar10 = (_DAT_18337ed78 ^ _DAT_18236c850) + _DAT_18337edf8 + 0x5ed4dadb;
  uVar12 = (_DAT_18337edf8 ^ _UNK_18236c858) + _DAT_18337ed78 + 0x25090601;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18337ed78 ^ _DAT_18236c850;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18337edf8 ^ _UNK_18236c858;
  _DAT_18337ee60 =
       func_0x00018dc08230((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18337ed78 + 0x25090601) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18337edf8 + 0x5ed4dadb));
  uVar10 = (_DAT_18337ee60 ^ 0xdaf6f9fe) << 5 | _DAT_18337ee60 >> 0x3b;
  _DAT_18337ee80 = _DAT_18337ee80 ^ uVar10 ^ 0xec15c283e93e0902;
  _DAT_18337ed28 = (_DAT_18337ed28 * 0x7233d58375179dbd ^ _DAT_18337ee80) + uVar10;
  _DAT_18337eef0 = _DAT_18337ed28 ^ _DAT_18337ee80;
  _DAT_18337ed30 = 0;
  uVar10 = ((_DAT_18337ee10 ^ 0x842223da) + (ulonglong)((uint)_DAT_18337ee10 & 0x842223da) * 2) *
           -_DAT_18337ee90;
  uVar10 = (uVar10 | _DAT_18337ed00) + (uVar10 & _DAT_18337ed00);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18337ee30 =
       func_0x00018dc08230((uVar10 | 0x842223da) + (ulonglong)((uint)uVar10 & 0x842223da));
  uVar4 = ~(uint)_DAT_18337ee30 & 0xff;
  uVar7 = uVar4 >> 1 | uVar4;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar10 = (ulonglong)uVar7 - (ulonglong)(uVar7 >> 1 & 0x55555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10 ^ (ulonglong)uVar4;
  _DAT_18337ee40 = _DAT_18337ee88 ^ uVar10 ^ 0xff;
  _DAT_18337edc8 = (_DAT_18337edc8 ^ uVar10) + 0xff ^ 0xc89f167e8a6d65ec;
  _DAT_18337eee0 = (_DAT_18337eee0 * 0x63308dc2d9efe43b ^ _DAT_18337edc8) + uVar10;
  _DAT_18337ede0 = _DAT_18337eee0 ^ _DAT_18337edc8;
  _DAT_18337eef8 = 0xff;
  _DAT_18337ee50 = func_0x00018dc08230(_DAT_18337ed60 + 0x1cff7c1d001dffU ^ 0xe4);
  uVar10 = ((_DAT_18337ee50 ^ 0xc8f651fc) * 0x3c68753cafb038c9 ^ 0xc8f651fc) * -0x17bd75c6c7ee2449;
  _DAT_18337ee38 = _DAT_18337ee38 ^ uVar10 ^ 0x70c66e0fb753fdbf;
  _DAT_18337ee70 = (_DAT_18337ee70 * 0x18cb107fd8996fe7 ^ _DAT_18337ee38) + uVar10;
  _DAT_18337eeb8 = _DAT_18337ee70 ^ _DAT_18337ee38;
  _DAT_18337ed20 = 0;
  uVar10 = (_DAT_18337ed38 ^ 0x842223da) + _DAT_18337eef8 + 0x842223da;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18337ed38 ^ 0x842223da;
  uVar12 = ((_DAT_18337eef8 + _DAT_18337ed38) * 0x2000 | _DAT_18337eef8 + _DAT_18337ed38 >> 0x33) ^
           _DAT_18337eef8;
  _DAT_18337ed58 =
       func_0x00018dc08230((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_18337ed38 ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18337eef8 + 0x842223da));
  uVar10 = ((_DAT_18337ed58 & 0xffffffff) * (_DAT_18236c860 & 0xffffffff) +
            ((ulonglong)_DAT_18236c870 * (_DAT_18337ed58 & 0xffffffff) +
             (_DAT_18337ed58 >> 0x20) * (_DAT_18236c860 & 0xffffffff) << 0x20) ^ 0xff) &
           0x7fffffffffffffff;
  _DAT_18337ee28 = (_DAT_18337ee28 ^ uVar10) + 0xff ^ 0xb061793bf7c4a5b;
  _DAT_18337eea8 = (_DAT_18337eea8 * 0x4bce5dc272beb85 ^ _DAT_18337ee28) + uVar10;
  _DAT_18337ee48 = _DAT_18337eea8 ^ _DAT_18337ee28;
  _DAT_18337ed98 = 0xff;
  auVar9._8_8_ = (ulonglong)param_1 & 0xff;
  auVar9._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar8 = pshufb(auVar9 ^ _DAT_18236c880,unaff_XMM8);
  uVar12 = auVar8._8_8_ + auVar8._0_8_;
  uVar10 = uVar12 + _DAT_18337edb8;
  if (auVar8._4_4_ < 0) {
    uVar10 = _DAT_18337eeb0 ^ uVar12;
  }
  _DAT_18337ed88 = func_0x00018dc08230(SUB161(auVar9 ^ _DAT_18236c880,5) ^ uVar10);
  _DAT_18337ee60 = in_stack_00000050 | (ulonglong)param_1 & 0xff;
  _DAT_18337ee78 =
       (_DAT_18337ee78 ^ _DAT_18337ed88 * 0x3e374f38f7458d73) + _DAT_18337ee60 ^ 0x57c8a60ddf033089;
  _DAT_18337eeb0 =
       (_DAT_18337eeb0 * -0x6d995bb5a1d983a3 ^ _DAT_18337ee78) + _DAT_18337ed88 * 0x3e374f38f7458d73
  ;
  _DAT_18337ed68 = _DAT_18337eeb0 ^ _DAT_18337ee78;
  uVar12 = CONCAT44(0,in_stack_000000a0._4_4_);
  auVar8._8_8_ = _UNK_180062bf8;
  auVar8._0_8_ = uVar12 ^ 0x84222325;
  auVar9 = pshufb(auVar8 ^ _DAT_18236c890,unaff_XMM8);
  uVar5 = auVar9._8_8_ + auVar9._0_8_;
  uVar10 = uVar5 + _DAT_18337eec8;
  if (auVar9._4_4_ < 0) {
    uVar10 = _DAT_18337eda8 ^ uVar5;
  }
  _DAT_18337ed10 = func_0x00018dc08230(SUB161(auVar8 ^ _DAT_18236c890,5) ^ uVar10);
  uVar10 = _DAT_18337ed10 - (_DAT_18337ed10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar12;
  uVar12 = ~(ulonglong)((uint)_DAT_18337ed10 ^ (uint)bVar1 + (uint)bVar1) & uVar12;
  uVar15 = in_stack_000000a0._4_4_ & _DAT_18001a990;
  uVar7 = in_stack_000000a0._4_4_ | _DAT_18001a990;
  uVar4 = in_stack_000000a0._4_4_ ^ _DAT_18001a990;
  auVar17._8_4_ = 0xffffffff;
  auVar17._0_8_ = 0xffffffffffffffff;
  auVar17._12_4_ = 0xffffffff;
  uVar16 = SUB164(auVar17 ^ auVar14,0);
  _DAT_18337ed80 =
       (ulonglong)uVar16 * (ulonglong)_DAT_18236c8e0 +
       ((ulonglong)_DAT_18236c930 * (ulonglong)uVar16 +
        (SUB168(auVar17 ^ auVar14,0) >> 0x20) * (ulonglong)_DAT_18236c8e0 << 0x20) +
       ((ulonglong)_DAT_18236c920 * (ulonglong)uVar4 << 0x20) +
       (ulonglong)_DAT_18236c910 * (ulonglong)uVar4 +
       ((ulonglong)_DAT_18236c900 * (ulonglong)uVar7 << 0x20) +
       (ulonglong)_DAT_18236c8f0 * (ulonglong)uVar7 +
       ((ulonglong)_DAT_18236c8d0 * (ulonglong)uVar15 << 0x20 |
       (ulonglong)_DAT_18236c8c0 * (ulonglong)uVar15) +
       ((ulonglong)_DAT_18236c8b0 * (ulonglong)in_stack_000000a0._4_4_ << 0x20) +
       (ulonglong)_DAT_18236c8a0 * (ulonglong)in_stack_000000a0._4_4_ +
       (-(((ulonglong)uVar4 * (ulonglong)_DAT_18236c970 << 0x20) +
         (ulonglong)_DAT_18236c960 * (ulonglong)uVar4) -
       (((ulonglong)uVar7 * (ulonglong)_DAT_18236c990 << 0x20) +
       (ulonglong)_DAT_18236c980 * (ulonglong)uVar7 +
       ((ulonglong)uVar15 * (ulonglong)_DAT_18236c970 << 0x20 |
       (ulonglong)uVar15 * (ulonglong)_DAT_18236c960))) + 0x7f2da036f44b1ca8;
  _DAT_18337edc8 = _DAT_18337ed68 ^ uVar12 ^ _DAT_18337ed80;
  _DAT_18337ee48 = (_DAT_18337ee48 ^ uVar12) + _DAT_18337ed80 ^ 0xb9ed5912e982eddf;
  _DAT_18337ede8 = (_DAT_18337ede8 * -0x6f1a1a82f296f033 ^ _DAT_18337ee48) + uVar12;
  _DAT_18337eed8 = _DAT_18337ede8 ^ _DAT_18337ee48;
  _DAT_18337ed80 = _DAT_18337ed80 & 0xffffffff;
  uVar3 = (**(code **)(*unaff_RSI + 0x580))();
  iVar2 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa,uVar3);
  switch(iVar2 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbeeef4 (image 18dbeeef4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dbeef12 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dbeeef4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dc011ba (image 18dc011ba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dc011ba(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000118;
  undefined4 uStack0000000000000120;
  
  uStack0000000000000118 = 0x39003500380038;
  rdtsc();
  uStack0000000000000120 = 0x31002d;
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190ddfc90();
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



// ===== continuation @ rva dc01080 (image 18dc01080) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dc01080(undefined4 param_1,int param_2)

{
  char cVar1;
  longlong *unaff_RSI;
  int iStack0000000000000048;
  int iStack0000000000000050;
  undefined4 uStack00000000000000bc;
  int iStack00000000000000c0;
  
  iStack0000000000000050 = param_2 + 8;
  iStack0000000000000048 = param_2;
  uStack00000000000000bc = param_1;
  iStack00000000000000c0 = iStack0000000000000050;
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



// ===== continuation @ rva dbf02cb (image 18dbf02cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dbf02e6 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dbf02cb(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva dc07df2 (image 18dc07df2) =====

void thunk_FUN_18dbf0954(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva dc07c1b (image 18dc07c1b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dc07c1b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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



// ===== continuation @ rva dbd16df (image 18dbd16df) =====

void FUN_18dbd16df(void)

{
  return;
}



// ===== continuation @ rva dbcd55d (image 18dbcd55d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbcd55d(void)

{
  FUN_190ddce00();
  (*_DAT_182362748)();
  return;
}



// ===== continuation @ rva dbd20cc (image 18dbd20cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd20cc(void)

{
  FUN_190de3220();
  (*_DAT_182362118)();
  return;
}



// ===== continuation @ rva dbd4852 (image 18dbd4852) =====

void FUN_18dbd4852(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbd3fcd (image 18dbd3fcd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd3fcd(void)

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



// ===== continuation @ rva dbd4843 (image 18dbd4843) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd4843(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1823635f8)();
  return;
}



// ===== continuation @ rva dbd26a9 (image 18dbd26a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd26a9(void)

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



// ===== continuation @ rva dbd233b (image 18dbd233b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd233b(void)

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



// ===== continuation @ rva dbd2040 (image 18dbd2040) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd2040(void)

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



// ===== continuation @ rva dbd3684 (image 18dbd3684) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd3684(void)

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



// ===== continuation @ rva dbd21df (image 18dbd21df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd21df(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182363418)();
  return;
}



// ===== continuation @ rva dbd2183 (image 18dbd2183) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd2183(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182363068)();
  return;
}



// ===== continuation @ rva dbd90a5 (image 18dbd90a5) =====

void FUN_18dbd90a5(void)

{
  return;
}



// ===== continuation @ rva dbd4a74 (image 18dbd4a74) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd4a74(void)

{
  FUN_190ddce00();
  (*_DAT_182364618)();
  return;
}



// ===== continuation @ rva dbd95d6 (image 18dbd95d6) =====

void FUN_18dbd95d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbd7e08 (image 18dbd7e08) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd7e08(void)

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



// ===== continuation @ rva dbd8cf1 (image 18dbd8cf1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd8cf1(void)

{
  (*_DAT_182364d38)();
  return;
}



// ===== continuation @ rva dbd8bcb (image 18dbd8bcb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd8bcb(void)

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



// ===== continuation @ rva dbd883e (image 18dbd883e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd883e(void)

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



// ===== continuation @ rva dbd8ce6 (image 18dbd8ce6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd8ce6(void)

{
  (*_DAT_182364d88)();
  return;
}



// ===== continuation @ rva dbd8385 (image 18dbd8385) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd8385(void)

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



// ===== continuation @ rva dbd7d21 (image 18dbd7d21) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbd7d21(void)

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



// ===== continuation @ rva dbd8f83 (image 18dbd8f83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd8f83(void)

{
  FUN_190de3220();
  (*_DAT_182364848)();
  return;
}



// ===== continuation @ rva dbde439 (image 18dbde439) =====

void FUN_18dbde439(void)

{
  return;
}



// ===== continuation @ rva dbd9794 (image 18dbd9794) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbd9794(void)

{
  FUN_190ddce00();
  (*_DAT_1823660f8)();
  return;
}



// ===== continuation @ rva dbdcbbe (image 18dbdcbbe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbdcbbe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182366a68)();
  return;
}



// ===== continuation @ rva dbdec7e (image 18dbdec7e) =====

void FUN_18dbdec7e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbde0d7 (image 18dbde0d7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbde0d7(void)

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



// ===== continuation @ rva dbdd8cb (image 18dbdd8cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbdd8cb(void)

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



// ===== continuation @ rva dbdec6d (image 18dbdec6d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbdec6d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182366aa8)();
  return;
}



// ===== continuation @ rva dbdcc43 (image 18dbdcc43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbdcc43(void)

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



// ===== continuation @ rva dbde3a7 (image 18dbde3a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbde3a7(void)

{
  (*_DAT_182366958)();
  return;
}



// ===== continuation @ rva dbdd498 (image 18dbdd498) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbdd498(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_182366428)();
  return;
}



// ===== continuation @ rva dbdd599 (image 18dbdd599) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbdd599(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182366648)();
  return;
}



// ===== continuation @ rva dbe1357 (image 18dbe1357) =====

void FUN_18dbe1357(void)

{
  return;
}



// ===== continuation @ rva dbe11ad (image 18dbe11ad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbe11ad(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dbe23a1 (image 18dbe23a1) =====

undefined8 FUN_18dbe23a1(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva dbe4d82 (image 18dbe4d82) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbe4d82(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xbc9,0x2f);
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



// ===== continuation @ rva dbe4bf6 (image 18dbe4bf6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbe4bf6(void)

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



// ===== continuation @ rva dbe4eb0 (image 18dbe4eb0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbe4eb0(void)

{
  char cVar1;
  longlong *in_RAX;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*in_RAX + 0x784,0x25);
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



// ===== continuation @ rva dbe522e (image 18dbe522e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbe522e(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x568))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb4a,0x2e);
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



// ===== continuation @ rva dbe50a5 (image 18dbe50a5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbe50a5(void)

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



// ===== continuation @ rva dbe60a8 (image 18dbe60a8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbe60a8(void)

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



// ===== continuation @ rva dbe6179 (image 18dbe6179) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbe6179(void)

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



// ===== continuation @ rva dbe430b (image 18dbe430b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18dbe5e60(void)

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



// ===== continuation @ rva dbeaac2 (image 18dbeaac2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbeaac2(void)

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



// ===== continuation @ rva dbeaa6e (image 18dbeaa6e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbeaa6e(void)

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



// ===== continuation @ rva dbeb901 (image 18dbeb901) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbeb901(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182369d38)();
  return;
}



// ===== continuation @ rva dbeb1a7 (image 18dbeb1a7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbeb1a7(void)

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



// ===== continuation @ rva dbeb935 (image 18dbeb935) =====

void FUN_18dbeb935(void)

{
  return;
}



// ===== continuation @ rva dbeac1b (image 18dbeac1b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbeac1b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182369df8)();
  return;
}



// ===== continuation @ rva dbeb944 (image 18dbeb944) =====

void FUN_18dbeb944(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbeb2dc (image 18dbeb2dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbeb2dc(void)

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



// ===== continuation @ rva dbeb0e3 (image 18dbeb0e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbeb0e3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x418))();
  (*_DAT_1823699a8)();
  return;
}



// ===== continuation @ rva dbeae13 (image 18dbeae13) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbeae13(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_182369928)();
  return;
}



// ===== continuation @ rva dbeadad (image 18dbeadad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbeadad(void)

{
  FUN_190dd72e0();
  (*_DAT_182369c58)();
  return;
}



// ===== continuation @ rva dbeadf6 (image 18dbeadf6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbeadf6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182369d28)();
  return;
}



// ===== continuation @ rva dbead67 (image 18dbead67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbead67(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000048;
  
  uStack0000000000000048 = 1;
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_182369a48)();
  return;
}



// ===== continuation @ rva dbeda56 (image 18dbeda56) =====

void FUN_18dbeda56(void)

{
  return;
}



// ===== continuation @ rva dbebabc (image 18dbebabc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbebabc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182369f68)();
  return;
}



// ===== continuation @ rva dbee5fa (image 18dbee5fa) =====

void FUN_18dbee5fa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dbee518 (image 18dbee518) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dbee518(void)

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



// ===== continuation @ rva dbedb34 (image 18dbedb34) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbedb34(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
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



// ===== continuation @ rva dbec862 (image 18dbec862) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbec862(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18236a1e8)();
  return;
}



// ===== continuation @ rva dbec119 (image 18dbec119) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbec119(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x538))();
  FUN_184117d50();
  (*_DAT_18236a768)();
  return;
}



// ===== continuation @ rva dbedcd0 (image 18dbedcd0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbedcd0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
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



// ===== continuation @ rva dbecc89 (image 18dbecc89) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbecc89(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18236ac18)();
  return;
}



// ===== continuation @ rva dbec338 (image 18dbec338) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbec338(void)

{
  (*_DAT_18236ac08)();
  return;
}



// ===== continuation @ rva dbec9eb (image 18dbec9eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbec9eb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18236a678)();
  return;
}



