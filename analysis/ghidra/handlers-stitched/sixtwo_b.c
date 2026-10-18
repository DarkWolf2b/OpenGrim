// ===== STITCHED CORPUS: sixtwo.b =====
// handlers: 5  continuation blocks: 42  unresolved table targets: 0

// ===== Lsixtwo/b; _44a053bfb442a1d0c6a857ca21e80386 ()V (handler @ image 190d4c3c0, runtime 6ffff895c3c0) =====

void FUN_190d4c3c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190d4c425 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182e98030 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/b; i ()Ljava/util/List; (handler @ image 190d44320, runtime 6ffff8954320) =====

void FUN_190d44320(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xdd8,0x32)
      /* POOL[0xdd8,0x32]: /String;Ljava/lang/Throwable;)V | sixtwo/b | kSCdo | blY */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190d443de did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182e95800 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/b; j ([I)V (handler @ image 190d4a2a0, runtime 6ffff895a2a0) =====

void FUN_190d4a2a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190d4a326 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182e97450 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/b; k (Lsixtwo/ir;)V (handler @ image 190d4b9c0, runtime 6ffff895b9c0) =====

void FUN_190d4b9c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xdd8,0x32)
      /* POOL[0xdd8,0x32]: /String;Ljava/lang/Throwable;)V | sixtwo/b | kSCdo | blY */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190d4ba13 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182e97c40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/b; l (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 190d4c330, runtime 6ffff895c330) =====

undefined8 FUN_190d4c330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x10d443e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d443e1(void)

{
  FUN_190ddce00();
  (*_DAT_182e95d08)();
  return;
}


// ----- block @ rva 0x10d47e99 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d47e99(void)

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


// ----- block @ rva 0x10d491d6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d491d6(void)

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


// ----- block @ rva 0x10d4978b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4978b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182e966b8)();
  return;
}


// ----- block @ rva 0x10d49a28 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d49a28(void)

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


// ----- block @ rva 0x10d49aba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d49aba(void)

{
  (*_DAT_182e966a8)();
  return;
}


// ----- block @ rva 0x10d49dfe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d49dfe(void)

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


// ----- block @ rva 0x10d49ec9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d49ec9(void)

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


// ----- block @ rva 0x10d4a0c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4a0c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_182e964c8)();
  return;
}


// ----- block @ rva 0x10d4a0d9 -----

void FUN_190d4a0d9(void)

{
  return;
}


// ----- block @ rva 0x10d4a329 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4a329(void)

{
  FUN_190de3220();
  (*_DAT_182e97b98)();
  return;
}


// ----- block @ rva 0x10d4a4f9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4a4f9(void)

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


// ----- block @ rva 0x10d4aafa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4aafa(void)

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


// ----- block @ rva 0x10d4aba5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4aba5(void)

{
  FUN_190ddce00();
  (*_DAT_182e97608)();
  return;
}


// ----- block @ rva 0x10d4ac7d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4ac7d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_182e974e8)();
  return;
}


// ----- block @ rva 0x10d4b0c9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4b0c9(void)

{
  FUN_190ddfc90();
  (*_DAT_182e97918)();
  return;
}


// ----- block @ rva 0x10d4b64e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4b64e(void)

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


// ----- block @ rva 0x10d4b6f3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4b6f3(void)

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


// ----- block @ rva 0x10d4b8c3 -----

void FUN_190d4b8c3(void)

{
  return;
}


// ----- block @ rva 0x10d4b8d7 -----

void FUN_190d4b8d7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x10d4ba16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4ba16(void)

{
  FUN_190ddce00();
  (*_DAT_182e97f48)();
  return;
}


// ----- block @ rva 0x10d4baad -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4baad(void)

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


// ----- block @ rva 0x10d4baf8 -----

void FUN_190d4baf8(void)

{
  return;
}


// ----- block @ rva 0x10d4bcdf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4bcdf(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182e97ea8)();
  return;
}


// ----- block @ rva 0x10d4bf25 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4bf25(void)

{
  (*_DAT_182e97e78)();
  return;
}


// ----- block @ rva 0x10d4c051 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4c051(void)

{
  FUN_190de3220();
  (*_DAT_182e97cb8)();
  return;
}


// ----- block @ rva 0x10d4c084 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4c084(void)

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


// ----- block @ rva 0x10d4c173 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4c173(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_182e97e28)();
  return;
}


// ----- block @ rva 0x10d4c1e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4c1e2(void)

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


// ----- block @ rva 0x10d4c219 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4c219(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182e97c78)();
  return;
}


// ----- block @ rva 0x10d4c24a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4c24a(void)

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


// ----- block @ rva 0x10d4c27c -----

void FUN_190d4c27c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x10d4c428 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4c428(void)

{
  FUN_190de3220();
  (*_DAT_182e981b8)();
  return;
}


// ----- block @ rva 0x10d4c4db -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4c4db(void)

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


// ----- block @ rva 0x10d4c4fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4c4fc(void)

{
  FUN_190ddfc90();
  (*_DAT_182e98138)();
  return;
}


// ----- block @ rva 0x10d4c5ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4c5ef(void)

{
  FUN_190dd72e0();
  (*_DAT_182e98088)();
  return;
}


// ----- block @ rva 0x10d4c617 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4c617(void)

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


// ----- block @ rva 0x10d4c72c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190d4c72c(void)

{
  FUN_190ddfc90();
  (*_DAT_182e98218)();
  return;
}


// ----- block @ rva 0x10d4c783 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4c783(void)

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


// ----- block @ rva 0x10d4c858 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190d4c858(void)

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


// ----- block @ rva 0x10d4c922 -----

void FUN_190d4c922(void)

{
  return;
}


// ----- block @ rva 0x10d4c92a -----

void FUN_190d4c92a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

