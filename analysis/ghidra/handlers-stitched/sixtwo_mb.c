// ===== STITCHED CORPUS: sixtwo.mb =====
// handlers: 19  continuation blocks: 194  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x19c088', '0x2f6eb55', '0x2f6fb7a', '0x2f702a8', '0x7263176', '0x726325a', '0x726326d', '0xb45440', '0xb45cf8', '0xb45d08', '0xb45d18', '0xb45d28', '0xb45d38', '0xb45d48', '0xb45d58', '0xb45d68', '0xb45d78', '0xb45d88', '0xb45d98']

// ===== Lsixtwo/mb; _832e437a9fb934da9f8f77d37f2828f1 ()V (handler @ image 187263160, runtime 6fffeee73160) =====

void FUN_187263160(longlong *param_1)

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
  
  puStack_48 = &UNK_187263176;
  lVar3 = FUN_180001180();
  lVar3 = -lVar3;
  *(undefined8 *)(&stack0x000012f0 + lVar3) = unaff_XMM15_Qa;
  *(undefined8 *)(&stack0x000012f8 + lVar3) = unaff_XMM15_Qb;
  *(undefined8 *)(&stack0x000012e0 + lVar3) = unaff_XMM14_Qa;
  *(undefined8 *)(&stack0x000012e8 + lVar3) = unaff_XMM14_Qb;
  *(undefined8 *)(&stack0x000012d0 + lVar3) = unaff_XMM13_Qa;
  *(undefined8 *)(&stack0x000012d8 + lVar3) = unaff_XMM13_Qb;
  *(undefined8 *)(&stack0x000012c0 + lVar3) = unaff_XMM12_Qa;
  *(undefined8 *)(&stack0x000012c8 + lVar3) = unaff_XMM12_Qb;
  *(undefined8 *)(&stack0x000012b0 + lVar3) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x000012b8 + lVar3) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x000012a0 + lVar3) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x000012a8 + lVar3) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00001290 + lVar3) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00001298 + lVar3) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00001280 + lVar3) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x00001288 + lVar3) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x00001270 + lVar3) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00001278 + lVar3) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00001260 + lVar3) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00001268 + lVar3) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0x00001258 + lVar3) = 0xfffffffffffffffe;
  *(undefined8 *)(&stack0x00001250 + lVar3) = 0;
  *(undefined8 *)(&stack0x00001240 + lVar3) = 0;
  *(undefined8 *)(&stack0x00001238 + lVar3) = 0;
  *(undefined8 *)(&stack0x00001230 + lVar3) = 0;
  *(undefined8 *)(&stack0x00001248 + lVar3) = 0;
  *(undefined8 *)(&stack0x000011d0 + lVar3) = 0xf863c3fd76301bdd;
  *(undefined8 *)(&stack0x000011d8 + lVar3) = 0xfa43657121c0d1bf;
  *(undefined **)((longlong)&puStack_48 + lVar3) = &UNK_18726325a;
  uVar4 = BLOB_DECRYPTOR(image-addr,resolved-ptr,len)();
  *(undefined8 *)(&stack0x00001250 + lVar3) = uVar4;
  pcVar1 = *(code **)(param_1 + JNI->ExceptionCheck /*0x720*/);
  *(undefined **)((longlong)&puStack_48 + lVar3) = &UNK_18726326d;
  cVar2 = (*pcVar1)(param_1);
                    /* WARNING: Jumptable at 0x00018726327f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b50d10 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjF ()V (handler @ image 1871f9820, runtime 6fffeee09820) =====

void FUN_1871f9820(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001871f9908 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b3b220 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjG ()Ljava/util/List; (handler @ image 18720f700, runtime 6fffeee1f700) =====

void FUN_18720f700(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018720f79e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b40df0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjH (Ljava/util/List;Ljava/nio/file/Path;)V (handler @ image 18739b7c0, runtime 6fffeefab7c0) =====

void FUN_18739b7c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018739b876 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b8d918 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjI ()Ljava/nio/file/Path; (handler @ image 1873e2620, runtime 6fffeeff2620) =====

void FUN_1873e2620(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001873e26cf did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b9c208 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjJ (Ljava/lang/String;)Ljava/nio/file/Path; (handler @ image 18742f400, runtime 6fffef03f400) =====

void FUN_18742f400(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018742f4b2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180bab638 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjK (Ljava/nio/file/Path;Ljava/util/List;)Ljava/util/List; (handler @ image 1874c6510, runtime 6fffef0d6510) =====

void FUN_1874c6510(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001874c65c5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180bc7e58 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjL (Ljava/util/List;)Ljava/lang/String; (handler @ image 1875b2690, runtime 6fffef1c2690) =====

void FUN_1875b2690(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001875b2749 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c07798 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjM (Ljava/nio/file/Path;)Ljava/lang/String; (handler @ image 1877843c0, runtime 6fffef3943c0) =====

void FUN_1877843c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001877844a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c6c880 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjN (Ljava/lang/String;)Ljava/lang/String; (handler @ image 18778c030, runtime 6fffef39c030) =====

void FUN_18778c030(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018778c0f1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c6ea70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjO (Ljava/lang/String;)Ljava/nio/file/Path; (handler @ image 18778fce0, runtime 6fffef39fce0) =====

void FUN_18778fce0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2e9,0x12)
      /* POOL[0x2e9,0x12]: ang/invoke/MethodH */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018778fd29 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c6fce0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjP (Ljava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 187221960, runtime 6fffeee31960) =====

