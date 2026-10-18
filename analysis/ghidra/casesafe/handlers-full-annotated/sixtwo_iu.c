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
  pcVar1 = *(code **)(*param_1 + 0x720);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x7c06,0x159);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001891aae7e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181297670 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



