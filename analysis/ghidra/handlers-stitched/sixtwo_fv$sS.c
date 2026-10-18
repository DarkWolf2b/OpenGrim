// ===== STITCHED CORPUS: sixtwo.fv$sS =====
// handlers: 7  continuation blocks: 79  unresolved table targets: 0

// ===== Lsixtwo/fv$sS; armorIndex ()I (handler @ image 18bb7d190, runtime 6ffff378d190) =====

void FUN_18bb7d190(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bb7d1b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ca2550 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fv$sS; armorType ()Lnet/minecraft/class_8051; (handler @ image 18bb7d390, runtime 6ffff378d390) =====

void FUN_18bb7d390(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bb7d3b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ca2630 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fv$sS; currentArmorEmpty ()Z (handler @ image 18bb7d790, runtime 6ffff378d790) =====

void FUN_18bb7d790(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bb7d7b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ca27f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fv$sS; equals (Ljava/lang/Object;)Z (handler @ image 18bb7bd50, runtime 6ffff378bd50) =====

void FUN_18bb7bd50(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bb7bdd9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ca1f10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fv$sS; hashCode ()I (handler @ image 18bb7a8f0, runtime 6ffff378a8f0) =====

void FUN_18bb7a8f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bb7a973 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ca1890 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fv$sS; sourceSlot ()I (handler @ image 18bb7d590, runtime 6ffff378d590) =====

void FUN_18bb7d590(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018bb7d5b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ca2710 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fv$sS; toString ()Ljava/lang/String; (handler @ image 18bb795c0, runtime 6ffff37895c0) =====

void FUN_18bb795c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018bb79643 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ca1260 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xbb79646 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb79646(void)

{
  FUN_190de3220();
  (*_DAT_181ca1418)();
  return;
}


// ----- block @ rva 0xbb79bff -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb79bff(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181ca1558)();
  return;
}


// ----- block @ rva 0xbb79c94 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb79c94(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  FUN_190dd72e0();
  (*_DAT_181ca16b8)();
  return;
}


// ----- block @ rva 0xbb79e6f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb79e6f(void)

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


// ----- block @ rva 0xbb79f27 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb79f27(void)

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


// ----- block @ rva 0xbb7a2ae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7a2ae(void)

{
  undefined1 uVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000058;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  uStack0000000000000058 = in_stack_00000080;
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  uVar1 = FUN_190dc1be0(0x7fe,&stack0x00000088);
  switch(uVar1) {
  case 0:
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
  case 6:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
  case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x12:
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
  case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
  case 0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
  case 0x22:
  case 0x46:
  case 0x4c:
  case 0x4e:
  case 0x56:
  case 0x58:
  case 0x5e:
  case 0x6a:
  case 0x72:
  case 0x7e:
  case 0x80:
  case 0x84:
  case 0x8a:
  case 0x8c:
  case 0x94:
  case 0x96:
  case 0xa2:
  case 0xa6:
  case 0xa8:
  case 0xaa:
  case 0xac:
  case 0xae:
  case 0xb4:
  case 0xbe:
  case 0xc0:
  case 200:
  case 0xca:
  case 0xcc:
  case 0xdc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x35:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x49:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x71:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x79:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x85:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x87:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x89:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x91:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x93:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x97:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xab:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xad:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xaf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 199:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe1:
  case 0xe5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe2:
  case 0xe4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe3:
  case 0xe7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe8:
  case 0xea:
  case 0xec:
  case 0xf0:
  case 0xf2:
  case 0xf4:
  case 0xf6:
  case 0xf8:
  case 0xfa:
  case 0xfc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xeb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xed:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xee:
  case 0xfe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xef:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xff:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbb7a4c4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7a4c4(void)

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


// ----- block @ rva 0xbb7a4e8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7a4e8(void)

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


// ----- block @ rva 0xbb7a7f7 -----

void FUN_18bb7a7f7(void)

{
  return;
}


// ----- block @ rva 0xbb7a976 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7a976(void)

{
  FUN_190de3220();
  (*_DAT_181ca1d38)();
  return;
}


// ----- block @ rva 0xbb7a9cd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7a9cd(void)

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


// ----- block @ rva 0xbb7aada -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7aada(void)

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


// ----- block @ rva 0xbb7ad68 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7ad68(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_181ca1d18)();
  return;
}


// ----- block @ rva 0xbb7b54e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7b54e(void)

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


// ----- block @ rva 0xbb7b79d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7b79d(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca1db8)();
  return;
}


// ----- block @ rva 0xbb7b917 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7b917(void)

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


// ----- block @ rva 0xbb7bb20 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7bb20(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca18d8)();
  return;
}


// ----- block @ rva 0xbb7bb48 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7bb48(void)

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


// ----- block @ rva 0xbb7bc28 -----

void FUN_18bb7bc28(void)

{
  return;
}


// ----- block @ rva 0xbb7bc3c -----

void FUN_18bb7bc3c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbb7bddc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7bddc(void)

{
  FUN_190de3220();
  (*_DAT_181ca2068)();
  return;
}


// ----- block @ rva 0xbb7be67 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7be67(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181ca21a8)();
  return;
}


// ----- block @ rva 0xbb7c29f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7c29f(void)

{
  FUN_190ddce00();
  (*_DAT_181ca2018)();
  return;
}


// ----- block @ rva 0xbb7c39a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7c39a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181ca22e8)();
  return;
}


