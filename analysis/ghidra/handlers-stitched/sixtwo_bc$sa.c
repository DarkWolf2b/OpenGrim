// ===== STITCHED CORPUS: sixtwo.bc$sa =====
// handlers: 3  continuation blocks: 22  unresolved table targets: 0

// ===== Lsixtwo/bc$sa; _7df91a5543007a73dde1415504f358fe ()V (handler @ image 18f2a0ac0, runtime 6ffff6eb0ac0) =====

void FUN_18f2a0ac0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f2a0b25 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182885130 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bc$sa; dnd ()Z (handler @ image 18f29cf20, runtime 6ffff6eacf20) =====

void FUN_18f29cf20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6bb7,0x130)
      /* POOL[0x6bb7,0x130]: ntgy | SBrVn | EUMNl | qBphK | vsPex | Bo | sixtwo/bc$sa | JMlDh | YauLb | dne | WygRB | sixtwo/bc$sb | ENaeo | fJevp | Lsixtwo/bc; | sixtwo/bc | BC | (Lsixtwo/bc;)Lsixtwo/rk; | bjc | dnh | dnf | gXowZ | BD | (Lsixtwo/bc;)F | hhZmz | jLLoD | HukvJ | [Lsixtwo/bc$sb; | whbju | BE | bAjVG | sixtwo/bf | sixtwo/bj | aupXC | dng | BF | CE | ()Lsixtwo/mE; | sixtwo/mE | cnD | sixtwo/aD | get */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018f29cfe1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182883fe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bc$sa; dne (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18f2a0a30, runtime 6ffff6eb0a30) =====

undefined8 FUN_18f2a0a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xf29cfe4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f29cfe4(void)

{
  FUN_190ddce00();
  (*_DAT_1828844c8)();
  return;
}


// ----- block @ rva 0xf29f7e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f29f7e6(void)

{
  FUN_190de3220();
  (*_DAT_182884168)();
  return;
}


// ----- block @ rva 0xf29f83d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f29f83d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1847d4a10();
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


// ----- block @ rva 0xf29f8de -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f29f8de(void)

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


// ----- block @ rva 0xf29fb5e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f29fb5e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (*_DAT_1828842d8)();
  return;
}


// ----- block @ rva 0xf29fc28 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f29fc28(void)

{
  (*_DAT_182884458)();
  return;
}


// ----- block @ rva 0xf29fe80 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f29fe80(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182884698)();
  return;
}


// ----- block @ rva 0xf29fedb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f29fedb(void)

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


// ----- block @ rva 0xf2a0279 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2a0279(void)

{
  (*_DAT_182884618)();
  return;
}


// ----- block @ rva 0xf2a0703 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2a0703(void)

{
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000058;
  
  uStack0000000000000030 = in_stack_00000058;
  (*_DAT_182884688)();
  return;
}


// ----- block @ rva 0xf2a0825 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2a0825(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_182884398)();
  return;
}


// ----- block @ rva 0xf2a08f4 -----

void FUN_18f2a08f4(void)

{
  return;
}


// ----- block @ rva 0xf2a0960 -----

void FUN_18f2a0960(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xf2a0b28 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2a0b28(void)

{
  FUN_190de3220();
  (*_DAT_1828851b8)();
  return;
}


// ----- block @ rva 0xf2a0cef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2a0cef(void)

{
  FUN_190dd72e0();
  (*_DAT_1828851e8)();
  return;
}


// ----- block @ rva 0xf2a0e83 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2a0e83(void)

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


// ----- block @ rva 0xf2a0ed7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f2a0ed7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182885248)();
  return;
}


// ----- block @ rva 0xf2a0f0f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2a0f0f(void)

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


// ----- block @ rva 0xf2a0f58 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2a0f58(void)

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


// ----- block @ rva 0xf2a0fd0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18f2a0fd0(void)

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


// ----- block @ rva 0xf2a1022 -----

void FUN_18f2a1022(void)

{
  return;
}


// ----- block @ rva 0xf2a102a -----

void FUN_18f2a102a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

