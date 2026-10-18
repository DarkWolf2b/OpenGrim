// ===== STITCHED CORPUS: sixtwo.nF =====
// handlers: 6  continuation blocks: 51  unresolved table targets: 0

// ===== Lsixtwo/nF; _6f9294b9bddda6f7488d0a2402f2fd99 ()V (handler @ image 186bfb340, runtime 6fffee80b340) =====

void FUN_186bfb340(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186bfb3a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809e8a50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/nF; cwq ()V (handler @ image 186bfab50, runtime 6fffee80ab50) =====

void FUN_186bfab50(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186bfab70 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809e86f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/nF; cxr (Lsixtwo/iy;)Z (handler @ image 186bfa570, runtime 6fffee80a570) =====

void FUN_186bfa570(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186bfa595 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809e8470 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/nF; cxs ()Lsixtwo/mT; (handler @ image 186bfaeb0, runtime 6fffee80aeb0) =====

void FUN_186bfaeb0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186bfaed0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809e8850 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/nF; cxt ()Lsixtwo/nI; (handler @ image 186bfb0b0, runtime 6fffee80b0b0) =====

void FUN_186bfb0b0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186bfb0d0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809e8930 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/nF; cxu (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 186bfb2b0, runtime 6fffee80b2b0) =====

undefined8 FUN_186bfb2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x6bfa598 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfa598(void)

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


// ----- block @ rva 0x6bfa60b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfa60b(void)

{
  FUN_190dd72e0();
  (*_DAT_1809e85f8)();
  return;
}


// ----- block @ rva 0x6bfa6c8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfa6c8(void)

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


// ----- block @ rva 0x6bfa738 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfa738(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1809e8528)();
  return;
}


// ----- block @ rva 0x6bfa858 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfa858(void)

{
  FUN_190ddfc90();
  (*_DAT_1809e8598)();
  return;
}


// ----- block @ rva 0x6bfa8fe -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfa8fe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1809e86a8)();
  return;
}


// ----- block @ rva 0x6bfa9a5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfa9a5(void)

{
  FUN_190ddfc90();
  (*_DAT_1809e8628)();
  return;
}


// ----- block @ rva 0x6bfaa17 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfaa17(void)

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


// ----- block @ rva 0x6bfaa50 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfaa50(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1809e84f8)();
  return;
}


// ----- block @ rva 0x6bfaa6b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfaa6b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallBooleanMethodA /*0x138*/))();
  (*_DAT_1809e8508)();
  return;
}


// ----- block @ rva 0x6bfaab8 -----

void FUN_186bfaab8(void)

{
  return;
}


// ----- block @ rva 0x6bfab73 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfab73(void)

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


// ----- block @ rva 0x6bfabd1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfabd1(void)

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


// ----- block @ rva 0x6bfabe6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfabe6(void)

{
  FUN_190dd72e0();
  (*_DAT_1809e87b8)();
  return;
}


// ----- block @ rva 0x6bfacad -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfacad(void)

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


// ----- block @ rva 0x6bfacc2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfacc2(void)

{
  FUN_190dd72e0();
  (*_DAT_1809e8768)();
  return;
}


// ----- block @ rva 0x6bfacea -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfacea(void)

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


// ----- block @ rva 0x6bfad0b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfad0b(void)

{
  FUN_190ddfc90();
  (*_DAT_1809e8748)();
  return;
}


// ----- block @ rva 0x6bfad3e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfad3e(void)

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


// ----- block @ rva 0x6bfadca -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfadca(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1809e87c8)();
  return;
}


// ----- block @ rva 0x6bfadea -----

void FUN_186bfadea(void)

{
  return;
}


// ----- block @ rva 0x6bfadf2 -----

void FUN_186bfadf2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6bfaed3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfaed3(void)

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


// ----- block @ rva 0x6bfaf0c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfaf0c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1809e88e8)();
  return;
}


// ----- block @ rva 0x6bfaf46 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfaf46(void)

{
  FUN_190dd72e0();
  (*_DAT_1809e88c8)();
  return;
}


// ----- block @ rva 0x6bfaf6e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfaf6e(void)

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


// ----- block @ rva 0x6bfaf8f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfaf8f(void)

{
  FUN_190dd9df0();
  (*_DAT_1809e8878)();
  return;
}


// ----- block @ rva 0x6bfafc2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfafc2(void)

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


// ----- block @ rva 0x6bfafe6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfafe6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1809e88d8)();
  return;
}


// ----- block @ rva 0x6bfb01e -----

void FUN_186bfb01e(void)

{
  return;
}


// ----- block @ rva 0x6bfb026 -----

void FUN_186bfb026(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6bfb0d3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb0d3(void)

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


// ----- block @ rva 0x6bfb10c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb10c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1809e8968)();
  return;
}


// ----- block @ rva 0x6bfb131 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfb131(void)

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


// ----- block @ rva 0x6bfb146 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb146(void)

{
  FUN_190dd72e0();
  (*_DAT_1809e89c8)();
  return;
}


// ----- block @ rva 0x6bfb1c2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfb1c2(void)

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


// ----- block @ rva 0x6bfb1e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb1e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1809e8978)();
  return;
}


// ----- block @ rva 0x6bfb20d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb20d(void)

{
  (*_DAT_1809e8948)();
  return;
}


// ----- block @ rva 0x6bfb21e -----

void FUN_186bfb21e(void)

{
  return;
}


// ----- block @ rva 0x6bfb226 -----

void FUN_186bfb226(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6bfb3a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb3a8(void)

{
  FUN_190de3220();
  (*_DAT_1809e8b68)();
  return;
}


// ----- block @ rva 0x6bfb3ff -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfb3ff(void)

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


// ----- block @ rva 0x6bfb45b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfb45b(void)

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


// ----- block @ rva 0x6bfb522 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb522(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1809e8bd8)();
  return;
}


// ----- block @ rva 0x6bfb71e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb71e(void)

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


// ----- block @ rva 0x6bfb770 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb770(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallLongMethodA /*0x1b0*/))();
  (*_DAT_1809e8c48)();
  return;
}


// ----- block @ rva 0x6bfb7b0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb7b0(void)

{
  FUN_190dd72e0();
  (*_DAT_1809e8b48)();
  return;
}


// ----- block @ rva 0x6bfb82c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186bfb82c(void)

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


// ----- block @ rva 0x6bfb890 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186bfb890(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1809e8b38)();
  return;
}


// ----- block @ rva 0x6bfb8a2 -----

void FUN_186bfb8a2(void)

{
  return;
}


// ----- block @ rva 0x6bfb8aa -----

void FUN_186bfb8aa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

