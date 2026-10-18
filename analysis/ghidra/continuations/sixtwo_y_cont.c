// ===== continuation @ rva 107c269f (image 1907c269f) =====

void FUN_1907c269f(void)

{
  return;
}



// ===== continuation @ rva 107b0019 (image 1907b0019) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001907b006f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1907b0019(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 107b7de7 (image 1907b7de7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907b7de7(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar8 = (_DAT_18347ab20 ^ _DAT_182d59f20) + _DAT_18347aca8 + 0xe8d6a8d0;
  uVar9 = (_DAT_18347aca8 ^ _UNK_182d59f28) + _DAT_18347ab20 + 0xaa42545b;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347ab20 ^ _DAT_182d59f20;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18347aca8 ^ _UNK_182d59f28;
  _DAT_18347ae30 =
       func_0x0001907c2850((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18347ab20 + 0xaa42545b) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18347aca8 + 0xe8d6a8d0));
  uVar8 = (_DAT_18347ae30 ^ 0x48769fe3c0042417) << 1 | _DAT_18347ae30 >> 0x3f;
  _DAT_18347aed8 = (_DAT_18347aed8 ^ uVar8) + 0xeef6dfff ^ 0x273fb6a1fbc8bd05;
  _DAT_18347ab40 = (_DAT_18347ab40 * 0x742d5f8eae720849 ^ _DAT_18347aed8) + uVar8;
  _DAT_18347ab78 = _DAT_18347ab40 ^ _DAT_18347aed8;
  _DAT_18347abe0 = 0xeef6dfff;
  uVar8 = (_DAT_18347ace0 ^ _DAT_182d59f30) + _DAT_18347add8 + 0xa8631e8;
  uVar9 = (_DAT_18347add8 ^ _UNK_182d59f38) + _DAT_18347ace0 + 0x81c3cec6;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347ace0 ^ _DAT_182d59f30;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18347add8 ^ _UNK_182d59f38;
  _DAT_18347ac60 =
       func_0x0001907c2850((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18347ace0 + 0x81c3cec6) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18347add8 + 0xa8631e8));
  _DAT_18347ab38 =
       (_DAT_18347ab38 ^ _DAT_18347ac60 ^ 0x484dc7a9778a9243) + 0xf67dc0b ^ 0xf9efb5cbcc781cf3;
  _DAT_18347ad40 =
       (_DAT_18347ad40 * -0x5cd3cefbd5d76009 ^ _DAT_18347ab38) +
       (_DAT_18347ac60 ^ 0x484dc7a9778a9243);
  _DAT_18347ae10 = _DAT_18347ad40 ^ _DAT_18347ab38;
  _DAT_18347abb0 = 0xf67dc0b;
  _DAT_18347ac68 = func_0x0001907c2850(_DAT_18347ad10 ^ 0xff64ffde90000e90);
  _DAT_18347ab28 =
       (_DAT_18347ab28 ^ _DAT_18347ac68 & 0xfffffffffffc0000) - 0xe5118855 ^ 0xe073aa9d640c490b;
  _DAT_18347ade8 =
       (_DAT_18347ade8 * 0x5ca70b728e6769cf ^ _DAT_18347ab28) +
       (_DAT_18347ac68 & 0xfffffffffffc0000);
  _DAT_18347adc0 = _DAT_18347ade8 ^ _DAT_18347ab28;
  _DAT_18347add0 = 0x1aee77ab;
  uVar8 = (_DAT_18347ab88 ^ _DAT_182d59f40) + _DAT_18347ab58 + 0x6130a470;
  uVar9 = (_DAT_18347ab58 ^ _UNK_182d59f48) + _DAT_18347ab88 + 0x1aee77ab;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347ab88 ^ _DAT_182d59f40;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18347ab58 ^ _UNK_182d59f48;
  _DAT_18347abc0 =
       func_0x0001907c2850((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18347ab88 + 0x1aee77ab) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18347ab58 + 0x6130a470));
  _DAT_18347add8 = _DAT_18347abc0 & 0x7fffffffffffffff;
  uVar8 = _DAT_18347ab50 ^ _DAT_18347add8 ^ 0x10000ff00;
  _DAT_18347ad90 = (uVar8 ^ _DAT_18347add8) + 0x10000ff00 ^ 0x5dc51f56a151f8a8;
  _DAT_18347add8 = (uVar8 * -0x609d2ea7857e6303 ^ _DAT_18347ad90) + _DAT_18347add8;
  _DAT_18347ad90 = _DAT_18347add8 ^ _DAT_18347ad90;
  _DAT_18347abe0 = 0xff00;
  _DAT_18347ad18 = func_0x0001907c2850(_DAT_18347acf8 ^ 0x17ffbe3c004ad4);
  _DAT_18347ab00 = (_DAT_18347ab00 ^ _DAT_18347ad18) - 0xc6973b19 ^ 0x618cfa2eb8d9f9f0;
  _DAT_18347ab88 = (_DAT_18347ab88 * -0x36d6ba1be95e364b ^ _DAT_18347ab00) + _DAT_18347ad18;
  _DAT_18347ad28 = _DAT_18347ab88 ^ _DAT_18347ab00;
  _DAT_18347ac08 = 0x3968c4e7;
  uVar8 = (~_DAT_18347acc0 + 0x4fa88b24) *
          ((_DAT_18347ad18 ^ 0x84222325) + (ulonglong)((uint)_DAT_18347ad18 & 0x84222325) * 2);
  uVar8 = (uVar8 | _DAT_18347ab40) + (uVar8 & _DAT_18347ab40);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18347ae00 = func_0x0001907c2850((uVar8 | 0xcb8aa806) + (ulonglong)((uint)uVar8 & 0xcb8aa806))
  ;
  _DAT_18347abd8 = (_DAT_18347abd8 ^ _DAT_18347ae00) - 0x4fa88b23 ^ 0x71f8c89604c6f59c;
  _DAT_18347ab00 = (_DAT_18347ab00 * 0x5c05ac4b553d3137 ^ _DAT_18347abd8) + _DAT_18347ae00;
  _DAT_18347ae38 = _DAT_18347ab00 ^ _DAT_18347abd8;
  _DAT_18347ace0 = 0xb05774dd;
  _DAT_18347aef8 = func_0x0001907c2850(_DAT_18347adb0 + 0xffd6ffc6f9ff79ffU ^ 0x55);
  uVar8 = _DAT_18347aef8 ^ 0x4fa8ff23;
  _DAT_18347ad98 = _DAT_18347ab20 ^ uVar8 ^ 0x4fa98a23;
  _DAT_18347adc8 = (_DAT_18347adc8 ^ uVar8) + 0x4fa98a23 ^ 0x53e55e634a45464e;
  _DAT_18347aee8 = (_DAT_18347aee8 * 0x35165909c17ef535 ^ _DAT_18347adc8) + uVar8;
  _DAT_18347ab18 = _DAT_18347aee8 ^ _DAT_18347adc8;
  _DAT_18347ac28 = 0x4fa98a23;
  uVar8 = (~_DAT_18347ad10 + 0xb05774de) *
          ((_DAT_18347ae68 ^ 0xcb8ba906) + (ulonglong)((uint)_DAT_18347ae68 & 0xcb8ba906) * 2);
  uVar8 = (uVar8 | _DAT_18347ae98) + (uVar8 & _DAT_18347ae98);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18347ac48 = func_0x0001907c2850((uVar8 | 0x7bdcdddb) + (ulonglong)((uint)uVar8 & 0x7bdcdddb))
  ;
  uVar8 = (_DAT_18347ac48 ^ 0xfffffeff) << 0x23 |
          ((_DAT_18347ac48 ^ 0xfffffeff) & 0x7fffffffffffff) >> 0x1d;
  _DAT_18347acc8 = _DAT_18347ac90 ^ uVar8 ^ 0x10000ff00;
  _DAT_18347ac20 = (_DAT_18347ac20 ^ uVar8) + 0x10000ff00 ^ 0x1efc84558620a451;
  _DAT_18347acd8 = (_DAT_18347acd8 * -0x4a6bea5462883465 ^ _DAT_18347ac20) + uVar8;
  _DAT_18347ad50 = _DAT_18347acd8 ^ _DAT_18347ac20;
  _DAT_18347ae58 = 0xff00;
  uVar8 = (~_DAT_18347abb0 + 0xf67dc0c) *
          ((_DAT_18347ab58 ^ 0x6ad4fcda) + (ulonglong)((uint)_DAT_18347ab58 & 0x6ad4fcda) * 2);
  uVar8 = (uVar8 | _DAT_18347ac60) + (uVar8 & _DAT_18347ac60);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18347aca8 = func_0x0001907c2850((uVar8 | 0x65b320d1) + (ulonglong)((uint)uVar8 & 0x65b320d1))
  ;
  uVar8 = _DAT_18347aca8 & 0x1fffffffff;
  _DAT_18347ab98 = _DAT_18347ae48 ^ uVar8 ^ 0xfe5ebc0a;
  _DAT_18347ac90 = (_DAT_18347ac90 ^ uVar8) + 0xfe5ebc0a ^ 0x1ea55a14477b1e9b;
  _DAT_18347ab88 = (_DAT_18347ab88 * 0x69e222e274bd529f ^ _DAT_18347ac90) + uVar8;
  _DAT_18347ae08 = _DAT_18347ab88 ^ _DAT_18347ac90;
  _DAT_18347ac58 = 0xfe5ebc0a;
  uVar8 = (_DAT_18347ac50 ^ _DAT_182d59f50) + _DAT_18347ad58 + 0x6ad4fcda;
  uVar9 = (_DAT_18347ad58 ^ _UNK_182d59f58) + _DAT_18347ac50 + 0xf67dc0b;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347ac50 ^ _DAT_182d59f50;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18347ad58 ^ _UNK_182d59f58;
  _DAT_18347acd8 =
       func_0x0001907c2850((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18347ac50 + 0xf67dc0b) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18347ad58 + 0x6ad4fcda));
  uVar8 = _DAT_18347acd8 - (_DAT_18347acd8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_18347acd8;
  _DAT_18347ac30 = (_DAT_18347ac30 ^ uVar8) + 0xe19103f4 ^ 0xef24b7df1f011d4b;
  _DAT_18347ac48 = (_DAT_18347ac48 * 0x48a633a1e926f235 ^ _DAT_18347ac30) + uVar8;
  _DAT_18347ae50 = _DAT_18347ac48 ^ _DAT_18347ac30;
  _DAT_18347abc8 = 0xe19103f4;
  uVar8 = (~_DAT_18347ac78 + 0xf67dc0c) *
          ((_DAT_18347aca8 ^ 0x6ad4fcda) + (ulonglong)((uint)_DAT_18347aca8 & 0x6ad4fcda) * 2);
  uVar8 = (uVar8 | _DAT_18347ae40) + (uVar8 & _DAT_18347ae40);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18347ad20 = func_0x0001907c2850((uVar8 | 0x65b320d1) + (ulonglong)((uint)uVar8 & 0x65b320d1))
  ;
  _DAT_18347ad30 = (_DAT_18347ad30 ^ _DAT_18347ad20) + 0xe66dc0b ^ 0xb5238f721def05a5;
  _DAT_18347ad60 = (_DAT_18347ad60 * 0x5ea5f9f28ea8f467 ^ _DAT_18347ad30) + _DAT_18347ad20;
  _DAT_18347ac78 = _DAT_18347ad60 ^ _DAT_18347ad30;
  _DAT_18347ad98 = 0xe66dc0b;
  uVar8 = (~_DAT_18347ac00 + 0x1ccdb817) *
          ((_DAT_18347ada0 ^ 0x65b320d1) + (ulonglong)((uint)_DAT_18347ada0 & 0x65b320d1) * 2);
  uVar8 = (uVar8 | _DAT_18347ae18) + (uVar8 & _DAT_18347ae18);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uVar8 = func_0x0001907c2850((uVar8 | 0x797e98c7) + (ulonglong)((uint)uVar8 & 0x797e98c7));
  uVar9 = uVar8 >> 1 | uVar8;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  _DAT_18347ab50 =
       (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar8 ^
       0xe19103f4) & 0x7fffffffffffffff;
  _DAT_18347ae18 = _DAT_18347ad20 ^ _DAT_18347ab50 ^ 0xfe5ebc0a;
  _DAT_18347aba8 = (_DAT_18347aba8 ^ _DAT_18347ab50) + 0xfe5ebc0a ^ 0xc3857a9061e3bee4;
  _DAT_18347ab50 = (uVar8 * -0x14f4fd982aea4369 ^ _DAT_18347aba8) + _DAT_18347ab50;
  _DAT_18347ae98 = _DAT_18347ab50 ^ _DAT_18347aba8;
  _DAT_18347abf0 = 0xfe5ebc0a;
  _DAT_18347ad28 = func_0x0001907c2850(_DAT_18347ac80 ^ 0x2c007c22ffe191);
  uVar8 = _DAT_18347ad28 << 0xc | _DAT_18347ad28 >> 0x34;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x33 ^
          _DAT_18347ad28 << 0xc) & 0xfffffffffffff000;
  _DAT_18347ae60 = _DAT_18347ab38 ^ uVar8 ^ 0xff00;
  _DAT_18347ae08 = (_DAT_18347ae08 ^ uVar8) + 0xff00 ^ 0xff4f262a3b2159df;
  _DAT_18347aea0 = (_DAT_18347aea0 * -0x4771cd3fea93fd45 ^ _DAT_18347ae08) + uVar8;
  _DAT_18347aef8 = _DAT_18347aea0 ^ _DAT_18347ae08;
  _DAT_18347acd8 = 0xff00;
  _DAT_18347ac90 = func_0x0001907c2850(_DAT_18347ac30 ^ 0xfffeff951cffe61e);
  uVar8 = _DAT_18347ac90 - (_DAT_18347ac90 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18347ac90;
  uVar8 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar9) <<
          0x2e | _DAT_18347ac90 >> 0x12;
  _DAT_18347ac98 = (_DAT_18347ac98 ^ uVar8) + 0x11092000 ^ 0x6b80629b82b2c09;
  _DAT_18347ab20 = (_DAT_18347ab20 * 0x7531040d9b4026e1 ^ _DAT_18347ac98) + uVar8;
  _DAT_18347ab78 = _DAT_18347ab20 ^ _DAT_18347ac98;
  _DAT_18347acb0 = 0x11092000;
  uVar8 = (~_DAT_18347ad10 + 0x11092001) *
          ((_DAT_18347ab98 ^ 0x6ad4fcda) + (ulonglong)((uint)_DAT_18347ab98 & 0x6ad4fcda) * 2);
  uVar8 = (uVar8 | _DAT_18347ad60) + (uVar8 & _DAT_18347ad60);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18347ae78 = func_0x0001907c2850((uVar8 | 0x7bdddcda) + (ulonglong)((uint)uVar8 & 0x7bdddcda))
  ;
  _DAT_18347ade0 = _DAT_18347ade0 ^ _DAT_18347ae78 ^ 0xc9f153a1119aab38;
  _DAT_18347adb8 = (_DAT_18347adb8 * -0x6b23f0c8243dda5 ^ _DAT_18347ade0) + _DAT_18347ae78;
  _DAT_18347add0 = _DAT_18347adb8 ^ _DAT_18347ade0;
  _DAT_18347aec8 = 0;
  uVar8 = (_DAT_18347adc0 ^ 0x8422dc25) + _DAT_18347acb8 + 0x8422dc25;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347adc0 ^ 0x8422dc25;
  uVar9 = ((_DAT_18347acb8 + _DAT_18347adc0) * 0x2000 | _DAT_18347acb8 + _DAT_18347adc0 >> 0x33) ^
          _DAT_18347acb8;
  uVar8 = func_0x0001907c2850((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_18347adc0 ^
                              (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18347acb8 + 0x8422dc25));
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 0x40;
  uVar8 = uVar9 ^ uVar8;
  _DAT_18347ad50 = _DAT_18347ae80 ^ uVar8 ^ 0xff00;
  _DAT_18347ae90 = uVar9 + 0xff00 ^ 0xa3620d2f8851da29;
  _DAT_18347ae80 = (_DAT_18347ae80 * -0x7b4f1c43e72998dd ^ _DAT_18347ae90) + uVar8;
  _DAT_18347ac18 = _DAT_18347ae80 ^ _DAT_18347ae90;
  _DAT_18347ac10 = 0xff00;
  uVar8 = (~_DAT_18347ad70 + 0x6cf48bf6) *
          ((_DAT_18347ae58 ^ 0xe8d6a8d0) + (ulonglong)((uint)_DAT_18347ae58 & 0xe8d6a8d0) * 2);
  uVar8 = (uVar8 | _DAT_18347ab98) + (uVar8 & _DAT_18347ab98);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18347abc0 = func_0x0001907c2850((uVar8 | 0x84222325) + (ulonglong)((uint)uVar8 & 0x84222325))
  ;
  uVar8 = (ulonglong)(~(uint)_DAT_18347abc0 & 0x6cf48bf5);
  _DAT_18347ae38 = _DAT_18347ae38 ^ uVar8 ^ 0x326cc58577371ccc;
  _DAT_18347ab88 = (_DAT_18347ab88 * 0xcd68bfdc8f0722b ^ _DAT_18347ae38) + uVar8;
  _DAT_18347ae48 = _DAT_18347ab88 ^ _DAT_18347ae38;
  _DAT_18347ab50 = 0;
  uVar8 = (_DAT_18347ad38 ^ 0x8422dc25) + _DAT_18347add8 + 0x8422dc25;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18347ad38 ^ 0x8422dc25;
  uVar9 = ((_DAT_18347add8 + _DAT_18347ad38) * 0x2000 | _DAT_18347add8 + _DAT_18347ad38 >> 0x33) ^
          _DAT_18347add8;
  _DAT_18347abc0 =
       func_0x0001907c2850((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_18347ad38 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18347add8 + 0x8422dc25));
  auVar7 = _DAT_1800170c0;
  _DAT_18347ae30 = _DAT_18347aec0 ^ _DAT_18347acc8 ^ 0xff00;
  _DAT_18347abf0 = (_DAT_18347abf0 ^ _DAT_18347acc8) + 0xff00 ^ 0x938efce3992cf3cd;
  _DAT_18347ac40 = (_DAT_18347ac40 * -0x553c8138e3276815 ^ _DAT_18347abf0) + _DAT_18347acc8;
  _DAT_18347ad50 = _DAT_18347ac40 ^ _DAT_18347abf0;
  uVar9 = (ulonglong)(uint)((int)cVar1 << 8);
  auVar5._8_8_ = _UNK_180131998;
  auVar5._0_8_ = uVar9 ^ 0x84222325;
  _DAT_18347ab50 = 0xff00;
  auVar6 = pshufb(auVar5 ^ _DAT_182d59f60,_DAT_1800170c0);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar8 = uVar4 + _DAT_18347acd8;
  if (auVar6._4_4_ < 0) {
    uVar8 = _DAT_18347ab48 ^ uVar4;
  }
  _DAT_18347ae40 = func_0x0001907c2850(SUB161(auVar5 ^ _DAT_182d59f60,5) ^ uVar8);
  uVar4 = uVar9 * 0xff00 ^ _DAT_18347ae40;
  uVar8 = uVar4 >> 1 | uVar4;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar4) & 0x7fffffffffffffff;
  uVar9 = uVar9 & 0xffff;
  _DAT_18347ae00 = (_DAT_18347ae00 ^ uVar8) + uVar9 ^ 0x55ca7457d81a118;
  _DAT_18347ad90 = (_DAT_18347ad90 * -0x77b197672cd09a4d ^ _DAT_18347ae00) + uVar8;
  _DAT_18347ab28 = _DAT_18347ad90 ^ _DAT_18347ae00;
  auVar6._8_8_ = uVar9;
  auVar6._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_182d59f70,auVar7);
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar4 + _DAT_18347adb8;
  if (auVar7._4_4_ < 0) {
    uVar8 = _DAT_18347abb0 ^ uVar4;
  }
  _DAT_18347ac50 = uVar9;
  _DAT_18347ac58 = func_0x0001907c2850(SUB161(auVar6 ^ _DAT_182d59f70,5) ^ uVar8);
  _DAT_18347aef8 = in_stack_00000050 | uVar9;
  _DAT_18347ab18 =
       (_DAT_18347ab18 ^ _DAT_18347ac58 & 0x7fffffffffffffc0) + _DAT_18347aef8 ^ 0xbfa4c15bbdbce05b;
  _DAT_18347ab48 =
       (_DAT_18347ab48 * 0xa5d7fb2712bb55 ^ _DAT_18347ab18) + (_DAT_18347ac58 & 0x7fffffffffffffc0);
  _DAT_18347ae20 = _DAT_18347ab48 ^ _DAT_18347ab18;
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



