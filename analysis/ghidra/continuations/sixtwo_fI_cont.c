// ===== continuation @ rva acc52cb (image 18acc52cb) =====

void FUN_18acc52cb(void)

{
  return;
}



// ===== continuation @ rva aca975b (image 18aca975b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018aca97b1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18aca975b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva acc4c3e (image 18acc4c3e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18acc4c3e(void)

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



// ===== continuation @ rva acb09fc (image 18acb09fc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018acb19f7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18acb09fc(uint param_1)

{
  ulonglong uVar1;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar1 = (ulonglong)param_1;
  uVar2 = (_DAT_1832707f0 ^ _DAT_1819893b0) + _DAT_183270758 + 0x26687ed5;
  uVar3 = (_DAT_183270758 ^ _UNK_1819893b8) + _DAT_1832707f0 + 0xa72f7a71;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832707f0 ^ _DAT_1819893b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183270758 ^ _UNK_1819893b8;
  _DAT_183270810 =
       func_0x00018acc54b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832707f0 + 0xa72f7a71) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183270758 + 0x26687ed5));
  uVar2 = ((_DAT_183270810 ^ 0x69fc9c8de2a7d6f0) << 0x1a |
          (_DAT_183270810 ^ 0x69fc9c8de2a7d6f0) >> 0x26) ^ 0xa72f7a71;
  _DAT_1832707a8 = (_DAT_1832707a8 ^ uVar2) + 0xa76f7ff1 ^ 0x94c587b6b60f258a;
  _DAT_183270760 = (_DAT_183270760 * -0x6760a49dbdd1ab05 ^ _DAT_1832707a8) + uVar2;
  _DAT_1832708f8 = _DAT_183270760 ^ _DAT_1832707a8;
  _DAT_183270858 = 0xa76f7ff1;
  uVar2 = (_DAT_1832707f0 ^ _DAT_1819893c0) + _DAT_1832708d0 + 0x84222325;
  uVar3 = (_DAT_1832708d0 ^ _UNK_1819893c8) + _DAT_1832707f0 + 0x42588800;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832707f0 ^ _DAT_1819893c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832708d0 ^ _UNK_1819893c8;
  _DAT_183270848 =
       func_0x00018acc54b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832707f0 + 0x42588800) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832708d0 + 0x84222325));
  uVar2 = _DAT_183270848 << 0x1c | _DAT_183270848 >> 0x24;
  _DAT_1832707f8 = (_DAT_1832707f8 ^ uVar2) - 0x42588800 ^ 0xae5d51b523537378;
  _DAT_183270880 = (_DAT_183270880 * 0x4e323d6457b5163d ^ _DAT_1832707f8) + uVar2;
  _DAT_183270788 = _DAT_183270880 ^ _DAT_1832707f8;
  _DAT_183270780 = 0xbda77800;
  uVar2 = (_DAT_183270820 ^ _DAT_1819893d0) + _DAT_183270720 + 0x842223da;
  uVar3 = (_DAT_183270720 ^ _UNK_1819893d8) + _DAT_183270820 + 0x42588800;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183270820 ^ _DAT_1819893d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183270720 ^ _UNK_1819893d8;
  _DAT_183270870 =
       func_0x00018acc54b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183270820 + 0x42588800) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183270720 + 0x842223da));
  uVar2 = _DAT_183270870 & 0xfffffffffffff;
  _DAT_1832708d0 = _DAT_183270818 ^ uVar2 ^ 0x425888ff;
  _DAT_183270708 = (_DAT_183270708 ^ uVar2) + 0x425888ff ^ 0x9fc6cb72d01bb58e;
  _DAT_183270710 = (_DAT_183270710 * -0x8ea43983b801fcd ^ _DAT_183270708) + uVar2;
  _DAT_1832707d0 = _DAT_183270710 ^ _DAT_183270708;
  _DAT_1832707a0 = 0x425888ff;
  uVar2 = (_DAT_1832708d8 ^ _DAT_1819893e0) + _DAT_183270748 + 0xc67aabda;
  uVar3 = (_DAT_183270748 ^ _UNK_1819893e8) + _DAT_1832708d8 + 0xbda77800;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832708d8 ^ _DAT_1819893e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183270748 ^ _UNK_1819893e8;
  _DAT_183270898 =
       func_0x00018acc54b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832708d8 + 0xbda77800) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183270748 + 0xc67aabda));
  uVar2 = ((_DAT_183270898 ^ 0x3126c3ff21908800) << 0xc |
          (_DAT_183270898 ^ 0x3126c3ff21908800) >> 0x34) >> 1 | (_DAT_183270898 >> 0x34) << 0x3f;
  _DAT_1832708e8 = _DAT_183270818 ^ uVar2 ^ 0x1000000ff;
  _DAT_1832707e8 = (_DAT_1832707e8 ^ uVar2) + 0x1000000ff ^ 0xf8b4fa30b425639f;
  _DAT_183270800 = (_DAT_183270800 * -0x457fc6a08a090493 ^ _DAT_1832707e8) + uVar2;
  _DAT_183270830 = _DAT_183270800 ^ _DAT_1832707e8;
  _DAT_183270710 = 0xff;
  _DAT_183270848 = func_0x00018acc54b0(_DAT_1832708d8 + 0xff2bff9c9a005dff ^ 3);
  uVar2 = _DAT_183270848 & 0x7fffffffffffffff ^ 0xff;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x1555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar2;
  _DAT_183270820 = _DAT_183270850 ^ uVar2 ^ 0x21ccf83f;
  _DAT_1832708b8 = (_DAT_183270750 ^ uVar2) + 0x21ccf83f ^ 0xa322bffb91c3db96;
  _DAT_183270880 = (_DAT_183270880 * -0x5d970066d2a43dfb ^ _DAT_1832708b8) + uVar2;
  _DAT_1832708b8 = _DAT_183270880 ^ _DAT_1832708b8;
  _DAT_183270750 = 0x21ccf83f;
  _DAT_183270750 = func_0x00018acc54b0(_DAT_183270848 + 0xff50ffd53a0024ff ^ 0xb6);
  uVar2 = _DAT_183270750 << 0xf | _DAT_183270750 >> 0x31;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar2;
  _DAT_183270850 = _DAT_1832707a0 ^ uVar2 ^ 0x1000000ff;
  _DAT_183270798 = (_DAT_183270840 ^ uVar2) + 0x1000000ff ^ 0x2a557dd7d2b44d67;
  _DAT_183270788 = (_DAT_183270788 * 0x23d63e5460865d4f ^ _DAT_183270798) + uVar2;
  _DAT_183270798 = _DAT_183270788 ^ _DAT_183270798;
  _DAT_183270840 = 0xff;
  uVar2 = (~_DAT_183270748 + 0x78a8f6a1) *
          ((_DAT_1832707a0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1832707a0 & 0x842223da) * 2);
  uVar2 = (uVar2 | _DAT_1832707f8) + (uVar2 & _DAT_1832707f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183270868 = func_0x00018acc54b0((uVar2 | 0xfc8ad57a) + (ulonglong)((uint)uVar2 & 0xfc8ad57a))
  ;
  uVar2 = _DAT_183270868 ^ 0xff;
  _DAT_183270850 = _DAT_1832708c8 ^ uVar2 ^ 0x78a8f79f;
  _DAT_183270810 = (_DAT_183270810 ^ uVar2) + 0x78a8f79f ^ 0x6b4d9be06d87b9d9;
  _DAT_1832707e8 = (_DAT_1832707e8 * -0x3d712e5837fa7e7 ^ _DAT_183270810) + uVar2;
  _DAT_183270748 = _DAT_1832707e8 ^ _DAT_183270810;
  _DAT_183270740 = 0x78a8f79f;
  uVar2 = (_DAT_183270870 ^ _DAT_1819893f0) + _DAT_1832707a8 + 0xfc8ad4ba;
  uVar3 = (_DAT_1832707a8 ^ _UNK_1819893f8) + _DAT_183270870 + 0x87570960;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183270870 ^ _DAT_1819893f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832707a8 ^ _UNK_1819893f8;
  _DAT_1832708e0 =
       func_0x00018acc54b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183270870 + 0x87570960) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832707a8 + 0xfc8ad4ba));
  uVar2 = _DAT_1832708e0 ^ 0x3fca206c301a72a0;
  _DAT_183270880 = _DAT_183270890 ^ uVar2 ^ 0x1000000ff;
  _DAT_183270760 = (_DAT_183270760 ^ uVar2) + 0x1000000ff ^ 0xc85eb7473cfcf5b6;
  _DAT_1832707c0 = (_DAT_1832707c0 * 0x4b4aa3353cea3815 ^ _DAT_183270760) + uVar2;
  _DAT_1832708b8 = 0xff;
  _DAT_183270830 = func_0x00018acc54b0(_DAT_183270858 ^ 0xff5500346eff585a);
  uVar2 = (ulonglong)((int)_DAT_183270830 * -0x2663fa9b & 0xa76f7ff1);
  _DAT_1832708f0 = _DAT_1832708f0 ^ uVar2 ^ 0x117026b98;
  _DAT_1832707c0 = (_DAT_1832707c0 ^ uVar2) + 0x117026b98 ^ 0xd188cee6419b0d94;
  _DAT_1832708c0 = (_DAT_183270798 * -0x150515936a7405cb ^ _DAT_1832707c0) + uVar2 ^ _DAT_1832707c0;
  _DAT_183270798 = 0x17026b98;
  _DAT_183270798 = func_0x00018acc54b0(_DAT_1832707b0 + 0x92ffbbd300d4ff ^ 0x1e);
  _DAT_1832707d8 =
       (_DAT_1832707d8 ^ _DAT_183270798 ^ 0x48f97031adcfcec6) + 0xc8fd9456 ^ 0x2f14a93daaadf2e3;
  _DAT_1832708d0 =
       (_DAT_1832708d0 * 0x7174a3ccadebd881 ^ _DAT_1832707d8) +
       (_DAT_183270798 ^ 0x48f97031adcfcec6);
  _DAT_1832708a0 = _DAT_1832708d0 ^ _DAT_1832707d8;
  _DAT_183270820 = 0xc8fd9456;
  _DAT_183270718 = func_0x00018acc54b0(_DAT_1832707a0 + 0xff9ffffdd100b8ff ^ 0xd0);
  uVar2 = _DAT_183270718 ^ 0xcefdd756;
  _DAT_1832707e8 = (_DAT_183270888 ^ uVar2 ^ 0x117026b98 ^ uVar2) + 0x117026b98 ^ 0x40a855ea0dfcdafb
  ;
  _DAT_1832708c8 = (_DAT_1832708c8 * 0xe917d4247b3ffbd ^ _DAT_1832707e8) + uVar2;
  _DAT_183270878 = _DAT_1832708c8 ^ _DAT_1832707e8;
  _DAT_183270800 = 0x17026b98;
  uVar2 = (~_DAT_183270850 + 0x17026b99) *
          ((_DAT_183270720 ^ 0x932048bd) + (ulonglong)((uint)_DAT_183270720 & 0x932048bd) * 2);
  uVar2 = (uVar2 | _DAT_1832707a8) + (uVar2 & _DAT_1832707a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018acc54b0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  _DAT_183270750 = 0xd6255ad447fa014;
  _DAT_1832707e0 =
       (_DAT_1832707e0 * -0x7ec9ca962dc04d87 ^ 0xd6255ad447fa014) +
       ((uVar2 ^ 0x17026800) & 0xfffffffffffffc00);
  _DAT_183270768 = _DAT_1832707e0 ^ 0xd6255ad447fa014;
  _DAT_183270868 = 0;
  uVar2 = ((_DAT_1832707e0 ^ 0xd6255adc05d83ce) + (ulonglong)((uint)_DAT_183270768 & 0x842223da) * 2
          ) * -_DAT_183270780;
  uVar2 = (uVar2 | _DAT_183270888) + (uVar2 & _DAT_183270888);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832707f8 = func_0x00018acc54b0((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  uVar2 = _DAT_1832707f8 * 0x57e6328105b4b1b7 ^ 0xff;
  _DAT_1832707d0 = _DAT_183270758 ^ uVar2 ^ 0xff;
  _DAT_1832708e8 = (_DAT_1832708e8 ^ uVar2) + 0xff ^ 0xae07398149476123;
  _DAT_183270860 = (_DAT_183270860 * 0xfb4509e48e71e8b ^ _DAT_1832708e8) + uVar2;
  _DAT_1832708c8 = _DAT_183270860 ^ _DAT_1832708e8;
  _DAT_183270780 = 0xff;
  _DAT_183270888 = func_0x00018acc54b0(_DAT_1832707e0 ^ 0xffe3007cda001de4);
  uVar2 = (_DAT_183270888 << 7 | _DAT_183270888 >> 0x39) << 0x11 |
          (_DAT_183270888 & 0x1ffffffffffffff) >> 0x28;
  _DAT_183270880 = _DAT_183270820 ^ uVar2 ^ 0xff;
  _DAT_1832708c8 = (_DAT_1832708c8 ^ uVar2) + 0xff ^ 0x429d2a4c081ed267;
  _DAT_183270790 = (_DAT_183270790 * -0x1bc8da2bb61d0217 ^ _DAT_1832708c8) + uVar2;
  _DAT_1832708e0 = _DAT_183270790 ^ _DAT_1832708c8;
  _DAT_183270710 = 0xff;
  uVar2 = (~_DAT_183270810 + 0x100) *
          ((uVar1 ^ 0x84222325 ^ _DAT_1832707f8) +
          (ulonglong)((uint)_DAT_1832707f8 & (uint)(uVar1 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_1832707a0) + (uVar2 & _DAT_1832707a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183270700 =
       func_0x00018acc54b0((uVar1 ^ 0x842223da | uVar2) +
                           (ulonglong)((uint)(uVar1 ^ 0x842223da) & (uint)uVar2));
  _DAT_1832707d8 = uVar1 & 0xff;
  _DAT_183270810 =
       (_DAT_183270810 ^ _DAT_183270700 * 0x1f5b1e5108c67231) + _DAT_1832707d8 ^ 0x819a524ef18a82f1;
  _DAT_1832707b0 =
       (_DAT_1832707b0 * -0x4798abf6cfa46463 ^ _DAT_183270810) + _DAT_183270700 * 0x1f5b1e5108c67231
  ;
  _DAT_1832708b0 = _DAT_1832707b0 ^ _DAT_183270810;
  uVar3 = _DAT_1832707d8 << 0x28;
  uVar2 = in_stack_00000050 ^ 0x84222325;
  uVar1 = ((_DAT_183270858 ^ uVar2) + (uVar2 & _DAT_183270858) * 2) * (uVar3 - _DAT_183270778);
  uVar1 = (uVar1 | _DAT_1832707b8) + (uVar1 & _DAT_1832707b8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832707f8 = func_0x00018acc54b0((uVar2 ^ uVar3 | uVar1) + (uVar1 & (uVar2 ^ uVar3)));
  uVar1 = in_stack_00000050 * uVar3 ^ _DAT_1832707f8;
  _DAT_183270838 = uVar3 | in_stack_00000050;
  _DAT_183270880 = (_DAT_183270880 ^ uVar1) + _DAT_183270838 ^ 0xcee79126effc9d17;
  _DAT_183270710 = (_DAT_183270710 * -0x14ad5675faedcbef ^ _DAT_183270880) + uVar1;
  _DAT_183270708 = _DAT_183270710 ^ _DAT_183270880;
  (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa,in_stack_00000038);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva acabb19 (image 18acabb19) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018acabba8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18acabb19(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  in_stack_00000060 = (**(code **)(*unaff_RSI + 0xd8))();
  uVar1 = in_stack_00000058;
  in_stack_00000068 = in_stack_00000058;
  in_stack_00000058 = in_stack_00000060;
  FUN_190ddfc90(uVar1,&stack0x00000030,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xc5a,0x38);
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva acc5337 (image 18acc5337) =====

void FUN_18acc5337(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva acada4e (image 18acada4e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018acada6c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18acada4e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva acb3bd9 (image 18acb3bd9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acb3bd9(void)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  bVar1 = *(byte *)(lVar3 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar6 = (_DAT_1832707a8 ^ _DAT_181989460) + _DAT_1832708c8 + 0x8e70870d;
  uVar7 = (_DAT_1832708c8 ^ _UNK_181989468) + _DAT_1832707a8 + 0xf44602a1;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832707a8 ^ _DAT_181989460;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832708c8 ^ _UNK_181989468;
  _DAT_183270750 =
       func_0x00018acc54b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832707a8 + 0xf44602a1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832708c8 + 0x8e70870d));
  uVar6 = ((_DAT_183270750 ^ 0xfe56a6a9) << 0x24 | (_DAT_183270750 ^ 0xfe56a6a9) >> 0x1c) *
          0x5fefac7087a99aa1;
  _DAT_1832708c8 = (_DAT_1832708c8 ^ uVar6) + 0xfe56a6a9 ^ 0xdeaa8404ed0e3cc2;
  _DAT_183270810 = (_DAT_183270810 * -0x4d7825fb0796e131 ^ _DAT_1832708c8) + uVar6;
  _DAT_1832708b8 = _DAT_183270810 ^ _DAT_1832708c8;
  _DAT_1832707d0 = 0xfe56a6a9;
  _DAT_183270888 = func_0x00018acc54b0(_DAT_183270890 + 0x320033a20073ff ^ 0xc4);
  _DAT_183270870 =
       (_DAT_183270870 ^ _DAT_183270888 & 0xffffffffffffc000) + 0xb09e7d7b ^ 0x27f34d45238c35a0;
  _DAT_183270850 =
       (_DAT_183270850 * 0x752deb0dc5f24773 ^ _DAT_183270870) +
       (_DAT_183270888 & 0xffffffffffffc000);
  _DAT_183270858 = _DAT_183270850 ^ _DAT_183270870;
  _DAT_183270800 = 0xb09e7d7b;
  uVar6 = (_DAT_183270730 ^ _DAT_181989470) + 0x134c0a0a0;
  uVar7 = (_UNK_181989478 ^ 0xb09e7d7b) + _DAT_183270730 + 0x4f9bedc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183270730 ^ _DAT_181989470;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _UNK_181989478 ^ 0xb09e7d7b;
  uVar6 = func_0x00018acc54b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183270730 + 0x4f9bedc0) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - 0x134c0a0a0);
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  _DAT_183270790 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6;
  _DAT_1832708d0 = (_DAT_1832708d0 ^ _DAT_183270790) - 0x4f9bedc0 ^ 0xc2507b603194fd45;
  _DAT_183270790 = (uVar6 * -0x255999ef404d9d13 ^ _DAT_1832708d0) + _DAT_183270790;
  _DAT_1832708f8 = _DAT_183270790 ^ _DAT_1832708d0;
  _DAT_183270870 = 0xb0641240;
  _DAT_183270710 = func_0x00018acc54b0(_DAT_1832707e0 + 0xa4ffb8a30025ff ^ 0x54);
  uVar7 = _DAT_183270710 * -0x11f95bda80f80c13;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7)
          & 0xffffffffff;
  _DAT_1832707a8 = _DAT_183270870 ^ uVar6 ^ 0x10000ff00;
  _DAT_183270718 = (_DAT_183270718 ^ uVar6) + 0x10000ff00 ^ 0x6b8298cd04db7935;
  _DAT_183270760 = (_DAT_183270760 * 0x76bef11a9e22eb01 ^ _DAT_183270718) + uVar6;
  _DAT_183270898 = _DAT_183270760 ^ _DAT_183270718;
  _DAT_1832708e8 = 0xff00;
  _DAT_1832707f8 = func_0x00018acc54b0(_DAT_183270710 + 0xc00a334ff8affU ^ 0x4a);
  _DAT_183270890 =
       (_DAT_183270890 ^ _DAT_1832707f8 & 0xfffffffffe000000) - 0x23bf5758 ^ 0xbcd5e4a2ee60d50f;
  _DAT_183270830 =
       (_DAT_183270830 * -0x2a953c56a1162913 ^ _DAT_183270890) +
       (_DAT_1832707f8 & 0xfffffffffe000000);
  _DAT_1832708e0 = _DAT_183270830 ^ _DAT_183270890;
  _DAT_1832708a8 = 0xdc40a8a8;
  uVar6 = (~_DAT_1832708f0 + 0x172e91a9) *
          ((_DAT_1832708d0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832708d0 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183270758) + (uVar6 & _DAT_183270758);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183270748 = func_0x00018acc54b0((uVar6 | 0x930cb28d) + (ulonglong)((uint)uVar6 & 0x930cb28d))
  ;
  uVar6 = (_DAT_183270748 ^ 0x172e91a8) * 0x6e95fe7ed10abff;
  uVar6 = uVar6 << 0x36 | uVar6 >> 10;
  _DAT_183270810 = (_DAT_183270810 ^ uVar6) - 0x172e91a8 ^ 0x386ce1e7d606ca54;
  _DAT_183270858 = (_DAT_183270858 * -0x51a9285b71e3c84b ^ _DAT_183270810) + uVar6;
  _DAT_183270888 = _DAT_183270858 ^ _DAT_183270810;
  _DAT_183270778 = 0xe8d16e58;
  uVar6 = (~_DAT_1832707f8 + 0xb09e7d7c) *
          ((_DAT_1832708c0 ^ 0x7a74858c) + (ulonglong)((uint)_DAT_1832708c0 & 0x7a74858c) * 2);
  uVar6 = (uVar6 | _DAT_183270740) + (uVar6 & _DAT_183270740);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183270868 = func_0x00018acc54b0((uVar6 | 0xcaeaf8f7) + (ulonglong)((uint)uVar6 & 0xcaeaf8f7))
  ;
  _DAT_183270790 =
       (_DAT_183270790 ^ _DAT_183270868 & 0xffffffffffffe000) + 0x4ec8dbd2 ^ 0xa19c00b6d910c9b;
  _DAT_183270828 =
       (_DAT_183270828 * -0x37182ef408e81ddd ^ _DAT_183270790) +
       (_DAT_183270868 & 0xffffffffffffe000);
  _DAT_183270888 = _DAT_183270828 ^ _DAT_183270790;
  _DAT_1832707c0 = 0x4ec8dbd2;
  uVar6 = (~_DAT_1832708f0 + 0xb09e7d7c) *
          ((_DAT_183270830 ^ 0x7a74858c) + (ulonglong)((uint)_DAT_183270830 & 0x7a74858c) * 2);
  uVar6 = (uVar6 | _DAT_183270868) + (uVar6 & _DAT_183270868);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183270860 = func_0x00018acc54b0((uVar6 | 0xcaeaf8f7) + (ulonglong)((uint)uVar6 & 0xcaeaf8f7))
  ;
  uVar6 = _DAT_183270860 >> 9 ^ 0x7f6f7f;
  uVar7 = uVar6 * 0x200;
  uVar6 = uVar7 + (uVar6 & 0x55555555555555) * -0x100;
  uVar6 = (uVar6 & 0x3333333333333300) + (uVar6 >> 2 & 0x3333333333333300);
  uVar7 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f00) * 0x101010101010101 >> 0x38) << 3 ^ uVar7;
  _DAT_183270800 = (_DAT_183270800 ^ uVar7) + 0xb0162429 ^ 0xce61b51c9767e184;
  _DAT_183270790 = (_DAT_183270790 * -0x603dd0dd1117865b ^ _DAT_183270800) + uVar7;
  _DAT_1832708d8 = _DAT_183270790 ^ _DAT_183270800;
  _DAT_183270878 = 0xb0162429;
  _DAT_1832708d8 = func_0x00018acc54b0(_DAT_1832708b8 + 0xff5000a59affc1ff ^ 0x53);
  uVar6 = _DAT_1832708d8 - (_DAT_1832708d8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1832708d8;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar7;
  _DAT_1832707c0 = _DAT_183270750 ^ uVar7 ^ 0xaef52424;
  _DAT_183270700 = (_DAT_183270700 ^ uVar7) + 0xaef52424 ^ 0xc3acacb813c4a963;
  _DAT_183270830 = (_DAT_183270830 * -0x46e8ed976091b857 ^ _DAT_183270700) + uVar7;
  _DAT_183270788 = _DAT_183270830 ^ _DAT_183270700;
  _DAT_1832707e0 = 0xaef52424;
  _DAT_183270780 = func_0x00018acc54b0(_DAT_183270848 + 0x21007c1cffe1ffU ^ 0xcf);
  _DAT_183270820 = (_DAT_183270780 ^ 0x779227df22020000) & 0xffffffffffff0000;
  _DAT_1832707a0 = _DAT_1832707a0 ^ _DAT_183270820 ^ 0x14c3272ced1a8f0a;
  _DAT_183270748 = (_DAT_183270748 * 0x5b15d563b09b579 ^ _DAT_1832707a0) + _DAT_183270820;
  _DAT_183270840 = _DAT_183270748 ^ _DAT_1832707a0;
  _DAT_1832707e0 = 0;
  uVar6 = ((_DAT_183270758 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_183270758 & 0x8422dc25) * 2) *
          -_DAT_1832707a8;
  uVar6 = (uVar6 | _DAT_183270780) + (uVar6 & _DAT_183270780);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1832708a0 = func_0x00018acc54b0((uVar6 | 0x8422dc25) + (ulonglong)((uint)uVar6 & 0x8422dc25))
  ;
  uVar6 = _DAT_1832708a0 & 0x1fffffffffff;
  _DAT_1832708d0 = _DAT_1832708c8 ^ uVar6 ^ 0xff00;
  _DAT_183270870 = (_DAT_183270870 ^ uVar6) + 0xff00 ^ 0xdcbd7b15b02c506d;
  _DAT_183270728 = (_DAT_183270728 * 0x12e56e616f1e11cb ^ _DAT_183270870) + uVar6;
  _DAT_183270730 = _DAT_183270728 ^ _DAT_183270870;
  _DAT_1832707c8 = 0xff00;
  _DAT_183270718 = func_0x00018acc54b0(_DAT_183270828 + 0x59ff7ab3007aff ^ 0x22);
  _DAT_183270720 = (_DAT_183270720 ^ _DAT_183270718) + 0x1a95956 ^ 0x681d9d9a484426ea;
  _DAT_183270800 = (_DAT_183270800 * -0x4f3234072b9e10cf ^ _DAT_183270720) + _DAT_183270718;
  _DAT_183270890 = _DAT_183270800 ^ _DAT_183270720;
  _DAT_183270850 = 0x1a95956;
  uVar6 = (_DAT_1832707e0 ^ _DAT_181989480) + _DAT_183270798 + 0x7a74858c;
  uVar7 = (_DAT_183270798 ^ _UNK_181989488) + _DAT_1832707e0 + 0x1a95956;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832707e0 ^ _DAT_181989480;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183270798 ^ _UNK_181989488;
  _DAT_1832707c0 =
       func_0x00018acc54b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832707e0 + 0x1a95956) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183270798 + 0x7a74858c));
  uVar6 = (ulonglong)(~(uint)_DAT_1832707c0 & 0xfe56a6a9);
  _DAT_1832708e0 = _DAT_1832708e0 ^ uVar6 ^ 0x973cd7b7c72c39b5;
  _DAT_183270738 = (_DAT_183270738 * -0x4d7af33ba5c10991 ^ _DAT_1832708e0) + uVar6;
  _DAT_183270760 = _DAT_183270738 ^ _DAT_1832708e0;
  _DAT_183270878 = 0;
  uVar6 = ((_DAT_1832707b8 ^ 0x8422dc25) + (ulonglong)((uint)_DAT_1832707b8 & 0x8422dc25) * 2) *
          -_DAT_183270818;
  uVar6 = (uVar6 | _DAT_1832707f8) + (uVar6 & _DAT_1832707f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183270898 = func_0x00018acc54b0((uVar6 | 0x8422dc25) + (ulonglong)((uint)uVar6 & 0x8422dc25))
  ;
  uVar6 = _DAT_183270898 << 7 | _DAT_183270898 >> 0x39;
  _DAT_183270740 = _DAT_183270878 ^ uVar6 ^ 0xff00;
  _DAT_1832708f0 = (_DAT_1832708f0 ^ uVar6) + 0xff00 ^ 0x361a8aa2bb7ed2c;
  _DAT_183270798 = (_DAT_183270798 * 0x4e0c4c31c1333977 ^ _DAT_1832708f0) + uVar6;
  _DAT_183270808 = _DAT_183270798 ^ _DAT_1832708f0;
  _DAT_1832707f8 = 0xff00;
  _DAT_1832707b8 = func_0x00018acc54b0(_DAT_183270758 + 0x1d00841d0021ff ^ 0x2b);
  _DAT_183270828 = _DAT_183270828 ^ _DAT_1832707b8 ^ 0x6a8f80b8b1e268 ^ 0x6cc2d60b075e9bbe;
  _DAT_183270878 =
       (_DAT_183270878 * 0x335a316f55d0ebe1 ^ _DAT_183270828) + (_DAT_1832707b8 ^ 0x6a8f80b8b1e268);
  _DAT_1832707f0 = _DAT_183270878 ^ _DAT_183270828;
  _DAT_183270808 = 0;
  auVar4._8_4_ = (uint)bVar1 << 8;
  auVar4._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar4._12_4_ = 0;
  auVar5 = pshufb(auVar4 ^ _DAT_181989490,_DAT_1800170c0);
  uVar7 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar7 + _DAT_183270710;
  if (auVar5._4_4_ < 0) {
    uVar6 = _DAT_183270888 ^ uVar7;
  }
  _DAT_1832708f0 = func_0x00018acc54b0(SUB161(auVar4 ^ _DAT_181989490,5) ^ uVar6);
  uVar6 = _DAT_1832708f0 >> 1 | _DAT_1832708f0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ _DAT_1832708f0) & 0x3ffffffffffffff;
  _DAT_183270778 = in_stack_00000050 | (ulonglong)bVar1 << 8;
  _DAT_183270760 = (_DAT_183270760 ^ uVar6) + _DAT_183270778 ^ 0x3bda84a01e975882;
  _DAT_183270738 = (_DAT_183270738 * -0x3bbff04e859c7813 ^ _DAT_183270760) + uVar6;
  _DAT_183270750 = _DAT_183270738 ^ _DAT_183270760;
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



// ===== continuation @ rva acc4699 (image 18acc4699) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acc4699(void)

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



// ===== continuation @ rva acada6f (image 18acada6f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018acadaa6 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18acada6f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva ac97037 (image 18ac97037) =====

void FUN_18ac97037(void)

{
  return;
}



// ===== continuation @ rva ac9281f (image 18ac9281f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac9281f(void)

{
  FUN_190ddce00();
  (*_DAT_18197fa68)();
  return;
}



// ===== continuation @ rva aca1267 (image 18aca1267) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca1267(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x68))();
  (*_DAT_1819832f8)();
  return;
}



// ===== continuation @ rva aca0279 (image 18aca0279) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca0279(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aca0dcc (image 18aca0dcc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca0dcc(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ac9dec9 (image 18ac9dec9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac9dec9(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181981f28)();
  return;
}



// ===== continuation @ rva ac9c61d (image 18ac9c61d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac9c61d(void)

{
  longlong *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  (**(code **)(*in_stack_00000040 + 0x70))(in_stack_00000040,in_stack_00000048,&UNK_182f702a8);
  (*_DAT_181982bb8)();
  return;
}



// ===== continuation @ rva ac9c65e (image 18ac9c65e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac9c65e(void)

{
  undefined8 in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x10f0,0x3f);
  (*_DAT_181980da8)();
  return;
}



// ===== continuation @ rva ac9c5d7 (image 18ac9c5d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac9c5d7(void)

{
  longlong *in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50,0);
  (**(code **)(*in_stack_00000040 + 0x720))(in_stack_00000040);
  (*_DAT_181981e78)();
  return;
}



