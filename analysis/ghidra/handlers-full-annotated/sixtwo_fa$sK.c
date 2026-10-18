// ===== Lsixtwo/fa$sK; _eea8ed86ca395c650722f611c54003db ()V (handler @ image 18b606c20, runtime 6ffff3216c20) =====

void FUN_18b606c20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b606d2c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b7fdc8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fa$sK; doR ()[Lsixtwo/fa$sK; (handler @ image 18b5c4930, runtime 6ffff31d4930) =====

void FUN_18b5c4930(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x108d4,0x2c2);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b5c4a09 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b73df0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fa$sK; doS ([B)Ljava/lang/String; (handler @ image 18b5d13f0, runtime 6ffff31e13f0) =====

void FUN_18b5d13f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018b5d1490 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b77810 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fa$sK; doT (IJ)I (handler @ image 18b5f7d60, runtime 6ffff3207d60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5f7d60(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (uRam00000001832a9c68 ^ _UNK_181b7e600) + uRam00000001832a9a18 + 0x5ba2d61b4cc0d331;
  uVar6 = (uRam00000001832a9a18 ^ _UNK_181b7e608) + uRam00000001832a9c68 + 0x79379139016cb845;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9c68 ^ _UNK_181b7e600;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a9a18 ^ _UNK_181b7e608;
  uRam00000001832a9b80 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832a9c68 + 0x79379139016cb845) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832a9a18 + 0x5ba2d61b4cc0d331));
  uVar5 = (uRam00000001832a9b80 ^ 0x2804602c8824010) << 7 |
          (uRam00000001832a9b80 ^ 0x2804602c8824010) >> 0x39;
  uRam00000001832a9b40 = (uRam00000001832a9b40 ^ uVar5) + 0x7bb7d73bc9eef855 ^ 0xb038ae6828041356;
  uRam00000001832a9708 = (uRam00000001832a9708 * 0x588ebc325adefc4f ^ uRam00000001832a9b40) + uVar5;
  uRam00000001832a9908 = uRam00000001832a9708 ^ uRam00000001832a9b40;
  uRam00000001832a97c8 = 0x7bb7d73bc9eef855;
  uRam00000001832a9558 = func_0x00018b602e60(uRam00000001832a9598 ^ 0xf438241cca4a6468);
  uVar5 = uRam00000001832a9558 >> 1 | uRam00000001832a9558;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001832a9558;
  uRam00000001832a9a18 = (uRam00000001832a9a18 ^ uVar5) + 0xa8e44a7ca1be1a13 ^ 0x114370cd29420ade;
  uRam00000001832a9a98 = (uRam00000001832a9a98 * 0x2052d26561ed22c1 ^ uRam00000001832a9a18) + uVar5;
  uRam00000001832a99f0 = uRam00000001832a9a98 ^ uRam00000001832a9a18;
  uRam00000001832a98b8 = 0xa8e44a7ca1be1a13;
  uVar5 = (uRam00000001832a9938 ^ _UNK_181b7e610) + uRam00000001832a98a8 + 0x84225cda;
  uVar6 = (uRam00000001832a98a8 ^ _UNK_181b7e618) + uRam00000001832a9938 + 0xe137ad0546fe3d90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9938 ^ _UNK_181b7e610;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a98a8 ^ _UNK_181b7e618;
  uRam00000001832a9580 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832a9938 + 0xe137ad0546fe3d90) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a98a8 + 0x84225cda));
  uVar5 = uRam00000001832a9580 ^ 0xe137ad0546fe0000;
  uRam00000001832a9938 = uRam00000001832a9890 ^ uVar5 ^ 0xe137ad0546febd8f;
  uRam00000001832a99b8 = (uRam00000001832a99b8 ^ uVar5) + 0xe137ad0546febd8f ^ 0x94b954c12eddbbe7;
  uRam00000001832a9a20 = (uRam00000001832a9a20 * -0x36603376b3e8f667 ^ uRam00000001832a99b8) + uVar5
  ;
  uRam00000001832a9a38 = uRam00000001832a9a20 ^ uRam00000001832a99b8;
  uRam00000001832a9760 = 0xe137ad0546febd8f;
  uVar5 = (~uRam00000001832a9850 + 0x1ec852fab901c271) *
          ((uRam00000001832a9968 ^ 0xe137ad05c2dc9eaa) +
          (uRam00000001832a9968 & 0x6137ad05c2dc9eaa) * 2);
  uVar5 = (uVar5 | uRam00000001832a97c8) + (uVar5 & uRam00000001832a97c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a96b0 =
       func_0x00018b602e60((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uRam00000001832a9960 = uRam00000001832a9c18 ^ uRam00000001832a96b0 ^ 0x7fff;
  uRam00000001832a95d8 = (uRam00000001832a95d8 ^ uRam00000001832a96b0) + 0x7fff ^ 0xa5149543e9feea26
  ;
  uRam00000001832a9b10 =
       (uRam00000001832a9b10 * 0x3758cd227e274a69 ^ uRam00000001832a95d8) + uRam00000001832a96b0;
  uRam00000001832a9ba8 = uRam00000001832a9b10 ^ uRam00000001832a95d8;
  uRam00000001832a9a48 = 0x7fff;
  uVar5 = (uRam00000001832a9898 ^ _UNK_181b7e620) + uRam00000001832a9578 + 0x84222325;
  uVar6 = (uRam00000001832a9578 ^ _UNK_181b7e628) + uRam00000001832a9898 + 0x97f3a23c678c3ab0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9898 ^ _UNK_181b7e620;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a9578 ^ _UNK_181b7e628;
  uRam00000001832a97f8 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832a9898 + 0x97f3a23c678c3ab0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a9578 + 0x84222325));
  uRam00000001832a9b70 = uRam00000001832a9c98 * 0xe5bcbd9dfa7c4e5;
  uRam00000001832a96f8 = uRam00000001832a96f8 + 0x680c5dc39873c550 ^ 0x4947bd06480aebe7;
  uRam00000001832a9c98 = uRam00000001832a9b70 ^ uRam00000001832a96f8;
  uRam00000001832a9808 = 0x680c5dc39873c550;
  uVar5 = (~uRam00000001832a95b0 + 0x97f3a23c678c3ab1) *
          ((uRam00000001832a9bc8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832a9bc8 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001832a9a68) + (uVar5 & uRam00000001832a9a68);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a98d8 =
       func_0x00018b602e60((uVar5 | 0x97f3a23ce3ae666a) + (uVar5 & 0x97f3a23ce3ae666a));
  uVar5 = uRam00000001832a98d8 << 0x12 | uRam00000001832a98d8 >> 0x2e;
  uRam00000001832a9a30 = uRam00000001832a99b0 ^ uVar5 ^ 0x97f3a23c678cbaaf;
  uRam00000001832a9788 = (uRam00000001832a9788 ^ uVar5) + 0x97f3a23c678cbaaf ^ 0xa1b4d70c16f8f941;
  uRam00000001832a9890 = (uRam00000001832a9890 * -0x72a4c89ed946a77f ^ uRam00000001832a9788) + uVar5
  ;
  uRam00000001832a9598 = uRam00000001832a9890 ^ uRam00000001832a9788;
  lRam00000001832a9838 = -0x680c5dc398734551;
  uVar5 = (uRam00000001832a9c10 ^ _UNK_181b7e630) + uRam00000001832a9c80 + 0x97f3a23ce3ae998a;
  uVar6 = (uRam00000001832a9c80 ^ _UNK_181b7e638) + uRam00000001832a9c10 + 0x680c5dc39873c550;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9c10 ^ _UNK_181b7e630;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a9c80 ^ _UNK_181b7e638;
  uRam00000001832a96f8 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832a9c10 + 0x680c5dc39873c550) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832a9c80 + 0x97f3a23ce3ae998a));
  uVar5 = (uRam00000001832a96f8 ^ 0x8ed107ec6c4001b0) << 0x29 |
          (uRam00000001832a96f8 ^ 0x8ed107ec6c4001b0) >> 0x17;
  uRam00000001832a9560 = uRam00000001832a9a50 ^ uVar5 ^ 0x7fff;
  uRam00000001832a9780 = (uRam00000001832a9780 ^ uVar5) + 0x7fff ^ 0xdd61d8de09854da4;
  uRam00000001832a95e8 = (uRam00000001832a95e8 * 0x338bce6315921a3b ^ uRam00000001832a9780) + uVar5;
  uRam00000001832a96b8 = uRam00000001832a95e8 ^ uRam00000001832a9780;
  uRam00000001832a9b88 = 0x7fff;
  uVar5 = (~uRam00000001832a9980 + 0xaa2fc284d50af21) *
          ((uRam00000001832a9a98 ^ 0xf55d03d7368df3fa) +
          (uRam00000001832a9a98 & 0x755d03d7368df3fa) * 2);
  uVar5 = (uVar5 | uRam00000001832a9618) + (uVar5 & uRam00000001832a9618);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a96a0 =
       func_0x00018b602e60((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = ~uRam00000001832a96a0 << 0x19 | (~uRam00000001832a96a0 & 0x1ffffffffffffff) >> 0x27;
  uRam00000001832a9508 = uRam00000001832a9730 ^ uVar5 ^ 0x7fff;
  uRam00000001832a9518 = (uRam00000001832a9518 ^ uVar5) + 0x7fff ^ 0xfd119be6def0e62;
  uRam00000001832a95d0 = (uRam00000001832a95d0 * -0x65afbe4048896d2b ^ uRam00000001832a9518) + uVar5
  ;
  uRam00000001832a9818 = uRam00000001832a95d0 ^ uRam00000001832a9518;
  uRam00000001832a95f8 = 0x7fff;
  uRam00000001832a98b0 = func_0x00018b602e60(uRam00000001832a9b90 + 0x4740ad23a17d4d4c ^ 0xef);
  uRam00000001832a97b8 =
       (uRam00000001832a97b8 ^ uRam00000001832a98b0) + 0x28a4423881ae1811 ^ 0x415e97f3f074204;
  uRam00000001832a9a80 =
       (uRam00000001832a9a80 * 0x1862cbe6f2def63f ^ uRam00000001832a97b8) + uRam00000001832a98b0;
  uRam00000001832a9b80 = uRam00000001832a9a80 ^ uRam00000001832a97b8;
  uRam00000001832a9820 = 0x28a4423881ae1811;
  uVar5 = (~uRam00000001832a9658 + 0x51488471035c3023) *
          ((uRam00000001832a9610 ^ 0xd3539d47ec72c163) +
          (uRam00000001832a9610 & 0x53539d47ec72c163) * 2);
  uVar5 = (uVar5 | uRam00000001832a9b78) + (uVar5 & uRam00000001832a9b78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9738 =
       func_0x00018b602e60((uVar5 | 0x821b1936ef2ef141) + (uVar5 & 0x821b1936ef2ef141));
  uVar5 = (uRam00000001832a9738 ^ 0xd35b9d776b5cf266) << 0x3b |
          (uRam00000001832a9738 ^ 0xd35b9d776b5cf266) >> 5;
  uRam00000001832a9828 = uRam00000001832a9ce8 ^ uVar5 ^ 0x249c21b86bad1268;
  uRam00000001832a9650 = (uRam00000001832a9650 ^ uVar5) + 0x249c21b86bad1268 ^ 0x6ac84d68623d0fc;
  uRam00000001832a9bd8 = (uRam00000001832a9bd8 * -0x1df7a76a33541f1d ^ uRam00000001832a9650) + uVar5
  ;
  uRam00000001832a97e8 = uRam00000001832a9bd8 ^ uRam00000001832a9650;
  uRam00000001832a9bc8 = 0x249c21b86bad1268;
  uVar5 = ((uRam00000001832a9a00 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832a9a00 & 0x84225cda) * 2) * -uRam00000001832a9bf0;
  uVar5 = (uVar5 | uRam00000001832a9930) + (uVar5 & uRam00000001832a9930);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9bc8 =
       func_0x00018b602e60((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = (ulonglong)(~(uint)uRam00000001832a9b60 & 0x7fff);
  uRam00000001832a9a08 = uRam00000001832a9a10 ^ uVar5 ^ 0x7fff;
  uRam00000001832a9578 = (uRam00000001832a9578 ^ uVar5) + 0x7fff ^ 0xc959f1c4b1ab7935;
  uRam00000001832a9ca0 = (uRam00000001832a9ca0 * 0x5cd92d230451451b ^ uRam00000001832a9578) + uVar5;
  uRam00000001832a9bc0 = uRam00000001832a9ca0 ^ uRam00000001832a9578;
  uRam00000001832a9618 = 0x7fff;
  uVar5 = ~uRam00000001832a9948 *
          ((uRam00000001832a9ce0 ^ 0x7bb7d73b4dccdb70) +
          (uRam00000001832a9ce0 & 0x7bb7d73b4dccdb70) * 2);
  uVar5 = (uVar5 | uRam00000001832a99b0) + (uVar5 & uRam00000001832a99b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9cd8 =
       func_0x00018b602e60((uVar5 | 0x844828c4b233248f) + (uVar5 & 0x844828c4b233248f));
  uVar5 = uRam00000001832a9cd8 >> 1 | uRam00000001832a9cd8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001832a9cd8) & 0x3ffffffffffffff;
  uRam00000001832a9b78 = (uRam00000001832a9b78 ^ uVar5) + 0x844828c4361107aa ^ 0xf1f1fb7b0728cc0d;
  uRam00000001832a96b8 = (uRam00000001832a96b8 * 0x163c8d955f952171 ^ uRam00000001832a9b78) + uVar5;
  uRam00000001832a9588 = uRam00000001832a96b8 ^ uRam00000001832a9b78;
  uRam00000001832a9868 = 0x844828c4361107aa;
  uRam00000001832a9768 = func_0x00018b602e60(uRam00000001832a9680 + 0xc42478e5c9dfd2b4 ^ 0x6f);
  uVar5 = (uRam00000001832a9768 ^ 0x844828c4361107aa) << 7 |
          (uRam00000001832a9768 ^ 0x844828c4361107aa) >> 0x39;
  uRam00000001832a9c40 = uRam00000001832a9c40 ^ uVar5 ^ 0x68a132360d91a47d;
  uRam00000001832a9690 = (uRam00000001832a9690 * 0x53eb99c110d4904f ^ uRam00000001832a9c40) + uVar5;
  uRam00000001832a97f0 = uRam00000001832a9690 ^ uRam00000001832a9c40;
  uRam00000001832a9918 = 0;
  uVar5 = (uRam00000001832a9800 ^ 0x84225cda) + uRam00000001832a97b8 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9800 ^ 0x84225cda;
  uVar6 = ((uRam00000001832a97b8 + uRam00000001832a9800) * 0x2000 |
          uRam00000001832a97b8 + uRam00000001832a9800 >> 0x33) ^ uRam00000001832a97b8;
  uRam00000001832a9790 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001832a9800 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a97b8 + 0x84225cda));
  uVar5 = uRam00000001832a9790 ^ 0x7fff;
  uRam00000001832a9868 = uRam00000001832a96c0 ^ uVar5 ^ 0x7fff;
  uRam00000001832a9b38 = (uRam00000001832a9b38 ^ uVar5) + 0x7fff ^ 0x980beaff964dc722;
  uRam00000001832a98f8 = (uRam00000001832a98f8 * 0x5121718156a02945 ^ uRam00000001832a9b38) + uVar5;
  uRam00000001832a9640 = uRam00000001832a98f8 ^ uRam00000001832a9b38;
  uRam00000001832a9788 = 0x7fff;
  uRam00000001832a9cb0 = func_0x00018b602e60(uRam00000001832a9ba8 + 0xffdeff8424ffe1ff ^ 0xba);
  uVar5 = (uRam00000001832a9cb0 ^ 0x5ba2d61bc8e00000) & 0xfffffffffffc0000;
  uRam00000001832a9890 = uRam00000001832a9890 ^ uVar5 ^ 0xb7df27601e8b5a42;
  uRam00000001832a9608 = (uRam00000001832a9608 * 0x428eb3733389b3ad ^ uRam00000001832a9890) + uVar5;
  uRam00000001832a99c8 = uRam00000001832a9608 ^ uRam00000001832a9890;
  uRam00000001832a9c08 = 0;
  uRam00000001832a9810 = func_0x00018b602e60(uRam00000001832a9980 ^ 0xffb3ff7b35ffe1c2);
  uVar5 = uRam00000001832a9810 >> 1 | uRam00000001832a9810;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~((uint)uRam00000001832a9810 ^
            (0x40 - (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 8) & 0x7fff);
  uRam00000001832a9500 = uRam00000001832a9cf0 ^ uVar5 ^ 0x7fff;
  uRam00000001832a9808 = (uRam00000001832a9808 ^ uVar5) + 0x7fff ^ 0xbc8ee827ce544c63;
  uRam00000001832a99a8 = (uRam00000001832a99a8 * -0x7766d845b1fe1dd5 ^ uRam00000001832a9808) + uVar5
  ;
  uRam00000001832a9790 = uRam00000001832a99a8 ^ uRam00000001832a9808;
  uRam00000001832a96a8 = uRam00000001832a9a48 ^ 0x7fff;
  uRam00000001832a9708 = 0x7fff;
  uVar4 = (ulonglong)(param_4 & 0x7fff);
  uVar3 = (ulonglong)param_3;
  uVar5 = uVar4 ^ 0x84222325;
  uVar6 = ((uRam00000001832a9660 ^ uVar5) +
          (ulonglong)((uint)uRam00000001832a9660 & (uint)uVar5) * 2) *
          (uVar3 - lRam00000001832a9cd0);
  uVar6 = (uVar6 | uRam00000001832a9680) + (uVar6 & uRam00000001832a9680);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832a9a88 =
       func_0x00018b602e60((uVar5 ^ uVar3 | uVar6) +
                           (ulonglong)((uint)(uVar5 ^ uVar3) & (uint)uVar6));
  uRam00000001832a9620 = (uVar4 + uVar3) - (ulonglong)((param_3 & param_4 & 0x7fff) * 2);
  uRam00000001832a9898 =
       (uRam00000001832a9898 ^ ~uRam00000001832a9a88 & uVar4) + uRam00000001832a9620 ^
       0xe0efc51fd8e3ce6;
  uRam00000001832a9640 =
       (uRam00000001832a9640 * 0x6211fa3731eaf091 ^ uRam00000001832a9898) +
       (~uRam00000001832a9a88 & uVar4);
  uRam00000001832a99f8 = uRam00000001832a9640 ^ uRam00000001832a9898;
  uRam00000001832a9620 = uRam00000001832a9620 & 0xffffffff;
  uVar5 = (~uRam00000001832a9940 + 0x833cb560) *
          ((uRam00000001832a96b0 ^ 0x743c2160) +
          (ulonglong)((uint)uRam00000001832a96b0 & 0x743c2160) * 2);
  uVar5 = (uVar5 | uRam00000001832a9c80) + (uVar5 & uRam00000001832a9c80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9748 =
       func_0x00018b602e60((uVar5 | 0xf700943f) + (ulonglong)((uint)uVar5 & 0xf700943f));
  uVar5 = (uRam00000001832a9748 ^ 0xf33eb75f) & 0x7fffffffffffffff;
  uRam00000001832a9a30 = (uRam00000001832a9a30 ^ uVar5) + 0xf33eb75f ^ 0xfc4b5f7120336476;
  uRam00000001832a9900 = (uRam00000001832a9900 * 0x103b564dab52332f ^ uRam00000001832a9a30) + uVar5;
  uRam00000001832a9980 = uRam00000001832a9900 ^ uRam00000001832a9a30;
  uRam00000001832a9828 = 0xf33eb75f;
  uRam00000001832a98b8 = func_0x00018b602e60(uRam00000001832a9688 ^ 0xffc4001c6e008350);
  uVar6 = uRam00000001832a98b8 ^ 0x23eab7d6ec4cb04c;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = ((uint)bVar1 + (uint)bVar1 ^ uVar6) * 0x2097549e735bd5e5;
  uRam00000001832a9b88 = (uRam00000001832a9b88 ^ uVar5) + 0xf8ae6797 ^ 0xa0333e63b3bf33e1;
  uRam00000001832a9518 = (uRam00000001832a9518 * 0x94ad078cd7d341 ^ uRam00000001832a9b88) + uVar5;
  uRam00000001832a95c0 = uRam00000001832a9518 ^ uRam00000001832a9b88;
  uRam00000001832a9a70 = 0xf8ae6797;
  uVar5 = (uRam00000001832a96e0 ^ _UNK_181b7e640) + uRam00000001832a96e8 + 0x84222325;
  uVar6 = (uRam00000001832a96e8 ^ _UNK_181b7e648) + uRam00000001832a96e0 + 0x50dde540;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a96e0 ^ _UNK_181b7e640;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a96e8 ^ _UNK_181b7e648;
  uRam00000001832a95b0 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832a96e0 + 0x50dde540) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a96e8 + 0x84222325));
  uRam00000001832a96d0 =
       (uRam00000001832a96d0 ^ uRam00000001832a9970) - 0x50dde540 ^ 0xc36eb361f267736b;
  uRam00000001832a9b90 =
       (uRam00000001832a9b90 * 0x6621572e19b18b2d ^ uRam00000001832a96d0) + uRam00000001832a9970;
  uRam00000001832a9c20 = uRam00000001832a9b90 ^ uRam00000001832a96d0;
  uRam00000001832a9a88 = 0xaf221ac0;
  uVar5 = (~uRam00000001832a96a0 + 0x50dde541) *
          ((uRam00000001832a9b78 ^ 0x84222616) +
          (ulonglong)((uint)uRam00000001832a9b78 & 0x84222616) * 2);
  uVar5 = (uVar5 | uRam00000001832a9858) + (uVar5 & uRam00000001832a9858);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9a88 =
       func_0x00018b602e60((uVar5 | 0xd4ffc356) + (ulonglong)((uint)uVar5 & 0xd4ffc356));
  uVar5 = uRam00000001832a9a88 & 0x7ffffffffffff;
  uRam00000001832a9c70 = uRam00000001832a95e0 ^ uVar5 ^ 0x50ddea73;
  uRam00000001832a9748 = (uRam00000001832a9748 ^ uVar5) + 0x50ddea73 ^ 0xe76c0d14cc21c42d;
  uRam00000001832a98a8 = (uRam00000001832a98a8 * 0x50373de7da074699 ^ uRam00000001832a9748) + uVar5;
  uRam00000001832a9628 = uRam00000001832a98a8 ^ uRam00000001832a9748;
  uRam00000001832a9788 = 0x50ddea73;
  uVar5 = (uRam00000001832a9b90 ^ _UNK_181b7e650) + uRam00000001832a99f0 + 0xd4ffc956;
  uVar6 = (uRam00000001832a99f0 ^ _UNK_181b7e658) + uRam00000001832a9b90 + 0xaf221ac0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9b90 ^ _UNK_181b7e650;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a99f0 ^ _UNK_181b7e658;
  uRam00000001832a9c10 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832a9b90 + 0xaf221ac0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a99f0 + 0xd4ffc956));
  uVar5 = (uRam00000001832a9c10 << 0x34 | uRam00000001832a9c10 >> 0xc & 0xfffffffff0000000) >> 0xe |
          (uRam00000001832a9c10 >> 0xc) << 0x32;
  uRam00000001832a9578 = uRam00000001832a97a0 ^ uVar5 ^ 0x100000533;
  uRam00000001832a9bd8 = (uRam00000001832a9bd8 ^ uVar5) + 0x100000533 ^ 0xe0173c329f540589;
  uRam00000001832a9a38 =
       (uRam00000001832a9a38 * 0x68309d3a581ed7f7 ^ uRam00000001832a9bd8) + uVar5 ^
       uRam00000001832a9bd8;
  uRam00000001832a9978 = 0x533;
  uRam00000001832a97a0 = func_0x00018b602e60(uRam00000001832a96e0 ^ 0x5afff90affb9ef);
  uRam00000001832a98c8 = uRam00000001832a9ba8 ^ uRam00000001832a97a0 ^ 0x8f649260;
  uRam00000001832a97d0 =
       (uRam00000001832a97d0 ^ uRam00000001832a97a0) + 0x8f649260 ^ 0xd449858b827c23ff;
  uRam00000001832a9bf0 =
       (uRam00000001832a9bf0 * -0x18c24f2d991f0741 ^ uRam00000001832a97d0) + uRam00000001832a97a0;
  uRam00000001832a9520 = uRam00000001832a9bf0 ^ uRam00000001832a97d0;
  uRam00000001832a9ce0 = 0x8f649260;
  uRam00000001832a9cc8 = func_0x00018b602e60(uRam00000001832a98f8 ^ 0xffbcffca6a00bcdc);
  uVar5 = ((uRam00000001832a9cc8 ^ 0xfffff2f3) << 0x19 | uRam00000001832a9cc8 >> 0x27) ^ 0x709b72d3;
  uRam00000001832a9618 = uRam00000001832a9898 ^ uVar5 ^ 0x100000533;
  uRam00000001832a9840 = (uRam00000001832a9840 ^ uVar5) + 0x100000533 ^ 0xd2fcca4940561106;
  uRam00000001832a9be8 = (uRam00000001832a9be8 * 0x3354686a12af5c21 ^ uRam00000001832a9840) + uVar5;
  uRam00000001832a99a8 = uRam00000001832a9be8 ^ uRam00000001832a9840;
  uRam00000001832a9540 = 0x533;
  uVar5 = (uRam00000001832a9b08 ^ _UNK_181b7e660) + uRam00000001832a9930 + 0x84222325;
  uVar6 = (uRam00000001832a9930 ^ _UNK_181b7e668) + uRam00000001832a9b08 + 0x38b43267;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9b08 ^ _UNK_181b7e660;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a9930 ^ _UNK_181b7e668;
  uRam00000001832a9860 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832a9b08 + 0x38b43267) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a9930 + 0x84222325));
  uVar5 = uRam00000001832a9860 << 0x10 | uRam00000001832a9860 >> 0x30;
  uRam00000001832a9978 = (uRam00000001832a9978 ^ uVar5) - 0x38b43267 ^ 0xa10b8a72d2280a59;
  uRam00000001832a9578 = (uRam00000001832a9578 * 0x93adfa022c57a41 ^ uRam00000001832a9978) + uVar5;
  uRam00000001832a95e0 = uRam00000001832a9578 ^ uRam00000001832a9978;
  uRam00000001832a9a18 = 0xc74bcd99;
  uVar5 = (uRam00000001832a9840 ^ _UNK_181b7e670) + uRam00000001832a9bb0 + 0x84222616;
  uVar6 = (uRam00000001832a9bb0 ^ _UNK_181b7e678) + uRam00000001832a9840 + 0x38b43267;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9840 ^ _UNK_181b7e670;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a9bb0 ^ _UNK_181b7e678;
  uRam00000001832a9640 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832a9840 + 0x38b43267) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a9bb0 + 0x84222616));
  uVar5 = uRam00000001832a9640 * 0x1a0e4b826c78181d & 0xfffffffffffffffc;
  uRam00000001832a99e0 = uRam00000001832a9698 ^ uVar5 ^ 0x38b4379a;
  uRam00000001832a9788 = (uRam00000001832a9788 ^ uVar5) + 0x38b4379a ^ 0x4cc3a247fdeabc03;
  uRam00000001832a9780 = (uRam00000001832a9780 * -0x75ffb58215414ddf ^ uRam00000001832a9788) + uVar5
  ;
  uRam00000001832a9868 = uRam00000001832a9780 ^ uRam00000001832a9788;
  uRam00000001832a95d0 = 0x38b4379a;
  uVar5 = (~uRam00000001832a9a08 + 0xc74bcd9a) *
          ((uRam00000001832a9540 ^ 0xbc9614bf) +
          (ulonglong)((uint)uRam00000001832a9540 & 0xbc9614bf) * 2);
  uVar5 = (uVar5 | uRam00000001832a9b20) + (uVar5 & uRam00000001832a9b20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a95e8 =
       func_0x00018b602e60((uVar5 | 0x7bddd926) + (ulonglong)((uint)uVar5 & 0x7bddd926));
  uVar5 = (uRam00000001832a95e8 ^ 0x2c24e18f34598d0a) & 0x7fffffffffffffff;
  uRam00000001832a9cf0 = uRam00000001832a95b0 ^ uVar5 ^ 0x100000533;
  uRam00000001832a9588 = (uRam00000001832a9588 ^ uVar5) + 0x100000533 ^ 0x804e11da3b7aedf1;
  uRam00000001832a97a8 = (uRam00000001832a97a8 * 0x43e29432372c4e9 ^ uRam00000001832a9588) + uVar5;
  uRam00000001832a9988 = uRam00000001832a97a8 ^ uRam00000001832a9588;
  uRam00000001832a9668 = 0x533;
  uVar5 = (~uRam00000001832a9a70 + 0xf8ae6798) *
          ((uRam00000001832a9b28 ^ 0x771c947a) +
          (ulonglong)((uint)uRam00000001832a9b28 & 0x771c947a) * 2);
  uVar5 = (uVar5 | uRam00000001832a95e8) + (uVar5 & uRam00000001832a95e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9798 =
       func_0x00018b602e60((uVar5 | 0x8fb2f3ed) + (ulonglong)((uint)uVar5 & 0x8fb2f3ed));
  uVar5 = uRam00000001832a9798 ^ 0xec4a78b29369d556;
  uRam00000001832a99e0 = uRam00000001832a9680 ^ uVar5 ^ 0x1ebed1ef6;
  uRam00000001832a9b68 = (uRam00000001832a9b68 ^ uVar5) + 0x1ebed1ef6 ^ 0xe742ef9d3d603f78;
  uRam00000001832a9960 = (uRam00000001832a9960 * 0x17dacb26f9003f1b ^ uRam00000001832a9b68) + uVar5;
  uRam00000001832a95d8 = uRam00000001832a9960 ^ uRam00000001832a9b68;
  uRam00000001832a9900 = 0xebed1ef6;
  uVar5 = (uRam00000001832a9c78 ^ _UNK_181b7e680) + uRam00000001832a96c0 + 0x771c947a;
  uVar6 = (uRam00000001832a96c0 ^ _UNK_181b7e688) + uRam00000001832a9c78 + 0xf8ae6797;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9c78 ^ _UNK_181b7e680;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832a96c0 ^ _UNK_181b7e688;
  uRam00000001832a9900 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832a9c78 + 0xf8ae6797) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a96c0 + 0x771c947a));
  uRam00000001832a9610 =
       (uRam00000001832a9610 ^ uRam00000001832a9900) + 0xb90d0c8 ^ 0x1aae5d5d0e52a33a;
  uRam00000001832a9c28 =
       (uRam00000001832a9c28 * -0x5b21ae8930c8953 ^ uRam00000001832a9610) + uRam00000001832a9900;
  uRam00000001832a9700 = uRam00000001832a9c28 ^ uRam00000001832a9610;
  uRam00000001832a9c50 = 0xb90d0c8;
  uVar5 = (~uRam00000001832a9740 + 0xf8ae6798) *
          ((uRam00000001832a97c8 ^ 0x771c947a) +
          (ulonglong)((uint)uRam00000001832a97c8 & 0x771c947a) * 2);
  uVar5 = (uVar5 | uRam00000001832a9588) + (uVar5 & uRam00000001832a9588);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9a18 =
       func_0x00018b602e60((uVar5 | 0x8fb2f3ed) + (ulonglong)((uint)uVar5 & 0x8fb2f3ed));
  uVar6 = uRam00000001832a9a18 ^ 0xec4a78b260576209;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar6;
  uRam00000001832a97c0 = (uRam00000001832a97c0 ^ uVar6) + 0xf02e2717 ^ 0xefe8e79895c951f;
  uRam00000001832a9bb8 = (uRam00000001832a9bb8 * 0x1322bf114f79aa9 ^ uRam00000001832a97c0) + uVar6;
  uRam00000001832a9cd8 = uRam00000001832a9bb8 ^ uRam00000001832a97c0;
  uRam00000001832a9598 = uRam00000001832a9bc0 ^ 0xf02e2717;
  uRam00000001832a99d0 = 0xf02e2717;
  uVar5 = (uRam00000001832a9c38 ^ 0x84222616) + uRam00000001832a9b40 + 0x84222616;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832a9c38 ^ 0x84222616;
  uVar6 = ((uRam00000001832a9b40 + uRam00000001832a9c38) * 0x2000 |
          uRam00000001832a9b40 + uRam00000001832a9c38 >> 0x33) ^ uRam00000001832a9b40;
  uRam00000001832a9c40 =
       func_0x00018b602e60((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001832a9c38 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832a9b40 + 0x84222616));
  uRam00000001832a9748 = uRam00000001832a9a50 ^ uRam00000001832a9c40 ^ 0x533;
  uRam00000001832a9970 = (uRam00000001832a9970 ^ uRam00000001832a9c40) + 0x533 ^ 0x14611fc6c317bae6;
  uRam00000001832a9b10 =
       (uRam00000001832a9b10 * -0x5155b915bd9355a3 ^ uRam00000001832a9970) + uRam00000001832a9c40;
  uRam00000001832a99e0 = uRam00000001832a9b10 ^ uRam00000001832a9970;
  uRam00000001832a9828 = 0x533;
  uVar5 = (~uRam00000001832a9580 + 0x100000000) *
          ((uRam00000001832a98c0 ^ 0x771c947a) +
          (ulonglong)((uint)uRam00000001832a98c0 & 0x771c947a) * 2);
  uVar5 = (uVar5 | uRam00000001832a98d8) + (uVar5 & uRam00000001832a98d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9538 =
       func_0x00018b602e60((uVar5 | 0x88e36b85) + (ulonglong)((uint)uVar5 & 0x88e36b85));
  uVar6 = uRam00000001832a9538 ^ 0xffffffff;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~((uint)uVar6 ^
            (0x40 - (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 2) & 0xf33eb75f);
  uRam00000001832a98d8 = (uRam00000001832a98d8 ^ uVar5) + 0xcc148a0 ^ 0xfb855de20765f1db;
  uRam00000001832a99d0 = (uRam00000001832a99d0 * -0x6892df0025996b05 ^ uRam00000001832a98d8) + uVar5
  ;
  uRam00000001832a9c50 = uRam00000001832a99d0 ^ uRam00000001832a98d8;
  uRam00000001832a9a18 = 0xcc148a0;
  uVar5 = (~uRam00000001832a9ca8 + 0xcc148a1) *
          ((uRam00000001832a97f0 ^ 0x771c947a) +
          (ulonglong)((uint)uRam00000001832a97f0 & 0x771c947a) * 2);
  uVar5 = (uVar5 | uRam00000001832a9998) + (uVar5 & uRam00000001832a9998);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9af0 =
       func_0x00018b602e60((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda));
  uVar5 = uRam00000001832a9af0 << 10 | uRam00000001832a9af0 >> 0x36;
  uRam00000001832a9aa0 = uRam00000001832a9aa0 ^ uVar5 ^ 0x4ee7322bb45565b1;
  uRam00000001832a9b10 = (uRam00000001832a9b10 * -0x1764c4043f8476a9 ^ uRam00000001832a9aa0) + uVar5
  ;
  uRam00000001832a99b0 = uRam00000001832a9b10 ^ uRam00000001832a9aa0;
  uRam00000001832a96a8 = 0;
  uVar5 = ((uRam00000001832a97e8 ^ 0x84222616) +
          (ulonglong)((uint)uRam00000001832a97e8 & 0x84222616) * 2) * -lRam00000001832a9838;
  uVar5 = (uVar5 | uRam00000001832a98f0) + (uVar5 & uRam00000001832a98f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832a9548 =
       func_0x00018b602e60((uVar5 | 0x84222616) + (ulonglong)((uint)uVar5 & 0x84222616));
  uVar5 = uRam00000001832a9548 & 0xffffffffffff8000;
  uRam00000001832a9590 = uRam00000001832a9570 ^ uVar5 ^ 0x533;
  uRam00000001832a9978 = (uRam00000001832a9978 ^ uVar5) + 0x533 ^ 0x80b84a11a692a504;
  uRam00000001832a9700 = (uRam00000001832a9700 * 0x4cf1372b525e19bd ^ uRam00000001832a9978) + uVar5;
  uRam00000001832a9a60 = uRam00000001832a9700 ^ uRam00000001832a9978;
  uRam00000001832a9ca8 = 0x533;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x108d4,0x2c2);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b5fa1ba did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b7c7a0 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fa$sK; doU (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18b602ef0, runtime 6ffff3212ef0) =====

void FUN_18b602ef0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018b602f3b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b7e7c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fa$sK; doV (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18b603f00, runtime 6ffff3213f00) =====

void FUN_18b603f00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b603f89 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b7ed80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fa$sK; valueOf (Ljava/lang/String;)Lsixtwo/fa$sK; (handler @ image 18b5c4680, runtime 6ffff31d4680) =====

void FUN_18b5c4680(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x108d4,0x2c2);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b5c46c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b73cb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fa$sK; values ()[Lsixtwo/fa$sK; (handler @ image 18b5c4300, runtime 6ffff31d4300) =====

void FUN_18b5c4300(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x108d4,0x2c2);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b5c4347 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b73b50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



