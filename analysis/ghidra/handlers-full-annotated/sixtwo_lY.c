// ===== Lsixtwo/lY; _5fdd9d51e0aa39ef8f24fe2dafe3a360 ()V (handler @ image 187b44a20, runtime 6fffef754a20) =====

void FUN_187b44a20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187b44af4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d53e78 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lY; cjg ()V (handler @ image 187912e70, runtime 6fffef522e70) =====

void FUN_187912e70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x190c1,0x3ec);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187912f3c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cc1428 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lY; cjh ([ILjava/lang/String;)Z (handler @ image 187b34bd0, runtime 6fffef744bd0) =====

void FUN_187b34bd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2e9,0x12);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187b34c1f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d50410 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lY; cji (Ljava/lang/String;)Ljava/lang/String; (handler @ image 187b351c0, runtime 6fffef7451c0) =====

void FUN_187b351c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2e9,0x12);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187b35209 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d50630 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lY; cjj (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 187b35600, runtime 6fffef745600) =====

undefined8 FUN_187b35600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/lY; cjk (IJ)I (handler @ image 187b35690, runtime 6fffef745690) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187b35690(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar4 = (~uRam0000000183193e80 + 0x2857d791a7cd4531) *
          ((uRam0000000183193e40 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183193e40 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183193e88) + (uVar4 & uRam0000000183193e88);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193dd0 =
       func_0x000187b40c70((uVar4 | 0x2857d79123ef6615) + (uVar4 & 0x2857d79123ef6615));
  uRam0000000183193df0 =
       (uRam0000000183193e80 ^ uRam0000000183193dd0 & 0x7fffffffffffffff) + 0xd7a8286e5832bad0 ^
       0x5f84e06ff7cd1409;
  uRam0000000183193e80 =
       (uRam0000000183193e80 * -0x3f5ba27ee7f9eb3d ^ uRam0000000183193df0) +
       (uRam0000000183193dd0 & 0x7fffffffffffffff);
  uRam0000000183193df0 = uRam0000000183193e80 ^ uRam0000000183193df0;
  uRam0000000183193ef8 = uRam0000000183193d38 ^ 0xd7a8286e5832bad0;
  uRam0000000183193d20 = 0xd7a8286e5832bad0;
  uVar4 = (uRam0000000183193e98 ^ _UNK_180d52690) + uRam0000000183193dd8 + 0x84225cda;
  uVar8 = (uRam0000000183193dd8 ^ _UNK_180d52698) + uRam0000000183193e98 + 0x2857d791a7cd4530;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193e98 ^ _UNK_180d52690;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183193dd8 ^ _UNK_180d52698;
  uRam0000000183193d28 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183193e98 + 0x2857d791a7cd4530) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183193dd8 + 0x84225cda));
  uVar4 = uRam0000000183193d28 ^ 0x7fff;
  uRam0000000183193e60 = uRam0000000183193d60 ^ uVar4 ^ 0x2857d791a7cdc52f;
  uRam0000000183193d98 = (uRam0000000183193d98 ^ uVar4) + 0x2857d791a7cdc52f ^ 0x11c95f4569ea81cf;
  uRam0000000183193e18 = (uRam0000000183193e18 * 0x3d8d784dd4d926f ^ uRam0000000183193d98) + uVar4;
  uRam0000000183193db8 = uRam0000000183193e18 ^ uRam0000000183193d98;
  uRam0000000183193d10 = 0x2857d791a7cdc52f;
  uRam0000000183193d00 = func_0x000187b40c70(uRam0000000183193df8 + 0xd75c5cbbb6d44b98 ^ 0xea);
  uVar4 = uRam0000000183193d00 - (uRam0000000183193d00 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183193d00;
  uRam0000000183193e50 = uRam0000000183193d18 ^ uVar4 ^ 0x7fff;
  uRam0000000183193dd8 = (uRam0000000183193dd8 ^ uVar4) + 0x7fff ^ 0x4bc6b93a7f6fe5ac;
  uRam0000000183193eb0 = (uRam0000000183193eb0 * 0x681f299a6fdf4095 ^ uRam0000000183193dd8) + uVar4;
  uRam0000000183193ee8 = uRam0000000183193eb0 ^ uRam0000000183193dd8;
  uRam0000000183193d98 = 0x7fff;
  uVar4 = (~uRam0000000183193e48 + 0x116589ed2f421165) *
          ((uRam0000000183193d28 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183193d28 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183193dc0) + (uVar4 & uRam0000000183193dc0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193de0 =
       func_0x000187b40c70((uVar4 | 0x116589edab603241) + (uVar4 & 0x116589edab603241));
  uVar8 = uRam0000000183193de0 ^ 0x116589ed2f421164;
  uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar8;
  uRam0000000183193e48 = (uRam0000000183193e48 ^ uVar8) + 0xee9a7612d0bdee9c ^ 0x3c32d74d76e93853;
  uRam0000000183193d50 = (uRam0000000183193d50 * -0x19aaf09b7b282655 ^ uRam0000000183193e48) + uVar8
  ;
  uRam0000000183193e10 = uRam0000000183193d50 ^ uRam0000000183193e48;
  uRam0000000183193e18 = 0xee9a7612d0bdee9c;
  uRam0000000183193e98 = func_0x000187b40c70(uRam0000000183193d28 ^ 0x12c3259abe7960a5);
  uVar4 = uRam0000000183193e98 << 0x35 | (uRam0000000183193e98 & 0x7fffffffffffffff) >> 0xb;
  uRam0000000183193d18 = uRam0000000183193db8 ^ uVar4 ^ 0x116589ed2f429163;
  uRam0000000183193e00 = (uRam0000000183193e20 ^ uVar4) + 0x116589ed2f429163 ^ 0xa80d0e58484c1480;
  uRam0000000183193e20 = (uRam0000000183193e20 * -0x5b23a052c26fc3e3 ^ uRam0000000183193e00) + uVar4
  ;
  uRam0000000183193e00 = uRam0000000183193e20 ^ uRam0000000183193e00;
  uRam0000000183193e70 = 0x116589ed2f429163;
  uRam0000000183193db8 = func_0x000187b40c70(uRam0000000183193ed8 ^ 0xf5bacf6aa8e4c73);
  uVar4 = uRam0000000183193db8 << 0x22 | uRam0000000183193db8 >> 0x1e;
  uVar8 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  uRam0000000183193e48 = uRam0000000183193d20 ^ uVar4 ^ 0x7fff;
  uRam0000000183193d20 = (uRam0000000183193d20 ^ uVar4) + 0x7fff ^ 0x61249d31f6d68dca;
  uRam0000000183193ee0 = (uRam0000000183193ee0 * 0x501bfe9077d71c89 ^ uRam0000000183193d20) + uVar4;
  uRam0000000183193ef0 = uRam0000000183193ee0 ^ uRam0000000183193d20;
  uRam0000000183193e08 = 0x7fff;
  uVar4 = (~uRam0000000183193e10 + 0x16447581a635bbd) *
          ((uRam0000000183193d58 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183193d58 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183193e98) + (uVar4 & uRam0000000183193e98);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193d68 =
       func_0x000187b40c70((uVar4 | 0x16447589e410766) + (uVar4 & 0x16447589e410766));
  uVar8 = uRam0000000183193d68 ^ 0x2247c5d9937aa444;
  uVar4 = uVar8 >> 1 | uVar8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar8;
  uRam0000000183193ef0 = (uRam0000000183193ef0 ^ uVar8) + 0x16447581a63dbbb ^ 0x7877697a8942e9d;
  uRam0000000183193e68 = (uRam0000000183193e68 * 0x6bbc0f6837b1de83 ^ uRam0000000183193ef0) + uVar8;
  uRam0000000183193db8 = uRam0000000183193e68 ^ uRam0000000183193ef0;
  uRam0000000183193ea8 = 0x16447581a63dbbb;
  uVar4 = (~uRam0000000183193d48 + 0xfe9bb8a7e59ca445) *
          ((uRam0000000183193df8 ^ 0x16447589e41f89e) +
          (uRam0000000183193df8 & 0x16447589e41f89e) * 2);
  uVar4 = (uVar4 | uRam0000000183193dc0) + (uVar4 & uRam0000000183193dc0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193d80 =
       func_0x000187b40c70((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar8 = uRam0000000183193d80 ^ 0x88753313cda28de8;
  uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8;
  uRam0000000183193d58 = uRam0000000183193d00 ^ uVar8 ^ 0x7fff;
  uRam0000000183193d68 = (uRam0000000183193d68 ^ uVar8) + 0x7fff ^ 0x66b1ece8816d8ba1;
  uRam0000000183193df8 = (uRam0000000183193df8 * -0x1aa311333b3c43bf ^ uRam0000000183193d68) + uVar8
  ;
  uRam0000000183193d20 = uRam0000000183193df8 ^ uRam0000000183193d68;
  uRam0000000183193e60 = 0x7fff;
  uVar4 = (~uRam0000000183193e70 + 0xa7ad40c4c7b03e44) *
          ((uRam0000000183193d78 ^ 0xffbd79ef7bdd8cf9) +
          (uRam0000000183193d78 & 0x7fbd79ef7bdd8cf9) * 2);
  uVar4 = (uVar4 | uRam0000000183193ef0) + (uVar4 & uRam0000000183193ef0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193ee0 =
       func_0x000187b40c70((uVar4 | 0x5810392bbc6db2ba) + (uVar4 & 0x5810392bbc6db2ba));
  uRam0000000183193e88 = uRam0000000183193d98 ^ uRam0000000183193dc0 ^ 0xa76abab4c7afee1f;
  uRam0000000183193d18 =
       (uRam0000000183193d18 ^ uRam0000000183193dc0) + 0xa76abab4c7afee1f ^ 0xef9446d3c24dd37;
  uRam0000000183193ea8 =
       (uRam0000000183193ea8 * 0x2cd169a9c8bdd7f ^ uRam0000000183193d18) + uRam0000000183193dc0;
  uRam0000000183193d38 = uRam0000000183193ea8 ^ uRam0000000183193d18;
  uRam0000000183193e30 = -0x5895454b385011e1;
  uVar4 = (uRam0000000183193d20 ^ _UNK_180d526a0) + uRam0000000183193e38 + 0xffbd79ef7bdd8cf9;
  uVar8 = (uRam0000000183193e38 ^ _UNK_180d526a8) + uRam0000000183193d20 + 0xa7ad40c4c7b03e43;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193d20 ^ _UNK_180d526a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183193e38 ^ _UNK_180d526a8;
  uRam0000000183193ef0 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183193d20 + 0xa7ad40c4c7b03e43) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183193e38 + 0xffbd79ef7bdd8cf9));
  uVar4 = (uRam0000000183193ef0 ^ 0x7e846fbcd7c24e94) & 0x7fffffffffffffff ^ 0xa7ad40c4c7b03e43;
  uRam0000000183193d58 = (uRam0000000183193d58 ^ uVar4) + 0xa7ad40c4c7b02e40 ^ 0xe6d0e7d46bbc3482;
  uRam0000000183193ec0 = (uRam0000000183193ec0 * 0x3211c4770f99d0c7 ^ uRam0000000183193d58) + uVar4;
  uRam0000000183193e10 = uRam0000000183193ec0 ^ uRam0000000183193d58;
  uRam0000000183193ea8 = 0xa7ad40c4c7b02e40;
  uRam0000000183193e90 = func_0x000187b40c70(uRam0000000183193ea0 ^ 0x9ed5c5ed1957fcbc);
  uVar4 = uRam0000000183193e90 - (uRam0000000183193e90 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183193e90) << 0x25 | uRam0000000183193e90 >> 0x1b;
  uRam0000000183193d70 = uRam0000000183193dc8 ^ uVar4 ^ 0xa76abab4c7afee1f;
  uRam0000000183193e60 = (uRam0000000183193e60 ^ uVar4) + 0xa76abab4c7afee1f ^ 0xfd6f20723e62c83c;
  uRam0000000183193dc8 = (uRam0000000183193dc8 * 0x282897419200adc9 ^ uRam0000000183193e60) + uVar4;
  uRam0000000183193e20 = uRam0000000183193dc8 ^ uRam0000000183193e60;
  uRam0000000183193e10 = 0xa76abab4c7afee1f;
  uVar4 = (uRam0000000183193e28 ^ _UNK_180d526b0) + uRam0000000183193d80 + 0xffbd79ef7bdd8cf9;
  uVar8 = (uRam0000000183193d80 ^ _UNK_180d526b8) + (uRam0000000183193e28 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193e28 ^ _UNK_180d526b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183193d80 ^ _UNK_180d526b8;
  uRam0000000183193ec8 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183193e28 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183193d80 + 0xffbd79ef7bdd8cf9));
  uVar4 = uRam0000000183193ec8 << 0x1b | uRam0000000183193ec8 >> 0x25;
  uVar8 = uVar4 >> 1 | uVar4;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar4;
  uRam0000000183193d50 = (uRam0000000183193d50 ^ uVar4) + 0x42861000005023 ^ 0x1160cc9adf792f05;
  uRam0000000183193e00 = (uRam0000000183193e00 * -0x4850351c4013c60d ^ uRam0000000183193d50) + uVar4
  ;
  uRam0000000183193e88 = uRam0000000183193e00 ^ uRam0000000183193d50;
  uRam0000000183193d18 = 0x42861000005023;
  uRam0000000183193d30 = func_0x000187b40c70(uRam0000000183193d30 ^ 0x5bff7cba001df8);
  uVar4 = (ulonglong)(~(uint)uRam0000000183193d30 & 0x7fff);
  uRam0000000183193ea8 = uRam0000000183193d20 ^ uVar4 ^ 0x7fff;
  uRam0000000183193e10 = (uRam0000000183193e10 ^ uVar4) + 0x7fff ^ 0xfc600aa1ce3f48fa;
  uRam0000000183193e80 = (uRam0000000183193e80 * 0xdc0e2ddff9d5061 ^ uRam0000000183193e10) + uVar4;
  uRam0000000183193d98 = uRam0000000183193e80 ^ uRam0000000183193e10;
  uRam0000000183193db8 = 0x7fff;
  uVar4 = (uRam0000000183193e80 ^ _UNK_180d526c0) + uRam0000000183193e28 + 0xcfbc78c7a0d58cf9;
  uVar8 = (uRam0000000183193e28 ^ _UNK_180d526c8) + uRam0000000183193e80 + 0xcfbc78c724f7afdc;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193e80 ^ _UNK_180d526c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183193e28 ^ _UNK_180d526c8;
  uRam0000000183193d80 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183193e80 + 0xcfbc78c724f7afdc) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183193e28 + 0xcfbc78c7a0d58cf9));
  uVar4 = (uRam0000000183193d80 & 0xffffffffffffff00) -
          (uRam0000000183193d80 >> 1 & 0x5555555555555500);
  uVar4 = (uVar4 & 0x3333333333333300) + (uVar4 >> 2 & 0x3333333333333300);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f00) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183193d80 & 0xffffffffffffff00;
  uRam0000000183193d20 = uRam0000000183193d20 ^ uVar4 ^ 0x5eb08753f769defe;
  uRam0000000183193e40 = (uRam0000000183193e40 * -0x6afeb10346627ba3 ^ uRam0000000183193d20) + uVar4
  ;
  uRam0000000183193ee0 = uRam0000000183193e40 ^ uRam0000000183193d20;
  uRam0000000183193e68 = 0;
  uVar4 = (uRam0000000183193ea0 ^ 0x84225cda) + uRam0000000183193dd0 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193ea0 ^ 0x84225cda;
  uVar8 = ((uRam0000000183193dd0 + uRam0000000183193ea0) * 0x2000 |
          uRam0000000183193dd0 + uRam0000000183193ea0 >> 0x33) ^ uRam0000000183193dd0;
  uRam0000000183193d98 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183193ea0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183193dd0 + 0x84225cda));
  uVar4 = uRam0000000183193d98 & 0x1ffffffff;
  uRam0000000183193d40 = uRam0000000183193ea8 ^ uVar4 ^ 0x7fff;
  uRam0000000183193e08 = (uRam0000000183193e08 ^ uVar4) + 0x7fff ^ 0x75af877fd685687f;
  uRam0000000183193dd8 = (uRam0000000183193dd8 * -0x69231261a8fa5a03 ^ uRam0000000183193e08) + uVar4
  ;
  uRam0000000183193eb8 = uRam0000000183193dd8 ^ uRam0000000183193e08;
  uRam0000000183193ee0 = 0x7fff;
  param_4 = param_4 & 0x7fff;
  uVar3 = (ulonglong)param_3;
  uVar4 = (ulonglong)param_4 ^ 0x84222325;
  uVar8 = uVar4 ^ uRam0000000183193e88;
  lVar5 = uVar4 + uRam0000000183193d28;
  uVar4 = uVar8 + lVar5;
  uVar9 = (uVar3 ^ uRam0000000183193d28) + uRam0000000183193e88 + uVar3;
  uVar8 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar8;
  uVar4 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar3 ^ uRam0000000183193d28;
  uVar4 = func_0x000187b40c70((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183193e88 + uVar3) ^
                              (uVar8 << 0x1d | uVar8 >> 0x23) - lVar5);
  uVar8 = uVar3 ^ (uVar4 & 0xffffffff) * (ulonglong)_UNK_180d526d0 +
                  ((ulonglong)_UNK_180d526e0 * (uVar4 & 0xffffffff) +
                   (uVar4 >> 0x20) * (ulonglong)_UNK_180d526d0 << 0x20);
  uVar9 = (param_4 + uVar3) - (ulonglong)((param_3 & param_4) * 2);
  uRam0000000183193d48 = (uVar4 ^ uVar8) + uVar9 ^ 0xe9f3ee6fd7c5dc58;
  uRam0000000183193ed8 = (uRam0000000183193ed8 * 0x6304011c61394811 ^ uRam0000000183193d48) + uVar8;
  uRam0000000183193e48 = uRam0000000183193ed8 ^ uRam0000000183193d48;
  uVar9 = uVar9 & 0xffffffff;
  uVar4 = (uRam0000000183193e58 ^ _UNK_180d526f0) + uRam0000000183193ec0 + 0x84222325;
  uVar8 = (uRam0000000183193ec0 ^ _UNK_180d526f8) + uRam0000000183193e58 + 0x176e7be7;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193e58 ^ _UNK_180d526f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183193ec0 ^ _UNK_180d526f8;
  uRam0000000183193d90 = uVar9;
  uRam0000000183193eb8 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183193e58 + 0x176e7be7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183193ec0 + 0x84222325));
  uRam0000000183193ec8 =
       (uRam0000000183193ec8 ^ uRam0000000183193eb8 * 0x6cf4c02abd0a8b31) - 0x176e7be7 ^
       0xc4e30b55ee312ba8;
  uRam0000000183193e30 =
       (uRam0000000183193e30 * 0x34eb8305ba1cc291 ^ uRam0000000183193ec8) +
       uRam0000000183193eb8 * 0x6cf4c02abd0a8b31;
  uRam0000000183193e38 = uRam0000000183193e30 ^ uRam0000000183193ec8;
  uRam0000000183193dc8 = 0xe8918419;
  uVar4 = ((uRam0000000183193d38 ^ 0x8422527e) +
          (ulonglong)((uint)uRam0000000183193d38 & 0x8422527e) * 2) * -0xd1230832;
  uVar4 = (uVar4 | uRam0000000183193d60) + (uVar4 & uRam0000000183193d60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193e70 =
       func_0x000187b40c70((uVar4 | 0x934c2999) + (ulonglong)((uint)uVar4 & 0x934c2999));
  uVar4 = uRam0000000183193e70 & 0x1ffffc0000000;
  uRam0000000183193d98 = uRam0000000183193e78 ^ uVar4 ^ 0x176eed42;
  uRam0000000183193e88 = (uRam0000000183193e88 ^ uVar4) + 0x176eed42 ^ 0x97a016e398de3e7c;
  uRam0000000183193d40 = (uRam0000000183193d40 * 0xb2ceef8d7540fc3 ^ uRam0000000183193e88) + uVar4;
  uRam0000000183193d00 = uRam0000000183193d40 ^ uRam0000000183193e88;
  uRam0000000183193e38 = 0x176eed42;
  uVar4 = (~uRam0000000183193ea8 + 0xe891841a) *
          ((uRam0000000183193da0 ^ 0x934cce67) +
          (ulonglong)((uint)uRam0000000183193da0 & 0x934cce67) * 2);
  uVar4 = (uVar4 | uRam0000000183193ec0) + (uVar4 & uRam0000000183193ec0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193dc0 =
       func_0x000187b40c70((uVar4 | 0x7bdd4a7e) + (ulonglong)((uint)uVar4 & 0x7bdd4a7e));
  uVar4 = uRam0000000183193dc0 << 0x36 | uRam0000000183193dc0 >> 10;
  uRam0000000183193e78 = uRam0000000183193ed8 ^ uVar4 ^ 0x10000715b;
  uRam0000000183193ef0 = (uRam0000000183193e68 ^ uVar4) + 0x10000715b ^ 0xf54c72f3e277c6d8;
  uRam0000000183193d80 = (uRam0000000183193d80 * -0x55f391536ae9c195 ^ uRam0000000183193ef0) + uVar4
  ;
  uRam0000000183193ef0 = uRam0000000183193d80 ^ uRam0000000183193ef0;
  uRam0000000183193e68 = 0x715b;
  uVar4 = (~uRam0000000183193ef8 + 0x6f7134b4) * 0x84229480;
  uVar4 = (uVar4 | uRam0000000183193e78) + (uVar4 & uRam0000000183193e78);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193da0 =
       func_0x000187b40c70((uVar4 | 0xeb531796) + (ulonglong)((uint)uVar4 & 0xeb531796));
  uRam0000000183193ef8 =
       (uRam0000000183193ef8 ^ uRam0000000183193da0) - 0x6f7134b3 ^ 0xcb79f568d937c159;
  uRam0000000183193d90 =
       (uRam0000000183193d90 * -0x7aca53f3d08afdb9 ^ uRam0000000183193ef8) + uRam0000000183193da0;
  uRam0000000183193ee0 = uRam0000000183193d90 ^ uRam0000000183193ef8;
  uRam0000000183193d58 = 0x908ecb4d;
  uVar4 = (~uRam0000000183193dd8 + 0x908ecb4e) *
          ((uRam0000000183193dd0 ^ 0xeb53852b) +
          (ulonglong)((uint)uRam0000000183193dd0 & 0xeb53852b) * 2);
  uVar4 = (uVar4 | uRam0000000183193d90) + (uVar4 & uRam0000000183193d90);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183193dc8 =
       func_0x000187b40c70((uVar4 | 0x7bdd4e66) + (ulonglong)((uint)uVar4 & 0x7bdd4e66));
  uVar4 = uRam0000000183193dc8 ^ 0x6f71a60e;
  uRam0000000183193e08 = uRam0000000183193d30 ^ uVar4 ^ 0x10000715b;
  uRam0000000183193e80 = (uRam0000000183193e80 ^ uVar4) + 0x10000715b ^ 0x6013745d282b0ee4;
  uRam0000000183193e70 = (uRam0000000183193e70 * 0x444f2a7c4fcdaded ^ uRam0000000183193e80) + uVar4;
  uRam0000000183193e40 = uRam0000000183193e70 ^ uRam0000000183193e80;
  uRam0000000183193d80 = 0x715b;
  uRam0000000183193e30 = func_0x000187b40c70(uRam0000000183193eb8 ^ 0x160018aa003ceb);
  uVar4 = uRam0000000183193e30 & 0xfffffffffffffff0;
  uRam0000000183193d28 = uRam0000000183193e60 ^ uVar4 ^ 0xabe1b963;
  uRam0000000183193d30 = (uRam0000000183193d30 ^ uVar4) + 0xabe1b963 ^ 0xc572aae5eaee6abe;
  uRam0000000183193d80 = (uRam0000000183193d80 * 0x6097183f763c1a39 ^ uRam0000000183193d30) + uVar4;
  uRam0000000183193e20 = uRam0000000183193d80 ^ uRam0000000183193d30;
  uRam0000000183193da8 = 0xabe1b963;
  uVar4 = (uRam0000000183193d58 ^ _UNK_180d52700) + uRam0000000183193dc8 + 0x2fc39a46;
  uVar8 = (uRam0000000183193dc8 ^ _UNK_180d52708) + uRam0000000183193d58 + 0x541eb7f8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193d58 ^ _UNK_180d52700;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183193dc8 ^ _UNK_180d52708;
  uRam0000000183193d18 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183193d58 + 0x541eb7f8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183193dc8 + 0x2fc39a46));
  uVar8 = _UNK_180d52718;
  uVar4 = _UNK_180d52710;
  uVar3 = (uRam0000000183193d18 ^ 0x387ab0cd13cb5ce8) << 0x1e |
          (uRam0000000183193d18 ^ 0x387ab0cd13cb5ce8) >> 0x22;
  uRam0000000183193dd0 = uRam0000000183193ea8 ^ uVar3 ^ 0x10000715b;
  uRam0000000183193eb0 = (uRam0000000183193eb0 ^ uVar3) + 0x10000715b ^ 0xb11d83649036f784;
  uRam0000000183193dc0 = (uRam0000000183193dc0 * -0x34601435847ca10f ^ uRam0000000183193eb0) + uVar3
  ;
  uRam0000000183193de8 = uRam0000000183193dc0 ^ uRam0000000183193eb0;
  uRam0000000183193d68 = uRam0000000183193d30 ^ 0x10000715b;
  uRam0000000183193ef0 = 0x715b;
  uVar3 = (uRam0000000183193d20 ^ _UNK_180d52710) + uRam0000000183193e68 + 0x7887ec1a;
  uVar10 = (uRam0000000183193e68 ^ _UNK_180d52718) + uRam0000000183193d20 + 0xe8677320;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183193d20 ^ _UNK_180d52710;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183193e68 ^ _UNK_180d52718;
  uRam0000000183193ee0 =
       func_0x000187b40c70((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183193d20 + 0xe8677320) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183193e68 + 0x7887ec1a));
  uVar3 = uRam0000000183193ee0 << 10 | (uRam0000000183193ee0 & 0x7fffffffffffffff) >> 0x36;
  uRam0000000183193e88 = uRam0000000183193e00 ^ uVar3 ^ 0x1e50d425f;
  uRam0000000183193d80 = (uRam0000000183193d80 ^ uVar3) + 0x1e50d425f ^ 0xe269dac86afc3754;
  uRam0000000183193eb8 = (uRam0000000183193eb8 * 0x38bb037e01b8434f ^ uRam0000000183193d80) + uVar3;
  uRam0000000183193dc8 = uRam0000000183193eb8 ^ uRam0000000183193d80;
  uRam0000000183193e10 = 0xe50d425f;
  uVar3 = (uRam0000000183193e20 ^ uVar4) + uRam0000000183193ee8 + 0x7887ec1a;
  uVar10 = (uRam0000000183193ee8 ^ uVar8) + uRam0000000183193e20 + 0xe8677320;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183193e20 ^ uVar4;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183193ee8 ^ uVar8;
  uRam0000000183193ec0 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183193e20 + 0xe8677320) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183193ee8 + 0x7887ec1a));
  uRam0000000183193df8 =
       (uRam0000000183193df8 ^ uRam0000000183193ec0 & 0xfffffffffffffff) + 0xe8254320 ^
       0x207a8be04bb7d4fe;
  uRam0000000183193d98 =
       (uRam0000000183193d98 * 0x61a27569cbd294c1 ^ uRam0000000183193df8) +
       (uRam0000000183193ec0 & 0xfffffffffffffff);
  uRam0000000183193e88 = uRam0000000183193d98 ^ uRam0000000183193df8;
  uRam0000000183193eb8 = 0xe8254320;
  uRam0000000183193df8 = func_0x000187b40c70(uRam0000000183193de0 + 0xffe0ff7c24ffe1ff ^ 0xab);
  uRam0000000183193da8 = (uRam0000000183193df8 ^ 0xe50d425f) * 0x521e548d421c5737 ^ 0xe50d425f;
  uRam0000000183193dd0 = uRam0000000183193dd0 ^ uRam0000000183193da8 ^ 0xc0f2db01fffb4fb;
  uRam0000000183193de0 =
       (uRam0000000183193de0 * 0x23d230e4489c8d77 ^ uRam0000000183193dd0) + uRam0000000183193da8;
  uRam0000000183193d30 = uRam0000000183193de0 ^ uRam0000000183193dd0;
  uRam0000000183193e18 = 0;
  uVar4 = (uRam0000000183193dc0 ^ 0x8422527e) + uRam0000000183193ef0 + 0x8422527e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193dc0 ^ 0x8422527e;
  uVar8 = ((uRam0000000183193ef0 + uRam0000000183193dc0) * 0x2000 |
          uRam0000000183193ef0 + uRam0000000183193dc0 >> 0x33) ^ uRam0000000183193ef0;
  uRam0000000183193e00 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183193dc0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183193ef0 + 0x8422527e));
  uRam0000000183193d30 = uRam0000000183193e98 ^ uRam0000000183193e00 ^ 0x715b;
  uRam0000000183193ec8 = (uRam0000000183193ec8 ^ uRam0000000183193e00) + 0x715b ^ 0x98b6d27d5a80a8ae
  ;
  uRam0000000183193d08 =
       (uRam0000000183193d08 * 0x6e1dc1fb843c1805 ^ uRam0000000183193ec8) + uRam0000000183193e00;
  uRam0000000183193ec8 = uRam0000000183193d08 ^ uRam0000000183193ec8;
  uRam0000000183193d48 = 0x715b;
  uRam0000000183193d78 = func_0x000187b40c70(uRam0000000183193d50 ^ 0xfff300821cffd7f6);
  uRam0000000183193e38 =
       (uRam0000000183193e38 ^ uRam0000000183193d78 & 0x7fffffffffffffff) + 0x35a30c0 ^
       0x72cf9467dfc9245b;
  uRam0000000183193eb0 =
       (uRam0000000183193eb0 * 0xa7992e96116471 ^ uRam0000000183193e38) +
       (uRam0000000183193d78 & 0x7fffffffffffffff);
  uRam0000000183193e58 = uRam0000000183193eb0 ^ uRam0000000183193e38;
  uRam0000000183193d18 = uRam0000000183193e80 ^ 0x35a30c0;
  uRam0000000183193d68 = 0x35a30c0;
  uRam0000000183193d10 = func_0x000187b40c70(uRam0000000183193d70 ^ 0xa3ffa939ff2cc6);
  uVar4 = (uRam0000000183193d10 ^ 0x34ef3d52c5d3f40) & 0x7fffffffffff0000;
  uRam0000000183193df8 = uRam0000000183193df8 ^ uVar4 ^ 0xbcb69aa899528284;
  uRam0000000183193e00 = (uRam0000000183193e00 * 0x5f9516326daa11db ^ uRam0000000183193df8) + uVar4;
  uRam0000000183193e80 = uRam0000000183193e00 ^ uRam0000000183193df8;
  uRam0000000183193d70 = 0;
  uVar4 = (uRam0000000183193d98 ^ 0x8422527e) + uRam0000000183193d98 + 0x8422527e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183193d98 ^ 0x8422527e;
  uVar8 = (uRam0000000183193d98 << 0xe | (uRam0000000183193d98 & 0x7fffffffffffffff) >> 0x32) ^
          uRam0000000183193d98;
  uRam0000000183193dd0 =
       func_0x000187b40c70((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183193d98 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183193d98 + 0x8422527e));
  uVar4 = uRam0000000183193dd0 << 0x13 | uRam0000000183193dd0 >> 0x2d;
  uRam0000000183193d00 = uRam0000000183193e38 ^ uVar4 ^ 0x715b;
  uRam0000000183193d60 = (uRam0000000183193d60 ^ uVar4) + 0x715b ^ 0x5abb33669b9d9194;
  uRam0000000183193df8 = (uRam0000000183193df8 * -0x4b13ae08047a8e7f ^ uRam0000000183193d60) + uVar4
  ;
  uRam0000000183193d70 = uRam0000000183193df8 ^ uRam0000000183193d60;
  auVar6._8_8_ = _UNK_180d52728;
  auVar6._0_8_ = uVar9 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_180d52730,_UNK_1800170c0);
  uRam0000000183193dc0 = 0x715b;
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar8 + uRam0000000183193ea0;
  if (auVar7._4_4_ < 0) {
    uVar4 = uRam0000000183193d60 ^ uVar8;
  }
  uRam0000000183193db8 = func_0x000187b40c70(SUB161(auVar6 ^ _UNK_180d52730,5) ^ uVar4);
  uVar4 = (uRam0000000183193db8 << 0x2e | uRam0000000183193db8 >> 0x12) * -0x330339b4ca47054d;
  uRam0000000183193e28 = uVar9 ^ 0x715b;
  uRam0000000183193ea0 = (uRam0000000183193ea0 ^ uVar4) + uRam0000000183193e28 ^ 0x5dcc702a8b1c5dc4;
  uRam0000000183193e48 = (uRam0000000183193e48 * 0x1384d39209148153 ^ uRam0000000183193ea0) + uVar4;
  uRam0000000183193e58 = uRam0000000183193e48 ^ uRam0000000183193ea0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x190c1,0x3ec);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187b377d7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d50830 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/lY; cjl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 187b40d00, runtime 6fffef750d00) =====

void FUN_187b40d00(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000187b40d4b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d528a0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/lY; cjm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 187b41d10, runtime 6fffef751d10) =====

void FUN_187b41d10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187b41d99 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d52e60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