// ----- block @ rva 0xbb7ca74 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7ca74(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181ca1f48)();
  return;
}


// ----- block @ rva 0xbb7cab0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7cab0(void)

{
  undefined1 uVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  uStack0000000000000068 = in_stack_00000088;
  uStack0000000000000058 = in_stack_00000080;
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  uVar1 = FUN_190dc1be0(0x800,&stack0x00000098);
  switch(uVar1) {
  case 0:
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
  case 0x16:
  case 0x18:
  case 0x24:
  case 0x26:
  case 0x30:
  case 0x32:
  case 0x34:
  case 0x42:
  case 0x44:
  case 0x46:
  case 0x52:
  case 0x5e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
  case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x35:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x49:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6d:
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6f:
  case 0x71:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x70:
  case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x74:
  case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x76:
  case 0x78:
  case 0x7e:
  case 0x82:
  case 0x84:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x79:
  case 0x7a:
  case 0x7c:
  case 0x80:
  case 0x86:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x85:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x87:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x88:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x89:
  case 0x8f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8a:
  case 0x8e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8b:
  case 0x8d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x90:
  case 0x99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x91:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x92:
  case 0x96:
  case 0x9a:
  case 0x9c:
  case 0xa2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x93:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x94:
  case 0x98:
  case 0x9b:
  case 0x9e:
  case 0xa0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x97:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa5:
  case 0xa7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa6:
  case 0xaa:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa9:
  case 0xab:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xac:
  case 0xb9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xad:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xae:
  case 0xb0:
  case 0xb4:
  case 0xba:
  case 0xbe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xaf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb2:
  case 0xb6:
  case 0xb8:
  case 0xbc:
  case 0xbf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc1:
  case 199:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc3:
  case 0xc5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc4:
  case 0xc6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 200:
  case 0xcf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xca:
  case 0xd0:
  case 0xd4:
  case 0xd8:
  case 0xda:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcc:
  case 0xce:
  case 0xd2:
  case 0xd6:
  case 0xdb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdd:
  case 0xdf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xde:
  case 0xe0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe1:
  case 0xe3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe4:
  case 0xea:
  case 0xfc:
  case 0xfe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe8:
  case 0xec:
  case 0xee:
  case 0xf0:
  case 0xf2:
  case 0xf4:
  case 0xf6:
  case 0xf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xeb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xed:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xef:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfa:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xff:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xbb7cc8a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7cc8a(void)

{
  FUN_190ddfc90();
  (*_DAT_181ca1f58)();
  return;
}


// ----- block @ rva 0xbb7ccbd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7ccbd(void)

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


// ----- block @ rva 0xbb7cf57 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7cf57(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca1f98)();
  return;
}


// ----- block @ rva 0xbb7d05f -----

void FUN_18bb7d05f(void)

{
  return;
}


// ----- block @ rva 0xbb7d1b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d1b3(void)

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


// ----- block @ rva 0xbb7d1ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d1ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181ca2568)();
  return;
}


// ----- block @ rva 0xbb7d211 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d211(void)

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


// ----- block @ rva 0xbb7d226 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d226(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca25a8)();
  return;
}


