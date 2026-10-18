// ===== STITCHED CORPUS: sixtwo.ec =====
// handlers: 3  continuation blocks: 20  unresolved table targets: 0
// tables not in tables.json: ['0x226fee8', '0x226fef8', '0x226ff08']

// ===== Lsixtwo/ec; _a6b74c1c3e347fb3f64dc8d1948a0595 ()V (handler @ image 18d6e8730, runtime 6ffff52f8730) =====

void FUN_18d6e8730(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d6e880f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18226f0d8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ec; arA (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d6e86a0, runtime 6ffff52f86a0) =====

undefined8 FUN_18d6e86a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/ec; arz (Lsixtwo/gH$th;)V (handler @ image 18d6da310, runtime 6ffff52ea310) =====

void FUN_18d6da310(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc2f1,0x217)
      /* POOL[0xc2f1,0x217]: lBp | WefvZ | PwLkJ | method_7681 | arw | sixtwo/ec | fIYBK | arA | method_18276 | method_31709 | method_36455 | toRadians | esMqW | method_1037 | method_36454 | method_1024 | SRuur | Ljava/util/Set; | sixtwo/ed | PQbtp | sixtwo/iY | method_5836 | bxZ | arD | method_1021 | (D)Lnet/minecraft/class_243; | net/minecraft/class_2350 | field_11036 | Lnet/minecraft/class_2350; | (Lnet/minecraft/class_243;Lnet/minecraft/class_2350;Lnet/minecraft/class_2338;Z)V | method_2896 | (Lnet/minecraft/class_746;Lnet/minecraft/class_1268;Lnet/minecraft/class_3965;)Lnet/minecraft/class_1269; | BpiUS | HfVsU | RqW */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d6da3da did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182269f20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xd6da3dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6da3dd(void)

{
  FUN_190ddce00();
  (*_DAT_18226a3e8)();
  return;
}


// ----- block @ rva 0xd6dde25 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6dde25(void)

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


// ----- block @ rva 0xd6de746 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6de746(void)

{
  (*_DAT_18226e0d8)();
  return;
}


// ----- block @ rva 0xd6dff26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6dff26(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18226d378)();
  return;
}


// ----- block @ rva 0xd6e48a9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6e48a9(void)

{
  (*_DAT_18226dfd8)();
  return;
}


// ----- block @ rva 0xd6e5e3b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6e5e3b(void)

{
  (*_DAT_18226e1e8)();
  return;
}


// ----- block @ rva 0xd6e5fa4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6e5fa4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd6e637f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6e637f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd6e843b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6e843b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_18226df38)();
  return;
}


// ----- block @ rva 0xd6e844a -----

void FUN_18d6e844a(void)

{
  return;
}


// ----- block @ rva 0xd6e8812 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6e8812(void)

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


// ----- block @ rva 0xd6e9e2d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6e9e2d(void)

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


// ----- block @ rva 0xd6ea1ba -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6ea1ba(void)

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


// ----- block @ rva 0xd6ea690 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6ea690(void)

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


// ----- block @ rva 0xd6ea6d9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6ea6d9(void)

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


// ----- block @ rva 0xd6eae8b -----

void thunk_FUN_18d6ea36a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xd6eaf58 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6eaf58(void)

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


// ----- block @ rva 0xd6eb197 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d6eb197(void)

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