// ===== continuation @ rva ac9f1e6 (image 18ac9f1e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac9f1e6(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1819818a8)();
  return;
}



// ===== continuation @ rva ac9d27e (image 18ac9d27e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac9d27e(void)

{
  undefined8 in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x14db,0x4f);
  (*_DAT_181981288)();
  return;
}



// ===== continuation @ rva aca1237 (image 18aca1237) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca1237(void)

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



// ===== continuation @ rva ac99de3 (image 18ac99de3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac99de3(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181982f38)();
  return;
}



// ===== continuation @ rva ac981b8 (image 18ac981b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ac981b8(void)

{
  longlong *in_stack_00000040;
  undefined8 in_stack_00000078;
  
  (**(code **)(*in_stack_00000040 + 0x560))(in_stack_00000040,6,in_stack_00000078,0);
  (*_DAT_181981418)();
  return;
}



// ===== continuation @ rva aca577a (image 18aca577a) =====

void FUN_18aca577a(void)

{
  return;
}



// ===== continuation @ rva aca14d7 (image 18aca14d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca14d7(void)

{
  FUN_190ddce00();
  (*_DAT_1819847a8)();
  return;
}



// ===== continuation @ rva aca57f1 (image 18aca57f1) =====

void FUN_18aca57f1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva aca4d2c (image 18aca4d2c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca4d2c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aca4d11 (image 18aca4d11) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca4d11(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181984598)();
  return;
}



// ===== continuation @ rva aca4e76 (image 18aca4e76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca4e76(void)

{
  FUN_190ddfc90();
  (*_DAT_181984e08)();
  return;
}



// ===== continuation @ rva aca4a6f (image 18aca4a6f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca4a6f(void)

{
  FUN_190dd72e0();
  (*_DAT_181984948)();
  return;
}



// ===== continuation @ rva aca49f2 (image 18aca49f2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca49f2(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181984d18)();
  return;
}



// ===== continuation @ rva aca514a (image 18aca514a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca514a(void)

{
  (*_DAT_181984c58)();
  return;
}



// ===== continuation @ rva aca55b5 (image 18aca55b5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca55b5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181984a68)();
  return;
}



// ===== continuation @ rva aca52c7 (image 18aca52c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca52c7(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181984888)();
  return;
}



// ===== continuation @ rva aca15c6 (image 18aca15c6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca15c6(ulonglong param_1)

