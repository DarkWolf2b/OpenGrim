// ===== Lsixtwo/dL; _05bd19a8cf8c644a334ebd019e2b6fa0 ()V (handler @ image 18dd37a10, runtime 6ffff5947a10) =====

void FUN_18dd37a10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dd37af8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823af4c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dL; anq (Lsixtwo/hh;)V (handler @ image 18dd238f0, runtime 6ffff59338f0) =====

void FUN_18dd238f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xa95b,0x1dd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dd239b4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823aa5a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dL; anr (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18dd28b80, runtime 6ffff5938b80) =====

undefined8 FUN_18dd28b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/dL; ans (IJ)I (handler @ image 18dd28c10, runtime 6ffff5938c10) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd28c10(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = (~uRam0000000183386cd0 + 0x41d5861cdcd93b22) *
          ((uRam0000000183386c70 ^ 0xe0173e5e08800369) +
          (uRam0000000183386c70 & 0x60173e5e08800369) * 2);
  uVar4 = (uVar4 | uRam0000000183386b48) + (uVar4 & uRam0000000183386b48);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386c38 =
       func_0x00018dd33c60((uVar4 | 0xa1c2b842d4593848) + (uVar4 & 0xa1c2b842d4593848));
  uRam0000000183386bb8 =
       (uRam0000000183386bb8 ^ uRam0000000183386c38 ^ 0x1c0800050591b21) + 0xe1d7be5edcfb3b6d ^
       0x34e2dc109d210b74;
  uRam0000000183386b10 =
       (uRam0000000183386b10 * -0x2d2c0db5cc335689 ^ uRam0000000183386bb8) +
       (uRam0000000183386c38 ^ 0x1c0800050591b21);
  uRam0000000183386bc8 = uRam0000000183386b10 ^ uRam0000000183386bb8;
  uRam0000000183386c08 = 0xe1d7be5edcfb3b6d;
  uVar4 = (uRam0000000183386be8 ^ _UNK_1823adcb0) + uRam0000000183386c88 + 0x9e55397e7148eec3;
  uVar6 = (uRam0000000183386c88 ^ _UNK_1823adcb8) + uRam0000000183386be8 + 0xca4afcf10752a6cb;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386be8 ^ _UNK_1823adcb0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386c88 ^ _UNK_1823adcb8;
  uRam0000000183386c60 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183386be8 + 0xca4afcf10752a6cb) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183386c88 + 0x9e55397e7148eec3));
  uVar4 = uRam0000000183386c60 - (uRam0000000183386c60 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183386c60;
  uRam0000000183386b70 = (uRam0000000183386b70 ^ uVar4) + 0x541fc58ff2386b2d ^ 0xb20bb60aebba108c;
  uRam0000000183386b98 = (uRam0000000183386b98 * 0x4d5738833344df6f ^ uRam0000000183386b70) + uVar4;
  uRam0000000183386b50 = uRam0000000183386b98 ^ uRam0000000183386b70;
  uRam0000000183386b40 = 0x541fc58ff2386b2d;
  uVar4 = (~uRam0000000183386c68 + 0x88dc619ef771501) *
          ((uRam0000000183386cb8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183386cb8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183386c68) + (uVar4 & uRam0000000183386c68);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386c78 =
       func_0x00018dd33c60((uVar4 | 0x88dc6196b553625) + (uVar4 & 0x88dc6196b553625));
  uVar4 = (uRam0000000183386c78 & 0xffffffff) * (_UNK_1823adcc0 & 0xffffffff) +
          ((ulonglong)_UNK_1823adcd0 * (uRam0000000183386c78 & 0xffffffff) +
           (uRam0000000183386c78 >> 0x20) * (_UNK_1823adcc0 & 0xffffffff) << 0x20) &
          0x7fffffffffffffff;
  uVar6 = (uRam0000000183386c00 ^ uVar4) + 0xf77239e61088eb00;
  uRam0000000183386c00 = uVar6 ^ 0x97b35c49d627db8c;
  uRam0000000183386b28 = (uRam0000000183386b28 * 0x3a9a6e3a3d70d74b ^ uRam0000000183386c00) + uVar4;
  uRam0000000183386bc0 = uRam0000000183386b28 ^ uRam0000000183386c00;
  uRam0000000183386cf8 = 0xf77239e61088eb00;
  uVar4 = (~uRam0000000183386b30 + 0x88dc619ef771501) *
          ((uVar6 ^ 0x97b35c4952058756) + (ulonglong)((uint)uRam0000000183386c00 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183386b30) + (uVar4 & uRam0000000183386b30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar6 = func_0x00018dd33c60((uVar4 | 0x88dc6196b5549da) + (uVar4 & 0x88dc6196b5549da));
  uVar4 = (uVar6 & 0xfffffffff8000000) + 0x7fff;
  uRam0000000183386b38 = uRam0000000183386b08 ^ uVar4 ^ 0x88dc619ef7794ff;
  uRam0000000183386b80 = (uVar4 ^ uVar6) + 0x88dc619ef7794ff ^ 0x89f775e75f6be1ab;
  uRam0000000183386bf0 =
       (uVar6 & 0xfffffffff8000000) +
       (uRam0000000183386bf0 * 0x60000b525e6f52ab ^ uRam0000000183386b80) + 0x7fff;
  uRam0000000183386c68 = uRam0000000183386b80 ^ uRam0000000183386bf0;
  uRam0000000183386b90 = 0x88dc619ef7794ff;
  uVar4 = (uRam0000000183386bc0 ^ _UNK_1823adce0) + uRam0000000183386ce8 + 0x88dc6196b55b7da;
  uVar6 = (uRam0000000183386ce8 ^ _UNK_1823adce8) + uRam0000000183386bc0 + 0xf77239e61088eb00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386bc0 ^ _UNK_1823adce0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386ce8 ^ _UNK_1823adce8;
  uVar4 = func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) -
                              (uRam0000000183386bc0 + 0xf77239e61088eb00) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) -
                              (uRam0000000183386ce8 + 0x88dc6196b55b7da));
  uVar6 = uVar4 * 0x2fd5ec30745198db & 0x7fffffffffffff;
  uRam0000000183386b40 = uRam0000000183386cc8 ^ uVar6 ^ 0x7fff;
  uRam0000000183386cb8 = (uVar4 ^ uVar6) + 0x7fff ^ 0xf736f40c3859c418;
  uRam0000000183386b58 = (uRam0000000183386b58 * 0x1be167f0bb2a0aeb ^ uRam0000000183386cb8) + uVar6;
  uRam0000000183386b08 = uRam0000000183386b58 ^ uRam0000000183386cb8;
  uRam0000000183386cb0 = 0x7fff;
  uVar4 = (~uRam0000000183386c30 + 0xb97269ed2878d58d) *
          ((uRam0000000183386b38 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183386b38 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183386bf0) + (uVar4 & uRam0000000183386bf0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386bb8 =
       func_0x00018dd33c60((uVar4 | 0xb97269edac5af6a9) + (uVar4 & 0xb97269edac5af6a9));
  uRam0000000183386b60 =
       (uRam0000000183386b60 ^ uRam0000000183386bb8 & 0x7ffffffffffc0000) + 0x468d9612d7872a74 ^
       0xa6f8fe2db7a02e78;
  uRam0000000183386c88 =
       (uRam0000000183386c88 * -0x20e6f9fc163101ad ^ uRam0000000183386b60) +
       (uRam0000000183386bb8 & 0x7ffffffffffc0000);
  uRam0000000183386b70 = uRam0000000183386c88 ^ uRam0000000183386b60;
  uRam0000000183386b08 = 0x468d9612d7872a74;
  uVar4 = (~uRam0000000183386c78 + 0x468d9612d7872a75) *
          ((uRam0000000183386c40 ^ 0xb97269edac5b76ae) +
          (uRam0000000183386c40 & 0x397269edac5b76ae) * 2);
  uVar4 = (uVar4 | uRam0000000183386c10) + (uVar4 & uRam0000000183386c10);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386b00 =
       func_0x00018dd33c60((uVar4 | 0xffffffff7bdc5cda) + (uVar4 & 0xffffffff7bdc5cda));
  uVar4 = (uRam0000000183386b00 ^ 0xe67d9cb4185090fc) * -0x2683813d25c66e01;
  uRam0000000183386b70 = uRam0000000183386c90 ^ uVar4 ^ 0x7fff;
  uRam0000000183386c98 = (uRam0000000183386c98 ^ uVar4) + 0x7fff ^ 0xc748731a138f03ae;
  uRam0000000183386c58 = (uRam0000000183386c58 * 0x218ba7d7a6cf09c3 ^ uRam0000000183386c98) + uVar4;
  uRam0000000183386be8 = uRam0000000183386c58 ^ uRam0000000183386c98;
  uRam0000000183386cb8 = 0x7fff;
  uVar4 = (~uRam0000000183386c60 + 0x7c1a1f0022d14b99) *
          ((uRam0000000183386ce0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183386ce0 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183386c00) + (uVar4 & uRam0000000183386c00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386ba0 =
       func_0x00018dd33c60((uVar4 | 0x7c1a1f00a6f368bd) + (uVar4 & 0x7c1a1f00a6f368bd));
  uVar4 = uRam0000000183386ba0 * 0x9098fb17c76b4b ^ 0x7c1a1f0022d14b98;
  uRam0000000183386cd8 = (uRam0000000183386cd8 ^ uVar4) + 0x83e5e0ffdd2eb468 ^ 0xa62acd6887959338;
  uRam0000000183386b68 = (uRam0000000183386b68 * 0x345d8b62486da2a3 ^ uRam0000000183386cd8) + uVar4;
  uRam0000000183386c90 = uRam0000000183386b68 ^ uRam0000000183386cd8;
  uRam0000000183386b38 = 0x83e5e0ffdd2eb468;
  uVar4 = func_0x00018dd33c60(uRam0000000183386c38 + 0xfff506a23e0bb09b ^ 0xf5);
  uVar4 = uVar4 ^ 0x9365f26882fab468;
  uRam0000000183386cb0 = uRam0000000183386b90 ^ uVar4 ^ 0x7c1a1f0022d1cb97;
  uRam0000000183386c18 = (uRam0000000183386c18 ^ uVar4) + 0x7c1a1f0022d1cb97 ^ 0xa7456c52082a22a8;
  uRam0000000183386bb0 = (uRam0000000183386bb0 * 0x1683452da097dc35 ^ uRam0000000183386c18) + uVar4;
  uRam0000000183386c60 = uRam0000000183386bb0 ^ uRam0000000183386c18;
  uRam0000000183386b38 = 0x7c1a1f0022d1cb97;
  uVar4 = (~uRam0000000183386c28 + 0x541fc58ff2386b2e) *
          ((uRam0000000183386c78 ^ 0xe1d7be5e58d91848) +
          (uRam0000000183386c78 & 0x61d7be5e58d91848) * 2);
  uVar4 = (uVar4 | uRam0000000183386cf8) + (uVar4 & uRam0000000183386cf8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386b28 =
       func_0x00018dd33c60((uVar4 | 0xb5c87bd1aae17365) + (uVar4 & 0xb5c87bd1aae17365));
  uVar4 = ((uRam0000000183386b28 ^ 0xf5dfffdffefb7b6d) << 0x2f |
          (uRam0000000183386b28 ^ 0xf5dfffdffefb7b6d) >> 0x11) ^ 0xe1d7be5edcfb3b6d;
  uRam0000000183386cf0 = uRam0000000183386bd8 ^ uVar4 ^ 0x35f783eecf33a69a;
  uRam0000000183386bf8 = (uRam0000000183386bf8 ^ uVar4) + 0x35f783eecf33a69a ^ 0xd3586258e39a599b;
  uRam0000000183386c10 = (uRam0000000183386c10 * 0x6c6b97be6182d125 ^ uRam0000000183386bf8) + uVar4;
  uRam0000000183386b48 = uRam0000000183386c10 ^ uRam0000000183386bf8;
  uRam0000000183386c98 = 0x35f783eecf33a69a;
  uVar4 = (uRam0000000183386be8 ^ _UNK_1823adcf0) + uRam0000000183386bf8 + 0xe1d7be5e58d91848;
  uVar6 = (uRam0000000183386bf8 ^ _UNK_1823adcf8) + uRam0000000183386be8 + 0x541fc58ff2386b2d;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386be8 ^ _UNK_1823adcf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386bf8 ^ _UNK_1823adcf8;
  uRam0000000183386c28 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183386be8 + 0x541fc58ff2386b2d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183386bf8 + 0xe1d7be5e58d91848));
  uRam0000000183386b70 =
       (uRam0000000183386b70 ^ ~uRam0000000183386c28 & 0xe1d7be5edcfb3b6d) + 0xb5c87bd12ec35040 ^
       0xc25eac0c5df1d907;
  uRam0000000183386b90 =
       (uRam0000000183386b90 * -0x5d524f49c9275069 ^ uRam0000000183386b70) +
       (~uRam0000000183386c28 & 0xe1d7be5edcfb3b6d);
  uRam0000000183386ce0 = uRam0000000183386b90 ^ uRam0000000183386b70;
  uRam0000000183386b28 = 0xb5c87bd12ec35040;
  uRam0000000183386b00 = func_0x00018dd33c60(uRam0000000183386c78 ^ 0xb08cb895dabba12d);
  uRam0000000183386cc0 =
       (uRam0000000183386cc0 ^ ~uRam0000000183386b00 & 0xedcfb3b6d) + 0x4017840ed0382b2d ^
       0x558c1fd10cf8c61f;
  uRam0000000183386cb0 =
       (uRam0000000183386cb0 * -0x1e0a3edb0f9d504b ^ uRam0000000183386cc0) +
       (~uRam0000000183386b00 & 0xedcfb3b6d);
  uRam0000000183386b18 = uRam0000000183386cb0 ^ uRam0000000183386cc0;
  uRam0000000183386cd0 = 0x4017840ed0382b2d;
  uVar4 = (uRam0000000183386be8 ^ _UNK_1823add00) + uRam0000000183386c50 + 0xb5c87bd1aae17365;
  uVar6 = (uRam0000000183386c50 ^ _UNK_1823add08) + uRam0000000183386be8 + 0x802f081da070565a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386be8 ^ _UNK_1823add00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386c50 ^ _UNK_1823add08;
  uRam0000000183386b70 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183386be8 + 0x802f081da070565a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183386c50 + 0xb5c87bd1aae17365));
  uVar4 = ((~uRam0000000183386b70 & 0xb5c87bd12ec35040) << 0x24 |
          (~uRam0000000183386b70 & 0xb5c87bd12ec35040) >> 0x1c) ^ 0xb5c87bd12ec35040;
  uRam0000000183386bc0 = uRam0000000183386cd8 ^ uVar4 ^ 0x35f783eecf33a69a;
  uRam0000000183386ba8 = (uRam0000000183386ba8 ^ uVar4) + 0x35f783eecf33a69a ^ 0xc890ba3cb0f9f123;
  uRam0000000183386c40 = (uRam0000000183386c40 * -0x4bcf1a4dc53e0277 ^ uRam0000000183386ba8) + uVar4
  ;
  uRam0000000183386bc8 = uRam0000000183386c40 ^ uRam0000000183386ba8;
  uRam0000000183386ba0 = 0x35f783eecf33a69a;
  uVar4 = (uRam0000000183386b38 ^ _UNK_1823add10) + uRam0000000183386c98 + 0x35f783ee4b1185bf;
  uVar6 = (uRam0000000183386c98 ^ _UNK_1823add18) + uRam0000000183386b38 + 0x35f783eecf33a69a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386b38 ^ _UNK_1823add10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386c98 ^ _UNK_1823add18;
  uRam0000000183386c10 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183386b38 + 0x35f783eecf33a69a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183386c98 + 0x35f783ee4b1185bf));
  uRam0000000183386cc8 = 0x10f107f166af9037;
  uRam0000000183386b78 =
       (uRam0000000183386b78 * 0x56bb83b48de712d9 ^ 0x10f107f166af9037) + uRam0000000183386c10;
  uRam0000000183386b70 = uRam0000000183386b78 ^ 0x10f107f166af9037;
  uRam0000000183386bd0 = 0;
  uVar4 = ((uRam0000000183386c80 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183386c80 & 0x84225cda) * 2) * -uRam0000000183386cf0;
  uVar4 = (uVar4 | uRam0000000183386c20) + (uVar4 & uRam0000000183386c20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386bd8 =
       func_0x00018dd33c60((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = uRam0000000183386bd8 & 0xfffffffffffffff0;
  uRam0000000183386c70 = uRam0000000183386cb8 ^ uVar4 ^ 0x7fff;
  uRam0000000183386c48 = (uRam0000000183386c48 ^ uVar4) + 0x7fff ^ 0x35bcd2924f2e4d77;
  uRam0000000183386b30 = (uRam0000000183386b30 * 0x795808e35b34d0b ^ uRam0000000183386c48) + uVar4;
  uRam0000000183386b00 = uRam0000000183386b30 ^ uRam0000000183386c48;
  uRam0000000183386c28 = 0x7fff;
  uVar4 = (uRam0000000183386b80 ^ _UNK_1823add20) + uRam0000000183386b50 + 0xe1d7be5e58d91848;
  uVar6 = (uRam0000000183386b50 ^ _UNK_1823add28) + (uRam0000000183386b80 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386b80 ^ _UNK_1823add20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386b50 ^ _UNK_1823add28;
  uRam0000000183386cc8 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183386b80 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183386b50 + 0xe1d7be5e58d91848));
  uRam0000000183386c68 =
       (uRam0000000183386c68 ^ uRam0000000183386cc8 & 0xffffffffffffff80) + 0x1e2841a12304c492 ^
       0x60ad7205a8ad7878;
  uRam0000000183386c78 =
       (uRam0000000183386c78 * 0x3d9d690f8aa2bddb ^ uRam0000000183386c68) +
       (uRam0000000183386cc8 & 0xffffffffffffff80);
  uRam0000000183386c80 = uRam0000000183386c78 ^ uRam0000000183386c68;
  uRam0000000183386c18 = 0x1e2841a12304c492;
  uRam0000000183386c28 = func_0x00018dd33c60(uRam0000000183386bd0 + 0x20a3b2e9c6fdc48e ^ 0xfe);
  uVar4 = uRam0000000183386c28 ^ 0x1e2841a12304c492;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) << 0x1a | (uVar4 & 0x7ffffffffff) >> 0x11;
  uRam0000000183386b48 = uRam0000000183386b48 ^ uVar4 ^ 0x7081b30ae76573a1;
  uRam0000000183386b60 = (uRam0000000183386b60 * -0x32444794fa044f95 ^ uRam0000000183386b48) + uVar4
  ;
  uRam0000000183386c00 = uRam0000000183386b60 ^ uRam0000000183386b48;
  uRam0000000183386ce8 = 0;
  uRam0000000183386b88 = func_0x00018dd33c60(uRam0000000183386bb0 + 0x34007c25ffddff ^ 0x42);
  uRam0000000183386ce0 = uRam0000000183386bc8 ^ uRam0000000183386b88 ^ 0x7fff;
  uRam0000000183386bb0 = (uRam0000000183386bb0 ^ uRam0000000183386b88) + 0x7fff ^ 0xecc65365b7491639
  ;
  uRam0000000183386b10 =
       (uRam0000000183386b10 * 0x30d4d206d1f3b02b ^ uRam0000000183386bb0) + uRam0000000183386b88;
  uRam0000000183386b50 = uRam0000000183386b10 ^ uRam0000000183386bb0;
  uRam0000000183386c18 = 0x7fff;
  uRam0000000183386b30 = func_0x00018dd33c60(uRam0000000183386be8 + 0x1f008422ffe1ff ^ 0x6d);
  uVar4 = ~((uRam0000000183386b30 ^ 0xe99e41d004431690) * 0x2af5466398eeb285) & 0xe0173e5e8ca2204c;
  uRam0000000183386cc8 = uRam0000000183386cc8 ^ uVar4 ^ 0x5afa2f048747b7f;
  uRam0000000183386cd0 = (uRam0000000183386cd0 * 0x2d6c5161b14d071f ^ uRam0000000183386cc8) + uVar4;
  uRam0000000183386cf8 = uRam0000000183386cd0 ^ uRam0000000183386cc8;
  uRam0000000183386b08 = 0;
  uVar4 = param_4 ^ 0x84222325 ^ uRam0000000183386bf0;
  lVar5 = (param_4 ^ 0x84222325) + uRam0000000183386bd8;
  uVar6 = uVar4 + lVar5;
  uVar7 = (uRam0000000183386bd8 ^ 0x7fff) + uRam0000000183386bf0 + 0x7fff;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183386bd8 ^ 0x7fff;
  uRam0000000183386c68 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183386bf0 + 0x7fff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar3 = (uint)param_4 & 0x7fff;
  uRam0000000183386cb8 = (ulonglong)uVar3;
  uRam0000000183386ba8 =
       (uRam0000000183386ba8 ^ uRam0000000183386c68) + uRam0000000183386cb8 ^ 0xf3e9f4ab1bed391b;
  uRam0000000183386c68 =
       (uRam0000000183386c68 * 0x2b97e01ecbca5c0f ^ uRam0000000183386ba8) + uRam0000000183386c68;
  uRam0000000183386b10 = uRam0000000183386c68 ^ uRam0000000183386ba8;
  uVar4 = (uRam0000000183386bc0 ^ _UNK_1823add30) + uRam0000000183386cf0 + 0xfb676a72;
  uVar6 = (uRam0000000183386cf0 ^ _UNK_1823add38) + uRam0000000183386bc0 + 0x10626374;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386bc0 ^ _UNK_1823add30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386cf0 ^ _UNK_1823add38;
  uVar3 = uVar3 ^ param_3;
  uRam0000000183386ce0 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183386bc0 + 0x10626374) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183386cf0 + 0xfb676a72));
  uVar4 = (uRam0000000183386ce0 ^ 0x6f050803) << 0x1a |
          ((uRam0000000183386ce0 ^ 0x6f050803) & 0x7fffffffffffffff) >> 0x26;
  uRam0000000183386b38 = (uRam0000000183386b38 ^ uVar4) + 0x7f676b77 ^ 0xd95e025ce94bea15;
  uRam0000000183386b18 = (uRam0000000183386b18 * 0x1f3c235b0d46e93f ^ uRam0000000183386b38) + uVar4;
  uRam0000000183386b90 = uRam0000000183386b18 ^ uRam0000000183386b38;
  uRam0000000183386bb0 = 0x7f676b77;
  uVar4 = (uRam0000000183386b28 ^ _UNK_1823add40) + uRam0000000183386b70 + 0x55b82456;
  uVar6 = (uRam0000000183386b70 ^ _UNK_1823add48) + uRam0000000183386b28 + 0x2e663f92;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386b28 ^ _UNK_1823add40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386b70 ^ _UNK_1823add48;
  uRam0000000183386bc0 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183386b28 + 0x2e663f92) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183386b70 + 0x55b82456));
  uVar4 = uRam0000000183386bc0 ^ 0x2e663f92;
  uRam0000000183386b80 = uRam0000000183386ca8 ^ uVar4 ^ 0x100004705;
  uRam0000000183386cc0 = (uRam0000000183386cc0 ^ uVar4) + 0x100004705 ^ 0xad499be46b2dbed8;
  uRam0000000183386c88 = (uRam0000000183386c88 * -0xe9b63d30e71e605 ^ uRam0000000183386cc0) + uVar4;
  uRam0000000183386ba0 = uRam0000000183386c88 ^ uRam0000000183386cc0;
  uRam0000000183386bd0 = 0x4705;
  uVar4 = func_0x00018dd33c60(uRam0000000183386b58 ^ 0xffeffffd86ffe161);
  uRam0000000183386bb0 =
       (uRam0000000183386bb0 ^ uVar4 & 0xffffffffffe00000) - 0x8a3c53a2 ^ 0xc8c66a2c4f763c9d;
  uRam0000000183386ba0 =
       (uRam0000000183386ba0 * 0x73a11055a60ce78f ^ uRam0000000183386bb0) +
       (uVar4 & 0xffffffffffe00000);
  uRam0000000183386c88 = uRam0000000183386ba0 ^ uRam0000000183386bb0;
  uRam0000000183386ba8 = 0x75c3ac5e;
  uRam0000000183386c68 = func_0x00018dd33c60(uRam0000000183386b90 ^ 0x34000e77ffe68b);
  uVar4 = uRam0000000183386c48 << 0x3a | uRam0000000183386c48 >> 6;
  uRam0000000183386be8 = (uRam0000000183386be8 ^ uVar4) - 0x8b0b77dd ^ 0xfef4c9ada709165b;
  uRam0000000183386bc8 =
       (uRam0000000183386bc8 * -0x47960dfb35b21273 ^ uRam0000000183386be8) + uVar4 ^
       uRam0000000183386be8;
  uRam0000000183386bd8 = 0x74f48823;
  uVar4 = (~uRam0000000183386c40 + 0x8b0b77de) *
          ((uRam0000000183386b18 ^ 0x84226420) +
          (ulonglong)((uint)uRam0000000183386b18 & 0x84226420) * 2);
  uVar4 = (uVar4 | uRam0000000183386b20) + (uVar4 & uRam0000000183386b20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x00018dd33c60((uVar4 | 0xf2913fd) + (ulonglong)((uint)uVar4 & 0xf2913fd));
  uRam0000000183386c70 = uVar4 ^ 0x4705;
  uVar6 = uRam0000000183386c70 - (uRam0000000183386c70 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uRam0000000183386c70 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183386c70;
  uRam0000000183386ba8 = uRam0000000183386ce8 ^ uRam0000000183386c70 ^ 0x8b0bbee2;
  uRam0000000183386be8 =
       (uRam0000000183386be8 ^ uRam0000000183386c70) + 0x8b0bbee2 ^ 0xa7295018de8855ee;
  uRam0000000183386c70 = (uVar4 * -0x5c6d80722afb9bdf ^ uRam0000000183386be8) + uRam0000000183386c70
  ;
  uRam0000000183386b28 = uRam0000000183386c70 ^ uRam0000000183386be8;
  uRam0000000183386b98 = uRam0000000183386b88 ^ 0x8b0bbee2;
  uRam0000000183386b70 = 0x8b0bbee2;
  uVar4 = (uRam0000000183386b80 ^ _UNK_1823add50) + uRam0000000183386bb8 + 0xf299dc7;
  uVar6 = (uRam0000000183386bb8 ^ _UNK_1823add58) + uRam0000000183386b80 + 0x74f48823;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386b80 ^ _UNK_1823add50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386bb8 ^ _UNK_1823add58;
  uRam0000000183386b98 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183386b80 + 0x74f48823) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183386bb8 + 0xf299dc7));
  uVar4 = uRam0000000183386b98 & 0xffffffffffffff80;
  uVar6 = uVar4 >> 1 | uVar4;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4;
  uRam0000000183386c68 = uRam0000000183386bc0 ^ uVar4 ^ 0x100004705;
  uRam0000000183386c40 = (uRam0000000183386c40 ^ uVar4) + 0x100004705 ^ 0xf07ab588150b7ea0;
  uRam0000000183386b78 = (uRam0000000183386b78 * 0x4f90e27aeb43ea53 ^ uRam0000000183386c40) + uVar4;
  uRam0000000183386c38 = uRam0000000183386b78 ^ uRam0000000183386c40;
  uRam0000000183386c50 = 0x4705;
  uVar4 = (uRam0000000183386c90 ^ _UNK_1823add60) + uRam0000000183386be8 + 0xfb454852;
  uVar6 = (uRam0000000183386be8 ^ _UNK_1823add68) + uRam0000000183386c90 + 0xa487bd11;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386c90 ^ _UNK_1823add60;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386be8 ^ _UNK_1823add68;
  uRam0000000183386bd0 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183386c90 + 0xa487bd11) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183386be8 + 0xfb454852));
  uVar4 = (uRam0000000183386bd0 ^ 0x7f676b77) * 0x2be04b10068a52cf;
  uRam0000000183386c50 = (uRam0000000183386c50 ^ uVar4) + 0xdbe0d666 ^ 0x2f4e9e976c8e0111;
  uRam0000000183386b90 = (uRam0000000183386b90 * -0x3741336dd28582a3 ^ uRam0000000183386c50) + uVar4
  ;
  uRam0000000183386b20 = uRam0000000183386b90 ^ uRam0000000183386c50;
  uRam0000000183386c60 = 0xdbe0d666;
  uRam0000000183386c50 = func_0x00018dd33c60(uRam0000000183386b58 ^ 0x23007be2ffdd44);
  uRam0000000183386c10 = uRam0000000183386c50 & 0x7fffffffffffffff ^ 0x23ef2888;
  uRam0000000183386cb8 = uRam0000000183386cb8 ^ uRam0000000183386c10 ^ 0xea321459705f2a42;
  uRam0000000183386b20 =
       (uRam0000000183386b20 * 0x221d0f7a61364de5 ^ uRam0000000183386cb8) + uRam0000000183386c10;
  uRam0000000183386bf8 = uRam0000000183386b20 ^ uRam0000000183386cb8;
  uRam0000000183386c60 = 0;
  uVar4 = ((uRam0000000183386b88 ^ 0x84226420) +
          (ulonglong)((uint)uRam0000000183386b88 & 0x84226420) * 2) * -uRam0000000183386b50;
  uVar4 = (uVar4 | uRam0000000183386b70) + (uVar4 & uRam0000000183386b70);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386bf8 =
       func_0x00018dd33c60((uVar4 | 0x84226420) + (ulonglong)((uint)uVar4 & 0x84226420));
  uVar6 = uRam0000000183386bf8 * -0x56ba63f439623cf5;
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar6;
  uRam0000000183386b18 = uRam0000000183386ca8 ^ uVar6 ^ 0x4705;
  uRam0000000183386bb8 = (uRam0000000183386bb8 ^ uVar6) + 0x4705 ^ 0x92d188577fe8ce22;
  uRam0000000183386bf0 = (uRam0000000183386bf0 * 0x16a2dfb63a85557f ^ uRam0000000183386bb8) + uVar6;
  uRam0000000183386c28 = uRam0000000183386bf0 ^ uRam0000000183386bb8;
  uRam0000000183386c60 = 0x4705;
  uVar4 = (~uRam0000000183386ba8 + 0x100000000) *
          ((uRam0000000183386cb0 ^ 0xfb454852) +
          (ulonglong)((uint)uRam0000000183386cb0 & 0xfb454852) * 2);
  uVar4 = (uVar4 | uRam0000000183386c00) + (uVar4 & uRam0000000183386c00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183386cd8 =
       func_0x00018dd33c60((uVar4 | 0x4bab7ad) + (ulonglong)((uint)uVar4 & 0x4bab7ad));
  uRam0000000183386c10 =
       (uRam0000000183386c10 ^ uRam0000000183386cd8) + 0x80989488 ^ 0x938f7f9229c51ff6;
  uRam0000000183386b48 =
       (uRam0000000183386b48 * 0x5d624cc7dfab46c3 ^ uRam0000000183386c10) + uRam0000000183386cd8;
  uRam0000000183386b38 = 0x80989488;
  uVar4 = (uRam0000000183386ce8 ^ _UNK_1823add70) + uRam0000000183386c18 + 0xfb454852;
  uVar6 = (uRam0000000183386c18 ^ _UNK_1823add78) + uRam0000000183386ce8 + 0x80989488;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183386ce8 ^ _UNK_1823add70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183386c18 ^ _UNK_1823add78;
  uRam0000000183386c30 =
       func_0x00018dd33c60((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183386ce8 + 0x80989488) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183386c18 + 0xfb454852));
  uRam0000000183386c38 =
       uRam0000000183386c38 ^ uRam0000000183386c30 & 0xffffffffffffe000 ^ 0x47a5c22ddb57dcff;
  uRam0000000183386cb0 =
       (uRam0000000183386cb0 * 0x60a7de5040febcff ^ uRam0000000183386c38) +
       (uRam0000000183386c30 & 0xffffffffffffe000);
  uRam0000000183386c38 = uRam0000000183386cb0 ^ uRam0000000183386c38;
  uRam0000000183386ce0 = 0;
  uVar6 = (ulonglong)uVar3;
  uVar4 = (~uRam0000000183386b68 + 0x4706) *
          ((uVar6 ^ 0x84222325 ^ uRam0000000183386b48) +
          (ulonglong)((uint)uRam0000000183386b48 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uRam0000000183386bc0) + (uVar4 & uRam0000000183386bc0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = func_0x00018dd33c60((uVar6 ^ 0x84226420 | uVar4) +
                              (ulonglong)((uint)(uVar6 ^ 0x84226420) & (uint)uVar4));
  lVar5 = uVar6 - (uVar3 & 0x4705) * 2;
  uRam0000000183386c78 = (uRam0000000183386c78 ^ uVar4) + lVar5 + 0x4705 ^ 0xb5461113fb463f2b;
  uRam0000000183386b60 = (uRam0000000183386b60 * 0x1c674c52cb0dfde3 ^ uRam0000000183386c78) + uVar4;
  uRam0000000183386cd0 = uRam0000000183386b60 ^ uRam0000000183386c78;
  uRam0000000183386ce8 = lVar5 + 0x4705U & 0xffffffff;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xa95b,0x1dd);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dd2ad58 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823abe50 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dL; ant (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18dd33cf0, runtime 6ffff5943cf0) =====

void FUN_18dd33cf0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018dd33d3b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823adef0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dL; anu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18dd34d00, runtime 6ffff5944d00) =====

void FUN_18dd34d00(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dd34d89 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823ae4b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



