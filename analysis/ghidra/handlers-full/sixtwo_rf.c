// ===== Lsixtwo/rf; _1efc495649140682cc8d6bb31bc652a4 ()V (handler @ image 184b3d610, runtime 6fffec74d610) =====

void FUN_184b3d610(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x128c7,0x2f4);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x128c7,0x2f4);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000184b3a989 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802ef760 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rf; valueOf (Ljava/lang/String;)Lsixtwo/rf; (handler @ image 184af7680, runtime 6fffec707680) =====

void FUN_184af7680(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x128c7,0x2f4);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000184af76c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e3b50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rf; values ()[Lsixtwo/rf; (handler @ image 184af7300, runtime 6fffec707300) =====

void FUN_184af7300(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x128c7,0x2f4);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000184af7347 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802e39f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



