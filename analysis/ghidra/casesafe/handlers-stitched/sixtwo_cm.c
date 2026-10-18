// ===== STITCHED CORPUS: sixtwo.cm =====
// handlers: 4  continuation blocks: 30  unresolved table targets: 0
// tables not in tables.json: ['0x24a1c88', '0x24a1da8', '0x24a1db8', '0x24a1dc8', '0x24a1dd8', '0x24a1de8', '0x24a1df8', '0x24a1e78', '0x24a1e88', '0x24a1e98', '0x24a1ea8', '0x24a1eb8', '0x24a1ec8', '0x24a1ed8']

// ===== Lsixtwo/cm; QP ()Ljava/util/List; (handler @ image 18e199190, runtime 6ffff5da9190) =====

void FUN_18e199190(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018e1991b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1824a0e90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/cm; QQ ()Lsixtwo/rk; (handler @ image 18e199390, runtime 6ffff5da9390) =====

void FUN_18e199390(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018e1993b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1824a0f70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/cm; QR (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18e199590, runtime 6ffff5da9590) =====

undefined8 FUN_18e199590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/cm; _d888335a83d063d9e5dc28decb42bdd5 ()V (handler @ image 18e199620, runtime 6ffff5da9620) =====

void FUN_18e199620(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018e1996ff did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1824a10d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xe1991b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1991b3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe1991ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1991ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1824a0ea8)();
  return;
}


// ----- block @ rva 0xe199211 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e199211(void)

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


// ----- block @ rva 0xe199226 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e199226(void)

{
  FUN_190dd72e0();
  (*_DAT_1824a0ed8)();
  return;
}


// ----- block @ rva 0xe19924e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e19924e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe1992a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1992a2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe1992c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1992c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1824a0ec8)();
  return;
}


// ----- block @ rva 0xe1992ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1992ed(void)

{
  (*_DAT_1824a0ef8)();
  return;
}


// ----- block @ rva 0xe1992fe -----

void FUN_18e1992fe(void)

{
  return;
}


// ----- block @ rva 0xe199306 -----

void FUN_18e199306(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xe1993b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1993b3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe1993ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1993ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1824a0f98)();
  return;
}


// ----- block @ rva 0xe199411 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e199411(void)

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


// ----- block @ rva 0xe199426 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e199426(void)

{
  FUN_190dd72e0();
  (*_DAT_1824a0fb8)();
  return;
}


// ----- block @ rva 0xe19944e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e19944e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe1994a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e1994a2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe1994c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e1994c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1824a1008)();
  return;
}


// ----- block @ rva 0xe1994fe -----

void FUN_18e1994fe(void)

{
  return;
}


// ----- block @ rva 0xe199506 -----