{
  char cVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong lVar3;
  ulonglong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 extraout_XMM0_Qa;
  uint uVar13;
  uint uVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar22;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar45;
  ulonglong uVar44;
  ulonglong uVar46;
  uint uStack0000000000000070;
  ulonglong uStack0000000000000090;
  ulonglong in_stack_00000098;
  
  uVar22 = _DAT_181984530;
  uStack0000000000000090 = _DAT_181984530 ^ 0x84222325;
  uVar5 = (-0x5c45b3064a2977b8 - in_RAX) *
          ((param_1 ^ uStack0000000000000090) + (uStack0000000000000090 & param_1) * 2);
  uVar5 = (uVar5 | _DAT_183270438) + (uVar5 & _DAT_183270438);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183270480 =
       func_0x00018aca58c0((_DAT_181984530 ^ 0xa3ba4cf931f4ab6d | uVar5) +
                           (uVar5 & (_DAT_181984530 ^ 0xa3ba4cf931f4ab6d)));
  uVar5 = uVar22 ^ _DAT_183270480 & 0x7fffffffffffffff;
  uVar4 = uVar22 | 0xa3ba4cf9b5d68848;
  _DAT_1832704f8 = (_DAT_1832704f8 ^ uVar5) + uVar4 ^ 0xf7405f466d659c2c;
  _DAT_1832704f0 = (_DAT_1832704f0 * 0x307a881d59387b6d ^ _DAT_1832704f8) + uVar5;
  _DAT_183270618 = _DAT_1832704f0 ^ _DAT_1832704f8;
  lVar2 = uVar22 * uVar22;
  uVar8 = lVar2 * -0x4ab9bbc6c0cbbf6a;
  uVar5 = (_DAT_183270618 ^ 0x84222325) + _DAT_183270300 + 0x84222325;
  uVar22 = (uVar8 ^ _DAT_183270300) + _DAT_183270618 + uVar8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183270618 ^ 0x84222325;
  uVar22 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ uVar8 ^ _DAT_183270300;
  uVar9 = _DAT_181984538 ^ 0xe499854298bed073;
  _DAT_1832706a8 = uVar4;
  _DAT_1832705f8 =
       func_0x00018aca58c0((uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_183270618 + uVar8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183270300 + 0x84222325));
  uVar7 = lVar2 * 0x4ab9bbc6c0cbbf6a;
  _DAT_1832706c8 =
       (_DAT_1832706c8 ^ _DAT_1832705f8 & 0x7fffffffffffffff) + lVar2 * 0x4ab9bbc6c0cbbf6a ^
       0x1a42f56ce037b8c;
  _DAT_1832705b0 =
       (_DAT_1832705b0 * -0x7ddb0430bdc82b65 ^ _DAT_1832706c8) +
       (_DAT_1832705f8 & 0x7fffffffffffffff);
  _DAT_183270448 = _DAT_1832705b0 ^ _DAT_1832706c8;
  uVar5 = ((_DAT_1832705d8 ^ unaff_RBP) + (unaff_RBP & _DAT_1832705d8) * 2) *
          (uVar8 - _DAT_1832703a0);
  uVar5 = (uVar5 | _DAT_183270320) + (uVar5 & _DAT_183270320);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183270560 = uVar7;
  _DAT_1832706d8 = func_0x00018aca58c0((unaff_RBP ^ uVar8 | uVar5) + (uVar5 & (unaff_RBP ^ uVar8)));
  uVar10 = (uint)(uVar8 >> 0x20);
  auVar30._8_4_ = (int)uVar8;
  auVar30._0_8_ = uVar8;
  auVar30._12_4_ = uVar10;
  uVar33 = SUB164(auVar30 & _DAT_181984e30,0);
  uVar6 = SUB168(auVar30 & _DAT_181984e30,0);
  uVar14 = SUB164(auVar30 ^ _DAT_181984e30,0);
  uVar41 = SUB168(auVar30 ^ _DAT_181984e30,0);
  uVar22 = _DAT_1832706d8 * 0x26d9c64036bd4cb9;
  uVar5 = uVar22 >> 1 | uVar22;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar22) & 0xfffffffffffffffe;
  auVar35._8_4_ = 0xffffffff;
  auVar35._0_8_ = 0xffffffffffffffff;
  auVar35._12_4_ = 0xffffffff;
  uVar13 = SUB164(_DAT_181984e30 | auVar30,0);
  uVar23 = SUB164(auVar30 ^ auVar35,0);
  uVar41 = (_DAT_181984e80 & 0xffffffff) * (ulonglong)uVar14 +
           ((_DAT_181984e90 & 0xffffffff) * (ulonglong)uVar14 +
            (uVar41 >> 0x20) * (_DAT_181984e80 & 0xffffffff) << 0x20) +
           (_DAT_181984e60 & 0xffffffff) * (ulonglong)uVar33 +
           ((_DAT_181984e70 & 0xffffffff) * (ulonglong)uVar33 +
            (uVar6 >> 0x20) * (_DAT_181984e60 & 0xffffffff) << 0x20) +
           (_DAT_181984e40 & 0xffffffff) * (uVar8 & 0xffffffff) +
           ((_DAT_181984e50 & 0xffffffff) * (uVar8 & 0xffffffff) +
            (ulonglong)uVar10 * (_DAT_181984e40 & 0xffffffff) << 0x20) +
           (-((ulonglong)uVar23 * (ulonglong)_DAT_181984f40 +
             ((_DAT_181984f50 & 0xffffffff) * (ulonglong)uVar23 +
              (SUB168(auVar30 ^ auVar35,0) >> 0x20) * (ulonglong)_DAT_181984f40 << 0x20)) -
           ((ulonglong)uVar14 * (ulonglong)_DAT_181984f20 +
            ((_DAT_181984f30 & 0xffffffff) * (ulonglong)uVar14 +
             (uVar41 >> 0x20) * (ulonglong)_DAT_181984f20 << 0x20) +
            (ulonglong)uVar13 * (ulonglong)_DAT_181984f00 +
            ((_DAT_181984f10 & 0xffffffff) * (ulonglong)uVar13 +
             (SUB168(_DAT_181984e30 | auVar30,0) >> 0x20) * (ulonglong)_DAT_181984f00 << 0x20) +
           (ulonglong)uVar33 * (ulonglong)_DAT_181984ee0 +
           ((_DAT_181984ef0 & 0xffffffff) * (ulonglong)uVar33 +
            (uVar6 >> 0x20) * (ulonglong)_DAT_181984ee0 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_181984ec0 +
           ((_DAT_181984ed0 & 0xffffffff) * (uVar8 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_181984ec0 << 0x20))) + _DAT_181984f60;
  _DAT_1832703e8 = (_DAT_1832703e8 ^ uVar5) + uVar41 ^ 0x422372b565457fea;
  _DAT_183270378 = (_DAT_183270378 * 0x55c2ecd994bd8b7f ^ _DAT_1832703e8) + uVar5;
  _DAT_1832703c8 = _DAT_183270378 ^ _DAT_1832703e8;
  uVar22 = uVar41 ^ 0x84222325;
  uVar5 = ((_DAT_1832705b0 ^ uVar22) + (uVar22 & _DAT_1832705b0) * 2) * (uVar7 - _DAT_1832704c8);
  uVar5 = (uVar5 | _DAT_1832704c8) + (uVar5 & _DAT_1832704c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183270648 = uVar41;
  _DAT_183270378 = func_0x00018aca58c0((uVar22 ^ uVar7 | uVar5) + (uVar5 & (uVar22 ^ uVar7)));
  uVar5 = _DAT_181984538;
  uVar23 = (uint)(uVar41 >> 0x20);
  auVar31._8_4_ = (int)uVar41;
  auVar31._0_8_ = uVar41;
  auVar31._12_4_ = uVar23;
  uVar10 = (uint)(uVar7 >> 0x20);
  auVar18._8_4_ = (int)uVar7;
  auVar18._0_8_ = uVar7;
  auVar18._12_4_ = uVar10;
  uVar33 = SUB164(auVar31 & auVar18,0);
  uVar46 = SUB168(auVar31 & auVar18,0);
  uVar13 = SUB164(auVar31 | auVar18,0);
  uVar44 = SUB168(auVar31 | auVar18,0);
  uVar6 = uVar41 ^ _DAT_18001a710;
  uVar14 = SUB164(auVar31 ^ auVar18,0);
  uVar22 = uVar7 ^ _DAT_18001a710;
  lVar2 = _DAT_181984538 * _DAT_181984538;
  uVar8 = lVar2 * -0x167a886fb0cf9ff8;
  auVar24._8_8_ = uVar8;
  auVar24._0_8_ = _DAT_18001b640;
  auVar24 = pshufb(auVar24 ^ _DAT_1819850d0,_DAT_1800170c0);
  uVar7 = (((uVar6 & 0xffffffff) * (ulonglong)_DAT_181984fb0 +
            ((ulonglong)_DAT_181984fe0 * (uVar6 & 0xffffffff) +
             (uVar6 >> 0x20) * (ulonglong)_DAT_181984fb0 << 0x20) +
           (ulonglong)_DAT_181984fd0 * (ulonglong)uVar13 +
           ((uVar44 >> 0x20) * (ulonglong)_DAT_181984fd0 +
            (ulonglong)_DAT_181984fc0 * (ulonglong)uVar13 << 0x20) +
           (ulonglong)uVar33 * (ulonglong)_DAT_181984fd0 +
           ((uVar46 >> 0x20) * (ulonglong)_DAT_181984fd0 +
            (ulonglong)uVar33 * (ulonglong)_DAT_181984fc0 << 0x20) +
           (ulonglong)_DAT_181984f90 * (uVar7 & 0xffffffff) +
           ((ulonglong)_DAT_181984fa0 * (uVar7 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_181984f90 << 0x20) +
           (ulonglong)_DAT_181984f70 * (uVar41 & 0xffffffff) +
           ((ulonglong)_DAT_181984f80 * (uVar41 & 0xffffffff) +
            (ulonglong)uVar23 * (ulonglong)_DAT_181984f70 << 0x20)) -
          ((uVar22 & 0xffffffff) * (ulonglong)_DAT_181985050 +
           ((ulonglong)_DAT_1819850c0 * (uVar22 & 0xffffffff) +
            (uVar22 >> 0x20) * (ulonglong)_DAT_181985050 << 0x20) +
          (ulonglong)uVar14 * (ulonglong)_DAT_1819850a0 +
          ((ulonglong)_DAT_1819850b0 * (ulonglong)uVar14 +
           (SUB168(auVar31 ^ auVar18,0) >> 0x20) * (ulonglong)_DAT_1819850a0 << 0x20) +
          (ulonglong)uVar13 * (ulonglong)_DAT_181985080 +
          ((ulonglong)_DAT_181985090 * (ulonglong)uVar13 +
           (uVar44 >> 0x20) * (ulonglong)_DAT_181985080 << 0x20) +
          (ulonglong)uVar33 * (ulonglong)_DAT_181985060 +
          ((ulonglong)_DAT_181985070 * (ulonglong)uVar33 +
           (uVar46 >> 0x20) * (ulonglong)_DAT_181985060 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_181985030 +
          ((ulonglong)_DAT_181985040 * (uVar7 & 0xffffffff) +
           (ulonglong)uVar10 * (ulonglong)_DAT_181985030 << 0x20) +
          (uVar41 & 0xffffffff) * (ulonglong)_DAT_181985010 +
          ((ulonglong)_DAT_181985020 * (uVar41 & 0xffffffff) +
           (ulonglong)uVar23 * (ulonglong)_DAT_181985010 << 0x20))) + 0x6d33603715ba6b54;
  _DAT_183270678 = _DAT_183270330 ^ _DAT_183270378 ^ uVar7;
  _DAT_1832705a8 = (_DAT_1832705a8 ^ _DAT_183270378) + uVar7 ^ 0x54aa4a8a12ea89c8;
  _DAT_1832706c8 = (_DAT_1832706c8 * -0x3d32c130135938e3 ^ _DAT_1832705a8) + _DAT_183270378;
  _DAT_183270548 = _DAT_1832706c8 ^ _DAT_1832705a8;
  uVar6 = auVar24._8_8_ + auVar24._0_8_;
  uVar22 = uVar6 + _DAT_183270638;
  if (auVar24._4_4_ < 0) {
    uVar22 = _DAT_1832705e8 ^ uVar6;
  }
  _DAT_183270630 = uVar7;
  _DAT_1832705e0 = func_0x00018aca58c0(uVar22 ^ 4);
  uVar22 = uVar8 ^ _DAT_1832705e0 & 0x7fffffffffffffff;
  uVar6 = lVar2 * 0x167a886fb0cf9ff8;
  _DAT_183270658 = (_DAT_183270658 ^ uVar22) + lVar2 * 0x167a886fb0cf9ff8 ^ 0x85be81683f074fa1;
  _DAT_1832703e8 = (_DAT_1832703e8 * -0x7d9324b70e753ffd ^ _DAT_183270658) + uVar22;
  _DAT_1832703f8 = _DAT_1832703e8 ^ _DAT_183270658;
  uVar8 = uVar8 + uVar7;
  uVar7 = uVar8 ^ 0x84222325;
  uVar22 = ((_DAT_1832706b8 ^ uVar7) + (uVar7 & _DAT_1832706b8) * 2) * (uVar6 - _DAT_183270510);
  uVar22 = (uVar22 | _DAT_183270668) + (uVar22 & _DAT_183270668);
  uVar22 = uVar22 * 0x2000 ^ uVar22;
  uVar22 = uVar22 >> 7 ^ uVar22;
  uVar22 = uVar22 << 0x11 ^ uVar22;
  _DAT_183270320 = uVar6;
  _DAT_183270380 = func_0x00018aca58c0((uVar7 ^ uVar6 | uVar22) + (uVar22 & (uVar7 ^ uVar6)));
  uVar13 = (uint)(uVar8 >> 0x20);
  auVar32._8_4_ = (int)uVar8;
  auVar32._0_8_ = uVar8;
  auVar32._12_4_ = uVar13;
  uVar14 = (uint)(uVar6 >> 0x20);
  auVar15._8_4_ = (int)uVar6;
  auVar15._0_8_ = uVar6;
  auVar15._12_4_ = uVar14;
  auVar42._8_4_ = 0xffffffff;
  auVar42._0_8_ = 0xffffffffffffffff;
  auVar42._12_4_ = 0xffffffff;
  uVar23 = SUB164(auVar32 & auVar15,0);
  uVar7 = SUB168(auVar32 & auVar15,0);
  uVar10 = SUB164(auVar32 ^ auVar15,0);
  uVar41 = SUB168(auVar32 ^ auVar15,0);
  uVar33 = SUB164(auVar32 ^ auVar42,0);
  uVar34 = SUB164(auVar15 ^ auVar42,0);
  uVar44 = SUB168(auVar15 ^ auVar42,0);
  uVar22 = _DAT_183270380 & 0xfffffffffffffc00;
  _DAT_183270458 =
       (((ulonglong)_DAT_181985180 * (ulonglong)uVar34 +
         ((ulonglong)_DAT_181985190 * (ulonglong)uVar34 +
          (uVar44 >> 0x20) * (ulonglong)_DAT_181985180 << 0x20) +
        (ulonglong)uVar33 * (ulonglong)_DAT_181985160 +
        ((ulonglong)_DAT_181985170 * (ulonglong)uVar33 +
         (SUB168(auVar32 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_181985160 << 0x20) +
        (ulonglong)_DAT_181985140 * (ulonglong)uVar10 +
        ((ulonglong)_DAT_181985150 * (ulonglong)uVar10 +
         (uVar41 >> 0x20) * (ulonglong)_DAT_181985140 << 0x20) +
        (ulonglong)_DAT_181985120 * (ulonglong)uVar23 +
        ((ulonglong)_DAT_181985130 * (ulonglong)uVar23 + (uVar7 >> 0x20) * (ulonglong)_DAT_181985120
        << 0x20) +
        (ulonglong)_DAT_181985100 * (uVar6 & 0xffffffff) +
        ((ulonglong)_DAT_181985110 * (uVar6 & 0xffffffff) +
         (ulonglong)uVar14 * (ulonglong)_DAT_181985100 << 0x20) +
        (ulonglong)_DAT_1819850e0 * (uVar8 & 0xffffffff) +
        ((ulonglong)_DAT_1819850f0 * (uVar8 & 0xffffffff) +
         (ulonglong)uVar13 * (ulonglong)_DAT_1819850e0 << 0x20)) -
       ((ulonglong)uVar34 * (ulonglong)_DAT_181985200 +
        ((ulonglong)_DAT_181985250 * (ulonglong)uVar34 +
         (uVar44 >> 0x20) * (ulonglong)_DAT_181985200 << 0x20) +
        (ulonglong)uVar10 * (ulonglong)_DAT_181985230 +
        ((ulonglong)_DAT_181985240 * (ulonglong)uVar10 +
         (uVar41 >> 0x20) * (ulonglong)_DAT_181985230 << 0x20) +
       (ulonglong)uVar23 * (ulonglong)_DAT_181985210 +
       ((ulonglong)_DAT_181985220 * (ulonglong)uVar23 + (uVar7 >> 0x20) * (ulonglong)_DAT_181985210
       << 0x20) +
       (uVar6 & 0xffffffff) * (ulonglong)_DAT_1819851e0 +
       ((ulonglong)_DAT_1819851f0 * (uVar6 & 0xffffffff) +
        (ulonglong)uVar14 * (ulonglong)_DAT_1819851e0 << 0x20) +
       (uVar8 & 0xffffffff) * (ulonglong)_DAT_1819851c0 +
       ((ulonglong)_DAT_1819851d0 * (uVar8 & 0xffffffff) +
        (ulonglong)uVar13 * (ulonglong)_DAT_1819851c0 << 0x20))) + 0xe2b8f66cdd355e56;
  _DAT_183270568 = _DAT_1832706c8 ^ uVar22 ^ _DAT_183270458;
  _DAT_183270408 = (_DAT_183270408 ^ uVar22) + _DAT_183270458 ^ 0xf1e13c300a9a3d46;
  _DAT_183270618 = (_DAT_183270618 * 0x2098d96ff9951461 ^ _DAT_183270408) + uVar22;
  _DAT_183270338 = _DAT_183270618 ^ _DAT_183270408;
  lVar2 = uVar5 * _DAT_181984530;
  uVar7 = _DAT_183270458 + lVar2 * 0x1e0411bfd98f3751;
  uVar5 = uVar7 ^ 0x84222325 ^ _DAT_183270328;
  lVar3 = _DAT_183270328 + lVar2 * -0x1e0411bfd98f3751;
  uVar22 = lVar2 * -0x1e0411bfd98f3751;
  lVar2 = (uVar7 ^ 0x84222325) + _DAT_1832703f8;
  uVar8 = uVar5 + lVar2;
  uVar6 = (uVar22 ^ _DAT_1832703f8) + lVar3;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5;
  uVar8 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar22 ^ _DAT_1832703f8;
  _DAT_183270380 =
       func_0x00018aca58c0((uVar8 << 0x1d | uVar8 >> 0x23) - lVar3 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar2);
  uVar10 = (uint)(uVar7 >> 0x20);
  auVar25._8_4_ = (int)uVar7;
  auVar25._0_8_ = uVar7;
  auVar25._12_4_ = uVar10;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar22;
  uVar33 = (uint)(uVar22 >> 0x20);
  auVar16._8_4_ = (int)uVar22;
  auVar16._0_8_ = uVar22;
  auVar16._12_4_ = uVar33;
  uVar34 = SUB164(auVar25 & auVar16,0);
  uVar5 = SUB168(auVar25 & auVar16,0);
  uVar45 = SUB164(auVar25 | auVar16,0);
  uVar14 = SUB164(auVar25 ^ auVar42,0);
  uVar6 = SUB168(auVar25 ^ auVar42,0);
  uVar13 = SUB164(auVar25 ^ auVar16,0);
  uVar23 = SUB164(auVar38 ^ auVar42,0);
  uVar8 = uVar4 ^ 0x84222325;
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = uVar8;
  auVar18 = pshufb(auVar17 ^ _DAT_1819853c0,_DAT_1800170c0);
  uVar22 = (((ulonglong)_DAT_1819852a0 * (ulonglong)uVar14 +
             ((ulonglong)_DAT_1819852d0 * (ulonglong)uVar14 +
              (uVar6 >> 0x20) * (ulonglong)_DAT_1819852a0 << 0x20) +
            (ulonglong)uVar45 * (ulonglong)_DAT_1819852c0 +
            ((SUB168(auVar25 | auVar16,0) >> 0x20) * (ulonglong)_DAT_1819852c0 +
             (ulonglong)_DAT_1819852b0 * (ulonglong)uVar45 << 0x20) +
            (ulonglong)uVar34 * (ulonglong)_DAT_1819852c0 +
            ((uVar5 >> 0x20) * (ulonglong)_DAT_1819852c0 +
             (ulonglong)uVar34 * (ulonglong)_DAT_1819852b0 << 0x20) +
            (ulonglong)_DAT_181985280 * (uVar22 & 0xffffffff) +
            ((ulonglong)_DAT_181985290 * (uVar22 & 0xffffffff) +
             (ulonglong)uVar33 * (ulonglong)_DAT_181985280 << 0x20) +
            (ulonglong)_DAT_181985260 * (uVar7 & 0xffffffff) +
            ((ulonglong)_DAT_181985270 * (uVar7 & 0xffffffff) +
             (ulonglong)uVar10 * (ulonglong)_DAT_181985260 << 0x20)) -
           ((ulonglong)uVar23 * (_DAT_1819853a0 & 0xffffffff) +
            ((ulonglong)_DAT_1819853b0 * (ulonglong)uVar23 +
             (SUB168(auVar38 ^ auVar42,0) >> 0x20) * (_DAT_1819853a0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar14 * (ulonglong)_DAT_181985380 +
           ((ulonglong)_DAT_181985390 * (ulonglong)uVar14 +
            (uVar6 >> 0x20) * (ulonglong)_DAT_181985380 << 0x20) +
           (ulonglong)uVar13 * (ulonglong)_DAT_181985360 +
           ((ulonglong)_DAT_181985370 * (ulonglong)uVar13 +
            (SUB168(auVar25 ^ auVar16,0) >> 0x20) * (ulonglong)_DAT_181985360 << 0x20) +
           (ulonglong)uVar34 * (ulonglong)_DAT_181985340 +
           ((ulonglong)_DAT_181985350 * (ulonglong)uVar34 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_181985340 << 0x20) +
           (uVar22 & 0xffffffff) * (ulonglong)_DAT_181985320 +
           ((ulonglong)_DAT_181985330 * (uVar22 & 0xffffffff) +
            (ulonglong)uVar33 * (ulonglong)_DAT_181985320 << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_181985300 +
           ((ulonglong)_DAT_181985310 * (uVar7 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_181985300 << 0x20))) + 0x2e7fdcd20e79b4ff;
  _DAT_183270300 = _DAT_183270498 ^ _DAT_183270380 ^ uVar22;
  _DAT_183270660 = (_DAT_183270660 ^ _DAT_183270380) + uVar22 ^ 0xb5524dda1b07cf58;
  _DAT_1832704a0 = (_DAT_1832704a0 * -0x1e6b20ca27584a41 ^ _DAT_183270660) + _DAT_183270380;
  _DAT_183270570 = _DAT_1832704a0 ^ _DAT_183270660;
  uVar7 = auVar18._8_8_ + auVar18._0_8_;
  uVar5 = uVar7 + _DAT_183270368;
  if (auVar18._4_4_ < 0) {
    uVar5 = _DAT_183270558 ^ uVar7;
  }
  _DAT_1832704b0 = uVar22;
  _DAT_183270490 = func_0x00018aca58c0(SUB161(auVar17 ^ _DAT_1819853c0,5) ^ uVar5);
  uVar13 = (uint)(uVar4 >> 0x20);
  auVar19._8_4_ = (int)uVar4;
  auVar19._0_8_ = uVar4;
  auVar19._12_4_ = uVar13;
  uVar45 = (uint)(uVar9 >> 0x20);
  auVar26._8_4_ = (int)uVar9;
  auVar26._0_8_ = uVar9;
  auVar26._12_4_ = uVar45;
  uVar23 = SUB164(auVar19 & auVar26,0);
  uVar6 = SUB168(auVar19 & auVar26,0);
  uVar33 = SUB164(auVar19 | auVar26,0);
  uVar10 = SUB164(auVar19 ^ auVar26,0);
  uVar41 = SUB168(auVar19 ^ auVar26,0);
  uVar34 = SUB164(auVar26 ^ auVar42,0);
  uVar7 = SUB168(auVar26 ^ auVar42,0);
  uVar14 = SUB164(auVar19 ^ auVar42,0);
  uVar5 = ((uVar4 | uVar9) ^ _DAT_183270490) & 0x7fffffffffffffff;
  uVar44 = (((ulonglong)_DAT_181985410 * (ulonglong)uVar34 +
             ((ulonglong)_DAT_181985480 * (ulonglong)uVar34 +
              (uVar7 >> 0x20) * (ulonglong)_DAT_181985410 << 0x20) +
            (ulonglong)_DAT_181985460 * (ulonglong)uVar10 +
            ((ulonglong)_DAT_181985470 * (ulonglong)uVar10 +
             (uVar41 >> 0x20) * (ulonglong)_DAT_181985460 << 0x20) +
            (ulonglong)uVar33 * (ulonglong)_DAT_181985440 +
            ((ulonglong)_DAT_181985450 * (ulonglong)uVar33 +
             (SUB168(auVar19 | auVar26,0) >> 0x20) * (ulonglong)_DAT_181985440 << 0x20) +
            (ulonglong)_DAT_181985420 * (ulonglong)uVar23 +
            ((ulonglong)_DAT_181985430 * (ulonglong)uVar23 +
             (uVar6 >> 0x20) * (ulonglong)_DAT_181985420 << 0x20) +
            (ulonglong)_DAT_1819853f0 * (uVar9 & 0xffffffff) +
            ((ulonglong)_DAT_181985400 * (uVar9 & 0xffffffff) +
             (ulonglong)uVar45 * (ulonglong)_DAT_1819853f0 << 0x20) +
            (ulonglong)_DAT_1819853d0 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_1819853e0 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar13 * (ulonglong)_DAT_1819853d0 << 0x20)) -
           ((ulonglong)uVar34 * (ulonglong)_DAT_181985550 +
            ((ulonglong)_DAT_181985560 * (ulonglong)uVar34 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_181985550 << 0x20) +
           (ulonglong)uVar14 * (ulonglong)_DAT_181985530 +
           ((ulonglong)_DAT_181985540 * (ulonglong)uVar14 +
            (SUB168(auVar19 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_181985530 << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_181985510 +
           ((ulonglong)_DAT_181985520 * (ulonglong)uVar10 +
            (uVar41 >> 0x20) * (ulonglong)_DAT_181985510 << 0x20) +
           (ulonglong)uVar23 * (ulonglong)_DAT_1819854f0 +
           ((ulonglong)_DAT_181985500 * (ulonglong)uVar23 +
            (uVar6 >> 0x20) * (ulonglong)_DAT_1819854f0 << 0x20) +
           (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819854d0 +
           ((ulonglong)_DAT_1819854e0 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar45 * (ulonglong)_DAT_1819854d0 << 0x20) +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_1819854b0 +
           ((ulonglong)_DAT_1819854c0 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar13 * (ulonglong)_DAT_1819854b0 << 0x20))) + _DAT_181985570;
  _DAT_183270358 = _DAT_183270670 ^ uVar5 ^ uVar44;
  _DAT_183270520 = (_DAT_183270520 ^ uVar5) + uVar44 ^ 0xa70f11ffc1e681f8;
  _DAT_183270630 = (_DAT_183270630 * 0x4229172fc42b642d ^ _DAT_183270520) + uVar5;
  _DAT_183270368 = _DAT_183270630 ^ _DAT_183270520;
  uVar5 = (uVar8 ^ _DAT_1832703a8) + _DAT_1832703b0 + uVar8;
  uVar7 = (uVar9 ^ _DAT_1832703b0) + _DAT_1832703a8 + uVar9;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar8 ^ _DAT_1832703a8;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar9 ^ _DAT_1832703b0;
  _DAT_183270668 = uVar44;
  _DAT_1832705b0 =
       func_0x00018aca58c0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832703a8 + uVar9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832703b0 + uVar8));
  uVar5 = _DAT_1832705b0 << 0x24 | _DAT_1832705b0 >> 0x1c;
  uVar41 = uVar4 & uVar9;
  uVar7 = uVar4 + uVar9 + uVar41 * -2;
  _DAT_1832704b0 = (_DAT_1832704b0 ^ uVar5) + uVar7 ^ 0x2a00434e0785163d;
  _DAT_183270600 = (_DAT_183270600 * -0x7453a5f4f1d29b19 ^ _DAT_1832704b0) + uVar5;
  _DAT_183270528 = _DAT_183270600 ^ _DAT_1832704b0;
  uVar5 = ((_DAT_183270658 ^ uVar8) + (uVar8 & _DAT_183270658) * 2) * (uVar9 - _DAT_1832705e8);
  uVar5 = (uVar5 | _DAT_1832706c0) + (uVar5 & _DAT_1832706c0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183270358 = uVar7;
  _DAT_183270668 = func_0x00018aca58c0((uVar9 ^ uVar8 | uVar5) + (uVar5 & (uVar9 ^ uVar8)));
  _DAT_183270500 = (_DAT_183270500 ^ _DAT_183270668) + uVar41 ^ 0x58e92469d461594;
  _DAT_183270408 = (_DAT_183270408 * -0x275be14494b61153 ^ _DAT_183270500) + _DAT_183270668;
  _DAT_183270608 = _DAT_183270408 ^ _DAT_183270500;
  auVar11._8_8_ = uVar41 * 2;
  auVar11._0_8_ = uVar7 ^ 0x84222325;
  auVar18 = pshufb(auVar11 ^ _DAT_181985580,_DAT_1800170c0);
  uVar6 = auVar18._8_8_ + auVar18._0_8_;
  uVar5 = uVar6 + _DAT_1832706f0;
  if (auVar18._4_4_ < 0) {
    uVar5 = _DAT_1832703d8 ^ uVar6;
  }
  _DAT_183270440 = uVar41;
  _DAT_183270550 = func_0x00018aca58c0(SUB161(auVar11 ^ _DAT_181985580,5) ^ uVar5);
  uVar5 = _DAT_183270550 ^ uVar7;
  uVar13 = (uint)(uVar7 >> 0x20);
  auVar27._8_4_ = (int)uVar7;
  auVar27._0_8_ = uVar7;
  auVar27._12_4_ = uVar13;
  auVar20._8_4_ = (int)uVar41;
  auVar20._0_8_ = uVar41;
  auVar20._12_4_ = (int)(uVar41 >> 0x20);
  uVar6 = uVar41 * 2;
  auVar21._8_8_ = auVar20._8_8_ * 2;
  auVar21._0_8_ = uVar6;
  auVar39._8_4_ = 0xffffffff;
  auVar39._0_8_ = 0xffffffffffffffff;
  auVar39._12_4_ = 0xffffffff;
  uVar14 = SUB164(auVar27 ^ auVar39,0);
  uVar10 = SUB164(auVar21 ^ auVar39,0);
  uVar34 = SUB164(auVar27 & auVar21,0);
  uVar33 = SUB164(auVar27 | auVar21,0);
  uVar23 = SUB164(auVar21 ^ auVar27,0);
  uVar9 = (((ulonglong)uVar10 * (ulonglong)_DAT_1819855e0 +
            ((SUB168(auVar21 ^ auVar39,0) >> 0x20) * (ulonglong)_DAT_1819855e0 +
             (_DAT_1819855b0 & 0xffffffff) * (ulonglong)uVar10 << 0x20) +
           (ulonglong)uVar14 * (ulonglong)_DAT_1819855d0 +
           ((SUB168(auVar27 ^ auVar39,0) >> 0x20) * (ulonglong)_DAT_1819855d0 +
            (_DAT_181985590 & 0xffffffff) * (ulonglong)uVar14 << 0x20) +
           (_DAT_1819855c0 & 0xffffffff) * (uVar6 & 0xffffffff) +
           (((uVar41 & 0x7fffffffffffffff) >> 0x1f) * (_DAT_1819855c0 & 0xffffffff) +
            (uVar6 & 0xffffffff) * (_DAT_1819855b0 & 0xffffffff) << 0x20) +
           (_DAT_1819855a0 & 0xffffffff) * (uVar7 & 0xffffffff) +
           ((ulonglong)uVar13 * (_DAT_1819855a0 & 0xffffffff) +
            (uVar7 & 0xffffffff) * (_DAT_181985590 & 0xffffffff) << 0x20)) -
          ((ulonglong)uVar23 * (ulonglong)_DAT_181985620 +
           ((SUB168(auVar21 ^ auVar27,0) >> 0x20) * (ulonglong)_DAT_181985620 +
            (_DAT_181985610 & 0xffffffff) * (ulonglong)uVar23 << 0x20) +
           (ulonglong)uVar34 * (ulonglong)_DAT_181985620 +
           ((SUB168(auVar27 & auVar21,0) >> 0x20) * (ulonglong)_DAT_181985620 +
            (ulonglong)uVar34 * (_DAT_181985610 & 0xffffffff) << 0x20) +
          (ulonglong)uVar33 * (ulonglong)_DAT_181985630 +
          ((_DAT_181985640 & 0xffffffff) * (ulonglong)uVar33 +
           (SUB168(auVar27 | auVar21,0) >> 0x20) * (ulonglong)_DAT_181985630 << 0x20))) +
          _DAT_181985650;
  _DAT_183270410 = _DAT_1832703b0 ^ uVar5 ^ uVar9;
  _DAT_183270340 = (_DAT_183270340 ^ uVar5) + uVar9 ^ 0x3222b5dfafe5150f;
  _DAT_1832704a0 = (_DAT_1832704a0 * -0x4ebce1617aca4057 ^ _DAT_183270340) + uVar5;
  _DAT_1832703c8 = _DAT_1832704a0 ^ _DAT_183270340;
  uVar5 = uVar44 ^ 0x84222325 ^ _DAT_183270638;
  lVar2 = (uVar44 ^ 0x84222325) + _DAT_1832704e0;
  uVar7 = uVar5 + lVar2;
  uVar6 = (uVar9 ^ _DAT_1832704e0) + _DAT_183270638 + uVar9;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar9 ^ _DAT_1832704e0;
  _DAT_1832706b8 = uVar9;
  _DAT_183270470 =
       func_0x00018aca58c0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183270638 + uVar9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar2);
  uVar23 = (uint)(uVar44 >> 0x20);
  auVar36._8_4_ = (int)uVar44;
  auVar36._0_8_ = uVar44;
  auVar36._12_4_ = uVar23;
  uVar14 = (uint)(uVar9 >> 0x20);
  auVar28._8_4_ = (int)uVar9;
  auVar28._0_8_ = uVar9;
  auVar28._12_4_ = uVar14;
  uVar13 = SUB164(auVar36 & auVar28,0);
  uVar41 = SUB168(auVar36 & auVar28,0);
  uVar10 = SUB164(auVar36 | auVar28,0);
  uVar46 = SUB168(auVar36 | auVar28,0);
  uVar33 = SUB164(auVar36 ^ auVar28,0);
  uVar6 = SUB168(auVar36 ^ auVar28,0);
  uVar7 = uVar9 ^ _DAT_18001a710;
  uVar5 = (uVar44 | uVar9) ^ _DAT_183270470;
  uVar5 = uVar5 << 10 | uVar5 >> 0x36;
  _DAT_1832703b8 =
       (((ulonglong)_DAT_1819856d0 * (ulonglong)uVar33 +
         ((ulonglong)_DAT_1819856e0 * (ulonglong)uVar33 +
          (uVar6 >> 0x20) * (ulonglong)_DAT_1819856d0 << 0x20) +
         (ulonglong)_DAT_1819856b0 * (ulonglong)uVar10 +
         ((ulonglong)_DAT_1819856c0 * (ulonglong)uVar10 +
          (uVar46 >> 0x20) * (ulonglong)_DAT_1819856b0 << 0x20) +
        (ulonglong)_DAT_181985690 * (ulonglong)uVar13 +
        ((ulonglong)_DAT_1819856a0 * (ulonglong)uVar13 +
         (uVar41 >> 0x20) * (ulonglong)_DAT_181985690 << 0x20) +
        (ulonglong)_DAT_181985680 * (uVar9 & 0xffffffff) +
        ((ulonglong)uVar14 * (ulonglong)_DAT_181985680 +
         (ulonglong)_DAT_181985660 * (uVar9 & 0xffffffff) << 0x20) +
        (ulonglong)_DAT_181985670 * (uVar44 & 0xffffffff) +
        ((ulonglong)uVar23 * (ulonglong)_DAT_181985670 +
         (uVar44 & 0xffffffff) * (ulonglong)_DAT_181985660 << 0x20)) -
       ((uVar7 & 0xffffffff) * (ulonglong)_DAT_181985750 +
        ((ulonglong)_DAT_1819857c0 * (uVar7 & 0xffffffff) +
         (uVar7 >> 0x20) * (ulonglong)_DAT_181985750 << 0x20) +
       (ulonglong)uVar33 * (ulonglong)_DAT_1819857a0 +
       ((ulonglong)_DAT_1819857b0 * (ulonglong)uVar33 + (uVar6 >> 0x20) * (ulonglong)_DAT_1819857a0
       << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_181985780 +
       ((ulonglong)_DAT_181985790 * (ulonglong)uVar10 + (uVar46 >> 0x20) * (ulonglong)_DAT_181985780
       << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_181985760 +
       ((ulonglong)_DAT_181985770 * (ulonglong)uVar13 + (uVar41 >> 0x20) * (ulonglong)_DAT_181985760
       << 0x20) +
       (uVar9 & 0xffffffff) * (ulonglong)_DAT_181985730 +
       ((ulonglong)_DAT_181985740 * (uVar9 & 0xffffffff) +
        (ulonglong)uVar14 * (ulonglong)_DAT_181985730 << 0x20) +
       (uVar44 & 0xffffffff) * (ulonglong)_DAT_181985710 +
       ((ulonglong)_DAT_181985720 * (uVar44 & 0xffffffff) +
        (ulonglong)uVar23 * (ulonglong)_DAT_181985710 << 0x20))) + 0x548422bde4fdc610;
  _DAT_1832706d8 = _DAT_1832703b8 ^ uVar5;
  _DAT_1832703a0 = (_DAT_1832703a0 ^ uVar5) + _DAT_1832703b8 ^ 0x2ea671efb4713849;
  _DAT_183270330 = (_DAT_183270330 * 0x4740b57833988bf3 ^ _DAT_1832703a0) + uVar5;
  _DAT_183270518 = _DAT_183270330 ^ _DAT_1832703a0;
  uVar5 = (uVar8 ^ _DAT_1832705e0) + uVar8 + _DAT_183270630;
  uVar7 = ~_DAT_183270630 + (_DAT_1832705e0 - 1);
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar8 ^ _DAT_1832705e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ ~_DAT_183270630;
  uVar22 = _DAT_1832703b8 + uVar22;
  _DAT_1832704f0 =
       func_0x00018aca58c0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832705e0 - 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uVar8 + _DAT_183270630));
  _DAT_183270390 = ~uVar4;
  _DAT_1832706f0 =
       (_DAT_1832706f0 ^ ~(~_DAT_1832704f0 & 0x7fffffffffffffff)) + _DAT_183270390 ^
       0x3e9ff30b6005237;
  _DAT_183270520 =
       (_DAT_183270520 * 0x1ab91da9cbd78a01 ^ _DAT_1832706f0) +
       ~(~_DAT_1832704f0 & 0x7fffffffffffffff);
  _DAT_1832706a8 = _DAT_183270520 ^ _DAT_1832706f0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar22 ^ 0x84222325;
  auVar18 = pshufb(auVar12 ^ _DAT_1819857d0,_DAT_1800170c0);
  uVar8 = auVar18._8_8_ + auVar18._0_8_;
  uVar5 = uVar8 + _DAT_183270418;
  if (auVar18._4_4_ < 0) {
    uVar5 = _DAT_183270588 ^ uVar8;
  }
  _DAT_183270608 = func_0x00018aca58c0(SUB161(auVar12 ^ _DAT_1819857d0,5) ^ uVar5);
  uVar10 = (uint)(uVar22 >> 0x20);
  auVar29._8_4_ = (int)uVar22;
  auVar29._0_8_ = uVar22;
  auVar29._12_4_ = uVar10;
  uVar5 = auVar29._8_8_ >> 0x20;
  auVar40._8_4_ = 0xffffffff;
  auVar40._0_8_ = 0xffffffffffffffff;
  auVar40._12_4_ = 0xffffffff;
  auVar18 = auVar29 ^ auVar40;
  auVar43._0_8_ =
       (((_DAT_181985800 & 0xffffffff) * (uVar22 & 0xffffffff) +
         ((_DAT_181985810 & 0xffffffff) * (uVar22 & 0xffffffff) +
          (ulonglong)uVar10 * (_DAT_181985800 & 0xffffffff) << 0x20) +
        (_DAT_1819857e0 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_DAT_1819857f0 & 0xffffffff) * (uVar22 & 0xffffffff) +
         (ulonglong)uVar10 * (_DAT_1819857e0 & 0xffffffff) << 0x20)) -
       ((ulonglong)auVar18._0_4_ * (ulonglong)_DAT_181985860 +
        ((_DAT_181985870 & 0xffffffff) * (ulonglong)auVar18._0_4_ +
         (auVar18._0_8_ >> 0x20) * (ulonglong)_DAT_181985860 << 0x20) +
       (uVar22 & 0xffffffff) * (ulonglong)_DAT_181985840 +
       ((_DAT_181985850 & 0xffffffff) * (uVar22 & 0xffffffff) +
        (ulonglong)uVar10 * (ulonglong)_DAT_181985840 << 0x20) +
       (_DAT_181985820 & 0xffffffff) * (uVar22 & 0xffffffff) +
       ((_DAT_181985830 & 0xffffffff) * (uVar22 & 0xffffffff) +
        (ulonglong)uVar10 * (_DAT_181985820 & 0xffffffff) << 0x20))) + _DAT_181985880;
  auVar43._8_8_ =
       (((_UNK_181985808 & 0xffffffff) * (uVar22 & 0xffffffff) +
         ((_UNK_181985818 & 0xffffffff) * (uVar22 & 0xffffffff) +
          uVar5 * (_UNK_181985808 & 0xffffffff) << 0x20) +
        (_UNK_1819857e8 & 0xffffffff) * (uVar22 & 0xffffffff) +
        ((_UNK_1819857f8 & 0xffffffff) * (uVar22 & 0xffffffff) +
         uVar5 * (_UNK_1819857e8 & 0xffffffff) << 0x20)) -
       ((auVar18._8_8_ & 0xffffffff) * (ulonglong)_UNK_181985868 +
        ((_UNK_181985878 & 0xffffffff) * (ulonglong)auVar18._8_4_ +
         (auVar18._8_8_ >> 0x20) * (ulonglong)_UNK_181985868 << 0x20) +
       (auVar29._8_8_ & 0xffffffff) * (ulonglong)_UNK_181985848 +
       ((_UNK_181985858 & 0xffffffff) * (uVar22 & 0xffffffff) + uVar5 * _UNK_181985848 << 0x20) +
       (_UNK_181985828 & 0xffffffff) * (uVar22 & 0xffffffff) +
       ((_UNK_181985838 & 0xffffffff) * (uVar22 & 0xffffffff) +
        uVar5 * (_UNK_181985828 & 0xffffffff) << 0x20))) + _UNK_181985888;
  _DAT_183270400 = _DAT_183270340 ^ _DAT_183270520 ^ auVar43._0_8_;
  _DAT_1832703d8 = (_DAT_1832703d8 ^ _DAT_183270520) + auVar43._0_8_ ^ 0x7376feadb4e9ad83;
  _DAT_1832703b0 =
       (_DAT_183270648 * -0x59a7bb59e43df0d9 ^ _DAT_1832703d8) + _DAT_183270520 ^ _DAT_1832703d8;
  uVar5 = (uStack0000000000000090 ^ _DAT_1832703f0) + uStack0000000000000090 + _DAT_1832705d0;
  uVar22 = (_DAT_181984530 ^ _DAT_1832705d0) + _DAT_1832703f0 + _DAT_181984530;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uStack0000000000000090 ^ _DAT_1832703f0;
  uVar22 = (uVar22 * 0x2000 | uVar22 >> 0x33) ^ _DAT_181984530 ^ _DAT_1832705d0;
  _DAT_183270648 = auVar43._0_8_;
  _DAT_183270400 =
       func_0x00018aca58c0((uVar22 << 0x1d | uVar22 >> 0x23) - (_DAT_1832703f0 + _DAT_181984530) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uStack0000000000000090 + _DAT_1832705d0));
  _DAT_183270318 = _DAT_183270310 ^ _DAT_183270400 * -0x11d3865578e4cb53 ^ 0x6d243927e5302d17;
  _DAT_1832706a8 =
       (_DAT_1832706a8 * -0x5e5eb728608ec5cf ^ _DAT_183270318) +
       _DAT_183270400 * -0x11d3865578e4cb53;
  _DAT_183270318 = _DAT_1832706a8 ^ _DAT_183270318;
  _DAT_183270310 = 0;
  uVar22 = auVar43._0_8_ ^ 0x84222325;
  uVar5 = ((_DAT_183270500 ^ uVar22) + (uVar22 & _DAT_183270500) * 2) * -_DAT_183270470;
  uVar5 = (uVar5 | _DAT_1832706d8) + (uVar5 & _DAT_1832706d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832704b0 = func_0x00018aca58c0((uVar22 | uVar5) + (uVar5 & uVar22));
  uVar14 = (uint)(auVar43._0_8_ >> 0x20);
  auVar37._8_4_ = (int)auVar43._0_8_;
  auVar37._0_8_ = auVar43._0_8_;
  auVar37._12_4_ = uVar14;
  auVar18 = auVar37 ^ ZEXT816(0);
  auVar37 = auVar37 | ZEXT816(0);
  _uStack0000000000000070 = auVar18._0_8_;
  uVar4 = _uStack0000000000000070;
  uVar5 = _uStack0000000000000070 & 0xffffffff;
  uVar22 = _uStack0000000000000070 & 0xffffffff;
  uVar8 = _uStack0000000000000070 >> 0x20;
  uVar13 = SUB164(auVar43 ^ auVar40,0);
  uStack0000000000000070 = auVar18._0_4_;
  uVar7 = _DAT_1832704b0 << 0x20 | _DAT_1832704b0 >> 0x20;
  uVar10 = auVar37._0_4_;
  uVar8 = (((ulonglong)uVar13 * (ulonglong)_DAT_1819858d0 +
            ((ulonglong)_DAT_181985920 * (ulonglong)uVar13 +
             (SUB168(auVar43 ^ auVar40,0) >> 0x20) * (ulonglong)_DAT_1819858d0 << 0x20) +
            _DAT_181985900 * uVar22 + (_DAT_181985910 * uVar5 + uVar8 * _DAT_181985900 << 0x20) +
           (ulonglong)_DAT_181985890 * (auVar43._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_1819858a0 * (auVar43._0_8_ & 0xffffffff) +
            (ulonglong)uVar14 * (ulonglong)_DAT_181985890 << 0x20)) -
          ((ulonglong)uStack0000000000000070 * (_DAT_1819859b0 & 0xffffffff) +
           ((ulonglong)_DAT_1819859c0 * (ulonglong)uStack0000000000000070 +
            (uVar4 >> 0x20) * (_DAT_1819859b0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar10 * (_DAT_181985990 & 0xffffffff) +
           ((ulonglong)_DAT_1819859a0 * (ulonglong)uVar10 +
            (auVar37._0_8_ >> 0x20) * (_DAT_181985990 & 0xffffffff) << 0x20) +
          (auVar43._0_8_ & 0xffffffff) * (ulonglong)_DAT_181985960 +
          ((ulonglong)uVar14 * (ulonglong)_DAT_181985960 +
           (auVar43._0_8_ & 0xffffffff) * (ulonglong)_DAT_181985950 << 0x20))) + 0xd8d8ce0db21f3fb8;
  _DAT_183270548 = _DAT_1832706c8 ^ uVar7 ^ uVar8;
  _DAT_1832703d0 = (_DAT_1832703d0 ^ uVar7) + uVar8 ^ 0xda50bbd0b4ab7948;
  _DAT_183270390 = (_DAT_183270390 * -0x27e992c39ba2b9d ^ _DAT_1832703d0) + uVar7;
  _DAT_183270370 = _DAT_183270390 ^ _DAT_1832703d0;
  uVar22 = in_stack_00000098 ^ 0x84222325;
  uVar5 = ((_DAT_1832703e8 ^ uVar22) + (uVar22 & _DAT_1832703e8) * 2) * (uVar8 - _DAT_183270690);
  uVar5 = (uVar5 | _DAT_183270440) + (uVar5 & _DAT_183270440);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832706e0 = uVar8;
  _DAT_183270480 = func_0x00018aca58c0((uVar22 ^ uVar8 | uVar5) + (uVar5 & (uVar22 ^ uVar8)));
  uVar5 = _DAT_183270480 * 0x5e84327d55d8778d & 0x3ffffffffffff;
  _DAT_1832706e0 = in_stack_00000098 + uVar8 + (uVar8 & in_stack_00000098) * -2;
  _DAT_183270688 = (_DAT_183270688 ^ uVar5) + _DAT_1832706e0 ^ 0xfbd852541fb917df;
  _DAT_183270548 = (_DAT_183270548 * -0x18a27f18ea20ca43 ^ _DAT_183270688) + uVar5;
  _DAT_1832705d0 = _DAT_183270548 ^ _DAT_183270688;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x8e00,0x18d);
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva accb390 (image 18accb390) =====

void FUN_18accb390(void)

{
  return;
}



// ===== continuation @ rva acc5610 (image 18acc5610) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acc5610(void)

{
  FUN_190ddce00();
  (*_DAT_18198cb08)();
  return;
}



// ===== continuation @ rva accec36 (image 18accec36) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18accec36(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18198c418)();
  return;
}



// ===== continuation @ rva acce05e (image 18acce05e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acce05e(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd9df0(in_stack_00000030,&stack0x00000068,*_DAT_18301ee50 + 0x14753,
                *_DAT_18301ee50 + 0x2751,0xd47);
  (*_DAT_18198c6f8)();
  return;
}



// ===== continuation @ rva acd0200 (image 18acd0200) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd0200(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18198ad08)();
  return;
}



// ===== continuation @ rva accf72e (image 18accf72e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18accf72e(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd9df0(in_stack_00000030,&stack0x00000068,*_DAT_18301ee50 + 0x147fe,
                *_DAT_18301ee50 + 0x2751,0xd4a);
  (*_DAT_181989d38)();
  return;
}



// ===== continuation @ rva acc9cc4 (image 18acc9cc4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acc9cc4(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18198c0b8)();
  return;
}



// ===== continuation @ rva acc9709 (image 18acc9709) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acc9709(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x14db,0x4f);
  (*_DAT_18198c3f8)();
  return;
}



// ===== continuation @ rva acd3baf (image 18acd3baf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd3baf(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_18198d7b8)();
  return;
}



// ===== continuation @ rva acd2256 (image 18acd2256) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18acd2256(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva accc444 (image 18accc444) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18accc444(void)

{
  (*_DAT_18198da38)();
  return;
}



// ===== continuation @ rva accfe74 (image 18accfe74) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18accfe74(void)

{
  (*_DAT_18198d6f8)();
  return;
}



// ===== continuation @ rva acd33af (image 18acd33af) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18acd33af(void)

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



// ===== continuation @ rva acd86cc (image 18acd86cc) =====

void FUN_18acd86cc(void)

{
  return;
}



// ===== continuation @ rva acd3df4 (image 18acd3df4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd3df4(void)

{
  FUN_190ddce00();
  (*_DAT_18198ec88)();
  return;
}



// ===== continuation @ rva acd8743 (image 18acd8743) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd8743(void)

{
  (*_DAT_18198f3f8)();
  return;
}



// ===== continuation @ rva acd7111 (image 18acd7111) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18acd7111(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva acd854a (image 18acd854a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd854a(void)

{
  (*_DAT_18198f358)();
  return;
}



// ===== continuation @ rva acd86bd (image 18acd86bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd86bd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_18198f468)();
  return;
}



// ===== continuation @ rva acd7027 (image 18acd7027) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18acd7027(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva acd74e2 (image 18acd74e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd74e2(void)

{
  FUN_190dd72e0();
  (*_DAT_18198edc8)();
  return;
}



// ===== continuation @ rva acd6f4a (image 18acd6f4a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18acd6f4a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva acd8759 (image 18acd8759) =====

void FUN_18acd8759(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva acd7273 (image 18acd7273) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18acd7273(void)

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



// ===== continuation @ rva acd72c4 (image 18acd72c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd72c4(void)

{
  FUN_190dd72e0();
  (*_DAT_18198ee88)();
  return;
}



// ===== continuation @ rva acd8a0b (image 18acd8a0b) =====

void FUN_18acd8a0b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018acd8a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181990450 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva acd89b6 (image 18acd89b6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018acd89ed */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18acd89b6(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva aceaf23 (image 18aceaf23) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aceaf23(void)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  ulonglong uVar8;
  int unaff_R14D;
  ulonglong uVar9;
  ulonglong uVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar13;
  uint uVar14;
  undefined1 unaff_XMM15 [16];
  
  *(undefined4 *)(unaff_RBP + 0x4c) = unaff_ESI;
  *(int *)(unaff_RBP + 0x50) = unaff_R14D << 6;
  uVar7 = _DAT_1832719f8;
  uVar9 = _DAT_183271880;
  uVar6 = _DAT_1832719f8 ^ 0x3fa60015;
  *(bool *)(unaff_RBP + 0x60) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar8 = uVar9 ^ 0xebd4de91;
  lVar5 = uVar9 + 0x3fa60015;
  uVar9 = uVar6 + lVar5;
  uVar12 = uVar8 + uVar7 + 0xebd4de91;
  uVar6 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar6;
  uVar8 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar8;
  _DAT_1832717b8 =
       func_0x00018ad03100((uVar8 << 0x1d | uVar8 >> 0x23) - (uVar7 + 0xebd4de91) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar5);
  uVar9 = _DAT_1832717b8 << 0x1b | _DAT_1832717b8 >> 0x25;
  uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar9;
  _DAT_183271a10 = (_DAT_183271a10 ^ uVar9) + 0xfbd4ffb1 ^ 0xe5f74ac7734e69d3;
  _DAT_183271998 = (_DAT_183271998 * 0x779140c17c43ce83 ^ _DAT_183271a10) + uVar9;
  _DAT_1832715a8 = _DAT_183271998 ^ _DAT_183271a10;
  _DAT_183271760 = 0xfbd4ffb1;
  _DAT_183271870 = func_0x00018ad03100(_DAT_183271928 + 0xff750060230013ffU ^ 0x27);
  _DAT_1832718d8 =
       (_DAT_1832718d8 ^ _DAT_183271870 & 0xffffffffffff) - 0x24deb600 ^ 0x393c43067071e3ed;
  _DAT_183271528 =
       (_DAT_183271528 * -0x6d6e6c2a2ff6903f ^ _DAT_1832718d8) + (_DAT_183271870 & 0xffffffffffff);
  _DAT_183271ad0 = _DAT_183271528 ^ _DAT_1832718d8;
  _DAT_1832716d8 = 0xdb214a00;
  uVar9 = (_DAT_1832719b8 ^ _DAT_181990ef0) + _DAT_183271958 + 0x842224e5;
  uVar7 = (_DAT_183271958 ^ _UNK_181990ef8) + _DAT_1832719b8 + 0x24deb600;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832719b8 ^ _DAT_181990ef0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271958 ^ _UNK_181990ef8;
  _DAT_183271640 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832719b8 + 0x24deb600) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271958 + 0x842224e5));
  uVar9 = _DAT_183271640 ^ 0x11dbe028000;
  uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar9;
  _DAT_183271600 = _DAT_183271888 ^ uVar9 ^ 0x24debdc0;
  _DAT_183271860 = (_DAT_183271860 ^ uVar9) + 0x24debdc0 ^ 0x5bd2ec68c405b6a;
  _DAT_183271720 = (_DAT_183271720 * 0x23c99e6753ef7d17 ^ _DAT_183271860) + uVar9;
  _DAT_1832718c8 = _DAT_183271720 ^ _DAT_183271860;
  _DAT_183271970 = 0x24debdc0;
  uVar9 = (~_DAT_183271a00 + 0xdb214a01) *
          ((_DAT_183271a68 ^ 0xa0fc9ee5) + (ulonglong)((uint)_DAT_183271a68 & 0xa0fc9ee5) * 2);
  uVar9 = (uVar9 | _DAT_183271738) + (uVar9 & _DAT_183271738);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_1832718d8 = func_0x00018ad03100((uVar9 | 0x7bddd4e5) + (ulonglong)((uint)uVar9 & 0x7bddd4e5))
  ;
  _DAT_183271758 = (_DAT_183271758 ^ _DAT_1832718d8 ^ 0x24debdc0) + 0x1000007c0 ^ 0xab0e99921fb8b72f
  ;
  _DAT_183271a10 =
       (_DAT_183271a10 * 0x471f95f1d9458387 ^ _DAT_183271758) + (_DAT_1832718d8 ^ 0x24debdc0);
  _DAT_1832716e8 = _DAT_183271a10 ^ _DAT_183271758;
  _DAT_1832717c0 = 0x7c0;
  uVar9 = (_DAT_1832719d8 ^ _DAT_181990f00) + _DAT_183271980 + 0x84222325;
  uVar7 = (_DAT_183271980 ^ _UNK_181990f08) + _DAT_1832719d8 + 0xfca1f358;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832719d8 ^ _DAT_181990f00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271980 ^ _UNK_181990f08;
  _DAT_183271808 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832719d8 + 0xfca1f358) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271980 + 0x84222325));
  _DAT_1832719a8 = (_DAT_1832719a8 ^ _DAT_183271808) - 0xfca1f358 ^ 0xcc98e6d9952dd6b4;
  _DAT_183271af8 = (_DAT_183271af8 * 0x4df8ef9e8b9fee59 ^ _DAT_1832719a8) + _DAT_183271808;
  _DAT_183271a38 = _DAT_183271af8 ^ _DAT_1832719a8;
  _DAT_183271890 = 0x35e0ca8;
  uVar9 = (_DAT_183271a08 ^ _DAT_181990f10) + _DAT_1832719e8 + 0x842224e5;
  uVar7 = (_DAT_1832719e8 ^ _UNK_181990f18) + _DAT_183271a08 + 0xfca1f358;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271a08 ^ _DAT_181990f10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832719e8 ^ _UNK_181990f18;
  _DAT_183271a50 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271a08 + 0xfca1f358) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1832719e8 + 0x842224e5));
  uVar9 = _DAT_183271a50 & 0xfffffffffffff800;
  uVar7 = uVar9 >> 1 | uVar9;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar9 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar9;
  _DAT_1832716d8 = _DAT_1832715a0 ^ uVar9 ^ 0xfca1fb18;
  _DAT_183271a10 = (_DAT_183271a10 ^ uVar9) + 0xfca1fb18 ^ 0x376b54c08e7a3e40;
  _DAT_183271648 = (_DAT_183271648 * -0xc40ed2b3b2189f ^ _DAT_183271a10) + uVar9;
  _DAT_183271668 = _DAT_183271648 ^ _DAT_183271a10;
  _DAT_1832719e0 = 0xfca1fb18;
  uVar9 = (_DAT_183271570 ^ _DAT_181990f20) + _DAT_183271a98 + 0x7883d83d;
  uVar7 = (_DAT_183271a98 ^ _UNK_181990f28) + _DAT_183271570 + 0x35e0ca8;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271570 ^ _DAT_181990f20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271a98 ^ _UNK_181990f28;
  _DAT_183271938 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271570 + 0x35e0ca8) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271a98 + 0x7883d83d));
  uVar3 = ~(uint)_DAT_183271938 & 0xfca1fb18;
  uVar9 = (ulonglong)(uVar3 >> 0x15) | (ulonglong)uVar3 << 0x2b;
  _DAT_183271770 = _DAT_1832715d0 ^ uVar9 ^ 0x1000007c0;
  _DAT_183271570 = (_DAT_183271570 ^ uVar9) + 0x1000007c0 ^ 0x64d2f8aebf9f8e27;
  _DAT_183271548 = (_DAT_183271548 * 0x54276ee59796aca5 ^ _DAT_183271570) + uVar9;
  _DAT_183271718 = _DAT_183271548 ^ _DAT_183271570;
  _DAT_183271750 = 0x7c0;
  _DAT_183271858 = func_0x00018ad03100(_DAT_183271a80 + 0xff71ff65e4ffc1ff ^ 0x8b);
  uVar9 = _DAT_183271858 >> 1 | _DAT_183271858;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = 0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183271858;
  _DAT_1832719d0 = (_DAT_1832719d0 ^ uVar9) - 0x2264b100 ^ 0x514c7d972b7bd834;
  _DAT_183271a70 = (_DAT_183271a70 * 0x52827e899f29c967 ^ _DAT_1832719d0) + uVar9;
  _DAT_1832715d8 = _DAT_183271a70 ^ _DAT_1832719d0;
  _DAT_183271760 = 0xdd9b4f00;
  uVar9 = (~_DAT_183271730 + 0xdd9b4f01) *
          ((_DAT_183271818 ^ 0xa6469be5) + (ulonglong)((uint)_DAT_183271818 & 0xa6469be5) * 2);
  uVar9 = (uVar9 | _DAT_183271a80) + (uVar9 & _DAT_183271a80);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183271a28 = func_0x00018ad03100((uVar9 | 0x7bddd4e5) + (ulonglong)((uint)uVar9 & 0x7bddd4e5))
  ;
  uVar9 = _DAT_183271a28 ^ 0xdd9b4f00;
  _DAT_1832719d8 = _DAT_183271630 ^ uVar9 ^ 0x1000007c0;
  _DAT_1832718e8 = (_DAT_1832718e8 ^ uVar9) + 0x1000007c0 ^ 0x51fcca22efa8c5f2;
  _DAT_183271918 = (_DAT_183271918 * 0x5bc959c213eda7cf ^ _DAT_1832718e8) + uVar9;
  _DAT_1832715b8 = 0x7c0;
  uVar9 = (~_DAT_183271a40 + 0x3f1d4d2) *
          ((_DAT_183271678 ^ 0x7ff6dc94) + (ulonglong)((uint)_DAT_183271678 & 0x7ff6dc94) * 2);
  uVar9 = (uVar9 | _DAT_183271a10) + (uVar9 & _DAT_183271a10);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_1832715f8 = func_0x00018ad03100((uVar9 | 0x7c070845) + (ulonglong)((uint)uVar9 & 0x7c070845))
  ;
  uVar9 = _DAT_1832715f8 >> 1 | _DAT_1832715f8;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (ulonglong)
          (~((uint)_DAT_1832715f8 ^
            (0x40 - (uint)(byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 2) & 0xfbd4ffb1) ^ 0x3f1d4d1;
  _DAT_183271a50 = _DAT_1832718f8 ^ uVar9 ^ 0xffc6d482;
  _DAT_1832718b8 = (_DAT_1832718b8 ^ uVar9) + 0xffc6d482 ^ 0x1e435e54eb1f7032;
  _DAT_183271578 = (_DAT_183271578 * 0x64b997629f17d46f ^ _DAT_1832718b8) + uVar9;
  _DAT_183271778 = _DAT_183271578 ^ _DAT_1832718b8;
  _DAT_1832718d8 = 0xffc6d482;
  uVar9 = (_DAT_183271758 ^ _DAT_181990f30) + _DAT_183271a40 + 0x7ff6dc94;
  uVar7 = (_DAT_183271a40 ^ _UNK_181990f38) + _DAT_183271758 + 0x3f1d4d1;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271758 ^ _DAT_181990f30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271a40 ^ _UNK_181990f38;
  _DAT_1832716c0 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271758 + 0x3f1d4d1) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271a40 + 0x7ff6dc94));
  uVar9 = (_DAT_1832716c0 << 0x1b | _DAT_1832716c0 >> 0x25) * -0xffbe1c3a13766e5;
  _DAT_1832718b8 = (_DAT_1832718b8 ^ uVar9) + 0x3d0d491 ^ 0x7f98803e22a1036d;
  _DAT_183271860 = (_DAT_183271860 * -0x7f93e38f9390a143 ^ _DAT_1832718b8) + uVar9;
  _DAT_183271a80 = _DAT_183271860 ^ _DAT_1832718b8;
  _DAT_183271708 = 0x3d0d491;
  uVar9 = (_DAT_183271958 ^ _DAT_181990f40) + _DAT_1832718d8 + 0x7be4f7a7;
  uVar7 = (_DAT_1832718d8 ^ _UNK_181990f48) + _DAT_183271958 + 0xffc6d482;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271958 ^ _DAT_181990f40;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832718d8 ^ _UNK_181990f48;
  _DAT_183271598 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271958 + 0xffc6d482) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1832718d8 + 0x7be4f7a7));
  _DAT_183271ab8 = _DAT_183271598 << 0x39 | _DAT_183271598 >> 7;
  _DAT_183271aa0 = _DAT_183271aa0 ^ _DAT_183271ab8 ^ 0x8e55ea831f410181;
  _DAT_183271978 = (_DAT_183271978 * -0x3030715a81242471 ^ _DAT_183271aa0) + _DAT_183271ab8;
  _DAT_183271aa0 = _DAT_183271978 ^ _DAT_183271aa0;
  _DAT_183271948 = 0;
  _DAT_183271728 = func_0x00018ad03100(_DAT_183271610 ^ 0x1bff7b5b001d72);
  uVar9 = (_DAT_183271728 ^ 0x7c0) & 0x7fffffffffffffff ^ 0x7c0;
  _DAT_1832716d0 = _DAT_1832715e0 ^ uVar9 ^ 0x7c0;
  _DAT_1832716c8 = (_DAT_1832716c8 ^ uVar9) + 0x7c0 ^ 0x3b2ab4c0f90b37d;
  _DAT_183271ae8 = (_DAT_183271ae8 * -0x519862d5ed696619 ^ _DAT_1832716c8) + uVar9;
  _DAT_183271850 = _DAT_183271ae8 ^ _DAT_1832716c8;
  _DAT_183271528 = 0x7c0;
  uVar9 = (_DAT_1832717e8 ^ _DAT_181990f50) + _DAT_183271588 + 0x7ff6dc94;
  uVar7 = (_DAT_183271588 ^ _UNK_181990f58) + _DAT_1832717e8 + 0xffffffff;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832717e8 ^ _DAT_181990f50;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271588 ^ _UNK_181990f58;
  _DAT_1832715e0 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832717e8 + 0xffffffff) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271588 + 0x7ff6dc94));
  uVar9 = _DAT_1832715e0 - (_DAT_1832715e0 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1832715e0;
  _DAT_183271a20 = (_DAT_183271a20 ^ uVar9) + 0x42b004e ^ 0xd5103650e1af4ff8;
  _DAT_183271a00 = (_DAT_183271a00 * 0x262b0f6f6e4dc0cb ^ _DAT_183271a20) + uVar9;
  _DAT_183271820 = _DAT_183271a00 ^ _DAT_183271a20;
  _DAT_1832718a8 = 0x42b004e;
  _DAT_1832716f0 = func_0x00018ad03100(_DAT_183271af8 + 0xffd4003aa9ff32ff ^ 0x31);
  uVar9 = _DAT_1832716f0 << 0x19 | _DAT_1832716f0 >> 0x27;
  _DAT_1832718b8 = _DAT_1832718b8 ^ uVar9 ^ 0x867b219c0a1276b0;
  _DAT_183271598 = (_DAT_183271598 * 0x453b9e4d7a598937 ^ _DAT_1832718b8) + uVar9;
  _DAT_183271620 = _DAT_183271598 ^ _DAT_1832718b8;
  _DAT_1832719d8 = 0;
  _DAT_183271900 = func_0x00018ad03100(_DAT_183271868 ^ 0x20ff8422ffe103);
  _DAT_183271770 = _DAT_183271770 ^ _DAT_183271900 * -0x1ae135662344c999 ^ 0xf2fbec956bfccf07;
  _DAT_183271548 =
       (_DAT_183271548 * -0x18ca648b1835b3e3 ^ _DAT_183271770) +
       _DAT_183271900 * -0x1ae135662344c999;
  _DAT_1832717c8 = _DAT_183271548 ^ _DAT_183271770;
  _DAT_1832719c0 = 0;
  uVar9 = (_DAT_183271780 * -0x842224e5 | _DAT_183271568) +
          (_DAT_183271780 * -0x842224e5 & _DAT_183271568);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_1832716c8 = func_0x00018ad03100((uVar9 | 0x842224e5) + (ulonglong)((uint)uVar9 & 0x842224e5))
  ;
  _DAT_183271708 = _DAT_1832719e8 ^ _DAT_1832716c8 ^ 0x7c0;
  _DAT_183271ad0 = (_DAT_183271ad0 ^ _DAT_1832716c8) + 0x7c0 ^ 0x86eb34100f6afec2;
  _DAT_1832716b0 = (_DAT_1832716b0 * -0x7eda305a7f65ff73 ^ _DAT_183271ad0) + _DAT_1832716c8;
  _DAT_1832717b8 = _DAT_1832716b0 ^ _DAT_183271ad0;
  _DAT_183271a98 = 0x7c0;
  uVar3 = *(uint *)(unaff_RBP + 0x50);
  uVar7 = (ulonglong)uVar3;
  auVar11._8_8_ = _UNK_180144c38;
  auVar11._0_8_ = uVar7 ^ 0x84222325;
  auVar10 = pshufb(auVar11 ^ _DAT_181990f60,unaff_XMM15);
  uVar6 = auVar10._8_8_ + auVar10._0_8_;
  uVar9 = uVar6 + _DAT_183271a18;
  if (auVar10._4_4_ < 0) {
    uVar9 = _DAT_1832717b0 ^ uVar6;
  }
  _DAT_183271a60 = func_0x00018ad03100(SUB161(auVar11 ^ _DAT_181990f60,5) ^ uVar9);
  uVar3 = uVar3 & 0x7c0;
  uVar6 = (ulonglong)uVar3;
  _DAT_183271690 = (_DAT_183271690 ^ ~_DAT_183271a60 & uVar7) + uVar6 ^ 0xd47f1c64c14a87d7;
  _DAT_183271700 =
       (_DAT_183271700 * -0x3e42193fab14d407 ^ _DAT_183271690) + (~_DAT_183271a60 & uVar7);
  _DAT_1832715f8 = _DAT_183271700 ^ _DAT_183271690;
  *(uint *)(unaff_RBP + 0x50) = uVar3;
  plVar2 = *(longlong **)(unaff_RBP + 0x20);
  _DAT_183271720 = uVar6;
  lVar5 = (**(code **)(*plVar2 + 0x6f0))(plVar2,uVar7,0);
  *(int *)(unaff_RBP + 0x80) = (int)*(char *)(lVar5 + *(int *)(unaff_RBP + 0x88));
  (**(code **)(*plVar2 + 0x6f8))(plVar2);
  uVar4 = *(uint *)(unaff_RBP + 0x80);
  uVar9 = (~_DAT_1832718e8 + 0x7ad8a80c) *
          ((_DAT_183271540 ^ 0x809b16be) + (ulonglong)((uint)_DAT_183271540 & 0x809b16be) * 2);
  uVar9 = (uVar9 | _DAT_183271930) + (uVar9 & _DAT_183271930);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183271630 = func_0x00018ad03100((uVar9 | 0xfa43beb5) + (ulonglong)((uint)uVar9 & 0xfa43beb5))
  ;
  _DAT_1832719c0 = (_DAT_1832719c0 ^ _DAT_183271630) + 0x7ef9bd9b ^ 0x67e99995fee7653c;
  _DAT_183271a00 = (_DAT_183271a00 * -0x476c678cbf0da21d ^ _DAT_1832719c0) + _DAT_183271630;
  _DAT_183271778 = _DAT_183271a00 ^ _DAT_1832719c0;
  _DAT_1832718e0 = 0x7ef9bd9b;
  uVar9 = (~_DAT_183271aa8 + 0x73385507) *
          ((_DAT_183271700 ^ 0x4041076e) + (ulonglong)((uint)_DAT_183271700 & 0x4041076e) * 2);
  uVar9 = (uVar9 | _DAT_1832717e8) + (uVar9 & _DAT_1832717e8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_1832718c0 = func_0x00018ad03100((uVar9 | 0x33795268) + (ulonglong)((uint)uVar9 & 0x33795268))
  ;
  _DAT_1832719f0 =
       (_DAT_1832719f0 ^ _DAT_1832718c0 & 0x7fffffffffffffff) + 0xb75b714d ^ 0x721a14b70bc47a7c;
  _DAT_1832718a8 =
       (_DAT_1832718a8 * 0x3b54c99491a16795 ^ _DAT_1832719f0) +
       (_DAT_1832718c0 & 0x7fffffffffffffff);
  _DAT_1832717c0 = _DAT_1832718a8 ^ _DAT_1832719f0;
  _DAT_1832719e8 = 0xb75b714d;
  _DAT_183271768 = func_0x00018ad03100(_DAT_183271858 + 0x2c00e06d0052ff ^ 0x9f);
  _DAT_183271818 = (_DAT_183271818 ^ _DAT_183271768 ^ 0x65770fb2) - 0x65770fb2 ^ 0x3cfdb8f321d0f665;
  _DAT_183271578 =
       (_DAT_183271578 * -0x71964cfcbfbf760f ^ _DAT_183271818) + (_DAT_183271768 ^ 0x65770fb2);
  _DAT_183271a98 = _DAT_183271578 ^ _DAT_183271818;
  _DAT_183271650 = 0x9a88f04e;
  uVar9 = (_DAT_183271a90 ^ _DAT_181990f70) + _DAT_183271630 + 0xe1552cd4;
  uVar7 = (_DAT_183271630 ^ _UNK_181990f78) + _DAT_183271a90 + 0x9a88f04e;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271a90 ^ _DAT_181990f70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271630 ^ _UNK_181990f78;
  _DAT_183271a10 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271a90 + 0x9a88f04e) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271630 + 0xe1552cd4));
  uVar9 = _DAT_183271a10 >> 1 | _DAT_183271a10;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_183271a10;
  _DAT_1832716e0 = _DAT_1832716e8 ^ uVar9 ^ 0x10000003f;
  _DAT_183271780 = (_DAT_183271780 ^ uVar9) + 0x10000003f ^ 0xf1b7b3d61ef524de;
  _DAT_183271a68 = (_DAT_183271a68 * 0x7b77ef124cc6c8b3 ^ _DAT_183271780) + uVar9;
  _DAT_183271a38 = _DAT_183271a68 ^ _DAT_183271780;
  _DAT_183271688 = 0x3f;
  uVar9 = (_DAT_1832718d8 ^ _DAT_181990f80) + _DAT_183271670 + 0x84222325;
  uVar7 = (_DAT_183271670 ^ _UNK_181990f88) + _DAT_1832718d8 + 0x534c026e;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832718d8 ^ _DAT_181990f80;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271670 ^ _UNK_181990f88;
  _DAT_1832715b0 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832718d8 + 0x534c026e) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271670 + 0x84222325));
  _DAT_183271a20 = _DAT_183271a20 - 0x534c026e ^ 0x406cefca78b3836c;
  _DAT_183271a80 = _DAT_183271a18 * -0x6de5066caa8a44c3;
  _DAT_183271a18 = _DAT_183271a80 ^ _DAT_183271a20;
  _DAT_183271520 = 0xacb3fd92;
  uVar9 = (_DAT_183271528 ^ _DAT_181990f90) + _DAT_183271718 + 0x8422231a;
  uVar7 = (_DAT_183271718 ^ _UNK_181990f98) + _DAT_183271528 + 0x534c026e;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271528 ^ _DAT_181990f90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271718 ^ _UNK_181990f98;
  _DAT_183271798 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271528 + 0x534c026e) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271718 + 0x8422231a));
  _DAT_183271738 = _DAT_1832717d0 ^ _DAT_183271798 ^ 0x534c02ad;
  _DAT_183271908 = (_DAT_183271908 ^ _DAT_183271798) + 0x534c02ad ^ 0xe7de7c8a5f29723;
  _DAT_183271530 = (_DAT_183271530 * -0x19f2144009c890cf ^ _DAT_183271908) + _DAT_183271798;
  _DAT_1832717e8 = _DAT_183271530 ^ _DAT_183271908;
  _DAT_183271760 = 0x534c02ad;
  uVar9 = (_DAT_183271ab0 ^ _DAT_181990fa0) + _DAT_183271950 + 0xd76e2188;
  uVar7 = (_DAT_183271950 ^ _UNK_181990fa8) + _DAT_183271ab0 + 0xacb3fd92;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271ab0 ^ _DAT_181990fa0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271950 ^ _UNK_181990fa8;
  _DAT_183271718 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271ab0 + 0xacb3fd92) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271950 + 0xd76e2188));
  uVar9 = (_DAT_183271718 ^ 0x31a273baf57faa) & 0x3fffffffffffff ^ 0xacb3fd92;
  _DAT_183271530 = _DAT_183271740 ^ uVar9 ^ 0x10000003f;
  _DAT_1832716c8 = (_DAT_1832716c8 ^ uVar9) + 0x10000003f ^ 0xc72b16f8173587fe;
  _DAT_1832718b0 = (_DAT_1832718b0 * 0x45968af4df26fbaf ^ _DAT_1832716c8) + uVar9;
  _DAT_1832716f8 = _DAT_1832718b0 ^ _DAT_1832716c8;
  _DAT_183271a70 = 0x3f;
  uVar9 = (~_DAT_183271ae8 + 0xc2b84720) *
          ((_DAT_183271950 ^ 0x84222325) + (ulonglong)((uint)_DAT_183271950 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_1832719c8) + (uVar9 & _DAT_1832719c8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183271728 = func_0x00018ad03100((uVar9 | 0x469a643a) + (ulonglong)((uint)uVar9 & 0x469a643a))
  ;
  _DAT_1832717d0 = (_DAT_1832717d0 ^ _DAT_183271728) - 0xc2b8471f ^ 0xa915c2b8a2044183;
  _DAT_183271a78 = (_DAT_183271a78 * 0x6754d51faa289145 ^ _DAT_1832717d0) + _DAT_183271728;
  _DAT_1832718f0 = _DAT_183271a78 ^ _DAT_1832717d0;
  _DAT_1832715b0 = 0x3d47b8e1;
  _DAT_1832715f8 = func_0x00018ad03100(_DAT_183271750 + 0x1bffc6030075ffU ^ 0xd2);
  uVar9 = (_DAT_1832715f8 & 0xffffffffffe00000) << 8 | _DAT_1832715f8 >> 0x38;
  _DAT_183271830 = _DAT_183271848 ^ uVar9 ^ 0xc2b8475e;
  _DAT_183271620 = (_DAT_183271620 ^ uVar9) + 0xc2b8475e ^ 0x916e586b65ef6662;
  _DAT_183271530 = (_DAT_183271530 * -0x77f2d7aa61fdb833 ^ _DAT_183271620) + uVar9;
  _DAT_183271718 = _DAT_183271530 ^ _DAT_183271620;
  _DAT_183271540 = 0xc2b8475e;
  _DAT_183271a30 = func_0x00018ad03100(_DAT_183271a30 + 0x53004d2f007fff ^ 0x33);
  uVar9 = (_DAT_183271a30 ^ 0x5af1e182a0e8729f) & 0x7fffffffffffffff;
  _DAT_1832719a8 = (_DAT_1832719a8 ^ uVar9) + 0xc9a2ccd6 ^ 0x224d6f5c6976803;
  _DAT_183271500 = (_DAT_183271500 * -0x3ad4b9df40cab71f ^ _DAT_1832719a8) + uVar9;
  _DAT_1832719e8 = _DAT_183271500 ^ _DAT_1832719a8;
  _DAT_183271680 = 0xc9a2ccd6;
  uVar9 = (_DAT_183271910 ^ _DAT_181990fb0) + _DAT_1832716a0 + 0xb2770dcd;
  uVar7 = (_DAT_1832716a0 ^ _UNK_181990fb8) + _DAT_183271910 + 0x36552ee8;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271910 ^ _DAT_181990fb0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832716a0 ^ _UNK_181990fb8;
  _DAT_183271870 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271910 + 0x36552ee8) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1832716a0 + 0xb2770dcd));
  _DAT_1832719b8 =
       (_DAT_183271870 ^ 0xb880c220ea83240) << 0xb | (_DAT_183271870 ^ 0xb880c220ea83240) >> 0x35;
  _DAT_183271780 = _DAT_183271780 ^ _DAT_1832719b8 ^ 0x23f9c017c98a9e13;
  _DAT_1832719a8 = (_DAT_1832719a8 * -0x2296b8763de5c601 ^ _DAT_183271780) + _DAT_1832719b8;
  _DAT_183271a80 = _DAT_1832719a8 ^ _DAT_183271780;
  _DAT_183271ad8 = 0;
  _DAT_1832717c8 = func_0x00018ad03100(_DAT_183271a10 + 0xffe3007bf60021ff ^ 0x5e);
  uVar9 = _DAT_1832717c8 & 0x3ffffffffff;
  _DAT_183271a98 = _DAT_183271878 ^ uVar9 ^ 0x3f;
  _DAT_183271678 = (_DAT_183271678 ^ uVar9) + 0x3f ^ 0xa058682b6faeb95c;
  _DAT_183271628 = (_DAT_183271628 * 0x18e45dabf6baa7bb ^ _DAT_183271678) + uVar9;
  _DAT_183271aa8 = _DAT_183271628 ^ _DAT_183271678;
  _DAT_183271570 = 0x3f;
  uVar9 = (_DAT_183271a70 ^ _DAT_181990fc0) + _DAT_183271740 + 0xfadb9ebe;
  uVar7 = (_DAT_183271740 ^ _UNK_181990fc8) + _DAT_183271a70 + 0xffffffff;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183271a70 ^ _DAT_181990fc0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271740 ^ _UNK_181990fc8;
  _DAT_183271560 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271a70 + 0xffffffff) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271740 + 0xfadb9ebe));
  _DAT_183271a28 = (_DAT_183271a28 ^ _DAT_183271560) + 0x81064264 ^ 0x4a21fce9c2cb339;
  _DAT_183271588 = (_DAT_183271588 * 0x515d4c190ce5b8e5 ^ _DAT_183271a28) + _DAT_183271560;
  _DAT_183271568 = _DAT_183271588 ^ _DAT_183271a28;
  _DAT_1832719d8 = 0x81064264;
  uVar9 = (~_DAT_183271a10 + 0x4b9359c) *
          ((_DAT_183271920 ^ 0x809b16be) + (ulonglong)((uint)_DAT_183271920 & 0x809b16be) * 2);
  uVar9 = (uVar9 | _DAT_183271880) + (uVar9 & _DAT_183271880);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183271568 = func_0x00018ad03100((uVar9 | 0x84222325) + (ulonglong)((uint)uVar9 & 0x84222325))
  ;
  _DAT_183271518 = _DAT_183271518 ^ _DAT_183271568 ^ 0x4b9359b ^ 0x34c9ef9696a62297;
  _DAT_183271620 =
       (_DAT_183271620 * -0x2e41cff519e36c8d ^ _DAT_183271518) + (_DAT_183271568 ^ 0x4b9359b);
  _DAT_183271908 = _DAT_183271620 ^ _DAT_183271518;
  _DAT_183271a48 = 0;
  uVar9 = (_DAT_1832719a8 ^ 0x8422231a) + _DAT_183271860 + 0x8422231a;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832719a8 ^ 0x8422231a;
  uVar7 = ((_DAT_183271860 + _DAT_1832719a8) * 0x2000 | _DAT_183271860 + _DAT_1832719a8 >> 0x33) ^
          _DAT_183271860;
  _DAT_183271860 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_1832719a8 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183271860 + 0x8422231a));
  _DAT_183271550 = _DAT_183271648 ^ _DAT_183271860 ^ 0x3f;
  _DAT_1832717a8 = (_DAT_1832717a8 ^ _DAT_183271860) + 0x3f ^ 0xa1202df498eab4c8;
  _DAT_1832715e8 = (_DAT_1832715e8 * -0x5521b26b4839d709 ^ _DAT_1832717a8) + _DAT_183271860;
  _DAT_183271500 = _DAT_1832715e8 ^ _DAT_1832717a8;
  _DAT_183271a38 = 0x3f;
  auVar10._8_8_ = _UNK_180132e68;
  auVar10._0_8_ = (ulonglong)uVar4 ^ 0x84222325;
  auVar11 = pshufb(auVar10 ^ _DAT_181990fd0,unaff_XMM15);
  uVar7 = auVar11._8_8_ + auVar11._0_8_;
  uVar9 = uVar7 + _DAT_1832719c8;
  if (auVar11._4_4_ < 0) {
    uVar9 = _DAT_1832718d0 ^ uVar7;
  }
  _DAT_183271640 = func_0x00018ad03100(SUB161(auVar10 ^ _DAT_181990fd0,5) ^ uVar9);
  uVar9 = (ulonglong)(~(uint)_DAT_183271640 & uVar4 & 0xffffff80);
  uVar4 = uVar4 & 0x3f;
  uVar8 = (ulonglong)uVar4;
  _DAT_1832716b8 = (_DAT_1832716b8 ^ uVar9) + uVar8 ^ 0xabfb72e1cc880087;
  _DAT_1832716d0 = (_DAT_1832716d0 * 0x4e812feca4910c93 ^ _DAT_1832716b8) + uVar9;
  _DAT_183271908 = _DAT_1832716d0 ^ _DAT_1832716b8;
  uVar7 = uVar8 ^ 0x84222325;
  uVar9 = ((_DAT_183271808 ^ uVar7) + (ulonglong)((uint)_DAT_183271808 & (uint)uVar7) * 2) *
          (uVar6 - _DAT_1832716c8);
  uVar9 = (uVar9 | _DAT_183271538) + (uVar9 & _DAT_183271538);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183271910 = uVar8;
  _DAT_183271668 =
       func_0x00018ad03100((uVar7 ^ uVar6 | uVar9) +
                           (ulonglong)((uint)(uVar7 ^ uVar6) & (uint)uVar9));
  uVar9 = (~(ulonglong)((uint)_DAT_183271668 ^ uVar4 * *(int *)(unaff_RBP + 0x50)) & uVar8) *
          -0x66c01ffccb6c82af;
  _DAT_183271730 = (ulonglong)(uVar4 | uVar3);
  _DAT_183271908 = (_DAT_183271908 ^ uVar9) + _DAT_183271730 ^ 0x1077d4dde99ec6ea;
  _DAT_1832717c8 = (_DAT_1832717c8 * 0x7bb639937e70be67 ^ _DAT_183271908) + uVar9;
  _DAT_1832717f0 = _DAT_1832717c8 ^ _DAT_183271908;
  *(undefined8 *)(unaff_RBP + 0x80) = *(undefined8 *)(unaff_RBP + 0x78);
  uVar1 = *(uint *)(unaff_RBP + 0x70);
  *(uint *)(unaff_RBP + 0x88) = uVar1;
  uVar7 = (ulonglong)uVar1;
  uVar9 = (~_DAT_183271578 + 2) *
          ((uVar7 ^ 0x84222325 ^ _DAT_183271900) +
          (ulonglong)((uint)_DAT_183271900 & (uint)(uVar7 ^ 0x84222325)) * 2);
  uVar9 = (uVar9 | _DAT_183271900) + (uVar9 & _DAT_183271900);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_1832719c0 =
       func_0x00018ad03100((uVar7 ^ 0x84222324 | uVar9) +
                           (ulonglong)((uint)(uVar7 ^ 0x84222324) & (uint)uVar9));
  uVar13 = uVar1 & _DAT_18001a990;
  uVar14 = uVar1 ^ _DAT_18001a990;
  lVar5 = ((ulonglong)uVar1 * (ulonglong)_DAT_181991070 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_181991060;
  uVar9 = _DAT_1832719c0 - (_DAT_1832719c0 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = ((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1832719c0) >> 2 | _DAT_1832719c0 << 0x3e;
  _DAT_183271a08 =
       ((((ulonglong)uVar14 * (ulonglong)_DAT_181991050 << 0x20) +
         (ulonglong)uVar14 * (ulonglong)_DAT_181991040 +
         ((ulonglong)(uVar1 | _DAT_18001a990) * (ulonglong)_DAT_181991030 << 0x20) +
         (ulonglong)(uVar1 | _DAT_18001a990) * (ulonglong)_DAT_181991020 +
         ((ulonglong)uVar13 * (ulonglong)_DAT_181991010 << 0x20 |
         (ulonglong)uVar13 * (ulonglong)_DAT_181991000) +
         ((ulonglong)uVar1 * (ulonglong)_DAT_181990ff0 << 0x20) +
         (ulonglong)uVar1 * (ulonglong)_DAT_181990fe0 + lVar5) -
       (((uVar7 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_1819910e0 +
        (((uVar7 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_1819910f0 +
         (_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_1819910e0 << 0x20) +
        ((ulonglong)uVar14 * (ulonglong)_DAT_1819910d0 << 0x20) +
        (ulonglong)uVar14 * (ulonglong)_DAT_1819910c0 +
        ((ulonglong)uVar13 * (ulonglong)_DAT_1819910b0 << 0x20 |
        (ulonglong)uVar13 * (ulonglong)_DAT_1819910a0) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_181991090 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_181991080 + lVar5)) + 0x67ddff823ed8541e;
  _DAT_1832717a8 = _DAT_183271510 ^ uVar9 ^ _DAT_183271a08;
  _DAT_183271910 = (_DAT_183271910 ^ uVar9) + _DAT_183271a08 ^ 0x82fb5b47acdebc98;
  _DAT_1832716f0 = (_DAT_1832716f0 * -0x6a242c81c31f3547 ^ _DAT_183271910) + uVar9;
  _DAT_1832718d0 = _DAT_1832716f0 ^ _DAT_183271910;
  _DAT_183271a08 = _DAT_183271a08 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x90) = uVar4 | uVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x60)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aceda55 (image 18aceda55) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aceda55(void)

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



// ===== continuation @ rva acedd82 (image 18acedd82) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18acedd82(longlong param_1)

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



// ===== continuation @ rva aced73d (image 18aced73d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aced73d(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aceda9c (image 18aceda9c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aceda9c(void)

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



// ===== continuation @ rva ace334e (image 18ace334e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ace334e(void)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar4;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  undefined4 unaff_R14D;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  ulonglong unaff_XMM11_Qa;
  ulonglong unaff_XMM11_Qb;
  ulonglong unaff_XMM14_Qa;
  ulonglong unaff_XMM14_Qb;
  
  *(undefined4 *)(unaff_RBP + 0x50) = unaff_R14D;
  *(undefined4 *)(unaff_RBP + 0x70) = unaff_EDI;
  *(undefined4 *)(unaff_RBP + -0x10) = unaff_ESI;
  lVar2 = (**(code **)(*unaff_R13 + 0x6f0))();
  *(int *)(unaff_RBP + 0x88) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x90));
  (**(code **)(*unaff_R13 + 0x6f8))();
  uVar4 = *(uint *)(unaff_RBP + 0x88) & *(uint *)(unaff_RBP + 0x80);
  *(uint *)(unaff_RBP + 0x80) = uVar4;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  lVar3 = _DAT_1832718a0 + 0xae51727c;
  lVar2 = _DAT_183271618 + 0x5e71cfb3;
  uVar5 = (_DAT_183271618 ^ unaff_XMM6_Qa) + lVar3;
  uVar6 = (_DAT_1832718a0 ^ unaff_XMM6_Qb) + lVar2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183271618 ^ unaff_XMM6_Qa;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832718a0 ^ unaff_XMM6_Qb;
  *(int *)(unaff_RBP + 0x60) = (int)*(undefined8 *)(unaff_RBP + 0x80);
  _DAT_183271600 =
       func_0x00018ad03100((uVar6 << 0x1d | uVar6 >> 0x23) - lVar2 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  _DAT_1832715c8 = (_DAT_1832715c8 ^ _DAT_183271600) + 0x7e73dffb ^ 0x79934b8e3a98ab21;
  _DAT_183271608 = (_DAT_183271608 * -0x656d1bbbc619b0c3 ^ _DAT_1832715c8) + _DAT_183271600;
  _DAT_183271560 = _DAT_183271608 ^ _DAT_1832715c8;
  _DAT_1832719b8 = 0x7e73dffb;
  uVar5 = (~_DAT_183271950 + 0x3b6b593c) *
          ((_DAT_183271888 ^ unaff_RBX) + (ulonglong)((uint)_DAT_183271888 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_183271818) + (uVar5 & _DAT_183271818);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183271838 = func_0x00018ad03100((uVar5 | 0xbf497a1e) + (ulonglong)((uint)uVar5 & 0xbf497a1e))
  ;
  _DAT_183271a08 = (_DAT_183271a08 ^ _DAT_183271890) - 0x3b6b593b ^ 0xbf0db2164ec6602;
  _DAT_183271630 = (_DAT_183271630 * 0x56af4423eca7dadf ^ _DAT_183271a08) + _DAT_183271890;
  _DAT_183271968 = _DAT_183271630 ^ _DAT_183271a08;
  _DAT_183271680 = 0xc494a6c5;
  uVar5 = (~_DAT_1832717b8 + 0xc494a6c6) *
          ((_DAT_1832715b0 ^ 0xbf497adf) + (ulonglong)((uint)_DAT_1832715b0 & 0xbf497adf) * 2);
  uVar5 = (uVar5 | _DAT_183271508) + (uVar5 & _DAT_183271508);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183271808 = func_0x00018ad03100((uVar5 | 0x7bdddc1a) + (ulonglong)((uint)uVar5 & 0x7bdddc1a))
  ;
  uVar5 = _DAT_183271808 << 5 | _DAT_183271808 >> 0x3b;
  _DAT_183271648 = _DAT_183271828 ^ uVar5 ^ 0x1000000bf;
  _DAT_183271838 = (_DAT_183271838 ^ uVar5) + 0x1000000bf ^ 0xde8b279bc733e3db;
  _DAT_183271a40 = (_DAT_183271a40 * -0x5173bc9b4ddd2efb ^ _DAT_183271838) + uVar5;
  _DAT_1832717f8 = _DAT_183271a40 ^ _DAT_183271838;
  _DAT_183271688 = 0xbf;
  uVar5 = (_DAT_183271ae8 ^ unaff_XMM9_Qa) + _DAT_183271538 + unaff_RBX;
  uVar6 = (_DAT_183271538 ^ unaff_XMM9_Qb) + _DAT_183271ae8 + 0x748bc000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183271ae8 ^ unaff_XMM9_Qa;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271538 ^ unaff_XMM9_Qb;
  _DAT_183271660 =
       func_0x00018ad03100((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271ae8 + 0x748bc000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183271538 + unaff_RBX));
  uVar5 = _DAT_183271660 - (_DAT_183271660 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183271660) << 0x2c | _DAT_183271660 >> 0x14;
  _DAT_1832719f8 = (_DAT_1832719f8 ^ uVar5) - 0x748bc000 ^ 0xe9740ff1152783ba;
  _DAT_183271a20 = (_DAT_183271a20 * -0x64a97bab5a9e7f59 ^ _DAT_1832719f8) + uVar5;
  _DAT_183271950 = _DAT_183271a20 ^ _DAT_1832719f8;
  _DAT_183271588 = 0x8b744000;
  uVar5 = (_DAT_183271920 ^ _DAT_181990be0) + _DAT_183271678 + 0x8422239a;
  uVar6 = (_DAT_183271678 ^ _UNK_181990be8) + _DAT_183271920 + 0x748bc000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183271920 ^ _DAT_181990be0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271678 ^ _UNK_181990be8;
  _DAT_1832715e0 =
       func_0x00018ad03100((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271920 + 0x748bc000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183271678 + 0x8422239a));
  uVar5 = _DAT_1832715e0 - (_DAT_1832715e0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1832715e0;
  _DAT_1832717c0 = _DAT_183271570 ^ uVar5 ^ 0x748bc0bf;
  _DAT_1832718d8 = (_DAT_1832718d8 ^ uVar5) + 0x748bc0bf ^ 0x2d8b086ec6afc8d7;
  _DAT_1832719e0 = (_DAT_1832719e0 * 0x2f19bf28d26622a9 ^ _DAT_1832718d8) + uVar5;
  _DAT_1832718a8 = _DAT_1832719e0 ^ _DAT_1832718d8;
  _DAT_183271810 = 0x748bc0bf;
  _DAT_1832718b8 = func_0x00018ad03100(_DAT_1832717e8 ^ 0x61007595ff52f6);
  uVar5 = (_DAT_1832718b8 ^ 0x3f7cce1dfbbbc000) << 0x2a |
          (_DAT_1832718b8 ^ 0x3f7cce1dfbbbc000) >> 0x16;
  _DAT_183271550 = _DAT_183271880 ^ uVar5 ^ 0x1000000bf;
  _DAT_1832715c0 = (_DAT_1832715c0 ^ uVar5) + 0x1000000bf ^ 0xfd8e090d9a2839ce;
  _DAT_183271980 = (_DAT_183271980 * -0x2df3e01759b5d7b3 ^ _DAT_1832715c0) + uVar5;
  _DAT_183271840 = _DAT_183271980 ^ _DAT_1832715c0;
  _DAT_183271900 = 0xbf;
  uVar5 = (_DAT_183271960 ^ unaff_XMM14_Qa) + _DAT_183271770 + 0x84222325;
  uVar6 = (_DAT_183271770 ^ unaff_XMM14_Qb) + _DAT_183271960 + 0x3a831800;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183271960 ^ unaff_XMM14_Qa;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271770 ^ unaff_XMM14_Qb;
  _DAT_183271918 =
       func_0x00018ad03100((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271960 + 0x3a831800) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183271770 + 0x84222325));
  _DAT_183271aa0 = (_DAT_183271aa0 ^ _DAT_183271918) - 0x3a831800 ^ 0xb284dec4af13f4a7;
  _DAT_183271a70 = (_DAT_183271a70 * 0x240f69e6b45236cf ^ _DAT_183271aa0) + _DAT_183271918;
  _DAT_183271810 = _DAT_183271a70 ^ _DAT_183271aa0;
  _DAT_183271718 = 0xc57ce800;
  uVar5 = (~_DAT_1832718b0 + 0xc57ce801) *
          ((_DAT_183271588 ^ 0xbea13b9a) + (ulonglong)((uint)_DAT_183271588 & 0xbea13b9a) * 2);
  uVar5 = (uVar5 | _DAT_183271770) + (uVar5 & _DAT_183271770);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183271510 = func_0x00018ad03100((uVar5 | 0x7bddd39a) + (ulonglong)((uint)uVar5 & 0x7bddd39a))
  ;
  uVar5 = _DAT_183271510 ^ 0x3a8318bf;
  _DAT_1832719d8 = _DAT_183271ae8 ^ uVar5 ^ 0x1000000bf;
  _DAT_183271a98 = (_DAT_183271a98 ^ uVar5) + 0x1000000bf ^ 0xb112c92ab067a68f;
  _DAT_183271768 = (_DAT_183271768 * 0x47c715dc4d52c351 ^ _DAT_183271a98) + uVar5;
  _DAT_183271a30 = _DAT_183271768 ^ _DAT_183271a98;
  _DAT_183271960 = 0xbf;
  uVar5 = (_DAT_183271818 ^ unaff_XMM11_Qa) + _DAT_1832716e8 + 0xfa51fcde;
  uVar6 = (_DAT_1832716e8 ^ unaff_XMM11_Qb) + _DAT_183271818 + 0xeac54313;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183271818 ^ unaff_XMM11_Qa;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832716e8 ^ unaff_XMM11_Qb;
  _DAT_1832715f0 =
       func_0x00018ad03100((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271818 + 0xeac54313) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832716e8 + 0xfa51fcde));
  uVar5 = _DAT_1832715f0 ^ 0x14329ce8;
  _DAT_1832719e0 = _DAT_183271a60 ^ uVar5 ^ 0x16939230e;
  _DAT_183271720 = (_DAT_183271720 ^ uVar5) + 0x16939230e ^ 0xcb6ae23e8c612a5b;
  _DAT_183271968 = (_DAT_183271968 * 0x2823c88541cb64ed ^ _DAT_183271720) + uVar5;
  _DAT_183271698 = _DAT_183271968 ^ _DAT_183271720;
  _DAT_183271a00 = 0x6939230e;
  _DAT_183271768 = func_0x00018ad03100(_DAT_183271968 + 0xff6b000f4cff6bff ^ 0xe0);
  uVar5 = _DAT_183271768 - (_DAT_183271768 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183271768;
  _DAT_1832719d0 = (_DAT_1832719d0 ^ uVar5) + 0x94b69ce8 ^ 0xed5ec684466de702;
  _DAT_183271660 = (_DAT_183271660 * -0x2de0ee9fe917e45b ^ _DAT_1832719d0) + uVar5;
  _DAT_1832715d8 = _DAT_183271660 ^ _DAT_1832719d0;
  _DAT_1832718b8 = 0x94b69ce8;
  uVar5 = (~_DAT_1832715f0 + 0xd4828627) *
          ((_DAT_183271770 ^ 0x1094bfcd) + (ulonglong)((uint)_DAT_183271770 & 0x1094bfcd) * 2);
  uVar5 = (uVar5 | _DAT_1832719c8) + (uVar5 & _DAT_1832719c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183271698 = func_0x00018ad03100((uVar5 | 0xc41639eb) + (ulonglong)((uint)uVar5 & 0xc41639eb))
  ;
  uVar5 = (_DAT_183271698 ^ 0x7b730c99770cba70) << 0x26 |
          (_DAT_183271698 ^ 0x7b730c99770cba70) >> 0x1a;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar5) & 0x7fffffffffffffff;
  _DAT_1832716b0 = _DAT_183271aa8 ^ uVar5 ^ 0x16939230e;
  _DAT_1832718c8 = (_DAT_1832718c8 ^ uVar5) + 0x16939230e ^ 0x4f7c6b1dff3a8e68;
  _DAT_183271618 = (_DAT_183271618 * 0xd7b7133bd2a9feb ^ _DAT_1832718c8) + uVar5;
  _DAT_183271638 = _DAT_183271618 ^ _DAT_1832718c8;
  _DAT_1832717b0 = 0x6939230e;
  uVar5 = (~_DAT_183271af8 + 0x6939230f) *
          ((_DAT_183271618 ^ 0xed1b002b) + (ulonglong)((uint)_DAT_183271618 & 0xed1b002b) * 2);
  uVar5 = (uVar5 | _DAT_183271920) + (uVar5 & _DAT_183271920);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832715e8 = func_0x00018ad03100((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1832716b8 = _DAT_1832715e8 ^ 0x2b3feb821d08d4c4;
  uVar5 = _DAT_1832716b8 - (_DAT_1832716b8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  _DAT_1832716b8 = (uint)bVar1 + (uint)bVar1 ^ _DAT_1832716b8;
  _DAT_183271a60 = _DAT_183271a60 ^ _DAT_1832716b8 ^ 0x29c825e1cfece44e;
  _DAT_183271798 = (_DAT_183271798 * -0x2db198f2f9f57b5 ^ _DAT_183271a60) + _DAT_1832716b8;
  _DAT_1832715d0 = _DAT_183271798 ^ _DAT_183271a60;
  _DAT_183271ae8 = 0;
  _DAT_1832717c8 = func_0x00018ad03100(_DAT_183271680 ^ 0xfffd00051f0069fc);
  uVar5 = (ulonglong)(~(uint)_DAT_1832717c8 & 0x7e73dffb);
  _DAT_183271678 = (_DAT_183271678 ^ uVar5) + 0x818c2004 ^ 0x713efe55aad813f0;
  _DAT_183271a40 = (_DAT_183271a40 * -0x468f64aab6859bbb ^ _DAT_183271678) + uVar5;
  _DAT_183271a80 = _DAT_183271a40 ^ _DAT_183271678;
  _DAT_183271640 = 0x818c2004;
  uVar5 = (_DAT_183271838 ^ 0x8422239a) + _DAT_1832715a0 + 0x8422239a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183271838 ^ 0x8422239a;
  uVar6 = ((_DAT_1832715a0 + _DAT_183271838) * 0x2000 | _DAT_1832715a0 + _DAT_183271838 >> 0x33) ^
          _DAT_1832715a0;
  _DAT_183271828 =
       func_0x00018ad03100((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183271838 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832715a0 + 0x8422239a));
  uVar5 = _DAT_183271828 & 0x7fffffffffffffff;
  _DAT_183271708 = _DAT_183271610 ^ uVar5 ^ 0xbf;
  _DAT_183271900 = (_DAT_183271900 ^ uVar5) + 0xbf ^ 0x9be4a34bcc6c86bb;
  _DAT_183271880 = (_DAT_183271880 * -0x6e2a87770cbae5c3 ^ _DAT_183271900) + uVar5;
  _DAT_1832715b8 = _DAT_183271880 ^ _DAT_183271900;
  _DAT_1832715d0 = 0xbf;
  uVar5 = (~_DAT_183271518 + 0x2a73515a) *
          ((_DAT_183271740 ^ 0xae51727c) + (ulonglong)((uint)_DAT_183271740 & 0xae51727c) * 2);
  uVar5 = (uVar5 | _DAT_1832716e0) + (uVar5 & _DAT_1832716e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832718d0 = func_0x00018ad03100((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  uVar5 = (_DAT_1832718d0 ^ 0x2a735159) & 0x7fffffffffffffff;
  _DAT_183271768 = _DAT_183271768 ^ uVar5 ^ 0x388897d540fc557e;
  _DAT_1832719f0 = (_DAT_1832719f0 * 0x529b7d3783c2647 ^ _DAT_183271768) + uVar5;
  _DAT_183271610 = _DAT_1832719f0 ^ _DAT_183271768;
  _DAT_183271570 = 0;
  _DAT_183271908 = func_0x00018ad03100(_DAT_183271720 + 0x20ff7c9a001dff ^ 0x81);
  _DAT_183271ab0 = _DAT_1832715f0 ^ _DAT_183271908 ^ 0xbf;
  _DAT_1832715e0 = (_DAT_1832715e0 ^ _DAT_183271908) + 0xbf ^ 0xd2bd7161cf505e9e;
  _DAT_183271948 = (_DAT_183271948 * -0x6172ab8c75ade80d ^ _DAT_1832715e0) + _DAT_183271908;
  _DAT_183271900 = _DAT_183271948 ^ _DAT_1832715e0;
  _DAT_1832715f8 = 0xbf;
  switch(0xbf < (int)uVar4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aced93b (image 18aced93b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aced93b(void)

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



// ===== continuation @ rva ace9720 (image 18ace9720) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ace9720(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  *(undefined8 *)(unaff_RBP + 0x80) = *(undefined8 *)(unaff_RBP + 0x78);
  uVar1 = *(uint *)(unaff_RBP + 0x70);
  *(uint *)(unaff_RBP + 0x88) = uVar1;
  uVar5 = _DAT_183271a08;
  uVar3 = _DAT_183271610;
  uVar4 = _DAT_183271528;
  uVar2 = uVar1 ^ unaff_RBX;
  uVar6 = (uint)_DAT_183271a08;
  *(bool *)(unaff_RBP + 0x70) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar3 = (~uVar3 + 2) * ((uVar5 ^ uVar2) + (ulonglong)(uVar6 & (uint)uVar2) * 2);
  uVar4 = (uVar3 | uVar4) + (uVar3 & uVar4);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832719d0 =
       func_0x00018ad03100((uVar2 ^ 1 | uVar4) + (ulonglong)((uint)(uVar2 ^ 1) & (uint)uVar4));
  uVar11 = uVar1 & _DAT_18001a990;
  uVar10 = uVar1 | _DAT_18001a990;
  uVar9 = uVar1 ^ _DAT_18001a990;
  uVar6 = uVar1 ^ (uint)DAT_18001a710;
  _DAT_183271538 =
       ((ulonglong)uVar9 * (ulonglong)_DAT_181990c80 << 0x20) +
       (ulonglong)uVar9 * (ulonglong)_DAT_181990c70 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_181990c60 << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_181990c50 +
       ((ulonglong)uVar11 * (ulonglong)_DAT_181990c40 << 0x20 |
       (ulonglong)uVar11 * (ulonglong)_DAT_181990c30) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_181990c20 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_181990c10 +
       (-(((ulonglong)uVar6 * (ulonglong)_DAT_181990cc0 + _DAT_181990d10 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_181990cb0 +
         ((ulonglong)uVar9 * (ulonglong)_DAT_181990ce0 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)_DAT_181990cd0 +
         ((ulonglong)uVar11 * (ulonglong)_DAT_181990ce0 << 0x20 |
         (ulonglong)uVar11 * (ulonglong)_DAT_181990cd0) +
         ((ulonglong)uVar1 * (ulonglong)_DAT_181990cc0 << 0x20) +
         (ulonglong)uVar1 * (ulonglong)_DAT_181990cb0) -
       (((ulonglong)uVar10 * (ulonglong)_DAT_181990d00 << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_181990cf0)) + 0x46c772568387f695;
  _DAT_183271658 = _DAT_183271938 ^ _DAT_1832719d0 ^ _DAT_183271538;
  _DAT_183271700 = (_DAT_183271700 ^ _DAT_1832719d0) + _DAT_183271538 ^ 0x5c15959a5781ced2;
  _DAT_183271898 = (_DAT_183271898 * 0xa682f56513541af ^ _DAT_183271700) + _DAT_1832719d0;
  _DAT_1832715d8 = _DAT_183271898 ^ _DAT_183271700;
  _DAT_183271538 = _DAT_183271538 & 0xffffffff;
  _DAT_183271718 = func_0x00018ad03100(_DAT_1832718e8 + 0x3a00989cff26ffU ^ 0x9c);
  _DAT_183271608 =
       (_DAT_183271608 ^ _DAT_183271718 & 0x7fffffffffffffff) + 0x6fffedf7 ^ 0x6a6bbbd22e8ef055;
  _DAT_183271a98 =
       (_DAT_183271a98 * -0x2dfa7fed8c6081e1 ^ _DAT_183271608) +
       (_DAT_183271718 & 0x7fffffffffffffff);
  _DAT_1832717f0 = _DAT_183271a98 ^ _DAT_183271608;
  _DAT_183271a38 = 0x6fffedf7;
  uVar4 = (_DAT_183271648 ^ _DAT_181990d20) + _DAT_1832718b0 + 0x78da1d78;
  uVar3 = (_DAT_1832718b0 ^ _UNK_181990d28) + _DAT_183271648 + 0x356c3f33;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183271648 ^ _DAT_181990d20;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832718b0 ^ _UNK_181990d28;
  _DAT_1832716e0 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183271648 + 0x356c3f33) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832718b0 + 0x78da1d78));
  _DAT_183271978 = (_DAT_183271978 ^ _DAT_1832716e0) + 0xc994016e ^ 0xea57d6d6e85e2a3f;
  _DAT_183271918 = (_DAT_183271918 * -0x6a11c0c3aa5dfd99 ^ _DAT_183271978) + _DAT_1832716e0;
  _DAT_183271560 = _DAT_183271918 ^ _DAT_183271978;
  _DAT_1832715b0 = 0xc994016e;
  _DAT_183271768 = func_0x00018ad03100(_DAT_183271720 ^ 0xff99ff94fb0014bb);
  _DAT_183271788 =
       (_DAT_183271788 ^ _DAT_183271768 & 0xffffffffe0000000) - 0x73378520 ^ 0xd8e1878ebe5aae13;
  _DAT_1832716a8 =
       (_DAT_1832716a8 * 0xb2475ff255e0d45 ^ _DAT_183271788) + (_DAT_183271768 & 0xffffffffe0000000)
  ;
  _DAT_183271980 = _DAT_1832716a8 ^ _DAT_183271788;
  _DAT_183271ab8 = 0x8cc87ae0;
  _DAT_1832718d8 = func_0x00018ad03100(_DAT_183271808 ^ 0xdc0064b5ff51cb);
  uVar4 = _DAT_1832718d8 >> 1 | _DAT_1832718d8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = _DAT_1832718d8 ^ 0x8cc87ae0 ^
          (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4;
  _DAT_1832715f8 = _DAT_183271a90 ^ uVar4 ^ 0x10000ffff;
  _DAT_1832716d0 = (_DAT_1832716d0 ^ uVar4) + 0x10000ffff ^ 0xfd06a0605f5fa89;
  _DAT_1832715b8 = (_DAT_1832715b8 * -0xa8fa8e2866cceef ^ _DAT_1832716d0) + uVar4;
  _DAT_183271740 = _DAT_1832715b8 ^ _DAT_1832716d0;
  _DAT_183271610 = 0xffff;
  uVar4 = (~_DAT_183271940 + 0xcf9c6ad4) *
          ((_DAT_1832715c8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832715c8 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1832716d0) + (uVar4 & _DAT_1832716d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832715c0 = func_0x00018ad03100((uVar4 | 0x4bbe49f6) + (ulonglong)((uint)uVar4 & 0x4bbe49f6))
  ;
  _DAT_1832717e0 =
       (_DAT_1832717e0 ^ _DAT_1832715c0 & 0xffffffffffffffe0) - 0xcf9c6ad3 ^ 0x5791c3c67309f204;
  _DAT_183271548 =
       (_DAT_183271548 * 0xa53020aa5deed1f ^ _DAT_1832717e0) + (_DAT_1832715c0 & 0xffffffffffffffe0)
  ;
  _DAT_183271928 = _DAT_183271548 ^ _DAT_1832717e0;
  _DAT_183271728 = 0x3063952d;
  _DAT_183271870 = func_0x00018ad03100(_DAT_183271628 + 0x69ffc6f8ff59ffU ^ 0x80);
  uVar4 = _DAT_183271870 ^ 0xcf9c6ad3;
  _DAT_1832717a8 = _DAT_183271720 ^ uVar4 ^ 0xcf9d6ad2;
  _DAT_1832717a0 = (_DAT_1832717a0 ^ uVar4) + 0xcf9d6ad2 ^ 0x93a53622ef1e09fc;
  _DAT_183271848 = (_DAT_183271848 * -0x386c0a98717f699f ^ _DAT_1832717a0) + uVar4;
  _DAT_183271a78 = _DAT_183271848 ^ _DAT_1832717a0;
  _DAT_1832716e0 = 0xcf9d6ad2;
  uVar4 = (_DAT_183271688 ^ _DAT_181990d30) + _DAT_183271a10 + 0x4bbf49f7;
  uVar3 = (_DAT_183271a10 ^ _UNK_181990d38) + _DAT_183271688 + 0x3063952d;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183271688 ^ _DAT_181990d30;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183271a10 ^ _UNK_181990d38;
  _DAT_183271728 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183271688 + 0x3063952d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183271a10 + 0x4bbf49f7));
  uVar4 = (_DAT_183271728 & 0xfffffffffffffe00) << 0x18 | _DAT_183271728 >> 0x28;
  _DAT_183271840 = _DAT_183271998 ^ uVar4 ^ 0x10000ffff;
  _DAT_1832717e8 = (_DAT_1832717e8 ^ uVar4) + 0x10000ffff ^ 0xfa53ad93c5a03463;
  _DAT_183271510 = (_DAT_183271510 * 0xb7f894271882f61 ^ _DAT_1832717e8) + uVar4;
  _DAT_183271930 = _DAT_183271510 ^ _DAT_1832717e8;
  _DAT_183271aa8 = 0xffff;
  _DAT_1832716d8 = func_0x00018ad03100(_DAT_1832718c8 + 0x20018d5ff92ff ^ 10);
  uVar4 = (_DAT_1832716d8 << 0xe | _DAT_1832716d8 >> 0x32) << 0x28 |
          (_DAT_1832716d8 & 0x3ffffffffffff) >> 10;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4;
  _DAT_1832717e0 = (_DAT_1832717e0 ^ uVar4) - 0xadb11d73 ^ 0x719b452fe7c6c7d6;
  _DAT_1832719f0 = (_DAT_1832719f0 * -0x257672d8372fb17b ^ _DAT_1832717e0) + uVar4;
  _DAT_183271ab8 = _DAT_1832719f0 ^ _DAT_1832717e0;
  _DAT_183271608 = 0x524ee28d;
  uVar4 = (_DAT_1832715f0 ^ _DAT_181990d40) + _DAT_183271870 + 0x8422dcda;
  uVar3 = (_DAT_183271870 ^ _UNK_181990d48) + _DAT_1832715f0 + 0xadb11d73;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832715f0 ^ _DAT_181990d40;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183271870 ^ _UNK_181990d48;
  _DAT_183271818 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832715f0 + 0xadb11d73) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183271870 + 0x8422dcda));
  uVar4 = _DAT_183271818 & 0x7fffffffffff;
  _DAT_183271700 = _DAT_1832715e8 ^ uVar4 ^ 0xadb21d72;
  _DAT_183271900 = (_DAT_183271900 ^ uVar4) + 0xadb21d72 ^ 0x893503a2102eedc0;
  _DAT_183271898 = (_DAT_183271898 * -0x1076661d9b18bf83 ^ _DAT_183271900) + uVar4;
  _DAT_183271728 = _DAT_183271898 ^ _DAT_183271900;
  _DAT_1832715e8 = 0xadb21d72;
  uVar4 = func_0x00018ad03100(_DAT_183271728 ^ 0xcc006a59ff4936);
  uVar4 = uVar4 << 0x34 | uVar4 >> 0xc;
  _DAT_183271a68 = _DAT_1832715a0 ^ uVar4 ^ 0x10000ffff;
  _DAT_183271968 = (_DAT_183271968 ^ uVar4) + 0x10000ffff ^ 0x9eec6dc0e21f3653;
  _DAT_1832717f0 = (_DAT_1832717f0 * -0x26ffbcfcff8031ef ^ _DAT_183271968) + uVar4;
  _DAT_183271718 = _DAT_1832717f0 ^ _DAT_183271968;
  _DAT_183271668 = 0xffff;
  uVar4 = (~_DAT_1832716a8 + 0xc994016f) *
          ((_DAT_1832719c0 ^ 0xebddced2) + (ulonglong)((uint)_DAT_1832719c0 & 0xebddced2) * 2);
  uVar4 = (uVar4 | _DAT_1832717d0) + (uVar4 & _DAT_1832717d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832717b0 = func_0x00018ad03100((uVar4 | 0x2249cfbc) + (ulonglong)((uint)uVar4 & 0x2249cfbc))
  ;
  uVar4 = (_DAT_1832717b0 * -0x2e51ea7815a59b ^ 0x6fffedf7U) << 0xc |
          (ulonglong)(_DAT_1832717b0 * -0x2e51ea7815a59b) >> 0x34;
  _DAT_183271798 = (_DAT_183271798 ^ uVar4) + 0xa66bec99 ^ 0x9a2237b4b9177b8a;
  _DAT_1832719c8 = (_DAT_1832719c8 * -0x7dd8f79a383c5c19 ^ _DAT_183271798) + uVar4;
  _DAT_183271640 = _DAT_1832719c8 ^ _DAT_183271798;
  _DAT_183271820 = 0xa66bec99;
  uVar4 = (_DAT_1832719c0 ^ _DAT_181990d50) + _DAT_1832716b0 + 0x2249cfbc;
  uVar3 = (_DAT_1832716b0 ^ _UNK_181990d58) + _DAT_1832719c0 + 0x932802cc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832719c0 ^ _DAT_181990d50;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832716b0 ^ _UNK_181990d58;
  _DAT_183271a38 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832719c0 + 0x932802cc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832716b0 + 0x2249cfbc));
  _DAT_183271840 = _DAT_1832719e0 ^ _DAT_183271a38 ^ 0x13993ef65;
  _DAT_183271ad8 = (_DAT_183271ad8 ^ _DAT_183271a38) + 0x13993ef65 ^ 0x48e42cd6d44b7e5e;
  _DAT_183271ac8 = (_DAT_183271ac8 * 0x1b567e629df49967 ^ _DAT_183271ad8) + _DAT_183271a38;
  _DAT_183271740 = _DAT_183271ac8 ^ _DAT_183271ad8;
  _DAT_1832715f0 = 0x3993ef65;
  uVar4 = ((_DAT_1832715e0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1832715e0 & 0x8422dcda) * 2) *
          -_DAT_183271788;
  uVar4 = (uVar4 | _DAT_183271960) + (uVar4 & _DAT_183271960);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183271748 = func_0x00018ad03100((uVar4 | 0x8422dcda) + (ulonglong)((uint)uVar4 & 0x8422dcda))
  ;
  _DAT_183271610 = _DAT_183271a48 ^ _DAT_183271748 ^ 0xffff;
  _DAT_183271a90 = (_DAT_183271a90 ^ _DAT_183271748) + 0xffff ^ 0xa2d64dbb9ed33105;
  _DAT_183271748 = (_DAT_183271748 * 0xc47458ad96200c7 ^ _DAT_183271a90) + _DAT_183271748;
  _DAT_183271708 = _DAT_183271748 ^ _DAT_183271a90;
  _DAT_183271538 = 0xffff;
  uVar4 = (~_DAT_1832718c8 + 0x100000000) *
          ((_DAT_1832715a8 ^ 0xebddced2) + (ulonglong)((uint)_DAT_1832715a8 & 0xebddced2) * 2);
  uVar4 = (uVar4 | _DAT_1832716a0) + (uVar4 & _DAT_1832716a0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183271860 = func_0x00018ad03100((uVar4 | 0x1422312d) + (ulonglong)((uint)uVar4 & 0x1422312d))
  ;
  uVar4 = (_DAT_183271860 ^ 0xffffffff) * -0x4d35da6659fb2d7b;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  _DAT_183271688 = (_DAT_183271688 ^ uVar4) + 0x90001208 ^ 0xbe72d45502dc005a;
  _DAT_1832718d0 = (_DAT_1832718d0 * -0x14f71f15676bd171 ^ _DAT_183271688) + uVar4;
  _DAT_183271840 = _DAT_1832718d0 ^ _DAT_183271688;
  _DAT_1832717f0 = 0x90001208;
  uVar4 = (~_DAT_1832715f0 + 0x90001209) *
          ((_DAT_183271610 ^ 0xebddced2) + (ulonglong)((uint)_DAT_183271610 & 0xebddced2) * 2);
  uVar4 = (uVar4 | _DAT_183271578) + (uVar4 & _DAT_183271578);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183271800 = func_0x00018ad03100((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda))
  ;
  uVar4 = (_DAT_183271800 << 0x31 | _DAT_183271800 >> 0xf) << 10 | (_DAT_183271800 & 0x7fff) >> 5;
  _DAT_183271598 = _DAT_183271598 ^ uVar4 ^ 0x2ec66f68acba7c07;
  _DAT_183271a08 = (_DAT_183271a08 * -0x7a2c5c54ab848067 ^ _DAT_183271598) + uVar4;
  _DAT_1832719c8 = _DAT_183271a08 ^ _DAT_183271598;
  _DAT_1832717d8 = 0;
  _DAT_183271560 = func_0x00018ad03100(_DAT_1832716c0 ^ 0xd3ff8335ffddb7);
  _DAT_183271a18 = _DAT_183271588 ^ _DAT_183271a38 ^ 0xffff;
  _DAT_183271a68 = (_DAT_183271a68 ^ _DAT_183271a38) + 0xffff ^ 0xa403d7f4e7ec3af0;
  _DAT_183271948 = (_DAT_183271948 * 0x20b35683f3aceb5f ^ _DAT_183271a68) + _DAT_183271a38;
  _DAT_1832715a8 = _DAT_183271948 ^ _DAT_183271a68;
  _DAT_183271660 = 0xffff;
  uVar4 = (~_DAT_183271a10 + 0xbf56c76) *
          ((_DAT_183271a50 ^ 0x8fd74f50) + (ulonglong)((uint)_DAT_183271a50 & 0x8fd74f50) * 2);
  uVar4 = (uVar4 | _DAT_183271510) + (uVar4 & _DAT_183271510);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183271550 = func_0x00018ad03100((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = (_DAT_183271550 ^ 0xbf56c75) * -0x462efade7ee3180b & 0x1ffffffff;
  _DAT_183271a48 = _DAT_183271a48 ^ uVar4 ^ 0x90dd2e54693ee13c;
  _DAT_183271690 = (_DAT_183271690 * -0x3ea7dcea9af791b5 ^ _DAT_183271a48) + uVar4;
  _DAT_1832716f8 = _DAT_183271690 ^ _DAT_183271a48;
  _DAT_183271678 = 0;
  uVar5 = (ulonglong)*(uint *)(unaff_RBP + 0x60);
  auVar7._8_8_ = _UNK_1801098d8;
  auVar7._0_8_ = uVar5 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_181990d60,_DAT_1800170c0);
  uVar3 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar3 + _DAT_183271ab0;
  if (auVar8._4_4_ < 0) {
    uVar4 = _DAT_183271ad8 ^ uVar3;
  }
  _DAT_1832719c0 = func_0x00018ad03100(SUB161(auVar7 ^ _DAT_181990d60,5) ^ uVar4);
  uVar4 = uVar5 ^ (uVar5 | 0xffff) ^ _DAT_1832719c0;
  _DAT_183271858 = uVar5 & 0xffff;
  _DAT_183271898 = (_DAT_183271898 ^ uVar4) + _DAT_183271858 ^ 0xdb2859a9fd0f9ac4;
  _DAT_183271638 = (_DAT_183271638 * 0x1a18481694b555bd ^ _DAT_183271898) + uVar4;
  _DAT_183271640 = _DAT_183271638 ^ _DAT_183271898;
  *(int *)(unaff_RBP + 0x90) = (int)_DAT_183271858;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x70)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ace44b6 (image 18ace44b6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ace44b6(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  
  _DAT_183271830 = func_0x00018ad03100(_DAT_183271918 ^ 0x88ff381c002bee);
  _DAT_183271520 = (_DAT_183271520 ^ _DAT_183271830) + 0x7f0ebefd ^ 0x1f5bb89f0f5c0813;
  _DAT_183271860 = (_DAT_183271860 * -0x626cf01261a6ba4f ^ _DAT_183271520) + _DAT_183271830;
  _DAT_183271818 = _DAT_183271860 ^ _DAT_183271520;
  _DAT_1832717b0 = 0x7f0ebefd;
  uVar2 = (~_DAT_183271740 + 0xbded15ac) *
          ((_DAT_183271878 ^ 0xe8a5d179) + (ulonglong)((uint)_DAT_183271878 & 0xe8a5d179) * 2);
  uVar2 = (uVar2 | _DAT_1832716c8) + (uVar2 & _DAT_1832716c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832718d8 = func_0x00018ad03100((uVar2 | 0x5548c4d2) + (ulonglong)((uint)uVar2 & 0x5548c4d2))
  ;
  _DAT_183271998 = (_DAT_183271998 ^ _DAT_1832718d8 ^ 0x916805a3) + 0xd16ae7f7 ^ 0x858f0ba321a67272;
  _DAT_1832719b0 =
       (_DAT_1832719b0 * -0x2ed6e177d95bc9dd ^ _DAT_183271998) + (_DAT_1832718d8 ^ 0x916805a3);
  _DAT_183271620 = _DAT_1832719b0 ^ _DAT_183271998;
  _DAT_183271640 = 0xd16ae7f7;
  _DAT_1832717f8 = func_0x00018ad03100(_DAT_183271a30 + 0xb3005652ff8cff ^ 0x39);
  _DAT_183271698 = (_DAT_183271698 ^ _DAT_1832717f8) - 0x5e579490 ^ 0xa680b3c8c10e46d5;
  _DAT_183271af8 = (_DAT_183271af8 * -0x7ba2697e5b60ef23 ^ _DAT_183271698) + _DAT_1832717f8;
  _DAT_183271ae0 = _DAT_183271af8 ^ _DAT_183271698;
  _DAT_183271a08 = 0xa1a86b70;
  uVar2 = (_DAT_183271960 ^ _DAT_181990d70) + _DAT_183271648 + 0x842223fa;
  uVar3 = (_DAT_183271648 ^ _UNK_181990d78) + _DAT_183271960 + 0x5e579490;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183271960 ^ _DAT_181990d70;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183271648 ^ _UNK_181990d78;
  _DAT_183271a68 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183271960 + 0x5e579490) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183271648 + 0x842223fa));
  uVar2 = _DAT_183271a68 << 0x38 | _DAT_183271a68 >> 8;
  _DAT_183271798 = _DAT_183271a50 ^ uVar2 ^ 0x5e57956f;
  _DAT_183271748 = (_DAT_1832717c0 ^ uVar2) + 0x5e57956f ^ 0x4de42edbb2f2ba33;
  _DAT_1832717c0 = (_DAT_1832717c0 * 0x608927c76a1c9377 ^ _DAT_183271748) + uVar2;
  _DAT_183271748 = _DAT_1832717c0 ^ _DAT_183271748;
  _DAT_183271690 = 0x5e57956f;
  uVar2 = (_DAT_183271580 ^ _DAT_181990d80) + _DAT_1832716e0 + 0x842223fa;
  uVar3 = (_DAT_1832716e0 ^ _UNK_181990d88) + _DAT_183271580 + 0x338be330;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183271580 ^ _DAT_181990d80;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832716e0 ^ _UNK_181990d88;
  _DAT_1832715e8 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183271580 + 0x338be330) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832716e0 + 0x842223fa));
  uVar2 = _DAT_1832715e8 ^ 0x10;
  _DAT_1832716b8 = _DAT_183271900 ^ uVar2 ^ 0x338be40f;
  _DAT_183271990 = (_DAT_183271990 ^ uVar2) + 0x338be40f ^ 0xa6b748c91458a3a0;
  _DAT_1832715c8 = (_DAT_1832715c8 * -0x73aa991f8d456201 ^ _DAT_183271990) + uVar2;
  _DAT_183271760 = _DAT_1832715c8 ^ _DAT_183271990;
  _DAT_1832717a8 = 0x338be40f;
  _DAT_183271640 = func_0x00018ad03100(_DAT_183271560 + 0xffab0009f9ff34ffU ^ 0x6a);
  uVar2 = _DAT_183271640 << 0x3e | _DAT_183271640 >> 2;
  _DAT_1832716f8 = _DAT_183271778 ^ uVar2 ^ 0x1000000df;
  _DAT_1832719a8 = (_DAT_1832719a8 ^ uVar2) + 0x1000000df ^ 0x3ad5ec79b85e64ec;
  _DAT_183271500 = (_DAT_183271500 * -0x61a9c01ff46e323b ^ _DAT_1832719a8) + uVar2;
  _DAT_183271ac0 = _DAT_183271500 ^ _DAT_1832719a8;
  _DAT_183271870 = 0xdf;
  _DAT_183271a40 = func_0x00018ad03100(_DAT_183271890 + 0xff74ff5d830052ff ^ 0xf8);
  uVar2 = (_DAT_183271a40 ^ 0x618fd6a0) << 0xf | _DAT_183271a40 >> 0x31;
  _DAT_183271730 = (_DAT_183271730 ^ uVar2) - 0x618fd6a0 ^ 0x1b772b301bbba1a5;
  _DAT_1832715a8 = (_DAT_1832715a8 * 0x4d3f23fdce2542ff ^ _DAT_183271730) + uVar2;
  _DAT_183271818 = _DAT_1832715a8 ^ _DAT_183271730;
  _DAT_183271570 = 0x9e702960;
  uVar2 = (~_DAT_183271968 + 0x618fd6a1) *
          ((_DAT_183271a58 ^ 0x842223fa) + (ulonglong)((uint)_DAT_183271a58 & 0x842223fa) * 2);
  uVar2 = (uVar2 | _DAT_183271860) + (uVar2 & _DAT_183271860);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832718b0 = func_0x00018ad03100((uVar2 | 0xe5adf55a) + (ulonglong)((uint)uVar2 & 0xe5adf55a))
  ;
  uVar2 = (_DAT_1832718b0 & 0xffffffffe0000000) + 0xdf;
  _DAT_1832719a8 = _DAT_183271530 ^ uVar2 ^ 0x618fd77f;
  _DAT_1832717a8 = (uVar2 ^ _DAT_1832717a8) + 0x618fd77f ^ 0x261982f4abd90e8f;
  _DAT_183271548 =
       (_DAT_1832718b0 & 0xffffffffe0000000) +
       (_DAT_183271548 * -0xbc70230ff9b0b51 ^ _DAT_1832717a8) + 0xdf;
  _DAT_1832716f8 = _DAT_1832717a8 ^ _DAT_183271548;
  _DAT_183271a68 = 0x618fd77f;
  lVar1 = func_0x00018ad03100(_DAT_183271950 ^ 0xa4ff98c9ff5a68);
  _DAT_1832716e8 = lVar1 * -0x3cf2b3326600282d;
  _DAT_183271520 = _DAT_1832718e8 ^ _DAT_1832716e8 ^ 0x1000000df;
  _DAT_183271af8 = (_DAT_183271968 ^ _DAT_1832716e8) + 0x1000000df ^ 0x77949831c3d9b28e;
  _DAT_1832716e8 = (lVar1 * 0x788349f48b7a75f3 ^ _DAT_183271af8) + _DAT_1832716e8;
  _DAT_183271af8 = _DAT_1832716e8 ^ _DAT_183271af8;
  _DAT_183271968 = 0xdf;
  uVar2 = (~_DAT_183271810 + 0xd16ae7f8) *
          ((_DAT_1832718d8 ^ 0xfb2c9dd8) + (ulonglong)((uint)_DAT_1832718d8 & 0xfb2c9dd8) * 2);
  uVar2 = (uVar2 | _DAT_1832715a8) + (uVar2 & _DAT_1832715a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183271618 = func_0x00018ad03100((uVar2 | 0x2a467a2f) + (ulonglong)((uint)uVar2 & 0x2a467a2f))
  ;
  uVar2 = (_DAT_183271618 & 0xfffffffff8000000) - (_DAT_183271618 >> 1 & 0x5555555554000000);
  uVar2 = (uVar2 & 0x3333333330000000) + (uVar2 >> 2 & 0x3333333333000000);
  uVar2 = (_DAT_183271618 & 0xfffffffff8000000) +
          (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f000000) * 0x101010101010101 >> 0x38) * 4;
  _DAT_183271668 = (_DAT_183271668 ^ uVar2) + 0x510aa6f5 ^ 0x45947642aac5e6cf;
  _DAT_1832719c8 = (_DAT_1832719c8 * -0x3c6fb9e9c50b7a59 ^ _DAT_183271668) + uVar2;
  _DAT_183271a30 = _DAT_1832719c8 ^ _DAT_183271668;
  _DAT_183271ab0 = 0x510aa6f5;
  uVar2 = (~_DAT_183271a58 + 0xa2154deb) *
          ((_DAT_183271678 ^ 0x2a467a2f) + (ulonglong)((uint)_DAT_183271678 & 0x2a467a2f) * 2);
  uVar2 = (uVar2 | _DAT_183271680) + (uVar2 & _DAT_183271680);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183271aa8 = func_0x00018ad03100((uVar2 | 0x885337c5) + (ulonglong)((uint)uVar2 & 0x885337c5))
  ;
  uVar2 = _DAT_183271aa8 ^ 0xc7114e0;
  _DAT_183271628 = _DAT_183271788 ^ uVar2 ^ 0x15079a6f4;
  _DAT_1832719a8 = (_DAT_1832719a8 ^ uVar2) + 0x15079a6f4 ^ 0xfe1fccaf662d4a47;
  _DAT_183271548 = (_DAT_183271548 * 0x5211e291ca8a6a05 ^ _DAT_1832719a8) + uVar2;
  _DAT_183271ac8 = _DAT_183271548 ^ _DAT_1832719a8;
  _DAT_1832719d0 = 0x5079a6f4;
  uVar2 = (_DAT_183271828 ^ _DAT_181990d90) + _DAT_183271950 + 0xd45b85d1;
  uVar3 = (_DAT_183271950 ^ _UNK_181990d98) + _DAT_183271828 + 0x5079a6f4;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183271828 ^ _DAT_181990d90;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183271950 ^ _UNK_181990d98;
  _DAT_183271a30 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183271828 + 0x5079a6f4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183271950 + 0xd45b85d1));
  _DAT_183271890 = (_DAT_183271a30 ^ 0x5079a6f4) << 0x27 | (_DAT_183271a30 ^ 0x5079a6f4) >> 0x19;
  _DAT_183271538 = _DAT_183271538 ^ _DAT_183271890 ^ 0x476857468bafb3e9;
  _DAT_1832716f0 = (_DAT_1832716f0 * 0x131c44b7806d201d ^ _DAT_183271538) + _DAT_183271890;
  _DAT_183271a10 = _DAT_1832716f0 ^ _DAT_183271538;
  _DAT_183271608 = 0;
  uVar2 = (_DAT_183271740 ^ _DAT_181990da0) + _DAT_1832719c8 + 0xfb2c9dd8;
  uVar3 = (_DAT_1832719c8 ^ _UNK_181990da8) + _DAT_183271740 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183271740 ^ _DAT_181990da0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832719c8 ^ _UNK_181990da8;
  _DAT_1832715e8 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183271740 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832719c8 + 0xfb2c9dd8));
  _DAT_183271568 = (_DAT_183271568 ^ _DAT_1832715e8) + 0x80f14102 ^ 0x5981572957508055;
  _DAT_1832719c8 = (_DAT_1832719c8 * -0x6009a582f185ffe5 ^ _DAT_183271568) + _DAT_1832715e8;
  _DAT_183271a20 = _DAT_1832719c8 ^ _DAT_183271568;
  _DAT_183271588 = 0x80f14102;
  uVar2 = (_DAT_183271550 ^ _DAT_181990db0) + _DAT_1832717e8 + 0xfb2c9dd8;
  uVar3 = (_DAT_1832717e8 ^ _UNK_181990db8) + _DAT_183271550 + 0x80f14102;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183271550 ^ _DAT_181990db0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832717e8 ^ _UNK_181990db8;
  _DAT_183271a78 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183271550 + 0x80f14102) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832717e8 + 0xfb2c9dd8));
  uVar2 = (_DAT_183271a78 << 0x2d | _DAT_183271a78 >> 0x13) * 0x1bcab1a5da75479d;
  _DAT_183271798 = _DAT_183271798 ^ uVar2 ^ 0x95983af486bfe976;
  _DAT_1832719d0 = (_DAT_1832719d0 * 0xd5b2fd58052c15 ^ _DAT_183271798) + uVar2 ^ _DAT_183271798;
  _DAT_183271610 = 0;
  uVar2 = (_DAT_183271540 ^ 0x842223fa) + _DAT_183271ac8 + 0x842223fa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183271540 ^ 0x842223fa;
  uVar3 = ((_DAT_183271ac8 + _DAT_183271540) * 0x2000 | _DAT_183271ac8 + _DAT_183271540 >> 0x33) ^
          _DAT_183271ac8;
  _DAT_183271af0 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_183271540 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183271ac8 + 0x842223fa));
  uVar2 = _DAT_183271af0 ^ 0xdf;
  _DAT_183271660 = _DAT_183271700 ^ uVar2 ^ 0xdf;
  _DAT_1832718f0 = (_DAT_1832718f0 ^ uVar2) + 0xdf ^ 0x5ca02068f8e9aa5f;
  _DAT_1832715b8 = (_DAT_1832715b8 * -0x6086a833b6b6246f ^ _DAT_1832718f0) + uVar2;
  _DAT_183271698 = _DAT_1832715b8 ^ _DAT_1832718f0;
  _DAT_183271a88 = 0xdf;
  uVar2 = (_DAT_183271a58 ^ _DAT_181990dc0) + _DAT_183271710 + 0xb3221d19;
  uVar3 = (_DAT_183271710 ^ _UNK_181990dc8) + _DAT_183271a58 + 0x37003e3c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183271a58 ^ _DAT_181990dc0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183271710 ^ _UNK_181990dc8;
  _DAT_183271950 =
       func_0x00018ad03100((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183271a58 + 0x37003e3c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183271710 + 0xb3221d19));
  uVar2 = _DAT_183271950 ^ 0xbd11abdd7211e10;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (ulonglong)
          (~((uint)uVar2 ^
            (uint)((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7)) &
          0x37003e3c);
  _DAT_183271520 = _DAT_183271520 ^ uVar2 ^ 0xad272fa0109934bd;
  _DAT_183271700 = (_DAT_183271700 * -0x32ca3682c889bca3 ^ _DAT_183271520) + uVar2;
  _DAT_183271740 = _DAT_183271700 ^ _DAT_183271520;
  _DAT_1832719f0 = 0;
  _DAT_183271768 = func_0x00018ad03100(_DAT_183271a80 + 0x21007bd9ffe1ffU ^ 10);
  uVar2 = _DAT_183271768 ^ 0xdf;
  _DAT_1832715a8 = _DAT_183271530 ^ uVar2 ^ 0xdf;
  _DAT_1832715b8 = (_DAT_1832715b8 ^ uVar2) + 0xdf ^ 0x390d10625257ce50;
  _DAT_183271760 = (_DAT_183271760 * 0x65565db5f2ac72dd ^ _DAT_1832715b8) + uVar2;
  _DAT_1832718c8 = _DAT_183271760 ^ _DAT_1832715b8;
  _DAT_183271588 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x60)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva acd9cec (image 18acd9cec) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18acd9cec(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong in_RAX;
  longlong lVar1;
  longlong in_RCX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar13;
  undefined1 auVar12 [16];
  
  uVar6 = param_1 + in_RCX + param_2;
  uVar7 = param_4 + in_RAX + param_3;
  param_1 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ param_1;
  param_4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ param_4;
  uVar6 = func_0x00018ad03100((param_4 << 0x1d | param_4 >> 0x23) - (in_RAX + param_3) ^
                              (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  _DAT_183271698 = (uVar6 ^ 0x587dea618) & 0xfffffffff;
  _DAT_183271528 = (_DAT_183271528 ^ _DAT_183271698) + 0xff3deebdeffff77f ^ 0xbf7c885afe71038e;
  _DAT_183271698 = (uVar6 * 0x6c62f244bbdbedb9 ^ _DAT_183271528) + _DAT_183271698;
  _DAT_183271998 = _DAT_183271698 ^ _DAT_183271528;
  _DAT_1832716c8 = 0xff3deebdeffff77f;
  _DAT_1832717f0 = func_0x00018ad03100(_DAT_183271828 ^ 0xf8f6b17fab3f2154);
  uVar6 = _DAT_1832717f0 & 0xfffffffffffffc00;
  _DAT_1832719e8 = _DAT_1832719b0 ^ uVar6 ^ 0x1e09bef6fcbfd4fe;
  _DAT_183271938 = (_DAT_183271938 ^ uVar6) + 0x1e09bef6fcbfd4fe ^ 0xa23530c9d0c6e35b;
  _DAT_183271530 = (_DAT_183271530 * -0x6e8e83133b781dbf ^ _DAT_183271938) + uVar6;
  _DAT_183271a30 = _DAT_183271530 ^ _DAT_183271938;
  _DAT_183271730 = 0x1e09bef6fcbfd4fe;
  uVar6 = ((_DAT_183271600 ^ 0x1e09bef6789df7db) + (_DAT_183271600 & 0x1e09bef6789df7db) * 2) *
          -0x3c137dedf97fa9fe;
  uVar6 = (uVar6 | _DAT_1832715f0) + (uVar6 & _DAT_1832715f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271538 = func_0x00018ad03100((uVar6 | 0xffffffff7bdddcdb) + (uVar6 & 0xffffffff7bdddcdb));
  uVar6 = _DAT_183271538 * 0xd252c67c265c023;
  _DAT_183271a00 = _DAT_183271710 ^ uVar6 ^ 0xfffffffffffffffe;
  _DAT_183271748 = (_DAT_183271748 ^ uVar6) - 2 ^ 0x63a1bad8e216efd8;
  _DAT_1832719f0 = (_DAT_1832719f0 * 0x7c2d24a893e00175 ^ _DAT_183271748) + uVar6;
  _DAT_183271600 = _DAT_1832719f0 ^ _DAT_183271748;
  _DAT_1832715d0 = 0xfffffffffffffffe;
  uVar6 = (_DAT_183271a28 ^ _DAT_181991490) + _DAT_1832716e0 + 0x84222325;
  uVar7 = (_DAT_1832716e0 ^ _UNK_181991498) + _DAT_183271a28 + 0x580071f7cdf2b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271a28 ^ _DAT_181991490;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832716e0 ^ _UNK_181991498;
  uVar6 = func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271a28 + 0x580071f7cdf2b0)
                              ^ (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832716e0 + 0x84222325));
  uVar7 = (uVar6 ^ 0x580071f7cdf2b0) << 8 | uVar6 >> 0x38;
  _DAT_1832716a8 = (uVar6 ^ uVar7) + 0xffa7ff8e08320d50 ^ 0x37ddbf462a434dc4;
  _DAT_183271638 = (_DAT_183271638 * 0x405ffdec22b09f9 ^ _DAT_1832716a8) + uVar7;
  _DAT_183271908 = _DAT_183271638 ^ _DAT_1832716a8;
  _DAT_183271850 = 0xffa7ff8e08320d50;
  uVar6 = (_DAT_183271508 ^ _DAT_1819914a0) + (_DAT_183271558 - 0x84222325);
  uVar7 = (_DAT_183271558 ^ _UNK_1819914a8) + _DAT_183271508 + 0x580071f7cdf2b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271508 ^ _DAT_1819914a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271558 ^ _UNK_1819914a8;
  _DAT_183271788 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271508 + 0x580071f7cdf2b0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271558 - 0x84222325));
  _DAT_183271850 = _DAT_183271a58 ^ _DAT_183271788 ^ 0x580071f7cdf2ae;
  _DAT_183271ad8 = (_DAT_183271ad8 ^ _DAT_183271788) + 0x580071f7cdf2ae ^ 0x73efc00e59219e9f;
  _DAT_183271998 = (_DAT_183271998 * -0x7b8918a04fee31ef ^ _DAT_183271ad8) + _DAT_183271788;
  _DAT_183271500 = _DAT_183271998 ^ _DAT_183271ad8;
  _DAT_183271a78 = 0x580071f7cdf2ae;
  _DAT_1832716d8 = func_0x00018ad03100(_DAT_1832719f8 + 0xe23114a2807dab8U ^ 3);
  uVar6 = _DAT_1832716d8 ^ 0xfffffffffffffffe;
  _DAT_183271988 = _DAT_1832715f8 ^ uVar6 ^ 0xfffffffffffffffe;
  _DAT_183271590 = (_DAT_183271590 ^ uVar6) - 2 ^ 0xc40c9d9a5ff3016c;
  _DAT_1832718c0 = (_DAT_1832718c0 * -0x59f2f7c17f751a35 ^ _DAT_183271590) + uVar6;
  _DAT_183271950 = _DAT_1832718c0 ^ _DAT_183271590;
  _DAT_1832718a8 = 0xfffffffffffffffe;
  uVar6 = (_DAT_183271590 ^ _DAT_1819914b0) + _DAT_183271810 + 0x2823b9a575f0ae5b;
  uVar7 = (_DAT_183271810 ^ _UNK_1819914b8) + _DAT_183271590 + 0xd7dc465a0e2d7280;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271590 ^ _DAT_1819914b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271810 ^ _UNK_1819914b8;
  _DAT_183271608 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271590 + 0xd7dc465a0e2d7280) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271810 + 0x2823b9a575f0ae5b));
  uVar6 = _DAT_183271598 - (_DAT_183271598 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183271598;
  _DAT_183271598 = _DAT_183271930 ^ uVar6 ^ 0xfffffffffffffffe;
  _DAT_183271908 = (_DAT_183271908 ^ uVar6) - 2 ^ 0xb09585a5fb6195c3;
  _DAT_1832719b8 = (_DAT_1832719b8 * 0x4152225e7c527759 ^ _DAT_183271908) + uVar6;
  _DAT_183271530 = _DAT_1832719b8 ^ _DAT_183271908;
  _DAT_1832719a8 = 0xfffffffffffffffe;
  uVar6 = (~_DAT_1832715b8 + 0xdc126528946be718) *
          ((_DAT_183271790 ^ 0xff3deebd6bddd45a) + (_DAT_183271790 & 0x7f3deebd6bddd45a) * 2);
  uVar6 = (uVar6 | 0xfffffffffffffffe) + (uVar6 & 0xfffffffffffffffe);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271658 = func_0x00018ad03100((uVar6 | 0x232f8b95ffb6334d) + (uVar6 & 0x232f8b95ffb6334d));
  uVar6 = (_DAT_183271658 ^ 0x70b2e88a6667d569) * 0x3f88cbef04b93f19;
  _DAT_183271568 = (_DAT_183271568 ^ uVar6) + 0xdc106428846be717 ^ 0x875a524e0a94e8e9;
  _DAT_183271590 = (_DAT_183271590 * -0x81844afe6c1c855 ^ _DAT_183271568) + uVar6;
  _DAT_183271510 = _DAT_183271590 ^ _DAT_183271568;
  _DAT_183271540 = 0xdc106428846be717;
  uVar6 = (_DAT_1832716b0 ^ _DAT_1819914c0) + _DAT_183271860 + 0x232f8b95ffb6334d;
  uVar7 = (_DAT_183271860 ^ _UNK_1819914c8) + _DAT_1832716b0 + 0xb820c85108d7ce2e;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832716b0 ^ _DAT_1819914c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271860 ^ _UNK_1819914c8;
  _DAT_183271538 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832716b0 + 0xb820c85108d7ce2e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271860 + 0x232f8b95ffb6334d));
  _DAT_1832716b0 = _DAT_183271af8 ^ _DAT_183271538 ^ 0xdb5053e6846bde96;
  _DAT_1832719e0 = (_DAT_1832719e0 ^ _DAT_183271538) + 0xdb5053e6846bde96 ^ 0xf80642faef344ed0;
  _DAT_183271880 = (_DAT_183271880 * 0xc852497bb4b4311 ^ _DAT_1832719e0) + _DAT_183271538;
  _DAT_183271520 = _DAT_183271880 ^ _DAT_1832719e0;
  _DAT_183271a90 = 0xdb5053e6846bde96;
  uVar6 = (_DAT_183271888 ^ _DAT_1819914d0) + _DAT_1832717e8 + 0xdb5053e60049fdb3;
  uVar7 = (_DAT_1832717e8 ^ _UNK_1819914d8) + _DAT_183271888 + 0xdb5053e6846bde96;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271888 ^ _DAT_1819914d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832717e8 ^ _UNK_1819914d8;
  _DAT_183271580 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271888 + 0xdb5053e6846bde96) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832717e8 + 0xdb5053e60049fdb3));
  _DAT_1832717f0 = _DAT_1832717f0 ^ _DAT_183271580 ^ 0x5e1602db1b342145;
  _DAT_1832717c8 = (_DAT_1832717c8 * 0x136c954268a0905d ^ _DAT_1832717f0) + _DAT_183271580;
  _DAT_1832719d0 = _DAT_1832717c8 ^ _DAT_1832717f0;
  _DAT_1832716f0 = 0;
  uVar6 = ~_DAT_1832719e0 *
          ((_DAT_1832716b0 ^ 0xff3deebd6bddd45a) + (_DAT_1832716b0 & 0x7f3deebd6bddd45a) * 2);
  uVar6 = (uVar6 | _DAT_183271838) + (uVar6 & _DAT_183271838);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271930 = _DAT_183271580;
  _DAT_183271a30 = func_0x00018ad03100((uVar6 | 0xc2114294222ba5) + (uVar6 & 0xc2114294222ba5));
  uVar6 = ~_DAT_183271a30;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar6;
  _DAT_183271780 = (_DAT_183271780 ^ uVar6) + 0xc2114210000880 ^ 0x2e614a8ee3c8c006;
  _DAT_183271508 = (_DAT_183271508 * -0x26c9e058495bc22b ^ _DAT_183271780) + uVar6;
  _DAT_183271840 = _DAT_183271508 ^ _DAT_183271780;
  _DAT_1832719d8 = 0xc2114210000880;
  uVar6 = (_DAT_183271960 ^ _DAT_1819914e0) + _DAT_1832718b0 + 0xff3deebd6bddd45a;
  uVar7 = (_DAT_1832718b0 ^ _UNK_1819914e8) + _DAT_183271960 + 0xc2114210000880;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271960 ^ _DAT_1819914e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832718b0 ^ _UNK_1819914e8;
  _DAT_1832717a8 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271960 + 0xc2114210000880) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832718b0 + 0xff3deebd6bddd45a));
  uVar6 = (_DAT_1832717a8 & 0x1ffffffffffff) * -0x64752719c5f557fd ^ 0xff3deebdeffff77f;
  _DAT_183271690 = _DAT_183271690 ^ uVar6 ^ 0xfcd09167649dc30f;
  _DAT_183271a88 = (_DAT_183271a88 * -0x3a625d046d563c8f ^ _DAT_183271690) + uVar6;
  _DAT_183271758 = _DAT_183271a88 ^ _DAT_183271690;
  _DAT_183271ae8 = 0;
  _DAT_1832716e0 = func_0x00018ad03100(_DAT_1832715a0 ^ 0x8d34071b2be2c49b);
  uVar6 = _DAT_1832716e0 ^ 0xfffffffffffffffe;
  _DAT_183271848 = _DAT_183271628 ^ uVar6 ^ 0xfffffffffffffffe;
  _DAT_183271868 = (_DAT_183271868 ^ uVar6) - 2 ^ 0xf3d2c82edf662974;
  _DAT_1832719e0 = (_DAT_1832719e0 * -0x748a3ff6d2b03ea5 ^ _DAT_183271868) + uVar6;
  _DAT_1832716f0 = _DAT_1832719e0 ^ _DAT_183271868;
  auVar4._8_8_ = _UNK_1801ec418;
  auVar4._0_8_ = unaff_RDI ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_1819914f0,_DAT_1800170c0);
  _DAT_183271930 = 0xfffffffffffffffe;
  uVar7 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar7 + _DAT_1832717b8;
  if (auVar5._4_4_ < 0) {
    uVar6 = _DAT_183271910 ^ uVar7;
  }
  _DAT_1832715c8 = func_0x00018ad03100(SUB161(auVar4 ^ _DAT_1819914f0,5) ^ uVar6);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = unaff_RDI;
  uVar13 = (uint)(unaff_RDI >> 0x20);
  auVar5._8_4_ = (uint)unaff_RDI;
  auVar5._0_8_ = unaff_RDI;
  auVar5._12_4_ = uVar13;
  auVar9._8_4_ = 0xffffffff;
  auVar9._0_8_ = 0xffffffffffffffff;
  auVar9._12_4_ = 0xffffffff;
  uVar8 = SUB164(auVar9 ^ auVar12,0);
  uVar6 = unaff_RDI * -2 ^ _DAT_1832715c8;
  uVar6 = uVar6 << 10 | uVar6 >> 0x36;
  uVar10 = (uint)unaff_RDI | (uint)DAT_1800b8c60;
  uVar11 = SUB164(auVar5 & _DAT_1800b8c60,0);
  uVar3 = SUB164(auVar12 ^ _DAT_1800b8c60,0);
  uVar2 = (((ulonglong)uVar8 * (ulonglong)_DAT_181991520 +
            ((SUB168(auVar9 ^ auVar12,0) >> 0x20) * (ulonglong)_DAT_181991520 +
             (ulonglong)_DAT_181991500 * (ulonglong)uVar8 << 0x20) +
           (ulonglong)_DAT_181991510 * (unaff_RDI & 0xffffffff) +
           ((unaff_RDI >> 0x20) * (ulonglong)_DAT_181991510 +
            (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_181991500 << 0x20)) -
          ((ulonglong)uVar3 * (ulonglong)_DAT_1819915c0 +
           ((ulonglong)_DAT_1819915d0 * (ulonglong)uVar3 +
            (SUB168(auVar12 ^ _DAT_1800b8c60,0) >> 0x20) * (ulonglong)_DAT_1819915c0 << 0x20) +
           ((ulonglong)uVar10 * (ulonglong)_DAT_1819915a0 + _DAT_1819915b0 << 0x20) +
           (ulonglong)_DAT_181991590 * (ulonglong)uVar10 +
          (ulonglong)uVar11 * (ulonglong)_DAT_181991570 +
          ((ulonglong)_DAT_181991580 * (ulonglong)uVar11 +
           (SUB168(auVar5 & _DAT_1800b8c60,0) >> 0x20) * (ulonglong)_DAT_181991570 << 0x20) +
          ((unaff_RDI & 0xffffffff) * (ulonglong)_DAT_181991560 +
           (ulonglong)uVar13 * (ulonglong)_DAT_181991550 << 0x20) +
          (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_181991550)) + 0x3f4c6d486c5f7965;
  _DAT_183271ac8 = _DAT_1832719a0 ^ uVar6 ^ uVar2;
  _DAT_183271958 = (_DAT_183271958 ^ uVar6) + uVar2 ^ 0xb37ece69fc4aa134;
  _DAT_183271988 = (_DAT_183271988 * -0x5eebef1f32682515 ^ _DAT_183271958) + uVar6;
  _DAT_183271780 = _DAT_183271988 ^ _DAT_183271958;
  _DAT_183271758 = uVar2;
  *(ulonglong *)(unaff_RBP + 0x60) = uVar2 + unaff_RBP + -0x50;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar2) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  _DAT_183271a98 = func_0x00018ad03100(_DAT_1832717a0 + 0x94131a5e07b6199 ^ 0x4c);
  uVar6 = ((_DAT_183271a98 ^ 0x18758f09c03b4f0c) << 0x36 |
          (_DAT_183271a98 ^ 0x18758f09c03b4f0c) >> 10) ^ 0xf5c52cb7a18613d2;
  _DAT_183271908 = (_DAT_183271908 ^ uVar6) + 0xf7f7bdbfa38673d6 ^ 0x8dd3800aeae03146;
  _DAT_1832716e8 = (_DAT_1832716e8 * -0x7c2964ac55cf0461 ^ _DAT_183271908) + uVar6;
  _DAT_1832715a0 = _DAT_1832716e8 ^ _DAT_183271908;
  _DAT_183271748 = 0xf7f7bdbfa38673d6;
  uVar6 = (~_DAT_1832716f8 + 0x5196c730d4168e92) *
          ((_DAT_1832717e8 ^ 0xb8be0c132528a658) + (_DAT_1832717e8 & 0x38be0c132528a658) * 2);
  uVar6 = (uVar6 | _DAT_1832719c8) + (uVar6 & _DAT_1832719c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271950 = func_0x00018ad03100((uVar6 | 0xe928cb23f13e28c9) + (uVar6 & 0xe928cb23f13e28c9));
  uVar6 = _DAT_183271950 >> 1 | _DAT_183271950;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183271950;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar7;
  _DAT_183271a70 = (_DAT_183271a70 ^ uVar7) + 0xe928cb23751c0bec ^ 0x928f991518505896;
  _DAT_1832715e8 = (_DAT_1832715e8 * -0x2866ba8ccbb48fb5 ^ _DAT_183271a70) + uVar7;
  _DAT_183271ae0 = _DAT_1832715e8 ^ _DAT_183271a70;
  _DAT_1832718d8 = 0xe928cb23751c0bec;
  uVar6 = (~_DAT_1832715c0 + 0x71fea61cea5db529) *
          ((_DAT_183271a30 ^ 0x84222330) + (ulonglong)((uint)_DAT_183271a30 & 0x84222330) * 2);
  uVar6 = (uVar6 | _DAT_183271950) + (uVar6 & _DAT_183271950);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271940 = func_0x00018ad03100((uVar6 | 0x71fea61c6e7f9618) + (uVar6 & 0x71fea61c6e7f9618));
  uVar6 = (_DAT_183271940 ^ 0x59e3a05f39afdc48) & 0x7fffffffffffffff;
  uVar7 = ((_DAT_183271940 ^ 0x59e3a05f39afdc48) & 0x7fffffffffffffff) >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ uVar6) & 0x7fffffffffffffff;
  _DAT_183271a68 = _DAT_183271880 ^ uVar6 ^ 0x71fea61cea5db53d;
  _DAT_183271648 = (_DAT_183271648 ^ uVar6) + 0x71fea61cea5db53d ^ 0x4412d35feb39361b;
  _DAT_1832715d8 = (_DAT_1832715d8 * 0x10b3196816e09ee7 ^ _DAT_183271648) + uVar6;
  _DAT_1832716e8 = _DAT_1832715d8 ^ _DAT_183271648;
  _DAT_183271688 = 0x71fea61cea5db53d;
  uVar6 = (~_DAT_183271910 + 0x6341ff1ba810900a) *
          ((_DAT_183271860 ^ 0x84222325) + (ulonglong)((uint)_DAT_183271860 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183271a48) + (uVar6 & _DAT_183271a48);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271680 = func_0x00018ad03100((uVar6 | 0x6341ff1b2c32b32c) + (uVar6 & 0x6341ff1b2c32b32c));
  uVar6 = (_DAT_183271680 & 0x1ffffffffff) << 8 | _DAT_183271680 >> 0x38;
  _DAT_183271520 = (_DAT_183271520 ^ uVar6) + 0x9cbe00e457ef6ff7 ^ 0x6ba7b2d35a3af002;
  _DAT_183271598 = (_DAT_183271598 * -0x15bad88f92b9188f ^ _DAT_183271520) + uVar6;
  _DAT_183271970 = _DAT_183271598 ^ _DAT_183271520;
  _DAT_183271648 = 0x9cbe00e457ef6ff7;
  _DAT_183271580 = func_0x00018ad03100(_DAT_183271a18 + 0xe4af412c27f511e0 ^ 0xfa);
  uVar6 = _DAT_183271580 - (_DAT_183271580 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (_DAT_183271580 & 0x7ffffffffffffff) >> 0x28 |
          (((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
           _DAT_183271580) << 5 | _DAT_183271580 >> 0x3b) << 0x13;
  _DAT_183271a78 = _DAT_183271528 ^ uVar6 ^ 0x6341ff1ba810901e;
  _DAT_183271ab0 = (_DAT_183271ab0 ^ uVar6) + 0x6341ff1ba810901e ^ 0x1c31a3d690776a4a;
  _DAT_183271888 = (_DAT_183271888 * -0x7917953fa3c63109 ^ _DAT_183271ab0) + uVar6;
  _DAT_1832717f0 = _DAT_183271888 ^ _DAT_183271ab0;
  _DAT_183271840 = _DAT_183271618 ^ 0x6341ff1ba810901e;
  _DAT_183271838 = 0x6341ff1ba810901e;
  uVar6 = (~_DAT_183271830 + 0x9cbe00e457ef6ff8) *
          ((_DAT_183271af0 ^ 0x6341ff1b2c32b33b) + (_DAT_183271af0 & 0x6341ff1b2c32b33b) * 2);
  uVar6 = (uVar6 | _DAT_183271880) + (uVar6 & _DAT_183271880);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271698 = func_0x00018ad03100((uVar6 | 0xffffffff7bdddccc) + (uVar6 & 0xffffffff7bdddccc));
  uVar6 = _DAT_183271698 * 0x37ab44ec11055535;
  _DAT_183271730 = _DAT_183271840 ^ uVar6 ^ 0x15;
  _DAT_1832719a8 = (_DAT_1832719a8 ^ uVar6) + 0x15 ^ 0xef5e2724da857b3b;
  _DAT_1832716f8 = (_DAT_1832716f8 * 0x61535c236d7da173 ^ _DAT_1832719a8) + uVar6;
  _DAT_183271578 = _DAT_1832716f8 ^ _DAT_1832719a8;
  _DAT_1832717f8 = 0x15;
  lVar1 = func_0x00018ad03100(_DAT_1832715a0 + 0xa270ddfef72fc7cf ^ 0xd);
  _DAT_183271970 = lVar1 * -0x7d3f8ea9b89a555;
  uVar6 = _DAT_183271970 - (_DAT_183271970 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  _DAT_183271970 =
       (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
       _DAT_183271970;
  _DAT_183271938 = _DAT_1832719d0 ^ _DAT_183271970 ^ 0x3022d0e5876ad23d;
  _DAT_1832718e0 = (_DAT_1832718e0 ^ _DAT_183271970) + 0x3022d0e5876ad23d ^ 0x7ed8ded3e8cb34c7;
  _DAT_183271970 = (lVar1 * 0x4ac7e85dc0750339 ^ _DAT_1832718e0) + _DAT_183271970;
  _DAT_1832717c8 = _DAT_183271970 ^ _DAT_1832718e0;
  _DAT_183271958 = 0x3022d0e5876ad23d;
  uVar6 = (~_DAT_1832717a8 + 0xcfdd2f1a78952dd9) *
          ((_DAT_183271a98 ^ 0x3022d0e50348f118) + (_DAT_183271a98 & 0x3022d0e50348f118) * 2);
  uVar6 = (uVar6 | _DAT_183271800) + (uVar6 & _DAT_183271800);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271ad8 = func_0x00018ad03100((uVar6 | 0xffffffff7bdddcc0) + (uVar6 & 0xffffffff7bdddcc0));
  uVar6 = (_DAT_183271ad8 ^ 0xcfdd2f1a78952dd8) << 0x1f |
          (_DAT_183271ad8 ^ 0xcfdd2f1a78952dd8) >> 0x21;
  _DAT_183271ac0 = _DAT_183271a38 ^ uVar6 ^ 0x15;
  _DAT_183271a68 = (_DAT_183271a68 ^ uVar6) + 0x15 ^ 0xc98734edebd47b0b;
  _DAT_183271988 = (_DAT_183271988 * 0x62ac17143f3a81ab ^ _DAT_183271a68) + uVar6;
  _DAT_183271718 = _DAT_183271988 ^ _DAT_183271a68;
  _DAT_183271758 = 0x15;
  _DAT_183271a10 = func_0x00018ad03100(_DAT_183271710 + 0x83dad0d212aa67f9 ^ 0x99);
  uVar6 = _DAT_183271a10 ^ 0xf7f7bdbfa38673d6;
  _DAT_183271928 = _DAT_183271a30 ^ uVar6 ^ 0xe12088e318a27fc2;
  _DAT_183271658 = (_DAT_183271658 ^ uVar6) + 0xe12088e318a27fc2 ^ 0x6cdaf1a0778ee0fa;
  _DAT_183271558 = (_DAT_183271558 * -0xe1f438c4bc8dcef ^ _DAT_183271658) + uVar6;
  _DAT_183271568 = _DAT_183271558 ^ _DAT_183271658;
  _DAT_183271768 = 0xe12088e318a27fc2;
  uVar6 = (~_DAT_1832719b8 + 0xe928cb23751c0bed) *
          ((_DAT_183271520 ^ 0xf7f7bdbf27a450f3) + (_DAT_183271520 & 0x77f7bdbf27a450f3) * 2);
  uVar6 = (uVar6 | _DAT_183271700) + (uVar6 & _DAT_183271700);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271ac0 = func_0x00018ad03100((uVar6 | 0x1edf769c52b85b1f) + (uVar6 & 0x1edf769c52b85b1f));
  _DAT_183271588 =
       (_DAT_183271588 ^ _DAT_183271ac0 ^ 0x9b1ebb26a3d2889e) + 0x1edf769cd69a783a ^
       0xbcaf234df4702f5e;
  _DAT_1832716c0 =
       (_DAT_1832716c0 * 0x410a5b39d50a7495 ^ _DAT_183271588) +
       (_DAT_183271ac0 ^ 0x9b1ebb26a3d2889e);
  _DAT_183271a08 = _DAT_1832716c0 ^ _DAT_183271588;
  _DAT_1832715d0 = 0x1edf769cd69a783a;
  uVar6 = (_DAT_183271520 ^ _DAT_1819915e0) + _DAT_183271770 + 0xf7f7bdbf27a450f3;
  uVar7 = (_DAT_183271770 ^ _UNK_1819915e8) + _DAT_183271520 + 0xe928cb23751c0bec;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271520 ^ _DAT_1819915e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183271770 ^ _UNK_1819915e8;
  _DAT_1832716f0 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183271520 + 0xe928cb23751c0bec) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271770 + 0xf7f7bdbf27a450f3));
  _DAT_183271600 =
       (_DAT_183271600 ^ _DAT_1832716f0 ^ 0xffffffbff79e7bfe) + 0xe1208923210403c4 ^
       0x13e41e67a950fa95;
  _DAT_183271980 =
       (_DAT_183271980 * 0x699f777fe7f57479 ^ _DAT_183271600) +
       (_DAT_1832716f0 ^ 0xffffffbff79e7bfe);
  _DAT_1832716a8 = _DAT_183271980 ^ _DAT_183271600;
  _DAT_183271a40 = 0xe1208923210403c4;
  _DAT_183271ab0 = func_0x00018ad03100(_DAT_183271658 + 0x45b47df0731baf4b ^ 0x43);
  uVar6 = _DAT_183271ab0 - (_DAT_183271ab0 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183271ab0) << 0x1e | _DAT_183271ab0 >> 0x22;
  _DAT_1832718d0 = _DAT_183271798 ^ uVar6 ^ 0xe12088e318a27fc2;
  _DAT_183271848 = (_DAT_183271848 ^ uVar6) + 0xe12088e318a27fc2 ^ 0x71e52e78fad993f;
  _DAT_1832715f0 = (_DAT_1832715f0 * 0x48994828c2b97b4b ^ _DAT_183271848) + uVar6;
  _DAT_1832717a8 = _DAT_1832715f0 ^ _DAT_183271848;
  _DAT_183271748 = 0xe12088e318a27fc2;
  _DAT_183271610 = func_0x00018ad03100(_DAT_183271680 + 0xffdd0083e5001dff ^ 0x7c);
  uVar7 = _DAT_183271610 * -0x3b5a33c04a3b135;
  uVar6 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  _DAT_1832716a8 =
       ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar7) *
       -0x57ee857b12bba767;
  _DAT_183271620 = _DAT_183271620 ^ _DAT_1832716a8 ^ 0x7969d41bba05b7a0;
  _DAT_183271640 = (_DAT_183271640 * 0x565b5219a5da400d ^ _DAT_183271620) + _DAT_1832716a8;
  _DAT_183271a40 = _DAT_183271640 ^ _DAT_183271620;
  _DAT_1832718f0 = _DAT_183271a68;
  _DAT_183271940 = 0;
  _DAT_1832717a0 = func_0x00018ad03100(_DAT_1832718f8 + 0xffdcff7bd0001dff ^ 0x9d);
  uVar6 = _DAT_1832717a0 ^ 0x15;
  _DAT_183271530 = _DAT_183271748 ^ uVar6 ^ 0x15;
  _DAT_183271588 = (_DAT_183271588 ^ uVar6) + 0x15 ^ 0x89eafc39ac63c8b5;
  _DAT_183271aa8 = (_DAT_183271aa8 * 0x4d30f50417a1db1 ^ _DAT_183271588) + uVar6;
  _DAT_183271770 = _DAT_183271aa8 ^ _DAT_183271588;
  _DAT_1832716a0 = 0x15;
  uVar6 = (_DAT_1832715b0 ^ _DAT_1819915f0) + _DAT_1832715f8 + 0xf7f7bdbf27a450f3;
  uVar7 = (_DAT_1832715f8 ^ _UNK_1819915f8) + (_DAT_1832715b0 - 1);
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832715b0 ^ _DAT_1819915f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832715f8 ^ _UNK_1819915f8;
  _DAT_183271930 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832715b0 - 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832715f8 + 0xf7f7bdbf27a450f3));
  uVar6 = _DAT_183271930 >> 1 | _DAT_183271930;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183271930) & 0xffffffffff;
  _DAT_1832718e0 = (_DAT_1832718e0 ^ uVar6) + 0x80842405c798c29 ^ 0x214520803aa776d3;
  _DAT_183271a50 = (_DAT_183271a50 * 0x5847ec3d84524891 ^ _DAT_1832718e0) + uVar6;
  _DAT_183271670 = _DAT_183271a50 ^ _DAT_1832718e0;
  _DAT_1832717b8 = 0x80842405c798c29;
  _DAT_183271948 = func_0x00018ad03100(_DAT_1832719a8 + 0x594b63755a67b32e ^ 0xb3);
  _DAT_183271aa0 = _DAT_183271aa0 ^ _DAT_183271948 ^ 0xf7f7bdbfa38673d6 ^ 0x98cf73f3542af6fc;
  _DAT_183271678 =
       (_DAT_183271678 * 0x3a1b00d1967a4fdf ^ _DAT_183271aa0) +
       (_DAT_183271948 ^ 0xf7f7bdbfa38673d6);
  _DAT_183271af0 = _DAT_183271678 ^ _DAT_183271aa0;
  _DAT_183271750 = 0;
  uVar6 = ((_DAT_183271708 ^ 0x84222330) + (ulonglong)((uint)_DAT_183271708 & 0x84222330) * 2) *
          -_DAT_183271710;
  uVar6 = (uVar6 | _DAT_1832718b8) + (uVar6 & _DAT_1832718b8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183271638 = func_0x00018ad03100((uVar6 | 0x84222330) + (ulonglong)((uint)uVar6 & 0x84222330))
  ;
  uVar6 = _DAT_183271638 ^ 0x15;
  _DAT_183271900 = _DAT_183271578 ^ uVar6 ^ 0x15;
  _DAT_183271870 = (_DAT_183271870 ^ uVar6) + 0x15 ^ 0xd56cae28deb9841a;
  _DAT_183271548 = (_DAT_183271548 * -0x513f6dedbcae7125 ^ _DAT_183271870) + uVar6;
  _DAT_1832718f8 = _DAT_183271548 ^ _DAT_183271870;
  _DAT_183271830 = 0x15;
  uVar6 = (_DAT_183271838 ^ 0x84222330) + _DAT_183271af0 + 0x84222330;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183271838 ^ 0x84222330;
  uVar7 = ((_DAT_183271af0 + _DAT_183271838) * 0x2000 | _DAT_183271af0 + _DAT_183271838 >> 0x33) ^
          _DAT_183271af0;
  _DAT_1832719e8 =
       func_0x00018ad03100((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183271838 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183271af0 + 0x84222330));
  uVar6 = (ulonglong)(~(uint)_DAT_1832719e8 & 0x15);
  _DAT_183271a60 = _DAT_183271870 ^ uVar6 ^ 0x15;
  _DAT_1832719b8 = (_DAT_1832719b8 ^ uVar6) + 0x15 ^ 0x6b3d22722b98b16f;
  _DAT_183271a18 = (_DAT_183271a18 * -0x661e823b3e48b313 ^ _DAT_1832719b8) + uVar6;
  _DAT_183271720 = _DAT_183271a18 ^ _DAT_1832719b8;
  _DAT_1832719a8 = 0x15;
  switch(uVar2 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ace3300 (image 18ace3300) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ace3300(void)

{
  int iVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  undefined8 unaff_R15;
  
  *(undefined4 *)(unaff_RBP + 0x80) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x88) = unaff_R15;
  *(undefined4 *)(unaff_RBP + 0x90) = unaff_EDI;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x90) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad05b9e (image 18ad05b9e) =====

void FUN_18ad05b9e(void)

{
  return;
}



// ===== continuation @ rva ad059f7 (image 18ad059f7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad059f7(void)

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



// ===== continuation @ rva ad08f7c (image 18ad08f7c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad08f7c(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  cVar1 = (**(code **)(*unaff_RBX + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad09fc8 (image 18ad09fc8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad09fc8(void)

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



// ===== continuation @ rva ad05ef0 (image 18ad05ef0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad05ef0(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad089ae (image 18ad089ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad089ae(void)

{
  int iVar1;
  undefined8 in_RAX;
  longlong *unaff_R13;
  int in_stack_00000038;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)(char)in_RAX);
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad085d0 (image 18ad085d0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad085d0(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  cVar1 = (**(code **)(*unaff_R13 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad0804a (image 18ad0804a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad0804a(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad07ecf (image 18ad07ecf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad07ecf(void)

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



// ===== continuation @ rva ad05e21 (image 18ad05e21) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad05e21(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad0a373 (image 18ad0a373) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad0a373(void)

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



// ===== continuation @ rva ad0a31f (image 18ad0a31f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0a31f(void)

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



// ===== continuation @ rva ad0b0d8 (image 18ad0b0d8) =====

void FUN_18ad0b0d8(void)

{
  return;
}



// ===== continuation @ rva ad0aa4b (image 18ad0aa4b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0aa4b(void)

{
  FUN_190de3220();
  (*_DAT_181997c38)();
  return;
}



// ===== continuation @ rva ad0ac3a (image 18ad0ac3a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0ac3a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181997b08)();
  return;
}



// ===== continuation @ rva ad0ac19 (image 18ad0ac19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad0ac19(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad0b0e6 (image 18ad0b0e6) =====

void FUN_18ad0b0e6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ad0a7f2 (image 18ad0a7f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad0a7f2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad0a8b7 (image 18ad0a8b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0a8b7(void)

{
  FUN_190dd72e0();
  (*_DAT_181997d38)();
  return;
}



// ===== continuation @ rva ad0af4c (image 18ad0af4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0af4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181997e98)();
  return;
}



// ===== continuation @ rva ad0b0a3 (image 18ad0b0a3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0b0a3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181997d78)();
  return;
}



// ===== continuation @ rva ad0ac59 (image 18ad0ac59) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad0ac59(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad0db2d (image 18ad0db2d) =====

void FUN_18ad0db2d(void)

{
  return;
}



// ===== continuation @ rva ad0b250 (image 18ad0b250) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0b250(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181998788)();
  return;
}



// ===== continuation @ rva ad0da32 (image 18ad0da32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0da32(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1819983d8)();
  return;
}



// ===== continuation @ rva ad0d9fb (image 18ad0d9fb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad0d9fb(void)

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



// ===== continuation @ rva ad0d3b2 (image 18ad0d3b2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad0d3b2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad0c382 (image 18ad0c382) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0c382(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181998ba8)();
  return;
}



// ===== continuation @ rva ad0b346 (image 18ad0b346) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0b346(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_181998888)();
  return;
}



// ===== continuation @ rva ad0b2e8 (image 18ad0b2e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0b2e8(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1819982d8)();
  return;
}



// ===== continuation @ rva ad0b4f0 (image 18ad0b4f0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad0b4f0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ad0bcc3 (image 18ad0bcc3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0bcc3(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181998c18)();
  return;
}



