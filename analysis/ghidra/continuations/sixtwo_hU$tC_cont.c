// ===== continuation @ rva 9a5df1d (image 189a5df1d) =====

void FUN_189a5df1d(void)

{
  return;
}



// ===== continuation @ rva 9a4ad1b (image 189a4ad1b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189a4ad71 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189a4ad1b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9a5d378 (image 189a5d378) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a5d378(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9a5de92 (image 189a5de92) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a5de92(void)

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



// ===== continuation @ rva 9a4b19f (image 189a4b19f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189a4b1bd */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189a4b19f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9a4b226 (image 189a4b226) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189a4b23d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189a4b226(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9a5d45c (image 189a5d45c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a5d45c(void)

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



// ===== continuation @ rva 9a5d60a (image 189a5d60a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a5d60a(void)

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



// ===== continuation @ rva 9a55ad3 (image 189a55ad3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a55ad3(void)

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



// ===== continuation @ rva 9a57164 (image 189a57164) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a57164(uint param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong in_stack_00000058;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  _DAT_183236e30 = func_0x000189a5e100(_DAT_183237010 ^ 0xfffc00ba1200c81f);
  uVar3 = _DAT_183236e30 << 0x37 | _DAT_183236e30 >> 9;
  _DAT_1832370a8 = _DAT_183236d10 ^ uVar3 ^ 0x4efb28cb;
  _DAT_183237000 = (_DAT_183237000 ^ uVar3) + 0x4efb28cb ^ 0x5392237d1ca45143;
  _DAT_183237030 = (_DAT_183237030 * 0xc5836d72bc47b9d ^ _DAT_183237000) + uVar3;
  _DAT_183236fd8 = _DAT_183237030 ^ _DAT_183237000;
  _DAT_183236f70 = 0x4efb28cb;
  _DAT_183236d88 = func_0x000189a5e100(_DAT_183237040 ^ 0xb9ffdf5d008c76);
  uVar3 = _DAT_183236d88 - (_DAT_183236d88 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183236d88;
  _DAT_183236ff0 = (_DAT_183236ff0 ^ uVar3) - 0xa4b7e9c8 ^ 0x892f66b45ee488a8;
  _DAT_183236db8 = (_DAT_183236db8 * -0x3b8e1a324c37c6f7 ^ _DAT_183236ff0) + uVar3;
  _DAT_183236dd0 = _DAT_183236db8 ^ _DAT_183236ff0;
  _DAT_183236ff8 = 0x5b481638;
  _DAT_1832370b8 = func_0x000189a5e100(_DAT_183236d20 ^ 0xba001fedff74dc);
  _DAT_183237030 = _DAT_183236e98 ^ _DAT_1832370b8 ^ 0xa4b7eac7;
  _DAT_183236ec8 = (_DAT_183236ec8 ^ _DAT_1832370b8) + 0xa4b7eac7 ^ 0x68ebf2893f888eda;
  _DAT_183236e80 = (_DAT_183236e80 * -0x74b63a496504c4df ^ _DAT_183236ec8) + _DAT_1832370b8;
  _DAT_183236d60 = _DAT_183236e80 ^ _DAT_183236ec8;
  _DAT_183236fa8 = 0xa4b7eac7;
  uVar3 = (_DAT_183236d20 ^ _DAT_1814931f0) + _DAT_183236dd0 + 0x2095c9e2;
  uVar7 = (_DAT_183236dd0 ^ _UNK_1814931f8) + _DAT_183236d20 + 0x5b481638;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236d20 ^ _DAT_1814931f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183236dd0 ^ _UNK_1814931f8;
  _DAT_183236fa8 =
       func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183236d20 + 0x5b481638) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183236dd0 + 0x2095c9e2));
  uVar3 = _DAT_183236fa8 ^ 0x3abbc27a3fd79f4f;
  _DAT_183236da0 = _DAT_183236df8 ^ uVar3 ^ 0x1000000ff;
  _DAT_183236d48 = (_DAT_183236d48 ^ uVar3) + 0x1000000ff ^ 0x2331588cdcf1d8f6;
  _DAT_183236d70 = (_DAT_183236d70 * -0x3f5b6e2263269875 ^ _DAT_183236d48) + uVar3;
  _DAT_183236fb8 = _DAT_183236d70 ^ _DAT_183236d48;
  _DAT_183236ff0 = 0xff;
  uVar3 = (_DAT_183236f70 ^ _DAT_181493200) + _DAT_1832370a0 + 0x842223da;
  uVar7 = (_DAT_1832370a0 ^ _UNK_181493208) + _DAT_183236f70 + 0x329b352e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236f70 ^ _DAT_181493200;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832370a0 ^ _UNK_181493208;
  _DAT_183236fe8 =
       func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183236f70 + 0x329b352e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832370a0 + 0x842223da));
  uVar3 = _DAT_183236fe8 ^ 0x326899f82d;
  _DAT_183236ef8 = _DAT_183236ed8 ^ uVar3 ^ 0x329b362d;
  _DAT_183236ea0 = (_DAT_183236ea0 ^ uVar3) + 0x329b362d ^ 0xcca8735519f934c9;
  _DAT_1832370b8 = (_DAT_1832370b8 * -0x2404ae0a3c31cb41 ^ _DAT_183236ea0) + uVar3;
  _DAT_183237060 = _DAT_1832370b8 ^ _DAT_183236ea0;
  _DAT_183236fd0 = 0x329b362d;
  _DAT_1832370a0 = func_0x000189a5e100(_DAT_183236ea0 + 0xffbb004b2a004cff ^ 1);
  uVar3 = (_DAT_1832370a0 ^ 0xfffffeff) * 0x4a51ff5449d52d91;
  _DAT_183236ff0 = _DAT_183237038 ^ uVar3 ^ 0x1000000ff;
  _DAT_183236d30 = (_DAT_183236d30 ^ uVar3) + 0x1000000ff ^ 0xec2b31ba0553d222;
  _DAT_183236f68 = (_DAT_183236f68 * 0x250a4a782f7b9e3d ^ _DAT_183236d30) + uVar3;
  _DAT_183236d68 = _DAT_183236f68 ^ _DAT_183236d30;
  _DAT_183236e80 = 0xff;
  uVar3 = (~_DAT_183236f30 + 0x25942100) *
          ((_DAT_183236f70 ^ 0x3b94de7a) + (ulonglong)((uint)_DAT_183236f70 & 0x3b94de7a) * 2);
  uVar3 = (uVar3 | _DAT_183236fb8) + (uVar3 & _DAT_183236fb8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183236d28 = func_0x000189a5e100((uVar3 | 0x1e00fe85) + (ulonglong)((uint)uVar3 & 0x1e00fe85))
  ;
  uVar3 = (_DAT_183236d28 ^ 0xbfb6fdff) << 0xd | _DAT_183236d28 >> 0x33;
  _DAT_1832370a0 = _DAT_183236de8 ^ uVar3 ^ 0xe54b1e5e;
  _DAT_183236d70 = (_DAT_183236d70 ^ uVar3) + 0xe54b1e5e ^ 0x7c989e351c8dc67e;
  _DAT_183236ec8 = (_DAT_183236ec8 * 0x46bf97d594fc807 ^ _DAT_183236d70) + uVar3;
  _DAT_183236e40 = _DAT_183236ec8 ^ _DAT_183236d70;
  _DAT_183236d00 = 0xe54b1e5e;
  uVar3 = (_DAT_183236e80 ^ _DAT_181493210) + _DAT_183237018 + 0x3b94de7a;
  uVar7 = (_DAT_183237018 ^ _UNK_181493218) + _DAT_183236e80 + 0x259420ff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236e80 ^ _DAT_181493210;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183237018 ^ _UNK_181493218;
  _DAT_183236d60 =
       func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183236e80 + 0x259420ff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183237018 + 0x3b94de7a));
  uVar3 = _DAT_183236d60 << 0x3b | _DAT_183236d60 >> 5;
  _DAT_1832370f8 = (_DAT_1832370f8 ^ uVar3) + 0x9a22dda0 ^ 0xe4853ae0e09cb96e;
  _DAT_183236db8 = (_DAT_183236db8 * -0x60a613d96f91c615 ^ _DAT_1832370f8) + uVar3;
  _DAT_183236d00 = _DAT_183236db8 ^ _DAT_1832370f8;
  _DAT_183236f80 = 0x9a22dda0;
  uVar3 = (~_DAT_183236eb0 + 0x25942100) *
          ((_DAT_183236e68 ^ 0x3b94de7a) + (ulonglong)((uint)_DAT_183236e68 & 0x3b94de7a) * 2);
  uVar3 = (uVar3 | _DAT_183236d18) + (uVar3 & _DAT_183236d18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832370b8 = func_0x000189a5e100((uVar3 | 0x1e00fe85) + (ulonglong)((uint)uVar3 & 0x1e00fe85))
  ;
  _DAT_183237058 = (_DAT_183237058 ^ _DAT_1832370b8) + 0x2594205f ^ 0x24cb689daa5e11f;
  _DAT_183236d78 = (_DAT_183236d78 * -0x435983a6ae1a9633 ^ _DAT_183237058) + _DAT_1832370b8;
  _DAT_183237050 = _DAT_183236d78 ^ _DAT_183237058;
  _DAT_183237020 = 0x2594205f;
  uVar3 = (_DAT_183236d20 ^ 0x842223da) + _DAT_183236f80 + 0x842223da;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236d20 ^ 0x842223da;
  uVar7 = ((_DAT_183236f80 + _DAT_183236d20) * 0x2000 | _DAT_183236f80 + _DAT_183236d20 >> 0x33) ^
          _DAT_183236f80;
  _DAT_183237088 =
       func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183236d20 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183236f80 + 0x842223da));
  uVar3 = _DAT_183237088 >> 1 | _DAT_183237088;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183237088;
  _DAT_1832370d8 = _DAT_183237098 ^ uVar3 ^ 0xff;
  _DAT_183236e80 = (_DAT_183236e80 ^ uVar3) + 0xff ^ 0xd992c05c8e3628ee;
  _DAT_183236d60 = (_DAT_183236d60 * 0x63e195bdc45ade39 ^ _DAT_183236e80) + uVar3;
  _DAT_183236fd8 = 0xff;
  uVar3 = (_DAT_183236f00 ^ _DAT_181493220) + _DAT_183236e50 + 0x3b94de7a;
  uVar7 = (_DAT_183236e50 ^ _UNK_181493228) + _DAT_183236f00 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236f00 ^ _DAT_181493220;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183236e50 ^ _UNK_181493228;
  uVar3 = func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183236f00 + 0xffffffff) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183236e50 + 0x3b94de7a));
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  _DAT_183237040 =
       (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar3;
  _DAT_183236d40 = (_DAT_183236d40 ^ _DAT_183237040) + 0x404902a0 ^ 0x4974249226d8d5bb;
  _DAT_183237040 = (uVar3 * -0x727684a6ed489f27 ^ _DAT_183236d40) + _DAT_183237040;
  _DAT_183236ff0 = 0x404902a0;
  _DAT_183236db0 = func_0x000189a5e100(_DAT_183236df8 ^ 0xffd3ffe65a0034b2);
  uVar7 = _DAT_183236db0 * 0x551b9c3a4ea78669;
  uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = ((uint)bVar1 + (uint)bVar1 ^ uVar7) << 0x37 | uVar7 >> 9;
  _DAT_183237000 = _DAT_183237000 ^ uVar3 ^ 0x9427344d99749743;
  _DAT_183236e58 = (_DAT_183236e58 * 0x68aee7839ddc686f ^ _DAT_183237000) + uVar3;
  _DAT_183237018 = _DAT_183236e58 ^ _DAT_183237000;
  _DAT_183236ef0 = 0;
  uVar3 = ((_DAT_183236e48 ^ 0x842223da) + (ulonglong)((uint)_DAT_183236e48 & 0x842223da) * 2) *
          -_DAT_183236fc8;
  uVar3 = (uVar3 | _DAT_1832370c8) + (uVar3 & _DAT_1832370c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832370a8 = func_0x000189a5e100((uVar3 | 0x842223da) + (ulonglong)((uint)uVar3 & 0x842223da))
  ;
  uVar3 = _DAT_1832370a8 << 0x1c | _DAT_1832370a8 >> 0x24 & 0xfffffffffe000000;
  _DAT_183236d90 = _DAT_183236e48 ^ uVar3 ^ 0xff;
  _DAT_183236da0 = (_DAT_183236da0 ^ uVar3) + 0xff ^ 0x232567398e49bc50;
  _DAT_183236d30 = (_DAT_183236d30 * 0x7536ad7a89b9d4b7 ^ _DAT_183236da0) + uVar3;
  _DAT_1832370c8 = _DAT_183236d30 ^ _DAT_183236da0;
  _DAT_1832370a0 = 0xff;
  _DAT_183236df8 = func_0x000189a5e100(_DAT_183236e40 ^ 0x20ff7bdd001d19);
  uVar3 = _DAT_183236df8 >> 0x18 & 0xfffffffff;
  _DAT_183237010 = _DAT_183237010 ^ uVar3 ^ 0xc4f41c6bf549e158;
  _DAT_183236f28 = (_DAT_183236f28 * 0x5e2f9556cba86229 ^ _DAT_183237010) + uVar3;
  _DAT_183236de0 = _DAT_183236f28 ^ _DAT_183237010;
  _DAT_183236d98 = 0;
  uVar4 = ((ulonglong)param_1 & 0xff) << 0x28;
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = in_stack_00000058 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_181493230,_DAT_1800170c0);
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar7 + _DAT_183236eb0;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_183236e58 ^ uVar7;
  }
  _DAT_183237080 = func_0x000189a5e100(SUB161(auVar5 ^ _DAT_181493230,5) ^ uVar3);
  uVar7 = _DAT_183237080 * -0x73a1074b75a01443;
  uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar7) &
          0x1ffffffffffffff;
  _DAT_183236da0 = uVar4 | in_stack_00000058;
  _DAT_183236ed8 = (_DAT_183236ed8 ^ uVar3) + _DAT_183236da0 ^ 0x35724e8328cd1aaa;
  _DAT_183236f48 = (_DAT_183236f48 * 0x5e40812370673671 ^ _DAT_183236ed8) + uVar3;
  _DAT_183236ee0 = _DAT_183236f48 ^ _DAT_183236ed8;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar2 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9a3e0d4 (image 189a3e0d4) =====

