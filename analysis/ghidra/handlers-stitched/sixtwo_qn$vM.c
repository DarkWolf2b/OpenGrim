// ===== STITCHED CORPUS: sixtwo.qn$vM =====
// handlers: 8  continuation blocks: 85  unresolved table targets: 0
// tables not in tables.json: ['0x514b40', '0x515d98', '0x515da8', '0x515db8', '0x515dc8', '0x515dd8', '0x51b840', '0x62bf8', '0x64068']

// ===== Lsixtwo/qn$vM; _787c72ff6a54b403b06eb3b4d204172b ()V (handler @ image 18555d730, runtime 6fffed16d730) =====

void FUN_18555d730(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x212de,0x51d)
      /* POOL[0x212de,0x51d]: f | dyb | baFMt | biiVj | dyd | UPXcN | dyc | sixtwo/qn$vM | uvBnM | cXx | hbWex | dWnPF | cCUes | dyg | VPaBx | cXw | zKouh | dyi | SeXkI | WosLs | dyh | bfSHa | jZDhQ | Lsixtwo/qn$vM; | cXz | oHlYm | Lsixtwo/qn$vL; | YYziD | XdVDB | IBDPw | lKeog | WBAek | cXB | pBVGF | cXA | opcode | Lsixtwo/qp; | data | fBZNq | [Lsixtwo/qp; | wGaQq | ZYlBy | OqnKD | vYCVM | KSzgN | OlLrn | jfYZz | java/util/concurrent/CountDownLatch | cXd | (Ljava/util/function/Consumer;)Lsixtwo/qm; | HicYU | Lsixtwo/qm; | cXQ | krWnA | cXe | cXF | sILNX | SECONDS | await | (JLjava/util/concurrent/TimeUnit;)Z | aBiEo | cXE */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x212de,0x51d)
      /* POOL[0x212de,0x51d]: f | dyb | baFMt | biiVj | dyd | UPXcN | dyc | sixtwo/qn$vM | uvBnM | cXx | hbWex | dWnPF | cCUes | dyg | VPaBx | cXw | zKouh | dyi | SeXkI | WosLs | dyh | bfSHa | jZDhQ | Lsixtwo/qn$vM; | cXz | oHlYm | Lsixtwo/qn$vL; | YYziD | XdVDB | IBDPw | lKeog | WBAek | cXB | pBVGF | cXA | opcode | Lsixtwo/qp; | data | fBZNq | [Lsixtwo/qp; | wGaQq | ZYlBy | OqnKD | vYCVM | KSzgN | OlLrn | jfYZz | java/util/concurrent/CountDownLatch | cXd | (Ljava/util/function/Consumer;)Lsixtwo/qm; | HicYU | Lsixtwo/qm; | cXQ | krWnA | cXe | cXF | sILNX | SECONDS | await | (JLjava/util/concurrent/TimeUnit;)Z | aBiEo | cXE */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x212de,0x51d)
      /* POOL[0x212de,0x51d]: f | dyb | baFMt | biiVj | dyd | UPXcN | dyc | sixtwo/qn$vM | uvBnM | cXx | hbWex | dWnPF | cCUes | dyg | VPaBx | cXw | zKouh | dyi | SeXkI | WosLs | dyh | bfSHa | jZDhQ | Lsixtwo/qn$vM; | cXz | oHlYm | Lsixtwo/qn$vL; | YYziD | XdVDB | IBDPw | lKeog | WBAek | cXB | pBVGF | cXA | opcode | Lsixtwo/qp; | data | fBZNq | [Lsixtwo/qp; | wGaQq | ZYlBy | OqnKD | vYCVM | KSzgN | OlLrn | jfYZz | java/util/concurrent/CountDownLatch | cXd | (Ljava/util/function/Consumer;)Lsixtwo/qm; | HicYU | Lsixtwo/qm; | cXQ | krWnA | cXe | cXF | sILNX | SECONDS | await | (JLjava/util/concurrent/TimeUnit;)Z | aBiEo | cXE */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018550fb4e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18050ccc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x54f8ddb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1854f8ddb(void)

{
  FUN_190ddce00();
  (*_DAT_1805095d8)();
  return;
}


// ----- block @ rva 0x5502c8b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185502c8b(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x299,0xf);
  (*_DAT_180508f78)();
  return;
}


// ----- block @ rva 0x55030e3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855030e3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0x5503ef7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185503ef7(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180507188)();
  return;
}


// ----- block @ rva 0x5508c66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185508c66(void)

{
  (*_DAT_1805099f8)();
  return;
}


// ----- block @ rva 0x5508e7d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185508e7d(void)

{
  (*_DAT_180509ae8)();
  return;
}


// ----- block @ rva 0x550d1ba -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18550d1ba(void)

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


// ----- block @ rva 0x550e42a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18550e42a(void)

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


// ----- block @ rva 0x550f6b0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18550f6b0(void)

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


// ----- block @ rva 0x550f8bf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18550f8bf(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->Throw /*0x68*/))();
  (*_DAT_180509278)();
  return;
}


// ----- block @ rva 0x550f8d0 -----

void FUN_18550f8d0(void)

{
  return;
}


// ----- block @ rva 0x550fb51 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18550fb51(void)

{
  FUN_190ddce00();
  (*_DAT_18050f568)();
  return;
}


// ----- block @ rva 0x551666c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18551666c(void)