// ----- block @ rva 0xd6eeb1a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d6eeb1a(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong in_stack_00000048;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar4 = param_1 << 0x10;
  _DAT_183362c80 = func_0x00018d6f25c0(_DAT_183362b90 + 0x4700460fff65ff ^ 0xa9);
  _DAT_183362bf0 = (_DAT_183362bf0 ^ _DAT_183362c80 ^ 0xba12ea59) + 0xc2887815 ^ 0xa47ecf3007f475c9;
  _DAT_1833627a8 =
       (_DAT_1833627a8 * -0xa08a4fc309070fb ^ _DAT_183362bf0) + (_DAT_183362c80 ^ 0xba12ea59);
  _DAT_183362c30 = _DAT_1833627a8 ^ _DAT_183362bf0;
  _DAT_183362c48 = 0xc2887815;
  _DAT_183362a68 = func_0x00018d6f25c0(_DAT_1833628e0 ^ 0x2ff410d00a039);
  _DAT_183362bc8 = (_DAT_183362bc8 ^ _DAT_183362a68 ^ 0x478d202a) - 0x478d202a ^ 0x707fdc7252615343;
  _DAT_183362a98 =
       (_DAT_183362a98 * -0x1e00acb7cc55b48b ^ _DAT_183362bc8) + (_DAT_183362a68 ^ 0x478d202a);
  _DAT_183362b58 = _DAT_183362a98 ^ _DAT_183362bc8;
  _DAT_183362af0 = 0xb872dfd6;
  _DAT_183362b78 = func_0x00018d6f25c0(_DAT_183362918 ^ 0xff43fff3d700cbe4);
  uVar2 = _DAT_183362b78 ^ 0xf8fefffe;
  uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar2)
           << 7 | _DAT_183362b78 >> 0x39) ^ 0xb872dfd6;
  _DAT_183362c58 = _DAT_1833628c8 ^ uVar2 ^ 0x100ff0000;
  _DAT_183362a90 = (_DAT_183362a90 ^ uVar2) + 0x100ff0000 ^ 0x2b6e488bc042d824;
  _DAT_183362bb0 = (_DAT_183362bb0 * -0x483b934b44c6cbb ^ _DAT_183362a90) + uVar2;
  _DAT_183362ad8 = _DAT_183362bb0 ^ _DAT_183362a90;
  _DAT_183362788 = 0xff0000;
  _DAT_183362838 = func_0x00018d6f25c0(_DAT_183362b28 + 0x590037460094ffU ^ 0x6b);
  _DAT_183362a60 =
       (_DAT_183362a60 ^ _DAT_183362838 & 0xfffffffffffffe00) - 0x4fb55a63 ^ 0x5c4c331f050eb06d;
  _DAT_183362bc8 =
       (_DAT_183362bc8 * 0x1418cd47da0e4701 ^ _DAT_183362a60) +
       (_DAT_183362838 & 0xfffffffffffffe00);
  _DAT_183362cd0 = _DAT_183362bc8 ^ _DAT_183362a60;
  _DAT_183362ba8 = 0xb04aa59d;
  uVar2 = (~_DAT_183362740 + 0x4fb55a64) *
          ((_DAT_183362728 ^ 0x84dd2325) + (ulonglong)((uint)_DAT_183362728 & 0x84dd2325) * 2);
  uVar2 = (uVar2 | _DAT_183362830) + (uVar2 & _DAT_183362830);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183362c80 = func_0x00018d6f25c0((uVar2 | 0xcb687946) + (ulonglong)((uint)uVar2 & 0xcb687946))
  ;
  uVar2 = _DAT_183362c80 >> 1 | _DAT_183362c80;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183362c80) & 0xffffffffffc00000;
  _DAT_183362a10 = _DAT_183362a98 ^ uVar2 ^ 0x50b45a63;
  _DAT_1833627d8 = (_DAT_1833628d0 ^ uVar2) + 0x50b45a63 ^ 0xf70d859de742e25e;
  _DAT_1833628d0 = (_DAT_1833628d0 * 0xd0c18b3d587fff7 ^ _DAT_1833627d8) + uVar2;
  _DAT_1833627d8 = _DAT_1833628d0 ^ _DAT_1833627d8;
  _DAT_183362a30 = 0x50b45a63;
  uVar2 = (~_DAT_183362910 + 0xb04aa59e) *
          ((_DAT_183362970 ^ 0xd4967946) + (ulonglong)((uint)_DAT_183362970 & 0xd4967946) * 2);
  uVar2 = (uVar2 | _DAT_183362b90) + (uVar2 & _DAT_183362b90);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183362c90 = func_0x00018d6f25c0((uVar2 | 0x64dcdcdb) + (ulonglong)((uint)uVar2 & 0x64dcdcdb))
  ;
  uVar2 = _DAT_183362c90 & 0x1fffffffffff;
  _DAT_183362988 = _DAT_183362a38 ^ uVar2 ^ 0x100ff0000;
  _DAT_183362a18 = (_DAT_183362a18 ^ uVar2) + 0x100ff0000 ^ 0x5387a426f9fcd7ca;
  _DAT_183362cb8 = (_DAT_183362cb8 * 0x2a42cd832f2cd307 ^ _DAT_183362a18) + uVar2;
  _DAT_183362940 = _DAT_183362cb8 ^ _DAT_183362a18;
  _DAT_183362790 = _DAT_1833629e0 ^ 0x100ff0000;
  _DAT_183362bc8 = 0xff0000;
  uVar2 = (~_DAT_183362930 + 0x8f1f1d4a) *
          ((_DAT_183362a90 ^ 0x84222325) + (ulonglong)((uint)_DAT_183362a90 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_1833627b0) + (uVar2 & _DAT_1833627b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183362b38 = func_0x00018d6f25c0((uVar2 | 0xb3d3e6c) + (ulonglong)((uint)uVar2 & 0xb3d3e6c));
  _DAT_183362ba0 = (_DAT_183362ba0 ^ _DAT_183362b38) - 0x8f1f1d49 ^ 0x37d9593e3dbc9490;
  _DAT_183362c20 = (_DAT_183362c20 * -0x5a9cc94ec39e5059 ^ _DAT_183362ba0) + _DAT_183362b38;
  _DAT_183362ba0 = _DAT_183362c20 ^ _DAT_183362ba0;
  _DAT_183362cf0 = 0x70e0e2b7;
  uVar2 = (_DAT_183362780 ^ _DAT_18226fee0) + _DAT_183362b80 + 0x143c3e6c;
  uVar5 = (_DAT_183362b80 ^ _UNK_18226fee8) + _DAT_183362780 + 0x70e0e2b7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183362780 ^ _DAT_18226fee0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183362b80 ^ _UNK_18226fee8;
  _DAT_1833627b0 =
       func_0x00018d6f25c0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183362780 + 0x70e0e2b7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183362b80 + 0x143c3e6c));
  uVar5 = _UNK_18226fef8;
  uVar2 = _DAT_18226fef0;
  uVar3 = _DAT_1833627b0 ^ 0x901e1d49;
  _DAT_183362be0 = _DAT_183362a68 ^ uVar3 ^ 0x100ff0000;
  _DAT_183362ad0 = (_DAT_183362ad0 ^ uVar3) + 0x100ff0000 ^ 0xf657f5a896862993;
  _DAT_183362a48 = (_DAT_183362a48 * -0x2c0cbf4ec35d8d37 ^ _DAT_183362ad0) + uVar3;
  _DAT_183362770 = _DAT_183362a48 ^ _DAT_183362ad0;
  _DAT_183362cd8 = 0xff0000;
  uVar3 = (_DAT_1833627a0 ^ _DAT_18226fef0) + _DAT_183362a88 + 0x6b2cc85a;
  uVar9 = (_DAT_183362a88 ^ _UNK_18226fef8) + _DAT_1833627a0 + 0xc2887815;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833627a0 ^ _DAT_18226fef0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183362a88 ^ _UNK_18226fef8;
  _DAT_183362748 =
       func_0x00018d6f25c0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1833627a0 + 0xc2887815) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183362a88 + 0x6b2cc85a));
  uVar3 = (_DAT_183362748 ^ 0xb5a8be85f0000000) & 0xfffffffff8000000;
  _DAT_183362ca8 = _DAT_183362a50 ^ uVar3 ^ 0x1b1976394;
  _DAT_183362968 = (_DAT_183362968 ^ uVar3) + 0x1b1976394 ^ 0x1a3ab2a916240bb5;
  _DAT_183362708 = (_DAT_183362708 * 0x51835298145cc987 ^ _DAT_183362968) + uVar3;
  _DAT_183362988 = _DAT_183362708 ^ _DAT_183362968;
  _DAT_183362b28 = 0xb1976394;
  _DAT_183362a28 = func_0x00018d6f25c0(_DAT_1833629d0 + 0xb000974cffa3ffU ^ 0xd1);
  uVar3 = ((_DAT_183362a28 ^ 0xef8efb7f) << 4 | _DAT_183362a28 >> 0x3c) * 0x25c8b66ddc087623;
  _DAT_183362bb0 = (_DAT_183362bb0 ^ uVar3) + 0x2d86936a ^ 0x908e743042b86f98;
  _DAT_1833629a0 = (_DAT_1833629a0 * 0x35186ff2ede425f7 ^ _DAT_183362bb0) + uVar3;
  _DAT_183362ad0 = _DAT_1833629a0 ^ _DAT_183362bb0;
  _DAT_1833627f8 = 0x2d86936a;
  uVar3 = (_DAT_1833627e8 ^ uVar2) + _DAT_183362ba8 + 0x6b2cc85a;
  uVar9 = (_DAT_183362ba8 ^ uVar5) + _DAT_1833627e8 + 0xc2887815;
  uVar2 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1833627e8 ^ uVar2;
  uVar5 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183362ba8 ^ uVar5;
  _DAT_183362718 =
       func_0x00018d6f25c0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833627e8 + 0xc2887815) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183362ba8 + 0x6b2cc85a));
  uVar2 = _DAT_183362718 << 0x31 | _DAT_183362718 >> 0xf;
  _DAT_183362728 = (_DAT_183362728 ^ uVar2) + 0xc2086815 ^ 0x9402cbb6c7730a72;
  _DAT_183362bb0 = (_DAT_183362bb0 * -0x6eb457f5dcc96385 ^ _DAT_183362728) + uVar2;
  _DAT_183362808 = _DAT_183362bb0 ^ _DAT_183362728;
  _DAT_183362a00 = 0xc2086815;
  _DAT_183362998 = func_0x00018d6f25c0(_DAT_183362988 ^ 0xffe2ff7c22ffdd86);
  _DAT_183362770 = _DAT_183362998 & 0x3ffffffffff;
  _DAT_183362720 = _DAT_183362720 ^ _DAT_183362770 ^ 0xb289bbf28958786f;
  _DAT_183362920 = (_DAT_183362920 * -0x50e67cb319fa0433 ^ _DAT_183362720) + _DAT_183362770;
  _DAT_183362720 = _DAT_183362920 ^ _DAT_183362720;
  _DAT_183362c90 = 0;
  uVar2 = (_DAT_1833629d8 ^ 0x84dd2325) + _DAT_183362b78 + 0x84dd2325;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833629d8 ^ 0x84dd2325;
  uVar5 = ((_DAT_183362b78 + _DAT_1833629d8) * 0x2000 | _DAT_183362b78 + _DAT_1833629d8 >> 0x33) ^
          _DAT_183362b78;
  _DAT_183362b28 =
       func_0x00018d6f25c0((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_1833629d8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183362b78 + 0x84dd2325));
  uVar2 = (ulonglong)(~(((uint)_DAT_183362b28 ^ 0xff0000) * 2) >> 1 & 0xff0000);
  _DAT_183362c78 = _DAT_183362ab8 ^ uVar2 ^ 0xff0000;
  _DAT_183362b60 = (_DAT_183362b60 ^ uVar2) + 0xff0000 ^ 0x409befe4e68d605;
  _DAT_183362748 = (_DAT_183362748 * 0x2c6af007d66eeb9f ^ _DAT_183362b60) + uVar2;
  _DAT_183362b08 = _DAT_183362748 ^ _DAT_183362b60;
  _DAT_1833628f0 = 0xff0000;
  uVar2 = (~_DAT_183362838 + 0x100000000) *
          ((_DAT_183362730 ^ 0x6b2cc85a) + (ulonglong)((uint)_DAT_183362730 & 0x6b2cc85a) * 2);
  uVar2 = (uVar2 | _DAT_1833627b8) + (uVar2 & _DAT_1833627b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183362a38 = func_0x00018d6f25c0((uVar2 | 0x94d337a5) + (ulonglong)((uint)uVar2 & 0x94d337a5))
  ;
  _DAT_183362840 = (_DAT_183362840 ^ _DAT_183362a38) + 0x10f11480 ^ 0xdd9b1ccdd1cede3f;
  _DAT_183362bf8 = (_DAT_183362bf8 * 0x44c153414ccc1755 ^ _DAT_183362840) + _DAT_183362a38;
  _DAT_1833627c8 = _DAT_183362bf8 ^ _DAT_183362840;
  _DAT_183362b80 = _DAT_1833629a8 ^ 0x10f11480;
  _DAT_1833627b8 = 0x10f11480;
  uVar2 = (_DAT_1833627f8 ^ _DAT_18226ff00) + _DAT_1833629c0 + 0x6b2cc85a;
  uVar5 = (_DAT_1833629c0 ^ _UNK_18226ff08) + _DAT_1833627f8 + 0x10f11480;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1833627f8 ^ _DAT_18226ff00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1833629c0 ^ _UNK_18226ff08;
  _DAT_183362ba8 =
       func_0x00018d6f25c0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1833627f8 + 0x10f11480) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1833629c0 + 0x6b2cc85a));
  uVar2 = (_DAT_183362ba8 ^ 0xffffffff) - ((_DAT_183362ba8 ^ 0xffffffff) >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = _DAT_183362ba8 ^ 0x10f11480 ^
          ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  _DAT_183362890 = _DAT_183362890 ^ uVar2 ^ 0xf0980a6715e31620;
  _DAT_183362ca8 = (_DAT_183362ca8 * -0x84c013f24f04849 ^ _DAT_183362890) + uVar2;
  _DAT_183362a10 = _DAT_183362ca8 ^ _DAT_183362890;
  _DAT_183362a60 = 0;
  uVar2 = (~_DAT_183362810 + 0x8f0e036e) *
          ((_DAT_183362808 ^ 0xb2c2048) + (ulonglong)((uint)_DAT_183362808 & 0xb2c2048) * 2);
  uVar2 = (uVar2 | _DAT_183362b78) + (uVar2 & _DAT_183362b78);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183362bd0 = func_0x00018d6f25c0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  uVar5 = _DAT_183362bd0 ^ 0x4ff0a89825f7bc69;
  uVar2 = uVar5 >> 1 | uVar5;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5)
          & 0x3fffffffffffff;
  _DAT_183362a18 = _DAT_183362a18 ^ uVar2 ^ 0xdd7ce035b53f26bb;
  _DAT_183362b88 = (_DAT_183362b88 * 0x6be023ffb34ab8af ^ _DAT_183362a18) + uVar2;
  _DAT_183362978 = _DAT_183362b88 ^ _DAT_183362a18;
  _DAT_183362bf0 = 0;
  _DAT_183362b98 = func_0x00018d6f25c0(_DAT_183362b88 + 0xffe0ff7be4ffd4ff ^ 0xaa);
  uVar2 = _DAT_183362b98 ^ 0xff0000;
  _DAT_183362700 = _DAT_1833628c0 ^ uVar2 ^ 0xff0000;
  _DAT_183362ba0 = (_DAT_183362ba0 ^ uVar2) + 0xff0000 ^ 0x8bf32b55915e70fc;
  _DAT_183362748 = (_DAT_183362748 * 0x30d69f4e2ca61351 ^ _DAT_183362ba0) + uVar2;
  _DAT_183362a78 = _DAT_183362748 ^ _DAT_183362ba0;
  _DAT_183362af0 = 0xff0000;
  uVar2 = (ulonglong)uVar4 ^ 0x84222325;
  uVar5 = uVar2 ^ _DAT_183362a10;
  lVar6 = uVar2 + _DAT_183362ce0;
  uVar2 = uVar5 + lVar6;
  uVar3 = (_DAT_183362ce0 ^ 0xff0000) + _DAT_183362a10 + 0xff0000;
  uVar5 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar5;
  uVar2 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183362ce0 ^ 0xff0000;
  _DAT_1833628d8 =
       func_0x00018d6f25c0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183362a10 + 0xff0000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar2 = (ulonglong)uVar4 * 0xff0000 ^ _DAT_1833628d8 ^ 0xff0000;
  uVar3 = (ulonglong)(uVar4 & 0xff0000);
  _DAT_183362880 = (_DAT_183362880 ^ uVar2) + uVar3 ^ 0x48ae135906d6a558;
  _DAT_183362bf0 = (_DAT_183362bf0 * 0x5fd74d000dd13431 ^ _DAT_183362880) + uVar2;
  _DAT_183362c00 = _DAT_183362bf0 ^ _DAT_183362880;
  auVar7._8_4_ = uVar4 & 0xff0000;
  auVar7._0_8_ = in_stack_00000048 ^ 0x84222325;
  auVar7._12_4_ = 0;
  auVar8 = pshufb(auVar7 ^ _DAT_18226ff10,_DAT_1800170c0);
  uVar5 = auVar8._8_8_ + auVar8._0_8_;
  uVar2 = uVar5 + _DAT_183362880;
  if (auVar8._4_4_ < 0) {
    uVar2 = _DAT_183362c58 ^ uVar5;
  }
  _DAT_183362a20 = uVar3;
  _DAT_1833628d8 = func_0x00018d6f25c0(SUB161(auVar7 ^ _DAT_18226ff10,5) ^ uVar2);
  uVar2 = _DAT_1833628d8 ^ uVar3;
  uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar2;
  uVar2 = uVar2 << 0x37 | uVar2 >> 9;
  _DAT_183362788 = in_stack_00000048 | uVar3;
  _DAT_183362a30 = (_DAT_183362a30 ^ uVar2) + _DAT_183362788 ^ 0xe47245c184bcbd30;
  _DAT_183362c40 = (_DAT_183362c40 * 0x1b0f3abb2bc22f4f ^ _DAT_183362a30) + uVar2;
  _DAT_183362748 = _DAT_183362c40 ^ _DAT_183362a30;
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd6f23de -----

void FUN_18d6f23de(void)

{
  return;
}

