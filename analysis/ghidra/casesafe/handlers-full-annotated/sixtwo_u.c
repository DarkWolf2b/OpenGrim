// ===== Lsixtwo/u; _d36965ea9a8c2162459a6f556658d0f0 ()V (handler @ image 190827870, runtime 6ffff8437870) =====

void FUN_190827870(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190827958 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d73510 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; bV (Lsixtwo/lC;)V (handler @ image 190813f70, runtime 6ffff8423f70) =====

void FUN_190813f70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190813fe6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d6e8a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; dY ()V (handler @ image 190813ae0, runtime 6ffff8423ae0) =====

void FUN_190813ae0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000190813b00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d6e6b0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/u; dk (DDLsixtwo/mA;)Z (handler @ image 1908505f0, runtime 6ffff84605f0) =====

void FUN_1908505f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001908506b7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d7c000 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; dn ()F (handler @ image 19085c750, runtime 6ffff846c750) =====

void FUN_19085c750(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00019085c775 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d7fe10 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/u; eA ([Ljava/lang/String;)V (handler @ image 1908173f0, runtime 6ffff84273f0) =====

void FUN_1908173f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019081743a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d6fcf8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; eB ()[Ljava/lang/String; (handler @ image 190817570, runtime 6ffff8427570) =====

void FUN_190817570(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001908175b6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d6fd98 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; eC (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 190817700, runtime 6ffff8427700) =====

undefined8 FUN_190817700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/u; eD (IJ)I (handler @ image 190817790, runtime 6ffff8427790) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190817790(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uRam000000018347d4a0 = func_0x000190823ad0(uRam000000018347d518 ^ 0x492b50b804b0d671);
  uVar3 = uRam000000018347d4a0 << 0x12 | uRam000000018347d4a0 >> 0x2e;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar3;
  uRam000000018347d1f0 = (uRam000000018347d110 ^ uVar3) + 0xe755f7f6ddfcfe7a ^ 0xcd1c32bdc823716c;
  uRam000000018347d3f0 = (uRam000000018347d3f0 * 0x70e2bd54cb3f9bc1 ^ uRam000000018347d1f0) + uVar3;
  uRam000000018347d1f0 = uRam000000018347d3f0 ^ uRam000000018347d1f0;
  uRam000000018347d110 = uRam000000018347d560 ^ 0xe755f7f6ddfcfe7a;
  uRam000000018347d5d0 = 0xe755f7f6ddfcfe7a;
  uRam000000018347d140 = func_0x000190823ad0(uRam000000018347d3f0 + 0x709e8c9bdd8225d6 ^ 0xa6);
  uVar3 = uRam000000018347d140 >> 1 | uRam000000018347d140;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam000000018347d140;
  uRam000000018347d670 = (uRam000000018347d670 ^ uVar3) + 0x16487d0fdff87c00 ^ 0x78d4a29cf3b24ef0;
  uRam000000018347d320 = (uRam000000018347d320 * 0x48b96ef8166555c1 ^ uRam000000018347d670) + uVar3;
  uRam000000018347d1d8 = uRam000000018347d320 ^ uRam000000018347d670;
  uRam000000018347d350 = uRam000000018347d530 ^ 0x16487d0fdff87c00;
  uRam000000018347d180 = 0x16487d0fdff87c00;
  uVar3 = (uRam000000018347d438 ^ _UNK_182d71d10) + uRam000000018347d488 + 0x84225cda;
  uVar4 = (uRam000000018347d488 ^ _UNK_182d71d18) + uRam000000018347d438 + 0xe9b782f020078400;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d438 ^ _UNK_182d71d10;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018347d488 ^ _UNK_182d71d18;
  uRam000000018347d550 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018347d438 + 0xe9b782f020078400) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347d488 + 0x84225cda));
  uVar3 = uRam000000018347d550 ^ 0xe9b782f020078000;
  uRam000000018347d148 = uRam000000018347d388 ^ uVar3 ^ 0xe9b782f0200803ff;
  uRam000000018347d6a0 = (uRam000000018347d4f8 ^ uVar3) + 0xe9b782f0200803ff ^ 0xde58771703ba95e6;
  uRam000000018347d4f8 = (uRam000000018347d4f8 * -0x2a1b9bf61ffd3c05 ^ uRam000000018347d6a0) + uVar3
  ;
  uRam000000018347d6a0 = uRam000000018347d4f8 ^ uRam000000018347d6a0;
  uRam000000018347d6d8 = 0xe9b782f0200803ff;
  uVar3 = func_0x000190823ad0(uRam000000018347d650 + 0x8ed450fbd55e3222 ^ 0x2f);
  uVar3 = uVar3 ^ 0x16487d0fdff07c00;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  uRam000000018347d1a8 = uRam000000018347d458 ^ uVar3 ^ 0x7fff;
  uRam000000018347d410 = (uRam000000018347d410 ^ uVar3) + 0x7fff ^ 0x2c1383db0008821d;
  uRam000000018347d120 = (uRam000000018347d120 * -0x1706cb60c4201eff ^ uRam000000018347d410) + uVar3
  ;
  uRam000000018347d450 = uRam000000018347d120 ^ uRam000000018347d410;
  uRam000000018347d310 = 0x7fff;
  uVar3 = (uRam000000018347d1e8 ^ _UNK_182d71d20) + uRam000000018347d540 + 0x84222325;
  uVar4 = (uRam000000018347d540 ^ _UNK_182d71d28) + uRam000000018347d1e8 + 0x8ca3cb40307bf3c3;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d1e8 ^ _UNK_182d71d20;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018347d540 ^ _UNK_182d71d28;
  uRam000000018347d5e8 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018347d1e8 + 0x8ca3cb40307bf3c3) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347d540 + 0x84222325));
  uRam000000018347d6a8 =
       (uRam000000018347d6a8 ^ uRam000000018347d5e8 ^ 0x8ca3cb40307bf3c3) + 0x735c34bfcf840c3d ^
       0xcd597f0561d887ea;
  uRam000000018347d648 =
       (uRam000000018347d648 * 0x4dd1af2f17fdb7a9 ^ uRam000000018347d6a8) +
       (uRam000000018347d5e8 ^ 0x8ca3cb40307bf3c3);
  uRam000000018347d4b0 = uRam000000018347d648 ^ uRam000000018347d6a8;
  uRam000000018347d548 = 0x735c34bfcf840c3d;
  uVar3 = (uRam000000018347d448 ^ _UNK_182d71d30) + uRam000000018347d250 + 0x8ca3cb40b45e50e7;
  uVar4 = (uRam000000018347d250 ^ _UNK_182d71d38) + uRam000000018347d448 + 0x735c34bfcf840c3d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d448 ^ _UNK_182d71d30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018347d250 ^ _UNK_182d71d38;
  uRam000000018347d280 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018347d448 + 0x735c34bfcf840c3d) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018347d250 + 0x8ca3cb40b45e50e7));
  uRam000000018347d150 = uRam000000018347d2c8 ^ uRam000000018347d280 ^ 0x7fff;
  uRam000000018347d170 = (uRam000000018347d170 ^ uRam000000018347d280) + 0x7fff ^ 0xe2de419b40d8c6f0
  ;
  uRam000000018347d4e8 =
       (uRam000000018347d4e8 * -0x7217cddc58708767 ^ uRam000000018347d170) + uRam000000018347d280;
  uRam000000018347d470 = uRam000000018347d4e8 ^ uRam000000018347d170;
  uRam000000018347d258 = 0x7fff;
  uVar3 = (~uRam000000018347d5d0 + 0xe95afc372d32b2b1) *
          ((uRam000000018347d218 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018347d218 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018347d420) + (uVar3 & uRam000000018347d420);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d630 =
       func_0x000190823ad0((uVar3 | 0xe95afc37a9109195) + (uVar3 & 0xe95afc37a9109195));
  uVar3 = uRam000000018347d630 << 0x1b | uRam000000018347d630 >> 0x25;
  uRam000000018347d318 = (uRam000000018347d318 ^ uVar3) + 0x16a503c8d2cd4d50 ^ 0xdd33433fadf1eb32;
  uRam000000018347d4d0 = (uRam000000018347d4d0 * -0x72906b4e41a03731 ^ uRam000000018347d318) + uVar3
  ;
  uRam000000018347d620 = uRam000000018347d4d0 ^ uRam000000018347d318;
  uRam000000018347d568 = 0x16a503c8d2cd4d50;
  uRam000000018347d490 = func_0x000190823ad0(uRam000000018347d618 ^ 0xd325a568e9ebef6c);
  uVar3 = (ulonglong)(((uint)uRam000000018347d490 ^ 0x4d50) & 0x7fff);
  uRam000000018347d618 = uRam000000018347d4f8 ^ uVar3 ^ 0xe95afc372d3332af;
  uRam000000018347d3b0 = (uRam000000018347d3b0 ^ uVar3) + 0xe95afc372d3332af ^ 0x56e9985ea4ff8a55;
  uRam000000018347d238 = (uRam000000018347d238 * 0x4a53d55bdc3dbc21 ^ uRam000000018347d3b0) + uVar3;
  uRam000000018347d6a8 = uRam000000018347d238 ^ uRam000000018347d3b0;
  uRam000000018347d2c0 = 0xe95afc372d3332af;
  uRam000000018347d550 = func_0x000190823ad0(uRam000000018347d4f0 ^ 0xc4cb4cc92667b4af);
  uVar3 = uRam000000018347d550 & 0x7fffffffff;
  uRam000000018347d448 = uRam000000018347d200 ^ uVar3 ^ 0x7fff;
  uRam000000018347d618 = (uRam000000018347d618 ^ uVar3) + 0x7fff ^ 0x34325f3dbfb6d53b;
  uRam000000018347d638 = (uRam000000018347d638 * -0x7943162d0ef2c10d ^ uRam000000018347d618) + uVar3
  ;
  uRam000000018347d358 = uRam000000018347d638 ^ uRam000000018347d618;
  uRam000000018347d1b0 = 0x7fff;
  uVar3 = (~uRam000000018347d6b0 + 0x7bc7385aa1108f8b) *
          ((uRam000000018347d128 ^ 0xe755f7f659dedd5f) +
          (uRam000000018347d128 & 0x6755f7f659dedd5f) * 2);
  uVar3 = (uVar3 | uRam000000018347d388) + (uVar3 & uRam000000018347d388);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d420 =
       func_0x000190823ad0((uVar3 | 0x9c92cfacf8ce52d5) + (uVar3 & 0x9c92cfacf8ce52d5));
  uVar3 = uRam000000018347d420 ^ 0x4c56b3d29e2753c4;
  uRam000000018347d270 = uRam000000018347d460 ^ uVar3 ^ 0x631d30517f0d8e04;
  uRam000000018347d260 = (uRam000000018347d260 ^ uVar3) + 0x631d30517f0d8e04 ^ 0x5075bef31c3cb42e;
  uRam000000018347d408 = (uRam000000018347d408 * 0x28ef8fa8c2e1a48b ^ uRam000000018347d260) + uVar3;
  uRam000000018347d388 = uRam000000018347d408 ^ uRam000000018347d260;
  uRam000000018347d398 = 0x631d30517f0d8e04;
  uVar3 = (~uRam000000018347d2a0 + 0x7bc7385aa1108f8b) *
          ((uRam000000018347d490 ^ 0xe755f7f659dedd5f) +
          (uRam000000018347d490 & 0x6755f7f659dedd5f) * 2);
  uVar3 = (uVar3 | uRam000000018347d300) + (uVar3 & uRam000000018347d300);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d258 =
       func_0x000190823ad0((uVar3 | 0x9c92cfacf8ce52d5) + (uVar3 & 0x9c92cfacf8ce52d5));
  uRam000000018347d508 =
       (uRam000000018347d508 ^ uRam000000018347d258 ^ 0xe755f7f6ddfcfe7a) + 0x6345305281108e0a ^
       0x289e1e56f766ed01;
  uRam000000018347d240 =
       (uRam000000018347d240 * 0x60177dd7de1f8335 ^ uRam000000018347d508) +
       (uRam000000018347d258 ^ 0xe755f7f6ddfcfe7a);
  uRam000000018347d328 = uRam000000018347d240 ^ uRam000000018347d508;
  uRam000000018347d598 = 0x6345305281108e0a;
  uRam000000018347d640 = func_0x000190823ad0(lRam000000018347d5b0 + 0xf73a0849bf93eeb9U ^ 0xe1);
  uVar3 = uRam000000018347d640 ^ 0x5a18af097ecd6de4;
  uRam000000018347d598 = uRam000000018347d6f8 ^ uVar3 ^ 0x631d30517f0d8e04;
  uRam000000018347d648 = (uRam000000018347d648 ^ uVar3) + 0x631d30517f0d8e04 ^ 0xbe87568536116070;
  uRam000000018347d350 = (uRam000000018347d350 * -0x798491f09e4108df ^ uRam000000018347d648) + uVar3
  ;
  uRam000000018347d258 = uRam000000018347d350 ^ uRam000000018347d648;
  uRam000000018347d458 = 0x631d30517f0d8e04;
  uVar3 = (~uRam000000018347d3f8 + 0x631d30517f0d8e05) *
          ((uRam000000018347d310 ^ 0x631d3051fb2fad21) +
          (uRam000000018347d310 & 0x631d3051fb2fad21) * 2);
  uVar3 = (uVar3 | uRam000000018347d3b8) + (uVar3 & uRam000000018347d3b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d250 =
       func_0x000190823ad0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam000000018347d230 = (uRam000000018347d250 ^ 0x631d30517f0d8e04) * 0x3dddc5348e98745;
  uRam000000018347d3a8 = uRam000000018347d3a8 ^ uRam000000018347d230 ^ 0x455f38dde07ceaeb;
  uRam000000018347d498 =
       (uRam000000018347d498 * 0x65cef67b97017fd ^ uRam000000018347d3a8) + uRam000000018347d230;
  uRam000000018347d698 = uRam000000018347d498 ^ uRam000000018347d3a8;
  uRam000000018347d6f0 = 0;
  uVar3 = (uRam000000018347d358 ^ _UNK_182d71d40) + uRam000000018347d590 + 0xe755f7f659dedd5f;
  uVar4 = (uRam000000018347d590 ^ _UNK_182d71d48) + (uRam000000018347d358 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d358 ^ _UNK_182d71d40;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018347d590 ^ _UNK_182d71d48;
  uRam000000018347d6b0 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018347d358 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018347d590 + 0xe755f7f659dedd5f));
  uRam000000018347d590 =
       (uRam000000018347d590 ^ uRam000000018347d418) + 0x18aa080922030185 ^ 0xe8ae1e66eebd919b;
  uRam000000018347d2a8 =
       (uRam000000018347d2a8 * 0x236cc582d680f333 ^ uRam000000018347d590) + uRam000000018347d418;
  uRam000000018347d148 = uRam000000018347d2a8 ^ uRam000000018347d590;
  uRam000000018347d3e0 = 0x18aa080922030185;
  uRam000000018347d208 = func_0x000190823ad0(uRam000000018347d498 + 0x835430ebb60ccc84 ^ 0x86);
  uVar3 = ~uRam000000018347d208;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  uRam000000018347d210 = uRam000000018347d210 ^ uVar3 ^ 0xce4247eed5691a85;
  uRam000000018347d120 = (uRam000000018347d120 * -0x4c80926416c97e81 ^ uRam000000018347d210) + uVar3
  ;
  uRam000000018347d540 = uRam000000018347d120 ^ uRam000000018347d210;
  uRam000000018347d4c0 = 0;
  uVar3 = (uRam000000018347d3f8 ^ 0x84225cda) + uRam000000018347d290 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d3f8 ^ 0x84225cda;
  uVar4 = ((uRam000000018347d290 + uRam000000018347d3f8) * 0x2000 |
          uRam000000018347d290 + uRam000000018347d3f8 >> 0x33) ^ uRam000000018347d290;
  uRam000000018347d328 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam000000018347d3f8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347d290 + 0x84225cda));
  uRam000000018347d458 = uRam000000018347d6c0 ^ uRam000000018347d328 ^ 0x7fff;
  uRam000000018347d6c0 = (uRam000000018347d6c0 ^ uRam000000018347d328) + 0x7fff ^ 0xf4b4608edf05d692
  ;
  uRam000000018347d448 =
       (uRam000000018347d448 * 0x36ea317897c9f6c3 ^ uRam000000018347d6c0) + uRam000000018347d328;
  uRam000000018347d2a8 = uRam000000018347d448 ^ uRam000000018347d6c0;
  uRam000000018347d6e0 = 0x7fff;
  uVar3 = (uRam000000018347d5a0 ^ 0x84225cda) + uRam000000018347d408 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d5a0 ^ 0x84225cda;
  uVar4 = ((uRam000000018347d408 + uRam000000018347d5a0) * 0x2000 |
          uRam000000018347d408 + uRam000000018347d5a0 >> 0x33) ^ uRam000000018347d408;
  lRam000000018347d6d0 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam000000018347d5a0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347d408 + 0x84225cda));
  auVar8 = _UNK_1800170c0;
  uVar3 = lRam000000018347d6d0 * -0x579f0c0198787829 << 0x25 |
          (ulonglong)(lRam000000018347d6d0 * -0x579f0c0198787829) >> 0x1b;
  uRam000000018347d568 = uRam000000018347d630 ^ uVar3 ^ 0x7fff;
  uRam000000018347d5d8 = (uRam000000018347d5d8 ^ uVar3) + 0x7fff ^ 0x47effbf28785afd;
  uRam000000018347d1d0 = (uRam000000018347d1d0 * 0x2c9f43035d6003e7 ^ uRam000000018347d5d8) + uVar3;
  uRam000000018347d270 = uRam000000018347d1d0 ^ uRam000000018347d5d8;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  uRam000000018347d3b0 = 0x7fff;
  auVar7 = pshufb(auVar6 ^ _UNK_182d71d50,_UNK_1800170c0);
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar4 + lRam000000018347d2f8;
  if (auVar7._4_4_ < 0) {
    uVar3 = uRam000000018347d150 ^ uVar4;
  }
  uRam000000018347d418 = func_0x000190823ad0(SUB161(auVar6 ^ _UNK_182d71d50,5) ^ uVar3);
  uVar3 = (param_4 | 0x7fff) ^ uRam000000018347d418;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018347d548 = (ulonglong)uVar2;
  uRam000000018347d2d0 = (uRam000000018347d2d0 ^ uVar3) + uRam000000018347d548 ^ 0x641c7a7ee0f6784e;
  uRam000000018347d678 = (uRam000000018347d678 * -0x7703b6be1c80f0c9 ^ uRam000000018347d2d0) + uVar3
  ;
  uRam000000018347d520 = uRam000000018347d678 ^ uRam000000018347d2d0;
  uVar4 = uRam000000018347d548 ^ 0x84222325;
  uVar3 = ((uRam000000018347d158 ^ uVar4) +
          (ulonglong)((uint)uRam000000018347d158 & (uint)uVar4) * 2) *
          (param_3 - uRam000000018347d6c8);
  uVar3 = (uVar3 | uRam000000018347d228) + (uVar3 & uRam000000018347d228);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar4 = uVar4 ^ param_3;
  uRam000000018347d178 =
       func_0x000190823ad0((uVar4 | uVar3) + (ulonglong)((uint)uVar4 & (uint)uVar3));
  uVar5 = (ulonglong)(uVar2 ^ param_3);
  uRam000000018347d490 = (uRam000000018347d490 ^ uRam000000018347d178) + uVar5 ^ 0xbb4a769671468f52;
  uRam000000018347d4d0 =
       (uRam000000018347d4d0 * -0x25f8e9a356a759f5 ^ uRam000000018347d490) + uRam000000018347d178;
  uRam000000018347d408 = uRam000000018347d4d0 ^ uRam000000018347d490;
  uVar3 = (uRam000000018347d6c8 ^ _UNK_182d71d60) + uRam000000018347d1d8 + 0xd764454f;
  uVar4 = (uRam000000018347d1d8 ^ _UNK_182d71d68) + uRam000000018347d6c8 + 0xad3bb635;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d6c8 ^ _UNK_182d71d60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018347d1d8 ^ _UNK_182d71d68;
  uRam000000018347d130 = uVar5;
  uRam000000018347d2c0 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018347d6c8 + 0xad3bb635) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347d1d8 + 0xd764454f));
  uVar3 = (uRam000000018347d2c0 ^ 0xff7ff660) >> 5 & 0x1fffffffff;
  uRam000000018347d6a8 = (uRam000000018347d6a8 ^ uVar3) + 0xff7ff67f ^ 0xb3009a33cce17862;
  uRam000000018347d6e0 = (uRam000000018347d6e0 * 0x3e681b3b7995890b ^ uRam000000018347d6a8) + uVar3;
  uRam000000018347d6c8 = uRam000000018347d6e0 ^ uRam000000018347d6a8;
  uRam000000018347d580 = 0xff7ff67f;
  uRam000000018347d350 = func_0x000190823ad0(uRam000000018347d450 ^ 0x690072eb0009da);
  uVar3 = uRam000000018347d350 >> 1 | uRam000000018347d350;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((ulonglong)
           (0x40 - (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
           << 4 ^ uRam000000018347d350) & 0x7ffffffff;
  uRam000000018347d670 = (uRam000000018347d670 ^ uVar3) + 0x13d88838 ^ 0x72431d40ecfad573;
  uRam000000018347d650 = (uRam000000018347d650 * 0x40211e3f1ff69741 ^ uRam000000018347d670) + uVar3;
  uRam000000018347d160 = uRam000000018347d650 ^ uRam000000018347d670;
  uRam000000018347d518 = 0x13d88838;
  uRam000000018347d1d0 = func_0x000190823ad0(uRam000000018347d1b8 ^ 0xff6c0054b8ffd08a);
  uVar3 = uRam000000018347d1d0 ^ 0x4f32c86d5d3c;
  uRam000000018347d6f0 = uRam000000018347d4d0 ^ uVar3 ^ 0xe916300c;
  uRam000000018347d3c0 = (uRam000000018347d3c0 ^ uVar3) + 0xe916300c ^ 0xb37cbb34a13c9d4;
  uRam000000018347d528 = (uRam000000018347d528 * 0x4ebede6c3a89af99 ^ uRam000000018347d3c0) + uVar3;
  uRam000000018347d6f8 = uRam000000018347d528 ^ uRam000000018347d3c0;
  uRam000000018347d4b8 = 0xe916300c;
  uVar3 = (uRam000000018347d650 ^ _UNK_182d71d70) + uRam000000018347d538 + 0x6d341329;
  uVar4 = (uRam000000018347d538 ^ _UNK_182d71d78) + uRam000000018347d650 + 0x16ea26f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d650 ^ _UNK_182d71d70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018347d538 ^ _UNK_182d71d78;
  uRam000000018347d218 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018347d650 + 0x16ea26f0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347d538 + 0x6d341329));
  uVar3 = (uRam000000018347d218 ^ 0xfffe36fc) << 0x29 | (uRam000000018347d218 ^ 0xfffe36fc) >> 0x17;
  uRam000000018347d310 = uRam000000018347d1f0 ^ uVar3 ^ 0x1000056fc;
  uRam000000018347d400 = (uRam000000018347d400 ^ uVar3) + 0x1000056fc ^ 0x96a0a0c3e9306c3f;
  uRam000000018347d6b8 = (uRam000000018347d6b8 * 0x413cb424c7dc8d8f ^ uRam000000018347d400) + uVar3;
  uRam000000018347d608 = uRam000000018347d6b8 ^ uRam000000018347d400;
  uRam000000018347d5c8 = 0x56fc;
  uVar3 = (~uRam000000018347d280 + 0xbdd87001) *
          ((uRam000000018347d6f0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018347d6f0 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018347d1f8) + (uVar3 & uRam000000018347d1f8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d438 =
       func_0x000190823ad0((uVar3 | 0x39fa5325) + (ulonglong)((uint)uVar3 & 0x39fa5325));
  uRam000000018347d288 =
       (uRam000000018347d288 ^ uRam000000018347d438 * -0x20ed3e860275fde7) - 0xbdd87000 ^
       0xe6d4eeb5acfac9f8;
  uRam000000018347d1d8 =
       (uRam000000018347d1d8 * 0x5969f513edb64a9f ^ uRam000000018347d288) +
       uRam000000018347d438 * -0x20ed3e860275fde7;
  uRam000000018347d4a0 = uRam000000018347d1d8 ^ uRam000000018347d288;
  uRam000000018347d2f0 = uRam000000018347d228 ^ 0xffffffff42279000;
  uRam000000018347d558 = 0x42279000;
  uRam000000018347d170 = func_0x000190823ad0(uRam000000018347d4a8 + 0xfffb001936ff09ff ^ 0x35);
  uVar3 = (uRam000000018347d170 ^ 0xb8000000) & 0xfffffffff8000000;
  uRam000000018347d138 = uRam000000018347d590 ^ uVar3 ^ 0xbdd8c6fc;
  uRam000000018347d310 = (uRam000000018347d310 ^ uVar3) + 0xbdd8c6fc ^ 0xca27ede98d39fe3f;
  uRam000000018347d470 = (uRam000000018347d470 * 0x54e839fef9b0287d ^ uRam000000018347d310) + uVar3;
  uRam000000018347d318 = uRam000000018347d470 ^ uRam000000018347d310;
  uRam000000018347d4e0 = 0xbdd8c6fc;
  uVar3 = (~uRam000000018347d518 + 0x42279001) *
          ((uRam000000018347d660 ^ 0x39fae5d9) +
          (ulonglong)((uint)uRam000000018347d660 & 0x39fae5d9) * 2);
  uVar3 = (uVar3 | uRam000000018347d3c8) + (uVar3 & uRam000000018347d3c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d4c8 =
       func_0x000190823ad0((uVar3 | 0x7bdd75d9) + (ulonglong)((uint)uVar3 & 0x7bdd75d9));
  uVar4 = uRam000000018347d4c8 ^ 0xffffd6fc;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar4;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4;
  uRam000000018347d610 = uRam000000018347d538 ^ uVar4 ^ 0x1000056fc;
  uRam000000018347d348 = (uRam000000018347d348 ^ uVar4) + 0x1000056fc ^ 0x9c065877c527818e;
  uRam000000018347d4f0 = (uRam000000018347d4f0 * -0xd855b51eb8cc1d1 ^ uRam000000018347d348) + uVar4;
  uRam000000018347d608 = uRam000000018347d4f0 ^ uRam000000018347d348;
  uRam000000018347d120 = uRam000000018347d240 ^ 0x1000056fc;
  uRam000000018347d548 = 0x56fc;
  uVar3 = (~uRam000000018347d4c0 + 0x9445fb81) *
          ((uRam000000018347d520 ^ 0x842275d9) +
          (ulonglong)((uint)uRam000000018347d520 & 0x842275d9) * 2);
  uVar3 = (uVar3 | uRam000000018347d1e0) + (uVar3 & uRam000000018347d1e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d500 =
       func_0x000190823ad0((uVar3 | 0x10678e59) + (ulonglong)((uint)uVar3 & 0x10678e59));
  uVar3 = (ulonglong)(~(uint)uRam000000018347d500 & 0x56fc) ^ 0x56fc;
  uRam000000018347d310 = uRam000000018347d4c8 ^ uVar3 ^ 0x9446527c;
  uRam000000018347d4c0 = (uRam000000018347d4c0 ^ uVar3) + 0x9446527c ^ 0xdb744fa2468f2578;
  uRam000000018347d490 = (uRam000000018347d490 * 0x16c3dcfe1fc517c5 ^ uRam000000018347d4c0) + uVar3;
  uRam000000018347d290 = uRam000000018347d490 ^ uRam000000018347d4c0;
  uRam000000018347d5f8 = 0x9446527c;
  uRam000000018347d598 = func_0x000190823ad0(lRam000000018347d380 + 0xff92ffeb38ff39ffU ^ 9);
  uVar4 = uRam000000018347d598 ^ 0x3e65222cfe8b2e00;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar4;
  uRam000000018347d390 = uRam000000018347d260 ^ uVar4 ^ 0x1000056fc;
  uRam000000018347d200 = (uRam000000018347d200 ^ uVar4) + 0x1000056fc ^ 0xefe71d01dfb07462;
  uRam000000018347d490 = (uRam000000018347d490 * 0x7fc496cbd187a095 ^ uRam000000018347d200) + uVar4;
  uRam000000018347d558 = uRam000000018347d490 ^ uRam000000018347d200;
  uRam000000018347d3e8 = 0x56fc;
  uRam000000018347d520 = func_0x000190823ad0(uRam000000018347d600 ^ 0x42ff985e008286);
  uVar3 = (uRam000000018347d520 ^ 0x13ce9b37471963c8) * 0x40d57daa94beb30d;
  uRam000000018347d5e0 = uRam000000018347d4a0 ^ uVar3 ^ 0x113587eb7;
  uRam000000018347d3c0 = (uRam000000018347d3c0 ^ uVar3) + 0x113587eb7 ^ 0x8c71a171ad24ab29;
  uRam000000018347d5c0 = (uRam000000018347d5c0 * -0x3024feb4609acb77 ^ uRam000000018347d3c0) + uVar3
  ;
  uRam000000018347d5f8 = uRam000000018347d5c0 ^ uRam000000018347d3c0;
  uRam000000018347d6a8 = 0x13587eb7;
  uVar3 = (uRam000000018347d200 ^ _UNK_182d71d80) + uRam000000018347d2a8 + 0x68855d62;
  uVar4 = (uRam000000018347d2a8 ^ _UNK_182d71d88) + uRam000000018347d200 + 0x26b10070;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d200 ^ _UNK_182d71d80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018347d2a8 ^ _UNK_182d71d88;
  uRam000000018347d6b8 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018347d200 + 0x26b10070) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347d2a8 + 0x68855d62));
  uVar3 = (uRam000000018347d6b8 ^ 0xeeb77e77) & 0x1fffffffffffffff;
  uRam000000018347d320 = uRam000000018347d400 ^ uVar3 ^ 0x113587eb7;
  uRam000000018347d550 = (uRam000000018347d550 ^ uVar3) + 0x113587eb7 ^ 0x4f928fe31e5a6bf2;
  uRam000000018347d6b0 = (uRam000000018347d6b0 * -0x241121287ab5d183 ^ uRam000000018347d550) + uVar3
  ;
  uRam000000018347d170 = uRam000000018347d6b0 ^ uRam000000018347d550;
  uRam000000018347d2c0 = 0x13587eb7;
  uVar3 = (~uRam000000018347d3d8 + 0x13587eb8) *
          ((uRam000000018347d4e8 ^ 0x977a5d92) +
          (ulonglong)((uint)uRam000000018347d4e8 & 0x977a5d92) * 2);
  uVar3 = (uVar3 | uRam000000018347d180) + (uVar3 & uRam000000018347d180);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d648 =
       func_0x000190823ad0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam000000018347d470 = uRam000000018347d648 << 0xf | uRam000000018347d648 >> 0x31;
  uRam000000018347d310 = uRam000000018347d310 ^ uRam000000018347d470 ^ 0xc9d2838127404bf5;
  uRam000000018347d4e0 =
       (uRam000000018347d4e0 * -0x21a60cddf1cf69f9 ^ uRam000000018347d310) + uRam000000018347d470;
  uRam000000018347d240 = uRam000000018347d4e0 ^ uRam000000018347d310;
  uRam000000018347d330 = uRam000000018347d530;
  uRam000000018347d368 = 0;
  uVar3 = ((uRam000000018347d170 ^ 0x842275d9) +
          (ulonglong)((uint)uRam000000018347d170 & 0x842275d9) * 2) * -uRam000000018347d670;
  uVar3 = (uVar3 | uRam000000018347d288) + (uVar3 & uRam000000018347d288);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d330 =
       func_0x000190823ad0((uVar3 | 0x842275d9) + (ulonglong)((uint)uVar3 & 0x842275d9));
  uRam000000018347d5f0 = uRam000000018347d178 ^ uRam000000018347d330 ^ 0x56fc;
  uRam000000018347d1d8 = (uRam000000018347d1d8 ^ uRam000000018347d330) + 0x56fc ^ 0x6bfdc25c4d9c6e28
  ;
  uRam000000018347d238 =
       (uRam000000018347d238 * -0x6e8923402f41d063 ^ uRam000000018347d1d8) + uRam000000018347d330;
  uRam000000018347d6e8 = uRam000000018347d238 ^ uRam000000018347d1d8;
  uRam000000018347d470 = 0x56fc;
  uVar3 = (uRam000000018347d2d0 ^ _UNK_182d71d90) + uRam000000018347d500 + 0x7b5dd55a;
  uVar4 = (uRam000000018347d500 ^ _UNK_182d71d98) + uRam000000018347d2d0 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d2d0 ^ _UNK_182d71d90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018347d500 ^ _UNK_182d71d98;
  uVar3 = func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018347d2d0 + 0xffffffff)
                              ^ (uVar3 << 0x1d | uVar3 >> 0x23) -
                                (uRam000000018347d500 + 0x7b5dd55a));
  uVar4 = uVar3 * -0x168c864693619f1d ^ 0xffffffff;
  uRam000000018347d3c0 = (uVar3 ^ uVar4) + 0x800980 ^ 0xd836ad6a9522efb5;
  uRam000000018347d3b0 = (uRam000000018347d3b0 * -0x164d1d90100ac56f ^ uRam000000018347d3c0) + uVar4
  ;
  uRam000000018347d170 = uRam000000018347d3b0 ^ uRam000000018347d3c0;
  uRam000000018347d280 = 0x800980;
  uVar3 = (~uRam000000018347d590 + 0x800981) *
          ((uRam000000018347d640 ^ 0x7b5dd55a) +
          (ulonglong)((uint)uRam000000018347d640 & 0x7b5dd55a) * 2);
  uVar3 = (uVar3 | uRam000000018347d1a8) + (uVar3 & uRam000000018347d1a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d240 =
       func_0x000190823ad0((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda));
  uRam000000018347d4a8 =
       uRam000000018347d4a8 ^ uRam000000018347d240 ^ 0xff7ff67f ^ 0x8f16f67d4c53045c;
  uRam000000018347d350 =
       (uRam000000018347d350 * -0x4245f00cad235ba7 ^ uRam000000018347d4a8) +
       (uRam000000018347d240 ^ 0xff7ff67f);
  uRam000000018347d268 = uRam000000018347d350 ^ uRam000000018347d4a8;
  uRam000000018347d1c8 = 0;
  uVar3 = (uRam000000018347d6a0 ^ 0x842275d9) + uRam000000018347d438 + 0x842275d9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018347d6a0 ^ 0x842275d9;
  uVar4 = ((uRam000000018347d438 + uRam000000018347d6a0) * 0x2000 |
          uRam000000018347d438 + uRam000000018347d6a0 >> 0x33) ^ uRam000000018347d438;
  uRam000000018347d290 =
       func_0x000190823ad0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam000000018347d6a0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018347d438 + 0x842275d9));
  uRam000000018347d4d0 = uRam000000018347d570 ^ uRam000000018347d290 ^ 0x56fc;
  uRam000000018347d590 = (uRam000000018347d590 ^ uRam000000018347d290) + 0x56fc ^ 0x1e368e22f02beba1
  ;
  uRam000000018347d310 =
       (uRam000000018347d310 * 0x6f24036b102e144b ^ uRam000000018347d590) + uRam000000018347d290;
  uRam000000018347d170 = uRam000000018347d310 ^ uRam000000018347d590;
  uRam000000018347d3a8 = 0x56fc;
  uVar3 = ((uRam000000018347d570 ^ uRam000000018347d290 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018347d4d0 & 0x842275d9) * 2) * -uRam000000018347d470;
  uVar3 = (uVar3 | uRam000000018347d288) + (uVar3 & uRam000000018347d288);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018347d650 =
       func_0x000190823ad0((uVar3 | 0x842275d9) + (ulonglong)((uint)uVar3 & 0x842275d9));
  uVar3 = uRam000000018347d650 & 0x7ffffffff;
  uRam000000018347d510 = uRam000000018347d390 ^ uVar3 ^ 0x56fc;
  uRam000000018347d4a8 = (uRam000000018347d4a8 ^ uVar3) + 0x56fc ^ 0x26fbd824980ae6c8;
  uRam000000018347d5e8 = (uRam000000018347d5e8 * -0x5174af28c5b00d29 ^ uRam000000018347d4a8) + uVar3
  ;
  uRam000000018347d100 = uRam000000018347d5e8 ^ uRam000000018347d4a8;
  auVar7._8_8_ = _UNK_182d71da8;
  auVar7._0_8_ = uVar5 ^ 0x84222325;
  uRam000000018347d570 = 0x56fc;
  auVar8 = pshufb(auVar7 ^ _UNK_182d71db0,auVar8);
  uVar4 = auVar8._8_8_ + auVar8._0_8_;
  uVar3 = uVar4 + lRam000000018347d338;
  if (auVar8._4_4_ < 0) {
    uVar3 = uRam000000018347d690 ^ uVar4;
  }
  uRam000000018347d5d0 = func_0x000190823ad0(SUB161(auVar7 ^ _UNK_182d71db0,5) ^ uVar3);
  uVar3 = uRam000000018347d5d0 >> 1 | uRam000000018347d5d0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam000000018347d5d0;
  uRam000000018347d480 = uVar5 ^ 0x56fc;
  uRam000000018347d650 = (uRam000000018347d650 ^ uVar3) + uRam000000018347d480 ^ 0xc5c9569b21efce7e;
  uRam000000018347d248 = (uRam000000018347d248 * -0x7b86cbbe44db6d47 ^ uRam000000018347d650) + uVar3
  ;
  uRam000000018347d1c0 = uRam000000018347d248 ^ uRam000000018347d650;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190819e60 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d6fea8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; eE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 190823b60, runtime 6ffff8433b60) =====

void FUN_190823b60(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000190823bab did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d71f60 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/u; eF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 190824b70, runtime 6ffff8434b70) =====

void FUN_190824b70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190824bf9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d72520 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; eu ()V (handler @ image 19083a160, runtime 6ffff844a160) =====

void FUN_19083a160(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019083a22a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d74dc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; ev (Lsixtwo/lC;FFF)V (handler @ image 190841cd0, runtime 6ffff8451cd0) =====

void FUN_190841cd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000190841d9f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d775a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; ew (Lsixtwo/lC;FFZ)V (handler @ image 190849510, runtime 6ffff8459510) =====

void FUN_190849510(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001908495d6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d79b00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; ex (DD)V (handler @ image 1908560f0, runtime 6ffff84660f0) =====

void FUN_1908560f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001908561c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d7dda0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; ey (DD)Z (handler @ image 19085bcc0, runtime 6ffff846bcc0) =====

void FUN_19085bcc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019085bd37 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d7fa90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/u; ez (DD)Z (handler @ image 19085c210, runtime 6ffff846c210) =====

void FUN_19085c210(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2b1e,0x93);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019085c287 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d7fc50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



