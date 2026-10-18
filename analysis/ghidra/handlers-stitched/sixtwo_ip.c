// ===== STITCHED CORPUS: sixtwo.ip =====
// handlers: 5  continuation blocks: 122  unresolved table targets: 0

// ===== Lsixtwo/ip; _d8868ff4e2dd8e5a978546520563325a ()V (handler @ image 189395610, runtime 6ffff0fa5610) =====

void FUN_189395610(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189395675 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181301d50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ip; blC (Ljava/lang/String;)Lsixtwo/ir; (handler @ image 1893911e0, runtime 6ffff0fa11e0) =====

void FUN_1893911e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xdf9,0x33)
      /* POOL[0xdf9,0x33]: ixtwo/b | kSCdo | blY | ()Lsixtwo/ip; | sixtwo/ip | blE | itera */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001893912a4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181300980 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ip; blD ()Ljava/util/Map; (handler @ image 189395180, runtime 6ffff0fa5180) =====

void FUN_189395180(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001893951a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181301b50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ip; blE ()Ljava/util/List; (handler @ image 189395380, runtime 6ffff0fa5380) =====

void FUN_189395380(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001893953a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181301c30 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/ip; blF (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 189395580, runtime 6ffff0fa5580) =====

undefined8 FUN_189395580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x93912a7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893912a7(void)

{
  FUN_190ddce00();
  (*_DAT_181301468)();
  return;
}


// ----- block @ rva 0x939360c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939360c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181301028)();
  return;
}


// ----- block @ rva 0x93939ff -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893939ff(void)

{
  (*_DAT_181300a08)();
  return;
}


// ----- block @ rva 0x9393bf4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189393bf4(void)

{
  FUN_190dd72e0();
  (*_DAT_1813013b8)();
  return;
}


// ----- block @ rva 0x939425a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939425a(void)

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


// ----- block @ rva 0x9394446 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189394446(void)

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


// ----- block @ rva 0x9394651 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189394651(void)

{
  (*_DAT_181301228)();
  return;
}


// ----- block @ rva 0x9394934 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189394934(void)

{
  (*_DAT_181301308)();
  return;
}


// ----- block @ rva 0x9394bb2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189394bb2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  (*_DAT_181300fc8)();
  return;
}


// ----- block @ rva 0x9394fe9 -----

void FUN_189394fe9(void)

{
  return;
}


// ----- block @ rva 0x9395055 -----

void FUN_189395055(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x93951a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893951a3(void)

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


// ----- block @ rva 0x93951dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893951dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181301b68)();
  return;
}


// ----- block @ rva 0x9395201 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189395201(void)

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


// ----- block @ rva 0x9395216 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395216(void)

{
  FUN_190dd72e0();
  (*_DAT_181301ba8)();
  return;
}


// ----- block @ rva 0x939523e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939523e(void)

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


// ----- block @ rva 0x93952b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893952b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181301bc8)();
  return;
}


// ----- block @ rva 0x93952dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893952dd(void)

{
  (*_DAT_181301bb8)();
  return;
}


// ----- block @ rva 0x93952ee -----

void FUN_1893952ee(void)

{
  return;
}


// ----- block @ rva 0x93952f6 -----

void FUN_1893952f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x93953a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893953a3(void)

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


// ----- block @ rva 0x93953dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893953dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181301cb8)();
  return;
}


// ----- block @ rva 0x9395416 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395416(void)

{
  FUN_190dd72e0();
  (*_DAT_181301c58)();
  return;
}


// ----- block @ rva 0x939543e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939543e(void)

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


// ----- block @ rva 0x939545f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939545f(void)

{
  FUN_190dd9df0();
  (*_DAT_181301c88)();
  return;
}


// ----- block @ rva 0x9395492 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189395492(void)

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


// ----- block @ rva 0x93954b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893954b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181301cc8)();
  return;
}


// ----- block @ rva 0x93954ee -----

void FUN_1893954ee(void)

{
  return;
}


// ----- block @ rva 0x93954f6 -----

void FUN_1893954f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9395678 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395678(void)

{
  FUN_190de3220();
  (*_DAT_181301f48)();
  return;
}


// ----- block @ rva 0x939572b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939572b(void)

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


// ----- block @ rva 0x939577f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939577f(void)

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


