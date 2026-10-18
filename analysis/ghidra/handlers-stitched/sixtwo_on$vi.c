// ===== STITCHED CORPUS: sixtwo.on$vi =====
// handlers: 5  continuation blocks: 48  unresolved table targets: 0

// ===== Lsixtwo/on$vi; createdTick ()I (handler @ image 18640e2d0, runtime 6fffee01e2d0) =====

void FUN_18640e2d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018640e2f0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180835c40 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/on$vi; equals (Ljava/lang/Object;)Z (handler @ image 18640cee0, runtime 6fffee01cee0) =====

void FUN_18640cee0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018640cf69 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808355c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/on$vi; hashCode ()I (handler @ image 18640bd60, runtime 6fffee01bd60) =====

void FUN_18640bd60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018640bde3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180835020 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/on$vi; target ()Lnet/minecraft/class_1657; (handler @ image 18640e0d0, runtime 6fffee01e0d0) =====

void FUN_18640e0d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018640e0f0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180835b60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/on$vi; toString ()Ljava/lang/String; (handler @ image 18640acc0, runtime 6fffee01acc0) =====

void FUN_18640acc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018640ad46 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180834ab0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x640ad49 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640ad49(void)

{
  FUN_190de3220();
  (*_DAT_180834ee8)();
  return;
}


// ----- block @ rva 0x640ae1b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640ae1b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_190dd72e0();
  (*_DAT_180834b88)();
  return;
}


// ----- block @ rva 0x640afcb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640afcb(void)

{
  FUN_190ddce00();
  (*_DAT_180834c28)();
  return;
}


// ----- block @ rva 0x640b1c7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640b1c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_180834c18)();
  return;
}


// ----- block @ rva 0x640b25e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640b25e(void)

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


// ----- block @ rva 0x640b5ae -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640b5ae(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180834c48)();
  return;
}


// ----- block @ rva 0x640b9df -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640b9df(void)

{
  FUN_190ddfc90();
  (*_DAT_180834e28)();
  return;
}


// ----- block @ rva 0x640ba90 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640ba90(void)

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


// ----- block @ rva 0x640bc6b -----

void FUN_18640bc6b(void)

{
  return;
}


// ----- block @ rva 0x640bc7f -----

void FUN_18640bc7f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x640bde6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640bde6(void)

{
  FUN_190de3220();
  (*_DAT_180835578)();
  return;
}


// ----- block @ rva 0x640c160 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640c160(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180835258)();
  return;
}


// ----- block @ rva 0x640c4f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640c4f2(void)

{
  FUN_190dd72e0();
  (*_DAT_180835438)();
  return;
}


// ----- block @ rva 0x640c587 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640c587(void)

{
  FUN_190ddfc90();
  (*_DAT_1808352f8)();
  return;
}


// ----- block @ rva 0x640c62a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640c62a(void)

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


// ----- block @ rva 0x640ca47 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640ca47(void)

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


// ----- block @ rva 0x640cb1e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640cb1e(void)

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


// ----- block @ rva 0x640ccd7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640ccd7(void)

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


// ----- block @ rva 0x640cdb9 -----

void FUN_18640cdb9(void)

{
  return;
}


// ----- block @ rva 0x640cdcd -----

void FUN_18640cdcd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x640cf6c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640cf6c(void)

{
  FUN_190de3220();
  (*_DAT_180835a28)();
  return;
}


// ----- block @ rva 0x640cfc3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640cfc3(void)

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


// ----- block @ rva 0x640d220 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640d220(void)

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


// ----- block @ rva 0x640d41e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640d41e(void)

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


// ----- block @ rva 0x640d9ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640d9ce(void)

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


// ----- block @ rva 0x640db32 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640db32(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180835978)();
  return;
}


// ----- block @ rva 0x640dc58 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640dc58(void)

{
  FUN_190dd72e0();
  (*_DAT_180835648)();
  return;
}


// ----- block @ rva 0x640dd76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640dd76(void)

{
  FUN_190de3220();
  (*_DAT_180835828)();
  return;
}


// ----- block @ rva 0x640df9f -----

void FUN_18640df9f(void)

{
  return;
}


// ----- block @ rva 0x640dfb3 -----

void FUN_18640dfb3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x640e0f3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e0f3(void)

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


// ----- block @ rva 0x640e12c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e12c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180835be8)();
  return;
}


// ----- block @ rva 0x640e166 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e166(void)

{
  FUN_190dd72e0();
  (*_DAT_180835b98)();
  return;
}


// ----- block @ rva 0x640e18e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640e18e(void)

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


// ----- block @ rva 0x640e1af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e1af(void)

{
  FUN_190dd9df0();
  (*_DAT_180835b88)();
  return;
}


// ----- block @ rva 0x640e1e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640e1e2(void)

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


// ----- block @ rva 0x640e206 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e206(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180835bf8)();
  return;
}


// ----- block @ rva 0x640e23e -----

void FUN_18640e23e(void)

{
  return;
}


// ----- block @ rva 0x640e246 -----

void FUN_18640e246(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x640e2f3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e2f3(void)

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


// ----- block @ rva 0x640e32c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e32c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180835cb8)();
  return;
}


// ----- block @ rva 0x640e351 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640e351(void)

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


// ----- block @ rva 0x640e366 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e366(void)

{
  FUN_190dd72e0();
  (*_DAT_180835c78)();
  return;
}


// ----- block @ rva 0x640e38e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640e38e(void)

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


// ----- block @ rva 0x640e3af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18640e3af(void)

{
  FUN_190dd9df0();
  (*_DAT_180835c58)();
  return;
}


// ----- block @ rva 0x640e3e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18640e3e2(void)

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


// ----- block @ rva 0x640e43c -----

void FUN_18640e43c(void)

{
  return;
}


// ----- block @ rva 0x640e444 -----

void FUN_18640e444(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

