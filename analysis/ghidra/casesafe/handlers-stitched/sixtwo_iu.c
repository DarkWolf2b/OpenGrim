// ===== STITCHED CORPUS: sixtwo.iu =====
// handlers: 53  continuation blocks: 535  unresolved table targets: 0
// tables not in tables.json: ['0x12a9660', '0x12b0530', '0x12b0538', '0x12b0540', '0x12b0548', '0x12b0550', '0x12b0558', '0x12b0560', '0x12b0570', '0x12b0578', '0x12b0580', '0x12b0588', '0x12b0590', '0x12b0598', '0x12b05a0', '0x12b05a8', '0x12b05b0', '0x12b05b8', '0x12b39e0', '0x12b39e8']

// ===== Lsixtwo/iu; _36df3eeca17650f7448f0d948480f6a5 ()V (handler @ image 1892300f0, runtime 6ffff0e400f0) =====

void FUN_1892300f0(longlong *param_1)

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
  undefined8 auStackX_8 [4];
  undefined *puStack_48;
  
  puStack_48 = &UNK_189230106;
  lVar3 = FUN_180001180();
  lVar3 = -lVar3;
  *(undefined8 *)(&stack0x000010b0 + lVar3) = unaff_XMM15_Qa;
  *(undefined8 *)(&stack0x000010b8 + lVar3) = unaff_XMM15_Qb;
  *(undefined8 *)(&stack0x000010a0 + lVar3) = unaff_XMM14_Qa;
  *(undefined8 *)(&stack0x000010a8 + lVar3) = unaff_XMM14_Qb;
  *(undefined8 *)(&stack0x00001090 + lVar3) = unaff_XMM13_Qa;
  *(undefined8 *)(&stack0x00001098 + lVar3) = unaff_XMM13_Qb;
  *(undefined8 *)(&stack0x00001080 + lVar3) = unaff_XMM12_Qa;
  *(undefined8 *)(&stack0x00001088 + lVar3) = unaff_XMM12_Qb;
  *(undefined8 *)(&stack0x00001070 + lVar3) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x00001078 + lVar3) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x00001060 + lVar3) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00001068 + lVar3) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00001050 + lVar3) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00001058 + lVar3) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00001040 + lVar3) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x00001048 + lVar3) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x00001030 + lVar3) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00001038 + lVar3) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00001020 + lVar3) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00001028 + lVar3) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar3) = 0;
  *(undefined8 *)(&stack0x00000060 + lVar3) = 0;
  *(undefined8 *)((longlong)auStackX_8 + lVar3 + -8) = 0x1326c2ad922604a3;
  *(undefined8 *)((longlong)auStackX_8 + lVar3) = 0x43f0034e48a0d1e;
  *(undefined **)((longlong)&puStack_48 + lVar3) = &UNK_1892301bb;
  uVar4 = BLOB_DECRYPTOR(image-addr,resolved-ptr,len)();
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar3) = uVar4;
  pcVar1 = *(code **)(param_1 + JNI->ExceptionCheck /*0x720*/);
  *(undefined **)((longlong)&puStack_48 + lVar3) = &UNK_1892301cc;
  cVar2 = (*pcVar1)(param_1);
                    /* WARNING: Jumptable at 0x0001892301de did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b5228 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bmN ()Ljava/util/Optional; (handler @ image 1890f81e0, runtime 6ffff0d081e0) =====

void FUN_1890f81e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001890f82a1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812611e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bmO ()Ljava/util/Optional; (handler @ image 1890fe890, runtime 6ffff0d0e890) =====

void FUN_1890fe890(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001890fe951 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181263280 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bmP ()Ljava/util/Optional; (handler @ image 1891a6dd0, runtime 6ffff0db6dd0) =====

void FUN_1891a6dd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001891a6e91 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181296240 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bmQ ()Ljava/lang/String; (handler @ image 18922c1d0, runtime 6ffff0e3c1d0) =====

void FUN_18922c1d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018922c1f0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b3b60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmR ()Ljava/lang/String; (handler @ image 189251180, runtime 6ffff0e61180) =====

void FUN_189251180(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001892511a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b8380 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmS ()Ljava/lang/String; (handler @ image 189251380, runtime 6ffff0e61380) =====

void FUN_189251380(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001892513a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b8460 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmT ()Ljava/lang/String; (handler @ image 189251580, runtime 6ffff0e61580) =====

void FUN_189251580(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001892515a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b8540 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmU ()Ljava/lang/String; (handler @ image 189251780, runtime 6ffff0e61780) =====

void FUN_189251780(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001892517a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b8620 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmV ()Ljava/util/List; (handler @ image 1890f6de0, runtime 6ffff0d06de0) =====

void FUN_1890f6de0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f6e00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181260910 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmW ()Ljava/util/List; (handler @ image 1890f6fe0, runtime 6ffff0d06fe0) =====

void FUN_1890f6fe0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f7000 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812609f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmX ()Ljava/util/List; (handler @ image 1890f71e0, runtime 6ffff0d071e0) =====

void FUN_1890f71e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f7200 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181260ad0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmY ()Ljava/util/List; (handler @ image 1890f73e0, runtime 6ffff0d073e0) =====

void FUN_1890f73e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f7400 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181260bb0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bmZ ()Ljava/util/List; (handler @ image 1890f75e0, runtime 6ffff0d075e0) =====

void FUN_1890f75e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f7600 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181260c90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnA (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1891ec9e0, runtime 6ffff0dfc9e0) =====

undefined8 FUN_1891ec9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/iu; bnB ([B)Ljava/lang/String; (handler @ image 1891eca70, runtime 6ffff0dfca70) =====

void FUN_1891eca70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001891ecb10 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812a92a0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnC (IJ)Ljava/lang/String; (handler @ image 189216ed0, runtime 6ffff0e26ed0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189216ed0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar10;
  
  uRam00000001832060a0 = func_0x00018921dd10(uRam0000000183205d08 + 0xbbabe2062f2cb516 ^ 0xb7);
  uVar3 = uRam00000001832060a0 & 0xffffffffc0000000 ^ 0xfc7b65046afdabef;
  uRam0000000183205f98 = (uRam0000000183205f98 ^ uVar3) + 0xfffb7d47eafdbfff ^ 0x7ee6902b73b9e5cf;
  uRam0000000183205ee0 = (uRam0000000183205ee0 * 0x25fd330e98e70c99 ^ uRam0000000183205f98) + uVar3;
  uRam0000000183205e08 = uRam0000000183205ee0 ^ uRam0000000183205f98;
  uRam0000000183205f80 = uRam0000000183205fe0 ^ 0xfffb7d47eafdbfff;
  uRam00000001832060c0 = 0xfffb7d47eafdbfff;
  uRam00000001832060d8 = func_0x00018921dd10(uRam0000000183206068 ^ 0xb22a1ab7b7e0897f);
  uRam0000000183205ea0 =
       (uRam0000000183205ea0 ^ uRam00000001832060d8) + 0x43e560f34fa8cded ^ 0xc6a7cac3d1c0edaf;
  uRam0000000183205f40 =
       (uRam0000000183205f40 * 0x2c70843341465f59 ^ uRam0000000183205ea0) + uRam00000001832060d8;
  uRam0000000183205e80 = uRam0000000183205f40 ^ uRam0000000183205ea0;
  uRam0000000183205d98 = 0x43e560f34fa8cded;
  uRam0000000183205d20 = func_0x00018921dd10(lRam0000000183206080 + 0x69076abb70576eacU ^ 0x3a);
  uRam0000000183205dc0 =
       (uRam0000000183205dc0 ^ uRam0000000183205d20) + 0x2492756842fc76a ^ 0xde231c6c5eaa6c48;
  uRam0000000183206098 =
       (uRam0000000183206098 * 0x4326e6101758f441 ^ uRam0000000183205dc0) + uRam0000000183205d20;
  uRam00000001832060f0 = uRam0000000183206098 ^ uRam0000000183205dc0;
  uRam0000000183205eb8 = 0x2492756842fc76a;
  uRam0000000183205d40 = func_0x00018921dd10(uRam0000000183205f80 + 0x3f5b57785ae1c57c ^ 0xf0);
  uVar3 = (uRam0000000183205d40 ^ 0x8bd084f900000000) & 0x7fffffff80000000;
  uRam0000000183205fe0 = uRam0000000183205dc8 ^ uVar3 ^ 0x7fff;
  uRam0000000183205eb8 = (uRam0000000183205eb8 ^ uVar3) + 0x7fff ^ 0x3f61892a5c54b375;
  uRam0000000183205d70 = (uRam0000000183205d70 * 0x5610aea7d59b4e85 ^ uRam0000000183205eb8) + uVar3;
  uRam0000000183205f28 = uRam0000000183205d70 ^ uRam0000000183205eb8;
  uRam0000000183205ff0 = 0x7fff;
  uVar3 = (uRam0000000183205e08 ^ _UNK_1812b0530) + uRam0000000183205d98 + 0x84222325;
  uVar9 = (uRam0000000183205d98 ^ _UNK_1812b0538) + uRam0000000183205e08 + 0x152bd05175ab0000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205e08 ^ _UNK_1812b0530;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183205d98 ^ _UNK_1812b0538;
  uRam0000000183205ed8 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183205e08 + 0x152bd05175ab0000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183205d98 + 0x84222325));
  uRam0000000183205f30 =
       (uRam0000000183205f30 ^ uRam0000000183205ed8 & 0xffffffff80000000) + 0xead42fae8a550000 ^
       0xf74cdd6976c23010;
  uRam0000000183205db0 =
       (uRam0000000183205db0 * 0x3555fdc4bd7db6c5 ^ uRam0000000183205f30) +
       (uRam0000000183205ed8 & 0xffffffff80000000);
  uRam0000000183205fe0 = uRam0000000183205db0 ^ uRam0000000183205f30;
  uRam0000000183205e08 = 0xead42fae8a550000;
  uRam0000000183205fd8 = func_0x00018921dd10(uRam0000000183205dd0 ^ 0x512be711da508788);
  uVar3 = uRam0000000183205fd8 ^ 0x152bd05175ab7fff;
  uVar9 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3;
  uRam0000000183205e70 = uRam0000000183205da0 ^ uVar3 ^ 0x152bd05175ab7fff;
  uRam0000000183205d18 = (uRam0000000183205d18 ^ uVar3) + 0x152bd05175ab7fff ^ 0xfd18fc99ddcfa807;
  uRam0000000183206050 = (uRam0000000183206050 * -0x80eb47332f6e087 ^ uRam0000000183205d18) + uVar3;
  uRam0000000183205fa0 = uRam0000000183206050 ^ uRam0000000183205d18;
  uRam0000000183205e10 = 0x152bd05175ab7fff;
  uVar3 = (~uRam0000000183205e20 + 0xead42fae8a550001) *
          ((uRam0000000183205d20 ^ 0x152bd051f1895cda) +
          (uRam0000000183205d20 & 0x152bd051f1895cda) * 2);
  uVar3 = (uVar3 | uRam0000000183205de8) + (uVar3 & uRam0000000183205de8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832060e0 =
       func_0x00018921dd10((uVar3 | 0xffffffff7bdc5cda) + (uVar3 & 0xffffffff7bdc5cda));
  uVar3 = uRam00000001832060e0 & 0x152bd05175ab7fff;
  uRam0000000183206028 = uRam0000000183206010 ^ uVar3 ^ 0x7fff;
  uRam0000000183205e68 = (uRam0000000183205e68 ^ uVar3) + 0x7fff ^ 0x9733f972ba89a177;
  uRam0000000183205f78 = (uRam0000000183205f78 * 0x24d9d5dd78987783 ^ uRam0000000183205e68) + uVar3;
  uRam0000000183205e58 = uRam0000000183205f78 ^ uRam0000000183205e68;
  uRam00000001832060a8 = 0x7fff;
  uVar3 = (~uRam0000000183205d10 + 0x963729745afbab01) *
          ((uRam0000000183205f70 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183205f70 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183205fc0) + (uVar3 & uRam0000000183205fc0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183206000 =
       func_0x00018921dd10((uVar3 | 0x96372974ded98825) + (uVar3 & 0x96372974ded98825));
  uRam0000000183205d40 =
       (uRam0000000183205d40 ^ uRam0000000183205d78 & 0xfffffffffff00000) + 0x69c8d68ba5045500 ^
       0xb1e3b9b55867a1ab;
  uRam0000000183205ef8 =
       (uRam0000000183205ef8 * -0x17daf6441db5043d ^ uRam0000000183205d40) +
       (uRam0000000183205d78 & 0xfffffffffff00000);
  uRam0000000183205eb8 = uRam0000000183205ef8 ^ uRam0000000183205d40;
  uRam0000000183205d58 = 0x69c8d68ba5045500;
  uRam0000000183205da8 = func_0x00018921dd10(uRam0000000183205e58 + 0xebe90a4a5626576d ^ 0x3e);
  uVar3 = uRam0000000183205da8 ^ 0x7fff;
  uRam0000000183205eb0 = uRam0000000183205ff0 ^ uVar3 ^ 0x963729745afc2aff;
  uRam0000000183206050 = (uRam0000000183206050 ^ uVar3) + 0x963729745afc2aff ^ 0x33286ddd23554e33;
  uRam00000001832060e0 = (uRam00000001832060e0 * -0x8c2bb608dc37803 ^ uRam0000000183206050) + uVar3;
  uRam0000000183205e88 = uRam00000001832060e0 ^ uRam0000000183206050;
  uRam0000000183205dd8 = 0x963729745afc2aff;
  uRam00000001832060f0 = func_0x00018921dd10(uRam0000000183205fb0 ^ 0x6cc876939a9d6bc);
  uVar3 = (uRam00000001832060f0 ^ 0xfffffffffffc6000) & 0xffffffffffffe000;
  uRam0000000183205f50 = uRam0000000183205de0 ^ uVar3 ^ 0x7fff;
  uRam0000000183205e80 = (uRam0000000183205e80 ^ uVar3) + 0x7fff ^ 0xa96297de940afcd7;
  uRam0000000183206010 = (uRam0000000183206010 * 0x5e3a2675eecf141b ^ uRam0000000183205e80) + uVar3;
  uRam0000000183205d78 = uRam0000000183206010 ^ uRam0000000183205e80;
  uRam0000000183205d08 = 0x7fff;
  uRam0000000183205ea0 = func_0x00018921dd10(uRam0000000183205dd0 ^ 0x53cf0de0cee296b3);
  uVar3 = uRam0000000183205ea0 * -0x1a5da48f3971c800 |
          uRam0000000183205ea0 * 0x31fcb44b6e18d1c7 >> 0x35;
  uRam0000000183205f70 = (uRam0000000183205f70 ^ uVar3) + 0x43e160434aa88ded ^ 0xab44d1aca1c0da72;
  uRam0000000183205d10 = (uRam0000000183205d10 * 0x70b84c6a1d21d5 ^ uRam0000000183205f70) + uVar3;
  uRam0000000183205f60 = uRam0000000183205d10 ^ uRam0000000183205f70;
  uRam0000000183205d98 = 0x43e160434aa88ded;
  uVar3 = (uRam0000000183206068 ^ _UNK_1812b0540) + uRam0000000183205d48 + 0xbc1e1db421775137;
  uVar9 = (uRam0000000183205d48 ^ _UNK_1812b0548) + uRam0000000183206068 + 0x87c2c08695511bda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183206068 ^ _UNK_1812b0540;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183205d48 ^ _UNK_1812b0548;
  uRam0000000183205f48 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183206068 + 0x87c2c08695511bda) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183205d48 + 0xbc1e1db421775137));
  uRam0000000183205d40 = uRam00000001832060d8 ^ uRam0000000183205f48 ^ 0x43e0de3b3aa68dec;
  uRam0000000183206048 =
       (uRam0000000183206048 ^ uRam0000000183205f48) + 0x43e0de3b3aa68dec ^ 0xb66c48d005a7377c;
  uRam0000000183206000 =
       (uRam0000000183206000 * -0x4725fb381b7dc5 ^ uRam0000000183206048) + uRam0000000183205f48;
  uRam0000000183205d08 = uRam0000000183206000 ^ uRam0000000183206048;
  uRam0000000183206040 = 0x43e0de3b3aa68dec;
  uVar3 = (uRam0000000183205db8 ^ _UNK_1812b0550) + uRam0000000183206030 + 0x43e0de3bbe84aec9;
  uVar9 = (uRam0000000183206030 ^ _UNK_1812b0558) + uRam0000000183205db8 + 0x43e0de3b3aa68dec;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205db8 ^ _UNK_1812b0550;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183206030 ^ _UNK_1812b0558;
  uRam0000000183205f50 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183205db8 + 0x43e0de3b3aa68dec) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183206030 + 0x43e0de3bbe84aec9));
  uRam0000000183205f68 = uRam0000000183205f68 ^ uRam0000000183205f50 ^ 0x954aa2d4b44d095d;
  uRam0000000183206068 =
       (uRam0000000183206068 * 0x45aac3b617d2ebb7 ^ uRam0000000183205f68) + uRam0000000183205f50;
  uRam0000000183206038 = uRam0000000183206068 ^ uRam0000000183205f68;
  uRam0000000183205ed8 = 0;
  uVar3 = (uRam0000000183205f30 ^ 0x84225cda) + uRam0000000183206038 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205f30 ^ 0x84225cda;
  uVar9 = ((uRam0000000183206038 + uRam0000000183205f30) * 0x2000 |
          uRam0000000183206038 + uRam0000000183205f30 >> 0x33) ^ uRam0000000183206038;
  uRam0000000183205f60 = uRam0000000183205f50;
  uRam00000001832060f8 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183205f30 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183206038 + 0x84225cda));
  uVar3 = uRam00000001832060f8 << 0xe | (uRam00000001832060f8 & 0x7fffffffffffffff) >> 0x32;
  uRam0000000183206030 = uRam0000000183205f58 ^ uVar3 ^ 0x7fff;
  uRam0000000183205d28 = (uRam0000000183205d28 ^ uVar3) + 0x7fff ^ 0x275e5210f3728234;
  uRam00000001832060d8 = (uRam00000001832060d8 * 0x1ea8f34c240a5c09 ^ uRam0000000183205d28) + uVar3;
  uRam0000000183205d70 = uRam00000001832060d8 ^ uRam0000000183205d28;
  uRam0000000183205e20 = 0x7fff;
  uVar3 = ~uRam0000000183206078 *
          ((uRam0000000183205d20 ^ 0xfffb7d476edf9cda) +
          (uRam0000000183205d20 & 0x7ffb7d476edf9cda) * 2);
  uVar3 = (uVar3 | uRam0000000183205ed8) + (uVar3 & uRam0000000183205ed8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183205e20 = func_0x00018921dd10((uVar3 | 0x482b891206325) + (uVar3 & 0x482b891206325));
  uVar3 = (uRam0000000183205e20 ^ 0x2b815024001) & 0x3ffffffffff;
  uRam0000000183206048 = (uRam0000000183206048 ^ uVar3) + 0x482b815024000 ^ 0x6af419dea4c559aa;
  uRam0000000183205fa0 = (uRam0000000183205fa0 * 0x7b8b72d709090c51 ^ uRam0000000183206048) + uVar3;
  uRam0000000183205fd0 = uRam0000000183205fa0 ^ uRam0000000183206048;
  uRam0000000183205f58 = 0x482b815024000;
  uVar3 = ((uRam0000000183206078 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183206078 & 0x84225cda) * 2) * -uRam0000000183205fd8;
  uVar3 = (uVar3 | uRam0000000183205fe0) + (uVar3 & uRam0000000183205fe0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183205dc0 =
       func_0x00018921dd10((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = uRam0000000183205dc0 - (uRam0000000183205dc0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183205dc0;
  uRam0000000183205fe0 =
       (uRam0000000183205f60 ^ uVar3 ^ 0x7fff ^ uVar3) + 0x7fff ^ 0xe89ac8612429387b;
  uRam0000000183205da8 = (uRam0000000183205da8 * -0x196758060b6cfa57 ^ uRam0000000183205fe0) + uVar3
  ;
  uRam0000000183205ea8 = 0x7fff;
  uVar3 = ((uRam0000000183205de0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183205de0 & 0x84225cda) * 2) * -uRam0000000183205da8;
  uVar3 = (uVar3 | uRam0000000183205df8) + (uVar3 & uRam0000000183205df8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183206088 =
       func_0x00018921dd10((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = (uRam0000000183206088 << 0xd | uRam0000000183206088 >> 0x33) ^ 0x7fff;
  uRam0000000183205d78 = uRam0000000183205eb8 ^ uVar3 ^ 0x7fff;
  uRam0000000183205eb0 = (uRam0000000183205eb0 ^ uVar3) + 0x7fff ^ 0xc00ae6beff170c24;
  uRam0000000183205f78 = (uRam0000000183205f78 * 0x28bbad268afb5579 ^ uRam0000000183205eb0) + uVar3;
  uRam00000001832060f8 = uRam0000000183205f78 ^ uRam0000000183205eb0;
  uRam0000000183206000 = 0x7fff;
  uVar3 = (~uRam00000001832060a8 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183205da0) +
          ((param_4 ^ 0x84222325) & uRam0000000183205da0) * 2);
  uVar3 = (uVar3 | uRam00000001832060b0) + (uVar3 & uRam00000001832060b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183205e80 =
       func_0x00018921dd10((param_4 ^ 0x84225cda | uVar3) + (uVar3 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uVar9 = (ulonglong)uVar2;
  uRam0000000183205dc0 = (uRam0000000183205dc0 ^ uRam00000001832060f0) + uVar9 ^ 0xdc3d28073ce8a6e2;
  uRam0000000183205ff0 =
       (uRam0000000183205ff0 * -0xb212d40b3c6dd15 ^ uRam0000000183205dc0) + uRam00000001832060f0;
  uRam0000000183205d70 = uRam0000000183205ff0 ^ uRam0000000183205dc0;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar2 ^ 0x84222325;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = 0;
  auVar8 = pshufb(auVar7 ^ _UNK_1812b0560,_UNK_1800170c0);
  uVar5 = auVar8._8_8_ + auVar8._0_8_;
  uVar3 = uVar5 + uRam0000000183206008;
  if (auVar8._4_4_ < 0) {
    uVar3 = uRam0000000183205f20 ^ uVar5;
  }
  uRam00000001832060f0 = uVar9;
  uRam0000000183205de0 = func_0x00018921dd10(SUB161(auVar7 ^ _UNK_1812b0560,5) ^ uVar3);
  uVar3 = uRam0000000183205de0 << 0x31 | (uRam0000000183205de0 & 0x1fffffffffff) >> 0xf;
  uVar5 = (uVar9 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183205e80 = (uRam0000000183205e80 ^ uVar3) + uVar5 ^ 0x23043f9798ea486d;
  uRam0000000183206008 = (uRam0000000183206008 * 0x189f4ff09d8941e1 ^ uRam0000000183205e80) + uVar3;
  uRam0000000183205dd0 = uRam0000000183206008 ^ uRam0000000183205e80;
  uVar4 = uVar5 & 0xffffffff;
  uVar3 = (~uRam0000000183205fd0 + 0x31455f9e) *
          ((uRam0000000183205e08 ^ 0x4f4023b2) +
          (ulonglong)((uint)uRam0000000183205e08 & 0x4f4023b2) * 2);
  uVar3 = (uVar3 | uRam0000000183206098) + (uVar3 & uRam0000000183206098);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183205dc0 = uVar4;
  uRam0000000183205d48 =
       func_0x00018921dd10((uVar3 | 0x7e057c2f) + (ulonglong)((uint)uVar3 & 0x7e057c2f));
  uRam0000000183205d00 =
       (uRam0000000183205d00 ^ uRam0000000183205d48 & 0xffffffffffffff80) + 0xfb675f9f ^
       0x1edc03ad7c739e1a;
  uRam0000000183205d18 =
       (uRam0000000183205d18 * -0x77eba59c39bb1023 ^ uRam0000000183205d00) +
       (uRam0000000183205d48 & 0xffffffffffffff80);
  uRam0000000183205d70 = uRam0000000183205d18 ^ uRam0000000183205d00;
  uRam0000000183205fa0 = 0xfb675f9f;
  uVar3 = (~uRam0000000183205fb8 + 0x4f499ff5) *
          ((uRam0000000183205dc8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183205dc8 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183206060) + (uVar3 & uRam0000000183206060);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183205f68 =
       func_0x00018921dd10((uVar3 | 0xcb6bbcd1) + (ulonglong)((uint)uVar3 & 0xcb6bbcd1));
  uRam0000000183205e30 =
       (uRam0000000183205e30 ^ uRam0000000183205f68 ^ 0x4f499ff4) - 0x4f499ff4 ^ 0x5f25ef1f02268f5f;
  uRam0000000183205e40 =
       (uRam0000000183205e40 * -0x184c66aab6b78cc3 ^ uRam0000000183205e30) +
       (uRam0000000183205f68 ^ 0x4f499ff4);
  uRam0000000183205d68 = uRam0000000183205e40 ^ uRam0000000183205e30;
  uRam0000000183205ed0 = 0xb0b6600c;
  uVar3 = (uRam0000000183206040 ^ _UNK_1812b0570) + uRam0000000183205f30 + 0x84224b30;
  uVar9 = (uRam0000000183205f30 ^ _UNK_1812b0578) + uRam0000000183206040 + 0x4f499ff4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183206040 ^ _UNK_1812b0570;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183205f30 ^ _UNK_1812b0578;
  uRam0000000183206018 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183206040 + 0x4f499ff4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183205f30 + 0x84224b30));
  uVar3 = (uRam0000000183206018 ^ 0x203c6a000000) >> 0xc & 0xffffffffffffff00;
  uRam0000000183205f30 = uRam0000000183205e40 ^ uVar3 ^ 0x4f4a0809;
  uRam0000000183205ec0 = (uRam0000000183205ec0 ^ uVar3) + 0x4f4a0809 ^ 0xb73bce2bf342e329;
  uRam0000000183205ec8 = (uRam0000000183205ec8 * -0x3f87b7d86030e5ef ^ uRam0000000183205ec0) + uVar3
  ;
  uRam0000000183205f98 = uRam0000000183205ec8 ^ uRam0000000183205ec0;
  uRam0000000183205fb8 = 0x4f4a0809;
  uVar3 = (uRam0000000183205f30 ^ _UNK_1812b0580) + uRam0000000183205e60 + 0xcb682b2c;
  uVar9 = (uRam0000000183205e60 ^ _UNK_1812b0588) + uRam0000000183205f30 + 0xb0b6600c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205f30 ^ _UNK_1812b0580;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183205e60 ^ _UNK_1812b0588;
  uRam00000001832060c8 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183205f30 + 0xb0b6600c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183205e60 + 0xcb682b2c));
  uVar3 = uRam00000001832060c8 - (uRam00000001832060c8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam00000001832060c8;
  uVar3 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar9 ^
          0x4f4a0809;
  uRam0000000183205fc0 = uRam0000000183205f18 ^ uVar3 ^ 0x100006815;
  uRam0000000183205d50 = (uRam0000000183205d50 ^ uVar3) + 0x100006815 ^ 0x6302ca2c551904d4;
  uRam0000000183206018 = (uRam0000000183206018 * -0x68fe41d37932bd87 ^ uRam0000000183205d50) + uVar3
  ;
  uRam0000000183205da0 = uRam0000000183206018 ^ uRam0000000183205d50;
  uRam0000000183205f00 = 0x6815;
  uVar3 = (uRam0000000183205d08 ^ _UNK_1812b0590) + uRam0000000183205fc0 + 0x84222325;
  uVar9 = (uRam0000000183205fc0 ^ _UNK_1812b0598) + uRam0000000183205d08 + 0x2d1c9ea;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205d08 ^ _UNK_1812b0590;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183205fc0 ^ _UNK_1812b0598;
  uRam0000000183205d70 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183205d08 + 0x2d1c9ea) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183205fc0 + 0x84222325));
  uVar3 = uRam0000000183205d70 ^ 0x2d1c9ea;
  uVar9 = uVar3 >> 1 | uVar3;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar3;
  uRam0000000183205e80 = (uRam0000000183205e80 ^ uVar3) - 0x2d1c9ea ^ 0x78a9c44b7c6b3f16;
  uRam0000000183205d58 = (uRam0000000183205d58 * -0x409cedb8800a430f ^ uRam0000000183205e80) + uVar3
  ;
  uRam0000000183205e00 = uRam0000000183205d58 ^ uRam0000000183205e80;
  uRam00000001832060b8 = 0xfd2e3616;
  uVar3 = (uRam0000000183205fe0 ^ _UNK_1812b05a0) + uRam0000000183205eb8 + 0x84224b30;
  uVar9 = (uRam0000000183205eb8 ^ _UNK_1812b05a8) + uRam0000000183205fe0 + 0x84cbb148;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205fe0 ^ _UNK_1812b05a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183205eb8 ^ _UNK_1812b05a8;
  uRam0000000183205e70 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183205fe0 + 0x84cbb148) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183205eb8 + 0x84224b30));
  uVar3 = uRam0000000183205e70 ^ 0x84cb9148;
  uRam0000000183205f80 = uRam0000000183205d68 ^ uVar3 ^ 0x84cc195d;
  uRam0000000183205d00 = (uRam0000000183205d00 ^ uVar3) + 0x84cc195d ^ 0x448473c8431de0c3;
  uRam0000000183205f18 = (uRam0000000183205f18 * -0x64cd380b23c1a8f ^ uRam0000000183205d00) + uVar3;
  uRam00000001832060f0 = uRam0000000183205f18 ^ uRam0000000183205d00;
  uRam0000000183206010 = 0x84cc195d;
  uRam0000000183205e90 = func_0x00018921dd10(uRam0000000183205fe0 ^ 0xbffa7bfffd9e6);
  uVar3 = (uRam0000000183205e90 ^ 0x84cc195d) << 0x2f | (uRam0000000183205e90 ^ 0x84cc195d) >> 0x11;
  uRam0000000183206078 = uRam0000000183205f48 ^ uVar3 ^ 0x100006815;
  uRam0000000183206008 = (uRam0000000183206008 ^ uVar3) + 0x100006815 ^ 0x4f2d435dda8df099;
  uRam0000000183205d68 = (uRam0000000183205d68 * 0x23ab2fd7670f477b ^ uRam0000000183206008) + uVar3;
  uRam00000001832060a8 = uRam0000000183205d68 ^ uRam0000000183206008;
  uRam0000000183205ee8 = 0x6815;
  uRam0000000183206050 = func_0x00018921dd10(uRam0000000183205f18 ^ 0xff8c002616ff81ae);
  uVar3 = uRam0000000183206050 >> 1 | uRam0000000183206050;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183206050;
  uVar3 = uVar9 & 0x7fffffffffffffff;
  uVar9 = (uVar9 & 0x7fffffffffffffff) >> 1 | uVar3;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  uRam0000000183205fd0 = uRam00000001832060f8 ^ uVar3 ^ 0x141632030;
  uRam00000001832060f8 = (uRam00000001832060f8 ^ uVar3) + 0x141632030 ^ 0x13480dfdf69d7487;
  uRam0000000183205d90 = (uRam0000000183205d90 * -0x7eccc775dcbda135 ^ uRam00000001832060f8) + uVar3
  ;
  uRam00000001832060b0 = uRam0000000183205d90 ^ uRam00000001832060f8;
  uRam0000000183205ff0 = 0x41632030;
  uVar3 = (~uRam0000000183205f20 + 0x45fbc092) *
          ((uRam0000000183205d70 ^ 0x7f457cba) +
          (ulonglong)((uint)uRam0000000183205d70 & 0x7f457cba) * 2);
  uVar3 = (uVar3 | uRam00000001832060e0) + (uVar3 & uRam00000001832060e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018921dd10((uVar3 | 0x3abebc2b) + (ulonglong)((uint)uVar3 & 0x3abebc2b));
  uVar3 = (uVar3 ^ 0xffffdf9c) >> 2 & 0x7fffffffffffff;
  uRam0000000183205d00 = (uRam0000000183205d00 ^ uVar3) + 0xbe9c9f0e ^ 0x8013022040bdc267;
  uRam0000000183205fb0 = (uRam0000000183205fb0 * -0x7c6dbdecdf9ad935 ^ uRam0000000183205d00) + uVar3
  ;
  uRam0000000183205da8 = uRam0000000183205fb0 ^ uRam0000000183205d00;
  uRam0000000183205e40 = 0xbe9c9f0e;
  uVar3 = (~uRam0000000183205fb0 + 0x82c68123) *
          ((uRam0000000183205ec0 ^ 0x3abebc2b) +
          (ulonglong)((uint)uRam0000000183205ec0 & 0x3abebc2b) * 2);
  uVar3 = (uVar3 | uRam0000000183206050) + (uVar3 & uRam0000000183206050);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183205dd0 =
       func_0x00018921dd10((uVar3 | 0xb8783d09) + (ulonglong)((uint)uVar3 & 0xb8783d09));
  uVar3 = uRam0000000183205dd0 ^ 0xbe9c9f0e;
  uRam0000000183205ff8 = uRam0000000183205db0 ^ uVar3 ^ 0x141632030;
  uRam0000000183205d38 = (uRam0000000183205d38 ^ uVar3) + 0x141632030 ^ 0xbcb5c8218886c830;
  uRam0000000183205e10 = (uRam0000000183205e10 * -0x30c7a14b565a7739 ^ uRam0000000183205d38) + uVar3
  ;
  uRam00000001832060c0 = uRam0000000183205e10 ^ uRam0000000183205d38;
  uRam0000000183205f08 = 0x41632030;
  uRam0000000183205d78 = func_0x00018921dd10(uRam00000001832060c0 ^ 0x23007c25001dd7);
  uRam0000000183205f78 = uRam0000000183205d78 * -0x353364698651f76f;
  uRam0000000183205f90 = uRam0000000183205f90 ^ uRam0000000183205f78 ^ 0x52fa645f998c2365;
  uRam0000000183205e70 =
       (uRam0000000183205e70 * -0x292692655594d21f ^ uRam0000000183205f90) + uRam0000000183205f78;
  uRam0000000183206050 = 0;
  uVar3 = ((uRam0000000183205dd0 ^ 0x84224b30) +
          (ulonglong)((uint)uRam0000000183205dd0 & 0x84224b30) * 2) * -uRam0000000183205d48;
  uVar3 = (uVar3 | uRam0000000183206048) + (uVar3 & uRam0000000183206048);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183206020 =
       func_0x00018921dd10((uVar3 | 0x84224b30) + (ulonglong)((uint)uVar3 & 0x84224b30));
  uRam0000000183205f20 = uRam0000000183206008 ^ uRam0000000183206020 ^ 0x6815;
  uRam0000000183205ea8 = (uRam0000000183205ea8 ^ uRam0000000183206020) + 0x6815 ^ 0x817b3cea70779606
  ;
  uRam0000000183205fb0 =
       (uRam0000000183205fb0 * 0x2f332e9f605f9185 ^ uRam0000000183205ea8) + uRam0000000183206020;
  uRam0000000183205eb8 = uRam0000000183205fb0 ^ uRam0000000183205ea8;
  uRam0000000183205db8 = 0x6815;
  uRam0000000183205e20 = func_0x00018921dd10(lRam0000000183205d60 + 0xff7d008042ff45ffU ^ 0xcb);
  uRam0000000183206048 =
       (uRam0000000183206048 ^ uRam0000000183205e20 & 0x7fffffffffff) + 0x498a060 ^
       0xd4a74249350ec501;
  uRam0000000183205fc8 =
       (uRam0000000183205fc8 * -0x79eaf39e3ab19a53 ^ uRam0000000183206048) +
       (uRam0000000183205e20 & 0x7fffffffffff);
  uRam0000000183205d00 = uRam0000000183205fc8 ^ uRam0000000183206048;
  uRam0000000183205ee8 = 0x498a060;
  uVar3 = (uRam0000000183205eb8 ^ 0x84224b30) + uRam0000000183206040 + 0x84224b30;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205eb8 ^ 0x84224b30;
  uVar9 = ((uRam0000000183206040 + uRam0000000183205eb8) * 0x2000 |
          uRam0000000183206040 + uRam0000000183205eb8 >> 0x33) ^ uRam0000000183206040;
  uRam0000000183206008 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183205eb8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183206040 + 0x84224b30));
  uVar3 = uRam0000000183206008 & 0xfffffffffffffff;
  uRam0000000183205f90 = uRam0000000183205f68 ^ uVar3 ^ 0x6815;
  uRam0000000183205d28 = (uRam0000000183205d28 ^ uVar3) + 0x6815 ^ 0x676dcbba1cc5548c;
  uRam0000000183205de0 = (uRam0000000183205de0 * 0x47fc7c61c6127575 ^ uRam0000000183205d28) + uVar3;
  uRam0000000183206090 = uRam0000000183205de0 ^ uRam0000000183205d28;
  uRam0000000183205e30 = 0x6815;
  uVar3 = (uRam0000000183205e88 ^ _UNK_1812b05b0) + uRam0000000183205db0 + 0x4f4023b2;
  uVar9 = (uRam0000000183205db0 ^ _UNK_1812b05b8) + uRam0000000183205e88 + 0xcb620097;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205e88 ^ _UNK_1812b05b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183205db0 ^ _UNK_1812b05b8;
  uRam0000000183206040 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183205e88 + 0xcb620097) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183205db0 + 0x4f4023b2));
  uVar3 = uRam00000001832060d8 << 0x1d | uRam00000001832060d8 >> 0x23;
  uVar9 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3;
  uRam00000001832060b0 = uRam00000001832060b0 ^ uVar3 ^ 0xd63523fc44f9bb48;
  uRam0000000183205de8 = (uRam0000000183205de8 * 0x601fd80433440d9d ^ uRam00000001832060b0) + uVar3;
  uRam0000000183206050 = uRam0000000183205de8 ^ uRam00000001832060b0;
  uRam0000000183205e38 = 0;
  uVar3 = (uRam0000000183205de0 ^ 0x84224b30) + uRam0000000183205e08 + 0x84224b30;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183205de0 ^ 0x84224b30;
  uVar9 = ((uRam0000000183205e08 + uRam0000000183205de0) * 0x2000 |
          uRam0000000183205e08 + uRam0000000183205de0 >> 0x33) ^ uRam0000000183205e08;
  uRam0000000183206000 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183205de0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183205e08 + 0x84224b30));
  uVar3 = uRam0000000183206000 >> 1 | (ulonglong)((uRam0000000183206000 & 1) != 0) << 0x3f;
  uRam0000000183205eb8 = uRam0000000183205ee8 ^ uVar3 ^ 0x6815;
  uRam0000000183205f50 = (uRam0000000183205f50 ^ uVar3) + 0x6815 ^ 0x543f681fdad81ed3;
  uRam0000000183205e10 = (uRam0000000183205e10 * 0x70cab526313ddd0b ^ uRam0000000183205f50) + uVar3;
  uRam00000001832060c8 = uRam0000000183205e10 ^ uRam0000000183205f50;
  uRam0000000183205e50 = 0x6815;
  uVar3 = uVar4 ^ 0x84222325 ^ uRam0000000183206048;
  lVar6 = (uVar4 ^ 0x84222325) + uRam0000000183205d98;
  uVar9 = uVar3 + lVar6;
  uVar10 = (uRam0000000183205d98 ^ 0x6815) + uRam0000000183206048 + 0x6815;
  uVar3 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar3;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183205d98 ^ 0x6815;
  uRam0000000183205dd0 =
       func_0x00018921dd10((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183206048 + 0x6815) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar6);
  lVar6 = uVar4 - ((uint)uVar5 & 0x6815) * 2;
  uRam0000000183205e70 =
       (uRam0000000183205e70 ^ uRam0000000183205d58 ^ 0x6815) + lVar6 + 0x6815 ^ 0x6f58bf1bcf7cf424;
  uRam0000000183205d10 =
       (uRam0000000183205d10 * 0x52497a43fa6236a1 ^ uRam0000000183205e70) +
       (uRam0000000183205d58 ^ 0x6815);
  uRam0000000183205f68 = uRam0000000183205d10 ^ uRam0000000183205e70;
  uRam0000000183205d38 = lVar6 + 0x6815U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001892193b3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812aeba8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bnD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18921dda0, runtime 6ffff0e2dda0) =====

void FUN_18921dda0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018921dddc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b0740 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18921ec90, runtime 6ffff0e2ec90) =====

void FUN_18921ec90(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018921ed0d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b0c80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bnF (IJ)I (handler @ image 189221750, runtime 6ffff0e31750) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189221750(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = (uRam00000001832062a0 ^ _UNK_1812b39e0) + uRam0000000183206200 + 0x62deedfa6fc5f09f;
  uVar7 = (uRam0000000183206200 ^ _UNK_1812b39e8) + uRam00000001832062a0 + 0x82bb5d0f37da968a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832062a0 ^ _UNK_1812b39e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183206200 ^ _UNK_1812b39e8;
  uRam0000000183206158 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832062a0 + 0x82bb5d0f37da968a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183206200 + 0x62deedfa6fc5f09f));
  uRam00000001832062f0 =
       (uRam00000001832062f0 ^ uRam0000000183206158 * -0x1a72a7182c250303) + 0xe2fffdffffffd7ba ^
       0x4846726ec80e70b;
  uRam00000001832061f0 =
       (uRam00000001832061f0 * -0x58f8f8c1830a74c9 ^ uRam00000001832062f0) +
       uRam0000000183206158 * -0x1a72a7182c250303;
  uRam0000000183206118 = uRam00000001832061f0 ^ uRam00000001832062f0;
  uRam00000001832061c0 = -0x1d00020000002846;
  uRam00000001832061d8 = func_0x00018922c140(uRam00000001832062c0 + 0x2b0f493639a9bbcc ^ 0x19);
  uRam0000000183206240 =
       (uRam0000000183206240 ^ uRam00000001832061d8 & 0x1fffffffffffffff) + 0xcd4a76554e6d526b ^
       0x833b20b025cb003b;
  uRam0000000183206230 =
       (uRam0000000183206230 * -0x3fc9ba0c633d694b ^ uRam0000000183206240) +
       (uRam00000001832061d8 & 0x1fffffffffffffff);
  uRam00000001832062a0 = uRam0000000183206230 ^ uRam0000000183206240;
  uRam0000000183206160 = -0x32b589aab192ad95;
  uRam0000000183206140 = func_0x00018922c140(uRam0000000183206230 ^ 0xa3d9b41366a575c0);
  uRam00000001832062f8 =
       (uRam00000001832062f8 ^ uRam0000000183206140) + 0x5e2b19826e560274 ^ 0x43d0de6df7a5223d;
  uRam00000001832061d8 =
       (uRam00000001832061d8 * -0x214f6b2e574fdbdf ^ uRam00000001832062f8) + uRam0000000183206140;
  uRam00000001832062e0 = uRam00000001832061d8 ^ uRam00000001832062f8;
  uRam0000000183206188 = 0x5e2b19826e560274;
  uVar5 = (uRam0000000183206250 ^ _UNK_1812b39f0) + uRam00000001832061b8 + 0x84225cda;
  uVar7 = (uRam00000001832061b8 ^ _UNK_1812b39f8) + uRam0000000183206250 + 0xa1d4e67d91a9fd8c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183206250 ^ _UNK_1812b39f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832061b8 ^ _UNK_1812b39f8;
  uRam00000001832062e8 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183206250 + 0xa1d4e67d91a9fd8c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832061b8 + 0x84225cda));
  uRam0000000183206258 = uRam00000001832061e8 ^ uRam0000000183206268 ^ 0xa1d4e67d91aa7d8b;
  uRam00000001832061f0 =
       (uRam0000000183206278 ^ uRam0000000183206268) + 0xa1d4e67d91aa7d8b ^ 0xc9183438ae491778;
  uRam0000000183206290 =
       (uRam0000000183206290 * -0x1b8453bebe3255eb ^ uRam00000001832061f0) + uRam0000000183206268;
  uRam00000001832061f0 = uRam0000000183206290 ^ uRam00000001832061f0;
  uRam0000000183206278 = 0xa1d4e67d91aa7d8b;
  uVar5 = (~uRam0000000183206228 + 0x5e2b19826e560275) *
          ((uRam00000001832062f8 ^ 0xa1d4e67d15885eae) +
          (uRam00000001832062f8 & 0x21d4e67d15885eae) * 2);
  uVar5 = (uVar5 | uRam0000000183206118) + (uVar5 & uRam0000000183206118);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183206250 =
       func_0x00018922c140((uVar5 | 0xffffffff7bde5cda) + (uVar5 & 0xffffffff7bde5cda));
  uVar5 = uRam0000000183206250 & 0x3fffffffffff ^ 0xa1d4e67d91aa7d8b;
  uVar5 = uVar5 << 0x2a | uVar5 >> 0x16;
  uRam00000001832061e0 =
       (uRam0000000183206178 ^ uVar5 ^ 0x7fff ^ uVar5) + 0x7fff ^ 0x14e598fc3b4e5d4;
  uRam00000001832062f8 = (uRam00000001832062f8 * -0x46c962ddff2bbf1b ^ uRam00000001832061e0) + uVar5
  ;
  uRam0000000183206258 = uRam00000001832062f8 ^ uRam00000001832061e0;
  uRam0000000183206108 = 0x7fff;
  uVar5 = (~uRam00000001832062e0 + 0x724a63dfb59ef1dd) *
          ((uRam00000001832062d8 ^ 0x8db59c20ce43ad06) +
          (uRam00000001832062d8 & 0xdb59c20ce43ad06) * 2);
  uVar5 = (uVar5 | uRam00000001832061d0) + (uVar5 & uRam00000001832061d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183206220 =
       func_0x00018922c140((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = uRam0000000183206220 - (uRam0000000183206220 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183206220;
  uRam00000001832062f8 = uRam0000000183206278 ^ uVar5 ^ 0x7fff;
  uRam0000000183206130 = (uRam0000000183206270 ^ uVar5) + 0x7fff ^ 0xd889b395ff44abde;
  uRam0000000183206270 = (uRam0000000183206270 * 0x1a17919879311087 ^ uRam0000000183206130) + uVar5;
  uRam0000000183206130 = uRam0000000183206270 ^ uRam0000000183206130;
  uRam00000001832061f8 = uRam0000000183206298 ^ 0x7fff;
  uRam00000001832061e0 = 0x7fff;
  uVar5 = (uRam0000000183206188 ^ _UNK_1812b3a00) + 0x1c80c33bc3e8da03;
  uVar7 = (_UNK_1812b3a08 ^ 0x7fff) + uRam0000000183206188 + 0xe37f3cc4b83606de;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183206188 ^ _UNK_1812b3a00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _UNK_1812b3a08 ^ 0x7fff;
  uRam00000001832061b8 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183206188 + 0xe37f3cc4b83606de) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) + 0xe37f3cc43c1725fd);
  uVar5 = uRam00000001832061b8 ^ 0x509e151b02aba9bf;
  uRam0000000183206210 = uRam0000000183206240 ^ uVar5 ^ 0x7fff;
  uRam0000000183206230 = (uRam0000000183206230 ^ uVar5) + 0x7fff ^ 0xcb36b8257ed8b2c7;
  uRam0000000183206258 = (uRam0000000183206258 * -0x709617099872c5b7 ^ uRam0000000183206230) + uVar5
  ;
  uRam0000000183206240 = uRam0000000183206258 ^ uRam0000000183206230;
  uRam0000000183206188 = 0x7fff;
  uVar5 = (~uRam00000001832062d0 + 0xcd4a76554e6d526c) *
          ((uRam0000000183206208 ^ 0xe2fffdff7bddf49f) +
          (uRam0000000183206208 & 0x62fffdff7bddf49f) * 2);
  uVar5 = (uVar5 | uRam0000000183206228) + (uVar5 & uRam0000000183206228);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183206180 =
       func_0x00018922c140((uVar5 | 0x2fb58baa35b0a6f4) + (uVar5 & 0x2fb58baa35b0a6f4));
  uVar5 = (uRam0000000183206180 ^ 0xe2fffdff80000000) & 0xffffffff80000000;
  uRam00000001832061e0 = uRam00000001832061e0 ^ uVar5 ^ 0xb04a74554e6d2a25;
  uRam00000001832061f0 = (uRam00000001832061f0 ^ uVar5) + 0xb04a74554e6d2a25 ^ 0xf522758d4a20dd34;
  uRam0000000183206228 = (uRam0000000183206228 * -0x2b424a5cfe5b5163 ^ uRam00000001832061f0) + uVar5
  ;
  uRam0000000183206218 = uRam0000000183206228 ^ uRam00000001832061f0;
  uRam0000000183206118 = 0xb04a74554e6d2a25;
  uVar5 = (~uRam00000001832061f0 + 0xcd4a76554e6d526c) *
          ((uRam00000001832062c0 ^ 0xe2fffdff7bddf49f) +
          (uRam00000001832062c0 & 0x62fffdff7bddf49f) * 2);
  uVar5 = (uVar5 | uRam00000001832061b0) + (uVar5 & uRam00000001832061b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018922c140((uVar5 | 0x2fb58baa35b0a6f4) + (uVar5 & 0x2fb58baa35b0a6f4));
  uRam00000001832062a0 =
       (uVar5 ^ uRam0000000183206218 ^ 0xe2fffdffffffd7ba) + 0xc04a74554e6d522a ^ 0x3f5bd20a721c8046
  ;
  uRam00000001832061e0 =
       (uRam00000001832061e0 * 0x4f1ff64dd0779623 ^ uRam00000001832062a0) +
       (uRam0000000183206218 ^ 0xe2fffdffffffd7ba);
  uRam00000001832062b8 = uRam00000001832061e0 ^ uRam00000001832062a0;
  uRam0000000183206248 = 0xc04a74554e6d522a;
  uRam0000000183206228 = func_0x00018922c140(uRam0000000183206170 + 0xfffde1575fe1266a ^ 0x3a);
  uVar5 = uRam0000000183206228 * 0x721f8b2701a8e135 & 0xffffffffffffffc0;
  uRam0000000183206218 = uRam0000000183206260 ^ uVar5 ^ 0xb04a74554e6d2a25;
  uRam00000001832062f8 = (uRam00000001832062f8 ^ uVar5) + 0xb04a74554e6d2a25 ^ 0x377652ed59ce3e1c;
  uRam0000000183206140 = (uRam0000000183206140 * -0x42fbb95de682744b ^ uRam00000001832062f8) + uVar5
  ;
  uRam00000001832061d8 = 0xb04a74554e6d2a25;
  uRam0000000183206180 = func_0x00018922c140(uRam00000001832061e8 ^ 0xffd3ff84d6002148);
  uVar7 = uRam0000000183206180 * 0x4b975b2e81ebc63d;
  uVar5 = uVar7 >> 1 | uVar7;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  uRam0000000183206118 = uRam0000000183206118 ^ uVar7 ^ 0x7fff;
  uRam0000000183206278 = (uRam0000000183206278 ^ uVar7) + 0x7fff ^ 0x4074303a3648069;
  uRam0000000183206220 = (uRam0000000183206220 * 0x5dcc0183f5300a7f ^ uRam0000000183206278) + uVar7;
  uRam0000000183206208 = uRam0000000183206220 ^ uRam0000000183206278;
  uRam00000001832062a0 = 0x7fff;
  uVar5 = (uRam0000000183206128 ^ 0x84225cda) + uRam0000000183206140 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183206128 ^ 0x84225cda;
  uVar7 = ((uRam0000000183206140 + uRam0000000183206128) * 0x2000 |
          uRam0000000183206140 + uRam0000000183206128 >> 0x33) ^ uRam0000000183206140;
  uRam00000001832062a0 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183206128 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183206140 + 0x84225cda));
  uRam0000000183206208 = uRam0000000183206128 ^ uRam00000001832062a0 ^ 0x7fff;
  uRam0000000183206188 = (uRam0000000183206188 ^ uRam00000001832062a0) + 0x7fff ^ 0xce9ed9737097dcd8
  ;
  uRam0000000183206138 =
       (uRam0000000183206138 * -0x3e7949fe5cc8ea35 ^ uRam0000000183206188) + uRam00000001832062a0;
  uRam0000000183206290 = uRam0000000183206138 ^ uRam0000000183206188;
  uRam0000000183206128 = 0x7fff;
  uRam0000000183206178 = func_0x00018922c140(uRam0000000183206220 + 0x5c0084d5ffe1ff ^ 0x39);
  uRam0000000183206228 = uRam0000000183206268 ^ uRam0000000183206178 ^ 0x7fff;
  uRam0000000183206230 = (uRam0000000183206230 ^ uRam0000000183206178) + 0x7fff ^ 0xfc1f2cd68c2ec0e8
  ;
  uRam0000000183206128 =
       (uRam0000000183206128 * -0x2b22ed62ccfc52e5 ^ uRam0000000183206230) + uRam0000000183206178;
  uRam0000000183206110 = uRam0000000183206128 ^ uRam0000000183206230;
  uRam0000000183206190 = 0x7fff;
  uVar5 = (~uRam0000000183206150 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183206238) +
          ((param_4 ^ 0x84222325) & uRam0000000183206238) * 2);
  uVar5 = (uVar5 | uRam00000001832061f0) + (uVar5 & uRam00000001832061f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832061f0 =
       func_0x00018922c140((param_4 ^ 0x84225cda | uVar5) + (uVar5 & (param_4 ^ 0x84225cda)));
  uVar5 = uRam00000001832061f0 >> 1 | uRam00000001832061f0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001832061f0;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar3 = (ulonglong)uVar2;
  uRam00000001832062f8 = (uRam00000001832062f8 ^ uVar5) + uVar3 ^ 0x5bfffaae2157aee0;
  uRam0000000183206228 = (uRam0000000183206228 * 0x6efd7a6adccee1f5 ^ uRam00000001832062f8) + uVar5;
  uRam00000001832061f8 = uRam0000000183206228 ^ uRam00000001832062f8;
  uVar7 = (ulonglong)param_3;
  uVar5 = uVar3 ^ 0x84222325 ^ uRam0000000183206120;
  lVar4 = (uVar3 ^ 0x84222325) + uRam0000000183206178;
  uVar6 = uVar5 + lVar4;
  uVar8 = (uVar7 ^ uRam0000000183206178) + uRam0000000183206120 + uVar7;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7 ^ uRam0000000183206178;
  uRam0000000183206110 = uVar3;
  uRam0000000183206150 =
       func_0x00018922c140((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183206120 + uVar7) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar3 = (uVar3 + uVar7) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183206250 = (uRam0000000183206250 ^ uRam0000000183206150) + uVar3 ^ 0xfb1ac006d9e61a1f;
  uRam0000000183206228 =
       (uRam0000000183206228 * 0x6d2f692180a29645 ^ uRam0000000183206250) + uRam0000000183206150;
  uRam00000001832062e0 = uRam0000000183206228 ^ uRam0000000183206250;
  uVar3 = uVar3 & 0xffffffff;
  uVar5 = (~uRam0000000183206218 + 0x3c8c22d1) *
          ((uRam00000001832061b8 ^ 0xf5dd7aa4) +
          (ulonglong)((uint)uRam00000001832061b8 & 0xf5dd7aa4) * 2);
  uVar5 = (uVar5 | uRam00000001832061b8) + (uVar5 & uRam00000001832061b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832062f8 = uVar3;
  uRam0000000183206168 =
       func_0x00018922c140((uVar5 | 0xc9515874) + (ulonglong)((uint)uVar5 & 0xc9515874));
  uRam00000001832062b8 =
       (uRam00000001832062b8 ^ uRam0000000183206168) + 0x7dff7bd1 ^ 0x30f9f98bf98b7efd;
  uRam00000001832061c0 =
       (uRam00000001832061c0 * 0x3f73f47cdc80f47f ^ uRam00000001832062b8) + uRam0000000183206168;
  uRam0000000183206198 = uRam00000001832061c0 ^ uRam00000001832062b8;
  uRam00000001832061b0 = 0x7dff7bd1;
  uRam0000000183206108 = func_0x00018922c140(uRam00000001832061f0 ^ 0xfff4ffe47600a807);
  uRam0000000183206118 =
       (uRam0000000183206118 ^ uRam0000000183206108 ^ 0xb8ee80dd) + 0xb98b2ebb ^ 0xc32097d0c43328fd;
  uRam0000000183206270 =
       (uRam0000000183206270 * 0xf748611128d82f9 ^ uRam0000000183206118) +
       (uRam0000000183206108 ^ 0xb8ee80dd);
  uRam0000000183206128 = uRam0000000183206270 ^ uRam0000000183206118;
  uRam0000000183206110 = 0xb98b2ebb;
  uRam00000001832062e0 = func_0x00018922c140(uRam00000001832062e8 ^ 0x36ffd6bcffdbed);
  uRam0000000183206210 =
       (uRam0000000183206210 ^ uRam00000001832062e0 * 0x627449f81d6fb231) - 0xaf4668e6 ^
       0x40ade323e7f97a67;
  uRam0000000183206170 =
       (uRam0000000183206170 * 0x2bde3aa5340b5cdd ^ uRam0000000183206210) +
       uRam00000001832062e0 * 0x627449f81d6fb231;
  uRam0000000183206238 = uRam0000000183206170 ^ uRam0000000183206210;
  uRam0000000183206288 = 0x50b9971a;
  uRam0000000183206298 = func_0x00018922c140(uRam00000001832061f0 + 0x7002b25ffdbff ^ 0x9e);
  uVar5 = (uRam0000000183206298 ^ 0x38d1c62f0000) & 0xffffffffffff0000;
  uRam0000000183206188 = uRam0000000183206188 ^ uVar5 ^ 0xaf46bbe3;
  uRam00000001832062a8 = (uRam00000001832062a8 ^ uVar5) + 0xaf46bbe3 ^ 0xbf28e06232a0411e;
  uRam0000000183206250 =
       (uRam0000000183206250 * 0x564e191dbc1ef255 ^ uRam00000001832062a8) + uVar5 ^
       uRam00000001832062a8;
  uRam00000001832062a0 = 0xaf46bbe3;
  uVar5 = (uRam0000000183206100 ^ _UNK_1812b3a10) + uRam00000001832061a0 + 0x2b6498c6;
  uVar7 = (uRam00000001832061a0 ^ _UNK_1812b3a18) + uRam0000000183206100 + 0x50b9971a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183206100 ^ _UNK_1812b3a10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832061a0 ^ _UNK_1812b3a18;
  uRam00000001832061f0 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183206100 + 0x50b9971a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832061a0 + 0x2b6498c6));
  uVar5 = uRam00000001832061f0 * 0x26ffd9b969648b2d ^ 0xaf46bbe3;
  uRam00000001832062e8 = uRam00000001832061e8 ^ uVar5 ^ 0x1000052fd;
  uRam0000000183206158 = (uRam0000000183206158 ^ uVar5) + 0x1000052fd ^ 0xf1bf6eadeba07805;
  uRam0000000183206160 = (uRam0000000183206160 * -0x5a7f0c160c73099 ^ uRam0000000183206158) + uVar5;
  uRam0000000183206108 = uRam0000000183206160 ^ uRam0000000183206158;
  uRam0000000183206190 = 0x52fd;
  uRam00000001832062b8 = func_0x00018922c140(uRam0000000183206220 + 0x2effcb5400b8ff ^ 0x4c);
  uRam00000001832062d8 =
       (uRam00000001832062d8 ^ uRam00000001832062b8 & 0x3ffffffffffff) - 0xd9dd5091 ^
       0xc7b9711763a1d169;
  uRam00000001832062a8 =
       (uRam00000001832062a8 * -0x4f7539fd9a8b02d9 ^ uRam00000001832062d8) +
       (uRam00000001832062b8 & 0x3ffffffffffff);
  uRam00000001832061e8 = uRam00000001832062a8 ^ uRam00000001832062d8;
  uRam0000000183206240 = 0x2622af6f;
  uRam00000001832062b0 = func_0x00018922c140(uRam0000000183206220 ^ 0x210034c7007c48);
  uVar5 = uRam00000001832062d8 ^ 0xd9dd5091;
  uRam00000001832062a8 = uRam00000001832061c8 ^ uVar5 ^ 0xd9dda38e;
  uRam0000000183206220 = (uRam0000000183206220 ^ uVar5) + 0xd9dda38e ^ 0x5ad486868ef21d7f;
  uRam0000000183206240 = (uRam0000000183206240 * -0x24dab1e825f20621 ^ uRam0000000183206220) + uVar5
  ;
  uRam0000000183206198 = uRam0000000183206240 ^ uRam0000000183206220;
  uRam0000000183206128 = 0xd9dda38e;
  uVar5 = (uRam00000001832061d0 ^ _UNK_1812b3a20) + uRam0000000183206188 + 0x84222325;
  uVar7 = (uRam0000000183206188 ^ _UNK_1812b3a28) + uRam00000001832061d0 + 0xb8a029f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832061d0 ^ _UNK_1812b3a20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183206188 ^ _UNK_1812b3a28;
  uRam00000001832062a0 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832061d0 + 0xb8a029f0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183206188 + 0x84222325));
  uRam0000000183206178 =
       (uRam0000000183206178 ^ uRam00000001832062a0) - 0xb8a029f0 ^ 0x93ec7624c7271112;
  uRam00000001832062d0 =
       (uRam00000001832062d0 * -0x75cab1866d9e1b73 ^ uRam0000000183206178) + uRam00000001832062a0;
  uRam00000001832062e8 = uRam00000001832062d0 ^ uRam0000000183206178;
  uRam00000001832061a8 = 0x475fd610;
  uVar5 = (uRam0000000183206170 ^ _UNK_1812b3a30) + uRam00000001832061a0 + 0x842271d8;
  uVar7 = (uRam00000001832061a0 ^ _UNK_1812b3a38) + uRam0000000183206170 + 0xb8a029f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183206170 ^ _UNK_1812b3a30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832061a0 ^ _UNK_1812b3a38;
  uRam00000001832061f8 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183206170 + 0xb8a029f0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832061a0 + 0x842271d8));
  uVar5 = uRam00000001832061f8 - (uRam00000001832061f8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001832061f8) & 0x7fffffffffffffff;
  uRam0000000183206200 = uRam00000001832061d8 ^ uVar5 ^ 0xb8a07ced;
  uRam0000000183206230 = (uRam0000000183206230 ^ uVar5) + 0xb8a07ced ^ 0x4c8b2da12150ca8e;
  uRam0000000183206168 = (uRam0000000183206168 * 0x1a2c0c707fe9abf1 ^ uRam0000000183206230) + uVar5;
  uRam0000000183206258 = uRam0000000183206168 ^ uRam0000000183206230;
  uRam00000001832061c8 = uRam0000000183206258 ^ 0xb8a07ced;
  uRam00000001832062f8 = 0xb8a07ced;
  uRam00000001832062a0 = func_0x00018922c140(uRam0000000183206270 ^ 0xff8e00403effc9ef);
  uVar5 = uRam00000001832062a0 >> 1 | uRam00000001832062a0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001832062a0;
  uVar5 = uVar5 << 0x30 | uVar5 >> 0x10;
  uVar7 = uVar5 >> 1 | uVar5;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar5;
  uRam00000001832061a0 = uRam0000000183206158 ^ uVar5 ^ 0x1378aaa8c;
  uRam00000001832062c8 = (uRam00000001832062c8 ^ uVar5) + 0x1378aaa8c ^ 0xf7f432c3adb99ce4;
  uRam0000000183206140 = (uRam0000000183206140 * -0x6f5c412b5afacfe3 ^ uRam00000001832062c8) + uVar5
  ;
  uRam0000000183206160 = uRam0000000183206140 ^ uRam00000001832062c8;
  uRam00000001832061c0 = 0x378aaa8c;
  uVar5 = (~uRam00000001832062e8 + 0xb98b2ebc) *
          ((uRam00000001832061f8 ^ 0xf9dd58f4) +
          (ulonglong)((uint)uRam00000001832061f8 & 0xf9dd58f4) * 2);
  uVar5 = (uVar5 | uRam0000000183206198) + (uVar5 & uRam0000000183206198);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183206230 =
       func_0x00018922c140((uVar5 | 0x4056764f) + (ulonglong)((uint)uVar5 & 0x4056764f));
  uRam0000000183206288 =
       (uRam0000000183206288 ^ uRam0000000183206230 & 0x7fffffff80000000) + 0xc474556a ^
       0xf84519e8471f2ade;
  uRam0000000183206228 =
       (uRam0000000183206228 * -0x2dc687254634bc05 ^ uRam0000000183206288) +
       (uRam0000000183206230 & 0x7fffffff80000000);
  uRam0000000183206280 = uRam0000000183206228 ^ uRam0000000183206288;
  uRam00000001832062f0 = 0xc474556a;
  uVar5 = (uRam00000001832061e8 ^ _UNK_1812b3a40) + uRam0000000183206240 + 0xf9dd58f4;
  uVar7 = (uRam0000000183206240 ^ _UNK_1812b3a48) + uRam00000001832061e8 + 0xb98b2ebb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832061e8 ^ _UNK_1812b3a40;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183206240 ^ _UNK_1812b3a48;
  uRam00000001832061f8 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832061e8 + 0xb98b2ebb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183206240 + 0xf9dd58f4));
  uRam00000001832061a8 =
       (uRam00000001832061a8 ^ uRam00000001832061f8 ^ 0xfdff7ffb) + 0x398b2a91 ^ 0xdca5e5181be4a0dd;
  uRam0000000183206268 =
       (uRam0000000183206268 * 0x3c57caf7da5f4d4f ^ uRam00000001832061a8) +
       (uRam00000001832061f8 ^ 0xfdff7ffb);
  uRam0000000183206140 = uRam0000000183206268 ^ uRam00000001832061a8;
  uRam00000001832062b8 = 0x398b2a91;
  uVar5 = (~uRam0000000183206200 + 0x73165523) *
          ((uRam00000001832061a0 ^ 0x4056764f) +
          (ulonglong)((uint)uRam00000001832061a0 & 0x4056764f) * 2);
  uVar5 = (uVar5 | uRam00000001832061f8) + (uVar5 & uRam00000001832061f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183206148 =
       func_0x00018922c140((uVar5 | 0x3340236d) + (ulonglong)((uint)uVar5 & 0x3340236d));
  uVar5 = uRam0000000183206148 >> 1 | uRam0000000183206148;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183206148;
  uRam0000000183206140 = uRam00000001832062d0 ^ uVar5 ^ 0x1378aaa8c;
  uRam00000001832061c8 = (uRam00000001832061c8 ^ uVar5) + 0x1378aaa8c ^ 0xf9a83e62289af8e3;
  uRam0000000183206278 = (uRam0000000183206278 * 0x5e4ca5ea7f4fed43 ^ uRam00000001832061c8) + uVar5;
  uRam0000000183206290 = uRam0000000183206278 ^ uRam00000001832061c8;
  uRam0000000183206168 = 0x378aaa8c;
  uVar5 = (uRam00000001832062f8 ^ _UNK_1812b3a50) + uRam0000000183206178 + 0xb3a889a9;
  uVar7 = (uRam0000000183206178 ^ _UNK_1812b3a58) + uRam00000001832062f8 + 0x378aaa8c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832062f8 ^ _UNK_1812b3a50;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183206178 ^ _UNK_1812b3a58;
  uVar5 = func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832062f8 + 0x378aaa8c)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam0000000183206178 + 0xb3a889a9));
  uRam00000001832061c0 = uVar5 << 0x20 | uVar5 >> 0x20;
  uRam0000000183206220 = uRam0000000183206220 ^ uRam00000001832061c0 ^ 0x88f77979e6eed9e8;
  uRam0000000183206288 = (uVar5 * -0x2cc9f21de4bb15b9 ^ uRam0000000183206220) + uRam00000001832061c0
  ;
  uRam0000000183206178 = uRam0000000183206288 ^ uRam0000000183206220;
  uRam0000000183206108 = 0;
  uVar5 = (uRam0000000183206270 ^ 0x842271d8) + uRam00000001832061c8 + 0x842271d8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183206270 ^ 0x842271d8;
  uVar7 = ((uRam00000001832061c8 + uRam0000000183206270) * 0x2000 |
          uRam00000001832061c8 + uRam0000000183206270 >> 0x33) ^ uRam00000001832061c8;
  uRam0000000183206120 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183206270 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832061c8 + 0x842271d8));
  uRam0000000183206220 = uRam0000000183206158 ^ uRam0000000183206120 ^ 0x52fd;
  uRam0000000183206210 = (uRam0000000183206210 ^ uRam0000000183206120) + 0x52fd ^ 0x7f6e58941e62bb84
  ;
  uRam0000000183206260 =
       (uRam0000000183206260 * 0x590aed8d409ebf19 ^ uRam0000000183206210) + uRam0000000183206120;
  uRam0000000183206228 = uRam0000000183206260 ^ uRam0000000183206210;
  uRam0000000183206238 = 0x52fd;
  lVar4 = func_0x00018922c140(uRam00000001832062a0 + 0xa0fffe08ffe1ff ^ 0xbd);
  uRam0000000183206258 =
       (uRam0000000183206258 ^ lVar4 * -0x2b0ad7ff005b97ef) + 0x8200842e ^ 0xe46465e4ad02627d;
  uRam0000000183206118 =
       (lVar4 * -0x18f5722fcad5f469 ^ uRam0000000183206258) + lVar4 * -0x2b0ad7ff005b97ef;
  uRam0000000183206290 = uRam0000000183206118 ^ uRam0000000183206258;
  uRam0000000183206208 = 0x8200842e;
  uVar5 = (uRam00000001832062b8 ^ _UNK_1812b3a60) + uRam00000001832062e0 + 0xf9dd58f4;
  uVar7 = (uRam00000001832062e0 ^ _UNK_1812b3a68) + uRam00000001832062b8 + 0x8200842e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832062b8 ^ _UNK_1812b3a60;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832062e0 ^ _UNK_1812b3a68;
  uRam0000000183206260 =
       func_0x00018922c140((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832062b8 + 0x8200842e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832062e0 + 0xf9dd58f4));
  uRam00000001832061d8 =
       uRam00000001832061d8 ^ uRam0000000183206260 * -0x13ae5b68495da877 ^ 0x60c24c27c994755c;
  uRam0000000183206160 =
       (uRam0000000183206160 * 0x1ec3551fc3e09585 ^ uRam00000001832061d8) +
       uRam0000000183206260 * -0x13ae5b68495da877;
  uRam00000001832062a8 = uRam0000000183206160 ^ uRam00000001832061d8;
  uRam0000000183206268 = 0;
  uVar5 = (~uRam0000000183206200 + 0x71ff5982) *
          ((uRam00000001832061f8 ^ 0xf5dd7aa4) +
          (ulonglong)((uint)uRam00000001832061f8 & 0xf5dd7aa4) * 2);
  uVar5 = (uVar5 | uRam00000001832062d8) + (uVar5 & uRam00000001832062d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183206208 =
       func_0x00018922c140((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = (uRam0000000183206208 ^ 0x150000000) & 0x1fe000000 ^ 0x71ff5981;
  uRam0000000183206290 = uRam0000000183206290 ^ uVar5 ^ 0xff76a81d7c59eba8;
  uRam0000000183206180 = (uRam0000000183206180 * -0x8ff230b55440cbb ^ uRam0000000183206290) + uVar5;
  uRam0000000183206260 = uRam0000000183206180 ^ uRam0000000183206290;
  uRam00000001832062c0 = 0;
  uVar5 = ((uRam0000000183206220 ^ 0x842271d8) +
          (ulonglong)((uint)uRam0000000183206220 & 0x842271d8) * 2) * -uRam00000001832062e0;
  uVar5 = (uVar5 | uRam0000000183206238) + (uVar5 & uRam0000000183206238);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183206298 =
       func_0x00018922c140((uVar5 | 0x842271d8) + (ulonglong)((uint)uVar5 & 0x842271d8));
  uVar5 = uRam0000000183206298 << 0x20 | uRam0000000183206298 >> 0x20;
  uRam0000000183206100 = uRam00000001832061f0 ^ uVar5 ^ 0x52fd;
  uRam0000000183206278 = (uRam0000000183206278 ^ uVar5) + 0x52fd ^ 0xfb7c9d15fb43bc27;
  uRam00000001832061d8 = (uRam00000001832061d8 * 0x7c0e15752c1dd807 ^ uRam0000000183206278) + uVar5;
  uRam0000000183206130 = uRam00000001832061d8 ^ uRam0000000183206278;
  uRam00000001832062d0 = 0x52fd;
  uVar5 = (~uRam0000000183206218 + 0x52fe) *
          ((uVar3 ^ 0x84222325 ^ uRam0000000183206160) +
          (ulonglong)((uint)uRam0000000183206160 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam00000001832062a0) + (uVar5 & uRam00000001832062a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832062b0 =
       func_0x00018922c140((uVar3 ^ 0x842271d8 | uVar5) +
                           (ulonglong)((uint)(uVar3 ^ 0x842271d8) & (uint)uVar5));
  uRam00000001832061d0 = uVar3 ^ 0x52fd;
  uRam0000000183206268 =
       (uRam0000000183206268 ^ uRam00000001832062b0) + uRam00000001832061d0 ^ 0xc5e903bfadee0c60;
  uRam0000000183206150 =
       (uRam0000000183206150 * 0x5de12c3e7924cbfd ^ uRam0000000183206268) + uRam00000001832062b0;
  uRam0000000183206220 = uRam0000000183206150 ^ uRam0000000183206268;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189223b42 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b1b80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bnG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18922c3d0, runtime 6ffff0e3c3d0) =====

void FUN_18922c3d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018922c41b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b3c40 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18922d3e0, runtime 6ffff0e3d3e0) =====

void FUN_18922d3e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018922d469 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812b4200 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bna ()Ljava/util/List; (handler @ image 1890f77e0, runtime 6ffff0d077e0) =====

void FUN_1890f77e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f7800 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181260d70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnb ()Ljava/util/List; (handler @ image 1890f79e0, runtime 6ffff0d079e0) =====

void FUN_1890f79e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f7a00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181260e50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnc ()Ljava/util/List; (handler @ image 1890f7be0, runtime 6ffff0d07be0) =====

void FUN_1890f7be0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f7c00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181260f30 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnd ()Ljava/util/List; (handler @ image 1890f7de0, runtime 6ffff0d07de0) =====

void FUN_1890f7de0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f7e00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181261010 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bne ()Ljava/util/List; (handler @ image 1890f7fe0, runtime 6ffff0d07fe0) =====

void FUN_1890f7fe0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890f8000 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812610f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnf ()Ljava/util/List; (handler @ image 1890fd490, runtime 6ffff0d0d490) =====

void FUN_1890fd490(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fd4b0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812629b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bng (Ljava/lang/String;)Lsixtwo/iu; (handler @ image 1890fd690, runtime 6ffff0d0d690) =====

void FUN_1890fd690(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fd6b5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181262a90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnh (Ljava/lang/String;)Lsixtwo/iu; (handler @ image 1890fd890, runtime 6ffff0d0d890) =====

void FUN_1890fd890(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fd8b5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181262b70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bni (Ljava/lang/String;)Lsixtwo/iu; (handler @ image 1890fda90, runtime 6ffff0d0da90) =====

void FUN_1890fda90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fdab5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181262c50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnj (Ljava/lang/String;)Lsixtwo/iu; (handler @ image 1890fdc90, runtime 6ffff0d0dc90) =====

void FUN_1890fdc90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fdcb5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181262d30 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnk (Ljava/lang/String;)Lsixtwo/iu; (handler @ image 1890fde90, runtime 6ffff0d0de90) =====

void FUN_1890fde90(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fdeb5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181262e10 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnl (Ljava/util/List;)Lsixtwo/iu; (handler @ image 1890fe090, runtime 6ffff0d0e090) =====

void FUN_1890fe090(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fe0b5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181262ef0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnm (Ljava/util/List;)Lsixtwo/iu; (handler @ image 1890fe290, runtime 6ffff0d0e290) =====

void FUN_1890fe290(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fe2b5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181262fd0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnn (Ljava/util/List;)Lsixtwo/iu; (handler @ image 1890fe490, runtime 6ffff0d0e490) =====

void FUN_1890fe490(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fe4b5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812630b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bno (Ljava/util/List;)Lsixtwo/iu; (handler @ image 1890fe690, runtime 6ffff0d0e690) =====

void FUN_1890fe690(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001890fe6b5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181263190 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnp (Ljava/util/List;)Lsixtwo/iu; (handler @ image 189103a30, runtime 6ffff0d13a30) =====

void FUN_189103a30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189103a55 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181264a50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnq (Ljava/util/List;)Lsixtwo/iu; (handler @ image 189103c30, runtime 6ffff0d13c30) =====

void FUN_189103c30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189103c55 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181264b30 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnr (Ljava/util/List;)Lsixtwo/iu; (handler @ image 189103e30, runtime 6ffff0d13e30) =====

void FUN_189103e30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189103e55 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181264c10 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bns (Ljava/util/List;)Lsixtwo/iu; (handler @ image 189104030, runtime 6ffff0d14030) =====

void FUN_189104030(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189104055 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181264cf0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnt (Ljava/util/List;)Lsixtwo/iu; (handler @ image 189104230, runtime 6ffff0d14230) =====

void FUN_189104230(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189104255 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181264dd0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnu (Ljava/util/List;)Lsixtwo/iu; (handler @ image 189104430, runtime 6ffff0d14430) =====

void FUN_189104430(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189104455 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181264eb0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnv (Ljava/util/List;)Lsixtwo/iu; (handler @ image 189104630, runtime 6ffff0d14630) =====

void FUN_189104630(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000189104655 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181264f90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iu; bnw (Ljava/lang/Object;)Z (handler @ image 189115a50, runtime 6ffff0d25a50) =====

void FUN_189115a50(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189115aa1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18126b480 + (ulonglong)(param_3 == 0 || cVar1 != '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bnx (Z)V (handler @ image 1891ec530, runtime 6ffff0dfc530) =====

void FUN_1891ec530(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001891ec57a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812a8f50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bny ()Z (handler @ image 1891ec6b0, runtime 6ffff0dfc6b0) =====

void FUN_1891ec6b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001891ec6f7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812a8ff0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; bnz ()Z (handler @ image 1891ec840, runtime 6ffff0dfc840) =====

void FUN_1891ec840(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001891ec887 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812a9090 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; equals (Ljava/lang/Object;)Z (handler @ image 189104830, runtime 6ffff0d14830) =====

void FUN_189104830(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001891048fd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181265080 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 18903d320, runtime 6ffff0c4d320) =====

void FUN_18903d320(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018903d40b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18122bed0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; hashCode ()I (handler @ image 189115b50, runtime 6ffff0d25b50) =====

void FUN_189115b50(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189115c43 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18126b610 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; toJson ()Lcom/google/gson/JsonObject; (handler @ image 189095080, runtime 6ffff0ca5080) =====

void FUN_189095080(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189095173 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181244760 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iu; toString ()Ljava/lang/String; (handler @ image 1891aad90, runtime 6ffff0dbad90) =====

void FUN_1891aad90(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159)
      /* POOL[0x7c06,0x159]: wo/ne;)Lsixtwo/ne; | ctY | GB | empty | sixtwo/iu | bmP | cui | boi | boD | parseLong | dlO | ()Lsixtwo/iB; | sixtwo/iB | bqb | (Lsixtwo/iy;Ljava/util/List;)Ljava/util/concurrent/CompletableFuture; | sixtwo/ne | ctt | ctv | sixtwo/iD | bol | brl | ([I)Lsixtwo/iD; | bom | brm | (Ljava/lang/String;)Lsixtwo/iD; | bon | brn | boo | bro | (I)Lsixtwo/iD; | bop | brp | boq | brq | bor | brr | bos | brs | (Z)Lsixtwo/iD; | bot | b */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001891aae7e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181297670 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x903d40e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18903d40e(void)

