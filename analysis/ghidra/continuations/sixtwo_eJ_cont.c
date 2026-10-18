// ===== continuation @ rva c5cf55e (image 18c5cf55e) =====

void FUN_18c5cf55e(void)

{
  return;
}



// ===== continuation @ rva c5b5a5b (image 18c5b5a5b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c5b5ab1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c5b5a5b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c5cee86 (image 18c5cee86) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5cee86(void)

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



// ===== continuation @ rva c5cf05c (image 18c5cf05c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5cf05c(void)

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



// ===== continuation @ rva c5b8134 (image 18c5b8134) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b8134(void)

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



// ===== continuation @ rva c5c8a8f (image 18c5c8a8f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5c8a8f(void)

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



// ===== continuation @ rva c5b61f4 (image 18c5b61f4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c5b622b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c5b61f4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva c5cf332 (image 18c5cf332) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5cf332(void)

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



// ===== continuation @ rva c5be3ad (image 18c5be3ad) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5be3ad(int param_1)

{
  int iVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  _DAT_18330b868 = func_0x00018c5cf740(_DAT_18330b710 + 0x43ffda5eff97ff ^ 0x1c);
  _DAT_18330b900 = (_DAT_18330b900 ^ _DAT_18330b868 ^ 0x82fa7106) + 0xa3fa7f86 ^ 0x3965e624c2cc123d;
  _DAT_18330b720 =
       (_DAT_18330b720 * 0x68b824eb0f25bc1d ^ _DAT_18330b900) + (_DAT_18330b868 ^ 0x82fa7106);
  _DAT_18330ba58 = _DAT_18330b720 ^ _DAT_18330b900;
  _DAT_18330b798 = 0xa3fa7f86;
  uVar2 = (_DAT_18330b900 ^ _DAT_181eef2d0) + _DAT_18330b910 + 0x5739da95;
  uVar3 = (_DAT_18330b910 ^ _UNK_181eef2d8) + _DAT_18330b900 + 0xb00f5829;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18330b900 ^ _DAT_181eef2d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18330b910 ^ _UNK_181eef2d8;
  _DAT_18330b858 =
       func_0x00018c5cf740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18330b900 + 0xb00f5829) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18330b910 + 0x5739da95));
  uVar2 = (ulonglong)(~((uint)_DAT_18330b858 ^ 0xf31ff9b9) & 0xd31bf9b0);
  _DAT_18330b9a8 = (_DAT_18330b9a8 ^ uVar2) + 0x6314a199 ^ 0xdd89186a8d5a2754;
  _DAT_18330b790 = (_DAT_18330b790 * 0x5e4741f4b8670af3 ^ _DAT_18330b9a8) + uVar2;
  _DAT_18330ba08 = _DAT_18330b790 ^ _DAT_18330b9a8;
  _DAT_18330b730 = 0x6314a199;
  _DAT_18330b708 = func_0x00018c5cf740(_DAT_18330b710 ^ 0x5ffff484ff9e9a);
  uVar2 = _DAT_18330b708 - (_DAT_18330b708 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18330b708)
          * 0x37969c78c6eedde5;
  _DAT_18330b7e8 = (_DAT_18330b7e8 ^ uVar2) - 0x898143a0 ^ 0xa46f90e66ebb9141;
  _DAT_18330baa8 = (_DAT_18330baa8 * 0xee56883ae27170d ^ _DAT_18330b7e8) + uVar2;
  _DAT_18330b760 = _DAT_18330baa8 ^ _DAT_18330b7e8;
  _DAT_18330ba88 = 0x767ebc60;
  _DAT_18330b8e0 = func_0x00018c5cf740(_DAT_18330b718 ^ 0xff63fff2dd00306f);
  uVar2 = _DAT_18330b8e0 >> 1 | _DAT_18330b8e0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18330b8e0;
  _DAT_18330ba28 = (_DAT_18330ba28 ^ uVar2) - 0x7973bf00 ^ 0x35f3802e0bf4889a;
  _DAT_18330baa0 = (_DAT_18330baa0 * -0x396deab1a7c0b301 ^ _DAT_18330ba28) + uVar2;
  _DAT_18330b9f0 = _DAT_18330baa0 ^ _DAT_18330ba28;
  _DAT_18330bae0 = 0x868c4100;
  uVar2 = (_DAT_18330b980 ^ _DAT_181eef2e0) + _DAT_18330b868 + 0x8422dc25;
  uVar3 = (_DAT_18330b868 ^ _UNK_181eef2e8) + _DAT_18330b980 + 0x7973bf00;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18330b980 ^ _DAT_181eef2e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18330b868 ^ _UNK_181eef2e8;
  _DAT_18330b990 =
       func_0x00018c5cf740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18330b980 + 0x7973bf00) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18330b868 + 0x8422dc25));
  _DAT_18330b8e8 = _DAT_18330b7e0 ^ _DAT_18330b990 ^ 0x7974be00;
  _DAT_18330b900 = (_DAT_18330b900 ^ _DAT_18330b990) + 0x7974be00 ^ 0x3d98920e0aef551;
  _DAT_18330b980 = (_DAT_18330b980 * 0x35d7d30888cf52e5 ^ _DAT_18330b900) + _DAT_18330b990;
  _DAT_18330ba80 = _DAT_18330b980 ^ _DAT_18330b900;
  _DAT_18330ba28 = 0x7974be00;
  uVar2 = (~_DAT_18330b770 + 0x868c4101) *
          ((_DAT_18330ba00 ^ 0xfd569d25) + (ulonglong)((uint)_DAT_18330ba00 & 0xfd569d25) * 2);
  uVar2 = (uVar2 | _DAT_18330b818) + (uVar2 & _DAT_18330b818);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18330b8a0 = func_0x00018c5cf740((uVar2 | 0x7bdadc25) + (ulonglong)((uint)uVar2 & 0x7bdadc25))
  ;
  uVar3 = _DAT_18330b8a0 ^ 0x3fd5a6228c3e0000;
  uVar2 = uVar3 >> 1 | uVar3;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3)
          & 0xffffffffffffff;
  _DAT_18330b9e8 = _DAT_18330b8b0 ^ uVar2 ^ 0x10000ff00;
  _DAT_18330b770 = (_DAT_18330b770 ^ uVar2) + 0x10000ff00 ^ 0xba3e21eadb10f45c;
  _DAT_18330baf8 = (_DAT_18330baf8 * -0x30ea27bc23886e9 ^ _DAT_18330b770) + uVar2;
  _DAT_18330b940 = _DAT_18330baf8 ^ _DAT_18330b770;
  _DAT_18330b998 = 0xff00;
  _DAT_18330b7b0 = func_0x00018c5cf740(_DAT_18330baf8 + 0xff42ffd5dcff2dff ^ 9);
  uVar2 = (_DAT_18330b7b0 ^ 0x2ae740000000) & 0x7fffc0000000;
  _DAT_18330b960 = _DAT_18330b960 ^ uVar2 ^ 0x10000ff00;
  _DAT_18330b9a0 = (_DAT_18330b9a0 ^ uVar2) + 0x10000ff00 ^ 0xfeee57b6f650cdd2;
  _DAT_18330b8b8 = (_DAT_18330b8b8 * -0x54d00c501acbd0f5 ^ _DAT_18330b9a0) + uVar2;
  _DAT_18330bad0 = _DAT_18330b8b8 ^ _DAT_18330b9a0;
  _DAT_18330b810 = 0xff00;
  uVar2 = (~_DAT_18330b8e0 + 0x6314a19a) *
          ((_DAT_18330b788 ^ 0x27d85ca3) + (ulonglong)((uint)_DAT_18330b788 & 0x27d85ca3) * 2);
  uVar2 = (uVar2 | _DAT_18330b858) + (uVar2 & _DAT_18330b858);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18330b800 = func_0x00018c5cf740((uVar2 | 0x44ccfd3a) + (ulonglong)((uint)uVar2 & 0x44ccfd3a))
  ;
  uVar2 = _DAT_18330b800 << 0x31 | _DAT_18330b800 >> 0xf;
  _DAT_18330b890 = _DAT_18330b7b0 ^ uVar2 ^ 0x1070f211f;
  _DAT_18330b948 = (_DAT_18330b948 ^ uVar2) + 0x1070f211f ^ 0xf608886781ccc483;
  _DAT_18330b990 = (_DAT_18330b990 * -0xb2ac86c1719c409 ^ _DAT_18330b948) + uVar2;
  _DAT_18330bab0 = _DAT_18330b990 ^ _DAT_18330b948;
  _DAT_18330b918 = 0x70f211f;
  uVar2 = (~_DAT_18330bac8 + 0x46204301) *
          ((_DAT_18330ba18 ^ 0x44ccfd3a) + (ulonglong)((uint)_DAT_18330ba18 & 0x44ccfd3a) * 2);
  uVar2 = (uVar2 | _DAT_18330b818) + (uVar2 & _DAT_18330b818);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18330b708 = func_0x00018c5cf740((uVar2 | 0x2ecbe3a) + (ulonglong)((uint)uVar2 & 0x2ecbe3a));
  uVar2 = _DAT_18330b710 * 0x7840b80500ae3171;
  _DAT_18330ba98 = _DAT_18330bac8 ^ uVar2 ^ 0x1070f211f;
  _DAT_18330b7b0 = (_DAT_18330b7b0 ^ uVar2) + 0x1070f211f ^ 0x6b92fa97782ea06f;
  _DAT_18330b7a0 = (_DAT_18330b7a0 * -0x511a29ff74609f69 ^ _DAT_18330b7b0) + uVar2;
  _DAT_18330ba20 = _DAT_18330b7a0 ^ _DAT_18330b7b0;
  _DAT_18330baa0 = 0x70f211f;
  uVar2 = (_DAT_18330b910 ^ _DAT_181eef2f0) + _DAT_18330b928 + 0x832d023a;
  uVar3 = (_DAT_18330b928 ^ _UNK_181eef2f8) + _DAT_18330b910 + 0x70f211f;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18330b910 ^ _DAT_181eef2f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18330b928 ^ _UNK_181eef2f8;
  uVar2 = func_0x00018c5cf740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18330b910 + 0x70f211f) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18330b928 + 0x832d023a));
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  _DAT_18330baa0 =
       ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       uVar2) >> 2 | uVar2 << 0x3e;
  _DAT_18330b728 = _DAT_18330b728 ^ _DAT_18330baa0 ^ 0x3dab56af6598ed0;
  _DAT_18330b850 = (_DAT_18330b850 * -0x7a80eb230b0eece9 ^ _DAT_18330b728) + _DAT_18330baa0;
  _DAT_18330b950 = _DAT_18330b850 ^ _DAT_18330b728;
  _DAT_18330b708 = 0;
  uVar2 = (_DAT_18330b9d0 ^ 0x8422dc25) + _DAT_18330b788 + 0x8422dc25;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18330b9d0 ^ 0x8422dc25;
  uVar3 = ((_DAT_18330b788 + _DAT_18330b9d0) * 0x2000 | _DAT_18330b788 + _DAT_18330b9d0 >> 0x33) ^
          _DAT_18330b788;
  _DAT_18330b850 =
       func_0x00018c5cf740((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_18330b9d0 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18330b788 + 0x8422dc25));
  uVar2 = _DAT_18330b850 >> 1 | _DAT_18330b850;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18330b850;
  uVar2 = uVar2 << 0xc | uVar2 >> 0x34;
  _DAT_18330b900 = _DAT_18330ba30 ^ uVar2 ^ 0xff00;
  _DAT_18330b8a8 = (_DAT_18330b8a8 ^ uVar2) + 0xff00 ^ 0x252ac4095ea0502d;
  _DAT_18330b700 = (_DAT_18330b700 * -0x318a24bcbeacf6d1 ^ _DAT_18330b8a8) + uVar2;
  _DAT_18330b948 = _DAT_18330b700 ^ _DAT_18330b8a8;
  _DAT_18330b9d0 = 0xff00;
  _DAT_18330b7a0 = func_0x00018c5cf740(_DAT_18330b988 ^ 0x9effa83c001a04);
  _DAT_18330b710 = (_DAT_18330b710 ^ _DAT_18330b7a0 * 2) + 0x5c058079 ^ 0x17ac1fc26d28e758;
  _DAT_18330b7e0 = (_DAT_18330b7e0 * -0x74b7ca1d6ed25989 ^ _DAT_18330b710) + _DAT_18330b7a0 * 2;
  _DAT_18330b718 = _DAT_18330b7e0 ^ _DAT_18330b710;
  _DAT_18330b788 = 0x5c058079;
  _DAT_18330b750 = func_0x00018c5cf740(_DAT_18330b720 + 0x24003636003aff ^ 0x1f);
  uVar2 = (_DAT_18330b750 ^ 0x5c058079) << 0x19 | _DAT_18330b750 >> 0x27;
  _DAT_18330b9d8 = _DAT_18330b9d8 ^ uVar2 ^ 0x6315f8b8c1b705f7;
  _DAT_18330baa8 = (_DAT_18330baa8 * 0x68e22160eb2b45d3 ^ _DAT_18330b9d8) + uVar2;
  _DAT_18330ba58 = _DAT_18330baa8 ^ _DAT_18330b9d8;
  _DAT_18330b848 = 0;
  _DAT_18330b768 = func_0x00018c5cf740(_DAT_18330b970 + 0xffbbff7bdcffe1ffU ^ 0x4f);
  uVar2 = _DAT_18330b768 << 0xb | _DAT_18330b768 >> 0x35;
  _DAT_18330b8d0 = _DAT_18330b958 ^ uVar2 ^ 0xff00;
  _DAT_18330bae8 = (_DAT_18330bae8 ^ uVar2) + 0xff00 ^ 0x9e5c5f3d8fb4ff97;
  _DAT_18330b8c8 = (_DAT_18330b8c8 * 0x4e055c0d5844e39f ^ _DAT_18330bae8) + uVar2;
  _DAT_18330b7e0 = _DAT_18330b8c8 ^ _DAT_18330bae8;
  _DAT_18330bad0 = 0xff00;
  uVar2 = (_DAT_18330b920 ^ 0x8422dc25) + _DAT_18330b880 + 0x8422dc25;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18330b920 ^ 0x8422dc25;
  uVar3 = ((_DAT_18330b880 + _DAT_18330b920) * 0x2000 | _DAT_18330b880 + _DAT_18330b920 >> 0x33) ^
          _DAT_18330b880;
  _DAT_18330b868 =
       func_0x00018c5cf740((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_18330b920 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18330b880 + 0x8422dc25));
  uVar2 = (_DAT_18330b868 ^ 0xff00) & 0xfffffffffffffff8;
  _DAT_18330b978 = _DAT_18330b758 ^ uVar2 ^ 0xff00;
  _DAT_18330ba80 = (_DAT_18330ba80 ^ uVar2) + 0xff00 ^ 0x3a7086984f25ad57;
  _DAT_18330ba40 = (_DAT_18330ba40 * -0x17eed7e0fad7d6e5 ^ _DAT_18330ba80) + uVar2;
  _DAT_18330b888 = _DAT_18330ba40 ^ _DAT_18330ba80;
  _DAT_18330b908 = 0xff00;
  uVar3 = (ulonglong)(uint)(param_1 << 8);
  uVar2 = (~_DAT_18330b708 + 0xff01) *
          ((uVar3 ^ 0x84222325 ^ _DAT_18330ba18) +
          (ulonglong)((uint)_DAT_18330ba18 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_18330b7f0) + (uVar2 & _DAT_18330b7f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18330b9e8 =
       func_0x00018c5cf740((uVar3 ^ 0x8422dc25 | uVar2) +
                           (ulonglong)((uint)(uVar3 ^ 0x8422dc25) & (uint)uVar2));
  uVar2 = _DAT_18330b9e8 << 0x18 | (_DAT_18330b9e8 & 0x7fffffffffffffff) >> 0x28;
  _DAT_18330b8d8 = uVar3 & 0xffff;
  _DAT_18330bac0 = (_DAT_18330bac0 ^ uVar2) + _DAT_18330b8d8 ^ 0xfbd53e31d6d8b6d5;
  _DAT_18330baf8 = (_DAT_18330baf8 * 0x735c1601223ad747 ^ _DAT_18330bac0) + uVar2;
  _DAT_18330b880 = _DAT_18330baf8 ^ _DAT_18330bac0;
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



// ===== continuation @ rva c52ff3f (image 18c52ff3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52ff3f(void)

{
  FUN_190dd72e0();
  (*_DAT_181ec3a58)();
  return;
}



// ===== continuation @ rva c52fec1 (image 18c52fec1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fec1(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ec3548)();
  return;
}



// ===== continuation @ rva c530da8 (image 18c530da8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c530da8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ec3b38)();
  return;
}



