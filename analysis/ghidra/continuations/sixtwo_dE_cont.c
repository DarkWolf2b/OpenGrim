// ===== continuation @ rva deb1db0 (image 18deb1db0) =====

void FUN_18deb1db0(void)

{
  return;
}



// ===== continuation @ rva deb1bfd (image 18deb1bfd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb1bfd(void)

{
  FUN_190ddfc90();
  (*_DAT_18240b278)();
  return;
}



// ===== continuation @ rva deb1db8 (image 18deb1db8) =====

void FUN_18deb1db8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva deb1d6c (image 18deb1d6c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb1d6c(void)

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



// ===== continuation @ rva deb1d39 (image 18deb1d39) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb1d39(void)

{
  FUN_190ddfc90();
  (*_DAT_18240b1d8)();
  return;
}



// ===== continuation @ rva deb1c54 (image 18deb1c54) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb1c54(void)

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



// ===== continuation @ rva deb1cf0 (image 18deb1cf0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb1cf0(void)

{
  FUN_190dd72e0();
  (*_DAT_18240b248)();
  return;
}



// ===== continuation @ rva deb1d90 (image 18deb1d90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb1d90(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18240b1f8)();
  return;
}



// ===== continuation @ rva df46993 (image 18df46993) =====

void FUN_18df46993(void)

{
  return;
}



// ===== continuation @ rva df2866b (image 18df2866b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df286c1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df2866b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva df46113 (image 18df46113) =====

void thunk_FUN_18df2ad4b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva df2add3 (image 18df2add3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df2adea */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df2add3(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva df2bb8c (image 18df2bb8c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df2bba3 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df2bb8c(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva df2ad31 (image 18df2ad31) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df2ad48 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df2ad31(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva df415b4 (image 18df415b4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df415b4(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar2 = (~_DAT_183395100 + 0x639f92d0) *
          ((_DAT_183395470 ^ 0x6cb65f87) + (ulonglong)((uint)_DAT_183395470 & 0x6cb65f87) * 2);
  uVar2 = (uVar2 | _DAT_183394f78) + (uVar2 & _DAT_183394f78);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833951c0 = func_0x00018df46b70((uVar2 | 0xf29cd48) + (ulonglong)((uint)uVar2 & 0xf29cd48));
  _DAT_183395150 = (_DAT_183395150 ^ _DAT_1833951c0 ^ 0x88006c20) + 0xeb9ffeef ^ 0x471209bbc7e3bb46;
  _DAT_1833952c0 =
       (_DAT_1833952c0 * 0x1f4a31e0ded4427 ^ _DAT_183395150) + (_DAT_1833951c0 ^ 0x88006c20);
  _DAT_1833952b8 = _DAT_1833952c0 ^ _DAT_183395150;
  _DAT_1833953b0 = 0xeb9ffeef;
  _DAT_183395248 = func_0x00018df46b70(_DAT_183395268 ^ 0x68007208ffcd29);
  uVar2 = _DAT_183395248 << 0x1d | _DAT_183395248 >> 0x23;
  _DAT_183394f28 = (_DAT_183394f28 ^ uVar2) - 0x36548b2c ^ 0x213e755fd0725b56;
  _DAT_183395340 = (_DAT_183395340 * 0x2d64cc29524993fd ^ _DAT_183394f28) + uVar2;
  _DAT_1833950b0 = _DAT_183395340 ^ _DAT_183394f28;
  _DAT_1833951a0 = 0xc9ab74d4;
  _DAT_1833952d0 = func_0x00018df46b70(_DAT_183394ea0 ^ 0xff97ff512e0031d5);
  uVar2 = (_DAT_1833952d0 ^ 0x361e36a0d4) & 0x7fffffffffffff80;
  _DAT_183395448 = _DAT_183394d48 ^ uVar2 ^ 0x36548c2b;
  _DAT_183394e88 = (_DAT_183394e88 ^ uVar2) + 0x36548c2b ^ 0x5aa37f04cd970878;
  _DAT_183395408 = (_DAT_183395408 * -0xf7c2fefa02129b7 ^ _DAT_183394e88) + uVar2;
  _DAT_1833954f0 = _DAT_183395408 ^ _DAT_183394e88;
  _DAT_183395148 = 0x36548c2b;
  uVar2 = (_DAT_183395130 ^ _DAT_182428a90) + _DAT_183394f90 + 0xb276af0e;
  uVar3 = (_DAT_183394f90 ^ _UNK_182428a98) + _DAT_183395130 + 0xc9ab74d4;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183395130 ^ _DAT_182428a90;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183394f90 ^ _UNK_182428a98;
  _DAT_183394f38 =
       func_0x00018df46b70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183395130 + 0xc9ab74d4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183394f90 + 0xb276af0e));
  uVar3 = _DAT_183394f38 ^ 0x2accc552871403b7;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3;
  _DAT_183395080 = _DAT_183394d48 ^ uVar3 ^ 0x1000000ff;
  _DAT_183394f90 = (_DAT_183394f90 ^ uVar3) + 0x1000000ff ^ 0xf98c6d201fbc8802;
  _DAT_183395248 = (_DAT_183395248 * 0x33b864c50ad01b67 ^ _DAT_183394f90) + uVar3;
  _DAT_183394da0 = _DAT_183395248 ^ _DAT_183394f90;
  _DAT_1833952d8 = 0xff;
  uVar2 = (~_DAT_183394d90 + 0xefb259ed) *
          ((_DAT_183395430 ^ 0x84222325) + (ulonglong)((uint)_DAT_183395430 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183394e18) + (uVar2 & _DAT_183394e18);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183394ed8 = func_0x00018df46b70((uVar2 | 0x6b907ac9) + (ulonglong)((uint)uVar2 & 0x6b907ac9))
  ;
  _DAT_183394fd8 = (_DAT_183394fd8 ^ _DAT_183394ed8 ^ 0xefb259ec) - 0xefb259ec ^ 0x9ed239fe4a99d4b2;
  _DAT_1833950e0 =
       (_DAT_1833950e0 * -0x3651fdb1dd9c8b09 ^ _DAT_183394fd8) + (_DAT_183394ed8 ^ 0xefb259ec);
  _DAT_183395228 = _DAT_1833950e0 ^ _DAT_183394fd8;
  _DAT_183395330 = 0x104da614;
  uVar2 = (~_DAT_183395000 + 0xefb259ed) *
          ((_DAT_183394f90 ^ 0x842223da) + (ulonglong)((uint)_DAT_183394f90 & 0x842223da) * 2);
  uVar2 = (uVar2 | _DAT_183394e58) + (uVar2 & _DAT_183394e58);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183395280 = func_0x00018df46b70((uVar2 | 0x6b907a36) + (ulonglong)((uint)uVar2 & 0x6b907a36))
  ;
  uVar2 = (_DAT_183395280 & 0xff) * -0x7cc36865d0912c93;
  _DAT_183394e48 = _DAT_183394f30 ^ uVar2 ^ 0xefb25aeb;
  _DAT_183394de0 = (_DAT_183394de0 ^ uVar2) + 0xefb25aeb ^ 0x15bb935e90450257;
  _DAT_183394d70 = (_DAT_183394d70 * 0x6d14231b53ebe915 ^ _DAT_183394de0) + uVar2;
  _DAT_183395148 = _DAT_183394d70 ^ _DAT_183394de0;
  _DAT_183394d50 = 0xefb25aeb;
  _DAT_1833953a0 = func_0x00018df46b70(_DAT_183394d30 + 0xb0fff94600baffU ^ 0xb8);
  uVar2 = _DAT_1833953a0 ^ 0xefb25aeb;
  _DAT_183394da8 = _DAT_183395280 ^ uVar2 ^ 0x1000000ff;
  _DAT_183394f98 = (_DAT_183394f98 ^ uVar2) + 0x1000000ff ^ 0x635654fe693247cd;
  _DAT_183395218 = (_DAT_183395218 * 0x34b570579b88e36b ^ _DAT_183394f98) + uVar2;
  _DAT_183395238 = _DAT_183395218 ^ _DAT_183394f98;
  _DAT_183395450 = 0xff;
  uVar2 = (_DAT_1833954a0 ^ _DAT_182428aa0) + _DAT_1833953a8 + 0x84222325;
  uVar3 = (_DAT_1833953a8 ^ _UNK_182428aa8) + _DAT_1833954a0 + 0x68c71a28;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833954a0 ^ _DAT_182428aa0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833953a8 ^ _UNK_182428aa8;
  _DAT_1833952b8 =
       func_0x00018df46b70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833954a0 + 0x68c71a28) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833953a8 + 0x84222325));
  uVar2 = _DAT_1833952b8 ^ 0x68c71a28;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar2;
  _DAT_183394fe8 = (_DAT_183394fe8 ^ uVar2) - 0x68c71a28 ^ 0x1a518413b7d68293;
  _DAT_183394db8 = (_DAT_183394db8 * 0x40825753e9a4474d ^ _DAT_183394fe8) + uVar2;
  _DAT_183394dc0 = _DAT_183394db8 ^ _DAT_183394fe8;
  _DAT_183394fb0 = 0x9738e5d8;
  uVar2 = (~_DAT_183395440 + 0x68c71a29) *
          ((_DAT_183394f58 ^ 0x842223da) + (ulonglong)((uint)_DAT_183394f58 & 0x842223da) * 2);
  uVar2 = (uVar2 | _DAT_1833952c0) + (uVar2 & _DAT_1833952c0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183395090 = func_0x00018df46b70((uVar2 | 0xece539f2) + (ulonglong)((uint)uVar2 & 0xece539f2))
  ;
  _DAT_1833950b8 = _DAT_183394f10 ^ _DAT_183395090 ^ 0x68c71b27;
  _DAT_183394d38 = (_DAT_183394d38 ^ _DAT_183395090) + 0x68c71b27 ^ 0x9be6e2d1916fa13d;
  _DAT_183395280 = (_DAT_183395280 * 0x45406e19667424d5 ^ _DAT_183394d38) + _DAT_183395090;
  _DAT_1833952e8 = _DAT_183395280 ^ _DAT_183394d38;
  _DAT_183394d98 = 0x68c71b27;
  uVar2 = (~_DAT_183395018 + 0x9738e5d9) *
          ((_DAT_183394f10 ^ _DAT_183395090 ^ 0x84222325) +
          (ulonglong)((uint)_DAT_1833950b8 & 0xece53802) * 2);
  uVar2 = (uVar2 | _DAT_183394e78) + (uVar2 & _DAT_183394e78);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833952d8 = func_0x00018df46b70((uVar2 | 0x7bddddda) + (ulonglong)((uint)uVar2 & 0x7bddddda))
  ;
  uVar2 = _DAT_1833952d8 << 0x25 | _DAT_1833952d8 >> 0x1b;
  _DAT_183395410 = _DAT_183394d90 ^ uVar2 ^ 0x1000000ff;
  _DAT_183394e50 = (_DAT_183394e50 ^ uVar2) + 0x1000000ff ^ 0x950382ba7efc91da;
  _DAT_183395390 = (_DAT_183395390 * -0x4d7cf88924703c67 ^ _DAT_183394e50) + uVar2;
  _DAT_1833953d0 = _DAT_183395390 ^ _DAT_183394e50;
  _DAT_1833953e8 = 0xff;
  uVar2 = (_DAT_183394e10 ^ _DAT_182428ab0) + _DAT_183395070 + 0x6fbdddca;
  uVar3 = (_DAT_183395070 ^ _UNK_182428ab8) + _DAT_183394e10 + 0x4e514504;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183394e10 ^ _DAT_182428ab0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183395070 ^ _UNK_182428ab8;
  _DAT_183395120 =
       func_0x00018df46b70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183394e10 + 0x4e514504) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183395070 + 0x6fbdddca));
  _DAT_183394f00 =
       (_DAT_183394f00 ^ _DAT_183395120 & 0x7fffffffffffffff) + 0xa5cebbeb ^ 0xd5363d6a7790c140;
  _DAT_183394dc8 =
       (_DAT_183394dc8 * -0x22bbb9d12fb70873 ^ _DAT_183394f00) +
       (_DAT_183395120 & 0x7fffffffffffffff);
  _DAT_183394f88 = _DAT_183394dc8 ^ _DAT_183394f00;
  _DAT_183395408 = 0xa5cebbeb;
  _DAT_183395060 = func_0x00018df46b70(_DAT_183394e28 + 0xff68001ecdff5bffU ^ 0xf8);
  uVar2 = (_DAT_183395060 & 0x7fffffffffff) << 5 | _DAT_183395060 >> 0x3b;
  _DAT_183395380 = (_DAT_183395380 ^ uVar2) + 0x4a114404 ^ 0xcd48547a2e2dc36d;
  _DAT_183395038 = (_DAT_183395038 * -0x6c8eb7c9a56edc0f ^ _DAT_183395380) + uVar2;
  _DAT_183395310 = _DAT_183395038 ^ _DAT_183395380;
  _DAT_183395008 = 0x4a114404;
  _DAT_183394f48 = func_0x00018df46b70(_DAT_1833953b0 + 0x1eff832a001dffU ^ 0x43);
  uVar2 = (_DAT_183394f48 & 0x7fffffffffffffff) * -0xd5586f96106edab;
  _DAT_183394d50 = _DAT_183395030 ^ uVar2 ^ 0xff;
  _DAT_183394db0 = (_DAT_183394db0 ^ uVar2) + 0xff ^ 0x1e1d7c2ac18630eb;
  _DAT_183394db8 = (_DAT_183394db8 * 0x5ae41b9b60b331a3 ^ _DAT_183394db0) + uVar2;
  _DAT_183394d70 = _DAT_183394db8 ^ _DAT_183394db0;
  _DAT_1833952b0 = 0xff;
  _DAT_183394dc8 = func_0x00018df46b70(_DAT_183395438 + 0x230083e4ffddffU ^ 0xa7);
  uVar2 = (ulonglong)(~(uint)_DAT_183394dc8 & 0xe8947ca2);
  _DAT_183394ed8 = _DAT_183394ed8 ^ uVar2 ^ 0x41eca849acf4c0a0;
  _DAT_183394de8 = (_DAT_183394de8 * 0x33ed884ac5c15f93 ^ _DAT_183394ed8) + uVar2;
  _DAT_183395388 = _DAT_183394de8 ^ _DAT_183394ed8;
  _DAT_183395178 = 0;
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



// ===== continuation @ rva df2f7b5 (image 18df2f7b5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df308b7 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df2f7b5(void)

{
  longlong *unaff_RSI;
  
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190de6cb0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva df28e20 (image 18df28e20) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018df28e3b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18df28e20(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva deb1ac0 (image 18deb1ac0) =====

void FUN_18deb1ac0(void)

{
  return;
}



// ===== continuation @ rva deb190d (image 18deb190d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb190d(void)

{
  FUN_190ddfc90();
  (*_DAT_18240b178)();
  return;
}



// ===== continuation @ rva deb19cc (image 18deb19cc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb19cc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117db0();
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



// ===== continuation @ rva deb1a49 (image 18deb1a49) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb1a49(void)

{
  FUN_190ddfc90();
  (*_DAT_18240b108)();
  return;
}



// ===== continuation @ rva deb1ac8 (image 18deb1ac8) =====

void FUN_18deb1ac8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva deb1a28 (image 18deb1a28) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb1a28(void)

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



// ===== continuation @ rva deb1a7c (image 18deb1a7c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb1a7c(void)

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



// ===== continuation @ rva deb1a00 (image 18deb1a00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb1a00(void)

{
  FUN_190dd72e0();
  (*_DAT_18240b0f8)();
  return;
}



// ===== continuation @ rva deb1aa0 (image 18deb1aa0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb1aa0(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18240b128)();
  return;
}



// ===== continuation @ rva df14d3b (image 18df14d3b) =====

void FUN_18df14d3b(void)

{
  return;
}



// ===== continuation @ rva df11b27 (image 18df11b27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df11b27(void)

{
  FUN_190ddce00();
  (*_DAT_182420498)();
  return;
}



// ===== continuation @ rva df15605 (image 18df15605) =====

void FUN_18df15605(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df13f9d (image 18df13f9d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df13f9d(void)

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



// ===== continuation @ rva df15184 (image 18df15184) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df15184(void)

{
  (*_DAT_1824208a8)();
  return;
}



// ===== continuation @ rva df14d11 (image 18df14d11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df14d11(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182420388)();
  return;
}



// ===== continuation @ rva df14a66 (image 18df14a66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df14a66(void)

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



// ===== continuation @ rva df155f6 (image 18df155f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df155f6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182420388)();
  return;
}



// ===== continuation @ rva df152e3 (image 18df152e3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df152e3(void)

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



// ===== continuation @ rva df14317 (image 18df14317) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df14317(void)

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



// ===== continuation @ rva df14fd9 (image 18df14fd9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df14fd9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_182420478)(cVar1 != '\0');
  return;
}



// ===== continuation @ rva df14ff9 (image 18df14ff9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df14ff9(int param_1)

{
  switch(param_1 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva df4abc3 (image 18df4abc3) =====

void FUN_18df4abc3(void)

{
  return;
}



// ===== continuation @ rva df46cc4 (image 18df46cc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df46cc4(void)

{
  FUN_190ddce00();
  (*_DAT_182428fd8)();
  return;
}



// ===== continuation @ rva df4a232 (image 18df4a232) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4a232(void)

{
  (*_DAT_182429568)();
  return;
}



// ===== continuation @ rva df4a159 (image 18df4a159) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df4a159(void)

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



// ===== continuation @ rva df4a502 (image 18df4a502) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4a502(void)

{
  (*_DAT_182429368)();
  return;
}



// ===== continuation @ rva df4a332 (image 18df4a332) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df4a332(void)

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



// ===== continuation @ rva df4ac45 (image 18df4ac45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4ac45(void)

{
  (*_DAT_182429468)();
  return;
}



// ===== continuation @ rva df4a3c7 (image 18df4a3c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4a3c7(void)

{
  undefined4 uStack0000000000000038;
  
  uStack0000000000000038 = 0;
  FUN_190dd72e0();
  (*_DAT_1824293a8)();
  return;
}



// ===== continuation @ rva df4a21c (image 18df4a21c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4a21c(void)

{
  (*_DAT_182429558)();
  return;
}



// ===== continuation @ rva df4aaf8 (image 18df4aaf8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4aaf8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1824294c8)();
  return;
}



// ===== continuation @ rva df4a059 (image 18df4a059) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4a059(void)

{
  (*_DAT_1824295a8)();
  return;
}



// ===== continuation @ rva df4a4c3 (image 18df4a4c3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4a4c3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1824290c8)();
  return;
}



// ===== continuation @ rva df4f5cd (image 18df4f5cd) =====

void FUN_18df4f5cd(void)

{
  return;
}



// ===== continuation @ rva df4ae46 (image 18df4ae46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df4ae46(void)

{
  FUN_190ddce00();
  (*_DAT_18242b4f8)();
  return;
}



// ===== continuation @ rva df5d50f (image 18df5d50f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5d50f(void)

{
  (*_DAT_18242e4e8)();
  return;
}



// ===== continuation @ rva df5bfe4 (image 18df5bfe4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5bfe4(void)

{
  (*_DAT_18242e3d8)();
  return;
}



// ===== continuation @ rva df599df (image 18df599df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df599df(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18242c2c8)();
  return;
}



// ===== continuation @ rva df5979c (image 18df5979c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5979c(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000038;
  undefined8 in_stack_000000c0;
  
  uVar1 = (**(code **)(*in_stack_00000038 + 0xa8))(in_stack_00000038,in_stack_000000c0);
  FUN_190dcd3d0(0x565,uVar1);
  (*_DAT_18242d088)();
  return;
}



// ===== continuation @ rva df5d073 (image 18df5d073) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5d073(void)

{
  (*_DAT_18242dc78)();
  return;
}



// ===== continuation @ rva df5d8be (image 18df5d8be) =====

void FUN_18df5d8be(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df55d02 (image 18df55d02) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df55d02(void)

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



// ===== continuation @ rva df5d8ad (image 18df5d8ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5d8ad(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_18242e168)();
  return;
}



// ===== continuation @ rva df565d6 (image 18df565d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df565d6(void)

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



// ===== continuation @ rva df5796b (image 18df5796b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5796b(void)

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



// ===== continuation @ rva df5daa8 (image 18df5daa8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5daa8(void)

{
  FUN_190dd72e0();
  (*_DAT_1824300e8)();
  return;
}



// ===== continuation @ rva df5da35 (image 18df5da35) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5da35(void)

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



// ===== continuation @ rva df5deab (image 18df5deab) =====

void FUN_18df5deab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df5ddc3 (image 18df5ddc3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5ddc3(void)

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



// ===== continuation @ rva df5dea1 (image 18df5dea1) =====

void FUN_18df5dea1(void)

{
  return;
}



// ===== continuation @ rva df5dad0 (image 18df5dad0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5dad0(void)

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



// ===== continuation @ rva df5de56 (image 18df5de56) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5de56(void)

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



// ===== continuation @ rva df5dcd3 (image 18df5dcd3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5dcd3(void)

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



// ===== continuation @ rva df5dffc (image 18df5dffc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5dffc(void)

{
  FUN_190dd72e0();
  (*_DAT_1824303e8)();
  return;
}



// ===== continuation @ rva df5df89 (image 18df5df89) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5df89(void)

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



// ===== continuation @ rva df5e1e2 (image 18df5e1e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5e1e2(void)

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



// ===== continuation @ rva df5e277 (image 18df5e277) =====

void FUN_18df5e277(void)

{
  return;
}



// ===== continuation @ rva df5e0c3 (image 18df5e0c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5e0c3(void)

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



// ===== continuation @ rva df5e284 (image 18df5e284) =====

void FUN_18df5e284(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df5e100 (image 18df5e100) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5e100(void)

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



// ===== continuation @ rva df5e18e (image 18df5e18e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e18e(void)

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



// ===== continuation @ rva df5e045 (image 18df5e045) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e045(void)

{
  FUN_190dd9df0();
  (*_DAT_182430418)();
  return;
}



// ===== continuation @ rva df5e0d8 (image 18df5e0d8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e0d8(void)

{
  FUN_190dd72e0();
  (*_DAT_182430318)();
  return;
}



// ===== continuation @ rva df5e3dc (image 18df5e3dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e3dc(void)

{
  FUN_190dd72e0();
  (*_DAT_182430540)();
  return;
}



// ===== continuation @ rva df5e369 (image 18df5e369) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e369(void)

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



// ===== continuation @ rva df5e657 (image 18df5e657) =====

void FUN_18df5e657(void)

{
  return;
}



// ===== continuation @ rva df5e3a2 (image 18df5e3a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e3a2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1824304b0)();
  return;
}



// ===== continuation @ rva df5e4b8 (image 18df5e4b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e4b8(void)

{
  FUN_190dd72e0();
  (*_DAT_182430570)();
  return;
}



// ===== continuation @ rva df5e664 (image 18df5e664) =====

void FUN_18df5e664(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df5e458 (image 18df5e458) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5e458(void)

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



// ===== continuation @ rva df5e3c7 (image 18df5e3c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5e3c7(void)

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



// ===== continuation @ rva df5e5c2 (image 18df5e5c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5e5c2(void)

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



// ===== continuation @ rva df5e56e (image 18df5e56e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e56e(void)

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



// ===== continuation @ rva df5e4a3 (image 18df5e4a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5e4a3(void)

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



// ===== continuation @ rva df5e534 (image 18df5e534) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df5e534(void)

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



// ===== continuation @ rva df63080 (image 18df63080) =====

void FUN_18df63080(void)

{
  return;
}



// ===== continuation @ rva df5e7ed (image 18df5e7ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df5e7ed(void)

{
  FUN_190ddce00();
  (*_DAT_1824312e0)();
  return;
}



// ===== continuation @ rva df65a79 (image 18df65a79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df65a79(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182431a60)();
  return;
}



// ===== continuation @ rva df65875 (image 18df65875) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df65875(void)

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



// ===== continuation @ rva df65a8a (image 18df65a8a) =====

void FUN_18df65a8a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df656a6 (image 18df656a6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df656a6(void)

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



// ===== continuation @ rva df62136 (image 18df62136) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df62136(void)

{
  (*_DAT_182431e50)();
  return;
}



// ===== continuation @ rva df65733 (image 18df65733) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df65733(void)

{
  (*_DAT_182431790)();
  return;
}



// ===== continuation @ rva df624e4 (image 18df624e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df624e4(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182431ac0)();
  return;
}



// ===== continuation @ rva df61ffe (image 18df61ffe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df61ffe(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_182430ab0)();
  return;
}



// ===== continuation @ rva df6457b (image 18df6457b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df6457b(void)

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



