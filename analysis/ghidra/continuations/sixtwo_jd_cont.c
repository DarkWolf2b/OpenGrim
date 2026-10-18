// ===== continuation @ rva 82b13c5 (image 1882b13c5) =====

void FUN_1882b13c5(void)

{
  return;
}



// ===== continuation @ rva 829093f (image 18829093f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188290995 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18829093f(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 82a0814 (image 1882a0814) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001882a089c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1882a0814(void)

{
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000bc;
  
  uStack00000000000000bc = in_stack_00000070;
  (**(code **)(*unaff_RSI + 0x680))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 82ae8a4 (image 1882ae8a4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882ae8a4(void)

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



// ===== continuation @ rva 82aeb0b (image 1882aeb0b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882aeb0b(void)

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



// ===== continuation @ rva 8297fc2 (image 188297fc2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188297fd9 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188297fc2(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 82a1c08 (image 1882a1c08) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882a1c08(uint param_1)

{
  int iVar1;
  longlong *unaff_RSI;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong in_stack_00000058;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar5 = (_DAT_1831bf0c0 ^ _DAT_180eea1c0) + _DAT_1831beb50 + 0x915bdea8;
  uVar6 = (_DAT_1831beb50 ^ _UNK_180eea1c8) + _DAT_1831bf0c0 + 0x74f46b6e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bf0c0 ^ _DAT_180eea1c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831beb50 ^ _UNK_180eea1c8;
  _DAT_1831bec40 =
       func_0x0001882b15b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831bf0c0 + 0x74f46b6e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831beb50 + 0x915bdea8));
  _DAT_1831beba8 = (_DAT_1831beba8 ^ _DAT_1831bec40) + 0x75fdffef ^ 0x6c42c998a5b0794b;
  _DAT_1831bed60 = (_DAT_1831bed60 * -0x3cd98cad9d1f58d3 ^ _DAT_1831beba8) + _DAT_1831bec40;
  _DAT_1831becf0 = _DAT_1831bed60 ^ _DAT_1831beba8;
  _DAT_1831bef08 = 0x75fdffef;
  uVar5 = (~_DAT_1831bee58 + 0x22338859) *
          ((_DAT_1831bec78 ^ 0x6589ecd9) + (ulonglong)((uint)_DAT_1831bec78 & 0x6589ecd9) * 2);
  uVar5 = (uVar5 | _DAT_1831befd0) + (uVar5 & _DAT_1831befd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831bec48 = func_0x0001882b15b0((uVar5 | 0x47ba6481) + (ulonglong)((uint)uVar5 & 0x47ba6481))
  ;
  uVar5 = (_DAT_1831bec48 ^ 0xe3bbcffc) << 0xf | _DAT_1831bec48 >> 0x31;
  _DAT_1831bee10 = (_DAT_1831bee10 ^ uVar5) + 0xc39847a4 ^ 0xd21f11d2576e6b12;
  _DAT_1831bedb8 = (_DAT_1831bedb8 * 0xb92b631fc240bc5 ^ _DAT_1831bee10) + uVar5;
  _DAT_1831beb30 = _DAT_1831bedb8 ^ _DAT_1831bee10;
  _DAT_1831bef60 = 0xc39847a4;
  _DAT_1831beef0 = func_0x0001882b15b0(_DAT_1831bf080 ^ 0xe0062a2ffc4db);
  _DAT_1831beb18 =
       (_DAT_1831beb18 ^ _DAT_1831bed60 * 0x172891b08abc31b7) - 0x62692dc0 ^ 0x9da3f219a11f7c67;
  _DAT_1831bf080 =
       (_DAT_1831bf080 * 0x7535f0cae5e7c951 ^ _DAT_1831beb18) + _DAT_1831bed60 * 0x172891b08abc31b7;
  _DAT_1831beeb8 = _DAT_1831bf080 ^ _DAT_1831beb18;
  _DAT_1831bf0c8 = 0x9d96d240;
  uVar5 = (~_DAT_1831bebf8 + 0xf848aae1) *
          ((_DAT_1831bebb8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831bebb8 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1831bf0e0) + (uVar5 & _DAT_1831bf0e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831beba0 = func_0x0001882b15b0((uVar5 | 0x7c6a89c5) + (ulonglong)((uint)uVar5 & 0x7c6a89c5))
  ;
  _DAT_1831bebe8 =
       (_DAT_1831bebe8 ^ _DAT_1831beba0 * -0x74198455aea4eee1) - 0xf848aae0 ^ 0x3feac9c80634f10e;
  _DAT_1831beb48 =
       (_DAT_1831beb48 * 0x315f09e6a17e08db ^ _DAT_1831bebe8) + _DAT_1831beba0 * -0x74198455aea4eee1
  ;
  _DAT_1831bf060 = _DAT_1831beb48 ^ _DAT_1831bebe8;
  _DAT_1831bebf0 = 0x7b75520;
  uVar5 = (_DAT_1831bebd8 ^ _DAT_180eea1d0) + _DAT_1831beb58 + 0x842223da;
  uVar6 = (_DAT_1831beb58 ^ _UNK_180eea1d8) + _DAT_1831bebd8 + 0xf848aae0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bebd8 ^ _DAT_180eea1d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831beb58 ^ _UNK_180eea1d8;
  _DAT_1831beb20 =
       func_0x0001882b15b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831bebd8 + 0xf848aae0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831beb58 + 0x842223da));
  uVar5 = (_DAT_1831beb20 & 0xffffffffc0000000) + 0xff;
  _DAT_1831bebd8 = _DAT_1831bec48 ^ uVar5 ^ 0xf848abdf;
  _DAT_1831bec68 = (uVar5 ^ _DAT_1831bec68) + 0xf848abdf ^ 0x43492c253db9d373;
  _DAT_1831bef30 =
       (_DAT_1831beb20 & 0xffffffffc0000000) + (_DAT_1831bef30 * 0x604e34878efaf03 ^ _DAT_1831bec68)
       + 0xff;
  _DAT_1831bed90 = _DAT_1831bec68 ^ _DAT_1831bef30;
  _DAT_1831bf028 = 0xf848abdf;
  uVar5 = (_DAT_1831beea8 ^ _DAT_180eea1e0) + _DAT_1831bf0a8 + 0x7c6a88fa;
  uVar6 = (_DAT_1831bf0a8 ^ _UNK_180eea1e8) + _DAT_1831beea8 + 0x7b75520;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831beea8 ^ _DAT_180eea1e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831bf0a8 ^ _UNK_180eea1e8;
  _DAT_1831bed50 =
       func_0x0001882b15b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831beea8 + 0x7b75520) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bf0a8 + 0x7c6a88fa));
  uVar5 = (ulonglong)(((uint)_DAT_1831bed50 ^ 0x180882c0) & 0xf848abdf);
  _DAT_1831bf0d0 = _DAT_1831bed08 ^ uVar5 ^ 0x1000000ff;
  _DAT_1831becc8 = (_DAT_1831becc8 ^ uVar5) + 0x1000000ff ^ 0xe701e8a54ecfb27d;
  _DAT_1831bf0c8 = (_DAT_1831bf0c8 * -0x4a0425ac134032af ^ _DAT_1831becc8) + uVar5;
  _DAT_1831bee40 = _DAT_1831bf0c8 ^ _DAT_1831becc8;
  _DAT_1831bed08 = 0xff;
  uVar5 = (~_DAT_1831beb60 + 0x4f63ee29) *
          ((_DAT_1831bee10 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831bee10 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1831bf0a8) + (uVar5 & _DAT_1831bf0a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831bef98 = func_0x0001882b15b0((uVar5 | 0xcb41cd0d) + (ulonglong)((uint)uVar5 & 0xcb41cd0d))
  ;
  _DAT_1831bec40 = (_DAT_1831bec40 ^ _DAT_1831bef98) - 0x4f63ee28 ^ 0xd6cda70716b27c77;
  _DAT_1831bedd0 = (_DAT_1831bedd0 * 0x656c4996eacc49f5 ^ _DAT_1831bec40) + _DAT_1831bef98;
  _DAT_1831beb18 = _DAT_1831bedd0 ^ _DAT_1831bec40;
  _DAT_1831bf098 = 0xb09c11d8;
  uVar5 = (~_DAT_1831bed10 + 0x4f63ee29) *
          ((_DAT_1831bee50 ^ 0x842223da) + (ulonglong)((uint)_DAT_1831bee50 & 0x842223da) * 2);
  uVar5 = (uVar5 | _DAT_1831bebe0) + (uVar5 & _DAT_1831bebe0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831bf068 = func_0x0001882b15b0((uVar5 | 0xcb41cdf2) + (ulonglong)((uint)uVar5 & 0xcb41cdf2))
  ;
  uVar5 = _DAT_1831bf068 ^ 0x4f63eeff;
  _DAT_1831beb80 = _DAT_1831bec48 ^ uVar5 ^ 0x4f63ef27;
  _DAT_1831bebd0 = (_DAT_1831bebd0 ^ uVar5) + 0x4f63ef27 ^ 0xb5648358b80ee472;
  _DAT_1831becc0 = (_DAT_1831becc0 * -0x1444e318bdcba8eb ^ _DAT_1831bebd0) + uVar5;
  _DAT_1831bf038 = _DAT_1831becc0 ^ _DAT_1831bebd0;
  _DAT_1831befb8 = 0x4f63ef27;
  uVar5 = (_DAT_1831beda8 ^ _DAT_180eea1f0) + _DAT_1831bed30 + 0xf1dfdcca;
  uVar6 = (_DAT_1831bed30 ^ _UNK_180eea1f8) + _DAT_1831beda8 + 0xc39847a4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831beda8 ^ _DAT_180eea1f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831bed30 ^ _UNK_180eea1f8;
  _DAT_1831bec88 =
       func_0x0001882b15b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831beda8 + 0xc39847a4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bed30 + 0xf1dfdcca));
  uVar5 = ((_DAT_1831bec88 << 0x1e | _DAT_1831bec88 >> 0x22) << 4 |
          (_DAT_1831bec88 & 0x3ffffffff) >> 0x1e) ^ 0x75fdffef;
  _DAT_1831befc8 = _DAT_1831bef98 ^ uVar5 ^ 0x139964793;
  _DAT_1831beba0 = (_DAT_1831beba0 ^ uVar5) + 0x139964793 ^ 0xe526c366173900d9;
  _DAT_1831bee60 = (_DAT_1831bee60 * 0x3c82a2924e2b9417 ^ _DAT_1831beba0) + uVar5;
  _DAT_1831bf0d0 = _DAT_1831bee60 ^ _DAT_1831beba0;
  _DAT_1831bf058 = 0x39964793;
  uVar5 = (~_DAT_1831becc0 + 0xc39847a5) *
          ((_DAT_1831bf0c8 ^ 0xf1dfdcca) + (ulonglong)((uint)_DAT_1831bf0c8 & 0xf1dfdcca) * 2);
  uVar5 = (uVar5 | _DAT_1831bedd0) + (uVar5 & _DAT_1831bedd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831becf8 = func_0x0001882b15b0((uVar5 | 0x32479b6e) + (ulonglong)((uint)uVar5 & 0x32479b6e))
  ;
  uVar5 = (_DAT_1831becf8 ^ 0xf7fdffef) << 6 | _DAT_1831becf8 >> 0x3a;
  _DAT_1831bece8 = (_DAT_1831bece8 ^ uVar5) + 0xb665b84b ^ 0xb29b667c7ac16348;
  _DAT_1831beb58 = (_DAT_1831beb58 * 0x39a5feacaa876a31 ^ _DAT_1831bece8) + uVar5;
  _DAT_1831beb30 = _DAT_1831beb58 ^ _DAT_1831bece8;
  _DAT_1831bec68 = 0xb665b84b;
  _DAT_1831bef30 = func_0x0001882b15b0(_DAT_1831bef88 ^ 0xff69002dae0042b7);
  uVar5 = (_DAT_1831bef30 ^ 0xf7fdffef) & 0x7fffffffffffffff;
  _DAT_1831bee70 = (_DAT_1831bee70 ^ uVar5) + 0x419847a4 ^ 0x3c5656e005063fad;
  _DAT_1831bed98 = (_DAT_1831bed98 * -0x2c074d9047bbb021 ^ _DAT_1831bee70) + uVar5;
  _DAT_1831beda8 = _DAT_1831bed98 ^ _DAT_1831bee70;
  _DAT_1831bec20 = 0x419847a4;
  uVar5 = ((_DAT_1831beb70 ^ 0x842223da) + (ulonglong)((uint)_DAT_1831beb70 & 0x842223da) * 2) *
          -_DAT_1831bf0d8;
  uVar5 = (uVar5 | _DAT_1831bedc0) + (uVar5 & _DAT_1831bedc0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831becf0 = func_0x0001882b15b0((uVar5 | 0x842223da) + (ulonglong)((uint)uVar5 & 0x842223da))
  ;
  uVar5 = (_DAT_1831becf0 & 0x7fffffffffffffff) >> 1 | _DAT_1831becf0 & 0x7fffffffffffffff;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1831becf0 & 0x7fffffffffffffff) & 0x7fffffffffff;
  _DAT_1831bee00 = _DAT_1831bf0f8 ^ uVar5 ^ 0xff;
  _DAT_1831bf058 = (_DAT_1831bf058 ^ uVar5) + 0xff ^ 0x615f453d10a0d733;
  _DAT_1831bec20 = (_DAT_1831bec20 * 0x6cf17a30e59c99a9 ^ _DAT_1831bf058) + uVar5;
  _DAT_1831bf000 = _DAT_1831bec20 ^ _DAT_1831bf058;
  _DAT_1831bed70 = 0xff;
  uVar5 = (~_DAT_1831bed08 + 0x100000000) *
          ((_DAT_1831befd0 ^ 0xf1dfdcca) + (ulonglong)((uint)_DAT_1831befd0 & 0xf1dfdcca) * 2);
  uVar5 = (uVar5 | _DAT_1831bf058) + (uVar5 & _DAT_1831bf058);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831bef10 = func_0x0001882b15b0((uVar5 | 0xe202335) + (ulonglong)((uint)uVar5 & 0xe202335));
  _DAT_1831bf058 =
       (_DAT_1831bf058 ^ _DAT_1831bef10 * -0x3891f7037338c66b) + 0x8a020010 ^ 0x99e30220d1a8eae7;
  _DAT_1831bf0e8 =
       (_DAT_1831bf0e8 * -0x71c459cc8526839 ^ _DAT_1831bf058) + _DAT_1831bef10 * -0x3891f7037338c66b
  ;
  _DAT_1831bee08 = _DAT_1831bf0e8 ^ _DAT_1831bf058;
  _DAT_1831beb20 = 0x8a020010;
  uVar5 = (_DAT_1831beee8 ^ _DAT_180eea200) + _DAT_1831bebf0 + 0xf1dfdcca;
  uVar6 = (_DAT_1831bebf0 ^ _UNK_180eea208) + _DAT_1831beee8 + 0x8a020010;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831beee8 ^ _DAT_180eea200;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831bebf0 ^ _UNK_180eea208;
  _DAT_1831bedd8 =
       func_0x0001882b15b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831beee8 + 0x8a020010) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bebf0 + 0xf1dfdcca));
  _DAT_1831befd0 = _DAT_1831befd0 ^ _DAT_1831bedd8 & 0x1fffffffffff ^ 0x5cefc2c6a0c5865b;
  _DAT_1831beb08 =
       (_DAT_1831beb08 * -0x4f656c704fed809f ^ _DAT_1831befd0) + (_DAT_1831bedd8 & 0x1fffffffffff);
  _DAT_1831bef38 = _DAT_1831beb08 ^ _DAT_1831befd0;
  _DAT_1831bf0a0 = 0;
  _DAT_1831bef68 = func_0x0001882b15b0(_DAT_1831bef48 + 0xffdcff7b5a0021ffU ^ 0x22);
  uVar5 = (ulonglong)(~(uint)((ulonglong)_DAT_1831bef68 >> 0x31) & 0xff);
  _DAT_1831bf058 = _DAT_1831bf010 ^ uVar5 ^ 0xff;
  _DAT_1831bebd8 = (_DAT_1831bebd8 ^ uVar5) + 0xff ^ 0xcb214f242f091867;
  _DAT_1831bef40 = (_DAT_1831bef40 * 0x2d2dc5e74e479b37 ^ _DAT_1831bebd8) + uVar5;
  _DAT_1831bec10 = _DAT_1831bef40 ^ _DAT_1831bebd8;
  _DAT_1831bf0e8 = 0xff;
  uVar5 = (_DAT_1831bed90 ^ _DAT_180eea210) + _DAT_1831befc8 + 0x915bdea8;
  uVar6 = (_DAT_1831befc8 ^ _UNK_180eea218) + _DAT_1831bed90 + 0x1579fd8d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bed90 ^ _DAT_180eea210;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831befc8 ^ _UNK_180eea218;
  _DAT_1831bebd0 =
       func_0x0001882b15b0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831bed90 + 0x1579fd8d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831befc8 + 0x915bdea8));
  uVar5 = _DAT_1831bebd0 - (_DAT_1831bebd0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1831bebd0;
  _DAT_1831bf070 = _DAT_1831bf070 ^ uVar5 ^ 0x88a1bbb2aae9658a;
  _DAT_1831becb8 = (_DAT_1831becb8 * -0x7e56e72b7b785099 ^ _DAT_1831bf070) + uVar5;
  _DAT_1831bee50 = _DAT_1831becb8 ^ _DAT_1831bf070;
  _DAT_1831bef68 = 0;
  _DAT_1831beeb0 = func_0x0001882b15b0(_DAT_1831bedc0 + 0xffe2ff83d9ffddff ^ 0x91);
  uVar5 = _DAT_1831beeb0 << 0xd | _DAT_1831beeb0 >> 0x33;
  _DAT_1831beda8 = _DAT_1831bec30 ^ uVar5 ^ 0xff;
  _DAT_1831beea8 = (_DAT_1831beea8 ^ uVar5) + 0xff ^ 0xd04d9cef529066d5;
  _DAT_1831bef18 = (_DAT_1831bef18 * -0x5a9ccb09cfbe8a37 ^ _DAT_1831beea8) + uVar5;
  _DAT_1831bef08 = _DAT_1831bef18 ^ _DAT_1831beea8;
  _DAT_1831bebd8 = 0xff;
  uVar6 = ((ulonglong)param_1 & 0xff) << 0x28;
  uVar5 = in_stack_00000058 ^ 0x84222325 ^ _DAT_1831bebe8;
  lVar2 = (in_stack_00000058 ^ 0x84222325) + _DAT_1831befe0;
  uVar3 = uVar5 + lVar2;
  uVar4 = (uVar6 ^ _DAT_1831befe0) + _DAT_1831bebe8 + uVar6;
  uVar5 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar5;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6 ^ _DAT_1831befe0;
  _DAT_1831beba8 =
       func_0x0001882b15b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831bebe8 + uVar6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar2);
  uVar5 = _DAT_1831beba8 << 0x27 | _DAT_1831beba8 >> 0x19;
  _DAT_1831bec58 = (_DAT_1831bec58 ^ uVar5) + (uVar6 | in_stack_00000058) ^ 0x696997ae01f336c8;
  _DAT_1831bee90 = (_DAT_1831bf038 * 0x28296191cbaf9ffd ^ _DAT_1831bec58) + uVar5 ^ _DAT_1831bec58;
  _DAT_1831bf038 = uVar6 | in_stack_00000058;
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



// ===== continuation @ rva 82b1431 (image 1882b1431) =====

