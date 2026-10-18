// ===== continuation @ rva d7c61b5 (image 18d7c61b5) =====

void FUN_18d7c61b5(void)

{
  return;
}



// ===== continuation @ rva d7ab4fb (image 18d7ab4fb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d7ab551 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d7ab4fb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d7bb0e2 (image 18d7bb0e2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7bb0e2(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000058;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar6 = (_DAT_1833680f0 ^ _DAT_182294910) + _DAT_183368040 + 0x511ce373;
  uVar7 = (_DAT_183368040 ^ _UNK_182294918) + _DAT_1833680f0 + 0x58c2b4da;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833680f0 ^ _DAT_182294910;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183368040 ^ _UNK_182294918;
  uVar2 = param_1 << 0x10;
  _DAT_183367fb8 =
       func_0x00018d7c63a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833680f0 + 0x58c2b4da) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183368040 + 0x511ce373));
  uVar6 = (_DAT_183367fb8 & 0x3ffffffffff) * 0xeca43e3e7ce6be9;
  _DAT_183367fa0 = (_DAT_183367fa0 ^ uVar6) + 0x8dfc748c ^ 0x7d5fe7770ebe751f;
  _DAT_183368150 = (_DAT_183368150 * 0x6b30c5861b1d1ee3 ^ _DAT_183367fa0) + uVar6;
  _DAT_183367e38 = _DAT_183368150 ^ _DAT_183367fa0;
  _DAT_183368240 = 0x8dfc748c;
  _DAT_183368208 = func_0x00018d7c63a0(_DAT_1833684b8 + 0xffafffa2c10007ffU ^ 0xb9);
  _DAT_1833682f0 = (_DAT_1833682f0 ^ _DAT_183368208) - 0x5b3a7364 ^ 0x1bf1e5651b27981e;
  _DAT_183368110 = (_DAT_183368110 * -0x505e39e70c0b807 ^ _DAT_1833682f0) + _DAT_183368208;
  _DAT_183368490 = _DAT_183368110 ^ _DAT_1833682f0;
  _DAT_1833680d0 = 0xa4c58c9c;
  _DAT_183367d60 = func_0x00018d7c63a0(_DAT_1833683e8 ^ 0x4fffc73eff1af6);
  uVar6 = _DAT_1833682e8 * -0x3c7ec1a108d44fa9;
  _DAT_1833683f8 = _DAT_183367f20 ^ uVar6 ^ 0x5c397364;
  _DAT_183368198 = (_DAT_183368198 ^ uVar6) + 0x5c397364 ^ 0xd0b3ee5ed4a161be;
  _DAT_183367fb0 = (_DAT_183367fb0 * 0x4546826b1e5a4d9d ^ _DAT_183368198) + uVar6;
  _DAT_183368060 = _DAT_183367fb0 ^ _DAT_183368198;
  _DAT_1833682d8 = 0x5c397364;
  uVar6 = (_DAT_183368040 ^ _DAT_182294920) + _DAT_183368240 + 0xd81b5041;
  uVar7 = (_DAT_183368240 ^ _UNK_182294928) + _DAT_183368040 + 0xa4c58c9c;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183368040 ^ _DAT_182294920;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183368240 ^ _UNK_182294928;
  _DAT_183367e58 =
       func_0x00018d7c63a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183368040 + 0xa4c58c9c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183368240 + 0xd81b5041));
  uVar6 = (_DAT_183367e58 ^ 0xfcfdfffc) & 0x7ffffffff ^ 0xa4c58c9c;
  _DAT_183368390 = _DAT_183367d80 ^ uVar6 ^ 0x100ff0000;
  _DAT_183367f80 = (_DAT_183367f80 ^ uVar6) + 0x100ff0000 ^ 0x5c892dbf6f94b8d2;
  _DAT_183367f68 = (_DAT_183367f68 * -0x556b48bad460939f ^ _DAT_183367f80) + uVar6;
  _DAT_1833684e8 = _DAT_183367f68 ^ _DAT_183367f80;
  _DAT_1833682b8 = 0xff0000;
  uVar6 = (_DAT_183368400 ^ _DAT_182294930) + _DAT_1833683a8 + 0x84222325;
  uVar7 = (_DAT_1833683a8 ^ _UNK_182294938) + _DAT_183368400 + 0x38e449ac;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183368400 ^ _DAT_182294930;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833683a8 ^ _UNK_182294938;
  _DAT_183367e10 =
       func_0x00018d7c63a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183368400 + 0x38e449ac) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833683a8 + 0x84222325));
  _DAT_1833682d0 = (_DAT_1833682d0 ^ _DAT_183367e10 ^ 0x38e449ac) - 0x38e449ac ^ 0x576275e619c9c694;
  _DAT_183368488 =
       (_DAT_183368488 * 0x73d0e07832e42da9 ^ _DAT_1833682d0) + (_DAT_183367e10 ^ 0x38e449ac);
  _DAT_183368240 = _DAT_183368488 ^ _DAT_1833682d0;
  _DAT_1833684d8 = 0xc71bb654;
  uVar6 = (~_DAT_183367d08 + 0x38e449ad) *
          ((_DAT_1833684f8 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_1833684f8 & 0x84dd2325) * 2);
  uVar6 = (uVar6 | _DAT_183367d80) + (uVar6 & _DAT_183367d80);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183367ed8 = func_0x00018d7c63a0((uVar6 | 0xbc396a89) + (ulonglong)((uint)uVar6 & 0xbc396a89))
  ;
  uVar6 = _DAT_183367ed8 & 0xffffffffffff0000;
  _DAT_1833683a0 = _DAT_183368260 ^ uVar6 ^ 0x39e349ac;
  _DAT_183367db0 = (_DAT_183367db0 ^ uVar6) + 0x39e349ac ^ 0x7be2e7966d65b755;
  _DAT_1833683e8 = (_DAT_1833683e8 * 0x1def454244e86c5b ^ _DAT_183367db0) + uVar6;
  _DAT_183368390 = _DAT_1833683e8 ^ _DAT_183367db0;
  _DAT_183368438 = 0x39e349ac;
  uVar6 = (_DAT_183367d58 ^ _DAT_182294940) + _DAT_183368308 + 0xbdc16a89;
  uVar7 = (_DAT_183368308 ^ _UNK_182294948) + _DAT_183367d58 + 0xc71bb654;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183367d58 ^ _DAT_182294940;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183368308 ^ _UNK_182294948;
  uVar6 = func_0x00018d7c63a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183367d58 + 0xc71bb654) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183368308 + 0xbdc16a89));
  _DAT_1833681d8 = _DAT_183368120 ^ uVar6 ^ 0x100ff0000;
  _DAT_183368190 = (_DAT_183368190 ^ uVar6) + 0x100ff0000 ^ 0xbf8beb91e6020815;
  _DAT_183367d00 = (_DAT_183367d00 * -0x500a682434a0343b ^ _DAT_183368190) + uVar6;
  _DAT_183367f68 = _DAT_183367d00 ^ _DAT_183368190;
  _DAT_183367d50 = 0xff0000;
  _DAT_183368140 = func_0x00018d7c63a0(_DAT_183368358 + 0xff7bff4cbdff8bffU ^ 0xc2);
  uVar6 = _DAT_183368140 << 0x32 | _DAT_183368140 >> 0xe;
  _DAT_183368238 = (_DAT_183368238 ^ uVar6) + 0x8448508c ^ 0xcce5dfc367a7a7b2;
  _DAT_183367f18 = (_DAT_183367f18 * -0x39c040992c723997 ^ _DAT_183368238) + uVar6;
  _DAT_183368118 = _DAT_183367f18 ^ _DAT_183368238;
  _DAT_183367e20 = 0x8448508c;
  uVar6 = (_DAT_1833680b0 ^ _DAT_182294950) + _DAT_1833682a0 + 0x665735e;
  uVar7 = (_DAT_1833682a0 ^ _UNK_182294958) + _DAT_1833680b0 + 0x8247507b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833680b0 ^ _DAT_182294950;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833682a0 ^ _UNK_182294958;
  _DAT_183368068 =
       func_0x00018d7c63a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833680b0 + 0x8247507b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833682a0 + 0x665735e));
  _DAT_183367f58 = (ulonglong)((uint)_DAT_183368068 & 0x8247507b | 0x7b);
  _DAT_183368148 = _DAT_183368148 ^ _DAT_183367f58 ^ 0x3f9cd293e828f821;
  _DAT_183367f70 = (_DAT_183367f70 * 0x6e7591bdf523fd61 ^ _DAT_183368148) + _DAT_183367f58;
  _DAT_183368228 = _DAT_183367f70 ^ _DAT_183368148;
  _DAT_1833682e8 = _DAT_183367d30;
  _DAT_183368178 = 0;
  uVar6 = (_DAT_183368268 ^ 0x84dd2325) + _DAT_183368388 + 0x84dd2325;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183368268 ^ 0x84dd2325;
  uVar7 = ((_DAT_183368388 + _DAT_183368268) * 0x2000 | _DAT_183368388 + _DAT_183368268 >> 0x33) ^
          _DAT_183368388;
  _DAT_1833683b0 =
       func_0x00018d7c63a0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183368268 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183368388 + 0x84dd2325));
  uVar6 = _DAT_1833683b0 << 0x28 | _DAT_1833683b0 >> 0x18;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar6) * 0x709b57e40219a20d;
  _DAT_183368110 = _DAT_183367dc0 ^ uVar6 ^ 0xff0000;
  _DAT_183368420 = (_DAT_183368420 ^ uVar6) + 0xff0000 ^ 0xab0d3b2d8c05fa61;
  _DAT_183367dc0 = (_DAT_183367dc0 * 0x310bbf7cd67799ab ^ _DAT_183368420) + uVar6;
  _DAT_183367eb0 = _DAT_183367dc0 ^ _DAT_183368420;
  _DAT_183367de8 = 0xff0000;
  _DAT_183367e00 = func_0x00018d7c63a0(_DAT_1833683f8 ^ 0x30076f2ff6cd0);
  uVar6 = (_DAT_183367e00 ^ 0xf44adbeefffffffe) << 0x11 |
          (_DAT_183367e00 ^ 0xf44adbeefffffffe) >> 0x2f;
  _DAT_183368220 = (_DAT_183368220 ^ uVar6) + 0xbb52410 ^ 0xa716920d157029ae;
  _DAT_1833682f0 = (_DAT_1833682f0 * 0x1d62c0688e4136cf ^ _DAT_183368220) + uVar6;
  _DAT_183368228 = _DAT_1833682f0 ^ _DAT_183368220;
  _DAT_183367dc8 = 0xbb52410;
  uVar6 = (~_DAT_183367f58 + 0xbb52411) *
          ((_DAT_1833684a0 ^ 0x7068f8ca) + (ulonglong)((uint)_DAT_1833684a0 & 0x7068f8ca) * 2);
  uVar6 = (uVar6 | _DAT_183367e30) + (uVar6 & _DAT_183367e30);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183368078 = func_0x00018d7c63a0((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda))
  ;
  _DAT_183367d00 = _DAT_183367d00 ^ _DAT_183367ed0 ^ 0xc4a60bc2d3769aaa;
  _DAT_183367f88 = (_DAT_183367f88 * 0x5d368551e0e18d99 ^ _DAT_183367d00) + _DAT_183367ed0;
  _DAT_1833684c8 = _DAT_183367f88 ^ _DAT_183367d00;
  _DAT_183368058 = 0;
  _DAT_183367ec8 = func_0x00018d7c63a0(_DAT_183368190 + 0xffdcff7c25004cff ^ 0x11);
  _DAT_1833683e8 = _DAT_183368240 ^ _DAT_183367d18 ^ 0xff0000;
  _DAT_183367e30 = (_DAT_183367e30 ^ _DAT_183367d18) + 0xff0000 ^ 0x73cc747677175f93;
  _DAT_183368170 = (_DAT_183368170 * 0x779e3a080a484093 ^ _DAT_183367e30) + _DAT_183367d18;
  _DAT_1833681d8 = _DAT_183368170 ^ _DAT_183367e30;
  _DAT_183368350 = 0xff0000;
  _DAT_183367d68 = func_0x00018d7c63a0(_DAT_183367e20 ^ 0xffdf0083db00b4a6);
  uVar6 = ((_DAT_183367d68 ^ 0xff0000) << 0x2b | (_DAT_183367d68 ^ 0xff0000) >> 0x15) ^ 0xff0000;
  _DAT_183368150 = _DAT_183368430 ^ uVar6 ^ 0xff0000;
  _DAT_183367ff0 = (_DAT_183367ff0 ^ uVar6) + 0xff0000 ^ 0x4b5894adaa8e0c5f;
  _DAT_1833684a8 = (_DAT_1833684a8 * 0x58bbb73c15e3a89b ^ _DAT_183367ff0) + uVar6;
  _DAT_183367d78 = _DAT_1833684a8 ^ _DAT_183367ff0;
  auVar4._8_8_ = _UNK_180131b48;
  auVar4._0_8_ = (ulonglong)uVar2 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_182294960,_DAT_1800170c0);
  _DAT_183367f78 = 0xff0000;
  uVar7 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar7 + _DAT_183368378;
  if (auVar5._4_4_ < 0) {
    uVar6 = _DAT_1833681f8 ^ uVar7;
  }
  _DAT_183367df8 = func_0x00018d7c63a0(SUB161(auVar4 ^ _DAT_182294960,5) ^ uVar6);
  uVar6 = ((ulonglong)uVar2 * 0xff0000 ^ _DAT_183367df8) & 0x7fffffff800000;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar6;
  uVar3 = (ulonglong)(uVar2 & 0xff0000);
  _DAT_183368378 = (_DAT_183368378 ^ uVar6) + uVar3 ^ 0x13c84f1060edcdb;
  _DAT_183367e78 = (_DAT_183367e78 * -0x4308041dfb6fbaab ^ _DAT_183368378) + uVar6;
  _DAT_183367d88 = _DAT_183367e78 ^ _DAT_183368378;
  uVar7 = in_stack_00000058 ^ 0x84222325;
  uVar6 = ((_DAT_183368208 ^ uVar7) + (uVar7 & _DAT_183368208) * 2) * (uVar3 - _DAT_183367ee8);
  uVar6 = (uVar6 | _DAT_183367e20) + (uVar6 & _DAT_183367e20);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183368180 = uVar3;
  _DAT_183368288 = func_0x00018d7c63a0((uVar7 ^ uVar3 | uVar6) + (uVar6 & (uVar7 ^ uVar3)));
  uVar6 = (in_stack_00000058 * uVar3 ^ _DAT_183368288) & 0x3ffffffffff;
  _DAT_183367df0 = in_stack_00000058 | uVar3;
  _DAT_183368338 = (_DAT_183368338 ^ uVar6) + _DAT_183367df0 ^ 0x4fb2878141df6ef5;
  _DAT_183367d18 = (_DAT_183367d18 * -0x115ce7467cde5e49 ^ _DAT_183368338) + uVar6;
  _DAT_183368228 = _DAT_183367d18 ^ _DAT_183368338;
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



// ===== continuation @ rva d7c5dec (image 18d7c5dec) =====

void FUN_18d7c5dec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4d0))();
  (**(code **)(*unaff_RSI + 0x720))();
  return;
}



// ===== continuation @ rva d7ad8a5 (image 18d7ad8a5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d7ad8f9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d7ad8a5(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d7c5bae (image 18d7c5bae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7c5bae(void)

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



// ===== continuation @ rva d7aeb05 (image 18d7aeb05) =====

void thunk_FUN_18d7ad51c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva d7c56a5 (image 18d7c56a5) =====

