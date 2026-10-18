// ===== STITCHED CORPUS: sixtwo.od =====
// handlers: 6  continuation blocks: 81  unresolved table targets: 0

// ===== Lsixtwo/od; _6f0cc1a8d8b765334838eb166c528103 ()V (handler @ image 18658add0, runtime 6fffee19add0) =====

void FUN_18658add0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018658ae35 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088c250 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/od; cBP (Ljava/lang/String;Lsixtwo/mI$uP;)Lsixtwo/od; (handler @ image 1865875b0, runtime 6fffee1975b0) =====

void FUN_1865875b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e9a0,0x4c0)
      /* POOL[0x1e9a0,0x4c0]: k | ()Lsixtwo/nZ; | cAU | ZGgIX | JfvPh | sixtwo/od | cBO | noWxg | dmi | ()Lsixtwo/oa; | cBi | (Ljava/lang/String;)Lsixtwo/mI; | (Lsixtwo/mI;Lsixtwo/mI$uP;)V | QrRAz | Lsixtwo/mI; | aVAQZ | cBT | sixtwo/oe$ve | maxAttempts | initialBackoffMs | fQpLi | cCt | cCu | Fygak | Lsixtwo/oe$ve; | LqiIO | dkQ | ()Ljava/net/http/HttpClient; | send | cBV | (Ljava/lang/String;Ljava/time/Duration;Z)Ljava/net/http/HttpRequest; | cCe | (Ljava/net/http/HttpResponse;)[B | cBW | cBY | (Ljava/lang/String;Ljava/time/Duration;Z)[B | cCf | cBZ | (Ljava/lang/String;Ljava/time/Duration;Z)Ljava/util/concurrent/Complet */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186587674 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088b320 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/od; cBQ (Ljava/lang/String;)Lsixtwo/od; (handler @ image 18658a390, runtime 6fffee19a390) =====

void FUN_18658a390(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018658a3da did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088be20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/od; cBR ()Lsixtwo/mI; (handler @ image 18658a940, runtime 6fffee19a940) =====

void FUN_18658a940(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018658a960 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088c050 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/od; cBS ()Lsixtwo/mI$uP; (handler @ image 18658ab40, runtime 6fffee19ab40) =====

void FUN_18658ab40(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018658ab60 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088c130 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/od; cBT (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18658ad40, runtime 6fffee19ad40) =====

undefined8 FUN_18658ad40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x6587677 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186587677(void)

{
  FUN_190ddce00();
  (*_DAT_18088b3f8)();
  return;
}


// ----- block @ rva 0x6589638 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186589638(void)

{
  longlong *unaff_RSI;
  
  FUN_18436c0d0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088b778)();
  return;
}


// ----- block @ rva 0x65898a3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865898a3(void)

{
  FUN_190dd72e0();
  (*_DAT_18088b728)();
  return;
}


// ----- block @ rva 0x6589a8a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186589a8a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
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


// ----- block @ rva 0x6589d26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186589d26(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_18088b378)();
  return;
}


// ----- block @ rva 0x6589d4a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186589d4a(void)

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


// ----- block @ rva 0x6589d86 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186589d86(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088b7e8)();
  return;
}


// ----- block @ rva 0x6589fbd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186589fbd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_18088b7c8)();
  return;
}


// ----- block @ rva 0x658a08c -----

void FUN_18658a08c(void)

{
  return;
}


// ----- block @ rva 0x658a1c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a1c4(void)

{
  (*_DAT_18088b758)();
  return;
}


// ----- block @ rva 0x658a29b -----

void FUN_18658a29b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x658a3dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a3dd(void)

{
  FUN_190de3220();
  (*_DAT_18088bef8)();
  return;
}


// ----- block @ rva 0x658a5ec -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658a5ec(void)

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


// ----- block @ rva 0x658a62e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a62e(void)

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


// ----- block @ rva 0x658a676 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a676(void)

{
  FUN_190ddce00();
  (*_DAT_18088bf58)();
  return;
}


// ----- block @ rva 0x658a6cd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658a6cd(void)

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


// ----- block @ rva 0x658a7aa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658a7aa(void)

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


// ----- block @ rva 0x658a83d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a83d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (*_DAT_18088be58)();
  return;
}


// ----- block @ rva 0x658a862 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a862(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    (*_DAT_18088be98)();
    return;
  }
  (*_DAT_18088be98)();
  return;
}


// ----- block @ rva 0x658a87d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a87d(void)

{
  (*_DAT_18088be98)();
  return;
}


// ----- block @ rva 0x658a885 -----

void FUN_18658a885(void)

{
  return;
}


// ----- block @ rva 0x658a88d -----

void FUN_18658a88d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x658a963 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a963(void)

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


// ----- block @ rva 0x658a99c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a99c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088c078)();
  return;
}


// ----- block @ rva 0x658a9c1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658a9c1(void)

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


// ----- block @ rva 0x658a9d6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658a9d6(void)

{
  FUN_190dd72e0();
  (*_DAT_18088c0a8)();
  return;
}


// ----- block @ rva 0x658a9fe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658a9fe(void)

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


// ----- block @ rva 0x658aa52 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658aa52(void)

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


