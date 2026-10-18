// ===== STITCHED CORPUS: sixtwo.rf =====
// handlers: 10  continuation blocks: 103  unresolved table targets: 0
// tables not in tables.json: ['0x1098d8', '0x145388', '0x170c0', '0x19c088', '0x2e78c0', '0x2e7de8', '0x2e7df8', '0x2e7e08', '0x2e7e18', '0x2e7e28', '0x2e7e38', '0x2e83f8', '0x2e8408', '0x2e8418', '0x2e8428', '0x2e8458', '0x2e8468', '0x2eef70', '0x2eef78', '0x2eef80']

// ===== Lsixtwo/rf; _1efc495649140682cc8d6bb31bc652a4 ()V (handler @ image 184b3d610, runtime 6fffec74d610) =====

void FUN_184b3d610(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184b3d71c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802f0798 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rf; dft ()Ljava/lang/String; (handler @ image 184af7930, runtime 6fffec707930) =====

void FUN_184af7930(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000184af7950 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e3c60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/rf; dfu ()Lsixtwo/rb; (handler @ image 184af7b30, runtime 6fffec707b30) =====

void FUN_184af7b30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000184af7b50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e3d40 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/rf; dfv ()[Lsixtwo/rf; (handler @ image 184af7d30, runtime 6fffec707d30) =====

void FUN_184af7d30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x128c7,0x2f4)
      /* POOL[0x128c7,0x2f4]: Double | kySvO | [Lsixtwo/rf; | OIxOu | sixtwo/rf | ElhZz | SWful | deV | akhNQ | sxweB | LbAPM | aKX | (Lnet/minecraft/class_465;Lnet/minecraft/class_1735;)Z | diT | (Lnet/minecraft/class_304;)V | aVMzs | RazEo | EsjGg | aLf | tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184af7e09 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e3e50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rf; dfw ([B)Ljava/lang/String; (handler @ image 184b03eb0, runtime 6fffec713eb0) =====

void FUN_184b03eb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000184b03f50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e75f0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/rf; dfx (IJ)I (handler @ image 184b2dec0, runtime 6fffec73dec0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b2dec0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar11;
  undefined1 auVar10 [16];
  ulonglong uVar12;
  
  uVar6 = (~uRam00000001830915f8 + 0x91beeaf0ca699726) *
          ((uRam00000001830916c0 ^ 0x933e2afa96a7f9b3) +
          (uRam00000001830916c0 & 0x133e2afa96a7f9b3) * 2);
  uVar6 = (uVar6 | uRam0000000183091138) + (uVar6 & uRam0000000183091138);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183091668 =
       func_0x000184b39860((uVar6 | 0x280c00a5cce6e96) + (uVar6 & 0x280c00a5cce6e96));
  uVar6 = (uRam0000000183091668 ^ 0xcf22f712a4cd11ae) << 0x33 |
          (uRam0000000183091668 ^ 0xcf22f712a4cd11ae) >> 0xd;
  uRam00000001830915c0 = (uRam00000001830915c0 ^ uVar6) + 0x280c00ad8ec4db3 ^ 0xa38576a97ba8f712;
  uRam00000001830913e8 = (uRam00000001830913e8 * 0x1556aae1a49a2533 ^ uRam00000001830915c0) + uVar6;
  uRam0000000183091168 = uRam00000001830913e8 ^ uRam00000001830915c0;
  uRam0000000183091538 = 0x280c00ad8ec4db3;
  uVar6 = (uRam0000000183091118 ^ _UNK_1802eef70) + uRam0000000183091648 + 0x84222325;
  uVar11 = (uRam0000000183091648 ^ _UNK_1802eef78) + uRam0000000183091118 + 0x17d39c34ffc87f90;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183091118 ^ _UNK_1802eef70;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183091648 ^ _UNK_1802eef78;
  uRam0000000183091600 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam0000000183091118 + 0x17d39c34ffc87f90) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183091648 + 0x84222325));
  uVar6 = uRam0000000183091600 << 0x30 | uRam0000000183091600 >> 0x10;
  uVar11 = uVar6 >> 1 | uVar6;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar6;
  uRam0000000183091508 = (uRam0000000183091508 ^ uVar6) + 0xe82c63cb00378070 ^ 0x7b21335f25bbc39e;
  uRam00000001830914c8 = (uRam00000001830914c8 * 0x1e32da5627721677 ^ uRam0000000183091508) + uVar6;
  uRam00000001830915b8 = uRam00000001830914c8 ^ uRam0000000183091508;
  uRam0000000183091420 = 0xe82c63cb00378070;
  uVar6 = (~uRam00000001830916d8 + 0x17d39c34ffc87f91) *
          ((uRam0000000183091390 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183091390 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam00000001830913b0) + (uVar6 & uRam00000001830913b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183091530 =
       func_0x000184b39860((uVar6 | 0x17d39c347bea234a) + (uVar6 & 0x17d39c347bea234a));
  uVar6 = uRam0000000183091530 << 0x2e | uRam0000000183091530 >> 0x12;
  uVar6 = (uVar6 ^ 0x7fff) << 0x1f | uVar6 >> 0x21;
  uRam0000000183091338 = uRam0000000183091298 ^ uVar6 ^ 0x17d39c34ffc8ff8f;
  uRam0000000183091438 = (uRam00000001830912d0 ^ uVar6) + 0x17d39c34ffc8ff8f;
  uRam00000001830912d0 = uRam0000000183091438 ^ 0xd5e2b30278aee0c8;
  uRam00000001830912b0 = (uRam00000001830912b0 * 0x3540e94aabaa57bb ^ uRam00000001830912d0) + uVar6;
  uRam0000000183091610 = uRam00000001830912b0 ^ uRam00000001830912d0;
  uRam0000000183091438 = uRam0000000183091438 ^ 0xc2312f3687661f47;
  uRam00000001830914e8 = 0x17d39c34ffc8ff8f;
  uRam0000000183091298 = func_0x000184b39860(uRam0000000183091378 + 0xfd3b9cc4c9b753fa ^ 0x5b);
  uVar6 = ~uRam0000000183091298;
  uVar11 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar6;
  uRam00000001830912f0 = uRam0000000183091610 ^ uVar6 ^ 0x7fff;
  uRam00000001830913c8 = (uRam00000001830913c8 ^ uVar6) + 0x7fff ^ 0x62a1ff61a29c4b29;
  uRam00000001830912b8 = (uRam00000001830912b8 * 0x3aacc8d371760f7 ^ uRam00000001830913c8) + uVar6;
  uRam00000001830915e0 = uRam00000001830912b8 ^ uRam00000001830913c8;
  uRam0000000183091188 = 0x7fff;
  uRam0000000183091428 = func_0x000184b39860(uRam00000001830914b0 + 0x5932a194c2e67091 ^ 0xfd);
  uRam0000000183091208 = uRam00000001830913d8 ^ uRam0000000183091428 ^ 0xb6a6eaa710930e17;
  uRam0000000183091130 =
       (uRam0000000183091130 ^ uRam0000000183091428) + 0xb6a6eaa710930e17 ^ 0x873c8172890a4018;
  uRam00000001830915a8 =
       (uRam00000001830915a8 * 0xe552fb98b995e13 ^ uRam0000000183091130) + uRam0000000183091428;
  uRam0000000183091610 = uRam00000001830915a8 ^ uRam0000000183091130;
  uRam0000000183091100 = 0xb6a6eaa710930e17;
  uRam0000000183091648 = func_0x000184b39860(uRam0000000183091618 ^ 0x32d447053a1dc334);
  uVar6 = uRam0000000183091648 - (uRam0000000183091648 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183091648;
  uRam0000000183091200 = uRam00000001830911b8 ^ uVar6 ^ 0x7fff;
  uRam00000001830911b0 = (uRam00000001830911b0 ^ uVar6) + 0x7fff ^ 0x8e273d45365440ba;
  uRam00000001830916a0 = (uRam00000001830916a0 * -0x186e8ce3654bf889 ^ uRam00000001830911b0) + uVar6
  ;
  uRam0000000183091248 = uRam00000001830916a0 ^ uRam00000001830911b0;
  uRam00000001830914a0 = 0x7fff;
  uVar6 = (~uRam00000001830912b8 + 0x4a1a6ddaf2262609) *
          ((uRam0000000183091140 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183091140 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam00000001830912f0) + (uVar6 & uRam00000001830912f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183091298 =
       func_0x000184b39860((uVar6 | 0x4a1a6dda7604052d) + (uVar6 & 0x4a1a6dda7604052d));
  uRam0000000183091318 =
       (uRam0000000183091318 ^ uRam0000000183091298 & 0xfffffffff0000000) + 0xb5e592250dd9d9f8 ^
       0x815a94d1a78ca453;
  uRam0000000183091410 =
       (uRam0000000183091410 * 0x2e3e08d72cda2a15 ^ uRam0000000183091318) +
       (uRam0000000183091298 & 0xfffffffff0000000);
  uRam0000000183091628 = uRam0000000183091410 ^ uRam0000000183091318;
  uRam0000000183091438 = 0xb5e592250dd9d9f8;
  uVar6 = (~uRam0000000183091170 + 0x280c00ad8ec4db4) *
          ((uRam00000001830914d8 ^ 0xf4777fbb33ddfc52) +
          (uRam00000001830914d8 & 0x74777fbb33ddfc52) * 2);
  uVar6 = (uVar6 | uRam00000001830912c0) + (uVar6 & uRam00000001830912c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183091640 =
       func_0x000184b39860((uVar6 | 0xf6f7bfb1eb31b1e1) + (uVar6 & 0xf6f7bfb1eb31b1e1));
  uVar6 = uRam0000000183091640 ^ 0xc4df85a4df384686;
  uRam00000001830912c0 = uRam00000001830911b0 ^ uVar6 ^ 0xf6f83fc690ec2d2a;
  uRam0000000183091270 = (uRam0000000183091270 ^ uVar6) + 0xf6f83fc690ec2d2a ^ 0x2aa85e10b44a5ce8;
  uRam0000000183091428 = (uRam0000000183091428 * 0x68105a3dfa51d6fd ^ uRam0000000183091270) + uVar6;
  uRam0000000183091548 = uRam0000000183091428 ^ uRam0000000183091270;
  uRam0000000183091230 = 0xf6f83fc690ec2d2a;
  uVar6 = (uRam00000001830913a8 ^ _UNK_1802eef80) + uRam0000000183091220 + 0xf4777fbb33ddfc52;
  uVar11 = (uRam0000000183091220 ^ _UNK_1802eef88) + uRam00000001830913a8 + 0x280c00ad8ec4db3;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830913a8 ^ _UNK_1802eef80;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183091220 ^ _UNK_1802eef88;
  uRam0000000183091670 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam00000001830913a8 + 0x280c00ad8ec4db3) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183091220 + 0xf4777fbb33ddfc52));
  uRam00000001830913f0 =
       (uRam00000001830913f0 ^ uRam0000000183091670 ^ 0x280c00ad8ec4db3) + 0xf6f7bfb16f1392c4 ^
       0x5719c415a93c7e42;
  uRam0000000183091658 =
       (uRam0000000183091658 * 0x1eaab4701f57d48b ^ uRam00000001830913f0) +
       (uRam0000000183091670 ^ 0x280c00ad8ec4db3);
  uRam00000001830914e0 = uRam0000000183091658 ^ uRam00000001830913f0;
  uRam0000000183091230 = 0xf6f7bfb16f1392c4;
  uVar6 = (~uRam0000000183091588 + 0x280c00ad8ec4db4) *
          ((uRam00000001830915f8 ^ 0xf4777fbb33ddfc52) +
          (uRam00000001830915f8 & 0x74777fbb33ddfc52) * 2);
  uVar6 = (uVar6 | uRam00000001830915d0) + (uVar6 & uRam00000001830915d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183091678 =
       func_0x000184b39860((uVar6 | 0xf6f7bfb1eb31b1e1) + (uVar6 & 0xf6f7bfb1eb31b1e1));
  uVar6 = (uRam0000000183091678 ^ 0xf6f7ffbbffffdff7) << 0x17 |
          (uRam0000000183091678 ^ 0xf6f7ffbbffffdff7) >> 0x29;
  uRam0000000183091370 = (uRam0000000183091370 ^ uVar6) + 0x400a90ec4d33 ^ 0x7e902ad6879bca70;
  uRam0000000183091188 = (uRam0000000183091188 * -0x764f154841eecb0d ^ uRam0000000183091370) + uVar6
  ;
  uRam0000000183091628 = uRam0000000183091188 ^ uRam0000000183091370;
  uRam0000000183091338 = 0x400a90ec4d33;
  uRam00000001830911a0 = func_0x000184b39860(uRam00000001830912a8 + 0x5bd6f1ca80cfa8d1 ^ 0x47);
  uVar6 = (uRam00000001830911a0 ^ 0xf30b660721766218) >> 1 | uRam00000001830911a0 << 0x3f;
  uRam0000000183091658 = uRam0000000183091240 ^ uVar6 ^ 0xf6f83fc690ec2d2a;
  uRam00000001830915e8 = (uRam00000001830915e8 ^ uVar6) + 0xf6f83fc690ec2d2a ^ 0xb2f80707f865c95a;
  uRam0000000183091478 = (uRam0000000183091478 * -0x5ad57744442a33b1 ^ uRam00000001830915e8) + uVar6
  ;
  uRam0000000183091388 = uRam0000000183091478 ^ uRam00000001830915e8;
  uRam0000000183091608 = 0xf6f83fc690ec2d2a;
  uVar6 = (uRam0000000183091510 ^ _UNK_1802eef90) + uRam0000000183091328 + 0xf6f83fc614ce0e0f;
  uVar11 = (uRam0000000183091328 ^ _UNK_1802eef98) + uRam0000000183091510 + 0xf6f83fc690ec2d2a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183091510 ^ _UNK_1802eef90;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183091328 ^ _UNK_1802eef98;
  uRam00000001830912f0 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam0000000183091510 + 0xf6f83fc690ec2d2a) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183091328 + 0xf6f83fc614ce0e0f));
  uRam00000001830912d8 = uRam00000001830912f0 * 0x50be0993607ed823;
  uRam00000001830915c0 = uRam00000001830915c0 ^ uRam00000001830912d8 ^ 0x51018bd875f42f2c;
  uRam0000000183091298 =
       (uRam0000000183091298 * 0x537ae69ceda1b12f ^ uRam00000001830915c0) + uRam00000001830912d8;
  uRam0000000183091598 = uRam0000000183091298 ^ uRam00000001830915c0;
  uRam00000001830912b8 = 0;
  uRam00000001830916d0 = func_0x000184b39860(uRam00000001830915e8 ^ 0x340084a6001d0d);
  uVar6 = uRam00000001830916d0 << 0x3d | uRam00000001830916d0 >> 3;
  uRam0000000183091590 = uRam0000000183091628 ^ uVar6 ^ 0x7fff;
  uRam00000001830912b0 = (uRam00000001830912b0 ^ uVar6) + 0x7fff ^ 0x1661e00b8ed18b99;
  uRam0000000183091200 = (uRam0000000183091200 * 0x73dcfab23e3b2557 ^ uRam00000001830912b0) + uVar6;
  uRam0000000183091408 = uRam0000000183091200 ^ uRam00000001830912b0;
  uRam0000000183091190 = 0x7fff;
  uVar6 = (uRam00000001830911c8 ^ _UNK_1802eefa0) + uRam00000001830915a0 + 0xf4777fbb33ddfc52;
  uVar11 = (uRam00000001830915a0 ^ _UNK_1802eefa8) + (uRam00000001830911c8 - 1);
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830911c8 ^ _UNK_1802eefa0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001830915a0 ^ _UNK_1802eefa8;
  uRam00000001830916a0 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam00000001830911c8 - 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830915a0 + 0xf4777fbb33ddfc52));
  uRam0000000183091628 =
       (uRam0000000183091628 ^ uRam00000001830915d0) + 0xb88804448002088 ^ 0x40452aa49cdba8d1;
  uRam0000000183091118 =
       (uRam0000000183091118 * 0x50bd94573aa2eeb ^ uRam0000000183091628) + uRam00000001830915d0;
  uRam0000000183091430 = uRam0000000183091118 ^ uRam0000000183091628;
  uRam0000000183091390 = 0xb88804448002088;
  uRam0000000183091578 = func_0x000184b39860(uRam0000000183091450 ^ 0xbed328a55a665c41);
  uRam00000001830911a0 = uRam00000001830911a0 ^ uRam0000000183091578 ^ 0x3a087bae16c54773;
  uRam00000001830912b8 =
       (uRam00000001830912b8 * 0x317fb1c98b0e7087 ^ uRam00000001830911a0) + uRam0000000183091578;
  uRam00000001830912e8 = uRam00000001830912b8 ^ uRam00000001830911a0;
  uRam00000001830914b0 = 0;
  uVar6 = (uRam0000000183091160 ^ 0x84225cda) + uRam0000000183091178 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183091160 ^ 0x84225cda;
  uVar11 = ((uRam0000000183091178 + uRam0000000183091160) * 0x2000 |
           uRam0000000183091178 + uRam0000000183091160 >> 0x33) ^ uRam0000000183091178;
  uRam00000001830914b0 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - uRam0000000183091160 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183091178 + 0x84225cda));
  uVar6 = (uRam00000001830914b0 ^ 0x7fff) & 0x7fffffffffffffff ^ 0x7fff;
  uRam00000001830912a8 = uRam00000001830914d8 ^ uVar6 ^ 0x7fff;
  uRam0000000183091408 = (uRam0000000183091408 ^ uVar6) + 0x7fff ^ 0xa0d4db3a48169b9e;
  uRam00000001830914a8 = (uRam00000001830914a8 * 0x6a89e6318c46d343 ^ uRam0000000183091408) + uVar6;
  uRam00000001830914d0 = uRam00000001830914a8 ^ uRam0000000183091408;
  uRam0000000183091300 = 0x7fff;
  uRam0000000183091260 = func_0x000184b39860(uRam0000000183091478 + 0x1eff83e2ffddff ^ 0x46);
  uVar6 = uRam0000000183091260 >> 1 | uRam0000000183091260;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = uRam0000000183091260 ^ 0xf4751030b3e69b54 ^
          (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40;
  uRam00000001830915b8 = uRam00000001830915b8 ^ uVar6 ^ 0x2ee29d2662191df7;
  uRam0000000183091390 = (uRam0000000183091390 * -0x2dc60e51f3e5f9f ^ uRam00000001830915b8) + uVar6;
  uRam0000000183091350 = uRam0000000183091390 ^ uRam00000001830915b8;
  uRam0000000183091270 = 0;
  uVar6 = (uRam00000001830913f0 ^ 0x84225cda) + uRam00000001830913a8 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830913f0 ^ 0x84225cda;
  uVar11 = ((uRam00000001830913a8 + uRam00000001830913f0) * 0x2000 |
           uRam00000001830913a8 + uRam00000001830913f0 >> 0x33) ^ uRam00000001830913a8;
  lRam0000000183091330 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - uRam00000001830913f0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830913a8 + 0x84225cda));
  auVar10 = _UNK_1800170c0;
  uVar6 = lRam0000000183091330 * -0x18f88e789f6a7e73;
  uRam0000000183091570 = uRam00000001830912f8 ^ uVar6 ^ 0x7fff;
  uRam0000000183091488 = (uRam0000000183091488 ^ uVar6) + 0x7fff ^ 0x733841e4140cefa9;
  uRam0000000183091548 = (uRam0000000183091548 * 0x5e15d459af94bf9f ^ uRam0000000183091488) + uVar6;
  uRam00000001830912b8 = uRam0000000183091548 ^ uRam0000000183091488;
  auVar8._8_8_ = _UNK_18019c088;
  auVar8._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183091590 = 0x7fff;
  auVar9 = pshufb(auVar8 ^ _UNK_1802eefb0,_UNK_1800170c0);
  uVar11 = auVar9._8_8_ + auVar9._0_8_;
  uVar6 = uVar11 + lRam0000000183091198;
  if (auVar9._4_4_ < 0) {
    uVar6 = uRam0000000183091170 ^ uVar11;
  }
  uRam0000000183091400 = func_0x000184b39860(SUB161(auVar8 ^ _UNK_1802eefb0,5) ^ uVar6);
  uVar11 = (param_4 | 0x7fff) ^ uRam0000000183091400;
  uVar6 = uVar11 >> 1 | uVar11;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
           ^ uVar11;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar3;
  uRam0000000183091538 = (uRam0000000183091538 ^ uVar11) + uVar4 ^ 0x1a5a6d280c81d172;
  uRam0000000183091360 =
       (uRam0000000183091360 * -0x3393ab3df33bc12b ^ uRam0000000183091538) + uVar11;
  uRam0000000183091278 = uRam0000000183091360 ^ uRam0000000183091538;
  auVar9._4_4_ = 0;
  auVar9._0_4_ = uVar3 ^ 0x84222325;
  auVar9._8_4_ = param_3;
  auVar9._12_4_ = 0;
  auVar10 = pshufb(auVar9 ^ _UNK_1802eefc0,auVar10);
  uVar11 = auVar10._8_8_ + auVar10._0_8_;
  uVar6 = uVar11 + uRam00000001830912d8;
  if (auVar10._4_4_ < 0) {
    uVar6 = uRam00000001830915e0 ^ uVar11;
  }
  uRam0000000183091350 = uVar4;
  uRam0000000183091328 = func_0x000184b39860(SUB161(auVar9 ^ _UNK_1802eefc0,5) ^ uVar6);
  uVar4 = (uVar4 + param_3) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183091250 =
       (uRam0000000183091250 ^ uRam0000000183091328 * 0x7a20f6b3f8c9860b) + uVar4 ^
       0x1ddb7898611e4e99;
  uRam0000000183091378 =
       (uRam0000000183091378 * -0x2fadfcfa70195655 ^ uRam0000000183091250) +
       uRam0000000183091328 * 0x7a20f6b3f8c9860b;
  uRam00000001830912f0 = uRam0000000183091378 ^ uRam0000000183091250;
  uVar5 = uVar4 & 0xffffffff;
  uRam0000000183091320 = uVar5;
  uRam00000001830913e0 = func_0x000184b39860(uRam00000001830913c8 ^ 0xff530081e5ff19f4);
  uVar6 = ((uRam00000001830913e0 ^ 0x12456865) << 0x1a | uRam00000001830913e0 >> 0x26) ^ 0x12456865;
  uRam0000000183091158 = (uRam0000000183091158 ^ uVar6) + 0x16cdfc7f ^ 0xe909fdff1e68a468;
  uRam0000000183091398 = (uRam0000000183091398 * 0x7ad69773ec62ad2f ^ uRam0000000183091158) + uVar6;
  uRam00000001830915a8 = uRam0000000183091398 ^ uRam0000000183091158;
  uRam0000000183091180 = 0x16cdfc7f;
  uVar6 = (uRam0000000183091648 ^ _UNK_1802eefd0) + uRam0000000183091488 + 0x5d45b869;
  uVar11 = (uRam0000000183091488 ^ _UNK_1802eefd8) + uRam0000000183091648 + 0x8f98e3b9;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183091648 ^ _UNK_1802eefd0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183091488 ^ _UNK_1802eefd8;
  uRam00000001830913c0 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam0000000183091648 + 0x8f98e3b9) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183091488 + 0x5d45b869));
  uRam00000001830912a8 =
       (uRam00000001830912a8 ^ uRam00000001830913c0 ^ 0x79f2b6a72c2b7e55) + 0x56ff78f5 ^
       0x122d23f31013989e;
  uRam0000000183091538 =
       (uRam0000000183091538 * 0x1b333466e710f4f ^ uRam00000001830912a8) +
       (uRam00000001830913c0 ^ 0x79f2b6a72c2b7e55);
  uRam0000000183091468 = uRam0000000183091538 ^ uRam00000001830912a8;
  uRam0000000183091168 = 0x56ff78f5;
  uVar6 = (uRam00000001830911a0 ^ _UNK_1802eefe0) + uRam00000001830913c8 + 0x84222325;
  uVar11 = (uRam00000001830913c8 ^ _UNK_1802eefe8) + uRam00000001830911a0 + 0xd4e25ab7;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830911a0 ^ _UNK_1802eefe0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001830913c8 ^ _UNK_1802eefe8;
  uRam0000000183091320 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam00000001830911a0 + 0xd4e25ab7) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830913c8 + 0x84222325));
  uRam0000000183091460 =
       (uRam0000000183091460 ^ uRam0000000183091320) - 0xd4e25ab7 ^ 0x10b552284790564;
  uRam0000000183091660 =
       (uRam0000000183091660 * -0x14d75ee30d6947f ^ uRam0000000183091460) + uRam0000000183091320;
  uRam0000000183091500 = uRam0000000183091660 ^ uRam0000000183091460;
  uRam0000000183091288 = uRam0000000183091168 ^ 0xffffffff2b1da549;
  uRam00000001830913b8 = 0x2b1da549;
  uRam0000000183091478 = func_0x000184b39860(uRam0000000183091318 ^ 0x2ffd0be00bfbb);
  uVar6 = (uRam0000000183091478 ^ 0x60b5c44dda54) << 0x1e |
          (uRam0000000183091478 ^ 0x60b5c44dda54) >> 0x22;
  uRam00000001830915c8 = uRam0000000183091400 ^ uVar6 ^ 0xd4e2cf03;
  uRam00000001830911b0 = (uRam00000001830911b0 ^ uVar6) + 0xd4e2cf03 ^ 0x842cf1b4776c0dce;
  uRam0000000183091390 = (uRam0000000183091390 * -0x4fdce28f979386f1 ^ uRam00000001830911b0) + uVar6
  ;
  uRam0000000183091450 = uRam0000000183091390 ^ uRam00000001830911b0;
  uRam00000001830915a0 = 0xd4e2cf03;
  uVar6 = (~uRam0000000183091680 + 0x2b1da54a) *
          ((uRam00000001830914d0 ^ 0x50c0ec26) +
          (ulonglong)((uint)uRam00000001830914d0 & 0x50c0ec26) * 2);
  uVar6 = (uVar6 | uRam0000000183091150) + (uVar6 & uRam0000000183091150);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001830912c0 =
       func_0x000184b39860((uVar6 | 0x7bdd496f) + (ulonglong)((uint)uVar6 & 0x7bdd496f));
  uVar11 = uRam00000001830912c0 ^ 0x23dabfe9d870f6db;
  uVar6 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x37 ^ uVar11) &
          0xffffffffffffff00;
  uRam00000001830912e0 = uRam00000001830916a0 ^ uVar6 ^ 0x10000744c;
  uRam00000001830915f8 = (uRam00000001830915f8 ^ uVar6) + 0x10000744c ^ 0xc8bc4fc2953ce399;
  uRam0000000183091410 = (uRam0000000183091410 * -0x2112a4d8563c745f ^ uRam00000001830915f8) + uVar6
  ;
  uRam0000000183091600 = uRam0000000183091410 ^ uRam00000001830915f8;
  uRam0000000183091650 = 0x744c;
  uVar6 = (~uRam0000000183091188 + 0x69954971) *
          ((uRam0000000183091230 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183091230 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183091208) + (uVar6 & uRam0000000183091208);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam0000000183091330 =
       func_0x000184b39860((uVar6 | 0xedb76a55) + (ulonglong)((uint)uVar6 & 0xedb76a55));
  uRam0000000183091260 =
       (uRam0000000183091260 ^ lRam0000000183091330 * -0x7148722f3172a9b9) - 0x69954970 ^
       0xd967742ba3ad4fba;
  uRam0000000183091470 =
       (uRam0000000183091470 * 0xe5572bc9b569ccd ^ uRam0000000183091260) +
       lRam0000000183091330 * -0x7148722f3172a9b9;
  uRam0000000183091510 = uRam0000000183091470 ^ uRam0000000183091260;
  uRam00000001830914d0 = 0x966ab690;
  uVar6 = (~uRam0000000183091448 + 0x69954971) *
          ((uRam0000000183091328 ^ 0x84225769) +
          (ulonglong)((uint)uRam0000000183091328 & 0x84225769) * 2);
  uVar6 = (uVar6 | uRam0000000183091690) + (uVar6 & uRam0000000183091690);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001830912d8 =
       func_0x000184b39860((uVar6 | 0xedb71e19) + (ulonglong)((uint)uVar6 & 0xedb71e19));
  uVar6 = uRam00000001830912d8 ^ 0x2ff6fd988d40;
  uRam0000000183091298 = uRam0000000183091340 ^ uVar6 ^ 0x6995bdbc;
  uRam0000000183091208 = (uRam0000000183091208 ^ uVar6) + 0x6995bdbc ^ 0xf71cd418aaf62a;
  uRam00000001830913f8 = (uRam00000001830913f8 * -0x6ae4353934a4e605 ^ uRam0000000183091208) + uVar6
  ;
  uRam00000001830912e0 = uRam00000001830913f8 ^ uRam0000000183091208;
  uRam0000000183091530 = 0x6995bdbc;
  uVar6 = (uRam0000000183091630 ^ _UNK_1802eeff0) + uRam0000000183091570 + 0xedb79e99;
  uVar11 = (uRam0000000183091570 ^ _UNK_1802eeff8) + uRam0000000183091630 + 0x966ab690;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183091630 ^ _UNK_1802eeff0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183091570 ^ _UNK_1802eeff8;
  uRam0000000183091168 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam0000000183091630 + 0x966ab690) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183091570 + 0xedb79e99));
  uVar6 = uRam0000000183091168 - (uRam0000000183091168 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183091168;
  uRam00000001830914d0 = uRam0000000183091380 ^ uVar6 ^ 0x10000744c;
  uRam0000000183091260 = (uRam0000000183091260 ^ uVar6) + 0x10000744c ^ 0xd0754ca768d3f86c;
  uRam0000000183091518 = (uRam0000000183091518 * 0x52ee0d98990066bf ^ uRam0000000183091260) + uVar6;
  uRam00000001830913f0 = uRam0000000183091518 ^ uRam0000000183091260;
  lRam0000000183091198 = 0x744c;
  uRam0000000183091348 = func_0x000184b39860(uRam0000000183091400 + 0xfff100928affeaff ^ 0x5b);
  uVar6 = (uRam0000000183091348 << 0x1e | uRam0000000183091348 >> 0x22) >> 6 |
          (uRam0000000183091348 >> 0x22) << 0x3a;
  uRam0000000183091650 = (uRam0000000183091650 ^ uVar6) - 0x1b151290 ^ 0x3b991f2a9cbb924f;
  uRam0000000183091528 = (uRam0000000183091528 * 0x5215e7985b7a2a33 ^ uRam0000000183091650) + uVar6;
  uRam0000000183091118 = uRam0000000183091528 ^ uRam0000000183091650;
  uRam0000000183091250 = 0xe4eaed70;
  uVar6 = (~uRam0000000183091550 + 0xe4eaed71) *
          ((uRam0000000183091578 ^ 0x9f37a5f9) +
          (ulonglong)((uint)uRam0000000183091578 & 0x9f37a5f9) * 2);
  uVar6 = (uVar6 | uRam0000000183091580) + (uVar6 & uRam0000000183091580);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183091190 =
       func_0x000184b39860((uVar6 | 0x7bdd4889) + (ulonglong)((uint)uVar6 & 0x7bdd4889));
  uRam0000000183091480 = uRam00000001830916c8 ^ uRam0000000183091190 ^ 0x10000744c;
  uRam0000000183091158 =
       (uRam0000000183091158 ^ uRam0000000183091190) + 0x10000744c ^ 0x872f12d5aa96a736;
  uRam00000001830913e0 =
       (uRam00000001830913e0 * -0x4747b9c9842bed87 ^ uRam0000000183091158) + uRam0000000183091190;
  uRam0000000183091378 = uRam00000001830913e0 ^ uRam0000000183091158;
  uRam0000000183091638 = 0x744c;
  uVar6 = (~uRam00000001830916d0 + 0x56ff78f6) *
          ((uRam00000001830916d0 ^ 0x92efdf5a) +
          (ulonglong)((uint)uRam00000001830916d0 & 0x92efdf5a) * 2);
  uVar6 = (uVar6 | uRam00000001830916b0) + (uVar6 & uRam00000001830916b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam0000000183091108 =
       func_0x000184b39860((uVar6 | 0xc410a7af) + (ulonglong)((uint)uVar6 & 0xc410a7af));
  uVar6 = lRam0000000183091108 * 0x6af0a5c7372f8cc1;
  uRam0000000183091248 = uRam00000001830915a8 ^ uVar6 ^ 0x6dcd7574;
  uRam00000001830912b0 = (uRam00000001830912b0 ^ uVar6) + 0x6dcd7574 ^ 0xdef7748bdc6835b0;
  uRam00000001830915b0 = (uRam00000001830915b0 * 0x7fbcb117187e12a1 ^ uRam00000001830912b0) + uVar6;
  uRam0000000183091400 = uRam00000001830915b0 ^ uRam00000001830912b0;
  uRam0000000183091328 = 0x6dcd7574;
  uVar6 = (uRam00000001830915e8 ^ _UNK_1802ef000) + uRam0000000183091118 + 0x92efdf5a;
  uVar11 = (uRam0000000183091118 ^ _UNK_1802ef008) + uRam00000001830915e8 + 0x56ff78f5;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830915e8 ^ _UNK_1802ef000;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183091118 ^ _UNK_1802ef008;
  uRam0000000183091218 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam00000001830915e8 + 0x56ff78f5) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183091118 + 0x92efdf5a));
  uVar6 = uRam0000000183091218 ^ 0x7bff4c78dff2d8b;
  uVar6 = (uVar6 & 0xffffffff) * (_UNK_1802ef010 & 0xffffffff) +
          ((ulonglong)_UNK_1802ef020 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (_UNK_1802ef010 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  uRam0000000183091348 = (uRam0000000183091348 ^ uVar6) + 0x4032848a ^ 0x479d192b1bdbd13;
  uRam00000001830912f8 = (uRam00000001830912f8 * -0x4bd07d989dcbefbb ^ uRam0000000183091348) + uVar6
  ;
  uRam0000000183091618 = uRam00000001830912f8 ^ uRam0000000183091348;
  uRam00000001830912f0 = 0x4032848a;
  uVar6 = (~uRam00000001830912b8 + 0x2d9af0eb) *
          ((uRam0000000183091698 ^ 0xc410a7af) +
          (ulonglong)((uint)uRam0000000183091698 & 0xc410a7af) * 2);
  uVar6 = (uVar6 | uRam0000000183091220) + (uVar6 & uRam0000000183091220);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183091368 =
       func_0x000184b39860((uVar6 | 0xe98a5745) + (ulonglong)((uint)uVar6 & 0xe98a5745));
  uVar6 = uRam0000000183091368 ^ 0x4032848a;
  uRam00000001830912f8 = uRam0000000183091528 ^ uVar6 ^ 0x6dcd7574;
  uRam00000001830913f0 = (uRam00000001830913f0 ^ uVar6) + 0x6dcd7574 ^ 0xaf5e5ccde3221ffc;
  uRam0000000183091518 = (uRam0000000183091518 * -0x5ac8b0d0715adb57 ^ uRam00000001830913f0) + uVar6
  ;
  uRam0000000183091228 = uRam0000000183091518 ^ uRam00000001830913f0;
  uRam0000000183091538 = 0x6dcd7574;
  uVar6 = (uRam00000001830916b8 ^ _UNK_1802ef030) + uRam0000000183091608 + 0xe9ef5651;
  uVar11 = (uRam0000000183091608 ^ _UNK_1802ef038) + uRam00000001830916b8 + 0x6dcd7574;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830916b8 ^ _UNK_1802ef030;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183091608 ^ _UNK_1802ef038;
  uRam0000000183091278 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam00000001830916b8 + 0x6dcd7574) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183091608 + 0xe9ef5651));
  uRam0000000183091498 = (uRam0000000183091278 ^ 0x6dcd7574) & 0x7fffffffffffffff;
  uRam0000000183091250 = uRam0000000183091250 ^ uRam0000000183091498 ^ 0x2c904b646d482fc1;
  uRam00000001830916e8 =
       (uRam00000001830916e8 * -0x799cd2b3e01e706b ^ uRam0000000183091250) + uRam0000000183091498;
  uRam0000000183091508 = uRam00000001830916e8 ^ uRam0000000183091250;
  uRam0000000183091570 = uRam00000001830911e8;
  lRam0000000183091330 = 0;
  uRam0000000183091648 = func_0x000184b39860(uRam0000000183091310 ^ 0x20005d63000fb6);
  uVar6 = uRam0000000183091648 << 0x37 | (uRam0000000183091648 & 0xfffffffff) >> 9;
  uRam00000001830916d8 = (uRam00000001830916d8 ^ uVar6) + 0xe9320380 ^ 0x5e72d71f33bc02d5;
  uRam0000000183091370 = (uRam0000000183091370 * -0x5f0b96fec587fab7 ^ uRam00000001830916d8) + uVar6
  ;
  uRam0000000183091678 = uRam0000000183091370 ^ uRam00000001830916d8;
  uRam0000000183091490 = 0xe9320380;
  uRam0000000183091680 = func_0x000184b39860(uRam00000001830913a0 ^ 0xffd3008428ffdd7e);
  uVar6 = (uRam0000000183091680 ^ 0x744c) << 1 | uRam0000000183091680 >> 0x3f;
  uRam00000001830914e8 = uRam00000001830911f0 ^ uVar6 ^ 0x744c;
  uRam00000001830911e8 = (uRam00000001830911e8 ^ uVar6) + 0x744c ^ 0x46eedb69879b3d11;
  uRam00000001830914a0 = (uRam00000001830914a0 * 0xaca0e9f2430845b ^ uRam00000001830911e8) + uVar6;
  uRam00000001830915c8 = uRam00000001830914a0 ^ uRam00000001830911e8;
  uRam0000000183091270 = uRam0000000183091278 ^ 0x744c;
  uRam0000000183091238 = 0x744c;
  uVar6 = ((uRam00000001830913b0 ^ 0x84225769) +
          (ulonglong)((uint)uRam00000001830913b0 & 0x84225769) * 2) * -lRam00000001830911f8;
  uVar6 = (uVar6 | uRam0000000183091548) + (uVar6 & uRam0000000183091548);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001830912a0 =
       func_0x000184b39860((uVar6 | 0x84225769) + (ulonglong)((uint)uVar6 & 0x84225769));
  uVar6 = (uRam00000001830912a0 ^ 0x744c) & 0x7ffffffff;
  uRam0000000183091680 = uRam0000000183091238 ^ uVar6 ^ 0x744c;
  uRam0000000183091518 = (uRam0000000183091518 ^ uVar6) + 0x744c ^ 0xb0947a7f936abbc8;
  uRam0000000183091278 = (uRam0000000183091278 * -0x662c97d80dc738b ^ uRam0000000183091518) + uVar6;
  uRam00000001830912e8 = uRam0000000183091278 ^ uRam0000000183091518;
  uRam0000000183091178 = 0x744c;
  uVar6 = uVar5 ^ 0x84222325 ^ uRam0000000183091480;
  lVar7 = (uVar5 ^ 0x84222325) + uRam00000001830911e0;
  uVar11 = uVar6 + lVar7;
  uVar12 = (uRam00000001830911e0 ^ 0x744c) + uRam0000000183091480 + 0x744c;
  uVar6 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar6;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uRam00000001830911e0 ^ 0x744c;
  uRam0000000183091610 =
       func_0x000184b39860((uVar11 << 0x1d | uVar11 >> 0x23) - (uRam0000000183091480 + 0x744c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  lVar7 = uVar5 - ((uint)uVar4 & 0x744c) * 2;
  uRam00000001830914b8 =
       (uRam00000001830914b8 ^ uVar5 ^ uRam0000000183091610) + lVar7 + 0x744c ^ 0x5e7a526dca9b85;
  uRam0000000183091508 =
       (uRam0000000183091508 * 0xa24f8b2371379a5 ^ uRam00000001830914b8) +
       (uVar5 ^ uRam0000000183091610);
  uRam00000001830914f8 = uRam0000000183091508 ^ uRam00000001830914b8;
  uRam0000000183091220 = lVar7 + 0x744cU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x128c7,0x2f4)
      /* POOL[0x128c7,0x2f4]: Double | kySvO | [Lsixtwo/rf; | OIxOu | sixtwo/rf | ElhZz | SWful | deV | akhNQ | sxweB | LbAPM | aKX | (Lnet/minecraft/class_465;Lnet/minecraft/class_1735;)Z | diT | (Lnet/minecraft/class_304;)V | aVMzs | RazEo | EsjGg | aLf | tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184b30595 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802ed110 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rf; dfy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 184b398f0, runtime 6fffec7498f0) =====

void FUN_184b398f0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000184b3993b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802ef1a0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/rf; dfz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 184b3a900, runtime 6fffec74a900) =====

void FUN_184b3a900(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184b3a989 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802ef760 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rf; valueOf (Ljava/lang/String;)Lsixtwo/rf; (handler @ image 184af7680, runtime 6fffec707680) =====

void FUN_184af7680(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x128c7,0x2f4)
      /* POOL[0x128c7,0x2f4]: Double | kySvO | [Lsixtwo/rf; | OIxOu | sixtwo/rf | ElhZz | SWful | deV | akhNQ | sxweB | LbAPM | aKX | (Lnet/minecraft/class_465;Lnet/minecraft/class_1735;)Z | diT | (Lnet/minecraft/class_304;)V | aVMzs | RazEo | EsjGg | aLf | tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184af76c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e3b50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rf; values ()[Lsixtwo/rf; (handler @ image 184af7300, runtime 6fffec707300) =====

void FUN_184af7300(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x128c7,0x2f4)
      /* POOL[0x128c7,0x2f4]: Double | kySvO | [Lsixtwo/rf; | OIxOu | sixtwo/rf | ElhZz | SWful | deV | akhNQ | sxweB | LbAPM | aKX | (Lnet/minecraft/class_465;Lnet/minecraft/class_1735;)Z | diT | (Lnet/minecraft/class_304;)V | aVMzs | RazEo | EsjGg | aLf | tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184af7347 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e39f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x4af734a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af734a(void)

{
  FUN_190ddce00();
  (*_DAT_1802e3ab8)();
  return;
}


// ----- block @ rva 0x4af73a1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af73a1(void)

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


// ----- block @ rva 0x4af7428 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af7428(void)

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


// ----- block @ rva 0x4af7449 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7449(void)

{
  FUN_190ddfc90();
  (*_DAT_1802e3a88)();
  return;
}


// ----- block @ rva 0x4af74a0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af74a0(void)

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


// ----- block @ rva 0x4af74f3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af74f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1802e3ad8)();
  return;
}


// ----- block @ rva 0x4af753d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af753d(void)

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


// ----- block @ rva 0x4af75b0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af75b0(undefined8 param_1)

{
  undefined8 in_stack_00000030;
  
  (*_DAT_1802e3af8)(param_1,in_stack_00000030);
  return;
}


// ----- block @ rva 0x4af75bb -----

void FUN_184af75bb(void)

{
  return;
}


// ----- block @ rva 0x4af76cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af76cb(void)

{
  FUN_190dd72e0();
  (*_DAT_1802e3b98)();
  return;
}


// ----- block @ rva 0x4af76fd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af76fd(void)

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


// ----- block @ rva 0x4af7751 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af7751(void)

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


// ----- block @ rva 0x4af7799 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af7799(void)

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


// ----- block @ rva 0x4af77ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af77ba(void)

{
  FUN_190dd72e0();
  (*_DAT_1802e3b88)();
  return;
}


// ----- block @ rva 0x4af77e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af77e2(void)

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


// ----- block @ rva 0x4af7877 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7877(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1802e3bc8)();
  return;
}


// ----- block @ rva 0x4af7894 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7894(void)

{
  (*_DAT_1802e3bc8)();
  return;
}


// ----- block @ rva 0x4af789f -----

void FUN_184af789f(void)

{
  return;
}


// ----- block @ rva 0x4af78a7 -----

void FUN_184af78a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4af7953 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7953(void)

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


// ----- block @ rva 0x4af798c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af798c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1802e3cb8)();
  return;
}


// ----- block @ rva 0x4af79b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af79b1(void)

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


// ----- block @ rva 0x4af79c6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af79c6(void)

{
  FUN_190dd72e0();
  (*_DAT_1802e3ce8)();
  return;
}


// ----- block @ rva 0x4af7a0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7a0f(void)

{
  FUN_190dd9df0();
  (*_DAT_1802e3ca8)();
  return;
}


// ----- block @ rva 0x4af7a42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af7a42(void)

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


// ----- block @ rva 0x4af7a8d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7a8d(void)

{
  (*_DAT_1802e3c88)();
  return;
}


// ----- block @ rva 0x4af7a9e -----

void FUN_184af7a9e(void)

{
  return;
}


// ----- block @ rva 0x4af7aa6 -----

void FUN_184af7aa6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4af7b53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7b53(void)

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


// ----- block @ rva 0x4af7b8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7b8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1802e3d98)();
  return;
}


// ----- block @ rva 0x4af7bb1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af7bb1(void)

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


// ----- block @ rva 0x4af7bc6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7bc6(void)

{
  FUN_190dd72e0();
  (*_DAT_1802e3d58)();
  return;
}


// ----- block @ rva 0x4af7bee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af7bee(void)

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


// ----- block @ rva 0x4af7c42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184af7c42(void)

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


// ----- block @ rva 0x4af7c66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7c66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1802e3dd8)();
  return;
}


// ----- block @ rva 0x4af7c9e -----

void FUN_184af7c9e(void)

{
  return;
}


// ----- block @ rva 0x4af7ca6 -----

void FUN_184af7ca6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4af7e0c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184af7e0c(void)

{
  FUN_190ddce00();
  (*_DAT_1802e4108)();
  return;
}


// ----- block @ rva 0x4afb39d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184afb39d(void)

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


// ----- block @ rva 0x4afb9b3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184afb9b3(void)

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


// ----- block @ rva 0x4afba6c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184afba6c(void)

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


// ----- block @ rva 0x4aff30a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184aff30a(void)

{
  FUN_190dd72e0();
  (*_DAT_1802e43c8)();
  return;
}


// ----- block @ rva 0x4affd75 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184affd75(void)

{
  FUN_190ddfc90();
  (*_DAT_1802e48c8)();
  return;
}


// ----- block @ rva 0x4b031f8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b031f8(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
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


// ----- block @ rva 0x4b03b8c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b03b8c(void)

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


// ----- block @ rva 0x4b03cf3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b03cf3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1802e5068)();
  return;
}


// ----- block @ rva 0x4b03d16 -----

void FUN_184b03d16(void)

{
  return;
}


// ----- block @ rva 0x4b03d82 -----

void FUN_184b03d82(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4b03f53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184b03f89 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184b03f53(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x4b03fa6 -----

void FUN_184b03fa6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000184b03fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e78c0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x4b04160 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b04160(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulonglong in_RAX;
  ulonglong uVar3;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong in_R9;
  ulonglong unaff_R14;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint unaff_XMM7_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM15_Da;
  
  *(uint *)(unaff_RBP + 0x40) = unaff_EBX;
  *(uint *)(unaff_RBP + 0x38) = unaff_EBX;
  *(char *)(unaff_RBP + 0x90) =
       (char)unaff_EBX + (char)(uint)((ulonglong)unaff_EBX * in_R9 >> 0x23) * -10;
  _DAT_183090378 = func_0x000184b2de30(_DAT_1830908e0 + 0xffe0ff7bdc001dffU ^ 0xc0);
  uVar3 = (_DAT_183090378 ^ *(ulonglong *)(unaff_RBP + -0x10)) & 0x7fffffffffffffff;
  _DAT_183090538 = (_DAT_183090538 ^ uVar3) + 0xd7 ^ 0xf012a9bb8c2c7f1c;
  _DAT_183090738 = (_DAT_183090738 * 0x32e18b9ef3fd05f3 ^ _DAT_183090538) + uVar3;
  _DAT_183090358 = _DAT_183090738 ^ _DAT_183090538;
  _DAT_1830904d8 = 0xd7;
  uVar3 = (~_DAT_183090400 + 0x15) *
          ((_DAT_1830907a8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830907a8 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830906d8) + (uVar3 & _DAT_1830906d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830905e8 = func_0x000184b2de30((uVar3 | 0x84222331) + (ulonglong)((uint)uVar3 & 0x84222331))
  ;
  uVar3 = _DAT_1830905e8 * -0x2b6313a9c194001b & 0x7fffffffffffff;
  _DAT_183090660 = (_DAT_183090660 ^ uVar3) - 0x14 ^ 0x23d6a1ee3f4b625e;
  _DAT_183090810 = (_DAT_183090810 * -0x2b78091888cfdb97 ^ _DAT_183090660) + uVar3;
  _DAT_183090850 = _DAT_183090810 ^ _DAT_183090660;
  _DAT_183090798 = 0xec;
  _DAT_1830904d8 = func_0x000184b2de30(_DAT_183090818 ^ 0xffdd007bfeffe153);
  uVar3 = _DAT_183090808 << 0x2c | _DAT_183090808 >> 0x14;
  _DAT_183090360 = _DAT_1830905e0 ^ uVar3 ^ 0x44;
  _DAT_1830903d0 = (_DAT_1830903d0 ^ uVar3) + 0x44 ^ 0xa0806b93827b3797;
  _DAT_1830903e0 = (_DAT_1830903e0 * -0x4a62f0706b282de3 ^ _DAT_1830903d0) + uVar3;
  _DAT_1830905b0 = _DAT_1830903e0 ^ _DAT_1830903d0;
  _DAT_183090760 = 0x44;
  uVar3 = (_DAT_183090510 ^ _DAT_1802e8450) + _DAT_183090708 + 0x84222361;
  uVar7 = (_DAT_183090708 ^ _UNK_1802e8458) + _DAT_183090510 + 0xec;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183090510 ^ _DAT_1802e8450;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183090708 ^ _UNK_1802e8458;
  _DAT_1830908d0 =
       func_0x000184b2de30((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183090510 + 0xec) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183090708 + 0x84222361));
  _DAT_1830908f0 = _DAT_183090310 ^ _DAT_1830908d0 ^ 0x130;
  _DAT_183090710 = (_DAT_183090710 ^ _DAT_1830908d0) + 0x130 ^ 0xaf0cc1d1e22e877c;
  _DAT_183090828 = (_DAT_183090828 * -0x64bfafe73e6d9685 ^ _DAT_183090710) + _DAT_1830908d0;
  _DAT_183090840 = _DAT_183090828 ^ _DAT_183090710;
  _DAT_183090838 = 0x30;
  uVar3 = (~_DAT_1830903b0 + 0xdd) *
          ((_DAT_183090458 ^ 0x84222325) + (ulonglong)((uint)_DAT_183090458 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183090730) + (uVar3 & _DAT_183090730);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183090768 = func_0x000184b2de30((uVar3 | 0x842223f9) + (ulonglong)((uint)uVar3 & 0x842223f9))
  ;
  uVar3 = _DAT_183090768 & 0xfffffffffffffc00;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_R14) + (uVar7 >> 2 & unaff_R14);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  _DAT_183090470 = (_DAT_183090470 ^ uVar3) - 0xdc ^ 0x67e93f0da078bf1f;
  _DAT_183090880 = (_DAT_183090880 * 0x623f86e4725de67f ^ _DAT_183090470) + uVar3;
  _DAT_1830908a8 = _DAT_183090880 ^ _DAT_183090470;
  _DAT_1830906b0 = _DAT_183090730 ^ 0xffffffffffffff24;
  _DAT_183090710 = 0x24;
  _DAT_1830904c8 = func_0x000184b2de30(_DAT_1830905b8 + 0x230083950021ff ^ 0xfb);
  _DAT_183090468 = (_DAT_183090468 ^ _DAT_1830904c8 ^ 0xb0) - 0xb0 ^ 0xa38eddf5c911e822;
  _DAT_1830905d8 = (_DAT_1830905d8 * 0x6f5c9e4567045e0f ^ _DAT_183090468) + (_DAT_1830904c8 ^ 0xb0);
  _DAT_183090620 = _DAT_1830905d8 ^ _DAT_183090468;
  _DAT_183090588 = 0x50;
  uVar3 = (~_DAT_1830904f8 + 0xb1) *
          ((_DAT_1830908c0 ^ 0x84222315) + (ulonglong)((uint)_DAT_1830908c0 & 0x84222315) * 2);
  uVar3 = (uVar3 | _DAT_183090368) + (uVar3 & _DAT_183090368);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830908f0 = func_0x000184b2de30((uVar3 | 0x842223a5) + (ulonglong)((uint)uVar3 & 0x842223a5))
  ;
  uVar3 = _DAT_1830908f0 << 0x18 | _DAT_1830908f0 >> 0x28;
  _DAT_183090598 = _DAT_183090310 ^ uVar3 ^ 0xe0;
  _DAT_1830905c0 = (_DAT_1830905c0 ^ uVar3) + 0xe0 ^ 0x5b25ae0b4228ce3a;
  _DAT_1830905e0 = (_DAT_1830905e0 * -0x5bd56f42c70e38e5 ^ _DAT_1830905c0) + uVar3;
  _DAT_183090300 = _DAT_1830905e0 ^ _DAT_1830905c0;
  _DAT_1830907e0 = 0xe0;
  uVar3 = (~_DAT_183090490 + 0x51) *
          ((_DAT_183090380 ^ 0x842223c5) + (ulonglong)((uint)_DAT_183090380 & 0x842223c5) * 2);
  uVar3 = (uVar3 | _DAT_183090608) + (uVar3 & _DAT_183090608);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183090758 = func_0x000184b2de30((uVar3 | 0x84222395) + (ulonglong)((uint)uVar3 & 0x84222395))
  ;
  _DAT_1830907d0 = _DAT_183090730 ^ _DAT_183090758 ^ 0x130;
  uVar3 = (_DAT_183090880 ^ _DAT_183090758) + 0x130;
  _DAT_183090880 = uVar3 ^ 0x652191f51cf0504e;
  _DAT_183090890 = (_DAT_183090890 * 0xed34dc4eef0cc19 ^ _DAT_183090880) + _DAT_183090758;
  _DAT_183090658 = _DAT_183090890 ^ _DAT_183090880;
  _DAT_183090378 = 0x30;
  uVar3 = (~_DAT_183090520 + 0xa6) *
          ((uVar3 ^ 0x652191f598d273bc) + (ulonglong)((uint)_DAT_183090880 & 0x842223f2) * 2);
  uVar3 = (uVar3 | _DAT_183090508) + (uVar3 & _DAT_183090508);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183090528 = func_0x000184b2de30((uVar3 | 0x84222357) + (ulonglong)((uint)uVar3 & 0x84222357))
  ;
  uVar3 = ((_DAT_183090528 << 0xf | _DAT_183090528 >> 0x31) << 0x13 |
          (_DAT_183090528 & 0x1ffffffffffff) >> 0x1e) ^ 0xa5;
  _DAT_183090738 = _DAT_1830903b8 ^ uVar3 ^ 0x17c;
  _DAT_183090398 = (_DAT_183090398 ^ uVar3) + 0x17c ^ 0x5b483f7e52341696;
  _DAT_183090348 = (_DAT_183090348 * 0x1ab4ce69f68b8631 ^ _DAT_183090398) + uVar3;
  _DAT_1830904d0 = _DAT_183090348 ^ _DAT_183090398;
  _DAT_1830907e8 = 0x7c;
  uVar3 = (~_DAT_183090370 + 0xa6) *
          ((_DAT_1830905b8 ^ 0x842223f2) + (ulonglong)((uint)_DAT_1830905b8 & 0x842223f2) * 2);
  uVar3 = (uVar3 | _DAT_1830903e0) + (uVar3 & _DAT_1830903e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183090530 = func_0x000184b2de30((uVar3 | 0x84222357) + (ulonglong)((uint)uVar3 & 0x84222357))
  ;
  uVar3 = (_DAT_183090530 ^ 0xd7) & 0xfffffffff;
  _DAT_1830908a8 = (_DAT_1830908a8 ^ uVar3) + 0x72 ^ 0xcaa8791dd99b0fe7;
  _DAT_183090438 = (_DAT_183090438 * -0x486a421eed78403b ^ _DAT_1830908a8) + uVar3;
  _DAT_183090538 = _DAT_183090438 ^ _DAT_1830908a8;
  _DAT_1830906f8 = 0x72;
  uVar3 = (~_DAT_183090650 + 0xa6) *
          ((_DAT_183090668 ^ 0x842223f2) + (ulonglong)((uint)_DAT_183090668 & 0x842223f2) * 2);
  uVar3 = (uVar3 | _DAT_183090878) + (uVar3 & _DAT_183090878);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183090358 = func_0x000184b2de30((uVar3 | 0x84222357) + (ulonglong)((uint)uVar3 & 0x84222357))
  ;
  uVar3 = (ulonglong)((uint)_DAT_183090358 ^ 0xf7) << 0x26 | _DAT_183090358 >> 0x1a;
  _DAT_183090738 = (_DAT_183090738 ^ uVar3) + 0x85 ^ 0x774fb8765ac17ea1;
  _DAT_183090708 = (_DAT_183090708 * -0x1888bd8ba01f74f1 ^ _DAT_183090738) + uVar3;
  _DAT_183090468 = _DAT_183090708 ^ _DAT_183090738;
  _DAT_183090430 = 0x85;
  uVar3 = (_DAT_183090348 ^ _DAT_1802e8460) + _DAT_1830903b8 + 0x84222357;
  uVar7 = (_DAT_1830903b8 ^ _UNK_1802e8468) + _DAT_183090348 + 10;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183090348 ^ _DAT_1802e8460;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830903b8 ^ _UNK_1802e8468;
  uVar3 = func_0x000184b2de30((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183090348 + 10) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830903b8 + 0x84222357));
  uVar3 = uVar3 & 0x7fffffffff;
  _DAT_183090870 = _DAT_183090588 ^ uVar3 ^ 0x7c;
  _DAT_1830903c0 = (_DAT_1830903c0 ^ uVar3) + 0x7c ^ 0x38c89e9ee452d806;
  _DAT_183090358 = (_DAT_183090358 * 0x315686d3678dcd15 ^ _DAT_1830903c0) + uVar3;
  _DAT_1830904b8 = _DAT_183090358 ^ _DAT_1830903c0;
  _DAT_183090568 = 0x7c;
  uVar3 = _DAT_1830905c0 * 0x2000 ^ _DAT_1830905c0;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830905a0 = func_0x000184b2de30((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_1830907e0 = (ulonglong)((~(uint)_DAT_1830905a0 & 0x7c) << 0xb);
  _DAT_183090768 = _DAT_183090768 ^ _DAT_1830907e0 ^ 0xc08717636e0325f1;
  _DAT_183090510 = (_DAT_183090510 * 0x3c148fcfce7ce359 ^ _DAT_183090768) + _DAT_1830907e0;
  _DAT_1830904b0 = _DAT_183090510 ^ _DAT_183090768;
  _DAT_1830906e8 = 0;
  uVar3 = (~_DAT_183090428 + 0x100) *
          ((_DAT_1830904e0 ^ 0x842223f2) + (ulonglong)((uint)_DAT_1830904e0 & 0x842223f2) * 2);
  uVar3 = (uVar3 | _DAT_183090800) + (uVar3 & _DAT_183090800);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830906a0 = func_0x000184b2de30((uVar3 | 0x8422230d) + (ulonglong)((uint)uVar3 & 0x8422230d))
  ;
  _DAT_1830904e8 = (_DAT_1830904e8 ^ _DAT_1830906a0 ^ 0xd7) + 0x28 ^ 0x67daa411326db330;
  _DAT_1830907b0 = (_DAT_1830907b0 * 0x281f5bc0ca30c0b7 ^ _DAT_1830904e8) + (_DAT_1830906a0 ^ 0xd7);
  _DAT_1830903c8 = _DAT_1830907b0 ^ _DAT_1830904e8;
  _DAT_1830907d0 = 0x28;
  _DAT_183090698 = func_0x000184b2de30(_DAT_1830905a8 ^ 0x230084b60021c1);
  _DAT_183090870 = _DAT_183090870 ^ _DAT_183090698 ^ 0x41063a50b8280cb7;
  _DAT_1830905c8 = (_DAT_1830905c8 * -0x6a2473d5c77495e7 ^ _DAT_183090870) + _DAT_183090698;
  _DAT_1830905a8 = _DAT_1830905c8 ^ _DAT_183090870;
  _DAT_183090638 = 0;
  _DAT_1830908c8 = func_0x000184b2de30(_DAT_183090348 ^ 0x1d0083ecffe1be);
  uVar3 = _DAT_1830908c8 >> 1 | _DAT_1830908c8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R14) + (uVar3 >> 2 & unaff_R14);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1830908c8) & 0x7fffffffffffffff;
  _DAT_183090778 = _DAT_183090808 ^ uVar3 ^ 0x30;
  _DAT_183090570 = (_DAT_183090570 ^ uVar3) + 0x30 ^ 0x41ac86d81b433515;
  _DAT_183090818 = (_DAT_183090818 * -0x52d4af25a1467cc7 ^ _DAT_183090570) + uVar3;
  _DAT_1830906b8 = _DAT_183090818 ^ _DAT_183090570;
  _DAT_183090390 = 0x30;
  uVar3 = (~_DAT_183090348 + 0x97) *
          ((_DAT_183090898 ^ 0x842223b3) + (ulonglong)((uint)_DAT_183090898 & 0x842223b3) * 2);
  uVar3 = (uVar3 | _DAT_1830907a0) + (uVar3 & _DAT_1830907a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830905e0 = func_0x000184b2de30((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_183090840 = _DAT_183090840 ^ _DAT_1830905e0 ^ 0x96 ^ 0xc176822b7d2f3628;
  _DAT_183090498 = (_DAT_183090498 * -0xa51fcca1b7b95f7 ^ _DAT_183090840) + (_DAT_1830905e0 ^ 0x96);
  _DAT_1830907a0 = _DAT_183090498 ^ _DAT_183090840;
  _DAT_1830907a8 = 0;
  uVar3 = (_DAT_183090320 ^ 0x84222315) + _DAT_183090540 + 0x84222315;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183090320 ^ 0x84222315;
  uVar7 = ((_DAT_183090540 + _DAT_183090320) * 0x2000 | _DAT_183090540 + _DAT_183090320 >> 0x33) ^
          _DAT_183090540;
  _DAT_183090508 =
       func_0x000184b2de30((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183090320 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183090540 + 0x84222315));
  uVar3 = _DAT_183090508 ^ 0x30;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_R14) + (uVar7 >> 2 & unaff_R14);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar3;
  _DAT_183090760 = _DAT_1830904a0 ^ uVar3 ^ 0x30;
  _DAT_183090658 = (_DAT_183090658 ^ uVar3) + 0x30 ^ 0x69aeb2a3a0d14104;
  _DAT_183090570 = (_DAT_183090570 * 0x1b8e9110d395d7f7 ^ _DAT_183090658) + uVar3;
  _DAT_183090348 = _DAT_183090570 ^ _DAT_183090658;
  bVar1 = *(byte *)(unaff_RBP + 0x90);
  auVar5._4_4_ = 0;
  auVar5._0_4_ = bVar1 ^ 0x84222325;
  auVar5._8_8_ = 0x30;
  auVar5 = pshufb(auVar5 ^ _DAT_1802e8470,_DAT_1800170c0);
  _DAT_1830906a0 = 0x30;
  uVar7 = auVar5._8_8_ + auVar5._0_8_;
  uVar3 = uVar7 + _DAT_183090488;
  if (auVar5._4_4_ < 0) {
    uVar3 = _DAT_183090448 ^ uVar7;
  }
  _DAT_183090430 = func_0x000184b2de30(uVar3);
  uVar3 = _DAT_183090430 << 0x3d | _DAT_183090430 >> 3;
  uVar4 = (ulonglong)(uint)bVar1 | 0x30;
  _DAT_1830904c8 = (_DAT_1830904c8 ^ uVar3) + uVar4 ^ 0xf43cb415e06d752;
  _DAT_1830903b0 = (_DAT_1830903b0 * -0x72abc606693d8c41 ^ _DAT_1830904c8) + uVar3;
  _DAT_1830905c0 = _DAT_1830903b0 ^ _DAT_1830904c8;
  uVar3 = ~_DAT_183090390 * ((in_RAX ^ 0x84222325 ^ uVar4) + ((in_RAX ^ 0x84222325) & uVar4) * 2);
  uVar3 = (uVar3 | _DAT_183090838) + (uVar3 & _DAT_183090838);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183090648 = uVar4;
  _DAT_183090828 =
       func_0x000184b2de30((in_RAX ^ 0xffffffff7bdddcda | uVar3) +
                           (uVar3 & (in_RAX ^ 0xffffffff7bdddcda)));
  uVar10 = (uint)(in_RAX >> 0x20);
  auVar2._8_4_ = (int)in_RAX;
  auVar2._0_8_ = in_RAX;
  auVar2._12_4_ = uVar10;
  uVar6 = SUB168(auVar2 ^ _DAT_18001a710,0);
  uVar8 = SUB164(auVar2 ^ _DAT_18001a710,0);
  lVar9 = ((in_RAX & 0xffffffff) * (ulonglong)_DAT_1802e84f0 +
           (ulonglong)uVar10 * (ulonglong)unaff_XMM9_Da << 0x20) +
          (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM9_Da;
  uVar7 = -in_RAX ^ _DAT_183090828;
  uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R14) + (uVar3 >> 2 & unaff_R14);
  uVar7 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar7;
  _DAT_1830906c0 =
       ((((in_RAX & 0xffffffff) * (ulonglong)_DAT_1802e84b0 +
          (in_RAX >> 0x20) * (ulonglong)_DAT_1802e84a0 << 0x20) +
         (in_RAX & 0xffffffff) * (ulonglong)_DAT_1802e84a0 +
         ((in_RAX & 0xffffffff) * (ulonglong)_DAT_1802e8490 +
          (in_RAX >> 0x20) * (ulonglong)_DAT_1802e8480 << 0x20) +
         (in_RAX & 0xffffffff) * (ulonglong)_DAT_1802e8480 + lVar9 +
        (ulonglong)uVar8 * (ulonglong)unaff_XMM7_Da +
        ((ulonglong)uVar8 * (ulonglong)_DAT_1802e84d0 + (uVar6 >> 0x20) * (ulonglong)unaff_XMM7_Da
        << 0x20)) -
       (((in_RAX & 0xffffffff) * (ulonglong)_DAT_1802e8530 +
         (in_RAX >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM15_Da +
        ((in_RAX & 0xffffffff) * (ulonglong)_DAT_1802e8510 +
         (in_RAX >> 0x20) * (ulonglong)unaff_XMM11_Da << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM11_Da + lVar9 +
       (ulonglong)uVar8 * (ulonglong)unaff_XMM10_Da +
       ((ulonglong)uVar8 * (ulonglong)_DAT_1802e8550 + (uVar6 >> 0x20) * (ulonglong)unaff_XMM10_Da
       << 0x20))) + 0x238d117a261d4cf1;
  _DAT_1830904b8 = _DAT_183090368 ^ uVar7 ^ _DAT_1830906c0;
  _DAT_1830903f8 = (_DAT_1830903f8 ^ uVar7) + _DAT_1830906c0 ^ 0x6ebfe5cc63790734;
  _DAT_183090788 = (_DAT_183090788 * -0x4e8f139e3442cd9 ^ _DAT_1830903f8) + uVar7;
  _DAT_1830906f8 = _DAT_183090788 ^ _DAT_1830903f8;
  *(char *)(unaff_RBP + -0x50 + _DAT_1830906c0) = (char)uVar4;
  switch(*(uint *)(unaff_RBP + 0x38) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b07a90 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b07a90(void)

{
  byte bVar1;
  longlong in_RAX;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  
  *(uint *)(unaff_RBP + 0x40) = unaff_ESI;
  *(char *)(unaff_RBP + 0x90) = (char)unaff_ESI + (char)((ulonglong)unaff_ESI / 10) * -10;
  _DAT_183090490 = func_0x000184b2de30(_DAT_183090398 + 0xffdcff7bfb001dff ^ 0xd0);
  uVar2 = (ulonglong)((uint)~((int)_DAT_183090490 * 2) >> 1 & 0x39) << 0x34;
  _DAT_1830904d0 = (_DAT_1830904d0 ^ uVar2) + 0x39 ^ 0x89d8ddb0422a6cbf;
  _DAT_1830906a8 = (_DAT_1830906a8 * 0x73d6fd73f7183569 ^ _DAT_1830904d0) + uVar2;
  _DAT_183090670 = _DAT_1830906a8 ^ _DAT_1830904d0;
  _DAT_183090460 = 0x39;
  uVar2 = (~_DAT_183090658 + 0xdb) *
          ((_DAT_183090718 ^ 0x84222336) + (ulonglong)((uint)_DAT_183090718 & 0x84222336) * 2);
  uVar2 = (uVar2 | _DAT_183090398) + (uVar2 & _DAT_183090398);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183090388 = func_0x000184b2de30((uVar2 | 0x842223ec) + (ulonglong)((uint)uVar2 & 0x842223ec))
  ;
  _DAT_1830905c0 = (_DAT_1830905c0 ^ _DAT_183090388) + 0xc9 ^ 0x18bd7868c136d6f;
  _DAT_183090738 = (_DAT_183090738 * 0x3e329c25aba983bb ^ _DAT_1830905c0) + _DAT_183090388;
  _DAT_183090500 = _DAT_183090738 ^ _DAT_1830905c0;
  _DAT_183090758 = 0xc9;
  uVar2 = (_DAT_183090520 ^ _DAT_1802e83f0) + _DAT_1830906f8 + 0x842223bc;
  uVar5 = (_DAT_1830906f8 ^ _UNK_1802e83f8) + _DAT_183090520 + 0x97;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183090520 ^ _DAT_1802e83f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830906f8 ^ _UNK_1802e83f8;
  _DAT_183090608 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183090520 + 0x97) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830906f8 + 0x842223bc));
  uVar2 = _DAT_183090608 - (_DAT_183090608 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183090608;
  uVar2 = uVar5 >> 1 | uVar5;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar5;
  uVar2 = uVar5 << 0x26 | uVar5 >> 0x1a;
  _DAT_183090810 = _DAT_183090538 ^ uVar2 ^ 0x130;
  _DAT_1830908f0 = (_DAT_1830908f0 ^ uVar2) + 0x130 ^ 0xafe5ef7bfef63d33;
  _DAT_1830903a0 = (_DAT_1830903a0 * -0x2576566b68146d53 ^ _DAT_1830908f0) + uVar2;
  _DAT_183090858 = _DAT_1830903a0 ^ _DAT_1830908f0;
  _DAT_183090388 = 0x30;
  _DAT_183090578 = func_0x000184b2de30(_DAT_1830904f8 + 0x20ff7bc60021ff ^ 0xb4);
  uVar2 = (_DAT_183090578 ^ 0x7f) * 0x453eaad88f192f07;
  _DAT_1830908d8 = _DAT_183090708 ^ uVar2 ^ 0x8f;
  _DAT_183090408 = (_DAT_183090408 ^ uVar2) + 0x8f ^ 0x83d81253dd0ccdc8;
  _DAT_183090410 = (_DAT_183090410 * -0x77cdda71f6d475e1 ^ _DAT_183090408) + uVar2;
  _DAT_1830905a8 = _DAT_183090410 ^ _DAT_183090408;
  _DAT_1830906f0 = 0x8f;
  uVar2 = (~_DAT_1830904a8 + 0xa2) *
          ((_DAT_183090660 ^ 0x842223aa) + (ulonglong)((uint)_DAT_183090660 & 0x842223aa) * 2);
  uVar2 = (uVar2 | _DAT_183090718) + (uVar2 & _DAT_183090718);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183090798 = func_0x000184b2de30((uVar2 | 0x8422230b) + (ulonglong)((uint)uVar2 & 0x8422230b))
  ;
  uVar2 = (_DAT_183090798 ^ 0xaf) & 0x7fffffffff ^ 0xa1;
  _DAT_1830908f0 = _DAT_1830903a8 ^ uVar2 ^ 0x130;
  _DAT_183090570 = (_DAT_183090570 ^ uVar2) + 0x130 ^ 0x6b26ca20979793b8;
  _DAT_183090790 = (_DAT_183090790 * 0x5d287bdb4659cfd ^ _DAT_183090570) + uVar2;
  _DAT_183090720 = 0x30;
  uVar2 = (_DAT_183090588 ^ _DAT_1802e8400) + _DAT_1830906f0 + 0x84222325;
  uVar5 = (_DAT_1830906f0 ^ _UNK_1802e8408) + _DAT_183090588 + 0x20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183090588 ^ _DAT_1802e8400;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830906f0 ^ _UNK_1802e8408;
  _DAT_183090798 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183090588 + 0x20) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830906f0 + 0x84222325));
  _DAT_183090878 = (_DAT_183090878 ^ _DAT_183090798) - 0x20 ^ 0x3dc79f6be7414a5c;
  _DAT_1830907f8 = (_DAT_1830907f8 * 0x1d140b70f6230e3f ^ _DAT_183090878) + _DAT_183090798;
  _DAT_1830903d0 = _DAT_1830907f8 ^ _DAT_183090878;
  _DAT_1830906f0 = 0xe0;
  uVar2 = (~_DAT_183090430 + 0xe1) *
          ((_DAT_1830904c0 ^ 0x84222375) + (ulonglong)((uint)_DAT_1830904c0 & 0x84222375) * 2);
  uVar2 = (uVar2 | _DAT_183090478) + (uVar2 & _DAT_183090478);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183090750 = func_0x000184b2de30((uVar2 | 0x84222395) + (ulonglong)((uint)uVar2 & 0x84222395))
  ;
  uVar2 = (ulonglong)(~(uint)_DAT_183090750 & 0x50);
  _DAT_1830904e8 = _DAT_183090580 ^ uVar2 ^ 0x130;
  _DAT_183090860 = (_DAT_183090860 ^ uVar2) + 0x130 ^ 0x3677fb11c1f0948d;
  _DAT_183090420 = (_DAT_183090420 * 0x428925d39dfd857f ^ _DAT_183090860) + uVar2;
  _DAT_183090840 = _DAT_183090420 ^ _DAT_183090860;
  _DAT_183090600 = _DAT_183090580 ^ 0x130;
  _DAT_183090858 = 0x30;
  _DAT_1830904c8 = func_0x000184b2de30(_DAT_183090378 ^ 0xffdeff83b5001dd8);
  uVar2 = _DAT_1830904c8 - (_DAT_1830904c8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1830904c8) & 0x3fffffffff;
  _DAT_1830908a0 = _DAT_1830908a0 ^ uVar2 ^ 0x102;
  _DAT_1830904f8 = (_DAT_1830904f8 ^ uVar2) + 0x102 ^ 0xd45ed1659e9d264a;
  _DAT_183090860 = (_DAT_183090860 * -0x31bb05139b9e0b31 ^ _DAT_1830904f8) + uVar2;
  _DAT_183090378 = _DAT_183090860 ^ _DAT_1830904f8;
  _DAT_1830903f0 = 2;
  uVar2 = (_DAT_1830903e8 ^ _DAT_1802e8410) + _DAT_183090478 + 0x8422231c;
  uVar5 = (_DAT_183090478 ^ _UNK_1802e8418) + _DAT_1830903e8 + 0xc9;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830903e8 ^ _DAT_1802e8410;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183090478 ^ _UNK_1802e8418;
  _DAT_183090668 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830903e8 + 0xc9) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183090478 + 0x8422231c));
  uVar2 = _DAT_183090668 ^ 0xf9;
  uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar2) &
          0x7fffffffffffffff;
  _DAT_183090858 = (_DAT_183090858 ^ uVar2) + 0xf0 ^ 0x8baf02406d8f36d0;
  _DAT_183090680 = (_DAT_183090680 * -0x413940de839a34e7 ^ _DAT_183090858) + uVar2;
  _DAT_183090330 = _DAT_183090680 ^ _DAT_183090858;
  _DAT_183090308 = 0xf0;
  uVar2 = func_0x000184b2de30(_DAT_183090500 ^ 0x21007c1b001dc7);
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar2;
  _DAT_1830908d0 = (uVar2 ^ 2) << 0x2e | uVar2 >> 0x12;
  _DAT_1830908f0 = _DAT_1830908f0 ^ _DAT_1830908d0 ^ 0x5853d227e1a40d25;
  _DAT_183090740 = (_DAT_183090740 * 0x4b6e69188ce2c399 ^ _DAT_1830908f0) + _DAT_1830908d0;
  _DAT_183090398 = _DAT_183090740 ^ _DAT_1830908f0;
  _DAT_183090570 = 0;
  uVar2 = (_DAT_1830904c8 ^ _DAT_1802e8420) + _DAT_1830905d8 + 0x8422231c;
  uVar5 = (_DAT_1830905d8 ^ _UNK_1802e8428) + _DAT_1830904c8 + 0xff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830904c8 ^ _DAT_1802e8420;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830905d8 ^ _UNK_1802e8428;
  _DAT_1830904b8 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830904c8 + 0xff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830905d8 + 0x8422231c));
  uVar2 = (ulonglong)((uint)_DAT_1830904b8 ^ 0xff) << 0x2c | _DAT_1830904b8 >> 0x14;
  _DAT_183090440 = (_DAT_183090440 ^ uVar2) + 0xc6 ^ 0xfc1f80373dcb9707;
  _DAT_1830908c8 = (_DAT_1830908c8 * 0x64df6777402dc301 ^ _DAT_183090440) + uVar2;
  _DAT_1830908a8 = _DAT_1830908c8 ^ _DAT_183090440;
  _DAT_1830907f0 = 0xc6;
  _DAT_183090758 = func_0x000184b2de30(_DAT_183090798 + 0x1d0083e3001dff ^ 0x3c);
  uVar2 = (_DAT_183090758 & 0x7fffffffffffffff) * 0x6ede6015e40763a7;
  _DAT_1830907e8 = _DAT_1830907e8 ^ uVar2 ^ 0x4ea2121231e020b8;
  _DAT_1830906d8 = (_DAT_1830906d8 * 0x102f65d4489ad75 ^ _DAT_1830907e8) + uVar2;
  _DAT_183090850 = _DAT_1830906d8 ^ _DAT_1830907e8;
  _DAT_1830903f8 = 0;
  uVar2 = ((_DAT_183090508 ^ 0x84222315) + (ulonglong)((uint)_DAT_183090508 & 0x84222315) * 2) *
          -_DAT_1830907b8;
  uVar2 = (uVar2 | _DAT_183090598) + (uVar2 & _DAT_183090598);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183090650 = func_0x000184b2de30((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = (ulonglong)(~(uint)_DAT_183090650 & 0x30);
  _DAT_1830904a0 = _DAT_1830903f8 ^ uVar2 ^ 0x30;
  _DAT_183090590 = (_DAT_183090590 ^ uVar2) + 0x30 ^ 0x2ae49aeeb9879b7f;
  _DAT_183090600 = (_DAT_183090600 * -0x1e7c35d4b4acc317 ^ _DAT_183090590) + uVar2;
  _DAT_1830908a0 = _DAT_183090600 ^ _DAT_183090590;
  bVar1 = *(byte *)(unaff_RBP + 0x90);
  auVar3._8_8_ = _UNK_180145388;
  auVar3._0_8_ = (ulonglong)bVar1 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_1802e8430,_DAT_1800170c0);
  _DAT_183090808 = 0x30;
  uVar5 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar5 + _DAT_183090590;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_183090700 ^ uVar5;
  }
  _DAT_183090690 = func_0x000184b2de30(SUB161(auVar3 ^ _DAT_1802e8430,5) ^ uVar2);
  _DAT_183090580 = (ulonglong)bVar1 | 0x30;
  _DAT_1830903c8 =
       (_DAT_1830903c8 ^ _DAT_183090690 & 0x7fffffffffffffff) + _DAT_183090580 ^ 0x7eb38f5a0e0a934;
  _DAT_183090380 =
       (_DAT_183090380 * -0x777d8c2425a63c67 ^ _DAT_1830903c8) +
       (_DAT_183090690 & 0x7fffffffffffffff);
  _DAT_1830906a8 = _DAT_183090380 ^ _DAT_1830903c8;
  *(char *)(in_RAX + -1) = (char)_DAT_183090580;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b08965 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184b08e53 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184b08965(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong unaff_RBP;
  ulonglong uVar18;
  ulonglong unaff_R14;
  ulonglong uVar19;
  uint uVar21;
  uint uVar22;
  undefined1 auVar20 [16];
  uint uVar23;
  undefined1 auVar24 [16];
  uint uVar25;
  undefined1 auVar26 [16];
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar15 = uVar1 ^ 0x84222325;
  plVar2 = *(longlong **)(unaff_RBP + 0x50);
  uVar18 = (unaff_R14 - _DAT_1830903b8) *
           ((_DAT_183090500 ^ uVar15) + (uVar15 & _DAT_183090500) * 2);
  uVar18 = (uVar18 | _DAT_183090880) + (uVar18 & _DAT_183090880);
  uVar18 = uVar18 * 0x2000 ^ uVar18;
  uVar18 = uVar18 >> 7 ^ uVar18;
  uVar18 = uVar18 << 0x11 ^ uVar18;
  _DAT_183090480 =
       func_0x000184b2de30((uVar15 ^ unaff_R14 | uVar18) + (uVar18 & (uVar15 ^ unaff_R14)));
  uVar14 = _DAT_1802e87d0;
  uVar21 = (uint)(uVar1 >> 0x20);
  auVar26._8_4_ = (int)uVar1;
  auVar26._0_8_ = uVar1;
  auVar26._12_4_ = uVar21;
  uVar22 = (uint)(unaff_R14 >> 0x20);
  auVar24._8_4_ = (int)unaff_R14;
  auVar24._0_8_ = unaff_R14;
  auVar24._12_4_ = uVar22;
  uVar15 = (ulonglong)_DAT_1802e8750;
  auVar20 = auVar26 ^ auVar24;
  uVar10 = (ulonglong)_DAT_1802e8740;
  uVar18 = (ulonglong)_DAT_1802e8740;
  uVar3 = (ulonglong)_DAT_1802e8770;
  uVar11 = (ulonglong)_DAT_1802e8760;
  uVar4 = (ulonglong)_DAT_1802e8760;
  uVar5 = (ulonglong)_DAT_1802e87a0;
  uVar25 = SUB164(auVar26 & auVar24,0);
  uVar6 = (ulonglong)_DAT_1802e8790;
  uVar27 = SUB168(auVar26 & auVar24,0);
  uVar12 = (ulonglong)_DAT_1802e8790;
  uVar7 = (ulonglong)_DAT_1802e87c0;
  uVar23 = SUB164(auVar26 | auVar24,0);
  uVar8 = (ulonglong)_DAT_1802e87b0;
  uVar28 = SUB168(auVar26 | auVar24,0);
  uVar13 = (ulonglong)_DAT_1802e87b0;
  uVar9 = (ulonglong)_DAT_1802e87e0;
  *(undefined1 (*) [16])(unaff_RBP + 0x40) = auVar20;
  auVar30._8_4_ = 0xffffffff;
  auVar30._0_8_ = 0xffffffffffffffff;
  auVar30._12_4_ = 0xffffffff;
  uVar29 = SUB164(auVar30 ^ auVar26,0);
  uVar19 = SUB168(auVar30 ^ auVar26,0);
  uVar16 = uVar1 * unaff_R14 ^ _DAT_183090480;
  uVar16 = uVar16 << 0x15 | uVar16 >> 0x2b;
  _DAT_183090630 =
       (((ulonglong)_DAT_1802e8780 * (ulonglong)uVar29 +
         ((ulonglong)_DAT_1802e87f0 * (ulonglong)uVar29 +
          (uVar19 >> 0x20) * (ulonglong)_DAT_1802e8780 << 0x20) +
        (ulonglong)uVar14 * (ulonglong)auVar20._0_4_ +
        (uVar9 * auVar20._0_4_ + (auVar20._0_8_ >> 0x20) * (ulonglong)uVar14 << 0x20) +
        uVar8 * uVar23 + (uVar7 * uVar23 + (uVar28 >> 0x20) * uVar13 << 0x20) +
        uVar6 * uVar25 + (uVar5 * uVar25 + (uVar27 >> 0x20) * uVar12 << 0x20) +
        (uVar3 * (unaff_R14 & 0xffffffff) + uVar4 * uVar22 << 0x20) +
        (unaff_R14 & 0xffffffff) * uVar11 +
        (uVar15 * (uVar1 & 0xffffffff) + uVar18 * uVar21 << 0x20) + (uVar1 & 0xffffffff) * uVar10) -
       ((ulonglong)uVar29 * (_DAT_1802e8860 & 0xffffffff) +
        ((ulonglong)_DAT_1802e88d0 * (ulonglong)uVar29 +
         (uVar19 >> 0x20) * (_DAT_1802e8860 & 0xffffffff) << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 0x40) * (ulonglong)_DAT_1802e88b0 +
       ((ulonglong)_DAT_1802e88c0 * (ulonglong)*(uint *)(unaff_RBP + 0x40) +
        (auVar20._0_8_ >> 0x20) * (ulonglong)_DAT_1802e88b0 << 0x20) +
       (ulonglong)uVar23 * (ulonglong)_DAT_1802e8890 +
       ((ulonglong)_DAT_1802e88a0 * (ulonglong)uVar23 + (uVar28 >> 0x20) * (ulonglong)_DAT_1802e8890
       << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_1802e8870 +
       ((ulonglong)_DAT_1802e8880 * (ulonglong)uVar25 + (uVar27 >> 0x20) * (ulonglong)_DAT_1802e8870
       << 0x20) +
       ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1802e8850 +
        (ulonglong)uVar22 * (ulonglong)_DAT_1802e8840 << 0x20) +
       (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1802e8840 +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_1802e8830 +
        (ulonglong)uVar21 * (ulonglong)_DAT_1802e8820 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_1802e8820)) + 0x5fbfdb83a2e90161;
  _DAT_1830906e8 = _DAT_183090630 ^ uVar16;
  _DAT_1830908c8 = (_DAT_1830908c8 ^ uVar16) + _DAT_183090630 ^ 0x6720ed1cf166c2a1;
  _DAT_183090418 = (_DAT_183090418 * -0x300e4f205dfc1af9 ^ _DAT_1830908c8) + uVar16;
  _DAT_1830906e0 = _DAT_183090418 ^ _DAT_1830908c8;
  lVar17 = unaff_RBP + -0x30;
  FUN_18414b520(lVar17);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar17 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 0x20),lVar17);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x4b152d3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b152d3(void)

{
  uint uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(bool *)(unaff_RBP + 0x90) = *(longlong *)(unaff_RBP + 0x10) == 0;
  uVar4 = (_DAT_1830907b8 ^ _DAT_1802e7de0) + _DAT_183090810 + 0xa0c7a6a5;
  uVar5 = (_DAT_183090810 ^ _UNK_1802e7de8) + _DAT_1830907b8 + 0x92db9a48;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830907b8 ^ _DAT_1802e7de0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183090810 ^ _UNK_1802e7de8;
  _DAT_183090848 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830907b8 + 0x92db9a48) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183090810 + 0xa0c7a6a5));
  uVar4 = _DAT_183090848 >> 1 | _DAT_183090848;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & unaff_RBX);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183090848;
  uVar4 = uVar5 - (uVar5 >> 1 & unaff_RBX);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar5) <<
          9 | uVar5 >> 0x37;
  _DAT_1830905d0 = (_DAT_1830905d0 ^ uVar4) + 0xb63e1fc8 ^ 0xc8a5abda680d4bc1;
  _DAT_1830904b8 = (_DAT_1830904b8 * 0x311fe8bc7412e6d3 ^ _DAT_1830905d0) + uVar4;
  _DAT_1830904f0 = _DAT_1830904b8 ^ _DAT_1830905d0;
  _DAT_183090398 = 0xb63e1fc8;
  _DAT_183090888 = func_0x000184b2de30(_DAT_183090718 + 0xff240015e4003effU ^ 0xd7);
  uVar4 = (_DAT_183090888 & 0x7fffffffffffffff) -
          ((_DAT_183090888 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183090888 & 0x7fffffffffffffff;
  _DAT_183090468 = (_DAT_183090468 ^ uVar4) - 0x6fe3cfc1 ^ 0xf5cd35859dc8c3cb;
  _DAT_183090378 = (_DAT_183090378 * -0x602b951f0b1989ff ^ _DAT_183090468) + uVar4;
  _DAT_183090310 = _DAT_183090378 ^ _DAT_183090468;
  _DAT_1830905b8 = 0x901c303f;
  _DAT_183090898 = func_0x000184b2de30(_DAT_183090338 + 0xffef005b0500c0ff ^ 0x56);
  _DAT_183090590 = _DAT_183090500 ^ _DAT_183090648 ^ 0x6fe4cfc0;
  _DAT_183090490 = (_DAT_183090490 ^ _DAT_183090648) + 0x6fe4cfc0 ^ 0x1a40c6f2d83eb08;
  _DAT_183090478 = (_DAT_183090478 * -0x5369e0abac0dd1cb ^ _DAT_183090490) + _DAT_183090648;
  _DAT_1830903e0 = _DAT_183090478 ^ _DAT_183090490;
  _DAT_183090310 = 0x6fe4cfc0;
  uVar4 = (_DAT_1830908d0 ^ _DAT_1802e7df0) + _DAT_183090550 + 0xebc6ece5;
  uVar5 = (_DAT_183090550 ^ _UNK_1802e7df8) + _DAT_1830908d0 + 0x901c303f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830908d0 ^ _DAT_1802e7df0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183090550 ^ _UNK_1802e7df8;
  _DAT_1830908e8 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830908d0 + 0x901c303f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183090550 + 0xebc6ece5));
  uVar4 = (ulonglong)(~(uint)_DAT_1830908e8 & 0x6fe4cfc0);
  _DAT_1830903e8 = _DAT_183090630 ^ uVar4 ^ 0x10000ffff;
  _DAT_183090370 = (_DAT_183090370 ^ uVar4) + 0x10000ffff ^ 0x6e7849989b6a84df;
  _DAT_1830905d0 = (_DAT_1830905d0 * -0x2698af46bdc34819 ^ _DAT_183090370) + uVar4;
  _DAT_183090790 = _DAT_1830905d0 ^ _DAT_183090370;
  _DAT_1830905f0 = 0xffff;
  _DAT_1830903c8 = func_0x000184b2de30(_DAT_183090528 + 0xff63003bdcff6dff ^ 0xf1);
  _DAT_1830906a8 = (_DAT_1830906a8 ^ _DAT_1830903c8 ^ 0xd8ccc000) - 0xd8ccc000 ^ 0x1c0d019498407cb8;
  _DAT_1830905c8 =
       (_DAT_1830905c8 * -0x597942c391985bc1 ^ _DAT_1830906a8) + (_DAT_1830903c8 ^ 0xd8ccc000);
  _DAT_1830906e0 = _DAT_1830905c8 ^ _DAT_1830906a8;
  _DAT_183090300 = 0x27334000;
  _DAT_183090370 = func_0x000184b2de30(_DAT_183090600 + 0x14005cd5ff51ffU ^ 0x6e);
  uVar4 = _DAT_183090370 << 0x2e | (_DAT_183090370 & 0xffffffffff) >> 0x12;
  _DAT_183090450 = _DAT_183090480 ^ uVar4 ^ 0xd8cdbfff;
  _DAT_183090498 = (_DAT_183090498 ^ uVar4) + 0xd8cdbfff ^ 0x91c1adabd40d7b2f;
  _DAT_1830906d8 = (_DAT_1830906d8 * -0x7d4e634aa7ed1129 ^ _DAT_183090498) + uVar4;
  _DAT_1830904f8 = _DAT_1830906d8 ^ _DAT_183090498;
  _DAT_183090800 = 0xd8cdbfff;
  uVar4 = (~_DAT_1830907f0 + 0x27334001) *
          ((_DAT_183090728 ^ 0x5cef9cda) + (ulonglong)((uint)_DAT_183090728 & 0x5cef9cda) * 2);
  uVar4 = (uVar4 | _DAT_183090710) + (uVar4 & _DAT_183090710);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183090620 = func_0x000184b2de30((uVar4 | 0x7bdcdcda) + (ulonglong)((uint)uVar4 & 0x7bdcdcda))
  ;
  uVar4 = _DAT_183090620 << 0x21 | _DAT_183090620 >> 0x1f;
  _DAT_1830906e0 = _DAT_1830906a8 ^ uVar4 ^ 0x10000ffff;
  _DAT_1830905f0 = (_DAT_1830905f0 ^ uVar4) + 0x10000ffff ^ 0x48227b4f07cd9fc;
  _DAT_1830905f8 = (_DAT_1830905f8 * 0x3ad65adb0118ca59 ^ _DAT_1830905f0) + uVar4;
  _DAT_183090388 = _DAT_1830905f8 ^ _DAT_1830905f0;
  _DAT_183090450 = 0xffff;
  _DAT_183090828 = func_0x000184b2de30(_DAT_1830908e8 + 0x49ff92dcffe2ffU ^ 0x2b);
  _DAT_183090378 = (_DAT_183090378 ^ _DAT_1830903c0) - 0xf1416d00 ^ 0xe29214b1a95c4841;
  _DAT_183090578 = (_DAT_183090578 * -0x4d9ce39e39e29667 ^ _DAT_183090378) + _DAT_1830903c0;
  _DAT_1830906d0 = _DAT_183090578 ^ _DAT_183090378;
  _DAT_183090320 = 0xebe9300;
  uVar4 = (~_DAT_1830904d8 + 0xf1416d01) *
          ((_DAT_183090478 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183090478 & 0x8422dcda) * 2);
  uVar4 = (uVar4 | _DAT_183090308) + (uVar4 & _DAT_183090308);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183090618 = func_0x000184b2de30((uVar4 | 0x7563b1da) + (ulonglong)((uint)uVar4 & 0x7563b1da))
  ;
  uVar4 = _DAT_183090618 << 0xe | _DAT_183090618 >> 0x32;
  _DAT_183090350 = _DAT_183090840 ^ uVar4 ^ 0xf1426cff;
  _DAT_1830904d0 = (_DAT_1830904d0 ^ uVar4) + 0xf1426cff ^ 0x8bfb3b6968aac2f3;
  _DAT_183090528 = (_DAT_183090528 * 0x62713c2406952f59 ^ _DAT_1830904d0) + uVar4;
  _DAT_183090820 = _DAT_183090528 ^ _DAT_1830904d0;
  _DAT_183090668 = 0xf1426cff;
  uVar4 = (_DAT_1830904e0 ^ _DAT_1802e7e00) + _DAT_183090538 + 0x75604fda;
  uVar5 = (_DAT_183090538 ^ _UNK_1802e7e08) + _DAT_1830904e0 + 0xebe9300;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830904e0 ^ _DAT_1802e7e00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183090538 ^ _UNK_1802e7e08;
  _DAT_183090810 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830904e0 + 0xebe9300) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183090538 + 0x75604fda));
  uVar4 = (_DAT_183090810 ^ 0xde53bcbfbd86d00) & 0xfffffffffffffff;
  _DAT_1830903c0 = _DAT_183090438 ^ uVar4 ^ 0x10000ffff;
  _DAT_183090838 = (_DAT_183090838 ^ uVar4) + 0x10000ffff ^ 0xd693b8c7845413bb;
  _DAT_183090410 = (_DAT_183090410 * 0x1b7d586792cce7e1 ^ _DAT_183090838) + uVar4;
  _DAT_183090748 = _DAT_183090410 ^ _DAT_183090838;
  _DAT_183090318 = 0xffff;
  uVar4 = (~_DAT_183090748 + 0xb63e1fc9) *
          ((_DAT_183090388 ^ 0x79fff878) + (ulonglong)((uint)_DAT_183090388 & 0x79fff878) * 2);
  uVar4 = (uVar4 | _DAT_1830903c0) + (uVar4 & _DAT_1830903c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183090440 = func_0x000184b2de30((uVar4 | 0xcfc1e7b0) + (ulonglong)((uint)uVar4 & 0xcfc1e7b0))
  ;
  uVar4 = _DAT_183090440 & 0x7fffffffffffffff;
  _DAT_1830906d8 = _DAT_1830904e0 ^ uVar4 ^ 0x1b41bfb25;
  _DAT_183090300 = (_DAT_183090300 ^ uVar4) + 0x1b41bfb25 ^ 0xbbca2c45c517bf91;
  _DAT_183090870 = (_DAT_183090870 * -0x14d9369ac16dac6f ^ _DAT_183090300) + uVar4;
  _DAT_183090758 = _DAT_183090870 ^ _DAT_183090300;
  _DAT_1830907a8 = 0xb41bfb25;
  uVar4 = (~_DAT_183090758 + 0xb63e1fc9) *
          ((_DAT_1830908f0 ^ 0x79fff878) + (ulonglong)((uint)_DAT_1830908f0 & 0x79fff878) * 2);
  uVar4 = (uVar4 | _DAT_1830905d8) + (uVar4 & _DAT_1830905d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1830908f8 = func_0x000184b2de30((uVar4 | 0xcfc1e7b0) + (ulonglong)((uint)uVar4 & 0xcfc1e7b0))
  ;
  uVar4 = _DAT_1830908f8 << 0x3c | _DAT_1830908f8 >> 4;
  _DAT_1830906b0 = (_DAT_1830906b0 ^ uVar4) + 0x4be3c495 ^ 0x537d14c5cd0b0c89;
  _DAT_1830906d8 = (_DAT_1830906d8 * 0x45f40d60524f4351 ^ _DAT_1830906b0) + uVar4;
  _DAT_1830906c0 = _DAT_1830906d8 ^ _DAT_1830906b0;
  _DAT_183090370 = _DAT_1830905c8 ^ 0x4be3c495;
  _DAT_183090860 = 0x4be3c495;
  _DAT_183090370 = func_0x000184b2de30(_DAT_1830903f8 ^ 0x30ff5b200016d8);
  uVar4 = (_DAT_183090370 ^ 0x4be3c495) & 0x7fffffffffffffff;
  _DAT_1830908a8 = _DAT_1830908e0 ^ uVar4 ^ 0xb41bfb25;
  _DAT_183090318 = (_DAT_183090318 ^ uVar4) + 0xb41bfb25 ^ 0x416194bb907da618;
  _DAT_1830904e8 = (_DAT_1830904e8 * 0x7fb4b396ddbf5ced ^ _DAT_183090318) + uVar4;
  _DAT_183090380 = _DAT_1830904e8 ^ _DAT_183090318;
  _DAT_183090738 = 0xb41bfb25;
  _DAT_183090480 = func_0x000184b2de30(_DAT_1830904e8 + 0xffe2ff7c230021ff ^ 0x84);
  _DAT_183090338 = (_DAT_183090480 ^ 0xb41b0000) >> 10 & 0xffffffffffffffc0;
  _DAT_1830904f0 = _DAT_1830904f0 ^ _DAT_183090338 ^ 0xc26d146f02d71348;
  _DAT_183090400 = (_DAT_183090400 * 0x31272251abed5a9 ^ _DAT_1830904f0) + _DAT_183090338;
  _DAT_183090678 = _DAT_183090400 ^ _DAT_1830904f0;
  _DAT_183090390 = 0;
  uVar4 = ((_DAT_1830904a0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1830904a0 & 0x8422dcda) * 2) *
          -_DAT_1830907a0;
  uVar4 = (uVar4 | _DAT_1830903b8) + (uVar4 & _DAT_1830903b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1830903e0 = func_0x000184b2de30((uVar4 | 0x8422dcda) + (ulonglong)((uint)uVar4 & 0x8422dcda))
  ;
  uVar4 = _DAT_1830903e0 & 0x1fffffffff;
  _DAT_183090468 = _DAT_183090318 ^ uVar4 ^ 0xffff;
  _DAT_183090310 = (_DAT_183090310 ^ uVar4) + 0xffff ^ 0x7cd42948b4f2d4a1;
  _DAT_183090420 = (_DAT_183090420 * -0xc378257ce2e5543 ^ _DAT_183090310) + uVar4;
  _DAT_1830907a0 = _DAT_183090420 ^ _DAT_183090310;
  _DAT_183090590 = 0xffff;
  uVar4 = (_DAT_183090510 ^ _DAT_1802e7e10) + _DAT_183090618 + 0x79fff878;
  uVar5 = (_DAT_183090618 ^ _UNK_1802e7e18) + _DAT_183090510 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183090510 ^ _DAT_1802e7e10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183090618 ^ _UNK_1802e7e18;
  _DAT_1830906a0 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183090510 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183090618 + 0x79fff878));
  _DAT_1830907c0 = (_DAT_1830907c0 ^ _DAT_1830906a0) + 0x22224a2 ^ 0x9a393b0b93a09c0e;
  _DAT_183090580 = (_DAT_183090580 * 0x735f132ae44e7c37 ^ _DAT_1830907c0) + _DAT_1830906a0;
  _DAT_1830904e8 = _DAT_183090580 ^ _DAT_1830907c0;
  _DAT_1830908e8 = 0x22224a2;
  uVar4 = (_DAT_183090678 ^ _DAT_1802e7e20) + _DAT_183090588 + 0x79fff878;
  uVar5 = (_DAT_183090588 ^ _UNK_1802e7e28) + _DAT_183090678 + 0x22224a2;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183090678 ^ _DAT_1802e7e20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183090588 ^ _UNK_1802e7e28;
  _DAT_183090640 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183090678 + 0x22224a2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183090588 + 0x79fff878));
  uVar4 = (ulonglong)(~(uint)_DAT_183090640 & 0xfddddb5d);
  _DAT_183090798 = _DAT_183090798 ^ uVar4 ^ 0xac21181e9d4d4383;
  _DAT_183090538 = (_DAT_183090538 * 0x615944655cedaf01 ^ _DAT_183090798) + uVar4;
  _DAT_183090340 = _DAT_183090538 ^ _DAT_183090798;
  _DAT_183090358 = 0;
  uVar4 = (_DAT_183090598 ^ _DAT_1802e7e30) + _DAT_183090550 + 0x51faf878;
  uVar5 = (_DAT_183090550 ^ _UNK_1802e7e38) + _DAT_183090598 + 0xd5d8db5d;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183090598 ^ _DAT_1802e7e30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183090550 ^ _UNK_1802e7e38;
  _DAT_183090838 =
       func_0x000184b2de30((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183090598 + 0xd5d8db5d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183090550 + 0x51faf878));
  _DAT_1830903f8 = _DAT_1830903f8 ^ _DAT_183090838 * -0x454ebbd0959cee37 ^ 0xf0d856eda6dcc005;
  _DAT_1830905f0 =
       (_DAT_1830905f0 * -0x644f76f91ec280f5 ^ _DAT_1830903f8) +
       _DAT_183090838 * -0x454ebbd0959cee37;
  _DAT_1830906a8 = _DAT_1830905f0 ^ _DAT_1830903f8;
  _DAT_183090810 = 0;
  uVar4 = ((_DAT_183090430 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183090430 & 0x8422dcda) * 2) *
          -_DAT_183090778;
  uVar4 = (uVar4 | _DAT_183090318) + (uVar4 & _DAT_183090318);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183090840 = func_0x000184b2de30((uVar4 | 0x8422dcda) + (ulonglong)((uint)uVar4 & 0x8422dcda))
  ;
  uVar4 = _DAT_183090840 << 0x10 | _DAT_183090840 >> 0x30;
  _DAT_183090400 = _DAT_1830908f8 ^ uVar4 ^ 0xffff;
  _DAT_183090660 = (_DAT_183090660 ^ uVar4) + 0xffff ^ 0xeb256939517f3e6;
  _DAT_1830907a8 = (_DAT_1830907a8 * 0x54e6ac22bfce7e37 ^ _DAT_183090660) + uVar4;
  _DAT_183090538 = _DAT_1830907a8 ^ _DAT_183090660;
  _DAT_183090540 = 0xffff;
  uVar1 = *(uint *)(unaff_RBP + 0x40);
  auVar2._8_8_ = _UNK_1801098d8;
  auVar2._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar3 = pshufb(auVar2 ^ _DAT_1802e7e40,_DAT_1800170c0);
  uVar5 = auVar3._8_8_ + auVar3._0_8_;
  uVar4 = uVar5 + _DAT_183090678;
  if (auVar3._4_4_ < 0) {
    uVar4 = _DAT_183090400 ^ uVar5;
  }
  _DAT_183090410 = func_0x000184b2de30(SUB161(auVar2 ^ _DAT_1802e7e40,5) ^ uVar4);
  uVar4 = _DAT_183090410 - (_DAT_183090410 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183090410;
  _DAT_1830904f0 = (ulonglong)uVar1 & 0xffff;
  _DAT_1830908b8 = (_DAT_183090860 ^ uVar4) + _DAT_1830904f0 ^ 0x85c3131cf6f4afdb;
  _DAT_183090860 = (_DAT_183090860 * 0x66d4bcab685df331 ^ _DAT_1830908b8) + uVar4;
  _DAT_1830908b8 = _DAT_183090860 ^ _DAT_1830908b8;
  *(int *)(unaff_RBP + 0x70) = (int)_DAT_1830904f0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x90)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b166de -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b166de(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x50) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x50),*(undefined8 *)(unaff_RBP + 0x38));
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b19606 -----

undefined8 thunk_FUN_184b03f8c(void)

{
  longlong *unaff_R15;
  
  (**(code **)(unaff_R15 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x4b1964c -----

undefined8 thunk_FUN_184b03f8c(void)

{
  longlong *unaff_R15;
  
  (**(code **)(unaff_R15 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x4b19689 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b19689(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x50);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x4b19798 -----

undefined8 FUN_184b19798(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(unaff_RBX + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x4b1990f -----

void FUN_184b1990f(void)

{
  return;
}


// ----- block @ rva 0x4b30598 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b30598(void)

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


// ----- block @ rva 0x4b3073c -----

void FUN_184b3073c(void)

{
  return;
}


// ----- block @ rva 0x4b3142d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3142d(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b3147c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b3147c(void)

{
  int iVar1;
  longlong *unaff_RBP;
  undefined1 in_stack_00000048;
  undefined1 uStack0000000000000073;
  
  uStack0000000000000073 = in_stack_00000048;
  (**(code **)(unaff_RBP + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_RBP + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b32bce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b32bce(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(unaff_RBP + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b32f8a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b32f8a(void)

{
  char cVar1;
  code *in_RAX;
  longlong *unaff_RBP;
  
  (*in_RAX)();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBP + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b33c43 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_184b35086(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b345e5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_184b35086(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b3524f -----

undefined8 FUN_184b3524f(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->Throw /*0x68*/))();
  return 0;
}


