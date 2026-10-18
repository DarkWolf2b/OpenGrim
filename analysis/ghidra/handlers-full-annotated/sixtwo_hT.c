// ===== Lsixtwo/hT; _b3f0ce18369101911bee73aa880aaa6f ()V (handler @ image 189b622c0, runtime 6ffff17722c0) =====

void FUN_189b622c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189b6239c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814d0d40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hT; bff ()Lsixtwo/hZ; (handler @ image 189adc010, runtime 6ffff16ec010) =====

void FUN_189adc010(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16482,0x3ae);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189adc0f5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814b13e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hT; bfg (Lsixtwo/hX;)V (handler @ image 189aedaa0, runtime 6ffff16fdaa0) =====

void FUN_189aedaa0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16482,0x3ae);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189aedb97 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814b6290 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hT; bfh (Lsixtwo/hL;)V (handler @ image 189b1d430, runtime 6ffff172d430) =====

void FUN_189b1d430(void)

{
  return;
}



// ===== Lsixtwo/hT; bfi (Lsixtwo/hL;)V (handler @ image 189b1d4c0, runtime 6ffff172d4c0) =====

void FUN_189b1d4c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16482,0x3ae);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189b1d5a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814c39f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hT; bfj (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 189b2c540, runtime 6ffff173c540) =====