// ----- block @ rva 0xbb7d24e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d24e(void)

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


// ----- block @ rva 0xbb7d26f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d26f(void)

{
  FUN_190dd9df0();
  (*_DAT_181ca25c8)();
  return;
}


// ----- block @ rva 0xbb7d2a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d2a2(void)

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


// ----- block @ rva 0xbb7d2fc -----

void FUN_18bb7d2fc(void)

{
  return;
}


// ----- block @ rva 0xbb7d304 -----

void FUN_18bb7d304(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbb7d3b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d3b3(void)

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


// ----- block @ rva 0xbb7d411 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d411(void)

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


// ----- block @ rva 0xbb7d426 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d426(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca2668)();
  return;
}


// ----- block @ rva 0xbb7d44e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d44e(void)

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


// ----- block @ rva 0xbb7d46f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d46f(void)

{
  FUN_190dd9df0();
  (*_DAT_181ca2648)();
  return;
}


// ----- block @ rva 0xbb7d4a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d4a2(void)

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


// ----- block @ rva 0xbb7d4c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d4c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181ca26c8)();
  return;
}


// ----- block @ rva 0xbb7d4fe -----

void FUN_18bb7d4fe(void)

{
  return;
}


// ----- block @ rva 0xbb7d506 -----

void FUN_18bb7d506(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbb7d5b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d5b3(void)

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


// ----- block @ rva 0xbb7d5ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d5ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181ca2758)();
  return;
}


// ----- block @ rva 0xbb7d611 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d611(void)

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


// ----- block @ rva 0xbb7d626 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d626(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca2738)();
  return;
}


// ----- block @ rva 0xbb7d64e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d64e(void)

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


// ----- block @ rva 0xbb7d66f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d66f(void)

{
  FUN_190dd9df0();
  (*_DAT_181ca2728)();
  return;
}


// ----- block @ rva 0xbb7d6a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d6a2(void)

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


// ----- block @ rva 0xbb7d6ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d6ec(void)

{
  (*_DAT_181ca27a8)();
  return;
}


// ----- block @ rva 0xbb7d6fc -----

void FUN_18bb7d6fc(void)

{
  return;
}


// ----- block @ rva 0xbb7d704 -----

void FUN_18bb7d704(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbb7d7b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d7b3(void)

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


// ----- block @ rva 0xbb7d7ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d7ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181ca2878)();
  return;
}


// ----- block @ rva 0xbb7d826 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d826(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca2858)();
  return;
}


// ----- block @ rva 0xbb7d84e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d84e(void)

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


// ----- block @ rva 0xbb7d86f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d86f(void)

{
  FUN_190dd9df0();
  (*_DAT_181ca2838)();
  return;
}


// ----- block @ rva 0xbb7d8a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7d8a2(void)

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


// ----- block @ rva 0xbb7d8c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d8c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetBooleanField /*0x300*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181ca2808)();
  return;
}


// ----- block @ rva 0xbb7d8ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d8ec(void)

{
  (*_DAT_181ca2888)(0);
  return;
}


// ----- block @ rva 0xbb7d8fc -----

void FUN_18bb7d8fc(void)

{
  return;
}


// ----- block @ rva 0xbb7d904 -----

void FUN_18bb7d904(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xbb7d9e8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7d9e8(void)

{
  FUN_190ddfc90();
  (*_DAT_181ca2ba8)();
  return;
}


// ----- block @ rva 0xbb7ddb5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7ddb5(void)

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


// ----- block @ rva 0xbb7ddf2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7ddf2(void)

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


// ----- block @ rva 0xbb7dfc8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7dfc8(void)

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


// ----- block @ rva 0xbb7dfdd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7dfdd(void)

{
  FUN_190dd72e0();
  (*_DAT_181ca2a58)();
  return;
}


// ----- block @ rva 0xbb7e059 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7e059(void)

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


// ----- block @ rva 0xbb7e1cd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18bb7e1cd(void)

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


// ----- block @ rva 0xbb7e21f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7e21f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184194800();
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


// ----- block @ rva 0xbb7e278 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18bb7e278(void)

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


// ----- block @ rva 0xbb7e317 -----

void FUN_18bb7e317(void)

{
  return;
}


// ----- block @ rva 0xbb7e321 -----

void FUN_18bb7e321(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