// ===== continuation @ rva c53052d (image 18c53052d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c53052d(void)

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



// ===== continuation @ rva c52fef0 (image 18c52fef0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c52fef0(void)

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



// ===== continuation @ rva c5300ea (image 18c5300ea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5300ea(void)

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



// ===== continuation @ rva c530dcc (image 18c530dcc) =====

void FUN_18c530dcc(void)

{
  return;
}



// ===== continuation @ rva c5301ee (image 18c5301ee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5301ee(void)

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



// ===== continuation @ rva c530835 (image 18c530835) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c530835(void)

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



// ===== continuation @ rva c530d56 (image 18c530d56) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c530d56(void)

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



// ===== continuation @ rva c53091d (image 18c53091d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c53091d(void)

{
  FUN_190dd72e0();
  (*_DAT_181ec3888)();
  return;
}



// ===== continuation @ rva c534d33 (image 18c534d33) =====

void FUN_18c534d33(void)

{
  return;
}



// ===== continuation @ rva c530f84 (image 18c530f84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c530f84(void)

{
  FUN_190ddce00();
  (*_DAT_181ec3cc8)();
  return;
}



// ===== continuation @ rva c534c64 (image 18c534c64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c534c64(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181ec3f68)();
  return;
}



// ===== continuation @ rva c534d9f (image 18c534d9f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c534d9f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ec3f58)();
  return;
}



// ===== continuation @ rva c5342cf (image 18c5342cf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5342cf(void)

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



// ===== continuation @ rva c534c0d (image 18c534c0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c534c0d(void)

{
  FUN_190de3220();
  (*_DAT_181ec4248)();
  return;
}



// ===== continuation @ rva c53464c (image 18c53464c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c53464c(void)

{
  (*_DAT_181ec3f18)();
  return;
}



// ===== continuation @ rva c5344e4 (image 18c5344e4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5344e4(void)

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



// ===== continuation @ rva c53103c (image 18c53103c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c53103c(void)

{
  undefined8 uStack0000000000000038;
  
  uStack0000000000000038 = 0x6c01f9ef7b6c;
  (*_DAT_181ec3ed8)();
  return;
}



// ===== continuation @ rva c533e75 (image 18c533e75) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c533e75(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ec4008)();
  return;
}



// ===== continuation @ rva c530fdb (image 18c530fdb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c530fdb(void)

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



// ===== continuation @ rva c538163 (image 18c538163) =====

void FUN_18c538163(void)

{
  return;
}



// ===== continuation @ rva c534f83 (image 18c534f83) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c534f83(void)

{
  FUN_190ddce00();
  (*_DAT_181ed33f8)();
  return;
}



// ===== continuation @ rva c56901b (image 18c56901b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c56901b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_181ecbeb8)();
  return;
}



// ===== continuation @ rva c5364ae (image 18c5364ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5364ae(void)

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



// ===== continuation @ rva c569065 (image 18c569065) =====

void FUN_18c569065(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c55ce4f (image 18c55ce4f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c55ce4f(void)

{
  FUN_190dd72e0();
  (*_DAT_181ec4f58)();
  return;
}



// ===== continuation @ rva c568240 (image 18c568240) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c568240(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_181ecaf18)();
  return;
}



// ===== continuation @ rva c566d79 (image 18c566d79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c566d79(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ec9238)();
  return;
}



// ===== continuation @ rva c565702 (image 18c565702) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c565702(void)

{
  FUN_190de3220();
  (*_DAT_181ec8b08)();
  return;
}



// ===== continuation @ rva c53f467 (image 18c53f467) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c53f467(void)

{
  (*_DAT_181ed5448)();
  return;
}



// ===== continuation @ rva c54b8c8 (image 18c54b8c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c54b8c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ed0378)();
  return;
}



// ===== continuation @ rva c54b71f (image 18c54b71f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c54b71f(void)

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



// ===== continuation @ rva c535b01 (image 18c535b01) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c535b01(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ec5b58)();
  return;
}



// ===== continuation @ rva c5359c7 (image 18c5359c7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5359c7(void)

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



// ===== continuation @ rva c56d634 (image 18c56d634) =====

void FUN_18c56d634(void)

{
  return;
}



// ===== continuation @ rva c5692a4 (image 18c5692a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5692a4(void)

{
  FUN_190ddce00();
  (*_DAT_181ed6c28)();
  return;
}



// ===== continuation @ rva c56e061 (image 18c56e061) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c56e061(void)

{
  (*_DAT_181ed7808)();
  return;
}



// ===== continuation @ rva c56c57b (image 18c56c57b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c56c57b(void)

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



