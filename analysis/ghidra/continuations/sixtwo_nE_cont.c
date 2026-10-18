// ===== continuation @ rva 6c4b3b8 (image 186c4b3b8) =====

void FUN_186c4b3b8(void)

{
  return;
}



// ===== continuation @ rva 6c3ebbb (image 186c3ebbb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3ebbb(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6c4b372 (image 186c4b372) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c4b372(void)

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



// ===== continuation @ rva 6c43ed9 (image 186c43ed9) =====

void thunk_FUN_186c41350(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 6c48c39 (image 186c48c39) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c48c39(void)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong in_stack_00000038;
  int in_stack_00000048;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  bVar1 = *(byte *)(lVar3 + in_stack_00000048);
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar4 = (~_DAT_183160620 + 0x42407554) *
          ((_DAT_183160518 ^ 0x683309e4) + (ulonglong)((uint)_DAT_183160518 & 0x683309e4) * 2);
  uVar4 = (uVar4 | _DAT_1831606e0) + (uVar4 & _DAT_1831606e0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183160a08 = func_0x000186c4b5a0((uVar4 | 0x2a737cb7) + (ulonglong)((uint)uVar4 & 0x2a737cb7))
  ;
  _DAT_183160c30 =
       (_DAT_183160c30 ^ _DAT_183160a08 ^ 0x3d17dd80961b64c0) + 0xee517fd3 ^ 0x9cfea7defe9e0628;
  _DAT_183160a88 =
       (_DAT_183160a88 * -0x4b30e144cc73d0f3 ^ _DAT_183160c30) +
       (_DAT_183160a08 ^ 0x3d17dd80961b64c0);
  _DAT_1831607b0 = _DAT_183160a88 ^ _DAT_183160c30;
  _DAT_1831605b0 = 0xee517fd3;
  uVar4 = (~_DAT_183160b98 + 0xf0f28853) *
          ((_DAT_183160a30 ^ 0x3cefb6a2) + (ulonglong)((uint)_DAT_183160a30 & 0x3cefb6a2) * 2);
  uVar4 = (uVar4 | _DAT_183160b40) + (uVar4 & _DAT_183160b40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183160c08 = func_0x000186c4b5a0((uVar4 | 0xcc1d3ef0) + (ulonglong)((uint)uVar4 & 0xcc1d3ef0))
  ;
  uVar4 = _DAT_183160c08 << 0x1e | _DAT_183160c08 >> 0x22;
  _DAT_183160b58 = (_DAT_183160b58 ^ uVar4) + 0x483f1dd5 ^ 0xae21bd476e243fc7;
  _DAT_1831606a8 = (_DAT_1831606a8 * 0x5c30c3b1e4f08ebf ^ _DAT_183160b58) + uVar4;
  _DAT_1831609e8 = _DAT_1831606a8 ^ _DAT_183160b58;
  _DAT_183160660 = 0x483f1dd5;
  uVar4 = (_DAT_183160560 ^ _DAT_1809f7910) + _DAT_183160930 + 0x84222325;
  uVar7 = (_DAT_183160930 ^ _UNK_1809f7918) + _DAT_183160560 + 0xa30e6d81;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183160560 ^ _DAT_1809f7910;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183160930 ^ _UNK_1809f7918;
  _DAT_1831607c0 =
       func_0x000186c4b5a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183160560 + 0xa30e6d81) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183160930 + 0x84222325));
  _DAT_183160790 = _DAT_183160a18 * 0x76a515997ccb36d;
  _DAT_183160c40 = _DAT_183160c40 - 0xa30e6d81 ^ 0xd40ea14d81461061;
  _DAT_183160a18 = _DAT_183160790 ^ _DAT_183160c40;
  _DAT_183160c80 = 0x5cf1927f;
  uVar4 = (_DAT_183160788 ^ _DAT_1809f7920) + _DAT_183160978 + 0x272d4fa4;
  uVar7 = (_DAT_183160978 ^ _UNK_1809f7928) + _DAT_183160788 + 0x5cf1927f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183160788 ^ _DAT_1809f7920;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183160978 ^ _UNK_1809f7928;
  _DAT_183160cd8 =
       func_0x000186c4b5a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183160788 + 0x5cf1927f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183160978 + 0x272d4fa4));
  uVar4 = _DAT_183160cd8 ^ 0x3b3369d331f965ff;
  _DAT_1831608d8 = _DAT_1831606d0 ^ uVar4 ^ 0x10000ff00;
  _DAT_183160660 = (_DAT_183160660 ^ uVar4) + 0x10000ff00 ^ 0xec0a7c9c79b648ef;
  _DAT_183160848 = (_DAT_1831608e0 * -0x12cf58d5f388e651 ^ _DAT_183160660) + uVar4 ^ _DAT_183160660;
  _DAT_1831608e0 = 0xff00;
  uVar4 = (_DAT_183160c38 ^ _DAT_1809f7930) + _DAT_183160508 + 0x84222325;
  uVar7 = (_DAT_183160508 ^ _UNK_1809f7938) + _DAT_183160c38 + 0x891a1b62;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183160c38 ^ _DAT_1809f7930;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183160508 ^ _UNK_1809f7938;
  _DAT_183160c68 =
       func_0x000186c4b5a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183160c38 + 0x891a1b62) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183160508 + 0x84222325));
  _DAT_183160788 = (_DAT_183160788 ^ _DAT_183160c68) - 0x891a1b62 ^ 0xa32a8fea7bd73;
  _DAT_183160ad0 = (_DAT_183160ad0 * -0x5b59d069613b22a7 ^ _DAT_183160788) + _DAT_183160c68;
  _DAT_183160838 = _DAT_183160ad0 ^ _DAT_183160788;
  _DAT_183160548 = 0x76e5e49e;
  uVar4 = (~_DAT_183160ca8 + 0x3a340df1) *
          ((_DAT_183160700 ^ 0x84222325) + (ulonglong)((uint)_DAT_183160700 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183160678) + (uVar4 & _DAT_183160678);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183160908 = func_0x000186c4b5a0((uVar4 | 0xbe162ed5) + (ulonglong)((uint)uVar4 & 0xbe162ed5))
  ;
  uVar4 = (_DAT_183160908 << 0x33 | _DAT_183160908 >> 0xd) & 0x7fffffffffff8000;
  _DAT_183160788 = (_DAT_183160788 ^ uVar4) - 0x3a340df0 ^ 0xb9588c9eefb1c498;
  _DAT_183160790 = (_DAT_183160790 * 0x5f19c71c9cc4448b ^ _DAT_183160788) + uVar4;
  _DAT_183160530 = _DAT_183160790 ^ _DAT_183160788;
  _DAT_183160600 = 0xc5cbf210;
  uVar4 = (_DAT_183160950 ^ _DAT_1809f7940) + _DAT_183160c58 + 0x8422dc25;
  uVar7 = (_DAT_183160c58 ^ _UNK_1809f7948) + _DAT_183160950 + 0x3a340df0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183160950 ^ _DAT_1809f7940;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183160c58 ^ _UNK_1809f7948;
  _DAT_183160588 =
       func_0x000186c4b5a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183160950 + 0x3a340df0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183160c58 + 0x8422dc25));
  uVar4 = _DAT_183160588 ^ 0x39f9e3d61df0;
  _DAT_183160720 = _DAT_183160888 ^ uVar4 ^ 0x3a350cf0;
  _DAT_183160700 = (_DAT_183160700 ^ uVar4) + 0x3a350cf0 ^ 0x954e3abe4d0f6381;
  _DAT_183160940 = (_DAT_183160940 * -0x225ec88bd451e82f ^ _DAT_183160700) + uVar4;
  _DAT_183160868 = _DAT_183160940 ^ _DAT_183160700;
  _DAT_183160590 = 0x3a350cf0;
  uVar4 = (_DAT_183160808 ^ _DAT_1809f7950) + _DAT_183160548 + 0xbe172fd5;
  uVar7 = (_DAT_183160548 ^ _UNK_1809f7958) + _DAT_183160808 + 0xc5cbf210;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183160808 ^ _DAT_1809f7950;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183160548 ^ _UNK_1809f7958;
  _DAT_183160858 =
       func_0x000186c4b5a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183160808 + 0xc5cbf210) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183160548 + 0xbe172fd5));
  uVar7 = _DAT_183160858 ^ 0xfffefee0;
  uVar4 = uVar7 >> 1 | uVar7;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  _DAT_1831608c0 = _DAT_1831606a0 ^ uVar7 ^ 0x10000ff00;
  _DAT_183160698 = (_DAT_183160698 ^ uVar7) + 0x10000ff00 ^ 0xf3133a5eb02f8581;
  _DAT_183160b20 = (_DAT_183160b20 * -0x177dededd5530b21 ^ _DAT_183160698) + uVar7;
  _DAT_183160c48 = _DAT_183160b20 ^ _DAT_183160698;
  _DAT_1831608a0 = 0xff00;
  uVar4 = (~_DAT_1831609f0 + 0x483f1dd6) *
          ((_DAT_183160920 ^ 0x6a735cf6) + (ulonglong)((uint)_DAT_183160920 & 0x6a735cf6) * 2);
  uVar4 = (uVar4 | _DAT_183160700) + (uVar4 & _DAT_183160700);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183160a40 = func_0x000186c4b5a0((uVar4 | 0x224c4123) + (ulonglong)((uint)uVar4 & 0x224c4123))
  ;
  _DAT_183160538 =
       (_DAT_183160538 ^ _DAT_183160a40 & 0x1fffffffffffff) + 0x48111dd1 ^ 0x4a74b5cf367fcdb1;
  _DAT_1831609f0 =
       (_DAT_1831609f0 * 0x68b1f2d2b95db4c3 ^ _DAT_183160538) + (_DAT_183160a40 & 0x1fffffffffffff);
  _DAT_183160688 = _DAT_1831609f0 ^ _DAT_183160538;
  _DAT_1831607b0 = 0x48111dd1;
  uVar4 = (~_DAT_183160970 + 0x90223ba3) *
          ((_DAT_183160c00 ^ 0x224c4123) + (ulonglong)((uint)_DAT_183160c00 & 0x224c4123) * 2);
  uVar4 = (uVar4 | _DAT_183160aa0) + (uVar4 & _DAT_183160aa0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183160560 = func_0x000186c4b5a0((uVar4 | 0xb26e7a81) + (ulonglong)((uint)uVar4 & 0xb26e7a81))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_183160560 & 0xa66e6206);
  _DAT_183160be0 = _DAT_183160860 ^ uVar4 ^ 0x136909da8;
  _DAT_1831605a0 = (_DAT_1831605a0 ^ uVar4) + 0x136909da8 ^ 0xadf450382c0ef2ab;
  _DAT_183160990 = (_DAT_183160990 * 0xddc2b092a1d3cc3 ^ _DAT_1831605a0) + uVar4;
  _DAT_183160618 = _DAT_183160990 ^ _DAT_1831605a0;
  _DAT_183160710 = 0x36909da8;
  _DAT_183160c68 = func_0x000186c4b5a0(_DAT_183160ce0 + 0x5eff9507008bffU ^ 0x45);
  uVar4 = _DAT_183160c68 >> 1 | _DAT_183160c68;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183160c68;
  _DAT_183160828 = (_DAT_183160828 ^ uVar4) + 0x11ae802c ^ 0x291f7115e661b5f1;
  _DAT_183160b60 = (_DAT_183160b60 * 0x53dbad4a089fd4b7 ^ _DAT_183160828) + uVar4;
  _DAT_1831605f0 = _DAT_183160b60 ^ _DAT_183160828;
  _DAT_183160640 = 0x11ae802c;
  _DAT_183160c70 = func_0x000186c4b5a0(_DAT_1831605f8 ^ 0x240055260044f6);
  uVar4 = _DAT_183160c70 << 0x1f | _DAT_183160c70 >> 0x21;
  _DAT_183160630 = _DAT_183160630 ^ uVar4 ^ 0x3e7a65f7b20f48de;
  _DAT_183160c08 = (_DAT_183160c08 * -0x6674fa5ce22463df ^ _DAT_183160630) + uVar4;
  _DAT_183160630 = _DAT_183160c08 ^ _DAT_183160630;
  _DAT_183160688 = 0;
  uVar4 = (_DAT_183160730 ^ 0x8422dc25) + _DAT_183160a10 + 0x8422dc25;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183160730 ^ 0x8422dc25;
  uVar7 = ((_DAT_183160a10 + _DAT_183160730) * 0x2000 | _DAT_183160a10 + _DAT_183160730 >> 0x33) ^
          _DAT_183160a10;
  _DAT_1831606b8 =
       func_0x000186c4b5a0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183160730 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183160a10 + 0x8422dc25));
  uVar4 = _DAT_183160578 & 0x7fffffffffffffff;
  _DAT_183160b28 = _DAT_183160c48 ^ uVar4 ^ 0xff00;
  _DAT_183160940 = (_DAT_183160940 ^ uVar4) + 0xff00 ^ 0xf4c8db5ce04ff072;
  _DAT_183160848 = (_DAT_183160848 * 0x59cfab29d5f44ccb ^ _DAT_183160940) + uVar4;
  _DAT_183160c20 = _DAT_183160848 ^ _DAT_183160940;
  _DAT_183160b38 = 0xff00;
  uVar4 = (_DAT_183160c40 ^ _DAT_1809f7960) + _DAT_183160658 + 0x683309e4;
  uVar7 = (_DAT_183160658 ^ _UNK_1809f7968) + _DAT_183160c40 + 0xec112ac1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183160c40 ^ _DAT_1809f7960;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183160658 ^ _UNK_1809f7968;
  _DAT_183160a48 =
       func_0x000186c4b5a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183160c40 + 0xec112ac1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183160658 + 0x683309e4));
  _DAT_183160c30 = _DAT_183160c30 ^ _DAT_183160a48 ^ 0x174b3c892e073c83;
  _DAT_183160890 = (_DAT_183160890 * -0x71966b39b8fb8f25 ^ _DAT_183160c30) + _DAT_183160a48;
  _DAT_183160b18 = _DAT_183160890 ^ _DAT_183160c30;
  _DAT_183160b30 = 0;
  uVar4 = ((_DAT_183160b00 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183160b00 & 0x8422dc25) * 2) *
          -_DAT_183160c70;
  uVar4 = (uVar4 | _DAT_1831607f8) + (uVar4 & _DAT_1831607f8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183160a70 = func_0x000186c4b5a0((uVar4 | 0x8422dc25) + (ulonglong)((uint)uVar4 & 0x8422dc25))
  ;
  uVar4 = _DAT_183160a70 >> 1 | _DAT_183160a70;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183160a70;
  _DAT_183160cc8 = _DAT_183160c70 ^ uVar4 ^ 0xff00;
  _DAT_183160c98 = (_DAT_183160c98 ^ uVar4) + 0xff00 ^ 0xfb8fd6935f3202a3;
  _DAT_1831605b8 = (_DAT_1831605b8 * -0x382db672902d7e97 ^ _DAT_183160c98) + uVar4;
  _DAT_183160a90 = _DAT_1831605b8 ^ _DAT_183160c98;
  _DAT_183160a28 = 0xff00;
  auVar5._8_4_ = (uint)bVar1 << 8;
  auVar5._0_8_ = in_stack_00000038 ^ 0x84222325;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ _DAT_1809f7970,_DAT_1800170c0);
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar4 = uVar7 + _DAT_183160840;
  if (auVar6._4_4_ < 0) {
    uVar4 = _DAT_183160a00 ^ uVar7;
  }
  _DAT_183160cb0 = func_0x000186c4b5a0(SUB161(auVar5 ^ _DAT_1809f7970,5) ^ uVar4);
  _DAT_183160c30 = in_stack_00000038 | (ulonglong)bVar1 << 8;
  _DAT_183160c78 = (_DAT_183160c78 ^ _DAT_183160cb0) + _DAT_183160c30 ^ 0x24a1604630dcd1af;
  _DAT_1831607b8 = (_DAT_1831607b8 * 0x4866774915eec109 ^ _DAT_183160c78) + _DAT_183160cb0;
  _DAT_183160c18 = _DAT_1831607b8 ^ _DAT_183160c78;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar2 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6c48bee (image 186c48bee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c48bee(void)

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



// ===== continuation @ rva 6c441f6 (image 186c441f6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c441f6(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong in_stack_00000038;
  int in_stack_00000048;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000048);
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar4 = (ulonglong)(uint)(int)cVar1;
  _DAT_1831607a0 = func_0x000186c4b5a0(_DAT_183160718 ^ 0xff55ffc106000adb);
  uVar5 = (_DAT_1831607a0 ^ 0xe7affbff) * 0x49a400ed2b260a2b;
  uVar5 = (uVar5 ^ 0x23a5e2fd) << 4 | uVar5 >> 0x3c;
  _DAT_183160a00 = (_DAT_183160a00 ^ uVar5) + 0xe7affbff ^ 0x7b9b75c4ee878d93;
  _DAT_183160860 = (_DAT_183160860 * -0x5a0ecd9216adb691 ^ _DAT_183160a00) + uVar5;
  _DAT_1831608e0 = _DAT_183160860 ^ _DAT_183160a00;
  _DAT_183160730 = 0xe7affbff;
  uVar5 = (_DAT_1831606a0 ^ _DAT_1809f77d0) + _DAT_183160830 + 0xbdeaafd3;
  uVar9 = (_DAT_183160830 ^ _UNK_1809f77d8) + _DAT_1831606a0 + 0x23f79f96;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831606a0 ^ _DAT_1809f77d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183160830 ^ _UNK_1809f77d8;
  _DAT_183160828 =
       func_0x000186c4b5a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1831606a0 + 0x23f79f96) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183160830 + 0xbdeaafd3));
  _DAT_183160618 = (_DAT_183160618 ^ _DAT_183160828 ^ 0x18080060) + 0x1a3f1360 ^ 0x2346d7da83fb4896;
  _DAT_183160858 =
       (_DAT_183160858 * 0x2ec28b27769e9f43 ^ _DAT_183160618) + (_DAT_183160828 ^ 0x18080060);
  _DAT_183160bf0 = _DAT_183160858 ^ _DAT_183160618;
  _DAT_183160628 = 0x1a3f1360;
  uVar5 = (_DAT_183160820 ^ _DAT_1809f77e0) + _DAT_183160c18 + 0x84222325;
  uVar9 = (_DAT_183160c18 ^ _UNK_1809f77e8) + _DAT_183160820 + 0x77b2f59d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183160820 ^ _DAT_1809f77e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183160c18 ^ _UNK_1809f77e8;
  _DAT_1831605c0 =
       func_0x000186c4b5a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183160820 + 0x77b2f59d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183160c18 + 0x84222325));
  _DAT_183160690 =
       (_DAT_183160690 ^ _DAT_1831605c0 * -0x286f0e6cd87559d3) - 0x77b2f59d ^ 0xf15d1a0b59f72096;
  _DAT_183160c80 =
       (_DAT_183160c80 * 0x53c073a7a803bd1d ^ _DAT_183160690) + _DAT_1831605c0 * -0x286f0e6cd87559d3
  ;
  _DAT_1831609a8 = _DAT_183160c80 ^ _DAT_183160690;
  _DAT_183160638 = 0x884d0a63;
  _DAT_183160560 = func_0x000186c4b5a0(_DAT_183160b40 ^ 0x3affeb46003ccf);
  uVar5 = _DAT_183160560 ^ 0x884d0a63;
  _DAT_183160978 = _DAT_183160680 ^ uVar5 ^ 0x1000000ff;
  _DAT_183160c90 = (_DAT_183160c90 ^ uVar5) + 0x1000000ff ^ 0xf056c5bbdfdc34b2;
  _DAT_183160968 = (_DAT_183160968 * 0x3ff8d5f33d746837 ^ _DAT_183160c90) + uVar5;
  _DAT_1831608a0 = _DAT_183160968 ^ _DAT_183160c90;
  _DAT_183160c78 = _DAT_183160778 ^ 0x1000000ff;
  _DAT_183160c10 = 0xff;
  uVar5 = (_DAT_183160658 ^ _DAT_1809f77f0) + _DAT_183160c88 + 0x84222325;
  uVar9 = (_DAT_183160c88 ^ _UNK_1809f77f8) + _DAT_183160658 + 0x11761e3c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183160658 ^ _DAT_1809f77f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183160c88 ^ _UNK_1809f77f8;
  _DAT_1831606a0 =
       func_0x000186c4b5a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183160658 + 0x11761e3c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183160c88 + 0x84222325));
  uVar5 = (_DAT_1831606a0 & 0xffffffffffe00000) << 0x25 | _DAT_1831606a0 >> 0x1b;
  _DAT_183160870 = (_DAT_183160870 ^ uVar5) - 0x11761e3c ^ 0x6538c0682e2b08c1;
  _DAT_183160b90 = (_DAT_183160b90 * -0x4bec586267505bff ^ _DAT_183160870) + uVar5;
  _DAT_1831605d8 = _DAT_183160b90 ^ _DAT_183160870;
  _DAT_183160980 = 0xee89e1c4;
  _DAT_1831609a0 = func_0x000186c4b5a0(_DAT_183160b30 ^ 0xffbaffab46005498);
  uVar5 = (ulonglong)(~(uint)_DAT_1831609a0 & 0x11761f3b);
  _DAT_183160a50 = _DAT_183160a50 ^ uVar5 ^ 0x1000000ff;
  _DAT_183160688 = (_DAT_183160688 ^ uVar5) + 0x1000000ff ^ 0x668c0f85b4af8921;
  _DAT_183160c00 = (_DAT_183160c00 * 0x2b733e68e24dcd47 ^ _DAT_183160688) + uVar5;
  _DAT_183160690 = _DAT_183160c00 ^ _DAT_183160688;
  _DAT_183160a08 = 0xff;
  _DAT_183160960 = func_0x000186c4b5a0(_DAT_183160910 ^ 0xeff9d1d0048ce);
  uVar5 = (_DAT_183160960 ^ 0xe6eb12c0) << 0x1a | _DAT_183160960 >> 0x26;
  _DAT_183160a98 = (_DAT_183160a98 ^ uVar5) - 0xe6eb12c0 ^ 0xfeb4daeb1f32f91e;
  _DAT_183160ae8 = (_DAT_183160ae8 * 0x2e735bdc1a45f4c5 ^ _DAT_183160a98) + uVar5;
  _DAT_183160cf0 = _DAT_183160ae8 ^ _DAT_183160a98;
  _DAT_183160cf8 = 0x1914ed40;
  uVar5 = (_DAT_183160960 ^ _DAT_1809f7800) + _DAT_183160848 + 0x62c9309a;
  uVar9 = (_DAT_183160848 ^ _UNK_1809f7808) + _DAT_183160960 + 0x1914ed40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183160960 ^ _DAT_1809f7800;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183160848 ^ _UNK_1809f7808;
  _DAT_183160940 =
       func_0x000186c4b5a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183160960 + 0x1914ed40) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183160848 + 0x62c9309a));
  uVar5 = (_DAT_183160940 << 0x30 | _DAT_183160940 >> 0x10) ^ 0x1914ed40;
  _DAT_183160a30 = _DAT_183160a28 ^ uVar5 ^ 0x1000000ff;
  _DAT_183160548 = (_DAT_183160548 ^ uVar5) + 0x1000000ff ^ 0x6e83db2d2682fad2;
  _DAT_1831606a8 = (_DAT_1831606a8 * -0x17c929420fa441eb ^ _DAT_183160548) + uVar5;
  _DAT_1831606d8 = _DAT_1831606a8 ^ _DAT_183160548;
  _DAT_183160bb8 = 0xff;
  uVar5 = (_DAT_183160c48 ^ _DAT_1809f7810) + _DAT_1831606a8 + 0x638dd8da;
  uVar9 = (_DAT_1831606a8 ^ _UNK_1809f7818) + _DAT_183160c48 + 0x1a3f1360;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183160c48 ^ _DAT_1809f7810;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1831606a8 ^ _UNK_1809f7818;
  _DAT_183160968 =
       func_0x000186c4b5a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183160c48 + 0x1a3f1360) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831606a8 + 0x638dd8da));
  _DAT_183160ad8 =
       (_DAT_183160ad8 ^ _DAT_183160968 * 0x4ab5ad81e2adbf0b) + 0xfd90e89f ^ 0x179e1013e6b3396b;
  _DAT_183160840 =
       (_DAT_183160840 * 0x1976dcbeafebd675 ^ _DAT_183160ad8) + _DAT_183160968 * 0x4ab5ad81e2adbf0b;
  _DAT_183160b20 = _DAT_183160840 ^ _DAT_183160ad8;
  _DAT_183160a08 = 0xfd90e89f;
  uVar5 = (~_DAT_183160590 + 0x1a3f1361) *
          ((_DAT_183160808 ^ 0x638dd8da) + (ulonglong)((uint)_DAT_183160808 & 0x638dd8da) * 2);
  uVar5 = (uVar5 | _DAT_183160598) + (uVar5 & _DAT_183160598);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183160868 = func_0x000186c4b5a0((uVar5 | 0x79b2cbba) + (ulonglong)((uint)uVar5 & 0x79b2cbba))
  ;
  _DAT_183160bd8 = (_DAT_183160bd8 ^ _DAT_183160868 & 0x3fffffffff) + 0x22f1360 ^ 0x88648f7e88de2cb7
  ;
  _DAT_183160ab8 =
       (_DAT_183160ab8 * -0x4506fc4895be34fd ^ _DAT_183160bd8) + (_DAT_183160868 & 0x3fffffffff);
  _DAT_183160ca0 = _DAT_183160ab8 ^ _DAT_183160bd8;
  _DAT_183160890 = 0x22f1360;
  _DAT_183160630 = func_0x000186c4b5a0(0xdaffe2d82eb76b);
  uVar5 = _DAT_183160630 - (_DAT_183160630 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183160630;
  uVar5 = uVar9 >> 1 | uVar9;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = uVar9 ^ 0xfd90e89f ^
          (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80;
  _DAT_183160798 = _DAT_183160ac8 ^ uVar5 ^ 0x101ef0f5f;
  _DAT_183160cd8 = (_DAT_183160cd8 ^ uVar5) + 0x101ef0f5f ^ 0xe7df9333f3b3832a;
  _DAT_183160bf8 = (_DAT_183160bf8 * -0x6007e091df7a880b ^ _DAT_183160cd8) + uVar5;
  _DAT_183160ba8 = _DAT_183160bf8 ^ _DAT_183160cd8;
  _DAT_183160520 = 0x1ef0f5f;
  uVar5 = (_DAT_183160790 ^ 0x842223da) + _DAT_183160918 + 0x842223da;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183160790 ^ 0x842223da;
  uVar9 = ((_DAT_183160918 + _DAT_183160790) * 0x2000 | _DAT_183160918 + _DAT_183160790 >> 0x33) ^
          _DAT_183160918;
  _DAT_1831607a0 =
       func_0x000186c4b5a0((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_183160790 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183160918 + 0x842223da));
  uVar5 = _DAT_1831607a0 ^ 0xff;
  _DAT_1831606b0 = _DAT_183160558 ^ uVar5 ^ 0xff;
  _DAT_183160740 = (_DAT_183160740 ^ uVar5) + 0xff ^ 0x230c67be74af4c3;
  _DAT_1831605c8 = (_DAT_1831605c8 * 0x612bbb9959034cdf ^ _DAT_183160740) + uVar5;
  _DAT_183160750 = _DAT_1831605c8 ^ _DAT_183160740;
  _DAT_183160980 = 0xff;
  uVar5 = (~_DAT_183160770 + 0x100000000) *
          ((_DAT_1831609f8 ^ 0x638dd8da) + (ulonglong)((uint)_DAT_1831609f8 & 0x638dd8da) * 2);
  uVar5 = (uVar5 | _DAT_1831607d0) + (uVar5 & _DAT_1831607d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183160a68 = func_0x000186c4b5a0((uVar5 | 0x9c722725) + (ulonglong)((uint)uVar5 & 0x9c722725))
  ;
  _DAT_1831605a0 =
       (_DAT_1831605a0 ^ _DAT_183160a68 ^ 0xe7affbfefffffffe) + 0x18500400 ^ 0xae096fff091b1e7f;
  _DAT_183160b78 =
       (_DAT_183160b78 * -0x4392edb0d79f5383 ^ _DAT_1831605a0) +
       (_DAT_183160a68 ^ 0xe7affbfefffffffe);
  _DAT_183160730 = _DAT_183160b78 ^ _DAT_1831605a0;
  _DAT_183160ca8 = 0x18500400;
  uVar5 = (_DAT_183160608 ^ _DAT_1809f7820) + _DAT_183160758 + 0x638dd8da;
  uVar9 = (_DAT_183160758 ^ _UNK_1809f7828) + _DAT_183160608 + 0x18500400;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183160608 ^ _DAT_1809f7820;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183160758 ^ _UNK_1809f7828;
  _DAT_183160528 =
       func_0x000186c4b5a0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183160608 + 0x18500400) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183160758 + 0x638dd8da));
  uVar5 = (_DAT_183160528 ^ 0xffffffff) * -0x407f179fc8bd9619;
  uVar9 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5;
  _DAT_183160bd8 = _DAT_183160bd8 ^ uVar5 ^ 0x1ac5b1b9d7c8eebb;
  _DAT_183160c80 = (_DAT_183160c80 * 0x64945086d99c724f ^ _DAT_183160bd8) + uVar5;
  _DAT_183160c50 = _DAT_183160c80 ^ _DAT_183160bd8;
  _DAT_183160668 = 0;
  uVar5 = (~_DAT_183160658 + 0x23a5e2fe) *
          ((_DAT_183160be8 ^ 0xa787c1d8) + (ulonglong)((uint)_DAT_183160be8 & 0xa787c1d8) * 2);
  uVar5 = (uVar5 | _DAT_1831606e8) + (uVar5 & _DAT_1831606e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183160830 = func_0x000186c4b5a0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  auVar8 = _DAT_1800170c0;
  _DAT_183160c68 = _DAT_183160c68 ^ _DAT_183160a00 ^ 0xe7ec29571ac81703;
  _DAT_1831607b0 = (_DAT_1831607b0 * 0x79e4cfcf42389805 ^ _DAT_183160c68) + _DAT_183160a00;
  _DAT_183160938 = _DAT_1831607b0 ^ _DAT_183160c68;
  auVar6._8_8_ = _UNK_180122a38;
  auVar6._0_8_ = uVar4 ^ 0x84222325;
  _DAT_183160a18 = 0;
  auVar7 = pshufb(auVar6 ^ _DAT_1809f7830,_DAT_1800170c0);
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar5 = uVar9 + _DAT_1831609f0;
  if (auVar7._4_4_ < 0) {
    uVar5 = _DAT_183160a58 ^ uVar9;
  }
  _DAT_183160b58 = func_0x000186c4b5a0(SUB161(auVar6 ^ _DAT_1809f7830,5) ^ uVar5);
  uVar5 = uVar4 ^ (uVar4 | 0xff) ^ _DAT_183160b58;
  _DAT_183160538 = uVar4 & 0xff;
  _DAT_183160a70 = (_DAT_183160a70 ^ uVar5) + _DAT_183160538 ^ 0xf319bd27fc27b254;
  _DAT_183160908 = (_DAT_183160908 * 0x6bae214c2d71ab09 ^ _DAT_183160a70) + uVar5;
  _DAT_183160a60 = _DAT_183160908 ^ _DAT_183160a70;
  uVar9 = _DAT_183160538 << 0x30;
  auVar7._8_8_ = uVar9;
  auVar7._0_8_ = in_stack_00000038 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_1809f7840,auVar8);
  uVar5 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar5 + _DAT_1831607b8;
  if (auVar8._4_4_ < 0) {
    uVar4 = _DAT_183160bd8 ^ uVar5;
  }
  _DAT_183160ac8 = func_0x000186c4b5a0(SUB161(auVar7 ^ _DAT_1809f7840,5) ^ uVar4);
  _DAT_183160608 = uVar9 | in_stack_00000038;
  uVar4 = _DAT_183160ac8 ^ _DAT_183160608;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4) >> 1 | uVar4 << 0x3f;
  _DAT_1831606d8 = (_DAT_1831606d8 ^ uVar4) + _DAT_183160608 ^ 0xd6f7ca25f9f90aaf;
  _DAT_183160aa8 = (_DAT_183160aa8 * -0x2bfe7b45010ed955 ^ _DAT_1831606d8) + uVar4;
  _DAT_183160738 = _DAT_183160aa8 ^ _DAT_1831606d8;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar2 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6c441ab (image 186c441ab) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c441ab(void)

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



