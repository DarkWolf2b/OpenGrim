// ===== continuation @ rva 41b5afc (image 1841b5afc) =====

void FUN_1841b5afc(void)

{
  return;
}



// ===== continuation @ rva 41a3e7b (image 1841a3e7b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001841a3ed1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1841a3e7b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 41b55d4 (image 1841b55d4) =====

void thunk_FUN_1841a6387(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 41a923e (image 1841a923e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a923e(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar4 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar4 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar4,2);
  uVar5 = (ulonglong)(uint)(int)cVar1;
  uVar6 = (_DAT_183066318 ^ _DAT_180131890) + _DAT_183066868 + 0xe09ac7d5;
  uVar7 = (_DAT_183066868 ^ _UNK_180131898) + _DAT_183066318 + 0x5a906e3e;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066318 ^ _DAT_180131890;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183066868 ^ _UNK_180131898;
  _DAT_183066ab0 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066318 + 0x5a906e3e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183066868 + 0xe09ac7d5));
  uVar6 = (ulonglong)((uint)_DAT_183066ab0 & 0x64b8e4f0);
  _DAT_1830668e8 = (_DAT_1830668e8 ^ uVar6) + 0x3e288ace ^ 0x6a956d290f01d92a;
  _DAT_1830667a8 = (_DAT_1830667a8 * 0x7b9e01d0cf13b039 ^ _DAT_1830668e8) + uVar6;
  _DAT_1830668d8 = _DAT_1830667a8 ^ _DAT_1830668e8;
  _DAT_183066980 = 0x3e288ace;
  uVar6 = (_DAT_183066a70 ^ _DAT_1801318a0) + _DAT_1830669a8 + 0x84222325;
  uVar7 = (_DAT_1830669a8 ^ _UNK_1801318a8) + _DAT_183066a70 + 0xc5d41510;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066a70 ^ _DAT_1801318a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830669a8 ^ _UNK_1801318a8;
  _DAT_1830669f8 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066a70 + 0xc5d41510) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830669a8 + 0x84222325));
  uVar6 = _DAT_1830669f8 ^ 0xc5d41510;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  _DAT_183066580 = (_DAT_183066580 ^ uVar6) - 0xc5d41510 ^ 0xabe47a737c99c042;
  _DAT_183066970 = (_DAT_183066970 * 0x325c2b3fc763d749 ^ _DAT_183066580) + uVar6;
  _DAT_1830666f8 = _DAT_183066970 ^ _DAT_183066580;
  _DAT_1830668f8 = 0x3a2beaf0;
  uVar6 = (_DAT_183066300 ^ _DAT_1801318b0) + _DAT_1830663a8 + 0x842223da;
  uVar7 = (_DAT_1830663a8 ^ _UNK_1801318b8) + _DAT_183066300 + 0xc5d41510;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066300 ^ _DAT_1801318b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830663a8 ^ _UNK_1801318b8;
  _DAT_1830668f8 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066300 + 0xc5d41510) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830663a8 + 0x842223da));
  uVar6 = _DAT_1830668f8 & 0xfffffffffff;
  _DAT_183066470 = _DAT_183066650 ^ uVar6 ^ 0xc5d4160f;
  _DAT_1830668e0 = (_DAT_1830668e0 ^ uVar6) + 0xc5d4160f ^ 0x57e3acf366012d52;
  _DAT_183066420 = (_DAT_183066420 * 0x518ca33cd2826a31 ^ _DAT_1830668e0) + uVar6;
  _DAT_183066930 = _DAT_183066420 ^ _DAT_1830668e0;
  _DAT_183066978 = 0xc5d4160f;
  uVar6 = (_DAT_183066608 ^ _DAT_1801318c0) + _DAT_183066430 + 0x41f6352a;
  uVar7 = (_DAT_183066430 ^ _UNK_1801318c8) + _DAT_183066608 + 0x3a2beaf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066608 ^ _DAT_1801318c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183066430 ^ _UNK_1801318c8;
  _DAT_183066978 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066608 + 0x3a2beaf0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183066430 + 0x41f6352a));
  uVar6 = _DAT_183066978 ^ 0x2cf3fd2c6d836410;
  _DAT_1830667b0 = _DAT_183066378 ^ uVar6 ^ 0x1000000ff;
  _DAT_1830667a0 = (_DAT_1830667a0 ^ uVar6) + 0x1000000ff ^ 0x332912eb74398772;
  _DAT_1830667a8 = (_DAT_1830667a8 * -0x2505571a43145e5b ^ _DAT_1830667a0) + uVar6;
  _DAT_1830666a0 = _DAT_1830667a8 ^ _DAT_1830667a0;
  _DAT_183066630 = 0xff;
  _DAT_183066610 = func_0x0001841b5ce0(_DAT_1830665b0 + 0xffd5ff24dd0024ffU ^ 0x26);
  _DAT_183066708 =
       (_DAT_183066708 ^ _DAT_183066610 & 0x7fffffffffffffff) - 0x5b471900 ^ 0xa9b3f7f5821f4731;
  _DAT_183066630 =
       (_DAT_183066630 * 0x652e0c4db32efc77 ^ _DAT_183066708) +
       (_DAT_183066610 & 0x7fffffffffffffff);
  _DAT_183066358 = _DAT_183066630 ^ _DAT_183066708;
  _DAT_183066820 = 0xa4b8e700;
  _DAT_183066708 = func_0x0001841b5ce0(_DAT_1830668e8 ^ 0x600c0a5ffe4fa);
  uVar6 = (_DAT_183066708 << 0x15 | _DAT_183066708 >> 0x2b) ^ 0x5b471900;
  _DAT_1830668a8 = _DAT_1830663b0 ^ uVar6 ^ 0x5b4719ff;
  _DAT_183066970 = (_DAT_183066970 ^ uVar6) + 0x5b4719ff ^ 0xff252738deaa0e9c;
  _DAT_1830666f8 = (_DAT_1830666f8 * -0x2f7c0b9567445e21 ^ _DAT_183066970) + uVar6;
  _DAT_1830665d0 = _DAT_1830666f8 ^ _DAT_183066970;
  _DAT_1830667c8 = 0x5b4719ff;
  uVar6 = (~_DAT_183066810 + 0xa4b8e701) *
          ((_DAT_183066638 ^ 0xdf653ada) + (ulonglong)((uint)_DAT_183066638 & 0xdf653ada) * 2);
  uVar6 = (uVar6 | _DAT_1830666a0) + (uVar6 & _DAT_1830666a0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830666f0 = func_0x0001841b5ce0((uVar6 | 0x7bddddda) + (ulonglong)((uint)uVar6 & 0x7bddddda))
  ;
  uVar6 = _DAT_1830666f0 & 0x7ffffffffff;
  _DAT_1830664e0 = _DAT_183066608 ^ uVar6 ^ 0x1000000ff;
  _DAT_1830668a8 = (_DAT_1830668a8 ^ uVar6) + 0x1000000ff ^ 0x5bfd662b57cd1214;
  _DAT_1830668c0 = (_DAT_1830668c0 * 0xc813c39ff663651 ^ _DAT_1830668a8) + uVar6;
  _DAT_183066480 = _DAT_1830668c0 ^ _DAT_1830668a8;
  _DAT_183066688 = 0xff;
  uVar6 = (_DAT_183066940 ^ _DAT_1801318d0) + _DAT_1830664c0 + 0x84222325;
  uVar7 = (_DAT_1830664c0 ^ _UNK_1801318d8) + _DAT_183066940 + 0xe61afc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066940 ^ _DAT_1801318d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830664c0 ^ _UNK_1801318d8;
  _DAT_183066a08 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066940 + 0xe61afc0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830664c0 + 0x84222325));
  _DAT_1830666f0 = _DAT_183066938 * 0x6190c4f0e0020fef;
  _DAT_1830663c0 = _DAT_1830663c0 - 0xe61afc0 ^ 0x7531dc738df90ec2;
  _DAT_183066938 = _DAT_1830666f0 ^ _DAT_1830663c0;
  _DAT_183066550 = 0xf19e5040;
  uVar6 = (~_DAT_183066af0 + 0xe61afc1) *
          ((_DAT_183066970 ^ 0x842223da) + (ulonglong)((uint)_DAT_183066970 & 0x842223da) * 2);
  uVar6 = (uVar6 | _DAT_183066a78) + (uVar6 & _DAT_183066a78);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183066398 = func_0x0001841b5ce0((uVar6 | 0x8a438c1a) + (ulonglong)((uint)uVar6 & 0x8a438c1a))
  ;
  uVar6 = _DAT_183066398 - (_DAT_183066398 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (ulonglong)(((uint)_DAT_183066398 ^ (uint)bVar2 + (uint)bVar2) & 0xff);
  _DAT_1830666d8 = _DAT_183066460 ^ uVar6 ^ 0xe61b0bf;
  _DAT_183066978 = (_DAT_183066978 ^ uVar6) + 0xe61b0bf ^ 0x5658c0edb95fb8d7;
  _DAT_183066510 = (_DAT_183066510 * 0x3c885426960295c3 ^ _DAT_183066978) + uVar6;
  _DAT_183066830 = _DAT_183066510 ^ _DAT_183066978;
  _DAT_183066838 = 0xe61b0bf;
  _DAT_183066790 = func_0x0001841b5ce0(_DAT_183066440 + 0x3f000ac600d4ffU ^ 0x73);
  uVar6 = _DAT_183066790 ^ 0xfffff0ff;
  _DAT_183066860 = _DAT_1830665f8 ^ uVar6 ^ 0x1000000ff;
  _DAT_183066a28 = (_DAT_183066a28 ^ uVar6) + 0x1000000ff ^ 0xb39bb9e43e87f080;
  _DAT_183066748 = (_DAT_183066748 * 0x32b1a0d59b7c63bd ^ _DAT_183066a28) + uVar6;
  _DAT_183066800 = _DAT_183066748 ^ _DAT_183066a28;
  _DAT_183066948 = 0xff;
  uVar6 = (~_DAT_183066538 + 0x3e288acf) *
          ((_DAT_183066368 ^ 0x6fdd50c9) + (ulonglong)((uint)_DAT_183066368 & 0x6fdd50c9) * 2);
  uVar6 = (uVar6 | _DAT_183066838) + (uVar6 & _DAT_183066838);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830668f8 = func_0x0001841b5ce0((uVar6 | 0x51f5da07) + (ulonglong)((uint)uVar6 & 0x51f5da07))
  ;
  uVar6 = (_DAT_1830668f8 ^ 0xfffffbee) << 0xe | _DAT_1830668f8 >> 0x32;
  _DAT_183066338 = _DAT_183066538 ^ uVar6 ^ 0x12a27feba;
  _DAT_1830663b0 = (_DAT_1830663b0 ^ uVar6) + 0x12a27feba ^ 0x1f869fd702c59bf5;
  _DAT_1830665e8 = (_DAT_1830665e8 * -0x37797ffff2e3ab83 ^ _DAT_1830663b0) + uVar6;
  _DAT_1830663c0 = _DAT_1830665e8 ^ _DAT_1830663b0;
  _DAT_183066790 = 0x2a27feba;
  uVar6 = (_DAT_183066788 ^ _DAT_1801318e0) + _DAT_1830667c0 + 0x6fdd50c9;
  uVar7 = (_DAT_1830667c0 ^ _UNK_1801318e8) + _DAT_183066788 + 0x3e288ace;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066788 ^ _DAT_1801318e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830667c0 ^ _UNK_1801318e8;
  _DAT_1830663e0 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066788 + 0x3e288ace) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830667c0 + 0x6fdd50c9));
  uVar6 = (_DAT_1830663e0 ^ 0x394d3df2e0ec0000) & 0xffffffffffff8000;
  _DAT_183066468 = (_DAT_183066468 ^ uVar6) + 0xd5d7f922 ^ 0xca1573bc553b452b;
  _DAT_183066868 = (_DAT_183066868 * 0x1594016342e9de05 ^ _DAT_183066468) + uVar6;
  _DAT_1830665e8 = _DAT_183066868 ^ _DAT_183066468;
  _DAT_1830667f8 = 0xd5d7f922;
  uVar6 = (~_DAT_183066ab0 + 0x3e288acf) *
          ((_DAT_183066960 ^ 0x6fdd50c9) + (ulonglong)((uint)_DAT_183066960 & 0x6fdd50c9) * 2);
  uVar6 = (uVar6 | _DAT_1830668d0) + (uVar6 & _DAT_1830668d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830664a0 = func_0x0001841b5ce0((uVar6 | 0x51f5da07) + (ulonglong)((uint)uVar6 & 0x51f5da07))
  ;
  uVar6 = (ulonglong)(~(uint)_DAT_1830664a0 & 0xebff73ec);
  _DAT_1830667d8 = (_DAT_1830667d8 ^ uVar6) + 0x2a2802cc ^ 0x29ed959e0bbf95cc;
  _DAT_183066590 = (_DAT_183066590 * 0x41e50f165eb09cc9 ^ _DAT_1830667d8) + uVar6;
  _DAT_183066420 = _DAT_183066590 ^ _DAT_1830667d8;
  _DAT_183066720 = 0x2a2802cc;
  _DAT_183066728 = func_0x0001841b5ce0(_DAT_183066888 ^ 0xff21000577009c08);
  uVar6 = (_DAT_183066728 ^ 0xd5d7fdba) * -0xafa27aa00116c71 & 0x1fffffffffffff;
  _DAT_183066940 = (_DAT_183066940 ^ uVar6) + 0x12a27feba ^ 0x36744866126ec118;
  _DAT_1830667b8 = (_DAT_1830667b8 * 0x210ceba657560539 ^ _DAT_183066940) + uVar6;
  _DAT_183066a98 = _DAT_1830667b8 ^ _DAT_183066940;
  _DAT_183066378 = 0x2a27feba;
  uVar6 = ((_DAT_183066ac0 ^ 0x842223da) + (ulonglong)((uint)_DAT_183066ac0 & 0x842223da) * 2) *
          -_DAT_183066878;
  uVar6 = (uVar6 | _DAT_183066a48) + (uVar6 & _DAT_183066a48);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830665e8 = func_0x0001841b5ce0((uVar6 | 0x842223da) + (ulonglong)((uint)uVar6 & 0x842223da))
  ;
  uVar6 = (_DAT_1830665e8 ^ 0xff) << 0x12 | _DAT_1830665e8 >> 0x2e;
  _DAT_183066aa8 = _DAT_183066438 ^ uVar6 ^ 0xff;
  _DAT_183066658 = (_DAT_183066658 ^ uVar6) + 0xff ^ 0xdaefefd4c0dfd40d;
  _DAT_1830665c0 = (_DAT_1830665c0 * 0x7c8a1294dc25fc1f ^ _DAT_183066658) + uVar6;
  _DAT_183066ac0 = _DAT_1830665c0 ^ _DAT_183066658;
  _DAT_183066870 = 0xff;
  uVar6 = (~_DAT_183066520 + 0x100000000) *
          ((_DAT_183066330 ^ 0x6fdd50c9) + (ulonglong)((uint)_DAT_183066330 & 0x6fdd50c9) * 2);
  uVar6 = (uVar6 | _DAT_1830665e0) + (uVar6 & _DAT_1830665e0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183066748 = func_0x0001841b5ce0((uVar6 | 0x9022af36) + (ulonglong)((uint)uVar6 & 0x9022af36))
  ;
  _DAT_183066798 = (_DAT_183066798 ^ _DAT_183066748 ^ 0xebff73ec) + 0x14008c13 ^ 0xadf16d1455f3af1b;
  _DAT_1830664f8 =
       (_DAT_1830664f8 * -0x71b74d383a39da39 ^ _DAT_183066798) + (_DAT_183066748 ^ 0xebff73ec);
  _DAT_183066a40 = _DAT_1830664f8 ^ _DAT_183066798;
  _DAT_183066a88 = 0x14008c13;
  uVar6 = (~_DAT_1830666e0 + 0x14008c14) *
          ((_DAT_183066330 ^ 0x6fdd50c9) + (ulonglong)((uint)_DAT_183066330 & 0x6fdd50c9) * 2);
  uVar6 = (uVar6 | _DAT_183066338) + (uVar6 & _DAT_183066338);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183066768 = func_0x0001841b5ce0((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda))
  ;
  uVar6 = (_DAT_183066768 ^ 0xebff73ec) & 0x7fffffffffffffff;
  _DAT_183066560 = _DAT_183066560 ^ uVar6 ^ 0x2f9cfa91c0b311ff;
  _DAT_183066920 = (_DAT_183066920 * -0xd1476a53f901529 ^ _DAT_183066560) + uVar6;
  _DAT_183066910 = _DAT_183066920 ^ _DAT_183066560;
  _DAT_1830663b0 = 0;
  uVar6 = (_DAT_183066888 ^ 0x842223da) + _DAT_1830666b8 + 0x842223da;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066888 ^ 0x842223da;
  uVar7 = ((_DAT_1830666b8 + _DAT_183066888) * 0x2000 | _DAT_1830666b8 + _DAT_183066888 >> 0x33) ^
          _DAT_1830666b8;
  _DAT_183066348 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183066888 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830666b8 + 0x842223da));
  uVar6 = (_DAT_183066348 << 0x18 | _DAT_183066348 >> 0x28) >> 5 | (_DAT_183066348 >> 0x28) << 0x3b;
  _DAT_183066aa8 = _DAT_1830663d8 ^ uVar6 ^ 0xff;
  _DAT_183066918 = (_DAT_183066918 ^ uVar6) + 0xff ^ 0x3f044a1763225703;
  _DAT_183066a10 = (_DAT_183066a10 * 0x77914b0e661bf765 ^ _DAT_183066918) + uVar6;
  _DAT_183066840 = _DAT_183066a10 ^ _DAT_183066918;
  _DAT_183066688 = 0xff;
  uVar6 = (_DAT_183066590 ^ _DAT_1801318f0) + _DAT_1830669c0 + 0x676e3249;
  uVar7 = (_DAT_1830669c0 ^ _UNK_1801318f8) + _DAT_183066590 + 0xe34c116c;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066590 ^ _DAT_1801318f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830669c0 ^ _UNK_1801318f8;
  _DAT_183066750 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066590 + 0xe34c116c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830669c0 + 0x676e3249));
  _DAT_183066658 = _DAT_183066658 ^ _DAT_183066750 & 0x7fffffffff ^ 0xb8f47b97bad296c5;
  _DAT_183066510 =
       (_DAT_183066510 * -0x427bb08bae3c80b3 ^ _DAT_183066658) + (_DAT_183066750 & 0x7fffffffff);
  _DAT_183066a10 = _DAT_183066510 ^ _DAT_183066658;
  _DAT_1830665e0 = 0;
  _DAT_183066630 = func_0x0001841b5ce0(_DAT_1830668c0 + 0x1f007bda0021ff ^ 0x7c);
  _DAT_183066ac8 = _DAT_183066430 ^ _DAT_183066630 ^ 0xff;
  _DAT_183066868 = (_DAT_183066868 ^ _DAT_183066630) + 0xff ^ 0x8c2a196c3f66653d;
  _DAT_1830664a8 = (_DAT_1830664a8 * 0x27f7b619b955f2e9 ^ _DAT_183066868) + _DAT_183066630;
  _DAT_183066838 = _DAT_1830664a8 ^ _DAT_183066868;
  _DAT_183066600 = 0xff;
  uVar6 = (~_DAT_183066880 + 0x100) *
          ((uVar5 ^ 0x84222325 ^ _DAT_183066458) +
          (ulonglong)((uint)_DAT_183066458 & (uint)(uVar5 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | _DAT_1830665c0) + (uVar6 & _DAT_1830665c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183066510 =
       func_0x0001841b5ce0((uVar5 ^ 0x842223da | uVar6) +
                           (ulonglong)((uint)(uVar5 ^ 0x842223da) & (uint)uVar6));
  uVar6 = _DAT_183066510 << 0x28 & 0x7fffffffffffffff | _DAT_183066510 >> 0x18;
  uVar7 = (_DAT_183066510 << 0x28 & 0x7fffffffffffffff | _DAT_183066510 >> 0x18) >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  _DAT_183066398 = uVar5 & 0xff;
  _DAT_1830669c8 = (_DAT_1830669c8 ^ uVar6) + _DAT_183066398 ^ 0x844d997a01716ff9;
  _DAT_1830666a8 = (_DAT_1830666a8 * 0xd81764f866df379 ^ _DAT_1830669c8) + uVar6;
  _DAT_183066518 = _DAT_1830666a8 ^ _DAT_1830669c8;
  uVar7 = _DAT_183066398 << 0x20;
  uVar6 = in_stack_00000050 ^ 0x84222325;
  uVar5 = ((_DAT_1830668c0 ^ uVar6) + (uVar6 & _DAT_1830668c0) * 2) * (uVar7 - _DAT_183066968);
  uVar5 = (uVar5 | _DAT_183066670) + (uVar5 & _DAT_183066670);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1830668d8 = func_0x0001841b5ce0((uVar6 ^ uVar7 | uVar5) + (uVar5 & (uVar6 ^ uVar7)));
  uVar5 = (_DAT_1830668d8 & 0x7fffffffffffffff) >> 1 | _DAT_1830668d8 & 0x7fffffffffffffff;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1830668d8 & 0x7fffffffffffffff) & 0x7ffffffffff;
  _DAT_183066630 = uVar7 | in_stack_00000050;
  _DAT_183066350 = (_DAT_183066350 ^ uVar5) + _DAT_183066630 ^ 0x6b34960be720d56b;
  _DAT_1830669e0 = (_DAT_1830669e0 * 0x7d14e4e32ade547d ^ _DAT_183066350) + uVar5;
  _DAT_183066828 = _DAT_1830669e0 ^ _DAT_183066350;
  iVar3 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar3 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 41b53d1 (image 1841b53d1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841b53d1(void)

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



// ===== continuation @ rva 41b548e (image 1841b548e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841b548e(void)

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



// ===== continuation @ rva 41b501d (image 1841b501d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841b501d(void)

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



// ===== continuation @ rva 41a64d4 (image 1841a64d4) =====

void thunk_FUN_1841a4003(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva 41a5b7c (image 1841a5b7c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a5b7c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack00000000000000ec;
  
  uStack00000000000000ec = 0x530045;
  (**(code **)(*unaff_RSI + 0x518))();
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



// ===== continuation @ rva 41b503b (image 1841b503b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841b503b(void)

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



// ===== continuation @ rva 4194700 (image 184194700) =====

void FUN_184194700(void)

{
  return;
}



// ===== continuation @ rva 4185a7b (image 184185a7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184185a7b(void)

{
  FUN_190ddce00();
  (*_DAT_1801291c8)();
  return;
}



// ===== continuation @ rva 419476c (image 18419476c) =====

void FUN_18419476c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 418bca9 (image 18418bca9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18418bca9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 418dd76 (image 18418dd76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418dd76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180128ca8)();
  return;
}



// ===== continuation @ rva 418dab6 (image 18418dab6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418dab6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18012a808)();
  return;
}



// ===== continuation @ rva 4193bf0 (image 184193bf0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184193bf0(void)

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



// ===== continuation @ rva 418d5a7 (image 18418d5a7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18418d5a7(void)

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



// ===== continuation @ rva 41943e6 (image 1841943e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841943e6(void)

{
  (*_DAT_18012ae88)();
  return;
}



// ===== continuation @ rva 418db27 (image 18418db27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418db27(void)

{
  (*_DAT_18012adb8)();
  return;
}



// ===== continuation @ rva 418d69f (image 18418d69f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418d69f(void)

{
  (*_DAT_18012adb8)();
  return;
}



// ===== continuation @ rva 41973f4 (image 1841973f4) =====

void FUN_1841973f4(void)

{
  return;
}



// ===== continuation @ rva 4197255 (image 184197255) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184197255(void)

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



// ===== continuation @ rva 419828e (image 18419828e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18419828e(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000082;
  
  uStack0000000000000082 = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 4198239 (image 184198239) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184198239(void)

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



// ===== continuation @ rva 419fc15 (image 18419fc15) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18419fc15(void)

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



// ===== continuation @ rva 41985bc (image 1841985bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841985bc(void)

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



// ===== continuation @ rva 419be58 (image 18419be58) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18419be58(void)

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



// ===== continuation @ rva 419bc16 (image 18419bc16) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18419bc16(void)

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



// ===== continuation @ rva 419946b (image 18419946b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18419bf0f(void)

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



// ===== continuation @ rva 4198423 (image 184198423) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_184198423(void)

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



// ===== continuation @ rva 419aa5a (image 18419aa5a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18419bf0f(void)

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



// ===== continuation @ rva 41a0112 (image 1841a0112) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a0112(void)

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



// ===== continuation @ rva 41a00be (image 1841a00be) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a00be(void)

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



// ===== continuation @ rva 41a0f85 (image 1841a0f85) =====

void FUN_1841a0f85(void)

{
  return;
}



// ===== continuation @ rva 41a0536 (image 1841a0536) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a0536(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18012f3e8)();
  return;
}



// ===== continuation @ rva 41a0f51 (image 1841a0f51) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a0f51(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18012f188)();
  return;
}



// ===== continuation @ rva 41a0efd (image 1841a0efd) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a0efd(void)

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



// ===== continuation @ rva 41a03dd (image 1841a03dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a03dd(void)

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



// ===== continuation @ rva 41a09fd (image 1841a09fd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a09fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_18012f2d8)();
  return;
}



// ===== continuation @ rva 41a07a3 (image 1841a07a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a07a3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 41a036c (image 1841a036c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a036c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18012f2b8)();
  return;
}