// ===== continuation @ rva c56e4ea (image 18c56e4ea) =====

void FUN_18c56e4ea(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5692d7 (image 18c5692d7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5692d7(void)

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



// ===== continuation @ rva c56c545 (image 18c56c545) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c56c545(void)

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



// ===== continuation @ rva c56df2b (image 18c56df2b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c56df2b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ed6c88)();
  return;
}



// ===== continuation @ rva c56e42e (image 18c56e42e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c56e42e(void)

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



// ===== continuation @ rva c56d0e5 (image 18c56d0e5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c56d0e5(void)

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



// ===== continuation @ rva c571d57 (image 18c571d57) =====

void FUN_18c571d57(void)

{
  return;
}



// ===== continuation @ rva c56e6d4 (image 18c56e6d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c56e6d4(void)

{
  FUN_190ddce00();
  (*_DAT_181ed8cf8)();
  return;
}



// ===== continuation @ rva c570a66 (image 18c570a66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c570a66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ed8a58)();
  return;
}



// ===== continuation @ rva c57072e (image 18c57072e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57072e(void)

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



// ===== continuation @ rva c5705ae (image 18c5705ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5705ae(void)

{
  FUN_190dd72e0();
  (*_DAT_181ed87e8)();
  return;
}



// ===== continuation @ rva c570531 (image 18c570531) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c570531(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ed8878)();
  return;
}



// ===== continuation @ rva c571ee9 (image 18c571ee9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c571ee9(void)

{
  (*_DAT_181ed8d48)();
  return;
}



// ===== continuation @ rva c570773 (image 18c570773) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c570773(void)

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



// ===== continuation @ rva c570929 (image 18c570929) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c570929(void)

{
  (*_DAT_181ed8918)();
  return;
}



// ===== continuation @ rva c571a81 (image 18c571a81) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c571a81(void)

{
  (*_DAT_181ed8ea8)();
  return;
}



// ===== continuation @ rva c57050c (image 18c57050c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57050c(void)

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



// ===== continuation @ rva c571690 (image 18c571690) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c571690(void)

{
  (*_DAT_181ed8918)();
  return;
}



// ===== continuation @ rva c575842 (image 18c575842) =====

void FUN_18c575842(void)

{
  return;
}



// ===== continuation @ rva c5720c7 (image 18c5720c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5720c7(void)

{
  FUN_190ddce00();
  (*_DAT_181ed96c8)();
  return;
}



// ===== continuation @ rva c575eb5 (image 18c575eb5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c575eb5(void)

{
  (*_DAT_181ed9e28)();
  return;
}



// ===== continuation @ rva c574d16 (image 18c574d16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c574d16(void)

{
  FUN_190dd72e0();
  (*_DAT_181ed9688)();
  return;
}



// ===== continuation @ rva c574c99 (image 18c574c99) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c574c99(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ed9938)();
  return;
}



// ===== continuation @ rva c576047 (image 18c576047) =====

void FUN_18c576047(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c575202 (image 18c575202) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c575202(void)

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



// ===== continuation @ rva c57561b (image 18c57561b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57561b(void)

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



// ===== continuation @ rva c574f6f (image 18c574f6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c574f6f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ed9748)();
  return;
}



// ===== continuation @ rva c574d5f (image 18c574d5f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c574d5f(void)

{
  FUN_190dd9df0();
  (*_DAT_181ed9868)();
  return;
}



// ===== continuation @ rva c575e89 (image 18c575e89) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c575e89(void)

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



// ===== continuation @ rva c57503b (image 18c57503b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57503b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ed9b98)();
  return;
}



// ===== continuation @ rva c574db6 (image 18c574db6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c574db6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181ed9c58)();
  return;
}



// ===== continuation @ rva c57b7c8 (image 18c57b7c8) =====

void FUN_18c57b7c8(void)

{
  return;
}



// ===== continuation @ rva c5761d4 (image 18c5761d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5761d4(void)

{
  FUN_190ddce00();
  (*_DAT_181edaa48)();
  return;
}



// ===== continuation @ rva c57b7b7 (image 18c57b7b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57b7b7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181edb858)();
  return;
}



// ===== continuation @ rva c57b0da (image 18c57b0da) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57b0da(void)

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



// ===== continuation @ rva c57ae84 (image 18c57ae84) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57ae84(void)

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



// ===== continuation @ rva c57b281 (image 18c57b281) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57b281(void)

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



// ===== continuation @ rva c57a3c4 (image 18c57a3c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57a3c4(void)

{
  FUN_190dd72e0();
  (*_DAT_181edaf28)();
  return;
}



// ===== continuation @ rva c57b21b (image 18c57b21b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57b21b(void)

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



// ===== continuation @ rva c57ab7b (image 18c57ab7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57ab7b(void)

{
  (*_DAT_181edb638)();
  return;
}



// ===== continuation @ rva c57a640 (image 18c57a640) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57a640(void)

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



// ===== continuation @ rva c579c93 (image 18c579c93) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c579c93(void)

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



// ===== continuation @ rva c57be2e (image 18c57be2e) =====

void FUN_18c57be2e(void)

{
  return;
}



// ===== continuation @ rva c57b981 (image 18c57b981) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57b981(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181edc2e8)();
  return;
}



// ===== continuation @ rva c57be36 (image 18c57be36) =====

void FUN_18c57be36(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c57ba19 (image 18c57ba19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57ba19(void)

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



// ===== continuation @ rva c57bcd7 (image 18c57bcd7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57bcd7(void)

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



// ===== continuation @ rva c57bbf2 (image 18c57bbf2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57bbf2(void)

{
  FUN_190dd72e0();
  (*_DAT_181edc3f8)();
  return;
}



// ===== continuation @ rva c57bd20 (image 18c57bd20) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57bd20(void)

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



// ===== continuation @ rva c57bcf8 (image 18c57bcf8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57bcf8(void)

{
  FUN_190dd72e0();
  (*_DAT_181edc2b8)();
  return;
}



// ===== continuation @ rva c57bd98 (image 18c57bd98) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57bd98(void)

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



// ===== continuation @ rva c57b9a0 (image 18c57b9a0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57b9a0(void)

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



// ===== continuation @ rva c57fa62 (image 18c57fa62) =====

void FUN_18c57fa62(void)

{
  return;
}



// ===== continuation @ rva c57bf5b (image 18c57bf5b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57bf5b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181edc668)();
  return;
}



// ===== continuation @ rva c57fa76 (image 18c57fa76) =====

void FUN_18c57fa76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c57d360 (image 18c57d360) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57d360(void)

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



// ===== continuation @ rva c57d5b4 (image 18c57d5b4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57d5b4(void)

{
  longlong unaff_R12;
  
  switch(unaff_R12 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c57fa28 (image 18c57fa28) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fa28(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edc958)();
  return;
}



// ===== continuation @ rva c57d056 (image 18c57d056) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57d056(void)

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



// ===== continuation @ rva c57d619 (image 18c57d619) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57d619(void)

{
  FUN_190de3220();
  (*_DAT_181edc7f8)();
  return;
}



// ===== continuation @ rva c57c7c9 (image 18c57c7c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57c7c9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edd468)();
  return;
}



// ===== continuation @ rva c57ed77 (image 18c57ed77) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57ed77(void)

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



// ===== continuation @ rva c57f7f6 (image 18c57f7f6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57f7f6(void)

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



// ===== continuation @ rva c57fc26 (image 18c57fc26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fc26(void)

{
  FUN_190dd72e0();
  (*_DAT_181edd9a8)();
  return;
}



// ===== continuation @ rva c57fbb3 (image 18c57fbb3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fbb3(void)

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



// ===== continuation @ rva c57fcfe (image 18c57fcfe) =====

void FUN_18c57fcfe(void)

{
  return;
}



// ===== continuation @ rva c57fcc6 (image 18c57fcc6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fcc6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edd968)();
  return;
}



// ===== continuation @ rva c57fd06 (image 18c57fd06) =====

void FUN_18c57fd06(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c57fc11 (image 18c57fc11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57fc11(void)

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



// ===== continuation @ rva c57fbec (image 18c57fbec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fbec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edd948)();
  return;
}



// ===== continuation @ rva c57fced (image 18c57fced) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fced(void)

{
  (*_DAT_181edd9b8)();
  return;
}



// ===== continuation @ rva c57fc6f (image 18c57fc6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fc6f(void)

{
  FUN_190dd9df0();
  (*_DAT_181edd988)();
  return;
}



// ===== continuation @ rva c57fca2 (image 18c57fca2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57fca2(void)

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



// ===== continuation @ rva c5804b6 (image 18c5804b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5804b6(void)

{
  FUN_190dd72e0();
  (*_DAT_181eddd58)();
  return;
}



// ===== continuation @ rva c580443 (image 18c580443) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580443(void)

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



// ===== continuation @ rva c580596 (image 18c580596) =====

void FUN_18c580596(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c58058e (image 18c58058e) =====

void FUN_18c58058e(void)

{
  return;
}



// ===== continuation @ rva c580556 (image 18c580556) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580556(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181eddd28)();
  return;
}



// ===== continuation @ rva c5804a1 (image 18c5804a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5804a1(void)

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



// ===== continuation @ rva c58057d (image 18c58057d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58057d(void)

{
  (*_DAT_181eddce8)();
  return;
}



// ===== continuation @ rva c5804ff (image 18c5804ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5804ff(void)

{
  FUN_190dd9df0();
  (*_DAT_181eddd68)();
  return;
}



// ===== continuation @ rva c58047c (image 18c58047c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58047c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181eddd18)();
  return;
}



// ===== continuation @ rva c5806b6 (image 18c5806b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5806b6(void)

{
  FUN_190dd72e0();
  (*_DAT_181edde08)();
  return;
}



// ===== continuation @ rva c580643 (image 18c580643) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580643(void)

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



// ===== continuation @ rva c58078e (image 18c58078e) =====

void FUN_18c58078e(void)

{
  return;
}



// ===== continuation @ rva c580756 (image 18c580756) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580756(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edddd8)();
  return;
}



// ===== continuation @ rva c580796 (image 18c580796) =====