{
  FUN_190ddce00();
  (*_DAT_18122f608)();
  return;
}


// ----- block @ rva 0x904cba7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18904cba7(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190de3220(in_stack_00000038,&stack0x00000048,*_DAT_18301ee50 + 0x488,*_DAT_18301ee50 + 0x490,
                0x15);
  (*_DAT_18122d818)();
  return;
}


// ----- block @ rva 0x904d90b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018904d92f */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18904d90b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x904df11 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18904df11(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181233448)();
  return;
}


// ----- block @ rva 0x906cf62 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018906cf8b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18906cf62(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x9077a8c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189077a8c(void)

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


// ----- block @ rva 0x9084624 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189084624(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  (**(code **)(in_stack_00000038 + JNI->ThrowNew /*0x70*/))(in_stack_00000038,in_stack_00000040,&UNK_182f702a8);
  (*_DAT_1812300b8)();
  return;
}


// ----- block @ rva 0x90880cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890880cb(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_1812373e8)();
  return;
}


// ----- block @ rva 0x908d59f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18908d59f(void)

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


// ----- block @ rva 0x90920e7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890920e7(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190ddce00(in_stack_00000038,&stack0x00000058,*_DAT_18301ee50 + 0x3e3,*_DAT_18301ee50 + 1000,3)
  ;
  (*_DAT_181232208)();
  return;
}


