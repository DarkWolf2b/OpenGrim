// ===== STITCHED CORPUS: sixtwo.lp =====
// handlers: 6  continuation blocks: 49  unresolved table targets: 0

// ===== Lsixtwo/lp; _305a70d79064b1237a33bfc3ecb3e346 ()V (handler @ image 187c239a0, runtime 6fffef8339a0) =====

void FUN_187c239a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187c23a05 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d7a4f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/lp; caj ()[B (handler @ image 187c23110, runtime 6fffef833110) =====

void FUN_187c23110(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187c23130 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d7a130 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/lp; cak ()Lsixtwo/li; (handler @ image 187c23310, runtime 6fffef833310) =====

void FUN_187c23310(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187c23330 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d7a210 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/lp; cal ()Ljava/util/Map; (handler @ image 187c23510, runtime 6fffef833510) =====

void FUN_187c23510(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187c23530 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d7a2f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/lp; cam ()Ljava/util/Map; (handler @ image 187c23710, runtime 6fffef833710) =====

void FUN_187c23710(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187c23730 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d7a3d0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/lp; can (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 187c23910, runtime 6fffef833910) =====

undefined8 FUN_187c23910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x7c23133 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23133(void)

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


// ----- block @ rva 0x7c2316c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c2316c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180d7a158)();
  return;
}


// ----- block @ rva 0x7c23191 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23191(void)

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


// ----- block @ rva 0x7c231a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c231a6(void)

{
  FUN_190dd72e0();
  (*_DAT_180d7a188)();
  return;
}


// ----- block @ rva 0x7c231ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c231ce(void)

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


// ----- block @ rva 0x7c231ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c231ef(void)

{
  FUN_190dd9df0();
  (*_DAT_180d7a1c8)();
  return;
}


// ----- block @ rva 0x7c23246 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23246(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180d7a1a8)();
  return;
}


// ----- block @ rva 0x7c2326d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c2326d(void)

{
  (*_DAT_180d7a178)();
  return;
}


// ----- block @ rva 0x7c2327e -----

void FUN_187c2327e(void)

{
  return;
}


// ----- block @ rva 0x7c23286 -----

void FUN_187c23286(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7c23333 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23333(void)

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


// ----- block @ rva 0x7c2336c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c2336c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180d7a258)();
  return;
}


// ----- block @ rva 0x7c23391 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23391(void)

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


// ----- block @ rva 0x7c233a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c233a6(void)

{
  FUN_190dd72e0();
  (*_DAT_180d7a278)();
  return;
}


// ----- block @ rva 0x7c233ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c233ce(void)

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


// ----- block @ rva 0x7c23422 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23422(void)

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


// ----- block @ rva 0x7c23446 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23446(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180d7a248)();
  return;
}


// ----- block @ rva 0x7c2346d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c2346d(void)

{
  (*_DAT_180d7a268)();
  return;
}


// ----- block @ rva 0x7c2347e -----

void FUN_187c2347e(void)

{
  return;
}


// ----- block @ rva 0x7c23486 -----

void FUN_187c23486(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7c23533 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23533(void)

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


// ----- block @ rva 0x7c2356c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c2356c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180d7a308)();
  return;
}


// ----- block @ rva 0x7c23591 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23591(void)

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


// ----- block @ rva 0x7c235a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c235a6(void)

{
  FUN_190dd72e0();
  (*_DAT_180d7a318)();
  return;
}


// ----- block @ rva 0x7c235ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c235ce(void)

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


// ----- block @ rva 0x7c235ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c235ef(void)

{
  FUN_190dd9df0();
  (*_DAT_180d7a358)();
  return;
}


// ----- block @ rva 0x7c23622 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23622(void)

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


// ----- block @ rva 0x7c2367e -----

void FUN_187c2367e(void)

{
  return;
}


// ----- block @ rva 0x7c23686 -----

void FUN_187c23686(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7c23733 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23733(void)

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


// ----- block @ rva 0x7c23791 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23791(void)

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


// ----- block @ rva 0x7c237a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c237a6(void)

{
  FUN_190dd72e0();
  (*_DAT_180d7a3f8)();
  return;
}


// ----- block @ rva 0x7c237ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c237ce(void)

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


// ----- block @ rva 0x7c237ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c237ef(void)

{
  FUN_190dd9df0();
  (*_DAT_180d7a438)();
  return;
}


// ----- block @ rva 0x7c23822 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23822(void)

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


// ----- block @ rva 0x7c23846 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23846(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180d7a428)();
  return;
}


// ----- block @ rva 0x7c2386d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c2386d(void)

{
  (*_DAT_180d7a448)();
  return;
}


// ----- block @ rva 0x7c2387e -----

void FUN_187c2387e(void)

{
  return;
}


// ----- block @ rva 0x7c23886 -----

void FUN_187c23886(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7c23a08 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23a08(void)

{
  FUN_190de3220();
  (*_DAT_180d7a578)();
  return;
}


// ----- block @ rva 0x7c23b0f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23b0f(void)

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


// ----- block @ rva 0x7c23b82 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23b82(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180d7a6a8)();
  return;
}


// ----- block @ rva 0x7c23c18 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23c18(void)

{
  FUN_190de3220();
  (*_DAT_180d7a6d8)();
  return;
}


// ----- block @ rva 0x7c23d3f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23d3f(void)

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


// ----- block @ rva 0x7c23e38 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23e38(void)

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


// ----- block @ rva 0x7c23e59 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c23e59(void)

{
  FUN_190ddce00();
  (*_DAT_180d7a688)();
  return;
}


// ----- block @ rva 0x7c23eb0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c23eb0(void)

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


// ----- block @ rva 0x7c23f02 -----

void FUN_187c23f02(void)

{
  return;
}


// ----- block @ rva 0x7c23f0a -----

void FUN_187c23f0a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

