// ===== continuation @ rva 1010cd2a (image 19010cd2a) =====

void FUN_19010cd2a(void)

{
  return;
}



// ===== continuation @ rva 100e2a2b (image 1900e2a2b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001900e2a81 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1900e2a2b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 100fb6c9 (image 1900fb6c9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001900fb6e0 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1900fb6c9(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 100fcf0c (image 1900fcf0c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900fcf0c(void)

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



// ===== continuation @ rva 100e2bb3 (image 1900e2bb3) =====

void FUN_1900e2bb3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 10107a8a (image 190107a8a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190107a8a(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  int in_stack_00000068;
  undefined8 in_stack_00000090;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000068);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000090,lVar3,2);
  uVar5 = (ulonglong)(uint)(int)cVar1;
  _DAT_18344c2d8 = func_0x00019010cf10(_DAT_18344c278 ^ 0xffa9fff25b001ff3);
  uVar4 = (ulonglong)(~(uint)_DAT_18344c2d8 & 0x77a8db27) ^ 0x77a8db27;
  _DAT_18344c2a8 = (_DAT_18344c2a8 ^ uVar4) + 0xf7aaffff ^ 0x2034207c0d6e68b;
  _DAT_18344c140 = (_DAT_18344c140 * -0x274032b7831b9957 ^ _DAT_18344c2a8) + uVar4;
  _DAT_18344c228 = _DAT_18344c140 ^ _DAT_18344c2a8;
  _DAT_18344c188 = 0xf7aaffff;
  uVar4 = (_DAT_18344c118 ^ _DAT_182be77c0) + _DAT_18344c1f0 + 0xacf7be28;
  uVar6 = (_DAT_18344c1f0 ^ _UNK_182be77c8) + _DAT_18344c118 + 0x94175fa7;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18344c118 ^ _DAT_182be77c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18344c1f0 ^ _UNK_182be77c8;
  _DAT_18344c1a0 =
       func_0x00019010cf10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18344c118 + 0x94175fa7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344c1f0 + 0xacf7be28));
  uVar4 = (_DAT_18344c1a0 ^ 0x179f393e88cc467b) * -0x39ccd93d7fd32b87;
  _DAT_18344c108 = (_DAT_18344c108 ^ uVar4) + 0xbcc2c2aa ^ 0x200fa4a50cbb188b;
  _DAT_18344c280 = (_DAT_18344c280 * 0x2454cb51dfbee489 ^ _DAT_18344c108) + uVar4;
  _DAT_18344c1c8 = _DAT_18344c280 ^ _DAT_18344c108;
  _DAT_18344c1a8 = 0xbcc2c2aa;
  uVar4 = (_DAT_18344c220 ^ _DAT_182be77d0) + _DAT_18344c240 + 0x84222325;
  uVar6 = (_DAT_18344c240 ^ _UNK_182be77d8) + _DAT_18344c220 + 0x8b46552a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18344c220 ^ _DAT_182be77d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18344c240 ^ _UNK_182be77d8;
  _DAT_18344c2f0 =
       func_0x00019010cf10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18344c220 + 0x8b46552a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344c240 + 0x84222325));
  uVar4 = (_DAT_18344c2f0 & 0x7fffffffffff) - (_DAT_18344c2f0 >> 1 & 0x155555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18344c2f0 & 0x7fffffffffff;
  _DAT_18344c130 = (_DAT_18344c130 ^ uVar4) - 0x8b46552a ^ 0x3a993c3f5d9aa68;
  _DAT_18344c1f0 = (_DAT_18344c1f0 * 0x56ea412247c839c7 ^ _DAT_18344c130) + uVar4;
  _DAT_18344c250 = _DAT_18344c1f0 ^ _DAT_18344c130;
  _DAT_18344c2a0 = 0x74b9aad6;
  uVar4 = (_DAT_18344c1e0 ^ _DAT_182be77e0) + _DAT_18344c210 + 0x842223da;
  uVar6 = (_DAT_18344c210 ^ _UNK_182be77e8) + _DAT_18344c1e0 + 0xfabce096;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18344c1e0 ^ _DAT_182be77e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18344c210 ^ _UNK_182be77e8;
  _DAT_18344c1e0 =
       func_0x00019010cf10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18344c1e0 + 0xfabce096) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344c210 + 0x842223da));
  _DAT_18344c1c0 = _DAT_18344c188 ^ _DAT_18344c230 ^ 0xfabce195;
  _DAT_18344c188 = (_DAT_18344c188 ^ _DAT_18344c230) + 0xfabce195 ^ 0x41abbea7d315dcec;
  _DAT_18344c298 = (_DAT_18344c298 * 0x22b2044656bc8343 ^ _DAT_18344c188) + _DAT_18344c230;
  _DAT_18344c1a8 = _DAT_18344c298 ^ _DAT_18344c188;
  _DAT_18344c130 = 0xfabce195;
  uVar4 = (~_DAT_18344c1c8 + 0x404db589) *
          ((_DAT_18344c168 ^ 0x842223da) + (ulonglong)((uint)_DAT_18344c168 & 0x842223da) * 2);
  uVar4 = (uVar4 | _DAT_18344c178) + (uVar4 & _DAT_18344c178);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18344c120 = func_0x00019010cf10((uVar4 | 0xc46f9652) + (ulonglong)((uint)uVar4 & 0xc46f9652))
  ;
  _DAT_18344c150 = _DAT_18344c2c8 ^ _DAT_18344c240 ^ 0x404db687;
  _DAT_18344c290 = (_DAT_18344c290 ^ _DAT_18344c240) + 0x404db687 ^ 0x147be96604608fb4;
  _DAT_18344c1a0 = (_DAT_18344c1a0 * -0x267637e41f8b705 ^ _DAT_18344c290) + _DAT_18344c240;
  _DAT_18344c210 = _DAT_18344c1a0 ^ _DAT_18344c290;
  _DAT_18344c2f0 = 0x404db687;
  uVar4 = (_DAT_18344c230 ^ _DAT_182be77f0) + _DAT_18344c178 + 0xc46f95a2;
  uVar6 = (_DAT_18344c178 ^ _UNK_182be77f8) + _DAT_18344c230 + 0xbfb24a78;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18344c230 ^ _DAT_182be77f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18344c178 ^ _UNK_182be77f8;
  _DAT_18344c1c0 =
       func_0x00019010cf10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18344c230 + 0xbfb24a78) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344c178 + 0xc46f95a2));
  uVar4 = (_DAT_18344c1c0 ^ 0x3026c3ec3e0e9548) & 0x7fffffffffffffff;
  _DAT_18344c2b8 = _DAT_18344c1a8 ^ uVar4 ^ 0x1000000ff;
  _DAT_18344c138 = (_DAT_18344c138 ^ uVar4) + 0x1000000ff ^ 0x57150903b35f628a;
  _DAT_18344c118 = (_DAT_18344c118 * 0x46ec885537a35ce5 ^ _DAT_18344c138) + uVar4;
  _DAT_18344c1a0 = _DAT_18344c118 ^ _DAT_18344c138;
  _DAT_18344c218 = 0xff;
  uVar4 = func_0x00019010cf10(_DAT_18344c240 + 0xdff40b00039ff ^ 0xe3);
  uVar4 = (uVar4 ^ 0xffeaffff) * 0x69445e1c175bc4e9;
  _DAT_18344c1a0 = _DAT_18344c1c8 ^ uVar4 ^ 0x1b46dc2a9;
  _DAT_18344c2c0 = (_DAT_18344c2c0 ^ uVar4) + 0x1b46dc2a9 ^ 0xdf2280ec8c9dec9d;
  _DAT_18344c218 = (_DAT_18344c218 * -0x3395dec9bb2eb4af ^ _DAT_18344c2c0) + uVar4;
  _DAT_18344c188 = _DAT_18344c218 ^ _DAT_18344c2c0;
  _DAT_18344c2b8 = 0xb46dc2a9;
  uVar4 = (_DAT_18344c200 ^ _DAT_182be7800) + _DAT_18344c2d8 + 0x7388dcda;
  uVar6 = (_DAT_18344c2d8 ^ _UNK_182be7808) + _DAT_18344c200 + 0xbcc2c2aa;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18344c200 ^ _DAT_182be7800;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18344c2d8 ^ _UNK_182be7808;
  _DAT_18344c2e8 =
       func_0x00019010cf10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18344c200 + 0xbcc2c2aa) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344c2d8 + 0x7388dcda));
  _DAT_18344c158 =
       (_DAT_18344c158 ^ _DAT_18344c2e8 & 0x7fffffffffffffff) + 0x4b683d55 ^ 0xfce1911468ae0f44;
  _DAT_18344c2b0 =
       (_DAT_18344c2b0 * 0x5dacb87bfd3eae17 ^ _DAT_18344c158) +
       (_DAT_18344c2e8 & 0x7fffffffffffffff);
  _DAT_18344c1f0 = _DAT_18344c2b0 ^ _DAT_18344c158;
  _DAT_18344c280 = 0x4b683d55;
  uVar4 = (_DAT_18344c128 ^ _DAT_182be7810) + _DAT_18344c288 + 0xcf4a1e70;
  uVar6 = (_DAT_18344c288 ^ _UNK_182be7818) + _DAT_18344c128 + 0x69058554;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18344c128 ^ _DAT_182be7810;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18344c288 ^ _UNK_182be7818;
  _DAT_18344c1b0 =
       func_0x00019010cf10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18344c128 + 0x69058554) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344c288 + 0xcf4a1e70));
  uVar4 = _DAT_18344c1b0 >> 1 | _DAT_18344c1b0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18344c1b0;
  _DAT_18344c270 = (_DAT_18344c270 ^ uVar4) + 0xb46dc2a9 ^ 0x519cbcb398950e95;
  _DAT_18344c2e0 =
       ((_DAT_18344c208 ^ uVar4 ^ 0xb46dc2a9) * 0x3f54d9d5f871fe2b ^ _DAT_18344c270) + uVar4 ^
       _DAT_18344c270;
  _DAT_18344c208 = 0xb46dc2a9;
  _DAT_18344c198 = func_0x00019010cf10(_DAT_18344c258 + 0x1d007c24ffe1ffU ^ 0xa5);
  _DAT_18344c1c8 = _DAT_18344c1c8 ^ _DAT_18344c198 ^ 0x305f3a9b90a34f35;
  _DAT_18344c100 = (_DAT_18344c100 * 0x5d1a355725ae1055 ^ _DAT_18344c1c8) + _DAT_18344c198;
  _DAT_18344c1f8 = _DAT_18344c100 ^ _DAT_18344c1c8;
  _DAT_18344c258 = 0;
  uVar4 = (_DAT_18344c158 ^ 0x842223da) + _DAT_18344c1f8 + 0x842223da;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18344c158 ^ 0x842223da;
  uVar6 = ((_DAT_18344c1f8 + _DAT_18344c158) * 0x2000 | _DAT_18344c1f8 + _DAT_18344c158 >> 0x33) ^
          _DAT_18344c1f8;
  _DAT_18344c288 =
       func_0x00019010cf10((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_18344c158 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344c1f8 + 0x842223da));
  uVar4 = _DAT_18344c288 << 0xd | _DAT_18344c288 >> 0x33;
  _DAT_18344c2b8 = _DAT_18344c110 ^ uVar4 ^ 0xff;
  _DAT_18344c190 = (_DAT_18344c190 ^ uVar4) + 0xff ^ 0x79d51789f3c7455d;
  _DAT_18344c248 = (_DAT_18344c248 * -0x5e61b9f021a93d67 ^ _DAT_18344c190) + uVar4;
  _DAT_18344c240 = _DAT_18344c248 ^ _DAT_18344c190;
  _DAT_18344c100 = 0xff;
  uVar4 = func_0x00019010cf10(_DAT_18344c1e0 ^ 0x20ff7bdd005215);
  _DAT_18344c1d0 = (_DAT_18344c1d0 ^ uVar4 ^ 0xf7aaffff) + 0x8550000 ^ 0x744ef9087aa272e6;
  _DAT_18344c118 = (_DAT_18344c118 * 0x3185f9015afa1529 ^ _DAT_18344c1d0) + (uVar4 ^ 0xf7aaffff);
  _DAT_18344c1d0 = _DAT_18344c118 ^ _DAT_18344c1d0;
  _DAT_18344c210 = _DAT_18344c230 ^ 0x8550000;
  _DAT_18344c220 = 0x8550000;
  uVar4 = ((_DAT_18344c110 ^ 0x842223da) + (ulonglong)((uint)_DAT_18344c110 & 0x842223da) * 2) *
          -_DAT_18344c1a0;
  uVar4 = (uVar4 | _DAT_18344c1d8) + (uVar4 & _DAT_18344c1d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18344c200 = func_0x00019010cf10((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  _DAT_18344c150 = _DAT_18344c2b8 ^ _DAT_18344c200 ^ 0xff;
  _DAT_18344c158 = (_DAT_18344c158 ^ _DAT_18344c200) + 0xff ^ 0x2542cdd4ca1c70e;
  _DAT_18344c140 = (_DAT_18344c140 * 0xef14d269e945b69 ^ _DAT_18344c158) + _DAT_18344c200;
  _DAT_18344c2f8 = _DAT_18344c140 ^ _DAT_18344c158;
  _DAT_18344c130 = 0xff;
  uVar4 = (~_DAT_18344c240 + 0x100) *
          ((uVar5 ^ 0x84222325 ^ _DAT_18344c230) +
          (ulonglong)((uint)_DAT_18344c230 & (uint)(uVar5 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | _DAT_18344c2d8) + (uVar4 & _DAT_18344c2d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18344c228 =
       func_0x00019010cf10((uVar5 ^ 0x842223da | uVar4) +
                           (ulonglong)((uint)(uVar5 ^ 0x842223da) & (uint)uVar4));
  uVar4 = ~(ulonglong)((uint)_DAT_18344c228 ^ cVar1 * 0xff) & uVar5;
  uVar6 = uVar4 - ((uint)(uVar4 >> 1) & 0x55555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  _DAT_18344c1f0 = uVar5 & 0xff;
  _DAT_18344c1c0 = (_DAT_18344c1c0 ^ uVar4) + _DAT_18344c1f0 ^ 0x51d91a0c4ea19593;
  _DAT_18344c220 = (_DAT_18344c220 * -0x4839d01a00d39eed ^ _DAT_18344c1c0) + uVar4 ^ _DAT_18344c1c0;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar2 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1010cb28 (image 19010cb28) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19010cb28(void)

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



// ===== continuation @ rva 10104fb6 (image 190104fb6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190104fb6(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000be;
  
  uStack00000000000000be = in_stack_00000070;
  (**(code **)(*unaff_RSI + 0x680))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1010c8e8 (image 19010c8e8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19010c8e8(void)

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



// ===== continuation @ rva 100fd655 (image 1900fd655) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900fd655(void)

{
  byte bVar1;
  ulonglong uVar2;
  uint unaff_EBP;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong in_stack_00000040;
  longlong lStack0000000000000090;
  
  lStack0000000000000090 = in_stack_00000040;
  auVar5._8_8_ = _UNK_180062bf8;
  auVar5._0_8_ = (ulonglong)unaff_EBP ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_182be7400,_DAT_1800170c0);
  uVar3 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar3 + _DAT_18344c290;
  if (auVar6._4_4_ < 0) {
    uVar2 = _DAT_18344c2c8 ^ uVar3;
  }
  _DAT_18344c2f8 = func_0x00019010cf10(SUB161(auVar5 ^ _DAT_182be7400,5) ^ uVar2);
  uVar9 = unaff_EBP & _DAT_18001a990;
  uVar7 = unaff_EBP | _DAT_18001a990;
  uVar4 = unaff_EBP ^ _DAT_18001a990;
  lVar8 = ((ulonglong)_DAT_182be7460 * (ulonglong)unaff_EBP << 0x20) +
          (ulonglong)_DAT_182be7450 * (ulonglong)unaff_EBP;
  uVar2 = _DAT_18344c2f8 - (_DAT_18344c2f8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = (uint)bVar1 + (uint)bVar1 ^ _DAT_18344c2f8;
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
  uVar2 = ((((ulonglong)_DAT_182be7420 * (ulonglong)uVar4 << 0x20) +
            (ulonglong)_DAT_182be7410 * (ulonglong)uVar4 +
            ((ulonglong)uVar9 * (ulonglong)_DAT_182be7420 << 0x20 |
            (ulonglong)uVar9 * (ulonglong)_DAT_182be7410) + (ulonglong)unaff_EBP + lVar8 +
           ((ulonglong)_DAT_182be7440 * (ulonglong)uVar7 << 0x20) +
           (ulonglong)_DAT_182be7430 * (ulonglong)uVar7) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_182be74e0 << 0x20) +
           (ulonglong)_DAT_182be74d0 * (ulonglong)uVar4 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_182be74c0 << 0x20) +
           (ulonglong)_DAT_182be74b0 * (ulonglong)uVar7 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_182be74a0 << 0x20 |
           (ulonglong)_DAT_182be7490 * (ulonglong)uVar9) +
           ((ulonglong)unaff_EBP * (ulonglong)_DAT_182be7480 << 0x20) +
           (ulonglong)_DAT_182be7470 * (ulonglong)unaff_EBP + lVar8)) + 0x13d2fb7851417b37;
  _DAT_18344c260 = _DAT_18344c140 ^ uVar3 ^ uVar2;
  _DAT_18344c130 = (_DAT_18344c130 ^ uVar3) + uVar2 ^ 0xb243d5a675434c84;
  _DAT_18344c2d0 = (_DAT_18344c2d0 * 0x5f5e73d915150163 ^ _DAT_18344c130) + uVar3;
  _DAT_18344c2c0 = _DAT_18344c2d0 ^ _DAT_18344c130;
  _DAT_18344c228 = uVar2 & 0xffffffff;
  switch(lStack0000000000000090 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 100fbe5e (image 1900fbe5e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001900fbe79 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1900fbe5e(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva ffb948d (image 18ffb948d) =====

void FUN_18ffb948d(void)

{
  return;
}



// ===== continuation @ rva ffb0c42 (image 18ffb0c42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ffb0c42(void)

{
  FUN_190ddce00();
  (*_DAT_182b913f8)();
  return;
}



// ===== continuation @ rva 1001a106 (image 19001a106) =====

void FUN_19001a106(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ffbaebc (image 18ffbaebc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ffbaebc(void)

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



// ===== continuation @ rva ffb0d16 (image 18ffb0d16) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ffb0d16(void)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar16;
  ulonglong uVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulonglong uVar39;
  ulonglong in_stack_00000060;
  longlong in_stack_000000a8;
  undefined1 auVar40 [16];
  
  uVar16 = _DAT_182b86f28;
  uVar6 = _DAT_182b86f20;
  uVar8 = _DAT_182b86f20 | 0x6b541cd8e92c8f49;
  auVar24._8_8_ = 0xfca9543289d8364f;
  auVar24._0_8_ = _DAT_182b86f28 ^ 0x84222325;
  auVar12 = pshufb(auVar24 ^ _DAT_182b9f430,_DAT_1800170c0);
  uVar7 = auVar12._8_8_ + auVar12._0_8_;
  uVar3 = uVar7 + _DAT_183447bf8;
  if (auVar12._4_4_ < 0) {
    uVar3 = _DAT_183447d00 ^ uVar7;
  }
  _DAT_183447e38 = func_0x00019001a2c0(SUB161(auVar24 ^ _DAT_182b9f430,5) ^ uVar3);
  uVar9 = uVar16 + 0xfca9543289d8364f + (uVar16 & 0xfca9543289d8364f) * -2;
  _DAT_183447b98 =
       (_DAT_183447b98 ^ _DAT_183447e38 & 0xfffffffffffffff0) + uVar9 ^ 0x5b40acf057d23e2;
  _DAT_183447dd8 =
       (_DAT_183447dd8 * -0xc6abda451a4f41 ^ _DAT_183447b98) + (_DAT_183447e38 & 0xfffffffffffffff0)
  ;
  _DAT_183447ec8 = _DAT_183447dd8 ^ _DAT_183447b98;
  lVar2 = uVar6 * uVar6;
  uVar7 = lVar2 * 0x3e4cfaee252254e7;
  uVar3 = ((_DAT_183447b90 ^ 0x84222325) + (ulonglong)((uint)_DAT_183447b90 & 0x84222325) * 2) *
          (uVar7 - _DAT_183447d70);
  uVar3 = (uVar3 | _DAT_183447b30) + (uVar3 & _DAT_183447b30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183447df8 = uVar9;
  _DAT_183447ee0 =
       func_0x00019001a2c0((uVar7 ^ 0x84222325 | uVar3) + (uVar3 & (uVar7 ^ 0x84222325)));
  _DAT_183447b70 = lVar2 * -0x3e4cfaee252254e7;
  _DAT_183447b28 =
       (_DAT_183447b28 ^ _DAT_183447ee0) + lVar2 * -0x3e4cfaee252254e7 ^ 0x45f0cbf2333e10b8;
  _DAT_183447ef0 = (_DAT_183447ef0 * -0x7f96ec5f3a296fe9 ^ _DAT_183447b28) + _DAT_183447ee0;
  _DAT_183447bd8 = _DAT_183447ef0 ^ _DAT_183447b28;
  uVar3 = ((_DAT_183447b40 ^ unaff_RBX) + (unaff_RBX & _DAT_183447b40) * 2) *
          (uVar7 - _DAT_183447e38);
  uVar3 = (uVar3 | _DAT_183447da8) + (uVar3 & _DAT_183447da8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183447e10 = func_0x00019001a2c0((unaff_RBX ^ uVar7 | uVar3) + (uVar3 & (unaff_RBX ^ uVar7)));
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar7;
  uVar15 = (uint)(uVar7 >> 0x20);
  auVar27._8_4_ = (int)uVar7;
  auVar27._0_8_ = uVar7;
  auVar27._12_4_ = uVar15;
  uVar21 = SUB164(auVar27 & _DAT_182b9f440,0);
  uVar22 = SUB168(auVar27 & _DAT_182b9f440,0);
  uVar31 = SUB164(auVar27 | _DAT_182b9f440,0);
  uVar26 = SUB168(auVar27 | _DAT_182b9f440,0);
  uVar10 = SUB164(_DAT_182b9f440 ^ auVar27,0);
  uVar20 = SUB168(_DAT_182b9f440 ^ auVar27,0);
  uVar3 = _DAT_183447e10 ^ 0x1439f022065e;
  auVar36._8_4_ = 0xffffffff;
  auVar36._0_8_ = 0xffffffffffffffff;
  auVar36._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar40 ^ auVar36,0);
  _DAT_183447d18 =
       (ulonglong)_DAT_182b9f4b0 * (ulonglong)uVar10 +
       ((ulonglong)_DAT_182b9f4c0 * (ulonglong)uVar10 + (uVar20 >> 0x20) * (ulonglong)_DAT_182b9f4b0
       << 0x20) +
       (ulonglong)_DAT_182b9f490 * (ulonglong)uVar31 +
       ((ulonglong)_DAT_182b9f4a0 * (ulonglong)uVar31 + (uVar26 >> 0x20) * (ulonglong)_DAT_182b9f490
       << 0x20) +
       (ulonglong)_DAT_182b9f470 * (ulonglong)uVar21 +
       ((ulonglong)_DAT_182b9f480 * (ulonglong)uVar21 + (uVar22 >> 0x20) * (ulonglong)_DAT_182b9f470
       << 0x20) +
       (ulonglong)_DAT_182b9f450 * (uVar7 & 0xffffffff) +
       ((ulonglong)_DAT_182b9f460 * (uVar7 & 0xffffffff) +
        (ulonglong)uVar15 * (ulonglong)_DAT_182b9f450 << 0x20) +
       (-((ulonglong)uVar11 * (ulonglong)_DAT_182b9f570 +
         ((ulonglong)_DAT_182b9f580 * (ulonglong)uVar11 +
          (SUB168(auVar40 ^ auVar36,0) >> 0x20) * (ulonglong)_DAT_182b9f570 << 0x20)) -
       ((ulonglong)uVar10 * (ulonglong)_DAT_182b9f550 +
        ((ulonglong)_DAT_182b9f560 * (ulonglong)uVar10 +
         (uVar20 >> 0x20) * (ulonglong)_DAT_182b9f550 << 0x20) +
        (ulonglong)uVar31 * (ulonglong)_DAT_182b9f530 +
        ((ulonglong)_DAT_182b9f540 * (ulonglong)uVar31 +
         (uVar26 >> 0x20) * (ulonglong)_DAT_182b9f530 << 0x20) +
       (ulonglong)uVar21 * (ulonglong)_DAT_182b9f510 +
       ((ulonglong)_DAT_182b9f520 * (ulonglong)uVar21 + (uVar22 >> 0x20) * (ulonglong)_DAT_182b9f510
       << 0x20) +
       (uVar7 & 0xffffffff) * (ulonglong)_DAT_182b9f4f0 +
       ((ulonglong)_DAT_182b9f500 * (uVar7 & 0xffffffff) +
        (ulonglong)uVar15 * (ulonglong)_DAT_182b9f4f0 << 0x20))) + 0x573c3ab3210de189;
  _DAT_183447d10 = _DAT_183447c70 ^ uVar3 ^ _DAT_183447d18;
  _DAT_183447be8 = (_DAT_183447be8 ^ uVar3) + _DAT_183447d18 ^ 0x84db17bec1b92e7;
  _DAT_183447b40 = (_DAT_183447b40 * -0x4e3d57a49d17f23 ^ _DAT_183447be8) + uVar3;
  _DAT_183447ba8 = _DAT_183447b40 ^ _DAT_183447be8;
  lVar4 = uVar16 * uVar16;
  uVar3 = lVar4 * -0x3bad6e00e3aa3789 ^ _DAT_183447eb8;
  lVar5 = _DAT_183447ee8 + lVar4 * -0x3bad6e00e3aa3789;
  uVar7 = (_DAT_183447ee8 ^ 0x84222325) + _DAT_183447eb8 + 0x84222325;
  uVar20 = uVar3 + lVar5;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183447ee8 ^ 0x84222325;
  uVar3 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uVar3;
  uVar20 = _DAT_183447d18 + lVar2 * -0x3e4cfaee252254e7;
  _DAT_183447e28 =
       func_0x00019001a2c0((uVar3 << 0x1d | uVar3 >> 0x23) - lVar5 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183447eb8 + 0x84222325));
  uVar3 = (_DAT_183447e28 << 0x32 | _DAT_183447e28 >> 0xe) >> 0x28 | (_DAT_183447e28 >> 0xe) << 0x18
  ;
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3;
  _DAT_183447ed8 = lVar4 * 0x3bad6e00e3aa3789;
  _DAT_183447b98 = (_DAT_183447b98 ^ uVar3) + lVar4 * 0x3bad6e00e3aa3789 ^ 0xecbf0d13a6145954;
  _DAT_183447d40 = (_DAT_183447d40 * -0x621d5d664ce9525f ^ _DAT_183447b98) + uVar3;
  _DAT_183447d80 = _DAT_183447d40 ^ _DAT_183447b98;
  lVar2 = uVar16 * uVar6;
  uVar3 = lVar2 * 0x4bbeb0b737a7a768;
  uVar16 = (_DAT_183447b90 ^ 0x84222325) + _DAT_183447d18 + 0x84222325;
  uVar7 = (uVar3 ^ _DAT_183447d18) + _DAT_183447b90 + uVar3;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_183447b90 ^ 0x84222325;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar3 ^ _DAT_183447d18;
  _DAT_183447c48 =
       func_0x00019001a2c0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183447b90 + uVar3) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_183447d18 + 0x84222325));
  uVar7 = lVar2 * -0x4bbeb0b737a7a768;
  _DAT_183447ea8 =
       (_DAT_183447ea8 ^ _DAT_183447c48) + lVar2 * -0x4bbeb0b737a7a768 ^ 0x2821b9f0e15ec815;
  _DAT_183447d68 = (_DAT_183447d68 * -0x291e804ba5c32259 ^ _DAT_183447ea8) + _DAT_183447c48;
  _DAT_183447b78 = _DAT_183447d68 ^ _DAT_183447ea8;
  uVar16 = uVar20 ^ 0x84222325 ^ _DAT_183447cd0;
  lVar4 = (uVar20 ^ 0x84222325) + _DAT_183447e28;
  uVar22 = uVar16 + lVar4;
  uVar26 = (uVar3 ^ _DAT_183447e28) + _DAT_183447cd0 + uVar3;
  uVar16 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar16;
  uVar22 = (uVar26 * 0x2000 | uVar26 >> 0x33) ^ uVar3 ^ _DAT_183447e28;
  _DAT_183447c08 = uVar7;
  _DAT_183447ec0 =
       func_0x00019001a2c0((uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_183447cd0 + uVar3) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - lVar4);
  uVar16 = ~_DAT_183447ec0 & uVar20;
  uVar15 = (uint)(uVar20 >> 0x20);
  auVar28._8_4_ = (int)uVar20;
  auVar28._0_8_ = uVar20;
  auVar28._12_4_ = uVar15;
  uVar11 = (uint)(uVar3 >> 0x20);
  auVar17._8_4_ = (int)uVar3;
  auVar17._0_8_ = uVar3;
  auVar17._12_4_ = uVar11;
  uVar21 = SUB164(auVar28 & auVar17,0);
  uVar22 = SUB168(auVar28 & auVar17,0);
  uVar10 = SUB164(auVar28 | auVar17,0);
  uVar26 = SUB168(auVar28 | auVar17,0);
  uVar31 = SUB164(auVar28 ^ auVar17,0);
  auVar12._8_8_ = _UNK_18001a718;
  auVar12._0_8_ = _DAT_18001a710;
  uVar34 = SUB164(auVar17 ^ auVar12,0);
  uVar39 = SUB168(auVar17 ^ auVar12,0);
  auVar35._0_8_ =
       (((ulonglong)_DAT_182b9f5d0 * (ulonglong)uVar34 +
         ((ulonglong)_DAT_182b9f640 * (ulonglong)uVar34 +
          (uVar39 >> 0x20) * (ulonglong)_DAT_182b9f5d0 << 0x20) +
        (ulonglong)uVar31 * (ulonglong)_DAT_182b9f620 +
        ((ulonglong)_DAT_182b9f630 * (ulonglong)uVar31 +
         (SUB168(auVar28 ^ auVar17,0) >> 0x20) * (ulonglong)_DAT_182b9f620 << 0x20) +
        (ulonglong)_DAT_182b9f600 * (ulonglong)uVar10 +
        ((ulonglong)_DAT_182b9f610 * (ulonglong)uVar10 +
         (uVar26 >> 0x20) * (ulonglong)_DAT_182b9f600 << 0x20) +
        (ulonglong)_DAT_182b9f5e0 * (ulonglong)uVar21 +
        ((ulonglong)_DAT_182b9f5f0 * (ulonglong)uVar21 +
         (uVar22 >> 0x20) * (ulonglong)_DAT_182b9f5e0 << 0x20) +
        (ulonglong)_DAT_182b9f5b0 * (uVar3 & 0xffffffff) +
        ((ulonglong)_DAT_182b9f5c0 * (uVar3 & 0xffffffff) +
         (ulonglong)uVar11 * (ulonglong)_DAT_182b9f5b0 << 0x20) +
        (ulonglong)_DAT_182b9f590 * (uVar20 & 0xffffffff) +
        ((ulonglong)_DAT_182b9f5a0 * (uVar20 & 0xffffffff) +
         (ulonglong)uVar15 * (ulonglong)_DAT_182b9f590 << 0x20)) -
       ((ulonglong)uVar34 * (ulonglong)_DAT_182b9f6b0 +
        ((ulonglong)_DAT_182b9f6e0 * (ulonglong)uVar34 +
         (uVar39 >> 0x20) * (ulonglong)_DAT_182b9f6b0 << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_182b9f6d0 +
       ((uVar26 >> 0x20) * (ulonglong)_DAT_182b9f6d0 + (ulonglong)_DAT_182b9f6c0 * (ulonglong)uVar10
       << 0x20) +
       (ulonglong)uVar21 * (ulonglong)_DAT_182b9f6d0 +
       ((uVar22 >> 0x20) * (ulonglong)_DAT_182b9f6d0 + (ulonglong)uVar21 * (ulonglong)_DAT_182b9f6c0
       << 0x20) +
       (uVar3 & 0xffffffff) * (ulonglong)_DAT_182b9f690 +
       ((ulonglong)_DAT_182b9f6a0 * (uVar3 & 0xffffffff) +
        (ulonglong)uVar11 * (ulonglong)_DAT_182b9f690 << 0x20) +
       (uVar20 & 0xffffffff) * (ulonglong)_DAT_182b9f670 +
       ((ulonglong)_DAT_182b9f680 * (uVar20 & 0xffffffff) +
        (ulonglong)uVar15 * (ulonglong)_DAT_182b9f670 << 0x20))) + _DAT_182b9f6f0;
  _DAT_183447bf0 = _DAT_183447d78 ^ uVar16 ^ auVar35._0_8_;
  _DAT_183447b30 = (_DAT_183447b30 ^ uVar16) + auVar35._0_8_ ^ 0xa985cc57f6b24e66;
  _DAT_183447cd0 = (_DAT_183447cd0 * -0x14a2d659c42b8631 ^ _DAT_183447b30) + uVar16;
  _DAT_183447c38 = _DAT_183447cd0 ^ _DAT_183447b30;
  uVar16 = auVar35._0_8_ ^ 0x84222325 ^ _DAT_183447c78;
  lVar4 = (auVar35._0_8_ ^ 0x84222325) + _DAT_183447d28;
  lVar2 = _DAT_183447c78 + lVar2 * -0x4bbeb0b737a7a768;
  uVar3 = uVar16 + lVar4;
  uVar20 = (uVar7 ^ _DAT_183447d28) + lVar2;
  uVar16 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar16;
  uVar3 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uVar7 ^ _DAT_183447d28;
  _DAT_183447ba8 = auVar35._0_8_;
  _DAT_183447ee0 =
       func_0x00019001a2c0((uVar3 << 0x1d | uVar3 >> 0x23) - lVar2 ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - lVar4);
  uVar34 = (uint)(auVar35._0_8_ >> 0x20);
  auVar35._8_4_ = (int)auVar35._0_8_;
  auVar35._12_4_ = uVar34;
  uVar10 = (uint)(uVar7 >> 0x20);
  auVar18._8_4_ = (int)uVar7;
  auVar18._0_8_ = uVar7;
  auVar18._12_4_ = uVar10;
  uVar15 = SUB164(auVar35 & auVar18,0);
  uVar20 = SUB168(auVar35 & auVar18,0);
  auVar37._8_4_ = 0xffffffff;
  auVar37._0_8_ = 0xffffffffffffffff;
  auVar37._12_4_ = 0xffffffff;
  uVar31 = SUB164(auVar35 ^ auVar18,0);
  uVar21 = SUB164(auVar35 ^ auVar37,0);
  uVar3 = (auVar35._0_8_ | uVar7) ^ _DAT_183447ee0;
  uVar16 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar3;
  uVar16 = uVar7 ^ _DAT_18001a710;
  uVar11 = SUB164(auVar35 | auVar18,0);
  uVar22 = (((ulonglong)uVar21 * (ulonglong)_DAT_182b9f740 +
             ((_DAT_182b9f790 & 0xffffffff) * (ulonglong)uVar21 +
              (SUB168(auVar35 ^ auVar37,0) >> 0x20) * (ulonglong)_DAT_182b9f740 << 0x20) +
             (ulonglong)uVar31 * (ulonglong)_DAT_182b9f770 +
             ((_DAT_182b9f780 & 0xffffffff) * (ulonglong)uVar31 +
              (SUB168(auVar35 ^ auVar18,0) >> 0x20) * (ulonglong)_DAT_182b9f770 << 0x20) +
            (_DAT_182b9f750 & 0xffffffff) * (ulonglong)uVar15 +
            ((_DAT_182b9f760 & 0xffffffff) * (ulonglong)uVar15 +
             (uVar20 >> 0x20) * (_DAT_182b9f750 & 0xffffffff) << 0x20) +
            (_DAT_182b9f720 & 0xffffffff) * (uVar7 & 0xffffffff) +
            ((_DAT_182b9f730 & 0xffffffff) * (uVar7 & 0xffffffff) +
             (ulonglong)uVar10 * (_DAT_182b9f720 & 0xffffffff) << 0x20) +
            (_DAT_182b9f700 & 0xffffffff) * (auVar35._0_8_ & 0xffffffff) +
            ((_DAT_182b9f710 & 0xffffffff) * (auVar35._0_8_ & 0xffffffff) +
             (ulonglong)uVar34 * (_DAT_182b9f700 & 0xffffffff) << 0x20)) -
           ((uVar16 & 0xffffffff) * (ulonglong)_DAT_182b9f800 +
            ((_DAT_182b9f830 & 0xffffffff) * (uVar16 & 0xffffffff) +
             (uVar16 >> 0x20) * (ulonglong)_DAT_182b9f800 << 0x20) +
           (ulonglong)uVar11 * (ulonglong)_DAT_182b9f820 +
           ((SUB168(auVar35 | auVar18,0) >> 0x20) * (ulonglong)_DAT_182b9f820 +
            (_DAT_182b9f810 & 0xffffffff) * (ulonglong)uVar11 << 0x20) +
           (ulonglong)uVar15 * (ulonglong)_DAT_182b9f820 +
           ((uVar20 >> 0x20) * (ulonglong)_DAT_182b9f820 +
            (ulonglong)uVar15 * (_DAT_182b9f810 & 0xffffffff) << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_182b9f7e0 +
           ((_DAT_182b9f7f0 & 0xffffffff) * (uVar7 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_182b9f7e0 << 0x20) +
           (auVar35._0_8_ & 0xffffffff) * (ulonglong)_DAT_182b9f7c0 +
           ((_DAT_182b9f7d0 & 0xffffffff) * (auVar35._0_8_ & 0xffffffff) +
            (ulonglong)uVar34 * (ulonglong)_DAT_182b9f7c0 << 0x20))) + _DAT_182b9f840;
  _DAT_183447b20 = _DAT_183447d68 ^ uVar3 ^ uVar22;
  _DAT_183447dc0 = (_DAT_183447dc0 ^ uVar3) + uVar22 ^ 0xfb4c77bdee5a5d58;
  _DAT_183447d40 = (_DAT_183447d40 * 0x329074a081104a5f ^ _DAT_183447dc0) + uVar3;
  _DAT_183447d50 = _DAT_183447d40 ^ _DAT_183447dc0;
  uVar3 = uVar8 ^ 0x84222325;
  uVar16 = (uVar3 ^ _DAT_183447ec0) + _DAT_183447e20 + uVar3;
  uVar7 = (uVar9 ^ _DAT_183447e20) + _DAT_183447ec0 + uVar9;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ uVar3 ^ _DAT_183447ec0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar9 ^ _DAT_183447e20;
  _DAT_183447bd8 = uVar22;
  _DAT_183447de8 =
       func_0x00019001a2c0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183447ec0 + uVar9) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_183447e20 + uVar3));
  uVar16 = ((uVar8 | uVar9) ^ _DAT_183447de8) & 0xffffffffffffffc0 ^ uVar8;
  uVar10 = (uint)(uVar8 >> 0x20);
  auVar32._8_4_ = (int)uVar8;
  auVar32._0_8_ = uVar8;
  auVar32._12_4_ = uVar10;
  uVar11 = (uint)(uVar9 >> 0x20);
  auVar29._8_4_ = (int)uVar9;
  auVar29._0_8_ = uVar9;
  auVar29._12_4_ = uVar11;
  uVar21 = SUB164(auVar32 & auVar29,0);
  uVar39 = SUB168(auVar32 & auVar29,0);
  uVar15 = SUB164(auVar32 | auVar29,0);
  uVar26 = SUB168(auVar32 | auVar29,0);
  uVar31 = SUB164(auVar32 ^ auVar29,0);
  uVar20 = SUB168(auVar32 ^ auVar29,0);
  uVar7 = uVar8 ^ _DAT_18001a710;
  auVar23._8_8_ = uVar9;
  auVar23._0_8_ = uVar3;
  auVar24 = pshufb(auVar23 ^ _DAT_182b9f9b0,_DAT_1800170c0);
  uVar7 = (((ulonglong)_DAT_182b9f8b0 * (ulonglong)uVar31 +
            ((ulonglong)_DAT_182b9f8c0 * (ulonglong)uVar31 +
             (uVar20 >> 0x20) * (ulonglong)_DAT_182b9f8b0 << 0x20) +
            (ulonglong)_DAT_182b9f890 * (ulonglong)uVar15 +
            ((ulonglong)_DAT_182b9f8a0 * (ulonglong)uVar15 +
             (uVar26 >> 0x20) * (ulonglong)_DAT_182b9f890 << 0x20) +
           (ulonglong)_DAT_182b9f870 * (ulonglong)uVar21 +
           ((ulonglong)_DAT_182b9f880 * (ulonglong)uVar21 +
            (uVar39 >> 0x20) * (ulonglong)_DAT_182b9f870 << 0x20) +
           (ulonglong)_DAT_182b9f860 * (uVar9 & 0xffffffff) +
           ((ulonglong)uVar11 * (ulonglong)_DAT_182b9f860 +
            (ulonglong)_DAT_182b9f850 * (uVar9 & 0xffffffff) << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_182b9f860 +
           ((ulonglong)uVar10 * (ulonglong)_DAT_182b9f860 +
            (uVar8 & 0xffffffff) * (ulonglong)_DAT_182b9f850 << 0x20)) -
          ((uVar7 & 0xffffffff) * (ulonglong)_DAT_182b9f930 +
           ((ulonglong)_DAT_182b9f9a0 * (uVar7 & 0xffffffff) +
            (uVar7 >> 0x20) * (ulonglong)_DAT_182b9f930 << 0x20) +
          (ulonglong)uVar31 * (ulonglong)_DAT_182b9f980 +
          ((ulonglong)_DAT_182b9f990 * (ulonglong)uVar31 +
           (uVar20 >> 0x20) * (ulonglong)_DAT_182b9f980 << 0x20) +
          (ulonglong)uVar15 * (ulonglong)_DAT_182b9f960 +
          ((ulonglong)_DAT_182b9f970 * (ulonglong)uVar15 +
           (uVar26 >> 0x20) * (ulonglong)_DAT_182b9f960 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_182b9f940 +
          ((ulonglong)_DAT_182b9f950 * (ulonglong)uVar21 +
           (uVar39 >> 0x20) * (ulonglong)_DAT_182b9f940 << 0x20) +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_182b9f910 +
          ((ulonglong)_DAT_182b9f920 * (uVar9 & 0xffffffff) +
           (ulonglong)uVar11 * (ulonglong)_DAT_182b9f910 << 0x20) +
          ((uVar8 & 0xffffffff) * (ulonglong)_DAT_182b9f900 +
           (ulonglong)uVar10 * (ulonglong)_DAT_182b9f8f0 << 0x20) +
          (uVar8 & 0xffffffff) * (ulonglong)_DAT_182b9f8f0)) + 0xba8d64f05ac6304;
  _DAT_183447d58 = _DAT_183447c20 ^ uVar16 ^ uVar7;
  _DAT_183447d50 = (_DAT_183447d50 ^ uVar16) + uVar7 ^ 0x1fb7695108bdaf72;
  _DAT_183447ee8 = (_DAT_183447ee8 * 0x647e51cad3cc889d ^ _DAT_183447d50) + uVar16;
  _DAT_183447ef0 = _DAT_183447ee8 ^ _DAT_183447d50;
  uVar20 = auVar24._8_8_ + auVar24._0_8_;
  uVar16 = uVar20 + _DAT_183447ea8;
  if (auVar24._4_4_ < 0) {
    uVar16 = _DAT_183447ca8 ^ uVar20;
  }
  _DAT_183447d10 = uVar7;
  _DAT_183447eb0 = func_0x00019001a2c0(SUB161(auVar23 ^ _DAT_182b9f9b0,5) ^ uVar16);
  uVar16 = (_DAT_183447eb0 << 0x3d | _DAT_183447eb0 >> 3) ^ uVar9;
  _DAT_183447d20 = uVar9 & uVar8;
  _DAT_183447e68 = (_DAT_183447e68 ^ uVar16) + _DAT_183447d20 ^ 0x5e2b1634a8c2c771;
  _DAT_183447ce0 = (_DAT_183447ce0 * -0x5d3ccb2fbc8e4363 ^ _DAT_183447e68) + uVar16;
  _DAT_183447dc8 = _DAT_183447ce0 ^ _DAT_183447e68;
  uVar7 = uVar7 - ((uVar8 ^ uVar9) + _DAT_183447d20 * 2);
  uVar16 = uVar22 ^ 0x84222325 ^ _DAT_183447d38;
  lVar2 = (uVar22 ^ 0x84222325) + _DAT_183447cd0;
  uVar20 = uVar16 + lVar2;
  uVar9 = (uVar7 ^ _DAT_183447cd0) + _DAT_183447d38 + uVar7;
  uVar16 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uVar16;
  uVar20 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar7 ^ _DAT_183447cd0;
  _DAT_183447b30 =
       func_0x00019001a2c0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_183447d38 + uVar7) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - lVar2);
  uVar16 = ~((uVar22 | uVar7) ^ _DAT_183447b30) & uVar22;
  uVar11 = (uint)(uVar22 >> 0x20);
  auVar13._8_4_ = (int)uVar22;
  auVar13._0_8_ = uVar22;
  auVar13._12_4_ = uVar11;
  uVar15 = (uint)(uVar7 >> 0x20);
  auVar30._8_4_ = (int)uVar7;
  auVar30._0_8_ = uVar7;
  auVar30._12_4_ = uVar15;
  uVar31 = SUB164(auVar13 & auVar30,0);
  uVar26 = SUB168(auVar13 & auVar30,0);
  uVar21 = SUB164(auVar13 | auVar30,0);
  uVar9 = SUB168(auVar13 | auVar30,0);
  uVar34 = SUB164(auVar13 ^ auVar30,0);
  uVar20 = SUB168(auVar13 ^ auVar30,0);
  auVar38._8_4_ = 0xffffffff;
  auVar38._0_8_ = 0xffffffffffffffff;
  auVar38._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar13 ^ auVar38,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  auVar24 = pblendw(auVar1,auVar38,0xf0);
  uVar7 = (((ulonglong)_DAT_182b9fa20 * (ulonglong)uVar34 +
            ((ulonglong)_DAT_182b9fa30 * (ulonglong)uVar34 +
             (uVar20 >> 0x20) * (ulonglong)_DAT_182b9fa20 << 0x20) +
            (ulonglong)_DAT_182b9fa00 * (ulonglong)uVar21 +
            ((ulonglong)_DAT_182b9fa10 * (ulonglong)uVar21 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_182b9fa00 << 0x20) +
           (ulonglong)_DAT_182b9f9e0 * (ulonglong)uVar31 +
           ((ulonglong)_DAT_182b9f9f0 * (ulonglong)uVar31 +
            (uVar26 >> 0x20) * (ulonglong)_DAT_182b9f9e0 << 0x20) +
           (ulonglong)_DAT_182b9f9d0 * (uVar7 & 0xffffffff) +
           ((ulonglong)uVar15 * (ulonglong)_DAT_182b9f9d0 +
            (ulonglong)_DAT_182b9f9c0 * (uVar7 & 0xffffffff) << 0x20) +
           (uVar22 & 0xffffffff) * (ulonglong)_DAT_182b9f9d0 +
           ((ulonglong)uVar11 * (ulonglong)_DAT_182b9f9d0 +
            (uVar22 & 0xffffffff) * (ulonglong)_DAT_182b9f9c0 << 0x20)) -
          ((ulonglong)uVar10 * (_DAT_182b9faa0 & 0xffffffff) +
           ((ulonglong)_DAT_182b9fb10 * (ulonglong)uVar10 +
            (SUB168(auVar13 ^ auVar38,0) >> 0x20) * (_DAT_182b9faa0 & 0xffffffff) << 0x20) +
          (ulonglong)uVar34 * (ulonglong)_DAT_182b9faf0 +
          ((ulonglong)_DAT_182b9fb00 * (ulonglong)uVar34 +
           (uVar20 >> 0x20) * (ulonglong)_DAT_182b9faf0 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_182b9fad0 +
          ((ulonglong)_DAT_182b9fae0 * (ulonglong)uVar21 +
           (uVar9 >> 0x20) * (ulonglong)_DAT_182b9fad0 << 0x20) +
          (ulonglong)uVar31 * (ulonglong)_DAT_182b9fab0 +
          ((ulonglong)_DAT_182b9fac0 * (ulonglong)uVar31 +
           (uVar26 >> 0x20) * (ulonglong)_DAT_182b9fab0 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_182b9fa80 +
          ((ulonglong)_DAT_182b9fa90 * (uVar7 & 0xffffffff) +
           (ulonglong)uVar15 * (ulonglong)_DAT_182b9fa80 << 0x20) +
          (uVar22 & 0xffffffff) * (ulonglong)_DAT_182b9fa60 +
          ((ulonglong)_DAT_182b9fa70 * (uVar22 & 0xffffffff) +
           (ulonglong)uVar11 * (ulonglong)_DAT_182b9fa60 << 0x20))) - _DAT_182b9faa0;
  auVar12 = pshufb(auVar24 ^ _DAT_182b9fb20,_DAT_1800170c0);
  uVar16 = uVar16 << 0x25 | uVar16 >> 0x1b & 0xfffffffffff80000;
  _DAT_183447ba0 = _DAT_183447e00 ^ uVar16 ^ uVar7;
  _DAT_183447db8 = (_DAT_183447db8 ^ uVar16) + uVar7 ^ 0xbb03d0d62a0b2545;
  _DAT_183447cc8 = (_DAT_183447cc8 * 0x6081876dcd0879b ^ _DAT_183447db8) + uVar16;
  _DAT_183447dd0 = _DAT_183447cc8 ^ _DAT_183447db8;
  uVar3 = auVar12._8_8_ + auVar12._0_8_;
  uVar16 = uVar3 + _DAT_183447e58;
  if (auVar12._4_4_ < 0) {
    uVar16 = _DAT_183447cb8 ^ uVar3;
  }
  _DAT_183447bb8 = uVar7;
  _DAT_183447e58 = func_0x00019001a2c0(SUB161(auVar24 ^ _DAT_182b9fb20,5) ^ uVar16);
  _DAT_183447cb0 = ~uVar8;
  _DAT_183447be8 = (_DAT_183447be8 ^ _DAT_183447e58) + _DAT_183447cb0 ^ 0xd93f2a4d431d21b6;
  _DAT_183447d68 = (_DAT_183447d68 * -0x29bfb49740f8adb1 ^ _DAT_183447be8) + _DAT_183447e58;
  _DAT_183447e20 = _DAT_183447d68 ^ _DAT_183447be8;
  uVar16 = uVar7 ^ 0x84222325 ^ _DAT_183447e40;
  lVar2 = (uVar7 ^ 0x84222325) + _DAT_183447e18;
  uVar3 = uVar16 + lVar2;
  uVar16 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar16;
  uVar3 = ((_DAT_183447e18 + _DAT_183447e40) * 0x2000 | _DAT_183447e18 + _DAT_183447e40 >> 0x33) ^
          _DAT_183447e18;
  _DAT_183447b28 =
       func_0x00019001a2c0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_183447e40 ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - lVar2);
  uVar10 = (uint)(uVar7 >> 0x20);
  auVar14._8_4_ = (int)uVar7;
  auVar14._0_8_ = uVar7;
  auVar14._12_4_ = uVar10;
  uVar3 = auVar14._8_8_ >> 0x20;
  uVar16 = _DAT_183447b28 & 0xfffffffff8000000;
  auVar33._0_8_ =
       ((_DAT_182b9fb70 & 0xffffffff) * (uVar7 & 0xffffffff) +
        ((_DAT_182b9fb80 & 0xffffffff) * (uVar7 & 0xffffffff) +
         (ulonglong)uVar10 * (_DAT_182b9fb70 & 0xffffffff) << 0x20) +
       (_DAT_182b9fb50 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_DAT_182b9fb60 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar10 * (_DAT_182b9fb50 & 0xffffffff) << 0x20) +
       (_DAT_182b9fb30 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_DAT_182b9fb40 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar10 * (_DAT_182b9fb30 & 0xffffffff) << 0x20)) -
       ((uVar7 & 0xffffffff) * (_DAT_182b9fbb0 & 0xffffffff) +
        ((_DAT_182b9fbc0 & 0xffffffff) * (uVar7 & 0xffffffff) +
         (ulonglong)uVar10 * (_DAT_182b9fbb0 & 0xffffffff) << 0x20) +
       (_DAT_182b9fb90 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_DAT_182b9fba0 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar10 * (_DAT_182b9fb90 & 0xffffffff) << 0x20));
  auVar33._8_8_ =
       ((_UNK_182b9fb78 & 0xffffffff) * (uVar7 & 0xffffffff) +
        ((_UNK_182b9fb88 & 0xffffffff) * (uVar7 & 0xffffffff) +
         uVar3 * (_UNK_182b9fb78 & 0xffffffff) << 0x20) +
       (_UNK_182b9fb58 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_UNK_182b9fb68 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar3 * (_UNK_182b9fb58 & 0xffffffff)
       << 0x20) +
       (_UNK_182b9fb38 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_UNK_182b9fb48 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar3 * (_UNK_182b9fb38 & 0xffffffff)
       << 0x20)) -
       ((auVar14._8_8_ & 0xffffffff) * (_UNK_182b9fbb8 & 0xffffffff) +
        ((_UNK_182b9fbc8 & 0xffffffff) * (uVar7 & 0xffffffff) +
         uVar3 * (_UNK_182b9fbb8 & 0xffffffff) << 0x20) +
       (_UNK_182b9fb98 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_UNK_182b9fba8 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar3 * (_UNK_182b9fb98 & 0xffffffff)
       << 0x20));
  _DAT_183447ba0 = _DAT_183447bb0 ^ uVar16 ^ auVar33._0_8_;
  _DAT_183447e68 = (_DAT_183447e68 ^ uVar16) + auVar33._0_8_ ^ 0x4f87f0d9d9a0d37b;
  _DAT_183447e80 = (_DAT_183447e80 * -0x4f727bc6b8ef1d17 ^ _DAT_183447e68) + uVar16;
  _DAT_183447ec0 = _DAT_183447e80 ^ _DAT_183447e68;
  uVar16 = ((uVar6 ^ 0x84222325 ^ _DAT_183447cf0) + ((uVar6 ^ 0x84222325) & _DAT_183447cf0) * 2) *
           (uVar6 - _DAT_183447d70);
  uVar16 = (uVar16 | _DAT_183447c58) + (uVar16 & _DAT_183447c58);
  uVar16 = uVar16 * 0x2000 ^ uVar16;
  uVar16 = uVar16 >> 7 ^ uVar16;
  uVar16 = uVar16 << 0x11 ^ uVar16;
  _DAT_183447da8 = auVar33._0_8_;
  _DAT_183447c50 =
       func_0x00019001a2c0((uVar16 | 0x84222325) + (ulonglong)((uint)uVar16 & 0x84222325));
  uVar6 = uVar6 ^ (_DAT_183447c50 << 0x37 | _DAT_183447c50 >> 9);
  _DAT_183447e20 = _DAT_183447e20 ^ uVar6 ^ 0x1851c64672522db8;
  _DAT_183447bd8 = (_DAT_183447bd8 * 0x14cf752271ef024f ^ _DAT_183447e20) + uVar6;
  _DAT_183447d10 = _DAT_183447bd8 ^ _DAT_183447e20;
  _DAT_183447c90 = 0;
  uVar16 = auVar33._0_8_ ^ 0x84222325;
  uVar6 = ((_DAT_183447bf0 ^ uVar16) + (uVar16 & _DAT_183447bf0) * 2) * -_DAT_183447be8;
  uVar6 = (uVar6 | _DAT_183447e30) + (uVar6 & _DAT_183447e30);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183447e80 = func_0x00019001a2c0((uVar6 | uVar16) + (uVar6 & uVar16));
  auVar25._8_4_ = 0xffffffff;
  auVar25._0_8_ = 0xffffffffffffffff;
  auVar25._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar25 ^ auVar33,0);
  uVar16 = (((ulonglong)_DAT_182b9fc10 * (auVar33._0_8_ & 0xffffffff) +
             ((ulonglong)_DAT_182b9fc20 * (auVar33._0_8_ & 0xffffffff) +
              (auVar33._0_8_ >> 0x20) * (ulonglong)_DAT_182b9fc10 << 0x20) +
            (ulonglong)_DAT_182b9fbf0 * (auVar33._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_182b9fc00 * (auVar33._0_8_ & 0xffffffff) +
             (auVar33._0_8_ >> 0x20) * (ulonglong)_DAT_182b9fbf0 << 0x20) +
            (ulonglong)_DAT_182b9fbd0 * (auVar33._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_182b9fbe0 * (auVar33._0_8_ & 0xffffffff) +
             (auVar33._0_8_ >> 0x20) * (ulonglong)_DAT_182b9fbd0 << 0x20)) -
           ((ulonglong)uVar10 * (ulonglong)_DAT_182b9fc40 +
            ((SUB168(auVar25 ^ auVar33,0) >> 0x20) * (ulonglong)_DAT_182b9fc40 +
             (ulonglong)_DAT_182b9fc30 * (ulonglong)uVar10 << 0x20) +
            (auVar33._0_8_ & 0xffffffff) * (ulonglong)_DAT_182b9fc50 +
            ((ulonglong)_DAT_182b9fc80 * (auVar33._0_8_ & 0xffffffff) +
             (auVar33._0_8_ >> 0x20) * (ulonglong)_DAT_182b9fc50 << 0x20) +
           (ulonglong)_DAT_182b9fc60 * (auVar33._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_182b9fc70 * (auVar33._0_8_ & 0xffffffff) +
            (auVar33._0_8_ >> 0x20) * (ulonglong)_DAT_182b9fc60 << 0x20) +
           (auVar33._0_8_ & 0xffffffff) * (ulonglong)_DAT_182b9fc40 +
           ((auVar33._0_8_ >> 0x20) * (ulonglong)_DAT_182b9fc40 +
            (auVar33._0_8_ & 0xffffffff) * (ulonglong)_DAT_182b9fc30 << 0x20))) + 0x24692109c37ed768
  ;
  _DAT_183447b30 = (_DAT_183447b30 ^ _DAT_183447e80) + uVar16 ^ 0xbaafb80de6610fd5;
  _DAT_183447b10 = (_DAT_183447b10 * -0x5c087cfa6cfc3a8b ^ _DAT_183447b30) + _DAT_183447e80;
  _DAT_183447bb0 = _DAT_183447b10 ^ _DAT_183447b30;
  auVar19._8_8_ = uVar16;
  auVar19._0_8_ = in_stack_00000060 ^ 0x84222325;
  auVar24 = pshufb(auVar19 ^ _DAT_182b9fc90,_DAT_1800170c0);
  uVar3 = auVar24._8_8_ + auVar24._0_8_;
  uVar6 = uVar3 + _DAT_183447e28;
  if (auVar24._4_4_ < 0) {
    uVar6 = _DAT_183447e08 ^ uVar3;
  }
  _DAT_183447da8 = uVar16;
  _DAT_183447ee8 = uVar16;
  _DAT_183447d40 = func_0x00019001a2c0(SUB161(auVar19 ^ _DAT_182b9fc90,5) ^ uVar6);
  _DAT_183447df0 = in_stack_00000060 + uVar16 + (uVar16 & in_stack_00000060) * -2;
  _DAT_183447e48 = (_DAT_183447e48 ^ _DAT_183447db8) + _DAT_183447df0 ^ 0x36ee287c6d6fb296;
  _DAT_183447c00 = (_DAT_183447c00 * 0x45bf0ba61302493d ^ _DAT_183447e48) + _DAT_183447db8;
  _DAT_183447db8 = _DAT_183447c00 ^ _DAT_183447e48;
  switch(in_stack_000000a8 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ffb4f65 (image 18ffb4f65) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ffb4f65(void)

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



// ===== continuation @ rva 100153aa (image 1900153aa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001900153d3 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1900153aa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva ffdaf63 (image 18ffdaf63) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ffdaf63(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x68))(in_stack_00000048);
  (*_DAT_182b96a58)();
  return;
}



// ===== continuation @ rva ffda1de (image 18ffda1de) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ffda1de(void)

{
  longlong *in_stack_00000048;
  
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000048 + 0x720))(in_stack_00000048);
  (*_DAT_182b8e298)();
  return;
}



// ===== continuation @ rva fff3b56 (image 18fff3b56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fff3b56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b895f8)();
  return;
}



// ===== continuation @ rva fffa165 (image 18fffa165) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fffa165(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182b9a868)();
  return;
}



// ===== continuation @ rva ffef7a9 (image 18ffef7a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ffef7a9(void)

{
  undefined8 in_stack_00000048;
  
  FUN_190ddfc90(in_stack_00000048,&stack0x00000058,*_DAT_18301ee50 + 0x364,*_DAT_18301ee50 + 0x36f,
                0x13);
  (*_DAT_182b90d18)();
  return;
}



// ===== continuation @ rva 1001ea74 (image 19001ea74) =====

void FUN_19001ea74(void)

{
  return;
}



// ===== continuation @ rva 1001a44c (image 19001a44c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19001a44c(void)

{
  FUN_190ddce00();
  (*_DAT_182baa2d0)();
  return;
}



// ===== continuation @ rva 1001e24b (image 19001e24b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19001e24b(void)

{
  (*_DAT_182baae60)();
  return;
}



// ===== continuation @ rva 1002aa9b (image 19002aa9b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002aa9b(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_182baae60)();
  return;
}



// ===== continuation @ rva 1002933c (image 19002933c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19002933c(void)

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



// ===== continuation @ rva 10024ec6 (image 190024ec6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190024ec6(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182baa160)();
  return;
}



// ===== continuation @ rva 100232c4 (image 1900232c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900232c4(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x4eb,0x18);
  (*_DAT_182ba8a60)();
  return;
}



