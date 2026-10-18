// ===== STITCHED CORPUS: sixtwo.oe$ve =====
// handlers: 5  continuation blocks: 47  unresolved table targets: 0

// ===== Lsixtwo/oe$ve; equals (Ljava/lang/Object;)Z (handler @ image 186585f30, runtime 6fffee195f30) =====

void FUN_186585f30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186585fb9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088ab80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/oe$ve; hashCode ()I (handler @ image 186584cd0, runtime 6fffee194cd0) =====

void FUN_186584cd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186584d53 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088a590 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/oe$ve; initialBackoffMs ()J (handler @ image 1865873b0, runtime 6fffee1973b0) =====

void FUN_1865873b0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001865873d0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088b230 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/oe$ve; maxAttempts ()I (handler @ image 1865871b0, runtime 6fffee1971b0) =====

void FUN_1865871b0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001865871d0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18088b150 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/oe$ve; toString ()Ljava/lang/String; (handler @ image 186583ba0, runtime 6fffee193ba0) =====

void FUN_186583ba0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186583c23 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180889ff0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x6583c26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186583c26(void)

{
  FUN_190de3220();
  (*_DAT_18088a4a8)();
  return;
}


// ----- block @ rva 0x6583cb1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186583cb1(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088a4b8)();
  return;
}


// ----- block @ rva 0x6583d57 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186583d57(void)

{
  FUN_190de3220();
  (*_DAT_18088a358)();
  return;
}


// ----- block @ rva 0x6584031 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186584031(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088a238)();
  return;
}


// ----- block @ rva 0x658407d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658407d(void)

{
  FUN_190dd72e0();
  (*_DAT_18088a548)();
  return;
}


// ----- block @ rva 0x658412f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658412f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_18088a3a8)();
  return;
}


// ----- block @ rva 0x6584950 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186584950(void)

{
  FUN_190ddfc90();
  (*_DAT_18088a218)();
  return;
}


// ----- block @ rva 0x6584a79 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186584a79(void)

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


// ----- block @ rva 0x6584bdc -----

void FUN_186584bdc(void)

{
  return;
}


// ----- block @ rva 0x6584d56 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186584d56(void)

{
  FUN_190de3220();
  (*_DAT_18088aab8)();
  return;
}


// ----- block @ rva 0x6584f06 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186584f06(void)

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


// ----- block @ rva 0x658531a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658531a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_18088a928)();
  return;
}


// ----- block @ rva 0x6585486 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186585486(void)

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


// ----- block @ rva 0x65854f3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865854f3(void)

{
  FUN_190dd72e0();
  (*_DAT_18088a758)();
  return;
}


// ----- block @ rva 0x658553f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658553f(void)

{
  FUN_190dd72e0();
  (*_DAT_18088aaa8)();
  return;
}


// ----- block @ rva 0x6585828 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186585828(void)

{
  FUN_190dd72e0();
  (*_DAT_18088a6a8)();
  return;
}


// ----- block @ rva 0x6585af0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186585af0(void)

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


// ----- block @ rva 0x6585cf9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186585cf9(void)

{
  FUN_190dd72e0();
  (*_DAT_18088a8b8)();
  return;
}


// ----- block @ rva 0x6585e03 -----

void FUN_186585e03(void)

{
  return;
}


// ----- block @ rva 0x6585fbc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186585fbc(void)

{
  FUN_190de3220();
  (*_DAT_18088ace8)();
  return;
}


// ----- block @ rva 0x65860c7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1865860c7(void)

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


// ----- block @ rva 0x6586285 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186586285(void)

{
  FUN_190dd72e0();
  (*_DAT_18088af58)();
  return;
}


// ----- block @ rva 0x65864a0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1865864a0(void)

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


// ----- block @ rva 0x6586e0b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186586e0b(void)

{
  FUN_190dd72e0();
  (*_DAT_18088ae58)();
  return;
}


// ----- block @ rva 0x6586ef0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186586ef0(void)

{
  FUN_190ddfc90();
  (*_DAT_18088af08)();
  return;
}


// ----- block @ rva 0x6586f78 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186586f78(void)

{
  FUN_190dd72e0();
  (*_DAT_18088aea8)();
  return;
}


// ----- block @ rva 0x6586ff4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186586ff4(void)

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


// ----- block @ rva 0x6587080 -----

void FUN_186587080(void)

{
  return;
}


// ----- block @ rva 0x6587094 -----

void FUN_186587094(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x65871d3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865871d3(void)

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


// ----- block @ rva 0x658720c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658720c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088b178)();
  return;
}


// ----- block @ rva 0x6587231 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186587231(void)

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


// ----- block @ rva 0x6587246 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186587246(void)

{
  FUN_190dd72e0();
  (*_DAT_18088b168)();
  return;
}


// ----- block @ rva 0x658726e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18658726e(void)

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


// ----- block @ rva 0x65872e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865872e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088b1a8)();
  return;
}


// ----- block @ rva 0x658730c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658730c(void)

{
  (*_DAT_18088b1c8)();
  return;
}


// ----- block @ rva 0x658731c -----

void FUN_18658731c(void)

{
  return;
}


// ----- block @ rva 0x6587324 -----

void FUN_186587324(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x65873d3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865873d3(void)

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


// ----- block @ rva 0x6587431 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186587431(void)

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


// ----- block @ rva 0x6587446 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186587446(void)

{
  FUN_190dd72e0();
  (*_DAT_18088b2b8)();
  return;
}


// ----- block @ rva 0x658748f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658748f(void)

{
  FUN_190dd9df0();
  (*_DAT_18088b248)();
  return;
}


// ----- block @ rva 0x65874c2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1865874c2(void)

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


// ----- block @ rva 0x65874e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1865874e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetLongField /*0x328*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18088b278)();
  return;
}


// ----- block @ rva 0x658750d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18658750d(void)

{
  (*_DAT_18088b288)();
  return;
}


// ----- block @ rva 0x658751e -----

void FUN_18658751e(void)

{
  return;
}


// ----- block @ rva 0x6587526 -----

void FUN_186587526(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