void FUN_189a3e0d4(void)

{
  return;
}



// ===== continuation @ rva 9a3df35 (image 189a3df35) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3df35(void)

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



// ===== continuation @ rva 9a3edad (image 189a3edad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3edad(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000084;
  
  uStack0000000000000084 = in_stack_00000058;
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



// ===== continuation @ rva 9a3ed58 (image 189a3ed58) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3ed58(void)

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



// ===== continuation @ rva 9a3e45c (image 189a3e45c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3e45c(void)

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



// ===== continuation @ rva 9a3ebe7 (image 189a3ebe7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3ebe7(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000086;
  
  uStack0000000000000086 = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9a3eb97 (image 189a3eb97) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3eb97(void)

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



// ===== continuation @ rva 9a3e045 (image 189a3e045) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3e045(void)

{
  int iVar1;
  longlong *unaff_R12;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(*unaff_R12 + 0x558))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9a3e007 (image 189a3e007) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3e007(void)

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



// ===== continuation @ rva 9a46902 (image 189a46902) =====

undefined8 thunk_FUN_189a3f128(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva 9a4684b (image 189a4684b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4684b(void)

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



// ===== continuation @ rva 9a400ff (image 189a400ff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a400ff(void)

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



// ===== continuation @ rva 9a3fec4 (image 189a3fec4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3fec4(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190de3220(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0xb5e,*_DAT_18301ee50 + 0xbe7,
                0x37);
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



// ===== continuation @ rva 9a46fa2 (image 189a46fa2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a46fa2(void)

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



// ===== continuation @ rva 9a46f4e (image 189a46f4e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a46f4e(void)

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



// ===== continuation @ rva 9a47de1 (image 189a47de1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a47de1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1814905b8)();
  return;
}



