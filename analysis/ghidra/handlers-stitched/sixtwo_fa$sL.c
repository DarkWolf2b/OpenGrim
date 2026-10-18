// ===== STITCHED CORPUS: sixtwo.fa$sL =====
// handlers: 7  continuation blocks: 87  unresolved table targets: 0

// ===== Lsixtwo/fa$sL; cartHitResult ()Lnet/minecraft/class_3965; (handler @ image 18b5c3f00, runtime 6ffff31d3f00) =====

void FUN_18b5c3f00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018b5c3f20 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b73990 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fa$sL; equals (Ljava/lang/Object;)Z (handler @ image 18b5c2830, runtime 6ffff31d2830) =====

void FUN_18b5c2830(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b5c28b9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b73200 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fa$sL; firePos ()Lnet/minecraft/class_2338; (handler @ image 18b5c3d00, runtime 6ffff31d3d00) =====

void FUN_18b5c3d00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018b5c3d20 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b738b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fa$sL; hashCode ()I (handler @ image 18b5c1570, runtime 6ffff31d1570) =====

void FUN_18b5c1570(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b5c15f3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b72c10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fa$sL; railPos ()Lnet/minecraft/class_2338; (handler @ image 18b5c3b00, runtime 6ffff31d3b00) =====

void FUN_18b5c3b00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018b5c3b20 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b737d0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fa$sL; shotPoint ()Lnet/minecraft/class_243; (handler @ image 18b5c4100, runtime 6ffff31d4100) =====

void FUN_18b5c4100(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018b5c4120 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b73a70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fa$sL; toString ()Ljava/lang/String; (handler @ image 18b5c03e0, runtime 6ffff31d03e0) =====

void FUN_18b5c03e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b5c045a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b72670 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xb5c045d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c045d(void)

{
  FUN_190de3220();
  (*_DAT_181b72718)();
  return;
}


// ----- block @ rva 0xb5c09c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c09c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_181b72a78)();
  return;
}


// ----- block @ rva 0xb5c0c43 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c0c43(void)

{
  FUN_190dd72e0();
  (*_DAT_181b729e8)();
  return;
}


// ----- block @ rva 0xb5c1107 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c1107(void)

{
  FUN_190ddfc90();
  (*_DAT_181b726c8)();
  return;
}


// ----- block @ rva 0xb5c113a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c113a(void)

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


// ----- block @ rva 0xb5c1235 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c1235(void)

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


// ----- block @ rva 0xb5c1307 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c1307(void)

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


// ----- block @ rva 0xb5c13a9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c13a9(void)

{
  FUN_190de3220();
  (*_DAT_181b72a68)();
  return;
}


// ----- block @ rva 0xb5c146d -----

void FUN_18b5c146d(void)

{
  return;
}


// ----- block @ rva 0xb5c1481 -----

void FUN_18b5c1481(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5c15f6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c15f6(void)

{
  FUN_190de3220();
  (*_DAT_181b72c28)();
  return;
}


// ----- block @ rva 0xb5c1629 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c1629(void)

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


// ----- block @ rva 0xb5c1701 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c1701(void)

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


// ----- block @ rva 0xb5c1c71 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c1c71(void)

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


// ----- block @ rva 0xb5c22b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c22b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181b72ea8)();
  return;
}


// ----- block @ rva 0xb5c2388 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c2388(void)

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


// ----- block @ rva 0xb5c2491 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c2491(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73068)();
  return;
}


// ----- block @ rva 0xb5c250d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c250d(void)

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


// ----- block @ rva 0xb5c25f0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c25f0(void)

{
  FUN_190dd72e0();
  (*_DAT_181b72f28)();
  return;
}


// ----- block @ rva 0xb5c26fd -----

void FUN_18b5c26fd(void)

{
  return;
}


// ----- block @ rva 0xb5c2711 -----

void FUN_18b5c2711(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5c28bc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c28bc(void)

{
  FUN_190de3220();
  (*_DAT_181b73548)();
  return;
}


// ----- block @ rva 0xb5c30a4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c30a4(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73328)();
  return;
}


// ----- block @ rva 0xb5c3190 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c3190(void)

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


// ----- block @ rva 0xb5c328c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c328c(void)

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


// ----- block @ rva 0xb5c33b3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c33b3(void)

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


// ----- block @ rva 0xb5c356b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c356b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181b73228)();
  return;
}


// ----- block @ rva 0xb5c35a5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c35a5(void)

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


// ----- block @ rva 0xb5c365a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c365a(void)

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


// ----- block @ rva 0xb5c38d0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c38d0(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73338)();
  return;
}


// ----- block @ rva 0xb5c39da -----

void FUN_18b5c39da(void)

{
  return;
}


// ----- block @ rva 0xb5c39ee -----

void FUN_18b5c39ee(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5c3b23 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3b23(void)

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


// ----- block @ rva 0xb5c3b81 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c3b81(void)

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


// ----- block @ rva 0xb5c3b96 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3b96(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73868)();
  return;
}


