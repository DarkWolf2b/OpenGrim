// ===== Lsixtwo/fz; YO ()V (handler @ image 18b087310, runtime 6ffff2c97310) =====

void FUN_18b087310(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b08735a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a49e50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fz; _5f4ceb95140d8bab50cc0ded800b2db7 ()V (handler @ image 18b0d4bb0, runtime 6ffff2ce4bb0) =====

void FUN_18b0d4bb0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b0d4c98 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a597d8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fz; aRT (Lsixtwo/gL$tk;)V (handler @ image 18b087870, runtime 6ffff2c97870) =====

void FUN_18b087870(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13fec,0x323);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b08793d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a4a060 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fz; aRU (Lsixtwo/hc;)V (handler @ image 18b092140, runtime 6ffff2ca2140) =====

void FUN_18b092140(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13fec,0x323);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b09220a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a4d690 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fz; aRV (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18b09a980, runtime 6ffff2caa980) =====

undefined8 FUN_18b09a980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fz; aRW ([B)Ljava/lang/String; (handler @ image 18b09aa10, runtime 6ffff2caaa10) =====

void FUN_18b09aa10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018b09aab0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a50880 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fz; aRX (IJ)I (handler @ image 18b0c61b0, runtime 6ffff2cd61b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0c61b0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uRam0000000183288058 = func_0x00018b0d0e00(uRam0000000183287ea0 ^ 0x6467844e3b75c77f);
  uVar3 = uRam0000000183288058 - (uRam0000000183288058 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183288058;
  uRam0000000183287f78 = (uRam0000000183287f78 ^ uVar3) + 0x938496bf7769c4ee ^ 0xe094ec3a5847a871;
  uRam0000000183287dd0 = (uRam0000000183287dd0 * 0x25242db28e6dc36f ^ uRam0000000183287f78) + uVar3;
  uRam0000000183288030 = uRam0000000183287dd0 ^ uRam0000000183287f78;
  uRam0000000183287d30 = 0x938496bf7769c4ee;
  uVar3 = (~uRam0000000183287f90 + 0xdf92062267d9bb2a) *
          ((uRam0000000183287dc0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183287dc0 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183287f90) + (uVar3 & uRam0000000183287f90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287b78 =
       func_0x00018b0d0e00((uVar3 | 0xdf920622e3fb980c) + (uVar3 & 0xdf920622e3fb980c));
  uRam0000000183287c60 = uRam0000000183287c88 * 0x64d3243701b6c2a5;
  uRam0000000183287b48 = uRam0000000183287b48 + 0x206df9dd982644d7 ^ 0x76aa80797778ec20;
  uRam0000000183287c88 = uRam0000000183287c60 ^ uRam0000000183287b48;
  uRam0000000183288040 = 0x206df9dd982644d7;
  uVar3 = (~uRam0000000183287d90 + 0xdf92062267d9bb2a) *
          ((uRam0000000183287f10 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183287f10 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183287d48) + (uVar3 & uRam0000000183287d48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287b80 =
       func_0x00018b0d0e00((uVar3 | 0xdf920622e3fbe7f3) + (uVar3 & 0xdf920622e3fbe7f3));
  uRam0000000183287ea0 = uRam0000000183287b18 ^ uRam0000000183287b80 ^ 0xdf92062267da3b28;
  uRam0000000183287f68 =
       (uRam0000000183287f68 ^ uRam0000000183287b80) + 0xdf92062267da3b28 ^ 0x51657c873228eba3;
  uRam0000000183287d40 =
       (uRam0000000183287d40 * -0x7985415caf10c1d3 ^ uRam0000000183287f68) + uRam0000000183287b80;
  uRam0000000183287b38 = uRam0000000183287d40 ^ uRam0000000183287f68;
  uRam0000000183287f90 = 0xdf92062267da3b28;
  uRam0000000183287ca0 = func_0x00018b0d0e00(lRam0000000183287d68 + 0xb794ebd915791a2dU ^ 0xf5);
  uRam0000000183287ec0 = uRam0000000183287ec0 + 0x8deb7147403341e8 ^ 0xa47a97a7306c3537;
  uRam0000000183287c08 = uRam0000000183287fb0 * 0x65120f9eed3ce283;
  uRam0000000183287fb0 = uRam0000000183287c08 ^ uRam0000000183287ec0;
  uRam0000000183287be0 = 0x8deb7147403341e8;
  uVar3 = (uRam0000000183287d40 ^ _UNK_181a58050) + uRam0000000183287fe0 + 0x84225cda;
  uVar9 = (uRam0000000183287fe0 ^ _UNK_181a58058) + uRam0000000183287d40 + 0x72148eb8bfccbe18;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287d40 ^ _UNK_181a58050;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183287fe0 ^ _UNK_181a58058;
  uRam0000000183287d90 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183287d40 + 0x72148eb8bfccbe18) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183287fe0 + 0x84225cda));
  uVar3 = uRam0000000183287d90 << 0x32 | uRam0000000183287d90 >> 0xe;
  uRam0000000183287d00 = uRam0000000183287c10 ^ uVar3 ^ 0x72148eb8bfcd3e17;
  uRam0000000183287b78 = (uRam0000000183287b78 ^ uVar3) + 0x72148eb8bfcd3e17 ^ 0xf11be29e1491e738;
  uRam0000000183287f98 = (uRam0000000183287f98 * -0x37c92419e073632d ^ uRam0000000183287b78) + uVar3
  ;
  uRam0000000183287dd8 = uRam0000000183287f98 ^ uRam0000000183287b78;
  uRam0000000183287de8 = 0x72148eb8bfcd3e17;
  uRam0000000183287c80 = func_0x00018b0d0e00(uRam0000000183287b10 ^ 0x34cbe976b676d317);
  uVar3 = uRam0000000183287c80 - (uRam0000000183287c80 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ~((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
           uRam0000000183287c80) & 0x72148eb8bfcd3e17;
  uRam0000000183287b58 = uRam0000000183287d40 ^ uVar3 ^ 0x7fff;
  uRam0000000183287e00 = (uRam0000000183287e00 ^ uVar3) + 0x7fff ^ 0x263c6fc412f7b99a;
  uRam0000000183287d58 = (uRam0000000183287d58 * 0x5fbadf1feffb0f39 ^ uRam0000000183287e00) + uVar3;
  uRam0000000183287cb0 = uRam0000000183287d58 ^ uRam0000000183287e00;
  uRam0000000183287e18 = 0x7fff;
  uVar3 = (uRam0000000183288040 ^ _UNK_181a58060) + uRam0000000183287d90 + 0x84222325;
  uVar9 = (uRam0000000183287d90 ^ _UNK_181a58068) + uRam0000000183288040 + 0xa922dec31f753a1e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183288040 ^ _UNK_181a58060;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183287d90 ^ _UNK_181a58068;
  uRam0000000183287b20 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183288040 + 0xa922dec31f753a1e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183287d90 + 0x84222325));
  uRam0000000183287ef8 =
       (uRam0000000183287ef8 ^ uRam0000000183287b20 & 0x7fffffffffffff) + 0x56dd213ce08ac5e2 ^
       0x5c49fd1a53906329;
  uRam0000000183287eb8 =
       (uRam0000000183287eb8 * -0x19bfce0681f87871 ^ uRam0000000183287ef8) +
       (uRam0000000183287b20 & 0x7fffffffffffff);
  uRam0000000183287e28 = uRam0000000183287eb8 ^ uRam0000000183287ef8;
  uRam0000000183287ed0 = uRam0000000183287eb8 ^ 0x56dd213ce08ac5e2;
  uRam0000000183287ff0 = 0x56dd213ce08ac5e2;
  uVar3 = (~uRam0000000183287f38 + 0xa922dec31f753a1f) *
          ((uRam0000000183287d30 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183287d30 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183287c70) + (uVar3 & uRam0000000183287c70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287e30 =
       func_0x00018b0d0e00((uVar3 | 0xa922dec39b5766c4) + (uVar3 & 0xa922dec39b5766c4));
  uRam0000000183287c28 = uRam0000000183287b88 ^ uRam0000000183287e00 ^ 0xa922dec31f75ba1d;
  uRam0000000183287bd0 =
       (uRam0000000183287bd0 ^ uRam0000000183287e00) + 0xa922dec31f75ba1d ^ 0x8bf96f47ad639705;
  uRam0000000183287e88 =
       (uRam0000000183287e88 * 0x47938cb6759522bd ^ uRam0000000183287bd0) + uRam0000000183287e00;
  uRam0000000183287f98 = uRam0000000183287e88 ^ uRam0000000183287bd0;
  uRam0000000183287f50 = 0xa922dec31f75ba1d;
  uRam0000000183287c50 = func_0x00018b0d0e00(uRam0000000183287ff8 + 0x42b46ab9d6a23b42 ^ 0xd1);
  uVar3 = ~uRam0000000183287c50 * 0x6dfbf95666331d53 & 0xffffffffffffff80 ^ 0xa922dec31f75ba1d;
  uRam0000000183287c40 = uRam0000000183287bd8 ^ uVar3 ^ 0x7fff;
  uRam0000000183287fb8 = (uRam0000000183287fb8 ^ uVar3) + 0x7fff ^ 0x4a5a2bb3463535d1;
  uRam0000000183287d30 = (uRam0000000183287d30 * -0x63eb1a7112a101a1 ^ uRam0000000183287fb8) + uVar3
  ;
  uRam0000000183287e78 = uRam0000000183287d30 ^ uRam0000000183287fb8;
  uRam0000000183287dd0 = 0x7fff;
  uVar3 = (uRam0000000183287c38 ^ _UNK_181a58070) + uRam0000000183287d38 + 0xbfe5f34b739510d8;
  uVar9 = (uRam0000000183287d38 ^ _UNK_181a58078) + uRam0000000183287c38 + 0x938496bf7769c4ee;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287c38 ^ _UNK_181a58070;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183287d38 ^ _UNK_181a58078;
  uRam0000000183287ce0 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183287c38 + 0x938496bf7769c4ee) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183287d38 + 0xbfe5f34b739510d8));
  uVar3 = uRam0000000183287ce0 << 0x14 | uRam0000000183287ce0 >> 0x2c;
  uRam0000000183287ea0 = (uRam0000000183287ea0 ^ uVar3) + 0x2c6165f480def713 ^ 0x1d720a00cb50b6c9;
  uRam0000000183287d98 = (uRam0000000183287d98 * -0x7e187ee034fac23f ^ uRam0000000183287ea0) + uVar3
  ;
  uRam0000000183288088 = uRam0000000183287d98 ^ uRam0000000183287ea0;
  uRam0000000183287f90 = 0x2c6165f480def713;
  uVar3 = (~uRam0000000183288008 + 0x938496bf7769c4ef) *
          ((uRam0000000183287f38 ^ 0xbfe5f34b739510d8) +
          (uRam0000000183287f38 & 0x3fe5f34b739510d8) * 2);
  uVar3 = (uVar3 | uRam0000000183287ce8) + (uVar3 & uRam0000000183287ce8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287c78 =
       func_0x00018b0d0e00((uVar3 | 0x2c6165f404fcd436) + (uVar3 & 0x2c6165f404fcd436));
  uRam0000000183287b58 =
       (uRam0000000183287b58 ^ uRam0000000183287c78) + 0x9384920b772100ec ^ 0xc1dd2302bcd9e5c2;
  uRam0000000183287ca0 =
       (uRam0000000183287ca0 * -0x5bde6ecfe27e345d ^ uRam0000000183287b58) + uRam0000000183287c78;
  uRam0000000183287d40 = uRam0000000183287ca0 ^ uRam0000000183287b58;
  uRam00000001832880c0 = 0x9384920b772100ec;
  uRam00000001832880a8 = func_0x00018b0d0e00(uRam0000000183287cd0 ^ 0xa1d367d522407247);
  uVar3 = (uRam00000001832880a8 ^ 0x27092416ee4201d8) << 0x33 |
          (uRam00000001832880a8 ^ 0x27092416ee4201d8) >> 0xd;
  uRam0000000183287bf0 = uRam0000000183287b80 ^ uVar3 ^ 0x536a8a0b6f20f8eb;
  uRam0000000183287e88 = (uRam0000000183287e88 ^ uVar3) + 0x536a8a0b6f20f8eb ^ 0xc9eecc151fc48307;
  uRam0000000183287db0 = (uRam0000000183287db0 * 0x232cefeb72c6c8e5 ^ uRam0000000183287e88) + uVar3;
  uRam0000000183287b28 = uRam0000000183287db0 ^ uRam0000000183287e88;
  uRam0000000183287cd8 = 0x536a8a0b6f20f8eb;
  uRam0000000183287c30 = func_0x00018b0d0e00(uRam0000000183287c00 ^ 0x1cff83e2ffddc2);
  uVar3 = uRam0000000183287c30 - (uRam0000000183287c30 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam0000000183287f98 =
       ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
       uRam0000000183287c30) & 0x3ffffffffffff;
  uRam0000000183287d90 = uRam0000000183287d90 ^ uRam0000000183287f98 ^ 0xaff658f2d52615c0;
  uRam0000000183287f70 =
       (uRam0000000183287f70 * -0x2dda7eba65ac458d ^ uRam0000000183287d90) + uRam0000000183287f98;
  uRam0000000183287fb8 = uRam0000000183287f70 ^ uRam0000000183287d90;
  uRam0000000183287c18 = 0;
  uVar3 = (uRam0000000183288058 ^ 0x84225cda) + uRam0000000183288088 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183288058 ^ 0x84225cda;
  uVar9 = ((uRam0000000183288088 + uRam0000000183288058) * 0x2000 |
          uRam0000000183288088 + uRam0000000183288058 >> 0x33) ^ uRam0000000183288088;
  uRam0000000183287fc8 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183288058 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183288088 + 0x84225cda));
  uVar3 = uRam0000000183287fc8 & 0x7fffffffffffffff;
  uRam0000000183287be0 = uRam0000000183287b10 ^ uVar3 ^ 0x7fff;
  uRam0000000183287fe8 = (uRam0000000183287fe8 ^ uVar3) + 0x7fff ^ 0x326e0a2f2df73064;
  uRam0000000183287b08 = (uRam0000000183287b08 * 0x2fb509ec06f54c97 ^ uRam0000000183287fe8) + uVar3;
  uRam0000000183287bf8 = uRam0000000183287b08 ^ uRam0000000183287fe8;
  uRam0000000183287d50 = 0x7fff;
  uVar3 = (uRam0000000183287d18 ^ _UNK_181a58080) + uRam0000000183288058 + 0xbfe5f34b739510d8;
  uVar9 = (uRam0000000183288058 ^ _UNK_181a58088) + uRam0000000183287d18 + 0x401a0cb40848cc02;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287d18 ^ _UNK_181a58080;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183288058 ^ _UNK_181a58088;
  uRam0000000183287b18 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183287d18 + 0x401a0cb40848cc02) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183288058 + 0xbfe5f34b739510d8));
  uVar3 = (uRam0000000183287b18 ^ 0xbfe5f34bf7b733fd) << 0x1e |
          (uRam0000000183287b18 ^ 0xbfe5f34bf7b733fd) >> 0x22;
  uRam0000000183287b40 = uRam0000000183287b40 ^ uVar3 ^ 0x581845a6021242e;
  uRam0000000183287fd0 = (uRam0000000183287fd0 * 0x44c54de3e4583ed ^ uRam0000000183287b40) + uVar3;
  uRam0000000183288018 = uRam0000000183287fd0 ^ uRam0000000183287b40;
  uRam0000000183287bc8 = 0;
  uVar3 = (~uRam0000000183287d50 + 0x8165b14b04a233fa) *
          ((uRam0000000183287d48 ^ 0x8165b14b808010dc) +
          (uRam0000000183287d48 & 0x165b14b808010dc) * 2);
  uVar3 = (uVar3 | uRam0000000183287c98) + (uVar3 & uRam0000000183287c98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287e68 =
       func_0x00018b0d0e00((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam00000001832880d8 =
       uRam00000001832880d8 ^ uRam0000000183287e68 ^ 0x8165b14b04a233f9 ^ 0x9ed9ba39b86a936a;
  uRam0000000183287bb0 =
       (uRam0000000183287bb0 * -0x64e381d15b236bd ^ uRam00000001832880d8) +
       (uRam0000000183287e68 ^ 0x8165b14b04a233f9);
  uRam0000000183287b60 = uRam0000000183287bb0 ^ uRam00000001832880d8;
  uRam0000000183287f58 = uRam0000000183287fa8;
  uRam0000000183287bf8 = 0;
  uRam0000000183287b18 = func_0x00018b0d0e00(uRam0000000183287f90 ^ 0xffac0084da002144);
  uVar3 = uRam0000000183287b18 & 0x7fffffffffffffff;
  uRam0000000183287b98 = uRam0000000183288020 ^ uVar3 ^ 0x7fff;
  uRam0000000183287e88 = (uRam0000000183287e88 ^ uVar3) + 0x7fff ^ 0x24e040454e666522;
  uRam0000000183287ec0 = (uRam0000000183287ec0 * -0x4a39b9d04a8f0921 ^ uRam0000000183287e88) + uVar3
  ;
  uRam0000000183287be0 = uRam0000000183287ec0 ^ uRam0000000183287e88;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_181a58090,_UNK_1800170c0);
  lRam00000001832880a0 = 0x7fff;
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar9 + uRam0000000183287fa0;
  if (auVar7._4_4_ < 0) {
    uVar3 = uRam0000000183287c30 ^ uVar9;
  }
  uRam00000001832880d8 = func_0x00018b0d0e00(SUB161(auVar6 ^ _UNK_181a58090,5) ^ uVar3);
  uVar2 = (uint)param_4 & 0x7fff;
  uVar9 = (ulonglong)uVar2;
  uRam0000000183287c10 = (uRam0000000183287c10 ^ uRam00000001832880d8) + uVar9 ^ 0xdb4c9f7a61aad167;
  uRam0000000183287dd8 =
       (uRam0000000183287dd8 * -0x768085a36c93efd5 ^ uRam0000000183287c10) + uRam00000001832880d8;
  uRam0000000183287c20 = uRam0000000183287dd8 ^ uRam0000000183287c10;
  uVar4 = (ulonglong)param_3;
  uVar3 = uVar9 ^ 0x84222325 ^ uRam0000000183287fd0;
  lVar5 = (uVar9 ^ 0x84222325) + uRam0000000183287c68;
  uVar8 = uVar3 + lVar5;
  uVar10 = (uVar4 ^ uRam0000000183287c68) + uRam0000000183287fd0 + uVar4;
  uVar3 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar3;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar4 ^ uRam0000000183287c68;
  uRam0000000183288038 = uVar9;
  uRam0000000183287e88 =
       func_0x00018b0d0e00((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183287fd0 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar3 = uVar4 ^ (uVar2 | param_3) ^ uRam0000000183287e88;
  uVar4 = (uVar9 + uVar4) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183288048 = (uRam0000000183288048 ^ uVar3) + uVar4 ^ 0xb96ff308232c4649;
  uRam0000000183287cf0 = (uRam0000000183287cf0 * 0x2f69be6a9e49765b ^ uRam0000000183288048) + uVar3;
  uRam0000000183287fd0 = uRam0000000183287cf0 ^ uRam0000000183288048;
  uRam0000000183287c00 = uRam0000000183287e10 ^ uVar4;
  uVar4 = uVar4 & 0xffffffff;
  uVar3 = (uRam0000000183287ce0 ^ _UNK_181a580a0) + uRam0000000183287b18 + 0xcfc56b8c;
  uVar9 = (uRam0000000183287b18 ^ _UNK_181a580a8) + uRam0000000183287ce0 + 0x9318a696;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287ce0 ^ _UNK_181a580a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183287b18 ^ _UNK_181a580a8;
  uRam0000000183287fd8 = uVar4;
  uRam0000000183287b50 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183287ce0 + 0x9318a696) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183287b18 + 0xcfc56b8c));
  uVar3 = (uRam0000000183287b50 & 0xffffffffffff) - (uRam0000000183287b50 >> 1 & 0x555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam0000000183287b50 & 0xffffffffffff;
  uRam0000000183287df0 = (uRam0000000183287df0 ^ uVar3) + 0xd8ffee3f ^ 0x7455bb2a15cd4738;
  uRam0000000183287fe0 = (uRam0000000183287fe0 * -0x35eaeab87c4c0e47 ^ uRam0000000183287df0) + uVar3
  ;
  uRam0000000183287fa8 = uRam0000000183287fe0 ^ uRam0000000183287df0;
  uRam0000000183287ce8 = 0xd8ffee3f;
  uRam0000000183287de8 = func_0x00018b0d0e00(uRam0000000183288080 ^ 0xa6ff86cf0008a7);
  uRam0000000183287dd0 = uRam0000000183287dd0 - 0x32b8c56 ^ 0xde8e3d9f18d8cef5;
  uRam0000000183287f58 = uRam0000000183287d40 * 0x65ec24f4eab0ab21;
  uRam0000000183287d40 = uRam0000000183287f58 ^ uRam0000000183287dd0;
  uRam0000000183288090 = 0xfcd473aa;
  uRam0000000183287d30 = func_0x00018b0d0e00(uRam0000000183287b98 + 0x23007cd3fff8ff ^ 0x40);
  uVar3 = (uRam0000000183287d30 & 0x7fffffffffffffff) >> 1 |
          uRam0000000183287d30 & 0x7fffffffffffffff;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam0000000183287d30 & 0x7fffffffffffffff;
  uVar3 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar9;
  uRam0000000183287e90 = uRam0000000183287bd8 ^ uVar9 ^ 0x32bfc9d;
  uRam0000000183287d28 = (uRam0000000183287d28 ^ uVar9) + 0x32bfc9d ^ 0x947babc865214a59;
  uRam0000000183287e30 = (uRam0000000183287e30 * 0x7241c3b5efe06bd7 ^ uRam0000000183287d28) + uVar9;
  uRam0000000183287d28 = uRam0000000183287e30 ^ uRam0000000183287d28;
  uRam0000000183287b90 = 0x32bfc9d;
  uRam0000000183287be8 = func_0x00018b0d0e00(lRam0000000183287e38 + 0xff5bffb6ee00b2ffU ^ 0x5f);
  uVar3 = uRam0000000183287be8 ^ 0x32bfc9d;
  uRam0000000183287e58 = uRam0000000183287f98 ^ uVar3 ^ 0x100007047;
  uRam0000000183287df0 = (uRam0000000183287df0 ^ uVar3) + 0x100007047 ^ 0x94f715c4a7ce6d3f;
  uRam0000000183287e88 = (uRam0000000183287e88 * 0x483a0115e8190173 ^ uRam0000000183287df0) + uVar3;
  uRam0000000183287de0 = uRam0000000183287e88 ^ uRam0000000183287df0;
  uRam0000000183287c58 = 0x7047;
  uVar3 = (uRam0000000183287ca8 ^ _UNK_181a580b0) + uRam0000000183287fb8 + 0x84222325;
  uVar9 = (uRam0000000183287fb8 ^ _UNK_181a580b8) + uRam0000000183287ca8 + 0xb6606c02;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287ca8 ^ _UNK_181a580b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183287fb8 ^ _UNK_181a580b8;
  uRam0000000183287e70 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183287ca8 + 0xb6606c02) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183287fb8 + 0x84222325));
  uRam0000000183288098 =
       (uRam0000000183288098 ^ uRam0000000183287e70) - 0xb6606c02 ^ 0x2553cc28a9b9f4b2;
  uRam0000000183288080 =
       (uRam0000000183288080 * -0x27a053cab550088d ^ uRam0000000183288098) + uRam0000000183287e70;
  uRam0000000183287e88 = uRam0000000183288080 ^ uRam0000000183288098;
  uRam0000000183287d70 = 0x499f93fe;
  uRam0000000183287d20 = func_0x00018b0d0e00(uRam0000000183287d00 ^ 0xfff0fff25fffbd94);
  uVar3 = uRam0000000183287d20 & 0x3ffffffffff ^ 0xb6606c02;
  uVar9 = uVar3 - (uVar3 >> 1 & 0x15555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3;
  uRam0000000183287c80 = uRam0000000183287ef8 ^ uVar3 ^ 0xb660dc49;
  uRam0000000183287cc0 = (uRam0000000183287cc0 ^ uVar3) + 0xb660dc49 ^ 0x85d7b46a5d5641af;
  uRam0000000183287ee0 = (uRam0000000183287ee0 * -0x2cbd2c1496282465 ^ uRam0000000183287cc0) + uVar3
  ;
  uRam0000000183287b50 = uRam0000000183287ee0 ^ uRam0000000183287cc0;
  uRam0000000183287e50 = 0xb660dc49;
  uVar3 = (~uRam0000000183287b98 + 0x499f93ff) *
          ((uRam0000000183287b88 ^ 0x3242ff6c) +
          (ulonglong)((uint)uRam0000000183287b88 & 0x3242ff6c) * 2);
  uVar3 = (uVar3 | uRam0000000183287b80) + (uVar3 & uRam0000000183287b80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287fd0 =
       func_0x00018b0d0e00((uVar3 | 0x7bdd6c92) + (ulonglong)((uint)uVar3 & 0x7bdd6c92));
  uVar9 = uRam0000000183287fd0 * 0x4455ffd0530bce5b;
  uRam0000000183287b30 = uRam0000000183287fa0 ^ uVar9 ^ 0x100007047;
  uVar3 = (uRam0000000183287cf8 ^ uVar9) + 0x100007047;
  uRam0000000183287cf8 = uVar3 ^ 0x1d2f27654b4d8a40;
  uRam0000000183287bf0 = (uRam0000000183287bf0 * -0x2c0807aa8969669f ^ uRam0000000183287cf8) + uVar9
  ;
  uRam0000000183288090 = uRam0000000183287bf0 ^ uRam0000000183287cf8;
  uRam00000001832880f0 = 0x7047;
  uVar3 = (~uRam0000000183287c28 + 0x5a18f503) *
          ((uVar3 ^ 0x1d2f2765cf6fa965) + (ulonglong)((uint)uRam0000000183287cf8 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183287e30) + (uVar3 & uRam0000000183287e30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287ca0 =
       func_0x00018b0d0e00((uVar3 | 0xde3ad627) + (ulonglong)((uint)uVar3 & 0xde3ad627));
  uVar9 = uRam0000000183287ca0 << 0x25 | uRam0000000183287ca0 >> 0x1b;
  uVar3 = uVar9 >> 1 | uVar9;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar9;
  uRam0000000183287ba0 = (uRam0000000183287ba0 ^ uVar9) - 0x5a18f502 ^ 0xe3e3bca43862c959;
  uRam0000000183287e20 = (uRam0000000183287e20 * -0x481b6119a3555613 ^ uRam0000000183287ba0) + uVar9
  ;
  uRam0000000183287b08 = uRam0000000183287e20 ^ uRam0000000183287ba0;
  uRam0000000183287b68 = 0xa5e70afe;
  uVar3 = (uRam0000000183287d38 ^ _UNK_181a580c0) + uRam0000000183287be0 + 0x84225362;
  uVar9 = (uRam0000000183287be0 ^ _UNK_181a580c8) + uRam0000000183287d38 + 0x5a18f502;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287d38 ^ _UNK_181a580c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183287be0 ^ _UNK_181a580c8;
  uRam0000000183287e28 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183287d38 + 0x5a18f502) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183287be0 + 0x84225362));
  uRam0000000183287f80 = uRam0000000183288098 ^ uRam0000000183287e28 ^ 0x5a196549;
  uRam0000000183287e00 =
       (uRam0000000183287e00 ^ uRam0000000183287e28) + 0x5a196549 ^ 0xcec812f5a9c8ccdf;
  uRam0000000183287b00 =
       (uRam0000000183287b00 * 0x6e3ed708a4dcda79 ^ uRam0000000183287e00) + uRam0000000183287e28;
  uRam0000000183287c38 = uRam0000000183287b00 ^ uRam0000000183287e00;
  uRam0000000183287f78 = 0x5a196549;
  uVar3 = (uRam0000000183287e68 ^ _UNK_181a580d0) + uRam0000000183287f70 + 0xde3b466c;
  uVar9 = (uRam0000000183287f70 ^ _UNK_181a580d8) + uRam0000000183287e68 + 0xa5e70afe;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287e68 ^ _UNK_181a580d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183287f70 ^ _UNK_181a580d8;
  uRam0000000183287b40 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183287e68 + 0xa5e70afe) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183287f70 + 0xde3b466c));
  uVar9 = uRam0000000183287b40 * -0x1c349d692a4ce307;
  uVar3 = uVar9 >> 1 | uVar9;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar9;
  uRam0000000183287b98 = uRam0000000183287f18 ^ uVar9 ^ 0x100007047;
  uRam0000000183287d10 = (uRam0000000183287d10 ^ uVar9) + 0x100007047 ^ 0xfaf20c0537c9d8ae;
  uRam0000000183287dc8 = (uRam0000000183287dc8 * 0x43a896dccaab0ff7 ^ uRam0000000183287d10) + uVar9;
  uRam00000001832880b8 = uRam0000000183287dc8 ^ uRam0000000183287d10;
  uRam0000000183287b80 = 0x7047;
  uRam0000000183287c28 = func_0x00018b0d0e00(lRam00000001832880a0 + 0x1e5f0021ffU ^ 0x33);
  uVar3 = (uRam0000000183287c28 << 0x2e | uRam0000000183287c28 >> 0x12) * 0x2095d063d225ec9b;
  uRam0000000183287d30 = uRam0000000183287d90 ^ uVar3 ^ 0x1573fbc3c;
  uRam0000000183287cf8 = (uRam0000000183287cf8 ^ uVar3) + 0x1573fbc3c ^ 0x69925bb035c8f5b2;
  uRam0000000183287e10 = (uRam0000000183287e10 * -0x7d11e465525af673 ^ uRam0000000183287cf8) + uVar3
  ;
  uRam0000000183287d98 = uRam0000000183287e10 ^ uRam0000000183287cf8;
  uRam0000000183287c68 = 0x573fbc3c;
  uVar3 = (~uRam0000000183287be8 + 0xd8ffee40) *
          ((uRam0000000183287de0 ^ 0xfa1deed8) +
          (ulonglong)((uint)uRam0000000183287de0 & 0xfa1deed8) * 2);
  uVar3 = (uVar3 | uRam0000000183287b78) + (uVar3 & uRam0000000183287b78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287fc8 =
       func_0x00018b0d0e00((uVar3 | 0x22e200e7) + (ulonglong)((uint)uVar3 & 0x22e200e7));
  uRam0000000183287ff8 =
       (uRam0000000183287ff8 ^ uRam0000000183287fc8 ^ 0xfeffefff) + 0x583fcc3d ^ 0x950ca94eeea0241e;
  uRam0000000183287e88 =
       (uRam0000000183287e88 * 0x699328bb25443c97 ^ uRam0000000183287ff8) +
       (uRam0000000183287fc8 ^ 0xfeffefff);
  uRam0000000183287ec8 = uRam0000000183287e88 ^ uRam0000000183287ff8;
  uRam0000000183287d50 = 0x583fcc3d;
  uVar3 = (~uRam0000000183287d10 + 0xb07f987b) *
          ((uRam0000000183287f20 ^ 0x22e200e7) +
          (ulonglong)((uint)uRam0000000183287f20 & 0x22e200e7) * 2);
  uVar3 = (uVar3 | uRam0000000183287ee0) + (uVar3 & uRam0000000183287ee0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287b50 =
       func_0x00018b0d0e00((uVar3 | 0x929d989d) + (ulonglong)((uint)uVar3 & 0x929d989d));
  uVar3 = (ulonglong)(~(uint)uRam0000000183287b50 & 0xa6c023c2);
  uRam0000000183288020 = uRam0000000183288038 ^ uVar3 ^ 0x1573fbc3c;
  uRam0000000183288058 = (uRam0000000183288058 ^ uVar3) + 0x1573fbc3c ^ 0x554c49f64c334a7a;
  uRam0000000183287b10 = (uRam0000000183287b10 * 0xf7b55a70d3106b1 ^ uRam0000000183288058) + uVar3;
  uRam0000000183288040 = uRam0000000183287b10 ^ uRam0000000183288058;
  uRam0000000183287fd0 = 0x573fbc3c;
  uVar3 = (uRam0000000183287b98 ^ 0x84225362) + uRam0000000183287ee8 + 0x84225362;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287b98 ^ 0x84225362;
  uVar9 = ((uRam0000000183287ee8 + uRam0000000183287b98) * 0x2000 |
          uRam0000000183287ee8 + uRam0000000183287b98 >> 0x33) ^ uRam0000000183287ee8;
  uRam0000000183287b40 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183287b98 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183287ee8 + 0x84225362));
  uVar3 = (ulonglong)(~(uint)uRam0000000183287b40 & 0x7047);
  uRam0000000183287d80 = (uRam0000000183287d80 ^ uVar3) + 0x7047 ^ 0x2026804d60518890;
  uRam0000000183287c98 = (uRam0000000183287c98 * -0x34728f2cc01ff5cd ^ uRam0000000183287d80) + uVar3
  ;
  uRam0000000183287b28 = uRam0000000183287c98 ^ uRam0000000183287d80;
  uRam0000000183287b88 = 0x7047;
  uVar3 = (~uRam0000000183287ea0 + 0x100000000) *
          ((uRam0000000183287d58 ^ 0xfa1deed8) +
          (ulonglong)((uint)uRam0000000183287d58 & 0xfa1deed8) * 2);
  uVar3 = (uVar3 | uRam0000000183287d00) + (uVar3 & uRam0000000183287d00);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287b90 =
       func_0x00018b0d0e00((uVar3 | 0x5e21127) + (ulonglong)((uint)uVar3 & 0x5e21127));
  uVar3 = (uRam0000000183287b90 ^ 0x7e3fcdfc81c03203) << 0x1f |
          (uRam0000000183287b90 ^ 0x7e3fcdfc81c03203) >> 0x21;
  uRam0000000183287b40 = (uRam0000000183287b40 ^ uVar3) + 0x81c03202 ^ 0x79045c447792dbb1;
  uRam0000000183287f40 = (uRam0000000183287f40 * 0x3abcd1e78b391823 ^ uRam0000000183287b40) + uVar3;
  uRam0000000183287f90 = uRam0000000183287f40 ^ uRam0000000183287b40;
  uRam0000000183287b50 = 0x81c03202;
  uRam0000000183287fe8 = func_0x00018b0d0e00(uRam0000000183287e08 + 0xff53ffdbc600dcff ^ 0x2a);
  uRam0000000183287d80 =
       uRam0000000183287d80 ^ uRam0000000183287fe8 ^ 0x7e3fcdfd ^ 0xeff8fe79924baa3f;
  uRam0000000183287be0 =
       (uRam0000000183287be0 * 0x155640b3aa1e9eb ^ uRam0000000183287d80) +
       (uRam0000000183287fe8 ^ 0x7e3fcdfd);
  uRam0000000183288098 = uRam0000000183287be0 ^ uRam0000000183287d80;
  uRam00000001832880f0 = 0;
  uVar3 = ((uRam0000000183287b38 ^ 0x84225362) +
          (ulonglong)((uint)uRam0000000183287b38 & 0x84225362) * 2) * -lRam0000000183287b70;
  uVar3 = (uVar3 | uRam0000000183287f50) + (uVar3 & uRam0000000183287f50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287b08 =
       func_0x00018b0d0e00((uVar3 | 0x84225362) + (ulonglong)((uint)uVar3 & 0x84225362));
  uVar3 = uRam0000000183287b08 << 0x35 | uRam0000000183287b08 >> 0xb;
  uRam0000000183287d58 = uRam0000000183287cd8 ^ uVar3 ^ 0x7047;
  uRam0000000183288008 = (uRam0000000183288008 ^ uVar3) + 0x7047 ^ 0x277c3d93072f761d;
  uRam0000000183287b00 = (uRam0000000183287b00 * -0x46eda8d4a5cc2cbf ^ uRam0000000183288008) + uVar3
  ;
  uRam0000000183287c08 = uRam0000000183287b00 ^ uRam0000000183288008;
  uRam0000000183287fa8 = 0x7047;
  uRam0000000183287f20 = func_0x00018b0d0e00(uRam0000000183288058 + 0xffe30083e5001dff ^ 0x99);
  uRam0000000183287e08 = uRam0000000183287e08 ^ uRam0000000183287f20 ^ 0x412ce56e25a32191;
  uRam0000000183287c18 =
       (uRam0000000183287c18 * 0x5111be147b36e055 ^ uRam0000000183287e08) + uRam0000000183287f20;
  uRam0000000183287b58 = uRam0000000183287c18 ^ uRam0000000183287e08;
  uRam0000000183287b80 = 0;
  uVar3 = (uRam0000000183287c50 ^ 0x84225362) + uRam0000000183287d90 + 0x84225362;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183287c50 ^ 0x84225362;
  uVar9 = ((uRam0000000183287d90 + uRam0000000183287c50) * 0x2000 |
          uRam0000000183287d90 + uRam0000000183287c50 >> 0x33) ^ uRam0000000183287d90;
  uRam0000000183287b78 =
       func_0x00018b0d0e00((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183287c50 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183287d90 + 0x84225362));
  uVar3 = uRam0000000183287b78 ^ 0x7047;
  uRam0000000183288090 = uRam0000000183287d40 ^ uVar3 ^ 0x7047;
  uRam0000000183287b28 = (uRam0000000183287b28 ^ uVar3) + 0x7047 ^ 0xbde6e25effef7aaa;
  uRam0000000183287ec0 = (uRam0000000183287ec0 * -0x319376f75d40ddf9 ^ uRam0000000183287b28) + uVar3
  ;
  uRam0000000183287ba8 = uRam0000000183287ec0 ^ uRam0000000183287b28;
  uRam0000000183287da8 = 0x7047;
  uVar3 = (~uRam0000000183287c00 + 0x7048) *
          ((uVar4 ^ 0x84222325 ^ uRam0000000183287cd8) +
          (ulonglong)((uint)uRam0000000183287cd8 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | uRam0000000183287f30) + (uVar3 & uRam0000000183287f30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183287cf0 =
       func_0x00018b0d0e00((uVar4 ^ 0x84225362 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ 0x84225362) & (uint)uVar3));
  uVar3 = ((uVar4 | 0x7040) ^ uRam0000000183287cf0) & 0x7fffffffffffffe0;
  uRam0000000183287df8 = uVar4 ^ 0x7047;
  uRam0000000183287b48 = (uRam0000000183287b48 ^ uVar3) + uRam0000000183287df8 ^ 0xe7e62e9cc937c600;
  uRam00000001832880d0 = (uRam00000001832880d0 * -0x46c69853df20397b ^ uRam0000000183287b48) + uVar3
  ;
  uRam0000000183287c90 = uRam00000001832880d0 ^ uRam0000000183287b48;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x13fec,0x323);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b0c88d9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a561f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fz; aRY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18b0d0e90, runtime 6ffff2ce0e90) =====

void FUN_18b0d0e90(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018b0d0edb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a58200 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fz; aRZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18b0d1ea0, runtime 6ffff2ce1ea0) =====

void FUN_18b0d1ea0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b0d1f29 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a587c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