// ===== continuation @ rva 9a4754b (image 189a4754b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4754b(void)

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



// ===== continuation @ rva 9a47633 (image 189a47633) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a47633(void)

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



// ===== continuation @ rva 9a47e24 (image 189a47e24) =====

void FUN_189a47e24(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9a47b98 (image 189a47b98) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a47b98(void)

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



// ===== continuation @ rva 9a47e15 (image 189a47e15) =====

void FUN_189a47e15(void)

{
  return;
}



// ===== continuation @ rva 9a46f87 (image 189a46f87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a46f87(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1814909d8)();
  return;
}



// ===== continuation @ rva 9a476eb (image 189a476eb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a476eb(void)

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



// ===== continuation @ rva 9a47a3b (image 189a47a3b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a47a3b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181490a88)();
  return;
}



// ===== continuation @ rva 9a474c9 (image 189a474c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a474c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181490a48)();
  return;
}



// ===== continuation @ rva 9a49f3e (image 189a49f3e) =====

void FUN_189a49f3e(void)

{
  return;
}



// ===== continuation @ rva 9a47f9c (image 189a47f9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a47f9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181490c48)();
  return;
}



// ===== continuation @ rva 9a4aa7c (image 189a4aa7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a4aa7c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1814914b8)();
  return;
}



