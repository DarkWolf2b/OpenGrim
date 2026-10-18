// ===== continuation @ rva fe6636b (image 18fe6636b) =====

void FUN_18fe6636b(void)

{
  return;
}



// ===== continuation @ rva fe539cb (image 18fe539cb) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018fe53a21 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18fe539cb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva fe57e86 (image 18fe57e86) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe57e86(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar4 = (ulonglong)(uint)(int)cVar1;
  uVar5 = (~_DAT_18343cde8 + 0xce6e462c) *
          ((_DAT_18343cd20 ^ 0x6bc68a6) + (ulonglong)((uint)_DAT_18343cd20 & 0x6bc68a6) * 2);
  uVar5 = (uVar5 | _DAT_18343d488) + (uVar5 & _DAT_18343d488);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18343ce60 = func_0x00018fe66550((uVar5 | 0xc8d22e8d) + (ulonglong)((uint)uVar5 & 0xc8d22e8d))
  ;
  _DAT_18343cec0 =
       (_DAT_18343cec0 ^ _DAT_18343ce60 ^ 0x6953a4959718ca82) + 0xcefe4fab ^ 0x67b9a5cbe9d00664;
  _DAT_18343d0b8 =
       (_DAT_18343d0b8 * -0x283b915f82a225cb ^ _DAT_18343cec0) +
       (_DAT_18343ce60 ^ 0x6953a4959718ca82);
  _DAT_18343cdf0 = _DAT_18343d0b8 ^ _DAT_18343cec0;
  _DAT_18343cd40 = 0xcefe4fab;
  _DAT_18343cf28 = func_0x00018fe66550(_DAT_18343d478 + 0xff63fffc9bff7cffU ^ 0xb);
  uVar5 = _DAT_18343cf28 - (_DAT_18343cf28 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_18343cf28) & 0x7fffffffffffffff;
  _DAT_18343cfc0 = (_DAT_18343cfc0 ^ uVar5) + 0x80a5cfd9 ^ 0x42ef70ae12388b0f;
  _DAT_18343d118 = (_DAT_18343d118 * 0x34d0079f8881b99f ^ _DAT_18343cfc0) + uVar5;
  _DAT_18343d1b0 = _DAT_18343d118 ^ _DAT_18343cfc0;
  _DAT_18343cff8 = 0x80a5cfd9;
  uVar5 = (~_DAT_18343d320 + 0x57302c97) *
          ((_DAT_18343d430 ^ 0x84222325) + (ulonglong)((uint)_DAT_18343d430 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_18343d088) + (uVar5 & _DAT_18343d088);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18343d260 = func_0x00018fe66550((uVar5 | 0xd3120fb3) + (ulonglong)((uint)uVar5 & 0xd3120fb3))
  ;
  _DAT_18343cdd0 = _DAT_18343cdd0 - 0x57302c96 ^ 0xd3eccfd3ab55cc5;
  _DAT_18343d328 = _DAT_18343cfe0 * -0x4d7c36d49719bbd;
  _DAT_18343cfe0 = _DAT_18343d328 ^ _DAT_18343cdd0;
  _DAT_18343d000 = 0xa8cfd36a;
  _DAT_18343d4a0 = func_0x00018fe66550(_DAT_18343cdb0 + 0xfff300d0b4000dffU ^ 0xda);
  uVar5 = _DAT_18343d4a0 ^ 0xff;
  _DAT_18343d158 = _DAT_18343d088 ^ uVar5 ^ 0x57302d95;
  _DAT_18343d210 = (_DAT_18343d210 ^ uVar5) + 0x57302d95 ^ 0x7e78ddf8bad68017;
  _DAT_18343d288 = (_DAT_18343d288 * -0x6f2ae044f724c8f9 ^ _DAT_18343d210) + uVar5;
  _DAT_18343d330 = _DAT_18343d288 ^ _DAT_18343d210;
  _DAT_18343d3d8 = 0x57302d95;
  uVar5 = (_DAT_18343d0e8 ^ _DAT_182b3db80) + _DAT_18343d1a8 + 0xd3120eb0;
  uVar6 = (_DAT_18343d1a8 ^ _UNK_182b3db88) + _DAT_18343d0e8 + 0xa8cfd36a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18343d0e8 ^ _DAT_182b3db80;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343d1a8 ^ _UNK_182b3db88;
  _DAT_18343cff0 =
       func_0x00018fe66550((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343d0e8 + 0xa8cfd36a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18343d1a8 + 0xd3120eb0));
  uVar5 = _DAT_18343cff0 ^ 0x57302d95;
  _DAT_18343d2f0 = _DAT_18343ce30 ^ uVar5 ^ 0x1000000ff;
  _DAT_18343cef0 = (_DAT_18343cef0 ^ uVar5) + 0x1000000ff ^ 0x7caf6f048308ecfa;
  _DAT_18343cdd8 = (_DAT_18343cdd8 * 0x76fe1556df7cc3a3 ^ _DAT_18343cef0) + uVar5;
  _DAT_18343cef0 = _DAT_18343cdd8 ^ _DAT_18343cef0;
  _DAT_18343d208 = _DAT_18343d160 ^ 0x1000000ff;
  _DAT_18343d198 = 0xff;
  uVar5 = (~_DAT_18343d068 + 0xca6a539d) *
          ((_DAT_18343cdd8 ^ 0x84222325) + (ulonglong)((uint)_DAT_18343cdd8 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_18343d178) + (uVar5 & _DAT_18343d178);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18343cf50 = func_0x00018fe66550((uVar5 | 0x4e4870b9) + (ulonglong)((uint)uVar5 & 0x4e4870b9))
  ;
  uVar5 = _DAT_18343cf50 - (_DAT_18343cf50 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18343cf50;
  _DAT_18343d3d8 = (_DAT_18343d3d8 ^ uVar5) - 0xca6a539c ^ 0xa059c47d6c1aefac;
  _DAT_18343d208 = (_DAT_18343d208 * 0x5af24b68984c56eb ^ _DAT_18343d3d8) + uVar5;
  _DAT_18343d258 = _DAT_18343d208 ^ _DAT_18343d3d8;
  _DAT_18343d238 = 0x3595ac64;
  uVar5 = (~_DAT_18343cf98 + 0xca6a539d) *
          ((_DAT_18343d040 ^ 0x842223da) + (ulonglong)((uint)_DAT_18343d040 & 0x842223da) * 2);
  uVar5 = (uVar5 | _DAT_18343d3c8) + (uVar5 & _DAT_18343d3c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018fe66550((uVar5 | 0x4e487046) + (ulonglong)((uint)uVar5 & 0x4e487046));
  _DAT_18343cfd0 = _DAT_18343d298 ^ uVar5 ^ 0xca6a549b;
  _DAT_18343d1b0 = (_DAT_18343d1b0 ^ uVar5) + 0xca6a549b ^ 0x94b025e3c5ecfa01;
  _DAT_18343d1c8 = (_DAT_18343d1c8 * 0x5bb43b5a0f56b61b ^ _DAT_18343d1b0) + uVar5;
  _DAT_18343cf68 = _DAT_18343d1c8 ^ _DAT_18343d1b0;
  _DAT_18343d070 = 0xca6a549b;
  uVar5 = (_DAT_18343d1e8 ^ _DAT_182b3db90) + _DAT_18343cff0 + 0x84222325;
  uVar6 = (_DAT_18343cff0 ^ _UNK_182b3db98) + _DAT_18343d1e8 + 0x823f1742;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18343d1e8 ^ _DAT_182b3db90;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343cff0 ^ _UNK_182b3db98;
  _DAT_18343cd00 =
       func_0x00018fe66550((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343d1e8 + 0x823f1742) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18343cff0 + 0x84222325));
  _DAT_18343cea8 = (_DAT_18343cea8 ^ _DAT_18343cd00 ^ 0x823f1742) - 0x823f1742 ^ 0xadba3a6d0db5c232;
  _DAT_18343cd88 =
       (_DAT_18343cd88 * -0x3edd3e8b491926a3 ^ _DAT_18343cea8) + (_DAT_18343cd00 ^ 0x823f1742);
  _DAT_18343cfa0 = _DAT_18343cd88 ^ _DAT_18343cea8;
  _DAT_18343cd10 = 0x7dc0e8be;
  uVar5 = (~_DAT_18343d420 + 0x823f1743) *
          ((_DAT_18343cee8 ^ 0x842223da) + (ulonglong)((uint)_DAT_18343cee8 & 0x842223da) * 2);
  uVar5 = (uVar5 | _DAT_18343d4e0) + (uVar5 & _DAT_18343d4e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18343ce28 = func_0x00018fe66550((uVar5 | 0x61d3498) + (ulonglong)((uint)uVar5 & 0x61d3498));
  uVar5 = _DAT_18343ce28 ^ 0x823f1742;
  _DAT_18343d2f0 = _DAT_18343d398 ^ uVar5 ^ 0x823f1841;
  _DAT_18343cd08 = (_DAT_18343cd08 ^ uVar5) + 0x823f1841 ^ 0xca18a786f376572;
  _DAT_18343d118 = (_DAT_18343d118 * -0x788a8400b91a515 ^ _DAT_18343cd08) + uVar5;
  _DAT_18343d3a8 = _DAT_18343d118 ^ _DAT_18343cd08;
  _DAT_18343d078 = 0x823f1841;
  _DAT_18343d468 = func_0x00018fe66550(_DAT_18343d358 ^ 0x62ffca52ffd808);
  _DAT_18343d418 = (_DAT_18343d418 ^ _DAT_18343d468 ^ 0x80a5cfd9) + 0x80a44f89 ^ 0x8eca3403f9d2d124;
  _DAT_18343cf00 =
       (_DAT_18343cf00 * -0x1237e757fc3ffd3 ^ _DAT_18343d418) + (_DAT_18343d468 ^ 0x80a5cfd9);
  _DAT_18343d498 = _DAT_18343cf00 ^ _DAT_18343d418;
  _DAT_18343ce20 = _DAT_18343d2f8 ^ 0x80a44f89;
  _DAT_18343d4d8 = 0x80a44f89;
  _DAT_18343d120 = func_0x00018fe66550(_DAT_18343d438 ^ 0xffebff3742ffd0e6);
  uVar5 = _DAT_18343d120 ^ 0x4f5b9f72;
  _DAT_18343d3b8 = _DAT_18343cd70 ^ uVar5 ^ 0x4fa41f84;
  _DAT_18343cd80 = (_DAT_18343cd80 ^ uVar5) + 0x4fa41f84 ^ 0x8120bb815e8d57a5;
  _DAT_18343cea0 = (_DAT_18343cea0 * -0x78c559db5fd7a231 ^ _DAT_18343cd80) + uVar5;
  _DAT_18343d0a8 = _DAT_18343cea0 ^ _DAT_18343cd80;
  _DAT_18343cfc0 = 0x4fa41f84;
  uVar5 = (~_DAT_18343d308 + 0x4fa41f85) *
          ((_DAT_18343cf38 ^ 0xcb863ca1) + (ulonglong)((uint)_DAT_18343cf38 & 0xcb863ca1) * 2);
  uVar5 = (uVar5 | _DAT_18343d198) + (uVar5 & _DAT_18343d198);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18343d378 = func_0x00018fe66550((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_18343cfb8 = (_DAT_18343d378 ^ 0x18c6b4abdd013c10) >> 3 | _DAT_18343d378 << 0x3d;
  _DAT_18343ce18 = _DAT_18343ce18 ^ _DAT_18343cfb8 ^ 0xb9b72e9f1fc56ca0;
  _DAT_18343cff0 = (_DAT_18343cff0 * 0x3433263b9ed46edf ^ _DAT_18343ce18) + _DAT_18343cfb8;
  _DAT_18343d090 = _DAT_18343cff0 ^ _DAT_18343ce18;
  _DAT_18343cd20 = 0;
  uVar5 = (_DAT_18343d320 ^ _DAT_182b3dba0) + _DAT_18343d4c0 + 0x4adc6c8e;
  uVar6 = (_DAT_18343d4c0 ^ _UNK_182b3dba8) + _DAT_18343d320 + 0x3101b054;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18343d320 ^ _DAT_182b3dba0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18343d4c0 ^ _UNK_182b3dba8;
  _DAT_18343d018 =
       func_0x00018fe66550((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343d320 + 0x3101b054) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18343d4c0 + 0x4adc6c8e));
  uVar5 = _DAT_18343d018 - (_DAT_18343d018 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_18343d018;
  _DAT_18343cf20 = _DAT_18343cf20 ^ uVar5 ^ 0xd56e78271634af7e;
  _DAT_18343d010 = (_DAT_18343d010 * 0x145717125340c4b7 ^ _DAT_18343cf20) + uVar5;
  _DAT_18343d340 = _DAT_18343d010 ^ _DAT_18343cf20;
  _DAT_18343cd30 = _DAT_18343cf90;
  _DAT_18343d1b0 = 0;
  uVar5 = (_DAT_18343d128 ^ 0x842223da) + _DAT_18343cd78 + 0x842223da;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18343d128 ^ 0x842223da;
  uVar6 = ((_DAT_18343cd78 + _DAT_18343d128) * 0x2000 | _DAT_18343cd78 + _DAT_18343d128 >> 0x33) ^
          _DAT_18343cd78;
  _DAT_18343cf40 =
       func_0x00018fe66550((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_18343d128 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18343cd78 + 0x842223da));
  uVar5 = (ulonglong)((uint)_DAT_18343cf40 ^ 0xff) << 0x24 | _DAT_18343cf40 >> 0x1c;
  _DAT_18343ce38 = _DAT_18343d408 ^ uVar5 ^ 0xff;
  _DAT_18343d090 = (_DAT_18343d090 ^ uVar5) + 0xff ^ 0xa47221ab2eb0de65;
  _DAT_18343d348 = (_DAT_18343d348 * -0x11c7687e745f7131 ^ _DAT_18343d090) + uVar5;
  _DAT_18343d0b8 = _DAT_18343d348 ^ _DAT_18343d090;
  _DAT_18343cfb0 = 0xff;
  uVar5 = (~_DAT_18343ce38 + 0x829e4b84) *
          ((_DAT_18343d060 ^ 0x6bc68a6) + (ulonglong)((uint)_DAT_18343d060 & 0x6bc68a6) * 2);
  uVar5 = (uVar5 | _DAT_18343d4d0) + (uVar5 & _DAT_18343d4d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18343d1d0 = func_0x00018fe66550((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  uVar6 = _DAT_18343d1d0 ^ 0x829e4b83;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar6;
  _DAT_18343d2f0 = _DAT_18343d2f0 ^ uVar6 ^ 0xe8cce85324497256;
  _DAT_18343d4a8 = (_DAT_18343d4a8 * 0x48ee008afafb45e1 ^ _DAT_18343d2f0) + uVar6;
  _DAT_18343d200 = _DAT_18343d4a8 ^ _DAT_18343d2f0;
  _DAT_18343d280 = 0;
  uVar5 = ((_DAT_18343d3d8 ^ 0x842223da) + (ulonglong)((uint)_DAT_18343d3d8 & 0x842223da) * 2) *
          -_DAT_18343d258;
  uVar5 = (uVar5 | _DAT_18343d250) + (uVar5 & _DAT_18343d250);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18343d178 = func_0x00018fe66550((uVar5 | 0x842223da) + (ulonglong)((uint)uVar5 & 0x842223da))
  ;
  _DAT_18343cee0 = _DAT_18343d398 ^ _DAT_18343d178 ^ 0xff;
  _DAT_18343d100 = (_DAT_18343d100 ^ _DAT_18343d178) + 0xff ^ 0x6fea5d644c5b7aa1;
  _DAT_18343cde0 = (_DAT_18343cde0 * -0x57497e6137c3a4c9 ^ _DAT_18343d100) + _DAT_18343d178;
  _DAT_18343d4d0 = _DAT_18343cde0 ^ _DAT_18343d100;
  _DAT_18343d4a0 = 0xff;
  uVar5 = (~_DAT_18343cfb0 + 0x100) *
          ((uVar4 ^ 0x84222325 ^ _DAT_18343d190) +
          (ulonglong)((uint)_DAT_18343d190 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | _DAT_18343cf90) + (uVar5 & _DAT_18343cf90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18343d4d8 =
       func_0x00018fe66550((uVar4 ^ 0x842223da | uVar5) +
                           (ulonglong)((uint)(uVar4 ^ 0x842223da) & (uint)uVar5));
  uVar5 = uVar4 ^ (_DAT_18343d4d8 & 0xffffffff) * (ulonglong)_DAT_182b3dbb0 +
                  ((ulonglong)_DAT_182b3dbc0 * (_DAT_18343d4d8 & 0xffffffff) +
                   (_DAT_18343d4d8 >> 0x20) * (ulonglong)_DAT_182b3dbb0 << 0x20);
  _DAT_18343d218 = uVar4 & 0xff;
  _DAT_18343d390 = (_DAT_18343d390 ^ uVar5) + _DAT_18343d218 ^ 0xf5da3a6764a33285;
  _DAT_18343d0e0 = (_DAT_18343d0e0 * -0x19ae8041e8ac1a53 ^ _DAT_18343d390) + uVar5;
  _DAT_18343cf98 = _DAT_18343d0e0 ^ _DAT_18343d390;
  uVar6 = _DAT_18343d218 << 0x28;
  uVar4 = in_stack_00000050 ^ 0x84222325 ^ _DAT_18343ce68;
  lVar3 = (in_stack_00000050 ^ 0x84222325) + _DAT_18343d048;
  uVar5 = uVar4 + lVar3;
  uVar7 = (uVar6 ^ _DAT_18343d048) + _DAT_18343ce68 + uVar6;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6 ^ _DAT_18343d048;
  _DAT_18343cd50 =
       func_0x00018fe66550((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18343ce68 + uVar6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar4 = ~(_DAT_18343cd50 & 0x7fffffffffff) & in_stack_00000050;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar4;
  _DAT_18343d440 = uVar6 | in_stack_00000050;
  _DAT_18343d3e0 = (_DAT_18343d3e0 ^ uVar4) + _DAT_18343d440 ^ 0x975a5a2920f48868;
  _DAT_18343d020 = (_DAT_18343d020 * -0x6e1740c14304e659 ^ _DAT_18343d3e0) + uVar4;
  _DAT_18343d3f0 = _DAT_18343d020 ^ _DAT_18343d3e0;
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



// ===== continuation @ rva fe65bf5 (image 18fe65bf5) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe65bf5(void)

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



// ===== continuation @ rva fe61ebe (image 18fe61ebe) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe61ebe(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  uint uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000058;
  int in_stack_00000068;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000068);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar5 = (int)cVar1 << 0x10;
  _DAT_18343d490 = func_0x00018fe66550(_DAT_18343d428 ^ 0x2dffdff1fff0ef);
  uVar4 = (_DAT_18343d490 & 0x7fffffff) << 0x20 | _DAT_18343d490 >> 0x20;
  _DAT_18343d2b8 = (_DAT_18343d2b8 ^ uVar4) - 0xa513fdd7 ^ 0x85a5a8139fc4b254;
  _DAT_18343d230 = (_DAT_18343d230 * 0x3051299180226a67 ^ _DAT_18343d2b8) + uVar4;
  _DAT_18343cf98 = _DAT_18343d230 ^ _DAT_18343d2b8;
  _DAT_18343d478 = 0x5aec0229;
  uVar4 = (_DAT_18343d320 ^ _DAT_182b3ddd0) + _DAT_18343cf00 + 0x84dd2325;
  uVar7 = (_DAT_18343cf00 ^ _UNK_182b3ddd8) + _DAT_18343d320 + 0xa513fdd7;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343d320 ^ _DAT_182b3ddd0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18343cf00 ^ _UNK_182b3ddd8;
  _DAT_18343d230 =
       func_0x00018fe66550((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18343d320 + 0xa513fdd7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343cf00 + 0x84dd2325));
  uVar4 = (_DAT_18343d230 ^ 0xa46ee97c3afdd7) << 0x1d | (_DAT_18343d230 ^ 0xa46ee97c3afdd7) >> 0x23;
  _DAT_18343cfc8 = _DAT_18343cd98 ^ uVar4 ^ 0xa612fdd7;
  _DAT_18343cdf0 = (_DAT_18343cdf0 ^ uVar4) + 0xa612fdd7 ^ 0xec6b37ddc1b330d2;
  _DAT_18343d4c8 = (_DAT_18343d4c8 * -0x7379c5c2ad44659 ^ _DAT_18343cdf0) + uVar4;
  _DAT_18343cf00 = _DAT_18343d4c8 ^ _DAT_18343cdf0;
  _DAT_18343d468 = 0xa612fdd7;
  _DAT_18343d3c8 = func_0x00018fe66550(_DAT_18343d4f0 ^ 0xbbffc7d700d327);
  uVar4 = (_DAT_18343d3c8 & 0x7fffffffffffffff) -
          ((_DAT_18343d3c8 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          _DAT_18343d3c8 & 0x7fffffffffffffff;
  _DAT_18343d228 = _DAT_18343ce80 ^ uVar4 ^ 0x100ff0000;
  _DAT_18343cd88 = (_DAT_18343cd88 ^ uVar4) + 0x100ff0000 ^ 0x38f0e4a57bc60947;
  _DAT_18343d1f0 = (_DAT_18343d1f0 * -0x586249674cf84f03 ^ _DAT_18343cd88) + uVar4;
  _DAT_18343d380 = _DAT_18343d1f0 ^ _DAT_18343cd88;
  _DAT_18343cd18 = 0xff0000;
  uVar4 = (_DAT_18343cd38 ^ _DAT_182b3dde0) + _DAT_18343d1f8 + 0x84dd2325;
  uVar7 = (_DAT_18343d1f8 ^ _UNK_182b3dde8) + _DAT_18343cd38 + 0x1ebb1858;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343cd38 ^ _DAT_182b3dde0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18343d1f8 ^ _UNK_182b3dde8;
  _DAT_18343d2d0 =
       func_0x00018fe66550((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18343cd38 + 0x1ebb1858) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343d1f8 + 0x84dd2325));
  uVar4 = (_DAT_18343d2d0 << 0x37 | _DAT_18343d2d0 >> 9) * 0x183758037348c5b3;
  _DAT_18343d2a8 = _DAT_18343d0d0 ^ uVar4 ^ 0x1fba1858;
  _DAT_18343cd50 = (_DAT_18343cd50 ^ uVar4) + 0x1fba1858 ^ 0xa67da960a7d2e076;
  _DAT_18343cf78 = (_DAT_18343cf78 * -0x6fcc7a1a431de83b ^ _DAT_18343cd50) + uVar4;
  _DAT_18343d0f8 = _DAT_18343cf78 ^ _DAT_18343cd50;
  _DAT_18343d2e8 = 0x1fba1858;
  _DAT_18343d120 = func_0x00018fe66550(0xffb3fffad345c318);
  _DAT_18343cd80 = _DAT_18343d388 ^ _DAT_18343d490 ^ 0x100ff0000;
  _DAT_18343d168 = (_DAT_18343d168 ^ _DAT_18343d490) + 0x100ff0000 ^ 0xe28e1d8fcbafb42d;
  _DAT_18343d318 = (_DAT_18343d318 * 0x6a02aeaee176ba89 ^ _DAT_18343d168) + _DAT_18343d490;
  _DAT_18343d1e8 = _DAT_18343d318 ^ _DAT_18343d168;
  _DAT_18343d330 = 0xff0000;
  _DAT_18343cde0 = func_0x00018fe66550(_DAT_18343cf58 ^ 0x9fff968afff12d);
  uVar4 = (ulonglong)(~(uint)_DAT_18343cde0 & 0xbeabdec6) ^ 0xbeabdec6;
  _DAT_18343cd68 = _DAT_18343d048 ^ uVar4 ^ 0x190ab3c62;
  _DAT_18343d040 = (ulonglong)(&UNK_190ab3c62 + (_DAT_18343d040 ^ uVar4)) ^ 0xe9b005db27ab3fa9;
  _DAT_18343d0a8 = (_DAT_18343d0a8 * -0x26cd34c14f438b5f ^ _DAT_18343d040) + uVar4;
  _DAT_18343d0e0 = _DAT_18343d0a8 ^ _DAT_18343d040;
  _DAT_18343d3f8 = 0x90ab3c62;
  uVar4 = (_DAT_18343d218 ^ _DAT_182b3ddf0) + _DAT_18343d438 + 0x3a89fde3;
  uVar7 = (_DAT_18343d438 ^ _UNK_182b3ddf8) + _DAT_18343d218 + 0xd1ff5d9c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343d218 ^ _DAT_182b3ddf0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18343d438 ^ _UNK_182b3ddf8;
  _DAT_18343d460 =
       func_0x00018fe66550((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18343d218 + 0xd1ff5d9c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343d438 + 0x3a89fde3));
  uVar4 = (ulonglong)((uint)_DAT_18343d460 & 0xbeabdec6);
  _DAT_18343d478 = (_DAT_18343d478 ^ uVar4) + 0x6f54835a ^ 0x7a06bf2ef28f2eee;
  _DAT_18343cde0 = (_DAT_18343cde0 * 0xc92443102472707 ^ _DAT_18343d478) + uVar4;
  _DAT_18343cee8 = _DAT_18343cde0 ^ _DAT_18343d478;
  _DAT_18343d300 = 0x6f54835a;
  _DAT_18343d048 = func_0x00018fe66550(_DAT_18343cf98 + 0xffa000a900ffcdff ^ 0x9e);
  _DAT_18343ce70 = (_DAT_18343ce70 ^ _DAT_18343d048) + 0x90ab5c84 ^ 0xe57fcf986a450fdc;
  _DAT_18343d2d0 = (_DAT_18343d2d0 * 0x17f7c765559c1a7f ^ _DAT_18343ce70) + _DAT_18343d048;
  _DAT_18343cfd8 = _DAT_18343d2d0 ^ _DAT_18343ce70;
  _DAT_18343d4f0 = 0x90ab5c84;
  uVar4 = (_DAT_18343d048 ^ _DAT_182b3de00) + _DAT_18343ce90 + 0xeb76a07f;
  uVar7 = (_DAT_18343ce90 ^ _UNK_182b3de08) + _DAT_18343d048 + 0x2156b908;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343d048 ^ _DAT_182b3de00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18343ce90 ^ _UNK_182b3de08;
  _DAT_18343cd28 =
       func_0x00018fe66550((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18343d048 + 0x2156b908) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343ce90 + 0xeb76a07f));
  uVar4 = (_DAT_18343cd28 ^ 0x247cc24d0) & 0x7ffffffff ^ 0x6f54835a;
  _DAT_18343d028 = _DAT_18343d0a8 ^ uVar4 ^ 0x90ab3c62;
  _DAT_18343cf40 = (_DAT_18343cf40 ^ uVar4) + 0x90ab3c62 ^ 0xa9fd3bb36b102932;
  _DAT_18343cd40 = (_DAT_18343cd40 * -0x69cb9eb2b65e8e0d ^ _DAT_18343cf40) + uVar4;
  _DAT_18343ce80 = _DAT_18343cd40 ^ _DAT_18343cf40;
  _DAT_18343d398 = 0x90ab3c62;
  uVar4 = (_DAT_18343cf68 ^ _DAT_182b3de10) + _DAT_18343d478 + 0x14891f47;
  uVar7 = (_DAT_18343d478 ^ _UNK_182b3de18) + _DAT_18343cf68 + 0x90ab3c62;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18343cf68 ^ _DAT_182b3de10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18343d478 ^ _UNK_182b3de18;
  _DAT_18343d2f0 =
       func_0x00018fe66550((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18343cf68 + 0x90ab3c62) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18343d478 + 0x14891f47));
  _DAT_18343d370 = _DAT_18343d2f0 ^ 0x90ab3c62;
  _DAT_18343d300 = _DAT_18343d300 ^ _DAT_18343d370 ^ 0x78c28f739d06aad;
  _DAT_18343d368 = (_DAT_18343d368 * 0x3f391f015664d68d ^ _DAT_18343d300) + _DAT_18343d370;
  _DAT_18343d330 = _DAT_18343d368 ^ _DAT_18343d300;
  _DAT_18343d1d0 = 0;
  _DAT_18343d038 = func_0x00018fe66550(_DAT_18343cfc8 + 0xffe1007c1d0044ff ^ 0xc9);
  uVar4 = (ulonglong)((uint)_DAT_18343d038 & 0xff0000);
  _DAT_18343cfd0 = _DAT_18343d348 ^ uVar4 ^ 0xff0000;
  _DAT_18343d140 = (_DAT_18343d140 ^ uVar4) + 0xff0000 ^ 0x5ff3562759df256f;
  _DAT_18343ce90 = (_DAT_18343ce90 * 0x7758b594a6a3cab ^ _DAT_18343d140) + uVar4;
  _DAT_18343d168 = _DAT_18343ce90 ^ _DAT_18343d140;
  _DAT_18343cf20 = 0xff0000;
  _DAT_18343d178 = func_0x00018fe66550(_DAT_18343d4e8 + 0xbc005b55ffc4ffU ^ 0xa1);
  uVar4 = ((_DAT_18343d178 ^ 0x30a84cb3faf42016) << 0xf |
          (_DAT_18343d178 ^ 0x30a84cb3faf42016) >> 0x31) ^ 0xbeabdec6;
  _DAT_18343d0b8 = _DAT_18343d0b8 ^ uVar4 ^ 0x3f18ed9845541b6a;
  _DAT_18343d1e0 = (_DAT_18343d1e0 * 0x7d687ad2d7b30537 ^ _DAT_18343d0b8) + uVar4;
  _DAT_18343cf88 = _DAT_18343d1e0 ^ _DAT_18343d0b8;
  _DAT_18343d200 = 0;
  uVar4 = ((_DAT_18343d348 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_18343d348 & 0x84dd2325) * 2) *
          -_DAT_18343d0f0;
  uVar4 = (uVar4 | _DAT_18343ce68) + (uVar4 & _DAT_18343ce68);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_18343d448 = func_0x00018fe66550((uVar4 | 0x84dd2325) + (ulonglong)((uint)uVar4 & 0x84dd2325))
  ;
  _DAT_18343ce60 = _DAT_18343d280 ^ _DAT_18343d448 ^ 0xff0000;
  _DAT_18343d260 = (_DAT_18343d260 ^ _DAT_18343d448) + 0xff0000 ^ 0x3bf81eac994b98f9;
  _DAT_18343d290 = (_DAT_18343d290 * -0x37e70f19a0ed560b ^ _DAT_18343d260) + _DAT_18343d448;
  _DAT_18343cfc8 = _DAT_18343d290 ^ _DAT_18343d260;
  _DAT_18343d450 = 0xff0000;
  _DAT_18343ce48 = func_0x00018fe66550(_DAT_18343ce38 + 0xffdeff841cffe1ffU ^ 0x90);
  uVar4 = (ulonglong)((uint)_DAT_18343ce48 & 0x8ea992c6 | 0x92c6);
  _DAT_18343d3a8 = _DAT_18343d3a8 ^ uVar4 ^ 0x7dcb6949c4fca635;
  _DAT_18343cd48 = (_DAT_18343cd48 * 0xc8279e130824489 ^ _DAT_18343d3a8) + uVar4;
  _DAT_18343d080 = _DAT_18343cd48 ^ _DAT_18343d3a8;
  _DAT_18343ce60 = 0;
  _DAT_18343cef8 = func_0x00018fe66550(_DAT_18343d3f8 + 0x1f007c1b003affU ^ 0x6c);
  _DAT_18343cde8 = _DAT_18343d340 ^ _DAT_18343cef8 ^ 0xff0000;
  _DAT_18343d368 = (_DAT_18343d368 ^ _DAT_18343cef8) + 0xff0000 ^ 0x3351a93235b7f8a8;
  _DAT_18343ce08 = (_DAT_18343ce08 * 0x6e55b4e3f610b8d5 ^ _DAT_18343d368) + _DAT_18343cef8;
  _DAT_18343d040 = _DAT_18343ce08 ^ _DAT_18343d368;
  _DAT_18343d410 = 0xff0000;
  uVar4 = (ulonglong)uVar5 ^ 0x84222325;
  uVar4 = (~_DAT_18343d418 + 0xff0001) *
          ((uVar4 ^ _DAT_18343cfb8) + (ulonglong)((uint)_DAT_18343cfb8 & (uint)uVar4) * 2);
  uVar4 = (uVar4 | _DAT_18343d198) + (uVar4 & _DAT_18343d198);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar7 = (ulonglong)uVar5 ^ 0x84dd2325;
  _DAT_18343d4f0 = func_0x00018fe66550((uVar7 | uVar4) + (ulonglong)((uint)uVar7 & (uint)uVar4));
  uVar7 = (ulonglong)(uVar5 & 0xff0000);
  _DAT_18343d3d0 = (_DAT_18343d3d0 ^ _DAT_18343d4f0) + uVar7 ^ 0x26e49cd10cf44e51;
  _DAT_18343cf40 = (_DAT_18343cf40 * -0x494a54f7630d4eb5 ^ _DAT_18343d3d0) + _DAT_18343d4f0;
  _DAT_18343cda8 = _DAT_18343cf40 ^ _DAT_18343d3d0;
  uVar4 = in_stack_00000058 ^ 0x84222325 ^ _DAT_18343d168;
  lVar3 = (in_stack_00000058 ^ 0x84222325) + _DAT_18343d090;
  uVar6 = uVar4 + lVar3;
  uVar8 = (uVar7 ^ _DAT_18343d090) + _DAT_18343d168 + uVar7;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7 ^ _DAT_18343d090;
  _DAT_18343d130 = uVar7;
  _DAT_18343d0d0 =
       func_0x00018fe66550((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18343d168 + uVar7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar4 = _DAT_18343d0d0 << 0x11 | _DAT_18343d0d0 >> 0x2f;
  _DAT_18343d3b0 = in_stack_00000058 | uVar7;
  _DAT_18343cd40 = (_DAT_18343cd40 ^ uVar4) + _DAT_18343d3b0 ^ 0x347e5bdbeb329ec2;
  _DAT_18343cd50 = (_DAT_18343cd50 * 0x21ff24ba3ba8375f ^ _DAT_18343cd40) + uVar4;
  _DAT_18343d078 = _DAT_18343cd50 ^ _DAT_18343cd40;
  iVar2 = (**(code **)(*unaff_RSI + 0x558))(extraout_XMM0_Qa_00,in_stack_00000038);
  switch(iVar2 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe661ff (image 18fe661ff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe661ff(void)

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



// ===== continuation @ rva fe53fe0 (image 18fe53fe0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018fe53ff7 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18fe53fe0(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva fe5de82 (image 18fe5de82) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe5de82(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 4;
  uStack0000000000000078 = 0x18;
  uStack0000000000000070 =
       (ulonglong)
       CONCAT14((char)((ulonglong)unaff_R14 >> 0x38),(int)(char)((ulonglong)unaff_R14 >> 0x18));
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



// ===== continuation @ rva fe657f5 (image 18fe657f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe657f5(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000050;
  int iStack00000000000000e0;
  int iStack00000000000000e4;
  undefined8 uStack0000000000000108;
  
  uStack0000000000000108 = in_stack_00000050;
  (**(code **)(*unaff_RSI + 0x6a0))();
  switch(iStack00000000000000e0 < iStack00000000000000e4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe66320 (image 18fe66320) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe66320(void)

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



// ===== continuation @ rva fe53e4f (image 18fe53e4f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018fe53e6d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18fe53e4f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva fe53f0b (image 18fe53f0b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018fe53f61 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18fe53f0b(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000050;
  
  uStack0000000000000050 = 0xd;
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva fe3ef60 (image 18fe3ef60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3ef60(void)

{
  FUN_190dd72e0();
  (*_DAT_182b38188)();
  return;
}



// ===== continuation @ rva fe3eee2 (image 18fe3eee2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3eee2(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b386c8)();
  return;
}



// ===== continuation @ rva fe42fd3 (image 18fe42fd3) =====

void FUN_18fe42fd3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe41037 (image 18fe41037) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe41037(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe42ef1 (image 18fe42ef1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe42ef1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe42f82 (image 18fe42f82) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe42f82(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b388e8)();
  return;
}



// ===== continuation @ rva fe413ce (image 18fe413ce) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe413ce(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe42fa6 (image 18fe42fa6) =====

void FUN_18fe42fa6(void)

{
  return;
}



// ===== continuation @ rva fe3f4e8 (image 18fe3f4e8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe3f4e8(void)

{
  FUN_190ddfc90();
  (*_DAT_182b37f48)();
  return;
}



// ===== continuation @ rva fe40de4 (image 18fe40de4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe40de4(void)

{
  FUN_190dd9df0();
  (*_DAT_182b37668)();
  return;
}



// ===== continuation @ rva fe40d67 (image 18fe40d67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe40d67(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b372b8)();
  return;
}



// ===== continuation @ rva fe4145f (image 18fe4145f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4145f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b37c18)();
  return;
}



// ===== continuation @ rva fe4140d (image 18fe4140d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4140d(void)

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



// ===== continuation @ rva fe3ff90 (image 18fe3ff90) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe3ff90(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe43622 (image 18fe43622) =====

void FUN_18fe43622(void)

{
  return;
}



// ===== continuation @ rva fe4315b (image 18fe4315b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4315b(void)

{
  FUN_190ddce00();
  (*_DAT_182b38c78)();
  return;
}



// ===== continuation @ rva fe435a2 (image 18fe435a2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe435a2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b38c88)();
  return;
}



// ===== continuation @ rva fe435bd (image 18fe435bd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe435bd(void)

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



// ===== continuation @ rva fe43569 (image 18fe43569) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43569(void)

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



// ===== continuation @ rva fe437c9 (image 18fe437c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe437c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b38c48)();
  return;
}



// ===== continuation @ rva fe4369e (image 18fe4369e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4369e(void)

{
  FUN_190ddfc90();
  (*_DAT_182b38bf8)();
  return;
}



// ===== continuation @ rva fe43b3f (image 18fe43b3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43b3f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_182b38de8)();
  return;
}



// ===== continuation @ rva fe431ed (image 18fe431ed) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe431ed(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe439ff (image 18fe439ff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe439ff(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_182b38cc8)();
  return;
}



// ===== continuation @ rva fe43710 (image 18fe43710) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43710(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b38ce8)();
  return;
}



// ===== continuation @ rva fe43a76 (image 18fe43a76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43a76(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b38e18)();
  return;
}



// ===== continuation @ rva fe43752 (image 18fe43752) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43752(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_182b38b98)();
  return;
}



// ===== continuation @ rva fe4352f (image 18fe4352f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe4352f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe43cd6 (image 18fe43cd6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43cd6(void)

{
  FUN_190dd72e0();
  (*_DAT_182b38f28)();
  return;
}



// ===== continuation @ rva fe43c63 (image 18fe43c63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43c63(void)

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



// ===== continuation @ rva fe43dae (image 18fe43dae) =====

void FUN_18fe43dae(void)

{
  return;
}



// ===== continuation @ rva fe43c9c (image 18fe43c9c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43c9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b38f08)();
  return;
}



// ===== continuation @ rva fe43db6 (image 18fe43db6) =====

void FUN_18fe43db6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe43cc1 (image 18fe43cc1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe43cc1(void)

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



// ===== continuation @ rva fe43d76 (image 18fe43d76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43d76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b38f48)();
  return;
}



// ===== continuation @ rva fe43cfe (image 18fe43cfe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe43cfe(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe43d1f (image 18fe43d1f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43d1f(void)

{
  FUN_190dd9df0();
  (*_DAT_182b38f58)();
  return;
}



// ===== continuation @ rva fe43d9d (image 18fe43d9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43d9d(void)

{
  (*_DAT_182b38ef8)();
  return;
}



// ===== continuation @ rva fe43ed6 (image 18fe43ed6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43ed6(void)

{
  FUN_190dd72e0();
  (*_DAT_182b38fe8)();
  return;
}



// ===== continuation @ rva fe43e63 (image 18fe43e63) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43e63(void)

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



// ===== continuation @ rva fe43fb6 (image 18fe43fb6) =====

void FUN_18fe43fb6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe43fae (image 18fe43fae) =====

void FUN_18fe43fae(void)

{
  return;
}



// ===== continuation @ rva fe43f76 (image 18fe43f76) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43f76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b39018)();
  return;
}



// ===== continuation @ rva fe43efe (image 18fe43efe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe43efe(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe43f1f (image 18fe43f1f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43f1f(void)

{
  FUN_190dd9df0();
  (*_DAT_182b39048)();
  return;
}



// ===== continuation @ rva fe43f9d (image 18fe43f9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe43f9d(void)

{
  (*_DAT_182b38fc8)();
  return;
}



// ===== continuation @ rva fe43ec1 (image 18fe43ec1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe43ec1(void)

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



// ===== continuation @ rva fe440d6 (image 18fe440d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe440d6(void)

{
  FUN_190dd72e0();
  (*_DAT_182b39128)();
  return;
}



// ===== continuation @ rva fe44063 (image 18fe44063) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe44063(void)

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



// ===== continuation @ rva fe441b6 (image 18fe441b6) =====

void FUN_18fe441b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe440c1 (image 18fe440c1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe440c1(void)

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



// ===== continuation @ rva fe44152 (image 18fe44152) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe44152(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe4419d (image 18fe4419d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4419d(void)

{
  (*_DAT_182b39108)();
  return;
}



// ===== continuation @ rva fe441ae (image 18fe441ae) =====

void FUN_18fe441ae(void)

{
  return;
}



// ===== continuation @ rva fe44176 (image 18fe44176) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe44176(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b390c8)();
  return;
}



// ===== continuation @ rva fe4409c (image 18fe4409c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4409c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b390a8)();
  return;
}



// ===== continuation @ rva fe46713 (image 18fe46713) =====

void FUN_18fe46713(void)

{
  return;
}



// ===== continuation @ rva fe4656f (image 18fe4656f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4656f(void)

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



// ===== continuation @ rva fe46811 (image 18fe46811) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe46811(void)

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



// ===== continuation @ rva fe4940c (image 18fe4940c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18fe4b20e(void)

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



// ===== continuation @ rva fe477f0 (image 18fe477f0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe477f0(void)

{
  char cVar1;
  longlong *unaff_R14;
  undefined8 in_stack_00000030;
  
  FUN_190de3220();
  cVar1 = (**(code **)(*unaff_R14 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe4889c (image 18fe4889c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe4889c(void)

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



// ===== continuation @ rva fe4aa6c (image 18fe4aa6c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4aa6c(void)

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



// ===== continuation @ rva fe4a5d7 (image 18fe4a5d7) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18fe4b20e(void)

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



// ===== continuation @ rva fe4a7ee (image 18fe4a7ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18fe4b20e(void)

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



// ===== continuation @ rva fe4fc62 (image 18fe4fc62) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe4fc62(void)

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



// ===== continuation @ rva fe4fc0e (image 18fe4fc0e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe4fc0e(void)

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



// ===== continuation @ rva fe50ad5 (image 18fe50ad5) =====

void FUN_18fe50ad5(void)

{
  return;
}



// ===== continuation @ rva fe50449 (image 18fe50449) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe50449(void)

{
  FUN_190de3220();
  (*_DAT_182b3b2e8)();
  return;
}



// ===== continuation @ rva fe50aa1 (image 18fe50aa1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe50aa1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_182b3b388)();
  return;
}



// ===== continuation @ rva fe50926 (image 18fe50926) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe50926(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe5022c (image 18fe5022c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe5022c(void)

{
  FUN_190de3220();
  (*_DAT_182b3b348)();
  return;
}



// ===== continuation @ rva fe50ae4 (image 18fe50ae4) =====

void FUN_18fe50ae4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe502a6 (image 18fe502a6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe502a6(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe50086 (image 18fe50086) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe50086(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b3b588)();
  return;
}



// ===== continuation @ rva fe502c7 (image 18fe502c7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe502c7(void)

{
  FUN_190dd72e0();
  (*_DAT_182b3b4a8)();
  return;
}



// ===== continuation @ rva fe50283 (image 18fe50283) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe50283(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x418))();
  (*_DAT_182b3b288)();
  return;
}



// ===== continuation @ rva fe52bf6 (image 18fe52bf6) =====

void FUN_18fe52bf6(void)

{
  return;
}



// ===== continuation @ rva fe50c5c (image 18fe50c5c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe50c5c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_182b3b9b8)();
  return;
}



// ===== continuation @ rva fe52d9b (image 18fe52d9b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe52d9b(void)

{
  (*_DAT_182b3c4d8)();
  return;
}



// ===== continuation @ rva fe5379a (image 18fe5379a) =====

void FUN_18fe5379a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva fe5112f (image 18fe5112f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe5112f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe522c0 (image 18fe522c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fe522c0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva fe53425 (image 18fe53425) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe53425(void)

{
  (*_DAT_182b3c688)();
  return;
}



// ===== continuation @ rva fe50fe1 (image 18fe50fe1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe50fe1(void)

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



// ===== continuation @ rva fe51e29 (image 18fe51e29) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe51e29(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_182b3c5b8)();
  return;
}



// ===== continuation @ rva fe5263b (image 18fe5263b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe5263b(void)

{
  (*_DAT_182b3c688)();
  return;
}