void FUN_18c580796(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c58077d (image 18c58077d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58077d(void)

{
  (*_DAT_181edde38)();
  return;
}



// ===== continuation @ rva c5806ff (image 18c5806ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5806ff(void)

{
  FUN_190dd9df0();
  (*_DAT_181edddf8)();
  return;
}



// ===== continuation @ rva c580732 (image 18c580732) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c580732(void)

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



// ===== continuation @ rva c5806de (image 18c5806de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5806de(void)

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



// ===== continuation @ rva c5806a1 (image 18c5806a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5806a1(void)

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



// ===== continuation @ rva c5808b6 (image 18c5808b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5808b6(void)

{
  FUN_190dd72e0();
  (*_DAT_181eddf08)();
  return;
}



// ===== continuation @ rva c580843 (image 18c580843) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580843(void)

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



// ===== continuation @ rva c58098e (image 18c58098e) =====

void FUN_18c58098e(void)

{
  return;
}



// ===== continuation @ rva c5808ff (image 18c5808ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5808ff(void)

{
  FUN_190dd9df0();
  (*_DAT_181eddf18)();
  return;
}



// ===== continuation @ rva c580956 (image 18c580956) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580956(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181eddee8)();
  return;
}



// ===== continuation @ rva c580996 (image 18c580996) =====

void FUN_18c580996(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5808a1 (image 18c5808a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5808a1(void)

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



// ===== continuation @ rva c58097d (image 18c58097d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58097d(void)

{
  (*_DAT_181eddef8)();
  return;
}



// ===== continuation @ rva c5808de (image 18c5808de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5808de(void)

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



// ===== continuation @ rva c580ab6 (image 18c580ab6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580ab6(void)

{
  FUN_190dd72e0();
  (*_DAT_181eddfe8)();
  return;
}



// ===== continuation @ rva c580a43 (image 18c580a43) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580a43(void)

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



// ===== continuation @ rva c580b96 (image 18c580b96) =====

void FUN_18c580b96(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c580b7d (image 18c580b7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580b7d(void)

{
  (*_DAT_181ede008)();
  return;
}



// ===== continuation @ rva c580aa1 (image 18c580aa1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c580aa1(void)

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



// ===== continuation @ rva c580b8e (image 18c580b8e) =====

void FUN_18c580b8e(void)

{
  return;
}



// ===== continuation @ rva c580aff (image 18c580aff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580aff(void)

{
  FUN_190dd9df0();
  (*_DAT_181eddff8)();
  return;
}



// ===== continuation @ rva c580a7c (image 18c580a7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580a7c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181eddf98)();
  return;
}



// ===== continuation @ rva c580b56 (image 18c580b56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580b56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181eddf88)();
  return;
}



// ===== continuation @ rva c580ade (image 18c580ade) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c580ade(void)

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



// ===== continuation @ rva c580cb6 (image 18c580cb6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580cb6(void)

{
  FUN_190dd72e0();
  (*_DAT_181ede0e8)();
  return;
}



// ===== continuation @ rva c580c43 (image 18c580c43) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580c43(void)

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



// ===== continuation @ rva c580d8e (image 18c580d8e) =====

void FUN_18c580d8e(void)

{
  return;
}



// ===== continuation @ rva c580c7c (image 18c580c7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580c7c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede078)();
  return;
}



// ===== continuation @ rva c580d96 (image 18c580d96) =====

void FUN_18c580d96(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c580ca1 (image 18c580ca1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c580ca1(void)

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



// ===== continuation @ rva c580cff (image 18c580cff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580cff(void)

{
  FUN_190dd9df0();
  (*_DAT_181ede098)();
  return;
}



// ===== continuation @ rva c580d32 (image 18c580d32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c580d32(void)

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



// ===== continuation @ rva c580d56 (image 18c580d56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580d56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede0c8)();
  return;
}



// ===== continuation @ rva c580d7d (image 18c580d7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580d7d(void)

{
  (*_DAT_181ede0d8)();
  return;
}



// ===== continuation @ rva c580eb6 (image 18c580eb6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580eb6(void)

{
  FUN_190dd72e0();
  (*_DAT_181ede1a8)();
  return;
}



// ===== continuation @ rva c580e43 (image 18c580e43) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580e43(void)

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



// ===== continuation @ rva c580f8e (image 18c580f8e) =====

void FUN_18c580f8e(void)

{
  return;
}



// ===== continuation @ rva c580eff (image 18c580eff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580eff(void)

{
  FUN_190dd9df0();
  (*_DAT_181ede188)();
  return;
}



// ===== continuation @ rva c580e7c (image 18c580e7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580e7c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede198)();
  return;
}



// ===== continuation @ rva c580f96 (image 18c580f96) =====

void FUN_18c580f96(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c580f7d (image 18c580f7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580f7d(void)

{
  (*_DAT_181ede1b8)();
  return;
}



// ===== continuation @ rva c580f32 (image 18c580f32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c580f32(void)

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



// ===== continuation @ rva c580ea1 (image 18c580ea1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c580ea1(void)

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



// ===== continuation @ rva c580ede (image 18c580ede) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c580ede(void)

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



// ===== continuation @ rva c5810b6 (image 18c5810b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5810b6(void)

{
  FUN_190dd72e0();
  (*_DAT_181ede238)();
  return;
}



// ===== continuation @ rva c581043 (image 18c581043) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581043(void)

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



// ===== continuation @ rva c581196 (image 18c581196) =====

void FUN_18c581196(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c58118e (image 18c58118e) =====

void FUN_18c58118e(void)

{
  return;
}



// ===== continuation @ rva c5810de (image 18c5810de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5810de(void)

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



// ===== continuation @ rva c581156 (image 18c581156) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581156(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede268)();
  return;
}



// ===== continuation @ rva c581132 (image 18c581132) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c581132(void)

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



// ===== continuation @ rva c58117d (image 18c58117d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58117d(void)

{
  (*_DAT_181ede228)();
  return;
}



// ===== continuation @ rva c58107c (image 18c58107c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58107c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede288)();
  return;
}



// ===== continuation @ rva c5810a1 (image 18c5810a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5810a1(void)

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



// ===== continuation @ rva c5812b6 (image 18c5812b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5812b6(void)

{
  FUN_190dd72e0();
  (*_DAT_181ede328)();
  return;
}



// ===== continuation @ rva c581243 (image 18c581243) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581243(void)

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



// ===== continuation @ rva c581396 (image 18c581396) =====

void FUN_18c581396(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c58138e (image 18c58138e) =====

void FUN_18c58138e(void)

{
  return;
}



// ===== continuation @ rva c5812a1 (image 18c5812a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5812a1(void)

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



// ===== continuation @ rva c5812de (image 18c5812de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5812de(void)

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



// ===== continuation @ rva c581332 (image 18c581332) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c581332(void)

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



// ===== continuation @ rva c5812ff (image 18c5812ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5812ff(void)

{
  FUN_190dd9df0();
  (*_DAT_181ede338)();
  return;
}



// ===== continuation @ rva c58127c (image 18c58127c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58127c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede318)();
  return;
}



// ===== continuation @ rva c581356 (image 18c581356) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581356(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede388)();
  return;
}



// ===== continuation @ rva c5814b6 (image 18c5814b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5814b6(void)

{
  FUN_190dd72e0();
  (*_DAT_181ede448)();
  return;
}



// ===== continuation @ rva c581443 (image 18c581443) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581443(void)

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



// ===== continuation @ rva c58158e (image 18c58158e) =====

void FUN_18c58158e(void)

{
  return;
}



// ===== continuation @ rva c581556 (image 18c581556) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581556(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede438)();
  return;
}



// ===== continuation @ rva c58147c (image 18c58147c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58147c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede468)();
  return;
}



// ===== continuation @ rva c581596 (image 18c581596) =====

void FUN_18c581596(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5814ff (image 18c5814ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5814ff(void)

{
  FUN_190dd9df0();
  (*_DAT_181ede458)();
  return;
}



// ===== continuation @ rva c58157d (image 18c58157d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58157d(void)

{
  (*_DAT_181ede408)();
  return;
}



// ===== continuation @ rva c5814de (image 18c5814de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5814de(void)

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



// ===== continuation @ rva c5816b6 (image 18c5816b6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5816b6(void)

{
  FUN_190dd72e0();
  (*_DAT_181ede508)();
  return;
}



// ===== continuation @ rva c581643 (image 18c581643) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581643(void)

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



// ===== continuation @ rva c58178e (image 18c58178e) =====

void FUN_18c58178e(void)

{
  return;
}



// ===== continuation @ rva c581796 (image 18c581796) =====

void FUN_18c581796(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c581732 (image 18c581732) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c581732(void)

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



// ===== continuation @ rva c581756 (image 18c581756) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581756(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ede528)();
  return;
}



// ===== continuation @ rva c5816de (image 18c5816de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5816de(void)

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



// ===== continuation @ rva c5816a1 (image 18c5816a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5816a1(void)

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



// ===== continuation @ rva c58177d (image 18c58177d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58177d(void)

{
  (*_DAT_181ede4e8)();
  return;
}



// ===== continuation @ rva c585946 (image 18c585946) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585946(void)

{
  FUN_190dd72e0();
  (*_DAT_181edfd48)();
  return;
}



// ===== continuation @ rva c5858d3 (image 18c5858d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5858d3(void)

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



// ===== continuation @ rva c585a26 (image 18c585a26) =====

void FUN_18c585a26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5859c2 (image 18c5859c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5859c2(void)

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



// ===== continuation @ rva c58596e (image 18c58596e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58596e(void)

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



// ===== continuation @ rva c585a0d (image 18c585a0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585a0d(void)

{
  (*_DAT_181edfda8)();
  return;
}



// ===== continuation @ rva c585a1e (image 18c585a1e) =====

void FUN_18c585a1e(void)

{
  return;
}



// ===== continuation @ rva c58598f (image 18c58598f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58598f(void)

{
  FUN_190dd9df0();
  (*_DAT_181edfd38)();
  return;
}



// ===== continuation @ rva c58590c (image 18c58590c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58590c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edfdb8)();
  return;
}



// ===== continuation @ rva c5859e6 (image 18c5859e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5859e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edfd58)();
  return;
}



// ===== continuation @ rva c585b46 (image 18c585b46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585b46(void)

{
  FUN_190dd72e0();
  (*_DAT_181edfe38)();
  return;
}



// ===== continuation @ rva c585ad3 (image 18c585ad3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585ad3(void)

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



// ===== continuation @ rva c585c26 (image 18c585c26) =====

void FUN_18c585c26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c585bc2 (image 18c585bc2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c585bc2(void)

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



// ===== continuation @ rva c585c0d (image 18c585c0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585c0d(void)

{
  (*_DAT_181edfe48)();
  return;
}



// ===== continuation @ rva c585b6e (image 18c585b6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c585b6e(void)

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



// ===== continuation @ rva c585c1e (image 18c585c1e) =====

void FUN_18c585c1e(void)

{
  return;
}



// ===== continuation @ rva c585b8f (image 18c585b8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585b8f(void)

{
  FUN_190dd9df0();
  (*_DAT_181edfe18)();
  return;
}



// ===== continuation @ rva c585be6 (image 18c585be6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585be6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edfe28)();
  return;
}



// ===== continuation @ rva c585b31 (image 18c585b31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c585b31(void)

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



// ===== continuation @ rva c585d46 (image 18c585d46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585d46(void)

{
  FUN_190dd72e0();
  (*_DAT_181edff78)();
  return;
}



// ===== continuation @ rva c585cd3 (image 18c585cd3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585cd3(void)

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



// ===== continuation @ rva c585e26 (image 18c585e26) =====

void FUN_18c585e26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c585e1e (image 18c585e1e) =====

void FUN_18c585e1e(void)

{
  return;
}



// ===== continuation @ rva c585d0c (image 18c585d0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585d0c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edff58)();
  return;
}