// ===== continuation @ rva 1002aaae (image 19002aaae) =====

void FUN_19002aaae(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100287b0 (image 1900287b0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900287b0(void)

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



// ===== continuation @ rva 1001da94 (image 19001da94) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19001da94(void)

{
  (*_DAT_182baa4d0)();
  return;
}



// ===== continuation @ rva 10027ba6 (image 190027ba6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190027ba6(void)

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



// ===== continuation @ rva 10028e53 (image 190028e53) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190028e53(void)

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



// ===== continuation @ rva 1006c6c6 (image 19006c6c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c6c6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc2098)();
  return;
}



// ===== continuation @ rva 1006c653 (image 19006c653) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c653(void)

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



// ===== continuation @ rva 1006c88c (image 19006c88c) =====

void FUN_19006c88c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006c884 (image 19006c884) =====

void FUN_19006c884(void)

{
  return;
}



// ===== continuation @ rva 1006c6b1 (image 19006c6b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c6b1(void)

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



// ===== continuation @ rva 1006c864 (image 19006c864) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c864(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2038)();
  return;
}



// ===== continuation @ rva 1006c7d8 (image 19006c7d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c7d8(void)

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



// ===== continuation @ rva 1006c70f (image 19006c70f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c70f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc20d8)();
  return;
}