// ===== continuation @ rva 107c2055 (image 1907c2055) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c2055(void)

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



// ===== continuation @ rva 107b0524 (image 1907b0524) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001907b053b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1907b0524(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 107ba4e6 (image 1907ba4e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ba4e6(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R15;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 5;
  uStack0000000000000078 = 0x10;
  uStack0000000000000070 =
       (ulonglong)
       CONCAT24((short)((ulonglong)unaff_R15 >> 0x30),(int)(char)((ulonglong)unaff_R15 >> 0x10));
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iStack0000000000000068 < 0 || iVar1 <= iStack0000000000000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107ba348 (image 1907ba348) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ba348(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R15;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 2;
  uStack0000000000000078 = 0x28;
  uStack0000000000000070 = (ulonglong)(uint)(int)(char)((ulonglong)unaff_R15 >> 0x28);
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iStack0000000000000068 < 0 || iVar1 <= iStack0000000000000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107ba722 (image 1907ba722) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ba722(void)

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



// ===== continuation @ rva 107c1cd8 (image 1907c1cd8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c1cd8(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
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



// ===== continuation @ rva 107c1dc9 (image 1907c1dc9) =====

void FUN_1907c1dc9(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
  return;
}



// ===== continuation @ rva 1079cd7d (image 19079cd7d) =====

void FUN_19079cd7d(void)

{
  return;
}



// ===== continuation @ rva 1079ba01 (image 19079ba01) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079ba01(void)

{
  FUN_190ddce00();
  (*_DAT_182d539e8)();
  return;
}



// ===== continuation @ rva 1079cf72 (image 19079cf72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079cf72(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d537d8)();
  return;
}



