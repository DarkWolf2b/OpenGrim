// ===== Lsixtwo/dQ; _da389a0521be433c8e9e82e9b1ff29fa ()V (handler @ image 18db6d820, runtime 6ffff577d820) =====

void FUN_18db6d820(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018db6d908 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182352d38 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dQ; aoY (Lsixtwo/gI;)V (handler @ image 18db50610, runtime 6ffff5760610) =====

void FUN_18db50610(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xb040,0x1ea);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018db50712 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182349a60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dQ; aoZ ()Lsixtwo/oc; (handler @ image 18db63b10, runtime 6ffff5773b10) =====

void FUN_18db63b10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xb040,0x1ea);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018db63bda did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18234f7b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dQ; apa ()Ljava/lang/Boolean; (handler @ image 18db88360, runtime 6ffff5798360) =====

void FUN_18db88360(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018db88380 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1823558e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dQ; apb (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18db887b0, runtime 6ffff57987b0) =====

undefined8 FUN_18db887b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/dQ; apc ([B)Ljava/lang/String; (handler @ image 18db88840, runtime 6ffff5798840) =====

void FUN_18db88840(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018db888e0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182355c30 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dQ; apd (IJ)Ljava/lang/String; (handler @ image 18dbb12f0, runtime 6ffff57c12f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbb12f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = (uRam000000018337d018 ^ _UNK_18235ca30) + uRam000000018337cf80 + 0x7dbf35b6c9066fd4;
  uVar6 = (uRam000000018337cf80 ^ _UNK_18235ca38) + uRam000000018337d018 + 0x8b4ff831aced192f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337d018 ^ _UNK_18235ca30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018337cf80 ^ _UNK_18235ca38;
  uRam000000018337cee0 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018337d018 + 0x8b4ff831aced192f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018337cf80 + 0x7dbf35b6c9066fd4));
  uVar5 = uRam000000018337cee0 << 0x29 | uRam000000018337cee0 >> 0x17;
  uRam000000018337d038 = (uRam000000018337d038 ^ uVar5) - 0x2481212a201 ^ 0x7e0b4039a8ee00a4;
  uRam000000018337cdc8 = (uRam000000018337cdc8 * 0x62d3d06ab756ccaf ^ uRam000000018337d038) + uVar5;
  uRam000000018337cef8 = uRam000000018337cdc8 ^ uRam000000018337d038;
  uRam000000018337d0d0 = 0xfffffdb7eded5dff;
  uRam000000018337cd90 = func_0x00018dbb7840(uRam000000018337ce98 ^ 0x7fb22d4303989655);
  uRam000000018337d0c8 =
       (uRam000000018337d0c8 ^ uRam000000018337cd90 & 0x57f797113a9e2c1) + 0xd3356980c7887159 ^
       0x2ddcc27335c0d584;
  uRam000000018337ce98 =
       (uRam000000018337ce98 * 0x52fa234d4af4c75b ^ uRam000000018337d0c8) +
       (uRam000000018337cd90 & 0x57f797113a9e2c1) ^ uRam000000018337d0c8;
  uRam000000018337cde0 = 0xd3356980c7887159;
  uRam000000018337d0a0 = func_0x00018dbb7840(uRam000000018337ceb0 + 0xf565896bf748768 ^ 0xa3);
  uVar5 = uRam000000018337d0a0 << 0x22 | uRam000000018337d0a0 >> 0x1e;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uVar5;
  uRam000000018337cde8 = (uRam000000018337cde8 ^ uVar5) + 0x440772e8d2a5b61a ^ 0xff161f388fcc077c;
  uRam000000018337cd18 = (uRam000000018337cd18 * 0x71ea7c4528c09827 ^ uRam000000018337cde8) + uVar5;
  uRam000000018337d0e0 = uRam000000018337cd18 ^ uRam000000018337cde8;
  uRam000000018337ce58 = 0x440772e8d2a5b61a;
  uVar5 = (~uRam000000018337cf20 + 0xbbf88d172d5a49e7) *
          ((uRam000000018337cff0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018337cff0 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018337cd78) + (uVar5 & uRam000000018337cd78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337cd28 =
       func_0x00018dbb7840((uVar5 | 0xbbf88d17a978153c) + (uVar5 & 0xbbf88d17a978153c));
  uRam000000018337d020 = uRam000000018337cd18 ^ uRam000000018337cd28 ^ 0xbbf88d172d5ac9e5;
  uRam000000018337cfe8 =
       (uRam000000018337cfe8 ^ uRam000000018337cd28) + 0xbbf88d172d5ac9e5 ^ 0x3d51e6cec3969385;
  uRam000000018337ce28 =
       (uRam000000018337ce28 * 0x298e14a2af44c9f9 ^ uRam000000018337cfe8) + uRam000000018337cd28;
  uRam000000018337ce78 = uRam000000018337ce28 ^ uRam000000018337cfe8;
  uRam000000018337ce68 = 0xbbf88d172d5ac9e5;
  uRam000000018337d020 = func_0x00018dbb7840(uRam000000018337cd18 + 0x20e1bbb43af0614b ^ 0x7d);
  uRam000000018337cda0 =
       (uRam000000018337cda0 ^ uRam000000018337d020 ^ 0x4c4cf12370830560) + 0xb3b30edc8f7cfaa0 ^
       0x2ce61fa12a3d27fc;
  uRam000000018337cee8 =
       (uRam000000018337cee8 * 0x65012bbc1c335fcb ^ uRam000000018337cda0) +
       (uRam000000018337d020 ^ 0x4c4cf12370830560);
  uRam000000018337ce50 = uRam000000018337cee8 ^ uRam000000018337cda0;
  uRam000000018337cde8 = 0xb3b30edc8f7cfaa0;
  uVar5 = (uRam000000018337cef0 ^ _UNK_18235ca40) + uRam000000018337cd00 + 0x4c4cf123f4a1a67a;
  uVar6 = (uRam000000018337cd00 ^ _UNK_18235ca48) + uRam000000018337cef0 + 0xb3b30edc8f7cfaa0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337cef0 ^ _UNK_18235ca40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018337cd00 ^ _UNK_18235ca48;
  uRam000000018337cd18 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018337cef0 + 0xb3b30edc8f7cfaa0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018337cd00 + 0x4c4cf123f4a1a67a));
  uRam000000018337cd70 = uRam000000018337ce30 ^ uRam000000018337cd18 ^ 0x7fff;
  uRam000000018337ce58 = (uRam000000018337ce58 ^ uRam000000018337cd18) + 0x7fff ^ 0xc71fc959e3bb9d0;
  uRam000000018337cf40 =
       (uRam000000018337cf40 * 0x5fe11ef3788b7bcf ^ uRam000000018337ce58) + uRam000000018337cd18;
  uRam000000018337cea0 = uRam000000018337cf40 ^ uRam000000018337ce58;
  uRam000000018337ce70 = 0x7fff;
  uRam000000018337cdd8 = func_0x00018dbb7840(uRam000000018337cf20 ^ 0x2aa7b1f255c39c76);
  uVar5 = uRam000000018337cdd8 * 0x10b3af04ec3477bb;
  uRam000000018337cf80 = uRam000000018337ce58 ^ uVar5 ^ 0x28de7c3596a0747f;
  uRam000000018337cfd0 = (uRam000000018337cfd0 ^ uVar5) + 0x28de7c3596a0747f ^ 0xbc30fd444a5cf4e4;
  uRam000000018337cff0 = (uRam000000018337cff0 * -0x30d5481ed0caf227 ^ uRam000000018337cfd0) + uVar5
  ;
  uRam000000018337ce28 = uRam000000018337cff0 ^ uRam000000018337cfd0;
  uRam000000018337cd10 = 0x28de7c3596a0747f;
  uVar5 = (~uRam000000018337cd60 + 0xd3356980c788715a) *
          ((uRam000000018337d058 ^ 0xfffffdb769cf7eda) +
          (uRam000000018337d058 & 0x7ffffdb769cf7eda) * 2);
  uVar5 = (uVar5 | uRam000000018337d0d8) + (uVar5 & uRam000000018337d0d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337cfc8 =
       func_0x00018dbb7840((uVar5 | 0x2cca9437ae470f83) + (uVar5 & 0x2cca9437ae470f83));
  uRam000000018337d0b8 =
       (uRam000000018337d0b8 ^ uRam000000018337cfc8 & 0x7fffffffffffffff) + 0xd3356980c5885159 ^
       0xf8453583fded6f7f;
  uRam000000018337ce28 =
       (uRam000000018337ce28 * 0x6099c05406850749 ^ uRam000000018337d0b8) +
       (uRam000000018337cfc8 & 0x7fffffffffffffff);
  uRam000000018337cd18 = uRam000000018337ce28 ^ uRam000000018337d0b8;
  uRam000000018337cf68 = 0xd3356980c5885159;
  uRam000000018337cf50 = func_0x00018dbb7840(uRam000000018337cea0 + 0xe92601ccf3f3379 ^ 0x73);
  uRam000000018337d048 = uRam000000018337cd28 ^ uRam000000018337cf50 ^ 0xd3356738b575cf58;
  uRam000000018337d088 =
       (uRam000000018337d088 ^ uRam000000018337cf50) + 0xd3356738b575cf58 ^ 0x23251796151cbde6;
  uRam000000018337cf38 =
       (uRam000000018337cf38 * 0x6cec9ad3a738ec39 ^ uRam000000018337d088) + uRam000000018337cf50;
  uRam000000018337cd40 = uRam000000018337cf38 ^ uRam000000018337d088;
  uRam000000018337cd90 = 0xd3356738b575cf58;
  uRam000000018337cd30 = func_0x00018dbb7840(uRam000000018337cdd8 ^ 0x440084d9ffdd4a);
  uRam000000018337ced8 = uRam000000018337cfa0 ^ uRam000000018337d048 ^ 0x7fff;
  uRam000000018337d090 = (uRam000000018337d090 ^ uRam000000018337d048) + 0x7fff ^ 0xa1e3fd00dc33796b
  ;
  uRam000000018337cd10 =
       (uRam000000018337cd10 * -0x27e8d15addd68ef ^ uRam000000018337d090) + uRam000000018337d048;
  uRam000000018337d068 = uRam000000018337cd10 ^ uRam000000018337d090;
  uRam000000018337cfe0 = 0x7fff;
  uVar5 = (~uRam000000018337ce58 + 0x2481212a201) *
          ((uRam000000018337d050 ^ 0xfffffdb769cf7eda) +
          (uRam000000018337d050 & 0x7ffffdb769cf7eda) * 2);
  uVar5 = (uVar5 | uRam000000018337cef0) + (uVar5 & uRam000000018337cef0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337cea8 =
       func_0x00018dbb7840((uVar5 | 0xffffffff7bdddcda) + (uVar5 & 0xffffffff7bdddcda));
  uVar5 = uRam000000018337cea8 - (uRam000000018337cea8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam000000018337cea8;
  uRam000000018337ceb0 = uRam000000018337ceb0 ^ uVar5 ^ 0x2867a75d421c7019;
  uRam000000018337cf40 = (uRam000000018337cf40 * -0x1294619faade0a3d ^ uRam000000018337ceb0) + uVar5
  ;
  uRam000000018337ce48 = uRam000000018337cf40 ^ uRam000000018337ceb0;
  uRam000000018337cd68 = 0;
  uVar5 = (uRam000000018337cf28 ^ 0x84225cda) + uRam000000018337d070 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337cf28 ^ 0x84225cda;
  uVar6 = ((uRam000000018337d070 + uRam000000018337cf28) * 0x2000 |
          uRam000000018337d070 + uRam000000018337cf28 >> 0x33) ^ uRam000000018337d070;
  uRam000000018337ce78 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) - uRam000000018337cf28 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018337d070 + 0x84225cda));
  uRam000000018337ce18 = uRam000000018337cf70;
  uRam000000018337d040 = (uRam000000018337d040 ^ 0x7fff) + 0x7fff ^ 0x6de5fd2bfb73faba;
  uRam000000018337cfd0 = (uRam000000018337cfd0 * -0x2f634b5c0b9bebb ^ uRam000000018337d040) + 0x7fff
  ;
  uRam000000018337cfd8 = uRam000000018337cfd0 ^ uRam000000018337d040;
  uRam000000018337cd18 = 0x7fff;
  uVar5 = (~uRam000000018337d060 + 0x7dbf35b64d244cf2) *
          ((uRam000000018337ced0 ^ 0x7dbf35b6c9066fd4) +
          (uRam000000018337ced0 & 0x7dbf35b6c9066fd4) * 2);
  uVar5 = (uVar5 | uRam000000018337ce08) + (uVar5 & uRam000000018337ce08);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337ce18 =
       func_0x00018dbb7840((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018337d038 =
       uRam000000018337d038 ^ uRam000000018337ce18 & 0x7fffffffff ^ 0xde79341ac8caae7e;
  uRam000000018337cd88 =
       (uRam000000018337cd88 * -0x53bc1f47f80c2e23 ^ uRam000000018337d038) +
       (uRam000000018337ce18 & 0x7fffffffff);
  uRam000000018337ce70 = uRam000000018337cd88 ^ uRam000000018337d038;
  uRam000000018337cdf8 = 0;
  uVar5 = ((uRam000000018337d010 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018337d010 & 0x84225cda) * 2) * -lRam000000018337cd20;
  uVar5 = (uVar5 | uRam000000018337d0b0) + (uVar5 & uRam000000018337d0b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337ce58 =
       func_0x00018dbb7840((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam000000018337ce58 * 0x23ba87172ef18025;
  uRam000000018337cd80 = uRam000000018337cdd8 ^ uVar5 ^ 0x7fff;
  uRam000000018337d078 = (uRam000000018337d078 ^ uVar5) + 0x7fff ^ 0x64f0a8b24497082;
  uRam000000018337cfc8 = (uRam000000018337cfc8 * 0x1ef1acf524c000db ^ uRam000000018337d078) + uVar5;
  uRam000000018337ceb8 = uRam000000018337cfc8 ^ uRam000000018337d078;
  uRam000000018337cd70 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam000000018337cfd0;
  lVar4 = (param_4 ^ 0x84222325) + uRam000000018337ce98;
  uVar6 = uVar5 + lVar4;
  uVar7 = (uRam000000018337ce98 ^ 0x7fff) + uRam000000018337cfd0 + 0x7fff;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337ce98 ^ 0x7fff;
  uRam000000018337cf18 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018337cfd0 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar3 = (uint)param_4 & 0x7fff;
  uRam000000018337cd90 = (ulonglong)uVar3;
  uRam000000018337cd38 =
       (uRam000000018337cd38 ^ ~uRam000000018337cf18 & param_4) + uRam000000018337cd90 ^
       0x3d2acc822cc82848;
  uRam000000018337d0f8 =
       (uRam000000018337d0f8 * 0x26172366a30979f9 ^ uRam000000018337cd38) +
       (~uRam000000018337cf18 & param_4);
  uRam000000018337ce88 = uRam000000018337d0f8 ^ uRam000000018337cd38;
  uRam000000018337cfe0 = func_0x00018dbb7840(uRam000000018337cee8 + 0xff180037980063ff ^ 0x13);
  uVar6 = uRam000000018337cfe0 ^ 0x7565f5a3887bcc;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar1 + (uint)bVar1 ^ uVar6;
  uRam000000018337d0d8 = (uRam000000018337d0d8 ^ uVar6) + 0x5cc6db8d ^ 0x383c3d9503fa2dc5;
  uRam000000018337cd58 = (uRam000000018337cd58 * 0xfcf4554c01ba8e5 ^ uRam000000018337d0d8) + uVar6;
  uRam000000018337cd48 = uRam000000018337cd58 ^ uRam000000018337d0d8;
  uRam000000018337d008 = 0x5cc6db8d;
  uVar5 = (~uRam000000018337cec0 + 0x1a2f7a01) *
          ((uRam000000018337ce88 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018337ce88 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018337d048) + (uVar5 & uRam000000018337d048);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337cd40 =
       func_0x00018dbb7840((uVar5 | 0x9e0d5925) + (ulonglong)((uint)uVar5 & 0x9e0d5925));
  uRam000000018337ce30 = uRam000000018337ce30 - 0x1a2f7a00 ^ 0x76ad5953d5603368;
  uRam000000018337cd90 = uRam000000018337cf10 * -0x6d36b9d93435d2b3;
  uRam000000018337cf10 = uRam000000018337cd90 ^ uRam000000018337ce30;
  uRam000000018337d068 = 0xe5d08600;
  uRam000000018337ce70 = func_0x00018dbb7840(uRam000000018337cfb0 ^ 0xffa2ff8a2ffff204);
  uVar5 = uRam000000018337ce70 & 0xfffffffffffffffc;
  uRam000000018337ce20 = uRam000000018337ce08 ^ uVar5 ^ 0x1a2fb675;
  uRam000000018337cd30 = (uRam000000018337cd30 ^ uVar5) + 0x1a2fb675 ^ 0xa606dc0431f88f3f;
  uRam000000018337d018 = (uRam000000018337d018 * 0x403bbb8722d2781f ^ uRam000000018337cd30) + uVar5;
  uRam000000018337ce58 = uRam000000018337d018 ^ uRam000000018337cd30;
  uRam000000018337d098 = 0x1a2fb675;
  uVar5 = (~uRam000000018337cde0 + 0xe5d08601) *
          ((uRam000000018337cea0 ^ 0x9e0d9550) +
          (ulonglong)((uint)uRam000000018337cea0 & 0x9e0d9550) * 2);
  uVar5 = (uVar5 | uRam000000018337ce38) + (uVar5 & uRam000000018337ce38);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337cdf0 =
       func_0x00018dbb7840((uVar5 | 0x7bdd1350) + (ulonglong)((uint)uVar5 & 0x7bdd1350));
  uRam000000018337cd38 = uRam000000018337cdb8 ^ uRam000000018337cdf0 ^ 0x100003c75;
  uRam000000018337ce48 =
       (uRam000000018337ce48 ^ uRam000000018337cdf0) + 0x100003c75 ^ 0xe0454beb1990a3ea;
  uRam000000018337d008 =
       (uRam000000018337d008 * 0x513689fe38ba46b1 ^ uRam000000018337ce48) + uRam000000018337cdf0;
  uRam000000018337cea0 = uRam000000018337d008 ^ uRam000000018337ce48;
  uRam000000018337cdd0 = 0x3c75;
  uRam000000018337cf08 = func_0x00018dbb7840(uRam000000018337cfc8 + 0xff33ff79b7ffbdff ^ 0x4a);
  uVar5 = (uRam000000018337cf08 ^ 0xdecfffd) * 0x366f6bedb1d02421;
  uRam000000018337cf40 = uRam000000018337cec0 ^ uVar5 ^ 0xded280d;
  uRam000000018337cf88 = (uRam000000018337cf88 ^ uVar5) + 0xded280d ^ 0x7246515e093868a5;
  uRam000000018337ceb8 = (uRam000000018337ceb8 * 0x133e0402e1b2fb47 ^ uRam000000018337cf88) + uVar5;
  uRam000000018337cfb8 = uRam000000018337ceb8 ^ uRam000000018337cf88;
  uRam000000018337cf60 = 0xded280d;
  uVar5 = (uRam000000018337d058 ^ _UNK_18235ca50) + uRam000000018337d020 + 0x89cf0b28;
  uVar6 = (uRam000000018337d020 ^ _UNK_18235ca58) + uRam000000018337d058 + 0xf2131468;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337d058 ^ _UNK_18235ca50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018337d020 ^ _UNK_18235ca58;
  uRam000000018337d078 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018337d058 + 0xf2131468) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018337d020 + 0x89cf0b28));
  uVar5 = uRam000000018337d078 ^ 0xd2b399272704948;
  uRam000000018337cee8 = uRam000000018337d048 ^ uVar5 ^ 0x100003c75;
  uRam000000018337d070 = (uRam000000018337d070 ^ uVar5) + 0x100003c75 ^ 0xf6cd3b8c32a70158;
  uRam000000018337d060 = (uRam000000018337d060 * -0x2889b27b9bfc7c5f ^ uRam000000018337d070) + uVar5
  ;
  uRam000000018337cea0 = uRam000000018337d060 ^ uRam000000018337d070;
  uRam000000018337cd70 = 0x3c75;
  uRam000000018337d0d8 = func_0x00018dbb7840(uRam000000018337cfa0 ^ 0xff4f000eb5002144);
  uRam000000018337cee8 =
       (uRam000000018337cee8 ^ uRam000000018337d0d8 & 0xfffffc00000) - 0x975c9090 ^
       0x2626a02eef0d5d8c;
  uRam000000018337cd08 =
       (uRam000000018337cd08 * -0x10a64027cd601689 ^ uRam000000018337cee8) +
       (uRam000000018337d0d8 & 0xfffffc00000);
  uRam000000018337cf10 = uRam000000018337cd08 ^ uRam000000018337cee8;
  uRam000000018337cd18 = 0x68a36f70;
  uVar5 = (~uRam000000018337d0e0 + 0x975c9091) *
          ((uRam000000018337cee0 ^ 0x84221f50) +
          (ulonglong)((uint)uRam000000018337cee0 & 0x84221f50) * 2);
  uVar5 = (uVar5 | uRam000000018337cd30) + (uVar5 & uRam000000018337cd30);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337cd70 =
       func_0x00018dbb7840((uVar5 | 0x137e8fc0) + (ulonglong)((uint)uVar5 & 0x137e8fc0));
  uVar5 = uRam000000018337cd70 ^ 0x23bedf2feda5;
  uRam000000018337d0d8 = uRam000000018337ce40 ^ uVar5 ^ 0x975ccd05;
  uRam000000018337d048 = (uRam000000018337d048 ^ uVar5) + 0x975ccd05 ^ 0xa0a6df8cde17b0b8;
  uRam000000018337cd80 = (uRam000000018337cd80 * -0x4cde55916b0818eb ^ uRam000000018337d048) + uVar5
  ;
  uRam000000018337cef0 = uRam000000018337cd80 ^ uRam000000018337d048;
  uRam000000018337d028 = 0x975ccd05;
  uVar5 = (uRam000000018337d088 ^ _UNK_18235ca60) + uRam000000018337cd38 + 0x137eee20;
  uVar6 = (uRam000000018337cd38 ^ _UNK_18235ca68) + uRam000000018337d088 + 0x68a36f70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337d088 ^ _UNK_18235ca60;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018337cd38 ^ _UNK_18235ca68;
  uRam000000018337cd88 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018337d088 + 0x68a36f70) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018337cd38 + 0x137eee20));
  uVar5 = (uRam000000018337cd88 << 0x15 | uRam000000018337cd88 >> 0x2b) ^ 0x68a36f70;
  uRam000000018337cf08 = uRam000000018337d060 ^ uVar5 ^ 0x100003c75;
  uRam000000018337d068 = (uRam000000018337d068 ^ uVar5) + 0x100003c75 ^ 0x5cb67562e0c72386;
  uRam000000018337cd00 = (uRam000000018337cd00 * -0x525e7382bb7e0363 ^ uRam000000018337d068) + uVar5
  ;
  uRam000000018337d038 = uRam000000018337cd00 ^ uRam000000018337d068;
  uRam000000018337d0d0 = 0x3c75;
  uVar5 = (uRam000000018337d0e8 ^ _UNK_18235ca70) + uRam000000018337cd60 + 0x73d90cde;
  uVar6 = (uRam000000018337cd60 ^ _UNK_18235ca78) + uRam000000018337d0e8 + 0x5cc6db8d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337d0e8 ^ _UNK_18235ca70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018337cd60 ^ _UNK_18235ca78;
  uRam000000018337cea8 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018337d0e8 + 0x5cc6db8d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018337cd60 + 0x73d90cde));
  uVar5 = (ulonglong)((uint)uRam000000018337cea8 & 0xf7fb2ffb);
  uRam000000018337cf70 = uRam000000018337d038 ^ uVar5 ^ 0x154c20b88;
  uRam000000018337d0c0 = (uRam000000018337d0c0 ^ uVar5) + 0x154c20b88 ^ 0x8d7117702219fd3e;
  uRam000000018337cda0 = (uRam000000018337cda0 * -0x6ad4e6f3f0db68d3 ^ uRam000000018337d0c0) + uVar5
  ;
  uRam000000018337cd00 = uRam000000018337cda0 ^ uRam000000018337d0c0;
  uRam000000018337cdc0 = 0x54c20b88;
  uVar5 = (~uRam000000018337cea8 + 0x5cc6db8e) *
          ((uRam000000018337cd18 ^ 0x73d90cde) +
          (ulonglong)((uint)uRam000000018337cd18 & 0x73d90cde) * 2);
  uVar5 = (uVar5 | uRam000000018337cff8) + (uVar5 & uRam000000018337cff8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337cf48 =
       func_0x00018dbb7840((uVar5 | 0x2f1fd753) + (ulonglong)((uint)uVar5 & 0x2f1fd753));
  uVar5 = uRam000000018337cf48 << 0x34 | uRam000000018337cf48 >> 0xc;
  uRam000000018337cd70 = (uRam000000018337cd70 ^ uVar5) + 0xab3df476 ^ 0x8c015f7e26b244c7;
  uRam000000018337cd90 = (uRam000000018337cd90 * -0x11db53af0980a277 ^ uRam000000018337cd70) + uVar5
  ;
  uRam000000018337d098 = uRam000000018337cd90 ^ uRam000000018337cd70;
  uRam000000018337cff8 = 0xab3df476;
  uRam000000018337cde8 = func_0x00018dbb7840(uRam000000018337d058 + 0x4f0016ceffe0ff ^ 2);
  uVar6 = uRam000000018337cde8 ^ 0xffffffff;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar6;
  uRam000000018337cfa0 = (uRam000000018337cfa0 ^ uVar6) + 0x54c20b89 ^ 0x82c2de94d91d9d0c;
  uRam000000018337d0f0 =
       (uRam000000018337d0f0 * -0x59bea5bff823d503 ^ uRam000000018337cfa0) + uVar6 ^
       uRam000000018337cfa0;
  uRam000000018337cf80 = 0x54c20b89;
  uRam000000018337d0a0 = func_0x00018dbb7840(uRam000000018337ce18 ^ 0x40007a3f00865c);
  uVar5 = uRam000000018337d0a0 ^ 0xa9841712;
  uRam000000018337d0a8 = uRam000000018337cd88 ^ uVar5 ^ 0x154c20b88;
  uRam000000018337cdd8 = (uRam000000018337cdd8 ^ uVar5) + 0x154c20b88 ^ 0x5b7d54d75dce0b7;
  uRam000000018337cfb0 = (uRam000000018337cfb0 * -0x1a8835d9e2efbb23 ^ uRam000000018337cdd8) + uVar5
  ;
  uRam000000018337cd58 = uRam000000018337cfb0 ^ uRam000000018337cdd8;
  uRam000000018337ce00 = 0x54c20b88;
  uVar5 = (~uRam000000018337d098 + 0x54c20b89) *
          ((uRam000000018337cd90 ^ 0xd0e028ad) +
          (ulonglong)((uint)uRam000000018337cd90 & 0xd0e028ad) * 2);
  uVar5 = (uVar5 | uRam000000018337d0d8) + (uVar5 & uRam000000018337d0d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337cf38 =
       func_0x00018dbb7840((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018337d0a8 = uRam000000018337cf38 << 0x14 | uRam000000018337cf38 >> 0x2c;
  uRam000000018337ce20 = uRam000000018337ce20 ^ uRam000000018337d0a8 ^ 0xa84e905c0dec399e;
  uRam000000018337cf70 =
       (uRam000000018337cf70 * 0x5600eab0b83719 ^ uRam000000018337ce20) + uRam000000018337d0a8;
  uRam000000018337cfa8 = uRam000000018337cf70 ^ uRam000000018337ce20;
  uRam000000018337ce30 = 0;
  uVar5 = ((uRam000000018337cf80 ^ 0x84221f50) +
          (ulonglong)((uint)uRam000000018337cf80 & 0x84221f50) * 2) * -uRam000000018337cf48;
  uVar5 = (uVar5 | uRam000000018337ce80) + (uVar5 & uRam000000018337ce80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018337d018 =
       func_0x00018dbb7840((uVar5 | 0x84221f50) + (ulonglong)((uint)uVar5 & 0x84221f50));
  uRam000000018337cd50 = uRam000000018337d0b8 ^ uRam000000018337d018 ^ 0x3c75;
  uRam000000018337cd70 = (uRam000000018337cd70 ^ uRam000000018337d018) + 0x3c75 ^ 0x5cce6dc8a84f4659
  ;
  uRam000000018337cea8 =
       (uRam000000018337cea8 * -0x3e1e62de9c1e4d23 ^ uRam000000018337cd70) + uRam000000018337d018;
  uRam000000018337cee0 = uRam000000018337cea8 ^ uRam000000018337cd70;
  uRam000000018337cd68 = 0x3c75;
  uVar5 = (uRam000000018337cd70 ^ _UNK_18235ca80) + uRam000000018337d080 + 0x73d90cde;
  uVar6 = (uRam000000018337d080 ^ _UNK_18235ca88) + uRam000000018337cd70 + 0x804d004;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337cd70 ^ _UNK_18235ca80;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018337d080 ^ _UNK_18235ca88;
  uRam000000018337cd28 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018337cd70 + 0x804d004) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018337d080 + 0x73d90cde));
  uVar5 = (ulonglong)((uint)uRam000000018337cd28 & 0xf7fb2ffb);
  uRam000000018337d0d8 = uRam000000018337d0d8 ^ uVar5 ^ 0xd61fb4b10c167298;
  uRam000000018337ce28 = (uRam000000018337ce28 * -0x2d083f8074ec8117 ^ uRam000000018337d0d8) + uVar5
  ;
  uRam000000018337cda8 = uRam000000018337ce28 ^ uRam000000018337d0d8;
  uRam000000018337cd18 = 0;
  uVar5 = (uRam000000018337d0a0 ^ 0x84221f50) + uRam000000018337ced8 + 0x84221f50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018337d0a0 ^ 0x84221f50;
  uVar6 = ((uRam000000018337ced8 + uRam000000018337d0a0) * 0x2000 |
          uRam000000018337ced8 + uRam000000018337d0a0 >> 0x33) ^ uRam000000018337ced8;
  uRam000000018337cfd8 =
       func_0x00018dbb7840((uVar6 << 0x1d | uVar6 >> 0x23) - uRam000000018337d0a0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018337ced8 + 0x84221f50));
  uVar5 = uRam000000018337cfd8 >> 1 | uRam000000018337cfd8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018337cfd8;
  uRam000000018337ce30 = uRam000000018337cff0 ^ uVar5 ^ 0x3c75;
  uRam000000018337cee8 = (uRam000000018337cee8 ^ uVar5) + 0x3c75 ^ 0xfdc68fa035a96643;
  uRam000000018337d0b8 = (uRam000000018337d0b8 * 0x734ce39b27c9f605 ^ uRam000000018337cee8) + uVar5;
  uRam000000018337cdb0 = uRam000000018337d0b8 ^ uRam000000018337cee8;
  uRam000000018337ce98 = 0x3c75;
  uRam000000018337cd60 = func_0x00018dbb7840(uRam000000018337cfd8 + 0xffe0ff83daffe1ff ^ 0x13);
  uRam000000018337cfa8 =
       uRam000000018337cfa8 ^ uRam000000018337cd60 ^ 0xb3ad21b99be2f5a4 ^ 0x60f64ce390b27765;
  uRam000000018337d0f8 =
       (uRam000000018337d0f8 * -0x6819056a8fadd2e7 ^ uRam000000018337cfa8) +
       (uRam000000018337cd60 ^ 0xb3ad21b99be2f5a4);
  uRam000000018337cdb0 = uRam000000018337d0f8 ^ uRam000000018337cfa8;
  uRam000000018337cfd8 = 0;
  uVar6 = (ulonglong)(uVar3 ^ param_3);
  uVar5 = uVar6 ^ 0x84222325 ^ uRam000000018337cfb8;
  lVar4 = (uVar6 ^ 0x84222325) + uRam000000018337cfd0;
  uVar7 = uVar5 + lVar4;
  uVar8 = (uRam000000018337cfd0 ^ 0x3c75) + uRam000000018337cfb8 + 0x3c75;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018337cfd0 ^ 0x3c75;
  uVar5 = func_0x00018dbb7840((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337cfb8 + 0x3c75) ^
                              (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar5 = (~uVar5 & uVar6) * -0xb44462002283cef;
  uRam000000018337cee0 = uVar6 ^ 0x3c75;
  uRam000000018337cdd8 = (uRam000000018337cdd8 ^ uVar5) + uRam000000018337cee0 ^ 0xfb2ca26ce8faae2f;
  uRam000000018337d0b0 = (uRam000000018337d0b0 * -0x69049e15b4ef4f07 ^ uRam000000018337cdd8) + uVar5
  ;
  uRam000000018337ce68 = uRam000000018337d0b0 ^ uRam000000018337cdd8;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xb040,0x1ea);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dbb3377 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18235b0a8 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dQ; ape (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18dbb78d0, runtime 6ffff57c78d0) =====

void FUN_18dbb78d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018dbb790c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18235cad0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dQ; apf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18dbb87c0, runtime 6ffff57c87c0) =====

void FUN_18dbb87c0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dbb883d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18235d010 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dQ; apg (IJ)I (handler @ image 18dbbb280, runtime 6ffff57cb280) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18dbbb280(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uRam000000018337d1a8 = func_0x00018dbc6b80(uRam000000018337d158 + 0xac6cfcd79ba04d8 ^ 0x21);
  uRam000000018337d2e8 =
       (uRam000000018337d2e8 ^ uRam000000018337d1a8 ^ 0xea0469af184691fa) + 0xfb746fbf7e6fd9ff ^
       0x150e7bbdaee93d60;
  uRam000000018337d2f0 =
       (uRam000000018337d2f0 * 0x2e390e10f166d7b3 ^ uRam000000018337d2e8) +
       (uRam000000018337d1a8 ^ 0xea0469af184691fa);
  uRam000000018337d190 = uRam000000018337d2f0 ^ uRam000000018337d2e8;
  uRam000000018337d2c0 = 0xfb746fbf7e6fd9ff;
  uRam000000018337d1e0 = func_0x00018dbc6b80(uRam000000018337d278 + 0xe66bbfa20e477a15 ^ 0x7d);
  uRam000000018337d2b8 =
       (uRam000000018337d2b8 ^ uRam000000018337d1e0) + 0xeec14bee66a74f2b ^ 0x78cb3aafc22a6d6d;
  uRam000000018337d110 =
       (uRam000000018337d110 * 0x734411684543e7ed ^ uRam000000018337d2b8) + uRam000000018337d1e0;
  uRam000000018337d1b0 = uRam000000018337d110 ^ uRam000000018337d2b8;
  uRam000000018337d2d8 = 0xeec14bee66a74f2b;
  uRam000000018337d2d0 = func_0x00018dbc6b80(uRam000000018337d288 + 0xee2bef74a8a22d40 ^ 0x95);
  uVar2 = uRam000000018337d2d0 << 0x26 | uRam000000018337d2d0 >> 0x1a;
  uRam000000018337d2f0 = (uRam000000018337d2f0 ^ uVar2) + 0xb80f99ede7a8e034 ^ 0x7e41ce85e350ff73;
  uRam000000018337d1a8 = (uRam000000018337d1a8 * 0x5318ec63c7f740d3 ^ uRam000000018337d2f0) + uVar2;
  uRam000000018337d2d8 = uRam000000018337d1a8 ^ uRam000000018337d2f0;
  uRam000000018337d250 = -0x47f0661218571fcc;
  uRam000000018337d238 = func_0x00018dbc6b80(uRam000000018337d108 ^ 0xe3e8f6c15a19435);
  uVar2 = (uRam000000018337d238 ^ 0x7f0661218577fff) & 0x3fffffffffffffff ^ 0x7fff;
  uRam000000018337d2d8 = uRam000000018337d260 ^ uVar2 ^ 0x47f0661218579fcb;
  uRam000000018337d1b8 = (uRam000000018337d1b8 ^ uVar2) + 0x47f0661218579fcb ^ 0x4cd965a21bbc0a74;
  uRam000000018337d198 = (uRam000000018337d198 * -0x665abdbf89bec75b ^ uRam000000018337d1b8) + uVar2
  ;
  uRam000000018337d2e8 = uRam000000018337d198 ^ uRam000000018337d1b8;
  uRam000000018337d1a0 = 0x47f0661218579fcb;
  uVar2 = (uRam000000018337d190 ^ _UNK_18235fd70) + uRam000000018337d1e0 + 0x47f066129c75bcee;
  uVar7 = (uRam000000018337d1e0 ^ _UNK_18235fd78) + uRam000000018337d190 + 0xb80f99ede7a8e034;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d190 ^ _UNK_18235fd70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337d1e0 ^ _UNK_18235fd78;
  uRam000000018337d1b8 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018337d190 + 0xb80f99ede7a8e034) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018337d1e0 + 0x47f066129c75bcee));
  uRam000000018337d1a0 = uRam000000018337d128 ^ uRam000000018337d1b8 ^ 0x7fff;
  uRam000000018337d190 = (uRam000000018337d190 ^ uRam000000018337d1b8) + 0x7fff ^ 0xb07b665a20ba05c6
  ;
  uRam000000018337d238 =
       (uRam000000018337d238 * -0x45f2318e29c55775 ^ uRam000000018337d190) + uRam000000018337d1b8;
  uRam000000018337d200 = uRam000000018337d238 ^ uRam000000018337d190;
  uRam000000018337d270 = 0x7fff;
  uRam000000018337d280 = func_0x00018dbc6b80(uRam000000018337d1c0 ^ 0xbed8f06473cf095b);
  uRam000000018337d228 =
       (uRam000000018337d228 ^ uRam000000018337d280 & 0xfffffffffff00000) + 0x68ef30bcdccbbb58 ^
       0x6e0c60be156db299;
  uRam000000018337d188 =
       (uRam000000018337d188 * 0x56a4d2fc13978115 ^ uRam000000018337d228) +
       (uRam000000018337d280 & 0xfffffffffff00000);
  uRam000000018337d288 = uRam000000018337d188 ^ uRam000000018337d228;
  uRam000000018337d2e8 = 0x68ef30bcdccbbb58;
  uVar2 = (~uRam000000018337d120 + 0x9710cf43233444a9) *
          ((uRam000000018337d2f8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018337d2f8 & 0x84225cda) * 2);
  uVar2 = (uVar2 | uRam000000018337d1b0) + (uVar2 & uRam000000018337d1b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d188 =
       func_0x00018dbc6b80((uVar2 | 0x9710cf43a7161872) + (uVar2 & 0x9710cf43a7161872));
  uVar2 = uRam000000018337d188 ^ 0x9710cf43233444a8;
  uRam000000018337d258 = uRam000000018337d180 ^ uVar2 ^ 0x9710cf432334c4a7;
  uRam000000018337d150 = (uRam000000018337d150 ^ uVar2) + 0x9710cf432334c4a7 ^ 0x9683949033df8aee;
  uRam000000018337d288 = (uRam000000018337d288 * 0x34061ce89591244d ^ uRam000000018337d150) + uVar2;
  uRam000000018337d150 = uRam000000018337d288 ^ uRam000000018337d150;
  uRam000000018337d198 = 0x9710cf432334c4a7;
  uVar2 = (uRam000000018337d258 ^ _UNK_18235fd80) + uRam000000018337d138 + 0x1ba6b6440dcc0ce;
  uVar7 = (uRam000000018337d138 ^ _UNK_18235fd88) + uRam000000018337d258 + 0xfe45949b3b019c14;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d258 ^ _UNK_18235fd80;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337d138 ^ _UNK_18235fd88;
  uRam000000018337d128 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018337d258 + 0xfe45949b3b019c14) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018337d138 + 0x1ba6b6440dcc0ce));
  uVar7 = _UNK_18235fd98;
  uVar2 = _UNK_18235fd90;
  uVar3 = (uRam000000018337d128 & 0xfffffffffffff000) << 0x1d | uRam000000018337d128 >> 0x23;
  uRam000000018337d2a0 = uRam000000018337d268 ^ uVar3 ^ 0x7fff;
  uRam000000018337d118 = (uRam000000018337d118 ^ uVar3) + 0x7fff ^ 0x90acc4d1b4bfc38b;
  uRam000000018337d1c0 =
       (uRam000000018337d168 * 0x3c05b105615d8ddb ^ uRam000000018337d118) + uVar3 ^
       uRam000000018337d118;
  uRam000000018337d168 = 0x7fff;
  uVar3 = (uRam000000018337d1a8 ^ _UNK_18235fd90) + uRam000000018337d2e8 + 0xfb746fbffa4dfada;
  uVar8 = (uRam000000018337d2e8 ^ _UNK_18235fd98) + uRam000000018337d1a8 + 0xeec14bee66a74f2b;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018337d1a8 ^ _UNK_18235fd90;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018337d2e8 ^ _UNK_18235fd98;
  uRam000000018337d158 =
       func_0x00018dbc6b80((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018337d1a8 + 0xeec14bee66a74f2b) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018337d2e8 + 0xfb746fbffa4dfada));
  uVar3 = uRam000000018337d158 ^ 0xfff56fff7eefdfff;
  uVar8 = uVar3 >> 1 | uVar3;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar3;
  uRam000000018337d268 = uRam000000018337d120 ^ uVar3 ^ 0xea35bbade517292a;
  uRam000000018337d110 = (uRam000000018337d110 ^ uVar3) + 0xea35bbade517292a ^ 0x1d7c073bcd753711;
  uRam000000018337d2e8 = (uRam000000018337d2e8 * -0x353706ef54d81309 ^ uRam000000018337d110) + uVar3
  ;
  uRam000000018337d1a0 = uRam000000018337d2e8 ^ uRam000000018337d110;
  uRam000000018337d138 = 0xea35bbade517292a;
  uVar3 = (uRam000000018337d110 ^ uVar2) + uRam000000018337d268 + 0xfb746fbffa4dfada;
  uVar8 = (uRam000000018337d268 ^ uVar7) + uRam000000018337d110 + 0xeec14bee66a74f2b;
  uVar2 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018337d110 ^ uVar2;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018337d268 ^ uVar7;
  uRam000000018337d120 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018337d110 + 0xeec14bee66a74f2b) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018337d268 + 0xfb746fbffa4dfada));
  uVar2 = (uRam000000018337d120 ^ 0xfff56fff7eefdfff) * -0x38d445b40ba3931f;
  uRam000000018337d200 = (uRam000000018337d200 ^ uVar2) + 0x15b5245118c896d4 ^ 0x182dd825eed0d48d;
  uRam000000018337d290 = (uRam000000018337d290 * 0x48ea21aaebea321b ^ uRam000000018337d200) + uVar2;
  uRam000000018337d1e8 = uRam000000018337d290 ^ uRam000000018337d200;
  uRam000000018337d2d0 = 0x15b5245118c896d4;
  uRam000000018337d1e0 = func_0x00018dbc6b80(uRam000000018337d1d0 ^ 0x5074ad740f1b9a7b);
  uRam000000018337d228 =
       (uRam000000018337d228 ^ uRam000000018337d1e0 ^ 0xeec14bee66a74f2b) + 0xea404bae6627492b ^
       0xff4626007f2915b1;
  uRam000000018337d150 =
       (uRam000000018337d150 * 0x41a109d6cd799211 ^ uRam000000018337d228) +
       (uRam000000018337d1e0 ^ 0xeec14bee66a74f2b);
  uRam000000018337d2e8 = uRam000000018337d150 ^ uRam000000018337d228;
  uRam000000018337d100 = 0xea404bae6627492b;
  uRam000000018337d160 = func_0x00018dbc6b80(uRam000000018337d258 + 0xb192aaf63b15c3e ^ 0xf2);
  uRam000000018337d268 = uRam000000018337d158 ^ uRam000000018337d160 ^ 0xea35bbade517292a;
  uRam000000018337d200 =
       (uRam000000018337d200 ^ uRam000000018337d160) + 0xea35bbade517292a ^ 0x4717ff201e028fd3;
  uRam000000018337d188 =
       (uRam000000018337d188 * -0x2c62754bf88fea3b ^ uRam000000018337d200) + uRam000000018337d160;
  uRam000000018337d2e8 = uRam000000018337d188 ^ uRam000000018337d200;
  uRam000000018337d1a8 = 0xea35bbade517292a;
  uVar2 = (~uRam000000018337d108 + 0xea35bbade517292b) *
          ((uRam000000018337d1f0 ^ 0xea35bbad61350a0f) +
          (uRam000000018337d1f0 & 0x6a35bbad61350a0f) * 2);
  uVar2 = (uVar2 | uRam000000018337d100) + (uVar2 & uRam000000018337d100);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d1e0 =
       func_0x00018dbc6b80((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam000000018337d1e0 = uRam000000018337d1e0 ^ 0x17d77081902a7ae4;
  uVar2 = uRam000000018337d1e0 - (uRam000000018337d1e0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uRam000000018337d1e0 =
       (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
       uRam000000018337d1e0;
  uRam000000018337d170 = uRam000000018337d170 ^ uRam000000018337d1e0 ^ 0xd95f2a8b583e14a4;
  uRam000000018337d1b8 =
       (uRam000000018337d1b8 * -0x48902a1aeada1d71 ^ uRam000000018337d170) + uRam000000018337d1e0;
  uRam000000018337d1e8 = uRam000000018337d1b8 ^ uRam000000018337d170;
  uRam000000018337d2e8 = 0;
  uVar2 = (uRam000000018337d208 ^ _UNK_18235fda0) + uRam000000018337d1a8 + 0xfb746fbffa4dfada;
  uVar7 = (uRam000000018337d1a8 ^ _UNK_18235fda8) + uRam000000018337d208 + 0x48b904081902600;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d208 ^ _UNK_18235fda0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337d1a8 ^ _UNK_18235fda8;
  uRam000000018337d148 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018337d208 + 0x48b904081902600) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018337d1a8 + 0xfb746fbffa4dfada));
  uRam000000018337d1b0 =
       uRam000000018337d1b0 ^ uRam000000018337d148 & 0x1ffffffffffff ^ 0xd5543a5fcaaaea7a;
  uRam000000018337d250 =
       (uRam000000018337d250 * 0x3ab326013f1db3d ^ uRam000000018337d1b0) +
       (uRam000000018337d148 & 0x1ffffffffffff);
  uRam000000018337d230 = uRam000000018337d250 ^ uRam000000018337d1b0;
  uRam000000018337d280 = 0;
  uVar2 = (~uRam000000018337d260 + 0xea0469af184691fb) *
          ((uRam000000018337d2d0 ^ 0xea0469af9c64b2df) +
          (uRam000000018337d2d0 & 0x6a0469af9c64b2df) * 2);
  uVar2 = (uVar2 | uRam000000018337d128) + (uVar2 & uRam000000018337d128);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d180 =
       func_0x00018dbc6b80((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam000000018337d230 =
       uRam000000018337d230 ^ uRam000000018337d180 ^ 0xea0469af184691fa ^ 0x7bea457eea1a079f;
  uRam000000018337d1c8 =
       (uRam000000018337d228 * -0x26ddb602e83afc11 ^ uRam000000018337d230) +
       (uRam000000018337d180 ^ 0xea0469af184691fa) ^ uRam000000018337d230;
  uRam000000018337d228 = 0;
  uVar2 = (uRam000000018337d1e0 ^ 0x84225cda) + uRam000000018337d1a0 + 0x84225cda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d1e0 ^ 0x84225cda;
  uVar7 = ((uRam000000018337d1a0 + uRam000000018337d1e0) * 0x2000 |
          uRam000000018337d1a0 + uRam000000018337d1e0 >> 0x33) ^ uRam000000018337d1a0;
  uRam000000018337d2a8 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018337d1e0 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018337d1a0 + 0x84225cda));
  uVar2 = uRam000000018337d2a8 >> 1 | uRam000000018337d2a8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam000000018337d2a8;
  uRam000000018337d2b0 = uRam000000018337d100 ^ uVar2 ^ 0x7fff;
  uRam000000018337d108 = (uRam000000018337d108 ^ uVar2) + 0x7fff ^ 0xc12430e2437843c3;
  uRam000000018337d1a8 = (uRam000000018337d1a8 * 0x1a46026b86ad154b ^ uRam000000018337d108) + uVar2;
  uRam000000018337d290 = uRam000000018337d1a8 ^ uRam000000018337d108;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _UNK_18235fdb0,_UNK_1800170c0);
  uRam000000018337d210 = 0x7fff;
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar7 + uRam000000018337d198;
  if (auVar6._4_4_ < 0) {
    uVar2 = uRam000000018337d240 ^ uVar7;
  }
  uRam000000018337d2b8 = func_0x00018dbc6b80(SUB161(auVar5 ^ _UNK_18235fdb0,5) ^ uVar2);
  uVar4 = (uint)param_4 & 0x7fff;
  uVar3 = (ulonglong)uVar4;
  uRam000000018337d230 = (uRam000000018337d230 ^ uRam000000018337d2b8) + uVar3 ^ 0xeaa892c31e5e8b6e;
  uRam000000018337d140 =
       (uRam000000018337d140 * 0x2a6fd1683dea7c43 ^ uRam000000018337d230) + uRam000000018337d2b8;
  uRam000000018337d120 = uRam000000018337d140 ^ uRam000000018337d230;
  uVar8 = (ulonglong)param_3;
  uVar7 = uVar3 ^ 0x84222325;
  uVar2 = ((uRam000000018337d220 ^ uVar7) +
          (ulonglong)((uint)uRam000000018337d220 & (uint)uVar7) * 2) *
          (uVar8 - uRam000000018337d1a8);
  uVar2 = (uVar2 | uRam000000018337d2b0) + (uVar2 & uRam000000018337d2b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d1d0 = uVar3;
  uRam000000018337d138 =
       func_0x00018dbc6b80((uVar7 ^ uVar8 | uVar2) +
                           (ulonglong)((uint)(uVar7 ^ uVar8) & (uint)uVar2));
  uVar2 = uRam000000018337d298 << 0x16 | uRam000000018337d298 >> 0x2a;
  uVar8 = (uVar3 + uVar8) - (ulonglong)((param_3 & uVar4) * 2);
  uRam000000018337d140 = (uRam000000018337d140 ^ uVar2) + uVar8 ^ 0xeebba6e7ec37bd0;
  uRam000000018337d238 = (uRam000000018337d238 * -0x342b0429ab67cd25 ^ uRam000000018337d140) + uVar2
  ;
  uRam000000018337d1f0 = uRam000000018337d238 ^ uRam000000018337d140;
  uVar8 = uVar8 & 0xffffffff;
  uRam000000018337d110 = uVar8;
  uRam000000018337d138 = func_0x00018dbc6b80(uRam000000018337d2f0 ^ 0xe900bfadff1ab9);
  uRam000000018337d210 =
       (uRam000000018337d210 ^ uRam000000018337d138 & 0x7fffffffffc00000) + 0x7cfffe7f ^
       0x4dfeacf62a2352c6;
  uRam000000018337d280 =
       (uRam000000018337d280 * -0x37a2cd304c349f3d ^ uRam000000018337d210) +
       (uRam000000018337d138 & 0x7fffffffffc00000);
  uRam000000018337d2c8 = uRam000000018337d280 ^ uRam000000018337d210;
  uRam000000018337d2e0 = 0x7cfffe7f;
  uVar2 = (~uRam000000018337d278 + 0x8f1453d5) *
          ((uRam000000018337d120 ^ 0xe1a8eaf) +
          (ulonglong)((uint)uRam000000018337d120 & 0xe1a8eaf) * 2);
  uVar2 = (uVar2 | uRam000000018337d168) + (uVar2 & uRam000000018337d168);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d210 =
       func_0x00018dbc6b80((uVar2 | 0x810edd7b) + (ulonglong)((uint)uVar2 & 0x810edd7b));
  uVar2 = (uRam000000018337d210 >> 0x1b & 0xfffffffffffffffe) << 0x38 |
          (uRam000000018337d210 << 0x25 | uRam000000018337d210 >> 0x1b) >> 8;
  uRam000000018337d238 = (uRam000000018337d238 ^ uVar2) + 0x52cfe5e ^ 0xe91be8bdb2943b04;
  uRam000000018337d2e8 = (uRam000000018337d2e8 * -0x2c4c07053ab5ff3b ^ uRam000000018337d238) + uVar2
  ;
  uRam000000018337d2f0 = uRam000000018337d2e8 ^ uRam000000018337d238;
  uRam000000018337d288 = 0x52cfe5e;
  uRam000000018337d200 = func_0x00018dbc6b80(uRam000000018337d260 + 0x8ffaf050026ff ^ 0xcb);
  uVar2 = uRam000000018337d200 - (uRam000000018337d200 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam000000018337d200;
  uRam000000018337d250 = (uRam000000018337d250 ^ uVar2) - 0xd5191428 ^ 0xa1e5e8a10f110854;
  uRam000000018337d1c0 = (uRam000000018337d1c0 * -0x6044fbb2d4acdba3 ^ uRam000000018337d250) + uVar2
  ;
  uRam000000018337d180 = uRam000000018337d1c0 ^ uRam000000018337d250;
  uRam000000018337d160 = 0x2ae6ebd8;
  uVar2 = (~uRam000000018337d1d0 + 0xd5191429) *
          ((uRam000000018337d1e8 ^ 0x84223c82) +
          (ulonglong)((uint)uRam000000018337d1e8 & 0x84223c82) * 2);
  uVar2 = (uVar2 | uRam000000018337d270) + (uVar2 & uRam000000018337d270);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d248 =
       func_0x00018dbc6b80((uVar2 | 0x513b28aa) + (ulonglong)((uint)uVar2 & 0x513b28aa));
  uVar2 = uRam000000018337d248 & 0x7fffffffffffffff;
  uRam000000018337d288 = uRam000000018337d120 ^ uVar2 ^ 0xd51933cf;
  uRam000000018337d128 = (uRam000000018337d128 ^ uVar2) + 0xd51933cf ^ 0xbe1de57a464e5ca2;
  uRam000000018337d150 = (uRam000000018337d150 * 0x64838a5a1ad85883 ^ uRam000000018337d128) + uVar2;
  uRam000000018337d1d0 = uRam000000018337d150 ^ uRam000000018337d128;
  uRam000000018337d178 = 0xd51933cf;
  uRam000000018337d2e8 = func_0x00018dbc6b80(uRam000000018337d298 ^ 0xcb0068cdffa42a);
  uVar2 = ((uRam000000018337d2e8 ^ 0x23b65b7671ccbba8) << 0x13 |
          (uRam000000018337d2e8 ^ 0x23b65b7671ccbba8) >> 0x2d) * 0x301532d8d07fa525;
  uRam000000018337d1b8 =
       (uRam000000018337d1a0 ^ uVar2 ^ 0x100001fa7 ^ uVar2) + 0x100001fa7 ^ 0x1ae794336b7e25e8;
  uRam000000018337d270 = (uRam000000018337d270 * -0x5704853ecaf802f3 ^ uRam000000018337d1b8) + uVar2
  ;
  uRam000000018337d298 = uRam000000018337d270 ^ uRam000000018337d1b8;
  uRam000000018337d290 = 0x1fa7;
  uVar2 = (~uRam000000018337d240 + 0x186c56d9) *
          ((uRam000000018337d1c8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018337d1c8 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam000000018337d2c8) + (uVar2 & uRam000000018337d2c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d140 =
       func_0x00018dbc6b80((uVar2 | 0x9c4e75fd) + (ulonglong)((uint)uVar2 & 0x9c4e75fd));
  uVar2 = uRam000000018337d140 << 0x1d | uRam000000018337d140 >> 0x23;
  uRam000000018337d180 = (uRam000000018337d180 ^ uVar2) - 0x186c56d8 ^ 0xe88fa1bd077829c8;
  uRam000000018337d188 = (uRam000000018337d188 * 0x5d70cfb48d01f ^ uRam000000018337d180) + uVar2;
  uRam000000018337d2a0 = uRam000000018337d188 ^ uRam000000018337d180;
  uRam000000018337d2e8 = 0xe793a928;
  uVar2 = (uRam000000018337d268 ^ _UNK_18235fdc0) + uRam000000018337d120 + 0x84223c82;
  uVar7 = (uRam000000018337d120 ^ _UNK_18235fdc8) + uRam000000018337d268 + 0x186c56d8;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d268 ^ _UNK_18235fdc0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337d120 ^ _UNK_18235fdc8;
  uRam000000018337d1f0 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337d268 + 0x186c56d8) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018337d120 + 0x84223c82));
  uVar2 = uRam000000018337d1f0 << 4 | uRam000000018337d1f0 >> 0x3c;
  uRam000000018337d120 = uRam000000018337d160 ^ uVar2 ^ 0x186c767f;
  uRam000000018337d278 = (uRam000000018337d278 ^ uVar2) + 0x186c767f ^ 0x9e6fb6a2e193408c;
  uRam000000018337d118 = (uRam000000018337d118 * 0x5572c7d49c9da3ad ^ uRam000000018337d278) + uVar2;
  uRam000000018337d248 = uRam000000018337d118 ^ uRam000000018337d278;
  uRam000000018337d100 = uRam000000018337d250 ^ 0x186c767f;
  uRam000000018337d2a8 = 0x186c767f;
  uVar2 = (~uRam000000018337d158 + 0xe793a929) *
          ((uRam000000018337d118 ^ 0x9c4e555a) +
          (ulonglong)((uint)uRam000000018337d118 & 0x9c4e555a) * 2);
  uVar2 = (uVar2 | uRam000000018337d228) + (uVar2 & uRam000000018337d228);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d2d8 =
       func_0x00018dbc6b80((uVar2 | 0x7bddfc72) + (ulonglong)((uint)uVar2 & 0x7bddfc72));
  uVar2 = uRam000000018337d2d8 ^ 0x186c5657;
  uRam000000018337d2e0 = uRam000000018337d118 ^ uVar2 ^ 0x100001fa7;
  uRam000000018337d230 = (uRam000000018337d230 ^ uVar2) + 0x100001fa7 ^ 0x30c572633dd9d973;
  uRam000000018337d240 = (uRam000000018337d240 * 0x6e1d14b0b11e29af ^ uRam000000018337d230) + uVar2;
  uRam000000018337d268 = uRam000000018337d240 ^ uRam000000018337d230;
  uRam000000018337d110 = 0x1fa7;
  uVar2 = (~uRam000000018337d150 + 0xbe578181) *
          ((uRam000000018337d2d0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018337d2d0 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam000000018337d178) + (uVar2 & uRam000000018337d178);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d118 =
       func_0x00018dbc6b80((uVar2 | 0x3a75a2a5) + (ulonglong)((uint)uVar2 & 0x3a75a2a5));
  uVar2 = uRam000000018337d118 - (uRam000000018337d118 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam000000018337d118;
  uRam000000018337d290 = (uRam000000018337d290 ^ uVar2) - 0xbe578180 ^ 0x314d9a7b091e06b5;
  uRam000000018337d2a8 = (uRam000000018337d2a8 * -0x4f981641f1a3fafb ^ uRam000000018337d290) + uVar2
  ;
  uRam000000018337d1f0 = uRam000000018337d2a8 ^ uRam000000018337d290;
  uRam000000018337d2e0 = 0x41a87e80;
  uVar2 = (uRam000000018337d140 ^ _UNK_18235fdd0) + uRam000000018337d220 + 0x84223c82;
  uVar7 = (uRam000000018337d220 ^ _UNK_18235fdd8) + uRam000000018337d140 + 0xbe578180;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d140 ^ _UNK_18235fdd0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337d220 ^ _UNK_18235fdd8;
  uRam000000018337d268 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337d140 + 0xbe578180) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018337d220 + 0x84223c82));
  uVar7 = _UNK_18235fde8;
  uVar2 = _UNK_18235fde0;
  uVar3 = uRam000000018337d268 * -0x690f532543384ed7;
  uRam000000018337d2c0 = uRam000000018337d1b0 ^ uVar3 ^ 0xbe57a127;
  uRam000000018337d2c8 = (uRam000000018337d2c8 ^ uVar3) + 0xbe57a127 ^ 0x8dc5a72873a6ee5;
  uRam000000018337d2a8 = (uRam000000018337d2a8 * -0x3f441fdd5e4fa1f9 ^ uRam000000018337d2c8) + uVar3
  ;
  uRam000000018337d2e8 = uRam000000018337d2a8 ^ uRam000000018337d2c8;
  uRam000000018337d208 = 0xbe57a127;
  uVar3 = (uRam000000018337d118 ^ _UNK_18235fde0) + uRam000000018337d180 + 0xf8dddd5a;
  uVar9 = (uRam000000018337d180 ^ _UNK_18235fde8) + uRam000000018337d118 + 0x52cfe5e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018337d118 ^ _UNK_18235fde0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018337d180 ^ _UNK_18235fde8;
  uRam000000018337d2f0 =
       func_0x00018dbc6b80((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018337d118 + 0x52cfe5e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018337d180 + 0xf8dddd5a));
  uRam000000018337d120 =
       (uRam000000018337d120 ^ uRam000000018337d2f0) + 0x79d30021 ^ 0x2f6c7512ae8527f9;
  uRam000000018337d210 =
       (uRam000000018337d210 * -0x3dc9892af16760b7 ^ uRam000000018337d120) + uRam000000018337d2f0;
  uRam000000018337d1c0 = uRam000000018337d210 ^ uRam000000018337d120;
  uRam000000018337d278 = 0x79d30021;
  uVar3 = (uRam000000018337d210 ^ uVar2) + uRam000000018337d178 + 0xf8dddd5a;
  uVar9 = (uRam000000018337d178 ^ uVar7) + uRam000000018337d210 + 0x52cfe5e;
  uVar2 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018337d210 ^ uVar2;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018337d178 ^ uVar7;
  uRam000000018337d278 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337d210 + 0x52cfe5e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018337d178 + 0xf8dddd5a));
  uVar2 = uRam000000018337d278 << 2 | uRam000000018337d278 >> 0x3e;
  uRam000000018337d2c8 = (uRam000000018337d2c8 ^ uVar2) + 0x42cfe5e ^ 0x560fc3d11d1c9149;
  uRam000000018337d2d0 = (uRam000000018337d2d0 * 0x153e03e3713cc4f9 ^ uRam000000018337d2c8) + uVar2;
  uRam000000018337d2f0 = uRam000000018337d2d0 ^ uRam000000018337d2c8;
  uRam000000018337d250 = 0x42cfe5e;
  uRam000000018337d1f0 = func_0x00018dbc6b80(uRam000000018337d118 ^ 0xffa4ff2c67ffa7ac);
  uRam000000018337d230 = uRam000000018337d248 ^ uRam000000018337d278 ^ 0x822cfcdd;
  uRam000000018337d148 =
       (uRam000000018337d148 ^ uRam000000018337d278) + 0x822cfcdd ^ 0xc216407972e98d41;
  uRam000000018337d2e0 =
       (uRam000000018337d2e0 * -0x171c8c97b1771367 ^ uRam000000018337d148) + uRam000000018337d278;
  uRam000000018337d178 = uRam000000018337d2e0 ^ uRam000000018337d148;
  uRam000000018337d1d0 = 0x822cfcdd;
  uVar2 = (uRam000000018337d210 ^ _UNK_18235fdf0) + uRam000000018337d208 + 0x60edff8;
  uVar7 = (uRam000000018337d208 ^ _UNK_18235fdf8) + uRam000000018337d210 + 0x822cfcdd;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d210 ^ _UNK_18235fdf0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337d208 ^ _UNK_18235fdf8;
  uRam000000018337d1e0 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337d210 + 0x822cfcdd) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018337d208 + 0x60edff8));
  uVar2 = uRam000000018337d1e0 - (uRam000000018337d1e0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uRam000000018337d2a0 =
       uRam000000018337d1e0 ^ 0x822cfcdd ^
       (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2;
  uRam000000018337d140 = uRam000000018337d140 ^ uRam000000018337d2a0 ^ 0x152a6273b39c33cf;
  uRam000000018337d148 =
       (uRam000000018337d148 * 0x7f4b7bbe236eb7b3 ^ uRam000000018337d140) + uRam000000018337d2a0;
  uRam000000018337d2c8 = uRam000000018337d148 ^ uRam000000018337d140;
  uRam000000018337d2b8 = 0;
  uRam000000018337d168 = func_0x00018dbc6b80(uRam000000018337d1a0 ^ 0xffdc00847dffdd8f);
  uVar2 = uRam000000018337d168 & 0xfffffffffff00000;
  uVar7 = uVar2 >> 1 | uVar2;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar2;
  uRam000000018337d2e8 = uRam000000018337d2f0 ^ uVar2 ^ 0x1fa7;
  uRam000000018337d228 = (uRam000000018337d228 ^ uVar2) + 0x1fa7 ^ 0x189d3b5fd0b6a332;
  uRam000000018337d1a8 = (uRam000000018337d1a8 * -0x57923495e1439a0b ^ uRam000000018337d228) + uVar2
  ;
  uRam000000018337d108 = uRam000000018337d1a8 ^ uRam000000018337d228;
  uRam000000018337d170 = 0x1fa7;
  uVar2 = (uRam000000018337d250 ^ _UNK_18235fe00) + uRam000000018337d1e0 + 0xf8dddd5a;
  uVar7 = (uRam000000018337d1e0 ^ _UNK_18235fe08) + uRam000000018337d250 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d250 ^ _UNK_18235fe00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337d1e0 ^ _UNK_18235fe08;
  uRam000000018337d290 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337d250 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018337d1e0 + 0xf8dddd5a));
  uVar2 = uRam000000018337d290 >> 1 | uRam000000018337d290;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018337d290) & 0x7fffffffffffffff;
  uRam000000018337d2c0 = (uRam000000018337d2c0 ^ uVar2) + 0x83000180 ^ 0x4fad2415fef5a029;
  uRam000000018337d2d8 = (uRam000000018337d2d8 * -0x53e90308aab1e6e9 ^ uRam000000018337d2c0) + uVar2
  ;
  uRam000000018337d250 = uRam000000018337d2d8 ^ uRam000000018337d2c0;
  uRam000000018337d160 = 0x83000180;
  uVar2 = (uRam000000018337d2e8 ^ _UNK_18235fe10) + uRam000000018337d118 + 0xf8dddd5a;
  uVar7 = (uRam000000018337d118 ^ _UNK_18235fe18) + uRam000000018337d2e8 + 0x83000180;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d2e8 ^ _UNK_18235fe10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018337d118 ^ _UNK_18235fe18;
  uRam000000018337d170 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018337d2e8 + 0x83000180) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018337d118 + 0xf8dddd5a));
  uVar2 = (ulonglong)(~(uint)uRam000000018337d170 & 0x7cfffe7f | 0xfffe7f);
  uRam000000018337d250 = uRam000000018337d250 ^ uVar2 ^ 0xa70639e18c4ddc74;
  uRam000000018337d1b0 = (uRam000000018337d1b0 * 0x2b9e36a49f8dabd1 ^ uRam000000018337d250) + uVar2;
  uRam000000018337d2d8 = uRam000000018337d1b0 ^ uRam000000018337d250;
  uRam000000018337d160 = uRam000000018337d2e0;
  uRam000000018337d2f8 = 0;
  uVar2 = ((uRam000000018337d260 ^ 0x84223c82) +
          (ulonglong)((uint)uRam000000018337d260 & 0x84223c82) * 2) * -uRam000000018337d288;
  uVar2 = (uVar2 | uRam000000018337d278) + (uVar2 & uRam000000018337d278);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d208 =
       func_0x00018dbc6b80((uVar2 | 0x84223c82) + (ulonglong)((uint)uVar2 & 0x84223c82));
  uVar2 = ((uRam000000018337d208 & 0x3fff) << 0x31 | uRam000000018337d208 >> 0xf) *
          0x5721bdd98ef344c5;
  uRam000000018337d288 = uRam000000018337d1a0 ^ uVar2 ^ 0x1fa7;
  uRam000000018337d170 = (uRam000000018337d170 ^ uVar2) + 0x1fa7 ^ 0x3f3009c1b26a78b1;
  uRam000000018337d2b8 = (uRam000000018337d2b8 * -0x57f08507d9e2e349 ^ uRam000000018337d170) + uVar2
  ;
  uRam000000018337d1f0 = uRam000000018337d2b8 ^ uRam000000018337d170;
  uRam000000018337d260 = 0x1fa7;
  uRam000000018337d2a0 = func_0x00018dbc6b80(uRam000000018337d208 ^ 0x1f0083dd001d13);
  uRam000000018337d200 =
       uRam000000018337d200 ^ uRam000000018337d218 & 0xfffffffffffff000 ^ 0x8a36c18c345a966e;
  uRam000000018337d280 =
       (uRam000000018337d280 * -0x72dfe2f020d35c3f ^ uRam000000018337d200) +
       (uRam000000018337d218 & 0xfffffffffffff000);
  uRam000000018337d170 = uRam000000018337d280 ^ uRam000000018337d200;
  uRam000000018337d220 = 0;
  uVar2 = (uRam000000018337d100 ^ 0x84223c82) + uRam000000018337d2b0 + 0x84223c82;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018337d100 ^ 0x84223c82;
  uVar7 = ((uRam000000018337d2b0 + uRam000000018337d100) * 0x2000 |
          uRam000000018337d2b0 + uRam000000018337d100 >> 0x33) ^ uRam000000018337d2b0;
  uRam000000018337d280 =
       func_0x00018dbc6b80((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018337d100 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018337d2b0 + 0x84223c82));
  uVar2 = uRam000000018337d280 << 0x32 | (uRam000000018337d280 & 0x1fffffffff) >> 0xe;
  uRam000000018337d168 = uRam000000018337d198 ^ uVar2 ^ 0x1fa7;
  uRam000000018337d160 = (uRam000000018337d160 ^ uVar2) + 0x1fa7 ^ 0xc4186edc52697b1d;
  uRam000000018337d180 = (uRam000000018337d180 * 0x1670fbbb7be67edd ^ uRam000000018337d160) + uVar2;
  uRam000000018337d100 = uRam000000018337d180 ^ uRam000000018337d160;
  uRam000000018337d1c0 = 0x1fa7;
  uVar2 = (~uRam000000018337d200 + 0x1fa8) *
          ((uVar8 ^ 0x84222325 ^ uRam000000018337d190) +
          (ulonglong)((uint)uRam000000018337d190 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | uRam000000018337d270) + (uVar2 & uRam000000018337d270);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018337d1b0 =
       func_0x00018dbc6b80((uVar8 ^ 0x84223c82 | uVar2) +
                           (ulonglong)((uint)(uVar8 ^ 0x84223c82) & (uint)uVar2));
  uVar2 = ((uVar8 | 0x1fa7) ^ uRam000000018337d1b0) << 0x17 | uRam000000018337d1b0 >> 0x29;
  uRam000000018337d180 = uVar8 ^ 0x1fa7;
  uRam000000018337d1e0 = (uRam000000018337d1e0 ^ uVar2) + uRam000000018337d180 ^ 0x4cca61cfa6e0044c;
  uRam000000018337d170 = (uRam000000018337d170 * 0x557097983ce127f7 ^ uRam000000018337d1e0) + uVar2;
  uRam000000018337d140 = uRam000000018337d170 ^ uRam000000018337d1e0;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xb040,0x1ea);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018dbbd9f2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18235df10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/dQ; aph (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18dbc6c10, runtime 6ffff57d6c10) =====

void FUN_18dbc6c10(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018dbc6c5b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18235ff80 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/dQ; api (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18db6ab10, runtime 6ffff577ab10) =====

void FUN_18db6ab10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018db6ab99 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182351d20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



