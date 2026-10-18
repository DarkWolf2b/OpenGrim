// ===== STITCHED CORPUS: sixtwo.fa$sK =====
// handlers: 8  continuation blocks: 88  unresolved table targets: 0
// tables not in tables.json: ['0x1098d8', '0x1b779a0', '0x1b780c8', '0x1b780d8', '0x1b780e8', '0x1b78108', '0x1b78118', '0x1b78128', '0x1b78138', '0x1b78148', '0x1b78298', '0x1b782a8', '0x1b782b8', '0x1b782c8', '0x1b782d8', '0x1b782e8', '0x1b782f8', '0x1b78308', '0x1b7e600', '0x1b7e608']

// ===== Lsixtwo/fa$sK; _eea8ed86ca395c650722f611c54003db ()V (handler @ image 18b606c20, runtime 6ffff3216c20) =====

void FUN_18b606c20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x108d4,0x2c2)
      /* POOL[0x108d4,0x2c2]: 43;)V | aFQ | EleIt | nLhLG | aFY | ogUmi | sixtwo/fa$sK | ZqHfE | [Lsixtwo/fa$sK; | AMrtH | EfXWt | YbJTa | Lsixtwo/fa$sK; | RWBsV | aFX | MAgEy | oBiuY | dzJyB | hECYg | tKIGa | wglWG | EVSCw | QLPlX | GudSQ | doT | sixtwo/fa$sL | railPos | firePos | cartHitResult | Lnet/minecraft/class_3965; | shotPoint | sixtwo/fa | aGQ | cTrfy | aGV | aGW | uULHD | Lsixtwo/fa$sL; | YfDDm | aGM | vPwrl | aGn | (Lsixtwo/ov;)Lsixtwo/fa$sL; | doS | aGr | (Lsixtwo/fa$sL;)Z | aGf | aGs | (Lsixtwo/fa$sL;)Lsixtwo/fa$sK; | oEEDi | aGB | aGv | (Lnet/minecraft/class_2338;)Lsixtwo/oz; | aGH | aGg | aGh | aGi | aGj |  */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x108d4,0x2c2)
      /* POOL[0x108d4,0x2c2]: 43;)V | aFQ | EleIt | nLhLG | aFY | ogUmi | sixtwo/fa$sK | ZqHfE | [Lsixtwo/fa$sK; | AMrtH | EfXWt | YbJTa | Lsixtwo/fa$sK; | RWBsV | aFX | MAgEy | oBiuY | dzJyB | hECYg | tKIGa | wglWG | EVSCw | QLPlX | GudSQ | doT | sixtwo/fa$sL | railPos | firePos | cartHitResult | Lnet/minecraft/class_3965; | shotPoint | sixtwo/fa | aGQ | cTrfy | aGV | aGW | uULHD | Lsixtwo/fa$sL; | YfDDm | aGM | vPwrl | aGn | (Lsixtwo/ov;)Lsixtwo/fa$sL; | doS | aGr | (Lsixtwo/fa$sL;)Z | aGf | aGs | (Lsixtwo/fa$sL;)Lsixtwo/fa$sK; | oEEDi | aGB | aGv | (Lnet/minecraft/class_2338;)Lsixtwo/oz; | aGH | aGg | aGh | aGi | aGj |  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x108d4,0x2c2)
      /* POOL[0x108d4,0x2c2]: 43;)V | aFQ | EleIt | nLhLG | aFY | ogUmi | sixtwo/fa$sK | ZqHfE | [Lsixtwo/fa$sK; | AMrtH | EfXWt | YbJTa | Lsixtwo/fa$sK; | RWBsV | aFX | MAgEy | oBiuY | dzJyB | hECYg | tKIGa | wglWG | EVSCw | QLPlX | GudSQ | doT | sixtwo/fa$sL | railPos | firePos | cartHitResult | Lnet/minecraft/class_3965; | shotPoint | sixtwo/fa | aGQ | cTrfy | aGV | aGW | uULHD | Lsixtwo/fa$sL; | YfDDm | aGM | vPwrl | aGn | (Lsixtwo/ov;)Lsixtwo/fa$sL; | doS | aGr | (Lsixtwo/fa$sL;)Z | aGf | aGs | (Lsixtwo/fa$sL;)Lsixtwo/fa$sK; | oEEDi | aGB | aGv | (Lnet/minecraft/class_2338;)Lsixtwo/oz; | aGH | aGg | aGh | aGi | aGj |  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x108d4,0x2c2)
      /* POOL[0x108d4,0x2c2]: 43;)V | aFQ | EleIt | nLhLG | aFY | ogUmi | sixtwo/fa$sK | ZqHfE | [Lsixtwo/fa$sK; | AMrtH | EfXWt | YbJTa | Lsixtwo/fa$sK; | RWBsV | aFX | MAgEy | oBiuY | dzJyB | hECYg | tKIGa | wglWG | EVSCw | QLPlX | GudSQ | doT | sixtwo/fa$sL | railPos | firePos | cartHitResult | Lnet/minecraft/class_3965; | shotPoint | sixtwo/fa | aGQ | cTrfy | aGV | aGW | uULHD | Lsixtwo/fa$sL; | YfDDm | aGM | vPwrl | aGn | (Lsixtwo/ov;)Lsixtwo/fa$sL; | doS | aGr | (Lsixtwo/fa$sL;)Z | aGf | aGs | (Lsixtwo/fa$sL;)Lsixtwo/fa$sK; | oEEDi | aGB | aGv | (Lnet/minecraft/class_2338;)Lsixtwo/oz; | aGH | aGg | aGh | aGi | aGj |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b5c4347 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b73b50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xb5c434a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c434a(void)

{
  FUN_190ddce00();
  (*_DAT_181b73c58)();
  return;
}


// ----- block @ rva 0xb5c43a1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c43a1(void)

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


// ----- block @ rva 0xb5c43c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c43c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_181b73b98)();
  return;
}


// ----- block @ rva 0xb5c43dc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c43dc(void)

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


// ----- block @ rva 0xb5c4400 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4400(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73bf8)();
  return;
}


// ----- block @ rva 0xb5c4449 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4449(void)

{
  FUN_190ddfc90();
  (*_DAT_181b73c08)();
  return;
}


// ----- block @ rva 0xb5c44a0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c44a0(void)

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


// ----- block @ rva 0xb5c453d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c453d(void)

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


// ----- block @ rva 0xb5c45bb -----

void FUN_18b5c45bb(void)

{
  return;
}


// ----- block @ rva 0xb5c46cb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c46cb(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73d68)();
  return;
}


// ----- block @ rva 0xb5c471e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c471e(void)

{
  FUN_190de3220();
  (*_DAT_181b73d38)();
  return;
}


// ----- block @ rva 0xb5c4775 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4775(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181b73d58)();
  return;
}


// ----- block @ rva 0xb5c47ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c47ba(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73cf8)();
  return;
}


// ----- block @ rva 0xb5c47e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c47e2(void)

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


// ----- block @ rva 0xb5c4803 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c4803(void)

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


// ----- block @ rva 0xb5c482e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c482e(void)

{
  FUN_190dd72e0();
  (*_DAT_181b73d78)();
  return;
}


// ----- block @ rva 0xb5c4894 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4894(void)

{
  (*_DAT_181b73d28)();
  return;
}


// ----- block @ rva 0xb5c489f -----

void FUN_18b5c489f(void)

{
  return;
}


// ----- block @ rva 0xb5c48a7 -----

void FUN_18b5c48a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5c4a0c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5c4a0c(void)

{
  FUN_190ddce00();
  (*_DAT_181b74e48)();
  return;
}


// ----- block @ rva 0xb5c8551 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5c8551(void)

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


// ----- block @ rva 0xb5ccdd5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5ccdd5(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(unaff_RSI + JNI->NewGlobalRef /*0xa8*/))();
  FUN_190dcd3d0(0x7b8,uVar1);
  (*_DAT_181b74228)();
  return;
}


// ----- block @ rva 0xb5d03a0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5d03a0(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181b74e08)();
  return;
}


// ----- block @ rva 0xb5d042e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5d042e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  FUN_190dd72e0();
  (*_DAT_181b74648)();
  return;
}


// ----- block @ rva 0xb5d08b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5d08b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_181b73e68)();
  return;
}


// ----- block @ rva 0xb5d08d5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5d08d5(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
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


// ----- block @ rva 0xb5d096d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5d096d(void)

{
  FUN_190dd72e0();
  (*_DAT_181b751d8)();
  return;
}


// ----- block @ rva 0xb5d125d -----

void FUN_18b5d125d(void)

{
  return;
}


// ----- block @ rva 0xb5d12c9 -----

