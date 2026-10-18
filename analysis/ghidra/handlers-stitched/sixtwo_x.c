// ===== STITCHED CORPUS: sixtwo.x =====
// handlers: 6  continuation blocks: 85  unresolved table targets: 0

// ===== Lsixtwo/x; _896e74b572e458f003eec0d181268b44 ()V (handler @ image 1907d0fe0, runtime 6ffff83e0fe0) =====

void FUN_1907d0fe0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001907d1045 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d5ef90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/x; bV (Lsixtwo/lC;)V (handler @ image 1907c7460, runtime 6ffff83d7460) =====

void FUN_1907c7460(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001907c74a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d5ba50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/x; dY ()V (handler @ image 1907c6fd0, runtime 6ffff83d6fd0) =====

void FUN_1907c6fd0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001907c6ff0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d5b860 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/x; dk (DDLsixtwo/mA;)Z (handler @ image 1907c8160, runtime 6ffff83d8160) =====

void FUN_1907c8160(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2dbc,0x9b)
      /* POOL[0x2dbc,0x9b]: md | (Lsixtwo/mG;)Lsixtwo/ad; | lF | sixtwo/x | RcSfu | eM | cuxpa | sixtwo/cz | cel | (Lsixtwo/lf;FFF)V | sixtwo/H | (FFFLsixtwo/cz;)V | bSbrG | Lsixtwo/aj; | sixtwo/cF | sixtwo/L | (FF */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001907c8230 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d5bf70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/x; dn ()F (handler @ image 1907d0d30, runtime 6ffff83e0d30) =====

void FUN_1907d0d30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001907d0d55 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d5ee70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/x; eM (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1907d0f50, runtime 6ffff83e0f50) =====

undefined8 FUN_1907d0f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x107c6ff3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c6ff3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5b908)();
  return;
}


// ----- block @ rva 0x107c7071 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c7071(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b8c8)();
  return;
}


// ----- block @ rva 0x107c7099 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c7099(void)

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


// ----- block @ rva 0x107c70ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c70ba(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5b998)();
  return;
}


// ----- block @ rva 0x107c71a1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c71a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5b9c8)();
  return;
}


// ----- block @ rva 0x107c71db -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c71db(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5ba08)();
  return;
}


// ----- block @ rva 0x107c7273 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c7273(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5b898)();
  return;
}


// ----- block @ rva 0x107c729b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c729b(void)

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


// ----- block @ rva 0x107c72bc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c72bc(void)

{
  FUN_190ddfc90();
  (*_DAT_182d5b988)();
  return;
}


// ----- block @ rva 0x107c73a0 -----

void FUN_1907c73a0(void)

{
  return;
}


// ----- block @ rva 0x107c73a8 -----

void FUN_1907c73a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107c74a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c74a8(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5bdd8)();
  return;
}


// ----- block @ rva 0x107c7526 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c7526(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5bce8)();
  return;
}


// ----- block @ rva 0x107c775f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c775f(void)

{
  FUN_190ddfc90();
  (*_DAT_182d5bb98)();
  return;
}


// ----- block @ rva 0x107c784c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c784c(void)

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


// ----- block @ rva 0x107c78e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c78e2(void)

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


// ----- block @ rva 0x107c7b1c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c7b1c(void)

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


// ----- block @ rva 0x107c7e36 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c7e36(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5bab8)();
  return;
}


// ----- block @ rva 0x107c7e63 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907c7e63(void)

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


// ----- block @ rva 0x107c8065 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c8065(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5be68)();
  return;
}


// ----- block @ rva 0x107c8089 -----

void FUN_1907c8089(void)

{
  return;
}


// ----- block @ rva 0x107c80a5 -----

void FUN_1907c80a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107c8233 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907c8233(void)

{
  FUN_190ddce00();
  (*_DAT_182d5cd68)();
  return;
}


// ----- block @ rva 0x107cbd2f -----

void FUN_1907cbd2f(void)

{
  return;
}


// ----- block @ rva 0x107cbf81 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907cbf81(undefined8 param_1)

{
  undefined8 in_stack_00000078;
  
  (*_DAT_182d5c4a8)(param_1,in_stack_00000078);
  return;
}


// ----- block @ rva 0x107cc04a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907cc04a(void)

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


// ----- block @ rva 0x107cc1a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907cc1a2(void)

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


// ----- block @ rva 0x107cca96 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907cca96(void)

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


// ----- block @ rva 0x107ce881 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907ce881(void)

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


// ----- block @ rva 0x107ce9d3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907ce9d3(void)

{
  (*_DAT_182d5df48)();
  return;
}


// ----- block @ rva 0x107cf8a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907cf8a2(void)

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


// ----- block @ rva 0x107cfa4b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907cfa4b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182d5c248)();
  return;
}


