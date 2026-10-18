// ===== STITCHED CORPUS: sixtwo.qo =====
// handlers: 5  continuation blocks: 50  unresolved table targets: 0

// ===== Lsixtwo/qo; data ()Lcom/google/gson/JsonObject; (handler @ image 1854773d0, runtime 6fffed0873d0) =====

void FUN_1854773d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001854773f0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804e80c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/qo; equals (Ljava/lang/Object;)Z (handler @ image 185476070, runtime 6fffed086070) =====

void FUN_185476070(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001854760f9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804e7a70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/qo; hashCode ()I (handler @ image 185474f30, runtime 6fffed084f30) =====

void FUN_185474f30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185474fb3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804e74e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/qo; opcode ()Lsixtwo/qp; (handler @ image 1854771d0, runtime 6fffed0871d0) =====

void FUN_1854771d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001854771f0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804e7fe0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/qo; toString ()Ljava/lang/String; (handler @ image 185473f20, runtime 6fffed083f20) =====

void FUN_185473f20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185473f9a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1804e6fa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x5473f9d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185473f9d(void)

{
  FUN_190de3220();
  (*_DAT_1804e72d8)();
  return;
}


// ----- block @ rva 0x54740ce -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854740ce(void)

{
  FUN_190de3220();
  (*_DAT_1804e7378)();
  return;
}


// ----- block @ rva 0x5474125 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185474125(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1804e7408)();
  return;
}


// ----- block @ rva 0x547421a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547421a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d50();
  (*_DAT_1804e7078)();
  return;
}


// ----- block @ rva 0x547443f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547443f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1804e7128)();
  return;
}


// ----- block @ rva 0x5474801 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185474801(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_1804e7058)();
  return;
}


// ----- block @ rva 0x5474a56 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185474a56(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1804e7198)();
  return;
}


// ----- block @ rva 0x5474caa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185474caa(void)

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


// ----- block @ rva 0x5474e31 -----

void FUN_185474e31(void)

{
  return;
}


// ----- block @ rva 0x5474e45 -----

void FUN_185474e45(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5474fb6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185474fb6(void)

{
  FUN_190de3220();
  (*_DAT_1804e77f8)();
  return;
}


// ----- block @ rva 0x54750e7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854750e7(void)

{
  FUN_190de3220();
  (*_DAT_1804e7668)();
  return;
}


// ----- block @ rva 0x54751ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854751ec(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1804e7728)();
  return;
}


// ----- block @ rva 0x5475769 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185475769(void)

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


// ----- block @ rva 0x54757d3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854757d3(void)

{
  FUN_190ddce00();
  (*_DAT_1804e7878)();
  return;
}


// ----- block @ rva 0x547584b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547584b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1804e75f8)();
  return;
}


// ----- block @ rva 0x54758ca -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854758ca(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
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


// ----- block @ rva 0x5475e37 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185475e37(void)

{
  FUN_190dd72e0();
  (*_DAT_1804e7678)();
  return;
}


// ----- block @ rva 0x5475e80 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185475e80(void)

{
  FUN_190de3220();
  (*_DAT_1804e7588)();
  return;
}


// ----- block @ rva 0x5475f41 -----

void FUN_185475f41(void)

{
  return;
}


// ----- block @ rva 0x54760fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854760fc(void)

{
  FUN_190de3220();
  (*_DAT_1804e7c18)();
  return;
}


// ----- block @ rva 0x5476153 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185476153(void)

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


// ----- block @ rva 0x5476867 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185476867(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d80();
  (*_DAT_1804e7aa8)();
  return;
}


// ----- block @ rva 0x54768b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854768b1(void)

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


// ----- block @ rva 0x5476993 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185476993(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1804e7d08)();
  return;
}


// ----- block @ rva 0x5476a12 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185476a12(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
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


// ----- block @ rva 0x5476aae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185476aae(void)

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


// ----- block @ rva 0x5476c38 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185476c38(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1804e7d58)();
  return;
}


// ----- block @ rva 0x5476f9d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185476f9d(void)

{
  FUN_190dd72e0();
  (*_DAT_1804e7da8)();
  return;
}


// ----- block @ rva 0x54770a7 -----

void FUN_1854770a7(void)

{
  return;
}


// ----- block @ rva 0x54770bb -----

void FUN_1854770bb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x54771f3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854771f3(void)

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


// ----- block @ rva 0x547722c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547722c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1804e8008)();
  return;
}


// ----- block @ rva 0x5477251 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185477251(void)

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


// ----- block @ rva 0x5477266 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185477266(void)

{
  FUN_190dd72e0();
  (*_DAT_1804e8038)();
  return;
}


// ----- block @ rva 0x547728e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547728e(void)

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


// ----- block @ rva 0x54772af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854772af(void)

{
  FUN_190dd9df0();
  (*_DAT_1804e8068)();
  return;
}


// ----- block @ rva 0x547732d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547732d(void)

{
  (*_DAT_1804e8018)();
  return;
}


// ----- block @ rva 0x547733e -----

void FUN_18547733e(void)

{
  return;
}


// ----- block @ rva 0x5477346 -----

void FUN_185477346(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x54773f3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854773f3(void)

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


// ----- block @ rva 0x547742c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547742c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1804e8148)();
  return;
}


// ----- block @ rva 0x5477466 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185477466(void)

{
  FUN_190dd72e0();
  (*_DAT_1804e8128)();
  return;
}


// ----- block @ rva 0x547748e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18547748e(void)

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


// ----- block @ rva 0x54774af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854774af(void)

{
  FUN_190dd9df0();
  (*_DAT_1804e80e8)();
  return;
}


// ----- block @ rva 0x54774e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1854774e2(void)

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


// ----- block @ rva 0x5477506 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185477506(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1804e8118)();
  return;
}


// ----- block @ rva 0x547752d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18547752d(void)

{
  (*_DAT_1804e8158)();
  return;
}


// ----- block @ rva 0x547753e -----

void FUN_18547753e(void)

{
  return;
}


// ----- block @ rva 0x5477546 -----

void FUN_185477546(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