void thunk_FUN_18d7ad51c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva d7c24fe (image 18d7c24fe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7c24fe(int param_1)

{
  int iVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong in_stack_00000050;
  
  (**(code **)(*unaff_RSI + 0x6f8))();
  uVar2 = (~_DAT_183367f50 + 0x90b937ee) *
          ((_DAT_183368320 ^ 0x28befe81) + (ulonglong)((uint)_DAT_183368320 & 0x28befe81) * 2);
  uVar2 = (uVar2 | _DAT_183367f60) + (uVar2 & _DAT_183367f60);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183367d40 = func_0x00018d7c63a0((uVar2 | 0xb807c96c) + (ulonglong)((uint)uVar2 & 0xb807c96c))
  ;
  _DAT_1833684b0 = (_DAT_1833684b0 ^ _DAT_183367d40 ^ 0xac9cdda4) + 0xbcbdffed ^ 0x820a9b8066680a9e;
  _DAT_183368098 =
       (_DAT_183368098 * -0x4a29c6061e692c8d ^ _DAT_1833684b0) + (_DAT_183367d40 ^ 0xac9cdda4);
  _DAT_183368118 = _DAT_183368098 ^ _DAT_1833684b0;
  _DAT_183368148 = 0xbcbdffed;
  uVar2 = (~_DAT_183367e90 + 0xc03fd501) *
          ((_DAT_183368320 ^ 0xd63d933) + (ulonglong)((uint)_DAT_183368320 & 0xd63d933) * 2);
  uVar2 = (uVar2 | _DAT_1833683f8) + (uVar2 & _DAT_1833683f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183368460 = func_0x00018d7c63a0((uVar2 | 0xcd5c0c33) + (ulonglong)((uint)uVar2 & 0xcd5c0c33))
  ;
  _DAT_183367d38 = (_DAT_183367d38 ^ _DAT_183368460) + 0x497e2f16 ^ 0xa436039190f84a2d;
  _DAT_1833684f0 = (_DAT_1833684f0 * -0x42e3df0e9b89422d ^ _DAT_183367d38) + _DAT_183368460;
  _DAT_183368498 = _DAT_1833684f0 ^ _DAT_183367d38;
  _DAT_183367d98 = 0x497e2f16;
  uVar2 = (_DAT_183367e08 ^ _DAT_182294c50) + _DAT_1833683f8 + 0x84222325;
  uVar5 = (_DAT_1833683f8 ^ _UNK_182294c58) + _DAT_183367e08 + 0xaef65c70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183367e08 ^ _DAT_182294c50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833683f8 ^ _UNK_182294c58;
  _DAT_183367ff8 =
       func_0x00018d7c63a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183367e08 + 0xaef65c70) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833683f8 + 0x84222325));
  _DAT_183368118 = (_DAT_183368118 ^ _DAT_183367ff8) - 0xaef65c70 ^ 0xb7423a4be844d076;
  _DAT_183368018 = (_DAT_183368018 * 0x2685a8c44afb890b ^ _DAT_183368118) + _DAT_183367ff8;
  _DAT_1833680e0 = _DAT_183368018 ^ _DAT_183368118;
  _DAT_183368248 = 0x5109a390;
  uVar2 = (_DAT_183367fa0 ^ _DAT_182294c60) + _DAT_183368278 + 0x84dd2325;
  uVar5 = (_DAT_183368278 ^ _UNK_182294c68) + _DAT_183367fa0 + 0xaef65c70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183367fa0 ^ _DAT_182294c60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183368278 ^ _UNK_182294c68;
  _DAT_1833684a8 =
       func_0x00018d7c63a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183367fa0 + 0xaef65c70) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183368278 + 0x84dd2325));
  uVar2 = _DAT_1833684a8 >> 1 | _DAT_1833684a8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_1833684a8;
  _DAT_183368340 = _DAT_1833680c0 ^ uVar2 ^ 0xaff55c70;
  _DAT_183368128 = (_DAT_183368128 ^ uVar2) + 0xaff55c70 ^ 0xa1739605997f2954;
  _DAT_183367f78 = (_DAT_183367f78 * 0x22c8994dd1cfd933 ^ _DAT_183368128) + uVar2;
  _DAT_183368130 = _DAT_183367f78 ^ _DAT_183368128;
  _DAT_1833680c8 = 0xaff55c70;
  uVar2 = (~_DAT_183367e70 + 0x5109a391) *
          ((_DAT_1833684e0 ^ 0x2bd77f55) + (ulonglong)((uint)_DAT_1833684e0 & 0x2bd77f55) * 2);
  uVar2 = (uVar2 | _DAT_183368298) + (uVar2 & _DAT_183368298);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018d7c63a0((uVar2 | 0x7adedcc5) + (ulonglong)((uint)uVar2 & 0x7adedcc5));
  uVar2 = uVar2 << 0x1b | uVar2 >> 0x25;
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar2;
  _DAT_1833683a0 = _DAT_183367e78 ^ uVar2 ^ 0x100ff0000;
  _DAT_183367ea0 = (_DAT_183367ea0 ^ uVar2) + 0x100ff0000 ^ 0xdce1156dd97d127e;
  _DAT_183368370 = (_DAT_183368370 * 0xd7a31821cb1ebf9 ^ _DAT_183367ea0) + uVar2;
  _DAT_183367e78 = _DAT_183368370 ^ _DAT_183367ea0;
  _DAT_1833682e0 = 0xff0000;
  uVar2 = (~_DAT_183367d00 + 0x4a203bd5) *
          ((_DAT_183368258 ^ 0x84222325) + (ulonglong)((uint)_DAT_183368258 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183368270) + (uVar2 & _DAT_183368270);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183368278 = func_0x00018d7c63a0((uVar2 | 0xce0218f1) + (ulonglong)((uint)uVar2 & 0xce0218f1))
  ;
  uVar2 = _DAT_183368278 ^ 0x4a203bd4;
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar2;
  _DAT_183367f88 = (_DAT_183367f88 ^ uVar2) - 0x4a203bd4 ^ 0x3ca0c0239ced8778;
  _DAT_183368258 = (_DAT_183368258 * 0x13e19dd62bbd51c1 ^ _DAT_183367f88) + uVar2;
  _DAT_183368318 = _DAT_183368258 ^ _DAT_183367f88;
  _DAT_1833680a8 = 0xb5dfc42c;
  uVar2 = (_DAT_183368360 ^ _DAT_182294c70) + _DAT_183367ff0 + 0x84dd2325;
  uVar5 = (_DAT_183367ff0 ^ _UNK_182294c78) + _DAT_183368360 + 0x4a203bd4;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183368360 ^ _DAT_182294c70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183367ff0 ^ _UNK_182294c78;
  _DAT_1833684e0 =
       func_0x00018d7c63a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183368360 + 0x4a203bd4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183367ff0 + 0x84dd2325));
  uVar2 = (_DAT_1833684e0 ^ 0x1b982c0000) & 0x3fffffffff;
  _DAT_183367fa8 = (_DAT_183367fa8 ^ uVar2) + 0x4b1f3bd4 ^ 0xdb680ad4ad77a351;
  _DAT_183367f38 = (_DAT_183367f38 * 0x2189bedc80efef0b ^ _DAT_183367fa8) + uVar2;
  _DAT_183368418 = _DAT_183367f38 ^ _DAT_183367fa8;
  _DAT_1833683b8 = 0x4b1f3bd4;
  _DAT_183368000 = func_0x00018d7c63a0(_DAT_183367fc0 ^ 0xff33fffad4ffe1af);
  uVar2 = _DAT_183368000 << 0xc | _DAT_183368000 >> 0x34;
  _DAT_183367d50 = _DAT_1833682a0 ^ uVar2 ^ 0x100ff0000;
  _DAT_183368058 = (_DAT_183368058 ^ uVar2) + 0x100ff0000 ^ 0xa01db7b93f377798;
  _DAT_183368200 = (_DAT_183368200 * 0xa52741df69b3c91 ^ _DAT_183368058) + uVar2;
  _DAT_1833684b8 = _DAT_183368200 ^ _DAT_183368058;
  _DAT_183368218 = 0xff0000;
  uVar2 = (_DAT_183368330 ^ _DAT_182294c80) + _DAT_183368458 + 0x84222325;
  uVar5 = (_DAT_183368458 ^ _UNK_182294c88) + _DAT_183368330 + 0x162c6ae0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183368330 ^ _DAT_182294c80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183368458 ^ _UNK_182294c88;
  _DAT_183368310 =
       func_0x00018d7c63a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183368330 + 0x162c6ae0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183368458 + 0x84222325));
  uVar2 = (_DAT_183368310 ^ 0x162c6ae0) & 0x7fffffffffffffff;
  _DAT_1833684d0 = (_DAT_1833684d0 ^ uVar2) - 0x162c6ae0 ^ 0x178ea37c0fda2cb3;
  _DAT_183368320 = (_DAT_183368320 * -0x479d1be1fd005535 ^ _DAT_1833684d0) + uVar2;
  _DAT_183368150 = _DAT_183368320 ^ _DAT_1833684d0;
  _DAT_183368000 = 0xe9d39520;
  uVar2 = (~_DAT_183367ef0 + 0x162c6ae1) *
          ((_DAT_183367e50 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_183367e50 & 0x84dd2325) * 2);
  uVar2 = (uVar2 | _DAT_183367d50) + (uVar2 & _DAT_183367d50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183368190 = func_0x00018d7c63a0((uVar2 | 0x92f149c5) + (ulonglong)((uint)uVar2 & 0x92f149c5))
  ;
  _DAT_183368160 = _DAT_183367d90 ^ _DAT_183368038 ^ 0x172b6ae0;
  _DAT_183367d70 = (_DAT_183367d70 ^ _DAT_183368038) + 0x172b6ae0 ^ 0x37437ca662dca108;
  _DAT_183367e78 = (_DAT_183367e78 * -0x7ef7a574ff5fdef5 ^ _DAT_183367d70) + _DAT_183368038;
  _DAT_183368378 = _DAT_183367e78 ^ _DAT_183367d70;
  _DAT_1833680c0 = 0x172b6ae0;
  uVar2 = (~_DAT_183367f80 + 0xe9d39521) *
          ((_DAT_183368498 ^ 0x930949c5) + (ulonglong)((uint)_DAT_183368498 & 0x930949c5) * 2);
  uVar2 = (uVar2 | _DAT_183368318) + (uVar2 & _DAT_183368318);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183368288 = func_0x00018d7c63a0((uVar2 | 0x7adadce5) + (ulonglong)((uint)uVar2 & 0x7adadce5))
  ;
  uVar2 = _DAT_183368288 - (_DAT_183368288 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183368288) * -0x9e2d005a5378bfd;
  _DAT_1833684f0 = _DAT_183368158 ^ uVar2 ^ 0x100ff0000;
  _DAT_183368400 = (_DAT_183368400 ^ uVar2) + 0x100ff0000 ^ 0x22a7af77fd634256;
  _DAT_1833681d8 = (_DAT_1833681d8 * -0x79ca3be1179a36bf ^ _DAT_183368400) + uVar2;
  _DAT_183367f98 = _DAT_1833681d8 ^ _DAT_183368400;
  _DAT_183368198 = _DAT_183367ef8 ^ 0x100ff0000;
  _DAT_183368150 = 0xff0000;
  uVar2 = func_0x00018d7c63a0(_DAT_183367db0 + 0xff92ff8f25ffa0ffU ^ 0xff);
  _DAT_183368380 = _DAT_1833680d8 ^ uVar2 ^ 0x1063c2f03;
  _DAT_183367e90 = 0xe5b6eb76190eec84;
  _DAT_183367fc0 = (_DAT_183367fc0 * 0x26f028d147ab463d ^ 0xe5b6eb76190eec84) + uVar2;
  _DAT_1833681a8 = _DAT_183367fc0 ^ 0xe5b6eb76190eec84;
  _DAT_183368410 = 0x63c2f03;
  _DAT_183368138 = func_0x00018d7c63a0(_DAT_183368248 ^ 0xb0fff12e002035);
  _DAT_1833684a8 = (_DAT_1833684a8 ^ _DAT_183367ed0) + 0xf5c3d0fb ^ 0x19d410d25a41ce2d;
  _DAT_183368078 = (_DAT_183368078 * 0x7db5071d7e98f385 ^ _DAT_1833684a8) + _DAT_183367ed0;
  _DAT_1833683a8 = _DAT_183368078 ^ _DAT_1833684a8;
  _DAT_183368498 = 0xf5c3d0fb;
  uVar2 = (_DAT_183367d60 ^ _DAT_182294c90) + _DAT_1833683c8 + 0x389fdcc8;
  uVar5 = (_DAT_1833683c8 ^ _UNK_182294c98) + _DAT_183367d60 + 0x497e2f16;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183367d60 ^ _DAT_182294c90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833683c8 ^ _UNK_182294c98;
  _DAT_183367e70 =
       func_0x00018d7c63a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183367d60 + 0x497e2f16) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833683c8 + 0x389fdcc8));
  _DAT_183368288 = (_DAT_183368288 ^ _DAT_183367e70 ^ 0xfdffffff) + 0x83c2f04 ^ 0x21ca524686c98b66;
  _DAT_1833684c0 =
       (_DAT_1833684c0 * -0x2350f34c9e219f65 ^ _DAT_183368288) + (_DAT_183367e70 ^ 0xfdffffff);
  _DAT_183367e18 = _DAT_1833684c0 ^ _DAT_183368288;
  _DAT_183368210 = 0x83c2f04;
  uVar2 = (~_DAT_1833681b0 + 0x10785e09) *
          ((_DAT_183368018 ^ 0x71e1f3de) + (ulonglong)((uint)_DAT_183368018 & 0x71e1f3de) * 2);
  uVar2 = (uVar2 | _DAT_183368388) + (uVar2 & _DAT_183368388);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183367d50 = func_0x00018d7c63a0((uVar2 | 0x6199add6) + (ulonglong)((uint)uVar2 & 0x6199add6))
  ;
  uVar2 = _DAT_183367d50 ^ 0xfcfcb1fcf416123;
  _DAT_183368170 = _DAT_1833683b0 ^ uVar2 ^ 0x1063c2f03;
  _DAT_183367e38 = (_DAT_183367e38 ^ uVar2) + 0x1063c2f03 ^ 0x326beb7911c848f7;
  _DAT_183368230 = (_DAT_183368230 * 0x32b1a3c44afeafdf ^ _DAT_183367e38) + uVar2;
  _DAT_183367e80 = _DAT_183368230 ^ _DAT_183367e38;
  _DAT_183368270 = 0x63c2f03;
  uVar2 = (_DAT_183367dc8 ^ _DAT_182294ca0) + _DAT_183367d28 + 0x821e0c26;
  uVar5 = (_DAT_183367d28 ^ _UNK_182294ca8) + _DAT_183367dc8 + 0x63c2f03;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183367dc8 ^ _DAT_182294ca0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183367d28 ^ _UNK_182294ca8;
  _DAT_183368068 =
       func_0x00018d7c63a0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183367dc8 + 0x63c2f03) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183367d28 + 0x821e0c26));
  uVar2 = _DAT_183368068 >> 1 ^ 0x31e1781;
  _DAT_1833681b0 = uVar2 * 2;
  uVar2 = uVar2 | _DAT_1833681b0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_1833681b0 =
       0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
       _DAT_1833681b0;
  _DAT_183368490 = _DAT_183368490 ^ _DAT_1833681b0 ^ 0x99246c7deb5286e6;
  _DAT_183367f08 = (_DAT_183367f08 * 0x6da4ffced320ce17 ^ _DAT_183368490) + _DAT_1833681b0;
  _DAT_183368350 = _DAT_183367f08 ^ _DAT_183368490;
  _DAT_183368070 = 0;
  _DAT_183368288 = func_0x00018d7c63a0(_DAT_183367f48 + 0x1f0083dd004cff ^ 0xc6);
  uVar2 = (_DAT_183368288 ^ 0xff0000) & 0x7fffffffffffff;
  _DAT_183367e38 = _DAT_1833683f8 ^ uVar2 ^ 0xff0000;
  _DAT_1833683c0 = (_DAT_1833683c0 ^ uVar2) + 0xff0000 ^ 0xd1919c90f7fde34;
  _DAT_1833681e8 = (_DAT_1833681e8 * -0x22c06450792992eb ^ _DAT_1833683c0) + uVar2;
  _DAT_1833684d8 = _DAT_1833681e8 ^ _DAT_1833683c0;
  _DAT_183367fd8 = 0xff0000;
  uVar2 = (~_DAT_183368328 + 0x100000000) *
          ((_DAT_183368360 ^ 0x389fdcc8) + (ulonglong)((uint)_DAT_183368360 & 0x389fdcc8) * 2);
  uVar2 = (uVar2 | _DAT_183367f48) + (uVar2 & _DAT_183367f48);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183368480 = func_0x00018d7c63a0((uVar2 | 0xc7602337) + (ulonglong)((uint)uVar2 & 0xc7602337))
  ;
  uVar2 = _DAT_183368480 ^ 0xffffffff;
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2)
          & 0xffffffffffc00000;
  _DAT_1833684f0 = (_DAT_1833684f0 ^ uVar2) + 0x43420012 ^ 0x2b6d6d38163405ac;
  _DAT_183368230 = (_DAT_183368230 * -0x22dbecbc9b62b425 ^ _DAT_1833684f0) + uVar2;
  _DAT_183367e40 = _DAT_183368230 ^ _DAT_1833684f0;
  _DAT_183368298 = 0x43420012;
  _DAT_183368398 = func_0x00018d7c63a0(_DAT_1833684a0 + 0xa4001b4a0024ffU ^ 0x6b);
  _DAT_1833684c0 = _DAT_1833684c0 ^ _DAT_183368398 ^ 0xffffffff ^ 0xa906780d3ae87f1b;
  _DAT_183367f88 =
       (_DAT_183367f88 * -0x299439169e0f8d4d ^ _DAT_1833684c0) + (_DAT_183368398 ^ 0xffffffff);
  _DAT_183367fa0 = _DAT_183367f88 ^ _DAT_1833684c0;
  _DAT_1833683d0 = 0;
  _DAT_183368010 = func_0x00018d7c63a0(_DAT_183367f18 + 0x22ff7be30021ffU ^ 0x28);
  uVar2 = _DAT_183368010 << 0x2f | _DAT_183368010 >> 0x11;
  _DAT_183368140 = _DAT_183368140 ^ uVar2 ^ 0xe6adc2bf81e85f99;
  _DAT_183368178 = (_DAT_183368178 * -0x2b910eb05603d307 ^ _DAT_183368140) + uVar2;
  _DAT_1833681e0 = _DAT_183368178 ^ _DAT_183368140;
  _DAT_183367d80 = 0;
  _DAT_1833684d8 = func_0x00018d7c63a0(_DAT_183368490 ^ 0x20ff7bdcffba2a);
  uVar2 = (ulonglong)(~(uint)_DAT_1833684d8 & 0xff0000);
  _DAT_183367de0 = _DAT_183368050 ^ uVar2 ^ 0xff0000;
  _DAT_183368358 = (_DAT_183368358 ^ uVar2) + 0xff0000 ^ 0x4da9bff2de4d4054;
  _DAT_183368350 = (_DAT_183368350 * -0x76bb86f50693ddfb ^ _DAT_183368358) + uVar2;
  _DAT_183367e70 = _DAT_183368350 ^ _DAT_183368358;
  auVar7._8_8_ = unaff_XMM10_Qb;
  auVar7._0_8_ = (ulonglong)(uint)(param_1 << 0x10) ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _DAT_182294cb0,_DAT_1800170c0);
  _DAT_183368010 = 0xff0000;
  uVar5 = auVar8._8_8_ + auVar8._0_8_;
  uVar2 = uVar5 + _DAT_1833684b8;
  if (auVar8._4_4_ < 0) {
    uVar2 = _DAT_183367f30 ^ uVar5;
  }
  _DAT_183368268 = func_0x00018d7c63a0(SUB161(auVar7 ^ _DAT_182294cb0,5) ^ uVar2);
  uVar5 = (ulonglong)(param_1 << 0x10 & 0xff0000);
  _DAT_183368200 = (_DAT_183368200 ^ _DAT_183368108) + uVar5 ^ 0x5d454ca2b7c3cbe7;
  _DAT_183367f50 = (_DAT_183367f50 * -0x327e1f13dee39dad ^ _DAT_183368200) + _DAT_183368108;
  _DAT_1833683f8 = _DAT_183367f50 ^ _DAT_183368200;
  uVar2 = in_stack_00000050 ^ 0x84222325 ^ _DAT_183368318;
  lVar3 = (in_stack_00000050 ^ 0x84222325) + _DAT_1833680a8;
  uVar4 = uVar2 + lVar3;
  uVar6 = (uVar5 ^ _DAT_1833680a8) + _DAT_183368318 + uVar5;
  uVar2 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar2;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5 ^ _DAT_1833680a8;
  _DAT_183368478 = uVar5;
  _DAT_183368150 =
       func_0x00018d7c63a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183368318 + uVar5) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  _DAT_1833680a8 = in_stack_00000050 | uVar5;
  _DAT_183368078 =
       (_DAT_183368078 ^ _DAT_183368150 & 0xfffffffffffffff) + _DAT_1833680a8 ^ 0xab8b0dbc69057012;
  _DAT_183367f88 =
       (_DAT_183367f88 * 0x58871a1452199cc3 ^ _DAT_183368078) + (_DAT_183368150 & 0xfffffffffffffff)
  ;
  _DAT_183367d58 = _DAT_183367f88 ^ _DAT_183368078;
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



// ===== continuation @ rva d774000 (image 18d774000) =====

void FUN_18d774000(void)

{
  return;
}



// ===== continuation @ rva d76ff04 (image 18d76ff04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76ff04(void)

{
  FUN_190ddce00();
  (*_DAT_1822890d8)();
  return;
}



// ===== continuation @ rva d7739f4 (image 18d7739f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7739f4(void)

{
  (*_DAT_1822893f8)();
  return;
}



// ===== continuation @ rva d7749cb (image 18d7749cb) =====