void FUN_1882b1431(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 82b1128 (image 1882b1128) =====

void thunk_FUN_188290ac7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 8290d6f (image 188290d6f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188290dc0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188290d6f(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 823cea9 (image 18823cea9) =====

void FUN_18823cea9(void)

{
  return;
}



// ===== continuation @ rva 8235920 (image 188235920) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188235920(void)

{
  FUN_190ddce00();
  (*_DAT_180ed5e68)();
  return;
}



// ===== continuation @ rva 823c28c (image 18823c28c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18823c28c(void)

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



// ===== continuation @ rva 824cab8 (image 18824cab8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824cab8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180ed86a8)();
  return;
}



// ===== continuation @ rva 8242420 (image 188242420) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188242420(void)

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



// ===== continuation @ rva 824b117 (image 18824b117) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824b117(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180ed57b8)();
  return;
}



// ===== continuation @ rva 8246f18 (image 188246f18) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188246f18(void)

{
  FUN_190dd72e0();
  (*_DAT_180ed68a8)();
  return;
}



// ===== continuation @ rva 823c0b4 (image 18823c0b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18823c0b4(void)

{
  (*_DAT_180ed71f8)();
  return;
}



// ===== continuation @ rva 823bf1c (image 18823bf1c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18823bf1c(void)

{
  (*_DAT_180ed75b8)();
  return;
}



// ===== continuation @ rva 823b089 (image 18823b089) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18823b089(void)

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



// ===== continuation @ rva 824cac9 (image 18824cac9) =====

void FUN_18824cac9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8246deb (image 188246deb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188246deb(void)

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



// ===== continuation @ rva 824aa5a (image 18824aa5a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824aa5a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180ed5c68)();
  return;
}



// ===== continuation @ rva 8246a58 (image 188246a58) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188246a58(void)

{
  FUN_190de3220();
  (*_DAT_180ed8768)();
  return;
}



// ===== continuation @ rva 824d25a (image 18824d25a) =====

void FUN_18824d25a(void)

{
  return;
}



// ===== continuation @ rva 824cc42 (image 18824cc42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824cc42(void)

{
  FUN_190ddce00();
  (*_DAT_180edb0d8)();
  return;
}



// ===== continuation @ rva 824d3bd (image 18824d3bd) =====

void FUN_18824d3bd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 824d169 (image 18824d169) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18824d169(void)

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



// ===== continuation @ rva 824d00a (image 18824d00a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18824d00a(void)

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



// ===== continuation @ rva 824cea0 (image 18824cea0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18824cea0(void)

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



// ===== continuation @ rva 824d046 (image 18824d046) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824d046(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_180edb258)();
  return;
}



// ===== continuation @ rva 824ce04 (image 18824ce04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824ce04(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180edb078)();
  return;
}



// ===== continuation @ rva 824d06e (image 18824d06e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824d06e(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  (*_DAT_180edb148)();
  return;
}



// ===== continuation @ rva 824cec7 (image 18824cec7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18824cec7(void)

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



// ===== continuation @ rva 824d3a9 (image 18824d3a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824d3a9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_180edb158)();
  return;
}



// ===== continuation @ rva 824d2aa (image 18824d2aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824d2aa(void)

{
  undefined4 uStack0000000000000038;
  
  uStack0000000000000038 = 0;
  FUN_190dd72e0();
  (*_DAT_180edb068)();
  return;
}



// ===== continuation @ rva 824d0f3 (image 18824d0f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824d0f3(void)

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



// ===== continuation @ rva 82bcdfe (image 1882bcdfe) =====

void FUN_1882bcdfe(void)

{
  return;
}



// ===== continuation @ rva 82b171f (image 1882b171f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882b171f(void)

{
  FUN_190ddce00();
  (*_DAT_180eeba78)();
  return;
}



// ===== continuation @ rva 82b75f9 (image 1882b75f9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882b75f9(void)

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



// ===== continuation @ rva 82b7108 (image 1882b7108) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882b7108(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_180eea858)();
  return;
}



// ===== continuation @ rva 82b6c58 (image 1882b6c58) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882b6c58(void)

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



// ===== continuation @ rva 82bcddc (image 1882bcddc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882bcddc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180eeb9e8)();
  return;
}



// ===== continuation @ rva 82bcc27 (image 1882bcc27) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882bcc27(void)

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



// ===== continuation @ rva 82b71f0 (image 1882b71f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882b71f0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_180eeadc8)();
  return;
}



// ===== continuation @ rva 82bbd6b (image 1882bbd6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882bbd6b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_180eeb938)();
  return;
}



// ===== continuation @ rva 82bbc81 (image 1882bbc81) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882bbc81(void)

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



// ===== continuation @ rva 82b6f38 (image 1882b6f38) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882b6f38(void)

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



// ===== continuation @ rva 82c5e49 (image 1882c5e49) =====

void FUN_1882c5e49(void)

{
  return;
}



// ===== continuation @ rva 82bd044 (image 1882bd044) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882bd044(void)

{
  FUN_190ddce00();
  (*_DAT_180eee5a8)();
  return;
}



// ===== continuation @ rva 82bfab9 (image 1882bfab9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882bfab9(void)

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



// ===== continuation @ rva 82c5e27 (image 1882c5e27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c5e27(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180eee9c8)();
  return;
}



// ===== continuation @ rva 82c4554 (image 1882c4554) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882c4554(void)

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



// ===== continuation @ rva 82c5ab0 (image 1882c5ab0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c5ab0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180eee848)();
  return;
}



// ===== continuation @ rva 82c54ef (image 1882c54ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c54ef(void)

{
  FUN_190de3220();
  (*_DAT_180eee838)();
  return;
}



// ===== continuation @ rva 82c5b16 (image 1882c5b16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c5b16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180eeeb78)();
  return;
}



// ===== continuation @ rva 82c5546 (image 1882c5546) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c5546(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180eeed58)();
  return;
}



// ===== continuation @ rva 82c5e38 (image 1882c5e38) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c5e38(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180eee9c8)();
  return;
}



// ===== continuation @ rva 82c5480 (image 1882c5480) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882c5480(void)

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



// ===== continuation @ rva 82c5a19 (image 1882c5a19) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c5a19(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180eeedc8)();
  return;
}



// ===== continuation @ rva 82c3b90 (image 1882c3b90) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c3b90(void)

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



// ===== continuation @ rva 82ca551 (image 1882ca551) =====

void FUN_1882ca551(void)

{
  return;
}



// ===== continuation @ rva 82c6051 (image 1882c6051) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882c6051(void)

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



// ===== continuation @ rva 82ea2b7 (image 1882ea2b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882ea2b7(void)

{
  char cVar1;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)(*(undefined8 *)(unaff_RBP + 0xb0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 838c609 (image 18838c609) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18838c609(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0xa8) = in_RAX;
  cVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0xb0) + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 82fee70 (image 1882fee70) =====

void thunk_FUN_18830de04(void)

{
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_RBP + 0x50) = unaff_RDI;
  (**(code **)(*unaff_R15 + 0x88))();
  *(undefined4 *)(unaff_RBP + -0x24) = 0xe5940757;
  (**(code **)(*unaff_R15 + 0x518))();
  return;
}



// ===== continuation @ rva 8312d91 (image 188312d91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188312d91(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0xa8) = in_RAX;
  cVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0xb0) + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8332400 (image 188332400) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188332400(void)