// ===== continuation @ rva c585de6 (image 18c585de6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585de6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edff38)();
  return;
}



// ===== continuation @ rva c585dc2 (image 18c585dc2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c585dc2(void)

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



// ===== continuation @ rva c585e0d (image 18c585e0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585e0d(void)

{
  (*_DAT_181edfef8)();
  return;
}



// ===== continuation @ rva c585d8f (image 18c585d8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585d8f(void)

{
  FUN_190dd9df0();
  (*_DAT_181edff28)();
  return;
}



// ===== continuation @ rva c585d31 (image 18c585d31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c585d31(void)

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



// ===== continuation @ rva c585f46 (image 18c585f46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585f46(void)

{
  FUN_190dd72e0();
  (*_DAT_181edffe8)();
  return;
}



// ===== continuation @ rva c585ed3 (image 18c585ed3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585ed3(void)

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



// ===== continuation @ rva c58601e (image 18c58601e) =====

void FUN_18c58601e(void)

{
  return;
}



// ===== continuation @ rva c586026 (image 18c586026) =====

void FUN_18c586026(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c585f6e (image 18c585f6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c585f6e(void)

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



// ===== continuation @ rva c585f31 (image 18c585f31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c585f31(void)

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



// ===== continuation @ rva c58600d (image 18c58600d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58600d(void)

{
  (*_DAT_181ee0008)();
  return;
}



// ===== continuation @ rva c585f0c (image 18c585f0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585f0c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181edfff8)();
  return;
}



// ===== continuation @ rva c585f8f (image 18c585f8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585f8f(void)

{
  FUN_190dd9df0();
  (*_DAT_181ee0048)();
  return;
}



// ===== continuation @ rva c586146 (image 18c586146) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c586146(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee00b8)();
  return;
}



// ===== continuation @ rva c5860d3 (image 18c5860d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5860d3(void)

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



// ===== continuation @ rva c586226 (image 18c586226) =====

void FUN_18c586226(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c58616e (image 18c58616e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58616e(void)

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



// ===== continuation @ rva c58621e (image 18c58621e) =====

void FUN_18c58621e(void)

{
  return;
}



// ===== continuation @ rva c5861e6 (image 18c5861e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5861e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ee0108)();
  return;
}



// ===== continuation @ rva c58618f (image 18c58618f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58618f(void)

{
  FUN_190dd9df0();
  (*_DAT_181ee0118)();
  return;
}



// ===== continuation @ rva c58620d (image 18c58620d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58620d(void)

{
  (*_DAT_181ee00d8)();
  return;
}



// ===== continuation @ rva c5861c2 (image 18c5861c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5861c2(void)

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



// ===== continuation @ rva c586346 (image 18c586346) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c586346(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee01e8)();
  return;
}



// ===== continuation @ rva c5862d3 (image 18c5862d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5862d3(void)

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



// ===== continuation @ rva c586426 (image 18c586426) =====

void FUN_18c586426(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5863c2 (image 18c5863c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5863c2(void)

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



// ===== continuation @ rva c58641e (image 18c58641e) =====

void FUN_18c58641e(void)

{
  return;
}



// ===== continuation @ rva c5863e6 (image 18c5863e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5863e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ee01d8)();
  return;
}



// ===== continuation @ rva c58630c (image 18c58630c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58630c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ee01f8)();
  return;
}



// ===== continuation @ rva c58640d (image 18c58640d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58640d(void)

{
  (*_DAT_181ee0208)();
  return;
}



// ===== continuation @ rva c58636e (image 18c58636e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58636e(void)

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



// ===== continuation @ rva c586331 (image 18c586331) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c586331(void)

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



// ===== continuation @ rva c52f586 (image 18c52f586) =====

void FUN_18c52f586(void)

{
  return;
}



// ===== continuation @ rva c5298dd (image 18c5298dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5298dd(void)

{
  FUN_190ddce00();
  (*_DAT_181ec1d48)();
  return;
}



// ===== continuation @ rva c52e38a (image 18c52e38a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52e38a(void)

{
  (*_DAT_181ec2528)();
  return;
}



// ===== continuation @ rva c52f9ed (image 18c52f9ed) =====

void FUN_18c52f9ed(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c52d61e (image 18c52d61e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c52d61e(void)

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



// ===== continuation @ rva c52f9d7 (image 18c52f9d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52f9d7(void)

{
  (*_DAT_181ec1ed8)();
  return;
}



// ===== continuation @ rva c52d89b (image 18c52d89b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c52d89b(void)

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



// ===== continuation @ rva c52d98f (image 18c52d98f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52d98f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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



// ===== continuation @ rva c52ee9f (image 18c52ee9f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52ee9f(void)

{
  (*_DAT_181ec2348)();
  return;
}



// ===== continuation @ rva c52d149 (image 18c52d149) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52d149(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ec1e48)();
  return;
}



// ===== continuation @ rva c52d01e (image 18c52d01e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52d01e(void)

{
  FUN_190ddfc90();
  (*_DAT_181ec1b68)();
  return;
}



// ===== continuation @ rva c52e424 (image 18c52e424) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52e424(void)

{
  (*_DAT_181ec25f8)();
  return;
}



// ===== continuation @ rva c52dbbb (image 18c52dbbb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c52dbbb(void)

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



// ===== continuation @ rva c52fba6 (image 18c52fba6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fba6(void)

{
  FUN_190dd72e0();
  (*_DAT_181ec3488)();
  return;
}



// ===== continuation @ rva c52fb33 (image 18c52fb33) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fb33(void)

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



// ===== continuation @ rva c52fd8c (image 18c52fd8c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fd8c(void)

{
  longlong *unaff_RSI;
  
  FUN_1842a3a30();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ec34c8)(0);
  return;
}



// ===== continuation @ rva c52fd38 (image 18c52fd38) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fd38(void)

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



// ===== continuation @ rva c52fdb8 (image 18c52fdb8) =====

void FUN_18c52fdb8(void)

{
  return;
}



// ===== continuation @ rva c52fb6c (image 18c52fb6c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fb6c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ec3468)();
  return;
}



// ===== continuation @ rva c52fdc0 (image 18c52fdc0) =====

void FUN_18c52fdc0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c52fc22 (image 18c52fc22) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c52fc22(void)

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



// ===== continuation @ rva c52fcfe (image 18c52fcfe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c52fcfe(void)

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



// ===== continuation @ rva c52fbef (image 18c52fbef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fbef(void)

{
  FUN_190dd9df0();
  (*_DAT_181ec3408)();
  return;
}



// ===== continuation @ rva c52fccb (image 18c52fccb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fccb(void)

{
  FUN_190ddfc90();
  (*_DAT_181ec3418)();
  return;
}



// ===== continuation @ rva c52fd71 (image 18c52fd71) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c52fd71(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ec34c8)();
  return;
}



// ===== continuation @ rva c580393 (image 18c580393) =====

void FUN_18c580393(void)

{
  return;
}



// ===== continuation @ rva c57fde6 (image 18c57fde6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fde6(void)

{
  FUN_190ddce00();
  (*_DAT_181eddb98)();
  return;
}



// ===== continuation @ rva c58039b (image 18c58039b) =====

void FUN_18c58039b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c57fe78 (image 18c57fe78) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57fe78(void)

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



// ===== continuation @ rva c580382 (image 18c580382) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c580382(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181edda18)();
  return;
}



// ===== continuation @ rva c58017b (image 18c58017b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58017b(void)

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



// ===== continuation @ rva c5800e9 (image 18c5800e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5800e9(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181eddb18)();
  return;
}



// ===== continuation @ rva c57ffde (image 18c57ffde) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c57ffde(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x2f8))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c57fe5e (image 18c57fe5e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c57fe5e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_181edda28)();
  return;
}



// ===== continuation @ rva c5800de (image 18c5800de) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5800de(void)

{
  (*_DAT_181eddc18)();
  return;
}



// ===== continuation @ rva c582335 (image 18c582335) =====

void FUN_18c582335(void)

{
  return;
}



// ===== continuation @ rva c581881 (image 18c581881) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c581881(void)

{
  FUN_190ddce00();
  (*_DAT_181ede638)();
  return;
}



// ===== continuation @ rva c585737 (image 18c585737) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585737(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ede8e8)();
  return;
}



// ===== continuation @ rva c581d87 (image 18c581d87) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c581d87(void)

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



// ===== continuation @ rva c5848fb (image 18c5848fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5848fb(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181edecc8)();
  return;
}



// ===== continuation @ rva c584594 (image 18c584594) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c584594(void)

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



// ===== continuation @ rva c58546d (image 18c58546d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58546d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181edf988)();
  return;
}



// ===== continuation @ rva c585183 (image 18c585183) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c585183(void)

{
  FUN_190dd72e0();
  (*_DAT_181edf5c8)();
  return;
}



// ===== continuation @ rva c584fbe (image 18c584fbe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c584fbe(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181eded28)();
  return;
}



// ===== continuation @ rva c584c3b (image 18c584c3b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c584c3b(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181edf8f8)();
  return;
}



// ===== continuation @ rva c5847be (image 18c5847be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5847be(void)

{
  (*_DAT_181edfcd8)();
  return;
}



// ===== continuation @ rva c5845d1 (image 18c5845d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5845d1(void)

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



// ===== continuation @ rva c584797 (image 18c584797) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c584797(void)

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



// ===== continuation @ rva c59f12d (image 18c59f12d) =====

void FUN_18c59f12d(void)

{
  return;
}



// ===== continuation @ rva c59b297 (image 18c59b297) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59b297(void)

{
  FUN_190ddce00();
  (*_DAT_181ee6c08)();
  return;
}



// ===== continuation @ rva c59ea2e (image 18c59ea2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59ea2e(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee6ae8)();
  return;
}



// ===== continuation @ rva c59f247 (image 18c59f247) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59f247(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee6ab8)();
  return;
}



// ===== continuation @ rva c59ed13 (image 18c59ed13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59ed13(void)

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



// ===== continuation @ rva c59efa7 (image 18c59efa7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59efa7(void)

{
  (*_DAT_181ee6cd8)();
  return;
}