{
  FUN_190dd72e0();
  (*_DAT_18050d5f8)();
  return;
}


// ----- block @ rva 0x551abe9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18551abe9(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190ddfc90(in_stack_00000038,&stack0x00000048,*_DAT_18301ee50 + 0x4bf,*_DAT_18301ee50 + 0x4c9,
                0x18);
  (*_DAT_18050e798)();
  return;
}


// ----- block @ rva 0x551fd46 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18551fd46(void)

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


// ----- block @ rva 0x552345b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18552345b(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x226,0xd);
  (*_DAT_18050e848)();
  return;
}


// ----- block @ rva 0x552351f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18552351f(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5525153 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185525153(void)

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


// ----- block @ rva 0x5525df9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185525df9(void)

{
  FUN_190dd72e0();
  (*_DAT_18050f388)();
  return;
}


// ----- block @ rva 0x55262ad -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855262ad(void)

{
  (*_DAT_180510be8)();
  return;
}


// ----- block @ rva 0x552734c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18552734c(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18050d838)();
  return;
}


// ----- block @ rva 0x5528bfe -----

void FUN_185528bfe(void)

{
  return;
}


// ----- block @ rva 0x552a19f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18552a19f(void)

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


// ----- block @ rva 0x552a1e4 -----

void FUN_18552a1e4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x552a473 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018552a4aa */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18552a473(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x552a4c8 -----

void FUN_18552a4c8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x10) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018552a4f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180514b40 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x552ebb9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018552ebd9 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18552ebb9(longlong *param_1)

