// ===== STITCHED CORPUS: sixtwo.dX =====
// handlers: 3  continuation blocks: 21  unresolved table targets: 0

// ===== Lsixtwo/dX; _dc712199d397ef37fc388e58624e7196 ()V (handler @ image 18d8320b0, runtime 6ffff54420b0) =====

void FUN_18d8320b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d83218f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822a7980 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dX; aqT (Lsixtwo/gH$th;)V (handler @ image 18d82e2c0, runtime 6ffff543e2c0) =====

void FUN_18d82e2c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc072,0x20c)
      /* POOL[0xc072,0x20c]: KEfhe | XK | lrbSD | ZRHhR | aqQ | fkNRQ | sixtwo/dX | ZznWO | aqU | mixin/accessors/MinecraftAccessor | setMissTime | sixtwo/dZ | dxMyh | reyBC | ard | sixtwo/gO$tl | dpo | lCCBd | arb | whhdh | tfzyX | uafIf | UN | hSAvy | getRightClickDelay | vmwmS | setRightClickDelay | AKRql | GXLKq | jJpjG | arf | Wkwey | wJISY | RfFUJ | net/minecraft/class_1811 | MCipD | sixtwo/ea | xPCiw | are | arj | rzTvo | mixin/accessors/MultiPlayerGameModeAccessor | getDestroyDelay | setDestroyDelay | CORiV | ADNhJ | arl | VZXHC | sixtwo/eb | pLesr | hXOHM | arr | ZDMzF | cJT | SuQfI | BALtD | net/minecraft/class_ */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d82e381 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822a6890 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dX; aqU (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d832020, runtime 6ffff5442020) =====

undefined8 FUN_18d832020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xd82e384 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d82e384(void)

{
  FUN_190ddce00();
  (*_DAT_1822a6c18)();
  return;
}


// ----- block @ rva 0xd831109 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d831109(void)

{
  FUN_190de3220();
  (*_DAT_1822a68c8)();
  return;
}


// ----- block @ rva 0xd831139 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d831139(void)

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


// ----- block @ rva 0xd8319e0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d8319e0(void)

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


// ----- block @ rva 0xd831caf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d831caf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_1822a6ad8)();
  return;
}


// ----- block @ rva 0xd831d7a -----

void FUN_18d831d7a(void)

{
  return;
}


// ----- block @ rva 0xd831e37 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d831e37(void)

{
  FUN_190ddfc90();
  (*_DAT_1822a6d88)();
  return;
}


// ----- block @ rva 0xd831e8e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d831e8e(void)

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


// ----- block @ rva 0xd831ee2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d831ee2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1822a6bf8)();
  return;
}


// ----- block @ rva 0xd831f21 -----

void FUN_18d831f21(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xd832192 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d832192(void)

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


// ----- block @ rva 0xd83243c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d83243c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = 0x7c025648a8fd;
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


// ----- block @ rva 0xd8326ab -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d8326ab(void)

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


// ----- block @ rva 0xd833651 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d833651(void)

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


// ----- block @ rva 0xd8341b7 -----

void thunk_FUN_18d83231a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xd834297 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d834297(void)

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


// ----- block @ rva 0xd8342e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d8342e2(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000060;
  undefined1 uStack000000000000009d;
  
  uStack000000000000009d = in_stack_00000060;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd834706 -----

void thunk_FUN_18d833d88(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xd83485e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d83485e(void)

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


// ----- block @ rva 0xd8348a9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d8348a9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000060;
  undefined1 uStack0000000000000096;
  
  uStack0000000000000096 = in_stack_00000060;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
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


// ----- block @ rva 0xd83ba9b -----

void FUN_18d83ba9b(void)

{
  return;
}