// ===== continuation @ rva c59f2ed (image 18c59f2ed) =====

void FUN_18c59f2ed(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c59f1b8 (image 18c59f1b8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59f1b8(void)

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



// ===== continuation @ rva c59ecbf (image 18c59ecbf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59ecbf(void)

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



// ===== continuation @ rva c59e89d (image 18c59e89d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59e89d(void)

{
  (*_DAT_181ee6f38)();
  return;
}



// ===== continuation @ rva c59eeaf (image 18c59eeaf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59eeaf(void)

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



// ===== continuation @ rva c5d4810 (image 18c5d4810) =====

void FUN_18c5d4810(void)

{
  return;
}



// ===== continuation @ rva c5cf868 (image 18c5cf868) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5cf868(void)

{
  FUN_190ddce00();
  (*_DAT_181ef07c8)();
  return;
}



// ===== continuation @ rva c5d482f (image 18c5d482f) =====

void FUN_18c5d482f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5d3ae9 (image 18c5d3ae9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5d3ae9(void)

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



// ===== continuation @ rva c5d47b5 (image 18c5d47b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5d47b5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181eefbe8)();
  return;
}



// ===== continuation @ rva c5d150a (image 18c5d150a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5d150a(void)

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



// ===== continuation @ rva c5cfc65 (image 18c5cfc65) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5cfc65(void)

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



// ===== continuation @ rva c5d2a48 (image 18c5d2a48) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5d2a48(void)

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



// ===== continuation @ rva c5d1dd4 (image 18c5d1dd4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5d1dd4(void)

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



// ===== continuation @ rva c5cf8e0 (image 18c5cf8e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5cf8e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_181ef0488)();
  return;
}



// ===== continuation @ rva c5d3309 (image 18c5d3309) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5d3309(void)

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



// ===== continuation @ rva c5e10b5 (image 18c5e10b5) =====

void FUN_18c5e10b5(void)

{
  return;
}



// ===== continuation @ rva c5d4a12 (image 18c5d4a12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5d4a12(void)

{
  FUN_190ddce00();
  (*_DAT_181ef25b8)();
  return;
}



// ===== continuation @ rva c5df904 (image 18c5df904) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5df904(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181ef2f98)();
  return;
}



// ===== continuation @ rva c5df021 (image 18c5df021) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5df021(void)

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



// ===== continuation @ rva c5e0937 (image 18c5e0937) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e0937(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ef47b8)();
  return;
}



// ===== continuation @ rva c5dbdf8 (image 18c5dbdf8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5dbdf8(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181ef24d8)();
  return;
}



// ===== continuation @ rva c5d98d4 (image 18c5d98d4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5d98d4(void)

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



// ===== continuation @ rva c5e10a4 (image 18c5e10a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e10a4(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_181ef47b8)();
  return;
}



// ===== continuation @ rva c5dd360 (image 18c5dd360) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5dd360(void)

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



// ===== continuation @ rva c5deb55 (image 18c5deb55) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5deb55(void)

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



// ===== continuation @ rva c5e00e0 (image 18c5e00e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e00e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ef47b8)();
  return;
}



// ===== continuation @ rva c5e1121 (image 18c5e1121) =====

void FUN_18c5e1121(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5da86a (image 18c5da86a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5da86a(void)

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



// ===== continuation @ rva c5e5a26 (image 18c5e5a26) =====

void FUN_18c5e5a26(void)

{
  return;
}



// ===== continuation @ rva c5e13a4 (image 18c5e13a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e13a4(void)

{
  FUN_190ddce00();
  (*_DAT_181ef5d68)();
  return;
}



// ===== continuation @ rva c5e6ea7 (image 18c5e6ea7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e6ea7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ef6258)();
  return;
}



// ===== continuation @ rva c5e8161 (image 18c5e8161) =====

void FUN_18c5e8161(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5e5b59 (image 18c5e5b59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5e5b59(void)

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



// ===== continuation @ rva c5e5754 (image 18c5e5754) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e5754(void)

{
  (*_DAT_181ef6688)();
  return;
}



// ===== continuation @ rva c5e5040 (image 18c5e5040) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5e5040(void)

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



// ===== continuation @ rva c5e6db3 (image 18c5e6db3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e6db3(void)

{
  FUN_190dd72e0();
  (*_DAT_181ef5b08)();
  return;
}



// ===== continuation @ rva c5e8019 (image 18c5e8019) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e8019(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181ef6768)();
  return;
}



// ===== continuation @ rva c5e60b9 (image 18c5e60b9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5e60b9(void)

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



// ===== continuation @ rva c5e6d51 (image 18c5e6d51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5e6d51(void)

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



// ===== continuation @ rva c5e7617 (image 18c5e7617) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e7617(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ef60f8)();
  return;
}



// ===== continuation @ rva c5e834d (image 18c5e834d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e834d(void)

{
  FUN_190dd72e0();
  (*_DAT_181ef78b8)();
  return;
}



// ===== continuation @ rva c5e82cf (image 18c5e82cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e82cf(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ef7538)();
  return;
}



// ===== continuation @ rva c5e8f54 (image 18c5e8f54) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5e8f54(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1842a3a30();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c5e8c29 (image 18c5e8c29) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5e8c29(void)

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



// ===== continuation @ rva c5e85f3 (image 18c5e85f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5e85f3(void)

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



// ===== continuation @ rva c5e8998 (image 18c5e8998) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5e8998(void)

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



// ===== continuation @ rva c5e8944 (image 18c5e8944) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e8944(void)

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



// ===== continuation @ rva c5e8f92 (image 18c5e8f92) =====

void FUN_18c5e8f92(void)

{
  return;
}



// ===== continuation @ rva c5e8888 (image 18c5e8888) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e8888(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181ef7968)();
  return;
}



// ===== continuation @ rva c5e8b6a (image 18c5e8b6a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e8b6a(void)

{
  FUN_190dd9df0();
  (*_DAT_181ef77a8)();
  return;
}



// ===== continuation @ rva c5e8a74 (image 18c5e8a74) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e8a74(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ef7868)();
  return;
}



// ===== continuation @ rva c5e8751 (image 18c5e8751) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e8751(void)

{
  FUN_190dd9df0();
  (*_DAT_181ef77e8)();
  return;
}



// ===== continuation @ rva c5e86d4 (image 18c5e86d4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5e86d4(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ef77b8)();
  return;
}



// ===== continuation @ rva c58bab0 (image 18c58bab0) =====

void FUN_18c58bab0(void)

{
  return;
}



// ===== continuation @ rva c58657d (image 18c58657d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58657d(void)

{
  FUN_190ddce00();
  (*_DAT_181ee1268)();
  return;
}



// ===== continuation @ rva c58b0d7 (image 18c58b0d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58b0d7(void)

{
  (*_DAT_181ee11f8)();
  return;
}



// ===== continuation @ rva c58ab95 (image 18c58ab95) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58ab95(void)

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



// ===== continuation @ rva c58b85a (image 18c58b85a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58b85a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181ee0c18)();
  return;
}



// ===== continuation @ rva c588fbd (image 18c588fbd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c588fbd(void)

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



// ===== continuation @ rva c588d4c (image 18c588d4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c588d4c(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee12b8)();
  return;
}



// ===== continuation @ rva c58b869 (image 18c58b869) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58b869(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee1188)();
  return;
}



// ===== continuation @ rva c58ba9f (image 18c58ba9f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58ba9f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181ee0b78)();
  return;
}



// ===== continuation @ rva c589a81 (image 18c589a81) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c589a81(void)

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



// ===== continuation @ rva c589e67 (image 18c589e67) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c589e67(void)

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



// ===== continuation @ rva c589f4b (image 18c589f4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c589f4b(void)

{
  (*_DAT_181ee12e8)();
  return;
}



// ===== continuation @ rva c58f243 (image 18c58f243) =====

void FUN_18c58f243(void)

{
  return;
}



// ===== continuation @ rva c58bd07 (image 18c58bd07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58bd07(void)

{
  FUN_190ddce00();
  (*_DAT_181ee2308)();
  return;
}



// ===== continuation @ rva c58f3d8 (image 18c58f3d8) =====

void FUN_18c58f3d8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c58bd9e (image 18c58bd9e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58bd9e(void)

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



// ===== continuation @ rva c58ee93 (image 18c58ee93) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58ee93(void)

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



// ===== continuation @ rva c58f30f (image 18c58f30f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f30f(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee2058)();
  return;
}



// ===== continuation @ rva c58ed87 (image 18c58ed87) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58ed87(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181ee1e08)();
  return;
}



// ===== continuation @ rva c58e9f5 (image 18c58e9f5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58e9f5(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee2088)();
  return;
}



// ===== continuation @ rva c58eda6 (image 18c58eda6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58eda6(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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



// ===== continuation @ rva c58f11d (image 18c58f11d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f11d(void)

{
  FUN_190de3220();
  (*_DAT_181ee2348)();
  return;
}



// ===== continuation @ rva c58f215 (image 18c58f215) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f215(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee20b8)();
  return;
}



// ===== continuation @ rva c58f600 (image 18c58f600) =====

void FUN_18c58f600(void)

{
  return;
}



// ===== continuation @ rva c58f4fa (image 18c58f4fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f4fa(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee2da8)();
  return;
}



// ===== continuation @ rva c58f608 (image 18c58f608) =====

void FUN_18c58f608(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c58f5dd (image 18c58f5dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f5dd(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181ee2d88)();
    return;
  }
  (*_DAT_181ee2d88)();
  return;
}



// ===== continuation @ rva c58f5f8 (image 18c58f5f8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f5f8(void)

{
  (*_DAT_181ee2d88)();
  return;
}



// ===== continuation @ rva c58f5a0 (image 18c58f5a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f5a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee2db8)();
  return;
}



// ===== continuation @ rva c58f5bb (image 18c58f5bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f5bb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181ee2d78)();
  return;
}



// ===== continuation @ rva c58f52d (image 18c58f52d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58f52d(void)

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



// ===== continuation @ rva c58f567 (image 18c58f567) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58f567(void)

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



// ===== continuation @ rva c58f551 (image 18c58f551) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58f551(void)

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



// ===== continuation @ rva c58fb8a (image 18c58fb8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fb8a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181ee3008)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva c58fb96 (image 18c58fb96) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58fb96(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva c58fbb3 (image 18c58fbb3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fbb3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_181ee3018)();
  return;
}



// ===== continuation @ rva c58fbbc (image 18c58fbbc) =====

void FUN_18c58fbbc(void)

{
  return;
}



// ===== continuation @ rva c58fbbd (image 18c58fbbd) =====

