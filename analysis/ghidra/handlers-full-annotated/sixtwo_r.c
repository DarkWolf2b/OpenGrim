// ===== Lsixtwo/r; _52d2aac29e8b59f18d95bc9ab41f5ff7 ()V (handler @ image 19092c2e0, runtime 6ffff853c2e0) =====

void FUN_19092c2e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019092c3c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182db5a20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; bV (Lsixtwo/lC;)V (handler @ image 190902e80, runtime 6ffff8512e80) =====

void FUN_190902e80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2699,0x81);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190902f87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182da8cd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; dQ (Z)V (handler @ image 19091f160, runtime 6ffff852f160) =====

void FUN_19091f160(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2699,0x81);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019091f268 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182db1438 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; dR ()I (handler @ image 190941d40, runtime 6ffff8551d40) =====

void FUN_190941d40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2699,0x81);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190941dd6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182db7fe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; dS (Ljava/util/ArrayList;Lsixtwo/cw;)V (handler @ image 1909474b0, runtime 6ffff85574b0) =====

void FUN_1909474b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2699,0x81);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190947574 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dba0f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; dT (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 19094adc0, runtime 6ffff855adc0) =====

undefined8 FUN_19094adc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/r; dU ([B)Ljava/lang/String; (handler @ image 19094ae50, runtime 6ffff855ae50) =====

void FUN_19094ae50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00019094aef0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dbb270 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/r; dV (IJ)Ljava/lang/String; (handler @ image 190973e40, runtime 6ffff8583e40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190973e40(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = (uRam0000000183487ea8 ^ _UNK_182dc20c0) + uRam0000000183487e50 + 0x788e7f3ebceddff;
  uVar9 = (uRam0000000183487e50 ^ _UNK_182dc20c8) + uRam0000000183487ea8 + 0x414a7221227808d5;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487ea8 ^ _UNK_182dc20c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487e50 ^ _UNK_182dc20c8;
  uRam0000000183487c40 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183487ea8 + 0x414a7221227808d5) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183487e50 + 0x788e7f3ebceddff));
  uRam0000000183487d88 =
       (uRam0000000183487d88 ^ uRam0000000183487c40 & 0xfffffffffffffff8) + 0x47caf7f36ffcfedf ^
       0xf6723884b07a24e1;
  uRam0000000183487e68 =
       (uRam0000000183487e68 * 0xde03374fe736013 ^ uRam0000000183487d88) +
       (uRam0000000183487c40 & 0xfffffffffffffff8);
  uRam0000000183487bc0 = uRam0000000183487e68 ^ uRam0000000183487d88;
  uRam0000000183487bd8 = 0x47caf7f36ffcfedf;
  uVar6 = (~uRam0000000183487e08 + 0x995b188283b2e6e5) *
          ((uRam0000000183487d80 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183487d80 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183487d88) + (uVar6 & uRam0000000183487d88);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00019097ab40((uVar6 | 0x995b18820790c5c1) + (uVar6 & 0x995b18820790c5c1));
  uVar9 = uVar6 >> 1 | uVar6;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar6;
  uVar6 = uVar6 << 0x14 | uVar6 >> 0x2c;
  uRam0000000183487e58 = (uRam0000000183487e58 ^ uVar6) + 0x66a4e77d7c4d191c ^ 0x6f1f1440fde6e88a;
  uRam0000000183487eb0 = (uRam0000000183487eb0 * 0x7054efdbd1417d57 ^ uRam0000000183487e58) + uVar6;
  uRam0000000183487c80 = uRam0000000183487eb0 ^ uRam0000000183487e58;
  uRam0000000183487b48 = uRam0000000183487da8 ^ 0x66a4e77d7c4d191c;
  uRam0000000183487ee0 = 0x66a4e77d7c4d191c;
  uRam0000000183487ef8 = func_0x00019097ab40(uRam0000000183487c20 + 0x81a5a4fb15f76f96 ^ 0x2c);
  uRam0000000183487d20 = uRam0000000183487df0 ^ uRam0000000183487ef8 ^ 0x995b188283b366e3;
  uRam0000000183487b30 =
       (uRam0000000183487b30 ^ uRam0000000183487ef8) + 0x995b188283b366e3 ^ 0x6fe70deda6b130ad;
  uRam0000000183487e30 =
       (uRam0000000183487e30 * 0x68b0bd6cc66bcdcf ^ uRam0000000183487b30) + uRam0000000183487ef8;
  uRam0000000183487ec0 = uRam0000000183487e30 ^ uRam0000000183487b30;
  uRam0000000183487eb8 = 0x995b188283b366e3;
  uVar6 = (uRam0000000183487dd0 ^ _UNK_182dc20d0) + uRam0000000183487d28 + 0x84222325;
  uVar9 = (uRam0000000183487d28 ^ _UNK_182dc20d8) + uRam0000000183487dd0 + 0x183e3db8d994867d;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487dd0 ^ _UNK_182dc20d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487d28 ^ _UNK_182dc20d8;
  uRam0000000183487b80 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183487dd0 + 0x183e3db8d994867d) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183487d28 + 0x84222325));
  uRam0000000183487bd0 =
       (uRam0000000183487bd0 ^ uRam0000000183487b80) + 0xe7c1c247266b7983 ^ 0x8bfe37161de6beaf;
  uRam0000000183487c80 =
       (uRam0000000183487c80 * 0x3af6dcd8dc1ae8cd ^ uRam0000000183487bd0) + uRam0000000183487b80;
  uRam0000000183487cf0 = uRam0000000183487c80 ^ uRam0000000183487bd0;
  uRam0000000183487b30 = -0x183e3db8d994867d;
  uRam0000000183487cf8 = func_0x00019097ab40(uRam0000000183487b88 ^ 0x98c605a45d12551f);
  uVar6 = (uRam0000000183487cf8 << 0x3c | uRam0000000183487cf8 >> 4) >> 0x16 |
          (uRam0000000183487cf8 >> 4) << 0x2a;
  uRam0000000183487c00 = uRam0000000183487b18 ^ uVar6 ^ 0x183e3db8d995067c;
  uRam0000000183487ed8 = (uRam0000000183487ed8 ^ uVar6) + 0x183e3db8d995067c ^ 0x8f15afa31e330c0e;
  uRam0000000183487c70 = (uRam0000000183487c70 * -0x51bd7aab96c9db5 ^ uRam0000000183487ed8) + uVar6;
  uRam0000000183487d48 = uRam0000000183487c70 ^ uRam0000000183487ed8;
  uRam0000000183487c38 = 0x183e3db8d995067c;
  uVar6 = (uRam0000000183487e38 ^ _UNK_182dc20e0) + uRam0000000183487b08 + 0x183e3db85db72559;
  uVar9 = (uRam0000000183487b08 ^ _UNK_182dc20e8) + uRam0000000183487e38 + 0xe7c1c247266b7983;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487e38 ^ _UNK_182dc20e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487b08 ^ _UNK_182dc20e8;
  uRam0000000183487c78 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183487e38 + 0xe7c1c247266b7983) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183487b08 + 0x183e3db85db72559));
  uVar6 = (uRam0000000183487c78 ^ 0x1e4fc912e526ed74) & 0x7fffffffffffffff;
  uRam0000000183487c10 = uRam0000000183487e88 ^ uVar6 ^ 0x7fff;
  uRam0000000183487e90 = (uRam0000000183487e90 ^ uVar6) + 0x7fff ^ 0xc67f77e128d81b6e;
  uRam0000000183487b68 = (uRam0000000183487b68 * -0x47cf0d26db2dd09f ^ uRam0000000183487e90) + uVar6
  ;
  uRam0000000183487e28 = uRam0000000183487b68 ^ uRam0000000183487e90;
  uRam0000000183487bb0 = 0x7fff;
  uVar6 = (uRam0000000183487ca0 ^ _UNK_182dc20f0) + uRam0000000183487e18 + 0x84222325;
  uVar9 = (uRam0000000183487e18 ^ _UNK_182dc20f8) + uRam0000000183487ca0 + 0x8b2cb09a8e8bde48;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487ca0 ^ _UNK_182dc20f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487e18 ^ _UNK_182dc20f8;
  func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183487ca0 + 0x8b2cb09a8e8bde48)
                      ^ (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183487e18 + 0x84222325));
  uRam0000000183487cd8 = uRam0000000183487cd8 + 0x74d34f65717421b8 ^ 0xa0c32cff1fda11d2;
  uRam0000000183487b88 = uRam0000000183487c78 * -0x4c122d124cd45cc3;
  uRam0000000183487c78 = uRam0000000183487b88 ^ uRam0000000183487cd8;
  uRam0000000183487c98 = 0x74d34f65717421b8;
  uVar6 = (~uRam0000000183487e68 + 0x74d34f65717421b9) *
          ((uRam0000000183487eb0 ^ 0x8b2cb09a0aae7d62) +
          (uRam0000000183487eb0 & 0xb2cb09a0aae7d62) * 2);
  uVar6 = (uVar6 | uRam0000000183487b28) + (uVar6 & uRam0000000183487b28);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487df8 =
       func_0x00019097ab40((uVar6 | 0xffffffff7bda5cda) + (uVar6 & 0xffffffff7bda5cda));
  uVar6 = uRam0000000183487df8 & 0x7fffffffffffffff;
  uRam0000000183487ef8 = uRam0000000183487be8 ^ uVar6 ^ 0x7fff;
  uRam0000000183487d78 = (uRam0000000183487d78 ^ uVar6) + 0x7fff ^ 0xbd457b167d949864;
  uRam0000000183487c18 = (uRam0000000183487c18 * -0x326e76488919916d ^ uRam0000000183487d78) + uVar6
  ;
  uRam0000000183487bf8 = uRam0000000183487c18 ^ uRam0000000183487d78;
  uRam0000000183487c68 = uRam0000000183487c70 ^ 0x7fff;
  uRam0000000183487ea8 = 0x7fff;
  uVar6 = (uRam0000000183487ef0 ^ _UNK_182dc2100) + uRam0000000183487da8 + 0x47caf7f3ebdeddfa;
  uVar9 = (uRam0000000183487da8 ^ _UNK_182dc2108) + uRam0000000183487ef0 + 0x4ab545b441c09822;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487ef0 ^ _UNK_182dc2100;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487da8 ^ _UNK_182dc2108;
  uRam0000000183487c00 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183487ef0 + 0x4ab545b441c09822) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183487da8 + 0x47caf7f3ebdeddfa));
  uRam0000000183487df0 = (uRam0000000183487c00 ^ 0x4ffff7f76ffcfef0) & 0xfffffffffffffff0;
  uRam0000000183487b40 =
       (uRam0000000183487b40 ^ uRam0000000183487df0) + 0x92803da7b1bd9701 ^ 0x11fff790687a4b36;
  uRam0000000183487df0 =
       ((uRam0000000183487cc0 ^ uRam0000000183487df0 ^ 0x92803da7b1bd9701) * 0x7388f783b0d33e65 ^
       uRam0000000183487b40) + uRam0000000183487df0;
  uRam0000000183487c78 = uRam0000000183487df0 ^ uRam0000000183487b40;
  uRam0000000183487b08 = 0x92803da7b1bd9701;
  uVar6 = (~uRam0000000183487cc8 + 0x4ab545b441c09823) *
          ((uRam0000000183487eb0 ^ 0x47caf7f3ebdeddfa) +
          (uRam0000000183487eb0 & 0x47caf7f3ebdeddfa) * 2);
  uVar6 = (uVar6 | uRam0000000183487b38) + (uVar6 & uRam0000000183487b38);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487ef0 =
       func_0x00019097ab40((uVar6 | 0xd7fb247aa1e45d8) + (uVar6 & 0xd7fb247aa1e45d8));
  uRam0000000183487bf8 =
       (uRam0000000183487bf8 ^ uRam0000000183487ef0) + 0xd7fb2472e3c66fd ^ 0xabf362d1b52dc431;
  uRam0000000183487d10 =
       (uRam0000000183487d10 * 0x2e2f7f0b44653d85 ^ uRam0000000183487bf8) + uRam0000000183487ef0;
  uRam0000000183487c98 = uRam0000000183487d10 ^ uRam0000000183487bf8;
  uRam0000000183487e40 = 0xd7fb2472e3c66fd;
  uVar6 = (~uRam0000000183487c28 + 0x4ab545b441c09823) *
          ((uRam0000000183487cb8 ^ 0x47caf7f3ebdeddfa) +
          (uRam0000000183487cb8 & 0x47caf7f3ebdeddfa) * 2);
  uVar6 = (uVar6 | uRam0000000183487ce8) + (uVar6 & uRam0000000183487ce8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487eb8 =
       func_0x00019097ab40((uVar6 | 0xd7fb247aa1e45d8) + (uVar6 & 0xd7fb247aa1e45d8));
  uVar6 = uRam0000000183487eb8 << 0x18 | uRam0000000183487eb8 >> 0x28;
  uRam0000000183487bd0 = (uRam0000000183487db0 ^ uVar6) + 0x428045b041c09802 ^ 0x86283a379719cd80;
  uRam0000000183487db0 = (uRam0000000183487db0 * 0x26bd6382f654d593 ^ uRam0000000183487bd0) + uVar6;
  uRam0000000183487bd0 = uRam0000000183487db0 ^ uRam0000000183487bd0;
  uRam0000000183487b48 = 0x428045b041c09802;
  uVar6 = (uRam0000000183487d58 ^ _UNK_182dc2110) + uRam0000000183487b80 + 0x92803da7359fb424;
  uVar9 = (uRam0000000183487b80 ^ _UNK_182dc2118) + uRam0000000183487d58 + 0x92803da7b1bd9701;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487d58 ^ _UNK_182dc2110;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487b80 ^ _UNK_182dc2118;
  uRam0000000183487c20 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183487d58 + 0x92803da7b1bd9701) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183487b80 + 0x92803da7359fb424));
  uRam0000000183487db0 = (uRam0000000183487c20 >> 0x12) * 0x6ed5a7e026f40000;
  uRam0000000183487e38 = uRam0000000183487e38 ^ uRam0000000183487db0 ^ 0x5cef9828c9e58f55;
  uRam0000000183487d00 =
       (uRam0000000183487d00 * -0x2152fe3c55df4019 ^ uRam0000000183487e38) + uRam0000000183487db0;
  uRam0000000183487c90 = uRam0000000183487d00 ^ uRam0000000183487e38;
  uRam0000000183487b50 = 0;
  uVar6 = (uRam0000000183487b20 ^ 0x84225cda) + uRam0000000183487ee0 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487b20 ^ 0x84225cda;
  uVar9 = ((uRam0000000183487ee0 + uRam0000000183487b20) * 0x2000 |
          uRam0000000183487ee0 + uRam0000000183487b20 >> 0x33) ^ uRam0000000183487ee0;
  uRam0000000183487c58 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183487b20 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183487ee0 + 0x84225cda));
  uRam0000000183487bb8 = uRam0000000183487df0 ^ uRam0000000183487c58 ^ 0x7fff;
  uRam0000000183487e08 = (uRam0000000183487e08 ^ uRam0000000183487c58) + 0x7fff ^ 0x4d2b0bd95fc7d24c
  ;
  uRam0000000183487ce8 =
       (uRam0000000183487ce8 * 0x38defae9bdb18e7d ^ uRam0000000183487e08) + uRam0000000183487c58;
  uRam0000000183487cb8 = uRam0000000183487ce8 ^ uRam0000000183487e08;
  uRam0000000183487b18 = 0x7fff;
  uRam0000000183487ee0 = func_0x00019097ab40(uRam0000000183487c38 ^ 0xab5bcec925d72587);
  uVar6 = uRam0000000183487ee0 << 0xb | (uRam0000000183487ee0 & 0x7fffffffffffffff) >> 0x35;
  uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar6;
  uRam0000000183487e08 = uRam0000000183487e08 ^ uVar6 ^ 0x5b1b78d3c165926a;
  uRam0000000183487be0 = (uRam0000000183487be0 * -0x2322066f7ac5e587 ^ uRam0000000183487e08) + uVar6
  ;
  uRam0000000183487b68 = uRam0000000183487be0 ^ uRam0000000183487e08;
  uRam0000000183487c80 = 0;
  uVar6 = (uRam0000000183487d00 ^ 0x84225cda) + uRam0000000183487b40 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487d00 ^ 0x84225cda;
  uVar9 = ((uRam0000000183487b40 + uRam0000000183487d00) * 0x2000 |
          uRam0000000183487b40 + uRam0000000183487d00 >> 0x33) ^ uRam0000000183487b40;
  uVar6 = func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183487d00 ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183487b40 + 0x84225cda))
  ;
  uRam0000000183487c78 = (uVar6 ^ 0x7fff) * 0x9a603352c9d5a53;
  uRam0000000183487e28 = (uRam0000000183487e28 ^ uRam0000000183487c78) + 0x7fff ^ 0xe986c0b77884a7eb
  ;
  uRam0000000183487c78 =
       ((uRam0000000183487c40 ^ uRam0000000183487c78 ^ 0x7fff) * 0x727f5acb690b1dd3 ^
       uRam0000000183487e28) + uRam0000000183487c78;
  uRam0000000183487cd8 = uRam0000000183487c78 ^ uRam0000000183487e28;
  uRam0000000183487b98 = 0x7fff;
  uRam0000000183487ec0 = func_0x00019097ab40(uRam0000000183487c90 ^ 0x1eff8422ffe1cc);
  uRam0000000183487c30 = uRam0000000183487c30 ^ uRam0000000183487ec0 ^ 0x5375b75f8c7d74ca;
  uRam0000000183487cb0 =
       (uRam0000000183487cb0 * -0x7ed33d2520344c03 ^ uRam0000000183487c30) + uRam0000000183487ec0;
  uRam0000000183487ea8 = uRam0000000183487cb0 ^ uRam0000000183487c30;
  uRam0000000183487df0 = 0;
  uRam0000000183487b38 = func_0x00019097ab40(uRam0000000183487c10 + 0x2bff7ba5ffddff ^ 0x66);
  uVar6 = (ulonglong)(~(uint)uRam0000000183487b38 & 0x7fff | 0x3fff);
  uRam0000000183487db0 = uRam0000000183487b08 ^ uVar6 ^ 0x7fff;
  uRam0000000183487b78 = (uRam0000000183487b78 ^ uVar6) + 0x7fff ^ 0xdf25c3e8e3606aa8;
  uRam0000000183487b20 = (uRam0000000183487b20 * -0x3c26fad7713e9059 ^ uRam0000000183487b78) + uVar6
  ;
  uRam0000000183487c78 = uRam0000000183487b20 ^ uRam0000000183487b78;
  uRam0000000183487c98 = 0x7fff;
  uVar6 = (~uRam0000000183487cd0 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183487ec8) +
          ((param_4 ^ 0x84222325) & uRam0000000183487ec8) * 2);
  uVar6 = (uVar6 | uRam0000000183487ce8) + (uVar6 & uRam0000000183487ce8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487b28 =
       func_0x00019097ab40((param_4 ^ 0x84225cda | uVar6) + (uVar6 & (param_4 ^ 0x84225cda)));
  auVar5 = _UNK_1800170c0;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar9 = (ulonglong)uVar2;
  uRam0000000183487d78 = (uRam0000000183487d78 ^ uRam0000000183487b28) + uVar9 ^ 0x42b0f85a9fdc04e6;
  uRam0000000183487d38 =
       (uRam0000000183487d38 * 0xe298f7811a7d76b ^ uRam0000000183487d78) + uRam0000000183487b28;
  uRam0000000183487e38 = uRam0000000183487d38 ^ uRam0000000183487d78;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar2 ^ 0x84222325;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = 0;
  auVar8 = pshufb(auVar7 ^ _UNK_182dc2120,_UNK_1800170c0);
  uVar4 = auVar8._8_8_ + auVar8._0_8_;
  uVar6 = uVar4 + uRam0000000183487b30;
  if (auVar8._4_4_ < 0) {
    uVar6 = uRam0000000183487b50 ^ uVar4;
  }
  uRam0000000183487e88 = uVar9;
  uRam0000000183487dc8 = func_0x00019097ab40(SUB161(auVar7 ^ _UNK_182dc2120,5) ^ uVar6);
  uVar9 = uVar9 * param_3 ^ uRam0000000183487dc8;
  uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x31 ^ uVar9) &
          0xffffffffffffe000;
  uVar4 = (ulonglong)(uVar2 ^ param_3);
  uRam0000000183487d58 = (uRam0000000183487d58 ^ uVar6) + uVar4 ^ 0xd40eba42a3d3a5ee;
  uRam0000000183487df8 = (uRam0000000183487df8 * -0x33c05bc84aaf50ad ^ uRam0000000183487d58) + uVar6
  ;
  uRam0000000183487e20 = uRam0000000183487df8 ^ uRam0000000183487d58;
  uVar6 = (~uRam0000000183487be0 + 0x65c4af37) *
          ((uRam0000000183487e60 ^ 0xcdb551af) +
          (ulonglong)((uint)uRam0000000183487e60 & 0xcdb551af) * 2);
  uVar6 = (uVar6 | uRam0000000183487b70) + (uVar6 & uRam0000000183487b70);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487db0 = uVar4;
  uRam0000000183487c18 =
       func_0x00019097ab40((uVar6 | 0xa871fe99) + (ulonglong)((uint)uVar6 & 0xa871fe99));
  uRam0000000183487d30 =
       (uRam0000000183487d30 ^ uRam0000000183487c18 ^ 0x65c4af36) + 0x6dd7ffbe ^ 0x5ea401ba624d0b00;
  uRam0000000183487c58 =
       (uRam0000000183487c58 * -0x66a39a4d37eaf821 ^ uRam0000000183487d30) +
       (uRam0000000183487c18 ^ 0x65c4af36);
  uRam0000000183487ce0 = uRam0000000183487c58 ^ uRam0000000183487d30;
  uRam0000000183487cb0 = 0x6dd7ffbe;
  uVar6 = (~uRam0000000183487ee8 + 0x8adb56bc) *
          ((uRam0000000183487e50 ^ 0xfaab23da) +
          (ulonglong)((uint)uRam0000000183487e50 & 0xfaab23da) * 2);
  uVar6 = (uVar6 | uRam0000000183487c58) + (uVar6 & uRam0000000183487c58);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487b68 =
       func_0x00019097ab40((uVar6 | 0x70707561) + (ulonglong)((uint)uVar6 & 0x70707561));
  uVar6 = (ulonglong)(~(uint)(uRam0000000183487b68 >> 2) & 0x7e8900ff);
  uRam0000000183487c00 = (uRam0000000183487c00 ^ uVar6) + 0xf4525644 ^ 0x6aec041da1eb8b28;
  uRam0000000183487e90 = (uRam0000000183487e90 * 0x4c14340e53206b79 ^ uRam0000000183487c00) + uVar6;
  uRam0000000183487b78 = uRam0000000183487e90 ^ uRam0000000183487c00;
  uRam0000000183487c40 = 0xf4525644;
  uVar6 = (uRam0000000183487df8 ^ _UNK_182dc2130) + uRam0000000183487b08 + 0x88232818;
  uVar9 = (uRam0000000183487b08 ^ _UNK_182dc2138) + uRam0000000183487df8 + 0xf3ff4c68;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487df8 ^ _UNK_182dc2130;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487b08 ^ _UNK_182dc2138;
  uRam0000000183487e28 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183487df8 + 0xf3ff4c68) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183487b08 + 0x88232818));
  uVar6 = (ulonglong)(~(uint)uRam0000000183487e28 & 0xc010b3d);
  uRam0000000183487c48 = uRam0000000183487e68 ^ uVar6 ^ 0x1000057a5;
  uRam0000000183487b68 = (uRam0000000183487b68 ^ uVar6) + 0x1000057a5 ^ 0xb860fbee4dce2287;
  uRam0000000183487dc8 = (uRam0000000183487dc8 * -0x3dcb905ef5281935 ^ uRam0000000183487b68) + uVar6
  ;
  uRam0000000183487e18 = uRam0000000183487dc8 ^ uRam0000000183487b68;
  uRam0000000183487d98 = 0x57a5;
  uVar6 = (uRam0000000183487de8 ^ _UNK_182dc2140) + uRam0000000183487dc0 + 0x84222325;
  uVar9 = (uRam0000000183487dc0 ^ _UNK_182dc2148) + uRam0000000183487de8 + 0xdccf0adf;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487de8 ^ _UNK_182dc2140;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487dc0 ^ _UNK_182dc2148;
  uRam0000000183487b30 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183487de8 + 0xdccf0adf) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183487dc0 + 0x84222325));
  uRam0000000183487e58 =
       (uRam0000000183487e58 ^ uRam0000000183487b30) - 0xdccf0adf ^ 0x2466d33025217db4;
  uRam0000000183487ec8 =
       (uRam0000000183487ec8 * 0x74958a4d048649dd ^ uRam0000000183487e58) + uRam0000000183487b30;
  uRam0000000183487b40 = uRam0000000183487ec8 ^ uRam0000000183487e58;
  uRam0000000183487ef8 = 0x2330f521;
  uRam0000000183487d60 = func_0x00019097ab40(uRam0000000183487bf0 ^ 0xfffdffd855009a0e);
  uVar6 = ((uRam0000000183487d60 ^ 0xdc000000) >> 0x18) * -0x168449ea3b000000;
  uRam0000000183487d70 = uRam0000000183487b40 ^ uVar6 ^ 0xdccf6284;
  uRam0000000183487cd0 = (uRam0000000183487cd0 ^ uVar6) + 0xdccf6284 ^ 0xf9bf778d13e4dbbb;
  uRam0000000183487e08 = (uRam0000000183487e08 * -0xc859a7ca59b0a59 ^ uRam0000000183487cd0) + uVar6;
  uRam0000000183487d30 = uRam0000000183487e08 ^ uRam0000000183487cd0;
  uRam0000000183487d28 = 0xdccf6284;
  uRam0000000183487db8 = func_0x00019097ab40(uRam0000000183487bb8 ^ 0x54006a80004cee);
  uVar6 = (uRam0000000183487db8 ^ 0xfff80000) & 0xfffffffffff80000;
  uRam0000000183487e20 = uRam0000000183487c78 ^ uVar6 ^ 0x1000057a5;
  uRam0000000183487d38 = (uRam0000000183487d38 ^ uVar6) + 0x1000057a5 ^ 0x1d31b95743d89042;
  uRam0000000183487d78 = (uRam0000000183487d78 * -0x660ea4d45faa9dc3 ^ uRam0000000183487d38) + uVar6
  ;
  uRam0000000183487cb0 = uRam0000000183487d78 ^ uRam0000000183487d38;
  uRam0000000183487d70 = 0x57a5;
  uRam0000000183487e28 = func_0x00019097ab40(uRam0000000183487bf8 ^ 0x48001714ff434c);
  uVar6 = (uRam0000000183487e28 & 0xfffffffffffc0000) -
          (uRam0000000183487e28 >> 1 & 0x5555555555540000);
  uVar6 = (uVar6 & 0x3333333333300000) + (uVar6 >> 2 & 0x3333333333330000);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0000) * 0x101010101010101 >> 0x38) << 4 |
          uRam0000000183487e28 & 0xfffffffffffc0000;
  uRam0000000183487c28 = (uRam0000000183487c28 ^ uVar6) - 0x6de66b0a ^ 0x72df545c2032bd93;
  uRam0000000183487e70 = (uRam0000000183487e70 * 0x2b1ae712aac3f041 ^ uRam0000000183487c28) + uVar6;
  uRam0000000183487e00 = uRam0000000183487e70 ^ uRam0000000183487c28;
  uRam0000000183487e50 = uRam0000000183487b80 ^ 0xffffffff921994f6;
  uRam0000000183487d70 = 0x921994f6;
  uVar6 = (uRam0000000183487b30 ^ _UNK_182dc2150) + uRam0000000183487b30 + 0x84227480;
  uVar9 = (uRam0000000183487b30 ^ _UNK_182dc2158) + uRam0000000183487b30 + 0x6de66b0a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487b30 ^ _UNK_182dc2150;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487b30 ^ _UNK_182dc2158;
  uRam0000000183487e58 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183487b30 + 0x6de66b0a) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183487b30 + 0x84227480));
  uVar6 = uRam0000000183487e58 ^ 0x57a5;
  uRam0000000183487ca8 = uRam0000000183487e50 ^ uVar6 ^ 0x6de6c2af;
  uRam0000000183487bf0 = (uRam0000000183487bf0 ^ uVar6) + 0x6de6c2af ^ 0x409adb79cd1aec06;
  uRam0000000183487ea8 = (uRam0000000183487ea8 * -0x5070bec3699c7e2f ^ uRam0000000183487bf0) + uVar6
  ;
  uRam0000000183487ce8 = uRam0000000183487ea8 ^ uRam0000000183487bf0;
  uRam0000000183487da8 = 0x6de6c2af;
  uVar6 = (~uRam0000000183487c30 + 0xf4525645) *
          ((uRam0000000183487c40 ^ 0xe9f5dc9b) +
          (ulonglong)((uint)uRam0000000183487c40 & 0xe9f5dc9b) * 2);
  uVar6 = (uVar6 | uRam0000000183487dd0) + (uVar6 & uRam0000000183487dd0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487e70 =
       func_0x00019097ab40((uVar6 | 0x1da78adf) + (ulonglong)((uint)uVar6 & 0x1da78adf));
  uVar6 = uRam0000000183487e70 - (uRam0000000183487e70 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183487e70;
  uRam0000000183487ea8 = (uRam0000000183487ea8 ^ uVar6) + 0x9985a9fa ^ 0x2aafca3c0b89cb5f;
  uRam0000000183487ce0 =
       (uRam0000000183487ce0 * 0x212f632a65000557 ^ uRam0000000183487ea8) + uVar6 ^
       uRam0000000183487ea8;
  uRam0000000183487c60 = 0x9985a9fa;
  uVar6 = (uRam0000000183487e18 ^ _UNK_182dc2160) + uRam0000000183487b10 + 0xe9f5dc9b;
  uVar9 = (uRam0000000183487b10 ^ _UNK_182dc2168) + uRam0000000183487e18 + 0xf4525644;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183487e18 ^ _UNK_182dc2160;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183487b10 ^ _UNK_182dc2168;
  uRam0000000183487ce0 =
       func_0x00019097ab40((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183487e18 + 0xf4525644) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183487b10 + 0xe9f5dc9b));
  uRam0000000183487c00 =
       (uRam0000000183487c00 ^ uRam0000000183487ce0 ^ 0x68d533f4c025c278) + 0x64525604 ^
       0xf19ca0baa1651f80;
  uRam0000000183487e50 =
       (uRam0000000183487e50 * -0x3175ed9c0093d065 ^ uRam0000000183487c00) +
       (uRam0000000183487ce0 ^ 0x68d533f4c025c278);
  uRam0000000183487e38 = uRam0000000183487e50 ^ uRam0000000183487c00;
  uRam0000000183487c90 = 0x64525604;
  uRam0000000183487e58 = func_0x00019097ab40(uRam0000000183487d08 + 0x2100841d0021ff ^ 0x2c);
  uRam0000000183487dd0 =
       (uRam0000000183487e58 ^ 0x622a5602) * -0x62fd3ab6ff3b6bf3 & 0x3fffffffffffff;
  uRam0000000183487e20 = uRam0000000183487e20 ^ uRam0000000183487dd0 ^ 0xb2eeb66c3bed2dc6;
  uRam0000000183487d08 =
       (uRam0000000183487d08 * 0x5f742d8da6cc9a91 ^ uRam0000000183487e20) + uRam0000000183487dd0;
  uRam0000000183487dd8 = uRam0000000183487d08 ^ uRam0000000183487e20;
  uRam0000000183487d98 = 0;
  uRam0000000183487d00 = func_0x00019097ab40(uRam0000000183487b48 ^ 0x6bff837fffe1f4);
  uVar6 = uRam0000000183487d00 & 0xfffffffff8000000;
  uVar9 = uVar6 >> 1 | uVar6;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar6;
  uRam0000000183487b50 = uRam0000000183487db0 ^ uVar6 ^ 0x57a5;
  uRam0000000183487c40 = (uRam0000000183487c40 ^ uVar6) + 0x57a5 ^ 0x47c65a0dcf5e991;
  uRam0000000183487e20 = (uRam0000000183487e20 * 0x1b183fac0c9adf57 ^ uRam0000000183487c40) + uVar6;
  uRam0000000183487dd8 = uRam0000000183487e20 ^ uRam0000000183487c40;
  uRam0000000183487b70 = 0x57a5;
  uRam0000000183487d78 = func_0x00019097ab40(uRam0000000183487c28 + 0xffdefff1dbfff5ff ^ 0x18);
  uRam0000000183487bb8 =
       (uRam0000000183487bb8 ^ uRam0000000183487d78) + 0x92280041 ^ 0xdedf59cb9ac83a7c;
  uRam0000000183487c70 =
       (uRam0000000183487c70 * 0x2eb31a858d855ba7 ^ uRam0000000183487bb8) + uRam0000000183487d78;
  uRam0000000183487c50 = uRam0000000183487c70 ^ uRam0000000183487bb8;
  uRam0000000183487c90 = 0x92280041;
  uVar6 = (~uRam0000000183487c40 + 0x92280042) *
          ((uRam0000000183487b18 ^ 0xe9f5dc9b) +
          (ulonglong)((uint)uRam0000000183487b18 & 0xe9f5dc9b) * 2);
  uVar6 = (uVar6 | uRam0000000183487e30) + (uVar6 & uRam0000000183487e30);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487bc8 =
       func_0x00019097ab40((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda));
  uRam0000000183487cf0 =
       uRam0000000183487cf0 ^ uRam0000000183487bc8 ^ 0x92280041 ^ 0xc0cac4d6e2488c4f;
  uRam0000000183487cd8 =
       (uRam0000000183487cd8 * -0x7494711dd51c0169 ^ uRam0000000183487cf0) +
       (uRam0000000183487bc8 ^ 0x92280041);
  uRam0000000183487eb8 = uRam0000000183487cd8 ^ uRam0000000183487cf0;
  uRam0000000183487e40 = 0;
  uVar6 = ((uRam0000000183487e58 ^ 0x84227480) +
          (ulonglong)((uint)uRam0000000183487e58 & 0x84227480) * 2) * -uRam0000000183487db0;
  uVar6 = (uVar6 | uRam0000000183487bc0) + (uVar6 & uRam0000000183487bc0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183487e58 =
       func_0x00019097ab40((uVar6 | 0x84227480) + (ulonglong)((uint)uVar6 & 0x84227480));
  uVar6 = uRam0000000183487e58 >> 1 | uRam0000000183487e58;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183487e58;
  uRam0000000183487b28 = uRam0000000183487c00 ^ uVar6 ^ 0x57a5;
  uRam0000000183487ed8 = (uRam0000000183487ed8 ^ uVar6) + 0x57a5 ^ 0xd953885fd67f207f;
  uRam0000000183487ee8 = (uRam0000000183487ee8 * 0x23b6aef89a659cbd ^ uRam0000000183487ed8) + uVar6;
  uRam0000000183487bf8 = uRam0000000183487ee8 ^ uRam0000000183487ed8;
  uRam0000000183487cc0 = 0x57a5;
  uRam0000000183487e68 = func_0x00019097ab40(uRam0000000183487ce8 + 0xffcc00847fffddff ^ 0xf5);
  uVar6 = uRam0000000183487e68 & 0xfffffffffffc0000;
  uRam0000000183487d38 = uRam0000000183487e78 ^ uVar6 ^ 0x57a5;
  uRam0000000183487b08 = (uRam0000000183487b08 ^ uVar6) + 0x57a5 ^ 0xd8144ff17367332e;
  uRam0000000183487ef0 = (uRam0000000183487ef0 * -0x390f67721d1ee3e9 ^ uRam0000000183487b08) + uVar6
  ;
  uRam0000000183487de8 = uRam0000000183487ef0 ^ uRam0000000183487b08;
  auVar8._8_8_ = _UNK_182dc2178;
  auVar8._0_8_ = uVar4 ^ 0x84222325;
  uRam0000000183487e40 = 0x57a5;
  auVar5 = pshufb(auVar8 ^ _UNK_182dc2180,auVar5);
  uVar9 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar9 + uRam0000000183487c18;
  if (auVar5._4_4_ < 0) {
    uVar6 = uRam0000000183487d38 ^ uVar9;
  }
  uRam0000000183487d10 = func_0x00019097ab40(SUB161(auVar8 ^ _UNK_182dc2180,5) ^ uVar6);
  lVar3 = uVar4 - ((uVar2 ^ param_3) & 0x57a5) * 2;
  uRam0000000183487b20 =
       (uRam0000000183487b20 ^ uRam0000000183487d10) + lVar3 + 0x57a5 ^ 0x5a8f2b43bb33bdb;
  uRam0000000183487b60 =
       (uRam0000000183487b60 * 0x582b9da6f0c25e37 ^ uRam0000000183487b20) + uRam0000000183487d10;
  uRam0000000183487eb8 = uRam0000000183487b60 ^ uRam0000000183487b20;
  uRam0000000183487eb0 = lVar3 + 0x57a5U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2699,0x81);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190976291 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182dc0738 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; dW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 190928930, runtime 6ffff8538930) =====

void FUN_190928930(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00019092896c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182db45a0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/r; dX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 190929820, runtime 6ffff8539820) =====

void FUN_190929820(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019092989d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182db4ae0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; dk (DDLsixtwo/mA;)Z (handler @ image 190943090, runtime 6ffff8553090) =====

void FUN_190943090(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2699,0x81);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190943144 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182db8740 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; dl (DDLsixtwo/mA;)V (handler @ image 190946930, runtime 6ffff8556930) =====

void FUN_190946930(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2699,0x81);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019094699f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182db9d10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/r; dn ()F (handler @ image 190946d40, runtime 6ffff8556d40) =====

void FUN_190946d40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2699,0x81);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190946d97 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182db9e90 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}