// ===== continuation @ rva 1079d80b (image 19079d80b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079d80b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d53938)();
  return;
}



// ===== continuation @ rva 1079d728 (image 19079d728) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19079d728(void)

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



// ===== continuation @ rva 1079cff7 (image 19079cff7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079cff7(void)

{
  FUN_190dd9df0();
  (*_DAT_182d536e8)();
  return;
}



// ===== continuation @ rva 1079bd7b (image 19079bd7b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19079bd7b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1079d673 (image 19079d673) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19079d673(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1079cad0 (image 19079cad0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19079cad0(void)

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



// ===== continuation @ rva 1079cbfb (image 19079cbfb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079cbfb(void)

{
  (*_DAT_182d53d18)();
  return;
}



// ===== continuation @ rva 107c5f80 (image 1907c5f80) =====

void FUN_1907c5f80(void)

{
  return;
}



// ===== continuation @ rva 107c29aa (image 1907c29aa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c29aa(void)

{
  FUN_190ddce00();
  (*_DAT_182d5a868)();
  return;
}



// ===== continuation @ rva 107c60ee (image 1907c60ee) =====

void FUN_1907c60ee(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107c5396 (image 1907c5396) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c5396(void)

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



// ===== continuation @ rva 107c5d2e (image 1907c5d2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c5d2e(void)

{
  (*_DAT_182d5a818)();
  return;
}



// ===== continuation @ rva 107c51a4 (image 1907c51a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c51a4(void)

{
  (*_DAT_182d5a838)();
  return;
}



// ===== continuation @ rva 107c5621 (image 1907c5621) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c5621(void)

{
  (*_DAT_182d5a818)();
  return;
}



// ===== continuation @ rva 107c2a77 (image 1907c2a77) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c2a77(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *unaff_RSI;
  longlong unaff_R12;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  ulonglong uVar46;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  undefined8 uStack00000000000000c8;
  
  uVar9 = _DAT_182d5a1f8;
  uStack00000000000000c8 = in_stack_00000040;
  uVar16 = _DAT_182d5a1f0 | 0x4c74b0ed099dd8a5;
  uVar11 = _DAT_182d5a1f8 ^ 0xbda453461cc4bc32;
  uVar6 = _DAT_182d5a1f0 * _DAT_182d5a1f0;
  uVar13 = uVar6 * -0x75bf569075658d42;
  uVar7 = ((_DAT_18347b038 ^ 0x84222325) + (ulonglong)((uint)_DAT_18347b038 & 0x84222325) * 2) *
          (uVar13 - _DAT_18347aff8);
  uVar7 = (uVar7 | _DAT_18347afe8) + (uVar7 & _DAT_18347afe8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18347b028 =
       func_0x0001907c6120((uVar13 ^ 0x84222325 | uVar7) + (uVar7 & (uVar13 ^ 0x84222325)));
  uVar14 = uVar6 * 0x75bf569075658d42;
  _DAT_18347af28 =
       (_DAT_18347af28 ^ _DAT_18347b028) + uVar6 * 0x75bf569075658d42 ^ 0x2ad6f66df5cea600;
  _DAT_18347af00 = (_DAT_18347af00 * 0x1aef4c53fd194785 ^ _DAT_18347af28) + _DAT_18347b028;
  _DAT_18347b0f0 = _DAT_18347af00 ^ _DAT_18347af28;
  uVar13 = unaff_R12 + uVar13;
  uVar8 = uVar13 ^ 0x84222325;
  uVar7 = ((_DAT_18347b040 ^ uVar8) + (uVar8 & _DAT_18347b040) * 2) * (uVar14 - _DAT_18347aff8);
  uVar7 = (uVar7 | _DAT_18347b0a0) + (uVar7 & _DAT_18347b0a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18347b0b8 = uVar14;
  _DAT_18347b020 = func_0x0001907c6120((uVar8 ^ uVar14 | uVar7) + (uVar7 & (uVar8 ^ uVar14)));
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar14;
  uVar24 = (uint)(uVar13 >> 0x20);
  auVar32._8_4_ = (int)uVar13;
  auVar32._0_8_ = uVar13;
  auVar32._12_4_ = uVar24;
  uVar36 = (uint)(uVar14 >> 0x20);
  auVar18._8_4_ = (int)uVar14;
  auVar18._0_8_ = uVar14;
  auVar18._12_4_ = uVar36;
  uVar40 = SUB164(auVar32 & auVar18,0);
  uVar7 = SUB168(auVar32 & auVar18,0);
  uVar17 = SUB164(auVar32 | auVar18,0);
  uVar8 = SUB168(auVar32 | auVar18,0);
  auVar45._8_4_ = 0xffffffff;
  auVar45._0_8_ = 0xffffffffffffffff;
  auVar45._12_4_ = 0xffffffff;
  uVar28 = SUB164(auVar41 ^ auVar45,0);
  _DAT_18347afa0 =
       (((ulonglong)uVar28 * (ulonglong)_DAT_182d5a9c0 +
         ((ulonglong)_DAT_182d5a9f0 * (ulonglong)uVar28 +
          (SUB168(auVar41 ^ auVar45,0) >> 0x20) * (ulonglong)_DAT_182d5a9c0 << 0x20) +
         (ulonglong)_DAT_182d5a9e0 * (ulonglong)uVar17 +
         ((uVar8 >> 0x20) * (ulonglong)_DAT_182d5a9e0 +
          (ulonglong)_DAT_182d5a9d0 * (ulonglong)uVar17 << 0x20) +
         (ulonglong)uVar40 * (ulonglong)_DAT_182d5a9e0 +
         ((uVar7 >> 0x20) * (ulonglong)_DAT_182d5a9e0 +
          (ulonglong)uVar40 * (ulonglong)_DAT_182d5a9d0 << 0x20) +
        (ulonglong)_DAT_182d5a9a0 * (uVar14 & 0xffffffff) +
        ((ulonglong)_DAT_182d5a9b0 * (uVar14 & 0xffffffff) +
         (ulonglong)uVar36 * (ulonglong)_DAT_182d5a9a0 << 0x20) +
        (ulonglong)_DAT_182d5a980 * (uVar13 & 0xffffffff) +
        ((ulonglong)_DAT_182d5a990 * (uVar13 & 0xffffffff) +
         (ulonglong)uVar24 * (ulonglong)_DAT_182d5a980 << 0x20)) -
       ((ulonglong)uVar17 * (ulonglong)_DAT_182d5aa50 +
        ((uVar8 >> 0x20) * (ulonglong)_DAT_182d5aa50 + (ulonglong)_DAT_182d5aa40 * (ulonglong)uVar17
        << 0x20) +
       (ulonglong)uVar40 * (ulonglong)_DAT_182d5aa50 +
       ((uVar7 >> 0x20) * (ulonglong)_DAT_182d5aa50 + (ulonglong)uVar40 * (ulonglong)_DAT_182d5aa40
       << 0x20) +
       (uVar14 & 0xffffffff) * (ulonglong)_DAT_182d5aa30 +
       ((ulonglong)uVar36 * (ulonglong)_DAT_182d5aa30 +
        (ulonglong)_DAT_182d5aa20 * (uVar14 & 0xffffffff) << 0x20) +
       (uVar13 & 0xffffffff) * (ulonglong)_DAT_182d5aa30 +
       ((ulonglong)uVar24 * (ulonglong)_DAT_182d5aa30 +
        (uVar13 & 0xffffffff) * (ulonglong)_DAT_182d5aa20 << 0x20))) + 0x120b2815135eaeee;
  uVar15 = _DAT_18347afa0 + uVar9 * uVar9 * -0x5aea1ec805552d07;
  uVar12 = uVar9 * uVar9 * 0x5aea1ec805552d07;
  auVar20._8_8_ = uVar12;
  auVar20._0_8_ = uVar15 ^ 0x84222325;
  auVar18 = pshufb(auVar20 ^ _DAT_182d5aa60,_DAT_1800170c0);
  uVar7 = ((uVar13 | uVar14) ^ _DAT_18347b020 ^ uVar14) & 0xffffffffffffff00;
  _DAT_18347b0a8 = _DAT_18347b0e8 ^ uVar7 ^ _DAT_18347afa0;
  _DAT_18347b0f8 = (_DAT_18347b0f8 ^ uVar7) + _DAT_18347afa0 ^ 0x9da24f0951b74221;
  _DAT_18347b000 = (_DAT_18347b000 * 0x528a05aa26f23731 ^ _DAT_18347b0f8) + uVar7;
  _DAT_18347af30 = _DAT_18347b000 ^ _DAT_18347b0f8;
  uVar8 = auVar18._8_8_ + auVar18._0_8_;
  uVar7 = uVar8 + _DAT_18347b080;
  if (auVar18._4_4_ < 0) {
    uVar7 = _DAT_18347af00 ^ uVar8;
  }
  _DAT_18347b070 = func_0x0001907c6120(SUB161(auVar20 ^ _DAT_182d5aa60,5) ^ uVar7);
  uVar17 = (uint)(uVar15 >> 0x20);
  auVar33._8_4_ = (int)uVar15;
  auVar33._0_8_ = uVar15;
  auVar33._12_4_ = uVar17;
  uVar36 = (uint)(uVar12 >> 0x20);
  auVar42._8_4_ = (int)uVar12;
  auVar42._0_8_ = uVar12;
  auVar42._12_4_ = uVar36;
  uVar40 = SUB164(auVar33 & auVar42,0);
  uVar13 = SUB168(auVar33 & auVar42,0);
  uVar24 = SUB164(auVar33 | auVar42,0);
  uVar14 = SUB168(auVar33 | auVar42,0);
  uVar7 = uVar12 * uVar15 ^ _DAT_18347b070;
  uVar7 = uVar7 << 0x10 | uVar7 >> 0x30;
  uVar8 = uVar15 ^ _DAT_18001a710;
  uVar28 = SUB164(auVar42 ^ auVar33,0);
  uVar13 = (((ulonglong)_DAT_182d5aaa0 * (ulonglong)uVar24 +
             ((uVar14 >> 0x20) * (ulonglong)_DAT_182d5aaa0 +
              (ulonglong)_DAT_182d5aa90 * (ulonglong)uVar24 << 0x20) +
            (ulonglong)uVar40 * (ulonglong)_DAT_182d5aaa0 +
            ((uVar13 >> 0x20) * (ulonglong)_DAT_182d5aaa0 +
             (ulonglong)uVar40 * (ulonglong)_DAT_182d5aa90 << 0x20) +
            (ulonglong)_DAT_182d5aa80 * (uVar12 & 0xffffffff) +
            ((ulonglong)uVar36 * (ulonglong)_DAT_182d5aa80 +
             (ulonglong)_DAT_182d5aa70 * (uVar12 & 0xffffffff) << 0x20) +
            (uVar15 & 0xffffffff) * (ulonglong)_DAT_182d5aa80 +
            ((ulonglong)uVar17 * (ulonglong)_DAT_182d5aa80 +
             (uVar15 & 0xffffffff) * (ulonglong)_DAT_182d5aa70 << 0x20)) -
           ((uVar8 & 0xffffffff) * (_DAT_182d5aae0 & 0xffffffff) +
            ((uVar8 >> 0x20) * (_DAT_182d5aae0 & 0xffffffff) +
             (ulonglong)_DAT_182d5aad0 * (uVar8 & 0xffffffff) << 0x20) +
            (ulonglong)uVar28 * (ulonglong)_DAT_182d5ab00 +
            ((SUB168(auVar42 ^ auVar33,0) >> 0x20) * (ulonglong)_DAT_182d5ab00 +
             (ulonglong)_DAT_182d5aaf0 * (ulonglong)uVar28 << 0x20) +
            (ulonglong)uVar40 * (ulonglong)_DAT_182d5ab00 +
            ((uVar13 >> 0x20) * (ulonglong)_DAT_182d5ab00 +
             (ulonglong)uVar40 * (ulonglong)_DAT_182d5aaf0 << 0x20) +
            (uVar15 & 0xffffffff) * (_DAT_182d5aae0 & 0xffffffff) +
            ((ulonglong)uVar17 * (_DAT_182d5aae0 & 0xffffffff) +
             (uVar15 & 0xffffffff) * (ulonglong)_DAT_182d5aad0 << 0x20) +
           (ulonglong)uVar24 * (ulonglong)_DAT_182d5ab10 +
           ((ulonglong)_DAT_182d5ab20 * (ulonglong)uVar24 +
            (uVar14 >> 0x20) * (ulonglong)_DAT_182d5ab10 << 0x20))) - _DAT_182d5aae0;
  _DAT_18347af50 = _DAT_18347b068 ^ uVar7 ^ uVar13;
  _DAT_18347aff8 = (_DAT_18347aff8 ^ uVar7) + uVar13 ^ 0x39dfb3e82492c970;
  _DAT_18347afb0 = (_DAT_18347afb0 * 0x33acfdf50c58431d ^ _DAT_18347aff8) + uVar7;
  _DAT_18347aff0 = _DAT_18347afb0 ^ _DAT_18347aff8;
  lVar10 = uVar9 * _DAT_182d5a1f0;
  uVar8 = lVar10 * 0xd7be4291707b214;
  auVar19._8_8_ = uVar8;
  auVar19._0_8_ = _DAT_18001b640;
  auVar20 = pshufb(auVar19 ^ _DAT_182d5ab30,_DAT_1800170c0);
  uVar7 = auVar20._8_8_ + auVar20._0_8_;
  uVar9 = uVar7 + _DAT_18347af10;
  if (auVar20._4_4_ < 0) {
    uVar9 = _DAT_18347b038 ^ uVar7;
  }
  _DAT_18347b0e0 = uVar13;
  _DAT_18347b038 = func_0x0001907c6120(uVar9 ^ 0x38);
  uVar9 = _DAT_18347b038 >> 1 | _DAT_18347b038;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_18347b038) & 0xfffffffffc000000;
  uVar12 = lVar10 * -0xd7be4291707b214;
  _DAT_18347afe8 = (_DAT_18347afe8 ^ uVar9) + lVar10 * -0xd7be4291707b214 ^ 0x651828efd1c6440b;
  _DAT_18347b0f0 = (_DAT_18347b0f0 * 0x50211bbc3283b8bb ^ _DAT_18347afe8) + uVar9;
  _DAT_18347b088 = _DAT_18347b0f0 ^ _DAT_18347afe8;
  uVar7 = uVar13 ^ 0x84222325;
  uVar9 = ((_DAT_18347afa0 ^ uVar7) + (uVar7 & _DAT_18347afa0) * 2) * (uVar8 - _DAT_18347b040);
  uVar9 = (uVar9 | _DAT_18347b020) + (uVar9 & _DAT_18347b020);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18347b0c8 = uVar12;
  _DAT_18347afc0 = func_0x0001907c6120((uVar7 ^ uVar8 | uVar9) + (uVar9 & (uVar7 ^ uVar8)));
  uVar9 = uVar13 * uVar8 ^ _DAT_18347afc0 ^ uVar13;
  uVar43 = (uint)(uVar13 >> 0x20);
  auVar37._8_4_ = (int)uVar13;
  auVar37._0_8_ = uVar13;
  auVar37._12_4_ = uVar43;
  uVar17 = (uint)(uVar8 >> 0x20);
  auVar25._8_4_ = (int)uVar8;
  auVar25._0_8_ = uVar8;
  auVar25._12_4_ = uVar17;
  uVar28 = SUB164(auVar37 & auVar25,0);
  uVar7 = SUB168(auVar37 & auVar25,0);
  uVar24 = SUB164(auVar37 | auVar25,0);
  uVar14 = SUB168(auVar37 | auVar25,0);
  uVar36 = SUB164(auVar37 ^ auVar25,0);
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar40 = SUB164(auVar25 ^ auVar1,0);
  uVar8 = (((ulonglong)uVar36 * (ulonglong)_DAT_182d5aba0 +
            ((ulonglong)_DAT_182d5abb0 * (ulonglong)uVar36 +
             (SUB168(auVar37 ^ auVar25,0) >> 0x20) * (ulonglong)_DAT_182d5aba0 << 0x20) +
            (ulonglong)_DAT_182d5ab80 * (ulonglong)uVar24 +
            ((ulonglong)_DAT_182d5ab90 * (ulonglong)uVar24 +
             (uVar14 >> 0x20) * (ulonglong)_DAT_182d5ab80 << 0x20) +
           (ulonglong)_DAT_182d5ab60 * (ulonglong)uVar28 +
           ((ulonglong)_DAT_182d5ab70 * (ulonglong)uVar28 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_182d5ab60 << 0x20) +
           (ulonglong)_DAT_182d5ab50 * (uVar8 & 0xffffffff) +
           ((ulonglong)uVar17 * (ulonglong)_DAT_182d5ab50 +
            (ulonglong)_DAT_182d5ab40 * (uVar8 & 0xffffffff) << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_182d5ab50 +
           ((ulonglong)uVar43 * (ulonglong)_DAT_182d5ab50 +
            (uVar13 & 0xffffffff) * (ulonglong)_DAT_182d5ab40 << 0x20)) -
          ((ulonglong)uVar40 * (_DAT_182d5ac20 & 0xffffffff) +
           ((ulonglong)_DAT_182d5ac50 * (ulonglong)uVar40 +
            (SUB168(auVar25 ^ auVar1,0) >> 0x20) * (_DAT_182d5ac20 & 0xffffffff) << 0x20) +
          (ulonglong)uVar24 * (ulonglong)_DAT_182d5ac40 +
          ((uVar14 >> 0x20) * (ulonglong)_DAT_182d5ac40 +
           (ulonglong)_DAT_182d5ac30 * (ulonglong)uVar24 << 0x20) +
          (ulonglong)uVar28 * (ulonglong)_DAT_182d5ac40 +
          ((uVar7 >> 0x20) * (ulonglong)_DAT_182d5ac40 +
           (ulonglong)uVar28 * (ulonglong)_DAT_182d5ac30 << 0x20) +
          (uVar8 & 0xffffffff) * (ulonglong)_DAT_182d5ac00 +
          ((ulonglong)_DAT_182d5ac10 * (uVar8 & 0xffffffff) +
           (ulonglong)uVar17 * (ulonglong)_DAT_182d5ac00 << 0x20) +
          (uVar13 & 0xffffffff) * (ulonglong)_DAT_182d5abe0 +
          ((ulonglong)_DAT_182d5abf0 * (uVar13 & 0xffffffff) +
           (ulonglong)uVar43 * (ulonglong)_DAT_182d5abe0 << 0x20))) - _DAT_182d5ac20;
  auVar26._0_8_ = uVar8 ^ _DAT_1800632f0;
  auVar26._8_8_ = uVar12;
  auVar20 = pshufb(auVar26 ^ _DAT_182d5ac60,_DAT_1800170c0);
  _DAT_18347b008 = _DAT_18347b068 ^ uVar9 ^ uVar8;
  _DAT_18347aff0 = (_DAT_18347aff0 ^ uVar9) + uVar8 ^ 0xad25013557feb910;
  _DAT_18347b080 = (_DAT_18347b080 * -0x48e5d43db03fcd67 ^ _DAT_18347aff0) + uVar9;
  _DAT_18347b0c0 = _DAT_18347b080 ^ _DAT_18347aff0;
  uVar7 = auVar20._8_8_ + auVar20._0_8_;
  uVar9 = uVar7 + _DAT_18347b070;
  if (auVar20._4_4_ < 0) {
    uVar9 = _DAT_18347afc0 ^ uVar7;
  }
  _DAT_18347af00 = uVar8;
  _DAT_18347af00 = func_0x0001907c6120(SUB161(auVar26 ^ _DAT_182d5ac60,5) ^ uVar9);
  uVar28 = (uint)(uVar8 >> 0x20);
  auVar29._8_4_ = (int)uVar8;
  auVar29._0_8_ = uVar8;
  auVar29._12_4_ = uVar28;
  uVar36 = (uint)(uVar12 >> 0x20);
  auVar27._8_4_ = (int)uVar12;
  auVar27._0_8_ = uVar12;
  auVar27._12_4_ = uVar36;
  uVar40 = SUB164(auVar29 & auVar27,0);
  uVar7 = SUB168(auVar29 & auVar27,0);
  uVar43 = SUB164(auVar29 | auVar27,0);
  uVar13 = SUB168(auVar29 | auVar27,0);
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar24 = SUB164(auVar27 ^ auVar2,0);
  uVar9 = SUB168(auVar27 ^ auVar2,0);
  uVar17 = SUB164(auVar29 ^ auVar27,0);
  uVar15 = (((_DAT_182d5acb0 & 0xffffffff) * (ulonglong)uVar24 +
             ((_DAT_182d5ace0 & 0xffffffff) * (ulonglong)uVar24 +
              (uVar9 >> 0x20) * (_DAT_182d5acb0 & 0xffffffff) << 0x20) +
            (_DAT_182d5acd0 & 0xffffffff) * (ulonglong)uVar43 +
            ((uVar13 >> 0x20) * (_DAT_182d5acd0 & 0xffffffff) +
             (_DAT_182d5acc0 & 0xffffffff) * (ulonglong)uVar43 << 0x20) +
            (ulonglong)uVar40 * (_DAT_182d5acd0 & 0xffffffff) +
            ((uVar7 >> 0x20) * (_DAT_182d5acd0 & 0xffffffff) +
             (ulonglong)uVar40 * (_DAT_182d5acc0 & 0xffffffff) << 0x20) +
            (_DAT_182d5ac90 & 0xffffffff) * (uVar12 & 0xffffffff) +
            ((_DAT_182d5aca0 & 0xffffffff) * (uVar12 & 0xffffffff) +
             (ulonglong)uVar36 * (_DAT_182d5ac90 & 0xffffffff) << 0x20) +
            (_DAT_182d5ac70 & 0xffffffff) * (uVar8 & 0xffffffff) +
            ((_DAT_182d5ac80 & 0xffffffff) * (uVar8 & 0xffffffff) +
             (ulonglong)uVar28 * (_DAT_182d5ac70 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar24 * (ulonglong)_DAT_182d5ad50 +
            ((_DAT_182d5adc0 & 0xffffffff) * (ulonglong)uVar24 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_182d5ad50 << 0x20) +
           (ulonglong)uVar17 * (ulonglong)_DAT_182d5ada0 +
           ((_DAT_182d5adb0 & 0xffffffff) * (ulonglong)uVar17 +
            (SUB168(auVar29 ^ auVar27,0) >> 0x20) * (ulonglong)_DAT_182d5ada0 << 0x20) +
           (ulonglong)uVar43 * (ulonglong)_DAT_182d5ad80 +
           ((_DAT_182d5ad90 & 0xffffffff) * (ulonglong)uVar43 +
            (uVar13 >> 0x20) * (ulonglong)_DAT_182d5ad80 << 0x20) +
           (ulonglong)uVar40 * (ulonglong)_DAT_182d5ad60 +
           ((_DAT_182d5ad70 & 0xffffffff) * (ulonglong)uVar40 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_182d5ad60 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_182d5ad30 +
           ((_DAT_182d5ad40 & 0xffffffff) * (uVar12 & 0xffffffff) +
            (ulonglong)uVar36 * (ulonglong)_DAT_182d5ad30 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_182d5ad10 +
           ((_DAT_182d5ad20 & 0xffffffff) * (uVar8 & 0xffffffff) +
            (ulonglong)uVar28 * (ulonglong)_DAT_182d5ad10 << 0x20))) + _DAT_182d5add0;
  _DAT_18347af18 = _DAT_18347afe0 ^ _DAT_18347af00 ^ uVar15;
  _DAT_18347b0d0 = (_DAT_18347b0d0 ^ _DAT_18347af00) + uVar15 ^ 0x4fb3e3db96a3d7b0;
  _DAT_18347b000 =
       (_DAT_18347b0c8 * 0x182b1ba1d18ab633 ^ _DAT_18347b0d0) + _DAT_18347af00 ^ _DAT_18347b0d0;
  _DAT_18347b058 = _DAT_18347af20 ^ uVar15;
  uVar8 = uVar16 ^ 0x84222325;
  uVar9 = (uVar8 ^ _DAT_18347af18) + _DAT_18347af38 + uVar8;
  uVar7 = (uVar11 ^ _DAT_18347af38) + _DAT_18347af18 + uVar11;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8 ^ _DAT_18347af18;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar11 ^ _DAT_18347af38;
  _DAT_18347b0c8 = uVar15;
  _DAT_18347afa8 =
       func_0x0001907c6120((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18347af18 + uVar11) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18347af38 + uVar8));
  auVar20 = _DAT_1800170c0;
  uVar9 = _DAT_18347afa8 ^ (uVar16 | uVar11) ^ uVar16;
  uVar28 = (uint)(uVar16 >> 0x20);
  auVar30._8_4_ = (int)uVar16;
  auVar30._0_8_ = uVar16;
  auVar30._12_4_ = uVar28;
  uVar17 = (uint)(uVar11 >> 0x20);
  auVar44._8_4_ = (int)uVar11;
  auVar44._0_8_ = uVar11;
  auVar44._12_4_ = uVar17;
  uVar13 = (uVar16 & 0xffffffff) * (uVar11 & 0xffffffff) +
           ((uVar16 & 0xffffffff) * (ulonglong)uVar17 + (ulonglong)uVar28 * (uVar11 & 0xffffffff) <<
           0x20);
  uVar24 = SUB164(auVar30 & auVar44,0);
  uVar46 = SUB168(auVar30 & auVar44,0);
  uVar40 = SUB164(auVar30 | auVar44,0);
  uVar12 = SUB168(auVar30 | auVar44,0);
  uVar36 = SUB164(auVar30 ^ auVar44,0);
  uVar14 = SUB168(auVar30 ^ auVar44,0);
  uVar7 = uVar16 ^ _DAT_18001a710;
  lVar10 = (uVar13 & 0xffffffff) * (ulonglong)_DAT_182d5ae50 +
           ((ulonglong)_DAT_182d5ae60 * (uVar13 & 0xffffffff) +
            (uVar13 >> 0x20) * (ulonglong)_DAT_182d5ae50 << 0x20);
  auVar39._8_8_ = uVar11;
  auVar39._0_8_ = uVar8;
  auVar18 = pshufb(_DAT_182d5aef0 ^ auVar39,_DAT_1800170c0);
  uVar13 = (((uVar7 & 0xffffffff) * (ulonglong)_DAT_182d5ae00 +
             ((uVar7 >> 0x20) * (ulonglong)_DAT_182d5ae00 +
              (ulonglong)_DAT_182d5ade0 * (uVar7 & 0xffffffff) << 0x20) +
             (ulonglong)_DAT_182d5ae20 * (ulonglong)uVar36 +
             ((uVar14 >> 0x20) * (ulonglong)_DAT_182d5ae20 +
              (ulonglong)_DAT_182d5ae10 * (ulonglong)uVar36 << 0x20) +
             (ulonglong)uVar24 * (ulonglong)_DAT_182d5ae20 +
             ((uVar46 >> 0x20) * (ulonglong)_DAT_182d5ae20 +
              (ulonglong)uVar24 * (ulonglong)_DAT_182d5ae10 << 0x20) +
             (ulonglong)_DAT_182d5adf0 * (uVar16 & 0xffffffff) + uVar11 +
             ((ulonglong)uVar28 * (ulonglong)_DAT_182d5adf0 +
              (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d5ade0 << 0x20) +
             (ulonglong)_DAT_182d5ae30 * (ulonglong)uVar40 +
             ((ulonglong)_DAT_182d5ae40 * (ulonglong)uVar40 +
              (uVar12 >> 0x20) * (ulonglong)_DAT_182d5ae30 << 0x20) + lVar10) -
           ((ulonglong)uVar36 * (_DAT_182d5aed0 & 0xffffffff) +
            ((ulonglong)_DAT_182d5aee0 * (ulonglong)uVar36 +
             (uVar14 >> 0x20) * (_DAT_182d5aed0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar40 * (ulonglong)_DAT_182d5aeb0 +
            ((ulonglong)_DAT_182d5aec0 * (ulonglong)uVar40 +
             (uVar12 >> 0x20) * (ulonglong)_DAT_182d5aeb0 << 0x20) +
            (ulonglong)uVar24 * (ulonglong)_DAT_182d5ae90 +
            ((ulonglong)_DAT_182d5aea0 * (ulonglong)uVar24 +
             (uVar46 >> 0x20) * (ulonglong)_DAT_182d5ae90 << 0x20) +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_182d5ae80 +
            ((ulonglong)uVar17 * (ulonglong)_DAT_182d5ae80 +
             (ulonglong)_DAT_182d5ae70 * (uVar11 & 0xffffffff) << 0x20) +
            (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d5ae80 +
            ((ulonglong)uVar28 * (ulonglong)_DAT_182d5ae80 +
             (uVar16 & 0xffffffff) * (ulonglong)_DAT_182d5ae70 << 0x20) + lVar10)) +
           0x92205b2791415291;
  _DAT_18347b018 = _DAT_18347af28 ^ uVar9 ^ uVar13;
  _DAT_18347b0d8 = (_DAT_18347b0d8 ^ uVar9) + uVar13 ^ 0x8d28943dbff2aaf3;
  _DAT_18347aff8 = (_DAT_18347aff8 * -0x66f726bc0dbff6e3 ^ _DAT_18347b0d8) + uVar9;
  _DAT_18347b0f8 = _DAT_18347aff8 ^ _DAT_18347b0d8;
  uVar7 = auVar18._8_8_ + auVar18._0_8_;
  uVar9 = uVar7 + _DAT_18347b090;
  if (auVar18._4_4_ < 0) {
    uVar9 = _DAT_18347afa8 ^ uVar7;
  }
  _DAT_18347af40 = uVar13;
  _DAT_18347af58 = func_0x0001907c6120(SUB161(_DAT_182d5aef0 ^ auVar39,5) ^ uVar9);
  uVar9 = ((uVar16 | uVar11) ^ _DAT_18347af58) & 0x7fffffff80000000;
  uVar7 = uVar11 & uVar16;
  _DAT_18347b028 = uVar16 + uVar11 + uVar7 * -2;
  _DAT_18347af10 = (_DAT_18347af10 ^ uVar9) + _DAT_18347b028 ^ 0x663ed0f9b69db7ae;
  _DAT_18347b0c0 = (_DAT_18347b0c0 * -0x42ed572178c05b01 ^ _DAT_18347af10) + uVar9;
  _DAT_18347b090 = _DAT_18347b0c0 ^ _DAT_18347af10;
  auVar20 = pshufb(auVar39 ^ _DAT_182d5af00,auVar20);
  uVar12 = auVar20._8_8_ + auVar20._0_8_;
  uVar9 = uVar12 + _DAT_18347afb0;
  if (auVar20._4_4_ < 0) {
    uVar9 = _DAT_18347afb0 ^ uVar12;
  }
  _DAT_18347af20 = func_0x0001907c6120(SUB161(auVar39 ^ _DAT_182d5af00,5) ^ uVar9);
  uVar9 = _DAT_18347af20 - (_DAT_18347af20 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_18347af20;
  _DAT_18347b0a0 = (_DAT_18347b0a0 ^ uVar9) + uVar7 ^ 0x68a6eeea9757781f;
  _DAT_18347b010 = (_DAT_18347b010 * -0x1f425d7cf13d393b ^ _DAT_18347b0a0) + uVar9;
  _DAT_18347afd0 = _DAT_18347b010 ^ _DAT_18347b0a0;
  uVar13 = uVar13 - (uVar16 + uVar11);
  uVar9 = uVar15 ^ 0x84222325 ^ _DAT_18347b0c8;
  lVar10 = (uVar15 ^ 0x84222325) + _DAT_18347b0f0;
  uVar11 = uVar9 + lVar10;
  uVar12 = (uVar13 ^ _DAT_18347b0f0) + _DAT_18347b0c8 + uVar13;
  uVar9 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar9;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar13 ^ _DAT_18347b0f0;
  _DAT_18347b0a8 = uVar7;
  _DAT_18347b088 =
       func_0x0001907c6120((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18347b0c8 + uVar13) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar10);
  auVar20 = _DAT_1800170c0;
  uStack0000000000000070 = (undefined4)uVar15;
  uStack0000000000000074 = (uint)(uVar15 >> 0x20);
  auVar34._8_4_ = uStack0000000000000070;
  auVar34._0_8_ = uVar15;
  auVar34._12_4_ = uStack0000000000000074;
  uVar24 = (uint)(uVar13 >> 0x20);
  auVar31._8_4_ = (int)uVar13;
  auVar31._0_8_ = uVar13;
  auVar31._12_4_ = uVar24;
  uVar28 = SUB164(auVar34 & auVar31,0);
  uVar11 = SUB168(auVar34 & auVar31,0);
  uVar36 = SUB164(auVar34 | auVar31,0);
  uVar9 = SUB168(auVar34 | auVar31,0);
  uVar17 = SUB164(auVar34 ^ auVar31,0);
  uVar7 = SUB168(auVar34 ^ auVar31,0);
  auVar3._8_8_ = _UNK_18001a718;
  auVar3._0_8_ = _DAT_18001a710;
  uVar40 = SUB164(auVar31 ^ auVar3,0);
  uVar11 = (((ulonglong)uVar40 * (_DAT_182d5af50 & 0xffffffff) +
             ((ulonglong)_DAT_182d5afc0 * (ulonglong)uVar40 +
              (SUB168(auVar31 ^ auVar3,0) >> 0x20) * (_DAT_182d5af50 & 0xffffffff) << 0x20) +
            (ulonglong)_DAT_182d5afa0 * (ulonglong)uVar17 +
            ((ulonglong)_DAT_182d5afb0 * (ulonglong)uVar17 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_182d5afa0 << 0x20) +
            (ulonglong)_DAT_182d5af80 * (ulonglong)uVar36 +
            ((ulonglong)_DAT_182d5af90 * (ulonglong)uVar36 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_182d5af80 << 0x20) +
            (ulonglong)_DAT_182d5af60 * (ulonglong)uVar28 +
            ((ulonglong)_DAT_182d5af70 * (ulonglong)uVar28 +
             (uVar11 >> 0x20) * (ulonglong)_DAT_182d5af60 << 0x20) +
            (ulonglong)_DAT_182d5af30 * (uVar13 & 0xffffffff) +
            ((ulonglong)_DAT_182d5af40 * (uVar13 & 0xffffffff) +
             (ulonglong)uVar24 * (ulonglong)_DAT_182d5af30 << 0x20) +
            (ulonglong)_DAT_182d5af10 * (uVar15 & 0xffffffff) +
            ((ulonglong)_DAT_182d5af20 * (uVar15 & 0xffffffff) +
             (ulonglong)uStack0000000000000074 * (ulonglong)_DAT_182d5af10 << 0x20)) -
           ((ulonglong)uVar17 * (ulonglong)_DAT_182d5b050 +
            ((ulonglong)_DAT_182d5b060 * (ulonglong)uVar17 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_182d5b050 << 0x20) +
            (ulonglong)uVar36 * (ulonglong)_DAT_182d5b030 +
            ((ulonglong)_DAT_182d5b040 * (ulonglong)uVar36 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_182d5b030 << 0x20) +
           (ulonglong)uVar28 * (ulonglong)_DAT_182d5b010 +
           ((ulonglong)_DAT_182d5b020 * (ulonglong)uVar28 +
            (uVar11 >> 0x20) * (ulonglong)_DAT_182d5b010 << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_182d5b000 +
           ((ulonglong)uVar24 * (ulonglong)_DAT_182d5b000 +
            (ulonglong)_DAT_182d5aff0 * (uVar13 & 0xffffffff) << 0x20) +
           (uVar15 & 0xffffffff) * (ulonglong)_DAT_182d5b000 +
           ((ulonglong)uStack0000000000000074 * (ulonglong)_DAT_182d5b000 +
            (uVar15 & 0xffffffff) * (ulonglong)_DAT_182d5aff0 << 0x20))) + _DAT_182d5af50;
  auVar21._8_8_ = ~uVar16;
  auVar21._0_8_ = uVar8;
  auVar18 = pshufb(auVar21 ^ _DAT_182d5b070,_DAT_1800170c0);
  _DAT_18347b0a0 = _DAT_18347afd8 ^ _DAT_18347af48 ^ uVar11;
  _DAT_18347b0f0 = (_DAT_18347b0f0 ^ _DAT_18347af48) + uVar11 ^ 0x752def1f898ee920;
  _DAT_18347b098 = (_DAT_18347b098 * 0x6fce326e4dbdd42d ^ _DAT_18347b0f0) + _DAT_18347af48;
  _DAT_18347af60 = _DAT_18347b098 ^ _DAT_18347b0f0;
  uVar7 = auVar18._8_8_ + auVar18._0_8_;
  uVar9 = uVar7 + _DAT_18347afb0;
  if (auVar18._4_4_ < 0) {
    uVar9 = _DAT_18347b080 ^ uVar7;
  }
  _DAT_18347b018 = uVar11;
  _DAT_18347af38 = func_0x0001907c6120(SUB161(auVar21 ^ _DAT_182d5b070,5) ^ uVar9);
  uVar9 = _DAT_182d5a1f0;
  _DAT_18347b0b8 = _DAT_18347b0b8 ^ ~_DAT_18347af38 ^ 0x29fe2556c42e0f2f;
  _DAT_18347afd0 = (_DAT_18347afd0 * -0x6f2d824bf74d0a3d ^ _DAT_18347b0b8) + ~_DAT_18347af38;
  _DAT_18347afc8 = _DAT_18347afd0 ^ _DAT_18347b0b8;
  auVar22._8_8_ = _DAT_182d5a1f0;
  auVar22._0_8_ = _DAT_182d5a1f0 ^ 0x84222325;
  _DAT_18347b090 = 0;
  auVar18 = pshufb(auVar22 ^ _DAT_182d5b080,auVar20);
  uVar8 = auVar18._8_8_ + auVar18._0_8_;
  uVar7 = uVar8 + _DAT_18347afe8;
  if (auVar18._4_4_ < 0) {
    uVar7 = _DAT_18347b068 ^ uVar8;
  }
  _DAT_18347b008 = func_0x0001907c6120(SUB161(auVar22 ^ _DAT_182d5b080,5) ^ uVar7);
  uVar9 = (uVar6 ^ _DAT_18347b008) & 0x7fffffffffffffff ^ uVar9;
  _DAT_18347afe8 = _DAT_18347afe8 ^ uVar9 ^ 0x822601de746e97c4;
  _DAT_18347b090 = (_DAT_18347b090 * -0x66dbcf96e85dbe49 ^ _DAT_18347afe8) + uVar9;
  _DAT_18347aff0 = _DAT_18347b090 ^ _DAT_18347afe8;
  auVar23._0_8_ = _DAT_1800632f0 ^ uVar11;
  auVar23._8_8_ = 0;
  _DAT_18347af28 = 0;
  auVar20 = pshufb(auVar23 ^ _DAT_182d5b090,auVar20);
  uVar7 = auVar20._8_8_ + auVar20._0_8_;
  uVar9 = uVar7 + _DAT_18347b0c8;
  if (auVar20._4_4_ < 0) {
    uVar9 = _DAT_18347aff8 ^ uVar7;
  }
  _DAT_18347b0a8 = func_0x0001907c6120(SUB161(auVar23 ^ _DAT_182d5b090,5) ^ uVar9);
  uVar40 = (uint)(uVar11 >> 0x20);
  auVar35._8_4_ = (int)uVar11;
  auVar35._0_8_ = uVar11;
  auVar35._12_4_ = uVar40;
  auVar20 = ZEXT816(0);
  auVar4._8_8_ = _UNK_18001a718;
  auVar4._0_8_ = _DAT_18001a710;
  uVar17 = SUB164(auVar35 | auVar20,0);
  uVar7 = SUB168(auVar35 | auVar20,0);
  uVar28 = SUB164(auVar35 ^ auVar20,0);
  uVar8 = SUB168(auVar35 ^ auVar20,0);
  uVar24 = SUB164(auVar20 ^ auVar4,0);
  uVar6 = SUB168(auVar20 ^ auVar4,0);
  auVar38._8_4_ = 0xffffffff;
  auVar38._0_8_ = 0xffffffffffffffff;
  auVar38._12_4_ = 0xffffffff;
  uVar36 = SUB164(auVar38 ^ auVar35,0);
  lVar10 = (uVar6 & 0xffffffff) * (ulonglong)_DAT_182d5b1b0 +
           ((uVar6 >> 0x20) * (ulonglong)_DAT_182d5b1b0 +
            (ulonglong)_DAT_182d5b1a0 * (uVar6 & 0xffffffff) << 0x20) +
           (ulonglong)uVar36 * (ulonglong)_DAT_182d5b190 +
           ((SUB168(auVar38 ^ auVar35,0) >> 0x20) * (ulonglong)_DAT_182d5b190 +
            (ulonglong)_DAT_182d5b180 * (ulonglong)uVar36 << 0x20) +
           (ulonglong)uVar28 * (_DAT_182d5b1d0 & 0xffffffff) +
           ((uVar8 >> 0x20) * (_DAT_182d5b1d0 & 0xffffffff) +
            (ulonglong)_DAT_182d5b1c0 * (ulonglong)uVar28 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_182d5b190 +
           ((ulonglong)uVar40 * (ulonglong)_DAT_182d5b190 +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_182d5b180 << 0x20) +
           (ulonglong)uVar17 * (ulonglong)_DAT_182d5b1e0 +
           ((ulonglong)_DAT_182d5b1f0 * (ulonglong)uVar17 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_182d5b1e0 << 0x20);
  uVar9 = _DAT_18347b0a8 * -0x3c65cba2e089199f;
  _DAT_18347b070 =
       (((ulonglong)_DAT_182d5b0e0 * (ulonglong)uVar24 +
         ((ulonglong)_DAT_182d5b150 * (ulonglong)uVar24 +
          (uVar6 >> 0x20) * (ulonglong)_DAT_182d5b0e0 << 0x20) +
        (ulonglong)_DAT_182d5b130 * (ulonglong)uVar28 +
        ((ulonglong)_DAT_182d5b140 * (ulonglong)uVar28 + (uVar8 >> 0x20) * (ulonglong)_DAT_182d5b130
        << 0x20) +
        (ulonglong)_DAT_182d5b110 * (ulonglong)uVar17 +
        ((ulonglong)_DAT_182d5b120 * (ulonglong)uVar17 + (uVar7 >> 0x20) * (ulonglong)_DAT_182d5b110
        << 0x20) +
        (ulonglong)_DAT_182d5b0a0 * (uVar11 & 0xffffffff) +
        ((ulonglong)_DAT_182d5b0b0 * (uVar11 & 0xffffffff) +
         (ulonglong)uVar40 * (ulonglong)_DAT_182d5b0a0 << 0x20)) - lVar10) + 0xeb04d2eb2d4f8c02;
  _DAT_18347afe8 = _DAT_18347b098 ^ uVar9 ^ _DAT_18347b070;
  _DAT_18347b088 = (_DAT_18347b088 ^ uVar9) + _DAT_18347b070 ^ 0x757edf0b405b37ce;
  _DAT_18347b0f0 = (_DAT_18347b0f0 * -0xdcff5efe84eb5e1 ^ _DAT_18347b088) + uVar9;
  _DAT_18347b028 = _DAT_18347b0f0 ^ _DAT_18347b088;
  FUN_190dd72e0(lVar10,*_DAT_18301ee50 + 0x2b1e,0x93);
  cVar5 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar5 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c5215 (image 1907c5215) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c5215(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_182d5a638)();
  return;
}



// ===== continuation @ rva 107c6054 (image 1907c6054) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6054(void)

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



// ===== continuation @ rva 107c6251 (image 1907c6251) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6251(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b258)();
  return;
}



// ===== continuation @ rva 107c61d8 (image 1907c61d8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c61d8(undefined4 param_1)

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



// ===== continuation @ rva 107c6343 (image 1907c6343) =====

void FUN_1907c6343(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107c6279 (image 1907c6279) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6279(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c6336 (image 1907c6336) =====

void FUN_1907c6336(void)

{
  return;
}



// ===== continuation @ rva 107c629d (image 1907c629d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c629d(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5b2b8)();
  return;
}



// ===== continuation @ rva 107c62f7 (image 1907c62f7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c62f7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x378))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d5b2a8)();
  return;
}



// ===== continuation @ rva 107c6214 (image 1907c6214) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6214(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d5b2d8)();
  return;
}



// ===== continuation @ rva 107c6326 (image 1907c6326) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6326(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_182d5b268)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 107c62d0 (image 1907c62d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c62d0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107a0e25 (image 1907a0e25) =====

void FUN_1907a0e25(void)

{
  return;
}



// ===== continuation @ rva 1079d9c7 (image 19079d9c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079d9c7(void)

{
  FUN_190ddce00();
  (*_DAT_182d54cf8)();
  return;
}



// ===== continuation @ rva 1079f009 (image 19079f009) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079f009(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d55178)();
  return;
}



// ===== continuation @ rva 1079efb7 (image 19079efb7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079efb7(void)

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



// ===== continuation @ rva 107a0e5b (image 1907a0e5b) =====

void FUN_1907a0e5b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107a0452 (image 1907a0452) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907a0452(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1079f2f8 (image 19079f2f8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079f2f8(void)

{
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000090;
  
  uStack0000000000000090 = in_stack_00000040;
  uStack0000000000000060 = 0x41300000;
  (*_DAT_182d53fc8)();
  return;
}



// ===== continuation @ rva 1079f759 (image 19079f759) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19079f759(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 1079e2b5 (image 19079e2b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079e2b5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d545d8)();
  return;
}



// ===== continuation @ rva 1079f32b (image 19079f32b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19079f32b(void)

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



// ===== continuation @ rva 1079dfd9 (image 19079dfd9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_19079dfd9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c6466 (image 1907c6466) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6466(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b338)();
  return;
}



// ===== continuation @ rva 107c63f3 (image 1907c63f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c63f3(void)

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



// ===== continuation @ rva 107c6546 (image 1907c6546) =====

void FUN_1907c6546(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107c648e (image 1907c648e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c648e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c653e (image 1907c653e) =====

void FUN_1907c653e(void)

{
  return;
}



// ===== continuation @ rva 107c6506 (image 1907c6506) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6506(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d5b398)();
  return;
}



// ===== continuation @ rva 107c64af (image 1907c64af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c64af(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5b378)();
  return;
}



// ===== continuation @ rva 107c6451 (image 1907c6451) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6451(void)

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



// ===== continuation @ rva 107c64e2 (image 1907c64e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c64e2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c642c (image 1907c642c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c642c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d5b368)();
  return;
}



// ===== continuation @ rva 107c652d (image 1907c652d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c652d(void)

{
  (*_DAT_182d5b3a8)();
  return;
}



// ===== continuation @ rva 107c6666 (image 1907c6666) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6666(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b448)();
  return;
}



// ===== continuation @ rva 107c65f3 (image 1907c65f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c65f3(void)

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



// ===== continuation @ rva 107c6746 (image 1907c6746) =====

void FUN_1907c6746(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107c6651 (image 1907c6651) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6651(void)

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



// ===== continuation @ rva 107c673e (image 1907c673e) =====

void FUN_1907c673e(void)

{
  return;
}



// ===== continuation @ rva 107c66af (image 1907c66af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c66af(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5b498)();
  return;
}



// ===== continuation @ rva 107c668e (image 1907c668e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c668e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c672d (image 1907c672d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c672d(void)

{
  (*_DAT_182d5b458)();
  return;
}



// ===== continuation @ rva 107c6706 (image 1907c6706) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6706(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d5b468)();
  return;
}



// ===== continuation @ rva 107c6866 (image 1907c6866) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6866(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b518)();
  return;
}



// ===== continuation @ rva 107c67f3 (image 1907c67f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c67f3(void)

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



// ===== continuation @ rva 107c6946 (image 1907c6946) =====

void FUN_1907c6946(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107c693e (image 1907c693e) =====

void FUN_1907c693e(void)

{
  return;
}



// ===== continuation @ rva 107c682c (image 1907c682c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c682c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d5b538)();
  return;
}



// ===== continuation @ rva 107c688e (image 1907c688e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c688e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c692d (image 1907c692d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c692d(void)

{
  (*_DAT_182d5b4f8)();
  return;
}



// ===== continuation @ rva 107c6851 (image 1907c6851) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6851(void)

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



// ===== continuation @ rva 107c68af (image 1907c68af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c68af(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5b568)();
  return;
}



// ===== continuation @ rva 107c6906 (image 1907c6906) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6906(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d5b528)();
  return;
}



// ===== continuation @ rva 107c6a66 (image 1907c6a66) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6a66(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b608)();
  return;
}



// ===== continuation @ rva 107c69f3 (image 1907c69f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c69f3(void)

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



// ===== continuation @ rva 107c6b3c (image 1907c6b3c) =====

void FUN_1907c6b3c(void)

{
  return;
}



// ===== continuation @ rva 107c6aaf (image 1907c6aaf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6aaf(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5b5f8)();
  return;
}



// ===== continuation @ rva 107c6a2c (image 1907c6a2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6a2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d5b628)();
  return;
}