// ===== continuation @ rva df63aba (image 18df63aba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df63aba(void)

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



// ===== continuation @ rva df69ca5 (image 18df69ca5) =====

void FUN_18df69ca5(void)

{
  return;
}



// ===== continuation @ rva df65ca7 (image 18df65ca7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df65ca7(void)

{
  FUN_190ddce00();
  (*_DAT_182432e68)();
  return;
}



// ===== continuation @ rva df69c96 (image 18df69c96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df69c96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182432ee8)();
  return;
}



// ===== continuation @ rva df69af7 (image 18df69af7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df69af7(void)

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



// ===== continuation @ rva df69a48 (image 18df69a48) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df69a48(void)

{
  (*_DAT_182433018)();
  return;
}



// ===== continuation @ rva df69d11 (image 18df69d11) =====

void FUN_18df69d11(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df698ed (image 18df698ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df698ed(void)

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



// ===== continuation @ rva df69abd (image 18df69abd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df69abd(void)

{
  (*_DAT_182433128)();
  return;
}



// ===== continuation @ rva df69a91 (image 18df69a91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df69a91(void)

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



// ===== continuation @ rva df699ed (image 18df699ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df699ed(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182432fb8)();
  return;
}



// ===== continuation @ rva df69631 (image 18df69631) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df69631(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva df69c3a (image 18df69c3a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df69c3a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1824330e8)();
  return;
}



// ===== continuation @ rva deb53cb (image 18deb53cb) =====

void FUN_18deb53cb(void)

{
  return;
}



// ===== continuation @ rva deb1f82 (image 18deb1f82) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb1f82(void)

{
  FUN_190ddce00();
  (*_DAT_18240be68)();
  return;
}



// ===== continuation @ rva deb87b5 (image 18deb87b5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb87b5(void)

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



// ===== continuation @ rva deb7f47 (image 18deb7f47) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb7f47(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_18240b4a8)();
  return;
}



// ===== continuation @ rva deb88e3 (image 18deb88e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb88e3(void)

{
  (*_DAT_18240c4a8)();
  return;
}



// ===== continuation @ rva deb52d8 (image 18deb52d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb52d8(void)

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



// ===== continuation @ rva deb7bea (image 18deb7bea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb7bea(void)

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



// ===== continuation @ rva deb59c5 (image 18deb59c5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb59c5(void)

{
  FUN_190ddfc90();
  (*_DAT_18240b5d8)();
  return;
}



// ===== continuation @ rva deb88eb (image 18deb88eb) =====

void FUN_18deb88eb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva deb7f23 (image 18deb7f23) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deb7f23(void)

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



// ===== continuation @ rva deb7550 (image 18deb7550) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb7550(void)

{
  (*_DAT_18240c748)();
  return;
}



// ===== continuation @ rva deccb51 (image 18deccb51) =====

void FUN_18deccb51(void)

{
  return;
}



// ===== continuation @ rva deb8b1f (image 18deb8b1f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deb8b1f(void)

{
  FUN_190ddce00();
  (*_DAT_18240dc40)();
  return;
}



// ===== continuation @ rva dec8c1f (image 18dec8c1f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dec8c1f(void)

{
  FUN_190de3220();
  (*_DAT_18240ecc0)();
  return;
}



// ===== continuation @ rva deccbbd (image 18deccbbd) =====

void FUN_18deccbbd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva decbd76 (image 18decbd76) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18decbd76(void)

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



// ===== continuation @ rva dec8e45 (image 18dec8e45) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dec8e45(void)

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



// ===== continuation @ rva dec8737 (image 18dec8737) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dec8737(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_18240ed40)();
  return;
}



// ===== continuation @ rva decc836 (image 18decc836) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18decc836(void)

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



// ===== continuation @ rva dec78f3 (image 18dec78f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dec78f3(void)

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



// ===== continuation @ rva dec6f74 (image 18dec6f74) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dec6f74(void)

{
  FUN_190ddfc90();
  (*_DAT_18240de80)();
  return;
}



// ===== continuation @ rva ded03d7 (image 18ded03d7) =====

void FUN_18ded03d7(void)

{
  return;
}



// ===== continuation @ rva deccdd4 (image 18deccdd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deccdd4(void)

{
  FUN_190ddce00();
  (*_DAT_182413688)();
  return;
}



// ===== continuation @ rva ded1257 (image 18ded1257) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded1257(void)

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



// ===== continuation @ rva ded0fdd (image 18ded0fdd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded0fdd(void)

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



// ===== continuation @ rva ded139f (image 18ded139f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded139f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182413978)();
  return;
}



// ===== continuation @ rva ded0b59 (image 18ded0b59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded0b59(void)

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



// ===== continuation @ rva ded13c3 (image 18ded13c3) =====

void FUN_18ded13c3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ded0f77 (image 18ded0f77) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded0f77(void)

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



// ===== continuation @ rva decf8df (image 18decf8df) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18decf8df(void)

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



// ===== continuation @ rva ded0048 (image 18ded0048) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded0048(void)

{
  (*_DAT_182413248)();
  return;
}



// ===== continuation @ rva ded1009 (image 18ded1009) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded1009(void)

{
  (*_DAT_182413908)();
  return;
}



// ===== continuation @ rva ded0229 (image 18ded0229) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded0229(void)

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



// ===== continuation @ rva ded5490 (image 18ded5490) =====

void FUN_18ded5490(void)

{
  return;
}



// ===== continuation @ rva ded15b4 (image 18ded15b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded15b4(void)

{
  FUN_190ddce00();
  (*_DAT_182414698)();
  return;
}



// ===== continuation @ rva ded55ba (image 18ded55ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded55ba(void)

{
  (*_DAT_182414918)();
  return;
}



// ===== continuation @ rva ded56ba (image 18ded56ba) =====

void FUN_18ded56ba(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ded5697 (image 18ded5697) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded5697(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_182414a38)();
    return;
  }
  (*_DAT_182414a38)();
  return;
}



// ===== continuation @ rva ded5150 (image 18ded5150) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded5150(void)

{
  (*_DAT_182414888)();
  return;
}



// ===== continuation @ rva ded4ba3 (image 18ded4ba3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded4ba3(void)

{
  (*_DAT_182414818)();
  return;
}



// ===== continuation @ rva ded4ef5 (image 18ded4ef5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded4ef5(void)

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



// ===== continuation @ rva ded166c (image 18ded166c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded166c(void)

{
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000098;
  
  uStack0000000000000038 = 0x5ebe4533a153;
  uStack0000000000000098 = in_stack_00000030;
  (*_DAT_182414518)(_DAT_1833921c0);
  return;
}



// ===== continuation @ rva ded536a (image 18ded536a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded536a(void)

{
  FUN_190de3220();
  (*_DAT_182414978)();
  return;
}



// ===== continuation @ rva ded8f06 (image 18ded8f06) =====

void FUN_18ded8f06(void)

{
  return;
}



// ===== continuation @ rva ded5874 (image 18ded5874) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded5874(void)

{
  FUN_190ddce00();
  (*_DAT_182415d18)();
  return;
}



// ===== continuation @ rva ded8bd1 (image 18ded8bd1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded8bd1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182415ce8)();
  return;
}



// ===== continuation @ rva ded8a28 (image 18ded8a28) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded8a28(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ded887d (image 18ded887d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded887d(void)

{
  (*_DAT_182415d28)();
  return;
}



// ===== continuation @ rva ded90e9 (image 18ded90e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded90e9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182415c18)();
  return;
}



// ===== continuation @ rva ded9130 (image 18ded9130) =====

void FUN_18ded9130(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ded837f (image 18ded837f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded837f(void)

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



// ===== continuation @ rva ded9071 (image 18ded9071) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ded9071(void)

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



// ===== continuation @ rva ded9049 (image 18ded9049) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded9049(void)

{
  FUN_190dd72e0();
  (*_DAT_182415768)();
  return;
}



// ===== continuation @ rva ded8c37 (image 18ded8c37) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded8c37(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182415c48)();
  return;
}



// ===== continuation @ rva ded8a43 (image 18ded8a43) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded8a43(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182415908)();
  return;
}



// ===== continuation @ rva dedcf10 (image 18dedcf10) =====

void FUN_18dedcf10(void)

{
  return;
}



// ===== continuation @ rva ded92f4 (image 18ded92f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ded92f4(void)

{
  FUN_190ddce00();
  (*_DAT_1824168e8)();
  return;
}



// ===== continuation @ rva dedcd2f (image 18dedcd2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedcd2f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182416998)();
  return;
}



// ===== continuation @ rva dedca8e (image 18dedca8e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedca8e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1824169d8)();
  return;
}



// ===== continuation @ rva dedccab (image 18dedccab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedccab(void)

{
  (*_DAT_182416c38)();
  return;
}



// ===== continuation @ rva dedcbd0 (image 18dedcbd0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedcbd0(void)

{
  (*_DAT_182416a88)();
  return;
}



// ===== continuation @ rva dedc307 (image 18dedc307) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dedc307(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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



// ===== continuation @ rva dedd045 (image 18dedd045) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedd045(void)

{
  undefined4 uStack0000000000000030;
  
  uStack0000000000000030 = 1;
  (*_DAT_182416978)();
  return;
}



// ===== continuation @ rva dedce65 (image 18dedce65) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dedce65(void)

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



// ===== continuation @ rva dedc6ef (image 18dedc6ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedc6ef(void)

{
  (*_DAT_182416bb8)();
  return;
}



// ===== continuation @ rva dedc760 (image 18dedc760) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedc760(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182416ad8)();
  return;
}



// ===== continuation @ rva dedc3da (image 18dedc3da) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedc3da(void)

{
  FUN_190dd72e0();
  (*_DAT_182416bc8)();
  return;
}



// ===== continuation @ rva dee12d1 (image 18dee12d1) =====

void FUN_18dee12d1(void)

{
  return;
}



// ===== continuation @ rva dedd2f4 (image 18dedd2f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedd2f4(void)

{
  FUN_190ddce00();
  (*_DAT_182417df8)();
  return;
}



// ===== continuation @ rva dee09df (image 18dee09df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dee09df(void)

{
  (*_DAT_182418048)();
  return;
}



// ===== continuation @ rva dee1406 (image 18dee1406) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dee1406(void)

{
  undefined4 uStack0000000000000030;
  
  uStack0000000000000030 = 1;
  (*_DAT_182418038)();
  return;
}



// ===== continuation @ rva dedd38b (image 18dedd38b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dedd38b(void)

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



// ===== continuation @ rva dee1500 (image 18dee1500) =====

