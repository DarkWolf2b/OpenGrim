// ===== Lsixtwo/rc; _d028f71408c9f836a0b711b98a80110d ()V (handler @ image 184cba9f0, runtime 6fffec8ca9f0) =====

void FUN_184cba9f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184cbaacc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18033a9e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rc; dep (I)I (handler @ image 184cb7610, runtime 6fffec8c7610) =====

void FUN_184cb7610(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000184cb7636 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180339720 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/rc; deq ()Z (handler @ image 184cb7d30, runtime 6fffec8c7d30) =====

void FUN_184cb7d30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x22d59,0x558);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184cb7d87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180339a40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rc; der (I)Z (handler @ image 184cc0d30, runtime 6fffec8d0d30) =====

void FUN_184cc0d30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x22d59,0x558);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184cc0df4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18033c090 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rc; des ()V (handler @ image 184cc5410, runtime 6fffec8d5410) =====

void FUN_184cc5410(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000184cc5430 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18033d4f0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/rc; det ([I)V (handler @ image 184cc5820, runtime 6fffec8d5820) =====

void FUN_184cc5820(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x22d59,0x558);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184cc590e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18033d6f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rc; deu ()I (handler @ image 184cd3930, runtime 6fffec8e3930) =====

void FUN_184cd3930(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000184cd3950 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180341cf0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/rc; dev (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException; (handler @ image 184cd3b30, runtime 6fffec8e3b30) =====

undefined8 FUN_184cd3b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/rc; dew ([B)Ljava/lang/String; (handler @ image 184cd3bc0, runtime 6fffec8e3bc0) =====

void FUN_184cd3bc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000184cd3c60 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180341f50 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/rc; dex (IJ)Ljava/lang/String; (handler @ image 184cfbe50, runtime 6fffec90be50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184cfbe50(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = (~uRam000000018309eae8 + 0x986d74a7e9ef5351) *
          ((uRam000000018309ebf0 ^ 0xb926731ca1b284f6) +
          (uRam000000018309ebf0 & 0x3926731ca1b284f6) * 2);
  uVar4 = (uVar4 | uRam000000018309ecf0) + (uVar4 & uRam000000018309ecf0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309eb10 =
       func_0x000184d02a30((uVar4 | 0x214b07bb485dd7a6) + (uVar4 & 0x214b07bb485dd7a6));
  uVar4 = uRam000000018309eb10 >> 1 | uRam000000018309eb10;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018309eb10;
  uVar4 = uVar4 << 0x1e | uVar4 >> 0x22 & 0xffffffffff000000;
  uRam000000018309ec40 = (uRam000000018309ec40 ^ uVar4) + 0x214b07bbcc7ff483 ^ 0x33506df57e0c08f1;
  uRam000000018309e9d8 = (uRam000000018309e9d8 * 0x3220a27ed72f069d ^ uRam000000018309ec40) + uVar4;
  uRam000000018309e950 = uRam000000018309e9d8 ^ uRam000000018309ec40;
  uRam000000018309e9e0 = 0x214b07bbcc7ff483;
  uVar4 = (~uRam000000018309eb80 + 0x25b2030b8c5aa001) *
          ((uRam000000018309e9a8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018309e9a8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018309e9c0) + (uVar4 & uRam000000018309e9c0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309eb28 =
       func_0x000184d02a30((uVar4 | 0x25b2030b08788325) + (uVar4 & 0x25b2030b08788325));
  uVar4 = (uRam000000018309eb28 ^ 0x25b2030b8c5aa000) * -0x595b807e9ead0e2d;
  uRam000000018309ebc8 = (uRam000000018309ebc8 ^ uVar4) + 0xda4dfcf473a56000 ^ 0x77f19a9cc3babef4;
  uRam000000018309e900 = (uRam000000018309e900 * 0x33718f91480c4dad ^ uRam000000018309ebc8) + uVar4;
  uRam000000018309eca0 = uRam000000018309e900 ^ uRam000000018309ebc8;
  uRam000000018309e990 = 0xda4dfcf473a56000;
  uRam000000018309eaf0 = func_0x000184d02a30(uRam000000018309ec60 ^ 0xf563920739ff274d);
  uVar4 = (uRam000000018309eaf0 & 0x7fffffffffffffff) >> 1 |
          uRam000000018309eaf0 & 0x7fffffffffffffff;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam000000018309eaf0 & 0x7fffffffffffffff;
  uRam000000018309e9f8 = uRam000000018309e9d0 ^ uVar4 ^ 0x25b2030b8c5b1fff;
  uRam000000018309eba8 = (uRam000000018309eba8 ^ uVar4) + 0x25b2030b8c5b1fff ^ 0x9451da728283c100;
  uRam000000018309eae0 = (uRam000000018309eae0 * -0x57b153baed85b5c9 ^ uRam000000018309eba8) + uVar4
  ;
  uRam000000018309eb30 = uRam000000018309eae0 ^ uRam000000018309eba8;
  uRam000000018309ec20 = 0x25b2030b8c5b1fff;
  uVar4 = (~uRam000000018309eb48 + 0xda4dfcf473a56001) *
          ((uRam000000018309e990 ^ 0x25b2030b08793cda) +
          (uRam000000018309e990 & 0x25b2030b08793cda) * 2);
  uVar4 = (uVar4 | uRam000000018309e9f0) + (uVar4 & uRam000000018309e9f0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309e988 =
       func_0x000184d02a30((uVar4 | 0xffffffff7bdc5cda) + (uVar4 & 0xffffffff7bdc5cda));
  uVar4 = uRam000000018309e988 ^ 0x27af3dc9585aa000;
  uVar4 = ((uVar4 & 1) << 0xe | uVar4 >> 0x32) << 0x30 | (uVar4 & 0x3ffffffffffff) >> 2;
  uRam000000018309eb60 = uRam000000018309ecd0 ^ uVar4 ^ 0x7fff;
  uRam000000018309ecb8 = (uRam000000018309ecb8 ^ uVar4) + 0x7fff ^ 0xbd2f9769d904f929;
  uRam000000018309ecb0 = (uRam000000018309ecb0 * -0x3b9a88d11379c2b1 ^ uRam000000018309ecb8) + uVar4
  ;
  uRam000000018309ec40 = uRam000000018309ecb0 ^ uRam000000018309ecb8;
  uRam000000018309eb90 = uRam000000018309ea20 ^ 0x7fff;
  uRam000000018309ece8 = 0x7fff;
  uVar4 = (~uRam000000018309e998 + 0xea3577096f18919c) *
          ((uRam000000018309e930 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018309e930 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018309ec10) + (uVar4 & uRam000000018309ec10);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309e908 =
       func_0x000184d02a30((uVar4 | 0xea357709eb3ab2be) + (uVar4 & 0xea357709eb3ab2be));
  uVar4 = uRam000000018309e908 * 0x79f22a216f3666b & 0xffffffffffffc000;
  uRam000000018309ec30 = (uRam000000018309ec30 ^ uVar4) + 0x15ca88f690e76e65 ^ 0x7c2e2e242ebbefeb;
  uRam000000018309ecf0 = (uRam000000018309ecf0 * 0x5af86cd88205e751 ^ uRam000000018309ec30) + uVar4;
  uRam000000018309e958 = uRam000000018309ecf0 ^ uRam000000018309ec30;
  uRam000000018309ebc0 = 0x15ca88f690e76e65;
  uVar4 = (uRam000000018309e968 ^ _UNK_180348b00) + uRam000000018309eaa0 + 0xea357709eb3b32bf;
  uVar7 = (uRam000000018309eaa0 ^ _UNK_180348b08) + uRam000000018309e968 + 0x15ca88f690e76e65;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309e968 ^ _UNK_180348b00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309eaa0 ^ _UNK_180348b08;
  uRam000000018309eca8 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018309e968 + 0x15ca88f690e76e65) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018309eaa0 + 0xea357709eb3b32bf));
  uVar4 = (uRam000000018309eca8 ^ 0xea3577096f190000) & 0xffffffffffffc000;
  uRam000000018309ea78 = uRam000000018309ec38 ^ uVar4 ^ 0x7fff;
  uRam000000018309ecd8 = (uRam000000018309ecd8 ^ uVar4) + 0x7fff ^ 0xdf4e1f0a9d693dd8;
  uRam000000018309ec80 = (uRam000000018309ec80 * 0x2fbddbcd341c9c65 ^ uRam000000018309ecd8) + uVar4;
  uRam000000018309e960 = uRam000000018309ec80 ^ uRam000000018309ecd8;
  uRam000000018309e978 = 0x7fff;
  uRam000000018309ec08 = func_0x000184d02a30(uRam000000018309eca8 + 0xe1bd038114e5c741 ^ 200);
  uRam000000018309eb38 =
       (uRam000000018309eb38 ^ uRam000000018309ec00 * -0x26f7ba00669e040f) + 0x21fbd59dfa959fd0 ^
       0x7d66bb6240fd196b;
  uRam000000018309ec38 =
       (uRam000000018309ec38 * 0x70e7b00518e8699b ^ uRam000000018309eb38) +
       uRam000000018309ec00 * -0x26f7ba00669e040f;
  uRam000000018309ea30 = uRam000000018309ec38 ^ uRam000000018309eb38;
  uRam000000018309ea20 = 0x21fbd59dfa959fd0;
  uVar4 = (uRam000000018309e9c8 ^ _UNK_180348b10) + uRam000000018309e9c0 + 0x84225cda;
  uVar7 = (uRam000000018309e9c0 ^ _UNK_180348b18) + uRam000000018309e9c8 + 0xde042a62056a6030;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309e9c8 ^ _UNK_180348b10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309e9c0 ^ _UNK_180348b18;
  uRam000000018309ec30 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018309e9c8 + 0xde042a62056a6030) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018309e9c0 + 0x84225cda));
  uVar4 = uRam000000018309ec30 << 0x35 | uRam000000018309ec30 >> 0xb;
  uRam000000018309ea58 = uRam000000018309e9e8 ^ uVar4 ^ 0xde042a62056ae02f;
  uRam000000018309eb90 = (uRam000000018309eb90 ^ uVar4) + 0xde042a62056ae02f ^ 0xf50177eb5dd2dbd;
  uRam000000018309ea28 = (uRam000000018309ea28 * 0x120c994a2c13fc7 ^ uRam000000018309eb90) + uVar4;
  uRam000000018309ea08 = uRam000000018309ea28 ^ uRam000000018309eb90;
  uRam000000018309eab0 = uRam000000018309e928 ^ 0xde042a62056ae02f;
  uRam000000018309e928 = 0xde042a62056ae02f;
  uRam000000018309eb78 = func_0x000184d02a30(uRam000000018309e9b0 ^ 0x5c384d4f3ea96296);
  uVar4 = (uRam000000018309eb78 & 0x1fff) << 0x32 | uRam000000018309eb78 >> 0xe;
  uRam000000018309eaf8 = uRam000000018309ec68 ^ uVar4 ^ 0x2088b69bcc7f947c;
  uRam000000018309ec00 = (uRam000000018309ec00 ^ uVar4) + 0x2088b69bcc7f947c ^ 0x140b641f2ea2b526;
  uRam000000018309e958 = (uRam000000018309e958 * -0x1faa986e6032b9ff ^ uRam000000018309ec00) + uVar4
  ;
  uRam000000018309ebb0 = uRam000000018309e958 ^ uRam000000018309ec00;
  uRam000000018309ec90 = 0x2088b69bcc7f947c;
  uVar4 = (uRam000000018309e9a0 ^ _UNK_180348b20) + uRam000000018309e990 + 0xff3daedf7bddbcdc;
  uVar7 = (uRam000000018309e990 ^ _UNK_180348b28) + uRam000000018309e9a0 + 0x214b07bbcc7ff483;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309e9a0 ^ _UNK_180348b20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309e990 ^ _UNK_180348b28;
  uRam000000018309ea70 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018309e9a0 + 0x214b07bbcc7ff483) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018309e990 + 0xff3daedf7bddbcdc));
  uRam000000018309ebb8 =
       (uRam000000018309ebb8 ^ uRam000000018309ea70 ^ 0x214b07bbcc7ff483) + 0xde76a96433806b7a ^
       0x41d8671e8bf02024;
  uRam000000018309ec18 =
       (uRam000000018309ec18 * 0xce2d66fe80da033 ^ uRam000000018309ebb8) +
       (uRam000000018309ea70 ^ 0x214b07bbcc7ff483);
  uRam000000018309e900 = uRam000000018309ec18 ^ uRam000000018309ebb8;
  uRam000000018309eb08 = 0xde76a96433806b7a;
  uVar4 = (~uRam000000018309ea48 + 0x214b07bbcc7ff484) *
          ((uRam000000018309eb60 ^ 0xff3daedf7bddbcdc) +
          (uRam000000018309eb60 & 0x7f3daedf7bddbcdc) * 2);
  uVar4 = (uVar4 | uRam000000018309eae8) + (uVar4 & uRam000000018309eae8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309e900 =
       func_0x000184d02a30((uVar4 | 0xde76a964b7a2485f) + (uVar4 & 0xde76a964b7a2485f));
  uVar4 = uRam000000018309e900 >> 1 | uRam000000018309e900;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018309e900) & 0x7fffffffff;
  uRam000000018309e990 = (uRam000000018309e990 ^ uVar4) + 0x2109069bcc7f9481 ^ 0x5d7cf2aeecb7a080;
  uRam000000018309eaf0 = (uRam000000018309eaf0 * -0x74bcaff1b5459827 ^ uRam000000018309e990) + uVar4
  ;
  uRam000000018309ea30 = uRam000000018309eaf0 ^ uRam000000018309e990;
  uRam000000018309eaf8 = 0x2109069bcc7f9481;
  uVar4 = (~uRam000000018309ea78 + 0x42120d3798ff2903) * -0x804fff7bde2320;
  uVar4 = (uVar4 | uRam000000018309e920) + (uVar4 & uRam000000018309e920);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309ec28 =
       func_0x000184d02a30((uVar4 | 0x9c64a4532f5d615d) + (uVar4 & 0x9c64a4532f5d615d));
  uVar4 = (uRam000000018309ec28 ^ 0xde76ad77bbff6b7a) * 0x691aaaf1387e9643;
  uRam000000018309eba8 = uRam000000018309eca8 ^ uVar4 ^ 0x2088b69bcc7f947c;
  uRam000000018309e998 = (uRam000000018309e998 ^ uVar4) + 0x2088b69bcc7f947c ^ 0x9cb177ca71440def;
  uRam000000018309e908 = (uRam000000018309e908 * -0x9bd91f37c734c6b ^ uRam000000018309e998) + uVar4;
  uRam000000018309eb18 = uRam000000018309e908 ^ uRam000000018309e998;
  uRam000000018309ebc8 = 0x2088b69bcc7f947c;
  uVar4 = (uRam000000018309ece0 ^ _UNK_180348b30) + uRam000000018309eba0 + 0x2088b69b485db759;
  uVar7 = (uRam000000018309eba0 ^ _UNK_180348b38) + uRam000000018309ece0 + 0x2088b69bcc7f947c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309ece0 ^ _UNK_180348b30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309eba0 ^ _UNK_180348b38;
  uRam000000018309eaf8 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018309ece0 + 0x2088b69bcc7f947c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018309eba0 + 0x2088b69b485db759));
  uRam000000018309ecf8 = uRam000000018309eaf8 ^ 0x503104f98558086c;
  uRam000000018309eac0 = uRam000000018309eac0 ^ uRam000000018309ecf8 ^ 0x1001721b7e90af8d;
  uRam000000018309e9b8 =
       (uRam000000018309e9b8 * 0x32d2181274886173 ^ uRam000000018309eac0) + uRam000000018309ecf8;
  uRam000000018309eaa0 = uRam000000018309e9b8 ^ uRam000000018309eac0;
  uRam000000018309ec50 = 0;
  uVar4 = (uRam000000018309ea88 ^ 0x84225cda) + uRam000000018309ea08 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309ea88 ^ 0x84225cda;
  uVar7 = ((uRam000000018309ea08 + uRam000000018309ea88) * 0x2000 |
          uRam000000018309ea08 + uRam000000018309ea88 >> 0x33) ^ uRam000000018309ea08;
  uRam000000018309ece0 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018309ea88 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018309ea08 + 0x84225cda));
  uVar4 = uRam000000018309ece0 & 0xfffffffffffc0000;
  uRam000000018309eac8 = uRam000000018309ea38 ^ uVar4 ^ 0x7fff;
  uRam000000018309eb78 = (uRam000000018309eb78 ^ uVar4) + 0x7fff ^ 0xeebb9aa7de396515;
  uRam000000018309e9e8 =
       (uRam000000018309eaa0 * 0x367fe8ab1a2d30ad ^ uRam000000018309eb78) + uVar4 ^
       uRam000000018309eb78;
  uRam000000018309eaa0 = 0x7fff;
  uVar4 = (uRam000000018309eb58 ^ _UNK_180348b40) + uRam000000018309eac8 + 0xff3daedf7bddbcdc;
  uVar7 = (uRam000000018309eac8 ^ _UNK_180348b48) + uRam000000018309eb58 + 0xc2512000006006;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309eb58 ^ _UNK_180348b40;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309eac8 ^ _UNK_180348b48;
  uRam000000018309e980 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018309eb58 + 0xc2512000006006) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018309eac8 + 0xff3daedf7bddbcdc));
  uRam000000018309ec58 =
       uRam000000018309ec58 ^ uRam000000018309e980 * -0x67211868b91f357 ^ 0xc1dccea432e50e63;
  uRam000000018309ecd8 =
       (uRam000000018309ecd8 * 0x7c6b588826d55b0f ^ uRam000000018309ec58) +
       uRam000000018309e980 * -0x67211868b91f357;
  uRam000000018309ea58 = uRam000000018309ecd8 ^ uRam000000018309ec58;
  uRam000000018309ea28 = 0;
  uVar4 = (~uRam000000018309ea60 + 0x5f3caec8a9bc9cb1) *
          ((uRam000000018309eb18 ^ 0x5f3caec82d9ebf95) +
          (uRam000000018309eb18 & 0x5f3caec82d9ebf95) * 2);
  uVar4 = (uVar4 | uRam000000018309eba0) + (uVar4 & uRam000000018309eba0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309ea68 =
       func_0x000184d02a30((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam000000018309ecd0 =
       uRam000000018309ecd0 ^ uRam000000018309ea68 & 0x5f3caec8a9bc9cb0 ^ 0x6d5dfdd702db088c;
  uRam000000018309eae8 =
       (uRam000000018309eae8 * 0x56c225d672868ef9 ^ uRam000000018309ecd0) +
       (uRam000000018309ea68 & 0x5f3caec8a9bc9cb0);
  uRam000000018309e918 = uRam000000018309eae8 ^ uRam000000018309ecd0;
  uRam000000018309eb50 = 0;
  uRam000000018309ea18 = func_0x000184d02a30(uRam000000018309e9b0 ^ 0xffc3ff7bca001dc2);
  uVar4 = (uRam000000018309ea18 << 0x3e | uRam000000018309ea18 >> 2) * -0x2d827567a6bd254f;
  uRam000000018309e928 = uRam000000018309ec58 ^ uVar4 ^ 0x7fff;
  uRam000000018309ec40 = (uRam000000018309ec40 ^ uVar4) + 0x7fff ^ 0xbc66516c59133e60;
  uRam000000018309eb38 = (uRam000000018309eb38 * -0x300cbf1ee92ee5bd ^ uRam000000018309ec40) + uVar4
  ;
  uRam000000018309eac0 = uRam000000018309eb38 ^ uRam000000018309ec40;
  uRam000000018309eae8 = 0x7fff;
  uVar4 = (~uRam000000018309eb88 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam000000018309e9c8) +
          ((param_4 ^ 0x84222325) & uRam000000018309e9c8) * 2);
  uVar4 = (uVar4 | uRam000000018309eb20) + (uVar4 & uRam000000018309eb20);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309eb48 =
       func_0x000184d02a30((param_4 ^ 0x84225cda | uVar4) + (uVar4 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018309ecf8 = (ulonglong)uVar2;
  uRam000000018309ea60 =
       (uRam000000018309ea60 ^ uRam000000018309eb48) + uRam000000018309ecf8 ^ 0xb396ee8d71d9705a;
  uRam000000018309eb78 =
       (uRam000000018309eb78 * -0x2034e7814101b779 ^ uRam000000018309ea60) + uRam000000018309eb48;
  uRam000000018309ec08 = uRam000000018309eb78 ^ uRam000000018309ea60;
  uVar4 = uRam000000018309ecf8 ^ 0x84222325 ^ uRam000000018309e998;
  uVar7 = param_3 ^ uRam000000018309ea48;
  lVar5 = (uRam000000018309ecf8 ^ 0x84222325) + uRam000000018309ea48;
  lVar3 = uRam000000018309e998 + param_3;
  uVar6 = uVar4 + lVar5;
  uVar8 = uVar7 + lVar3;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uRam000000018309e950 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) - lVar3 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uRam000000018309ecd0 = (ulonglong)(uVar2 ^ param_3);
  uRam000000018309ea60 =
       (uRam000000018309ea60 ^ uRam000000018309e950 & 0x7fffffffffffffff) + uRam000000018309ecd0 ^
       0xc8f62652eb6ab85;
  uRam000000018309ead8 =
       (uRam000000018309ead8 * 0x63504ee9b2c406eb ^ uRam000000018309ea60) +
       (uRam000000018309e950 & 0x7fffffffffffffff);
  uRam000000018309eae8 = uRam000000018309ead8 ^ uRam000000018309ea60;
  uVar4 = (uRam000000018309ec08 ^ _UNK_180348b50) + uRam000000018309e980 + 0xeeb91394;
  uVar7 = (uRam000000018309e980 ^ _UNK_180348b58) + uRam000000018309ec08 + 0x46687693;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309ec08 ^ _UNK_180348b50;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309e980 ^ _UNK_180348b58;
  uRam000000018309e9a0 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018309ec08 + 0x46687693) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018309e980 + 0xeeb91394));
  uRam000000018309ebd0 =
       (uRam000000018309ebd0 ^ uRam000000018309e9a0 ^ 0x46687693) + 0x6efb76b3 ^ 0xc026e60eed3283eb;
  uRam000000018309e970 =
       (uRam000000018309e970 * 0x1fb9eaa1c48df7f3 ^ uRam000000018309ebd0) +
       (uRam000000018309e9a0 ^ 0x46687693);
  uRam000000018309eb18 = uRam000000018309e970 ^ uRam000000018309ebd0;
  uRam000000018309e940 = 0x6efb76b3;
  uVar4 = (~uRam000000018309ec18 + 0x7984d7bc) *
          ((uRam000000018309eab0 ^ 0x25984a7) +
          (ulonglong)((uint)uRam000000018309eab0 & 0x25984a7) * 2);
  uVar4 = (uVar4 | uRam000000018309eca8) + (uVar4 & uRam000000018309eca8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309eb88 =
       func_0x000184d02a30((uVar4 | 0x7bdd531c) + (ulonglong)((uint)uVar4 & 0x7bdd531c));
  uVar4 = uRam000000018309eb88 * -0x1582190834a2eab3;
  uRam000000018309e9b0 = uRam000000018309ebb0 ^ uVar4 ^ 0x100007f3d;
  uRam000000018309ecf8 = (uRam000000018309ecf8 ^ uVar4) + 0x100007f3d ^ 0x2c44f5eca3c1f66a;
  uRam000000018309e988 = (uRam000000018309e988 * -0x4e89b4d77913effb ^ uRam000000018309ecf8) + uVar4
  ;
  uRam000000018309ead0 = uRam000000018309e988 ^ uRam000000018309ecf8;
  uRam000000018309ea00 = 0x7f3d;
  uVar4 = (uRam000000018309eb78 ^ _UNK_180348b60) + uRam000000018309eae8 + 0x84225c18;
  uVar7 = (uRam000000018309eae8 ^ _UNK_180348b68) + uRam000000018309eb78 + 0x9d091030;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309eb78 ^ _UNK_180348b60;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309eae8 ^ _UNK_180348b68;
  uRam000000018309eaf0 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018309eb78 + 0x9d091030) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018309eae8 + 0x84225c18));
  uVar4 = uRam000000018309eaf0 >> 1 | uRam000000018309eaf0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018309eaf0;
  uRam000000018309ebc0 = uRam000000018309ec68 ^ uVar4 ^ 0x9d098f6d;
  uRam000000018309eb70 = (uRam000000018309eb70 ^ uVar4) + 0x9d098f6d ^ 0xb8d606e2903f3c17;
  uRam000000018309eb80 = (uRam000000018309eb80 * 0x177ab0e6e3718699 ^ uRam000000018309eb70) + uVar4;
  uRam000000018309ec38 = uRam000000018309eb80 ^ uRam000000018309eb70;
  uRam000000018309ec68 = 0x9d098f6d;
  uRam000000018309e9d0 = func_0x000184d02a30(uRam000000018309eb38 + 0x290066680032ff ^ 0x65);
  uVar4 = (ulonglong)
          (~((uint)((uRam000000018309e9d0 ^ 0x20000000001281c8) << 7) |
            (uint)((uRam000000018309e9d0 ^ 0x20000000001281c8) >> 0x39)) & 0x4967edf5);
  uRam000000018309ec98 = uRam000000018309e958 ^ uVar4 ^ 0x100007f3d;
  uRam000000018309e960 = (uRam000000018309e960 ^ uVar4) + 0x100007f3d ^ 0x8a65268993a5c365;
  uRam000000018309ebb8 = (uRam000000018309ebb8 * 0x6f45e11ab38d36a9 ^ uRam000000018309e960) + uVar4;
  uRam000000018309e968 = uRam000000018309ebb8 ^ uRam000000018309e960;
  uRam000000018309ead8 = 0x7f3d;
  uVar4 = (~uRam000000018309ea28 + 0xe8e8f708) *
          ((uRam000000018309ec58 ^ 0xead95596) +
          (ulonglong)((uint)uRam000000018309ec58 & 0xead95596) * 2);
  uVar4 = (uVar4 | uRam000000018309eb00) + (uVar4 & uRam000000018309eb00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309ec68 =
       func_0x000184d02a30((uVar4 | 0x231a291) + (ulonglong)((uint)uVar4 & 0x231a291));
  uVar4 = uRam000000018309ec68 ^ 0x64f8e28d729ef3e5;
  uRam000000018309eb68 = uRam000000018309eaa8 ^ uVar4 ^ 0x157e46dba;
  uRam000000018309ec30 = (uRam000000018309ec30 ^ uVar4) + 0x157e46dba ^ 0x8cf374a503002454;
  uRam000000018309eca8 = (uRam000000018309eca8 * -0xc02d13f7f9a4637 ^ uRam000000018309ec30) + uVar4;
  uRam000000018309ecf8 = uRam000000018309eca8 ^ uRam000000018309ec30;
  uRam000000018309ec58 = 0x57e46dba;
  uVar4 = (uRam000000018309eb38 ^ _UNK_180348b70) + uRam000000018309e918 + 0xead95596;
  uVar7 = (uRam000000018309e918 ^ _UNK_180348b78) + uRam000000018309eb38 + 0xe8e8f707;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309eb38 ^ _UNK_180348b70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309e918 ^ _UNK_180348b78;
  uRam000000018309ead8 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018309eb38 + 0xe8e8f707) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018309e918 + 0xead95596));
  uVar4 = uRam000000018309ead8 ^ 0x64f8e28d729ef3e5;
  uVar4 = (uVar4 << 0x39 | uVar4 >> 7) >> 0xb | (uVar4 >> 7) << 0x35;
  uRam000000018309ece8 = (uRam000000018309ece8 ^ uVar4) + 0x68e87603 ^ 0x1ed8fd4a66c071ec;
  uRam000000018309ea98 = (uRam000000018309ea98 * 0x60ebbc600d7b07e3 ^ uRam000000018309ece8) + uVar4;
  uRam000000018309e990 = uRam000000018309ea98 ^ uRam000000018309ece8;
  uRam000000018309ec98 = 0x68e87603;
  uVar4 = (~uRam000000018309e978 + 0xd1d0ec07) *
          ((uRam000000018309e9d0 ^ 0x231a291) +
          (ulonglong)((uint)uRam000000018309e9d0 & 0x231a291) * 2);
  uVar4 = (uVar4 | uRam000000018309ea68) + (uVar4 & uRam000000018309ea68);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309ec80 =
       func_0x000184d02a30((uVar4 | 0xd3e14e97) + (ulonglong)((uint)uVar4 & 0xd3e14e97));
  uVar4 = uRam000000018309ec80 ^ 0xd1d0ec06;
  uRam000000018309e9f0 = uRam000000018309e9e8 ^ uVar4 ^ 0x157e46dba;
  uRam000000018309ebd8 = (uRam000000018309ebd8 ^ uVar4) + 0x157e46dba ^ 0x2a9facce3a30504c;
  uRam000000018309e960 = (uRam000000018309e960 * 0x768b61434b21c1ef ^ uRam000000018309ebd8) + uVar4;
  uRam000000018309ec08 = uRam000000018309e960 ^ uRam000000018309ebd8;
  uRam000000018309ead0 = 0x57e46dba;
  uVar4 = (uRam000000018309e9a8 ^ _UNK_180348b80) + uRam000000018309e9f0 + 0xd3c64e9f;
  uVar7 = (uRam000000018309e9f0 ^ _UNK_180348b88) + uRam000000018309e9a8 + 0x57e46dba;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309e9a8 ^ _UNK_180348b80;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309e9f0 ^ _UNK_180348b88;
  uRam000000018309ea68 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018309e9a8 + 0x57e46dba) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018309e9f0 + 0xd3c64e9f));
  uRam000000018309ea90 = uRam000000018309ea90 ^ uRam000000018309ea68 ^ 0xd5f7060f788ec6ee;
  uRam000000018309e9d0 =
       (uRam000000018309e9d0 * -0x7bfa9ad7b12c6b07 ^ uRam000000018309ea90) + uRam000000018309ea68;
  uRam000000018309ecc8 = uRam000000018309e9d0 ^ uRam000000018309ea90;
  uRam000000018309ebc8 = 0;
  uRam000000018309ec08 = uRam000000018309ea68;
  uRam000000018309ece0 = func_0x000184d02a30(uRam000000018309ecd8 ^ 0x44007c08001d63);
  uVar4 = uRam000000018309ece0 << 0x1b | uRam000000018309ece0 >> 0x25;
  uRam000000018309ec10 = uRam000000018309eb40 ^ uVar4 ^ 0x7f3d;
  uRam000000018309e9f8 = (uRam000000018309e9f8 ^ uVar4) + 0x7f3d ^ 0xb3f339714a920fe7;
  uRam000000018309eb70 = (uRam000000018309eb70 * -0x46cfc70647e6aa9 ^ uRam000000018309e9f8) + uVar4;
  uRam000000018309ebf8 = uRam000000018309eb70 ^ uRam000000018309e9f8;
  uRam000000018309e978 = 0x7f3d;
  uVar4 = (~uRam000000018309eb10 + 0x100000000) *
          ((uRam000000018309eb68 ^ 0xead95596) +
          (ulonglong)((uint)uRam000000018309eb68 & 0xead95596) * 2);
  uVar4 = (uVar4 | uRam000000018309eb40) + (uVar4 & uRam000000018309eb40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018309ebc0 =
       func_0x000184d02a30((uVar4 | 0x1526aa69) + (ulonglong)((uint)uVar4 & 0x1526aa69));
  uVar4 = (uRam000000018309ebc0 ^ 0x6efb76b291048000) & 0xffffffffffffc000;
  uRam000000018309e948 = (uRam000000018309e948 ^ uVar4) + 0x9104894c ^ 0xc8279902296188;
  uRam000000018309eab8 = (uRam000000018309eab8 * -0x7d7f673eb2fc8eff ^ uRam000000018309e948) + uVar4
  ;
  uRam000000018309e9c0 = uRam000000018309eab8 ^ uRam000000018309e948;
  uRam000000018309eb30 = 0x9104894c;
  uRam000000018309ea70 = func_0x000184d02a30(uRam000000018309eb28 + 0x24000bb5ff2aff ^ 0x18);
  uRam000000018309eb28 = uRam000000018309eb28 ^ uRam000000018309ea70 ^ 0x6ef05a89497aa3b7;
  uRam000000018309ecf8 =
       (uRam000000018309ecf8 * 0x3c93341d618e2a0f ^ uRam000000018309eb28) + uRam000000018309ea70;
  uRam000000018309e9b0 = uRam000000018309ecf8 ^ uRam000000018309eb28;
  uRam000000018309eae8 = 0;
  uVar4 = (uRam000000018309ec38 ^ 0x84225c18) + uRam000000018309ea18 + 0x84225c18;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309ec38 ^ 0x84225c18;
  uVar7 = ((uRam000000018309ea18 + uRam000000018309ec38) * 0x2000 |
          uRam000000018309ea18 + uRam000000018309ec38 >> 0x33) ^ uRam000000018309ea18;
  uRam000000018309ebc8 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018309ec38 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018309ea18 + 0x84225c18));
  uVar4 = uRam000000018309ebc8 ^ 0x7f3d;
  uVar7 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar4;
  uVar7 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar4;
  uRam000000018309ebe8 = uRam000000018309eaa8 ^ uVar4 ^ 0x7f3d;
  uRam000000018309ec30 = (uRam000000018309ec30 ^ uVar4) + 0x7f3d ^ 0x3e36ba1ad26e3bf5;
  uRam000000018309ec58 = (uRam000000018309ec58 * -0x670dfacccf84bf5 ^ uRam000000018309ec30) + uVar4;
  uRam000000018309ea00 = uRam000000018309ec58 ^ uRam000000018309ec30;
  uRam000000018309ea10 = 0x7f3d;
  uVar4 = (uRam000000018309eaf0 ^ _UNK_180348b90) + uRam000000018309e958 + 0xeeb91394;
  uVar7 = (uRam000000018309e958 ^ _UNK_180348b98) + uRam000000018309eaf0 + 0x6a9b30b1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018309eaf0 ^ _UNK_180348b90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018309e958 ^ _UNK_180348b98;
  uRam000000018309eaa0 =
       func_0x000184d02a30((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018309eaf0 + 0x6a9b30b1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018309e958 + 0xeeb91394));
  uRam000000018309e988 = uRam000000018309e988 ^ uRam000000018309eaa0 ^ 0x7cf45ce8297aba48;
  uRam000000018309ea78 =
       (uRam000000018309ea78 * 0x55ea9a633bd52789 ^ uRam000000018309e988) + uRam000000018309eaa0;
  uRam000000018309e920 = uRam000000018309ea78 ^ uRam000000018309e988;
  uRam000000018309ea28 = 0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x22d59,0x558);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184cfe1ad did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180347178 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rc; dey (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 184d02ac0, runtime 6fffec912ac0) =====

void FUN_184d02ac0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000184d02afc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180348cf0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/rc; dez (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 184cb7f30, runtime 6fffec8c7f30) =====

void FUN_184cb7f30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184cb7fad did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180339b00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