// ===== continuation @ rva 107c6b44 (image 1907c6b44) =====

void FUN_1907c6b44(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107c6ae2 (image 1907c6ae2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6ae2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c6a8e (image 1907c6a8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6a8e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107c6a51 (image 1907c6a51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6a51(void)

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



// ===== continuation @ rva 107c6b2c (image 1907c6b2c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6b2c(void)

{
  (*_DAT_182d5b618)();
  return;
}



// ===== continuation @ rva 107c6c6b (image 1907c6c6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6c6b(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b738)();
  return;
}



// ===== continuation @ rva 107c6bf8 (image 1907c6bf8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6bf8(void)

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



// ===== continuation @ rva 107c6d4d (image 1907c6d4d) =====

void FUN_1907c6d4d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107c6c56 (image 1907c6c56) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6c56(void)

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



// ===== continuation @ rva 107c6d32 (image 1907c6d32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6d32(void)

{
  (*_DAT_182d5b718)();
  return;
}



// ===== continuation @ rva 107c6ce7 (image 1907c6ce7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6ce7(void)

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



// ===== continuation @ rva 107c6d43 (image 1907c6d43) =====

void FUN_1907c6d43(void)

{
  return;
}



// ===== continuation @ rva 107c6cb4 (image 1907c6cb4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6cb4(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5b6d8)();
  return;
}



// ===== continuation @ rva 107c6d0b (image 1907c6d0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6d0b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182d5b6c8)();
  return;
}



// ===== continuation @ rva 107c6e6b (image 1907c6e6b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6e6b(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b7f8)();
  return;
}



