// ===== continuation @ rva d21dd39 (image 18d21dd39) =====

void FUN_18d21dd39(void)

{
  return;
}



// ===== continuation @ rva d20b69b (image 18d20b69b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d20b6f1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d20b69b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d20e76c (image 18d20e76c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d20e76c(void)

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



// ===== continuation @ rva d20dea5 (image 18d20dea5) =====

void thunk_FUN_18d20b823(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva d217258 (image 18d217258) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d217258(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong in_stack_00000058;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar2 = (ulonglong)param_1;
  uVar3 = (~_DAT_18334f760 + 0x179356dc) *
          ((_DAT_18334f790 ^ 0xa49409b7) + (ulonglong)((uint)_DAT_18334f790 & 0xa49409b7) * 2);
  uVar3 = (uVar3 | _DAT_18334f860) + (uVar3 & _DAT_18334f860);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f880 = func_0x00018d21df20((uVar3 | 0xb3075f6c) + (ulonglong)((uint)uVar3 & 0xb3075f6c))
  ;
  uVar4 = _DAT_18334f880 ^ 0x3033186bdf976e6;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4;
  _DAT_18334f818 = (_DAT_18334f818 ^ uVar4) + 0x37b77edb ^ 0xcea49e29ed6a27b4;
  _DAT_18334f790 = (_DAT_18334f790 * 0x1b34b8ad92cfb2dd ^ _DAT_18334f818) + uVar4;
  _DAT_18334f7c8 = _DAT_18334f790 ^ _DAT_18334f818;
  _DAT_18334f810 = 0x37b77edb;
  uVar3 = (~_DAT_18334f878 + 0x58569a2a) *
          ((_DAT_18334f770 ^ 0xf9ce77f) + (ulonglong)((uint)_DAT_18334f770 & 0xf9ce77f) * 2);
  uVar3 = (uVar3 | _DAT_18334f840) + (uVar3 & _DAT_18334f840);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f898 = func_0x00018d21df20((uVar3 | 0x57ca7d56) + (ulonglong)((uint)uVar3 & 0x57ca7d56))
  ;
  _DAT_18334f810 = (_DAT_18334f810 ^ _DAT_18334f898) + 0xd3e85e73 ^ 0xc5773d278c4fd9e4;
  _DAT_18334f830 = (_DAT_18334f830 * -0x1bef0d45c9c1cf6b ^ _DAT_18334f810) + _DAT_18334f898;
  _DAT_18334f868 = _DAT_18334f830 ^ _DAT_18334f810;
  _DAT_18334f7b0 = _DAT_18334f750 ^ 0xd3e85e73;
  _DAT_18334f8e0 = 0xd3e85e73;
  uVar3 = (_DAT_18334f870 ^ _DAT_1821844d0) + _DAT_18334f830 + 0x84222325;
  uVar4 = (_DAT_18334f830 ^ _UNK_1821844d8) + _DAT_18334f870 + 0xf29564b4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334f870 ^ _DAT_1821844d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18334f830 ^ _UNK_1821844d8;
  _DAT_18334f880 =
       func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18334f870 + 0xf29564b4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334f830 + 0x84222325));
  uVar3 = _DAT_18334f880 >> 1 | _DAT_18334f880;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_18334f880;
  _DAT_18334f708 = (_DAT_18334f708 ^ uVar3) - 0xf29564b4 ^ 0xf116afbf47b75a9f;
  _DAT_18334f7f8 = (_DAT_18334f7f8 * 0x1ef1d159205a5261 ^ _DAT_18334f708) + uVar3;
  _DAT_18334f800 = _DAT_18334f7f8 ^ _DAT_18334f708;
  _DAT_18334f810 = 0xd6a9b4c;
  uVar3 = (~_DAT_18334f8f0 + 0xd6a9b4d) *
          ((_DAT_18334f718 ^ 0x76b74696) + (ulonglong)((uint)_DAT_18334f718 & 0x76b74696) * 2);
  uVar3 = (uVar3 | _DAT_18334f788) + (uVar3 & _DAT_18334f788);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f800 = func_0x00018d21df20((uVar3 | 0x7bddddda) + (ulonglong)((uint)uVar3 & 0x7bddddda))
  ;
  _DAT_18334f788 = (_DAT_18334f788 ^ _DAT_18334f800 ^ 0xd6a9b4c) + 0x1000000ff ^ 0x2618caa01f48d356;
  _DAT_18334f7e8 =
       (_DAT_18334f7e8 * -0x7d6d2b2bfe14dbf9 ^ _DAT_18334f788) + (_DAT_18334f800 ^ 0xd6a9b4c);
  _DAT_18334f8e0 = _DAT_18334f7e8 ^ _DAT_18334f788;
  _DAT_18334f770 = 0xff;
  uVar3 = (~_DAT_18334f850 + 0xa5d6b8e9) *
          ((_DAT_18334f850 ^ 0x84222325) + (ulonglong)((uint)_DAT_18334f850 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_18334f788) + (uVar3 & _DAT_18334f788);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018d21df20((uVar3 | 0x21f49bcd) + (ulonglong)((uint)uVar3 & 0x21f49bcd));
  _DAT_18334f7a0 = (_DAT_18334f7a0 ^ uVar3) - 0xa5d6b8e8 ^ 0x84d7429263e07147;
  _DAT_18334f838 = (_DAT_18334f838 * 0x58529d6ea4727035 ^ _DAT_18334f7a0) + uVar3;
  _DAT_18334f850 = _DAT_18334f838 ^ _DAT_18334f7a0;
  _DAT_18334f718 = 0x5a294718;
  uVar3 = (~_DAT_18334f8a0 + 0xa5d6b8e9) *
          ((_DAT_18334f7f0 ^ 0x842223da) + (ulonglong)((uint)_DAT_18334f7f0 & 0x842223da) * 2);
  uVar3 = (uVar3 | _DAT_18334f830) + (uVar3 & _DAT_18334f830);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f7c8 = func_0x00018d21df20((uVar3 | 0x21f49b32) + (ulonglong)((uint)uVar3 & 0x21f49b32))
  ;
  uVar3 = _DAT_18334f7c8 << 8 | _DAT_18334f7c8 >> 0x38;
  _DAT_18334f7d0 = _DAT_18334f780 ^ uVar3;
  _DAT_18334f858 = _DAT_18334f7d0 ^ 0xa5d6b9e7;
  _DAT_18334f828 = (_DAT_18334f828 ^ uVar3) + 0xa5d6b9e7 ^ 0x754f13edd5fd81d0;
  _DAT_18334f840 = (_DAT_18334f840 * -0x704456555f9af397 ^ _DAT_18334f828) + uVar3;
  _DAT_18334f710 = 0xa5d6b9e7;
  uVar3 = (~_DAT_18334f898 + 0x5a294719) *
          ((_DAT_18334f7f0 ^ 0x21f49ac2) + (ulonglong)((uint)_DAT_18334f7f0 & 0x21f49ac2) * 2);
  uVar3 = (uVar3 | _DAT_18334f888) + (uVar3 & _DAT_18334f888);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f780 = func_0x00018d21df20((uVar3 | 0x7bddddda) + (ulonglong)((uint)uVar3 & 0x7bddddda))
  ;
  uVar3 = _DAT_18334f780 ^ 0x3a683acd15af7ea8;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3;
  uVar3 = (uVar4 << 0x2f | uVar3 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2;
  _DAT_18334f7d8 = _DAT_18334f8d0 ^ uVar3 ^ 0x1000000ff;
  _DAT_18334f8a0 = (_DAT_18334f8a0 ^ uVar3) + 0x1000000ff ^ 0xfbd6d41e6aa71ef6;
  _DAT_18334f808 = (_DAT_18334f808 * 0x23f88dd7ce328911 ^ _DAT_18334f8a0) + uVar3;
  _DAT_18334f768 = _DAT_18334f808 ^ _DAT_18334f8a0;
  _DAT_18334f8c0 = 0xff;
  _DAT_18334f728 = func_0x00018d21df20(_DAT_18334f840 + 0xfffe003f29ff9dff ^ 7);
  uVar3 = _DAT_18334f728 ^ 0xff;
  _DAT_18334f818 = _DAT_18334f8a8 ^ uVar3 ^ 0x44842233;
  _DAT_18334f8d0 = (_DAT_18334f8d0 ^ uVar3) + 0x44842233 ^ 0xe47275afe1797af0;
  _DAT_18334f790 = (_DAT_18334f790 * -0x5156f7534f37982b ^ _DAT_18334f8d0) + uVar3;
  _DAT_18334f768 = _DAT_18334f790 ^ _DAT_18334f8d0;
  _DAT_18334f820 = 0x44842233;
  _DAT_18334f868 = func_0x00018d21df20(_DAT_18334f8e0 ^ 0xffdaffaa26004abd);
  uVar3 = ((_DAT_18334f868 ^ 0xfffffeff) << 0x19 | _DAT_18334f868 >> 0x27) * -0x79a41effe5f6345f;
  _DAT_18334f8b0 = _DAT_18334f828 ^ uVar3 ^ 0x1000000ff;
  _DAT_18334f7c8 = (_DAT_18334f738 ^ uVar3) + 0x1000000ff ^ 0x5a6ec5e9030606a6;
  _DAT_18334f738 = (_DAT_18334f738 * -0x326f00eb7a8bb03b ^ _DAT_18334f7c8) + uVar3;
  _DAT_18334f7c8 = _DAT_18334f738 ^ _DAT_18334f7c8;
  _DAT_18334f898 = 0xff;
  uVar3 = (_DAT_18334f8d0 ^ _DAT_1821844e0) + _DAT_18334f780 + 0xb3955dfe;
  uVar4 = (_DAT_18334f780 ^ _UNK_1821844e8) + _DAT_18334f8d0 + 0xd3e85e73;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334f8d0 ^ _DAT_1821844e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18334f780 ^ _UNK_1821844e8;
  _DAT_18334f750 =
       func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18334f8d0 + 0xd3e85e73) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334f780 + 0xb3955dfe));
  uVar3 = (_DAT_18334f750 ^ 0x37b77edb) << 0x16 | _DAT_18334f750 >> 0x2a;
  _DAT_18334f898 = (_DAT_18334f898 ^ uVar3) + 0xe45f20a8 ^ 0x6d1b0568d7c1af37;
  _DAT_18334f890 = (_DAT_18334f890 * 0x7b9131c33529002f ^ _DAT_18334f898) + uVar3;
  _DAT_18334f820 = _DAT_18334f890 ^ _DAT_18334f898;
  _DAT_18334f8b0 = 0xe45f20a8;
  uVar3 = (~_DAT_18334f778 + 0xd3e85e74) *
          ((_DAT_18334f7a0 ^ 0xb3955dfe) + (ulonglong)((uint)_DAT_18334f7a0 & 0xb3955dfe) * 2);
  uVar3 = (uVar3 | _DAT_18334f790) + (uVar3 & _DAT_18334f790);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f870 = func_0x00018d21df20((uVar3 | 0x607d038d) + (ulonglong)((uint)uVar3 & 0x607d038d))
  ;
  _DAT_18334f790 = (_DAT_18334f790 ^ _DAT_18334f870) + 0x13a05e53 ^ 0xec1bee1d5666c95e;
  _DAT_18334f7b0 = (_DAT_18334f7b0 * -0x94b6b9ffd69a15d ^ _DAT_18334f790) + _DAT_18334f870;
  _DAT_18334f710 = _DAT_18334f7b0 ^ _DAT_18334f790;
  _DAT_18334f778 = 0x13a05e53;
  _DAT_18334f780 = func_0x00018d21df20(_DAT_18334f7e8 ^ 0x62ffb8e7001ae7);
  uVar3 = (_DAT_18334f780 ^ 0x23043e0bb3aa8cf0) << 7 | (_DAT_18334f780 ^ 0x23043e0bb3aa8cf0) >> 0x39
  ;
  _DAT_18334f7e0 = _DAT_18334f7b0 ^ uVar3 ^ 0x10b9fdd4e;
  _DAT_18334f720 = (_DAT_18334f7b0 ^ uVar3) + 0x10b9fdd4e ^ 0xd632be3a0d10de86;
  _DAT_18334f7f0 = (_DAT_18334f7f0 * 0x68113079fbbed3c7 ^ _DAT_18334f720) + uVar3;
  _DAT_18334f720 = _DAT_18334f7f0 ^ _DAT_18334f720;
  _DAT_18334f7b0 = 0xb9fdd4e;
  uVar3 = (_DAT_18334f828 ^ _DAT_1821844f0) + _DAT_18334f7a8 + 0xb3955dfe;
  uVar4 = (_DAT_18334f7a8 ^ _UNK_1821844f8) + _DAT_18334f828 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334f828 ^ _DAT_1821844f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18334f7a8 ^ _UNK_1821844f8;
  _DAT_18334f830 =
       func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18334f828 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334f7a8 + 0xb3955dfe));
  _DAT_18334f818 =
       (_DAT_18334f818 ^ _DAT_18334f830 * -0x60eecea3b1c3ad7) + 0xc8488124 ^ 0xcc790614f3e89820;
  _DAT_18334f770 =
       (_DAT_18334f770 * 0x66d6a99d17be1d3 ^ _DAT_18334f818) + _DAT_18334f830 * -0x60eecea3b1c3ad7;
  _DAT_18334f760 = _DAT_18334f770 ^ _DAT_18334f818;
  _DAT_18334f790 = 0xc8488124;
  _DAT_18334f840 = func_0x00018d21df20(_DAT_18334f820 + 0xffabffbb35ffcaff ^ 0xe6);
  uVar3 = ((_DAT_18334f840 << 0x34 | _DAT_18334f840 >> 0xc) >> 0x26 |
          (_DAT_18334f840 >> 0xc) << 0x1a) ^ 0xc8488124;
  _DAT_18334f828 = _DAT_18334f828 ^ uVar3 ^ 0xdb1e33e6af4c5aed;
  _DAT_18334f770 = (_DAT_18334f770 * -0xf503f706e44a55 ^ _DAT_18334f828) + uVar3;
  _DAT_18334f700 = _DAT_18334f770 ^ _DAT_18334f828;
  _DAT_18334f7a8 = 0;
  _DAT_18334f850 = func_0x00018d21df20(_DAT_18334f810 + 0xffe2ff8339ffe1ff ^ 0xec);
  uVar3 = _DAT_18334f850 * -0x661627ae1c370e15;
  _DAT_18334f7e0 = _DAT_18334f7e8 ^ uVar3 ^ 0xff;
  _DAT_18334f7a8 = (_DAT_18334f7a8 ^ uVar3) + 0xff ^ 0x2e6e6ad15977b47d;
  _DAT_18334f818 = (_DAT_18334f818 * 0x14c9d62d3484d15d ^ _DAT_18334f7a8) + uVar3;
  _DAT_18334f8b8 = _DAT_18334f818 ^ _DAT_18334f7a8;
  _DAT_18334f778 = 0xff;
  uVar3 = (~_DAT_18334f7d8 + 0x20b62a93) *
          ((_DAT_18334f710 ^ 0xa49409b7) + (ulonglong)((uint)_DAT_18334f710 & 0xa49409b7) * 2);
  uVar3 = (uVar3 | _DAT_18334f8c8) + (uVar3 & _DAT_18334f8c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f8d0 = func_0x00018d21df20((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_18334f7e0 = _DAT_18334f7e0 ^ _DAT_18334f8d0 * 0x205344f501e27edd ^ 0xf8a34fa8f9040eba;
  _DAT_18334f720 =
       (_DAT_18334f720 * 0x4fc9fa61d7848749 ^ _DAT_18334f7e0) + _DAT_18334f8d0 * 0x205344f501e27edd;
  _DAT_18334f788 = _DAT_18334f720 ^ _DAT_18334f7e0;
  _DAT_18334f7a0 = 0;
  uVar3 = ((_DAT_18334f8c8 ^ 0x842223da) + (ulonglong)((uint)_DAT_18334f8c8 & 0x842223da) * 2) *
          -_DAT_18334f770;
  uVar3 = (uVar3 | _DAT_18334f7c8) + (uVar3 & _DAT_18334f7c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f7d8 = func_0x00018d21df20((uVar3 | 0x842223da) + (ulonglong)((uint)uVar3 & 0x842223da))
  ;
  uVar3 = (_DAT_18334f7d8 ^ 0xfc) & 0xfffffffffffffffc;
  _DAT_18334f778 = _DAT_18334f8c8 ^ uVar3 ^ 0xff;
  _DAT_18334f898 = (_DAT_18334f898 ^ uVar3) + 0xff ^ 0x7cc4de16f6f6a2dd;
  _DAT_18334f770 = (_DAT_18334f770 * -0x34fead9eac7f6109 ^ _DAT_18334f898) + uVar3;
  _DAT_18334f828 = _DAT_18334f770 ^ _DAT_18334f898;
  _DAT_18334f8f0 = 0xff;
  uVar3 = (~_DAT_18334f7e0 + 0x100) *
          ((uVar2 ^ 0x84222325 ^ _DAT_18334f850) +
          (ulonglong)((uint)_DAT_18334f850 & (uint)(uVar2 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | _DAT_18334f8f8) + (uVar3 & _DAT_18334f8f8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f7f0 =
       func_0x00018d21df20((uVar2 ^ 0x842223da | uVar3) +
                           (ulonglong)((uint)(uVar2 ^ 0x842223da) & (uint)uVar3));
  _DAT_18334f790 = uVar2 & 0xff;
  _DAT_18334f8c8 =
       (_DAT_18334f8c8 ^ _DAT_18334f748 & 0x3fffffffffff) + _DAT_18334f790 ^ 0x557c232ec920d1ab;
  _DAT_18334f7a0 =
       (_DAT_18334f7a0 * -0x62ded66301d7243 ^ _DAT_18334f8c8) + (_DAT_18334f748 & 0x3fffffffffff);
  _DAT_18334f7f8 = _DAT_18334f7a0 ^ _DAT_18334f8c8;
  uVar3 = _DAT_18334f790 << 0x28;
  uVar2 = in_stack_00000058 ^ 0x84222325 ^ _DAT_18334f8e0;
  lVar5 = (in_stack_00000058 ^ 0x84222325) + _DAT_18334f760;
  uVar4 = uVar2 + lVar5;
  uVar6 = (uVar3 ^ _DAT_18334f760) + _DAT_18334f8e0 + uVar3;
  uVar2 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar2;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3 ^ _DAT_18334f760;
  uVar2 = func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18334f8e0 + uVar3) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) - lVar5);
  _DAT_18334f868 = in_stack_00000058 | uVar3;
  in_stack_00000058 = ~(uVar3 ^ uVar2 ^ _DAT_18334f868) & in_stack_00000058;
  _DAT_18334f820 = (uVar2 ^ in_stack_00000058) + _DAT_18334f868 ^ 0x78928a78ba5399cc;
  _DAT_18334f8e0 = (_DAT_18334f8e0 * -0x5546352cd3e5d1fb ^ _DAT_18334f820) + in_stack_00000058;
  _DAT_18334f7a0 = _DAT_18334f8e0 ^ _DAT_18334f820;
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



// ===== continuation @ rva d20d4ff (image 18d20d4ff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d20d569 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d20d4ff(void)

{
  longlong *unaff_RSI;
  undefined4 uStack00000000000000ec;
  
  uStack00000000000000ec = 0x530045;
  (**(code **)(*unaff_RSI + 0x518))();
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d20de37 (image 18d20de37) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d20de37(void)

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



// ===== continuation @ rva d20d718 (image 18d20d718) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d20d718(void)

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



// ===== continuation @ rva d20dba9 (image 18d20dba9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d20dbec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d20dba9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d21bc24 (image 18d21bc24) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d21bc24(void)

{
  char cVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000038;
  longlong in_stack_00000040;
  ulonglong in_stack_00000058;
  int in_stack_00000068;
  
  lVar2 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar2 + in_stack_00000068);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar2,2);
  uVar3 = (_DAT_18334f7e8 ^ _DAT_1821845e0) + _DAT_18334f818 + 0xb8bdb4ef;
  uVar4 = (_DAT_18334f818 ^ _UNK_1821845e8) + _DAT_18334f7e8 + 0xef014b93;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334f7e8 ^ _DAT_1821845e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18334f818 ^ _UNK_1821845e8;
  _DAT_18334f700 =
       func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18334f7e8 + 0xef014b93) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334f818 + 0xb8bdb4ef));
  _DAT_18334f7a8 = (_DAT_18334f7a8 ^ _DAT_18334f700 ^ 0x3c9f97ca) + 0xff9fdfdb ^ 0x2798940c4e97ce77;
  _DAT_18334f880 =
       (_DAT_18334f880 * 0x7f3e1a815c535567 ^ _DAT_18334f7a8) + (_DAT_18334f700 ^ 0x3c9f97ca);
  _DAT_18334f870 = _DAT_18334f880 ^ _DAT_18334f7a8;
  _DAT_18334f780 = 0xff9fdfdb;
  _DAT_18334f760 = func_0x00018d21df20(_DAT_18334f870 + 0x5affbefeff5eff ^ 0x65);
  uVar3 = (((_DAT_18334f760 ^ 0xffeb59ac) & 0x3ffffffff) << 0xd | _DAT_18334f760 >> 0x33) ^
          0x7b6949a8;
  _DAT_18334f708 = (_DAT_18334f708 ^ uVar3) + 0xc5c35824 ^ 0xdabfe0a5b9aa7e0a;
  _DAT_18334f8a8 = (_DAT_18334f8a8 * 0x293cccaf095aac1d ^ _DAT_18334f708) + uVar3;
  _DAT_18334f810 = _DAT_18334f8a8 ^ _DAT_18334f708;
  _DAT_18334f700 = 0xc5c35824;
  uVar3 = (~_DAT_18334f7e8 + 0xdb6cb891) *
          ((_DAT_18334f7b0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18334f7b0 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_18334f8a8) + (uVar3 & _DAT_18334f8a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f728 = func_0x00018d21df20((uVar3 | 0x5f4e9bb5) + (ulonglong)((uint)uVar3 & 0x5f4e9bb5))
  ;
  uVar3 = ((_DAT_18334f728 ^ 0xdb6cb890) & 0x1ffff) << 0x2e | (_DAT_18334f728 ^ 0xdb6cb890) >> 0x12;
  _DAT_18334f798 = (_DAT_18334f798 ^ uVar3) - 0xdb6cb890 ^ 0x99704238c917b360;
  _DAT_18334f7b0 = (_DAT_18334f7b0 * -0xe61567150229b85 ^ _DAT_18334f798) + uVar3;
  _DAT_18334f820 = 0x24934770;
  uVar3 = (_DAT_18334f898 ^ _DAT_1821845f0) + _DAT_18334f738 + 0x5f4e9aaa;
  uVar4 = (_DAT_18334f738 ^ _UNK_1821845f8) + _DAT_18334f898 + 0x24934770;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334f898 ^ _DAT_1821845f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18334f738 ^ _UNK_1821845f8;
  _DAT_18334f7d8 =
       func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18334f898 + 0x24934770) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334f738 + 0x5f4e9aaa));
  uVar3 = (_DAT_18334f7d8 ^ 0xffffffff) & 0x7fffffffffffffff;
  _DAT_18334f728 = _DAT_18334f760 ^ uVar3 ^ 0x1000000ff;
  _DAT_18334f7c0 = (_DAT_18334f7c0 ^ uVar3) + 0x1000000ff ^ 0x4855aea7f8f8417;
  _DAT_18334f828 = (_DAT_18334f828 * 0x678823cf260d0ff7 ^ _DAT_18334f7c0) + uVar3;
  _DAT_18334f7b0 = _DAT_18334f828 ^ _DAT_18334f7c0;
  _DAT_18334f750 = 0xff;
  uVar3 = (_DAT_18334f7d8 ^ _DAT_182184600) + _DAT_18334f728 + 0x84222325;
  uVar4 = (_DAT_18334f728 ^ _UNK_182184608) + _DAT_18334f7d8 + 0xc51c530;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334f7d8 ^ _DAT_182184600;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18334f728 ^ _UNK_182184608;
  _DAT_18334f710 =
       func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18334f7d8 + 0xc51c530) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334f728 + 0x84222325));
  uVar3 = _DAT_18334f710 - (_DAT_18334f710 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_18334f710;
  _DAT_18334f8d0 = (_DAT_18334f8d0 ^ uVar3) - 0xc51c530 ^ 0x3640b2d8b1b5fb0c;
  _DAT_18334f7f0 = (_DAT_18334f7f0 * -0x4007627f6c17c981 ^ _DAT_18334f8d0) + uVar3;
  _DAT_18334f8f8 = _DAT_18334f7f0 ^ _DAT_18334f8d0;
  _DAT_18334f8c8 = 0xf3ae3ad0;
  uVar3 = (~_DAT_18334f7a0 + 0xc51c531) *
          ((_DAT_18334f8f0 ^ 0x842223da) + (ulonglong)((uint)_DAT_18334f8f0 & 0x842223da) * 2);
  uVar3 = (uVar3 | _DAT_18334f880) + (uVar3 & _DAT_18334f880);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f808 = func_0x00018d21df20((uVar3 | 0x8873e6ea) + (ulonglong)((uint)uVar3 & 0x8873e6ea))
  ;
  uVar3 = (_DAT_18334f808 ^ 0xc51c5ff) & 0x7fffffffffffff ^ 0xc51c530;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  _DAT_18334f830 = _DAT_18334f8b8 ^ uVar3 ^ 0xc51c62f;
  _DAT_18334f8c0 = (_DAT_18334f8c0 ^ uVar3) + 0xc51c62f ^ 0x4ab9718814bec1cf;
  _DAT_18334f728 = (_DAT_18334f728 * -0x39eb287671844a43 ^ _DAT_18334f8c0) + uVar3;
  _DAT_18334f7a8 = _DAT_18334f728 ^ _DAT_18334f8c0;
  _DAT_18334f840 = 0xc51c62f;
  uVar3 = func_0x00018d21df20(_DAT_18334f888 ^ 0xff5eff9439ff3a5c);
  uVar3 = (uVar3 ^ 0xf3ae3ad0) << 1 | (ulonglong)((longlong)(uVar3 ^ 0xf3ae3ad0) < 0);
  _DAT_18334f840 = _DAT_18334f720 ^ uVar3 ^ 0x1000000ff;
  _DAT_18334f768 = (_DAT_18334f768 ^ uVar3) + 0x1000000ff ^ 0x161d1338b0ff12fb;
  _DAT_18334f800 = (_DAT_18334f800 * -0x5c0e732c0ce48973 ^ _DAT_18334f768) + uVar3;
  _DAT_18334f788 = _DAT_18334f800 ^ _DAT_18334f768;
  _DAT_18334f818 = 0xff;
  _DAT_18334f778 = func_0x00018d21df20(_DAT_18334f770 + 0x9affab630078ff ^ 0x76);
  _DAT_18334f8d0 =
       (_DAT_18334f8d0 ^ _DAT_18334f778 & 0x7fffffffffffffff) - 0x71ab8e48 ^ 0x1942013b3b8f8903;
  _DAT_18334f700 =
       (_DAT_18334f700 * -0x3df6c78fd65a5c47 ^ _DAT_18334f8d0) +
       (_DAT_18334f778 & 0x7fffffffffffffff);
  _DAT_18334f8f0 = _DAT_18334f700 ^ _DAT_18334f8d0;
  _DAT_18334f8a0 = 0x8e5471b8;
  uVar3 = (_DAT_18334f728 ^ _DAT_182184610) + _DAT_18334f738 + 0x842223da;
  uVar4 = (_DAT_18334f738 ^ _UNK_182184618) + _DAT_18334f728 + 0x71ab8e48;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18334f728 ^ _DAT_182184610;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18334f738 ^ _UNK_182184618;
  _DAT_18334f868 =
       func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18334f728 + 0x71ab8e48) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334f738 + 0x842223da));
  uVar3 = _DAT_18334f868 & 0xffffffffe0000000;
  _DAT_18334f770 = _DAT_18334f758 ^ uVar3 ^ 0x71ab8f47;
  _DAT_18334f758 = (_DAT_18334f7e8 ^ uVar3) + 0x71ab8f47 ^ 0x992cd8034deadacf;
  _DAT_18334f7e8 = (_DAT_18334f7e8 * 0x47037abfd756d6d7 ^ _DAT_18334f758) + uVar3;
  _DAT_18334f758 = _DAT_18334f7e8 ^ _DAT_18334f758;
  _DAT_18334f838 = 0x71ab8f47;
  uVar3 = (~_DAT_18334f8a0 + 0x8e5471b9) *
          ((_DAT_18334f808 ^ 0xf589ac62) + (ulonglong)((uint)_DAT_18334f808 & 0xf589ac62) * 2);
  uVar3 = (uVar3 | _DAT_18334f718) + (uVar3 & _DAT_18334f718);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f750 = func_0x00018d21df20((uVar3 | 0x7bddddda) + (ulonglong)((uint)uVar3 & 0x7bddddda))
  ;
  uVar3 = _DAT_18334f750 ^ 0x71ab8f47;
  _DAT_18334f868 = _DAT_18334f840 ^ uVar3 ^ 0x1000000ff;
  _DAT_18334f700 = (_DAT_18334f700 ^ uVar3) + 0x1000000ff ^ 0x92cc775607658510;
  _DAT_18334f788 = (_DAT_18334f788 * 0x8ed966d55fb59e5 ^ _DAT_18334f700) + uVar3;
  _DAT_18334f860 = _DAT_18334f788 ^ _DAT_18334f700;
  _DAT_18334f760 = 0xff;
  uVar3 = (~_DAT_18334f8b0 + 0xc5c35825) *
          ((_DAT_18334f7c8 ^ 0x7bbdfcfe) + (ulonglong)((uint)_DAT_18334f7c8 & 0x7bbdfcfe) * 2);
  uVar3 = (uVar3 | _DAT_18334f818) + (uVar3 & _DAT_18334f818);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f8c8 = func_0x00018d21df20((uVar3 | 0xbe7ea4da) + (ulonglong)((uint)uVar3 & 0xbe7ea4da))
  ;
  _DAT_18334f718 = _DAT_18334f860 ^ _DAT_18334f8c8 ^ 0x1c56337ff;
  _DAT_18334f868 = (_DAT_18334f868 ^ _DAT_18334f8c8) + 0x1c56337ff ^ 0x25f75e3a5a310fdb;
  _DAT_18334f858 = (_DAT_18334f858 * -0x1bf016ba51fff29 ^ _DAT_18334f868) + _DAT_18334f8c8;
  _DAT_18334f7e8 = _DAT_18334f858 ^ _DAT_18334f868;
  _DAT_18334f768 = 0xc56337ff;
  uVar3 = (~_DAT_18334f788 + 0xc5c35825) *
          ((_DAT_18334f860 ^ _DAT_18334f8c8 ^ 0x1bedecb01) +
          (ulonglong)((uint)_DAT_18334f718 & 0x7bbdfcfe) * 2);
  uVar3 = (uVar3 | _DAT_18334f7d0) + (uVar3 & _DAT_18334f7d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f7b0 = func_0x00018d21df20((uVar3 | 0xbe7ea4da) + (ulonglong)((uint)uVar3 & 0xbe7ea4da))
  ;
  _DAT_18334f7c8 = (_DAT_18334f7c8 ^ _DAT_18334f7b0) + 0x3a5c87ff ^ 0x9133f29f01ebb91a;
  _DAT_18334f870 = (_DAT_18334f870 * -0x67c4e4706105936b ^ _DAT_18334f7c8) + _DAT_18334f7b0;
  _DAT_18334f858 = _DAT_18334f870 ^ _DAT_18334f7c8;
  _DAT_18334f818 = 0x3a5c87ff;
  _DAT_18334f8c0 = func_0x00018d21df20(_DAT_18334f8e0 + 0xffebffccc9ffd7ffU ^ 0xe6);
  uVar3 = ((_DAT_18334f8c0 ^ 0x3a5c87ff) << 3 | _DAT_18334f8c0 >> 0x3d) << 0xf |
          (_DAT_18334f8c0 & 0x1fffffffffffffff) >> 0x2e;
  _DAT_18334f7f0 = _DAT_18334f800 ^ uVar3 ^ 0xc56337ff;
  _DAT_18334f868 = (_DAT_18334f808 ^ uVar3) + 0xc56337ff ^ 0x715bfe1a7db72041;
  _DAT_18334f700 = (_DAT_18334f700 * -0x33370ba94e75f531 ^ _DAT_18334f868) + uVar3;
  _DAT_18334f868 = _DAT_18334f700 ^ _DAT_18334f868;
  _DAT_18334f808 = 0xc56337ff;
  uVar3 = (~_DAT_18334f720 + 0xc5633800) *
          ((_DAT_18334f7f8 ^ 0x414114da) + (ulonglong)((uint)_DAT_18334f7f8 & 0x414114da) * 2);
  uVar3 = (uVar3 | _DAT_18334f718) + (uVar3 & _DAT_18334f718);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f798 = func_0x00018d21df20((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_18334f740 = (_DAT_18334f798 ^ 0x9831daa2d0000000) & 0xfffffffffe000000;
  _DAT_18334f748 = _DAT_18334f748 ^ _DAT_18334f740 ^ 0xac69d703127d900c;
  _DAT_18334f8e8 = (_DAT_18334f8e8 * 0x44616f8d596ccbd5 ^ _DAT_18334f748) + _DAT_18334f740;
  _DAT_18334f810 = _DAT_18334f8e8 ^ _DAT_18334f748;
  _DAT_18334f720 = 0;
  uVar3 = (~_DAT_18334f840 + 0x100000000) *
          ((_DAT_18334f780 ^ 0x7bbdfcfe) + (ulonglong)((uint)_DAT_18334f780 & 0x7bbdfcfe) * 2);
  uVar3 = (uVar3 | _DAT_18334f8a8) + (uVar3 & _DAT_18334f8a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f820 = func_0x00018d21df20((uVar3 | 0x84420301) + (ulonglong)((uint)uVar3 & 0x84420301))
  ;
  uVar3 = _DAT_18334f820 ^ 0xff9fdfdb;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3;
  _DAT_18334f818 = (_DAT_18334f818 ^ uVar3) + 0x602024 ^ 0x4f9c443a89d9d8d;
  _DAT_18334f7d8 = (_DAT_18334f7d8 * -0x29d6859b5ff3201d ^ _DAT_18334f818) + uVar3;
  _DAT_18334f858 = _DAT_18334f7d8 ^ _DAT_18334f818;
  _DAT_18334f788 = 0x602024;
  uVar3 = _DAT_18334f8a8 + 0x1086427d8;
  uVar4 = ((_DAT_18334f8a8 + 0x602024) * 0x2000 | _DAT_18334f8a8 + 0x602024 >> 0x33) ^
          _DAT_18334f8a8;
  _DAT_18334f7a8 =
       func_0x00018d21df20((uVar4 << 0x1d | uVar4 >> 0x23) - 0x602024 ^
                           (((uVar3 * 0x2000 | uVar3 >> 0x33) ^ 0x844203fe) << 0x1d |
                           (uVar3 & 0x7ffffffffffff) >> 0x16) - (_DAT_18334f8a8 + 0x842223da));
  uVar3 = _DAT_18334f7a8 >> 1 | _DAT_18334f7a8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18334f7a8;
  _DAT_18334f7e8 = _DAT_18334f8b0 ^ uVar3 ^ 0xff;
  _DAT_18334f728 = (_DAT_18334f728 ^ uVar3) + 0xff ^ 0x5fe10ded4f2a9ac2;
  _DAT_18334f7d0 = (_DAT_18334f7d0 * 0x3f55d320ea1a5d37 ^ _DAT_18334f728) + uVar3;
  _DAT_18334f7e0 = _DAT_18334f7d0 ^ _DAT_18334f728;
  _DAT_18334f7c0 = 0xff;
  uVar3 = (~_DAT_18334f718 + 0x3c9f97cb) *
          ((_DAT_18334f758 ^ 0xb8bdb4ef) + (ulonglong)((uint)_DAT_18334f758 & 0xb8bdb4ef) * 2);
  uVar3 = (uVar3 | _DAT_18334f7b0) + (uVar3 & _DAT_18334f7b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18334f828 = func_0x00018d21df20((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_18334f7b0 = _DAT_18334f7b0 ^ _DAT_18334f828 ^ 0x3c9f97ca ^ 0xfe5be5b213e310d9;
  _DAT_18334f788 =
       (_DAT_18334f788 * 0x5fa1974a9f58b843 ^ _DAT_18334f7b0) + (_DAT_18334f828 ^ 0x3c9f97ca);
  _DAT_18334f838 = _DAT_18334f788 ^ _DAT_18334f7b0;
  _DAT_18334f8a0 = 0;
  _DAT_18334f858 = func_0x00018d21df20(_DAT_18334f8f0 ^ 0x20ff7c29ffe1cf);
  _DAT_18334f870 = _DAT_18334f7f0 ^ _DAT_18334f848 ^ 0xff;
  _DAT_18334f8a0 = (_DAT_18334f8a0 ^ _DAT_18334f848) + 0xff ^ 0x9f8cace5110886e8;
  _DAT_18334f7d0 = (_DAT_18334f7d0 * 0x72b54999564b9c1f ^ _DAT_18334f8a0) + _DAT_18334f848;
  _DAT_18334f738 = _DAT_18334f7d0 ^ _DAT_18334f8a0;
  _DAT_18334f828 = 0xff;
  uVar3 = (ulonglong)(uint)(int)cVar1 ^ 0x84222325;
  uVar4 = uVar3 ^ _DAT_18334f7b8;
  lVar2 = uVar3 + _DAT_18334f8b0;
  uVar3 = uVar4 + lVar2;
  uVar6 = (_DAT_18334f8b0 ^ 0xff) + _DAT_18334f7b8 + 0xff;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar4;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18334f8b0 ^ 0xff;
  _DAT_18334f858 =
       func_0x00018d21df20((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18334f7b8 + 0xff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  uVar3 = _DAT_18334f858 << 0x36 | _DAT_18334f858 >> 10;
  uVar4 = (ulonglong)(uint)(int)cVar1 & 0xff;
  _DAT_18334f730 = (_DAT_18334f730 ^ uVar3) + uVar4 ^ 0x89f06ab684c5bb6a;
  _DAT_18334f710 = (_DAT_18334f710 * -0x2609fbfa364f601b ^ _DAT_18334f730) + uVar3;
  _DAT_18334f798 = _DAT_18334f710 ^ _DAT_18334f730;
  uVar3 = in_stack_00000058 ^ 0x84222325 ^ _DAT_18334f750;
  lVar2 = (in_stack_00000058 ^ 0x84222325) + _DAT_18334f810;
  uVar6 = uVar3 + lVar2;
  uVar5 = (uVar4 ^ _DAT_18334f810) + _DAT_18334f750 + uVar4;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4 ^ _DAT_18334f810;
  _DAT_18334f818 = uVar4;
  _DAT_18334f700 =
       func_0x00018d21df20((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18334f750 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  _DAT_18334f850 =
       (_DAT_18334f850 ^ _DAT_18334f700) + (in_stack_00000058 | uVar4) ^ 0x4e85a024f3268386;
  _DAT_18334f8b8 = (_DAT_18334f8b8 * -0x54efd13a44d1d69b ^ _DAT_18334f850) + _DAT_18334f700;
  _DAT_18334f790 = _DAT_18334f8b8 ^ _DAT_18334f850;
  _DAT_18334f800 = in_stack_00000058 | uVar4;
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d21dc63 (image 18d21dc63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d21dc63(void)

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



// ===== continuation @ rva d1e5ff7 (image 18d1e5ff7) =====

void FUN_18d1e5ff7(void)

{
  return;
}



// ===== continuation @ rva d1e16c4 (image 18d1e16c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1e16c4(void)

{
  FUN_190ddce00();
  (*_DAT_182177de8)();
  return;
}



// ===== continuation @ rva d1e752d (image 18d1e752d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1e752d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1821780c8)();
  return;
}



// ===== continuation @ rva d1e6eef (image 18d1e6eef) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1e6eef(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1e6bcf (image 18d1e6bcf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1e6bcf(void)

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



// ===== continuation @ rva d1e6cc4 (image 18d1e6cc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1e6cc4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182177c28)();
  return;
}



// ===== continuation @ rva d1e6b8a (image 18d1e6b8a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1e6b8a(void)

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



// ===== continuation @ rva d1e5fb6 (image 18d1e5fb6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1e5fb6(void)

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



// ===== continuation @ rva d1e65aa (image 18d1e65aa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1e65aa(void)

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



// ===== continuation @ rva d1e753c (image 18d1e753c) =====

void FUN_18d1e753c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d1e57bc (image 18d1e57bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1e57bc(void)

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



// ===== continuation @ rva d1e68d1 (image 18d1e68d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1e68d1(void)

{
  (*_DAT_182178178)();
  return;
}



// ===== continuation @ rva d1f7be5 (image 18d1f7be5) =====

void FUN_18d1f7be5(void)

{
  return;
}



// ===== continuation @ rva d1e774e (image 18d1e774e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1e774e(void)

{
  FUN_190ddce00();
  (*_DAT_182179758)();
  return;
}



// ===== continuation @ rva d1eb111 (image 18d1eb111) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1eb111(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_18217a2c8)();
  return;
}



// ===== continuation @ rva d1f7bbf (image 18d1f7bbf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1f7bbf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18217a728)();
  return;
}



// ===== continuation @ rva d1f432d (image 18d1f432d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1f432d(void)

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



// ===== continuation @ rva d1ea83c (image 18d1ea83c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1ea83c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1f5f0d (image 18d1f5f0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1f5f0d(void)

{
  (*_DAT_18217c098)();
  return;
}



// ===== continuation @ rva d1f3957 (image 18d1f3957) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1f3957(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1f5440 (image 18d1f5440) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1f5440(void)

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



// ===== continuation @ rva d1ea68a (image 18d1ea68a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1ea68a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1fc406 (image 18d1fc406) =====

void FUN_18d1fc406(void)

{
  return;
}



// ===== continuation @ rva d1f7e41 (image 18d1f7e41) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1f7e41(void)

{
  FUN_190ddce00();
  (*_DAT_18217e280)();
  return;
}



// ===== continuation @ rva d1fc3e2 (image 18d1fc3e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1fc3e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18217e890)();
  return;
}



// ===== continuation @ rva d1fb25e (image 18d1fb25e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1fb25e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1fbb06 (image 18d1fbb06) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1fbb06(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18217e480)();
  return;
}



// ===== continuation @ rva d1fb2db (image 18d1fb2db) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1fb2db(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1faf88 (image 18d1faf88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1faf88(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_18217ead0)();
  return;
}



// ===== continuation @ rva d1fbed7 (image 18d1fbed7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1fbed7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1fc08d (image 18d1fc08d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1fc08d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1fbb42 (image 18d1fbb42) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1fbb42(void)

{
  FUN_190dd72e0();
  (*_DAT_18217ea50)();
  return;
}



// ===== continuation @ rva d1fbac5 (image 18d1fbac5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1fbac5(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18217e740)();
  return;
}



// ===== continuation @ rva d1fed23 (image 18d1fed23) =====

void FUN_18d1fed23(void)

{
  return;
}



// ===== continuation @ rva d1feb7a (image 18d1feb7a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1feb7a(void)

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



// ===== continuation @ rva d202e97 (image 18d202e97) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d202e97(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (*in_RAX)(in_stack_00000030);
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



// ===== continuation @ rva d200c86 (image 18d200c86) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d2037e3(void)

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



// ===== continuation @ rva d202d3d (image 18d202d3d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d202d3d(void)

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



// ===== continuation @ rva d1ff4d9 (image 18d1ff4d9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1ff4d9(void)

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



// ===== continuation @ rva d200f66 (image 18d200f66) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d2037e3(void)

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



// ===== continuation @ rva d1fee38 (image 18d1fee38) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1fee38(void)

{
  int iVar1;
  longlong *unaff_R13;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000087;
  
  uStack0000000000000087 = in_stack_00000058;
  (**(code **)(*unaff_R13 + 0x680))();
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d1fedec (image 18d1fedec) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1fedec(void)

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



// ===== continuation @ rva d1ffe16 (image 18d1ffe16) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1ffe16(void)

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



// ===== continuation @ rva d207932 (image 18d207932) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d207932(void)

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



// ===== continuation @ rva d2078de (image 18d2078de) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2078de(void)

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



// ===== continuation @ rva d2083e8 (image 18d2083e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2083e8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (*_DAT_182181ca8)();
  return;
}



// ===== continuation @ rva d208382 (image 18d208382) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d208382(void)

{
  FUN_190dd72e0();
  (*_DAT_182181cc8)();
  return;
}



// ===== continuation @ rva d2087a5 (image 18d2087a5) =====

void FUN_18d2087a5(void)

{
  return;
}



// ===== continuation @ rva d208549 (image 18d208549) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d208549(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182181d68)();
  return;
}



// ===== continuation @ rva d207e59 (image 18d207e59) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d207e59(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182181d48)();
  return;
}



// ===== continuation @ rva d2087b4 (image 18d2087b4) =====

void FUN_18d2087b4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d207cfc (image 18d207cfc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d207cfc(void)

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



// ===== continuation @ rva d208662 (image 18d208662) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d208662(void)

{
  FUN_190dd72e0();
  (*_DAT_182181a78)();
  return;
}



// ===== continuation @ rva d208771 (image 18d208771) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d208771(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1821818f8)();
  return;
}



// ===== continuation @ rva d208528 (image 18d208528) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d208528(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d20805c (image 18d20805c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d20805c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_182181998)();
  return;
}



// ===== continuation @ rva d20a8c6 (image 18d20a8c6) =====

void FUN_18d20a8c6(void)

{
  return;
}



// ===== continuation @ rva d20892c (image 18d20892c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d20892c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182182898)();
  return;
}



// ===== continuation @ rva d209cb8 (image 18d209cb8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d209cb8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182182798)();
  return;
}



// ===== continuation @ rva d20b404 (image 18d20b404) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d20b404(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1821822b8)();
  return;
}



// ===== continuation @ rva d20b063 (image 18d20b063) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d20b063(void)

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



// ===== continuation @ rva d20b46a (image 18d20b46a) =====

void FUN_18d20b46a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d209ae4 (image 18d209ae4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d209ae4(void)

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



// ===== continuation @ rva d209142 (image 18d209142) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d209142(void)

{
  (*_DAT_182182cc8)();
  return;
}



// ===== continuation @ rva d208d37 (image 18d208d37) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d208d37(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d209409 (image 18d209409) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d209409(void)

{
  (*_DAT_182182cf8)();
  return;
}



// ===== continuation @ rva d208dff (image 18d208dff) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d208dff(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