undefined8 FUN_187221960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/mb; cjQ ([B)Ljava/lang/String; (handler @ image 1872219f0, runtime 6fffeee319f0) =====

void FUN_1872219f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000187221a90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b45360 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/mb; cjR (IJ)Ljava/lang/String; (handler @ image 1872494e0, runtime 6fffeee594e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872494e0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar8 = (uRam0000000183182b50 ^ _UNK_180b4ba40) + uRam0000000183182fc8 + 0x9f73e17c2cfb5fd0;
  uVar10 = (uRam0000000183182fc8 ^ _UNK_180b4ba48) + uRam0000000183182b50 + 0xa5a4388b98b149dc;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183182b50 ^ _UNK_180b4ba40;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183182fc8 ^ _UNK_180b4ba48;
  uRam0000000183182ce8 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183182b50 + 0xa5a4388b98b149dc) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183182fc8 + 0x9f73e17c2cfb5fd0));
  uVar8 = uRam0000000183182ce8 << 0x33 | uRam0000000183182ce8 >> 0xd;
  uVar10 = uVar8 >> 1 | uVar8;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ uVar8;
  uRam00000001831831e0 = (uRam00000001831831e0 ^ uVar8) + 0x3ad7d9f730683529 ^ 0xbc2e3b8327deac1d;
  uRam00000001831832a0 = (uRam00000001831832a0 * -0x332abe115b0dc2a1 ^ uRam00000001831831e0) + uVar8
  ;
  uRam0000000183183120 = uRam00000001831832a0 ^ uRam00000001831831e0;
  uRam00000001831832f8 = 0x3ad7d9f730683529;
  uVar8 = (~uRam0000000183182d48 + 0x58fb4eb3597029c1) *
          ((uRam0000000183182f98 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183182f98 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam0000000183182be0) + (uVar8 & uRam0000000183182be0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182be0 =
       func_0x00018724ffe0((uVar8 | 0x58fb4eb3dd520ae5) + (uVar8 & 0x58fb4eb3dd520ae5));
  uRam00000001831832d8 =
       (uRam00000001831832d8 ^ uRam0000000183182f68) + 0xa704b14ca68fd640 ^ 0x44d49c79e21105ac;
  uRam0000000183182e50 =
       (uRam0000000183182e50 * 0x21b19cce7941db55 ^ uRam00000001831832d8) + uRam0000000183182f68;
  uRam0000000183183188 = uRam0000000183182e50 ^ uRam00000001831832d8;
  uRam0000000183182bb8 = 0xa704b14ca68fd640;
  uVar8 = (uRam0000000183182be0 ^ _UNK_180b4ba50) + uRam0000000183183078 + 0x84225cda;
  uVar10 = (uRam0000000183183078 ^ _UNK_180b4ba58) + uRam0000000183182be0 + 0x58fb4eb3597029c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183182be0 ^ _UNK_180b4ba50;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183183078 ^ _UNK_180b4ba58;
  uRam0000000183182e08 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183182be0 + 0x58fb4eb3597029c0) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183183078 + 0x84225cda));
  uVar8 = uRam0000000183182e08 >> 1 | uRam0000000183182e08;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183182e08;
  uRam0000000183183018 = uRam0000000183182f28 ^ uVar8 ^ 0x58fb4eb35970a9bf;
  uRam0000000183182cd0 = (uRam0000000183182cd0 ^ uVar8) + 0x58fb4eb35970a9bf ^ 0x3b48a0eea59aeef5;
  uRam0000000183183180 =
       (lRam0000000183182f10 * 0x1aa8189c7b38326d ^ uRam0000000183182cd0) + uVar8 ^
       uRam0000000183182cd0;
  lRam0000000183182f10 = 0x58fb4eb35970a9bf;
  uVar8 = (uRam0000000183182e30 ^ _UNK_180b4ba60) + uRam00000001831832d8 + 0x58fb4eb3dd528a9a;
  uVar10 = (uRam00000001831832d8 ^ _UNK_180b4ba68) + uRam0000000183182e30 + 0xa704b14ca68fd640;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183182e30 ^ _UNK_180b4ba60;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831832d8 ^ _UNK_180b4ba68;
  uRam0000000183182bb0 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183182e30 + 0xa704b14ca68fd640) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831832d8 + 0x58fb4eb3dd528a9a));
  uVar8 = uRam0000000183182bb0 ^ 0x4797114f35c119c0;
  uRam0000000183182f28 = uRam00000001831831e0 ^ uVar8 ^ 0x7fff;
  uRam00000001831832d0 = (uRam00000001831832d0 ^ uVar8) + 0x7fff ^ 0x70b8993bc8556ca5;
  uRam0000000183182d58 = (uRam0000000183182d58 * -0x5d718210d6fd21a9 ^ uRam00000001831832d0) + uVar8
  ;
  uRam0000000183182ce8 = uRam0000000183182d58 ^ uRam00000001831832d0;
  uRam0000000183182de8 = 0x7fff;
  uVar8 = (~uRam0000000183183158 + 0x4f402d937cdf75c4) *
          ((uRam0000000183182c10 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183182c10 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam0000000183182bf8) + (uVar8 & uRam0000000183182bf8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182d50 =
       func_0x00018724ffe0((uVar8 | 0x4f402d93f8fd56e6) + (uVar8 & 0x4f402d93f8fd56e6));
  uVar8 = (uRam0000000183182d50 & 0xfffff) << 0x12 | uRam0000000183182d50 >> 0x2e;
  uRam0000000183182c18 = (uRam0000000183182c18 ^ uVar8) + 0xb0bfd26c83208a3d ^ 0x46755911b1e67f61;
  uRam00000001831832b8 = (uRam00000001831832b8 * 0x737aac9d6551b7ab ^ uRam0000000183182c18) + uVar8;
  uRam0000000183183110 = uRam00000001831832b8 ^ uRam0000000183182c18;
  uRam0000000183182ee0 = 0xb0bfd26c83208a3d;
  uVar8 = (uRam0000000183183140 ^ _UNK_180b4ba70) + uRam0000000183183030 + 0x84225cda;
  uVar10 = (uRam0000000183183030 ^ _UNK_180b4ba78) + uRam0000000183183140 + 0x4f402d937cdf75c3;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183183140 ^ _UNK_180b4ba70;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183183030 ^ _UNK_180b4ba78;
  uRam0000000183182cc0 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam0000000183183140 + 0x4f402d937cdf75c3) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183183030 + 0x84225cda));
  uVar8 = (ulonglong)(~(uint)uRam0000000183182cc0 & 0x7fff);
  uRam0000000183182e38 = uRam0000000183183128 ^ uVar8 ^ 0x4f402d937cdff5c2;
  uRam0000000183182c18 = (uRam0000000183182c18 ^ uVar8) + 0x4f402d937cdff5c2 ^ 0x583837d81e5862ab;
  uRam00000001831832f8 = (uRam00000001831832f8 * 0x62a9141fc36264c7 ^ uRam0000000183182c18) + uVar8;
  uRam0000000183182fc0 = uRam00000001831832f8 ^ uRam0000000183182c18;
  uRam0000000183183070 = 0x4f402d937cdff5c2;
  uVar8 = (~uRam0000000183182ff0 + 0xb6a96b469cf9b91) *
          ((uRam0000000183183118 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183183118 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam0000000183183038) + (uVar8 & uRam0000000183183038);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182fd8 =
       func_0x00018724ffe0((uVar8 | 0xb6a96b4ededb8b5) + (uVar8 & 0xb6a96b4ededb8b5));
  uRam0000000183183270 =
       (uRam0000000183183270 ^ uRam0000000183182fd8) + 0xf495694b96306470 ^ 0xa0e4cdb85c8ca566;
  uRam0000000183182c80 =
       (uRam0000000183182c80 * -0x60aa39f8cc48c4b ^ uRam0000000183183270) + uRam0000000183182fd8;
  uRam00000001831832e0 = uRam0000000183182c80 ^ uRam0000000183183270;
  uRam0000000183183248 = 0xf495694b96306470;
  uVar8 = (~uRam00000001831831a8 + 0x3ad7d9f73068352a) *
          ((uRam0000000183182f60 ^ 0xffffee3333985cd8) +
          (uRam0000000183182f60 & 0x7fffee3333985cd8) * 2);
  uVar8 = (uVar8 | uRam0000000183182f28) + (uVar8 & uRam0000000183182f28);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uVar8 = func_0x00018724ffe0((uVar8 | 0xc52837c403f069f1) + (uVar8 & 0xc52837c403f069f1));
  uRam0000000183183060 = uRam0000000183183020 ^ uVar8 ^ 0x3ad7c82ae822b526;
  uRam0000000183182e00 = 0x6bde947921271c10;
  uRam00000001831830f0 = (uRam00000001831830f0 * 0x34465b90c173cabd ^ 0x6bde947921271c10) + uVar8;
  uRam0000000183182fb8 = uRam00000001831830f0 ^ 0x6bde947921271c10;
  uRam0000000183183268 = 0x3ad7c82ae822b526;
  lRam0000000183182fe8 = func_0x00018724ffe0(uRam00000001831832c8 ^ 0xbb971801ced5d0fc);
  uRam0000000183182f38 =
       (uRam0000000183182f38 ^ lRam0000000183182fe8 * 0x2a022808cb4daa69) + 0x3ad7c83330283529 ^
       0x1a5b01ff27749861;
  uRam0000000183182c10 =
       (uRam0000000183182c10 * 0x61e0ad3b7079750f ^ uRam0000000183182f38) +
       lRam0000000183182fe8 * 0x2a022808cb4daa69;
  uRam00000001831830b0 = uRam0000000183182c10 ^ uRam0000000183182f38;
  uRam0000000183182cf8 = 0x3ad7c83330283529;
  uVar8 = (~uRam0000000183182dd0 + 0x75af906660506a53) *
          ((uRam0000000183182ca0 ^ 0xc52837c403f069f1) +
          (uRam0000000183182ca0 & 0x452837c403f069f1) * 2);
  uVar8 = (uVar8 | uRam0000000183182e70) + (uVar8 & uRam0000000183182e70);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831832b8 =
       func_0x00018724ffe0((uVar8 | 0xb087a7a263a003a3) + (uVar8 & 0xb087a7a263a003a3));
  uVar8 = uRam00000001831832b8 & 0x1ffffffffff;
  uRam00000001831831d8 = uRam00000001831831f8 ^ uVar8 ^ 0x3ad7c82ae822b526;
  uRam0000000183182b50 = (uRam0000000183182b50 ^ uVar8) + 0x3ad7c82ae822b526 ^ 0x54b0cd4e74edcfd6;
  uRam00000001831831f0 = (uRam00000001831831f0 * -0x2733ccd59c4a34ff ^ uRam0000000183182b50) + uVar8
  ;
  uRam0000000183182bc8 = uRam00000001831831f0 ^ uRam0000000183182b50;
  uRam0000000183182eb0 = 0x3ad7c82ae822b526;
  uVar8 = ((uRam0000000183182fe0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183182fe0 & 0x84225cda) * 2) * -uRam00000001831830a0;
  uVar8 = (uVar8 | uRam0000000183182b08) + (uVar8 & uRam0000000183182b08);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183183108 =
       func_0x00018724ffe0((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uRam00000001831831a8 = uRam0000000183182f80 ^ uRam0000000183183108 ^ 0x7fff;
  uRam0000000183183118 = (uRam0000000183183118 ^ uRam0000000183183108) + 0x7fff ^ 0xc6702421a30b749c
  ;
  uRam0000000183182ca8 =
       (uRam0000000183182ca8 * 0x3a5eeb855250a7d ^ uRam0000000183183118) + uRam0000000183183108;
  uRam00000001831831c8 = uRam0000000183182ca8 ^ uRam0000000183183118;
  uRam0000000183182b78 = 0x7fff;
  uVar8 = ~uRam0000000183183228 *
          ((uRam0000000183182e90 ^ 0xffffee3333985cd8) +
          (uRam0000000183182e90 & 0x7fffee3333985cd8) * 2);
  uVar8 = (uVar8 | uRam0000000183183098) + (uVar8 & uRam0000000183183098);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182b00 = func_0x00018724ffe0((uVar8 | 0x11cccc67a327) + (uVar8 & 0x11cccc67a327));
  uVar8 = ~uRam0000000183182b00;
  uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar8;
  uRam0000000183183068 = (uRam0000000183183068 ^ uVar8) + 0x11cc48458002 ^ 0xc7facde9931dc25a;
  uRam0000000183182e20 = (uRam0000000183182e20 * 0x1f89b870d8f000e3 ^ uRam0000000183183068) + uVar8;
  uRam0000000183183240 = uRam0000000183182e20 ^ uRam0000000183183068;
  uRam00000001831831e0 = 0x11cc48458002;
  uRam0000000183182e58 = func_0x00018724ffe0(uRam0000000183182bb8 ^ 0xf74c90eab670cb70);
  uVar8 = ~uRam0000000183182e58 << 0x31 | ~uRam0000000183182e58 >> 0xf;
  uRam0000000183183108 = uRam0000000183183108 ^ uVar8 ^ 0xe3c5a348698aae2f;
  uRam0000000183182b60 = (uRam0000000183182b60 * -0x7f4652f8d6675f2b ^ uRam0000000183183108) + uVar8
  ;
  uRam0000000183182c30 = uRam0000000183182b60 ^ uRam0000000183183108;
  uRam0000000183183010 = 0;
  uVar8 = (uRam0000000183182f58 ^ 0x84225cda) + uRam0000000183182bc8 + 0x84225cda;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183182f58 ^ 0x84225cda;
  uVar10 = ((uRam0000000183182bc8 + uRam0000000183182f58) * 0x2000 |
           uRam0000000183182bc8 + uRam0000000183182f58 >> 0x33) ^ uRam0000000183182bc8;
  uRam0000000183183130 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) - uRam0000000183182f58 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183182bc8 + 0x84225cda));
  uVar8 = uRam0000000183183130 - (uRam0000000183183130 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183183130;
  uRam00000001831832b8 = uRam0000000183182cf8 ^ uVar8 ^ 0x7fff;
  uRam0000000183182f28 = (uRam0000000183182f28 ^ uVar8) + 0x7fff ^ 0x978d6c3abf7cc835;
  uRam0000000183183188 = (uRam0000000183183188 * -0x5f620586f70538d7 ^ uRam0000000183182f28) + uVar8
  ;
  uRam00000001831831c8 = uRam0000000183183188 ^ uRam0000000183182f28;
  uRam00000001831832a0 = 0x7fff;
  uVar8 = (uRam00000001831832e0 ^ _UNK_180b4ba80) + uRam0000000183182dd0 + 0xc53ece2237a277bd;
  uVar10 = (uRam0000000183182dd0 ^ _UNK_180b4ba88) + uRam00000001831832e0 + 0xc53ece22b3805498;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831832e0 ^ _UNK_180b4ba80;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183182dd0 ^ _UNK_180b4ba88;
  uRam00000001831830c8 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831832e0 + 0xc53ece22b3805498) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183182dd0 + 0xc53ece2237a277bd));
  uRam0000000183182b00 = uRam0000000183182b00 ^ uRam00000001831830c8 ^ 0xa0ef27ae5890e350;
  uRam00000001831832f8 =
       (uRam00000001831832f8 * -0x189e48d7104cff0f ^ uRam0000000183182b00) + uRam00000001831830c8;
  uRam0000000183183290 = uRam00000001831832f8 ^ uRam0000000183182b00;
  uRam00000001831830a8 = 0;
  uRam0000000183182d10 = func_0x00018724ffe0(uRam0000000183182d18 + 0x54007c560021ff ^ 0x51);
  uVar8 = uRam0000000183182d10 & 0xfffffffffff80000;
  uRam0000000183183068 = uRam0000000183182c30 ^ uVar8 ^ 0x7fff;
  uRam0000000183183290 = (uRam0000000183183290 ^ uVar8) + 0x7fff ^ 0xc266db3ac3a72f82;
  uRam0000000183183150 = (uRam0000000183183150 * -0x6c784f5acc80823b ^ uRam0000000183183290) + uVar8
  ;
  uRam0000000183182be0 = uRam0000000183183150 ^ uRam0000000183183290;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_180b4ba90,_UNK_1800170c0);
  uRam0000000183182c68 = 0x7fff;
  uVar10 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar10 + uRam0000000183182fc0;
  if (auVar7._4_4_ < 0) {
    uVar8 = uRam0000000183182c90 ^ uVar10;
  }
  uRam0000000183182e60 = func_0x00018724ffe0(SUB161(auVar6 ^ _UNK_180b4ba90,5) ^ uVar8);
  uVar3 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar3;
  uRam0000000183182e78 =
       (uRam0000000183182e78 ^ uRam0000000183182e60 & 0x1ffffffffffffff) + uVar4 ^
       0x8fcb442677955662;
  uRam00000001831832f8 =
       (uRam00000001831832f8 * -0xa38ad4d8328dfd5 ^ uRam0000000183182e78) +
       (uRam0000000183182e60 & 0x1ffffffffffffff);
  uRam0000000183182ce8 = uRam00000001831832f8 ^ uRam0000000183182e78;
  uVar10 = (ulonglong)param_3;
  uVar8 = uVar4 ^ 0x84222325 ^ uRam0000000183182cf0;
  lVar5 = (uVar4 ^ 0x84222325) + uRam0000000183183258;
  uVar9 = uVar8 + lVar5;
  uVar11 = (uVar10 ^ uRam0000000183183258) + uRam0000000183182cf0 + uVar10;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uVar9 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar10 ^ uRam0000000183183258;
  uRam0000000183182c78 = uVar4;
  uRam0000000183183140 =
       func_0x00018724ffe0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183182cf0 + uVar10) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar5);
  uVar8 = uRam0000000183183140 << 0x39 | uRam0000000183183140 >> 7;
  uVar4 = (uVar4 + uVar10) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183182d08 = (uRam0000000183182d08 ^ uVar8) + uVar4 ^ 0xd46279799fa378b5;
  uRam0000000183183068 = (uRam0000000183183068 * 0x5c325ea91209e0ef ^ uRam0000000183182d08) + uVar8;
  uRam0000000183182d00 = uRam0000000183183068 ^ uRam0000000183182d08;
  uVar4 = uVar4 & 0xffffffff;
  uVar8 = (uRam0000000183183238 ^ _UNK_180b4baa0) + uRam0000000183182c28 + 0x7638d2d;
  uVar10 = (uRam0000000183182c28 ^ _UNK_180b4baa8) + uRam0000000183183238 + 0xbd57df4f;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183183238 ^ _UNK_180b4baa0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183182c28 ^ _UNK_180b4baa8;
  uRam0000000183182f20 = uVar4;
  uRam00000001831830c8 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183183238 + 0xbd57df4f) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183182c28 + 0x7638d2d));
  uVar10 = uRam00000001831830c8 ^ 0x61148b4c47d40270;
  uVar8 = uVar10 >> 1 | uVar10;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar10) & 0x7fffffffffffffff;
  uRam0000000183183178 = (uRam0000000183183178 ^ uVar8) + 0xbf57ff4f ^ 0xc937a1f2a153331a;
  uRam0000000183182d20 = (uRam0000000183182d20 * -0x41a6be7db433d4d9 ^ uRam0000000183183178) + uVar8
  ;
  uRam0000000183182f28 = uRam0000000183182d20 ^ uRam0000000183183178;
  uRam0000000183182d58 = 0xbf57ff4f;
  uRam0000000183183110 = func_0x00018724ffe0(uRam0000000183182f88 + 0xff48fff1a40040ff ^ 0x1a);
  uVar8 = ((uRam0000000183183110 << 1 | (ulonglong)((longlong)uRam0000000183183110 < 0)) ^
          0xe6196e5c) & 0x7ffffffffffff;
  uRam00000001831832e8 = (uRam00000001831832e8 ^ uVar8) + 0xb3e198f9 ^ 0x14fd9e45470334c0;
  uRam0000000183182cb0 = (uRam0000000183182cb0 * -0x1f3f4fd6a76914a5 ^ uRam00000001831832e8) + uVar8
  ;
  uRam0000000183182e68 = uRam0000000183182cb0 ^ uRam00000001831832e8;
  uRam0000000183183200 = 0xb3e198f9;
  uVar8 = (uRam0000000183182f30 ^ _UNK_180b4bab0) + uRam0000000183182c50 + 0x84222325;
  uVar10 = (uRam0000000183182c50 ^ _UNK_180b4bab8) + uRam0000000183182f30 + 0xfa0cc140;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183182f30 ^ _UNK_180b4bab0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183182c50 ^ _UNK_180b4bab8;
  uRam0000000183182b08 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183182f30 + 0xfa0cc140) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183182c50 + 0x84222325));
  uVar8 = uRam0000000183182b08 - (uRam0000000183182b08 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
           uRam0000000183182b08;
  uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar10;
  uRam0000000183182e28 = (uRam0000000183182e28 ^ uVar10) - 0xfa0cc140 ^ 0x6d948b713ff8f44f;
  uRam0000000183182f00 = (uRam0000000183182f00 * 0x5305f81b2fcf57dd ^ uRam0000000183182e28) + uVar10
  ;
  uRam00000001831830e8 = uRam0000000183182f00 ^ uRam0000000183182e28;
  uRam00000001831832c8 = 0x5f33ec0;
  uRam0000000183183270 = func_0x00018724ffe0(uRam0000000183182b60 ^ 0x56ffc85e0024ee);
  uVar8 = uRam0000000183183270 - (uRam0000000183183270 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183183270) & 0x1ffffffffffff;
  uRam0000000183182e88 = uRam00000001831831b0 ^ uVar8 ^ 0x100000907;
  uRam0000000183182cf0 = (uRam0000000183182cf0 ^ uVar8) + 0x100000907 ^ 0x6d6da6d5e5d93d39;
  uRam0000000183182b60 = (uRam0000000183182b60 * -0x4bd8a5223ecd2d79 ^ uRam0000000183182cf0) + uVar8
  ;
  uRam0000000183182dc0 = uRam0000000183182b60 ^ uRam0000000183182cf0;
  uRam0000000183183188 = 0x907;
  uVar8 = (~uRam0000000183182bc8 + 0x47724601) *
          ((uRam0000000183182ea8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183182ea8 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam0000000183182b20) + (uVar8 & uRam0000000183182b20);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182bc0 =
       func_0x00018724ffe0((uVar8 | 0xc3506525) + (ulonglong)((uint)uVar8 & 0xc3506525));
  uRam0000000183183178 =
       (uRam0000000183183178 ^ uRam0000000183182bc0 & 0x7ffffffffffff) - 0x47724600 ^
       0x6417186f7623db58;
  uRam0000000183183040 =
       (uRam0000000183183040 * -0x1e73d8317362acc7 ^ uRam0000000183183178) +
       (uRam0000000183182bc0 & 0x7ffffffffffff);
  uRam00000001831831d0 = uRam0000000183183040 ^ uRam0000000183183178;
  uRam00000001831831d8 = 0xb88dba00;
  uVar8 = (~uRam0000000183182ef8 + 0xb88dba01) *
          ((uRam0000000183182f20 ^ 0xc3506c22) +
          (ulonglong)((uint)uRam0000000183182f20 & 0xc3506c22) * 2);
  uVar8 = (uVar8 | uRam00000001831830b0) + (uVar8 & uRam00000001831830b0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182d30 =
       func_0x00018724ffe0((uVar8 | 0x7bddd622) + (ulonglong)((uint)uVar8 & 0x7bddd622));
  uVar8 = uRam0000000183182d30 ^ 0xb88db000;
  uRam0000000183182c90 = uRam0000000183182c90 ^ uVar8 ^ 0x100000907;
  uRam0000000183183078 = (uRam0000000183183078 ^ uVar8) + 0x100000907 ^ 0x55d163e772e8183c;
  uRam0000000183182ce8 = (uRam0000000183182ce8 * 0x3384481c2a0d1d91 ^ uRam0000000183183078) + uVar8;
  uRam0000000183182b78 = uRam0000000183182ce8 ^ uRam0000000183183078;
  uRam0000000183183120 = 0x907;
  uVar8 = (uRam0000000183182da8 ^ _UNK_180b4bac0) + uRam0000000183182db0 + 0x84222325;
  uVar10 = (uRam0000000183182db0 ^ _UNK_180b4bac8) + uRam0000000183182da8 + 0xea6f5440;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183182da8 ^ _UNK_180b4bac0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183182db0 ^ _UNK_180b4bac8;
  uRam0000000183182c10 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183182da8 + 0xea6f5440) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183182db0 + 0x84222325));
  uVar8 = uRam0000000183182c10 & 0xfffffffffffc0000;
  uVar10 = uVar8 >> 1 | uVar8;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar8;
  uRam0000000183182d18 = (uRam0000000183182d18 ^ uVar8) - 0xea6f5440 ^ 0x2baad6d762e519c8;
  uRam0000000183182d10 = (uRam0000000183182d10 * -0x4d377d18631d80ed ^ uRam0000000183182d18) + uVar8
  ;
  uRam0000000183182e80 = uRam0000000183182d10 ^ uRam0000000183182d18;
  uRam00000001831830b0 = 0x1590abc0;
  uVar8 = (~uRam00000001831831c8 + 0xea6f5441) *
          ((uRam0000000183182c80 ^ 0x84222a22) +
          (ulonglong)((uint)uRam0000000183182c80 & 0x84222a22) * 2);
  uVar8 = (uVar8 | uRam0000000183182fc8) + (uVar8 & uRam0000000183182fc8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182f88 =
       func_0x00018724ffe0((uVar8 | 0x6e4d7e62) + (ulonglong)((uint)uVar8 & 0x6e4d7e62));
  uVar8 = uRam0000000183182f88 ^ 0x907;
  uRam0000000183183150 = uRam0000000183182ca8 ^ uVar8 ^ 0xea6f5d47;
  uRam0000000183182b28 = (uRam0000000183182b28 ^ uVar8) + 0xea6f5d47 ^ 0x469c90fe9ae7fe12;
  uRam0000000183182f18 = (uRam0000000183182f18 * -0x61e4b8648246c4b5 ^ uRam0000000183182b28) + uVar8
  ;
  uRam0000000183182ce0 = uRam0000000183182f18 ^ uRam0000000183182b28;
  uRam0000000183182b70 = 0xea6f5d47;
  uVar8 = (~uRam0000000183182e10 + 0x1590abc1) *
          ((uRam0000000183182b58 ^ 0x6e4d7e62) +
          (ulonglong)((uint)uRam0000000183182b58 & 0x6e4d7e62) * 2);
  uVar8 = (uVar8 | uRam0000000183182b98) + (uVar8 & uRam0000000183182b98);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183183070 =
       func_0x00018724ffe0((uVar8 | 0x7bddd5a2) + (ulonglong)((uint)uVar8 & 0x7bddd5a2));
  uVar8 = (uRam0000000183183070 ^ 0xffffffc7) & 0x7fffffffffffffff;
  uRam0000000183183228 = uRam0000000183182bf8 ^ uVar8 ^ 0x100000907;
  uRam0000000183182ed8 = (uRam0000000183182ed8 ^ uVar8) + 0x100000907 ^ 0x1421a4abee0c397d;
  uRam0000000183182e28 = (uRam0000000183182e28 * 0xe450b38a35f4909 ^ uRam0000000183182ed8) + uVar8;
  uRam0000000183182fd8 = uRam0000000183182e28 ^ uRam0000000183182ed8;
  uRam00000001831831c8 = 0x907;
  uVar8 = (~uRam0000000183182f40 + 0xb3e198fa) *
          ((uRam0000000183182ea0 ^ 0x3b75dc6a) +
          (ulonglong)((uint)uRam0000000183182ea0 & 0x3b75dc6a) * 2);
  uVar8 = (uVar8 | uRam0000000183182cc0) + (uVar8 & uRam0000000183182cc0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182e90 =
       func_0x00018724ffe0((uVar8 | 0x88944493) + (ulonglong)((uint)uVar8 & 0x88944493));
  uVar8 = uRam0000000183182e90 ^ 0x867326314e7ca32e;
  uRam0000000183183040 = uRam00000001831832c0 ^ uVar8 ^ 0x173399848;
  uRam0000000183183070 = (uRam0000000183183070 ^ uVar8) + 0x173399848 ^ 0x49d7a2faa12de989;
  uRam0000000183182fb0 = (uRam0000000183182fb0 * -0x342a75b7dd4923df ^ uRam0000000183183070) + uVar8
  ;
  uRam0000000183182b00 = uRam0000000183182fb0 ^ uRam0000000183183070;
  uRam0000000183182e78 = 0x73399848;
  uRam0000000183182bd0 = func_0x00018724ffe0(uRam0000000183182b60 + 0x3bff8772ff73ff ^ 0x6c);
  uVar8 = (uRam0000000183182bd0 ^ 0x867326314e7ca32e) << 0x3b |
          (uRam0000000183182bd0 ^ 0x867326314e7ca32e) >> 5;
  uRam0000000183182c38 = (uRam0000000183182c38 ^ uVar8) + 0xb3419849 ^ 0x1725943a7d68e8d1;
  uRam0000000183183070 = (uRam0000000183183070 * -0x1068218a5760e8d ^ uRam0000000183182c38) + uVar8;
  uRam0000000183182f08 = uRam0000000183183070 ^ uRam0000000183182c38;
  lRam0000000183182f10 = 0xb3419849;
  uVar8 = ((uRam00000001831832e0 ^ 0x84222a22) +
          (ulonglong)((uint)uRam00000001831832e0 & 0x84222a22) * 2) * -uRam00000001831830c8;
  uVar8 = (uVar8 | uRam0000000183182ef0) + (uVar8 & uRam0000000183182ef0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam0000000183182dd8 =
       func_0x00018724ffe0((uVar8 | 0x84222a22) + (ulonglong)((uint)uVar8 & 0x84222a22));
  uVar8 = uRam0000000183182dd8 ^ 0x907;
  uRam0000000183182d58 = uRam0000000183182e88 ^ uVar8 ^ 0x907;
  uRam0000000183182e28 = (uRam0000000183182cd8 ^ uVar8) + 0x907 ^ 0x5b5a8f7ed3d5318;
  uRam0000000183182f88 = (uRam0000000183182f88 * -0x5590576f467185cb ^ uRam0000000183182e28) + uVar8
  ;
  uRam0000000183182e28 = uRam0000000183182f88 ^ uRam0000000183182e28;
  uRam0000000183182cd8 = 0x907;
  uVar8 = (uRam0000000183182d00 ^ _UNK_180b4bad0) + uRam00000001831832a0 + 0x3b75dc6a;
  uVar10 = (uRam00000001831832a0 ^ _UNK_180b4bad8) + uRam0000000183182d00 + 0xffffffff;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183182d00 ^ _UNK_180b4bad0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001831832a0 ^ _UNK_180b4bad8;
  uRam0000000183182cb8 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183182d00 + 0xffffffff) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831832a0 + 0x3b75dc6a));
  uRam0000000183182f70 =
       (uRam0000000183182f70 ^ uRam0000000183182cb8) + 0x40a800b0 ^ 0x77282dae94f55dc3;
  uRam00000001831830f0 =
       (uRam00000001831830f0 * -0x495abfca1ddfe3d1 ^ uRam0000000183182f70) + uRam0000000183182cb8;
  uRam0000000183183028 = uRam00000001831830f0 ^ uRam0000000183182f70;
  uRam0000000183183070 = 0x40a800b0;
  uRam0000000183182bd0 = func_0x00018724ffe0(uRam0000000183182cf8 + 0xffdbfff4b600bcff ^ 0xbf);
  uVar8 = ((uRam0000000183182bd0 ^ 0x17e000) & 0x1fffffffffe000) * 0x800;
  uRam0000000183182d80 = uRam0000000183182d80 ^ uVar8 ^ 0xc15ff0828c8ceef0;
  uRam0000000183182dd8 = (uRam0000000183182dd8 * -0x4845f50f0dc5211f ^ uRam0000000183182d80) + uVar8
  ;
  uRam0000000183183068 = uRam0000000183182dd8 ^ uRam0000000183182d80;
  uRam00000001831830c0 = 0;
  uVar8 = (uRam0000000183182f58 ^ _UNK_180b4bae0) + uRam0000000183183118 + 0x7638d2d;
  uVar10 = (uRam0000000183183118 ^ _UNK_180b4bae8) + uRam0000000183182f58 + 0x8341ae08;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183182f58 ^ _UNK_180b4bae0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183183118 ^ _UNK_180b4bae8;
  uRam00000001831831f8 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183182f58 + 0x8341ae08) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183183118 + 0x7638d2d));
  uVar8 = uRam00000001831831f8 << 5 | (uRam00000001831831f8 & 0x7fffffffffffffff) >> 0x3b;
  uRam0000000183182ec8 = uRam0000000183182ec8 ^ uVar8 ^ 0xbe5fdc108efb369d;
  uRam0000000183182f38 = (uRam0000000183182f38 * -0x6e019dd402e8e85 ^ uRam0000000183182ec8) + uVar8;
  uRam00000001831830f0 = uRam0000000183182f38 ^ uRam0000000183182ec8;
  uRam0000000183183008 = 0;
  uVar8 = (uRam00000001831830a0 ^ 0x84222a22) + uRam0000000183182fb8 + 0x84222a22;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831830a0 ^ 0x84222a22;
  uVar10 = ((uRam0000000183182fb8 + uRam00000001831830a0) * 0x2000 |
           uRam0000000183182fb8 + uRam00000001831830a0 >> 0x33) ^ uRam0000000183182fb8;
  uRam0000000183182d10 =
       func_0x00018724ffe0((uVar10 << 0x1d | uVar10 >> 0x23) - uRam00000001831830a0 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183182fb8 + 0x84222a22));
  uRam0000000183183288 = uRam00000001831831b0 ^ uRam0000000183182d10 ^ 0x907;
  uRam0000000183183120 = (uRam0000000183183120 ^ uRam0000000183182d10) + 0x907 ^ 0xc393e6b5594c7624;
  uRam0000000183182f60 =
       (uRam0000000183182f60 * 0x98143cd11dc619d ^ uRam0000000183183120) + uRam0000000183182d10;
  uRam0000000183182fb0 = uRam0000000183182f60 ^ uRam0000000183183120;
  uRam0000000183182da0 = 0x907;
  uVar8 = (~uRam0000000183182b70 + 0x908) *
          ((uVar4 ^ 0x84222325 ^ uRam0000000183182ba8) +
          (ulonglong)((uint)uRam0000000183182ba8 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar8 = (uVar8 | uRam00000001831830c8) + (uVar8 & uRam00000001831830c8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831832d8 =
       func_0x00018724ffe0((uVar4 ^ 0x84222a22 | uVar8) +
                           (ulonglong)((uint)(uVar4 ^ 0x84222a22) & (uint)uVar8));
  uVar8 = uRam00000001831832d8 >> 1 | uRam00000001831832d8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
          ^ uRam00000001831832d8) * 0x30320115bf6c083d;
  uRam0000000183182e98 = uVar4 ^ 0x907;
  uRam0000000183182cb0 = (uRam0000000183182cb0 ^ uVar8) + uRam0000000183182e98 ^ 0x71f9a098b31eeb45;
  uRam0000000183182bb0 = (uRam0000000183182bb0 * 0x78172b9a22684911 ^ uRam0000000183182cb0) + uVar8;
  uRam0000000183182c68 = uRam0000000183182bb0 ^ uRam0000000183182cb0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018724bb1e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b4a0b8 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjS (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 187250070, runtime 6fffeee60070) =====

void FUN_187250070(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001872500ac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b4bb30 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/mb; cjT (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 187250f60, runtime 6fffeee60f60) =====

void FUN_187250f60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187250fdd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b4c070 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjU (IJ)I (handler @ image 187253a20, runtime 6fffeee63a20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187253a20(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (uRam0000000183183360 ^ _UNK_180b4edd0) + uRam0000000183183390 + 0xc28f2dfc1221a0ac;
  uVar6 = (uRam0000000183183390 ^ _UNK_180b4edd8) + uRam0000000183183360 + 0xb2cda604ff7df49;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183360 ^ _UNK_180b4edd0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183183390 ^ _UNK_180b4edd8;
  uRam0000000183183338 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183183360 + 0xb2cda604ff7df49) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183183390 + 0xc28f2dfc1221a0ac));
  uVar5 = uRam0000000183183338 - (uRam0000000183183338 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183183338) * -0x7bac26bd080c8d51;
  uRam00000001831833e8 = (uRam00000001831833e8 ^ uVar5) + 0xcbaffffcdff7dfc9 ^ 0x3d2f4788bca158a4;
  uRam0000000183183478 = (uRam0000000183183478 * -0x511dea3af551d6f7 ^ uRam00000001831833e8) + uVar5
  ;
  uRam0000000183183438 = uRam0000000183183478 ^ uRam00000001831833e8;
  uRam00000001831834b8 = 0xcbaffffcdff7dfc9;
  uVar5 = (~uRam00000001831834d0 + 0xe11103338a584e74) *
          ((uRam00000001831833d0 ^ 0xb4ff2774dd0d573b) +
          (uRam00000001831833d0 & 0x34ff2774dd0d573b) * 2);
  uVar5 = (uVar5 | uRam00000001831834d0) + (uVar5 & uRam00000001831834d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183418 =
       func_0x00018725f3b0((uVar5 | 0x55ee244757551948) + (uVar5 & 0x55ee244757551948));
  uVar5 = uRam0000000183183418 << 0x19 | uRam0000000183183418 >> 0x27;
  uRam0000000183183350 = (uRam0000000183183350 ^ uVar5) + 0x55ee2447d3773a6d ^ 0x86b5675c1b9edba1;
  uRam0000000183183360 = (uRam0000000183183360 * 0x5d2332df97345ca5 ^ uRam0000000183183350) + uVar5;
  uRam00000001831834b8 = uRam0000000183183360 ^ uRam0000000183183350;
  uRam0000000183183348 = 0x55ee2447d3773a6d;
  uRam0000000183183410 = func_0x00018725f3b0(uRam00000001831833b0 ^ 0x5acb7fc641c6b14c);
  uRam00000001831833a8 = uRam00000001831833a8 + 0xd47f3915350a0719 ^ 0x9be784f899ed6a8f;
  uRam0000000183183310 = uRam00000001831833d8 * -0x1455aba203088839;
  uRam00000001831833d8 = uRam0000000183183310 ^ uRam00000001831833a8;
  uRam0000000183183340 = uRam0000000183183438 ^ 0xd47f3915350a0719;
  uRam00000001831834b0 = 0xd47f3915350a0719;
  uVar5 = (uRam0000000183183340 ^ _UNK_180b4ede0) + uRam0000000183183438 + 0x84225cda;
  uVar6 = (uRam0000000183183438 ^ _UNK_180b4ede8) + uRam0000000183183340 + 0x2b80c6eacaf5f8e7;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183340 ^ _UNK_180b4ede0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183183438 ^ _UNK_180b4ede8;
  uRam0000000183183340 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183183340 + 0x2b80c6eacaf5f8e7) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183183438 + 0x84225cda));
  uRam0000000183183460 = uRam00000001831834a0 ^ uRam0000000183183370 ^ 0x2b80c6eacaf678e6;
  uRam0000000183183398 =
       (uRam0000000183183398 ^ uRam0000000183183370) + 0x2b80c6eacaf678e6 ^ 0x773b2111589888db;
  uRam0000000183183350 =
       (uRam0000000183183350 * -0xf58cc83e4028ce5 ^ uRam0000000183183398) + uRam0000000183183370;
  uRam0000000183183448 = uRam0000000183183350 ^ uRam0000000183183398;
  uRam0000000183183498 = 0x2b80c6eacaf678e6;
  uVar5 = (uRam00000001831834e0 ^ _UNK_180b4edf0) + uRam0000000183183308 + 0x2b80c6ea4ed45bc3;
  uVar6 = (uRam0000000183183308 ^ _UNK_180b4edf8) + uRam00000001831834e0 + 0xd47f3915350a0719;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831834e0 ^ _UNK_180b4edf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183183308 ^ _UNK_180b4edf8;
  uRam0000000183183418 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001831834e0 + 0xd47f3915350a0719) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183183308 + 0x2b80c6ea4ed45bc3));
  uVar5 = (uRam0000000183183418 ^ 0xb00c600c2561866) & 0x2b80c6eacaf678e6;
  uRam00000001831833d8 = uRam00000001831834a8 ^ uVar5 ^ 0x7fff;
  uRam00000001831834c8 = (uRam00000001831834c8 ^ uVar5) + 0x7fff ^ 0x4f41969852e91254;
  uRam00000001831834e8 = (uRam00000001831834e8 * 0x61da4a293bf54b05 ^ uRam00000001831834c8) + uVar5;
  uRam00000001831833b0 = uRam00000001831834e8 ^ uRam00000001831834c8;
  uRam00000001831834d0 = 0x7fff;
  uVar5 = (~uRam00000001831833e0 + 0xfb1356a161e975d5) *
          ((uRam0000000183183458 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183183458 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183183360) + (uVar5 & uRam0000000183183360);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183490 =
       func_0x00018725f3b0((uVar5 | 0xfb1356a1e5cb56f1) + (uVar5 & 0xfb1356a1e5cb56f1));
  uVar5 = uRam0000000183183490 - (uRam0000000183183490 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x33 ^
          uRam0000000183183490) & 0xfffffffffffff800;
  uRam00000001831834a0 = (uRam00000001831834a0 ^ uVar5) + 0x4eca95e9e168a2c ^ 0xf6e43a23bd4a85fd;
  uRam00000001831834a8 = (uRam00000001831834a8 * -0x35b9763b79183cc5 ^ uRam00000001831834a0) + uVar5
  ;
  uRam0000000183183320 = uRam00000001831834a8 ^ uRam00000001831834a0;
  uRam0000000183183328 = 0x4eca95e9e168a2c;
  uVar5 = (~uRam00000001831834f8 + 0xfb1356a161e975d5) *
          ((uRam00000001831833f0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001831833f0 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001831834a0) + (uVar5 & uRam00000001831834a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183370 =
       func_0x00018725f3b0((uVar5 | 0xfb1356a1e5cb290e) + (uVar5 & 0xfb1356a1e5cb290e));
  uVar5 = uRam0000000183183370 << 0xb | uRam0000000183183370 >> 0x35;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = uVar5 ^ 0xfb1356a161e975d4 ^
          ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uRam0000000183183440 = uRam0000000183183478 ^ uVar5 ^ 0xfb1356a161e9f5d3;
  uRam0000000183183448 = (uRam0000000183183360 ^ uVar5) + 0xfb1356a161e9f5d3 ^ 0xcf7424c4b5940ea6;
  uRam0000000183183480 = (uRam0000000183183480 * -0x61e1dda5dddead03 ^ uRam0000000183183448) + uVar5
  ;
  uRam0000000183183448 = uRam0000000183183480 ^ uRam0000000183183448;
  uRam0000000183183360 = 0xfb1356a161e9f5d3;
  uRam0000000183183420 = func_0x00018725f3b0(uRam0000000183183348 ^ 0xaf55823be2cf827b);
  uRam0000000183183330 =
       (uRam0000000183183330 ^ uRam0000000183183420) + 0xde7d284f475b6300 ^ 0xdc52ed9400b4f493;
  uRam00000001831834f0 =
       (uRam00000001831834f0 * -0x75803af545eb9e57 ^ uRam0000000183183330) + uRam0000000183183420 ^
       uRam0000000183183330;
  uRam00000001831833a0 = 0xde7d284f475b6300;
  uVar5 = (~uRam0000000183183340 + 0x2182d7b0b8a49d01) *
          ((uRam0000000183183428 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183183428 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam0000000183183400) + (uVar5 & uRam0000000183183400);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183330 =
       func_0x00018725f3b0((uVar5 | 0x2182d7b03c86c1da) + (uVar5 & 0x2182d7b03c86c1da));
  uVar5 = ~uRam0000000183183330 & 0x7fff;
  uRam0000000183183410 = uRam00000001831834b8 ^ uVar5 ^ 0x2182d7b0b8a51cff;
  uRam00000001831833a0 = (uRam00000001831833a0 ^ uVar5) + 0x2182d7b0b8a51cff ^ 0xb3db080b8dcf536b;
  uRam0000000183183498 = (uRam0000000183183498 * -0x493a63a0945a70df ^ uRam00000001831833a0) + uVar5
  ;
  uRam00000001831834f8 = uRam0000000183183498 ^ uRam00000001831833a0;
  uRam00000001831833f8 = 0x2182d7b0b8a51cff;
  uVar5 = (~uRam0000000183183460 + 0xde7d284f475b6301) *
          ((uRam0000000183183348 ^ 0x2182d7b03c873fda) +
          (uRam0000000183183348 & 0x2182d7b03c873fda) * 2);
  uVar5 = (uVar5 | uRam0000000183183410) + (uVar5 & uRam0000000183183410);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831834e8 =
       func_0x00018725f3b0((uVar5 | 0xffffffff7bdc5cda) + (uVar5 & 0xffffffff7bdc5cda));
  uVar5 = (uRam00000001831834e8 << 0x2a | uRam00000001831834e8 >> 0x16) ^ 0xfffffffffffe7fff;
  uRam0000000183183458 = uRam00000001831834b8 ^ uVar5 ^ 0x7fff;
  uRam0000000183183368 = (uRam0000000183183368 ^ uVar5) + 0x7fff ^ 0xe1358325e7f36d86;
  uRam00000001831833a0 = (uRam00000001831833a0 * 0x4fc88e0606b8b127 ^ uRam0000000183183368) + uVar5;
  uRam0000000183183340 = uRam00000001831833a0 ^ uRam0000000183183368;
  uRam0000000183183488 = 0x7fff;
  uVar5 = (~uRam0000000183183458 + 0x55ee2447d3773a6e) * -0x34500003a4298315;
  uVar5 = (uVar5 | uRam00000001831834e0) + (uVar5 & uRam00000001831834e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183328 =
       func_0x00018725f3b0((uVar5 | 0x9e41dbbb88a2c681) + (uVar5 & 0x9e41dbbb88a2c681));
  uRam0000000183183358 =
       (uRam0000000183183358 ^ uRam0000000183183328) + 0x9e41dbbb0c80e5a4 ^ 0xb282690357e8deaf;
  uRam00000001831833a8 =
       (uRam00000001831833a8 * 0x2591d8ba46a316d7 ^ uRam0000000183183358) + uRam0000000183183328;
  uRam00000001831833f8 = uRam00000001831833a8 ^ uRam0000000183183358;
  uRam0000000183183400 = 0x9e41dbbb0c80e5a4;
  uVar5 = (~uRam0000000183183458 + 0x55ee2447d3773a6e) *
          ((uRam0000000183183448 ^ 0xcbaffffc5bd5fcec) +
          (uRam0000000183183448 & 0x4baffffc5bd5fcec) * 2);
  uVar5 = (uVar5 | 0x9e41dbbb0c80e5a4) + (uVar5 & 0x9e41dbbb0c80e5a4);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183480 =
       func_0x00018725f3b0((uVar5 | 0x9e41dbbb88a2c681) + (uVar5 & 0x9e41dbbb88a2c681));
  uVar5 = (uRam0000000183183480 ^ 0xc82a07d436acd295) << 0x14 |
          (uRam0000000183183480 ^ 0xc82a07d436acd295) >> 0x2c;
  uRam00000001831834e0 = (uRam00000001831834e0 ^ uVar5) + 0x41ae2444d3771a49 ^ 0x8cd2ae9ce2210ebe;
  uRam00000001831833e8 = (uRam00000001831833e8 * 0x2ff7294d5c1e902b ^ uRam00000001831834e0) + uVar5;
  uRam00000001831834d0 = uRam00000001831833e8 ^ uRam00000001831834e0;
  uRam0000000183183420 = 0x41ae2444d3771a49;
  uVar5 = (uRam0000000183183418 ^ _UNK_180b4ee00) + uRam0000000183183490 + 0x9e41dbbb88a2c681;
  uVar6 = (uRam0000000183183490 ^ _UNK_180b4ee08) + uRam0000000183183418 + 0x835c4889a6ee3492;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183418 ^ _UNK_180b4ee00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183183490 ^ _UNK_180b4ee08;
  uRam0000000183183408 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183183418 + 0x835c4889a6ee3492) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183183490 + 0x9e41dbbb88a2c681));
  uVar5 = ~uRam0000000183183408 & 0x9e41dbbb0c80e5a4;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5;
  uRam0000000183183350 = uRam00000001831833e8 ^ uVar5 ^ 0x219e2444b36f1a36;
  uRam00000001831834f0 = (uRam00000001831834f0 ^ uVar5) + 0x219e2444b36f1a36 ^ 0x49340106c3ddab01;
  uRam0000000183183348 = (uRam0000000183183348 * 0x4768979b6d3d1d7d ^ uRam00000001831834f0) + uVar5;
  uRam00000001831834c8 = uRam0000000183183348 ^ uRam00000001831834f0;
  uRam00000001831834e0 = 0x219e2444b36f1a36;
  uRam0000000183183360 = func_0x00018725f3b0(uRam0000000183183450 + 0x22ff7c1b0021ff ^ 0xe);
  uRam00000001831833f8 = uRam0000000183183360 & 0xfffffffffffff000;
  uRam00000001831833a8 = uRam00000001831833a8 ^ uRam00000001831833f8 ^ 0x68c281c91959d4c8;
  uRam0000000183183428 =
       (uRam0000000183183428 * 0x588d765986d4c29 ^ uRam00000001831833a8) + uRam00000001831833f8;
  uRam00000001831834b8 = uRam0000000183183428 ^ uRam00000001831833a8;
  uRam0000000183183400 = 0;
  uVar5 = (uRam00000001831833f0 ^ 0x84225cda) + uRam00000001831834c8 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831833f0 ^ 0x84225cda;
  uVar6 = ((uRam00000001831834c8 + uRam00000001831833f0) * 0x2000 |
          uRam00000001831834c8 + uRam00000001831833f0 >> 0x33) ^ uRam00000001831834c8;
  uRam00000001831834e0 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001831833f0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831834c8 + 0x84225cda));
  uVar5 = uRam00000001831834e0 & 0x7fffffffffffffff ^ 0x7fff;
  uRam00000001831834b0 = uRam00000001831833b8 ^ uVar5 ^ 0x7fff;
  uRam0000000183183408 = (uRam0000000183183408 ^ uVar5) + 0x7fff ^ 0x2cbf6588ed5402ab;
  uRam00000001831834d8 = (uRam00000001831834d8 * -0x31cc651e9a5b04bd ^ uRam0000000183183408) + uVar5
  ;
  uRam0000000183183428 = uRam00000001831834d8 ^ uRam0000000183183408;
  uRam00000001831833c0 = 0x7fff;
  uRam0000000183183318 = func_0x00018725f3b0(uRam0000000183183388 + 0xff032fa40d0015cb ^ 0x2f);
  uVar5 = (uRam0000000183183318 << 0x39 | uRam0000000183183318 >> 7) * 0x17ae753b63c6b563 ^
          0xcbaffffcdff7dfc9;
  uRam0000000183183380 = (uRam0000000183183380 ^ uVar5) + 0x3450000320082036 ^ 0xd485f50f0248c724;
  uRam0000000183183310 = (uRam0000000183183310 * -0x1949623674671bc5 ^ uRam0000000183183380) + uVar5
  ;
  uRam00000001831834b0 = uRam0000000183183310 ^ uRam0000000183183380;
  uRam0000000183183340 = 0x3450000320082036;
  uVar5 = (uRam0000000183183468 ^ _UNK_180b4ee10) + uRam00000001831834a8 + 0xcbaffffc5bd5fcec;
  uVar6 = (uRam00000001831834a8 ^ _UNK_180b4ee18) + uRam0000000183183468 + 0x3450000320082036;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183468 ^ _UNK_180b4ee10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831834a8 ^ _UNK_180b4ee18;
  uRam0000000183183348 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183183468 + 0x3450000320082036) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831834a8 + 0xcbaffffc5bd5fcec));
  uVar5 = (uRam0000000183183348 ^ 0xf5bd3669588a5466) << 0x3a |
          (uRam0000000183183348 ^ 0xf5bd3669588a5466) >> 6;
  uRam00000001831833e8 = uRam00000001831833e8 ^ uVar5 ^ 0xcbddc8ca5ddaa02e;
  uRam0000000183183318 = (uRam0000000183183318 * 0x68fc44e469df481d ^ uRam00000001831833e8) + uVar5;
  uRam0000000183183378 = uRam0000000183183318 ^ uRam00000001831833e8;
  uRam0000000183183420 = 0;
  uVar5 = (uRam0000000183183320 ^ 0x84225cda) + uRam0000000183183318 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183320 ^ 0x84225cda;
  uVar6 = ((uRam0000000183183318 + uRam0000000183183320) * 0x2000 |
          uRam0000000183183318 + uRam0000000183183320 >> 0x33) ^ uRam0000000183183318;
  uVar5 = func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam0000000183183320 ^
                              (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183183318 + 0x84225cda))
  ;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar5 ^
          0x7fff;
  uRam00000001831834b8 = uRam0000000183183450 ^ uVar5 ^ 0x7fff;
  uRam00000001831834d8 = (uRam00000001831834d8 ^ uVar5) + 0x7fff ^ 0x96bfd2f57c8843b1;
  uRam0000000183183400 = (uRam0000000183183400 * -0x4847877396b0a607 ^ uRam00000001831834d8) + uVar5
  ;
  uRam0000000183183440 = uRam0000000183183400 ^ uRam00000001831834d8;
  uRam0000000183183390 = 0x7fff;
  uVar5 = (uRam00000001831834c8 ^ _UNK_180b4ee20) + uRam0000000183183470 + 0xc28f2dfc1221a0ac;
  uVar6 = (uRam0000000183183470 ^ _UNK_180b4ee28) + uRam00000001831834c8 + 0xc28f2dfc96038389;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831834c8 ^ _UNK_180b4ee20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183183470 ^ _UNK_180b4ee28;
  uRam0000000183183300 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001831834c8 + 0xc28f2dfc96038389) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183183470 + 0xc28f2dfc1221a0ac));
  uVar5 = ((uRam0000000183183300 ^ 0x4080001412008088) & 0xc28f2dfc96038389) * 0x61527ab3cd3f508b;
  uRam00000001831834a0 = uRam00000001831834a0 ^ uVar5 ^ 0x5ef31ab4d5919382;
  uRam0000000183183480 = (uRam0000000183183480 * -0x326276a682564683 ^ uRam00000001831834a0) + uVar5
  ;
  uRam00000001831834c0 = uRam0000000183183480 ^ uRam00000001831834a0;
  uRam0000000183183408 = 0;
  uVar5 = ((uRam0000000183183378 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183183378 & 0x84225cda) * 2) * -uRam0000000183183460;
  uVar5 = (uVar5 | uRam00000001831834b0) + (uVar5 & uRam00000001831834b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183450 =
       func_0x00018725f3b0((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam0000000183183450 * 2;
  uRam00000001831834b0 = uRam00000001831833d8 ^ uVar5 ^ 0x7fff;
  uRam0000000183183400 = (uRam0000000183183400 ^ uVar5) + 0x7fff ^ 0x4a369f37d38bf5d9;
  uRam0000000183183370 = (uRam0000000183183370 * 0x11601fc4a4730bcb ^ uRam0000000183183400) + uVar5;
  uRam00000001831833c8 = uRam0000000183183370 ^ uRam0000000183183400;
  uRam0000000183183380 = 0x7fff;
  param_4 = param_4 & 0x7fff;
  uVar6 = (ulonglong)param_4 ^ 0x84222325;
  uVar5 = ((uRam00000001831834c8 ^ uVar6) +
          (ulonglong)((uint)uRam00000001831834c8 & (uint)uVar6) * 2) *
          (param_3 - uRam0000000183183370);
  uVar5 = (uVar5 | uRam00000001831834a0) + (uVar5 & uRam00000001831834a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar6 = uVar6 ^ param_3;
  uRam0000000183183308 =
       func_0x00018725f3b0((uVar6 | uVar5) + (ulonglong)((uint)uVar6 & (uint)uVar5));
  uVar5 = (ulonglong)param_4 ^ ((param_4 | param_3) ^ uRam0000000183183308) & 0x1ffffffffff;
  uVar3 = (ulonglong)(param_4 ^ param_3);
  uRam0000000183183428 = (uRam0000000183183428 ^ uVar5) + uVar3 ^ 0xdb3160143ccb7565;
  uRam0000000183183318 = (uRam0000000183183318 * 0x3f32f1fa1d2dc24b ^ uRam0000000183183428) + uVar5;
  uRam0000000183183360 = uRam0000000183183318 ^ uRam0000000183183428;
  uVar5 = (~uRam0000000183183318 + 0xade8fe26) *
          ((uRam0000000183183350 ^ 0xe31b0024) +
          (ulonglong)((uint)uRam0000000183183350 & 0xe31b0024) * 2);
  uVar5 = (uVar5 | uRam00000001831833f8) + (uVar5 & uRam00000001831833f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831834c8 = uVar3;
  uRam0000000183183448 =
       func_0x00018725f3b0((uVar5 | 0x4ef3fe01) + (ulonglong)((uint)uVar5 & 0x4ef3fe01));
  uVar5 = (uRam0000000183183448 & 0xffffffffff) - (uRam0000000183183448 >> 1 & 0x5555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183183448 & 0xffffffffff;
  uRam00000001831834c0 = (uRam00000001831834c0 ^ uVar5) + 0xeff9ff25 ^ 0x2f495322ad811f43;
  uRam00000001831833d0 = (uRam00000001831833d0 * 0x30cfc8a9f7ddb09b ^ uRam00000001831834c0) + uVar5;
  uRam0000000183183478 = uRam00000001831833d0 ^ uRam00000001831834c0;
  uRam00000001831834b8 = 0xeff9ff25;
  uVar5 = (uRam0000000183183350 ^ _UNK_180b4ee30) + uRam0000000183183448 + 0x84222325;
  uVar6 = (uRam0000000183183448 ^ _UNK_180b4ee38) + uRam0000000183183350 + 0x2fa290eb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183350 ^ _UNK_180b4ee30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183183448 ^ _UNK_180b4ee38;
  uRam0000000183183448 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183183350 + 0x2fa290eb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183183448 + 0x84222325));
  uRam00000001831834c8 =
       (uRam00000001831834c8 ^ uRam0000000183183448) - 0x2fa290eb ^ 0x7dcba6b1091dd25d;
  uRam0000000183183480 =
       (uRam0000000183183480 * -0x513aca96b9692493 ^ uRam00000001831834c8) + uRam0000000183183448;
  uRam0000000183183348 = uRam0000000183183480 ^ uRam00000001831834c8;
  uRam0000000183183378 = 0xd05d6f15;
  uVar5 = (~uRam0000000183183300 + 0xd05d6f16) *
          ((uRam0000000183183328 ^ 0xab80dff0) +
          (ulonglong)((uint)uRam0000000183183328 & 0xab80dff0) * 2);
  uVar5 = (uVar5 | uRam00000001831834f8) + (uVar5 & uRam00000001831834f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831834c0 =
       func_0x00018725f3b0((uVar5 | 0x7bddb0e5) + (ulonglong)((uint)uVar5 & 0x7bddb0e5));
  uVar6 = uRam00000001831834c0 ^ 0x26c5d04e52c2e4ac;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar6;
  uRam0000000183183328 = uRam00000001831834e8 ^ uVar6 ^ 0x100006bea;
  uRam00000001831833a8 = (uRam00000001831833a8 ^ uVar6) + 0x100006bea ^ 0x602ccd0e18c408fa;
  uRam00000001831834b0 = (uRam00000001831834b0 * -0x29f8129411e36d3b ^ uRam00000001831833a8) + uVar6
  ;
  uRam0000000183183408 = uRam00000001831834b0 ^ uRam00000001831833a8;
  uRam0000000183183448 = uRam00000001831833e0 ^ 0x100006bea;
  uRam00000001831833f8 = 0x6bea;
  uVar5 = (~uRam00000001831834a0 + 0x9c2398a6) *
          ((uRam00000001831833b8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831833b8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183183420) + (uVar5 & uRam0000000183183420);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183330 =
       func_0x00018725f3b0((uVar5 | 0x1801bb80) + (ulonglong)((uint)uVar5 & 0x1801bb80));
  uVar5 = uRam0000000183183330 << 0xd | (uRam0000000183183330 & 0x7fffffffffffffff) >> 0x33;
  uRam0000000183183320 = (uRam0000000183183320 ^ uVar5) - 0x9c2398a5 ^ 0x22503c234e8c8058;
  uRam0000000183183350 = (uRam0000000183183350 * 0xa2e31e1f2b02101 ^ uRam0000000183183320) + uVar5;
  uRam00000001831834d0 = uRam0000000183183350 ^ uRam0000000183183320;
  uRam00000001831834a0 = 0x63dc675b;
  uVar5 = (uRam0000000183183388 ^ _UNK_180b4ee40) + uRam00000001831833c0 + 0x180627aa;
  uVar6 = (uRam00000001831833c0 ^ _UNK_180b4ee48) + uRam0000000183183388 + 0x63dc675b;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183388 ^ _UNK_180b4ee40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831833c0 ^ _UNK_180b4ee48;
  uRam0000000183183328 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183183388 + 0x63dc675b) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831833c0 + 0x180627aa));
  uVar5 = uRam0000000183183328 ^ 0x3ce85bc1368727d5;
  uRam0000000183183428 = uRam00000001831834c8 ^ uVar5 ^ 0x100006bea;
  uRam00000001831834f8 = (uRam00000001831834f8 ^ uVar5) + 0x100006bea ^ 0xb82d128d3f5beda2;
  uRam0000000183183468 = (uRam0000000183183468 * -0xe4c71cd95cb8091 ^ uRam00000001831834f8) + uVar5;
  uRam00000001831833e8 = uRam0000000183183468 ^ uRam00000001831834f8;
  uRam00000001831833b0 = 0x6bea;
  uVar5 = func_0x00018725f3b0(uRam0000000183183300 + 0xff6b00afe600daff ^ 0xd9);
  uVar6 = (uVar5 ^ 0x54c78c3f) & 0x7fffffffffff0000;
  uRam0000000183183460 = (uVar5 ^ uVar6) - 0x54c78c3f ^ 0x649bd651d125f166;
  uRam0000000183183470 = (uRam0000000183183470 * 0x31931c6c6619568f ^ uRam0000000183183460) + uVar6;
  uRam0000000183183448 = uRam0000000183183470 ^ uRam0000000183183460;
  uRam0000000183183440 = 0xab3873c1;
  uVar5 = (uRam0000000183183488 ^ _UNK_180b4ee50) + uRam00000001831833a0 + 0x842248cf;
  uVar6 = (uRam00000001831833a0 ^ _UNK_180b4ee58) + uRam0000000183183488 + 0x54c78c3f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183488 ^ _UNK_180b4ee50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831833a0 ^ _UNK_180b4ee58;
  uRam0000000183183420 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183183488 + 0x54c78c3f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831833a0 + 0x842248cf));
  uVar5 = uRam0000000183183420 - (uRam0000000183183420 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183183420;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar6 ^
          0x6bea;
  uRam0000000183183418 = uRam0000000183183318 ^ uVar5 ^ 0x54c7f829;
  uRam00000001831833f8 = (uRam00000001831833f8 ^ uVar5) + 0x54c7f829 ^ 0xaf84c82fa215e5df;
  uRam0000000183183310 = (uRam0000000183183310 * 0x60e09ba540eac3f1 ^ uRam00000001831833f8) + uVar5;
  uRam0000000183183488 = uRam0000000183183310 ^ uRam00000001831833f8;
  uRam0000000183183400 = 0x54c7f829;
  uVar5 = (~uRam0000000183183478 + 0xab3873c2) *
          ((uRam0000000183183358 ^ 0xd0e5db0c) +
          (ulonglong)((uint)uRam0000000183183358 & 0xd0e5db0c) * 2);
  uVar5 = (uVar5 | uRam0000000183183438) + (uVar5 & uRam0000000183183438);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183380 =
       func_0x00018725f3b0((uVar5 | 0x7bdda8cd) + (ulonglong)((uint)uVar5 & 0x7bdda8cd));
  uVar5 = uRam0000000183183380 ^ 0xab3873c1;
  uRam00000001831833c0 = uRam0000000183183428 ^ uVar5 ^ 0x100006bea;
  uRam00000001831833c8 = (uRam00000001831833c8 ^ uVar5) + 0x100006bea ^ 0x1252fccc9c8fd3a3;
  uRam00000001831833b0 = (uRam00000001831833b0 * -0x1cf03194725bce27 ^ uRam00000001831833c8) + uVar5
  ;
  uRam0000000183183448 = uRam00000001831833b0 ^ uRam00000001831833c8;
  uRam0000000183183458 = 0x6bea;
  uVar5 = (_UNK_180b4ee60 ^ 0x6bea) + uRam0000000183183450 + 0x6bdbdc00;
  uVar6 = (uRam0000000183183450 ^ _UNK_180b4ee68) + 0x779b9ac2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _UNK_180b4ee60 ^ 0x6bea;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183183450 ^ _UNK_180b4ee68;
  uRam00000001831833a0 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - 0x779b9ac2 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183183450 + 0x6bdbdc00));
  uVar5 = (uRam00000001831833a0 ^ 0x701eade1152eed38) << 0x2d |
          (uRam00000001831833a0 ^ 0x701eade1152eed38) >> 0x13;
  uRam0000000183183458 = uRam00000001831834f8 ^ uVar5 ^ 0x167952dfd;
  uRam0000000183183370 = (uRam0000000183183370 ^ uVar5) + 0x167952dfd ^ 0x640bf7c67cbb0b88;
  uRam00000001831834f0 = (uRam00000001831834f0 * 0x2ecfc18f673d15df ^ uRam0000000183183370) + uVar5;
  uRam00000001831834c0 = uRam00000001831834f0 ^ uRam0000000183183370;
  uRam0000000183183318 = 0x67952dfd;
  uRam0000000183183310 = func_0x00018725f3b0(uRam00000001831834d8 + 0xffd1fffcc7ffbfff ^ 0x14);
  uVar5 = uRam0000000183183310 << 0x26 | uRam0000000183183310 >> 0x1a;
  uRam0000000183183350 = (uRam0000000183183350 ^ uVar5) + 0x9862d1fd ^ 0x5535217baa36b883;
  uRam00000001831833c8 = (uRam00000001831833c8 * -0xfa0140899b1ea15 ^ uRam0000000183183350) + uVar5;
  uRam00000001831833b8 = uRam00000001831833c8 ^ uRam0000000183183350;
  uRam0000000183183328 = 0x9862d1fd;
  uVar5 = (~uRam0000000183183450 + 0x779b2ed9) *
          ((uRam00000001831834c0 ^ 0x6bdbdc00) +
          (ulonglong)((uint)uRam00000001831834c0 & 0x6bdbdc00) * 2);
  uVar5 = (uVar5 | uRam00000001831833e0) + (uVar5 & uRam00000001831833e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183183338 =
       func_0x00018725f3b0((uVar5 | 0x1c40f2d8) + (ulonglong)((uint)uVar5 & 0x1c40f2d8));
  uVar5 = uRam0000000183183380 << 0x21 | uRam0000000183183380 >> 0x1f;
  uRam00000001831834c0 = (uRam00000001831834c0 ^ uVar5) + 0x67992e00 ^ 0x78b8fd719a2960db;
  uRam0000000183183420 = (uRam0000000183183420 * 0x35b9107c59806b35 ^ uRam00000001831834c0) + uVar5;
  uRam0000000183183398 = uRam0000000183183420 ^ uRam00000001831834c0;
  uRam00000001831834c8 = 0x67992e00;
  uVar5 = (uRam0000000183183408 ^ _UNK_180b4ee70) + uRam00000001831833c0 + 0x1c40f2d8;
  uVar6 = (uRam00000001831833c0 ^ _UNK_180b4ee78) + uRam0000000183183408 + 0xcf325c00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183408 ^ _UNK_180b4ee70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831833c0 ^ _UNK_180b4ee78;
  uRam0000000183183330 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183183408 + 0xcf325c00) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831833c0 + 0x1c40f2d8));
  uVar5 = uRam0000000183183330 & 0xffffffffe0000000;
  uRam00000001831833e8 = uRam0000000183183308 ^ uVar5 ^ 0x167952dfd;
  uVar6 = (uRam0000000183183448 ^ uVar5) + 0x167952dfd;
  uRam0000000183183448 = uVar6 ^ 0xea7a4c0a1f9b6afc;
  uRam0000000183183410 = (uRam0000000183183410 * 0x13f368824dcdc21b ^ uRam0000000183183448) + uVar5;
  uRam0000000183183348 = uRam0000000183183410 ^ uRam0000000183183448;
  uRam0000000183183400 = 0x67952dfd;
  uRam00000001831834c8 = func_0x00018725f3b0(uVar6 ^ 0xea324c8eac9b4bb8);
  uVar5 = uRam00000001831834c8 & 0x3ffffffffff;
  uRam00000001831833d0 = uRam00000001831834b8 ^ uVar5 ^ 0x6bea;
  uRam00000001831834b0 = (uRam00000001831834b0 ^ uVar5) + 0x6bea ^ 0xfe508b9aed808a8d;
  uRam0000000183183330 = (uRam0000000183183330 * -0x6d68af531c950f59 ^ uRam00000001831834b0) + uVar5
  ;
  uRam0000000183183388 = uRam0000000183183330 ^ uRam00000001831834b0;
  uRam0000000183183408 = 0x6bea;
  uVar5 = (uRam0000000183183420 ^ _UNK_180b4ee80) + uRam0000000183183368 + 0x6bdbdc00;
  uVar6 = (uRam0000000183183368 ^ _UNK_180b4ee88) + uRam0000000183183420 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183183420 ^ _UNK_180b4ee80;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183183368 ^ _UNK_180b4ee88;
  uVar5 = func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183183420 + 0xffffffff)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam0000000183183368 + 0x6bdbdc00));
  uVar5 = ((uVar5 ^ 0xeff9ff25) << 0x39 | (uVar5 ^ 0xeff9ff25) >> 7) ^ 0xffffffff;
  uRam0000000183183390 = (uRam0000000183183390 ^ uVar5) + 0x100600da ^ 0x15030a9d55fe44;
  uRam0000000183183320 = (uRam0000000183183320 * -0x48a2ad640e6b9ce5 ^ uRam0000000183183390) + uVar5
  ;
  uRam0000000183183300 = uRam0000000183183320 ^ uRam0000000183183390;
  uRam0000000183183450 = 0x100600da;
  uRam0000000183183330 = func_0x00018725f3b0(uRam00000001831834b0 + 0xdc0048ba0034ff ^ 2);
  uRam0000000183183450 =
       uRam0000000183183450 ^ uRam0000000183183330 & 0x7fffffffffff ^ 0xb24ab7096a566b00;
  uRam0000000183183320 =
       (uRam0000000183183320 * 0x47646d0fe2fdfce7 ^ uRam0000000183183450) +
       (uRam0000000183183330 & 0x7fffffffffff);
  uRam00000001831834d8 = uRam0000000183183320 ^ uRam0000000183183450;
  uRam0000000183183430 = 0;
  uVar5 = func_0x00018725f3b0(uRam00000001831833c0 + 0x21008424ffddff ^ 0x49);
  uRam0000000183183318 = uVar5 >> 0x14 & 0xffffffffffffff80;
  uRam00000001831834f0 = uRam00000001831834f0 ^ uRam0000000183183318 ^ 0x7681f1efd48c153a;
  uRam0000000183183318 = (uVar5 * -0x48eca381e013f549 ^ uRam00000001831834f0) + uRam0000000183183318
  ;
  uRam0000000183183438 = uRam0000000183183318 ^ uRam00000001831834f0;
  uRam00000001831833e0 = 0;
  uRam0000000183183310 = func_0x00018725f3b0(uRam0000000183183478 + 0xffc8007b310021ff ^ 0xe6);
  uVar5 = uRam0000000183183310 << 0xd | uRam0000000183183310 >> 0x33;
  uRam00000001831834b0 = uRam0000000183183410 ^ uVar5 ^ 0x6bea;
  uRam0000000183183380 = (uRam0000000183183380 ^ uVar5) + 0x6bea ^ 0xef3ca783692affc9;
  uRam00000001831834f0 = (uRam00000001831834f0 * 0x517e9516de8d373d ^ uRam0000000183183380) + uVar5;
  uRam0000000183183420 = uRam00000001831834f0 ^ uRam0000000183183380;
  uRam0000000183183350 = 0x6bea;
  uVar5 = uVar3 ^ 0x84222325 ^ uRam0000000183183310;
  lVar4 = (uVar3 ^ 0x84222325) + uRam00000001831833e8;
  uVar6 = uVar5 + lVar4;
  uVar7 = (uRam00000001831833e8 ^ 0x6bea) + uRam0000000183183310 + 0x6bea;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831833e8 ^ 0x6bea;
  uRam0000000183183368 =
       func_0x00018725f3b0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183183310 + 0x6bea) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar5 = ((uVar3 | 0x6bea) ^ uRam0000000183183368) * 0x27e0dcb361beee5d;
  lVar4 = uVar3 - ((param_4 ^ param_3) & 0x6bea) * 2;
  uRam00000001831834f8 = (uRam00000001831834f8 ^ uVar5) + lVar4 + 0x6bea ^ 0xc12ddc249131c7e6;
  uRam0000000183183470 = (uRam0000000183183470 * -0x731a817f2a7d7b87 ^ uRam00000001831834f8) + uVar5
  ;
  uRam0000000183183330 = uRam0000000183183470 ^ uRam00000001831834f8;
  uRam00000001831834e0 = lVar4 + 0x6beaU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19173,0x3ee)
      /* POOL[0x19173,0x3ee]: urrent/ScheduledFuture; | MINUTES | sixtwo/mb | java/util/concurrent/atomic/AtomicInteger | java/util/concurrent/ScheduledFuture | [Ljava/util/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loa */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187256385 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b4cf70 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/mb; cjV (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18725f440, runtime 6fffeee6f440) =====

