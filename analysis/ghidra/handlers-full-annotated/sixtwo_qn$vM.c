// ===== Lsixtwo/qn$vM; _787c72ff6a54b403b06eb3b4d204172b ()V (handler @ image 18555d730, runtime 6fffed16d730) =====

void FUN_18555d730(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018555d80c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18051cd30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn$vM; dyg (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18552a340, runtime 6fffed13a340) =====

undefined8 FUN_18552a340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/qn$vM; dyh ([B)Ljava/lang/String; (handler @ image 18552a3d0, runtime 6fffed13a3d0) =====

void FUN_18552a3d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018552a470 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1805146e0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qn$vM; dyi (IJ)Ljava/lang/String; (handler @ image 185553220, runtime 6fffed163220) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185553220(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = (~uRam00000001830d5590 + 0x4800209a186a425) *
          ((uRam00000001830d59a0 ^ 0x66e3204c61965fba) +
          (uRam00000001830d59a0 & 0x66e3204c61965fba) * 2);
  uVar7 = (uVar7 | uRam00000001830d5870) + (uVar7 & uRam00000001830d5870);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5b30 =
       func_0x000185559ce0((uVar7 | 0x62632245c010fb9e) + (uVar7 & 0x62632245c010fb9e));
  uRam00000001830d5b00 =
       (uRam00000001830d5b00 ^ uRam00000001830d5b30 ^ 0x626320444430589b) + 0x66e3224de5b6fcbf ^
       0xa9e64f118046ec30;
  uRam00000001830d5bd8 =
       (uRam00000001830d5bd8 * -0x3564d2601c6236b7 ^ uRam00000001830d5b00) +
       (uRam00000001830d5b30 ^ 0x626320444430589b);
  uRam00000001830d5bd0 = uRam00000001830d5bd8 ^ uRam00000001830d5b00;
  uRam00000001830d5858 = 0x66e3224de5b6fcbf;
  uVar7 = (~uRam00000001830d5808 + 0x9f285ef76a9d4a2b) *
          ((uRam00000001830d5668 ^ 0x2ee655c9348d62db) +
          (uRam00000001830d5668 & 0x2ee655c9348d62db) * 2);
  uVar7 = (uVar7 | uRam00000001830d5940) + (uVar7 & uRam00000001830d5940);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d57f0 =
       func_0x000185559ce0((uVar7 | 0xb1ce0b3e5e1028f1) + (uVar7 & 0xb1ce0b3e5e1028f1));
  uVar7 = (uRam00000001830d57f0 ^ 0xbfee5ffffabf4bfe) << 0x17 |
          (uRam00000001830d57f0 ^ 0xbfee5ffffabf4bfe) >> 0x29;
  uRam00000001830d5af0 = (uRam00000001830d5af0 ^ uVar7) + 0xb1ce0b3eda320bd4 ^ 0xea56f6f34ab73555;
  uRam00000001830d58f8 = (uRam00000001830d58f8 * 0x72f092da2e25a71 ^ uRam00000001830d5af0) + uVar7;
  uRam00000001830d5620 = uRam00000001830d58f8 ^ uRam00000001830d5af0;
  uRam00000001830d5988 = 0xb1ce0b3eda320bd4;
  uRam00000001830d57c0 = func_0x000185559ce0(uRam00000001830d5730 ^ 0xd3afab373230960d);
  uVar7 = uRam00000001830d57c0 ^ 0xb6c3055ae5b1fff8;
  uRam00000001830d5a80 = uRam00000001830d5570 ^ uVar7 ^ 0x315f71f7cd4a6c83;
  uRam00000001830d5508 = (uRam00000001830d5508 ^ uVar7) + 0x315f71f7cd4a6c83 ^ 0x3c82da617446810a;
  uRam00000001830d5710 = (uRam00000001830d5710 * 0x24f06c02fd76954b ^ uRam00000001830d5508) + uVar7;
  uRam00000001830d5c10 = uRam00000001830d5710 ^ uRam00000001830d5508;
  uRam00000001830d5898 = 0x315f71f7cd4a6c83;
  uRam00000001830d55f8 = func_0x000185559ce0(uRam00000001830d5b40 ^ 0xfab4a5492948deec);
  uVar7 = (uRam00000001830d55f8 << 9 | uRam00000001830d55f8 >> 0x37) << 0x1c |
          (uRam00000001830d55f8 & 0x7fffffffffffff) >> 0x1b;
  uRam00000001830d5b40 = uRam00000001830d5700 ^ uVar7 ^ 0x7fff;
  uRam00000001830d5750 = (uRam00000001830d5750 ^ uVar7) + 0x7fff ^ 0x3ea621deab812c91;
  uRam00000001830d5cc8 = (uRam00000001830d5cc8 * -0xc22bd5f2939b935 ^ uRam00000001830d5750) + uVar7;
  uRam00000001830d58f0 = uRam00000001830d5cc8 ^ uRam00000001830d5750;
  uRam00000001830d5b08 = 0x7fff;
  uVar7 = (~uRam00000001830d5c50 + 0x8f1ec5d2a19ba96d) *
          ((uRam00000001830d5b18 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001830d5b18 & 0x84225cda) * 2);
  uVar7 = (uVar7 | uRam00000001830d59a0) + (uVar7 & uRam00000001830d59a0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5c08 =
       func_0x000185559ce0((uVar7 | 0x8f1ec5d225b9f5b6) + (uVar7 & 0x8f1ec5d225b9f5b6));
  uVar3 = (uRam00000001830d5c08 ^ 0xd3ca8afb331a5694) << 0x28 |
          (uRam00000001830d5c08 ^ 0xd3ca8afb331a5694) >> 0x18;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar3;
  uRam00000001830d5940 = uRam00000001830d5870 ^ uVar3 ^ 0x8f1ec5d2a19c296b;
  uRam00000001830d5960 = (uRam00000001830d5960 ^ uVar3) + 0x8f1ec5d2a19c296b ^ 0x626d0028b2122b9a;
  uRam00000001830d5bc0 = (uRam00000001830d5bc0 * -0x6bc255c1fd981b9 ^ uRam00000001830d5960) + uVar3;
  uRam00000001830d5578 = uRam00000001830d5bc0 ^ uRam00000001830d5960;
  uRam00000001830d5970 = 0x8f1ec5d2a19c296b;
  uRam00000001830d5ba0 = func_0x000185559ce0(uRam00000001830d5688 + 0x3d4e83fcb39816b3 ^ 0xab);
  uVar7 = uRam00000001830d5ba0 >> 1 | uRam00000001830d5ba0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001830d5ba0;
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3;
  uRam00000001830d5a88 = (uRam00000001830d5a88 ^ uVar3) + 0xab7b463c7e368f8e ^ 0x5b4464a0046d07f9;
  uRam00000001830d5720 = (uRam00000001830d5720 * -0x2f8bbf877d9ac6a1 ^ uRam00000001830d5a88) + uVar3
  ;
  uRam00000001830d5728 = uRam00000001830d5720 ^ uRam00000001830d5a88;
  uRam00000001830d58d8 = 0xab7b463c7e368f8e;
  uVar7 = (uRam00000001830d5848 ^ _UNK_18051b840) + uRam00000001830d5910 + 0x84225cda;
  uVar3 = (uRam00000001830d5910 ^ _UNK_18051b848) + uRam00000001830d5848 + 0x5484b9c381c97072;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d5848 ^ _UNK_18051b840;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830d5910 ^ _UNK_18051b848;
  uRam00000001830d55b8 =
       func_0x000185559ce0((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001830d5848 + 0x5484b9c381c97072) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d5910 + 0x84225cda));
  uVar7 = uRam00000001830d55b8 >> 1 | uRam00000001830d55b8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001830d55b8;
  uRam00000001830d5ab8 = uRam00000001830d5970 ^ uVar7 ^ 0x5484b9c381c9f071;
  uRam00000001830d5738 = (uRam00000001830d5738 ^ uVar7) + 0x5484b9c381c9f071 ^ 0x8a702a03dd807422;
  uRam00000001830d5a78 = (uRam00000001830d5a78 * -0x7f7a39fdb20f8f41 ^ uRam00000001830d5738) + uVar7
  ;
  uRam00000001830d5898 = uRam00000001830d5a78 ^ uRam00000001830d5738;
  uRam00000001830d5c80 = 0x5484b9c381c9f071;
  uVar7 = (~uRam00000001830d5628 + 0xab7b463c7e368f8f) *
          ((uRam00000001830d5a28 ^ 0x5484b9c305ebd354) +
          (uRam00000001830d5a28 & 0x5484b9c305ebd354) * 2);
  uVar7 = (uVar7 | uRam00000001830d5a70) + (uVar7 & uRam00000001830d5a70);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5b98 =
       func_0x000185559ce0((uVar7 | 0xffffffff7bdd5cda) + (uVar7 & 0xffffffff7bdd5cda));
  uVar3 = _UNK_18051b858;
  uVar7 = _UNK_18051b850;
  uVar4 = ~uRam00000001830d5b98 & 0x5484b9c381c00000;
  uRam00000001830d55c0 = uRam00000001830d5a28 ^ uVar4 ^ 0x7fff;
  uRam00000001830d5cb0 = (uRam00000001830d5cb0 ^ uVar4) + 0x7fff ^ 0xe036cd2525cba779;
  uRam00000001830d57c0 = (uRam00000001830d57c0 * 0x2a3c4984204312e1 ^ uRam00000001830d5cb0) + uVar4;
  uRam00000001830d5aa8 = uRam00000001830d57c0 ^ uRam00000001830d5cb0;
  uRam00000001830d5a38 = 0x7fff;
  uVar4 = (uRam00000001830d57d0 ^ _UNK_18051b850) + uRam00000001830d5510 + 0x66e3224d6194df9a;
  uVar9 = (uRam00000001830d5510 ^ _UNK_18051b858) + uRam00000001830d57d0 + 0xb1ce0b3eda320bd4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001830d57d0 ^ _UNK_18051b850;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830d5510 ^ _UNK_18051b858;
  uRam00000001830d5780 =
       func_0x000185559ce0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001830d57d0 + 0xb1ce0b3eda320bd4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001830d5510 + 0x66e3224d6194df9a));
  uVar4 = uRam00000001830d5780 * 0x1c8c7fd9893d6eb5;
  uRam00000001830d5a60 = uRam00000001830d5c58 ^ uVar4 ^ 0x18b12d8cbfe90893;
  uRam00000001830d5928 = (uRam00000001830d5928 ^ uVar4) + 0x18b12d8cbfe90893 ^ 0x1452115ad806a034;
  uRam00000001830d55c8 = (uRam00000001830d55c8 * 0x7491bb74b944b7df ^ uRam00000001830d5928) + uVar4;
  uRam00000001830d5bc8 = uRam00000001830d55c8 ^ uRam00000001830d5928;
  uRam00000001830d5898 = 0x18b12d8cbfe90893;
  uVar4 = (uRam00000001830d5598 ^ uVar7) + uRam00000001830d5c48 + 0x66e3224d6194df9a;
  uVar9 = (uRam00000001830d5c48 ^ uVar3) + uRam00000001830d5598 + 0xb1ce0b3eda320bd4;
  uVar7 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001830d5598 ^ uVar7;
  uVar3 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830d5c48 ^ uVar3;
  uRam00000001830d55b0 =
       func_0x000185559ce0((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001830d5598 + 0xb1ce0b3eda320bd4) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001830d5c48 + 0x66e3224d6194df9a));
  uRam00000001830d5568 =
       (uRam00000001830d5568 ^ uRam00000001830d55b0) + 0xd72d29733f84f76b ^ 0xf6443fe15ba1f26a;
  uRam00000001830d5610 =
       (uRam00000001830d5610 * 0x54a7b2549efb0edb ^ uRam00000001830d5568) + uRam00000001830d55b0;
  uRam00000001830d55f0 = uRam00000001830d5610 ^ uRam00000001830d5568;
  uRam00000001830d56c8 = uRam00000001830d56c8 ^ 0xd72d29733f84f76b;
  uRam00000001830d56e0 = 0xd72d29733f84f76b;
  uVar7 = (~uRam00000001830d57d8 + 0xb1ce0b3eda320bd5) *
          ((uRam00000001830d5b70 ^ 0x66e3224d6194df9a) +
          (uRam00000001830d5b70 & 0x66e3224d6194df9a) * 2);
  uVar7 = (uVar7 | uRam00000001830d5af8) + (uVar7 & uRam00000001830d5af8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5688 =
       func_0x000185559ce0((uVar7 | 0xd72d2973bba6d44e) + (uVar7 & 0xd72d2973bba6d44e));
  uRam00000001830d56c8 =
       (uRam00000001830d56c8 ^ uRam00000001830d5688) + 0x20c2020cc0320894 ^ 0xc45ff10ec2a85978;
  uRam00000001830d5c68 =
       (uRam00000001830d5c68 * 0x2a490288c5058321 ^ uRam00000001830d56c8) + uRam00000001830d5688;
  uRam00000001830d5a90 = uRam00000001830d5c68 ^ uRam00000001830d56c8;
  uRam00000001830d5530 = 0x20c2020cc0320894;
  uRam00000001830d5660 = func_0x000185559ce0(uRam00000001830d5c98 ^ 0xd6c468eaa62ac25f);
  uRam00000001830d5cb0 = uRam00000001830d5568 ^ uRam00000001830d5660 ^ 0x18b12d8cbfe90893;
  uRam00000001830d5608 =
       (uRam00000001830d5608 ^ uRam00000001830d5660) + 0x18b12d8cbfe90893 ^ 0xcbf32c72ccb728b9;
  uRam00000001830d5ac0 =
       (uRam00000001830d5ac0 * -0x5504e852139d066d ^ uRam00000001830d5608) + uRam00000001830d5660;
  uRam00000001830d5a20 = uRam00000001830d5ac0 ^ uRam00000001830d5608;
  uRam00000001830d5840 = 0x18b12d8cbfe90893;
  uVar7 = (~uRam00000001830d5c50 + 0x18b12d8cbfe90894) *
          ((uRam00000001830d55e0 ^ 0x18b12d8c3bcb2bb6) +
          (uRam00000001830d55e0 & 0x18b12d8c3bcb2bb6) * 2);
  uVar7 = (uVar7 | uRam00000001830d5cf8) + (uVar7 & uRam00000001830d5cf8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5af8 =
       func_0x000185559ce0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam00000001830d5898 =
       (uRam00000001830d5af8 & 0xffffffff) * (ulonglong)_UNK_18051b860 +
       ((ulonglong)_UNK_18051b870 * (uRam00000001830d5af8 & 0xffffffff) +
        (uRam00000001830d5af8 >> 0x20) * (ulonglong)_UNK_18051b860 << 0x20) & 0x7fffffffffffffff;
  uRam00000001830d5a28 = uRam00000001830d5a28 ^ uRam00000001830d5898 ^ 0xc1d0d04ade91976a;
  uRam00000001830d59b0 =
       (uRam00000001830d59b0 * 0x2fe7a805e5d9501d ^ uRam00000001830d5a28) + uRam00000001830d5898;
  uRam00000001830d57b8 = uRam00000001830d59b0 ^ uRam00000001830d5a28;
  uRam00000001830d56a0 = 0;
  uVar7 = (uRam00000001830d5a98 ^ 0x84225cda) + uRam00000001830d58a8 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d5a98 ^ 0x84225cda;
  uVar3 = ((uRam00000001830d58a8 + uRam00000001830d5a98) * 0x2000 |
          uRam00000001830d58a8 + uRam00000001830d5a98 >> 0x33) ^ uRam00000001830d58a8;
  lRam00000001830d5938 =
       func_0x000185559ce0((uVar3 << 0x1d | uVar3 >> 0x23) - uRam00000001830d5a98 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d58a8 + 0x84225cda));
  uVar7 = lRam00000001830d5938 * -0x54e999901251417b ^ 0x7fff;
  uRam00000001830d56c0 = uRam00000001830d5a50 ^ uVar7 ^ 0x7fff;
  uRam00000001830d5c40 = (uRam00000001830d5c40 ^ uVar7) + 0x7fff ^ 0x5873a5de79058930;
  uRam00000001830d5590 = (uRam00000001830d5590 * 0x42c6461afef6ec45 ^ uRam00000001830d5c40) + uVar7;
  uRam00000001830d5aa8 = uRam00000001830d5590 ^ uRam00000001830d5c40;
  uRam00000001830d5860 = 0x7fff;
  uVar7 = (uRam00000001830d5840 ^ _UNK_18051b880) + uRam00000001830d5c48 + 0x66e3224d6194df9a;
  uVar3 = (uRam00000001830d5c48 ^ _UNK_18051b888) + uRam00000001830d5840 + 0x991cddb21a490340;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d5840 ^ _UNK_18051b880;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830d5c48 ^ _UNK_18051b888;
  uRam00000001830d57a0 =
       func_0x000185559ce0((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001830d5840 + 0x991cddb21a490340) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001830d5c48 + 0x66e3224d6194df9a));
  uVar7 = uRam00000001830d57a0 << 7 | uRam00000001830d57a0 >> 0x39;
  uRam00000001830d5588 = uRam00000001830d5588 ^ uVar7 ^ 0x99366db660b4a495;
  uRam00000001830d57b8 = (uRam00000001830d57b8 * 0x4c9f2719c54af32d ^ uRam00000001830d5588) + uVar7;
  uRam00000001830d5c60 = uRam00000001830d57b8 ^ uRam00000001830d5588;
  uRam00000001830d5560 = 0;
  uRam00000001830d5a78 = func_0x000185559ce0(uRam00000001830d58a0 ^ 0x3bff7bba0021cf);
  uVar7 = uRam00000001830d5a78 & 0x7fffffffffffffff;
  uRam00000001830d5b78 = uRam00000001830d5b08 ^ uVar7 ^ 0x7fff;
  uRam00000001830d5ba8 = (uRam00000001830d5ba8 ^ uVar7) + 0x7fff ^ 0x6e8746b02c1203b5;
  uRam00000001830d5cc8 = (uRam00000001830d5cc8 * -0x23aed392b673da4f ^ uRam00000001830d5ba8) + uVar7
  ;
  uRam00000001830d5748 = uRam00000001830d5cc8 ^ uRam00000001830d5ba8;
  uRam00000001830d5558 = 0x7fff;
  uRam00000001830d56d0 = func_0x000185559ce0(uRam00000001830d5820 ^ 0xffdeff7be2ffdd88);
  uVar7 = uRam00000001830d56d0 >> 1 | uRam00000001830d56d0;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = uRam00000001830d56d0 ^ 0x66e3204ce5b47c9f ^
          (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4;
  uRam00000001830d5848 = uRam00000001830d5848 ^ uVar7 ^ 0x14240913550154b0;
  uRam00000001830d5b80 = (uRam00000001830d5b80 * 0x7fb1ee7f3ac4e34d ^ uRam00000001830d5848) + uVar7;
  uRam00000001830d5bc8 = uRam00000001830d5b80 ^ uRam00000001830d5848;
  uRam00000001830d55d0 = 0;
  uVar7 = (~uRam00000001830d5c88 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001830d5c68) +
          ((param_4 ^ 0x84222325) & uRam00000001830d5c68) * 2);
  uVar7 = (uVar7 | uRam00000001830d5ad0) + (uVar7 & uRam00000001830d5ad0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5c90 =
       func_0x000185559ce0((param_4 ^ 0x84225cda | uVar7) + (uVar7 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uVar3 = (ulonglong)uVar2;
  uRam00000001830d5b88 =
       (uRam00000001830d5b88 ^ uRam00000001830d5c90 & 0x7fffff80000000) + uVar3 ^ 0x25c6782c31e750aa
  ;
  uRam00000001830d5538 =
       (uRam00000001830d5538 * 0x79a28611418ce5a5 ^ uRam00000001830d5b88) +
       (uRam00000001830d5c90 & 0x7fffff80000000);
  uRam00000001830d5b28 = uRam00000001830d5538 ^ uRam00000001830d5b88;
  uVar7 = uVar3 ^ 0x84222325 ^ uRam00000001830d56d0;
  uVar4 = param_3 ^ uRam00000001830d5580;
  lVar8 = (uVar3 ^ 0x84222325) + uRam00000001830d5580;
  lVar5 = uRam00000001830d56d0 + param_3;
  uVar9 = uVar7 + lVar8;
  uVar10 = uVar4 + lVar5;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar7;
  uVar4 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar4;
  uRam00000001830d58c0 = uVar3;
  uRam00000001830d5ce0 =
       func_0x000185559ce0((uVar4 << 0x1d | uVar4 >> 0x23) - lVar5 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
  uVar4 = (ulonglong)(uVar2 ^ param_3);
  uRam00000001830d5cf0 =
       (uRam00000001830d5cf0 ^ ~uRam00000001830d5ce0 & uVar3) + uVar4 ^ 0xd41be7bf5434f343;
  uRam00000001830d5980 =
       (uRam00000001830d5980 * 0x53b160dc4845fd45 ^ uRam00000001830d5cf0) +
       (~uRam00000001830d5ce0 & uVar3);
  uRam00000001830d5b28 = uRam00000001830d5980 ^ uRam00000001830d5cf0;
  uRam00000001830d5b98 = uVar4;
  uRam00000001830d5618 = func_0x000185559ce0(uRam00000001830d5a40 ^ 0x1d001a94ff4608);
  uRam00000001830d5780 =
       (uRam00000001830d5780 ^ uRam00000001830d5618 ^ 0xb7dd3e9d) + 0xb7dd3e9d ^ 0x94f19e4857c77ddf;
  uRam00000001830d5cb8 =
       (uRam00000001830d5cb8 * 0x44414e6eee467bab ^ uRam00000001830d5780) +
       (uRam00000001830d5618 ^ 0xb7dd3e9d);
  uRam00000001830d5750 = uRam00000001830d5cb8 ^ uRam00000001830d5780;
  uRam00000001830d5cd8 = 0xb7dd3e9d;
  uRam00000001830d5ac8 = func_0x000185559ce0(uRam00000001830d5940 + 0xffc900cd2e0033ff ^ 0xec);
  uRam00000001830d5ae8 =
       (uRam00000001830d5ae8 ^ uRam00000001830d5ac8 & 0x7fffffffffffff) + 0x5976da17 ^
       0xa1b0b6da9403ef9c;
  uRam00000001830d5960 =
       (uRam00000001830d5960 * -0x6d6a40ae8fe9f74d ^ uRam00000001830d5ae8) +
       (uRam00000001830d5ac8 & 0x7fffffffffffff);
  uRam00000001830d58a8 = uRam00000001830d5960 ^ uRam00000001830d5ae8;
  uRam00000001830d5c58 = 0x5976da17;
  uRam00000001830d5538 = func_0x000185559ce0(uRam00000001830d5868 + 0xff98fff9f30088ff ^ 0x33);
  uVar7 = (uRam00000001830d5538 << 0x19 | uRam00000001830d5538 >> 0x27) << 0x17 |
          (uRam00000001830d5538 & 0x7fffffffff) >> 0x10;
  uRam00000001830d57f8 = (uRam00000001830d57f8 ^ uVar7) - 0x8ebb883a ^ 0xaff25e0d729423f5;
  uRam00000001830d57d8 = (uRam00000001830d57d8 * -0x5436b3d31071f8e1 ^ uRam00000001830d57f8) + uVar7
  ;
  uRam00000001830d5ca8 = uRam00000001830d57d8 ^ uRam00000001830d57f8;
  uRam00000001830d56d8 = 0x714477c6;
  uVar7 = (~uRam00000001830d5788 + 0x8ebb883b) *
          ((uRam00000001830d56a0 ^ 0x8422480b) +
          (ulonglong)((uint)uRam00000001830d56a0 & 0x8422480b) * 2);
  uVar7 = (uVar7 | uRam00000001830d56e8) + (uVar7 & uRam00000001830d56e8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5c68 =
       func_0x000185559ce0((uVar7 | 0xa99c031) + (ulonglong)((uint)uVar7 & 0xa99c031));
  uRam00000001830d5c88 = uRam00000001830d5948 ^ uRam00000001830d5c68 ^ 0x8ebbf368;
  uRam00000001830d5a88 =
       (uRam00000001830d5a88 ^ uRam00000001830d5c68) + 0x8ebbf368 ^ 0x9f107adcc252be7c;
  uRam00000001830d5c18 =
       (uRam00000001830d5c18 * -0x4e8c5350af1da9fb ^ uRam00000001830d5a88) + uRam00000001830d5c68;
  uRam00000001830d5670 = uRam00000001830d5c18 ^ uRam00000001830d5a88;
  uRam00000001830d56a0 = 0x8ebbf368;
  uVar7 = (uRam00000001830d5598 ^ _UNK_18051b890) + uRam00000001830d5898 + 0xa99d04d;
  uVar3 = (uRam00000001830d5898 ^ _UNK_18051b898) + uRam00000001830d5598 + 0x714477c6;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d5598 ^ _UNK_18051b890;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830d5898 ^ _UNK_18051b898;
  uRam00000001830d5b88 =
       func_0x000185559ce0((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001830d5598 + 0x714477c6) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d5898 + 0xa99d04d));
  uVar7 = (uRam00000001830d5b88 ^ 0x8ebbf368) & 0x7ffffffffffff;
  uRam00000001830d5bb8 = uRam00000001830d5bb0 ^ uVar7 ^ 0x100006b2e;
  uRam00000001830d55a8 = (uRam00000001830d55a8 ^ uVar7) + 0x100006b2e ^ 0x87e82ad570363505;
  uRam00000001830d5a80 = (uRam00000001830d5a80 * 0x2edafb3cea647e1 ^ uRam00000001830d55a8) + uVar7;
  uRam00000001830d5748 = uRam00000001830d5a80 ^ uRam00000001830d55a8;
  uRam00000001830d5958 = 0x6b2e;
  uVar7 = (~uRam00000001830d5ce0 + 0xc5c99331) *
          ((uRam00000001830d5a58 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001830d5a58 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam00000001830d5bb8) + (uVar7 & uRam00000001830d5bb8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5bc0 =
       func_0x000185559ce0((uVar7 | 0x41ebb015) + (ulonglong)((uint)uVar7 & 0x41ebb015));
  uRam00000001830d5820 =
       (uRam00000001830d5820 ^ uRam00000001830d5bc0) - 0xc5c99330 ^ 0x90df8317f67c588f;
  uRam00000001830d5a28 =
       (uRam00000001830d5a28 * -0x6ef4af3873376a55 ^ uRam00000001830d5820) + uRam00000001830d5bc0;
  uRam00000001830d5898 = uRam00000001830d5a28 ^ uRam00000001830d5820;
  uRam00000001830d5bf0 = 0x3a366cd0;
  uVar7 = (~uRam00000001830d57c8 + 0xc5c99331) *
          ((uRam00000001830d5c80 ^ 0x8422480b) +
          (ulonglong)((uint)uRam00000001830d5c80 & 0x8422480b) * 2);
  uVar7 = (uVar7 | uRam00000001830d5538) + (uVar7 & uRam00000001830d5538);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d59f0 =
       func_0x000185559ce0((uVar7 | 0x41ebdb3b) + (ulonglong)((uint)uVar7 & 0x41ebdb3b));
  uVar7 = (uRam00000001830d59f0 ^ 0x6b2e) << 0xd | uRam00000001830d59f0 >> 0x33;
  uRam00000001830d5890 = uRam00000001830d5748 ^ uVar7 ^ 0xc5c9fe5e;
  uRam00000001830d5568 = (uRam00000001830d5568 ^ uVar7) + 0xc5c9fe5e ^ 0x976a4c75839738bc;
  uRam00000001830d5c68 = (uRam00000001830d5c68 * -0x4c623025313bf479 ^ uRam00000001830d5568) + uVar7
  ;
  uRam00000001830d5c40 = uRam00000001830d5c68 ^ uRam00000001830d5568;
  uRam00000001830d56d0 = 0xc5c9fe5e;
  uRam00000001830d5698 = func_0x000185559ce0(uRam00000001830d5cf8 + 0xffaefff56aff52ff ^ 0xab);
  uVar7 = (uRam00000001830d5698 ^ 0xe0000000) & 0xffffffffe0000000;
  uRam00000001830d5648 = uRam00000001830d5b10 ^ uVar7 ^ 0x100006b2e;
  uRam00000001830d5548 = (uRam00000001830d5548 ^ uVar7) + 0x100006b2e ^ 0x1b3d55b2786a5a8e;
  uRam00000001830d5618 = (uRam00000001830d5618 * -0x7e399eeae969f2f5 ^ uRam00000001830d5548) + uVar7
  ;
  uRam00000001830d5a68 = uRam00000001830d5618 ^ uRam00000001830d5548;
  uRam00000001830d56f0 = 0x6b2e;
  uRam00000001830d5840 = func_0x000185559ce0(uRam00000001830d55c8 + 0xffd50007230009ff ^ 0xfc);
  uVar7 = uRam00000001830d5840 & 0x7fffffffffffffff;
  uRam00000001830d56c0 = uRam00000001830d5980 ^ uVar7 ^ 0xbd34d25a;
  uRam00000001830d5600 = (uRam00000001830d5600 ^ uVar7) + 0xbd34d25a ^ 0xe02fb8c71488069e;
  uRam00000001830d5b88 = (uRam00000001830d5b88 * 0x1d3aca4cdc0cf5fd ^ uRam00000001830d5600) + uVar7;
  uRam00000001830d5b08 = uRam00000001830d5b88 ^ uRam00000001830d5600;
  uRam00000001830d56f0 = 0xbd34d25a;
  uVar7 = (~uRam00000001830d57e0 + 0x42cb98d5) *
          ((uRam00000001830d5a90 ^ 0x3916f17f) +
          (ulonglong)((uint)uRam00000001830d5a90 & 0x3916f17f) * 2);
  uVar7 = (uVar7 | uRam00000001830d5be8) + (uVar7 & uRam00000001830d5be8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5540 =
       func_0x000185559ce0((uVar7 | 0x7bdd69ab) + (ulonglong)((uint)uVar7 & 0x7bdd69ab));
  uVar7 = uRam00000001830d5540 - (uRam00000001830d5540 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam00000001830d5540;
  uRam00000001830d5b00 = uRam00000001830d56a0 ^ uVar7 ^ 0x100006b2e;
  uRam00000001830d5ad8 = (uRam00000001830d5ad8 ^ uVar7) + 0x100006b2e ^ 0x796bb12e40ea99dc;
  uRam00000001830d5928 = (uRam00000001830d5928 * -0x4bbbd0378c9dc2f3 ^ uRam00000001830d5ad8) + uVar7
  ;
  uRam00000001830d5868 = uRam00000001830d5928 ^ uRam00000001830d5ad8;
  uRam00000001830d5aa0 = 0x6b2e;
  uVar7 = (uRam00000001830d5850 ^ _UNK_18051b8a0) + uRam00000001830d5ba0 + 0x33ff1db8;
  uVar3 = (uRam00000001830d5ba0 ^ _UNK_18051b8a8) + uRam00000001830d5850 + 0x5976da17;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d5850 ^ _UNK_18051b8a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830d5ba0 ^ _UNK_18051b8a8;
  uRam00000001830d57c0 =
       func_0x000185559ce0((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001830d5850 + 0x5976da17) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d5ba0 + 0x33ff1db8));
  uVar2 = ((uint)uRam00000001830d57c0 ^ 0xa24d2c84) & 0xb7dd3e9d;
  uVar6 = uVar2 >> 1 | uVar2;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar7 = (ulonglong)uVar6 - (ulonglong)(uVar6 >> 1 & 0x55555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          (ulonglong)uVar2;
  uRam00000001830d5c30 = (uRam00000001830d5c30 ^ uVar7) + 0xeeabe48a ^ 0xb655292bc73c175e;
  uRam00000001830d5c68 =
       (uRam00000001830d5ad8 * 0x45bb1acf77e9a5eb ^ uRam00000001830d5c30) + uVar7 ^
       uRam00000001830d5c30;
  uRam00000001830d5ca8 = uRam00000001830d5940 ^ 0xeeabe48a;
  uRam00000001830d5ad8 = 0xeeabe48a;
  uRam00000001830d59f8 = func_0x000185559ce0(uRam00000001830d5940 ^ 0xecffb883001ef7);
  uVar7 = uRam00000001830d59f8 >> 1 | uRam00000001830d59f8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001830d59f8) * -0x73faa297627afcc7;
  uRam00000001830d5710 = uRam00000001830d5a08 ^ uVar7 ^ 0x1115418b4;
  uRam00000001830d5b80 = (uRam00000001830d5b80 ^ uVar7) + 0x1115418b4 ^ 0x33d26dddec346cc6;
  uRam00000001830d5ba8 = (uRam00000001830d5ba8 * -0x2a8beca01161c615 ^ uRam00000001830d5b80) + uVar7
  ;
  uRam00000001830d5628 = uRam00000001830d5ba8 ^ uRam00000001830d5b80;
  uRam00000001830d59e8 = 0x115418b4;
  uRam00000001830d5c68 = func_0x000185559ce0(uRam00000001830d5540 ^ 0xffdf0083e2ffdd89);
  uRam00000001830d57b8 = uRam00000001830d5c68 << 0xb | uRam00000001830d5c68 >> 0x35;
  uRam00000001830d5a40 = uRam00000001830d5a40 ^ uRam00000001830d57b8 ^ 0xd8aff856005e2b2c;
  uRam00000001830d5688 =
       (uRam00000001830d5688 * 0x37b065eaa531c943 ^ uRam00000001830d5a40) + uRam00000001830d57b8;
  uRam00000001830d56c0 = uRam00000001830d5688 ^ uRam00000001830d5a40;
  uRam00000001830d55f0 = 0;
  uRam00000001830d58c8 = func_0x000185559ce0(uRam00000001830d5550 ^ 0xffb7ff7c0affe16b);
  uVar7 = uRam00000001830d58c8 << 0x2d | uRam00000001830d58c8 >> 0x13;
  uRam00000001830d55f0 = uRam00000001830d5548 ^ uVar7 ^ 0x6b2e;
  uRam00000001830d56d8 = (uRam00000001830d56d8 ^ uVar7) + 0x6b2e ^ 0x10c92d650c678a7d;
  uRam00000001830d57a0 = (uRam00000001830d57a0 * -0x7c8016f117df5693 ^ uRam00000001830d56d8) + uVar7
  ;
  uRam00000001830d5b50 = uRam00000001830d57a0 ^ uRam00000001830d56d8;
  uRam00000001830d5b28 = 0x6b2e;
  uVar7 = (uRam00000001830d5560 ^ _UNK_18051b8b0) + uRam00000001830d5c90 + 0x33ff1db8;
  uVar3 = (uRam00000001830d5c90 ^ _UNK_18051b8b8) + uRam00000001830d5560 + 0x4822c162;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d5560 ^ _UNK_18051b8b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001830d5c90 ^ _UNK_18051b8b8;
  uRam00000001830d5540 =
       func_0x000185559ce0((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001830d5560 + 0x4822c162) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d5c90 + 0x33ff1db8));
  uVar7 = (uRam00000001830d5540 & 0x1f) << 0x3a | uRam00000001830d5540 >> 6;
  uRam00000001830d56c8 = uRam00000001830d56c8 ^ uVar7 ^ 0xce416453f30339a6;
  uRam00000001830d5618 = (uRam00000001830d5618 * 0x64a01d4d6a865bcd ^ uRam00000001830d56c8) + uVar7;
  uRam00000001830d5bc8 = uRam00000001830d5618 ^ uRam00000001830d56c8;
  uRam00000001830d56a0 = 0;
  uRam00000001830d5c50 = func_0x000185559ce0(uRam00000001830d55a8 + 0xffc7ff7c070021ff ^ 0x83);
  uRam00000001830d5a60 = uRam00000001830d5790 ^ uRam00000001830d5c50 ^ 0x6b2e;
  uRam00000001830d59f0 = (uRam00000001830d59f0 ^ uRam00000001830d5c50) + 0x6b2e ^ 0xedd09fcf16639c39
  ;
  uRam00000001830d5b50 =
       (uRam00000001830d5b50 * 0x6d5e132dd3314d27 ^ uRam00000001830d59f0) + uRam00000001830d5c50;
  uRam00000001830d5858 = uRam00000001830d5b50 ^ uRam00000001830d59f0;
  uRam00000001830d5940 = 0x6b2e;
  uVar7 = (~uRam00000001830d5750 + 0x9555349e) *
          ((uRam00000001830d5b40 ^ 0x117717b8) +
          (ulonglong)((uint)uRam00000001830d5b40 & 0x117717b8) * 2);
  uVar7 = (uVar7 | uRam00000001830d5558) + (uVar7 & uRam00000001830d5558);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d5a88 =
       func_0x000185559ce0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325));
  uRam00000001830d5b00 =
       uRam00000001830d5b00 ^ uRam00000001830d5a88 ^ 0x9555349d ^ 0x97ab998f5a791ffb;
  uRam00000001830d5cf8 =
       (uRam00000001830d5cf8 * 0x737cc303039ac77b ^ uRam00000001830d5b00) +
       (uRam00000001830d5a88 ^ 0x9555349d);
  uRam00000001830d55d0 = uRam00000001830d5cf8 ^ uRam00000001830d5b00;
  uRam00000001830d5740 = 0;
  uRam00000001830d5a70 = func_0x000185559ce0(uRam00000001830d5a70 + 0x380083f7001dff ^ 0x2a);
  uVar7 = uRam00000001830d5a70 << 0x1d | (uRam00000001830d5a70 & 0x7fffffffffffffff) >> 0x23;
  uRam00000001830d5b70 = uRam00000001830d55f0 ^ uVar7 ^ 0x6b2e;
  uRam00000001830d5a38 = (uRam00000001830d5a38 ^ uVar7) + 0x6b2e ^ 0x38b57c3fbc30b24c;
  uRam00000001830d5658 = (uRam00000001830d5658 * 0x13bf4f8b254889e1 ^ uRam00000001830d5a38) + uVar7;
  uRam00000001830d58a8 = uRam00000001830d5658 ^ uRam00000001830d5a38;
  uRam00000001830d55a8 = 0x6b2e;
  uVar7 = uVar4 ^ 0x84222325 ^ uRam00000001830d5bd0;
  lVar5 = (uVar4 ^ 0x84222325) + uRam00000001830d5ab0;
  uVar3 = uVar7 + lVar5;
  uVar9 = (uRam00000001830d5ab0 ^ 0x6b2e) + uRam00000001830d5bd0 + 0x6b2e;
  uVar7 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar7;
  uVar3 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001830d5ab0 ^ 0x6b2e;
  uRam00000001830d56a8 =
       func_0x000185559ce0((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001830d5bd0 + 0x6b2e) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar5);
  uRam00000001830d5be0 = uVar4 ^ 0x6b2e;
  uRam00000001830d5950 =
       (uRam00000001830d5950 ^ uRam00000001830d56a8) + uRam00000001830d5be0 ^ 0x6d7c6fce71161f41;
  uRam00000001830d5928 =
       (uRam00000001830d5928 * 0x2622774275cd4fa7 ^ uRam00000001830d5950) + uRam00000001830d56a8;
  uRam00000001830d5788 = uRam00000001830d5928 ^ uRam00000001830d5950;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x212de,0x51d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185555813 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180519eb8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn$vM; dyj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 185559d70, runtime 6fffed169d70) =====

void FUN_185559d70(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000185559dac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18051b900 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qn$vM; dyk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18555ac60, runtime 6fffed16ac60) =====

void FUN_18555ac60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018555acdd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18051be40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn$vM; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 1854f8cf0, runtime 6fffed108cf0) =====

void FUN_1854f8cf0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x212de,0x51d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001854f8dd8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180506a40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qn$vM; toJson ()Lcom/google/gson/JsonObject; (handler @ image 18550fa60, runtime 6fffed11fa60) =====

void FUN_18550fa60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x212de,0x51d);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018550fb4e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18050ccc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