// ===== continuation @ rva 6c4b358 (image 186c4b358) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c4b358(void)

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



// ===== continuation @ rva 6c4364a (image 186c4364a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c4364a(void)

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



// ===== continuation @ rva 6c4227a (image 186c4227a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c4227a(void)

{
  longlong in_stack_00000038;
  
  switch(in_stack_00000038 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6c04590 (image 186c04590) =====

void FUN_186c04590(void)

{
  return;
}



// ===== continuation @ rva 6bff1ce (image 186bff1ce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bff1ce(void)

{
  FUN_190ddce00();
  (*_DAT_1809ea5d8)();
  return;
}



// ===== continuation @ rva 6c04588 (image 186c04588) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c04588(void)

{
  (*_DAT_1809eba78)();
  return;
}



// ===== continuation @ rva 6c02f1b (image 186c02f1b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c02f1b(void)

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



// ===== continuation @ rva 6c01dc2 (image 186c01dc2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c01dc2(void)

{
  (*_DAT_1809eb558)();
  return;
}



// ===== continuation @ rva 6c04138 (image 186c04138) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c04138(void)

{
  (*_DAT_1809eba08)();
  return;
}



// ===== continuation @ rva 6c03d21 (image 186c03d21) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c03d21(void)

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



// ===== continuation @ rva 6c03437 (image 186c03437) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c03437(void)

{
  (*_DAT_1809eb7d8)();
  return;
}



// ===== continuation @ rva 6c038a7 (image 186c038a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c038a7(void)

{
  (*_DAT_1809eb348)();
  return;
}



// ===== continuation @ rva 6c03629 (image 186c03629) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c03629(void)

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



// ===== continuation @ rva 6c00111 (image 186c00111) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c00111(void)

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



// ===== continuation @ rva 6c4b6d1 (image 186c4b6d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4b6d1(void)

{
  FUN_190dd72e0();
  (*_DAT_1809f7cb8)();
  return;
}



// ===== continuation @ rva 6c4b65e (image 186c4b65e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4b65e(void)

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



// ===== continuation @ rva 6c4bb6c (image 186c4bb6c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4bb6c(void)

{
  FUN_190dd9df0();
  (*_DAT_1809f7c38)();
  return;
}



// ===== continuation @ rva 6c4baf9 (image 186c4baf9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4baf9(void)

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



// ===== continuation @ rva 6c4bf50 (image 186c4bf50) =====

void FUN_186c4bf50(void)

{
  return;
}



// ===== continuation @ rva 6c4b7ad (image 186c4b7ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4b7ad(void)

{
  FUN_190dd72e0();
  (*_DAT_1809f7c18)();
  return;
}



// ===== continuation @ rva 6c4bf5a (image 186c4bf5a) =====

void FUN_186c4bf5a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c4b9ec (image 186c4b9ec) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c4b9ec(void)

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



// ===== continuation @ rva 6c4b84d (image 186c4b84d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c4b84d(void)

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



// ===== continuation @ rva 6c4be49 (image 186c4be49) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c4be49(void)

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



// ===== continuation @ rva 6c4b8b5 (image 186c4b8b5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c4b8b5(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6c4b863 (image 186c4b863) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4b863(void)

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



// ===== continuation @ rva 6c4bce5 (image 186c4bce5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4bce5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1809f7dc8)();
  return;
}



// ===== continuation @ rva 6bfefef (image 186bfefef) =====

void FUN_186bfefef(void)

{
  return;
}



// ===== continuation @ rva 6bfba54 (image 186bfba54) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfba54(void)

{
  FUN_190ddce00();
  (*_DAT_1809e8e78)();
  return;
}



// ===== continuation @ rva 6bfeb12 (image 186bfeb12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfeb12(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1809e92a8)();
  return;
}