// ===== continuation @ rva ad0b694 (image 18ad0b694) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0b694(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_181998378)();
  return;
}



// ===== continuation @ rva ad0cddc (image 18ad0cddc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0cddc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181998ba8)();
  return;
}



// ===== continuation @ rva ad0ffb1 (image 18ad0ffb1) =====

void FUN_18ad0ffb1(void)

{
  return;
}



// ===== continuation @ rva ad0fe15 (image 18ad0fe15) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad0fe15(void)

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



// ===== continuation @ rva ad103e7 (image 18ad103e7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad103e7(void)

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



// ===== continuation @ rva ad12214 (image 18ad12214) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad12214(void)

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



// ===== continuation @ rva ad18330 (image 18ad18330) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad18330(void)

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



// ===== continuation @ rva ad116b5 (image 18ad116b5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad116b5(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined4 uStack00000000000000bc;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined2 uStack0000000000000100;
  
  uStack00000000000000bc = 0xc06be05;
  rdtsc();
  uStack00000000000000e0 = 0x2f005300450044;
  rdtsc();
  uStack00000000000000e8 = 0x2f004300420043;
  rdtsc();
  uStack00000000000000f0 = 0x610050006f004e;
  rdtsc();
  uStack00000000000000f8 = 0x6e006900640064;
  rdtsc();
  uStack0000000000000100 = 0x67;
  (**(code **)(*in_stack_00000030 + 0x518))(in_stack_00000030,&stack0x000000e0,0x11);
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



