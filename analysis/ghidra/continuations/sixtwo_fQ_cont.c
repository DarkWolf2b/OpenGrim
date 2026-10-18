// ===== continuation @ rva a93efb6 (image 18a93efb6) =====

void FUN_18a93efb6(void)

{
  return;
}



// ===== continuation @ rva a934b62 (image 18a934b62) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a934b62(void)

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



// ===== continuation @ rva a93b981 (image 18a93b981) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93b981(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000048;
  int in_stack_00000058;
  
  lVar6 = (**(code **)(*unaff_RSI + 0x6f0))();
  bVar1 = *(byte *)(lVar6 + in_stack_00000058);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar6,2);
  uVar7 = (~_DAT_183261e00 + 0x23190bfa) *
          ((_DAT_183261bb8 ^ 0x729ff0cc) + (ulonglong)((uint)_DAT_183261bb8 & 0x729ff0cc) * 2);
  uVar7 = (uVar7 | _DAT_183261e70) + (uVar7 & _DAT_183261e70);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183261b28 = func_0x00018a93f1a0((uVar7 | 0x5186fb35) + (ulonglong)((uint)uVar7 & 0x5186fb35))
  ;
  uVar7 = _DAT_183261b28 << 0x19 | _DAT_183261b28 >> 0x27;
  _DAT_183261e78 = (_DAT_183261e78 ^ uVar7) + 0xf7bddbf9 ^ 0x9539ad6279381766;
  _DAT_183261d68 = (_DAT_183261d68 * 0x1d9ea5b09bdee07d ^ _DAT_183261e78) + uVar7;
  _DAT_183261c70 = _DAT_183261d68 ^ _DAT_183261e78;
  _DAT_183261e88 = 0xf7bddbf9;
  _DAT_183261ce8 = func_0x00018a93f1a0(_DAT_183261c68 + 0xffd7002c9f0024ff ^ 0xdc);
  _DAT_183261cd0 = (_DAT_183261cd0 ^ _DAT_183261ce8) + 0xf7471484 ^ 0x3c12a7a61f2d697f;
  _DAT_183261be8 = (_DAT_183261be8 * 0x2185800a6db5e3f9 ^ _DAT_183261cd0) + _DAT_183261ce8;
  _DAT_183261d90 = _DAT_183261be8 ^ _DAT_183261cd0;
  _DAT_183261d10 = _DAT_183261c18 ^ 0xf7471484;
  _DAT_183261b70 = 0xf7471484;
  uVar7 = (_DAT_183261ba8 ^ _DAT_1818c9230) + _DAT_183261ee8 + 0x84222325;
  uVar10 = (_DAT_183261ee8 ^ _UNK_1818c9238) + _DAT_183261ba8 + 0xc33be206;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261ba8 ^ _DAT_1818c9230;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183261ee8 ^ _UNK_1818c9238;
  _DAT_183261e28 =
       func_0x00018a93f1a0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183261ba8 + 0xc33be206) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261ee8 + 0x84222325));
  _DAT_183261ca0 =
       (_DAT_183261ca0 ^ _DAT_183261e28 & 0xfffffffff0000000) - 0xc33be206 ^ 0x20d7286c5c806a6b;
  _DAT_183261ef0 =
       (_DAT_183261ef0 * 0x29a7d018cbb6688b ^ _DAT_183261ca0) +
       (_DAT_183261e28 & 0xfffffffff0000000);
  _DAT_183261e60 = _DAT_183261ef0 ^ _DAT_183261ca0;
  _DAT_183261b60 = 0x3cc41dfa;
  _DAT_183261e30 = func_0x00018a93f1a0(_DAT_183261ea8 ^ 0x3f0046e1009d4d);
  uVar4 = (uint)_DAT_183261e30 & 0xff0000;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3 >> 8 | uVar3;
  uVar7 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          (ulonglong)uVar4 ^ 0xff0000;
  _DAT_183261df0 = _DAT_183261de0 ^ uVar7 ^ 0xc43ae206;
  _DAT_183261de0 = (_DAT_183261de0 ^ uVar7) + 0xc43ae206 ^ 0xccff0b3e7fab03c7;
  _DAT_183261cd8 = (_DAT_183261cd8 * -0x260d4883612f6c27 ^ _DAT_183261de0) + uVar7;
  _DAT_183261e90 = _DAT_183261cd8 ^ _DAT_183261de0;
  _DAT_183261e10 = 0xc43ae206;
  uVar7 = (_DAT_183261ca0 ^ _DAT_1818c9240) + _DAT_183261d28 + 0x4018c123;
  uVar10 = (_DAT_183261d28 ^ _UNK_1818c9248) + _DAT_183261ca0 + 0x3cc41dfa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261ca0 ^ _DAT_1818c9240;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183261d28 ^ _UNK_1818c9248;
  _DAT_183261dd0 =
       func_0x00018a93f1a0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183261ca0 + 0x3cc41dfa) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261d28 + 0x4018c123));
  uVar7 = _DAT_183261dd0 ^ 0xc43ae206;
  _DAT_183261c40 = _DAT_183261b90 ^ uVar7 ^ 0x100ff0000;
  _DAT_183261bf0 = (_DAT_183261bf0 ^ uVar7) + 0x100ff0000 ^ 0xdb0f1e4c36389d1e;
  _DAT_183261cf0 = (_DAT_183261cf0 * 0x1221a30a393ab8eb ^ _DAT_183261bf0) + uVar7;
  _DAT_183261e88 = _DAT_183261cf0 ^ _DAT_183261bf0;
  _DAT_183261cf8 = 0xff0000;
  uVar7 = (~_DAT_183261d40 + 0x8683e6be) *
          ((_DAT_183261db8 ^ 0x84222325) + (ulonglong)((uint)_DAT_183261db8 & 0x84222325) * 2);
  uVar7 = (uVar7 | _DAT_183261c40) + (uVar7 & _DAT_183261c40);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183261bb0 = func_0x00018a93f1a0((uVar7 | 0x2a1c598) + (ulonglong)((uint)uVar7 & 0x2a1c598));
  uVar7 = _DAT_183261bb0 << 2 | _DAT_183261bb0 >> 0x3e;
  _DAT_183261b60 = (_DAT_183261b60 ^ uVar7) - 0x8683e6bd ^ 0xa5aa838cd8ccb4b0;
  _DAT_183261c70 = (_DAT_183261c70 * 0x35c194f0829804cf ^ _DAT_183261b60) + uVar7;
  _DAT_183261c48 = _DAT_183261c70 ^ _DAT_183261b60;
  _DAT_183261b88 = 0x797c1943;
  uVar7 = (~_DAT_183261c10 + 0x797c1944) *
          ((_DAT_183261b78 ^ 0x3a0c598) + (ulonglong)((uint)_DAT_183261b78 & 0x3a0c598) * 2);
  uVar7 = (uVar7 | 0x797c1943) + (uVar7 & 0x797c1943);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183261d68 = func_0x00018a93f1a0((uVar7 | 0x7adcdcdb) + (ulonglong)((uint)uVar7 & 0x7adcdcdb))
  ;
  uVar7 = _DAT_183261d68 - (_DAT_183261d68 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar2 + (uint)bVar2 ^ _DAT_183261d68;
  _DAT_183261c98 = _DAT_183261d88 ^ uVar7 ^ 0x100ff0000;
  _DAT_183261cc8 = (_DAT_183261cc8 ^ uVar7) + 0x100ff0000 ^ 0x545139bf442c1e1d;
  _DAT_183261b38 = (_DAT_183261b38 * 0x5bfcd2e7278ee58f ^ _DAT_183261cc8) + uVar7;
  _DAT_183261bd8 = _DAT_183261b38 ^ _DAT_183261cc8;
  _DAT_183261bf0 = 0xff0000;
  _DAT_183261da8 = func_0x00018a93f1a0(_DAT_183261ed8 + 0xffe8ffc5c7fffeffU ^ 0xa2);
  _DAT_183261c68 = _DAT_183261cf8 ^ _DAT_183261b08 ^ 0x5fdb4a5d;
  _DAT_183261ec8 = (_DAT_183261ec8 ^ _DAT_183261b08) + 0x5fdb4a5d ^ 0x131677bc26fdf5a7;
  _DAT_183261c88 = (_DAT_183261c88 * 0x35a29a7181f47c3d ^ _DAT_183261ec8) + _DAT_183261b08;
  _DAT_183261ce0 = _DAT_183261c88 ^ _DAT_183261ec8;
  _DAT_183261c38 = 0x5fdb4a5d;
  uVar7 = (_DAT_183261e98 ^ _DAT_1818c9250) + _DAT_183261da0 + 0xdbf96978;
  uVar10 = (_DAT_183261da0 ^ _UNK_1818c9258) + _DAT_183261e98 + 0xa123b5a3;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261e98 ^ _DAT_1818c9250;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183261da0 ^ _UNK_1818c9258;
  _DAT_183261c98 =
       func_0x00018a93f1a0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183261e98 + 0xa123b5a3) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261da0 + 0xdbf96978));
  uVar7 = _DAT_183261c98 ^ 0x3c5648c2e430506a;
  _DAT_183261d40 = _DAT_183261c10 ^ uVar7 ^ 0x100ff0000;
  _DAT_183261cb8 = (_DAT_183261cb8 ^ uVar7) + 0x100ff0000 ^ 0xbb8687192c59df16;
  _DAT_183261e00 = (_DAT_183261e00 * -0x5758ad8e29610431 ^ _DAT_183261cb8) + uVar7;
  _DAT_183261e40 = _DAT_183261e00 ^ _DAT_183261cb8;
  _DAT_183261bd0 = 0xff0000;
  uVar7 = (_DAT_183261b58 ^ _DAT_1818c9260) + _DAT_183261e00 + 0x739ff8dc;
  uVar10 = (_DAT_183261e00 ^ _UNK_1818c9268) + _DAT_183261b58 + 0xf7471484;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261b58 ^ _DAT_1818c9260;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_183261e00 ^ _UNK_1818c9268;
  _DAT_183261ba0 =
       func_0x00018a93f1a0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_183261b58 + 0xf7471484) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261e00 + 0x739ff8dc));
  _DAT_183261be0 = (_DAT_183261be0 ^ _DAT_183261ba0 ^ 0x420404) + 0xfacf7d ^ 0xf4e74a9a61adfe4a;
  _DAT_183261b40 =
       (_DAT_183261b40 * -0x4a0a97373d1fc4a5 ^ _DAT_183261be0) + (_DAT_183261ba0 ^ 0x420404);
  _DAT_183261b60 = _DAT_183261b40 ^ _DAT_183261be0;
  _DAT_183261c30 = _DAT_183261bf8 ^ 0xfacf7d;
  _DAT_183261ef0 = 0xfacf7d;
  uVar7 = (~_DAT_183261c00 + 0xee0a2101) *
          ((_DAT_183261bd0 ^ 0x84d8ec58) + (ulonglong)((uint)_DAT_183261bd0 & 0x84d8ec58) * 2);
  uVar7 = (uVar7 | _DAT_183261bb8) + (uVar7 & _DAT_183261bb8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183261b48 = func_0x00018a93f1a0((uVar7 | 0x6ad2cd58) + (ulonglong)((uint)uVar7 & 0x6ad2cd58))
  ;
  _DAT_183261e10 = _DAT_183261c98 ^ _DAT_183261b48 ^ 0xef04f07d;
  _DAT_183261c48 = (_DAT_183261c48 ^ _DAT_183261b48) + 0xef04f07d ^ 0x87af7b2d1e0dc103;
  _DAT_183261d28 = (_DAT_183261d28 * 0x2e897f02248bbbd9 ^ _DAT_183261c48) + _DAT_183261b48;
  _DAT_183261db0 = _DAT_183261d28 ^ _DAT_183261c48;
  _DAT_183261e28 = 0xef04f07d;
  uVar7 = ((_DAT_183261de0 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_183261de0 & 0x84dd2325) * 2) *
          -_DAT_183261b40;
  uVar7 = (uVar7 | _DAT_183261d08) + (uVar7 & _DAT_183261d08);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183261e40 = func_0x00018a93f1a0((uVar7 | 0x84dd2325) + (ulonglong)((uint)uVar7 & 0x84dd2325))
  ;
  uVar7 = _DAT_183261e38 << 0x14 | _DAT_183261e38 >> 0x2c;
  _DAT_183261e88 = (_DAT_183261e20 ^ uVar7 ^ 0xff0000 ^ uVar7) + 0xff0000 ^ 0x171083344fd604ee;
  _DAT_183261bd8 = (_DAT_183261bd8 * -0x713f59690bfdfefb ^ _DAT_183261e88) + uVar7;
  _DAT_183261bf8 = _DAT_183261bd8 ^ _DAT_183261e88;
  _DAT_183261c88 = 0xff0000;
  uVar7 = (_DAT_183261ca8 ^ 0x84dd2325) + _DAT_183261da8 + 0x84dd2325;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261ca8 ^ 0x84dd2325;
  uVar10 = ((_DAT_183261da8 + _DAT_183261ca8) * 0x2000 | _DAT_183261da8 + _DAT_183261ca8 >> 0x33) ^
           _DAT_183261da8;
  _DAT_183261bd8 =
       func_0x00018a93f1a0((uVar10 << 0x1d | uVar10 >> 0x23) - _DAT_183261ca8 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261da8 + 0x84dd2325));
  uVar10 = _DAT_183261bd8 * -0x47dd8303265a47;
  uVar7 = uVar10 >> 1 | uVar10;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           uVar10;
  _DAT_183261c28 = _DAT_183261b48 ^ uVar10 ^ 0xff0000;
  _DAT_183261ed0 = (_DAT_183261ed0 ^ uVar10) + 0xff0000 ^ 0xc3de840aaa793454;
  _DAT_183261b58 = (_DAT_183261b58 * 0x475a51e8dcb0c2f ^ _DAT_183261ed0) + uVar10;
  _DAT_183261b18 = _DAT_183261b58 ^ _DAT_183261ed0;
  _DAT_183261d40 = 0xff0000;
  auVar8._8_4_ = (uint)bVar1 << 0x10;
  auVar8._0_8_ = in_stack_00000048 ^ 0x84222325;
  auVar8._12_4_ = 0;
  auVar9 = pshufb(auVar8 ^ _DAT_1818c9270,_DAT_1800170c0);
  uVar10 = auVar9._8_8_ + auVar9._0_8_;
  uVar7 = uVar10 + _DAT_183261c08;
  if (auVar9._4_4_ < 0) {
    uVar7 = _DAT_183261d10 ^ uVar10;
  }
  _DAT_183261e08 = func_0x00018a93f1a0(SUB161(auVar8 ^ _DAT_1818c9270,5) ^ uVar7);
  _DAT_183261c60 = in_stack_00000048 | (ulonglong)bVar1 << 0x10;
  uVar7 = (_DAT_183261e08 ^ _DAT_183261c60) & 0x7fffffffffffffff;
  _DAT_183261ee8 = (_DAT_183261ee8 ^ uVar7) + _DAT_183261c60 ^ 0x9e49738ef9938830;
  _DAT_183261d90 = (_DAT_183261d90 * 0x168aaacd468fe023 ^ _DAT_183261ee8) + uVar7;
  _DAT_183261df8 = _DAT_183261d90 ^ _DAT_183261ee8;
  iVar5 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar5 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a93b936 (image 18a93b936) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93b936(void)

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