// ===== continuation @ rva 107c6df8 (image 1907c6df8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6df8(void)

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



// ===== continuation @ rva 107c6f4d (image 1907c6f4d) =====

void FUN_1907c6f4d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107c6f43 (image 1907c6f43) =====

void FUN_1907c6f43(void)

{
  return;
}



// ===== continuation @ rva 107c6e31 (image 1907c6e31) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6e31(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182d5b818)();
  return;
}



// ===== continuation @ rva 107c6f32 (image 1907c6f32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6f32(void)

{
  (*_DAT_182d5b798)();
  return;
}



// ===== continuation @ rva 107c6f0b (image 1907c6f0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6f0b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x368))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_182d5b7b8)();
  return;
}



// ===== continuation @ rva 107c6ee7 (image 1907c6ee7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6ee7(void)

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



// ===== continuation @ rva 107c6e93 (image 1907c6e93) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c6e93(void)

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



// ===== continuation @ rva 107a3667 (image 1907a3667) =====

void FUN_1907a3667(void)

{
  return;
}



// ===== continuation @ rva 107a34d0 (image 1907a34d0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a34d0(void)

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



// ===== continuation @ rva 107a699e (image 1907a699e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a699e(void)

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



// ===== continuation @ rva 107a67b0 (image 1907a67b0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a67b0(void)

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