// ===== continuation @ rva ad12763 (image 18ad12763) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad12763(void)

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



// ===== continuation @ rva ad183db (image 18ad183db) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ad183db(void)

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



// ===== continuation @ rva ad11253 (image 18ad11253) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ad11253(void)

{
  char cVar1;
  longlong *unaff_RBX;
  undefined8 in_stack_00000030;
  
  FUN_190de3220();
  cVar1 = (**(code **)(*unaff_RBX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aca59f2 (image 18aca59f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca59f2(void)

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



// ===== continuation @ rva aca599e (image 18aca599e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca599e(void)

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



// ===== continuation @ rva aca6831 (image 18aca6831) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca6831(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181985bb8)();
  return;
}



// ===== continuation @ rva aca5cbd (image 18aca5cbd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca5cbd(void)

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



// ===== continuation @ rva aca6865 (image 18aca6865) =====

void FUN_18aca6865(void)

{
  return;
}



// ===== continuation @ rva aca6586 (image 18aca6586) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca6586(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_181985b38)();
  return;
}



// ===== continuation @ rva aca6609 (image 18aca6609) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca6609(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181985ed8)();
  return;
}



// ===== continuation @ rva aca62dd (image 18aca62dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca62dd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_181985bc8)();
  return;
}



