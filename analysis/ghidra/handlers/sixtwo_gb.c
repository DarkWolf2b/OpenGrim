// ===== Lsixtwo/gb; aYQ ()Ljava/lang/Object; (handler @ image 18a4db5c0, runtime 6ffff1f3b5c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18a4db5c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Lsixtwo/gb; aYR (JJLjava/lang/Object;)Lsixtwo/ga; (handler @ image 18a4db750, runtime 6ffff1f3b750) =====
/* decompile failed: Exception while decompiling 18a4db750: process: timeout
 */

// ===== Lsixtwo/gb; aYS (J)Lsixtwo/ga; (handler @ image 18a6b19f0, runtime 6ffff21119f0) =====

void FUN_18a6b19f0(void)

{
  char cVar1;
  uint in_EAX;
  undefined8 uVar2;
  ulonglong unaff_RSI;
  longlong *plVar3;
  
  plVar3 = (longlong *)(ulonglong)in_EAX;
  uVar2 = FUN_190dd72e0(plVar3,*(undefined8 *)(unaff_RSI & 0xffffffff),0);
  cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
  switch(cVar1 == '\0') {
  case true:
    (**(code **)(*plVar3 + 0x70))(plVar3,uVar2,&UNK_182f702a8);
  }
  return;
}



// ===== Lsixtwo/gb; aYT (J)Lsixtwo/ga; (handler @ image 18a6b4f80, runtime 6ffff2114f80) =====
/* decompile failed: Exception while decompiling 18a6b4f80: process: timeout
 */

// ===== Lsixtwo/gb; aYU (Lsixtwo/fZ;)V (handler @ image 18a6b5190, runtime 6ffff2115190) =====

void FUN_18a6b5190(undefined8 param_1)

{
  undefined1 in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x00018a6b519b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1817de270 + (CONCAT71((int7)((ulonglong)param_1 >> 8),in_AL) & 0xffffffff) * 8))
            ();
  return;
}



// ===== Lsixtwo/gb; aYV (Lsixtwo/fZ;)V (handler @ image 18a6b5750, runtime 6ffff2115750) =====

void FUN_18a6b5750(undefined1 *param_1)

{
  undefined1 in_AL;
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI >> 4 | *unaff_RDI << 4;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00018a6b5761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1817b4260 + (CONCAT71((int7)((ulonglong)param_1 >> 8),in_AL) & 0xffffffff) * 8))
            ();
  return;
}



// ===== Lsixtwo/gb; a (J)J (handler @ image 18a6ec630, runtime 6ffff214c630) =====

void FUN_18a6ec630(undefined1 *param_1)

{
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00018a6ec63f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1817fe8f0 + ((ulonglong)param_1 >> 8 & 0xffffff) * 0x800))();
  return;
}



// ===== Lsixtwo/gb; b (J)V (handler @ image 18a6ed100, runtime 6ffff214d100) =====
/* decompile failed: Exception while decompiling 18a6ed100: process: timeout
 */

// ===== Lsixtwo/gb; a (Lsixtwo/ga;)V (handler @ image 18a6ed2f0, runtime 6ffff214d2f0) =====
/* decompile failed: Exception while decompiling 18a6ed2f0: process: timeout
 */

// ===== Lsixtwo/gb; hashCode ()I (handler @ image 18a6ed8d0, runtime 6ffff214d8d0) =====

void FUN_18a6ed8d0(longlong param_1)

{
  longlong in_RAX;
  
                    /* WARNING: Could not recover jumptable at 0x00018a6ed8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + in_RAX * 8))();
  return;
}



// ===== Lsixtwo/gb; equals (Ljava/lang/Object;)Z (handler @ image 18a4dbdb0, runtime 6ffff1f3bdb0) =====
/* decompile failed: Exception while decompiling 18a4dbdb0: process: timeout
 */

// ===== Lsixtwo/gb; b (Lsixtwo/ga;)Z (handler @ image 18a4dc1c0, runtime 6ffff1f3c1c0) =====
/* decompile failed: Exception while decompiling 18a4dc1c0: process: timeout
 */

// ===== Lsixtwo/gb; b ()[I (handler @ image 18a4dc5f0, runtime 6ffff1f3c5f0) =====
/* decompile failed: Exception while decompiling 18a4dc5f0: process: timeout
 */

// ===== Lsixtwo/gb; aYW (I)J (handler @ image 18a4dc7f0, runtime 6ffff1f3c7f0) =====
/* decompile failed: Exception while decompiling 18a4dc7f0: process: timeout
 */

// ===== Lsixtwo/gb; aYX (II)J (handler @ image 18a4dccd0, runtime 6ffff1f3ccd0) =====
/* decompile failed: Exception while decompiling 18a4dccd0: process: timeout
 */

// ===== Lsixtwo/gb; aYY (JII[I[J)J (handler @ image 18a4dd1c0, runtime 6ffff1f3d1c0) =====
/* decompile failed: Exception while decompiling 18a4dd1c0: process: timeout
 */

// ===== Lsixtwo/gb; aYZ ()V (handler @ image 18a4ea110, runtime 6ffff1f4a110) =====

void FUN_18a4ea110(byte *param_1)

{
  char cVar1;
  longlong in_RAX;
  byte unaff_BH;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\f';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *param_1 = *param_1 | unaff_BH;
                    /* WARNING: Could not recover jumptable at 0x00018a4ea118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + in_RAX * 8))();
  return;
}



// ===== Lsixtwo/gb; aZa (IILjava/util/ArrayList;Ljava/util/ArrayList;I)V (handler @ image 18a4eaaa0, runtime 6ffff1f4aaa0) =====
/* decompile failed: Exception while decompiling 18a4eaaa0: process: timeout
 */

// ===== Lsixtwo/gb; aZb (IIILjava/util/ArrayList;Ljava/util/ArrayList;)V (handler @ image 18a4eb130, runtime 6ffff1f4b130) =====

void FUN_18a4eb130(undefined1 *param_1)

{
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00018a4eb13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1817926d0 + ((ulonglong)param_1 >> 8 & 0xffffff) * 0x800))();
  return;
}



// ===== Lsixtwo/gb; aZc ()V (handler @ image 18a4ecd80, runtime 6ffff1f4cd80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18a4ecd80(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
    return;
  case true:
    (**(code **)(*unaff_RSI + 0x70))();
    (*_UNK_1817aa588)();
    return;
  }
}



// ===== Lsixtwo/gb; _bab653dcf48cf5170082af05b37ffda0 ()V (handler @ image 18a6b2c70, runtime 6ffff2112c70) =====

void FUN_18a6b2c70(ulonglong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018a6b2c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181839e00 + (param_1 & 0xffffffff) * 8))();
  return;
}