// ----- block @ rva 0x90933cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890933cc(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181235568)();
  return;
}


// ----- block @ rva 0x9094ed4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189094ed4(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->Throw /*0x68*/))();
  (*_DAT_181233978)();
  return;
}


// ----- block @ rva 0x9094ee5 -----

void FUN_189094ee5(void)

{
  return;
}


// ----- block @ rva 0x9095176 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189095176(void)

{
  FUN_190ddce00();
  (*_DAT_18124eef8)();
  return;
}


// ----- block @ rva 0x90a1713 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890a1713(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000060;
  
  (**(code **)(in_stack_00000038 + JNI->GetObjectField /*0x2f8*/))(in_stack_00000038,in_stack_00000060);
  (*_DAT_181253748)();
  return;
}


// ----- block @ rva 0x90b2d90 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001890b2dae */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1890b2d90(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x90c4b42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890c4b42(void)

{
  longlong in_stack_000000d8;
  
  switch(in_stack_000000d8 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x90c6130 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001890c6159 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1890c6130(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x90cabdc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001890cac05 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1890cabdc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x90cfc26 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001890cfc64 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1890cfc26(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_184117d50(in_stack_00000038,in_stack_00000040);
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x90dcf77 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890dcf77(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18124d6d8)();
  return;
}


// ----- block @ rva 0x90ddbc2 -----

void FUN_1890ddbc2(void)

{
  return;
}


// ----- block @ rva 0x90e333a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890e333a(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18124a748)();
  return;
}


// ----- block @ rva 0x90e5404 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890e5404(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181245158)();
  return;
}


// ----- block @ rva 0x90ef99d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890ef99d(void)

{
  (*_DAT_181254798)();
  return;
}


// ----- block @ rva 0x90f6c7a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f6c7a(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->Throw /*0x68*/))();
  (*_DAT_1812524e8)();
  return;
}