// ===== continuation @ rva 1006c790 (image 19006c790) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c790(void)

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



// ===== continuation @ rva 1006c6ee (image 19006c6ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c6ee(void)

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



// ===== continuation @ rva 10078ba6 (image 190078ba6) =====

void FUN_190078ba6(void)

{
  return;
}



// ===== continuation @ rva 1006ddee (image 19006ddee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006ddee(void)

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



// ===== continuation @ rva 10097148 (image 190097148) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000190097197 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_190097148(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 1008fe6a (image 19008fe6a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00019008fecd */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_19008fe6a(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 10084ab0 (image 190084ab0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190084ab0(void)

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



// ===== continuation @ rva 100a2a59 (image 1900a2a59) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001900a2a74 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1900a2a59(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 100a35a2 (image 1900a35a2) =====

void FUN_1900a35a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 100802dd (image 1900802dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900802dd(void)

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



// ===== continuation @ rva 10094557 (image 190094557) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190094557(void)

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



// ===== continuation @ rva 10084788 (image 190084788) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190084788(void)

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



// ===== continuation @ rva 10080fa5 (image 190080fa5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190080fa5(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
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



// ===== continuation @ rva 100a8c8e (image 1900a8c8e) =====

void FUN_1900a8c8e(void)

{
  return;
}



// ===== continuation @ rva 100a4d67 (image 1900a4d67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4d67(void)

{
  FUN_190ddce00();
  (*_DAT_182bd5938)();
  return;
}



// ===== continuation @ rva 100a96bb (image 1900a96bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a96bb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bd5cb8)();
  return;
}



// ===== continuation @ rva 100a9533 (image 1900a9533) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9533(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182bd5a68)();
  return;
}



// ===== continuation @ rva 100a9b31 (image 1900a9b31) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9b31(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd6048)();
  return;
}



// ===== continuation @ rva 100a950f (image 1900a950f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a950f(void)

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



// ===== continuation @ rva 100a8435 (image 1900a8435) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a8435(void)

{
  int in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 100a8b9b (image 1900a8b9b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a8b9b(void)

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



// ===== continuation @ rva 100a9b16 (image 1900a9b16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9b16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182bd60b8)();
  return;
}



// ===== continuation @ rva 100a8d9f (image 1900a8d9f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a8d9f(void)

{
  (*_DAT_182bd5fe8)();
  return;
}



// ===== continuation @ rva 100a9b53 (image 1900a9b53) =====

void FUN_1900a9b53(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a7c46 (image 1900a7c46) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a7c46(void)

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



// ===== continuation @ rva 1010f5fc (image 19010f5fc) =====

void FUN_19010f5fc(void)

{
  return;
}



// ===== continuation @ rva 1010d05f (image 19010d05f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19010d05f(void)

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



// ===== continuation @ rva 1010f6ec (image 19010f6ec) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19010f6ec(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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



// ===== continuation @ rva 101129fe (image 1901129fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1901129fe(void)

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



// ===== continuation @ rva 1010f301 (image 19010f301) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19010f301(void)

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



// ===== continuation @ rva 1010f4bd (image 19010f4bd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19010f4bd(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x40) = uVar2;
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



// ===== continuation @ rva 10112d63 (image 190112d63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190112d63(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x40) = uVar2;
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



// ===== continuation @ rva 1011274b (image 19011274b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19011274b(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x10) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1010d817 (image 19010d817) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19010d817(void)

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



// ===== continuation @ rva 1010d5e1 (image 19010d5e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19010d5e1(void)

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



// ===== continuation @ rva 1012b41f (image 19012b41f) =====

void FUN_19012b41f(void)

{
  return;
}



// ===== continuation @ rva 1012ab7c (image 19012ab7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012ab7c(void)

{
  FUN_190ddce00();
  (*_DAT_182becd78)();
  return;
}



// ===== continuation @ rva 1012b44f (image 19012b44f) =====

void FUN_19012b44f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1012ae13 (image 19012ae13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19012ae13(void)

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



// ===== continuation @ rva 1012addf (image 19012addf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012addf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  FUN_190dd72e0();
  (*_DAT_182becb58)();
  return;
}



// ===== continuation @ rva 1012ad93 (image 19012ad93) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012ad93(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182becc08)();
  return;
}



// ===== continuation @ rva 1012add4 (image 19012add4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012add4(undefined8 param_1)

{
  undefined8 in_stack_00000030;
  
  (*_DAT_182becd98)(param_1,in_stack_00000030);
  return;
}



// ===== continuation @ rva 1012ae39 (image 19012ae39) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012ae39(void)

{
  FUN_190de3220();
  (*_DAT_182becd28)();
  return;
}



// ===== continuation @ rva 1012b3e3 (image 19012b3e3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012b3e3(void)

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



// ===== continuation @ rva 1012ad35 (image 19012ad35) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012ad35(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182becb88)();
  return;
}



// ===== continuation @ rva 1012aeed (image 19012aeed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012aeed(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_182becd58)();
  return;
}



// ===== continuation @ rva 1002db37 (image 19002db37) =====

void FUN_19002db37(void)

{
  return;
}



// ===== continuation @ rva 1002ad5a (image 19002ad5a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002ad5a(void)

{
  FUN_190ddce00();
  (*_DAT_182bad140)();
  return;
}



// ===== continuation @ rva 1002dafb (image 19002dafb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002dafb(void)

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