// ===== continuation @ rva 107a3d36 (image 1907a3d36) =====

undefined8 thunk_FUN_1907a3650(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return 0;
}



// ===== continuation @ rva 107a746e (image 1907a746e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a746e(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_RAX + 0x78))(in_stack_00000030);
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



// ===== continuation @ rva 107a7185 (image 1907a7185) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a7185(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000030);
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



// ===== continuation @ rva 107a5c09 (image 1907a5c09) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a5c09(void)

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



// ===== continuation @ rva 107a59ce (image 1907a59ce) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a59ce(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
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



// ===== continuation @ rva 107a3ac9 (image 1907a3ac9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907a3ac9(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000058;
  undefined1 uStack000000000000008b;
  
  uStack000000000000008b = in_stack_00000058;
  (**(code **)(*unaff_RSI + 0x680))();
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107a3a7e (image 1907a3a7e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a3a7e(void)

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



// ===== continuation @ rva 107a8347 (image 1907a8347) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907a8347(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  undefined8 in_stack_00000078;
  
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000078);
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107a8063 (image 1907a8063) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a8063(void)

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



// ===== continuation @ rva 107a8104 (image 1907a8104) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907a8104(void)

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



// ===== continuation @ rva 107a803b (image 1907a803b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907a803b(void)

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