// ===== continuation @ rva 6bfbaab (image 186bfbaab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfbaab(void)

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



// ===== continuation @ rva 6bfe17d (image 186bfe17d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfe17d(void)

{
  FUN_190de3220();
  (*_DAT_1809e8de8)();
  return;
}



// ===== continuation @ rva 6bfe6aa (image 186bfe6aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfe6aa(void)

{
  (*_DAT_1809e8ef8)();
  return;
}



// ===== continuation @ rva 6bfe5b5 (image 186bfe5b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfe5b5(void)

{
  FUN_190dd72e0();
  (*_DAT_1809e8e98)();
  return;
}



// ===== continuation @ rva 6bfe365 (image 186bfe365) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfe365(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1809e9298)();
  return;
}



// ===== continuation @ rva 6bff063 (image 186bff063) =====

void FUN_186bff063(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6bfe7e3 (image 186bfe7e3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfe7e3(void)

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



// ===== continuation @ rva 6bfe460 (image 186bfe460) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfe460(void)

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



// ===== continuation @ rva 6c5c5e7 (image 186c5c5e7) =====

void FUN_186c5c5e7(void)

{
  return;
}



// ===== continuation @ rva 6c4c111 (image 186c4c111) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4c111(void)

{
  FUN_190ddce00();
  (*_DAT_1809f93e8)();
  return;
}



// ===== continuation @ rva 6c62eb7 (image 186c62eb7) =====

void FUN_186c62eb7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c62bc0 (image 186c62bc0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c62bc0(void)

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



// ===== continuation @ rva 6c4f544 (image 186c4f544) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4f544(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1809fcc58)();
  return;
}



// ===== continuation @ rva 6c5d8ae (image 186c5d8ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c5d8ae(void)

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



// ===== continuation @ rva 6c4ff65 (image 186c4ff65) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c4ff65(void)

{
  (*_DAT_1809fcda8)();
  return;
}



// ===== continuation @ rva 6c5a12a (image 186c5a12a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c5a12a(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1809fa7c8)();
  return;
}



// ===== continuation @ rva 6c52a3b (image 186c52a3b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c52a3b(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190de3220(in_stack_00000038,&stack0x00000048,*_DAT_18301ee50 + 0x488,*_DAT_18301ee50 + 0x490,
                0x15);
  (*_DAT_1809f8848)();
  return;
}



// ===== continuation @ rva 6c6271e (image 186c6271e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6271e(void)

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



// ===== continuation @ rva 6c62ea4 (image 186c62ea4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c62ea4(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x68))();
  (*_DAT_1809fcc78)();
  return;
}



// ===== continuation @ rva 6c5e8fe (image 186c5e8fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c5e8fe(void)

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



// ===== continuation @ rva 6c6887e (image 186c6887e) =====

void FUN_186c6887e(void)

{
  return;
}



// ===== continuation @ rva 6c630ae (image 186c630ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c630ae(void)

{
  FUN_190ddce00();
  (*_DAT_180a003f8)();
  return;
}



// ===== continuation @ rva 6c66d91 (image 186c66d91) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c66d91(void)

{
  (*_DAT_180a01808)();
  return;
}



// ===== continuation @ rva 6c69a87 (image 186c69a87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c69a87(void)

{
  (*_DAT_180a018b8)();
  return;
}



// ===== continuation @ rva 6c63537 (image 186c63537) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c63537(void)

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



// ===== continuation @ rva 6c67ac1 (image 186c67ac1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c67ac1(void)

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



// ===== continuation @ rva 6c6761d (image 186c6761d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6761d(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a01198)();
  return;
}



// ===== continuation @ rva 6c66458 (image 186c66458) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c66458(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_1809ff8a8)();
  return;
}



// ===== continuation @ rva 6c69a8f (image 186c69a8f) =====

void FUN_186c69a8f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c65e52 (image 186c65e52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c65e52(void)

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



// ===== continuation @ rva 6c6791c (image 186c6791c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6791c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_180a018b8)();
  return;
}



// ===== continuation @ rva 6c678be (image 186c678be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c678be(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a01508)();
  return;
}



// ===== continuation @ rva 6c6866b (image 186c6866b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6866b(void)

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



// ===== continuation @ rva 6c6a624 (image 186c6a624) =====

void FUN_186c6a624(void)

{
  return;
}



// ===== continuation @ rva 6c69c8a (image 186c69c8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c69c8a(void)

{
  FUN_190ddfc90();
  (*_DAT_180a01b28)();
  return;
}



// ===== continuation @ rva 6c69f11 (image 186c69f11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c69f11(void)

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



// ===== continuation @ rva 6c69ebf (image 186c69ebf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c69ebf(void)

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



// ===== continuation @ rva 6c6a4c2 (image 186c6a4c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6a4c2(void)

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



// ===== continuation @ rva 6c6a431 (image 186c6a431) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6a431(void)

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



// ===== continuation @ rva 6c69dd2 (image 186c69dd2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c69dd2(void)

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



// ===== continuation @ rva 6c69e85 (image 186c69e85) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c69e85(void)

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



// ===== continuation @ rva 6c69f6d (image 186c69f6d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c69f6d(void)

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



// ===== continuation @ rva 6c6a2b6 (image 186c6a2b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6a2b6(void)

{
  FUN_190dd72e0();
  (*_DAT_180a01b98)();
  return;
}



// ===== continuation @ rva 6c69ea9 (image 186c69ea9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c69ea9(void)

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



// ===== continuation @ rva 6c6e230 (image 186c6e230) =====

void FUN_186c6e230(void)

{
  return;
}



// ===== continuation @ rva 6c6a7b7 (image 186c6a7b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6a7b7(void)

{
  FUN_190ddce00();
  (*_DAT_180a02028)();
  return;
}



// ===== continuation @ rva 6c6f411 (image 186c6f411) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6f411(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a023e8)();
  return;
}



// ===== continuation @ rva 6c6f289 (image 186c6f289) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6f289(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_180a02338)();
  return;
}



// ===== continuation @ rva 6c6f477 (image 186c6f477) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6f477(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a024e8)();
  return;
}



// ===== continuation @ rva 6c6f2ce (image 186c6f2ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6f2ce(void)

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



// ===== continuation @ rva 6c6f7c6 (image 186c6f7c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6f7c6(void)

{
  (*_DAT_180a02b88)();
  return;
}



// ===== continuation @ rva 6c6ddeb (image 186c6ddeb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6ddeb(void)

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



// ===== continuation @ rva 6c6a80e (image 186c6a80e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6a80e(void)

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



// ===== continuation @ rva 6c6f7dc (image 186c6f7dc) =====