// ===== continuation @ rva 9a4853a (image 189a4853a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4853a(void)

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



// ===== continuation @ rva 9a48ffd (image 189a48ffd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a48ffd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1814917c8)();
  return;
}



// ===== continuation @ rva 9a498c2 (image 189a498c2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a498c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181491598)();
  return;
}



// ===== continuation @ rva 9a48741 (image 189a48741) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a48741(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181491288)();
  return;
}



// ===== continuation @ rva 9a4915c (image 189a4915c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4915c(void)

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



// ===== continuation @ rva 9a485e1 (image 189a485e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a485e1(void)

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



// ===== continuation @ rva 9a4aae2 (image 189a4aae2) =====

void FUN_189a4aae2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9a4a55f (image 189a4a55f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4a55f(void)

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



// ===== continuation @ rva 9a48ecb (image 189a48ecb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a48ecb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_1814912a8)();
  return;
}



// ===== continuation @ rva 9a3bc30 (image 189a3bc30) =====

void FUN_189a3bc30(void)

{
  return;
}



// ===== continuation @ rva 9a25879 (image 189a25879) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a25879(void)

{
  FUN_190ddce00();
  (*_DAT_181488b08)();
  return;
}



// ===== continuation @ rva 9a35b18 (image 189a35b18) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a35b18(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181488288)();
  return;
}