{
  (**(code **)(param_1 + JNI->ThrowNew /*0x70*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x553290b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18553290b(void)

{
  byte bVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_R12;
  uint uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar3 = (~_DAT_1830d4c98 + 0xe9ea20859d0ab4c4) *
          ((_DAT_1830d4c98 ^ 0xe1d93464198e277d) + (_DAT_1830d4c98 & 0xe1d93464198e277d) * 2);
  uVar3 = (uVar3 | _DAT_1830d4b60) + (uVar3 & _DAT_1830d4b60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d4bd0 = func_0x000185553190((uVar3 | 0x83314e1848493be) + (uVar3 & 0x83314e1848493be));
  _DAT_1830d4cb8 =
       (_DAT_1830d4cb8 ^ _DAT_1830d4bd0 ^ 0x82200810002b083) + 0x83314e100a6b09b ^
       0xf548a326583fecaa;
  _DAT_1830d4be0 =
       (_DAT_1830d4be0 * -0xd675e7936ae66a5 ^ _DAT_1830d4cb8) + (_DAT_1830d4bd0 ^ 0x82200810002b083)
  ;
  _DAT_1830d4b88 = _DAT_1830d4be0 ^ _DAT_1830d4cb8;
  _DAT_1830d4b80 = 0x83314e100a6b09b;
  uVar3 = (~_DAT_1830d4ca0 + 0x3ab7de977105b2af) *
          ((_DAT_1830d4c50 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830d4c50 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830d4c60) + (uVar3 & _DAT_1830d4c60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d4b90 = func_0x000185553190((uVar3 | 0x3ab7de97f527918b) + (uVar3 & 0x3ab7de97f527918b));
  _DAT_1830d4cb8 =
       (_DAT_1830d4cb8 ^ _DAT_1830d4b90 ^ 0x3ab7de977105b2ae) + 0xc54821688efa4d52 ^
       0xb998293e3d12e05b;
  _DAT_1830d4cc0 =
       (_DAT_1830d4cc0 * -0x168e3245bf9a718b ^ _DAT_1830d4cb8) +
       (_DAT_1830d4b90 ^ 0x3ab7de977105b2ae);
  _DAT_1830d4ca0 = _DAT_1830d4cc0 ^ _DAT_1830d4cb8;
  _DAT_1830d4b50 = 0xc54821688efa4d52;
  _DAT_1830d4b38 = func_0x000185553190(_DAT_1830d4c48 ^ 0x6e6fb64a60da1b75);
  _DAT_1830d4b90 = _DAT_1830d4bc0 ^ _DAT_1830d4b38 ^ 0x3ab7de977105b2d6;
  _DAT_1830d4cf8 = (_DAT_1830d4cf8 ^ _DAT_1830d4b38) + 0x3ab7de977105b2d6 ^ 0x571c642dfa45a46f;
  _DAT_1830d4cc8 = (_DAT_1830d4cc8 * -0x7ba154b55ef76d0d ^ _DAT_1830d4cf8) + _DAT_1830d4b38;
  _DAT_1830d4c18 = _DAT_1830d4cc8 ^ _DAT_1830d4cf8;
  _DAT_1830d4b20 = 0x3ab7de977105b2d6;
  uVar3 = (~_DAT_1830d4b80 + 0xc54821688efa4d53) *
          ((_DAT_1830d4b28 ^ 0x3ab7de97f52791f3) + (_DAT_1830d4b28 & 0x3ab7de97f52791f3) * 2);
  uVar3 = (uVar3 | _DAT_1830d4c80) + (uVar3 & _DAT_1830d4c80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x000185553190((uVar3 | 0xffffffff7bdddca1) + (uVar3 & 0xffffffff7bdddca1));
  uVar3 = (uVar3 ^ 0x2203408330041052) & 0x3ab7de977105b2d6;
  _DAT_1830d4b20 = _DAT_1830d4b68 ^ uVar3 ^ 0x28;
  _DAT_1830d4b80 = (_DAT_1830d4b80 ^ uVar3) + 0x28 ^ 0x3a2cd065ff0812a6;
  _DAT_1830d4bc0 = (_DAT_1830d4bc0 * -0x28851b7779c15f73 ^ _DAT_1830d4b80) + uVar3;
  _DAT_1830d4b18 = _DAT_1830d4bc0 ^ _DAT_1830d4b80;
  _DAT_1830d4c30 = 0x28;
  _DAT_1830d4c20 = func_0x000185553190(_DAT_1830d4be8 ^ 0x432b4330a53b769d);
  uVar3 = (_DAT_1830d4c20 ^ 0x4bc34cffd7a97640) & 0x7fffffffffffffff;
  uVar2 = uVar3 - (((_DAT_1830d4c20 ^ 0x4bc34cffd7a97640) & 0x7fffffffffffffff) >> 1 &
                  0x1555555555555555);
  uVar2 = (uVar2 & unaff_R12) + (uVar2 >> 2 & unaff_R12);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar3;
  _DAT_1830d4ca8 = (_DAT_1830d4ca8 ^ uVar3) + 0xb43cb300285689c0 ^ 0x1f9875c624592468;
  _DAT_1830d4bd8 = (_DAT_1830d4bd8 * 0x1851d44bd7496789 ^ _DAT_1830d4ca8) + uVar3;
  _DAT_1830d4b68 = _DAT_1830d4bd8 ^ _DAT_1830d4ca8;
  _DAT_1830d4b60 = _DAT_1830d4cf8 ^ 0xb43cb300285689c0;
  _DAT_1830d4c80 = 0xb43cb300285689c0;
  uVar3 = (_DAT_1830d4b00 ^ _DAT_180515d90) + _DAT_1830d4c48 + 0x8422230d;
  uVar2 = (_DAT_1830d4c48 ^ _UNK_180515d98) + _DAT_1830d4b00 + 0x4bc34cffd7a97640;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d4b00 ^ _DAT_180515d90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d4c48 ^ _UNK_180515d98;
  _DAT_1830d4c20 =
       func_0x000185553190((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d4b00 + 0x4bc34cffd7a97640) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d4c48 + 0x8422230d));
  uVar3 = (_DAT_1830d4c20 ^ 0x4bc34cffd7000000) & 0xffffffffff000000;
  _DAT_1830d4c50 = _DAT_1830d4b40 ^ uVar3 ^ 0x4bc34cffd7a97668;
  _DAT_1830d4bd0 = (_DAT_1830d4bd0 ^ uVar3) + 0x4bc34cffd7a97668 ^ 0x27d813374ecf7fd1;
  _DAT_1830d4b40 = (_DAT_1830d4b40 * 0x17dc1bb7ad99ced5 ^ _DAT_1830d4bd0) + uVar3 ^ _DAT_1830d4bd0;
  _DAT_1830d4b80 = 0x4bc34cffd7a97668;
  _DAT_1830d4bf0 = func_0x000185553190(_DAT_1830d4c28 + 0xd9dc86f784335c72 ^ 0x19);
  _DAT_1830d4c90 = _DAT_1830d4cb0 ^ _DAT_1830d4bf0 ^ 0x28;
  _DAT_1830d4cd8 = (_DAT_1830d4cd8 ^ _DAT_1830d4bf0) + 0x28 ^ 0xdee8b6bff06b5225;
  _DAT_1830d4ce0 = (_DAT_1830d4ce0 * -0x6f5d35b3347302b7 ^ _DAT_1830d4cd8) + _DAT_1830d4bf0;
  _DAT_1830d4b48 = _DAT_1830d4ce0 ^ _DAT_1830d4cd8;
  _DAT_1830d4b40 = _DAT_1830d4b48 ^ 0x28;
  _DAT_1830d4ca8 = 0x28;
  uVar3 = (~_DAT_1830d4c10 + 0x2cdde799697c6a29) *
          ((_DAT_1830d4cc0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830d4cc0 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830d4c38) + (uVar3 & _DAT_1830d4c38);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d4cd0 = func_0x000185553190((uVar3 | 0x2cdde799ed5e490d) + (uVar3 & 0x2cdde799ed5e490d));
  _DAT_1830d4cc8 = (_DAT_1830d4cc8 ^ _DAT_1830d4cd0) + 0xd3221866968395d8 ^ 0x93d99a809f50d18a;
  _DAT_1830d4b78 = (_DAT_1830d4b78 * 0x214919d6cc6c94ef ^ _DAT_1830d4cc8) + _DAT_1830d4cd0;
  _DAT_1830d4c90 = _DAT_1830d4b78 ^ _DAT_1830d4cc8;
  _DAT_1830d4ca8 = 0xd3221866968395d8;
  uVar3 = (_DAT_1830d4c58 ^ _DAT_180515da0) + _DAT_1830d4b18 + 0x8422230d;
  uVar2 = (_DAT_1830d4b18 ^ _UNK_180515da8) + _DAT_1830d4c58 + 0x2cdde799697c6a28;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d4c58 ^ _DAT_180515da0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d4b18 ^ _UNK_180515da8;
  _DAT_1830d4c28 =
       func_0x000185553190((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d4c58 + 0x2cdde799697c6a28) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d4b18 + 0x8422230d));
  uVar3 = _DAT_1830d4c28 ^ 0x28;
  _DAT_1830d4c60 = _DAT_1830d4c18 ^ uVar3 ^ 0x2cdde799697c6a50;
  _DAT_1830d4c38 = (_DAT_1830d4c38 ^ uVar3) + 0x2cdde799697c6a50 ^ 0x287097f807746e11;
  _DAT_1830d4bc0 = (_DAT_1830d4bc0 * 0x20f88dec49739a15 ^ _DAT_1830d4c38) + uVar3;
  _DAT_1830d4c48 = _DAT_1830d4bc0 ^ _DAT_1830d4c38;
  _DAT_1830d4c50 = 0x2cdde799697c6a50;
  uVar3 = (~_DAT_1830d4b40 + 0xd3221866968395d9) *
          ((_DAT_1830d4cd0 ^ 0x2cdde799ed5e4975) + (_DAT_1830d4cd0 & 0x2cdde799ed5e4975) * 2);
  uVar3 = (uVar3 | _DAT_1830d4c48) + (uVar3 & _DAT_1830d4c48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d4c98 = func_0x000185553190((uVar3 | 0xffffffff7bdddcad) + (uVar3 & 0xffffffff7bdddcad));
  uVar3 = (_DAT_1830d4c98 << 0x19 | _DAT_1830d4c98 >> 0x27) << 7 |
          (_DAT_1830d4c98 & 0x7fffffffff) >> 0x20;
  _DAT_1830d4c20 = _DAT_1830d4cf0 ^ uVar3 ^ 0x28;
  _DAT_1830d4b18 = (_DAT_1830d4b18 ^ uVar3) + 0x28 ^ 0x9887126e73a79be1;
  _DAT_1830d4bf0 = (_DAT_1830d4bf0 * -0x54e3dbff4e21d617 ^ _DAT_1830d4b18) + uVar3;
  _DAT_1830d4b28 = _DAT_1830d4bf0 ^ _DAT_1830d4b18;
  _DAT_1830d4cf0 = 0x28;
  _DAT_1830d4bc8 = func_0x000185553190(_DAT_1830d4bf0 + 0x101a37b6af3b292a ^ 0x8c);
  uVar3 = _DAT_1830d4bc8 - (_DAT_1830d4bc8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R12) + (uVar3 >> 2 & unaff_R12);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1830d4bc8;
  _DAT_1830d4c30 = (_DAT_1830d4c30 ^ uVar3) + 0xffc8dd17cd19cd54 ^ 0x5578d20cda980589;
  _DAT_1830d4b68 = (_DAT_1830d4b68 * -0x7018f17281ab0dbf ^ _DAT_1830d4c30) + uVar3;
  _DAT_1830d4be0 = _DAT_1830d4b68 ^ _DAT_1830d4c30;
  _DAT_1830d4bf0 = 0xffc8dd17cd19cd54;
  uVar3 = (~_DAT_1830d4c78 + 0x83314e100a6b09c) *
          ((_DAT_1830d4c60 ^ 0xf7fbc9f6499d5eea) + (_DAT_1830d4c60 & 0x77fbc9f6499d5eea) * 2);
  uVar3 = (uVar3 | _DAT_1830d4b90) + (uVar3 & _DAT_1830d4b90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d4b90 = func_0x000185553190((uVar3 | 0xffc8dd17493bee71) + (uVar3 & 0xffc8dd17493bee71));
  _DAT_1830d4ca0 = (_DAT_1830d4ca0 ^ _DAT_1830d4b90) + 0x3300e000a6308b ^ 0x1f9975a006383af6;
  _DAT_1830d4cb0 = (_DAT_1830d4cb0 * 0x3e10d05196758263 ^ _DAT_1830d4ca0) + _DAT_1830d4b90;
  _DAT_1830d4c10 = _DAT_1830d4cb0 ^ _DAT_1830d4ca0;
  _DAT_1830d4c58 = 0x3300e000a6308b;
  uVar3 = (_DAT_1830d4bc0 ^ _DAT_180515db0) + _DAT_1830d4c60 + 0xffc8dd17493bee71;
  uVar2 = (_DAT_1830d4c60 ^ _UNK_180515db8) + _DAT_1830d4bc0 + 0x6601c0014c6116;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d4bc0 ^ _DAT_180515db0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d4c60 ^ _UNK_180515db8;
  _DAT_1830d4ce0 =
       func_0x000185553190((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d4bc0 + 0x6601c0014c6116) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d4c60 + 0xffc8dd17493bee71));
  _DAT_1830d4b78 =
       (_DAT_1830d4b78 ^ _DAT_1830d4ce0 & 0x7fffffffffffffff) + 0x2eded7ce662e6a ^ 0xa63b152c3e137f1
  ;
  _DAT_1830d4b40 =
       (_DAT_1830d4b40 * 0x6c1b5d699df02ab5 ^ _DAT_1830d4b78) +
       (_DAT_1830d4ce0 & 0x7fffffffffffffff);
  _DAT_1830d4b58 = 0x2eded7ce662e6a;
  uVar3 = (_DAT_1830d4c78 ^ _DAT_180515dc0) + _DAT_1830d4be8 + 0x2eded74a440d4f;
  uVar2 = (_DAT_1830d4be8 ^ _UNK_180515dc8) + _DAT_1830d4c78 + 0x2eded7ce662e6a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d4c78 ^ _DAT_180515dc0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d4be8 ^ _UNK_180515dc8;
  _DAT_1830d4be0 =
       func_0x000185553190((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d4c78 + 0x2eded7ce662e6a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d4be8 + 0x2eded74a440d4f));
  uVar3 = _DAT_1830d4be0 - (_DAT_1830d4be0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R12) + (uVar3 >> 2 & unaff_R12);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  _DAT_1830d4c30 = ((uint)bVar1 + (uint)bVar1 ^ _DAT_1830d4be0) << 0xe | _DAT_1830d4be0 >> 0x32;
  _DAT_1830d4b60 = _DAT_1830d4b60 ^ _DAT_1830d4c30 ^ 0x37af936da61630f7;
  _DAT_1830d4bc8 =
       (_DAT_1830d4bc8 * 0x56cef0316456ea21 ^ _DAT_1830d4b60) + _DAT_1830d4c30 ^ _DAT_1830d4b60;
  _DAT_1830d4cc8 = 0;
  _DAT_1830d4cd0 = func_0x000185553190(_DAT_1830d4c38 ^ 0xffe1007c0b001d36);
  uVar3 = (_DAT_1830d4cd0 ^ 0x28) & 0xfffffffffffffff8;
  _DAT_1830d4c60 = _DAT_1830d4b58 ^ uVar3 ^ 0x28;
  _DAT_1830d4b40 = (_DAT_1830d4b40 ^ uVar3) + 0x28 ^ 0x95d476addf61f709;
  _DAT_1830d4ce0 = (_DAT_1830d4ce0 * -0x6016c53685f1a431 ^ _DAT_1830d4b40) + uVar3;
  _DAT_1830d4b50 = _DAT_1830d4ce0 ^ _DAT_1830d4b40;
  _DAT_1830d4c30 = _DAT_1830d4be8 ^ 0x28;
  _DAT_1830d4c68 = 0x28;
  uVar3 = (_DAT_1830d4b98 ^ _DAT_180515dd0) + _DAT_1830d4c48 + 0xf7fbc9f6499d5eea;
  uVar2 = (_DAT_1830d4c48 ^ _UNK_180515dd8) + (_DAT_1830d4b98 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d4b98 ^ _DAT_180515dd0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d4c48 ^ _UNK_180515dd8;
  _DAT_1830d4b48 =
       func_0x000185553190((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d4b98 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d4c48 + 0xf7fbc9f6499d5eea));
  uVar3 = _DAT_1830d4b48 << 1 | (ulonglong)((longlong)_DAT_1830d4b48 < 0);
  _DAT_1830d4ce8 = (_DAT_1830d4ce8 ^ uVar3) + 0x804360932408230 ^ 0xca346cb7cc153438;
  _DAT_1830d4c98 = (_DAT_1830d4c98 * 0x45b023aa9fe5f3c5 ^ _DAT_1830d4ce8) + uVar3;
  _DAT_1830d4ce8 = _DAT_1830d4c98 ^ _DAT_1830d4ce8;
  _DAT_1830d4bd8 = 0x804360932408230;
  uVar3 = (_DAT_1830d4ba8 ^ 0x8422230d) + _DAT_1830d4c70 + 0x8422230d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d4ba8 ^ 0x8422230d;
  uVar2 = ((_DAT_1830d4c70 + _DAT_1830d4ba8) * 0x2000 | _DAT_1830d4c70 + _DAT_1830d4ba8 >> 0x33) ^
          _DAT_1830d4c70;
  _DAT_1830d4b08 =
       func_0x000185553190((uVar2 << 0x1d | uVar2 >> 0x23) - _DAT_1830d4ba8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d4c70 + 0x8422230d));
  uVar3 = _DAT_1830d4b08 >> 1 | _DAT_1830d4b08;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & unaff_R12) + (uVar3 >> 2 & unaff_R12);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ _DAT_1830d4b08) & 0x1ffffffffffffff;
  _DAT_1830d4b40 = _DAT_1830d4c18 ^ uVar3 ^ 0x28;
  _DAT_1830d4ca0 = (_DAT_1830d4ca0 ^ uVar3) + 0x28 ^ 0x541fe117afb60a5a;
  _DAT_1830d4b80 = (_DAT_1830d4b80 * -0xb09f690ce16f8f5 ^ _DAT_1830d4ca0) + uVar3;
  _DAT_1830d4c08 = _DAT_1830d4b80 ^ _DAT_1830d4ca0;
  _DAT_1830d4b38 = 0x28;
  uVar3 = ((_DAT_1830d4b78 ^ 0x8422230d) + (ulonglong)((uint)_DAT_1830d4b78 & 0x8422230d) * 2) *
          -_DAT_1830d4b70;
  uVar3 = (uVar3 | _DAT_1830d4cb0) + (uVar3 & _DAT_1830d4cb0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d4bb0 = func_0x000185553190((uVar3 | 0x8422230d) + (ulonglong)((uint)uVar3 & 0x8422230d))
  ;
  _DAT_1830d4c68 = (_DAT_1830d4c68 ^ _DAT_1830d4bb0 ^ 0x28) + 0x28 ^ 0xb0e4319c8fa39465;
  _DAT_1830d4bd8 = (_DAT_1830d4bd8 * -0x1c41d4e177ce6a69 ^ _DAT_1830d4c68) + (_DAT_1830d4bb0 ^ 0x28)
  ;
  _DAT_1830d4cd8 = _DAT_1830d4bd8 ^ _DAT_1830d4c68;
  uVar3 = *(ulonglong *)(unaff_RBP + 0xa0);
  auVar5._8_8_ = _UNK_180064068;
  auVar5._0_8_ = uVar3 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_180515de0,_DAT_1800170c0);
  _DAT_1830d4c08 = 0x28;
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar4 + _DAT_1830d4c00;
  if (auVar6._4_4_ < 0) {
    uVar2 = _DAT_1830d4b70 ^ uVar4;
  }
  _DAT_1830d4b78 = func_0x000185553190(SUB161(auVar5 ^ _DAT_180515de0,5) ^ uVar2);
  uVar7 = (uint)(uVar3 >> 0x20);
  auVar6._8_4_ = (uint)uVar3;
  auVar6._0_8_ = uVar3;
  auVar6._12_4_ = uVar7;
  uVar10 = (uint)uVar3 & (uint)DAT_180063540;
  uVar9 = SUB164(auVar6 | _DAT_180063540,0);
  uVar4 = SUB168(auVar6 | _DAT_180063540,0);
  uVar8 = SUB164(_DAT_180063540 ^ auVar6,0);
  uVar11 = SUB168(_DAT_180063540 ^ auVar6,0);
  uVar2 = uVar3 * 0x28 ^ _DAT_1830d4b78;
  _DAT_1830d4b68 =
       (ulonglong)_DAT_180515e50 * (ulonglong)uVar8 +
       ((ulonglong)_DAT_180515e60 * (ulonglong)uVar8 + (uVar11 >> 0x20) * (ulonglong)_DAT_180515e50
       << 0x20) +
       (ulonglong)_DAT_180515e30 * (ulonglong)uVar9 +
       ((ulonglong)_DAT_180515e40 * (ulonglong)uVar9 + (uVar4 >> 0x20) * (ulonglong)_DAT_180515e30
       << 0x20) +
       ((ulonglong)_DAT_180515e20 * (ulonglong)uVar10 << 0x20 |
       (ulonglong)_DAT_180515e10 * (ulonglong)uVar10) +
       ((ulonglong)_DAT_180515e00 * (uVar3 & 0xffffffff) +
        (ulonglong)_DAT_180515df0 * (ulonglong)uVar7 << 0x20) +
       (uVar3 & 0xffffffff) * (ulonglong)_DAT_180515df0 +
       (-((ulonglong)uVar8 * (_DAT_180515ef0 & 0xffffffff) +
         ((ulonglong)_DAT_180515f00 * (ulonglong)uVar8 +
          (uVar11 >> 0x20) * (_DAT_180515ef0 & 0xffffffff) << 0x20)) -
       ((ulonglong)uVar9 * (ulonglong)_DAT_180515ed0 +
        ((ulonglong)_DAT_180515ee0 * (ulonglong)uVar9 + (uVar4 >> 0x20) * (ulonglong)_DAT_180515ed0
        << 0x20) +
       ((ulonglong)uVar10 * (ulonglong)_DAT_180515ec0 << 0x20) +
       (ulonglong)_DAT_180515eb0 * (ulonglong)uVar10 +
       ((uVar3 & 0xffffffff) * (ulonglong)_DAT_180515ea0 +
        (ulonglong)uVar7 * (ulonglong)_DAT_180515e90 << 0x20) +
       (uVar3 & 0xffffffff) * (ulonglong)_DAT_180515e90)) + 0xdc79ce97a3910968;
  _DAT_1830d4cc8 = _DAT_1830d4c98 ^ uVar2 ^ _DAT_1830d4b68;
  _DAT_1830d4bc0 = (_DAT_1830d4bc0 ^ uVar2) + _DAT_1830d4b68 ^ 0xa2ebf5f1c0dc34bd;
  _DAT_1830d4b60 = (_DAT_1830d4b60 * -0x6e152abf092bf7f1 ^ _DAT_1830d4bc0) + uVar2;
  _DAT_1830d4bb0 = _DAT_1830d4b60 ^ _DAT_1830d4bc0;
  _DAT_1830d4c30 = _DAT_1830d4ce8 ^ _DAT_1830d4b68;
  func_0x000180001044(*(undefined8 *)(unaff_RBP + 0x40),_DAT_1830d4b68);
  return 0;
}


// ----- block @ rva 0x55373d0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855373d0(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_R12D;
  longlong *unaff_R13;
  undefined8 unaff_R15;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_XMM11_Da;
  
  lVar2 = (**(code **)(unaff_R13 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x60) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x68));
  (**(code **)(unaff_R13 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  *(undefined4 *)(unaff_RBP + 0x70) = 6;
  *(undefined8 *)(unaff_RBP + 0x60) = unaff_R15;
  uVar3 = unaff_R12D ^ unaff_RBX;
  uVar4 = uVar3 ^ _DAT_1830d4bb8;
  lVar2 = uVar3 + _DAT_1830d4c48;
  uVar3 = uVar4 + lVar2;
  uVar5 = (_DAT_1830d4c48 ^ 2) + _DAT_1830d4bb8 + 2;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar4;
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830d4c48 ^ 2;
  _DAT_1830d4c08 =
       func_0x000185553190((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d4bb8 + 2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  uVar8 = unaff_R12D & _DAT_180017990;
  uVar7 = unaff_R12D ^ unaff_XMM11_Da;
  lVar6 = ((ulonglong)unaff_R12D * (ulonglong)_DAT_180515420 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_180515410;
  lVar2 = ((ulonglong)uVar7 * (ulonglong)_DAT_1805154a0 + _DAT_1805154b0 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_180515490 +
          ((ulonglong)(unaff_R12D ^ _DAT_180017990) * (ulonglong)_DAT_180515480 << 0x20) +
          (ulonglong)(unaff_R12D ^ _DAT_180017990) * (ulonglong)_DAT_180515470 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_180515460 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_180515450) +
          ((ulonglong)unaff_R12D * (ulonglong)_DAT_180515440 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_180515430 + lVar6;
  uVar4 = (ulonglong)unaff_R12D * 2 ^ _DAT_1830d4c08;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar4;
  uVar3 = ((((ulonglong)(unaff_R12D | _DAT_180017990) * (ulonglong)_DAT_1805153d0 << 0x20) +
            (ulonglong)(unaff_R12D | _DAT_180017990) * (ulonglong)_DAT_1805153c0 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_1805153d0 << 0x20 |
            (ulonglong)uVar8 * (ulonglong)_DAT_1805153c0) +
            ((ulonglong)unaff_R12D * (ulonglong)_DAT_1805153b0 << 0x20) +
            (ulonglong)unaff_R12D * (ulonglong)_DAT_1805153a0 + lVar6 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_1805153f0 + _DAT_180515400 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_1805153e0) - lVar2) + 0x3be83eb6ccd2af1;
  _DAT_1830d4c40 = _DAT_1830d4c88 ^ uVar4 ^ uVar3;
  _DAT_1830d4b70 = (_DAT_1830d4b70 ^ uVar4) + uVar3 ^ 0xe5baf8304de38213;
  _DAT_1830d4ca8 = (_DAT_1830d4ca8 * 0x31dd89750b8d608b ^ _DAT_1830d4b70) + uVar4;
  _DAT_1830d4c10 = _DAT_1830d4ca8 ^ _DAT_1830d4b70;
  _DAT_1830d4c18 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x68) = (int)uVar3;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))(lVar2,*(undefined8 *)(unaff_RBP + 0x20));
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x553e839 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18553e839(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_R13;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined1 unaff_XMM6 [16];
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  *(undefined2 *)(unaff_RBP + 0x3c) = *(undefined2 *)(unaff_RBP + 0x70);
  (**(code **)(unaff_R13 + JNI->SetCharArrayRegion /*0x688*/))();
  iVar1 = *(int *)(unaff_RBP + 0x40);
  uVar2 = *(uint *)(unaff_RBP + 0x5c);
  auVar5._8_8_ = _UNK_180062bf8;
  auVar5._0_8_ = uVar2 ^ unaff_RBX;
  auVar6 = pshufb(auVar5 ^ _DAT_1805156a0,unaff_XMM6);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar4 + _DAT_1830d4b88;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_1830d4c98 ^ uVar4;
  }
  _DAT_1830d4b88 = func_0x000185553190(SUB161(auVar5 ^ _DAT_1805156a0,5) ^ uVar3);
  uVar3 = _DAT_1830d4b88 ^ uVar2;
  uVar8 = uVar2 & unaff_XMM10_Da;
  uVar9 = uVar2 | unaff_XMM10_Da;
  uVar10 = uVar2 ^ unaff_XMM10_Da;
  lVar7 = ((ulonglong)uVar2 * (ulonglong)_DAT_180515770 << 0x20) +
          (ulonglong)uVar2 * (ulonglong)_DAT_180515760;
  uVar4 = ((((ulonglong)(uVar2 ^ unaff_XMM11_Da) * (ulonglong)_DAT_180515740 + _DAT_180515750 <<
            0x20) + (ulonglong)(uVar2 ^ unaff_XMM11_Da) * (ulonglong)_DAT_180515730 + lVar7 +
           ((ulonglong)uVar10 * (ulonglong)_DAT_180515720 << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_180515710 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_180515700 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_1805156f0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_1805156e0 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_1805156d0) +
           ((ulonglong)uVar2 * (ulonglong)_DAT_1805156c0 << 0x20) +
           (ulonglong)uVar2 * (ulonglong)_DAT_1805156b0) -
          (((ulonglong)uVar10 * (ulonglong)_DAT_1805157f0 << 0x20) +
           (ulonglong)uVar10 * (ulonglong)unaff_XMM7_Da +
           ((ulonglong)uVar9 * (ulonglong)_DAT_1805157d0 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_1805157c0 +
           ((ulonglong)uVar8 * (ulonglong)unaff_XMM13_Da << 0x20 |
           (ulonglong)uVar8 * (ulonglong)unaff_XMM8_Da) +
           ((ulonglong)uVar2 * (ulonglong)unaff_XMM12_Da << 0x20) +
           (ulonglong)uVar2 * (ulonglong)_DAT_180515780 + lVar7)) + 0x2bffd7c28da4e95;
  _DAT_1830d4c38 = _DAT_1830d4b18 ^ uVar3 ^ uVar4;
  _DAT_1830d4cd0 = (_DAT_1830d4cd0 ^ uVar3) + uVar4 ^ 0x96b01f7b94c66db9;
  _DAT_1830d4ca8 = (_DAT_1830d4ca8 * -0xd80eabfe04cff03 ^ _DAT_1830d4cd0) + uVar3;
  _DAT_1830d4b80 = _DAT_1830d4ca8 ^ _DAT_1830d4cd0;
  _DAT_1830d4cd8 = uVar4 & 0xffffffff;
  *(int *)(unaff_RBP + 0x60) = (int)uVar4;
  *(int *)(unaff_RBP + 0x68) = iVar1;
  switch((int)uVar4 < iVar1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x553ed77 -----

undefined8 thunk_FUN_18552a4ad(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x553ee0e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18553ee0e(void)

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


// ----- block @ rva 0x553ee55 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18553ee55(void)

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


// ----- block @ rva 0x553ef64 -----

void FUN_18553ef64(void)

{
  return;
}


// ----- block @ rva 0x553efc6 -----

void FUN_18553efc6(void)

{
  code *pcVar1;
  
  FUN_18000544c(0,0,0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x553f0b2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18553f0b2(longlong param_1)

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


// ----- block @ rva 0x5555816 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185555816(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0x55559d5 -----

void FUN_1855559d5(void)

{
  return;
}


// ----- block @ rva 0x5555e63 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185555e63(void)

{
  char cVar1;
  longlong *unaff_R14;
  undefined4 uStack0000000000000094;
  
  (**(code **)(unaff_R14 + JNI->AllocObject /*0xd8*/))();
  uStack0000000000000094 = 0xfdfd0f8b;
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(unaff_R14 + JNI->NewString /*0x518*/))();
  FUN_190ddfc90();
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


// ----- block @ rva 0x5555fe4 -----

undefined8 FUN_185555fe4(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->Throw /*0x68*/))();
  return 0;
}


// ----- block @ rva 0x55571f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855571f0(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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


// ----- block @ rva 0x5557c2d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185557c2d(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5557d5e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185557d5e(void)

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


// ----- block @ rva 0x5558e3b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185558e3b(void)

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


// ----- block @ rva 0x555943c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555943c(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x55598af -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855598af(void)

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


// ----- block @ rva 0x55598f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855598f0(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5559d1a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185559d1a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18051b8e8)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x5559d26 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185559d26(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0x5559d43 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185559d43(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_18051b8d8)();
  return;
}


// ----- block @ rva 0x5559d4c -----

void FUN_185559d4c(void)

{
  return;
}


// ----- block @ rva 0x5559d4d -----

undefined4 * FUN_185559d4d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x5559daf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185559daf(void)

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


// ----- block @ rva 0x5559e03 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185559e03(void)

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


// ----- block @ rva 0x555a0a6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555a0a6(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0x555a18c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555a18c(void)

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


// ----- block @ rva 0x555a2a6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555a2a6(void)

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


// ----- block @ rva 0x555a3cc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555a3cc(void)

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


// ----- block @ rva 0x555a5df -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555a5df(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_18051bd68)();
  return;
}


// ----- block @ rva 0x555a685 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555a685(void)

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


// ----- block @ rva 0x555a9b8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555a9b8(void)

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


// ----- block @ rva 0x555ab33 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555ab33(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18051bc28)();
  return;
}