void FUN_18e199506(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xe199702 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e199702(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe199cbe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e199cbe(ulonglong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  ulonglong unaff_R14;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  undefined4 uStack00000000000000bc;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined2 in_stack_000000e0;
  
  uVar3 = (~param_1 + 0x11fbc66adafeb291) *
          ((param_2 ^ 0x267b499ed674fafe) + (param_2 & 0x267b499ed674fafe) * 2);
  uVar3 = (uVar3 | in_RAX) + (uVar3 & in_RAX);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a3540 = func_0x00018e1a36a0((uVar3 | 0x37808ff40c8a486e) + (uVar3 & 0x37808ff40c8a486e));
  uVar3 = ~_DAT_1833a3540 & 0x267b499e5256d9db | 0x256d9db;
  _DAT_1833a33f0 = (_DAT_1833a33f0 ^ uVar3) + 0x37fbcffedafefbdb ^ 0x8d2ddaa5d3def563;
  _DAT_1833a3348 = (_DAT_1833a3348 * -0x14a608ada06355ad ^ _DAT_1833a33f0) + uVar3;
  _DAT_1833a3670 = _DAT_1833a3348 ^ _DAT_1833a33f0;
  _DAT_1833a3458 = 0x37fbcffedafefbdb;
  _DAT_1833a3698 = func_0x00018e1a36a0(_DAT_1833a3698 + 0xfc7e7d2a401f42b7 ^ 2);
  uVar3 = ~_DAT_1833a3698 & 0x792fea3b7b6e8390 ^ 0xa1a80b38950e217a;
  _DAT_1833a3548 = (_DAT_1833a3548 ^ uVar3) + 0xd887e103ee60a2ea ^ 0xe6abc1e9a8f34242;
  _DAT_1833a3520 = (_DAT_1833a3520 * -0x76015360b2a3b59d ^ _DAT_1833a3548) + uVar3;
  _DAT_1833a3650 = _DAT_1833a3520 ^ _DAT_1833a3548;
  _DAT_1833a3468 = 0xd887e103ee60a2ea;
  uVar3 = (~_DAT_1833a33f8 + 0x845dc491b47ce001) *
          ((_DAT_1833a3320 ^ 0x7ba26ee461a0041d) + (_DAT_1833a3320 & 0x7ba26ee461a0041d) * 2);
  uVar3 = (uVar3 | _DAT_1833a3380) + (uVar3 & _DAT_1833a3380);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a3478 = func_0x00018e1a36a0((uVar3 | 0xffffaa75d5dce41d) + (uVar3 & 0xffffaa75d5dce41d));
  uVar3 = ~_DAT_1833a3478 & 0x7ba26ee4e5822738;
  _DAT_1833a3698 = _DAT_1833a3450 ^ uVar3 ^ unaff_R14;
  _DAT_1833a3330 = (_DAT_1833a3330 ^ uVar3) + unaff_R14 ^ 0x17c5bfdace54a267;
  _DAT_1833a36b0 = (_DAT_1833a36b0 * -0x4b99ec2f1f0131cb ^ _DAT_1833a3330) + uVar3;
  _DAT_1833a35a8 = _DAT_1833a36b0 ^ _DAT_1833a3330;
  uVar3 = (~_DAT_1833a3550 + 0x39e9f5859bc70fc1) *
          ((_DAT_1833a36b0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833a36b0 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1833a3348) + (uVar3 & _DAT_1833a3348);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a35a0 = unaff_R14;
  _DAT_1833a36e8 = func_0x00018e1a36a0((uVar3 | 0x39e9f5851fe52ce5) + (uVar3 & 0x39e9f5851fe52ce5));
  uVar2 = _DAT_1833a36e8 ^ 0x39e9f5859bc70fc0;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar2;
  _DAT_1833a3638 = (_DAT_1833a3638 ^ uVar2) + 0xc6160a7a6438f040 ^ 0xcb99ca9b36ac8c29;
  _DAT_1833a3550 = (_DAT_1833a3550 * -0x7019b2e7e490f39f ^ _DAT_1833a3638) + uVar2;
  _DAT_1833a3508 = _DAT_1833a3550 ^ _DAT_1833a3638;
  _DAT_1833a36a0 = 0xc6160a7a6438f040;
  uVar3 = (~_DAT_1833a3450 + 0x39e9f5859bc70fc1) *
          ((_DAT_1833a34c0 ^ 0x33761ddd241d) + (_DAT_1833a34c0 & 0x33761ddd241d) * 2);
  uVar3 = (uVar3 | _DAT_1833a35b8) + (uVar3 & _DAT_1833a35b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a34f0 = func_0x00018e1a36a0((uVar3 | 0x39e9c6f3861a2bdd) + (uVar3 & 0x39e9c6f3861a2bdd));
  _DAT_1833a34a0 = _DAT_1833a35b0 ^ _DAT_1833a34f0 ^ 0x39ea28fc35c616f8;
  _DAT_1833a35f0 = (_DAT_1833a35f0 ^ _DAT_1833a34f0) + 0x39ea28fc35c616f8 ^ 0x2111a67e5b9c2cd5;
  _DAT_1833a3378 = (_DAT_1833a3378 * 0x108f32f1e9ec6989 ^ _DAT_1833a35f0) + _DAT_1833a34f0;
  _DAT_1833a36a8 = _DAT_1833a3378 ^ _DAT_1833a35f0;
  _DAT_1833a3478 = 0x39ea28fc35c616f8;
  _DAT_1833a3688 = func_0x00018e1a36a0(_DAT_1833a3598 + 0x85bbf44a92e25cb2U ^ 0x53);
  uVar3 = _DAT_1833a3688 ^ 0xa3c077f50d4e3e00;
  _DAT_1833a36e8 = _DAT_1833a34f8 ^ uVar3 ^ unaff_R14;
  _DAT_1833a3480 = (_DAT_1833a3480 ^ uVar3) + unaff_R14 ^ 0xb45ed563d4ae5175;
  _DAT_1833a3350 = (_DAT_1833a3350 * 0x616241ddb112c443 ^ _DAT_1833a3480) + uVar3;
  _DAT_1833a3430 = _DAT_1833a3350 ^ _DAT_1833a3480;
  uVar3 = (~_DAT_1833a3658 + 0xd887e103ee60a2eb) *
          ((_DAT_1833a3470 ^ 0x37fbcffe5edcd8fe) + (_DAT_1833a3470 & 0x37fbcffe5edcd8fe) * 2);
  uVar3 = (uVar3 | _DAT_1833a3678) + (uVar3 & _DAT_1833a3678);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a3388 = unaff_R14;
  _DAT_1833a35d0 = func_0x00018e1a36a0((uVar3 | 0xef7c2efdb0bc7a14) + (uVar3 & 0xef7c2efdb0bc7a14));
  _DAT_1833a35f0 = _DAT_1833a35a0 ^ _DAT_1833a35d0 ^ 0x1083b102c95f9ec5;
  _DAT_1833a3318 = (_DAT_1833a3318 ^ _DAT_1833a35d0) + 0x1083b102c95f9ec5 ^ 0x6205357beed35f0e;
  _DAT_1833a36b8 = (_DAT_1833a36b8 * 0x31ba6283f9b24c97 ^ _DAT_1833a3318) + _DAT_1833a35d0;
  _DAT_1833a36f0 = _DAT_1833a36b8 ^ _DAT_1833a3318;
  _DAT_1833a3520 = 0x1083b102c95f9ec5;
  _DAT_1833a3508 = func_0x00018e1a36a0(_DAT_1833a3628 + 0xb4d98c9014159456U ^ 0x33);
  _DAT_1833a3428 =
       (_DAT_1833a3428 ^ _DAT_1833a3508 & 0xffffffffffffffe0) + 0xef7c2efd349e5931 ^
       0x71c194bab69e9718;
  _DAT_1833a34f8 =
       (_DAT_1833a34f8 * 0x3b87fae353088ebd ^ _DAT_1833a3428) +
       (_DAT_1833a3508 & 0xffffffffffffffe0);
  _DAT_1833a35d8 = _DAT_1833a34f8 ^ _DAT_1833a3428;
  _DAT_1833a33d0 = 0xef7c2efd349e5931;
  uVar3 = (_DAT_1833a3590 ^ _DAT_1824a1c80) + _DAT_1833a3620 + 0xef7c2efdb0bc7a14;
  uVar2 = (_DAT_1833a3620 ^ _UNK_1824a1c88) + _DAT_1833a3590 + 0x2107820594c14594;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833a3590 ^ _DAT_1824a1c80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833a3620 ^ _UNK_1824a1c88;
  _DAT_1833a3398 =
       func_0x00018e1a36a0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833a3590 + 0x2107820594c14594) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833a3620 + 0xef7c2efdb0bc7a14));
  uVar3 = (_DAT_1833a3398 ^ 0xed7f4077ab86c554) * 0x73df2b4dd8be6985;
  _DAT_1833a3310 = _DAT_1833a3458 ^ uVar3 ^ 0x1083b102c95f9ec5;
  _DAT_1833a3550 = (_DAT_1833a3550 ^ uVar3) + 0x1083b102c95f9ec5 ^ 0x82acdc9ffa4e7984;
  _DAT_1833a3360 = (_DAT_1833a3360 * -0x18069da2c3efe0cf ^ _DAT_1833a3550) + uVar3;
  _DAT_1833a3390 = _DAT_1833a3360 ^ _DAT_1833a3550;
  _DAT_1833a3640 = 0x1083b102c95f9ec5;
  _DAT_1833a33c0 = func_0x00018e1a36a0(_DAT_1833a3398 ^ 0x118fb5f01302184);
  uVar3 = (_DAT_1833a33c0 ^ 0xffedafefbda) & 0x37fbcffedafefbdb | 0x37fbc00000000000;
  _DAT_1833a35e8 = (_DAT_1833a35e8 ^ uVar3) + 0xc804300125010424 ^ 0xe431acaa1a81c3f;
  _DAT_1833a34e0 = (_DAT_1833a34e0 * -0x721a92a6a2aee88b ^ _DAT_1833a35e8) + uVar3;
  _DAT_1833a3448 = _DAT_1833a34e0 ^ _DAT_1833a35e8;
  _DAT_1833a3620 = 0xc804300125010424;
  uVar3 = (~_DAT_1833a35a0 + 0xc804300125010425) *
          ((_DAT_1833a3398 ^ 0x37fbcffe5edcd8fe) + (_DAT_1833a3398 & 0x37fbcffe5edcd8fe) * 2);
  uVar3 = (uVar3 | _DAT_1833a35c8) + (uVar3 & _DAT_1833a35c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a3390 = func_0x00018e1a36a0((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uVar3 = (_DAT_1833a3390 ^ 0x1209037c905a2913) & 0x37fbcffedafefbdb;
  _DAT_1833a36f8 = _DAT_1833a36f8 ^ uVar3 ^ 0xfe12563e2cea983d;
  _DAT_1833a36c0 = (_DAT_1833a36c0 * -0x704e43393d425b99 ^ _DAT_1833a36f8) + uVar3;
  _DAT_1833a3678 = _DAT_1833a36c0 ^ _DAT_1833a36f8;
  _DAT_1833a3588 = 0;
  uVar3 = (_DAT_1833a36f0 ^ 0x33761ddd241d) + _DAT_1833a35d8 + 0x33761ddd241d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833a36f0 ^ 0x33761ddd241d;
  uVar2 = ((_DAT_1833a35d8 + _DAT_1833a36f0) * 0x2000 | _DAT_1833a35d8 + _DAT_1833a36f0 >> 0x33) ^
          _DAT_1833a35d8;
  _DAT_1833a3648 =
       func_0x00018e1a36a0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1833a36f0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833a35d8 + 0x33761ddd241d));
  uVar3 = _DAT_1833a3648 >> 1 | _DAT_1833a3648;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1833a3648;
  _DAT_1833a36b8 = _DAT_1833a3588 ^ uVar3 ^ unaff_R14;
  _DAT_1833a3430 = (_DAT_1833a3430 ^ uVar3) + unaff_R14 ^ 0x2fc103d341c18961;
  _DAT_1833a3440 = (_DAT_1833a3440 * 0x746d2bd4ac568129 ^ _DAT_1833a3430) + uVar3;
  _DAT_1833a33b8 = _DAT_1833a3440 ^ _DAT_1833a3430;
  uStack00000000000000bc = 0xf81a5b8c;
  rdtsc();
  in_stack_000000c0 = 0x2f005300450044;
  rdtsc();
  in_stack_000000c8 = 0x2f004300420043;
  rdtsc();
  in_stack_000000d0 = 0x610050006f004e;
  rdtsc();
  in_stack_000000d8 = 0x6e006900640064;
  rdtsc();
  in_stack_000000e0 = 0x67;
  _DAT_1833a3378 = unaff_R14;
  uVar4 = (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))(extraout_XMM0_Qa,&stack0x000000c0,0x11);
  FUN_190dd72e0(uVar4,*_DAT_18301ee50 + 0xb4a,0x2e);
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe19a97e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e19a97e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe19b1a6 -----

void FUN_18e19b1a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xe19b335 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e19b335(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe19b466 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e19b466(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe19b4a4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18e19b4a4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe19bffd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e19bffd(uint param_1)

{
  int iVar1;
  longlong *unaff_RSI;
  ulonglong uVar2;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000048;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar3 = (_DAT_1833a36d0 ^ _DAT_1824a1da0) + _DAT_1833a3420 + 0xdbc1b804;
  uVar4 = (_DAT_1833a3420 ^ _UNK_1824a1da8) + _DAT_1833a36d0 + 0x1eca1d15;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833a36d0 ^ _DAT_1824a1da0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a3420 ^ _UNK_1824a1da8;
  _DAT_1833a36f8 =
       func_0x00018e1a36a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833a36d0 + 0x1eca1d15) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833a3420 + 0xdbc1b804));
  uVar3 = _DAT_1833a36f8 << 0x10 | _DAT_1833a36f8 >> 0x30;
  _DAT_1833a3670 = (_DAT_1833a3670 ^ uVar3) + 0x5feb9f35 ^ 0xb9a4308a0aec1c9c;
  _DAT_1833a3540 = (_DAT_1833a3540 * 0xa2a6d9e17b7268b ^ _DAT_1833a3670) + uVar3;
  _DAT_1833a35f8 = _DAT_1833a3540 ^ _DAT_1833a3670;
  _DAT_1833a3358 = 0x5feb9f35;
  _DAT_1833a3368 = func_0x00018e1a36a0(_DAT_1833a3498 + 0x1c008ec7000cffU ^ 0x35);
  _DAT_1833a34c0 =
       (_DAT_1833a34c0 ^ _DAT_1833a3368 ^ 0xe942088b81147d02) + 0x172f3f5e ^ 0xd734545a92e3d815;
  _DAT_1833a33f8 =
       (_DAT_1833a33f8 * -0x573dc8db68f7e4d9 ^ _DAT_1833a34c0) +
       (_DAT_1833a3368 ^ 0xe942088b81147d02);
  _DAT_1833a33d8 = _DAT_1833a33f8 ^ _DAT_1833a34c0;
  _DAT_1833a3360 = 0x172f3f5e;
  _DAT_1833a3618 = func_0x00018e1a36a0(_DAT_1833a33a8 ^ 0xff84ffdd62ffc8c1);
  _DAT_1833a3638 = (_DAT_1833a3638 ^ _DAT_1833a3618) - 0xe26ba886 ^ 0xcfe6c0cef17f7266;
  _DAT_1833a3540 = (_DAT_1833a3540 * -0x3c2c0d2fc1dca367 ^ _DAT_1833a3638) + _DAT_1833a3618;
  _DAT_1833a35c0 = _DAT_1833a3540 ^ _DAT_1833a3638;
  _DAT_1833a36e8 = _DAT_1833a3488 ^ 0xffffffff1d94577a;
  _DAT_1833a35a8 = 0x1d94577a;
  uVar3 = (_DAT_1833a35b8 ^ _DAT_1824a1db0) + _DAT_1833a36d0 + 0x842223da;
  uVar4 = (_DAT_1833a36d0 ^ _UNK_1824a1db8) + _DAT_1833a35b8 + 0xe26ba886;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833a35b8 ^ _DAT_1824a1db0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a36d0 ^ _UNK_1824a1db8;
  _DAT_1833a36f8 =
       func_0x00018e1a36a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833a35b8 + 0xe26ba886) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833a36d0 + 0x842223da));
  uVar3 = (_DAT_1833a36f8 ^ 0xe26ba8ff) * -0x2c4e721655dd4205;
  _DAT_1833a3548 = _DAT_1833a3308 ^ uVar3 ^ 0xe26ba985;
  _DAT_1833a3360 = (_DAT_1833a3360 ^ uVar3) + 0xe26ba985 ^ 0x89ac9ba2c402e37b;
  _DAT_1833a3408 = (_DAT_1833a3408 * 0x2bef0c0423ac79c3 ^ _DAT_1833a3360) + uVar3;
  _DAT_1833a3570 = _DAT_1833a3408 ^ _DAT_1833a3360;
  _DAT_1833a3418 = 0xe26ba985;
  uVar3 = (~_DAT_1833a3438 + 0x1d94577b) *
          ((_DAT_1833a35c0 ^ 0x66498aa0) + (ulonglong)((uint)_DAT_1833a35c0 & 0x66498aa0) * 2);
  uVar3 = (uVar3 | _DAT_1833a3358) + (uVar3 & _DAT_1833a3358);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018e1a36a0((uVar3 | 0x7bddddda) + (ulonglong)((uint)uVar3 & 0x7bddddda));
  uVar4 = uVar3 << 0xe | uVar3 >> 0x32;
  _DAT_1833a3340 = _DAT_1833a33f8 ^ uVar4 ^ 0x1000000ff;
  _DAT_1833a3530 = (uVar3 ^ uVar4) + 0x1000000ff ^ 0x56648baeff4f2572;
  _DAT_1833a3620 = (_DAT_1833a3620 * 0x27810d0b1028efb3 ^ _DAT_1833a3530) + uVar4;
  _DAT_1833a33f8 = _DAT_1833a3620 ^ _DAT_1833a3530;
  _DAT_1833a34e8 = 0xff;
  uVar3 = (_DAT_1833a33c0 ^ _DAT_1824a1dc0) + _DAT_1833a3530 + 0x84222325;
  uVar4 = (_DAT_1833a3530 ^ _UNK_1824a1dc8) + _DAT_1833a33c0 + 0x1d6788c8;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833a33c0 ^ _DAT_1824a1dc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a3530 ^ _UNK_1824a1dc8;
  _DAT_1833a3358 =
       func_0x00018e1a36a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833a33c0 + 0x1d6788c8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833a3530 + 0x84222325));
  _DAT_1833a3460 = (_DAT_1833a3460 ^ _DAT_1833a3358 ^ 0x1d6788c8) - 0x1d6788c8 ^ 0x2ff9ada8c2d304ee;
  _DAT_1833a36e8 =
       (_DAT_1833a36e8 * 0x3f71a9b68b07b925 ^ _DAT_1833a3460) + (_DAT_1833a3358 ^ 0x1d6788c8);
  _DAT_1833a36d8 = _DAT_1833a36e8 ^ _DAT_1833a3460;
  _DAT_1833a3618 = 0xe2987738;
  _DAT_1833a33c8 = func_0x00018e1a36a0(_DAT_1833a3698 + 0xacffa74600baffU ^ 0xad);
  uVar3 = (ulonglong)((uint)_DAT_1833a33c8 & 0x1d6789c7);
  _DAT_1833a3680 = _DAT_1833a36c8 ^ uVar3 ^ 0x1000000ff;
  _DAT_1833a3358 = (_DAT_1833a3358 ^ uVar3) + 0x1000000ff ^ 0xb43c8b315be62265;
  _DAT_1833a34a0 = (_DAT_1833a34a0 * 0x458b94d030dc9293 ^ _DAT_1833a3358) + uVar3;
  _DAT_1833a3478 = _DAT_1833a34a0 ^ _DAT_1833a3358;
  _DAT_1833a3560 = 0xff;
  uVar3 = (_DAT_1833a36a0 ^ _DAT_1824a1dd0) + _DAT_1833a35e8 + 0x84222325;
  uVar4 = (_DAT_1833a35e8 ^ _UNK_1824a1dd8) + _DAT_1833a36a0 + 0x2a721ffc;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833a36a0 ^ _DAT_1824a1dd0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a35e8 ^ _UNK_1824a1dd8;
  _DAT_1833a3348 =
       func_0x00018e1a36a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833a36a0 + 0x2a721ffc) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833a35e8 + 0x84222325));
  uVar3 = (_DAT_1833a3348 ^ 0x2a721ffc) * 0x5557c9fa00b22c4d;
  _DAT_1833a3328 = (_DAT_1833a3328 ^ uVar3) - 0x2a721ffc ^ 0x486bf8734ad98c12;
  _DAT_1833a3500 = (_DAT_1833a3500 * 0x3b25bde36812648d ^ _DAT_1833a3328) + uVar3;
  _DAT_1833a3440 = _DAT_1833a3500 ^ _DAT_1833a3328;
  _DAT_1833a33a8 = 0xd58de004;
  uVar3 = (~_DAT_1833a36b0 + 0x2a721ffd) *
          ((_DAT_1833a3310 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a3310 & 0x842223da) * 2);
  uVar3 = (uVar3 | _DAT_1833a35a8) + (uVar3 & _DAT_1833a35a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a34d8 = func_0x00018e1a36a0((uVar3 | 0xae503c26) + (ulonglong)((uint)uVar3 & 0xae503c26))
  ;
  _DAT_1833a3678 = _DAT_1833a3458 ^ _DAT_1833a34d8 ^ 0x2a7220fb;
  _DAT_1833a33c8 = (_DAT_1833a33c8 ^ _DAT_1833a34d8) + 0x2a7220fb ^ 0x20d4b2e5ba24c7ef;
  _DAT_1833a35b0 = (_DAT_1833a35b0 * -0x282bf8cec0dea15f ^ _DAT_1833a33c8) + _DAT_1833a34d8;
  _DAT_1833a35f0 = _DAT_1833a35b0 ^ _DAT_1833a33c8;
  _DAT_1833a3368 = 0x2a7220fb;
  _DAT_1833a3350 = func_0x00018e1a36a0(_DAT_1833a3480 ^ 0xa30016b9ff244d);
  uVar3 = ((_DAT_1833a3350 ^ 0x2a7220fb) << 0xb | _DAT_1833a3350 >> 0x35) ^ 0x2a7220fb;
  _DAT_1833a3560 = _DAT_1833a3560 ^ uVar3 ^ 0x1000000ff;
  _DAT_1833a3390 = (_DAT_1833a3390 ^ uVar3) + 0x1000000ff ^ 0xc49412d769fe310a;
  _DAT_1833a3590 = (_DAT_1833a3590 * -0x2cbe3bea2f935749 ^ _DAT_1833a3390) + uVar3;
  _DAT_1833a3540 = _DAT_1833a3590 ^ _DAT_1833a3390;
  _DAT_1833a3638 = 0xff;
  uVar3 = (~_DAT_1833a3620 + 0x172f3f5f) *
          ((_DAT_1833a34c8 ^ 0xdbc9bc10) + (ulonglong)((uint)_DAT_1833a34c8 & 0xdbc9bc10) * 2);
  uVar3 = (uVar3 | _DAT_1833a3508) + (uVar3 & _DAT_1833a3508);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a3348 = func_0x00018e1a36a0((uVar3 | 0xcce6834e) + (ulonglong)((uint)uVar3 & 0xcce6834e))
  ;
  uVar3 = ((_DAT_1833a3348 ^ 0x8afdf4e326d8076) << 0x2d |
          (_DAT_1833a3348 ^ 0x8afdf4e326d8076) >> 0x13) ^ 0x5feb9f35;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  _DAT_1833a3450 = _DAT_1833a34b8 ^ uVar3 ^ 0x771ade93;
  _DAT_1833a3560 = (_DAT_1833a3560 ^ uVar3) + 0x771ade93 ^ 0xcbdbb8c954c9c298;
  _DAT_1833a35a8 = (_DAT_1833a35a8 * -0x4f0271ce5ed3da87 ^ _DAT_1833a3560) + uVar3;
  _DAT_1833a36f8 = _DAT_1833a35a8 ^ _DAT_1833a3560;
  _DAT_1833a3548 = 0x771ade93;
  uVar3 = ((_DAT_1833a34c8 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a34c8 & 0x842223da) * 2) *
          -_DAT_1833a36a0;
  uVar3 = (uVar3 | _DAT_1833a3590) + (uVar3 & _DAT_1833a3590);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a3318 = func_0x00018e1a36a0((uVar3 | 0x842223da) + (ulonglong)((uint)uVar3 & 0x842223da))
  ;
  uVar3 = _DAT_1833a3318 & 0x1ffffffffe00000;
  _DAT_1833a33a0 = _DAT_1833a3308 ^ uVar3 ^ 0xff;
  _DAT_1833a34a0 = (_DAT_1833a34a0 ^ uVar3) + 0xff ^ 0x22721625ce247d0d;
  _DAT_1833a3450 = (_DAT_1833a3450 * 0x64f379db2b403baf ^ _DAT_1833a34a0) + uVar3;
  _DAT_1833a3618 = _DAT_1833a3450 ^ _DAT_1833a34a0;
  _DAT_1833a3678 = 0xff;
  uVar3 = (_DAT_1833a3540 ^ _DAT_1824a1de0) + _DAT_1833a3378 + 0xdbc9bc10;
  uVar4 = (_DAT_1833a3378 ^ _UNK_1824a1de8) + _DAT_1833a3540 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833a3540 ^ _DAT_1824a1de0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a3378 ^ _UNK_1824a1de8;
  _DAT_1833a3690 =
       func_0x00018e1a36a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833a3540 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833a3378 + 0xdbc9bc10));
  uVar3 = _DAT_1833a3690 >> 1 | _DAT_1833a3690;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_1833a3690;
  uVar3 = uVar3 << 3 | uVar3 >> 0x3d;
  _DAT_1833a33e8 = (_DAT_1833a33e8 ^ uVar3) + 0xa01460ca ^ 0x8ad8aea51b5e7c83;
  _DAT_1833a36a0 = (_DAT_1833a36a0 * -0x7c253d0026a35bc5 ^ _DAT_1833a33e8) + uVar3;
  _DAT_1833a3668 = _DAT_1833a36a0 ^ _DAT_1833a33e8;
  _DAT_1833a3550 = 0xa01460ca;
  uVar3 = (_DAT_1833a3680 ^ _DAT_1824a1df0) + _DAT_1833a3658 + 0xdbc9bc10;
  uVar4 = (_DAT_1833a3658 ^ _UNK_1824a1df8) + _DAT_1833a3680 + 0xa01460ca;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833a3680 ^ _DAT_1824a1df0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a3658 ^ _UNK_1824a1df8;
  _DAT_1833a36f0 =
       func_0x00018e1a36a0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833a3680 + 0xa01460ca) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1833a3658 + 0xdbc9bc10));
  uVar3 = ((_DAT_1833a36f0 ^ 0x3bfae62d9b800000) >> 0x17) * 0x2078c4bd5a800000;
  _DAT_1833a3448 = _DAT_1833a3448 ^ uVar3 ^ 0xbafc0be069b9fc43;
  _DAT_1833a3538 = (_DAT_1833a3538 * 0x19d98e975ad435f7 ^ _DAT_1833a3448) + uVar3;
  _DAT_1833a34d8 = _DAT_1833a3538 ^ _DAT_1833a3448;
  _DAT_1833a3690 = 0;
  _DAT_1833a3308 = func_0x00018e1a36a0(_DAT_1833a34c0 ^ 0xffe2ff84ba00211f);
  _DAT_1833a3590 = _DAT_1833a33b8 ^ _DAT_1833a3490 ^ 0xff;
  _DAT_1833a3360 = (_DAT_1833a3360 ^ _DAT_1833a3490) + 0xff ^ 0x3b6c8ecf4b8f06ca;
  _DAT_1833a35b8 = (_DAT_1833a35b8 * -0x72da0da65d72842b ^ _DAT_1833a3360) + _DAT_1833a3490;
  _DAT_1833a3370 = _DAT_1833a35b8 ^ _DAT_1833a3360;
  _DAT_1833a34d0 = 0xff;
  uVar3 = (~_DAT_1833a35b0 + 0x5fe39b22) *
          ((_DAT_1833a3620 ^ 0xdbc1b804) + (ulonglong)((uint)_DAT_1833a3620 & 0xdbc1b804) * 2);
  uVar3 = (uVar3 | _DAT_1833a3470) + (uVar3 & _DAT_1833a3470);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a3388 = func_0x00018e1a36a0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar3 = (_DAT_1833a3388 ^ 0x5fe39b21) * -0x46d74991c10a74b3;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  _DAT_1833a35c0 = _DAT_1833a35c0 ^ uVar3 ^ 0x7fcc0a096e5431e;
  _DAT_1833a34a8 = (_DAT_1833a34a8 * -0x4c8e82c159720959 ^ _DAT_1833a35c0) + uVar3;
  _DAT_1833a33d8 = _DAT_1833a34a8 ^ _DAT_1833a35c0;
  _DAT_1833a35b0 = 0;
  uVar2 = ((ulonglong)param_1 & 0xff) << 0x30;
  uVar4 = in_stack_00000048 ^ 0x84222325;
  uVar3 = ((_DAT_1833a3588 ^ uVar4) + (uVar4 & _DAT_1833a3588) * 2) * (uVar2 - _DAT_1833a34e8);
  uVar3 = (uVar3 | _DAT_1833a3388) + (uVar3 & _DAT_1833a3388);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1833a3450 = func_0x00018e1a36a0((uVar4 ^ uVar2 | uVar3) + (uVar3 & (uVar4 ^ uVar2)));
  _DAT_1833a3628 = uVar2 | in_stack_00000048;
  _DAT_1833a3408 =
       (_DAT_1833a3408 ^ _DAT_1833a3450 & 0xfffffffffc000000) + _DAT_1833a3628 ^ 0xc7d1a8603094a75b;
  _DAT_1833a3518 =
       (_DAT_1833a3518 * -0x66eaf1e302023817 ^ _DAT_1833a3408) +
       (_DAT_1833a3450 & 0xfffffffffc000000);
  _DAT_1833a34e8 = _DAT_1833a3518 ^ _DAT_1833a3408;
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))(extraout_XMM0_Qa,in_stack_00000038);
  switch(iVar1 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe19e566 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e19e566(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe19e5b1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18e19e5b1(void)

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
  ulonglong uVar8;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000048;
  int in_stack_00000058;
  
  lVar3 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  cVar1 = *(char *)(lVar3 + in_stack_00000058);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar5 = (ulonglong)(uint)(int)cVar1;
  uVar6 = (_DAT_1833a3550 ^ _DAT_1824a1e70) + _DAT_1833a36f8 + 0xddb95970;
  uVar7 = (_DAT_1833a36f8 ^ _UNK_1824a1e78) + _DAT_1833a3550 + 0x372a8882;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833a3550 ^ _DAT_1824a1e70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a36f8 ^ _UNK_1824a1e78;
  _DAT_1833a35a8 =
       func_0x00018e1a36a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3550 + 0x372a8882) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833a36f8 + 0xddb95970));
  uVar6 = _DAT_1833a3398 << 0x3a | _DAT_1833a3398 >> 6;
  _DAT_1833a3408 = (_DAT_1833a3408 ^ uVar6) + 0x7fbbfad7 ^ 0x64a401ddca9df76b;
  _DAT_1833a3670 = (_DAT_1833a3670 * 0x46324a252cfe056d ^ _DAT_1833a3408) + uVar6;
  _DAT_1833a3358 = _DAT_1833a3670 ^ _DAT_1833a3408;
  _DAT_1833a3368 = 0x7fbbfad7;
  _DAT_1833a34c0 = func_0x00018e1a36a0(_DAT_1833a34c0 ^ 0x5bff6899ffbefe);
  uVar6 = _DAT_1833a34c0 << 0x2b | _DAT_1833a34c0 >> 0x15;
  _DAT_1833a36d0 = (_DAT_1833a36d0 ^ uVar6) - 0x6ded474f ^ 0xf573bc2c1d146ef8;
  _DAT_1833a36a8 = (_DAT_1833a36a8 * -0x88ca1d5f7f3fc63 ^ _DAT_1833a36d0) + uVar6;
  _DAT_1833a3630 = _DAT_1833a36a8 ^ _DAT_1833a36d0;
  _DAT_1833a3388 = 0x9212b8b1;
  uVar6 = (~_DAT_1833a35d8 + 0x6ded4750) *
          ((_DAT_1833a34f8 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a34f8 & 0x842223da) * 2);
  uVar6 = (uVar6 | _DAT_1833a3430) + (uVar6 & _DAT_1833a3430);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a3550 = func_0x00018e1a36a0((uVar6 | 0xe9cf6495) + (ulonglong)((uint)uVar6 & 0xe9cf6495))
  ;
  uVar6 = (_DAT_1833a3550 ^ 0x6d7f400000) & 0xffffffffffe00000 ^ 0x6ded474f;
  _DAT_1833a33c8 = _DAT_1833a35e0 ^ uVar6 ^ 0x6ded484e;
  _DAT_1833a3500 = (_DAT_1833a3500 ^ uVar6) + 0x6ded484e ^ 0x2c0a17d9ef3f7c14;
  _DAT_1833a3478 = (_DAT_1833a3478 * 0x1bd2acee99bea99d ^ _DAT_1833a3500) + uVar6;
  _DAT_1833a36b8 = _DAT_1833a3478 ^ _DAT_1833a3500;
  _DAT_1833a3330 = 0x6ded484e;
  uVar6 = (~_DAT_1833a35b0 + 0x9212b8b2) *
          ((_DAT_1833a3610 ^ 0xe9cf6b6b) + (ulonglong)((uint)_DAT_1833a3610 & 0xe9cf6b6b) * 2);
  uVar6 = (uVar6 | _DAT_1833a34f8) + (uVar6 & _DAT_1833a34f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a35a8 = func_0x00018e1a36a0((uVar6 | 0x7bddd3da) + (ulonglong)((uint)uVar6 & 0x7bddd3da))
  ;
  uVar6 = _DAT_1833a35a8 & 0x7fffffffffffffff;
  _DAT_1833a3698 = _DAT_1833a3570 ^ uVar6 ^ 0x1000000ff;
  _DAT_1833a3558 = (_DAT_1833a3558 ^ uVar6) + 0x1000000ff ^ 0x8fc4e40a9cea33d3;
  _DAT_1833a36d8 = (_DAT_1833a36d8 * 0x51ea424ac332d815 ^ _DAT_1833a3558) + uVar6;
  _DAT_1833a3458 = _DAT_1833a36d8 ^ _DAT_1833a3558;
  _DAT_1833a35c8 = 0xff;
  uVar6 = (~_DAT_1833a35b0 + 0xf116ca15) *
          ((_DAT_1833a35d8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1833a35d8 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_1833a3318) + (uVar6 & _DAT_1833a3318);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a36d8 = func_0x00018e1a36a0((uVar6 | 0x7534e931) + (ulonglong)((uint)uVar6 & 0x7534e931))
  ;
  _DAT_1833a34a8 = (_DAT_1833a34a8 ^ _DAT_1833a36d8) - 0xf116ca14 ^ 0x20be897dffcf7037;
  _DAT_1833a33f0 = (_DAT_1833a33f0 * -0x7b11d7616381f329 ^ _DAT_1833a34a8) + _DAT_1833a36d8;
  _DAT_1833a3640 = _DAT_1833a33f0 ^ _DAT_1833a34a8;
  _DAT_1833a35f0 = 0xee935ec;
  uVar6 = (_DAT_1833a3378 ^ _DAT_1824a1e80) + _DAT_1833a3600 + 0x842223da;
  uVar7 = (_DAT_1833a3600 ^ _UNK_1824a1e88) + _DAT_1833a3378 + 0xf116ca14;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833a3378 ^ _DAT_1824a1e80;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3600 ^ _UNK_1824a1e88;
  _DAT_1833a33d0 =
       func_0x00018e1a36a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3378 + 0xf116ca14) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833a3600 + 0x842223da));
  uVar6 = _DAT_1833a33d0 ^ 0xff;
  _DAT_1833a3590 = _DAT_1833a34c8 ^ uVar6 ^ 0xf116cb13;
  _DAT_1833a3448 = (_DAT_1833a3448 ^ uVar6) + 0xf116cb13 ^ 0xd70a83dd3a625277;
  _DAT_1833a34d0 = (_DAT_1833a34d0 * -0x4328a115929132f ^ _DAT_1833a3448) + uVar6;
  _DAT_1833a3618 = _DAT_1833a34d0 ^ _DAT_1833a3448;
  _DAT_1833a3398 = 0xf116cb13;
  uVar6 = (_DAT_1833a3330 ^ _DAT_1824a1e90) + _DAT_1833a3628 + 0x7534e836;
  uVar7 = (_DAT_1833a3628 ^ _UNK_1824a1e98) + _DAT_1833a3330 + 0xee935ec;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833a3330 ^ _DAT_1824a1e90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3628 ^ _UNK_1824a1e98;
  _DAT_1833a3660 =
       func_0x00018e1a36a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3330 + 0xee935ec) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833a3628 + 0x7534e836));
  _DAT_1833a33a8 = _DAT_1833a33e0 ^ _DAT_1833a3318 ^ 0x1000000ff;
  _DAT_1833a3438 = (_DAT_1833a3438 ^ _DAT_1833a3318) + 0x1000000ff ^ 0xfaf15f0589f1ec;
  _DAT_1833a3638 = (_DAT_1833a3638 * 0x570f9ab2d8f1f02d ^ _DAT_1833a3438) + _DAT_1833a3318;
  _DAT_1833a33c8 = _DAT_1833a3638 ^ _DAT_1833a3438;
  _DAT_1833a35f8 = 0xff;
  _DAT_1833a3310 = func_0x00018e1a36a0(_DAT_1833a3478 ^ 0x9600a960008de7);
  _DAT_1833a3520 = _DAT_1833a3520 - 0x6fd4b5c5 ^ 0x674a0f6461cbc7e1;
  _DAT_1833a3658 = _DAT_1833a3448 * -0x1eebee1c9edce0db;
  _DAT_1833a3448 = _DAT_1833a3658 ^ _DAT_1833a3520;
  _DAT_1833a33b0 = _DAT_1833a3600 ^ 0xffffffff902b4a3b;
  _DAT_1833a3518 = 0x902b4a3b;
  uVar6 = (~_DAT_1833a36d8 + 0x6fd4b5c6) *
          ((_DAT_1833a3590 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a3590 & 0x842223da) * 2);
  uVar6 = (uVar6 | _DAT_1833a3628) + (uVar6 & _DAT_1833a3628);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a35f8 = func_0x00018e1a36a0((uVar6 | 0xebf6961f) + (ulonglong)((uint)uVar6 & 0xebf6961f))
  ;
  uVar6 = _DAT_1833a35f8 & 0xffffffffffffffc0;
  _DAT_1833a36a8 = _DAT_1833a3408 ^ uVar6 ^ 0x6fd4b6c4;
  _DAT_1833a36e0 = (_DAT_1833a36e0 ^ uVar6) + 0x6fd4b6c4 ^ 0x8eb58d48c198fe2e;
  _DAT_1833a3558 = (_DAT_1833a3558 * 0x75e805b197375685 ^ _DAT_1833a36e0) + uVar6;
  _DAT_1833a36d0 = _DAT_1833a3558 ^ _DAT_1833a36e0;
  _DAT_1833a33b0 = 0x6fd4b6c4;
  uVar6 = (_DAT_1833a35a0 ^ _DAT_1824a1ea0) + _DAT_1833a3528 + 0xebf695e1;
  uVar7 = (_DAT_1833a3528 ^ _UNK_1824a1ea8) + _DAT_1833a35a0 + 0x902b4a3b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833a35a0 ^ _DAT_1824a1ea0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3528 ^ _UNK_1824a1ea8;
  _DAT_1833a3588 =
       func_0x00018e1a36a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a35a0 + 0x902b4a3b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833a3528 + 0xebf695e1));
  uVar7 = _UNK_1824a1eb8;
  uVar6 = _DAT_1824a1eb0;
  uVar4 = _DAT_1833a3588 * -0x1c26a61b2df55a0d;
  _DAT_1833a3440 = _DAT_1833a3448 ^ uVar4 ^ 0x1000000ff;
  _DAT_1833a3660 = (_DAT_1833a3660 ^ uVar4) + 0x1000000ff ^ 0xd08ce29ddc0cee94;
  _DAT_1833a3320 = (_DAT_1833a3320 * -0x561a675aa6b4afb5 ^ _DAT_1833a3660) + uVar4;
  _DAT_1833a3448 = _DAT_1833a3320 ^ _DAT_1833a3660;
  _DAT_1833a3420 = 0xff;
  uVar4 = (_DAT_1833a34c8 ^ _DAT_1824a1eb0) + _DAT_1833a3518 + 0xfb99d9f2;
  uVar8 = (_DAT_1833a3518 ^ _UNK_1824a1eb8) + _DAT_1833a34c8 + 0x506e24d;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a34c8 ^ _DAT_1824a1eb0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833a3518 ^ _UNK_1824a1eb8;
  _DAT_1833a34f0 =
       func_0x00018e1a36a0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1833a34c8 + 0x506e24d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833a3518 + 0xfb99d9f2));
  uVar4 = (ulonglong)(~(uint)_DAT_1833a34f0 & 0x7fbbfad7) ^ 0x7fbbfad7;
  _DAT_1833a35a0 = _DAT_1833a3498 ^ uVar4 ^ 0x84c2dd24;
  _DAT_1833a34b8 = (_DAT_1833a34b8 ^ uVar4) + 0x84c2dd24 ^ 0x91300a451e5d8ef9;
  _DAT_1833a3468 = (_DAT_1833a3468 * -0x6429cbed477df38b ^ _DAT_1833a34b8) + uVar4;
  _DAT_1833a3428 = _DAT_1833a3468 ^ _DAT_1833a34b8;
  _DAT_1833a3400 = 0x84c2dd24;
  uVar4 = (_DAT_1833a36b0 ^ uVar6) + _DAT_1833a3658 + 0xfb99d9f2;
  uVar8 = (_DAT_1833a3658 ^ uVar7) + _DAT_1833a36b0 + 0x506e24d;
  uVar6 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833a36b0 ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833a3658 ^ uVar7;
  _DAT_1833a3478 =
       func_0x00018e1a36a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a36b0 + 0x506e24d) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833a3658 + 0xfb99d9f2));
  uVar6 = (_DAT_1833a3478 & 0x7fffffffffffff) >> 1 | _DAT_1833a3478 & 0x7fffffffffffff;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1833a3478 & 0x7fffffffffffff;
  _DAT_1833a3650 = (_DAT_1833a3650 ^ uVar6) + 0x7abd189a ^ 0xff21652bb9468b0a;
  _DAT_1833a34f8 = (_DAT_1833a34f8 * -0x399962756067a087 ^ _DAT_1833a3650) + uVar6;
  _DAT_1833a3688 = _DAT_1833a34f8 ^ _DAT_1833a3650;
  _DAT_1833a3398 = 0x7abd189a;
  uVar6 = (~_DAT_1833a3360 + 0x506e24e) *
          ((_DAT_1833a34a8 ^ 0xfb99d9f2) + (ulonglong)((uint)_DAT_1833a34a8 & 0xfb99d9f2) * 2);
  uVar6 = (uVar6 | _DAT_1833a3630) + (uVar6 & _DAT_1833a3630);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a3568 = func_0x00018e1a36a0((uVar6 | 0xfe9f3bbf) + (ulonglong)((uint)uVar6 & 0xfe9f3bbf))
  ;
  _DAT_1833a33c8 = (_DAT_1833a33c8 ^ _DAT_1833a3568 ^ 0x7fbbfad7) + 0x502e245 ^ 0xf0145a4b70250069;
  _DAT_1833a36a8 =
       (_DAT_1833a36a8 * -0x5e267e10a8c00bb ^ _DAT_1833a33c8) + (_DAT_1833a3568 ^ 0x7fbbfad7);
  _DAT_1833a3638 = _DAT_1833a36a8 ^ _DAT_1833a33c8;
  _DAT_1833a33b8 = 0x502e245;
  uVar6 = (~_DAT_1833a35f0 + 0xa05c48b) *
          ((_DAT_1833a36c0 ^ 0xfe9f3bbf) + (ulonglong)((uint)_DAT_1833a36c0 & 0xfe9f3bbf) * 2);
  uVar6 = (uVar6 | _DAT_1833a3378) + (uVar6 & _DAT_1833a3378);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a3308 = func_0x00018e1a36a0((uVar6 | 0xf49aff35) + (ulonglong)((uint)uVar6 & 0xf49aff35))
  ;
  uVar6 = (_DAT_1833a3308 ^ 0x4ce26e26fc72b00) & 0xfffffffffffffff8;
  _DAT_1833a36f0 = _DAT_1833a3468 ^ uVar6 ^ 0x84c2dd24;
  _DAT_1833a33f0 = (_DAT_1833a33f0 ^ uVar6) + 0x84c2dd24 ^ 0x5e7613a5a74565be;
  _DAT_1833a3310 = (_DAT_1833a3310 * -0x36cc2e3f516ae167 ^ _DAT_1833a33f0) + uVar6;
  _DAT_1833a3400 = _DAT_1833a3310 ^ _DAT_1833a33f0;
  _DAT_1833a34e0 = 0x84c2dd24;
  _DAT_1833a34b0 = func_0x00018e1a36a0(_DAT_1833a33c8 + 0x1eff83dcffe1ff ^ 0x2d);
  _DAT_1833a3438 = _DAT_1833a34b0 & 0x7fffffffffffffff;
  _DAT_1833a3518 = _DAT_1833a3518 ^ _DAT_1833a3438 ^ 0x8e1f4810d3a18e7d;
  _DAT_1833a33e0 = (_DAT_1833a33e0 * 0x70367ef01cf84319 ^ _DAT_1833a3518) + _DAT_1833a3438;
  _DAT_1833a3398 = _DAT_1833a33e0 ^ _DAT_1833a3518;
  _DAT_1833a3600 = _DAT_1833a3468;
  _DAT_1833a3378 = 0;
  uVar6 = ((_DAT_1833a3638 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a3638 & 0x842223da) * 2) *
          -_DAT_1833a3380;
  uVar6 = (uVar6 | _DAT_1833a3618) + (uVar6 & _DAT_1833a3618);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a36a0 = func_0x00018e1a36a0((uVar6 | 0x842223da) + (ulonglong)((uint)uVar6 & 0x842223da))
  ;
  uVar6 = _DAT_1833a36a0 ^ 0xff;
  _DAT_1833a34f8 = _DAT_1833a3348 ^ uVar6 ^ 0xff;
  _DAT_1833a34a0 = (_DAT_1833a34a0 ^ uVar6) + 0xff ^ 0x1eb5225e033603f3;
  _DAT_1833a3668 = (_DAT_1833a3668 * -0x56a7cd822c45f24d ^ _DAT_1833a34a0) + uVar6;
  _DAT_1833a3580 = _DAT_1833a3668 ^ _DAT_1833a34a0;
  _DAT_1833a3330 = 0xff;
  uVar6 = (_DAT_1833a3460 ^ _DAT_1824a1ec0) + _DAT_1833a3620 + 0xfb99d9f2;
  uVar7 = (_DAT_1833a3620 ^ _UNK_1824a1ec8) + _DAT_1833a3460 + 0xffffffff;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833a3460 ^ _DAT_1824a1ec0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3620 ^ _UNK_1824a1ec8;
  uVar6 = func_0x00018e1a36a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3460 + 0xffffffff) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833a3620 + 0xfb99d9f2));
  _DAT_1833a33f8 = (_DAT_1833a33f8 ^ uVar6) + 0x80440528 ^ 0x6d58d421aaebef57;
  _DAT_1833a3668 = (_DAT_1833a3668 * 0x39f3d1e09f9a57e1 ^ _DAT_1833a33f8) + uVar6;
  _DAT_1833a3358 = _DAT_1833a3668 ^ _DAT_1833a33f8;
  _DAT_1833a3380 = 0x80440528;
  uVar6 = (_DAT_1833a3458 ^ _DAT_1824a1ed0) + _DAT_1833a3540 + 0xfb99d9f2;
  uVar7 = (_DAT_1833a3540 ^ _UNK_1824a1ed8) + _DAT_1833a3458 + 0x80440528;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833a3458 ^ _DAT_1824a1ed0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833a3540 ^ _UNK_1824a1ed8;
  _DAT_1833a33c8 =
       func_0x00018e1a36a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a3458 + 0x80440528) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833a3540 + 0xfb99d9f2));
  uVar6 = (_DAT_1833a33c8 ^ 0xffffffff) << 0x2b | (_DAT_1833a33c8 ^ 0xffffffff) >> 0x15;
  _DAT_1833a3470 = _DAT_1833a3470 ^ uVar6 ^ 0xeecf5e99f9e30509;
  _DAT_1833a36c0 = (_DAT_1833a36c0 * -0xb873b979668f631 ^ _DAT_1833a3470) + uVar6;
  _DAT_1833a3630 = _DAT_1833a36c0 ^ _DAT_1833a3470;
  _DAT_1833a3390 = 0;
  uVar6 = ((_DAT_1833a3358 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833a3358 & 0x842223da) * 2) *
          -_DAT_1833a34e8;
  uVar6 = (uVar6 | _DAT_1833a3600) + (uVar6 & _DAT_1833a3600);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a3400 = func_0x00018e1a36a0((uVar6 | 0x842223da) + (ulonglong)((uint)uVar6 & 0x842223da))
  ;
  uVar6 = (_DAT_1833a3400 ^ 0xff) << 3 | _DAT_1833a3400 >> 0x3d;
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar6;
  _DAT_1833a3648 = _DAT_1833a3698 ^ uVar6 ^ 0xff;
  _DAT_1833a35b0 = (_DAT_1833a35b0 ^ uVar6) + 0xff ^ 0x4c48feea88b23f9d;
  _DAT_1833a3600 = (_DAT_1833a3600 * -0x1bf97ad1cf85eeed ^ _DAT_1833a35b0) + uVar6;
  _DAT_1833a3580 = _DAT_1833a3600 ^ _DAT_1833a35b0;
  _DAT_1833a35a8 = 0xff;
  _DAT_1833a3638 = func_0x00018e1a36a0(_DAT_1833a34f8 ^ 0x1f0083ca001dd3);
  uVar6 = _DAT_1833a3638 & 0xff;
  _DAT_1833a35f8 = _DAT_1833a35e0 ^ uVar6 ^ 0xff;
  _DAT_1833a36d0 = (_DAT_1833a36d0 ^ uVar6) + 0xff ^ 0x6644554548d5c87a;
  _DAT_1833a3630 = (_DAT_1833a3630 * 0x626d0822a42ea365 ^ _DAT_1833a36d0) + uVar6;
  _DAT_1833a3620 = _DAT_1833a3630 ^ _DAT_1833a36d0;
  _DAT_1833a35e8 = 0xff;
  uVar6 = (~_DAT_1833a3438 + 0x100) *
          ((uVar5 ^ 0x84222325 ^ _DAT_1833a33b0) +
          (ulonglong)((uint)_DAT_1833a33b0 & (uint)(uVar5 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | _DAT_1833a3318) + (uVar6 & _DAT_1833a3318);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1833a33f0 =
       func_0x00018e1a36a0((uVar5 ^ 0x842223da | uVar6) +
                           (ulonglong)((uint)(uVar5 ^ 0x842223da) & (uint)uVar6));
  uVar6 = uVar5 ^ (_DAT_1833a33f0 << 5 | _DAT_1833a33f0 >> 0x3b);
  _DAT_1833a3438 = uVar5 & 0xff;
  _DAT_1833a33a0 = (_DAT_1833a33a0 ^ uVar6) + _DAT_1833a3438 ^ 0x60b7a0ad1c94257f;
  _DAT_1833a33c0 = (_DAT_1833a33c0 * 0x4e463145e4eb31af ^ _DAT_1833a33a0) + uVar6;
  _DAT_1833a3408 = _DAT_1833a33c0 ^ _DAT_1833a33a0;
  uVar5 = _DAT_1833a3438 << 0x20;
  uVar6 = in_stack_00000048 ^ 0x84222325 ^ _DAT_1833a36b0;
  lVar3 = (in_stack_00000048 ^ 0x84222325) + _DAT_1833a3558;
  uVar7 = uVar6 + lVar3;
  uVar4 = (uVar5 ^ _DAT_1833a3558) + _DAT_1833a36b0 + uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5 ^ _DAT_1833a3558;
  _DAT_1833a3498 =
       func_0x00018e1a36a0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833a36b0 + uVar5) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar3);
  _DAT_1833a35b8 = uVar5 | in_stack_00000048;
  _DAT_1833a3558 =
       (_DAT_1833a3558 ^ ~_DAT_1833a3498 & in_stack_00000048) + _DAT_1833a35b8 ^ 0x246977a98e931647;
  _DAT_1833a3370 =
       (_DAT_1833a3370 * 0xfe64ede6943f3d9 ^ _DAT_1833a3558) + (~_DAT_1833a3498 & in_stack_00000048)
  ;
  _DAT_1833a3668 = _DAT_1833a3370 ^ _DAT_1833a3558;
  iVar2 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar2 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xe1a34c1 -----

void FUN_18e1a34c1(void)

{
  return;
}