void FUN_18dee1500(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva dee0d31 (image 18dee0d31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dee0d31(void)

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



// ===== continuation @ rva dedd3e3 (image 18dedd3e3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dedd3e3(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  longlong in_RAX;
  longlong *unaff_RSI;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong unaff_R14;
  uint uVar11;
  uint uVar19;
  uint uVar20;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar24;
  undefined1 auVar23 [16];
  uint uVar25;
  undefined1 auVar26 [16];
  ulonglong uVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulonglong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  uint uVar46;
  undefined1 auVar47 [16];
  ulonglong uVar48;
  undefined1 auVar49 [16];
  ulonglong uStack0000000000000070;
  undefined8 uStack0000000000000078;
  ulonglong uStack0000000000000080;
  ulonglong uStack0000000000000098;
  ulonglong in_stack_000000a0;
  
  uVar9 = _DAT_1824179d8;
  uVar22 = _DAT_1824179d0;
  uStack0000000000000098 = _DAT_1824179d0 ^ 0x84222325;
  uVar7 = (0x74ec3f8195bc4429 - in_RAX) *
          ((param_1 ^ uStack0000000000000098) + (uStack0000000000000098 & param_1) * 2);
  uVar7 = (uVar7 | _DAT_183393368) + (uVar7 & _DAT_183393368);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393378 =
       func_0x00018dee1570((_DAT_1824179d0 ^ 0x74ec3f81119e670c | uVar7) +
                           (uVar7 & (_DAT_1824179d0 ^ 0x74ec3f81119e670c)));
  uVar7 = uVar22 * 0x74ec3f8195bc4429 ^ _DAT_183393378;
  uVar6 = uVar22 | 0x74ec3f8195bc4429;
  _DAT_183393548 = (_DAT_183393548 ^ uVar7) + uVar6 ^ 0xae5de7a4eaf1c05f;
  _DAT_183393630 = (_DAT_183393630 * -0x690cc7dd06c18a09 ^ _DAT_183393548) + uVar7;
  _DAT_183393660 = _DAT_183393630 ^ _DAT_183393548;
  uVar7 = uVar9 ^ 0x84222325 ^ _DAT_183393350;
  lVar8 = (uVar9 ^ 0x84222325) + _DAT_183393350;
  uVar21 = uVar7 + lVar8;
  uVar24 = (_DAT_183393350 ^ 0x2206a62271d4800b) + _DAT_183393350 + 0x2206a62271d4800b;
  uVar7 = (uVar21 * 0x2000 | uVar21 >> 0x33) ^ uVar7;
  uVar21 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ _DAT_183393350 ^ 0x2206a62271d4800b;
  _DAT_183393580 = uVar6;
  _DAT_183393668 =
       func_0x00018dee1570((uVar21 << 0x1d | uVar21 >> 0x23) - (_DAT_183393350 + 0x2206a62271d4800b)
                           ^ (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
  uVar7 = uVar9 ^ 0x2206a62271d4800b;
  _DAT_1833933b0 = (_DAT_1833933b0 ^ uVar9 ^ _DAT_183393668) + uVar7 ^ 0x6f797dbe4fa29d55;
  _DAT_183393548 =
       (_DAT_183393548 * -0x7f98a81c212c7537 ^ _DAT_1833933b0) + (uVar9 ^ _DAT_183393668);
  _DAT_183393378 = _DAT_183393548 ^ _DAT_1833933b0;
  lVar8 = uVar22 * uVar22;
  uVar9 = lVar8 * 0x6b588e314a576f67;
  uVar22 = (_DAT_183393610 ^ 0x84222325) + _DAT_1833936f0 + 0x84222325;
  uVar21 = (uVar9 ^ _DAT_1833936f0) + _DAT_183393610 + uVar9;
  uVar22 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ _DAT_183393610 ^ 0x84222325;
  uVar21 = (uVar21 * 0x2000 | uVar21 >> 0x33) ^ uVar9 ^ _DAT_1833936f0;
  _DAT_183393300 = uVar7;
  _DAT_183393468 =
       func_0x00018dee1570((uVar21 << 0x1d | uVar21 >> 0x23) - (_DAT_183393610 + uVar9) ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_1833936f0 + 0x84222325));
  uVar21 = lVar8 * -0x6b588e314a576f67;
  _DAT_183393560 =
       (_DAT_183393560 ^ _DAT_183393468) + lVar8 * -0x6b588e314a576f67 ^ 0x64f173e3482baaf9;
  _DAT_183393580 = (_DAT_183393580 * 0x7ba60ce9965a7c1 ^ _DAT_183393560) + _DAT_183393468;
  _DAT_183393508 = _DAT_183393580 ^ _DAT_183393560;
  uVar22 = (unaff_R14 ^ _DAT_1833935c8) + unaff_R14 + _DAT_1833936a0;
  uVar24 = (uVar9 ^ _DAT_1833936a0) + _DAT_1833935c8 + uVar9;
  uVar22 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ unaff_R14 ^ _DAT_1833935c8;
  uVar24 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ uVar9 ^ _DAT_1833936a0;
  _DAT_1833933a0 = uVar21;
  uVar22 = func_0x00018dee1570((uVar24 << 0x1d | uVar24 >> 0x23) - (_DAT_1833935c8 + uVar9) ^
                               (uVar22 << 0x1d | uVar22 >> 0x23) - (unaff_R14 + _DAT_1833936a0));
  uVar19 = (uint)(uVar9 >> 0x20);
  auVar40._8_4_ = (int)uVar9;
  auVar40._0_8_ = uVar9;
  auVar40._12_4_ = uVar19;
  uVar25 = SUB164(auVar40 & _DAT_182418060,0);
  uVar29 = SUB168(auVar40 & _DAT_182418060,0);
  uVar20 = SUB164(auVar40 | _DAT_182418060,0);
  uVar11 = SUB164(_DAT_182418060 ^ auVar40,0);
  uVar24 = SUB168(_DAT_182418060 ^ auVar40,0);
  uVar24 = (ulonglong)_DAT_1824180d0 * (ulonglong)uVar11 +
           ((ulonglong)_DAT_1824180e0 * (ulonglong)uVar11 +
            (uVar24 >> 0x20) * (ulonglong)_DAT_1824180d0 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1824180b0 +
           ((ulonglong)_DAT_1824180c0 * (ulonglong)uVar20 +
            (SUB168(auVar40 | _DAT_182418060,0) >> 0x20) * (ulonglong)_DAT_1824180b0 << 0x20) +
           (ulonglong)_DAT_182418090 * (ulonglong)uVar25 +
           ((ulonglong)_DAT_1824180a0 * (ulonglong)uVar25 +
            (uVar29 >> 0x20) * (ulonglong)_DAT_182418090 << 0x20) +
           (ulonglong)_DAT_182418070 * (uVar9 & 0xffffffff) +
           ((ulonglong)_DAT_182418080 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_182418070 << 0x20) +
           (-((ulonglong)uVar11 * (_DAT_182418150 & 0xffffffff) +
             ((ulonglong)_DAT_182418160 * (ulonglong)uVar11 +
              (uVar24 >> 0x20) * (_DAT_182418150 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar25 * (_DAT_182418130 & 0xffffffff) +
            ((ulonglong)_DAT_182418140 * (ulonglong)uVar25 +
             (uVar29 >> 0x20) * (_DAT_182418130 & 0xffffffff) << 0x20) +
           (uVar9 & 0xffffffff) * (ulonglong)_DAT_182418110 +
           ((ulonglong)_DAT_182418120 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_182418110 << 0x20))) + _DAT_182418170;
  _DAT_1833934b0 = _DAT_183393388 ^ uVar22 ^ uVar24;
  _DAT_183393408 = (_DAT_183393408 ^ uVar22) + uVar24 ^ 0x3238a89511a11b61;
  _DAT_183393618 = (_DAT_183393618 * -0x62039b7e30a2e735 ^ _DAT_183393408) + uVar22;
  _DAT_1833933a8 = _DAT_183393618 ^ _DAT_183393408;
  uVar9 = uVar24 ^ 0x84222325;
  uVar22 = ((_DAT_1833935a8 ^ uVar9) + (uVar9 & _DAT_1833935a8) * 2) * (uVar21 - _DAT_183393588);
  uVar22 = (uVar22 | _DAT_183393468) + (uVar22 & _DAT_183393468);
  uVar22 = uVar22 * 0x2000 ^ uVar22;
  uVar22 = uVar22 >> 7 ^ uVar22;
  uVar22 = uVar22 << 0x11 ^ uVar22;
  _DAT_183393450 = uVar24;
  _DAT_183393498 = func_0x00018dee1570((uVar9 ^ uVar21 | uVar22) + (uVar22 & (uVar9 ^ uVar21)));
  uVar9 = ~_DAT_183393498 & uVar24;
  uVar25 = (uint)(uVar24 >> 0x20);
  auVar31._8_4_ = (int)uVar24;
  auVar31._0_8_ = uVar24;
  auVar31._12_4_ = uVar25;
  uVar11 = (uint)(uVar21 >> 0x20);
  auVar41._8_4_ = (int)uVar21;
  auVar41._0_8_ = uVar21;
  auVar41._12_4_ = uVar11;
  auVar47._8_4_ = 0xffffffff;
  auVar47._0_8_ = 0xffffffffffffffff;
  auVar47._12_4_ = 0xffffffff;
  uVar30 = SUB164(auVar41 ^ auVar47,0);
  uVar29 = SUB168(auVar41 ^ auVar47,0);
  uVar22 = uVar9 >> 1 | uVar9;
  uVar22 = uVar22 >> 2 | uVar22;
  uVar22 = uVar22 >> 4 | uVar22;
  uVar22 = uVar22 >> 8 | uVar22;
  uVar22 = uVar22 >> 0x10 | uVar22;
  uVar22 = uVar22 >> 0x20 | uVar22;
  uVar22 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar9;
  uVar20 = SUB164(auVar31 & auVar41,0);
  uVar19 = SUB164(auVar31 | auVar41,0);
  uVar24 = (((ulonglong)_DAT_1824181a0 * (ulonglong)uVar30 +
             ((uVar29 >> 0x20) * (ulonglong)_DAT_1824181a0 +
              (ulonglong)_DAT_182418180 * (ulonglong)uVar30 << 0x20) +
             (ulonglong)_DAT_182418190 * (uVar21 & 0xffffffff) +
             ((ulonglong)uVar11 * (ulonglong)_DAT_182418190 +
              (uVar21 & 0xffffffff) * (ulonglong)_DAT_182418180 << 0x20) + uVar24) -
           ((ulonglong)uVar30 * (_DAT_182418210 & 0xffffffff) +
            ((ulonglong)_DAT_182418240 * (ulonglong)uVar30 +
             (uVar29 >> 0x20) * (_DAT_182418210 & 0xffffffff) << 0x20) +
           (ulonglong)uVar19 * (ulonglong)_DAT_182418230 +
           ((SUB168(auVar31 | auVar41,0) >> 0x20) * (ulonglong)_DAT_182418230 +
            (ulonglong)_DAT_182418220 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_182418230 +
           ((SUB168(auVar31 & auVar41,0) >> 0x20) * (ulonglong)_DAT_182418230 +
            (ulonglong)uVar20 * (ulonglong)_DAT_182418220 << 0x20) +
           (uVar21 & 0xffffffff) * (ulonglong)_DAT_1824181f0 +
           ((ulonglong)_DAT_182418200 * (uVar21 & 0xffffffff) +
            (ulonglong)uVar11 * (ulonglong)_DAT_1824181f0 << 0x20) +
           (uVar24 & 0xffffffff) * (ulonglong)_DAT_1824181d0 +
           ((ulonglong)_DAT_1824181e0 * (uVar24 & 0xffffffff) +
            (ulonglong)uVar25 * (ulonglong)_DAT_1824181d0 << 0x20))) + _DAT_182418250;
  _DAT_183393320 = _DAT_183393300 ^ uVar9 ^ uVar24;
  _DAT_183393428 = (_DAT_183393428 ^ uVar9) + uVar24 ^ 0xf2a908636e070e3b;
  _DAT_1833935b8 = (_DAT_1833935b8 * -0x52d35091b2cacf19 ^ _DAT_183393428) + uVar9;
  _DAT_1833934f8 = _DAT_1833935b8 ^ _DAT_183393428;
  lVar8 = _DAT_1824179d8 * _DAT_1824179d8;
  uVar21 = lVar8 * -0x1cb984801971f96c;
  uVar9 = uVar24 ^ 0x84222325;
  uVar22 = ((_DAT_183393300 ^ uVar9) + (uVar9 & _DAT_183393300) * 2) * (uVar21 - _DAT_183393318);
  uVar22 = (uVar22 | _DAT_1833935c8) + (uVar22 & _DAT_1833935c8);
  uVar22 = uVar22 * 0x2000 ^ uVar22;
  uVar22 = uVar22 >> 7 ^ uVar22;
  uVar22 = uVar22 << 0x11 ^ uVar22;
  _DAT_183393670 = uVar24;
  _DAT_1833935c8 = func_0x00018dee1570((uVar9 ^ uVar21 | uVar22) + (uVar22 & (uVar9 ^ uVar21)));
  uVar22 = uVar24 * uVar21 ^ _DAT_1833935c8;
  uVar22 = uVar22 << 0x16 | uVar22 >> 0x2a;
  uVar9 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar22 = ~(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar22) &
           uVar24;
  uVar25 = (uint)(uVar24 >> 0x20);
  auVar36._8_4_ = (int)uVar24;
  auVar36._0_8_ = uVar24;
  auVar36._12_4_ = uVar25;
  uVar11 = (uint)(uVar21 >> 0x20);
  auVar26._8_4_ = (int)uVar21;
  auVar26._0_8_ = uVar21;
  auVar26._12_4_ = uVar11;
  uVar20 = SUB164(auVar36 & auVar26,0);
  uVar9 = SUB168(auVar36 & auVar26,0);
  uVar30 = SUB164(auVar36 | auVar26,0);
  uVar43 = SUB168(auVar36 | auVar26,0);
  uVar19 = SUB164(auVar36 ^ auVar26,0);
  uVar29 = SUB168(auVar36 ^ auVar26,0);
  _DAT_183393440 =
       ((ulonglong)_DAT_1824182c0 * (ulonglong)uVar19 +
        ((ulonglong)_DAT_1824182d0 * (ulonglong)uVar19 +
         (uVar29 >> 0x20) * (ulonglong)_DAT_1824182c0 << 0x20) +
        (ulonglong)_DAT_1824182a0 * (ulonglong)uVar30 +
        ((ulonglong)_DAT_1824182b0 * (ulonglong)uVar30 +
         (uVar43 >> 0x20) * (ulonglong)_DAT_1824182a0 << 0x20) +
       (ulonglong)_DAT_182418280 * (ulonglong)uVar20 +
       ((ulonglong)_DAT_182418290 * (ulonglong)uVar20 + (uVar9 >> 0x20) * (ulonglong)_DAT_182418280
       << 0x20) +
       (ulonglong)_DAT_182418270 * (uVar21 & 0xffffffff) +
       ((ulonglong)uVar11 * (ulonglong)_DAT_182418270 +
        (ulonglong)_DAT_182418260 * (uVar21 & 0xffffffff) << 0x20) +
       (uVar24 & 0xffffffff) * (ulonglong)_DAT_182418270 +
       ((ulonglong)uVar25 * (ulonglong)_DAT_182418270 +
        (uVar24 & 0xffffffff) * (ulonglong)_DAT_182418260 << 0x20)) -
       ((ulonglong)uVar19 * (ulonglong)_DAT_182418360 +
        ((ulonglong)_DAT_182418370 * (ulonglong)uVar19 +
         (uVar29 >> 0x20) * (ulonglong)_DAT_182418360 << 0x20) +
        (ulonglong)uVar30 * (ulonglong)_DAT_182418340 +
        ((ulonglong)_DAT_182418350 * (ulonglong)uVar30 +
         (uVar43 >> 0x20) * (ulonglong)_DAT_182418340 << 0x20) +
       (ulonglong)uVar20 * (ulonglong)_DAT_182418320 +
       ((ulonglong)_DAT_182418330 * (ulonglong)uVar20 + (uVar9 >> 0x20) * (ulonglong)_DAT_182418320
       << 0x20) +
       (uVar21 & 0xffffffff) * (ulonglong)_DAT_182418310 +
       ((ulonglong)uVar11 * (ulonglong)_DAT_182418310 +
        (ulonglong)_DAT_182418300 * (uVar21 & 0xffffffff) << 0x20) +
       (uVar24 & 0xffffffff) * (ulonglong)_DAT_182418310 +
       ((ulonglong)uVar25 * (ulonglong)_DAT_182418310 +
        (uVar24 & 0xffffffff) * (ulonglong)_DAT_182418300 << 0x20));
  _DAT_1833933c8 = _DAT_1833936c0 ^ uVar22 ^ _DAT_183393440;
  _DAT_183393418 = (_DAT_183393418 ^ uVar22) + _DAT_183393440 ^ 0x3b99c384fd90aa18;
  _DAT_183393458 = (_DAT_183393458 * 0xbf79f855936e91 ^ _DAT_183393418) + uVar22;
  _DAT_183393490 = _DAT_183393458 ^ _DAT_183393418;
  lVar10 = _DAT_183393440 + lVar8 * 0x1cb984801971f96c;
  lVar8 = _DAT_1824179d8 * _DAT_1824179d0;
  uVar9 = lVar8 * 0x28ddae27c67764b2;
  uVar22 = ((_DAT_183393680 ^ 0x84222325) + (ulonglong)((uint)_DAT_183393680 & 0x84222325) * 2) *
           (uVar9 - _DAT_183393390);
  uVar22 = (uVar22 | _DAT_183393478) + (uVar22 & _DAT_183393478);
  uVar22 = uVar22 * 0x2000 ^ uVar22;
  uVar22 = uVar22 >> 7 ^ uVar22;
  uVar22 = uVar22 << 0x11 ^ uVar22;
  _DAT_183393688 =
       func_0x00018dee1570((uVar9 ^ 0x84222325 | uVar22) + (uVar22 & (uVar9 ^ 0x84222325)));
  uVar21 = lVar8 * -0x28ddae27c67764b2;
  _DAT_183393430 =
       (_DAT_183393430 ^ _DAT_183393688 & 0xfffffffffffffff8) + lVar8 * -0x28ddae27c67764b2 ^
       0xa88da3881bcb1327;
  _DAT_183393510 =
       (_DAT_183393510 * 0x3f4f368645372d1d ^ _DAT_183393430) +
       (_DAT_183393688 & 0xfffffffffffffff8);
  _DAT_183393668 = _DAT_183393510 ^ _DAT_183393430;
  uVar9 = lVar10 + uVar9;
  uVar22 = uVar9 ^ 0x84222325 ^ _DAT_183393418;
  lVar10 = (uVar9 ^ 0x84222325) + _DAT_1833936f8;
  lVar8 = _DAT_183393418 + lVar8 * -0x28ddae27c67764b2;
  uVar24 = uVar22 + lVar10;
  uVar29 = (uVar21 ^ _DAT_1833936f8) + lVar8;
  uVar22 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ uVar22;
  uVar24 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar21 ^ _DAT_1833936f8;
  _DAT_183393698 = uVar21;
  _DAT_1833935d8 =
       func_0x00018dee1570((uVar24 << 0x1d | uVar24 >> 0x23) - lVar8 ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - lVar10);
  uVar19 = (uint)(uVar9 >> 0x20);
  auVar37._8_4_ = (int)uVar9;
  auVar37._0_8_ = uVar9;
  auVar37._12_4_ = uVar19;
  uVar20 = (uint)(uVar21 >> 0x20);
  auVar12._8_4_ = (int)uVar21;
  auVar12._0_8_ = uVar21;
  auVar12._12_4_ = uVar20;
  uVar30 = SUB164(auVar37 & auVar12,0);
  uVar29 = SUB168(auVar37 & auVar12,0);
  uVar44 = SUB164(auVar37 | auVar12,0);
  uVar24 = SUB168(auVar37 | auVar12,0);
  uVar11 = SUB164(auVar37 ^ auVar12,0);
  uVar22 = _DAT_1833935d8 - (_DAT_1833935d8 >> 1 & 0x5555555555555555);
  uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
  uVar22 = (((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
           _DAT_1833935d8;
  auVar45._8_4_ = 0xffffffff;
  auVar45._0_8_ = 0xffffffffffffffff;
  auVar45._12_4_ = 0xffffffff;
  uVar46 = SUB164(auVar37 ^ auVar45,0);
  uVar25 = SUB164(auVar12 ^ auVar45,0);
  uVar21 = (((ulonglong)uVar11 * (ulonglong)_DAT_1824183e0 +
             ((_DAT_1824183f0 & 0xffffffff) * (ulonglong)uVar11 +
              (SUB168(auVar37 ^ auVar12,0) >> 0x20) * (ulonglong)_DAT_1824183e0 << 0x20) +
             (_DAT_1824183c0 & 0xffffffff) * (ulonglong)uVar44 +
             ((_DAT_1824183d0 & 0xffffffff) * (ulonglong)uVar44 +
              (uVar24 >> 0x20) * (_DAT_1824183c0 & 0xffffffff) << 0x20) +
            (_DAT_1824183a0 & 0xffffffff) * (ulonglong)uVar30 +
            ((_DAT_1824183b0 & 0xffffffff) * (ulonglong)uVar30 +
             (uVar29 >> 0x20) * (_DAT_1824183a0 & 0xffffffff) << 0x20) +
            (_DAT_182418390 & 0xffffffff) * (uVar21 & 0xffffffff) +
            ((ulonglong)uVar20 * (_DAT_182418390 & 0xffffffff) +
             (_DAT_182418380 & 0xffffffff) * (uVar21 & 0xffffffff) << 0x20) +
            (uVar9 & 0xffffffff) * (_DAT_182418390 & 0xffffffff) +
            ((ulonglong)uVar19 * (_DAT_182418390 & 0xffffffff) +
             (uVar9 & 0xffffffff) * (_DAT_182418380 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar25 * (ulonglong)_DAT_1824184a0 +
            ((_DAT_1824184b0 & 0xffffffff) * (ulonglong)uVar25 +
             (SUB168(auVar12 ^ auVar45,0) >> 0x20) * (ulonglong)_DAT_1824184a0 << 0x20) +
            (uVar24 & 0xffffffff) * (ulonglong)_DAT_182418470 +
            ((uVar24 >> 0x20) * (ulonglong)_DAT_182418470 +
             (_DAT_182418460 & 0xffffffff) * (uVar24 & 0xffffffff) << 0x20) +
            (ulonglong)uVar30 * (ulonglong)_DAT_182418470 +
            ((uVar29 >> 0x20) * (ulonglong)_DAT_182418470 +
             (ulonglong)uVar30 * (_DAT_182418460 & 0xffffffff) << 0x20) +
            (uVar21 & 0xffffffff) * (ulonglong)_DAT_182418440 +
            ((_DAT_182418450 & 0xffffffff) * (uVar21 & 0xffffffff) +
             (ulonglong)uVar20 * (ulonglong)_DAT_182418440 << 0x20) +
            (uVar9 & 0xffffffff) * (ulonglong)_DAT_182418420 +
            ((_DAT_182418430 & 0xffffffff) * (uVar9 & 0xffffffff) +
             (ulonglong)uVar19 * (ulonglong)_DAT_182418420 << 0x20) +
           (ulonglong)uVar46 * (ulonglong)_DAT_182418480 +
           ((_DAT_182418490 & 0xffffffff) * (ulonglong)uVar46 +
            (SUB168(auVar37 ^ auVar45,0) >> 0x20) * (ulonglong)_DAT_182418480 << 0x20))) -
           _DAT_1824184c0;
  _DAT_183393440 = _DAT_183393660 ^ uVar22 ^ uVar21;
  _DAT_1833936e8 = (_DAT_1833936e8 ^ uVar22) + uVar21 ^ 0xac9fc6f434dcd9d8;
  _DAT_183393548 = (_DAT_183393548 * -0x48c2565f6bfb45e1 ^ _DAT_1833936e8) + uVar22;
  _DAT_1833933f8 = _DAT_183393548 ^ _DAT_1833936e8;
  uStack0000000000000070 = uVar6 ^ 0x84222325;
  uStack0000000000000078 = 0;
  auVar14._8_8_ = uVar7;
  auVar14._0_8_ = uStack0000000000000070;
  auVar12 = pshufb(auVar14 ^ _DAT_1824184d0,_DAT_1800170c0);
  uVar9 = auVar12._8_8_ + auVar12._0_8_;
  uVar22 = uVar9 + _DAT_183393360;
  if (auVar12._4_4_ < 0) {
    uVar22 = uVar21 ^ uVar9;
  }
  _DAT_1833934c8 = uVar21;
  _DAT_1833936c0 = func_0x00018dee1570(SUB161(auVar14 ^ _DAT_1824184d0,5) ^ uVar22);
  uVar22 = _DAT_1833936c0 & 0xfffffffffffff000 ^ uVar6;
  uVar20 = (uint)(uVar6 >> 0x20);
  auVar38._8_4_ = (int)uVar6;
  auVar38._0_8_ = uVar6;
  auVar38._12_4_ = uVar20;
  uVar11 = (uint)(uVar7 >> 0x20);
  auVar27._8_4_ = (int)uVar7;
  auVar27._0_8_ = uVar7;
  auVar27._12_4_ = uVar11;
  uVar25 = SUB164(auVar38 & auVar27,0);
  uVar24 = SUB168(auVar38 & auVar27,0);
  uVar19 = SUB164(auVar38 | auVar27,0);
  uVar29 = SUB168(auVar38 | auVar27,0);
  uVar30 = SUB164(auVar38 ^ auVar27,0);
  uVar9 = SUB168(auVar38 ^ auVar27,0);
  uVar43 = ((_DAT_182418540 & 0xffffffff) * (ulonglong)uVar30 +
            ((_DAT_182418550 & 0xffffffff) * (ulonglong)uVar30 +
             (uVar9 >> 0x20) * (_DAT_182418540 & 0xffffffff) << 0x20) +
            (_DAT_182418520 & 0xffffffff) * (ulonglong)uVar19 +
            ((_DAT_182418530 & 0xffffffff) * (ulonglong)uVar19 +
             (uVar29 >> 0x20) * (_DAT_182418520 & 0xffffffff) << 0x20) +
           (_DAT_182418500 & 0xffffffff) * (ulonglong)uVar25 +
           ((_DAT_182418510 & 0xffffffff) * (ulonglong)uVar25 +
            (uVar24 >> 0x20) * (_DAT_182418500 & 0xffffffff) << 0x20) +
           (_DAT_1824184f0 & 0xffffffff) * (uVar7 & 0xffffffff) +
           ((ulonglong)uVar11 * (_DAT_1824184f0 & 0xffffffff) +
            (_DAT_1824184e0 & 0xffffffff) * (uVar7 & 0xffffffff) << 0x20) +
           (uVar6 & 0xffffffff) * (_DAT_1824184f0 & 0xffffffff) +
           ((ulonglong)uVar20 * (_DAT_1824184f0 & 0xffffffff) +
            (uVar6 & 0xffffffff) * (_DAT_1824184e0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar30 * (_DAT_1824185e0 & 0xffffffff) +
            ((_DAT_1824185f0 & 0xffffffff) * (ulonglong)uVar30 +
             (uVar9 >> 0x20) * (_DAT_1824185e0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar19 * (ulonglong)_DAT_1824185c0 +
            ((_DAT_1824185d0 & 0xffffffff) * (ulonglong)uVar19 +
             (uVar29 >> 0x20) * (ulonglong)_DAT_1824185c0 << 0x20) +
           (ulonglong)uVar25 * (ulonglong)_DAT_1824185a0 +
           ((_DAT_1824185b0 & 0xffffffff) * (ulonglong)uVar25 +
            (uVar24 >> 0x20) * (ulonglong)_DAT_1824185a0 << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_182418590 +
           ((ulonglong)uVar11 * (ulonglong)_DAT_182418590 +
            (_DAT_182418580 & 0xffffffff) * (uVar7 & 0xffffffff) << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_182418590 +
           ((ulonglong)uVar20 * (ulonglong)_DAT_182418590 +
            (uVar6 & 0xffffffff) * (_DAT_182418580 & 0xffffffff) << 0x20));
  _DAT_183393348 = _DAT_1833935c8 ^ uVar22 ^ uVar43;
  _DAT_183393460 = (_DAT_183393460 ^ uVar22) + uVar43 ^ 0x5a9abf4613b2f07a;
  _DAT_183393500 = (_DAT_183393500 * 0x1a01362337b83e09 ^ _DAT_183393460) + uVar22;
  _DAT_183393660 = _DAT_183393500 ^ _DAT_183393460;
  uVar22 = ((_DAT_183393390 ^ uStack0000000000000070) +
           (uStack0000000000000070 & _DAT_183393390) * 2) * (uVar7 - _DAT_1833934e8);
  uVar22 = (uVar22 | _DAT_1833936b8) + (uVar22 & _DAT_1833936b8);
  uVar22 = uVar22 * 0x2000 ^ uVar22;
  uVar22 = uVar22 >> 7 ^ uVar22;
  uVar22 = uVar22 << 0x11 ^ uVar22;
  uVar9 = uStack0000000000000070 ^ uVar7;
  _DAT_183393510 = uVar43;
  _DAT_1833935c8 = func_0x00018dee1570((uVar22 | uVar9) + (uVar22 & uVar9));
  uVar22 = (_DAT_1833935c8 ^ (uVar6 | uVar7)) & 0x3ffffffffffffff;
  uVar29 = uVar6 ^ uVar7;
  _DAT_183393310 = (_DAT_183393310 ^ uVar22) + uVar29 ^ 0x83ef8ffd3a63ddc7;
  _DAT_1833936b0 = (_DAT_1833936b0 * 0x637da16fe39b306b ^ _DAT_183393310) + uVar22;
  _DAT_183393580 = _DAT_1833936b0 ^ _DAT_183393310;
  uVar22 = ((uStack0000000000000070 ^ _DAT_1833934c8) +
           (uStack0000000000000070 & _DAT_1833934c8) * 2) * (uVar7 - _DAT_183393438);
  uVar22 = (uVar22 | _DAT_1833933c0) + (uVar22 & _DAT_1833933c0);
  uVar22 = uVar22 * 0x2000 ^ uVar22;
  uVar22 = uVar22 >> 7 ^ uVar22;
  uVar22 = uVar22 << 0x11 ^ uVar22;
  _DAT_1833935e0 = uVar29;
  uVar22 = func_0x00018dee1570((uVar22 | uVar9) + (uVar22 & uVar9));
  uVar22 = (uVar6 | uVar7) ^ uVar22;
  uVar9 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar22 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar22 ^
           uVar6;
  uVar7 = uVar7 & uVar6;
  _DAT_183393668 = (_DAT_183393668 ^ uVar22) + uVar7 ^ 0xacd6419e21124f8;
  _DAT_183393520 = (_DAT_183393538 * 0x2553b69c426c4e23 ^ _DAT_183393668) + uVar22 ^ _DAT_183393668;
  uVar22 = uVar7 * 2;
  uVar24 = uVar29 ^ 0x84222325;
  uVar9 = ((_DAT_183393698 ^ uVar24) + (uVar24 & _DAT_183393698) * 2) * (uVar22 - _DAT_183393690);
  uVar9 = (uVar9 | _DAT_183393478) + (uVar9 & _DAT_183393478);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183393538 = uVar7;
  _DAT_1833934b8 = func_0x00018dee1570((uVar24 ^ uVar22 | uVar9) + (uVar9 & (uVar24 ^ uVar22)));
  uVar22 = uVar22 ^ uVar29 ^ _DAT_1833934b8;
  uVar20 = (uint)(uVar29 >> 0x20);
  auVar42._8_4_ = (int)uVar29;
  auVar42._0_8_ = uVar29;
  auVar42._12_4_ = uVar20;
  auVar32._8_4_ = (int)uVar7;
  auVar32._0_8_ = uVar7;
  auVar32._12_4_ = (int)(uVar7 >> 0x20);
  uVar7 = uVar7 * 2;
  auVar33._8_8_ = auVar32._8_8_ * 2;
  auVar33._0_8_ = uVar7;
  uVar19 = (uint)(uVar7 >> 0x20);
  uVar25 = SUB164(auVar42 & auVar33,0);
  uVar24 = SUB168(auVar42 & auVar33,0);
  uVar11 = SUB164(auVar42 | auVar33,0);
  uVar30 = SUB164(auVar42 ^ auVar33,0);
  uVar48 = SUB168(auVar42 ^ auVar33,0);
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar44 = SUB164(auVar42 ^ auVar1,0);
  uVar9 = SUB168(auVar42 ^ auVar1,0);
  uVar9 = (((ulonglong)_DAT_182418640 * (ulonglong)uVar44 +
            ((ulonglong)_DAT_1824186b0 * (ulonglong)uVar44 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_182418640 << 0x20) +
           (ulonglong)_DAT_182418690 * (ulonglong)uVar30 +
           ((ulonglong)_DAT_1824186a0 * (ulonglong)uVar30 +
            (uVar48 >> 0x20) * (ulonglong)_DAT_182418690 << 0x20) +
           (ulonglong)uVar11 * (ulonglong)_DAT_182418670 +
           ((ulonglong)_DAT_182418680 * (ulonglong)uVar11 +
            (SUB168(auVar42 | auVar33,0) >> 0x20) * (ulonglong)_DAT_182418670 << 0x20) +
           (ulonglong)_DAT_182418650 * (ulonglong)uVar25 +
           ((ulonglong)_DAT_182418660 * (ulonglong)uVar25 +
            (uVar24 >> 0x20) * (ulonglong)_DAT_182418650 << 0x20) +
           (ulonglong)_DAT_182418620 * (uVar7 & 0xffffffff) +
           ((ulonglong)_DAT_182418630 * (uVar7 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_182418620 << 0x20) +
           (ulonglong)_DAT_182418600 * (uVar29 & 0xffffffff) +
           ((ulonglong)_DAT_182418610 * (uVar29 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_182418600 << 0x20)) -
          ((ulonglong)uVar44 * (_DAT_182418720 & 0xffffffff) +
           ((ulonglong)_DAT_182418770 * (ulonglong)uVar44 +
            (uVar9 >> 0x20) * (_DAT_182418720 & 0xffffffff) << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_182418750 +
           ((ulonglong)_DAT_182418760 * (ulonglong)uVar30 +
            (uVar48 >> 0x20) * (ulonglong)_DAT_182418750 << 0x20) +
          (ulonglong)uVar25 * (ulonglong)_DAT_182418730 +
          ((ulonglong)_DAT_182418740 * (ulonglong)uVar25 +
           (uVar24 >> 0x20) * (ulonglong)_DAT_182418730 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_182418700 +
          ((ulonglong)_DAT_182418710 * (uVar7 & 0xffffffff) +
           (ulonglong)uVar19 * (ulonglong)_DAT_182418700 << 0x20) +
          (uVar29 & 0xffffffff) * (ulonglong)_DAT_1824186e0 +
          ((ulonglong)_DAT_1824186f0 * (uVar29 & 0xffffffff) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1824186e0 << 0x20))) + _DAT_182418780;
  auVar13._8_8_ = uVar9;
  auVar13._0_8_ = uVar43 ^ 0x84222325;
  auVar14 = pshufb(auVar13 ^ _DAT_182418790,_DAT_1800170c0);
  _DAT_1833934c0 = _DAT_183393508 ^ uVar22 ^ uVar9;
  _DAT_1833934e8 = (_DAT_1833934e8 ^ uVar22) + uVar9 ^ 0x5ccfb35073c715a4;
  _DAT_1833933d0 = (_DAT_1833933d0 * 0xad617e37e5d6bd9 ^ _DAT_1833934e8) + uVar22;
  _DAT_1833935c0 = _DAT_1833933d0 ^ _DAT_1833934e8;
  uVar22 = auVar14._8_8_ + auVar14._0_8_;
  uVar7 = uVar22 + _DAT_1833934e0;
  if (auVar14._4_4_ < 0) {
    uVar7 = _DAT_183393340 ^ uVar22;
  }
  _DAT_183393358 = uVar9;
  _DAT_1833934d0 = func_0x00018dee1570(SUB161(auVar13 ^ _DAT_182418790,5) ^ uVar7);
  uStack0000000000000080 = ~_DAT_1833934d0 & uVar43;
  uVar11 = (uint)(uVar43 >> 0x20);
  auVar23._8_4_ = (int)uVar43;
  auVar23._0_8_ = uVar43;
  auVar23._12_4_ = uVar11;
  uVar46 = (uint)(uVar9 >> 0x20);
  auVar39._8_4_ = (int)uVar9;
  auVar39._0_8_ = uVar9;
  auVar39._12_4_ = uVar46;
  uVar25 = SUB164(auVar23 & auVar39,0);
  uVar22 = SUB168(auVar23 & auVar39,0);
  uVar20 = SUB164(auVar23 | auVar39,0);
  uVar24 = SUB168(auVar23 | auVar39,0);
  uVar30 = SUB164(auVar23 ^ auVar39,0);
  uVar7 = SUB168(auVar23 ^ auVar39,0);
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar44 = SUB164(auVar39 ^ auVar2,0);
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  uVar19 = SUB164(auVar23 ^ auVar49,0);
  uVar9 = (((ulonglong)uVar44 * (ulonglong)_DAT_1824187e0 +
            ((ulonglong)_DAT_182418850 * (ulonglong)uVar44 +
             (SUB168(auVar39 ^ auVar2,0) >> 0x20) * (ulonglong)_DAT_1824187e0 << 0x20) +
           (ulonglong)_DAT_182418830 * (ulonglong)uVar30 +
           ((ulonglong)_DAT_182418840 * (ulonglong)uVar30 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_182418830 << 0x20) +
           (ulonglong)_DAT_182418810 * (ulonglong)uVar20 +
           ((ulonglong)_DAT_182418820 * (ulonglong)uVar20 +
            (uVar24 >> 0x20) * (ulonglong)_DAT_182418810 << 0x20) +
           (ulonglong)_DAT_1824187f0 * (ulonglong)uVar25 +
           ((ulonglong)_DAT_182418800 * (ulonglong)uVar25 +
            (uVar22 >> 0x20) * (ulonglong)_DAT_1824187f0 << 0x20) +
           (ulonglong)_DAT_1824187c0 * (uVar9 & 0xffffffff) +
           ((ulonglong)_DAT_1824187d0 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar46 * (ulonglong)_DAT_1824187c0 << 0x20) +
           (ulonglong)_DAT_1824187a0 * (uVar43 & 0xffffffff) +
           ((ulonglong)_DAT_1824187b0 * (uVar43 & 0xffffffff) +
            (ulonglong)uVar11 * (ulonglong)_DAT_1824187a0 << 0x20)) -
          ((ulonglong)uVar19 * (_DAT_1824188c0 & 0xffffffff) +
           ((ulonglong)_DAT_182418930 * (ulonglong)uVar19 +
            (SUB168(auVar23 ^ auVar49,0) >> 0x20) * (_DAT_1824188c0 & 0xffffffff) << 0x20) +
          (ulonglong)uVar30 * (ulonglong)_DAT_182418910 +
          ((ulonglong)_DAT_182418920 * (ulonglong)uVar30 +
           (uVar7 >> 0x20) * (ulonglong)_DAT_182418910 << 0x20) +
          (ulonglong)uVar20 * (ulonglong)_DAT_1824188f0 +
          ((ulonglong)_DAT_182418900 * (ulonglong)uVar20 +
           (uVar24 >> 0x20) * (ulonglong)_DAT_1824188f0 << 0x20) +
          (ulonglong)uVar25 * (ulonglong)_DAT_1824188d0 +
          ((ulonglong)_DAT_1824188e0 * (ulonglong)uVar25 +
           (uVar22 >> 0x20) * (ulonglong)_DAT_1824188d0 << 0x20) +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_1824188a0 +
          ((ulonglong)_DAT_1824188b0 * (uVar9 & 0xffffffff) +
           (ulonglong)uVar46 * (ulonglong)_DAT_1824188a0 << 0x20) +
          (uVar43 & 0xffffffff) * (ulonglong)_DAT_182418880 +
          ((ulonglong)_DAT_182418890 * (uVar43 & 0xffffffff) +
           (ulonglong)uVar11 * (ulonglong)_DAT_182418880 << 0x20))) + _DAT_182418940;
  auVar15._8_8_ = uVar9;
  auVar15._0_8_ = uVar21 ^ 0x84222325;
  auVar14 = pshufb(auVar15 ^ _DAT_182418950,_DAT_1800170c0);
  _DAT_183393320 = uVar9 ^ uStack0000000000000080;
  _DAT_183393500 = (_DAT_183393500 ^ uStack0000000000000080) + uVar9 ^ 0x3acb8bb94c7f4f0c;
  _DAT_183393670 = (_DAT_183393670 * 0x1316a194dc835fa1 ^ _DAT_183393500) + uStack0000000000000080;
  _DAT_1833933f0 = _DAT_183393670 ^ _DAT_183393500;
  uVar22 = auVar14._8_8_ + auVar14._0_8_;
  uVar7 = uVar22 + _DAT_183393390;
  if (auVar14._4_4_ < 0) {
    uVar7 = _DAT_183393558 ^ uVar22;
  }
  _DAT_1833936c8 = uVar9;
  _DAT_1833933f0 = func_0x00018dee1570(SUB161(auVar15 ^ _DAT_182418950,5) ^ uVar7);
  auVar34._8_4_ = (int)uVar21;
  auVar34._0_8_ = uVar21;
  auVar34._12_4_ = (int)(uVar21 >> 0x20);
  uVar25 = (uint)(uVar9 >> 0x20);
  auVar28._8_4_ = (int)uVar9;
  auVar28._0_8_ = uVar9;
  auVar28._12_4_ = uVar25;
  uVar30 = SUB164(auVar34 & auVar28,0);
  uVar22 = SUB168(auVar34 & auVar28,0);
  uVar19 = SUB164(auVar34 | auVar28,0);
  uVar24 = SUB168(auVar34 | auVar28,0);
  uVar11 = SUB164(auVar34 ^ auVar28,0);
  uVar7 = SUB168(auVar34 ^ auVar28,0);
  uVar20 = SUB164(auVar28 ^ auVar49,0);
  uVar29 = SUB168(auVar28 ^ auVar49,0);
  auVar3._8_8_ = _UNK_18001a718;
  auVar3._0_8_ = _DAT_18001a710;
  auVar14 = pblendw(_uStack0000000000000070,auVar3,0xf0);
  auVar12 = pshufb(auVar14 ^ _DAT_182418a60,_DAT_1800170c0);
  uVar24 = (((ulonglong)_DAT_182418980 * (ulonglong)uVar20 +
             ((uVar29 >> 0x20) * (ulonglong)_DAT_182418980 +
              (ulonglong)_DAT_182418960 * (ulonglong)uVar20 << 0x20) +
             (ulonglong)_DAT_1824189a0 * (ulonglong)uVar11 +
             ((uVar7 >> 0x20) * (ulonglong)_DAT_1824189a0 +
              (ulonglong)_DAT_182418990 * (ulonglong)uVar11 << 0x20) +
             (ulonglong)uVar30 * (ulonglong)_DAT_1824189a0 +
             ((uVar22 >> 0x20) * (ulonglong)_DAT_1824189a0 +
              (ulonglong)uVar30 * (ulonglong)_DAT_182418990 << 0x20) +
             (ulonglong)_DAT_182418970 * (uVar9 & 0xffffffff) +
             ((ulonglong)uVar25 * (ulonglong)_DAT_182418970 +
              (uVar9 & 0xffffffff) * (ulonglong)_DAT_182418960 << 0x20) + uVar21 +
            (ulonglong)_DAT_1824189b0 * (ulonglong)uVar19 +
            ((ulonglong)_DAT_1824189c0 * (ulonglong)uVar19 +
             (uVar24 >> 0x20) * (ulonglong)_DAT_1824189b0 << 0x20)) -
           ((ulonglong)uVar20 * (ulonglong)_DAT_182418a00 +
            ((uVar29 >> 0x20) * (ulonglong)_DAT_182418a00 +
             (ulonglong)_DAT_1824189f0 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)uVar11 * (ulonglong)_DAT_182418a20 +
            ((uVar7 >> 0x20) * (ulonglong)_DAT_182418a20 +
             (ulonglong)_DAT_182418a10 * (ulonglong)uVar11 << 0x20) +
            (ulonglong)uVar30 * (ulonglong)_DAT_182418a20 +
            ((uVar22 >> 0x20) * (ulonglong)_DAT_182418a20 +
             (ulonglong)uVar30 * (ulonglong)_DAT_182418a10 << 0x20) +
            (uVar9 & 0xffffffff) * (ulonglong)_DAT_182418a00 +
            ((ulonglong)uVar25 * (ulonglong)_DAT_182418a00 +
             (uVar9 & 0xffffffff) * (ulonglong)_DAT_1824189f0 << 0x20) +
           (ulonglong)uVar19 * (_DAT_182418a30 & 0xffffffff) +
           ((ulonglong)_DAT_182418a40 * (ulonglong)uVar19 +
            (uVar24 >> 0x20) * (_DAT_182418a30 & 0xffffffff) << 0x20))) + _DAT_182418a50;
  uVar7 = (uVar21 * uVar9 ^ _DAT_1833933f0 ^ uVar21) & (ulonglong)DAT_1809d80e0 & 0x7fffffffffffffff
  ;
  _DAT_1833933e0 = _DAT_183393378 ^ uVar7 ^ uVar24;
  _DAT_183393320 = (_DAT_183393320 ^ uVar7) + uVar24 ^ 0x2fa3eaa3739c8e35;
  _DAT_1833934b0 = (_DAT_1833934b0 * 0x950c04fed51d72f ^ _DAT_183393320) + uVar7;
  _DAT_1833934a0 = _DAT_1833934b0 ^ _DAT_183393320;
  uVar22 = auVar12._8_8_ + auVar12._0_8_;
  uVar7 = uVar22 + _DAT_183393388;
  if (auVar12._4_4_ < 0) {
    uVar7 = _DAT_183393578 ^ uVar22;
  }
  _DAT_183393350 = uVar24;
  _DAT_183393638 = func_0x00018dee1570(SUB161(auVar14 ^ _DAT_182418a60,5) ^ uVar7);
  _DAT_1833933e0 = ~uVar6;
  _DAT_183393648 =
       (_DAT_183393648 ^ _DAT_183393638 & 0xffffffffffc00000) + _DAT_1833933e0 ^ 0x177624e042a3c580;
  _DAT_183393398 =
       (_DAT_183393398 * 0x73e5909d1428ed9 ^ _DAT_183393648) + (_DAT_183393638 & 0xffffffffffc00000)
  ;
  _DAT_183393550 = _DAT_183393398 ^ _DAT_183393648;
  uVar7 = uVar24 ^ 0x84222325 ^ _DAT_183393370;
  lVar8 = (uVar24 ^ 0x84222325) + _DAT_1833935b8;
  uVar22 = uVar7 + lVar8;
  uVar7 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar7;
  uVar22 = ((_DAT_1833935b8 + _DAT_183393370) * 0x2000 | _DAT_1833935b8 + _DAT_183393370 >> 0x33) ^
           _DAT_1833935b8;
  _DAT_1833936f0 =
       func_0x00018dee1570((uVar22 << 0x1d | uVar22 >> 0x23) - _DAT_183393370 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
  uVar7 = _DAT_1824179d0;
  auVar14 = _DAT_1800170c0;
  uVar19 = (uint)(uVar24 >> 0x20);
  auVar16._8_4_ = (int)uVar24;
  auVar16._0_8_ = uVar24;
  auVar16._12_4_ = uVar19;
  uVar9 = _DAT_1833936f0 & 0x3ffffffff8000;
  uVar22 = uVar9 >> 1 | uVar9;
  uVar22 = uVar22 >> 2 | uVar22;
  uVar22 = uVar22 >> 4 | uVar22;
  uVar22 = uVar22 >> 8 | uVar22;
  uVar22 = uVar22 >> 0x10 | uVar22;
  uVar22 = uVar22 >> 0x20 | uVar22;
  uVar22 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
  auVar4._8_8_ = _UNK_18001a718;
  auVar4._0_8_ = _DAT_18001a710;
  uVar11 = SUB164(auVar16 ^ auVar4,0);
  uVar21 = (((ulonglong)_DAT_182418ab0 * (uVar24 & 0xffffffff) +
             ((_DAT_182418ac0 & 0xffffffff) * (uVar24 & 0xffffffff) +
              (ulonglong)uVar19 * (ulonglong)_DAT_182418ab0 << 0x20) +
            (_DAT_182418a90 & 0xffffffff) * (uVar24 & 0xffffffff) +
            ((_DAT_182418aa0 & 0xffffffff) * (uVar24 & 0xffffffff) +
             (ulonglong)uVar19 * (_DAT_182418a90 & 0xffffffff) << 0x20) +
            (_DAT_182418a70 & 0xffffffff) * (uVar24 & 0xffffffff) +
            ((_DAT_182418a80 & 0xffffffff) * (uVar24 & 0xffffffff) +
             (ulonglong)uVar19 * (_DAT_182418a70 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar11 * (ulonglong)_DAT_182418b10 +
            ((_DAT_182418b20 & 0xffffffff) * (ulonglong)uVar11 +
             (SUB168(auVar16 ^ auVar4,0) >> 0x20) * (ulonglong)_DAT_182418b10 << 0x20) +
           (uVar24 & 0xffffffff) * (ulonglong)_DAT_182418af0 +
           ((_DAT_182418b00 & 0xffffffff) * (uVar24 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_182418af0 << 0x20) +
           (_DAT_182418ad0 & 0xffffffff) * (uVar24 & 0xffffffff) +
           ((_DAT_182418ae0 & 0xffffffff) * (uVar24 & 0xffffffff) +
            (ulonglong)uVar19 * (_DAT_182418ad0 & 0xffffffff) << 0x20))) + _DAT_182418b30;
  uVar9 = 0x40 - (((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar9;
  _DAT_183393658 = _DAT_1833936a8 ^ uVar9 ^ uVar21;
  _DAT_1833934a0 = (_DAT_1833934a0 ^ uVar9) + uVar21 ^ 0x33b6c133883f94f3;
  _DAT_1833934c0 = (_DAT_1833934c0 * 0x154064f35f17d3f1 ^ _DAT_1833934a0) + uVar9;
  _DAT_183393490 = _DAT_1833934c0 ^ _DAT_1833934a0;
  auVar17._8_8_ = _DAT_1824179d0;
  auVar17._0_8_ = uStack0000000000000098;
  auVar12 = pshufb(auVar17 ^ _DAT_182418b40,_DAT_1800170c0);
  uVar9 = auVar12._8_8_ + auVar12._0_8_;
  uVar22 = uVar9 + _DAT_1833934d0;
  if (auVar12._4_4_ < 0) {
    uVar22 = _DAT_1833934b0 ^ uVar9;
  }
  _DAT_183393470 = uVar21;
  _DAT_1833935f0 = func_0x00018dee1570(SUB161(auVar17 ^ _DAT_182418b40,5) ^ uVar22);
  uVar7 = (_DAT_1833935f0 ^ uVar7) & 0x7fffffffffffffff;
  _DAT_1833935c0 = _DAT_1833935c0 ^ uVar7 ^ 0xc92be537fee86024;
  _DAT_1833933e8 = (_DAT_1833933e8 * 0x6d91575ef62e411b ^ _DAT_1833935c0) + uVar7;
  _DAT_183393680 = _DAT_1833933e8 ^ _DAT_1833935c0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar21 ^ 0x84222325;
  _DAT_183393468 = 0;
  auVar14 = pshufb(auVar18 ^ _DAT_182418b50,auVar14);
  uVar22 = auVar14._8_8_ + auVar14._0_8_;
  uVar7 = uVar22 + _DAT_183393328;
  if (auVar14._4_4_ < 0) {
    uVar7 = _DAT_1833934b0 ^ uVar22;
  }
  _DAT_183393538 = func_0x00018dee1570(SUB161(auVar18 ^ _DAT_182418b50,5) ^ uVar7);
  uVar7 = ~(_DAT_183393538 & 0x7fffffffffffffff) & uVar21;
  uVar19 = (uint)(uVar21 >> 0x20);
  auVar35._8_4_ = (int)uVar21;
  auVar35._0_8_ = uVar21;
  auVar35._12_4_ = uVar19;
  uVar11 = SUB164(auVar35 ^ ZEXT816(0),0);
  uVar9 = SUB168(auVar35 ^ ZEXT816(0),0);
  uVar22 = uVar21 ^ _DAT_18001a710;
  uVar9 = (((ulonglong)_DAT_182418ba0 * (ulonglong)uVar11 +
            ((ulonglong)_DAT_182418bb0 * (ulonglong)uVar11 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_182418ba0 << 0x20) +
           (uVar21 & 0xffffffff) * (ulonglong)_DAT_182418b70 +
           ((ulonglong)uVar19 * (ulonglong)_DAT_182418b70 +
            (uVar21 & 0xffffffff) * (ulonglong)_DAT_182418b60 << 0x20)) -
          ((uVar22 & 0xffffffff) * (_DAT_182418c20 & 0xffffffff) +
           ((ulonglong)_DAT_182418c70 * (uVar22 & 0xffffffff) +
            (uVar22 >> 0x20) * (_DAT_182418c20 & 0xffffffff) << 0x20) +
           (ulonglong)uVar11 * (ulonglong)_DAT_182418c50 +
           ((ulonglong)_DAT_182418c60 * (ulonglong)uVar11 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_182418c50 << 0x20) +
          (uVar21 & 0xffffffff) * (ulonglong)_DAT_182418be0 +
          ((ulonglong)_DAT_182418bf0 * (uVar21 & 0xffffffff) +
           (ulonglong)uVar19 * (ulonglong)_DAT_182418be0 << 0x20))) + 0xafdb783cff903065;
  _DAT_183393398 = _DAT_183393460 ^ uVar7 ^ uVar9;
  _DAT_183393448 = (_DAT_183393448 ^ uVar7) + uVar9 ^ 0x986904532db6e60;
  _DAT_1833934e0 = (_DAT_1833934e0 * -0x8ac18f201c288d ^ _DAT_183393448) + uVar7;
  _DAT_1833934b0 = _DAT_1833934e0 ^ _DAT_183393448;
  uVar22 = in_stack_000000a0 ^ 0x84222325;
  uVar7 = ((_DAT_1833936a0 ^ uVar22) + (uVar22 & _DAT_1833936a0) * 2) * (uVar9 - _DAT_183393458);
  uVar7 = (uVar7 | _DAT_1833936e8) + (uVar7 & _DAT_1833936e8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393650 = uVar9;
  _DAT_183393490 = func_0x00018dee1570((uVar22 ^ uVar9 | uVar7) + (uVar7 & (uVar22 ^ uVar9)));
  uVar7 = (_DAT_183393490 >> 5) * 0x6b2a9759733b01a0 & 0xffffffffffffff00;
  _DAT_183393500 = in_stack_000000a0 + uVar9 + (uVar9 & in_stack_000000a0) * -2;
  _DAT_1833933e0 = (_DAT_1833933e0 ^ uVar7) + _DAT_183393500 ^ 0x8896642d68a648d5;
  _DAT_183393348 = (_DAT_183393348 * -0x19b71e7ce7518485 ^ _DAT_1833933e0) + uVar7;
  _DAT_183393468 = _DAT_183393348 ^ _DAT_1833933e0;
  FUN_190dd72e0(unaff_RSI,*_DAT_18301ee50 + 0x8eb9,0x192);
  cVar5 = (**(code **)(*unaff_RSI + 0x720))(unaff_RSI);
  switch(cVar5 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dee1156 (image 18dee1156) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dee1156(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_182418018)();
  return;
}



// ===== continuation @ rva dee0fc6 (image 18dee0fc6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dee0fc6(void)

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



// ===== continuation @ rva dee0f31 (image 18dee0f31) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dee0f31(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182417b28)();
  return;
}



// ===== continuation @ rva dee0da9 (image 18dee0da9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dee0da9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182417c28)();
  return;
}



// ===== continuation @ rva dee1788 (image 18dee1788) =====

void FUN_18dee1788(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar1 = (**(code **)(*unaff_R12 + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00018dee17b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182418f30 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva dee1733 (image 18dee1733) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dee176a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dee1733(void)

{
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R12 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva deef1ad (image 18deef1ad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18deef1ad(void)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *unaff_RBP;
  int unaff_ESI;
  uint unaff_EDI;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong unaff_XMM7_Qa;
  undefined8 unaff_XMM8_Qb;
  uint uVar14;
  uint uVar15;
  undefined1 unaff_XMM12 [16];
  
  unaff_RBP[1] = unaff_EDI;
  *unaff_RBP = unaff_ESI << 6;
  *(bool *)(unaff_RBP + 0x16) = *(longlong *)(unaff_RBP + 2) == 0;
  _DAT_1833937f0 = func_0x00018df0af70(_DAT_183393880 + 0xffabff53ff00ddff ^ 0xec);
  uVar7 = _DAT_1833937f0 - (_DAT_1833937f0 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1833937f0;
  _DAT_1833938e0 = (_DAT_1833938e0 ^ uVar7) + 0xb4c87fde ^ 0x3aa0cff311d07e9f;
  _DAT_1833938a8 = (_DAT_1833938a8 * 0x2ee70a8f11b25a31 ^ _DAT_1833938e0) + uVar7;
  _DAT_183393808 = _DAT_1833938a8 ^ _DAT_1833938e0;
  _DAT_183393778 = 0xb4c87fde;
  _DAT_183393710 = func_0x00018df0af70(_DAT_1833938b8 ^ 0x55002dd9ffb1da);
  _DAT_1833938f8 =
       (_DAT_1833938f8 ^ _DAT_183393710 & 0xffffffffffffffe0) + 0xf270940b ^ 0xa181633453dd7103;
  _DAT_183393780 =
       (_DAT_183393780 * 0x65fab5031e27e0d7 ^ _DAT_1833938f8) +
       (_DAT_183393710 & 0xffffffffffffffe0);
  _DAT_183393870 = _DAT_183393780 ^ _DAT_1833938f8;
  _DAT_1833937d8 = 0xf270940b;
  _DAT_183393820 = func_0x00018df0af70(_DAT_183393740 ^ 0xffec002b7500073f);
  uVar7 = _DAT_183393820 - (_DAT_183393820 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar4 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = ((uint)bVar4 + (uint)bVar4 ^ _DAT_183393820) & 0x1fffffffff;
  _DAT_183393798 = (_DAT_183393798 ^ uVar7) - 0x502a1790 ^ 0xd0b5715c10f45d3f;
  _DAT_1833937a0 = (_DAT_1833937a0 * -0x3aff5343511c36f7 ^ _DAT_183393798) + uVar7;
  _DAT_183393730 = _DAT_1833937a0 ^ _DAT_183393798;
  _DAT_183393840 = 0xafd5e870;
  uVar7 = (_DAT_183393770 ^ _DAT_182419980) + _DAT_183393770 + 0xd4080475;
  uVar12 = (_DAT_183393770 ^ _UNK_182419988) + _DAT_183393770 + 0xafd5e870;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393770 ^ _DAT_182419980;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393770 ^ _UNK_182419988;
  _DAT_183393718 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393770 + 0xafd5e870) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393770 + 0xd4080475));
  _DAT_1833937c8 = _DAT_1833937d8 ^ _DAT_183393718 ^ 0x100000fc0;
  _DAT_1833938c0 = (_DAT_1833938c0 ^ _DAT_183393718) + 0x100000fc0 ^ 0xf0341a4163a24b00;
  _DAT_183393788 = (_DAT_183393788 * -0x40008fda1f1063eb ^ _DAT_1833938c0) + _DAT_183393718;
  _DAT_183393750 = _DAT_183393788 ^ _DAT_1833938c0;
  _DAT_183393890 = 0xfc0;
  uVar7 = (~_DAT_1833938d8 + 0x3982bc4e) *
          ((_DAT_183393720 ^ 0x84222325) + (ulonglong)((uint)_DAT_183393720 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_183393898) + (uVar7 & _DAT_183393898);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393718 = func_0x00018df0af70((uVar7 | 0xbda09f68) + (ulonglong)((uint)uVar7 & 0xbda09f68))
  ;
  uVar7 = _DAT_183393718 - (_DAT_183393718 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183393718) & 0x7fffffffffffffff ^ 0x3982bc4d;
  _DAT_183393730 = (_DAT_183393730 ^ uVar7) - 0x3982bc4d ^ 0xe0e7d0dc09ea186d;
  _DAT_1833937b8 = (_DAT_1833937b8 * 0x5a45d065a6d27803 ^ _DAT_183393730) + uVar7;
  _DAT_183393730 = _DAT_1833937b8 ^ _DAT_183393730;
  _DAT_1833938e0 = 0xc67d43b3;
  uVar7 = func_0x00018df0af70(_DAT_183393728 + 0xff8fff6d67ff5fff ^ 0x57);
  uVar7 = (uVar7 ^ 0x389cb15bcc0) & 0x7fffffffffffffff;
  _DAT_183393860 = _DAT_183393810 ^ uVar7 ^ 0x3982cc0d;
  _DAT_183393840 = (_DAT_183393840 ^ uVar7) + 0x3982cc0d ^ 0x33a3fa5e8f29b913;
  _DAT_183393778 = (_DAT_183393778 * 0x6733868916c43d59 ^ _DAT_183393840) + uVar7;
  _DAT_183393730 = _DAT_183393778 ^ _DAT_183393840;
  _DAT_183393868 = 0x3982cc0d;
  _DAT_183393758 = func_0x00018df0af70(_DAT_1833937b0 + 0xffde00203affabff ^ 0x8d);
  uVar7 = _DAT_183393758 ^ 0xa4760de8;
  uVar12 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar7;
  _DAT_183393760 = (_DAT_183393788 ^ uVar7) - 0xa4760de8;
  _DAT_183393788 = _DAT_183393760 ^ 0x6aab5e7e56566fbd;
  _DAT_183393700 = (_DAT_183393700 * 0x3d4558b7c6e2fbc9 ^ _DAT_183393788) + uVar7;
  _DAT_183393750 = _DAT_183393700 ^ _DAT_183393788;
  _DAT_183393760 = _DAT_183393760 ^ 0x9554a1810ddf9da5;
  _DAT_183393740 = 0x5b89f218;
  _DAT_183393770 = func_0x00018df0af70(_DAT_183393700 + 0xc800c16fff95ff ^ 0x91);
  uVar7 = ((ulonglong)(~(uint)_DAT_183393770 & 0xb4c87fde) ^ 0xb4c87fde) * 0x20;
  _DAT_1833938f8 = _DAT_183393770 ^ uVar7 ^ 0x1a73913e9;
  _DAT_1833937e0 = (_DAT_1833937e0 ^ uVar7) + 0x1a73913e9 ^ 0x431a52e53f3830b9;
  _DAT_183393788 = (_DAT_183393788 * -0x40033a1d903311a9 ^ _DAT_1833937e0) + uVar7;
  _DAT_183393730 = _DAT_183393788 ^ _DAT_1833937e0;
  _DAT_1833937e8 = 0xa73913e9;
  uVar7 = (_DAT_183393700 ^ _DAT_182419990) + _DAT_183393748 + 0x30ea5cfb;
  uVar12 = (_DAT_183393748 ^ _UNK_182419998) + _DAT_183393700 + 0xf270940b;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393700 ^ _DAT_182419990;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393748 ^ _UNK_182419998;
  uVar5 = func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393700 + 0xf270940b) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393748 + 0x30ea5cfb));
  _DAT_183393768 = (_DAT_183393768 ^ ~uVar5 & 0xb4c87fde) + 0x46b8ebd5 ^ 0x731526a8208a9c09;
  _DAT_183393848 =
       (_DAT_183393848 * -0x571f02736049a659 ^ _DAT_183393768) + (ulonglong)(~uVar5 & 0xb4c87fde);
  _DAT_183393780 = _DAT_183393848 ^ _DAT_183393768;
  _DAT_183393858 = 0x46b8ebd5;
  uVar7 = (_DAT_183393738 ^ _DAT_1824199a0) + _DAT_1833937d8 + 0xc29ac8f0;
  uVar12 = (_DAT_1833937d8 ^ _UNK_1824199a8) + _DAT_183393738 + 0x60802814;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393738 ^ _DAT_1824199a0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833937d8 ^ _UNK_1824199a8;
  _DAT_1833938e0 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393738 + 0x60802814) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833937d8 + 0xc29ac8f0));
  uVar7 = (_DAT_1833938e0 ^ 0x46b8ebd5) & 0x7ffffffff;
  _DAT_183393750 = _DAT_183393898 ^ uVar7 ^ 0xa73913e9;
  _DAT_1833937c8 = (_DAT_1833937c8 ^ uVar7) + 0xa73913e9 ^ 0xd73c51dbc84f2005;
  _DAT_183393850 = (_DAT_183393850 * 0x7482d4260229c16d ^ _DAT_1833937c8) + uVar7;
  _DAT_1833937e8 = _DAT_183393850 ^ _DAT_1833937c8;
  _DAT_1833938d8 = 0xa73913e9;
  uVar7 = (_DAT_183393740 ^ _DAT_1824199b0) + _DAT_183393848 + 0x231b30cc;
  uVar12 = (_DAT_183393848 ^ _UNK_1824199b8) + _DAT_183393740 + 0xa73913e9;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393740 ^ _DAT_1824199b0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393848 ^ _UNK_1824199b8;
  _DAT_183393830 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393740 + 0xa73913e9) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393848 + 0x231b30cc));
  _DAT_183393860 = _DAT_183393830 ^ 0xa73913e9;
  _DAT_183393738 = _DAT_183393738 ^ _DAT_183393860 ^ 0x7b7a00a9fc3d4226;
  _DAT_183393718 = (_DAT_183393718 * -0x2e753c440af8a3f3 ^ _DAT_183393738) + _DAT_183393860;
  _DAT_183393898 = _DAT_183393718 ^ _DAT_183393738;
  _DAT_1833937b0 = 0;
  uVar7 = (~_DAT_183393708 + 0x100000000) *
          ((_DAT_183393790 ^ 0x30ea5cfb) + (ulonglong)((uint)_DAT_183393790 & 0x30ea5cfb) * 2);
  uVar7 = (uVar7 | _DAT_1833938d8) + (uVar7 & _DAT_1833938d8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833938c8 = func_0x00018df0af70((uVar7 | 0xcf15a304) + (ulonglong)((uint)uVar7 & 0xcf15a304))
  ;
  uVar7 = (ulonglong)(~(uint)_DAT_1833938c8 & 0xb4c87fde);
  _DAT_1833937c8 = (_DAT_1833937c8 ^ uVar7) + 0x4b378021 ^ 0x785ec0835ce382a7;
  _DAT_183393770 = (_DAT_183393770 * -0x7dcfc70a17d67357 ^ _DAT_1833937c8) + uVar7;
  _DAT_1833937e0 = _DAT_183393770 ^ _DAT_1833937c8;
  _DAT_183393740 = 0x4b378021;
  uVar7 = (_DAT_183393770 ^ _DAT_1824199c0) + _DAT_183393778 + 0x30ea5cfb;
  uVar12 = (_DAT_183393778 ^ _UNK_1824199c8) + _DAT_183393770 + 0x4b378021;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393770 ^ _DAT_1824199c0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393778 ^ _UNK_1824199c8;
  _DAT_1833937d0 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393770 + 0x4b378021) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393778 + 0x30ea5cfb));
  _DAT_183393758 = _DAT_183393758 ^ _DAT_183393810 & 0xffffffffffff ^ 0x455501207224ac36;
  _DAT_183393718 =
       (_DAT_183393718 * 0x759d36f4ff5e938b ^ _DAT_183393758) + (_DAT_183393810 & 0xffffffffffff);
  _DAT_183393800 = _DAT_183393718 ^ _DAT_183393758;
  _DAT_1833937c0 = 0;
  uVar7 = (~_DAT_1833937e8 + 0x940818cd) *
          ((_DAT_183393818 ^ 0x102a3be9) + (ulonglong)((uint)_DAT_183393818 & 0x102a3be9) * 2);
  uVar7 = (uVar7 | _DAT_183393808) + (uVar7 & _DAT_183393808);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833938e8 = func_0x00018df0af70((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  uVar7 = (_DAT_1833938e8 ^ 0x940818cc) & 0xfffffffff;
  _DAT_183393808 = _DAT_183393808 ^ uVar7 ^ 0x2abbd66309913e6c;
  _DAT_1833937c0 = (_DAT_1833937c0 * -0x3a478f3ecdf1b5f ^ _DAT_183393808) + uVar7;
  _DAT_183393758 = _DAT_1833937c0 ^ _DAT_183393808;
  _DAT_183393890 = _DAT_183393820;
  _DAT_1833937a0 = 0;
  _DAT_1833937f0 = func_0x00018df0af70(_DAT_183393818 + 0x13ff83a2ffddff ^ 0x27);
  _DAT_183393720 = _DAT_1833937d0 ^ _DAT_1833937f8 ^ 0xfc0;
  _DAT_183393728 = (_DAT_183393728 ^ _DAT_1833937f8) + 0xfc0 ^ 0x3c35dc1423661e3b;
  _DAT_183393808 = (_DAT_183393808 * -0x2ebab72e2cd9ef43 ^ _DAT_183393728) + _DAT_1833937f8;
  _DAT_183393870 = _DAT_183393808 ^ _DAT_183393728;
  _DAT_183393820 = 0xfc0;
  uVar5 = *unaff_RBP;
  uVar7 = (ulonglong)uVar5 ^ 0x84222325;
  uVar7 = (~_DAT_183393760 + 0xfc1) *
          ((uVar7 ^ _DAT_183393720) + (ulonglong)((uint)_DAT_183393720 & (uint)uVar7) * 2);
  uVar7 = (uVar7 | _DAT_183393850) + (uVar7 & _DAT_183393850);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uVar12 = (ulonglong)uVar5 ^ 0x84222ce5;
  lVar6 = func_0x00018df0af70((uVar12 | uVar7) + (ulonglong)((uint)uVar12 & (uint)uVar7));
  _DAT_183393708 = (ulonglong)(uVar5 & 0xfc0);
  _DAT_1833937c0 = _DAT_183393708 ^ 0x496b4bbf40b3d9e7;
  _DAT_183393768 = (_DAT_183393768 * -0x2795fcf0f43faff1 ^ _DAT_1833937c0) + lVar6;
  _DAT_183393810 = _DAT_183393768 ^ _DAT_1833937c0;
  uVar7 = (_DAT_1833938f8 ^ _DAT_1824199d0) + _DAT_183393898 + 0x7791682b;
  uVar12 = (_DAT_183393898 ^ _UNK_1824199d8) + _DAT_1833938f8 + 0xd58b8de0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833938f8 ^ _DAT_1824199d0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393898 ^ _UNK_1824199d8;
  uVar1 = unaff_RBP[0x24];
  _DAT_183393718 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833938f8 + 0xd58b8de0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393898 + 0x7791682b));
  _DAT_1833938b8 =
       (_DAT_1833938b8 ^ _DAT_183393718 & 0x7fffffffffffffff) + 0xf7bbcfee ^ 0x6b29f860c2eb1c0d;
  _DAT_183393720 =
       (_DAT_183393720 * -0x14cc212cc1781fe3 ^ _DAT_1833938b8) +
       (_DAT_183393718 & 0x7fffffffffffffff);
  _DAT_183393880 = _DAT_183393720 ^ _DAT_1833938b8;
  _DAT_183393890 = 0xf7bbcfee;
  uVar7 = (_DAT_1833937a0 ^ _DAT_1824199e0) + _DAT_1833937d8 + 0x84222325;
  uVar12 = (_DAT_1833937d8 ^ _UNK_1824199e8) + _DAT_1833937a0 + 0x40eee830;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833937a0 ^ _DAT_1824199e0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833937d8 ^ _UNK_1824199e8;
  _DAT_1833937b0 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833937a0 + 0x40eee830) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833937d8 + 0x84222325));
  _DAT_183393860 = (_DAT_183393860 ^ _DAT_1833937b0) - 0x40eee830 ^ 0x2a6fdb387004441e;
  _DAT_1833937a8 = (_DAT_1833937a8 * -0x5981590dc61115f3 ^ _DAT_183393860) + _DAT_1833937b0;
  _DAT_183393770 = _DAT_1833937a8 ^ _DAT_183393860;
  _DAT_183393880 = 0xbf1117d0;
  uVar7 = (~_DAT_1833937b0 + 0x40eee831) *
          ((_DAT_183393780 ^ 0x8422d325) + (ulonglong)((uint)_DAT_183393780 & 0x8422d325) * 2);
  uVar7 = (uVar7 | _DAT_1833938a8) + (uVar7 & _DAT_1833938a8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393880 = func_0x00018df0af70((uVar7 | 0xc4cc3b15) + (ulonglong)((uint)uVar7 & 0xc4cc3b15))
  ;
  uVar7 = (_DAT_183393880 ^ 0x40eef830) >> 0x14;
  _DAT_183393818 =
       (uVar7 & 0xffffffff) * (_DAT_1824199f0 & 0xffffffff) +
       ((uVar7 & 0xffffffff) * (ulonglong)_DAT_182419a00 +
        (((_DAT_183393880 ^ 0x40eef830) << 0x2c | uVar7) >> 0x20) * (_DAT_1824199f0 & 0xffffffff) <<
       0x20) & 0x7fffffffffffffff;
  _DAT_1833937e8 = (_DAT_1833937e8 ^ _DAT_183393818) + 0x40efd830 ^ 0x29f859e60fcf2ee3;
  _DAT_183393818 =
       ((_DAT_1833938a8 ^ _DAT_183393818 ^ 0x40efd830) * -0x63576a813266270b ^ _DAT_1833937e8) +
       _DAT_183393818;
  _DAT_183393870 = _DAT_183393818 ^ _DAT_1833937e8;
  _DAT_183393720 = 0x40efd830;
  _DAT_183393790 = func_0x00018df0af70(_DAT_1833937f0 + 0x9b0027daffddff ^ 0x5f);
  _DAT_183393850 = (_DAT_183393850 ^ _DAT_183393790 ^ 0xdc0c8c00) - 0xdc0c8c00 ^ 0xd030c567b0b226fe;
  _DAT_183393770 =
       (_DAT_183393770 * -0xd711d91ce6d3fff ^ _DAT_183393850) + (_DAT_183393790 ^ 0xdc0c8c00);
  _DAT_183393858 = _DAT_183393770 ^ _DAT_183393850;
  _DAT_183393878 = 0x23f37400;
  uVar7 = (_DAT_183393738 ^ _DAT_182419a10) + _DAT_1833937d8 + 0x8422d325;
  uVar12 = (_DAT_1833937d8 ^ _UNK_182419a18) + _DAT_183393738 + 0xdc0c8c00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393738 ^ _DAT_182419a10;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833937d8 ^ _UNK_182419a18;
  _DAT_1833938b8 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393738 + 0xdc0c8c00) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833937d8 + 0x8422d325));
  uVar7 = _DAT_1833938b8 << 0x28 | _DAT_1833938b8 >> 0x18;
  _DAT_183393820 = _DAT_1833937d8 ^ uVar7 ^ 0xdc0d7c00;
  _DAT_1833937f0 = (_DAT_1833937f0 ^ uVar7) + 0xdc0d7c00 ^ 0x8e2cb9b2b5f76d6e;
  _DAT_183393880 = (_DAT_183393880 * 0x7394fa0c8aaf3d1f ^ _DAT_1833937f0) + uVar7;
  _DAT_1833938d8 = _DAT_183393880 ^ _DAT_1833937f0;
  _DAT_183393848 = 0xdc0d7c00;
  _DAT_1833937a0 = func_0x00018df0af70(_DAT_183393720 + 0x2500171d003bff ^ 0x38);
  _DAT_183393810 = _DAT_1833938f8 ^ _DAT_1833937a0 ^ 0x10000f000;
  _DAT_183393748 = (_DAT_183393748 ^ _DAT_1833937a0) + 0x10000f000 ^ 0xe078cfb08aad44fa;
  _DAT_183393790 = (_DAT_183393790 * 0x7de212aec5ff293f ^ _DAT_183393748) + _DAT_1833937a0;
  _DAT_183393850 = _DAT_183393790 ^ _DAT_183393748;
  _DAT_183393820 = 0xf000;
  uVar7 = (_DAT_183393858 ^ _DAT_182419a20) + _DAT_1833938a0 + 0x84222325;
  uVar12 = (_DAT_1833938a0 ^ _UNK_182419a28) + _DAT_183393858 + 0x8cb71e20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393858 ^ _DAT_182419a20;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833938a0 ^ _UNK_182419a28;
  _DAT_1833937a8 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393858 + 0x8cb71e20) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833938a0 + 0x84222325));
  uVar7 = (_DAT_183393808 ^ _DAT_1833937a8) - 0x8cb71e20;
  _DAT_183393808 = uVar7 ^ 0x6a533534ab5b8159;
  _DAT_1833938c0 = (_DAT_1833938c0 * -0x23f0053d946fd1f7 ^ _DAT_183393808) + _DAT_1833937a8;
  _DAT_183393840 = _DAT_1833938c0 ^ _DAT_183393808;
  _DAT_1833938b0 = 0x7348e1e0;
  uVar7 = func_0x00018df0af70(uVar7 ^ 0x959fcac351a40ba9);
  _DAT_183393788 = uVar7 & 0xfffffffffffffc00;
  _DAT_183393820 = (uVar7 ^ _DAT_183393788) + 0x8cb80e20 ^ 0xef3b5a61f849689e;
  _DAT_183393788 =
       ((_DAT_183393898 ^ _DAT_183393788 ^ 0x8cb80e20) * -0x5397732d1b15eefd ^ _DAT_183393820) +
       _DAT_183393788;
  _DAT_183393888 = _DAT_183393788 ^ _DAT_183393820;
  _DAT_1833938d8 = 0x8cb80e20;
  _DAT_183393720 = func_0x00018df0af70(_DAT_183393838 ^ 0xcc003624ff3126);
  uVar7 = (_DAT_183393720 ^ 0x5ebe453e767c00) & 0xffffffffffffff ^ 0x8cb80e20;
  _DAT_183393730 = _DAT_183393800 ^ uVar7 ^ 0x10000f000;
  _DAT_183393778 = (_DAT_183393778 ^ uVar7) + 0x10000f000 ^ 0x4c8657ab74fa4948;
  _DAT_183393748 = (_DAT_183393748 * 0x59dd63ba99e2bd91 ^ _DAT_183393778) + uVar7;
  _DAT_183393700 = _DAT_183393748 ^ _DAT_183393778;
  _DAT_183393868 = 0xf000;
  _DAT_183393800 = func_0x00018df0af70(_DAT_1833938f8 + 0xff8900078effe8ff ^ 0x2b);
  uVar7 = (_DAT_183393800 ^ 0x7880675c) & 0x1fffffffff;
  uVar12 = (_DAT_183393840 ^ uVar7 ^ 0x1703c374a ^ uVar7) + 0x1703c374a;
  _DAT_183393738 = uVar12 ^ 0xc048b6dad6633b01;
  _DAT_183393860 = (_DAT_183393860 * -0x41189a3234bf0ca3 ^ _DAT_183393738) + uVar7;
  _DAT_1833937e0 = _DAT_183393860 ^ _DAT_183393738;
  _DAT_183393728 = 0x703c374a;
  uVar7 = (~_DAT_183393810 + 0x7880675d) *
          ((uVar12 ^ 0xc048b6daa5fad7ca) + (ulonglong)((uint)_DAT_183393738 & 0x7399eccb) * 2);
  uVar7 = (uVar7 | _DAT_1833937f0) + (uVar7 & _DAT_1833937f0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393800 = func_0x00018df0af70((uVar7 | 0xb198b97) + (ulonglong)((uint)uVar7 & 0xb198b97));
  uVar7 = _DAT_183393800 << 0xc | _DAT_183393800 >> 0x34;
  _DAT_183393890 = (_DAT_183393890 ^ uVar7) + 0x8f3ba8b2 ^ 0x3db5d5618771cb9;
  _DAT_1833938b8 = (_DAT_1833938b8 * -0x6c303fea889edef3 ^ _DAT_183393890) + uVar7;
  _DAT_183393778 = _DAT_1833938b8 ^ _DAT_183393890;
  _DAT_183393880 = 0x8f3ba8b2;
  uVar7 = (~_DAT_183393708 + 0x7880675d) *
          ((_DAT_183393708 ^ 0x7399eccb) + (ulonglong)((uint)_DAT_183393708 & 0x7399eccb) * 2);
  uVar7 = (uVar7 | _DAT_1833937e0) + (uVar7 & _DAT_1833937e0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393748 = func_0x00018df0af70((uVar7 | 0xb198b97) + (ulonglong)((uint)uVar7 & 0xb198b97));
  _DAT_183393798 = (_DAT_183393798 ^ _DAT_183393748) + 0x7080474c ^ 0x40e8fc8f9f7f0eea;
  _DAT_183393850 = (_DAT_183393850 * -0x59dddf72b1b28667 ^ _DAT_183393798) + _DAT_183393748;
  _DAT_183393738 = _DAT_183393850 ^ _DAT_183393798;
  _DAT_183393788 = _DAT_183393768 ^ 0x7080474c;
  _DAT_1833938a8 = 0x7080474c;
  _DAT_1833937c8 = func_0x00018df0af70(_DAT_183393708 + 0x30025fd0016ff ^ 0xae);
  uVar7 = _DAT_1833937c8 * -0x6e1ff79286cc9791;
  _DAT_183393870 = _DAT_1833937c8 ^ uVar7 ^ 0x1703c374a;
  _DAT_183393790 = (_DAT_183393790 ^ uVar7) + 0x1703c374a ^ 0xa80367da82559f50;
  _DAT_183393808 = (_DAT_183393808 * -0x7953b3d0e2c5754f ^ _DAT_183393790) + uVar7;
  _DAT_1833937d8 = _DAT_183393808 ^ _DAT_183393790;
  _DAT_1833937a8 = 0x703c374a;
  uVar7 = (_DAT_182419a30 ^ 0x703c374a) + _DAT_183393800 + 0xf41e146f;
  uVar12 = (_DAT_183393800 ^ _UNK_182419a38) + 0xe0786e94;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_182419a30 ^ 0x703c374a;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393800 ^ _UNK_182419a38;
  _DAT_183393860 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - 0xe0786e94 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393800 + 0xf41e146f));
  _DAT_183393830 = _DAT_183393860 & 0x7fffffffffffffff;
  _DAT_1833937d0 = _DAT_1833937d0 ^ _DAT_183393830 ^ 0x1222e1a659c32203;
  _DAT_183393808 = (_DAT_183393808 * 0x8b7f78e02c60c9d ^ _DAT_1833937d0) + _DAT_183393830;
  _DAT_183393778 = _DAT_183393808 ^ _DAT_1833937d0;
  _DAT_183393770 = 0;
  uVar7 = (_DAT_183393868 ^ 0x8422d325) + _DAT_1833938d8 + 0x8422d325;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393868 ^ 0x8422d325;
  uVar12 = ((_DAT_1833938d8 + _DAT_183393868) * 0x2000 | _DAT_1833938d8 + _DAT_183393868 >> 0x33) ^
           _DAT_1833938d8;
  _DAT_1833937a8 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_183393868 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833938d8 + 0x8422d325));
  uVar7 = (_DAT_1833937a8 & 0x1fffffffffffff) >> 1 | _DAT_1833937a8 & 0x1fffffffffffff;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1833937a8 & 0x1fffffffffffff) & 0xfffffffff0000000;
  _DAT_183393810 = _DAT_183393898 ^ uVar7 ^ 0xf000;
  _DAT_1833937f0 = (_DAT_1833937f0 ^ uVar7) + 0xf000 ^ 0x5b4be569b63d8607;
  _DAT_183393710 = (_DAT_183393710 * 0x3eb7a34e0d5173c5 ^ _DAT_1833937f0) + uVar7;
  _DAT_183393778 = _DAT_183393710 ^ _DAT_1833937f0;
  _DAT_183393730 = 0xf000;
  uVar7 = (~_DAT_1833937a8 + 0x100000000) *
          ((_DAT_183393778 ^ 0x7399eccb) + (ulonglong)((uint)_DAT_183393778 & 0x7399eccb) * 2);
  uVar7 = (uVar7 | _DAT_183393890) + (uVar7 & _DAT_183393890);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833937c8 = func_0x00018df0af70((uVar7 | 0x8c661334) + (ulonglong)((uint)uVar7 & 0x8c661334))
  ;
  uVar7 = (ulonglong)(~((uint)(_DAT_1833937c8 << 7) | (uint)(_DAT_1833937c8 >> 0x39)) & 0xf7bbcfee);
  _DAT_1833937a0 = (_DAT_1833937a0 ^ uVar7) + 0x8443011 ^ 0x8c8bb69c7e063467;
  _DAT_1833937a8 = (_DAT_1833937a8 * -0x1c1cd0b69044bf37 ^ _DAT_1833937a0) + uVar7;
  _DAT_183393840 = _DAT_1833937a8 ^ _DAT_1833937a0;
  _DAT_183393818 = 0x8443011;
  uVar7 = (~_DAT_183393740 + 0x8443012) *
          ((_DAT_183393788 ^ 0x7399eccb) + (ulonglong)((uint)_DAT_183393788 & 0x7399eccb) * 2);
  uVar7 = (uVar7 | _DAT_183393750) + (uVar7 & _DAT_183393750);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833938c0 = func_0x00018df0af70((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  _DAT_1833938a8 = _DAT_1833938a8 ^ _DAT_1833938c0 ^ 0xae1b44d05639e812;
  _DAT_1833938c0 = (_DAT_1833938c0 * -0x76e4e08ccd51fd17 ^ _DAT_1833938a8) + _DAT_1833938c0;
  _DAT_1833938f8 = _DAT_1833938c0 ^ _DAT_1833938a8;
  _DAT_183393740 = 0;
  _DAT_183393780 = func_0x00018df0af70(_DAT_1833938d0 + 0xaf008424ffddff ^ 0x1f);
  uVar7 = ((_DAT_183393780 ^ 0xf000) & 0x3ffffffffff) * -0x564fed00c06bfabd;
  _DAT_1833937a8 = _DAT_183393730 ^ uVar7 ^ 0xf000;
  _DAT_1833938c0 = (_DAT_1833938c0 ^ uVar7) + 0xf000 ^ 0xce03eef8d5b6b00e;
  _DAT_183393710 = (_DAT_183393710 * -0x3231c7cee3b72887 ^ _DAT_1833938c0) + uVar7;
  _DAT_1833937d8 = _DAT_183393710 ^ _DAT_1833938c0;
  _DAT_1833937b8 = 0xf000;
  _DAT_183393758 = func_0x00018df0af70(_DAT_183393708 + 0xffe1008422ffddff ^ 100);
  uVar7 = (_DAT_183393758 ^ 0x3fdde0e9f9534c4) & 0x3ffffffffffffff;
  _DAT_1833937e8 = _DAT_1833937e8 ^ uVar7 ^ 0x2571f3b09dc95e56;
  _DAT_183393808 = (_DAT_183393808 * -0x7beeb9693e702fe7 ^ _DAT_1833937e8) + uVar7;
  _DAT_1833937f0 = _DAT_183393808 ^ _DAT_1833937e8;
  _DAT_183393800 = 0;
  uVar7 = (_DAT_1833937a0 ^ 0x8422d325) + _DAT_183393730 + 0x8422d325;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833937a0 ^ 0x8422d325;
  uVar12 = ((_DAT_183393730 + _DAT_1833937a0) * 0x2000 | _DAT_183393730 + _DAT_1833937a0 >> 0x33) ^
           _DAT_183393730;
  _DAT_183393710 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - _DAT_1833937a0 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393730 + 0x8422d325));
  uVar7 = _DAT_183393710 - (_DAT_183393710 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar12 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
           _DAT_183393710;
  uVar7 = uVar12 >> 1 | uVar12;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
           ^ uVar12;
  _DAT_1833937c0 = _DAT_1833937f8 ^ uVar12 ^ 0xf000;
  _DAT_183393820 = (_DAT_183393820 ^ uVar12) + 0xf000 ^ 0x1517c50bbea65af;
  _DAT_183393898 = (_DAT_183393898 * -0x620caf0f498132e5 ^ _DAT_183393820) + uVar12;
  _DAT_1833938e8 = _DAT_183393898 ^ _DAT_183393820;
  _DAT_183393760 = 0xf000;
  unaff_RBP[0x24] = (uVar1 & 0xf) << 0xc | uVar5 & 0xfc0;
  plVar2 = *(longlong **)(unaff_RBP + 0xe);
  uVar3 = *(undefined8 *)(unaff_RBP + 0xc);
  lVar6 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar3,0);
  unaff_RBP[0x18] = (int)*(char *)(lVar6 + (int)unaff_RBP[0x1a]);
  (**(code **)(*plVar2 + 0x6f8))(plVar2,uVar3,lVar6,2);
  uVar5 = unaff_RBP[0x18];
  uVar7 = (~_DAT_183393718 + 0x9d3ef946) *
          ((_DAT_1833937f8 ^ 0x2820785c) + (ulonglong)((uint)_DAT_1833937f8 & 0x2820785c) * 2);
  uVar7 = (uVar7 | _DAT_183393758) + (uVar7 & _DAT_183393758);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393888 = func_0x00018df0af70((uVar7 | 0xb51e8119) + (ulonglong)((uint)uVar7 & 0xb51e8119))
  ;
  uVar7 = (ulonglong)(~(uint)_DAT_183393888 & 0xac025b79) ^ 0x9d3ef945;
  _DAT_183393880 = (_DAT_183393880 ^ uVar7) + 0x313ca23c ^ 0xcee8256cc0d3c10;
  _DAT_1833937a0 = (_DAT_1833937a0 * 0x47703f1fdc80c843 ^ _DAT_183393880) + uVar7;
  _DAT_183393720 = _DAT_1833937a0 ^ _DAT_183393880;
  _DAT_1833938e8 = 0x313ca23c;
  _DAT_1833938e0 = func_0x00018df0af70(_DAT_183393878 + 0x5f00565a001bff ^ 0x26);
  _DAT_1833937a0 =
       (_DAT_1833937a0 ^ _DAT_1833938e0 & 0x7fffffffffffffff) - 0x2ede828f ^ 0xe514db41156a0370;
  _DAT_183393850 =
       (_DAT_183393850 * -0x61b756a676327c77 ^ _DAT_1833937a0) +
       (_DAT_1833938e0 & 0x7fffffffffffffff);
  _DAT_1833937d0 = _DAT_183393850 ^ _DAT_1833937a0;
  _DAT_183393898 = 0xd1217d71;
  uVar7 = (_DAT_183393828 ^ _DAT_182419a40) + _DAT_1833938a0 + 0x8422231a;
  uVar12 = (_DAT_1833938a0 ^ _UNK_182419a48) + _DAT_183393828 + 0x2ede828f;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393828 ^ _DAT_182419a40;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833938a0 ^ _UNK_182419a48;
  _DAT_1833937a8 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393828 + 0x2ede828f) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833938a0 + 0x8422231a));
  uVar7 = _DAT_1833937a8 ^ 0xb88c22131;
  _DAT_183393828 = _DAT_183393888 ^ uVar7 ^ 0x2ede82ce;
  _DAT_1833938b8 = (_DAT_1833938b8 ^ uVar7) + 0x2ede82ce ^ 0xe38f83a6a2005a4c;
  _DAT_183393820 = (_DAT_183393820 * -0x64158dca1f62404f ^ _DAT_1833938b8) + uVar7;
  _DAT_1833937c0 = _DAT_183393820 ^ _DAT_1833938b8;
  _DAT_1833938d8 = 0x2ede82ce;
  _DAT_183393770 = func_0x00018df0af70(_DAT_1833938d0 ^ 0xff53fff495ff3ced);
  uVar7 = _DAT_183393770 ^ 0x2649ca7060a452ee;
  uVar12 = uVar7 >> 1 | uVar7;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  _DAT_1833938e0 = _DAT_183393888 ^ uVar7 ^ 0x10000003f;
  _DAT_183393730 = (_DAT_183393730 ^ uVar7) + 0x10000003f ^ 0x21cc4b998e95c828;
  _DAT_183393788 = (_DAT_183393788 * -0x40632bbce31e6617 ^ _DAT_183393730) + uVar7;
  _DAT_183393850 = _DAT_183393788 ^ _DAT_183393730;
  _DAT_1833938f0 = 0x3f;
  uVar7 = (_DAT_183393890 ^ _DAT_182419a50) + _DAT_183393808 + 0x84222325;
  uVar12 = (_DAT_183393808 ^ _UNK_182419a58) + _DAT_183393890 + 0x7b7ecd70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393890 ^ _DAT_182419a50;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393808 ^ _UNK_182419a58;
  _DAT_183393850 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393890 + 0x7b7ecd70) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393808 + 0x84222325));
  uVar7 = _DAT_183393850 & 0xfffffffffffffffc ^ 0x7b7ecd70;
  _DAT_1833937c8 = (_DAT_1833937c8 ^ uVar7) - 0x7b7ecd70 ^ 0xaf87e7973697c16;
  _DAT_1833938e8 = (_DAT_1833938e8 * 0x226334b73d28e1b ^ _DAT_1833937c8) + uVar7;
  _DAT_183393710 = _DAT_1833938e8 ^ _DAT_1833937c8;
  _DAT_183393720 = 0x84813290;
  uVar7 = (_DAT_1833938f0 ^ _DAT_182419a60) + _DAT_1833937c0 + 0x8422231a;
  uVar12 = (_DAT_1833937c0 ^ _UNK_182419a68) + _DAT_1833938f0 + 0x7b7ecd70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833938f0 ^ _DAT_182419a60;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833937c0 ^ _UNK_182419a68;
  _DAT_183393868 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833938f0 + 0x7b7ecd70) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833937c0 + 0x8422231a));
  uVar7 = _DAT_183393868 ^ 0x1e64348e90;
  _DAT_183393898 = _DAT_1833938d0 ^ uVar7 ^ 0x7b7ecdaf;
  _DAT_1833937d0 = (_DAT_1833937d0 ^ uVar7) + 0x7b7ecdaf ^ 0xc7fcfe97684088dd;
  _DAT_183393880 = (_DAT_183393880 * -0x70a67fd3e302561d ^ _DAT_1833937d0) + uVar7;
  _DAT_1833937e8 = _DAT_183393880 ^ _DAT_1833937d0;
  _DAT_183393708 = 0x7b7ecdaf;
  uVar7 = (_DAT_1833937d8 ^ _DAT_182419a70) + _DAT_183393860 + 0xff5cee8a;
  uVar12 = (_DAT_183393860 ^ _UNK_182419a78) + _DAT_1833937d8 + 0x84813290;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833937d8 ^ _DAT_182419a70;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393860 ^ _UNK_182419a78;
  _DAT_183393760 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833937d8 + 0x84813290) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393860 + 0xff5cee8a));
  _DAT_183393880 =
       (_DAT_183393880 ^ _DAT_183393760 & 0x7fffffffffffff) + 0x10000003f ^ 0x668ba899256bfec0;
  _DAT_1833938e8 =
       (_DAT_1833938e8 * -0x406a950a6241d38b ^ _DAT_183393880) + (_DAT_183393760 & 0x7fffffffffffff)
  ;
  _DAT_183393868 = _DAT_1833938e8 ^ _DAT_183393880;
  _DAT_183393860 = 0x3f;
  _DAT_183393700 = func_0x00018df0af70(_DAT_1833937d8 + 0x8affa3a2000eff ^ 0x75);
  uVar7 = _DAT_183393700 << 0x19 | _DAT_183393700 >> 0x27;
  _DAT_183393860 = (_DAT_183393860 ^ uVar7) - 0x2855bec7 ^ 0xa131bac6d35c7985;
  _DAT_1833937b8 = (_DAT_1833937b8 * -0x2819864227f0057f ^ _DAT_183393860) + uVar7;
  _DAT_1833938f8 = _DAT_1833937b8 ^ _DAT_183393860;
  _DAT_1833938d0 = 0xd7aa4139;
  uVar7 = (_DAT_1833937c0 ^ _DAT_182419a80) + _DAT_1833937d0 + 0x8422231a;
  uVar12 = (_DAT_1833937d0 ^ _UNK_182419a88) + _DAT_1833937c0 + 0x2855bec7;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833937c0 ^ _DAT_182419a80;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1833937d0 ^ _UNK_182419a88;
  _DAT_1833938f0 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1833937c0 + 0x2855bec7) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833937d0 + 0x8422231a));
  uVar7 = (_DAT_1833938f0 ^ 0x2855beff) & 0x7fffffffffffffff;
  _DAT_183393798 = _DAT_183393820 ^ uVar7 ^ 0x2855bf06;
  _DAT_183393750 = (_DAT_183393750 ^ uVar7) + 0x2855bf06 ^ 0x8a0bc2d7823e0bf6;
  _DAT_1833938c0 = (_DAT_1833938c0 * -0x4f7337ba36f1310b ^ _DAT_183393750) + uVar7;
  _DAT_183393768 = _DAT_1833938c0 ^ _DAT_183393750;
  _DAT_183393788 = 0x2855bf06;
  _DAT_1833938c8 = func_0x00018df0af70(_DAT_1833937c8 + 0xffab0024f9ffa4ff ^ 0x4c);
  uVar7 = _DAT_1833938c8 ^ 0x2855bf06;
  _DAT_183393828 = _DAT_1833937b0 ^ uVar7 ^ 0x10000003f;
  _DAT_183393760 = (_DAT_183393760 ^ uVar7) + 0x10000003f ^ 0xa2f1d1c04bcad8b8;
  _DAT_183393848 = (_DAT_183393848 * 0x2ca53b12c86ec675 ^ _DAT_183393760) + uVar7;
  _DAT_183393818 = _DAT_183393848 ^ _DAT_183393760;
  _DAT_1833937c0 = 0x3f;
  _DAT_1833938f8 = func_0x00018df0af70(_DAT_183393778 + 0xffba000252008bff ^ 0xd3);
  uVar7 = (ulonglong)(~((int)_DAT_1833938f8 * -0x408e4377) & 0xb7aafbaf);
  _DAT_183393718 = _DAT_183393890 ^ uVar7 ^ 0xe8e79deb;
  _DAT_1833937b0 = (_DAT_1833937b0 ^ uVar7) + 0xe8e79deb ^ 0x6d909f73a67d771b;
  _DAT_183393868 = (_DAT_183393868 * -0x4e6ea11407e19769 ^ _DAT_1833937b0) + uVar7;
  _DAT_183393768 = _DAT_183393868 ^ _DAT_1833937b0;
  _DAT_183393828 = 0xe8e79deb;
  uVar7 = (~_DAT_1833937e8 + 0x313ca23d) *
          ((_DAT_183393770 ^ 0x3388d88a) + (ulonglong)((uint)_DAT_183393770 & 0x3388d88a) * 2);
  uVar7 = (uVar7 | _DAT_1833938c8) + (uVar7 & _DAT_1833938c8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393868 = func_0x00018df0af70((uVar7 | 0x2b47ab6) + (ulonglong)((uint)uVar7 & 0x2b47ab6));
  _DAT_183393808 = (_DAT_183393808 ^ _DAT_183393868) + 0x86965993 ^ 0x8195b2290120de18;
  _DAT_1833938b8 = (_DAT_1833938b8 * 0xc9ba2876f765b21 ^ _DAT_183393808) + _DAT_183393868;
  _DAT_183393728 = _DAT_1833938b8 ^ _DAT_183393808;
  _DAT_183393860 = 0x86965993;
  _DAT_1833937c8 = func_0x00018df0af70(_DAT_1833938e0 + 0x35ffe0620022ff ^ 0x54);
  uVar7 = _DAT_1833937c8 << 0x20 | _DAT_1833937c8 >> 0x20;
  _DAT_1833937c0 = _DAT_1833937d8 ^ uVar7 ^ 0xe8e79deb;
  _DAT_183393788 = (_DAT_183393788 ^ uVar7) + 0xe8e79deb ^ 0x1c5213643978ec5f;
  _DAT_1833938e0 = (_DAT_1833938e0 * -0x36900e1d5ad23f3f ^ _DAT_183393788) + uVar7;
  _DAT_183393838 = _DAT_1833938e0 ^ _DAT_183393788;
  _DAT_183393868 = 0xe8e79deb;
  uVar7 = (_DAT_183393898 ^ _DAT_182419a90) + _DAT_183393848 + 0x6cc5bece;
  uVar12 = (_DAT_183393848 ^ _UNK_182419a98) + _DAT_183393898 + 0xe8e79deb;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393898 ^ _DAT_182419a90;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393848 ^ _UNK_182419a98;
  _DAT_1833938c0 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393898 + 0xe8e79deb) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393848 + 0x6cc5bece));
  _DAT_1833937b0 = (_DAT_1833938c0 ^ 0xe8e78000) & 0xffffffffffffe000 ^ 0xe8e79deb;
  _DAT_183393760 = _DAT_183393760 ^ _DAT_1833937b0 ^ 0x56022c9756a4dd3;
  _DAT_1833937b0 = (_DAT_1833937b0 * -0x556177fc57f2f56f ^ _DAT_183393760) + _DAT_1833937b0;
  _DAT_1833937e8 = _DAT_1833937b0 ^ _DAT_183393760;
  _DAT_1833937a8 = 0;
  uVar7 = ((_DAT_1833937f8 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1833937f8 & 0x8422231a) * 2) *
          -_DAT_183393850;
  uVar7 = (uVar7 | _DAT_183393750) + (uVar7 & _DAT_183393750);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393808 = func_0x00018df0af70((uVar7 | 0x8422231a) + (ulonglong)((uint)uVar7 & 0x8422231a))
  ;
  uVar7 = _DAT_183393808 ^ 0x3f;
  _DAT_1833937a0 = _DAT_183393760 ^ uVar7 ^ 0x3f;
  _DAT_183393718 = (_DAT_183393700 ^ uVar7) + 0x3f ^ 0xbdfb0ab9ea7ba30e;
  _DAT_183393700 = (_DAT_183393700 * -0x7f14845bc5ac509 ^ _DAT_183393718) + uVar7;
  _DAT_183393718 = _DAT_183393700 ^ _DAT_183393718;
  _DAT_1833938f0 = 0x3f;
  _DAT_183393718 = func_0x00018df0af70(_DAT_1833938e0 ^ 0xffdd004c6b00326b);
  _DAT_1833938e8 = (_DAT_1833938e8 ^ _DAT_183393718) + 0x48550450 ^ 0x683f73815edafcc7;
  _DAT_1833937a0 = (_DAT_1833937a0 * 0x2e18d4e5dc4f105b ^ _DAT_1833938e8) + _DAT_183393718;
  _DAT_183393750 = _DAT_1833937a0 ^ _DAT_1833938e8;
  _DAT_183393748 = 0x48550450;
  uVar7 = (~_DAT_183393790 + 0x48550451) *
          ((_DAT_183393710 ^ 0x3388d88a) + (ulonglong)((uint)_DAT_183393710 & 0x3388d88a) * 2);
  uVar7 = (uVar7 | _DAT_183393898) + (uVar7 & _DAT_183393898);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393770 = func_0x00018df0af70((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  uVar7 = _DAT_183393770 >> 1 | _DAT_183393770;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_183393770;
  uVar7 = uVar7 << 0x36 | uVar7 >> 10;
  _DAT_183393890 = _DAT_183393890 ^ uVar7 ^ 0x740cc1f7c7ad5853;
  _DAT_183393808 = (_DAT_183393808 * -0x33b1a4a7a0d41195 ^ _DAT_183393890) + uVar7;
  _DAT_183393878 = _DAT_183393808 ^ _DAT_183393890;
  _DAT_183393798 = 0;
  uVar7 = ((_DAT_183393880 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183393880 & 0x8422231a) * 2) *
          -_DAT_183393888;
  uVar7 = (uVar7 | _DAT_1833938f0) + (uVar7 & _DAT_1833938f0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393840 = func_0x00018df0af70((uVar7 | 0x8422231a) + (ulonglong)((uint)uVar7 & 0x8422231a))
  ;
  uVar7 = _DAT_183393840 << 0x39 | _DAT_183393840 >> 7;
  uVar12 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar7;
  _DAT_183393788 = _DAT_1833937f8 ^ uVar7 ^ 0x3f;
  _DAT_183393838 = (_DAT_183393838 ^ uVar7) + 0x3f ^ 0xfbef58267b105bd0;
  _DAT_1833937a0 = (_DAT_1833937a0 * -0xce64d6aff78cc83 ^ _DAT_183393838) + uVar7;
  _DAT_1833938b0 = _DAT_1833937a0 ^ _DAT_183393838;
  _DAT_1833938f8 = 0x3f;
  uVar7 = (_DAT_183393898 ^ _DAT_182419aa0) + _DAT_183393758 + 0x17aa8880;
  uVar12 = (_DAT_183393758 ^ _UNK_182419aa8) + _DAT_183393898 + 0x9388aba5;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183393898 ^ _DAT_182419aa0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183393758 ^ _UNK_182419aa8;
  _DAT_1833938a0 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183393898 + 0x9388aba5) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183393758 + 0x17aa8880));
  _DAT_183393870 = _DAT_183393870 ^ _DAT_1833938a0 & 0x7fffffffffffffff ^ 0x63d1555bd5a54c65;
  _DAT_183393770 =
       (_DAT_183393770 * 0x23bdd9e04bddaeb7 ^ _DAT_183393870) +
       (_DAT_1833938a0 & 0x7fffffffffffffff);
  _DAT_183393720 = _DAT_183393770 ^ _DAT_183393870;
  _DAT_1833937e0 = 0;
  uVar7 = ((_DAT_183393760 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183393760 & 0x8422231a) * 2) *
          -_DAT_183393700;
  uVar7 = (uVar7 | _DAT_1833937b0) + (uVar7 & _DAT_1833937b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183393728 = func_0x00018df0af70((uVar7 | 0x8422231a) + (ulonglong)((uint)uVar7 & 0x8422231a))
  ;
  uVar7 = _DAT_183393728 & 0x7fffffffffffffff;
  _DAT_183393748 = _DAT_183393780 ^ uVar7 ^ 0x3f;
  _DAT_1833938f8 = (_DAT_1833938f8 ^ uVar7) + 0x3f ^ 0x141d2d41337ddb5c;
  _DAT_183393858 = (_DAT_183393858 * 0x53e65b9242f4c0b3 ^ _DAT_1833938f8) + uVar7;
  _DAT_1833938f8 = _DAT_183393858 ^ _DAT_1833938f8;
  _DAT_183393828 = 0x3f;
  auVar10._8_8_ = unaff_XMM8_Qb;
  auVar10._0_8_ = (ulonglong)uVar5 ^ 0x84222325;
  auVar9 = pshufb(auVar10 ^ _DAT_182419ab0,unaff_XMM12);
  uVar12 = auVar9._8_8_ + auVar9._0_8_;
  uVar7 = uVar12 + _DAT_1833937c8;
  if (auVar9._4_4_ < 0) {
    uVar7 = _DAT_1833937f8 ^ uVar12;
  }
  _DAT_183393738 = func_0x00018df0af70(SUB161(auVar10 ^ _DAT_182419ab0,5) ^ uVar7);
  uVar7 = (ulonglong)uVar5 * 0x3f ^ _DAT_183393738;
  _DAT_183393890 = (ulonglong)(uVar5 & 0x3f);
  _DAT_1833938b8 = (_DAT_1833938b8 ^ uVar7) + _DAT_183393890 ^ 0x74b669a4dfbb5827;
  _DAT_1833938b0 = (_DAT_1833938b0 * 0xe10bae856663fff ^ _DAT_1833938b8) + uVar7;
  _DAT_183393798 = _DAT_1833938b0 ^ _DAT_1833938b8;
  uVar1 = unaff_RBP[0x24];
  uVar7 = _DAT_183393890 ^ 0x84222325 ^ _DAT_183393700;
  uVar12 = uVar1 ^ _DAT_183393868;
  lVar8 = (_DAT_183393890 ^ 0x84222325) + _DAT_183393868;
  lVar6 = _DAT_183393700 + uVar1;
  uVar11 = uVar7 + lVar8;
  uVar13 = uVar12 + lVar6;
  uVar7 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar7;
  uVar12 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar12;
  _DAT_183393830 =
       func_0x00018df0af70((uVar12 << 0x1d | uVar12 >> 0x23) - lVar6 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
  uVar1 = uVar5 & 0x3f | uVar1;
  _DAT_183393730 = (ulonglong)uVar1;
  _DAT_183393820 =
       (_DAT_183393820 ^ _DAT_183393830 & 0x1ffffffffffffff) + _DAT_183393730 ^ 0xc1ab22a0ec0bea6b;
  _DAT_1833937c0 =
       (_DAT_1833937c0 * -0x4221d59f9cd4db91 ^ _DAT_183393820) +
       (_DAT_183393830 & 0x1ffffffffffffff);
  _DAT_1833937a0 = _DAT_1833937c0 ^ _DAT_183393820;
  *(undefined8 *)(unaff_RBP + 0x18) = *(undefined8 *)(unaff_RBP + 8);
  uVar5 = unaff_RBP[0x10];
  unaff_RBP[0x1a] = uVar5;
  uVar12 = (ulonglong)uVar5;
  auVar9._8_8_ = _UNK_180062bf8;
  auVar9._0_8_ = uVar12 ^ 0x84222325;
  auVar10 = pshufb(auVar9 ^ _DAT_182419ac0,unaff_XMM12);
  uVar11 = auVar10._8_8_ + auVar10._0_8_;
  uVar7 = uVar11 + _DAT_1833938a0;
  if (auVar10._4_4_ < 0) {
    uVar7 = _DAT_183393810 ^ uVar11;
  }
  _DAT_1833938b0 = func_0x00018df0af70(SUB161(auVar9 ^ _DAT_182419ac0,5) ^ uVar7);
  uVar14 = uVar5 & (uint)unaff_XMM7_Qa;
  uVar15 = uVar5 | (uint)unaff_XMM7_Qa;
  uVar7 = (_DAT_1833938b0 & 0x3ff) << 0x35 | _DAT_1833938b0 >> 0xb;
  _DAT_1833938c8 =
       ((uVar12 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_182419b10 +
       (((uVar12 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_182419b20 +
        (_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_182419b10 << 0x20) +
       ((ulonglong)uVar15 * (ulonglong)_DAT_182419b00 << 0x20) +
       (ulonglong)uVar15 * (ulonglong)_DAT_182419af0 +
       ((ulonglong)uVar14 * (ulonglong)_DAT_182419b00 << 0x20 |
       (ulonglong)uVar14 * (ulonglong)_DAT_182419af0) +
       ((ulonglong)uVar5 * (ulonglong)_DAT_182419ae0 << 0x20) +
       (ulonglong)uVar5 * (ulonglong)_DAT_182419ad0 +
       (-(((uVar12 ^ unaff_XMM7_Qa) & 0xffffffff) * (ulonglong)_DAT_182419bb0 +
         (((uVar12 ^ unaff_XMM7_Qa) & 0xffffffff) * (ulonglong)_DAT_182419bc0 +
          (unaff_XMM7_Qa >> 0x20) * (ulonglong)_DAT_182419bb0 << 0x20)) -
       (((ulonglong)uVar15 * (ulonglong)_DAT_182419ba0 << 0x20) +
        (ulonglong)uVar15 * (ulonglong)_DAT_182419b90 +
       ((ulonglong)uVar14 * (ulonglong)_DAT_182419b80 << 0x20 |
       (ulonglong)uVar14 * (ulonglong)_DAT_182419b70) +
       ((ulonglong)uVar5 * (ulonglong)_DAT_182419b60 << 0x20) +
       (ulonglong)uVar5 * (ulonglong)_DAT_182419b50)) + 0xec25c57446bea8f;
  _DAT_183393870 = _DAT_183393870 ^ uVar7 ^ _DAT_1833938c8;
  _DAT_183393778 = (_DAT_183393778 ^ uVar7) + _DAT_1833938c8 ^ 0xd781d51bd2aea7ad;
  _DAT_1833937e0 = (_DAT_1833937e0 * 0xb2154a1d27a0c41 ^ _DAT_183393778) + uVar7;
  _DAT_183393850 = _DAT_1833937e0 ^ _DAT_183393778;
  _DAT_1833938c8 = _DAT_1833938c8 & 0xffffffff;
  unaff_RBP[0x1c] = uVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[0x16]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x06':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva def6f5d (image 18def6f5d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18def6f5d(void)

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



// ===== continuation @ rva dee19fb (image 18dee19fb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dee19fb(void)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  uint unaff_R13D;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  ulonglong unaff_XMM10_Qa;
  ulonglong unaff_XMM10_Qb;
  ulonglong unaff_XMM11_Qa;
  ulonglong unaff_XMM11_Qb;
  ulonglong unaff_XMM12_Qa;
  ulonglong unaff_XMM12_Qb;
  ulonglong unaff_XMM13_Qa;
  ulonglong unaff_XMM13_Qb;
  
  uVar1 = (in_RAX ^ unaff_XMM6_Qa) + _DAT_183393710 + 0x84222348;
  uVar2 = (_DAT_183393710 ^ unaff_XMM6_Qb) + in_RAX + 0xbc;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ in_RAX ^ unaff_XMM6_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183393710 ^ unaff_XMM6_Qb;
  _DAT_183393710 =
       func_0x00018df0af70((uVar2 << 0x1d | uVar2 >> 0x23) - (in_RAX + 0xbc) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183393710 + 0x84222348));
  uVar1 = (_DAT_183393710 ^ 0xfd) & 0x1fffffffffff;
  _DAT_183393810 = (_DAT_183393810 ^ uVar1) + 0xd1 ^ 0xa811f51c9c07acb1;
  _DAT_183393840 = (_DAT_183393840 * 0x4f2cb647f2765463 ^ _DAT_183393810) + uVar1;
  _DAT_183393878 = _DAT_183393840 ^ _DAT_183393810;
  _DAT_1833938b0 = 0xd1;
  uVar1 = (_DAT_183393718 ^ unaff_XMM7_Qa) + _DAT_183393768 + 0x84222325;
  uVar2 = (_DAT_183393768 ^ unaff_XMM7_Qb) + _DAT_183393718 + 0xa3;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183393718 ^ unaff_XMM7_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183393768 ^ unaff_XMM7_Qb;
  _DAT_183393818 =
       func_0x00018df0af70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393718 + 0xa3) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183393768 + 0x84222325));
  uVar1 = (_DAT_183393818 ^ unaff_XMM8_Qa) & 0x3ffffffffff;
  _DAT_1833938d0 = (_DAT_1833938d0 ^ uVar1) - 0xa3 ^ 0x9b735c833c6482a1;
  _DAT_1833938d8 = (_DAT_1833938d8 * 0x31d4ab998d68555d ^ _DAT_1833938d0) + uVar1;
  _DAT_183393738 = _DAT_1833938d8 ^ _DAT_1833938d0;
  _DAT_183393868 = 0x5d;
  uVar1 = (~_DAT_183393788 + 0xa4) *
          ((_DAT_183393838 ^ 0x84222315) + (ulonglong)((uint)_DAT_183393838 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_1833938c0) + (uVar1 & _DAT_1833938c0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183393728 = func_0x00018df0af70((uVar1 | 0x842223b6) + (ulonglong)((uint)uVar1 & 0x842223b6))
  ;
  uVar1 = (_DAT_183393728 & 0x1fffffffffffe000) * 8;
  _DAT_183393780 = _DAT_183393760 ^ uVar1 ^ 0xd3;
  _DAT_183393758 = (_DAT_183393758 ^ uVar1) + 0xd3 ^ 0x44dcf8f2d841f522;
  _DAT_183393710 = (_DAT_183393710 * -0x7139a2dc96c5c8b9 ^ _DAT_183393758) + uVar1;
  _DAT_183393788 = _DAT_183393710 ^ _DAT_183393758;
  _DAT_1833937f8 = 0xd3;
  uVar1 = (~_DAT_183393788 + 0x5e) *
          ((_DAT_183393820 ^ 0x842223f6) + (ulonglong)((uint)_DAT_183393820 & 0x842223f6) * 2);
  uVar1 = (uVar1 | _DAT_183393798) + (uVar1 & _DAT_183393798);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833937a8 = func_0x00018df0af70((uVar1 | 0x842223ab) + (ulonglong)((uint)uVar1 & 0x842223ab))
  ;
  uVar1 = _DAT_1833937a8 << 0x26 | _DAT_1833937a8 >> 0x1a;
  _DAT_183393890 = _DAT_183393770 ^ uVar1 ^ 0x130;
  _DAT_1833937a0 = (_DAT_1833937a0 ^ uVar1) + 0x130 ^ 0x2dd26562b7c79ba9;
  _DAT_183393710 = (_DAT_183393710 * -0x26af1d0a937be99d ^ _DAT_1833937a0) + uVar1;
  _DAT_183393778 = _DAT_183393710 ^ _DAT_1833937a0;
  _DAT_183393878 = 0x30;
  uVar1 = (~_DAT_183393790 + 0x18) *
          ((_DAT_183393758 ^ 0x84222325) + (ulonglong)((uint)_DAT_183393758 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1833938d8) + (uVar1 & _DAT_1833938d8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183393830 = func_0x00018df0af70((uVar1 | 0x84222332) + (ulonglong)((uint)uVar1 & 0x84222332))
  ;
  _DAT_183393710 = (_DAT_183393710 ^ _DAT_183393830 ^ 0x17) - 0x17 ^ 0xde4d090bf9c34e5c;
  _DAT_183393730 = (_DAT_183393730 * -0x518bb535b54c9559 ^ _DAT_183393710) + (_DAT_183393830 ^ 0x17)
  ;
  _DAT_183393780 = _DAT_183393730 ^ _DAT_183393710;
  _DAT_183393790 = 0xe9;
  uVar1 = (_DAT_183393720 ^ unaff_XMM9_Qa) + _DAT_183393788 + 0x84222362;
  uVar2 = (_DAT_183393788 ^ unaff_XMM9_Qb) + _DAT_183393720 + 0xe9;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183393720 ^ unaff_XMM9_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183393788 ^ unaff_XMM9_Qb;
  _DAT_1833938b8 =
       func_0x00018df0af70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393720 + 0xe9) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183393788 + 0x84222362));
  uVar1 = (ulonglong)(~(uint)_DAT_1833938b8 & 0x47);
  _DAT_183393700 = _DAT_183393868 ^ uVar1 ^ 0x130;
  _DAT_183393768 = (_DAT_183393768 ^ uVar1) + 0x130 ^ 0xc8beb0185622f522;
  _DAT_1833937f8 = (_DAT_1833937f8 * -0x29248feb6b51e0ef ^ _DAT_183393768) + uVar1;
  _DAT_183393898 = _DAT_1833937f8 ^ _DAT_183393768;
  _DAT_1833937a8 = 0x30;
  uVar1 = func_0x00018df0af70(_DAT_183393738 ^ 0xffe10083710021fe);
  _DAT_183393890 = uVar1 << 0x13 | uVar1 >> 0x2d & 0xffffffffffffff80;
  _DAT_183393708 = (_DAT_183393708 ^ _DAT_183393890) - 0xb4 ^ 0xcaaa396e65f34f05;
  _DAT_183393890 = (uVar1 * 0x194e03d91749713 ^ _DAT_183393708) + _DAT_183393890;
  _DAT_1833937c0 = _DAT_183393890 ^ _DAT_183393708;
  _DAT_183393810 = _DAT_183393880 ^ 0xffffffffffffff4c;
  _DAT_183393718 = 0x4c;
  uVar1 = (_DAT_183393848 ^ unaff_XMM10_Qa) + _DAT_183393710 + 0x84222315;
  uVar2 = (_DAT_183393710 ^ unaff_XMM10_Qb) + _DAT_183393848 + 0xb4;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183393848 ^ unaff_XMM10_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183393710 ^ unaff_XMM10_Qb;
  _DAT_183393890 =
       func_0x00018df0af70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393848 + 0xb4) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183393710 + 0x84222315));
  _DAT_183393828 = _DAT_183393780 ^ _DAT_183393890 ^ 0xe4;
  _DAT_1833937c0 = (_DAT_1833937c0 ^ _DAT_183393890) + 0xe4 ^ 0xbe85ff96f6977796;
  _DAT_1833938f0 = (_DAT_1833938f0 * 0xd69cd0aab733c1d ^ _DAT_1833937c0) + _DAT_183393890;
  _DAT_183393750 = _DAT_1833938f0 ^ _DAT_1833937c0;
  _DAT_183393788 = 0xe4;
  uVar1 = (_DAT_183393810 ^ unaff_XMM11_Qa) + _DAT_1833938c0 + 0x842223d0;
  uVar2 = (_DAT_1833938c0 ^ unaff_XMM11_Qb) + _DAT_183393810 + 0xd1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183393810 ^ unaff_XMM11_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833938c0 ^ unaff_XMM11_Qb;
  _DAT_1833937d8 =
       func_0x00018df0af70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393810 + 0xd1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833938c0 + 0x842223d0));
  uVar1 = _DAT_183393798 & 0x7fffffffffffffff;
  _DAT_183393758 = _DAT_1833937f8 ^ uVar1 ^ 0x1c6;
  _DAT_183393700 = (_DAT_183393700 ^ uVar1) + 0x1c6 ^ 0x4c8b2e4ac9c7056c;
  _DAT_1833937d0 = (_DAT_1833937d0 * 0x4972a222b168a3b1 ^ _DAT_183393700) + uVar1;
  _DAT_183393898 = _DAT_1833937d0 ^ _DAT_183393700;
  _DAT_183393738 = 0xc6;
  _DAT_1833937d8 = func_0x00018df0af70(_DAT_1833938b0 + 0x1eff7c010021ff ^ 0x50);
  uVar1 = _DAT_1833937d8 - (_DAT_1833937d8 >> 1 & unaff_R12);
  uVar1 = (uVar1 & unaff_R15) + (uVar1 >> 2 & unaff_R15);
  uVar1 = ((((uVar1 >> 4) + uVar1 & unaff_R14) * unaff_RBX >> 0x38) << 3 ^ _DAT_1833937d8) << 0x1e |
          _DAT_1833937d8 >> 0x22;
  _DAT_183393820 = (_DAT_183393820 ^ uVar1) + 0x24 ^ 0x835f057e498f160;
  _DAT_183393828 = (_DAT_183393828 * 0x231ee2172b7ca039 ^ _DAT_183393820) + uVar1;
  _DAT_183393878 = _DAT_183393828 ^ _DAT_183393820;
  _DAT_1833938b8 = _DAT_1833937e8 ^ 0x24;
  _DAT_1833937a0 = 0x24;
  uVar1 = (_DAT_183393720 ^ unaff_XMM11_Qa) + _DAT_1833937b0 + 0x842223d0;
  uVar2 = (_DAT_1833937b0 ^ unaff_XMM11_Qb) + _DAT_183393720 + 0xd1;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183393720 ^ unaff_XMM11_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833937b0 ^ unaff_XMM11_Qb;
  _DAT_183393790 =
       func_0x00018df0af70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393720 + 0xd1) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833937b0 + 0x842223d0));
  uVar1 = (_DAT_183393790 << 0x2c | _DAT_183393790 >> 0x14) ^ 0x24;
  _DAT_183393860 = (_DAT_183393860 ^ uVar1) + 0xd1 ^ 0xd7f5698d9c00fa87;
  _DAT_183393888 = (_DAT_183393888 * -0x33735c1a5ee859d1 ^ _DAT_183393860) + uVar1;
  _DAT_183393808 = _DAT_183393888 ^ _DAT_183393860;
  _DAT_1833938e8 = 0xd1;
  uVar1 = (_DAT_183393780 ^ unaff_XMM12_Qa) + _DAT_1833937a0 + 0x84222301;
  uVar2 = (_DAT_1833937a0 ^ unaff_XMM12_Qb) + _DAT_183393780 + 0xa2;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183393780 ^ unaff_XMM12_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833937a0 ^ unaff_XMM12_Qb;
  _DAT_183393880 =
       func_0x00018df0af70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393780 + 0xa2) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833937a0 + 0x84222301));
  uVar1 = _DAT_183393880 & 0x7fffffffffffffff ^ 0x24;
  _DAT_183393838 = _DAT_1833937a0 ^ uVar1 ^ 0xc6;
  _DAT_183393788 = (_DAT_183393788 ^ uVar1) + 0xc6 ^ 0x3a7e81df80c5fc67;
  _DAT_1833937b8 = (_DAT_1833937b8 * 0x50dcd01a8cc030d3 ^ _DAT_183393788) + uVar1;
  _DAT_183393890 = _DAT_1833937b8 ^ _DAT_183393788;
  _DAT_1833937d0 = 0xc6;
  uVar1 = (~_DAT_183393768 + 199) *
          ((_DAT_183393740 ^ 0x842223e3) + (ulonglong)((uint)_DAT_183393740 & 0x842223e3) * 2);
  uVar1 = (uVar1 | _DAT_183393790) + (uVar1 & _DAT_183393790);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833937e8 = func_0x00018df0af70((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_183393710 = (_DAT_1833937e8 ^ 0x9924) * 0x7c42f6878533079d & 0xfffffffffffff;
  _DAT_1833937c0 = _DAT_183393880 ^ _DAT_183393710 ^ 0x9a8a3e17e23e3361;
  _DAT_183393848 = (_DAT_183393848 * -0x56b9e6acd4827ba1 ^ _DAT_1833937c0) + _DAT_183393710;
  _DAT_1833937c0 = _DAT_183393848 ^ _DAT_1833937c0;
  _DAT_183393880 = 0;
  _DAT_183393868 = func_0x00018df0af70(_DAT_183393738 + 0x1f007c150021ff ^ 6);
  uVar1 = _DAT_183393868 & 0xffffffffc0000000;
  _DAT_183393750 = _DAT_1833937d8 ^ uVar1 ^ 0x30;
  _DAT_183393808 = (_DAT_183393808 ^ uVar1) + 0x30 ^ 0x1f99030feb34bf43;
  _DAT_183393898 = (_DAT_183393898 * 0x1929b1c03684134d ^ _DAT_183393808) + uVar1;
  _DAT_183393818 = _DAT_183393898 ^ _DAT_183393808;
  _DAT_183393890 = 0x30;
  uVar1 = (~_DAT_183393818 + 0x100) *
          ((_DAT_183393868 ^ 0x842223d0) + (ulonglong)((uint)_DAT_183393868 & 0x842223d0) * 2);
  uVar1 = (uVar1 | _DAT_183393718) + (uVar1 & _DAT_183393718);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833937c0 = func_0x00018df0af70((uVar1 | 0x8422232f) + (ulonglong)((uint)uVar1 & 0x8422232f))
  ;
  _DAT_183393828 = (_DAT_183393828 ^ _DAT_183393750 & 0x1fffffffff) + 10 ^ 0x1e1d2aff91c92e2;
  _DAT_183393850 =
       (_DAT_183393850 * -0x45fa75f9cf893a63 ^ _DAT_183393828) + (_DAT_183393750 & 0x1fffffffff);
  _DAT_1833937a8 = _DAT_183393850 ^ _DAT_183393828;
  _DAT_1833937b8 = 10;
  uVar1 = (_DAT_183393788 ^ unaff_XMM13_Qa) + _DAT_183393728 + 0x842223d0;
  uVar2 = (_DAT_183393728 ^ unaff_XMM13_Qb) + _DAT_183393788 + 10;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183393788 ^ unaff_XMM13_Qa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183393728 ^ unaff_XMM13_Qb;
  _DAT_183393840 =
       func_0x00018df0af70((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393788 + 10) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183393728 + 0x842223d0));
  uVar1 = (ulonglong)((uint)_DAT_183393840 & 0xf5);
  _DAT_183393818 = _DAT_183393818 ^ uVar1 ^ 0xf39af0e2e02b3a4e;
  _DAT_1833937f0 = (_DAT_1833937f0 * 0x390acd0850ebdfd1 ^ _DAT_183393818) + uVar1;
  _DAT_1833937c8 = _DAT_1833937f0 ^ _DAT_183393818;
  _DAT_1833938e0 = 0;
  uVar1 = ((_DAT_183393890 ^ 0x84222315) + (ulonglong)((uint)_DAT_183393890 & 0x84222315) * 2) *
          -_DAT_1833938b8;
  uVar1 = (uVar1 | _DAT_1833937a0) + (uVar1 & _DAT_1833937a0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183393838 = func_0x00018df0af70((uVar1 | 0x84222315) + (ulonglong)((uint)uVar1 & 0x84222315))
  ;
  uVar1 = _DAT_183393838 >> 0x15 & 0x1ffffffffff;
  _DAT_1833938f0 = _DAT_1833937d8 ^ uVar1 ^ 0x30;
  _DAT_1833938f8 = (_DAT_1833938f8 ^ uVar1) + 0x30 ^ 0x64ab747edfe4b6d0;
  _DAT_1833938a0 = (_DAT_1833938a0 * -0x749c3ab24ae0c037 ^ _DAT_1833938f8) + uVar1;
  _DAT_183393860 = _DAT_1833938a0 ^ _DAT_1833938f8;
  _DAT_183393750 = 0x30;
  uVar1 = ((_DAT_1833938b8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1833938b8 & 0x84222315) * 2) *
          -_DAT_183393700;
  uVar1 = (uVar1 | _DAT_1833937f0) + (uVar1 & _DAT_1833937f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183393760 = func_0x00018df0af70((uVar1 | 0x84222315) + (ulonglong)((uint)uVar1 & 0x84222315))
  ;
  uVar1 = _DAT_183393760 * 2 & 0xfffffffffffe0000;
  uVar2 = uVar1 >> 1;
  uVar1 = uVar1 >> 2 | uVar2;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & unaff_R12);
  uVar1 = (uVar1 & unaff_R15) + (uVar1 >> 2 & unaff_R15);
  uVar2 = (0x40 - (((uVar1 >> 4) + uVar1 & unaff_R14) * unaff_RBX >> 0x38)) * 4 ^ uVar2;
  _DAT_1833938f0 = _DAT_183393720 ^ uVar2 ^ 0x30;
  _DAT_1833938b0 = (_DAT_1833938b0 ^ uVar2) + 0x30 ^ 0x11f24d0b8661ee95;
  _DAT_183393848 = (_DAT_183393848 * -0x42e2da416f255d5d ^ _DAT_1833938b0) + uVar2;
  _DAT_183393738 = _DAT_183393848 ^ _DAT_1833938b0;
  _DAT_183393840 = 0x30;
  *(byte *)(unaff_RBP + -0x51 + *(longlong *)(unaff_RBP + 0x40)) =
       *(byte *)(unaff_RBP + 0x58) | 0x30;
  switch(unaff_R13D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva def7031 (image 18def7031) =====

void FUN_18def7031(void)

{
  return;
}



// ===== continuation @ rva def6c4b (image 18def6c4b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18def6c4b(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R12;
  
  uVar2 = (**(code **)(*unaff_R12 + 0xd8))();
  *(undefined8 *)(unaff_RBP + 0x60) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x68) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x20);
  *(undefined4 *)(unaff_RBP + 0x78) = 0;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_EDI;
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



// ===== continuation @ rva def6f11 (image 18def6f11) =====

undefined8 thunk_FUN_18dee176d(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva dee52f0 (image 18dee52f0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dee52f0(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *(uint *)(unaff_RBP + 0x40) = unaff_ESI;
  *(char *)(unaff_RBP + 0x90) = (char)unaff_ESI + (char)((ulonglong)unaff_ESI / 10) * -10;
  uVar2 = (_DAT_183393840 ^ _DAT_182419cf0) + _DAT_1833937d0 + 0x842223a7;
  uVar3 = (_DAT_1833937d0 ^ _UNK_182419cf8) + _DAT_183393840 + 0xeb;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183393840 ^ _DAT_182419cf0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833937d0 ^ _UNK_182419cf8;
  _DAT_1833938f0 =
       func_0x00018df0af70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183393840 + 0xeb) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833937d0 + 0x842223a7));
  uVar2 = (ulonglong)(~(uint)_DAT_1833938f0 & 0x82) * 0x78c99971ab080d45;
  _DAT_183393888 = (_DAT_183393888 ^ uVar2) + 0xeb ^ 0x40cd8cbb56879113;
  _DAT_183393868 = (_DAT_183393868 * 0x1dd830c64d83e317 ^ _DAT_183393888) + uVar2;
  _DAT_183393740 = _DAT_183393868 ^ _DAT_183393888;
  _DAT_183393720 = 0xeb;
  uVar2 = (_DAT_1833938e8 ^ _DAT_182419d00) + _DAT_183393718 + 0x84222324;
  uVar3 = (_DAT_183393718 ^ _UNK_182419d08) + _DAT_1833938e8 + 0xdd;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833938e8 ^ _DAT_182419d00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183393718 ^ _UNK_182419d08;
  uVar2 = func_0x00018df0af70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833938e8 + 0xdd) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393718 + 0x84222324));
  uVar3 = (uVar2 ^ 0xd0) & 0xfffffffffffffff0;
  _DAT_183393700 = (uVar2 ^ uVar3) + 0xdc ^ 0xce9f918bd8eafd87;
  _DAT_1833938d8 = (_DAT_1833938d8 * -0x3028b3dfbd283e09 ^ _DAT_183393700) + uVar3;
  _DAT_1833937a8 = _DAT_1833938d8 ^ _DAT_183393700;
  _DAT_183393758 = 0xdc;
  _DAT_183393770 = func_0x00018df0af70(_DAT_183393718 ^ 0x1f008446ffe134);
  uVar2 = _DAT_183393770 << 0x34 | _DAT_183393770 >> 0xc;
  _DAT_1833937d0 = (_DAT_1833937d0 ^ uVar2) - 0xec ^ 0xba520d960eee61f2;
  _DAT_183393890 = (_DAT_183393890 * -0x40eaea56cd83d67d ^ _DAT_1833937d0) + uVar2;
  _DAT_183393800 = _DAT_183393890 ^ _DAT_1833937d0;
  _DAT_1833938a8 = 0x14;
  uVar2 = (_DAT_1833937f0 ^ _DAT_180526f00) + _DAT_183393708 + 0x84222315;
  uVar3 = (_DAT_183393708 ^ _UNK_180526f08) + _DAT_1833937f0 + 0xec;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833937f0 ^ _DAT_180526f00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183393708 ^ _UNK_180526f08;
  _DAT_183393880 =
       func_0x00018df0af70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833937f0 + 0xec) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393708 + 0x84222315));
  _DAT_183393740 = (ulonglong)(~(uint)_DAT_183393880 & 0x30);
  _DAT_183393760 = (_DAT_183393760 ^ _DAT_183393740) + 0x11c ^ 0x89406067f30f963c;
  _DAT_183393740 =
       ((_DAT_1833937f0 ^ _DAT_183393740 ^ 0x11c) * -0x146ca38b4d612173 ^ _DAT_183393760) +
       _DAT_183393740;
  _DAT_183393818 = _DAT_183393740 ^ _DAT_183393760;
  _DAT_183393868 = 0x1c;
  _DAT_183393708 = func_0x00018df0af70(_DAT_183393800 ^ 0x22ff842d00210e);
  uVar2 = _DAT_183393708 ^ 0x1c;
  _DAT_1833937d8 = _DAT_183393720 ^ uVar2 ^ 0x30;
  _DAT_183393888 = (_DAT_183393888 ^ uVar2) + 0x30 ^ 0xe0fc8c5a9bf5adb7;
  _DAT_1833938e0 = (_DAT_1833938e0 * -0x34b1c50428c965e9 ^ _DAT_183393888) + uVar2;
  _DAT_183393858 = _DAT_1833938e0 ^ _DAT_183393888;
  _DAT_1833937c0 = 0x30;
  uVar2 = (_DAT_183393838 ^ _DAT_1809e2880) + _DAT_1833937f0 + 0x84222325;
  uVar3 = (_DAT_1833937f0 ^ _UNK_1809e2888) + _DAT_183393838 + 0xd4;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183393838 ^ _DAT_1809e2880;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833937f0 ^ _UNK_1809e2888;
  _DAT_1833937b8 =
       func_0x00018df0af70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183393838 + 0xd4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833937f0 + 0x84222325));
  uVar2 = _DAT_1833937b8 << 0x17 | _DAT_1833937b8 >> 0x29;
  _DAT_183393818 = (_DAT_183393818 ^ uVar2) - 0xd4 ^ 0xc03c8e076bab5648;
  _DAT_1833938d0 = (_DAT_183393730 * -0x6570c789df0d6175 ^ _DAT_183393818) + uVar2 ^ _DAT_183393818;
  _DAT_183393730 = 0x2c;
  uVar2 = (_DAT_1833938c8 ^ _DAT_1808fb740) + _DAT_183393720 + 0x84222315;
  uVar3 = (_DAT_183393720 ^ _UNK_1808fb748) + _DAT_1833938c8 + 0xd4;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833938c8 ^ _DAT_1808fb740;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183393720 ^ _UNK_1808fb748;
  _DAT_183393818 =
       func_0x00018df0af70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833938c8 + 0xd4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393720 + 0x84222315));
  _DAT_183393850 = _DAT_1833938e8 ^ _DAT_183393820 ^ 0x104;
  _DAT_1833937a8 = (_DAT_1833937a8 ^ _DAT_183393820) + 0x104 ^ 0x11205111de7a656a;
  _DAT_1833938f0 = (_DAT_1833938f0 * -0x59afbba4350ba845 ^ _DAT_1833937a8) + _DAT_183393820;
  _DAT_183393750 = _DAT_1833938f0 ^ _DAT_1833937a8;
  _DAT_1833938b0 = 4;
  uVar2 = (_DAT_183393780 ^ _DAT_182419d10) + _DAT_1833937e0 + 0x84222321;
  uVar3 = (_DAT_1833937e0 ^ _UNK_182419d18) + _DAT_183393780 + 0x2c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183393780 ^ _DAT_182419d10;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833937e0 ^ _UNK_182419d18;
  _DAT_183393848 =
       func_0x00018df0af70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183393780 + 0x2c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833937e0 + 0x84222321));
  uVar2 = _DAT_183393848 & 0x3ffffffffff;
  _DAT_183393708 = _DAT_183393700 ^ uVar2 ^ 0x30;
  _DAT_183393878 = (_DAT_183393780 ^ uVar2) + 0x30 ^ 0x3d92d4fff1f0f18a;
  _DAT_183393780 = (_DAT_183393780 * -0x151b1877f998203f ^ _DAT_183393878) + uVar2;
  _DAT_183393878 = _DAT_183393780 ^ _DAT_183393878;
  _DAT_183393840 = 0x30;
  _DAT_183393770 = func_0x00018df0af70(_DAT_183393858 ^ 0xffe1007c2affe194);
  _DAT_1833938b8 = (_DAT_1833938b8 ^ _DAT_183393770) - 8 ^ 0x285c1c6ca4478dfe;
  _DAT_183393710 = (_DAT_183393710 * -0x196696c7397138b ^ _DAT_1833938b8) + _DAT_183393770;
  _DAT_183393828 = _DAT_183393710 ^ _DAT_1833938b8;
  _DAT_1833937f0 = 0xf8;
  uVar2 = (~_DAT_1833938e8 + 9) * 0x8422240d;
  uVar2 = (uVar2 | _DAT_1833937b8) + (uVar2 & _DAT_1833937b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183393810 = func_0x00018df0af70((uVar2 | 0x8422231d) + (ulonglong)((uint)uVar2 & 0x8422231d))
  ;
  uVar3 = _UNK_182419d28;
  uVar2 = _DAT_182419d20;
  uVar1 = _DAT_183393810 * 0x3bc619e4770baef5;
  _DAT_183393738 = _DAT_183393808 ^ uVar1 ^ 0x38;
  _DAT_183393790 = (_DAT_183393790 ^ uVar1) + 0x38 ^ 0x26034c80b7ab8c65;
  _DAT_183393798 = (_DAT_183393798 * -0x47c2bab16363dc1f ^ _DAT_183393790) + uVar1;
  _DAT_1833938e0 = _DAT_183393798 ^ _DAT_183393790;
  _DAT_183393800 = 0x38;
  uVar1 = (_DAT_183393830 ^ _DAT_182419d20) + _DAT_183393870 + 0x842223ce;
  uVar4 = (_DAT_183393870 ^ _UNK_182419d28) + _DAT_183393830 + 0xdc;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183393830 ^ _DAT_182419d20;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183393870 ^ _UNK_182419d28;
  _DAT_183393760 =
       func_0x00018df0af70((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183393830 + 0xdc) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183393870 + 0x842223ce));
  _DAT_183393800 = _DAT_1833938c0 ^ _DAT_183393760 ^ 0x1c7;
  _DAT_183393700 = (_DAT_183393700 ^ _DAT_183393760) + 0x1c7 ^ 0xb4a3b153bed1039e;
  _DAT_183393818 = (_DAT_183393818 * 0x38ea1aae90fd85f1 ^ _DAT_183393700) + _DAT_183393760;
  _DAT_183393808 = _DAT_183393818 ^ _DAT_183393700;
  _DAT_1833937c8 = 199;
  uVar1 = (_DAT_1833937a0 ^ uVar2) + _DAT_183393730 + 0x842223ce;
  uVar4 = (_DAT_183393730 ^ uVar3) + _DAT_1833937a0 + 0xdc;
  uVar2 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833937a0 ^ uVar2;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183393730 ^ uVar3;
  _DAT_1833938e0 =
       func_0x00018df0af70((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833937a0 + 0xdc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183393730 + 0x842223ce));
  _DAT_1833938b8 = (_DAT_1833938b8 ^ _DAT_1833938e0) + 200 ^ 0x2adf61c055288cfd;
  _DAT_183393898 = (_DAT_183393898 * 0xd5df9f216edf415 ^ _DAT_1833938b8) + _DAT_1833938e0;
  _DAT_183393740 = _DAT_183393898 ^ _DAT_1833938b8;
  _DAT_183393808 = 200;
  _DAT_183393760 = func_0x00018df0af70(_DAT_183393710 ^ 0x1cff837dffdd6c);
  uVar2 = _DAT_183393760 ^ 0x90;
  _DAT_183393888 = _DAT_183393758 ^ uVar2 ^ 199;
  _DAT_1833938a8 = (_DAT_1833938a8 ^ uVar2) + 199 ^ 0x7ce7faaa0b8e05be;
  _DAT_183393728 = (_DAT_183393728 * 0x74b4672412ef3dd9 ^ _DAT_1833938a8) + uVar2;
  _DAT_183393790 = _DAT_183393728 ^ _DAT_1833938a8;
  _DAT_1833938e0 = 199;
  uVar2 = func_0x00018df0af70(_DAT_183393748 ^ 0x20ff8410ffddd2);
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar2;
  _DAT_183393830 = (_DAT_183393830 ^ uVar2) + 0x14 ^ 0x3d6d0a8a93e5eba6;
  _DAT_183393860 = (_DAT_183393860 * -0x419c02ab348f8939 ^ _DAT_183393830) + uVar2;
  _DAT_1833938a0 = _DAT_183393860 ^ _DAT_183393830;
  _DAT_183393788 = 0x14;
  _DAT_183393848 = func_0x00018df0af70(_DAT_1833937e0 ^ 0x1f007c0cffdd90);
  uVar2 = _DAT_183393848 - (_DAT_183393848 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183393848) & 0x7fffffffffffffff;
  _DAT_1833938e0 = _DAT_1833937f8 ^ uVar2 ^ 0x30;
  _DAT_183393840 = (_DAT_183393840 ^ uVar2) + 0x30 ^ 0x98eba1ca3d94b804;
  _DAT_183393770 = (_DAT_183393770 * -0x20b8bc13ba77b9b1 ^ _DAT_183393840) + uVar2;
  _DAT_183393760 = _DAT_183393770 ^ _DAT_183393840;
  _DAT_1833937f8 = 0x30;
  uVar2 = ((_DAT_183393818 ^ 0x84222315) + (ulonglong)((uint)_DAT_183393818 & 0x84222315) * 2) *
          -_DAT_183393740;
  uVar2 = (uVar2 | 0x30) + (uVar2 & 0x30);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183393738 = func_0x00018df0af70((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = _DAT_183393738 & 0x7fffffffffffffff;
  _DAT_1833938d8 = _DAT_183393708 ^ uVar2 ^ 0x30;
  _DAT_183393728 = (_DAT_183393728 ^ uVar2) + 0x30 ^ 0x7ef8cebeb4a22c01;
  _DAT_183393840 = (_DAT_183393840 * -0xe56e31627f6adcd ^ _DAT_183393728) + uVar2;
  _DAT_1833937e8 = _DAT_183393840 ^ _DAT_183393728;
  _DAT_1833937a0 = 0x30;
  uVar3 = (ulonglong)*(byte *)(unaff_RBP + 0x90);
  uVar2 = (~_DAT_1833937b8 + 0x31) *
          ((uVar3 ^ 0x84222325 ^ _DAT_183393760) +
          (ulonglong)((uint)_DAT_183393760 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_183393848) + (uVar2 & _DAT_183393848);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833938c8 =
       func_0x00018df0af70((uVar3 ^ 0x84222315 | uVar2) +
                           (ulonglong)((uint)(uVar3 ^ 0x84222315) & (uint)uVar2));
  _DAT_183393720 = uVar3 | 0x30;
  uVar3 = uVar3 ^ ((_DAT_1833938c8 ^ _DAT_183393720) & 0xffffffff) * (ulonglong)_DAT_182419d30 +
                  ((ulonglong)_DAT_182419d40 * ((_DAT_1833938c8 ^ _DAT_183393720) & 0xffffffff) +
                   (_DAT_1833938c8 >> 0x20) * (ulonglong)_DAT_182419d30 << 0x20);
  _DAT_1833937f0 = (_DAT_1833937f0 ^ uVar3) + _DAT_183393720 ^ 0xda79bf8ebbf6f1b7;
  _DAT_183393850 = (_DAT_183393850 * -0x4ba42a92fd4bd0a5 ^ _DAT_1833937f0) + uVar3;
  _DAT_183393748 = _DAT_183393850 ^ _DAT_1833937f0;
  *(char *)(in_RAX + -1) = (char)_DAT_183393720;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva dee63f1 (image 18dee63f1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dee68fa */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dee63f1(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_RBP;
  ulonglong uVar5;
  ulonglong unaff_R14;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  ulonglong uVar8;
  undefined1 auVar10 [16];
  uint uVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar3 = uVar1 ^ 0x84222325;
  plVar2 = *(longlong **)(unaff_RBP + 0x38);
  uVar5 = (unaff_R14 - _DAT_1833937a0) * ((_DAT_1833937d8 ^ uVar3) + (uVar3 & _DAT_1833937d8) * 2);
  uVar5 = (uVar5 | _DAT_1833937d8) + (uVar5 & _DAT_1833937d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1833938c8 = func_0x00018df0af70((uVar3 ^ unaff_R14 | uVar5) + (uVar5 & (uVar3 ^ unaff_R14)));
  uVar7 = (uint)(uVar1 >> 0x20);
  auVar12._8_4_ = (int)uVar1;
  auVar12._0_8_ = uVar1;
  auVar12._12_4_ = uVar7;
  uVar9 = (uint)(unaff_R14 >> 0x20);
  auVar10._8_4_ = (int)unaff_R14;
  auVar10._0_8_ = unaff_R14;
  auVar10._12_4_ = uVar9;
  auVar17._8_4_ = 0xffffffff;
  auVar17._0_8_ = 0xffffffffffffffff;
  auVar17._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar12 & auVar10,0);
  uVar15 = SUB168(auVar12 & auVar10,0);
  uVar13 = SUB164(auVar12 ^ auVar10,0);
  uVar6 = SUB164(auVar12 ^ auVar17,0);
  uVar16 = SUB168(auVar12 ^ auVar17,0);
  uVar8 = unaff_R14 ^ _DAT_18001a710;
  uVar5 = uVar1 * unaff_R14 ^ _DAT_1833938c8;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar5;
  uVar14 = SUB164(auVar12 | auVar10,0);
  _DAT_1833937c8 =
       (((ulonglong)_DAT_182419fb0 * (ulonglong)uVar6 +
         ((ulonglong)_DAT_18241a000 * (ulonglong)uVar6 +
          (uVar16 >> 0x20) * (ulonglong)_DAT_182419fb0 << 0x20) +
         (ulonglong)uVar13 * (ulonglong)_DAT_182419fe0 +
         ((ulonglong)_DAT_182419ff0 * (ulonglong)uVar13 +
          (SUB168(auVar12 ^ auVar10,0) >> 0x20) * (ulonglong)_DAT_182419fe0 << 0x20) +
        (ulonglong)_DAT_182419fc0 * (ulonglong)uVar11 +
        ((ulonglong)_DAT_182419fd0 * (ulonglong)uVar11 +
         (uVar15 >> 0x20) * (ulonglong)_DAT_182419fc0 << 0x20) +
        ((ulonglong)_DAT_182419fa0 * (unaff_R14 & 0xffffffff) +
         (ulonglong)_DAT_182419f90 * (ulonglong)uVar9 << 0x20) +
        (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_182419f90 +
        ((ulonglong)_DAT_182419f80 * (uVar1 & 0xffffffff) +
         (ulonglong)_DAT_182419f70 * (ulonglong)uVar7 << 0x20) +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_182419f70) -
       ((uVar8 & 0xffffffff) * (ulonglong)_DAT_18241a0b0 +
        ((ulonglong)_DAT_18241a0c0 * (uVar8 & 0xffffffff) +
         (uVar8 >> 0x20) * (ulonglong)_DAT_18241a0b0 << 0x20) +
       (ulonglong)uVar6 * (ulonglong)_DAT_18241a090 +
       ((ulonglong)_DAT_18241a0a0 * (ulonglong)uVar6 + (uVar16 >> 0x20) * (ulonglong)_DAT_18241a090
       << 0x20) +
       (ulonglong)uVar14 * (ulonglong)_DAT_18241a080 +
       ((SUB168(auVar12 | auVar10,0) >> 0x20) * (ulonglong)_DAT_18241a080 +
        (ulonglong)_DAT_18241a070 * (ulonglong)uVar14 << 0x20) +
       (ulonglong)uVar11 * (ulonglong)_DAT_18241a080 +
       ((uVar15 >> 0x20) * (ulonglong)_DAT_18241a080 + (ulonglong)uVar11 * (ulonglong)_DAT_18241a070
       << 0x20) +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_18241a040 +
        (ulonglong)uVar7 * (ulonglong)_DAT_18241a030 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_18241a030 +
       ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_18241a060 +
        (ulonglong)uVar9 * (ulonglong)_DAT_18241a050 << 0x20) +
       (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_18241a050)) + 0x7feb88f39284606f;
  _DAT_183393758 = _DAT_1833937c8 ^ uVar5;
  _DAT_183393858 = (_DAT_183393858 ^ uVar5) + _DAT_1833937c8 ^ 0xe986a17557b5405e;
  _DAT_183393778 = (_DAT_183393778 * 0x2f50ea3122e41cd1 ^ _DAT_183393858) + uVar5;
  _DAT_183393748 = _DAT_183393778 ^ _DAT_183393858;
  lVar4 = unaff_RBP + -0x30;
  FUN_18414b520(lVar4);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar4 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(unaff_RBP + 0x18),lVar4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva deef151 (image 18deef151) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deef151(undefined4 param_1)

{
  int iVar1;
  longlong unaff_RBP;
  int unaff_EDI;
  longlong *unaff_R12;
  undefined8 unaff_R13;
  
  *(undefined4 *)(unaff_RBP + 0x60) = param_1;
  (**(code **)(*unaff_R12 + 0x6f8))();
  *(undefined4 *)(unaff_RBP + 0x70) = 6;
  *(undefined8 *)(unaff_RBP + 0x60) = unaff_R13;
  *(int *)(unaff_RBP + 0x68) = unaff_EDI + 2;
  iVar1 = (**(code **)(*unaff_R12 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva def6c02 (image 18def6c02) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18def6c02(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x18) = uVar2;
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



// ===== continuation @ rva deecac0 (image 18deecac0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18deecac0(void)

{
  int iVar1;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  longlong *unaff_R12;
  undefined8 unaff_R13;
  undefined4 unaff_R14D;
  
  *(undefined4 *)(unaff_RBP + 0x40) = unaff_ESI;
  *(undefined4 *)(unaff_RBP + 0x60) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x68) = unaff_R13;
  *(undefined4 *)(unaff_RBP + 0x70) = unaff_R14D;
  iVar1 = (**(code **)(*unaff_R12 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x70) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x70)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva df11a0a (image 18df11a0a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df11a0a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_182420138)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva df11a16 (image 18df11a16) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df11a16(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva df11a33 (image 18df11a33) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df11a33(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_182420148)();
  return;
}



// ===== continuation @ rva df11a3c (image 18df11a3c) =====

void FUN_18df11a3c(void)

{
  return;
}



// ===== continuation @ rva df11a3d (image 18df11a3d) =====

undefined4 * FUN_18df11a3d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva df0d6d1 (image 18df0d6d1) =====

void FUN_18df0d6d1(void)

{
  return;
}



// ===== continuation @ rva df0d512 (image 18df0d512) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df0d512(void)

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



// ===== continuation @ rva df10771 (image 18df10771) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df10771(void)

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



// ===== continuation @ rva df10364 (image 18df10364) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df10364(void)

{
  int iVar1;
  int unaff_ESI;
  longlong *unaff_R13;
  int iStack0000000000000038;
  ulonglong uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  longlong in_stack_00000078;
  
  uStack0000000000000050 = 8;
  uStack0000000000000048 = 0x38;
  uStack0000000000000040 =
       (ulonglong)
       (uint)(int)(char)((ulonglong)(in_stack_00000078 << ((char)unaff_ESI * '\b' & 0x3fU)) >> 0x38)
  ;
  iStack0000000000000038 = unaff_ESI;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(iStack0000000000000038 < 0 || iVar1 <= iStack0000000000000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva df1104b (image 18df1104b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df1104b(void)

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



// ===== continuation @ rva df0fc2a (image 18df0fc2a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df0fc2a(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva df112b5 (image 18df112b5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df112b5(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva df0dad1 (image 18df0dad1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df0dad1(void)

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



// ===== continuation @ rva df0d948 (image 18df0d948) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df0d948(void)

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



// ===== continuation @ rva df0d75d (image 18df0d75d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df0d75d(void)

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



// ===== continuation @ rva df157c3 (image 18df157c3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df157c3(void)

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



// ===== continuation @ rva df1576f (image 18df1576f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df1576f(void)

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



// ===== continuation @ rva df15935 (image 18df15935) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df15935(void)

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



// ===== continuation @ rva df158e1 (image 18df158e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df158e1(void)

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



// ===== continuation @ rva df16528 (image 18df16528) =====

void FUN_18df16528(void)

{
  return;
}



// ===== continuation @ rva df15db0 (image 18df15db0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df15db0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182421628)();
  return;
}



// ===== continuation @ rva df15cd0 (image 18df15cd0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df15cd0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_18419fe70();
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



// ===== continuation @ rva df15c7c (image 18df15c7c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df15c7c(void)

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



// ===== continuation @ rva df164f3 (image 18df164f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df164f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1824215d8)();
  return;
}



// ===== continuation @ rva df16227 (image 18df16227) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df16227(void)

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



// ===== continuation @ rva df16262 (image 18df16262) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df16262(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva df15c0f (image 18df15c0f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df15c0f(void)

{
  FUN_190ddfc90();
  (*_DAT_1824213c8)();
  return;
}



// ===== continuation @ rva df15970 (image 18df15970) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df15970(void)

{
  FUN_190ddfc90();
  (*_DAT_182421478)();
  return;
}



// ===== continuation @ rva df18f7d (image 18df18f7d) =====

void FUN_18df18f7d(void)

{
  return;
}



// ===== continuation @ rva df166a0 (image 18df166a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df166a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182422228)();
  return;
}



// ===== continuation @ rva df18b52 (image 18df18b52) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df18b52(void)

{
  (*_DAT_182422568)();
  return;
}



// ===== continuation @ rva df18f91 (image 18df18f91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df18f91(void)

{
  (*_DAT_182422248)();
  return;
}



// ===== continuation @ rva df17fc9 (image 18df17fc9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df17fc9(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int iStack0000000000000078;
  
  iStack0000000000000078 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iStack0000000000000078 < 0 || iVar1 <= iStack0000000000000078) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva df18db6 (image 18df18db6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df18db6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182421fb8)();
  return;
}



// ===== continuation @ rva df185c9 (image 18df185c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df185c9(void)

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



// ===== continuation @ rva df176ec (image 18df176ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df176ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_182421fd8)();
  return;
}



// ===== continuation @ rva df1768e (image 18df1768e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df1768e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182422188)();
  return;
}



// ===== continuation @ rva df16eb8 (image 18df16eb8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df16eb8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182421938)();
  return;
}



// ===== continuation @ rva df168c9 (image 18df168c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df168c9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182422258)();
  return;
}



// ===== continuation @ rva df18720 (image 18df18720) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df18720(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182421ba8)();
  return;
}



// ===== continuation @ rva df184a6 (image 18df184a6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df184a6(void)

{
  FUN_190dd72e0();
  (*_DAT_182421f28)();
  return;
}



// ===== continuation @ rva df18e4b (image 18df18e4b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df18e4b(void)

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



// ===== continuation @ rva df1b6f4 (image 18df1b6f4) =====

void FUN_18df1b6f4(void)

{
  return;
}



// ===== continuation @ rva df1b55d (image 18df1b55d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df1b55d(void)

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



// ===== continuation @ rva df1ff07 (image 18df1ff07) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df1ff07(void)

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



// ===== continuation @ rva df1dbbc (image 18df1dbbc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18df201e0(void)

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



// ===== continuation @ rva df1d33b (image 18df1d33b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18df201e0(void)

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



// ===== continuation @ rva df1ea13 (image 18df1ea13) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df1ea13(void)

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



// ===== continuation @ rva df1e82a (image 18df1e82a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df1e82a(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190ddfc90(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xc5a,
                0x38);
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



// ===== continuation @ rva df1bc12 (image 18df1bc12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df1bc12(void)

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



// ===== continuation @ rva df1d1e4 (image 18df1d1e4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df1d1e4(void)

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



// ===== continuation @ rva df1cf88 (image 18df1cf88) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df1cf88(void)

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



// ===== continuation @ rva df1b60c (image 18df1b60c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df1b60c(void)

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



// ===== continuation @ rva df24902 (image 18df24902) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df24902(void)

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



// ===== continuation @ rva df248ae (image 18df248ae) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df248ae(void)

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



// ===== continuation @ rva df25741 (image 18df25741) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df25741(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1824249d8)();
  return;
}