void FUN_18725f440(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018725f48b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b4eff0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/mb; cjW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 187260450, runtime 6fffeee70450) =====

void FUN_187260450(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001872604d9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b4f5b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x71f990b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1871f990b(void)

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


// ----- block @ rva 0x71fae63 -----

void FUN_1871fae63(void)

{
  return;
}


// ----- block @ rva 0x71fc4d9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1871fc4d9(void)

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


// ----- block @ rva 0x72037c4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1872037c4(void)

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


// ----- block @ rva 0x7209ba4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18720cba2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0x7209f28 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18720cba2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0x720a7f4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18720cba2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0x720c0c5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18720cba2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0x720c90b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018720c92f */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18720c90b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x720f7a1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018720f7f2 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18720f7a1(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7211778 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187211778(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *in_stack_00000048;
  
  FUN_190dd72e0(in_stack_00000048,param_2,0x12);
  cVar1 = (**(code **)(in_stack_00000048 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72121cd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1872121cd(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 in_stack_00000048;
  
  cVar1 = (*in_RAX)(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x721743a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18721743a(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_184117d50(in_stack_00000048,in_stack_00000050);
  cVar1 = (**(code **)(in_stack_00000048 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x721990e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18721990e(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000048;
  
  uVar2 = (**(code **)(in_stack_00000048 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000048);
  uVar3 = FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  cVar1 = (**(code **)(in_stack_00000048 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000048,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x721bb40 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18721bb40(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  
  FUN_190ddfc90(in_stack_00000048,&stack0x00000058,*_DAT_18301ee50 + 0x766,*_DAT_18301ee50 + 0x76f,
                0x20);
  cVar1 = (**(code **)(in_stack_00000048 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x721c29f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18721c29f(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  
  cVar1 = (**(code **)(in_stack_00000048 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x721ceda -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18721ceda(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000048;
  
  uVar2 = (**(code **)(in_stack_00000048 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000048);
  uVar3 = FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  cVar1 = (**(code **)(in_stack_00000048 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000048,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x721e8f6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18721e8f6(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000048;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x721f6eb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18721f6eb(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  
  cVar1 = (**(code **)(in_stack_00000048 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x721fc08 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18721fc08(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000048;
  
  uVar2 = (**(code **)(in_RAX + 0x78))(in_stack_00000048);
  uVar3 = FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  cVar1 = (**(code **)(in_stack_00000048 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000048,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72216cf -----

void FUN_1872216cf(void)

{
  return;
}


// ----- block @ rva 0x7221a93 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187221aca */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187221a93(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7221ae8 -----

void FUN_187221ae8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000187221b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b45440 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x72250dd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1872250dd(void)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x18) = 0xf;
  (**(code **)(**(longlong **)(unaff_RBP + 0x38) + 0x70))
            (*(longlong **)(unaff_RBP + 0x38),*(undefined8 *)(unaff_RBP + 0x30),unaff_RBP + -0x30);
  switch(0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72264c5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872264c5(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  
  uVar1 = unaff_RBP - 0x3b;
  uVar4 = uVar1 ^ 0x84222325 ^ _DAT_183181b08;
  plVar2 = *(longlong **)(unaff_RBP + 0x38);
  lVar3 = (uVar1 ^ 0x84222325) + _DAT_183181848;
  uVar6 = uVar4 + lVar3;
  uVar7 = (unaff_RDI ^ _DAT_183181848) + _DAT_183181b08 + unaff_RDI;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ unaff_RDI ^ _DAT_183181848;
  _DAT_183181cb0 =
       func_0x000187249450((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183181b08 + unaff_RDI) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  uVar4 = ~(uVar1 * unaff_RDI ^ _DAT_183181cb0) & uVar1;
  uVar11 = (uint)(uVar1 >> 0x20);
  auVar12._8_4_ = (int)uVar1;
  auVar12._0_8_ = uVar1;
  auVar12._12_4_ = uVar11;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = unaff_RDI;
  uVar15 = (uint)(unaff_RDI >> 0x20);
  auVar8._8_4_ = (int)unaff_RDI;
  auVar8._0_8_ = unaff_RDI;
  auVar8._12_4_ = uVar15;
  uVar17 = SUB164(auVar12 & auVar8,0);
  uVar7 = SUB168(auVar12 & auVar8,0);
  uVar5 = SUB164(auVar12 | auVar8,0);
  uVar6 = SUB168(auVar12 | auVar8,0);
  auVar16._8_4_ = 0xffffffff;
  auVar16._0_8_ = 0xffffffffffffffff;
  auVar16._12_4_ = 0xffffffff;
  uVar13 = SUB164(auVar14 ^ auVar16,0);
  uVar9 = SUB164(auVar10 ^ auVar16,0);
  uVar4 = uVar4 << 0x10 | uVar4 >> 0x30;
  _DAT_183181ed0 =
       (((ulonglong)uVar13 * (ulonglong)_DAT_180b46630 +
         ((ulonglong)_DAT_180b46660 * (ulonglong)uVar13 +
          (SUB168(auVar14 ^ auVar16,0) >> 0x20) * (ulonglong)_DAT_180b46630 << 0x20) +
        (ulonglong)_DAT_180b46650 * (ulonglong)uVar5 +
        ((uVar6 >> 0x20) * (ulonglong)_DAT_180b46650 + (ulonglong)_DAT_180b46640 * (ulonglong)uVar5
        << 0x20) +
        (ulonglong)uVar17 * (ulonglong)_DAT_180b46650 +
        ((uVar7 >> 0x20) * (ulonglong)_DAT_180b46650 + (ulonglong)uVar17 * (ulonglong)_DAT_180b46640
        << 0x20) +
        ((ulonglong)_DAT_180b46600 * (uVar1 & 0xffffffff) +
         (ulonglong)_DAT_180b465f0 * (ulonglong)uVar11 << 0x20) +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_180b465f0 +
        ((ulonglong)_DAT_180b46620 * (unaff_RDI & 0xffffffff) +
         (ulonglong)_DAT_180b46610 * (ulonglong)uVar15 << 0x20) +
        (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_180b46610) -
       ((ulonglong)uVar9 * (ulonglong)_DAT_180b466d0 +
        ((ulonglong)_DAT_180b46700 * (ulonglong)uVar9 +
         (SUB168(auVar10 ^ auVar16,0) >> 0x20) * (ulonglong)_DAT_180b466d0 << 0x20) +
        (ulonglong)uVar5 * (ulonglong)_DAT_180b466f0 +
        ((uVar6 >> 0x20) * (ulonglong)_DAT_180b466f0 + (ulonglong)_DAT_180b466e0 * (ulonglong)uVar5
        << 0x20) +
        (ulonglong)uVar17 * (ulonglong)_DAT_180b466f0 +
        ((uVar7 >> 0x20) * (ulonglong)_DAT_180b466f0 + (ulonglong)uVar17 * (ulonglong)_DAT_180b466e0
        << 0x20) +
        ((uVar1 & 0xffffffff) * (ulonglong)_DAT_180b466a0 +
         (ulonglong)uVar11 * (ulonglong)_DAT_180b46690 << 0x20) +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_180b46690 +
       ((unaff_RDI & 0xffffffff) * (ulonglong)_DAT_180b466c0 +
        (ulonglong)uVar15 * (ulonglong)_DAT_180b466b0 << 0x20) +
       (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_180b466b0)) + 0x264bb981aa15daa9;
  _DAT_183181840 = _DAT_183181ed0 ^ uVar4;
  _DAT_1831817f0 = (_DAT_1831817f0 ^ uVar4) + _DAT_183181ed0 ^ 0xf7a51a2badaf84d1;
  _DAT_183181da0 = (_DAT_183181da0 * 0xd2aa8da5c300625 ^ _DAT_1831817f0) + uVar4;
  _DAT_183181d40 = _DAT_183181da0 ^ _DAT_1831817f0;
  lVar3 = unaff_RBP + -0x30;
  FUN_18414b520(lVar3);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar3 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 8),lVar3);
  switch(0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7226945 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187226945(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  
  *(undefined8 *)(unaff_RBP + 0x40) = *(undefined8 *)(unaff_RBP + -0x30);
  *(longlong *)(unaff_RBP + 0x78) = param_3;
  *(longlong *)(unaff_RBP + 0x80) = param_3 + 1;
  uVar1 = (_DAT_183181740 ^ _DAT_180b46710) + _DAT_183181d48 + 0xe45e748ffeee83d4;
  uVar2 = (_DAT_183181d48 ^ _UNK_180b46718) + _DAT_183181740 + 0x363842a70b5763a9;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183181740 ^ _DAT_180b46710;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183181d48 ^ _UNK_180b46718;
  _DAT_183181d78 =
       func_0x000187249450((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183181740 + 0x363842a70b5763a9) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183181d48 + 0xe45e748ffeee83d4));
  _DAT_183181810 =
       (_DAT_183181810 ^ _DAT_183181d78 ^ 0x1c75606e3af6d2e8) + 0xd2663628719bc358 ^
       0x3e9f6e3430065873;
  _DAT_183181e60 =
       (_DAT_183181e60 * -0x5c97e4e3d0798b51 ^ _DAT_183181810) +
       (_DAT_183181d78 ^ 0x1c75606e3af6d2e8);
  _DAT_1831817c0 = _DAT_183181e60 ^ _DAT_183181810;
  _DAT_183181ad8 = 0xd2663628719bc358;
  _DAT_183181af0 = func_0x000187249450(_DAT_183181cd8 + 0x7e6da2689a69f1f8U ^ 0x13);
  _DAT_183181778 =
       ((_DAT_183181af0 >> 0x1c) * 2 ^ _DAT_183181778) + 0xf619457de3c34b42 ^ 0x5a0f9de2e7674acf;
  _DAT_183181968 =
       (_DAT_183181968 * -0x12cdc2135f7e44b7 ^ _DAT_183181778) + (_DAT_183181af0 >> 0x1c) * 2;
  _DAT_1831817d8 = _DAT_183181778 ^ _DAT_183181968;
  _DAT_183181e98 = 0xf619457de3c34b42;
  uVar1 = (_DAT_1831817c8 ^ _DAT_180b46720) + _DAT_183181ca8 + 0x84222cda;
  uVar2 = (_DAT_183181ca8 ^ _UNK_180b46728) + _DAT_1831817c8 + 0x9e6ba821c3cb4be;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831817c8 ^ _DAT_180b46720;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183181ca8 ^ _UNK_180b46728;
  _DAT_183181ef0 =
       func_0x000187249450((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831817c8 + 0x9e6ba821c3cb4be) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183181ca8 + 0x84222cda));
  uVar2 = _DAT_183181ef0 ^ 0x61c16741af0f2b42;
  uVar1 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar2;
  _DAT_183181da8 = _DAT_183181830 ^ uVar2 ^ 0x9e6ba821c3cc4bd;
  _DAT_183181d58 = (_DAT_183181d58 ^ uVar2) + 0x9e6ba821c3cc4bd ^ 0x1b8ec0842a55b193;
  _DAT_183181b20 = (_DAT_183181b20 * -0x76abb7496fd74e0d ^ _DAT_183181d58) + uVar2;
  _DAT_183181ab0 = _DAT_183181b20 ^ _DAT_183181d58;
  _DAT_183181960 = 0x9e6ba821c3cc4bd;
  _DAT_183181ab8 = func_0x000187249450(_DAT_183181950 + 0x208206e53d74adb2 ^ 0x2e);
  uVar1 = _DAT_183181ab8 - (_DAT_183181ab8 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183181ab8;
  _DAT_183181950 = (_DAT_183181950 ^ uVar1) + 0xace668df548f5e1d ^ 0x6821f4b660e995d4;
  _DAT_183181940 = (_DAT_183181940 * -0x5c22a54f5a7d1f3 ^ _DAT_183181950) + uVar1;
  _DAT_183181e20 = _DAT_183181940 ^ _DAT_183181950;
  _DAT_183181af0 = 0xace668df548f5e1d;
  _DAT_183181878 = func_0x000187249450(_DAT_183181980 ^ 0xd2c37ac4254cb2ce);
  uVar1 = _DAT_183181878 >> 1 | _DAT_183181878;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ _DAT_183181878) & 0xfffffffffffffff8;
  _DAT_183181e78 = _DAT_183181dd0 ^ uVar1 ^ 0xfff;
  _DAT_183181a20 = (_DAT_183181a20 ^ uVar1) + 0xfff ^ 0xc8b64fb0fb2129e9;
  _DAT_183181a50 = (_DAT_183181a50 * 0x6b10b535e19bb401 ^ _DAT_183181a20) + uVar1;
  _DAT_183181840 = _DAT_183181a50 ^ _DAT_183181a20;
  _DAT_183181b50 = 0xfff;
  _DAT_183181960 = func_0x000187249450(_DAT_1831818e8 ^ 0xbcdb4d8938791a96);
  uVar1 = _DAT_183181960 - (_DAT_183181960 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((ulonglong)
           ((uint)((((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2) ^
           (uint)_DAT_183181960) & 0x3fff) << 0x15 | _DAT_183181960 >> 0x2b;
  _DAT_183181b88 = (_DAT_183181b88 ^ uVar1) + 0x34a9453a8020f903 ^ 0xe5a9d240d1162c6d;
  _DAT_183181770 = (_DAT_183181770 * 0x35711d6736ad7ff7 ^ _DAT_183181b88) + uVar1;
  _DAT_183181dc8 = _DAT_183181770 ^ _DAT_183181b88;
  _DAT_183181c40 = 0x34a9453a8020f903;
  uVar1 = (~_DAT_183181c30 + 0xcb56bac57fdf06fe) *
          ((_DAT_183181948 ^ 0x84222cda) + (ulonglong)((uint)_DAT_183181948 & 0x84222cda) * 2);
  uVar1 = (uVar1 | _DAT_183181dd8) + (uVar1 & _DAT_183181dd8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183181c60 = func_0x000187249450((uVar1 | 0xcb56bac5fbfd2a27) + (uVar1 & 0xcb56bac5fbfd2a27));
  uVar1 = _DAT_183181c60 & 0x7ffffffffffff;
  _DAT_183181ea8 = _DAT_1831817d8 ^ uVar1 ^ 0xcb56bac57fdf16fc;
  _DAT_183181858 = (_DAT_183181858 ^ uVar1) + 0xcb56bac57fdf16fc ^ 0xeb13fe3a993d3e05;
  _DAT_183181b10 = (_DAT_183181b10 * -0x5651f2507d1210f7 ^ _DAT_183181858) + uVar1;
  _DAT_183181ad0 = _DAT_183181b10 ^ _DAT_183181858;
  _DAT_183181e30 = 0xcb56bac57fdf16fc;
  uVar1 = (_DAT_183181e38 ^ _DAT_180b46730) + _DAT_183181b78 + 0xcb56bac5fbfd35d9;
  uVar2 = (_DAT_183181b78 ^ _UNK_180b46738) + _DAT_183181e38 + 0x34a9453a8020f903;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183181e38 ^ _DAT_180b46730;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183181b78 ^ _UNK_180b46738;
  _DAT_183181a60 =
       func_0x000187249450((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183181e38 + 0x34a9453a8020f903) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183181b78 + 0xcb56bac5fbfd35d9));
  _DAT_1831819d0 = _DAT_183181ce0 ^ _DAT_183181a60 ^ 0xfff;
  _DAT_183181788 = (_DAT_183181788 ^ _DAT_183181a60) + 0xfff ^ 0x17f7706c683e7eae;
  _DAT_183181e90 =
       (_DAT_183181760 * -0x741a35479ed5901f ^ _DAT_183181788) + _DAT_183181a60 ^ _DAT_183181788;
  _DAT_183181760 = 0xfff;
  _DAT_183181780 = func_0x000187249450(_DAT_183181dd0 ^ 0x32f37edb02ab41fb);
  _DAT_183181d70 =
       (_DAT_183181d70 ^ _DAT_183181780 & 0xffffffffffff0000) + 0x2c83d557af652f27 ^
       0xbf57be2f7fe94b49;
  _DAT_183181998 =
       (_DAT_183181998 * -0x1edfa24fcfd97dd5 ^ _DAT_183181d70) +
       (_DAT_183181780 & 0xffffffffffff0000);
  _DAT_183181b38 = _DAT_183181998 ^ _DAT_183181d70;
  _DAT_183181b00 = 0x2c83d557af652f27;
  _DAT_183181cb0 = func_0x000187249450(_DAT_183181ea0 ^ 0x37037d190234c3b6);
  _DAT_1831819f0 =
       (_DAT_1831819f0 ^ _DAT_183181cb0 ^ 0xd2663628719bc358) + 0xd2642228509ac058 ^
       0x156089fdc7a1ddb7;
  _DAT_183181e40 =
       (_DAT_183181e40 * -0x41b2d8cdc4a5da81 ^ _DAT_1831819f0) +
       (_DAT_183181cb0 ^ 0xd2663628719bc358);
  _DAT_183181b80 = _DAT_183181e40 ^ _DAT_1831819f0;
  _DAT_183181c30 = 0xd2642228509ac058;
  uVar1 = (_DAT_183181dc0 ^ _DAT_180b46740) + _DAT_183181cc8 + 0x2c83d5572b470c02;
  uVar2 = (_DAT_183181cc8 ^ _UNK_180b46748) + _DAT_183181dc0 + 0xa4c84450a13580b0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183181dc0 ^ _DAT_180b46740;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183181cc8 ^ _UNK_180b46748;
  _DAT_183181930 =
       func_0x000187249450((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183181dc0 + 0xa4c84450a13580b0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183181cc8 + 0x2c83d5572b470c02));
  _DAT_183181bf0 = _DAT_183181978 ^ _DAT_183181930 ^ 0xd14c19a8509aafd7;
  _DAT_1831819d8 = (_DAT_1831819d8 ^ _DAT_183181930) + 0xd14c19a8509aafd7 ^ 0xf0cce3e49d75f5e7;
  _DAT_183181b08 = (_DAT_183181b08 * -0x32828625153f8aef ^ _DAT_1831819d8) + _DAT_183181930;
  _DAT_183181cc8 = _DAT_183181b08 ^ _DAT_1831819d8;
  _DAT_183181d80 = 0xd14c19a8509aafd7;
  uVar1 = (~_DAT_183181b50 + 0xd14c19a8509aafd8) *
          ((_DAT_183181850 ^ 0xd14c19a8d4b88cf2) + (_DAT_183181850 & 0x514c19a8d4b88cf2) * 2);
  uVar1 = (uVar1 | _DAT_183181e98) + (uVar1 & _DAT_183181e98);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183181d28 = func_0x000187249450((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_183181ef8 = _DAT_1831818d0;
  _DAT_183181ac0 = _DAT_183181ac0 ^ _DAT_1831818d0 ^ 0x88c0d2eed09caccc;
  _DAT_183181e50 = (_DAT_183181e50 * 0x4d05e8a78faa6d13 ^ _DAT_183181ac0) + _DAT_1831818d0;
  _DAT_183181d30 = _DAT_183181e50 ^ _DAT_183181ac0;
  _DAT_183181ad8 = 0;
  _DAT_183181818 = func_0x000187249450(_DAT_1831819d0 + 0xffebff83d6001dff ^ 0xf1);
  uVar1 = _DAT_183181818 * -0x19f7148d5420ae5 ^ 0xfff;
  _DAT_183181798 = _DAT_183181810 ^ uVar1 ^ 0xfff;
  _DAT_183181710 = (_DAT_183181710 ^ uVar1) + 0xfff ^ 0x47c837bc41b660fa;
  _DAT_183181e90 = (_DAT_183181e90 * 0x2e7d04371e107af5 ^ _DAT_183181710) + uVar1;
  _DAT_183181928 = _DAT_183181e90 ^ _DAT_183181710;
  _DAT_183181e10 = 0xfff;
  uVar1 = (~_DAT_183181838 + 0x11a1c8021011381) *
          ((_DAT_183181888 ^ 0xfee5e37f5adccf5a) + (_DAT_183181888 & 0x7ee5e37f5adccf5a) * 2);
  uVar1 = (uVar1 | _DAT_183181e60) + (uVar1 & _DAT_183181e60);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183181830 = func_0x000187249450((uVar1 | 0xffffffff7bdddcda) + (uVar1 & 0xffffffff7bdddcda));
  uVar1 = (~_DAT_183181830 & 0x1fffffffffe0000) * 0x80;
  _DAT_183181ef0 = _DAT_183181ef0 ^ uVar1 ^ 0xba162d55ab76c8f1;
  _DAT_183181b90 = (_DAT_183181b90 * 0xb1d1f6c6bc1e855 ^ _DAT_183181ef0) + uVar1;
  _DAT_183181db0 = _DAT_183181b90 ^ _DAT_183181ef0;
  _DAT_183181ad0 = 0;
  uVar1 = ((_DAT_1831817d8 ^ 0x84222cda) + (ulonglong)((uint)_DAT_1831817d8 & 0x84222cda) * 2) *
          -_DAT_183181808;
  uVar1 = (uVar1 | _DAT_183181c88) + (uVar1 & _DAT_183181c88);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183181a68 = func_0x000187249450((uVar1 | 0x84222cda) + (ulonglong)((uint)uVar1 & 0x84222cda))
  ;
  uVar1 = _DAT_183181a68 ^ 0xfff;
  _DAT_183181ab8 = _DAT_183181a18 ^ uVar1 ^ 0xfff;
  _DAT_183181ca8 = (_DAT_183181ca8 ^ uVar1) + 0xfff ^ 0xc1de66741d7c8fdf;
  _DAT_183181710 = (_DAT_183181710 * -0x6051edb697cb537 ^ _DAT_183181ca8) + uVar1;
  _DAT_1831817b0 = _DAT_183181710 ^ _DAT_183181ca8;
  _DAT_1831818b8 = 0xfff;
  uVar1 = (_DAT_183181b48 ^ _DAT_180b46750) + _DAT_183181e60 + 0x7ce5a1475ad8c76a;
  uVar2 = (_DAT_183181e60 ^ _UNK_180b46758) + _DAT_183181b48 + 0x7ce5a147defae44f;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_183181b48 ^ _DAT_180b46750;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183181e60 ^ _UNK_180b46758;
  _DAT_183181ca0 =
       func_0x000187249450((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183181b48 + 0x7ce5a147defae44f) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_183181e60 + 0x7ce5a1475ad8c76a));
  uVar1 = _DAT_183181ca0 ^ 0x7ce5a147defae44f;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar1) *
          0x50703f1abf86161;
  _DAT_183181e78 = _DAT_183181e78 ^ uVar1 ^ 0xe2c7ca3592a3e646;
  _DAT_183181838 = (_DAT_183181838 * -0x749030a35577aadd ^ _DAT_183181e78) + uVar1;
  _DAT_183181d38 = _DAT_183181838 ^ _DAT_183181e78;
  _DAT_183181ec0 = 0;
  switch(0xfff < *(ulonglong *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x722d76c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18722d76c(void)

{
  uint uVar1;
  uint uVar2;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  ulonglong uVar4;
  
  _DAT_183181cf0 = func_0x000187249450(_DAT_183181e10 ^ 0x7d00c0e6000607);
  _DAT_183181b90 = (_DAT_183181b90 ^ _DAT_183181cf0 ^ 0xe27f6c1e) + 0xe77fee5f ^ 0xbe7babc880e60ec6;
  _DAT_183181ec8 =
       (_DAT_183181ec8 * 0x5978964f9da4182d ^ _DAT_183181b90) + (_DAT_183181cf0 ^ 0xe27f6c1e);
  _DAT_183181aa0 = _DAT_183181ec8 ^ _DAT_183181b90;
  _DAT_1831818c0 = 0xe77fee5f;
  uVar3 = (_DAT_183181958 ^ _DAT_180b45da0) + _DAT_183181d60 + 0xdbe36f49;
  uVar4 = (_DAT_183181d60 ^ _UNK_180b45da8) + _DAT_183181958 + 0xa9c1fe1a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181958 ^ _DAT_180b45da0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181d60 ^ _UNK_180b45da8;
  _DAT_1831817e8 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181958 + 0xa9c1fe1a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181d60 + 0xdbe36f49));
  _DAT_183181bd0 = (_DAT_183181bd0 ^ _DAT_1831817e8 ^ 0xf600b276) + 0xf600b276 ^ 0x37010226ea10f4a9;
  _DAT_183181ee0 =
       (_DAT_183181ee0 * 0x172df49a7b863aa3 ^ _DAT_183181bd0) + (_DAT_1831817e8 ^ 0xf600b276);
  _DAT_183181c88 = _DAT_183181ee0 ^ _DAT_183181bd0;
  _DAT_183181738 = 0xf600b276;
  uVar3 = (~_DAT_183181740 + 0x2d0adcba) *
          ((_DAT_183181d90 ^ 0x84222325) + (ulonglong)((uint)_DAT_183181d90 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183181770) + (uVar3 & _DAT_183181770);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181718 = func_0x000187249450((uVar3 | 0xa928ff9c) + (ulonglong)((uint)uVar3 & 0xa928ff9c))
  ;
  _DAT_183181b10 =
       (_DAT_183181b10 ^ _DAT_183181718 & 0xfffffffffffff000) - 0x2d0adcb9 ^ 0x48f2e6bf52cbc8a6;
  _DAT_183181bd0 =
       (_DAT_183181bd0 * -0x40f71b089f29bc9f ^ _DAT_183181b10) +
       (_DAT_183181718 & 0xfffffffffffff000);
  _DAT_183181ec8 = _DAT_183181bd0 ^ _DAT_183181b10;
  _DAT_183181b50 = 0xd2f52347;
  uVar3 = (~_DAT_183181830 + 0x2d0adcba) *
          ((_DAT_1831817b8 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1831817b8 & 0x842223fa) * 2);
  uVar3 = (uVar3 | _DAT_183181ce0) + (uVar3 & _DAT_183181ce0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x000187249450((uVar3 | 0xa928ff43) + (ulonglong)((uint)uVar3 & 0xa928ff43));
  uVar4 = (uVar3 & 0x7ffffffffffffc00) << 0x14 | (uVar3 & 0x7ffffffffffffc00) >> 0x2c;
  _DAT_183181d10 = _DAT_183181e28 ^ uVar4 ^ 0x2d0add98;
  _DAT_183181d80 = (uVar3 ^ uVar4) + 0x2d0add98 ^ 0x8ecdd633156984ed;
  _DAT_183181820 = (_DAT_183181820 * 0x5c2598b743b63241 ^ _DAT_183181d80) + uVar4;
  _DAT_183181a28 = _DAT_183181820 ^ _DAT_183181d80;
  _DAT_1831817b8 = 0x2d0add98;
  _DAT_183181d90 = func_0x000187249450(_DAT_183181730 ^ 0xff45004465ffdc8a);
  uVar1 = ~(uint)_DAT_183181d90 & 0x2d0add98;
  uVar2 = uVar1 >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar3 = (ulonglong)uVar2 - (ulonglong)(uVar2 >> 1 & 0x55555555);
  uVar3 = (uVar3 & unaff_RDI) + (uVar3 >> 2 & unaff_RDI);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          (ulonglong)uVar1;
  _DAT_183181810 = _DAT_183181e40 ^ uVar3 ^ 0x1000000df;
  _DAT_183181b18 = (_DAT_183181b18 ^ uVar3) + 0x1000000df ^ 0x752aeda42d3de3e3;
  _DAT_183181850 = (_DAT_183181850 * 0x452a286fe3acec8f ^ _DAT_183181b18) + uVar3;
  _DAT_183181ed8 = _DAT_183181850 ^ _DAT_183181b18;
  _DAT_1831819b8 = _DAT_183181c90 ^ 0x1000000df;
  _DAT_183181e28 = 0xdf;
  uVar3 = (_DAT_183181a90 ^ _DAT_180b45db0) + _DAT_183181a40 + 0x842223fa;
  uVar4 = (_DAT_183181a40 ^ _UNK_180b45db8) + _DAT_183181a90 + 0x5cbb4eb0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181a90 ^ _DAT_180b45db0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181a40 ^ _UNK_180b45db8;
  _DAT_183181a30 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181a90 + 0x5cbb4eb0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181a40 + 0x842223fa));
  uVar3 = _DAT_183181a30 * 0x6f2c0827f699a625 & 0xffffffffe0000000;
  _DAT_183181cf0 = _DAT_183181728 ^ uVar3 ^ 0x5cbb4f8f;
  _DAT_183181b18 = (_DAT_183181b18 ^ uVar3) + 0x5cbb4f8f ^ 0xbe112121887f124a;
  _DAT_1831817a0 = (_DAT_1831817a0 * 0x7a177eddfafce0af ^ _DAT_183181b18) + uVar3;
  _DAT_183181960 = _DAT_1831817a0 ^ _DAT_183181b18;
  _DAT_183181bb0 = 0x5cbb4f8f;
  uVar3 = (_DAT_183181888 ^ _DAT_180b45dc0) + _DAT_183181ed0 + 0xd8996caa;
  uVar4 = (_DAT_183181ed0 ^ _UNK_180b45dc8) + _DAT_183181888 + 0xa344b150;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181888 ^ _DAT_180b45dc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181ed0 ^ _UNK_180b45dc8;
  _DAT_183181d88 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181888 + 0xa344b150) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181ed0 + 0xd8996caa));
  uVar3 = _DAT_183181d88 << 0x2c | _DAT_183181d88 >> 0x14;
  _DAT_1831819f0 = _DAT_183181a60 ^ uVar3 ^ 0x1000000df;
  _DAT_183181960 = (_DAT_183181960 ^ uVar3) + 0x1000000df ^ 0x7d879788b2d61036;
  _DAT_183181e18 = (_DAT_183181e18 * -0x2ba2cf2932974e0b ^ _DAT_183181960) + uVar3;
  _DAT_183181e38 = _DAT_183181e18 ^ _DAT_183181960;
  _DAT_183181c10 = 0xdf;
  _DAT_1831819c8 = func_0x000187249450(_DAT_183181e88 ^ 0xa00063beffb4e4);
  _DAT_183181ae8 =
       (_DAT_183181ae8 ^ _DAT_1831819c8 & 0x7ffffffffffffff) - 0x20f58364 ^ 0xe3885be86b22327d;
  _DAT_183181990 =
       (_DAT_183181990 * 0x9bf46c6a4ab1927 ^ _DAT_183181ae8) + (_DAT_1831819c8 & 0x7ffffffffffffff);
  _DAT_183181ec8 = _DAT_183181990 ^ _DAT_183181ae8;
  _DAT_183181a40 = 0xdf0a7c9c;
  uVar3 = (_DAT_183181da8 ^ _DAT_180b45dd0) + _DAT_183181c20 + 0xa4d7a766;
  uVar4 = (_DAT_183181c20 ^ _UNK_180b45dd8) + _DAT_183181da8 + 0xdf0a7c9c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181da8 ^ _DAT_180b45dd0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181c20 ^ _UNK_180b45dd8;
  _DAT_1831818c0 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181da8 + 0xdf0a7c9c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181c20 + 0xa4d7a766));
  uVar3 = _DAT_1831818c0 << 1 | (ulonglong)(_DAT_1831818c0 < 0);
  _DAT_1831818f0 = _DAT_183181a68 ^ uVar3 ^ 0x1000000df;
  _DAT_183181d08 = (_DAT_183181d08 ^ uVar3) + 0x1000000df ^ 0xe19609e0c9c2bfe;
  _DAT_183181ec0 = (_DAT_183181ec0 * -0x5fe3dac160bdabf7 ^ _DAT_183181d08) + uVar3;
  _DAT_183181a28 = _DAT_183181ec0 ^ _DAT_183181d08;
  _DAT_183181c00 = 0xdf;
  uVar3 = (~_DAT_183181e68 + 0xf600b277) *
          ((_DAT_183181720 ^ 0x635dcd7a) + (ulonglong)((uint)_DAT_183181720 & 0x635dcd7a) * 2);
  uVar3 = (uVar3 | _DAT_183181e50) + (uVar3 & _DAT_183181e50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181e38 = func_0x000187249450((uVar3 | 0x955d7f0c) + (ulonglong)((uint)uVar3 & 0x955d7f0c))
  ;
  uVar3 = (_DAT_183181e38 ^ 0xf77ffe7f) & 0x3ffffffffffff;
  uVar4 = ((_DAT_183181e38 ^ 0xf77ffe7f) & 0x3ffffffffffff) >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RDI) + (uVar4 >> 2 & unaff_RDI);
  uVar3 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar3) & 0xfffffffffffffff8;
  _DAT_183181980 = _DAT_183181740 ^ uVar3 ^ 0x1dd80a0d5;
  _DAT_183181920 = (_DAT_183181920 ^ uVar3) + 0x1dd80a0d5 ^ 0x50f2f307d0f453d6;
  _DAT_1831817a8 = (_DAT_1831817a8 * 0x5a3f63d560271df ^ _DAT_183181920) + uVar3;
  _DAT_183181eb8 = _DAT_1831817a8 ^ _DAT_183181920;
  _DAT_183181ed0 = 0xdd80a0d5;
  uVar3 = (~_DAT_183181910 + 0xf600b277) *
          ((_DAT_183181a20 ^ 0x635dcd7a) + (ulonglong)((uint)_DAT_183181a20 & 0x635dcd7a) * 2);
  uVar3 = (uVar3 | _DAT_183181c00) + (uVar3 & _DAT_183181c00);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181928 = func_0x000187249450((uVar3 | 0x955d7f0c) + (ulonglong)((uint)uVar3 & 0x955d7f0c))
  ;
  uVar3 = _DAT_1831818f0 >> 1 | _DAT_1831818f0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_RDI) + (uVar3 >> 2 & unaff_RDI);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1831818f0;
  _DAT_183181ce8 = (_DAT_183181ce8 ^ uVar3) + 0x117f5c29 ^ 0xb2b9cc23efcdc36d;
  _DAT_183181700 = (_DAT_183181700 * -0x8aa06536e68a51 ^ _DAT_183181ce8) + uVar3;
  _DAT_1831817e8 = _DAT_183181700 ^ _DAT_183181ce8;
  _DAT_183181d68 = 0x117f5c29;
  uVar3 = (~_DAT_183181d98 + 0xf600b277) *
          ((_DAT_183181820 ^ 0x635dcd7a) + (ulonglong)((uint)_DAT_183181820 & 0x635dcd7a) * 2);
  uVar3 = (uVar3 | _DAT_183181ac0) + (uVar3 & _DAT_183181ac0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181ce8 = func_0x000187249450((uVar3 | 0x955d7f0c) + (ulonglong)((uint)uVar3 & 0x955d7f0c))
  ;
  _DAT_183181718 = (_DAT_183181718 ^ _DAT_183181ce8) + 0xe600a256 ^ 0x2b5493746817db40;
  _DAT_183181de8 = (_DAT_183181de8 * -0x73cb215256bacceb ^ _DAT_183181718) + _DAT_183181ce8;
  _DAT_183181a90 = _DAT_183181de8 ^ _DAT_183181718;
  _DAT_183181738 = 0xe600a256;
  uVar3 = (_DAT_183181a08 ^ 0x842223fa) + _DAT_183181e68 + 0x842223fa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181a08 ^ 0x842223fa;
  uVar4 = ((_DAT_183181e68 + _DAT_183181a08) * 0x2000 | _DAT_183181e68 + _DAT_183181a08 >> 0x33) ^
          _DAT_183181e68;
  _DAT_183181e28 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_183181a08 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181e68 + 0x842223fa));
  uVar3 = _DAT_183181e28 ^ 0xdf;
  _DAT_183181cd8 = _DAT_1831819a8 ^ uVar3 ^ 0xdf;
  _DAT_183181a08 = (_DAT_183181a08 ^ uVar3) + 0xdf ^ 0x7d191440ca2d8520;
  _DAT_183181998 = (_DAT_183181998 * -0x4fab8a05523ae7cb ^ _DAT_183181a08) + uVar3;
  _DAT_183181b18 = _DAT_183181998 ^ _DAT_183181a08;
  _DAT_183181cf8 = 0xdf;
  uVar3 = (~_DAT_183181870 + 0x100000000) *
          ((_DAT_183181e40 ^ 0x635dcd7a) + (ulonglong)((uint)_DAT_183181e40 & 0x635dcd7a) * 2);
  uVar3 = (uVar3 | _DAT_183181ab0) + (uVar3 & _DAT_183181ab0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181be8 = func_0x000187249450((uVar3 | 0x9ca23285) + (ulonglong)((uint)uVar3 & 0x9ca23285))
  ;
  _DAT_183181bb0 = (_DAT_183181bb0 ^ _DAT_183181be8) + 0x188011a0 ^ 0x6dcccbc893f461b7;
  _DAT_183181b68 = (_DAT_183181b68 * -0x7243fdebfae6ed89 ^ _DAT_183181bb0) + _DAT_183181be8;
  _DAT_183181d90 = _DAT_183181b68 ^ _DAT_183181bb0;
  _DAT_1831818f8 = 0x188011a0;
  uVar3 = (~_DAT_183181ca0 + 0x188011a1) *
          ((_DAT_183181838 ^ 0x635dcd7a) + (ulonglong)((uint)_DAT_183181838 & 0x635dcd7a) * 2);
  uVar3 = (uVar3 | _DAT_1831819e8) + (uVar3 & _DAT_1831819e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181e70 = func_0x000187249450((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda))
  ;
  uVar3 = _DAT_183181e70 - (_DAT_183181e70 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_RDI) + (uVar3 >> 2 & unaff_RDI);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183181e70;
  _DAT_183181b58 = _DAT_183181b58 ^ uVar3 ^ 0xc4e131c813ef66d;
  _DAT_183181e78 = (_DAT_183181e78 * 0x150d737cbd2fe8f3 ^ _DAT_183181b58) + uVar3;
  _DAT_183181b70 = _DAT_183181e78 ^ _DAT_183181b58;
  _DAT_183181ee8 = 0;
  uVar3 = (_DAT_183181920 ^ _DAT_180b45de0) + _DAT_183181e18 + 0x2140e170;
  uVar4 = (_DAT_183181e18 ^ _UNK_180b45de8) + _DAT_183181920 + 0xa562c255;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181920 ^ _DAT_180b45de0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181e18 ^ _UNK_180b45de8;
  _DAT_183181ca8 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181920 + 0xa562c255) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181e18 + 0x2140e170));
  uVar3 = _DAT_183181ca8 << 0x12 | _DAT_183181ca8 >> 0x2e;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RDI) + (uVar4 >> 2 & unaff_RDI);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  _DAT_183181d10 = _DAT_183181d10 ^ uVar3 ^ 0xa26e5a9858d64bff;
  _DAT_183181920 = (_DAT_183181920 * -0x4e90013fb5bc414b ^ _DAT_183181d10) + uVar3;
  _DAT_183181a90 = _DAT_183181920 ^ _DAT_183181d10;
  _DAT_183181d00 = 0;
  _DAT_183181bb0 = func_0x000187249450(_DAT_183181c18 ^ 0xffdcff8466001da6);
  uVar3 = _DAT_183181bb0 & 0xfffffffffffff000;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & unaff_RDI) + (uVar4 >> 2 & unaff_RDI);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  _DAT_183181728 = _DAT_183181e08 ^ uVar3 ^ 0xdf;
  _DAT_183181ad8 = (_DAT_183181ad8 ^ uVar3) + 0xdf ^ 0xed09198d01ef2d56;
  _DAT_183181a20 = (_DAT_183181a20 * -0x45fd9a0af7a60a9 ^ _DAT_183181ad8) + uVar3;
  _DAT_183181700 = _DAT_183181a20 ^ _DAT_183181ad8;
  _DAT_183181d28 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x40)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x722eaa7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18722eaa7(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong *unaff_R13;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint unaff_XMM7_Da;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_1 + in_RAX + param_2;
  uVar3 = param_3 + in_RCX + 1;
  param_1 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_1;
  param_3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_3;
  _DAT_1831818c8 =
       func_0x000187249450((param_3 << 0x1d | param_3 >> 0x23) - (in_RCX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  uVar2 = (_DAT_1831818c8 ^ unaff_ESI) & (ulonglong)unaff_ESI;
  uVar4 = unaff_ESI & unaff_XMM7_Da;
  uVar5 = unaff_ESI ^ unaff_XMM7_Da;
  uVar6 = unaff_ESI ^ (uint)DAT_18001a710;
  uVar3 = ((ulonglong)uVar6 * (ulonglong)_DAT_180b46010 + _DAT_180b46020 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_180b46000 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180b45ff0 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180b45fe0 +
          ((ulonglong)uVar4 * (ulonglong)_DAT_180b45fd0 << 0x20 |
          (ulonglong)uVar4 * (ulonglong)_DAT_180b45fc0) +
          ((ulonglong)unaff_ESI * (ulonglong)_DAT_180b45fb0 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_180b45fa0 +
          (-(((ulonglong)uVar6 * (ulonglong)_DAT_180b46060 + _DAT_180b460b0 << 0x20) +
             (ulonglong)uVar6 * (ulonglong)_DAT_180b46050 +
            ((ulonglong)uVar5 * (ulonglong)_DAT_180b46080 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_180b46070 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_180b46080 << 0x20 |
            (ulonglong)uVar4 * (ulonglong)_DAT_180b46070) +
            ((ulonglong)unaff_ESI * (ulonglong)_DAT_180b46060 << 0x20) +
            (ulonglong)unaff_ESI * (ulonglong)_DAT_180b46050) -
          (((ulonglong)(unaff_ESI | unaff_XMM7_Da) * (ulonglong)_DAT_180b460a0 << 0x20) +
          (ulonglong)(unaff_ESI | unaff_XMM7_Da) * (ulonglong)_DAT_180b46090)) + 0x87dccd431e27525e;
  _DAT_183181a30 = _DAT_1831819b0 ^ uVar2 ^ uVar3;
  _DAT_183181b90 = (_DAT_183181b90 ^ uVar2) + uVar3 ^ 0xe7fd412ac3861835;
  _DAT_183181e40 = (_DAT_183181b48 * -0x7e7149133996f0b9 ^ _DAT_183181b90) + uVar2 ^ _DAT_183181b90;
  _DAT_183181b48 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x58) = (int)uVar3;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x58) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x58)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72323e0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872323e0(void)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint unaff_XMM7_Da;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 unaff_XMM15_Qb;
  
  *(undefined8 *)(unaff_RBP + 0x50) = *(undefined8 *)(unaff_RBP + 0x30);
  uVar1 = *(uint *)(unaff_RBP + 0x80);
  *(uint *)(unaff_RBP + 0x58) = uVar1;
  auVar5._8_8_ = unaff_XMM15_Qb;
  auVar5._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar5 = auVar5 ^ _DAT_180b45be0;
  *(bool *)(unaff_RBP + 0x80) = *(longlong *)(unaff_RBP + -8) == 0;
  auVar6 = pshufb(auVar5,_DAT_1800170c0);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar4 + _DAT_183181c20;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_183181ba0 ^ uVar4;
  }
  _DAT_183181730 = func_0x000187249450(auVar5[5] ^ uVar3);
  uVar7 = uVar1 & unaff_XMM7_Da;
  uVar8 = uVar1 ^ unaff_XMM7_Da;
  uVar9 = uVar1 ^ (uint)DAT_18001a710;
  uVar3 = _DAT_183181730 & 0xfffffffffffffffc;
  _DAT_183181e08 =
       ((ulonglong)uVar9 * (ulonglong)_DAT_180b45bf0 + _DAT_180b45c60 << 0x20) +
       (ulonglong)uVar9 * (ulonglong)_DAT_180b45c50 +
       ((ulonglong)uVar8 * (ulonglong)_DAT_180b45c20 << 0x20) +
       (ulonglong)uVar8 * (ulonglong)_DAT_180b45c10 +
       ((ulonglong)uVar7 * (ulonglong)_DAT_180b45c20 << 0x20 |
       (ulonglong)uVar7 * (ulonglong)_DAT_180b45c10) +
       (ulonglong)uVar1 * (ulonglong)_DAT_180b45c00 +
       ((ulonglong)uVar1 * (ulonglong)_DAT_180b45bf0 << 0x20) +
       ((ulonglong)(uVar1 | unaff_XMM7_Da) * (ulonglong)_DAT_180b45c40 << 0x20) +
       (ulonglong)(uVar1 | unaff_XMM7_Da) * (ulonglong)_DAT_180b45c30 +
       (-(((ulonglong)uVar8 * (ulonglong)_DAT_180b45ce0 << 0x20) +
         (ulonglong)uVar8 * (ulonglong)_DAT_180b45cd0) -
       (((ulonglong)uVar7 * (ulonglong)_DAT_180b45cc0 << 0x20 |
        (ulonglong)uVar7 * (ulonglong)_DAT_180b45cb0) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_180b45ca0 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_180b45c90)) + 0x459ae03c6ce0335b;
  _DAT_183181cc8 = _DAT_1831817b8 ^ uVar3 ^ _DAT_183181e08;
  _DAT_1831818e8 = (_DAT_1831818e8 ^ uVar3) + _DAT_183181e08 ^ 0x27864ced05a40e7b;
  _DAT_183181b28 = (_DAT_183181b28 * 0x2bb81b82f6fb1dd7 ^ _DAT_1831818e8) + uVar3;
  _DAT_183181bc0 = _DAT_183181b28 ^ _DAT_1831818e8;
  _DAT_183181e08 = _DAT_183181e08 & 0xffffffff;
  uVar3 = (~_DAT_183181e40 + 0x8e844654) *
          ((_DAT_183181c08 ^ 0x201b5d00) + (ulonglong)((uint)_DAT_183181c08 & 0x201b5d00) * 2);
  uVar3 = (uVar3 | _DAT_183181788) + (uVar3 & _DAT_183181788);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181dc8 = func_0x000187249450((uVar3 | 0xae9f1b53) + (ulonglong)((uint)uVar3 & 0xae9f1b53))
  ;
  _DAT_1831817f8 = (_DAT_1831817f8 ^ _DAT_183181dc8) + 0xaebd7e77 ^ 0x7f92919119fa46ea;
  _DAT_183181e60 = (_DAT_183181e60 * -0x39c16fd42e3cfb79 ^ _DAT_1831817f8) + _DAT_183181dc8;
  _DAT_183181820 = _DAT_183181e60 ^ _DAT_1831817f8;
  _DAT_183181b68 = 0xaebd7e77;
  uVar3 = (~_DAT_183181a40 + 0xc14e3be9) *
          ((_DAT_183181bd0 ^ 0x5ff8500c) + (ulonglong)((uint)_DAT_183181bd0 & 0x5ff8500c) * 2);
  uVar3 = (uVar3 | _DAT_183181920) + (uVar3 & _DAT_183181920);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181ac8 = func_0x000187249450((uVar3 | 0x9eb66be4) + (ulonglong)((uint)uVar3 & 0x9eb66be4))
  ;
  uVar3 = _DAT_183181ac8 << 0x31 | _DAT_183181ac8 >> 0xf;
  _DAT_183181de8 = (_DAT_183181de8 ^ uVar3) + 0x1a9448c1 ^ 0x7c8c2612f87f2770;
  _DAT_183181810 = (_DAT_183181810 * -0x2f93f102291e9723 ^ _DAT_183181de8) + uVar3;
  _DAT_183181b60 = _DAT_183181810 ^ _DAT_183181de8;
  _DAT_183181db8 = 0x1a9448c1;
  uVar3 = (_DAT_1831819b0 ^ _DAT_180b45cf0) + _DAT_183181d78 + 0x8422dcda;
  uVar4 = (_DAT_183181d78 ^ _UNK_180b45cf8) + _DAT_1831819b0 + 0xd701a731;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1831819b0 ^ _DAT_180b45cf0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181d78 ^ _UNK_180b45cf8;
  _DAT_183181e78 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831819b0 + 0xd701a731) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181d78 + 0x8422dcda));
  uVar3 = (_DAT_183181e78 ^ 0x58ce) << 0x10 | _DAT_183181e78 >> 0x30;
  _DAT_183181c10 = _DAT_183181e28 ^ uVar3 ^ 0xd702a730;
  _DAT_183181b80 = (_DAT_183181b80 ^ uVar3) + 0xd702a730 ^ 0xb29052a0186d84cf;
  _DAT_1831817f8 = (_DAT_1831817f8 * -0x7f7c635502591e9f ^ _DAT_183181b80) + uVar3;
  _DAT_183181bc0 = _DAT_1831817f8 ^ _DAT_183181b80;
  _DAT_183181b10 = 0xd702a730;
  uVar3 = (_DAT_183181c18 ^ _DAT_180b45d00) + _DAT_183181be0 + 0x53208415;
  uVar4 = (_DAT_183181be0 ^ _UNK_180b45d08) + _DAT_183181c18 + 0x28fe58cf;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181c18 ^ _DAT_180b45d00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181be0 ^ _UNK_180b45d08;
  _DAT_183181a40 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181c18 + 0x28fe58cf) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181be0 + 0x53208415));
  uVar3 = _DAT_183181a40 >> 1 | _DAT_183181a40;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_183181a40;
  _DAT_183181da8 = _DAT_183181910 ^ uVar3 ^ 0x10000ffff;
  _DAT_1831818c0 = (_DAT_1831818c0 ^ uVar3) + 0x10000ffff ^ 0x92b95e038f373709;
  _DAT_183181ee0 = (_DAT_183181ee0 * -0x37fd7392141d33f1 ^ _DAT_1831818c0) + uVar3;
  _DAT_183181a28 = _DAT_183181ee0 ^ _DAT_1831818c0;
  _DAT_183181c00 = 0xffff;
  uVar3 = (_DAT_183181990 ^ _DAT_180b45d10) + _DAT_183181d80 + 0x84222325;
  uVar4 = (_DAT_183181d80 ^ _UNK_180b45d18) + _DAT_183181990 + 0x84ceb1d4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181990 ^ _DAT_180b45d10;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181d80 ^ _UNK_180b45d18;
  _DAT_183181b58 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181990 + 0x84ceb1d4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181d80 + 0x84222325));
  _DAT_183181e88 = (_DAT_183181e88 ^ _DAT_183181b20 ^ 0x84ceb1d4) - 0x84ceb1d4 ^ 0x2fe35f64c3e234f8;
  _DAT_183181a58 =
       (_DAT_183181a58 * -0x57f8f2496f05f34f ^ _DAT_183181e88) + (_DAT_183181b20 ^ 0x84ceb1d4);
  _DAT_183181cd8 = _DAT_183181a58 ^ _DAT_183181e88;
  _DAT_183181940 = 0x7b314e2c;
  uVar3 = (_DAT_180b45d20 ^ 0x7b314e2c) + _DAT_183181af8 + 0x8422dcda;
  uVar4 = (_DAT_183181af8 ^ _UNK_180b45d28) + 0x100000000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_180b45d20 ^ 0x7b314e2c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181af8 ^ _UNK_180b45d28;
  _DAT_183181b38 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - 0x100000000 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181af8 + 0x8422dcda));
  _DAT_1831817a0 = _DAT_183181bc8 ^ _DAT_183181768 ^ 0x84cfb1d3;
  _DAT_183181b88 = (_DAT_183181b88 ^ _DAT_183181768) + 0x84cfb1d3 ^ 0x8175ba74dbb84686;
  _DAT_183181878 = (_DAT_183181878 * 0x4a47621ca06cf69b ^ _DAT_183181b88) + _DAT_183181768;
  _DAT_183181c30 = _DAT_183181878 ^ _DAT_183181b88;
  _DAT_183181e68 = 0x84cfb1d3;
  _DAT_183181b50 = func_0x000187249450(_DAT_183181eb0 + 0xff2c004839ffa3ffU ^ 0xe1);
  uVar3 = ((_DAT_183181b50 ^ 0xffffffff) & 0xffffffffffff) << 0xf | _DAT_183181b50 >> 0x31;
  _DAT_1831817f8 = _DAT_183181e60 ^ uVar3 ^ 0x10000ffff;
  _DAT_183181b40 = (_DAT_183181b40 ^ uVar3) + 0x10000ffff ^ 0xbadd1291fd486817;
  _DAT_183181d68 = (_DAT_183181d68 * 0x373e0ec49ec55853 ^ _DAT_183181b40) + uVar3;
  _DAT_183181e90 = _DAT_183181d68 ^ _DAT_183181b40;
  _DAT_183181970 = 0xffff;
  uVar3 = (_DAT_183181ef0 ^ _DAT_180b45d30) + _DAT_1831819b0 + 0x84222325;
  uVar4 = (_DAT_1831819b0 ^ _UNK_180b45d38) + _DAT_183181ef0 + 0xcd36d1c6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181ef0 ^ _DAT_180b45d30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831819b0 ^ _UNK_180b45d38;
  _DAT_183181980 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181ef0 + 0xcd36d1c6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831819b0 + 0x84222325));
  uVar3 = (_DAT_183181980 ^ 0xcd36d1c6) & 0x7fffffffffffffff;
  _DAT_183181e10 = (_DAT_183181e10 ^ uVar3) - 0xcd36d1c6 ^ 0xbfa3d8294d51eb9b;
  _DAT_183181d68 = (_DAT_183181d68 * -0x2805dff6fd8e4bff ^ _DAT_183181e10) + uVar3;
  _DAT_183181b70 = _DAT_183181d68 ^ _DAT_183181e10;
  _DAT_1831817d8 = 0x32c92e3a;
  uVar3 = (_DAT_183181e90 ^ _DAT_180b45d40) + _DAT_183181740 + 0x8422dcda;
  uVar4 = (_DAT_183181740 ^ _UNK_180b45d48) + _DAT_183181e90 + 0xcd36d1c6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181e90 ^ _DAT_180b45d40;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181740 ^ _UNK_180b45d48;
  _DAT_183181d80 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181e90 + 0xcd36d1c6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181740 + 0x8422dcda));
  uVar3 = _DAT_183181d80 ^ 0xffff;
  _DAT_183181a08 = _DAT_183181c38 ^ uVar3 ^ 0xcd37d1c5;
  _DAT_183181860 = (_DAT_183181860 ^ uVar3) + 0xcd37d1c5 ^ 0xc671f6a42e6e85c4;
  _DAT_183181b18 = (_DAT_183181b18 * -0x3c829851b1cb5e8f ^ _DAT_183181860) + uVar3;
  _DAT_183181710 = _DAT_183181b18 ^ _DAT_183181860;
  _DAT_183181ac0 = 0xcd37d1c5;
  uVar3 = (_DAT_183181d28 ^ _DAT_180b45d50) + _DAT_1831817d8 + 0x4915f2e0;
  uVar4 = (_DAT_1831817d8 ^ _UNK_180b45d58) + _DAT_183181d28 + 0x32c92e3a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181d28 ^ _DAT_180b45d50;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831817d8 ^ _UNK_180b45d58;
  _DAT_183181b98 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181d28 + 0x32c92e3a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831817d8 + 0x4915f2e0));
  uVar3 = _DAT_183181b98 & 0xffffffff80000000;
  _DAT_183181b18 = _DAT_1831818d8 ^ uVar3 ^ 0x10000ffff;
  _DAT_183181d00 = (_DAT_183181d00 ^ uVar3) + 0x10000ffff ^ 0x22895c40b32cdbef;
  _DAT_183181b28 = (_DAT_183181b28 * 0x3a04bad37bf092fb ^ _DAT_183181d00) + uVar3;
  _DAT_1831817b8 = _DAT_183181b28 ^ _DAT_183181d00;
  _DAT_183181a98 = 0xffff;
  uVar3 = (_DAT_183181ef8 ^ _DAT_180b45d60) + _DAT_183181bd0 + 0x2a9f5d52;
  uVar4 = (_DAT_183181bd0 ^ _UNK_180b45d68) + _DAT_183181ef8 + 0x1a9448c1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181ef8 ^ _DAT_180b45d60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181bd0 ^ _UNK_180b45d68;
  _DAT_183181828 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181ef8 + 0x1a9448c1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181bd0 + 0x2a9f5d52));
  uVar3 = _DAT_183181828 - (_DAT_183181828 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_183181828;
  _DAT_183181c50 = (_DAT_183181c50 ^ uVar3) + 0xa944841 ^ 0x483e8067c56cc375;
  _DAT_183181710 = (_DAT_183181710 * -0xee1f0582766a231 ^ _DAT_183181c50) + uVar3;
  _DAT_183181ea8 = _DAT_183181710 ^ _DAT_183181c50;
  _DAT_183181b40 = 0xa944841;
  uVar3 = (~_DAT_183181810 + 0x15289083) *
          ((_DAT_183181ab0 ^ 0x300b1593) + (ulonglong)((uint)_DAT_183181ab0 & 0x300b1593) * 2);
  uVar3 = (uVar3 | _DAT_183181a50) + (uVar3 & _DAT_183181a50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181a20 = func_0x000187249450((uVar3 | 0x25238511) + (ulonglong)((uint)uVar3 & 0x25238511))
  ;
  uVar3 = _DAT_183181a20 << 0x3d | (_DAT_183181a20 & 0x3ffffffff) >> 3;
  _DAT_1831818b8 = _DAT_183181720 ^ uVar3 ^ 0xc951c738;
  _DAT_183181e70 = (_DAT_183181e70 ^ uVar3) + 0xc951c738 ^ 0x683372ecea234050;
  _DAT_183181898 = (_DAT_183181898 * 0x5db5068013a47b1f ^ _DAT_183181e70) + uVar3;
  _DAT_183181988 = _DAT_183181898 ^ _DAT_183181e70;
  _DAT_183181ad8 = 0xc951c738;
  uVar3 = (_DAT_183181a50 ^ _DAT_180b45d70) + _DAT_1831819f0 + 0x4d73e41d;
  uVar4 = (_DAT_1831819f0 ^ _UNK_180b45d78) + _DAT_183181a50 + 0xc951c738;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181a50 ^ _DAT_180b45d70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831819f0 ^ _UNK_180b45d78;
  _DAT_183181bd0 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181a50 + 0xc951c738) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831819f0 + 0x4d73e41d));
  _DAT_183181b68 = _DAT_183181bd0 * -0x1bf490693e9cd4d1 ^ 0xc951c738;
  _DAT_183181c18 = _DAT_183181c18 ^ _DAT_183181b68 ^ 0x727dc2a836decc29;
  _DAT_183181938 = (_DAT_183181938 * -0x49e8b702f1838613 ^ _DAT_183181c18) + _DAT_183181b68;
  _DAT_183181978 = _DAT_183181938 ^ _DAT_183181c18;
  _DAT_183181858 = _DAT_183181d20;
  _DAT_183181710 = 0;
  uVar3 = (_DAT_183181be0 ^ 0x8422dcda) + _DAT_183181d08 + 0x8422dcda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181be0 ^ 0x8422dcda;
  uVar4 = ((_DAT_183181d08 + _DAT_183181be0) * 0x2000 | _DAT_183181d08 + _DAT_183181be0 >> 0x33) ^
          _DAT_183181d08;
  _DAT_183181ed0 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_183181be0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181d08 + 0x8422dcda));
  uVar3 = (ulonglong)(~(uint)_DAT_183181ed0 & 0xffff);
  _DAT_183181d68 = _DAT_183181d28 ^ uVar3 ^ 0xffff;
  _DAT_1831819e0 = (_DAT_1831819e0 ^ uVar3) + 0xffff ^ 0x8d98d6161c580e64;
  _DAT_183181ec0 = (_DAT_183181ec0 * -0x61ca8e3c2e6f2719 ^ _DAT_1831819e0) + uVar3;
  _DAT_183181aa8 = _DAT_183181ec0 ^ _DAT_1831819e0;
  _DAT_183181e70 = 0xffff;
  _DAT_183181988 = func_0x000187249450(_DAT_183181ba8 + 0xa1ff2c53001fffU ^ 0xbd);
  uVar3 = _DAT_183181988 << 0x26 | _DAT_183181988 >> 0x1a & 0xfffffffffffffff0;
  _DAT_183181ec0 = (_DAT_183181ec0 ^ uVar3) + 0x51428188 ^ 0x5bb80f68f8e977d4;
  _DAT_183181db8 = (_DAT_183181db8 * 0x497956eaef8c45cb ^ _DAT_183181ec0) + uVar3;
  _DAT_183181bb0 = _DAT_183181db8 ^ _DAT_183181ec0;
  _DAT_183181e80 = 0x51428188;
  uVar3 = (_DAT_183181a30 ^ _DAT_180b45d80) + _DAT_183181b68 + 0x2a9f5d52;
  uVar4 = (_DAT_183181b68 ^ _UNK_180b45d88) + _DAT_183181a30 + 0x51428188;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181a30 ^ _DAT_180b45d80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181b68 ^ _UNK_180b45d88;
  _DAT_1831817a8 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181a30 + 0x51428188) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181b68 + 0x2a9f5d52));
  _DAT_183181cf0 = _DAT_183181cf0 ^ _DAT_1831817a8 ^ 0xaebd7e77 ^ 0x8b651c86eb4a84ea;
  _DAT_183181900 =
       (_DAT_183181900 * -0x3863a8e6954ed1bd ^ _DAT_183181cf0) + (_DAT_1831817a8 ^ 0xaebd7e77);
  _DAT_183181df8 = _DAT_183181900 ^ _DAT_183181cf0;
  _DAT_183181ce8 = 0;
  uVar3 = (_DAT_183181b78 ^ _DAT_180b45d90) + _DAT_183181c00 + 0x201b5d00;
  uVar4 = (_DAT_183181c00 ^ _UNK_180b45d98) + _DAT_183181b78 + 0xa4397e25;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183181b78 ^ _DAT_180b45d90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183181c00 ^ _UNK_180b45d98;
  _DAT_183181d28 =
       func_0x000187249450((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183181b78 + 0xa4397e25) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183181c00 + 0x201b5d00));
  uVar3 = _DAT_183181d28 - (_DAT_183181d28 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = (uint)bVar2 + (uint)bVar2 ^ _DAT_183181d28;
  _DAT_183181ec8 = _DAT_183181ec8 ^ uVar3 ^ 0xf734bf5a9748d911;
  _DAT_1831818a8 = (_DAT_1831818a8 * 0x173b96ca043f1405 ^ _DAT_183181ec8) + uVar3;
  _DAT_183181cb8 = _DAT_1831818a8 ^ _DAT_183181ec8;
  _DAT_1831819d8 = 0;
  uVar3 = ((_DAT_183181bf0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183181bf0 & 0x8422dcda) * 2) *
          -_DAT_183181ab8;
  uVar3 = (uVar3 | _DAT_183181c98) + (uVar3 & _DAT_183181c98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183181818 = func_0x000187249450((uVar3 | 0x8422dcda) + (ulonglong)((uint)uVar3 & 0x8422dcda))
  ;
  uVar3 = _DAT_183181818 ^ 0xffff;
  _DAT_183181cf8 = _DAT_183181dc8 ^ uVar3 ^ 0xffff;
  _DAT_183181a70 = (_DAT_183181a70 ^ uVar3) + 0xffff ^ 0x3237985831ee7efb;
  _DAT_183181dd0 = (_DAT_183181dd0 * -0x535b23b7178849a5 ^ _DAT_183181a70) + uVar3;
  _DAT_183181c68 = _DAT_183181dd0 ^ _DAT_183181a70;
  _DAT_183181b18 = 0xffff;
  *(uint *)(unaff_RBP + 0x60) = *(uint *)(unaff_RBP + 0x40) & 0xffff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x80)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x723657b -----

undefined8 FUN_18723657b(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x50);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ----- block @ rva 0x723680d -----

void FUN_18723680d(void)

{
  return;
}


// ----- block @ rva 0x7236962 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187236962(longlong param_1)

{
  switch(0xf < *(ulonglong *)(param_1 + 0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x724bb21 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18724bb21(void)

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


// ----- block @ rva 0x724bba0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18724bba0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
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


// ----- block @ rva 0x724bce0 -----

void FUN_18724bce0(void)

{
  return;
}


// ----- block @ rva 0x724d803 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18724d803(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x724ddbf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18724c109(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x724e87b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18724e87b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x724e8bc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18724e8bc(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x724ec00 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18724ec00(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x724ec41 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18724ec41(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x724f953 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18724f953(void)

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


// ----- block @ rva 0x724fe68 -----

void FUN_18724fe68(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x725001a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18725001a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180b4bb08)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x7250026 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187250026(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0x7250043 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187250043(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_180b4bb28)();
  return;
}


// ----- block @ rva 0x725004c -----

void FUN_18725004c(void)

{
  return;
}


// ----- block @ rva 0x725004d -----

undefined4 * FUN_18725004d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x72500af -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872500af(void)

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


// ----- block @ rva 0x7250103 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187250103(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x725048c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18725048c(void)

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


// ----- block @ rva 0x725080e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18725080e(void)

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


// ----- block @ rva 0x7250856 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187250856(void)

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


// ----- block @ rva 0x7250ad6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187250ad6(void)

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


// ----- block @ rva 0x7250c0b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187250c0b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180b4bfd8)();
  return;
}


// ----- block @ rva 0x7250cb8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187250cb8(void)

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


// ----- block @ rva 0x7250d4c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187250d4c(void)

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


// ----- block @ rva 0x7250e33 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187250e33(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180b4be48)();
  return;
}


// ----- block @ rva 0x7250e68 -----

void FUN_187250e68(void)

{
  return;
}


// ----- block @ rva 0x7250e76 -----

void FUN_187250e76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7250fe0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187250fe0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180b4c198)();
  return;
}