// ----- block @ rva 0x9395888 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395888(void)

{
  FUN_190de3220();
  (*_DAT_181301ea8)();
  return;
}


// ----- block @ rva 0x9395903 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189395903(void)

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


// ----- block @ rva 0x9395a80 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395a80(void)

{
  FUN_190dd72e0();
  (*_DAT_181301da8)();
  return;
}


// ----- block @ rva 0x9395aa8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189395aa8(void)

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


// ----- block @ rva 0x9395ac9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395ac9(void)

{
  FUN_190ddce00();
  (*_DAT_181301eb8)();
  return;
}


// ----- block @ rva 0x9395b72 -----

void FUN_189395b72(void)

{
  return;
}


// ----- block @ rva 0x9395b7a -----

void FUN_189395b7a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9395cad -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395cad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1813020f8)();
  return;
}


// ----- block @ rva 0x9395d53 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189395d53(void)

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


// ----- block @ rva 0x9395d68 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395d68(void)

{
  FUN_190dd72e0();
  (*_DAT_181302028)();
  return;
}


// ----- block @ rva 0x9395db1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395db1(void)

{
  FUN_190dd9df0();
  (*_DAT_181302158)();
  return;
}


// ----- block @ rva 0x9395e62 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395e62(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302048)();
  return;
}


// ----- block @ rva 0x9395ea6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395ea6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813020c8)();
  return;
}


// ----- block @ rva 0x9395ee0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189395ee0(void)

{
  FUN_190dd9df0();
  (*_DAT_181302078)();
  return;
}


// ----- block @ rva 0x9395f55 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189395f55(void)

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


// ----- block @ rva 0x9396080 -----

void FUN_189396080(void)

{
  return;
}


// ----- block @ rva 0x93960b2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893960b2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    (*_DAT_1813020b8)();
    return;
  }
  (*_DAT_1813020b8)();
  return;
}


// ----- block @ rva 0x93960d5 -----

void FUN_1893960d5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x93961ad -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893961ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1813022d8)();
  return;
}


// ----- block @ rva 0x939625d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939625d(void)

{
  FUN_190dd72e0();
  (*_DAT_181302288)();
  return;
}


// ----- block @ rva 0x93962a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893962a6(void)

{
  FUN_190dd9df0();
  (*_DAT_181302298)();
  return;
}


// ----- block @ rva 0x939633c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939633c(void)

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


// ----- block @ rva 0x9396357 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189396357(void)

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


// ----- block @ rva 0x93963b5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893963b5(void)

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


// ----- block @ rva 0x93963ca -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893963ca(void)

{
  FUN_190dd9df0();
  (*_DAT_1813022e8)();
  return;
}


// ----- block @ rva 0x93964b7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893964b7(void)

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


// ----- block @ rva 0x9396521 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189396521(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (*_DAT_181302268)();
  return;
}


// ----- block @ rva 0x9396564 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189396564(void)

{
  (*_DAT_1813022a8)();
  return;
}


// ----- block @ rva 0x939656c -----

void FUN_18939656c(void)

{
  return;
}


// ----- block @ rva 0x939669b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939669b(void)

{
  FUN_190ddfc90();
  (*_DAT_181302518)();
  return;
}


// ----- block @ rva 0x939670d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939670d(void)

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


// ----- block @ rva 0x9396746 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189396746(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181302508)();
  return;
}


// ----- block @ rva 0x939675f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939675f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallFloatMethodA /*0x1c8*/))();
  (*_DAT_181302458)();
  return;
}


// ----- block @ rva 0x93967a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893967a3(void)

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


// ----- block @ rva 0x93967bc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893967bc(void)

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


// ----- block @ rva 0x939682f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939682f(void)

{
  FUN_190dd9df0();
  (*_DAT_181302478)();
  return;
}


// ----- block @ rva 0x93968ed -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893968ed(void)

{
  longlong *unaff_RSI;
  longlong in_stack_00000048;
  
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
  switch(in_stack_00000048 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9396a07 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189396a07(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302578)();
  return;
}


// ----- block @ rva 0x9396a74 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189396a74(void)

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


// ----- block @ rva 0x9396aca -----

void FUN_189396aca(void)

{
  return;
}


// ----- block @ rva 0x9396ad8 -----

void FUN_189396ad8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9396bc2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189396bc2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181302868)();
  return;
}