// ----- block @ rva 0x90f6c8d -----

void FUN_1890f6c8d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f6e03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f6e03(void)

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


// ----- block @ rva 0x90f6e76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f6e76(void)

{
  FUN_190dd72e0();
  (*_DAT_181260928)();
  return;
}


// ----- block @ rva 0x90f6e9e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f6e9e(void)

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


// ----- block @ rva 0x90f6ebf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f6ebf(void)

{
  FUN_190dd9df0();
  (*_DAT_181260948)();
  return;
}


// ----- block @ rva 0x90f6ef2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f6ef2(void)

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


// ----- block @ rva 0x90f6f16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f6f16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260988)();
  return;
}


// ----- block @ rva 0x90f6f3d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f6f3d(void)

{
  (*_DAT_181260938)();
  return;
}


// ----- block @ rva 0x90f6f4e -----

void FUN_1890f6f4e(void)

{
  return;
}


// ----- block @ rva 0x90f6f56 -----

void FUN_1890f6f56(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f7003 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7003(void)

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


// ----- block @ rva 0x90f703c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f703c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260a38)();
  return;
}


// ----- block @ rva 0x90f7061 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7061(void)

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


// ----- block @ rva 0x90f7076 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7076(void)

{
  FUN_190dd72e0();
  (*_DAT_181260a88)();
  return;
}