// ===== continuation @ rva df256ae (image 18df256ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df256ae(void)

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



// ===== continuation @ rva df25775 (image 18df25775) =====

void FUN_18df25775(void)

{
  return;
}



// ===== continuation @ rva df25593 (image 18df25593) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df25593(void)

{
  FUN_190de3220();
  (*_DAT_182424b58)();
  return;
}



// ===== continuation @ rva df24f67 (image 18df24f67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df24f67(void)

{
  FUN_190dd72e0();
  (*_DAT_1824247a8)();
  return;
}



// ===== continuation @ rva df2506c (image 18df2506c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df2506c(void)

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



// ===== continuation @ rva df25496 (image 18df25496) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df25496(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_182424898)();
  return;
}



// ===== continuation @ rva df2495b (image 18df2495b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df2495b(void)

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



// ===== continuation @ rva df25784 (image 18df25784) =====

void FUN_18df25784(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df24eab (image 18df24eab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df24eab(void)

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



// ===== continuation @ rva df27896 (image 18df27896) =====

void FUN_18df27896(void)

{
  return;
}



// ===== continuation @ rva df258fc (image 18df258fc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df258fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182424e28)();
  return;
}



// ===== continuation @ rva df28268 (image 18df28268) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df28268(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182425198)();
  return;
}



// ===== continuation @ rva df26605 (image 18df26605) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df26605(void)

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



// ===== continuation @ rva df283d4 (image 18df283d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df283d4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182425308)();
  return;
}



// ===== continuation @ rva df274d0 (image 18df274d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df274d0(void)

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



// ===== continuation @ rva df2843a (image 18df2843a) =====

void FUN_18df2843a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva df25aad (image 18df25aad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df25aad(void)

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



// ===== continuation @ rva df281cb (image 18df281cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df281cb(void)

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



// ===== continuation @ rva df264aa (image 18df264aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df264aa(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182424cb8)();
  return;
}



// ===== continuation @ rva df25d92 (image 18df25d92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df25d92(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_1824250a8)();
  return;
}



// ===== continuation @ rva df2659f (image 18df2659f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18df2659f(void)

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



// ===== continuation @ rva df27275 (image 18df27275) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18df27275(void)

{
  (*_DAT_1824259b8)();
  return;
}