{
  char cVar1;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)(*(undefined8 *)(unaff_RBP + 0xb0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8315241 (image 188315241) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188315241(void)

{
  char cVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(*(undefined8 *)(unaff_RBP + 0xb0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 82ddc86 (image 1882ddc86) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882ddc86(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0xa8) = in_RAX;
  cVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0xb0) + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 83c0735 (image 1883c0735) =====

void FUN_1883c0735(void)

{
  return;
}



// ===== continuation @ rva 83b2982 (image 1883b2982) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1883b2982(void)

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



// ===== continuation @ rva 83e77b5 (image 1883e77b5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001883e7811 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1883e77b5(void)

{
  longlong in_RAX;
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  
  uVar2 = *(undefined8 *)(unaff_RBP + 0xa0);
  uVar1 = (**(code **)(in_RAX + 0x78))(uVar2);
  uVar2 = FUN_190dd72e0(uVar2,*_DAT_18301ee50 + 0x784,0x25);
  *(undefined8 *)(unaff_RBP + 0x98) = uVar2;
  (**(code **)(**(longlong **)(unaff_RBP + 0xa0) + 0x100))
            (*(longlong **)(unaff_RBP + 0xa0),uVar1,uVar2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 83e481f (image 1883e481f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1883e481f(void)

{
  char cVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(*(undefined8 *)(unaff_RBP + 0xa0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 83cfd18 (image 1883cfd18) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1883cfd18(void)

{
  char cVar1;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)(*(undefined8 *)(unaff_RBP + 0xa0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 840a622 (image 18840a622) =====

undefined8 thunk_FUN_18840e126(void)

{
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBP + 0x20) = unaff_RDI;
  (**(code **)(**(longlong **)(unaff_RBP + 0xa0) + 0x88))();
  return 0;
}



// ===== continuation @ rva 840d60c (image 18840d60c) =====

undefined8 thunk_FUN_18840e619(void)

{
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBP + 0x20) = unaff_RDI;
  (**(code **)(**(longlong **)(unaff_RBP + 0xa0) + 0x88))();
  return 0;
}



// ===== continuation @ rva 840757b (image 18840757b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001884075aa */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18840757b(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x98) = in_RAX;
  (**(code **)(**(longlong **)(unaff_RBP + 0xa0) + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 83c9c2d (image 1883c9c2d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1883c9c2d(void)

{
  char cVar1;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)(*(undefined8 *)(unaff_RBP + 0xa0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 83e0346 (image 1883e0346) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1883e0346(void)

{
  char cVar1;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)(*(undefined8 *)(unaff_RBP + 0xa0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8432de3 (image 188432de3) =====

void FUN_188432de3(void)

{
  return;
}



// ===== continuation @ rva 842653c (image 18842653c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18842653c(void)

{
  FUN_190ddce00();
  (*_DAT_180f4c398)();
  return;
}



// ===== continuation @ rva 8432bf9 (image 188432bf9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188432bf9(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180f4c4e8)();
  return;
}



// ===== continuation @ rva 84329ab (image 1884329ab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884329ab(void)

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



// ===== continuation @ rva 8430ee2 (image 188430ee2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188430ee2(void)

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



// ===== continuation @ rva 8430bf2 (image 188430bf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188430bf2(void)

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



// ===== continuation @ rva 842cdbd (image 18842cdbd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18842cdbd(void)

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



// ===== continuation @ rva 8431d4e (image 188431d4e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188431d4e(void)

{
  (*_DAT_180f4c818)();
  return;
}



// ===== continuation @ rva 8432bee (image 188432bee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188432bee(void)

{
  (*_DAT_180f4c818)();
  return;
}



// ===== continuation @ rva 84324ac (image 1884324ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884324ac(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180f4b788)();
  return;
}



// ===== continuation @ rva 842d0ae (image 18842d0ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18842d0ae(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190de3220(in_stack_00000030,&stack0x00000040,*_DAT_18301ee50 + 0x488,*_DAT_18301ee50 + 0x490,
                0x15);
  (*_DAT_180f4b668)();
  return;
}



// ===== continuation @ rva 843316b (image 18843316b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18843316b(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180f4ee38)();
  return;
}



// ===== continuation @ rva 8432f90 (image 188432f90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188432f90(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0xd8))();
  (*_DAT_180f4ed78)();
  return;
}



// ===== continuation @ rva 84334e8 (image 1884334e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884334e8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  (*_DAT_180f4ee28)();
  return;
}



// ===== continuation @ rva 8433310 (image 188433310) =====

void FUN_188433310(void)

{
  return;
}



// ===== continuation @ rva 84336e6 (image 1884336e6) =====

void FUN_1884336e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 84333fd (image 1884333fd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884333fd(void)

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



// ===== continuation @ rva 843326b (image 18843326b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18843326b(void)

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



// ===== continuation @ rva 84331be (image 1884331be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884331be(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  (*_DAT_180f4eea8)();
  return;
}



// ===== continuation @ rva 8433661 (image 188433661) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188433661(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  (*_DAT_180f4ee28)();
  return;
}



// ===== continuation @ rva 8433292 (image 188433292) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188433292(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  (*_DAT_180f4ee28)();
  return;
}



// ===== continuation @ rva 8433394 (image 188433394) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188433394(void)

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



// ===== continuation @ rva 843800a (image 18843800a) =====

void FUN_18843800a(void)

{
  return;
}



// ===== continuation @ rva 8433864 (image 188433864) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188433864(void)

{
  FUN_190ddce00();
  (*_DAT_180f4f708)();
  return;
}



// ===== continuation @ rva 8436ef8 (image 188436ef8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188436ef8(void)

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



// ===== continuation @ rva 8436cbd (image 188436cbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188436cbd(void)

{
  (*_DAT_180f4f8a8)();
  return;
}



// ===== continuation @ rva 8438ae0 (image 188438ae0) =====

void FUN_188438ae0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8437b52 (image 188437b52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188437b52(void)

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



// ===== continuation @ rva 843737a (image 18843737a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18843737a(void)

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



// ===== continuation @ rva 8437f46 (image 188437f46) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188437f46(void)

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



// ===== continuation @ rva 843752b (image 18843752b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18843752b(void)

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



// ===== continuation @ rva 8438261 (image 188438261) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188438261(void)

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



// ===== continuation @ rva 84384fa (image 1884384fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884384fa(void)

{
  FUN_190de3220();
  (*_DAT_180f4f188)();
  return;
}



// ===== continuation @ rva 824d539 (image 18824d539) =====

void FUN_18824d539(void)

{
  uint uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = (**(code **)(*unaff_RBX + 0x558))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00018824d56d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180edb560 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 824d4e6 (image 18824d4e6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018824d51c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18824d4e6(void)

{
  longlong *unaff_RBX;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RBX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 8262804 (image 188262804) =====

void FUN_188262804(void)

{
  return;
}



// ===== continuation @ rva 826277b (image 18826277b) =====

undefined8 thunk_FUN_18824d51f(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva 824d66c (image 18824d66c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824d66c(ulonglong param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulonglong in_RAX;
  longlong lVar3;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint unaff_XMM9_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  uVar4 = (in_RAX ^ _DAT_180edc190) + param_1 + 0x84222393;
  uVar5 = (param_1 ^ _UNK_180edc198) + in_RAX + 0x13;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ in_RAX ^ _DAT_180edc190;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ param_1 ^ _UNK_180edc198;
  _DAT_1831bd350 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (in_RAX + 0x13) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (param_1 + 0x84222393));
  uVar4 = (ulonglong)(((uint)_DAT_1831bd350 ^ 0x34) & 0xb6);
  _DAT_1831bd320 = (_DAT_1831bd320 ^ uVar4) + 0xb7 ^ 0xe3cb268dec20e8cd;
  _DAT_1831bd428 = (_DAT_1831bd428 * 0x13ea2ca3d743b2c1 ^ _DAT_1831bd320) + uVar4;
  _DAT_1831bd3f0 = _DAT_1831bd428 ^ _DAT_1831bd320;
  _DAT_1831bd3d0 = 0xb7;
  _DAT_1831bd310 = func_0x000188277240(_DAT_1831bd458 ^ 0xffdd008419001dc6);
  _DAT_1831bd330 = _DAT_1831bd330 - 0xc ^ 0x34ce91d5121bd76c;
  _DAT_1831bd4e8 = _DAT_1831bd470 * 0x2135d1fa9f09493d;
  _DAT_1831bd470 = _DAT_1831bd4e8 ^ _DAT_1831bd330;
  _DAT_1831bd4b0 = 0xf4;
  uVar4 = (~_DAT_1831bd488 + 0xf5) *
          ((_DAT_1831bd468 ^ 0x84222319) + (ulonglong)((uint)_DAT_1831bd468 & 0x84222319) * 2);
  uVar4 = (uVar4 | _DAT_1831bd458) + (uVar4 & _DAT_1831bd458);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831bd348 = func_0x000188277240((uVar4 | 0x842223ed) + (ulonglong)((uint)uVar4 & 0x842223ed))
  ;
  uVar4 = (_DAT_1831bd348 ^ 0x3c) & 0xfffffffffff ^ 0x3c;
  _DAT_1831bd330 = _DAT_1831bd4e8 ^ uVar4 ^ 0x130;
  _DAT_1831bd320 = (_DAT_1831bd320 ^ uVar4) + 0x130 ^ 0x4c3dab4cd55858c1;
  _DAT_1831bd4c8 = (_DAT_1831bd4c8 * -0xc2500f51a7f8daf ^ _DAT_1831bd320) + uVar4;
  _DAT_1831bd4e0 = _DAT_1831bd4c8 ^ _DAT_1831bd320;
  _DAT_1831bd3d0 = 0x30;
  uVar4 = (~_DAT_1831bd3e8 + 0xa1) *
          ((_DAT_1831bd360 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831bd360 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1831bd3c8) + (uVar4 & _DAT_1831bd3c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831bd4f8 = func_0x000188277240((uVar4 | 0x84222385) + (ulonglong)((uint)uVar4 & 0x84222385))
  ;
  _DAT_1831bd4d8 = _DAT_1831bd4d8 - 0xa0 ^ 0x21bd20ffbdf94349;
  _DAT_1831bd4b8 = _DAT_1831bd4d0 * 0x275f533930379827;
  _DAT_1831bd4d0 = _DAT_1831bd4b8 ^ _DAT_1831bd4d8;
  _DAT_1831bd3c0 = 0x60;
  uVar4 = (_DAT_1831bd458 ^ _DAT_180427cc0) + _DAT_1831bd318 + 0x84222315;
  uVar5 = (_DAT_1831bd318 ^ _UNK_180427cc8) + _DAT_1831bd458 + 0xa0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd458 ^ _DAT_180427cc0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd318 ^ _UNK_180427cc8;
  _DAT_1831bd458 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd458 + 0xa0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd318 + 0x84222315));
  uVar4 = _DAT_1831bd458 - (_DAT_1831bd458 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_R14) + (uVar4 >> 2 & unaff_R14);
  uVar4 = ((((uVar4 >> 4) + uVar4 & unaff_R15) * 0x101010101010101 >> 0x38) << 5 ^ _DAT_1831bd458) *
          -0x343523427df67e4d;
  _DAT_1831bd450 = _DAT_1831bd420 ^ uVar4 ^ 0xd0;
  _DAT_1831bd470 = (_DAT_1831bd470 ^ uVar4) + 0xd0 ^ 0x3edd3e089d032445;
  _DAT_1831bd4b0 = (_DAT_1831bd4b0 * 0x5b49011c254fef85 ^ _DAT_1831bd470) + uVar4;
  _DAT_1831bd328 = _DAT_1831bd4b0 ^ _DAT_1831bd470;
  _DAT_1831bd4d8 = 0xd0;
  uVar4 = (_DAT_1831bd4e8 ^ _DAT_1803d5a00) + _DAT_1831bd388 + 0x84222325;
  uVar5 = (_DAT_1831bd388 ^ _UNK_1803d5a08) + _DAT_1831bd4e8 + 0x58;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd4e8 ^ _DAT_1803d5a00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd388 ^ _UNK_1803d5a08;
  _DAT_1831bd450 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd4e8 + 0x58) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd388 + 0x84222325));
  uVar4 = (_DAT_1831bd450 << 0x2b | (_DAT_1831bd450 & 0x7fffffffffffffff) >> 0x15) >> 4 |
          ((_DAT_1831bd450 & 0x7fffffffffffffff) >> 0x15) << 0x3c;
  _DAT_1831bd498 = (_DAT_1831bd498 ^ uVar4) - 0x58 ^ 0x66ce7b207051d7e1;
  _DAT_1831bd350 = (_DAT_1831bd350 * -0x1fc879e24f33b5a1 ^ _DAT_1831bd498) + uVar4;
  _DAT_1831bd338 = _DAT_1831bd350 ^ _DAT_1831bd498;
  _DAT_1831bd418 = 0xa8;
  _DAT_1831bd450 = func_0x000188277240(_DAT_1831bd3c8 ^ 0x1eff8442ffe19a);
  uVar4 = (_DAT_1831bd450 ^ 0x1080) & 0x7fffffffffffffff;
  _DAT_1831bd460 = _DAT_1831bd4e8 ^ uVar4 ^ 0x88;
  _DAT_1831bd368 = (_DAT_1831bd368 ^ uVar4) + 0x88 ^ 0x43f4ac7aca4562a8;
  _DAT_1831bd4a0 = (_DAT_1831bd4a0 * -0x3457a8a172522b93 ^ _DAT_1831bd368) + uVar4;
  _DAT_1831bd3f8 = _DAT_1831bd4a0 ^ _DAT_1831bd368;
  _DAT_1831bd398 = 0x88;
  uVar4 = (_DAT_1831bd370 ^ _DAT_180edc1a0) + _DAT_1831bd4a0 + 0x84222392;
  uVar5 = (_DAT_1831bd4a0 ^ _UNK_180edc1a8) + _DAT_1831bd370 + 0x21;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd370 ^ _DAT_180edc1a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd4a0 ^ _UNK_180edc1a8;
  _DAT_1831bd428 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd370 + 0x21) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd4a0 + 0x84222392));
  uVar4 = _DAT_1831bd428 >> 1 | _DAT_1831bd428;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_R14) + (uVar4 >> 2 & unaff_R14);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & unaff_R15) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1831bd428) * 0xe34808d444a6103;
  _DAT_1831bd360 = (_DAT_1831bd360 ^ uVar4) + 0xd8 ^ 0x664cb7908ab68c75;
  _DAT_1831bd368 = (_DAT_1831bd368 * 0x178c76abe61b0ac5 ^ _DAT_1831bd360) + uVar4;
  _DAT_1831bd348 = _DAT_1831bd368 ^ _DAT_1831bd360;
  _DAT_1831bd418 = 0xd8;
  _DAT_1831bd380 = func_0x000188277240(0x22ff834d001e82);
  _DAT_1831bd3c8 = (_DAT_1831bd3c8 ^ _DAT_1831bd380 ^ 0x21) + 0x96 ^ 0x1e9a59614dbabe15;
  _DAT_1831bd400 = (_DAT_1831bd400 * 0x6d9fa0149981b57b ^ _DAT_1831bd3c8) + (_DAT_1831bd380 ^ 0x21);
  _DAT_1831bd418 = _DAT_1831bd400 ^ _DAT_1831bd3c8;
  _DAT_1831bd388 = 0x96;
  _DAT_1831bd370 = func_0x000188277240(_DAT_1831bd3d0 + 0x20ff84acffe1ffU ^ 4);
  uVar4 = _DAT_1831bd370 << 0x15 | _DAT_1831bd370 >> 0x2b;
  _DAT_1831bd358 = (_DAT_1831bd358 ^ uVar4) + 0x21 ^ 0x191b640c694b2ed1;
  _DAT_1831bd468 = (_DAT_1831bd468 * -0x34aeef3f69d9ad27 ^ _DAT_1831bd358) + uVar4;
  _DAT_1831bd3d8 = _DAT_1831bd468 ^ _DAT_1831bd358;
  _DAT_1831bd4e0 = 0x21;
  uVar4 = (_DAT_1831bd3c0 ^ _DAT_180edc1b0) + _DAT_1831bd4a0 + 0x842223b3;
  uVar5 = (_DAT_1831bd4a0 ^ _UNK_180edc1b8) + _DAT_1831bd3c0 + 0x42;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd3c0 ^ _DAT_180edc1b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd4a0 ^ _UNK_180edc1b8;
  _DAT_1831bd330 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd3c0 + 0x42) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd4a0 + 0x842223b3));
  uVar4 = (ulonglong)((uint)_DAT_1831bd330 & 0x96);
  _DAT_1831bd398 = _DAT_1831bd300 ^ uVar4 ^ 0xd8;
  _DAT_1831bd358 = (_DAT_1831bd358 ^ uVar4) + 0xd8 ^ 0x4d08b245063f11cd;
  _DAT_1831bd4e8 = (_DAT_1831bd4e8 * -0x78e5e9b6154dba7d ^ _DAT_1831bd358) + uVar4;
  _DAT_1831bd350 = _DAT_1831bd4e8 ^ _DAT_1831bd358;
  _DAT_1831bd3a8 = 0xd8;
  _DAT_1831bd430 = func_0x000188277240(_DAT_1831bd3e8 ^ 0xffdd0083e4ffddfd);
  _DAT_1831bd380 = _DAT_1831bd380 ^ _DAT_1831bd430 ^ 0x8d01715eda84fd;
  _DAT_1831bd4e8 = (_DAT_1831bd4e8 * -0x590299ecf5ebcd5d ^ _DAT_1831bd380) + _DAT_1831bd430;
  _DAT_1831bd488 = _DAT_1831bd4e8 ^ _DAT_1831bd380;
  _DAT_1831bd4e0 = 0;
  _DAT_1831bd438 = _DAT_1831bd430;
  uVar4 = func_0x000188277240(_DAT_1831bd330 ^ 0xffe0ff7bf4ffdd38);
  uVar4 = (uVar4 ^ 0x30) << 0x23 | uVar4 >> 0x1d;
  _DAT_1831bd340 = _DAT_1831bd488 ^ uVar4 ^ 0x30;
  _DAT_1831bd418 = (_DAT_1831bd418 ^ uVar4) + 0x30 ^ 0x79eb126fe2335b67;
  _DAT_1831bd4a0 = (_DAT_1831bd4a0 * -0x1f5f55a587f8900d ^ _DAT_1831bd418) + uVar4;
  _DAT_1831bd458 = _DAT_1831bd4a0 ^ _DAT_1831bd418;
  _DAT_1831bd3a8 = 0x30;
  uVar4 = (~_DAT_1831bd328 + 0x100) *
          ((_DAT_1831bd380 ^ 0x84222392) + (ulonglong)((uint)_DAT_1831bd380 & 0x84222392) * 2);
  uVar4 = (uVar4 | _DAT_1831bd420) + (uVar4 & _DAT_1831bd420);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lVar3 = func_0x000188277240((uVar4 | 0x8422236d) + (ulonglong)((uint)uVar4 & 0x8422236d));
  _DAT_1831bd368 = 0xacfacd21c0fef5a6;
  _DAT_1831bd428 = (_DAT_1831bd428 * 0x29a5bac89159b4a1 ^ 0xacfacd21c0fef5a6) + lVar3;
  _DAT_1831bd348 = _DAT_1831bd428 ^ 0xacfacd21c0fef5a6;
  _DAT_1831bd3f8 = 0x48;
  uVar4 = (_DAT_18072f100 ^ 0x48) + _DAT_1831bd318 + 0x84222392;
  uVar5 = (_DAT_1831bd318 ^ _UNK_18072f108) + 0x90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18072f100 ^ 0x48;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd318 ^ _UNK_18072f108;
  _DAT_1831bd468 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - 0x90 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd318 + 0x84222392));
  uVar4 = (_DAT_1831bd468 ^ 0x3378) * 0x239d9482b2ba0d07;
  _DAT_1831bd3d8 = _DAT_1831bd3d8 ^ uVar4 ^ 0xc66f56966d5614f9;
  _DAT_1831bd3f0 = (_DAT_1831bd3f0 * 0xcdfaf74f297ec07 ^ _DAT_1831bd3d8) + uVar4;
  _DAT_1831bd318 = _DAT_1831bd3f0 ^ _DAT_1831bd3d8;
  _DAT_1831bd420 = 0;
  _DAT_1831bd4a8 = func_0x000188277240(_DAT_1831bd4f8 + 0xffdeff7bf4ffddff ^ 0xe5);
  uVar4 = _DAT_1831bd4a8 >> 1 | _DAT_1831bd4a8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_R14) + (uVar4 >> 2 & unaff_R14);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R15) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1831bd4a8;
  _DAT_1831bd418 = _DAT_1831bd300 ^ uVar4 ^ 0x30;
  _DAT_1831bd488 = (_DAT_1831bd488 ^ uVar4) + 0x30 ^ 0x8e4395c325d196ec;
  _DAT_1831bd350 = (_DAT_1831bd350 * 0x168ca5ced6674105 ^ _DAT_1831bd488) + uVar4;
  _DAT_1831bd468 = _DAT_1831bd350 ^ _DAT_1831bd488;
  _DAT_1831bd390 = 0x30;
  _DAT_1831bd350 = func_0x000188277240(_DAT_1831bd4b8 + 0xffe2ff7be2ffe1ff ^ 0xab);
  uVar4 = (_DAT_1831bd350 ^ 0xb6) << 0x33 | ((_DAT_1831bd350 ^ 0xb6) & 0x7fffffffffffff) >> 0xd;
  uVar5 = _DAT_1831bd368 ^ uVar4;
  _DAT_1831bd368 = uVar5 ^ 0xd21ab77c29842ad0;
  _DAT_1831bd4b0 = (_DAT_1831bd4b0 * -0x23f3aa88f77f0d2b ^ _DAT_1831bd368) + uVar4;
  _DAT_1831bd320 = _DAT_1831bd4b0 ^ _DAT_1831bd368;
  _DAT_1831bd460 = 0;
  uVar4 = ((uVar5 ^ 0xd21ab77cada609c5) + (ulonglong)((uint)_DAT_1831bd368 & 0x84222315) * 2) *
          -_DAT_1831bd308;
  uVar4 = (uVar4 | _DAT_1831bd3c0) + (uVar4 & _DAT_1831bd3c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831bd308 = func_0x000188277240((uVar4 | 0x84222315) + (ulonglong)((uint)uVar4 & 0x84222315))
  ;
  uVar4 = (_DAT_1831bd308 ^ 0x30) * -0x5b658b88563f4ed3;
  _DAT_1831bd4c8 = _DAT_1831bd338 ^ uVar4 ^ 0x30;
  _DAT_1831bd360 = (_DAT_1831bd360 ^ uVar4) + 0x30 ^ 0xefe2c894738338e3;
  _DAT_1831bd330 = (_DAT_1831bd330 * 0x4df31af21a67b317 ^ _DAT_1831bd360) + uVar4;
  _DAT_1831bd378 = _DAT_1831bd330 ^ _DAT_1831bd360;
  _DAT_1831bd390 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x40);
  uVar4 = (ulonglong)bVar1 ^ 0x84222325;
  uVar5 = uVar4 ^ _DAT_1831bd480;
  lVar3 = uVar4 + _DAT_1831bd448;
  uVar4 = uVar5 + lVar3;
  uVar6 = (_DAT_1831bd448 ^ 0x30) + _DAT_1831bd480 + 0x30;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831bd448 ^ 0x30;
  _DAT_1831bd378 =
       func_0x000188277240((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd480 + 0x30) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar5 = (ulonglong)bVar1 | 0x30;
  _DAT_1831bd468 =
       (_DAT_1831bd468 ^ _DAT_1831bd378 & 0x7fffffffffffffff) + uVar5 ^ 0x7d04075db06ab9a6;
  _DAT_1831bd470 =
       (_DAT_1831bd470 * 0x2bb1c5341903b8cf ^ _DAT_1831bd468) +
       (_DAT_1831bd378 & 0x7fffffffffffffff);
  _DAT_1831bd418 = _DAT_1831bd470 ^ _DAT_1831bd468;
  uVar4 = unaff_R13 ^ 0x84222325 ^ _DAT_1831bd450;
  lVar3 = (unaff_R13 ^ 0x84222325) + _DAT_1831bd3c8;
  uVar6 = uVar4 + lVar3;
  uVar7 = ~_DAT_1831bd3c8 + (_DAT_1831bd450 - 1);
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ ~_DAT_1831bd3c8;
  _DAT_1831bd448 = uVar5;
  _DAT_1831bd4d8 =
       func_0x000188277240((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831bd450 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  auVar2._8_4_ = (int)unaff_R13;
  auVar2._0_8_ = unaff_R13;
  auVar2._12_4_ = (int)(unaff_R13 >> 0x20);
  uVar8 = SUB164(auVar2 ^ _DAT_18001a710,0);
  uVar6 = SUB168(auVar2 ^ _DAT_18001a710,0);
  uVar4 = _DAT_1831bd448 & 0xfffffffffffffff0;
  _DAT_1831bd3e0 =
       (ulonglong)uVar8 * (ulonglong)unaff_XMM9_Da +
       ((uVar6 >> 0x20) * (ulonglong)unaff_XMM9_Da + (ulonglong)uVar8 * (ulonglong)_DAT_180edc1c0 <<
       0x20) + (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180edc1d0 +
               ((unaff_R13 >> 0x20) * (ulonglong)_DAT_180edc1d0 +
                (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180edc1c0 << 0x20) +
       (-(((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180edc240 +
           (unaff_R13 >> 0x20) * (ulonglong)unaff_XMM14_Da << 0x20) +
          (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM14_Da +
         ((unaff_R13 & 0xffffffff) * (ulonglong)_DAT_180edc220 +
          (unaff_R13 >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
         (unaff_R13 & 0xffffffff) * (ulonglong)unaff_XMM15_Da) -
       ((ulonglong)uVar8 * (ulonglong)unaff_XMM13_Da +
       ((ulonglong)uVar8 * (ulonglong)_DAT_180edc260 + (uVar6 >> 0x20) * (ulonglong)unaff_XMM13_Da
       << 0x20))) + 0x2565cf0b4b84f0d;
  _DAT_1831bd3a0 = _DAT_1831bd478 ^ uVar4 ^ _DAT_1831bd3e0;
  _DAT_1831bd3f8 = (_DAT_1831bd3f8 ^ uVar4) + _DAT_1831bd3e0 ^ 0xa472296a1fd8ebcb;
  _DAT_1831bd4f8 = (_DAT_1831bd4f8 * -0x779c1a9770ea1793 ^ _DAT_1831bd3f8) + uVar4;
  _DAT_1831bd350 = _DAT_1831bd4f8 ^ _DAT_1831bd3f8;
  *(char *)(unaff_RBP + -0x50 + _DAT_1831bd3e0) = (char)uVar5;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 82627ff (image 1882627ff) =====

undefined8 thunk_FUN_18824d51f(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva 82623af (image 1882623af) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882623af(void)

{
  longlong unaff_RBP;
  int unaff_R14D;
  
  *(int *)(unaff_RBP + 0x80) = unaff_R14D + 1;
  *(int *)(unaff_RBP + 0x88) = *(int *)(unaff_RBP + 0x78);
  switch(unaff_R14D + 1 < *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 824ebd3 (image 18824ebd3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824ebd3(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  longlong in_RAX;
  longlong in_RCX;
  ulonglong uVar4;
  longlong unaff_RBP;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  ulonglong unaff_R13;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  uint unaff_XMM7_Da;
  longlong lVar16;
  uint unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  
  uVar10 = param_1 + in_RCX + param_2;
  uVar11 = param_4 + in_RAX + param_3;
  param_1 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ param_1;
  param_4 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ param_4;
  _DAT_1831bd330 =
       func_0x000188277240((param_4 << 0x1d | param_4 >> 0x23) - (in_RAX + param_3) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  uVar10 = (_DAT_1831bd330 ^ 0x2625505408) & 0x1ffffffffff;
  _DAT_1831bd470 = (_DAT_1831bd470 ^ uVar10) + 0xabd7f47e7fdb7ff9 ^ 0x9a963fb2d3164285;
  _DAT_1831bd488 = (_DAT_1831bd488 * -0x356501507284fafb ^ _DAT_1831bd470) + uVar10;
  _DAT_1831bd3f0 = _DAT_1831bd488 ^ _DAT_1831bd470;
  _DAT_1831bd478 = 0xabd7f47e7fdb7ff9;
  uVar10 = (~_DAT_1831bd440 + 0x1ae17afcd8c2658f) *
           ((_DAT_1831bd3f8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831bd3f8 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1831bd3d8) + (uVar10 & _DAT_1831bd3d8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd420 =
       func_0x000188277240((uVar10 | 0x1ae17afc5ce046ab) + (uVar10 & 0x1ae17afc5ce046ab));
  _DAT_1831bd4c0 = _DAT_1831bd4e8 * 0x68fc46f60af03793;
  _DAT_1831bd490 = _DAT_1831bd490 + 0xe51e8503273d9a72 ^ 0x9ab612b94a2140a8;
  _DAT_1831bd4e8 = _DAT_1831bd4c0 ^ _DAT_1831bd490;
  _DAT_1831bd408 = 0xe51e8503273d9a72;
  _DAT_1831bd410 = func_0x000188277240(_DAT_1831bd3b8 ^ 0xfeb6f29eb57b0cb0);
  _DAT_1831bd448 = _DAT_1831bd4a8 ^ _DAT_1831bd410 ^ 0x1ae17afcd8c2658c;
  _DAT_1831bd4d8 = (_DAT_1831bd4d8 ^ _DAT_1831bd410) + 0x1ae17afcd8c2658c ^ 0xc6ec7cefb985cf90;
  _DAT_1831bd498 = (_DAT_1831bd498 * 0x73e0be1b5c2e17f1 ^ _DAT_1831bd4d8) + _DAT_1831bd410;
  _DAT_1831bd330 = _DAT_1831bd498 ^ _DAT_1831bd4d8;
  _DAT_1831bd460 = 0x1ae17afcd8c2658c;
  uVar10 = (_DAT_1831bd398 ^ _DAT_180edc270) + _DAT_1831bd418 + 0x1ae17afc5ce046a9;
  uVar11 = (_DAT_1831bd418 ^ _UNK_180edc278) + _DAT_1831bd398 + 0xe51e8503273d9a72;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd398 ^ _DAT_180edc270;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd418 ^ _UNK_180edc278;
  _DAT_1831bd370 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd398 + 0xe51e8503273d9a72)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd418 + 0x1ae17afc5ce046a9));
  uVar10 = (_DAT_1831bd370 & 0x7ffffffffff) << 2 | _DAT_1831bd370 >> 0x3e;
  _DAT_1831bd350 = _DAT_1831bd4d8 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1831bd318 = (_DAT_1831bd318 ^ uVar10) - 2 ^ 0x6557d83d86e8275;
  _DAT_1831bd3a8 = (_DAT_1831bd3a8 * 0x48a50d3d9f210fc7 ^ _DAT_1831bd318) + uVar10;
  _DAT_1831bd358 = _DAT_1831bd3a8 ^ _DAT_1831bd318;
  _DAT_1831bd300 = 0xfffffffffffffffe;
  uVar10 = (_DAT_1831bd340 ^ _DAT_180edc280) + _DAT_1831bd3f0 + unaff_RDI;
  uVar11 = (_DAT_1831bd3f0 ^ _UNK_180edc288) + _DAT_1831bd340 + 0xfec23ec146a92dd7;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd340 ^ _DAT_180edc280;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd3f0 ^ _UNK_180edc288;
  _DAT_1831bd390 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd340 + 0xfec23ec146a92dd7)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831bd3f0 + unaff_RDI));
  uVar10 = ((_DAT_1831bd390 ^ 0xfec23ec146a92dd7) & 0x3fffffffff) << 0x19 |
           (_DAT_1831bd390 ^ 0xfec23ec146a92dd7) >> 0x27;
  _DAT_1831bd408 = (_DAT_1831bd408 ^ uVar10) + 0x13dc13eb956d229 ^ 0xc6f5d3876949440c;
  _DAT_1831bd4c0 = (_DAT_1831bd4c0 * 0x519ee3aa94aa3495 ^ _DAT_1831bd408) + uVar10;
  _DAT_1831bd480 = _DAT_1831bd4c0 ^ _DAT_1831bd408;
  _DAT_1831bd310 = 0x13dc13eb956d229;
  _DAT_1831bd398 = func_0x000188277240(_DAT_1831bd398 + 0x3e50f32b0b414c00 ^ 0x17);
  uVar10 = _DAT_1831bd398 ^ 0xfec23ec146a92dd7;
  _DAT_1831bd4b8 = _DAT_1831bd4d8 ^ uVar10 ^ 0xfec23ec146a92dd5;
  _DAT_1831bd4f0 = (_DAT_1831bd4f0 ^ uVar10) + 0xfec23ec146a92dd5 ^ 0xc8e75df02c1bf8af;
  _DAT_1831bd360 = (_DAT_1831bd360 * 0x2d94e5c704609d97 ^ _DAT_1831bd4f0) + uVar10;
  _DAT_1831bd340 = _DAT_1831bd360 ^ _DAT_1831bd4f0;
  _DAT_1831bd408 = _DAT_1831bd418 ^ 0xfec23ec146a92dd5;
  _DAT_1831bd400 = 0xfec23ec146a92dd5;
  _DAT_1831bd318 = func_0x000188277240(_DAT_1831bd340 + 0x2853a4b83813bc20 ^ 9);
  _DAT_1831bd4b0 = _DAT_1831bd478 ^ _DAT_1831bd350 ^ 0xfffffffffffffffe;
  _DAT_1831bd430 = (_DAT_1831bd430 ^ _DAT_1831bd350) - 2 ^ 0x100e43ec231a2de0;
  _DAT_1831bd498 = (_DAT_1831bd498 * 0x463094cd6800af7 ^ _DAT_1831bd430) + _DAT_1831bd350;
  _DAT_1831bd428 = _DAT_1831bd498 ^ _DAT_1831bd430;
  _DAT_1831bd4d0 = 0xfffffffffffffffe;
  uVar10 = (~_DAT_1831bd338 + 0x5ef1fecda5b846ac) *
           ((_DAT_1831bd338 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1831bd338 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1831bd448) + (uVar10 & _DAT_1831bd448);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd4a0 =
       func_0x000188277240((uVar10 | 0x5ef1fecd219a658e) + (uVar10 & 0x5ef1fecd219a658e));
  uVar10 = _DAT_1831bd4a0 >> 1 | _DAT_1831bd4a0;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = 0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_1831bd4a0;
  _DAT_1831bd438 = (_DAT_1831bd438 ^ uVar10) + 0xa10e01325a47b955 ^ 0xed0e28d1a9cca1a3;
  _DAT_1831bd488 = (_DAT_1831bd488 * 0x58efb47a74c1ff41 ^ _DAT_1831bd438) + uVar10;
  _DAT_1831bd328 = _DAT_1831bd488 ^ _DAT_1831bd438;
  _DAT_1831bd378 = 0xa10e01325a47b955;
  _DAT_1831bd470 = func_0x000188277240(_DAT_1831bd388 ^ 0xd76024e0fff2390);
  uVar11 = ~_DAT_1831bd470 << 0x3c | ~_DAT_1831bd470 >> 4;
  uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar11 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar11;
  _DAT_1831bd3a8 = _DAT_1831bd3d0 ^ uVar11 ^ 0x5ef1fecda5b846a9;
  _DAT_1831bd3d8 = (_DAT_1831bd3d8 ^ uVar11) + 0x5ef1fecda5b846a9 ^ 0x5760aad7378b3285;
  _DAT_1831bd4a8 = (_DAT_1831bd4a8 * -0x66d1d5686393d2ff ^ _DAT_1831bd3d8) + uVar11;
  _DAT_1831bd3e0 = _DAT_1831bd4a8 ^ _DAT_1831bd3d8;
  _DAT_1831bd410 = 0x5ef1fecda5b846a9;
  uVar10 = (~_DAT_1831bd478 + 0xa10e01325a47b956) *
           ((_DAT_1831bd460 ^ 0x5ef1fecd219a658c) + (_DAT_1831bd460 & 0x5ef1fecd219a658c) * 2);
  uVar10 = (uVar10 | 0x5ef1fecda5b846a9) + (uVar10 & 0x5ef1fecda5b846a9);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd3b0 =
       func_0x000188277240((uVar10 | 0xffffffff7bdddcd9) + (uVar10 & 0xffffffff7bdddcd9));
  uVar10 = _DAT_1831bd3b0 * 0xf5df686024e9b6d;
  _DAT_1831bd480 = _DAT_1831bd408 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1831bd3a8 = (_DAT_1831bd3a8 ^ uVar10) - 2 ^ 0x5b08fdfe8063f8dc;
  _DAT_1831bd328 = (_DAT_1831bd328 * 0x1ae9f59e42ca96e7 ^ _DAT_1831bd3a8) + uVar10;
  _DAT_1831bd380 = _DAT_1831bd328 ^ _DAT_1831bd3a8;
  _DAT_1831bd408 = 0xfffffffffffffffe;
  _DAT_1831bd3e0 = func_0x000188277240(_DAT_1831bd3d8 ^ 0x6ca087384e76f0b8);
  _DAT_1831bd3a0 = (_DAT_1831bd3a0 ^ _DAT_1831bd3e0) + 0x2850746a20c97c10 ^ 0x5ba0d28156300f7f;
  _DAT_1831bd3d0 = (_DAT_1831bd3d0 * 0x4ee27b5c644fdf97 ^ _DAT_1831bd3a0) + _DAT_1831bd3e0;
  _DAT_1831bd328 = _DAT_1831bd3d0 ^ _DAT_1831bd3a0;
  _DAT_1831bd478 = 0x2850746a20c97c10;
  uVar10 = (~_DAT_1831bd318 + 0x50a0e8d44192f821) *
           ((_DAT_1831bd428 ^ 0x838789945b10a0ce) + (_DAT_1831bd428 & 0x38789945b10a0ce) * 2);
  uVar10 = (uVar10 | _DAT_1831bd358) + (uVar10 & _DAT_1831bd358);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd408 =
       func_0x000188277240((uVar10 | 0xd32761401a8258ee) + (uVar10 & 0xd32761401a8258ee));
  uVar10 = _DAT_1831bd408 & 0xffffffffffffffe0;
  uVar11 = uVar10 >> 1 | uVar10;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = ((0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
            0x20 ^ uVar10) * 0x621e2b8492621305;
  _DAT_1831bd328 = _DAT_1831bd468 ^ uVar10 ^ 0xd428726920c57c0b;
  _DAT_1831bd4d0 = (_DAT_1831bd4d0 ^ uVar10) + 0xd428726920c57c0b ^ 0x1f7120413104fced;
  _DAT_1831bd3a0 = (_DAT_1831bd3a0 * 0x65c79beeab56e02b ^ _DAT_1831bd4d0) + uVar10;
  _DAT_1831bd308 = _DAT_1831bd3a0 ^ _DAT_1831bd4d0;
  _DAT_1831bd300 = -0x2bd78d96df3a83f5;
  _DAT_1831bd490 = func_0x000188277240(_DAT_1831bd3d0 ^ 0x1d007be4ffddd7);
  _DAT_1831bd478 = (_DAT_1831bd490 ^ 0xd428726920c00000) & 0xffffffffffe00000;
  _DAT_1831bd460 = _DAT_1831bd460 ^ _DAT_1831bd478 ^ 0x5607caf5e622e59b;
  _DAT_1831bd4b8 = (_DAT_1831bd4b8 * 0x1b0be9cce0422937 ^ _DAT_1831bd460) + _DAT_1831bd478;
  _DAT_1831bd408 = _DAT_1831bd4b8 ^ _DAT_1831bd460;
  _DAT_1831bd470 = 0;
  uVar10 = (_DAT_1831bd408 ^ 0xffffffff7bdddcdb) + (_DAT_1831bd350 - 0x84222325);
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd408 ^ 0xffffffff7bdddcdb;
  uVar11 = ((_DAT_1831bd350 + _DAT_1831bd408) * 0x2000 | _DAT_1831bd350 + _DAT_1831bd408 >> 0x33) ^
           _DAT_1831bd350;
  _DAT_1831bd4c8 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_1831bd408 ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831bd350 - 0x84222325));
  uVar10 = ~_DAT_1831bd4c8 & 0xfffffffffffffffe;
  _DAT_1831bd370 = _DAT_1831bd4c0 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1831bd338 = (_DAT_1831bd338 ^ uVar10) - 2 ^ 0x6aceb1415481d9d6;
  _DAT_1831bd358 = (_DAT_1831bd358 * 0xee6d8a51629e3f1 ^ _DAT_1831bd338) + uVar10;
  _DAT_1831bd488 = _DAT_1831bd358 ^ _DAT_1831bd338;
  _DAT_1831bd498 = 0xfffffffffffffffe;
  uVar10 = (_DAT_1831bd4f8 ^ _DAT_180edc290) + _DAT_1831bd4a8 + 0xabd7f47efbf95cdc;
  uVar11 = (_DAT_1831bd4a8 ^ _UNK_180edc298) + _DAT_1831bd4f8 + 0x54280b8180248006;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd4f8 ^ _DAT_180edc290;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd4a8 ^ _UNK_180edc298;
  _DAT_1831bd348 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd4f8 + 0x54280b8180248006)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd4a8 + 0xabd7f47efbf95cdc));
  _DAT_1831bd388 = _DAT_1831bd388 ^ _DAT_1831bd348 ^ 0x107bf7d806753369;
  _DAT_1831bd300 = (_DAT_1831bd300 * 0x5c0e785fb9e4f5db ^ _DAT_1831bd388) + _DAT_1831bd348;
  _DAT_1831bd380 = _DAT_1831bd300 ^ _DAT_1831bd388;
  _DAT_1831bd3f0 = 0;
  _DAT_1831bd360 = func_0x000188277240(_DAT_1831bd460 + 0x3d34114aac9d518 ^ 100);
  uVar10 = _DAT_1831bd360 - (_DAT_1831bd360 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1831bd360
           ^ 0xfffffffffffffffe;
  _DAT_1831bd388 = _DAT_1831bd3f0 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1831bd460 = (_DAT_1831bd460 ^ uVar10) - 2 ^ 0xbec8b45991344836;
  _DAT_1831bd310 = (_DAT_1831bd310 * -0x5d198da4410c11ad ^ _DAT_1831bd460) + uVar10;
  _DAT_1831bd448 = _DAT_1831bd310 ^ _DAT_1831bd460;
  _DAT_1831bd4e8 = -2;
  _DAT_1831bd3f8 = func_0x000188277240(_DAT_1831bd340 + 0x1f00841b001dff ^ 0x42);
  uVar11 = _DAT_1831bd3f8 ^ 0xcba5443e3340d8e1;
  uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar11 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar11;
  uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar11) &
           0x1fffffffffffffff;
  _DAT_1831bd4b0 = _DAT_1831bd4b0 ^ uVar10 ^ 0x8140de3e0473810d;
  _DAT_1831bd440 = (_DAT_1831bd440 * 0x6d96f0cb7fc5faad ^ _DAT_1831bd4b0) + uVar10;
  _DAT_1831bd3b0 = _DAT_1831bd440 ^ _DAT_1831bd4b0;
  _DAT_1831bd378 = 0;
  uVar10 = ((_DAT_1831bd458 ^ 0xffffffff7bdddcdb) + (_DAT_1831bd458 & 0x7fffffff7bdddcdb) * 2) *
           -_DAT_1831bd4c8;
  uVar10 = (uVar10 | _DAT_1831bd4e0) + (uVar10 & _DAT_1831bd4e0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd430 =
       func_0x000188277240((uVar10 | 0xffffffff7bdddcdb) + (uVar10 & 0xffffffff7bdddcdb));
  uVar10 = _DAT_1831bd430 ^ 0xfffffffffffffffe;
  _DAT_1831bd4b8 = _DAT_1831bd468 ^ uVar10;
  _DAT_1831bd428 = _DAT_1831bd4b8 ^ 0xfffffffffffffffe;
  _DAT_1831bd338 = (_DAT_1831bd338 ^ uVar10) - 2 ^ 0xcf9c05d96fa33fcd;
  _DAT_1831bd360 = (_DAT_1831bd360 * 0x8bf25c5aaa8a4df ^ _DAT_1831bd338) + uVar10;
  _DAT_1831bd490 = _DAT_1831bd360 ^ _DAT_1831bd338;
  auVar7._8_8_ = _UNK_1801ec418;
  auVar7._0_8_ = unaff_R13 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_180edc2a0,_DAT_1800170c0);
  _DAT_1831bd380 = 0xfffffffffffffffe;
  uVar11 = auVar8._8_8_ + auVar8._0_8_;
  uVar10 = uVar11 + _DAT_1831bd470;
  if (auVar8._4_4_ < 0) {
    uVar10 = _DAT_1831bd348 ^ uVar11;
  }
  _DAT_1831bd4d8 = func_0x000188277240(SUB161(auVar7 ^ _DAT_180edc2a0,5) ^ uVar10);
  auVar8._4_4_ = unaff_XMM12_Db;
  auVar8._0_4_ = unaff_XMM12_Da;
  auVar8._8_4_ = unaff_XMM12_Dc;
  auVar8._12_4_ = unaff_XMM12_Dd;
  uVar6 = unaff_XMM12_Da | (uint)DAT_1800b8c60;
  auVar14._8_4_ = 0xffffffff;
  auVar14._0_8_ = 0xffffffffffffffff;
  auVar14._12_4_ = 0xffffffff;
  auVar1._4_4_ = unaff_XMM12_Db;
  auVar1._0_4_ = unaff_XMM12_Da;
  auVar1._8_4_ = unaff_XMM12_Dc;
  auVar1._12_4_ = unaff_XMM12_Dd;
  uVar15 = SUB164(auVar8 & _DAT_1800b8c60,0);
  uVar11 = SUB168(auVar8 & _DAT_1800b8c60,0);
  uVar13 = SUB164(auVar14 ^ auVar1,0);
  uVar4 = SUB168(auVar14 ^ auVar1,0);
  lVar16 = ((ulonglong)_DAT_180edc330 * (ulonglong)unaff_XMM12_Da +
            (ulonglong)_DAT_180edc320 * (ulonglong)unaff_XMM7_Da << 0x20) +
           (ulonglong)unaff_XMM12_Da * (ulonglong)_DAT_180edc320;
  uVar10 = _DAT_1831bd4d8 - (_DAT_1831bd4d8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1831bd4d8
  ;
  auVar2._4_4_ = unaff_XMM12_Db;
  auVar2._0_4_ = unaff_XMM12_Da;
  auVar2._8_4_ = unaff_XMM12_Dc;
  auVar2._12_4_ = unaff_XMM12_Dd;
  uVar9 = SUB164(_DAT_1800b8c60 ^ auVar2,0);
  uVar5 = (((ulonglong)_DAT_180edc300 * (ulonglong)uVar13 +
            ((ulonglong)_DAT_180edc310 * (ulonglong)uVar13 +
             (uVar4 >> 0x20) * (ulonglong)_DAT_180edc300 << 0x20) +
            ((ulonglong)_DAT_180edc2d0 * (ulonglong)uVar6 + _DAT_180edc2f0 << 0x20) +
            (ulonglong)_DAT_180edc2e0 * (ulonglong)uVar6 +
            (ulonglong)uVar15 * (ulonglong)_DAT_180edc2e0 +
            ((uVar11 >> 0x20) * (ulonglong)_DAT_180edc2e0 +
             (ulonglong)uVar15 * (ulonglong)_DAT_180edc2d0 << 0x20) +
            ((ulonglong)_DAT_180edc2c0 * (ulonglong)unaff_XMM12_Da +
             (ulonglong)_DAT_180edc2b0 * (ulonglong)unaff_XMM7_Da << 0x20) +
            (ulonglong)unaff_XMM12_Da * (ulonglong)_DAT_180edc2b0 + lVar16) -
          ((ulonglong)uVar13 * (ulonglong)_DAT_180edc380 +
           ((ulonglong)_DAT_180edc3e0 * (ulonglong)uVar13 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_180edc380 << 0x20) + lVar16 +
          (ulonglong)uVar9 * (ulonglong)_DAT_180edc3c0 +
          ((ulonglong)_DAT_180edc3d0 * (ulonglong)uVar9 +
           (SUB168(_DAT_1800b8c60 ^ auVar2,0) >> 0x20) * (ulonglong)_DAT_180edc3c0 << 0x20) +
          ((ulonglong)uVar6 * (ulonglong)_DAT_180edc3a0 + _DAT_180edc3b0 << 0x20) +
          (ulonglong)_DAT_180edc390 * (ulonglong)uVar6 +
          (ulonglong)uVar15 * (ulonglong)_DAT_180edc360 +
          ((ulonglong)_DAT_180edc370 * (ulonglong)uVar15 +
           (uVar11 >> 0x20) * (ulonglong)_DAT_180edc360 << 0x20) +
          ((ulonglong)(unaff_XMM12_Da * _DAT_180edc350 + unaff_XMM7_Da * _DAT_180edc340) << 0x20) +
          (ulonglong)unaff_XMM12_Da * (ulonglong)_DAT_180edc340)) + 0xc36cd016d96d160e;
  _DAT_1831bd328 = _DAT_1831bd4c8 ^ uVar10 ^ uVar5;
  _DAT_1831bd418 = (_DAT_1831bd418 ^ uVar10) + uVar5 ^ 0x2ce1dea3e15c525e;
  _DAT_1831bd4e8 = (_DAT_1831bd4e8 * 0x16c97a4ebffc27a1 ^ _DAT_1831bd418) + uVar10;
  _DAT_1831bd318 = _DAT_1831bd4e8 ^ _DAT_1831bd418;
  _DAT_1831bd4c0 = uVar5;
  *(ulonglong *)(unaff_RBP + 0x60) = uVar5 + unaff_RBP + -0x50;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar5) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar10 = (~_DAT_1831bd3c0 + 0x82a2619298db846c) *
           ((_DAT_1831bd360 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831bd360 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1831bd478) + (uVar10 & _DAT_1831bd478);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar10 = func_0x000188277240((uVar10 | 0x82a261921cf9a74e) + (uVar10 & 0x82a261921cf9a74e));
  _DAT_1831bd300 =
       (_DAT_1831bd300 ^ uVar10 & 0xfffffffffffffff) + 0x7d5d9e6d67247b95 ^ 0x96e75c03c4cd223e;
  _DAT_1831bd490 =
       (_DAT_1831bd490 * 0x54855694decde21 ^ _DAT_1831bd300) + (uVar10 & 0xfffffffffffffff);
  _DAT_1831bd450 = _DAT_1831bd490 ^ _DAT_1831bd300;
  _DAT_1831bd430 = 0x7d5d9e6d67247b95;
  uVar10 = (_DAT_1831bd4e8 ^ _DAT_180edc3f0) + _DAT_1831bd3f0 + 0x84222330;
  uVar11 = (_DAT_1831bd3f0 ^ _UNK_180edc3f8) + _DAT_1831bd4e8 + 0x82a2619298db846b;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd4e8 ^ _DAT_180edc3f0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd3f0 ^ _UNK_180edc3f8;
  _DAT_1831bd378 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd4e8 + 0x82a2619298db846b)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831bd3f0 + 0x84222330));
  uVar10 = _DAT_1831bd378 * -0xf42f377c6583069;
  _DAT_1831bd488 = _DAT_1831bd428 ^ uVar10 ^ 0x82a2619298db8480;
  _DAT_1831bd490 = (_DAT_1831bd490 ^ uVar10) + 0x82a2619298db8480 ^ 0xf41ee9cc8da5fb93;
  _DAT_1831bd3c0 = (_DAT_1831bd3c0 * 0x1ad42963152a0285 ^ _DAT_1831bd490) + uVar10;
  _DAT_1831bd498 = _DAT_1831bd3c0 ^ _DAT_1831bd490;
  _DAT_1831bd4d0 = 0x82a2619298db8480;
  uVar10 = (_DAT_1831bd330 ^ _DAT_180edc400) + _DAT_1831bd330 + 0x82a261921cf9a7a5;
  uVar11 = (_DAT_1831bd330 ^ _UNK_180edc408) + _DAT_1831bd330 + 0x7d5d9e6d67247b95;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd330 ^ _DAT_180edc400;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd330 ^ _UNK_180edc408;
  uVar10 = func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) -
                               (_DAT_1831bd330 + 0x7d5d9e6d67247b95) ^
                               (uVar10 << 0x1d | uVar10 >> 0x23) -
                               (_DAT_1831bd330 + 0x82a261921cf9a7a5));
  uVar10 = uVar10 ^ 0xf5407572926d9e80;
  uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar10;
  _DAT_1831bd458 = _DAT_1831bd3d8 ^ uVar10 ^ 0x15;
  _DAT_1831bd4e0 = (_DAT_1831bd4e0 ^ uVar10) + 0x15 ^ 0x565a439baf41d33a;
  _DAT_1831bd388 = (_DAT_1831bd388 * 0x8711b23e19e8769 ^ _DAT_1831bd4e0) + uVar10;
  _DAT_1831bd430 = _DAT_1831bd388 ^ _DAT_1831bd4e0;
  _DAT_1831bd4f0 = 0x15;
  uVar10 = (~_DAT_1831bd308 + 0xe25c60be2ccf7f81) *
           ((_DAT_1831bd3d8 ^ uVar10 ^ 0x84222330) +
           (ulonglong)((uint)_DAT_1831bd458 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1831bd3d8) + (uVar10 & _DAT_1831bd3d8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd308 =
       func_0x000188277240((uVar10 | 0xe25c60bea8ed5ca5) + (uVar10 & 0xe25c60bea8ed5ca5));
  _DAT_1831bd3d8 = _DAT_1831bd3d8 + 0x1da39f41d3308080 ^ 0x73c230e6800e2621;
  _DAT_1831bd4e8 = _DAT_1831bd420 * 0x39e9b44d77da1719;
  _DAT_1831bd420 = _DAT_1831bd4e8 ^ _DAT_1831bd3d8;
  _DAT_1831bd4c8 = 0x1da39f41d3308080;
  uVar10 = (~_DAT_1831bd418 + 0xe25c60be2ccf7f81) *
           ((_DAT_1831bd4e8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831bd4e8 & 0x84222330) * 2);
  uVar10 = (uVar10 | _DAT_1831bd430) + (uVar10 & _DAT_1831bd430);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd488 =
       func_0x000188277240((uVar10 | 0xe25c60bea8ed5cb0) + (uVar10 & 0xe25c60bea8ed5cb0));
  uVar10 = _DAT_1831bd488 - (_DAT_1831bd488 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
           _DAT_1831bd488;
  _DAT_1831bd3a8 = _DAT_1831bd428 ^ uVar10 ^ 0xe25c60be2ccf7f95;
  _DAT_1831bd420 = (_DAT_1831bd420 ^ uVar10) + 0xe25c60be2ccf7f95 ^ 0xc2fc3c3d7550c7a2;
  _DAT_1831bd430 = (_DAT_1831bd430 * -0x71b434b6e2ad42f9 ^ _DAT_1831bd420) + uVar10;
  _DAT_1831bd418 = _DAT_1831bd430 ^ _DAT_1831bd420;
  _DAT_1831bd498 = _DAT_1831bd3f8 ^ 0xe25c60be2ccf7f95;
  _DAT_1831bd3d8 = 0xe25c60be2ccf7f95;
  uVar10 = (_DAT_1831bd458 ^ _DAT_180edc410) + _DAT_1831bd388 + 0xe25c60bea8ed5cb0;
  uVar11 = (_DAT_1831bd388 ^ _UNK_180edc418) + _DAT_1831bd458 + 0x1da39f41d3308080;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd458 ^ _DAT_180edc410;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd388 ^ _UNK_180edc418;
  _DAT_1831bd468 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd458 + 0x1da39f41d3308080)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd388 + 0xe25c60bea8ed5cb0));
  uVar10 = (_DAT_1831bd468 ^ 0x123314aca00) & 0x3ffffffffff;
  _DAT_1831bd408 = _DAT_1831bd478 ^ uVar10 ^ 0x15;
  _DAT_1831bd3c8 = (_DAT_1831bd3c8 ^ uVar10) + 0x15 ^ 0xc26a98e1eb7bf8a4;
  _DAT_1831bd430 = (_DAT_1831bd430 * 0x5de39734aad5ee6d ^ _DAT_1831bd3c8) + uVar10;
  _DAT_1831bd428 = _DAT_1831bd430 ^ _DAT_1831bd3c8;
  _DAT_1831bd310 = 0x15;
  _DAT_1831bd4c8 = func_0x000188277240(_DAT_1831bd360 + 0x177856e6d974cc66 ^ 0xdb);
  _DAT_1831bd390 =
       (_DAT_1831bd390 ^ _DAT_1831bd4c8 ^ 0xe9a9bc3863f6bb0c) + 0x165643c79c0944f4 ^
       0x622c6de476554db6;
  _DAT_1831bd360 =
       (_DAT_1831bd360 * 0x5e41d29415759a71 ^ _DAT_1831bd390) +
       (_DAT_1831bd4c8 ^ 0xe9a9bc3863f6bb0c);
  _DAT_1831bd410 = _DAT_1831bd360 ^ _DAT_1831bd390;
  _DAT_1831bd420 = 0x165643c79c0944f4;
  _DAT_1831bd4a0 = func_0x000188277240(_DAT_1831bd478 ^ 0x27775726d4b4d493);
  uVar10 = _DAT_1831bd4a0 & 0x7fffffffffffe000;
  _DAT_1831bd4e0 = _DAT_1831bd380 ^ uVar10 ^ 0xe9a9bc3863f6bb21;
  _DAT_1831bd370 = (_DAT_1831bd370 ^ uVar10) + 0xe9a9bc3863f6bb21 ^ 0xfdd986557ca45bed;
  _DAT_1831bd310 = (_DAT_1831bd310 * -0x383ce274c36c47f7 ^ _DAT_1831bd370) + uVar10;
  _DAT_1831bd488 = _DAT_1831bd310 ^ _DAT_1831bd370;
  _DAT_1831bd3a0 = 0xe9a9bc3863f6bb21;
  uVar10 = (~_DAT_1831bd4c8 + 0x165643c79c0944f5) *
           ((_DAT_1831bd3b8 ^ 0xe9a9bc38e7d49804) + (_DAT_1831bd3b8 & 0x69a9bc38e7d49804) * 2);
  uVar10 = (uVar10 | _DAT_1831bd390) + (uVar10 & _DAT_1831bd390);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd420 =
       func_0x000188277240((uVar10 | 0xffffffff7bdddcf0) + (uVar10 & 0xffffffff7bdddcf0));
  uVar11 = _UNK_180edc428;
  uVar10 = _DAT_180edc420;
  uVar4 = _DAT_1831bd420 >> 1 | _DAT_1831bd420;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1831bd420) * 0x318868e529f82ba9;
  _DAT_1831bd3f8 = _DAT_1831bd408 ^ uVar4 ^ 0x15;
  _DAT_1831bd368 = (_DAT_1831bd368 ^ uVar4) + 0x15 ^ 0x9fc3f81a4c664efa;
  _DAT_1831bd4a0 = (_DAT_1831bd4a0 * -0x417ef121ba62f3dd ^ _DAT_1831bd368) + uVar4;
  _DAT_1831bd368 = _DAT_1831bd4a0 ^ _DAT_1831bd368;
  _DAT_1831bd3e0 = 0x15;
  uVar4 = (_DAT_1831bd4d8 ^ _DAT_180edc420) + _DAT_1831bd4d0 + 0xf6dfb0fe75fd7cd2;
  uVar12 = (_DAT_1831bd4d0 ^ _UNK_180edc428) + _DAT_1831bd4d8 + 0xa943f0e8f6fe18a2;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd4d8 ^ _DAT_180edc420;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831bd4d0 ^ _UNK_180edc428;
  _DAT_1831bd418 =
       func_0x000188277240((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831bd4d8 + 0xa943f0e8f6fe18a2)
                           ^ (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd4d0 + 0xf6dfb0fe75fd7cd2)
                          );
  uVar4 = _DAT_1831bd418 & 0x3ffffffffffff;
  _DAT_1831bd460 = _DAT_1831bd3b8 ^ uVar4 ^ 0xa023a1e7e8dd7899;
  _DAT_1831bd428 = (_DAT_1831bd428 ^ uVar4) + 0xa023a1e7e8dd7899 ^ 0x90541001357dd607;
  _DAT_1831bd4b8 = (_DAT_1831bd4b8 * -0x71cc93d6d8dfd08d ^ _DAT_1831bd428) + uVar4;
  _DAT_1831bd400 = _DAT_1831bd4b8 ^ _DAT_1831bd428;
  _DAT_1831bd310 = -0x5fdc5e1817228767;
  _DAT_1831bd3e8 = func_0x000188277240(_DAT_1831bd430 + 0xe649c7d303ffca2 ^ 0x46);
  _DAT_1831bd378 =
       (_DAT_1831bd378 ^ _DAT_1831bd3e8 ^ 0xffdff0fef7ff5ff7) + 0x5f9c401607214755 ^
       0x4f326246e2742ad3;
  _DAT_1831bd420 =
       (_DAT_1831bd420 * -0x3748ef6c2c3d78fb ^ _DAT_1831bd378) +
       (_DAT_1831bd3e8 ^ 0xffdff0fef7ff5ff7);
  _DAT_1831bd388 = _DAT_1831bd420 ^ _DAT_1831bd378;
  _DAT_1831bd370 = 0x5f9c401607214755;
  uVar4 = (_DAT_1831bd348 ^ uVar10) + _DAT_1831bd448 + 0xf6dfb0fe75fd7cd2;
  uVar12 = (_DAT_1831bd448 ^ uVar11) + _DAT_1831bd348 + 0xa943f0e8f6fe18a2;
  uVar10 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd348 ^ uVar10;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831bd448 ^ uVar11;
  _DAT_1831bd4d0 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd348 + 0xa943f0e8f6fe18a2)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd448 + 0xf6dfb0fe75fd7cd2));
  _DAT_1831bd450 =
       (_DAT_1831bd450 ^ _DAT_1831bd4d0 & 0xffffffffe0000000) + 0xa043b0e8f0de18a2 ^
       0xf8a34ee044e78cab;
  _DAT_1831bd4f0 =
       (_DAT_1831bd4f0 * 0x7db2af0d3bbebc95 ^ _DAT_1831bd450) +
       (_DAT_1831bd4d0 & 0xffffffffe0000000);
  _DAT_1831bd4b8 = _DAT_1831bd4f0 ^ _DAT_1831bd450;
  _DAT_1831bd468 = _DAT_1831bd408 ^ 0xa043b0e8f0de18a2;
  _DAT_1831bd4c8 = 0xa043b0e8f0de18a2;
  uVar10 = (_DAT_1831bd448 ^ _DAT_180edc430) + _DAT_1831bd368 + 0x5f9c401683036470;
  uVar11 = (_DAT_1831bd368 ^ _UNK_180edc438) + _DAT_1831bd448 + 0x408761d1e1bc3144;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd448 ^ _DAT_180edc430;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd368 ^ _UNK_180edc438;
  _DAT_1831bd448 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd448 + 0x408761d1e1bc3144)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd368 + 0x5f9c401683036470));
  uVar10 = ~_DAT_1831bd448 & 0x5f9c401607214755 ^ 0x408761d1e1bc3144;
  _DAT_1831bd490 = _DAT_1831bd378 ^ uVar10 ^ 0xa023a1e7e8dd7899;
  _DAT_1831bd440 = (_DAT_1831bd440 ^ uVar10) + 0xa023a1e7e8dd7899 ^ 0xb8aafff5a2b302e4;
  _DAT_1831bd310 = (_DAT_1831bd310 * 0x63bdf24443bae651 ^ _DAT_1831bd440) + uVar10;
  _DAT_1831bd3f0 = _DAT_1831bd310 ^ _DAT_1831bd440;
  _DAT_1831bd460 = 0xa023a1e7e8dd7899;
  uVar10 = ((_DAT_1831bd340 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831bd340 & 0x84222330) * 2) *
           -_DAT_1831bd3b0;
  uVar10 = (uVar10 | _DAT_1831bd3e0) + (uVar10 & _DAT_1831bd3e0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd3a0 =
       func_0x000188277240((uVar10 | 0x84222330) + (ulonglong)((uint)uVar10 & 0x84222330));
  uVar10 = _DAT_1831bd3a0 - (_DAT_1831bd3a0 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
           _DAT_1831bd3a0;
  _DAT_1831bd450 = _DAT_1831bd378 ^ uVar10 ^ 0x15;
  _DAT_1831bd3d0 = (_DAT_1831bd3d0 ^ uVar10) + 0x15 ^ 0xa54c24382ed1b896;
  _DAT_1831bd410 = (_DAT_1831bd410 * 0x580db5c332cc37fb ^ _DAT_1831bd3d0) + uVar10;
  _DAT_1831bd478 = _DAT_1831bd410 ^ _DAT_1831bd3d0;
  _DAT_1831bd4e0 = _DAT_1831bd428 ^ 0x15;
  _DAT_1831bd378 = 0x15;
  uVar10 = (_DAT_1831bd428 ^ _DAT_180edc440) + _DAT_1831bd320 + 0xf6dfb0fe75fd7cd2;
  uVar11 = (_DAT_1831bd320 ^ _UNK_180edc448) + (_DAT_1831bd428 - 1);
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd428 ^ _DAT_180edc440;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd320 ^ _UNK_180edc448;
  _DAT_1831bd308 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd428 - 1) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831bd320 + 0xf6dfb0fe75fd7cd2)
                          );
  _DAT_1831bd490 = (_DAT_1831bd490 ^ _DAT_1831bd4f0) + 0x9204f010e20a008 ^ 0xef4624128e35fd41;
  _DAT_1831bd4a0 = (_DAT_1831bd4a0 * -0x79d21d589d10df29 ^ _DAT_1831bd490) + _DAT_1831bd4f0;
  _DAT_1831bd4e8 = _DAT_1831bd4a0 ^ _DAT_1831bd490;
  _DAT_1831bd3d0 = 0x9204f010e20a008;
  _DAT_1831bd4d0 = func_0x000188277240(_DAT_1831bd490 + 0xa0242167aad643ea ^ 0xeb);
  _DAT_1831bd490 = _DAT_1831bd490 ^ _DAT_1831bd4d0 ^ 0x342fd155a61a97f;
  _DAT_1831bd4b8 = (_DAT_1831bd4b8 * -0x458b8be09d48c0a3 ^ _DAT_1831bd490) + _DAT_1831bd4d0;
  _DAT_1831bd418 = _DAT_1831bd4b8 ^ _DAT_1831bd490;
  _DAT_1831bd320 = 0;
  uVar10 = ((_DAT_1831bd3d8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831bd3d8 & 0x84222330) * 2) *
           -_DAT_1831bd478;
  uVar10 = (uVar10 | _DAT_1831bd460) + (uVar10 & _DAT_1831bd460);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd3e8 =
       func_0x000188277240((uVar10 | 0x84222330) + (ulonglong)((uint)uVar10 & 0x84222330));
  uVar10 = _DAT_1831bd3e8 & 0xfffffffffffffff;
  _DAT_1831bd330 = _DAT_1831bd358 ^ uVar10 ^ 0x15;
  _DAT_1831bd4e0 = (_DAT_1831bd4e0 ^ uVar10) + 0x15 ^ 0xf949418a08260643;
  _DAT_1831bd418 = (_DAT_1831bd418 * -0x3955a82737a2d7e1 ^ _DAT_1831bd4e0) + uVar10;
  _DAT_1831bd480 = _DAT_1831bd418 ^ _DAT_1831bd4e0;
  _DAT_1831bd460 = 0x15;
  _DAT_1831bd4c8 = func_0x000188277240(_DAT_1831bd3f8 ^ 0x20ff842300218d);
  uVar10 = _DAT_1831bd4c8 - (_DAT_1831bd4c8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar3 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar10 = (uint)bVar3 + (uint)bVar3 ^ _DAT_1831bd4c8;
  _DAT_1831bd3f8 = _DAT_1831bd3f8 ^ uVar10 ^ 0x68b234c9e52a7c30;
  _DAT_1831bd4b0 = (_DAT_1831bd4b0 * 0x2cae0a6550ff20f3 ^ _DAT_1831bd3f8) + uVar10;
  _DAT_1831bd4e0 = _DAT_1831bd4b0 ^ _DAT_1831bd3f8;
  _DAT_1831bd310 = 0;
  switch(uVar5 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 82626ae (image 1882626ae) =====

undefined8 thunk_FUN_18824d51f(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x70))();
  return 0;
}



