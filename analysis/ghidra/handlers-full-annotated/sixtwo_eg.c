// ===== Lsixtwo/eg; _bcedad5687c09f069cce1f935fb3cfb5 ()V (handler @ image 18d326bf0, runtime 6ffff4f36bf0) =====

void FUN_18d326bf0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d326cd8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821b46f8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eg; ast ()Lsixtwo/cJ; (handler @ image 18d317ea0, runtime 6ffff4f27ea0) =====

void FUN_18d317ea0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018d317ec0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821b0f90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eg; asu ()Lsixtwo/cJ; (handler @ image 18d3180a0, runtime 6ffff4f280a0) =====

void FUN_18d3180a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018d3180c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821b1070 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eg; asv (IJ)I (handler @ image 18d3182a0, runtime 6ffff4f282a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d3182a0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = (~uRam0000000183356df8 + 0xa54658f40ceadda0) *
          ((uRam00000001833569d8 ^ 0x35f65757fa6f16ff) +
          (uRam00000001833569d8 & 0x35f65757fa6f16ff) * 2);
  uVar4 = (uVar4 | uRam0000000183356ea0) + (uVar4 & uRam0000000183356ea0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833569f0 =
       func_0x00018d322e40((uVar4 | 0x90b00fa3f685cb60) + (uVar4 & 0x90b00fa3f685cb60));
  uVar4 = uRam00000001833569f0 << 0x22 | uRam00000001833569f0 >> 0x1e;
  uRam0000000183357098 = (uRam0000000183357098 ^ uVar4) + 0xb5f65ff77eeffddf ^ 0x1dcbd153bdccf6ff;
  uRam0000000183356920 = (uRam0000000183356920 * -0x678f244971772f01 ^ uRam0000000183357098) + uVar4
  ;
  uRam0000000183356bf8 = uRam0000000183356920 ^ uRam0000000183357098;
  uRam0000000183356b58 = 0xb5f65ff77eeffddf;
  uVar4 = (~uRam0000000183356f48 + 0x18d9c2b5c55bdebc) *
          ((uRam00000001833570a0 ^ 0xe8a560145bab8c68) +
          (uRam00000001833570a0 & 0x68a560145bab8c68) * 2);
  uVar4 = (uVar4 | uRam0000000183356ff8) + (uVar4 & uRam0000000183356ff8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  lRam0000000183356d08 =
       func_0x00018d322e40((uVar4 | 0xf07ca2a19ef052d3) + (uVar4 & 0xf07ca2a19ef052d3));
  uVar3 = lRam0000000183356d08 * -0x1ddab5ea5a196e4d;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  uRam0000000183356a58 = (uRam0000000183356a58 ^ uVar3) + 0xf07ca2a11ad271f6 ^ 0xf11c9090d68bcf5d;
  uRam0000000183356c68 = (uRam0000000183356c68 * -0x78fe74f77c1b1539 ^ uRam0000000183356a58) + uVar3
  ;
  uRam0000000183356df8 = uRam0000000183356c68 ^ uRam0000000183356a58;
  uRam0000000183356be8 = 0xf07ca2a11ad271f6;
  uVar4 = (uRam0000000183356c88 ^ _UNK_1821b2fe0) + uRam0000000183356c68 + 0x84225cda;
  uVar3 = (uRam0000000183356c68 ^ _UNK_1821b2fe8) + uRam0000000183356c88 + 0x55592d21a696cad4;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183356c88 ^ _UNK_1821b2fe0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183356c68 ^ _UNK_1821b2fe8;
  uRam0000000183356af8 =
       func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183356c88 + 0x55592d21a696cad4) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183356c68 + 0x84225cda));
  uVar3 = uRam0000000183356af8 ^ 0x4137a629bed3352c;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar3;
  uRam00000001833570c0 = uRam0000000183356e68 ^ uVar3 ^ 0x55592d21a6974ad3;
  uRam0000000183356f60 = (uRam0000000183356f60 ^ uVar3) + 0x55592d21a6974ad3 ^ 0x8559d84d5c1905b3;
  uRam0000000183356b90 = (uRam0000000183356b90 * 0x3f1892303e63ce63 ^ uRam0000000183356f60) + uVar3;
  uRam0000000183356970 = uRam0000000183356b90 ^ uRam0000000183356f60;
  uRam0000000183356d80 = 0x55592d21a6974ad3;
  uRam0000000183356f28 = func_0x00018d322e40(uRam0000000183356910 + 0x68c420b93591ccbc ^ 0x48);
  uRam0000000183356ac0 = uRam00000001833570d0 ^ uRam0000000183356f28 ^ 0x7fff;
  uRam0000000183356ae8 = (uRam0000000183356ae8 ^ uRam0000000183356f28) + 0x7fff ^ 0x233c4454a9e81e71
  ;
  uRam0000000183356b28 =
       (uRam0000000183356b28 * -0x3dd09aed8a3bca13 ^ uRam0000000183356ae8) + uRam0000000183356f28;
  uRam0000000183356e40 = uRam0000000183356b28 ^ uRam0000000183356ae8;
  uRam0000000183357058 = 0x7fff;
  uVar4 = (uRam0000000183356d10 ^ _UNK_1821b2ff0) + uRam0000000183356be0 + 0x84222325;
  uVar3 = (uRam0000000183356be0 ^ _UNK_1821b2ff8) + uRam0000000183356d10 + 0x10e2696074e5fd9f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183356d10 ^ _UNK_1821b2ff0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183356be0 ^ _UNK_1821b2ff8;
  uRam0000000183356e40 =
       func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183356d10 + 0x10e2696074e5fd9f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183356be0 + 0x84222325));
  uVar4 = uRam0000000183356e40 * -0x3f4c59128ba180a5 ^ 0x10e2696074e5fd9f;
  uRam0000000183356ac0 = (uRam0000000183356ac0 ^ uVar4) + 0xef1d969f8b1a0261 ^ 0xab809cb5f56f2b2a;
  uRam0000000183356a38 = (uRam0000000183356a38 * -0x3709f84f831c531 ^ uRam0000000183356ac0) + uVar4;
  uRam0000000183356e50 = uRam0000000183356a38 ^ uRam0000000183356ac0;
  uRam0000000183356f80 = 0xef1d969f8b1a0261;
  uRam00000001833569d8 = func_0x00018d322e40(uRam0000000183356e48 ^ 0xa061e16fc3273835);
  uVar4 = uRam00000001833570e0 ^ 0x10e2696074e5fd9f;
  uRam0000000183356cf8 = uRam0000000183356ba8 ^ uVar4 ^ 0x10e2696074e67d9e;
  uRam0000000183356cc0 = (uRam0000000183356cc0 ^ uVar4) + 0x10e2696074e67d9e ^ 0xc734d6acaabf5ab4;
  uRam0000000183356c80 = (uRam0000000183356c80 * -0x2e2b8ce53f259eed ^ uRam0000000183356cc0) + uVar4
  ;
  uRam0000000183356b70 = uRam0000000183356c80 ^ uRam0000000183356cc0;
  uRam0000000183356d48 = 0x10e2696074e67d9e;
  lRam0000000183356a98 = func_0x00018d322e40(lRam0000000183356fb8 + 0xa41c13a6ce623206U ^ 0x56);
  uRam0000000183357080 =
       (uRam0000000183357080 ^ lRam0000000183356a98 * -0x69578d5dc7c5b9cb) + 0xf8e35d23010bf82c ^
       0x3295aa22cc0082c8;
  uRam0000000183357098 =
       (uRam0000000183357098 * 0x7ccfef3db4972845 ^ uRam0000000183357080) +
       lRam0000000183356a98 * -0x69578d5dc7c5b9cb;
  uRam0000000183356a28 = uRam0000000183357098 ^ uRam0000000183357080;
  uRam0000000183356900 = 0xf8e35d23010bf82c;
  uRam0000000183356dc8 = func_0x00018d322e40(uRam0000000183356e00 + 0x34290b8602a1cdf8 ^ 0xfb);
  uVar4 = uRam0000000183356dc8 ^ 0x71ca2dcfef47fff;
  uRam0000000183356d70 = uRam0000000183356af0 ^ uVar4 ^ 0x71ca2dcfef487d3;
  uRam0000000183356ee0 = (uRam0000000183356ee0 ^ uVar4) + 0x71ca2dcfef487d3 ^ 0x29c0b90172bda6b0;
  uRam0000000183356ab8 = (uRam0000000183356ab8 * -0x6d4217954baf3167 ^ uRam0000000183356ee0) + uVar4
  ;
  uRam0000000183356d20 = uRam0000000183356ab8 ^ uRam0000000183356ee0;
  uRam0000000183356c58 = 0x71ca2dcfef487d3;
  uRam00000001833569d8 = func_0x00018d322e40(uRam0000000183356a90 ^ 0x52ab08f6a95b2d2f);
  uRam0000000183356dd8 = uRam0000000183356b68 ^ uRam00000001833569d8 ^ 0x7fff;
  uRam0000000183356d70 = (uRam0000000183356d70 ^ uRam00000001833569d8) + 0x7fff ^ 0xaba9768a04e102e1
  ;
  uRam0000000183356dd0 =
       (uRam0000000183356dd0 * 0x1d231e95b2ee5771 ^ uRam0000000183356d70) + uRam00000001833569d8;
  uRam0000000183356e48 = uRam0000000183356dd0 ^ uRam0000000183356d70;
  uRam0000000183356f50 = 0x7fff;
  uRam0000000183356c78 = func_0x00018d322e40(uRam0000000183356cd8 + 0xae67895ffc92e13a ^ 0xca);
  uVar4 = (~(uRam0000000183356c78 * 0xcb925e5d4d9c39d) & 0xb5f65ff77eeffddf) * 0x529116436b0041a1;
  uRam0000000183356ef0 = (uRam0000000183356ef0 ^ uVar4) + 0x458afd56643d8c29 ^ 0xdf42d9a9f7a365;
  uRam0000000183357078 = (uRam0000000183357078 * -0x71fe514c4fc246cd ^ uRam0000000183356ef0) + uVar4
  ;
  uRam0000000183356c98 = uRam0000000183357078 ^ uRam0000000183356ef0;
  uRam0000000183356e60 = 0x458afd56643d8c29;
  uVar4 = (uRam0000000183356d80 ^ _UNK_1821b3000) + uRam0000000183356ce8 + 0xb5f65ff7facddefa;
  uVar3 = (uRam0000000183356ce8 ^ _UNK_1821b3008) + uRam0000000183356d80 + 0xf07ca2a11ad271f6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183356d80 ^ _UNK_1821b3000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183356ce8 ^ _UNK_1821b3008;
  uRam0000000183356cd8 =
       func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183356d80 + 0xf07ca2a11ad271f6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183356ce8 + 0xb5f65ff7facddefa));
  uVar4 = uRam0000000183356cd8 - (uRam0000000183356cd8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183356cd8) << 5 | uRam0000000183356cd8 >> 0x3b;
  uRam0000000183356c20 = (uRam0000000183356c20 ^ uVar4) + 0xb07402a11ac271d6 ^ 0xd780c33c7053baab;
  uRam00000001833570a0 = (uRam00000001833570a0 * 0x397b3a77803e3cb1 ^ uRam0000000183356c20) + uVar4;
  uRam0000000183356dd0 = uRam00000001833570a0 ^ uRam0000000183356c20;
  uRam00000001833570c0 = 0xb07402a11ac271d6;
  uVar4 = (~uRam0000000183356a70 + 0x60e805423584e3ad) *
          ((uRam0000000183356ff8 ^ 0x458afd56e01faf0c) +
          (uRam0000000183356ff8 & 0x458afd56e01faf0c) * 2);
  uVar4 = (uVar4 | uRam0000000183356b60) + (uVar4 & uRam0000000183356b60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356b48 =
       func_0x00018d322e40((uVar4 | 0x2562f814d59b4ca0) + (uVar4 & 0x2562f814d59b4ca0));
  uVar4 = uRam0000000183356b48 ^ 0x458afd56643d8c29;
  uRam0000000183357070 = uRam0000000183356fd8 ^ uVar4 ^ 0xa673029899c26fd5;
  uRam0000000183357078 = (uRam0000000183357078 ^ uVar4) + 0xa673029899c26fd5 ^ 0x1439c05a23d0b72e;
  uRam0000000183356948 = (uRam0000000183356948 * 0x22ce15c4de328e29 ^ uRam0000000183357078) + uVar4;
  uRam0000000183356e08 = uRam0000000183356948 ^ uRam0000000183357078;
  uRam0000000183356fa8 = 0xa673029899c26fd5;
  uRam0000000183356b08 = func_0x00018d322e40(uRam0000000183356d10 ^ 0xffdeff83daffdd4e);
  uRam0000000183356ee8 = (uRam0000000183356b08 & 0xa673029899c26fd5) * -0x400f21c05dc4136f;
  uRam0000000183356df0 = uRam0000000183356df0 ^ uRam0000000183356ee8 ^ 0xcae02983666954aa;
  uRam0000000183356978 =
       (uRam0000000183356978 * 0x379e08a50c8c5c1b ^ uRam0000000183356df0) + uRam0000000183356ee8;
  uRam0000000183356a08 = uRam0000000183356978 ^ uRam0000000183356df0;
  uRam0000000183356bf0 = 0;
  uVar4 = (uRam0000000183356e40 ^ 0x84225cda) + uRam0000000183356ba0 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183356e40 ^ 0x84225cda;
  uVar3 = ((uRam0000000183356ba0 + uRam0000000183356e40) * 0x2000 |
          uRam0000000183356ba0 + uRam0000000183356e40 >> 0x33) ^ uRam0000000183356ba0;
  func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) - uRam0000000183356e40 ^
                      (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183356ba0 + 0x84225cda));
  uRam0000000183356f98 = uRam0000000183356e18 ^ uRam0000000183356930 ^ 0x7fff;
  uRam0000000183356fc8 = (uRam0000000183356fc8 ^ uRam0000000183356930) + 0x7fff ^ 0x2704eefbd0f51992
  ;
  uRam0000000183356dd8 =
       (uRam0000000183356dd8 * 0x7ccb80d962c0e14f ^ uRam0000000183356fc8) + uRam0000000183356930;
  uRam0000000183356c78 = uRam0000000183356dd8 ^ uRam0000000183356fc8;
  uRam0000000183356c68 = 0x7fff;
  uVar4 = ~uRam0000000183357028 *
          ((uRam0000000183356d28 ^ 0xb5f65ff7facddefa) +
          (uRam0000000183356d28 & 0x35f65ff7facddefa) * 2);
  uVar4 = (uVar4 | uRam0000000183356e00) + (uVar4 & uRam0000000183356e00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356e50 =
       func_0x00018d322e40((uVar4 | 0x4a09a00805322105) + (uVar4 & 0x4a09a00805322105));
  uVar4 = uRam0000000183356e50 << 7 | uRam0000000183356e50 >> 0x39;
  uRam0000000183357030 = (uRam0000000183357030 ^ uVar4) + 0x4a09a00881100220 ^ 0xf9202bba33169c08;
  uRam0000000183356948 = (uRam0000000183356948 * -0x4f4b03bef16291c5 ^ uRam0000000183357030) + uVar4
  ;
  uRam0000000183357068 = uRam0000000183356948 ^ uRam0000000183357030;
  uRam0000000183356928 = 0x4a09a00881100220;
  uVar4 = (uRam0000000183356f80 ^ _UNK_1821b3010) + uRam0000000183356930 + 0xb5f65ff7facddefa;
  uVar3 = (uRam0000000183356930 ^ _UNK_1821b3018) + uRam0000000183356f80 + 0x4a09a00881100220;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183356f80 ^ _UNK_1821b3010;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183356930 ^ _UNK_1821b3018;
  uRam0000000183356eb0 =
       func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183356f80 + 0x4a09a00881100220) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183356930 + 0xb5f65ff7facddefa));
  uVar4 = (uRam0000000183356eb0 ^ 0x1ff77eeffddf) & 0x1fffffffffff;
  uRam0000000183356ce0 = uRam0000000183356ce0 ^ uVar4 ^ 0x99a1a8dad4daba20;
  uRam0000000183356c30 = (uRam0000000183356c30 * 0x56f4fdf6808b8667 ^ uRam0000000183356ce0) + uVar4;
  uRam0000000183356bd8 = uRam0000000183356c30 ^ uRam0000000183356ce0;
  uRam0000000183356f00 = 0;
  uVar4 = ((uRam0000000183356b50 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183356b50 & 0x84225cda) * 2) * -uRam0000000183356d20;
  uVar4 = (uVar4 | uRam0000000183357000) + (uVar4 & uRam0000000183357000);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183357078 =
       func_0x00018d322e40((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = uRam0000000183357078 * -0x162616a291cbd67d << 0x2d |
          uRam0000000183357078 * -0x162616a291cbd67d >> 0x13;
  uRam0000000183356a88 = uRam0000000183356e40 ^ uVar4 ^ 0x7fff;
  uRam0000000183356be0 = (uRam0000000183356be0 ^ uVar4) + 0x7fff ^ 0x826918bdb62b624c;
  uRam0000000183356a30 = (uRam0000000183356a30 * -0x69ed19bf364caa01 ^ uRam0000000183356be0) + uVar4
  ;
  uRam0000000183356ad0 = uRam0000000183356a30 ^ uRam0000000183356be0;
  uRam0000000183356d20 = 0x7fff;
  uVar4 = (uRam0000000183356c40 ^ 0x84225cda) + uRam0000000183356c48 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183356c40 ^ 0x84225cda;
  uVar3 = ((uRam0000000183356c48 + uRam0000000183356c40) * 0x2000 |
          uRam0000000183356c48 + uRam0000000183356c40 >> 0x33) ^ uRam0000000183356c48;
  uRam0000000183356d20 =
       func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) - uRam0000000183356c40 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183356c48 + 0x84225cda));
  uRam0000000183356998 = uRam0000000183356d90 ^ uRam0000000183356d20 ^ 0x7fff;
  uRam0000000183356c78 = (uRam0000000183356c78 ^ uRam0000000183356d20) + 0x7fff ^ 0x37e4f79fb6a80887
  ;
  uRam0000000183356cf0 =
       (uRam0000000183356cf0 * -0x293a630426835191 ^ uRam0000000183356c78) + uRam0000000183356d20;
  uRam0000000183356f28 = uRam0000000183356cf0 ^ uRam0000000183356c78;
  uRam0000000183356b50 = 0x7fff;
  uVar4 = (~uRam0000000183356f58 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183356f90) +
          ((param_4 ^ 0x84222325) & uRam0000000183356f90) * 2);
  uVar4 = (uVar4 | uRam0000000183356f80) + (uVar4 & uRam0000000183356f80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356b20 =
       func_0x00018d322e40((param_4 ^ 0x84225cda | uVar4) + (uVar4 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uVar3 = (ulonglong)uVar2;
  uRam00000001833569c8 =
       (uRam00000001833569c8 ^ uRam0000000183356b20 ^ 0x7fff) + uVar3 ^ 0x4bf74d412655fca6;
  uRam0000000183356aa8 =
       (uRam0000000183356aa8 * -0x78b17dc58d4b59c7 ^ uRam00000001833569c8) +
       (uRam0000000183356b20 ^ 0x7fff);
  uRam0000000183357058 = uRam0000000183356aa8 ^ uRam00000001833569c8;
  uRam0000000183356eb0 = uRam00000001833569a0 ^ uVar3;
  uVar6 = (ulonglong)param_3;
  uVar4 = uVar3 ^ 0x84222325 ^ uRam0000000183356fc8;
  lVar5 = (uVar3 ^ 0x84222325) + uRam0000000183356918;
  uVar7 = uVar4 + lVar5;
  uVar8 = (uVar6 ^ uRam0000000183356918) + uRam0000000183356fc8 + uVar6;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar4;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar6 ^ uRam0000000183356918;
  uRam0000000183357088 = uVar3;
  uRam0000000183356f38 =
       func_0x00018d322e40((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183356fc8 + uVar6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uRam0000000183356a28 = (uVar3 + uVar6) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183356900 =
       (uRam0000000183356900 ^ uRam0000000183356f38 & 0x3fffffffffffffff) + uRam0000000183356a28 ^
       0xf7436f291717d3b;
  uRam0000000183356cf8 =
       (uRam0000000183356cf8 * 0x3fdf7d366d2ae737 ^ uRam0000000183356900) +
       (uRam0000000183356f38 & 0x3fffffffffffffff);
  uRam00000001833569c8 = uRam0000000183356cf8 ^ uRam0000000183356900;
  uRam0000000183356a28 = uRam0000000183356a28 & 0xffffffff;
  lRam0000000183356c18 = func_0x00018d322e40(uRam0000000183356918 ^ 0x65ff51090071f4);
  uVar4 = (lRam0000000183356c18 * -0x710e38d7a7e6a7f9 << 0x32 |
          (ulonglong)(lRam0000000183356c18 * -0x710e38d7a7e6a7f9) >> 0xe) ^ 0xa48a3cd2;
  uRam0000000183356d70 = (uRam0000000183356d70 ^ uVar4) + 0xf5ba7dfe ^ 0x47a7f06d63c3ccb;
  uRam0000000183356938 = (uRam0000000183356938 * -0x4bf90a3ae7973f35 ^ uRam0000000183356d70) + uVar4
  ;
  uRam0000000183356dc8 = uRam0000000183356938 ^ uRam0000000183356d70;
  uRam0000000183357090 = 0xf5ba7dfe;
  uVar4 = (uRam0000000183356db8 ^ _UNK_1821b3020) + uRam0000000183356d38 + 0xdd8637e8;
  uVar3 = (uRam0000000183356d38 ^ _UNK_1821b3028) + uRam0000000183356db8 + 0x12a57618;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183356db8 ^ _UNK_1821b3020;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183356d38 ^ _UNK_1821b3028;
  lVar5 = func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183356db8 + 0x12a57618)
                              ^ (uVar4 << 0x1d | uVar4 >> 0x23) -
                                (uRam0000000183356d38 + 0xdd8637e8));
  uRam0000000183356de8 = (ulonglong)((uint)lVar5 & 0x59a414cd);
  uRam0000000183356e10 =
       (uRam0000000183356e10 ^ uRam0000000183356de8) + 0x4b0162d5 ^ 0x247321f78c62630b;
  uRam0000000183356de8 = (lVar5 * -0x6856ab89fb348e8f ^ uRam0000000183356e10) + uRam0000000183356de8
  ;
  uRam0000000183356988 = uRam0000000183356de8 ^ uRam0000000183356e10;
  uRam0000000183356a90 = 0x4b0162d5;
  uVar4 = (~uRam0000000183356a80 + 0x96f04a25) *
          ((uRam0000000183356c00 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183356c00 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183356a88) + (uVar4 & uRam0000000183356a88);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356920 =
       func_0x00018d322e40((uVar4 | 0x12d26901) + (ulonglong)((uint)uVar4 & 0x12d26901));
  uRam0000000183356e00 = uRam0000000183356d88 * -0xe3e4cc79fc96345;
  uRam0000000183356f68 = uRam0000000183356f68 - 0x96f04a24 ^ 0x3d62d9285d98a74c;
  uRam0000000183356d88 = uRam0000000183356e00 ^ uRam0000000183356f68;
  uRam0000000183356998 = 0x690fb5dc;
  uVar4 = (~uRam0000000183357088 + 0x96f04a25) *
          ((uRam0000000183356e38 ^ 0x84222e39) +
          (ulonglong)((uint)uRam0000000183356e38 & 0x84222e39) * 2);
  uVar4 = (uVar4 | uRam0000000183356c78) + (uVar4 & uRam0000000183356c78);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356e80 =
       func_0x00018d322e40((uVar4 | 0x12d2641d) + (ulonglong)((uint)uVar4 & 0x12d2641d));
  uVar4 = (uRam0000000183356e80 ^ 0x7bab60be000) & 0xfffffffffffff000;
  uRam0000000183356f20 = uRam0000000183356fb0 ^ uVar4 ^ 0x96f05740;
  uRam0000000183357040 = (uRam0000000183357040 ^ uVar4) + 0x96f05740 ^ 0x22cea611847d647;
  uRam0000000183356be0 = (uRam0000000183356be0 * 0x90ac11d980d7d1f ^ uRam0000000183357040) + uVar4;
  uRam0000000183356a88 = uRam0000000183356be0 ^ uRam0000000183357040;
  uRam0000000183356ba0 = 0x96f05740;
  uRam00000001833570a0 = func_0x00018d322e40(uRam0000000183356dd0 + 0xff3f000858ff34ff ^ 0xc6);
  uVar4 = (ulonglong)(((uint)uRam00000001833570a0 ^ 0x96004440) & 0x96f05740) ^ 0x96f05740;
  uRam0000000183356c20 = uRam0000000183356e98 ^ uVar4 ^ 0x100000d1c;
  uRam0000000183356d18 = (uRam0000000183356d18 ^ uVar4) + 0x100000d1c ^ 0x1a4e3f165179bcf2;
  uRam0000000183356b98 = (uRam0000000183356b98 * 0x7f20013ae6aa3d73 ^ uRam0000000183356d18) + uVar4;
  uRam0000000183356910 = uRam0000000183356b98 ^ uRam0000000183356d18;
  uRam0000000183356b50 = 0xd1c;
  uRam0000000183357080 = func_0x00018d322e40(uRam0000000183357018 + 0x610052290080ff ^ 0x91);
  uRam0000000183356c90 =
       (uRam0000000183356c90 ^ uRam0000000183357080) - 0xf6a58252 ^ 0x5c9c214e1d7f6386;
  uRam0000000183356f48 =
       (uRam0000000183356f48 * 0xcf49a6d55a475c1 ^ uRam0000000183356c90) + uRam0000000183357080;
  uRam0000000183356df0 = uRam0000000183356f48 ^ uRam0000000183356c90;
  uRam0000000183356d90 = 0x95a7dae;
  uVar4 = (uRam0000000183356f10 ^ _UNK_1821b3030) + uRam0000000183356b20 + 0x84222325;
  uVar3 = (uRam0000000183356b20 ^ _UNK_1821b3038) + uRam0000000183356f10 + 0x7644d3a6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183356f10 ^ _UNK_1821b3030;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183356b20 ^ _UNK_1821b3038;
  uRam0000000183356e20 =
       func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183356f10 + 0x7644d3a6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183356b20 + 0x84222325));
  uRam0000000183356cf0 = uRam0000000183356cf0 - 0x7644d3a6 ^ 0xefe6d155d9415ae1;
  uRam0000000183356fd0 = uRam0000000183356f28 * 0x3de5977c4149f59;
  uRam0000000183356f28 = uRam0000000183356fd0 ^ uRam0000000183356cf0;
  uRam0000000183356cd8 = 0x89bb2c5a;
  uRam0000000183356e28 = func_0x00018d322e40(lRam0000000183356ab0 + 0x53008e90ffe5ffU ^ 0xb7);
  uRam0000000183356ff8 = uRam00000001833570e8 ^ uRam0000000183356e28 ^ 0x7644e0c2;
  uRam0000000183356a58 =
       (uRam0000000183356a58 ^ uRam0000000183356e28) + 0x7644e0c2 ^ 0xf7b390897a3ef00b;
  uRam0000000183356f20 =
       (uRam0000000183356f20 * 0x73154ef113a5bffb ^ uRam0000000183356a58) + uRam0000000183356e28;
  uRam0000000183357060 = uRam0000000183356f20 ^ uRam0000000183356a58;
  uRam0000000183356d20 = 0x7644e0c2;
  uVar4 = (~uRam0000000183356bf0 + 0x89bb2c5b) *
          ((uRam0000000183356b00 ^ 0xf266c3e7) +
          (ulonglong)((uint)uRam0000000183356b00 & 0xf266c3e7) * 2);
  uVar4 = (uVar4 | uRam0000000183356c40) + (uVar4 & uRam0000000183356c40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356a80 =
       func_0x00018d322e40((uVar4 | 0x7bddefbd) + (ulonglong)((uint)uVar4 & 0x7bddefbd));
  uVar4 = uRam0000000183356a80 >> 1 | uRam0000000183356a80;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam0000000183356a80;
  uRam0000000183356d88 = uRam0000000183356c28 ^ uVar4 ^ 0x100000d1c;
  uRam0000000183356e00 = (uRam0000000183356e00 ^ uVar4) + 0x100000d1c ^ 0x6f2baf4499620733;
  uRam0000000183356c78 = (uRam0000000183356c78 * 0x4babc82421d4d853 ^ uRam0000000183356e00) + uVar4;
  uRam0000000183356e50 = uRam0000000183356c78 ^ uRam0000000183356e00;
  uRam00000001833569a0 = 0xd1c;
  uVar4 = (~uRam0000000183357018 + 0x4b0162d6) *
          ((uRam0000000183356ed0 ^ 0x71985edb) +
          (ulonglong)((uint)uRam0000000183356ed0 & 0x71985edb) * 2);
  uVar4 = (uVar4 | uRam0000000183356dd0) + (uVar4 & uRam0000000183356dd0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356a18 =
       func_0x00018d322e40((uVar4 | 0x3a993c0e) + (ulonglong)((uint)uVar4 & 0x3a993c0e));
  uRam0000000183356ad0 = uRam0000000183356998 ^ uRam0000000183356a18 ^ 0x140bbe0d3;
  uRam0000000183356b30 =
       (uRam0000000183356b30 ^ uRam0000000183356a18) + 0x140bbe0d3 ^ 0xfcdb074d8140b372;
  uRam0000000183356ae0 =
       (uRam0000000183356ae0 * 0x4a3d67da03aa082d ^ uRam0000000183356b30) + uRam0000000183356a18;
  uRam00000001833569a0 = uRam0000000183356ae0 ^ uRam0000000183356b30;
  uRam0000000183356cb8 = 0x40bbe0d3;
  uRam00000001833569b0 = func_0x00018d322e40(uRam0000000183356d18 + 0x13ffda05ff96ff ^ 0x82);
  uRam0000000183356978 =
       (uRam0000000183356978 ^ uRam00000001833569b0 & 0xffffffffffe00000) + 0x410060d4 ^
       0x5cbc08dae2086353;
  uRam0000000183356af0 =
       (uRam0000000183356af0 * -0x150918d6d5abe01b ^ uRam0000000183356978) +
       (uRam00000001833569b0 & 0xffffffffffe00000);
  uRam0000000183356c30 = uRam0000000183356af0 ^ uRam0000000183356978;
  uRam0000000183356e08 = 0x410060d4;
  uRam0000000183357018 = func_0x00018d322e40(lRam0000000183356da0 + 0xffd60083e6ffe1ffU ^ 0xbc);
  uVar4 = (uRam0000000183357018 ^ 0xd1c) * 0x7d84b4d036b59f00 |
          (uRam0000000183357018 ^ 0xd1c) * 0x2e7d84b4d036b59f >> 0x38 & 0xffffffffffffffe0;
  uRam0000000183356a60 = uRam0000000183356a50 ^ uVar4 ^ 0xd1c;
  uRam0000000183356940 = (uRam0000000183356940 ^ uVar4) + 0xd1c ^ 0x8f99a5608d7bf441;
  uRam0000000183356f78 = (uRam0000000183356f78 * -0x595b44900177e959 ^ uRam0000000183356940) + uVar4
  ;
  uRam0000000183356e70 = uRam0000000183356f78 ^ uRam0000000183356940;
  uRam0000000183356c50 = 0xd1c;
  uVar4 = (~uRam00000001833569b0 + 0x100000000) *
          ((uRam0000000183356958 ^ 0x71985edb) +
          (ulonglong)((uint)uRam0000000183356958 & 0x71985edb) * 2);
  uVar4 = (uVar4 | uRam0000000183356de8) + (uVar4 & uRam0000000183356de8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356ab8 =
       func_0x00018d322e40((uVar4 | 0x8e67a124) + (ulonglong)((uint)uVar4 & 0x8e67a124));
  uVar4 = (uRam0000000183356ab8 ^ 0xf5ba7dfd0a458202) -
          ((uRam0000000183356ab8 ^ 0xf5ba7dfd0a458202) >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uRam0000000183356ab8 ^ 0xf5ba7dfdfffffffc ^
          (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6;
  uRam0000000183356d18 = (uRam0000000183356d18 ^ uVar4) + 0xa458201 ^ 0xbea5b615e6014ebf;
  uRam0000000183356ee0 = (uRam0000000183356ee0 * 0x2c5a0df762a6ec49 ^ uRam0000000183356d18) + uVar4;
  uRam0000000183356910 = uRam0000000183356ee0 ^ uRam0000000183356d18;
  lRam0000000183356d08 = 0xa458201;
  uRam0000000183356da8 = func_0x00018d322e40(uRam0000000183356ae0 ^ 0xffa3ff975600dc07);
  uVar4 = (ulonglong)(~((int)uRam0000000183356da8 * 0x5ae4e5c5) & 0xf5ba7dfe);
  uRam0000000183356990 = uRam0000000183356990 ^ uVar4 ^ 0x478e5818dbf7e170;
  uRam0000000183356cc8 = (uRam0000000183356cc8 * 0x25e04de1dc5a04c1 ^ uRam0000000183356990) + uVar4;
  uRam00000001833570f8 = uRam0000000183356cc8 ^ uRam0000000183356990;
  uRam0000000183357020 = 0;
  uVar4 = ((uRam0000000183357090 ^ 0x84222e39) +
          (ulonglong)((uint)uRam0000000183357090 & 0x84222e39) * 2) * -uRam0000000183356b28;
  uVar4 = (uVar4 | uRam0000000183357038) + (uVar4 & uRam0000000183357038);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183356f00 =
       func_0x00018d322e40((uVar4 | 0x84222e39) + (ulonglong)((uint)uVar4 & 0x84222e39));
  uVar4 = uRam0000000183356f00 & 0xfffffffffe000000;
  uRam0000000183356b00 = uRam0000000183356eb8 ^ uVar4 ^ 0xd1c;
  uRam0000000183356ec0 = (uRam0000000183356ec0 ^ uVar4) + 0xd1c ^ 0x960781b0415016b8;
  uRam0000000183357040 = (uRam0000000183357040 * -0x3e4780b2f89ffdb3 ^ uRam0000000183356ec0) + uVar4
  ;
  uRam0000000183356d38 = uRam0000000183357040 ^ uRam0000000183356ec0;
  uRam0000000183356ec8 = 0xd1c;
  uVar4 = (uRam0000000183357050 ^ _UNK_1821b3040) + uRam0000000183356a60 + 0x20a81ff7;
  uVar3 = (uRam0000000183356a60 ^ _UNK_1821b3048) + uRam0000000183357050 + 0xa48a3cd2;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183357050 ^ _UNK_1821b3040;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183356a60 ^ _UNK_1821b3048;
  uRam0000000183356e30 =
       func_0x00018d322e40((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183357050 + 0xa48a3cd2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183356a60 + 0x20a81ff7));
  uVar4 = (uRam0000000183356e30 ^ 0xa48a3c00) & 0xffffffffffffff00;
  uRam0000000183356b50 = uRam0000000183356b50 ^ uVar4 ^ 0xdfc56ccb629c8023;
  uRam0000000183356ad8 = (uRam0000000183356ad8 * 0x5e03ed8c2185f7af ^ uRam0000000183356b50) + uVar4;
  uRam0000000183356970 = uRam0000000183356ad8 ^ uRam0000000183356b50;
  uRam0000000183356a28 = 0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xca94,0x225);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d31a52d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821b1180 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eg; asw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d322ed0, runtime 6ffff4f32ed0) =====

void FUN_18d322ed0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d322f1b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821b3120 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eg; asx (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d323ee0, runtime 6ffff4f33ee0) =====

void FUN_18d323ee0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d323f69 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821b36e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



