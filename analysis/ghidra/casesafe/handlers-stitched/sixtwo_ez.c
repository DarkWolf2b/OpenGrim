// ===== STITCHED CORPUS: sixtwo.ez =====
// handlers: 3  continuation blocks: 22  unresolved table targets: 0

// ===== Lsixtwo/ez; _68031e82d871d8a4d8ec01dfaef42785 ()V (handler @ image 18cd0a470, runtime 6ffff491a470) =====

void FUN_18cd0a470(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cd0a54f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820770c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ez; avk (Lsixtwo/gL$tj;)V (handler @ image 18cd02f60, runtime 6ffff4912f60) =====

void FUN_18cd02f60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xdd00,0x26d)
      /* POOL[0xdd00,0x26d]: _12274 | DjTne | MkRVk | SDMAX | avh | XF | sixtwo/ez | LWMHR | avl | mixin/accessors/ServerboundMovePlayerPacketAccessor | setOnGround | EAkuj | sixtwo/eA | lClZL | avn | field_6250 | field_6212 | oOQKe | GMvGu | sixtwo/eC | ldHfb | avo | method_10214 | uYjwj | method_5724 | (FLnet/minecraft/class_243;)V | method_10216 | method_10215 | XiPDK | Kqwum | avw | avT | xVfhc | field_7478 | method_1033 | LSmOj | raYeS | EKwun | VCxLS | dHwGI | fjDMc | MoNPF | avv | avt | (Lnet/minecraft/class_2828;D)V | avy | mixin/accessors/LocalPlayerAccessor | setY | method_36172 | net/minecraft/class_2828$class_ */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cd0302d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182074c90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ez; avl (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18cd0a3e0, runtime 6ffff491a3e0) =====

undefined8 FUN_18cd0a3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xcd03030 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd03030(void)

{
  FUN_190ddce00();
  (*_DAT_182076168)();
  return;
}


// ----- block @ rva 0xcd06c21 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd06c21(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_182074de8)();
  return;
}


// ----- block @ rva 0xcd06eb1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd06eb1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1820762c8)();
  return;
}


// ----- block @ rva 0xcd071de -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd071de(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182075678)();
  return;
}


// ----- block @ rva 0xcd075ec -----

void FUN_18cd075ec(void)

{
  return;
}


// ----- block @ rva 0xcd0769b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd0769b(void)

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


// ----- block @ rva 0xcd07fb1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd07fb1(void)

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


// ----- block @ rva 0xcd080ab -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd080ab(void)

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


// ----- block @ rva 0xcd08bfa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd08bfa(void)

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


// ----- block @ rva 0xcd08cec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd08cec(void)

{
  FUN_190de3220();
  (*_DAT_1820750f8)();
  return;
}


// ----- block @ rva 0xcd0a28f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd0a28f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182076028)();
  return;
}


// ----- block @ rva 0xcd0a2b3 -----

void FUN_18cd0a2b3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xcd0a552 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd0a552(void)

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


// ----- block @ rva 0xcd0a93c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd0a93c(void)

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


// ----- block @ rva 0xcd0c562 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd0c562(void)

{
  longlong in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcd0c9ff -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd0c9ff(void)

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


// ----- block @ rva 0xcd0cd23 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd0cd23(void)

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


// ----- block @ rva 0xcd0d2fd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cd0d2fd(void)

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


// ----- block @ rva 0xcd0d338 -----

void thunk_FUN_18cd0c63e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xcd0d33d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd0d33d(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000050;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000050 < 0 || iVar1 <= in_stack_00000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcd1479a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd1479a(void)

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


// ----- block @ rva 0xcd147e0 -----

void FUN_18cd147e0(void)

{
  return;
}

