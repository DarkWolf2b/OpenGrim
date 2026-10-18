// ===== STITCHED CORPUS: sixtwo.dL =====
// handlers: 6  continuation blocks: 58  unresolved table targets: 0
// tables not in tables.json: ['0x23adcb0', '0x23adcb8', '0x23adcc0', '0x23adcd0', '0x23adce0', '0x23adce8', '0x23adcf0', '0x23adcf8', '0x23add00', '0x23add08', '0x23add10', '0x23add18', '0x23add20', '0x23add28', '0x23add30', '0x23add38', '0x23add40', '0x23add48', '0x23add50', '0x23add58']

// ===== Lsixtwo/dL; _05bd19a8cf8c644a334ebd019e2b6fa0 ()V (handler @ image 18dd37a10, runtime 6ffff5947a10) =====

void FUN_18dd37a10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dd37af8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823af4c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/dL; anq (Lsixtwo/hh;)V (handler @ image 18dd238f0, runtime 6ffff59338f0) =====

void FUN_18dd238f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xa95b,0x1dd)
      /* POOL[0xa95b,0x1dd]: 43;Lnet/minecraft/class_2350;)V | sixtwo/dL | MvRUw | net/minecraft/class_243 | method_10263 | anr | lXvtl | method_10264 | method_10260 | (DDD)V | net/minecraft/class_3489 | field_42614 | Lnet/minecraft/class_6862; | field_17559 | method_31573 | (Lnet/minecraft/class_6862;)Z | sixtwo/hh | bcA | method_17742 | (Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965; | method_55754 | method_1560 | net/minecraft/class_1297 | method_5745 | (DFZ)Lnet/minecraft/class_239; | OKemK | xmVgM | VTfqp | ans | sixtwo/dN | YAFsA | aoo | field_1869 | mO */;
  cVar1 = JNI->ExceptionCheck(param_1);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xa95b,0x1dd)
      /* POOL[0xa95b,0x1dd]: 43;Lnet/minecraft/class_2350;)V | sixtwo/dL | MvRUw | net/minecraft/class_243 | method_10263 | anr | lXvtl | method_10264 | method_10260 | (DDD)V | net/minecraft/class_3489 | field_42614 | Lnet/minecraft/class_6862; | field_17559 | method_31573 | (Lnet/minecraft/class_6862;)Z | sixtwo/hh | bcA | method_17742 | (Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965; | method_55754 | method_1560 | net/minecraft/class_1297 | method_5745 | (DFZ)Lnet/minecraft/class_239; | OKemK | xmVgM | VTfqp | ans | sixtwo/dN | YAFsA | aoo | field_1869 | mO */;
  cVar2 = JNI->ExceptionCheck(param_1);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018dd34d89 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823ae4b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xdd239b7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd239b7(void)

{
  FUN_190ddce00();
  (*_DAT_1823aa758)();
  return;
}


// ----- block @ rva 0xdd264e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd264e6(void)

{
  (*_DAT_1823ab248)();
  return;
}


// ----- block @ rva 0xdd26520 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd26520(void)

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


// ----- block @ rva 0xdd26758 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd26758(void)

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


// ----- block @ rva 0xdd269b0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd269b0(void)

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


// ----- block @ rva 0xdd26a1d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd26a1d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1823aad58)();
  return;
}


// ----- block @ rva 0xdd272e1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd272e1(void)

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


// ----- block @ rva 0xdd273d9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd273d9(void)

{
  (*_DAT_1823ab418)();
  return;
}


// ----- block @ rva 0xdd27abe -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd27abe(void)

{
  (*_DAT_1823ab418)();
  return;
}


// ----- block @ rva 0xdd28903 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd28903(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1823aaf18)();
  return;
}


// ----- block @ rva 0xdd2895e -----

void FUN_18dd2895e(void)

{
  return;
}


// ----- block @ rva 0xdd289d5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd289d5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1823ab4c8)();
  return;
}


// ----- block @ rva 0xdd2ad5b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd2ad5b(void)

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


// ----- block @ rva 0xdd2aef2 -----

void FUN_18dd2aef2(void)

{
  return;
}


// ----- block @ rva 0xdd2b8e0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd2b8e0(void)

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


// ----- block @ rva 0xdd2bcca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd2bcca(void)

{
  int iVar1;
  undefined8 unaff_RSI;
  longlong *in_stack_00000030;
  int iStack0000000000000050;
  ulonglong uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  iStack0000000000000050 = 5;
  uStack0000000000000060 = 0x10;
  uStack0000000000000058 =
       (ulonglong)
       CONCAT24((short)((ulonglong)unaff_RSI >> 0x30),(int)(char)((ulonglong)unaff_RSI >> 0x10));
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000050 < 0 || iVar1 <= iStack0000000000000050) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd2c394 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd2c394(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  FUN_190ddfc90();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd2f574 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd2f574(void)

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


// ----- block @ rva 0xdd2fa63 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd2fa63(void)

{
  char cVar1;
  longlong *unaff_RDI;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined2 in_stack_000000c0;
  
  in_stack_00000040 = (**(code **)(unaff_RDI + JNI->AllocObject /*0xd8*/))();
  uStack00000000000000a4 = 0xce4ddeca;
  rdtsc();
  in_stack_000000b0 = 0x74007800690073;
  rdtsc();
  in_stack_000000b8 = 0x64002f006f0077;
  rdtsc();
  in_stack_000000c0 = 0x4c;
  in_stack_00000048 = in_stack_00000040;
  in_stack_00000050 =
       (**(code **)(in_stack_00000030 + JNI->NewString /*0x518*/))(in_stack_00000030,&stack0x000000b0,9);
  FUN_190ddfc90(in_stack_00000030,&stack0x00000038,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xdad,
                0x43);
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


// ----- block @ rva 0xdd33784 -----

undefined8 thunk_FUN_18dd2bf27(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xdd33ab2 -----

void FUN_18dd33ab2(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0xdd33d3e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd33d3e(void)

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


// ----- block @ rva 0xdd33d77 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd33d77(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1823ae3d8)();
  return;
}


// ----- block @ rva 0xdd33d92 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd33d92(void)

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


// ----- block @ rva 0xdd33e38 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd33e38(void)

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


// ----- block @ rva 0xdd3417b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd3417b(void)

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


// ----- block @ rva 0xdd341d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd341d3(void)

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


// ----- block @ rva 0xdd3449b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd3449b(void)

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


// ----- block @ rva 0xdd348e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd348e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1823adf08)();
  return;
}


// ----- block @ rva 0xdd34905 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd34905(void)

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


// ----- block @ rva 0xdd34bb6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd34bb6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1823ae3d8)();
  return;
}


// ----- block @ rva 0xdd34bd1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd34bd1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1823ae2b8)();
  return;
}