// ===== continuation @ rva 9a2a386 (image 189a2a386) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a2a386(void)

{
  longlong *in_stack_00000048;
  undefined8 in_stack_000000b0;
  
  (**(code **)(*in_stack_00000048 + 0x560))(in_stack_00000048,6,in_stack_000000b0,0);
  (*_DAT_181489e58)();
  return;
}



// ===== continuation @ rva 9a3bc9c (image 189a3bc9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3bc9c(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x68))();
  (*_DAT_18148b4e8)();
  return;
}



// ===== continuation @ rva 9a3420f (image 189a3420f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3420f(void)

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



// ===== continuation @ rva 9a35400 (image 189a35400) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a35400(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181488838)();
  return;
}



// ===== continuation @ rva 9a29dbc (image 189a29dbc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a29dbc(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  undefined8 in_stack_000000a8;
  
  FUN_184117d50(in_stack_00000048,in_stack_000000a8);
  cVar1 = (**(code **)(*in_stack_00000048 + 0x720))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9a3538a (image 189a3538a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3538a(void)

{
  (*_DAT_18148b648)();
  return;
}



// ===== continuation @ rva 9a34311 (image 189a34311) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a34311(void)

{
  (*_DAT_18148b508)();
  return;
}



// ===== continuation @ rva 9a3705a (image 189a3705a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3705a(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x78))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18148a8b8)();
  return;
}



// ===== continuation @ rva 9a3248c (image 189a3248c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3248c(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x570))(in_stack_00000048);
  (*_DAT_181488528)();
  return;
}



// ===== continuation @ rva 9a3bcaf (image 189a3bcaf) =====

void FUN_189a3bcaf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9a32c20 (image 189a32c20) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a32c20(void)

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



// ===== continuation @ rva 9a256dd (image 189a256dd) =====

void FUN_189a256dd(void)

{
  return;
}



// ===== continuation @ rva 9a255b0 (image 189a255b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a255b0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181487de8)();
  return;
}



// ===== continuation @ rva 9a256e5 (image 189a256e5) =====

void FUN_189a256e5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9a256ba (image 189a256ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a256ba(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181487da8)();
    return;
  }
  (*_DAT_181487da8)();
  return;
}



// ===== continuation @ rva 9a25692 (image 189a25692) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a25692(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_181487d88)();
  return;
}



// ===== continuation @ rva 9a2563e (image 189a2563e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a2563e(void)

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



// ===== continuation @ rva 9a256d5 (image 189a256d5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a256d5(void)

{
  (*_DAT_181487da8)();
  return;
}



// ===== continuation @ rva 9a25677 (image 189a25677) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a25677(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181487dd8)();
  return;
}



// ===== continuation @ rva 9a25628 (image 189a25628) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a25628(void)

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



// ===== continuation @ rva 9a255cf (image 189a255cf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a255cf(void)

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



