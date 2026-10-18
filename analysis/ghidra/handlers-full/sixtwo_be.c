// ===== Lsixtwo/be; CA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18f0bca30, runtime 6ffff6ccca30) =====

void FUN_18f0bca30(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018f0bca7b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182811cd0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/be; CB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18f0bda40, runtime 6ffff6ccda40) =====

void FUN_18f0bda40(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0bdac9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182812280 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; Cr ()V (handler @ image 18f07bdd0, runtime 6ffff6c8bdd0) =====

void FUN_18f07bdd0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f07be05 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182806bb0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/be; Cs (Lsixtwo/lC;F)V (handler @ image 18f0f43f0, runtime 6ffff6d043f0) =====

void FUN_18f0f43f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x2166,0x71);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0f4476 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18281cdc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; Ct (Lsixtwo/P;)V (handler @ image 18f0f8a80, runtime 6ffff6d08a80) =====

void FUN_18f0f8a80(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x70fd,0x13e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0f8b6b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18281eb98 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; Cu (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18f10f480, runtime 6ffff6d1f480) =====

undefined8 FUN_18f10f480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/be; Cv ([B)Ljava/lang/String; (handler @ image 18f07ca50, runtime 6ffff6c8ca50) =====

void FUN_18f07ca50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018f07caf3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182807200 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/be; Cw (IJ)Ljava/lang/String; (handler @ image 18f0a69e0, runtime 6ffff6cb69e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f0a69e0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  
  uVar5 = (~uRam00000001833e9b30 + 0x164ca22f9b529e03) *
          ((uRam00000001833e9bc0 ^ 0xd22965023cb11c05) +
          (uRam00000001833e9bc0 & 0x522965023cb11c05) * 2);
  uVar5 = (uVar5 | uRam00000001833e9c88) + (uVar5 & uRam00000001833e9c88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9a58 =
       func_0x00018f0ad760((uVar5 | 0xc465c72da7e38207) + (uVar5 & 0xc465c72da7e38207));
  uVar5 = ((uRam00000001833e9a58 ^ 0xd66de72fbbd3bf22) >> 1 | uRam00000001833e9a58 << 0x3f) ^
          0xd2296502b8933f20;
  uRam00000001833e9bd8 = (uRam00000001833e9bd8 ^ uVar5) + 0xd66de72fbbd3bf22 ^ 0xabeaf99c1c2b8a14;
  uRam00000001833e9cb8 = (uRam00000001833e9cb8 * 0x6eef13a16f8b94a7 ^ uRam00000001833e9bd8) + uVar5;
  uRam00000001833e9af0 = uRam00000001833e9cb8 ^ uRam00000001833e9bd8;
  uRam00000001833e9ac8 = 0xd66de72fbbd3bf22;
  uVar5 = (~uRam00000001833e9b98 + 0x40da279ac1de6b1b) *
          ((uRam00000001833e9c40 ^ 0x5f91f5cb6b349514) +
          (uRam00000001833e9c40 & 0x5f91f5cb6b349514) * 2);
  uVar5 = (uVar5 | uRam00000001833e9980) + (uVar5 & uRam00000001833e9980);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9c58 =
       func_0x00018f0ad760((uVar5 | 0x1f4bd251aaeafe0e) + (uVar5 & 0x1f4bd251aaeafe0e));
  uVar5 = ((uRam00000001833e9c58 ^ 0x5fdbf7dbefdeff3b) & 0x1fffff) << 0x2a |
          (uRam00000001833e9c58 ^ 0x5fdbf7dbefdeff3b) >> 0x16;
  uRam00000001833e9b70 = (uRam00000001833e9b70 ^ uVar5) + 0x1f4bd2512ec8dd2b ^ 0xdaa193f75d83c3f3;
  uRam00000001833e99b8 = (uRam00000001833e99b8 * 0x1d80ccca87336157 ^ uRam00000001833e9b70) + uVar5;
  uRam00000001833e9968 = uRam00000001833e99b8 ^ uRam00000001833e9b70;
  uRam00000001833e9ab0 = 0x1f4bd2512ec8dd2b;
  uVar5 = (uRam00000001833e9a68 ^ _UNK_18280e670) + uRam00000001833e9908 + 0x84222325;
  uVar9 = (uRam00000001833e9908 ^ _UNK_18280e678) + uRam00000001833e9a68 + 0x2552ec6df4c48000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9a68 ^ _UNK_18280e670;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e9908 ^ _UNK_18280e678;
  uRam00000001833e9a78 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001833e9a68 + 0x2552ec6df4c48000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833e9908 + 0x84222325));
  uVar5 = ((uRam00000001833e9a78 ^ 0x2552ec6df4c48000) << 4 |
          (uRam00000001833e9a78 ^ 0x2552ec6df4c48000) >> 0x3c) * -0x23f249426d57735d;
  uVar9 = uVar5 >> 1 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5;
  uRam00000001833e9b98 = (uRam00000001833e9b98 ^ uVar5) + 0xdaad13920b3b8000 ^ 0xa7951029589c701f;
  uRam00000001833e9a50 = (uRam00000001833e9a50 * -0x480392a4dc96d87 ^ uRam00000001833e9b98) + uVar5;
  uRam00000001833e9ce0 = uRam00000001833e9a50 ^ uRam00000001833e9b98;
  uRam00000001833e9a70 = 0xdaad13920b3b8000;
  uVar5 = (uRam00000001833e9c88 ^ _UNK_18280e680) + uRam00000001833e99f8 + 0x2552ec6d70e6dcda;
  uVar9 = (uRam00000001833e99f8 ^ _UNK_18280e688) + uRam00000001833e9c88 + 0xdaad13920b3b8000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9c88 ^ _UNK_18280e680;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e99f8 ^ _UNK_18280e688;
  uRam00000001833e9910 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001833e9c88 + 0xdaad13920b3b8000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833e99f8 + 0x2552ec6d70e6dcda));
  uVar5 = (uRam00000001833e9910 ^ 0xdaad13920b380000) & 0xfffffffffffc0000;
  uRam00000001833e9a10 = uRam00000001833e9a20 ^ uVar5 ^ 0x7fff;
  uRam00000001833e9b90 = (uRam00000001833e9b90 ^ uVar5) + 0x7fff ^ 0x4f32bddeb9af38a6;
  uRam00000001833e99b8 = (uRam00000001833e99b8 * -0x4687c954491546c9 ^ uRam00000001833e9b90) + uVar5
  ;
  uRam00000001833e9ba0 = uRam00000001833e99b8 ^ uRam00000001833e9b90;
  uRam00000001833e9ce8 = 0x7fff;
  uRam00000001833e9ae8 = func_0x00018f0ad760(uRam00000001833e9ba8 ^ 0x805c7d9417dc4115);
  uVar5 = (uRam00000001833e9ae8 << 0x35 | uRam00000001833e9ae8 >> 0xb) >> 1 |
          (uRam00000001833e9ae8 >> 0xb) << 0x3f;
  uRam00000001833e9b90 = uRam00000001833e99f8 ^ uVar5 ^ 0x87bf2c83286563c1;
  uRam00000001833e9b00 = (uRam00000001833e9b00 ^ uVar5) + 0x87bf2c83286563c1 ^ 0xdbefbfe47bbccd5b;
  uRam00000001833e9b20 = (uRam00000001833e9b20 * -0x7a569a4d9c3a186b ^ uRam00000001833e9b00) + uVar5
  ;
  uRam00000001833e9b10 = uRam00000001833e9b20 ^ uRam00000001833e9b00;
  uRam00000001833e9ca0 = 0x87bf2c83286563c1;
  uVar5 = (uRam00000001833e9ae0 ^ _UNK_18280e690) + uRam00000001833e9ba8 + 0x87bf2c83ac4740e4;
  uVar9 = (uRam00000001833e9ba8 ^ _UNK_18280e698) + uRam00000001833e9ae0 + 0x7840d37cd79b1c3e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9ae0 ^ _UNK_18280e690;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e9ba8 ^ _UNK_18280e698;
  uRam00000001833e9ca0 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001833e9ae0 + 0x7840d37cd79b1c3e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833e9ba8 + 0x87bf2c83ac4740e4));
  uVar5 = uRam00000001833e9ca0 >> 1 | uRam00000001833e9ca0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001833e9ca0;
  uVar5 = (uVar5 & 0xfffffffffffffffe) << 0x31 | uVar5 >> 0xf;
  uRam00000001833e9a18 = uRam00000001833e9bd8 ^ uVar5 ^ 0x7fff;
  uRam00000001833e99d0 = (uRam00000001833e99d0 ^ uVar5) + 0x7fff ^ 0x44274f79f8c33351;
  uRam00000001833e9c88 = (uRam00000001833e9c88 * 0x23a4b44c20b3651d ^ uRam00000001833e99d0) + uVar5;
  uRam00000001833e9a78 = uRam00000001833e9c88 ^ uRam00000001833e99d0;
  uRam00000001833e9b58 = 0x7fff;
  uVar5 = (~uRam00000001833e9c40 + 0xfc3565924a3ae0a1) *
          ((uRam00000001833e9c70 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833e9c70 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001833e9c48) + (uVar5 & uRam00000001833e9c48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9cc0 =
       func_0x00018f0ad760((uVar5 | 0xfc356592ce18c385) + (uVar5 & 0xfc356592ce18c385));
  uRam00000001833e9be8 =
       (uRam00000001833e9be8 ^ uRam00000001833e9cc0) + 0x3ca9a6db5c51f60 ^ 0x8ca7c5d68f7cb905;
  uRam00000001833e9b40 =
       (uRam00000001833e9b40 * -0x1f8304328573c2b7 ^ uRam00000001833e9be8) + uRam00000001833e9cc0;
  uRam00000001833e9b20 = uRam00000001833e9b40 ^ uRam00000001833e9be8;
  uRam00000001833e9928 = 0x3ca9a6db5c51f60;
  uVar5 = (uRam00000001833e9a10 ^ _UNK_18280e6a0) + uRam00000001833e9b88 + 0xfc356592ce1943ba;
  uVar9 = (uRam00000001833e9b88 ^ _UNK_18280e6a8) + uRam00000001833e9a10 + 0x3ca9a6db5c51f60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9a10 ^ _UNK_18280e6a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e9b88 ^ _UNK_18280e6a8;
  uRam00000001833e9cd8 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001833e9a10 + 0x3ca9a6db5c51f60) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833e9b88 + 0xfc356592ce1943ba));
  uVar5 = uRam00000001833e9cd8 & 0xffffffffffffff00;
  uRam00000001833e9988 = uRam00000001833e9b68 ^ uVar5 ^ 0x7fff;
  uRam00000001833e9cf0 = (uRam00000001833e9cf0 ^ uVar5) + 0x7fff ^ 0x38aa88ba5c12b6e;
  uRam00000001833e99c8 = (uRam00000001833e99c8 * 0x3c66136aac36beb9 ^ uRam00000001833e9cf0) + uVar5;
  uRam00000001833e99b0 = uRam00000001833e99c8 ^ uRam00000001833e9cf0;
  uRam00000001833e9bc0 = 0x7fff;
  uVar5 = (~uRam00000001833e99a8 + 0x1f4bd2512ec8dd2c) *
          ((uRam00000001833e9948 ^ 0xd66de72f3ff19c07) +
          (uRam00000001833e9948 & 0x566de72f3ff19c07) * 2);
  uVar5 = (uVar5 | uRam00000001833e9ab8) + (uVar5 & uRam00000001833e9ab8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9b70 =
       func_0x00018f0ad760((uVar5 | 0xc926357e1139412c) + (uVar5 & 0xc926357e1139412c));
  uVar5 = uRam00000001833e9b70 ^ 0xdf6ff77fbfdbff2b;
  uRam00000001833e9940 = uRam00000001833e9900 ^ uVar5 ^ 0xf5b9b980ea9c9c4d;
  uRam00000001833e9a48 = (uRam00000001833e9a48 ^ uVar5) + 0xf5b9b980ea9c9c4d ^ 0xb4748c53d69f4d25;
  uRam00000001833e9be0 = (uRam00000001833e9be0 * -0x44ab0a97c21b6c55 ^ uRam00000001833e9a48) + uVar5
  ;
  uRam00000001833e99d0 = uRam00000001833e9be0 ^ uRam00000001833e9a48;
  uRam00000001833e9c98 = 0xf5b9b980ea9c9c4d;
  uVar5 = (uRam00000001833e9bc0 ^ _UNK_18280e6b0) + uRam00000001833e9a08 + 0xd66de72f3ff19c07;
  uVar9 = (uRam00000001833e9a08 ^ _UNK_18280e6b8) + uRam00000001833e9bc0 + 0x1f4bd2512ec8dd2b;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9bc0 ^ _UNK_18280e6b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e9a08 ^ _UNK_18280e6b8;
  uRam00000001833e9a90 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001833e9bc0 + 0x1f4bd2512ec8dd2b) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833e9a08 + 0xd66de72f3ff19c07));
  uVar5 = (uRam00000001833e9a90 ^ 0xdf6ff77fbfdbff2b) << 0x35 |
          (uRam00000001833e9a90 ^ 0xdf6ff77fbfdbff2b) >> 0xb;
  uRam00000001833e9c08 = (uRam00000001833e9c08 ^ uVar5) + 0xc926357e951b6209 ^ 0x37ad86c0969a6324;
  uRam00000001833e9978 = (uRam00000001833e9978 * -0x1a0f6a9892855fc5 ^ uRam00000001833e9c08) + uVar5
  ;
  uRam00000001833e9ae8 = uRam00000001833e9978 ^ uRam00000001833e9c08;
  uRam00000001833e99a0 = 0xc926357e951b6209;
  uVar5 = (uRam00000001833e99a8 ^ _UNK_18280e6c0) + uRam00000001833e99a8 + 0xc926357e1139412c;
  uVar9 = (uRam00000001833e99a8 ^ _UNK_18280e6c8) + uRam00000001833e99a8 + 0x2c93840255813a44;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e99a8 ^ _UNK_18280e6c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e99a8 ^ _UNK_18280e6c8;
  uRam00000001833e9a28 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001833e99a8 + 0x2c93840255813a44) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833e99a8 + 0xc926357e1139412c));
  uVar5 = uRam00000001833e9a28 & 0x7fffffffffffffff;
  uRam00000001833e9c40 = uRam00000001833e9c60 ^ uVar5 ^ 0xf5b9b980ea9c9c4d;
  uRam00000001833e9b98 = (uRam00000001833e9b98 ^ uVar5) + 0xf5b9b980ea9c9c4d ^ 0x7ff5bddc64205fe4;
  uRam00000001833e9cc8 = (uRam00000001833e9cc8 * 0x281fe8d6c863028d ^ uRam00000001833e9b98) + uVar5;
  uRam00000001833e9a18 = uRam00000001833e9cc8 ^ uRam00000001833e9b98;
  uRam00000001833e9ce8 = 0xf5b9b980ea9c9c4d;
  uVar5 = (~uRam00000001833e9c70 + 0xf5b9b980ea9c9c4e) *
          ((uRam00000001833e9c68 ^ 0xf5b9b9806ebebf68) +
          (uRam00000001833e9c68 & 0x75b9b9806ebebf68) * 2);
  uVar5 = (uVar5 | uRam00000001833e9bc8) + (uVar5 & uRam00000001833e9bc8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9be8 =
       func_0x00018f0ad760((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam00000001833e9c28 = uRam00000001833e9be8 * 0x22d2a10ad636e81b;
  uRam00000001833e99a0 = uRam00000001833e99a0 ^ uRam00000001833e9c28 ^ 0xe05178f91892ed24;
  uRam00000001833e9ce0 =
       (uRam00000001833e9ce0 * 0x4a54bc47c1422ee3 ^ uRam00000001833e99a0) + uRam00000001833e9c28;
  uRam00000001833e9c20 = uRam00000001833e9ce0 ^ uRam00000001833e99a0;
  uRam00000001833e9b30 = 0;
  uRam00000001833e9c88 = func_0x00018f0ad760(uRam00000001833e9ab8 ^ 0xc4348eb9ba024c15);
  uVar5 = (uRam00000001833e9c88 << 0x11 | uRam00000001833e9c88 >> 0x2f) ^ 0xd66de72fbbd3bf22;
  uRam00000001833e9b28 = uRam00000001833e9b28 ^ uVar5 ^ 0xca774895e226d9d1;
  uRam00000001833e9900 = (uRam00000001833e9900 * -0x313d14cf802ccb1b ^ uRam00000001833e9b28) + uVar5
  ;
  uRam00000001833e9a28 = uRam00000001833e9900 ^ uRam00000001833e9b28;
  uRam00000001833e9c28 = 0;
  uVar5 = uRam00000001833e9948 + 0x10844b9b4;
  uVar9 = (uRam00000001833e9948 * 0x2000 | uRam00000001833e9948 >> 0x33) ^ uRam00000001833e9948;
  uRam00000001833e9b88 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) ^
                           (((uVar5 * 0x2000 | uVar5 >> 0x33) ^ 0x84225cda) << 0x1d |
                           (uVar5 & 0x7ffffffffffff) >> 0x16) - (uRam00000001833e9948 + 0x84225cda))
  ;
  uRam00000001833e9900 = uRam00000001833e9be8 ^ uRam00000001833e9b88 ^ 0x7fff;
  uRam00000001833e9a10 = (uRam00000001833e9a10 ^ uRam00000001833e9b88) + 0x7fff ^ 0x9f3e8e94cafff5ec
  ;
  uRam00000001833e9cd8 =
       (uRam00000001833e9cd8 * 0x6defedbca50a5d57 ^ uRam00000001833e9a10) + uRam00000001833e9b88;
  uRam00000001833e9a30 = uRam00000001833e9cd8 ^ uRam00000001833e9a10;
  uRam00000001833e9a80 = 0x7fff;
  uVar5 = ((uRam00000001833e9a50 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833e9a50 & 0x84225cda) * 2) * -uRam00000001833e99b0;
  uVar5 = (uVar5 | uRam00000001833e9ba8) + (uVar5 & uRam00000001833e9ba8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9a28 =
       func_0x00018f0ad760((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  auVar8 = _UNK_1800170c0;
  uVar5 = uRam00000001833e9a28 & 0x7fffffffffffffff;
  uRam00000001833e9c08 = uRam00000001833e9bd8 ^ uVar5 ^ 0x7fff;
  uRam00000001833e9b08 = (uRam00000001833e9b08 ^ uVar5) + 0x7fff ^ 0x4c18cf7542f29613;
  uRam00000001833e9bc0 = (uRam00000001833e9bc0 * -0x59b73f9a4d939a1f ^ uRam00000001833e9b08) + uVar5
  ;
  uRam00000001833e9bb8 = uRam00000001833e9bc0 ^ uRam00000001833e9b08;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  uRam00000001833e9988 = 0x7fff;
  auVar7 = pshufb(auVar6 ^ _UNK_18280e6d0,_UNK_1800170c0);
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar5 = uVar9 + uRam00000001833e9bc8;
  if (auVar7._4_4_ < 0) {
    uVar5 = uRam00000001833e9a38 ^ uVar9;
  }
  uVar5 = func_0x00018f0ad760(SUB161(auVar6 ^ _UNK_18280e6d0,5) ^ uVar5);
  uVar5 = (param_4 | 0x7fff) ^ uVar5;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001833e9bd8 = (ulonglong)uVar2;
  uRam00000001833e9968 = (uRam00000001833e9968 ^ uVar5) + uRam00000001833e9bd8 ^ 0x6341f5174a7310b1;
  uRam00000001833e9b28 = (uRam00000001833e9b28 * -0x4c78b04a9dc5ac5d ^ uRam00000001833e9968) + uVar5
  ;
  uRam00000001833e9ba8 = uRam00000001833e9b28 ^ uRam00000001833e9968;
  uVar9 = uRam00000001833e9bd8 ^ 0x84222325;
  uVar5 = ((uRam00000001833e9958 ^ uVar9) +
          (ulonglong)((uint)uRam00000001833e9958 & (uint)uVar9) * 2) *
          (param_3 - uRam00000001833e9b20);
  uVar5 = (uVar5 | uRam00000001833e9b28) + (uVar5 & uRam00000001833e9b28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar9 = uVar9 ^ param_3;
  uVar5 = func_0x00018f0ad760((uVar9 | uVar5) + (ulonglong)((uint)uVar9 & (uint)uVar5));
  uVar4 = (ulonglong)(uVar2 ^ param_3);
  uRam00000001833e9b00 = (uVar2 | param_3) + uVar4 ^ 0x676a6c48d593546c;
  uRam00000001833e9bc0 =
       (uRam00000001833e9bc0 * 0x4d82b62dafa88679 ^ uRam00000001833e9b00) +
       ((uVar2 | param_3) ^ uVar5);
  uRam00000001833e9cd8 = uRam00000001833e9bc0 ^ uRam00000001833e9b00;
  uVar5 = (~uRam00000001833e9a58 + 0x69b8c240) *
          ((uRam00000001833e9c18 ^ 0xc305edeb) +
          (ulonglong)((uint)uRam00000001833e9c18 & 0xc305edeb) * 2);
  uVar5 = (uVar5 | uRam00000001833e9c48) + (uVar5 & uRam00000001833e9c48);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9ba8 = uVar4;
  uRam00000001833e9a20 =
       func_0x00018f0ad760((uVar5 | 0xaabd2fd4) + (ulonglong)((uint)uVar5 & 0xaabd2fd4));
  uVar5 = uRam00000001833e9a20 & 0xfffffffffffff000;
  uVar9 = uVar5 >> 1 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5 ^
          0x4727cece;
  uRam00000001833e9b08 = (uRam00000001833e9b08 ^ uVar5) + 0x6fbfceff ^ 0xa606976c05345255;
  uRam00000001833e9c10 = (uRam00000001833e9c10 * 0x37d20ff318522bfd ^ uRam00000001833e9b08) + uVar5;
  uRam00000001833e9b68 = uRam00000001833e9c10 ^ uRam00000001833e9b08;
  uRam00000001833e9c88 = 0x6fbfceff;
  uVar5 = (~uRam00000001833e9b40 + 0xf566e19d) *
          ((uRam00000001833e9c18 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833e9c18 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001833e9be0) + (uVar5 & uRam00000001833e9be0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9b30 =
       func_0x00018f0ad760((uVar5 | 0x7144c2b9) + (ulonglong)((uint)uVar5 & 0x7144c2b9));
  uRam00000001833e9c38 =
       (uRam00000001833e9c38 ^ uRam00000001833e9b30) - 0xf566e19c ^ 0x33f600d539dc84a;
  uRam00000001833e9ba8 =
       (uRam00000001833e9ba8 * 0x27ce71a902c2489f ^ uRam00000001833e9c38) + uRam00000001833e9b30;
  uRam00000001833e9c58 = uRam00000001833e9ba8 ^ uRam00000001833e9c38;
  uRam00000001833e9958 = 0xa991e64;
  uVar5 = (~uRam00000001833e9988 + 0xf566e19d) *
          ((uRam00000001833e9b18 ^ 0x8422673e) +
          (ulonglong)((uint)uRam00000001833e9b18 & 0x8422673e) * 2);
  uVar5 = (uVar5 | uRam00000001833e9a08) + (uVar5 & uRam00000001833e9a08);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9af0 =
       func_0x00018f0ad760((uVar5 | 0x714486a2) + (ulonglong)((uint)uVar5 & 0x714486a2));
  uVar5 = uRam00000001833e9af0 ^ 0x414935c73b74;
  uRam00000001833e9a40 = uRam00000001833e9a10 ^ uVar5 ^ 0xf56725b7;
  uRam00000001833e9b30 = (uRam00000001833e9b30 ^ uVar5) + 0xf56725b7 ^ 0x9687a3947c90ec80;
  uRam00000001833e9978 = (uRam00000001833e9978 * -0x4b6f5120b7e41b03 ^ uRam00000001833e9b30) + uVar5
  ;
  uRam00000001833e9a30 = uRam00000001833e9978 ^ uRam00000001833e9b30;
  uRam00000001833e9b68 = 0xf56725b7;
  uVar5 = (uRam00000001833e9ab8 ^ _UNK_18280e6e0) + uRam00000001833e9ac8 + 0x8422673e;
  uVar9 = (uRam00000001833e9ac8 ^ _UNK_18280e6e8) + uRam00000001833e9ab8 + 0x36b20008;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9ab8 ^ _UNK_18280e6e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e9ac8 ^ _UNK_18280e6e8;
  uRam00000001833e9b50 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001833e9ab8 + 0x36b20008) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833e9ac8 + 0x8422673e));
  uRam00000001833e9948 = uRam00000001833e9b80 ^ uRam00000001833e9b50 ^ 0x36b24423;
  uRam00000001833e9bc8 =
       (uRam00000001833e9bc8 ^ uRam00000001833e9b50) + 0x36b24423 ^ 0x4e93d6e80330faf5;
  uRam00000001833e9920 =
       (uRam00000001833e9920 * 0x276ecac7dd8fb8a9 ^ uRam00000001833e9bc8) + uRam00000001833e9b50;
  uRam00000001833e9c40 = uRam00000001833e9920 ^ uRam00000001833e9bc8;
  uRam00000001833e99b8 = 0x36b24423;
  uRam00000001833e9be8 = func_0x00018f0ad760(uRam00000001833e9bc0 + 0x87ffb9e1ffa4ff ^ 0xa2);
  uVar5 = uRam00000001833e9be8 ^ 0xc94dbbd8;
  uRam00000001833e9c38 = uRam00000001833e9be0 ^ uVar5 ^ 0x10000441b;
  uRam00000001833e9948 = (uRam00000001833e9948 ^ uVar5) + 0x10000441b ^ 0x491549bd9e438425;
  uRam00000001833e9b10 = (uRam00000001833e9b10 * 0x360a3206a30b403b ^ uRam00000001833e9948) + uVar5;
  uRam00000001833e9ca0 = uRam00000001833e9b10 ^ uRam00000001833e9948;
  uRam00000001833e9bd0 = 0x441b;
  uVar5 = (uRam00000001833e9a98 ^ _UNK_18280e6f0) + uRam00000001833e9a40 + 0x84222325;
  uVar9 = (uRam00000001833e9a40 ^ _UNK_18280e6f8) + uRam00000001833e9a98 + 0x7572bd30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9a98 ^ _UNK_18280e6f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e9a40 ^ _UNK_18280e6f8;
  uRam00000001833e9938 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001833e9a98 + 0x7572bd30) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833e9a40 + 0x84222325));
  uRam00000001833e9950 =
       (uRam00000001833e9950 ^ uRam00000001833e9938 ^ 0x7572bd30) - 0x7572bd30 ^ 0x8224fafc87287f24;
  uRam00000001833e9b80 =
       (uRam00000001833e9b80 * 0x6e73935dfa281d5f ^ uRam00000001833e9950) +
       (uRam00000001833e9938 ^ 0x7572bd30);
  uRam00000001833e9b58 = uRam00000001833e9b80 ^ uRam00000001833e9950;
  uRam00000001833e9948 = 0x8a8d42d0;
  uVar5 = func_0x00018f0ad760(uRam00000001833e9cf0 ^ 0xffca009105ffcfbc);
  uVar5 = (uVar5 << 0x25 | uVar5 >> 0x1b) ^ 0x7572bd30;
  uVar9 = uVar5 >> 1 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5;
  uRam00000001833e9960 = uRam00000001833e9b08 ^ uVar5 ^ 0x7573014b;
  uRam00000001833e9cf8 = (uRam00000001833e9cf8 ^ uVar5) + 0x7573014b ^ 0xaccf7014790d8e91;
  uRam00000001833e9ad8 = (uRam00000001833e9ad8 * 0x522fb4513b68357f ^ uRam00000001833e9cf8) + uVar5;
  uRam00000001833e9a50 = uRam00000001833e9ad8 ^ uRam00000001833e9cf8;
  uRam00000001833e9cc0 = uRam00000001833e9c50 ^ 0x7573014b;
  uRam00000001833e9af0 = 0x7573014b;
  uRam00000001833e9b48 = func_0x00018f0ad760(uRam00000001833e9a30 ^ 0x20002b65ff530f);
  uVar9 = uRam00000001833e9b48 ^ 0xffff43db;
  uVar5 = uVar9 >> 1 | uVar9;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar9;
  uRam00000001833e9b08 = uRam00000001833e9a98 ^ uVar9 ^ 0x10000441b;
  uRam00000001833e9c10 = (uRam00000001833e9c10 ^ uVar9) + 0x10000441b ^ 0x94c0b1d4e81e86d1;
  uRam00000001833e9ba8 = (uRam00000001833e9ba8 * -0x94b2a1b1b4fda4b ^ uRam00000001833e9c10) + uVar9;
  uRam00000001833e9940 = uRam00000001833e9ba8 ^ uRam00000001833e9c10;
  uRam00000001833e9bf0 = 0x441b;
  uRam00000001833e9bf8 = func_0x00018f0ad760(uRam00000001833e9c78 ^ 0xa1ffc6f8ffc4d8);
  uVar5 = ((uRam00000001833e9bf8 ^ 0x6fbfceff) & 0x7fffffffffffffff) * 0x42abb2362d79ec3b;
  uRam00000001833e9c50 = (uRam00000001833e9c50 ^ uVar5) + 0xcd67cd3e ^ 0xfe132925d4f991d6;
  uRam00000001833e99f0 = (uRam00000001833e99f0 * 0x530a90f91593a7fd ^ uRam00000001833e9c50) + uVar5;
  uRam00000001833e9998 = uRam00000001833e99f0 ^ uRam00000001833e9c50;
  uRam00000001833e9b28 = 0xcd67cd3e;
  uVar5 = (~uRam00000001833e9cd8 + 0x1297d2c1) *
          ((uRam00000001833e99f0 ^ 0x96b5f1e5) +
          (ulonglong)((uint)uRam00000001833e99f0 & 0x96b5f1e5) * 2);
  uVar5 = (uVar5 | uRam00000001833e99b8) + (uVar5 & uRam00000001833e99b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9bc8 =
       func_0x00018f0ad760((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam00000001833e9c38 = uRam00000001833e9bc8 ^ 0x1297d2c0;
  uVar5 = uRam00000001833e9c38 >> 1 | uRam00000001833e9c38;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam00000001833e9c38 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
       uRam00000001833e9c38;
  uRam00000001833e9a38 = uRam00000001833e9b60 ^ uRam00000001833e9c38 ^ 0x2cef6b08a2d7c744;
  uRam00000001833e9b60 =
       (uRam00000001833e9b60 * 0x302a2920822562f1 ^ uRam00000001833e9a38) + uRam00000001833e9c38;
  uRam00000001833e9a38 = uRam00000001833e9b60 ^ uRam00000001833e9a38;
  uRam00000001833e9af0 = 0;
  uVar5 = ((uRam00000001833e9a08 ^ 0x8422673e) +
          (ulonglong)((uint)uRam00000001833e9a08 & 0x8422673e) * 2) * -uRam00000001833e9bc8;
  uVar5 = (uVar5 | uRam00000001833e9920) + (uVar5 & uRam00000001833e9920);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9bd8 =
       func_0x00018f0ad760((uVar5 | 0x8422673e) + (ulonglong)((uint)uVar5 & 0x8422673e));
  uRam00000001833e9c50 = uRam00000001833e9aa0 ^ uRam00000001833e9ac0 ^ 0x441b;
  uRam00000001833e9a28 = (uRam00000001833e9a28 ^ uRam00000001833e9ac0) + 0x441b ^ 0x77e80f68b37c6a4;
  uRam00000001833e9998 =
       (uRam00000001833e9998 * 0x252a088bf43e4463 ^ uRam00000001833e9a28) + uRam00000001833e9ac0;
  uRam00000001833e9a88 = uRam00000001833e9998 ^ uRam00000001833e9a28;
  uRam00000001833e9c68 = 0x441b;
  uVar5 = (uRam00000001833e9c50 ^ _UNK_18280e700) + uRam00000001833e9c58 + 0xeb9dedda;
  uVar9 = (uRam00000001833e9c58 ^ _UNK_18280e708) + uRam00000001833e9c50 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9c50 ^ _UNK_18280e700;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e9c58 ^ _UNK_18280e708;
  uVar5 = func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001833e9c50 + 0xffffffff)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam00000001833e9c58 + 0xeb9dedda));
  uVar2 = ~(uint)uVar5 & 0x6fbfceff;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar9 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          (ulonglong)uVar2;
  uRam00000001833e9be8 = (uVar5 ^ uVar9) + 0x90403100 ^ 0x442280a7195c36de;
  uRam00000001833e9b90 = (uRam00000001833e9b90 * -0x7c8e0b1d04cc835b ^ uRam00000001833e9be8) + uVar9
  ;
  uRam00000001833e9a90 = uRam00000001833e9b90 ^ uRam00000001833e9be8;
  uRam00000001833e9ae8 = 0x90403100;
  uVar5 = (uRam00000001833e9af0 ^ 0x8422673e) + uRam00000001833e9b50 + 0x8422673e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9af0 ^ 0x8422673e;
  uVar9 = ((uRam00000001833e9b50 + uRam00000001833e9af0) * 0x2000 |
          uRam00000001833e9b50 + uRam00000001833e9af0 >> 0x33) ^ uRam00000001833e9b50;
  uRam00000001833e9990 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) - uRam00000001833e9af0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833e9b50 + 0x8422673e));
  uRam00000001833e9c30 = uRam00000001833e9c08 ^ uRam00000001833e9990 ^ 0x441b;
  uRam00000001833e9aa8 = (uRam00000001833e9aa8 ^ uRam00000001833e9990) + 0x441b ^ 0x10791cd5357ba380
  ;
  uRam00000001833e9b08 =
       (uRam00000001833e9b08 * 0x3f5e570215f30257 ^ uRam00000001833e9aa8) + uRam00000001833e9990;
  uRam00000001833e9aa8 = uRam00000001833e9b08 ^ uRam00000001833e9aa8;
  uRam00000001833e9b30 = 0x441b;
  uVar5 = (uRam00000001833e9c38 ^ _UNK_18280e710) + uRam00000001833e9b50 + 0xc305edeb;
  uVar9 = (uRam00000001833e9b50 ^ _UNK_18280e718) + uRam00000001833e9c38 + 0x4727cece;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9c38 ^ _UNK_18280e710;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833e9b50 ^ _UNK_18280e718;
  uRam00000001833e9cb8 =
       func_0x00018f0ad760((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001833e9c38 + 0x4727cece) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833e9b50 + 0xc305edeb));
  uRam00000001833e9b20 =
       uRam00000001833e9b20 ^ uRam00000001833e9cb8 ^ 0x13c71ae6edd42dc4 ^ 0xaa36543793c378bc;
  uRam00000001833e9a90 =
       (uRam00000001833e9a90 * -0x6f736f142da0b61b ^ uRam00000001833e9b20) +
       (uRam00000001833e9cb8 ^ 0x13c71ae6edd42dc4);
  uRam00000001833e9a60 = uRam00000001833e9a90 ^ uRam00000001833e9b20;
  uRam00000001833e9af8 = 0;
  uVar5 = ((uRam00000001833e9ce0 ^ 0x8422673e) +
          (ulonglong)((uint)uRam00000001833e9ce0 & 0x8422673e) * 2) * -uRam00000001833e9cc8;
  uVar5 = (uVar5 | uRam00000001833e9b78) + (uVar5 & uRam00000001833e9b78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001833e9bf8 =
       func_0x00018f0ad760((uVar5 | 0x8422673e) + (ulonglong)((uint)uVar5 & 0x8422673e));
  uVar5 = (uRam00000001833e9bf8 ^ 0x441b) << 0x32 | (uRam00000001833e9bf8 ^ 0x441b) >> 0xe;
  uRam00000001833e9cf0 = uRam00000001833e9c18 ^ uVar5 ^ 0x441b;
  uRam00000001833e9968 = (uRam00000001833e9968 ^ uVar5) + 0x441b ^ 0xcec8caab2146337e;
  uRam00000001833e9aa8 = (uRam00000001833e9aa8 * -0x404699f422a90a8f ^ uRam00000001833e9968) + uVar5
  ;
  uRam00000001833e9a78 = uRam00000001833e9aa8 ^ uRam00000001833e9968;
  auVar7._8_8_ = _UNK_18280e728;
  auVar7._0_8_ = uVar4 ^ 0x84222325;
  uRam00000001833e9b78 = 0x441b;
  auVar8 = pshufb(auVar7 ^ _UNK_18280e730,auVar8);
  uVar9 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar9 + lRam00000001833e9c00;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam00000001833e9a90 ^ uVar9;
  }
  uRam00000001833e9928 = func_0x00018f0ad760(SUB161(auVar7 ^ _UNK_18280e730,5) ^ uVar5);
  uRam00000001833e9b60 = uVar4 ^ 0x441b;
  uRam00000001833e9a00 =
       (uRam00000001833e9a00 ^ uRam00000001833e9928) + uRam00000001833e9b60 ^ 0x33a52bc5bd1ca119;
  uRam00000001833e9aa8 =
       (uRam00000001833e9aa8 * -0x16f556174e7b982d ^ uRam00000001833e9a00) + uRam00000001833e9928;
  uRam00000001833e9be0 = uRam00000001833e9aa8 ^ uRam00000001833e9a00;
  uRam00000001833e99d8 = uRam00000001833e9a08 ^ uRam00000001833e9b60;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x70fd,0x13e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0a8e96 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18280cce8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; Cx (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18f0ad7f0, runtime 6ffff6cbd7f0) =====