// ===== continuation @ rva 824d640 (image 18824d640) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824d640(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulonglong in_RAX;
  longlong lVar3;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong in_R9;
  ulonglong unaff_R12;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint unaff_XMM9_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  *(uint *)(unaff_RBP + 0x60) = unaff_ESI;
  *(char *)(unaff_RBP + 0x40) =
       (char)unaff_ESI + (char)(uint)((ulonglong)unaff_ESI * in_R9 >> 0x23) * -10;
  uVar4 = (_DAT_1831bd4d8 ^ _DAT_180edc190) + _DAT_1831bd418 + 0x84222393;
  uVar5 = (_DAT_1831bd418 ^ _UNK_180edc198) + _DAT_1831bd4d8 + 0x13;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd4d8 ^ _DAT_180edc190;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd418 ^ _UNK_180edc198;
  _DAT_1831bd350 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd4d8 + 0x13) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd418 + 0x84222393));
  uVar4 = (ulonglong)(((uint)_DAT_1831bd350 ^ 0x34) & 0xb6);
  _DAT_1831bd320 = (_DAT_1831bd320 ^ uVar4) + 0xb7 ^ 0xe3cb268dec20e8cd;
  _DAT_1831bd428 = (_DAT_1831bd428 * 0x13ea2ca3d743b2c1 ^ _DAT_1831bd320) + uVar4;
  _DAT_1831bd3f0 = _DAT_1831bd428 ^ _DAT_1831bd320;
  _DAT_1831bd3d0 = 0xb7;
  _DAT_1831bd310 = func_0x000188277240(_DAT_1831bd458 ^ 0xffdd008419001dc6);
  _DAT_1831bd330 = _DAT_1831bd330 - 0xc ^ 0x34ce91d5121bd76c;
  _DAT_1831bd4e8 = _DAT_1831bd470 * 0x2135d1fa9f09493d;
  _DAT_1831bd470 = _DAT_1831bd4e8 ^ _DAT_1831bd330;
  _DAT_1831bd4b0 = 0xf4;
  uVar4 = (~_DAT_1831bd488 + 0xf5) *
          ((_DAT_1831bd468 ^ 0x84222319) + (ulonglong)((uint)_DAT_1831bd468 & 0x84222319) * 2);
  uVar4 = (uVar4 | _DAT_1831bd458) + (uVar4 & _DAT_1831bd458);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831bd348 = func_0x000188277240((uVar4 | 0x842223ed) + (ulonglong)((uint)uVar4 & 0x842223ed))
  ;
  uVar4 = (_DAT_1831bd348 ^ 0x3c) & 0xfffffffffff ^ 0x3c;
  _DAT_1831bd330 = _DAT_1831bd4e8 ^ uVar4 ^ 0x130;
  _DAT_1831bd320 = (_DAT_1831bd320 ^ uVar4) + 0x130 ^ 0x4c3dab4cd55858c1;
  _DAT_1831bd4c8 = (_DAT_1831bd4c8 * -0xc2500f51a7f8daf ^ _DAT_1831bd320) + uVar4;
  _DAT_1831bd4e0 = _DAT_1831bd4c8 ^ _DAT_1831bd320;
  _DAT_1831bd3d0 = 0x30;
  uVar4 = (~_DAT_1831bd3e8 + 0xa1) *
          ((_DAT_1831bd360 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831bd360 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1831bd3c8) + (uVar4 & _DAT_1831bd3c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831bd4f8 = func_0x000188277240((uVar4 | 0x84222385) + (ulonglong)((uint)uVar4 & 0x84222385))
  ;
  _DAT_1831bd4d8 = _DAT_1831bd4d8 - 0xa0 ^ 0x21bd20ffbdf94349;
  _DAT_1831bd4b8 = _DAT_1831bd4d0 * 0x275f533930379827;
  _DAT_1831bd4d0 = _DAT_1831bd4b8 ^ _DAT_1831bd4d8;
  _DAT_1831bd3c0 = 0x60;
  uVar4 = (_DAT_1831bd458 ^ _DAT_180427cc0) + _DAT_1831bd318 + 0x84222315;
  uVar5 = (_DAT_1831bd318 ^ _UNK_180427cc8) + _DAT_1831bd458 + 0xa0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd458 ^ _DAT_180427cc0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd318 ^ _UNK_180427cc8;
  _DAT_1831bd458 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd458 + 0xa0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd318 + 0x84222315));
  uVar4 = _DAT_1831bd458 - (_DAT_1831bd458 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_R14) + (uVar4 >> 2 & unaff_R14);
  uVar4 = ((((uVar4 >> 4) + uVar4 & unaff_R15) * 0x101010101010101 >> 0x38) << 5 ^ _DAT_1831bd458) *
          -0x343523427df67e4d;
  _DAT_1831bd450 = _DAT_1831bd420 ^ uVar4 ^ 0xd0;
  _DAT_1831bd470 = (_DAT_1831bd470 ^ uVar4) + 0xd0 ^ 0x3edd3e089d032445;
  _DAT_1831bd4b0 = (_DAT_1831bd4b0 * 0x5b49011c254fef85 ^ _DAT_1831bd470) + uVar4;
  _DAT_1831bd328 = _DAT_1831bd4b0 ^ _DAT_1831bd470;
  _DAT_1831bd4d8 = 0xd0;
  uVar4 = (_DAT_1831bd4e8 ^ _DAT_1803d5a00) + _DAT_1831bd388 + 0x84222325;
  uVar5 = (_DAT_1831bd388 ^ _UNK_1803d5a08) + _DAT_1831bd4e8 + 0x58;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd4e8 ^ _DAT_1803d5a00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd388 ^ _UNK_1803d5a08;
  _DAT_1831bd450 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd4e8 + 0x58) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd388 + 0x84222325));
  uVar4 = (_DAT_1831bd450 << 0x2b | (_DAT_1831bd450 & 0x7fffffffffffffff) >> 0x15) >> 4 |
          ((_DAT_1831bd450 & 0x7fffffffffffffff) >> 0x15) << 0x3c;
  _DAT_1831bd498 = (_DAT_1831bd498 ^ uVar4) - 0x58 ^ 0x66ce7b207051d7e1;
  _DAT_1831bd350 = (_DAT_1831bd350 * -0x1fc879e24f33b5a1 ^ _DAT_1831bd498) + uVar4;
  _DAT_1831bd338 = _DAT_1831bd350 ^ _DAT_1831bd498;
  _DAT_1831bd418 = 0xa8;
  _DAT_1831bd450 = func_0x000188277240(_DAT_1831bd3c8 ^ 0x1eff8442ffe19a);
  uVar4 = (_DAT_1831bd450 ^ 0x1080) & 0x7fffffffffffffff;
  _DAT_1831bd460 = _DAT_1831bd4e8 ^ uVar4 ^ 0x88;
  _DAT_1831bd368 = (_DAT_1831bd368 ^ uVar4) + 0x88 ^ 0x43f4ac7aca4562a8;
  _DAT_1831bd4a0 = (_DAT_1831bd4a0 * -0x3457a8a172522b93 ^ _DAT_1831bd368) + uVar4;
  _DAT_1831bd3f8 = _DAT_1831bd4a0 ^ _DAT_1831bd368;
  _DAT_1831bd398 = 0x88;
  uVar4 = (_DAT_1831bd370 ^ _DAT_180edc1a0) + _DAT_1831bd4a0 + 0x84222392;
  uVar5 = (_DAT_1831bd4a0 ^ _UNK_180edc1a8) + _DAT_1831bd370 + 0x21;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd370 ^ _DAT_180edc1a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd4a0 ^ _UNK_180edc1a8;
  _DAT_1831bd428 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd370 + 0x21) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd4a0 + 0x84222392));
  uVar4 = _DAT_1831bd428 >> 1 | _DAT_1831bd428;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_R14) + (uVar4 >> 2 & unaff_R14);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & unaff_R15) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1831bd428) * 0xe34808d444a6103;
  _DAT_1831bd360 = (_DAT_1831bd360 ^ uVar4) + 0xd8 ^ 0x664cb7908ab68c75;
  _DAT_1831bd368 = (_DAT_1831bd368 * 0x178c76abe61b0ac5 ^ _DAT_1831bd360) + uVar4;
  _DAT_1831bd348 = _DAT_1831bd368 ^ _DAT_1831bd360;
  _DAT_1831bd418 = 0xd8;
  _DAT_1831bd380 = func_0x000188277240(0x22ff834d001e82);
  _DAT_1831bd3c8 = (_DAT_1831bd3c8 ^ _DAT_1831bd380 ^ 0x21) + 0x96 ^ 0x1e9a59614dbabe15;
  _DAT_1831bd400 = (_DAT_1831bd400 * 0x6d9fa0149981b57b ^ _DAT_1831bd3c8) + (_DAT_1831bd380 ^ 0x21);
  _DAT_1831bd418 = _DAT_1831bd400 ^ _DAT_1831bd3c8;
  _DAT_1831bd388 = 0x96;
  _DAT_1831bd370 = func_0x000188277240(_DAT_1831bd3d0 + 0x20ff84acffe1ffU ^ 4);
  uVar4 = _DAT_1831bd370 << 0x15 | _DAT_1831bd370 >> 0x2b;
  _DAT_1831bd358 = (_DAT_1831bd358 ^ uVar4) + 0x21 ^ 0x191b640c694b2ed1;
  _DAT_1831bd468 = (_DAT_1831bd468 * -0x34aeef3f69d9ad27 ^ _DAT_1831bd358) + uVar4;
  _DAT_1831bd3d8 = _DAT_1831bd468 ^ _DAT_1831bd358;
  _DAT_1831bd4e0 = 0x21;
  uVar4 = (_DAT_1831bd3c0 ^ _DAT_180edc1b0) + _DAT_1831bd4a0 + 0x842223b3;
  uVar5 = (_DAT_1831bd4a0 ^ _UNK_180edc1b8) + _DAT_1831bd3c0 + 0x42;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd3c0 ^ _DAT_180edc1b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd4a0 ^ _UNK_180edc1b8;
  _DAT_1831bd330 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831bd3c0 + 0x42) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd4a0 + 0x842223b3));
  uVar4 = (ulonglong)((uint)_DAT_1831bd330 & 0x96);
  _DAT_1831bd398 = _DAT_1831bd300 ^ uVar4 ^ 0xd8;
  _DAT_1831bd358 = (_DAT_1831bd358 ^ uVar4) + 0xd8 ^ 0x4d08b245063f11cd;
  _DAT_1831bd4e8 = (_DAT_1831bd4e8 * -0x78e5e9b6154dba7d ^ _DAT_1831bd358) + uVar4;
  _DAT_1831bd350 = _DAT_1831bd4e8 ^ _DAT_1831bd358;
  _DAT_1831bd3a8 = 0xd8;
  _DAT_1831bd430 = func_0x000188277240(_DAT_1831bd3e8 ^ 0xffdd0083e4ffddfd);
  _DAT_1831bd380 = _DAT_1831bd380 ^ _DAT_1831bd430 ^ 0x8d01715eda84fd;
  _DAT_1831bd4e8 = (_DAT_1831bd4e8 * -0x590299ecf5ebcd5d ^ _DAT_1831bd380) + _DAT_1831bd430;
  _DAT_1831bd488 = _DAT_1831bd4e8 ^ _DAT_1831bd380;
  _DAT_1831bd4e0 = 0;
  _DAT_1831bd438 = _DAT_1831bd430;
  uVar4 = func_0x000188277240(_DAT_1831bd330 ^ 0xffe0ff7bf4ffdd38);
  uVar4 = (uVar4 ^ 0x30) << 0x23 | uVar4 >> 0x1d;
  _DAT_1831bd340 = _DAT_1831bd488 ^ uVar4 ^ 0x30;
  _DAT_1831bd418 = (_DAT_1831bd418 ^ uVar4) + 0x30 ^ 0x79eb126fe2335b67;
  _DAT_1831bd4a0 = (_DAT_1831bd4a0 * -0x1f5f55a587f8900d ^ _DAT_1831bd418) + uVar4;
  _DAT_1831bd458 = _DAT_1831bd4a0 ^ _DAT_1831bd418;
  _DAT_1831bd3a8 = 0x30;
  uVar4 = (~_DAT_1831bd328 + 0x100) *
          ((_DAT_1831bd380 ^ 0x84222392) + (ulonglong)((uint)_DAT_1831bd380 & 0x84222392) * 2);
  uVar4 = (uVar4 | _DAT_1831bd420) + (uVar4 & _DAT_1831bd420);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lVar3 = func_0x000188277240((uVar4 | 0x8422236d) + (ulonglong)((uint)uVar4 & 0x8422236d));
  _DAT_1831bd368 = 0xacfacd21c0fef5a6;
  _DAT_1831bd428 = (_DAT_1831bd428 * 0x29a5bac89159b4a1 ^ 0xacfacd21c0fef5a6) + lVar3;
  _DAT_1831bd348 = _DAT_1831bd428 ^ 0xacfacd21c0fef5a6;
  _DAT_1831bd3f8 = 0x48;
  uVar4 = (_DAT_18072f100 ^ 0x48) + _DAT_1831bd318 + 0x84222392;
  uVar5 = (_DAT_1831bd318 ^ _UNK_18072f108) + 0x90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18072f100 ^ 0x48;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831bd318 ^ _UNK_18072f108;
  _DAT_1831bd468 =
       func_0x000188277240((uVar5 << 0x1d | uVar5 >> 0x23) - 0x90 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd318 + 0x84222392));
  uVar4 = (_DAT_1831bd468 ^ 0x3378) * 0x239d9482b2ba0d07;
  _DAT_1831bd3d8 = _DAT_1831bd3d8 ^ uVar4 ^ 0xc66f56966d5614f9;
  _DAT_1831bd3f0 = (_DAT_1831bd3f0 * 0xcdfaf74f297ec07 ^ _DAT_1831bd3d8) + uVar4;
  _DAT_1831bd318 = _DAT_1831bd3f0 ^ _DAT_1831bd3d8;
  _DAT_1831bd420 = 0;
  _DAT_1831bd4a8 = func_0x000188277240(_DAT_1831bd4f8 + 0xffdeff7bf4ffddff ^ 0xe5);
  uVar4 = _DAT_1831bd4a8 >> 1 | _DAT_1831bd4a8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_R12);
  uVar4 = (uVar4 & unaff_R14) + (uVar4 >> 2 & unaff_R14);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R15) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1831bd4a8;
  _DAT_1831bd418 = _DAT_1831bd300 ^ uVar4 ^ 0x30;
  _DAT_1831bd488 = (_DAT_1831bd488 ^ uVar4) + 0x30 ^ 0x8e4395c325d196ec;
  _DAT_1831bd350 = (_DAT_1831bd350 * 0x168ca5ced6674105 ^ _DAT_1831bd488) + uVar4;
  _DAT_1831bd468 = _DAT_1831bd350 ^ _DAT_1831bd488;
  _DAT_1831bd390 = 0x30;
  _DAT_1831bd350 = func_0x000188277240(_DAT_1831bd4b8 + 0xffe2ff7be2ffe1ff ^ 0xab);
  uVar4 = (_DAT_1831bd350 ^ 0xb6) << 0x33 | ((_DAT_1831bd350 ^ 0xb6) & 0x7fffffffffffff) >> 0xd;
  uVar5 = _DAT_1831bd368 ^ uVar4;
  _DAT_1831bd368 = uVar5 ^ 0xd21ab77c29842ad0;
  _DAT_1831bd4b0 = (_DAT_1831bd4b0 * -0x23f3aa88f77f0d2b ^ _DAT_1831bd368) + uVar4;
  _DAT_1831bd320 = _DAT_1831bd4b0 ^ _DAT_1831bd368;
  _DAT_1831bd460 = 0;
  uVar4 = ((uVar5 ^ 0xd21ab77cada609c5) + (ulonglong)((uint)_DAT_1831bd368 & 0x84222315) * 2) *
          -_DAT_1831bd308;
  uVar4 = (uVar4 | _DAT_1831bd3c0) + (uVar4 & _DAT_1831bd3c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1831bd308 = func_0x000188277240((uVar4 | 0x84222315) + (ulonglong)((uint)uVar4 & 0x84222315))
  ;
  uVar4 = (_DAT_1831bd308 ^ 0x30) * -0x5b658b88563f4ed3;
  _DAT_1831bd4c8 = _DAT_1831bd338 ^ uVar4 ^ 0x30;
  _DAT_1831bd360 = (_DAT_1831bd360 ^ uVar4) + 0x30 ^ 0xefe2c894738338e3;
  _DAT_1831bd330 = (_DAT_1831bd330 * 0x4df31af21a67b317 ^ _DAT_1831bd360) + uVar4;
  _DAT_1831bd378 = _DAT_1831bd330 ^ _DAT_1831bd360;
  _DAT_1831bd390 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x40);
  uVar4 = (ulonglong)bVar1 ^ 0x84222325;
  uVar5 = uVar4 ^ _DAT_1831bd480;
  lVar3 = uVar4 + _DAT_1831bd448;
  uVar4 = uVar5 + lVar3;
  uVar6 = (_DAT_1831bd448 ^ 0x30) + _DAT_1831bd480 + 0x30;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831bd448 ^ 0x30;
  _DAT_1831bd378 =
       func_0x000188277240((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd480 + 0x30) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar5 = (ulonglong)bVar1 | 0x30;
  _DAT_1831bd468 =
       (_DAT_1831bd468 ^ _DAT_1831bd378 & 0x7fffffffffffffff) + uVar5 ^ 0x7d04075db06ab9a6;
  _DAT_1831bd470 =
       (_DAT_1831bd470 * 0x2bb1c5341903b8cf ^ _DAT_1831bd468) +
       (_DAT_1831bd378 & 0x7fffffffffffffff);
  _DAT_1831bd418 = _DAT_1831bd470 ^ _DAT_1831bd468;
  uVar4 = in_RAX ^ 0x84222325 ^ _DAT_1831bd450;
  lVar3 = (in_RAX ^ 0x84222325) + _DAT_1831bd3c8;
  uVar6 = uVar4 + lVar3;
  uVar7 = ~_DAT_1831bd3c8 + (_DAT_1831bd450 - 1);
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ ~_DAT_1831bd3c8;
  _DAT_1831bd448 = uVar5;
  _DAT_1831bd4d8 =
       func_0x000188277240((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831bd450 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  auVar2._8_4_ = (int)in_RAX;
  auVar2._0_8_ = in_RAX;
  auVar2._12_4_ = (int)(in_RAX >> 0x20);
  uVar8 = SUB164(auVar2 ^ _DAT_18001a710,0);
  uVar6 = SUB168(auVar2 ^ _DAT_18001a710,0);
  uVar4 = _DAT_1831bd448 & 0xfffffffffffffff0;
  _DAT_1831bd3e0 =
       (ulonglong)uVar8 * (ulonglong)unaff_XMM9_Da +
       ((uVar6 >> 0x20) * (ulonglong)unaff_XMM9_Da + (ulonglong)uVar8 * (ulonglong)_DAT_180edc1c0 <<
       0x20) + (in_RAX & 0xffffffff) * (ulonglong)_DAT_180edc1d0 +
               ((in_RAX >> 0x20) * (ulonglong)_DAT_180edc1d0 +
                (in_RAX & 0xffffffff) * (ulonglong)_DAT_180edc1c0 << 0x20) +
       (-(((in_RAX & 0xffffffff) * (ulonglong)_DAT_180edc240 +
           (in_RAX >> 0x20) * (ulonglong)unaff_XMM14_Da << 0x20) +
          (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM14_Da +
         ((in_RAX & 0xffffffff) * (ulonglong)_DAT_180edc220 +
          (in_RAX >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
         (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM15_Da) -
       ((ulonglong)uVar8 * (ulonglong)unaff_XMM13_Da +
       ((ulonglong)uVar8 * (ulonglong)_DAT_180edc260 + (uVar6 >> 0x20) * (ulonglong)unaff_XMM13_Da
       << 0x20))) + 0x2565cf0b4b84f0d;
  _DAT_1831bd3a0 = _DAT_1831bd478 ^ uVar4 ^ _DAT_1831bd3e0;
  _DAT_1831bd3f8 = (_DAT_1831bd3f8 ^ uVar4) + _DAT_1831bd3e0 ^ 0xa472296a1fd8ebcb;
  _DAT_1831bd4f8 = (_DAT_1831bd4f8 * -0x779c1a9770ea1793 ^ _DAT_1831bd3f8) + uVar4;
  _DAT_1831bd350 = _DAT_1831bd4f8 ^ _DAT_1831bd3f8;
  *(char *)(unaff_RBP + -0x50 + _DAT_1831bd3e0) = (char)uVar5;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 824eba0 (image 18824eba0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18824eba0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  ulonglong unaff_R13;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  uint unaff_XMM7_Da;
  longlong lVar16;
  uint unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  
  uVar10 = (_DAT_1831bd3e0 ^ 0x8b43b458dea908d4) + _DAT_1831bd480 + 0x8b43b458dea908d4;
  uVar11 = (_DAT_1831bd480 ^ 0xa8d47066255175a8) + _DAT_1831bd3e0 + 0xa8d47066255175a8;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd3e0 ^ 0x8b43b458dea908d4;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd480 ^ 0xa8d47066255175a8;
  _DAT_1831bd330 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd3e0 + 0xa8d47066255175a8)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd480 + 0x8b43b458dea908d4));
  uVar10 = (_DAT_1831bd330 ^ 0x2625505408) & 0x1ffffffffff;
  _DAT_1831bd470 = (_DAT_1831bd470 ^ uVar10) + 0xabd7f47e7fdb7ff9 ^ 0x9a963fb2d3164285;
  _DAT_1831bd488 = (_DAT_1831bd488 * -0x356501507284fafb ^ _DAT_1831bd470) + uVar10;
  _DAT_1831bd3f0 = _DAT_1831bd488 ^ _DAT_1831bd470;
  _DAT_1831bd478 = 0xabd7f47e7fdb7ff9;
  uVar10 = (~_DAT_1831bd440 + 0x1ae17afcd8c2658f) *
           ((_DAT_1831bd3f8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831bd3f8 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1831bd3d8) + (uVar10 & _DAT_1831bd3d8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd420 =
       func_0x000188277240((uVar10 | 0x1ae17afc5ce046ab) + (uVar10 & 0x1ae17afc5ce046ab));
  _DAT_1831bd4c0 = _DAT_1831bd4e8 * 0x68fc46f60af03793;
  _DAT_1831bd490 = _DAT_1831bd490 + 0xe51e8503273d9a72 ^ 0x9ab612b94a2140a8;
  _DAT_1831bd4e8 = _DAT_1831bd4c0 ^ _DAT_1831bd490;
  _DAT_1831bd408 = 0xe51e8503273d9a72;
  _DAT_1831bd410 = func_0x000188277240(_DAT_1831bd3b8 ^ 0xfeb6f29eb57b0cb0);
  _DAT_1831bd448 = _DAT_1831bd4a8 ^ _DAT_1831bd410 ^ 0x1ae17afcd8c2658c;
  _DAT_1831bd4d8 = (_DAT_1831bd4d8 ^ _DAT_1831bd410) + 0x1ae17afcd8c2658c ^ 0xc6ec7cefb985cf90;
  _DAT_1831bd498 = (_DAT_1831bd498 * 0x73e0be1b5c2e17f1 ^ _DAT_1831bd4d8) + _DAT_1831bd410;
  _DAT_1831bd330 = _DAT_1831bd498 ^ _DAT_1831bd4d8;
  _DAT_1831bd460 = 0x1ae17afcd8c2658c;
  uVar10 = (_DAT_1831bd398 ^ _DAT_180edc270) + _DAT_1831bd418 + 0x1ae17afc5ce046a9;
  uVar11 = (_DAT_1831bd418 ^ _UNK_180edc278) + _DAT_1831bd398 + 0xe51e8503273d9a72;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd398 ^ _DAT_180edc270;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd418 ^ _UNK_180edc278;
  _DAT_1831bd370 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd398 + 0xe51e8503273d9a72)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd418 + 0x1ae17afc5ce046a9));
  uVar10 = (_DAT_1831bd370 & 0x7ffffffffff) << 2 | _DAT_1831bd370 >> 0x3e;
  _DAT_1831bd350 = _DAT_1831bd4d8 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1831bd318 = (_DAT_1831bd318 ^ uVar10) - 2 ^ 0x6557d83d86e8275;
  _DAT_1831bd3a8 = (_DAT_1831bd3a8 * 0x48a50d3d9f210fc7 ^ _DAT_1831bd318) + uVar10;
  _DAT_1831bd358 = _DAT_1831bd3a8 ^ _DAT_1831bd318;
  _DAT_1831bd300 = 0xfffffffffffffffe;
  uVar10 = (_DAT_1831bd340 ^ _DAT_180edc280) + _DAT_1831bd3f0 + unaff_RDI;
  uVar11 = (_DAT_1831bd3f0 ^ _UNK_180edc288) + _DAT_1831bd340 + 0xfec23ec146a92dd7;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd340 ^ _DAT_180edc280;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd3f0 ^ _UNK_180edc288;
  _DAT_1831bd390 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd340 + 0xfec23ec146a92dd7)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831bd3f0 + unaff_RDI));
  uVar10 = ((_DAT_1831bd390 ^ 0xfec23ec146a92dd7) & 0x3fffffffff) << 0x19 |
           (_DAT_1831bd390 ^ 0xfec23ec146a92dd7) >> 0x27;
  _DAT_1831bd408 = (_DAT_1831bd408 ^ uVar10) + 0x13dc13eb956d229 ^ 0xc6f5d3876949440c;
  _DAT_1831bd4c0 = (_DAT_1831bd4c0 * 0x519ee3aa94aa3495 ^ _DAT_1831bd408) + uVar10;
  _DAT_1831bd480 = _DAT_1831bd4c0 ^ _DAT_1831bd408;
  _DAT_1831bd310 = 0x13dc13eb956d229;
  _DAT_1831bd398 = func_0x000188277240(_DAT_1831bd398 + 0x3e50f32b0b414c00 ^ 0x17);
  uVar10 = _DAT_1831bd398 ^ 0xfec23ec146a92dd7;
  _DAT_1831bd4b8 = _DAT_1831bd4d8 ^ uVar10 ^ 0xfec23ec146a92dd5;
  _DAT_1831bd4f0 = (_DAT_1831bd4f0 ^ uVar10) + 0xfec23ec146a92dd5 ^ 0xc8e75df02c1bf8af;
  _DAT_1831bd360 = (_DAT_1831bd360 * 0x2d94e5c704609d97 ^ _DAT_1831bd4f0) + uVar10;
  _DAT_1831bd340 = _DAT_1831bd360 ^ _DAT_1831bd4f0;
  _DAT_1831bd408 = _DAT_1831bd418 ^ 0xfec23ec146a92dd5;
  _DAT_1831bd400 = 0xfec23ec146a92dd5;
  _DAT_1831bd318 = func_0x000188277240(_DAT_1831bd340 + 0x2853a4b83813bc20 ^ 9);
  _DAT_1831bd4b0 = _DAT_1831bd478 ^ _DAT_1831bd350 ^ 0xfffffffffffffffe;
  _DAT_1831bd430 = (_DAT_1831bd430 ^ _DAT_1831bd350) - 2 ^ 0x100e43ec231a2de0;
  _DAT_1831bd498 = (_DAT_1831bd498 * 0x463094cd6800af7 ^ _DAT_1831bd430) + _DAT_1831bd350;
  _DAT_1831bd428 = _DAT_1831bd498 ^ _DAT_1831bd430;
  _DAT_1831bd4d0 = 0xfffffffffffffffe;
  uVar10 = (~_DAT_1831bd338 + 0x5ef1fecda5b846ac) *
           ((_DAT_1831bd338 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1831bd338 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1831bd448) + (uVar10 & _DAT_1831bd448);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd4a0 =
       func_0x000188277240((uVar10 | 0x5ef1fecd219a658e) + (uVar10 & 0x5ef1fecd219a658e));
  uVar10 = _DAT_1831bd4a0 >> 1 | _DAT_1831bd4a0;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = 0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_1831bd4a0;
  _DAT_1831bd438 = (_DAT_1831bd438 ^ uVar10) + 0xa10e01325a47b955 ^ 0xed0e28d1a9cca1a3;
  _DAT_1831bd488 = (_DAT_1831bd488 * 0x58efb47a74c1ff41 ^ _DAT_1831bd438) + uVar10;
  _DAT_1831bd328 = _DAT_1831bd488 ^ _DAT_1831bd438;
  _DAT_1831bd378 = 0xa10e01325a47b955;
  _DAT_1831bd470 = func_0x000188277240(_DAT_1831bd388 ^ 0xd76024e0fff2390);
  uVar11 = ~_DAT_1831bd470 << 0x3c | ~_DAT_1831bd470 >> 4;
  uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar11 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar11;
  _DAT_1831bd3a8 = _DAT_1831bd3d0 ^ uVar11 ^ 0x5ef1fecda5b846a9;
  _DAT_1831bd3d8 = (_DAT_1831bd3d8 ^ uVar11) + 0x5ef1fecda5b846a9 ^ 0x5760aad7378b3285;
  _DAT_1831bd4a8 = (_DAT_1831bd4a8 * -0x66d1d5686393d2ff ^ _DAT_1831bd3d8) + uVar11;
  _DAT_1831bd3e0 = _DAT_1831bd4a8 ^ _DAT_1831bd3d8;
  _DAT_1831bd410 = 0x5ef1fecda5b846a9;
  uVar10 = (~_DAT_1831bd478 + 0xa10e01325a47b956) *
           ((_DAT_1831bd460 ^ 0x5ef1fecd219a658c) + (_DAT_1831bd460 & 0x5ef1fecd219a658c) * 2);
  uVar10 = (uVar10 | 0x5ef1fecda5b846a9) + (uVar10 & 0x5ef1fecda5b846a9);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd3b0 =
       func_0x000188277240((uVar10 | 0xffffffff7bdddcd9) + (uVar10 & 0xffffffff7bdddcd9));
  uVar10 = _DAT_1831bd3b0 * 0xf5df686024e9b6d;
  _DAT_1831bd480 = _DAT_1831bd408 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1831bd3a8 = (_DAT_1831bd3a8 ^ uVar10) - 2 ^ 0x5b08fdfe8063f8dc;
  _DAT_1831bd328 = (_DAT_1831bd328 * 0x1ae9f59e42ca96e7 ^ _DAT_1831bd3a8) + uVar10;
  _DAT_1831bd380 = _DAT_1831bd328 ^ _DAT_1831bd3a8;
  _DAT_1831bd408 = 0xfffffffffffffffe;
  _DAT_1831bd3e0 = func_0x000188277240(_DAT_1831bd3d8 ^ 0x6ca087384e76f0b8);
  _DAT_1831bd3a0 = (_DAT_1831bd3a0 ^ _DAT_1831bd3e0) + 0x2850746a20c97c10 ^ 0x5ba0d28156300f7f;
  _DAT_1831bd3d0 = (_DAT_1831bd3d0 * 0x4ee27b5c644fdf97 ^ _DAT_1831bd3a0) + _DAT_1831bd3e0;
  _DAT_1831bd328 = _DAT_1831bd3d0 ^ _DAT_1831bd3a0;
  _DAT_1831bd478 = 0x2850746a20c97c10;
  uVar10 = (~_DAT_1831bd318 + 0x50a0e8d44192f821) *
           ((_DAT_1831bd428 ^ 0x838789945b10a0ce) + (_DAT_1831bd428 & 0x38789945b10a0ce) * 2);
  uVar10 = (uVar10 | _DAT_1831bd358) + (uVar10 & _DAT_1831bd358);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd408 =
       func_0x000188277240((uVar10 | 0xd32761401a8258ee) + (uVar10 & 0xd32761401a8258ee));
  uVar10 = _DAT_1831bd408 & 0xffffffffffffffe0;
  uVar11 = uVar10 >> 1 | uVar10;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = ((0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
            0x20 ^ uVar10) * 0x621e2b8492621305;
  _DAT_1831bd328 = _DAT_1831bd468 ^ uVar10 ^ 0xd428726920c57c0b;
  _DAT_1831bd4d0 = (_DAT_1831bd4d0 ^ uVar10) + 0xd428726920c57c0b ^ 0x1f7120413104fced;
  _DAT_1831bd3a0 = (_DAT_1831bd3a0 * 0x65c79beeab56e02b ^ _DAT_1831bd4d0) + uVar10;
  _DAT_1831bd308 = _DAT_1831bd3a0 ^ _DAT_1831bd4d0;
  _DAT_1831bd300 = -0x2bd78d96df3a83f5;
  _DAT_1831bd490 = func_0x000188277240(_DAT_1831bd3d0 ^ 0x1d007be4ffddd7);
  _DAT_1831bd478 = (_DAT_1831bd490 ^ 0xd428726920c00000) & 0xffffffffffe00000;
  _DAT_1831bd460 = _DAT_1831bd460 ^ _DAT_1831bd478 ^ 0x5607caf5e622e59b;
  _DAT_1831bd4b8 = (_DAT_1831bd4b8 * 0x1b0be9cce0422937 ^ _DAT_1831bd460) + _DAT_1831bd478;
  _DAT_1831bd408 = _DAT_1831bd4b8 ^ _DAT_1831bd460;
  _DAT_1831bd470 = 0;
  uVar10 = (_DAT_1831bd408 ^ 0xffffffff7bdddcdb) + (_DAT_1831bd350 - 0x84222325);
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd408 ^ 0xffffffff7bdddcdb;
  uVar11 = ((_DAT_1831bd350 + _DAT_1831bd408) * 0x2000 | _DAT_1831bd350 + _DAT_1831bd408 >> 0x33) ^
           _DAT_1831bd350;
  _DAT_1831bd4c8 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_1831bd408 ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831bd350 - 0x84222325));
  uVar10 = ~_DAT_1831bd4c8 & 0xfffffffffffffffe;
  _DAT_1831bd370 = _DAT_1831bd4c0 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1831bd338 = (_DAT_1831bd338 ^ uVar10) - 2 ^ 0x6aceb1415481d9d6;
  _DAT_1831bd358 = (_DAT_1831bd358 * 0xee6d8a51629e3f1 ^ _DAT_1831bd338) + uVar10;
  _DAT_1831bd488 = _DAT_1831bd358 ^ _DAT_1831bd338;
  _DAT_1831bd498 = 0xfffffffffffffffe;
  uVar10 = (_DAT_1831bd4f8 ^ _DAT_180edc290) + _DAT_1831bd4a8 + 0xabd7f47efbf95cdc;
  uVar11 = (_DAT_1831bd4a8 ^ _UNK_180edc298) + _DAT_1831bd4f8 + 0x54280b8180248006;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd4f8 ^ _DAT_180edc290;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd4a8 ^ _UNK_180edc298;
  _DAT_1831bd348 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd4f8 + 0x54280b8180248006)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd4a8 + 0xabd7f47efbf95cdc));
  _DAT_1831bd388 = _DAT_1831bd388 ^ _DAT_1831bd348 ^ 0x107bf7d806753369;
  _DAT_1831bd300 = (_DAT_1831bd300 * 0x5c0e785fb9e4f5db ^ _DAT_1831bd388) + _DAT_1831bd348;
  _DAT_1831bd380 = _DAT_1831bd300 ^ _DAT_1831bd388;
  _DAT_1831bd3f0 = 0;
  _DAT_1831bd360 = func_0x000188277240(_DAT_1831bd460 + 0x3d34114aac9d518 ^ 100);
  uVar10 = _DAT_1831bd360 - (_DAT_1831bd360 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1831bd360
           ^ 0xfffffffffffffffe;
  _DAT_1831bd388 = _DAT_1831bd3f0 ^ uVar10 ^ 0xfffffffffffffffe;
  _DAT_1831bd460 = (_DAT_1831bd460 ^ uVar10) - 2 ^ 0xbec8b45991344836;
  _DAT_1831bd310 = (_DAT_1831bd310 * -0x5d198da4410c11ad ^ _DAT_1831bd460) + uVar10;
  _DAT_1831bd448 = _DAT_1831bd310 ^ _DAT_1831bd460;
  _DAT_1831bd4e8 = -2;
  _DAT_1831bd3f8 = func_0x000188277240(_DAT_1831bd340 + 0x1f00841b001dff ^ 0x42);
  uVar11 = _DAT_1831bd3f8 ^ 0xcba5443e3340d8e1;
  uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar11 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar11;
  uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar11) &
           0x1fffffffffffffff;
  _DAT_1831bd4b0 = _DAT_1831bd4b0 ^ uVar10 ^ 0x8140de3e0473810d;
  _DAT_1831bd440 = (_DAT_1831bd440 * 0x6d96f0cb7fc5faad ^ _DAT_1831bd4b0) + uVar10;
  _DAT_1831bd3b0 = _DAT_1831bd440 ^ _DAT_1831bd4b0;
  _DAT_1831bd378 = 0;
  uVar10 = ((_DAT_1831bd458 ^ 0xffffffff7bdddcdb) + (_DAT_1831bd458 & 0x7fffffff7bdddcdb) * 2) *
           -_DAT_1831bd4c8;
  uVar10 = (uVar10 | _DAT_1831bd4e0) + (uVar10 & _DAT_1831bd4e0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd430 =
       func_0x000188277240((uVar10 | 0xffffffff7bdddcdb) + (uVar10 & 0xffffffff7bdddcdb));
  uVar10 = _DAT_1831bd430 ^ 0xfffffffffffffffe;
  _DAT_1831bd4b8 = _DAT_1831bd468 ^ uVar10;
  _DAT_1831bd428 = _DAT_1831bd4b8 ^ 0xfffffffffffffffe;
  _DAT_1831bd338 = (_DAT_1831bd338 ^ uVar10) - 2 ^ 0xcf9c05d96fa33fcd;
  _DAT_1831bd360 = (_DAT_1831bd360 * 0x8bf25c5aaa8a4df ^ _DAT_1831bd338) + uVar10;
  _DAT_1831bd490 = _DAT_1831bd360 ^ _DAT_1831bd338;
  auVar7._8_8_ = _UNK_1801ec418;
  auVar7._0_8_ = unaff_R13 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_180edc2a0,_DAT_1800170c0);
  _DAT_1831bd380 = 0xfffffffffffffffe;
  uVar11 = auVar8._8_8_ + auVar8._0_8_;
  uVar10 = uVar11 + _DAT_1831bd470;
  if (auVar8._4_4_ < 0) {
    uVar10 = _DAT_1831bd348 ^ uVar11;
  }
  _DAT_1831bd4d8 = func_0x000188277240(SUB161(auVar7 ^ _DAT_180edc2a0,5) ^ uVar10);
  auVar8._4_4_ = unaff_XMM12_Db;
  auVar8._0_4_ = unaff_XMM12_Da;
  auVar8._8_4_ = unaff_XMM12_Dc;
  auVar8._12_4_ = unaff_XMM12_Dd;
  uVar6 = unaff_XMM12_Da | (uint)DAT_1800b8c60;
  auVar14._8_4_ = 0xffffffff;
  auVar14._0_8_ = 0xffffffffffffffff;
  auVar14._12_4_ = 0xffffffff;
  auVar1._4_4_ = unaff_XMM12_Db;
  auVar1._0_4_ = unaff_XMM12_Da;
  auVar1._8_4_ = unaff_XMM12_Dc;
  auVar1._12_4_ = unaff_XMM12_Dd;
  uVar15 = SUB164(auVar8 & _DAT_1800b8c60,0);
  uVar11 = SUB168(auVar8 & _DAT_1800b8c60,0);
  uVar13 = SUB164(auVar14 ^ auVar1,0);
  uVar4 = SUB168(auVar14 ^ auVar1,0);
  lVar16 = ((ulonglong)_DAT_180edc330 * (ulonglong)unaff_XMM12_Da +
            (ulonglong)_DAT_180edc320 * (ulonglong)unaff_XMM7_Da << 0x20) +
           (ulonglong)unaff_XMM12_Da * (ulonglong)_DAT_180edc320;
  uVar10 = _DAT_1831bd4d8 - (_DAT_1831bd4d8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1831bd4d8
  ;
  auVar2._4_4_ = unaff_XMM12_Db;
  auVar2._0_4_ = unaff_XMM12_Da;
  auVar2._8_4_ = unaff_XMM12_Dc;
  auVar2._12_4_ = unaff_XMM12_Dd;
  uVar9 = SUB164(_DAT_1800b8c60 ^ auVar2,0);
  uVar5 = (((ulonglong)_DAT_180edc300 * (ulonglong)uVar13 +
            ((ulonglong)_DAT_180edc310 * (ulonglong)uVar13 +
             (uVar4 >> 0x20) * (ulonglong)_DAT_180edc300 << 0x20) +
            ((ulonglong)_DAT_180edc2d0 * (ulonglong)uVar6 + _DAT_180edc2f0 << 0x20) +
            (ulonglong)_DAT_180edc2e0 * (ulonglong)uVar6 +
            (ulonglong)uVar15 * (ulonglong)_DAT_180edc2e0 +
            ((uVar11 >> 0x20) * (ulonglong)_DAT_180edc2e0 +
             (ulonglong)uVar15 * (ulonglong)_DAT_180edc2d0 << 0x20) +
            ((ulonglong)_DAT_180edc2c0 * (ulonglong)unaff_XMM12_Da +
             (ulonglong)_DAT_180edc2b0 * (ulonglong)unaff_XMM7_Da << 0x20) +
            (ulonglong)unaff_XMM12_Da * (ulonglong)_DAT_180edc2b0 + lVar16) -
          ((ulonglong)uVar13 * (ulonglong)_DAT_180edc380 +
           ((ulonglong)_DAT_180edc3e0 * (ulonglong)uVar13 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_180edc380 << 0x20) + lVar16 +
          (ulonglong)uVar9 * (ulonglong)_DAT_180edc3c0 +
          ((ulonglong)_DAT_180edc3d0 * (ulonglong)uVar9 +
           (SUB168(_DAT_1800b8c60 ^ auVar2,0) >> 0x20) * (ulonglong)_DAT_180edc3c0 << 0x20) +
          ((ulonglong)uVar6 * (ulonglong)_DAT_180edc3a0 + _DAT_180edc3b0 << 0x20) +
          (ulonglong)_DAT_180edc390 * (ulonglong)uVar6 +
          (ulonglong)uVar15 * (ulonglong)_DAT_180edc360 +
          ((ulonglong)_DAT_180edc370 * (ulonglong)uVar15 +
           (uVar11 >> 0x20) * (ulonglong)_DAT_180edc360 << 0x20) +
          ((ulonglong)(unaff_XMM12_Da * _DAT_180edc350 + unaff_XMM7_Da * _DAT_180edc340) << 0x20) +
          (ulonglong)unaff_XMM12_Da * (ulonglong)_DAT_180edc340)) + 0xc36cd016d96d160e;
  _DAT_1831bd328 = _DAT_1831bd4c8 ^ uVar10 ^ uVar5;
  _DAT_1831bd418 = (_DAT_1831bd418 ^ uVar10) + uVar5 ^ 0x2ce1dea3e15c525e;
  _DAT_1831bd4e8 = (_DAT_1831bd4e8 * 0x16c97a4ebffc27a1 ^ _DAT_1831bd418) + uVar10;
  _DAT_1831bd318 = _DAT_1831bd4e8 ^ _DAT_1831bd418;
  _DAT_1831bd4c0 = uVar5;
  *(ulonglong *)(unaff_RBP + 0x60) = uVar5 + unaff_RBP + -0x50;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar5) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  uVar10 = (~_DAT_1831bd3c0 + 0x82a2619298db846c) *
           ((_DAT_1831bd360 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831bd360 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1831bd478) + (uVar10 & _DAT_1831bd478);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar10 = func_0x000188277240((uVar10 | 0x82a261921cf9a74e) + (uVar10 & 0x82a261921cf9a74e));
  _DAT_1831bd300 =
       (_DAT_1831bd300 ^ uVar10 & 0xfffffffffffffff) + 0x7d5d9e6d67247b95 ^ 0x96e75c03c4cd223e;
  _DAT_1831bd490 =
       (_DAT_1831bd490 * 0x54855694decde21 ^ _DAT_1831bd300) + (uVar10 & 0xfffffffffffffff);
  _DAT_1831bd450 = _DAT_1831bd490 ^ _DAT_1831bd300;
  _DAT_1831bd430 = 0x7d5d9e6d67247b95;
  uVar10 = (_DAT_1831bd4e8 ^ _DAT_180edc3f0) + _DAT_1831bd3f0 + 0x84222330;
  uVar11 = (_DAT_1831bd3f0 ^ _UNK_180edc3f8) + _DAT_1831bd4e8 + 0x82a2619298db846b;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd4e8 ^ _DAT_180edc3f0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd3f0 ^ _UNK_180edc3f8;
  _DAT_1831bd378 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd4e8 + 0x82a2619298db846b)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831bd3f0 + 0x84222330));
  uVar10 = _DAT_1831bd378 * -0xf42f377c6583069;
  _DAT_1831bd488 = _DAT_1831bd428 ^ uVar10 ^ 0x82a2619298db8480;
  _DAT_1831bd490 = (_DAT_1831bd490 ^ uVar10) + 0x82a2619298db8480 ^ 0xf41ee9cc8da5fb93;
  _DAT_1831bd3c0 = (_DAT_1831bd3c0 * 0x1ad42963152a0285 ^ _DAT_1831bd490) + uVar10;
  _DAT_1831bd498 = _DAT_1831bd3c0 ^ _DAT_1831bd490;
  _DAT_1831bd4d0 = 0x82a2619298db8480;
  uVar10 = (_DAT_1831bd330 ^ _DAT_180edc400) + _DAT_1831bd330 + 0x82a261921cf9a7a5;
  uVar11 = (_DAT_1831bd330 ^ _UNK_180edc408) + _DAT_1831bd330 + 0x7d5d9e6d67247b95;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd330 ^ _DAT_180edc400;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd330 ^ _UNK_180edc408;
  uVar10 = func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) -
                               (_DAT_1831bd330 + 0x7d5d9e6d67247b95) ^
                               (uVar10 << 0x1d | uVar10 >> 0x23) -
                               (_DAT_1831bd330 + 0x82a261921cf9a7a5));
  uVar10 = uVar10 ^ 0xf5407572926d9e80;
  uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar10;
  _DAT_1831bd458 = _DAT_1831bd3d8 ^ uVar10 ^ 0x15;
  _DAT_1831bd4e0 = (_DAT_1831bd4e0 ^ uVar10) + 0x15 ^ 0x565a439baf41d33a;
  _DAT_1831bd388 = (_DAT_1831bd388 * 0x8711b23e19e8769 ^ _DAT_1831bd4e0) + uVar10;
  _DAT_1831bd430 = _DAT_1831bd388 ^ _DAT_1831bd4e0;
  _DAT_1831bd4f0 = 0x15;
  uVar10 = (~_DAT_1831bd308 + 0xe25c60be2ccf7f81) *
           ((_DAT_1831bd3d8 ^ uVar10 ^ 0x84222330) +
           (ulonglong)((uint)_DAT_1831bd458 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1831bd3d8) + (uVar10 & _DAT_1831bd3d8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd308 =
       func_0x000188277240((uVar10 | 0xe25c60bea8ed5ca5) + (uVar10 & 0xe25c60bea8ed5ca5));
  _DAT_1831bd3d8 = _DAT_1831bd3d8 + 0x1da39f41d3308080 ^ 0x73c230e6800e2621;
  _DAT_1831bd4e8 = _DAT_1831bd420 * 0x39e9b44d77da1719;
  _DAT_1831bd420 = _DAT_1831bd4e8 ^ _DAT_1831bd3d8;
  _DAT_1831bd4c8 = 0x1da39f41d3308080;
  uVar10 = (~_DAT_1831bd418 + 0xe25c60be2ccf7f81) *
           ((_DAT_1831bd4e8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831bd4e8 & 0x84222330) * 2);
  uVar10 = (uVar10 | _DAT_1831bd430) + (uVar10 & _DAT_1831bd430);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd488 =
       func_0x000188277240((uVar10 | 0xe25c60bea8ed5cb0) + (uVar10 & 0xe25c60bea8ed5cb0));
  uVar10 = _DAT_1831bd488 - (_DAT_1831bd488 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
           _DAT_1831bd488;
  _DAT_1831bd3a8 = _DAT_1831bd428 ^ uVar10 ^ 0xe25c60be2ccf7f95;
  _DAT_1831bd420 = (_DAT_1831bd420 ^ uVar10) + 0xe25c60be2ccf7f95 ^ 0xc2fc3c3d7550c7a2;
  _DAT_1831bd430 = (_DAT_1831bd430 * -0x71b434b6e2ad42f9 ^ _DAT_1831bd420) + uVar10;
  _DAT_1831bd418 = _DAT_1831bd430 ^ _DAT_1831bd420;
  _DAT_1831bd498 = _DAT_1831bd3f8 ^ 0xe25c60be2ccf7f95;
  _DAT_1831bd3d8 = 0xe25c60be2ccf7f95;
  uVar10 = (_DAT_1831bd458 ^ _DAT_180edc410) + _DAT_1831bd388 + 0xe25c60bea8ed5cb0;
  uVar11 = (_DAT_1831bd388 ^ _UNK_180edc418) + _DAT_1831bd458 + 0x1da39f41d3308080;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd458 ^ _DAT_180edc410;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd388 ^ _UNK_180edc418;
  _DAT_1831bd468 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd458 + 0x1da39f41d3308080)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd388 + 0xe25c60bea8ed5cb0));
  uVar10 = (_DAT_1831bd468 ^ 0x123314aca00) & 0x3ffffffffff;
  _DAT_1831bd408 = _DAT_1831bd478 ^ uVar10 ^ 0x15;
  _DAT_1831bd3c8 = (_DAT_1831bd3c8 ^ uVar10) + 0x15 ^ 0xc26a98e1eb7bf8a4;
  _DAT_1831bd430 = (_DAT_1831bd430 * 0x5de39734aad5ee6d ^ _DAT_1831bd3c8) + uVar10;
  _DAT_1831bd428 = _DAT_1831bd430 ^ _DAT_1831bd3c8;
  _DAT_1831bd310 = 0x15;
  _DAT_1831bd4c8 = func_0x000188277240(_DAT_1831bd360 + 0x177856e6d974cc66 ^ 0xdb);
  _DAT_1831bd390 =
       (_DAT_1831bd390 ^ _DAT_1831bd4c8 ^ 0xe9a9bc3863f6bb0c) + 0x165643c79c0944f4 ^
       0x622c6de476554db6;
  _DAT_1831bd360 =
       (_DAT_1831bd360 * 0x5e41d29415759a71 ^ _DAT_1831bd390) +
       (_DAT_1831bd4c8 ^ 0xe9a9bc3863f6bb0c);
  _DAT_1831bd410 = _DAT_1831bd360 ^ _DAT_1831bd390;
  _DAT_1831bd420 = 0x165643c79c0944f4;
  _DAT_1831bd4a0 = func_0x000188277240(_DAT_1831bd478 ^ 0x27775726d4b4d493);
  uVar10 = _DAT_1831bd4a0 & 0x7fffffffffffe000;
  _DAT_1831bd4e0 = _DAT_1831bd380 ^ uVar10 ^ 0xe9a9bc3863f6bb21;
  _DAT_1831bd370 = (_DAT_1831bd370 ^ uVar10) + 0xe9a9bc3863f6bb21 ^ 0xfdd986557ca45bed;
  _DAT_1831bd310 = (_DAT_1831bd310 * -0x383ce274c36c47f7 ^ _DAT_1831bd370) + uVar10;
  _DAT_1831bd488 = _DAT_1831bd310 ^ _DAT_1831bd370;
  _DAT_1831bd3a0 = 0xe9a9bc3863f6bb21;
  uVar10 = (~_DAT_1831bd4c8 + 0x165643c79c0944f5) *
           ((_DAT_1831bd3b8 ^ 0xe9a9bc38e7d49804) + (_DAT_1831bd3b8 & 0x69a9bc38e7d49804) * 2);
  uVar10 = (uVar10 | _DAT_1831bd390) + (uVar10 & _DAT_1831bd390);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd420 =
       func_0x000188277240((uVar10 | 0xffffffff7bdddcf0) + (uVar10 & 0xffffffff7bdddcf0));
  uVar11 = _UNK_180edc428;
  uVar10 = _DAT_180edc420;
  uVar4 = _DAT_1831bd420 >> 1 | _DAT_1831bd420;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1831bd420) * 0x318868e529f82ba9;
  _DAT_1831bd3f8 = _DAT_1831bd408 ^ uVar4 ^ 0x15;
  _DAT_1831bd368 = (_DAT_1831bd368 ^ uVar4) + 0x15 ^ 0x9fc3f81a4c664efa;
  _DAT_1831bd4a0 = (_DAT_1831bd4a0 * -0x417ef121ba62f3dd ^ _DAT_1831bd368) + uVar4;
  _DAT_1831bd368 = _DAT_1831bd4a0 ^ _DAT_1831bd368;
  _DAT_1831bd3e0 = 0x15;
  uVar4 = (_DAT_1831bd4d8 ^ _DAT_180edc420) + _DAT_1831bd4d0 + 0xf6dfb0fe75fd7cd2;
  uVar12 = (_DAT_1831bd4d0 ^ _UNK_180edc428) + _DAT_1831bd4d8 + 0xa943f0e8f6fe18a2;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd4d8 ^ _DAT_180edc420;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831bd4d0 ^ _UNK_180edc428;
  _DAT_1831bd418 =
       func_0x000188277240((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1831bd4d8 + 0xa943f0e8f6fe18a2)
                           ^ (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831bd4d0 + 0xf6dfb0fe75fd7cd2)
                          );
  uVar4 = _DAT_1831bd418 & 0x3ffffffffffff;
  _DAT_1831bd460 = _DAT_1831bd3b8 ^ uVar4 ^ 0xa023a1e7e8dd7899;
  _DAT_1831bd428 = (_DAT_1831bd428 ^ uVar4) + 0xa023a1e7e8dd7899 ^ 0x90541001357dd607;
  _DAT_1831bd4b8 = (_DAT_1831bd4b8 * -0x71cc93d6d8dfd08d ^ _DAT_1831bd428) + uVar4;
  _DAT_1831bd400 = _DAT_1831bd4b8 ^ _DAT_1831bd428;
  _DAT_1831bd310 = -0x5fdc5e1817228767;
  _DAT_1831bd3e8 = func_0x000188277240(_DAT_1831bd430 + 0xe649c7d303ffca2 ^ 0x46);
  _DAT_1831bd378 =
       (_DAT_1831bd378 ^ _DAT_1831bd3e8 ^ 0xffdff0fef7ff5ff7) + 0x5f9c401607214755 ^
       0x4f326246e2742ad3;
  _DAT_1831bd420 =
       (_DAT_1831bd420 * -0x3748ef6c2c3d78fb ^ _DAT_1831bd378) +
       (_DAT_1831bd3e8 ^ 0xffdff0fef7ff5ff7);
  _DAT_1831bd388 = _DAT_1831bd420 ^ _DAT_1831bd378;
  _DAT_1831bd370 = 0x5f9c401607214755;
  uVar4 = (_DAT_1831bd348 ^ uVar10) + _DAT_1831bd448 + 0xf6dfb0fe75fd7cd2;
  uVar12 = (_DAT_1831bd448 ^ uVar11) + _DAT_1831bd348 + 0xa943f0e8f6fe18a2;
  uVar10 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831bd348 ^ uVar10;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1831bd448 ^ uVar11;
  _DAT_1831bd4d0 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd348 + 0xa943f0e8f6fe18a2)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd448 + 0xf6dfb0fe75fd7cd2));
  _DAT_1831bd450 =
       (_DAT_1831bd450 ^ _DAT_1831bd4d0 & 0xffffffffe0000000) + 0xa043b0e8f0de18a2 ^
       0xf8a34ee044e78cab;
  _DAT_1831bd4f0 =
       (_DAT_1831bd4f0 * 0x7db2af0d3bbebc95 ^ _DAT_1831bd450) +
       (_DAT_1831bd4d0 & 0xffffffffe0000000);
  _DAT_1831bd4b8 = _DAT_1831bd4f0 ^ _DAT_1831bd450;
  _DAT_1831bd468 = _DAT_1831bd408 ^ 0xa043b0e8f0de18a2;
  _DAT_1831bd4c8 = 0xa043b0e8f0de18a2;
  uVar10 = (_DAT_1831bd448 ^ _DAT_180edc430) + _DAT_1831bd368 + 0x5f9c401683036470;
  uVar11 = (_DAT_1831bd368 ^ _UNK_180edc438) + _DAT_1831bd448 + 0x408761d1e1bc3144;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd448 ^ _DAT_180edc430;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd368 ^ _UNK_180edc438;
  _DAT_1831bd448 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd448 + 0x408761d1e1bc3144)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1831bd368 + 0x5f9c401683036470));
  uVar10 = ~_DAT_1831bd448 & 0x5f9c401607214755 ^ 0x408761d1e1bc3144;
  _DAT_1831bd490 = _DAT_1831bd378 ^ uVar10 ^ 0xa023a1e7e8dd7899;
  _DAT_1831bd440 = (_DAT_1831bd440 ^ uVar10) + 0xa023a1e7e8dd7899 ^ 0xb8aafff5a2b302e4;
  _DAT_1831bd310 = (_DAT_1831bd310 * 0x63bdf24443bae651 ^ _DAT_1831bd440) + uVar10;
  _DAT_1831bd3f0 = _DAT_1831bd310 ^ _DAT_1831bd440;
  _DAT_1831bd460 = 0xa023a1e7e8dd7899;
  uVar10 = ((_DAT_1831bd340 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831bd340 & 0x84222330) * 2) *
           -_DAT_1831bd3b0;
  uVar10 = (uVar10 | _DAT_1831bd3e0) + (uVar10 & _DAT_1831bd3e0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd3a0 =
       func_0x000188277240((uVar10 | 0x84222330) + (ulonglong)((uint)uVar10 & 0x84222330));
  uVar10 = _DAT_1831bd3a0 - (_DAT_1831bd3a0 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
           _DAT_1831bd3a0;
  _DAT_1831bd450 = _DAT_1831bd378 ^ uVar10 ^ 0x15;
  _DAT_1831bd3d0 = (_DAT_1831bd3d0 ^ uVar10) + 0x15 ^ 0xa54c24382ed1b896;
  _DAT_1831bd410 = (_DAT_1831bd410 * 0x580db5c332cc37fb ^ _DAT_1831bd3d0) + uVar10;
  _DAT_1831bd478 = _DAT_1831bd410 ^ _DAT_1831bd3d0;
  _DAT_1831bd4e0 = _DAT_1831bd428 ^ 0x15;
  _DAT_1831bd378 = 0x15;
  uVar10 = (_DAT_1831bd428 ^ _DAT_180edc440) + _DAT_1831bd320 + 0xf6dfb0fe75fd7cd2;
  uVar11 = (_DAT_1831bd320 ^ _UNK_180edc448) + (_DAT_1831bd428 - 1);
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1831bd428 ^ _DAT_180edc440;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1831bd320 ^ _UNK_180edc448;
  _DAT_1831bd308 =
       func_0x000188277240((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831bd428 - 1) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1831bd320 + 0xf6dfb0fe75fd7cd2)
                          );
  _DAT_1831bd490 = (_DAT_1831bd490 ^ _DAT_1831bd4f0) + 0x9204f010e20a008 ^ 0xef4624128e35fd41;
  _DAT_1831bd4a0 = (_DAT_1831bd4a0 * -0x79d21d589d10df29 ^ _DAT_1831bd490) + _DAT_1831bd4f0;
  _DAT_1831bd4e8 = _DAT_1831bd4a0 ^ _DAT_1831bd490;
  _DAT_1831bd3d0 = 0x9204f010e20a008;
  _DAT_1831bd4d0 = func_0x000188277240(_DAT_1831bd490 + 0xa0242167aad643ea ^ 0xeb);
  _DAT_1831bd490 = _DAT_1831bd490 ^ _DAT_1831bd4d0 ^ 0x342fd155a61a97f;
  _DAT_1831bd4b8 = (_DAT_1831bd4b8 * -0x458b8be09d48c0a3 ^ _DAT_1831bd490) + _DAT_1831bd4d0;
  _DAT_1831bd418 = _DAT_1831bd4b8 ^ _DAT_1831bd490;
  _DAT_1831bd320 = 0;
  uVar10 = ((_DAT_1831bd3d8 ^ 0x84222330) + (ulonglong)((uint)_DAT_1831bd3d8 & 0x84222330) * 2) *
           -_DAT_1831bd478;
  uVar10 = (uVar10 | _DAT_1831bd460) + (uVar10 & _DAT_1831bd460);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1831bd3e8 =
       func_0x000188277240((uVar10 | 0x84222330) + (ulonglong)((uint)uVar10 & 0x84222330));
  uVar10 = _DAT_1831bd3e8 & 0xfffffffffffffff;
  _DAT_1831bd330 = _DAT_1831bd358 ^ uVar10 ^ 0x15;
  _DAT_1831bd4e0 = (_DAT_1831bd4e0 ^ uVar10) + 0x15 ^ 0xf949418a08260643;
  _DAT_1831bd418 = (_DAT_1831bd418 * -0x3955a82737a2d7e1 ^ _DAT_1831bd4e0) + uVar10;
  _DAT_1831bd480 = _DAT_1831bd418 ^ _DAT_1831bd4e0;
  _DAT_1831bd460 = 0x15;
  _DAT_1831bd4c8 = func_0x000188277240(_DAT_1831bd3f8 ^ 0x20ff842300218d);
  uVar10 = _DAT_1831bd4c8 - (_DAT_1831bd4c8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar3 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar10 = (uint)bVar3 + (uint)bVar3 ^ _DAT_1831bd4c8;
  _DAT_1831bd3f8 = _DAT_1831bd3f8 ^ uVar10 ^ 0x68b234c9e52a7c30;
  _DAT_1831bd4b0 = (_DAT_1831bd4b0 * 0x2cae0a6550ff20f3 ^ _DAT_1831bd3f8) + uVar10;
  _DAT_1831bd4e0 = _DAT_1831bd4b0 ^ _DAT_1831bd3f8;
  _DAT_1831bd310 = 0;
  switch(uVar5 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8279607 (image 188279607) =====

void FUN_188279607(void)

{
  return;
}



// ===== continuation @ rva 827945e (image 18827945e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827945e(void)

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



// ===== continuation @ rva 82794a3 (image 1882794a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882794a3(void)

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



// ===== continuation @ rva 827cc1b (image 18827cc1b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827cc1b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
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



// ===== continuation @ rva 827cbcd (image 18827cbcd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827cbcd(void)

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



// ===== continuation @ rva 827b7f6 (image 18827b7f6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188279a97(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
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



// ===== continuation @ rva 8279986 (image 188279986) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188279a97(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
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



// ===== continuation @ rva 827c025 (image 18827c025) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188279a97(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
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



// ===== continuation @ rva 827c2a4 (image 18827c2a4) =====

undefined8 thunk_FUN_18827c836(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 8279eaf (image 188279eaf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188279eaf(void)

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



// ===== continuation @ rva 827dd93 (image 18827dd93) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18827dd93(void)

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



// ===== continuation @ rva 827dd3f (image 18827dd3f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827dd3f(void)

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



// ===== continuation @ rva 827eaf8 (image 18827eaf8) =====

void FUN_18827eaf8(void)

{
  return;
}



// ===== continuation @ rva 827e89b (image 18827e89b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827e89b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180ee2a08)();
  return;
}



// ===== continuation @ rva 827eb06 (image 18827eb06) =====

void FUN_18827eb06(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 827e0f8 (image 18827e0f8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18827e0f8(void)

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



// ===== continuation @ rva 827e52c (image 18827e52c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827e52c(void)

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



// ===== continuation @ rva 827e413 (image 18827e413) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827e413(void)

{
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = in_stack_00000030;
  FUN_190dd72e0();
  (*_DAT_180ee27e8)();
  return;
}



// ===== continuation @ rva 827e73a (image 18827e73a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827e73a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_180ee26f8)();
  return;
}



// ===== continuation @ rva 827e6d4 (image 18827e6d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827e6d4(void)

{
  FUN_190dd72e0();
  (*_DAT_180ee2a78)();
  return;
}



// ===== continuation @ rva 827e7f7 (image 18827e7f7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18827e7f7(void)

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



// ===== continuation @ rva 828154d (image 18828154d) =====

void FUN_18828154d(void)

{
  return;
}



// ===== continuation @ rva 827ec70 (image 18827ec70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827ec70(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180ee3998)();
  return;
}



// ===== continuation @ rva 827f549 (image 18827f549) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827f549(void)

{
  (*_DAT_180ee39d8)();
  return;
}



// ===== continuation @ rva 827ff5c (image 18827ff5c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827ff5c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180ee39f8)();
  return;
}



// ===== continuation @ rva 828156c (image 18828156c) =====

void FUN_18828156c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 8280b99 (image 188280b99) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188280b99(void)

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



// ===== continuation @ rva 82811ee (image 1882811ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882811ee(void)

{
  (*_DAT_180ee39d8)();
  return;
}



// ===== continuation @ rva 8280d0d (image 188280d0d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188280d0d(void)

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



// ===== continuation @ rva 827fda2 (image 18827fda2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18827fda2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180ee39b8)();
  return;
}



// ===== continuation @ rva 8281561 (image 188281561) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188281561(void)

{
  (*_DAT_180ee39d8)();
  return;
}



// ===== continuation @ rva 827f3eb (image 18827f3eb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18827f3eb(void)

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



// ===== continuation @ rva 8283d8b (image 188283d8b) =====

void FUN_188283d8b(void)

{
  return;
}



// ===== continuation @ rva 8283bd1 (image 188283bd1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188283bd1(void)

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



// ===== continuation @ rva 82851ed (image 1882851ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882851ed(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x120))();
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



// ===== continuation @ rva 82851b3 (image 1882851b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1882851b3(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190dd72e0();
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



// ===== continuation @ rva 8285be5 (image 188285be5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188285be5(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8283ce3 (image 188283ce3) =====

undefined8 FUN_188283ce3(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x70))();
  return 0;
}