// ===== continuation @ rva 1002b012 (image 19002b012) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002b012(void)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong unaff_R15;
  uint uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong uVar23;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auVar24 [16];
  uint uVar27;
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uStack0000000000000034;
  uint uStack0000000000000044;
  int in_stack_00000058;
  
  uVar1 = *(uint *)(in_RAX + (longlong)in_stack_00000058 * 4);
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar15 = _DAT_182bad070;
  uVar8 = (ulonglong)_DAT_182bad070;
  uVar13 = (ulonglong)_DAT_182bad074;
  auVar20._8_8_ = _UNK_182bad2c8;
  auVar20._0_8_ = uVar8 ^ unaff_R15;
  uStack0000000000000034 = _DAT_182bad074;
  auVar16 = pshufb(auVar20 ^ _DAT_182bad2d0,_DAT_1800170c0);
  uVar9 = auVar16._8_8_ + auVar16._0_8_;
  uVar6 = uVar9 + _DAT_1834482d8;
  if (auVar16._4_4_ < 0) {
    uVar6 = _DAT_183448190 ^ uVar9;
  }
  _DAT_1834482f0 = func_0x00019002dbe0(SUB161(auVar20 ^ _DAT_182bad2d0,5) ^ uVar6);
  uVar5 = unaff_R15 + 0x34d505bb | uVar8;
  _DAT_183448168 = (_DAT_183448168 ^ _DAT_1834482f0 & 0xffffffffffff) + uVar5 ^ 0x4c4fceff8256043;
  _DAT_183448128 =
       (_DAT_183448128 * -0x527f9331b843d3 ^ _DAT_183448168) + (_DAT_1834482f0 & 0xffffffffffff);
  _DAT_1834481b8 = _DAT_183448128 ^ _DAT_183448168;
  _DAT_1834481f0 = _DAT_1834482d0 ^ uVar5;
  uVar8 = unaff_R15 + 0x34d505bb & 0xffffffff | uVar8;
  uVar6 = uVar13 ^ unaff_R15;
  uVar9 = uVar6 ^ _DAT_1834481d0;
  uVar11 = unaff_R15 + 0x2457c8ba ^ _DAT_1834482a8;
  lVar10 = uVar6 + _DAT_1834482a8;
  lVar7 = unaff_R15 + _DAT_1834481d0 + 0x2457c8ba;
  uVar6 = uVar9 + lVar10;
  uVar21 = uVar11 + lVar7;
  uVar9 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar9;
  uVar11 = (uVar21 * 0x2000 | uVar21 >> 0x33) ^ uVar11;
  _DAT_183448268 = uVar8;
  _DAT_183448190 =
       func_0x00019002dbe0((uVar11 << 0x1d | uVar11 >> 0x23) - lVar7 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar10);
  uVar13 = unaff_R15 + 0x2457c8ba ^ uVar13;
  _DAT_183448228 =
       (_DAT_183448228 ^ _DAT_183448230 & 0x7ffffffffffffff) + uVar13 ^ 0xb5d99c9dd836a45e;
  _DAT_1834481e0 =
       (_DAT_1834481e0 * -0x308af3f0580e93ad ^ _DAT_183448228) +
       (_DAT_183448230 & 0x7ffffffffffffff);
  _DAT_183448118 = _DAT_1834481e0 ^ _DAT_183448228;
  uVar18 = (uint)uVar13;
  uVar23 = uVar13 & 0xffffffff;
  uVar14 = uVar15 * uVar15 * -0xd46179e;
  uVar9 = (ulonglong)uVar14;
  uVar6 = ((_DAT_183448248 ^ 0x84222325) + (ulonglong)((uint)_DAT_183448248 & 0x84222325) * 2) *
          (uVar9 - _DAT_1834481c0);
  uVar6 = (uVar6 | _DAT_183448180) + (uVar6 & _DAT_183448180);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183448218 = uVar23;
  uStack0000000000000044 = uVar18;
  _DAT_183448258 =
       func_0x00019002dbe0((uVar9 ^ 0x84222325 | uVar6) +
                           (ulonglong)((uint)(uVar9 ^ 0x84222325) & (uint)uVar6));
  uVar4 = uVar15 * uVar15 * 0xd46179e;
  _DAT_183448108 =
       (_DAT_183448108 ^ _DAT_183448258 * -0x7f13cf5e6b08eb05) - uVar9 ^ 0x941883f501a1407c;
  _DAT_183448248 =
       (_DAT_183448248 * 0x2e0bc6ba0b666d7 ^ _DAT_183448108) + _DAT_183448258 * -0x7f13cf5e6b08eb05;
  _DAT_183448270 = _DAT_183448248 ^ _DAT_183448108;
  _DAT_1834481b8 = (ulonglong)uVar4;
  uVar14 = uVar14 + 0xffff;
  uVar9 = CONCAT44(0,uVar14) ^ 0x84222325;
  uVar6 = ((_DAT_1834482b0 ^ uVar9) + (ulonglong)((uint)_DAT_1834482b0 & (uint)uVar9) * 2) *
          (_DAT_1834481b8 - _DAT_183448228);
  uVar6 = (uVar6 | _DAT_183448280) + (uVar6 & _DAT_183448280);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1834482b8 =
       func_0x00019002dbe0((uVar9 ^ _DAT_1834481b8 | uVar6) +
                           (ulonglong)((uint)(uVar9 ^ _DAT_1834481b8) & (uint)uVar6));
  uVar12 = uStack0000000000000034;
  uVar6 = _DAT_1834482b8 - (_DAT_1834482b8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = CONCAT44(0,uVar14);
  uVar30 = uVar14 & uVar4;
  uVar17 = uVar14 | uVar4;
  uVar29 = uVar14 ^ uVar4;
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1834482b8) & 0x7fffffffffffffff;
  auVar31._8_4_ = 0xffffffff;
  auVar31._0_8_ = 0xffffffffffffffff;
  auVar31._12_4_ = 0xffffffff;
  uVar27 = SUB164(auVar28 ^ auVar31,0);
  uVar9 = ((ulonglong)_DAT_182bad350 * (ulonglong)uVar29 << 0x20) +
          (ulonglong)_DAT_182bad340 * (ulonglong)uVar29 +
          ((ulonglong)_DAT_182bad330 * (ulonglong)uVar17 << 0x20) +
          (ulonglong)_DAT_182bad320 * (ulonglong)uVar17 +
          ((ulonglong)_DAT_182bad310 * (ulonglong)uVar30 << 0x20) +
          (ulonglong)_DAT_182bad300 * (ulonglong)uVar30 +
          ((ulonglong)_DAT_182bad2f0 * (ulonglong)uVar4 << 0x20) +
          (ulonglong)_DAT_182bad2e0 * (ulonglong)uVar4 +
          ((ulonglong)uVar14 * (ulonglong)_DAT_182bad2f0 << 0x20) +
          (ulonglong)uVar14 * (ulonglong)_DAT_182bad2e0 +
          (-((ulonglong)uVar27 * (_DAT_182bad3c0 & 0xffffffff) +
            ((ulonglong)_DAT_182bad430 * (ulonglong)uVar27 +
             (SUB168(auVar28 ^ auVar31,0) >> 0x20) * (_DAT_182bad3c0 & 0xffffffff) << 0x20)) -
          (((ulonglong)uVar29 * (ulonglong)_DAT_182bad420 << 0x20) +
           (ulonglong)_DAT_182bad410 * (ulonglong)uVar29 +
           ((ulonglong)uVar17 * (ulonglong)_DAT_182bad400 << 0x20) +
           (ulonglong)_DAT_182bad3f0 * (ulonglong)uVar17 +
          ((ulonglong)uVar30 * (ulonglong)_DAT_182bad3e0 << 0x20) +
          (ulonglong)_DAT_182bad3d0 * (ulonglong)uVar30 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_182bad3b0 << 0x20) +
          (ulonglong)_DAT_182bad3a0 * (ulonglong)uVar4 +
          ((ulonglong)uVar14 * (ulonglong)_DAT_182bad390 << 0x20) +
          (ulonglong)_DAT_182bad380 * (ulonglong)uVar14)) + 0xa1fcb217be7d0e0c;
  _DAT_183448100 = _DAT_183448298 ^ uVar6 ^ uVar9;
  _DAT_1834481f0 = (_DAT_1834481f0 ^ uVar6) + uVar9 ^ 0xfb031e0137a9bb45;
  _DAT_1834482d0 = (_DAT_1834482d0 * -0x70e22089e30b872d ^ _DAT_1834481f0) + uVar6;
  _DAT_183448240 = _DAT_1834482d0 ^ _DAT_1834481f0;
  _DAT_1834482c0 = uVar9 & 0xffffffff;
  uVar14 = uStack0000000000000034 * uStack0000000000000034 * -0x2712914d;
  uVar21 = (ulonglong)uVar14;
  uVar6 = ((_DAT_183448100 ^ 0x84222325) + (ulonglong)((uint)_DAT_183448100 & 0x84222325) * 2) *
          (uVar21 - _DAT_183448260);
  uVar6 = (uVar6 | _DAT_183448130) + (uVar6 & _DAT_183448130);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1834482c0 =
       func_0x00019002dbe0((uVar21 ^ 0x84222325 | uVar6) +
                           (ulonglong)((uint)(uVar21 ^ 0x84222325) & (uint)uVar6));
  _DAT_1834482b8 = (_DAT_1834482b8 ^ _DAT_1834482c0) - uVar21 ^ 0x7fc9ede40606c793;
  _DAT_183448218 = (_DAT_183448218 * 0x34d38e802c73027d ^ _DAT_1834482b8) + _DAT_1834482c0;
  _DAT_1834481a0 = _DAT_183448218 ^ _DAT_1834482b8;
  _DAT_183448240 = -uVar21 & 0xffffffff;
  uVar4 = uVar15 * uVar12 * 0x5d889926;
  uVar11 = (ulonglong)uVar4;
  uVar6 = (_DAT_183448238 ^ 0x84222325) + _DAT_1834481d8 + 0x84222325;
  uVar22 = (uVar11 ^ _DAT_1834481d8) + _DAT_183448238 + uVar11;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183448238 ^ 0x84222325;
  uVar22 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar11 ^ _DAT_1834481d8;
  uVar14 = uVar14 + (int)-uVar21 + (int)uVar9;
  _DAT_183448168 =
       func_0x00019002dbe0((uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_183448238 + uVar11) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1834481d8 + 0x84222325));
  uVar6 = (_DAT_183448168 ^ uVar11) & 0x3fffffffffffffff;
  uVar9 = uVar6 - (((_DAT_183448168 ^ uVar11) & 0x3fffffffffffffff) >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar6;
  uVar12 = uVar15 * uVar12 * -0x5d889926;
  uVar21 = CONCAT44(0,uVar12);
  _DAT_1834481f0 = (_DAT_1834481f0 ^ uVar6) - uVar11 ^ 0x7208d6ce91f89575;
  _DAT_183448160 = (_DAT_183448160 * -0x33916e420a297e59 ^ _DAT_1834481f0) + uVar6;
  _DAT_1834482f0 = _DAT_183448160 ^ _DAT_1834481f0;
  uVar9 = (ulonglong)uVar14 ^ 0x84222325;
  uVar6 = ((_DAT_183448110 ^ uVar9) + (ulonglong)((uint)_DAT_183448110 & (uint)uVar9) * 2) *
          (uVar11 - _DAT_1834482f8);
  uVar6 = (uVar6 | _DAT_183448288) + (uVar6 & _DAT_183448288);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1834481e0 = uVar21;
  _DAT_1834482d0 =
       func_0x00019002dbe0((uVar9 ^ uVar11 | uVar6) +
                           (ulonglong)((uint)(uVar9 ^ uVar11) & (uint)uVar6));
  uVar17 = uVar14 & uVar4;
  uVar15 = uVar14 | uVar4;
  uVar29 = uVar4 ^ 0xffffffff;
  uVar6 = uVar14 * uVar11 ^ _DAT_1834482d0;
  uVar9 = uVar6 & 0xfffffffffffff000;
  uVar6 = uVar9 + (uVar6 >> 0xc & 0xaaaaaaaaaaaaa) * -0x800;
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar9;
  uVar6 = uVar9 >> 1 | uVar9;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar9;
  uVar11 = ((ulonglong)_DAT_182bad4b0 * (ulonglong)uVar29 + _DAT_182bad4c0 << 0x20) +
           (ulonglong)_DAT_182bad4a0 * (ulonglong)uVar29 +
           ((ulonglong)_DAT_182bad490 * (ulonglong)uVar15 << 0x20) +
           (ulonglong)_DAT_182bad480 * (ulonglong)uVar15 +
           ((ulonglong)uVar17 * (ulonglong)_DAT_182bad490 << 0x20) +
           (ulonglong)uVar17 * (ulonglong)_DAT_182bad480 +
           ((ulonglong)_DAT_182bad470 * (ulonglong)uVar4 << 0x20) +
           (ulonglong)_DAT_182bad460 * (ulonglong)uVar4 +
           (ulonglong)_DAT_182bad440 * (ulonglong)uVar14 +
           ((ulonglong)_DAT_182bad450 * (ulonglong)uVar14 << 0x20) +
           (-(((ulonglong)uVar29 * (ulonglong)_DAT_182bad5a0 + _DAT_182bad5b0 << 0x20) +
             (ulonglong)_DAT_182bad590 * (ulonglong)uVar29) -
           (((ulonglong)(uVar14 ^ uVar4) * (ulonglong)_DAT_182bad580 << 0x20) +
            (ulonglong)_DAT_182bad570 * (ulonglong)(uVar14 ^ uVar4) +
            ((ulonglong)uVar15 * (ulonglong)_DAT_182bad560 << 0x20) +
            (ulonglong)_DAT_182bad550 * (ulonglong)uVar15 +
           ((ulonglong)uVar17 * (ulonglong)_DAT_182bad540 << 0x20) +
           (ulonglong)_DAT_182bad530 * (ulonglong)uVar17 +
           ((ulonglong)uVar4 * (ulonglong)_DAT_182bad520 << 0x20) +
           (ulonglong)_DAT_182bad510 * (ulonglong)uVar4 +
           (ulonglong)_DAT_182bad4f0 * (ulonglong)uVar14 +
           ((ulonglong)uVar14 * (ulonglong)_DAT_182bad500 << 0x20))) + 0xdd812afda65fe250;
  _DAT_183448168 = _DAT_1834481e0 ^ uVar9 ^ uVar11;
  _DAT_1834481c0 = (_DAT_1834481c0 ^ uVar9) + uVar11 ^ 0x98f93d03950662da;
  _DAT_183448268 = (_DAT_183448268 * -0x6cce770811749639 ^ _DAT_1834481c0) + uVar9;
  _DAT_183448218 = _DAT_183448268 ^ _DAT_1834481c0;
  uVar9 = uVar11 & 0xffffffff;
  uVar6 = uVar9 ^ 0x84222325 ^ _DAT_1834481e8;
  lVar7 = (uVar9 ^ 0x84222325) + _DAT_183448268;
  uVar22 = uVar6 + lVar7;
  uVar25 = (uVar21 ^ _DAT_183448268) + _DAT_1834481e8 + uVar21;
  uVar6 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar6;
  uVar22 = (uVar25 * 0x2000 | uVar25 >> 0x33) ^ uVar21 ^ _DAT_183448268;
  _DAT_183448160 = uVar9;
  _DAT_1834482b8 =
       func_0x00019002dbe0((uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_1834481e8 + uVar21) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  uVar15 = (uint)uVar11;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar21;
  uVar14 = uVar15 & uVar12;
  uVar4 = uVar15 ^ uVar12;
  uVar15 = uVar15 ^ 0xffffffff;
  uVar29 = SUB164(auVar32 ^ auVar31,0);
  uVar9 = (uVar9 * uVar21 ^ _DAT_1834482b8) & 0xfffffffffe000000;
  uVar6 = uVar9 >> 1 | uVar9;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar9;
  uVar6 = (uVar11 & 0xffffffff) * (ulonglong)uVar12;
  lVar7 = (uVar6 & 0xffffffff) * (ulonglong)_DAT_182bad690 +
          ((ulonglong)_DAT_182bad6a0 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_DAT_182bad690 << 0x20);
  uVar11 = (((ulonglong)uVar29 * (ulonglong)_DAT_182bad670 +
             ((ulonglong)_DAT_182bad680 * (ulonglong)uVar29 +
              (SUB168(auVar32 ^ auVar31,0) >> 0x20) * (ulonglong)_DAT_182bad670 << 0x20) +
             ((ulonglong)_DAT_182bad650 * (ulonglong)uVar15 + _DAT_182bad660 << 0x20) +
             (ulonglong)_DAT_182bad640 * (ulonglong)uVar15 +
             ((ulonglong)_DAT_182bad630 * (ulonglong)uVar4 << 0x20) +
             (ulonglong)_DAT_182bad620 * (ulonglong)uVar4 +
             ((ulonglong)_DAT_182bad610 * (ulonglong)uVar14 << 0x20) +
             (ulonglong)_DAT_182bad600 * (ulonglong)uVar14 +
             ((ulonglong)_DAT_182bad5f0 * (ulonglong)uVar12 << 0x20) +
             (ulonglong)_DAT_182bad5e0 * (ulonglong)uVar12 +
             (ulonglong)_DAT_182bad5c0 * (uVar11 & 0xffffffff) +
             ((ulonglong)_DAT_182bad5d0 * (uVar11 & 0xffffffff) << 0x20) + lVar7) -
           (((ulonglong)uVar15 * (ulonglong)_DAT_182bad740 + _DAT_182bad750 << 0x20) +
            (ulonglong)_DAT_182bad730 * (ulonglong)uVar15 + lVar7 +
           ((ulonglong)uVar4 * (ulonglong)_DAT_182bad720 << 0x20) +
           (ulonglong)_DAT_182bad710 * (ulonglong)uVar4 +
           ((ulonglong)uVar14 * (ulonglong)_DAT_182bad700 << 0x20) +
           (ulonglong)_DAT_182bad6f0 * (ulonglong)uVar14 +
           ((ulonglong)uVar12 * (ulonglong)_DAT_182bad6e0 << 0x20) +
           (ulonglong)_DAT_182bad6d0 * (ulonglong)uVar12 +
           (ulonglong)_DAT_182bad6b0 * (uVar11 & 0xffffffff) +
           ((uVar11 & 0xffffffff) * (ulonglong)_DAT_182bad6c0 << 0x20))) + 0xa76254caf37a8a94;
  _DAT_183448230 = _DAT_1834481e8 ^ uVar9 ^ uVar11;
  _DAT_183448188 = (_DAT_183448188 ^ uVar9) + uVar11 ^ 0x333bf64bcb09444c;
  _DAT_183448198 = (_DAT_183448198 * -0x7e0aa7b55b023f17 ^ _DAT_183448188) + uVar9;
  _DAT_183448210 = _DAT_183448198 ^ _DAT_183448188;
  uVar9 = uVar11 & 0xffffffff;
  uVar22 = uVar8 ^ 0x84222325;
  uStack0000000000000034 = (uint)uVar22;
  uVar6 = ((_DAT_1834482b0 ^ uVar22) +
          (ulonglong)(uStack0000000000000034 & (uint)_DAT_1834482b0) * 2) *
          (uVar23 - _DAT_1834481e0);
  uVar6 = (uVar6 | _DAT_1834482d8) + (uVar6 & _DAT_1834482d8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183448170 = uVar9;
  _DAT_1834482b0 =
       func_0x00019002dbe0((uVar22 ^ uVar23 | uVar6) +
                           (ulonglong)((uint)(uVar22 ^ uVar23) & (uint)uVar6));
  uVar15 = (uint)uVar8;
  uVar4 = uVar15 & uVar18;
  uVar12 = uVar15 | uVar18;
  uVar18 = uVar15 ^ uVar18;
  uVar6 = uVar8 * uVar23 ^ _DAT_1834482b0;
  uVar15 = uVar15 ^ 0xffffffff;
  uVar21 = ((((ulonglong)_DAT_182bad770 * (ulonglong)uVar15 + _DAT_182bad7d0 << 0x20) +
             (ulonglong)_DAT_182bad7c0 * (ulonglong)uVar15 +
             ((ulonglong)_DAT_182bad790 * (ulonglong)uVar18 << 0x20) +
             (ulonglong)_DAT_182bad780 * (ulonglong)uVar18 +
             ((ulonglong)uVar4 * (ulonglong)_DAT_182bad790 << 0x20) +
             (ulonglong)uVar4 * (ulonglong)_DAT_182bad780 +
             (uVar8 * _DAT_182bad770 << 0x20) + (uVar13 & 0xffffffff) + _DAT_182bad760 * uVar8 +
            ((ulonglong)_DAT_182bad7b0 * (ulonglong)uVar12 << 0x20) +
            (ulonglong)_DAT_182bad7a0 * (ulonglong)uVar12) -
           (((ulonglong)uVar15 * (ulonglong)_DAT_182bad810 + _DAT_182bad860 << 0x20) +
            (ulonglong)_DAT_182bad800 * (ulonglong)uVar15 +
            ((ulonglong)uVar18 * (ulonglong)_DAT_182bad830 << 0x20) +
            (ulonglong)_DAT_182bad820 * (ulonglong)uVar18 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_182bad830 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_182bad820 +
            (uVar8 * _DAT_182bad810 << 0x20) + uVar8 * _DAT_182bad800 +
           ((ulonglong)uVar12 * (ulonglong)_DAT_182bad850 << 0x20) +
           (ulonglong)_DAT_182bad840 * (ulonglong)uVar12)) + 0xa34ec24deac15d6e;
  _DAT_183448178 = _DAT_183448210 ^ uVar6 ^ uVar21;
  _DAT_1834482f0 = (_DAT_1834482f0 ^ uVar6) + uVar21 ^ 0x38918a2c7731ba8c;
  _DAT_1834482e8 = (_DAT_1834482e8 * 0x4442711b8629322b ^ _DAT_1834482f0) + uVar6;
  _DAT_183448150 = _DAT_1834482e8 ^ _DAT_1834482f0;
  uVar6 = uVar21 & 0xffffffff;
  uVar13 = (uVar22 ^ _DAT_183448268) + _DAT_183448100 + uVar22;
  uVar25 = (uVar23 ^ _DAT_183448100) + _DAT_183448268 + uVar23;
  uVar13 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar22 ^ _DAT_183448268;
  uVar25 = (uVar25 * 0x2000 | uVar25 >> 0x33) ^ uVar23 ^ _DAT_183448100;
  _DAT_183448290 = uVar6;
  _DAT_1834481f0 =
       func_0x00019002dbe0((uVar25 << 0x1d | uVar25 >> 0x23) - (_DAT_183448268 + uVar23) ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - (_DAT_183448100 + uVar22));
  _DAT_1834481d8 = uVar23 ^ uVar8;
  _DAT_183448250 = (_DAT_1834482f0 ^ _DAT_1834481f0) + _DAT_1834481d8 ^ 0x81fa9e5efcec3f55;
  _DAT_1834482f0 = (_DAT_1834482f0 * -0x6a4f6ddd4550698d ^ _DAT_183448250) + _DAT_1834481f0;
  _DAT_183448250 = _DAT_1834482f0 ^ _DAT_183448250;
  uVar12 = (int)_DAT_1834481d8 + (uStack0000000000000044 & (uint)uVar5) * 2;
  uVar23 = (ulonglong)uVar12;
  uVar13 = uVar6 ^ 0x84222325 ^ _DAT_183448248;
  lVar7 = (uVar6 ^ 0x84222325) + _DAT_1834481a0;
  uVar25 = uVar13 + lVar7;
  uVar26 = (uVar23 ^ _DAT_1834481a0) + _DAT_183448248 + uVar23;
  uVar13 = (uVar25 * 0x2000 | uVar25 >> 0x33) ^ uVar13;
  uVar25 = (uVar26 * 0x2000 | uVar26 >> 0x33) ^ uVar23 ^ _DAT_1834481a0;
  _DAT_1834482a8 =
       func_0x00019002dbe0((uVar25 << 0x1d | uVar25 >> 0x23) - (_DAT_183448248 + uVar23) ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - lVar7);
  uVar6 = uVar6 * uVar23 ^ _DAT_1834482a8 ^ uVar6;
  uVar13 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar6;
  uVar15 = (uint)uVar21;
  uVar4 = uVar12 ^ 0xffffffff;
  uVar13 = ((((ulonglong)_DAT_182bad920 * (ulonglong)uVar4 + _DAT_182bad930 << 0x20) +
             (ulonglong)_DAT_182bad910 * (ulonglong)uVar4 +
            ((ulonglong)(uVar15 ^ uVar12) * (ulonglong)_DAT_182bad900 << 0x20) +
            (ulonglong)_DAT_182bad8f0 * (ulonglong)(uVar15 ^ uVar12) +
            ((ulonglong)(uVar15 | uVar12) * (ulonglong)_DAT_182bad8e0 << 0x20) +
            (ulonglong)_DAT_182bad8d0 * (ulonglong)(uVar15 | uVar12) +
            ((ulonglong)(uVar15 & uVar12) * (ulonglong)_DAT_182bad8c0 << 0x20) +
            (ulonglong)_DAT_182bad8b0 * (ulonglong)(uVar15 & uVar12) +
            ((ulonglong)_DAT_182bad8a0 * (ulonglong)uVar12 << 0x20) +
            (ulonglong)_DAT_182bad890 * (ulonglong)uVar12 +
            (ulonglong)_DAT_182bad870 * (uVar21 & 0xffffffff) +
            ((ulonglong)_DAT_182bad880 * (uVar21 & 0xffffffff) << 0x20)) -
           (((ulonglong)uVar4 * (ulonglong)_DAT_182bad990 + _DAT_182bad9b0 << 0x20) +
            (ulonglong)_DAT_182bad980 * (ulonglong)uVar4 +
            ((ulonglong)uVar12 * (ulonglong)_DAT_182bad990 << 0x20) +
            (ulonglong)uVar12 * (ulonglong)_DAT_182bad980 +
            (uVar21 & 0xffffffff) * (ulonglong)_DAT_182bad960 +
            ((uVar21 & 0xffffffff) * (ulonglong)_DAT_182bad970 << 0x20) +
           ((ulonglong)(uVar15 ^ 0xffffffff) * (ulonglong)_DAT_182bad970 + _DAT_182bad9a0 << 0x20) +
           (ulonglong)_DAT_182bad960 * (ulonglong)(uVar15 ^ 0xffffffff))) + 0xbac10415af1ce46d;
  _DAT_1834481e0 = uVar13 ^ uVar6;
  _DAT_183448220 = (_DAT_183448220 ^ uVar6) + uVar13 ^ 0x3de34f835d6a4df;
  _DAT_183448250 = (_DAT_183448250 * 0x66b0227ec7eab001 ^ _DAT_183448220) + uVar6;
  _DAT_183448220 = _DAT_183448250 ^ _DAT_183448220;
  uVar21 = uVar13 & 0xffffffff;
  uVar6 = uVar9 ^ 0x84222325 ^ _DAT_1834482f0;
  lVar7 = (uVar9 ^ 0x84222325) + _DAT_183448248;
  uVar23 = uVar6 + lVar7;
  uVar25 = (uVar21 ^ _DAT_183448248) + _DAT_1834482f0 + uVar21;
  uVar6 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ uVar6;
  uVar23 = (uVar25 * 0x2000 | uVar25 >> 0x33) ^ uVar21 ^ _DAT_183448248;
  _DAT_183448288 = uVar21;
  _DAT_183448290 =
       func_0x00019002dbe0((uVar23 << 0x1d | uVar23 >> 0x23) - (_DAT_1834482f0 + uVar21) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  auVar20 = _DAT_1800170c0;
  uVar9 = uVar9 * uVar21 ^ _DAT_183448290 ^ uVar9;
  uVar15 = (uint)uVar11;
  uVar12 = (uint)uVar13;
  uVar4 = uVar15 ^ 0xffffffff;
  uVar18 = uVar12 ^ 0xffffffff;
  uVar13 = ((((ulonglong)_DAT_182bada60 * (ulonglong)uVar18 + _DAT_182bada70 << 0x20) +
             (ulonglong)_DAT_182bada50 * (ulonglong)uVar18 +
             ((ulonglong)(uVar15 | uVar12) * (ulonglong)_DAT_182bada10 << 0x20) +
             (ulonglong)_DAT_182bada00 * (ulonglong)(uVar15 | uVar12) +
             ((ulonglong)(uVar15 & uVar12) * (ulonglong)_DAT_182bada10 << 0x20) +
             (ulonglong)(uVar15 & uVar12) * (ulonglong)_DAT_182bada00 +
             ((ulonglong)_DAT_182bad9f0 * (uVar13 & 0xffffffff) << 0x20) +
             (ulonglong)_DAT_182bad9e0 * (uVar13 & 0xffffffff) +
             (ulonglong)_DAT_182bad9c0 * (uVar11 & 0xffffffff) +
             ((ulonglong)_DAT_182bad9d0 * (uVar11 & 0xffffffff) << 0x20) +
            ((ulonglong)_DAT_182bada30 * (ulonglong)uVar4 + _DAT_182bada40 << 0x20) +
            (ulonglong)_DAT_182bada20 * (ulonglong)uVar4) -
           (((ulonglong)uVar18 * (ulonglong)_DAT_182badad0 + _DAT_182badaf0 << 0x20) +
            (ulonglong)_DAT_182badac0 * (ulonglong)uVar18 +
            ((uVar13 & 0xffffffff) * (ulonglong)_DAT_182badad0 << 0x20) +
            (uVar13 & 0xffffffff) * (ulonglong)_DAT_182badac0 +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_182badaa0 +
            ((uVar11 & 0xffffffff) * (ulonglong)_DAT_182badab0 << 0x20) +
           ((ulonglong)uVar4 * (ulonglong)_DAT_182badab0 + _DAT_182badae0 << 0x20) +
           (ulonglong)_DAT_182badaa0 * (ulonglong)uVar4)) + 0xd1cd25252120ec04;
  _DAT_183448160 = _DAT_1834481d8 ^ uVar9 ^ uVar13;
  _DAT_1834481b8 = (_DAT_1834481b8 ^ uVar9) + uVar13 ^ 0x7398abf3a79dd7e1;
  _DAT_183448140 = (_DAT_183448140 * -0x506d22c2a89fcd5d ^ _DAT_1834481b8) + uVar9;
  _DAT_1834481b0 = _DAT_183448140 ^ _DAT_1834481b8;
  auVar16._8_8_ = _UNK_1802126f8;
  auVar16._0_8_ = uVar22;
  uVar9 = uVar13 & 0xffffffff;
  auVar28 = pshufb(auVar16 ^ _DAT_182badb00,_DAT_1800170c0);
  uVar11 = auVar28._8_8_ + auVar28._0_8_;
  uVar6 = uVar11 + _DAT_183448108;
  if (auVar28._4_4_ < 0) {
    uVar6 = _DAT_1834482a8 ^ uVar11;
  }
  _DAT_183448200 = uVar9;
  _DAT_183448220 = func_0x00019002dbe0(SUB161(auVar16 ^ _DAT_182badb00,5) ^ uVar6);
  uVar6 = _DAT_183448220 >> 1 | _DAT_183448220;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_183448220;
  uVar15 = (int)(0x84222325 - uVar8) + 0x7bdddcda;
  _DAT_1834481c8 = (_DAT_1834481c8 ^ uVar6) + (0x84222325 - uVar8) + 0x7bdddcda ^ 0xb1c6807215d722db
  ;
  _DAT_183448160 = (_DAT_183448160 * -0x332480ac2772bf5b ^ _DAT_1834481c8) + uVar6;
  _DAT_1834481c0 = _DAT_183448160 ^ _DAT_1834481c8;
  uVar11 = (ulonglong)uVar15;
  uVar6 = ((_DAT_183448198 ^ uVar22) +
          (ulonglong)((uint)_DAT_183448198 & uStack0000000000000034) * 2) *
          (uVar11 - _DAT_183448128);
  uVar6 = (uVar6 | _DAT_183448138) + (uVar6 & _DAT_183448138);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183448120 = uVar11;
  _DAT_1834482a8 =
       func_0x00019002dbe0((uVar22 ^ uVar11 | uVar6) +
                           (ulonglong)((uint)(uVar22 ^ uVar11) & (uint)uVar6));
  uVar6 = (uVar8 | uVar11) ^ _DAT_1834482a8;
  uVar15 = (uint)uVar5 & uVar15;
  _DAT_1834482d0 = (_DAT_1834481a0 ^ uVar6) + (ulonglong)uVar15 ^ 0x23a0ac2dd0a79f99;
  _DAT_183448290 = (_DAT_183448290 * -0x4c0f16450034b295 ^ _DAT_1834482d0) + uVar6;
  _DAT_1834482d0 = _DAT_183448290 ^ _DAT_1834482d0;
  uVar12 = uVar15 * -0x1a0f1f6a;
  uVar8 = CONCAT44(0,uVar12);
  uVar6 = uVar9 ^ 0x84222325 ^ _DAT_183448240;
  lVar7 = (uVar9 ^ 0x84222325) + _DAT_1834481b0;
  uVar5 = uVar6 + lVar7;
  uVar11 = (uVar8 ^ _DAT_1834481b0) + _DAT_183448240 + uVar8;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
  uVar5 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar8 ^ _DAT_1834481b0;
  _DAT_1834481a0 = (ulonglong)uVar15;
  _DAT_183448180 =
       func_0x00019002dbe0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183448240 + uVar8) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  uVar9 = ~_DAT_183448180 & uVar9;
  uVar15 = (uint)uVar13;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  uVar14 = uVar15 & uVar12;
  uVar4 = uVar15 | uVar12;
  uVar6 = (uVar13 & 0xffffffff) * (ulonglong)uVar12;
  lVar7 = (uVar6 & 0xffffffff) * (ulonglong)_DAT_182badb50 +
          ((ulonglong)_DAT_182badb60 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_DAT_182badb50 << 0x20);
  uVar18 = SUB164(auVar24 ^ auVar31,0);
  uVar8 = ((ulonglong)_DAT_182badb40 * (ulonglong)uVar4 << 0x20) +
          (ulonglong)_DAT_182badb30 * (ulonglong)uVar4 +
          ((ulonglong)uVar14 * (ulonglong)_DAT_182badb40 << 0x20) +
          (ulonglong)uVar14 * (ulonglong)_DAT_182badb30 +
          ((ulonglong)_DAT_182badb20 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_DAT_182badb10 * (ulonglong)uVar12 +
          (uVar13 & 0xffffffff) * (ulonglong)_DAT_182badb10 +
          ((uVar13 & 0xffffffff) * (ulonglong)_DAT_182badb20 << 0x20) + lVar7 +
          (-(((ulonglong)(uVar15 ^ uVar12) * (ulonglong)_DAT_182badc10 << 0x20) +
             (ulonglong)_DAT_182badc00 * (ulonglong)(uVar15 ^ uVar12) +
             ((ulonglong)uVar4 * (ulonglong)_DAT_182badbf0 << 0x20) +
             (ulonglong)_DAT_182badbe0 * (ulonglong)uVar4 +
            ((ulonglong)uVar14 * (ulonglong)_DAT_182badbd0 << 0x20) +
            (ulonglong)_DAT_182badbc0 * (ulonglong)uVar14 +
            ((ulonglong)uVar12 * (ulonglong)_DAT_182badba0 << 0x20) +
            (ulonglong)_DAT_182badb90 * (ulonglong)uVar12 +
            (ulonglong)_DAT_182badb70 * (uVar13 & 0xffffffff) +
            ((uVar13 & 0xffffffff) * (ulonglong)_DAT_182badb80 << 0x20)) -
          ((ulonglong)uVar18 * (ulonglong)_DAT_182badbb0 +
           ((ulonglong)_DAT_182badc20 * (ulonglong)uVar18 +
            (SUB168(auVar24 ^ auVar31,0) >> 0x20) * (ulonglong)_DAT_182badbb0 << 0x20) + lVar7)) +
          0xfd90f5eae126e476;
  _DAT_183448170 = _DAT_1834481b8 ^ uVar9 ^ uVar8;
  _DAT_183448288 = (_DAT_183448288 ^ uVar9) + uVar8 ^ 0xa615414ebb833c64;
  _DAT_183448208 = (_DAT_183448208 * 0x4e02cff7967c893b ^ _DAT_183448288) + uVar9;
  _DAT_183448190 = _DAT_183448208 ^ _DAT_183448288;
  _DAT_183448290 = uVar8 & 0xffffffff;
  uVar6 = _DAT_183448290 ^ 0x84222325 ^ _DAT_183448168;
  lVar7 = (_DAT_183448290 ^ 0x84222325) + _DAT_183448218;
  uVar9 = uVar6 + lVar7;
  uVar6 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar6;
  uVar9 = ((_DAT_183448218 + _DAT_183448168) * 0x2000 | _DAT_183448218 + _DAT_183448168 >> 0x33) ^
          _DAT_183448218;
  _DAT_1834482d0 =
       func_0x00019002dbe0((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_183448168 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  uVar6 = _DAT_1834482d0 - (_DAT_1834482d0 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar2 + (uint)bVar2 ^ _DAT_1834482d0;
  uVar15 = (uint)uVar8 ^ 0xffffffff;
  uVar8 = ((((ulonglong)_DAT_182badc80 * (uVar8 & 0xffffffff) << 0x20) +
            (uVar8 & 0xffffffff) * (ulonglong)_DAT_182badc70 +
           ((ulonglong)_DAT_182badc60 * (uVar8 & 0xffffffff) << 0x20) +
           (ulonglong)_DAT_182badc50 * (uVar8 & 0xffffffff) +
           ((ulonglong)_DAT_182badc40 * (uVar8 & 0xffffffff) << 0x20) +
           (ulonglong)_DAT_182badc30 * (uVar8 & 0xffffffff)) -
          (((ulonglong)uVar15 * (ulonglong)_DAT_182badce0 + _DAT_182badcf0 << 0x20) +
           (ulonglong)_DAT_182badcd0 * (ulonglong)uVar15 +
          ((uVar8 & 0xffffffff) * (ulonglong)_DAT_182badcc0 << 0x20) +
          (ulonglong)_DAT_182badcb0 * (uVar8 & 0xffffffff) +
          ((ulonglong)_DAT_182badca0 * (uVar8 & 0xffffffff) << 0x20) +
          (ulonglong)_DAT_182badc90 * (uVar8 & 0xffffffff))) + 0x94091144339dca10;
  _DAT_1834482d8 = _DAT_183448248 ^ uVar6 ^ uVar8;
  _DAT_183448140 = (_DAT_183448140 ^ uVar6) + uVar8 ^ 0x71d52a7a0fde2b1a;
  _DAT_1834482f8 = (_DAT_1834482f8 * 0x1303644e2d3a89b9 ^ _DAT_183448140) + uVar6;
  _DAT_183448250 = _DAT_1834482f8 ^ _DAT_183448140;
  _DAT_183448278 = uVar8 & 0xffffffff;
  auVar19._4_4_ = 0;
  auVar19._0_4_ = uVar1 ^ 0x84222325;
  auVar19._8_8_ = _DAT_183448278;
  auVar20 = pshufb(auVar19 ^ _DAT_182badd00,auVar20);
  uVar9 = auVar20._8_8_ + auVar20._0_8_;
  uVar6 = uVar9 + _DAT_183448270;
  if (auVar20._4_4_ < 0) {
    uVar6 = _DAT_1834482a0 ^ uVar9;
  }
  _DAT_183448298 = func_0x00019002dbe0(SUB161(auVar19 ^ _DAT_182badd00,5) ^ uVar6);
  _DAT_183448118 = (ulonglong)(uVar1 & (uint)uVar8);
  _DAT_183448228 =
       (_DAT_183448228 ^ _DAT_183448268 * -0x5562fe1419eb4371) + _DAT_183448118 ^ 0xb1a213bff72e410b
  ;
  _DAT_1834481e8 =
       (_DAT_1834481e8 * -0x52e41658ac80962f ^ _DAT_183448228) +
       _DAT_183448268 * -0x5562fe1419eb4371;
  _DAT_183448110 = _DAT_1834481e8 ^ _DAT_183448228;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x1152,0x41);
  cVar3 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar3 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1002afbf (image 19002afbf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002afbf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_182bad160)();
  return;
}



// ===== continuation @ rva 1002ae99 (image 19002ae99) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002ae99(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  FUN_190dd72e0();
  (*_DAT_182bad2b0)();
  return;
}



// ===== continuation @ rva 1002ae37 (image 19002ae37) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002ae37(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bad1d0)();
  return;
}



// ===== continuation @ rva 1002ae78 (image 19002ae78) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002ae78(undefined8 param_1)

{
  undefined8 in_stack_00000028;
  
  (*_DAT_182bad130)(param_1,in_stack_00000028);
  return;
}



// ===== continuation @ rva 1002ae12 (image 19002ae12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19002ae12(void)

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



// ===== continuation @ rva 1002dba3 (image 19002dba3) =====

void FUN_19002dba3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1002d830 (image 19002d830) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19002d830(void)

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



// ===== continuation @ rva 1002ae83 (image 19002ae83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002ae83(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182bad200)();
  return;
}



// ===== continuation @ rva 10031dc6 (image 190031dc6) =====

void FUN_190031dc6(void)

{
  return;
}



// ===== continuation @ rva 1002dd34 (image 19002dd34) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19002dd34(void)

{
  FUN_190ddce00();
  (*_DAT_182bae3c8)();
  return;
}



// ===== continuation @ rva 10031e32 (image 190031e32) =====

void FUN_190031e32(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10031922 (image 190031922) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190031922(void)

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



// ===== continuation @ rva 10031db7 (image 190031db7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190031db7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182badf78)();
  return;
}



// ===== continuation @ rva 10031cd7 (image 190031cd7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190031cd7(void)

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



// ===== continuation @ rva 10031058 (image 190031058) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190031058(void)

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



// ===== continuation @ rva 10031b00 (image 190031b00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190031b00(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bae128)();
  return;
}



// ===== continuation @ rva 1003122f (image 19003122f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19003122f(void)

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



// ===== continuation @ rva 1003165f (image 19003165f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19003165f(void)

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



// ===== continuation @ rva 10031c7e (image 190031c7e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190031c7e(void)

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



// ===== continuation @ rva 10031d9c (image 190031d9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190031d9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182bae2b8)();
  return;
}



// ===== continuation @ rva 10031fc6 (image 190031fc6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190031fc6(void)

{
  FUN_190dd72e0();
  (*_DAT_182baf188)();
  return;
}



// ===== continuation @ rva 10031f53 (image 190031f53) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190031f53(void)

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



// ===== continuation @ rva 100320a6 (image 1900320a6) =====

void FUN_1900320a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1003208d (image 19003208d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19003208d(void)

{
  (*_DAT_182baf198)();
  return;
}



// ===== continuation @ rva 10031fee (image 190031fee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190031fee(void)

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



// ===== continuation @ rva 1003209e (image 19003209e) =====

void FUN_19003209e(void)

{
  return;
}



// ===== continuation @ rva 10031f8c (image 190031f8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190031f8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182baf1f8)();
  return;
}



// ===== continuation @ rva 10032066 (image 190032066) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190032066(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182baf178)();
  return;
}



// ===== continuation @ rva 10032042 (image 190032042) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190032042(void)

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



// ===== continuation @ rva 100321c6 (image 1900321c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900321c6(void)

{
  FUN_190dd72e0();
  (*_DAT_182baf348)();
  return;
}