// ===== continuation @ rva 107ac2f2 (image 1907ac2f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ac2f2(void)

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



// ===== continuation @ rva 107ac29e (image 1907ac29e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ac29e(void)

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



// ===== continuation @ rva 107ad174 (image 1907ad174) =====

void FUN_1907ad174(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107acce7 (image 1907acce7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907acce7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107ad165 (image 1907ad165) =====

void FUN_1907ad165(void)

{
  return;
}



// ===== continuation @ rva 107ac9a4 (image 1907ac9a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ac9a4(void)

{
  FUN_190ddce00();
  (*_DAT_182d577a8)();
  return;
}



// ===== continuation @ rva 107acda8 (image 1907acda8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907acda8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182d575b8)();
  return;
}



// ===== continuation @ rva 107acd42 (image 1907acd42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907acd42(void)

{
  FUN_190dd72e0();
  (*_DAT_182d57618)();
  return;
}



// ===== continuation @ rva 107ac8bc (image 1907ac8bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ac8bc(void)

{
  FUN_190de3220();
  (*_DAT_182d575d8)();
  return;
}



// ===== continuation @ rva 107acb75 (image 1907acb75) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907acb75(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_182d57678)();
  return;
}



// ===== continuation @ rva 107aca3b (image 1907aca3b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907aca3b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 107acf09 (image 1907acf09) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907acf09(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d57998)();
  return;
}