void FUN_186c6f7dc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c6e843 (image 186c6e843) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6e843(void)

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



// ===== continuation @ rva 6c6d90d (image 186c6d90d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c6d90d(void)

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



// ===== continuation @ rva 6c6f406 (image 186c6f406) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6f406(void)

{
  (*_DAT_180a02b58)();
  return;
}



// ===== continuation @ rva 6c72f80 (image 186c72f80) =====

void FUN_186c72f80(void)

{
  return;
}



// ===== continuation @ rva 6c6f9c7 (image 186c6f9c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c6f9c7(void)

{
  FUN_190ddce00();
  (*_DAT_180a03fc8)();
  return;
}



// ===== continuation @ rva 6c748f7 (image 186c748f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c748f7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a04408)();
  return;
}



// ===== continuation @ rva 6c7421c (image 186c7421c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c7421c(void)

{
  (*_DAT_180a04188)();
  return;
}



// ===== continuation @ rva 6c74087 (image 186c74087) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c74087(void)

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



// ===== continuation @ rva 6c72f52 (image 186c72f52) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c72f52(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a04378)();
  return;
}



// ===== continuation @ rva 6c72d2e (image 186c72d2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c72d2e(void)

{
  (*_DAT_180a03f68)();
  return;
}



// ===== continuation @ rva 6c72c62 (image 186c72c62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c72c62(void)

{
  (*_DAT_180a03f68)();
  return;
}



// ===== continuation @ rva 6c74a44 (image 186c74a44) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c74a44(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_180a03978)();
  return;
}



// ===== continuation @ rva 6c747ff (image 186c747ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c747ff(void)

{
  FUN_190de3220();
  (*_DAT_180a03838)();
  return;
}



// ===== continuation @ rva 6c784d0 (image 186c784d0) =====

void FUN_186c784d0(void)

{
  return;
}



// ===== continuation @ rva 6c74de7 (image 186c74de7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c74de7(void)

{
  FUN_190ddce00();
  (*_DAT_180a056c8)();
  return;
}



// ===== continuation @ rva 6c794e5 (image 186c794e5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c794e5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a05868)();
  return;
}



// ===== continuation @ rva 6c77eae (image 186c77eae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c77eae(void)

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



// ===== continuation @ rva 6c79514 (image 186c79514) =====

void FUN_186c79514(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c78c5c (image 186c78c5c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c78c5c(void)

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



// ===== continuation @ rva 6c77c87 (image 186c77c87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c77c87(void)

{
  undefined8 uStack0000000000000048;
  undefined8 in_stack_00000080;
  
  uStack0000000000000048 = in_stack_00000080;
  FUN_190ddfc90();
  (*_DAT_180a051c8)();
  return;
}



// ===== continuation @ rva 6c791a1 (image 186c791a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c791a1(void)

{
  FUN_190dd72e0();
  (*_DAT_180a05748)();
  return;
}



// ===== continuation @ rva 6c79124 (image 186c79124) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c79124(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_180a05478)();
  return;
}



// ===== continuation @ rva 6c77f3f (image 186c77f3f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c77f3f(void)

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



// ===== continuation @ rva 6c787e2 (image 186c787e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c787e2(void)

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



// ===== continuation @ rva 6c78819 (image 186c78819) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c78819(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180a05128)();
  return;
}



// ===== continuation @ rva 6c78616 (image 186c78616) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c78616(void)

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



// ===== continuation @ rva 6c7d0ab (image 186c7d0ab) =====

void FUN_186c7d0ab(void)

{
  return;
}



// ===== continuation @ rva 6c79737 (image 186c79737) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c79737(void)

{
  FUN_190ddce00();
  (*_DAT_180a06ca8)();
  return;
}



// ===== continuation @ rva 6c7e139 (image 186c7e139) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c7e139(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x1f8))(in_stack_00000030);
  (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  (*_DAT_180a06a28)();
  return;
}



// ===== continuation @ rva 6c7df48 (image 186c7df48) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c7df48(void)

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



// ===== continuation @ rva 6c7e16d (image 186c7e16d) =====

void FUN_186c7e16d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c7ca4b (image 186c7ca4b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c7ca4b(void)

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



// ===== continuation @ rva 6c7e11e (image 186c7e11e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c7e11e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_180a06b58)();
  return;
}



// ===== continuation @ rva 6c7d7d5 (image 186c7d7d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c7d7d5(void)

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



// ===== continuation @ rva 6c7d7f9 (image 186c7d7f9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c7d7f9(void)

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



// ===== continuation @ rva 6c7d8d6 (image 186c7d8d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c7d8d6(void)

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



// ===== continuation @ rva 6c7d759 (image 186c7d759) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c7d759(void)

{
  FUN_190dd72e0();
  (*_DAT_180a069a8)();
  return;
}



// ===== continuation @ rva 6c08a93 (image 186c08a93) =====

void FUN_186c08a93(void)

{
  return;
}



// ===== continuation @ rva 6c047e7 (image 186c047e7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c047e7(void)

{
  FUN_190ddce00();
  (*_DAT_1809ec278)();
  return;
}



// ===== continuation @ rva 6c08966 (image 186c08966) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c08966(void)

{
  FUN_190de3220();
  (*_DAT_1809ec0e8)();
  return;
}



// ===== continuation @ rva 6c099ef (image 186c099ef) =====

void FUN_186c099ef(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c09930 (image 186c09930) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c09930(void)

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



// ===== continuation @ rva 6c081fd (image 186c081fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c081fd(void)

{
  undefined8 uStack0000000000000058;
  undefined8 in_stack_00000080;
  
  uStack0000000000000058 = in_stack_00000080;
  FUN_190ddfc90();
  (*_DAT_1809ec058)();
  return;
}



// ===== continuation @ rva 6c08ef8 (image 186c08ef8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c08ef8(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1809ec3d8)();
  return;
}



// ===== continuation @ rva 6c08c4a (image 186c08c4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c08c4a(void)

{
  longlong in_RAX;
  longlong *in_stack_00000030;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000030);
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  (*_DAT_1809ebdd8)();
  return;
}



// ===== continuation @ rva 6c0487e (image 186c0487e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c0487e(void)

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



// ===== continuation @ rva 6c08a80 (image 186c08a80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c08a80(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_1809ec458)();
  return;
}



// ===== continuation @ rva 6c08a1d (image 186c08a1d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c08a1d(void)

{
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  (*_DAT_1809ebfd8)();
  return;
}



// ===== continuation @ rva 6c081cc (image 186c081cc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c081cc(void)

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



// ===== continuation @ rva 6c08178 (image 186c08178) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c08178(void)

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



// ===== continuation @ rva 6c09f7b (image 186c09f7b) =====

void FUN_186c09f7b(void)

{
  return;
}



// ===== continuation @ rva 6c09b8f (image 186c09b8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c09b8f(void)

{
  FUN_190ddfc90();
  (*_DAT_1809ed4f8)();
  return;
}



// ===== continuation @ rva 6c09f52 (image 186c09f52) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c09f52(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1809ed508)();
  return;
}



// ===== continuation @ rva 6c09d36 (image 186c09d36) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c09d36(void)

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



// ===== continuation @ rva 6c09f85 (image 186c09f85) =====