// ----- block @ rva 0x658aa76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658aa76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088c0d8)();
  return;
}


// ----- block @ rva 0x658aaae -----

void FUN_18658aaae(void)

{
  return;
}


// ----- block @ rva 0x658aab6 -----

void FUN_18658aab6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x658ab63 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658ab63(void)

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


// ----- block @ rva 0x658ab9c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658ab9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088c168)();
  return;
}


// ----- block @ rva 0x658abc1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658abc1(void)

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


// ----- block @ rva 0x658abd6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658abd6(void)

{
  FUN_190dd72e0();
  (*_DAT_18088c198)();
  return;
}


// ----- block @ rva 0x658abfe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658abfe(void)

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


// ----- block @ rva 0x658ac52 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658ac52(void)

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


// ----- block @ rva 0x658ac76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658ac76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088c1b8)();
  return;
}


// ----- block @ rva 0x658acae -----

void FUN_18658acae(void)

{
  return;
}


// ----- block @ rva 0x658acb6 -----

void FUN_18658acb6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x658ae38 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658ae38(void)

{
  FUN_190de3220();
  (*_DAT_18088c438)();
  return;
}


// ----- block @ rva 0x658af63 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658af63(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x658b048 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b048(void)

{
  FUN_190de3220();
  (*_DAT_18088c308)();
  return;
}


// ----- block @ rva 0x658b09f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b09f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_18088c448)();
  return;
}


// ----- block @ rva 0x658b0e4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b0e4(void)

{
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = 0xba2841fe85d9;
  FUN_190dd72e0();
  (*_DAT_18088c378)();
  return;
}


// ----- block @ rva 0x658b193 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658b193(void)

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


// ----- block @ rva 0x658b2e0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658b2e0(void)

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


// ----- block @ rva 0x658b320 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b320(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088c3b8)();
  return;
}


// ----- block @ rva 0x658b332 -----

void FUN_18658b332(void)

{
  return;
}


// ----- block @ rva 0x658b33a -----

void FUN_18658b33a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x658b46d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b46d(void)

{
  FUN_190de3220();
  (*_DAT_18088c538)();
  return;
}


// ----- block @ rva 0x658b4fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b4fd(void)

{
  FUN_190dd72e0();
  (*_DAT_18088c4b8)();
  return;
}


// ----- block @ rva 0x658b52a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658b52a(void)

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


// ----- block @ rva 0x658b57e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658b57e(void)

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


// ----- block @ rva 0x658b5b8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b5b8(void)

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


// ----- block @ rva 0x658b5f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b5f1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18088c4e8)();
  return;
}


// ----- block @ rva 0x658b60c -----

void FUN_18658b60c(void)

{
  return;
}


// ----- block @ rva 0x658b614 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b614(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_18088c4f8)();
  return;
}


// ----- block @ rva 0x658b636 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b636(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    (*_DAT_18088c4e8)();
    return;
  }
  (*_DAT_18088c4e8)();
  return;
}


// ----- block @ rva 0x658b659 -----

void FUN_18658b659(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x658b7a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658b7a6(void)

{
  FUN_190de3220();
  (*_DAT_18088c9d8)();
  return;
}


// ----- block @ rva 0x658bbcb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658bbcb(void)

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


// ----- block @ rva 0x658bd90 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658bd90(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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


// ----- block @ rva 0x658bfae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658bfae(void)

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


// ----- block @ rva 0x658c0f4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658c0f4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_18088c7a8)();
  return;
}


// ----- block @ rva 0x658c234 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658c234(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088cbc8)();
  return;
}


// ----- block @ rva 0x658c391 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658c391(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088c878)();
  return;
}


// ----- block @ rva 0x658c645 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658c645(void)

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


// ----- block @ rva 0x658caca -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658caca(void)

{
  (*_DAT_18088c8d8)();
  return;
}


// ----- block @ rva 0x658cad2 -----

void FUN_18658cad2(void)

{
  return;
}


// ----- block @ rva 0x658cc66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658cc66(void)

{
  FUN_190de3220();
  (*_DAT_18088d318)();
  return;
}


// ----- block @ rva 0x658ce1d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658ce1d(void)

{
  FUN_190dd72e0();
  (*_DAT_18088d1b8)();
  return;
}


// ----- block @ rva 0x658cf73 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658cf73(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088cef8)();
  return;
}


// ----- block @ rva 0x658d291 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658d291(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d50();
  (*_DAT_18088cdd8)();
  return;
}


// ----- block @ rva 0x658d52f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658d52f(void)

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


// ----- block @ rva 0x658d6d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658d6d0(void)

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


// ----- block @ rva 0x658da27 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658da27(void)

{
  FUN_190dd72e0();
  (*_DAT_18088cf28)();
  return;
}


// ----- block @ rva 0x658dbdc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658dbdc(void)

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


// ----- block @ rva 0x658de43 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658de43(void)

{
  FUN_190dd72e0();
  (*_DAT_18088d098)();
  return;
}


// ----- block @ rva 0x658df8a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658df8a(void)

{
  (*_DAT_18088d358)();
  return;
}


// ----- block @ rva 0x658df92 -----

void FUN_18658df92(void)

{
  return;
}