// ===== continuation @ rva 107af27a (image 1907af27a) =====

void FUN_1907af27a(void)

{
  return;
}



// ===== continuation @ rva 107ad2ec (image 1907ad2ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ad2ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182d585f8)();
  return;
}



// ===== continuation @ rva 107ad427 (image 1907ad427) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ad427(void)

{
  FUN_190dd72e0();
  (*_DAT_182d58488)();
  return;
}



// ===== continuation @ rva 107afe1e (image 1907afe1e) =====

void FUN_1907afe1e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 107afce1 (image 1907afce1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907afce1(void)

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



// ===== continuation @ rva 107af28e (image 1907af28e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907af28e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182d57cf8)();
  return;
}



// ===== continuation @ rva 107aef3f (image 1907aef3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907aef3f(void)

{
  FUN_190dd72e0();
  (*_DAT_182d57fc8)();
  return;
}



// ===== continuation @ rva 107afd18 (image 1907afd18) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907afd18(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d585d8)();
  return;
}



// ===== continuation @ rva 107af86f (image 1907af86f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907af86f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182d58388)();
  return;
}



// ===== continuation @ rva 107ae60b (image 1907ae60b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ae60b(void)

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



// ===== continuation @ rva 107af555 (image 1907af555) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907af555(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d58648)();
  return;
}



// ===== continuation @ rva 107af33d (image 1907af33d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907af33d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182d57f68)();
  return;
}



// ===== continuation @ rva 107afb1a (image 1907afb1a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907afb1a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182d58198)();
  return;
}



// ===== continuation @ rva 107af709 (image 1907af709) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907af709(void)

{
  FUN_190de3220();
  (*_DAT_182d58638)();
  return;
}