// ----- block @ rva 0x555ab68 -----

void FUN_18555ab68(void)

{
  return;
}


// ----- block @ rva 0x555ab76 -----

void FUN_18555ab76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x555ace0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555ace0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_18051c8e8)();
  return;
}


// ----- block @ rva 0x555b919 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555b919(void)

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


// ----- block @ rva 0x555ba71 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555ba71(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_18051cc18)();
  return;
}


// ----- block @ rva 0x555bba3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555bba3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18051cb38)();
  return;
}


// ----- block @ rva 0x555c136 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555c136(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18051ccc8)();
  return;
}


// ----- block @ rva 0x555c3c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555c3c2(void)

{
  (*_DAT_18051c9f8)();
  return;
}


// ----- block @ rva 0x555c74c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555c74c(void)

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


// ----- block @ rva 0x555d464 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555d464(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_18051c518)();
  return;
}


// ----- block @ rva 0x555d55f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555d55f(void)

{
  (*_DAT_18051caa8)();
  return;
}


// ----- block @ rva 0x555d5c5 -----

void FUN_18555d5c5(void)

{
  return;
}


// ----- block @ rva 0x555d5e4 -----

void FUN_18555d5e4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x555d80f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555d80f(void)

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


// ----- block @ rva 0x555d923 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18555d923(void)

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


// ----- block @ rva 0x555db05 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18555db05(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0x5560f8b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185560f8b(void)

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


// ----- block @ rva 0x55636f5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855636f5(void)

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


// ----- block @ rva 0x5564018 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185564018(void)

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


// ----- block @ rva 0x5564545 -----

void FUN_185564545(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetStaticObjectField /*0x4d0*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  return;
}


// ----- block @ rva 0x55645ad -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855645ad(void)

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


// ----- block @ rva 0x55645e8 -----

void thunk_FUN_18555fd9a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x55646b4 -----

void FUN_1855646b4(void)

{
  return;
}