// ----- block @ rva 0xdd34c05 -----

void FUN_18dd34c05(void)

{
  return;
}


// ----- block @ rva 0xdd34d8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd34d8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1823aead8)();
  return;
}


// ----- block @ rva 0xdd358cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd358cc(void)

{
  (*_DAT_1823af3a8)();
  return;
}


// ----- block @ rva 0xdd35992 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd35992(void)

{
  (*_DAT_1823af378)();
  return;
}


// ----- block @ rva 0xdd35b27 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd35b27(void)

{
  (*_DAT_1823af3a8)();
  return;
}


// ----- block @ rva 0xdd360d7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd360d7(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1823ae978)();
  return;
}


// ----- block @ rva 0xdd36135 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd36135(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_1823aeba8)();
  return;
}


// ----- block @ rva 0xdd36cfa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd36cfa(void)

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


// ----- block @ rva 0xdd36d26 -----

void FUN_18dd36d26(void)

{
  return;
}


// ----- block @ rva 0xdd36e65 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd36e65(void)

{
  (*_DAT_1823af378)();
  return;
}


// ----- block @ rva 0xdd3765b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd3765b(void)

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


// ----- block @ rva 0xdd37864 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd37864(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1823aeec8)();
  return;
}


// ----- block @ rva 0xdd378ca -----