undefined4 * FUN_18c58fbbd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva c58fc1a (image 18c58fc1a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fc1a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181ee3048)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva c58fc26 (image 18c58fc26) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58fc26(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva c58fc4d (image 18c58fc4d) =====

undefined4 * FUN_18c58fc4d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva c58fc4c (image 18c58fc4c) =====

void FUN_18c58fc4c(void)

{
  return;
}



// ===== continuation @ rva c58fb0d (image 18c58fb0d) =====

void FUN_18c58fb0d(void)

{
  return;
}



// ===== continuation @ rva c58fa07 (image 18c58fa07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fa07(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee2e38)();
  return;
}



// ===== continuation @ rva c58fb43 (image 18c58fb43) =====

void FUN_18c58fb43(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c58fa3a (image 18c58fa3a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58fa3a(void)

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



// ===== continuation @ rva c58faea (image 18c58faea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58faea(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181ee2e78)();
    return;
  }
  (*_DAT_181ee2e78)();
  return;
}



// ===== continuation @ rva c58fa5e (image 18c58fa5e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58fa5e(void)

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



// ===== continuation @ rva c58fb05 (image 18c58fb05) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fb05(void)

{
  (*_DAT_181ee2e78)();
  return;
}



// ===== continuation @ rva c58faad (image 18c58faad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58faad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee2e48)();
  return;
}



// ===== continuation @ rva c58fac8 (image 18c58fac8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fac8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181ee2e58)();
  return;
}



// ===== continuation @ rva c58fa74 (image 18c58fa74) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fa74(void)

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



// ===== continuation @ rva c58fdcd (image 18c58fdcd) =====

void FUN_18c58fdcd(void)

{
  return;
}



// ===== continuation @ rva c58fcc7 (image 18c58fcc7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fcc7(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee30d8)();
  return;
}



// ===== continuation @ rva c58fd88 (image 18c58fd88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fd88(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181ee30a8)();
  return;
}



// ===== continuation @ rva c58fd34 (image 18c58fd34) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fd34(void)

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



// ===== continuation @ rva c58fd1e (image 18c58fd1e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58fd1e(void)

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



// ===== continuation @ rva c58fdc5 (image 18c58fdc5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fdc5(void)

{
  (*_DAT_181ee30b8)();
  return;
}



// ===== continuation @ rva c58fdaa (image 18c58fdaa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fdaa(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181ee30b8)();
    return;
  }
  (*_DAT_181ee30b8)();
  return;
}



// ===== continuation @ rva c58fd6d (image 18c58fd6d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58fd6d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee3078)();
  return;
}



// ===== continuation @ rva c58fcfa (image 18c58fcfa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c58fcfa(void)

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



// ===== continuation @ rva c5904f7 (image 18c5904f7) =====

void FUN_18c5904f7(void)

{
  return;
}



// ===== continuation @ rva c58febe (image 18c58febe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c58febe(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee31d8)();
  return;
}



// ===== continuation @ rva c5903b9 (image 18c5903b9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5903b9(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee3398)();
  return;
}



// ===== continuation @ rva c590156 (image 18c590156) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c590156(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee31f8)();
  return;
}



// ===== continuation @ rva c5900dc (image 18c5900dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5900dc(void)

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



// ===== continuation @ rva c59008a (image 18c59008a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59008a(void)

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



// ===== continuation @ rva c590459 (image 18c590459) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c590459(void)

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



// ===== continuation @ rva c59010d (image 18c59010d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59010d(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee3218)();
  return;
}



// ===== continuation @ rva c590503 (image 18c590503) =====

void FUN_18c590503(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c590239 (image 18c590239) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c590239(void)

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



// ===== continuation @ rva c5906d8 (image 18c5906d8) =====

void FUN_18c5906d8(void)

{
  return;
}



// ===== continuation @ rva c590617 (image 18c590617) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c590617(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee3408)();
  return;
}



// ===== continuation @ rva c5906bd (image 18c5906bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5906bd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee3418)();
  return;
}



// ===== continuation @ rva c590725 (image 18c590725) =====

void FUN_18c590725(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c59064a (image 18c59064a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59064a(void)

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



// ===== continuation @ rva c5906e0 (image 18c5906e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5906e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181ee3448)();
  return;
}



// ===== continuation @ rva c590684 (image 18c590684) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c590684(void)

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



// ===== continuation @ rva c59066e (image 18c59066e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59066e(void)

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



// ===== continuation @ rva c590702 (image 18c590702) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c590702(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181ee3418)();
    return;
  }
  (*_DAT_181ee3418)();
  return;
}



// ===== continuation @ rva c59075a (image 18c59075a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59075a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181ee3488)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva c590766 (image 18c590766) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c590766(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva c590e4d (image 18c590e4d) =====

void FUN_18c590e4d(void)

{
  return;
}



// ===== continuation @ rva c590818 (image 18c590818) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c590818(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee3508)();
  return;
}



// ===== continuation @ rva c590ab0 (image 18c590ab0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c590ab0(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee34f8)();
  return;
}



// ===== continuation @ rva c590e5b (image 18c590e5b) =====

void FUN_18c590e5b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5908fe (image 18c5908fe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5908fe(void)

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



// ===== continuation @ rva c59091f (image 18c59091f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59091f(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee36e8)();
  return;
}



// ===== continuation @ rva c590daf (image 18c590daf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c590daf(void)

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



// ===== continuation @ rva c590be5 (image 18c590be5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c590be5(void)

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



// ===== continuation @ rva c590ae3 (image 18c590ae3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c590ae3(void)

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



// ===== continuation @ rva c59084b (image 18c59084b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59084b(void)

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



// ===== continuation @ rva c59106d (image 18c59106d) =====

void FUN_18c59106d(void)

{
  return;
}



// ===== continuation @ rva c590f67 (image 18c590f67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c590f67(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee3798)();
  return;
}



// ===== continuation @ rva c591028 (image 18c591028) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c591028(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181ee37b8)();
  return;
}



// ===== continuation @ rva c590fd4 (image 18c590fd4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c590fd4(void)

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



// ===== continuation @ rva c59100d (image 18c59100d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59100d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee3788)();
  return;
}



// ===== continuation @ rva c591065 (image 18c591065) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c591065(void)

{
  (*_DAT_181ee3778)();
  return;
}



// ===== continuation @ rva c591075 (image 18c591075) =====

void FUN_18c591075(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c590f9a (image 18c590f9a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c590f9a(void)

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



// ===== continuation @ rva c590fbe (image 18c590fbe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c590fbe(void)

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



// ===== continuation @ rva c59104a (image 18c59104a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59104a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181ee3778)();
    return;
  }
  (*_DAT_181ee3778)();
  return;
}



// ===== continuation @ rva c5914eb (image 18c5914eb) =====

void FUN_18c5914eb(void)

{
  return;
}



// ===== continuation @ rva c59115e (image 18c59115e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59115e(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee38c8)();
  return;
}



// ===== continuation @ rva c5912b8 (image 18c5912b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5912b8(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee3828)();
  return;
}



// ===== continuation @ rva c5914f7 (image 18c5914f7) =====

void FUN_18c5914f7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5912eb (image 18c5912eb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5912eb(void)

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



// ===== continuation @ rva c5913ad (image 18c5913ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5913ad(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee3858)();
  return;
}



// ===== continuation @ rva c59137c (image 18c59137c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59137c(void)

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



// ===== continuation @ rva c5913d5 (image 18c5913d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5913d5(void)

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



// ===== continuation @ rva c5914ba (image 18c5914ba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5914ba(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_181ee38a8)();
  return;
}



// ===== continuation @ rva c591265 (image 18c591265) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c591265(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee3908)();
  return;
}



// ===== continuation @ rva c59170d (image 18c59170d) =====

void FUN_18c59170d(void)

{
  return;
}



// ===== continuation @ rva c591607 (image 18c591607) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c591607(void)

{
  FUN_190ddfc90();
  (*_DAT_181ee3a28)();
  return;
}



// ===== continuation @ rva c5916ad (image 18c5916ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5916ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee3a08)();
  return;
}



// ===== continuation @ rva c591705 (image 18c591705) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c591705(void)

{
  (*_DAT_181ee3a38)();
  return;
}



// ===== continuation @ rva c5916ea (image 18c5916ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5916ea(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181ee3a38)();
    return;
  }
  (*_DAT_181ee3a38)();
  return;
}



// ===== continuation @ rva c59165e (image 18c59165e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59165e(void)

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



// ===== continuation @ rva c5916c8 (image 18c5916c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5916c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181ee39e8)();
  return;
}



// ===== continuation @ rva c591674 (image 18c591674) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c591674(void)

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



// ===== continuation @ rva c591715 (image 18c591715) =====

void FUN_18c591715(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c59163a (image 18c59163a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59163a(void)

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



// ===== continuation @ rva c594d4b (image 18c594d4b) =====

void FUN_18c594d4b(void)

{
  return;
}



// ===== continuation @ rva c591867 (image 18c591867) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c591867(void)

{
  FUN_190ddce00();
  (*_DAT_181ee4088)();
  return;
}



// ===== continuation @ rva c595fda (image 18c595fda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c595fda(void)

{
  (*_DAT_181ee4078)();
  return;
}



// ===== continuation @ rva c595d12 (image 18c595d12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c595d12(void)

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



// ===== continuation @ rva c595ffd (image 18c595ffd) =====

void FUN_18c595ffd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c595a85 (image 18c595a85) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c595a85(void)

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



// ===== continuation @ rva c595fc4 (image 18c595fc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c595fc4(void)

{
  (*_DAT_181ee3fe8)();
  return;
}



// ===== continuation @ rva c5955ea (image 18c5955ea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5955ea(void)

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



// ===== continuation @ rva c595e9e (image 18c595e9e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c595e9e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee3bb8)();
  return;
}



// ===== continuation @ rva c595e42 (image 18c595e42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c595e42(void)

{
  double in_stack_00000030;
  float in_stack_00000038;
  
  switch((double)in_stack_00000038 < in_stack_00000030) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c594e42 (image 18c594e42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c594e42(void)

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



// ===== continuation @ rva c5955bb (image 18c5955bb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5955bb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee3ac8)();
  return;
}



// ===== continuation @ rva c595442 (image 18c595442) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c595442(void)

{
  FUN_190de3220();
  (*_DAT_181ee3f18)();
  return;
}



// ===== continuation @ rva c594fe7 (image 18c594fe7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c594fe7(void)

{
  (*_DAT_181ee41b8)();
  return;
}



// ===== continuation @ rva c5961a3 (image 18c5961a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5961a3(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee5158)();
  return;
}



// ===== continuation @ rva c596125 (image 18c596125) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c596125(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ee5178)();
  return;
}



// ===== continuation @ rva c59666b (image 18c59666b) =====