// ===== continuation @ rva a938f0f (image 18a938f0f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a938f0f(void)

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



// ===== continuation @ rva a936700 (image 18a936700) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a936700(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a9378d6 (image 18a9378d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a9378d6(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R15;
  int iStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  
  iStack0000000000000058 = 6;
  uStack0000000000000068 = 8;
  uStack0000000000000060 =
       CONCAT44((uint)((ulonglong)unaff_R15 >> 0x28),(int)(char)((ulonglong)unaff_R15 >> 8));
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iStack0000000000000058 < 0 || iVar1 <= iStack0000000000000058) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a93c90f (image 18a93c90f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93c90f(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar7;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000048;
  int in_stack_00000058;
  
  lVar4 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar4 + in_stack_00000058);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar4,2);
  _DAT_183261ba0 = func_0x00018a93f1a0(_DAT_183261e70 + 0xffde00683dff74ffU ^ 0xb);
  uVar6 = (ulonglong)((uint)(_DAT_183261ba0 >> 1) & 0xc78a1f9c);
  _DAT_183261ec0 = (_DAT_183261ec0 ^ uVar6) + 0x1c991de3 ^ 0x549dfbcddff6ab7e;
  _DAT_183261dc8 = (_DAT_183261dc8 * -0x1d862fcda62a8e1b ^ _DAT_183261ec0) + uVar6;
  _DAT_183261d80 = _DAT_183261dc8 ^ _DAT_183261ec0;
  _DAT_183261b20 = 0x1c991de3;
  uVar6 = (~_DAT_183261de8 + 0x916aea9c) *
          ((_DAT_183261b00 ^ 0x84222325) + (ulonglong)((uint)_DAT_183261b00 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183261bd8) + (uVar6 & _DAT_183261bd8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183261ec8 = func_0x00018a93f1a0((uVar6 | 0x1548c9be) + (ulonglong)((uint)uVar6 & 0x1548c9be))
  ;
  _DAT_183261bb8 = (_DAT_183261bb8 ^ _DAT_183261ec8) - 0x916aea9b ^ 0x211eb06e1b126f95;
  _DAT_183261d48 = (_DAT_183261d48 * -0x2a2ff0c67e1a2077 ^ _DAT_183261bb8) + _DAT_183261ec8;
  _DAT_183261df8 = _DAT_183261d48 ^ _DAT_183261bb8;
  _DAT_183261d70 = 0x6e951565;
  _DAT_183261bb0 = func_0x00018a93f1a0(_DAT_183261bf0 ^ 0xfff1fff5ba0047e0);
  uVar6 = _DAT_183261bb0 & 0xffffffffffffffc0;
  _DAT_183261cb8 = _DAT_183261df8 ^ uVar6 ^ 0x916be99b;
  _DAT_183261e88 = (_DAT_183261e88 ^ uVar6) + 0x916be99b ^ 0x6668df62ffcfeff9;
  _DAT_183261e20 = (_DAT_183261e20 * 0x782837f977dd7e75 ^ _DAT_183261e88) + uVar6;
  _DAT_183261d80 = _DAT_183261e20 ^ _DAT_183261e88;
  _DAT_183261c70 = 0x916be99b;
  uVar6 = (_DAT_183261d48 ^ _DAT_1818c9280) + _DAT_183261cd8 + 0x1549cabe;
  uVar7 = (_DAT_183261cd8 ^ _UNK_1818c9288) + _DAT_183261d48 + 0x6e951565;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183261d48 ^ _DAT_1818c9280;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261cd8 ^ _UNK_1818c9288;
  _DAT_183261ef0 =
       func_0x00018a93f1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261d48 + 0x6e951565) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183261cd8 + 0x1549cabe));
  uVar6 = (_DAT_183261ef0 ^ 0x3ed10e56a466f442) & 0x7fffffffffffffff ^ 0x916be99b;
  _DAT_183261c28 = _DAT_183261c58 ^ uVar6 ^ 0x10000ff00;
  _DAT_183261b98 = (_DAT_183261b98 ^ uVar6) + 0x10000ff00 ^ 0x32b97641f9784e0f;
  _DAT_183261b38 = (_DAT_183261b38 * -0x7510607e71026c67 ^ _DAT_183261b98) + uVar6;
  _DAT_183261d08 = _DAT_183261b38 ^ _DAT_183261b98;
  _DAT_183261d38 = 0xff00;
  uVar6 = (_DAT_183261dc8 ^ _DAT_1818c9290) + _DAT_183261d78 + 0x84222325;
  uVar7 = (_DAT_183261d78 ^ _UNK_1818c9298) + _DAT_183261dc8 + 0x165b5800;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183261dc8 ^ _DAT_1818c9290;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261d78 ^ _UNK_1818c9298;
  _DAT_183261c98 =
       func_0x00018a93f1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261dc8 + 0x165b5800) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183261d78 + 0x84222325));
  uVar6 = (_DAT_183261c98 << 0x39 | _DAT_183261c98 >> 7) * 0x78e3f3e79499fba9;
  _DAT_183261e80 = (_DAT_183261e80 ^ uVar6) - 0x165b5800 ^ 0x5eca5dfc1ae5b7d6;
  _DAT_183261e58 = (_DAT_183261e58 * 0x289cc0c7530fae79 ^ _DAT_183261e80) + uVar6;
  _DAT_183261d30 = _DAT_183261e58 ^ _DAT_183261e80;
  _DAT_183261ee0 = 0xe9a4a800;
  _DAT_183261b08 = func_0x00018a93f1a0(_DAT_183261e68 ^ 0xff840071db00780c);
  uVar6 = (ulonglong)(~(uint)_DAT_183261b08 & 0xff00);
  _DAT_183261d10 = _DAT_183261b60 ^ uVar6 ^ 0x165c5700;
  _DAT_183261db8 = (_DAT_183261db8 ^ uVar6) + 0x165c5700 ^ 0xdeb0472fa7c9255b;
  _DAT_183261d48 = (_DAT_183261d48 * 0x406948f109ccd833 ^ _DAT_183261db8) + uVar6;
  _DAT_183261cf8 = _DAT_183261d48 ^ _DAT_183261db8;
  _DAT_183261eb0 = 0x165c5700;
  uVar6 = (_DAT_183261ee8 ^ _DAT_1818c92a0) + _DAT_183261cd0 + 0x927e7425;
  uVar7 = (_DAT_183261cd0 ^ _UNK_1818c92a8) + _DAT_183261ee8 + 0xe9a4a800;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183261ee8 ^ _DAT_1818c92a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261cd0 ^ _UNK_1818c92a8;
  _DAT_183261ea0 =
       func_0x00018a93f1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261ee8 + 0xe9a4a800) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183261cd0 + 0x927e7425));
  uVar6 = _DAT_183261ea0 << 0x1f | _DAT_183261ea0 >> 0x21;
  _DAT_183261cc0 = _DAT_183261ef0 ^ uVar6 ^ 0x10000ff00;
  _DAT_183261d90 = (_DAT_183261d90 ^ uVar6) + 0x10000ff00 ^ 0x91115765a4ae845;
  _DAT_183261b08 = (_DAT_183261b08 * -0x6e930dafa76d862f ^ _DAT_183261d90) + uVar6;
  _DAT_183261d58 = _DAT_183261b08 ^ _DAT_183261d90;
  _DAT_183261d50 = 0xff00;
  uVar6 = (_DAT_183261e60 ^ _DAT_1818c92b0) + _DAT_183261b40 + 0x84222325;
  uVar7 = (_DAT_183261b40 ^ _UNK_1818c92b8) + _DAT_183261e60 + 0x39323c68;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183261e60 ^ _DAT_1818c92b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261b40 ^ _UNK_1818c92b8;
  uVar6 = func_0x00018a93f1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261e60 + 0x39323c68) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183261b40 + 0x84222325));
  uVar7 = (uVar6 ^ 0x39323c68) << 0x12 | uVar6 >> 0x2e;
  _DAT_183261bb0 = (uVar6 ^ uVar7) - 0x39323c68 ^ 0x8805e7b14fc75304;
  _DAT_183261ee0 = (_DAT_183261ee0 * -0x52e44a605e2e9417 ^ _DAT_183261bb0) + uVar7;
  _DAT_183261bd8 = _DAT_183261ee0 ^ _DAT_183261bb0;
  _DAT_183261b30 = 0xc6cdc398;
  _DAT_183261c38 = func_0x00018a93f1a0(_DAT_183261ea8 ^ 0x60004cbd000ffe);
  uVar6 = _DAT_183261c38 ^ 0xff00;
  _DAT_183261ca8 = _DAT_183261bd8 ^ uVar6 ^ 0x39333b68;
  _DAT_183261cb0 = (_DAT_183261cb0 ^ uVar6) + 0x39333b68 ^ 0x21a1d6adf8bbec53;
  _DAT_183261bd8 = (_DAT_183261bd8 * -0x1a75e543a9887c57 ^ _DAT_183261cb0) + uVar6;
  _DAT_183261e98 = _DAT_183261bd8 ^ _DAT_183261cb0;
  _DAT_183261d00 = 0x39333b68;
  uVar6 = (~_DAT_183261e00 + 0xc6cdc399) *
          ((_DAT_183261e08 ^ 0xbd11184d) + (ulonglong)((uint)_DAT_183261e08 & 0xbd11184d) * 2);
  uVar6 = (uVar6 | _DAT_183261b60) + (uVar6 & _DAT_183261b60);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183261ec8 = func_0x00018a93f1a0((uVar6 | 0x7bdcdbd5) + (ulonglong)((uint)uVar6 & 0x7bdcdbd5))
  ;
  uVar6 = _DAT_183261ec8 & 0xffffffff80000000;
  _DAT_183261d30 = _DAT_183261da0 ^ uVar6 ^ 0x10000ff00;
  _DAT_183261de8 = (_DAT_183261de8 ^ uVar6) + 0x10000ff00 ^ 0xf7c489f89ed9500b;
  _DAT_183261d60 = (_DAT_183261d60 * -0x73522ec26d47a59 ^ _DAT_183261de8) + uVar6;
  _DAT_183261c08 = _DAT_183261d60 ^ _DAT_183261de8;
  _DAT_183261e80 = 0xff00;
  _DAT_183261c78 = func_0x00018a93f1a0(_DAT_183261dc8 + 0xffc300892aff5cff ^ 100);
  uVar6 = _DAT_183261c78 ^ 0x1c810002;
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar2 + (uint)bVar2 ^ uVar6;
  _DAT_183261e18 = _DAT_183261b68 ^ uVar6 ^ 0x3db81be0;
  _DAT_183261ee0 = (_DAT_183261ee0 ^ uVar6) + 0x3db81be0 ^ 0xa029b16a237f89e7;
  _DAT_183261d00 = (_DAT_183261d00 * -0x2b47196792190f41 ^ _DAT_183261ee0) + uVar6;
  _DAT_183261d88 = _DAT_183261d00 ^ _DAT_183261ee0;
  _DAT_183261de0 = 0x3db81be0;
  _DAT_183261c00 = func_0x00018a93f1a0(_DAT_183261dd0 + 0xff3d0066cb005cffU ^ 0x90);
  _DAT_183261b70 = (_DAT_183261b70 ^ _DAT_183261c00 ^ 0x211efdfd) + 0x3d87e01e ^ 0x5dc58129d3177cdf;
  _DAT_183261ea8 =
       (_DAT_183261ea8 * 0x5327d7d0c90a7927 ^ _DAT_183261b70) + (_DAT_183261c00 ^ 0x211efdfd);
  _DAT_183261ef0 = _DAT_183261ea8 ^ _DAT_183261b70;
  _DAT_183261e20 = 0x3d87e01e;
  _DAT_183261cd0 = func_0x00018a93f1a0(_DAT_183261b78 ^ 0x3d00890b006249);
  uVar6 = (ulonglong)(((uint)_DAT_183261cd0 ^ 0x114e055) & 0x211efdfd) ^ 0x211efdfd;
  _DAT_183261d78 = (_DAT_183261d78 ^ uVar6) + 0x181de1 ^ 0x9325729df882a589;
  _DAT_183261e98 = (_DAT_183261e98 * 0xc839c1d4b324439 ^ _DAT_183261d78) + uVar6;
  _DAT_183261ec8 = _DAT_183261e98 ^ _DAT_183261d78;
  _DAT_183261e28 = 0x181de1;
  uVar6 = (~_DAT_183261ba0 + 0x303bc3) *
          ((_DAT_183261ec0 ^ 0xb9a5c33b) + (ulonglong)((uint)_DAT_183261ec0 & 0xb9a5c33b) * 2);
  uVar6 = (uVar6 | _DAT_183261b70) + (uVar6 & _DAT_183261b70);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183261d48 = func_0x00018a93f1a0((uVar6 | 0xb995f8f9) + (ulonglong)((uint)uVar6 & 0xb995f8f9))
  ;
  uVar6 = (ulonglong)(((uint)_DAT_183261d48 ^ 0x8812002) & 0x3d87e01e);
  _DAT_183261c78 = _DAT_183261b50 ^ uVar6 ^ 0x3db81be0;
  _DAT_183261c90 = (_DAT_183261c90 ^ uVar6) + 0x3db81be0 ^ 0xf05d9836778ef18d;
  _DAT_183261b40 = (_DAT_183261b40 * 0x67e56e8e43a7b5b1 ^ _DAT_183261c90) + uVar6;
  _DAT_183261c90 = _DAT_183261b40 ^ _DAT_183261c90;
  _DAT_183261ca8 = 0x3db81be0;
  uVar6 = (_DAT_183261e98 ^ _DAT_1818c92c0) + _DAT_183261d50 + 0xa53cded8;
  uVar7 = (_DAT_183261d50 ^ _UNK_1818c92c8) + _DAT_183261e98 + 0xffffffff;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183261e98 ^ _DAT_1818c92c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261d50 ^ _UNK_1818c92c8;
  _DAT_183261b98 =
       func_0x00018a93f1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261e98 + 0xffffffff) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183261d50 + 0xa53cded8));
  uVar7 = _DAT_183261b98 ^ 0x211efdfcdee10203;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar7;
  uVar6 = uVar7 << 0x13 | uVar7 >> 0x2d;
  _DAT_183261ef0 = (_DAT_183261ef0 ^ uVar6) + 0xdee10202 ^ 0x43b39d4b5f992c3a;
  _DAT_183261e20 = (_DAT_183261e20 * -0x3197039e6e1cc7b3 ^ _DAT_183261ef0) + uVar6;
  _DAT_183261c68 = _DAT_183261e20 ^ _DAT_183261ef0;
  _DAT_183261d38 = 0xdee10202;
  uVar6 = (_DAT_183261b80 ^ _DAT_1818c92d0) + _DAT_183261d50 + 0xa53cded8;
  uVar7 = (_DAT_183261d50 ^ _UNK_1818c92d8) + _DAT_183261b80 + 0xdee10202;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183261b80 ^ _DAT_1818c92d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183261d50 ^ _UNK_1818c92d8;
  _DAT_183261cb8 =
       func_0x00018a93f1a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183261b80 + 0xdee10202) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183261d50 + 0xa53cded8));
  uVar6 = ((_DAT_183261cb8 ^ 0x1cd5fcc12106f5fa) & 0x7ffff) << 0x28 |
          (_DAT_183261cb8 ^ 0x1cd5fcc12106f5fa) >> 0x18;
  _DAT_183261b28 = _DAT_183261b28 ^ uVar6 ^ 0xef42e5987ff79dba;
  _DAT_183261c78 = (_DAT_183261c78 * -0x540f2249681db78f ^ _DAT_183261b28) + uVar6;
  _DAT_183261be0 = _DAT_183261c78 ^ _DAT_183261b28;
  _DAT_183261ea0 = 0;
  uVar6 = (~_DAT_183261cb0 + 0x211ecd5e) *
          ((_DAT_183261d08 ^ 0xa53cee78) + (ulonglong)((uint)_DAT_183261d08 & 0xa53cee78) * 2);
  uVar6 = (uVar6 | _DAT_183261bb0) + (uVar6 & _DAT_183261bb0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183261ec0 = func_0x00018a93f1a0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  uVar6 = _DAT_183261ec0 >> 1 | _DAT_183261ec0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183261ec0) & 0xffffffffffffc000;
  _DAT_183261c98 = _DAT_183261c98 ^ uVar6 ^ 0x3492741e489dbcb6;
  _DAT_183261e08 = (_DAT_183261e08 * 0x35a614121c047bc5 ^ _DAT_183261c98) + uVar6;
  _DAT_183261e78 = _DAT_183261e08 ^ _DAT_183261c98;
  _DAT_183261dc0 = 0;
  uVar7 = (ulonglong)(uint)((int)cVar1 << 8);
  uVar6 = (~_DAT_183261bc0 + 0xff01) *
          ((uVar7 ^ 0x84222325 ^ _DAT_183261d30) +
          (ulonglong)((uint)_DAT_183261d30 & (uint)(uVar7 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | _DAT_183261d70) + (uVar6 & _DAT_183261d70);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183261be0 =
       func_0x00018a93f1a0((uVar7 ^ 0x8422dc25 | uVar6) +
                           (ulonglong)((uint)(uVar7 ^ 0x8422dc25) & (uint)uVar6));
  uVar6 = (uVar7 | 0xff00) ^ _DAT_183261be0;
  uVar6 = uVar7 ^ (uVar6 << 0x33 | uVar6 >> 0xd) ^ 0xff00;
  uVar7 = uVar7 & 0xffff;
  _DAT_183261e58 = (_DAT_183261e58 ^ uVar6) + uVar7 ^ 0x697d19be492db70d;
  _DAT_183261cf0 = (_DAT_183261cf0 * 0x3686da2de93566f5 ^ _DAT_183261e58) + uVar6;
  _DAT_183261b58 = _DAT_183261cf0 ^ _DAT_183261e58;
  _DAT_183261bb8 = _DAT_183261e98 ^ uVar7;
  uVar5 = in_stack_00000048 ^ 0x84222325;
  uVar6 = ((_DAT_183261b70 ^ uVar5) + (uVar5 & _DAT_183261b70) * 2) * (uVar7 - _DAT_183261dd0);
  uVar6 = (uVar6 | _DAT_183261da8) + (uVar6 & _DAT_183261da8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183261ef8 = uVar7;
  _DAT_183261e20 = func_0x00018a93f1a0((uVar5 ^ uVar7 | uVar6) + (uVar6 & (uVar5 ^ uVar7)));
  uVar6 = ~(in_stack_00000048 * uVar7 ^ _DAT_183261e20) & in_stack_00000048;
  _DAT_183261cc0 = in_stack_00000048 | uVar7;
  _DAT_183261ca0 = (_DAT_183261ca0 ^ uVar6) + _DAT_183261cc0 ^ 0x67f2f0fe3507d511;
  _DAT_183261bf8 = (_DAT_183261bf8 * 0x70d0edb27d945acb ^ _DAT_183261ca0) + uVar6;
  _DAT_183261b70 = _DAT_183261bf8 ^ _DAT_183261ca0;
  iVar3 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar3 < 8) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a93c8c4 (image 18a93c8c4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a93c8c4(void)

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



// ===== continuation @ rva a937256 (image 18a937256) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a937256(void)

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



// ===== continuation @ rva a936933 (image 18a936933) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a936933(void)

{
  longlong *unaff_RSI;
  longlong in_stack_00000058;
  undefined1 in_stack_00000070;
  undefined1 uStack000000000000009f;
  
  uStack000000000000009f = in_stack_00000070;
  (**(code **)(*unaff_RSI + 0x680))();
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva a9368e8 (image 18a9368e8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a9368e8(void)

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



