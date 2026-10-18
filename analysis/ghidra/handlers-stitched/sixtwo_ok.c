// ===== STITCHED CORPUS: sixtwo.ok =====
// handlers: 8  continuation blocks: 75  unresolved table targets: 0

// ===== Lsixtwo/ok; _14a3a1d16b9a1102f2c641f2eb4ce5c2 ()V (handler @ image 186482770, runtime 6fffee092770) =====

void FUN_186482770(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001864827d5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180853910 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ok; cEH ()I (handler @ image 186481ae0, runtime 6fffee091ae0) =====

void FUN_186481ae0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186481b00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180853390 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ok; cEI ()Z (handler @ image 186481ce0, runtime 6fffee091ce0) =====

void FUN_186481ce0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186481d00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180853470 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ok; cEJ ()Z (handler @ image 186481ee0, runtime 6fffee091ee0) =====

void FUN_186481ee0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186481f00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180853550 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ok; cEK ()I (handler @ image 1864820e0, runtime 6fffee0920e0) =====

void FUN_1864820e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186482100 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180853630 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ok; cEL ()Lsixtwo/mw; (handler @ image 1864822e0, runtime 6fffee0922e0) =====

void FUN_1864822e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186482300 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180853710 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ok; cEM ()Lsixtwo/gg; (handler @ image 1864824e0, runtime 6fffee0924e0) =====

void FUN_1864824e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186482500 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808537f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ok; cEN (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1864826e0, runtime 6fffee0926e0) =====

undefined8 FUN_1864826e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x6481b03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481b03(void)

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


// ----- block @ rva 0x6481b3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481b3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180853418)();
  return;
}


// ----- block @ rva 0x6481b76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481b76(void)

{
  FUN_190dd72e0();
  (*_DAT_180853428)();
  return;
}


// ----- block @ rva 0x6481bbf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481bbf(void)

{
  FUN_190dd9df0();
  (*_DAT_1808533b8)();
  return;
}


// ----- block @ rva 0x6481bf2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186481bf2(void)

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


// ----- block @ rva 0x6481c16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481c16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1808533e8)();
  return;
}


// ----- block @ rva 0x6481c3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481c3c(void)

{
  (*_DAT_1808533d8)();
  return;
}


// ----- block @ rva 0x6481c4c -----

void FUN_186481c4c(void)

{
  return;
}


// ----- block @ rva 0x6481c54 -----

void FUN_186481c54(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6481d03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481d03(void)

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


// ----- block @ rva 0x6481d3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481d3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1808534f8)();
  return;
}


// ----- block @ rva 0x6481d76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481d76(void)

{
  FUN_190dd72e0();
  (*_DAT_180853498)();
  return;
}


// ----- block @ rva 0x6481d9e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186481d9e(void)

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


// ----- block @ rva 0x6481dbf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481dbf(void)

{
  FUN_190dd9df0();
  (*_DAT_1808534c8)();
  return;
}


// ----- block @ rva 0x6481df2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186481df2(void)

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


// ----- block @ rva 0x6481e3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481e3c(void)

{
  (*_DAT_1808534d8)(0);
  return;
}


// ----- block @ rva 0x6481e4c -----

void FUN_186481e4c(void)

{
  return;
}


// ----- block @ rva 0x6481e54 -----

void FUN_186481e54(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6481f03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481f03(void)

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


// ----- block @ rva 0x6481f61 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186481f61(void)

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


// ----- block @ rva 0x6481f76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481f76(void)

{
  FUN_190dd72e0();
  (*_DAT_1808535e8)();
  return;
}


// ----- block @ rva 0x6481fbf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186481fbf(void)

{
  FUN_190dd9df0();
  (*_DAT_1808535a8)();
  return;
}


// ----- block @ rva 0x6481ff2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186481ff2(void)

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


// ----- block @ rva 0x6482016 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482016(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetBooleanField /*0x300*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180853588)();
  return;
}


// ----- block @ rva 0x648203c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18648203c(void)

{
  (*_DAT_180853568)(0);
  return;
}


// ----- block @ rva 0x648204c -----

void FUN_18648204c(void)

{
  return;
}


// ----- block @ rva 0x6482054 -----

void FUN_186482054(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6482103 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482103(void)

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


// ----- block @ rva 0x648213c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18648213c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180853658)();
  return;
}


// ----- block @ rva 0x6482161 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186482161(void)

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


// ----- block @ rva 0x6482176 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482176(void)

{
  FUN_190dd72e0();
  (*_DAT_1808536c8)();
  return;
}