// ===== continuation @ rva aca6874 (image 18aca6874) =====

void FUN_18aca6874(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva aca620c (image 18aca620c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca620c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aca5bf8 (image 18aca5bf8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca5bf8(void)

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



// ===== continuation @ rva aca611c (image 18aca611c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca611c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181985d78)();
  return;
}



// ===== continuation @ rva aca8986 (image 18aca8986) =====

void FUN_18aca8986(void)

{
  return;
}



// ===== continuation @ rva aca69ec (image 18aca69ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca69ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181986a48)();
  return;
}



// ===== continuation @ rva aca87dc (image 18aca87dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca87dc(void)

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



// ===== continuation @ rva aca84ec (image 18aca84ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca84ec(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181986da8)();
  return;
}



// ===== continuation @ rva aca93be (image 18aca93be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca93be(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181986cb8)();
  return;
}



// ===== continuation @ rva aca75cb (image 18aca75cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca75cb(void)

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



// ===== continuation @ rva aca7bb9 (image 18aca7bb9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca7bb9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181986a68)();
  return;
}



// ===== continuation @ rva aca94c4 (image 18aca94c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca94c4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819869d8)();
  return;
}



// ===== continuation @ rva aca8fbc (image 18aca8fbc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca8fbc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181986cc8)();
  return;
}



// ===== continuation @ rva aca89c9 (image 18aca89c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aca89c9(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000078;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(in_stack_00000078 < 0 || iVar1 <= in_stack_00000078) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva aca7e93 (image 18aca7e93) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca7e93(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181986bf8)();
  return;
}



// ===== continuation @ rva aca7e35 (image 18aca7e35) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca7e35(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181986d08)();
  return;
}



// ===== continuation @ rva aca77ea (image 18aca77ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aca77ea(void)

{
  (*_DAT_181986e78)();
  return;
}