// ===== continuation @ rva 82875a4 (image 1882875a4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_188288690(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x88))();
  FUN_190dd72e0();
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



// ===== continuation @ rva 828438a (image 18828438a) =====

undefined8 thunk_FUN_188283d74(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 82856a4 (image 1882856a4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882856a4(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 8284566 (image 188284566) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_188284566(void)

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



// ===== continuation @ rva 828cbb2 (image 18828cbb2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18828cbb2(void)

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



// ===== continuation @ rva 828cb5e (image 18828cb5e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828cb5e(void)

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



// ===== continuation @ rva 828da25 (image 18828da25) =====

void FUN_18828da25(void)

{
  return;
}



// ===== continuation @ rva 828d5c8 (image 18828d5c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828d5c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_180ee5d38)();
  return;
}



// ===== continuation @ rva 828cdb8 (image 18828cdb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18828cdb8(void)

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



// ===== continuation @ rva 828da34 (image 18828da34) =====

void FUN_18828da34(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 828d1af (image 18828d1af) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18828d1af(void)

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



// ===== continuation @ rva 828d9f1 (image 18828d9f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828d9f1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180ee5e88)();
  return;
}



// ===== continuation @ rva 828cc0b (image 18828cc0b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18828cc0b(void)

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



// ===== continuation @ rva 828d02e (image 18828d02e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828d02e(void)

{
  FUN_190ddfc90();
  (*_DAT_180ee5e98)();
  return;
}



// ===== continuation @ rva 828d085 (image 18828d085) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18828d085(void)

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



// ===== continuation @ rva 828d8e2 (image 18828d8e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828d8e2(void)

{
  FUN_190dd72e0();
  (*_DAT_180ee5d68)();
  return;
}



// ===== continuation @ rva 828fb46 (image 18828fb46) =====

void FUN_18828fb46(void)

{
  return;
}



// ===== continuation @ rva 828dbac (image 18828dbac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828dbac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_180ee6d18)();
  return;
}



// ===== continuation @ rva 8290684 (image 188290684) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188290684(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180ee6de8)();
  return;
}



// ===== continuation @ rva 82904e1 (image 1882904e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1882904e1(void)

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



// ===== continuation @ rva 82906ea (image 1882906ea) =====

void FUN_1882906ea(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 828e65d (image 18828e65d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18828e65d(void)

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



// ===== continuation @ rva 828f118 (image 18828f118) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18828f118(void)

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



// ===== continuation @ rva 828ed79 (image 18828ed79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828ed79(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180ee6f78)();
  return;
}



// ===== continuation @ rva 828df31 (image 18828df31) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828df31(void)

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



// ===== continuation @ rva 828ea10 (image 18828ea10) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828ea10(void)

{
  (*_DAT_180ee7018)();
  return;
}



// ===== continuation @ rva 828eb5b (image 18828eb5b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18828eb5b(void)

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