// ----- block @ rva 0x107d0481 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d0481(void)

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


// ----- block @ rva 0x107d04d6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d04d6(void)

{
  (*_DAT_182d5dd68)();
  return;
}


// ----- block @ rva 0x107d0c58 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d0c58(void)

{
  (*_DAT_182d5dc08)();
  return;
}


// ----- block @ rva 0x107d0c63 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d0c63(void)

{
  (*_DAT_182d5dc18)();
  return;
}


// ----- block @ rva 0x107d0c6e -----

void FUN_1907d0c6e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107d0d58 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d0d58(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x107d0d94 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d0d94(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5ee98)();
  return;
}


// ----- block @ rva 0x107d0db9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d0db9(void)

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


// ----- block @ rva 0x107d0dd1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d0dd1(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5eee8)();
  return;
}


// ----- block @ rva 0x107d0df9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d0df9(void)

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


// ----- block @ rva 0x107d0e1d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d0e1d(void)

{
  FUN_190dd9df0();
  (*_DAT_182d5eef8)();
  return;
}


// ----- block @ rva 0x107d0e77 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d0e77(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5ef08)();
  return;
}


// ----- block @ rva 0x107d0eb6 -----

void FUN_1907d0eb6(void)

{
  return;
}


// ----- block @ rva 0x107d0ec3 -----

void FUN_1907d0ec3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107d1048 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d1048(void)

{
  FUN_190de3220();
  (*_DAT_182d5f188)();
  return;
}


// ----- block @ rva 0x107d10d3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d10d3(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5f098)();
  return;
}


// ----- block @ rva 0x107d1237 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d1237(void)

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


// ----- block @ rva 0x107d128b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d128b(void)

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


// ----- block @ rva 0x107d12af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d12af(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_182d5f058)();
  return;
}


// ----- block @ rva 0x107d132b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d132b(void)

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


// ----- block @ rva 0x107d142f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d142f(void)

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


// ----- block @ rva 0x107d1542 -----

void FUN_1907d1542(void)

{
  return;
}


// ----- block @ rva 0x107d154a -----

void FUN_1907d154a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x107d1674 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d1674(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5f468)();
  return;
}


// ----- block @ rva 0x107d16f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d16f2(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5f438)();
  return;
}


// ----- block @ rva 0x107d1975 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d1975(void)

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


// ----- block @ rva 0x107d1d36 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d1d36(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5f7b8)();
  return;
}


// ----- block @ rva 0x107d1db3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d1db3(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5f4e8)();
  return;
}


// ----- block @ rva 0x107d2175 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d2175(void)

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


// ----- block @ rva 0x107d21cb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d21cb(void)

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


// ----- block @ rva 0x107d273a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d273a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  (*_DAT_182d5f3f8)();
  return;
}


// ----- block @ rva 0x107d2775 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d2775(void)

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


// ----- block @ rva 0x107d27cb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d27cb(void)

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


// ----- block @ rva 0x107d2878 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d2878(void)

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


// ----- block @ rva 0x107d28ca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d28ca(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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


// ----- block @ rva 0x107d2fff -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d2fff(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_182d5fc38)();
  return;
}


// ----- block @ rva 0x107d30fd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d30fd(void)

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


// ----- block @ rva 0x107d314f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d314f(void)

{
  longlong *unaff_RSI;
  
  FUN_184117db0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d5faa8)();
  return;
}


// ----- block @ rva 0x107d3171 -----

void FUN_1907d3171(void)

{
  return;
}


// ----- block @ rva 0x107d32ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d32ef(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182d60698)();
  return;
}


// ----- block @ rva 0x107d336d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d336d(void)

{
  FUN_190dd72e0();
  (*_DAT_182d600b8)();
  return;
}


// ----- block @ rva 0x107d38db -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d38db(void)

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


// ----- block @ rva 0x107d392d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d392d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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


// ----- block @ rva 0x107d488e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d488e(void)

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


// ----- block @ rva 0x107d48e0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d48e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_182d5ff28)();
  return;
}


// ----- block @ rva 0x107d4b85 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d4b85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (*_DAT_182d609e8)();
  return;
}


// ----- block @ rva 0x107d4eaa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d4eaa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182d60138)();
  return;
}


// ----- block @ rva 0x107d4fa5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d4fa5(void)

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


// ----- block @ rva 0x107d5289 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d5289(void)

{
  FUN_190dd72e0();
  (*_DAT_182d5fdd8)();
  return;
}


// ----- block @ rva 0x107d52b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1907d52b1(void)

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


// ----- block @ rva 0x107d56db -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1907d56db(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_182d60ad8)();
  return;
}


// ----- block @ rva 0x107d570a -----

void FUN_1907d570a(void)

{
  return;
}


// ----- block @ rva 0x107d5734 -----

void FUN_1907d5734(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