// ----- block @ rva 0x90f70bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f70bf(void)

{
  FUN_190dd9df0();
  (*_DAT_181260a08)();
  return;
}


// ----- block @ rva 0x90f70f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f70f2(void)

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


// ----- block @ rva 0x90f7116 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7116(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260a28)();
  return;
}


// ----- block @ rva 0x90f713d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f713d(void)

{
  (*_DAT_181260a58)();
  return;
}


// ----- block @ rva 0x90f714e -----

void FUN_1890f714e(void)

{
  return;
}


// ----- block @ rva 0x90f7156 -----

void FUN_1890f7156(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f7203 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7203(void)

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


// ----- block @ rva 0x90f723c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f723c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260ae8)();
  return;
}


// ----- block @ rva 0x90f7261 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7261(void)

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


// ----- block @ rva 0x90f7276 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7276(void)

{
  FUN_190dd72e0();
  (*_DAT_181260b68)();
  return;
}


// ----- block @ rva 0x90f72bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f72bf(void)

{
  FUN_190dd9df0();
  (*_DAT_181260af8)();
  return;
}


// ----- block @ rva 0x90f72f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f72f2(void)

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


// ----- block @ rva 0x90f7316 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7316(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260b18)();
  return;
}


// ----- block @ rva 0x90f733d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f733d(void)

{
  (*_DAT_181260b28)();
  return;
}


// ----- block @ rva 0x90f734e -----

void FUN_1890f734e(void)

{
  return;
}


// ----- block @ rva 0x90f7356 -----

void FUN_1890f7356(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f7403 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7403(void)

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


// ----- block @ rva 0x90f743c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f743c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260c18)();
  return;
}


// ----- block @ rva 0x90f7461 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7461(void)

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


// ----- block @ rva 0x90f7476 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7476(void)

{
  FUN_190dd72e0();
  (*_DAT_181260bf8)();
  return;
}


// ----- block @ rva 0x90f749e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f749e(void)

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


// ----- block @ rva 0x90f74f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f74f2(void)

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


// ----- block @ rva 0x90f7516 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7516(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260c38)();
  return;
}


// ----- block @ rva 0x90f754e -----

void FUN_1890f754e(void)

{
  return;
}


// ----- block @ rva 0x90f7556 -----

void FUN_1890f7556(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f7603 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7603(void)

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


// ----- block @ rva 0x90f763c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f763c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260d18)();
  return;
}


// ----- block @ rva 0x90f7676 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7676(void)

{
  FUN_190dd72e0();
  (*_DAT_181260cc8)();
  return;
}


// ----- block @ rva 0x90f769e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f769e(void)

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


// ----- block @ rva 0x90f76bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f76bf(void)

{
  FUN_190dd9df0();
  (*_DAT_181260ce8)();
  return;
}


// ----- block @ rva 0x90f76f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f76f2(void)

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


// ----- block @ rva 0x90f7716 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7716(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260d28)();
  return;
}


// ----- block @ rva 0x90f774e -----

void FUN_1890f774e(void)

{
  return;
}


// ----- block @ rva 0x90f7756 -----

void FUN_1890f7756(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f7803 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7803(void)

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


// ----- block @ rva 0x90f7861 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7861(void)

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


// ----- block @ rva 0x90f7876 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7876(void)

{
  FUN_190dd72e0();
  (*_DAT_181260d88)();
  return;
}


// ----- block @ rva 0x90f789e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f789e(void)

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


// ----- block @ rva 0x90f78bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f78bf(void)

{
  FUN_190dd9df0();
  (*_DAT_181260df8)();
  return;
}


// ----- block @ rva 0x90f7916 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7916(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260d98)();
  return;
}


// ----- block @ rva 0x90f793d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f793d(void)

{
  (*_DAT_181260de8)();
  return;
}


// ----- block @ rva 0x90f794e -----

void FUN_1890f794e(void)

{
  return;
}


// ----- block @ rva 0x90f7956 -----

void FUN_1890f7956(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f7a03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7a03(void)

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


// ----- block @ rva 0x90f7a3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7a3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260ed8)();
  return;
}


// ----- block @ rva 0x90f7a76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7a76(void)

{
  FUN_190dd72e0();
  (*_DAT_181260ec8)();
  return;
}


// ----- block @ rva 0x90f7a9e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7a9e(void)

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


// ----- block @ rva 0x90f7abf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7abf(void)

{
  FUN_190dd9df0();
  (*_DAT_181260ea8)();
  return;
}


// ----- block @ rva 0x90f7af2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7af2(void)

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


// ----- block @ rva 0x90f7b16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7b16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260ee8)();
  return;
}


// ----- block @ rva 0x90f7b4e -----

void FUN_1890f7b4e(void)

{
  return;
}


// ----- block @ rva 0x90f7b56 -----

void FUN_1890f7b56(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f7c03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7c03(void)

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


// ----- block @ rva 0x90f7c3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7c3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260f68)();
  return;
}


// ----- block @ rva 0x90f7c61 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7c61(void)

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


// ----- block @ rva 0x90f7c76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7c76(void)

{
  FUN_190dd72e0();
  (*_DAT_181260f98)();
  return;
}


// ----- block @ rva 0x90f7c9e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7c9e(void)

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


// ----- block @ rva 0x90f7cbf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7cbf(void)

{
  FUN_190dd9df0();
  (*_DAT_181260f48)();
  return;
}


// ----- block @ rva 0x90f7cf2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7cf2(void)

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


// ----- block @ rva 0x90f7d16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7d16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181260f78)();
  return;
}


// ----- block @ rva 0x90f7d3d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7d3d(void)

{
  (*_DAT_181260fc8)();
  return;
}


// ----- block @ rva 0x90f7d4e -----

void FUN_1890f7d4e(void)

{
  return;
}


// ----- block @ rva 0x90f7d56 -----

void FUN_1890f7d56(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f7e03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7e03(void)

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


// ----- block @ rva 0x90f7e3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7e3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812610a8)();
  return;
}


// ----- block @ rva 0x90f7e76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7e76(void)

{
  FUN_190dd72e0();
  (*_DAT_181261048)();
  return;
}


// ----- block @ rva 0x90f7e9e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7e9e(void)

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


// ----- block @ rva 0x90f7ef2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f7ef2(void)

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


// ----- block @ rva 0x90f7f16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7f16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181261028)();
  return;
}


// ----- block @ rva 0x90f7f3d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f7f3d(void)

{
  (*_DAT_181261078)();
  return;
}


// ----- block @ rva 0x90f7f4e -----

void FUN_1890f7f4e(void)

{
  return;
}


// ----- block @ rva 0x90f7f56 -----

void FUN_1890f7f56(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f8003 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f8003(void)

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


// ----- block @ rva 0x90f803c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f803c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181261108)();
  return;
}


// ----- block @ rva 0x90f8061 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f8061(void)

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


// ----- block @ rva 0x90f8076 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f8076(void)

{
  FUN_190dd72e0();
  (*_DAT_181261168)();
  return;
}


// ----- block @ rva 0x90f809e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f809e(void)

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


// ----- block @ rva 0x90f80f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890f80f2(void)

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


// ----- block @ rva 0x90f8116 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f8116(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181261158)();
  return;
}


// ----- block @ rva 0x90f813d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f813d(void)

{
  (*_DAT_181261138)();
  return;
}


// ----- block @ rva 0x90f814e -----

void FUN_1890f814e(void)

{
  return;
}


// ----- block @ rva 0x90f8156 -----

void FUN_1890f8156(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90f82a4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890f82a4(void)

{
  FUN_190ddce00();
  (*_DAT_181261be8)();
  return;
}


// ----- block @ rva 0x90fbb4a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fbb4a(void)

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


// ----- block @ rva 0x90fbc20 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fbc20(void)

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


// ----- block @ rva 0x90fbffb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fbffb(void)

{
  (*_DAT_1812619d8)();
  return;
}


// ----- block @ rva 0x90fc8f6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fc8f6(void)

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


// ----- block @ rva 0x90fc993 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fc993(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181261398)();
  return;
}


// ----- block @ rva 0x90fcbbd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fcbbd(void)

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


// ----- block @ rva 0x90fcd9e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fcd9e(void)

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


// ----- block @ rva 0x90fceea -----

void FUN_1890fceea(void)

{
  return;
}


// ----- block @ rva 0x90fd180 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fd180(void)

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


// ----- block @ rva 0x90fd213 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd213(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_181261838)();
  return;
}


// ----- block @ rva 0x90fd332 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd332(void)

{
  (*_DAT_181261bd8)();
  return;
}


// ----- block @ rva 0x90fd4b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd4b3(void)

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


// ----- block @ rva 0x90fd4ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd4ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262a48)();
  return;
}


// ----- block @ rva 0x90fd526 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd526(void)

{
  FUN_190dd72e0();
  (*_DAT_181262a08)();
  return;
}


// ----- block @ rva 0x90fd54e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fd54e(void)

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


// ----- block @ rva 0x90fd56f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd56f(void)

{
  FUN_190dd9df0();
  (*_DAT_1812629e8)();
  return;
}


// ----- block @ rva 0x90fd5a2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fd5a2(void)

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


// ----- block @ rva 0x90fd5c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd5c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262a18)();
  return;
}


// ----- block @ rva 0x90fd5ed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd5ed(void)

{
  (*_DAT_181262a38)();
  return;
}


// ----- block @ rva 0x90fd5fe -----

void FUN_1890fd5fe(void)

{
  return;
}


// ----- block @ rva 0x90fd606 -----

void FUN_1890fd606(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fd6b8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd6b8(void)

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


// ----- block @ rva 0x90fd6f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd6f1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262ae8)();
  return;
}


// ----- block @ rva 0x90fd716 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fd716(void)

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


// ----- block @ rva 0x90fd72b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd72b(void)

{
  FUN_190dd72e0();
  (*_DAT_181262b28)();
  return;
}


// ----- block @ rva 0x90fd774 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd774(void)

{
  FUN_190dd9df0();
  (*_DAT_181262ac8)();
  return;
}


// ----- block @ rva 0x90fd7a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fd7a7(void)

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


// ----- block @ rva 0x90fd7cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd7cb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262b18)();
  return;
}


// ----- block @ rva 0x90fd803 -----

void FUN_1890fd803(void)

{
  return;
}


// ----- block @ rva 0x90fd80d -----

void FUN_1890fd80d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fd8b8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd8b8(void)

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


// ----- block @ rva 0x90fd8f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd8f1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262bf8)();
  return;
}


// ----- block @ rva 0x90fd92b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd92b(void)

{
  FUN_190dd72e0();
  (*_DAT_181262bc8)();
  return;
}


// ----- block @ rva 0x90fd953 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fd953(void)

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


// ----- block @ rva 0x90fd974 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd974(void)

{
  FUN_190dd9df0();
  (*_DAT_181262be8)();
  return;
}


// ----- block @ rva 0x90fd9a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fd9a7(void)

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


// ----- block @ rva 0x90fd9cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd9cb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262b88)();
  return;
}


// ----- block @ rva 0x90fd9f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fd9f2(void)

{
  (*_DAT_181262c08)();
  return;
}


// ----- block @ rva 0x90fda03 -----

void FUN_1890fda03(void)

{
  return;
}


// ----- block @ rva 0x90fda0d -----

void FUN_1890fda0d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fdab8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdab8(void)

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


// ----- block @ rva 0x90fdaf1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdaf1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262c98)();
  return;
}


// ----- block @ rva 0x90fdb16 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fdb16(void)

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


// ----- block @ rva 0x90fdb2b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdb2b(void)

{
  FUN_190dd72e0();
  (*_DAT_181262cc8)();
  return;
}


// ----- block @ rva 0x90fdb53 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fdb53(void)

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


// ----- block @ rva 0x90fdb74 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdb74(void)

{
  FUN_190dd9df0();
  (*_DAT_181262cd8)();
  return;
}


// ----- block @ rva 0x90fdbf2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdbf2(void)

{
  (*_DAT_181262c88)();
  return;
}


// ----- block @ rva 0x90fdc03 -----

void FUN_1890fdc03(void)

{
  return;
}


// ----- block @ rva 0x90fdc0d -----

void FUN_1890fdc0d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fdcb8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdcb8(void)

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


// ----- block @ rva 0x90fdcf1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdcf1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262d78)();
  return;
}


// ----- block @ rva 0x90fdd16 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fdd16(void)

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


// ----- block @ rva 0x90fdd2b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdd2b(void)

{
  FUN_190dd72e0();
  (*_DAT_181262db8)();
  return;
}


// ----- block @ rva 0x90fdda7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fdda7(void)

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


// ----- block @ rva 0x90fddcb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fddcb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262d98)();
  return;
}


// ----- block @ rva 0x90fddf2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fddf2(void)

{
  (*_DAT_181262da8)();
  return;
}


// ----- block @ rva 0x90fde03 -----

void FUN_1890fde03(void)

{
  return;
}


// ----- block @ rva 0x90fde0d -----

void FUN_1890fde0d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fdeb8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdeb8(void)

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


// ----- block @ rva 0x90fdef1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdef1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262e88)();
  return;
}


// ----- block @ rva 0x90fdf16 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fdf16(void)

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


// ----- block @ rva 0x90fdf2b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdf2b(void)

{
  FUN_190dd72e0();
  (*_DAT_181262e28)();
  return;
}


// ----- block @ rva 0x90fdf53 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fdf53(void)

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


// ----- block @ rva 0x90fdfa7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fdfa7(void)

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


// ----- block @ rva 0x90fdfcb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdfcb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262e58)();
  return;
}


// ----- block @ rva 0x90fdff2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fdff2(void)

{
  (*_DAT_181262e98)();
  return;
}


// ----- block @ rva 0x90fe003 -----

void FUN_1890fe003(void)

{
  return;
}


// ----- block @ rva 0x90fe00d -----

void FUN_1890fe00d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fe0b8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe0b8(void)

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


// ----- block @ rva 0x90fe0f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe0f1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262f38)();
  return;
}


// ----- block @ rva 0x90fe116 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fe116(void)

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


// ----- block @ rva 0x90fe12b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe12b(void)

{
  FUN_190dd72e0();
  (*_DAT_181262f78)();
  return;
}


// ----- block @ rva 0x90fe1a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fe1a7(void)

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


// ----- block @ rva 0x90fe1cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe1cb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262f08)();
  return;
}


// ----- block @ rva 0x90fe1f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe1f2(void)

{
  (*_DAT_181262f68)();
  return;
}


// ----- block @ rva 0x90fe203 -----

void FUN_1890fe203(void)

{
  return;
}


// ----- block @ rva 0x90fe20d -----

void FUN_1890fe20d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fe2b8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe2b8(void)

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


// ----- block @ rva 0x90fe2f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe2f1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181263068)();
  return;
}


// ----- block @ rva 0x90fe32b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe32b(void)

{
  FUN_190dd72e0();
  (*_DAT_181263038)();
  return;
}


// ----- block @ rva 0x90fe353 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fe353(void)

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


// ----- block @ rva 0x90fe374 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe374(void)

{
  FUN_190dd9df0();
  (*_DAT_181262ff8)();
  return;
}


// ----- block @ rva 0x90fe3a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fe3a7(void)

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


// ----- block @ rva 0x90fe3cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe3cb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181262fe8)();
  return;
}


// ----- block @ rva 0x90fe3f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe3f2(void)

{
  (*_DAT_181263028)();
  return;
}


// ----- block @ rva 0x90fe403 -----

void FUN_1890fe403(void)

{
  return;
}


// ----- block @ rva 0x90fe40d -----

void FUN_1890fe40d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fe4b8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe4b8(void)

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


// ----- block @ rva 0x90fe4f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe4f1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181263148)();
  return;
}


// ----- block @ rva 0x90fe52b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe52b(void)

{
  FUN_190dd72e0();
  (*_DAT_1812630e8)();
  return;
}


// ----- block @ rva 0x90fe553 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fe553(void)

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


// ----- block @ rva 0x90fe574 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe574(void)

{
  FUN_190dd9df0();
  (*_DAT_181263118)();
  return;
}


// ----- block @ rva 0x90fe5a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fe5a7(void)

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


// ----- block @ rva 0x90fe5cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe5cb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181263138)();
  return;
}


// ----- block @ rva 0x90fe603 -----

void FUN_1890fe603(void)

{
  return;
}


// ----- block @ rva 0x90fe60d -----

void FUN_1890fe60d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fe6b8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe6b8(void)

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


// ----- block @ rva 0x90fe6f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe6f1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181263208)();
  return;
}


// ----- block @ rva 0x90fe716 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fe716(void)

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


// ----- block @ rva 0x90fe72b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe72b(void)

{
  FUN_190dd72e0();
  (*_DAT_1812631b8)();
  return;
}


// ----- block @ rva 0x90fe753 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1890fe753(void)

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


// ----- block @ rva 0x90fe774 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe774(void)

{
  FUN_190dd9df0();
  (*_DAT_181263228)();
  return;
}


// ----- block @ rva 0x90fe7cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe7cb(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181263218)();
  return;
}


// ----- block @ rva 0x90fe803 -----

void FUN_1890fe803(void)

{
  return;
}


// ----- block @ rva 0x90fe80d -----

void FUN_1890fe80d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x90fe954 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1890fe954(void)

{
  FUN_190ddce00();
  (*_DAT_181263a78)();
  return;
}


// ----- block @ rva 0x91020a5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891020a5(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181263d28)();
  return;
}


// ----- block @ rva 0x9102a6a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189102a6a(void)

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


// ----- block @ rva 0x9102c94 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189102c94(void)

{
  (*_DAT_181263348)();
  return;
}


// ----- block @ rva 0x9102c9f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189102c9f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1842a3a30();
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


// ----- block @ rva 0x9102e7b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189102e7b(void)

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


// ----- block @ rva 0x91031dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891031dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181263528)();
  return;
}


// ----- block @ rva 0x9103306 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103306(void)

{
  (*_DAT_181263c48)();
  return;
}


// ----- block @ rva 0x910348c -----

void FUN_18910348c(void)

{
  return;
}


// ----- block @ rva 0x91034f8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891034f8(void)

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


// ----- block @ rva 0x91038b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891038b9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    (*_DAT_181263bb8)();
    return;
  }
  (*_DAT_181263bb8)();
  return;
}


// ----- block @ rva 0x91038d4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891038d4(void)

{
  (*_DAT_181263bb8)();
  return;
}


// ----- block @ rva 0x91038dc -----

void FUN_1891038dc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9103a58 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103a58(void)

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


// ----- block @ rva 0x9103ab6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189103ab6(void)

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


// ----- block @ rva 0x9103acb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103acb(void)

{
  FUN_190dd72e0();
  (*_DAT_181264ac8)();
  return;
}


// ----- block @ rva 0x9103af3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189103af3(void)

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


// ----- block @ rva 0x9103b14 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103b14(void)

{
  FUN_190dd9df0();
  (*_DAT_181264a88)();
  return;
}


// ----- block @ rva 0x9103b47 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189103b47(void)

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


// ----- block @ rva 0x9103b92 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103b92(void)

{
  (*_DAT_181264a68)();
  return;
}


// ----- block @ rva 0x9103ba3 -----

void FUN_189103ba3(void)

{
  return;
}


// ----- block @ rva 0x9103bad -----

void FUN_189103bad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9103c58 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103c58(void)

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


// ----- block @ rva 0x9103c91 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103c91(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264b98)();
  return;
}


// ----- block @ rva 0x9103cb6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189103cb6(void)

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


// ----- block @ rva 0x9103ccb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103ccb(void)

{
  FUN_190dd72e0();
  (*_DAT_181264bc8)();
  return;
}


// ----- block @ rva 0x9103d47 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189103d47(void)

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