void FUN_18d7749cb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d76ffd8 (image 18d76ffd8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d76ffd8(void)

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
  longlong *unaff_RSI;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong unaff_R14;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong uVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar45;
  undefined1 auVar46 [16];
  longlong lVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulonglong uVar52;
  undefined1 auVar53 [16];
  uint uVar54;
  ulonglong in_stack_00000030;
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  ulonglong uStack0000000000000098;
  ulonglong uStack00000000000000a8;
  
  uVar8 = _DAT_182288708;
  uVar6 = _DAT_182288700;
  auVar17 = _DAT_1800170c0;
  uStack00000000000000a8 = in_stack_00000030;
  auVar18._8_8_ = 0xcd5daf0d25bde4f3;
  auVar18._0_8_ = _DAT_182288708 ^ 0x84222325;
  uStack0000000000000098 = _DAT_182288700 | 0x4df9a1c02b8c3df6;
  auVar16 = pshufb(auVar18 ^ _DAT_182289440,_DAT_1800170c0);
  uVar10 = auVar16._8_8_ + auVar16._0_8_;
  uVar12 = uVar10 + _DAT_1833661d0;
  if (auVar16._4_4_ < 0) {
    uVar12 = _DAT_183366198 ^ uVar10;
  }
  _DAT_183365f98 = func_0x00018d774a60(SUB161(auVar18 ^ _DAT_182289440,5) ^ uVar12);
  uVar10 = _DAT_183365f98 << 0x24 | _DAT_183365f98 >> 0x1c;
  uVar12 = uVar8 ^ 0xcd5daf0d25bde4f3;
  _DAT_1833661e0 = (_DAT_1833661e0 ^ uVar10) + uVar12 ^ 0x4bcef03338bb1e3e;
  _DAT_183366470 = (_DAT_183366470 * -0x6329ac6e478f8777 ^ _DAT_1833661e0) + uVar10;
  _DAT_183366368 = _DAT_183366470 ^ _DAT_1833661e0;
  uVar6 = uVar6 * uVar6;
  uVar7 = uVar6 * -0xa6e0c3f8738c81f;
  auVar16._8_8_ = uVar7;
  auVar16._0_8_ = _DAT_18001b640;
  auVar17 = pshufb(auVar16 ^ _DAT_182289450,auVar17);
  uVar11 = auVar17._8_8_ + auVar17._0_8_;
  uVar10 = uVar11 + _DAT_183366330;
  if (auVar17._4_4_ < 0) {
    uVar10 = _DAT_1833660b0 ^ uVar11;
  }
  _DAT_1833660b8 = uVar12;
  _DAT_183366340 = func_0x00018d774a60(SUB161(auVar16 ^ _DAT_182289450,5) ^ uVar10);
  uVar10 = _DAT_183366340 - (_DAT_183366340 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
           _DAT_183366340;
  _DAT_183366128 = uVar6 * 0xa6e0c3f8738c81f;
  _DAT_183365f70 = (_DAT_183365f70 ^ uVar10) + uVar6 * 0xa6e0c3f8738c81f ^ 0x2a9e862300148c52;
  _DAT_1833664e0 = (_DAT_1833664e0 * -0x1b9e12201030ec7f ^ _DAT_183365f70) + uVar10;
  _DAT_1833662b0 = _DAT_1833664e0 ^ _DAT_183365f70;
  uVar10 = uVar7 ^ _DAT_1833664f8;
  uVar11 = (unaff_R14 ^ _DAT_183366128) + unaff_R14 + _DAT_1833664f8;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ unaff_R14 ^ _DAT_183366128;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar10;
  _DAT_183366108 =
       func_0x00018d774a60((uVar10 << 0x1d | uVar10 >> 0x23) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - (unaff_R14 + _DAT_1833664f8));
  uVar15 = (uint)(uVar7 >> 0x20);
  auVar34._8_4_ = (int)uVar7;
  auVar34._0_8_ = uVar7;
  auVar34._12_4_ = uVar15;
  uVar40 = SUB164(auVar34 & _DAT_182289460,0);
  uVar13 = SUB168(auVar34 & _DAT_182289460,0);
  uVar22 = SUB164(auVar34 | _DAT_182289460,0);
  uVar9 = SUB168(auVar34 | _DAT_182289460,0);
  uVar23 = SUB164(_DAT_182289460 ^ auVar34,0);
  uVar11 = SUB168(_DAT_182289460 ^ auVar34,0);
  lVar47 = (ulonglong)_DAT_1822894f0 * (uVar7 & 0xffffffff) +
           ((_DAT_182289500 & 0xffffffff) * (uVar7 & 0xffffffff) +
            (ulonglong)uVar15 * (ulonglong)_DAT_1822894f0 << 0x20);
  uVar10 = ~_DAT_183366108 & 0x1600fae3763d;
  _DAT_183366390 =
       (((ulonglong)_DAT_1822894d0 * (ulonglong)uVar23 +
         ((ulonglong)_DAT_1822894e0 * (ulonglong)uVar23 +
          (uVar11 >> 0x20) * (ulonglong)_DAT_1822894d0 << 0x20) +
         (ulonglong)_DAT_1822894b0 * (ulonglong)uVar22 +
         ((ulonglong)_DAT_1822894c0 * (ulonglong)uVar22 +
          (uVar9 >> 0x20) * (ulonglong)_DAT_1822894b0 << 0x20) +
         (ulonglong)_DAT_182289490 * (ulonglong)uVar40 +
         ((ulonglong)_DAT_1822894a0 * (ulonglong)uVar40 +
          (uVar13 >> 0x20) * (ulonglong)_DAT_182289490 << 0x20) +
         (ulonglong)_DAT_182289470 * (uVar7 & 0xffffffff) +
         ((ulonglong)_DAT_182289480 * (uVar7 & 0xffffffff) +
          (ulonglong)uVar15 * (ulonglong)_DAT_182289470 << 0x20) + lVar47) -
       ((ulonglong)uVar23 * (_DAT_182289570 & 0xffffffff) +
        ((ulonglong)_DAT_182289580 * (ulonglong)uVar23 +
         (uVar11 >> 0x20) * (_DAT_182289570 & 0xffffffff) << 0x20) +
        (ulonglong)uVar22 * (ulonglong)_DAT_182289550 +
        ((ulonglong)_DAT_182289560 * (ulonglong)uVar22 + (uVar9 >> 0x20) * (ulonglong)_DAT_182289550
        << 0x20) +
        (ulonglong)uVar40 * (_DAT_182289530 & 0xffffffff) +
        ((ulonglong)_DAT_182289540 * (ulonglong)uVar40 +
         (uVar13 >> 0x20) * (_DAT_182289530 & 0xffffffff) << 0x20) +
        (uVar7 & 0xffffffff) * (ulonglong)_DAT_182289510 +
        ((ulonglong)_DAT_182289520 * (uVar7 & 0xffffffff) +
         (ulonglong)uVar15 * (ulonglong)_DAT_182289510 << 0x20) + lVar47)) + 0xb7883b74b00cbfd0;
  _DAT_183366448 = _DAT_183366020 ^ uVar10 ^ _DAT_183366390;
  _DAT_1833664f0 = (_DAT_1833664f0 ^ uVar10) + _DAT_183366390 ^ 0xc91ff35abccbbedb;
  _DAT_1833664e8 = (_DAT_1833664e8 * 0x2cb2cde8b07e4681 ^ _DAT_1833664f0) + uVar10;
  _DAT_183366040 = _DAT_1833664e8 ^ _DAT_1833664f0;
  uVar13 = _DAT_183366390 + uVar6 * 0xa6e0c3f8738c81f;
  lVar47 = uVar8 * uVar8;
  uVar11 = lVar47 * -0x3e4e5c316781546d;
  uVar10 = ((_DAT_183366048 ^ 0x84222325) + (ulonglong)((uint)_DAT_183366048 & 0x84222325) * 2) *
           (uVar11 - _DAT_183365f38);
  uVar10 = (uVar10 | _DAT_1833660b0) + (uVar10 & _DAT_1833660b0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183366348 =
       func_0x00018d774a60((uVar11 ^ 0x84222325 | uVar10) + (uVar10 & (uVar11 ^ 0x84222325)));
  uVar10 = (_DAT_183366348 & 0x3ffffffffc) << 0x25 | (_DAT_183366348 & 0x3ffffffffc) >> 0x1b;
  uVar9 = lVar47 * 0x3e4e5c316781546d;
  _DAT_183366060 = (_DAT_183366060 ^ uVar10) + lVar47 * 0x3e4e5c316781546d ^ 0x436396193a291476;
  _DAT_1833662b0 = (_DAT_1833662b0 * -0x3cf0a3007d1fdf5d ^ _DAT_183366060) + uVar10;
  _DAT_1833664d8 = _DAT_1833662b0 ^ _DAT_183366060;
  _DAT_183366088 = _DAT_183366470 ^ uVar9;
  uVar7 = uVar13 ^ 0x84222325;
  uVar10 = ((_DAT_183366228 ^ uVar7) + (uVar7 & _DAT_183366228) * 2) * (uVar11 - _DAT_183366430);
  uVar10 = (uVar10 | _DAT_183365fe8) + (uVar10 & _DAT_183365fe8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_183366458 = uVar9;
  _DAT_183365f00 = func_0x00018d774a60((uVar7 ^ uVar11 | uVar10) + (uVar10 & (uVar7 ^ uVar11)));
  uVar10 = _DAT_183365f00 ^ uVar11;
  uVar15 = (uint)(uVar13 >> 0x20);
  auVar35._8_4_ = (int)uVar13;
  auVar35._0_8_ = uVar13;
  auVar35._12_4_ = uVar15;
  uVar22 = (uint)(uVar11 >> 0x20);
  auVar25._8_4_ = (int)uVar11;
  auVar25._0_8_ = uVar11;
  auVar25._12_4_ = uVar22;
  uVar40 = SUB164(auVar35 & auVar25,0);
  uVar52 = SUB168(auVar35 & auVar25,0);
  uVar41 = SUB164(auVar35 | auVar25,0);
  uVar24 = SUB168(auVar35 | auVar25,0);
  uVar45 = SUB164(auVar35 ^ auVar25,0);
  uVar7 = SUB168(auVar35 ^ auVar25,0);
  auVar48._8_4_ = 0xffffffff;
  auVar48._0_8_ = 0xffffffffffffffff;
  auVar48._12_4_ = 0xffffffff;
  uVar23 = SUB164(auVar35 ^ auVar48,0);
  uVar11 = (((ulonglong)uVar23 * (ulonglong)_DAT_1822895b0 +
             ((SUB168(auVar35 ^ auVar48,0) >> 0x20) * (ulonglong)_DAT_1822895b0 +
              (_DAT_182289590 & 0xffffffff) * (ulonglong)uVar23 << 0x20) +
             (_DAT_1822895d0 & 0xffffffff) * (ulonglong)uVar45 +
             ((uVar7 >> 0x20) * (_DAT_1822895d0 & 0xffffffff) +
              (_DAT_1822895c0 & 0xffffffff) * (ulonglong)uVar45 << 0x20) +
             (ulonglong)uVar40 * (_DAT_1822895d0 & 0xffffffff) +
             ((uVar52 >> 0x20) * (_DAT_1822895d0 & 0xffffffff) +
              (ulonglong)uVar40 * (_DAT_1822895c0 & 0xffffffff) << 0x20) +
             (_DAT_1822895a0 & 0xffffffff) * (uVar13 & 0xffffffff) + uVar11 +
             ((ulonglong)uVar15 * (_DAT_1822895a0 & 0xffffffff) +
              (uVar13 & 0xffffffff) * (_DAT_182289590 & 0xffffffff) << 0x20) +
            (_DAT_1822895e0 & 0xffffffff) * (ulonglong)uVar41 +
            ((_DAT_1822895f0 & 0xffffffff) * (ulonglong)uVar41 +
             (uVar24 >> 0x20) * (_DAT_1822895e0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar45 * (_DAT_182289680 & 0xffffffff) +
            ((_DAT_182289690 & 0xffffffff) * (ulonglong)uVar45 +
             (uVar7 >> 0x20) * (_DAT_182289680 & 0xffffffff) << 0x20) +
            (ulonglong)uVar41 * (ulonglong)_DAT_182289660 +
            ((_DAT_182289670 & 0xffffffff) * (ulonglong)uVar41 +
             (uVar24 >> 0x20) * (ulonglong)_DAT_182289660 << 0x20) +
           (ulonglong)uVar40 * (ulonglong)_DAT_182289640 +
           ((_DAT_182289650 & 0xffffffff) * (ulonglong)uVar40 +
            (uVar52 >> 0x20) * (ulonglong)_DAT_182289640 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_182289630 +
           ((ulonglong)uVar22 * (ulonglong)_DAT_182289630 +
            (_DAT_182289620 & 0xffffffff) * (uVar11 & 0xffffffff) << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_182289630 +
           ((ulonglong)uVar15 * (ulonglong)_DAT_182289630 +
            (uVar13 & 0xffffffff) * (_DAT_182289620 & 0xffffffff) << 0x20))) +
           CONCAT44(_UNK_1822895b4,_DAT_1822895b0);
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = uVar11 ^ 0x84222325;
  auVar18 = pshufb(auVar17 ^ _DAT_1822896a0,_DAT_1800170c0);
  _DAT_183365f78 = _DAT_183366398 ^ uVar10 ^ uVar11;
  _DAT_183366450 = (_DAT_183366450 ^ uVar10) + uVar11 ^ 0x6075f2230a040ec3;
  _DAT_183366338 = (_DAT_183366338 * -0x11f90bfbbe8739bb ^ _DAT_183366450) + uVar10;
  _DAT_183366228 = _DAT_183366338 ^ _DAT_183366450;
  uVar7 = auVar18._8_8_ + auVar18._0_8_;
  uVar10 = uVar7 + _DAT_183366408;
  if (auVar18._4_4_ < 0) {
    uVar10 = _DAT_1833661c0 ^ uVar7;
  }
  _DAT_183366258 = uVar11;
  _DAT_183365f38 = func_0x00018d774a60(SUB161(auVar17 ^ _DAT_1822896a0,5) ^ uVar10);
  auVar17 = _DAT_1800170c0;
  uVar45 = (uint)(uVar11 >> 0x20);
  auVar36._8_4_ = (int)uVar11;
  auVar36._0_8_ = uVar11;
  auVar36._12_4_ = uVar45;
  uVar41 = (uint)(uVar9 >> 0x20);
  auVar53._8_4_ = (int)uVar9;
  auVar53._0_8_ = uVar9;
  auVar53._12_4_ = uVar41;
  uVar15 = SUB164(auVar36 & auVar53,0);
  uVar52 = SUB168(auVar36 & auVar53,0);
  uVar40 = SUB164(auVar36 | auVar53,0);
  uVar7 = SUB168(auVar36 | auVar53,0);
  uVar23 = SUB164(auVar36 ^ auVar53,0);
  uVar13 = SUB168(auVar36 ^ auVar53,0);
  uVar10 = uVar11 ^ _DAT_18001a710;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9;
  auVar46._8_4_ = 0xffffffff;
  auVar46._0_8_ = 0xffffffffffffffff;
  auVar46._12_4_ = 0xffffffff;
  uVar22 = SUB164(auVar3 ^ auVar46,0);
  lVar47 = uVar8 * _DAT_182288700;
  auVar26._8_8_ = lVar47 * -0x185e0d9116ff310b;
  auVar26._0_8_ = _DAT_18001b640;
  auVar18 = pshufb(auVar26 ^ _DAT_182289800,_DAT_1800170c0);
  lVar14 = (((uVar10 & 0xffffffff) * (ulonglong)_DAT_1822896d0 +
             ((uVar10 >> 0x20) * (ulonglong)_DAT_1822896d0 +
              (ulonglong)_DAT_1822896b0 * (uVar10 & 0xffffffff) << 0x20) +
             (ulonglong)_DAT_1822896f0 * (ulonglong)uVar23 +
             ((uVar13 >> 0x20) * (ulonglong)_DAT_1822896f0 +
              (ulonglong)_DAT_1822896e0 * (ulonglong)uVar23 << 0x20) +
             (ulonglong)uVar15 * (ulonglong)_DAT_1822896f0 +
             ((uVar52 >> 0x20) * (ulonglong)_DAT_1822896f0 +
              (ulonglong)uVar15 * (ulonglong)_DAT_1822896e0 << 0x20) +
             (ulonglong)_DAT_1822896c0 * (uVar11 & 0xffffffff) + uVar9 +
             ((ulonglong)uVar45 * (ulonglong)_DAT_1822896c0 +
              (uVar11 & 0xffffffff) * (ulonglong)_DAT_1822896b0 << 0x20) +
            (ulonglong)_DAT_182289700 * (ulonglong)uVar40 +
            ((ulonglong)_DAT_182289710 * (ulonglong)uVar40 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_182289700 << 0x20)) -
           ((ulonglong)uVar22 * (ulonglong)_DAT_182289780 +
            ((ulonglong)_DAT_1822897f0 * (ulonglong)uVar22 +
             (SUB168(auVar3 ^ auVar46,0) >> 0x20) * (ulonglong)_DAT_182289780 << 0x20) +
           (ulonglong)uVar23 * (ulonglong)_DAT_1822897d0 +
           ((ulonglong)_DAT_1822897e0 * (ulonglong)uVar23 +
            (uVar13 >> 0x20) * (ulonglong)_DAT_1822897d0 << 0x20) +
           (ulonglong)uVar40 * (ulonglong)_DAT_1822897b0 +
           ((ulonglong)_DAT_1822897c0 * (ulonglong)uVar40 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_1822897b0 << 0x20) +
           (ulonglong)uVar15 * (ulonglong)_DAT_182289790 +
           ((ulonglong)_DAT_1822897a0 * (ulonglong)uVar15 +
            (uVar52 >> 0x20) * (ulonglong)_DAT_182289790 << 0x20) +
           (uVar9 & 0xffffffff) * (ulonglong)_DAT_182289760 +
           ((ulonglong)_DAT_182289770 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar41 * (ulonglong)_DAT_182289760 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_182289740 +
           ((ulonglong)_DAT_182289750 * (uVar11 & 0xffffffff) +
            (ulonglong)uVar45 * (ulonglong)_DAT_182289740 << 0x20))) + -0x6a19499a011e49c0;
  _DAT_1833663a8 = (_DAT_1833663a8 ^ _DAT_1833664d0) + lVar14 ^ 0xf1b583cc53f774ea;
  _DAT_183366330 = (_DAT_183366330 * -0x24c258fe9f926e15 ^ _DAT_1833663a8) + _DAT_1833664d0;
  _DAT_183365fe0 = _DAT_183366330 ^ _DAT_1833663a8;
  uVar10 = auVar18._8_8_ + auVar18._0_8_;
  uVar8 = uVar10 + _DAT_183365f10;
  if (auVar18._4_4_ < 0) {
    uVar8 = _DAT_1833663d0 ^ uVar10;
  }
  _DAT_183366190 = lVar14;
  _DAT_1833661c0 = func_0x00018d774a60(SUB161(auVar26 ^ _DAT_182289800,5) ^ uVar8);
  uVar10 = lVar47 * 0x185e0d9116ff310b;
  _DAT_183366178 =
       (_DAT_183366178 ^ _DAT_1833661c0) + lVar47 * 0x185e0d9116ff310b ^ 0x10c18041ee964482;
  _DAT_183366300 = (_DAT_183366300 * 0x149ea8171d66911 ^ _DAT_183366178) + _DAT_1833661c0;
  _DAT_1833663f8 = _DAT_183366300 ^ _DAT_183366178;
  uVar11 = lVar47 * -0x185e0d9116ff310b + lVar14;
  auVar19._8_8_ = uVar10;
  auVar19._0_8_ = uVar11 ^ 0x84222325;
  auVar17 = pshufb(auVar19 ^ _DAT_182289810,auVar17);
  uVar7 = auVar17._8_8_ + auVar17._0_8_;
  uVar8 = uVar7 + _DAT_183366160;
  if (auVar17._4_4_ < 0) {
    uVar8 = _DAT_1833660b8 ^ uVar7;
  }
  _DAT_1833664b8 = uVar10;
  _DAT_1833664f0 = func_0x00018d774a60(SUB161(auVar19 ^ _DAT_182289810,5) ^ uVar8);
  uVar7 = uStack0000000000000098;
  uVar22 = (uint)(uVar11 >> 0x20);
  auVar42._8_4_ = (int)uVar11;
  auVar42._0_8_ = uVar11;
  auVar42._12_4_ = uVar22;
  uVar41 = (uint)(uVar10 >> 0x20);
  auVar37._8_4_ = (int)uVar10;
  auVar37._0_8_ = uVar10;
  auVar37._12_4_ = uVar41;
  uVar40 = SUB164(auVar42 & auVar37,0);
  uVar52 = SUB168(auVar42 & auVar37,0);
  uVar23 = SUB164(auVar42 ^ auVar37,0);
  uVar24 = SUB168(auVar42 ^ auVar37,0);
  uVar15 = SUB164(auVar42 ^ auVar46,0);
  uVar13 = SUB168(auVar42 ^ auVar46,0);
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar45 = SUB164(auVar37 ^ auVar1,0);
  uVar9 = uStack0000000000000098 ^ 0x84222325;
  auVar27._8_8_ = uVar12;
  auVar27._0_8_ = uVar9;
  auVar17 = pshufb(auVar27 ^ _DAT_1822899b0,_DAT_1800170c0);
  uVar8 = (uVar10 * uVar11 ^ _DAT_1833664f0) & 0xfffffffffffffe00;
  uVar52 = (((ulonglong)uVar45 * (ulonglong)_DAT_1822898c0 +
             ((_DAT_1822898d0 & 0xffffffff) * (ulonglong)uVar45 +
              (SUB168(auVar37 ^ auVar1,0) >> 0x20) * (ulonglong)_DAT_1822898c0 << 0x20) +
            (_DAT_1822898a0 & 0xffffffff) * (ulonglong)uVar15 +
            ((_DAT_1822898b0 & 0xffffffff) * (ulonglong)uVar15 +
             (uVar13 >> 0x20) * (_DAT_1822898a0 & 0xffffffff) << 0x20) +
            (_DAT_182289880 & 0xffffffff) * (ulonglong)uVar23 +
            ((_DAT_182289890 & 0xffffffff) * (ulonglong)uVar23 +
             (uVar24 >> 0x20) * (_DAT_182289880 & 0xffffffff) << 0x20) +
            (_DAT_182289860 & 0xffffffff) * (ulonglong)uVar40 +
            ((_DAT_182289870 & 0xffffffff) * (ulonglong)uVar40 +
             (uVar52 >> 0x20) * (_DAT_182289860 & 0xffffffff) << 0x20) +
            (_DAT_182289840 & 0xffffffff) * (uVar10 & 0xffffffff) +
            ((_DAT_182289850 & 0xffffffff) * (uVar10 & 0xffffffff) +
             (ulonglong)uVar41 * (_DAT_182289840 & 0xffffffff) << 0x20) +
            (_DAT_182289820 & 0xffffffff) * (uVar11 & 0xffffffff) +
            ((_DAT_182289830 & 0xffffffff) * (uVar11 & 0xffffffff) +
             (ulonglong)uVar22 * (_DAT_182289820 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar15 * (ulonglong)_DAT_182289940 +
            ((_DAT_182289990 & 0xffffffff) * (ulonglong)uVar15 +
             (uVar13 >> 0x20) * (ulonglong)_DAT_182289940 << 0x20) +
            (ulonglong)uVar23 * (ulonglong)_DAT_182289970 +
            ((_DAT_182289980 & 0xffffffff) * (ulonglong)uVar23 +
             (uVar24 >> 0x20) * (ulonglong)_DAT_182289970 << 0x20) +
           (ulonglong)uVar40 * (ulonglong)_DAT_182289950 +
           ((_DAT_182289960 & 0xffffffff) * (ulonglong)uVar40 +
            (uVar52 >> 0x20) * (ulonglong)_DAT_182289950 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_182289920 +
           ((_DAT_182289930 & 0xffffffff) * (uVar10 & 0xffffffff) +
            (ulonglong)uVar41 * (ulonglong)_DAT_182289920 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_182289900 +
           ((_DAT_182289910 & 0xffffffff) * (uVar11 & 0xffffffff) +
            (ulonglong)uVar22 * (ulonglong)_DAT_182289900 << 0x20))) + _DAT_1822899a0;
  _DAT_183365fb8 = _DAT_183366090 ^ uVar8 ^ uVar52;
  _DAT_1833660b0 = (_DAT_1833660b0 ^ uVar8) + uVar52 ^ 0xeb941f4e391cbc07;
  _DAT_1833662c0 = (_DAT_1833662c0 * -0x7d3b6d45bb238457 ^ _DAT_1833660b0) + uVar8;
  _DAT_183365f10 = _DAT_1833662c0 ^ _DAT_1833660b0;
  uVar11 = auVar17._8_8_ + auVar17._0_8_;
  uVar13 = uStack0000000000000098 ^ uVar12;
  uVar8 = uStack0000000000000098 + uVar12;
  uVar10 = uVar11 + _DAT_183365f80;
  if (auVar17._4_4_ < 0) {
    uVar10 = _DAT_183365fc8 ^ uVar11;
  }
  _DAT_183365fa0 = uVar52;
  _DAT_183365fd0 = func_0x00018d774a60(SUB161(auVar27 ^ _DAT_1822899b0,5) ^ uVar10);
  uVar10 = uVar7 * uVar12 ^ _DAT_183365fd0;
  uVar12 = uVar12 & uVar7;
  _DAT_183366230 = (_DAT_183366230 ^ uVar10) + uVar12 ^ 0x27664a5db1aa797f;
  _DAT_183366080 = (_DAT_183366080 * 0x640bfac2831bec97 ^ _DAT_183366230) + uVar10;
  _DAT_1833660d0 = _DAT_183366080 ^ _DAT_183366230;
  uVar11 = uVar13 ^ 0x84222325 ^ _DAT_183366418;
  uVar10 = uVar12 * 2 ^ _DAT_183366450;
  lVar14 = (uVar13 ^ 0x84222325) + _DAT_183366450;
  lVar47 = _DAT_183366418 + uVar12 * 2;
  uVar24 = uVar11 + lVar14;
  uVar33 = uVar10 + lVar47;
  uVar11 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ uVar11;
  uVar10 = (uVar33 * 0x2000 | uVar33 >> 0x33) ^ uVar10;
  _DAT_183366290 = uVar12;
  _DAT_1833662f0 =
       func_0x00018d774a60((uVar10 << 0x1d | uVar10 >> 0x23) - lVar47 ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - lVar14);
  uVar22 = (uint)(uVar13 >> 0x20);
  auVar38._8_4_ = (int)uVar13;
  auVar38._0_8_ = uVar13;
  auVar38._12_4_ = uVar22;
  auVar28._8_4_ = (int)uVar12;
  auVar28._0_8_ = uVar12;
  auVar28._12_4_ = (int)(uVar12 >> 0x20);
  uVar12 = uVar12 * 2;
  auVar29._8_8_ = auVar28._8_8_ * 2;
  auVar29._0_8_ = uVar12;
  uVar45 = (uint)(uVar12 >> 0x20);
  uVar54 = SUB164(auVar38 & auVar29,0);
  uVar11 = SUB168(auVar38 & auVar29,0);
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  uVar15 = SUB164(auVar38 | auVar29,0);
  uVar33 = SUB168(auVar38 | auVar29,0);
  uVar40 = SUB164(auVar38 ^ auVar49,0);
  uVar41 = SUB164(auVar29 ^ auVar49,0);
  uVar24 = SUB168(auVar29 ^ auVar49,0);
  uVar23 = SUB164(auVar38 ^ auVar29,0);
  uVar10 = _DAT_1833662f0 & 0x7fffffffffffffff;
  uVar13 = (((ulonglong)_DAT_182289a40 * (ulonglong)uVar41 +
             ((ulonglong)_DAT_182289a50 * (ulonglong)uVar41 +
              (uVar24 >> 0x20) * (ulonglong)_DAT_182289a40 << 0x20) +
            (ulonglong)uVar40 * (ulonglong)_DAT_182289a20 +
            ((ulonglong)_DAT_182289a30 * (ulonglong)uVar40 +
             (SUB168(auVar38 ^ auVar49,0) >> 0x20) * (ulonglong)_DAT_182289a20 << 0x20) +
            (ulonglong)_DAT_182289a10 * (ulonglong)uVar15 +
            ((uVar33 >> 0x20) * (ulonglong)_DAT_182289a10 +
             (ulonglong)_DAT_182289a00 * (ulonglong)uVar15 << 0x20) +
            (ulonglong)uVar54 * (ulonglong)_DAT_182289a10 +
            ((uVar11 >> 0x20) * (ulonglong)_DAT_182289a10 +
             (ulonglong)uVar54 * (ulonglong)_DAT_182289a00 << 0x20) +
            (ulonglong)_DAT_1822899c0 * (uVar13 & 0xffffffff) +
            ((ulonglong)_DAT_1822899d0 * (uVar13 & 0xffffffff) +
             (ulonglong)uVar22 * (ulonglong)_DAT_1822899c0 << 0x20) +
            (ulonglong)_DAT_1822899e0 * (uVar12 & 0xffffffff) +
            ((ulonglong)_DAT_1822899f0 * (uVar12 & 0xffffffff) +
             (ulonglong)uVar45 * (ulonglong)_DAT_1822899e0 << 0x20)) -
           ((ulonglong)uVar41 * (ulonglong)_DAT_182289ac0 +
            ((ulonglong)_DAT_182289b30 * (ulonglong)uVar41 +
             (uVar24 >> 0x20) * (ulonglong)_DAT_182289ac0 << 0x20) +
           (ulonglong)uVar23 * (ulonglong)_DAT_182289b10 +
           ((ulonglong)_DAT_182289b20 * (ulonglong)uVar23 +
            (SUB168(auVar38 ^ auVar29,0) >> 0x20) * (ulonglong)_DAT_182289b10 << 0x20) +
           (ulonglong)uVar15 * (ulonglong)_DAT_182289af0 +
           ((ulonglong)_DAT_182289b00 * (ulonglong)uVar15 +
            (uVar33 >> 0x20) * (ulonglong)_DAT_182289af0 << 0x20) +
           (ulonglong)uVar54 * (ulonglong)_DAT_182289ad0 +
           ((ulonglong)_DAT_182289ae0 * (ulonglong)uVar54 +
            (uVar11 >> 0x20) * (ulonglong)_DAT_182289ad0 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_182289aa0 +
           ((ulonglong)_DAT_182289ab0 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar45 * (ulonglong)_DAT_182289aa0 << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_182289a80 +
           ((ulonglong)_DAT_182289a90 * (uVar13 & 0xffffffff) +
            (ulonglong)uVar22 * (ulonglong)_DAT_182289a80 << 0x20))) + _DAT_182289b40;
  _DAT_1833660a0 = _DAT_183365fc0 ^ uVar10 ^ uVar13;
  _DAT_183366428 = (_DAT_183366428 ^ uVar10) + uVar13 ^ 0x7b5d02be14f9e619;
  _DAT_1833664b8 = (_DAT_1833664b8 * -0x6ce14a81caa5cb9b ^ _DAT_183366428) + uVar10;
  _DAT_1833662b8 = _DAT_1833664b8 ^ _DAT_183366428;
  uVar12 = uVar8 ^ 0x84222325 ^ _DAT_183365fd8;
  lVar47 = (uVar8 ^ 0x84222325) + _DAT_183365f38;
  uVar10 = uVar12 + lVar47;
  uVar11 = (uVar13 ^ _DAT_183365f38) + _DAT_183365fd8 + uVar13;
  uVar12 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar12;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar13 ^ _DAT_183365f38;
  _DAT_183365f70 = uVar13;
  _DAT_183366068 =
       func_0x00018d774a60((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183365fd8 + uVar13) ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - lVar47);
  uVar15 = (uint)(uVar8 >> 0x20);
  auVar43._8_4_ = (int)uVar8;
  auVar43._0_8_ = uVar8;
  auVar43._12_4_ = uVar15;
  uVar40 = (uint)(uVar13 >> 0x20);
  auVar39._8_4_ = (int)uVar13;
  auVar39._0_8_ = uVar13;
  auVar39._12_4_ = uVar40;
  uVar22 = SUB164(auVar43 & auVar39,0);
  uVar33 = SUB168(auVar43 & auVar39,0);
  uVar41 = SUB164(auVar43 | auVar39,0);
  uVar10 = SUB168(auVar43 | auVar39,0);
  uVar23 = SUB164(auVar43 ^ auVar39,0);
  uVar24 = SUB168(auVar43 ^ auVar39,0);
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar45 = SUB164(auVar43 ^ auVar2,0);
  uVar11 = SUB168(auVar43 ^ auVar2,0);
  uVar12 = (uVar13 * uVar8 ^ _DAT_183366068) * -0x51dbc3a87da0284b;
  uVar10 = (((ulonglong)_DAT_182289b90 * (ulonglong)uVar45 +
             ((ulonglong)_DAT_182289c00 * (ulonglong)uVar45 +
              (uVar11 >> 0x20) * (ulonglong)_DAT_182289b90 << 0x20) +
            (ulonglong)_DAT_182289be0 * (ulonglong)uVar23 +
            ((ulonglong)_DAT_182289bf0 * (ulonglong)uVar23 +
             (uVar24 >> 0x20) * (ulonglong)_DAT_182289be0 << 0x20) +
            (ulonglong)_DAT_182289bc0 * (ulonglong)uVar41 +
            ((ulonglong)_DAT_182289bd0 * (ulonglong)uVar41 +
             (uVar10 >> 0x20) * (ulonglong)_DAT_182289bc0 << 0x20) +
            (ulonglong)_DAT_182289ba0 * (ulonglong)uVar22 +
            ((ulonglong)_DAT_182289bb0 * (ulonglong)uVar22 +
             (uVar33 >> 0x20) * (ulonglong)_DAT_182289ba0 << 0x20) +
            (ulonglong)_DAT_182289b70 * (uVar13 & 0xffffffff) +
            ((ulonglong)_DAT_182289b80 * (uVar13 & 0xffffffff) +
             (ulonglong)uVar40 * (ulonglong)_DAT_182289b70 << 0x20) +
            (ulonglong)_DAT_182289b50 * (uVar8 & 0xffffffff) +
            ((ulonglong)_DAT_182289b60 * (uVar8 & 0xffffffff) +
             (ulonglong)uVar15 * (ulonglong)_DAT_182289b50 << 0x20)) -
           ((ulonglong)uVar45 * (_DAT_182289c70 & 0xffffffff) +
            ((ulonglong)_DAT_182289ce0 * (ulonglong)uVar45 +
             (uVar11 >> 0x20) * (_DAT_182289c70 & 0xffffffff) << 0x20) +
           (ulonglong)uVar23 * (_DAT_182289cc0 & 0xffffffff) +
           ((ulonglong)_DAT_182289cd0 * (ulonglong)uVar23 +
            (uVar24 >> 0x20) * (_DAT_182289cc0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar41 * (ulonglong)_DAT_182289ca0 +
           ((ulonglong)_DAT_182289cb0 * (ulonglong)uVar41 +
            (uVar10 >> 0x20) * (ulonglong)_DAT_182289ca0 << 0x20) +
           (ulonglong)uVar22 * (ulonglong)_DAT_182289c80 +
           ((ulonglong)_DAT_182289c90 * (ulonglong)uVar22 +
            (uVar33 >> 0x20) * (ulonglong)_DAT_182289c80 << 0x20) +
           (uVar13 & 0xffffffff) * (ulonglong)_DAT_182289c50 +
           ((ulonglong)_DAT_182289c60 * (uVar13 & 0xffffffff) +
            (ulonglong)uVar40 * (ulonglong)_DAT_182289c50 << 0x20) +
           (uVar8 & 0xffffffff) * (ulonglong)_DAT_182289c30 +
           ((ulonglong)_DAT_182289c40 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar15 * (ulonglong)_DAT_182289c30 << 0x20))) + _DAT_182289cf0;
  _DAT_183365f78 = uVar10 ^ uVar12;
  _DAT_183366248 = (_DAT_183366248 ^ uVar12) + uVar10 ^ 0xd92b35c04a15d396;
  _DAT_183366448 = (_DAT_183366448 * -0x26bc064b5a7341bf ^ _DAT_183366248) + uVar12;
  _DAT_183366100 = _DAT_183366448 ^ _DAT_183366248;
  uVar12 = uVar52 ^ 0x84222325;
  uVar8 = ((_DAT_1833664d0 ^ uVar12) + (uVar12 & _DAT_1833664d0) * 2) * (uVar10 - _DAT_183366020);
  uVar8 = (uVar8 | _DAT_183366338) + (uVar8 & _DAT_183366338);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_1833662b8 = uVar10;
  _DAT_1833663f0 = func_0x00018d774a60((uVar12 ^ uVar10 | uVar8) + (uVar8 & (uVar12 ^ uVar10)));
  auVar17 = _DAT_1800170c0;
  uStack0000000000000070 = (undefined4)uVar52;
  uStack0000000000000074 = (uint)(uVar52 >> 0x20);
  auVar44._8_4_ = uStack0000000000000070;
  auVar44._0_8_ = uVar52;
  auVar44._12_4_ = uStack0000000000000074;
  uVar15 = (uint)(uVar10 >> 0x20);
  auVar30._8_4_ = (int)uVar10;
  auVar30._0_8_ = uVar10;
  auVar30._12_4_ = uVar15;
  auVar16 = auVar44 & auVar30;
  auVar18 = auVar44 ^ auVar30;
  uVar13 = auVar44._8_8_;
  uVar11 = auVar30._8_8_;
  uVar8 = (uVar52 | uVar10) ^ _DAT_1833663f0;
  uVar12 = uVar8 << 0x3c | uVar8 >> 4;
  uVar8 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar12 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar12;
  auVar51._8_4_ = 0xffffffff;
  auVar51._0_8_ = 0xffffffffffffffff;
  auVar51._12_4_ = 0xffffffff;
  auVar30 = auVar30 ^ auVar51;
  auVar50._0_8_ =
       (((ulonglong)auVar18._0_4_ * (ulonglong)_DAT_182289d40 +
         ((_DAT_182289d50 & 0xffffffff) * (ulonglong)auVar18._0_4_ +
          (auVar18._0_8_ >> 0x20) * (ulonglong)_DAT_182289d40 << 0x20) +
        (ulonglong)auVar16._0_4_ * (ulonglong)_DAT_182289d20 +
        ((_DAT_182289d30 & 0xffffffff) * (ulonglong)auVar16._0_4_ +
         (auVar16._0_8_ >> 0x20) * (ulonglong)_DAT_182289d20 << 0x20) +
        (_DAT_182289d10 & 0xffffffff) * (uVar10 & 0xffffffff) +
        ((ulonglong)uVar15 * (_DAT_182289d10 & 0xffffffff) +
         (_DAT_182289d00 & 0xffffffff) * (uVar10 & 0xffffffff) << 0x20) +
        (uVar52 & 0xffffffff) * (_DAT_182289d10 & 0xffffffff) +
        ((ulonglong)uStack0000000000000074 * (_DAT_182289d10 & 0xffffffff) +
         (uVar52 & 0xffffffff) * (_DAT_182289d00 & 0xffffffff) << 0x20)) -
       ((ulonglong)auVar30._0_4_ * (_DAT_182289d90 & 0xffffffff) +
        ((auVar30._0_8_ >> 0x20) * (_DAT_182289d90 & 0xffffffff) +
         (_DAT_182289d80 & 0xffffffff) * (ulonglong)auVar30._0_4_ << 0x20) +
       (uVar10 & 0xffffffff) * (_DAT_182289d90 & 0xffffffff) +
       ((ulonglong)uVar15 * (_DAT_182289d90 & 0xffffffff) +
        (uVar10 & 0xffffffff) * (_DAT_182289d80 & 0xffffffff) << 0x20))) - _DAT_182289d90;
  auVar50._8_8_ =
       (((auVar18._8_8_ & 0xffffffff) * (ulonglong)_UNK_182289d48 +
         ((_UNK_182289d58 & 0xffffffff) * (ulonglong)auVar18._8_4_ +
          (auVar18._8_8_ >> 0x20) * (ulonglong)_UNK_182289d48 << 0x20) +
        (auVar16._8_8_ & 0xffffffff) * (ulonglong)_UNK_182289d28 +
        ((_UNK_182289d38 & 0xffffffff) * (ulonglong)auVar16._8_4_ +
         (auVar16._8_8_ >> 0x20) * (ulonglong)_UNK_182289d28 << 0x20) +
        (_UNK_182289d18 & 0xffffffff) * (uVar10 & 0xffffffff) +
        ((uVar11 >> 0x20) * (_UNK_182289d18 & 0xffffffff) +
         (_UNK_182289d08 & 0xffffffff) * (uVar10 & 0xffffffff) << 0x20) +
        (uVar13 & 0xffffffff) * (_UNK_182289d18 & 0xffffffff) +
        ((uVar13 >> 0x20) * (_UNK_182289d18 & 0xffffffff) +
         (uVar13 & 0xffffffff) * (_UNK_182289d08 & 0xffffffff) << 0x20)) -
       ((auVar30._8_8_ & 0xffffffff) * (_UNK_182289d98 & 0xffffffff) +
        ((auVar30._8_8_ >> 0x20) * (_UNK_182289d98 & 0xffffffff) +
         (_UNK_182289d88 & 0xffffffff) * (ulonglong)auVar30._8_4_ << 0x20) +
       (uVar11 & 0xffffffff) * (_UNK_182289d98 & 0xffffffff) +
       ((uVar11 >> 0x20) * (_UNK_182289d98 & 0xffffffff) +
        (uVar11 & 0xffffffff) * (_UNK_182289d88 & 0xffffffff) << 0x20))) - _UNK_182289d98;
  _DAT_183366238 = _DAT_183366398 ^ uVar12 ^ auVar50._0_8_;
  _DAT_183366438 = (_DAT_183366438 ^ uVar12) + auVar50._0_8_ ^ 0xd5442fc028d19fe1;
  _DAT_183365f48 = (_DAT_183365f48 * 0x3e42788b762a4c55 ^ _DAT_183366438) + uVar12;
  _DAT_1833662f8 = _DAT_183365f48 ^ _DAT_183366438;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9;
  auVar18 = pblendw(auVar4,auVar51,0xf0);
  auVar16 = pshufb(auVar18 ^ _DAT_182289da0,_DAT_1800170c0);
  uVar12 = auVar16._8_8_ + auVar16._0_8_;
  uVar8 = uVar12 + _DAT_183366070;
  if (auVar16._4_4_ < 0) {
    uVar8 = _DAT_183366100 ^ uVar12;
  }
  _DAT_183366118 = auVar50._0_8_;
  _DAT_183366350 = func_0x00018d774a60(SUB161(auVar18 ^ _DAT_182289da0,5) ^ uVar8);
  uVar10 = ~uVar7;
  _DAT_183365ff8 = (_DAT_183365ff8 ^ ~_DAT_183366350 & uVar7) + uVar10 ^ 0x2a8ab8f0c7d8ac4;
  _DAT_183366380 =
       (_DAT_183366380 * -0x1fb61f8450cf0e2d ^ _DAT_183365ff8) + (~_DAT_183366350 & uVar7);
  _DAT_1833664f8 = _DAT_183366380 ^ _DAT_183365ff8;
  auVar20._8_8_ = uVar10;
  auVar20._0_8_ = uVar9;
  auVar18 = pshufb(auVar20 ^ _DAT_182289db0,auVar17);
  uVar12 = auVar18._8_8_ + auVar18._0_8_;
  uVar8 = uVar12 + _DAT_1833662c8;
  if (auVar18._4_4_ < 0) {
    uVar8 = _DAT_183365f68 ^ uVar12;
  }
  _DAT_1833662b0 = uVar10;
  _DAT_1833661f0 = func_0x00018d774a60(SUB161(auVar20 ^ _DAT_182289db0,5) ^ uVar8);
  uVar7 = ~(uVar10 * uVar7 ^ _DAT_1833661f0) & uVar7;
  uVar8 = uVar7 >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar7;
  _DAT_183365f00 = _DAT_183365f00 ^ uVar7 ^ 0xcbd1f3044ef52a0e;
  _DAT_183366298 = (_DAT_183366298 * 0x9b7b090c8dc3403 ^ _DAT_183365f00) + uVar7;
  _DAT_183366110 = _DAT_183366298 ^ _DAT_183365f00;
  auVar31._8_8_ = _DAT_182288700;
  auVar31._0_8_ = _DAT_182288700 ^ 0x84222325;
  _DAT_183366010 = 0;
  auVar18 = pshufb(auVar31 ^ _DAT_182289dc0,auVar17);
  uVar12 = auVar18._8_8_ + auVar18._0_8_;
  uVar8 = uVar12 + _DAT_183366088;
  if (auVar18._4_4_ < 0) {
    uVar8 = _DAT_1833663a0 ^ uVar12;
  }
  _DAT_183366018 = func_0x00018d774a60(SUB161(auVar31 ^ _DAT_182289dc0,5) ^ uVar8);
  uVar6 = (uVar6 ^ _DAT_183366018) * -0x1c4917d3361a6bb3;
  _DAT_1833661c0 = _DAT_1833661c0 ^ uVar6 ^ 0x5f88eed10e5b6390;
  _DAT_1833661b8 = (_DAT_1833661b8 * 0x3b48eab98a3d12b ^ _DAT_1833661c0) + uVar6;
  _DAT_183366418 = _DAT_1833661b8 ^ _DAT_1833661c0;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = auVar50._0_8_ ^ 0x84222325;
  _DAT_183366250 = 0;
  auVar17 = pshufb(auVar21 ^ _DAT_182289dd0,auVar17);
  uVar8 = auVar17._8_8_ + auVar17._0_8_;
  uVar6 = uVar8 + _DAT_183366388;
  if (auVar17._4_4_ < 0) {
    uVar6 = _DAT_183366388 ^ uVar8;
  }
  _DAT_1833661b8 = func_0x00018d774a60(SUB161(auVar21 ^ _DAT_182289dd0,5) ^ uVar6);
  uVar8 = uStack00000000000000a8;
  auVar32._8_4_ = 0xffffffff;
  auVar32._0_8_ = 0xffffffffffffffff;
  auVar32._12_4_ = 0xffffffff;
  uVar15 = SUB164(auVar32 ^ auVar50,0);
  uVar10 = (((ulonglong)_DAT_182289e20 * (auVar50._0_8_ & 0xffffffff) +
             ((ulonglong)_DAT_182289e30 * (auVar50._0_8_ & 0xffffffff) +
              (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_182289e20 << 0x20) +
            (ulonglong)_DAT_182289e00 * (auVar50._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_182289e10 * (auVar50._0_8_ & 0xffffffff) +
             (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_182289e00 << 0x20) +
            (ulonglong)_DAT_182289de0 * (auVar50._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_182289df0 * (auVar50._0_8_ & 0xffffffff) +
             (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_182289de0 << 0x20)) -
           ((ulonglong)uVar15 * (ulonglong)_DAT_182289e50 +
            ((SUB168(auVar32 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_182289e50 +
             (ulonglong)_DAT_182289e40 * (ulonglong)uVar15 << 0x20) +
           (auVar50._0_8_ & 0xffffffff) * (ulonglong)_DAT_182289e50 +
           ((auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_182289e50 +
            (auVar50._0_8_ & 0xffffffff) * (ulonglong)_DAT_182289e40 << 0x20))) + 0x8953cf1cb29ba63e
  ;
  _DAT_183366410 = _DAT_183366368 ^ _DAT_1833662c0 ^ uVar10;
  _DAT_1833663e8 = (_DAT_1833663e8 ^ _DAT_1833662c0) + uVar10 ^ 0x5f63620f131a7cdb;
  _DAT_183366360 = (_DAT_183366360 * 0x1ea9428a026b1351 ^ _DAT_1833663e8) + _DAT_1833662c0;
  _DAT_183366050 = _DAT_183366360 ^ _DAT_1833663e8;
  uVar6 = uStack00000000000000a8 ^ 0x84222325 ^ _DAT_183366258;
  lVar47 = (uStack00000000000000a8 ^ 0x84222325) + _DAT_183366058;
  uVar12 = uVar6 + lVar47;
  uVar7 = (uVar10 ^ _DAT_183366058) + _DAT_183366258 + uVar10;
  uVar6 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar6;
  uVar12 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar10 ^ _DAT_183366058;
  _DAT_183366100 = uVar10;
  _DAT_183366350 =
       func_0x00018d774a60((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183366258 + uVar10) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar47);
  uVar12 = _DAT_183366350 << 0x3d | _DAT_183366350 >> 3;
  uVar6 = uVar12 >> 1 | uVar12;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
           ^ uVar12;
  uVar6 = uVar8 ^ uVar12;
  _DAT_183366228 = uVar8 + uVar10 + (uVar10 & uVar8) * -2;
  _DAT_183366210 = (_DAT_183366210 ^ uVar6) + _DAT_183366228 ^ 0xe800301f504caed6;
  _DAT_183366108 = (_DAT_183366108 * 0x648cab15574d4c25 ^ _DAT_183366210) + uVar6;
  _DAT_183365fb0 = _DAT_183366108 ^ _DAT_183366210;
  FUN_190dd72e0(uVar12,*_DAT_18301ee50 + 0x8eb9,0x192);
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



// ===== continuation @ rva d772c48 (image 18d772c48) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d772c48(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182288a88)();
  return;
}



// ===== continuation @ rva d772b0e (image 18d772b0e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d772b0e(void)

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



// ===== continuation @ rva d7734ac (image 18d7734ac) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7734ac(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d77485e (image 18d77485e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d77485e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1822891c8)();
  return;
}



// ===== continuation @ rva d773415 (image 18d773415) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d773415(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d773eb8 (image 18d773eb8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d773eb8(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d773ff1 (image 18d773ff1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d773ff1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182289428)();
  return;
}



// ===== continuation @ rva d773f95 (image 18d773f95) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d773f95(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182288eb8)();
  return;
}



// ===== continuation @ rva d774c78 (image 18d774c78) =====

void FUN_18d774c78(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x50) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018d774ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18228a210 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva d774c23 (image 18d774c23) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d774c5a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d774c23(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d784cf6 (image 18d784cf6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d784cf6(ulonglong param_1,ulonglong param_2)

{
  longlong in_RAX;
  longlong in_RCX;
  longlong *unaff_RBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  ulonglong uVar1;
  ulonglong uVar2;
  uint unaff_XMM6_Da;
  uint uVar3;
  uint uVar4;
  uint unaff_XMM14_Da;
  
  *(bool *)(unaff_RBP + 6) = *unaff_RBP == 0;
  uVar1 = param_1 + in_RCX + param_2;
  uVar2 = (param_2 ^ 1) + in_RAX + 1;
  param_1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ param_1;
  uVar1 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_2 ^ 1;
  _DAT_1833666a0 =
       func_0x00018d79c0b0((uVar1 << 0x1d | uVar1 >> 0x23) - (in_RAX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  uVar3 = unaff_ESI & unaff_XMM14_Da;
  uVar4 = unaff_ESI | unaff_XMM14_Da;
  uVar1 = _DAT_1833666a0 * 0x1664baa54f55b223;
  _DAT_183366858 =
       ((((ulonglong)(unaff_ESI ^ unaff_XMM14_Da) * (ulonglong)_DAT_18228a7f0 << 0x20) +
         (ulonglong)(unaff_ESI ^ unaff_XMM14_Da) * (ulonglong)_DAT_18228a7e0 +
         ((ulonglong)uVar4 * (ulonglong)_DAT_18228a7d0 << 0x20) +
         (ulonglong)uVar4 * (ulonglong)_DAT_18228a7c0 +
        ((ulonglong)uVar3 * (ulonglong)_DAT_18228a7b0 << 0x20 |
        (ulonglong)uVar3 * (ulonglong)_DAT_18228a7a0) +
        ((ulonglong)unaff_ESI * (ulonglong)_DAT_18228a790 << 0x20) +
        (ulonglong)unaff_ESI * (ulonglong)_DAT_18228a780) -
       (((ulonglong)(unaff_ESI ^ unaff_XMM6_Da) * (ulonglong)_DAT_18228a870 + _DAT_18228a880 << 0x20
        ) + (ulonglong)(unaff_ESI ^ unaff_XMM6_Da) * (ulonglong)_DAT_18228a860 +
       ((ulonglong)uVar4 * (ulonglong)_DAT_18228a850 << 0x20) +
       (ulonglong)uVar4 * (ulonglong)_DAT_18228a840 +
       ((ulonglong)uVar3 * (ulonglong)_DAT_18228a850 << 0x20 |
       (ulonglong)uVar3 * (ulonglong)_DAT_18228a840) +
       ((ulonglong)unaff_ESI * (ulonglong)_DAT_18228a830 << 0x20) +
       (ulonglong)unaff_ESI * (ulonglong)_DAT_18228a820)) + 0x4b7c806cb4ed087e;
  _DAT_183366720 = _DAT_183366700 ^ uVar1 ^ _DAT_183366858;
  _DAT_1833668c8 = (_DAT_1833668c8 ^ uVar1) + _DAT_183366858 ^ 0x2ce868a1fe8099df;
  _DAT_1833665a8 = (_DAT_1833665a8 * -0x1debae76a2ef51b7 ^ _DAT_1833668c8) + uVar1;
  _DAT_183366768 = _DAT_1833665a8 ^ _DAT_1833668c8;
  _DAT_183366858 = _DAT_183366858 & 0xffffffff;
  uVar1 = (~_DAT_183366668 + 0xe9f2250f) *
          ((_DAT_1833665b8 ^ 0xda0452ec) + (ulonglong)((uint)_DAT_1833665b8 & 0xda0452ec) * 2);
  uVar1 = (uVar1 | _DAT_183366558) + (uVar1 & _DAT_183366558);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366800 = func_0x00018d79c0b0((uVar1 | 0x33f677e2) + (ulonglong)((uint)uVar1 & 0x33f677e2))
  ;
  _DAT_1833666c8 =
       (_DAT_1833666c8 ^ _DAT_183366800 & 0xffffffffc0000000) + 0xb7d454c7 ^ 0x827150483b1bb08;
  _DAT_183366668 =
       (_DAT_183366668 * -0x6f197460896a808b ^ _DAT_1833666c8) +
       (_DAT_183366800 & 0xffffffffc0000000);
  _DAT_183366870 = _DAT_183366668 ^ _DAT_1833666c8;
  _DAT_183366620 = 0xb7d454c7;
  uVar1 = (~_DAT_1833667a0 + 0x6b318250) *
          ((_DAT_1833668f8 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1833668f8 & 0x8422dcda) * 2);
  uVar1 = (uVar1 | _DAT_183366790) + (uVar1 & _DAT_183366790);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366660 = func_0x00018d79c0b0((uVar1 | 0xef135e95) + (ulonglong)((uint)uVar1 & 0xef135e95))
  ;
  uVar1 = _DAT_183366660 << 0xc | _DAT_183366660 >> 0x34;
  _DAT_183366610 = _DAT_183366588 ^ uVar1 ^ 0x6b32824e;
  _DAT_1833668a8 = (_DAT_1833668a8 ^ uVar1) + 0x6b32824e ^ 0xbc4a2da70f0ee23a;
  _DAT_183366720 = (_DAT_183366720 * 0x3d9d019f74c02e0b ^ _DAT_1833668a8) + uVar1;
  _DAT_183366678 = _DAT_183366720 ^ _DAT_1833668a8;
  _DAT_1833667b8 = 0x6b32824e;
  uVar1 = (_DAT_183366790 ^ _DAT_18228a890) + _DAT_1833666a8 + unaff_RDI;
  uVar2 = (_DAT_1833666a8 ^ _UNK_18228a898) + _DAT_183366790 + 0xd160f3f5;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183366790 ^ _DAT_18228a890;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833666a8 ^ _UNK_18228a898;
  _DAT_183366890 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183366790 + 0xd160f3f5) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833666a8 + unaff_RDI));
  uVar1 = _DAT_183366890 - (_DAT_183366890 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_R13) + (uVar1 >> 2 & unaff_R13);
  uVar2 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183366890;
  uVar1 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_R13) + (uVar1 >> 2 & unaff_R13);
  uVar2 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar2;
  uVar1 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_R13) + (uVar1 >> 2 & unaff_R13);
  uVar2 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar2;
  _DAT_183366748 = (_DAT_183366748 ^ uVar2) - 0xd160f3f5 ^ 0x4d3182d096690ed8;
  _DAT_183366798 = (_DAT_183366798 * -0x49662851093b848d ^ _DAT_183366748) + uVar2;
  _DAT_1833667b8 = _DAT_183366798 ^ _DAT_183366748;
  _DAT_183366640 = 0x2e9f0c0b;
  _DAT_183366840 = func_0x00018d79c0b0(_DAT_183366718 ^ 0xffed0034d4ffbdfe);
  uVar1 = _DAT_183366840 - (_DAT_183366840 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_R13) + (uVar1 >> 2 & unaff_R13);
  uVar1 = _DAT_183366840 ^ 0xd1600c0a ^
          (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6;
  _DAT_1833665e8 = _DAT_183366748 ^ uVar1 ^ 0xd161f3f4;
  _DAT_183366880 = (_DAT_183366880 ^ uVar1) + 0xd161f3f4 ^ 0x68dbc0cac5014c76;
  _DAT_1833665e0 = (_DAT_1833665e0 * 0x3f1d2e2187b77bf5 ^ _DAT_183366880) + uVar1 ^ _DAT_183366880;
  _DAT_1833668e0 = 0xd161f3f4;
  uVar1 = (~_DAT_1833666a8 + 0x2e9f0c0c) *
          ((_DAT_183366508 ^ 0x5543d0d1) + (ulonglong)((uint)_DAT_183366508 & 0x5543d0d1) * 2);
  uVar1 = (uVar1 | _DAT_183366798) + (uVar1 & _DAT_183366798);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833665c8 = func_0x00018d79c0b0((uVar1 | 0x7bdcdcda) + (ulonglong)((uint)uVar1 & 0x7bdcdcda))
  ;
  uVar1 = _DAT_1833665c8 & 0x7fffffffffffffff;
  _DAT_183366640 = _DAT_183366870 ^ uVar1 ^ 0x10000ffff;
  _DAT_183366758 = (_DAT_183366758 ^ uVar1) + 0x10000ffff ^ 0xb839f30711921bdd;
  _DAT_1833668b0 = (_DAT_1833668b0 * -0x691f5d7d6b39c3ab ^ _DAT_183366758) + uVar1;
  _DAT_183366780 = _DAT_1833668b0 ^ _DAT_183366758;
  _DAT_183366588 = 0xffff;
  uVar1 = (~_DAT_183366570 + 0x7d1dc7d8) *
          ((_DAT_183366780 ^ 0x84222325) + (ulonglong)((uint)_DAT_183366780 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1833667d0) + (uVar1 & _DAT_1833667d0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366538 = func_0x00018d79c0b0((uVar1 | 0xf93fe4f2) + (ulonglong)((uint)uVar1 & 0xf93fe4f2))
  ;
  _DAT_1833666b8 =
       (_DAT_1833666b8 ^ _DAT_183366538 & 0xffffffffffff) - 0x7d1dc7d7 ^ 0x2a39d3f63dd8c6f5;
  _DAT_183366778 =
       (_DAT_183366778 * 0x7436c24db5ec1a03 ^ _DAT_1833666b8) + (_DAT_183366538 & 0xffffffffffff);
  _DAT_1833668e0 = _DAT_183366778 ^ _DAT_1833666b8;
  _DAT_1833666c0 = 0x82e23829;
  uVar1 = (_DAT_1833666e8 ^ _DAT_18228a8a0) + _DAT_1833667f0 + 0xf93ce4f3;
  uVar2 = (_DAT_1833667f0 ^ _UNK_18228a8a8) + _DAT_1833666e8 + 0x82e23829;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833666e8 ^ _DAT_18228a8a0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833667f0 ^ _UNK_18228a8a8;
  _DAT_1833666f8 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833666e8 + 0x82e23829) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1833667f0 + 0xf93ce4f3));
  uVar1 = (ulonglong)(((uint)_DAT_1833666f8 ^ 0x210c0690) & 0x7d1ec7d6);
  _DAT_1833666f0 = _DAT_183366778 ^ uVar1 ^ 0x10000ffff;
  _DAT_1833665a0 = (_DAT_1833665a0 ^ uVar1) + 0x10000ffff ^ 0x597d46fc810ae5b7;
  _DAT_183366878 = (_DAT_183366878 * -0x47b69a847c30f9f3 ^ _DAT_1833665a0) + uVar1;
  _DAT_1833665d8 = _DAT_183366878 ^ _DAT_1833665a0;
  _DAT_183366660 = 0xffff;
  uVar1 = (_DAT_183366598 ^ _DAT_18228a8b0) + _DAT_183366740 + 0x5ad950ca;
  uVar2 = (_DAT_183366740 ^ _UNK_18228a8b8) + _DAT_183366598 + 0xb7d454c7;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183366598 ^ _DAT_18228a8b0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183366740 ^ _UNK_18228a8b8;
  _DAT_1833667e0 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183366598 + 0xb7d454c7) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183366740 + 0x5ad950ca));
  uVar1 = _DAT_1833667e0 ^ 0xa01eb1f3b26d8ac9;
  _DAT_183366548 = _DAT_183366500 ^ uVar1 ^ 0x196cfc8b6;
  _DAT_1833667f0 = (_DAT_1833667f0 ^ uVar1) + 0x196cfc8b6 ^ 0xfc8a28a5355755fb;
  _DAT_183366860 = (_DAT_183366860 * 0x7113afb6088e1467 ^ _DAT_1833667f0) + uVar1;
  _DAT_183366888 = _DAT_183366860 ^ _DAT_1833667f0;
  _DAT_183366568 = 0x96cfc8b6;
  uVar1 = (~_DAT_183366670 + 0xb7d454c8) *
          ((_DAT_183366690 ^ 0x5ad950ca) + (ulonglong)((uint)_DAT_183366690 & 0x5ad950ca) * 2);
  uVar1 = (uVar1 | 0x96cfc8b6) + (uVar1 & 0x96cfc8b6);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833668c0 = func_0x00018d79c0b0((uVar1 | 0xed0d040d) + (ulonglong)((uint)uVar1 & 0xed0d040d))
  ;
  uVar1 = _DAT_1833668c0 << 0xd | _DAT_1833668c0 >> 0x33;
  _DAT_183366690 = (_DAT_183366690 ^ uVar1) + 0x692f2728 ^ 0x1fde05eaee01d75e;
  _DAT_1833666e0 = (_DAT_1833666e0 * -0x21ae87cb8a73b807 ^ _DAT_183366690) + uVar1;
  _DAT_183366588 = _DAT_1833666e0 ^ _DAT_183366690;
  _DAT_183366850 = 0x692f2728;
  _DAT_183366538 = func_0x00018d79c0b0(_DAT_1833667b0 + 0xfffbff2b0d000cffU ^ 0xea);
  _DAT_183366850 = (_DAT_183366850 ^ _DAT_183366538) + 0x96d050c7 ^ 0xfbf292d1ceaa6d68;
  _DAT_1833665f8 =
       (_DAT_1833665f8 * -0x1fd0cc7078b92cfb ^ _DAT_183366850) + _DAT_183366538 ^ _DAT_183366850;
  _DAT_183366740 = 0x96d050c7;
  uVar1 = (_DAT_1833665f0 ^ _DAT_18228a8c0) + _DAT_183366840 + 0xed0d040d;
  uVar2 = (_DAT_183366840 ^ _UNK_18228a8c8) + _DAT_1833665f0 + 0x2da0a18e;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833665f0 ^ _DAT_18228a8c0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183366840 ^ _UNK_18228a8c8;
  _DAT_1833665a0 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833665f0 + 0x2da0a18e) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183366840 + 0xed0d040d));
  uVar1 = _DAT_1833665a0 ^ 0x12bf49bbe9e8c718;
  _DAT_1833667e8 = _DAT_183366898 ^ uVar1 ^ 0x96cfc8b6;
  _DAT_183366888 = (_DAT_183366888 ^ uVar1) + 0x96cfc8b6 ^ 0xcd2756e13678b4a6;
  _DAT_1833665f0 = (_DAT_1833665f0 * 0x2b269106cf7df4b7 ^ _DAT_183366888) + uVar1;
  _DAT_183366898 = _DAT_1833665f0 ^ _DAT_183366888;
  _DAT_183366640 = 0x96cfc8b6;
  uVar1 = (~_DAT_183366788 + 0x96cfc8b7) *
          ((_DAT_183366690 ^ 0x12edeb93) + (ulonglong)((uint)_DAT_183366690 & 0x12edeb93) * 2);
  uVar1 = (uVar1 | _DAT_1833665a0) + (uVar1 & _DAT_1833665a0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833668c0 = func_0x00018d79c0b0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_183366550 = (_DAT_1833668c0 ^ 0x58d827db7bb0e164) * -0x156428f4855219d9;
  _DAT_183366628 = _DAT_183366628 ^ _DAT_183366550 ^ 0xfd707df84e1c0154;
  _DAT_183366798 = (_DAT_183366798 * -0x6273e4c221329c3b ^ _DAT_183366628) + _DAT_183366550;
  _DAT_183366540 = _DAT_183366798 ^ _DAT_183366628;
  _DAT_183366538 = 0;
  uVar1 = (_DAT_183366860 ^ 0x8422dcda) + _DAT_183366518 + 0x8422dcda;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183366860 ^ 0x8422dcda;
  uVar2 = ((_DAT_183366518 + _DAT_183366860) * 0x2000 | _DAT_183366518 + _DAT_183366860 >> 0x33) ^
          _DAT_183366518;
  _DAT_1833667f8 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183366860 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183366518 + 0x8422dcda));
  _DAT_1833665b8 = _DAT_183366860 ^ _DAT_1833667f8 ^ 0xffff;
  _DAT_183366760 = (_DAT_183366760 ^ _DAT_1833667f8) + 0xffff ^ 0x650cf18d04b45277;
  _DAT_183366810 = (_DAT_183366810 * -0x41e6abf04911e9f7 ^ _DAT_183366760) + _DAT_1833667f8;
  _DAT_1833665a0 = _DAT_183366810 ^ _DAT_183366760;
  _DAT_183366768 = 0xffff;
  _DAT_183366830 = func_0x00018d79c0b0(_DAT_183366630 ^ 0xffa4ff9d2cffd939);
  uVar1 = (_DAT_183366830 ^ 0xdefb73ef) << 0x11 | _DAT_183366830 >> 0x2f;
  _DAT_183366788 = (_DAT_183366788 ^ uVar1) + 0x21048c10 ^ 0xe96d4754c6d4e980;
  _DAT_183366880 = (_DAT_183366880 * -0x90fd3c147910f19 ^ _DAT_183366788) + uVar1;
  _DAT_183366598 = _DAT_183366880 ^ _DAT_183366788;
  _DAT_1833665f0 = 0x21048c10;
  uVar1 = (_DAT_183366748 ^ _DAT_18228a8d0) + _DAT_183366690 + 0x5ad950ca;
  uVar2 = (_DAT_183366690 ^ _UNK_18228a8d8) + _DAT_183366748 + 0x21048c10;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183366748 ^ _DAT_18228a8d0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183366690 ^ _UNK_18228a8d8;
  _DAT_183366628 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183366748 + 0x21048c10) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183366690 + 0x5ad950ca));
  uVar1 = _DAT_183366628 >> 1 | _DAT_183366628;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_R13) + (uVar1 >> 2 & unaff_R13);
  uVar1 = (ulonglong)
          (~((uint)_DAT_183366628 ^
            (0x40 - (uint)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x10) & 0xdefb73ef);
  _DAT_183366648 = _DAT_183366648 ^ uVar1 ^ 0x54723c321f4b6fd3;
  _DAT_1833666a0 = (_DAT_1833666a0 * 0x5821008a236eabe3 ^ _DAT_183366648) + uVar1;
  _DAT_1833667a0 = _DAT_1833666a0 ^ _DAT_183366648;
  _DAT_1833668e0 = 0;
  uVar1 = (_DAT_1833666f0 ^ 0x8422dcda) + _DAT_183366848 + 0x8422dcda;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833666f0 ^ 0x8422dcda;
  uVar2 = ((_DAT_183366848 + _DAT_1833666f0) * 0x2000 | _DAT_183366848 + _DAT_1833666f0 >> 0x33) ^
          _DAT_183366848;
  _DAT_1833666b0 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1833666f0 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183366848 + 0x8422dcda));
  uVar1 = (_DAT_1833666b0 & 0xfff) << 0x33 | _DAT_1833666b0 >> 0xd;
  _DAT_183366650 = _DAT_183366658 ^ uVar1 ^ 0xffff;
  _DAT_1833668f8 = (_DAT_1833668f8 ^ uVar1) + 0xffff ^ 0x1a4f2254cff68d96;
  _DAT_1833667e0 = (_DAT_1833667e0 * 0x725c5db05ce42909 ^ _DAT_1833668f8) + uVar1;
  _DAT_1833668d8 = _DAT_1833667e0 ^ _DAT_1833668f8;
  _DAT_183366618 = 0xffff;
  uVar1 = func_0x00018d79c0b0(_DAT_183366898 ^ 0xffe0ff83e2ffdd59);
  _DAT_183366618 = (uVar1 ^ 0x1568b5849) & 0x1ffffffff;
  _DAT_1833668b0 = _DAT_1833668b0 ^ _DAT_183366618 ^ 0xa1dc9321233ff421;
  _DAT_183366618 = (uVar1 * 0x41e77e7d1d50ca8f ^ _DAT_1833668b0) + _DAT_183366618;
  _DAT_1833667f8 = _DAT_183366618 ^ _DAT_1833668b0;
  _DAT_183366838 = 0;
  _DAT_183366630 = func_0x00018d79c0b0(_DAT_183366748 ^ 0xffc3ff7c56002180);
  _DAT_183366848 = _DAT_183366848 ^ _DAT_183366630 ^ 0xffff;
  _DAT_1833665f0 = (_DAT_1833665f0 ^ _DAT_183366630) + 0xffff ^ 0x8b3b947da15f1841;
  _DAT_183366658 = (_DAT_183366658 * 0xb84638fc2e87b51 ^ _DAT_1833665f0) + _DAT_183366630;
  _DAT_183366640 = _DAT_183366658 ^ _DAT_1833665f0;
  _DAT_1833667f0 = 0xffff;
  *(uint *)(unaff_RBP + 0xe) = *(uint *)(unaff_RBP + 0x12) & 0xffff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[6]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d788e42 (image 18d788e42) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d788e42(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7893e2 (image 18d7893e2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7893e2(void)

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



// ===== continuation @ rva d774eb1 (image 18d774eb1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d774eb1(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_EBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong unaff_R12;
  ulonglong uVar4;
  longlong unaff_R15;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qb;
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  
  _DAT_183366778 = func_0x00018d79c0b0(_DAT_183366860 ^ 0x230084dd001d5b);
  _DAT_183366858 =
       (_DAT_183366858 ^ _DAT_183366778 & 0x7fffffffffffffff) + 0xfe ^ 0x25e4d47806dd61c9;
  _DAT_183366878 =
       (_DAT_183366878 * -0x53c6c3b9cd34c27 ^ _DAT_183366858) +
       (_DAT_183366778 & 0x7fffffffffffffff);
  _DAT_1833665e8 = _DAT_183366878 ^ _DAT_183366858;
  _DAT_183366798 = 0xfe;
  uVar2 = (~_DAT_183366620 + 5) *
          ((_DAT_183366600 ^ 0x842223ba) + (ulonglong)((uint)_DAT_183366600 & 0x842223ba) * 2);
  uVar2 = (uVar2 | _DAT_1833668b0) + (uVar2 & _DAT_1833668b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183366580 = func_0x00018d79c0b0((uVar2 | 0x842223be) + (ulonglong)((uint)uVar2 & 0x842223be))
  ;
  uVar2 = (ulonglong)((uint)_DAT_183366580 & 0x9f);
  _DAT_183366860 = (_DAT_183366860 ^ uVar2) + 0x9b ^ 0x671a6523cf74d2b9;
  _DAT_1833666b8 = (_DAT_1833666b8 * 0x2d455d48433bbaf ^ _DAT_183366860) + uVar2;
  _DAT_183366618 = _DAT_1833666b8 ^ _DAT_183366860;
  _DAT_1833666c0 = 0x9b;
  uVar2 = (~_DAT_183366818 + 0x41) *
          ((_DAT_183366580 ^ 0x84222325) + (ulonglong)((uint)_DAT_183366580 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_1833668d0) + (uVar2 & _DAT_1833668d0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1833667d8 = func_0x00018d79c0b0((uVar2 | 0x84222365) + (ulonglong)((uint)uVar2 & 0x84222365))
  ;
  uVar2 = _DAT_1833667d8 ^ 0x40;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_RDI) + (uVar3 >> 2 & unaff_RDI);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x10 ^ uVar2;
  _DAT_1833666a0 = (_DAT_1833666a0 ^ uVar2) - 0x40 ^ 0xe08255938b7408c2;
  _DAT_183366528 = (_DAT_183366528 * -0x2888d11390f08fc9 ^ _DAT_1833666a0) + uVar2;
  _DAT_183366868 = _DAT_183366528 ^ _DAT_1833666a0;
  _DAT_183366798 = 0xc0;
  _DAT_183366590 = func_0x00018d79c0b0(_DAT_183366848 + 0x1cff844affddffU ^ 0xdc);
  _DAT_183366630 = _DAT_183366750 ^ _DAT_183366590 ^ 0x70;
  _DAT_183366508 = (_DAT_183366508 ^ _DAT_183366590) + 0x70 ^ 0xebaa1a952724226b;
  _DAT_183366688 = (_DAT_183366688 * -0x6adc67a266bef269 ^ _DAT_183366508) + _DAT_183366590;
  _DAT_183366728 = _DAT_183366688 ^ _DAT_183366508;
  _DAT_1833666c8 = 0x70;
  uVar2 = (_DAT_183366508 ^ unaff_XMM6_Qa) + _DAT_183366818 + 0x84222355;
  uVar3 = (_DAT_183366818 ^ unaff_XMM6_Qb) + _DAT_183366508 + 0xc0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183366508 ^ unaff_XMM6_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183366818 ^ unaff_XMM6_Qb;
  _DAT_183366880 =
       func_0x00018d79c0b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183366508 + 0xc0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183366818 + 0x84222355));
  uVar2 = _DAT_183366880 >> 1 | _DAT_183366880;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_RDI) + (uVar2 >> 2 & unaff_RDI);
  uVar2 = (ulonglong)
          (~((uint)_DAT_183366880 ^
            (0x40 - (uint)(byte)(((uVar2 >> 4) + uVar2 & unaff_R12) * 0x101010101010101 >> 0x38)) *
            4) & 0x70) ^ 0x70;
  _DAT_1833665b0 = _DAT_1833668b0 ^ uVar2 ^ 0x130;
  _DAT_183366650 = (_DAT_183366650 ^ uVar2) + 0x130 ^ 0xcf1578294ffebb82;
  _DAT_1833666a8 = (_DAT_1833666a8 * -0x85b4ac82b19f3e3 ^ _DAT_183366650) + uVar2;
  _DAT_183366818 = _DAT_1833666a8 ^ _DAT_183366650;
  _DAT_183366580 = 0x30;
  uVar2 = (_DAT_1833668e8 ^ unaff_XMM7_Qa) + _DAT_1833668b8 + 0x84222325;
  uVar3 = (_DAT_1833668b8 ^ unaff_XMM7_Qb) + _DAT_1833668e8 + 0xf8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833668e8 ^ unaff_XMM7_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833668b8 ^ unaff_XMM7_Qb;
  _DAT_183366728 =
       func_0x00018d79c0b0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833668e8 + 0xf8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833668b8 + 0x84222325));
  _DAT_183366598 = (_DAT_183366598 ^ _DAT_183366728) - 0xf8 ^ 0xd4b7323d33c98fbf;
  _DAT_1833666f8 = (_DAT_1833666f8 * -0xa3832f4876df9ab ^ _DAT_183366598) + _DAT_183366728;
  _DAT_1833668a8 = _DAT_1833666f8 ^ _DAT_183366598;
  _DAT_183366650 = _DAT_183366830 ^ 0xffffffffffffff08;
  _DAT_183366558 = 8;
  uVar2 = (~_DAT_183366630 + 0xf9) *
          ((_DAT_1833665b8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1833665b8 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_183366710) + (uVar2 & _DAT_183366710);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183366658 = func_0x00018d79c0b0((uVar2 | 0x842223ed) + (ulonglong)((uint)uVar2 & 0x842223ed))
  ;
  _DAT_183366610 = _DAT_1833666c0 ^ _DAT_183366520 ^ 0x128;
  _DAT_183366540 = (_DAT_183366540 ^ _DAT_183366520) + 0x128 ^ 0x45e5ea42e5b69164;
  _DAT_183366790 = (_DAT_183366790 * 0x526a6677660a71f5 ^ _DAT_183366540) + _DAT_183366520;
  _DAT_1833666d0 = _DAT_183366790 ^ _DAT_183366540;
  _DAT_183366750 = 0x28;
  uVar2 = (~_DAT_183366570 + 9) *
          ((_DAT_183366760 ^ 0x8422230d) + (ulonglong)((uint)_DAT_183366760 & 0x8422230d) * 2);
  uVar2 = (uVar2 | _DAT_1833666d0) + (uVar2 & _DAT_1833666d0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183366578 = func_0x00018d79c0b0((uVar2 | 0x84222305) + (ulonglong)((uint)uVar2 & 0x84222305))
  ;
  _DAT_183366598 = _DAT_1833666e8 ^ _DAT_183366578 ^ 0x30;
  _DAT_183366858 = (_DAT_183366858 ^ _DAT_183366578) + 0x30 ^ 0xe3367ad33fbac51d;
  _DAT_1833665c8 = (_DAT_1833665c8 * -0x5ea2eb554c5cae39 ^ _DAT_183366858) + _DAT_183366578;
  _DAT_183366830 = _DAT_1833665c8 ^ _DAT_183366858;
  _DAT_1833666b0 = 0x30;
  _DAT_1833668e8 = func_0x00018d79c0b0(_DAT_1833665d0 ^ 0xffe1007b82ffe12e);
  uVar2 = _DAT_1833668e8 - (_DAT_1833668e8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_RDI) + (uVar2 >> 2 & unaff_RDI);
  uVar2 = (((uVar2 >> 4) + uVar2 & unaff_R12) * 0x101010101010101 >> 0x38) << 6 ^ _DAT_1833668e8 ^
          0xb8;
  _DAT_1833666c8 = (_DAT_1833666c8 ^ uVar2) - 0xb8 ^ 0x642c34b85be8883f;
  _DAT_183366610 = (_DAT_183366610 * 0x3e96997f684fab01 ^ _DAT_1833666c8) + uVar2;
  _DAT_183366658 = _DAT_183366610 ^ _DAT_1833666c8;
  _DAT_183366500 = 0x48;
  _DAT_1833667c0 = func_0x00018d79c0b0(_DAT_183366618 + 0xffe2ff7c7b0021ff ^ 0xbb);
  uVar2 = (ulonglong)(~(uint)_DAT_1833667c0 & 0xe8);
  _DAT_183366798 = _DAT_1833668d8 ^ uVar2 ^ 0x130;
  _DAT_183366670 = (_DAT_183366670 ^ uVar2) + 0x130 ^ 0x6be2163bb20144b3;
  _DAT_183366880 = (_DAT_183366880 * 0x506c6178f0974ccf ^ _DAT_183366670) + uVar2;
  _DAT_183366718 = _DAT_183366880 ^ _DAT_183366670;
  _DAT_1833666a0 = 0x30;
  _DAT_183366528 = func_0x00018d79c0b0(_DAT_1833668f8 ^ 0x210083bfffe1c4);
  uVar2 = _DAT_183366528 << 0x36 | _DAT_183366528 >> 10;
  _DAT_183366758 = (_DAT_183366758 ^ uVar2) + 0x65 ^ 0x8dbadc936ef1963f;
  _DAT_183366860 = (_DAT_183366860 * -0x34ee6e62fdb9cf15 ^ _DAT_183366758) + uVar2;
  _DAT_1833667f8 = _DAT_183366860 ^ _DAT_183366758;
  _DAT_1833667d0 = _DAT_183366850 ^ 0x65;
  _DAT_1833666e0 = 0x65;
  _DAT_1833666e0 = func_0x00018d79c0b0(_DAT_183366700 ^ 0x21007bebffe102);
  uVar2 = (_DAT_1833666e0 ^ 0x1480) & 0xfffffffffffe0;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_RDI) + (uVar3 >> 2 & unaff_RDI);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_R12) * 0x101010101010101 >> 0x38)) * 4 ^ uVar2;
  _DAT_183366880 = _DAT_183366750 ^ uVar2 ^ 0x99;
  _DAT_1833668b8 = (_DAT_1833668b8 ^ uVar2) + 0x99 ^ 0xb225c676536b057f;
  _DAT_1833666e8 = (_DAT_1833666e8 * 0x540cae1f2e7afecf ^ _DAT_1833668b8) + uVar2;
  _DAT_183366760 = _DAT_1833666e8 ^ _DAT_1833668b8;
  _DAT_183366628 = _DAT_1833667e8 ^ 0x99;
  _DAT_1833668f0 = 0x99;
  _DAT_183366618 = func_0x00018d79c0b0(_DAT_183366778 ^ 0xffe0ff7c22ffe197);
  _DAT_183366858 = _DAT_183366858 ^ _DAT_183366618 ^ 0x6af4ca8e69192e5f;
  _DAT_183366640 = (_DAT_183366640 * 0x3716b0d5b1cef689 ^ _DAT_183366858) + _DAT_183366618;
  _DAT_1833667a0 = _DAT_183366640 ^ _DAT_183366858;
  _DAT_183366660 = 0;
  _DAT_183366850 = _DAT_183366618;
  _DAT_183366758 = func_0x00018d79c0b0(_DAT_183366678 + 0xffe10084aa001dffU ^ 0x79);
  uVar2 = _DAT_183366758 >> 1 | _DAT_183366758;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_RDI) + (uVar2 >> 2 & unaff_RDI);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183366758;
  _DAT_183366708 = _DAT_183366708 ^ uVar2 ^ 0x7520c72572d8db39;
  _DAT_183366608 = (_DAT_183366608 * 0x6a48f901b23c90ff ^ _DAT_183366708) + uVar2;
  _DAT_1833668b8 = _DAT_183366608 ^ _DAT_183366708;
  _DAT_183366888 = 0;
  _DAT_1833665b8 = func_0x00018d79c0b0(_DAT_183366680 ^ 0xffe300841d0021ce);
  _DAT_1833667a0 = _DAT_1833667a0 ^ _DAT_1833665b8 & 0x7ffffffffffffff ^ 0xe3f164f7d6c6581f;
  _DAT_1833668c0 =
       (_DAT_1833668c0 * 0x5f481286b2718fdd ^ _DAT_1833667a0) + (_DAT_1833665b8 & 0x7ffffffffffffff)
  ;
  _DAT_1833665c0 = _DAT_1833668c0 ^ _DAT_1833667a0;
  _DAT_1833665f8 = 0;
  bVar1 = *(byte *)(unaff_RBP + 0x90);
  uVar4 = (ulonglong)bVar1;
  auVar5._8_8_ = unaff_XMM8_Qb;
  auVar5._0_8_ = uVar4 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ unaff_XMM9,unaff_XMM10);
  uVar3 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar3 + _DAT_183366550;
  if (auVar6._4_4_ < 0) {
    uVar2 = _DAT_183366660 ^ uVar3;
  }
  uVar2 = func_0x00018d79c0b0(SUB161(auVar5 ^ unaff_XMM9,5) ^ uVar2);
  _DAT_183366878 = uVar4 ^ (ulonglong)bVar1 * 0x30 ^ uVar2;
  _DAT_183366840 = uVar4 | 0x30;
  _DAT_1833665e0 = (_DAT_1833665e0 ^ _DAT_183366878) + _DAT_183366840 ^ 0xe7da60055dcc1934;
  _DAT_183366878 = (uVar2 * 0x131f3e7072e6301d ^ _DAT_1833665e0) + _DAT_183366878;
  _DAT_183366760 = _DAT_183366878 ^ _DAT_1833665e0;
  *(char *)(unaff_RBP + -0x51 + unaff_R15) = (char)_DAT_183366840;
  switch(unaff_EBX < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d789577 (image 18d789577) =====

void FUN_18d789577(void)

{
  return;
}



// ===== continuation @ rva d789572 (image 18d789572) =====

undefined8 thunk_FUN_18d774c5d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva d777e10 (image 18d777e10) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d777e10(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_EDI;
  
  *(uint *)(unaff_RBP + 0x30) = unaff_EDI;
  uVar1 = (~_DAT_183366560 + 199) *
          ((_DAT_1833665f8 ^ 0x842223f3) + (ulonglong)((uint)_DAT_1833665f8 & 0x842223f3) * 2);
  uVar1 = (uVar1 | _DAT_183366800) + (uVar1 & _DAT_183366800);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366670 = func_0x00018d79c0b0((uVar1 | 0x84222335) + (ulonglong)((uint)uVar1 & 0x84222335))
  ;
  _DAT_1833666f0 =
       (_DAT_1833666f0 ^ _DAT_183366670 & 0xfffffffffff00000) + 0xd6 ^ 0xf414322cde74efc8;
  _DAT_183366628 =
       (_DAT_183366628 * -0x1bf14ff0823057f9 ^ _DAT_1833666f0) +
       (_DAT_183366670 & 0xfffffffffff00000);
  _DAT_1833666d8 = _DAT_183366628 ^ _DAT_1833666f0;
  _DAT_183366578 = 0xd6;
  uVar1 = (~_DAT_183366660 + 0x49) *
          ((_DAT_1833667a8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833667a8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1833668f0) + (uVar1 & _DAT_1833668f0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366820 = func_0x00018d79c0b0((uVar1 | 0x8422236d) + (ulonglong)((uint)uVar1 & 0x8422236d))
  ;
  uVar1 = _DAT_183366820 * -0x6841f53c1c0507f9 & 0xffffffffffff0000;
  uVar2 = uVar1 - (_DAT_183366820 * -0x6841f53c1c0507f9 >> 1 & 0x5555555555550000);
  uVar2 = (uVar2 & 0x3333333333330000) + (uVar2 >> 2 & 0x3333333333330000);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0000) * 0x101010101010101 >> 0x38) << 6 | uVar1;
  _DAT_183366548 = (_DAT_183366548 ^ uVar1) - 0x48 ^ 0x162d8988b269aac8;
  _DAT_183366670 = (_DAT_183366670 * -0x75b19ea4d1b240bb ^ _DAT_183366548) + uVar1;
  _DAT_183366528 = _DAT_183366670 ^ _DAT_183366548;
  _DAT_183366668 = 0xb8;
  uVar1 = (~_DAT_183366648 + 0x49) *
          ((_DAT_183366618 ^ 0x84222315) + (ulonglong)((uint)_DAT_183366618 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_1833665a0) + (uVar1 & _DAT_1833665a0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366780 = func_0x00018d79c0b0((uVar1 | 0x8422235d) + (ulonglong)((uint)uVar1 & 0x8422235d))
  ;
  uVar1 = _DAT_183366780 & 0x7fffffffffffff80;
  _DAT_183366530 = _DAT_183366570 ^ uVar1 ^ 0x78;
  _DAT_1833666a0 = (_DAT_1833666a0 ^ uVar1) + 0x78 ^ 0xf68bffdd58c036a4;
  _DAT_183366600 = (_DAT_183366600 * -0x6d8add9cf2e48e8f ^ _DAT_1833666a0) + uVar1;
  _DAT_1833668a8 = _DAT_183366600 ^ _DAT_1833666a0;
  _DAT_1833666c0 = 0x78;
  uVar1 = (~_DAT_1833666b8 + 0xb9) *
          ((_DAT_1833666a8 ^ 0x8422235d) + (ulonglong)((uint)_DAT_1833666a8 & 0x8422235d) * 2);
  uVar1 = (uVar1 | _DAT_183366660) + (uVar1 & _DAT_183366660);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366678 = func_0x00018d79c0b0((uVar1 | 0x842223e5) + (ulonglong)((uint)uVar1 & 0x842223e5))
  ;
  uVar1 = _DAT_183366678 ^ 0x5640;
  _DAT_183366598 = _DAT_183366750 ^ uVar1 ^ 0x130;
  _DAT_183366700 = (_DAT_183366700 ^ uVar1) + 0x130 ^ 0x2f1faa110695f8b1;
  _DAT_1833665c8 = (_DAT_1833665c8 * -0x12be611e36160d51 ^ _DAT_183366700) + uVar1;
  _DAT_183366828 = _DAT_1833665c8 ^ _DAT_183366700;
  _DAT_183366898 = 0x30;
  uVar1 = (_DAT_1833667e8 ^ 0x84222325) + _DAT_183366588 + 0x84222325;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1833667e8 ^ 0x84222325;
  uVar2 = ((_DAT_183366588 + _DAT_1833667e8) * 0x2000 | _DAT_183366588 + _DAT_1833667e8 >> 0x33) ^
          _DAT_183366588;
  _DAT_183366708 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1833667e8 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183366588 + 0x84222325));
  _DAT_183366800 = _DAT_183366800 ^ _DAT_183366708 ^ 0x41d2c169569ae1c4;
  _DAT_183366600 = (_DAT_183366600 * 0x5f3c3ade34340a53 ^ _DAT_183366800) + _DAT_183366708;
  _DAT_183366720 = _DAT_183366600 ^ _DAT_183366800;
  _DAT_183366688 = 0;
  _DAT_183366888 = func_0x00018d79c0b0(_DAT_183366760 ^ 0xffe10083f4ffe15a);
  uVar1 = _DAT_183366888 ^ 0x30;
  _DAT_1833666c0 = _DAT_1833666b8 ^ uVar1 ^ 0x30;
  _DAT_1833665b8 = (_DAT_1833665b8 ^ uVar1) + 0x30 ^ 0x587fac97175e5f12;
  _DAT_183366508 = (_DAT_183366508 * -0x74633c22298523e1 ^ _DAT_1833665b8) + uVar1;
  _DAT_1833666d0 = _DAT_183366508 ^ _DAT_1833665b8;
  _DAT_183366628 = 0x30;
  _DAT_183366578 = func_0x00018d79c0b0(_DAT_183366530 + 0xffdd007bf2ffe1ff ^ 0xcb);
  uVar1 = _DAT_183366578 & 0x7fffffffffffffff;
  _DAT_1833665b0 = _DAT_183366800 ^ uVar1 ^ 0x30;
  _DAT_183366820 = (_DAT_183366820 ^ uVar1) + 0x30 ^ 0x8380912b709f86f9;
  _DAT_183366718 = (_DAT_183366718 * 0x326cd4909707c071 ^ _DAT_183366820) + uVar1;
  _DAT_183366700 = _DAT_183366718 ^ _DAT_183366820;
  _DAT_1833665e0 = 0x30;
  uVar1 = (~_DAT_183366868 + 0x41) *
          ((_DAT_183366720 ^ 0x84222325) + (ulonglong)((uint)_DAT_183366720 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1833668a8) + (uVar1 & _DAT_1833668a8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366708 = func_0x00018d79c0b0((uVar1 | 0x84222365) + (ulonglong)((uint)uVar1 & 0x84222365))
  ;
  _DAT_183366818 =
       (_DAT_183366818 ^ _DAT_183366708 * 0x3f35157d784d3921) - 0x40 ^ 0x7625162db237e774;
  _DAT_1833667b8 =
       (_DAT_1833667b8 * 0x74be6ee1a0eaf891 ^ _DAT_183366818) + _DAT_183366708 * 0x3f35157d784d3921;
  _DAT_183366520 = _DAT_1833667b8 ^ _DAT_183366818;
  _DAT_183366628 = 0xc0;
  _DAT_183366788 = func_0x00018d79c0b0(_DAT_183366570 ^ 0x1d00848cffdde2);
  uVar1 = _DAT_183366788 - (_DAT_183366788 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183366788;
  _DAT_183366558 = _DAT_183366670 ^ uVar1 ^ 0x130;
  _DAT_183366838 = (_DAT_183366838 ^ uVar1) + 0x130 ^ 0xb007e10b2f76f138;
  _DAT_183366548 = (_DAT_183366548 * 0x54e8c0fa6659f8cf ^ _DAT_183366838) + uVar1;
  _DAT_183366628 = _DAT_183366548 ^ _DAT_183366838;
  _DAT_183366818 = 0x30;
  _DAT_1833666b8 = func_0x00018d79c0b0(0xffdeff8466ffde63);
  uVar1 = ((_DAT_1833666b8 & 0xffffffff) * (ulonglong)_DAT_18228b180 +
           (_DAT_1833666b8 >> 0x20) * (_DAT_18228b170 & 0xffffffff) << 0x20) +
          (_DAT_1833666b8 & 0xffffffff) * (_DAT_18228b170 & 0xffffffff) & 0x7fffffffffffffff;
  _DAT_183366820 = _DAT_1833666f8 ^ uVar1 ^ 0x13e;
  _DAT_183366790 = (_DAT_183366790 ^ uVar1) + 0x13e ^ 0xd9a9d281c242b7cd;
  _DAT_1833665c8 = (_DAT_1833665c8 * 0x3163075a3af8358d ^ _DAT_183366790) + uVar1;
  _DAT_1833666f0 = _DAT_1833665c8 ^ _DAT_183366790;
  _DAT_1833665f0 = 0x3e;
  _DAT_183366790 = func_0x00018d79c0b0(_DAT_1833668a0 ^ 0xffdf007c1d002188);
  _DAT_1833665d8 = _DAT_1833665d8 ^ _DAT_183366790 ^ 0x196665eae0f8a1d7;
  _DAT_1833668f8 = (_DAT_1833668f8 * 0x2b5b6f9d3efb8e2b ^ _DAT_1833665d8) + _DAT_183366790;
  _DAT_183366748 = _DAT_1833668f8 ^ _DAT_1833665d8;
  _DAT_183366758 = 0;
  _DAT_1833667a0 = _DAT_183366790;
  _DAT_183366768 = func_0x00018d79c0b0(_DAT_183366548 + 0x1cff8414ffe1ff ^ 0xf8);
  uVar1 = _DAT_183366768 & 0x7fffffffffffffff;
  _DAT_183366728 = _DAT_183366638 ^ uVar1 ^ 0x30;
  _DAT_183366540 = (_DAT_183366540 ^ uVar1) + 0x30 ^ 0xa67f3c1083f213c3;
  _DAT_183366840 = (_DAT_183366840 * -0x6139f8f823b83e55 ^ _DAT_183366540) + uVar1;
  _DAT_183366698 = _DAT_183366840 ^ _DAT_183366540;
  _DAT_183366860 = 0x30;
  _DAT_183366640 = func_0x00018d79c0b0(_DAT_183366670 ^ 0xffe3007c03ffdd4a);
  _DAT_183366628 =
       (_DAT_183366628 ^ _DAT_183366640 * -0x753a9a1b85c94199) + 0x29 ^ 0xf3dfad3b3b5114df;
  _DAT_183366690 =
       (_DAT_183366690 * 0x18bb90482059880b ^ _DAT_183366628) + _DAT_183366640 * -0x753a9a1b85c94199
  ;
  _DAT_183366878 = _DAT_183366690 ^ _DAT_183366628;
  _DAT_183366578 = 0x29;
  uVar1 = (_DAT_183366658 ^ 0x84222315) + _DAT_183366600 + 0x84222315;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183366658 ^ 0x84222315;
  uVar2 = ((_DAT_183366600 + _DAT_183366658) * 0x2000 | _DAT_183366600 + _DAT_183366658 >> 0x33) ^
          _DAT_183366600;
  _DAT_183366680 =
       func_0x00018d79c0b0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_183366658 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183366600 + 0x84222315));
  uVar1 = _DAT_183366680 ^ 0x30;
  _DAT_183366708 = _DAT_1833668e8 ^ uVar1 ^ 0x30;
  _DAT_183366770 = (_DAT_183366770 ^ uVar1) + 0x30 ^ 0xce8721b594905768;
  _DAT_183366520 = (_DAT_183366520 * -0x405aaf821275d65d ^ _DAT_183366770) + uVar1;
  _DAT_183366850 = _DAT_183366520 ^ _DAT_183366770;
  _DAT_183366758 = 0x30;
  uVar1 = (~_DAT_183366510 + 0xd7) *
          ((_DAT_183366740 ^ 0x842223f3) + (ulonglong)((uint)_DAT_183366740 & 0x842223f3) * 2);
  uVar1 = (uVar1 | _DAT_1833666a8) + (uVar1 & _DAT_1833666a8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1833668d8 = func_0x00018d79c0b0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = _DAT_1833668d8 << 0x2d | _DAT_1833668d8 >> 0x13;
  _DAT_183366628 = _DAT_183366628 ^ uVar1 ^ 0xc361b4c70988b6f4;
  _DAT_183366710 = (_DAT_183366710 * -0x5db62f5630c815 ^ _DAT_183366628) + uVar1;
  _DAT_1833665c0 = _DAT_183366710 ^ _DAT_183366628;
  _DAT_1833665c8 = 0;
  uVar1 = ((_DAT_1833665d8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1833665d8 & 0x84222315) * 2) *
          -_DAT_183366690;
  uVar1 = (uVar1 | _DAT_183366500) + (uVar1 & _DAT_183366500);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183366710 = func_0x00018d79c0b0((uVar1 | 0x84222315) + (ulonglong)((uint)uVar1 & 0x84222315))
  ;
  uVar1 = _DAT_183366710 ^ 0x30;
  _DAT_183366580 = _DAT_183366568 ^ uVar1 ^ 0x30;
  _DAT_183366708 = (_DAT_183366708 ^ uVar1) + 0x30 ^ 0x1a10b06db3cd9803;
  _DAT_183366620 = (_DAT_183366620 * -0x71794d12a753731b ^ _DAT_183366708) + uVar1;
  _DAT_1833668e0 = _DAT_183366620 ^ _DAT_183366708;
  _DAT_1833666e0 = _DAT_183366578 ^ 0x30;
  _DAT_1833667b8 = 0x30;
  *(byte *)(in_RAX + -1) = (char)unaff_EDI + (char)((ulonglong)unaff_EDI / 10) * -10 | 0x30;
  switch(unaff_EDI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d778c71 (image 18d778c71) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d778cd0 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d778c71(void)

{
  longlong unaff_RBP;
  longlong lVar1;
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  FUN_18414b520(unaff_RBP + -0x30);
  lVar1 = unaff_RBP + -0x30;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar1 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x50) + 0x70))
            (*(longlong **)(unaff_RBP + 0x50),*(undefined8 *)(unaff_RBP + 0x10),lVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva d7896d2 (image 18d7896d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7896d2(longlong param_1)

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



// ===== continuation @ rva d789396 (image 18d789396) =====

undefined8 thunk_FUN_18d774c5d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x70))();
  return 0;
}



// ===== continuation @ rva d79e983 (image 18d79e983) =====

void FUN_18d79e983(void)

{
  return;
}



// ===== continuation @ rva d79e7df (image 18d79e7df) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d79e7df(void)

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



// ===== continuation @ rva d7a36f3 (image 18d7a36f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7a36f3(int param_1)

{
  int iVar1;
  longlong *in_stack_00000030;
  int iStack0000000000000040;
  
  iStack0000000000000040 = param_1;
  (**(code **)(*in_stack_00000030 + 0x6f8))(in_stack_00000030);
  iStack0000000000000040 = iStack0000000000000040 << 0x18;
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030);
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d79fea9 (image 18d79fea9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d79fea9(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x120))(in_stack_00000030);
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



// ===== continuation @ rva d79fe6a (image 18d79fe6a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d79fe6a(void)

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



// ===== continuation @ rva d79f833 (image 18d79f833) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d79f833(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *in_stack_00000030;
  int iStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  iStack0000000000000050 = 6;
  uStack0000000000000060 = 8;
  uStack0000000000000058 =
       CONCAT44((uint)((ulonglong)unaff_RSI >> 0x28),(int)(char)((ulonglong)unaff_RSI >> 8));
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7a37a7 (image 18d7a37a7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a37a7(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong unaff_R13;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *in_stack_00000030;
  uint in_stack_00000040;
  int in_stack_00000050;
  
  lVar4 = (**(code **)(*in_stack_00000030 + 0x6f0))();
  cVar1 = *(char *)(lVar4 + in_stack_00000050);
  (**(code **)(*in_stack_00000030 + 0x6f8))(in_stack_00000030);
  uVar6 = (_DAT_183367aa0 ^ _DAT_182290fa0) + _DAT_183367840 + 0x4c3d9467;
  uVar7 = (_DAT_183367840 ^ _UNK_182290fa8) + _DAT_183367aa0 + 0xa3cc6fd7;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183367aa0 ^ _DAT_182290fa0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183367840 ^ _UNK_182290fa8;
  uVar5 = (int)cVar1 << 0x10;
  _DAT_183367830 =
       func_0x00018d7a7660((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183367aa0 + 0xa3cc6fd7) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183367840 + 0x4c3d9467));
  uVar6 = _DAT_183367830 << 0x2a | (_DAT_183367830 & 0x7ffffffffff) >> 0x16;
  _DAT_1833678b0 = (_DAT_1833678b0 ^ uVar6) + 0xebdfffd7 ^ 0xc006c7848696ee85;
  _DAT_183367c60 = (_DAT_183367c60 * -0x1ad67ec732065a23 ^ _DAT_1833678b0) + uVar6;
  _DAT_183367850 = _DAT_183367c60 ^ _DAT_1833678b0;
  _DAT_183367aa8 = 0xebdfffd7;
  uVar6 = (_DAT_1833677a0 ^ _DAT_182290fb0) + _DAT_183367b80 + 0xbb4d49b7;
  uVar7 = (_DAT_183367b80 ^ _UNK_182290fb8) + _DAT_1833677a0 + 0xb2755c02;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833677a0 ^ _DAT_182290fb0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183367b80 ^ _UNK_182290fb8;
  _DAT_183367ab8 =
       func_0x00018d7a7660((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833677a0 + 0xb2755c02) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183367b80 + 0xbb4d49b7));
  _DAT_1833679b8 =
       (_DAT_1833679b8 ^ _DAT_183367ab8 * -0x6dff6171c0cdd35f) + 0x8d1a3690 ^ 0x4c5b5a40def20bf5;
  _DAT_183367c58 =
       (_DAT_183367c58 * -0x25f2274527f74791 ^ _DAT_1833679b8) +
       _DAT_183367ab8 * -0x6dff6171c0cdd35f;
  _DAT_183367c18 = _DAT_183367c58 ^ _DAT_1833679b8;
  _DAT_1833678b8 = 0x8d1a3690;
  _DAT_1833679e0 = func_0x00018d7a7660(_DAT_183367c88 ^ 0xffde000920ffaad1);
  _DAT_183367808 =
       (_DAT_183367808 ^ _DAT_1833679e0 & 0x7fffffffffffffff) - 0xb375c504 ^ 0xef302e432b1f25b4;
  _DAT_183367780 =
       (_DAT_183367780 * -0x330327b72c1e7bf5 ^ _DAT_183367808) +
       (_DAT_1833679e0 & 0x7fffffffffffffff);
  _DAT_183367900 = _DAT_183367780 ^ _DAT_183367808;
  _DAT_183367cd8 = 0x4c8a3afc;
  _DAT_1833678f8 = func_0x00018d7a7660(_DAT_183367818 ^ 0xffddffd2e100975e);
  uVar6 = (_DAT_1833678f8 & 0x7fffffffffff) >> 1 | _DAT_1833678f8 & 0x7fffffffffff;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & unaff_R13);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1833678f8 & 0x7fffffffffff;
  _DAT_1833677b0 = _DAT_1833677c0 ^ uVar6 ^ 0xb474c504;
  _DAT_183367920 = (_DAT_183367920 ^ uVar6) + 0xb474c504 ^ 0xff8add6f17b2a720;
  _DAT_183367948 = (_DAT_183367948 * 0x4d4a3d41e3a57db3 ^ _DAT_183367920) + uVar6;
  _DAT_1833677e8 = _DAT_183367948 ^ _DAT_183367920;
  _DAT_183367998 = 0xb474c504;
  uVar6 = (~_DAT_183367860 + 0x4c8a3afd) *
          ((_DAT_183367bb8 ^ 0x3056e621) + (ulonglong)((uint)_DAT_183367bb8 & 0x3056e621) * 2);
  uVar6 = (uVar6 | _DAT_183367910) + (uVar6 & _DAT_183367910);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833678a8 = func_0x00018d7a7660((uVar6 | 0x7cdcdcdd) + (ulonglong)((uint)uVar6 & 0x7cdcdcdd))
  ;
  uVar6 = _DAT_1833678a8 >> 1 | _DAT_1833678a8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & unaff_R13);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1833678a8;
  _DAT_183367a28 = _DAT_183367b20 ^ uVar6 ^ 0x100ff0000;
  _DAT_183367708 = (_DAT_183367708 ^ uVar6) + 0x100ff0000 ^ 0x3a8310bae30dec6b;
  _DAT_1833677c8 = (_DAT_1833677c8 * -0x6241254144b7f1f9 ^ _DAT_183367708) + uVar6;
  _DAT_183367848 = _DAT_1833677c8 ^ _DAT_183367708;
  _DAT_183367888 = 0xff0000;
  uVar6 = (_DAT_183367c48 ^ _DAT_182290fc0) + _DAT_183367b70 + 0x84222325;
  uVar7 = (_DAT_183367b70 ^ _UNK_182290fc8) + _DAT_183367c48 + 0x80593220;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183367c48 ^ _DAT_182290fc0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183367b70 ^ _UNK_182290fc8;
  _DAT_183367830 =
       func_0x00018d7a7660((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183367c48 + 0x80593220) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183367b70 + 0x84222325));
  uVar6 = (_DAT_183367830 ^ 0x80593220) * 0x599db16d23fdb813;
  _DAT_183367b78 = (_DAT_183367b78 ^ uVar6) - 0x80593220 ^ 0x32ab1899050a1218;
  _DAT_183367780 = (_DAT_183367780 * -0x75274e1b5946abab ^ _DAT_183367b78) + uVar6;
  _DAT_1833679b0 = _DAT_183367780 ^ _DAT_183367b78;
  _DAT_183367990 = 0x7fa6cde0;
  _DAT_183367ae0 = func_0x00018d7a7660(_DAT_1833677e0 ^ 0xffef0003faff8312);
  uVar6 = _DAT_183367ae0 ^ 0x7fd8d8ede00000;
  _DAT_183367820 = _DAT_1833677e0 ^ uVar6 ^ 0x81583220;
  _DAT_183367a88 = (_DAT_183367a88 ^ uVar6) + 0x81583220 ^ 0xdabcbda5521eab9f;
  _DAT_1833679b8 = (_DAT_1833679b8 * -0x7aa8349be0e83b1f ^ _DAT_183367a88) + uVar6;
  _DAT_183367c10 = _DAT_1833679b8 ^ _DAT_183367a88;
  _DAT_1833677d0 = 0x81583220;
  _DAT_183367998 = func_0x00018d7a7660(_DAT_183367800 ^ 0xffdc006a1aff4bdb);
  _DAT_183367a68 = _DAT_183367bb0 ^ _DAT_183367998 ^ 0x100ff0000;
  _DAT_183367c60 = (_DAT_183367c60 ^ _DAT_183367998) + 0x100ff0000 ^ 0x3b9d99913f6cf9bb;
  _DAT_183367750 = (_DAT_183367750 * -0x5cd0437d3c9fcd53 ^ _DAT_183367c60) + _DAT_183367998;
  _DAT_1833677c8 = _DAT_183367750 ^ _DAT_183367c60;
  _DAT_1833679f0 = 0xff0000;
  uVar6 = (~_DAT_183367cd0 + 0xcab911e5) *
          ((_DAT_183367908 ^ 0x84222325) + (ulonglong)((uint)_DAT_183367908 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_1833678e8) + (uVar6 & _DAT_1833678e8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183367890 = func_0x00018d7a7660((uVar6 | 0x4e9b32c1) + (ulonglong)((uint)uVar6 & 0x4e9b32c1))
  ;
  _DAT_183367ba0 = (_DAT_183367ba0 ^ _DAT_183367890) - 0xcab911e4 ^ 0x8aa65d6af295dc5d;
  _DAT_183367bc8 = (_DAT_183367bc8 * -0x4db9e25d45e4223b ^ _DAT_183367ba0) + _DAT_183367890;
  _DAT_183367910 = _DAT_183367bc8 ^ _DAT_183367ba0;
  _DAT_183367930 = 0x3546ee1c;
  _DAT_183367b60 = func_0x00018d7a7660(_DAT_183367730 + 0xff16009e5e00dcff ^ 0xc3);
  uVar6 = (ulonglong)(~(uint)_DAT_183367b60 & 0xebdfffd7);
  _DAT_1833677d8 = (_DAT_1833677d8 ^ uVar6) + 0x891a3690 ^ 0x42367838f95107c8;
  _DAT_183367a70 = (_DAT_183367a70 * 0x7b1453c404655261 ^ _DAT_1833677d8) + uVar6;
  _DAT_183367c30 = _DAT_183367a70 ^ _DAT_1833677d8;
  _DAT_183367ca8 = 0x891a3690;
  uVar6 = (~_DAT_1833677e8 + 0x12346d21) *
          ((_DAT_183367798 ^ 0xe2e7ea62) + (ulonglong)((uint)_DAT_183367798 & 0xe2e7ea62) * 2);
  uVar6 = (uVar6 | _DAT_1833679f8) + (uVar6 & _DAT_1833679f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183367910 = func_0x00018d7a7660((uVar6 | 0xf0d38742) + (ulonglong)((uint)uVar6 & 0xf0d38742))
  ;
  uVar6 = _DAT_183367910 * -0x1b005a429921667 ^ 0x12346d20;
  _DAT_183367bf8 = _DAT_183367cb8 ^ uVar6 ^ 0x78fa3667;
  _DAT_183367a08 = (_DAT_183367a08 ^ uVar6) + 0x78fa3667 ^ 0x6481245ff329a558;
  _DAT_1833678c8 = (_DAT_1833678c8 * 0x5bdf4e9cca9a692f ^ _DAT_183367a08) + uVar6;
  _DAT_183367918 = _DAT_1833678c8 ^ _DAT_183367a08;
  _DAT_183367710 = 0x78fa3667;
  _DAT_183367ca0 = func_0x00018d7a7660(_DAT_183367870 + 0xffe30083e2ffddffU ^ 0x27);
  uVar6 = _DAT_183367ca0 >> 1 | _DAT_183367ca0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183367ca0;
  _DAT_1833677a8 = (uVar6 << 0x19 | uVar6 >> 0x27) ^ 0x78fa3667;
  _DAT_183367cd8 = _DAT_183367cd8 ^ _DAT_1833677a8 ^ 0x1093cbc9c54bc9bc;
  _DAT_1833677e0 = (_DAT_1833677e0 * -0x73f77954c8cd18b ^ _DAT_183367cd8) + _DAT_1833677a8;
  _DAT_1833678c0 = _DAT_1833677e0 ^ _DAT_183367cd8;
  _DAT_183367860 = _DAT_183367ab0;
  _DAT_1833677c8 = 0;
  uVar6 = (_DAT_183367ad0 ^ 0x84dd2325) + _DAT_1833677a8 + 0x84dd2325;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183367ad0 ^ 0x84dd2325;
  uVar7 = ((_DAT_1833677a8 + _DAT_183367ad0) * 0x2000 | _DAT_1833677a8 + _DAT_183367ad0 >> 0x33) ^
          _DAT_1833677a8;
  _DAT_183367cb8 =
       func_0x00018d7a7660((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183367ad0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833677a8 + 0x84dd2325));
  uVar6 = _DAT_183367cb8 & 0x7fffffffffffffff;
  _DAT_183367780 = _DAT_183367748 ^ uVar6 ^ 0xff0000;
  _DAT_183367a08 = (_DAT_183367a08 ^ uVar6) + 0xff0000 ^ 0x43b705615605cce;
  _DAT_183367af8 = (_DAT_183367af8 * -0x4092600909956d39 ^ _DAT_183367a08) + uVar6;
  _DAT_183367798 = _DAT_183367af8 ^ _DAT_183367a08;
  _DAT_183367ae8 = 0xff0000;
  _DAT_183367bd8 = func_0x00018d7a7660(_DAT_183367708 + 0x1f00900b0001ff ^ 0x57);
  _DAT_183367b90 = (_DAT_183367b90 ^ _DAT_183367bd8) + 0x14200028 ^ 0x4b4f839dc5c0a9d8;
  _DAT_183367980 = (_DAT_183367980 * 0x1a3737bfa2562fd1 ^ _DAT_183367b90) + _DAT_183367bd8;
  _DAT_183367b80 = _DAT_183367980 ^ _DAT_183367b90;
  _DAT_183367cf8 = 0x14200028;
  uVar6 = (_DAT_1833677a8 ^ _DAT_182290fd0) + _DAT_183367988 + 0x6ffddcf2;
  uVar7 = (_DAT_183367988 ^ _UNK_182290fd8) + _DAT_1833677a8 + 0x14200028;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833677a8 ^ _DAT_182290fd0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183367988 ^ _UNK_182290fd8;
  _DAT_183367710 =
       func_0x00018d7a7660((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833677a8 + 0x14200028) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183367988 + 0x6ffddcf2));
  _DAT_183367b10 = _DAT_183367b10 ^ _DAT_183367710 ^ 0x5b7db7126c70ea76;
  _DAT_183367c40 = (_DAT_183367c40 * -0x7ec1770c01e8b7af ^ _DAT_183367b10) + _DAT_183367710;
  _DAT_183367a78 = _DAT_183367c40 ^ _DAT_183367b10;
  _DAT_1833677c8 = 0;
  uVar6 = ((_DAT_183367780 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_183367780 & 0x84dd2325) * 2) *
          -_DAT_183367c50;
  uVar6 = (uVar6 | _DAT_183367bc0) + (uVar6 & _DAT_183367bc0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183367aa8 = func_0x00018d7a7660((uVar6 | 0x84dd2325) + (ulonglong)((uint)uVar6 & 0x84dd2325))
  ;
  uVar6 = (ulonglong)(~(uint)_DAT_183367aa8 & 0xff0000) ^ 0xff0000;
  _DAT_183367940 = _DAT_183367ae0 ^ uVar6 ^ 0xff0000;
  _DAT_1833677b0 = (_DAT_1833677b0 ^ uVar6) + 0xff0000 ^ 0x3eae5f8ae7483bde;
  _DAT_183367838 = (_DAT_183367838 * 0x89e4aa7e3b22ce5 ^ _DAT_1833677b0) + uVar6;
  _DAT_1833678e8 = _DAT_183367838 ^ _DAT_1833677b0;
  _DAT_183367918 = 0xff0000;
  uVar6 = (_DAT_183367c18 ^ _DAT_182290fe0) + _DAT_183367990 + 0x4c3d9467;
  uVar7 = (_DAT_183367990 ^ _UNK_182290fe8) + _DAT_183367c18 + 0xc81fb742;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183367c18 ^ _DAT_182290fe0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183367990 ^ _UNK_182290fe8;
  uVar2 = func_0x00018d7a7660((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183367c18 + 0xc81fb742) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183367990 + 0x4c3d9467));
  uVar6 = (ulonglong)(~uVar2 * 2 & 0xc81fb742);
  _DAT_183367b78 = _DAT_183367b78 ^ uVar6 ^ 0x6359dbdb761619c4;
  _DAT_183367ab8 = (_DAT_183367ab8 * 0x1b55f5b3b0b7da17 ^ _DAT_183367b78) + uVar6;
  _DAT_183367cf8 = _DAT_183367ab8 ^ _DAT_183367b78;
  _DAT_183367c10 = 0;
  _DAT_183367c98 = func_0x00018d7a7660(_DAT_183367c98 + 0x1eff83dd00baff ^ 0xcf);
  _DAT_183367b48 = _DAT_183367730 ^ _DAT_183367c98 ^ 0xff0000;
  _DAT_1833678d0 = (_DAT_1833678d0 ^ _DAT_183367c98) + 0xff0000 ^ 0xcc34c3f0d0883f0c;
  _DAT_183367708 = (_DAT_183367708 * -0x7f69dbde1ef94bcb ^ _DAT_1833678d0) + _DAT_183367c98;
  _DAT_183367c30 = _DAT_183367708 ^ _DAT_1833678d0;
  _DAT_183367a20 = 0xff0000;
  uVar6 = (ulonglong)uVar5 ^ 0x84222325;
  uVar6 = (~_DAT_183367820 + 0xff0001) *
          ((uVar6 ^ _DAT_183367c08) + (ulonglong)((uint)_DAT_183367c08 & (uint)uVar6) * 2);
  uVar6 = (uVar6 | _DAT_1833679d0) + (uVar6 & _DAT_1833679d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar7 = (ulonglong)uVar5 ^ 0x84dd2325;
  _DAT_1833679c0 = func_0x00018d7a7660((uVar7 | uVar6) + (ulonglong)((uint)uVar7 & (uint)uVar6));
  uVar6 = _DAT_1833679c0 << 0x29 | (_DAT_1833679c0 & 0x7fffffffffffffff) >> 0x17;
  _DAT_183367c70 = (ulonglong)(uVar5 & 0xff0000);
  _DAT_183367890 = (_DAT_183367890 ^ uVar6) + _DAT_183367c70 ^ 0x6a16176862301906;
  _DAT_183367c90 = (_DAT_183367c90 * -0x1c7cbba17db73e2f ^ _DAT_183367890) + uVar6;
  _DAT_183367888 = _DAT_183367c90 ^ _DAT_183367890;
  uVar6 = (ulonglong)in_stack_00000040 ^ 0x84222325;
  uVar7 = uVar6 ^ _DAT_183367940;
  lVar4 = uVar6 + _DAT_183367bd0;
  uVar6 = uVar7 + lVar4;
  uVar8 = (_DAT_183367c70 ^ _DAT_183367bd0) + _DAT_183367940 + _DAT_183367c70;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar7;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183367c70 ^ _DAT_183367bd0;
  _DAT_1833678b8 =
       func_0x00018d7a7660((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183367940 + _DAT_183367c70) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar4);
  uVar6 = (~_DAT_1833678b8 & (ulonglong)in_stack_00000040) << 0x20;
  _DAT_183367b68 = (ulonglong)(in_stack_00000040 | uVar5 & 0xff0000);
  _DAT_183367cf0 = (_DAT_183367cf0 ^ uVar6) + _DAT_183367b68 ^ 0xb5fbd154b5f96820;
  _DAT_183367be0 = (_DAT_183367be0 * -0xe69f8651aefc4f ^ _DAT_183367cf0) + uVar6;
  _DAT_183367ca8 = _DAT_183367be0 ^ _DAT_183367cf0;
  iVar3 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030);
  switch(iVar3 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7a3752 (image 18d7a3752) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a3752(void)

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



// ===== continuation @ rva d7a74b2 (image 18d7a74b2) =====

void FUN_18d7a74b2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva d7a11bf (image 18d7a11bf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a11bf(void)

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



// ===== continuation @ rva d7a1089 (image 18d7a1089) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7a1089(void)

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



// ===== continuation @ rva d7a062d (image 18d7a062d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a062d(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined4 uStack0000000000000092;
  undefined2 uStack0000000000000096;
  undefined4 in_stack_000000a8;
  
  (**(code **)(*in_stack_00000030 + 0x570))();
  in_stack_000000a8 = 0x6306867f;
  rdtsc();
  uStack0000000000000092 = 0x450044;
  uStack0000000000000096 = 0x53;
  (**(code **)(*in_stack_00000030 + 0x518))(in_stack_00000030,&stack0x00000092,3);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xbc9,0x2f);
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



// ===== continuation @ rva d7a0502 (image 18d7a0502) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a0502(void)

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



// ===== continuation @ rva d7a7792 (image 18d7a7792) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7a7792(void)

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



// ===== continuation @ rva d7a773e (image 18d7a773e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a773e(void)

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



// ===== continuation @ rva d7a8605 (image 18d7a8605) =====

void FUN_18d7a8605(void)

{
  return;
}



// ===== continuation @ rva d7a7777 (image 18d7a7777) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a7777(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182291478)();
  return;
}



// ===== continuation @ rva d7a847a (image 18d7a847a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a847a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_182291408)();
  return;
}



// ===== continuation @ rva d7a7b40 (image 18d7a7b40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a7b40(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_182291448)();
  return;
}



// ===== continuation @ rva d7a8168 (image 18d7a8168) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a8168(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_1822914b8)();
  return;
}



