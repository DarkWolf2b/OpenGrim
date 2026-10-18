// ===== STITCHED CORPUS: sixtwo.hX =====
// handlers: 5  continuation blocks: 51  unresolved table targets: 0

// ===== Lsixtwo/hX; arguments ()Ljava/util/List; (handler @ image 189853b30, runtime 6ffff1463b30) =====

void FUN_189853b30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189853b50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814136a0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/hX; command ()Lsixtwo/hZ; (handler @ image 189853930, runtime 6ffff1463930) =====

void FUN_189853930(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189853950 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814135c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/hX; equals (Ljava/lang/Object;)Z (handler @ image 1898527d0, runtime 6ffff14627d0) =====

void FUN_1898527d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189852859 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181413050 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/hX; hashCode ()I (handler @ image 189851690, runtime 6ffff1461690) =====

void FUN_189851690(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189851713 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181412ac0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/hX; toString ()Ljava/lang/String; (handler @ image 189850680, runtime 6ffff1460680) =====

void FUN_189850680(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001898506fa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181412580 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x98506fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1898506fd(void)

{
  FUN_190de3220();
  (*_DAT_181412978)();
  return;
}


// ----- block @ rva 0x98507ba -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1898507ba(void)

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


// ----- block @ rva 0x985097a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18985097a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d50();
  (*_DAT_1814128f8)();
  return;
}


// ----- block @ rva 0x9850a32 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189850a32(void)

{
  FUN_190dd72e0();
  (*_DAT_1814128d8)();
  return;
}


// ----- block @ rva 0x9850cb2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189850cb2(void)

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


// ----- block @ rva 0x9851044 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189851044(void)

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


// ----- block @ rva 0x9851068 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189851068(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1814129e8)();
  return;
}


// ----- block @ rva 0x9851305 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189851305(void)

{
  FUN_190ddfc90();
  (*_DAT_1814128a8)();
  return;
}


// ----- block @ rva 0x9851487 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189851487(void)

{
  FUN_190dd72e0();
  (*_DAT_1814126b8)();
  return;
}


// ----- block @ rva 0x9851591 -----

void FUN_189851591(void)

{
  return;
}


// ----- block @ rva 0x9851716 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189851716(void)

{
  FUN_190de3220();
  (*_DAT_181412ae8)();
  return;
}


// ----- block @ rva 0x9851749 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189851749(void)

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


// ----- block @ rva 0x98517d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1898517d3(void)

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


// ----- block @ rva 0x9851847 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189851847(void)

{
  FUN_190de3220();
  (*_DAT_181412f88)();
  return;
}


// ----- block @ rva 0x9851a36 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189851a36(void)

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


// ----- block @ rva 0x9852085 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189852085(void)

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


// ----- block @ rva 0x9852112 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189852112(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181412c38)();
  return;
}


// ----- block @ rva 0x985223c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18985223c(void)

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


// ----- block @ rva 0x98526a1 -----

void FUN_1898526a1(void)

{
  return;
}


// ----- block @ rva 0x98526b5 -----

void FUN_1898526b5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x985285c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18985285c(void)

{
  FUN_190de3220();
  (*_DAT_181413538)();
  return;
}


// ----- block @ rva 0x9852b93 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189852b93(void)

{
  FUN_190dd72e0();
  (*_DAT_181413548)();
  return;
}


// ----- block @ rva 0x9852d3e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189852d3e(void)

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


// ----- block @ rva 0x9852dde -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189852dde(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_181413508)();
  return;
}


// ----- block @ rva 0x9852fc7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189852fc7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d80();
  (*_DAT_1814132a8)();
  return;
}


// ----- block @ rva 0x9853234 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189853234(void)

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


// ----- block @ rva 0x98533d2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1898533d2(void)

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


// ----- block @ rva 0x98535bb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1898535bb(void)

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


// ----- block @ rva 0x98536fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1898536fd(void)

{
  FUN_190dd72e0();
  (*_DAT_181413578)();
  return;
}


// ----- block @ rva 0x9853807 -----

void FUN_189853807(void)

{
  return;
}


// ----- block @ rva 0x985381b -----

void FUN_18985381b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9853953 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853953(void)

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


// ----- block @ rva 0x98539b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1898539b1(void)

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


// ----- block @ rva 0x98539c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1898539c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181413628)();
  return;
}


// ----- block @ rva 0x98539ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1898539ee(void)

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


// ----- block @ rva 0x9853a0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853a0f(void)

{
  FUN_190dd9df0();
  (*_DAT_181413638)();
  return;
}


// ----- block @ rva 0x9853a42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189853a42(void)

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


// ----- block @ rva 0x9853a8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853a8d(void)

{
  (*_DAT_1814135e8)();
  return;
}


// ----- block @ rva 0x9853a9e -----

void FUN_189853a9e(void)

{
  return;
}


// ----- block @ rva 0x9853aa6 -----

void FUN_189853aa6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9853b53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853b53(void)

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


// ----- block @ rva 0x9853b8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853b8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1814136f8)();
  return;
}


// ----- block @ rva 0x9853bb1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189853bb1(void)

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


// ----- block @ rva 0x9853bc6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853bc6(void)

{
  FUN_190dd72e0();
  (*_DAT_1814136b8)();
  return;
}


// ----- block @ rva 0x9853bee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189853bee(void)

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


// ----- block @ rva 0x9853c0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853c0f(void)

{
  FUN_190dd9df0();
  (*_DAT_1814136d8)();
  return;
}


// ----- block @ rva 0x9853c42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189853c42(void)

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


// ----- block @ rva 0x9853c66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853c66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1814136c8)();
  return;
}


// ----- block @ rva 0x9853c8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189853c8d(void)

{
  (*_DAT_181413728)();
  return;
}


// ----- block @ rva 0x9853c9e -----

void FUN_189853c9e(void)

{
  return;
}


// ----- block @ rva 0x9853ca6 -----

void FUN_189853ca6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