// ----- block @ rva 0x9103d6b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103d6b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264ba8)();
  return;
}


// ----- block @ rva 0x9103d92 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103d92(void)

{
  (*_DAT_181264b78)();
  return;
}


// ----- block @ rva 0x9103da3 -----

void FUN_189103da3(void)

{
  return;
}


// ----- block @ rva 0x9103dad -----

void FUN_189103dad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9103e58 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103e58(void)

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


// ----- block @ rva 0x9103e91 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103e91(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264c98)();
  return;
}


// ----- block @ rva 0x9103ecb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103ecb(void)

{
  FUN_190dd72e0();
  (*_DAT_181264c78)();
  return;
}


// ----- block @ rva 0x9103ef3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189103ef3(void)

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


// ----- block @ rva 0x9103f14 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103f14(void)

{
  FUN_190dd9df0();
  (*_DAT_181264c48)();
  return;
}


// ----- block @ rva 0x9103f47 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189103f47(void)

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


// ----- block @ rva 0x9103f6b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103f6b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264c28)();
  return;
}


// ----- block @ rva 0x9103f92 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189103f92(void)

{
  (*_DAT_181264c38)();
  return;
}


// ----- block @ rva 0x9103fa3 -----

void FUN_189103fa3(void)

{
  return;
}


// ----- block @ rva 0x9103fad -----

void FUN_189103fad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9104058 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104058(void)

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


// ----- block @ rva 0x9104091 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104091(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264d28)();
  return;
}


// ----- block @ rva 0x91040b6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891040b6(void)

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


// ----- block @ rva 0x91040cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891040cb(void)

{
  FUN_190dd72e0();
  (*_DAT_181264d18)();
  return;
}


// ----- block @ rva 0x91040f3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891040f3(void)

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


// ----- block @ rva 0x9104114 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104114(void)

{
  FUN_190dd9df0();
  (*_DAT_181264d88)();
  return;
}


// ----- block @ rva 0x9104192 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104192(void)

{
  (*_DAT_181264d38)();
  return;
}


// ----- block @ rva 0x91041a3 -----

void FUN_1891041a3(void)

{
  return;
}


// ----- block @ rva 0x91041ad -----

void FUN_1891041ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9104258 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104258(void)

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


// ----- block @ rva 0x91042b6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891042b6(void)

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


// ----- block @ rva 0x91042cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891042cb(void)

{
  FUN_190dd72e0();
  (*_DAT_181264e38)();
  return;
}


// ----- block @ rva 0x91042f3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891042f3(void)

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


// ----- block @ rva 0x9104347 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189104347(void)

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


// ----- block @ rva 0x910436b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18910436b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264de8)();
  return;
}


// ----- block @ rva 0x9104392 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104392(void)

{
  (*_DAT_181264e08)();
  return;
}


// ----- block @ rva 0x91043a3 -----

void FUN_1891043a3(void)

{
  return;
}


// ----- block @ rva 0x91043ad -----

void FUN_1891043ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9104458 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104458(void)

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


// ----- block @ rva 0x9104491 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104491(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264f38)();
  return;
}


// ----- block @ rva 0x91044cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891044cb(void)

{
  FUN_190dd72e0();
  (*_DAT_181264ed8)();
  return;
}


// ----- block @ rva 0x91044f3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891044f3(void)

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


// ----- block @ rva 0x9104514 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104514(void)

{
  FUN_190dd9df0();
  (*_DAT_181264f18)();
  return;
}


// ----- block @ rva 0x9104547 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189104547(void)

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


// ----- block @ rva 0x9104592 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104592(void)

{
  (*_DAT_181264f08)();
  return;
}


// ----- block @ rva 0x91045a3 -----

void FUN_1891045a3(void)

{
  return;
}


// ----- block @ rva 0x91045ad -----

void FUN_1891045ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9104658 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104658(void)

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


// ----- block @ rva 0x9104691 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104691(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264fe8)();
  return;
}


// ----- block @ rva 0x91046b6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891046b6(void)

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


// ----- block @ rva 0x91046cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891046cb(void)

{
  FUN_190dd72e0();
  (*_DAT_181265028)();
  return;
}


// ----- block @ rva 0x9104714 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104714(void)

{
  FUN_190dd9df0();
  (*_DAT_181265008)();
  return;
}


// ----- block @ rva 0x9104747 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189104747(void)

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


// ----- block @ rva 0x910476b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18910476b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181264fd8)();
  return;
}


// ----- block @ rva 0x9104792 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104792(void)

{
  (*_DAT_181264fa8)();
  return;
}


// ----- block @ rva 0x91047a3 -----

void FUN_1891047a3(void)

{
  return;
}


// ----- block @ rva 0x91047ad -----

void FUN_1891047ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9104900 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189104900(void)

{
  FUN_190ddce00();
  (*_DAT_181266d98)();
  return;
}


// ----- block @ rva 0x9108e50 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189108e50(void)

{
  (*_DAT_18126a5c8)();
  return;
}


// ----- block @ rva 0x91096ad -----

void FUN_1891096ad(void)

{
  return;
}


// ----- block @ rva 0x910bdfd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18910bdfd(void)

{
  (*_DAT_181268cf8)();
  return;
}


// ----- block @ rva 0x910ea22 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18910ea22(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812699b8)();
  return;
}


// ----- block @ rva 0x910ec33 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18910ec33(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallBooleanMethodA /*0x138*/))();
  (*_DAT_1812657e8)();
  return;
}


// ----- block @ rva 0x910edd5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18910edd5(void)

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


// ----- block @ rva 0x910fe71 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18910fe71(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181269a88)();
  return;
}


// ----- block @ rva 0x91100d0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891100d0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_1812656b8)();
  return;
}


// ----- block @ rva 0x9114b39 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189114b39(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181268938)();
  return;
}


// ----- block @ rva 0x9114d23 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189114d23(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181265218)();
  return;
}


// ----- block @ rva 0x9115701 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189115701(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_18126a658)();
  return;
}


// ----- block @ rva 0x91157dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891157dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  (*_DAT_181269388)();
  return;
}


// ----- block @ rva 0x9115946 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189115946(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_18126a4b8)();
  return;
}


// ----- block @ rva 0x9115aa4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189115aa4(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->IsInstanceOf /*0x100*/))();
  (*_DAT_18126b498)();
  return;
}


// ----- block @ rva 0x9115ac1 -----

void FUN_189115ac1(void)

{
  return;
}


// ----- block @ rva 0x9115ac9 -----

void FUN_189115ac9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9115c46 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189115c46(void)

{
  FUN_190ddce00();
  (*_DAT_18127a5f8)();
  return;
}


// ----- block @ rva 0x911f9de -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18911f9de(void)

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


// ----- block @ rva 0x912fbef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18912fbef(void)

{
  (*_DAT_181284e18)();
  return;
}


// ----- block @ rva 0x9141045 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189141045(void)

{
  (*_DAT_181283938)();
  return;
}


// ----- block @ rva 0x91510e5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891510e5(void)

{
  (*_DAT_181283e18)();
  return;
}


// ----- block @ rva 0x9165a5f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189165a5f(void)

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


// ----- block @ rva 0x9181f71 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189181f71(void)

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


// ----- block @ rva 0x919428b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001891942b4 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18919428b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x91a6bfc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891a6bfc(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->Throw /*0x68*/))();
  (*_DAT_1812861f8)();
  return;
}


// ----- block @ rva 0x91a6c0f -----

void FUN_1891a6c0f(void)

{
  return;
}


// ----- block @ rva 0x91a6e94 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891a6e94(void)

{
  FUN_190ddce00();
  (*_DAT_181296bc8)();
  return;
}


// ----- block @ rva 0x91a91fd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891a91fd(void)

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


// ----- block @ rva 0x91a94e5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891a94e5(void)

{
  (*_DAT_1812967e8)();
  return;
}


// ----- block @ rva 0x91a954b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891a954b(void)

{
  (*_DAT_1812967e8)();
  return;
}


// ----- block @ rva 0x91a9759 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891a9759(void)

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


// ----- block @ rva 0x91a9cec -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891a9cec(void)

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


// ----- block @ rva 0x91a9d61 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891a9d61(void)

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


// ----- block @ rva 0x91aa7e9 -----

void FUN_1891aa7e9(void)

{
  return;
}


// ----- block @ rva 0x91aaa4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891aaa4c(void)

{
  FUN_190ddfc90();
  (*_DAT_1812963b8)();
  return;
}


// ----- block @ rva 0x91aac31 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891aac31(void)

{
  (*_DAT_181296ab8)();
  return;
}


// ----- block @ rva 0x91aac39 -----

void FUN_1891aac39(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x91aae81 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891aae81(void)

{
  FUN_190ddce00();
  (*_DAT_181297b58)();
  return;
}


// ----- block @ rva 0x91ae19c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ae19c(void)

{
  longlong in_stack_00000188;
  
  switch(in_stack_00000188 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x91b78e3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001891b7938 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1891b78e3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x91ce0d8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ce0d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  FUN_190dd72e0();
  (*_DAT_181297948)();
  return;
}


// ----- block @ rva 0x91d8d92 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891d8d92(void)

{
  FUN_190dd72e0();
  (*_DAT_18129c028)();
  return;
}


// ----- block @ rva 0x91e3af3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891e3af3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  FUN_190dd72e0();
  (*_DAT_18129a5b8)();
  return;
}


// ----- block @ rva 0x91e7082 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891e7082(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d80();
  (*_DAT_181297c88)();
  return;
}


// ----- block @ rva 0x91eb5fb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891eb5fb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181298f88)();
  return;
}


// ----- block @ rva 0x91ec3c0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec3c0(void)

{
  (*_DAT_18129c478)();
  return;
}


// ----- block @ rva 0x91ec3c8 -----

void FUN_1891ec3c8(void)

{
  return;
}


// ----- block @ rva 0x91ec57d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec57d(void)

{
  FUN_190ddce00();
  (*_DAT_1812a8f78)();
  return;
}


// ----- block @ rva 0x91ec5b0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec5b0(void)

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


// ----- block @ rva 0x91ec5d4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec5d4(void)

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


// ----- block @ rva 0x91ec5f5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec5f5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetStaticBooleanField /*0x4d8*/))();
  (*_DAT_1812a8f68)();
  return;
}


// ----- block @ rva 0x91ec612 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec612(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812a8fa8)();
  return;
}


// ----- block @ rva 0x91ec624 -----

void FUN_1891ec624(void)

{
  return;
}


// ----- block @ rva 0x91ec62c -----

void FUN_1891ec62c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x91ec65a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec65a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1812a8fe8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x91ec666 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec666(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0x91ec683 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec683(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1812a8fd8)();
  return;
}


// ----- block @ rva 0x91ec68c -----

void FUN_1891ec68c(void)

{
  return;
}


// ----- block @ rva 0x91ec6fa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec6fa(void)

{
  FUN_190ddce00();
  (*_DAT_1812a9038)();
  return;
}


// ----- block @ rva 0x91ec72d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec72d(void)

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


// ----- block @ rva 0x91ec751 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec751(void)

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


// ----- block @ rva 0x91ec772 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec772(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticBooleanField /*0x490*/))();
  (*_DAT_1812a9048)();
  return;
}


// ----- block @ rva 0x91ec78c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec78c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812a9008)(0);
  return;
}


// ----- block @ rva 0x91ec7aa -----

void FUN_1891ec7aa(void)

{
  return;
}


// ----- block @ rva 0x91ec7b2 -----

void FUN_1891ec7b2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x91ec7ea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec7ea(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1812a9078)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x91ec7f6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec7f6(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0x91ec813 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec813(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1812a9088)();
  return;
}


// ----- block @ rva 0x91ec81c -----

void FUN_1891ec81c(void)

{
  return;
}


// ----- block @ rva 0x91ec88a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec88a(void)

{
  FUN_190de3220();
  (*_DAT_1812a90b8)();
  return;
}


// ----- block @ rva 0x91ec8bd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec8bd(void)

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


// ----- block @ rva 0x91ec8e1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec8e1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_18436c0d0();
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


// ----- block @ rva 0x91ec914 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec914(void)

{
  (*_DAT_1812a90c8)();
  return;
}


// ----- block @ rva 0x91ec91f -----

void FUN_1891ec91f(void)

{
  return;
}


// ----- block @ rva 0x91ec927 -----

void FUN_1891ec927(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x91ec98a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec98a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1812a90f8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x91ec996 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891ec996(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0x91ec9b3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ec9b3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_1812a9118)();
  return;
}


// ----- block @ rva 0x91ec9bc -----

void FUN_1891ec9bc(void)

{
  return;
}


// ----- block @ rva 0x91ec9bd -----