// ===== continuation @ rva 10032153 (image 190032153) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190032153(void)

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



// ===== continuation @ rva 1003244f (image 19003244f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19003244f(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182baf2f8)();
  return;
}



// ===== continuation @ rva 100323bc (image 1900323bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900323bc(void)

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



// ===== continuation @ rva 10032484 (image 190032484) =====

void FUN_190032484(void)

{
  return;
}



// ===== continuation @ rva 100322ed (image 1900322ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900322ed(void)

{
  FUN_190de3220();
  (*_DAT_182baf378)();
  return;
}



// ===== continuation @ rva 10032344 (image 190032344) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190032344(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182baf358)();
  return;
}



// ===== continuation @ rva 1003248c (image 19003248c) =====

void FUN_19003248c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100321b1 (image 1900321b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900321b1(void)

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



// ===== continuation @ rva 10032242 (image 190032242) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190032242(void)

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



// ===== continuation @ rva 100322a4 (image 1900322a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900322a4(void)

{
  FUN_190dd72e0();
  (*_DAT_182baf318)();
  return;
}



// ===== continuation @ rva 10032e2b (image 190032e2b) =====

void FUN_190032e2b(void)

{
  return;
}



// ===== continuation @ rva 1003259d (image 19003259d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19003259d(void)

{
  FUN_190ddfc90();
  (*_DAT_182baf4c8)();
  return;
}



// ===== continuation @ rva 100326e2 (image 1900326e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900326e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_182baf418)();
  return;
}



// ===== continuation @ rva 10032e37 (image 190032e37) =====

void FUN_190032e37(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100326ff (image 1900326ff) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900326ff(void)

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



// ===== continuation @ rva 10032818 (image 190032818) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190032818(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_182baf448)();
  return;
}



// ===== continuation @ rva 10032dee (image 190032dee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190032dee(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182baf598)();
  return;
}



// ===== continuation @ rva 10032835 (image 190032835) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190032835(void)

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



// ===== continuation @ rva 10032e07 (image 190032e07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190032e07(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182baf678)();
  return;
}



// ===== continuation @ rva 100328d5 (image 1900328d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900328d5(void)

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



// ===== continuation @ rva 10032c47 (image 190032c47) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190032c47(void)

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



// ===== continuation @ rva 1003301d (image 19003301d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19003301d(void)

{
  FUN_190dd72e0();
  (*_DAT_182baf9c8)();
  return;
}



// ===== continuation @ rva 10032f9f (image 190032f9f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190032f9f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bafa88)();
  return;
}



// ===== continuation @ rva 10033b00 (image 190033b00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190033b00(void)

{
  FUN_190dd9df0();
  (*_DAT_182bafa78)();
  return;
}



// ===== continuation @ rva 10033a83 (image 190033a83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190033a83(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182baf968)();
  return;
}



// ===== continuation @ rva 10033cc1 (image 190033cc1) =====

void FUN_190033cc1(void)

{
  return;
}



// ===== continuation @ rva 10033850 (image 190033850) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190033850(void)

{
  FUN_190dd72e0();
  (*_DAT_182baf7d8)();
  return;
}



// ===== continuation @ rva 10033d08 (image 190033d08) =====

void FUN_190033d08(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100339af (image 1900339af) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900339af(void)

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



// ===== continuation @ rva 10033878 (image 190033878) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190033878(void)

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



// ===== continuation @ rva 10033814 (image 190033814) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190033814(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182baf888)();
  return;
}



// ===== continuation @ rva 100336a3 (image 1900336a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900336a3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184194800();
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



// ===== continuation @ rva 10033651 (image 190033651) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190033651(void)

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



// ===== continuation @ rva 100330e3 (image 1900330e3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900330e3(void)

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



// ===== continuation @ rva 10033e95 (image 190033e95) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190033e95(void)

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



// ===== continuation @ rva 10033e28 (image 190033e28) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190033e28(void)

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



// ===== continuation @ rva 100341e7 (image 1900341e7) =====

void FUN_1900341e7(void)

{
  return;
}



// ===== continuation @ rva 1003412c (image 19003412c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19003412c(void)

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



// ===== continuation @ rva 10034172 (image 190034172) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190034172(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd9df0();
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



// ===== continuation @ rva 100341c6 (image 1900341c6) =====

void FUN_1900341c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  return;
}



// ===== continuation @ rva 100341f5 (image 1900341f5) =====

void FUN_1900341f5(longlong *param_1)

{
  (**(code **)(*param_1 + 0x1f0))();
  return;
}



// ===== continuation @ rva 10034158 (image 190034158) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190034158(void)

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



// ===== continuation @ rva 10033e61 (image 190033e61) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190033e61(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
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



// ===== continuation @ rva 100378d4 (image 1900378d4) =====

void FUN_1900378d4(void)

{
  return;
}



// ===== continuation @ rva 100344b6 (image 1900344b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900344b6(void)

{
  FUN_190ddce00();
  (*_DAT_182bb2e48)();
  return;
}



// ===== continuation @ rva 1004a6a2 (image 19004a6a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004a6a2(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182bb1178)();
  return;
}



// ===== continuation @ rva 1004a501 (image 19004a501) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004a501(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  (**(code **)(*in_stack_00000038 + 0x3a0))(in_stack_00000038,in_stack_00000040);
  (*_DAT_182bb4e08)();
  return;
}



// ===== continuation @ rva 10042aff (image 190042aff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190042aff(void)

{
  (*_DAT_182bb41d8)();
  return;
}



// ===== continuation @ rva 10041a19 (image 190041a19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190041a19(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1004bbc2 (image 19004bbc2) =====

void FUN_19004bbc2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10043add (image 190043add) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190043add(void)

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



// ===== continuation @ rva 10043c0b (image 190043c0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190043c0b(void)

{
  (*_DAT_182bb3ef8)();
  return;
}



// ===== continuation @ rva 10042de3 (image 190042de3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190042de3(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10049f9c (image 190049f9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190049f9c(void)

{
  (*_DAT_182bb4f18)();
  return;
}



// ===== continuation @ rva 1004257c (image 19004257c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004257c(void)

{
  (*_DAT_182bb3a68)();
  return;
}



// ===== continuation @ rva 10041c4e (image 190041c4e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190041c4e(void)

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



// ===== continuation @ rva 1004f2d6 (image 19004f2d6) =====

void FUN_19004f2d6(void)

{
  return;
}



// ===== continuation @ rva 1004bde4 (image 19004bde4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004bde4(void)

{
  FUN_190ddce00();
  (*_DAT_182bb75f8)();
  return;
}



// ===== continuation @ rva 1004fe17 (image 19004fe17) =====

void FUN_19004fe17(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1004ea1e (image 19004ea1e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19004ea1e(void)

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



// ===== continuation @ rva 1004e6d6 (image 19004e6d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19004e6d6(void)

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



// ===== continuation @ rva 1004f1b4 (image 19004f1b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004f1b4(void)

{
  FUN_190de3220();
  (*_DAT_182bb7c68)();
  return;
}



// ===== continuation @ rva 1004be17 (image 19004be17) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19004be17(void)

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



// ===== continuation @ rva 1004f0f9 (image 19004f0f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004f0f9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bb7bb8)();
  return;
}



// ===== continuation @ rva 1004ea9b (image 19004ea9b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004ea9b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182bb7ed8)();
  return;
}



// ===== continuation @ rva 1004f6d9 (image 19004f6d9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004f6d9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bb8028)();
  return;
}



// ===== continuation @ rva 1004f003 (image 19004f003) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19004f003(void)

{
  FUN_190dd9df0();
  (*_DAT_182bb76e8)();
  return;
}



// ===== continuation @ rva 1004f415 (image 19004f415) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19004f415(void)

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



// ===== continuation @ rva 10055d52 (image 190055d52) =====

void FUN_190055d52(void)

{
  return;
}



// ===== continuation @ rva 10050066 (image 190050066) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190050066(void)

{
  FUN_190ddce00();
  (*_DAT_182bb8a68)();
  return;
}



// ===== continuation @ rva 1005367d (image 19005367d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005367d(void)

{
  FUN_190dd72e0();
  (*_DAT_182bb8a18)();
  return;
}



// ===== continuation @ rva 10055485 (image 190055485) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190055485(void)

{
  (*_DAT_182bb9838)();
  return;
}



// ===== continuation @ rva 10054671 (image 190054671) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190054671(void)

{
  FUN_190dd72e0();
  (*_DAT_182bb9748)();
  return;
}



// ===== continuation @ rva 1005477a (image 19005477a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005477a(void)

{
  FUN_190dd72e0();
  (*_DAT_182bb9508)();
  return;
}



// ===== continuation @ rva 10055cfe (image 190055cfe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190055cfe(void)

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



// ===== continuation @ rva 10054d56 (image 190054d56) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190054d56(void)

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



// ===== continuation @ rva 100553bc (image 1900553bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900553bc(void)

{
  (*_DAT_182bb9838)();
  return;
}



// ===== continuation @ rva 10055bd8 (image 190055bd8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190055bd8(void)

{
  FUN_190de3220();
  (*_DAT_182bb91b8)();
  return;
}



// ===== continuation @ rva 10055dbe (image 190055dbe) =====

void FUN_190055dbe(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100536aa (image 1900536aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900536aa(void)

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



// ===== continuation @ rva 10060c94 (image 190060c94) =====

void FUN_190060c94(void)

{
  return;
}



// ===== continuation @ rva 1005acd4 (image 19005acd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005acd4(void)

{
  FUN_190ddce00();
  (*_DAT_182bbbf38)();
  return;
}



// ===== continuation @ rva 1005e968 (image 19005e968) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005e968(void)

{
  FUN_190dd72e0();
  (*_DAT_182bbc1b8)();
  return;
}



// ===== continuation @ rva 1005e8eb (image 19005e8eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005e8eb(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bbc6d8)();
  return;
}



// ===== continuation @ rva 10060c83 (image 190060c83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190060c83(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182bbce58)();
  return;
}



// ===== continuation @ rva 1005ed3b (image 19005ed3b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19005ed3b(void)

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



// ===== continuation @ rva 1005f344 (image 19005f344) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005f344(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182bbce08)();
  return;
}



// ===== continuation @ rva 100601f8 (image 1900601f8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900601f8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bbc638)();
  return;
}



// ===== continuation @ rva 1005eeb6 (image 19005eeb6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005eeb6(void)

{
  FUN_190dd9df0();
  (*_DAT_182bbc818)();
  return;
}



// ===== continuation @ rva 10060ab6 (image 190060ab6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190060ab6(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bbc698)();
  return;
}



// ===== continuation @ rva 100607a9 (image 1900607a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900607a9(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_182bbc058)();
  return;
}



// ===== continuation @ rva 10060701 (image 190060701) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190060701(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bbc908)();
  return;
}



// ===== continuation @ rva 1005f264 (image 19005f264) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19005f264(void)

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



// ===== continuation @ rva 100603eb (image 1900603eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900603eb(void)

{
  (*_DAT_182bbcd48)();
  return;
}



// ===== continuation @ rva 1006845b (image 19006845b) =====

void FUN_19006845b(void)

{
  return;
}



// ===== continuation @ rva 10060f60 (image 190060f60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190060f60(void)

{
  FUN_190ddce00();
  (*_DAT_182bbe388)();
  return;
}



// ===== continuation @ rva 100693b0 (image 1900693b0) =====

void FUN_1900693b0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100673ad (image 1900673ad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900673ad(void)

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



// ===== continuation @ rva 100692ea (image 1900692ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900692ea(void)

{
  (*_DAT_182bbfb28)();
  return;
}



// ===== continuation @ rva 100680a0 (image 1900680a0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900680a0(void)

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



// ===== continuation @ rva 100649cb (image 1900649cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900649cb(void)

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



// ===== continuation @ rva 10068f43 (image 190068f43) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190068f43(void)

{
  (*_DAT_182bbf858)();
  return;
}



// ===== continuation @ rva 10064ea2 (image 190064ea2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190064ea2(void)

{
  (*_DAT_182bbf158)();
  return;
}



// ===== continuation @ rva 10065ce7 (image 190065ce7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190065ce7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (*_DAT_182bbed28)();
  return;
}



// ===== continuation @ rva 1006778b (image 19006778b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006778b(void)

{
  (*_DAT_182bbfac8)();
  return;
}



// ===== continuation @ rva 100676b2 (image 1900676b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900676b2(void)

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



// ===== continuation @ rva 1006954b (image 19006954b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006954b(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc0b48)();
  return;
}



// ===== continuation @ rva 100694d8 (image 1900694d8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900694d8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006962d (image 19006962d) =====

void FUN_19006962d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10069573 (image 190069573) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069573(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069623 (image 190069623) =====

void FUN_190069623(void)

{
  return;
}



// ===== continuation @ rva 10069536 (image 190069536) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069536(void)

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



// ===== continuation @ rva 10069612 (image 190069612) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069612(void)

{
  (*_DAT_182bc0b58)();
  return;
}



// ===== continuation @ rva 10069594 (image 190069594) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069594(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc0bc8)();
  return;
}



// ===== continuation @ rva 100695eb (image 1900695eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900695eb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0b88)();
  return;
}



// ===== continuation @ rva 1006974b (image 19006974b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006974b(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc0c88)();
  return;
}



// ===== continuation @ rva 100696d8 (image 1900696d8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900696d8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006982d (image 19006982d) =====

void FUN_19006982d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10069823 (image 190069823) =====

void FUN_190069823(void)

{
  return;
}



// ===== continuation @ rva 100697c7 (image 1900697c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900697c7(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069794 (image 190069794) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069794(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc0c38)();
  return;
}



// ===== continuation @ rva 100697eb (image 1900697eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900697eb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0c68)();
  return;
}



// ===== continuation @ rva 10069812 (image 190069812) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069812(void)

{
  (*_DAT_182bc0c28)();
  return;
}



// ===== continuation @ rva 10069736 (image 190069736) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069736(void)

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



// ===== continuation @ rva 10069773 (image 190069773) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069773(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006994b (image 19006994b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006994b(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc0d18)();
  return;
}



// ===== continuation @ rva 100698d8 (image 1900698d8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900698d8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069a2d (image 190069a2d) =====

void FUN_190069a2d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10069936 (image 190069936) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069936(void)

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



// ===== continuation @ rva 10069973 (image 190069973) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069973(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 100699c7 (image 1900699c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900699c7(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069a23 (image 190069a23) =====

void FUN_190069a23(void)

{
  return;
}



// ===== continuation @ rva 100699eb (image 1900699eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900699eb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0d88)();
  return;
}



// ===== continuation @ rva 10069911 (image 190069911) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069911(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0d08)();
  return;
}



// ===== continuation @ rva 10069b4b (image 190069b4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069b4b(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc0e58)();
  return;
}



// ===== continuation @ rva 10069ad8 (image 190069ad8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069ad8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069c2d (image 190069c2d) =====

void FUN_190069c2d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10069c12 (image 190069c12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069c12(void)

{
  (*_DAT_182bc0e18)();
  return;
}



// ===== continuation @ rva 10069b36 (image 190069b36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069b36(void)

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



// ===== continuation @ rva 10069bc7 (image 190069bc7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069bc7(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069c23 (image 190069c23) =====

void FUN_190069c23(void)

{
  return;
}



// ===== continuation @ rva 10069b94 (image 190069b94) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069b94(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc0e08)();
  return;
}



// ===== continuation @ rva 10069beb (image 190069beb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069beb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x368))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0de8)();
  return;
}



// ===== continuation @ rva 10069d4b (image 190069d4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069d4b(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc0ef8)();
  return;
}



// ===== continuation @ rva 10069cd8 (image 190069cd8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069cd8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069e23 (image 190069e23) =====

void FUN_190069e23(void)

{
  return;
}



// ===== continuation @ rva 10069d94 (image 190069d94) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069d94(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc0ed8)();
  return;
}



// ===== continuation @ rva 10069e2d (image 190069e2d) =====

void FUN_190069e2d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10069dc7 (image 190069dc7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069dc7(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069deb (image 190069deb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069deb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0f08)();
  return;
}



// ===== continuation @ rva 10069d73 (image 190069d73) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069d73(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069e12 (image 190069e12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069e12(void)

{
  (*_DAT_182bc0f48)();
  return;
}



// ===== continuation @ rva 10069d11 (image 190069d11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069d11(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0f38)();
  return;
}



// ===== continuation @ rva 10069f4e (image 190069f4e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069f4e(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc0fb8)();
  return;
}



// ===== continuation @ rva 10069edb (image 190069edb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069edb(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006a026 (image 19006a026) =====

void FUN_19006a026(void)

{
  return;
}



// ===== continuation @ rva 10069fee (image 190069fee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069fee(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x378))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0ff8)();
  return;
}



// ===== continuation @ rva 1006a033 (image 19006a033) =====

void FUN_19006a033(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 10069f76 (image 190069f76) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069f76(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 10069f39 (image 190069f39) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190069f39(void)

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



// ===== continuation @ rva 10069f14 (image 190069f14) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069f14(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc0fd8)();
  return;
}



// ===== continuation @ rva 1006a015 (image 19006a015) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a015(void)

{
  (*_DAT_182bc0fc8)();
  return;
}



// ===== continuation @ rva 10069f97 (image 190069f97) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190069f97(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1018)();
  return;
}



// ===== continuation @ rva 1006a15e (image 19006a15e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a15e(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc10d8)();
  return;
}



// ===== continuation @ rva 1006a0eb (image 19006a0eb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a0eb(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006a236 (image 19006a236) =====

void FUN_19006a236(void)

{
  return;
}



// ===== continuation @ rva 1006a1a7 (image 19006a1a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a1a7(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1108)();
  return;
}



// ===== continuation @ rva 1006a1fe (image 19006a1fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a1fe(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x378))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc10f8)();
  return;
}



// ===== continuation @ rva 1006a124 (image 19006a124) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a124(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc10e8)();
  return;
}



// ===== continuation @ rva 1006a243 (image 19006a243) =====

void FUN_19006a243(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006a186 (image 19006a186) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006a186(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006a149 (image 19006a149) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006a149(void)

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



// ===== continuation @ rva 1006a36b (image 19006a36b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a36b(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc11d8)();
  return;
}



// ===== continuation @ rva 1006a2f8 (image 19006a2f8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a2f8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006a443 (image 19006a443) =====

void FUN_19006a443(void)

{
  return;
}



// ===== continuation @ rva 1006a3b4 (image 19006a3b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a3b4(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc11a8)();
  return;
}



// ===== continuation @ rva 1006a44d (image 19006a44d) =====

void FUN_19006a44d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006a356 (image 19006a356) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006a356(void)

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



// ===== continuation @ rva 1006a432 (image 19006a432) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a432(void)

{
  (*_DAT_182bc1178)();
  return;
}



// ===== continuation @ rva 1006a3e7 (image 19006a3e7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006a3e7(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006a331 (image 19006a331) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a331(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1188)();
  return;
}



// ===== continuation @ rva 1006a40b (image 19006a40b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a40b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x368))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1198)();
  return;
}



// ===== continuation @ rva 1006b2ab (image 19006b2ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b2ab(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc17b8)();
  return;
}



// ===== continuation @ rva 1006b238 (image 19006b238) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b238(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b383 (image 19006b383) =====

void FUN_19006b383(void)

{
  return;
}



// ===== continuation @ rva 1006b34b (image 19006b34b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b34b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x370))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1788)();
  return;
}



// ===== continuation @ rva 1006b38d (image 19006b38d) =====

void FUN_19006b38d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006b372 (image 19006b372) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b372(void)

{
  (*_DAT_182bc17a8)();
  return;
}



// ===== continuation @ rva 1006b296 (image 19006b296) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b296(void)

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



// ===== continuation @ rva 1006b2d3 (image 19006b2d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b2d3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b2f4 (image 19006b2f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b2f4(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc17d8)();
  return;
}



// ===== continuation @ rva 1006b327 (image 19006b327) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b327(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b4ab (image 19006b4ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b4ab(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc18b8)();
  return;
}



// ===== continuation @ rva 1006b438 (image 19006b438) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b438(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b58d (image 19006b58d) =====

void FUN_19006b58d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006b527 (image 19006b527) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b527(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b496 (image 19006b496) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b496(void)

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



// ===== continuation @ rva 1006b572 (image 19006b572) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b572(void)

{
  (*_DAT_182bc1888)();
  return;
}



// ===== continuation @ rva 1006b583 (image 19006b583) =====

void FUN_19006b583(void)

{
  return;
}



// ===== continuation @ rva 1006b54b (image 19006b54b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b54b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x368))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1878)();
  return;
}



// ===== continuation @ rva 1006b4d3 (image 19006b4d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b4d3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b6ab (image 19006b6ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b6ab(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc1978)();
  return;
}



// ===== continuation @ rva 1006b638 (image 19006b638) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b638(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b783 (image 19006b783) =====

void FUN_19006b783(void)

{
  return;
}



// ===== continuation @ rva 1006b671 (image 19006b671) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b671(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1948)();
  return;
}



// ===== continuation @ rva 1006b78d (image 19006b78d) =====

void FUN_19006b78d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006b696 (image 19006b696) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b696(void)

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



// ===== continuation @ rva 1006b727 (image 19006b727) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b727(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b6d3 (image 19006b6d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b6d3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b6f4 (image 19006b6f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b6f4(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1958)();
  return;
}



// ===== continuation @ rva 1006b8ab (image 19006b8ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b8ab(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc1a28)();
  return;
}



// ===== continuation @ rva 1006b838 (image 19006b838) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b838(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b98d (image 19006b98d) =====

void FUN_19006b98d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006b972 (image 19006b972) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b972(void)

{
  (*_DAT_182bc1a68)();
  return;
}



// ===== continuation @ rva 1006b8d3 (image 19006b8d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b8d3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006b983 (image 19006b983) =====

void FUN_19006b983(void)

{
  return;
}



// ===== continuation @ rva 1006b8f4 (image 19006b8f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b8f4(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1a98)();
  return;
}



// ===== continuation @ rva 1006b94b (image 19006b94b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b94b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1a18)();
  return;
}



// ===== continuation @ rva 1006b896 (image 19006b896) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006b896(void)

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



// ===== continuation @ rva 1006b871 (image 19006b871) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b871(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1a58)();
  return;
}



// ===== continuation @ rva 1005a49b (image 19005a49b) =====

void FUN_19005a49b(void)

{
  return;
}



// ===== continuation @ rva 10056004 (image 190056004) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190056004(void)

{
  FUN_190ddce00();
  (*_DAT_182bbb458)();
  return;
}



// ===== continuation @ rva 1005aadb (image 19005aadb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005aadb(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182bba9b8)();
  return;
}



// ===== continuation @ rva 10059d02 (image 190059d02) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190059d02(void)

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



// ===== continuation @ rva 1005a9fa (image 19005a9fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005a9fa(void)

{
  (*_DAT_182bbb5d8)();
  return;
}



// ===== continuation @ rva 1005a8bc (image 19005a8bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005a8bc(void)

{
  (*_DAT_182bbb5d8)();
  return;
}



// ===== continuation @ rva 1005aa70 (image 19005aa70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19005aa70(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182bbb4a8)();
  return;
}



// ===== continuation @ rva 1005a7ba (image 19005a7ba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19005a7ba(void)

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



// ===== continuation @ rva 1005ab46 (image 19005ab46) =====

void FUN_19005ab46(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100596d0 (image 1900596d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900596d0(void)

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



// ===== continuation @ rva 10059c38 (image 190059c38) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_190059c38(void)

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



// ===== continuation @ rva 10059a8c (image 190059a8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190059a8c(void)

{
  (*_DAT_182bbb268)();
  return;
}



// ===== continuation @ rva 1006b0b5 (image 19006b0b5) =====

void FUN_19006b0b5(void)

{
  return;
}



// ===== continuation @ rva 1006a526 (image 19006a526) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a526(void)

{
  FUN_190ddce00();
  (*_DAT_182bc1478)();
  return;
}



// ===== continuation @ rva 1006a5d9 (image 19006a5d9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006a5d9(void)

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



// ===== continuation @ rva 1006b186 (image 19006b186) =====

void FUN_19006b186(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006a824 (image 19006a824) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006a824(void)

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



// ===== continuation @ rva 1006b0bd (image 19006b0bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b0bd(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bc1378)();
  return;
}



// ===== continuation @ rva 1006a9bd (image 19006a9bd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006a9bd(void)

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



// ===== continuation @ rva 1006a59e (image 19006a59e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a59e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_182bc1718)();
  return;
}



// ===== continuation @ rva 1006ad0c (image 19006ad0c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006ad0c(void)

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



// ===== continuation @ rva 1006b120 (image 19006b120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006b120(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bc1468)();
  return;
}



// ===== continuation @ rva 1006a996 (image 19006a996) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006a996(void)

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



// ===== continuation @ rva 1006ada9 (image 19006ada9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006ada9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bc1668)();
  return;
}



// ===== continuation @ rva 1006a7f1 (image 19006a7f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006a7f1(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1258)();
  return;
}



// ===== continuation @ rva 100caf8b (image 1900caf8b) =====

void FUN_1900caf8b(void)

{
  return;
}



// ===== continuation @ rva 100bae79 (image 1900bae79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900bae79(void)

{
  FUN_190ddce00();
  (*_DAT_182bdba98)();
  return;
}



// ===== continuation @ rva 100cb8ed (image 1900cb8ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900cb8ed(void)

{
  (*_DAT_182bddbe8)();
  return;
}



// ===== continuation @ rva 100ccd4d (image 1900ccd4d) =====

