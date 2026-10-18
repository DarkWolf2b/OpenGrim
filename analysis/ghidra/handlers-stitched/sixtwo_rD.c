// ===== STITCHED CORPUS: sixtwo.rD =====
// handlers: 39  continuation blocks: 393  unresolved table targets: 0
// tables not in tables.json: ['0x117aa8', '0x117b58', '0x117b68', '0x118338', '0x118348', '0x118358', '0x118368', '0x118378', '0x118388', '0x118398', '0x1183a8', '0x1183b8', '0x1183c8', '0x1183d8', '0x11b910', '0x11c028', '0x11c038', '0x11c048', '0x11c058', '0x11c068']

// ===== Lsixtwo/rD; _2c446001dd787cb011ca4363782d7f45 ()V (handler @ image 18415aea0, runtime 6fffebd6aea0) =====

void FUN_18415aea0(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined *puStack_48;
  
  puStack_48 = &UNK_18415aeb6;
  lVar3 = FUN_180001180();
  lVar3 = -lVar3;
  *(undefined8 *)(&stack0x00002960 + lVar3) = unaff_XMM15_Qa;
  *(undefined8 *)(&stack0x00002968 + lVar3) = unaff_XMM15_Qb;
  *(undefined8 *)(&stack0x00002950 + lVar3) = unaff_XMM14_Qa;
  *(undefined8 *)(&stack0x00002958 + lVar3) = unaff_XMM14_Qb;
  *(undefined8 *)(&stack0x00002940 + lVar3) = unaff_XMM13_Qa;
  *(undefined8 *)(&stack0x00002948 + lVar3) = unaff_XMM13_Qb;
  *(undefined8 *)(&stack0x00002930 + lVar3) = unaff_XMM12_Qa;
  *(undefined8 *)(&stack0x00002938 + lVar3) = unaff_XMM12_Qb;
  *(undefined8 *)(&stack0x00002920 + lVar3) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x00002928 + lVar3) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x00002910 + lVar3) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00002918 + lVar3) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00002900 + lVar3) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00002908 + lVar3) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x000028f0 + lVar3) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x000028f8 + lVar3) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x000028e0 + lVar3) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000028e8 + lVar3) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x000028d0 + lVar3) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000028d8 + lVar3) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = 0;
  *(undefined8 *)(&stack0x00000050 + lVar3) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar3) = 0x3b92038fc4bff878;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar3) = 0x3ba14865a34e7f8d;
  *(undefined **)((longlong)&puStack_48 + lVar3) = &UNK_18415af6b;
  uVar4 = BLOB_DECRYPTOR(image-addr,resolved-ptr,len)();
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = uVar4;
  pcVar1 = *(code **)(param_1 + JNI->ExceptionCheck /*0x720*/);
  *(undefined **)((longlong)&puStack_48 + lVar3) = &UNK_18415af7c;
  cVar2 = (*pcVar1)(param_1);
                    /* WARNING: Jumptable at 0x00018415af8e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180121460 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlA ()Ljava/util/concurrent/CompletableFuture; (handler @ image 184117f80, runtime 6fffebd27f80) =====

void FUN_184117f80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184117fdc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180113d60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlB ()Ljava/util/concurrent/CompletableFuture; (handler @ image 18411b660, runtime 6fffebd2b660) =====

void FUN_18411b660(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xed2,0x37)
      /* POOL[0xed2,0x37]: tion/Consumer | (Lsixtwo/in;Z)V | l | java/util/concurrent/Co */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411b6f5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180115290 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlC (ILjava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture; (handler @ image 184125720, runtime 6fffebd35720) =====

void FUN_184125720(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018412581c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180118660 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlD (Ljava/lang/String;)V (handler @ image 184172f80, runtime 6fffebd82f80) =====

void FUN_184172f80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x8e10,0x18e)
      /* POOL[0x8e10,0x18e]: J | ()Lsixtwo/ge; | sixtwo/fg | orwtF | sixtwo/ge | aZx | (Ljava/lang/Class;)Lsixtwo/gg; | bag | uVCNi | RJ | sixtwo/cM | NAnkv | [Lsixtwo/cM; | xFxGY | ()[Lsixtwo/cM; | dzTse | Lsixtwo/cM; | cbCbj | WCwDP | MENWL | YO | sixtwo/dA | NevtZ | wsPfp | sixtwo/ee | arS | bab | aki | thWij | Lsixtwo/cu; | sixtwo/gA | bbQ | bbP | pWbaz | Lsixtwo/cD; | bzx | sixtwo/fr | aOQ | ()Lnet/minecraft/class_1309; | srWas | RliRe | MQFiv | method_24828 | method_6128 | method_6043 | net/minecraft/class */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184172fe0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180122be0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlE ()V (handler @ image 184174e40, runtime 6fffebd84e40) =====

void FUN_184174e40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2e80,0xa3)
      /* POOL[0x2e80,0xa3]: y | FIUJu | JtQii | dme | ()Lsixtwo/qS; | sixtwo/qS | ddX | eU | sixtwo/cD | VP | sixtwo/jb | byM | (I)Ljava/lang/String; | bBkRV | jtBbb | BGcCS | eN | cou | cez | ddU | (FFFLsixtwo/cK;)V | FsLFL | gwmJQ | eV */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184174e98 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180123830 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlF ()Ljava/util/concurrent/CompletableFuture; (handler @ image 184176db0, runtime 6fffebd86db0) =====

void FUN_184176db0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c3c,0x15a)
      /* POOL[0x7c3c,0x15a]: boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | brt | bou | bru | bov | brv | bow | brw | box | brx | boy | bry | boz | brz | boA */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184176e38 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1801244f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlG ()V (handler @ image 184179570, runtime 6fffebd89570) =====

void FUN_184179570(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018417965e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180125390 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlH (ILjava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 18417e780, runtime 6fffebd8e780) =====

void FUN_18417e780(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018417e844 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180126990 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlI (Ljava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 184181a40, runtime 6fffebd91a40) =====

void FUN_184181a40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184181b01 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180127820 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlL ()Lsixtwo/ia; (handler @ image 184119860, runtime 6fffebd29860) =====

void FUN_184119860(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001841198a7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1801146b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlN ()Lsixtwo/iQ; (handler @ image 184119b60, runtime 6fffebd29b60) =====

void FUN_184119b60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184119ba7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1801147e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlO ()Lsixtwo/iB; (handler @ image 184119e60, runtime 6fffebd29e60) =====

void FUN_184119e60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184119ea7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180114910 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlP ()Lsixtwo/iG; (handler @ image 18411a160, runtime 6fffebd2a160) =====

void FUN_18411a160(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411a1a7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180114a40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlQ ()Lsixtwo/jL; (handler @ image 18411a460, runtime 6fffebd2a460) =====

void FUN_18411a460(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411a4a7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180114b70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlS ()Lsixtwo/pI; (handler @ image 18411a760, runtime 6fffebd2a760) =====

void FUN_18411a760(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411a7a7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180114ca0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlU ()Lsixtwo/iq; (handler @ image 18411aa60, runtime 6fffebd2aa60) =====

void FUN_18411aa60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411aaa7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180114dd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlV ()Lsixtwo/iv; (handler @ image 18411ad60, runtime 6fffebd2ad60) =====

void FUN_18411ad60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411ada7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180114f00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlW ()Lsixtwo/qP; (handler @ image 18411b060, runtime 6fffebd2b060) =====

void FUN_18411b060(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411b0a7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180115030 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlY ()Lsixtwo/qR; (handler @ image 18411b360, runtime 6fffebd2b360) =====

void FUN_18411b360(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411b3a7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180115160 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dlz (Ljava/lang/String;)Ljava/util/concurrent/CompletableFuture; (handler @ image 18410f400, runtime 6fffebd1f400) =====

void FUN_18410f400(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018410f4a1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1801112a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dma ()Lsixtwo/qN; (handler @ image 18411ff40, runtime 6fffebd2ff40) =====

void FUN_18411ff40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018411ff87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180116c60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmb ()Lsixtwo/qM; (handler @ image 184120240, runtime 6fffebd30240) =====

void FUN_184120240(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184120287 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180116d90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmd ()Lsixtwo/qI; (handler @ image 184120540, runtime 6fffebd30540) =====

void FUN_184120540(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184120587 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180116ec0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dme ()Lsixtwo/qS; (handler @ image 184120840, runtime 6fffebd30840) =====

void FUN_184120840(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184120887 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180116ff0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmh ()Lsixtwo/qK; (handler @ image 184120b40, runtime 6fffebd30b40) =====

void FUN_184120b40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184120b87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180117120 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmk ()Lsixtwo/nZ; (handler @ image 184120e40, runtime 6fffebd30e40) =====

void FUN_184120e40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184120e87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180117250 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmm ()Lnet/minecraft/class_1044; (handler @ image 184121140, runtime 6fffebd31140) =====

void FUN_184121140(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184121187 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180117380 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmo (Lsixtwo/lv;)V (handler @ image 184121440, runtime 6fffebd31440) =====

void FUN_184121440(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b512,0x441)
      /* POOL[0x1b512,0x441]: li; | Weixs | walbu | sixtwo/lu | DXIsq | sixtwo/lt | cbc | cbg | net/minecraft/class_276 | method_30277 | ()Lcom/mojang/blaze3d/textures/GpuTexture; | jtBoX | cbe | (Lcom/mojang/blaze3d/textures/GpuTexture;)V | sixtwo/lT | ciQ | ()Lsixtwo/lU; | sixtwo/lU | generateMipmaps | copyTextureToTexture | (Lcom/mojang/blaze3d/textures/GpuTexture;Lcom/mojang/blaze3d/textures/GpuTexture;IIIIIII)V | yxpjw | com/mojang/blaze3d/systems/RenderSystem | getDevice | ()Lcom/mojang/blaze3d/systems/GpuDevice; | cpM | com/mojang/blaze3d/textures/TextureFormat | RGBA8 | Lcom/mojang/blaze3d/textures/TextureFormat; | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184121494 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1801174b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmp (Lsixtwo/iu;)Ljava/util/concurrent/CompletionStage; (handler @ image 1841216f0, runtime 6fffebd316f0) =====

void FUN_1841216f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001841217b4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1801175c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmq (ILjava/lang/Throwable;)Ljava/lang/Void; (handler @ image 1841253a0, runtime 6fffebd353a0) =====

void FUN_1841253a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1810f,0x3d3)
      /* POOL[0x1810f,0x3d3]: uture; | brE | discarding | imAbH | brX | java/util/concurrent/CompletionException | sixtwo/rp | dkJ | brY | PByQO | Lcom/google/gson/Gson; | getCause | ()Ljava/lang/Throwable; | sixtwo/iF | bsg | brW | isAssignableFrom | (Ljava/lang/Class;)Z | (Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object; | com/google/gson/JsonParser | parseString | (Ljava/lang/String;)Lcom/google/gson/JsonElement; | com/google/gson/JsonElement | isJsonObject | getName | java/lang/reflect/Type | com/google/gson/reflect/TypeToken | getParameterized | (Ljava/lang/reflect/Type;[Ljava/lang/reflect/Type;)Lcom/google/gson */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001841253f6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180118500 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmr (Ljava/util/concurrent/CompletableFuture;Ljava/lang/Void;Ljava/lang/Throwable;)V (handler @ image 18412b2b0, runtime 6fffebd3b2b0) =====

void FUN_18412b2b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018412b374 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180119db0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dms (Ljava/lang/Void;)Ljava/util/concurrent/CompletionStage; (handler @ image 18412f530, runtime 6fffebd3f530) =====

void FUN_18412f530(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018412f57a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18011b030 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmt (Ljava/lang/String;)V (handler @ image 18412f730, runtime 6fffebd3f730) =====

void FUN_18412f730(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018412f784 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18011b0e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmu (Ljava/lang/Void;)Ljava/util/concurrent/CompletionStage; (handler @ image 18412fa30, runtime 6fffebd3fa30) =====

void FUN_18412fa30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018412fa7a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18011b1f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmv ([I)V (handler @ image 18412fc30, runtime 6fffebd3fc30) =====

void FUN_18412fc30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018412fc7a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18011b2a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmw ()[I (handler @ image 18412fdb0, runtime 6fffebd3fdb0) =====

void FUN_18412fdb0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xb1,5)
      /* POOL[0xb1,0x5]: Tlzw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018412fdf6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18011b340 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rD; dmx (Ljava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 18412ff40, runtime 6fffebd3ff40) =====

undefined8 FUN_18412ff40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/rD; dmy ([B)Ljava/lang/String; (handler @ image 18412ffd0, runtime 6fffebd3ffd0) =====

void FUN_18412ffd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000184130070 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18011b560 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x410f4a4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18410f4a4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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


// ----- block @ rva 0x4111337 -----

void FUN_184111337(void)

{
  return;
}


// ----- block @ rva 0x4111713 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184111713(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4111a34 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184111a34(void)

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


// ----- block @ rva 0x4111d53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_184111d57(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x4112e49 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184112e49(void)

{
  char cVar1;
  code *in_RAX;
  
  cVar1 = (*in_RAX)();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4115092 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184115092(void)

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


// ----- block @ rva 0x41150f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841150f2(void)

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


// ----- block @ rva 0x4115a6b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18411191b(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x4116a3e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184116a3e(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x78))();
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x4117aad -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184117aad(void)

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


// ----- block @ rva 0x4117ce8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_184111d57(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x4117fdf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184117fdf(void)

{
  FUN_190ddfc90();
  (*_DAT_180113dc8)();
  return;
}


// ----- block @ rva 0x4118012 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184118012(void)

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


// ----- block @ rva 0x41180d1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841180d1(void)

{
  FUN_190dd72e0();
  (*_DAT_180114388)();
  return;
}


// ----- block @ rva 0x4119060 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119060(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectField /*0x340*/))();
  (*_DAT_180114158)();
  return;
}


// ----- block @ rva 0x41190ee -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841190ee(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180114088)();
  return;
}


// ----- block @ rva 0x4119160 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184119160(void)

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


// ----- block @ rva 0x4119275 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184119275(void)

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


// ----- block @ rva 0x41193a1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841193a1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000040;
  
  uStack0000000000000040 = 0;
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


// ----- block @ rva 0x41196d7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841196d7(void)

{
  (*_DAT_180114518)();
  return;
}


// ----- block @ rva 0x41196df -----

void FUN_1841196df(void)

{
  return;
}


// ----- block @ rva 0x41198aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841198aa(void)

{
  FUN_190de3220();
  (*_DAT_180114768)();
  return;
}


// ----- block @ rva 0x4119935 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184119935(void)

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


// ----- block @ rva 0x4119977 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184119977(void)

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


// ----- block @ rva 0x41199a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841199a7(void)

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


// ----- block @ rva 0x41199c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841199c8(void)

{
  FUN_190dd72e0();
  (*_DAT_180114708)();
  return;
}


// ----- block @ rva 0x41199f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841199f0(void)

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


// ----- block @ rva 0x4119a11 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119a11(void)

{
  FUN_190dd9df0();
  (*_DAT_180114778)();
  return;
}


// ----- block @ rva 0x4119a68 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119a68(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180114748)();
  return;
}


// ----- block @ rva 0x4119aa0 -----

void FUN_184119aa0(void)

{
  return;
}


// ----- block @ rva 0x4119aa8 -----

void FUN_184119aa8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4119baa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119baa(void)

{
  FUN_190de3220();
  (*_DAT_180114868)();
  return;
}


// ----- block @ rva 0x4119c01 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184119c01(void)

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


// ----- block @ rva 0x4119c4b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119c4b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180114818)();
  return;
}


// ----- block @ rva 0x4119c77 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184119c77(void)

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


// ----- block @ rva 0x4119c8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119c8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1801148c8)();
  return;
}


// ----- block @ rva 0x4119cc8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119cc8(void)

{
  FUN_190dd72e0();
  (*_DAT_180114808)();
  return;
}


// ----- block @ rva 0x4119cf0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184119cf0(void)

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


// ----- block @ rva 0x4119d8f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119d8f(void)

{
  (*_DAT_180114858)();
  return;
}


// ----- block @ rva 0x4119da0 -----

void FUN_184119da0(void)

{
  return;
}


// ----- block @ rva 0x4119da8 -----

void FUN_184119da8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4119eaa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119eaa(void)

{
  FUN_190de3220();
  (*_DAT_1801149a8)();
  return;
}


// ----- block @ rva 0x4119f35 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184119f35(void)

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


// ----- block @ rva 0x4119f4b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119f4b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1801149f8)();
  return;
}


// ----- block @ rva 0x4119f8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119f8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180114998)();
  return;
}


// ----- block @ rva 0x4119fc8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184119fc8(void)

{
  FUN_190dd72e0();
  (*_DAT_1801149e8)();
  return;
}


// ----- block @ rva 0x411a068 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a068(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180114988)();
  return;
}


// ----- block @ rva 0x411a08f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a08f(void)

{
  (*_DAT_180114948)();
  return;
}


// ----- block @ rva 0x411a0a0 -----

void FUN_18411a0a0(void)

{
  return;
}


// ----- block @ rva 0x411a0a8 -----

void FUN_18411a0a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x411a1aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a1aa(void)

{
  FUN_190de3220();
  (*_DAT_180114a58)();
  return;
}


// ----- block @ rva 0x411a1dd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a1dd(void)

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


// ----- block @ rva 0x411a235 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a235(void)

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


// ----- block @ rva 0x411a277 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a277(void)

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


// ----- block @ rva 0x411a2a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a2a7(void)

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


// ----- block @ rva 0x411a2c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a2c8(void)

{
  FUN_190dd72e0();
  (*_DAT_180114af8)();
  return;
}


// ----- block @ rva 0x411a344 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a344(void)

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


// ----- block @ rva 0x411a3a0 -----

void FUN_18411a3a0(void)

{
  return;
}


// ----- block @ rva 0x411a3a8 -----

void FUN_18411a3a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x411a4aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a4aa(void)

{
  FUN_190de3220();
  (*_DAT_180114c58)();
  return;
}


// ----- block @ rva 0x411a501 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a501(void)

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


// ----- block @ rva 0x411a54b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a54b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180114ba8)();
  return;
}


// ----- block @ rva 0x411a577 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a577(void)

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


// ----- block @ rva 0x411a5a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a5a7(void)

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


// ----- block @ rva 0x411a5c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a5c8(void)

{
  FUN_190dd72e0();
  (*_DAT_180114c08)();
  return;
}


// ----- block @ rva 0x411a668 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a668(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180114c18)();
  return;
}


// ----- block @ rva 0x411a6a0 -----

void FUN_18411a6a0(void)

{
  return;
}


// ----- block @ rva 0x411a6a8 -----

void FUN_18411a6a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x411a7aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a7aa(void)

{
  FUN_190de3220();
  (*_DAT_180114d58)();
  return;
}


// ----- block @ rva 0x411a84b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a84b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180114ce8)();
  return;
}


// ----- block @ rva 0x411a877 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411a877(void)

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


// ----- block @ rva 0x411a88c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a88c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180114d88)();
  return;
}


// ----- block @ rva 0x411a8c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a8c8(void)

{
  FUN_190dd72e0();
  (*_DAT_180114d28)();
  return;
}


// ----- block @ rva 0x411a911 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a911(void)

{
  FUN_190dd9df0();
  (*_DAT_180114d48)();
  return;
}


// ----- block @ rva 0x411a98f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411a98f(void)

{
  (*_DAT_180114d08)();
  return;
}


// ----- block @ rva 0x411a9a0 -----

void FUN_18411a9a0(void)

{
  return;
}


// ----- block @ rva 0x411a9a8 -----

void FUN_18411a9a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x411aaaa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411aaaa(void)

{
  FUN_190de3220();
  (*_DAT_180114e68)();
  return;
}


// ----- block @ rva 0x411ab01 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411ab01(void)

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


// ----- block @ rva 0x411ab35 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411ab35(void)

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


// ----- block @ rva 0x411aba7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411aba7(void)

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


// ----- block @ rva 0x411ac11 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411ac11(void)

{
  FUN_190dd9df0();
  (*_DAT_180114e28)();
  return;
}


// ----- block @ rva 0x411ac44 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411ac44(void)

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


// ----- block @ rva 0x411ac68 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411ac68(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180114e48)();
  return;
}


// ----- block @ rva 0x411ac8f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411ac8f(void)

{
  (*_DAT_180114e78)();
  return;
}


// ----- block @ rva 0x411aca0 -----

void FUN_18411aca0(void)

{
  return;
}


// ----- block @ rva 0x411aca8 -----

void FUN_18411aca8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x411adaa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411adaa(void)

{
  FUN_190de3220();
  (*_DAT_180114f28)();
  return;
}


// ----- block @ rva 0x411addd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411addd(void)

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


// ----- block @ rva 0x411aea7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411aea7(void)

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


// ----- block @ rva 0x411aec8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411aec8(void)

{
  FUN_190dd72e0();
  (*_DAT_180114f88)();
  return;
}


// ----- block @ rva 0x411af44 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411af44(void)

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


// ----- block @ rva 0x411af68 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411af68(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180114f48)();
  return;
}


// ----- block @ rva 0x411af8f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411af8f(void)

{
  (*_DAT_180114f38)();
  return;
}


// ----- block @ rva 0x411afa0 -----

void FUN_18411afa0(void)

{
  return;
}


// ----- block @ rva 0x411afa8 -----

void FUN_18411afa8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x411b0aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b0aa(void)

{
  FUN_190de3220();
  (*_DAT_180115088)();
  return;
}


// ----- block @ rva 0x411b0dd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411b0dd(void)

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


// ----- block @ rva 0x411b101 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411b101(void)

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


// ----- block @ rva 0x411b135 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411b135(void)

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


// ----- block @ rva 0x411b1a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411b1a7(void)

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


// ----- block @ rva 0x411b1c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b1c8(void)

{
  FUN_190dd72e0();
  (*_DAT_1801150b8)();
  return;
}


// ----- block @ rva 0x411b211 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b211(void)

{
  FUN_190dd9df0();
  (*_DAT_180115078)();
  return;
}


// ----- block @ rva 0x411b244 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411b244(void)

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


// ----- block @ rva 0x411b2a0 -----

void FUN_18411b2a0(void)

{
  return;
}


// ----- block @ rva 0x411b2a8 -----

void FUN_18411b2a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x411b3aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b3aa(void)

{
  FUN_190de3220();
  (*_DAT_180115228)();
  return;
}


// ----- block @ rva 0x411b44b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b44b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1801151b8)();
  return;
}


// ----- block @ rva 0x411b477 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411b477(void)

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


// ----- block @ rva 0x411b4c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b4c8(void)

{
  FUN_190dd72e0();
  (*_DAT_1801151f8)();
  return;
}


// ----- block @ rva 0x411b511 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b511(void)

{
  FUN_190dd9df0();
  (*_DAT_1801151c8)();
  return;
}


// ----- block @ rva 0x411b544 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411b544(void)

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


// ----- block @ rva 0x411b58f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b58f(void)

{
  (*_DAT_1801151a8)();
  return;
}


// ----- block @ rva 0x411b5a0 -----

void FUN_18411b5a0(void)

{
  return;
}


// ----- block @ rva 0x411b5a8 -----

void FUN_18411b5a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x411b6f8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411b6f8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_180115f68)();
  return;
}


// ----- block @ rva 0x411bb89 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411bb89(void)

{
  FUN_190de3220();
  (*_DAT_180115318)();
  return;
}


// ----- block @ rva 0x411bd0e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411bd0e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180115328)();
  return;
}


// ----- block @ rva 0x411c7d8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411c7d8(void)

{
  FUN_190ddfc90();
  (*_DAT_180116528)();
  return;
}


// ----- block @ rva 0x411d9e8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411d9e8(void)

{
  FUN_190ddfc90();
  (*_DAT_1801162b8)();
  return;
}


// ----- block @ rva 0x411dc85 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411dc85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_180115e68)();
  return;
}


// ----- block @ rva 0x411dfc3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411dfc3(void)

{
  FUN_190dd72e0();
  (*_DAT_180116348)();
  return;
}


// ----- block @ rva 0x411e079 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411e079(void)

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


// ----- block @ rva 0x411fd17 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411fd17(void)

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


// ----- block @ rva 0x411fe44 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411fe44(void)

{
  (*_DAT_180116a68)();
  return;
}


// ----- block @ rva 0x411fe4c -----

void FUN_18411fe4c(void)

{
  return;
}


// ----- block @ rva 0x411ff8a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18411ff8a(void)

{
  FUN_190de3220();
  (*_DAT_180116c78)();
  return;
}


// ----- block @ rva 0x411ffbd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18411ffbd(void)

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


// ----- block @ rva 0x4120057 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120057(void)

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


// ----- block @ rva 0x4120087 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120087(void)

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


// ----- block @ rva 0x41200a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841200a8(void)

{
  FUN_190dd72e0();
  (*_DAT_180116c88)();
  return;
}


// ----- block @ rva 0x41200d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841200d0(void)

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


// ----- block @ rva 0x4120124 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120124(void)

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


// ----- block @ rva 0x4120180 -----

void FUN_184120180(void)

{
  return;
}


// ----- block @ rva 0x4120188 -----

void FUN_184120188(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412028a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412028a(void)

{
  FUN_190de3220();
  (*_DAT_180116e28)();
  return;
}


// ----- block @ rva 0x4120315 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120315(void)

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


// ----- block @ rva 0x412032b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412032b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180116e48)();
  return;
}


// ----- block @ rva 0x4120387 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120387(void)

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


// ----- block @ rva 0x41203a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841203a8(void)

{
  FUN_190dd72e0();
  (*_DAT_180116db8)();
  return;
}


// ----- block @ rva 0x41203d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841203d0(void)

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


// ----- block @ rva 0x41203f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841203f1(void)

{
  FUN_190dd9df0();
  (*_DAT_180116e58)();
  return;
}


// ----- block @ rva 0x4120448 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120448(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180116e78)();
  return;
}


// ----- block @ rva 0x4120480 -----

void FUN_184120480(void)

{
  return;
}


// ----- block @ rva 0x4120488 -----

void FUN_184120488(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412058a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412058a(void)

{
  FUN_190de3220();
  (*_DAT_180116f78)();
  return;
}


// ----- block @ rva 0x41205e1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841205e1(void)

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


// ----- block @ rva 0x412062b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412062b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180116f68)();
  return;
}


// ----- block @ rva 0x412066c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412066c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180116ed8)();
  return;
}


// ----- block @ rva 0x4120687 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120687(void)

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


// ----- block @ rva 0x41206a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841206a8(void)

{
  FUN_190dd72e0();
  (*_DAT_180116f18)();
  return;
}


// ----- block @ rva 0x41206d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841206d0(void)

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


// ----- block @ rva 0x4120748 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120748(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180116fa8)();
  return;
}


// ----- block @ rva 0x4120780 -----

void FUN_184120780(void)

{
  return;
}


// ----- block @ rva 0x4120788 -----

void FUN_184120788(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412088a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412088a(void)

{
  FUN_190de3220();
  (*_DAT_1801170c8)();
  return;
}


// ----- block @ rva 0x4120915 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120915(void)

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


// ----- block @ rva 0x412092b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412092b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180117048)();
  return;
}


// ----- block @ rva 0x4120957 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120957(void)

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


// ----- block @ rva 0x4120987 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120987(void)

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


// ----- block @ rva 0x41209a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841209a8(void)

{
  FUN_190dd72e0();
  (*_DAT_180117018)();
  return;
}


// ----- block @ rva 0x41209d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841209d0(void)

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


// ----- block @ rva 0x4120a48 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120a48(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180117088)();
  return;
}


// ----- block @ rva 0x4120a80 -----

void FUN_184120a80(void)

{
  return;
}


// ----- block @ rva 0x4120a88 -----

void FUN_184120a88(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4120b8a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120b8a(void)

{
  FUN_190de3220();
  (*_DAT_1801171d8)();
  return;
}


// ----- block @ rva 0x4120be1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120be1(void)

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


// ----- block @ rva 0x4120c57 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120c57(void)

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


// ----- block @ rva 0x4120c87 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120c87(void)

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


// ----- block @ rva 0x4120ca8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120ca8(void)

{
  FUN_190dd72e0();
  (*_DAT_1801171b8)();
  return;
}


// ----- block @ rva 0x4120d24 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120d24(void)

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


// ----- block @ rva 0x4120d6f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120d6f(void)

{
  (*_DAT_180117158)();
  return;
}


// ----- block @ rva 0x4120d80 -----

void FUN_184120d80(void)

{
  return;
}


// ----- block @ rva 0x4120d88 -----

void FUN_184120d88(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4120e8a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120e8a(void)

{
  FUN_190de3220();
  (*_DAT_180117268)();
  return;
}


// ----- block @ rva 0x4120ebd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120ebd(void)

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


// ----- block @ rva 0x4120ee1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120ee1(void)

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


// ----- block @ rva 0x4120f15 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120f15(void)

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


// ----- block @ rva 0x4120f6c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120f6c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180117288)();
  return;
}


// ----- block @ rva 0x4120f87 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184120f87(void)

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


// ----- block @ rva 0x4120fa8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120fa8(void)

{
  FUN_190dd72e0();
  (*_DAT_180117338)();
  return;
}


// ----- block @ rva 0x4120ff1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184120ff1(void)

{
  FUN_190dd9df0();
  (*_DAT_1801172d8)();
  return;
}


// ----- block @ rva 0x4121080 -----

void FUN_184121080(void)

{
  return;
}


// ----- block @ rva 0x4121088 -----

void FUN_184121088(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412118a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412118a(void)

{
  FUN_190de3220();
  (*_DAT_1801173a8)();
  return;
}


// ----- block @ rva 0x41211bd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841211bd(void)

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


// ----- block @ rva 0x41211e1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841211e1(void)

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


// ----- block @ rva 0x412122b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412122b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180117398)();
  return;
}


// ----- block @ rva 0x4121257 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184121257(void)

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


// ----- block @ rva 0x412126c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412126c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180117408)();
  return;
}


// ----- block @ rva 0x41212a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841212a8(void)

{
  FUN_190dd72e0();
  (*_DAT_1801173e8)();
  return;
}