// ===== continuation @ rva d7a85d1 (image 18d7a85d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a85d1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182291328)();
  return;
}



// ===== continuation @ rva d7a7e77 (image 18d7a7e77) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7a7e77(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7a7f58 (image 18d7a7f58) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7a7f58(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7a8388 (image 18d7a8388) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7a8388(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7aa726 (image 18d7aa726) =====

void FUN_18d7aa726(void)

{
  return;
}



// ===== continuation @ rva d7a878c (image 18d7a878c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a878c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182292478)();
  return;
}



// ===== continuation @ rva d7ab15e (image 18d7ab15e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7ab15e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182291e08)();
  return;
}



// ===== continuation @ rva d7a9ca1 (image 18d7a9ca1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7a9ca1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7ab2ca (image 18d7ab2ca) =====

void FUN_18d7ab2ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva d7aa413 (image 18d7aa413) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7aa413(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva d7a92d7 (image 18d7a92d7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a92d7(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1822917e8)();
  return;
}



// ===== continuation @ rva d7a8bbe (image 18d7a8bbe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a8bbe(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_1822920e8)();
  return;
}



// ===== continuation @ rva d7aa6ae (image 18d7aa6ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7aa6ae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182292358)();
  return;
}



// ===== continuation @ rva d7aaec3 (image 18d7aaec3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7aaec3(void)

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



// ===== continuation @ rva d7aaa30 (image 18d7aaa30) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d7aaa30(void)

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



// ===== continuation @ rva d7a971f (image 18d7a971f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d7a971f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182291f98)();
  return;
}