// ----- block @ rva 0x64821bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1864821bf(void)

{
  FUN_190dd9df0();
  (*_DAT_1808536b8)();
  return;
}


// ----- block @ rva 0x6482216 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482216(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180853668)();
  return;
}


// ----- block @ rva 0x648223c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18648223c(void)

{
  (*_DAT_180853648)();
  return;
}


// ----- block @ rva 0x648224c -----

void FUN_18648224c(void)

{
  return;
}


// ----- block @ rva 0x6482254 -----

void FUN_186482254(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6482303 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482303(void)

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


// ----- block @ rva 0x6482361 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186482361(void)

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


// ----- block @ rva 0x6482376 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482376(void)

{
  FUN_190dd72e0();
  (*_DAT_180853768)();
  return;
}


// ----- block @ rva 0x648239e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18648239e(void)

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


// ----- block @ rva 0x64823bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1864823bf(void)

{
  FUN_190dd9df0();
  (*_DAT_180853748)();
  return;
}


// ----- block @ rva 0x64823f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1864823f2(void)

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


// ----- block @ rva 0x648243d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18648243d(void)

{
  (*_DAT_180853758)();
  return;
}


// ----- block @ rva 0x648244e -----

void FUN_18648244e(void)

{
  return;
}


// ----- block @ rva 0x6482456 -----

void FUN_186482456(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6482503 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482503(void)

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


// ----- block @ rva 0x648253c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18648253c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180853858)();
  return;
}


// ----- block @ rva 0x6482561 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186482561(void)

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


// ----- block @ rva 0x6482576 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482576(void)

{
  FUN_190dd72e0();
  (*_DAT_180853818)();
  return;
}


// ----- block @ rva 0x648259e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18648259e(void)

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


// ----- block @ rva 0x64825bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1864825bf(void)

{
  FUN_190dd9df0();
  (*_DAT_180853838)();
  return;
}


// ----- block @ rva 0x64825f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1864825f2(void)

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


// ----- block @ rva 0x648263d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18648263d(void)

{
  (*_DAT_180853878)();
  return;
}


// ----- block @ rva 0x648264e -----

void FUN_18648264e(void)

{
  return;
}


// ----- block @ rva 0x6482656 -----

void FUN_186482656(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x64827d8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1864827d8(void)

{
  FUN_190de3220();
  (*_DAT_180853a48)();
  return;
}


// ----- block @ rva 0x648282f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18648282f(void)

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


// ----- block @ rva 0x64829e8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1864829e8(void)

{
  FUN_190de3220();
  (*_DAT_180853948)();
  return;
}


// ----- block @ rva 0x6482a1b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186482a1b(void)

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


// ----- block @ rva 0x6482adc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482adc(void)

{
  FUN_190ddfc90();
  (*_DAT_1808539c8)();
  return;
}


// ----- block @ rva 0x6482b33 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186482b33(void)

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


// ----- block @ rva 0x6482ba0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482ba0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallLongMethodA /*0x1b0*/))();
  (*_DAT_180853a08)();
  return;
}


// ----- block @ rva 0x6482be0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482be0(void)

{
  FUN_190dd72e0();
  (*_DAT_180853ac8)();
  return;
}


// ----- block @ rva 0x6482cc0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482cc0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180853b18)();
  return;
}


// ----- block @ rva 0x6482cd2 -----

void FUN_186482cd2(void)

{
  return;
}


// ----- block @ rva 0x6482cda -----

void FUN_186482cda(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x6482e0d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482e0d(void)

{
  FUN_190ddce00();
  (*_DAT_180853cc8)();
  return;
}


// ----- block @ rva 0x6482e85 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482e85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticLongField /*0x4b8*/))();
  (*_DAT_180853c58)();
  return;
}


// ----- block @ rva 0x6482ef3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186482ef3(void)

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


// ----- block @ rva 0x6482f64 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186482f64(void)

{
  FUN_190dd72e0();
  (*_DAT_180853c28)();
  return;
}


// ----- block @ rva 0x6483063 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186483063(void)

{
  FUN_190dd72e0();
  (*_DAT_180853c38)();
  return;
}


// ----- block @ rva 0x64830df -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1864830df(void)

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


// ----- block @ rva 0x6483141 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186483141(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180853b98)();
  return;
}


// ----- block @ rva 0x6483153 -----

void FUN_186483153(void)

{
  return;
}


// ----- block @ rva 0x648315b -----

void FUN_18648315b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