void FUN_18f0ad7f0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018f0ad82c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18280e870 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/be; Cy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18f0ae6e0, runtime 6ffff6cbe6e0) =====

void FUN_18f0ae6e0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0ae75d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18280edb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; Cz (IJ)I (handler @ image 18f0b11a0, runtime 6ffff6cc11a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18f0b11a0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uRam00000001833ea310 = func_0x00018f0bc9a0(lRam00000001833ea0e8 + 0x674396f3391d472aU ^ 0x55);
  uVar3 = ((uRam00000001833ea310 & 0x3ffffffff) << 0x1d | uRam00000001833ea310 >> 0x23) *
          -0x5689f594bc1e9705;
  uRam00000001833ea458 = (uRam00000001833ea458 ^ uVar3) + 0xefbbed9febf9ff6f ^ 0x7094f0b73ffc44c8;
  uRam00000001833ea250 = (uRam00000001833ea250 * -0x7b40a7fbcc1ad2d ^ uRam00000001833ea458) + uVar3;
  uRam00000001833e9f58 = uRam00000001833ea250 ^ uRam00000001833ea458;
  uRam00000001833ea420 = 0xefbbed9febf9ff6f;
  uVar3 = (~uRam00000001833ea0b8 + 0xb2f3d8d3514607cd) *
          ((uRam00000001833e9f28 ^ 0x5f866152827c6064) +
          (uRam00000001833e9f28 & 0x5f866152827c6064) * 2);
  uVar3 = (uVar3 | uRam00000001833e9f68) + (uVar3 & uRam00000001833e9f68);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea3c0 =
       func_0x00018f0bc9a0((uVar3 | 0xed75b981d33a67a8) + (uVar3 & 0xed75b981d33a67a8));
  uVar3 = uRam00000001833ea3c0 << 0x3d | uRam00000001833ea3c0 >> 3;
  uRam00000001833e9d30 = (uRam00000001833e9d30 ^ uVar3) + 0xed75b9815718448d ^ 0x80e9ca6541133949;
  uRam00000001833ea050 = (uRam00000001833ea050 * -0x3de26c988c851e47 ^ uRam00000001833e9d30) + uVar3
  ;
  uRam00000001833e9d80 = uRam00000001833ea050 ^ uRam00000001833e9d30;
  uRam00000001833ea360 = 0xed75b9815718448d;
  uVar3 = (uRam00000001833ea4a0 ^ _UNK_182811b10) + uRam00000001833ea430 + 0x84222325;
  uVar5 = (uRam00000001833ea430 ^ _UNK_182811b18) + uRam00000001833ea4a0 + 0xeec2ef2cf4d8c7a4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea4a0 ^ _UNK_182811b10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833ea430 ^ _UNK_182811b18;
  uRam00000001833e9d20 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833ea4a0 + 0xeec2ef2cf4d8c7a4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea430 + 0x84222325));
  uVar3 = uRam00000001833e9d20 >> 1 | uRam00000001833e9d20;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001833e9d20;
  uRam00000001833ea270 = (uRam00000001833ea270 ^ uVar3) + 0x113d10d30b27385c ^ 0xd58be4b423349dcc;
  uRam00000001833e9e48 = (uRam00000001833e9e48 * 0x51056a6a02b14bf ^ uRam00000001833ea270) + uVar3;
  uRam00000001833e9f68 = uRam00000001833e9e48 ^ uRam00000001833ea270;
  uRam00000001833ea448 = 0x113d10d30b27385c;
  uVar3 = (~uRam00000001833ea3d8 + 0x113d10d30b27385d) *
          ((uRam00000001833e9f38 ^ 0xeec2ef2c70fb6486) +
          (uRam00000001833e9f38 & 0x6ec2ef2c70fb6486) * 2);
  uVar3 = (uVar3 | uRam00000001833ea4c8) + (uVar3 & uRam00000001833ea4c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea480 =
       func_0x00018f0bc9a0((uVar3 | 0xffffffff7bdc5cda) + (uVar3 & 0xffffffff7bdc5cda));
  uVar3 = (uRam00000001833ea480 << 0x3d | uRam00000001833ea480 >> 3) * -0x2d7e1ecfa9758bdf;
  uRam00000001833e9fb8 = uRam00000001833e9e08 ^ uVar3 ^ 0x7fff;
  uRam00000001833e9e80 = (uRam00000001833e9e80 ^ uVar3) + 0x7fff ^ 0x30f1dc7061f8149d;
  uRam00000001833ea168 = (uRam00000001833ea168 * -0x2c1d871361f4147f ^ uRam00000001833e9e80) + uVar3
  ;
  uRam00000001833ea3e8 = uRam00000001833ea168 ^ uRam00000001833e9e80;
  uRam00000001833ea4d8 = 0x7fff;
  uRam00000001833ea3c8 = func_0x00018f0bc9a0(uRam00000001833ea030 + 0xc9cedb54917418c8 ^ 0xcf);
  uRam00000001833e9db0 =
       (uRam00000001833e9db0 ^ uRam00000001833ea3c8) + 0xb6136b34d7b40a4e ^ 0xa1b3cc95d0b07a0b;
  uRam00000001833ea3c8 =
       (uRam00000001833ea3c8 * 0x55c159f40ca5607d ^ uRam00000001833e9db0) + uRam00000001833ea3c8;
  uRam00000001833ea410 = uRam00000001833ea3c8 ^ uRam00000001833e9db0;
  uRam00000001833e9f20 = 0xb6136b34d7b40a4e;
  uVar3 = (~uRam00000001833ea120 + 0x49ec94cb284bf5b3) *
          ((uRam00000001833ea2d8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833ea2d8 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam00000001833e9e30) + (uVar3 & uRam00000001833e9e30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833e9f80 =
       func_0x00018f0bc9a0((uVar3 | 0x49ec94cbac69a968) + (uVar3 & 0x49ec94cbac69a968));
  uRam00000001833e9e50 = uRam00000001833ea068 ^ uRam00000001833e9f80 ^ 0x49ec94cb284c75b1;
  uRam00000001833e9e88 =
       (uRam00000001833e9e88 ^ uRam00000001833e9f80) + 0x49ec94cb284c75b1 ^ 0x17229f4bc2751320;
  uRam00000001833ea1c0 =
       (uRam00000001833ea1c0 * 0x31c46bd8ba8ea735 ^ uRam00000001833e9e88) + uRam00000001833e9f80;
  uRam00000001833ea0d0 = uRam00000001833ea1c0 ^ uRam00000001833e9e88;
  uRam00000001833ea390 = 0x49ec94cb284c75b1;
  uVar3 = (~uRam00000001833ea228 + 0x6f2959670cea1a30) *
          ((uRam00000001833ea1a0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833ea1a0 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001833ea2c8) + (uVar3 & uRam00000001833ea2c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea4b8 =
       func_0x00018f0bc9a0((uVar3 | 0x6f29596788c8390a) + (uVar3 & 0x6f29596788c8390a));
  uVar5 = uRam00000001833ea4b8 * 0x3780b1b7382afca1;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5) <<
          0x28 | uVar5 >> 0x18;
  uRam00000001833ea038 = (uRam00000001833ea038 ^ uVar3) + 0x90d6a698f315e5d1 ^ 0x6390de2a5ffb4301;
  uRam00000001833ea328 = (uRam00000001833ea328 * 0x8ff72b442904b81 ^ uRam00000001833ea038) + uVar3;
  uRam00000001833ea400 = uRam00000001833ea328 ^ uRam00000001833ea038;
  uRam00000001833e9e80 = 0x90d6a698f315e5d1;
  uVar3 = (uRam00000001833ea3a8 ^ _UNK_182811b20) + uRam00000001833ea3f0 + 0x84225cda;
  uVar5 = (uRam00000001833ea3f0 ^ _UNK_182811b28) + uRam00000001833ea3a8 + 0x6f2959670cea1a2f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea3a8 ^ _UNK_182811b20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833ea3f0 ^ _UNK_182811b28;
  uRam00000001833ea0c0 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833ea3a8 + 0x6f2959670cea1a2f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea3f0 + 0x84225cda));
  uVar3 = (ulonglong)(~(uint)uRam00000001833ea0c0 & 0x7fff);
  uRam00000001833ea158 = uRam00000001833e9e70 ^ uVar3 ^ 0x6f2959670cea9a2e;
  uRam00000001833ea070 = (uRam00000001833ea070 ^ uVar3) + 0x6f2959670cea9a2e ^ 0x32e2c2331c49bd24;
  uRam00000001833ea490 = (uRam00000001833ea490 * -0x310bb054cbe2f7d9 ^ uRam00000001833ea070) + uVar3
  ;
  uRam00000001833ea1e0 = uRam00000001833ea490 ^ uRam00000001833ea070;
  uRam00000001833ea170 = 0x6f2959670cea9a2e;
  uVar3 = (~uRam00000001833e9da0 + 0x90d6a698f315e5d2) *
          ((uRam00000001833e9f58 ^ 0x6f29596788c8b90b) +
          (uRam00000001833e9f58 & 0x6f29596788c8b90b) * 2);
  uVar3 = (uVar3 | uRam00000001833ea1f0) + (uVar3 & uRam00000001833ea1f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea4c0 =
       func_0x00018f0bc9a0((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar3 = (uRam00000001833ea4c0 ^ 0x722b4a9780000000) & 0xffffffff80000000;
  uRam00000001833ea010 = uRam00000001833ea128 ^ uVar3 ^ 0x7fff;
  uRam00000001833ea438 = (uRam00000001833ea438 ^ uVar3) + 0x7fff ^ 0x397dafb755a69bf8;
  uRam00000001833ea4f8 = (uRam00000001833ea4f8 * 0x5b1134299ab300f ^ uRam00000001833ea438) + uVar3;
  uRam00000001833e9e30 = uRam00000001833ea4f8 ^ uRam00000001833ea438;
  uRam00000001833e9f80 = 0x7fff;
  uRam00000001833e9d90 = func_0x00018f0bc9a0(lRam00000001833e9df0 + 0x128736283cabbcfdU ^ 8);
  uVar5 = _UNK_182811b38;
  uVar3 = _UNK_182811b30;
  uVar2 = uRam00000001833e9d90 & 0xfffffffff8000000;
  uRam00000001833ea0c8 = uRam00000001833e9d90 ^ uVar2 ^ 0xdd31a721431243fc;
  uRam00000001833e9eb8 = (uRam00000001833e9eb8 ^ uVar2) + 0xdd31a721431243fc ^ 0x999ace483b596f2e;
  uRam00000001833ea090 = (uRam00000001833ea090 * -0xc4e8d15b0cfbb6b ^ uRam00000001833e9eb8) + uVar2;
  uRam00000001833e9f58 = uRam00000001833ea090 ^ uRam00000001833e9eb8;
  uRam00000001833ea1d0 = 0xdd31a721431243fc;
  uVar2 = (uRam00000001833ea008 ^ _UNK_182811b30) + uRam00000001833e9e38 + 0xefbbed9f6fdbdc4a;
  uVar6 = (uRam00000001833e9e38 ^ _UNK_182811b38) + uRam00000001833ea008 + 0xed75b9815718448d;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833ea008 ^ _UNK_182811b30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833e9e38 ^ _UNK_182811b38;
  uRam00000001833ea3c8 =
       func_0x00018f0bc9a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001833ea008 + 0xed75b9815718448d) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001833e9e38 + 0xefbbed9f6fdbdc4a));
  uRam00000001833e9e98 =
       (uRam00000001833e9e98 ^ uRam00000001833ea4c8) + 0x2ce541ebce1bbe2 ^ 0xe939ff964db68c35;
  uRam00000001833ea4c0 =
       (uRam00000001833ea4c0 * 0x631a277777885c97 ^ uRam00000001833e9e98) + uRam00000001833ea4c8;
  uRam00000001833e9f60 = uRam00000001833ea4c0 ^ uRam00000001833e9e98;
  uRam00000001833e9d70 = 0x2ce541ebce1bbe2;
  uVar2 = (uRam00000001833e9e80 ^ uVar3) + uRam00000001833ea128 + 0xefbbed9f6fdbdc4a;
  uVar6 = (uRam00000001833ea128 ^ uVar5) + uRam00000001833e9e80 + 0xed75b9815718448d;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833e9e80 ^ uVar3;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833ea128 ^ uVar5;
  uRam00000001833e9e78 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833e9e80 + 0xed75b9815718448d) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833ea128 + 0xefbbed9f6fdbdc4a));
  uVar3 = uRam00000001833e9e78 >> 1 | uRam00000001833e9e78;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ~((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
           ^ uRam00000001833e9e78) & 0xefbbed9febf9ff6f;
  uRam00000001833e9db0 = (uRam00000001833e9db0 ^ uVar3) + 0xed31a9814318440d ^ 0xae97e30f7c9c6bdc;
  uRam00000001833ea208 = (uRam00000001833ea208 * -0x24e8c840f67e11df ^ uRam00000001833e9db0) + uVar3
  ;
  uRam00000001833ea0f8 = uRam00000001833ea208 ^ uRam00000001833e9db0;
  uRam00000001833e9e00 = 0xed31a9814318440d;
  lRam00000001833ea048 = func_0x00018f0bc9a0(uRam00000001833ea020 + 0x1c0f5a5253064cc7 ^ 0xbf);
  uVar3 = lRam00000001833ea048 * -0x58a9c870de506417;
  uRam00000001833ea258 = uRam00000001833ea3e8 ^ uVar3 ^ 0xdd31a721431243fc;
  uRam00000001833ea068 = (uRam00000001833ea068 ^ uVar3) + 0xdd31a721431243fc ^ 0x39049865bacb925b;
  uRam00000001833e9e88 = (uRam00000001833e9e88 * 0x5ee90ee08a1738b3 ^ uRam00000001833ea068) + uVar3;
  uRam00000001833e9da0 = uRam00000001833e9e88 ^ uRam00000001833ea068;
  uRam00000001833ea428 = uRam00000001833ea160 ^ 0xdd31a721431243fc;
  uRam00000001833ea2b0 = 0xdd31a721431243fc;
  uRam00000001833e9dd8 = func_0x00018f0bc9a0(uRam00000001833e9d10 ^ 0x22ff7be5001d4d);
  uRam00000001833ea270 = uRam00000001833ea270 ^ uRam00000001833e9dd8 ^ 0x3f62a48cced94847;
  uRam00000001833ea138 =
       (uRam00000001833ea138 * -0x7964cfaad6f087ef ^ uRam00000001833ea270) + uRam00000001833e9dd8;
  uRam00000001833e9d30 = uRam00000001833ea138 ^ uRam00000001833ea270;
  uRam00000001833e9d58 = 0;
  uVar3 = (uRam00000001833ea220 ^ 0x84225cda) + uRam00000001833ea388 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea220 ^ 0x84225cda;
  uVar5 = ((uRam00000001833ea388 + uRam00000001833ea220) * 0x2000 |
          uRam00000001833ea388 + uRam00000001833ea220 >> 0x33) ^ uRam00000001833ea388;
  uRam00000001833ea080 = uRam00000001833e9dd8;
  uRam00000001833ea318 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001833ea220 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea388 + 0x84225cda));
  uVar3 = (ulonglong)(~(uint)uRam00000001833ea318 & 0x7fff);
  uRam00000001833ea108 = uRam00000001833e9e68 ^ uVar3 ^ 0x7fff;
  uRam00000001833e9e78 = (uRam00000001833e9e78 ^ uVar3) + 0x7fff ^ 0xeb81cbf167b483f5;
  uRam00000001833ea100 = (uRam00000001833ea100 * -0xef3f696ede5b16d ^ uRam00000001833e9e78) + uVar3;
  uRam00000001833ea2c8 = uRam00000001833ea100 ^ uRam00000001833e9e78;
  uRam00000001833ea308 = 0x7fff;
  uRam00000001833ea398 = func_0x00018f0bc9a0(uRam00000001833e9d78 + 0xe01ebb6f6d0de40f ^ 0x99);
  uVar3 = ~(uRam00000001833ea398 << 0x21 | uRam00000001833ea398 >> 0x1f);
  uRam00000001833ea4b8 = (uRam00000001833ea4b8 ^ uVar3) + 0x1044126014060090 ^ 0xaf194634682bb68c;
  uRam00000001833ea188 = (uRam00000001833ea188 * -0x4754c460c331087f ^ uRam00000001833ea4b8) + uVar3
  ;
  uRam00000001833e9d08 = uRam00000001833ea188 ^ uRam00000001833ea4b8;
  uRam00000001833ea0d8 = 0x1044126014060090;
  uVar3 = (~uRam00000001833e9e40 + 0x1044126014060091) *
          ((uRam00000001833e9f88 ^ 0xefbbed9f6fdbdc4a) +
          (uRam00000001833e9f88 & 0x6fbbed9f6fdbdc4a) * 2);
  uVar3 = (uVar3 | uRam00000001833ea460) + (uVar3 & uRam00000001833ea460);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea148 =
       func_0x00018f0bc9a0((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uRam00000001833e9dd8 = uRam00000001833e9dd8 ^ uRam00000001833ea148 ^ 0x9dceee51c448913a;
  uRam00000001833ea370 =
       (uRam00000001833ea370 * 0xcf04c92e34d91f3 ^ uRam00000001833e9dd8) + uRam00000001833ea148;
  uRam00000001833ea0b8 = uRam00000001833ea370 ^ uRam00000001833e9dd8;
  uRam00000001833ea2a0 = 0;
  uVar3 = (uRam00000001833ea270 ^ 0x84225cda) + uRam00000001833ea108 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea270 ^ 0x84225cda;
  uVar5 = ((uRam00000001833ea108 + uRam00000001833ea270) * 0x2000 |
          uRam00000001833ea108 + uRam00000001833ea270 >> 0x33) ^ uRam00000001833ea108;
  uRam00000001833ea180 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001833ea270 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea108 + 0x84225cda));
  uVar3 = (uRam00000001833ea180 ^ 0x7fff) & 0x7fffffffffffffff;
  uRam00000001833e9dd8 = uRam00000001833e9e18 ^ uVar3 ^ 0x7fff;
  uRam00000001833ea028 = (uRam00000001833ea028 ^ uVar3) + 0x7fff ^ 0x9d15fca185af29bf;
  uRam00000001833ea150 = (uRam00000001833ea150 * 0x48440c20502f0cf5 ^ uRam00000001833ea028) + uVar3;
  uRam00000001833ea200 = uRam00000001833ea150 ^ uRam00000001833ea028;
  uRam00000001833ea178 = 0x7fff;
  uVar3 = (uRam00000001833ea2c8 ^ _UNK_182811b40) + uRam00000001833ea0d0 + 0xc3228406e653c40a;
  uVar5 = (uRam00000001833ea0d0 ^ _UNK_182811b48) + uRam00000001833ea2c8 + 0xc32284066271e72f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea2c8 ^ _UNK_182811b40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833ea0d0 ^ _UNK_182811b48;
  uRam00000001833ea380 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833ea2c8 + 0xc32284066271e72f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833ea0d0 + 0xc3228406e653c40a));
  uRam00000001833e9ea0 = uRam00000001833e9ea0 ^ uRam00000001833ea430 ^ 0x818338fae8a9a158;
  uRam00000001833ea110 =
       (uRam00000001833ea110 * -0x33415061cee9dc71 ^ uRam00000001833e9ea0) + uRam00000001833ea430;
  uRam00000001833ea438 = uRam00000001833ea110 ^ uRam00000001833e9ea0;
  uRam00000001833ea4d8 = 0;
  uVar3 = (uRam00000001833ea110 ^ 0x84225cda) + uRam00000001833ea150 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea110 ^ 0x84225cda;
  uVar5 = ((uRam00000001833ea150 + uRam00000001833ea110) * 0x2000 |
          uRam00000001833ea150 + uRam00000001833ea110 >> 0x33) ^ uRam00000001833ea150;
  uRam00000001833e9ef8 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001833ea110 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea150 + 0x84225cda));
  uRam00000001833ea2b0 = uRam00000001833e9d10 ^ uRam00000001833e9ef8 ^ 0x7fff;
  uRam00000001833ea140 = (uRam00000001833ea140 ^ uRam00000001833e9ef8) + 0x7fff ^ 0x892c5e998f0cc18a
  ;
  uRam00000001833e9ec8 =
       (uRam00000001833e9ec8 * 0x378645a49a765157 ^ uRam00000001833ea140) + uRam00000001833e9ef8;
  uRam00000001833ea470 = uRam00000001833e9ec8 ^ uRam00000001833ea140;
  uRam00000001833ea3c8 = 0x7fff;
  uVar3 = (uRam00000001833e9f68 ^ _UNK_182811b50) + uRam00000001833e9e70 + 0xd1ffe48d;
  uVar5 = (uRam00000001833e9e70 ^ _UNK_182811b58) + uRam00000001833e9f68 + 0x1935a5d1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833e9f68 ^ _UNK_182811b50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9e70 ^ _UNK_182811b58;
  param_3 = param_4 & 0x7fff ^ param_3;
  uRam00000001833ea3d0 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833e9f68 + 0x1935a5d1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833e9e70 + 0xd1ffe48d));
  uRam00000001833e9e30 =
       (uRam00000001833e9e30 ^ uRam00000001833ea3d0) + 0x5dfde7f9 ^ 0xd2c8418611fad25f;
  uRam00000001833e9fb8 =
       (uRam00000001833e9fb8 * 0x622f7f66ffd14cf ^ uRam00000001833e9e30) + uRam00000001833ea3d0;
  uRam00000001833e9e08 = uRam00000001833e9fb8 ^ uRam00000001833e9e30;
  uRam00000001833ea4b8 = 0x5dfde7f9;
  uVar3 = (~uRam00000001833ea358 + 0x3d324af6) *
          ((uRam00000001833e9de8 ^ 0xeb2fdaac) +
          (ulonglong)((uint)uRam00000001833e9de8 & 0xeb2fdaac) * 2);
  uVar3 = (uVar3 | uRam00000001833ea000) + (uVar3 & uRam00000001833ea000);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea1f0 =
       func_0x00018f0bc9a0((uVar3 | 0xd61d9059) + (ulonglong)((uint)uVar3 & 0xd61d9059));
  uRam00000001833ea308 =
       (uRam00000001833ea308 ^ uRam00000001833ea0a0) + 0x523fb37c ^ 0xf02df620d4fb2af2;
  uRam00000001833e9e48 =
       (uRam00000001833e9e48 * 0x4977e0af1f899c5 ^ uRam00000001833ea308) + uRam00000001833ea0a0;
  uRam00000001833ea290 = uRam00000001833e9e48 ^ uRam00000001833ea308;
  uRam00000001833e9f60 = 0x523fb37c;
  uRam00000001833ea328 = func_0x00018f0bc9a0(uRam00000001833ea2c8 ^ 0xff76003123001e90);
  uRam00000001833ea1d0 = uRam00000001833ea190 * 0x621a3e38160e52ed;
  uRam00000001833ea410 = uRam00000001833ea410 - 0xd503ddc0 ^ 0xb3ee6f7d9ea975c4;
  uRam00000001833ea190 = uRam00000001833ea1d0 ^ uRam00000001833ea410;
  uRam00000001833e9f28 = 0x2afc2240;
  uRam00000001833e9d80 = func_0x00018f0bc9a0(uRam00000001833ea148 ^ 0xff870031540020bb);
  uVar3 = uRam00000001833e9d80 >> 1 | uRam00000001833e9d80;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uRam00000001833e9d80 ^ 0x4549) & 0x7fffffffffffffff;
  uRam00000001833e9d88 = uRam00000001833e9d70 ^ uVar3 ^ 0xd5042309;
  uRam00000001833e9d40 = (uRam00000001833e9d40 ^ uVar3) + 0xd5042309 ^ 0x981316ecb25d05a9;
  uRam00000001833e9e50 = (uRam00000001833e9e50 * -0x661cdc59574c22df ^ uRam00000001833e9d40) + uVar3
  ;
  uRam00000001833ea178 = uRam00000001833e9e50 ^ uRam00000001833e9d40;
  uRam00000001833e9eb8 = uRam00000001833ea338 ^ 0xd5042309;
  uRam00000001833ea340 = 0xd5042309;
  uVar3 = (~uRam00000001833ea020 + 0x9baefa9f) *
          ((uRam00000001833ea178 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833ea178 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001833ea280) + (uVar3 & uRam00000001833ea280);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea4c8 =
       func_0x00018f0bc9a0((uVar3 | 0x1f8cd9bb) + (ulonglong)((uint)uVar3 & 0x1f8cd9bb));
  uRam00000001833ea2d0 =
       (uRam00000001833ea2d0 ^ uRam00000001833ea4c8) - 0x9baefa9e ^ 0x4df86e6a3366aa3f;
  uRam00000001833ea428 =
       (uRam00000001833ea428 * -0x487b0d3d8f404e8d ^ uRam00000001833ea2d0) + uRam00000001833ea4c8;
  uRam00000001833ea080 = uRam00000001833ea428 ^ uRam00000001833ea2d0;
  uRam00000001833e9d70 = 0x64510562;
  uVar3 = (uRam00000001833e9fe0 ^ _UNK_182811b60) + uRam00000001833ea398 + 0x8422666c;
  uVar5 = (uRam00000001833ea398 ^ _UNK_182811b68) + uRam00000001833e9fe0 + 0x9baefa9e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833e9fe0 ^ _UNK_182811b60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833ea398 ^ _UNK_182811b68;
  uRam00000001833ea1b0 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833e9fe0 + 0x9baefa9e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea398 + 0x8422666c));
  uVar3 = (uRam00000001833ea1b0 ^ 0x9baeffdf) -
          ((uRam00000001833ea1b0 ^ 0x9baeffdf) >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam00000001833ea1b0 ^ 0x541 ^
          (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3;
  uRam00000001833e9d40 = uRam00000001833ea450 ^ uVar3 ^ 0x9baf3fe7;
  uRam00000001833e9f90 = (uRam00000001833e9f90 ^ uVar3) + 0x9baf3fe7 ^ 0x2b319972d2d6a44e;
  uRam00000001833ea0f0 = (uRam00000001833ea0f0 * -0x4f3ecc2e36e27bd3 ^ uRam00000001833e9f90) + uVar3
  ;
  uRam00000001833e9e30 = uRam00000001833ea0f0 ^ uRam00000001833e9f90;
  uRam00000001833ea420 = 0x9baf3fe7;
  uRam00000001833ea1d0 = func_0x00018f0bc9a0(uRam00000001833ea468 ^ 0x70046a0005b2f);
  uVar3 = (ulonglong)((uint)uRam00000001833ea1d0 & 0x9baf3fe7) ^ 0x9baf3fe7;
  uRam00000001833ea390 = uRam00000001833e9d98 ^ uVar3 ^ 0x100004549;
  uRam00000001833ea4a0 = (uRam00000001833ea4a0 ^ uVar3) + 0x100004549 ^ 0x21a192b6218af310;
  uRam00000001833e9d80 = (uRam00000001833e9d80 * -0x62ed8035fdba8b5 ^ uRam00000001833ea4a0) + uVar3;
  uRam00000001833e9f18 = uRam00000001833e9d80 ^ uRam00000001833ea4a0;
  uRam00000001833e9e40 = 0x4549;
  uVar3 = (uRam00000001833ea0d8 ^ _UNK_182811b70) + uRam00000001833e9f50 + 0x84222325;
  uVar5 = (uRam00000001833e9f50 ^ _UNK_182811b78) + uRam00000001833ea0d8 + 0xf069a320;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea0d8 ^ _UNK_182811b70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833e9f50 ^ _UNK_182811b78;
  uRam00000001833ea288 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833ea0d8 + 0xf069a320) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833e9f50 + 0x84222325));
  uRam00000001833e9fb0 =
       (uRam00000001833e9fb0 ^ uRam00000001833ea288 >> 0xb) - 0xf069a320 ^ 0x3c3a0e56dce20e94;
  uRam00000001833e9e08 =
       (uRam00000001833e9e08 * 0x3e3366ff5dd4ed65 ^ uRam00000001833e9fb0) +
       (uRam00000001833ea288 >> 0xb);
  uRam00000001833ea330 = uRam00000001833e9e08 ^ uRam00000001833e9fb0;
  uRam00000001833e9e30 = 0xf965ce0;
  uRam00000001833e9e30 = func_0x00018f0bc9a0(uRam00000001833ea1e8 ^ 0x44fff3bc00342f);
  uVar3 = (uRam00000001833e9e30 ^ 0xf069e769) & 0x3fffffffffffff;
  uRam00000001833e9f78 = uRam00000001833ea030 ^ uVar3 ^ 0xf069e869;
  uRam00000001833ea490 = (uRam00000001833ea490 ^ uVar3) + 0xf069e869 ^ 0x25ede182a58296a6;
  uRam00000001833ea438 = (uRam00000001833ea438 * -0x2e91add2af1beea5 ^ uRam00000001833ea490) + uVar3
  ;
  uRam00000001833ea3e8 = uRam00000001833ea438 ^ uRam00000001833ea490;
  uRam00000001833e9f90 = 0xf069e869;
  uVar3 = (~uRam00000001833e9e18 + 0xf965ce1) *
          ((uRam00000001833e9db0 ^ 0x744bcb4c) +
          (ulonglong)((uint)uRam00000001833e9db0 & 0x744bcb4c) * 2);
  uVar3 = (uVar3 | uRam00000001833e9f18) + (uVar3 & uRam00000001833e9f18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea310 =
       func_0x00018f0bc9a0((uVar3 | 0x7bdd97ac) + (ulonglong)((uint)uVar3 & 0x7bdd97ac));
  uVar3 = (uRam00000001833ea310 ^ 0xfffffce9) << 0x1b | uRam00000001833ea310 >> 0x25;
  uRam00000001833ea4a0 = uRam00000001833ea080 ^ uVar3 ^ 0x100004549;
  uRam00000001833e9fd0 = (uRam00000001833e9fd0 ^ uVar3) + 0x100004549 ^ 0x766365a9442191d7;
  uRam00000001833ea168 = (uRam00000001833ea168 * 0x12cd2faa9757f08f ^ uRam00000001833e9fd0) + uVar3;
  uRam00000001833ea418 = uRam00000001833ea168 ^ uRam00000001833e9fd0;
  uRam00000001833ea218 = 0x4549;
  uRam00000001833ea150 = func_0x00018f0bc9a0(uRam00000001833e9f58 + 0x3500849fffdfff ^ 0xa9);
  uVar3 = uRam00000001833ea150 - (uRam00000001833ea150 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001833ea150) * -0x24241216209d8d79;
  uRam00000001833ea0f0 = uRam00000001833ea378 ^ uVar3 ^ 0xb03d9b75;
  uRam00000001833e9f58 = (uRam00000001833e9f58 ^ uVar3) + 0xb03d9b75 ^ 0x3578192d9ed52e17;
  uRam00000001833ea268 = (uRam00000001833ea268 * 0x1e938f1183a674af ^ uRam00000001833e9f58) + uVar3;
  uRam00000001833ea008 = uRam00000001833ea268 ^ uRam00000001833e9f58;
  uRam00000001833ea478 = 0xb03d9b75;
  uVar3 = (~uRam00000001833e9d08 + 0x523fb37d) *
          ((uRam00000001833e9f50 ^ 0xd9dfc4dc) +
          (ulonglong)((uint)uRam00000001833e9f50 & 0xd9dfc4dc) * 2);
  uVar3 = (uVar3 | uRam00000001833e9ed0) + (uVar3 & uRam00000001833e9ed0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833e9fa8 =
       func_0x00018f0bc9a0((uVar3 | 0x8be077a0) + (ulonglong)((uint)uVar3 & 0x8be077a0));
  uVar3 = uRam00000001833e9fa8 << 10 | uRam00000001833e9fa8 >> 0x36;
  uRam00000001833ea0f8 = (uRam00000001833ea0f8 ^ uVar3) + 0xfc25485 ^ 0x92b06431eed39fd4;
  uRam00000001833ea270 = (uRam00000001833ea270 * -0x1cde9b2a880d9b39 ^ uRam00000001833ea0f8) + uVar3
  ;
  uRam00000001833e9f60 = uRam00000001833ea270 ^ uRam00000001833ea0f8;
  uRam00000001833ea268 = 0xfc25485;
  uVar3 = (~uRam00000001833e9ea0 + 0x523fb37d) *
          ((uRam00000001833e9e50 ^ 0xd9dfc4dc) +
          (ulonglong)((uint)uRam00000001833e9e50 & 0xd9dfc4dc) * 2);
  uVar3 = (uVar3 | uRam00000001833ea058) + (uVar3 & uRam00000001833ea058);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea220 =
       func_0x00018f0bc9a0((uVar3 | 0x8be077a0) + (ulonglong)((uint)uVar3 & 0x8be077a0));
  uRam00000001833ea390 =
       (uRam00000001833ea390 ^ uRam00000001833ea220 & 0x3fffffffffffff) + 0x503da378 ^
       0x41715339b76f0fb4;
  uRam00000001833e9f38 =
       (uRam00000001833e9f38 * 0x31600572f37bf4f3 ^ uRam00000001833ea390) +
       (uRam00000001833ea220 & 0x3fffffffffffff);
  uRam00000001833ea1f0 = uRam00000001833e9f38 ^ uRam00000001833ea390;
  uRam00000001833e9e88 = 0x503da378;
  uRam00000001833e9f78 = func_0x00018f0bc9a0(uRam00000001833e9d98 + 0x20ff7bdb0021ff ^ 0x5c);
  uRam00000001833ea1d0 = (ulonglong)(~(uint)uRam00000001833e9f78 & 0xb03d9b75) ^ 0xb03d9b75;
  uRam00000001833ea3e8 = uRam00000001833ea3e8 ^ uRam00000001833ea1d0 ^ 0x5c59b1401ca1103b;
  uRam00000001833e9e90 =
       (uRam00000001833e9e90 * -0xa2b60d43451783b ^ uRam00000001833ea3e8) + uRam00000001833ea1d0;
  uRam00000001833e9f88 = uRam00000001833e9e90 ^ uRam00000001833ea3e8;
  uRam00000001833ea1b8 = 0;
  uVar3 = (uRam00000001833ea180 ^ 0x8422666c) + uRam00000001833ea3d8 + 0x8422666c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea180 ^ 0x8422666c;
  uVar5 = ((uRam00000001833ea3d8 + uRam00000001833ea180) * 0x2000 |
          uRam00000001833ea3d8 + uRam00000001833ea180 >> 0x33) ^ uRam00000001833ea3d8;
  uRam00000001833ea000 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001833ea180 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea3d8 + 0x8422666c));
  uVar3 = uRam00000001833ea000 & 0xfffffffffffffe00 ^ 0x4549;
  uRam00000001833ea3e8 = uRam00000001833e9f20 ^ uVar3 ^ 0x4549;
  uRam00000001833ea4a0 = (uRam00000001833ea4a0 ^ uVar3) + 0x4549 ^ 0xc9a38dfc6dadb8f9;
  uRam00000001833e9f00 = (uRam00000001833e9f00 * 0x214a19d32f90d21b ^ uRam00000001833ea4a0) + uVar3;
  uRam00000001833ea098 = uRam00000001833e9f00 ^ uRam00000001833ea4a0;
  uRam00000001833ea190 = 0x4549;
  uVar3 = (uRam00000001833ea218 ^ _UNK_182811b80) + uRam00000001833ea030 + 0xd9dfc4dc;
  uVar5 = (uRam00000001833ea030 ^ _UNK_182811b88) + uRam00000001833ea218 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea218 ^ _UNK_182811b80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833ea030 ^ _UNK_182811b88;
  uRam00000001833e9d40 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833ea218 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea030 + 0xd9dfc4dc));
  uVar3 = (uRam00000001833e9d40 ^ 0x5dfde7f9) & 0x7fffffffffffffff;
  uRam00000001833ea110 = (uRam00000001833ea110 ^ uVar3) + 0xa2021806 ^ 0x95bde865f672ecf6;
  uRam00000001833ea1e8 = (uRam00000001833ea1e8 * -0x68b25fe06cbf32b3 ^ uRam00000001833ea110) + uVar3
  ;
  uRam00000001833ea028 = uRam00000001833ea1e8 ^ uRam00000001833ea110;
  uRam00000001833e9de8 = 0xa2021806;
  uRam00000001833e9f70 = func_0x00018f0bc9a0(uRam00000001833ea0b8 ^ 0x43ffc54a00a4cc);
  uVar3 = (uRam00000001833e9f70 & 0x7fffffffffffffff) >> 1 |
          uRam00000001833e9f70 & 0x7fffffffffffffff;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001833e9f70 & 0x7fffffffffffffff;
  uRam00000001833ea320 = uRam00000001833ea320 ^ uVar3 ^ 0xce2c4225b0f3381b;
  uRam00000001833ea088 = (uRam00000001833ea088 * 0x7774c648769c648d ^ uRam00000001833ea320) + uVar3;
  uRam00000001833ea208 = uRam00000001833ea088 ^ uRam00000001833ea320;
  uRam00000001833ea118 = 0;
  uRam00000001833ea180 = func_0x00018f0bc9a0(uRam00000001833e9db0 ^ 0x59ff7b93ffddb9);
  uVar3 = uRam00000001833ea180 ^ 0x4549;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  uRam00000001833e9fa8 =
       (uRam00000001833ea1f0 ^ uVar3 ^ 0x4549 ^ uVar3) + 0x4549 ^ 0x2c45239ce87def5d;
  uRam00000001833ea3a0 = (uRam00000001833ea3a0 * 0x79212bd520e6d819 ^ uRam00000001833e9fa8) + uVar3;
  uRam00000001833e9ed8 = uRam00000001833ea3a0 ^ uRam00000001833e9fa8;
  uRam00000001833ea4f8 = 0x4549;
  uVar3 = (uRam00000001833ea3f8 ^ _UNK_182811b90) + uRam00000001833ea110 + 0xd1ffe48d;
  uVar5 = (uRam00000001833ea110 ^ _UNK_182811b98) + uRam00000001833ea3f8 + 0x55ddc7a8;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833ea3f8 ^ _UNK_182811b90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833ea110 ^ _UNK_182811b98;
  uRam00000001833ea058 =
       func_0x00018f0bc9a0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833ea3f8 + 0x55ddc7a8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833ea110 + 0xd1ffe48d));
  uVar5 = uRam00000001833ea058 ^ 0x1ccd06b7e3c69e40;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar5) *
          -0x1224101f25559b73;
  uRam00000001833e9fb0 = uRam00000001833e9fb0 ^ uVar3 ^ 0xe4e5c06cf3e83d84;
  uRam00000001833ea0f8 = (uRam00000001833ea0f8 * 0x51c972784ecb6903 ^ uRam00000001833e9fb0) + uVar3;
  uRam00000001833e9f00 = uRam00000001833ea0f8 ^ uRam00000001833e9fb0;
  uRam00000001833ea3e8 = 0;
  uVar3 = ((uRam00000001833ea128 ^ 0x8422666c) +
          (ulonglong)((uint)uRam00000001833ea128 & 0x8422666c) * 2) * -uRam00000001833ea008;
  uVar3 = (uVar3 | uRam00000001833e9d78) + (uVar3 & uRam00000001833e9d78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833ea448 =
       func_0x00018f0bc9a0((uVar3 | 0x8422666c) + (ulonglong)((uint)uVar3 & 0x8422666c));
  uVar3 = uRam00000001833ea448 << 0x17 | uRam00000001833ea448 >> 0x29;
  uRam00000001833ea4e0 = uRam00000001833ea340 ^ uVar3 ^ 0x4549;
  uRam00000001833ea0c8 = (uRam00000001833ea0c8 ^ uVar3) + 0x4549 ^ 0x8741dc189d91cb36;
  uRam00000001833e9e78 = (uRam00000001833e9e78 * -0x45a048df8b9e88e1 ^ uRam00000001833ea0c8) + uVar3
  ;
  uRam00000001833ea468 = uRam00000001833e9e78 ^ uRam00000001833ea0c8;
  uRam00000001833ea0d8 = 0x4549;
  uVar5 = (ulonglong)param_3;
  uVar3 = (~uRam00000001833e9ec0 + 0x454a) *
          ((uVar5 ^ 0x84222325 ^ uRam00000001833ea0e0) +
          (ulonglong)((uint)uRam00000001833ea0e0 & (uint)(uVar5 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | uRam00000001833ea2c0) + (uVar3 & uRam00000001833ea2c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833e9ed0 =
       func_0x00018f0bc9a0((uVar5 ^ 0x8422666c | uVar3) +
                           (ulonglong)((uint)(uVar5 ^ 0x8422666c) & (uint)uVar3));
  uVar3 = uRam00000001833e9ed0 >> 1 | uRam00000001833e9ed0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001833e9ed0;
  lVar4 = uVar5 - (param_3 & 0x4549) * 2;
  uRam00000001833ea440 = (uRam00000001833ea440 ^ uVar3) + lVar4 + 0x4549 ^ 0x4df6f17ed84ef01a;
  uRam00000001833e9fc8 = (uRam00000001833e9fc8 * -0x60b85991405aeb11 ^ uRam00000001833ea440) + uVar3
  ;
  uRam00000001833ea160 = uRam00000001833e9fc8 ^ uRam00000001833ea440;
  uRam00000001833e9d28 = lVar4 + 0x4549U & 0xffffffff;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x70fd,0x13e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0b3bf2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18280fcb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; _c58d6e7f14e64e674356b8505b28b354 ()V (handler @ image 18f0c0750, runtime 6ffff6cd0750) =====

void FUN_18f0c0750(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0c0838 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828132b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; bV (Lsixtwo/lC;)V (handler @ image 18f073060, runtime 6ffff6c83060) =====

void FUN_18f073060(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x70fd,0x13e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f073166 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182803e30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; dB (DDLsixtwo/mA;DD)Z (handler @ image 18f0e5b10, runtime 6ffff6cf5b10) =====

void FUN_18f0e5b10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x70fd,0x13e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0e5bd8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182818c60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; dk (DDLsixtwo/mA;)Z (handler @ image 18f0df030, runtime 6ffff6cef030) =====

void FUN_18f0df030(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x70fd,0x13e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0df0f7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1828169d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; dl (DDLsixtwo/mA;)V (handler @ image 18f0e5340, runtime 6ffff6cf5340) =====

void FUN_18f0e5340(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f0e537a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182818910 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/be; dm (III)Z (handler @ image 18f0e9aa0, runtime 6ffff6cf9aa0) =====

void FUN_18f0e9aa0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x70fd,0x13e);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018f0e9b9e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182819e40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/be; eK (C)Z (handler @ image 18f0f4080, runtime 6ffff6d04080) =====

void FUN_18f0f4080(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018f0f40a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18281cc40 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