undefined4 * FUN_1891ec9bd(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x91ecb13 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001891ecb4a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1891ecb13(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x91ecb68 -----

void FUN_1891ecb68(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x0001891ecb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1812a9660 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x91ecd97 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1891ecd97(void)

{
  byte bVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  uint unaff_R12D;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar3;
  ulonglong unaff_XMM6_Qa;
  ulonglong unaff_XMM6_Qb;
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  ulonglong unaff_XMM10_Qa;
  ulonglong unaff_XMM10_Qb;
  
  _DAT_183205438 = func_0x000189216e40(_DAT_183205440 ^ 0x22ff8406001d68);
  uVar2 = (_DAT_183205438 ^ 0x7486) & 0x7fffffffffffffff;
  _DAT_1832053a8 = (_DAT_1832053a8 ^ uVar2) + 0x23 ^ 0xc0e318e74db31b2c;
  _DAT_183205478 = (_DAT_183205478 * -0x429c063f0049c38f ^ _DAT_1832053a8) + uVar2;
  _DAT_183205448 = _DAT_183205478 ^ _DAT_1832053a8;
  _DAT_183205180 = 0x23;
  uVar2 = (_DAT_183205240 ^ unaff_XMM6_Qa) + _DAT_1832052b8 + 0x84222315;
  uVar3 = (_DAT_1832052b8 ^ unaff_XMM6_Qb) + _DAT_183205240 + 0xa9;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183205240 ^ unaff_XMM6_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832052b8 ^ unaff_XMM6_Qb;
  _DAT_183205488 =
       func_0x000189216e40((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183205240 + 0xa9) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832052b8 + 0x84222315));
  uVar2 = (_DAT_183205488 << 0x23 | _DAT_183205488 >> 0x1d) * 0x75721e44e9feed65;
  _DAT_183205338 = (_DAT_1832054b0 ^ uVar2 ^ 0xd9 ^ uVar2) + 0xd9 ^ 0x28a35ad9b00a504d;
  _DAT_1832051f0 = (_DAT_1832051f0 * 0x120bee43818e13c5 ^ _DAT_183205338) + uVar2;
  _DAT_1832053d0 = _DAT_1832051f0 ^ _DAT_183205338;
  _DAT_183205210 = 0xd9;
  _DAT_183205238 = func_0x000189216e40(_DAT_1832051c8 + 0xffdeff83670021ff ^ 0xc1);
  _DAT_183205388 =
       (_DAT_183205388 ^ _DAT_183205238 & 0xfffffffff0000000) - 0x9e ^ 0x1117c491e60ebcc8;
  _DAT_183205100 =
       (_DAT_183205100 * -0x6b0b4e000e8de36d ^ _DAT_183205388) +
       (_DAT_183205238 & 0xfffffffff0000000);
  _DAT_183205110 = _DAT_183205100 ^ _DAT_183205388;
  _DAT_183205278 = 0x62;
  uVar2 = (~_DAT_1832053e0 + 0x9f) *
          ((_DAT_1832052b8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832052b8 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_1832051a8) + (uVar2 & _DAT_1832051a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832054b8 = func_0x000189216e40((uVar2 | 0x8422238b) + (ulonglong)((uint)uVar2 & 0x8422238b))
  ;
  uVar2 = _DAT_1832054b8 << 0x1a | _DAT_1832054b8 >> 0x26;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R14) + (uVar3 >> 2 & unaff_R14);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_RDI) * 0x101010101010101 >> 0x38)) * 0x40 ^ uVar2;
  _DAT_183205498 = _DAT_1832053d8 ^ uVar2 ^ 0xce;
  _DAT_183205168 = (_DAT_183205168 ^ uVar2) + 0xce ^ 0x74100a3eccdc8f78;
  _DAT_1832054b0 = (_DAT_1832054b0 * -0x6bdc22d267513b73 ^ _DAT_183205168) + uVar2;
  _DAT_183205420 = _DAT_1832054b0 ^ _DAT_183205168;
  _DAT_183205110 = 0xce;
  uVar2 = (_DAT_183205340 ^ unaff_XMM7_Qa) + _DAT_1832053a0 + 0x842223eb;
  uVar3 = (_DAT_1832053a0 ^ unaff_XMM7_Qb) + _DAT_183205340 + 0x62;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183205340 ^ unaff_XMM7_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832053a0 ^ unaff_XMM7_Qb;
  _DAT_1832054d0 =
       func_0x000189216e40((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183205340 + 0x62) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832053a0 + 0x842223eb));
  uVar2 = _DAT_1832054d0 ^ 0x4edc;
  _DAT_1832053b0 = _DAT_1832053f0 ^ uVar2 ^ 0x130;
  _DAT_183205330 = (_DAT_183205330 ^ uVar2) + 0x130 ^ 0x55b6c8ac207be8d1;
  _DAT_183205498 = (_DAT_183205498 * -0x58429585402d8661 ^ _DAT_183205330) + uVar2;
  _DAT_1832051f0 = _DAT_183205498 ^ _DAT_183205330;
  _DAT_183205468 = 0x30;
  uVar2 = (~_DAT_183205260 + 0xe3) *
          ((_DAT_1832053e0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832053e0 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183205260) + (uVar2 & _DAT_183205260);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183205188 = func_0x000189216e40((uVar2 | 0x842223c7) + (ulonglong)((uint)uVar2 & 0x842223c7))
  ;
  _DAT_1832054b0 = _DAT_1832054b0 - 0xe2 ^ 0x681ffff34b4013d2;
  _DAT_183205180 = _DAT_183205248 * 0x452b07344e27100b;
  _DAT_183205248 = _DAT_183205180 ^ _DAT_1832054b0;
  _DAT_183205288 = 0x1e;
  _DAT_1832054d0 = func_0x000189216e40(_DAT_1832052d0 + 0xffdcff7bcf001dff ^ 0x91);
  uVar2 = _DAT_1832054d0 ^ 0xf2;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R14) + (uVar3 >> 2 & unaff_R14);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_RDI) * 0x101010101010101 >> 0x38)) * 2 ^ uVar2;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R14) + (uVar3 >> 2 & unaff_R14);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & unaff_RDI) * 0x101010101010101 >> 0x38)) * 0x20 ^ uVar2;
  _DAT_1832052c8 = _DAT_1832052d0 ^ uVar2 ^ 0x112;
  _DAT_183205318 = (_DAT_183205318 ^ uVar2) + 0x112 ^ 0x7d90c8188bab3b5e;
  _DAT_183205310 = (_DAT_183205310 * -0x213714dbf64dc1fd ^ _DAT_183205318) + uVar2;
  _DAT_1832054d8 = _DAT_183205310 ^ _DAT_183205318;
  _DAT_183205178 = 0x12;
  uVar2 = (~_DAT_183205380 + 0x24) *
          ((_DAT_183205218 ^ unaff_R15) + (ulonglong)((uint)_DAT_183205218 & 0x842223c8) * 2);
  uVar2 = (uVar2 | _DAT_1832053c8) + (uVar2 & _DAT_1832053c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183205258 = func_0x000189216e40((uVar2 | 0x842223eb) + (ulonglong)((uint)uVar2 & 0x842223eb))
  ;
  _DAT_183205160 = _DAT_183205230 ^ _DAT_183205258 ^ 0x110;
  _DAT_1832054d8 = (_DAT_1832054d8 ^ _DAT_183205258) + 0x110 ^ 0x7b928e73a23c0751;
  _DAT_183205418 = (_DAT_183205418 * 0x550c524889fd9f81 ^ _DAT_1832054d8) + _DAT_183205258;
  _DAT_183205360 = _DAT_183205418 ^ _DAT_1832054d8;
  _DAT_183205330 = 0x10;
  _DAT_183205398 = func_0x000189216e40(_DAT_183205208 ^ 0xffe10084170021a2);
  uVar2 = _DAT_183205398 >> 1 | _DAT_183205398;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_R14) + (uVar2 >> 2 & unaff_R14);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & unaff_RDI) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_183205398;
  _DAT_1832054b0 = (_DAT_1832054b0 ^ uVar2) + 0xce ^ 0xc156708b36e25fbe;
  _DAT_183205330 = (_DAT_183205330 * -0x77253ebd1a3a9675 ^ _DAT_1832054b0) + uVar2;
  _DAT_183205350 = _DAT_183205330 ^ _DAT_1832054b0;
  _DAT_1832052a8 = _DAT_1832051f0 ^ 0xce;
  _DAT_183205310 = 0xce;
  uVar2 = (_DAT_1832053a8 ^ unaff_XMM8_Qa) + _DAT_183205268 + unaff_R15;
  uVar3 = (_DAT_183205268 ^ unaff_XMM8_Qb) + _DAT_1832053a8 + 0x23;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832053a8 ^ unaff_XMM8_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183205268 ^ unaff_XMM8_Qb;
  _DAT_1832052e0 =
       func_0x000189216e40((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832053a8 + 0x23) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183205268 + unaff_R15));
  uVar2 = _DAT_1832052e0 - (_DAT_1832052e0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_R14) + (uVar2 >> 2 & unaff_R14);
  uVar2 = (((uVar2 >> 4) + uVar2 & unaff_RDI) * 0x101010101010101 >> 0x38) << 5 ^ _DAT_1832052e0;
  _DAT_183205258 = (_DAT_183205258 ^ uVar2) + 0x21 ^ 0x20292e0c65bdc99;
  _DAT_183205380 = (_DAT_183205380 * -0x18aeeae82831299f ^ _DAT_183205258) + uVar2;
  _DAT_1832053f8 = _DAT_183205380 ^ _DAT_183205258;
  _DAT_1832052f0 = 0x21;
  uVar2 = (_DAT_183205298 ^ unaff_XMM9_Qa) + _DAT_1832051c8 + 0x842223eb;
  uVar3 = (_DAT_1832051c8 ^ unaff_XMM9_Qb) + _DAT_183205298 + 0x42;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183205298 ^ unaff_XMM9_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832051c8 ^ unaff_XMM9_Qb;
  _DAT_183205458 =
       func_0x000189216e40((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183205298 + 0x42) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832051c8 + 0x842223eb));
  uVar2 = (_DAT_183205458 & 0xfffffffffffffffc) << 0x26 | _DAT_183205458 >> 0x1a;
  _DAT_183205348 = _DAT_183205180 ^ uVar2 ^ 0x110;
  _DAT_183205270 = (_DAT_183205270 ^ uVar2) + 0x110 ^ 0x72b8cb23c8c2272;
  _DAT_183205230 = (_DAT_183205230 * -0xcb453149cdd7ca5 ^ _DAT_183205270) + uVar2;
  _DAT_183205470 = _DAT_183205230 ^ _DAT_183205270;
  _DAT_183205108 = 0x10;
  uVar2 = (~_DAT_1832052e8 + 0x11) *
          ((_DAT_183205258 ^ 0x84222335) + (ulonglong)((uint)_DAT_183205258 & 0x84222335) * 2);
  uVar2 = (uVar2 | _DAT_183205480) + (uVar2 & _DAT_183205480);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183205128 = func_0x000189216e40((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_1832054a8 = _DAT_183205128 & 0x7fffffffffffffff;
  _DAT_183205430 = _DAT_183205430 ^ _DAT_1832054a8 ^ 0x7f0effd267f14379;
  _DAT_1832051f0 = (_DAT_1832051f0 * 0x53c07829694f9f25 ^ _DAT_183205430) + _DAT_1832054a8;
  _DAT_183205188 = _DAT_1832051f0 ^ _DAT_183205430;
  _DAT_1832051e8 = _DAT_183205148;
  _DAT_183205200 = 0;
  _DAT_183205160 = func_0x000189216e40(_DAT_183205470 ^ 0xffdeff83f2ffddb9);
  uVar2 = _DAT_183205160 ^ 0x30;
  _DAT_183205100 = _DAT_183205450 ^ uVar2 ^ 0x30;
  _DAT_1832051d0 = (_DAT_1832051d0 ^ uVar2) + 0x30 ^ 0x3b00c75b0e64c825;
  _DAT_1832054e8 = (_DAT_1832054e8 * 0x5f563fe7a539fc7 ^ _DAT_1832051d0) + uVar2;
  _DAT_183205210 = _DAT_1832054e8 ^ _DAT_1832051d0;
  _DAT_183205330 = 0x30;
  uVar2 = (~_DAT_183205188 + 0x100) *
          ((_DAT_183205230 ^ unaff_R15) + (ulonglong)((uint)_DAT_183205230 & 0x842223c8) * 2);
  uVar2 = (uVar2 | _DAT_183205130) + (uVar2 & _DAT_183205130);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832054b0 = func_0x000189216e40((uVar2 | 0x84222337) + (ulonglong)((uint)uVar2 & 0x84222337))
  ;
  uVar2 = _DAT_1832054b0 ^ 0xff;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R14) + (uVar3 >> 2 & unaff_R14);
  uVar2 = ((uVar3 >> 4) + uVar3 & unaff_RDI) * 0x101010101010101 >> 0x38 ^ uVar2;
  _DAT_183205348 = (_DAT_183205348 ^ uVar2) + 0x12 ^ 0xa5684a95f14078cd;
  _DAT_183205250 = (_DAT_183205250 * -0x29e7274b6e145b51 ^ _DAT_183205348) + uVar2;
  _DAT_183205240 = _DAT_183205250 ^ _DAT_183205348;
  _DAT_1832053d8 = 0x12;
  _DAT_1832053d8 = func_0x000189216e40(_DAT_1832052d0 ^ 0xffe0ff844a0021d4);
  _DAT_183205150 = _DAT_183205150 ^ _DAT_1832053d8 ^ 0x1047 ^ 0x62c1131b60ac2271;
  _DAT_183205168 =
       (_DAT_183205168 * -0x785d8a92f4f5f2ef ^ _DAT_183205150) + (_DAT_1832053d8 ^ 0x1047);
  _DAT_183205190 = _DAT_183205168 ^ _DAT_183205150;
  _DAT_183205368 = 0;
  uVar2 = (_DAT_1832051d8 ^ 0x84222315) + _DAT_183205418 + 0x84222315;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832051d8 ^ 0x84222315;
  uVar3 = ((_DAT_183205418 + _DAT_1832051d8) * 0x2000 | _DAT_183205418 + _DAT_1832051d8 >> 0x33) ^
          _DAT_183205418;
  _DAT_1832051f8 =
       func_0x000189216e40((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1832051d8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183205418 + 0x84222315));
  uVar2 = (_DAT_1832051f8 & 0x1ff) << 0x36 | _DAT_1832051f8 >> 10;
  _DAT_1832054f8 = _DAT_1832052d0 ^ uVar2 ^ 0x30;
  _DAT_183205270 = (_DAT_183205270 ^ uVar2) + 0x30 ^ 0xef66f9e6b8efec1a;
  _DAT_1832051c8 = (_DAT_1832051c8 * 0x154e0567af19f787 ^ _DAT_183205270) + uVar2;
  _DAT_1832053d8 = _DAT_1832051c8 ^ _DAT_183205270;
  _DAT_1832051e0 = 0x30;
  uVar2 = (_DAT_1832052a0 ^ unaff_XMM10_Qa) + _DAT_1832051c8 + 0x84222340;
  uVar3 = (_DAT_1832051c8 ^ unaff_XMM10_Qb) + _DAT_1832052a0 + 0x65;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832052a0 ^ unaff_XMM10_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832051c8 ^ unaff_XMM10_Qb;
  _DAT_1832052d0 =
       func_0x000189216e40((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832052a0 + 0x65) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832051c8 + 0x84222340));
  uVar2 = _DAT_1832052d0 >> 1 | _DAT_1832052d0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_R14) + (uVar2 >> 2 & unaff_R14);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & unaff_RDI) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_1832052d0;
  _DAT_183205410 = _DAT_183205410 ^ uVar2 ^ 0x53da8f03343a1c52;
  _DAT_183205390 = (_DAT_183205390 * -0x706c6f12309a25fb ^ _DAT_183205410) + uVar2;
  _DAT_183205338 = _DAT_183205390 ^ _DAT_183205410;
  _DAT_183205290 = 0;
  _DAT_183205328 = func_0x000189216e40(_DAT_183205490 ^ 0xffdcff7c13001d80);
  uVar2 = (_DAT_183205328 & 0xfffffffffff80000) << 0x29 | _DAT_183205328 >> 0x17;
  _DAT_183205138 = _DAT_183205320 ^ uVar2 ^ 0x30;
  _DAT_1832054a0 = (_DAT_1832054a0 ^ uVar2) + 0x30 ^ 0x1911b49e24111dc3;
  _DAT_183205298 = (_DAT_183205298 * 0x2e31848ff691a379 ^ _DAT_1832054a0) + uVar2;
  _DAT_183205390 = _DAT_183205298 ^ _DAT_1832054a0;
  _DAT_1832052b8 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x98);
  uVar3 = (ulonglong)bVar1;
  uVar2 = (~_DAT_183205468 + 0x31) *
          ((uVar3 ^ 0x84222325 ^ _DAT_1832051b0) +
          (ulonglong)((uint)_DAT_1832051b0 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | _DAT_183205400) + (uVar2 & _DAT_183205400);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183205268 =
       func_0x000189216e40((uVar3 ^ 0x84222315 | uVar2) +
                           (ulonglong)((uint)(uVar3 ^ 0x84222315) & (uint)uVar2));
  uVar2 = (ulonglong)((uint)bVar1 * 0x30 ^ (uint)_DAT_183205268) << 0x23 | _DAT_183205268 >> 0x1d;
  _DAT_183205368 = uVar3 | 0x30;
  _DAT_1832052a8 = (_DAT_1832052a8 ^ uVar2) + _DAT_183205368 ^ 0x18612237751580f0;
  _DAT_1832052b8 = (_DAT_1832052b8 * -0x786f242ed0a4c2e9 ^ _DAT_1832052a8) + uVar2;
  _DAT_1832051e8 = _DAT_1832052b8 ^ _DAT_1832052a8;
  *(char *)(unaff_RBP + -0x51 + *(longlong *)(unaff_RBP + 0x60)) = (char)_DAT_183205368;
  switch(unaff_R12D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x91f070a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001891f1562 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1891f070a(void)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x18) = 0xf;
  (**(code **)(**(longlong **)(unaff_RBP + 0x58) + 0x70))
            (*(longlong **)(unaff_RBP + 0x58),*(undefined8 *)(unaff_RBP + 0x10),unaff_RBP + -0x30);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x91f1514 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001891f1562 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1891f1514(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong lVar1;
  
  FUN_18414b520(unaff_RBP + -0x30,param_2,(unaff_RBP + -0x3b) - param_2);
  lVar1 = unaff_RBP + -0x30;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar1 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x58) + 0x70))
            (*(longlong **)(unaff_RBP + 0x58),*(undefined8 *)(unaff_RBP + 0x28),lVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x91fd0e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1891fd0e2(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x920161c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18920161c(void)

{
  longlong unaff_RBP;
  int unaff_R14D;
  
  *(int *)(unaff_RBP + 0x70) = unaff_R14D + 1;
  *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x10);
  switch(unaff_R14D + 1 < *(int *)(unaff_RBP + 0x10)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9201682 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189201682(void)

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


// ----- block @ rva 0x9201723 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189201723(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x78) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x92019e9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892019e9(void)

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


// ----- block @ rva 0x9201a6f -----

void FUN_189201a6f(void)

{
  return;
}


// ----- block @ rva 0x92193b6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892193b6(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
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


// ----- block @ rva 0x921955f -----

void FUN_18921955f(void)

{
  return;
}


// ----- block @ rva 0x9219ed7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189219ed7(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddfc90();
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


// ----- block @ rva 0x921a10c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1892199ef(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x921a41d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921a41d(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0x921ab02 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1892199ef(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x921b8cf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921b8cf(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0x921bb01 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921bb01(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0x921c98c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921c98c(void)

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


// ----- block @ rva 0x921c9db -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921c9db(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->GetObjectArrayElement /*0x568*/))();
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


// ----- block @ rva 0x921ce8b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18921ce8b(void)

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


// ----- block @ rva 0x921cecc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18921cecc(void)

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


// ----- block @ rva 0x921d23c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921d23c(void)

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


// ----- block @ rva 0x921d28b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921d28b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->GetObjectArrayElement /*0x568*/))();
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(unaff_R13 + JNI->NewString /*0x518*/))();
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


// ----- block @ rva 0x921dddf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921dddf(void)

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


// ----- block @ rva 0x921de33 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18921de33(void)

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


// ----- block @ rva 0x921ded9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921ded9(void)

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


// ----- block @ rva 0x921e2b2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18921e2b2(void)

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


// ----- block @ rva 0x921e4ea -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18921e4ea(void)

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


// ----- block @ rva 0x921e60f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921e60f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_1812b0b88)();
  return;
}


// ----- block @ rva 0x921e754 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18921e754(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x921e897 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18921e897(void)

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


// ----- block @ rva 0x921e972 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921e972(void)

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


// ----- block @ rva 0x921eb63 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921eb63(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b0828)();
  return;
}


// ----- block @ rva 0x921eb98 -----

void FUN_18921eb98(void)

{
  return;
}


// ----- block @ rva 0x921eba6 -----

void FUN_18921eba6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x921ed10 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921ed10(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1812b1368)();
  return;
}


// ----- block @ rva 0x921ef85 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921ef85(void)

{
  FUN_190dd72e0();
  (*_DAT_1812b1968)();
  return;
}


// ----- block @ rva 0x921f58e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921f58e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1812b0d48)();
  return;
}


// ----- block @ rva 0x921fefe -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18921fefe(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1812b1a58)();
  return;
}


// ----- block @ rva 0x92203ea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892203ea(void)

{
  (*_DAT_1812b1a68)();
  return;
}


// ----- block @ rva 0x92204fe -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892204fe(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b1a18)();
  return;
}


// ----- block @ rva 0x92207ab -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892207ab(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_1812b1508)();
  return;
}


// ----- block @ rva 0x9220d59 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189220d59(void)

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


// ----- block @ rva 0x9221389 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189221389(void)

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


// ----- block @ rva 0x92214f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892214f2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b1a08)();
  return;
}


// ----- block @ rva 0x92215c1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892215c1(void)

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


// ----- block @ rva 0x92215ed -----

void FUN_1892215ed(void)

{
  return;
}


// ----- block @ rva 0x9221601 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189221601(void)

{
  (*_DAT_1812b1ae8)();
  return;
}


// ----- block @ rva 0x922160c -----

void FUN_18922160c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9223b45 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189223b45(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9223ce1 -----

void FUN_189223ce1(void)

{
  return;
}


// ----- block @ rva 0x9224d60 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189224d60(void)

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


// ----- block @ rva 0x9224fee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189224fee(void)

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


// ----- block @ rva 0x9225e84 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189225e84(void)

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


// ----- block @ rva 0x9227830 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189227830(void)

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


// ----- block @ rva 0x92280b4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892280b4(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
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


// ----- block @ rva 0x9228218 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1892285fe(void)

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


// ----- block @ rva 0x922831a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922831a(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_R13;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0x922854c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922854c(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_R13;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
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


// ----- block @ rva 0x922c1f3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922c1f3(void)

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


// ----- block @ rva 0x922c22c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922c22c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b3b98)();
  return;
}


// ----- block @ rva 0x922c251 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922c251(void)

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


// ----- block @ rva 0x922c266 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922c266(void)

{
  FUN_190dd72e0();
  (*_DAT_1812b3be8)();
  return;
}


// ----- block @ rva 0x922c2af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922c2af(void)

{
  FUN_190dd9df0();
  (*_DAT_1812b3ba8)();
  return;
}


// ----- block @ rva 0x922c2e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922c2e2(void)

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


// ----- block @ rva 0x922c306 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922c306(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b3b88)();
  return;
}


// ----- block @ rva 0x922c32d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922c32d(void)

{
  (*_DAT_1812b3bc8)();
  return;
}


// ----- block @ rva 0x922c33e -----

void FUN_18922c33e(void)

{
  return;
}


// ----- block @ rva 0x922c346 -----

void FUN_18922c346(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x922c41e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922c41e(void)

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


// ----- block @ rva 0x922c472 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922c472(void)

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


// ----- block @ rva 0x922c561 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922c561(void)

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


// ----- block @ rva 0x922c592 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922c592(void)

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


// ----- block @ rva 0x922c5e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922c5e6(void)

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


// ----- block @ rva 0x922ca3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922ca3c(void)

{
  FUN_190de3220();
  (*_DAT_1812b3eb8)();
  return;
}


// ----- block @ rva 0x922ccd4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922ccd4(void)

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


// ----- block @ rva 0x922cd1a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922cd1a(void)

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


// ----- block @ rva 0x922cfe5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922cfe5(void)

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


// ----- block @ rva 0x922d1a2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922d1a2(void)

{
  FUN_190dd72e0();
  (*_DAT_1812b3d18)();
  return;
}


// ----- block @ rva 0x922d2b1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922d2b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b4168)();
  return;
}


// ----- block @ rva 0x922d2e5 -----

void FUN_18922d2e5(void)

{
  return;
}


// ----- block @ rva 0x922d46c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922d46c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1812b4718)();
  return;
}


// ----- block @ rva 0x922d877 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922d877(void)

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


// ----- block @ rva 0x922d9d4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922d9d4(void)

{
  FUN_190de3220();
  (*_DAT_1812b49e8)();
  return;
}


// ----- block @ rva 0x922dac9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922dac9(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x538))();
  FUN_184117d50();
  (*_DAT_1812b4498)();
  return;
}


// ----- block @ rva 0x922de7d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922de7d(void)

{
  (*_DAT_1812b4fd8)();
  return;
}


// ----- block @ rva 0x922e0e0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922e0e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1812b4448)();
  return;
}


// ----- block @ rva 0x922e212 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922e212(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1812b4648)();
  return;
}


// ----- block @ rva 0x922ef6c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922ef6c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b4428)();
  return;
}


// ----- block @ rva 0x922f25c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922f25c(void)

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


// ----- block @ rva 0x922f406 -----

void FUN_18922f406(void)

{
  return;
}


// ----- block @ rva 0x922f919 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922f919(void)

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


// ----- block @ rva 0x922ff0d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18922ff0d(void)

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


// ----- block @ rva 0x922ff44 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18922ff44(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1812b4a38)();
  return;
}


// ----- block @ rva 0x922ffaa -----