void FUN_18c59666b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c596495 (image 18c596495) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c596495(void)

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



// ===== continuation @ rva c596663 (image 18c596663) =====

void FUN_18c596663(void)

{
  return;
}



// ===== continuation @ rva c596281 (image 18c596281) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c596281(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee50d8)();
  return;
}



// ===== continuation @ rva c5962a9 (image 18c5962a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5962a9(void)

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



// ===== continuation @ rva c596650 (image 18c596650) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c596650(void)

{
  (*_DAT_181ee5248)();
  return;
}



// ===== continuation @ rva c5964b9 (image 18c5964b9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5964b9(void)

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



// ===== continuation @ rva c596321 (image 18c596321) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c596321(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181ee51f8)();
  return;
}



// ===== continuation @ rva c59662e (image 18c59662e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59662e(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ee50e8)();
  return;
}



// ===== continuation @ rva c59639e (image 18c59639e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59639e(void)

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



// ===== continuation @ rva c59ab22 (image 18c59ab22) =====

void FUN_18c59ab22(void)

{
  return;
}



// ===== continuation @ rva c5967e4 (image 18c5967e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5967e4(void)

{
  FUN_190ddce00();
  (*_DAT_181ee54e8)();
  return;
}



// ===== continuation @ rva c59ab8e (image 18c59ab8e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59ab8e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee5838)();
  return;
}



// ===== continuation @ rva c59a917 (image 18c59a917) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59a917(void)

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



// ===== continuation @ rva c59b0d9 (image 18c59b0d9) =====

void FUN_18c59b0d9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c59a4ef (image 18c59a4ef) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59a4ef(void)

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



// ===== continuation @ rva c59a63f (image 18c59a63f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59a63f(void)

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



// ===== continuation @ rva c59a6d7 (image 18c59a6d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59a6d7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee59f8)();
  return;
}



// ===== continuation @ rva c59a57b (image 18c59a57b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59a57b(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee5438)();
  return;
}



// ===== continuation @ rva c59a970 (image 18c59a970) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59a970(void)

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



// ===== continuation @ rva c59b010 (image 18c59b010) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59b010(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee5a28)();
  return;
}



// ===== continuation @ rva c59ad92 (image 18c59ad92) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59ad92(void)

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



// ===== continuation @ rva c59b002 (image 18c59b002) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59b002(void)

{
  undefined4 uStack0000000000000030;
  
  uStack0000000000000030 = 1;
  (*_DAT_181ee55b8)();
  return;
}



// ===== continuation @ rva c59ac6f (image 18c59ac6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59ac6f(void)

{
  undefined4 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  (*_DAT_181ee5638)();
  return;
}



// ===== continuation @ rva c59fa9d (image 18c59fa9d) =====

void FUN_18c59fa9d(void)

{
  return;
}



// ===== continuation @ rva c59f42f (image 18c59f42f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59f42f(void)

{
  FUN_190ddce00();
  (*_DAT_181ee7ce8)();
  return;
}



// ===== continuation @ rva c59f578 (image 18c59f578) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59f578(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee7cc8)();
  return;
}



// ===== continuation @ rva c59f4fb (image 18c59f4fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59f4fb(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ee7d48)();
  return;
}



// ===== continuation @ rva c59f881 (image 18c59f881) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59f881(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee7db8)();
  return;
}



// ===== continuation @ rva c59fa95 (image 18c59fa95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59fa95(void)

{
  (*_DAT_181ee7db8)();
  return;
}



// ===== continuation @ rva c59f5f4 (image 18c59f5f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59f5f4(void)

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



// ===== continuation @ rva c59f792 (image 18c59f792) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59f792(void)

{
  FUN_190dd72e0();
  (*_DAT_181ee7c28)();
  return;
}



// ===== continuation @ rva c59f94c (image 18c59f94c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c59f94c(void)

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



// ===== continuation @ rva c59fa56 (image 18c59fa56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59fa56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181ee7d78)();
  return;
}



// ===== continuation @ rva c59f743 (image 18c59f743) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59f743(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee7db8)();
  return;
}



// ===== continuation @ rva c5a44aa (image 18c5a44aa) =====

void FUN_18c5a44aa(void)

{
  return;
}



// ===== continuation @ rva c59fc30 (image 18c59fc30) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c59fc30(void)

{
  FUN_190ddce00();
  (*_DAT_181ee8068)();
  return;
}



// ===== continuation @ rva c5a5555 (image 18c5a5555) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a5555(void)

{
  (*_DAT_181ee89b8)();
  return;
}



// ===== continuation @ rva c5a5bbd (image 18c5a5bbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a5bbd(void)

{
  FUN_190de3220();
  (*_DAT_181ee8408)();
  return;
}



// ===== continuation @ rva c5a3fe1 (image 18c5a3fe1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a3fe1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee8588)();
  return;
}



// ===== continuation @ rva c5a3759 (image 18c5a3759) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a3759(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ee85d8)();
  return;
}



// ===== continuation @ rva c5a65e4 (image 18c5a65e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a65e4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181ee9388)();
  return;
}



// ===== continuation @ rva c5a58e7 (image 18c5a58e7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5a58e7(void)

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



// ===== continuation @ rva c5a4516 (image 18c5a4516) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a4516(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee8ba8)();
  return;
}



// ===== continuation @ rva c5a39cd (image 18c5a39cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a39cd(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181ee8438)();
  return;
}



// ===== continuation @ rva c5a3a44 (image 18c5a3a44) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a3a44(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ee8ab8)();
  return;
}



// ===== continuation @ rva c5a36fd (image 18c5a36fd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5a36fd(void)

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



// ===== continuation @ rva c5a6394 (image 18c5a6394) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a6394(void)

{
  (*_DAT_181ee8c58)();
  return;
}



// ===== continuation @ rva c5a6c0d (image 18c5a6c0d) =====

void FUN_18c5a6c0d(void)

{
  return;
}



// ===== continuation @ rva c5a6772 (image 18c5a6772) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a6772(void)

{
  FUN_190ddfc90();
  (*_DAT_181eea228)();
  return;
}



// ===== continuation @ rva c5a68fb (image 18c5a68fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a68fb(void)

{
  FUN_190dd72e0();
  (*_DAT_181eea208)();
  return;
}



// ===== continuation @ rva c5a699b (image 18c5a699b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a699b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181eea158)();
  return;
}



// ===== continuation @ rva c5a6944 (image 18c5a6944) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a6944(void)

{
  FUN_190dd9df0();
  (*_DAT_181eea288)();
  return;
}



// ===== continuation @ rva c5a6c17 (image 18c5a6c17) =====

void FUN_18c5a6c17(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5a69b8 (image 18c5a69b8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5a69b8(void)

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



// ===== continuation @ rva c5a6a58 (image 18c5a6a58) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5a6a58(void)

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



// ===== continuation @ rva c5a67c9 (image 18c5a67c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5a67c9(void)

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



// ===== continuation @ rva c5a687d (image 18c5a687d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a687d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181eea2e8)();
  return;
}



// ===== continuation @ rva c5a98c4 (image 18c5a98c4) =====

void FUN_18c5a98c4(void)

{
  return;
}



// ===== continuation @ rva c5a9723 (image 18c5a9723) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5a9723(void)

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



// ===== continuation @ rva c5ad4f2 (image 18c5ad4f2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5ad4f2(void)

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



// ===== continuation @ rva c5ad35f (image 18c5ad35f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5ad35f(void)

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



// ===== continuation @ rva c5aadf1 (image 18c5aadf1) =====

undefined8 thunk_FUN_18c5aaabd(void)

{
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x70))();
  return 0;
}



// ===== continuation @ rva c5b1a15 (image 18c5b1a15) =====

void FUN_18c5b1a15(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva c5ad282 (image 18c5ad282) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5ad282(void)

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



// ===== continuation @ rva c5aa044 (image 18c5aa044) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5aa044(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c5aab51 (image 18c5aab51) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5aab51(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  FUN_190de3220();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva c5aa63e (image 18c5aa63e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5aa63e(void)

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



// ===== continuation @ rva c5b1cf2 (image 18c5b1cf2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b1cf2(void)

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



// ===== continuation @ rva c5b1c9e (image 18c5b1c9e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b1c9e(void)

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



// ===== continuation @ rva c5b2b65 (image 18c5b2b65) =====

void FUN_18c5b2b65(void)

{
  return;
}



// ===== continuation @ rva c5b23fb (image 18c5b23fb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b23fb(void)

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



// ===== continuation @ rva c5b1f97 (image 18c5b1f97) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b1f97(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000048;
  
  uStack0000000000000048 = 1;
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_181eec628)();
  return;
}



// ===== continuation @ rva c5b2133 (image 18c5b2133) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b2133(void)

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



// ===== continuation @ rva c5b20db (image 18c5b20db) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b20db(void)

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



// ===== continuation @ rva c5b2926 (image 18c5b2926) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b2926(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_181eec578)();
  return;
}



// ===== continuation @ rva c5b1d4b (image 18c5b1d4b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b1d4b(void)

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



// ===== continuation @ rva c5b2ac2 (image 18c5b2ac2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b2ac2(void)

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



// ===== continuation @ rva c5b2b74 (image 18c5b2b74) =====

void FUN_18c5b2b74(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5b2a4a (image 18c5b2a4a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b2a4a(void)

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



// ===== continuation @ rva c5b20a0 (image 18c5b20a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b20a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_181eec838)();
  return;
}



// ===== continuation @ rva c5b4c86 (image 18c5b4c86) =====

void FUN_18c5b4c86(void)

{
  return;
}



// ===== continuation @ rva c5b2cec (image 18c5b2cec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b2cec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181eed4b8)();
  return;
}



// ===== continuation @ rva c5b582a (image 18c5b582a) =====

void FUN_18c5b582a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva c5b3868 (image 18c5b3868) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b3868(void)

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



// ===== continuation @ rva c5b3502 (image 18c5b3502) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b3502(void)

{
  (*_DAT_181eed808)();
  return;
}



// ===== continuation @ rva c5b38f2 (image 18c5b38f2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b38f2(void)

{
  (*_DAT_181eed808)();
  return;
}



// ===== continuation @ rva c5b5423 (image 18c5b5423) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b5423(void)

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



// ===== continuation @ rva c5b3c1b (image 18c5b3c1b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b3c1b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181eecc98)();
  return;
}



// ===== continuation @ rva c5b4904 (image 18c5b4904) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b4904(void)

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



// ===== continuation @ rva c5b3b5b (image 18c5b3b5b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c5b3b5b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181eecd18)();
  return;
}



// ===== continuation @ rva c5b3435 (image 18c5b3435) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c5b3435(void)

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



