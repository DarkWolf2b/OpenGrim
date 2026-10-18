// ===== Lsixtwo/al; _bf34f1a8893d163f659ad88c81e89d47 ()V (handler @ image 18fe538e0, runtime 6ffff7a638e0) =====

void FUN_18fe538e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fe539c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b3c7f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/al; bV (Lsixtwo/lC;)V (handler @ image 18fe3ee80, runtime 6ffff7a4ee80) =====

void FUN_18fe3ee80(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fe3eedf did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b37010 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/al; dk (DDLsixtwo/mA;)Z (handler @ image 18fe430f0, runtime 6ffff7a530f0) =====

void FUN_18fe430f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4a8d,0xea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fe43158 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b38a70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/al; oQ ()Lsixtwo/rk; (handler @ image 18fe43c40, runtime 6ffff7a53c40) =====

void FUN_18fe43c40(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fe43c60 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b38ed0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/al; oR ()Lsixtwo/rk; (handler @ image 18fe43e40, runtime 6ffff7a53e40) =====

void FUN_18fe43e40(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fe43e60 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b38fb0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/al; oS ()Lsixtwo/Y; (handler @ image 18fe44040, runtime 6ffff7a54040) =====

void FUN_18fe44040(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fe44060 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b39090 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/al; oT (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18fe44240, runtime 6ffff7a54240) =====

undefined8 FUN_18fe44240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/al; oU (IJ)I (handler @ image 18fe442d0, runtime 6ffff7a542d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe442d0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uRam000000018343c998 = func_0x00018fe4fb30(lRam000000018343cab0 + 0x5541257163bd4ee7U ^ 0x3b);
  uVar3 = (uRam000000018343c998 ^ 0x38ffeebfbfd5edd9) << 0xf |
          (uRam000000018343c998 ^ 0x38ffeebfbfd5edd9) >> 0x31;
  uRam000000018343cbb8 = (uRam000000018343cbb8 ^ uVar3) + 0x38ffeebfbfd5edd9 ^ 0xdd772d2a3f2238d7;
  uRam000000018343c8b0 = (uRam000000018343c8b0 * -0x71ef55c3af9fedb9 ^ uRam000000018343cbb8) + uVar3
  ;
  uRam000000018343c8c0 = uRam000000018343c8b0 ^ uRam000000018343cbb8;
  uRam000000018343cc30 = 0x38ffeebfbfd5edd9;
  uVar3 = (uRam000000018343c7a0 ^ _UNK_182b3b040) + uRam000000018343cce0 + 0x5e5bfe9bb72dacd6;
  uVar5 = (uRam000000018343cce0 ^ _UNK_182b3b048) + uRam000000018343c7a0 + 0x69b2432bcb421d18;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343c7a0 ^ _UNK_182b3b040;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018343cce0 ^ _UNK_182b3b048;
  uRam000000018343cc80 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018343c7a0 + 0x69b2432bcb421d18) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018343cce0 + 0x5e5bfe9bb72dacd6));
  uRam000000018343ca20 =
       (uRam000000018343ca20 ^ uRam000000018343cc80 ^ 0x4812420b03020d10) + 0x37e9bdb0f84d92eb ^
       0xdf069f565ee36862;
  uRam000000018343c998 =
       (uRam000000018343c998 * -0x2f6de6e443171c75 ^ uRam000000018343ca20) +
       (uRam000000018343cc80 ^ 0x4812420b03020d10);
  uRam000000018343ca48 = uRam000000018343c998 ^ uRam000000018343ca20;
  uRam000000018343ca98 = 0x37e9bdb0f84d92eb;
  uVar3 = (uRam000000018343c8e0 ^ _UNK_182b3b050) + uRam000000018343caa8 + 0x84222325;
  uVar5 = (uRam000000018343caa8 ^ _UNK_182b3b058) + uRam000000018343c8e0 + 0xf0ebc831bef5b500;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343c8e0 ^ _UNK_182b3b050;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018343caa8 ^ _UNK_182b3b058;
  uVar3 = func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) -
                              (uRam000000018343c8e0 + 0xf0ebc831bef5b500) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343caa8 + 0x84222325))
  ;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uRam000000018343cb80 = uVar5 + 0xf1437ce410a4b00 ^ 0xd38d84cf3ee27a95;
  uRam000000018343c8e0 =
       (uRam000000018343c8e0 * 0x125315cf3415ef15 ^ uRam000000018343cb80) + (uVar5 ^ uVar3);
  uRam000000018343cb20 = uRam000000018343c8e0 ^ uRam000000018343cb80;
  uRam000000018343ccd0 = 0xf1437ce410a4b00;
  uRam000000018343cb50 = func_0x00018fe4fb30(uRam000000018343cb00 ^ 0xcf56e4c9ba48b380);
  uVar3 = uRam000000018343cb50 ^ 0x7fff;
  uRam000000018343c9c8 = uRam000000018343cbb8 ^ uVar3 ^ 0xf0ebc831bef634ff;
  uRam000000018343c818 = (uRam000000018343c818 ^ uVar3) + 0xf0ebc831bef634ff ^ 0xae8ef8fd7d92be86;
  uRam000000018343c898 = (uRam000000018343c898 * 0x68177acfe3475b6b ^ uRam000000018343c818) + uVar3;
  uRam000000018343ca88 = uRam000000018343c898 ^ uRam000000018343c818;
  uRam000000018343c9c0 = 0xf0ebc831bef634ff;
  uVar3 = (uRam000000018343c890 ^ _UNK_182b3b060) + uRam000000018343cc30 + 0xf0ebc8313ad417da;
  uVar5 = (uRam000000018343cc30 ^ _UNK_182b3b068) + uRam000000018343c890 + 0xf1437ce410a4b00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343c890 ^ _UNK_182b3b060;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018343cc30 ^ _UNK_182b3b068;
  uRam000000018343c858 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018343c890 + 0xf1437ce410a4b00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018343cc30 + 0xf0ebc8313ad417da));
  uVar3 = (uRam000000018343c858 ^ 0xf0ebc831bef63400) & 0xfffffffffffffe00;
  uRam000000018343cb58 = uRam000000018343c750 ^ uVar3 ^ 0x7fff;
  uRam000000018343c9a8 = (uRam000000018343c9a8 ^ uVar3) + 0x7fff ^ 0x2b49392cd6bf9dd6;
  uRam000000018343cb70 = (uRam000000018343cb70 * 0x36ea163e3a52f303 ^ uRam000000018343c9a8) + uVar3;
  uRam000000018343ca10 = uRam000000018343cb70 ^ uRam000000018343c9a8;
  uRam000000018343c7e0 = 0x7fff;
  uVar3 = (~uRam000000018343c8c8 + 0xa6f8483955bb1c9a) *
          ((uRam000000018343c938 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018343c938 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018343c8e0) + (uVar3 & uRam000000018343c8e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343c858 =
       func_0x00018fe4fb30((uVar3 | 0xa6f84839d1993fbc) + (uVar3 & 0xa6f84839d1993fbc));
  uVar3 = uRam000000018343c858 >> 1 | uRam000000018343c858;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018343c858;
  uRam000000018343c9a0 = (uRam000000018343c9a0 ^ uVar3) + 0x5907b7c6aa44e367 ^ 0xdc8909bdbd7453ae;
  uRam000000018343ccc0 = (uRam000000018343ccc0 * -0x542661757568bb29 ^ uRam000000018343c9a0) + uVar3
  ;
  uRam000000018343c970 = uRam000000018343ccc0 ^ uRam000000018343c9a0;
  uRam000000018343c9b0 = 0x5907b7c6aa44e367;
  uVar3 = (uRam000000018343c988 ^ _UNK_182b3b070) + uRam000000018343c760 + 0x84225cda;
  uVar5 = (uRam000000018343c760 ^ _UNK_182b3b078) + uRam000000018343c988 + 0xa6f8483955bb1c99;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343c988 ^ _UNK_182b3b070;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018343c760 ^ _UNK_182b3b078;
  uRam000000018343cc68 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018343c988 + 0xa6f8483955bb1c99) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343c760 + 0x84225cda));
  uVar3 = uRam000000018343cc68 ^ 0x6366;
  uRam000000018343c9a0 = uRam000000018343c8a8 ^ uVar3 ^ 0xa6f8483955bb9c98;
  uRam000000018343c730 = (uRam000000018343c730 ^ uVar3) + 0xa6f8483955bb9c98 ^ 0x3b2dbeec9ea7e5f9;
  uRam000000018343cc58 = (uRam000000018343cc58 * -0x7dbc47daf9441779 ^ uRam000000018343c730) + uVar3
  ;
  uRam000000018343c908 = uRam000000018343cc58 ^ uRam000000018343c730;
  uRam000000018343cc38 = 0xa6f8483955bb9c98;
  uVar3 = (~uRam000000018343c9b0 + 0xbf1958973fc07221) *
          ((uRam000000018343cad0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018343cad0 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018343ca70) + (uVar3 & uRam000000018343ca70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343ccb0 =
       func_0x00018fe4fb30((uVar3 | 0xbf195897bbe25105) + (uVar3 & 0xbf195897bbe25105));
  uRam000000018343c760 =
       (uRam000000018343c760 ^ uRam000000018343ccb0 & 0x1fffffffffffffff) + 0x40e6a768c03f8de0 ^
       0x60ced5b582ba13b4;
  uRam000000018343c850 =
       (uRam000000018343c850 * 0x57e930efe7b2192d ^ uRam000000018343c760) +
       (uRam000000018343ccb0 & 0x1fffffffffffffff);
  uRam000000018343ccc8 = uRam000000018343c850 ^ uRam000000018343c760;
  uRam000000018343cc50 = 0x40e6a768c03f8de0;
  uVar3 = (uRam000000018343cca8 ^ _UNK_182b3b080) + uRam000000018343cbb0 + 0x84225cda;
  uVar5 = (uRam000000018343cbb0 ^ _UNK_182b3b088) + uRam000000018343cca8 + 0xbf1958973fc07220;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343cca8 ^ _UNK_182b3b080;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018343cbb0 ^ _UNK_182b3b088;
  uRam000000018343c9b0 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018343cca8 + 0xbf1958973fc07220) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343cbb0 + 0x84225cda));
  uVar3 = uRam000000018343c9b0 - (uRam000000018343c9b0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018343c9b0;
  uRam000000018343c910 =
       (uRam000000018343c740 ^ uVar3 ^ 0xbf1958973fc0f21f ^ uVar3) + 0xbf1958973fc0f21f ^
       0x4d12ea42dd5cdb3b;
  uRam000000018343cb50 = (uRam000000018343cb50 * -0x21c3dd66559ab2f5 ^ uRam000000018343c910) + uVar3
  ;
  uRam000000018343c8b0 = uRam000000018343cb50 ^ uRam000000018343c910;
  uRam000000018343cb10 = 0xbf1958973fc0f21f;
  uRam000000018343cb78 = func_0x00018fe4fb30(uRam000000018343caa0 ^ 0xf1540ec11732a513);
  uVar3 = (uRam000000018343cb78 ^ 0xc7cb315fdd4c1833) >> 1 |
          uRam000000018343cb78 ^ 0xc7cb315fdd4c1833;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam000000018343cb78 ^ 0xf0228cef25018ad8 ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4;
  uRam000000018343c8d0 = uRam000000018343c950 ^ uVar3 ^ 0x70e9ac70b82380c4;
  uRam000000018343cbf8 = (uRam000000018343cbf8 ^ uVar3) + 0x70e9ac70b82380c4 ^ 0xc8e957745748577c;
  uRam000000018343c860 = (uRam000000018343c860 * -0x54bbd853f290d513 ^ uRam000000018343cbf8) + uVar3
  ;
  uRam000000018343cc88 = uRam000000018343c860 ^ uRam000000018343cbf8;
  uRam000000018343c768 = 0x70e9ac70b82380c4;
  uVar3 = func_0x00018fe4fb30(uRam000000018343cad8 + 0xffe0ff7be5001dff ^ 0xc5);
  uRam000000018343ca50 = ~uVar3 & 0x70e9ac70b82380c4;
  uRam000000018343c728 = uRam000000018343c728 ^ uRam000000018343ca50 ^ 0x9d1a95a11f46a9dd;
  uRam000000018343cc10 =
       (uRam000000018343cc10 * 0x44999c77d2cfb5d5 ^ uRam000000018343c728) + uRam000000018343ca50;
  uRam000000018343c918 = uRam000000018343cc10 ^ uRam000000018343c728;
  uRam000000018343cb68 = 0;
  uVar3 = (uRam000000018343caa0 ^ 0x84225cda) + uRam000000018343ca70 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343caa0 ^ 0x84225cda;
  uVar5 = ((uRam000000018343ca70 + uRam000000018343caa0) * 0x2000 |
          uRam000000018343ca70 + uRam000000018343caa0 >> 0x33) ^ uRam000000018343ca70;
  uRam000000018343c748 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018343caa0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343ca70 + 0x84225cda));
  uVar3 = ((uRam000000018343c748 ^ 0x7fff) << 0x38 | (uRam000000018343c748 ^ 0x7fff) >> 8) *
          0x57f245abe0960e1d;
  uRam000000018343cc18 = uRam000000018343caa8 ^ uVar3 ^ 0x7fff;
  uRam000000018343c850 = (uRam000000018343c850 ^ uVar3) + 0x7fff ^ 0xe7476d083f89b69f;
  uRam000000018343c920 = (uRam000000018343c920 * 0x3aaf1ecaa389e89 ^ uRam000000018343c850) + uVar3;
  uRam000000018343cc50 = uRam000000018343c920 ^ uRam000000018343c850;
  uRam000000018343ccd0 = 0x7fff;
  uVar3 = ~uRam000000018343cb58 *
          ((uRam000000018343c7e8 ^ 0x38ffeebf3bf7cefc) +
          (uRam000000018343c7e8 & 0x38ffeebf3bf7cefc) * 2);
  uVar3 = (uVar3 | uRam000000018343cad8) + (uVar3 & uRam000000018343cad8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343cb78 =
       func_0x00018fe4fb30((uVar3 | 0xc7001140c4083103) + (uVar3 & 0xc7001140c4083103));
  uRam000000018343c770 =
       (uRam000000018343c770 ^ uRam000000018343cb78 ^ 0xc7001140402a1226) + 0xc7001140402a1226 ^
       0xeca9d806b4e30ea2;
  uRam000000018343c880 =
       (uRam000000018343c880 * 0x256d3e6619982d2f ^ uRam000000018343c770) +
       (uRam000000018343cb78 ^ 0xc7001140402a1226);
  uRam000000018343c858 = uRam000000018343c880 ^ uRam000000018343c770;
  uRam000000018343ccb0 = 0xc7001140402a1226;
  uVar3 = param_4 ^ 0x84222325 ^ uRam000000018343cbd8;
  lVar4 = (param_4 ^ 0x84222325) + uRam000000018343c838;
  uVar5 = uVar3 + lVar4;
  uVar6 = (uRam000000018343c838 ^ 0x7fff) + uRam000000018343cbd8 + 0x7fff;
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar3;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018343c838 ^ 0x7fff;
  uRam000000018343ccd8 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018343cbd8 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar3 = uRam000000018343ccd8 - (uRam000000018343ccd8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018343ccd8;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018343c840 = (ulonglong)uVar2;
  uRam000000018343cbd0 = (uRam000000018343cbd0 ^ uVar3) + uRam000000018343c840 ^ 0xc2f38c903c5b5c8e;
  uRam000000018343c8c0 = (uRam000000018343c8c0 * -0xb744608a1d9df3 ^ uRam000000018343cbd0) + uVar3;
  uRam000000018343ca08 = uRam000000018343c8c0 ^ uRam000000018343cbd0;
  uVar5 = uRam000000018343c840 ^ 0x84222325;
  uVar3 = ((uRam000000018343c950 ^ uVar5) +
          (ulonglong)((uint)uRam000000018343c950 & (uint)uVar5) * 2) *
          (param_3 - uRam000000018343c8e0);
  uVar3 = (uVar3 | uRam000000018343c9f0) + (uVar3 & uRam000000018343c9f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar5 = uVar5 ^ param_3;
  uRam000000018343ca00 =
       func_0x00018fe4fb30((uVar5 | uVar3) + (ulonglong)((uint)uVar5 & (uint)uVar3));
  uVar3 = (param_3 ^ uVar2) ^ uRam000000018343ca00;
  uRam000000018343c970 = (ulonglong)(uVar2 ^ param_3);
  uRam000000018343cc50 = (uRam000000018343cc50 ^ uVar3) + uRam000000018343c970 ^ 0x849fd49e1d6e93c1;
  uRam000000018343cbf8 = (uRam000000018343cbf8 * -0x6599e525e7ef5c67 ^ uRam000000018343cc50) + uVar3
  ;
  uRam000000018343c7e8 = uRam000000018343cbf8 ^ uRam000000018343cc50;
  uVar3 = (uRam000000018343cb18 ^ _UNK_182b3b090) + uRam000000018343cc08 + 0x5ea8c0db;
  uVar5 = (uRam000000018343cc08 ^ _UNK_182b3b098) + uRam000000018343cb18 + 0x11c5b9d7;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343cb18 ^ _UNK_182b3b090;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018343cc08 ^ _UNK_182b3b098;
  uRam000000018343c930 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018343cb18 + 0x11c5b9d7) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343cc08 + 0x5ea8c0db));
  uVar3 = (uRam000000018343c930 ^ 0xb39de0852) & 0x1fffffffff;
  uRam000000018343c7c0 = (uRam000000018343c7c0 ^ uVar3) + 0xdbcffbff ^ 0x154f1fa8fb9db39c;
  uRam000000018343c7e0 = (uRam000000018343c7e0 * 0x3f110f985f43b24b ^ uRam000000018343c7c0) + uVar3;
  uRam000000018343c7e8 = uRam000000018343c7e0 ^ uRam000000018343c7c0;
  uRam000000018343ca38 = 0xdbcffbff;
  uRam000000018343c9e8 = func_0x00018fe4fb30(uRam000000018343ca50 + 0x24ff365c0087ff ^ 0x61);
  uVar3 = (uRam000000018343c9e8 ^ 0xdbbe1741) & 0x1fffffffffffff;
  uRam000000018343c8b0 = (uRam000000018343c8b0 ^ uVar3) + 0x4aba0641 ^ 0xf1e9effedd25b637;
  uRam000000018343c7c0 = (uRam000000018343c7c0 * 0x782e33f752ecd3a9 ^ uRam000000018343c8b0) + uVar3;
  uRam000000018343ca68 = uRam000000018343c7c0 ^ uRam000000018343c8b0;
  uRam000000018343c788 = 0x4aba0641;
  uVar3 = (~uRam000000018343ccb8 + 0x13109011) *
          ((uRam000000018343cc48 ^ 0x68cd99c5) +
          (ulonglong)((uint)uRam000000018343cc48 & 0x68cd99c5) * 2);
  uVar3 = (uVar3 | uRam000000018343cc80) + (uVar3 & uRam000000018343cc80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018fe4fb30((uVar3 | 0x7bdd09d5) + (ulonglong)((uint)uVar3 & 0x7bdd09d5));
  uVar3 = (uVar3 ^ 0xecefbae0) << 0x1d | uVar3 >> 0x23;
  uRam000000018343c840 = uRam000000018343cc28 ^ uVar3 ^ 0x100004af0;
  uRam000000018343c758 = (uRam000000018343c758 ^ uVar3) + 0x100004af0 ^ 0x34fc4001520b17dc;
  uRam000000018343cba8 = (uRam000000018343cba8 * 0x7e98af4ca06d09d5 ^ uRam000000018343c758) + uVar3;
  uRam000000018343ccf0 = uRam000000018343cba8 ^ uRam000000018343c758;
  uRam000000018343c770 = 0x4af0;
  uVar3 = (~uRam000000018343ca68 + 0x67705001) *
          ((uRam000000018343cb48 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018343cb48 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018343ccf0) + (uVar3 & uRam000000018343ccf0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343c8d0 =
       func_0x00018fe4fb30((uVar3 | 0xe3527325) + (ulonglong)((uint)uVar3 & 0xe3527325));
  uRam000000018343ca08 =
       (uRam000000018343ca08 ^ uRam000000018343c8d0 & 0x7ffffffffffffe00) - 0x67705000 ^
       0xd6361c358385755f;
  uRam000000018343c878 =
       (uRam000000018343c878 * 0x5ff68e3b1d631d27 ^ uRam000000018343ca08) +
       (uRam000000018343c8d0 & 0x7ffffffffffffe00);
  uRam000000018343cc08 = uRam000000018343c878 ^ uRam000000018343ca08;
  uRam000000018343cb78 = 0x988fb000;
  uVar3 = (uRam000000018343cb40 ^ _UNK_182b3b0a0) + uRam000000018343cc88 + 0x842269d5;
  uVar5 = (uRam000000018343cc88 ^ _UNK_182b3b0a8) + uRam000000018343cb40 + 0x67705000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343cb40 ^ _UNK_182b3b0a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018343cc88 ^ _UNK_182b3b0a8;
  uRam000000018343cc38 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018343cb40 + 0x67705000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343cc88 + 0x842269d5));
  uRam000000018343c7f0 = uRam000000018343ccc0 ^ uRam000000018343cc38 ^ 0x67709af0;
  uRam000000018343c750 =
       (uRam000000018343c750 ^ uRam000000018343cc38) + 0x67709af0 ^ 0x86d8eeb2f492dd06;
  uRam000000018343cb90 =
       (uRam000000018343cb90 * 0x40a9a805a91b7053 ^ uRam000000018343c750) + uRam000000018343cc38;
  uRam000000018343cc60 = uRam000000018343cb90 ^ uRam000000018343c750;
  uRam000000018343c770 = 0x67709af0;
  uVar3 = (~uRam000000018343c7b0 + 0x988fb001) *
          ((uRam000000018343c920 ^ 0xe352b9d5) +
          (ulonglong)((uint)uRam000000018343c920 & 0xe352b9d5) * 2);
  uVar3 = (uVar3 | uRam000000018343cb90) + (uVar3 & uRam000000018343cb90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343c998 =
       func_0x00018fe4fb30((uVar3 | 0x7bdd09d5) + (ulonglong)((uint)uVar3 & 0x7bdd09d5));
  uVar3 = (ulonglong)(~(uint)(uRam000000018343c998 >> 8) & 0x67709af0);
  uRam000000018343c9d0 = uRam000000018343c700 ^ uVar3 ^ 0x100004af0;
  uRam000000018343c980 = (uRam000000018343c980 ^ uVar3) + 0x100004af0 ^ 0xe900fc8a4658aed0;
  uRam000000018343ca68 = (uRam000000018343ca68 * 0x1567e4b7a566de45 ^ uRam000000018343c980) + uVar3;
  uRam000000018343cb88 = uRam000000018343ca68 ^ uRam000000018343c980;
  uRam000000018343cab8 = 0x4af0;
  uRam000000018343cbd0 = func_0x00018fe4fb30(lRam000000018343c708 + 0xffad001922ffdfffU ^ 0xf0);
  uVar3 = uRam000000018343cbd0 << 0x3d | uRam000000018343cbd0 >> 3;
  uRam000000018343c8d0 = (uRam000000018343c8d0 ^ uVar3) - 0xef027400 ^ 0xf6a7826f7a4882c0;
  uRam000000018343c720 = (uRam000000018343c720 * -0xb0d654ee70cf6d7 ^ uRam000000018343c8d0) + uVar3;
  uRam000000018343c888 = uRam000000018343c720 ^ uRam000000018343c8d0;
  uRam000000018343caa8 = 0x10fd8c00;
  uVar3 = (uRam000000018343c880 ^ _UNK_182b3b0b0) + uRam000000018343c830 + 0x6b209dd5;
  uVar5 = (uRam000000018343c830 ^ _UNK_182b3b0b8) + uRam000000018343c880 + 0x10fd8c00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343c880 ^ _UNK_182b3b0b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018343c830 ^ _UNK_182b3b0b8;
  uRam000000018343c9c8 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018343c880 + 0x10fd8c00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343c830 + 0x6b209dd5));
  uRam000000018343c9c0 = 0x100004af0;
  uRam000000018343cc10 =
       (uRam000000018343cc10 ^ uRam000000018343c878) + 0x100004af0 ^ 0x3110af44ba0b06c2;
  uRam000000018343c8d0 =
       (uRam000000018343c8d0 * 0x3194b6c7d198c5d7 ^ uRam000000018343cc10) + uRam000000018343c878;
  uRam000000018343caf8 = uRam000000018343c8d0 ^ uRam000000018343cc10;
  uRam000000018343cb10 = 0x4af0;
  uVar3 = (~uRam000000018343ca48 + 0x4aba0642) *
          ((uRam000000018343cc68 ^ 0x5fedd8da) +
          (ulonglong)((uint)uRam000000018343cc68 & 0x5fedd8da) * 2);
  uVar3 = (uVar3 | uRam000000018343ccd0) + (uVar3 & uRam000000018343ccd0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343c988 =
       func_0x00018fe4fb30((uVar3 | 0x1557de9b) + (ulonglong)((uint)uVar3 & 0x1557de9b));
  uVar3 = uRam000000018343c988 ^ 0x4029d9537cfcf5bf;
  uRam000000018343c798 = uRam000000018343c938 ^ uVar3 ^ 0x1268a0240;
  uRam000000018343cb08 = (uRam000000018343cb08 ^ uVar3) + 0x1268a0240 ^ 0xe2efe65222d7107c;
  uRam000000018343c730 = (uRam000000018343c730 * 0x76732b5942d546ed ^ uRam000000018343cb08) + uVar3;
  uRam000000018343ca20 = uRam000000018343c730 ^ uRam000000018343cb08;
  uRam000000018343c990 = 0x268a0240;
  uVar3 = (~uRam000000018343cc70 + 0x4aba0642) *
          ((uRam000000018343cca8 ^ 0x5fedd8da) +
          (ulonglong)((uint)uRam000000018343cca8 & 0x5fedd8da) * 2);
  uVar3 = (uVar3 | 0x268a0240) + (uVar3 & 0x268a0240);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343c8e0 =
       func_0x00018fe4fb30((uVar3 | 0x1557de9b) + (ulonglong)((uint)uVar3 & 0x1557de9b));
  uVar3 = uRam000000018343c8e0 & 0x7fffffffffffffff ^ 0x4aba0641;
  uRam000000018343cb18 = (uRam000000018343cb18 ^ uVar3) + 0x9175fdbe ^ 0x2d51b3095f5dbd71;
  uRam000000018343c960 = (uRam000000018343c960 * 0x2492317fdadcd895 ^ uRam000000018343cb18) + uVar3;
  uRam000000018343c9b0 = uRam000000018343c960 ^ uRam000000018343cb18;
  uRam000000018343c8b8 = 0x9175fdbe;
  uRam000000018343cc70 = func_0x00018fe4fb30(uRam000000018343c7a8 ^ 0x49ffea75004c35);
  uVar3 = uRam000000018343cc70 * 0x5f5da217a62d5e9f ^ 0x4aba0641;
  uRam000000018343cbe0 = (uRam000000018343cbe0 ^ uVar3) + 0x4a8a0241 ^ 0x330c0c0dee74c2aa;
  uRam000000018343ca38 = (uRam000000018343ca38 * -0x74dca289107befa7 ^ uRam000000018343cbe0) + uVar3
  ;
  uRam000000018343cc00 = uRam000000018343ca38 ^ uRam000000018343cbe0;
  uRam000000018343c978 = 0x4a8a0241;
  uRam000000018343c8c8 = func_0x00018fe4fb30(uRam000000018343c788 ^ 0xa5ff7fe9003c2a);
  uVar3 = uRam000000018343c8c8 & 0x7ffffffffffff;
  uRam000000018343ca30 = uRam000000018343c8b8 ^ uVar3 ^ 0x1268a0240;
  uRam000000018343c728 = (uRam000000018343c728 ^ uVar3) + 0x1268a0240 ^ 0x206e4c7874e261b0;
  uRam000000018343cb70 = (uRam000000018343cb70 * -0x7f271cc1bebf2efb ^ uRam000000018343c728) + uVar3
  ;
  uRam000000018343cbf8 = uRam000000018343cb70 ^ uRam000000018343c728;
  uRam000000018343c888 = 0x268a0240;
  uVar3 = (~uRam000000018343cca8 + 0x268a0241) *
          ((uRam000000018343c9d0 ^ 0xa2a82165) +
          (ulonglong)((uint)uRam000000018343c9d0 & 0xa2a82165) * 2);
  uVar3 = (uVar3 | uRam000000018343ca28) + (uVar3 & uRam000000018343ca28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343c8a0 =
       func_0x00018fe4fb30((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam000000018343c7f8 = uRam000000018343c8a0 << 0x2c | uRam000000018343c8a0 >> 0x14;
  uRam000000018343c788 = uRam000000018343c788 ^ uRam000000018343c7f8 ^ 0xbbf24dc5e1166346;
  uRam000000018343ca98 =
       (uRam000000018343ca98 * 0x63c4e0c0c67f3153 ^ uRam000000018343c788) + uRam000000018343c7f8;
  uRam000000018343c918 = uRam000000018343ca98 ^ uRam000000018343c788;
  uRam000000018343c7c8 = 0;
  uRam000000018343caf8 = func_0x00018fe4fb30(uRam000000018343c918 + 0x59007c4d0021ff ^ 0x15);
  uVar3 = uRam000000018343caf8 >> 1 | uRam000000018343caf8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uRam000000018343caf8) >> 3;
  uRam000000018343ca40 = uRam000000018343c960 ^ uVar3 ^ 0x4af0;
  uRam000000018343c8a8 = (uRam000000018343c8a8 ^ uVar3) + 0x4af0 ^ 0xcc4b16faf9b3e431;
  uRam000000018343c918 = (uRam000000018343c918 * 0x3233aeaaff1c62db ^ uRam000000018343c8a8) + uVar3;
  uRam000000018343cac8 = uRam000000018343c918 ^ uRam000000018343c8a8;
  uRam000000018343c908 = 0x4af0;
  uVar3 = (~uRam000000018343caa8 + 0x100000000) *
          ((uRam000000018343c898 ^ 0x5fedd8da) +
          (ulonglong)((uint)uRam000000018343c898 & 0x5fedd8da) * 2);
  uVar3 = (uVar3 | uRam000000018343cb40) + (uVar3 & uRam000000018343cb40);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343c868 =
       func_0x00018fe4fb30((uVar3 | 0xa0122725) + (ulonglong)((uint)uVar3 & 0xa0122725));
  uRam000000018343cb80 =
       (uRam000000018343cb80 ^ uRam000000018343c868) + 0x24300400 ^ 0x13393a03a04394a;
  uRam000000018343cac8 =
       (uRam000000018343cac8 * 0x55e396e34f1addfb ^ uRam000000018343cb80) + uRam000000018343c868;
  uRam000000018343c9b8 = uRam000000018343cac8 ^ uRam000000018343cb80;
  uRam000000018343cc78 = 0x24300400;
  uVar3 = (~uRam000000018343c9d8 + 0x24300401) *
          ((uRam000000018343c8c8 ^ 0x5fedd8da) +
          (ulonglong)((uint)uRam000000018343c8c8 & 0x5fedd8da) * 2);
  uVar3 = (uVar3 | uRam000000018343cb48) + (uVar3 & uRam000000018343cb48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018343c7f8 =
       func_0x00018fe4fb30((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda));
  uVar5 = uRam000000018343c7f8 ^ 0x1f1279de5bbffc00;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar5;
  uRam000000018343c7f0 = uRam000000018343c7f0 ^ uVar5 ^ 0x598ff315376faa41;
  uRam000000018343cbf0 = (uRam000000018343cbf0 * -0x2d7beeff83741853 ^ uRam000000018343c7f0) + uVar5
  ;
  uRam000000018343cca8 = uRam000000018343cbf0 ^ uRam000000018343c7f0;
  uRam000000018343c958 = 0;
  uVar3 = (uRam000000018343c770 ^ 0x842269d5) + uRam000000018343c788 + 0x842269d5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343c770 ^ 0x842269d5;
  uVar5 = ((uRam000000018343c788 + uRam000000018343c770) * 0x2000 |
          uRam000000018343c788 + uRam000000018343c770 >> 0x33) ^ uRam000000018343c788;
  uRam000000018343ca48 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018343c770 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343c788 + 0x842269d5));
  uVar3 = (uRam000000018343ca48 ^ 0x4af0) & 0x1ffffffffff;
  uRam000000018343c998 = uRam000000018343c8d0 ^ uVar3 ^ 0x4af0;
  uRam000000018343c728 = (uRam000000018343c728 ^ uVar3) + 0x4af0 ^ 0x2ec7205173d79a76;
  uRam000000018343c7b0 = (uRam000000018343c7b0 * -0x7975c75b501cae71 ^ uRam000000018343c728) + uVar3
  ;
  uRam000000018343cb90 = uRam000000018343c7b0 ^ uRam000000018343c728;
  uRam000000018343cce8 = uRam000000018343cc08 ^ 0x4af0;
  uRam000000018343cba0 = 0x4af0;
  uVar3 = (uRam000000018343cb20 ^ 0x842269d5) + uRam000000018343c770 + 0x842269d5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343cb20 ^ 0x842269d5;
  uVar5 = ((uRam000000018343c770 + uRam000000018343cb20) * 0x2000 |
          uRam000000018343c770 + uRam000000018343cb20 >> 0x33) ^ uRam000000018343c770;
  uRam000000018343c790 =
       func_0x00018fe4fb30((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018343cb20 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018343c770 + 0x842269d5));
  uVar3 = uRam000000018343c790 & 0x7fffffffffc00000;
  uRam000000018343c778 = uRam000000018343ca18 ^ uVar3 ^ 0x4af0;
  uRam000000018343c940 = (uRam000000018343c940 ^ uVar3) + 0x4af0 ^ 0xed9f5b094a03d816;
  uRam000000018343c748 = (uRam000000018343c748 * 0x7aabefdc6691814f ^ uRam000000018343c940) + uVar3;
  uRam000000018343cb68 = uRam000000018343c748 ^ uRam000000018343c940;
  uRam000000018343c870 = 0x4af0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4a8d,0xea);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fe4656c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b391e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/al; oV (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18fe4fbc0, runtime 6ffff7a5fbc0) =====

void FUN_18fe4fbc0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018fe4fc0b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b3b240 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/al; oW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18fe50bd0, runtime 6ffff7a60bd0) =====

void FUN_18fe50bd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fe50c59 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b3b800 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



