// ===== STITCHED CORPUS: sixtwo.ia$tF =====
// handlers: 5  continuation blocks: 78  unresolved table targets: 0

// ===== Lsixtwo/ia$tF; command ()Lsixtwo/hZ; (handler @ image 1897f34a0, runtime 6ffff14034a0) =====

void FUN_1897f34a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001897f34c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813fda10 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ia$tF; equals (Ljava/lang/Object;)Z (handler @ image 1897f22b0, runtime 6ffff14022b0) =====

void FUN_1897f22b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001897f2339 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813fd470 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ia$tF; hashCode ()I (handler @ image 1897f1130, runtime 6ffff1401130) =====

void FUN_1897f1130(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001897f11b3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813fced0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ia$tF; index ()I (handler @ image 1897f36a0, runtime 6ffff14036a0) =====

void FUN_1897f36a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001897f36c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813fdaf0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ia$tF; toString ()Ljava/lang/String; (handler @ image 1897f0090, runtime 6ffff1400090) =====

void FUN_1897f0090(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001897f0116 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813fc960 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x97f0119 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f0119(void)

{
  FUN_190de3220();
  (*_DAT_1813fcda8)();
  return;
}


// ----- block @ rva 0x97f02a1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f02a1(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813fc988)();
  return;
}


// ----- block @ rva 0x97f02d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f02d3(void)

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


// ----- block @ rva 0x97f0765 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f0765(void)

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


// ----- block @ rva 0x97f07e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f07e2(void)

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


// ----- block @ rva 0x97f0825 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f0825(void)

{
  FUN_190dd72e0();
  (*_DAT_1813fcdd8)();
  return;
}


// ----- block @ rva 0x97f0c60 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f0c60(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1813fc998)();
  return;
}


// ----- block @ rva 0x97f0c95 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f0c95(void)

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


// ----- block @ rva 0x97f103b -----

void FUN_1897f103b(void)

{
  return;
}


// ----- block @ rva 0x97f104f -----

void FUN_1897f104f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x97f11b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f11b6(void)

{
  FUN_190de3220();
  (*_DAT_1813fd398)();
  return;
}


// ----- block @ rva 0x97f1241 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f1241(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813fcf78)();
  return;
}


// ----- block @ rva 0x97f14c7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f14c7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
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


// ----- block @ rva 0x97f157c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f157c(void)

{
  FUN_190dd72e0();
  (*_DAT_1813fd0a8)();
  return;
}


// ----- block @ rva 0x97f15c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f15c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  FUN_190dd72e0();
  (*_DAT_1813fcfc8)();
  return;
}


// ----- block @ rva 0x97f162e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f162e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_1813fd248)();
  return;
}


// ----- block @ rva 0x97f1bfa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f1bfa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1813fd218)();
  return;
}


// ----- block @ rva 0x97f1d24 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f1d24(void)

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


// ----- block @ rva 0x97f2189 -----

void FUN_1897f2189(void)

{
  return;
}


// ----- block @ rva 0x97f219d -----

void FUN_1897f219d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x97f233c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f233c(void)

{
  FUN_190de3220();
  (*_DAT_1813fd678)();
  return;
}


// ----- block @ rva 0x97f246d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f246d(void)

{
  FUN_190de3220();
  (*_DAT_1813fd9b8)();
  return;
}


// ----- block @ rva 0x97f25f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f25f0(void)

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


// ----- block @ rva 0x97f274d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f274d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  FUN_190dd72e0();
  (*_DAT_1813fd908)();
  return;
}


// ----- block @ rva 0x97f2812 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f2812(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_1813fd8c8)();
  return;
}


// ----- block @ rva 0x97f2c58 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f2c58(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1813fd5b8)();
  return;
}


// ----- block @ rva 0x97f3071 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3071(void)

{
  FUN_190ddfc90();
  (*_DAT_1813fd758)();
  return;
}


// ----- block @ rva 0x97f31df -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f31df(void)

{
  FUN_190ddfc90();
  (*_DAT_1813fd4f8)();
  return;
}


// ----- block @ rva 0x97f336f -----

void FUN_1897f336f(void)

{
  return;
}


// ----- block @ rva 0x97f34c3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f34c3(void)

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


// ----- block @ rva 0x97f34fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f34fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813fda48)();
  return;
}


// ----- block @ rva 0x97f3521 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f3521(void)

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


