// ===== STITCHED CORPUS: sixtwo.aq =====
// handlers: 6  continuation blocks: 58  unresolved table targets: 0
// tables not in tables.json: ['0x2ae1128', '0x2ae1138', '0x2ae1148', '0x2ae1158', '0x2ae1168', '0x2ae1178', '0x2ae1188']

// ===== Lsixtwo/aq; _767d8839a68e2c6e03076628098ed797 ()V (handler @ image 18fcd79c0, runtime 6ffff78e79c0) =====

void FUN_18fcd79c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fcd7a9f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ae0350 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/aq; bV (Lsixtwo/lC;)V (handler @ image 18fcd4650, runtime 6ffff78e4650) =====

void FUN_18fcd4650(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcd46b3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182aded90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/aq; qB ()V (handler @ image 18fcd7050, runtime 6ffff78e7050) =====

void FUN_18fcd7050(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcd7070 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182adff20 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/aq; qC (Lsixtwo/lq;)Lsixtwo/aq; (handler @ image 18fcd73b0, runtime 6ffff78e73b0) =====

void FUN_18fcd73b0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcd73d5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ae0070 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/aq; qD (Lsixtwo/lq;)Lsixtwo/aq; (handler @ image 18fcd75b0, runtime 6ffff78e75b0) =====

void FUN_18fcd75b0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcd75d5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ae0150 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/aq; qE (F)Lsixtwo/aq; (handler @ image 18fcd77b0, runtime 6ffff78e77b0) =====

void FUN_18fcd77b0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fcd77d8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182ae0230 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xfcd46b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd46b6(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182adf278)();
  return;
}


// ----- block @ rva 0xfcd4734 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd4734(void)

{
  FUN_190dd72e0();
  (*_DAT_182adf108)();
  return;
}


// ----- block @ rva 0xfcd477d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd477d(void)

{
  FUN_190dd9df0();
  (*_DAT_182adf8c8)();
  return;
}


// ----- block @ rva 0xfcd4910 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd4910(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182adf578)();
  return;
}


// ----- block @ rva 0xfcd494c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd494c(void)

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


// ----- block @ rva 0xfcd4bfc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd4bfc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182adfb38)();
  return;
}


// ----- block @ rva 0xfcd4de3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd4de3(void)

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


// ----- block @ rva 0xfcd65ad -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd65ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182adf578)();
  return;
}


// ----- block @ rva 0xfcd689b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd689b(void)

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


// ----- block @ rva 0xfcd6ee2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd6ee2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182adfe58)();
  return;
}


// ----- block @ rva 0xfcd6f06 -----

void FUN_18fcd6f06(void)

{
  return;
}


// ----- block @ rva 0xfcd7073 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7073(void)

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


// ----- block @ rva 0xfcd70ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd70ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182adff98)();
  return;
}


// ----- block @ rva 0xfcd70d1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd70d1(void)

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


// ----- block @ rva 0xfcd70e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd70e6(void)

{
  FUN_190dd72e0();
  (*_DAT_182adffb8)();
  return;
}


// ----- block @ rva 0xfcd7162 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd7162(void)

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


// ----- block @ rva 0xfcd71c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd71c2(void)

{
  FUN_190dd72e0();
  (*_DAT_182adffd8)();
  return;
}


// ----- block @ rva 0xfcd720b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd720b(void)

{
  FUN_190ddfc90();
  (*_DAT_182adffc8)();
  return;
}


// ----- block @ rva 0xfcd7278 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7278(void)

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


// ----- block @ rva 0xfcd72ca -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd72ca(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182ae0008)();
  return;
}


// ----- block @ rva 0xfcd72ea -----

void FUN_18fcd72ea(void)

{
  return;
}


// ----- block @ rva 0xfcd72f2 -----

void FUN_18fcd72f2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xfcd73d8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd73d8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcd7411 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7411(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182ae00d8)();
  return;
}


// ----- block @ rva 0xfcd7436 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd7436(void)

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


// ----- block @ rva 0xfcd744b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd744b(void)

{
  FUN_190dd72e0();
  (*_DAT_182ae0088)();
  return;
}


// ----- block @ rva 0xfcd7473 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd7473(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcd74eb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd74eb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182ae00a8)();
  return;
}


// ----- block @ rva 0xfcd7512 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7512(void)

{
  (*_DAT_182ae00e8)();
  return;
}


// ----- block @ rva 0xfcd7523 -----

void FUN_18fcd7523(void)

{
  return;
}


// ----- block @ rva 0xfcd752d -----