void FUN_18dd378ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xdd37afb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd37b51 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd37afb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdd38156 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd3816d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd38156(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdd39b4a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18dd39b4a(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd39bd1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd39bd1(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R14;
  longlong unaff_R15;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint unaff_XMM6_Da;
  longlong lVar7;
  uint unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint uVar9;
  undefined1 auVar8 [16];
  uint uVar10;
  uint uVar11;
  uint unaff_XMM15_Da;
  undefined1 *puVar12;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000ba;
  
  uStack00000000000000ba = in_stack_00000070;
  puVar12 = &stack0x000000ba;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  uVar3 = (unaff_RBP ^ 0x84222325) & _DAT_183386e28;
  uVar1 = (~_DAT_183386d48 + 2) * ((_DAT_183386e28 ^ unaff_RBP ^ 0x84222325) + uVar3 * 2);
  uVar1 = (uVar1 | _DAT_183386e18) + (uVar1 & _DAT_183386e18);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  uVar2 = uVar1 & (unaff_RBP ^ 0x84222324);
  _DAT_183386e68 =
       func_0x00018dd510b0((unaff_RBP ^ 0x84222324 | uVar1) + uVar2,uVar2,_DAT_183386e18,uVar3,
                           puVar12);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = unaff_RBP;
  uVar9 = (uint)(unaff_RBP >> 0x20);
  auVar5._8_4_ = (uint)unaff_RBP;
  auVar5._0_8_ = unaff_RBP;
  auVar5._12_4_ = uVar9;
  uVar10 = (uint)unaff_RBP & (uint)DAT_18001a990;
  uVar11 = SUB164(auVar5 | _DAT_18001a990,0);
  uVar1 = SUB168(auVar5 | _DAT_18001a990,0);
  uVar6 = SUB164(auVar8 ^ _DAT_18001a710,0);
  lVar7 = ((unaff_RBP & 0xffffffff) * (ulonglong)_DAT_1823b0a70 +
           (ulonglong)uVar9 * (ulonglong)_DAT_1823b0a60 << 0x20) +
          (unaff_RBP & 0xffffffff) * (ulonglong)_DAT_1823b0a60;
  uVar4 = SUB164(auVar8 ^ _DAT_18001a990,0);
  _DAT_183386e78 =
       (((ulonglong)uVar6 * (ulonglong)_DAT_1823b0a40 +
         ((ulonglong)uVar6 * (ulonglong)_DAT_1823b0a50 +
          (SUB168(auVar8 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_1823b0a40 << 0x20) + lVar7 +
        (ulonglong)uVar11 * (ulonglong)unaff_XMM10_Da +
        ((uVar1 >> 0x20) * (ulonglong)unaff_XMM10_Da + (ulonglong)uVar11 * (ulonglong)_DAT_1823b0a30
        << 0x20) +
        ((ulonglong)uVar10 * (ulonglong)_DAT_1823b0a30 << 0x20 |
        (ulonglong)uVar10 * (ulonglong)unaff_XMM10_Da) +
        ((unaff_RBP & 0xffffffff) * (ulonglong)_DAT_1823b0a10 +
         (ulonglong)uVar9 * (ulonglong)_DAT_1823b0a00 << 0x20) +
        (unaff_RBP & 0xffffffff) * (ulonglong)_DAT_1823b0a00) -
       ((ulonglong)uVar4 * (ulonglong)unaff_XMM9_Da +
        ((ulonglong)uVar4 * (ulonglong)_DAT_1823b0af0 +
         (SUB168(auVar8 ^ _DAT_18001a990,0) >> 0x20) * (ulonglong)unaff_XMM9_Da << 0x20) + lVar7 +
       (ulonglong)uVar11 * (ulonglong)unaff_XMM15_Da +
       ((ulonglong)uVar11 * (ulonglong)_DAT_1823b0ad0 + (uVar1 >> 0x20) * (ulonglong)unaff_XMM15_Da
       << 0x20) +
       ((ulonglong)uVar10 * (ulonglong)_DAT_1823b0ab0 << 0x20 |
       (ulonglong)uVar10 * (ulonglong)_DAT_1823b0aa0) +
       ((unaff_RBP & 0xffffffff) * (ulonglong)_DAT_1823b0a90 +
        (ulonglong)uVar9 * (ulonglong)unaff_XMM6_Da << 0x20) +
       (unaff_RBP & 0xffffffff) * (ulonglong)unaff_XMM6_Da)) + 0xbb7e661fb1d3f20b;
  _DAT_183386e50 = _DAT_183386d70 ^ _DAT_183386e68 ^ _DAT_183386e78;
  _DAT_183386d98 = (_DAT_183386d98 ^ _DAT_183386e68) + _DAT_183386e78 ^ 0xc50184557cb1844;
  _DAT_183386e30 = (_DAT_183386e30 * unaff_R15 ^ _DAT_183386d98) + _DAT_183386e68;
  _DAT_183386dd8 = _DAT_183386e30 ^ _DAT_183386d98;
                    /* WARNING: Could not recover jumptable at 0x00018dd39f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_R14 + (ulonglong)(_DAT_183386e78 == 8) * 8))();
  return;
}


// ----- block @ rva 0xdd39f27 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd39f6a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd39f27(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdd3a01a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd3a050 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd3a01a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdd3a095 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd3a0d8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd3a095(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdd3a0f2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd3a131 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd3a0f2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdd3ae5a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018dd3aeae */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18dd3ae5a(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xdd43bb8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd43bb8(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000058;
  int in_stack_00000068;
  
  lVar3 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  cVar1 = *(char *)(lVar3 + in_stack_00000068);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar4 = (ulonglong)(uint)(int)cVar1;
  uVar7 = (_DAT_183386df0 ^ _DAT_1823b1050) + _DAT_183386d30 + 0xeeadd24d;
  uVar8 = (_DAT_183386d30 ^ _UNK_1823b1058) + _DAT_183386df0 + 0xe4a808f2;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386df0 ^ _DAT_1823b1050;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183386d30 ^ _UNK_1823b1058;
  uVar7 = func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183386df0 + 0xe4a808f2) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386d30 + 0xeeadd24d));
  uVar7 = (uVar7 ^ 0x5f2e2530a3757ca2) & 0x7fffffffffffffff;
  _DAT_183386d00 = (_DAT_183386d00 ^ uVar7) + 0xeeaff9fa ^ 0x316d78a635a6662c;
  _DAT_183386d08 = (_DAT_183386d08 * -0x3c0d3e521ace26fb ^ _DAT_183386d00) + uVar7;
  _DAT_183386ea8 = _DAT_183386d08 ^ _DAT_183386d00;
  _DAT_183386ee8 = 0xeeaff9fa;
  uVar7 = (_DAT_1823b1060 ^ 0xeeaff9fa) + _DAT_183386dd8 + 0x586e5d2e;
  uVar8 = (_DAT_183386dd8 ^ _UNK_1823b1068) + 0x19924d367;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1823b1060 ^ 0xeeaff9fa;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183386dd8 ^ _UNK_1823b1068;
  _DAT_183386d78 =
       func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - 0x19924d367 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386dd8 + 0x586e5d2e));
  _DAT_183386d28 =
       (_DAT_183386d28 ^ _DAT_183386d78 * -0xbf95e70373f4a79) + 0x7638a766 ^ 0x446ff8e047e89b6a;
  _DAT_183386d30 =
       (_DAT_183386de0 * 0x7aa6a7ee3396a51d ^ _DAT_183386d28) + _DAT_183386d78 * -0xbf95e70373f4a79
       ^ _DAT_183386d28;
  _DAT_183386de0 = 0x7638a766;
  _DAT_183386eb0 = func_0x00018dd510b0(_DAT_183386ee0 ^ 0x46ffb35b0015a5);
  uVar7 = _DAT_183386eb0 << 0xe | _DAT_183386eb0 >> 0x32;
  _DAT_183386e38 = (_DAT_183386e38 ^ uVar7) - 0xf8486cc0 ^ 0x356b48f70e55facb;
  _DAT_183386d50 = (_DAT_183386d50 * 0x5941d75577f7eee3 ^ _DAT_183386e38) + uVar7;
  _DAT_183386e00 = _DAT_183386d50 ^ _DAT_183386e38;
  _DAT_183386e48 = 0x7b79340;
  uVar7 = (~_DAT_183386ea8 + 0xf8486cc1) *
          ((_DAT_183386d18 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386d18 & 0x842223da) * 2);
  uVar7 = (uVar7 | _DAT_183386d70) + (uVar7 & _DAT_183386d70);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183386ef0 = func_0x00018dd510b0((uVar7 | 0x7c6a4f1a) + (ulonglong)((uint)uVar7 & 0x7c6a4f1a))
  ;
  _DAT_183386dc0 = _DAT_183386d98 ^ _DAT_183386ef0 ^ 0xf8486dbf;
  _DAT_183386d90 = (_DAT_183386d90 ^ _DAT_183386ef0) + 0xf8486dbf ^ 0x268540dc284458e1;
  _DAT_183386d50 = (_DAT_183386d50 * 0x4e7eddeaf37fd851 ^ _DAT_183386d90) + _DAT_183386ef0;
  _DAT_183386ee8 = _DAT_183386d50 ^ _DAT_183386d90;
  _DAT_183386d58 = 0xf8486dbf;
  uVar7 = func_0x00018dd510b0(_DAT_183386e98 + 0xffafffdee20017ff ^ 0x32);
  uVar7 = (uVar7 >> 0x1f) * -0x3152fad580000000;
  _DAT_183386d38 = (_DAT_183386d38 ^ uVar7) - 0xa70af303 ^ 0xc03a2e67b8df091e;
  _DAT_183386d40 = (_DAT_183386d40 * 0x3d531f9c8a8721f ^ _DAT_183386d38) + uVar7;
  _DAT_183386d30 = _DAT_183386d40 ^ _DAT_183386d38;
  _DAT_183386e48 = _DAT_183386d80 ^ 0xffffffff58f50cfd;
  _DAT_183386ea0 = 0x58f50cfd;
  uVar7 = (_DAT_183386e28 ^ _DAT_1823b1070) + _DAT_183386e20 + 0x2328d727;
  uVar8 = (_DAT_183386e20 ^ _UNK_1823b1078) + _DAT_183386e28 + 0x58f50cfd;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386e28 ^ _DAT_1823b1070;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183386e20 ^ _UNK_1823b1078;
  _DAT_183386e60 =
       func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183386e28 + 0x58f50cfd) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386e20 + 0x2328d727));
  uVar7 = _DAT_183386e60 * -0x48a816f08f1314b9;
  _DAT_183386ea0 = _DAT_183386eb8 ^ uVar7 ^ 0x1000000ff;
  _DAT_183386df8 = (_DAT_183386df8 ^ uVar7) + 0x1000000ff ^ 0xb3c113398b1e6c95;
  _DAT_183386ee8 = (_DAT_183386ee8 * -0x7e9687f360e8123f ^ _DAT_183386df8) + uVar7;
  _DAT_183386d88 = _DAT_183386ee8 ^ _DAT_183386df8;
  _DAT_183386e08 = 0xff;
  uVar7 = (_DAT_183386e58 ^ _DAT_1823b1080) + _DAT_183386db8 + 0x842223da;
  uVar8 = (_DAT_183386db8 ^ _UNK_1823b1088) + _DAT_183386e58 + 0xdc0d4538;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386e58 ^ _DAT_1823b1080;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183386db8 ^ _UNK_1823b1088;
  _DAT_183386ed8 =
       func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183386e58 + 0xdc0d4538) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386db8 + 0x842223da));
  uVar7 = _DAT_183386ed8 ^ 0x38;
  _DAT_183386eb0 = _DAT_183386ee8 ^ uVar7 ^ 0xdc0d4637;
  _DAT_183386d68 = (_DAT_183386d68 ^ uVar7) + 0xdc0d4637 ^ 0xd1e6693fafe7ad6f;
  _DAT_183386ec0 = (_DAT_183386ec0 * 0x248fb7386bf4bdf1 ^ _DAT_183386d68) + uVar7;
  _DAT_183386ed0 = _DAT_183386ec0 ^ _DAT_183386d68;
  _DAT_183386da0 = 0xdc0d4637;
  _DAT_183386ea8 = func_0x00018dd510b0(_DAT_183386d10 + 0xffed000b86ffaaff ^ 0xb8);
  uVar7 = _DAT_183386ea8 ^ 0xeeaff9fa;
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar7;
  _DAT_183386d50 = _DAT_183386da8 ^ uVar7 ^ 0x164e8a160;
  _DAT_183386e00 = (_DAT_183386e00 ^ uVar7) + 0x164e8a160 ^ 0xb7895069b056cd4c;
  _DAT_183386d58 = (_DAT_183386d58 * -0x2eaea44b95809e6d ^ _DAT_183386e00) + uVar7;
  _DAT_183386dd0 = _DAT_183386d58 ^ _DAT_183386e00;
  _DAT_183386e48 = _DAT_183386ed8 ^ 0x164e8a160;
  _DAT_183386e68 = 0x64e8a160;
  uVar7 = (_DAT_183386e80 ^ _DAT_1823b1090) + _DAT_183386da0 + 0x6a8ddadf;
  uVar8 = (_DAT_183386da0 ^ _UNK_1823b1098) + _DAT_183386e80 + 0x7638a766;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386e80 ^ _DAT_1823b1090;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183386da0 ^ _UNK_1823b1098;
  _DAT_183386df0 =
       func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183386e80 + 0x7638a766) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386da0 + 0x6a8ddadf));
  _DAT_183386db0 = (_DAT_183386db0 ^ _DAT_183386df0) + 0x98975e9c ^ 0x24555b82637c0579;
  _DAT_183386d08 = (_DAT_183386d08 * 0x627bef4728fc425d ^ _DAT_183386db0) + _DAT_183386df0;
  _DAT_183386e48 = _DAT_183386d08 ^ _DAT_183386db0;
  _DAT_183386e88 = 0x98975e9c;
  uVar7 = (~_DAT_183386ea8 + 0x7638a767) *
          ((_DAT_183386e10 ^ 0x6a8ddadf) + (ulonglong)((uint)_DAT_183386e10 & 0x6a8ddadf) * 2);
  uVar7 = (uVar7 | _DAT_183386d38) + (uVar7 & _DAT_183386d38);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183386dc8 = func_0x00018dd510b0((uVar7 | 0x1cb57db9) + (ulonglong)((uint)uVar7 & 0x1cb57db9))
  ;
  uVar7 = _DAT_183386dc8 << 0x11 |
          (_DAT_183386dc8 & 0x7fffffffffffffff) >> 0x2f & 0xfffffffffffef000;
  _DAT_183386e48 = (_DAT_183386e48 ^ uVar7) + 0x6628a162 ^ 0xeea82661c24f908c;
  _DAT_183386dc0 = (_DAT_183386dc0 * -0xe60f01c8d890421 ^ _DAT_183386e48) + uVar7;
  _DAT_183386df0 = _DAT_183386dc0 ^ _DAT_183386e48;
  _DAT_183386d28 = 0x6628a162;
  uVar7 = (_DAT_183386dd0 ^ _DAT_1823b10a0) + _DAT_183386ea8 + 0xe0ca8245;
  uVar8 = (_DAT_183386ea8 ^ _UNK_1823b10a8) + _DAT_183386dd0 + 0x64e8a160;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386dd0 ^ _DAT_1823b10a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183386ea8 ^ _UNK_1823b10a8;
  _DAT_183386e70 =
       func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183386dd0 + 0x64e8a160) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386ea8 + 0xe0ca8245));
  _DAT_183386e38 = _DAT_183386e70 << 2 | _DAT_183386e70 >> 0x3e;
  _DAT_183386e20 = _DAT_183386e20 ^ _DAT_183386e38 ^ 0x311606e2e40cb0fd;
  _DAT_183386da0 = (_DAT_183386da0 * -0x6a871461bf30763b ^ _DAT_183386e20) + _DAT_183386e38;
  _DAT_183386ea8 = _DAT_183386da0 ^ _DAT_183386e20;
  _DAT_183386db0 = 0;
  uVar7 = ((_DAT_183386d88 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386d88 & 0x842223da) * 2) *
          -_DAT_183386e18;
  uVar7 = (uVar7 | _DAT_183386e60) + (uVar7 & _DAT_183386e60);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183386de8 = func_0x00018dd510b0((uVar7 | 0x842223da) + (ulonglong)((uint)uVar7 & 0x842223da))
  ;
  uVar7 = (ulonglong)(~(uint)_DAT_183386de8 & 0xff);
  _DAT_183386d50 = _DAT_183386e00 ^ uVar7 ^ 0xff;
  _DAT_183386e38 = (_DAT_183386e38 ^ uVar7) + 0xff ^ 0x6cf4d7c2c8400ffe;
  _DAT_183386e40 = (_DAT_183386e40 * 0x51b4c9fef52aa453 ^ _DAT_183386e38) + uVar7;
  _DAT_183386db0 = _DAT_183386e40 ^ _DAT_183386e38;
  _DAT_183386dc8 = 0xff;
  uVar7 = (~_DAT_183386d68 + 0x100000000) *
          ((_DAT_183386d00 ^ 0x6a8ddadf) + (ulonglong)((uint)_DAT_183386d00 & 0x6a8ddadf) * 2);
  uVar7 = (uVar7 | _DAT_183386ec0) + (uVar7 & _DAT_183386ec0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183386ea8 = func_0x00018dd510b0((uVar7 | 0x95722520) + (ulonglong)((uint)uVar7 & 0x95722520))
  ;
  uVar7 = (_DAT_183386ea8 ^ 0xffffffff) & 0x3ffffffffff;
  uVar8 = uVar7 - (((_DAT_183386ea8 ^ 0xffffffff) & 0x3ffffffffff) >> 1 & 0x15555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar7) <<
          0x2d | uVar7 >> 0x13;
  _DAT_183386dc0 = (_DAT_183386dc0 ^ uVar7) + 0x11500605 ^ 0x730bcfbb126e599d;
  _DAT_183386d50 = (_DAT_183386d50 * 0x1303ada1b7d35329 ^ _DAT_183386dc0) + uVar7;
  _DAT_183386ed0 = _DAT_183386d50 ^ _DAT_183386dc0;
  _DAT_183386ef0 = 0x11500605;
  uVar7 = (_DAT_183386dc8 ^ 0x842223da) + _DAT_183386e10 + 0x842223da;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386dc8 ^ 0x842223da;
  uVar8 = ((_DAT_183386e10 + _DAT_183386dc8) * 0x2000 | _DAT_183386e10 + _DAT_183386dc8 >> 0x33) ^
          _DAT_183386e10;
  _DAT_183386e08 =
       func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_183386dc8 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386e10 + 0x842223da));
  uVar7 = _DAT_183386e08 ^ 0xff;
  uVar8 = uVar7 >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar7) & 0x7fffffffffffffff;
  _DAT_183386d08 = _DAT_183386d48 ^ uVar7 ^ 0xff;
  _DAT_183386e00 = (_DAT_183386e00 ^ uVar7) + 0xff ^ 0xb92e32b2d1a637c3;
  _DAT_183386e20 = (_DAT_183386e20 * 0x453e0b550d9638d5 ^ _DAT_183386e00) + uVar7;
  _DAT_183386d78 = _DAT_183386e20 ^ _DAT_183386e00;
  _DAT_183386ec8 = 0xff;
  uVar7 = (_DAT_183386e28 ^ _DAT_1823b10b0) + _DAT_183386e20 + 0xeeadd24d;
  uVar8 = (_DAT_183386e20 ^ _UNK_1823b10b8) + _DAT_183386e28 + 0x6a8ff168;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386e28 ^ _DAT_1823b10b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183386e20 ^ _UNK_1823b10b8;
  uVar7 = func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183386e28 + 0x6a8ff168) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386e20 + 0xeeadd24d));
  _DAT_183386e28 = _DAT_183386e28 ^ uVar7 ^ 0x6a8ff168 ^ 0xea20b6a49a38e9a9;
  _DAT_183386d88 = (_DAT_183386d88 * -0x4d72687056947d29 ^ _DAT_183386e28) + (uVar7 ^ 0x6a8ff168);
  _DAT_183386e38 = _DAT_183386d88 ^ _DAT_183386e28;
  _DAT_183386ed8 = 0;
  uVar7 = (_DAT_183386ed0 ^ 0x842223da) + _DAT_183386de8 + 0x842223da;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386ed0 ^ 0x842223da;
  uVar8 = ((_DAT_183386de8 + _DAT_183386ed0) * 0x2000 | _DAT_183386de8 + _DAT_183386ed0 >> 0x33) ^
          _DAT_183386de8;
  _DAT_183386e50 =
       func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_183386ed0 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386de8 + 0x842223da));
  uVar7 = (ulonglong)(~((int)_DAT_183386e50 * 0x740be1bd) & 0xff);
  _DAT_183386de0 = _DAT_183386ea8 ^ uVar7 ^ 0xff;
  _DAT_183386ed0 = (_DAT_183386ed0 ^ uVar7) + 0xff ^ 0x392e0ce4545b6e1c;
  _DAT_183386e98 = (_DAT_183386e98 * 0xfbb26ced0c1ac7b ^ _DAT_183386ed0) + uVar7;
  _DAT_183386ef8 = _DAT_183386e98 ^ _DAT_183386ed0;
  _DAT_183386e90 = 0xff;
  uVar7 = uVar4 ^ 0x84222325 ^ _DAT_183386d78;
  lVar3 = (uVar4 ^ 0x84222325) + _DAT_183386e48;
  uVar8 = uVar7 + lVar3;
  uVar9 = (_DAT_183386e48 ^ 0xff) + _DAT_183386d78 + 0xff;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183386e48 ^ 0xff;
  uVar7 = func_0x00018dd510b0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183386d78 + 0xff) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - lVar3);
  uVar7 = uVar4 * 0xff ^ uVar7;
  uVar8 = uVar7 >> 1 | uVar7;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  _DAT_183386e40 = uVar4 & 0xff;
  _DAT_183386d10 = (_DAT_183386d10 ^ uVar7) + _DAT_183386e40 ^ 0x9e76f49fd0271d97;
  _DAT_183386e20 = (_DAT_183386e20 * -0x41f9ce3e49e43947 ^ _DAT_183386d10) + uVar7;
  _DAT_183386ef0 = _DAT_183386e20 ^ _DAT_183386d10;
  uVar8 = _DAT_183386e40 << 0x28;
  auVar5._8_8_ = uVar8;
  auVar5._0_8_ = in_stack_00000058 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_1823b10c0,_DAT_1800170c0);
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar4 = uVar7 + _DAT_183386e50;
  if (auVar6._4_4_ < 0) {
    uVar4 = _DAT_183386de8 ^ uVar7;
  }
  _DAT_183386df0 = func_0x00018dd510b0(SUB161(auVar5 ^ _DAT_1823b10c0,5) ^ uVar4);
  _DAT_183386d68 = uVar8 | in_stack_00000058;
  uVar4 = _DAT_183386df0 ^ _DAT_183386d68;
  uVar7 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  in_stack_00000058 =
       in_stack_00000058 ^
       (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar4;
  _DAT_183386db0 = (_DAT_183386db0 ^ in_stack_00000058) + _DAT_183386d68 ^ 0x9279a4bd3005af0c;
  _DAT_183386d40 = (_DAT_183386d40 * -0x1a54fc1533d09773 ^ _DAT_183386db0) + in_stack_00000058;
  _DAT_183386db8 = _DAT_183386d40 ^ _DAT_183386db0;
  iVar2 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar2 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd4c616 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd4c616(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_stack_00000050;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar4 = (ulonglong)param_1;
  uVar2 = (~_DAT_183386ec0 + 0xa6f08d15) *
          ((_DAT_183386ef8 ^ 0x84222325) + (ulonglong)((uint)_DAT_183386ef8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183386d00) + (uVar2 & _DAT_183386d00);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183386df0 = func_0x00018dd510b0((uVar2 | 0x22d2ae31) + (ulonglong)((uint)uVar2 & 0x22d2ae31))
  ;
  _DAT_183386d30 = (_DAT_183386d30 ^ _DAT_183386df0) - 0xa6f08d14 ^ 0x6bff85c8c32989c8;
  _DAT_183386e90 = (_DAT_183386e90 * 0x4099017df43580d5 ^ _DAT_183386d30) + _DAT_183386df0;
  _DAT_183386e70 = _DAT_183386e90 ^ _DAT_183386d30;
  _DAT_183386df8 = 0x590f72ec;
  uVar2 = (~_DAT_183386ee0 + 0xa6f08d15) *
          ((_DAT_183386d38 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386d38 & 0x842223da) * 2);
  uVar2 = (uVar2 | _DAT_183386d70) + (uVar2 & _DAT_183386d70);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183386dc0 = func_0x00018dd510b0((uVar2 | 0x22d2aece) + (ulonglong)((uint)uVar2 & 0x22d2aece))
  ;
  uVar2 = ((_DAT_183386dc0 ^ 0xa6499c86ec) << 0x2a | (_DAT_183386dc0 ^ 0xa6499c86ec) >> 0x16) ^ 0xff
  ;
  _DAT_183386e70 = _DAT_183386ec0 ^ uVar2 ^ 0xa6f08e13;
  _DAT_183386e28 = (_DAT_183386e28 ^ uVar2) + 0xa6f08e13 ^ 0x61e138ffb913c909;
  _DAT_183386e78 = (_DAT_183386e78 * 0x7f0f60e9b29e05d1 ^ _DAT_183386e28) + uVar2;
  _DAT_183386e48 = _DAT_183386e78 ^ _DAT_183386e28;
  _DAT_183386db0 = 0xa6f08e13;
  uVar2 = (_DAT_183386d50 ^ _DAT_1823b12f0) + _DAT_183386ea8 + 0x84222325;
  uVar7 = (_DAT_183386ea8 ^ _UNK_1823b12f8) + _DAT_183386d50 + 0x8cd32a48;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183386d50 ^ _DAT_1823b12f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386ea8 ^ _UNK_1823b12f8;
  _DAT_183386d18 =
       func_0x00018dd510b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386d50 + 0x8cd32a48) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183386ea8 + 0x84222325));
  _DAT_183386d20 =
       (_DAT_183386d20 ^ _DAT_183386d18 & 0x7fffffffffffffff) - 0x8cd32a48 ^ 0x8062c683bbcc7b3c;
  _DAT_183386d08 =
       (_DAT_183386d08 * 0xd35dba473541d57 ^ _DAT_183386d20) + (_DAT_183386d18 & 0x7fffffffffffffff)
  ;
  _DAT_183386d10 = _DAT_183386d08 ^ _DAT_183386d20;
  _DAT_183386e08 = 0x732cd5b8;
  uVar2 = (~_DAT_183386e10 + 0x8cd32a49) *
          ((_DAT_183386e80 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386e80 & 0x842223da) * 2);
  uVar2 = (uVar2 | _DAT_183386d00) + (uVar2 & _DAT_183386d00);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183386d00 = func_0x00018dd510b0((uVar2 | 0x8f10992) + (ulonglong)((uint)uVar2 & 0x8f10992));
  uVar2 = _DAT_183386d00 ^ 0x8cd32aff;
  _DAT_183386e48 = _DAT_183386ed8 ^ uVar2 ^ 0x8cd32b47;
  _DAT_183386eb8 = (_DAT_183386eb8 ^ uVar2) + 0x8cd32b47 ^ 0x972a48409e03ad8b;
  _DAT_183386ec0 = (_DAT_183386ec0 * -0x5fde228ceef225b5 ^ _DAT_183386eb8) + uVar2;
  _DAT_183386ef8 = _DAT_183386ec0 ^ _DAT_183386eb8;
  _DAT_183386e40 = 0x8cd32b47;
  uVar2 = (_DAT_183386e50 ^ _DAT_1823b1300) + _DAT_183386ec0 + 0x8f10862;
  uVar7 = (_DAT_183386ec0 ^ _UNK_1823b1308) + _DAT_183386e50 + 0x732cd5b8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183386e50 ^ _DAT_1823b1300;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386ec0 ^ _UNK_1823b1308;
  _DAT_183386d10 =
       func_0x00018dd510b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386e50 + 0x732cd5b8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183386ec0 + 0x8f10862));
  uVar2 = _DAT_183386d10 * 0x64f6601f0a34000 | _DAT_183386d10 * -0x671fe6c267f83d73 >> 0x32;
  _DAT_183386d28 = _DAT_183386de0 ^ uVar2 ^ 0x1000000ff;
  _DAT_183386d58 = (_DAT_183386d58 ^ uVar2) + 0x1000000ff ^ 0x7533f431752f33da;
  _DAT_183386ee0 = (_DAT_183386ee0 * 0x1b66809b84e25e33 ^ _DAT_183386d58) + uVar2;
  _DAT_183386e88 = _DAT_183386ee0 ^ _DAT_183386d58;
  _DAT_183386e70 = 0xff;
  uVar2 = (_DAT_183386e00 ^ _DAT_1823b1310) + _DAT_183386dd0 + 0x842223da;
  uVar7 = (_DAT_183386dd0 ^ _UNK_1823b1318) + _DAT_183386e00 + 0x4c71f378;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183386e00 ^ _DAT_1823b1310;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386dd0 ^ _UNK_1823b1318;
  _DAT_183386d80 =
       func_0x00018dd510b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386e00 + 0x4c71f378) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183386dd0 + 0x842223da));
  uVar2 = _DAT_183386d80 & 0xff;
  _DAT_183386e18 = _DAT_183386ea0 ^ uVar2 ^ 0x4c71f477;
  _DAT_183386d38 = (_DAT_183386d38 ^ uVar2) + 0x4c71f477 ^ 0x36eca8474bfb9afb;
  _DAT_183386db8 = (_DAT_183386db8 * -0x3f83cd226e26199b ^ _DAT_183386d38) + uVar2;
  _DAT_183386eb0 = _DAT_183386db8 ^ _DAT_183386d38;
  _DAT_183386e20 = 0x4c71f477;
  uVar2 = (~_DAT_183386d20 + 0xb38e0c89) *
          ((_DAT_183386e30 ^ 0xc853d752) + (ulonglong)((uint)_DAT_183386e30 & 0xc853d752) * 2);
  uVar2 = (uVar2 | _DAT_183386ec8) + (uVar2 & _DAT_183386ec8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018dd510b0((uVar2 | 0x7bdddbda) + (ulonglong)((uint)uVar2 & 0x7bdddbda));
  uVar7 = uVar2 >> 7 ^ 0x6b3c31c51ee10e;
  uVar2 = uVar7 * 0x80;
  uVar7 = uVar2 + (uVar7 & 0x155555555555555) * -0x40;
  uVar7 = (uVar7 & 0x3333333333333300) + (uVar7 >> 2 & 0x3333333333333330);
  uVar2 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f03) * 0x101010101010101 >> 0x38) << 2 ^ uVar2;
  _DAT_183386db0 = _DAT_183386d40 ^ uVar2 ^ 0x1000000ff;
  _DAT_183386e78 = (_DAT_183386e78 ^ uVar2) + 0x1000000ff ^ 0x3c3ebd0185ccea6d;
  _DAT_183386d88 = (_DAT_183386d88 * 0x14c6b5a7f5e4b699 ^ _DAT_183386e78) + uVar2;
  _DAT_183386da8 = _DAT_183386d88 ^ _DAT_183386e78;
  _DAT_183386e68 = 0xff;
  uVar2 = (_DAT_183386d08 ^ _DAT_1823b1320) + _DAT_183386e78 + 0x5fc484cb;
  uVar7 = (_DAT_183386e78 ^ _UNK_1823b1328) + _DAT_183386d08 + 0x36465b55;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183386d08 ^ _DAT_1823b1320;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386e78 ^ _UNK_1823b1328;
  _DAT_183386ea8 =
       func_0x00018dd510b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386d08 + 0x36465b55) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183386e78 + 0x5fc484cb));
  uVar7 = _DAT_183386ea8 ^ 0x2e9f16f2205b5c06;
  uVar2 = uVar7 >> 1 | uVar7;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  uVar2 = uVar7 << 0x39 | uVar7 >> 7;
  _DAT_183386de0 = _DAT_183386d50 ^ uVar2 ^ 0x1122d0343;
  _DAT_183386e30 = (_DAT_183386e30 ^ uVar2) + 0x1122d0343 ^ 0xacce3de32831bf97;
  _DAT_183386ef8 = (_DAT_183386ef8 * 0xe678c4001848151 ^ _DAT_183386e30) + uVar2;
  _DAT_183386ec8 = _DAT_183386ef8 ^ _DAT_183386e30;
  _DAT_183386ef0 = 0x122d0343;
  _DAT_183386eb8 = func_0x00018dd510b0(_DAT_183386d88 + 0xff5cffe69a0081ff ^ 0x16);
  uVar2 = _DAT_183386eb8 >> 0x1d ^ 0x174f8b797;
  _DAT_183386ea0 = (_DAT_183386ea0 ^ uVar2) + 0x12460344 ^ 0xa82f5a462aa3fa03;
  _DAT_183386e18 = (_DAT_183386e18 * 0xbeae39bbc6da6e3 ^ _DAT_183386ea0) + uVar2;
  _DAT_183386db8 = _DAT_183386e18 ^ _DAT_183386ea0;
  _DAT_183386ea8 = 0x12460344;
  _DAT_183386df8 = func_0x00018dd510b0(_DAT_183386dd0 + 0xffdd007b5a0021ff ^ 0x8d);
  _DAT_183386e80 = _DAT_183386d90 ^ _DAT_183386df8 ^ 0xff;
  _DAT_183386e90 = (_DAT_183386e90 ^ _DAT_183386df8) + 0xff ^ 0x48d6b181634d7eed;
  _DAT_183386ea0 = (_DAT_183386ea0 * -0x188fd307c6ad02e5 ^ _DAT_183386e90) + _DAT_183386df8;
  _DAT_183386d08 = _DAT_183386ea0 ^ _DAT_183386e90;
  _DAT_183386d20 = 0xff;
  _DAT_183386e18 = func_0x00018dd510b0(_DAT_183386eb8 + 0x3900a02c0018ff ^ 0x60);
  uVar2 = (_DAT_183386e18 ^ 0x24195811) - ((_DAT_183386e18 ^ 0x24195811) >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = _DAT_183386e18 ^ 0xdbe6a7ee ^
          (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6;
  _DAT_183386ef8 = (_DAT_183386ef8 ^ uVar2) + 0x24195811 ^ 0xd5515938f25d371;
  _DAT_183386e40 = (_DAT_183386e40 * 0x10a3d7ce8217270d ^ _DAT_183386ef8) + uVar2;
  _DAT_183386e80 = _DAT_183386e40 ^ _DAT_183386ef8;
  _DAT_183386d60 = 0x24195811;
  _DAT_183386e08 = func_0x00018dd510b0(_DAT_183386ec0 + 0x22ff7b3a0021ff ^ 0x4f);
  uVar2 = _DAT_183386e08 & 0x7ffffffff;
  _DAT_183386e38 = _DAT_183386ed0 ^ uVar2 ^ 0xff;
  _DAT_183386db0 = (_DAT_183386db0 ^ uVar2) + 0xff ^ 0xa18d321f4129ca08;
  _DAT_183386e00 = (_DAT_183386e00 * 0x57ee7b9f4abeb745 ^ _DAT_183386db0) + uVar2;
  _DAT_183386e70 = _DAT_183386e00 ^ _DAT_183386db0;
  _DAT_183386dd8 = 0xff;
  uVar2 = (_DAT_183386e18 ^ _DAT_1823b1330) + _DAT_183386ee0 + 0x5ec4a5e3;
  uVar7 = (_DAT_183386ee0 ^ _UNK_1823b1338) + _DAT_183386e18 + 0xdae686c6;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183386e18 ^ _DAT_1823b1330;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183386ee0 ^ _UNK_1823b1338;
  _DAT_183386eb0 =
       func_0x00018dd510b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386e18 + 0xdae686c6) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183386ee0 + 0x5ec4a5e3));
  uVar2 = (_DAT_183386eb0 & 0x7ffffffff) >> 1 | _DAT_183386eb0 & 0x7ffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar7 = uVar2 >> 4 | uVar2;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar2 = uVar2 >> 0x20 | uVar7 >> 0x10 | uVar7;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183386eb0 & 0x7ffffffff;
  _DAT_183386ee8 = _DAT_183386ee8 ^ uVar2 ^ 0x4ec9b8f6e07eef80;
  _DAT_183386e20 = (_DAT_183386e20 * 0x1d88e860931e0dbf ^ _DAT_183386ee8) + uVar2;
  _DAT_183386ec0 = _DAT_183386e20 ^ _DAT_183386ee8;
  _DAT_183386ee0 = 0;
  uVar2 = ((_DAT_183386d48 ^ 0x842223da) + (ulonglong)((uint)_DAT_183386d48 & 0x842223da) * 2) *
          -_DAT_183386e20;
  uVar2 = (uVar2 | _DAT_183386e60) + (uVar2 & _DAT_183386e60);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183386e50 = func_0x00018dd510b0((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  uVar2 = (_DAT_183386e50 & 0x7ffffffffff) * 0x100000;
  _DAT_183386ea0 = _DAT_183386df0 ^ uVar2 ^ 0xff;
  _DAT_183386ec8 = (_DAT_183386ec8 ^ uVar2) + 0xff ^ 0x39542a8ea9258a0d;
  _DAT_183386df0 = (_DAT_183386df0 * -0x77a27ad24472a15f ^ _DAT_183386ec8) + uVar2;
  _DAT_183386da0 = _DAT_183386df0 ^ _DAT_183386ec8;
  _DAT_183386d48 = 0xff;
  uVar2 = uVar4 ^ 0x84222325 ^ _DAT_183386d68;
  lVar3 = (uVar4 ^ 0x84222325) + _DAT_183386d10;
  uVar7 = uVar2 + lVar3;
  uVar8 = (_DAT_183386d10 ^ 0xff) + _DAT_183386d68 + 0xff;
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar2;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183386d10 ^ 0xff;
  _DAT_183386e88 =
       func_0x00018dd510b0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183386d68 + 0xff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  uVar2 = uVar4 ^ (uVar4 | 0xff) ^ _DAT_183386e88 ^ 0xff;
  _DAT_183386e78 = uVar4 & 0xff;
  _DAT_183386d10 = (_DAT_183386d10 ^ uVar2) + _DAT_183386e78 ^ 0x77c0183a9ef8d28d;
  _DAT_183386e50 = (_DAT_183386e50 * -0x1109b8c1269cd25f ^ _DAT_183386d10) + uVar2;
  _DAT_183386d20 = _DAT_183386e50 ^ _DAT_183386d10;
  uVar7 = _DAT_183386e78 << 0x20;
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = in_stack_00000050 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_1823b1340,_DAT_1800170c0);
  uVar2 = auVar6._8_8_ + auVar6._0_8_;
  uVar4 = uVar2 + _DAT_183386df8;
  if (auVar6._4_4_ < 0) {
    uVar4 = _DAT_183386ed8 ^ uVar2;
  }
  _DAT_183386e18 = func_0x00018dd510b0(SUB161(auVar5 ^ _DAT_1823b1340,5) ^ uVar4);
  uVar4 = in_stack_00000050 ^ _DAT_183386e18 & 0x7fffffffffffffff;
  _DAT_183386dd8 = uVar7 | in_stack_00000050;
  _DAT_183386e58 = (_DAT_183386e58 ^ uVar4) + _DAT_183386dd8 ^ 0x46f0c0b785ec294e;
  _DAT_183386db8 = (_DAT_183386db8 * 0x6a5c728208c7a3d5 ^ _DAT_183386e58) + uVar4;
  _DAT_183386e88 = _DAT_183386db8 ^ _DAT_183386e58;
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xdd5069f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dd5069f(void)

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


// ----- block @ rva 0xdd50ecf -----

void FUN_18dd50ecf(void)

{
  return;
}