void FUN_1900ccd4d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100cadbf (image 1900cadbf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900cadbf(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 100baf46 (image 1900baf46) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900baf46(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_R14;
  uint uVar7;
  uint uVar13;
  uint uVar14;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar28;
  undefined1 auVar23 [16];
  ulonglong uVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulonglong uVar33;
  undefined1 auVar34 [16];
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulonglong uVar38;
  ulonglong uVar39;
  undefined1 auVar40 [16];
  ulonglong uVar41;
  ulonglong uVar42;
  uint uVar43;
  ulonglong in_stack_00000050;
  ulonglong uStack00000000000000a0;
  ulonglong uStack00000000000000a8;
  undefined4 uStack00000000000000b0;
  uint uStack00000000000000b4;
  uint uStack00000000000000c0;
  
  uStack00000000000000a8 = in_stack_00000050;
  uStack00000000000000a0 = _DAT_182bda960 | 0x730c7a09da86a6f0;
  uVar6 = _DAT_182bda968 ^ 0x949072b163a15c49;
  lVar2 = _DAT_182bda968 * _DAT_182bda968;
  uVar5 = lVar2 * -0x3fdec8d82324a3fa;
  uVar22 = (_DAT_18344ba28 ^ 0x84222325) + _DAT_18344b948 + 0x84222325;
  uVar28 = (uVar5 ^ _DAT_18344b948) + uVar5 + _DAT_18344ba28;
  uVar22 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ _DAT_18344ba28 ^ 0x84222325;
  uVar28 = (uVar28 * 0x2000 | uVar28 >> 0x33) ^ uVar5 ^ _DAT_18344b948;
  _DAT_18344ba68 =
       func_0x0001900ccde0((uVar28 << 0x1d | uVar28 >> 0x23) - (uVar5 + _DAT_18344ba28) ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_18344b948 + 0x84222325));
  uVar22 = _DAT_18344ba68 >> 1 | _DAT_18344ba68;
  uVar22 = uVar22 >> 2 | uVar22;
  uVar22 = uVar22 >> 4 | uVar22;
  uVar22 = uVar22 >> 8 | uVar22;
  uVar22 = uVar22 >> 0x10 | uVar22;
  uVar22 = uVar22 >> 0x20 | uVar22;
  uVar22 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
  uVar22 = (0x40 - (((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x10 ^ _DAT_18344ba68;
  uVar4 = lVar2 * 0x3fdec8d82324a3fa;
  _DAT_18344b9a0 = (_DAT_18344b9a0 ^ uVar22) + lVar2 * 0x3fdec8d82324a3fa ^ 0x931a49594243554e;
  _DAT_18344ba38 = (_DAT_18344ba38 * -0x3265781135404929 ^ _DAT_18344b9a0) + uVar22;
  _DAT_18344baf8 = _DAT_18344ba38 ^ _DAT_18344b9a0;
  uVar5 = unaff_R14 + uVar5;
  uVar28 = uVar5 ^ 0x84222325;
  uVar22 = ((_DAT_18344ba10 ^ uVar28) + (uVar28 & _DAT_18344ba10) * 2) * (uVar4 - _DAT_18344b9d8);
  uVar22 = (uVar22 | _DAT_18344b9d8) + (uVar22 & _DAT_18344b9d8);
  uVar22 = uVar22 * 0x2000 ^ uVar22;
  uVar22 = uVar22 >> 7 ^ uVar22;
  uVar22 = uVar22 << 0x11 ^ uVar22;
  _DAT_18344b948 = uVar4;
  _DAT_18344baa8 = func_0x0001900ccde0((uVar28 ^ uVar4 | uVar22) + (uVar22 & (uVar28 ^ uVar4)));
  uVar13 = (uint)(uVar5 >> 0x20);
  auVar23._8_4_ = (int)uVar5;
  auVar23._0_8_ = uVar5;
  auVar23._12_4_ = uVar13;
  uVar14 = (uint)(uVar4 >> 0x20);
  auVar16._8_4_ = (int)uVar4;
  auVar16._0_8_ = uVar4;
  auVar16._12_4_ = uVar14;
  uVar35 = SUB164(auVar23 & auVar16,0);
  uVar38 = SUB168(auVar23 & auVar16,0);
  uVar7 = SUB164(auVar23 | auVar16,0);
  uVar29 = SUB168(auVar23 | auVar16,0);
  auVar9._8_8_ = _UNK_18001a718;
  auVar9._0_8_ = _DAT_18001a710;
  uVar21 = SUB164(auVar16 ^ auVar9,0);
  uVar22 = SUB168(auVar16 ^ auVar9,0);
  uVar15 = SUB164(auVar23 ^ auVar16,0);
  lVar2 = _DAT_182bda968 * _DAT_182bda960;
  uVar28 = lVar2 * 0x326b3403b323434a;
  auVar8._8_8_ = uVar28;
  auVar8._0_8_ = _DAT_18001b640;
  auVar9 = pshufb(auVar8 ^ _DAT_182bde050,_DAT_1800170c0);
  uVar38 = (((ulonglong)_DAT_182bddf20 * (ulonglong)uVar21 +
             ((ulonglong)_DAT_182bddf50 * (ulonglong)uVar21 +
              (uVar22 >> 0x20) * (ulonglong)_DAT_182bddf20 << 0x20) +
            (ulonglong)_DAT_182bddf40 * (ulonglong)uVar7 +
            ((uVar29 >> 0x20) * (ulonglong)_DAT_182bddf40 +
             (ulonglong)_DAT_182bddf30 * (ulonglong)uVar7 << 0x20) +
            (ulonglong)uVar35 * (ulonglong)_DAT_182bddf40 +
            ((uVar38 >> 0x20) * (ulonglong)_DAT_182bddf40 +
             (ulonglong)uVar35 * (ulonglong)_DAT_182bddf30 << 0x20) +
            (ulonglong)_DAT_182bddf00 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_182bddf10 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar14 * (ulonglong)_DAT_182bddf00 << 0x20) +
            (ulonglong)_DAT_182bddee0 * (uVar5 & 0xffffffff) +
            ((ulonglong)_DAT_182bddef0 * (uVar5 & 0xffffffff) +
             (ulonglong)uVar13 * (ulonglong)_DAT_182bddee0 << 0x20)) -
           ((ulonglong)uVar21 * (ulonglong)_DAT_182bddfc0 +
            ((ulonglong)_DAT_182bde030 * (ulonglong)uVar21 +
             (uVar22 >> 0x20) * (ulonglong)_DAT_182bddfc0 << 0x20) +
           (ulonglong)uVar15 * (ulonglong)_DAT_182bde010 +
           ((ulonglong)_DAT_182bde020 * (ulonglong)uVar15 +
            (SUB168(auVar23 ^ auVar16,0) >> 0x20) * (ulonglong)_DAT_182bde010 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_182bddff0 +
           ((ulonglong)_DAT_182bde000 * (ulonglong)uVar7 +
            (uVar29 >> 0x20) * (ulonglong)_DAT_182bddff0 << 0x20) +
           (ulonglong)uVar35 * (ulonglong)_DAT_182bddfd0 +
           ((ulonglong)_DAT_182bddfe0 * (ulonglong)uVar35 +
            (uVar38 >> 0x20) * (ulonglong)_DAT_182bddfd0 << 0x20) +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_182bddfa0 +
           ((ulonglong)_DAT_182bddfb0 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar14 * (ulonglong)_DAT_182bddfa0 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_182bddf80 +
           ((ulonglong)_DAT_182bddf90 * (uVar5 & 0xffffffff) +
            (ulonglong)uVar13 * (ulonglong)_DAT_182bddf80 << 0x20))) + _DAT_182bde040;
  uVar22 = ((uVar5 | uVar4) ^ _DAT_18344baa8) & 0x7fffffffffffffff;
  _DAT_18344b910 = _DAT_18344ba90 ^ uVar22 ^ uVar38;
  _DAT_18344b9e8 = (_DAT_18344b9e8 ^ uVar22) + uVar38 ^ 0xa5d28b31ab10c9df;
  _DAT_18344bae0 = (_DAT_18344bae0 * -0x22724fc450adbc23 ^ _DAT_18344b9e8) + uVar22;
  _DAT_18344bad0 = _DAT_18344bae0 ^ _DAT_18344b9e8;
  uVar4 = auVar9._8_8_ + auVar9._0_8_;
  uVar22 = uVar4 + _DAT_18344b9a8;
  if (auVar9._4_4_ < 0) {
    uVar22 = _DAT_18344b910 ^ uVar4;
  }
  _DAT_18344ba00 = uVar38;
  _DAT_18344ba20 = func_0x0001900ccde0(uVar22 ^ 0x36);
  uVar22 = _DAT_18344ba20 >> 1 | _DAT_18344ba20;
  uVar22 = uVar22 >> 2 | uVar22;
  uVar22 = uVar22 >> 4 | uVar22;
  uVar22 = uVar22 >> 8 | uVar22;
  uVar22 = uVar22 >> 0x10 | uVar22;
  uVar22 = uVar22 >> 0x20 | uVar22;
  uVar22 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
  uVar22 = (0x40 - (((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x20 ^ _DAT_18344ba20;
  uVar22 = uVar22 << 0xc | uVar22 >> 0x34;
  uVar5 = lVar2 * -0x326b3403b323434a;
  _DAT_18344b970 = (_DAT_18344b970 ^ uVar22) + lVar2 * -0x326b3403b323434a ^ 0xdf4853b6742930e;
  _DAT_18344b9a8 = (_DAT_18344b9a8 * 0x761270069804e54f ^ _DAT_18344b970) + uVar22;
  _DAT_18344ba30 = _DAT_18344b9a8 ^ _DAT_18344b970;
  uVar22 = uVar38 ^ 0x84222325 ^ _DAT_18344b978;
  lVar3 = (uVar38 ^ 0x84222325) + _DAT_18344b9e8;
  uVar4 = uVar22 + lVar3;
  uVar29 = (uVar28 ^ _DAT_18344b9e8) + _DAT_18344b978 + uVar28;
  uVar22 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar22;
  uVar4 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar28 ^ _DAT_18344b9e8;
  _DAT_18344bac0 = uVar5;
  _DAT_18344b940 =
       func_0x0001900ccde0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344b978 + uVar28) ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - lVar3);
  uVar15 = (uint)(uVar38 >> 0x20);
  auVar32._8_4_ = (int)uVar38;
  auVar32._0_8_ = uVar38;
  auVar32._12_4_ = uVar15;
  uVar7 = (uint)(uVar28 >> 0x20);
  auVar24._8_4_ = (int)uVar28;
  auVar24._0_8_ = uVar28;
  auVar24._12_4_ = uVar7;
  uVar14 = SUB164(auVar32 & auVar24,0);
  uVar4 = SUB168(auVar32 & auVar24,0);
  uVar21 = SUB164(auVar32 | auVar24,0);
  uVar33 = SUB168(auVar32 | auVar24,0);
  uVar13 = SUB164(auVar32 ^ auVar24,0);
  uVar29 = SUB168(auVar32 ^ auVar24,0);
  uVar22 = _DAT_18344b940 << 0x3a | _DAT_18344b940 >> 6;
  uVar29 = ((ulonglong)_DAT_182bde0c0 * (ulonglong)uVar13 +
            ((ulonglong)_DAT_182bde0d0 * (ulonglong)uVar13 +
             (uVar29 >> 0x20) * (ulonglong)_DAT_182bde0c0 << 0x20) +
            (ulonglong)_DAT_182bde0a0 * (ulonglong)uVar21 +
            ((ulonglong)_DAT_182bde0b0 * (ulonglong)uVar21 +
             (uVar33 >> 0x20) * (ulonglong)_DAT_182bde0a0 << 0x20) +
           (ulonglong)_DAT_182bde080 * (ulonglong)uVar14 +
           ((ulonglong)_DAT_182bde090 * (ulonglong)uVar14 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_182bde080 << 0x20) +
           (ulonglong)_DAT_182bde070 * (uVar28 & 0xffffffff) +
           ((ulonglong)uVar7 * (ulonglong)_DAT_182bde070 +
            (ulonglong)_DAT_182bde060 * (uVar28 & 0xffffffff) << 0x20) +
           (uVar38 & 0xffffffff) * (ulonglong)_DAT_182bde070 +
           ((ulonglong)uVar15 * (ulonglong)_DAT_182bde070 +
            (uVar38 & 0xffffffff) * (ulonglong)_DAT_182bde060 << 0x20)) -
           ((ulonglong)uVar13 * (ulonglong)_DAT_182bde160 +
            ((ulonglong)_DAT_182bde170 * (ulonglong)uVar13 +
             (uVar29 >> 0x20) * (ulonglong)_DAT_182bde160 << 0x20) +
            (ulonglong)uVar21 * (ulonglong)_DAT_182bde140 +
            ((ulonglong)_DAT_182bde150 * (ulonglong)uVar21 +
             (uVar33 >> 0x20) * (ulonglong)_DAT_182bde140 << 0x20) +
           (ulonglong)uVar14 * (ulonglong)_DAT_182bde120 +
           ((ulonglong)_DAT_182bde130 * (ulonglong)uVar14 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_182bde120 << 0x20) +
           (uVar28 & 0xffffffff) * (ulonglong)_DAT_182bde110 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_182bde110 +
            (ulonglong)_DAT_182bde100 * (uVar28 & 0xffffffff) << 0x20) +
           (uVar38 & 0xffffffff) * (ulonglong)_DAT_182bde110 +
           ((ulonglong)uVar15 * (ulonglong)_DAT_182bde110 +
            (uVar38 & 0xffffffff) * (ulonglong)_DAT_182bde100 << 0x20));
  _DAT_18344bab0 = _DAT_18344b9f8 ^ uVar22 ^ uVar29;
  _DAT_18344b978 = (_DAT_18344b978 ^ uVar22) + uVar29 ^ 0x48a69ca2b74c7cc5;
  _DAT_18344b960 = (_DAT_18344b960 * -0x421cf8d565215e0f ^ _DAT_18344b978) + uVar22;
  _DAT_18344ba30 = _DAT_18344b960 ^ _DAT_18344b978;
  uVar22 = uVar29 ^ 0x84222325 ^ _DAT_18344b980;
  lVar3 = (uVar29 ^ 0x84222325) + _DAT_18344bac0;
  lVar2 = _DAT_18344b980 + lVar2 * -0x326b3403b323434a;
  uVar28 = uVar22 + lVar3;
  uVar4 = (uVar5 ^ _DAT_18344bac0) + lVar2;
  uVar22 = (uVar28 * 0x2000 | uVar28 >> 0x33) ^ uVar22;
  uVar28 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5 ^ _DAT_18344bac0;
  _DAT_18344b938 = uVar29;
  _DAT_18344ba60 =
       func_0x0001900ccde0((uVar28 << 0x1d | uVar28 >> 0x23) - lVar2 ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - lVar3);
  uVar28 = uStack00000000000000a0;
  uVar21 = (uint)(uVar29 >> 0x20);
  auVar25._8_4_ = (int)uVar29;
  auVar25._0_8_ = uVar29;
  auVar25._12_4_ = uVar21;
  uVar14 = (uint)(uVar5 >> 0x20);
  auVar17._8_4_ = (int)uVar5;
  auVar17._0_8_ = uVar5;
  auVar17._12_4_ = uVar14;
  auVar10._8_4_ = 0xffffffff;
  auVar10._0_8_ = 0xffffffffffffffff;
  auVar10._12_4_ = 0xffffffff;
  uVar7 = SUB164(auVar25 & auVar17,0);
  uVar39 = SUB168(auVar25 & auVar17,0);
  uVar13 = SUB164(auVar25 ^ auVar17,0);
  uVar33 = SUB168(auVar25 ^ auVar17,0);
  uVar35 = SUB164(auVar25 ^ auVar10,0);
  uVar38 = uVar5 ^ _DAT_18001a710;
  uVar15 = SUB164(auVar25 | auVar17,0);
  uVar4 = uVar29 * uVar5 ^ _DAT_18344ba60;
  uVar22 = uVar4 >> 1 | uVar4;
  uVar22 = uVar22 >> 2 | uVar22;
  uVar22 = uVar22 >> 4 | uVar22;
  uVar22 = uVar22 >> 8 | uVar22;
  uVar22 = uVar22 >> 0x10 | uVar22;
  uVar22 = uVar22 >> 0x20 | uVar22;
  uVar22 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ uVar4;
  uVar38 = (((uVar38 & 0xffffffff) * (ulonglong)_DAT_182bde220 +
             ((ulonglong)_DAT_182bde230 * (uVar38 & 0xffffffff) +
              (uVar38 >> 0x20) * (ulonglong)_DAT_182bde220 << 0x20) +
            (ulonglong)uVar35 * (ulonglong)_DAT_182bde200 +
            ((ulonglong)_DAT_182bde210 * (ulonglong)uVar35 +
             (SUB168(auVar25 ^ auVar10,0) >> 0x20) * (ulonglong)_DAT_182bde200 << 0x20) +
            (ulonglong)_DAT_182bde1e0 * (ulonglong)uVar13 +
            ((ulonglong)_DAT_182bde1f0 * (ulonglong)uVar13 +
             (uVar33 >> 0x20) * (ulonglong)_DAT_182bde1e0 << 0x20) +
            (ulonglong)_DAT_182bde1c0 * (ulonglong)uVar7 +
            ((ulonglong)_DAT_182bde1d0 * (ulonglong)uVar7 +
             (uVar39 >> 0x20) * (ulonglong)_DAT_182bde1c0 << 0x20) +
            (ulonglong)_DAT_182bde1a0 * (uVar5 & 0xffffffff) +
            ((ulonglong)_DAT_182bde1b0 * (uVar5 & 0xffffffff) +
             (ulonglong)uVar14 * (ulonglong)_DAT_182bde1a0 << 0x20) +
            (ulonglong)_DAT_182bde180 * (uVar29 & 0xffffffff) +
            ((ulonglong)_DAT_182bde190 * (uVar29 & 0xffffffff) +
             (ulonglong)uVar21 * (ulonglong)_DAT_182bde180 << 0x20)) -
           ((ulonglong)uVar13 * (ulonglong)_DAT_182bde2c0 +
            ((ulonglong)_DAT_182bde2d0 * (ulonglong)uVar13 +
             (uVar33 >> 0x20) * (ulonglong)_DAT_182bde2c0 << 0x20) +
            (ulonglong)uVar15 * (ulonglong)_DAT_182bde2a0 +
            ((ulonglong)_DAT_182bde2b0 * (ulonglong)uVar15 +
             (SUB168(auVar25 | auVar17,0) >> 0x20) * (ulonglong)_DAT_182bde2a0 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_182bde280 +
           ((ulonglong)_DAT_182bde290 * (ulonglong)uVar7 +
            (uVar39 >> 0x20) * (ulonglong)_DAT_182bde280 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_182bde270 +
           ((ulonglong)uVar14 * (ulonglong)_DAT_182bde270 +
            (ulonglong)_DAT_182bde260 * (uVar5 & 0xffffffff) << 0x20) +
           (uVar29 & 0xffffffff) * (ulonglong)_DAT_182bde270 +
           ((ulonglong)uVar21 * (ulonglong)_DAT_182bde270 +
            (uVar29 & 0xffffffff) * (ulonglong)_DAT_182bde260 << 0x20))) + 0x947069b3b6e02e32;
  _DAT_18344bab0 = _DAT_18344ba70 ^ uVar4 ^ uVar38;
  _DAT_18344b998 = (_DAT_18344b998 ^ uVar4) + uVar38 ^ 0x53e97008766a4bd6;
  _DAT_18344ba90 = (_DAT_18344ba90 * 0x164b99a71d39a0cb ^ _DAT_18344b998) + uVar4 ^ _DAT_18344b998;
  uVar29 = uStack00000000000000a0 ^ 0x84222325;
  uVar22 = (uVar29 ^ _DAT_18344b910) + _DAT_18344b9d0 + uVar29;
  uVar4 = (uVar6 ^ _DAT_18344b9d0) + _DAT_18344b910 + uVar6;
  uVar22 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar29 ^ _DAT_18344b910;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6 ^ _DAT_18344b9d0;
  _DAT_18344b970 = uVar38;
  _DAT_18344b9a8 =
       func_0x0001900ccde0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344b910 + uVar6) ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_18344b9d0 + uVar29));
  uVar13 = (uint)(uVar28 >> 0x20);
  auVar40._8_4_ = (int)uVar28;
  auVar40._0_8_ = uVar28;
  auVar40._12_4_ = uVar13;
  uVar14 = (uint)(uVar6 >> 0x20);
  auVar18._8_4_ = (int)uVar6;
  auVar18._0_8_ = uVar6;
  auVar18._12_4_ = uVar14;
  uVar43 = SUB164(auVar40 & auVar18,0);
  uVar4 = SUB168(auVar40 & auVar18,0);
  uVar21 = SUB164(auVar40 | auVar18,0);
  uVar33 = SUB168(auVar40 | auVar18,0);
  uVar15 = SUB164(auVar40 ^ auVar18,0);
  uVar5 = SUB168(auVar40 ^ auVar18,0);
  auVar36._8_4_ = 0xffffffff;
  auVar36._0_8_ = 0xffffffffffffffff;
  auVar36._12_4_ = 0xffffffff;
  uVar35 = SUB164(auVar40 ^ auVar36,0);
  uVar7 = SUB164(auVar18 ^ auVar36,0);
  uVar22 = (_DAT_18344b9a8 << 0xe | _DAT_18344b9a8 >> 0x32) >> 4 | (_DAT_18344b9a8 >> 0x32) << 0x3c;
  uVar33 = (((_DAT_182bde2f0 & 0xffffffff) * (ulonglong)uVar15 +
             ((uVar5 >> 0x20) * (_DAT_182bde2f0 & 0xffffffff) +
              (_DAT_182bde2e0 & 0xffffffff) * (ulonglong)uVar15 << 0x20) +
             (ulonglong)uVar43 * (_DAT_182bde2f0 & 0xffffffff) +
             ((uVar4 >> 0x20) * (_DAT_182bde2f0 & 0xffffffff) +
              (ulonglong)uVar43 * (_DAT_182bde2e0 & 0xffffffff) << 0x20) + uVar28 + uVar6 +
            (_DAT_182bde300 & 0xffffffff) * (ulonglong)uVar21 +
            ((_DAT_182bde310 & 0xffffffff) * (ulonglong)uVar21 +
             (uVar33 >> 0x20) * (_DAT_182bde300 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar7 * (ulonglong)_DAT_182bde370 +
            ((SUB168(auVar18 ^ auVar36,0) >> 0x20) * (ulonglong)_DAT_182bde370 +
             (ulonglong)_DAT_182bde360 * (ulonglong)uVar7 << 0x20) +
            (ulonglong)uVar35 * (ulonglong)_DAT_182bde350 +
            ((SUB168(auVar40 ^ auVar36,0) >> 0x20) * (ulonglong)_DAT_182bde350 +
             (ulonglong)_DAT_182bde340 * (ulonglong)uVar35 << 0x20) +
            (ulonglong)uVar15 * (ulonglong)_DAT_182bde390 +
            ((uVar5 >> 0x20) * (ulonglong)_DAT_182bde390 +
             (_DAT_182bde380 & 0xffffffff) * (ulonglong)uVar15 << 0x20) +
            (ulonglong)uVar43 * (ulonglong)_DAT_182bde390 +
            ((uVar4 >> 0x20) * (ulonglong)_DAT_182bde390 +
             (ulonglong)uVar43 * (_DAT_182bde380 & 0xffffffff) << 0x20) +
            (uVar6 & 0xffffffff) * (ulonglong)_DAT_182bde370 +
            ((ulonglong)uVar14 * (ulonglong)_DAT_182bde370 +
             (uVar6 & 0xffffffff) * (ulonglong)_DAT_182bde360 << 0x20) +
            (uVar28 & 0xffffffff) * (ulonglong)_DAT_182bde350 +
            ((ulonglong)uVar13 * (ulonglong)_DAT_182bde350 +
             (uVar28 & 0xffffffff) * (ulonglong)_DAT_182bde340 << 0x20) +
           (ulonglong)uVar21 * (ulonglong)_DAT_182bde3a0 +
           ((_DAT_182bde3b0 & 0xffffffff) * (ulonglong)uVar21 +
            (uVar33 >> 0x20) * (ulonglong)_DAT_182bde3a0 << 0x20))) - _DAT_182bde3c0;
  _DAT_18344b9d8 = _DAT_18344b928 ^ uVar22 ^ uVar33;
  _DAT_18344ba38 = (_DAT_18344ba38 ^ uVar22) + uVar33 ^ 0x17d0f1d3911e8b10;
  _DAT_18344ba28 = (_DAT_18344ba28 * 0x7462a8bd511e794d ^ _DAT_18344ba38) + uVar22;
  _DAT_18344baf0 = _DAT_18344ba28 ^ _DAT_18344ba38;
  uVar22 = (uVar29 ^ _DAT_18344b9d8) + _DAT_18344b978 + uVar29;
  uVar4 = (uVar6 ^ _DAT_18344b978) + _DAT_18344b9d8 + uVar6;
  uVar22 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar29 ^ _DAT_18344b9d8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6 ^ _DAT_18344b978;
  _DAT_18344b918 = uVar33;
  _DAT_18344b900 =
       func_0x0001900ccde0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18344b9d8 + uVar6) ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_18344b978 + uVar29));
  uVar22 = uVar6 & uVar28;
  uVar5 = uVar28 + uVar6 + uVar22 * -2;
  _DAT_18344ba70 = (_DAT_18344ba70 ^ _DAT_18344b900 ^ uVar28) + uVar5 ^ 0xc0d79be8217c42b6;
  _DAT_18344b938 =
       (_DAT_18344b938 * -0x6eaaf70ae38661d5 ^ _DAT_18344ba70) + (_DAT_18344b900 ^ uVar28);
  _DAT_18344bab0 = _DAT_18344b938 ^ _DAT_18344ba70;
  auVar11._8_8_ = uVar22 * 2;
  auVar11._0_8_ = uVar5 ^ 0x84222325;
  auVar9 = pshufb(auVar11 ^ _DAT_182bde3d0,_DAT_1800170c0);
  uVar6 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar6 + _DAT_18344baf8;
  if (auVar9._4_4_ < 0) {
    uVar4 = _DAT_18344b9a0 ^ uVar6;
  }
  _DAT_18344b980 = uVar5;
  uVar4 = func_0x0001900ccde0(SUB161(auVar11 ^ _DAT_182bde3d0,5) ^ uVar4);
  uVar7 = (uint)(uVar5 >> 0x20);
  auVar30._8_4_ = (int)uVar5;
  auVar30._0_8_ = uVar5;
  auVar30._12_4_ = uVar7;
  auVar26._8_4_ = (int)uVar22;
  auVar26._0_8_ = uVar22;
  auVar26._12_4_ = (int)(uVar22 >> 0x20);
  uVar22 = uVar22 * 2;
  auVar27._8_8_ = auVar26._8_8_ * 2;
  auVar27._0_8_ = uVar22;
  auVar12._8_4_ = 0xffffffff;
  auVar12._0_8_ = 0xffffffffffffffff;
  auVar12._12_4_ = 0xffffffff;
  _uStack00000000000000c0 = uVar5 ^ 0xffffffffffffffff;
  uVar35 = (uint)(uVar22 >> 0x20);
  uVar13 = SUB164(auVar30 & auVar27,0);
  uVar41 = SUB168(auVar30 & auVar27,0);
  uVar14 = SUB164(auVar30 ^ auVar27,0);
  uVar21 = SUB164(auVar27 ^ auVar12,0);
  uVar39 = SUB168(auVar27 ^ auVar12,0);
  uVar6 = uVar4 << 9 | uVar4 >> 0x37;
  uVar4 = uVar6 >> 1 | uVar6;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar6;
  uVar15 = SUB164(auVar30 | auVar27,0);
  uVar39 = (((_DAT_182bde480 & 0xffffffff) * (ulonglong)uVar21 +
             ((_DAT_182bde490 & 0xffffffff) * (ulonglong)uVar21 +
              (uVar39 >> 0x20) * (_DAT_182bde480 & 0xffffffff) << 0x20) +
            (_DAT_182bde460 & 0xffffffff) * (_uStack00000000000000c0 & 0xffffffff) +
            ((_DAT_182bde470 & 0xffffffff) * (_uStack00000000000000c0 & 0xffffffff) +
             (_uStack00000000000000c0 >> 0x20) * (_DAT_182bde460 & 0xffffffff) << 0x20) +
            (ulonglong)uVar14 * (ulonglong)_DAT_182bde440 +
            ((_DAT_182bde450 & 0xffffffff) * (ulonglong)uVar14 +
             (SUB168(auVar30 ^ auVar27,0) >> 0x20) * (ulonglong)_DAT_182bde440 << 0x20) +
            (_DAT_182bde420 & 0xffffffff) * (ulonglong)uVar13 +
            ((_DAT_182bde430 & 0xffffffff) * (ulonglong)uVar13 +
             (uVar41 >> 0x20) * (_DAT_182bde420 & 0xffffffff) << 0x20) +
            (_DAT_182bde400 & 0xffffffff) * (uVar22 & 0xffffffff) +
            ((_DAT_182bde410 & 0xffffffff) * (uVar22 & 0xffffffff) +
             (ulonglong)uVar35 * (_DAT_182bde400 & 0xffffffff) << 0x20) +
            (_DAT_182bde3e0 & 0xffffffff) * (uVar5 & 0xffffffff) +
            ((_DAT_182bde3f0 & 0xffffffff) * (uVar5 & 0xffffffff) +
             (ulonglong)uVar7 * (_DAT_182bde3e0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar21 * (ulonglong)_DAT_182bde540 +
            ((_DAT_182bde550 & 0xffffffff) * (ulonglong)uVar21 +
             (uVar39 >> 0x20) * (ulonglong)_DAT_182bde540 << 0x20) +
            (_uStack00000000000000c0 & 0xffffffff) * (ulonglong)_DAT_182bde520 +
            ((_DAT_182bde530 & 0xffffffff) * (_uStack00000000000000c0 & 0xffffffff) +
             (_uStack00000000000000c0 >> 0x20) * (ulonglong)_DAT_182bde520 << 0x20) +
           (ulonglong)uVar15 * (ulonglong)_DAT_182bde510 +
           ((SUB168(auVar30 | auVar27,0) >> 0x20) * (ulonglong)_DAT_182bde510 +
            (_DAT_182bde500 & 0xffffffff) * (ulonglong)uVar15 << 0x20) +
           (ulonglong)uVar13 * (ulonglong)_DAT_182bde510 +
           ((uVar41 >> 0x20) * (ulonglong)_DAT_182bde510 +
            (ulonglong)uVar13 * (_DAT_182bde500 & 0xffffffff) << 0x20) +
           (uVar22 & 0xffffffff) * (ulonglong)_DAT_182bde4e0 +
           ((_DAT_182bde4f0 & 0xffffffff) * (uVar22 & 0xffffffff) +
            (ulonglong)uVar35 * (ulonglong)_DAT_182bde4e0 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_182bde4c0 +
           ((_DAT_182bde4d0 & 0xffffffff) * (uVar5 & 0xffffffff) +
            (ulonglong)uVar7 * (ulonglong)_DAT_182bde4c0 << 0x20))) + _DAT_182bde560;
  _DAT_18344b950 = (_DAT_18344ba98 ^ uVar6 ^ uVar39 ^ uVar6) + uVar39 ^ 0x8774e23b98a352a9;
  _DAT_18344b970 = (_DAT_18344b970 * -0x7061b72f51dbbfdf ^ _DAT_18344b950) + uVar6;
  _DAT_18344b950 = _DAT_18344b970 ^ _DAT_18344b950;
  uVar22 = uVar33 ^ 0x84222325 ^ _DAT_18344b930;
  lVar2 = (uVar33 ^ 0x84222325) + _DAT_18344b968;
  uVar4 = uVar22 + lVar2;
  uVar5 = (uVar39 ^ _DAT_18344b968) + uVar39 + _DAT_18344b930;
  uVar22 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar22;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar39 ^ _DAT_18344b968;
  _DAT_18344bac0 = uVar39;
  _DAT_18344bad0 =
       func_0x0001900ccde0((uVar4 << 0x1d | uVar4 >> 0x23) - (uVar39 + _DAT_18344b930) ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - lVar2);
  uStack00000000000000b0 = (undefined4)uVar33;
  uStack00000000000000b4 = (uint)(uVar33 >> 0x20);
  auVar31._8_4_ = uStack00000000000000b0;
  auVar31._0_8_ = uVar33;
  auVar31._12_4_ = uStack00000000000000b4;
  uVar14 = (uint)(uVar39 >> 0x20);
  auVar19._8_4_ = (int)uVar39;
  auVar19._0_8_ = uVar39;
  auVar19._12_4_ = uVar14;
  uVar41 = uVar39 ^ _DAT_18001a710;
  uVar7 = SUB164(auVar31 & auVar19,0);
  uVar42 = SUB168(auVar31 & auVar19,0);
  _uStack00000000000000c0 = SUB168(auVar31 ^ auVar19,0);
  uVar6 = _uStack00000000000000c0;
  uVar22 = _uStack00000000000000c0 & 0xffffffff;
  uVar4 = _uStack00000000000000c0 & 0xffffffff;
  uVar5 = _uStack00000000000000c0 >> 0x20;
  uStack00000000000000c0 = SUB164(auVar31 ^ auVar19,0);
  uVar13 = SUB164(auVar31 | auVar19,0);
  _DAT_18344ba00 =
       (((uVar41 & 0xffffffff) * (ulonglong)_DAT_182bde5b0 +
         ((ulonglong)_DAT_182bde600 * (uVar41 & 0xffffffff) +
          (uVar41 >> 0x20) * (ulonglong)_DAT_182bde5b0 << 0x20) +
         _DAT_182bde5e0 * uVar4 + (_DAT_182bde5f0 * uVar22 + uVar5 * _DAT_182bde5e0 << 0x20) +
        (ulonglong)_DAT_182bde5c0 * (ulonglong)uVar7 +
        ((ulonglong)_DAT_182bde5d0 * (ulonglong)uVar7 + (uVar42 >> 0x20) * (ulonglong)_DAT_182bde5c0
        << 0x20) +
        (ulonglong)_DAT_182bde590 * (uVar39 & 0xffffffff) +
        ((ulonglong)_DAT_182bde5a0 * (uVar39 & 0xffffffff) +
         (ulonglong)uVar14 * (ulonglong)_DAT_182bde590 << 0x20) +
        (ulonglong)_DAT_182bde570 * (uVar33 & 0xffffffff) +
        ((ulonglong)_DAT_182bde580 * (uVar33 & 0xffffffff) +
         (ulonglong)uStack00000000000000b4 * (ulonglong)_DAT_182bde570 << 0x20)) -
       ((ulonglong)uStack00000000000000c0 * (_DAT_182bde690 & 0xffffffff) +
        ((ulonglong)_DAT_182bde6a0 * (ulonglong)uStack00000000000000c0 +
         (uVar6 >> 0x20) * (_DAT_182bde690 & 0xffffffff) << 0x20) +
        (ulonglong)uVar13 * (_DAT_182bde670 & 0xffffffff) +
        ((ulonglong)_DAT_182bde680 * (ulonglong)uVar13 +
         (SUB168(auVar31 | auVar19,0) >> 0x20) * (_DAT_182bde670 & 0xffffffff) << 0x20) +
       (ulonglong)uVar7 * (ulonglong)_DAT_182bde650 +
       ((ulonglong)_DAT_182bde660 * (ulonglong)uVar7 + (uVar42 >> 0x20) * (ulonglong)_DAT_182bde650
       << 0x20) +
       (uVar39 & 0xffffffff) * (ulonglong)_DAT_182bde640 +
       ((ulonglong)uVar14 * (ulonglong)_DAT_182bde640 +
        (ulonglong)_DAT_182bde630 * (uVar39 & 0xffffffff) << 0x20) +
       (uVar33 & 0xffffffff) * (ulonglong)_DAT_182bde640 +
       ((ulonglong)uStack00000000000000b4 * (ulonglong)_DAT_182bde640 +
        (uVar33 & 0xffffffff) * (ulonglong)_DAT_182bde630 << 0x20))) + 0x775944769f5c9b4b;
  _DAT_18344b938 = _DAT_18344ba00 ^ _DAT_18344ba68;
  _DAT_18344ba20 = (_DAT_18344ba20 ^ _DAT_18344ba68) + _DAT_18344ba00 ^ 0x3b54adc1d225233b;
  _DAT_18344bab8 = (_DAT_18344bab8 * 0x1f41d277ff2d0f17 ^ _DAT_18344ba20) + _DAT_18344ba68;
  _DAT_18344b950 = _DAT_18344bab8 ^ _DAT_18344ba20;
  uVar38 = _DAT_18344ba00 + uVar38;
  uVar22 = ~_DAT_18344ba80 * ((_DAT_18344ba20 ^ uVar29) + (uVar29 & _DAT_18344ba20) * 2);
  uVar22 = (uVar22 | _DAT_18344ba90) + (uVar22 & _DAT_18344ba90);
  uVar22 = uVar22 * 0x2000 ^ uVar22;
  uVar22 = uVar22 >> 7 ^ uVar22;
  uVar22 = uVar22 << 0x11 ^ uVar22;
  _DAT_18344b9a8 = func_0x0001900ccde0((~uVar29 | uVar22) + (uVar22 & ~uVar29));
  uVar22 = _DAT_182bda960;
  _DAT_18344ba60 = ~uVar28;
  _DAT_18344ba40 =
       (_DAT_18344ba40 ^ ~_DAT_18344b9a8 & 0xffffffffffff0000) + _DAT_18344ba60 ^ 0xd91606a930385fae
  ;
  _DAT_18344b9c0 =
       (_DAT_18344b9c0 * 0x3b763ec0d96c6767 ^ _DAT_18344ba40) +
       (~_DAT_18344b9a8 & 0xffffffffffff0000);
  _DAT_18344b9d0 = _DAT_18344b9c0 ^ _DAT_18344ba40;
  uVar28 = ((_DAT_182bda960 ^ 0x84222325 ^ _DAT_18344ba90) +
           ((_DAT_182bda960 ^ 0x84222325) & _DAT_18344ba90) * 2) * (_DAT_182bda960 - _DAT_18344ba18)
  ;
  uVar28 = (uVar28 | _DAT_18344b970) + (uVar28 & _DAT_18344b970);
  uVar28 = uVar28 * 0x2000 ^ uVar28;
  uVar28 = uVar28 >> 7 ^ uVar28;
  uVar28 = uVar28 << 0x11 ^ uVar28;
  _DAT_18344b968 =
       func_0x0001900ccde0((uVar28 | 0x84222325) + (ulonglong)((uint)uVar28 & 0x84222325));
  uVar22 = _DAT_18344b968 ^ uVar22;
  uVar28 = uVar22 >> 1 | uVar22;
  uVar28 = uVar28 >> 2 | uVar28;
  uVar28 = uVar28 >> 4 | uVar28;
  uVar28 = uVar28 >> 8 | uVar28;
  uVar28 = uVar28 >> 0x10 | uVar28;
  uVar28 = uVar28 >> 0x20 | uVar28;
  uVar28 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
  uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
  uVar22 = (0x40 - (((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x20 ^ uVar22;
  _DAT_18344ba38 = _DAT_18344ba38 ^ uVar22 ^ 0xfdf7e40293a4f4d5;
  _DAT_18344bae8 = (_DAT_18344bae8 * -0x2031b10b0af39707 ^ _DAT_18344ba38) + uVar22;
  _DAT_18344bab8 = _DAT_18344bae8 ^ _DAT_18344ba38;
  _DAT_18344ba40 = 0;
  uVar22 = uVar38 ^ 0x84222325 ^ _DAT_18344ba38;
  lVar2 = (uVar38 ^ 0x84222325) + _DAT_18344ba08;
  uVar28 = uVar22 + lVar2;
  uVar22 = (uVar28 * 0x2000 | uVar28 >> 0x33) ^ uVar22;
  uVar28 = ((_DAT_18344ba08 + _DAT_18344ba38) * 0x2000 | _DAT_18344ba08 + _DAT_18344ba38 >> 0x33) ^
           _DAT_18344ba08;
  _DAT_18344bae0 =
       func_0x0001900ccde0((uVar28 << 0x1d | uVar28 >> 0x23) - _DAT_18344ba38 ^
                           (uVar22 << 0x1d | uVar22 >> 0x23) - lVar2);
  uVar22 = uStack00000000000000a8;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar38;
  uVar13 = (uint)(uVar38 >> 0x20);
  auVar34._8_4_ = (int)uVar38;
  auVar34._0_8_ = uVar38;
  auVar34._12_4_ = uVar13;
  auVar9 = auVar34 | ZEXT816(0);
  uVar15 = auVar9._0_4_;
  uVar4 = auVar9._0_8_;
  auVar34 = auVar34 ^ ZEXT816(0);
  uVar14 = auVar34._0_4_;
  uVar5 = auVar34._0_8_;
  auVar37._8_4_ = 0xffffffff;
  auVar37._0_8_ = 0xffffffffffffffff;
  auVar37._12_4_ = 0xffffffff;
  uVar7 = SUB164(auVar20 ^ auVar37,0);
  uVar28 = _DAT_18344bae0 << 0x1d | _DAT_18344bae0 >> 0x23;
  uVar5 = (((ulonglong)uVar7 * (ulonglong)_DAT_182bde6d0 +
            ((SUB168(auVar20 ^ auVar37,0) >> 0x20) * (ulonglong)_DAT_182bde6d0 +
             (ulonglong)_DAT_182bde6b0 * (ulonglong)uVar7 << 0x20) +
            (ulonglong)_DAT_182bde6f0 * (ulonglong)uVar14 +
            ((uVar5 >> 0x20) * (ulonglong)_DAT_182bde6f0 +
             (ulonglong)_DAT_182bde6e0 * (ulonglong)uVar14 << 0x20) +
            (uVar38 & 0xffffffff) * (ulonglong)_DAT_182bde6c0 +
            ((ulonglong)uVar13 * (ulonglong)_DAT_182bde6c0 +
             (uVar38 & 0xffffffff) * (ulonglong)_DAT_182bde6b0 << 0x20) +
           (ulonglong)_DAT_182bde700 * (ulonglong)uVar15 +
           ((ulonglong)_DAT_182bde710 * (ulonglong)uVar15 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_182bde700 << 0x20)) -
          ((_DAT_18001a710 & 0xffffffff) * (ulonglong)_DAT_182bde750 +
           ((_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_182bde750 +
            (ulonglong)_DAT_182bde740 * (_DAT_18001a710 & 0xffffffff) << 0x20) +
           (ulonglong)uVar14 * (ulonglong)_DAT_182bde770 +
           ((uVar5 >> 0x20) * (ulonglong)_DAT_182bde770 +
            (ulonglong)_DAT_182bde760 * (ulonglong)uVar14 << 0x20) +
          (ulonglong)uVar15 * (ulonglong)_DAT_182bde780 +
          ((ulonglong)_DAT_182bde790 * (ulonglong)uVar15 +
           (uVar4 >> 0x20) * (ulonglong)_DAT_182bde780 << 0x20))) + 0xbb04c19ef76df9fa;
  _DAT_18344ba00 = _DAT_18344ba88 ^ uVar28 ^ uVar5;
  _DAT_18344b928 = (_DAT_18344b928 ^ uVar28) + uVar5 ^ 0x634763e8040a384f;
  _DAT_18344b988 = (_DAT_18344b988 * -0x1f97c4d0a9c8b999 ^ _DAT_18344b928) + uVar28;
  _DAT_18344ba30 = _DAT_18344b988 ^ _DAT_18344b928;
  uVar4 = uStack00000000000000a8 ^ 0x84222325;
  uVar28 = ((_DAT_18344b928 ^ uVar4) + (uVar4 & _DAT_18344b928) * 2) * (uVar5 - _DAT_18344b910);
  uVar28 = (uVar28 | _DAT_18344b988) + (uVar28 & _DAT_18344b988);
  uVar28 = uVar28 * 0x2000 ^ uVar28;
  uVar28 = uVar28 >> 7 ^ uVar28;
  uVar28 = uVar28 << 0x11 ^ uVar28;
  _DAT_18344ba68 = uVar5;
  _DAT_18344b920 = func_0x0001900ccde0((uVar4 ^ uVar5 | uVar28) + (uVar28 & (uVar4 ^ uVar5)));
  uVar28 = _DAT_18344b920 << 0x3c | _DAT_18344b920 >> 4;
  _DAT_18344b968 = uVar5 ^ uVar22;
  _DAT_18344ba48 = (_DAT_18344ba48 ^ uVar28) + _DAT_18344b968 ^ 0xc58101603123b60a;
  _DAT_18344b9c0 = (_DAT_18344b9c0 * -0x17e5a3a06a69760b ^ _DAT_18344ba48) + uVar28;
  _DAT_18344b928 = _DAT_18344b9c0 ^ _DAT_18344ba48;
  _DAT_18344bab8 = _DAT_18344ba80 ^ _DAT_18344b968;
  FUN_190dd72e0(unaff_RSI,*_DAT_18301ee50 + 0x245,0xe);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))(unaff_RSI);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 100c09d5 (image 1900c09d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900c09d5(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 100cc91d (image 1900cc91d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900cc91d(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_182bdb208)();
  return;
}



// ===== continuation @ rva 100cc7ab (image 1900cc7ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900cc7ab(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x1152,0x41);
  (*_DAT_182bdd9a8)();
  return;
}



// ===== continuation @ rva 100cb133 (image 1900cb133) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900cb133(void)

{
  (*_DAT_182bddcd8)();
  return;
}



// ===== continuation @ rva 100cc067 (image 1900cc067) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900cc067(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 100a9ce6 (image 1900a9ce6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9ce6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd6c88)();
  return;
}



// ===== continuation @ rva 100a9c73 (image 1900a9c73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9c73(void)

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



// ===== continuation @ rva 100a9dbe (image 1900a9dbe) =====

void FUN_1900a9dbe(void)

{
  return;
}



// ===== continuation @ rva 100a9d86 (image 1900a9d86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9d86(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd6c98)();
  return;
}



// ===== continuation @ rva 100a9cac (image 1900a9cac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9cac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd6c78)();
  return;
}



// ===== continuation @ rva 100a9dc6 (image 1900a9dc6) =====

void FUN_1900a9dc6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a9cd1 (image 1900a9cd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a9cd1(void)

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



// ===== continuation @ rva 100a9d0e (image 1900a9d0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a9d0e(void)

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



// ===== continuation @ rva 100a9dad (image 1900a9dad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9dad(void)

{
  (*_DAT_182bd6c68)();
  return;
}



// ===== continuation @ rva 100a9ef1 (image 1900a9ef1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9ef1(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd6d28)();
  return;
}



// ===== continuation @ rva 100a9e78 (image 1900a9e78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9e78(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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



// ===== continuation @ rva 100a9fdb (image 1900a9fdb) =====

void FUN_1900a9fdb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a9ed9 (image 1900a9ed9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a9ed9(void)

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



// ===== continuation @ rva 100a9f19 (image 1900a9f19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a9f19(void)

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



// ===== continuation @ rva 100a9fce (image 1900a9fce) =====

void FUN_1900a9fce(void)

{
  return;
}



// ===== continuation @ rva 100a9fbe (image 1900a9fbe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9fbe(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182bd6d38)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 100a9eb4 (image 1900a9eb4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9eb4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd6d18)();
  return;
}



// ===== continuation @ rva 100a9f70 (image 1900a9f70) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a9f70(void)

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



// ===== continuation @ rva 100a9f3d (image 1900a9f3d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a9f3d(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd6d68)();
  return;
}



// ===== continuation @ rva 100aa0f6 (image 1900aa0f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa0f6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd6e78)();
  return;
}



// ===== continuation @ rva 100aa083 (image 1900aa083) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa083(void)

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



// ===== continuation @ rva 100aa1d6 (image 1900aa1d6) =====

void FUN_1900aa1d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100aa172 (image 1900aa172) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa172(void)

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



// ===== continuation @ rva 100aa1ce (image 1900aa1ce) =====

void FUN_1900aa1ce(void)

{
  return;
}



// ===== continuation @ rva 100aa196 (image 1900aa196) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa196(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd6e38)();
  return;
}



// ===== continuation @ rva 100aa0bc (image 1900aa0bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa0bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd6e68)();
  return;
}



// ===== continuation @ rva 100aa1bd (image 1900aa1bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa1bd(void)

{
  (*_DAT_182bd6e48)();
  return;
}



// ===== continuation @ rva 100aa13f (image 1900aa13f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa13f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd6df8)();
  return;
}



// ===== continuation @ rva 100aa2f6 (image 1900aa2f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa2f6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd6f58)();
  return;
}



// ===== continuation @ rva 100aa283 (image 1900aa283) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa283(void)

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



// ===== continuation @ rva 100aa3d4 (image 1900aa3d4) =====

void FUN_1900aa3d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100aa3cc (image 1900aa3cc) =====

void FUN_1900aa3cc(void)

{
  return;
}



// ===== continuation @ rva 100aa372 (image 1900aa372) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa372(void)

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



// ===== continuation @ rva 100aa3bc (image 1900aa3bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa3bc(void)

{
  (*_DAT_182bd6ed8)();
  return;
}



// ===== continuation @ rva 100aa2e1 (image 1900aa2e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa2e1(void)

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



// ===== continuation @ rva 100aa33f (image 1900aa33f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa33f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd6ee8)();
  return;
}



// ===== continuation @ rva 100aa2bc (image 1900aa2bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa2bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd6f18)();
  return;
}



// ===== continuation @ rva 100aa4f6 (image 1900aa4f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa4f6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd6fb8)();
  return;
}



// ===== continuation @ rva 100aa483 (image 1900aa483) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa483(void)

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



// ===== continuation @ rva 100aa5d6 (image 1900aa5d6) =====

void FUN_1900aa5d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100aa51e (image 1900aa51e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa51e(void)

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



// ===== continuation @ rva 100aa5ce (image 1900aa5ce) =====

void FUN_1900aa5ce(void)

{
  return;
}



// ===== continuation @ rva 100aa4e1 (image 1900aa4e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa4e1(void)

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



// ===== continuation @ rva 100aa5bd (image 1900aa5bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa5bd(void)

{
  (*_DAT_182bd6fc8)();
  return;
}



// ===== continuation @ rva 100aa4bc (image 1900aa4bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa4bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd6fd8)();
  return;
}



// ===== continuation @ rva 100aa53f (image 1900aa53f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa53f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd7018)();
  return;
}