// ----- block @ rva 0xb5c3bdf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3bdf(void)

{
  FUN_190dd9df0();
  (*_DAT_181b737e8)();
  return;
}


// ----- block @ rva 0xb5c3c12 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c3c12(void)

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


// ----- block @ rva 0xb5c3c36 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3c36(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181b73828)();
  return;
}


// ----- block @ rva 0xb5c3c5d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3c5d(void)

{
  (*_DAT_181b737f8)();
  return;
}


// ----- block @ rva 0xb5c3c6e -----

void FUN_18b5c3c6e(void)

{
  return;
}


// ----- block @ rva 0xb5c3c76 -----

void FUN_18b5c3c76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5c3d23 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3d23(void)

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


// ----- block @ rva 0xb5c3d5c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3d5c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181b738f8)();
  return;
}


// ----- block @ rva 0xb5c3d81 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c3d81(void)

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


// ----- block @ rva 0xb5c3d96 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3d96(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73938)();
  return;
}


// ----- block @ rva 0xb5c3ddf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3ddf(void)

{
  FUN_190dd9df0();
  (*_DAT_181b73908)();
  return;
}


// ----- block @ rva 0xb5c3e12 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c3e12(void)

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


// ----- block @ rva 0xb5c3e5d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3e5d(void)

{
  (*_DAT_181b738c8)();
  return;
}


// ----- block @ rva 0xb5c3e6e -----

void FUN_18b5c3e6e(void)

{
  return;
}


// ----- block @ rva 0xb5c3e76 -----

void FUN_18b5c3e76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5c3f23 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3f23(void)

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


// ----- block @ rva 0xb5c3f81 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c3f81(void)

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


// ----- block @ rva 0xb5c3f96 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3f96(void)

{
  FUN_190dd72e0();
  (*_DAT_181b739f8)();
  return;
}


// ----- block @ rva 0xb5c3fbe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c3fbe(void)

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


// ----- block @ rva 0xb5c3fdf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c3fdf(void)

{
  FUN_190dd9df0();
  (*_DAT_181b73a28)();
  return;
}


// ----- block @ rva 0xb5c4036 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4036(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181b739b8)();
  return;
}


// ----- block @ rva 0xb5c405d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c405d(void)

{
  (*_DAT_181b73a08)();
  return;
}


// ----- block @ rva 0xb5c406e -----

void FUN_18b5c406e(void)

{
  return;
}


// ----- block @ rva 0xb5c4076 -----

void FUN_18b5c4076(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5c4123 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4123(void)

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


// ----- block @ rva 0xb5c4181 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c4181(void)

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


// ----- block @ rva 0xb5c4196 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4196(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73ad8)();
  return;
}


// ----- block @ rva 0xb5c41be -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c41be(void)

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


// ----- block @ rva 0xb5c4212 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c4212(void)

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


// ----- block @ rva 0xb5c4236 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4236(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181b73ac8)();
  return;
}


// ----- block @ rva 0xb5c425d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c425d(void)

{
  (*_DAT_181b73a98)();
  return;
}


// ----- block @ rva 0xb5c426e -----

void FUN_18b5c426e(void)

{
  return;
}


// ----- block @ rva 0xb5c4276 -----

void FUN_18b5c4276(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5c434a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c434a(void)

{
  FUN_190ddce00();
  (*_DAT_181b73c58)();
  return;
}


// ----- block @ rva 0xb5c43a1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c43a1(void)

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


// ----- block @ rva 0xb5c43c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c43c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_181b73b98)();
  return;
}


// ----- block @ rva 0xb5c43dc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c43dc(void)

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


// ----- block @ rva 0xb5c4400 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4400(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73bf8)();
  return;
}


// ----- block @ rva 0xb5c4449 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4449(void)

{
  FUN_190ddfc90();
  (*_DAT_181b73c08)();
  return;
}


// ----- block @ rva 0xb5c44a0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c44a0(void)

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


// ----- block @ rva 0xb5c453d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c453d(void)

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


// ----- block @ rva 0xb5c45bb -----

void FUN_18b5c45bb(void)

{
  return;
}


// ----- block @ rva 0xb5c46cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c46cb(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73d68)();
  return;
}


// ----- block @ rva 0xb5c471e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c471e(void)

{
  FUN_190de3220();
  (*_DAT_181b73d38)();
  return;
}


// ----- block @ rva 0xb5c4775 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4775(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181b73d58)();
  return;
}


// ----- block @ rva 0xb5c47ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c47ba(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73cf8)();
  return;
}


// ----- block @ rva 0xb5c47e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c47e2(void)

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


// ----- block @ rva 0xb5c4803 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c4803(void)

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


// ----- block @ rva 0xb5c482e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c482e(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73d78)();
  return;
}


// ----- block @ rva 0xb5c4894 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4894(void)

{
  (*_DAT_181b73d28)();
  return;
}


// ----- block @ rva 0xb5c489f -----

void FUN_18b5c489f(void)

{
  return;
}


// ----- block @ rva 0xb5c48a7 -----

void FUN_18b5c48a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