void FUN_18b5d12c9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb5d1493 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b5d14c9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b5d1493(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb5d14e6 -----

void FUN_18b5d14e6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00018b5d1511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181b779a0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xb5d4b3a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5d4b3a(void)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x18) = 0xf;
  (**(code **)(**(longlong **)(unaff_RBP + 0x68) + 0x70))
            (*(longlong **)(unaff_RBP + 0x68),*(undefined8 *)(unaff_RBP + 0x38),unaff_RBP + -0x30);
  switch(0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb5d5633 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5d5633(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar15;
  ulonglong unaff_R13;
  uint uVar17;
  undefined1 auVar16 [16];
  ulonglong uVar18;
  ulonglong uVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  undefined1 auVar23 [16];
  uint uVar25;
  undefined1 auVar24 [16];
  ulonglong uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  
  uVar15 = unaff_R13 ^ 0x84222325 ^ _DAT_1832a8dc8;
  plVar1 = (longlong *)unaff_RBP[0xd];
  lVar12 = (unaff_R13 ^ 0x84222325) + _DAT_1832a8e50;
  uVar18 = uVar15 + lVar12;
  uVar20 = (unaff_RDI ^ _DAT_1832a8e50) + _DAT_1832a8dc8 + unaff_RDI;
  uVar15 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar15;
  uVar18 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ unaff_RDI ^ _DAT_1832a8e50;
  _DAT_1832a8930 =
       func_0x00018b5f7cd0((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_1832a8dc8 + unaff_RDI) ^
                           (uVar15 << 0x1d | uVar15 >> 0x23) - lVar12);
  uVar10 = _DAT_181b78a60;
  uVar9 = _DAT_181b78a50;
  uVar13 = ~(unaff_R13 * unaff_RDI ^ _DAT_1832a8930 ^ unaff_R13) & unaff_R13;
  uVar17 = (uint)(unaff_R13 >> 0x20);
  auVar23._8_4_ = (int)unaff_R13;
  auVar23._0_8_ = unaff_R13;
  auVar23._12_4_ = uVar17;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = unaff_RDI;
  uVar25 = (uint)(unaff_RDI >> 0x20);
  auVar21._8_4_ = (int)unaff_RDI;
  auVar21._0_8_ = unaff_RDI;
  auVar21._12_4_ = uVar25;
  uVar15 = (ulonglong)_DAT_181b789f0;
  auVar19 = auVar23 | auVar21;
  auVar16 = auVar23 ^ auVar21;
  auVar28._8_4_ = 0xffffffff;
  auVar28._0_8_ = 0xffffffffffffffff;
  auVar28._12_4_ = 0xffffffff;
  uVar6 = (ulonglong)_DAT_181b789e0;
  uVar18 = (ulonglong)_DAT_181b789e0;
  uVar20 = (ulonglong)_DAT_181b78a10;
  uVar7 = (ulonglong)_DAT_181b78a00;
  uVar2 = (ulonglong)_DAT_181b78a00;
  uVar3 = (ulonglong)_DAT_181b78a40;
  uVar22 = SUB164(auVar23 & auVar21,0);
  uVar4 = (ulonglong)_DAT_181b78a30;
  uVar26 = SUB168(auVar23 & auVar21,0);
  uVar8 = (ulonglong)_DAT_181b78a30;
  *(undefined1 (*) [16])(unaff_RBP + 10) = auVar19;
  uVar11 = _DAT_181b78a70;
  uVar5 = (ulonglong)_DAT_181b78a80;
  *(undefined1 (*) [16])(unaff_RBP + 8) = auVar16;
  unaff_RBP[2] = auVar16._0_8_ >> 0x20;
  unaff_RBP[3] = auVar16._8_8_ >> 0x20;
  uVar27 = SUB164(auVar28 ^ auVar24,0);
  _DAT_1832a8e20 =
       (((ulonglong)uVar27 * (ulonglong)_DAT_181b78a20 +
         ((ulonglong)_DAT_181b78a90 * (ulonglong)uVar27 +
          (SUB168(auVar28 ^ auVar24,0) >> 0x20) * (ulonglong)_DAT_181b78a20 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)auVar16._0_4_ +
        (uVar5 * auVar16._0_4_ + (auVar16._0_8_ >> 0x20) * (ulonglong)uVar11 << 0x20) +
        (ulonglong)uVar9 * (ulonglong)auVar19._0_4_ +
        ((ulonglong)uVar10 * (ulonglong)auVar19._0_4_ + (auVar19._0_8_ >> 0x20) * (ulonglong)uVar9
        << 0x20) +
        uVar4 * uVar22 + (uVar3 * uVar22 + (uVar26 >> 0x20) * uVar8 << 0x20) +
        (uVar20 * (unaff_RDI & 0xffffffff) + uVar2 * uVar25 << 0x20) +
        (unaff_RDI & 0xffffffff) * uVar7 +
        (uVar15 * (unaff_R13 & 0xffffffff) + uVar18 * uVar17 << 0x20) +
        (unaff_R13 & 0xffffffff) * uVar6) -
       ((ulonglong)*(uint *)(unaff_RBP + 8) * (ulonglong)_DAT_181b78b20 +
        ((ulonglong)_DAT_181b78b30 * (ulonglong)*(uint *)(unaff_RBP + 8) +
         (ulonglong)*(uint *)(unaff_RBP + 2) * (ulonglong)_DAT_181b78b20 << 0x20) +
        (ulonglong)*(uint *)(unaff_RBP + 10) * (ulonglong)_DAT_181b78b00 +
        ((ulonglong)_DAT_181b78b10 * (ulonglong)*(uint *)(unaff_RBP + 10) +
         (auVar19._0_8_ >> 0x20) * (ulonglong)_DAT_181b78b00 << 0x20) +
       (ulonglong)uVar22 * (ulonglong)_DAT_181b78ae0 +
       ((ulonglong)_DAT_181b78af0 * (ulonglong)uVar22 + (uVar26 >> 0x20) * (ulonglong)_DAT_181b78ae0
       << 0x20) +
       (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_181b78ad0 +
       ((ulonglong)uVar25 * (ulonglong)_DAT_181b78ad0 +
        (ulonglong)_DAT_181b78ac0 * (unaff_RDI & 0xffffffff) << 0x20) +
       (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_181b78ad0 +
       ((ulonglong)uVar17 * (ulonglong)_DAT_181b78ad0 +
        (unaff_R13 & 0xffffffff) * (ulonglong)_DAT_181b78ac0 << 0x20))) + 0xb9c7f426cf2df085;
  _DAT_1832a8ca8 = _DAT_1832a8e20 ^ uVar13;
  _DAT_1832a8a20 = (_DAT_1832a8a20 ^ uVar13) + _DAT_1832a8e20 ^ 0x8c740dc1713f87;
  _DAT_1832a8d80 = (_DAT_1832a8d80 * -0x78a30e3591bba94f ^ _DAT_1832a8a20) + uVar13;
  _DAT_1832a8cc8 = _DAT_1832a8d80 ^ _DAT_1832a8a20;
  puVar14 = unaff_RBP + -6;
  FUN_18414b520(puVar14);
  if (0xf < (ulonglong)unaff_RBP[-3]) {
    puVar14 = (undefined8 *)unaff_RBP[-6];
  }
  (**(code **)(plVar1 + JNI->ThrowNew /*0x70*/))(plVar1,*unaff_RBP,puVar14);
  switch(0xf < (ulonglong)unaff_RBP[-3]) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb5db4d0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5db4d0(void)

{
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_R14D;
  longlong *unaff_R15;
  
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_R14D;
  iVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb5dc7cf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5dc7cf(void)

{
  longlong unaff_RBP;
  ulonglong unaff_R13;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (_DAT_1832a8c18 ^ 0x9d275c3a) + _DAT_1832a8d88 + 0x9d275c3a;
  uVar2 = (_DAT_1832a8d88 ^ 0xffc078f3) + _DAT_1832a8c18 + 0xffc078f3;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832a8c18 ^ 0x9d275c3a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8d88 ^ 0xffc078f3;
  _DAT_1832a8a78 =
       func_0x00018b5f7cd0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8c18 + 0xffc078f3) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832a8d88 + 0x9d275c3a));
  _DAT_1832a8eb0 =
       (_DAT_1832a8eb0 ^ _DAT_1832a8a78 * 0x1a0c3c35dc746839) + 0xffc57fff ^ 0x65011b7c6aa00347;
  _DAT_1832a8e68 =
       (_DAT_1832a8e68 * -0x6e7ba75f1c28670f ^ _DAT_1832a8eb0) + _DAT_1832a8a78 * 0x1a0c3c35dc746839
  ;
  _DAT_1832a8a00 = _DAT_1832a8e68 ^ _DAT_1832a8eb0;
  _DAT_1832a8d00 = 0xffc57fff;
  uVar1 = (_DAT_1832a8d28 ^ _DAT_181b78100) + _DAT_1832a8b50 + 0x1eba26a3;
  uVar2 = (_DAT_1832a8b50 ^ _UNK_181b78108) + _DAT_1832a8d28 + 0xc397ec8c;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832a8d28 ^ _DAT_181b78100;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8b50 ^ _UNK_181b78108;
  _DAT_1832a8ad0 =
       func_0x00018b5f7cd0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8d28 + 0xc397ec8c) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832a8b50 + 0x1eba26a3));
  uVar1 = _DAT_1832a8ad0 ^ 0x4107e808;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_R13) + (uVar2 >> 2 & unaff_R13);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar1;
  _DAT_1832a8b40 = (_DAT_1832a8b40 ^ uVar1) + 0x590fe90a ^ 0x6659721409ffbfb7;
  _DAT_1832a8ba8 = (_DAT_1832a8ba8 * -0x5408f0f8c2b7c059 ^ _DAT_1832a8b40) + uVar1;
  _DAT_1832a8a60 = _DAT_1832a8ba8 ^ _DAT_1832a8b40;
  _DAT_1832a8980 = 0x590fe90a;
  uVar1 = (_DAT_1832a8918 ^ _DAT_181b78110) + _DAT_1832a8aa0 + 0x84222325;
  uVar2 = (_DAT_1832a8aa0 ^ _UNK_181b78118) + _DAT_1832a8918 + 0x1e8db533;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832a8918 ^ _DAT_181b78110;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8aa0 ^ _UNK_181b78118;
  _DAT_1832a8ac0 =
       func_0x00018b5f7cd0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8918 + 0x1e8db533) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832a8aa0 + 0x84222325));
  uVar1 = _DAT_1832a8ac0 >> 1 | _DAT_1832a8ac0;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & unaff_R13) + (uVar1 >> 2 & unaff_R13);
  uVar1 = 0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1832a8ac0 ^ 0x1e8db533;
  _DAT_1832a8dc8 = (_DAT_1832a8dc8 ^ uVar1) - 0x1e8db533 ^ 0x9a1a064f16f08ee0;
  _DAT_1832a8a80 = (_DAT_1832a8a80 * 0x3da2584527d63435 ^ _DAT_1832a8dc8) + uVar1;
  _DAT_1832a8bb0 = _DAT_1832a8a80 ^ _DAT_1832a8dc8;
  _DAT_1832a8ba0 = 0xe1724acd;
  uVar1 = (_DAT_1832a8d40 ^ _DAT_181b78120) + _DAT_1832a8d50 + 0x842223fa;
  uVar2 = (_DAT_1832a8d50 ^ _UNK_181b78128) + _DAT_1832a8d40 + 0x1e8db533;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832a8d40 ^ _DAT_181b78120;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8d50 ^ _UNK_181b78128;
  _DAT_1832a8b38 =
       func_0x00018b5f7cd0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8d40 + 0x1e8db533) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832a8d50 + 0x842223fa));
  uVar1 = (_DAT_1832a8b38 ^ 0xdf) & 0x3ffffffff;
  uVar2 = uVar1 - ((_DAT_1832a8b38 ^ 0xdf) >> 1 & 0x155555555);
  uVar2 = (uVar2 & unaff_R13) + (uVar2 >> 2 & unaff_R13);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_1832a8e38 = _DAT_1832a8d18 ^ uVar1 ^ 0x1e8db612;
  _DAT_1832a8bc0 = (_DAT_1832a8bc0 ^ uVar1) + 0x1e8db612 ^ 0x99132ee5b02c16be;
  _DAT_1832a89c8 = (_DAT_1832a89c8 * -0x8580c32f2d187f1 ^ _DAT_1832a8bc0) + uVar1;
  _DAT_1832a8dc0 = _DAT_1832a89c8 ^ _DAT_1832a8bc0;
  _DAT_1832a8948 = 0x1e8db612;
  uVar1 = (~_DAT_1832a8a08 + 0x1cc57fc5) *
          ((_DAT_1832a8ca8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832a8ca8 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832a89b0) + (uVar1 & _DAT_1832a89b0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832a8ee0 = func_0x00018b5f7cd0((uVar1 | 0x98e75ce1) + (ulonglong)((uint)uVar1 & 0x98e75ce1))
  ;
  _DAT_1832a8cc8 =
       (_DAT_1832a8cc8 ^ _DAT_1832a8ee0 & 0x7ffffffffff) - 0x1cc57fc4 ^ 0x5922d54fbc2dfdf8;
  _DAT_1832a8b18 =
       (_DAT_1832a8b18 * -0x5f48b9d2b54e9a8d ^ _DAT_1832a8cc8) + (_DAT_1832a8ee0 & 0x7ffffffffff);
  _DAT_1832a8d68 = _DAT_1832a8b18 ^ _DAT_1832a8cc8;
  _DAT_1832a8ae8 = 0xe33a803c;
  _DAT_1832a8e70 = func_0x00018b5f7cd0(_DAT_1832a8948 + 0xffdbff98320098ffU ^ 0x41);
  uVar1 = (ulonglong)(~(uint)_DAT_1832a8e70 & 0xdf) * 0x203346575e86aa77;
  _DAT_1832a8958 = _DAT_1832a8d50 ^ uVar1 ^ 0x1cc580a3;
  _DAT_1832a89c0 = (_DAT_1832a89c0 ^ uVar1) + 0x1cc580a3 ^ 0x4edd2b0b0f08c41c;
  _DAT_1832a8940 = (_DAT_1832a8940 * -0x3ccd266aeb929c83 ^ _DAT_1832a89c0) + uVar1;
  _DAT_1832a8ed0 = _DAT_1832a8940 ^ _DAT_1832a89c0;
  _DAT_1832a8c70 = 0x1cc580a3;
  uVar1 = (~_DAT_1832a8eb8 + 0xdbf45e13) *
          ((_DAT_1832a8b20 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832a8b20 & 0x84222325) * 2);
  uVar1 = (uVar1 | _DAT_1832a8d90) + (uVar1 & _DAT_1832a8d90);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832a8928 = func_0x00018b5f7cd0((uVar1 | 0x5fd67d37) + (ulonglong)((uint)uVar1 & 0x5fd67d37))
  ;
  _DAT_1832a89b0 = (_DAT_1832a89b0 ^ _DAT_1832a8928) - 0xdbf45e12 ^ 0x950e2a4b3a743955;
  _DAT_1832a89e8 = (_DAT_1832a89e8 * 0x29e4cec100bb18d ^ _DAT_1832a89b0) + _DAT_1832a8928;
  _DAT_1832a8cf0 = _DAT_1832a89e8 ^ _DAT_1832a89b0;
  _DAT_1832a8b40 = 0x240ba1ee;
  _DAT_1832a8af8 = func_0x00018b5f7cd0(_DAT_1832a8b30 + 0x4300446800c9ffU ^ 0xd8);
  uVar1 = (_DAT_1832a8af8 ^ 0xdbf45edf) & 0x3fffffffffffffff;
  uVar2 = ((_DAT_1832a8af8 ^ 0xdbf45edf) & 0x3fffffffffffffff) >> 1 | uVar1;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & unaff_R13) + (uVar2 >> 2 & unaff_R13);
  uVar1 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar1;
  _DAT_1832a8db8 = _DAT_1832a8a30 ^ uVar1 ^ 0xdbf45ef1;
  _DAT_1832a8cb0 = (_DAT_1832a8cb0 ^ uVar1) + 0xdbf45ef1 ^ 0xbe09169d44ca0b8;
  _DAT_1832a8e58 = (_DAT_1832a8e58 * 0x768fe82d2ffee7c7 ^ _DAT_1832a8cb0) + uVar1;
  _DAT_1832a8dc8 = _DAT_1832a8e58 ^ _DAT_1832a8cb0;
  _DAT_1832a8b38 = 0xdbf45ef1;
  _DAT_1832a8bc0 = func_0x00018b5f7cd0(_DAT_1832a8950 ^ 0xbc0044f600ac15);
  _DAT_1832a8c08 = _DAT_1832a8a50 ^ _DAT_1832a8bc0 ^ 0x1000000df;
  _DAT_1832a8ce8 = (_DAT_1832a8ce8 ^ _DAT_1832a8bc0) + 0x1000000df ^ 0x4d048d8b4478d4a;
  _DAT_1832a8980 = (_DAT_1832a8980 * 0x308a7af545c34247 ^ _DAT_1832a8ce8) + _DAT_1832a8bc0;
  _DAT_1832a8e98 = _DAT_1832a8980 ^ _DAT_1832a8ce8;
  _DAT_1832a8b20 = 0xdf;
  _DAT_1832a8d30 = func_0x00018b5f7cd0(_DAT_1832a8a40 ^ 0xff8d0022afff6794);
  uVar1 = (ulonglong)(~(uint)_DAT_1832a8d30 & 0xffc57fff);
  _DAT_1832a8ec0 = _DAT_1832a8ed8 ^ uVar1 ^ 0x158d56909;
  _DAT_1832a8b68 = (_DAT_1832a8b68 ^ uVar1) + 0x158d56909 ^ 0x5d16eed10c768787;
  _DAT_1832a8d80 = (_DAT_1832a8d80 * 0x6e4619a432c19ee9 ^ _DAT_1832a8b68) + uVar1;
  _DAT_1832a8a30 = _DAT_1832a8d80 ^ _DAT_1832a8b68;
  _DAT_1832a8ee8 = 0x58d56909;
  uVar1 = (_DAT_1832a8c20 ^ _DAT_181b78130) + _DAT_1832a8b90 + 0x7be75cda;
  uVar2 = (_DAT_1832a8b90 ^ _UNK_181b78138) + _DAT_1832a8c20 + 0x590fe90a;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832a8c20 ^ _DAT_181b78130;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8b90 ^ _UNK_181b78138;
  _DAT_1832a8a48 =
       func_0x00018b5f7cd0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8c20 + 0x590fe90a) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832a8b90 + 0x7be75cda));
  uVar1 = _DAT_1832a8a48 << 0x34 | _DAT_1832a8a48 >> 0xc;
  _DAT_1832a8da0 = (_DAT_1832a8da0 ^ uVar1) + 0x5905690a ^ 0x1c4dca5489914c3c;
  _DAT_1832a8c98 = (_DAT_1832a8c98 * -0x4a7b9883b73b5429 ^ _DAT_1832a8da0) + uVar1;
  _DAT_1832a8a78 = _DAT_1832a8c98 ^ _DAT_1832a8da0;
  _DAT_1832a8ae8 = 0x5905690a;
  _DAT_1832a8d68 = func_0x00018b5f7cd0(_DAT_1832a8e40 ^ 0x5aff70c3ff1dd5);
  uVar1 = (_DAT_1832a8d68 ^ 0xb6cad6f5) << 0x38 | (_DAT_1832a8d68 ^ 0xb6cad6f5) >> 8;
  _DAT_1832a8a30 = _DAT_1832a8eb0 ^ uVar1 ^ 0x158d56909;
  _DAT_1832a8ad0 = (_DAT_1832a8ad0 ^ uVar1) + 0x158d56909 ^ 0x57658afbc2ea9809;
  _DAT_1832a8ce0 = (_DAT_1832a8ce0 * -0x606b71f0020177e3 ^ _DAT_1832a8ad0) + uVar1;
  _DAT_1832a8ea0 = _DAT_1832a8ce0 ^ _DAT_1832a8ad0;
  _DAT_1832a8af8 = 0x58d56909;
  uVar1 = (~_DAT_1832a8d60 + 0x58d5690a) *
          ((_DAT_1832a8ae8 ^ 0xdcf74a2c) + (ulonglong)((uint)_DAT_1832a8ae8 & 0xdcf74a2c) * 2);
  uVar1 = (uVar1 | _DAT_1832a8a00) + (uVar1 & _DAT_1832a8a00);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832a8e08 = func_0x00018b5f7cd0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_1832a8b10 = _DAT_1832a8b10 ^ _DAT_1832a8e08 ^ 0x74ba2ad85bca64ff;
  _DAT_1832a8a98 = (_DAT_1832a8a98 * -0x76c1570c3b216cb9 ^ _DAT_1832a8b10) + _DAT_1832a8e08;
  _DAT_1832a8eb0 = _DAT_1832a8a98 ^ _DAT_1832a8b10;
  _DAT_1832a8c38 = 0;
  _DAT_1832a8ee8 = _DAT_1832a8e08;
  _DAT_1832a8ce8 = func_0x00018b5f7cd0(_DAT_1832a89c8 + 0xffe3007b3a001dff ^ 0x99);
  uVar1 = _DAT_1832a8ce8 & 0x7fffffffffffffff;
  _DAT_1832a8e48 = _DAT_1832a8b48 ^ uVar1 ^ 0xdf;
  _DAT_1832a8ef8 = (_DAT_1832a8ef8 ^ uVar1) + 0xdf ^ 0xf152278727cff43f;
  _DAT_1832a8938 = (_DAT_1832a8938 * 0x10b122da77d48275 ^ _DAT_1832a8ef8) + uVar1;
  _DAT_1832a8dd8 = _DAT_1832a8938 ^ _DAT_1832a8ef8;
  _DAT_1832a8e28 = 0xdf;
  _DAT_1832a8a20 = func_0x00018b5f7cd0(_DAT_1832a8ef0 ^ 0xffa2ff83e5001769);
  uVar1 = _DAT_1832a8a20 << 0x38 | _DAT_1832a8a20 >> 8;
  _DAT_1832a8d40 = (_DAT_1832a8d40 ^ uVar1) + 0x3a8000 ^ 0x58760f3c5dadf37d;
  _DAT_1832a8ab0 = (_DAT_1832a8ab0 * -0x6975d8e1bde704f7 ^ _DAT_1832a8d40) + uVar1;
  _DAT_1832a8d10 = _DAT_1832a8ab0 ^ _DAT_1832a8d40;
  _DAT_1832a8be0 = 0x3a8000;
  uVar1 = (_DAT_1832a8aa0 ^ _DAT_181b78140) + _DAT_1832a8d60 + 0x7be75cda;
  uVar2 = (_DAT_1832a8d60 ^ _UNK_181b78148) + _DAT_1832a8aa0 + 0x3a8000;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832a8aa0 ^ _DAT_181b78140;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8d60 ^ _UNK_181b78148;
  _DAT_1832a8b60 =
       func_0x00018b5f7cd0((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8aa0 + 0x3a8000) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832a8d60 + 0x7be75cda));
  uVar1 = _DAT_1832a8b60 << 0x27 | _DAT_1832a8b60 >> 0x19;
  _DAT_1832a8c48 = _DAT_1832a8c48 ^ uVar1 ^ 0x49ad0bbd4716198e;
  _DAT_1832a8a70 = (_DAT_1832a8a70 * -0x437a370d3c0f9f53 ^ _DAT_1832a8c48) + uVar1;
  _DAT_1832a8df8 = _DAT_1832a8a70 ^ _DAT_1832a8c48;
  _DAT_1832a8ec0 = 0;
  uVar1 = (_DAT_1832a8928 ^ 0x842223fa) + _DAT_1832a8a88 + 0x842223fa;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1832a8928 ^ 0x842223fa;
  uVar2 = ((_DAT_1832a8a88 + _DAT_1832a8928) * 0x2000 | _DAT_1832a8a88 + _DAT_1832a8928 >> 0x33) ^
          _DAT_1832a8a88;
  _DAT_1832a8a48 =
       func_0x00018b5f7cd0((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1832a8928 ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1832a8a88 + 0x842223fa));
  uVar1 = _DAT_1832a8a48 & 0x3fffffffffffffff;
  _DAT_1832a8ed8 = _DAT_1832a8a00 ^ uVar1 ^ 0xdf;
  _DAT_1832a8978 = (_DAT_1832a8978 ^ uVar1) + 0xdf ^ 0x6a66b59ff6ecaf80;
  _DAT_1832a8e58 = (_DAT_1832a8e58 * 0x5c4a372a44bd9d1d ^ _DAT_1832a8978) + uVar1;
  _DAT_1832a89f0 = _DAT_1832a8e58 ^ _DAT_1832a8978;
  _DAT_1832a8ee8 = _DAT_1832a8980 ^ 0xdf;
  _DAT_1832a8a38 = 0xdf;
  uVar1 = (~_DAT_1832a8d58 + 0x19057f20) *
          ((_DAT_1832a8cd8 ^ 0x9d275c3a) + (ulonglong)((uint)_DAT_1832a8cd8 & 0x9d275c3a) * 2);
  uVar1 = (uVar1 | _DAT_1832a8ae8) + (uVar1 & _DAT_1832a8ae8);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1832a8c90 = func_0x00018b5f7cd0((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  uVar1 = (_DAT_1832a8c90 ^ 0x19057f1f) & 0x7fffffffffffffff ^ 0x19057f1f;
  _DAT_1832a8eb0 = _DAT_1832a8eb0 ^ uVar1 ^ 0x40b0c7d88645ed5b;
  _DAT_1832a8c58 = (_DAT_1832a8c58 * -0x736d7f3af4b1361d ^ _DAT_1832a8eb0) + uVar1;
  _DAT_1832a89d0 = _DAT_1832a8c58 ^ _DAT_1832a8eb0;
  _DAT_1832a8950 = 0;
  _DAT_1832a8ce8 = func_0x00018b5f7cd0(_DAT_1832a8a40 + 0x23007c25ffe1ff ^ 0x42);
  _DAT_1832a8a30 = _DAT_1832a8d88 ^ _DAT_1832a8ce8 ^ 0xdf;
  _DAT_1832a8960 = (_DAT_1832a8960 ^ _DAT_1832a8ce8) + 0xdf ^ 0x2678d1ef1e550732;
  _DAT_1832a8a80 = (_DAT_1832a8a80 * 0x5781d53d704d8f8d ^ _DAT_1832a8960) + _DAT_1832a8ce8;
  _DAT_1832a8b28 = _DAT_1832a8a80 ^ _DAT_1832a8960;
  _DAT_1832a8d08 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0x50)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb5e19e0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5e19e0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined1 unaff_XMM11 [16];
  
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x38);
  *(undefined4 *)(unaff_RBP + 0x78) = *(undefined4 *)(unaff_RBP + 0x10);
  lVar1 = *(longlong *)(unaff_RBP + -8);
  uVar2 = (~_DAT_1832a8be0 + 0x53502f51) *
          ((_DAT_1832a8dd8 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1832a8dd8 & 0x8422dcda) * 2);
  uVar2 = (uVar2 | _DAT_1832a8968) + (uVar2 & _DAT_1832a8968);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832a8998 = func_0x00018b5f7cd0((uVar2 | 0xd772f38a) + (ulonglong)((uint)uVar2 & 0xd772f38a))
  ;
  _DAT_1832a8960 = _DAT_1832a8a60 ^ _DAT_1832a8c08 ^ 0x53512f4f;
  _DAT_1832a8a10 = (_DAT_1832a8a10 ^ _DAT_1832a8c08) + 0x53512f4f ^ 0xfa1070e50d818df7;
  _DAT_1832a8ef8 = (_DAT_1832a8ef8 * -0x2573c06bfb05e8b7 ^ _DAT_1832a8a10) + _DAT_1832a8c08;
  _DAT_1832a8b20 = _DAT_1832a8ef8 ^ _DAT_1832a8a10;
  _DAT_1832a8b50 = 0x53512f4f;
  _DAT_1832a89e8 = func_0x00018b5f7cd0(_DAT_1832a89b8 ^ 0xffbbfff455ff4355);
  _DAT_1832a8ad8 = _DAT_1832a8bd8 ^ _DAT_1832a8948 ^ 0x10000ffff;
  _DAT_1832a8b08 = (_DAT_1832a8b08 ^ _DAT_1832a8948) + 0x10000ffff ^ 0xd13457206d7cede6;
  _DAT_1832a8ef8 = (_DAT_1832a8ef8 * -0x2fa0fd8022f21f91 ^ _DAT_1832a8b08) + _DAT_1832a8948;
  _DAT_1832a8df8 = _DAT_1832a8ef8 ^ _DAT_1832a8b08;
  _DAT_1832a8ba8 = 0xffff;
  _DAT_1832a8e28 = func_0x00018b5f7cd0(_DAT_1832a8ae8 + 0xa1ff871d000affU ^ 0x1b);
  _DAT_1832a8a38 =
       (_DAT_1832a8a38 ^ _DAT_1832a8e28 & 0xffffffffffe00000) - 0x3c35c1c8 ^ 0xb13a15b9bb180d57;
  _DAT_1832a8d90 =
       (_DAT_1832a8d90 * -0xb621f95ddce6455 ^ _DAT_1832a8a38) +
       (_DAT_1832a8e28 & 0xffffffffffe00000);
  _DAT_1832a8c30 = _DAT_1832a8d90 ^ _DAT_1832a8a38;
  _DAT_1832a8b90 = 0xc3ca3e38;
  uVar2 = (~_DAT_1832a8ee8 + 0x3c35c1c9) *
          ((_DAT_1832a8d88 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1832a8d88 & 0x8422dcda) * 2);
  uVar2 = (uVar2 | _DAT_1832a8bf0) + (uVar2 & _DAT_1832a8bf0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832a8b98 = func_0x00018b5f7cd0((uVar2 | 0xb8171d12) + (ulonglong)((uint)uVar2 & 0xb8171d12))
  ;
  _DAT_1832a8df8 = _DAT_1832a8a20 ^ _DAT_1832a8b98 ^ 0x3c36c1c7;
  _DAT_1832a8e50 = (_DAT_1832a8e50 ^ _DAT_1832a8b98) + 0x3c36c1c7 ^ 0xc8d2ad9376173f39;
  _DAT_1832a8b30 = (_DAT_1832a8b30 * 0x469f208c62184bc9 ^ _DAT_1832a8e50) + _DAT_1832a8b98;
  _DAT_1832a8998 = _DAT_1832a8b30 ^ _DAT_1832a8e50;
  _DAT_1832a8be0 = 0x3c36c1c7;
  uVar2 = (~_DAT_1832a8c20 + 0xc3ca3e39) *
          ((_DAT_1832a8a58 ^ 0xb814e2e2) + (ulonglong)((uint)_DAT_1832a8a58 & 0xb814e2e2) * 2);
  uVar2 = (uVar2 | _DAT_1832a8de0) + (uVar2 & _DAT_1832a8de0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832a8ca0 = func_0x00018b5f7cd0((uVar2 | 0x7bdedcda) + (ulonglong)((uint)uVar2 & 0x7bdedcda))
  ;
  uVar2 = (_DAT_1832a8ca0 ^ 0xfffeffff) & 0x3ffffffff;
  _DAT_1832a8dc8 = _DAT_1832a8af8 ^ uVar2 ^ 0x10000ffff;
  _DAT_1832a8d58 = (_DAT_1832a8d58 ^ uVar2) + 0x10000ffff ^ 0xbe11370adc2df95;
  _DAT_1832a8c70 = (_DAT_1832a8c70 * -0x139a84c7852d35f5 ^ _DAT_1832a8d58) + uVar2;
  _DAT_1832a8bc0 = _DAT_1832a8c70 ^ _DAT_1832a8d58;
  _DAT_1832a8a88 = 0xffff;
  _DAT_1832a8c40 = func_0x00018b5f7cd0(_DAT_1832a8910 ^ 0x96ffc8710024a5);
  _DAT_1832a8ac0 = _DAT_1832a8ac0 - 0x5b7f9a94 ^ 0xd18cbf0a572ab703;
  _DAT_1832a8d40 = _DAT_1832a89d0 * 0x6bbb9b6d4230b87d;
  _DAT_1832a89d0 = _DAT_1832a8d40 ^ _DAT_1832a8ac0;
  _DAT_1832a8d48 = 0xa480656c;
  uVar2 = (_DAT_1832a8b18 ^ _DAT_181b780c0) + _DAT_1832a89e0 + 0x8422dcda;
  uVar6 = (_DAT_1832a89e0 ^ _UNK_181b780c8) + _DAT_1832a8b18 + 0x5b7f9a94;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8b18 ^ _DAT_181b780c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832a89e0 ^ _UNK_181b780c8;
  _DAT_1832a8930 =
       func_0x00018b5f7cd0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832a8b18 + 0x5b7f9a94) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a89e0 + 0x8422dcda));
  uVar2 = _DAT_1832a8930 << 0x1f | _DAT_1832a8930 >> 0x21;
  _DAT_1832a8be8 = _DAT_1832a8cf8 ^ uVar2 ^ 0x5b809a93;
  _DAT_1832a8af0 = (_DAT_1832a8af0 ^ uVar2) + 0x5b809a93 ^ 0x86e35791356ce473;
  _DAT_1832a8c68 = (_DAT_1832a8c68 * -0x2076019dc7cc4671 ^ _DAT_1832a8af0) + uVar2;
  _DAT_1832a8ac8 = _DAT_1832a8c68 ^ _DAT_1832a8af0;
  _DAT_1832a89e8 = _DAT_1832a8d80 ^ 0x5b809a93;
  _DAT_1832a8978 = 0x5b809a93;
  _DAT_1832a8d90 = func_0x00018b5f7cd0(_DAT_1832a8eb0 ^ 0x5bffd5a9ffdd81);
  uVar2 = _DAT_1832a8d90 ^ 0xa400656c;
  _DAT_1832a8e70 = _DAT_1832a8a18 ^ uVar2 ^ 0x10000ffff;
  _DAT_1832a8ad0 = (_DAT_1832a8ad0 ^ uVar2) + 0x10000ffff ^ 0x8edf45c2d30f81a2;
  _DAT_1832a8c50 = (_DAT_1832a8c50 * 0x3b985763e456cfbb ^ _DAT_1832a8ad0) + uVar2;
  _DAT_1832a8c80 = _DAT_1832a8c50 ^ _DAT_1832a8ad0;
  _DAT_1832a8d20 = 0xffff;
  _DAT_1832a8c48 = func_0x00018b5f7cd0(_DAT_1832a8ed0 ^ 0x4700311cffa1e1);
  uVar2 = _DAT_1832a8c48 ^ 0xffc5ffde;
  uVar6 = uVar2 >> 1 | uVar2;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar2;
  _DAT_1832a8b50 = (_DAT_1832a8b50 ^ uVar2) + 0xf680fcda ^ 0x2acee4cac359e0fc;
  _DAT_1832a8c28 = (_DAT_1832a8c28 * 0x5d19d11bfa3aeeeb ^ _DAT_1832a8b50) + uVar2;
  _DAT_1832a8eb0 = _DAT_1832a8c28 ^ _DAT_1832a8b50;
  _DAT_1832a8ab8 = 0xf680fcda;
  _DAT_1832a8958 = func_0x00018b5f7cd0(_DAT_1832a8bd8 ^ 0x5700202effd7d5);
  uVar2 = ((_DAT_1832a8958 ^ 0xf68afe00) >> 8) * -0x2ff4f6ed6589ab00;
  _DAT_1832a8cd8 = _DAT_1832a8e18 ^ uVar2 ^ 0x1090b02e2;
  _DAT_1832a8cf0 = (_DAT_1832a8cf0 ^ uVar2) + 0x1090b02e2 ^ 0x9100c5ef217f2ca8;
  _DAT_1832a8c00 = (_DAT_1832a8c00 * 0x741e1874bf5102f3 ^ _DAT_1832a8cf0) + uVar2;
  _DAT_1832a89b8 = _DAT_1832a8c00 ^ _DAT_1832a8cf0;
  _DAT_1832a8a90 = 0x90b02e2;
  uVar2 = (_DAT_1832a8df0 ^ _DAT_181b780d0) + _DAT_1832a8b68 + 0x8d2921c7;
  uVar6 = (_DAT_1832a8b68 ^ _UNK_181b780d8) + _DAT_1832a8df0 + 0x90b02e2;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8df0 ^ _DAT_181b780d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832a8b68 ^ _UNK_181b780d8;
  _DAT_1832a89e0 =
       func_0x00018b5f7cd0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832a8df0 + 0x90b02e2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8b68 + 0x8d2921c7));
  _DAT_1832a8db0 = _DAT_1832a89e0 ^ 0x51c6ad23744f84;
  _DAT_1832a8dd0 = _DAT_1832a8dd0 ^ _DAT_1832a8db0 ^ 0x63e045cc356f337f;
  _DAT_1832a89f0 = (_DAT_1832a89f0 * -0x440cc67a81975a93 ^ _DAT_1832a8dd0) + _DAT_1832a8db0;
  _DAT_1832a8de8 = _DAT_1832a89f0 ^ _DAT_1832a8dd0;
  _DAT_1832a8930 = 0;
  uVar2 = (_DAT_1832a8d28 ^ 0x8422dcda) + _DAT_1832a8a68 + 0x8422dcda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8d28 ^ 0x8422dcda;
  uVar6 = ((_DAT_1832a8a68 + _DAT_1832a8d28) * 0x2000 | _DAT_1832a8a68 + _DAT_1832a8d28 >> 0x33) ^
          _DAT_1832a8a68;
  _DAT_1832a8c30 =
       func_0x00018b5f7cd0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1832a8d28 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8a68 + 0x8422dcda));
  _DAT_1832a8978 = _DAT_1832a8ef8 ^ _DAT_1832a8c30 ^ 0xffff;
  _DAT_1832a8ec8 = (_DAT_1832a8ec8 ^ _DAT_1832a8c30) + 0xffff ^ 0xb1a26dbbb2b02679;
  _DAT_1832a8d88 = (_DAT_1832a8d88 * 0x11c77111ae9f85e3 ^ _DAT_1832a8ec8) + _DAT_1832a8c30;
  _DAT_1832a8bb8 = _DAT_1832a8d88 ^ _DAT_1832a8ec8;
  _DAT_1832a8a18 = 0xffff;
  uVar2 = (_DAT_1832a8940 ^ _DAT_181b780e0) + _DAT_1832a89a0 + 0x29e79c39;
  uVar6 = (_DAT_1832a89a0 ^ _UNK_181b780e8) + _DAT_1832a8940 + 0x523a40e3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8940 ^ _DAT_181b780e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832a89a0 ^ _UNK_181b780e8;
  _DAT_1832a8990 =
       func_0x00018b5f7cd0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832a8940 + 0x523a40e3) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a89a0 + 0x29e79c39));
  uVar2 = (_DAT_1832a8990 ^ 0x37d0e20fca7775d4) << 0x2b |
          (_DAT_1832a8990 ^ 0x37d0e20fca7775d4) >> 0x15;
  _DAT_1832a8d30 = _DAT_1832a8d30 ^ uVar2 ^ 0x1510709e45c6aacc;
  _DAT_1832a8ef8 = (_DAT_1832a8ef8 * 0x722713ad3d09678f ^ _DAT_1832a8d30) + uVar2;
  _DAT_1832a8ca0 = _DAT_1832a8ef8 ^ _DAT_1832a8d30;
  _DAT_1832a8a30 = 0;
  uVar2 = ((_DAT_1832a8c38 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1832a8c38 & 0x8422dcda) * 2) *
          -_DAT_1832a8ae8;
  uVar2 = (uVar2 | _DAT_1832a8cc0) + (uVar2 & _DAT_1832a8cc0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832a8d48 = func_0x00018b5f7cd0((uVar2 | 0x8422dcda) + (ulonglong)((uint)uVar2 & 0x8422dcda))
  ;
  uVar2 = _DAT_1832a8d48 & 0xfffffffffffffff8;
  _DAT_1832a8c98 = _DAT_1832a8960 ^ uVar2 ^ 0xffff;
  _DAT_1832a8968 = (_DAT_1832a8968 ^ uVar2) + 0xffff ^ 0xee4abb766af0d2a4;
  _DAT_1832a8a40 = (_DAT_1832a8a40 * 0x3c66d1306b74f57 ^ _DAT_1832a8968) + uVar2;
  _DAT_1832a8e40 = _DAT_1832a8a40 ^ _DAT_1832a8968;
  _DAT_1832a8ec8 = 0xffff;
  uVar2 = (_DAT_1832a8bd8 ^ 0x8422dcda) + _DAT_1832a8928 + 0x8422dcda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8bd8 ^ 0x8422dcda;
  uVar6 = ((_DAT_1832a8928 + _DAT_1832a8bd8) * 0x2000 | _DAT_1832a8928 + _DAT_1832a8bd8 >> 0x33) ^
          _DAT_1832a8928;
  _DAT_1832a8ee8 =
       func_0x00018b5f7cd0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1832a8bd8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a8928 + 0x8422dcda));
  _DAT_1832a8c50 = _DAT_1832a8a90 ^ _DAT_1832a8ee8 ^ 0xffff;
  _DAT_1832a8a18 = (_DAT_1832a8e50 ^ _DAT_1832a8ee8) + 0xffff ^ 0xe2e88fba0c8d7635;
  _DAT_1832a8e50 = (_DAT_1832a8e50 * -0x2108754055eadcab ^ _DAT_1832a8a18) + _DAT_1832a8ee8;
  _DAT_1832a8a18 = _DAT_1832a8e50 ^ _DAT_1832a8a18;
  _DAT_1832a8ce0 = 0xffff;
  uVar6 = (ulonglong)*(uint *)(unaff_RBP + 0x50);
  auVar4._8_8_ = _UNK_1801098d8;
  auVar4._0_8_ = uVar6 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _DAT_181b780f0,unaff_XMM11);
  uVar3 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar3 + _DAT_1832a8b98;
  if (auVar5._4_4_ < 0) {
    uVar2 = _DAT_1832a8b30 ^ uVar3;
  }
  _DAT_1832a8a10 = func_0x00018b5f7cd0(SUB161(auVar4 ^ _DAT_181b780f0,5) ^ uVar2);
  uVar2 = ((uVar6 | 0xffff) ^ _DAT_1832a8a10) * 0x51f91eb1d52f1ad1;
  uVar2 = uVar2 << 0x38 | uVar2 >> 8;
  _DAT_1832a8980 = uVar6 & 0xffff;
  _DAT_1832a8c38 = (_DAT_1832a8c38 ^ uVar2) + _DAT_1832a8980 ^ 0xaad410676977df61;
  _DAT_1832a8df8 = (_DAT_1832a8df8 * -0x7055e22e4f45c2bb ^ _DAT_1832a8c38) + uVar2;
  _DAT_1832a8cd8 = _DAT_1832a8df8 ^ _DAT_1832a8c38;
  *(int *)(unaff_RBP + 0x80) = (int)_DAT_1832a8980;
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb5e2914 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5e2914(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x68) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x68),*(undefined8 *)(unaff_RBP + 0x38));
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb5e2cdc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5e2cdc(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar6;
  int unaff_EDI;
  ulonglong unaff_R13;
  ulonglong uVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 unaff_XMM11 [16];
  
  *(undefined4 *)(unaff_RBP + 0x34) = unaff_ESI;
  *(int *)(unaff_RBP + 0x40) = unaff_EDI << 6;
  *(bool *)(unaff_RBP + 0x50) = *(longlong *)(unaff_RBP + -8) == 0;
  _DAT_1832a8da8 = func_0x00018b5f7cd0(_DAT_1832a8ce8 + 0x1001d9800a1ff ^ 0xa3);
  uVar5 = _DAT_1832a8da8 >> 1 | _DAT_1832a8da8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R13) + (uVar5 >> 2 & unaff_R13);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1832a8da8;
  _DAT_1832a8d18 = (_DAT_1832a8d18 ^ uVar5) + 0xffed37bd ^ 0xc387fc59c3de7f3f;
  _DAT_1832a8ce8 = (_DAT_1832a8ce8 * -0x5f3db08d8c217f19 ^ _DAT_1832a8d18) + uVar5;
  _DAT_1832a8c28 = _DAT_1832a8ce8 ^ _DAT_1832a8d18;
  _DAT_1832a8c68 = 0xffed37bd;
  _DAT_1832a8b48 = func_0x00018b5f7cd0(_DAT_1832a8b60 + 0x64ff6f31fffbff ^ 0xb5);
  _DAT_1832a89f8 =
       (_DAT_1832a89f8 ^ _DAT_1832a8c68 & 0xfffffffffffffff) + 0x17264e17 ^ 0xf6315bdaaa83832;
  _DAT_1832a8a88 =
       (_DAT_1832a8a88 * -0x69f87b15c4602225 ^ _DAT_1832a89f8) +
       (_DAT_1832a8c68 & 0xfffffffffffffff);
  _DAT_1832a8dd8 = _DAT_1832a8a88 ^ _DAT_1832a89f8;
  _DAT_1832a8b98 = 0x17264e17;
  uVar5 = (~_DAT_1832a8a10 + 0x96e22af1) *
          ((_DAT_1832a8e78 ^ 0x842224e5) + (ulonglong)((uint)_DAT_1832a8e78 & 0x842224e5) * 2);
  uVar5 = (uVar5 | _DAT_1832a89d0) + (uVar5 & _DAT_1832a89d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8ab0 = func_0x00018b5f7cd0((uVar5 | 0x12c00e15) + (ulonglong)((uint)uVar5 & 0x12c00e15))
  ;
  uVar5 = (_DAT_1832a8ab0 & 0x7fffffffffe00000) << 0x1f |
          (_DAT_1832a8ab0 & 0x7fffffffffe00000) >> 0x21;
  _DAT_1832a8968 = _DAT_1832a8dc0 ^ uVar5 ^ 0x96e232b0;
  _DAT_1832a8a38 = (_DAT_1832a8a38 ^ uVar5) + 0x96e232b0 ^ 0x811d8511131d4097;
  _DAT_1832a8ef8 = (_DAT_1832a8ef8 * 0x2791846abc891c9b ^ _DAT_1832a8a38) + uVar5;
  _DAT_1832a8dd8 = _DAT_1832a8ef8 ^ _DAT_1832a8a38;
  _DAT_1832a8958 = 0x96e232b0;
  _DAT_1832a8920 = func_0x00018b5f7cd0(_DAT_1832a8de8 ^ 0xffbbffbb7cff34fb);
  _DAT_1832a8bf0 = _DAT_1832a8ec0 ^ _DAT_1832a8920 ^ 0x1000007c0;
  _DAT_1832a8bd8 = (_DAT_1832a8bd8 ^ _DAT_1832a8920) + 0x1000007c0 ^ 0x93937bb28821178e;
  _DAT_1832a8e10 = (_DAT_1832a8e10 * 0x6df007c196709e47 ^ _DAT_1832a8bd8) + _DAT_1832a8920;
  _DAT_1832a8950 = _DAT_1832a8e10 ^ _DAT_1832a8bd8;
  _DAT_1832a8d70 = 0x7c0;
  uVar5 = (_DAT_1832a8b80 ^ _DAT_181b78290) + _DAT_1832a89e8 + 0x84222325;
  uVar10 = (_DAT_1832a89e8 ^ _UNK_181b78298) + _DAT_1832a8b80 + 0x3a15caef;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832a8b80 ^ _DAT_181b78290;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832a89e8 ^ _UNK_181b78298;
  _DAT_1832a8ce0 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a8b80 + 0x3a15caef) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832a89e8 + 0x84222325));
  uVar5 = _DAT_1832a8ce0 - (_DAT_1832a8ce0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R13) + (uVar5 >> 2 & unaff_R13);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1832a8ce0;
  _DAT_1832a8cd8 = (_DAT_1832a8cd8 ^ uVar5) - 0x3a15caef ^ 0x6f1a044e8b85d7c8;
  _DAT_1832a8e48 = (_DAT_1832a8e48 * 0x6a4ea575b98ade0d ^ _DAT_1832a8cd8) + uVar5;
  _DAT_1832a8910 = _DAT_1832a8e48 ^ _DAT_1832a8cd8;
  _DAT_1832a8b88 = 0xc5ea3511;
  uVar5 = (~_DAT_1832a8e28 + 0x3a15caf0) *
          ((_DAT_1832a8d80 ^ 0x842224e5) + (ulonglong)((uint)_DAT_1832a8d80 & 0x842224e5) * 2);
  uVar5 = (uVar5 | _DAT_1832a89a8) + (uVar5 & _DAT_1832a89a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8e38 = func_0x00018b5f7cd0((uVar5 | 0xbe37ee0a) + (ulonglong)((uint)uVar5 & 0xbe37ee0a))
  ;
  uVar5 = _DAT_1832a8e38 << 7 | _DAT_1832a8e38 >> 0x39;
  _DAT_1832a8e70 = _DAT_1832a8db0 ^ uVar5 ^ 0x3a15d2af;
  _DAT_1832a8eb0 = (_DAT_1832a8eb0 ^ uVar5) + 0x3a15d2af ^ 0xc44b3e6763d1ca1f;
  _DAT_1832a8be0 = (_DAT_1832a8be0 * 0x703cd6e7e3d806f9 ^ _DAT_1832a8eb0) + uVar5;
  _DAT_1832a8a70 = _DAT_1832a8be0 ^ _DAT_1832a8eb0;
  _DAT_1832a8b08 = 0x3a15d2af;
  uVar5 = (~_DAT_1832a8a70 + 0xc5ea3512) *
          ((_DAT_1832a8dc0 ^ 0xbe37f18a) + (ulonglong)((uint)_DAT_1832a8dc0 & 0xbe37f18a) * 2);
  uVar5 = (uVar5 | _DAT_1832a8a48) + (uVar5 & _DAT_1832a8a48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8930 = func_0x00018b5f7cd0((uVar5 | 0x7bddc49b) + (ulonglong)((uint)uVar5 & 0x7bddc49b))
  ;
  uVar5 = _DAT_1832a8930 - (_DAT_1832a8930 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R13) + (uVar5 >> 2 & unaff_R13);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1832a8930;
  _DAT_1832a8a30 = _DAT_1832a8d38 ^ uVar5 ^ 0x1000007c0;
  _DAT_1832a8e08 = (_DAT_1832a8e08 ^ uVar5) + 0x1000007c0 ^ 0x451bd024c1e291ef;
  _DAT_1832a8b38 = (_DAT_1832a8b38 * 0x4894efcb4828d661 ^ _DAT_1832a8e08) + uVar5;
  _DAT_1832a8978 = _DAT_1832a8b38 ^ _DAT_1832a8e08;
  _DAT_1832a8bc8 = 0x7c0;
  uVar5 = (_DAT_1832a8e08 ^ _DAT_181b782a0) + _DAT_1832a89b0 + 0x84222325;
  uVar10 = (_DAT_1832a89b0 ^ _UNK_181b782a8) + _DAT_1832a8e08 + 0xa54ce26c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832a8e08 ^ _DAT_181b782a0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832a89b0 ^ _UNK_181b782a8;
  _DAT_1832a8cc0 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a8e08 + 0xa54ce26c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832a89b0 + 0x84222325));
  uVar10 = _UNK_181b782b8;
  uVar5 = _DAT_181b782b0;
  uVar2 = (_DAT_1832a8cc0 & 0xffffffffc000) * 0x10000;
  _DAT_1832a8a48 = (_DAT_1832a8a48 ^ uVar2) - 0xa54ce26c ^ 0xec4d5b516c34b982;
  _DAT_1832a8c38 = (_DAT_1832a8c38 * -0x5d0fb96223bccbe7 ^ _DAT_1832a8a48) + uVar2;
  _DAT_1832a8ee0 = _DAT_1832a8c38 ^ _DAT_1832a8a48;
  _DAT_1832a8928 = 0x5ab31d94;
  uVar2 = (_DAT_1832a8bf8 ^ _DAT_181b782b0) + _DAT_1832a89b8 + 0x7bcf1498;
  uVar9 = (_DAT_1832a89b8 ^ _UNK_181b782b8) + _DAT_1832a8bf8 + 0x17264e17;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8bf8 ^ _DAT_181b782b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832a89b8 ^ _UNK_181b782b8;
  _DAT_1832a8d70 =
       func_0x00018b5f7cd0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1832a8bf8 + 0x17264e17) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832a89b8 + 0x7bcf1498));
  uVar2 = _DAT_1832a8d70 ^ 0x24802;
  _DAT_1832a8e40 = (_DAT_1832a8e88 ^ uVar2 ^ 0x1171385d4 ^ uVar2) + 0x1171385d4 ^ 0x64d462902b360887
  ;
  _DAT_1832a8c98 = (_DAT_1832a8c98 * -0x27ba5540ab7f1e73 ^ _DAT_1832a8e40) + uVar2;
  _DAT_1832a8950 = _DAT_1832a8c98 ^ _DAT_1832a8e40;
  _DAT_1832a8c80 = 0x171385d4;
  _DAT_1832a8b20 = func_0x00018b5f7cd0(_DAT_1832a8a70 ^ 0xffb6005b8aff6860);
  _DAT_1832a8ac0 =
       (_DAT_1832a8ac0 ^ _DAT_1832a8b20 ^ 0x17249b49917fd9ec) + 0xe8cb79aa ^ 0xc1d148a63e1fe714;
  _DAT_1832a8a80 =
       (_DAT_1832a8a80 * 0x3ead940758edd5c9 ^ _DAT_1832a8ac0) +
       (_DAT_1832a8b20 ^ 0x17249b49917fd9ec);
  _DAT_1832a8c00 = _DAT_1832a8a80 ^ _DAT_1832a8ac0;
  _DAT_1832a8cb8 = 0xe8cb79aa;
  uVar2 = (_DAT_1832a8aa8 ^ uVar5) + _DAT_1832a8b78 + 0x7bcf1498;
  uVar9 = (_DAT_1832a8b78 ^ uVar10) + _DAT_1832a8aa8 + 0x17264e17;
  uVar5 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8aa8 ^ uVar5;
  uVar10 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832a8b78 ^ uVar10;
  _DAT_1832a8900 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a8aa8 + 0x17264e17) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832a8b78 + 0x7bcf1498));
  uVar5 = (_DAT_1832a8900 ^ 0xffef7fbf) & 0x3fffffffff;
  _DAT_1832a8ca0 = (_DAT_1832a8ca0 ^ uVar5) + 0x17240615 ^ 0xe50a94c09e515786;
  _DAT_1832a8ba0 = (_DAT_1832a8ba0 * -0x3b4f8f65da75eba3 ^ _DAT_1832a8ca0) + uVar5;
  _DAT_1832a8948 = _DAT_1832a8ba0 ^ _DAT_1832a8ca0;
  _DAT_1832a8df8 = 0x17240615;
  _DAT_1832a89a8 = func_0x00018b5f7cd0(_DAT_1832a8da8 ^ 0xffae003d63009e9e);
  uVar5 = (_DAT_1832a89a8 ^ 0xe8cb79aa) & 0xffffffffffffff;
  _DAT_1832a8bd8 = _DAT_1832a8c38 ^ uVar5 ^ 0x1171385d4;
  _DAT_1832a8a48 = (_DAT_1832a8a48 ^ uVar5) + 0x1171385d4 ^ 0xb6a82eeea804d95;
  _DAT_1832a8a80 = (_DAT_1832a8a80 * -0x3251b313900318c3 ^ _DAT_1832a8a48) + uVar5;
  _DAT_1832a8b88 = _DAT_1832a8a80 ^ _DAT_1832a8a48;
  _DAT_1832a8aa8 = 0x171385d4;
  uVar5 = (~_DAT_1832a8a38 + 0x171385d5) *
          ((_DAT_1832a8dc0 ^ 0x9331a6f1) + (ulonglong)((uint)_DAT_1832a8dc0 & 0x9331a6f1) * 2);
  uVar5 = (uVar5 | _DAT_1832a89c8) + (uVar5 & _DAT_1832a89c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8d70 = func_0x00018b5f7cd0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  uVar5 = _DAT_1832a8d70 << 0x19 ^ 0x1276dbef20000000;
  _DAT_1832a8bc8 = uVar5 >> 0x19;
  uVar5 = uVar5 >> 0x1a | _DAT_1832a8bc8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar10 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar10 >> 0x10 | uVar10;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & unaff_R13) + (uVar5 >> 2 & unaff_R13);
  _DAT_1832a8bc8 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
       _DAT_1832a8bc8;
  _DAT_1832a8a30 = _DAT_1832a8a30 ^ _DAT_1832a8bc8 ^ 0x4b85528de9f1565c;
  _DAT_1832a8dc8 = (_DAT_1832a8dc8 * -0x56d4f87b5e12ab67 ^ _DAT_1832a8a30) + _DAT_1832a8bc8;
  _DAT_1832a89f0 = _DAT_1832a8dc8 ^ _DAT_1832a8a30;
  _DAT_1832a8b18 = 0;
  uVar5 = ((_DAT_1832a8d30 ^ 0x842224e5) + (ulonglong)((uint)_DAT_1832a8d30 & 0x842224e5) * 2) *
          -_DAT_1832a8908;
  uVar5 = (uVar5 | _DAT_1832a8aa0) + (uVar5 & _DAT_1832a8aa0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8b78 = func_0x00018b5f7cd0((uVar5 | 0x842224e5) + (ulonglong)((uint)uVar5 & 0x842224e5))
  ;
  _DAT_1832a8b38 = _DAT_1832a8ef0 ^ _DAT_1832a8b78 ^ 0x7c0;
  _DAT_1832a8930 = (_DAT_1832a8930 ^ _DAT_1832a8b78) + 0x7c0 ^ 0xe17eeb779ff35e39;
  _DAT_1832a8958 = (_DAT_1832a8958 * 0x215e0cd717c5e163 ^ _DAT_1832a8930) + _DAT_1832a8b78;
  _DAT_1832a8e48 = _DAT_1832a8958 ^ _DAT_1832a8930;
  _DAT_1832a8b50 = 0x7c0;
  _DAT_1832a8b10 = func_0x00018b5f7cd0(_DAT_1832a8af0 + 0xff98ff83db000fffU ^ 0x43);
  uVar5 = _DAT_1832a8b10 ^ 0xffed37bcfffffffe;
  uVar10 = uVar5 >> 1 | uVar5;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & unaff_R13) + (uVar10 >> 2 & unaff_R13);
  uVar5 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  _DAT_1832a8bf0 = (_DAT_1832a8bf0 ^ uVar5) + 0x12c842 ^ 0xa6c0edc9033e463f;
  _DAT_1832a8cd8 = (_DAT_1832a8cd8 * 0x7e10f6a9de23b59f ^ _DAT_1832a8bf0) + uVar5;
  _DAT_1832a8c10 = _DAT_1832a8cd8 ^ _DAT_1832a8bf0;
  _DAT_1832a8990 = 0x12c842;
  uVar5 = (_DAT_1832a8ac0 ^ _DAT_181b782c0) + _DAT_1832a89e8 + 0x7bcf1498;
  uVar10 = (_DAT_1832a89e8 ^ _UNK_181b782c8) + _DAT_1832a8ac0 + 0x12c842;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832a8ac0 ^ _DAT_181b782c0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832a89e8 ^ _UNK_181b782c8;
  _DAT_1832a89e0 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a8ac0 + 0x12c842) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832a89e8 + 0x7bcf1498));
  _DAT_1832a8ce0 = _DAT_1832a8ce0 ^ _DAT_1832a8980 ^ 0xffed37bd ^ 0x852fa428c5daf455;
  _DAT_1832a8cc0 =
       (_DAT_1832a8cc0 * 0x48971060401ddc8d ^ _DAT_1832a8ce0) + (_DAT_1832a8980 ^ 0xffed37bd);
  _DAT_1832a8bd8 = _DAT_1832a8cc0 ^ _DAT_1832a8ce0;
  _DAT_1832a8d28 = 0;
  uVar5 = (~_DAT_1832a8b98 + 0x7fad1725) *
          ((_DAT_1832a8b78 ^ 0xfb8f3401) + (ulonglong)((uint)_DAT_1832a8b78 & 0xfb8f3401) * 2);
  uVar5 = (uVar5 | _DAT_1832a89d8) + (uVar5 & _DAT_1832a89d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8db0 = func_0x00018b5f7cd0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1832a8d90 = _DAT_1832a8d90 ^ _DAT_1832a8db0 & 0xfffffffffe000000 ^ 0x7d8ea729a677b05a;
  _DAT_1832a8dc0 =
       (_DAT_1832a8dc0 * 0xc9554516ee94739 ^ _DAT_1832a8d90) + (_DAT_1832a8db0 & 0xfffffffffe000000)
  ;
  _DAT_1832a8bf8 = _DAT_1832a8dc0 ^ _DAT_1832a8d90;
  _DAT_1832a8b78 = 0;
  uVar6 = *(uint *)(unaff_RBP + 0x40) & 0x7c0;
  plVar1 = *(longlong **)(unaff_RBP + 0x68);
  lVar3 = (**(code **)(plVar1 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(plVar1);
  *(int *)(unaff_RBP + 0x70) = (int)*(char *)(lVar3 + *(int *)(unaff_RBP + 0x78));
  (**(code **)(plVar1 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(plVar1);
  uVar4 = *(uint *)(unaff_RBP + 0x70);
  uVar5 = (~_DAT_1832a8a80 + 0x5e8641df) *
          ((_DAT_1832a8ae0 ^ 0x33166344) + (ulonglong)((uint)_DAT_1832a8ae0 & 0x33166344) * 2);
  uVar5 = (uVar5 | _DAT_1832a8c98) + (uVar5 & _DAT_1832a8c98);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8ef8 = func_0x00018b5f7cd0((uVar5 | 0x6d90229a) + (ulonglong)((uint)uVar5 & 0x6d90229a))
  ;
  _DAT_1832a8df0 =
       (_DAT_1832a8df0 ^ _DAT_1832a8ef8 & 0x7fffffffffffffff) + 0xffb641ff ^ 0x95ee100039e30d24;
  _DAT_1832a8948 =
       (_DAT_1832a8948 * 0x19072920a427042f ^ _DAT_1832a8df0) +
       (_DAT_1832a8ef8 & 0x7fffffffffffffff);
  _DAT_1832a8e48 = _DAT_1832a8948 ^ _DAT_1832a8df0;
  _DAT_1832a8b78 = 0xffb641ff;
  uVar5 = (_DAT_1832a89a8 ^ _DAT_181b782d0) + _DAT_1832a8c98 + 0x8422231a;
  uVar10 = (_DAT_1832a8c98 ^ _UNK_181b782d8) + _DAT_1832a89a8 + 0xfa53b3b8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832a89a8 ^ _DAT_181b782d0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832a8c98 ^ _UNK_181b782d8;
  _DAT_1832a89c8 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a89a8 + 0xfa53b3b8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832a8c98 + 0x8422231a));
  uVar5 = _DAT_1832a89c8 * 0x718a41b7a938893b;
  _DAT_1832a8dc0 = _DAT_1832a8ac0 ^ uVar5 ^ 0xfa53b3f7;
  _DAT_1832a8c60 = (_DAT_1832a8c60 ^ uVar5) + 0xfa53b3f7 ^ 0xeaf3679549a3bdc0;
  _DAT_1832a8eb8 = (_DAT_1832a8eb8 * -0x63b11e79240abd39 ^ _DAT_1832a8c60) + uVar5;
  _DAT_1832a89c0 = _DAT_1832a8eb8 ^ _DAT_1832a8c60;
  _DAT_1832a8c20 = 0xfa53b3f7;
  _DAT_1832a8e28 = func_0x00018b5f7cd0(_DAT_1832a8b20 + 0xffcbff978a0052ff ^ 0xb0);
  _DAT_1832a8940 = _DAT_1832a8c50 ^ _DAT_1832a8a50 ^ 0x10000003f;
  _DAT_1832a8b70 = (_DAT_1832a8b70 ^ _DAT_1832a8a50) + 0x10000003f ^ 0x1c54ca52a08a1333;
  _DAT_1832a8ad8 = (_DAT_1832a8ad8 * -0x173620168f03a7 ^ _DAT_1832a8b70) + _DAT_1832a8a50;
  _DAT_1832a8b08 = _DAT_1832a8ad8 ^ _DAT_1832a8b70;
  _DAT_1832a8be8 = 0x3f;
  _DAT_1832a8ee0 = func_0x00018b5f7cd0(_DAT_1832a8a40 + 0x6b004caa0066ffU ^ 0x95);
  uVar5 = _DAT_1832a8ee0 ^ 0x5789b67f;
  uVar10 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & unaff_R13) + (uVar10 >> 2 & unaff_R13);
  uVar5 = ((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar5)
          & 0xffffffffffff ^ 0x5789b660;
  _DAT_1832a8e20 = _DAT_1832a8ae8 ^ uVar5 ^ 0x5789b69f;
  _DAT_1832a8c68 = (_DAT_1832a8c68 ^ uVar5) + 0x5789b69f ^ 0x76d53ebbc32a4502;
  _DAT_1832a8c38 = (_DAT_1832a8c38 * -0x24d91188b0533c49 ^ _DAT_1832a8c68) + uVar5;
  _DAT_1832a8d98 = _DAT_1832a8c38 ^ _DAT_1832a8c68;
  _DAT_1832a8d10 = 0x5789b69f;
  uVar5 = (_DAT_1832a8cb8 ^ _DAT_181b782e0) + _DAT_1832a8e30 + 0xd3ab95ba;
  uVar10 = (_DAT_1832a8e30 ^ _UNK_181b782e8) + _DAT_1832a8cb8 + 0xa87649a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832a8cb8 ^ _DAT_181b782e0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832a8e30 ^ _UNK_181b782e8;
  _DAT_1832a8e50 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a8cb8 + 0xa87649a0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832a8e30 + 0xd3ab95ba));
  uVar5 = _DAT_1832a8e50 ^ 0x80;
  _DAT_1832a8c88 = _DAT_1832a8a90 ^ uVar5 ^ 0x10000003f;
  _DAT_1832a8eb0 = (_DAT_1832a8eb0 ^ uVar5) + 0x10000003f ^ 0xa92b319507afde81;
  _DAT_1832a8d48 = (_DAT_1832a8d48 * 0x4621d422950ff341 ^ _DAT_1832a8eb0) + uVar5;
  _DAT_1832a8988 = _DAT_1832a8d48 ^ _DAT_1832a8eb0;
  _DAT_1832a8b28 = 0x3f;
  uVar5 = (_DAT_1832a8b58 ^ _DAT_181b782f0) + _DAT_1832a8e28 + 0x8422231a;
  uVar10 = (_DAT_1832a8e28 ^ _UNK_181b782f8) + _DAT_1832a8b58 + 0x6e2f758c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832a8b58 ^ _DAT_181b782f0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832a8e28 ^ _UNK_181b782f8;
  _DAT_1832a8e10 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a8b58 + 0x6e2f758c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832a8e28 + 0x8422231a));
  uVar5 = (_DAT_1832a8e10 ^ 0x1b1c000000) & 0xfffffffffc000000;
  _DAT_1832a89b8 = _DAT_1832a8bb0 ^ uVar5 ^ 0x6e2f75cb;
  _DAT_1832a89e8 = (_DAT_1832a89e8 ^ uVar5) + 0x6e2f75cb ^ 0xac73da75aa397514;
  _DAT_1832a8d68 = (_DAT_1832a8d68 * 0x1cc2308875d01925 ^ _DAT_1832a89e8) + uVar5;
  _DAT_1832a8cb8 = _DAT_1832a8d68 ^ _DAT_1832a89e8;
  _DAT_1832a8d38 = 0x6e2f75cb;
  uVar5 = (~_DAT_1832a8938 + 0xb9a4b5fb) *
          ((_DAT_1832a8cb8 ^ 0x7b9462da) + (ulonglong)((uint)_DAT_1832a8cb8 & 0x7b9462da) * 2);
  uVar5 = (uVar5 | _DAT_1832a8e90) + (uVar5 & _DAT_1832a8e90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8b18 = func_0x00018b5f7cd0((uVar5 | 0xc230d720) + (ulonglong)((uint)uVar5 & 0xc230d720))
  ;
  _DAT_1832a8de8 = (_DAT_1832a8de8 ^ _DAT_1832a8b18) + 0x4612f405 ^ 0xe68ba0168d514f82;
  _DAT_1832a8dc0 = (_DAT_1832a8dc0 * -0x16b63e89052b2617 ^ _DAT_1832a8de8) + _DAT_1832a8b18;
  _DAT_1832a8978 = _DAT_1832a8dc0 ^ _DAT_1832a8de8;
  _DAT_1832a8a68 = 0x4612f405;
  uVar5 = (_DAT_1832a8d38 ^ _DAT_181b78300) + _DAT_1832a8a38 + 0x7b9462da;
  uVar10 = (_DAT_1832a8a38 ^ _UNK_181b78308) + _DAT_1832a8d38 + 0xb9a4b5fa;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832a8d38 ^ _DAT_181b78300;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832a8a38 ^ _UNK_181b78308;
  _DAT_1832a8920 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a8d38 + 0xb9a4b5fa) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832a8a38 + 0x7b9462da));
  uVar5 = _DAT_1832a8920 ^ 0xb96f3c392301be06;
  uVar10 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & unaff_R13) + (uVar10 >> 2 & unaff_R13);
  uVar5 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5;
  uVar10 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & unaff_R13) + (uVar10 >> 2 & unaff_R13);
  uVar5 = ((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5)
          * -0x2de336088a78f7e1;
  _DAT_1832a8b38 = (_DAT_1832a8b38 ^ uVar5) + 0xb9a401fa ^ 0x6150a9b26a5b41c6;
  _DAT_1832a89c0 = (_DAT_1832a89c0 * 0xf8690500968d36f ^ _DAT_1832a8b38) + uVar5;
  _DAT_1832a8928 = _DAT_1832a89c0 ^ _DAT_1832a8b38;
  _DAT_1832a8c18 = 0xb9a401fa;
  uVar5 = (~_DAT_1832a8cc8 + 0x734803f5) *
          ((_DAT_1832a8bf8 ^ 0xc230d720) + (ulonglong)((uint)_DAT_1832a8bf8 & 0xc230d720) * 2);
  uVar5 = (uVar5 | _DAT_1832a8c68) + (uVar5 & _DAT_1832a8c68);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8a98 = func_0x00018b5f7cd0((uVar5 | 0xb178d4d4) + (ulonglong)((uint)uVar5 & 0xb178d4d4))
  ;
  uVar5 = (_DAT_1832a8a98 & 0xffffffffffffffc0) - (_DAT_1832a8a98 >> 1 & 0x5555555555555540);
  uVar5 = (uVar5 & 0x3333333333333300) + (uVar5 >> 2 & 0x3333333333333330);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f03) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1832a8a98 & 0xffffffffffffffc0;
  uVar5 = uVar5 << 0x35 | uVar5 >> 0xb;
  _DAT_1832a8990 = _DAT_1832a8b90 ^ uVar5 ^ 0xb95af7f9;
  _DAT_1832a8cd8 = (_DAT_1832a8cd8 ^ uVar5) + 0xb95af7f9 ^ 0xe6672f7be15a4bd5;
  _DAT_1832a8b40 = (_DAT_1832a8b40 * -0x4124404665006681 ^ _DAT_1832a8cd8) + uVar5;
  _DAT_1832a8b60 = _DAT_1832a8b40 ^ _DAT_1832a8cd8;
  _DAT_1832a8ba8 = 0xb95af7f9;
  uVar5 = ((_DAT_1832a8908 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1832a8908 & 0x8422231a) * 2) *
          -_DAT_1832a8990;
  uVar5 = (uVar5 | _DAT_1832a8b58) + (uVar5 & _DAT_1832a8b58);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8ae0 = func_0x00018b5f7cd0((uVar5 | 0x8422231a) + (ulonglong)((uint)uVar5 & 0x8422231a))
  ;
  _DAT_1832a8b58 = _DAT_1832a8a98 ^ _DAT_1832a8ae0 ^ 0x3f;
  _DAT_1832a8ba8 = (_DAT_1832a8ba8 ^ _DAT_1832a8ae0) + 0x3f ^ 0x943b650357ce0c60;
  _DAT_1832a8ba0 =
       (_DAT_1832a8b28 * -0x5a19f35eb1b335d1 ^ _DAT_1832a8ba8) + _DAT_1832a8ae0 ^ _DAT_1832a8ba8;
  _DAT_1832a8b28 = 0x3f;
  _DAT_1832a8940 = func_0x00018b5f7cd0(_DAT_1832a8968 ^ 0x9d0083e2ffe427);
  _DAT_1832a8ac8 =
       (_DAT_1832a8ac8 ^ _DAT_1832a8940 ^ 0xffb641fe0049be01) + 0x49be00 ^ 0xaf1385f1f781f579;
  _DAT_1832a8978 =
       (_DAT_1832a8978 * 0x1f553751a091085f ^ _DAT_1832a8ac8) +
       (_DAT_1832a8940 ^ 0xffb641fe0049be01);
  _DAT_1832a8bd0 = _DAT_1832a8978 ^ _DAT_1832a8ac8;
  _DAT_1832a8ca8 = 0x49be00;
  uVar5 = (~_DAT_1832a8a70 + 0xb7344062) *
          ((_DAT_1832a8ed0 ^ 0x33166344) + (ulonglong)((uint)_DAT_1832a8ed0 & 0x33166344) * 2);
  uVar5 = (uVar5 | _DAT_1832a8d90) + (uVar5 & _DAT_1832a8d90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832a8d28 = func_0x00018b5f7cd0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_1832a8950 = _DAT_1832a8950 ^ _DAT_1832a8d28 ^ 0xb7344061 ^ 0x7c6cce0553130703;
  _DAT_1832a8b90 =
       (_DAT_1832a8b90 * -0x77325c7062a0710b ^ _DAT_1832a8950) + (_DAT_1832a8d28 ^ 0xb7344061);
  _DAT_1832a8da0 = _DAT_1832a8b90 ^ _DAT_1832a8950;
  _DAT_1832a8db0 = 0;
  uVar5 = (ulonglong)uVar4 ^ 0x84222325;
  uVar5 = (~_DAT_1832a8d08 + 0x40) *
          ((uVar5 ^ _DAT_1832a8a88) + (ulonglong)((uint)_DAT_1832a8a88 & (uint)uVar5) * 2);
  uVar5 = (uVar5 | _DAT_1832a8b88) + (uVar5 & _DAT_1832a8b88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar10 = (ulonglong)uVar4 ^ 0x8422231a;
  _DAT_1832a8e90 = func_0x00018b5f7cd0((uVar10 | uVar5) + (ulonglong)((uint)uVar10 & (uint)uVar5));
  uVar5 = (_DAT_1832a8e90 & 0x7fffffffffffffff) * -0x29e19e3a5cb555e3;
  uVar4 = uVar4 & 0x3f;
  uVar2 = (ulonglong)uVar4;
  _DAT_1832a8e30 = (_DAT_1832a8e30 ^ uVar5) + uVar2 ^ 0x989a876d4e333411;
  _DAT_1832a8b50 = (_DAT_1832a8b50 * 0x433af4b0eb35d41b ^ _DAT_1832a8e30) + uVar5;
  _DAT_1832a8a28 = _DAT_1832a8b50 ^ _DAT_1832a8e30;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar4 ^ 0x84222325;
  auVar7._8_4_ = uVar6;
  auVar7._12_4_ = 0;
  auVar8 = pshufb(auVar7 ^ _DAT_181b78310,unaff_XMM11);
  uVar10 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar10 + _DAT_1832a89e8;
  if (auVar8._4_4_ < 0) {
    uVar5 = _DAT_1832a8ef8 ^ uVar10;
  }
  _DAT_1832a8c00 = uVar2;
  uVar5 = func_0x00018b5f7cd0(SUB161(auVar7 ^ _DAT_181b78310,5) ^ uVar5);
  uVar4 = uVar4 | uVar6;
  _DAT_1832a8c18 = (ulonglong)uVar4;
  _DAT_1832a8bd8 = (_DAT_1832a8bd8 ^ uVar2 ^ uVar5) + _DAT_1832a8c18 ^ 0x75d9fa108932eaf9;
  _DAT_1832a8c60 = (_DAT_1832a8c60 * -0x48398d833afb6cb ^ _DAT_1832a8bd8) + (uVar2 ^ uVar5);
  _DAT_1832a8bf0 = _DAT_1832a8c60 ^ _DAT_1832a8bd8;
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x38);
  uVar6 = *(uint *)(unaff_RBP + 0x10);
  *(uint *)(unaff_RBP + 0x78) = uVar6;
  uVar5 = (ulonglong)uVar6 ^ 0x84222325 ^ _DAT_1832a8b18;
  lVar3 = ((ulonglong)uVar6 ^ 0x84222325) + _DAT_1832a8ae8;
  uVar10 = uVar5 + lVar3;
  uVar2 = (_DAT_1832a8ae8 ^ 1) + _DAT_1832a8b18 + 1;
  uVar5 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar5;
  uVar10 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832a8ae8 ^ 1;
  _DAT_1832a8908 =
       func_0x00018b5f7cd0((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_1832a8b18 + 1) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar12 = uVar6 & _DAT_18001a990;
  uVar11 = uVar6 | _DAT_18001a990;
  uVar13 = uVar6 ^ _DAT_18001a990;
  lVar3 = ((ulonglong)uVar6 * (ulonglong)_DAT_181b783b0 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_181b783a0;
  _DAT_1832a8e40 =
       ((((ulonglong)uVar13 * (ulonglong)_DAT_181b78390 << 0x20) +
         (ulonglong)uVar13 * (ulonglong)_DAT_181b78380 +
         ((ulonglong)uVar11 * (ulonglong)_DAT_181b78370 << 0x20) +
         (ulonglong)uVar11 * (ulonglong)_DAT_181b78360 +
         ((ulonglong)uVar12 * (ulonglong)_DAT_181b78350 << 0x20 |
         (ulonglong)uVar12 * (ulonglong)_DAT_181b78340) +
         ((ulonglong)uVar6 * (ulonglong)_DAT_181b78330 << 0x20) +
         (ulonglong)uVar6 * (ulonglong)_DAT_181b78320 + lVar3) -
       (((ulonglong)uVar13 * (ulonglong)_DAT_181b78430 << 0x20) +
        (ulonglong)uVar13 * (ulonglong)_DAT_181b78420 +
        ((ulonglong)uVar11 * (ulonglong)_DAT_181b78410 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)_DAT_181b78400 +
        ((ulonglong)uVar12 * (ulonglong)_DAT_181b783f0 << 0x20 |
        (ulonglong)uVar12 * (ulonglong)_DAT_181b783e0) +
        ((ulonglong)uVar6 * (ulonglong)_DAT_181b783d0 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_181b783c0 + lVar3)) + 0xc2a85ad9872bb6de;
  _DAT_1832a8c68 = _DAT_1832a8978 ^ _DAT_1832a8908 ^ _DAT_1832a8e40;
  _DAT_1832a8b90 = (_DAT_1832a8b90 ^ _DAT_1832a8908) + _DAT_1832a8e40 ^ 0x3b32e921b42abf2b;
  _DAT_1832a8cf8 = (_DAT_1832a8cf8 * -0x5ed7bf5bd9c72ac9 ^ _DAT_1832a8b90) + _DAT_1832a8908;
  _DAT_1832a8e50 = _DAT_1832a8cf8 ^ _DAT_1832a8b90;
  _DAT_1832a8e40 = _DAT_1832a8e40 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x80) = uVar4;
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


// ----- block @ rva 0xb5e5179 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5e5179(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *unaff_RBP;
  longlong *unaff_R15;
  
  uVar2 = FUN_190dd72e0();
  *unaff_RBP = uVar2;
  cVar1 = (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb5e5266 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b5e529c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b5e5266(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb5e52e5 -----

undefined8 FUN_18b5e52e5(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  (**(code **)(unaff_R15 + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  cVar1 = (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x70);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ----- block @ rva 0xb5e531d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5e531d(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x68);
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


// ----- block @ rva 0xb5e53a0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5e53a0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x68);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x6fb,0x21);
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


// ----- block @ rva 0xb5e56f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5e56f2(longlong param_1)

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


// ----- block @ rva 0xb5fa1bd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5fa1bd(void)

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


// ----- block @ rva 0xb5fa23c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5fa23c(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  (**(code **)(unaff_R14 + JNI->GetStaticObjectField /*0x488*/))();
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


// ----- block @ rva 0xb5fa35e -----

void FUN_18b5fa35e(void)

{
  return;
}


// ----- block @ rva 0xb5fb91a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5fb91a(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x724,0x22);
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


// ----- block @ rva 0xb5fb96f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5fb96f(void)

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


// ----- block @ rva 0xb5fbe52 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5fbe52(void)

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


// ----- block @ rva 0xb5fce15 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5fce15(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (*in_RAX)(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb5fd851 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b5fd851(void)

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


// ----- block @ rva 0xb5fd9cd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b5fd9cd(void)

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


// ----- block @ rva 0xb5fed61 -----

undefined8 thunk_FUN_18b5faa2e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xb601635 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b601635(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (*in_RAX)(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb602f3e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b602f3e(void)

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


// ----- block @ rva 0xb602f92 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b602f92(void)

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


// ----- block @ rva 0xb6032a5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b6032a5(void)

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


// ----- block @ rva 0xb60355c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b60355c(void)

{
  FUN_190de3220();
  (*_DAT_181b7e978)();
  return;
}


// ----- block @ rva 0xb603644 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b603644(void)

{
  FUN_190ddce00();
  (*_DAT_181b7e8e8)();
  return;
}


// ----- block @ rva 0xb6037ac -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b6037ac(void)

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


// ----- block @ rva 0xb6038a0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b6038a0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000068 = 0;
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


// ----- block @ rva 0xb603ac5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b603ac5(void)

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


// ----- block @ rva 0xb603d0b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b603d0b(void)

{
  FUN_190ddfc90();
  (*_DAT_181b7e9f8)();
  return;
}


// ----- block @ rva 0xb603dd1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b603dd1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181b7ec28)();
  return;
}


// ----- block @ rva 0xb603e05 -----

void FUN_18b603e05(void)

{
  return;
}


// ----- block @ rva 0xb603e14 -----

void FUN_18b603e14(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb603f8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b603f8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181b7f088)();
  return;
}


// ----- block @ rva 0xb60474c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b60474c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0xb60530b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b60530b(void)

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


// ----- block @ rva 0xb6054ca -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b6054ca(void)

{
  FUN_190ddfc90();
  (*_DAT_181b7f1d8)();
  return;
}


// ----- block @ rva 0xb605f2e -----

void FUN_18b605f2e(void)

{
  return;
}


// ----- block @ rva 0xb6064e4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b6064e4(void)

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


// ----- block @ rva 0xb60695b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b60695b(void)

{
  (*_DAT_181b7fc68)();
  return;
}


// ----- block @ rva 0xb6069cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b6069cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181b7fc08)();
  return;
}


// ----- block @ rva 0xb606a35 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b606a35(void)

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


// ----- block @ rva 0xb606a9b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b606a9b(void)

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


// ----- block @ rva 0xb606ad2 -----

void FUN_18b606ad2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb606d2f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b606d85 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b606d2f(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb607119 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b60715c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b607119(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb609c43 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b609c5a */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b609c43(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb60cdc4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b60ce5f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b60cdc4(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000110;
  undefined2 uStack000000000000013c;
  undefined4 uStack000000000000013e;
  undefined4 uStack0000000000000174;
  
  uStack0000000000000110 = in_stack_00000040;
  uStack0000000000000048 = CONCAT44((int)((ulonglong)in_stack_00000040 >> 0x20),2);
  uStack0000000000000174 = 0xa4963b42;
  rdtsc();
  uStack000000000000013c = 0x44;
  uStack000000000000013e = 0x530045;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb61d08e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b61d08e(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000058;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000058 < 0 || iVar1 <= in_stack_00000058) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb62379b -----

void thunk_FUN_18b608c79(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xb623ed0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b623ed0(void)

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


// ----- block @ rva 0xb624439 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b624439(void)

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


// ----- block @ rva 0xb628a9d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b628a9d(void)

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


// ----- block @ rva 0xb629499 -----

void FUN_18b629499(void)

{
  return;
}