// ===== continuation @ rva 100aa572 (image 1900aa572) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa572(void)

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



// ===== continuation @ rva 100aa6f6 (image 1900aa6f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa6f6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd7118)();
  return;
}



// ===== continuation @ rva 100aa683 (image 1900aa683) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa683(void)

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



// ===== continuation @ rva 100aa7ce (image 1900aa7ce) =====

void FUN_1900aa7ce(void)

{
  return;
}



// ===== continuation @ rva 100aa6bc (image 1900aa6bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa6bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd70b8)();
  return;
}



// ===== continuation @ rva 100aa796 (image 1900aa796) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa796(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd7108)();
  return;
}



// ===== continuation @ rva 100aa7d6 (image 1900aa7d6) =====

void FUN_1900aa7d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100aa6e1 (image 1900aa6e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa6e1(void)

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



// ===== continuation @ rva 100aa73f (image 1900aa73f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa73f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd70f8)();
  return;
}



// ===== continuation @ rva 100aa772 (image 1900aa772) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa772(void)

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



// ===== continuation @ rva 100ae28c (image 1900ae28c) =====

void FUN_1900ae28c(void)

{
  return;
}



// ===== continuation @ rva 100aa924 (image 1900aa924) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900aa924(void)

{
  FUN_190ddce00();
  (*_DAT_182bd7508)();
  return;
}



// ===== continuation @ rva 100aa97b (image 1900aa97b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900aa97b(void)

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



// ===== continuation @ rva 100ae773 (image 1900ae773) =====

void FUN_1900ae773(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100add1b (image 1900add1b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900add1b(void)

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



// ===== continuation @ rva 100ae56d (image 1900ae56d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ae56d(void)

{
  (*_DAT_182bd74b8)();
  return;
}



// ===== continuation @ rva 100ae199 (image 1900ae199) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900ae199(void)

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



// ===== continuation @ rva 100ad70b (image 1900ad70b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900ad70b(void)

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



// ===== continuation @ rva 100ae641 (image 1900ae641) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ae641(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182bd77a8)();
  return;
}



// ===== continuation @ rva 100ae513 (image 1900ae513) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ae513(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (*_DAT_182bd7818)();
  return;
}



// ===== continuation @ rva 100ae1e1 (image 1900ae1e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900ae1e1(void)

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



// ===== continuation @ rva 100b10a4 (image 1900b10a4) =====

void FUN_1900b10a4(void)

{
  return;
}



// ===== continuation @ rva 100b0f03 (image 1900b0f03) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900b0f03(void)

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



// ===== continuation @ rva 100b2761 (image 1900b2761) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900b2761(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined4 uStack00000000000000ac;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined2 uStack00000000000000f0;
  
  uStack00000000000000ac = 0x9814eeb8;
  rdtsc();
  uStack00000000000000d0 = 0x2f005300450044;
  rdtsc();
  uStack00000000000000d8 = 0x2f004300420043;
  rdtsc();
  uStack00000000000000e0 = 0x610050006f004e;
  rdtsc();
  uStack00000000000000e8 = 0x6e006900640064;
  rdtsc();
  uStack00000000000000f0 = 0x67;
  (**(code **)(*in_stack_00000030 + 0x518))(in_stack_00000030,&stack0x000000d0,0x11);
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



// ===== continuation @ rva 100b9b38 (image 1900b9b38) =====

void FUN_1900b9b38(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 100b56b8 (image 1900b56b8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1900b5b74(void)

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



// ===== continuation @ rva 100b9690 (image 1900b9690) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900b9690(void)

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



// ===== continuation @ rva 100b2ba8 (image 1900b2ba8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900b2ba8(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 100b40f6 (image 1900b40f6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900b40f6(void)

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



// ===== continuation @ rva 100b31f9 (image 1900b31f9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900b31f9(void)

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



// ===== continuation @ rva 100b9e12 (image 1900b9e12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900b9e12(void)

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



// ===== continuation @ rva 100b9dbe (image 1900b9dbe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900b9dbe(void)

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



// ===== continuation @ rva 100bac85 (image 1900bac85) =====

void FUN_1900bac85(void)

{
  return;
}



// ===== continuation @ rva 100ba770 (image 1900ba770) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ba770(void)

{
  FUN_190ddce00();
  (*_DAT_182bda5b8)();
  return;
}



// ===== continuation @ rva 100bac51 (image 1900bac51) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900bac51(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bda7d8)();
  return;
}



// ===== continuation @ rva 100ba2c1 (image 1900ba2c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900ba2c1(void)

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



// ===== continuation @ rva 100ba53c (image 1900ba53c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ba53c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182bda4a8)();
  return;
}



// ===== continuation @ rva 100baa46 (image 1900baa46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900baa46(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182bda578)();
  return;
}



// ===== continuation @ rva 100ba9e0 (image 1900ba9e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ba9e0(void)

{
  FUN_190dd72e0();
  (*_DAT_182bda7e8)();
  return;
}



// ===== continuation @ rva 100ba06c (image 1900ba06c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ba06c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182bda8d8)();
  return;
}



// ===== continuation @ rva 100ba945 (image 1900ba945) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900ba945(void)

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



// ===== continuation @ rva 100ba385 (image 1900ba385) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ba385(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = in_stack_00000040;
  FUN_190dd72e0();
  (*_DAT_182bda608)();
  return;
}



// ===== continuation @ rva 100cee96 (image 1900cee96) =====

void FUN_1900cee96(void)

{
  return;
}



// ===== continuation @ rva 100ccefc (image 1900ccefc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ccefc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182be0198)();
  return;
}



// ===== continuation @ rva 100ce4e8 (image 1900ce4e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900ce4e8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182be0878)();
  return;
}



// ===== continuation @ rva 100cf9d4 (image 1900cf9d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900cf9d4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182be0998)();
  return;
}



// ===== continuation @ rva 100cf262 (image 1900cf262) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900cf262(void)

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



// ===== continuation @ rva 100cfa3a (image 1900cfa3a) =====

void FUN_1900cfa3a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100cda15 (image 1900cda15) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900cda15(void)

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



// ===== continuation @ rva 100ce227 (image 1900ce227) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900ce227(void)

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



// ===== continuation @ rva 100cf934 (image 1900cf934) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900cf934(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182be04d8)();
  return;
}



// ===== continuation @ rva 100cf897 (image 1900cf897) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900cf897(void)

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



// ===== continuation @ rva 100cd0ad (image 1900cd0ad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900cd0ad(void)

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



// ===== continuation @ rva 100cdfab (image 1900cdfab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900cdfab(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000c0;
  undefined2 uStack00000000000000c4;
  undefined4 uStack00000000000000f4;
  
  uStack00000000000000f4 = 0xdd706e5;
  uVar1 = rdtsc();
  uStack00000000000000c0 = 0x690073;
  uStack00000000000000c4 = 0x78;
  (*_DAT_182be0258)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



// ===== continuation @ rva 100d25d1 (image 1900d25d1) =====

void FUN_1900d25d1(void)

{
  return;
}



// ===== continuation @ rva 100d242d (image 1900d242d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900d242d(void)

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



// ===== continuation @ rva 100d53c5 (image 1900d53c5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900d53c5(void)

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



// ===== continuation @ rva 100d50bc (image 1900d50bc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900d50bc(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190ddce00(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0x456a,*_DAT_18301ee50 + 0x847,
                0x294);
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



// ===== continuation @ rva 100d5421 (image 1900d5421) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1900d70f6(void)

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



// ===== continuation @ rva 100d4cd5 (image 1900d4cd5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1900d70f6(void)

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



// ===== continuation @ rva 100de699 (image 1900de699) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900de699(void)

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



// ===== continuation @ rva 100d3f8a (image 1900d3f8a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900d3f8a(void)

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



// ===== continuation @ rva 100d3cc7 (image 1900d3cc7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900d3cc7(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined2 in_stack_000000f0;
  
  (**(code **)(*in_stack_00000030 + 0x560))(in_stack_00000030,in_stack_00000040,in_stack_00000038,0)
  ;
  uStack00000000000000ac = 0x3f0ac381;
  rdtsc();
  in_stack_000000d0 = 0x2f005300450044;
  rdtsc();
  in_stack_000000d8 = 0x2f004300420043;
  rdtsc();
  in_stack_000000e0 = 0x610050006f004e;
  rdtsc();
  in_stack_000000e8 = 0x6e006900640064;
  rdtsc();
  in_stack_000000f0 = 0x67;
  (**(code **)(*in_stack_00000030 + 0x518))(in_stack_00000030,&stack0x000000d0,0x11);
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