undefined8 FUN_189b2c540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/hT; bfk ([B)Ljava/lang/String; (handler @ image 189b2c5d0, runtime 6ffff173c5d0) =====

void FUN_189b2c5d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000189b2c673 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814c7970 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hT; bfl (IJ)Ljava/lang/String; (handler @ image 189b57710, runtime 6ffff1767710) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189b57710(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uRam000000018323bb48 = func_0x000189b5e880(uRam000000018323ba78 ^ 0x186ca2ae6f79d022);
  uVar4 = (uRam000000018323bb48 ^ 0x5a08c8978300aed6) << 0x1b |
          (uRam000000018323bb48 ^ 0x5a08c8978300aed6) >> 0x25;
  uRam000000018323b5b8 = (uRam000000018323b5b8 ^ uVar4) + 0x5eaeca9ff70dbed6 ^ 0x8a342cf13a8a0419;
  uRam000000018323b6a0 = (uRam000000018323b6a0 * 0x18691da30ce19283 ^ uRam000000018323b5b8) + uVar4;
  uRam000000018323b9a8 = uRam000000018323b6a0 ^ uRam000000018323b5b8;
  uRam000000018323b5f8 = 0x5eaeca9ff70dbed6;
  uVar4 = (uRam000000018323b5b0 ^ _UNK_1814cf710) + uRam000000018323b870 + 0xf63e8c531cb5ee4a;
  uVar9 = (uRam000000018323b870 ^ _UNK_1814cf718) + uRam000000018323b5b0 + 0xce1599d63efd4df4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b5b0 ^ _UNK_1814cf710;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323b870 ^ _UNK_1814cf718;
  uRam000000018323b7c8 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018323b5b0 + 0xce1599d63efd4df4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018323b870 + 0xf63e8c531cb5ee4a));
  uRam000000018323b710 =
       (uRam000000018323b710 ^ uRam000000018323b7c8 ^ 0x801118426680090) + 0x382b1585a66a809b ^
       0x2ba6799a6f15dc55;
  uRam000000018323ba08 =
       (uRam000000018323ba08 * 0x3390bf79f908721f ^ uRam000000018323b710) +
       (uRam000000018323b7c8 ^ 0x801118426680090);
  uRam000000018323b508 = uRam000000018323ba08 ^ uRam000000018323b710;
  uRam000000018323bca0 = 0x382b1585a66a809b;
  uVar4 = (uRam000000018323b958 ^ _UNK_1814cf720) + uRam000000018323bb30 + 0x84225cda;
  uVar9 = (uRam000000018323bb30 ^ _UNK_1814cf728) + uRam000000018323b958 + 0x7f99757bd5ac5ac0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b958 ^ _UNK_1814cf720;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323bb30 ^ _UNK_1814cf728;
  uRam000000018323b580 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018323b958 + 0x7f99757bd5ac5ac0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323bb30 + 0x84225cda));
  uVar4 = uRam000000018323b580 << 4 | uRam000000018323b580 >> 0x3c;
  uVar9 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar4;
  uRam000000018323b718 = uRam000000018323bb18 ^ uVar4 ^ 0x7f99757bd5acdabf;
  uRam000000018323ba68 = (uRam000000018323ba68 ^ uVar4) + 0x7f99757bd5acdabf ^ 0xb46294ff4406090;
  uRam000000018323bc68 = (uRam000000018323bc68 * 0x5f6ea89721fe7231 ^ uRam000000018323ba68) + uVar4;
  uRam000000018323ba28 = uRam000000018323bc68 ^ uRam000000018323ba68;
  uRam000000018323b708 = 0x7f99757bd5acdabf;
  uVar4 = (uRam000000018323ba88 ^ _UNK_1814cf730) + uRam000000018323b620 + 0x7f99757b518ef99a;
  uVar9 = (uRam000000018323b620 ^ _UNK_1814cf738) + uRam000000018323ba88 + 0x80668a842a53a540;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323ba88 ^ _UNK_1814cf730;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323b620 ^ _UNK_1814cf738;
  uRam000000018323b840 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018323ba88 + 0x80668a842a53a540) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018323b620 + 0x7f99757b518ef99a));
  uVar4 = uRam000000018323b840 ^ 0x3a7093181620cac0;
  uRam000000018323b6b8 = uRam000000018323ba30 ^ uVar4 ^ 0x7fff;
  uRam000000018323b6d8 = (uRam000000018323b6d8 ^ uVar4) + 0x7fff ^ 0xf2817b39453ec6de;
  uRam000000018323b720 = (uRam000000018323b720 * 0x4f0d9395a71a7f6f ^ uRam000000018323b6d8) + uVar4;
  uRam000000018323b568 = uRam000000018323b720 ^ uRam000000018323b6d8;
  uRam000000018323b6c8 = 0x7fff;
  uVar4 = (uRam000000018323ba80 ^ _UNK_1814cf740) + uRam000000018323ba28 + 0x84222325;
  uVar9 = (uRam000000018323ba28 ^ _UNK_1814cf748) + uRam000000018323ba80 + 0xfd6c8e45b222d03b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323ba80 ^ _UNK_1814cf740;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323ba28 ^ _UNK_1814cf748;
  uRam000000018323b910 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018323ba80 + 0xfd6c8e45b222d03b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323ba28 + 0x84222325));
  uRam000000018323bab8 =
       (uRam000000018323bab8 ^ uRam000000018323b910) + 0x29371ba4ddd2fc5 ^ 0x9f961d183a588ec1;
  uRam000000018323b668 =
       (uRam000000018323b668 * -0x5711a8b4260e0a15 ^ uRam000000018323bab8) + uRam000000018323b910;
  uRam000000018323b5e0 = uRam000000018323b668 ^ uRam000000018323bab8;
  uRam000000018323bb48 = 0x29371ba4ddd2fc5;
  uVar4 = (uRam000000018323b838 ^ _UNK_1814cf750) + uRam000000018323b7d8 + 0x84225cda;
  uVar9 = (uRam000000018323b7d8 ^ _UNK_1814cf758) + uRam000000018323b838 + 0xfd6c8e45b222d03b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b838 ^ _UNK_1814cf750;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323b7d8 ^ _UNK_1814cf758;
  uRam000000018323b508 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018323b838 + 0xfd6c8e45b222d03b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323b7d8 + 0x84225cda));
  uVar4 = uRam000000018323b508 ^ 0x7fff;
  uRam000000018323baa0 = uRam000000018323ba70 ^ uVar4 ^ 0xfd6c8e45b223503a;
  uRam000000018323bb38 = (uRam000000018323bb38 ^ uVar4) + 0xfd6c8e45b223503a ^ 0x954c0dab5e1d57b;
  uRam000000018323bb78 = (uRam000000018323bb78 * -0x7cd6d65e1c39cf63 ^ uRam000000018323bb38) + uVar4
  ;
  uRam000000018323ba78 = uRam000000018323bb78 ^ uRam000000018323bb38;
  uRam000000018323b840 = 0xfd6c8e45b223503a;
  uRam000000018323b6d8 = func_0x000189b5e880(uRam000000018323ba88 ^ 0x42d4cd4a4573d4cf);
  uVar4 = uRam000000018323b6d8 << 8 | uRam000000018323b6d8 >> 0x38;
  uVar9 = uVar4 >> 1 | uVar4;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar4 = ~((0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
           ^ uVar4) & 0xfd6c8e45b223503a;
  uRam000000018323b620 = uRam000000018323bbe8 ^ uVar4 ^ 0x7fff;
  uRam000000018323baa8 = (uRam000000018323baa8 ^ uVar4) + 0x7fff ^ 0xc522cf4e26307817;
  uRam000000018323b728 = (uRam000000018323b728 * 0x6ee4d2709ace96f3 ^ uRam000000018323baa8) + uVar4;
  uRam000000018323bc98 = uRam000000018323b728 ^ uRam000000018323baa8;
  uRam000000018323bb28 = 0x7fff;
  uVar4 = (uRam000000018323ba68 ^ _UNK_1814cf760) + uRam000000018323baa0 + 0x84225cda;
  uVar9 = (uRam000000018323baa0 ^ _UNK_1814cf768) + uRam000000018323ba68 + 0xb7299467f7ccdc7c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323ba68 ^ _UNK_1814cf760;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323baa0 ^ _UNK_1814cf768;
  uRam000000018323b728 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018323ba68 + 0xb7299467f7ccdc7c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323baa0 + 0x84225cda));
  uVar4 = ((uRam000000018323b728 ^ 0xb72994000000ffff) & 0x3ffff) << 0x18 |
          (uRam000000018323b728 ^ 0xb72994000000ffff) >> 0x28;
  uRam000000018323b538 = uRam000000018323b688 ^ uVar4 ^ 0xb7299467f7cd5c7b;
  uRam000000018323bb00 = (uRam000000018323bb00 ^ uVar4) + 0xb7299467f7cd5c7b ^ 0x4d51c78181a85919;
  uRam000000018323b6f0 = (uRam000000018323b6f0 * 0x5bcbfc7ee9ef925d ^ uRam000000018323bb00) + uVar4;
  uRam000000018323b770 = uRam000000018323b6f0 ^ uRam000000018323bb00;
  uRam000000018323b6d0 = 0xb7299467f7cd5c7b;
  uRam000000018323bab8 = func_0x000189b5e880(uRam000000018323b950 ^ 0xd3546ca9b6c64c8d);
  uVar9 = _UNK_1814cf778;
  uVar4 = _UNK_1814cf770;
  uRam000000018323b9d8 = (uRam000000018323b9d8 ^ uRam000000018323bab8) + 0x7fff ^ 0x689db5ef38dc6d0d
  ;
  uRam000000018323bcd8 =
       (uRam000000018323bcd8 * 0x3f686a425be8ad83 ^ uRam000000018323b9d8) + uRam000000018323bab8;
  uRam000000018323baf8 = uRam000000018323bcd8 ^ uRam000000018323b9d8;
  uRam000000018323b7d0 = 0x7fff;
  uVar6 = (uRam000000018323b670 ^ _UNK_1814cf770) + uRam000000018323bc10 + 0x5eaeca9f732f9df3;
  uVar10 = (uRam000000018323bc10 ^ _UNK_1814cf778) + uRam000000018323b670 + 0x382b1585a66a809b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018323b670 ^ _UNK_1814cf770;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323bc10 ^ _UNK_1814cf778;
  uRam000000018323b890 =
       func_0x000189b5e880((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018323b670 + 0x382b1585a66a809b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018323bc10 + 0x5eaeca9f732f9df3));
  uVar6 = (uRam000000018323b890 << 0x17 | uRam000000018323b890 >> 0x29) * -0x13b5d4fa54728f;
  uVar10 = uVar6 >> 1 | uVar6;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar6;
  uRam000000018323b6a0 = uRam000000018323b588 ^ uVar6 ^ 0x96d9e0259d783f71;
  uRam000000018323b5f0 = (uRam000000018323b5f0 ^ uVar6) + 0x96d9e0259d783f71 ^ 0x95f3999b04628b88;
  uRam000000018323ba20 = (uRam000000018323ba20 * -0x4660b76a663cab4f ^ uRam000000018323b5f0) + uVar6
  ;
  uRam000000018323b850 = uRam000000018323ba20 ^ uRam000000018323b5f0;
  uRam000000018323bab8 = 0x96d9e0259d783f71;
  uVar6 = (uRam000000018323bc30 ^ uVar4) + uRam000000018323bae8 + 0x5eaeca9f732f9df3;
  uVar10 = (uRam000000018323bae8 ^ uVar9) + uRam000000018323bc30 + 0x382b1585a66a809b;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018323bc30 ^ uVar4;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018323bae8 ^ uVar9;
  uRam000000018323b588 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018323bc30 + 0x382b1585a66a809b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018323bae8 + 0x5eaeca9f732f9df3));
  uRam000000018323b880 =
       (uRam000000018323b880 ^ uRam000000018323b588 ^ 0x5eaeca9ff70dbed6) + 0x6685df1a51673e4d ^
       0x78fecd72edfc48b5;
  uRam000000018323b620 =
       (uRam000000018323b620 * -0x3f7910c4c3e2c209 ^ uRam000000018323b880) +
       (uRam000000018323b588 ^ 0x5eaeca9ff70dbed6);
  uRam000000018323b768 = uRam000000018323b620 ^ uRam000000018323b880;
  uRam000000018323b9c8 = uRam000000018323bc30 ^ 0x6685df1a51673e4d;
  uRam000000018323baa0 = 0x6685df1a51673e4d;
  uRam000000018323bbd8 = func_0x000189b5e880(lRam000000018323bb68 + 0xfa0384d4e7d8bd65U ^ 0x5c);
  uRam000000018323b930 =
       (uRam000000018323b930 ^ uRam000000018323bbd8) + 0x182a0085a6088092 ^ 0x43747d8b6d91c3a3;
  uRam000000018323bbb8 =
       (uRam000000018323bbb8 * 0x763d69a9a9f9348b ^ uRam000000018323b930) + uRam000000018323bbd8;
  uRam000000018323bcc0 = uRam000000018323bbb8 ^ uRam000000018323b930;
  uRam000000018323b910 = 0x182a0085a6088092;
  uVar4 = (uRam000000018323b530 ^ _UNK_1814cf780) + uRam000000018323b700 + 0x6685df1ad5451d68;
  uVar9 = (uRam000000018323b700 ^ _UNK_1814cf788) + uRam000000018323b530 + 0x3054010b4c110124;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b530 ^ _UNK_1814cf780;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323b700 ^ _UNK_1814cf788;
  uRam000000018323ba18 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018323b530 + 0x3054010b4c110124) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018323b700 + 0x6685df1ad5451d68));
  uVar4 = uRam000000018323ba18 & 0x7ffffffffff;
  uRam000000018323bcb0 = uRam000000018323ba20 ^ uVar4 ^ 0x96d9e0259d783f71;
  uRam000000018323ba90 = (uRam000000018323ba90 ^ uVar4) + 0x96d9e0259d783f71 ^ 0x42b3309759874a54;
  uRam000000018323b520 = (uRam000000018323b520 * -0x4775bc27568c19d1 ^ uRam000000018323ba90) + uVar4
  ;
  uRam000000018323b6f0 = uRam000000018323b520 ^ uRam000000018323ba90;
  uRam000000018323b578 = 0x96d9e0259d783f71;
  uRam000000018323ba48 = func_0x000189b5e880(lRam000000018323bac8 + 0x230084230021ffU ^ 7);
  uRam000000018323bce8 = uRam000000018323ba48 & 0xffffffffc0000000;
  uRam000000018323b500 = uRam000000018323b500 ^ uRam000000018323bce8 ^ 0x56c7d2881493d8e0;
  uRam000000018323b848 =
       (uRam000000018323b848 * -0x10945d4aff09ff53 ^ uRam000000018323b500) + uRam000000018323bce8;
  uRam000000018323b8a0 = uRam000000018323b848 ^ uRam000000018323b500;
  uRam000000018323b5c8 = 0;
  uRam000000018323bae8 = func_0x000189b5e880(uRam000000018323b840 ^ 0xffcc007cd5ffe141);
  uVar4 = uRam000000018323bae8 ^ 0x7fff;
  uRam000000018323b798 = uRam000000018323b670 ^ uVar4 ^ 0x7fff;
  uRam000000018323ba88 = (uRam000000018323ba88 ^ uVar4) + 0x7fff ^ 0xf6643341709f2f5b;
  uRam000000018323bc70 = (uRam000000018323bc70 * -0x894143929bfda1f ^ uRam000000018323ba88) + uVar4;
  uRam000000018323ba70 = uRam000000018323bc70 ^ uRam000000018323ba88;
  uRam000000018323bb40 = 0x7fff;
  uRam000000018323bc40 = func_0x000189b5e880(uRam000000018323bb28 + 0xe022518bfc343060 ^ 0xbf);
  uRam000000018323b8f8 =
       (uRam000000018323b8f8 ^ uRam000000018323bc40) + 0xa151356008f24129 ^ 0xe0fd76fdb077153f;
  uRam000000018323b9d8 =
       (uRam000000018323b9d8 * -0xf1745a2c6176e7d ^ uRam000000018323b8f8) + uRam000000018323bc40;
  uRam000000018323b988 = uRam000000018323b9d8 ^ uRam000000018323b8f8;
  uRam000000018323bab8 = 0xa151356008f24129;
  uRam000000018323b770 = func_0x000189b5e880(uRam000000018323b798 ^ 0xea3c45245a6b3dd5);
  uRam000000018323bc58 =
       uRam000000018323bc58 ^ uRam000000018323b770 ^ 0x5eaeca9ff70dbed6 ^ 0xf67a0536b61c94cc;
  uRam000000018323baa0 =
       (uRam000000018323baa0 * -0x778d3a5ba6fd6a3f ^ uRam000000018323bc58) +
       (uRam000000018323b770 ^ 0x5eaeca9ff70dbed6);
  uRam000000018323ba28 = uRam000000018323baa0 ^ uRam000000018323bc58;
  uRam000000018323b5b0 = 0;
  uRam000000018323bc10 = func_0x000189b5e880(uRam000000018323b588 ^ 0xffdcff841b001ddf);
  uRam000000018323b5b0 =
       uRam000000018323b5b0 ^ uRam000000018323bc10 ^ 0x5a08c8978300aed6 ^ 0x1cee568e26ed0ca4;
  uRam000000018323b8e0 =
       (uRam000000018323b8e0 * 0x695dda6e9f4efb65 ^ uRam000000018323b5b0) +
       (uRam000000018323bc10 ^ 0x5a08c8978300aed6);
  uRam000000018323bad0 = uRam000000018323b8e0 ^ uRam000000018323b5b0;
  uRam000000018323b958 = 0;
  uVar4 = (uRam000000018323bcb0 ^ 0x84225cda) + uRam000000018323bbc8 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323bcb0 ^ 0x84225cda;
  uVar9 = ((uRam000000018323bbc8 + uRam000000018323bcb0) * 0x2000 |
          uRam000000018323bbc8 + uRam000000018323bcb0 >> 0x33) ^ uRam000000018323bbc8;
  uRam000000018323bcf8 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - uRam000000018323bcb0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323bbc8 + 0x84225cda));
  uRam000000018323b558 = uRam000000018323b828 ^ uRam000000018323bcf8 ^ 0x7fff;
  uRam000000018323b8a8 = (uRam000000018323b8a8 ^ uRam000000018323bcf8) + 0x7fff ^ 0xb0c81290b55efcf2
  ;
  uRam000000018323bc40 =
       (uRam000000018323bc40 * 0x155adc70d16d6727 ^ uRam000000018323b8a8) + uRam000000018323bcf8;
  uRam000000018323bb40 = uRam000000018323bc40 ^ uRam000000018323b8a8;
  uRam000000018323b5a8 = 0x7fff;
  uVar4 = param_4 ^ 0x84222325 ^ uRam000000018323b920;
  lVar5 = (param_4 ^ 0x84222325) + uRam000000018323b748;
  uVar9 = uVar4 + lVar5;
  uVar6 = (uRam000000018323b748 ^ 0x7fff) + uRam000000018323b920 + 0x7fff;
  uVar4 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar4;
  uVar9 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018323b748 ^ 0x7fff;
  uRam000000018323b810 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018323b920 + 0x7fff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar4 = (param_4 | 0x7fff) ^ uRam000000018323b810;
  uVar4 = uVar4 << 0x32 | uVar4 >> 0xe;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar9 = (ulonglong)uVar3;
  uRam000000018323b508 = (uRam000000018323b508 ^ uVar4) + uVar9 ^ 0x92ea721ed1c7e8d3;
  uRam000000018323b628 = (uRam000000018323b628 * 0x41b073ec7253f27f ^ uRam000000018323b508) + uVar4;
  uRam000000018323b618 = uRam000000018323b628 ^ uRam000000018323b508;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar3 ^ 0x84222325;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = 0;
  auVar8 = pshufb(auVar7 ^ _UNK_1814cf790,_UNK_1800170c0);
  uVar6 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar6 + uRam000000018323b710;
  if (auVar8._4_4_ < 0) {
    uVar4 = uRam000000018323baf0 ^ uVar6;
  }
  uRam000000018323b6b0 = uVar9;
  uRam000000018323baa0 = func_0x000189b5e880(SUB161(auVar7 ^ _UNK_1814cf790,5) ^ uVar4);
  uVar6 = (uVar9 + param_3) - (ulonglong)((param_3 & uVar3) * 2);
  uRam000000018323b700 = (uRam000000018323b700 ^ uRam000000018323baa0) + uVar6 ^ 0xef0e75aa60e554d8;
  uRam000000018323b6b0 =
       (uRam000000018323b6b0 * -0x152727ee340bbd09 ^ uRam000000018323b700) + uRam000000018323baa0;
  uRam000000018323b820 = uRam000000018323b6b0 ^ uRam000000018323b700;
  uVar10 = uVar6 & 0xffffffff;
  uVar4 = (~uRam000000018323b718 + 0x7b085aba) *
          ((uRam000000018323ba30 ^ 0x82927b8a) +
          (ulonglong)((uint)uRam000000018323ba30 & 0x82927b8a) * 2);
  uVar4 = (uVar4 | uRam000000018323ba20) + (uVar4 & uRam000000018323ba20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018323ba38 = uVar10;
  uRam000000018323baf0 =
       func_0x000189b5e880((uVar4 | 0xf99a2133) + (ulonglong)((uint)uVar4 & 0xf99a2133));
  uVar4 = (uRam000000018323baf0 ^ 0x7fb85abf) & 0x3ffffffffffff;
  uRam000000018323b800 = (uRam000000018323b800 ^ uVar4) + 0x7db80216 ^ 0xb3c1a4c144c08a91;
  uRam000000018323bb70 = (uRam000000018323bb70 * 0x2d4363b9843eb205 ^ uRam000000018323b800) + uVar4;
  uRam000000018323b618 = uRam000000018323bb70 ^ uRam000000018323b800;
  uRam000000018323b948 = 0x7db80216;
  uVar4 = (~uRam000000018323b8d8 + 0x10b5231c) *
          ((uRam000000018323bc58 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018323bc58 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018323bbc0) + (uVar4 & uRam000000018323bbc0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018323bae0 =
       func_0x000189b5e880((uVar4 | 0x9497003e) + (ulonglong)((uint)uVar4 & 0x9497003e));
  uRam000000018323bba8 =
       (uRam000000018323bba8 ^ uRam000000018323bae0) - 0x10b5231b ^ 0x5876b013a70c746c;
  uRam000000018323b5d8 =
       (uRam000000018323b5d8 * 0x2f8622722b59ad87 ^ uRam000000018323bba8) + uRam000000018323bae0;
  uRam000000018323b8f0 = uRam000000018323b5d8 ^ uRam000000018323bba8;
  uRam000000018323b978 = 0xef4adce5;
  uVar4 = (~uRam000000018323b660 + 0xef4adce6) *
          ((uRam000000018323b8b0 ^ 0x9497b1ca) +
          (ulonglong)((uint)uRam000000018323b8b0 & 0x9497b1ca) * 2);
  uVar4 = (uVar4 | uRam000000018323b680) + (uVar4 & uRam000000018323b680);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018323bbf8 =
       func_0x000189b5e880((uVar4 | 0x7bdd6d2f) + (ulonglong)((uint)uVar4 & 0x7bdd6d2f));
  uVar4 = uRam000000018323bbf8 ^ 0x10b592ef;
  uRam000000018323b980 = uRam000000018323b5f0 ^ uVar4 ^ 0x100006fd4;
  uRam000000018323b5d8 = (uRam000000018323b5d8 ^ uVar4) + 0x100006fd4 ^ 0xb69681f7fcef65ae;
  uRam000000018323b758 = (uRam000000018323b758 * -0x613ba7f32ad40c9d ^ uRam000000018323b5d8) + uVar4
  ;
  uRam000000018323b7b8 = uRam000000018323b758 ^ uRam000000018323b5d8;
  uRam000000018323b558 = 0x6fd4;
  uVar4 = (uRam000000018323bc28 ^ _UNK_1814cf7a0) + uRam000000018323bce8 + 0x84222325;
  uVar9 = (uRam000000018323bce8 ^ _UNK_1814cf7a8) + uRam000000018323bc28 + 0x749abaaf;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323bc28 ^ _UNK_1814cf7a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323bce8 ^ _UNK_1814cf7a8;
  uRam000000018323b860 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018323bc28 + 0x749abaaf) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323bce8 + 0x84222325));
  uVar4 = uRam000000018323b860 << 0x19 | uRam000000018323b860 >> 0x27;
  uRam000000018323b998 = (uRam000000018323b998 ^ uVar4) - 0x749abaaf ^ 0x8506420c9278f35a;
  uRam000000018323bc88 = (uRam000000018323bc88 * 0xb21ac00d4e69ab7 ^ uRam000000018323b998) + uVar4;
  uRam000000018323bbc8 = uRam000000018323bc88 ^ uRam000000018323b998;
  uRam000000018323bc90 = 0x8b654551;
  uVar4 = (uRam000000018323b6e0 ^ _UNK_1814cf7b0) + uRam000000018323b7d0 + 0xf0b909a6;
  uVar9 = (uRam000000018323b7d0 ^ _UNK_1814cf7b8) + uRam000000018323b6e0 + 0x8b654551;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b6e0 ^ _UNK_1814cf7b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323b7d0 ^ _UNK_1814cf7b8;
  uRam000000018323bb08 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018323b6e0 + 0x8b654551) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323b7d0 + 0xf0b909a6));
  uVar4 = uRam000000018323bb08 ^ 0x8b654551;
  uRam000000018323bcb0 = uRam000000018323bc18 ^ uVar4 ^ 0x100006fd4;
  uRam000000018323b518 = (uRam000000018323b518 ^ uVar4) + 0x100006fd4 ^ 0x2c8b5232309e7470;
  uRam000000018323ba68 = (uRam000000018323ba68 * -0x15a222fcf437f32f ^ uRam000000018323b518) + uVar4
  ;
  uRam000000018323b840 = uRam000000018323ba68 ^ uRam000000018323b518;
  uRam000000018323bc10 = 0x6fd4;
  uVar4 = (uRam000000018323b8d0 ^ _UNK_1814cf7c0) + uRam000000018323b640 + 0x84222325;
  uVar9 = (uRam000000018323b640 ^ _UNK_1814cf7c8) + uRam000000018323b8d0 + 0x92979a64;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b8d0 ^ _UNK_1814cf7c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323b640 ^ _UNK_1814cf7c8;
  uRam000000018323b9e0 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018323b8d0 + 0x92979a64) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323b640 + 0x84222325));
  uVar4 = uRam000000018323b758 - 0x92979a64;
  uRam000000018323b930 = uRam000000018323b738 * 0x28ba721f567391e3;
  uRam000000018323b758 = uVar4 ^ 0xf103672b4638a4ea;
  uRam000000018323b738 = uRam000000018323b930 ^ uRam000000018323b758;
  uRam000000018323baa8 = 0x6d68659c;
  uRam000000018323b570 = func_0x000189b5e880(uVar4 ^ 0xf1ae98d92ac7d0c7);
  uRam000000018323bbc8 = uRam000000018323b8a8 ^ uRam000000018323b570 ^ 0x92980a38;
  uRam000000018323bcd8 =
       (uRam000000018323bcd8 ^ uRam000000018323b570) + 0x92980a38 ^ 0x6547fb738fa92989;
  uRam000000018323bc18 =
       (uRam000000018323bc18 * -0x138b5bca24c62d39 ^ uRam000000018323bcd8) + uRam000000018323b570;
  uRam000000018323b980 = uRam000000018323bc18 ^ uRam000000018323bcd8;
  uRam000000018323b510 = 0x92980a38;
  uVar4 = (~uRam000000018323b648 + 0x7db80217) *
          ((uRam000000018323b8a8 ^ uRam000000018323b570 ^ 0xc944d2a2) +
          (ulonglong)((uint)uRam000000018323bbc8 & 0x5bdcd89a) * 2);
  uVar4 = (uVar4 | uRam000000018323bb78) + (uVar4 & uRam000000018323bb78);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018323baa8 =
       func_0x000189b5e880((uVar4 | 0x2664da8c) + (ulonglong)((uint)uVar4 & 0x2664da8c));
  uRam000000018323b860 = uRam000000018323b770 ^ uRam000000018323bc18 ^ 0x15db6fdd5;
  uRam000000018323bc98 =
       (uRam000000018323bc98 ^ uRam000000018323bc18) + 0x15db6fdd5 ^ 0x3c36df10a994b805;
  uRam000000018323b970 =
       (uRam000000018323b970 * -0x33ac555883798997 ^ uRam000000018323bc98) + uRam000000018323bc18;
  uRam000000018323b5b0 = uRam000000018323b970 ^ uRam000000018323bc98;
  uRam000000018323b5d8 = 0x5db6fdd5;
  uVar4 = (~uRam000000018323b960 + 0x7db80217) *
          ((uRam000000018323bc18 ^ 0x5bdcd89a) +
          (ulonglong)((uint)uRam000000018323bc18 & 0x5bdcd89a) * 2);
  uVar4 = (uVar4 | uRam000000018323b698) + (uVar4 & uRam000000018323b698);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018323ba58 =
       func_0x000189b5e880((uVar4 | 0x2664da8c) + (ulonglong)((uint)uVar4 & 0x2664da8c));
  uVar4 = (uRam000000018323ba58 ^ 0xfffefbbf) & 0x7ffffffffffff;
  uRam000000018323b740 = (uRam000000018323b740 ^ uVar4) + 0xa246f9a9 ^ 0x90f03f6184476cde;
  uRam000000018323b768 = (uRam000000018323b768 * 0x18476511ecb9ad8d ^ uRam000000018323b740) + uVar4;
  uRam000000018323b678 = uRam000000018323b768 ^ uRam000000018323b740;
  uRam000000018323b638 = 0xa246f9a9;
  uRam000000018323b9a0 = func_0x000189b5e880(lRam000000018323b5a0 + 0xaa001e740063ffU ^ 0xba);
  uVar9 = uRam000000018323b9a0 ^ 0x6e0082047229206a;
  uVar4 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar9;
  uRam000000018323b748 = (uRam000000018323b748 ^ uVar9) + 0x5db80216 ^ 0x3b725ca20dd116cc;
  uRam000000018323bb28 = (uRam000000018323bb28 * 0x47000b538bf9089 ^ uRam000000018323b748) + uVar9;
  uRam000000018323bba8 = uRam000000018323bb28 ^ uRam000000018323b748;
  uRam000000018323ba08 = 0x5db80216;
  uVar4 = (uRam000000018323bc48 ^ _UNK_1814cf7d0) + uRam000000018323b630 + 0x2664da8c;
  uVar9 = (uRam000000018323b630 ^ _UNK_1814cf7d8) + uRam000000018323bc48 + 0xbb70042c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323bc48 ^ _UNK_1814cf7d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323b630 ^ _UNK_1814cf7d8;
  uRam000000018323b788 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018323bc48 + 0xbb70042c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323b630 + 0x2664da8c));
  uVar4 = uRam000000018323b788 ^ 0xa246f9a9;
  uVar9 = uVar4 >> 1 | uVar4;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4;
  uRam000000018323ba28 = uRam000000018323b9b8 ^ uVar4 ^ 0x15db6fdd5;
  uRam000000018323b6d8 = (uRam000000018323b6d8 ^ uVar4) + 0x15db6fdd5 ^ 0x86de34eff8ed346;
  uRam000000018323b760 = (uRam000000018323b760 * 0x2aeec897ef7a992b ^ uRam000000018323b6d8) + uVar4;
  uRam000000018323bc58 = uRam000000018323b760 ^ uRam000000018323b6d8;
  uRam000000018323b598 = 0x5db6fdd5;
  uRam000000018323b918 = func_0x000189b5e880(uRam000000018323bc28 + 0x1d0083daffddff ^ 0x8c);
  uVar4 = uRam000000018323b918 - (uRam000000018323b918 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uRam000000018323b858 = (uint)bVar1 + (uint)bVar1 ^ uRam000000018323b918;
  uRam000000018323baa0 = uRam000000018323baa0 ^ uRam000000018323b858 ^ 0x3779ebc322486d0e;
  uRam000000018323b8f0 =
       (uRam000000018323b8f0 * -0x774e76a7f2871259 ^ uRam000000018323baa0) + uRam000000018323b858;
  uRam000000018323b630 = uRam000000018323b8f0 ^ uRam000000018323baa0;
  uRam000000018323b960 = 0;
  uRam000000018323bc78 = func_0x000189b5e880(uRam000000018323ba18 + 0xffbc007ceeffddff ^ 0x23);
  uRam000000018323b5d8 = uRam000000018323bc88 ^ uRam000000018323b580 ^ 0x6fd4;
  uRam000000018323b808 = (uRam000000018323b808 ^ uRam000000018323b580) + 0x6fd4 ^ 0xbc9f536a6b3e117e
  ;
  uRam000000018323bc68 =
       (uRam000000018323bc68 * -0x5ccd93f2b09575b3 ^ uRam000000018323b808) + uRam000000018323b580;
  uRam000000018323b598 = uRam000000018323bc68 ^ uRam000000018323b808;
  uRam000000018323ba30 = 0x6fd4;
  uVar4 = (uRam000000018323b800 ^ _UNK_1814cf7e0) + uRam000000018323bb88 + 0x5bdcd89a;
  uVar9 = (uRam000000018323bb88 ^ _UNK_1814cf7e8) + uRam000000018323b800 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b800 ^ _UNK_1814cf7e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323bb88 ^ _UNK_1814cf7e8;
  uRam000000018323b878 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018323b800 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323bb88 + 0x5bdcd89a));
  uRam000000018323bb20 =
       (uRam000000018323bb20 ^ uRam000000018323b878) + 0x20010440 ^ 0x8db3ffce2969c4ba;
  uRam000000018323bbc0 =
       (uRam000000018323bbc0 * 0x69afc96ae272647b ^ uRam000000018323bb20) + uRam000000018323b878;
  uRam000000018323b788 = uRam000000018323bbc0 ^ uRam000000018323bb20;
  uRam000000018323b9d0 = 0x20010440;
  uVar4 = (~uRam000000018323b920 + 0x20010441) *
          ((uRam000000018323b670 ^ 0x5bdcd89a) +
          (ulonglong)((uint)uRam000000018323b670 & 0x5bdcd89a) * 2);
  uVar4 = (uVar4 | uRam000000018323b940) + (uVar4 & uRam000000018323b940);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018323bc50 =
       func_0x000189b5e880((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda));
  uRam000000018323b590 =
       uRam000000018323b590 ^ uRam000000018323bc50 ^ 0xdffefbbf ^ 0x34bb30516617b79e;
  uRam000000018323bcc0 =
       (uRam000000018323bcc0 * 0x60285c01ef0b98e5 ^ uRam000000018323b590) +
       (uRam000000018323bc50 ^ 0xdffefbbf);
  uRam000000018323b5e8 = uRam000000018323bcc0 ^ uRam000000018323b590;
  uRam000000018323b820 = 0;
  uRam000000018323b928 = func_0x000189b5e880(uRam000000018323b680 ^ 0x44007bef0021b2);
  uRam000000018323bb10 = uRam000000018323b528 ^ uRam000000018323b928 ^ 0x6fd4;
  uRam000000018323b8f8 = (uRam000000018323b8f8 ^ uRam000000018323b928) + 0x6fd4 ^ 0x965317e2c568e081
  ;
  uRam000000018323ba50 =
       (uRam000000018323ba50 * 0x682d27b6edec977d ^ uRam000000018323b8f8) + uRam000000018323b928;
  uRam000000018323bc48 = uRam000000018323ba50 ^ uRam000000018323b8f8;
  uRam000000018323bba0 = 0x6fd4;
  uVar4 = (uRam000000018323b848 ^ _UNK_1814cf7f0) + uRam000000018323b968 + 0x5be45bb6;
  uVar9 = (uRam000000018323b968 ^ _UNK_1814cf7f8) + uRam000000018323b848 + 0xdfc67893;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b848 ^ _UNK_1814cf7f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018323b968 ^ _UNK_1814cf7f8;
  uRam000000018323b560 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018323b848 + 0xdfc67893) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323b968 + 0x5be45bb6));
  uVar4 = uRam000000018323b560 - (uRam000000018323b560 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018323b560;
  uRam000000018323ba50 = uRam000000018323ba50 ^ uVar4 ^ 0xa255f2f4f43adf93;
  uRam000000018323bb80 = (uRam000000018323bb80 * 0x405426010ceeac4d ^ uRam000000018323ba50) + uVar4;
  uRam000000018323bc70 = uRam000000018323bb80 ^ uRam000000018323ba50;
  uRam000000018323ba40 = 0;
  uVar4 = (uRam000000018323b6c0 ^ 0x84224cf1) + uRam000000018323bae0 + 0x84224cf1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018323b6c0 ^ 0x84224cf1;
  uVar9 = ((uRam000000018323bae0 + uRam000000018323b6c0) * 0x2000 |
          uRam000000018323bae0 + uRam000000018323b6c0 >> 0x33) ^ uRam000000018323bae0;
  uRam000000018323b898 =
       func_0x000189b5e880((uVar9 << 0x1d | uVar9 >> 0x23) - uRam000000018323b6c0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018323bae0 + 0x84224cf1));
  uVar4 = (uRam000000018323b898 & 0xfffffffff8000000) -
          (uRam000000018323b898 >> 1 & 0x5555555554000000);
  uVar4 = (uVar4 & 0x3333333330000000) + (uVar4 >> 2 & 0x3333333333000000);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f000000) * 0x101010101010101 >> 0x38) << 4 |
          uRam000000018323b898 & 0xfffffffff8000000;
  uRam000000018323ba80 = uRam000000018323bb88 ^ uVar4 ^ 0x6fd4;
  uRam000000018323bcd8 = (uRam000000018323bcd8 ^ uVar4) + 0x6fd4 ^ 0x7c6cadcd1269bd94;
  uRam000000018323b550 = (uRam000000018323b550 * -0x6653802f427d6ac3 ^ uRam000000018323bcd8) + uVar4
  ;
  uRam000000018323baa0 = uRam000000018323b550 ^ uRam000000018323bcd8;
  uRam000000018323b610 = 0x6fd4;
  uVar4 = (~uRam000000018323ba68 + 0x6fd5) *
          ((uVar10 ^ 0x84222325 ^ uRam000000018323b708) +
          (ulonglong)((uint)uRam000000018323b708 & (uint)(uVar10 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uRam000000018323b8a0) + (uVar4 & uRam000000018323b8a0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018323bb88 =
       func_0x000189b5e880((uVar10 ^ 0x84224cf1 | uVar4) +
                           (ulonglong)((uint)(uVar10 ^ 0x84224cf1) & (uint)uVar4));
  uVar4 = (uVar10 | 0x6fd4) ^ uRam000000018323bb88 ^ 0x6fd4;
  lVar5 = uVar10 - ((uint)uVar6 & 0x6fd4) * 2;
  uRam000000018323b718 = (uRam000000018323b718 ^ uVar4) + lVar5 + 0x6fd4 ^ 0x573fe809dcbb91b3;
  uRam000000018323bcf0 = (uRam000000018323bcf0 * -0x77d76e5b5ad3eeb1 ^ uRam000000018323b718) + uVar4
  ;
  uRam000000018323ba18 = uRam000000018323bcf0 ^ uRam000000018323b718;
  uRam000000018323b660 = lVar5 + 0x6fd4U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x16482,0x3ae);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189b59ff2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814cdd88 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hT; bfm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 189b5e910, runtime 6ffff176e910) =====

void FUN_189b5e910(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000189b5e94c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814cf910 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hT; bfn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 189b5f800, runtime 6ffff176f800) =====

void FUN_189b5f800(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189b5f87d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1814cfe50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