void FUN_186c09f85(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c09cb8 (image 186c09cb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c09cb8(void)

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



// ===== continuation @ rva 6c09d8a (image 186c09d8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c09d8a(void)

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



// ===== continuation @ rva 6c09cdc (image 186c09cdc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c09cdc(void)

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



// ===== continuation @ rva 6c09e4a (image 186c09e4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c09e4a(void)

{
  FUN_190dd72e0();
  (*_DAT_1809ed4b8)();
  return;
}



// ===== continuation @ rva 6c09dae (image 186c09dae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c09dae(void)

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



// ===== continuation @ rva 6c09be6 (image 186c09be6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c09be6(void)

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



// ===== continuation @ rva 6c0a1c9 (image 186c0a1c9) =====

void FUN_186c0a1c9(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(*unaff_R15 + 0x558))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(longlong **)(unaff_RBP + 0x50) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x000186c0a201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809edb50 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 6c0a176 (image 186c0a176) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186c0a1ac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186c0a176(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R15 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 6c1f87d (image 186c1f87d) =====

void FUN_186c1f87d(void)

{
  return;
}



// ===== continuation @ rva 6c1f75e (image 186c1f75e) =====

undefined8 thunk_FUN_186c0a1af(void)

{
  longlong *unaff_R15;
  
  (**(code **)(*unaff_R15 + 0x70))();
  return 0;
}



// ===== continuation @ rva 6c0b727 (image 186c0b727) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c0b727(ulonglong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong unaff_R12;
  ulonglong unaff_R14;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  uVar2 = (~param_1 + 0xc097d74f310c9f15) * ((param_2 ^ param_4) + param_3 * 2);
  uVar2 = (uVar2 | in_RAX) + (uVar2 & in_RAX);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f648 = func_0x000186c33ea0((uVar2 | 0xe5b1b8650486562d) + (uVar2 & 0xe5b1b8650486562d));
  _DAT_18315f668 =
       (_DAT_18315f668 ^ _DAT_18315f648 & 0x7fffffffffffffff) + 0xe5b1b86580a47508 ^
       0xd2f0f164a7a264a2;
  _DAT_18315f368 =
       (_DAT_18315f368 * 0x7a9535ef6208c859 ^ _DAT_18315f668) +
       (_DAT_18315f648 & 0x7fffffffffffffff);
  _DAT_18315f558 = _DAT_18315f368 ^ _DAT_18315f668;
  _DAT_18315f388 = 0xe5b1b86580a47508;
  uVar2 = (~_DAT_18315f230 + 0x71aad2250ab52b6d) *
          ((_DAT_18315f5e8 ^ 0x84222325) + (ulonglong)((uint)_DAT_18315f5e8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18315f260) + (uVar2 & _DAT_18315f260);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f138 = func_0x000186c33ea0((uVar2 | 0x71aad2258e970849) + (uVar2 & 0x71aad2258e970849));
  _DAT_18315f5f0 = (_DAT_18315f5f0 ^ _DAT_18315f138) + 0x8e552ddaf54ad494 ^ 0xe3a203942d7d2acc;
  _DAT_18315f120 = (_DAT_18315f120 * -0x1cb7c6ba95849c0f ^ _DAT_18315f5f0) + _DAT_18315f138;
  _DAT_18315f520 = _DAT_18315f120 ^ _DAT_18315f5f0;
  _DAT_18315f2d0 = 0x8e552ddaf54ad494;
  uVar2 = (~_DAT_18315f4a0 + 0x71aad2250ab52b6d) *
          ((_DAT_18315f2b0 ^ 0xffffffff7bdddcdb) + (_DAT_18315f2b0 & 0x7fffffff7bdddcdb) * 2);
  uVar2 = (uVar2 | _DAT_18315f1a8) + (uVar2 & _DAT_18315f1a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f1f8 = func_0x000186c33ea0((uVar2 | 0x8e552dda7168f7b7) + (uVar2 & 0x8e552dda7168f7b7));
  uVar2 = (_DAT_18315f1f8 ^ 0x7ffffffffffe) & 0x7fffffffffff;
  _DAT_18315f268 = _DAT_18315f178 ^ uVar2 ^ 0x71aad2250ab52b6a;
  _DAT_18315f158 = (_DAT_18315f158 ^ uVar2) + 0x71aad2250ab52b6a ^ 0x48b5eb6a3b4b2ac;
  _DAT_18315f6b8 = (_DAT_18315f6b8 * 0x279d788069613df1 ^ _DAT_18315f158) + uVar2;
  _DAT_18315f398 = _DAT_18315f6b8 ^ _DAT_18315f158;
  _DAT_18315f4d0 = 0x71aad2250ab52b6a;
  _DAT_18315f648 = func_0x000186c33ea0(_DAT_18315f630 + 0x43d46579ab6ebd12 ^ 0xb7);
  uVar2 = ~_DAT_18315f648 & 0x3fffc000000;
  _DAT_18315f330 = _DAT_18315f570 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_18315f3f0 = (_DAT_18315f3f0 ^ uVar2) - 2 ^ 0xe54b844c05fd3824;
  _DAT_18315f2c8 = (_DAT_18315f2c8 * -0x711d7b6f39ea9cd7 ^ _DAT_18315f3f0) + uVar2;
  _DAT_18315f348 = _DAT_18315f2c8 ^ _DAT_18315f3f0;
  _DAT_18315f3e0 = 0xfffffffffffffffe;
  uVar2 = (~_DAT_18315f278 + 0x72f7a46c26a36891) *
          ((_DAT_18315f4b0 ^ unaff_R14) + (ulonglong)((uint)_DAT_18315f4b0 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18315f3c0) + (uVar2 & _DAT_18315f3c0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f600 = func_0x000186c33ea0((uVar2 | 0x72f7a46ca2814bb5) + (uVar2 & 0x72f7a46ca2814bb5));
  uVar2 = _DAT_18315f600 >> 1 | _DAT_18315f600;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18315f600;
  _DAT_18315f230 = (_DAT_18315f230 ^ uVar2) + 0x8d085b93d95c9770 ^ 0xe8f70c75a2f32d46;
  _DAT_18315f3a0 = (_DAT_18315f3a0 * 0x7abde3d445b6b9a9 ^ _DAT_18315f230) + uVar2;
  _DAT_18315f460 = _DAT_18315f3a0 ^ _DAT_18315f230;
  _DAT_18315f1e0 = 0x8d085b93d95c9770;
  uVar2 = (~_DAT_18315f4c0 + 0x8d085b93d95c9771) *
          ((_DAT_18315f438 ^ 0x72f7a46ca2814bab) + (_DAT_18315f438 & 0x72f7a46ca2814bab) * 2);
  uVar2 = (uVar2 | _DAT_18315f3f0) + (uVar2 & _DAT_18315f3f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f308 = func_0x000186c33ea0((uVar2 | 0xffffffff7bdddcdb) + (uVar2 & 0xffffffff7bdddcdb));
  _DAT_18315f668 = _DAT_18315f500 ^ _DAT_18315f308 ^ 0xfffffffffffffffe;
  _DAT_18315f608 = (_DAT_18315f608 ^ _DAT_18315f308) - 2 ^ 0xff093b7d4824a9bf;
  _DAT_18315f6c8 = (_DAT_18315f6c8 * 0x4f292c6ea2c3e6d3 ^ _DAT_18315f608) + _DAT_18315f308;
  _DAT_18315f558 = _DAT_18315f6c8 ^ _DAT_18315f608;
  _DAT_18315f118 = 0xfffffffffffffffe;
  uVar2 = (~_DAT_18315f428 + 0x690703232bd2813d) *
          ((_DAT_18315f4c0 ^ unaff_R14) + (ulonglong)((uint)_DAT_18315f4c0 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18315f4b8) + (uVar2 & _DAT_18315f4b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f180 = func_0x000186c33ea0((uVar2 | 0x69070323aff0a219) + (uVar2 & 0x69070323aff0a219));
  _DAT_18315f288 = _DAT_18315f288 + 0x96f8fcdcd42d7ec4 ^ 0xbd4c0ef172f5ad8a;
  _DAT_18315f278 = _DAT_18315f2f0 * -0x6841a300cc22c65b;
  _DAT_18315f2f0 = _DAT_18315f278 ^ _DAT_18315f288;
  _DAT_18315f680 = 0x96f8fcdcd42d7ec4;
  _DAT_18315f348 = func_0x000186c33ea0(_DAT_18315f420 + 0xc44397d0e43c0e95 ^ 0x1f);
  uVar2 = _DAT_18315f348 ^ 0xfffffffffffffffe;
  _DAT_18315f610 = _DAT_18315f558 ^ uVar2 ^ 0x690703232bd2813a;
  _DAT_18315f350 = (_DAT_18315f350 ^ uVar2) + 0x690703232bd2813a ^ 0x299beb402f8db6dc;
  _DAT_18315f4e0 = (_DAT_18315f4e0 * 0x5d41d2574ffc29f7 ^ _DAT_18315f350) + uVar2;
  _DAT_18315f568 = _DAT_18315f4e0 ^ _DAT_18315f350;
  _DAT_18315f3b0 = 0x690703232bd2813a;
  uVar2 = (~_DAT_18315f408 + 0x96f8fcdcd42d7ec5) *
          ((_DAT_18315f1d0 ^ 0x69070323aff0a21f) + (_DAT_18315f1d0 & 0x69070323aff0a21f) * 2);
  uVar2 = (uVar2 | _DAT_18315f3b8) + (uVar2 & _DAT_18315f3b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f5a8 = func_0x000186c33ea0((uVar2 | 0xffffffff7bdddcdb) + (uVar2 & 0xffffffff7bdddcdb));
  _DAT_18315f488 = _DAT_18315f5a8 ^ 0x96aee35be7f77c68;
  uVar2 = _DAT_18315f488 >> 1 | _DAT_18315f488;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_18315f488 =
       (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
       _DAT_18315f488;
  _DAT_18315f120 = (_DAT_18315f120 ^ _DAT_18315f488) - 2 ^ 0xa486c4c124136919;
  _DAT_18315f488 =
       ((_DAT_18315f3d8 ^ _DAT_18315f488 ^ 0xfffffffffffffffe) * 0x1a13c93053ed60c3 ^ _DAT_18315f120
       ) + _DAT_18315f488;
  _DAT_18315f2b0 = _DAT_18315f488 ^ _DAT_18315f120;
  _DAT_18315f258 = 0xfffffffffffffffe;
  uVar2 = (_DAT_18315f610 ^ _DAT_1809ee710) + _DAT_18315f570 + 0xf47fcf2d59898a18;
  uVar5 = (_DAT_18315f570 ^ _UNK_1809ee718) + _DAT_18315f610 + 0xe5b1b86580a47508;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f610 ^ _DAT_1809ee710;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18315f570 ^ _UNK_1809ee718;
  _DAT_18315f5d0 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f610 + 0xe5b1b86580a47508) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18315f570 + 0xf47fcf2d59898a18));
  uVar2 = (_DAT_18315f5d0 ^ 0xf47fcf2dddaba800) & 0xfffffffffffff800;
  _DAT_18315f510 = _DAT_18315f230 ^ uVar2 ^ 0xda3187935e501e45;
  _DAT_18315f1a0 = (_DAT_18315f1a0 ^ uVar2) + 0xda3187935e501e45 ^ 0x79b12155c8542bfc;
  _DAT_18315f608 = (_DAT_18315f608 * 0x641933a3fb50fe23 ^ _DAT_18315f1a0) + uVar2;
  _DAT_18315f4a8 = _DAT_18315f608 ^ _DAT_18315f1a0;
  _DAT_18315f110 = 0xda3187935e501e45;
  _DAT_18315f568 = func_0x000186c33ea0(_DAT_18315f1f8 + 0xb89b42d8f02914f0 ^ 0xd8);
  _DAT_18315f5f8 =
       (_DAT_18315f5f8 ^ _DAT_18315f568 ^ 0x2070e3664cca2ae8) + 0x11ce77485d0fdc35 ^
       0x72bd0ee7ba727d77;
  _DAT_18315f328 =
       (_DAT_18315f328 * -0x338537169b115761 ^ _DAT_18315f5f8) +
       (_DAT_18315f568 ^ 0x2070e3664cca2ae8);
  _DAT_18315f4a8 = _DAT_18315f328 ^ _DAT_18315f5f8;
  _DAT_18315f198 = 0x11ce77485d0fdc35;
  _DAT_18315f1e8 = func_0x000186c33ea0(_DAT_18315f548 + 0x3725ca48f010d4ee ^ 0x44);
  _DAT_18315f690 =
       (_DAT_18315f690 ^ _DAT_18315f1e8 ^ 0x180304000045400) + 0xe431882580a02108 ^
       0x97b7fb385a1960b5;
  _DAT_18315f6d8 =
       (_DAT_18315f6d8 * 0x3d6d1ebd4cea793f ^ _DAT_18315f690) + (_DAT_18315f1e8 ^ 0x180304000045400)
  ;
  _DAT_18315f450 = _DAT_18315f6d8 ^ _DAT_18315f690;
  _DAT_18315f580 = 0xe431882580a02108;
  uVar2 = (~_DAT_18315f2d0 + 0xc863104b01404211) *
          ((_DAT_18315f590 ^ 0x11ce7748d92dff10) + (_DAT_18315f590 & 0x11ce7748d92dff10) * 2);
  uVar2 = (uVar2 | _DAT_18315f310) + (uVar2 & _DAT_18315f310);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f4f0 = func_0x000186c33ea0((uVar2 | 0xd9ad6703d86dbd00) + (uVar2 & 0xd9ad6703d86dbd00));
  uVar2 = _DAT_18315f4f0 << 0x1a | _DAT_18315f4f0 >> 0x26;
  _DAT_18315f6f0 = _DAT_18315f258 ^ uVar2 ^ 0xda3187935e501e45;
  _DAT_18315f1a0 = (_DAT_18315f1a0 ^ uVar2) + 0xda3187935e501e45 ^ 0x5d5141d17be93f83;
  _DAT_18315f270 = (_DAT_18315f270 * -0x2d855f1168b7690b ^ _DAT_18315f1a0) + uVar2;
  _DAT_18315f200 = _DAT_18315f270 ^ _DAT_18315f1a0;
  _DAT_18315f290 = 0xda3187935e501e45;
  uVar2 = (_DAT_18315f4a8 ^ _DAT_1809ee720) + 0xb4630f2738c25ba5;
  uVar5 = (_UNK_1809ee728 ^ 0xda3187935e501e45) + _DAT_18315f4a8 + 0xda3187935e501e45;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f4a8 ^ _DAT_1809ee720;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _UNK_1809ee728 ^ 0xda3187935e501e45;
  _DAT_18315f250 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f4a8 + 0xda3187935e501e45) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) + 0x4b9cf0d8c73da45b);
  _DAT_18315f1d0 =
       (_DAT_18315f250 ^ 0xd18788b9ab43e99) << 7 | (_DAT_18315f250 ^ 0xd18788b9ab43e99) >> 0x39;
  _DAT_18315f580 = _DAT_18315f580 ^ _DAT_18315f1d0 ^ 0xaf3b442bc1d9c197;
  _DAT_18315f630 = (_DAT_18315f630 * -0x12b12c317047d769 ^ _DAT_18315f580) + _DAT_18315f1d0;
  _DAT_18315f640 = _DAT_18315f630 ^ _DAT_18315f580;
  _DAT_18315f6b0 = 0;
  uVar2 = ~_DAT_18315f130 *
          ((_DAT_18315f6f8 ^ 0xf47fcf2d59898a18) + (_DAT_18315f6f8 & 0x747fcf2d59898a18) * 2);
  uVar2 = (uVar2 | _DAT_18315f340) + (uVar2 & _DAT_18315f340);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f110 = func_0x000186c33ea0((uVar2 | 0xb8030d2a67675e7) + (uVar2 & 0xb8030d2a67675e7));
  _DAT_18315f5e0 =
       (_DAT_18315f5e0 ^ _DAT_18315f110 ^ 0xf47fcf2dddaba93d) + 0xb8030d2225456c2 ^
       0xefc25ae8da015f65;
  _DAT_18315f3a0 =
       (_DAT_18315f3a0 * -0x3ef1f46541057087 ^ _DAT_18315f5e0) +
       (_DAT_18315f110 ^ 0xf47fcf2dddaba93d);
  _DAT_18315f560 = _DAT_18315f3a0 ^ _DAT_18315f5e0;
  _DAT_18315f4f0 = 0xb8030d2225456c2;
  _DAT_18315f588 = func_0x000186c33ea0(_DAT_18315f550 + 0xc1b3d4fad4974b18 ^ 0x4b);
  _DAT_18315f1d8 = _DAT_18315f650 ^ _DAT_18315f588 ^ 0xfffffffffffffffe;
  _DAT_18315f268 = (_DAT_18315f268 ^ _DAT_18315f588) - 2 ^ 0x1aec927d6d969d90;
  _DAT_18315f288 = (_DAT_18315f288 * 0x1a53ce55c31b1b3b ^ _DAT_18315f268) + _DAT_18315f588;
  _DAT_18315f2d0 = _DAT_18315f288 ^ _DAT_18315f268;
  _DAT_18315f1b0 = 0xfffffffffffffffe;
  uVar2 = (_DAT_18315f678 ^ _DAT_1809ee730) + _DAT_18315f5c8 + 0xf4564f04dc28aa1c;
  uVar5 = (_DAT_18315f5c8 ^ _UNK_1809ee738) + _DAT_18315f678 + 0xf4564f04580a8939;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f678 ^ _DAT_1809ee730;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18315f5c8 ^ _UNK_1809ee738;
  _DAT_18315f218 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f678 + 0xf4564f04580a8939) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18315f5c8 + 0xf4564f04dc28aa1c));
  _DAT_18315f360 = _DAT_18315f360 ^ _DAT_18315f218 ^ 0xf76d9a6321597657;
  _DAT_18315f5d8 = (_DAT_18315f5d8 * -0x50d83bf0003edab5 ^ _DAT_18315f360) + _DAT_18315f218;
  _DAT_18315f460 = _DAT_18315f5d8 ^ _DAT_18315f360;
  _DAT_18315f630 = 0;
  uVar2 = (_DAT_18315f160 ^ 0xffffffff7bdddcdb) + (_DAT_18315f108 - 0x84222325);
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f160 ^ 0xffffffff7bdddcdb;
  uVar5 = ((_DAT_18315f108 + _DAT_18315f160) * 0x2000 | _DAT_18315f108 + _DAT_18315f160 >> 0x33) ^
          _DAT_18315f108;
  _DAT_18315f3b8 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_18315f160 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18315f108 - 0x84222325));
  uVar2 = _DAT_18315f3b8 ^ 0xfffffffffffffffe;
  _DAT_18315f3d0 = _DAT_18315f5b0 ^ uVar2 ^ 0xfffffffffffffffe;
  _DAT_18315f600 = (_DAT_18315f600 ^ uVar2) - 2 ^ 0xa1ddea60fcd27113;
  _DAT_18315f488 = (_DAT_18315f488 * 0x24bc1f4c5a621ab7 ^ _DAT_18315f600) + uVar2;
  _DAT_18315f118 = _DAT_18315f488 ^ _DAT_18315f600;
  _DAT_18315f1d0 = 0xfffffffffffffffe;
  uVar2 = unaff_R12 ^ unaff_R14 ^ _DAT_18315f4d8;
  lVar3 = (unaff_R12 ^ unaff_R14) + _DAT_18315f508;
  uVar5 = uVar2 + lVar3;
  uVar7 = (_DAT_18315f508 ^ 0xfffffffffffffffe) + (_DAT_18315f4d8 - 2);
  uVar2 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar2;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18315f508 ^ 0xfffffffffffffffe;
  _DAT_18315f538 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f4d8 - 2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  uVar2 = _DAT_18315f538 ^ unaff_R12;
  uVar4 = (uint)(unaff_R12 >> 0x20);
  auVar10._8_4_ = (uint)unaff_R12;
  auVar10._0_8_ = unaff_R12;
  auVar10._12_4_ = uVar4;
  uVar8 = (uint)unaff_R12 | (uint)DAT_1800b8c60;
  uVar9 = SUB164(auVar10 & _DAT_1800b8c60,0);
  uVar5 = SUB168(auVar10 & _DAT_1800b8c60,0);
  uVar6 = SUB164(_DAT_1800b8c60 ^ auVar10,0);
  uVar7 = SUB168(_DAT_1800b8c60 ^ auVar10,0);
  uVar7 = (ulonglong)_DAT_1809ee7b0 * (ulonglong)uVar6 +
          ((ulonglong)_DAT_1809ee7c0 * (ulonglong)uVar6 +
           (uVar7 >> 0x20) * (ulonglong)_DAT_1809ee7b0 << 0x20) +
          ((ulonglong)uVar8 * (ulonglong)_DAT_1809ee790 + _DAT_1809ee7a0 << 0x20) +
          (ulonglong)_DAT_1809ee780 * (ulonglong)uVar8 +
          (ulonglong)_DAT_1809ee760 * (ulonglong)uVar9 +
          ((ulonglong)_DAT_1809ee770 * (ulonglong)uVar9 +
           (uVar5 >> 0x20) * (ulonglong)_DAT_1809ee760 << 0x20) +
          ((ulonglong)_DAT_1809ee750 * (unaff_R12 & 0xffffffff) +
           (ulonglong)_DAT_1809ee740 * (ulonglong)uVar4 << 0x20) +
          (unaff_R12 & 0xffffffff) * (ulonglong)_DAT_1809ee740 +
          (-((ulonglong)uVar6 * (ulonglong)_DAT_1809ee830 +
            ((ulonglong)_DAT_1809ee840 * (ulonglong)uVar6 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_1809ee830 << 0x20)) -
          ((ulonglong)uVar9 * (ulonglong)_DAT_1809ee810 +
           ((ulonglong)_DAT_1809ee820 * (ulonglong)uVar9 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_1809ee810 << 0x20) +
          ((unaff_R12 & 0xffffffff) * (ulonglong)_DAT_1809ee800 +
           (unaff_R12 >> 0x20) * (ulonglong)_DAT_1809ee7f0 << 0x20) +
          (unaff_R12 & 0xffffffff) * (ulonglong)_DAT_1809ee7f0)) + 0x7dedcae123efe7a6;
  _DAT_18315f428 = _DAT_18315f690 ^ uVar2 ^ uVar7;
  _DAT_18315f1f0 = (_DAT_18315f1f0 ^ uVar2) + uVar7 ^ 0x41b8cc3b498013d8;
  _DAT_18315f3c8 = (_DAT_18315f3c8 * 0x77c7714b2303e0b7 ^ _DAT_18315f1f0) + uVar2;
  _DAT_18315f178 = _DAT_18315f3c8 ^ _DAT_18315f1f0;
  _DAT_18315f588 = uVar7;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar7) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  lVar1 = _DAT_18315f6d0 + 0xc68cc6b516c9a3b7;
  lVar3 = _DAT_18315f460 + 0x7e61376a2ecdba9;
  uVar2 = (_DAT_18315f460 ^ _DAT_1809ee850) + lVar1;
  uVar5 = (_DAT_18315f6d0 ^ _UNK_1809ee858) + lVar3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f460 ^ _DAT_1809ee850;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18315f6d0 ^ _UNK_1809ee858;
  *(ulonglong *)(unaff_RBP + 0x70) = uVar7 + unaff_RBP + -0x50;
  _DAT_18315f470 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - lVar3 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar1);
  _DAT_18315f1f0 = (_DAT_18315f1f0 ^ _DAT_18315f470) + 0xc7eed7f7b2efdbbb ^ 0x84b621f6c099ffa3;
  _DAT_18315f510 = (_DAT_18315f510 * 0x19c75a2bed2e1e6b ^ _DAT_18315f1f0) + _DAT_18315f470;
  _DAT_18315f248 = _DAT_18315f510 ^ _DAT_18315f1f0;
  _DAT_18315f430 = 0xc7eed7f7b2efdbbb;
  uVar2 = (~_DAT_18315f3f8 + 0xb32d34fd5b058b37) *
          ((_DAT_18315f4d8 ^ 0x56887066f30e5f1e) + (_DAT_18315f4d8 & 0x56887066f30e5f1e) * 2);
  uVar2 = (uVar2 | _DAT_18315f1d0) + (uVar2 & _DAT_18315f1d0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f3b0 = func_0x000186c33ea0((uVar2 | 0xe5a5449ba80bd428) + (uVar2 & 0xe5a5449ba80bd428));
  _DAT_18315f188 =
       (_DAT_18315f188 ^ ~_DAT_18315f3b0 & 0x56887066772c7c3b) + 0xe5a5449b2c29f70d ^
       0x152a0d5253a0a557;
  _DAT_18315f3b8 =
       (_DAT_18315f3b8 * -0x6331d35036e4bb91 ^ _DAT_18315f188) +
       (~_DAT_18315f3b0 & 0x56887066772c7c3b);
  _DAT_18315f5f0 = _DAT_18315f3b8 ^ _DAT_18315f188;
  _DAT_18315f3e0 = 0xe5a5449b2c29f70d;
  uVar2 = (~_DAT_18315f358 + 0xe020c8eed018a371) *
          ((_DAT_18315f1a0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18315f1a0 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18315f4b0) + (uVar2 & _DAT_18315f4b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f420 = func_0x000186c33ea0((uVar2 | 0xe020c8ee543a8055) + (uVar2 & 0xe020c8ee543a8055));
  uVar2 = (_DAT_18315f420 ^ 0xe020c8eed018a370) << 1 |
          (ulonglong)((longlong)(_DAT_18315f420 ^ 0xe020c8eed018a370) < 0);
  _DAT_18315f630 = (_DAT_18315f630 ^ uVar2) + 0x1fdf37112fe75c90 ^ 0x6c33e360f58bff54;
  _DAT_18315f1a0 = (_DAT_18315f1a0 * -0x6c5b64a1a2e93ecb ^ _DAT_18315f630) + uVar2;
  _DAT_18315f448 = _DAT_18315f1a0 ^ _DAT_18315f630;
  _DAT_18315f130 = 0x1fdf37112fe75c90;
  uVar2 = (~_DAT_18315f208 + 0xe020c8eed018a371) *
          ((_DAT_18315f660 ^ 0x84222330) + (ulonglong)((uint)_DAT_18315f660 & 0x84222330) * 2);
  uVar2 = (uVar2 | _DAT_18315f548) + (uVar2 & _DAT_18315f548);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f598 = func_0x000186c33ea0((uVar2 | 0xe020c8ee543a8040) + (uVar2 & 0xe020c8ee543a8040));
  uVar2 = _DAT_18315f598 & 0xffffffffe0000000;
  _DAT_18315f238 = _DAT_18315f4b0 ^ uVar2 ^ 0xe020c8eed018a385;
  _DAT_18315f498 = (_DAT_18315f498 ^ uVar2) + 0xe020c8eed018a385 ^ 0xed3b5d1908c57991;
  _DAT_18315f218 = (_DAT_18315f218 * -0xe02f9dc0fd58639 ^ _DAT_18315f498) + uVar2;
  _DAT_18315f1f8 = _DAT_18315f218 ^ _DAT_18315f498;
  _DAT_18315f648 = 0xe020c8eed018a385;
  uVar2 = (~_DAT_18315f3b0 + 0x1fdf37112fe75c91) *
          ((_DAT_18315f2e0 ^ 0xe020c8ee543a80a0) + (_DAT_18315f2e0 & 0x6020c8ee543a80a0) * 2);
  uVar2 = (uVar2 | _DAT_18315f3b0) + (uVar2 & _DAT_18315f3b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f150 = func_0x000186c33ea0((uVar2 | 0xffffffff7bdddc30) + (uVar2 & 0xffffffff7bdddc30));
  uVar2 = ~_DAT_18315f150 & 0x6020c8eed018a385;
  _DAT_18315f470 = _DAT_18315f1b0 ^ uVar2 ^ 0x15;
  _DAT_18315f280 = (_DAT_18315f180 ^ uVar2) + 0x15 ^ 0x3a8a7883ec865ae0;
  _DAT_18315f338 = (_DAT_18315f338 * 0x20e0c7cee4db9155 ^ _DAT_18315f280) + uVar2;
  _DAT_18315f280 = _DAT_18315f338 ^ _DAT_18315f280;
  _DAT_18315f180 = 0x15;
  uVar2 = (~_DAT_18315f438 + 0x83766bb230cfe659) *
          ((_DAT_18315f1b0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18315f1b0 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_18315f6d0) + (uVar2 & _DAT_18315f6d0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x000186c33ea0((uVar2 | 0x83766bb2b4edc57d) + (uVar2 & 0x83766bb2b4edc57d));
  uVar5 = uVar2 << 0x31 | (uVar2 & 0x3ffffffffffffff) >> 0xf;
  _DAT_18315f128 = (uVar2 ^ uVar5) + 0x7c89944dcf3019a8 ^ 0x5dfad5f628e397e8;
  _DAT_18315f6d8 = (_DAT_18315f6d8 * 0x2fa94baee860729 ^ _DAT_18315f128) + uVar5;
  _DAT_18315f450 = _DAT_18315f6d8 ^ _DAT_18315f128;
  _DAT_18315f170 = 0x7c89944dcf3019a8;
  uVar2 = (_DAT_18315f438 ^ _DAT_1809ee860) + _DAT_18315f158 + 0x84222330;
  uVar5 = (_DAT_18315f158 ^ _UNK_1809ee868) + _DAT_18315f438 + 0x83766bb230cfe658;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f438 ^ _DAT_1809ee860;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18315f158 ^ _UNK_1809ee868;
  _DAT_18315f450 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f438 + 0x83766bb230cfe658) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18315f158 + 0x84222330));
  uVar2 = _DAT_18315f450 ^ 0x15;
  _DAT_18315f4b0 = _DAT_18315f3e8 ^ uVar2 ^ 0x83766bb230cfe66d;
  _DAT_18315f560 = (_DAT_18315f320 ^ uVar2) + 0x83766bb230cfe66d;
  _DAT_18315f320 = _DAT_18315f560 ^ 0x2ec15981de41a92c;
  _DAT_18315f5c8 = (_DAT_18315f5c8 * -0x449c6586c11860eb ^ _DAT_18315f320) + uVar2 ^ _DAT_18315f320;
  _DAT_18315f560 = _DAT_18315f560 ^ 0xadb73233ee8e4f41;
  _DAT_18315f230 = 0x83766bb230cfe66d;
  uVar2 = (~_DAT_18315f628 + 0x7c89944dcf3019a9) *
          ((_DAT_18315f678 ^ 0x83766bb2b4edc548) + (_DAT_18315f678 & 0x3766bb2b4edc548) * 2);
  uVar2 = (uVar2 | _DAT_18315f570) + (uVar2 & _DAT_18315f570);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f140 = func_0x000186c33ea0((uVar2 | 0xffffffff7bdddce0) + (uVar2 & 0xffffffff7bdddce0));
  uVar2 = _DAT_18315f140 ^ 0x7c89944dcf3019a8;
  _DAT_18315f610 = _DAT_18315f588 ^ uVar2 ^ 0x15;
  _DAT_18315f230 = (_DAT_18315f230 ^ uVar2) + 0x15 ^ 0xd9e8adc793de64e0;
  _DAT_18315f378 = (_DAT_18315f378 * -0x477f303e30f238f7 ^ _DAT_18315f230) + uVar2;
  _DAT_18315f2d0 = _DAT_18315f378 ^ _DAT_18315f230;
  _DAT_18315f510 = _DAT_18315f328 ^ 0x15;
  _DAT_18315f298 = 0x15;
  uVar2 = (_DAT_18315f550 ^ _DAT_1809ee870) + _DAT_18315f460 + 0x84222325;
  uVar5 = (_DAT_18315f460 ^ _UNK_1809ee878) + _DAT_18315f550 + 0xd22dc3528e437c5e;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f550 ^ _DAT_1809ee870;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18315f460 ^ _UNK_1809ee878;
  _DAT_18315f438 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f550 + 0xd22dc3528e437c5e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18315f460 + 0x84222325));
  _DAT_18315f5b0 =
       (_DAT_18315f5b0 ^ _DAT_18315f438 & 0x7fffffffffffffff) + 0x2dd23cad71bc83a2 ^
       0x8561694155153169;
  _DAT_18315f170 =
       (_DAT_18315f170 * 0x4de2ef17b77bc2ed ^ _DAT_18315f5b0) +
       (_DAT_18315f438 & 0x7fffffffffffffff);
  _DAT_18315f2e8 = _DAT_18315f170 ^ _DAT_18315f5b0;
  _DAT_18315f308 = 0x2dd23cad71bc83a2;
  uVar2 = (_DAT_18315f360 ^ _DAT_1809ee880) + _DAT_18315f3b0 + 0x84222330;
  uVar5 = (_DAT_18315f3b0 ^ _UNK_1809ee888) + _DAT_18315f360 + 0xd22dc3528e437c5e;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f360 ^ _DAT_1809ee880;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18315f3b0 ^ _UNK_1809ee888;
  _DAT_18315f388 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f360 + 0xd22dc3528e437c5e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18315f3b0 + 0x84222330));
  uVar2 = (ulonglong)((~(uint)_DAT_18315f388 & 0x15) << 4);
  _DAT_18315f418 = _DAT_18315f2c8 ^ uVar2 ^ 0xd22dc3528e437c73;
  _DAT_18315f5e8 = (_DAT_18315f5e8 ^ uVar2) + 0xd22dc3528e437c73 ^ 0x8663b783271f8880;
  _DAT_18315f660 = (_DAT_18315f660 * 0x59475b6d4f9b696f ^ _DAT_18315f5e8) + uVar2;
  _DAT_18315f478 = _DAT_18315f660 ^ _DAT_18315f5e8;
  _DAT_18315f450 = 0xd22dc3528e437c73;
  uVar2 = (_DAT_18315f680 ^ _DAT_1809ee890) + _DAT_18315f498 + 0xd22dc3520a615f56;
  uVar5 = (_DAT_18315f498 ^ _UNK_1809ee898) + _DAT_18315f680 + 0x2dd23cad71bc83a2;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f680 ^ _DAT_1809ee890;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18315f498 ^ _UNK_1809ee898;
  _DAT_18315f3c0 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f680 + 0x2dd23cad71bc83a2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18315f498 + 0xd22dc3520a615f56));
  uVar2 = _DAT_18315f3c0 ^ 0xfffffffffffffff3;
  _DAT_18315f530 = _DAT_18315f118 ^ uVar2 ^ 0x15;
  _DAT_18315f378 = (_DAT_18315f378 ^ uVar2) + 0x15 ^ 0x5517d3369528f020;
  _DAT_18315f590 = (_DAT_18315f590 * -0x783e053d51eb6f9 ^ _DAT_18315f378) + uVar2 ^ _DAT_18315f378;
  _DAT_18315f3d8 = 0x15;
  uVar2 = (~_DAT_18315f150 + 0xe5a5449b2c29f70e) *
          ((_DAT_18315f338 ^ 0xc7eed7f736cdf89e) + (_DAT_18315f338 & 0x47eed7f736cdf89e) * 2);
  uVar2 = (uVar2 | _DAT_18315f240) + (uVar2 & _DAT_18315f240);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f428 = func_0x000186c33ea0((uVar2 | 0x224b936c1ae40f93) + (uVar2 & 0x224b936c1ae40f93));
  _DAT_18315f4e8 = _DAT_18315f588 ^ _DAT_18315f428 ^ 0xad941c92df19d2c8;
  _DAT_18315f160 = (_DAT_18315f160 ^ _DAT_18315f428) + 0xad941c92df19d2c8 ^ 0xdbb715cde597fef3;
  _DAT_18315f2a8 = (_DAT_18315f2a8 * -0x3e3240c398612b3d ^ _DAT_18315f160) + _DAT_18315f428;
  _DAT_18315f3f8 = _DAT_18315f2a8 ^ _DAT_18315f160;
  _DAT_18315f288 = 0xad941c92df19d2c8;
  _DAT_18315f308 = func_0x000186c33ea0(_DAT_18315f678 + 0xd3f8b5198c92dc21 ^ 0x37);
  _DAT_18315f488 = (_DAT_18315f488 ^ _DAT_18315f3c8) + 0xc5a444932029d309 ^ 0x5860738c2f05dd07;
  _DAT_18315f688 = (_DAT_18315f688 * 0x2f19be9a1abb0461 ^ _DAT_18315f488) + _DAT_18315f3c8;
  _DAT_18315f4b8 = _DAT_18315f688 ^ _DAT_18315f488;
  _DAT_18315f188 = 0xc5a444932029d309;
  uVar2 = (~_DAT_18315f170 + 0x8b4889264053a613) *
          ((_DAT_18315f370 ^ 0x224b936c1ae40f93) + (_DAT_18315f370 & 0x224b936c1ae40f93) * 2);
  uVar2 = (uVar2 | _DAT_18315f210) + (uVar2 & _DAT_18315f210);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f1f8 = func_0x000186c33ea0((uVar2 | 0xa9031a4a5ab7a981) + (uVar2 & 0xa9031a4a5ab7a981));
  uVar2 = _DAT_18315f1f8 ^ 0x224b936c9ec62cb6;
  _DAT_18315f6a0 = _DAT_18315f288 ^ uVar2 ^ 0xad941c92df19d2c8;
  _DAT_18315f5a8 = (_DAT_18315f5a8 ^ uVar2) + 0xad941c92df19d2c8 ^ 0xe095fbc814fa8efa;
  _DAT_18315f660 = (_DAT_18315f660 * 0x6dbf76ee46f3bbc9 ^ _DAT_18315f5a8) + uVar2;
  _DAT_18315f1c0 = _DAT_18315f660 ^ _DAT_18315f5a8;
  _DAT_18315f5c8 = 0xad941c92df19d2c8;
  uVar2 = (~_DAT_18315f6d0 + 0xad941c92df19d2c9) *
          ((_DAT_18315f110 ^ 0xad941c925b3bf1ed) + (_DAT_18315f110 & 0x2d941c925b3bf1ed) * 2);
  uVar2 = (uVar2 | _DAT_18315f590) + (uVar2 & _DAT_18315f590);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f618 = func_0x000186c33ea0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar2 = _DAT_18315f618 >> 1 | _DAT_18315f618;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_18315f388 =
       (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
       _DAT_18315f618;
  uVar2 = _DAT_18315f388 - (_DAT_18315f388 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_18315f388 =
       (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
       _DAT_18315f388;
  _DAT_18315f3b8 = _DAT_18315f3b8 ^ _DAT_18315f388 ^ 0x9f86ecbdd310a304;
  _DAT_18315f308 = (_DAT_18315f308 * 0x41253592e8f0f8e1 ^ _DAT_18315f3b8) + _DAT_18315f388;
  _DAT_18315f180 = _DAT_18315f308 ^ _DAT_18315f3b8;
  _DAT_18315f398 = 0;
  uVar2 = ((_DAT_18315f3a8 ^ 0x84222330) + (ulonglong)((uint)_DAT_18315f3a8 & 0x84222330) * 2) *
          -_DAT_18315f1b8;
  uVar2 = (uVar2 | _DAT_18315f198) + (uVar2 & _DAT_18315f198);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f4d8 = func_0x000186c33ea0((uVar2 | 0x84222330) + (ulonglong)((uint)uVar2 & 0x84222330))
  ;
  uVar2 = (ulonglong)(~(uint)_DAT_18315f4d8 & 0x15) ^ 0x15;
  _DAT_18315f1c0 = _DAT_18315f228 ^ uVar2 ^ 0x15;
  _DAT_18315f478 = (_DAT_18315f478 ^ uVar2) + 0x15 ^ 0x8ec18ff58cf28260;
  _DAT_18315f470 = (_DAT_18315f470 * 0x6b0603ea5812c151 ^ _DAT_18315f478) + uVar2 ^ _DAT_18315f478;
  _DAT_18315f510 = 0x15;
  uVar2 = (_DAT_18315f298 ^ _DAT_1809ee8a0) + _DAT_18315f548 + 0xc7eed7f736cdf89e;
  uVar5 = (_DAT_18315f548 ^ _UNK_1809ee8a8) + (_DAT_18315f298 - 1);
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18315f298 ^ _DAT_1809ee8a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18315f548 ^ _UNK_1809ee8a8;
  _DAT_18315f470 =
       func_0x000186c33ea0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18315f298 - 1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18315f548 + 0xc7eed7f736cdf89e));
  _DAT_18315f698 =
       (_DAT_18315f698 ^ _DAT_18315f470 & 0x7fffffffffffffff) + 0x381128084d102444 ^
       0x1a4c0dd2c7d2e29f;
  _DAT_18315f6a8 =
       (_DAT_18315f6a8 * 0x2b9fbb283f52630b ^ _DAT_18315f698) +
       (_DAT_18315f470 & 0x7fffffffffffffff);
  _DAT_18315f448 = _DAT_18315f6a8 ^ _DAT_18315f698;
  _DAT_18315f250 = 0x381128084d102444;
  _DAT_18315f368 = func_0x000186c33ea0(_DAT_18315f130 + 0x1f0083f0001dff ^ 0xb7);
  _DAT_18315f1e8 = _DAT_18315f3a0 ^ _DAT_18315f368 ^ 0x15;
  _DAT_18315f148 = (_DAT_18315f148 ^ _DAT_18315f368) + 0x15 ^ 0x3b819b2725886880;
  _DAT_18315f408 = (_DAT_18315f408 * 0x5f9365fb623e3b87 ^ _DAT_18315f148) + _DAT_18315f368;
  _DAT_18315f498 = _DAT_18315f408 ^ _DAT_18315f148;
  _DAT_18315f4d8 = 0x15;
  switch(uVar7 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6c1f629 (image 186c1f629) =====

undefined8 FUN_186c1f629(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 6c1f9d2 (image 186c1f9d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c1f9d2(longlong param_1)

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



// ===== continuation @ rva 6c1509b (image 186c1509b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c1509b(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar5;
  ulonglong unaff_R13;
  longlong *unaff_R15;
  
  *(undefined4 *)(unaff_RBP + 0xc0) = unaff_ESI;
  lVar2 = (**(code **)(*unaff_R15 + 0x6f0))();
  *(int *)(unaff_RBP + 0x98) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0xa0));
  (**(code **)(*unaff_R15 + 0x6f8))();
  uVar1 = *(uint *)(unaff_RBP + 0x90);
  uVar5 = *(uint *)(unaff_RBP + 0x98);
  uVar3 = uVar5 ^ unaff_R13;
  uVar4 = uVar3 ^ uVar1;
  uVar3 = ((_DAT_18315f460 ^ uVar3) + (ulonglong)((uint)_DAT_18315f460 & (uint)uVar3) * 2) *
          ((ulonglong)uVar1 - _DAT_18315f508);
  uVar3 = (uVar3 | _DAT_18315f3b0) + (uVar3 & _DAT_18315f3b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18315f628 = func_0x000186c33ea0((uVar4 | uVar3) + (ulonglong)((uint)uVar4 & (uint)uVar3));
  uVar3 = ~_DAT_18315f628 & (ulonglong)uVar5;
  uVar5 = uVar5 & uVar1;
  _DAT_18315f2f8 = (ulonglong)uVar5;
  _DAT_18315f3a0 = (_DAT_18315f3a0 ^ uVar3) + _DAT_18315f2f8 ^ 0xbe78ce2b51fc1a51;
  _DAT_18315f1c0 = (_DAT_18315f1c0 * -0x58a6c3a79cfea2ad ^ _DAT_18315f3a0) + uVar3;
  _DAT_18315f638 = _DAT_18315f1c0 ^ _DAT_18315f3a0;
  *(uint *)(unaff_RBP + 0x90) = uVar5;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(int *)(unaff_RBP + 0x70) = (int)*(undefined8 *)(unaff_RBP + 0x90);
  uVar3 = (~_DAT_18315f6d0 + 0x7651dd81) *
          ((_DAT_18315f290 ^ unaff_R13) + (ulonglong)((uint)_DAT_18315f290 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_18315f648) + (uVar3 & _DAT_18315f648);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18315f360 = func_0x000186c33ea0((uVar3 | 0xf273fea5) + (ulonglong)((uint)uVar3 & 0xf273fea5))
  ;
  _DAT_18315f5a0 = (_DAT_18315f5a0 ^ _DAT_18315f360) - 0x7651dd80 ^ 0x573a8e88657ccecd;
  _DAT_18315f3d0 = (_DAT_18315f3d0 * -0x53e49921e0b9f12b ^ _DAT_18315f5a0) + _DAT_18315f360;
  _DAT_18315f4f8 = _DAT_18315f3d0 ^ _DAT_18315f5a0;
  _DAT_18315f690 = 0x89ae2280;
  uVar3 = (_DAT_18315f1d8 ^ _DAT_1809edf40) + _DAT_18315f120 + 0x8422239a;
  uVar4 = (_DAT_18315f120 ^ _UNK_1809edf48) + _DAT_18315f1d8 + 0x7651dd80;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18315f1d8 ^ _DAT_1809edf40;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18315f120 ^ _UNK_1809edf48;
  _DAT_18315f498 =
       func_0x000186c33ea0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18315f1d8 + 0x7651dd80) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18315f120 + 0x8422239a));
  uVar3 = _DAT_18315f498 ^ 0x7651ddbf;
  _DAT_18315f350 = _DAT_18315f440 ^ uVar3 ^ 0x7651de3f;
  _DAT_18315f690 = (_DAT_18315f690 ^ uVar3) + 0x7651de3f ^ 0x4dd8891fc69e0a5f;
  _DAT_18315f3e8 = (_DAT_18315f3e8 * -0x557e71039a338af3 ^ _DAT_18315f690) + uVar3;
  _DAT_18315f578 = _DAT_18315f3e8 ^ _DAT_18315f690;
  _DAT_18315f438 = 0x7651de3f;
  _DAT_18315f118 = func_0x000186c33ea0(_DAT_18315f410 ^ 0x23004925008278);
  _DAT_18315f3f8 = (_DAT_18315f3f8 ^ _DAT_18315f118 ^ 0x4dbd047e) - 0x4dbd047e ^ 0x628d3a7483745555;
  _DAT_18315f150 =
       (_DAT_18315f150 * 0x2166db1c26da295 ^ _DAT_18315f3f8) + (_DAT_18315f118 ^ 0x4dbd047e);
  _DAT_18315f358 = _DAT_18315f150 ^ _DAT_18315f3f8;
  _DAT_18315f6b8 = 0xb242fb82;
  _DAT_18315f358 = func_0x000186c33ea0(_DAT_18315f560 + 0x1f003964007affU ^ 0x17);
  uVar3 = _DAT_18315f358 & 0xffffffffffff;
  _DAT_18315f290 = _DAT_18315f6f0 ^ uVar3 ^ 0x4dbd053d;
  _DAT_18315f190 = (_DAT_18315f190 ^ uVar3) + 0x4dbd053d ^ 0x5de41d8c4ba3d754;
  _DAT_18315f1a8 = (_DAT_18315f1a8 * -0x55e4b92944ae0b5 ^ _DAT_18315f190) + uVar3;
  _DAT_18315f2c8 = _DAT_18315f1a8 ^ _DAT_18315f190;
  _DAT_18315f480 = 0x4dbd053d;
  uVar3 = (_DAT_18315f520 ^ _DAT_1809edf50) + _DAT_18315f1d0 + 0xc99f2618;
  uVar4 = (_DAT_18315f1d0 ^ _UNK_1809edf58) + _DAT_18315f520 + 0xb242fb82;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18315f520 ^ _DAT_1809edf50;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18315f1d0 ^ _UNK_1809edf58;
  uVar1 = func_0x000186c33ea0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18315f520 + 0xb242fb82) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18315f1d0 + 0xc99f2618));
  uVar3 = (ulonglong)(~uVar1 & 0x4dbd053d);
  _DAT_18315f628 = _DAT_18315f5d8 ^ uVar3 ^ 0x1000000bf;
  _DAT_18315f5d0 = (_DAT_18315f5d0 ^ uVar3) + 0x1000000bf ^ 0xa3cb964b79e32ecf;
  _DAT_18315f228 = (_DAT_18315f228 * 0x558d9ead00f92d43 ^ _DAT_18315f5d0) + uVar3;
  _DAT_18315f1c8 = _DAT_18315f228 ^ _DAT_18315f5d0;
  _DAT_18315f3a0 = 0xbf;
  _DAT_18315f4d8 = func_0x000186c33ea0(_DAT_18315f648 + 0xff2d008beb00d7ff ^ 0xee);
  uVar3 = (_DAT_18315f4d8 ^ 0x30ca0000) & 0xffffffffffff0000;
  _DAT_18315f578 = (_DAT_18315f578 ^ uVar3) - 0x30cafcd0 ^ 0xe3886e6522ca877;
  _DAT_18315f418 = (_DAT_18315f418 * 0x7029ca3fd65d9ba7 ^ _DAT_18315f578) + uVar3;
  _DAT_18315f190 = _DAT_18315f418 ^ _DAT_18315f578;
  _DAT_18315f3b8 = _DAT_18315f3c0 ^ 0xffffffffcf350330;
  _DAT_18315f680 = 0xcf350330;
  uVar3 = (_DAT_18315f4a0 ^ _DAT_1809edf60) + _DAT_18315f120 + 0x8422239a;
  uVar4 = (_DAT_18315f120 ^ _UNK_1809edf68) + _DAT_18315f4a0 + 0x30cafcd0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18315f4a0 ^ _DAT_1809edf60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18315f120 ^ _UNK_1809edf68;
  _DAT_18315f3f0 =
       func_0x000186c33ea0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18315f4a0 + 0x30cafcd0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18315f120 + 0x8422239a));
  uVar3 = _DAT_18315f3f0 & 0xffffffff80000000;
  _DAT_18315f518 = _DAT_18315f4f0 ^ uVar3 ^ 0x30cafd8f;
  _DAT_18315f218 = (_DAT_18315f218 ^ uVar3) + 0x30cafd8f ^ 0x80e0791bc655d5a6;
  _DAT_18315f3c0 = (_DAT_18315f3c0 * -0x6498d2a40f6fd1e5 ^ _DAT_18315f218) + uVar3;
  _DAT_18315f178 = _DAT_18315f3c0 ^ _DAT_18315f218;
  _DAT_18315f190 = 0x30cafd8f;
  uVar3 = func_0x000186c33ea0(_DAT_18315f3d0 + 0xffd2ffa97a004cff ^ 0x45);
  uVar4 = uVar3 ^ 0xcf350330;
  _DAT_18315f208 = _DAT_18315f6a8 ^ uVar4 ^ 0x1000000bf;
  _DAT_18315f420 = (uVar3 ^ uVar4) + 0x1000000bf ^ 0x102391f920f8ccb5;
  _DAT_18315f578 = (_DAT_18315f578 * -0x7d61423e10c2ecd9 ^ _DAT_18315f420) + uVar4;
  _DAT_18315f600 = _DAT_18315f578 ^ _DAT_18315f420;
  _DAT_18315f2f0 = 0xbf;
  _DAT_18315f688 = func_0x000186c33ea0(_DAT_18315f3d8 + 0x5600087f0068ff ^ 0x32);
  uVar3 = _DAT_18315f688 >> 1 | _DAT_18315f688;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18315f688;
  _DAT_18315f638 = (_DAT_18315f638 ^ uVar3) + 0x8c9b49a4 ^ 0x3881154bfdc66c74;
  _DAT_18315f4e0 = (_DAT_18315f4e0 * 0x4f3414f14afc1f0b ^ _DAT_18315f638) + uVar3;
  _DAT_18315f460 = _DAT_18315f4e0 ^ _DAT_18315f638;
  _DAT_18315f400 = 0x8c9b49a4;
  uVar3 = ((_DAT_18315f110 ^ 0x7add9ef3) + (ulonglong)((uint)_DAT_18315f110 & 0x7add9ef3) * 2) *
          -0x1a365532;
  uVar3 = (uVar3 | _DAT_18315f350) + (uVar3 & _DAT_18315f350);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18315f328 = func_0x000186c33ea0((uVar3 | 0x8b96a81) + (ulonglong)((uint)uVar3 & 0x8b96a81));
  uVar3 = (_DAT_18315f328 >> 1 | (ulonglong)((_DAT_18315f328 & 1) != 0) << 0x3f) ^ 0xfeffbdd6;
  _DAT_18315f2f0 = (_DAT_18315f2f0 ^ uVar3) + 0x7264b452 ^ 0x5359f8b6d078bbc8;
  _DAT_18315f6a8 = (_DAT_18315f6a8 * -0xa7aae5e40ceff39 ^ _DAT_18315f2f0) + uVar3;
  _DAT_18315f670 = _DAT_18315f6a8 ^ _DAT_18315f2f0;
  _DAT_18315f548 = 0x7264b452;
  _DAT_18315f3b0 = func_0x000186c33ea0(_DAT_18315f6a8 + 0xffe3007c23001dff ^ 0x56);
  _DAT_18315f6a0 =
       ((_DAT_18315f3b0 ^ 0x7164b248) << 0x2f | (_DAT_18315f3b0 ^ 0x7164b248) >> 0x11) ^ 0x7164b248;
  _DAT_18315f420 = _DAT_18315f420 ^ _DAT_18315f6a0 ^ 0x65063f53a9aaa7b7;
  _DAT_18315f1e0 = (_DAT_18315f1e0 * -0x7fb66098e6d9f3e9 ^ _DAT_18315f420) + _DAT_18315f6a0;
  _DAT_18315f138 = _DAT_18315f1e0 ^ _DAT_18315f420;
  _DAT_18315f3b8 = 0;
  _DAT_18315f1d0 = func_0x000186c33ea0(_DAT_18315f160 ^ 0xffdcff8499ffddff);
  uVar3 = _DAT_18315f1d0 ^ 0xbf;
  _DAT_18315f2a0 = _DAT_18315f190 ^ uVar3 ^ 0xbf;
  _DAT_18315f240 = (_DAT_18315f240 ^ uVar3) + 0xbf ^ 0x7694ca0b54d08458;
  _DAT_18315f550 = (_DAT_18315f550 * 0x1e1e31b91f6b7605 ^ _DAT_18315f240) + uVar3;
  _DAT_18315f170 = _DAT_18315f550 ^ _DAT_18315f240;
  _DAT_18315f190 = 0xbf;
  uVar3 = ((_DAT_18315f618 ^ 0x8422239a) + (ulonglong)((uint)_DAT_18315f618 & 0x8422239a) * 2) *
          -_DAT_18315f5d8;
  uVar3 = (uVar3 | _DAT_18315f510) + (uVar3 & _DAT_18315f510);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18315f1b8 = func_0x000186c33ea0((uVar3 | 0x8422239a) + (ulonglong)((uint)uVar3 & 0x8422239a))
  ;
  uVar3 = _DAT_18315f1b8 ^ 0xbf;
  _DAT_18315f428 = _DAT_18315f5d8 ^ uVar3 ^ 0xbf;
  _DAT_18315f548 = (_DAT_18315f548 ^ uVar3) + 0xbf ^ 0x7e71dcb27fdff00f;
  _DAT_18315f100 = (_DAT_18315f100 * -0x885d2e4cb0f060f ^ _DAT_18315f548) + uVar3;
  _DAT_18315f3a8 = _DAT_18315f100 ^ _DAT_18315f548;
  _DAT_18315f3f8 = 0xbf;
  uVar3 = (_DAT_18315f100 ^ _DAT_1809edf70) + _DAT_18315f648 + 0x40dd97f3;
  uVar4 = (_DAT_18315f648 ^ _UNK_1809edf78) + _DAT_18315f100 + 0xc4ffb4d6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18315f100 ^ _DAT_1809edf70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18315f648 ^ _UNK_1809edf78;
  _DAT_18315f480 =
       func_0x000186c33ea0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18315f100 + 0xc4ffb4d6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18315f648 + 0x40dd97f3));
  uVar3 = _DAT_18315f480 >> 1 | _DAT_18315f480;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = _DAT_18315f480 ^ 0xc4ffb4d6 ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2;
  _DAT_18315f250 = _DAT_18315f250 ^ uVar3 ^ 0xf2b05ecdd66471cd;
  _DAT_18315f1f0 = (_DAT_18315f1f0 * -0x32c0cb72f3feae3 ^ _DAT_18315f250) + uVar3;
  _DAT_18315f1e8 = _DAT_18315f1f0 ^ _DAT_18315f250;
  _DAT_18315f688 = 0;
  _DAT_18315f3d8 = func_0x000186c33ea0(_DAT_18315f208 + 0xffe1007b95ffddff ^ 0x24);
  _DAT_18315f5b8 = _DAT_18315f5b8 ^ _DAT_18315f3d8 ^ 0xbf;
  _DAT_18315f6b0 = (_DAT_18315f6b0 ^ _DAT_18315f3d8) + 0xbf ^ 0x23bcfbc767e5bcd8;
  _DAT_18315f228 = (_DAT_18315f228 * 0x3fa12aa2aabbcf95 ^ _DAT_18315f6b0) + _DAT_18315f3d8;
  _DAT_18315f100 = _DAT_18315f228 ^ _DAT_18315f6b0;
  _DAT_18315f558 = 0xbf;
  switch(0xbf < (int)uVar5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6c1f56b (image 186c1f56b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c1f56b(void)

{
  char cVar1;
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R15 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 6c1f6c9 (image 186c1f6c9) =====

undefined8 FUN_186c1f6c9(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva 6c172ca (image 186c172ca) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c172ca(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong *unaff_R15;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_XMM12_Da;
  
  uVar2 = (~param_2 + 2) * ((param_3 ^ in_RAX) + param_4);
  uVar2 = (uVar2 | param_1) + (uVar2 & param_1);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18315f1f0 =
       func_0x000186c33ea0((in_RAX ^ 1 | uVar2) + (ulonglong)((uint)(in_RAX ^ 1) & (uint)uVar2));
  uVar5 = unaff_ESI & unaff_XMM12_Da;
  uVar4 = unaff_ESI ^ unaff_XMM12_Da;
  lVar3 = ((ulonglong)unaff_ESI * (ulonglong)_DAT_1809ee380 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_1809ee370;
  uVar2 = ((((ulonglong)uVar4 * (ulonglong)_DAT_1809ee360 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_1809ee350 + lVar3 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_1809ee340 << 0x20 |
           (ulonglong)uVar5 * (ulonglong)_DAT_1809ee330) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_1809ee320 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_1809ee310) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_1809ee400 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_1809ee3f0 +
           ((ulonglong)(unaff_ESI | unaff_XMM12_Da) * (ulonglong)_DAT_1809ee3e0 << 0x20) +
           (ulonglong)(unaff_ESI | unaff_XMM12_Da) * (ulonglong)_DAT_1809ee3d0 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_1809ee3c0 << 0x20 |
           (ulonglong)uVar5 * (ulonglong)_DAT_1809ee3b0) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_1809ee3a0 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_1809ee390 + lVar3)) + 0x36e09d8881013b2d;
  _DAT_18315f258 = _DAT_18315f3b8 ^ _DAT_18315f3c0 ^ uVar2;
  _DAT_18315f668 = (_DAT_18315f668 ^ _DAT_18315f3c0) + uVar2 ^ 0xd1597a4b3be02f38;
  _DAT_18315f538 = (_DAT_18315f538 * -0x49365d79d1b91b27 ^ _DAT_18315f668) + _DAT_18315f3c0;
  _DAT_18315f498 = _DAT_18315f538 ^ _DAT_18315f668;
  _DAT_18315f388 = uVar2 & 0xffffffff;
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



// ===== continuation @ rva 6c36924 (image 186c36924) =====

void FUN_186c36924(void)

{
  return;
}



// ===== continuation @ rva 6c3677b (image 186c3677b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3677b(void)

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



// ===== continuation @ rva 6c37ce0 (image 186c37ce0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c37ce0(void)

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



// ===== continuation @ rva 6c36f9f (image 186c36f9f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c36f9f(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_18419fe70();
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



// ===== continuation @ rva 6c36b45 (image 186c36b45) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c36b45(void)

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



// ===== continuation @ rva 6c3aa14 (image 186c3aa14) =====

undefined8 thunk_FUN_186c39c14(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 6c3a93c (image 186c3a93c) =====

undefined8 thunk_FUN_186c39c14(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 6c395ec (image 186c395ec) =====

undefined8 thunk_FUN_186c39c14(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 6c3aabc (image 186c3aabc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c3aabc(void)

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



// ===== continuation @ rva 6c3a5e9 (image 186c3a5e9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c3a5e9(void)

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



// ===== continuation @ rva 6c3b1b3 (image 186c3b1b3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c3b1b3(void)

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



// ===== continuation @ rva 6c3b15f (image 186c3b15f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3b15f(void)

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



// ===== continuation @ rva 6c3bf18 (image 186c3bf18) =====

void FUN_186c3bf18(void)

{
  return;
}



// ===== continuation @ rva 6c3b927 (image 186c3b927) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3b927(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_1809f4d28)();
  return;
}



// ===== continuation @ rva 6c3b88b (image 186c3b88b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3b88b(void)

{
  FUN_190de3220();
  (*_DAT_1809f4ce8)();
  return;
}



// ===== continuation @ rva 6c3bd35 (image 186c3bd35) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3bd35(void)

{
  FUN_190de3220();
  (*_DAT_1809f4f08)();
  return;
}



// ===== continuation @ rva 6c3bf26 (image 186c3bf26) =====

void FUN_186c3bf26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 6c3bb1c (image 186c3bb1c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c3bb1c(void)

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



// ===== continuation @ rva 6c3b6f7 (image 186c3b6f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3b6f7(void)

{
  FUN_190dd72e0();
  (*_DAT_1809f4f38)();
  return;
}



// ===== continuation @ rva 6c3b421 (image 186c3b421) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c3b421(void)

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



// ===== continuation @ rva 6c3b3cd (image 186c3b3cd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3b3cd(void)

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



// ===== continuation @ rva 6c3bc52 (image 186c3bc52) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c3bc52(void)

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



// ===== continuation @ rva 6c3e96d (image 186c3e96d) =====

void FUN_186c3e96d(void)

{
  return;
}



// ===== continuation @ rva 6c3c090 (image 186c3c090) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3c090(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1809f5d38)();
  return;
}



// ===== continuation @ rva 6c3e912 (image 186c3e912) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3e912(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1809f54a8)();
  return;
}



// ===== continuation @ rva 6c3d83f (image 186c3d83f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_186c3d83f(void)

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



// ===== continuation @ rva 6c3cc98 (image 186c3cc98) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3cc98(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1809f57d8)();
  return;
}



// ===== continuation @ rva 6c3c62d (image 186c3c62d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3c62d(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x538))();
  FUN_184117d50();
  (*_DAT_1809f5d58)();
  return;
}



// ===== continuation @ rva 6c3dfda (image 186c3dfda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3dfda(void)

{
  FUN_190ddfc90();
  (*_DAT_1809f5c88)();
  return;
}



// ===== continuation @ rva 6c3c837 (image 186c3c837) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3c837(void)

{
  (*_DAT_1809f5ee8)();
  return;
}



// ===== continuation @ rva 6c3e0aa (image 186c3e0aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3e0aa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1809f5928)();
  return;
}



// ===== continuation @ rva 6c3dd4e (image 186c3dd4e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3dd4e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1809f5388)();
  return;
}



// ===== continuation @ rva 6c3de30 (image 186c3de30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3de30(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_1809f5c28)();
  return;
}



// ===== continuation @ rva 6c3dd05 (image 186c3dd05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3dd05(void)

{
  FUN_190dd72e0();
  (*_DAT_1809f5b88)();
  return;
}



// ===== continuation @ rva 6c3d6a9 (image 186c3d6a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3d6a9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1809f54c8)();
  return;
}



// ===== continuation @ rva 6c3d52b (image 186c3d52b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186c3d52b(void)

{
  FUN_190dd72e0();
  (*_DAT_1809f5a48)();
  return;
}