// ===== continuation @ rva 100d3387 (image 1900d3387) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900d3387(void)

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



// ===== continuation @ rva 100de632 (image 1900de632) =====

undefined8 thunk_FUN_1900d3642(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x70))();
  return 0;
}



// ===== continuation @ rva 100deca2 (image 1900deca2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900deca2(void)

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



// ===== continuation @ rva 100dec4e (image 1900dec4e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900dec4e(void)

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



// ===== continuation @ rva 100dfb05 (image 1900dfb05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900dfb05(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182be3658)();
  return;
}



// ===== continuation @ rva 100df24b (image 1900df24b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900df24b(void)

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



// ===== continuation @ rva 100dfb3a (image 1900dfb3a) =====

void FUN_1900dfb3a(void)

{
  return;
}



// ===== continuation @ rva 100df509 (image 1900df509) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900df509(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182be34f8)();
  return;
}



// ===== continuation @ rva 100df9f6 (image 1900df9f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900df9f6(void)

{
  FUN_190dd72e0();
  (*_DAT_182be3728)();
  return;
}



// ===== continuation @ rva 100df781 (image 1900df781) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900df781(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182be35c8)();
  return;
}



// ===== continuation @ rva 100df71b (image 1900df71b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900df71b(void)

{
  FUN_190dd72e0();
  (*_DAT_182be3868)();
  return;
}



// ===== continuation @ rva 100df1c9 (image 1900df1c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900df1c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182be3758)();
  return;
}



// ===== continuation @ rva 100df385 (image 1900df385) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900df385(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182be3748)();
  return;
}



// ===== continuation @ rva 100df8ff (image 1900df8ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900df8ff(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182be3508)();
  return;
}



// ===== continuation @ rva 100df899 (image 1900df899) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900df899(void)

{
  FUN_190dd72e0();
  (*_DAT_182be35b8)();
  return;
}



// ===== continuation @ rva 100e1c56 (image 1900e1c56) =====

void FUN_1900e1c56(void)

{
  return;
}



// ===== continuation @ rva 100dfcbc (image 1900dfcbc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900dfcbc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182be44e8)();
  return;
}



// ===== continuation @ rva 100e2794 (image 1900e2794) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900e2794(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182be4008)();
  return;
}



// ===== continuation @ rva 100e0572 (image 1900e0572) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900e0572(void)

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



// ===== continuation @ rva 100e27fa (image 1900e27fa) =====

void FUN_1900e27fa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100e1dcf (image 1900e1dcf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900e1dcf(void)

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



// ===== continuation @ rva 100e181a (image 1900e181a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900e181a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_182be4608)();
  return;
}



// ===== continuation @ rva 100e13b6 (image 1900e13b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900e13b6(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182be4558)();
  return;
}



// ===== continuation @ rva 100e2348 (image 1900e2348) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900e2348(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182be45d8)();
  return;
}



// ===== continuation @ rva 100e1b2b (image 1900e1b2b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900e1b2b(void)

{
  FUN_190ddfc90();
  (*_DAT_182be3f68)();
  return;
}



// ===== continuation @ rva 100e0e89 (image 1900e0e89) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900e0e89(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182be45d8)();
  return;
}



// ===== continuation @ rva 100e0f11 (image 1900e0f11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900e0f11(void)

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



// ===== continuation @ rva 1006baab (image 19006baab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006baab(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc1b48)();
  return;
}



// ===== continuation @ rva 1006ba38 (image 19006ba38) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006ba38(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bb83 (image 19006bb83) =====

void FUN_19006bb83(void)

{
  return;
}



// ===== continuation @ rva 1006baf4 (image 19006baf4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006baf4(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1b18)();
  return;
}



// ===== continuation @ rva 1006ba71 (image 19006ba71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006ba71(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1b38)();
  return;
}



// ===== continuation @ rva 1006bb8d (image 19006bb8d) =====

void FUN_19006bb8d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006bb27 (image 19006bb27) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006bb27(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bb4b (image 19006bb4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bb4b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1b68)();
  return;
}



// ===== continuation @ rva 1006ba96 (image 19006ba96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006ba96(void)

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



// ===== continuation @ rva 1006bad3 (image 19006bad3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006bad3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bcae (image 19006bcae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bcae(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc1c18)();
  return;
}



// ===== continuation @ rva 1006bc3b (image 19006bc3b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bc3b(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bd93 (image 19006bd93) =====

void FUN_19006bd93(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006bd2a (image 19006bd2a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006bd2a(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bd75 (image 19006bd75) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bd75(void)

{
  (*_DAT_182bc1c48)();
  return;
}



// ===== continuation @ rva 1006bd86 (image 19006bd86) =====

void FUN_19006bd86(void)

{
  return;
}



// ===== continuation @ rva 1006bd4e (image 19006bd4e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bd4e(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x378))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1be8)();
  return;
}



// ===== continuation @ rva 1006bcf7 (image 19006bcf7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bcf7(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1bd8)();
  return;
}



// ===== continuation @ rva 1006bcd6 (image 19006bcd6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006bcd6(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bc99 (image 19006bc99) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006bc99(void)

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



// ===== continuation @ rva 1006bebe (image 19006bebe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bebe(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc1cc8)();
  return;
}



// ===== continuation @ rva 1006be4b (image 19006be4b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006be4b(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bf96 (image 19006bf96) =====

void FUN_19006bf96(void)

{
  return;
}



// ===== continuation @ rva 1006be84 (image 19006be84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006be84(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1d28)();
  return;
}



// ===== continuation @ rva 1006bfa3 (image 19006bfa3) =====

void FUN_19006bfa3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006bee6 (image 19006bee6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006bee6(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bf3a (image 19006bf3a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006bf3a(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006bf85 (image 19006bf85) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bf85(void)

{
  (*_DAT_182bc1cf8)();
  return;
}



// ===== continuation @ rva 1006bf5e (image 19006bf5e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006bf5e(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x378))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1d08)();
  return;
}



// ===== continuation @ rva 1006c0cb (image 19006c0cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c0cb(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc1de8)();
  return;
}



// ===== continuation @ rva 1006c058 (image 19006c058) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c058(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006c1ad (image 19006c1ad) =====

void FUN_19006c1ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006c1a3 (image 19006c1a3) =====

void FUN_19006c1a3(void)

{
  return;
}



// ===== continuation @ rva 1006c091 (image 19006c091) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c091(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1df8)();
  return;
}



// ===== continuation @ rva 1006c114 (image 19006c114) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c114(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1e08)();
  return;
}



// ===== continuation @ rva 1006c192 (image 19006c192) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c192(void)

{
  (*_DAT_182bc1d98)();
  return;
}



// ===== continuation @ rva 1006c16b (image 19006c16b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c16b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1dc8)();
  return;
}



// ===== continuation @ rva 1006c0f3 (image 19006c0f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c0f3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006c0b6 (image 19006c0b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c0b6(void)

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



// ===== continuation @ rva 1006c2cb (image 19006c2cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c2cb(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc1e78)();
  return;
}



// ===== continuation @ rva 1006c258 (image 19006c258) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c258(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006c3ad (image 19006c3ad) =====

void FUN_19006c3ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006c2f3 (image 19006c2f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c2f3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006c3a3 (image 19006c3a3) =====

void FUN_19006c3a3(void)

{
  return;
}



// ===== continuation @ rva 1006c392 (image 19006c392) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c392(void)

{
  (*_DAT_182bc1e88)();
  return;
}



// ===== continuation @ rva 1006c291 (image 19006c291) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c291(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1ef8)();
  return;
}



// ===== continuation @ rva 1006c314 (image 19006c314) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c314(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1ee8)();
  return;
}



// ===== continuation @ rva 1006c36b (image 19006c36b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c36b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x368))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1e98)();
  return;
}



// ===== continuation @ rva 1006c4cb (image 19006c4cb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c4cb(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc1fa8)();
  return;
}



// ===== continuation @ rva 1006c458 (image 19006c458) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c458(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006c5ad (image 19006c5ad) =====

void FUN_19006c5ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006c4b6 (image 19006c4b6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c4b6(void)

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



// ===== continuation @ rva 1006c5a3 (image 19006c5a3) =====

void FUN_19006c5a3(void)

{
  return;
}



// ===== continuation @ rva 1006c491 (image 19006c491) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c491(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc1f58)();
  return;
}



// ===== continuation @ rva 1006c514 (image 19006c514) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c514(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc1fd8)();
  return;
}



// ===== continuation @ rva 1006c4f3 (image 19006c4f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c4f3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006c592 (image 19006c592) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c592(void)

{
  (*_DAT_182bc1f68)();
  return;
}



// ===== continuation @ rva 1006c9db (image 19006c9db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c9db(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc21b8)();
  return;
}



// ===== continuation @ rva 1006c968 (image 19006c968) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c968(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006cab3 (image 19006cab3) =====

void FUN_19006cab3(void)

{
  return;
}



// ===== continuation @ rva 1006cabd (image 19006cabd) =====

void FUN_19006cabd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006ca57 (image 19006ca57) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006ca57(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006c9a1 (image 19006c9a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006c9a1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc21a8)();
  return;
}



// ===== continuation @ rva 1006c9c6 (image 19006c9c6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006c9c6(void)

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



// ===== continuation @ rva 1006ca03 (image 19006ca03) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006ca03(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1006caa2 (image 19006caa2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006caa2(void)

{
  (*_DAT_182bc21e8)();
  return;
}



// ===== continuation @ rva 1006ca7b (image 19006ca7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006ca7b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182bc21c8)();
  return;
}



// ===== continuation @ rva 1006cbd6 (image 19006cbd6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cbd6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc2258)();
  return;
}



// ===== continuation @ rva 1006cb63 (image 19006cb63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cb63(void)

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



// ===== continuation @ rva 1006ccb6 (image 19006ccb6) =====

void FUN_19006ccb6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006cbfe (image 19006cbfe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006cbfe(void)

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



// ===== continuation @ rva 1006ccae (image 19006ccae) =====

void FUN_19006ccae(void)

{
  return;
}



// ===== continuation @ rva 1006cc1f (image 19006cc1f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cc1f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc2278)();
  return;
}



// ===== continuation @ rva 1006cc52 (image 19006cc52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006cc52(void)

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



// ===== continuation @ rva 1006cb9c (image 19006cb9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cb9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc22d8)();
  return;
}



// ===== continuation @ rva 1006cc76 (image 19006cc76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cc76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc22b8)();
  return;
}



// ===== continuation @ rva 1006cc9d (image 19006cc9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cc9d(void)

{
  (*_DAT_182bc22a8)();
  return;
}



// ===== continuation @ rva 1006cdd6 (image 19006cdd6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cdd6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc2388)();
  return;
}



// ===== continuation @ rva 1006cd63 (image 19006cd63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cd63(void)

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



// ===== continuation @ rva 1006ceae (image 19006ceae) =====

void FUN_19006ceae(void)

{
  return;
}



// ===== continuation @ rva 1006ceb6 (image 19006ceb6) =====

void FUN_19006ceb6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006ce9d (image 19006ce9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006ce9d(void)

{
  (*_DAT_182bc23b8)();
  return;
}



// ===== continuation @ rva 1006cdc1 (image 19006cdc1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006cdc1(void)

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



// ===== continuation @ rva 1006ce1f (image 19006ce1f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006ce1f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc2378)();
  return;
}



// ===== continuation @ rva 1006ce52 (image 19006ce52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006ce52(void)

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



// ===== continuation @ rva 1006cdfe (image 19006cdfe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006cdfe(void)

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



// ===== continuation @ rva 1006cd9c (image 19006cd9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cd9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2358)();
  return;
}



// ===== continuation @ rva 1006cfd6 (image 19006cfd6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cfd6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc2438)();
  return;
}



// ===== continuation @ rva 1006cf63 (image 19006cf63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006cf63(void)

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



// ===== continuation @ rva 1006d0b6 (image 19006d0b6) =====

void FUN_19006d0b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006d0ae (image 19006d0ae) =====

void FUN_19006d0ae(void)

{
  return;
}



// ===== continuation @ rva 1006d09d (image 19006d09d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d09d(void)

{
  (*_DAT_182bc2418)();
  return;
}



// ===== continuation @ rva 1006cffe (image 19006cffe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006cffe(void)

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



// ===== continuation @ rva 1006d052 (image 19006d052) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006d052(void)

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



// ===== continuation @ rva 1006d076 (image 19006d076) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d076(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2428)();
  return;
}



// ===== continuation @ rva 1006d01f (image 19006d01f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d01f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc2448)();
  return;
}



// ===== continuation @ rva 1006d1d6 (image 19006d1d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d1d6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc2528)();
  return;
}



// ===== continuation @ rva 1006d163 (image 19006d163) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d163(void)

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



// ===== continuation @ rva 1006d2ae (image 19006d2ae) =====

void FUN_19006d2ae(void)

{
  return;
}



// ===== continuation @ rva 1006d19c (image 19006d19c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d19c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2578)();
  return;
}



// ===== continuation @ rva 1006d21f (image 19006d21f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d21f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc2568)();
  return;
}



// ===== continuation @ rva 1006d2b6 (image 19006d2b6) =====

void FUN_19006d2b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006d1fe (image 19006d1fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006d1fe(void)

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



// ===== continuation @ rva 1006d29d (image 19006d29d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d29d(void)

{
  (*_DAT_182bc2518)();
  return;
}



// ===== continuation @ rva 1006d276 (image 19006d276) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d276(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2538)();
  return;
}



// ===== continuation @ rva 1006d3d6 (image 19006d3d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d3d6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc2658)();
  return;
}



// ===== continuation @ rva 1006d363 (image 19006d363) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d363(void)

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



// ===== continuation @ rva 1006d4ae (image 19006d4ae) =====

void FUN_19006d4ae(void)

{
  return;
}



// ===== continuation @ rva 1006d476 (image 19006d476) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d476(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc25e8)();
  return;
}



// ===== continuation @ rva 1006d4b6 (image 19006d4b6) =====

void FUN_19006d4b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006d49d (image 19006d49d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d49d(void)

{
  (*_DAT_182bc25f8)();
  return;
}



// ===== continuation @ rva 1006d39c (image 19006d39c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d39c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2618)();
  return;
}



// ===== continuation @ rva 1006d3c1 (image 19006d3c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006d3c1(void)

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



// ===== continuation @ rva 1006d41f (image 19006d41f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d41f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc2648)();
  return;
}



// ===== continuation @ rva 1006d5d6 (image 19006d5d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d5d6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc2728)();
  return;
}



// ===== continuation @ rva 1006d563 (image 19006d563) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d563(void)

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



// ===== continuation @ rva 1006d6b4 (image 19006d6b4) =====

void FUN_19006d6b4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006d5c1 (image 19006d5c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006d5c1(void)

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



// ===== continuation @ rva 1006d6ac (image 19006d6ac) =====

void FUN_19006d6ac(void)

{
  return;
}



// ===== continuation @ rva 1006d676 (image 19006d676) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d676(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc26d8)();
  return;
}



// ===== continuation @ rva 1006d69c (image 19006d69c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d69c(void)

{
  (*_DAT_182bc26e8)(0);
  return;
}



// ===== continuation @ rva 1006d59c (image 19006d59c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d59c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc26b8)();
  return;
}



// ===== continuation @ rva 1006d652 (image 19006d652) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006d652(void)

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



// ===== continuation @ rva 1006d7d6 (image 19006d7d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d7d6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc2808)();
  return;
}



// ===== continuation @ rva 1006d763 (image 19006d763) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d763(void)

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



// ===== continuation @ rva 1006d8b6 (image 19006d8b6) =====

void FUN_19006d8b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006d89d (image 19006d89d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d89d(void)

{
  (*_DAT_182bc27a8)();
  return;
}



// ===== continuation @ rva 1006d8ae (image 19006d8ae) =====

void FUN_19006d8ae(void)

{
  return;
}



// ===== continuation @ rva 1006d81f (image 19006d81f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d81f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc27c8)();
  return;
}



// ===== continuation @ rva 1006d852 (image 19006d852) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006d852(void)

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



// ===== continuation @ rva 1006d876 (image 19006d876) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d876(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2798)();
  return;
}



// ===== continuation @ rva 1006d7c1 (image 19006d7c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006d7c1(void)

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



// ===== continuation @ rva 1006d9d6 (image 19006d9d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d9d6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc28e8)();
  return;
}



// ===== continuation @ rva 1006d963 (image 19006d963) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d963(void)

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



// ===== continuation @ rva 1006dab4 (image 19006dab4) =====

void FUN_19006dab4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006da9c (image 19006da9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006da9c(void)

{
  (*_DAT_182bc28a8)();
  return;
}



// ===== continuation @ rva 1006daac (image 19006daac) =====

void FUN_19006daac(void)

{
  return;
}



// ===== continuation @ rva 1006da76 (image 19006da76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006da76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2878)();
  return;
}



// ===== continuation @ rva 1006da52 (image 19006da52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006da52(void)

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



// ===== continuation @ rva 1006d99c (image 19006d99c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006d99c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc28d8)();
  return;
}



// ===== continuation @ rva 1006d9c1 (image 19006d9c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006d9c1(void)

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



// ===== continuation @ rva 1006dbd6 (image 19006dbd6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006dbd6(void)

{
  FUN_190dd72e0();
  (*_DAT_182bc29d8)();
  return;
}



// ===== continuation @ rva 1006db63 (image 19006db63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006db63(void)

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



// ===== continuation @ rva 1006dcb6 (image 19006dcb6) =====

void FUN_19006dcb6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 1006dbc1 (image 19006dbc1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006dbc1(void)

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



// ===== continuation @ rva 1006dcae (image 19006dcae) =====

void FUN_19006dcae(void)

{
  return;
}



// ===== continuation @ rva 1006dc76 (image 19006dc76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006dc76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc29b8)();
  return;
}



// ===== continuation @ rva 1006dc52 (image 19006dc52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19006dc52(void)

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



// ===== continuation @ rva 1006db9c (image 19006db9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006db9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bc2958)();
  return;
}



// ===== continuation @ rva 1006dc1f (image 19006dc1f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006dc1f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bc2988)();
  return;
}



// ===== continuation @ rva 1006dc9d (image 19006dc9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19006dc9d(void)

{
  (*_DAT_182bc2978)();
  return;
}



// ===== continuation @ rva 100a3911 (image 1900a3911) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3911(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd4ae8)();
  return;
}



// ===== continuation @ rva 100a3898 (image 1900a3898) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3898(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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



// ===== continuation @ rva 100a39ee (image 1900a39ee) =====

void FUN_1900a39ee(void)

{
  return;
}



// ===== continuation @ rva 100a38d4 (image 1900a38d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a38d4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd4af8)();
  return;
}



// ===== continuation @ rva 100a39fb (image 1900a39fb) =====

void FUN_1900a39fb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a395d (image 1900a395d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a395d(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd4b08)();
  return;
}



// ===== continuation @ rva 100a39de (image 1900a39de) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a39de(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182bd4aa8)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 100a3939 (image 1900a3939) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a3939(void)

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



// ===== continuation @ rva 100a38f9 (image 1900a38f9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a38f9(void)

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



// ===== continuation @ rva 100a3b21 (image 1900a3b21) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3b21(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd4be8)();
  return;
}



// ===== continuation @ rva 100a3aa8 (image 1900a3aa8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3aa8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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



// ===== continuation @ rva 100a3c0b (image 1900a3c0b) =====

void FUN_1900a3c0b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a3b09 (image 1900a3b09) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a3b09(void)

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



// ===== continuation @ rva 100a3bfe (image 1900a3bfe) =====

void FUN_1900a3bfe(void)

{
  return;
}



// ===== continuation @ rva 100a3bc7 (image 1900a3bc7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3bc7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd4bd8)();
  return;
}



// ===== continuation @ rva 100a3ba0 (image 1900a3ba0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a3ba0(void)

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



// ===== continuation @ rva 100a3ae4 (image 1900a3ae4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3ae4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd4b78)();
  return;
}



// ===== continuation @ rva 100a3bee (image 1900a3bee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3bee(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182bd4ba8)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 100a3d26 (image 1900a3d26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3d26(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd4c68)();
  return;
}



// ===== continuation @ rva 100a3cb3 (image 1900a3cb3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3cb3(void)

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



// ===== continuation @ rva 100a3e04 (image 1900a3e04) =====

void FUN_1900a3e04(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a3dec (image 1900a3dec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3dec(void)

{
  (*_DAT_182bd4c78)();
  return;
}



// ===== continuation @ rva 100a3d4e (image 1900a3d4e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a3d4e(void)

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



// ===== continuation @ rva 100a3dfc (image 1900a3dfc) =====

void FUN_1900a3dfc(void)

{
  return;
}



// ===== continuation @ rva 100a3d11 (image 1900a3d11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a3d11(void)

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



// ===== continuation @ rva 100a3da2 (image 1900a3da2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a3da2(void)

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



// ===== continuation @ rva 100a3d6f (image 1900a3d6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3d6f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd4ca8)();
  return;
}



// ===== continuation @ rva 100a3f26 (image 1900a3f26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3f26(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd4da8)();
  return;
}



// ===== continuation @ rva 100a3eb3 (image 1900a3eb3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3eb3(void)

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



// ===== continuation @ rva 100a3ffe (image 1900a3ffe) =====

void FUN_1900a3ffe(void)

{
  return;
}



// ===== continuation @ rva 100a4006 (image 1900a4006) =====

void FUN_1900a4006(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a3fed (image 1900a3fed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3fed(void)

{
  (*_DAT_182bd4d78)();
  return;
}



// ===== continuation @ rva 100a3f6f (image 1900a3f6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3f6f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd4d88)();
  return;
}



// ===== continuation @ rva 100a3eec (image 1900a3eec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a3eec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd4d98)();
  return;
}



// ===== continuation @ rva 100a3fa2 (image 1900a3fa2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a3fa2(void)

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



// ===== continuation @ rva 100a3f11 (image 1900a3f11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a3f11(void)

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



// ===== continuation @ rva 100a4126 (image 1900a4126) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4126(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd4e68)();
  return;
}



// ===== continuation @ rva 100a40b3 (image 1900a40b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a40b3(void)

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



// ===== continuation @ rva 100a41fc (image 1900a41fc) =====

void FUN_1900a41fc(void)

{
  return;
}



// ===== continuation @ rva 100a4204 (image 1900a4204) =====

void FUN_1900a4204(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a41a2 (image 1900a41a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a41a2(void)

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



// ===== continuation @ rva 100a40ec (image 1900a40ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a40ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd4e88)();
  return;
}



// ===== continuation @ rva 100a41ec (image 1900a41ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a41ec(void)

{
  (*_DAT_182bd4e58)();
  return;
}



// ===== continuation @ rva 100a414e (image 1900a414e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a414e(void)

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



// ===== continuation @ rva 100a416f (image 1900a416f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a416f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd4e28)();
  return;
}



// ===== continuation @ rva 100a4326 (image 1900a4326) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4326(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd4f58)();
  return;
}



// ===== continuation @ rva 100a42b3 (image 1900a42b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a42b3(void)

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



// ===== continuation @ rva 100a4406 (image 1900a4406) =====

void FUN_1900a4406(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a43fe (image 1900a43fe) =====

void FUN_1900a43fe(void)

{
  return;
}



// ===== continuation @ rva 100a436f (image 1900a436f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a436f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd4f38)();
  return;
}



// ===== continuation @ rva 100a4311 (image 1900a4311) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a4311(void)

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



// ===== continuation @ rva 100a43ed (image 1900a43ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a43ed(void)

{
  (*_DAT_182bd4ef8)();
  return;
}



// ===== continuation @ rva 100a43a2 (image 1900a43a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a43a2(void)

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



// ===== continuation @ rva 100a42ec (image 1900a42ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a42ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd4f18)();
  return;
}



// ===== continuation @ rva 100a434e (image 1900a434e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a434e(void)

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



// ===== continuation @ rva 100a4526 (image 1900a4526) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4526(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd4fe8)();
  return;
}



// ===== continuation @ rva 100a44b3 (image 1900a44b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a44b3(void)

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



// ===== continuation @ rva 100a4604 (image 1900a4604) =====

void FUN_1900a4604(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a45fc (image 1900a45fc) =====

void FUN_1900a45fc(void)

{
  return;
}



// ===== continuation @ rva 100a454e (image 1900a454e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a454e(void)

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



// ===== continuation @ rva 100a4511 (image 1900a4511) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a4511(void)

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



// ===== continuation @ rva 100a45ec (image 1900a45ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a45ec(void)

{
  (*_DAT_182bd4fd8)(0);
  return;
}



// ===== continuation @ rva 100a456f (image 1900a456f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a456f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd5058)();
  return;
}



// ===== continuation @ rva 100a44ec (image 1900a44ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a44ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd4ff8)();
  return;
}



// ===== continuation @ rva 100a4726 (image 1900a4726) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4726(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd5108)();
  return;
}



// ===== continuation @ rva 100a46b3 (image 1900a46b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a46b3(void)

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



// ===== continuation @ rva 100a4806 (image 1900a4806) =====

void FUN_1900a4806(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a47fe (image 1900a47fe) =====

void FUN_1900a47fe(void)

{
  return;
}



// ===== continuation @ rva 100a476f (image 1900a476f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a476f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd50e8)();
  return;
}



// ===== continuation @ rva 100a47c6 (image 1900a47c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a47c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd50f8)();
  return;
}



// ===== continuation @ rva 100a47a2 (image 1900a47a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a47a2(void)

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



// ===== continuation @ rva 100a47ed (image 1900a47ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a47ed(void)

{
  (*_DAT_182bd50b8)();
  return;
}



// ===== continuation @ rva 100a474e (image 1900a474e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a474e(void)

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



// ===== continuation @ rva 100a46ec (image 1900a46ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a46ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd5138)();
  return;
}



// ===== continuation @ rva 100a4926 (image 1900a4926) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4926(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd51e8)();
  return;
}



// ===== continuation @ rva 100a48b3 (image 1900a48b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a48b3(void)

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



// ===== continuation @ rva 100a49fe (image 1900a49fe) =====

void FUN_1900a49fe(void)

{
  return;
}



// ===== continuation @ rva 100a48ec (image 1900a48ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a48ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd51c8)();
  return;
}



// ===== continuation @ rva 100a4a06 (image 1900a4a06) =====

void FUN_1900a4a06(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a49ed (image 1900a49ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a49ed(void)

{
  (*_DAT_182bd51b8)();
  return;
}



// ===== continuation @ rva 100a4911 (image 1900a4911) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a4911(void)

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



// ===== continuation @ rva 100a494e (image 1900a494e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a494e(void)

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



// ===== continuation @ rva 100a496f (image 1900a496f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a496f(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd5218)();
  return;
}



// ===== continuation @ rva 100a4b31 (image 1900a4b31) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4b31(void)

{
  FUN_190dd72e0();
  (*_DAT_182bd5298)();
  return;
}



// ===== continuation @ rva 100a4ab8 (image 1900a4ab8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4ab8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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



// ===== continuation @ rva 100a4c0e (image 1900a4c0e) =====

void FUN_1900a4c0e(void)

{
  return;
}



// ===== continuation @ rva 100a4b7d (image 1900a4b7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4b7d(void)

{
  FUN_190dd9df0();
  (*_DAT_182bd52a8)();
  return;
}



// ===== continuation @ rva 100a4c1b (image 1900a4c1b) =====

void FUN_1900a4c1b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 100a4b59 (image 1900a4b59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a4b59(void)

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



// ===== continuation @ rva 100a4bb0 (image 1900a4bb0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a4bb0(void)

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



// ===== continuation @ rva 100a4bfe (image 1900a4bfe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4bfe(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182bd5288)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 100a4af4 (image 1900a4af4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1900a4af4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182bd52d8)();
  return;
}



// ===== continuation @ rva 100a4b19 (image 1900a4b19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1900a4b19(void)

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



