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
  uVar4 = FUN_190dd72e0();
  *(undefined8 *)(&stack0x00001250 + lVar3) = uVar4;
  pcVar1 = *(code **)(*param_1 + 0x720);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001871f9908 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b3b220 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjG ()Ljava/util/List; (handler @ image 18720f700, runtime 6fffeee1f700) =====

void FUN_18720f700(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018720f79e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b40df0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjH (Ljava/util/List;Ljava/nio/file/Path;)V (handler @ image 18739b7c0, runtime 6fffeefab7c0) =====

void FUN_18739b7c0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018739b876 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b8d918 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjI ()Ljava/nio/file/Path; (handler @ image 1873e2620, runtime 6fffeeff2620) =====

void FUN_1873e2620(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001873e26cf did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b9c208 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjJ (Ljava/lang/String;)Ljava/nio/file/Path; (handler @ image 18742f400, runtime 6fffef03f400) =====

void FUN_18742f400(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018742f4b2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180bab638 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjK (Ljava/nio/file/Path;Ljava/util/List;)Ljava/util/List; (handler @ image 1874c6510, runtime 6fffef0d6510) =====

void FUN_1874c6510(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001874c65c5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180bc7e58 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjL (Ljava/util/List;)Ljava/lang/String; (handler @ image 1875b2690, runtime 6fffef1c2690) =====

void FUN_1875b2690(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001875b2749 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c07798 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjM (Ljava/nio/file/Path;)Ljava/lang/String; (handler @ image 1877843c0, runtime 6fffef3943c0) =====

void FUN_1877843c0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001877844a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c6c880 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjN (Ljava/lang/String;)Ljava/lang/String; (handler @ image 18778c030, runtime 6fffef39c030) =====

void FUN_18778c030(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018778c0f1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c6ea70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mb; cjO (Ljava/lang/String;)Ljava/nio/file/Path; (handler @ image 18778fce0, runtime 6fffef39fce0) =====

void FUN_18778fce0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x2e9,0x12);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19173,0x3ee);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001872604d9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180b4f5b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