// ----- block @ rva 0x4b396b1 -----

void FUN_184b396b1(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x4b3993e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3993e(void)

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


// ----- block @ rva 0x4b39992 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b39992(void)

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


// ----- block @ rva 0x4b399eb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b399eb(void)

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


// ----- block @ rva 0x4b39a81 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b39a81(void)

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


// ----- block @ rva 0x4b39d40 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b39d40(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  (*_DAT_1802ef3d8)();
  return;
}


// ----- block @ rva 0x4b39db6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b39db6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1802ef718)();
  return;
}


// ----- block @ rva 0x4b3a1f4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b3a1f4(void)

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


// ----- block @ rva 0x4b3a70b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3a70b(void)

{
  FUN_190ddfc90();
  (*_DAT_1802ef648)();
  return;
}


// ----- block @ rva 0x4b3a77d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3a77d(void)

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


// ----- block @ rva 0x4b3a7d1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3a7d1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1802ef2b8)();
  return;
}


// ----- block @ rva 0x4b3a805 -----

void FUN_184b3a805(void)

{
  return;
}


// ----- block @ rva 0x4b3a814 -----

void FUN_184b3a814(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4b3a98c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3a98c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1802ef7c8)();
  return;
}


// ----- block @ rva 0x4b3a9ab -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3a9ab(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000160;
  
  uStack0000000000000060 = in_stack_00000160;
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