void FUN_18fcd752d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xfcd75d8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd75d8(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcd7611 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7611(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182ae01b8)();
  return;
}


// ----- block @ rva 0xfcd7636 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd7636(void)

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


// ----- block @ rva 0xfcd764b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd764b(void)

{
  FUN_190dd72e0();
  (*_DAT_182ae0178)();
  return;
}


// ----- block @ rva 0xfcd7673 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd7673(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcd7694 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7694(void)

{
  FUN_190dd9df0();
  (*_DAT_182ae01c8)();
  return;
}


// ----- block @ rva 0xfcd76c7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd76c7(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcd7723 -----

void FUN_18fcd7723(void)

{
  return;
}


// ----- block @ rva 0xfcd772d -----

void FUN_18fcd772d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xfcd77db -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd77db(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcd784e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd784e(void)

{
  FUN_190dd72e0();
  (*_DAT_182ae0288)();
  return;
}


// ----- block @ rva 0xfcd7876 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd7876(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcd7897 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7897(void)

{
  FUN_190dd9df0();
  (*_DAT_182ae02a8)();
  return;
}


// ----- block @ rva 0xfcd78ca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd78ca(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcd78ee -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd78ee(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182ae0268)();
  return;
}


// ----- block @ rva 0xfcd7915 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7915(void)

{
  (*_DAT_182ae0258)();
  return;
}


// ----- block @ rva 0xfcd7926 -----

void FUN_18fcd7926(void)

{
  return;
}


// ----- block @ rva 0xfcd7933 -----