// ----- block @ rva 0x9396d81 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189396d81(void)

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


// ----- block @ rva 0x9396ea9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189396ea9(void)

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


// ----- block @ rva 0x9397009 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397009(void)

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


// ----- block @ rva 0x93970f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893970f2(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813027f8)();
  return;
}


// ----- block @ rva 0x939716f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939716f(void)

{
  FUN_190dd72e0();
  (*_DAT_1813028a8)();
  return;
}


// ----- block @ rva 0x939720f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939720f(undefined4 param_1)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000050;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))(param_1,in_stack_00000050);
  (*_DAT_181302828)();
  return;
}


// ----- block @ rva 0x9397278 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397278(void)

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


// ----- block @ rva 0x939735b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939735b(void)

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


// ----- block @ rva 0x9397460 -----

void FUN_189397460(void)

{
  return;
}


// ----- block @ rva 0x9397471 -----

void FUN_189397471(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9397558 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397558(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x9397594 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397594(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302a08)();
  return;
}


// ----- block @ rva 0x93975d1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893975d1(void)

{
  FUN_190dd72e0();
  (*_DAT_1813029b8)();
  return;
}


// ----- block @ rva 0x93975f9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893975f9(void)

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


// ----- block @ rva 0x939761d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939761d(void)

{
  FUN_190dd9df0();
  (*_DAT_1813029c8)();
  return;
}


// ----- block @ rva 0x9397650 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397650(void)

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


// ----- block @ rva 0x9397677 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397677(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302a18)();
  return;
}


// ----- block @ rva 0x93976ae -----

void FUN_1893976ae(void)

{
  return;
}


// ----- block @ rva 0x93976bb -----

void FUN_1893976bb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9397768 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397768(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x93977c9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893977c9(void)

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


// ----- block @ rva 0x93977e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893977e1(void)

{
  FUN_190dd72e0();
  (*_DAT_181302ad8)();
  return;
}


// ----- block @ rva 0x9397809 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397809(void)

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


// ----- block @ rva 0x9397860 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397860(void)

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


// ----- block @ rva 0x9397887 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397887(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302ac8)();
  return;
}


// ----- block @ rva 0x93978ae -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893978ae(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_181302a88)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x93978be -----

void FUN_1893978be(void)

{
  return;
}


// ----- block @ rva 0x93978cb -----

void FUN_1893978cb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x939797b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939797b(void)

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


// ----- block @ rva 0x93979b4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893979b4(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302bd8)();
  return;
}


// ----- block @ rva 0x93979ee -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893979ee(void)

{
  FUN_190dd72e0();
  (*_DAT_181302b68)();
  return;
}


// ----- block @ rva 0x9397a16 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397a16(void)

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


// ----- block @ rva 0x9397a37 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397a37(void)

{
  FUN_190dd9df0();
  (*_DAT_181302bb8)();
  return;
}


// ----- block @ rva 0x9397a6a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397a6a(void)

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


// ----- block @ rva 0x9397a8e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397a8e(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302ba8)();
  return;
}


// ----- block @ rva 0x9397ab5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397ab5(void)

{
  (*_DAT_181302bc8)();
  return;
}


// ----- block @ rva 0x9397ac6 -----

void FUN_189397ac6(void)

{
  return;
}


// ----- block @ rva 0x9397ad3 -----

void FUN_189397ad3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9397b8b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397b8b(void)

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


// ----- block @ rva 0x9397bc4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397bc4(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302c68)();
  return;
}


// ----- block @ rva 0x9397be9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397be9(void)

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


// ----- block @ rva 0x9397bfe -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397bfe(void)

{
  FUN_190dd72e0();
  (*_DAT_181302c48)();
  return;
}


// ----- block @ rva 0x9397c26 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397c26(void)

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


// ----- block @ rva 0x9397c7a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189397c7a(void)

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


// ----- block @ rva 0x9397c9e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397c9e(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181302c88)();
  return;
}


// ----- block @ rva 0x9397cc5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397cc5(void)

{
  (*_DAT_181302c78)();
  return;
}


// ----- block @ rva 0x9397cd6 -----

void FUN_189397cd6(void)

{
  return;
}


// ----- block @ rva 0x9397ce3 -----

void FUN_189397ce3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