// ----- block @ rva 0x4b3b6c1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3b6c1(void)

{
  (*_DAT_1802f0508)();
  return;
}


// ----- block @ rva 0x4b3b8bb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3b8bb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1802ef778)();
  return;
}


// ----- block @ rva 0x4b3b8dc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3b8dc(void)

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


// ----- block @ rva 0x4b3c926 -----

void FUN_184b3c926(void)

{
  return;
}


// ----- block @ rva 0x4b3cbf6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3cbf6(void)

{
  (*_DAT_1802f0688)();
  return;
}


// ----- block @ rva 0x4b3cff7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b3cff7(void)

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


// ----- block @ rva 0x4b3d0c3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b3d0c3(void)

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


// ----- block @ rva 0x4b3d464 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b3d464(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1802ef8a8)();
  return;
}


// ----- block @ rva 0x4b3d4ca -----

void FUN_184b3d4ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4b3d71f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184b3d775 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184b3d71f(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x4b4271a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184b42743 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184b4271a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x4b44011 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000184b440c1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_184b44011(void)

{
  longlong *unaff_RSI;
  undefined4 uStack000000000000015c;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined4 uStack00000000000001e0;
  
  uStack000000000000015c = 0x3a039208;
  rdtsc();
  uStack00000000000001d0 = 0x2d004f00530049;
  rdtsc();
  uStack00000000000001d8 = 0x39003500380038;
  rdtsc();
  uStack00000000000001e0 = 0x31002d;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x4b52d63 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b52d63(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4b52fd1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b52fd1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000154;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined4 uStack00000000000001c0;
  
  uStack0000000000000154 = 0x738a3eb6;
  rdtsc();
  uStack00000000000001b0 = 0x2d004f00530049;
  rdtsc();
  uStack00000000000001b8 = 0x39003500380038;
  rdtsc();
  uStack00000000000001c0 = 0x31002d;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
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


// ----- block @ rva 0x4b594cd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184b594cd(void)

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


// ----- block @ rva 0x4b59da0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b59da0(void)

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


// ----- block @ rva 0x4b5ab28 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184b5ab28(void)

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


// ----- block @ rva 0x4b5dc12 -----

void thunk_FUN_184b3f4ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x4b6035e -----

void FUN_184b6035e(void)

{
  return;
}

