// ===== Lsixtwo/mI$uR; _5a48bfb10d959cf978eba36b60a8a90b ()V (handler @ image 186ee9570, runtime 6fffeeaf9570) =====

void FUN_186ee9570(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186ee964c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a944f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; dvA ()Lnet/minecraft/class_1044; (handler @ image 186eed950, runtime 6fffeeafd950) =====

void FUN_186eed950(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186eed970 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a958a0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; dvB (Ljava/lang/String;)Lsixtwo/mI$uR; (handler @ image 186eedb50, runtime 6fffeeafdb50) =====

void FUN_186eedb50(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186eedb75 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a95980 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; dvC (Lnet/minecraft/class_1044;)Lsixtwo/mI$uR; (handler @ image 186eedd50, runtime 6fffeeafdd50) =====

void FUN_186eedd50(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186eedd75 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a95a60 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; dvD (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 186eedf50, runtime 6fffeeafdf50) =====

undefined8 FUN_186eedf50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/mI$uR; dvE ([B)Ljava/lang/String; (handler @ image 186eedfe0, runtime 6fffeeafdfe0) =====

void FUN_186eedfe0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000186eee080 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a95cc0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; dvF (IJ)Ljava/lang/String; (handler @ image 186f160f0, runtime 6fffeeb260f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186f160f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = (uRam0000000183174ac0 ^ _UNK_180a9ced0) + uRam0000000183174a98 + 0x684b4c9436bded;
  uVar6 = (uRam0000000183174a98 ^ _UNK_180a9ced8) + uRam0000000183174ac0 + 0x80567e63a610ba22;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174ac0 ^ _UNK_180a9ced0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174a98 ^ _UNK_180a9ced8;
  uRam0000000183174a10 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183174ac0 + 0x80567e63a610ba22) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183174a98 + 0x684b4c9436bded));
  uVar4 = (uRam0000000183174a10 ^ 0xc00049848) & 0x4b4c10149ec8;
  uRam0000000183174990 = (uRam0000000183174990 ^ uVar4) + 0x807e7f6fb614beea ^ 0x2cda0311d64597f5;
  uRam0000000183174ac0 = (uRam0000000183174ac0 * 0x13239e8c0dbdc8bd ^ uRam0000000183174990) + uVar4;
  uRam0000000183174a68 = uRam0000000183174ac0 ^ uRam0000000183174990;
  uRam0000000183174ab0 = 0x807e7f6fb614beea;
  uVar4 = (~uRam0000000183174988 + 0xc5dd146b1d365d9f) *
          ((uRam0000000183174a30 ^ 0x8c1e8c6909dba9b1) +
          (uRam0000000183174a30 & 0xc1e8c6909dba9b1) * 2);
  uVar4 = (uVar4 | uRam0000000183174ab8) + (uVar4 & uRam0000000183174ab8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174970 =
       func_0x000186f1caf0((uVar4 | 0x49c3980214edf42f) + (uVar4 & 0x49c3980214edf42f));
  uRam0000000183174ab8 =
       (uRam0000000183174ab8 ^ ~uRam0000000183174970 & 0x8c1e8c698df98a94) + 0x49c3980290cfd70a ^
       0x6f677a05f8cda7dc;
  uRam0000000183174900 =
       (uRam0000000183174900 * -0x313e00fa1d623ff1 ^ uRam0000000183174ab8) +
       (~uRam0000000183174970 & 0x8c1e8c698df98a94);
  uRam0000000183174958 = 0x49c3980290cfd70a;
  uRam00000001831749d8 = func_0x000186f1caf0(uRam0000000183174a28 + 0xb0a5dae26a0df3e8 ^ 0x4d);
  uVar4 = (uRam00000001831749d8 ^ 0x2f250d5799d6f240) * 0x5bc59f1a7a0065b7;
  uRam0000000183174920 = uRam0000000183174968 ^ uVar4 ^ 0x2f250d5799d7723f;
  uRam00000001831749c0 = (uRam00000001831749c0 ^ uVar4) + 0x2f250d5799d7723f ^ 0x6d23df864d0f0853;
  uRam0000000183174a58 = (uRam0000000183174a58 * -0x1a8e4a6d3f43d515 ^ uRam00000001831749c0) + uVar4
  ;
  uRam0000000183174ac0 = uRam0000000183174a58 ^ uRam00000001831749c0;
  uRam0000000183174960 = 0x2f250d5799d7723f;
  uVar4 = (uRam0000000183174a10 ^ _UNK_180a9cee0) + uRam0000000183174ad0 + 0x2f250d571df5511a;
  uVar6 = (uRam0000000183174ad0 ^ _UNK_180a9cee8) + uRam0000000183174a10 + 0xd0daf2a866290dc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174a10 ^ _UNK_180a9cee0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174ad0 ^ _UNK_180a9cee8;
  uRam0000000183174958 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183174a10 + 0xd0daf2a866290dc0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183174ad0 + 0x2f250d571df5511a));
  uRam0000000183174a60 = (uRam0000000183174a58 ^ uRam0000000183174988) + 0x7fff ^ 0x2691dc5f3138e5c2
  ;
  uRam0000000183174a58 =
       (uRam0000000183174a58 * 0x9cd5e0df437ef6d ^ uRam0000000183174a60) + uRam0000000183174988;
  uRam0000000183174a60 = uRam0000000183174a58 ^ uRam0000000183174a60;
  uRam0000000183174aa0 = 0x7fff;
  uRam0000000183174a68 = func_0x000186f1caf0(uRam0000000183174948 ^ 0x1151cf578982e6ef);
  uVar4 = uRam0000000183174a68 ^ 0x7fff;
  uRam0000000183174950 = uRam00000001831749f0 ^ uVar4 ^ 0xd751836e3b19624f;
  uRam0000000183174a28 = (uRam0000000183174a28 ^ uVar4) + 0xd751836e3b19624f ^ 0xaf2ae053c070554a;
  uRam0000000183174900 = (uRam0000000183174900 * -0xe75a44071ef9c1 ^ uRam0000000183174a28) + uVar4;
  uRam0000000183174a40 = uRam0000000183174900 ^ uRam0000000183174a28;
  uRam0000000183174aa8 = 0xd751836e3b19624f;
  uVar4 = (uRam0000000183174ab0 ^ _UNK_180a9cef0) + uRam0000000183174998 + 0x84222325;
  uVar6 = (uRam0000000183174998 ^ _UNK_180a9cef8) + uRam0000000183174ab0 + 0xa8c79462908367a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174ab0 ^ _UNK_180a9cef0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174998 ^ _UNK_180a9cef8;
  uRam0000000183174a98 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183174ab0 + 0xa8c79462908367a0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174998 + 0x84222325));
  uVar4 = uRam0000000183174a98 - (uRam0000000183174a98 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183174a98;
  uRam00000001831749e8 = (uRam00000001831749e8 ^ uVar4) + 0x57386b9d6f7c9860 ^ 0x4ffbb0aa2a33013d;
  uRam0000000183174af8 = (uRam0000000183174af8 * -0x5f6fc36d8b13b9a5 ^ uRam00000001831749e8) + uVar4
  ;
  uRam0000000183174980 = uRam0000000183174af8 ^ uRam00000001831749e8;
  uRam0000000183174ac8 = 0x57386b9d6f7c9860;
  uVar4 = (~uRam00000001831749a8 + 0x57386b9d6f7c9861) *
          ((uRam00000001831749d8 ^ 0xa8c7946214a1c4ba) +
          (uRam00000001831749d8 & 0x28c7946214a1c4ba) * 2);
  uVar4 = (uVar4 | uRam0000000183174a28) + (uVar4 & uRam0000000183174a28);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831749a8 =
       func_0x000186f1caf0((uVar4 | 0xffffffff7bdd5cda) + (uVar4 & 0xffffffff7bdd5cda));
  uVar4 = uRam00000001831749a8 & 0x3fffff800;
  uRam0000000183174ac0 = uRam0000000183174ae0 ^ uVar4 ^ 0x7fff;
  uRam0000000183174938 = (uRam0000000183174aa8 ^ uVar4) + 0x7fff ^ 0x92f4931ca6bd2ace;
  uRam0000000183174950 = (uRam0000000183174950 * -0x5a3bf99d8d0cbd27 ^ uRam0000000183174938) + uVar4
  ;
  uRam0000000183174938 = uRam0000000183174950 ^ uRam0000000183174938;
  uRam0000000183174aa8 = uRam0000000183174a40 ^ 0x7fff;
  uRam0000000183174ad8 = 0x7fff;
  uVar4 = (uRam0000000183174928 ^ _UNK_180a9cf00) + uRam0000000183174a48 + 0x807e7f6f32369dcf;
  uVar6 = (uRam0000000183174a48 ^ _UNK_180a9cf08) + uRam0000000183174928 + 0x49c3980290cfd70a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174928 ^ _UNK_180a9cf00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174a48 ^ _UNK_180a9cf08;
  uRam0000000183174a08 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183174928 + 0x49c3980290cfd70a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183174a48 + 0x807e7f6f32369dcf));
  uVar4 = (uRam0000000183174a08 & 0x7fffffffffffffff) * 0xa68c168b8d0d199;
  uRam00000001831749e8 = uRam0000000183174a78 ^ uVar4 ^ 0xca42177246e495f4;
  uRam00000001831749a8 = (uRam00000001831749a8 ^ uVar4) + 0xca42177246e495f4 ^ 0xdc87e758472e82c3;
  uRam0000000183174950 = (uRam0000000183174950 * 0x1c86219cd8fead43 ^ uRam00000001831749a8) + uVar4;
  uRam0000000183174a68 = uRam0000000183174950 ^ uRam00000001831749a8;
  uRam0000000183174a38 = 0xca42177246e495f4;
  uVar4 = (~uRam0000000183174ad0 + 0x49c3980290cfd70b) *
          ((uRam0000000183174a08 ^ 0x807e7f6f32369dcf) +
          (uRam0000000183174a08 & 0x7e7f6f32369dcf) * 2);
  uVar4 = (uVar4 | uRam0000000183174ab8) + (uVar4 & uRam0000000183174ab8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174a70 =
       func_0x000186f1caf0((uVar4 | 0xc9bde76da2f94ac5) + (uVar4 & 0xc9bde76da2f94ac5));
  uVar4 = uRam0000000183174a70 << 0x3c | uRam0000000183174a70 >> 4;
  uRam0000000183174a38 = (uRam0000000183174a38 ^ uVar4) + 0xc9bde76d26db69e0 ^ 0x638465c8ac5ef683;
  uRam0000000183174a48 = (uRam0000000183174a48 * -0x3ff9cb5e1b7a24c7 ^ uRam0000000183174a38) + uVar4
  ;
  uRam0000000183174aa8 = uRam0000000183174a48 ^ uRam0000000183174a38;
  uRam0000000183174a58 = 0xc9bde76d26db69e0;
  uRam00000001831749b0 = func_0x000186f1caf0(uRam00000001831749e8 + 0xdcb9725d431e4836 ^ 0x93);
  uRam0000000183174af8 =
       (uRam0000000183174af8 ^ uRam00000001831749b0 * 0x1079cdccbb895043) + 0x4218029004960a ^
       0x8e5a5071fe44c264;
  uRam0000000183174ae0 =
       (uRam0000000183174ae0 * 0x16956820def6844f ^ uRam0000000183174af8) +
       uRam00000001831749b0 * 0x1079cdccbb895043;
  uRam0000000183174a38 = uRam0000000183174ae0 ^ uRam0000000183174af8;
  uRam00000001831749b8 = 0x4218029004960a;
  uRam0000000183174a30 = func_0x000186f1caf0(uRam00000001831749e0 + 0xd7a6187ecf372f38 ^ 0x87);
  uRam0000000183174ab8 = uRam0000000183174a00 ^ uRam0000000183174a30 ^ 0xca42177246e495f4;
  uRam00000001831749f8 =
       (uRam00000001831749f8 ^ uRam0000000183174a30) + 0xca42177246e495f4 ^ 0x46b4fbb3f63b6afb;
  uRam0000000183174a28 =
       (uRam0000000183174a28 * 0x2754426d24b60bf1 ^ uRam00000001831749f8) + uRam0000000183174a30;
  uRam0000000183174ac8 = uRam0000000183174a28 ^ uRam00000001831749f8;
  uRam00000001831749b8 = -0x35bde88db91b6a0c;
  uVar4 = (~uRam0000000183174af0 + 0xca42177246e495f5) *
          ((uRam0000000183174940 ^ 0xca421772c2c6b6d1) +
          (uRam0000000183174940 & 0x4a421772c2c6b6d1) * 2);
  uVar4 = (uVar4 | uRam0000000183174a48) + (uVar4 & uRam0000000183174a48);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831749d8 =
       func_0x000186f1caf0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam0000000183174ad0 = uRam00000001831749d8 << 0x10 | uRam00000001831749d8 >> 0x30;
  uRam0000000183174a40 = uRam0000000183174a40 ^ uRam0000000183174ad0 ^ 0xe251eb8241774614;
  uRam00000001831749c0 =
       (uRam00000001831749c0 * -0x65f91640cfec5893 ^ uRam0000000183174a40) + uRam0000000183174ad0;
  uRam0000000183174a78 = uRam00000001831749c0 ^ uRam0000000183174a40;
  uRam0000000183174aa0 = 0;
  uVar4 = (uRam0000000183174a68 ^ 0x84225cda) + uRam0000000183174920 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174a68 ^ 0x84225cda;
  uVar6 = ((uRam0000000183174920 + uRam0000000183174a68) * 0x2000 |
          uRam0000000183174920 + uRam0000000183174a68 >> 0x33) ^ uRam0000000183174920;
  uRam00000001831749a8 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam0000000183174a68 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174920 + 0x84225cda));
  uVar4 = uRam0000000183174980 - (uRam0000000183174980 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183174980;
  uRam0000000183174968 = uRam00000001831749a8 ^ uVar4 ^ 0x7fff;
  uRam0000000183174a98 = (uRam0000000183174a98 ^ uVar4) + 0x7fff ^ 0xae6bfa3b1c237989;
  uRam0000000183174a18 = (uRam0000000183174a18 * 0x6e054b981b51536b ^ uRam0000000183174a98) + uVar4;
  uRam0000000183174a70 = uRam0000000183174a18 ^ uRam0000000183174a98;
  uRam0000000183174978 = 0x7fff;
  uRam0000000183174948 = func_0x000186f1caf0(uRam0000000183174ae0 ^ 0x901e7ebd0f7fb719);
  uRam00000001831749c0 =
       (uRam00000001831749c0 ^ ~uRam0000000183174948) + 0x7f81809049eb4115 ^ 0x14c6fc796efbd7db;
  uRam0000000183174a08 =
       (uRam0000000183174a08 * -0x1ea692c59bca282b ^ uRam00000001831749c0) + ~uRam0000000183174948;
  uRam0000000183174a40 = uRam0000000183174a08 ^ uRam00000001831749c0;
  uRam0000000183174ae8 = 0x7f81809049eb4115;
  uVar4 = (~uRam00000001831749c8 + 0x7f81809049eb4116) *
          ((uRam0000000183174a38 ^ 0x807e7f6f32369dcf) +
          (uRam0000000183174a38 & 0x7e7f6f32369dcf) * 2);
  uVar4 = (uVar4 | uRam0000000183174960) + (uVar4 & uRam0000000183174960);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174a58 =
       func_0x000186f1caf0((uVar4 | 0xffffffff7bdddcda) + (uVar4 & 0xffffffff7bdddcda));
  uVar4 = uRam0000000183174a58 << 0x27 | uRam0000000183174a58 >> 0x19;
  uRam00000001831749b0 = uRam00000001831749b0 ^ uVar4 ^ 0xa122383a9982de03;
  uRam0000000183174930 = (uRam0000000183174930 * 0x778854da6852aa6f ^ uRam00000001831749b0) + uVar4;
  uRam00000001831749c0 = uRam0000000183174930 ^ uRam00000001831749b0;
  uRam0000000183174910 = 0;
  uVar4 = ((uRam0000000183174ae8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183174ae8 & 0x84225cda) * 2) * -uRam0000000183174a28;
  uVar4 = (uVar4 | uRam00000001831749b0) + (uVar4 & uRam00000001831749b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174a58 =
       func_0x000186f1caf0((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = uRam0000000183174a58 & 0xfffffffffffe0000;
  uRam0000000183174ae0 = uRam0000000183174978 ^ uVar4 ^ 0x7fff;
  uRam0000000183174a98 = (uRam0000000183174a98 ^ uVar4) + 0x7fff ^ 0x2c40dec23ccc7115;
  uRam0000000183174920 = (uRam0000000183174920 * -0x4f466414634f0b83 ^ uRam0000000183174a98) + uVar4
  ;
  uRam0000000183174a38 = uRam0000000183174920 ^ uRam0000000183174a98;
  uRam0000000183174af0 = 0x7fff;
  uVar4 = (uRam0000000183174968 ^ 0x84225cda) + uRam0000000183174a70 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174968 ^ 0x84225cda;
  uVar6 = ((uRam0000000183174a70 + uRam0000000183174968) * 0x2000 |
          uRam0000000183174a70 + uRam0000000183174968 >> 0x33) ^ uRam0000000183174a70;
  uRam0000000183174920 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam0000000183174968 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174a70 + 0x84225cda));
  uVar4 = uRam0000000183174920 ^ 0x7fff;
  uRam0000000183174a30 = uRam0000000183174968 ^ uVar4 ^ 0x7fff;
  uRam0000000183174968 = (uRam0000000183174968 ^ uVar4) + 0x7fff ^ 0x2ef707f0890d00cf;
  uRam0000000183174a68 = (uRam0000000183174a68 * 0xe8d47631bbcd8f7 ^ uRam0000000183174968) + uVar4;
  uRam0000000183174940 = uRam0000000183174a68 ^ uRam0000000183174968;
  uRam0000000183174a90 = 0x7fff;
  uVar4 = param_4 ^ 0x84222325 ^ uRam0000000183174a30;
  lVar3 = (param_4 ^ 0x84222325) + uRam0000000183174a68;
  uVar6 = uVar4 + lVar3;
  uVar8 = (uRam0000000183174a68 ^ 0x7fff) + uRam0000000183174a30 + 0x7fff;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183174a68 ^ 0x7fff;
  uRam0000000183174a90 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183174a30 + 0x7fff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar4 = (param_4 * 0x7fff ^ uRam0000000183174a90) * 0x4c8661299d7247e3;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar8 = (ulonglong)uVar2;
  uRam0000000183174900 = (uRam0000000183174900 ^ uVar4) + uVar8 ^ 0x50ce7d66e10eba7c;
  uRam0000000183174ac8 = (uRam0000000183174ac8 * -0x270fb74d0fd2fabb ^ uRam0000000183174900) + uVar4
  ;
  uRam0000000183174a00 = uRam0000000183174ac8 ^ uRam0000000183174900;
  uVar6 = (ulonglong)param_3;
  uVar4 = uVar8 ^ 0x84222325 ^ uRam0000000183174a50;
  lVar3 = (uVar8 ^ 0x84222325) + uRam0000000183174908;
  uVar5 = uVar4 + lVar3;
  uVar7 = (uVar6 ^ uRam0000000183174908) + uRam0000000183174a50 + uVar6;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6 ^ uRam0000000183174908;
  uRam00000001831749e0 = uVar8;
  uRam0000000183174a78 =
       func_0x000186f1caf0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183174a50 + uVar6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uRam0000000183174938 = (uVar8 + uVar6) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183174968 =
       (uRam0000000183174968 ^ ~uRam0000000183174a78 & uVar8) + uRam0000000183174938 ^
       0xdc1cb8229d847663;
  uRam0000000183174af0 =
       (uRam0000000183174af0 * -0x514f84fd4dbb883f ^ uRam0000000183174968) +
       (~uRam0000000183174a78 & uVar8);
  uRam0000000183174950 = uRam0000000183174af0 ^ uRam0000000183174968;
  uRam0000000183174938 = uRam0000000183174938 & 0xffffffff;
  uVar4 = (uRam0000000183174a10 ^ _UNK_180a9cf10) + uRam0000000183174a10 + 0x9250db8d;
  uVar6 = (uRam0000000183174a10 ^ _UNK_180a9cf18) + uRam0000000183174a10 + 0x7e224fd8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174a10 ^ _UNK_180a9cf10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174a10 ^ _UNK_180a9cf18;
  uRam0000000183174950 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183174a10 + 0x7e224fd8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174a10 + 0x9250db8d));
  uVar4 = (ulonglong)(~(uint)uRam0000000183174950 & 0x1672f8a8);
  uRam0000000183174a60 = (uRam0000000183174a60 ^ uVar4) + 0x7e72fff8 ^ 0xf6a3a6ed31228fc4;
  uRam0000000183174ad0 = (uRam0000000183174ad0 * -0x53ab4ad40d1bdaef ^ uRam0000000183174a60) + uVar4
  ;
  uRam0000000183174ab8 = uRam0000000183174ad0 ^ uRam0000000183174a60;
  uRam0000000183174928 = 0x7e72fff8;
  uVar4 = (uRam0000000183174988 ^ _UNK_180a9cf20) + uRam0000000183174a28 + 0x717d526d;
  uVar6 = (uRam0000000183174a28 ^ _UNK_180a9cf28) + uRam0000000183174988 + 0x715b68be;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174988 ^ _UNK_180a9cf20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174a28 ^ _UNK_180a9cf28;
  uRam0000000183174930 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183174988 + 0x715b68be) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174a28 + 0x717d526d));
  uVar4 = (ulonglong)((uint)uRam0000000183174930 & 0xf55f7148);
  uRam0000000183174970 = (uRam0000000183174970 ^ uVar4) + 0x840419f6 ^ 0xa98ebd8f5785505c;
  uRam0000000183174a60 = (uRam0000000183174a60 * 0xa063cd733251c41 ^ uRam0000000183174970) + uVar4;
  uRam0000000183174a78 = uRam0000000183174a60 ^ uRam0000000183174970;
  uRam00000001831749d0 = 0x840419f6;
  uVar4 = (~uRam0000000183174a60 + 0x7de3f441) *
          ((uRam0000000183174ad8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183174ad8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183174a58) + (uVar4 & uRam0000000183174a58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174a10 =
       func_0x000186f1caf0((uVar4 | 0xf9c1d765) + (ulonglong)((uint)uVar4 & 0xf9c1d765));
  uRam0000000183174a18 =
       (uRam0000000183174900 ^ uRam0000000183174a10 & 0x7fffffffffffffff) - 0x7de3f440 ^
       0x6515b4f4134533b3;
  uRam0000000183174900 =
       (uRam0000000183174900 * -0x2605d196c15253db ^ uRam0000000183174a18) +
       (uRam0000000183174a10 & 0x7fffffffffffffff);
  uRam0000000183174a18 = uRam0000000183174900 ^ uRam0000000183174a18;
  uRam0000000183174af8 = 0x821c0bc0;
  uRam0000000183174958 = func_0x000186f1caf0(uRam0000000183174a80 + 0xffbaff99140040ff ^ 0x61);
  uRam0000000183174968 = uRam0000000183174af8 ^ uRam0000000183174ad8 ^ 0x7de41099;
  uRam0000000183174af0 =
       (uRam0000000183174af0 ^ uRam0000000183174ad8) + 0x7de41099 ^ 0xc07bfc644319c491;
  uRam0000000183174a10 =
       (uRam0000000183174a10 * -0x1f6e8c7988f9c671 ^ uRam0000000183174af0) + uRam0000000183174ad8;
  uRam0000000183174978 = uRam0000000183174a10 ^ uRam0000000183174af0;
  uRam0000000183174aa8 = 0x7de41099;
  uVar4 = (~uRam0000000183174a78 + 0x821c0bc1) *
          ((uRam00000001831749a8 ^ 0xf9c633bc) +
          (ulonglong)((uint)uRam00000001831749a8 & 0xf9c633bc) * 2);
  uVar4 = (uVar4 | uRam0000000183174a18) + (uVar4 & uRam0000000183174a18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174928 =
       func_0x000186f1caf0((uVar4 | 0x7bda387c) + (ulonglong)((uint)uVar4 & 0x7bda387c));
  uVar4 = uRam0000000183174928 & 0x7fffffffffffffff;
  uRam0000000183174900 = uRam0000000183174998 ^ uVar4 ^ 0x100001c59;
  uRam00000001831749a0 = (uRam00000001831749a0 ^ uVar4) + 0x100001c59 ^ 0x6b8fa846504eedd5;
  uRam0000000183174a98 = (uRam0000000183174a98 * 0x2a28ce1602ec7ef9 ^ uRam00000001831749a0) + uVar4;
  uRam0000000183174ad8 = uRam0000000183174a98 ^ uRam00000001831749a0;
  uRam00000001831749e0 = 0x1c59;
  uRam00000001831749a8 = func_0x000186f1caf0(uRam0000000183174af0 ^ 0xff48ffb25cffae24);
  uVar4 = uRam00000001831749a8 << 10 | uRam00000001831749a8 >> 0x36;
  uRam0000000183174a48 = (uRam0000000183174a48 ^ uVar4) - 0xd6fdea40 ^ 0x686a079312540260;
  uRam0000000183174aa8 = (uRam0000000183174aa8 * -0x45677af7700dc36d ^ uRam0000000183174a48) + uVar4
  ;
  uRam00000001831749d0 = uRam0000000183174aa8 ^ uRam0000000183174a48;
  uRam0000000183174a00 = 0x290215c0;
  uRam0000000183174900 = func_0x000186f1caf0(uRam00000001831749f0 + 0x550031dc0036ff ^ 0xd2);
  uVar4 = (uRam0000000183174900 ^ 0xd6fdfe59) & 0x3fffffffffffff;
  uRam0000000183174ac0 = uRam0000000183174978 ^ uVar4 ^ 0xd6fe0699;
  uRam0000000183174a98 = (uRam0000000183174a98 ^ uVar4) + 0xd6fe0699 ^ 0xdb032ae162d08260;
  uRam00000001831749f8 = (uRam00000001831749f8 * 0x4a8635f1f3e7f483 ^ uRam0000000183174a98) + uVar4;
  uRam0000000183174a68 = uRam00000001831749f8 ^ uRam0000000183174a98;
  uRam00000001831749e0 = 0xd6fe0699;
  uVar4 = (uRam0000000183174978 ^ _UNK_180a9cf30) + uRam0000000183174900 + 0x52dc25bc;
  uVar6 = (uRam0000000183174900 ^ _UNK_180a9cf38) + uRam0000000183174978 + 0x290215c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174978 ^ _UNK_180a9cf30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174900 ^ _UNK_180a9cf38;
  uRam0000000183174ac0 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183174978 + 0x290215c0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174900 + 0x52dc25bc));
  uVar4 = (uRam0000000183174ac0 ^ 0xfffe17d9) << 0x1e |
          uRam0000000183174ac0 >> 0x22 & 0xfffffffffe000000;
  uRam0000000183174a88 = uRam00000001831749c0 ^ uVar4 ^ 0x100001c59;
  uRam0000000183174958 = (uRam0000000183174958 ^ uVar4) + 0x100001c59 ^ 0xe7de11d20db2ae3c;
  uRam0000000183174af8 = (uRam0000000183174af8 * 0x652ba14df64e2195 ^ uRam0000000183174958) + uVar4;
  uRam0000000183174918 = uRam0000000183174af8 ^ uRam0000000183174958;
  uRam0000000183174970 = 0x1c59;
  uVar4 = (uRam00000001831749c0 ^ _UNK_180a9cf40) + uRam0000000183174a60 + 0x84223f7c;
  uVar6 = (uRam0000000183174a60 ^ _UNK_180a9cf48) + uRam00000001831749c0 + 0x42d20dc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831749c0 ^ _UNK_180a9cf40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174a60 ^ _UNK_180a9cf48;
  uRam0000000183174a40 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831749c0 + 0x42d20dc0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174a60 + 0x84223f7c));
  uRam0000000183174a80 = uRam0000000183174a78 ^ uRam0000000183174a40 ^ 0x42d22a19;
  uRam0000000183174a60 =
       (uRam0000000183174a60 ^ uRam0000000183174a40) + 0x42d22a19 ^ 0x8945e538819a8c8;
  uRam0000000183174958 =
       (uRam00000001831749b0 * 0x2c358b26b8f2114b ^ uRam0000000183174a60) + uRam0000000183174a40 ^
       uRam0000000183174a60;
  uRam00000001831749b0 = uRam0000000183174a90 ^ 0x42d22a19;
  uRam0000000183174968 = 0x42d22a19;
  uVar4 = (uRam0000000183174920 ^ _UNK_180a9cf50) + uRam0000000183174a30 + 0xc6f0093c;
  uVar6 = (uRam0000000183174a30 ^ _UNK_180a9cf58) + uRam0000000183174920 + 0xbd2df240;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174920 ^ _UNK_180a9cf50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174a30 ^ _UNK_180a9cf58;
  uRam0000000183174998 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183174920 + 0xbd2df240) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174a30 + 0xc6f0093c));
  uVar4 = uRam0000000183174998 ^ 0x42d22a19;
  uRam0000000183174908 = uRam0000000183174a48 ^ uVar4 ^ 0x100001c59;
  uRam0000000183174968 = (uRam0000000183174968 ^ uVar4) + 0x100001c59 ^ 0x7abb07da364f30ea;
  uRam0000000183174a20 = (uRam0000000183174a20 * 0x24683eb7c3fa9c0f ^ uRam0000000183174968) + uVar4;
  uRam0000000183174950 = uRam0000000183174a20 ^ uRam0000000183174968;
  uRam0000000183174970 = 0x1c59;
  uVar4 = (uRam0000000183174a70 ^ _UNK_180a9cf60) + uRam0000000183174ab8 + 0xfa50dcdd;
  uVar6 = (uRam0000000183174ab8 ^ _UNK_180a9cf68) + uRam0000000183174a70 + 0x840419f6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174a70 ^ _UNK_180a9cf60;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174ab8 ^ _UNK_180a9cf68;
  uRam0000000183174a68 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183174a70 + 0x840419f6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174ab8 + 0xfa50dcdd));
  uVar4 = ((uRam0000000183174a68 ^ 0x80040006) & 7) << 0x3c |
          (uRam0000000183174a68 ^ 0x80040006) >> 4;
  uRam0000000183174978 = (uRam0000000183174978 ^ uVar4) + 0xfa76e60e ^ 0x9e3f02811a96435a;
  uRam00000001831749b8 = (uRam00000001831749b8 * 0x18a99ceb90af53d5 ^ uRam0000000183174978) + uVar4;
  uRam0000000183174a00 = uRam00000001831749b8 ^ uRam0000000183174978;
  uRam0000000183174980 = 0xfa76e60e;
  uVar4 = (~uRam0000000183174ae8 + 0x80033e1) *
          ((uRam0000000183174930 ^ 0x7e54c52b) +
          (ulonglong)((uint)uRam0000000183174930 & 0x7e54c52b) * 2);
  uVar4 = (uVar4 | uRam0000000183174a58) + (uVar4 & uRam0000000183174a58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174a10 =
       func_0x000186f1caf0((uVar4 | 0x7654f6cb) + (ulonglong)((uint)uVar4 & 0x7654f6cb));
  uVar4 = uRam0000000183174a10 * -0x1622424d6ce9f06b & 0xfffffffff;
  uRam0000000183174958 = uRam0000000183174998 ^ uVar4 ^ 0x1027719ee;
  uRam00000001831749c0 = (uRam00000001831749c0 ^ uVar4) + 0x1027719ee ^ 0x232429bf620a17d3;
  uRam0000000183174ad8 = (uRam0000000183174ad8 * -0xb62e504418ebd3d ^ uRam00000001831749c0) + uVar4;
  uRam0000000183174a40 = uRam0000000183174ad8 ^ uRam00000001831749c0;
  uRam0000000183174aa8 = 0x27719ee;
  uVar4 = (~uRam0000000183174a08 + 0x100000000) *
          ((uRam0000000183174a58 ^ 0xfa50dcdd) +
          (ulonglong)((uint)uRam0000000183174a58 & 0xfa50dcdd) * 2);
  uVar4 = (uVar4 | uRam0000000183174940) + (uVar4 & uRam0000000183174940);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174910 =
       func_0x000186f1caf0((uVar4 | 0x5af2322) + (ulonglong)((uint)uVar4 & 0x5af2322));
  uVar4 = ((uRam0000000183174910 << 0x11 | uRam0000000183174910 >> 0x2f) ^ 0x7e72fff8) &
          0x7ffffffffff;
  uRam0000000183174948 = (uRam0000000183174948 ^ uVar4) + 0x818d0007 ^ 0xa095e49a9795406d;
  uRam0000000183174a88 = (uRam0000000183174a88 * -0x157b0c8de829c0ff ^ uRam0000000183174948) + uVar4
  ;
  uRam0000000183174a98 = uRam0000000183174a88 ^ uRam0000000183174948;
  uRam0000000183174af0 = 0x818d0007;
  uVar4 = (~uRam0000000183174970 + 0x818d0008) *
          ((uRam0000000183174ae8 ^ 0xfa50dcdd) +
          (ulonglong)((uint)uRam0000000183174ae8 & 0xfa50dcdd) * 2);
  uVar4 = (uVar4 | uRam0000000183174980) + (uVar4 & uRam0000000183174980);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174938 =
       func_0x000186f1caf0((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda));
  uRam00000001831749f0 = uRam00000001831749f0 ^ uRam0000000183174938 ^ 0x8995e6f0609200bf;
  uRam0000000183174ae0 =
       (uRam0000000183174ae0 * -0x7f266e4983e72bc1 ^ uRam00000001831749f0) + uRam0000000183174938;
  uRam0000000183174918 = uRam0000000183174ae0 ^ uRam00000001831749f0;
  uRam0000000183174a28 = 0;
  uVar4 = ((uRam0000000183174960 ^ 0x84223f7c) +
          (ulonglong)((uint)uRam0000000183174960 & 0x84223f7c) * 2) * -uRam00000001831749a0;
  uVar4 = (uVar4 | uRam0000000183174920) + (uVar4 & uRam0000000183174920);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174a80 =
       func_0x000186f1caf0((uVar4 | 0x84223f7c) + (ulonglong)((uint)uVar4 & 0x84223f7c));
  uVar4 = uRam0000000183174a80 & 0x7fffffffffffffff;
  uRam0000000183174ae8 = uRam0000000183174a28 ^ uVar4 ^ 0x1c59;
  uRam0000000183174ab0 = (uRam0000000183174ab0 ^ uVar4) + 0x1c59 ^ 0xb9dfe414171397c;
  uRam0000000183174960 = (uRam0000000183174960 * 0x6d591c0e69938c89 ^ uRam0000000183174ab0) + uVar4;
  uRam0000000183174910 = uRam0000000183174960 ^ uRam0000000183174ab0;
  uRam0000000183174a58 = 0x1c59;
  uVar4 = (uRam0000000183174a50 ^ _UNK_180a9cf70) + uRam0000000183174a08 + 0x9250db8d;
  uVar6 = (uRam0000000183174a08 ^ _UNK_180a9cf78) + uRam0000000183174a50 + 0x1672f8a8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183174a50 ^ _UNK_180a9cf70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183174a08 ^ _UNK_180a9cf78;
  uRam0000000183174ab0 =
       func_0x000186f1caf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183174a50 + 0x1672f8a8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183174a08 + 0x9250db8d));
  uVar4 = uRam0000000183174ab0 - (uRam0000000183174ab0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183174ab0;
  uRam0000000183174ad8 = uRam0000000183174ad8 ^ uVar4 ^ 0x1547563083211e72;
  uRam0000000183174958 = (uRam0000000183174958 * -0x32362170bbfb726f ^ uRam0000000183174ad8) + uVar4
  ;
  uRam0000000183174ad8 = uRam0000000183174958 ^ uRam0000000183174ad8;
  uRam0000000183174a10 = 0;
  uVar4 = ((uRam0000000183174a38 ^ 0x84223f7c) +
          (ulonglong)((uint)uRam0000000183174a38 & 0x84223f7c) * 2) * -uRam0000000183174908;
  uVar4 = (uVar4 | uRam0000000183174ab8) + (uVar4 & uRam0000000183174ab8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183174938 =
       func_0x000186f1caf0((uVar4 | 0x84223f7c) + (ulonglong)((uint)uVar4 & 0x84223f7c));
  uVar4 = uRam0000000183174938 - (uRam0000000183174938 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183174938;
  uRam0000000183174a48 = (uRam0000000183174a48 ^ uVar4) + 0x1c59 ^ 0x96836eb4b2f68c3e;
  uRam0000000183174ac0 = (uRam0000000183174ac0 * -0x5191017d1aa4d39f ^ uRam0000000183174a48) + uVar4
  ;
  uRam00000001831749c8 = uRam0000000183174ac0 ^ uRam0000000183174a48;
  uRam0000000183174a40 = 0x1c59;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1c8db,0x477);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186f1861d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a9b548 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; dvG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 186f1cb80, runtime 6fffeeb2cb80) =====

void FUN_186f1cb80(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000186f1cbbc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a9cfc0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; dvH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 186ee6aa0, runtime 6fffeeaf6aa0) =====

void FUN_186ee6aa0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186ee6b1d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a93610 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; dvz ()Ljava/lang/String; (handler @ image 186eed750, runtime 6fffeeafd750) =====

void FUN_186eed750(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000186eed770 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a957c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 186ed5d60, runtime 6fffeeae5d60) =====

void FUN_186ed5d60(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1c8db,0x477);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186ed5e3f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a8ea10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mI$uR; toJson ()Lcom/google/gson/JsonObject; (handler @ image 186edd100, runtime 6fffeeaed100) =====

void FUN_186edd100(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1c8db,0x477);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186edd1e2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180a90a10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