// ----- block @ rva 0x72511e5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1872511e5(void)

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


// ----- block @ rva 0x7251787 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187251787(void)

{
  (*_DAT_180b4cd08)();
  return;
}


// ----- block @ rva 0x7251ce0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187251ce0(void)

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


// ----- block @ rva 0x7252ab9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187252ab9(void)

{
  FUN_190ddfc90();
  (*_DAT_180b4c788)();
  return;
}


// ----- block @ rva 0x7253166 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187253166(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180b4c978)();
  return;
}


// ----- block @ rva 0x7253355 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187253355(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180b4c748)();
  return;
}


// ----- block @ rva 0x7253503 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187253503(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180b4c4b8)();
  return;
}


// ----- block @ rva 0x72537fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872537fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180b4c808)();
  return;
}


// ----- block @ rva 0x7253862 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187253862(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180b4cd58)();
  return;
}


// ----- block @ rva 0x72538bd -----

void FUN_1872538bd(void)

{
  return;
}


// ----- block @ rva 0x72538d1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872538d1(void)

{
  (*_DAT_180b4cd08)();
  return;
}


// ----- block @ rva 0x72538dc -----

void FUN_1872538dc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7256388 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187256388(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x725652c -----

void FUN_18725652c(void)

{
  return;
}


// ----- block @ rva 0x7256d87 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187256d87(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7256dcc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187256dcc(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72580ba -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18725b047(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72581b5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18725b047(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x725939a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18725939a(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72596f5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1872596f5(void)

{
  longlong in_stack_00000048;
  
  switch(in_stack_00000048 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72598e9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872598e9(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x725a624 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18725b047(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x725ed9b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18725ed9b(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x725f48e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18725f48e(void)

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


// ----- block @ rva 0x725f4e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18725f4e2(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x725f787 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18725f787(void)

{
  longlong *unaff_RSI;
  undefined4 uStack0000000000000048;
  
  uStack0000000000000048 = 1;
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_180b4f4e8)();
  return;
}


// ----- block @ rva 0x725f84d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18725f84d(void)

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


// ----- block @ rva 0x725f9b5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18725f9b5(void)

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


// ----- block @ rva 0x725f9d0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18725f9d0(void)

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


// ----- block @ rva 0x725fa24 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18725fa24(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_18419fe70();
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


// ----- block @ rva 0x725fbc7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18725fbc7(void)

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


// ----- block @ rva 0x725fd8a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18725fd8a(void)

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


// ----- block @ rva 0x726023a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18726023a(void)

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


// ----- block @ rva 0x7260355 -----

void FUN_187260355(void)

{
  return;
}


// ----- block @ rva 0x7260364 -----

void FUN_187260364(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x72604dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872604dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180b4f978)();
  return;
}


// ----- block @ rva 0x7260559 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187260559(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x72609af -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1872609af(void)

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


// ----- block @ rva 0x726124b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18726124b(void)

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


// ----- block @ rva 0x726148b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18726148b(void)

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


// ----- block @ rva 0x72619a0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1872619a0(void)

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


// ----- block @ rva 0x72623a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1872623a2(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7262476 -----

void FUN_187262476(void)

{
  return;
}


// ----- block @ rva 0x726268c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18726268c(void)

{
  FUN_190dd72e0();
  (*_DAT_180b4fc18)();
  return;
}


// ----- block @ rva 0x72627b7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1872627b7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180b4f928)();
  return;
}


// ----- block @ rva 0x7262fb4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187262fb4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180b50208)();
  return;
}


// ----- block @ rva 0x726301a -----

void FUN_18726301a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7263282 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001872632dc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187263282(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x72b17fe -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001872b1815 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1872b17fe(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x72cc567 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001872cc57e */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1872cc567(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x72d89a4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001872d89e9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1872d89a4(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x11f0) = uVar1;
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x72d8aa4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001872d8ae9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1872d8aa4(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x1210) = uVar1;
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7346193 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873461aa */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187346193(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7366081 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873660d4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187366081(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x736d74d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018736d78c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18736d74d(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = FUN_184117d50();
  *(undefined8 *)(unaff_RBP + 0x11e8) = uVar1;
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x738509d -----

void FUN_18738509d(void)

{
  return;
}


// ----- block @ rva 0x73852b8 -----

void FUN_1873852b8(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x739b879 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018739b8cc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18739b879(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x73a4878 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873a4896 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1873a4878(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x170));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x73a7c7d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1873a7c7d(void)

{
  longlong *plVar1;
  undefined1 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x170);
  (*in_RAX)(plVar1);
  (**(code **)(plVar1 + JNI->NewStringUTF /*0x538*/))(plVar1,&UNK_182f6eb55);
  (**(code **)(plVar1 + JNI->SetObjectArrayElement /*0x570*/))(plVar1);
  (**(code **)(plVar1 + JNI->SetObjectArrayElement /*0x570*/))(plVar1);
  uVar2 = FUN_190dc1be0(0xf50,unaff_RBP + 0x140);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x73a83bf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1873a83bf(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 <= *(int *)(unaff_RBP + 0xf0) || *(int *)(unaff_RBP + 0xf0) < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x73abb78 -----

void FUN_1873abb78(void)

{
  longlong unaff_RBP;
  
                    /* WARNING: Could not recover jumptable at 0x0001873abb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b92cc8 + (ulonglong)(*(uint *)(unaff_RBP + 0xe0) >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x73b2f03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873b2f25 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1873b2f03(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  
  (**(code **)(in_RAX + 0x720))(*(undefined8 *)(unaff_RBP + 0x170));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x73bd2f7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1873bd2f7(void)

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


// ----- block @ rva 0x73c0b6e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1873c0b6e(void)

{
  char cVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  FUN_190de3220();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x170));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x73c9010 -----

void FUN_1873c9010(void)

{
  return;
}


// ----- block @ rva 0x73e26d2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873e2725 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1873e26d2(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x73e50c6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873e5101 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1873e50c6(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x73ee73e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873ee783 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1873ee73e(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x120) = uVar1;
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x73fccd2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873fcd2d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1873fccd2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_184117d50();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x73fd958 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873fd996 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1873fd958(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x73fee4e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001873fee69 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1873fee4e(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7411bbf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187411bbf(void)

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


// ----- block @ rva 0x7415f4b -----

void FUN_187415f4b(void)

{
  return;
}


// ----- block @ rva 0x741600c -----

void FUN_18741600c(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x742f4b5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18742f4b5(void)

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


// ----- block @ rva 0x743238e -----

void FUN_18743238e(void)

{
  return;
}


// ----- block @ rva 0x7436d0a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187436d0a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x1d0);
  uVar3 = FUN_190dd72e0(plVar1,param_2,0x14);
  *(undefined8 *)(unaff_RBP + 0x1c8) = uVar3;
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x74615fb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187461675 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1874615fb(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar2 = (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  *(undefined8 *)(unaff_RBP + 0x1b0) = uVar2;
  plVar1 = *(longlong **)(unaff_RBP + 0x1d0);
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))(plVar1);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x2fa,0x13);
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7467376 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187467394 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187467376(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x747e372 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018747e390 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18747e372(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x748cf47 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018748cfba */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18748cf47(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar2 = (**(code **)(unaff_RSI + JNI->NewGlobalRef /*0xa8*/))();
  FUN_190dcd3d0(0xffe,uVar2);
  plVar1 = *(longlong **)(unaff_RBP + 0x1d0);
  uVar2 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x409,0x16);
  *(undefined8 *)(unaff_RBP + 0x1c8) = uVar2;
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x1d0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x748f405 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018748f45f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18748f405(void)

{
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x1d0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x74a4d9d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001874a4dbf */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1874a4d9d(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  
  (**(code **)(in_RAX + 0x720))(*(undefined8 *)(unaff_RBP + 0x1d0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x74c65c8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1874c65c8(void)

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


// ----- block @ rva 0x74cb5b5 -----

void FUN_1874cb5b5(void)

{
  return;
}


// ----- block @ rva 0x74eda68 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001874eda86 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1874eda68(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x1d0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x74eed46 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1874f45b0(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBP + 0x140) = unaff_RDI;
  plVar1 = *(longlong **)(unaff_RBP + 0x1d0);
  (**(code **)(plVar1 + JNI->ExceptionClear /*0x88*/))(plVar1);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x1521c,0x34d);
  *(undefined8 *)(unaff_RBP + 0x1c8) = uVar3;
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x750d342 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018750d360 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18750d342(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x1d0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x75399ae -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001875399cc */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1875399ae(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x1d0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7556665 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001875566bb */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187556665(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x1d0);
  uVar2 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x1521c,0x34d);
  *(undefined8 *)(unaff_RBP + 0x1c8) = uVar2;
  (**(code **)(plVar1 + JNI->IsInstanceOf /*0x100*/))(*(undefined8 *)(unaff_RBP + 0x1d0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x755e3db -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18755e3f3(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBP + 0x140) = unaff_RDI;
  plVar1 = *(longlong **)(unaff_RBP + 0x1d0);
  (**(code **)(plVar1 + JNI->ExceptionClear /*0x88*/))(plVar1);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x1521c,0x34d);
  *(undefined8 *)(unaff_RBP + 0x1c8) = uVar3;
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x756f17d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18756f17d(void)

{
  char cVar1;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x1d0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x75901af -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1875901af(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x1c8) = in_RAX;
  cVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x1d0) + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x75b274c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001875b27aa */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1875b274c(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x3e0);
  FUN_190ddce00(plVar1,unaff_RBP + 0x3d0,*_DAT_18301ee50 + 0x1c259,*_DAT_18301ee50 + 0x8e,0x1091);
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x3e0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x75d429d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001875d4303 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1875d429d(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x3e0);
  uVar2 = (**(code **)(plVar1 + JNI->NewStringUTF /*0x538*/))(plVar1,&UNK_182f6fb7a);
  FUN_184117d80(plVar1,*(undefined8 *)(unaff_RBP + 0x310),*(undefined8 *)(unaff_RBP + 0x3a0),
                *(undefined8 *)(unaff_RBP + 0x3b8),uVar2);
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x3e0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x767ed42 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018767ed64 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18767ed42(void)

{
  longlong unaff_RBP;
  
  (**(code **)(**(longlong **)(unaff_RBP + 0x3e0) + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x767f106 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018767f171 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18767f106(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  
  (**(code **)(**(longlong **)(unaff_RBP + 0x3e0) + 0x560))
            (*(longlong **)(unaff_RBP + 0x3e0),2,*(undefined8 *)(unaff_RBP + 0x3b8),0);
  plVar1 = *(longlong **)(unaff_RBP + 0x3e0);
  uVar2 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x3d1,0x14);
  *(undefined8 *)(unaff_RBP + 0x3d0) = uVar2;
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x769117c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001876911fd */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18769117c(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x3e0);
  uVar3 = (**(code **)(plVar1 + JNI->GetStaticObjectField /*0x488*/))(plVar1,*(undefined8 *)(unaff_RBP + 0x3d8));
  *(undefined8 *)(unaff_RBP + 0x3c0) = uVar3;
  plVar2 = *(longlong **)(unaff_RBP + 0x3e0);
  (**(code **)(plVar1 + JNI->SetObjectArrayElement /*0x570*/))(plVar2);
  FUN_190dd72e0(plVar2,*_DAT_18301ee50 + 0x2fa,0x13);
  (**(code **)(plVar2 + JNI->ExceptionCheck /*0x720*/))(plVar2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x76c598e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001876c59ec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1876c598e(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x3e0);
  FUN_190ddce00(plVar1,unaff_RBP + 0x3d8,*_DAT_18301ee50 + 0x3e3,*_DAT_18301ee50 + 1000,4);
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x3e0));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x76e7d7d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001876e7dc2 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1876e7d7d(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x3e0);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x2b3,0x10);
  (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7720a46 -----

undefined8 thunk_FUN_1875bbc40(void)

{
  longlong unaff_RBP;
  
  (**(code **)(**(longlong **)(unaff_RBP + 0x3e0) + 0x70))
            (*(longlong **)(unaff_RBP + 0x3e0),*(undefined8 *)(unaff_RBP + 0x3d0),&UNK_182f702a8);
  return 0;
}


// ----- block @ rva 0x776a232 -----

void FUN_18776a232(void)

{
  return;
}


// ----- block @ rva 0x77844a8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877844a8(void)

{
  FUN_190ddce00();
  (*_DAT_180c6cae8)();
  return;
}


// ----- block @ rva 0x77875a6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877875a6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180c6d058)();
  return;
}


// ----- block @ rva 0x778a738 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778a738(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  FUN_190dd72e0();
  (*_DAT_180c6cf98)();
  return;
}


// ----- block @ rva 0x778a81b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778a81b(void)

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


// ----- block @ rva 0x778ac1f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778ac1f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_180c6c9d8)();
  return;
}


// ----- block @ rva 0x778b379 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778b379(void)

{
  FUN_190de3220();
  (*_DAT_180c6cb98)();
  return;
}


// ----- block @ rva 0x778b674 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778b674(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180c6cb78)();
  return;
}


// ----- block @ rva 0x778be65 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18778be65(void)

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


// ----- block @ rva 0x778bec7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778bec7(void)

{
  (*_DAT_180c6cd08)();
  return;
}


// ----- block @ rva 0x778becf -----

void FUN_18778becf(void)

{
  return;
}


// ----- block @ rva 0x778c0f4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778c0f4(void)

{
  FUN_190ddce00();
  (*_DAT_180c6efa8)();
  return;
}


// ----- block @ rva 0x778ecd2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18778ecd2(void)

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


// ----- block @ rva 0x778ef19 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18778ef19(void)

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


// ----- block @ rva 0x778f0e4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778f0e4(void)

{
  (*_DAT_180c6eef8)();
  return;
}


// ----- block @ rva 0x778f350 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18778f350(void)

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


// ----- block @ rva 0x778f5ab -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18778f5ab(void)

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


// ----- block @ rva 0x778f5d4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778f5d4(void)

{
  (*_DAT_180c6f1c8)();
  return;
}


// ----- block @ rva 0x778f803 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778f803(void)

{
  (*_DAT_180c6ef38)();
  return;
}


// ----- block @ rva 0x778fab2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778fab2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180c6f0b8)();
  return;
}


// ----- block @ rva 0x778fae0 -----

void FUN_18778fae0(void)

{
  return;
}


// ----- block @ rva 0x778fbbf -----

void FUN_18778fbbf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x778fd2c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778fd2c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_180c6fd48)();
  return;
}


// ----- block @ rva 0x778fd4b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778fd4b(void)

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


// ----- block @ rva 0x778fd90 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778fd90(void)

{
  FUN_190de3220();
  (*_DAT_180c6fd18)();
  return;
}


// ----- block @ rva 0x778fdc3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18778fdc3(void)

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


// ----- block @ rva 0x778fde7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778fde7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180c6fd28)();
  return;
}


// ----- block @ rva 0x778fe0b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778fe0b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    (*_DAT_180c6fd08)();
    return;
  }
  (*_DAT_180c6fd08)();
  return;
}


// ----- block @ rva 0x778fe26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778fe26(void)

{
  (*_DAT_180c6fd08)();
  return;
}


// ----- block @ rva 0x778fe2e -----

void FUN_18778fe2e(void)

{
  return;
}


// ----- block @ rva 0x778fe35 -----

void FUN_18778fe35(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