void FUN_18fcd7933(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xfcd7aa2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd7aa2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
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


// ----- block @ rva 0xfcd9b4b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcd9b4b(void)

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


// ----- block @ rva 0xfcd9d97 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcd9d97(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcda6a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcda6a3(void)

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


// ----- block @ rva 0xfcda78e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fcda78e(void)

{
  longlong in_stack_00000038;
  
  switch(in_stack_00000038 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcdcdef -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fcdcdef(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong in_stack_00000038;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar2 = (ulonglong)param_1;
  uVar4 = (_DAT_183433068 ^ _DAT_182ae1120) + _DAT_183432d40 + 0x58116b3d;
  uVar5 = (_DAT_183432d40 ^ _UNK_182ae1128) + _DAT_183433068 + 0x590741ab;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183433068 ^ _DAT_182ae1120;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183432d40 ^ _UNK_182ae1128;
  _DAT_183432f98 =
       func_0x00018fce1b00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183433068 + 0x590741ab) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183432d40 + 0x58116b3d));
  _DAT_183433038 =
       (_DAT_183433038 ^ _DAT_183432f98 ^ 0x4c9411f36c374008) + 0xdd3749bb ^ 0xae7efa749b5972cd;
  _DAT_183433020 =
       (_DAT_183433020 * 0x6530b00ca43921dd ^ _DAT_183433038) +
       (_DAT_183432f98 ^ 0x4c9411f36c374008);
  _DAT_1834330a0 = _DAT_183433020 ^ _DAT_183433038;
  _DAT_1834330b0 = 0xdd3749bb;
  _DAT_183432fc8 = func_0x00018fce1b00(_DAT_183432dc8 ^ 0x9000642fffeeb9);
  _DAT_183432f18 = (_DAT_183432f18 ^ _DAT_183432fc8 ^ 0x3b5193d5) + 0x3b5193d5 ^ 0x8053b2f9b5b672fc;
  _DAT_183432db8 =
       (_DAT_183432db8 * -0x376258a021ccd761 ^ _DAT_183432f18) + (_DAT_183432fc8 ^ 0x3b5193d5);
  _DAT_1834330a8 = _DAT_183432db8 ^ _DAT_183432f18;
  _DAT_183432d28 = 0x3b5193d5;
  uVar4 = (_DAT_183432fe0 ^ _DAT_182ae1130) + _DAT_183432f78 + 0x84222325;
  uVar5 = (_DAT_183432f78 ^ _UNK_182ae1138) + _DAT_183432fe0 + 0x6a4e9140;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183432fe0 ^ _DAT_182ae1130;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183432f78 ^ _UNK_182ae1138;
  _DAT_183432f78 =
       func_0x00018fce1b00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183432fe0 + 0x6a4e9140) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183432f78 + 0x84222325));
  uVar4 = _DAT_183432f78 << 0x20 | _DAT_183432f78 >> 0x20;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar4;
  _DAT_183432f58 = (_DAT_183432f58 ^ uVar4) - 0x6a4e9140 ^ 0xbe75d6f2b7d85509;
  _DAT_183432d48 = (_DAT_183432d48 * 0x54dc6335ec3ba363 ^ _DAT_183432f58) + uVar4;
  _DAT_183432fa8 = _DAT_183432d48 ^ _DAT_183432f58;
  _DAT_183432de0 = 0x95b16ec0;
  uVar4 = (_DAT_183432f60 ^ _DAT_182ae1140) + _DAT_1834330c8 + 0x842223da;
  uVar5 = (_DAT_1834330c8 ^ _UNK_182ae1148) + _DAT_183432f60 + 0x6a4e9140;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183432f60 ^ _DAT_182ae1140;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1834330c8 ^ _UNK_182ae1148;
  _DAT_183433028 =
       func_0x00018fce1b00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183432f60 + 0x6a4e9140) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1834330c8 + 0x842223da));
  uVar4 = _DAT_183433028 ^ 0xbf;
  _DAT_183432fc0 = _DAT_183433080 ^ uVar4 ^ 0x6a4e923f;
  _DAT_183432d50 = (_DAT_183432d50 ^ uVar4) + 0x6a4e923f ^ 0xf316251a4cdb74d9;
  _DAT_183433060 = (_DAT_183433060 * -0x1caf3b203703cfb3 ^ _DAT_183432d50) + uVar4;
  _DAT_183433038 = _DAT_183433060 ^ _DAT_183432d50;
  _DAT_183432fd8 = 0x6a4e923f;
  uVar4 = (~_DAT_183432fa8 + 0x95b16ec1) *
          ((_DAT_183432f28 ^ 0xee6cb11a) + (ulonglong)((uint)_DAT_183432f28 & 0xee6cb11a) * 2);
  uVar4 = (uVar4 | _DAT_183432df8) + (uVar4 & _DAT_183432df8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183432ec0 = func_0x00018fce1b00((uVar4 | 0x7bdddfda) + (ulonglong)((uint)uVar4 & 0x7bdddfda))
  ;
  _DAT_183433010 = _DAT_183432df0 ^ _DAT_183432ec0 ^ 0x1000000ff;
  _DAT_183432d38 = (_DAT_183432d38 ^ _DAT_183432ec0) + 0x1000000ff ^ 0x87a5a5c186051e56;
  _DAT_183432ec0 = (_DAT_183432ec0 * -0x4bbfa14b09ee5155 ^ _DAT_183432d38) + _DAT_183432ec0;
  _DAT_183433088 = _DAT_183432ec0 ^ _DAT_183432d38;
  _DAT_183432d08 = 0xff;
  uVar4 = (_DAT_183432f30 ^ _DAT_182ae1150) + _DAT_183432fd8 + 0x84222325;
  uVar5 = (_DAT_183432fd8 ^ _UNK_182ae1158) + _DAT_183432f30 + 0x250228cc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183432f30 ^ _DAT_182ae1150;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183432fd8 ^ _UNK_182ae1158;
  _DAT_183433030 =
       func_0x00018fce1b00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183432f30 + 0x250228cc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183432fd8 + 0x84222325));
  _DAT_183432f58 = (_DAT_183432f58 ^ _DAT_183433030) - 0x250228cc ^ 0xadeec89530b4b264;
  _DAT_183432d08 = (_DAT_183432d08 * 0x5d2b63f1a07a41dd ^ _DAT_183432f58) + _DAT_183433030;
  _DAT_183433040 = _DAT_183432d08 ^ _DAT_183432f58;
  _DAT_183432ec0 = 0xdafdd734;
  uVar4 = (~_DAT_183432d30 + 0x250228cd) *
          ((_DAT_183432f40 ^ 0x842223da) + (ulonglong)((uint)_DAT_183432f40 & 0x842223da) * 2);
  uVar4 = (uVar4 | _DAT_183432f18) + (uVar4 & _DAT_183432f18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183432d38 = func_0x00018fce1b00((uVar4 | 0xa1200b16) + (ulonglong)((uint)uVar4 & 0xa1200b16))
  ;
  uVar4 = _DAT_183432d38 ^ 0x250228ff;
  _DAT_183433078 = _DAT_183432ed8 ^ uVar4 ^ 0x250229cb;
  _DAT_1834330d0 = (_DAT_1834330d0 ^ uVar4) + 0x250229cb ^ 0xd56ac778df1de1ce;
  _DAT_183432d80 = (_DAT_183432d80 * 0x6d1617d3a5c49c3d ^ _DAT_1834330d0) + uVar4;
  _DAT_183432fb0 = _DAT_183432d80 ^ _DAT_1834330d0;
  _DAT_1834330b0 = 0x250229cb;
  uVar4 = (~_DAT_183432d58 + 0x458539c1) *
          ((_DAT_1834330a8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1834330a8 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_183432d78) + (uVar4 & _DAT_183432d78);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183432e08 = func_0x00018fce1b00((uVar4 | 0xc1a71ae5) + (ulonglong)((uint)uVar4 & 0xc1a71ae5))
  ;
  uVar4 = _DAT_183432e08 >> 1 | _DAT_183432e08;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183432e08) & 0xfffffffffff80000;
  _DAT_183432d58 = (_DAT_183432d58 ^ uVar4) - 0x458539c0 ^ 0x1e0068679447c013;
  _DAT_183432f80 = (_DAT_183432f80 * 0x703247e50626149b ^ _DAT_183432d58) + uVar4;
  _DAT_183432ef8 = _DAT_183432f80 ^ _DAT_183432d58;
  _DAT_183432fc0 = 0xba7ac640;
  _DAT_1834330f8 = func_0x00018fce1b00(_DAT_183432e28 ^ 0xff5b00442600c4ab);
  uVar4 = (ulonglong)(((uint)_DAT_1834330f8 ^ 0x200) & 0x45853abf);
  _DAT_183433010 = _DAT_183433030 ^ uVar4 ^ 0x1000000ff;
  _DAT_183432fc0 = (_DAT_183432fc0 ^ uVar4) + 0x1000000ff ^ 0xa97ac436cd88e3ae;
  _DAT_183432fb0 = (_DAT_183432fb0 * 0x3d3a5be2c2d95657 ^ _DAT_183432fc0) + uVar4;
  _DAT_183432d98 = _DAT_183432fb0 ^ _DAT_183432fc0;
  _DAT_1834330e0 = 0xff;
  _DAT_183433038 = func_0x00018fce1b00(_DAT_183432d30 ^ 0x16ffe248ffc338);
  uVar4 = _DAT_183433038 - (_DAT_183433038 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183433038;
  _DAT_183432f00 = _DAT_1834330b0 ^ uVar4 ^ 0x11888dd90;
  _DAT_183433048 = (_DAT_183433048 ^ uVar4) + 0x11888dd90 ^ 0x69537b528a8c1177;
  _DAT_183432f68 = (_DAT_183432f68 * 0x48e325df49c3801 ^ _DAT_183433048) + uVar4;
  _DAT_183432dc8 = _DAT_183432f68 ^ _DAT_183433048;
  _DAT_183432d50 = 0x1888dd90;
  uVar4 = (~_DAT_183432eb0 + 0x3b5193d6) *
          ((_DAT_183432fb0 ^ 0x59156a9e) + (ulonglong)((uint)_DAT_183432fb0 & 0x59156a9e) * 2);
  uVar4 = (uVar4 | _DAT_183432ea8) + (uVar4 & _DAT_183432ea8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183432e10 = func_0x00018fce1b00((uVar4 | 0x6244f94b) + (ulonglong)((uint)uVar4 & 0x6244f94b))
  ;
  _DAT_183432fa8 = (_DAT_183432fa8 ^ _DAT_183432e10) + 0xe666da6e ^ 0x47fe5b1694d9643c;
  _DAT_183432dc0 = (_DAT_183432dc0 * -0xe520092953e55b5 ^ _DAT_183432fa8) + _DAT_183432e10;
  _DAT_183432e98 = _DAT_183432dc0 ^ _DAT_183432fa8;
  _DAT_183432f80 = 0xe666da6e;
  uVar4 = (_DAT_183432f28 ^ _DAT_182ae1160) + _DAT_183432e00 + 0x59156a9e;
  uVar5 = (_DAT_183432e00 ^ _UNK_182ae1168) + _DAT_183432f28 + 0x3b5193d5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183432f28 ^ _DAT_182ae1160;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183432e00 ^ _UNK_182ae1168;
  _DAT_183432fa8 =
       func_0x00018fce1b00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183432f28 + 0x3b5193d5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183432e00 + 0x59156a9e));
  uVar4 = _DAT_183432fa8 << 8 | _DAT_183432fa8 >> 0x38;
  _DAT_183432de8 = (_DAT_183432de8 ^ uVar4) + 0x19110191 ^ 0x73103f15bcb5de9d;
  _DAT_183432ec8 = (_DAT_183432ec8 * -0x339adc304f48649f ^ _DAT_183432de8) + uVar4;
  _DAT_183432f20 = _DAT_183432ec8 ^ _DAT_183432de8;
  _DAT_183432f70 = 0x19110191;
  uVar4 = (_DAT_183432fe0 ^ _DAT_182ae1170) + _DAT_183432f90 + 0x9caafeb5;
  uVar5 = (_DAT_183432f90 ^ _UNK_182ae1178) + _DAT_183432fe0 + 0x1888dd90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183432fe0 ^ _DAT_182ae1170;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183432f90 ^ _UNK_182ae1178;
  _DAT_183432e18 =
       func_0x00018fce1b00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183432fe0 + 0x1888dd90) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183432f90 + 0x9caafeb5));
  _DAT_183432d58 = (_DAT_183432e18 ^ 0x259f2b728000000) & 0xfffffffffe000000;
  _DAT_183433030 = _DAT_183433030 ^ _DAT_183432d58 ^ 0x332e9c4057ff97e2;
  _DAT_183432fa8 = (_DAT_183432fa8 * -0x1d2afa57e8954b27 ^ _DAT_183433030) + _DAT_183432d58;
  _DAT_183433010 = _DAT_183432fa8 ^ _DAT_183433030;
  _DAT_183432e28 = 0;
  uVar4 = ((_DAT_183432d28 ^ 0x842223da) + (ulonglong)((uint)_DAT_183432d28 & 0x842223da) * 2) *
          -_DAT_183432ed8;
  uVar4 = (uVar4 | _DAT_1834330e8) + (uVar4 & _DAT_1834330e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183432f78 = func_0x00018fce1b00((uVar4 | 0x842223da) + (ulonglong)((uint)uVar4 & 0x842223da))
  ;
  uVar4 = _DAT_183432f78 ^ 0xff;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar4;
  _DAT_183432fc8 = _DAT_183432f10 ^ uVar4 ^ 0xff;
  _DAT_183432da8 = (_DAT_183432da8 ^ uVar4) + 0xff ^ 0x6b021081ee3e7f86;
  _DAT_183432ff0 = (_DAT_183432ff0 * -0x7624695f7b69bfdb ^ _DAT_183432da8) + uVar4;
  _DAT_183432f98 = _DAT_183432ff0 ^ _DAT_183432da8;
  _DAT_1834330d0 = 0xff;
  uVar4 = (~_DAT_183432d78 + 0x100000000) *
          ((_DAT_183432e68 ^ 0x59156a9e) + (ulonglong)((uint)_DAT_183432e68 & 0x59156a9e) * 2);
  uVar4 = (uVar4 | _DAT_183433048) + (uVar4 & _DAT_183433048);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1834330d8 = func_0x00018fce1b00((uVar4 | 0xa6ea9561) + (ulonglong)((uint)uVar4 & 0xa6ea9561))
  ;
  uVar4 = (ulonglong)(((uint)_DAT_1834330d8 ^ 0xdd3749ba) & 0xdd3749bb);
  _DAT_183432d90 = (_DAT_183432d90 ^ uVar4) + 0x22c8b644 ^ 0x11b23a10117c562d;
  _DAT_183432d70 = (_DAT_183432d70 * 0x71c12d7721e7702b ^ _DAT_183432d90) + uVar4;
  _DAT_183432ec0 = _DAT_183432d70 ^ _DAT_183432d90;
  _DAT_183432ee0 = 0x22c8b644;
  uVar4 = (_DAT_183432f40 ^ _DAT_182ae1180) + _DAT_183432fb0 + 0x59156a9e;
  uVar5 = (_DAT_183432fb0 ^ _UNK_182ae1188) + _DAT_183432f40 + 0x22c8b644;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183432f40 ^ _DAT_182ae1180;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183432fb0 ^ _UNK_182ae1188;
  _DAT_183432e00 =
       func_0x00018fce1b00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183432f40 + 0x22c8b644) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183432fb0 + 0x59156a9e));
  uVar4 = (_DAT_183432e00 ^ 0x1e0ec87c813287ac) << 0x3d | (_DAT_183432e00 ^ 0x1e0ec87c813287ac) >> 3
  ;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar4;
  _DAT_183432db0 = _DAT_183432db0 ^ uVar4 ^ 0x8d8f96d1dbdb05cb;
  _DAT_183433078 = (_DAT_183433078 * -0x1e96fcb3336dcb9 ^ _DAT_183432db0) + uVar4;
  _DAT_183432d58 = _DAT_183433078 ^ _DAT_183432db0;
  _DAT_1834330b8 = 0;
  _DAT_183432e70 = func_0x00018fce1b00(_DAT_183432d48 + 0x20ff7cca001dff ^ 0x3a);
  uVar4 = _DAT_183432e70 << 0x30 | _DAT_183432e70 >> 0x10;
  _DAT_183432d28 = _DAT_1834330f0 ^ uVar4 ^ 0xff;
  _DAT_183432f58 = (_DAT_183432f58 ^ uVar4) + 0xff ^ 0x139eecd33e7f4558;
  _DAT_183432de0 = (_DAT_183432de0 * 0x69a8b28f248f3375 ^ _DAT_183432f58) + uVar4;
  _DAT_183432d78 = _DAT_183432de0 ^ _DAT_183432f58;
  _DAT_183432ee0 = 0xff;
  uVar4 = (~_DAT_183432db8 + 0xdc334819) *
          ((_DAT_183432d00 ^ 0x58116b3d) + (ulonglong)((uint)_DAT_183432d00 & 0x58116b3d) * 2);
  uVar4 = (uVar4 | _DAT_183432e70) + (uVar4 & _DAT_183432e70);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183432f38 = func_0x00018fce1b00((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_183433000 = _DAT_183433000 ^ _DAT_183432f38 ^ 0x5a2597da048c1d1c;
  _DAT_183433010 = (_DAT_183433010 * -0x5f8269f2a7ea9e51 ^ _DAT_183433000) + _DAT_183432f38;
  _DAT_183432f28 = _DAT_183433010 ^ _DAT_183433000;
  _DAT_183432d38 = 0;
  uVar4 = (~_DAT_183432d30 + 0x100) *
          ((uVar2 ^ 0x84222325 ^ _DAT_183432eb8) +
          (ulonglong)((uint)_DAT_183432eb8 & (uint)(uVar2 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | _DAT_183432d28) + (uVar4 & _DAT_183432d28);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183432e18 =
       func_0x00018fce1b00((uVar2 ^ 0x842223da | uVar4) +
                           (ulonglong)((uint)(uVar2 ^ 0x842223da) & (uint)uVar4));
  _DAT_183432d58 = uVar2 & 0xff;
  _DAT_183432d18 = (_DAT_183432d18 ^ uVar2 ^ _DAT_183432e18) + _DAT_183432d58 ^ 0xdf03a0ec1c4a8350;
  _DAT_183432f80 = (_DAT_183432f80 * 0x631f6ab48acac179 ^ _DAT_183432d18) + (uVar2 ^ _DAT_183432e18)
  ;
  _DAT_1834330d0 = _DAT_183432f80 ^ _DAT_183432d18;
  uVar4 = _DAT_183432d58 << 0x20;
  uVar2 = in_stack_00000038 ^ 0x84222325 ^ _DAT_183433060;
  lVar3 = (in_stack_00000038 ^ 0x84222325) + _DAT_183432fe8;
  uVar5 = uVar2 + lVar3;
  uVar6 = (uVar4 ^ _DAT_183432fe8) + _DAT_183433060 + uVar4;
  uVar2 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar2;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4 ^ _DAT_183432fe8;
  _DAT_183432d80 =
       func_0x00018fce1b00((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183433060 + uVar4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  uVar2 = in_stack_00000038 * uVar4 ^ _DAT_183432d80;
  uVar2 = in_stack_00000038 ^
          (uVar2 & 0xffffffff) * (_DAT_182ae1190 & 0xffffffff) +
          ((ulonglong)_DAT_182ae11a0 * (uVar2 & 0xffffffff) +
           (uVar2 >> 0x20) * (_DAT_182ae1190 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  _DAT_183432ee0 = uVar4 | in_stack_00000038;
  _DAT_183432f38 = (_DAT_183432f38 ^ uVar2) + _DAT_183432ee0 ^ 0xb2a45d1ed690bde3;
  _DAT_183432e78 = (_DAT_183432e78 * 0x601e5b3e1b7d2239 ^ _DAT_183432f38) + uVar2;
  _DAT_183432e88 = _DAT_183432e78 ^ _DAT_183432f38;
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfcde617 -----

void thunk_FUN_18fcd9af2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xfce1915 -----

void FUN_18fce1915(void)

{
  return;
}


// ----- block @ rva 0xfce1981 -----

void FUN_18fce1981(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

