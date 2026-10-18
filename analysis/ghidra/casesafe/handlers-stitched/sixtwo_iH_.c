// ===== STITCHED CORPUS: sixtwo.iH =====
// handlers: 3  continuation blocks: 22  unresolved table targets: 0

// ===== Lsixtwo/iH; _eeef52848074d7bcaebba46f8943fdcd ()V (handler @ image 1889ed6b0, runtime 6ffff05fd6b0) =====

void FUN_1889ed6b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001889ed715 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1810ab410 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iH; bsA ([I)Ljava/lang/String; (handler @ image 1889e9440, runtime 6ffff05f9440) =====

void FUN_1889e9440(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1741f,0x3c6)
      /* POOL[0x1741f,0x3c6]: H | bkJ | bkL | YAJBH | bkK | NPqyE | yxFSl | sixtwo/iH | bsA | readIntArray | (Lcom/google/gson/JsonObject;Ljava/lang/String;)[I | readObject | (Lcom/google/gson/JsonObject;Ljava/lang/String;Ljava/util/function/Supplier;)Lsixtwo/rp; | wPkDg | Lsixtwo/io; | WJgNc | readBoolean | (Lcom/google/gson/JsonObject;Ljava/lang/String;Z)Z | IaqFE | blo | opmrX | hAyen | writeIntArray | ([I)Lcom/google/gson/JsonArray; | (Ljava/lang/String;Lcom/google/gson/JsonElement;)V | IoFoI | UDYLZ | mIkOu | Lsixtwo/im; | BnBip | (Ljava/lang/String;Ljava/lang/Boolean;)V | Tfucw | kcGmI | QYWHV | hrszQ | blq | VSQwQ | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001889e9501 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1810aa0b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iH; bsB (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1889ed620, runtime 6ffff05fd620) =====

undefined8 FUN_1889ed620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x89e9504 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889e9504(void)

{
  FUN_190ddce00();
  (*_DAT_1810aa698)();
  return;
}


// ----- block @ rva 0x89ec4cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ec4cb(void)

{
  FUN_190de3220();
  (*_DAT_1810aa178)();
  return;
}


// ----- block @ rva 0x89ec5f1 -----

void FUN_1889ec5f1(void)

{
  return;
}


// ----- block @ rva 0x89ec8dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ec8dd(void)

{
  (*_DAT_1810aa7a8)();
  return;
}


// ----- block @ rva 0x89ecb62 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ecb62(void)

{
  (*_DAT_1810aa7b8)();
  return;
}


// ----- block @ rva 0x89ecb9c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1889ecb9c(void)

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


// ----- block @ rva 0x89ecc3e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1889ecc3e(void)

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


// ----- block @ rva 0x89ecd62 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ecd62(ulonglong param_1)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  uint unaff_EBP;
  longlong *unaff_RSI;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = (ulonglong)unaff_EBP ^ 0x84222325 ^ in_RAX;
  lVar3 = ((ulonglong)unaff_EBP ^ 0x84222325) + param_1;
  uVar4 = uVar2 + lVar3;
  uVar5 = (param_1 ^ 1) + in_RAX + 1;
  uVar2 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar2;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ param_1 ^ 1;
  _DAT_1831e4120 =
       func_0x0001889ed590((uVar4 << 0x1d | uVar4 >> 0x23) - (in_RAX + 1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  uVar2 = ~(ulonglong)((uint)_DAT_1831e4120 & 0xfffffffc) & (ulonglong)unaff_EBP;
  lVar3 = (((ulonglong)(unaff_EBP ^ 0xffffffff) * (ulonglong)_DAT_1810ab2b0 + _DAT_1810ab2e0 << 0x20
           ) + (ulonglong)_DAT_1810ab2d0 * (ulonglong)(unaff_EBP ^ 0xffffffff) +
          (ulonglong)_DAT_1810ab2c0 * (ulonglong)unaff_EBP +
          ((ulonglong)unaff_EBP * (ulonglong)_DAT_1810ab2b0 << 0x20)) -
          (((ulonglong)(unaff_EBP ^ _DAT_18001a990) * (ulonglong)_DAT_1810ab380 << 0x20) +
           (ulonglong)_DAT_1810ab370 * (ulonglong)(unaff_EBP ^ _DAT_18001a990) +
           ((ulonglong)(unaff_EBP | _DAT_18001a990) * (ulonglong)_DAT_1810ab360 << 0x20) +
           (ulonglong)_DAT_1810ab350 * (ulonglong)(unaff_EBP | _DAT_18001a990) +
          ((ulonglong)(unaff_EBP & _DAT_18001a990) * (ulonglong)_DAT_1810ab340 << 0x20 |
          (ulonglong)_DAT_1810ab330 * (ulonglong)(unaff_EBP & _DAT_18001a990)) +
          ((ulonglong)unaff_EBP * (ulonglong)_DAT_1810ab320 << 0x20) +
          (ulonglong)_DAT_1810ab310 * (ulonglong)unaff_EBP);
  _DAT_1831e44a8 = lVar3 + 0x2860a9294a229af3;
  _DAT_1831e4290 = _DAT_1831e4480 ^ uVar2 ^ _DAT_1831e44a8;
  _DAT_1831e4388 = (_DAT_1831e4388 ^ uVar2) + _DAT_1831e44a8 ^ 0x9eccbc5a0f1a0da9;
  _DAT_1831e43b0 = (_DAT_1831e43b0 * -0x22c5ce9fbc18ca83 ^ _DAT_1831e4388) + uVar2;
  _DAT_1831e4110 = _DAT_1831e43b0 ^ _DAT_1831e4388;
  _DAT_1831e44a8 = _DAT_1831e44a8 & 0xffffffff;
  FUN_190dd72e0(lVar3,*_DAT_18301ee50 + 0x6dbe,0x138);
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


// ----- block @ rva 0x89ed0b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ed0b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticVoidMethodA /*0x478*/))();
  (*_DAT_1810aa378)();
  return;
}


// ----- block @ rva 0x89ed297 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ed297(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1810aa778)();
  return;
}


// ----- block @ rva 0x89ed42f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ed42f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1810aa358)();
  return;
}


// ----- block @ rva 0x89ed495 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ed495(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1810aa528)();
  return;
}


// ----- block @ rva 0x89ed718 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ed718(void)

{
  FUN_190de3220();
  (*_DAT_1810ab4f8)();
  return;
}


// ----- block @ rva 0x89ed7a3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ed7a3(void)

{
  FUN_190dd72e0();
  (*_DAT_1810ab458)();
  return;
}


// ----- block @ rva 0x89ed7cb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1889ed7cb(void)

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


// ----- block @ rva 0x89ed81f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1889ed81f(void)

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


// ----- block @ rva 0x89ed97f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889ed97f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_1810ab508)();
  return;
}


// ----- block @ rva 0x89edb69 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889edb69(void)

{
  FUN_190ddce00();
  (*_DAT_1810ab478)();
  return;
}


// ----- block @ rva 0x89edb9c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1889edb9c(void)

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


// ----- block @ rva 0x89edc00 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1889edc00(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1810ab588)();
  return;
}


// ----- block @ rva 0x89edc12 -----

void FUN_1889edc12(void)

{
  return;
}


// ----- block @ rva 0x89edc1a -----

void FUN_1889edc1a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