// ===== continuation @ rva 41a0f94 (image 1841a0f94) =====

void FUN_1841a0f94(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 41a070f (image 1841a070f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a070f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 41a30a6 (image 1841a30a6) =====

void FUN_1841a30a6(void)

{
  return;
}



// ===== continuation @ rva 41a110c (image 1841a110c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a110c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18012f7f8)();
  return;
}



// ===== continuation @ rva 41a1de6 (image 1841a1de6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a1de6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18012fe78)();
  return;
}



// ===== continuation @ rva 41a16ce (image 1841a16ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a16ce(void)

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



// ===== continuation @ rva 41a2f7b (image 1841a2f7b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a2f7b(void)

{
  FUN_190ddfc90();
  (*_DAT_18012f878)();
  return;
}



// ===== continuation @ rva 41a3c4a (image 1841a3c4a) =====

void FUN_1841a3c4a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 41a2f5a (image 1841a2f5a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a2f5a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 41a3ad3 (image 1841a3ad3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a3ad3(void)

{
  (*_DAT_180130058)();
  return;
}



// ===== continuation @ rva 41a22d9 (image 1841a22d9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a22d9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1801302c8)();
  return;
}



// ===== continuation @ rva 41a2927 (image 1841a2927) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a2927(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 41a1caf (image 1841a1caf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a1caf(void)

{
  (*_DAT_180130328)();
  return;
}