void FUN_18922ffaa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92301e1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189230237 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1892301e1(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x9232c49 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189232c64 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189232c49(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x9236b14 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189236b71 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189236b14(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = in_stack_00000048;
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x923954d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018923959e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18923954d(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x923e1f0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018923f6b1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18923e1f0(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  undefined8 in_stack_00000038;
  int in_stack_00000060;
  
  lVar3 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  cVar1 = *(char *)(lVar3 + in_stack_00000060);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar2 = (int)cVar1 << 0x10;
  uVar5 = (~_DAT_183206418 + 0xc8e17d89) *
          ((_DAT_1832063b0 ^ 0x5bdf8a3b) + (ulonglong)((uint)_DAT_1832063b0 & 0x5bdf8a3b) * 2);
  uVar5 = (uVar5 | _DAT_183206698) + (uVar5 & _DAT_183206698);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183206610 = func_0x0001892510f0((uVar5 | 0x933ef7b3) + (ulonglong)((uint)uVar5 & 0x933ef7b3))
  ;
  uVar5 = (_DAT_183206610 ^ 0xafc377e6324ed4ee) << 0x12 |
          (_DAT_183206610 ^ 0xafc377e6324ed4ee) >> 0x2e;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  _DAT_1832064d0 = (_DAT_1832064d0 ^ uVar5) + 0xdffdfd9e ^ 0xa74936ed4724074b;
  _DAT_183206460 = (_DAT_183206460 * 0x6c607234fdb8312d ^ _DAT_1832064d0) + uVar5;
  _DAT_183206338 = _DAT_183206460 ^ _DAT_1832064d0;
  _DAT_183206300 = 0xdffdfd9e;
  _DAT_1832064e0 = func_0x0001892510f0(_DAT_183206600 + 0x630047e1ff69ff ^ 0x81);
  _DAT_183206380 = (_DAT_183206380 ^ _DAT_183206488) + 0xfcd84e5b ^ 0x7c39637ca7ebd808;
  _DAT_183206348 = (_DAT_183206348 * -0x5062a0db5d9f3bf9 ^ _DAT_183206380) + _DAT_183206488;
  _DAT_183206590 = _DAT_183206348 ^ _DAT_183206380;
  _DAT_1832064a0 = 0xfcd84e5b;
  _DAT_1832066a8 = func_0x0001892510f0(_DAT_1832063a0 ^ 0x3a009e5b00356e);
  _DAT_183206490 = _DAT_183206490 - 0x2a68e948 ^ 0x9782e6885d773b3a;
  _DAT_183206368 = _DAT_1832065d0 * 0x4bbe880ff6ce9f5f;
  _DAT_1832065d0 = _DAT_183206368 ^ _DAT_183206490;
  _DAT_183206630 = 0xd59716b8;
  _DAT_1832065a8 = func_0x0001892510f0(_DAT_183206418 + 0x43ff86d30051ff ^ 0xde);
  _DAT_183206488 = _DAT_183206460 ^ _DAT_1832065a8 ^ 0x100ff0000;
  _DAT_183206468 = (_DAT_183206468 ^ _DAT_1832065a8) + 0x100ff0000 ^ 0x57bdca63d865cf2d;
  _DAT_183206418 = (_DAT_183206418 * 0x2ef5992f1b3fda2b ^ _DAT_183206468) + _DAT_1832065a8;
  _DAT_1832065c8 = _DAT_183206418 ^ _DAT_183206468;
  _DAT_1832065f8 = 0xff0000;
  uVar5 = (~_DAT_1832066d8 + 0xc21ec516) *
          ((_DAT_183206558 ^ 0x84222325) + (ulonglong)((uint)_DAT_183206558 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1832063e0) + (uVar5 & _DAT_1832063e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183206328 = func_0x0001892510f0((uVar5 | 0x463ce630) + (ulonglong)((uint)uVar5 & 0x463ce630))
  ;
  _DAT_183206578 = (_DAT_183206578 ^ _DAT_183206328) - 0xc21ec515 ^ 0x2d67825455ad565e;
  _DAT_1832064c0 = (_DAT_1832064c0 * 0x7a08eaf0ff97aaa1 ^ _DAT_183206578) + _DAT_183206328;
  _DAT_1832066d0 = _DAT_1832064c0 ^ _DAT_183206578;
  _DAT_1832064b0 = 0x3de13aeb;
  _DAT_183206668 = func_0x0001892510f0(_DAT_1832065a0 + 0xa6003dd000beffU ^ 0x2d);
  uVar5 = _DAT_183206668 << 0xe | _DAT_183206668 >> 0x32;
  _DAT_1832064a0 = _DAT_183206408 ^ uVar5 ^ 0xc31dc515;
  _DAT_1832063d8 = (_DAT_1832063d8 ^ uVar5) + 0xc31dc515 ^ 0xa4241fba949339c4;
  _DAT_183206690 = (_DAT_183206690 * 0x3784dff0ec299163 ^ _DAT_1832063d8) + uVar5;
  _DAT_183206310 = _DAT_183206690 ^ _DAT_1832063d8;
  _DAT_183206680 = 0xc31dc515;
  _DAT_183206330 = func_0x0001892510f0(_DAT_183206388 ^ 0x53ffdad6ff3dae);
  _DAT_1832066d8 = _DAT_183206470 ^ _DAT_183206330 ^ 0x100ff0000;
  _DAT_183206540 = (_DAT_183206540 ^ _DAT_183206330) + 0x100ff0000 ^ 0x75df9ad8c92db088;
  _DAT_1832063d8 = (_DAT_1832063d8 * -0x6e9c01d7032c7dd3 ^ _DAT_183206540) + _DAT_183206330;
  _DAT_183206540 = _DAT_1832063d8 ^ _DAT_183206540;
  _DAT_1832064e8 = 0xff0000;
  uVar5 = (_DAT_1812b7c40 ^ 0xff0000) + _DAT_183206438 + 0x84222325;
  uVar4 = (_DAT_183206438 ^ _UNK_1812b7c48) + 0xdddd8120;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1812b7c40 ^ 0xff0000;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183206438 ^ _UNK_1812b7c48;
  _DAT_1832066c8 =
       func_0x0001892510f0((uVar4 << 0x1d | uVar4 >> 0x23) - 0xdddd8120 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183206438 + 0x84222325));
  uVar5 = _DAT_1832066c8 << 2 | _DAT_1832066c8 >> 0x3e;
  _DAT_1832063f8 = (_DAT_1832063f8 ^ uVar5) - 0xdcde8120 ^ 0x55344443113fb74e;
  _DAT_183206680 = (_DAT_183206680 * 0x427425b2ad9fc547 ^ _DAT_1832063f8) + uVar5;
  _DAT_183206608 = _DAT_183206680 ^ _DAT_1832063f8;
  _DAT_183206630 = 0x23217ee0;
  uVar5 = (_DAT_1832065d8 ^ _DAT_1812b7c50) + _DAT_183206658 + 0x84dd2325;
  uVar4 = (_DAT_183206658 ^ _UNK_1812b7c58) + _DAT_1832065d8 + 0xdcde8120;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832065d8 ^ _DAT_1812b7c50;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183206658 ^ _UNK_1812b7c58;
  _DAT_1832065a8 =
       func_0x0001892510f0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832065d8 + 0xdcde8120) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183206658 + 0x84dd2325));
  uVar5 = (ulonglong)(~(((uint)_DAT_1832065a8 ^ 0x9ee00000) * 2) >> 1 & 0xff0000);
  _DAT_1832065d0 = _DAT_183206668 ^ uVar5 ^ 0xdddd8120;
  _DAT_183206600 = (_DAT_183206600 ^ uVar5) + 0xdddd8120 ^ 0xad1909cbfe83b0af;
  _DAT_183206440 = (_DAT_183206440 * -0x6db8769457d5cf27 ^ _DAT_183206600) + uVar5;
  _DAT_1832064a0 = _DAT_183206440 ^ _DAT_183206600;
  _DAT_1832063d8 = 0xdddd8120;
  _DAT_183206488 = func_0x0001892510f0(_DAT_183206418 ^ 0xc400159cff35fd);
  uVar5 = _DAT_183206488 << 0x1a | (_DAT_183206488 & 0x7fffffffffffffff) >> 0x26;
  _DAT_183206350 = _DAT_1832063a0 ^ uVar5 ^ 0x100ff0000;
  _DAT_1832063a8 = (_DAT_1832063a8 ^ uVar5) + 0x100ff0000 ^ 0xbb7decf254e0a0e;
  _DAT_183206648 = (_DAT_183206648 * 0x478e1a930efb1325 ^ _DAT_1832063a8) + uVar5;
  _DAT_1832065a8 = _DAT_183206648 ^ _DAT_1832063a8;
  _DAT_1832065b0 = 0xff0000;
  uVar5 = (_DAT_1832066e8 ^ _DAT_1812b7c60) + _DAT_183206410 + 0x5bdfdebb;
  uVar4 = (_DAT_183206410 ^ _UNK_1812b7c68) + _DAT_1832066e8 + 0xfcd84e5b;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832066e8 ^ _DAT_1812b7c60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183206410 ^ _UNK_1812b7c68;
  _DAT_1832065c8 =
       func_0x0001892510f0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832066e8 + 0xfcd84e5b) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183206410 + 0x5bdfdebb));
  uVar5 = (_DAT_1832065c8 ^ 0xdd3b488486000000) & 0xfffffffffe000000;
  _DAT_183206570 = _DAT_183206698 ^ uVar5 ^ 0x1dcd64bf9;
  _DAT_1832065e8 = (_DAT_1832065e8 ^ uVar5) + 0x1dcd64bf9 ^ 0x7d080fabee2c4db8;
  _DAT_1832063a8 = (_DAT_1832063a8 * -0x7e0c31221e8e6cff ^ _DAT_1832065e8) + uVar5;
  _DAT_183206368 = _DAT_1832063a8 ^ _DAT_1832065e8;
  _DAT_183206630 = 0xdcd64bf9;
  uVar5 = (~_DAT_1832063f8 + 0xfcd84e5c) *
          ((_DAT_1832064e8 ^ 0x5bdfdebb) + (ulonglong)((uint)_DAT_1832064e8 & 0x5bdfdebb) * 2);
  uVar5 = (uVar5 | _DAT_183206420) + (uVar5 & _DAT_183206420);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183206598 = func_0x0001892510f0((uVar5 | 0xa70790e0) + (ulonglong)((uint)uVar5 & 0xa70790e0))
  ;
  uVar5 = (_DAT_183206598 ^ 0xdffdfd9e) << 0x26 | (_DAT_183206598 ^ 0xdffdfd9e) >> 0x1a;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  _DAT_183206388 = (_DAT_183206388 ^ uVar5) + 0x2325b3c5 ^ 0x93f9bec7f9f467cf;
  _DAT_183206578 = (_DAT_183206578 * -0x7753a6a9494e586d ^ _DAT_183206388) + uVar5;
  _DAT_183206658 = _DAT_183206578 ^ _DAT_183206388;
  _DAT_1832063a8 = 0x2325b3c5;
  uVar5 = (~_DAT_1832064e0 + 0xfcd84e5c) *
          ((_DAT_183206390 ^ 0x5bdfdebb) + (ulonglong)((uint)_DAT_183206390 & 0x5bdfdebb) * 2);
  uVar5 = (uVar5 | _DAT_1832064b0) + (uVar5 & _DAT_1832064b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183206490 = func_0x0001892510f0((uVar5 | 0xa70790e0) + (ulonglong)((uint)uVar5 & 0xa70790e0))
  ;
  uVar5 = (_DAT_183206490 << 0xb | _DAT_183206490 >> 0x35) ^ 0xdffdfd9e;
  _DAT_183206428 = (_DAT_183206428 ^ uVar5) + 0xdcd84c1a ^ 0xfdb9dbcc65edfc95;
  _DAT_1832065c0 = (_DAT_1832065c0 * 0x64f6d35450169dd3 ^ _DAT_183206428) + uVar5;
  _DAT_183206590 = _DAT_1832065c0 ^ _DAT_183206428;
  _DAT_1832063b0 = 0xdcd84c1a;
  uVar5 = (~_DAT_1832065c0 + 0xb9b09835) *
          ((_DAT_183206688 ^ 0xa70790e0) + (ulonglong)((uint)_DAT_183206688 & 0xa70790e0) * 2);
  uVar5 = (uVar5 | _DAT_183206540) + (uVar5 & _DAT_183206540);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832066a0 = func_0x0001892510f0((uVar5 | 0x1eb708d4) + (ulonglong)((uint)uVar5 & 0x1eb708d4))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_1832066a0 & 0x2325b3c5);
  _DAT_183206340 = _DAT_183206370 ^ uVar5 ^ 0xdcd64bf9;
  _DAT_1832066d8 = (_DAT_1832066d8 ^ uVar5) + 0xdcd64bf9 ^ 0x777833faabef6ea3;
  _DAT_1832066e8 = (_DAT_1832066e8 * -0x8d5fcbd4adc7b83 ^ _DAT_1832066d8) + uVar5;
  _DAT_183206608 = _DAT_1832066e8 ^ _DAT_1832066d8;
  _DAT_1832063b8 = 0xdcd64bf9;
  uVar5 = (_DAT_1832065f0 ^ _DAT_1812b7c70) + _DAT_183206620 + 0x58f468dc;
  uVar4 = (_DAT_183206620 ^ _UNK_1812b7c78) + _DAT_1832065f0 + 0xdcd64bf9;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832065f0 ^ _DAT_1812b7c70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183206620 ^ _UNK_1812b7c78;
  _DAT_183206640 =
       func_0x0001892510f0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832065f0 + 0xdcd64bf9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183206620 + 0x58f468dc));
  uVar5 = (ulonglong)(~(uint)_DAT_183206640 & 0xdcd64bf9);
  _DAT_183206448 = uVar5 * -0x51d1b93480000000 | uVar5 * 0x11bfd66d5c5c8d97 >> 0x21;
  _DAT_183206600 = _DAT_183206600 ^ _DAT_183206448 ^ 0xb3471a91b929464b;
  _DAT_1832066f0 = (_DAT_1832066f0 * 0x7ad4b0bf3d467073 ^ _DAT_183206600) + _DAT_183206448;
  _DAT_183206308 = _DAT_1832066f0 ^ _DAT_183206600;
  _DAT_1832066b0 = 0;
  uVar5 = (_DAT_1832064f8 ^ 0x84dd2325) + _DAT_1832065b0 + 0x84dd2325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832064f8 ^ 0x84dd2325;
  uVar4 = ((_DAT_1832065b0 + _DAT_1832064f8) * 0x2000 | _DAT_1832065b0 + _DAT_1832064f8 >> 0x33) ^
          _DAT_1832065b0;
  _DAT_183206610 =
       func_0x0001892510f0((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1832064f8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832065b0 + 0x84dd2325));
  uVar5 = _DAT_183206610 & 0xfffffffffffffff0;
  _DAT_1832064b0 = _DAT_183206638 ^ uVar5 ^ 0xff0000;
  _DAT_183206438 = (_DAT_183206438 ^ uVar5) + 0xff0000 ^ 0xe6c47f4dd3bf44fa;
  _DAT_183206480 = (_DAT_183206480 * 0x35fc9759177e909d ^ _DAT_183206438) + uVar5;
  _DAT_1832065e8 = _DAT_183206480 ^ _DAT_183206438;
  _DAT_183206340 = 0xff0000;
  _DAT_1832064b0 = func_0x0001892510f0(_DAT_183206538 ^ 0x1f009c3bffdf57);
  uVar5 = (ulonglong)(~(uint)_DAT_1832064b0 & 0xdffdfd9e);
  _DAT_1832065c8 = (_DAT_1832065c8 ^ uVar5) + 0x20020261 ^ 0xdc3653addc46d3de;
  _DAT_183206570 = (_DAT_183206570 * -0x473441bb9daed159 ^ _DAT_1832065c8) + uVar5;
  _DAT_1832063c8 = _DAT_183206570 ^ _DAT_1832065c8;
  _DAT_1832066a8 = 0x20020261;
  uVar5 = (_DAT_183206428 ^ _DAT_1812b7c80) + _DAT_1832065e0 + 0x5bdfdebb;
  uVar4 = (_DAT_1832065e0 ^ _UNK_1812b7c88) + _DAT_183206428 + 0x20020261;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183206428 ^ _DAT_1812b7c80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832065e0 ^ _UNK_1812b7c88;
  _DAT_183206510 =
       func_0x0001892510f0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183206428 + 0x20020261) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832065e0 + 0x5bdfdebb));
  uVar5 = _DAT_183206510 * 0x43b7c5b129012bb3 & 0x3ffffffffff;
  _DAT_1832065f0 = _DAT_1832065f0 ^ uVar5 ^ 0xa442564e4b1a95b0;
  _DAT_183206608 = (_DAT_183206608 * 0x524af91f82929fdd ^ _DAT_1832065f0) + uVar5;
  _DAT_183206578 = _DAT_183206608 ^ _DAT_1832065f0;
  _DAT_183206628 = 0;
  _DAT_1832065f0 = func_0x0001892510f0(_DAT_1832066e8 ^ 0x1f007bdcffdd08);
  uVar5 = (_DAT_1832065f0 << 0x21 | _DAT_1832065f0 >> 0x1f) ^ 0xdffda91e;
  _DAT_183206348 = _DAT_183206348 ^ uVar5 ^ 0xc73711128738e5f6;
  _DAT_183206640 = (_DAT_183206640 * 0x496a2eb7f3bf89b3 ^ _DAT_183206348) + uVar5;
  _DAT_183206568 = _DAT_183206640 ^ _DAT_183206348;
  _DAT_183206518 = 0;
  uVar5 = (_DAT_183206520 ^ 0x84dd2325) + _DAT_183206530 + 0x84dd2325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183206520 ^ 0x84dd2325;
  uVar4 = ((_DAT_183206530 + _DAT_183206520) * 0x2000 | _DAT_183206530 + _DAT_183206520 >> 0x33) ^
          _DAT_183206530;
  _DAT_183206630 =
       func_0x0001892510f0((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_183206520 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183206530 + 0x84dd2325));
  uVar5 = _DAT_183206630 ^ 0xff0000;
  _DAT_1832064d0 = _DAT_183206348 ^ uVar5 ^ 0xff0000;
  _DAT_183206570 = (_DAT_183206570 ^ uVar5) + 0xff0000 ^ 0xbc1acc1b077ae03f;
  _DAT_183206638 = (_DAT_183206480 * 0x67ff39463fa1b2d3 ^ _DAT_183206570) + uVar5 ^ _DAT_183206570;
  _DAT_1832064b8 = _DAT_1832064b8 ^ 0xff0000;
  _DAT_183206480 = 0xff0000;
  uVar5 = (ulonglong)uVar2 ^ 0x84222325;
  uVar4 = uVar5 ^ _DAT_1832063e8;
  lVar3 = uVar5 + _DAT_183206508;
  uVar5 = uVar4 + lVar3;
  uVar6 = (_DAT_183206508 ^ 0xff0000) + _DAT_1832063e8 + 0xff0000;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183206508 ^ 0xff0000;
  _DAT_183206308 =
       func_0x0001892510f0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832063e8 + 0xff0000) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar5 = ~_DAT_183206308 & (ulonglong)uVar2;
  _DAT_183206400 = (ulonglong)(uVar2 & 0xff0000);
  _DAT_183206420 = (_DAT_183206420 ^ uVar5) + _DAT_183206400 ^ 0xf5dd84e8d4d5b852;
  _DAT_1832063f8 = (_DAT_1832063f8 * 0x6e7c89e0e63314e1 ^ _DAT_183206420) + uVar5;
  _DAT_183206690 = _DAT_1832063f8 ^ _DAT_183206420;
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x9249641 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189249641(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
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


// ----- block @ rva 0x92496ef -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1892496ef(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9250295 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189250295(void)

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


// ----- block @ rva 0x9250c41 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189250c41(void)

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


// ----- block @ rva 0x9250cbf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189250cbf(void)

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


// ----- block @ rva 0x9250f12 -----

void FUN_189250f12(void)

{
  return;
}


// ----- block @ rva 0x9250f7e -----

void FUN_189250f7e(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x92511a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892511a3(void)

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


// ----- block @ rva 0x92511dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892511dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b83a8)();
  return;
}


// ----- block @ rva 0x9251201 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189251201(void)

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


// ----- block @ rva 0x9251216 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189251216(void)

{
  FUN_190dd72e0();
  (*_DAT_1812b8418)();
  return;
}


// ----- block @ rva 0x925125f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18925125f(void)

{
  FUN_190dd9df0();
  (*_DAT_1812b83b8)();
  return;
}


// ----- block @ rva 0x9251292 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189251292(void)

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


// ----- block @ rva 0x92512b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892512b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b8398)();
  return;
}


// ----- block @ rva 0x92512dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892512dd(void)

{
  (*_DAT_1812b8408)();
  return;
}


// ----- block @ rva 0x92512ee -----

void FUN_1892512ee(void)

{
  return;
}


// ----- block @ rva 0x92512f6 -----

void FUN_1892512f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92513a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892513a3(void)

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


// ----- block @ rva 0x92513dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892513dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b84e8)();
  return;
}


// ----- block @ rva 0x9251416 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189251416(void)

{
  FUN_190dd72e0();
  (*_DAT_1812b8488)();
  return;
}


// ----- block @ rva 0x925143e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18925143e(void)

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


// ----- block @ rva 0x925145f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18925145f(void)

{
  FUN_190dd9df0();
  (*_DAT_1812b84d8)();
  return;
}


// ----- block @ rva 0x9251492 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189251492(void)

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


// ----- block @ rva 0x92514dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892514dd(void)

{
  (*_DAT_1812b84b8)();
  return;
}


// ----- block @ rva 0x92514ee -----

void FUN_1892514ee(void)

{
  return;
}


// ----- block @ rva 0x92514f6 -----

void FUN_1892514f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92515a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892515a3(void)

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


// ----- block @ rva 0x92515dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892515dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b85b8)();
  return;
}


// ----- block @ rva 0x9251601 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189251601(void)

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


// ----- block @ rva 0x9251616 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189251616(void)

{
  FUN_190dd72e0();
  (*_DAT_1812b8558)();
  return;
}


// ----- block @ rva 0x925163e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18925163e(void)

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


// ----- block @ rva 0x925165f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18925165f(void)

{
  FUN_190dd9df0();
  (*_DAT_1812b8598)();
  return;
}


// ----- block @ rva 0x9251692 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189251692(void)

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


// ----- block @ rva 0x92516b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892516b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b8578)();
  return;
}


// ----- block @ rva 0x92516dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892516dd(void)

{
  (*_DAT_1812b85c8)();
  return;
}


// ----- block @ rva 0x92516ee -----

void FUN_1892516ee(void)

{
  return;
}


// ----- block @ rva 0x92516f6 -----

void FUN_1892516f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x92517a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892517a3(void)

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


// ----- block @ rva 0x92517dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892517dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b86a8)();
  return;
}


// ----- block @ rva 0x9251816 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189251816(void)

{
  FUN_190dd72e0();
  (*_DAT_1812b86b8)();
  return;
}


// ----- block @ rva 0x925185f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18925185f(void)

{
  FUN_190dd9df0();
  (*_DAT_1812b8698)();
  return;
}


// ----- block @ rva 0x9251892 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189251892(void)

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


// ----- block @ rva 0x92518b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892518b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1812b8688)();
  return;
}


// ----- block @ rva 0x92518dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1892518dd(void)

{
  (*_DAT_1812b8648)();
  return;
}


// ----- block @ rva 0x92518ee -----

void FUN_1892518ee(void)

{
  return;
}


// ----- block @ rva 0x92518f6 -----

void FUN_1892518f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