// ----- block @ rva 0x41212d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841212d0(void)

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


// ----- block @ rva 0x4121380 -----

void FUN_184121380(void)

{
  return;
}


// ----- block @ rva 0x4121388 -----

void FUN_184121388(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4121497 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184121497(void)

{
  FUN_190de3220();
  (*_DAT_1801174f8)();
  return;
}


// ----- block @ rva 0x41214ca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841214ca(void)

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


// ----- block @ rva 0x41214ee -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841214ee(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_1801174c8)();
  return;
}


// ----- block @ rva 0x4121515 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184121515(void)

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


// ----- block @ rva 0x412155e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412155e(void)

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


// ----- block @ rva 0x41215b2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841215b2(void)

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


// ----- block @ rva 0x41215d6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841215d6(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4121643 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184121643(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180117528)();
  return;
}


// ----- block @ rva 0x4121667 -----

void FUN_184121667(void)

{
  return;
}


// ----- block @ rva 0x412166f -----

void FUN_18412166f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x41217b7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841217b7(void)

{
  FUN_190ddce00();
  (*_DAT_1801178e8)();
  return;
}


// ----- block @ rva 0x412186f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412186f(void)

{
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = 0x6d4f6ac78bed;
  (*_DAT_180117608)();
  return;
}


// ----- block @ rva 0x4121884 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184121884(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong unaff_R15;
  uint uVar8;
  uint uVar21;
  undefined1 auVar9 [16];
  uint uVar22;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulonglong uVar32;
  undefined1 auVar31 [16];
  uint uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulonglong uVar38;
  undefined1 auVar39 [16];
  uint uVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  longlong lVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulonglong in_stack_00000040;
  longlong lStack0000000000000060;
  undefined8 uStack0000000000000068;
  ulonglong in_stack_00000070;
  longlong in_stack_00000078;
  ulonglong uStack00000000000000a0;
  ulonglong uStack00000000000000a8;
  ulonglong uStack00000000000000c0;
  
  uVar6 = _DAT_180117578;
  uVar23 = _DAT_180117570;
  uStack00000000000000a8 = in_stack_00000040;
  uStack00000000000000a0 = _DAT_180117570 ^ 0x84222325;
  auVar11._8_8_ = _UNK_180117aa8;
  auVar11._0_8_ = uStack00000000000000a0;
  auVar9 = pshufb(auVar11 ^ _DAT_180117ab0,_DAT_1800170c0);
  uVar5 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar5 + _DAT_183062fb8;
  if (auVar9._4_4_ < 0) {
    uVar4 = _DAT_183062e28 ^ uVar5;
  }
  _DAT_183063118 = func_0x000184125310(SUB161(auVar11 ^ _DAT_180117ab0,5) ^ uVar4);
  uVar4 = uVar23 * -0x73da7c32a0c3e38e ^ _DAT_183063118;
  uVar4 = uVar4 << 0xb | uVar4 >> 0x35;
  uVar5 = uVar23 | 0x8c2583cd5f3c1c72;
  _DAT_1830630b8 = (_DAT_1830630b8 ^ uVar4) + uVar5 ^ 0xae83acef3becda80;
  _DAT_183063398 = (_DAT_183063398 * -0x4bf2e3ff57425e1b ^ _DAT_1830630b8) + uVar4;
  _DAT_183062fb8 = _DAT_183063398 ^ _DAT_1830630b8;
  _DAT_183062dd0 = _DAT_183063178 ^ uVar5;
  uVar4 = ((_DAT_183063030 ^ uVar6 ^ 0x84222325) + ((uVar6 ^ 0x84222325) & _DAT_183063030) * 2) *
          (0x128ec30567577312 - _DAT_183063270);
  uVar4 = (uVar4 | _DAT_183063120) + (uVar4 & _DAT_183063120);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183062d20 = uVar5;
  _DAT_183062d30 =
       func_0x000184125310((uVar6 ^ 0x128ec305e3755037 | uVar4) +
                           (uVar4 & (uVar6 ^ 0x128ec305e3755037)));
  uVar4 = (uVar6 ^ _DAT_183062d30 << 9) & 0xfffffffffe000000;
  uVar6 = uVar6 ^ 0x128ec30567577312;
  _DAT_183062e78 = (_DAT_183062e78 ^ uVar4) + uVar6 ^ 0xd0479dc669defb59;
  _DAT_183062fd8 = (_DAT_183062fd8 * 0x6754fdde4fa4213 ^ _DAT_183062e78) + uVar4;
  _DAT_183062e40 = _DAT_183062fd8 ^ _DAT_183062e78;
  lVar3 = uVar23 * uVar23;
  uVar7 = lVar3 * 0x5cfbebf3b98daa77;
  uVar23 = (_DAT_183063120 ^ 0x84222325) + _DAT_183063138 + 0x84222325;
  uVar4 = (uVar7 ^ _DAT_183063138) + _DAT_183063120 + uVar7;
  uVar23 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ _DAT_183063120 ^ 0x84222325;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar7 ^ _DAT_183063138;
  _DAT_183063398 = uVar6;
  _DAT_183062d40 =
       func_0x000184125310((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183063120 + uVar7) ^
                           (uVar23 << 0x1d | uVar23 >> 0x23) - (_DAT_183063138 + 0x84222325));
  uVar23 = _DAT_183062d40 >> 1 | _DAT_183062d40;
  uVar23 = uVar23 >> 2 | uVar23;
  uVar23 = uVar23 >> 4 | uVar23;
  uVar23 = uVar23 >> 8 | uVar23;
  uVar23 = uVar23 >> 0x10 | uVar23;
  uVar23 = uVar23 >> 0x20 | uVar23;
  uVar23 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
  uVar23 = (0x40 - (((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           _DAT_183062d40) & 0x7fffffffffffffff;
  uVar4 = lVar3 * -0x5cfbebf3b98daa77;
  _DAT_183062e28 = (_DAT_183062e28 ^ uVar23) + lVar3 * -0x5cfbebf3b98daa77 ^ 0x9c5ee275ac376ab8;
  _DAT_183063470 = (_DAT_183063470 * 0x518587629241c6fd ^ _DAT_183062e28) + uVar23;
  _DAT_183063168 = _DAT_183063470 ^ _DAT_183062e28;
  uVar23 = ((_DAT_183063218 ^ 0x6d4feee5a8c8) + (_DAT_183063218 & 0x6d4feee5a8c8) * 2) *
           (uVar7 - _DAT_183063120);
  uVar23 = (uVar23 | _DAT_183062eb8) + (uVar23 & _DAT_183062eb8);
  uVar23 = uVar23 * 0x2000 ^ uVar23;
  uVar23 = uVar23 >> 7 ^ uVar23;
  uVar23 = uVar23 << 0x11 ^ uVar23;
  _DAT_183062d70 = uVar4;
  _DAT_183063450 =
       func_0x000184125310((uVar7 ^ 0x6d4feee5a8c8 | uVar23) + (uVar23 & (uVar7 ^ 0x6d4feee5a8c8)));
  uVar21 = (uint)(uVar7 >> 0x20);
  auVar17._8_4_ = (int)uVar7;
  auVar17._0_8_ = uVar7;
  auVar17._12_4_ = uVar21;
  lStack0000000000000060 = (_DAT_180117b60 & 0xffffffff) * (uVar7 & 0xffffffff);
  uStack0000000000000068 = (_UNK_180117b68 & 0xffffffff) * (uVar7 & 0xffffffff);
  uVar33 = SUB164(auVar17 & _DAT_180117ac0,0);
  uVar41 = SUB168(auVar17 & _DAT_180117ac0,0);
  uVar40 = SUB164(auVar17 | _DAT_180117ac0,0);
  uVar38 = SUB168(auVar17 | _DAT_180117ac0,0);
  uVar8 = SUB164(_DAT_180117ac0 ^ auVar17,0);
  uVar32 = SUB168(_DAT_180117ac0 ^ auVar17,0);
  in_stack_00000070 = (ulonglong)uVar21 * (ulonglong)_DAT_180117b50;
  in_stack_00000078 = (auVar17._8_8_ >> 0x20) * (ulonglong)_UNK_180117b58;
  lVar47 = (ulonglong)_DAT_180117b50 * (uVar7 & 0xffffffff) +
           (lStack0000000000000060 + in_stack_00000070 << 0x20);
  uVar23 = (_DAT_183063450 << 0x1d | _DAT_183063450 >> 0x23) ^ unaff_R15;
  auVar34._8_4_ = 0xffffffff;
  auVar34._0_8_ = 0xffffffffffffffff;
  auVar34._12_4_ = 0xffffffff;
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  uVar22 = SUB164(auVar17 ^ auVar34,0);
  uVar41 = (((ulonglong)_DAT_180117b30 * (ulonglong)uVar8 +
             ((ulonglong)_DAT_180117b40 * (ulonglong)uVar8 +
              (uVar32 >> 0x20) * (ulonglong)_DAT_180117b30 << 0x20) +
             (ulonglong)_DAT_180117b10 * (ulonglong)uVar40 +
             ((ulonglong)_DAT_180117b20 * (ulonglong)uVar40 +
              (uVar38 >> 0x20) * (ulonglong)_DAT_180117b10 << 0x20) +
             (ulonglong)_DAT_180117af0 * (ulonglong)uVar33 +
             ((ulonglong)_DAT_180117b00 * (ulonglong)uVar33 +
              (uVar41 >> 0x20) * (ulonglong)_DAT_180117af0 << 0x20) +
             (ulonglong)_DAT_180117ad0 * (uVar7 & 0xffffffff) +
             ((ulonglong)_DAT_180117ae0 * (uVar7 & 0xffffffff) +
              (ulonglong)uVar21 * (ulonglong)_DAT_180117ad0 << 0x20) + lVar47) -
           ((ulonglong)uVar22 * (ulonglong)_DAT_180117bf0 +
            ((ulonglong)_DAT_180117c00 * (ulonglong)uVar22 +
             (SUB168(auVar17 ^ auVar34,0) >> 0x20) * (ulonglong)_DAT_180117bf0 << 0x20) + lVar47 +
           (ulonglong)uVar8 * (ulonglong)_DAT_180117bd0 +
           ((ulonglong)_DAT_180117be0 * (ulonglong)uVar8 +
            (uVar32 >> 0x20) * (ulonglong)_DAT_180117bd0 << 0x20) +
           (ulonglong)uVar40 * (ulonglong)_DAT_180117bb0 +
           ((ulonglong)_DAT_180117bc0 * (ulonglong)uVar40 +
            (uVar38 >> 0x20) * (ulonglong)_DAT_180117bb0 << 0x20) +
           (ulonglong)uVar33 * (ulonglong)_DAT_180117b90 +
           ((ulonglong)_DAT_180117ba0 * (ulonglong)uVar33 +
            (uVar41 >> 0x20) * (ulonglong)_DAT_180117b90 << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_180117b70 +
           ((ulonglong)_DAT_180117b80 * (uVar7 & 0xffffffff) +
            (ulonglong)uVar21 * (ulonglong)_DAT_180117b70 << 0x20))) + _DAT_180117c10;
  _DAT_183063120 = _DAT_183063138 ^ uVar23 ^ uVar41;
  _DAT_1830633d0 = (_DAT_1830633d0 ^ uVar23) + uVar41 ^ 0xb1a27fb39c3c12aa;
  _DAT_183063458 = (_DAT_183063458 * 0x5431d9458eab9c49 ^ _DAT_1830633d0) + uVar23;
  _DAT_183062f60 = _DAT_183063458 ^ _DAT_1830633d0;
  uVar23 = uVar41 ^ 0x84222325 ^ _DAT_183062f20;
  lVar47 = (uVar41 ^ 0x84222325) + _DAT_183063300;
  lVar3 = _DAT_183062f20 + lVar3 * -0x5cfbebf3b98daa77;
  uVar7 = uVar23 + lVar47;
  uVar32 = (uVar4 ^ _DAT_183063300) + lVar3;
  uVar23 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar23;
  uVar7 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar4 ^ _DAT_183063300;
  _DAT_183063320 = uVar41;
  _DAT_183062de0 =
       func_0x000184125310((uVar7 << 0x1d | uVar7 >> 0x23) - lVar3 ^
                           (uVar23 << 0x1d | uVar23 >> 0x23) - lVar47);
  uVar40 = (uint)(uVar41 >> 0x20);
  auVar35._8_4_ = (int)uVar41;
  auVar35._0_8_ = uVar41;
  auVar35._12_4_ = uVar40;
  uVar21 = (uint)(uVar4 >> 0x20);
  auVar39._8_4_ = (int)uVar4;
  auVar39._0_8_ = uVar4;
  auVar39._12_4_ = uVar21;
  _lStack0000000000000060 = auVar35 ^ auVar39;
  uVar33 = SUB164(auVar35 & auVar39,0);
  uVar38 = SUB168(auVar35 & auVar39,0);
  uVar22 = SUB164(auVar35 | auVar39,0);
  uVar32 = SUB168(auVar35 | auVar39,0);
  uVar42 = (uint)lStack0000000000000060;
  uVar8 = SUB164(auVar39 ^ auVar49,0);
  uVar7 = SUB168(auVar39 ^ auVar49,0);
  uVar23 = (uVar41 * uVar4 ^ _DAT_183062de0) * 0x6961b87c3e90da5d;
  uVar4 = (((ulonglong)_DAT_180117c60 * (ulonglong)uVar8 +
            ((ulonglong)_DAT_180117cd0 * (ulonglong)uVar8 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_180117c60 << 0x20) +
           (ulonglong)_DAT_180117cb0 * (ulonglong)uVar42 +
           ((ulonglong)_DAT_180117cc0 * (ulonglong)uVar42 +
            (lStack0000000000000060 >> 0x20) * (ulonglong)_DAT_180117cb0 << 0x20) +
           (ulonglong)_DAT_180117c90 * (ulonglong)uVar22 +
           ((ulonglong)_DAT_180117ca0 * (ulonglong)uVar22 +
            (uVar32 >> 0x20) * (ulonglong)_DAT_180117c90 << 0x20) +
           (ulonglong)_DAT_180117c70 * (ulonglong)uVar33 +
           ((ulonglong)_DAT_180117c80 * (ulonglong)uVar33 +
            (uVar38 >> 0x20) * (ulonglong)_DAT_180117c70 << 0x20) +
           (ulonglong)_DAT_180117c40 * (uVar4 & 0xffffffff) +
           ((ulonglong)_DAT_180117c50 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar21 * (ulonglong)_DAT_180117c40 << 0x20) +
           (uVar41 & 0xffffffff) * (ulonglong)_DAT_180117c20 +
           ((ulonglong)_DAT_180117c30 * (uVar41 & 0xffffffff) +
            (ulonglong)uVar40 * (ulonglong)_DAT_180117c20 << 0x20)) -
          ((ulonglong)uVar8 * (ulonglong)_DAT_180117d10 +
           ((uVar7 >> 0x20) * (ulonglong)_DAT_180117d10 +
            (ulonglong)_DAT_180117d00 * (ulonglong)uVar8 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_180117d30 +
           ((lStack0000000000000060 >> 0x20) * (ulonglong)_DAT_180117d30 +
            (ulonglong)_DAT_180117d20 * (ulonglong)uVar42 << 0x20) +
           (ulonglong)uVar33 * (ulonglong)_DAT_180117d30 +
           ((uVar38 >> 0x20) * (ulonglong)_DAT_180117d30 +
            (ulonglong)uVar33 * (ulonglong)_DAT_180117d20 << 0x20) +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_180117d10 +
           ((ulonglong)uVar21 * (ulonglong)_DAT_180117d10 +
            (uVar4 & 0xffffffff) * (ulonglong)_DAT_180117d00 << 0x20) +
          (ulonglong)uVar22 * (ulonglong)_DAT_180117d40 +
          ((ulonglong)_DAT_180117d50 * (ulonglong)uVar22 +
           (uVar32 >> 0x20) * (ulonglong)_DAT_180117d40 << 0x20))) + 0xafb45cc52932cdaa;
  _DAT_183062eb8 = _DAT_183063068 ^ uVar23 ^ uVar4;
  _DAT_183063138 = (_DAT_183063138 ^ uVar23) + uVar4 ^ 0x23e7897503b1a2ed;
  _DAT_1830630a8 = (_DAT_1830630a8 * 0x25341aa4b04a2ddd ^ _DAT_183063138) + uVar23;
  _DAT_183063430 = _DAT_1830630a8 ^ _DAT_183063138;
  lVar3 = _DAT_180117578 * _DAT_180117578;
  uVar32 = lVar3 * -0x78d9f9d8527d0771;
  uVar23 = ((_DAT_183063048 ^ 0x84222325) + (ulonglong)((uint)_DAT_183063048 & 0x84222325) * 2) *
           (uVar32 - _DAT_1830632b8);
  uVar23 = (uVar23 | _DAT_1830632f0) + (uVar23 & _DAT_1830632f0);
  uVar23 = uVar23 * 0x2000 ^ uVar23;
  uVar23 = uVar23 >> 7 ^ uVar23;
  uVar23 = uVar23 << 0x11 ^ uVar23;
  _DAT_1830630e8 = uVar4;
  _DAT_183062d38 =
       func_0x000184125310((uVar32 ^ 0x84222325 | uVar23) + (uVar23 & (uVar32 ^ 0x84222325)));
  uVar7 = lVar3 * 0x78d9f9d8527d0771;
  _DAT_183063378 =
       (_DAT_183063378 ^ _DAT_183062d38) + lVar3 * 0x78d9f9d8527d0771 ^ 0xe2e79d66a28d603d;
  _DAT_183062d90 = (_DAT_183062d90 * 0x3fe1a9f29613b6c9 ^ _DAT_183063378) + _DAT_183062d38;
  _DAT_183062dc0 = _DAT_183062d90 ^ _DAT_183063378;
  uVar32 = uVar32 + uVar4;
  uVar4 = uVar32 ^ 0x84222325;
  uVar23 = ((_DAT_183062fa0 ^ uVar4) + (uVar4 & _DAT_183062fa0) * 2) * (uVar7 - _DAT_1830632f8);
  uVar23 = (uVar23 | _DAT_183062e80) + (uVar23 & _DAT_183062e80);
  uVar23 = uVar23 * 0x2000 ^ uVar23;
  uVar23 = uVar23 >> 7 ^ uVar23;
  uVar23 = uVar23 << 0x11 ^ uVar23;
  _DAT_183062ea8 = uVar7;
  _DAT_183063258 = func_0x000184125310((uVar4 ^ uVar7 | uVar23) + (uVar23 & (uVar4 ^ uVar7)));
  auVar11 = _DAT_1800170c0;
  uVar23 = ((uVar32 | uVar7) ^ _DAT_183063258) & 0x1ffffffff ^ uVar32;
  uVar21 = (uint)(uVar32 >> 0x20);
  auVar36._8_4_ = (int)uVar32;
  auVar36._0_8_ = uVar32;
  auVar36._12_4_ = uVar21;
  uVar22 = (uint)(uVar7 >> 0x20);
  auVar9._8_4_ = (int)uVar7;
  auVar9._0_8_ = uVar7;
  auVar9._12_4_ = uVar22;
  uVar40 = SUB164(auVar36 & auVar9,0);
  uVar4 = SUB168(auVar36 & auVar9,0);
  uVar8 = SUB164(auVar36 | auVar9,0);
  uVar41 = SUB168(auVar36 | auVar9,0);
  uVar33 = SUB164(auVar9 ^ _DAT_18001a710,0);
  uVar38 = SUB168(auVar9 ^ _DAT_18001a710,0);
  lVar3 = _DAT_180117578 * _DAT_180117570;
  auVar31._8_8_ = lVar3 * -0x3efa8fa0af770218;
  auVar31._0_8_ = _DAT_18001b640;
  auVar9 = pshufb(auVar31 ^ _DAT_180117e80,_DAT_1800170c0);
  uVar7 = (((ulonglong)_DAT_180117da0 * (ulonglong)uVar33 +
            ((ulonglong)_DAT_180117dd0 * (ulonglong)uVar33 +
             (uVar38 >> 0x20) * (ulonglong)_DAT_180117da0 << 0x20) +
           (ulonglong)_DAT_180117dc0 * (ulonglong)uVar8 +
           ((uVar41 >> 0x20) * (ulonglong)_DAT_180117dc0 +
            (ulonglong)_DAT_180117db0 * (ulonglong)uVar8 << 0x20) +
           (ulonglong)uVar40 * (ulonglong)_DAT_180117dc0 +
           ((uVar4 >> 0x20) * (ulonglong)_DAT_180117dc0 +
            (ulonglong)uVar40 * (ulonglong)_DAT_180117db0 << 0x20) +
           (ulonglong)_DAT_180117d80 * (uVar7 & 0xffffffff) +
           ((ulonglong)_DAT_180117d90 * (uVar7 & 0xffffffff) +
            (ulonglong)uVar22 * (ulonglong)_DAT_180117d80 << 0x20) +
           (ulonglong)_DAT_180117d60 * (uVar32 & 0xffffffff) +
           ((ulonglong)_DAT_180117d70 * (uVar32 & 0xffffffff) +
            (ulonglong)uVar21 * (ulonglong)_DAT_180117d60 << 0x20)) -
          ((ulonglong)uVar33 * (ulonglong)_DAT_180117e40 +
           ((ulonglong)_DAT_180117e70 * (ulonglong)uVar33 +
            (uVar38 >> 0x20) * (ulonglong)_DAT_180117e40 << 0x20) +
          (ulonglong)uVar8 * (ulonglong)_DAT_180117e60 +
          ((uVar41 >> 0x20) * (ulonglong)_DAT_180117e60 +
           (ulonglong)_DAT_180117e50 * (ulonglong)uVar8 << 0x20) +
          (ulonglong)uVar40 * (ulonglong)_DAT_180117e60 +
          ((uVar4 >> 0x20) * (ulonglong)_DAT_180117e60 +
           (ulonglong)uVar40 * (ulonglong)_DAT_180117e50 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_180117e20 +
          ((ulonglong)_DAT_180117e30 * (uVar7 & 0xffffffff) +
           (ulonglong)uVar22 * (ulonglong)_DAT_180117e20 << 0x20) +
          (uVar32 & 0xffffffff) * (ulonglong)_DAT_180117e00 +
          ((ulonglong)_DAT_180117e10 * (uVar32 & 0xffffffff) +
           (ulonglong)uVar21 * (ulonglong)_DAT_180117e00 << 0x20))) + 0xebe6a5e9c4ce56bc;
  _DAT_183063128 = _DAT_183063218 ^ uVar23 ^ uVar7;
  _DAT_183063278 = (_DAT_183063278 ^ uVar23) + uVar7 ^ 0xb8a38e67b4c521f2;
  _DAT_1830630c8 = (_DAT_1830630c8 * 0x5a332f9d0c50be03 ^ _DAT_183063278) + uVar23;
  _DAT_1830631d8 = _DAT_1830630c8 ^ _DAT_183063278;
  uVar4 = auVar9._8_8_ + auVar9._0_8_;
  uVar23 = uVar4 + _DAT_183062f20;
  if (auVar9._4_4_ < 0) {
    uVar23 = _DAT_183062d68 ^ uVar4;
  }
  _DAT_183063108 = uVar7;
  _DAT_183063080 = func_0x000184125310(uVar23 ^ 0xe8);
  uVar4 = lVar3 * 0x3efa8fa0af770218;
  _DAT_183063348 =
       (_DAT_183063348 ^ _DAT_183063080 & 0x3fe0000000) + lVar3 * 0x3efa8fa0af770218 ^
       0xff538a05f2262b20;
  _DAT_183063260 =
       (_DAT_183063260 * -0xf70398ea72734cd ^ _DAT_183063348) + (_DAT_183063080 & 0x3fe0000000);
  _DAT_183063338 = _DAT_183063260 ^ _DAT_183063348;
  uVar7 = lVar3 * -0x3efa8fa0af770218 + uVar7;
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar7 ^ 0x84222325;
  auVar11 = pshufb(auVar10 ^ _DAT_180117e90,auVar11);
  uVar32 = auVar11._8_8_ + auVar11._0_8_;
  uVar23 = uVar32 + _DAT_183063368;
  if (auVar11._4_4_ < 0) {
    uVar23 = _DAT_1830633e0 ^ uVar32;
  }
  _DAT_183063298 = uVar4;
  _DAT_183062e60 = func_0x000184125310(SUB161(auVar10 ^ _DAT_180117e90,5) ^ uVar23);
  uVar42 = (uint)(uVar4 >> 0x20);
  auVar12._8_4_ = (int)uVar4;
  auVar12._0_8_ = uVar4;
  auVar12._12_4_ = uVar42;
  uVar23 = uVar4 ^ uVar7 ^ _DAT_183062e60;
  uVar22 = (uint)(uVar7 >> 0x20);
  auVar24._8_4_ = (int)uVar7;
  auVar24._0_8_ = uVar7;
  auVar24._12_4_ = uVar22;
  _lStack0000000000000060 = auVar24 ^ auVar12;
  uVar32 = (uVar7 & 0xffffffff) * (uVar4 & 0xffffffff) +
           ((ulonglong)uVar22 * (uVar4 & 0xffffffff) + (uVar7 & 0xffffffff) * (ulonglong)uVar42 <<
           0x20);
  uVar33 = SUB164(auVar24 & auVar12,0);
  uVar41 = SUB168(auVar24 & auVar12,0);
  lVar3 = (uVar32 & 0xffffffff) * (ulonglong)_DAT_180117f00 +
          ((_DAT_180117f10 & 0xffffffff) * (uVar32 & 0xffffffff) +
           (uVar32 >> 0x20) * (ulonglong)_DAT_180117f00 << 0x20);
  uVar40 = SUB164(auVar24 | auVar12,0);
  auVar44._8_4_ = 0xffffffff;
  auVar44._0_8_ = 0xffffffffffffffff;
  auVar44._12_4_ = 0xffffffff;
  uVar21 = SUB164(auVar24 ^ auVar44,0);
  uVar8 = SUB164(auVar12 ^ auVar44,0);
  uVar38 = (((_DAT_180117ee0 & 0xffffffff) * (lStack0000000000000060 & 0xffffffffU) +
             ((_DAT_180117ef0 & 0xffffffff) * (lStack0000000000000060 & 0xffffffffU) +
              ((ulonglong)lStack0000000000000060 >> 0x20) * (_DAT_180117ee0 & 0xffffffff) << 0x20) +
             (_DAT_180117ec0 & 0xffffffff) * (ulonglong)uVar33 +
             ((_DAT_180117ed0 & 0xffffffff) * (ulonglong)uVar33 +
              (uVar41 >> 0x20) * (_DAT_180117ec0 & 0xffffffff) << 0x20) +
             (_DAT_180117eb0 & 0xffffffff) * (uVar4 & 0xffffffff) +
             ((ulonglong)uVar42 * (_DAT_180117eb0 & 0xffffffff) +
              (_DAT_180117ea0 & 0xffffffff) * (uVar4 & 0xffffffff) << 0x20) +
             (uVar7 & 0xffffffff) * (_DAT_180117eb0 & 0xffffffff) +
             ((ulonglong)uVar22 * (_DAT_180117eb0 & 0xffffffff) +
              (uVar7 & 0xffffffff) * (_DAT_180117ea0 & 0xffffffff) << 0x20) + lVar3) -
           ((ulonglong)uVar8 * (ulonglong)_DAT_180117f50 +
            ((SUB168(auVar12 ^ auVar44,0) >> 0x20) * (ulonglong)_DAT_180117f50 +
             (ulonglong)_DAT_180117f40 * (ulonglong)uVar8 << 0x20) +
            (ulonglong)uVar21 * (ulonglong)_DAT_180117f30 +
            ((SUB168(auVar24 ^ auVar44,0) >> 0x20) * (ulonglong)_DAT_180117f30 +
             (_DAT_180117f20 & 0xffffffff) * (ulonglong)uVar21 << 0x20) +
            (lStack0000000000000060 & 0xffffffffU) * (ulonglong)_DAT_180117f70 +
            (((ulonglong)lStack0000000000000060 >> 0x20) * (ulonglong)_DAT_180117f70 +
             (_DAT_180117f60 & 0xffffffff) * (lStack0000000000000060 & 0xffffffffU) << 0x20) +
            (ulonglong)uVar33 * (ulonglong)_DAT_180117f70 +
            ((uVar41 >> 0x20) * (ulonglong)_DAT_180117f70 +
             (ulonglong)uVar33 * (_DAT_180117f60 & 0xffffffff) << 0x20) +
            (uVar4 & 0xffffffff) * (ulonglong)_DAT_180117f50 +
            ((ulonglong)uVar42 * (ulonglong)_DAT_180117f50 +
             (uVar4 & 0xffffffff) * (ulonglong)_DAT_180117f40 << 0x20) +
            (uVar7 & 0xffffffff) * (ulonglong)_DAT_180117f30 +
            ((ulonglong)uVar22 * (ulonglong)_DAT_180117f30 +
             (uVar7 & 0xffffffff) * (_DAT_180117f20 & 0xffffffff) << 0x20) +
            (ulonglong)uVar40 * (ulonglong)_DAT_180117f80 +
            ((_DAT_180117f90 & 0xffffffff) * (ulonglong)uVar40 +
             (SUB168(auVar24 | auVar12,0) >> 0x20) * (ulonglong)_DAT_180117f80 << 0x20) + lVar3)) -
           _DAT_180117fa0;
  _DAT_1830630e0 = _DAT_1830632e0 ^ uVar23 ^ uVar38;
  _DAT_1830633a8 = (_DAT_1830633a8 ^ uVar23) + uVar38 ^ 0xfd13900ef28593ba;
  _DAT_183062da0 = (_DAT_183062da0 * 0x2426bade30a0bb91 ^ _DAT_1830633a8) + uVar23;
  _DAT_1830632a0 = _DAT_183062da0 ^ _DAT_1830633a8;
  uVar32 = uVar5 ^ 0x84222325;
  uVar23 = (uVar32 ^ _DAT_183063210) + _DAT_1830633a0 + uVar32;
  uVar4 = (uVar6 ^ _DAT_1830633a0) + _DAT_183063210 + uVar6;
  uVar7 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ uVar32 ^ _DAT_183063210;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6 ^ _DAT_1830633a0;
  uVar23 = uVar5 + uVar6;
  _DAT_1830632c0 = uVar38;
  _DAT_183062d18 =
       func_0x000184125310((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183063210 + uVar6) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1830633a0 + uVar32));
  auVar11 = _DAT_1800170c0;
  uStack0000000000000068 = 0;
  lStack0000000000000060 = uVar5;
  uVar4 = (uVar5 | uVar6) ^ _DAT_183062d18 ^ uVar5;
  uVar41 = uVar5 ^ uVar6;
  _DAT_183062d68 = (_DAT_183062d68 ^ uVar4) + uVar41 ^ 0xfa30a13f31a4b4e;
  _DAT_183063160 = (_DAT_183063160 * -0xc31116235803d33 ^ _DAT_183062d68) + uVar4;
  _DAT_1830630b0 = _DAT_183063160 ^ _DAT_183062d68;
  in_stack_00000078 = 0;
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = uVar32;
  auVar9 = pshufb(auVar13 ^ _DAT_180117fb0,_DAT_1800170c0);
  uVar7 = auVar9._8_8_ + auVar9._0_8_;
  uVar4 = uVar7 + _DAT_183063178;
  if (auVar9._4_4_ < 0) {
    uVar4 = _DAT_183063040 ^ uVar7;
  }
  _DAT_183062d80 = uVar41;
  in_stack_00000070 = uVar32;
  _DAT_183063308 = func_0x000184125310(SUB161(auVar13 ^ _DAT_180117fb0,5) ^ uVar4);
  uVar4 = _DAT_183063308 - (_DAT_183063308 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_183063308;
  uVar6 = uVar6 & uVar5;
  _DAT_183063240 = (_DAT_183063240 ^ uVar4) + uVar6 ^ 0xfdede56da8527ddf;
  _DAT_183063238 = (_DAT_183063238 * -0x2eac95aeebcffb9 ^ _DAT_183063240) + uVar4;
  _DAT_183062f50 = _DAT_183063238 ^ _DAT_183063240;
  _DAT_183063400 = _DAT_183062f30 ^ uVar6;
  auVar25._8_8_ = uVar6 * 2;
  auVar25._0_8_ = uVar41 ^ 0x84222325;
  auVar11 = pshufb(auVar25 ^ _DAT_180117fc0,auVar11);
  uVar7 = auVar11._8_8_ + auVar11._0_8_;
  uVar4 = uVar7 + _DAT_183062d40;
  if (auVar11._4_4_ < 0) {
    uVar4 = _DAT_183062fc8 ^ uVar7;
  }
  _DAT_1830632d8 = uVar6;
  _DAT_183062fe0 = func_0x000184125310(SUB161(auVar25 ^ _DAT_180117fc0,5) ^ uVar4);
  auVar14._8_4_ = (int)_DAT_1830632d0;
  auVar14._0_8_ = _DAT_1830632d0;
  auVar14._12_4_ = (int)((ulonglong)_DAT_1830632d0 >> 0x20);
  uVar8 = (uint)(uVar41 >> 0x20);
  auVar37._8_4_ = (int)uVar41;
  auVar37._0_8_ = uVar41;
  auVar37._12_4_ = uVar8;
  auVar26._8_4_ = (int)uVar6;
  auVar26._0_8_ = uVar6;
  auVar26._12_4_ = (int)(uVar6 >> 0x20);
  uVar6 = uVar6 * 2;
  auVar27._8_8_ = auVar26._8_8_ * 2;
  auVar27._0_8_ = uVar6;
  uStack00000000000000c0 = uVar41 | uVar6;
  uVar40 = (uint)(uVar6 >> 0x20);
  uVar22 = SUB164(auVar37 & auVar27,0);
  uVar7 = SUB168(auVar37 & auVar27,0);
  uVar21 = SUB164(auVar37 ^ auVar27,0);
  uVar4 = auVar14._8_8_ & 0x7fffffffffffffff;
  auVar48._8_4_ = 0xffffffff;
  auVar48._0_8_ = 0xffffffffffffffff;
  auVar48._12_4_ = 0xffffffff;
  uVar33 = SUB164(auVar37 ^ auVar48,0);
  uVar32 = (((ulonglong)uVar21 * (ulonglong)_DAT_180118030 +
             ((ulonglong)_DAT_180118040 * (ulonglong)uVar21 +
              (SUB168(auVar37 ^ auVar27,0) >> 0x20) * (ulonglong)_DAT_180118030 << 0x20) +
             (ulonglong)_DAT_180118010 * (uStack00000000000000c0 & 0xffffffff) +
             ((ulonglong)_DAT_180118020 * (uStack00000000000000c0 & 0xffffffff) +
              (uStack00000000000000c0 >> 0x20) * (ulonglong)_DAT_180118010 << 0x20) +
            (ulonglong)_DAT_180117ff0 * (ulonglong)uVar22 +
            ((ulonglong)_DAT_180118000 * (ulonglong)uVar22 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_180117ff0 << 0x20) +
            (ulonglong)_DAT_180117fe0 * (uVar6 & 0xffffffff) +
            ((ulonglong)uVar40 * (ulonglong)_DAT_180117fe0 +
             (ulonglong)_DAT_180117fd0 * (uVar6 & 0xffffffff) << 0x20) +
            (uVar41 & 0xffffffff) * (ulonglong)_DAT_180117fe0 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_180117fe0 +
             (uVar41 & 0xffffffff) * (ulonglong)_DAT_180117fd0 << 0x20)) -
           ((ulonglong)uVar33 * (_DAT_1801180b0 & 0xffffffff) +
            ((ulonglong)_DAT_1801180e0 * (ulonglong)uVar33 +
             (SUB168(auVar37 ^ auVar48,0) >> 0x20) * (_DAT_1801180b0 & 0xffffffff) << 0x20) +
            (uStack00000000000000c0 & 0xffffffff) * (ulonglong)_DAT_1801180d0 +
            ((uStack00000000000000c0 >> 0x20) * (ulonglong)_DAT_1801180d0 +
             (ulonglong)_DAT_1801180c0 * (uStack00000000000000c0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar22 * (ulonglong)_DAT_1801180d0 +
           ((uVar7 >> 0x20) * (ulonglong)_DAT_1801180d0 +
            (ulonglong)uVar22 * (ulonglong)_DAT_1801180c0 << 0x20) +
           (uVar41 & 0xffffffff) * (ulonglong)_DAT_180118070 +
           ((ulonglong)_DAT_180118080 * (uVar41 & 0xffffffff) +
            (ulonglong)uVar8 * (ulonglong)_DAT_180118070 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_180118090 +
           ((ulonglong)_DAT_1801180a0 * (uVar6 & 0xffffffff) +
            (ulonglong)uVar40 * (ulonglong)_DAT_180118090 << 0x20))) - _DAT_1801180b0;
  _DAT_183063040 = _DAT_183062d18 ^ uVar4 ^ uVar32;
  _DAT_1830632e0 = (_DAT_1830632e0 ^ uVar4) + uVar32 ^ 0xec8fc53889dab3ad;
  _DAT_1830631f0 = (_DAT_1830631f0 * -0x52ed65c90390a9 ^ _DAT_1830632e0) + uVar4;
  _DAT_183062ff8 = _DAT_1830631f0 ^ _DAT_1830632e0;
  uVar6 = uVar23 ^ 0x84222325 ^ _DAT_183063108;
  lVar3 = (uVar23 ^ 0x84222325) + _DAT_183062df8;
  uVar4 = uVar6 + lVar3;
  uVar7 = (uVar32 ^ _DAT_183062df8) + uVar32 + _DAT_183063108;
  uVar6 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar32 ^ _DAT_183062df8;
  _DAT_183063358 = uVar32;
  _DAT_183063098 =
       func_0x000184125310((uVar4 << 0x1d | uVar4 >> 0x23) - (uVar32 + _DAT_183063108) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar3);
  uVar21 = (uint)(uVar23 >> 0x20);
  auVar15._8_4_ = (int)uVar23;
  auVar15._0_8_ = uVar23;
  auVar15._12_4_ = uVar21;
  uVar22 = (uint)(uVar32 >> 0x20);
  auVar28._8_4_ = (int)uVar32;
  auVar28._0_8_ = uVar32;
  auVar28._12_4_ = uVar22;
  uVar33 = SUB164(auVar15 ^ auVar48,0);
  uVar6 = SUB168(auVar15 ^ auVar48,0);
  uVar8 = SUB164(auVar28 ^ _DAT_18001a710,0);
  uVar4 = (((ulonglong)_DAT_180118110 * (ulonglong)uVar33 +
            ((uVar6 >> 0x20) * (ulonglong)_DAT_180118110 +
             (ulonglong)_DAT_1801180f0 * (ulonglong)uVar33 << 0x20) +
           (((ulonglong)_DAT_180118100 * (uVar23 & 0xffffffff) +
            ((ulonglong)uVar21 * (ulonglong)_DAT_180118100 +
             (uVar23 & 0xffffffff) * (ulonglong)_DAT_1801180f0 << 0x20)) - uVar32)) -
          ((ulonglong)uVar8 * (ulonglong)_DAT_180118170 +
           ((SUB168(auVar28 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_180118170 +
            (ulonglong)_DAT_180118160 * (ulonglong)uVar8 << 0x20) +
          (ulonglong)uVar33 * (ulonglong)_DAT_180118150 +
          ((uVar6 >> 0x20) * (ulonglong)_DAT_180118150 +
           (ulonglong)_DAT_180118140 * (ulonglong)uVar33 << 0x20) +
          (uVar23 & 0xffffffff) * (ulonglong)_DAT_180118150 +
          ((ulonglong)uVar21 * (ulonglong)_DAT_180118150 +
           (uVar23 & 0xffffffff) * (ulonglong)_DAT_180118140 << 0x20) +
          (uVar32 & 0xffffffff) * (ulonglong)_DAT_180118170 +
          ((ulonglong)uVar22 * (ulonglong)_DAT_180118170 +
           (uVar32 & 0xffffffff) * (ulonglong)_DAT_180118160 << 0x20))) + _DAT_180118180;
  _DAT_183063198 = uVar4 ^ _DAT_183063098;
  _DAT_183062f48 = (_DAT_183062f48 ^ _DAT_183063098) + uVar4 ^ 0x67ecf5d2b969c558;
  _DAT_183062e80 = (_DAT_183062e80 * -0x1381ea5ad876a3bf ^ _DAT_183062f48) + _DAT_183063098;
  _DAT_183063080 = _DAT_183062e80 ^ _DAT_183062f48;
  uVar23 = uVar38 ^ 0x84222325;
  uVar6 = ((_DAT_183063150 ^ uVar23) + (uVar23 & _DAT_183063150) * 2) * (uVar4 - _DAT_183062f68);
  uVar6 = (uVar6 | _DAT_1830630f0) + (uVar6 & _DAT_1830630f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183063478 = uVar4;
  _DAT_183063008 = func_0x000184125310((uVar23 ^ uVar4 | uVar6) + (uVar6 & (uVar23 ^ uVar4)));
  uVar6 = in_stack_00000070;
  auVar11 = _DAT_1800170c0;
  uVar21 = (uint)(uVar38 >> 0x20);
  auVar29._8_4_ = (int)uVar38;
  auVar29._0_8_ = uVar38;
  auVar29._12_4_ = uVar21;
  uVar40 = (uint)(uVar4 >> 0x20);
  auVar16._8_4_ = (int)uVar4;
  auVar16._0_8_ = uVar4;
  auVar16._12_4_ = uVar40;
  uVar42 = SUB164(auVar29 & auVar16,0);
  uVar23 = SUB168(auVar29 & auVar16,0);
  auVar50._8_4_ = 0xffffffff;
  auVar50._0_8_ = 0xffffffffffffffff;
  auVar50._12_4_ = 0xffffffff;
  uVar22 = SUB164(auVar29 | auVar16,0);
  uVar43 = SUB164(auVar29 ^ auVar50,0);
  uVar33 = SUB164(auVar16 ^ auVar50,0);
  uVar7 = SUB168(auVar16 ^ auVar50,0);
  uVar8 = SUB164(auVar29 ^ auVar16,0);
  auVar1._8_8_ = in_stack_00000078;
  auVar1._0_8_ = in_stack_00000070;
  auVar9 = pblendw(auVar1,auVar50,0xf0);
  auVar17 = pshufb(auVar9 ^ _DAT_180118300,_DAT_1800170c0);
  uVar7 = (((ulonglong)_DAT_180118210 * (ulonglong)uVar33 +
            ((ulonglong)_DAT_180118220 * (ulonglong)uVar33 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_180118210 << 0x20) +
            (ulonglong)uVar22 * (ulonglong)_DAT_1801181e0 +
            ((SUB168(auVar29 | auVar16,0) >> 0x20) * (ulonglong)_DAT_1801181e0 +
             (ulonglong)_DAT_1801181d0 * (ulonglong)uVar22 << 0x20) +
            (ulonglong)uVar42 * (ulonglong)_DAT_1801181e0 +
            ((uVar23 >> 0x20) * (ulonglong)_DAT_1801181e0 +
             (ulonglong)uVar42 * (ulonglong)_DAT_1801181d0 << 0x20) +
            (ulonglong)_DAT_1801181b0 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_1801181c0 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar40 * (ulonglong)_DAT_1801181b0 << 0x20) +
            (ulonglong)_DAT_180118190 * (uVar38 & 0xffffffff) +
            ((ulonglong)_DAT_1801181a0 * (uVar38 & 0xffffffff) +
             (ulonglong)uVar21 * (ulonglong)_DAT_180118190 << 0x20) +
           (ulonglong)uVar43 * (ulonglong)_DAT_1801181f0 +
           ((ulonglong)_DAT_180118200 * (ulonglong)uVar43 +
            (SUB168(auVar29 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_1801181f0 << 0x20)) -
          ((ulonglong)uVar33 * (_DAT_180118290 & 0xffffffff) +
           ((ulonglong)_DAT_1801182e0 * (ulonglong)uVar33 +
            (uVar7 >> 0x20) * (_DAT_180118290 & 0xffffffff) << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_1801182c0 +
           ((ulonglong)_DAT_1801182d0 * (ulonglong)uVar8 +
            (SUB168(auVar29 ^ auVar16,0) >> 0x20) * (ulonglong)_DAT_1801182c0 << 0x20) +
          (ulonglong)uVar42 * (ulonglong)_DAT_1801182a0 +
          ((ulonglong)_DAT_1801182b0 * (ulonglong)uVar42 +
           (uVar23 >> 0x20) * (ulonglong)_DAT_1801182a0 << 0x20) +
          (uVar4 & 0xffffffff) * (ulonglong)_DAT_180118270 +
          ((ulonglong)_DAT_180118280 * (uVar4 & 0xffffffff) +
           (ulonglong)uVar40 * (ulonglong)_DAT_180118270 << 0x20) +
          (uVar38 & 0xffffffff) * (ulonglong)_DAT_180118250 +
          ((ulonglong)_DAT_180118260 * (uVar38 & 0xffffffff) +
           (ulonglong)uVar21 * (ulonglong)_DAT_180118250 << 0x20))) + _DAT_1801182f0;
  uVar23 = (_DAT_183063008 ^ uVar38) & 0xffffffffffffffc0;
  _DAT_183062dd0 = _DAT_183063398 ^ uVar23 ^ uVar7;
  _DAT_1830630e0 = (_DAT_1830630e0 ^ uVar23) + uVar7 ^ 0xcef36e84c7083668;
  _DAT_183062d98 = (_DAT_183062d98 * -0xa1b257d908e639d ^ _DAT_1830630e0) + uVar23;
  _DAT_183063458 = _DAT_183062d98 ^ _DAT_1830630e0;
  uVar4 = auVar17._8_8_ + auVar17._0_8_;
  uVar23 = uVar4 + _DAT_1830632a0;
  if (auVar17._4_4_ < 0) {
    uVar23 = _DAT_183063418 ^ uVar4;
  }
  _DAT_1830633c8 = uVar7;
  _DAT_1830633a0 = func_0x000184125310(SUB161(auVar9 ^ _DAT_180118300,5) ^ uVar23);
  _DAT_183063130 = ~uVar5;
  _DAT_1830632c8 =
       (_DAT_1830632c8 ^ _DAT_1830633a0 & 0xffffffffe0000000) + _DAT_183063130 ^ 0xf8b833da9ff22300;
  _DAT_1830632d8 =
       (_DAT_1830632d8 * -0x44e0a672b90d8f6f ^ _DAT_1830632c8) +
       (_DAT_1830633a0 & 0xffffffffe0000000);
  _DAT_183063190 = _DAT_1830632d8 ^ _DAT_1830632c8;
  auVar18._8_8_ = _DAT_183063130;
  auVar18._0_8_ = uVar6;
  auVar9 = pshufb(auVar18 ^ _DAT_180118310,auVar11);
  uVar23 = auVar9._8_8_ + auVar9._0_8_;
  uVar6 = uVar23 + _DAT_183063170;
  if (auVar9._4_4_ < 0) {
    uVar6 = _DAT_183063108 ^ uVar23;
  }
  _DAT_183062fa8 = func_0x000184125310(SUB161(auVar18 ^ _DAT_180118310,5) ^ uVar6);
  uVar6 = _DAT_183062fa8 >> 1 | _DAT_183062fa8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183062fa8;
  uVar6 = (uVar6 << 0x22 | uVar6 >> 0x1e) ^ lStack0000000000000060;
  _DAT_183063228 = _DAT_183063228 ^ uVar6 ^ 0x3747d7663da87065;
  _DAT_183063298 = (_DAT_183063298 * 0xc0c0bb719f9a44d ^ _DAT_183063228) + uVar6;
  _DAT_183062fe0 = _DAT_183063298 ^ _DAT_183063228;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar7 ^ 0x84222325;
  _DAT_183062f78 = 0;
  auVar11 = pshufb(auVar19 ^ _DAT_180118320,auVar11);
  uVar23 = auVar11._8_8_ + auVar11._0_8_;
  uVar6 = uVar23 + _DAT_1830632d0;
  if (auVar11._4_4_ < 0) {
    uVar6 = _DAT_183062f20 ^ uVar23;
  }
  _DAT_183063078 = func_0x000184125310(SUB161(auVar19 ^ _DAT_180118320,5) ^ uVar6);
  uVar8 = (uint)(uVar7 >> 0x20);
  auVar30._8_4_ = (int)uVar7;
  auVar30._0_8_ = uVar7;
  auVar30._12_4_ = uVar8;
  uVar6 = auVar30._8_8_ >> 0x20;
  auVar11 = auVar30 ^ _DAT_18001a710;
  auVar45._0_8_ =
       (((_DAT_180118350 & 0xffffffff) * (uVar7 & 0xffffffff) +
         ((_DAT_180118360 & 0xffffffff) * (uVar7 & 0xffffffff) +
          (ulonglong)uVar8 * (_DAT_180118350 & 0xffffffff) << 0x20) +
        (_DAT_180118330 & 0xffffffff) * (uVar7 & 0xffffffff) +
        ((_DAT_180118340 & 0xffffffff) * (uVar7 & 0xffffffff) +
         (ulonglong)uVar8 * (_DAT_180118330 & 0xffffffff) << 0x20)) -
       ((ulonglong)auVar11._0_4_ * (ulonglong)_DAT_1801183b0 +
        ((_DAT_1801183c0 & 0xffffffff) * (ulonglong)auVar11._0_4_ +
         (auVar11._0_8_ >> 0x20) * (ulonglong)_DAT_1801183b0 << 0x20) +
       (uVar7 & 0xffffffff) * (ulonglong)_DAT_180118390 +
       ((_DAT_1801183a0 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar8 * (ulonglong)_DAT_180118390 << 0x20) +
       (_DAT_180118370 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_DAT_180118380 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar8 * (_DAT_180118370 & 0xffffffff) << 0x20))) + _DAT_1801183d0;
  auVar45._8_8_ =
       (((_UNK_180118358 & 0xffffffff) * (uVar7 & 0xffffffff) +
         ((_UNK_180118368 & 0xffffffff) * (uVar7 & 0xffffffff) +
          uVar6 * (_UNK_180118358 & 0xffffffff) << 0x20) +
        (_UNK_180118338 & 0xffffffff) * (uVar7 & 0xffffffff) +
        ((_UNK_180118348 & 0xffffffff) * (uVar7 & 0xffffffff) +
         uVar6 * (_UNK_180118338 & 0xffffffff) << 0x20)) -
       ((auVar11._8_8_ & 0xffffffff) * (ulonglong)_UNK_1801183b8 +
        ((_UNK_1801183c8 & 0xffffffff) * (ulonglong)auVar11._8_4_ +
         (auVar11._8_8_ >> 0x20) * (ulonglong)_UNK_1801183b8 << 0x20) +
       (auVar30._8_8_ & 0xffffffff) * (ulonglong)_UNK_180118398 +
       ((_UNK_1801183a8 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar6 * _UNK_180118398 << 0x20) +
       (_UNK_180118378 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_UNK_180118388 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar6 * (_UNK_180118378 & 0xffffffff)
       << 0x20))) + _UNK_1801183d8;
  _DAT_183062f68 = _DAT_1830631e0 ^ _DAT_183062f60 ^ auVar45._0_8_;
  _DAT_183062d88 = (_DAT_183062d88 ^ _DAT_183062f60) + auVar45._0_8_ ^ 0x13d5d6529a44b47b;
  _DAT_183062f48 = (_DAT_183062f48 * 0x167321d67c53c795 ^ _DAT_183062d88) + _DAT_183062f60;
  _DAT_183062d70 = _DAT_183062f48 ^ _DAT_183062d88;
  uVar6 = (uStack00000000000000a0 ^ _DAT_183062f38) + uStack00000000000000a0 + _DAT_1830634e0;
  uVar23 = (_DAT_180117570 ^ _DAT_1830634e0) + _DAT_180117570 + _DAT_183062f38;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uStack00000000000000a0 ^ _DAT_183062f38;
  uVar23 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ _DAT_180117570 ^ _DAT_1830634e0;
  _DAT_1830634a0 = auVar45._0_8_;
  _DAT_183063000 =
       func_0x000184125310((uVar23 << 0x1d | uVar23 >> 0x23) - (_DAT_180117570 + _DAT_183062f38) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uStack00000000000000a0 + _DAT_1830634e0));
  uVar6 = (_DAT_183063000 & 0x7fffffffffffffff) -
          ((_DAT_183063000 & 0x7fffffffffffffff) >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183063000 & 0x7fffffffffffffff;
  _DAT_183063398 = _DAT_183063398 ^ uVar6 ^ 0x4cc8818e3a8bfb76;
  _DAT_1830632a8 = (_DAT_1830632a8 * 0x38ad5b563b9175df ^ _DAT_183063398) + uVar6;
  _DAT_183063140 = _DAT_1830632a8 ^ _DAT_183063398;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = auVar45._0_8_ ^ 0x84222325;
  _DAT_183063118 = 0;
  auVar11 = pshufb(auVar20 ^ _DAT_1801183e0,_DAT_1800170c0);
  uVar23 = auVar11._8_8_ + auVar11._0_8_;
  uVar6 = uVar23 + _DAT_183062df8;
  if (auVar11._4_4_ < 0) {
    uVar6 = _DAT_1830633d8 ^ uVar23;
  }
  _DAT_183062d38 = func_0x000184125310(SUB161(auVar20 ^ _DAT_1801183e0,5) ^ uVar6);
  uVar23 = uStack00000000000000a8;
  uVar6 = _DAT_183062d38 & 0x7fffffffffffffff;
  auVar46._8_4_ = 0xffffffff;
  auVar46._0_8_ = 0xffffffffffffffff;
  auVar46._12_4_ = 0xffffffff;
  uVar8 = SUB164(auVar46 ^ auVar45,0);
  uVar5 = (((ulonglong)uVar8 * (ulonglong)_DAT_180118410 +
            ((SUB168(auVar46 ^ auVar45,0) >> 0x20) * (ulonglong)_DAT_180118410 +
             (ulonglong)_DAT_1801183f0 * (ulonglong)uVar8 << 0x20) +
           (ulonglong)_DAT_180118420 * (auVar45._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_180118450 * (auVar45._0_8_ & 0xffffffff) +
            (auVar45._0_8_ >> 0x20) * (ulonglong)_DAT_180118420 << 0x20) +
           (ulonglong)_DAT_180118430 * (auVar45._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_180118440 * (auVar45._0_8_ & 0xffffffff) +
            (auVar45._0_8_ >> 0x20) * (ulonglong)_DAT_180118430 << 0x20) +
           (ulonglong)_DAT_180118400 * (auVar45._0_8_ & 0xffffffff) +
           ((auVar45._0_8_ >> 0x20) * (ulonglong)_DAT_180118400 +
            (auVar45._0_8_ & 0xffffffff) * (ulonglong)_DAT_1801183f0 << 0x20)) -
          ((auVar45._0_8_ & 0xffffffff) * (_DAT_1801184a0 & 0xffffffff) +
           ((ulonglong)_DAT_1801184b0 * (auVar45._0_8_ & 0xffffffff) +
            (auVar45._0_8_ >> 0x20) * (_DAT_1801184a0 & 0xffffffff) << 0x20) +
          (ulonglong)_DAT_180118480 * (auVar45._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_180118490 * (auVar45._0_8_ & 0xffffffff) +
           (auVar45._0_8_ >> 0x20) * (ulonglong)_DAT_180118480 << 0x20) +
          (ulonglong)_DAT_180118460 * (auVar45._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_180118470 * (auVar45._0_8_ & 0xffffffff) +
           (auVar45._0_8_ >> 0x20) * (ulonglong)_DAT_180118460 << 0x20))) + 0x906fbe71d73208e7;
  _DAT_183063430 = _DAT_183062e88 ^ uVar6 ^ uVar5;
  _DAT_183062f68 = (_DAT_183062f68 ^ uVar6) + uVar5 ^ 0x655c5f4b56ea75f3;
  _DAT_183062fa0 = (_DAT_183062fa0 * 0x7f9603c1bf7d48e1 ^ _DAT_183062f68) + uVar6;
  _DAT_183063140 = _DAT_183062fa0 ^ _DAT_183062f68;
  uVar4 = uStack00000000000000a8 ^ 0x84222325;
  uVar6 = ((_DAT_183063000 ^ uVar4) + (uVar4 & _DAT_183063000) * 2) * (uVar5 - _DAT_183062e80);
  uVar6 = (uVar6 | _DAT_1830632f0) + (uVar6 & _DAT_1830632f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183063120 = uVar5;
  _DAT_183063430 = func_0x000184125310((uVar4 ^ uVar5 | uVar6) + (uVar6 & (uVar4 ^ uVar5)));
  uVar4 = _DAT_183063430 << 0x14 | _DAT_183063430 >> 0x2c;
  uVar6 = uVar23 ^ uVar4;
  _DAT_1830631f8 = uVar5 ^ uVar23;
  _DAT_1830631b0 = (_DAT_1830631b0 ^ uVar6) + _DAT_1830631f8 ^ 0x80c33e9f44e560fc;
  _DAT_183062ec8 = (_DAT_183062ec8 * 0x1d8c5cbe5968d0ed ^ _DAT_1830631b0) + uVar6;
  _DAT_1830630c8 = _DAT_183062ec8 ^ _DAT_1830631b0;
  in_stack_00000040 = _DAT_1830631f8;
  FUN_190de3220(uVar4,&stack0x00000030,*_DAT_18301ee50 + 0x24283,*_DAT_18301ee50 + 0x5a,0x1ad5);
  cVar2 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4124add -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184124add(void)

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


// ----- block @ rva 0x4124e86 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184124e86(void)

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


// ----- block @ rva 0x4124fab -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184124fab(void)

{
  (*_DAT_180117a38)();
  return;
}


// ----- block @ rva 0x4124fed -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184124fed(void)

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


// ----- block @ rva 0x4125019 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184125019(void)

{
  (*_DAT_180117898)();
  return;
}


// ----- block @ rva 0x41251f4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841251f4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_180117a08)();
  return;
}


// ----- block @ rva 0x4125205 -----

void FUN_184125205(void)

{
  return;
}


// ----- block @ rva 0x4125271 -----

void FUN_184125271(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x41253f9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841253f9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180118528)();
  return;
}


// ----- block @ rva 0x4125418 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184125418(void)

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


// ----- block @ rva 0x41254c0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841254c0(void)

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


// ----- block @ rva 0x41254d6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841254d6(void)

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


// ----- block @ rva 0x412550f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412550f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180118608)();
  return;
}


// ----- block @ rva 0x4125528 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184125528(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_180118538)();
  return;
}


// ----- block @ rva 0x412554a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412554a(void)

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


// ----- block @ rva 0x412559e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412559e(void)

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


// ----- block @ rva 0x4125616 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184125616(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1801185d8)();
  return;
}


// ----- block @ rva 0x4125689 -----

undefined8 FUN_184125689(void)

{
  return 0;
}


// ----- block @ rva 0x4125696 -----

void FUN_184125696(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412581f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412581f(void)

{
  FUN_190ddce00();
  (*_DAT_180118f38)();
  return;
}


// ----- block @ rva 0x41258b6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841258b6(void)

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


// ----- block @ rva 0x4128c1d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184128c1d(void)

{
  FUN_190dd72e0();
  (*_DAT_180118f48)();
  return;
}


// ----- block @ rva 0x4129166 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184129166(void)

{
  FUN_190dd72e0();
  (*_DAT_180118df8)();
  return;
}


// ----- block @ rva 0x41292c6 -----

void FUN_1841292c6(void)

{
  return;
}


// ----- block @ rva 0x4129332 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184129332(void)

{
  undefined8 uStack0000000000000058;
  undefined8 in_stack_000000e8;
  
  uStack0000000000000058 = in_stack_000000e8;
  FUN_190dd72e0();
  (*_DAT_180118cf8)();
  return;
}


// ----- block @ rva 0x41293e9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841293e9(void)

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


// ----- block @ rva 0x4129ca4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184129ca4(void)

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


// ----- block @ rva 0x412a7b3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412a7b3(void)

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


// ----- block @ rva 0x412a8fb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412a8fb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_180119058)();
  return;
}


// ----- block @ rva 0x412aac9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412aac9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180118c28)();
  return;
}


// ----- block @ rva 0x412ac4e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412ac4e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_180119168)();
  return;
}


// ----- block @ rva 0x412b110 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412b110(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_180118de8)();
  return;
}


// ----- block @ rva 0x412b377 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412b377(void)

{
  FUN_190ddce00();
  (*_DAT_18011a0e8)();
  return;
}


// ----- block @ rva 0x412b3ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412b3ef(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticLongField /*0x4b8*/))();
  (*_DAT_180119ff8)();
  return;
}


// ----- block @ rva 0x412ec4c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412ec4c(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x412f077 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f077(void)

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


// ----- block @ rva 0x412f09b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f09b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180119f18)();
  return;
}


// ----- block @ rva 0x412f23b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f23b(void)

{
  undefined8 in_stack_00000030;
  
  (*_DAT_180119e68)(in_stack_00000030);
  return;
}


// ----- block @ rva 0x412f299 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f299(void)

{
  FUN_190ddfc90();
  (*_DAT_180119f78)();
  return;
}


// ----- block @ rva 0x412f2f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f2f0(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x412f38e -----

void FUN_18412f38e(void)

{
  return;
}


// ----- block @ rva 0x412f46c -----

void FUN_18412f46c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412f57d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f57d(void)

{
  FUN_190ddfc90();
  (*_DAT_18011b078)();
  return;
}


// ----- block @ rva 0x412f5b0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f5b0(void)

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


// ----- block @ rva 0x412f5d4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f5d4(void)

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


// ----- block @ rva 0x412f5ea -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f5ea(void)

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


// ----- block @ rva 0x412f623 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f623(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18011b088)();
  return;
}


// ----- block @ rva 0x412f63e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f63e(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18011b048)();
  return;
}


// ----- block @ rva 0x412f66c -----

void FUN_18412f66c(void)

{
  return;
}


// ----- block @ rva 0x412f674 -----

void FUN_18412f674(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412f6da -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f6da(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18011b0d8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x412f6e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f6e6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x412f787 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f787(void)

{
  FUN_190ddfc90();
  (*_DAT_18011b158)();
  return;
}


// ----- block @ rva 0x412f7ba -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f7ba(void)

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


// ----- block @ rva 0x412f86f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f86f(void)

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


// ----- block @ rva 0x412f884 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f884(void)

{
  FUN_190ddfc90();
  (*_DAT_18011b138)();
  return;
}


// ----- block @ rva 0x412f8bc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f8bc(void)

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


// ----- block @ rva 0x412f8e0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412f8e0(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x412f8fb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f8fb(void)

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


// ----- block @ rva 0x412f94d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412f94d(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18011b148)();
  return;
}


// ----- block @ rva 0x412f96a -----

void FUN_18412f96a(void)

{
  return;
}


// ----- block @ rva 0x412f972 -----

void FUN_18412f972(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412fa7d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fa7d(void)

{
  FUN_190ddfc90();
  (*_DAT_18011b258)();
  return;
}


// ----- block @ rva 0x412fab0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fab0(void)

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


// ----- block @ rva 0x412fad4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fad4(void)

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


// ----- block @ rva 0x412faea -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412faea(void)

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


// ----- block @ rva 0x412fb23 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fb23(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18011b248)();
  return;
}


// ----- block @ rva 0x412fb3e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fb3e(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18011b208)();
  return;
}


// ----- block @ rva 0x412fb6c -----

void FUN_18412fb6c(void)

{
  return;
}


// ----- block @ rva 0x412fb74 -----

void FUN_18412fb74(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412fbda -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fbda(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18011b288)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x412fbe6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fbe6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x412fc7d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fc7d(void)

{
  FUN_190ddce00();
  (*_DAT_18011b2f8)();
  return;
}


// ----- block @ rva 0x412fcb0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fcb0(void)

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


// ----- block @ rva 0x412fcd4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fcd4(void)

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


// ----- block @ rva 0x412fcf5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fcf5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetStaticObjectField /*0x4d0*/))();
  (*_DAT_18011b2c8)();
  return;
}


// ----- block @ rva 0x412fd12 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fd12(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18011b2d8)();
  return;
}


// ----- block @ rva 0x412fd24 -----

void FUN_18412fd24(void)

{
  return;
}


// ----- block @ rva 0x412fd2c -----

void FUN_18412fd2c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412fd5a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fd5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18011b338)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x412fd66 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fd66(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x412fd8c -----

void FUN_18412fd8c(void)

{
  return;
}


// ----- block @ rva 0x412fd8d -----

undefined4 * FUN_18412fd8d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x412fdf9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fdf9(void)

{
  FUN_190ddce00();
  (*_DAT_18011b398)();
  return;
}


// ----- block @ rva 0x412fe2c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fe2c(void)

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


// ----- block @ rva 0x412fe50 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fe50(void)

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


// ----- block @ rva 0x412fe71 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fe71(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_18011b378)();
  return;
}


// ----- block @ rva 0x412fe8b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412fe8b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18011b368)();
  return;
}


// ----- block @ rva 0x412feab -----

void FUN_18412feab(void)

{
  return;
}


// ----- block @ rva 0x412feb2 -----

void FUN_18412feb2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x412feea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18412feea(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18011b3d8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x412fef6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18412fef6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x412ff1c -----

void FUN_18412ff1c(void)

{
  return;
}


// ----- block @ rva 0x412ff1d -----

undefined4 * FUN_18412ff1d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x4130073 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001841300aa */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184130073(void)

{
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x41300c8 -----

void FUN_1841300c8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar1 = (**(code **)(unaff_R12 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x0001841300f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18011b910 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x41356cf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001841356f2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1841356cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x4135721 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184135721(ulonglong param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  uVar2 = (~param_1 + 0x9b0fe896fb960559) *
          ((param_2 ^ 0x915b8a82a533682c) + (param_2 & 0x115b8a82a533682c) * 2);
  uVar2 = (uVar2 | in_RAX) + (uVar2 & in_RAX);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183063cf8 = func_0x00018415ae10((uVar2 | 0xa5462145ea56d74) + (uVar2 & 0xa5462145ea56d74));
  uVar1 = _DAT_183063cf8 ^ 0x64809b5a7eaef818;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_183063cb8 = (_DAT_183063cb8 ^ uVar1) + 0x9b5fea96fb974f59 ^ 0xf082251582cabc64;
  _DAT_183063b28 = (_DAT_183063b28 * -0x38b14f1f1d0b0161 ^ _DAT_183063cb8) + uVar1;
  _DAT_183063cc0 = _DAT_183063b28 ^ _DAT_183063cb8;
  _DAT_183063c20 = 0x9b5fea96fb974f59;
  uVar2 = (_DAT_183063c58 ^ _DAT_18011caa0) + _DAT_183063ba8 + 0x2ff0962f1aa67e6b;
  uVar1 = (_DAT_183063ba8 ^ _UNK_18011caa8) + _DAT_183063c58 + 0x40e3d8165cc7e20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183063c58 ^ _DAT_18011caa0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183063ba8 ^ _UNK_18011caa8;
  _DAT_183063cd0 =
       func_0x00018415ae10((uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183063c58 + 0x40e3d8165cc7e20) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183063ba8 + 0x2ff0962f1aa67e6b));
  uVar2 = (_DAT_183063cd0 ^ 0x2ffebfafffcc7f6e) & 0x7fffffffffffffff;
  _DAT_183063c98 = (_DAT_183063c98 ^ uVar2) + 0x2bfeabaefb48236e ^ 0x43ce32c01a468a20;
  _DAT_183063ba0 = (_DAT_183063ba0 * 0x374a3ced7d314f71 ^ _DAT_183063c98) + uVar2;
  _DAT_183063ba8 = _DAT_183063ba0 ^ _DAT_183063c98;
  _DAT_183063be0 = 0x2bfeabaefb48236e;
  uVar2 = (~_DAT_183063b58 + 0xebe94643df926388) *
          ((_DAT_183063cf8 ^ 0x84222cda) + (ulonglong)((uint)_DAT_183063cf8 & 0x84222cda) * 2);
  uVar2 = (uVar2 | _DAT_183063b80) + (uVar2 & _DAT_183063b80);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183063b28 = func_0x00018415ae10((uVar2 | 0xebe946435bb04f5d) + (uVar2 & 0xebe946435bb04f5d));
  uVar2 = _DAT_183063b28 ^ 0xebe94643df926000;
  _DAT_183063b48 = _DAT_183063c90 ^ uVar2 ^ 0xebe94643df927386;
  _DAT_183063c80 = (_DAT_183063c80 ^ uVar2) + 0xebe94643df927386 ^ 0x98754da34bb8c9c5;
  _DAT_183063cc0 = (_DAT_183063cc0 * -0x6fd2cc708fe3a213 ^ _DAT_183063c80) + uVar2;
  _DAT_183063b78 = _DAT_183063cc0 ^ _DAT_183063c80;
  _DAT_183063c50 = 0xebe94643df927386;
  uVar2 = (_DAT_183063b00 ^ _DAT_18011cab0) + _DAT_183063b88 + 0xebe946435bb050a3;
  uVar1 = (_DAT_183063b88 ^ _UNK_18011cab8) + _DAT_183063b00 + 0x1416b9bc206d9c79;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183063b00 ^ _DAT_18011cab0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183063b88 ^ _UNK_18011cab8;
  _DAT_183063be8 =
       func_0x00018415ae10((uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183063b00 + 0x1416b9bc206d9c79) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183063b88 + 0xebe946435bb050a3));
  uVar2 = _DAT_183063be8 ^ 0x1416b9bc206d9c79;
  _DAT_183063b58 = _DAT_183063cf0 ^ uVar2 ^ 0xfff;
  _DAT_183063cb0 = (_DAT_183063cb0 ^ uVar2) + 0xfff ^ 0x129604e2e6352e6b;
  _DAT_183063c90 = (_DAT_183063c90 * -0xe967f0c6d001c57 ^ _DAT_183063cb0) + uVar2;
  _DAT_183063c58 = _DAT_183063c90 ^ _DAT_183063cb0;
  _DAT_183063c38 = 0xfff;
  _DAT_183063bf8 = func_0x00018415ae10(_DAT_183063b70 + 0xac311d47009ccc39 ^ 0x17);
  uVar2 = _DAT_183063bf8 >> 1 | _DAT_183063bf8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183063bf8) & 0xfffffffffffffffc;
  _DAT_183063b10 = (_DAT_183063b10 ^ uVar2) + 0xb99a930b200903dc ^ 0x92b4045ba3894c3e;
  _DAT_183063b08 = (_DAT_183063b08 * 0x3f0169f44529231d ^ _DAT_183063b10) + uVar2;
  _DAT_183063cf8 = _DAT_183063b08 ^ _DAT_183063b10;
  _DAT_183063be8 = 0xb99a930b200903dc;
  _DAT_183063c40 = func_0x00018415ae10(_DAT_183063b68 ^ 0xd35023446a14d46e);
  uVar1 = _DAT_183063c40 ^ 0x46656cf4dff6ffff;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar1;
  _DAT_183063c50 = _DAT_183063cb8 ^ uVar1 ^ 0x46656cf4dff70c23;
  _DAT_183063b30 = (_DAT_183063b30 ^ uVar1) + 0x46656cf4dff70c23 ^ 0xefe64a94c56ca6b3;
  _DAT_183063ba0 = (_DAT_183063ba0 * 0x7180442b28a9c11b ^ _DAT_183063b30) + uVar1;
  _DAT_183063cb0 = _DAT_183063ba0 ^ _DAT_183063b30;
  _DAT_183063b40 = 0x46656cf4dff70c23;
  _DAT_183063ce8 = func_0x00018415ae10(_DAT_183063b78 + 0x552cad36494dbce0 ^ 0x26);
  uVar2 = (_DAT_183063ce8 ^ 0x46656cf4dff70c23) << 0x15 |
          (_DAT_183063ce8 ^ 0x46656cf4dff70c23) >> 0x2b;
  _DAT_183063b40 = _DAT_183063cd8 ^ uVar2 ^ 0xfff;
  _DAT_183063b70 = (_DAT_183063b70 ^ uVar2) + 0xfff ^ 0x56c38b1bcc918453;
  _DAT_183063cd0 = (_DAT_183063cd0 * 0x4beb9bc96e64ce13 ^ _DAT_183063b70) + uVar2;
  _DAT_183063ca8 = _DAT_183063cd0 ^ _DAT_183063b70;
  _DAT_183063c28 = 0xfff;
  _DAT_183063bb0 = func_0x00018415ae10(_DAT_183063c18 ^ 0x5c7a946040cdfd5d);
  _DAT_183063c98 = (_DAT_183063c98 ^ _DAT_183063bb0) + 0x4940cd58dbdb661c ^ 0x8dc974ca873e860d;
  _DAT_183063b40 = (_DAT_183063b40 * 0x2fc3c5f877fb0cb5 ^ _DAT_183063c98) + _DAT_183063bb0;
  _DAT_183063b38 = _DAT_183063b40 ^ _DAT_183063c98;
  _DAT_183063cb8 = 0x4940cd58dbdb661c;
  uVar2 = _DAT_183063c28 ^ _UNK_18011cac8;
  uVar1 = (_DAT_18011cac0 ^ 0x4940cd58dbdb661c) + _DAT_183063c28 + 0x84222cda;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18011cac0 ^ 0x4940cd58dbdb661c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar2;
  uVar2 = func_0x00018415ae10((uVar2 << 0x1d | uVar2 >> 0x23) ^
                              (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183063c28 + 0x84222cda));
  _DAT_183063c50 = _DAT_183063c78 ^ uVar2 ^ 0xb6bf32a72424a9e3;
  _DAT_183063bc0 = (_DAT_183063bc0 ^ uVar2) + 0xb6bf32a72424a9e3 ^ 0xa424599110cb15d5;
  _DAT_183063cd0 = (_DAT_183063cd0 * -0x3576daac7c121651 ^ _DAT_183063bc0) + uVar2;
  _DAT_183063bf0 = _DAT_183063cd0 ^ _DAT_183063bc0;
  _DAT_183063cc0 = -0x4940cd58dbdb561d;
  uVar2 = (_DAT_183063cb0 ^ _DAT_18011cad0) + _DAT_183063c08 + 0xb6bf32a7a0068ac6;
  uVar1 = (_DAT_183063c08 ^ _UNK_18011cad8) + _DAT_183063cb0 + 0x4940cd58dbdb661c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183063cb0 ^ _DAT_18011cad0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183063c08 ^ _UNK_18011cad8;
  _DAT_183063c48 =
       func_0x00018415ae10((uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183063cb0 + 0x4940cd58dbdb661c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183063c08 + 0xb6bf32a7a0068ac6));
  _DAT_183063be8 = (_DAT_183063be8 ^ _DAT_183063c30) + 0xfff ^ 0x815a2549db8c89e;
  _DAT_183063cf0 = (_DAT_183063cf0 * 0x63a4e5d6b86c8ad1 ^ _DAT_183063be8) + _DAT_183063c30;
  _DAT_183063bf8 = _DAT_183063cf0 ^ _DAT_183063be8;
  _DAT_183063c40 = 0xfff;
  uVar2 = (~_DAT_183063cb0 + 0x2bfeabaefb48236f) *
          ((_DAT_183063b80 ^ 0x9b5fea967fb56c7c) + (_DAT_183063b80 & 0x1b5fea967fb56c7c) * 2);
  uVar2 = (uVar2 | _DAT_183063c20) + (uVar2 & _DAT_183063c20);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183063b90 = func_0x00018415ae10((uVar2 | 0xb0a1413884fd4f12) + (uVar2 & 0xb0a1413884fd4f12));
  uVar2 = (_DAT_183063b90 ^ 0x184c0a80a1120c41) & 0x9b5fea96fb974f59;
  _DAT_183063ce8 = _DAT_183063bf8 ^ uVar2 ^ 0xc75e9645f6df72c7;
  _DAT_183063cb8 = (_DAT_183063cb8 ^ uVar2) + 0xc75e9645f6df72c7 ^ 0x5646d97069684fb9;
  _DAT_183063b70 = (_DAT_183063b70 * -0x19cbcafc7fcbf8df ^ _DAT_183063cb8) + uVar2;
  _DAT_183063cf0 = _DAT_183063b70 ^ _DAT_183063cb8;
  _DAT_183063ba8 = -0x38a169ba09208d39;
  uVar2 = (~_DAT_183063bb8 + 0x2bfeabaefb48236f) *
          ((_DAT_183063bf0 ^ 0x9b5fea967fb56c7c) + (_DAT_183063bf0 & 0x1b5fea967fb56c7c) * 2);
  uVar2 = (uVar2 | _DAT_183063c50) + (uVar2 & _DAT_183063c50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183063b08 = func_0x00018415ae10((uVar2 | 0xb0a1413884fd4f12) + (uVar2 & 0xb0a1413884fd4f12));
  _DAT_183063b40 =
       (_DAT_183063b40 ^ _DAT_183063b08 & 0x3fffffffffffffff) + 0xb5eaa86fb000348 ^
       0xb2fc004be8a213e9;
  _DAT_183063cc0 =
       (_DAT_183063cc0 * -0x5d7fb0bac2dd7bd5 ^ _DAT_183063b40) +
       (_DAT_183063b08 & 0x3fffffffffffffff);
  _DAT_183063bf8 = _DAT_183063cc0 ^ _DAT_183063b40;
  _DAT_183063b10 = 0xb5eaa86fb000348;
  uVar2 = (_DAT_183063b38 ^ _DAT_18011cae0) + _DAT_183063b18 + 0xc75e964572fd51e2;
  uVar1 = (_DAT_183063b18 ^ _UNK_18011cae8) + _DAT_183063b38 + 0xc75e9645f6df72c7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183063b38 ^ _DAT_18011cae0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183063b18 ^ _UNK_18011cae8;
  _DAT_183063b08 =
       func_0x00018415ae10((uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183063b38 + 0xc75e9645f6df72c7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183063b18 + 0xc75e964572fd51e2));
  _DAT_183063b98 = (_DAT_183063b08 ^ 0x6e59e27d6b1) & 0x3fffffffffff;
  _DAT_183063b18 = _DAT_183063b18 ^ _DAT_183063b98 ^ 0x87d81835e25a4680;
  _DAT_183063b50 = (_DAT_183063b50 * 0x76db11147d02aa59 ^ _DAT_183063b18) + _DAT_183063b98;
  _DAT_183063bb0 = _DAT_183063b50 ^ _DAT_183063b18;
  _DAT_183063b30 = 0;
  _DAT_183063c38 = func_0x00018415ae10(_DAT_183063cc8 + 0xffec00834a001dffU ^ 0x92);
  uVar2 = (_DAT_183063c38 << 0x14 | _DAT_183063c38 >> 0x2c) << 0x29 |
          (_DAT_183063c38 & 0xfffffffffff) >> 3;
  _DAT_183063bb0 = _DAT_183063c58 ^ uVar2 ^ 0xfff;
  _DAT_183063b68 = (_DAT_183063b68 ^ uVar2) + 0xfff ^ 0xadeb648dab093793;
  _DAT_183063c98 = (_DAT_183063c98 * -0x3fee6c02ae77bfe7 ^ _DAT_183063b68) + uVar2;
  _DAT_183063cf8 = _DAT_183063c98 ^ _DAT_183063b68;
  _DAT_183063b70 = 0xfff;
  _DAT_183063c78 = func_0x00018415ae10(_DAT_183063c90 ^ 0x4ad3870b5582b2b5);
  _DAT_183063bd8 = _DAT_183063bd8 ^ _DAT_183063c78 & 0x7fffffffff ^ 0x1bbc6955d25f4cd9;
  _DAT_183063c08 =
       (_DAT_183063c08 * 0x61fb727b671ff9d9 ^ _DAT_183063bd8) + (_DAT_183063c78 & 0x7fffffffff);
  _DAT_183063b60 = _DAT_183063c08 ^ _DAT_183063bd8;
  _DAT_183063c80 = 0;
  uVar2 = ((_DAT_183063bc8 ^ 0x84222cda) + (ulonglong)((uint)_DAT_183063bc8 & 0x84222cda) * 2) *
          -_DAT_183063b68;
  uVar2 = (uVar2 | _DAT_183063b80) + (uVar2 & _DAT_183063b80);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183063b20 = func_0x00018415ae10((uVar2 | 0x84222cda) + (ulonglong)((uint)uVar2 & 0x84222cda))
  ;
  uVar2 = _DAT_183063b20 & 0xfffffffff0000000;
  _DAT_183063cd8 = _DAT_183063b18 ^ uVar2 ^ 0xfff;
  _DAT_183063c00 = (_DAT_183063c00 ^ uVar2) + 0xfff ^ 0xf43232c0e028b74d;
  _DAT_183063ba8 = (_DAT_183063ba8 * 0x4da179ec64b9143d ^ _DAT_183063c00) + uVar2;
  _DAT_183063b98 = _DAT_183063ba8 ^ _DAT_183063c00;
  _DAT_183063b68 = 0xfff;
  _DAT_183063cb8 = func_0x00018415ae10(_DAT_183063bb0 + 0x1d00841affe1ff ^ 0xb7);
  uVar2 = (_DAT_183063cb8 & 0x7fffffffffffffff) >> 1 | _DAT_183063cb8 & 0x7fffffffffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_183063cb8 & 0x7fffffffffffffff;
  _DAT_183063b38 = _DAT_183063b38 ^ uVar2 ^ 0x55d13c9ec7508d15;
  _DAT_183063b20 = (_DAT_183063b20 * 0x55fe3980fe3137af ^ _DAT_183063b38) + uVar2;
  _DAT_183063be0 = _DAT_183063b20 ^ _DAT_183063b38;
  _DAT_183063c18 = 0;
  _DAT_183063ce8 = func_0x00018415ae10(_DAT_183063c80 + 0xffe3ff84d9ffddff ^ 0x32);
  uVar2 = (_DAT_183063ce8 ^ 0xfff) & 0x7fffffffffff;
  _DAT_183063ba0 = _DAT_183063b18 ^ uVar2 ^ 0xfff;
  _DAT_183063c48 = (_DAT_183063c48 ^ uVar2) + 0xfff ^ 0x1beb3cd104e2d0cd;
  _DAT_183063bc8 = (_DAT_183063bc8 * 0x69712ed3aae8732b ^ _DAT_183063c48) + uVar2;
  _DAT_183063b48 = _DAT_183063bc8 ^ _DAT_183063c48;
  _DAT_183063bc0 = 0xfff;
  switch(0xfff < *(ulonglong *)(unaff_RBP + 0x30)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x413bbf1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18413bbf1(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  uint uVar6;
  undefined4 unaff_EDI;
  longlong *unaff_R12;
  undefined4 unaff_R14D;
  undefined4 unaff_R15D;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM10_Qa;
  ulonglong unaff_XMM10_Qb;
  ulonglong unaff_XMM12_Qa;
  ulonglong unaff_XMM12_Qb;
  ulonglong unaff_XMM13_Qa;
  ulonglong unaff_XMM13_Qb;
  ulonglong unaff_XMM14_Qa;
  ulonglong unaff_XMM14_Qb;
  
  *(undefined4 *)(unaff_RBP + 0xa0) = unaff_R15D;
  *(undefined4 *)(unaff_RBP + 0x30) = unaff_R14D;
  *(undefined4 *)(unaff_RBP + 0x10) = unaff_EDI;
  lVar2 = (**(code **)(unaff_R12 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x78) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x80));
  (**(code **)(unaff_R12 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar1 = *(uint *)(unaff_RBP + 0x70);
  uVar6 = *(uint *)(unaff_RBP + 0x78);
  uVar3 = (ulonglong)uVar1;
  uVar4 = (ulonglong)uVar6 ^ 0x84222325;
  uVar5 = ((_DAT_183063b50 ^ uVar4) + (ulonglong)((uint)_DAT_183063b50 & (uint)uVar4) * 2) *
          (uVar3 - _DAT_183063c30);
  uVar5 = (uVar5 | _DAT_183063bc8) + (uVar5 & _DAT_183063bc8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183063bf0 =
       func_0x00018415ae10((uVar4 ^ uVar3 | uVar5) +
                           (ulonglong)((uint)(uVar4 ^ uVar3) & (uint)uVar5));
  uVar3 = uVar3 ^ _DAT_183063bf0 & 0xffffffffffffffc0;
  uVar6 = uVar6 & uVar1;
  _DAT_183063cb8 = (ulonglong)uVar6;
  _DAT_183063b80 = (_DAT_183063b80 ^ uVar3) + _DAT_183063cb8 ^ 0xf722f3617641d7ef;
  _DAT_183063b18 = (_DAT_183063b18 * 0x3bd0416d3a81601b ^ _DAT_183063b80) + uVar3;
  _DAT_183063ca0 = _DAT_183063b18 ^ _DAT_183063b80;
  *(uint *)(unaff_RBP + 0x70) = uVar6;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(int *)(unaff_RBP + 0x50) = (int)*(undefined8 *)(unaff_RBP + 0x70);
  _DAT_183063ba0 = func_0x00018415ae10(_DAT_183063c60 ^ 0xc10016c7ffbf4f);
  _DAT_183063cb0 = (_DAT_183063cb0 ^ _DAT_183063ba0) + 0xbffef6ff ^ 0xac9b928de158eb2a;
  _DAT_183063bc8 = (_DAT_183063bc8 * -0x44db77e373fb6aa3 ^ _DAT_183063cb0) + _DAT_183063ba0;
  _DAT_183063b48 = _DAT_183063bc8 ^ _DAT_183063cb0;
  _DAT_183063be8 = 0xbffef6ff;
  _DAT_183063cb8 = func_0x00018415ae10(_DAT_183063c18 + 0x3ffda210075ff ^ 0xd6);
  _DAT_183063c00 =
       (_DAT_183063c00 ^ _DAT_183063cb8 * -0x37ec5f8c5a8cf0fb) - 0x5a5c2746 ^ 0xd3466f908f112504;
  _DAT_183063c88 =
       (_DAT_183063c88 * -0x5b531fe9878237a9 ^ _DAT_183063c00) +
       _DAT_183063cb8 * -0x37ec5f8c5a8cf0fb;
  _DAT_183063b98 = _DAT_183063c88 ^ _DAT_183063c00;
  _DAT_183063ce0 = 0xa5a3d8ba;
  uVar3 = (~_DAT_183063c78 + 0x5a5c2747) *
          ((_DAT_183063bd8 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183063bd8 & 0x8422239a) * 2);
  uVar3 = (uVar3 | _DAT_183063b98) + (uVar3 & _DAT_183063b98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063ca0 = func_0x00018415ae10((uVar3 | 0xde7e04dc) + (ulonglong)((uint)uVar3 & 0xde7e04dc))
  ;
  uVar3 = _DAT_183063ca0 ^ 0x436ac14d3a;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3;
  _DAT_183063c30 = _DAT_183063b78 ^ uVar3 ^ 0x5a5c2805;
  _DAT_183063b18 = (_DAT_183063b18 ^ uVar3) + 0x5a5c2805 ^ 0xaf824079e036131;
  _DAT_183063c58 = (_DAT_183063c58 * 0x7ecc3dfc5cad48f3 ^ _DAT_183063b18) + uVar3;
  _DAT_183063c50 = _DAT_183063c58 ^ _DAT_183063b18;
  _DAT_183063cb0 = 0x5a5c2805;
  uVar3 = (~_DAT_183063b40 + 0xa5a3d8bb) *
          ((_DAT_183063b90 ^ 0xde7e0b20) + (ulonglong)((uint)_DAT_183063b90 & 0xde7e0b20) * 2);
  uVar3 = (uVar3 | _DAT_183063bb0) + (uVar3 & _DAT_183063bb0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c98 = func_0x00018415ae10((uVar3 | 0x7bddd39a) + (ulonglong)((uint)uVar3 & 0x7bddd39a))
  ;
  uVar3 = _DAT_183063c98 ^ 0xfffff8bf;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3)
          & 0xfffffffffffe0000;
  _DAT_183063ce0 = _DAT_183063b80 ^ uVar3 ^ 0x1000000bf;
  _DAT_183063c90 = (_DAT_183063c90 ^ uVar3) + 0x1000000bf ^ 0xf98e0c5a9e2042d8;
  _DAT_183063b60 = (_DAT_183063b60 * -0x37bfd8d31ef4475f ^ _DAT_183063c90) + uVar3;
  _DAT_183063bd8 = _DAT_183063b60 ^ _DAT_183063c90;
  _DAT_183063b70 = 0xbf;
  uVar3 = (_DAT_183063ce8 ^ unaff_XMM7_Qa) + _DAT_183063b58 + 0x8422239a;
  uVar5 = (_DAT_183063b58 ^ unaff_XMM7_Qb) + _DAT_183063ce8 + 0x1d7af460;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063ce8 ^ unaff_XMM7_Qa;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183063b58 ^ unaff_XMM7_Qb;
  _DAT_183063ce0 =
       func_0x00018415ae10((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183063ce8 + 0x1d7af460) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063b58 + 0x8422239a));
  _DAT_183063b38 = _DAT_183063cd8 ^ _DAT_183063ce0 ^ 0x1d7af51f;
  _DAT_183063ba8 = (_DAT_183063ba8 ^ _DAT_183063ce0) + 0x1d7af51f ^ 0xb4b2def5ff30076e;
  _DAT_183063bd8 = (_DAT_183063bd8 * -0x1cc2fb675071e81b ^ _DAT_183063ba8) + _DAT_183063ce0;
  _DAT_183063b48 = _DAT_183063bd8 ^ _DAT_183063ba8;
  _DAT_183063bd0 = 0x1d7af51f;
  uVar3 = (_DAT_183063b08 ^ unaff_XMM10_Qa) + _DAT_183063c78 + 0x84222325;
  uVar5 = (_DAT_183063c78 ^ unaff_XMM10_Qb) + _DAT_183063b08 + 0x1c41af4c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063b08 ^ unaff_XMM10_Qa;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183063c78 ^ unaff_XMM10_Qb;
  _DAT_183063ba8 =
       func_0x00018415ae10((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183063b08 + 0x1c41af4c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063c78 + 0x84222325));
  _DAT_183063b50 = (_DAT_183063b50 ^ _DAT_183063ba8) - 0x1c41af4c ^ 0xef2b63625517f646;
  _DAT_183063bf0 = (_DAT_183063bf0 * 0x661ad8806235b709 ^ _DAT_183063b50) + _DAT_183063ba8;
  _DAT_183063b40 = _DAT_183063bf0 ^ _DAT_183063b50;
  _DAT_183063cd8 = 0xe3be50b4;
  uVar3 = (~_DAT_183063ba0 + 0x1c41af4d) *
          ((_DAT_183063c28 ^ 0x8422239a) + (ulonglong)((uint)_DAT_183063c28 & 0x8422239a) * 2);
  uVar3 = (uVar3 | _DAT_183063b40) + (uVar3 & _DAT_183063b40);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018415ae10((uVar3 | 0x98638cd6) + (ulonglong)((uint)uVar3 & 0x98638cd6));
  _DAT_183063c80 = _DAT_183063bf0 ^ uVar3 ^ 0x1c41b00b;
  _DAT_183063b20 = (_DAT_183063b20 ^ uVar3) + 0x1c41b00b ^ 0xdb444eda16172be6;
  _DAT_183063c28 = (_DAT_183063c28 * -0x655497e25bb10e87 ^ _DAT_183063b20) + uVar3;
  _DAT_183063c90 = _DAT_183063c28 ^ _DAT_183063b20;
  _DAT_183063cc8 = 0x1c41b00b;
  _DAT_183063b48 = func_0x00018415ae10(_DAT_183063bb8 ^ 0x3f000569ffa219);
  uVar3 = (_DAT_183063b30 & 0x7fffffffffffffff) -
          ((_DAT_183063b30 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183063b30 & 0x7fffffffffffffff;
  _DAT_183063b00 = _DAT_183063c70 ^ uVar3 ^ 0x1000000bf;
  _DAT_183063b08 = (_DAT_183063b08 ^ uVar3) + 0x1000000bf ^ 0xd2fe2b60feede982;
  _DAT_183063bd0 = (_DAT_183063bd0 * -0x548203a85ad484a1 ^ _DAT_183063b08) + uVar3;
  _DAT_183063b40 = _DAT_183063bd0 ^ _DAT_183063b08;
  _DAT_183063bb8 = 0xbf;
  uVar3 = (~_DAT_183063b20 + 0xcfa858bd) *
          ((_DAT_183063c58 ^ 0x3bdcd5da) + (ulonglong)((uint)_DAT_183063c58 & 0x3bdcd5da) * 2);
  uVar3 = (uVar3 | _DAT_183063b88) + (uVar3 & _DAT_183063b88);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063bd0 = func_0x00018415ae10((uVar3 | 0xf4748d66) + (ulonglong)((uint)uVar3 & 0xf4748d66))
  ;
  uVar3 = _DAT_183063bd0 * -0x2b9f11a32ae36b89 << 0x2c |
          _DAT_183063bd0 * -0x2b9f11a32ae36b89 >> 0x14;
  _DAT_183063b60 = _DAT_183063ba0 ^ uVar3 ^ 0x18fa74fbb;
  _DAT_183063b00 = (ulonglong)(&UNK_18fa74fbb + (_DAT_183063b00 ^ uVar3)) ^ 0x80dc2997b1178cb2;
  _DAT_183063c80 = (_DAT_183063c80 * -0x5b1bf00e17dbbc3 ^ _DAT_183063b00) + uVar3;
  _DAT_183063c60 = _DAT_183063c80 ^ _DAT_183063b00;
  _DAT_183063b80 = 0x8fa74fbb;
  uVar3 = (_DAT_183063c90 ^ unaff_XMM14_Qa) + _DAT_183063cd8 + 0x3bdcd5da;
  uVar5 = (_DAT_183063cd8 ^ unaff_XMM14_Qb) + _DAT_183063c90 + 0xcfa858bc;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063c90 ^ unaff_XMM14_Qa;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183063cd8 ^ unaff_XMM14_Qb;
  _DAT_183063b68 =
       func_0x00018415ae10((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183063c90 + 0xcfa858bc) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063cd8 + 0x3bdcd5da));
  _DAT_183063c60 =
       (_DAT_183063c60 ^ _DAT_183063b68 * 0x262b8f3a4807f5c3) + 0x7056ae43 ^ 0x6e0c7f48b63dfb52;
  _DAT_183063c88 =
       (_DAT_183063c88 * 0x79b40e692b3f99fb ^ _DAT_183063c60) + _DAT_183063b68 * 0x262b8f3a4807f5c3;
  _DAT_183063c58 = _DAT_183063c88 ^ _DAT_183063c60;
  _DAT_183063ce8 = 0x7056ae43;
  _DAT_183063b80 = func_0x00018415ae10(_DAT_183063c20 ^ 0xff72ffab99ff930e);
  _DAT_183063ba0 = (_DAT_183063ba0 ^ _DAT_183063b80 ^ 0xfffefeff) + 0x8fa850bc ^ 0x16c68d9da11a4200;
  _DAT_183063c68 =
       (_DAT_183063c68 * 0x26d4549536536a6d ^ _DAT_183063ba0) + (_DAT_183063b80 ^ 0xfffefeff);
  _DAT_183063c58 = _DAT_183063c68 ^ _DAT_183063ba0;
  _DAT_183063b88 = 0x8fa850bc;
  uVar3 = (_DAT_183063bc0 ^ unaff_XMM12_Qa) + _DAT_183063be8 + 0xf4748d66;
  uVar5 = (_DAT_183063be8 ^ unaff_XMM12_Qb) + _DAT_183063bc0 + 0x1f50a178;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063bc0 ^ unaff_XMM12_Qa;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183063be8 ^ unaff_XMM12_Qb;
  _DAT_183063c48 =
       func_0x00018415ae10((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183063bc0 + 0x1f50a178) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063be8 + 0xf4748d66));
  _DAT_183063cf8 = _DAT_183063ce8 ^ _DAT_183063c48 ^ 0x8fa74fbb;
  _DAT_183063c60 = (_DAT_183063c60 ^ _DAT_183063c48) + 0x8fa74fbb ^ 0xa9fc3ee97c50de65;
  _DAT_183063c88 = (_DAT_183063c88 * 0x7dc61d6cc4b3cba7 ^ _DAT_183063c60) + _DAT_183063c48;
  _DAT_183063c40 = _DAT_183063c88 ^ _DAT_183063c60;
  _DAT_183063cc0 = 0x8fa74fbb;
  uVar3 = (~_DAT_183063bc8 + 0x8fa74fbc) *
          ((_DAT_183063c08 ^ 0xb856c9e) + (ulonglong)((uint)_DAT_183063c08 & 0xb856c9e) * 2);
  uVar3 = (uVar3 | _DAT_183063b90) + (uVar3 & _DAT_183063b90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018415ae10((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar3;
  _DAT_183063cf0 = _DAT_183063cf0 ^ uVar3 ^ 0x6e2ba55a837bc4d;
  _DAT_183063c38 = (_DAT_183063c38 * 0x4eeaa2148c268735 ^ _DAT_183063cf0) + uVar3;
  _DAT_183063ba8 = _DAT_183063c38 ^ _DAT_183063cf0;
  _DAT_183063c88 = 0;
  _DAT_183063b78 = func_0x00018415ae10(_DAT_183063cb0 ^ 0x1f007c96001d4e);
  uVar3 = _DAT_183063b78 ^ 0xbf;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  _DAT_183063b58 = _DAT_183063b40 ^ uVar3 ^ 0xbf;
  _DAT_183063c18 = (_DAT_183063c40 ^ uVar3) + 0xbf ^ 0x2ed61270b2f80cbf;
  _DAT_183063c40 = (_DAT_183063c40 * -0x621dc637ebedd98f ^ _DAT_183063c18) + uVar3;
  _DAT_183063c18 = _DAT_183063c40 ^ _DAT_183063c18;
  _DAT_183063bd0 = 0xbf;
  uVar3 = (_DAT_183063b30 ^ unaff_XMM6_Qa) + _DAT_183063cf0 + 0x3bdcd5da;
  uVar5 = (_DAT_183063cf0 ^ unaff_XMM6_Qb) + _DAT_183063b30 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063b30 ^ unaff_XMM6_Qa;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183063cf0 ^ unaff_XMM6_Qb;
  _DAT_183063b90 =
       func_0x00018415ae10((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183063b30 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063cf0 + 0x3bdcd5da));
  uVar3 = (_DAT_183063b90 ^ 0x3ffef6fefffffffe) & 0x7fffffffffffffff;
  _DAT_183063b78 = (_DAT_183063b78 ^ uVar3) + 0x40010900 ^ 0xc1ece85cc6c71d68;
  _DAT_183063c48 = (_DAT_183063c48 * 0x7efd999502bd8b41 ^ _DAT_183063b78) + uVar3;
  _DAT_183063bc8 = _DAT_183063c48 ^ _DAT_183063b78;
  _DAT_183063c18 = 0x40010900;
  _DAT_183063b08 = func_0x00018415ae10(_DAT_183063c20 ^ 0x23ff8535ffbcfd);
  uVar3 = _DAT_183063b08 >> 1 | _DAT_183063b08;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183063b08;
  uVar3 = uVar3 << 0x39 | uVar3 >> 7 & 0xffffffffffff8000;
  _DAT_183063bc0 = _DAT_183063bc0 ^ uVar3 ^ 0xaf59f359ee43e322;
  _DAT_183063b90 = (_DAT_183063b90 * 0x199e7465500677e1 ^ _DAT_183063bc0) + uVar3;
  _DAT_183063b70 = _DAT_183063b90 ^ _DAT_183063bc0;
  _DAT_183063bb0 = 0;
  uVar3 = (_DAT_183063c58 ^ 0x8422239a) + _DAT_183063cb0 + 0x8422239a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063c58 ^ 0x8422239a;
  uVar5 = ((_DAT_183063cb0 + _DAT_183063c58) * 0x2000 | _DAT_183063cb0 + _DAT_183063c58 >> 0x33) ^
          _DAT_183063cb0;
  _DAT_183063b80 =
       func_0x00018415ae10((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_183063c58 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063cb0 + 0x8422239a));
  uVar3 = (_DAT_183063b80 & 0x7fffffffff) - (_DAT_183063b80 >> 1 & 0x1555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183063b80 & 0x7fffffffff;
  _DAT_183063b28 = _DAT_183063ba0 ^ uVar3 ^ 0xbf;
  _DAT_183063c58 = (_DAT_183063c58 ^ uVar3) + 0xbf ^ 0xfdb3ac5840beef44;
  _DAT_183063b90 = (_DAT_183063b90 * -0x4e4b771ecb36845f ^ _DAT_183063c58) + uVar3;
  _DAT_183063bd0 = _DAT_183063b90 ^ _DAT_183063c58;
  _DAT_183063cd8 = 0xbf;
  uVar3 = (_DAT_183063b68 ^ unaff_XMM13_Qa) + _DAT_183063b78 + 0xb89c358a;
  uVar5 = (_DAT_183063b78 ^ unaff_XMM13_Qb) + _DAT_183063b68 + 0x3cbe16af;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063b68 ^ unaff_XMM13_Qa;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183063b78 ^ unaff_XMM13_Qb;
  _DAT_183063c98 =
       func_0x00018415ae10((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183063b68 + 0x3cbe16af) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063b78 + 0xb89c358a));
  uVar3 = (_DAT_183063c98 ^ 0x9a7c7b5c68ba1) & 0x1fffffffffffff;
  _DAT_183063c08 = _DAT_183063c08 ^ uVar3 ^ 0xcb042533c28dad0e;
  _DAT_183063bc0 = (_DAT_183063bc0 * -0x26504b15982fadf ^ _DAT_183063c08) + uVar3;
  _DAT_183063bd8 = _DAT_183063bc0 ^ _DAT_183063c08;
  _DAT_183063c38 = 0;
  uVar3 = (_DAT_183063ba0 ^ 0x8422239a) + _DAT_183063cc0 + 0x8422239a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063ba0 ^ 0x8422239a;
  uVar5 = ((_DAT_183063cc0 + _DAT_183063ba0) * 0x2000 | _DAT_183063cc0 + _DAT_183063ba0 >> 0x33) ^
          _DAT_183063cc0;
  _DAT_183063bc0 =
       func_0x00018415ae10((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_183063ba0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063cc0 + 0x8422239a));
  uVar3 = (_DAT_183063bc0 ^ 0xbf) & 0x1fffffffffffffff;
  _DAT_183063b48 = _DAT_183063b08 ^ uVar3 ^ 0xbf;
  _DAT_183063cf0 = (_DAT_183063cf0 ^ uVar3) + 0xbf ^ 0xac191fa05750a5d1;
  _DAT_183063c68 = (_DAT_183063c68 * -0x436dd0dc8e782fef ^ _DAT_183063cf0) + uVar3;
  _DAT_183063be0 = _DAT_183063c68 ^ _DAT_183063cf0;
  _DAT_183063c88 = 0xbf;
  switch(0xbf < (int)uVar6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x413e5fb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18413e5fb(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong *unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  uint uVar5;
  uint unaff_XMM14_Da;
  
  *(undefined4 *)(unaff_RBP + 0x70) = param_1;
  (**(code **)(unaff_R12 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  *(undefined4 *)(unaff_RBP + 0x80) = 6;
  *(undefined8 *)(unaff_RBP + 0x70) = unaff_R13;
  uVar4 = (~_DAT_183063b88 + 3) *
          ((unaff_R15 ^ unaff_RDI ^ _DAT_183063cb8) +
          (ulonglong)((uint)_DAT_183063cb8 & (uint)(unaff_R15 ^ unaff_RDI)) * 2);
  uVar4 = (uVar4 | _DAT_183063ba8) + (uVar4 & _DAT_183063ba8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183063c70 =
       func_0x00018415ae10((unaff_R15 ^ 0x84222327 | uVar4) +
                           (ulonglong)((uint)(unaff_R15 ^ 0x84222327) & (uint)uVar4));
  uVar4 = _DAT_183063c70 ^ unaff_R15;
  uVar1 = (uint)unaff_R15;
  uVar5 = uVar1 ^ unaff_XMM14_Da;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar4;
  uVar3 = ((((ulonglong)uVar5 * (ulonglong)_DAT_18011c350 + _DAT_18011c360 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_18011c340 +
           ((ulonglong)(uVar1 ^ _DAT_180017990) * (ulonglong)_DAT_18011c330 << 0x20) +
           (ulonglong)(uVar1 ^ _DAT_180017990) * (ulonglong)_DAT_18011c320 +
           ((ulonglong)(uVar1 | _DAT_180017990) * (ulonglong)_DAT_18011c310 << 0x20) +
           (ulonglong)(uVar1 | _DAT_180017990) * (ulonglong)_DAT_18011c300 +
           ((ulonglong)(uVar1 & _DAT_180017990) * (ulonglong)_DAT_18011c2f0 << 0x20 |
           (ulonglong)(uVar1 & _DAT_180017990) * (ulonglong)_DAT_18011c2e0) +
           ((unaff_R15 & 0xffffffff) * (ulonglong)_DAT_18011c2d0 << 0x20) +
           (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_18011c2c0) -
          (((ulonglong)uVar5 * (ulonglong)_DAT_18011c390 + _DAT_18011c3b0 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_18011c3a0 +
          (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_18011c3a0 +
          ((unaff_R15 >> 0x20) * (ulonglong)_DAT_18011c3a0 +
           (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_18011c390 << 0x20))) + 0x84a0998fc0e7cd4c;
  _DAT_183063c30 = _DAT_183063c48 ^ uVar4 ^ uVar3;
  _DAT_183063b20 = (_DAT_183063b20 ^ uVar4) + uVar3 ^ 0x197ca850257ee609;
  _DAT_183063bf8 = (_DAT_183063bf8 * -0x2de2ff2d988546f5 ^ _DAT_183063b20) + uVar4;
  _DAT_183063b80 = _DAT_183063bf8 ^ _DAT_183063b20;
  _DAT_183063bb8 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x78) = (int)uVar3;
  iVar2 = (**(code **)(unaff_R12 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x41432d6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841432d6(ulonglong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong lVar7;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong unaff_XMM8_Qa;
  
  *(bool *)(unaff_RBP + 0x50) = *(longlong *)(unaff_RBP + 8) == 0;
  uVar3 = (~in_RAX + 0x6a73fdab) *
          ((param_1 ^ 0x781d95f6) + (ulonglong)((uint)param_1 & 0x781d95f6) * 2);
  uVar3 = (uVar3 | _DAT_183063c90) + (uVar3 & _DAT_183063c90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c38 = func_0x00018415ae10((uVar3 | 0x126e685c) + (ulonglong)((uint)uVar3 & 0x126e685c))
  ;
  _DAT_183063cb8 =
       (_DAT_183063cb8 ^ _DAT_183063c38 & 0x1ffffffffffff) + 0x964c4b79 ^ 0xb824607229774c3d;
  _DAT_183063c70 =
       (_DAT_183063c70 * 0x85d3a3fb1a325a7 ^ _DAT_183063cb8) + (_DAT_183063c38 & 0x1ffffffffffff);
  _DAT_183063b40 = _DAT_183063c70 ^ _DAT_183063cb8;
  _DAT_183063cd8 = 0x964c4b79;
  _DAT_183063c08 = func_0x00018415ae10(_DAT_183063cc0 + 0xff2eff7d16ff92ff ^ 0x9e);
  _DAT_183063cb8 = (_DAT_183063cb8 ^ _DAT_183063c08 ^ 0x1dff23c) - 0x1dff23c ^ 0x18269f6251f0f0fd;
  _DAT_183063b80 =
       (_DAT_183063b80 * 0x28ff67a5d85b5f05 ^ _DAT_183063cb8) + (_DAT_183063c08 ^ 0x1dff23c);
  _DAT_183063cf0 = _DAT_183063b80 ^ _DAT_183063cb8;
  _DAT_183063c78 = 0xfe200dc4;
  uVar3 = (_DAT_183063bf8 ^ _DAT_18011c020) + _DAT_183063c98 + 0x842224e5;
  uVar11 = (_DAT_183063c98 ^ _UNK_18011c028) + _DAT_183063bf8 + 0x1dff23c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063bf8 ^ _DAT_18011c020;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183063c98 ^ _UNK_18011c028;
  _DAT_183063bd8 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183063bf8 + 0x1dff23c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063c98 + 0x842224e5));
  uVar3 = (ulonglong)((uint)~((int)_DAT_183063bd8 * 2) >> 1 & 0x7c0);
  _DAT_183063bb0 = _DAT_183063b68 ^ uVar3 ^ 0x1dff9fc;
  _DAT_183063bd0 = (_DAT_183063bd0 ^ uVar3) + 0x1dff9fc ^ 0x28c278749e49d331;
  _DAT_183063ba0 = (_DAT_183063ba0 * 0x41090b46f356047f ^ _DAT_183063bd0) + uVar3 ^ _DAT_183063bd0;
  _DAT_183063b40 = 0x1dff9fc;
  uVar3 = (_DAT_183063bc0 ^ _DAT_18011c030) + _DAT_183063b88 + 0x85fddad9;
  uVar11 = (_DAT_183063b88 ^ _UNK_18011c038) + _DAT_183063bc0 + 0xfe200dc4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063bc0 ^ _DAT_18011c030;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183063b88 ^ _UNK_18011c038;
  func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183063bc0 + 0xfe200dc4) ^
                      (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063b88 + 0x85fddad9));
  _DAT_183063bb8 = _DAT_183063b58 ^ _DAT_183063cd8 ^ 0x1000007c0;
  _DAT_183063c58 = (_DAT_183063c58 ^ _DAT_183063cd8) + 0x1000007c0 ^ 0xd402060cd664918d;
  _DAT_183063c18 = (_DAT_183063c18 * -0x3c2db55e9fbfebaf ^ _DAT_183063c58) + _DAT_183063cd8;
  _DAT_183063b08 = _DAT_183063c18 ^ _DAT_183063c58;
  _DAT_183063c48 = 0x7c0;
  _DAT_183063ba8 = func_0x00018415ae10(_DAT_183063cb0 + 0xe000525007aff);
  _DAT_183063cb0 = (_DAT_183063cb0 ^ _DAT_183063ba8) - 0x81af3100 ^ 0x7c535efb595fb160;
  _DAT_183063ce0 = (_DAT_183063ce0 * 0x43679d72ee471b5d ^ _DAT_183063cb0) + _DAT_183063ba8;
  _DAT_183063cf8 = _DAT_183063ce0 ^ _DAT_183063cb0;
  _DAT_183063bb8 = 0x7e50cf00;
  uVar3 = (~_DAT_183063bf8 + 0x81af3101) *
          ((_DAT_183063b90 ^ 0x842224e5) + (ulonglong)((uint)_DAT_183063b90 & 0x842224e5) * 2);
  uVar3 = (uVar3 | _DAT_183063ce0) + (uVar3 & _DAT_183063ce0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063ce0 = func_0x00018415ae10((uVar3 | 0x58d15e5) + (ulonglong)((uint)uVar3 & 0x58d15e5));
  uVar3 = _DAT_183063ce0 ^ 0x7c0;
  _DAT_183063c78 = _DAT_183063b28 ^ uVar3 ^ 0x81af38c0;
  _DAT_183063cd0 = (_DAT_183063cd0 ^ uVar3) + 0x81af38c0 ^ 0xae02ad1ab150643d;
  _DAT_183063b28 = (_DAT_183063b28 * 0x16f950d018edbe9d ^ _DAT_183063cd0) + uVar3;
  _DAT_183063bb8 = _DAT_183063b28 ^ _DAT_183063cd0;
  _DAT_183063bc0 = 0x81af38c0;
  uVar3 = (_DAT_183063bf0 ^ _DAT_18011c040) + _DAT_183063c60 + 0x58d1be5;
  uVar11 = (_DAT_183063c60 ^ _UNK_18011c048) + _DAT_183063bf0 + 0x7e50cf00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063bf0 ^ _DAT_18011c040;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183063c60 ^ _UNK_18011c048;
  _DAT_183063c88 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183063bf0 + 0x7e50cf00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063c60 + 0x58d1be5));
  uVar3 = _DAT_183063c88 ^ 0x3ffd2d8ceae34000;
  uVar11 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  _DAT_183063bf8 = _DAT_183063b48 ^ uVar3 ^ 0x1000007c0;
  _DAT_183063b60 = (_DAT_183063b60 ^ uVar3) + 0x1000007c0 ^ 0x50b560c7949c5d1f;
  _DAT_183063b28 = (_DAT_183063b28 * 0x70c668d903a7e19 ^ _DAT_183063b60) + uVar3;
  _DAT_183063c28 = _DAT_183063b28 ^ _DAT_183063b60;
  _DAT_183063ca8 = 0x7c0;
  uVar3 = (_DAT_183063b58 ^ _DAT_18011c050) + _DAT_183063b10 + 0x84222325;
  uVar11 = (_DAT_183063b10 ^ _UNK_18011c058) + _DAT_183063b58 + 0x7d958751;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063b58 ^ _DAT_18011c050;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183063b10 ^ _UNK_18011c058;
  _DAT_183063b80 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183063b58 + 0x7d958751) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063b10 + 0x84222325));
  _DAT_183063b58 =
       (_DAT_183063b58 ^ _DAT_183063b80 & 0xffffffffffffc000) - 0x7d958751 ^ 0x6620affded77d4dd;
  _DAT_183063b88 =
       (_DAT_183063b88 * 0x1484b5615063a9d3 ^ _DAT_183063b58) +
       (_DAT_183063b80 & 0xffffffffffffc000);
  _DAT_183063c50 = _DAT_183063b88 ^ _DAT_183063b58;
  _DAT_183063ca0 = 0x826a78af;
  uVar3 = (~_DAT_183063cf8 + 0x7d958752) *
          ((_DAT_183063c38 ^ 0x842224e5) + (ulonglong)((uint)_DAT_183063c38 & 0x842224e5) * 2);
  uVar3 = (uVar3 | _DAT_183063c30) + (uVar3 & _DAT_183063c30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c48 = func_0x00018415ae10((uVar3 | 0xf9b7a3b4) + (ulonglong)((uint)uVar3 & 0xf9b7a3b4))
  ;
  uVar3 = _DAT_183063c48 ^ 0x7c0;
  _DAT_183063b38 = _DAT_183063b10 ^ uVar3 ^ 0x7d958f11;
  _DAT_183063b18 = (_DAT_183063b18 ^ uVar3) + 0x7d958f11 ^ 0x7243a60398b4a0bc;
  _DAT_183063cc0 = (_DAT_183063cc0 * -0x700a11a34099fa5b ^ _DAT_183063b18) + uVar3;
  _DAT_183063bf0 = 0x7d958f11;
  uVar3 = (~_DAT_183063cb8 + 0x964c4b7a) *
          ((_DAT_183063c30 ^ 0x77493c98) + (ulonglong)((uint)_DAT_183063c30 & 0x77493c98) * 2);
  uVar3 = (uVar3 | _DAT_183063c40) + (uVar3 & _DAT_183063c40);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c90 = func_0x00018415ae10((uVar3 | 0xe10577e1) + (ulonglong)((uint)uVar3 & 0xe10577e1))
  ;
  _DAT_183063c18 = (_DAT_183063c18 ^ _DAT_183063c90) + 0x652754c4 ^ 0x3014355a161834e1;
  _DAT_183063be8 = (_DAT_183063be8 * 0xce83d8dcb186dbf ^ _DAT_183063c18) + _DAT_183063c90;
  _DAT_183063b18 = _DAT_183063be8 ^ _DAT_183063c18;
  _DAT_183063bb8 = 0x652754c4;
  _DAT_183063ba0 = func_0x00018415ae10(_DAT_183063b70 + 0xffceff60defffcff ^ 0x16);
  _DAT_183063bd8 = (_DAT_183063bd8 ^ _DAT_183063ba0 ^ 0xf36b1fbd) + 0x92480b39 ^ 0xb620b4206aee480b;
  _DAT_183063be8 =
       (_DAT_183063be8 * -0x507133dcbfaf97f ^ _DAT_183063bd8) + (_DAT_183063ba0 ^ 0xf36b1fbd);
  _DAT_183063b08 = _DAT_183063be8 ^ _DAT_183063bd8;
  _DAT_183063c70 = 0x92480b39;
  uVar3 = (_DAT_183063b58 ^ 0x842224e5) + _DAT_183063c98 + 0x842224e5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063b58 ^ 0x842224e5;
  uVar11 = ((_DAT_183063c98 + _DAT_183063b58) * 0x2000 | _DAT_183063c98 + _DAT_183063b58 >> 0x33) ^
           _DAT_183063c98;
  _DAT_183063bb0 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183063b58 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063c98 + 0x842224e5));
  uVar3 = (ulonglong)(~(uint)_DAT_183063bb0 & 0x7c0);
  _DAT_183063b48 = _DAT_183063b40 ^ uVar3 ^ 0x7c0;
  _DAT_183063ce8 = (_DAT_183063c18 ^ uVar3) + 0x7c0 ^ 0xc3d1ba566fd5bd8;
  _DAT_183063b90 = (_DAT_183063b90 * 0x21ba6fd932f00ce9 ^ _DAT_183063ce8) + uVar3;
  _DAT_183063ce8 = _DAT_183063b90 ^ _DAT_183063ce8;
  _DAT_183063c18 = 0x7c0;
  uVar3 = (~_DAT_183063b58 + 0x100000000) *
          ((_DAT_183063c50 ^ 0x77493c98) + (ulonglong)((uint)_DAT_183063c50 & 0x77493c98) * 2);
  uVar3 = (uVar3 | _DAT_183063be8) + (uVar3 & _DAT_183063be8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c78 = func_0x00018415ae10((uVar3 | 0x88b6c367) + (ulonglong)((uint)uVar3 & 0x88b6c367))
  ;
  uVar3 = _DAT_183063c78 << 0xb | _DAT_183063c78 >> 0x35;
  _DAT_183063c48 = (_DAT_183063c48 ^ uVar3) + 0xc94e042 ^ 0xae2ca75776d54d34;
  _DAT_183063b38 = (_DAT_183063b38 * 0x15406ba00904c0a1 ^ _DAT_183063c48) + uVar3;
  _DAT_183063be0 = _DAT_183063b38 ^ _DAT_183063c48;
  _DAT_183063bf0 = 0xc94e042;
  uVar3 = (~_DAT_183063c60 + 0xc94e043) *
          ((_DAT_183063c08 ^ 0x77493c98) + (ulonglong)((uint)_DAT_183063c08 & 0x77493c98) * 2);
  uVar3 = (uVar3 | _DAT_183063b28) + (uVar3 & _DAT_183063b28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063b30 = func_0x00018415ae10((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda))
  ;
  uVar3 = (_DAT_183063b30 ^ 0xffffffff) & 0x3fffffffffffff ^ 0xc94e042;
  _DAT_183063ce8 = _DAT_183063ce8 ^ uVar3 ^ 0x34674cc01a6c358a;
  _DAT_183063c50 = (_DAT_183063c50 * 0x19ad7a4c2ddbf4bf ^ _DAT_183063ce8) + uVar3;
  _DAT_183063b58 = _DAT_183063c50 ^ _DAT_183063ce8;
  _DAT_183063c00 = 0;
  uVar3 = (_DAT_183063c20 ^ 0x842224e5) + _DAT_183063b40 + 0x842224e5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063c20 ^ 0x842224e5;
  uVar11 = ((_DAT_183063b40 + _DAT_183063c20) * 0x2000 | _DAT_183063b40 + _DAT_183063c20 >> 0x33) ^
           _DAT_183063b40;
  _DAT_183063bf8 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183063c20 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063b40 + 0x842224e5));
  uVar3 = _DAT_183063bf8 & 0xffffffffff ^ 0x7c0;
  uVar11 = uVar3 >> 1 | uVar3;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar6 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar6 >> 0x10 | uVar6;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar3;
  _DAT_183063cd8 = _DAT_183063c68 ^ uVar3 ^ 0x7c0;
  _DAT_183063bb0 = (_DAT_183063bb0 ^ uVar3) + 0x7c0 ^ 0xfe731fe2d8a45c52;
  _DAT_183063c98 = (_DAT_183063c98 * 0x5f2b71f27d1655df ^ _DAT_183063bb0) + uVar3;
  _DAT_183063b38 = _DAT_183063c98 ^ _DAT_183063bb0;
  _DAT_183063c70 = 0x7c0;
  uVar3 = (~_DAT_183063c50 + 0x5023149a) *
          ((_DAT_183063c80 ^ 0xd40137bc) + (ulonglong)((uint)_DAT_183063c80 & 0xd40137bc) * 2);
  uVar3 = (uVar3 | _DAT_183063b68) + (uVar3 & _DAT_183063b68);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063bf0 = func_0x00018415ae10((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar3 = _DAT_183063bf0 << 0x1d | _DAT_183063bf0 >> 0x23;
  _DAT_183063c18 = _DAT_183063c18 ^ uVar3 ^ 0xc2a3ff50eef851ce;
  _DAT_183063ba0 = (_DAT_183063ba0 * 0x442fd4acdae419f9 ^ _DAT_183063c18) + uVar3;
  _DAT_183063cc0 = _DAT_183063ba0 ^ _DAT_183063c18;
  _DAT_183063be0 = 0;
  uVar3 = (_DAT_183063c20 ^ 0x842224e5) + _DAT_183063b58 + 0x842224e5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063c20 ^ 0x842224e5;
  uVar11 = ((_DAT_183063b58 + _DAT_183063c20) * 0x2000 | _DAT_183063b58 + _DAT_183063c20 >> 0x33) ^
           _DAT_183063b58;
  _DAT_183063c08 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183063c20 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063b58 + 0x842224e5));
  uVar3 = (ulonglong)(~((int)_DAT_183063c08 * 0x20575417) & 0x7c0);
  _DAT_183063c00 = _DAT_183063c70 ^ uVar3 ^ 0x7c0;
  _DAT_183063c28 = (_DAT_183063c28 ^ uVar3) + 0x7c0 ^ 0x6181de00b82f2348;
  _DAT_183063b78 = (_DAT_183063b78 * 0x7300a3d3657f019 ^ _DAT_183063c28) + uVar3;
  _DAT_183063c60 = _DAT_183063b78 ^ _DAT_183063c28;
  _DAT_183063b38 = 0x7c0;
  uVar3 = (ulonglong)unaff_ESI ^ 0x84222325 ^ _DAT_183063ce0;
  lVar7 = ((ulonglong)unaff_ESI ^ 0x84222325) + _DAT_183063cb8;
  uVar11 = uVar3 + lVar7;
  uVar6 = (_DAT_183063cb8 ^ 0x7c0) + _DAT_183063ce0 + 0x7c0;
  uVar3 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar3;
  uVar11 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183063cb8 ^ 0x7c0;
  uVar3 = func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183063ce0 + 0x7c0) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar11 = (uVar3 & 0x7fffffffffffffff) * -0x5e32f10fe755cb7b;
  uVar4 = unaff_ESI & 0x7c0;
  _DAT_183063bf0 = (ulonglong)uVar4;
  _DAT_183063cd8 = (_DAT_183063cd8 ^ uVar11) + _DAT_183063bf0 ^ 0xdaeb8c5d0050e7ba;
  _DAT_183063b80 = (_DAT_183063b80 * 0x1730c029cc049041 ^ _DAT_183063cd8) + uVar11;
  _DAT_183063ce0 = _DAT_183063b80 ^ _DAT_183063cd8;
  uVar2 = *(undefined8 *)(unaff_RBP + 0x68);
  lVar7 = (**(code **)(unaff_RBX + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(uVar3 * 2,uVar2,0);
  *(int *)(unaff_RBP + 0x70) = (int)*(char *)(lVar7 + *(int *)(unaff_RBP + 0x78));
  (**(code **)(unaff_RBX + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,uVar2,lVar7,2);
  uVar5 = *(uint *)(unaff_RBP + 0x70);
  uVar6 = (ulonglong)uVar5;
  uVar3 = (~_DAT_183063c18 + 0xdd37164f) *
          ((_DAT_183063b10 ^ 0xd4d99aeb) + (ulonglong)((uint)_DAT_183063b10 & 0xd4d99aeb) * 2);
  uVar3 = (uVar3 | _DAT_183063bd8) + (uVar3 & _DAT_183063bd8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063b98 = func_0x00018415ae10((uVar3 | 0x9ee8ca5) + (ulonglong)((uint)uVar3 & 0x9ee8ca5));
  _DAT_183063cc0 =
       (_DAT_183063cc0 ^ _DAT_183063b98 * -0x4a6a3a4f29fdf3e7) + 0x8dccaf80 ^ 0x25ecd2c221fc2c21;
  _DAT_183063cd0 =
       (_DAT_183063cd0 * 0x3db30aa550c1a0bb ^ _DAT_183063cc0) + _DAT_183063b98 * -0x4a6a3a4f29fdf3e7
  ;
  _DAT_183063c60 = _DAT_183063cd0 ^ _DAT_183063cc0;
  _DAT_183063c50 = 0x8dccaf80;
  _DAT_183063ba0 = func_0x00018415ae10(_DAT_183063b48 + 0xffbaff6be30067ff ^ 0x28);
  _DAT_183063bc8 = ((_DAT_183063ba0 >> 0x1c) * 8 ^ _DAT_183063bc8) - 0x28ca6806 ^ 0xe1acb05afe5582ac
  ;
  _DAT_183063be0 =
       (_DAT_183063be0 * 0xc81388cd0d502d3 ^ _DAT_183063bc8) + (_DAT_183063ba0 >> 0x1c) * 8;
  _DAT_183063ba8 = _DAT_183063bc8 ^ _DAT_183063be0;
  _DAT_183063ce8 = 0xd73597fa;
  uVar3 = (~_DAT_183063b90 + 0x28ca6807) *
          ((_DAT_183063c40 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183063c40 & 0x8422231a) * 2);
  uVar3 = (uVar3 | _DAT_183063c48) + (uVar3 & _DAT_183063c48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063cb8 = func_0x00018415ae10((uVar3 | 0xace84b1c) + (ulonglong)((uint)uVar3 & 0xace84b1c))
  ;
  _DAT_183063b40 = _DAT_183063c00 ^ _DAT_183063cb8 ^ 0x28ca6845;
  _DAT_183063cd8 = (_DAT_183063cd8 ^ _DAT_183063cb8) + 0x28ca6845 ^ 0x486d0ee9577426dc;
  _DAT_183063b58 = (_DAT_183063b58 * 0x69c8b7a04dfcc571 ^ _DAT_183063cd8) + _DAT_183063cb8;
  _DAT_183063c58 = _DAT_183063b58 ^ _DAT_183063cd8;
  _DAT_183063c70 = 0x28ca6845;
  uVar3 = (~_DAT_183063b10 + 0xd73597fb) *
          ((_DAT_183063c18 ^ 0xace84b60) + (ulonglong)((uint)_DAT_183063c18 & 0xace84b60) * 2);
  uVar3 = (uVar3 | _DAT_183063b98) + (uVar3 & _DAT_183063b98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063cf0 = func_0x00018415ae10((uVar3 | 0x7bdddc9a) + (ulonglong)((uint)uVar3 & 0x7bdddc9a))
  ;
  uVar3 = (_DAT_183063cf0 ^ 0x224a87b0c2738662) << 0xe |
          (_DAT_183063cf0 ^ 0x224a87b0c2738662) >> 0x32;
  _DAT_183063ca0 = _DAT_183063b80 ^ uVar3 ^ 0x10000003f;
  _DAT_183063b40 = (_DAT_183063b40 ^ uVar3) + 0x10000003f ^ 0x18ba7c73893bc89e;
  _DAT_183063ce0 = (_DAT_183063ce0 * -0x60bdc133af80abe7 ^ _DAT_183063b40) + uVar3;
  _DAT_183063c38 = _DAT_183063ce0 ^ _DAT_183063b40;
  _DAT_183063bd0 = 0x3f;
  uVar3 = (_DAT_183063b70 ^ _DAT_18011c060) + _DAT_183063cc8 + 0x8422231a;
  uVar11 = (_DAT_183063cc8 ^ _UNK_18011c068) + _DAT_183063b70 + 0xf6b581c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063b70 ^ _DAT_18011c060;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183063cc8 ^ _UNK_18011c068;
  _DAT_183063c50 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183063b70 + 0xf6b581c0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063cc8 + 0x8422231a));
  _DAT_183063bd8 = _DAT_183063b68 ^ _DAT_183063c50 ^ 0xf6b581ff;
  _DAT_183063ca8 = (_DAT_183063ca8 ^ _DAT_183063c50) + 0xf6b581ff ^ 0x825872225a4430af;
  _DAT_183063b58 = (_DAT_183063b58 * 0x1b5a968fb0b6ee57 ^ _DAT_183063ca8) + _DAT_183063c50;
  _DAT_183063b08 = _DAT_183063b58 ^ _DAT_183063ca8;
  _DAT_183063bc0 = 0xf6b581ff;
  uVar3 = (_DAT_183063c80 ^ _DAT_18011c070) + _DAT_183063c08 + 0x7297a2da;
  uVar11 = (_DAT_183063c08 ^ _UNK_18011c078) + _DAT_183063c80 + 0x94a7e40;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063c80 ^ _DAT_18011c070;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183063c08 ^ _UNK_18011c078;
  _DAT_183063c68 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183063c80 + 0x94a7e40) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063c08 + 0x7297a2da));
  uVar3 = (_DAT_183063c68 ^ 0x8f42bb48e1201c0) * 0x45bfd9722f70a551;
  _DAT_183063c28 = _DAT_183063ce8 ^ uVar3 ^ 0x10000003f;
  _DAT_183063b38 = (_DAT_183063b38 ^ uVar3) + 0x10000003f ^ 0xf80588671f65bbff;
  _DAT_183063cc0 = (_DAT_183063cc0 * -0x33c654476360c24b ^ _DAT_183063b38) + uVar3 ^ _DAT_183063b38;
  _DAT_183063c30 = 0x3f;
  _DAT_183063cd8 = func_0x00018415ae10(_DAT_183063cd0 + 0x25ffb31a0036ff ^ 0xaa);
  uVar3 = _DAT_183063cd8 ^ 0x777d093f;
  uVar11 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar3;
  _DAT_183063cb8 = _DAT_183063b08 ^ uVar3 ^ 0x777d097b;
  _DAT_183063bd0 = (_DAT_183063bd0 ^ uVar3) + 0x777d097b ^ 0x3b3309cb77fc5310;
  _DAT_183063b68 = (_DAT_183063b68 * -0x3500ef9c659d9e7b ^ _DAT_183063bd0) + uVar3;
  _DAT_183063ba8 = _DAT_183063b68 ^ _DAT_183063bd0;
  _DAT_183063c60 = 0x777d097b;
  uVar3 = (_DAT_183063c50 ^ _DAT_18011c080) + _DAT_183063cc8 + 0xf35f2a5e;
  uVar11 = (_DAT_183063cc8 ^ _UNK_18011c088) + _DAT_183063c50 + 0x8882f6c4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063c50 ^ _DAT_18011c080;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183063cc8 ^ _UNK_18011c088;
  _DAT_183063b58 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183063c50 + 0x8882f6c4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063cc8 + 0xf35f2a5e));
  uVar3 = _DAT_183063b58 ^ 0xffffffff;
  _DAT_183063c78 = _DAT_183063c90 ^ uVar3 ^ 0x10000003f;
  _DAT_183063cb8 = (_DAT_183063cb8 ^ uVar3) + 0x10000003f ^ 0xcdc4f06313f06ed4;
  _DAT_183063ce0 = (_DAT_183063ce0 * -0x329d2ebbabeb9855 ^ _DAT_183063cb8) + uVar3;
  _DAT_183063b38 = _DAT_183063ce0 ^ _DAT_183063cb8;
  _DAT_183063cd0 = 0x3f;
  _DAT_183063be0 = func_0x00018415ae10(_DAT_183063c10 + 0xff88ffefe9ffeeffU ^ 0x98);
  uVar3 = (ulonglong)(~(uint)_DAT_183063be0 & 0xf9fff7bb) * 0x46f87161b2a4fb61 & 0x1fffffffffffffff;
  _DAT_183063ba0 = (_DAT_183063ba0 ^ uVar3) + 0x7433583b ^ 0x5f888ecb5ad2ea87;
  _DAT_183063b38 = (_DAT_183063b38 * -0x5664ceb9482b1ee5 ^ _DAT_183063ba0) + uVar3;
  _DAT_183063c18 = _DAT_183063b38 ^ _DAT_183063ba0;
  _DAT_183063c50 = 0x7433583b;
  _DAT_183063c78 = func_0x00018415ae10(_DAT_183063be0 + 0x56ff901a0010ff ^ 0x5e);
  _DAT_183063b38 =
       (_DAT_183063b38 ^ _DAT_183063c78 ^ 0x8a79dece6258b280) + 0x89cca780 ^ 0x89a97905b38a8a6f;
  _DAT_183063c50 =
       (_DAT_183063c50 * -0x75f0081c355ea31 ^ _DAT_183063b38) +
       (_DAT_183063c78 ^ 0x8a79dece6258b280);
  _DAT_183063b30 = _DAT_183063c50 ^ _DAT_183063b38;
  _DAT_183063bb8 = 0x89cca780;
  _DAT_183063b80 = func_0x00018415ae10(_DAT_183063cb8 + 0x23007c230021ff ^ 0x90);
  _DAT_183063c20 = _DAT_183063c20 ^ _DAT_183063b80 ^ 0x94405434f4a2587a;
  _DAT_183063ce8 =
       (_DAT_183063ce8 * 0x3f466b3d823b0d83 ^ _DAT_183063c20) + _DAT_183063b80 ^ _DAT_183063c20;
  _DAT_183063b28 = 0;
  uVar3 = ((_DAT_183063c80 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183063c80 & 0x8422231a) * 2) *
          -_DAT_183063b60;
  uVar3 = (uVar3 | _DAT_183063c98) + (uVar3 & _DAT_183063c98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c50 = _DAT_183063b80;
  _DAT_183063ca0 = func_0x00018415ae10((uVar3 | 0x8422231a) + (ulonglong)((uint)uVar3 & 0x8422231a))
  ;
  uVar3 = ((ulonglong)((uint)_DAT_183063ca0 ^ 0x3f) & 0x3f) << 0x39 | _DAT_183063ca0 >> 7;
  _DAT_183063bc8 = _DAT_183063ce0 ^ uVar3 ^ 0x3f;
  _DAT_183063ba0 = (_DAT_183063ba0 ^ uVar3) + 0x3f ^ 0x3684b12204400fcf;
  _DAT_183063b10 = (_DAT_183063b10 * 0x2e7dbba5ea06c3cd ^ _DAT_183063ba0) + uVar3;
  _DAT_183063b58 = _DAT_183063b10 ^ _DAT_183063ba0;
  _DAT_183063bc0 = 0x3f;
  uVar3 = (_DAT_183063cc8 ^ 0x8422231a) + _DAT_183063be0 + 0x8422231a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183063cc8 ^ 0x8422231a;
  uVar11 = ((_DAT_183063be0 + _DAT_183063cc8) * 0x2000 | _DAT_183063be0 + _DAT_183063cc8 >> 0x33) ^
           _DAT_183063be0;
  _DAT_183063be8 =
       func_0x00018415ae10((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183063cc8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183063be0 + 0x8422231a));
  uVar3 = _DAT_183063be8 * -0x7b503069d4e46733;
  _DAT_183063b80 = _DAT_183063cc0 ^ uVar3 ^ 0x3f;
  _DAT_183063ba8 = (_DAT_183063ba8 ^ uVar3) + 0x3f ^ 0xc91a194ae8b49790;
  _DAT_183063b68 = (_DAT_183063b68 * 0x478726c210f40fff ^ _DAT_183063ba8) + uVar3;
  _DAT_183063b40 = _DAT_183063b68 ^ _DAT_183063ba8;
  _DAT_183063c48 = 0x3f;
  uVar3 = (~_DAT_183063c78 + 0x59e775ba) *
          ((_DAT_183063be0 ^ 0xddc5569c) + (ulonglong)((uint)_DAT_183063be0 & 0xddc5569c) * 2);
  uVar3 = (uVar3 | _DAT_183063b90) + (uVar3 & _DAT_183063b90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c00 = func_0x00018415ae10((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_183063bf8 = _DAT_183063bf8 ^ _DAT_183063c00 & 0xfffffffffff ^ 0x4752467d7b3c352f;
  _DAT_183063ca8 =
       (_DAT_183063ca8 * -0x61dad042df32749f ^ _DAT_183063bf8) + (_DAT_183063c00 & 0xfffffffffff);
  _DAT_183063c48 = _DAT_183063ca8 ^ _DAT_183063bf8;
  _DAT_183063c78 = 0;
  uVar3 = ((_DAT_183063c70 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183063c70 & 0x8422231a) * 2) *
          -_DAT_183063b88;
  uVar3 = (uVar3 | _DAT_183063cb0) + (uVar3 & _DAT_183063cb0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c60 = _DAT_183063c48;
  _DAT_183063c50 = func_0x00018415ae10((uVar3 | 0x8422231a) + (ulonglong)((uint)uVar3 & 0x8422231a))
  ;
  _DAT_183063be8 =
       ((_DAT_183063c50 & 0xfffffffff0000000) + 0x3f ^ _DAT_183063be8) + 0x3f ^ 0xe39b1775848b67a6;
  _DAT_183063cd8 =
       (_DAT_183063c50 & 0xfffffffff0000000) + (_DAT_183063cd8 * 0xd26b250005f56c3 ^ _DAT_183063be8)
       + 0x3f;
  _DAT_183063b90 = _DAT_183063be8 ^ _DAT_183063cd8;
  _DAT_183063c18 = 0x3f;
  uVar3 = (~_DAT_183063b48 + 0x40) *
          ((uVar6 ^ 0x84222325 ^ _DAT_183063bb0) +
          (ulonglong)((uint)_DAT_183063bb0 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | _DAT_183063bf0) + (uVar3 & _DAT_183063bf0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183063c08 =
       func_0x00018415ae10((uVar6 ^ 0x8422231a | uVar3) +
                           (ulonglong)((uint)(uVar6 ^ 0x8422231a) & (uint)uVar3));
  uVar5 = uVar5 & 0x3f;
  _DAT_183063b20 = (ulonglong)uVar5;
  _DAT_183063c80 = (_DAT_183063c80 ^ ~_DAT_183063c08 & uVar6) + _DAT_183063b20 ^ 0x2e0ea0cbd293a920;
  _DAT_183063c90 =
       (_DAT_183063c90 * -0x748c1abdc88dae09 ^ _DAT_183063c80) + (~_DAT_183063c08 & uVar6);
  _DAT_183063b18 = _DAT_183063c90 ^ _DAT_183063c80;
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar5 ^ 0x84222325;
  auVar8._8_4_ = uVar4;
  auVar8._12_4_ = 0;
  auVar9 = pshufb(auVar8 ^ _DAT_18011c090,_DAT_1800170c0);
  uVar11 = auVar9._8_8_ + auVar9._0_8_;
  uVar3 = uVar11 + _DAT_183063c08;
  if (auVar9._4_4_ < 0) {
    uVar3 = _DAT_183063ca0 ^ uVar11;
  }
  _DAT_183063bd0 = func_0x00018415ae10(SUB161(auVar8 ^ _DAT_18011c090,5) ^ uVar3);
  uVar3 = _DAT_183063b70 - (_DAT_183063b70 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183063b70;
  _DAT_183063b88 = (ulonglong)(uVar5 | uVar4);
  _DAT_183063b60 = (_DAT_183063b60 ^ uVar3) + _DAT_183063b88 ^ 0xe1ce9d9b4f06e615;
  _DAT_183063ca8 = (_DAT_183063ca8 * -0x18d46df5bab020e9 ^ _DAT_183063b60) + uVar3;
  _DAT_183063c30 = _DAT_183063ca8 ^ _DAT_183063b60;
  _DAT_183063bc0 = _DAT_183063b80 ^ _DAT_183063b88;
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x28);
  uVar1 = *(uint *)(unaff_RBP + 0x30);
  *(uint *)(unaff_RBP + 0x78) = uVar1;
  uVar11 = (ulonglong)uVar1;
  uVar3 = uVar11 ^ 0x84222325 ^ _DAT_183063ca8;
  lVar7 = (uVar11 ^ 0x84222325) + _DAT_183063c80;
  uVar6 = uVar3 + lVar7;
  uVar12 = (_DAT_183063c80 ^ 1) + _DAT_183063ca8 + 1;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3;
  uVar6 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_183063c80 ^ 1;
  _DAT_183063be0 =
       func_0x00018415ae10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183063ca8 + 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar3 = ~_DAT_183063c68 & uVar11;
  uVar13 = uVar1 & (uint)unaff_XMM8_Qa;
  uVar10 = uVar1 | (uint)unaff_XMM8_Qa;
  _DAT_183063c40 =
       ((((uVar11 ^ unaff_XMM8_Qa) & 0xffffffff) * (ulonglong)_DAT_18011c100 +
         (((uVar11 ^ unaff_XMM8_Qa) & 0xffffffff) * (ulonglong)_DAT_18011c110 +
          (unaff_XMM8_Qa >> 0x20) * (ulonglong)_DAT_18011c100 << 0x20) +
        ((ulonglong)uVar10 * (ulonglong)_DAT_18011c0f0 << 0x20) +
        (ulonglong)uVar10 * (ulonglong)_DAT_18011c0e0 +
        ((ulonglong)uVar13 * (ulonglong)_DAT_18011c0d0 << 0x20 |
        (ulonglong)uVar13 * (ulonglong)_DAT_18011c0c0) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_18011c0b0 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_18011c0a0) -
       (((uVar11 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_18011c150 +
        ((_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_18011c150 +
         ((uVar11 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_18011c140 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_18011c150 +
       ((ulonglong)uVar1 * (ulonglong)_DAT_18011c140 << 0x20))) + 0x7dcf96a0b058d722;
  _DAT_183063b48 = _DAT_183063b40 ^ uVar3 ^ _DAT_183063c40;
  _DAT_183063cd0 = (_DAT_183063cd0 ^ uVar3) + _DAT_183063c40 ^ 0x8d166ca816f1dc22;
  _DAT_183063bb8 = (_DAT_183063bb8 * -0x25d7ca7c5602e5a5 ^ _DAT_183063cd0) + uVar3;
  _DAT_183063bf0 = _DAT_183063bb8 ^ _DAT_183063cd0;
  _DAT_183063c40 = _DAT_183063c40 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x80) = uVar5 | uVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x50)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4145b82 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184145b82(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4145c40 -----

undefined8 FUN_184145c40(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x4145e21 -----

undefined8 FUN_184145e21(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(unaff_RBX + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x4145e7a -----

void FUN_184145e7a(void)

{
  return;
}


// ----- block @ rva 0x415af91 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018415afe7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18415af91(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x415b37b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018415b3be */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18415b37b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x415cd6e -----

void thunk_FUN_18415d052(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x415d131 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018415d148 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18415d131(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x415d2dd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018415d2f4 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18415d2dd(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x41697f5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841697f5(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4169b0f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184169b0f(void)

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


// ----- block @ rva 0x417290f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18417290f(void)

{
  char cVar1;
  code *in_RAX;
  
  cVar1 = (*in_RAX)();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4172cd9 -----

void FUN_184172cd9(void)

{
  return;
}


// ----- block @ rva 0x4172fe3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184172fe3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180123058)();
  return;
}


// ----- block @ rva 0x41735a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841735a3(void)

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


// ----- block @ rva 0x4173813 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184173813(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1801234e8)();
  return;
}


// ----- block @ rva 0x4173d0e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184173d0e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180122cb8)();
  return;
}


// ----- block @ rva 0x4173d8b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184173d8b(void)

{
  FUN_190dd9df0();
  (*_DAT_180123518)();
  return;
}


// ----- block @ rva 0x4173de2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184173de2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (*_DAT_180122c78)();
  return;
}


// ----- block @ rva 0x4173e22 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184173e22(void)

{
  FUN_190dd72e0();
  (*_DAT_180123368)();
  return;
}


// ----- block @ rva 0x4174531 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184174531(void)

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


// ----- block @ rva 0x41749d5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841749d5(void)

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


// ----- block @ rva 0x4174c32 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184174c32(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1841196f0();
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


// ----- block @ rva 0x4174d20 -----

void FUN_184174d20(void)

{
  return;
}


// ----- block @ rva 0x4174e9b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184174e9b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180124028)();
  return;
}


// ----- block @ rva 0x4175345 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184175345(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180123b48)();
  return;
}


// ----- block @ rva 0x41755b7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841755b7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180124278)();
  return;
}


// ----- block @ rva 0x41757b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841757b1(void)

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


// ----- block @ rva 0x4175df9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184175df9(void)

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


// ----- block @ rva 0x41761f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841761f1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180123d78)();
  return;
}


// ----- block @ rva 0x417685d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18417685d(void)

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


// ----- block @ rva 0x4176acf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184176acf(void)

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


// ----- block @ rva 0x4176cb7 -----

void FUN_184176cb7(void)

{
  return;
}


// ----- block @ rva 0x4176cc1 -----

void FUN_184176cc1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4176e3b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184176e3b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180125088)();
  return;
}


// ----- block @ rva 0x4176eba -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184176eba(void)

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


// ----- block @ rva 0x41775a0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841775a0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1801248e8)();
  return;
}


// ----- block @ rva 0x41775e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841775e1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180124d58)();
  return;
}


// ----- block @ rva 0x417761d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417761d(void)

{
  FUN_190dd9df0();
  (*_DAT_1801249b8)();
  return;
}


// ----- block @ rva 0x4177d66 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184177d66(void)

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


// ----- block @ rva 0x4178299 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184178299(void)

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


// ----- block @ rva 0x417868c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18417868c(void)

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


// ----- block @ rva 0x4178c27 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184178c27(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d80();
  (*_DAT_180124a68)();
  return;
}


// ----- block @ rva 0x41793cd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841793cd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_1801247d8)();
  return;
}


// ----- block @ rva 0x417940f -----

void FUN_18417940f(void)

{
  return;
}


// ----- block @ rva 0x4179661 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184179661(void)

{
  FUN_190ddce00();
  (*_DAT_180125a18)();
  return;
}


// ----- block @ rva 0x417c516 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18417c516(void)

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


// ----- block @ rva 0x417c824 -----

void FUN_18417c824(void)

{
  return;
}


// ----- block @ rva 0x417cafa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417cafa(void)

{
  FUN_190ddce00();
  (*_DAT_180125918)();
  return;
}


// ----- block @ rva 0x417d904 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18417d904(void)

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


// ----- block @ rva 0x417da22 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417da22(void)

{
  FUN_190dd72e0();
  (*_DAT_180125738)();
  return;
}


// ----- block @ rva 0x417dac8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18417dac8(void)

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


// ----- block @ rva 0x417db38 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417db38(void)

{
  FUN_190dd72e0();
  (*_DAT_180125948)();
  return;
}


// ----- block @ rva 0x417dd07 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18417dd07(void)

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


// ----- block @ rva 0x417dfa5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417dfa5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_180125d78)();
  return;
}


// ----- block @ rva 0x417e316 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417e316(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_180125d38)();
  return;
}


// ----- block @ rva 0x417e5c0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417e5c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectField /*0x340*/))();
  (*_DAT_180125758)();
  return;
}


// ----- block @ rva 0x417e675 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417e675(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_180125da8)();
  return;
}


// ----- block @ rva 0x417e689 -----

void FUN_18417e689(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x417e847 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18417e847(void)

{
  FUN_190ddce00();
  (*_DAT_180126e08)();
  return;
}


// ----- block @ rva 0x417e89e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18417e89e(void)

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


// ----- block @ rva 0x4181011 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184181011(void)

{
  FUN_190de3220();
  (*_DAT_180126a08)();
  return;
}


// ----- block @ rva 0x4181044 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184181044(void)

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


// ----- block @ rva 0x418123a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418123a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180126ad8)();
  return;
}


// ----- block @ rva 0x418136c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418136c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  (*_DAT_180126c08)();
  return;
}


// ----- block @ rva 0x418143d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18418143d(void)

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


// ----- block @ rva 0x4181881 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184181881(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x41818c8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841818c8(void)

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


// ----- block @ rva 0x418190b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418190b(void)

{
  (*_DAT_180126a78)();
  return;
}


// ----- block @ rva 0x4181913 -----

void FUN_184181913(void)

{
  return;
}


// ----- block @ rva 0x418197f -----

void FUN_18418197f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4181b04 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184181b04(void)

{
  FUN_190ddce00();
  (*_DAT_180127938)();
  return;
}


// ----- block @ rva 0x4181bf4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184181bf4(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  ulonglong in_RAX;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  ulonglong unaff_R12;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar24;
  undefined1 auVar15 [16];
  uint uVar23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar32;
  undefined1 auVar30 [16];
  uint uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar47;
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  ulonglong uVar49;
  undefined1 auVar50 [16];
  uint uVar51;
  undefined1 auVar52 [16];
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  undefined1 auVar56 [16];
  ulonglong in_stack_00000030;
  ulonglong uStack0000000000000060;
  undefined8 uStack0000000000000068;
  ulonglong uStack0000000000000090;
  ulonglong in_stack_00000098;
  
  uVar9 = _DAT_1801277d0;
  uStack0000000000000090 = _DAT_1801277d0 ^ 0x84222325;
  uVar14 = (uStack0000000000000090 ^ in_RAX) + uStack0000000000000090 + param_1;
  uVar24 = (param_1 ^ 0xf56ee644610e3643) + in_RAX + 0xf56ee644610e3643;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uStack0000000000000090 ^ in_RAX;
  uVar24 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ param_1 ^ 0xf56ee644610e3643;
  _DAT_1830656c8 =
       func_0x000184185900((uVar24 << 0x1d | uVar24 >> 0x23) - (in_RAX + 0xf56ee644610e3643) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (uStack0000000000000090 + param_1));
  uVar11 = uVar9 | 0xf56ee644610e3643;
  uVar14 = uVar9 ^ _DAT_1830656c8 ^ uVar11;
  uVar14 = uVar14 << 0xe | uVar14 >> 0x32;
  _DAT_183065a10 = (_DAT_183065a10 ^ uVar14) + uVar11 ^ 0x3fa8012f35c7f5d0;
  _DAT_1830656b8 = (_DAT_1830656b8 * 0x43383a7ea8770fff ^ _DAT_183065a10) + uVar14;
  _DAT_183065458 = _DAT_1830656b8 ^ _DAT_183065a10;
  uVar14 = _DAT_1801277d8 ^ 0x3d80b6fef64e452c;
  lVar8 = uVar9 * uVar9;
  uVar12 = lVar8 * 0x12967d2955db0dac;
  auVar15._8_8_ = uVar12;
  auVar15._0_8_ = _DAT_18001b640;
  auVar15 = pshufb(auVar15 ^ _DAT_180127de0,_DAT_1800170c0);
  uVar24 = auVar15._8_8_ + auVar15._0_8_;
  uVar9 = uVar24 + _DAT_183065840;
  if (auVar15._4_4_ < 0) {
    uVar9 = _DAT_183065508 ^ uVar24;
  }
  _DAT_183065ac8 = uVar11;
  _DAT_183065428 = func_0x000184185900(uVar9 ^ 0xf3);
  uVar9 = _DAT_183065428 >> 1 | _DAT_183065428;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183065428;
  uVar9 = uVar9 << 9 | uVar9 >> 0x37;
  uVar24 = lVar8 * -0x12967d2955db0dac;
  _DAT_183065410 = (_DAT_183065410 ^ uVar9) + lVar8 * -0x12967d2955db0dac ^ 0x94cf1181cd9c610c;
  _DAT_183065318 = (_DAT_183065318 * 0x57fe9bc9e5b34743 ^ _DAT_183065410) + uVar9;
  _DAT_1830653f8 = _DAT_183065318 ^ _DAT_183065410;
  uVar9 = (unaff_R12 ^ _DAT_183065888) + unaff_R12 + _DAT_183065a88;
  uVar31 = (uVar12 ^ _DAT_183065a88) + _DAT_183065888 + uVar12;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ unaff_R12 ^ _DAT_183065888;
  uVar31 = (uVar31 * 0x2000 | uVar31 >> 0x33) ^ uVar12 ^ _DAT_183065a88;
  _DAT_1830654f0 = uVar24;
  _DAT_1830658f0 =
       func_0x000184185900((uVar31 << 0x1d | uVar31 >> 0x23) - (_DAT_183065888 + uVar12) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (unaff_R12 + _DAT_183065a88));
  uVar23 = (uint)(uVar12 >> 0x20);
  auVar37._8_4_ = (int)uVar12;
  auVar37._0_8_ = uVar12;
  auVar37._12_4_ = uVar23;
  uVar38 = SUB164(auVar37 & _DAT_180127df0,0);
  uVar9 = SUB168(auVar37 & _DAT_180127df0,0);
  uVar33 = SUB164(auVar37 | _DAT_180127df0,0);
  uVar49 = SUB168(auVar37 | _DAT_180127df0,0);
  uVar25 = SUB164(_DAT_180127df0 ^ auVar37,0);
  uVar26 = SUB168(_DAT_180127df0 ^ auVar37,0);
  auVar48._8_4_ = 0xffffffff;
  auVar48._0_8_ = 0xffffffffffffffff;
  auVar48._12_4_ = 0xffffffff;
  uVar13 = SUB164(auVar37 ^ auVar48,0);
  uVar31 = SUB168(auVar37 ^ auVar48,0);
  uVar31 = (ulonglong)_DAT_180127e60 * (ulonglong)uVar13 +
           ((uVar31 >> 0x20) * (ulonglong)_DAT_180127e60 +
            (ulonglong)_DAT_180127e00 * (ulonglong)uVar13 << 0x20) +
           (ulonglong)_DAT_180127e30 * (ulonglong)uVar25 +
           ((uVar26 >> 0x20) * (ulonglong)_DAT_180127e30 +
            (ulonglong)_DAT_180127e20 * (ulonglong)uVar25 << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_180127e30 +
           ((uVar9 >> 0x20) * (ulonglong)_DAT_180127e30 +
            (ulonglong)uVar38 * (ulonglong)_DAT_180127e20 << 0x20) +
           (ulonglong)_DAT_180127e10 * (uVar12 & 0xffffffff) +
           ((ulonglong)uVar23 * (ulonglong)_DAT_180127e10 +
            (uVar12 & 0xffffffff) * (ulonglong)_DAT_180127e00 << 0x20) +
           (ulonglong)_DAT_180127e40 * (ulonglong)uVar33 +
           ((ulonglong)_DAT_180127e50 * (ulonglong)uVar33 +
            (uVar49 >> 0x20) * (ulonglong)_DAT_180127e40 << 0x20) +
           (-((ulonglong)uVar13 * (_DAT_180127f10 & 0xffffffff) +
             ((ulonglong)_DAT_180127f20 * (ulonglong)uVar13 +
              (uVar31 >> 0x20) * (_DAT_180127f10 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar25 * (ulonglong)_DAT_180127ef0 +
            ((ulonglong)_DAT_180127f00 * (ulonglong)uVar25 +
             (uVar26 >> 0x20) * (ulonglong)_DAT_180127ef0 << 0x20) +
            (ulonglong)uVar33 * (ulonglong)_DAT_180127ed0 +
            ((ulonglong)_DAT_180127ee0 * (ulonglong)uVar33 +
             (uVar49 >> 0x20) * (ulonglong)_DAT_180127ed0 << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_180127eb0 +
           ((ulonglong)_DAT_180127ec0 * (ulonglong)uVar38 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_180127eb0 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_180127e90 +
           ((ulonglong)_DAT_180127ea0 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar23 * (ulonglong)_DAT_180127e90 << 0x20))) + _DAT_180127f30;
  auVar18._8_8_ = uVar24;
  auVar18._0_8_ = uVar31 ^ 0x84222325;
  auVar15 = pshufb(auVar18 ^ _DAT_180127f40,_DAT_1800170c0);
  uVar9 = _DAT_1830658f0 << 0x2c | _DAT_1830658f0 >> 0x14;
  _DAT_183065a38 = _DAT_1830653c8 ^ uVar9 ^ uVar31;
  _DAT_183065838 = (_DAT_183065838 ^ uVar9) + uVar31 ^ 0xb463eb2ec187e719;
  _DAT_183065358 = (_DAT_183065358 * -0x4ee30398c52e1f1d ^ _DAT_183065838) + uVar9;
  _DAT_183065720 = _DAT_183065358 ^ _DAT_183065838;
  uVar12 = auVar15._8_8_ + auVar15._0_8_;
  uVar9 = uVar12 + _DAT_1830655d0;
  if (auVar15._4_4_ < 0) {
    uVar9 = _DAT_1830659a8 ^ uVar12;
  }
  _DAT_1830656b0 = uVar31;
  _DAT_183065968 = func_0x000184185900(SUB161(auVar18 ^ _DAT_180127f40,5) ^ uVar9);
  uVar9 = _DAT_1801277d8;
  uVar12 = _DAT_183065968 ^ uVar31;
  uVar47 = (uint)(uVar31 >> 0x20);
  auVar27._8_4_ = (int)uVar31;
  auVar27._0_8_ = uVar31;
  auVar27._12_4_ = uVar47;
  uVar51 = (uint)(uVar24 >> 0x20);
  auVar34._8_4_ = (int)uVar24;
  auVar34._0_8_ = uVar24;
  auVar34._12_4_ = uVar51;
  uVar25 = SUB164(auVar27 & auVar34,0);
  uVar26 = SUB168(auVar27 & auVar34,0);
  uVar33 = SUB164(auVar27 | auVar34,0);
  uVar13 = SUB164(auVar27 ^ auVar34,0);
  uVar32 = SUB168(auVar27 ^ auVar34,0);
  auVar1._8_8_ = _UNK_18001a718;
  auVar1._0_8_ = _DAT_18001a710;
  uVar38 = SUB164(auVar34 ^ auVar1,0);
  uVar49 = SUB168(auVar34 ^ auVar1,0);
  auVar2._8_8_ = _UNK_18001a718;
  auVar2._0_8_ = _DAT_18001a710;
  uVar23 = SUB164(auVar27 ^ auVar2,0);
  uVar49 = (((_DAT_180127f90 & 0xffffffff) * (ulonglong)uVar38 +
             ((_DAT_180128000 & 0xffffffff) * (ulonglong)uVar38 +
              (uVar49 >> 0x20) * (_DAT_180127f90 & 0xffffffff) << 0x20) +
            (_DAT_180127fe0 & 0xffffffff) * (ulonglong)uVar13 +
            ((_DAT_180127ff0 & 0xffffffff) * (ulonglong)uVar13 +
             (uVar32 >> 0x20) * (_DAT_180127fe0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar33 * (ulonglong)_DAT_180127fc0 +
            ((_DAT_180127fd0 & 0xffffffff) * (ulonglong)uVar33 +
             (SUB168(auVar27 | auVar34,0) >> 0x20) * (ulonglong)_DAT_180127fc0 << 0x20) +
            (_DAT_180127fa0 & 0xffffffff) * (ulonglong)uVar25 +
            ((_DAT_180127fb0 & 0xffffffff) * (ulonglong)uVar25 +
             (uVar26 >> 0x20) * (_DAT_180127fa0 & 0xffffffff) << 0x20) +
            (_DAT_180127f70 & 0xffffffff) * (uVar24 & 0xffffffff) +
            ((_DAT_180127f80 & 0xffffffff) * (uVar24 & 0xffffffff) +
             (ulonglong)uVar51 * (_DAT_180127f70 & 0xffffffff) << 0x20) +
            (_DAT_180127f50 & 0xffffffff) * (uVar31 & 0xffffffff) +
            ((_DAT_180127f60 & 0xffffffff) * (uVar31 & 0xffffffff) +
             (ulonglong)uVar47 * (_DAT_180127f50 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar38 * (ulonglong)_DAT_1801280d0 +
            ((_DAT_1801280e0 & 0xffffffff) * (ulonglong)uVar38 +
             (uVar49 >> 0x20) * (ulonglong)_DAT_1801280d0 << 0x20) +
           (ulonglong)uVar23 * (ulonglong)_DAT_1801280b0 +
           ((_DAT_1801280c0 & 0xffffffff) * (ulonglong)uVar23 +
            (SUB168(auVar27 ^ auVar2,0) >> 0x20) * (ulonglong)_DAT_1801280b0 << 0x20) +
           (ulonglong)uVar13 * (ulonglong)_DAT_180128090 +
           ((_DAT_1801280a0 & 0xffffffff) * (ulonglong)uVar13 +
            (uVar32 >> 0x20) * (ulonglong)_DAT_180128090 << 0x20) +
           (ulonglong)uVar25 * (ulonglong)_DAT_180128070 +
           ((_DAT_180128080 & 0xffffffff) * (ulonglong)uVar25 +
            (uVar26 >> 0x20) * (ulonglong)_DAT_180128070 << 0x20) +
           (uVar24 & 0xffffffff) * (ulonglong)_DAT_180128050 +
           ((_DAT_180128060 & 0xffffffff) * (uVar24 & 0xffffffff) +
            (ulonglong)uVar51 * (ulonglong)_DAT_180128050 << 0x20) +
           (uVar31 & 0xffffffff) * (ulonglong)_DAT_180128030 +
           ((_DAT_180128040 & 0xffffffff) * (uVar31 & 0xffffffff) +
            (ulonglong)uVar47 * (ulonglong)_DAT_180128030 << 0x20))) + _DAT_1801280f0;
  _DAT_183065920 = _DAT_183065740 ^ uVar12 ^ uVar49;
  _DAT_1830659e0 = (_DAT_1830659e0 ^ uVar12) + uVar49 ^ 0xb08e15253faf87dc;
  _DAT_1830656d0 = (_DAT_1830656d0 * 0x2da239d05888b79f ^ _DAT_1830659e0) + uVar12;
  _DAT_183065a10 = _DAT_1830656d0 ^ _DAT_1830659e0;
  lVar8 = _DAT_1801277d8 * _DAT_1801277d8;
  uVar31 = lVar8 * 0x160f1e373db1f70b;
  uVar24 = (_DAT_183065a48 ^ 0x84222325) + _DAT_183065a28 + 0x84222325;
  uVar12 = (uVar31 ^ _DAT_183065a28) + _DAT_183065a48 + uVar31;
  uVar24 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ _DAT_183065a48 ^ 0x84222325;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar31 ^ _DAT_183065a28;
  _DAT_183065398 = uVar49;
  _DAT_183065840 =
       func_0x000184185900((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183065a48 + uVar31) ^
                           (uVar24 << 0x1d | uVar24 >> 0x23) - (_DAT_183065a28 + 0x84222325));
  _DAT_183065448 = lVar8 * -0x160f1e373db1f70b;
  _DAT_183065580 =
       (_DAT_183065580 ^ _DAT_183065840 & 0x3fffffffffffff) + lVar8 * -0x160f1e373db1f70b ^
       0x6d8573eb51726865;
  _DAT_183065ab0 =
       (_DAT_183065ab0 * 0x6b99db55c6846995 ^ _DAT_183065580) + (_DAT_183065840 & 0x3fffffffffffff);
  _DAT_183065a70 = _DAT_183065ab0 ^ _DAT_183065580;
  _DAT_183065608 = _DAT_1830653f8 ^ _DAT_183065448;
  auVar16._8_8_ = uVar31;
  auVar16._0_8_ = uVar49 ^ 0x84222325;
  auVar15 = pshufb(auVar16 ^ _DAT_180128100,_DAT_1800170c0);
  uVar12 = auVar15._8_8_ + auVar15._0_8_;
  uVar24 = uVar12 + _DAT_1830653a0;
  if (auVar15._4_4_ < 0) {
    uVar24 = _DAT_183065368 ^ uVar12;
  }
  _DAT_1830659e8 = func_0x000184185900(SUB161(auVar16 ^ _DAT_180128100,5) ^ uVar24);
  uVar24 = _DAT_1830659e8 ^ uVar49;
  uVar38 = (uint)(uVar49 >> 0x20);
  auVar42._8_4_ = (int)uVar49;
  auVar42._0_8_ = uVar49;
  auVar42._12_4_ = uVar38;
  uVar25 = (uint)(uVar31 >> 0x20);
  auVar35._8_4_ = (int)uVar31;
  auVar35._0_8_ = uVar31;
  auVar35._12_4_ = uVar25;
  uVar23 = SUB164(auVar42 & auVar35,0);
  uVar32 = SUB168(auVar42 & auVar35,0);
  uVar13 = SUB164(auVar42 | auVar35,0);
  uVar53 = SUB168(auVar42 | auVar35,0);
  uVar33 = SUB164(auVar42 ^ auVar35,0);
  uVar12 = SUB168(auVar42 ^ auVar35,0);
  uVar26 = uVar49 ^ _DAT_18001a710;
  _DAT_183065810 =
       (((ulonglong)_DAT_180128170 * (ulonglong)uVar33 +
         ((ulonglong)_DAT_180128180 * (ulonglong)uVar33 +
          (uVar12 >> 0x20) * (ulonglong)_DAT_180128170 << 0x20) +
         (ulonglong)_DAT_180128150 * (ulonglong)uVar13 +
         ((ulonglong)_DAT_180128160 * (ulonglong)uVar13 +
          (uVar53 >> 0x20) * (ulonglong)_DAT_180128150 << 0x20) +
        (ulonglong)_DAT_180128130 * (ulonglong)uVar23 +
        ((ulonglong)_DAT_180128140 * (ulonglong)uVar23 +
         (uVar32 >> 0x20) * (ulonglong)_DAT_180128130 << 0x20) +
        (ulonglong)_DAT_180128120 * (uVar31 & 0xffffffff) +
        ((ulonglong)uVar25 * (ulonglong)_DAT_180128120 +
         (ulonglong)_DAT_180128110 * (uVar31 & 0xffffffff) << 0x20) +
        (uVar49 & 0xffffffff) * (ulonglong)_DAT_180128120 +
        ((ulonglong)uVar38 * (ulonglong)_DAT_180128120 +
         (uVar49 & 0xffffffff) * (ulonglong)_DAT_180128110 << 0x20)) -
       ((uVar26 & 0xffffffff) * (ulonglong)_DAT_1801281f0 +
        ((ulonglong)_DAT_180128260 * (uVar26 & 0xffffffff) +
         (uVar26 >> 0x20) * (ulonglong)_DAT_1801281f0 << 0x20) +
       (ulonglong)uVar33 * (ulonglong)_DAT_180128240 +
       ((ulonglong)_DAT_180128250 * (ulonglong)uVar33 + (uVar12 >> 0x20) * (ulonglong)_DAT_180128240
       << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_180128220 +
       ((ulonglong)_DAT_180128230 * (ulonglong)uVar13 + (uVar53 >> 0x20) * (ulonglong)_DAT_180128220
       << 0x20) +
       (ulonglong)uVar23 * (ulonglong)_DAT_180128200 +
       ((ulonglong)_DAT_180128210 * (ulonglong)uVar23 + (uVar32 >> 0x20) * (ulonglong)_DAT_180128200
       << 0x20) +
       (uVar31 & 0xffffffff) * (ulonglong)_DAT_1801281d0 +
       ((ulonglong)_DAT_1801281e0 * (uVar31 & 0xffffffff) +
        (ulonglong)uVar25 * (ulonglong)_DAT_1801281d0 << 0x20) +
       (uVar49 & 0xffffffff) * (ulonglong)_DAT_1801281b0 +
       ((ulonglong)_DAT_1801281c0 * (uVar49 & 0xffffffff) +
        (ulonglong)uVar38 * (ulonglong)_DAT_1801281b0 << 0x20))) + 0x810789f11f8c85ef;
  _DAT_183065950 = _DAT_183065320 ^ uVar24 ^ _DAT_183065810;
  _DAT_183065838 = (_DAT_183065838 ^ uVar24) + _DAT_183065810 ^ 0x777e10c0f33fd266;
  _DAT_183065960 = (_DAT_183065960 * 0x3bd170d114ed3fd7 ^ _DAT_183065838) + uVar24;
  _DAT_183065600 = _DAT_183065960 ^ _DAT_183065838;
  lVar10 = uVar9 * _DAT_1801277d0;
  uVar12 = lVar10 * -0x35fd414331668bb7;
  uVar9 = (_DAT_183065820 ^ 0x84222325) + _DAT_183065430 + 0x84222325;
  uVar24 = (uVar12 ^ _DAT_183065430) + _DAT_183065820 + uVar12;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183065820 ^ 0x84222325;
  uVar24 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ uVar12 ^ _DAT_183065430;
  uVar49 = _DAT_183065810 + lVar8 * -0x160f1e373db1f70b;
  _DAT_1830654e8 =
       func_0x000184185900((uVar24 << 0x1d | uVar24 >> 0x23) - (_DAT_183065820 + uVar12) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183065430 + 0x84222325));
  auVar15 = _DAT_1800170c0;
  uVar31 = lVar10 * 0x35fd414331668bb7;
  _DAT_183065848 =
       (_DAT_183065848 ^ _DAT_183065300) + lVar10 * 0x35fd414331668bb7 ^ 0x4ee78a72cc9d6ff5;
  _DAT_183065670 = (_DAT_183065670 * 0x2d1bb56ef6aa665d ^ _DAT_183065848) + _DAT_183065300;
  _DAT_1830653a8 = _DAT_183065670 ^ _DAT_183065848;
  auVar17._8_8_ = uVar12;
  auVar17._0_8_ = uVar49 ^ 0x84222325;
  auVar18 = pshufb(auVar17 ^ _DAT_180128270,_DAT_1800170c0);
  uVar24 = auVar18._8_8_ + auVar18._0_8_;
  uVar9 = uVar24 + _DAT_183065550;
  if (auVar18._4_4_ < 0) {
    uVar9 = _DAT_183065520 ^ uVar24;
  }
  _DAT_183065940 = uVar31;
  _DAT_1830656f8 = func_0x000184185900(SUB161(auVar17 ^ _DAT_180128270,5) ^ uVar9);
  uVar23 = (uint)(uVar49 >> 0x20);
  auVar43._8_4_ = (int)uVar49;
  auVar43._0_8_ = uVar49;
  auVar43._12_4_ = uVar23;
  uVar47 = (uint)(uVar12 >> 0x20);
  auVar19._8_4_ = (int)uVar12;
  auVar19._0_8_ = uVar12;
  auVar19._12_4_ = uVar47;
  uVar38 = SUB164(auVar43 & auVar19,0);
  uVar9 = SUB168(auVar43 & auVar19,0);
  uVar51 = SUB164(auVar43 | auVar19,0);
  uVar33 = SUB164(auVar43 ^ auVar19,0);
  uVar24 = SUB168(auVar43 ^ auVar19,0);
  auVar3._8_8_ = _UNK_18001a718;
  auVar3._0_8_ = _DAT_18001a710;
  uVar25 = SUB164(auVar43 ^ auVar3,0);
  uVar26 = SUB168(auVar43 ^ auVar3,0);
  auVar52._8_4_ = 0xffffffff;
  auVar52._0_8_ = 0xffffffffffffffff;
  auVar52._12_4_ = 0xffffffff;
  uVar13 = SUB164(auVar19 ^ auVar52,0);
  uVar12 = (((ulonglong)_DAT_1801282c0 * (ulonglong)uVar25 +
             ((ulonglong)_DAT_180128330 * (ulonglong)uVar25 +
              (uVar26 >> 0x20) * (ulonglong)_DAT_1801282c0 << 0x20) +
            (ulonglong)_DAT_180128310 * (ulonglong)uVar33 +
            ((ulonglong)_DAT_180128320 * (ulonglong)uVar33 +
             (uVar24 >> 0x20) * (ulonglong)_DAT_180128310 << 0x20) +
            (ulonglong)uVar51 * (ulonglong)_DAT_1801282f0 +
            ((ulonglong)_DAT_180128300 * (ulonglong)uVar51 +
             (SUB168(auVar43 | auVar19,0) >> 0x20) * (ulonglong)_DAT_1801282f0 << 0x20) +
            (ulonglong)_DAT_1801282d0 * (ulonglong)uVar38 +
            ((ulonglong)_DAT_1801282e0 * (ulonglong)uVar38 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_1801282d0 << 0x20) +
            (ulonglong)_DAT_1801282a0 * (uVar12 & 0xffffffff) +
            ((ulonglong)_DAT_1801282b0 * (uVar12 & 0xffffffff) +
             (ulonglong)uVar47 * (ulonglong)_DAT_1801282a0 << 0x20) +
            (ulonglong)_DAT_180128280 * (uVar49 & 0xffffffff) +
            ((ulonglong)_DAT_180128290 * (uVar49 & 0xffffffff) +
             (ulonglong)uVar23 * (ulonglong)_DAT_180128280 << 0x20)) -
           ((ulonglong)uVar13 * (ulonglong)_DAT_180128400 +
            ((ulonglong)_DAT_180128410 * (ulonglong)uVar13 +
             (SUB168(auVar19 ^ auVar52,0) >> 0x20) * (ulonglong)_DAT_180128400 << 0x20) +
           (ulonglong)uVar25 * (ulonglong)_DAT_1801283e0 +
           ((ulonglong)_DAT_1801283f0 * (ulonglong)uVar25 +
            (uVar26 >> 0x20) * (ulonglong)_DAT_1801283e0 << 0x20) +
           (ulonglong)uVar33 * (ulonglong)_DAT_1801283c0 +
           ((ulonglong)_DAT_1801283d0 * (ulonglong)uVar33 +
            (uVar24 >> 0x20) * (ulonglong)_DAT_1801283c0 << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_1801283a0 +
           ((ulonglong)_DAT_1801283b0 * (ulonglong)uVar38 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_1801283a0 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_180128380 +
           ((ulonglong)_DAT_180128390 * (uVar12 & 0xffffffff) +
            (ulonglong)uVar47 * (ulonglong)_DAT_180128380 << 0x20) +
           (uVar49 & 0xffffffff) * (ulonglong)_DAT_180128360 +
           ((ulonglong)_DAT_180128370 * (uVar49 & 0xffffffff) +
            (ulonglong)uVar23 * (ulonglong)_DAT_180128360 << 0x20))) + _DAT_180128420;
  auVar20._8_8_ = uVar31;
  auVar20._0_8_ = uVar12 ^ 0x84222325;
  auVar15 = pshufb(auVar20 ^ _DAT_180128430,auVar15);
  _DAT_183065540 = _DAT_183065348 ^ _DAT_1830656f8 ^ uVar12;
  _DAT_183065908 = (_DAT_183065908 ^ _DAT_1830656f8) + uVar12 ^ 0x9fd186632f0ae09c;
  _DAT_1830655c8 = (_DAT_1830655c8 * 0x4c2788ad2d67669 ^ _DAT_183065908) + _DAT_1830656f8;
  _DAT_1830658d0 = _DAT_1830655c8 ^ _DAT_183065908;
  uVar24 = auVar15._8_8_ + auVar15._0_8_;
  uVar9 = uVar24 + _DAT_183065588;
  if (auVar15._4_4_ < 0) {
    uVar9 = _DAT_183065ad0 ^ uVar24;
  }
  _DAT_183065a90 = uVar12;
  _DAT_183065370 = func_0x000184185900(SUB161(auVar20 ^ _DAT_180128430,5) ^ uVar9);
  uVar47 = (uint)(uVar12 >> 0x20);
  auVar36._8_4_ = (int)uVar12;
  auVar36._0_8_ = uVar12;
  auVar36._12_4_ = uVar47;
  uVar51 = (uint)(uVar31 >> 0x20);
  auVar28._8_4_ = (int)uVar31;
  auVar28._0_8_ = uVar31;
  auVar28._12_4_ = uVar51;
  auVar56._8_4_ = 0xffffffff;
  auVar56._0_8_ = 0xffffffffffffffff;
  auVar56._12_4_ = 0xffffffff;
  uVar25 = SUB164(auVar36 & auVar28,0);
  uVar9 = SUB168(auVar36 & auVar28,0);
  uVar33 = SUB164(auVar36 ^ auVar28,0);
  uVar13 = SUB164(auVar36 ^ auVar52,0);
  uVar49 = SUB168(auVar36 ^ auVar52,0);
  uVar38 = SUB164(auVar28 ^ auVar56,0);
  uVar26 = SUB168(auVar28 ^ auVar56,0);
  uVar23 = SUB164(auVar36 | auVar28,0);
  uVar24 = uVar11 ^ 0x84222325;
  auVar29._8_8_ = uVar14;
  auVar29._0_8_ = uVar24;
  auVar15 = pshufb(auVar29 ^ _DAT_1801285c0,_DAT_1800170c0);
  uVar31 = (((ulonglong)_DAT_1801284e0 * (ulonglong)uVar38 +
             ((ulonglong)_DAT_1801284f0 * (ulonglong)uVar38 +
              (uVar26 >> 0x20) * (ulonglong)_DAT_1801284e0 << 0x20) +
            (ulonglong)_DAT_1801284c0 * (ulonglong)uVar13 +
            ((ulonglong)_DAT_1801284d0 * (ulonglong)uVar13 +
             (uVar49 >> 0x20) * (ulonglong)_DAT_1801284c0 << 0x20) +
            (ulonglong)uVar33 * (ulonglong)_DAT_1801284a0 +
            ((ulonglong)_DAT_1801284b0 * (ulonglong)uVar33 +
             (SUB168(auVar36 ^ auVar28,0) >> 0x20) * (ulonglong)_DAT_1801284a0 << 0x20) +
            (ulonglong)_DAT_180128480 * (ulonglong)uVar25 +
            ((ulonglong)_DAT_180128490 * (ulonglong)uVar25 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_180128480 << 0x20) +
            (ulonglong)_DAT_180128460 * (uVar31 & 0xffffffff) +
            ((ulonglong)_DAT_180128470 * (uVar31 & 0xffffffff) +
             (ulonglong)uVar51 * (ulonglong)_DAT_180128460 << 0x20) +
            (ulonglong)_DAT_180128440 * (uVar12 & 0xffffffff) +
            ((ulonglong)_DAT_180128450 * (uVar12 & 0xffffffff) +
             (ulonglong)uVar47 * (ulonglong)_DAT_180128440 << 0x20)) -
           ((ulonglong)uVar38 * (_DAT_1801285a0 & 0xffffffff) +
            ((ulonglong)_DAT_1801285b0 * (ulonglong)uVar38 +
             (uVar26 >> 0x20) * (_DAT_1801285a0 & 0xffffffff) << 0x20) +
            (ulonglong)uVar23 * (ulonglong)_DAT_180128570 +
            ((SUB168(auVar36 | auVar28,0) >> 0x20) * (ulonglong)_DAT_180128570 +
             (ulonglong)_DAT_180128560 * (ulonglong)uVar23 << 0x20) +
            (ulonglong)uVar25 * (ulonglong)_DAT_180128570 +
            ((uVar9 >> 0x20) * (ulonglong)_DAT_180128570 +
             (ulonglong)uVar25 * (ulonglong)_DAT_180128560 << 0x20) +
            (uVar31 & 0xffffffff) * (ulonglong)_DAT_180128540 +
            ((ulonglong)_DAT_180128550 * (uVar31 & 0xffffffff) +
             (ulonglong)uVar51 * (ulonglong)_DAT_180128540 << 0x20) +
            (uVar12 & 0xffffffff) * (ulonglong)_DAT_180128520 +
            ((ulonglong)_DAT_180128530 * (uVar12 & 0xffffffff) +
             (ulonglong)uVar47 * (ulonglong)_DAT_180128520 << 0x20) +
           (ulonglong)uVar13 * (ulonglong)_DAT_180128580 +
           ((ulonglong)_DAT_180128590 * (ulonglong)uVar13 +
            (uVar49 >> 0x20) * (ulonglong)_DAT_180128580 << 0x20))) + 0xcff01a0bbfde25d9;
  _DAT_183065600 = _DAT_183065748 ^ _DAT_183065370 ^ uVar31;
  _DAT_183065680 = (_DAT_183065680 ^ _DAT_183065370) + uVar31 ^ 0xcc78066398dd860b;
  _DAT_1830654a8 = (_DAT_1830654a8 * 0x5e2ebd0d380b13b7 ^ _DAT_183065680) + _DAT_183065370;
  _DAT_183065a58 = _DAT_1830654a8 ^ _DAT_183065680;
  uVar12 = auVar15._8_8_ + auVar15._0_8_;
  uVar9 = uVar12 + _DAT_183065470;
  if (auVar15._4_4_ < 0) {
    uVar9 = _DAT_183065930 ^ uVar12;
  }
  _DAT_183065690 = uVar31;
  _DAT_183065878 = func_0x000184185900(SUB161(auVar29 ^ _DAT_1801285c0,5) ^ uVar9);
  uVar13 = (uint)(uVar11 >> 0x20);
  auVar39._8_4_ = (int)uVar11;
  auVar39._0_8_ = uVar11;
  auVar39._12_4_ = uVar13;
  uVar23 = (uint)(uVar14 >> 0x20);
  auVar46._8_4_ = (int)uVar14;
  auVar46._0_8_ = uVar14;
  auVar46._12_4_ = uVar23;
  uVar12 = auVar39._8_8_;
  uVar49 = uVar12 >> 0x20;
  auVar15 = auVar39 & auVar46;
  auVar18 = auVar39 ^ auVar46;
  uVar55 = auVar46._8_8_;
  auVar44._8_8_ = _UNK_18001a718;
  auVar44._0_8_ = _DAT_18001a710;
  auVar44 = auVar46 ^ auVar44;
  uVar9 = (uVar11 & 0xffffffff) * (uVar14 & 0xffffffff) +
          ((uVar11 & 0xffffffff) * (ulonglong)uVar23 + (ulonglong)uVar13 * (uVar14 & 0xffffffff) <<
          0x20);
  uVar54 = (uVar12 & 0xffffffff) * (uVar14 & 0xffffffff) +
           ((uVar12 & 0xffffffff) * (uVar55 >> 0x20) + uVar49 * (uVar14 & 0xffffffff) << 0x20);
  uVar25 = auVar15._0_4_;
  uVar33 = auVar15._8_4_;
  uVar53 = auVar15._8_8_ >> 0x20;
  uVar26 = auVar18._0_8_;
  uVar32 = auVar18._8_8_;
  lVar8 = (uVar9 & 0xffffffff) * (ulonglong)_DAT_180128670 +
          ((_DAT_180128680 & 0xffffffff) * (uVar9 & 0xffffffff) +
           (uVar9 >> 0x20) * (ulonglong)_DAT_180128670 << 0x20);
  lVar10 = (uVar54 & 0xffffffff) * (ulonglong)_UNK_180128678 +
           ((_UNK_180128688 & 0xffffffff) * (uVar54 & 0xffffffff) +
            (uVar54 >> 0x20) * (ulonglong)_UNK_180128678 << 0x20);
  uVar9 = (uVar11 * uVar14 ^ _DAT_183065878) & 0x7fffffffffffffff;
  auVar50._8_8_ = _UNK_18001a718;
  auVar50._0_8_ = _DAT_18001a710;
  auVar50 = auVar39 ^ auVar50;
  uStack0000000000000060 = SUB168(auVar39 | auVar46,0);
  uStack0000000000000068 = SUB168(auVar39 | auVar46,8);
  uVar54 = (((ulonglong)auVar44._0_4_ * (ulonglong)_DAT_180128610 +
             ((_DAT_180128660 & 0xffffffff) * (ulonglong)auVar44._0_4_ +
              (auVar44._0_8_ >> 0x20) * (ulonglong)_DAT_180128610 << 0x20) +
             (_DAT_180128640 & 0xffffffff) * (ulonglong)auVar18._0_4_ +
             ((_DAT_180128650 & 0xffffffff) * (ulonglong)auVar18._0_4_ +
              (uVar26 >> 0x20) * (_DAT_180128640 & 0xffffffff) << 0x20) +
             (_DAT_180128620 & 0xffffffff) * (ulonglong)uVar25 +
             ((_DAT_180128630 & 0xffffffff) * (ulonglong)uVar25 +
              (auVar15._0_8_ >> 0x20) * (_DAT_180128620 & 0xffffffff) << 0x20) +
             (_DAT_1801285f0 & 0xffffffff) * (uVar14 & 0xffffffff) +
             ((_DAT_180128600 & 0xffffffff) * (uVar14 & 0xffffffff) +
              (ulonglong)uVar23 * (_DAT_1801285f0 & 0xffffffff) << 0x20) +
             (_DAT_1801285d0 & 0xffffffff) * (uVar11 & 0xffffffff) +
             ((_DAT_1801285e0 & 0xffffffff) * (uVar11 & 0xffffffff) +
              (ulonglong)uVar13 * (_DAT_1801285d0 & 0xffffffff) << 0x20) + lVar8) -
           ((ulonglong)auVar50._0_4_ * (ulonglong)_DAT_1801286d0 +
            ((_DAT_180128740 & 0xffffffff) * (ulonglong)auVar50._0_4_ +
             (auVar50._0_8_ >> 0x20) * (ulonglong)_DAT_1801286d0 << 0x20) +
            (uVar26 & 0xffffffff) * (ulonglong)_DAT_180128720 +
            ((_DAT_180128730 & 0xffffffff) * (uVar26 & 0xffffffff) +
             (uVar26 >> 0x20) * (ulonglong)_DAT_180128720 << 0x20) +
            (uStack0000000000000060 & 0xffffffff) * (ulonglong)_DAT_180128700 +
            ((_DAT_180128710 & 0xffffffff) * (uStack0000000000000060 & 0xffffffff) +
             (uStack0000000000000060 >> 0x20) * (ulonglong)_DAT_180128700 << 0x20) +
            (ulonglong)uVar25 * (ulonglong)_DAT_1801286e0 +
            ((_DAT_1801286f0 & 0xffffffff) * (ulonglong)uVar25 +
             (auVar15._0_8_ >> 0x20) * (ulonglong)_DAT_1801286e0 << 0x20) +
            (uVar14 & 0xffffffff) * (ulonglong)_DAT_1801286b0 +
            ((_DAT_1801286c0 & 0xffffffff) * (uVar14 & 0xffffffff) +
             (ulonglong)uVar23 * (ulonglong)_DAT_1801286b0 << 0x20) +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_180128690 +
            ((_DAT_1801286a0 & 0xffffffff) * (uVar11 & 0xffffffff) +
             (ulonglong)uVar13 * (ulonglong)_DAT_180128690 << 0x20) + lVar8)) + _DAT_180128750;
  uStack0000000000000068 =
       (((auVar44._8_8_ & 0xffffffff) * (ulonglong)_UNK_180128618 +
         ((_UNK_180128668 & 0xffffffff) * (ulonglong)auVar44._8_4_ +
          (auVar44._8_8_ >> 0x20) * (ulonglong)_UNK_180128618 << 0x20) +
         (_UNK_180128648 & 0xffffffff) * (ulonglong)auVar18._8_4_ +
         ((_UNK_180128658 & 0xffffffff) * (ulonglong)auVar18._8_4_ +
          (uVar32 >> 0x20) * (_UNK_180128648 & 0xffffffff) << 0x20) +
         (_UNK_180128628 & 0xffffffff) * (ulonglong)uVar33 +
         ((_UNK_180128638 & 0xffffffff) * (ulonglong)uVar33 + uVar53 * (_UNK_180128628 & 0xffffffff)
         << 0x20) +
         (_UNK_1801285f8 & 0xffffffff) * (uVar14 & 0xffffffff) +
         ((_UNK_180128608 & 0xffffffff) * (uVar14 & 0xffffffff) +
          (uVar55 >> 0x20) * (_UNK_1801285f8 & 0xffffffff) << 0x20) +
         (_UNK_1801285d8 & 0xffffffff) * (uVar11 & 0xffffffff) +
         ((_UNK_1801285e8 & 0xffffffff) * (uVar11 & 0xffffffff) +
          uVar49 * (_UNK_1801285d8 & 0xffffffff) << 0x20) + lVar10) -
       ((auVar50._8_8_ & 0xffffffff) * (ulonglong)_UNK_1801286d8 +
        ((_UNK_180128748 & 0xffffffff) * (ulonglong)auVar50._8_4_ +
         (auVar50._8_8_ >> 0x20) * (ulonglong)_UNK_1801286d8 << 0x20) +
        (uVar32 & 0xffffffff) * (ulonglong)_UNK_180128728 +
        ((_UNK_180128738 & 0xffffffff) * (uVar32 & 0xffffffff) +
         (uVar32 >> 0x20) * (ulonglong)_UNK_180128728 << 0x20) +
        (uStack0000000000000068 & 0xffffffff) * (ulonglong)_UNK_180128708 +
        ((_UNK_180128718 & 0xffffffff) * (uStack0000000000000068 & 0xffffffff) +
         ((ulonglong)uStack0000000000000068 >> 0x20) * (ulonglong)_UNK_180128708 << 0x20) +
        (auVar15._8_8_ & 0xffffffff) * (ulonglong)_UNK_1801286e8 +
        ((_UNK_1801286f8 & 0xffffffff) * (ulonglong)uVar33 + uVar53 * _UNK_1801286e8 << 0x20) +
        (uVar55 & 0xffffffff) * (ulonglong)_UNK_1801286b8 +
        ((_UNK_1801286c8 & 0xffffffff) * (uVar14 & 0xffffffff) +
         (uVar55 >> 0x20) * (ulonglong)_UNK_1801286b8 << 0x20) +
        (uVar12 & 0xffffffff) * (ulonglong)_UNK_180128698 +
        ((_UNK_1801286a8 & 0xffffffff) * (uVar11 & 0xffffffff) + uVar49 * _UNK_180128698 << 0x20) +
       lVar10)) + _UNK_180128758;
  uStack0000000000000060 = uVar54;
  _DAT_183065628 = _DAT_1830655f8 ^ uVar9 ^ uVar54;
  _DAT_183065698 = (_DAT_183065698 ^ uVar9) + uVar54 ^ 0xe2e439c837b9b7a4;
  _DAT_183065828 = (_DAT_183065828 * 0x298aa927868d580f ^ _DAT_183065698) + uVar9;
  _DAT_183065670 = _DAT_183065828 ^ _DAT_183065698;
  uVar49 = uVar11 ^ uVar14;
  uVar14 = uVar14 & uVar11;
  uVar12 = uVar49 ^ 0x84222325 ^ _DAT_183065650;
  uVar9 = uVar14 * 2 ^ _DAT_183065978;
  lVar10 = (uVar49 ^ 0x84222325) + _DAT_183065978;
  lVar8 = _DAT_183065650 + uVar14 * 2;
  uVar26 = uVar12 + lVar10;
  uVar32 = uVar9 + lVar8;
  uVar12 = (uVar26 * 0x2000 | uVar26 >> 0x33) ^ uVar12;
  uVar9 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar9;
  _DAT_1830656f0 = uVar54;
  _DAT_183065620 =
       func_0x000184185900((uVar9 << 0x1d | uVar9 >> 0x23) - lVar8 ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - lVar10);
  uVar13 = (uint)(uVar49 >> 0x20);
  auVar45._8_4_ = (int)uVar49;
  auVar45._0_8_ = uVar49;
  auVar45._12_4_ = uVar13;
  auVar40._8_4_ = (int)uVar14;
  auVar40._0_8_ = uVar14;
  auVar40._12_4_ = (int)(uVar14 >> 0x20);
  uVar14 = uVar14 * 2;
  auVar41._8_8_ = auVar40._8_8_ * 2;
  auVar41._0_8_ = uVar14;
  uVar47 = (uint)(uVar14 >> 0x20);
  uVar23 = SUB164(auVar45 & auVar41,0);
  uVar12 = SUB168(auVar45 & auVar41,0);
  uVar25 = SUB164(auVar45 | auVar41,0);
  uVar26 = SUB168(auVar45 | auVar41,0);
  uVar38 = SUB164(auVar45 ^ auVar41,0);
  uVar9 = SUB168(auVar45 ^ auVar41,0);
  auVar4._8_8_ = _UNK_18001a718;
  auVar4._0_8_ = _DAT_18001a710;
  uVar33 = SUB164(auVar45 ^ auVar4,0);
  uVar12 = (((_DAT_1801287c0 & 0xffffffff) * (ulonglong)uVar38 +
             ((_DAT_1801287d0 & 0xffffffff) * (ulonglong)uVar38 +
              (uVar9 >> 0x20) * (_DAT_1801287c0 & 0xffffffff) << 0x20) +
             (_DAT_1801287a0 & 0xffffffff) * (ulonglong)uVar25 +
             ((_DAT_1801287b0 & 0xffffffff) * (ulonglong)uVar25 +
              (uVar26 >> 0x20) * (_DAT_1801287a0 & 0xffffffff) << 0x20) +
            (_DAT_180128780 & 0xffffffff) * (ulonglong)uVar23 +
            ((_DAT_180128790 & 0xffffffff) * (ulonglong)uVar23 +
             (uVar12 >> 0x20) * (_DAT_180128780 & 0xffffffff) << 0x20) +
            (_DAT_180128770 & 0xffffffff) * (uVar14 & 0xffffffff) +
            ((ulonglong)uVar47 * (_DAT_180128770 & 0xffffffff) +
             (_DAT_180128760 & 0xffffffff) * (uVar14 & 0xffffffff) << 0x20) +
            (uVar49 & 0xffffffff) * (_DAT_180128770 & 0xffffffff) +
            ((ulonglong)uVar13 * (_DAT_180128770 & 0xffffffff) +
             (uVar49 & 0xffffffff) * (_DAT_180128760 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar33 * (_DAT_180128840 & 0xffffffff) +
            ((_DAT_1801288b0 & 0xffffffff) * (ulonglong)uVar33 +
             (SUB168(auVar45 ^ auVar4,0) >> 0x20) * (_DAT_180128840 & 0xffffffff) << 0x20) +
           (ulonglong)uVar38 * (ulonglong)_DAT_180128890 +
           ((_DAT_1801288a0 & 0xffffffff) * (ulonglong)uVar38 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_180128890 << 0x20) +
           (ulonglong)uVar25 * (ulonglong)_DAT_180128870 +
           ((_DAT_180128880 & 0xffffffff) * (ulonglong)uVar25 +
            (uVar26 >> 0x20) * (ulonglong)_DAT_180128870 << 0x20) +
           (ulonglong)uVar23 * (ulonglong)_DAT_180128850 +
           ((_DAT_180128860 & 0xffffffff) * (ulonglong)uVar23 +
            (uVar12 >> 0x20) * (ulonglong)_DAT_180128850 << 0x20) +
           (uVar14 & 0xffffffff) * (ulonglong)_DAT_180128820 +
           ((_DAT_180128830 & 0xffffffff) * (uVar14 & 0xffffffff) +
            (ulonglong)uVar47 * (ulonglong)_DAT_180128820 << 0x20) +
           (uVar49 & 0xffffffff) * (ulonglong)_DAT_180128800 +
           ((_DAT_180128810 & 0xffffffff) * (uVar49 & 0xffffffff) +
            (ulonglong)uVar13 * (ulonglong)_DAT_180128800 << 0x20))) - _DAT_180128840;
  auVar21._8_8_ = uVar12;
  auVar21._0_8_ = uVar54 ^ 0x84222325;
  auVar15 = pshufb(auVar21 ^ _DAT_1801288c0,_DAT_1800170c0);
  _DAT_1830654e8 = _DAT_183065698 ^ _DAT_183065770 ^ uVar12;
  _DAT_1830659d8 = (_DAT_1830659d8 ^ _DAT_183065770) + uVar12 ^ 0x901ab84d734f9a91;
  _DAT_183065598 = (_DAT_183065598 * 0x244d5946e3384e0f ^ _DAT_1830659d8) + _DAT_183065770;
  _DAT_1830656a0 = _DAT_183065598 ^ _DAT_1830659d8;
  uVar9 = auVar15._8_8_ + auVar15._0_8_;
  uVar14 = uVar9 + _DAT_183065708;
  if (auVar15._4_4_ < 0) {
    uVar14 = _DAT_183065990 ^ uVar9;
  }
  _DAT_183065948 = uVar12;
  _DAT_183065930 = func_0x000184185900(SUB161(auVar21 ^ _DAT_1801288c0,5) ^ uVar14);
  uVar14 = uStack0000000000000060;
  uVar9 = _DAT_183065930 ^ uVar14;
  uVar13 = (uint)uStack0000000000000060;
  uVar23 = uStack0000000000000060._4_4_;
  auVar30._8_4_ = uVar13;
  auVar30._0_8_ = uVar14;
  auVar30._12_4_ = uVar23;
  uVar47 = (uint)(uVar12 >> 0x20);
  auVar22._8_4_ = (int)uVar12;
  auVar22._0_8_ = uVar12;
  auVar22._12_4_ = uVar47;
  auVar37 = auVar30 & auVar22;
  uVar25 = auVar37._0_4_;
  uStack0000000000000060 = auVar37._0_8_ >> 0x20;
  uStack0000000000000068 = auVar37._8_8_ >> 0x20;
  uVar33 = SUB164(auVar30 | auVar22,0);
  uVar49 = SUB168(auVar30 | auVar22,0);
  uVar38 = SUB164(auVar30 ^ auVar22,0);
  uVar32 = SUB168(auVar30 ^ auVar22,0);
  uVar26 = uVar12 ^ _DAT_18001a710;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar24;
  auVar5._8_8_ = _UNK_18001a718;
  auVar5._0_8_ = _DAT_18001a710;
  auVar15 = pblendw(auVar6,auVar5,0xf0);
  auVar18 = pshufb(auVar15 ^ _DAT_1801289e0,_DAT_1800170c0);
  _DAT_1830657b0 =
       (((uVar26 & 0xffffffff) * (ulonglong)_DAT_1801288f0 +
         ((uVar26 >> 0x20) * (ulonglong)_DAT_1801288f0 +
          (ulonglong)_DAT_1801288d0 * (uVar26 & 0xffffffff) << 0x20) +
         (ulonglong)_DAT_180128910 * (ulonglong)uVar38 +
         ((uVar32 >> 0x20) * (ulonglong)_DAT_180128910 +
          (ulonglong)_DAT_180128900 * (ulonglong)uVar38 << 0x20) +
         (ulonglong)uVar25 * (ulonglong)_DAT_180128910 +
         ((auVar37._0_8_ >> 0x20) * (ulonglong)_DAT_180128910 +
          (ulonglong)uVar25 * (ulonglong)_DAT_180128900 << 0x20) +
         (ulonglong)_DAT_1801288e0 * (uVar12 & 0xffffffff) + uVar14 +
         ((ulonglong)uVar47 * (ulonglong)_DAT_1801288e0 +
          (uVar12 & 0xffffffff) * (ulonglong)_DAT_1801288d0 << 0x20) +
        (ulonglong)_DAT_180128920 * (ulonglong)uVar33 +
        ((ulonglong)_DAT_180128930 * (ulonglong)uVar33 +
         (uVar49 >> 0x20) * (ulonglong)_DAT_180128920 << 0x20)) -
       ((ulonglong)uVar38 * (ulonglong)_DAT_1801289c0 +
        ((ulonglong)_DAT_1801289d0 * (ulonglong)uVar38 +
         (uVar32 >> 0x20) * (ulonglong)_DAT_1801289c0 << 0x20) +
        (ulonglong)uVar33 * (ulonglong)_DAT_1801289a0 +
        ((ulonglong)_DAT_1801289b0 * (ulonglong)uVar33 +
         (uVar49 >> 0x20) * (ulonglong)_DAT_1801289a0 << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_180128980 +
       ((ulonglong)_DAT_180128990 * (ulonglong)uVar25 + uStack0000000000000060 * _DAT_180128980 <<
       0x20) + (uVar12 & 0xffffffff) * (ulonglong)_DAT_180128970 +
               ((ulonglong)uVar47 * (ulonglong)_DAT_180128970 +
                (ulonglong)_DAT_180128960 * (uVar12 & 0xffffffff) << 0x20) +
               (ulonglong)uVar13 * (ulonglong)_DAT_180128970 +
               ((ulonglong)uVar23 * (ulonglong)_DAT_180128970 +
                (ulonglong)uVar13 * (ulonglong)_DAT_180128960 << 0x20))) + 0xf07ecade6fdc430d;
  _DAT_183065680 = _DAT_1830657b0 ^ uVar9;
  _DAT_1830656e8 = (_DAT_1830656e8 ^ uVar9) + _DAT_1830657b0 ^ 0x9a71dd3d98adbc05;
  _DAT_183065858 = (_DAT_183065858 * 0x1064e4d2a791da43 ^ _DAT_1830656e8) + uVar9;
  _DAT_183065698 = _DAT_183065858 ^ _DAT_1830656e8;
  uVar31 = _DAT_1830657b0 + uVar31;
  uVar9 = auVar18._8_8_ + auVar18._0_8_;
  uVar14 = uVar9 + _DAT_183065800;
  if (auVar18._4_4_ < 0) {
    uVar14 = _DAT_183065780 ^ uVar9;
  }
  _DAT_1830659c0 = func_0x000184185900(SUB161(auVar15 ^ _DAT_1801289e0,5) ^ uVar14);
  _DAT_1830658e8 = ~uVar11;
  _DAT_183065ad8 =
       (_DAT_183065ad8 ^ _DAT_1830659c0 & 0x7fffffffffffffff) + _DAT_1830658e8 ^ 0x44db1dd6efdaf2fd;
  _DAT_183065568 =
       (_DAT_183065568 * 0x7e348e3341137f9 ^ _DAT_183065ad8) + (_DAT_1830659c0 & 0x7fffffffffffffff)
  ;
  _DAT_183065458 = _DAT_183065568 ^ _DAT_183065ad8;
  uVar14 = (uVar24 ^ _DAT_183065720) + uVar24 + _DAT_1830655b8;
  uVar9 = (_DAT_1830658e8 ^ _DAT_1830655b8) + _DAT_1830658e8 + _DAT_183065720;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uVar24 ^ _DAT_183065720;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1830658e8 ^ _DAT_1830655b8;
  _DAT_1830657a0 =
       func_0x000184185900((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1830658e8 + _DAT_183065720) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - (uVar24 + _DAT_1830655b8));
  uVar14 = _DAT_1830657a0 << 8 | _DAT_1830657a0 >> 0x38;
  _DAT_183065680 = _DAT_183065680 ^ uVar14 ^ 0xd5db51cbde31ddb3;
  _DAT_1830657f0 = (_DAT_1830657f0 * -0x5653bb5f8ddf1e71 ^ _DAT_183065680) + uVar14;
  _DAT_183065368 = _DAT_1830657f0 ^ _DAT_183065680;
  _DAT_183065890 = 0;
  uVar14 = uVar31 ^ 0x84222325;
  uVar9 = ((_DAT_1830659b8 ^ uVar14) + (uVar14 & _DAT_1830659b8) * 2) * -_DAT_183065450;
  uVar9 = (uVar9 | _DAT_183065350) + (uVar9 & _DAT_183065350);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183065678 = func_0x000184185900((uVar9 | uVar14) + (uVar9 & uVar14));
  uVar14 = ~(_DAT_183065678 ^ uVar31) & uVar31;
  uVar13 = (uint)(uVar31 >> 0x20);
  uVar9 = uVar31 ^ _DAT_18001a710;
  uVar9 = (((ulonglong)_DAT_180128a30 * (uVar31 & 0xffffffff) +
            ((ulonglong)_DAT_180128a40 * (uVar31 & 0xffffffff) +
             (ulonglong)uVar13 * (ulonglong)_DAT_180128a30 << 0x20) +
           (ulonglong)_DAT_180128a10 * (uVar31 & 0xffffffff) +
           ((ulonglong)_DAT_180128a20 * (uVar31 & 0xffffffff) +
            (ulonglong)uVar13 * (ulonglong)_DAT_180128a10 << 0x20) +
           (ulonglong)_DAT_1801289f0 * (uVar31 & 0xffffffff) +
           ((ulonglong)_DAT_180128a00 * (uVar31 & 0xffffffff) +
            (ulonglong)uVar13 * (ulonglong)_DAT_1801289f0 << 0x20)) -
          ((uVar9 & 0xffffffff) * (ulonglong)_DAT_180128a60 +
           ((uVar9 >> 0x20) * (ulonglong)_DAT_180128a60 +
            (ulonglong)_DAT_180128a50 * (uVar9 & 0xffffffff) << 0x20) +
           (uVar31 & 0xffffffff) * (ulonglong)_DAT_180128a70 +
           ((ulonglong)_DAT_180128aa0 * (uVar31 & 0xffffffff) +
            (ulonglong)uVar13 * (ulonglong)_DAT_180128a70 << 0x20) +
          (ulonglong)_DAT_180128a80 * (uVar31 & 0xffffffff) +
          ((ulonglong)_DAT_180128a90 * (uVar31 & 0xffffffff) +
           (ulonglong)uVar13 * (ulonglong)_DAT_180128a80 << 0x20) +
          (uVar31 & 0xffffffff) * (ulonglong)_DAT_180128a60 +
          ((ulonglong)uVar13 * (ulonglong)_DAT_180128a60 +
           (uVar31 & 0xffffffff) * (ulonglong)_DAT_180128a50 << 0x20))) + 0xfce058b4d13f99f5;
  _DAT_183065628 = _DAT_183065768 ^ uVar14 ^ uVar9;
  _DAT_183065870 = (_DAT_183065870 ^ uVar14) + uVar9 ^ 0x54924db41f551e4a;
  _DAT_1830658f0 = (_DAT_1830658f0 * 0x7bf27895a519ed99 ^ _DAT_183065870) + uVar14;
  _DAT_183065a90 = _DAT_1830658f0 ^ _DAT_183065870;
  uVar14 = (uStack0000000000000090 ^ _DAT_183065a38) + uStack0000000000000090 + _DAT_1830655e0;
  uVar24 = (_DAT_1801277d0 ^ _DAT_1830655e0) + _DAT_1801277d0 + _DAT_183065a38;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ uStack0000000000000090 ^ _DAT_183065a38;
  uVar24 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ _DAT_1801277d0 ^ _DAT_1830655e0;
  _DAT_183065408 = uVar9;
  _DAT_183065650 =
       func_0x000184185900((uVar24 << 0x1d | uVar24 >> 0x23) - (_DAT_1801277d0 + _DAT_183065a38) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) -
                           (uStack0000000000000090 + _DAT_1830655e0));
  _DAT_183065960 = _DAT_183065960 ^ _DAT_183065650 & 0x7fffffffffffffff ^ 0x661f7a32443776a3;
  _DAT_183065978 =
       (_DAT_183065978 * -0x3661737f70b28705 ^ _DAT_183065960) +
       (_DAT_183065650 & 0x7fffffffffffffff);
  _DAT_1830658b8 = _DAT_183065978 ^ _DAT_183065960;
  _DAT_183065300 = 0;
  uVar14 = in_stack_00000098 ^ 0x84222325 ^ _DAT_183065338;
  lVar8 = (in_stack_00000098 ^ 0x84222325) + _DAT_183065440;
  uVar24 = uVar14 + lVar8;
  uVar11 = (uVar9 ^ _DAT_183065440) + _DAT_183065338 + uVar9;
  uVar14 = (uVar24 * 0x2000 | uVar24 >> 0x33) ^ uVar14;
  uVar24 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar9 ^ _DAT_183065440;
  _DAT_1830657c0 =
       func_0x000184185900((uVar24 << 0x1d | uVar24 >> 0x23) - (_DAT_183065338 + uVar9) ^
                           (uVar14 << 0x1d | uVar14 >> 0x23) - lVar8);
  _DAT_183065650 = uVar9 ^ in_stack_00000098;
  _DAT_1830656a0 =
       (_DAT_1830656a0 ^ in_stack_00000098 ^ _DAT_1830657c0) + _DAT_183065650 ^ 0xca8affeb7da81527;
  _DAT_1830653b0 =
       (_DAT_1830653b0 * -0x17ca8c93b35dddf1 ^ _DAT_1830656a0) +
       (in_stack_00000098 ^ _DAT_1830657c0);
  _DAT_183065758 = _DAT_1830653b0 ^ _DAT_1830656a0;
  in_stack_00000030 = _DAT_183065650;
  FUN_190de3220(_DAT_1830657c0,&stack0x00000028,*_DAT_18301ee50 + 0x24283,*_DAT_18301ee50 + 0x5a,
                0x1ad5);
  cVar7 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar7 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4184e17 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184184e17(void)

{
  int in_EAX;
  
  switch(in_EAX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4184f6a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184184f6a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dea1d0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180127aa8)();
  return;
}


// ----- block @ rva 0x41851a4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841851a4(void)

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


// ----- block @ rva 0x418527c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418527c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180127c88)();
  return;
}


// ----- block @ rva 0x418536d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18418536d(void)

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


// ----- block @ rva 0x4185470 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184185470(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_180127838)();
  return;
}


// ----- block @ rva 0x418547f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418547f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180127968)();
  return;
}


// ----- block @ rva 0x41857ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841857ef(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180127b58)();
  return;
}


// ----- block @ rva 0x418584d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418584d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_180127a78)();
  return;
}


// ----- block @ rva 0x418585e -----

void FUN_18418585e(void)

{
  return;
}


// ----- block @ rva 0x41858ca -----

void FUN_1841858ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