// ----- block @ rva 0x97f3536 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3536(void)

{
  FUN_190dd72e0();
  (*_DAT_1813fdaa8)();
  return;
}


// ----- block @ rva 0x97f35b2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f35b2(void)

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


// ----- block @ rva 0x97f35d6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f35d6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813fda58)();
  return;
}


// ----- block @ rva 0x97f35fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f35fd(void)

{
  (*_DAT_1813fda38)();
  return;
}


// ----- block @ rva 0x97f360e -----

void FUN_1897f360e(void)

{
  return;
}


// ----- block @ rva 0x97f3616 -----

void FUN_1897f3616(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x97f36c3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f36c3(void)

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


// ----- block @ rva 0x97f36fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f36fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813fdb88)();
  return;
}


// ----- block @ rva 0x97f3736 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3736(void)

{
  FUN_190dd72e0();
  (*_DAT_1813fdb48)();
  return;
}


// ----- block @ rva 0x97f375e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f375e(void)

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


// ----- block @ rva 0x97f377f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f377f(void)

{
  FUN_190dd9df0();
  (*_DAT_1813fdb08)();
  return;
}


// ----- block @ rva 0x97f37b2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f37b2(void)

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


// ----- block @ rva 0x97f37fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f37fc(void)

{
  (*_DAT_1813fdb18)();
  return;
}


// ----- block @ rva 0x97f380c -----

void FUN_1897f380c(void)

{
  return;
}


// ----- block @ rva 0x97f3814 -----

void FUN_1897f3814(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x97f38f0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f38f0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1813fdc28)();
  return;
}


// ----- block @ rva 0x97f390f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f390f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
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


// ----- block @ rva 0x97f3968 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f3968(void)

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


// ----- block @ rva 0x97f397e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f397e(void)

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


// ----- block @ rva 0x97f39b7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f39b7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1813fdc38)();
  return;
}


// ----- block @ rva 0x97f39d2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f39d2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (*_DAT_1813fdbf8)();
  return;
}


// ----- block @ rva 0x97f39fa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f39fa(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    (*_DAT_1813fdc48)();
    return;
  }
  (*_DAT_1813fdc48)();
  return;
}


// ----- block @ rva 0x97f3a15 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3a15(void)

{
  (*_DAT_1813fdc48)();
  return;
}


// ----- block @ rva 0x97f3a1d -----

void FUN_1897f3a1d(void)

{
  return;
}


// ----- block @ rva 0x97f3a25 -----

void FUN_1897f3a25(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x97f3b05 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3b05(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1813fdd28)();
  return;
}


// ----- block @ rva 0x97f3b7d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f3b7d(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x97f3c68 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f3c68(void)

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


// ----- block @ rva 0x97f3c89 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3c89(void)

{
  FUN_190ddfc90();
  (*_DAT_1813fdd78)();
  return;
}


// ----- block @ rva 0x97f3ce0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f3ce0(void)

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


// ----- block @ rva 0x97f3cfb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3cfb(void)

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


// ----- block @ rva 0x97f3d38 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3d38(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813fdcd8)();
  return;
}


// ----- block @ rva 0x97f3d5e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3d5e(void)

{
  (*_DAT_1813fdd38)();
  return;
}


// ----- block @ rva 0x97f3d6f -----

void FUN_1897f3d6f(void)

{
  return;
}


// ----- block @ rva 0x97f3d79 -----

void FUN_1897f3d79(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x97f3e49 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3e49(void)

{
  FUN_190ddce00();
  (*_DAT_1813fde18)();
  return;
}


// ----- block @ rva 0x97f3e7c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f3e7c(void)

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


// ----- block @ rva 0x97f3ea0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f3ea0(void)

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


// ----- block @ rva 0x97f3ec1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3ec1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1813fdde8)();
  return;
}


// ----- block @ rva 0x97f3edb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3edb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813fddd8)();
  return;
}


// ----- block @ rva 0x97f3efb -----

void FUN_1897f3efb(void)

{
  return;
}


// ----- block @ rva 0x97f3f02 -----

void FUN_1897f3f02(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x97f3f3a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3f3a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1813fde48)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x97f3f46 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1897f3f46(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x97f3f63 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1897f3f63(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1813fde58)();
  return;
}


// ----- block @ rva 0x97f3f6c -----

void FUN_1897f3f6c(void)

{
  return;
}

