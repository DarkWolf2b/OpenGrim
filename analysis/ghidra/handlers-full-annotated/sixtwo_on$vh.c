// ===== Lsixtwo/on$vh; _64725e7ffc7733a3ea78592b46087177 ()V (handler @ image 1864281d0, runtime 6fffee0381d0) =====

void FUN_1864281d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001864282b8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18083c200 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwA (Ljava/util/UUID;)I (handler @ image 18644ab20, runtime 6fffee05ab20) =====

void FUN_18644ab20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018644ab79 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808419f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwB (Lnet/minecraft/class_1657;)V (handler @ image 18644b350, runtime 6fffee05b350) =====

void FUN_18644b350(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018644b3a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180841d20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwC (Ljava/util/UUID;)V (handler @ image 18644b840, runtime 6fffee05b840) =====

void FUN_18644b840(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018644b904 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180841ef0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwD ()V (handler @ image 186415630, runtime 6fffee025630) =====

void FUN_186415630(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186415650 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180837b70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwE ()V (handler @ image 186415990, runtime 6fffee025990) =====

void FUN_186415990(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186415a51 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180837ce0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwF (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 186418d10, runtime 6fffee028d10) =====

undefined8 FUN_186418d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/on$vh; dwG (IJ)I (handler @ image 186418da0, runtime 6fffee028da0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186418da0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uRam000000018312f8c0 = func_0x000186424410(uRam000000018312f9c8 + 0x751bc48068f0510a ^ 0xf2);
  uRam000000018312f9b0 =
       (uRam000000018312f9b0 ^ uRam000000018312f8c0 & 0xffffffffffffff80) + 0xfd7bffbdfdf3dfed ^
       0x4dbf0d19ca8393e7;
  uRam000000018312f888 =
       (uRam000000018312f888 * 0x6547bfff23155021 ^ uRam000000018312f9b0) +
       (uRam000000018312f8c0 & 0xffffffffffffff80);
  uRam000000018312fa30 = uRam000000018312f888 ^ uRam000000018312f9b0;
  uRam000000018312f8f0 = 0xfd7bffbdfdf3dfed;
  uVar4 = (uRam000000018312f818 ^ _UNK_18083aa40) + uRam000000018312fa18 + 0xabd22a9e9f71268;
  uVar5 = (uRam000000018312fa18 ^ _UNK_18083aa48) + uRam000000018312f818 + 0xa43e680c34ab7c03;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312f818 ^ _UNK_18083aa40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018312fa18 ^ _UNK_18083aa48;
  uRam000000018312f788 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018312f818 + 0xa43e680c34ab7c03) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018312fa18 + 0xabd22a9e9f71268));
  uVar5 = uRam000000018312f788 ^ 0x5528bc371fcfdfe7;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar5;
  uRam000000018312f8c0 = (uRam000000018312f8c0 ^ uVar5) + 0xae834aa5597e4d4e ^ 0x3630d5e815fc51f9;
  uRam000000018312f7e8 = (uRam000000018312f7e8 * 0x2b15c8e1359902fb ^ uRam000000018312f8c0) + uVar5;
  uRam000000018312f8b0 = uRam000000018312f7e8 ^ uRam000000018312f8c0;
  uRam000000018312f9f8 = 0xae834aa5597e4d4e;
  uVar4 = (uRam000000018312f8e0 ^ _UNK_18083aa50) + uRam000000018312faf0 + 0x84222325;
  uVar5 = (uRam000000018312faf0 ^ _UNK_18083aa58) + uRam000000018312f8e0 + 0x8cff916c13944000;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312f8e0 ^ _UNK_18083aa50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018312faf0 ^ _UNK_18083aa58;
  uRam000000018312f7c8 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018312f8e0 + 0x8cff916c13944000) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018312faf0 + 0x84222325));
  uRam000000018312fac0 =
       (uRam000000018312fac0 ^ uRam000000018312f7c8 & 0x7fffffffffffffff) + 0x73006e93ec6bc000 ^
       0x5765dbc7fd292482;
  uRam000000018312fa08 =
       (uRam000000018312fa08 * 0x52911fff0ca4e72f ^ uRam000000018312fac0) +
       (uRam000000018312f7c8 & 0x7fffffffffffffff);
  uRam000000018312faa8 = uRam000000018312fa08 ^ uRam000000018312fac0;
  uRam000000018312f8b8 = 0x73006e93ec6bc000;
  uVar4 = (uRam000000018312fa48 ^ _UNK_18083aa60) + uRam000000018312f890 + 0x84225cda;
  uVar5 = (uRam000000018312f890 ^ _UNK_18083aa68) + uRam000000018312fa48 + 0x8cff916c13944000;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312fa48 ^ _UNK_18083aa60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018312f890 ^ _UNK_18083aa68;
  uRam000000018312f7e0 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018312fa48 + 0x8cff916c13944000) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018312f890 + 0x84225cda));
  uVar4 = uRam000000018312f7e0 ^ 0x7fff;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  uRam000000018312fae0 = uRam000000018312f7b0 ^ uVar4 ^ 0x8cff916c1394bfff;
  uRam000000018312f718 = (uRam000000018312f718 ^ uVar4) + 0x8cff916c1394bfff ^ 0xc9f2e2e2d7a8abfe;
  uRam000000018312faf0 = (uRam000000018312faf0 * 0x2f1a3ae697cbdb7 ^ uRam000000018312f718) + uVar4;
  uRam000000018312f720 = uRam000000018312faf0 ^ uRam000000018312f718;
  uRam000000018312fa50 = 0x8cff916c1394bfff;
  uVar4 = (~uRam000000018312f798 + 0x73006e93ec6bc001) *
          ((uRam000000018312fa78 ^ 0x8cff916c97b69cda) +
          (uRam000000018312fa78 & 0xcff916c97b69cda) * 2);
  uVar4 = (uVar4 | uRam000000018312f908) + (uVar4 & uRam000000018312f908);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f980 =
       func_0x000186424410((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = uRam000000018312f980 & 0x8cff916c1394bfff;
  uRam000000018312f818 = uRam000000018312f750 ^ uVar4 ^ 0x7fff;
  uRam000000018312f910 = (uRam000000018312f910 ^ uVar4) + 0x7fff ^ 0x599942da429679e7;
  uRam000000018312f860 = (uRam000000018312f860 * 0x642da2ffd5f05143 ^ uRam000000018312f910) + uVar4;
  uRam000000018312f8a0 = uRam000000018312f860 ^ uRam000000018312f910;
  uRam000000018312f9a8 = 0x7fff;
  uVar4 = (uRam000000018312fac0 ^ _UNK_18083aa70) + uRam000000018312f8d8 + 0x84222325;
  uVar5 = (uRam000000018312f8d8 ^ _UNK_18083aa78) + uRam000000018312fac0 + 0xd53c3c859d113610;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312fac0 ^ _UNK_18083aa70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018312f8d8 ^ _UNK_18083aa78;
  uRam000000018312f9f8 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018312fac0 + 0xd53c3c859d113610) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018312f8d8 + 0x84222325));
  uRam000000018312faf8 =
       (uRam000000018312faf8 ^ uRam000000018312f9f8 ^ 0xd53c3c859d113610) + 0x2ac3c37a62eec9f0 ^
       0x7b0397504e95591a;
  uRam000000018312fad0 =
       (uRam000000018312fad0 * 0x76e131347ab9c55b ^ uRam000000018312faf8) +
       (uRam000000018312f9f8 ^ 0xd53c3c859d113610);
  uRam000000018312f858 = uRam000000018312fad0 ^ uRam000000018312faf8;
  uRam000000018312f740 = 0x2ac3c37a62eec9f0;
  uVar4 = uRam000000018312fae0 * 0x2000 ^ uRam000000018312fae0;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f938 =
       func_0x000186424410((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = uRam000000018312f938 << 0x37 | (uRam000000018312f938 & 0x1ffffffffffff) >> 9;
  uRam000000018312f908 = uRam000000018312f9e8 ^ uVar4 ^ 0x7fff;
  uRam000000018312f850 = (uRam000000018312f850 ^ uVar4) + 0x7fff ^ 0xbc2d8919984d64a8;
  uRam000000018312f9e8 = (uRam000000018312f9e8 * -0xcced1e2a748edcf ^ uRam000000018312f850) + uVar4;
  uRam000000018312f9d8 = uRam000000018312f9e8 ^ uRam000000018312f850;
  uRam000000018312f880 = 0x7fff;
  uRam000000018312fad0 = func_0x000186424410(uRam000000018312f860 + 0xdeb4af542990bbf6 ^ 0x48);
  uVar4 = uRam000000018312fad0 ^ 0xcc8920b9b94a0c0;
  uRam000000018312fa78 = uRam000000018312f778 ^ uVar4 ^ 0x7fff;
  uRam000000018312f9f0 = (uRam000000018312f9f0 ^ uVar4) + 0x7fff ^ 0x3b70a9a8fb1bbbc;
  uRam000000018312fae0 = (uRam000000018312fae0 * 0x377e077388151309 ^ uRam000000018312f9f0) + uVar4;
  uRam000000018312faa0 = uRam000000018312fae0 ^ uRam000000018312f9f0;
  uRam000000018312f7a0 = 0x7fff;
  uVar4 = (~uRam000000018312f900 + 0xae834aa5597e4d4f) *
          ((uRam000000018312fae0 ^ 0xfd7bffbd79d1fcc8) +
          (uRam000000018312fae0 & 0x7d7bffbd79d1fcc8) * 2);
  uVar4 = (uVar4 | uRam000000018312f8e8) + (uVar4 & uRam000000018312f8e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f928 =
       func_0x000186424410((uVar4 | 0x53f8b51820afb186) + (uVar4 & 0x53f8b51820afb186));
  uVar4 = ~(uRam000000018312f928 ^ 0x4db1ada8544e8326) & 0x7d7bffbdfdf3dfed;
  uRam000000018312f710 = uRam000000018312fa68 ^ uVar4 ^ 0xabff4a6357722d3b;
  uRam000000018312f838 = (uRam000000018312f838 ^ uVar4) + 0xabff4a6357722d3b ^ 0xddc5742c00de5f15;
  uRam000000018312f7b8 = (uRam000000018312f7b8 * -0x15aa79ca7c12ffb5 ^ uRam000000018312f838) + uVar4
  ;
  uRam000000018312f750 = uRam000000018312f7b8 ^ uRam000000018312f838;
  uRam000000018312f768 = 0xabff4a6357722d3b;
  uRam000000018312fa68 = func_0x000186424410(uRam000000018312fa70 + 0xf74e081f7eb45f4e ^ 0xb5);
  uVar4 = ((uRam000000018312fa68 & 0xfffffffffff80000) << 0x13 | uRam000000018312fa68 >> 0x2d) >>
          0xe | (uRam000000018312fa68 >> 0x2d) << 0x32;
  uRam000000018312fa28 = (uRam000000018312fa28 ^ uVar4) + 0x53f8b518a48d92a3 ^ 0x624cb996f199b37;
  uRam000000018312f888 = (uRam000000018312f888 * 0x2cc32c4e293dff11 ^ uRam000000018312fa28) + uVar4;
  uRam000000018312f910 = uRam000000018312f888 ^ uRam000000018312fa28;
  uRam000000018312f820 = 0x53f8b518a48d92a3;
  uVar4 = (uRam000000018312f868 ^ _UNK_18083aa80) + uRam000000018312f768 + 0xfd7bffbd79d1fcc8;
  uVar5 = (uRam000000018312f768 ^ _UNK_18083aa88) + uRam000000018312f868 + 0xae834aa5597e4d4e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312f868 ^ _UNK_18083aa80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018312f768 ^ _UNK_18083aa88;
  uVar4 = func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) -
                              (uRam000000018312f868 + 0xae834aa5597e4d4e) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) -
                              (uRam000000018312f768 + 0xfd7bffbd79d1fcc8));
  uRam000000018312f890 = uVar4 << 0x25 | uVar4 >> 0x1b;
  uRam000000018312fa70 =
       (uRam000000018312fa70 ^ uRam000000018312f890) + 0xac034aa559724d4c ^ 0xcdf4126cfa838c42;
  uRam000000018312f890 = (uVar4 * 0x192bf3cb3683a83 ^ uRam000000018312fa70) + uRam000000018312f890;
  uRam000000018312f990 = uRam000000018312f890 ^ uRam000000018312fa70;
  uRam000000018312f7a8 = -0x53fcb55aa68db2b4;
  uVar4 = (~uRam000000018312f918 + 0x5806954ab2e49a99) *
          ((uRam000000018312f920 ^ 0x53f8b51820afb186) +
          (uRam000000018312f920 & 0x53f8b51820afb186) * 2);
  uVar4 = (uVar4 | uRam000000018312f7d8) + (uVar4 & uRam000000018312f7d8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f760 =
       func_0x000186424410((uVar4 | 0xbfe2052924b2b1e) + (uVar4 & 0xbfe2052924b2b1e));
  uVar4 = (uRam000000018312f760 ^ 0x541099c8cd711ec8) * -0x65e79c66c8f1d96b;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4;
  uRam000000018312fae0 = uRam000000018312f8d8 ^ uVar4 ^ 0xabff4a6357722d3b;
  uRam000000018312f910 = (uRam000000018312f910 ^ uVar4) + 0xabff4a6357722d3b ^ 0xb27647ea901cb4c4;
  uRam000000018312f8f8 = (uRam000000018312f8f8 * 0x29a5e9cc29df650d ^ uRam000000018312f910) + uVar4;
  uRam000000018312f720 = uRam000000018312f8f8 ^ uRam000000018312f910;
  uRam000000018312f788 = -0x5400b59ca88dd2c5;
  uVar4 = (~uRam000000018312f9e0 + 0xabff4a6357722d3c) *
          ((uRam000000018312f950 ^ 0xabff4a63d3500e1e) +
          (uRam000000018312f950 & 0x2bff4a63d3500e1e) * 2);
  uVar4 = (uVar4 | uRam000000018312f708) + (uVar4 & uRam000000018312f708);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f990 =
       func_0x000186424410((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam000000018312faf8 = ~uRam000000018312f990 & 0xabff4a6357722d3b;
  uRam000000018312f9a8 = uRam000000018312f9a8 ^ uRam000000018312faf8 ^ 0xbc582198b3d17865;
  uRam000000018312f898 =
       (uRam000000018312f898 * 0x12c7c3de8ba00919 ^ uRam000000018312f9a8) + uRam000000018312faf8;
  uRam000000018312fa90 = uRam000000018312f898 ^ uRam000000018312f9a8;
  uRam000000018312f8d0 = 0;
  uRam000000018312f900 = func_0x000186424410(uRam000000018312f9d0 + 0xffb4007b25ffe1ff ^ 0xae);
  uVar4 = uRam000000018312f900 >> 1 | uRam000000018312f900;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018312f900) & 0x7fffffffffffffff;
  uRam000000018312fa90 = uRam000000018312f738 ^ uVar4 ^ 0x7fff;
  uRam000000018312f950 = (uRam000000018312f950 ^ uVar4) + 0x7fff ^ 0x2016ef14a6535565;
  uRam000000018312f8e8 = (uRam000000018312f8e8 * 0x3780ef93a0dd39ab ^ uRam000000018312f950) + uVar4;
  uRam000000018312f830 = uRam000000018312f8e8 ^ uRam000000018312f950;
  uRam000000018312f898 = 0x7fff;
  uVar4 = ~uRam000000018312f890 *
          ((uRam000000018312fa60 ^ 0xfd7bffbd79d1fcc8) +
          (uRam000000018312fa60 & 0x7d7bffbd79d1fcc8) * 2);
  uVar4 = (uVar4 | uRam000000018312f948) + (uVar4 & uRam000000018312f948);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f770 =
       func_0x000186424410((uVar4 | 0x2840042862e0337) + (uVar4 & 0x2840042862e0337));
  uRam000000018312fa10 =
       (uRam000000018312fa10 ^ uRam000000018312f770) + 0x2840042020c2012 ^ 0xa97c6785b660cce0;
  uRam000000018312f878 =
       (uRam000000018312f878 * 0x17b9517ca826d50d ^ uRam000000018312fa10) + uRam000000018312f770;
  uRam000000018312f838 = uRam000000018312f878 ^ uRam000000018312fa10;
  uRam000000018312f700 = 0x2840042020c2012;
  uRam000000018312fa50 = func_0x000186424410(uRam000000018312f928 ^ 0xffdf0083dd001d7d);
  uVar4 = (uRam000000018312fa50 ^ 0x5531bdbdfd635aa0) -
          ((uRam000000018312fa50 ^ 0x5531bdbdfd635aa0) >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uRam000000018312fa50 ^
          (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5;
  uRam000000018312f928 = uRam000000018312f928 ^ uVar4 ^ 0x490fa4f307721ab5;
  uRam000000018312f788 = (uRam000000018312f788 * 0x4c2a75eabf894265 ^ uRam000000018312f928) + uVar4;
  uRam000000018312f9a8 = uRam000000018312f788 ^ uRam000000018312f928;
  uRam000000018312f7d8 = 0;
  uVar4 = (uRam000000018312f800 ^ 0x84225cda) + uRam000000018312f978 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312f800 ^ 0x84225cda;
  uVar5 = ((uRam000000018312f978 + uRam000000018312f800) * 0x2000 |
          uRam000000018312f978 + uRam000000018312f800 >> 0x33) ^ uRam000000018312f978;
  uRam000000018312f980 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018312f800 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018312f978 + 0x84225cda));
  uVar4 = uRam000000018312f980 & 0x7fffffffffffffff;
  uVar5 = uVar4 - ((uRam000000018312f980 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar4) <<
          0x29 | uVar4 >> 0x17;
  uRam000000018312f7b0 = uRam000000018312f8b8 ^ uVar4 ^ 0x7fff;
  uRam000000018312f960 = (uRam000000018312f960 ^ uVar4) + 0x7fff ^ 0x80cd5cd1cd4022de;
  uRam000000018312f7a8 = (uRam000000018312f7a8 * 0x2cc965824099eebf ^ uRam000000018312f960) + uVar4;
  uRam000000018312fa18 = uRam000000018312f7a8 ^ uRam000000018312f960;
  uRam000000018312f9a8 = 0x7fff;
  uVar4 = param_4 ^ 0x84222325 ^ uRam000000018312fa28;
  lVar3 = (param_4 ^ 0x84222325) + uRam000000018312f7c0;
  uVar5 = uVar4 + lVar3;
  uVar6 = (uRam000000018312f7c0 ^ 0x7fff) + uRam000000018312fa28 + 0x7fff;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018312f7c0 ^ 0x7fff;
  uRam000000018312fa08 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018312fa28 + 0x7fff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar4 = uRam000000018312fa08 >> 1 | uRam000000018312fa08;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uRam000000018312fa08) & 0xfffffffffffffff;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018312f858 = (ulonglong)uVar2;
  uRam000000018312f978 = (uRam000000018312f978 ^ uVar4) + uRam000000018312f858 ^ 0x4989169f8bb73825;
  uRam000000018312f790 = (uRam000000018312f790 * 0x3b3222619dd68667 ^ uRam000000018312f978) + uVar4;
  uRam000000018312f8e8 = uRam000000018312f790 ^ uRam000000018312f978;
  uVar5 = uRam000000018312f858 ^ 0x84222325;
  uVar4 = ((uRam000000018312f918 ^ uVar5) +
          (ulonglong)((uint)uRam000000018312f918 & (uint)uVar5) * 2) *
          (param_3 - uRam000000018312fa08);
  uVar4 = (uVar4 | uRam000000018312f9c0) + (uVar4 & uRam000000018312f9c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar5 = uVar5 ^ param_3;
  uRam000000018312f8f8 =
       func_0x000186424410((uVar5 | uVar4) + (ulonglong)((uint)uVar5 & (uint)uVar4));
  uVar4 = uRam000000018312f8f8 * -0x715730ba992e26d7 & 0x3ffffffffffffff;
  uVar2 = uVar2 ^ param_3;
  uVar6 = (ulonglong)uVar2;
  uRam000000018312f758 = (uRam000000018312f758 ^ uVar4) + uVar6 ^ 0x45bea3d298895b9d;
  uRam000000018312f868 = (uRam000000018312f868 * 0x376a03757b319c65 ^ uRam000000018312f758) + uVar4;
  uRam000000018312f778 = uRam000000018312f868 ^ uRam000000018312f758;
  uRam000000018312f748 = uVar6;
  uRam000000018312f7b8 = func_0x000186424410(uRam000000018312f970 ^ 0xff9a00167bffc0a7);
  uVar4 = uRam000000018312f7b8 << 0x1b | uRam000000018312f7b8 >> 0x25;
  uRam000000018312f7c8 = (uRam000000018312f7c8 ^ uVar4) + 0xaf7dbdfd ^ 0xf9b7633d57c66e44;
  uRam000000018312f908 = (uRam000000018312f908 * -0x4718bbc124feb7d7 ^ uRam000000018312f7c8) + uVar4
  ;
  uRam000000018312fad0 = uRam000000018312f908 ^ uRam000000018312f7c8;
  uRam000000018312f968 = 0xaf7dbdfd;
  uVar4 = (~uRam000000018312f788 + 0xbc62461e) *
          ((uRam000000018312f7c0 ^ 0x4bf2637a) +
          (ulonglong)((uint)uRam000000018312f7c0 & 0x4bf2637a) * 2);
  uVar4 = (uVar4 | uRam000000018312fa80) + (uVar4 & uRam000000018312fa80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f708 =
       func_0x000186424410((uVar4 | 0xf7902567) + (ulonglong)((uint)uVar4 & 0xf7902567));
  uVar4 = (uRam000000018312f708 >> 0x2b) << 0x2d |
          ((uRam000000018312f708 ^ 0xfff2465f) << 0x15 | uRam000000018312f708 >> 0x2b) >> 0x13;
  uRam000000018312f748 = (uRam000000018312f748 ^ uVar4) + 0x73b20642 ^ 0x8b7f171b498c6293;
  uRam000000018312f7f0 = (uRam000000018312f7f0 * 0x6c917a3b4250b599 ^ uRam000000018312f748) + uVar4;
  uRam000000018312fa98 = uRam000000018312f7f0 ^ uRam000000018312f748;
  uRam000000018312f9e8 = 0x73b20642;
  uRam000000018312f9c0 = func_0x000186424410(uRam000000018312fa50 ^ 0x7cff5023003729);
  uRam000000018312fab8 =
       (uRam000000018312fab8 ^ uRam000000018312f9c0 & 0x7fffffffffffffff) - 0x547aa000 ^
       0x59d1e4835530ea99;
  uRam000000018312fa80 =
       (uRam000000018312fa80 * -0x1940b80693de975d ^ uRam000000018312fab8) +
       (uRam000000018312f9c0 & 0x7fffffffffffffff);
  uRam000000018312f7e0 = uRam000000018312fa80 ^ uRam000000018312fab8;
  uRam000000018312f710 = 0xab856000;
  uVar4 = (~uRam000000018312fa08 + 0x547aa001) *
          ((uRam000000018312f920 ^ 0x84227154) +
          (ulonglong)((uint)uRam000000018312f920 & 0x84227154) * 2);
  uVar4 = (uVar4 | uRam000000018312f818) + (uVar4 & uRam000000018312f818);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312fac0 =
       func_0x000186424410((uVar4 | 0xd058d154) + (ulonglong)((uint)uVar4 & 0xd058d154));
  uVar5 = (uRam000000018312fac0 ^ 0x54000000) & 0xffffffffff000000;
  uVar4 = uVar5 + 0x5271;
  uRam000000018312f8d0 = uRam000000018312f7c8 ^ uVar4 ^ 0x547af271;
  uRam000000018312f848 = (uVar4 ^ uRam000000018312f848) + 0x547af271 ^ 0x7a38a89011886a35;
  uRam000000018312fa90 =
       uVar5 + (uRam000000018312fa90 * 0x4fdebf44001a454f ^ uRam000000018312f848) + 0x5271;
  uRam000000018312f790 = uRam000000018312f848 ^ uRam000000018312fa90;
  uRam000000018312f828 = 0x547af271;
  uVar4 = (~uRam000000018312f920 + 0x873723ae) *
          ((uRam000000018312f830 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018312f830 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018312f8c0) + (uVar4 & uRam000000018312f8c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f958 =
       func_0x000186424410((uVar4 | 0x3150088) + (ulonglong)((uint)uVar4 & 0x3150088));
  uVar4 = (uRam000000018312f958 << 0x10 | uRam000000018312f958 >> 0x30) ^ 0x873723ad;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar4;
  uRam000000018312f7f0 = (uRam000000018312f7f0 ^ uVar4) - 0x873723ad ^ 0xe143dfb9089388d8;
  uRam000000018312f9f0 = (uRam000000018312f9f0 * -0x54a0b2df302d6aaf ^ uRam000000018312f7f0) + uVar4
  ;
  uRam000000018312f968 = uRam000000018312f9f0 ^ uRam000000018312f7f0;
  uRam000000018312f9d0 = 0x78c8dc53;
  uVar4 = (uRam000000018312f9c0 ^ _UNK_18083aa90) + uRam000000018312f918 + 0x84227154;
  uVar5 = (uRam000000018312f918 ^ _UNK_18083aa98) + uRam000000018312f9c0 + 0x873723ad;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312f9c0 ^ _UNK_18083aa90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018312f918 ^ _UNK_18083aa98;
  uRam000000018312f7b0 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018312f9c0 + 0x873723ad) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018312f918 + 0x84227154));
  uVar4 = uRam000000018312f7b0 ^ 0x8737218c;
  uRam000000018312f818 = uRam000000018312f908 ^ uVar4 ^ 0x8737761e;
  uRam000000018312f798 = (uRam000000018312f798 ^ uVar4) + 0x8737761e ^ 0x58606bb0ddd4d99f;
  uRam000000018312f968 = (uRam000000018312f968 * -0x4cbb9d291a2ea6bb ^ uRam000000018312f798) + uVar4
  ;
  uRam000000018312f700 = uRam000000018312f968 ^ uRam000000018312f798;
  uRam000000018312fa60 = 0x8737761e;
  uRam000000018312f9c8 = func_0x000186424410(uRam000000018312f868 ^ 0x78ffd4d800b422);
  uVar4 = uRam000000018312f9c8 >> 1 | uRam000000018312f9c8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam000000018312f9c8;
  uVar4 = uVar4 << 0x39 | uVar4 >> 7;
  uRam000000018312f9f0 = uRam000000018312f7e8 ^ uVar4 ^ 0x100005271;
  uRam000000018312f990 = (uRam000000018312f990 ^ uVar4) + 0x100005271 ^ 0xa1427065f73c21a5;
  uRam000000018312f868 = (uRam000000018312f868 * -0x6cf028d1ac25db39 ^ uRam000000018312f990) + uVar4
  ;
  uRam000000018312f960 = uRam000000018312f868 ^ uRam000000018312f990;
  uRam000000018312f9f8 = 0x5271;
  uVar4 = (~uRam000000018312f990 + 0xbcdbce09) *
          ((uRam000000018312fab8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018312fab8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018312f8b0) + (uVar4 & uRam000000018312f8b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f9d0 =
       func_0x000186424410((uVar4 | 0x38f9ed2d) + (ulonglong)((uint)uVar4 & 0x38f9ed2d));
  uRam000000018312f838 =
       (uRam000000018312f838 ^ uRam000000018312f9d0) - 0xbcdbce08 ^ 0x75826d2698aa4b50;
  uRam000000018312fae0 =
       (uRam000000018312fae0 * -0x5616465c8d39fe79 ^ uRam000000018312f838) + uRam000000018312f9d0;
  uRam000000018312f870 = uRam000000018312fae0 ^ uRam000000018312f838;
  uRam000000018312f8c8 = 0x432431f8;
  uRam000000018312faa8 = func_0x000186424410(uRam000000018312f8b8 + 0x7afff85c0018ff ^ 0xf3);
  uVar4 = (ulonglong)(~(uint)uRam000000018312faa8 & 0x5271) ^ 0x5271;
  uRam000000018312f7f8 = uRam000000018312fac8 ^ uVar4 ^ 0xbcdc2079;
  uRam000000018312f8e0 = (uRam000000018312f8e0 ^ uVar4) + 0xbcdc2079 ^ 0x7e5d5825926979b4;
  uRam000000018312faf0 = (uRam000000018312faf0 * 0x11e3b48570aa759f ^ uRam000000018312f8e0) + uVar4;
  uRam000000018312f980 = uRam000000018312faf0 ^ uRam000000018312f8e0;
  uRam000000018312f770 = 0xbcdc2079;
  uVar4 = (uRam000000018312f700 ^ _UNK_18083aaa0) + uRam000000018312f9f8 + 0x38fe035c;
  uVar5 = (uRam000000018312f9f8 ^ _UNK_18083aaa8) + uRam000000018312f700 + 0x432431f8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312f700 ^ _UNK_18083aaa0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018312f9f8 ^ _UNK_18083aaa8;
  uRam000000018312f7d0 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018312f700 + 0x432431f8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018312f9f8 + 0x38fe035c));
  uVar4 = uRam000000018312f7d0 - (uRam000000018312f7d0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam000000018312f7d0;
  uRam000000018312f720 = uRam000000018312f748 ^ uVar4 ^ 0x100005271;
  uRam000000018312f748 = (uRam000000018312f748 ^ uVar4) + 0x100005271 ^ 0xdbcb04a6d7d61385;
  uRam000000018312fa38 = (uRam000000018312fa38 * -0xd3e00989c714c0f ^ uRam000000018312f748) + uVar4;
  uRam000000018312f838 = uRam000000018312fa38 ^ uRam000000018312f748;
  uRam000000018312f7b0 = 0x5271;
  uRam000000018312f820 = func_0x000186424410(uRam000000018312fab8 ^ 0x97ffa899ffe40c);
  uVar4 = uRam000000018312f820 - (uRam000000018312f820 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (ulonglong)
          (~((uint)uRam000000018312f820 ^
            (uint)((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7)) &
          0xaf7dbdfd);
  uRam000000018312f9f8 = uRam000000018312f8d0 ^ uVar4 ^ 0x1232fc43f;
  uRam000000018312fad0 = (uRam000000018312fad0 ^ uVar4) + 0x1232fc43f ^ 0x624366583aff200d;
  uRam000000018312f730 = (uRam000000018312f730 * -0x529a20cd638c8db1 ^ uRam000000018312fad0) + uVar4
  ;
  uRam000000018312f9b0 = uRam000000018312f730 ^ uRam000000018312fad0;
  uRam000000018312f7c8 = 0x232fc43f;
  uRam000000018312fae0 = func_0x000186424410(uRam000000018312f708 + 0xff97ffc78a005cff ^ 0xce);
  uVar4 = (uRam000000018312fae0 ^ 0xffffbc00) & 0x1ffffffffffffc00;
  uRam000000018312f860 = (uRam000000018312f860 ^ uVar4) + 0xdccfbbbf ^ 0xd8cd5ef12ca22096;
  uRam000000018312f7d0 = (uRam000000018312f7d0 * -0x4b5e9cee2d9b5531 ^ uRam000000018312f860) + uVar4
  ;
  uRam000000018312fa80 = uRam000000018312f7d0 ^ uRam000000018312f860;
  uRam000000018312f8a8 = 0xdccfbbbf;
  uVar4 = (~uRam000000018312f7a8 + 0x73b20643) *
          ((uRam000000018312f7b0 ^ 0x2b5f9ed8) +
          (ulonglong)((uint)uRam000000018312f7b0 & 0x2b5f9ed8) * 2);
  uVar4 = (uVar4 | uRam000000018312f8b0) + (uVar4 & uRam000000018312f8b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312fa98 =
       func_0x000186424410((uVar4 | 0x58ed989a) + (ulonglong)((uint)uVar4 & 0x58ed989a));
  uRam000000018312f768 =
       (uRam000000018312f768 ^ uRam000000018312fa98 ^ 0xffffbfff) + 0x23300440 ^ 0x128984ec5b8095e7;
  uRam000000018312f7f8 =
       (uRam000000018312f7f8 * -0x7ab4f33349e3a3a3 ^ uRam000000018312f768) +
       (uRam000000018312fa98 ^ 0xffffbfff);
  uRam000000018312f958 = uRam000000018312f7f8 ^ uRam000000018312f768;
  uRam000000018312f7c8 = 0x23300440;
  uVar4 = (uRam000000018312f8d8 ^ _UNK_18083aab0) + uRam000000018312fad8 + 0x58ed989a;
  uVar5 = (uRam000000018312fad8 ^ _UNK_18083aab8) + uRam000000018312f8d8 + 0x46600880;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018312f8d8 ^ _UNK_18083aab0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018312fad8 ^ _UNK_18083aab8;
  uRam000000018312fa60 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018312f8d8 + 0x46600880) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018312fad8 + 0x58ed989a));
  uVar4 = uRam000000018312fa60 & 0x7fffffffffffffff;
  uRam000000018312f980 = uRam000000018312f738 ^ uVar4 ^ 0x1232fc43f;
  uRam000000018312f8f8 = (uRam000000018312f8f8 ^ uVar4) + 0x1232fc43f ^ 0x6ab2325778fb85e1;
  uRam000000018312f748 = (uRam000000018312f748 * 0x574e0bdec751c01 ^ uRam000000018312f8f8) + uVar4;
  uRam000000018312f730 = uRam000000018312f748 ^ uRam000000018312f8f8;
  uRam000000018312f940 = 0x232fc43f;
  uVar4 = (~uRam000000018312fa10 + 0x232fc440) *
          ((uRam000000018312f758 ^ 0xa70de71a) +
          (ulonglong)((uint)uRam000000018312f758 & 0xa70de71a) * 2);
  uVar4 = (uVar4 | uRam000000018312fae0) + (uVar4 & uRam000000018312fae0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312f7e8 =
       func_0x000186424410((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uVar4 = (uRam000000018312f7e8 & 0xfffffffffffff) - (uRam000000018312f7e8 >> 1 & 0x5555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uRam000000018312f890 =
       (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
       uRam000000018312f7e8 & 0xfffffffffffff;
  uRam000000018312fa28 = uRam000000018312fa28 ^ uRam000000018312f890 ^ 0xa1dfbfe29174ea25;
  uRam000000018312f880 =
       (uRam000000018312f880 * -0xa784399e3cb0a5d ^ uRam000000018312fa28) + uRam000000018312f890;
  uRam000000018312f928 = uRam000000018312f880 ^ uRam000000018312fa28;
  uRam000000018312f918 = 0;
  uRam000000018312faa8 = func_0x000186424410(uRam000000018312f878 + 0xffe0ff4c24ff9fff ^ 0xee);
  uVar4 = uRam000000018312faa8 << 0x22 | uRam000000018312faa8 >> 0x1e;
  uRam000000018312f868 = (uRam000000018312f868 ^ uVar4) + 0x50824202 ^ 0x51f625d70d95b001;
  uRam000000018312f950 = (uRam000000018312f950 * -0x11e057d1a7fdce11 ^ uRam000000018312f868) + uVar4
  ;
  uRam000000018312fa40 = uRam000000018312f950 ^ uRam000000018312f868;
  uRam000000018312f9d8 = 0x50824202;
  uRam000000018312f7b0 = func_0x000186424410(uRam000000018312f778 ^ 0x5bffa425ffc442);
  uRam000000018312f928 =
       uRam000000018312f928 ^ uRam000000018312f7b0 ^ 0x3730967904f2f7f8 ^ 0x726471e7b3c1a8cd;
  uRam000000018312fad0 =
       (uRam000000018312fad0 * 0x3fcc15c71d487f0f ^ uRam000000018312f928) +
       (uRam000000018312f7b0 ^ 0x3730967904f2f7f8);
  uRam000000018312f8a0 = uRam000000018312fad0 ^ uRam000000018312f928;
  uRam000000018312f7d8 = 0;
  uVar4 = (~uRam000000018312f7f0 + 0xa730356d) *
          ((uRam000000018312f950 ^ 0x23121649) +
          (ulonglong)((uint)uRam000000018312f950 & 0x23121649) * 2);
  uVar4 = (uVar4 | uRam000000018312f9a8) + (uVar4 & uRam000000018312f9a8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018312faf0 =
       func_0x000186424410((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uVar4 = (uRam000000018312faf0 ^ 0xa730356c) & 0x7fffffffffffffff;
  uRam000000018312fa20 = uRam000000018312fa20 ^ uVar4 ^ 0x578a2255c012f1af;
  uRam000000018312f9b8 = (uRam000000018312f9b8 * 0x3263086aba4e861 ^ uRam000000018312fa20) + uVar4;
  uRam000000018312f9c8 = uRam000000018312f9b8 ^ uRam000000018312fa20;
  uRam000000018312fad0 = 0;
  uVar4 = uVar6 ^ 0x84222325 ^ uRam000000018312f840;
  lVar3 = (uVar6 ^ 0x84222325) + uRam000000018312faa0;
  uVar5 = uVar4 + lVar3;
  uVar7 = (uRam000000018312faa0 ^ 0x5271) + uRam000000018312f840 + 0x5271;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018312faa0 ^ 0x5271;
  uRam000000018312f7e0 =
       func_0x000186424410((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018312f840 + 0x5271) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar4 = (uVar6 * 0x5271 ^ uRam000000018312f7e0) & 0x7fffffffffff;
  lVar3 = uVar6 - (uVar2 & 0x5271) * 2;
  uRam000000018312f770 = (uRam000000018312f770 ^ uVar4) + lVar3 + 0x5271 ^ 0xd5f43081d0104ee1;
  uRam000000018312fad0 = (uRam000000018312fad0 * -0x62a489b4aa6f720d ^ uRam000000018312f770) + uVar4
  ;
  uRam000000018312f8c0 = uRam000000018312fad0 ^ uRam000000018312f770;
  uRam000000018312f748 = lVar3 + 0x5271U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018641b5f9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180838be0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1864244a0, runtime 6fffee0344a0) =====

void FUN_1864244a0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001864244eb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18083ac50 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1864254b0, runtime 6fffee0354b0) =====

void FUN_1864254b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186425539 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18083b210 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwt (Lnet/minecraft/class_1657;)V (handler @ image 18640e4d0, runtime 6fffee01e4d0) =====

void FUN_18640e4d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018640e5b1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180835d40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwu (Lnet/minecraft/class_1657;I)V (handler @ image 1864152e0, runtime 6fffee0252e0) =====

void FUN_1864152e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xe872,0x288);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186415339 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180837a50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwv (Ljava/util/UUID;)V (handler @ image 18643b760, runtime 6fffee04b760) =====

void FUN_18643b760(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018643b842 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18083d9b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dww (Ljava/util/UUID;I)V (handler @ image 1864429c0, runtime 6fffee0529c0) =====

void FUN_1864429c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186442a87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18083f6c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwx (Lnet/minecraft/class_1657;)Z (handler @ image 1864465f0, runtime 6fffee0565f0) =====

void FUN_1864465f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018644663f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808406a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwy (Ljava/util/UUID;)Z (handler @ image 186446a00, runtime 6fffee056a00) =====

void FUN_186446a00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186446ac4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180840850 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/on$vh; dwz (Lnet/minecraft/class_1657;)I (handler @ image 18644a720, runtime 6fffee05a720) =====

void FUN_18644a720(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1ef13,0x4c9);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018644a76f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180841870 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



