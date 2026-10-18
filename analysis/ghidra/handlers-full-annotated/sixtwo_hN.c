// ===== Lsixtwo/hN; _1203f8110a281d05ed03f9ba362499ec ()V (handler @ image 189d1b1e0, runtime 6ffff192b1e0) =====

void FUN_189d1b1e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189d1b2c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1815286e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hN; ber ()Lsixtwo/hZ; (handler @ image 189ccbd60, runtime 6ffff18dbd60) =====

void FUN_189ccbd60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1611e,0x3a0);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ccbe45 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181516fa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hN; bes (Lsixtwo/hX;)V (handler @ image 189cd8580, runtime 6ffff18e8580) =====

void FUN_189cd8580(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1611e,0x3a0);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189cd864a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18151a6f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hN; bet (Lsixtwo/hL;)V (handler @ image 189ce7860, runtime 6ffff18f7860) =====

void FUN_189ce7860(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15ef1,0x39b);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189ce78af did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18151fdd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hN; beu (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 189ce7af0, runtime 6ffff18f7af0) =====

undefined8 FUN_189ce7af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/hN; bev ([B)Ljava/lang/String; (handler @ image 189ce7b80, runtime 6ffff18f7b80) =====

void FUN_189ce7b80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000189ce7c23 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181520060 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hN; bew (IJ)Ljava/lang/String; (handler @ image 189d10a50, runtime 6ffff1920a50) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189d10a50(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = (~uRam0000000183248388 + 0x68ce4ab2129d1614) *
          ((uRam0000000183248640 ^ 0xe5c026efe7c01080) +
          (uRam0000000183248640 & 0x65c026efe7c01080) * 2);
  uVar4 = (uVar4 | uRam0000000183248510) + (uVar4 & uRam0000000183248510);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832485a8 =
       func_0x000189d177a0((uVar4 | 0x8d0e6c5df55d0693) + (uVar4 & 0x8d0e6c5df55d0693));
  uVar4 = (uRam00000001832485a8 ^ 0xb36d3a6f206b033f) << 0x1b |
          (uRam00000001832485a8 ^ 0xb36d3a6f206b033f) >> 0x25;
  uRam00000001832486f8 = (uRam00000001832486f8 ^ uVar4) + 0xedce6eff73ff37b7 ^ 0x21851073659ff370;
  uRam00000001832486b0 = (uRam00000001832486b0 * -0x53b9ebaaa24ad2f9 ^ uRam00000001832486f8) + uVar4
  ;
  uRam0000000183248588 = uRam00000001832486b0 ^ uRam00000001832486f8;
  uRam00000001832484f8 = 0xedce6eff73ff37b7;
  uVar4 = (~uRam00000001832483a0 + 0xce768eb21232ad9c) *
          ((uRam0000000183248430 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183248430 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183248328) + (uVar4 & uRam0000000183248328);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183248628 =
       func_0x000189d177a0((uVar4 | 0xce768eb29610f141) + (uVar4 & 0xce768eb29610f141));
  uVar4 = uRam0000000183248628 - (uRam0000000183248628 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183248628;
  uRam00000001832485d0 = uRam00000001832485c8 ^ uVar4 ^ 0xce768eb212332d9a;
  uRam0000000183248400 = (uRam0000000183248400 ^ uVar4) + 0xce768eb212332d9a ^ 0x627697651d11f419;
  uRam00000001832486c8 = (uRam00000001832486c8 * -0x4c8926b732678ff1 ^ uRam0000000183248400) + uVar4
  ;
  uRam0000000183248348 = uRam00000001832486c8 ^ uRam0000000183248400;
  uRam00000001832486a0 = -0x3189714dedccd266;
  uVar4 = func_0x000189d177a0(uRam00000001832484a0 ^ 0x708db88a9b7a410c);
  uRam00000001832486d0 = (uRam00000001832486d0 ^ uVar4) + 0x8bb8054fed9f5280 ^ 0x890736619b5f625;
  uRam0000000183248428 = (uRam0000000183248428 * -0x4bb7104879822cad ^ uRam00000001832486d0) + uVar4
  ;
  uRam0000000183248378 = uRam0000000183248428 ^ uRam00000001832486d0;
  uRam0000000183248528 = -0x7447fab01260ad80;
  uRam0000000183248578 = func_0x000189d177a0(uRam0000000183248518 ^ 0x6f10c695ba6a3ea4);
  uVar4 = uRam0000000183248578 >> 1 | uRam0000000183248578;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183248578;
  uRam0000000183248680 = uRam0000000183248468 ^ uVar4 ^ 0x7447fab012612d7f;
  uRam00000001832485f0 = (uRam00000001832485f0 ^ uVar4) + 0x7447fab012612d7f ^ 0xd76fb613305bcbd9;
  uRam0000000183248398 = (uRam0000000183248398 * -0x4d66639e8c83df2d ^ uRam00000001832485f0) + uVar4
  ;
  uRam0000000183248508 = uRam0000000183248398 ^ uRam00000001832485f0;
  uRam00000001832483d8 = 0x7447fab012612d7f;
  uVar4 = (uRam0000000183248460 ^ _UNK_1815270a0) + uRam00000001832485a0 + 0x7447fab096430e5a;
  uVar6 = (uRam00000001832485a0 ^ _UNK_1815270a8) + uRam0000000183248460 + 0x8bb8054fed9f5280;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183248460 ^ _UNK_1815270a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832485a0 ^ _UNK_1815270a8;
  uRam0000000183248498 =
       func_0x000189d177a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183248460 + 0x8bb8054fed9f5280) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832485a0 + 0x7447fab096430e5a));
  uVar4 = uRam0000000183248498 >> 1 | (ulonglong)((uRam0000000183248498 & 1) != 0) << 0x3f;
  uRam00000001832486b8 = uRam0000000183248338 ^ uVar4 ^ 0x7fff;
  uRam0000000183248320 = (uRam0000000183248320 ^ uVar4) + 0x7fff ^ 0x2b753b613931185e;
  uRam00000001832485d8 = (uRam00000001832485d8 * 0x69eeef933260a18f ^ uRam0000000183248320) + uVar4;
  uRam0000000183248338 = uRam00000001832485d8 ^ uRam0000000183248320;
  uRam00000001832484c8 = 0x7fff;
  uVar4 = (~uRam0000000183248628 + 0xd397f6eaf960bce9) *
          ((uRam00000001832483c8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832483c8 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183248308) + (uVar4 & uRam0000000183248308);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832486b0 =
       func_0x000189d177a0((uVar4 | 0xd397f6ea7d42e032) + (uVar4 & 0xd397f6ea7d42e032));
  uVar4 = (ulonglong)((uint)uRam00000001832486b0 & 0x7fff);
  uRam0000000183248400 = uRam0000000183248538 ^ uVar4 ^ 0xd397f6eaf9613ce7;
  uRam0000000183248628 = (uRam0000000183248628 ^ uVar4) + 0xd397f6eaf9613ce7 ^ 0xf194895b41102c89;
  uRam00000001832486e0 = (uRam00000001832486e0 * -0x43a8c97765023371 ^ uRam0000000183248628) + uVar4
  ;
  uRam0000000183248420 = uRam00000001832486e0 ^ uRam0000000183248628;
  uRam0000000183248638 = uRam0000000183248358 ^ 0xd397f6eaf9613ce7;
  uRam00000001832485d0 = 0xd397f6eaf9613ce7;
  uVar4 = (~uRam0000000183248490 + 0x2c680915069f4319) *
          ((uRam0000000183248680 ^ 0xd397f6ea7d431fc2) +
          (uRam0000000183248680 & 0x5397f6ea7d431fc2) * 2);
  uVar4 = (uVar4 | uRam0000000183248378) + (uVar4 & uRam0000000183248378);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832483a0 =
       func_0x000189d177a0((uVar4 | 0xffffffff7bdc5cda) + (uVar4 & 0xffffffff7bdc5cda));
  uVar4 = uRam00000001832483a0 >> 1 | uRam00000001832483a0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001832483a0;
  uRam0000000183248550 = (uRam0000000183248550 ^ uVar4) + 0x7fff ^ 0xeb74a356d343939a;
  uRam0000000183248378 = (uRam0000000183248378 * -0x4a1093e6f99251a7 ^ uRam0000000183248550) + uVar4
  ;
  uRam00000001832485b8 = uRam0000000183248378 ^ uRam0000000183248550;
  uRam00000001832485f8 = 0x7fff;
  uRam0000000183248600 = func_0x000189d177a0(uRam0000000183248358 + 0x36b38c477cd37672 ^ 0x30);
  uVar4 = (uRam0000000183248600 ^ 0x8c000000) & 0xfffffffffffc0000;
  uRam00000001832483b8 = uRam00000001832483a8 ^ uVar4 ^ 0x4e1071b5335417cc;
  uRam0000000183248620 = (uRam0000000183248620 ^ uVar4) + 0x4e1071b5335417cc ^ 0x72e2592d24f7e66a;
  uRam0000000183248410 = (uRam0000000183248410 * 0x57ddeca479b6d42b ^ uRam0000000183248620) + uVar4;
  uRam0000000183248638 = uRam0000000183248410 ^ uRam0000000183248620;
  uRam00000001832486f0 = 0x4e1071b5335417cc;
  uVar4 = (~uRam0000000183248668 + 0x604202b5bf54e016) *
          ((uRam0000000183248618 ^ 0xedce6efff7dd1492) +
          (uRam0000000183248618 & 0x6dce6efff7dd1492) * 2);
  uVar4 = (uVar4 | uRam0000000183248410) + (uVar4 & uRam0000000183248410);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183248330 =
       func_0x000189d177a0((uVar4 | 0x8d8c6c4a4889f487) + (uVar4 & 0x8d8c6c4a4889f487));
  uVar4 = uRam0000000183248330 << 0xb | uRam0000000183248330 >> 0x35;
  uRam00000001832486c0 = (uRam00000001832486c0 ^ uVar4) + 0x8d8c6c4accabd7a2 ^ 0xc3d3d708e7cfc980;
  uRam0000000183248510 = (uRam0000000183248510 * 0x62888b224ed1af41 ^ uRam00000001832486c0) + uVar4;
  uRam00000001832483c0 = uRam0000000183248510 ^ uRam00000001832486c0;
  uRam0000000183248530 = 0x8d8c6c4accabd7a2;
  uVar4 = (uRam0000000183248410 ^ _UNK_1815270b0) + uRam0000000183248478 + 0xedce6efff7dd1492;
  uVar6 = (uRam0000000183248478 ^ _UNK_1815270b8) + uRam0000000183248410 + 0x604202b5bf54e015;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183248410 ^ _UNK_1815270b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183248478 ^ _UNK_1815270b8;
  uRam0000000183248308 =
       func_0x000189d177a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183248410 + 0x604202b5bf54e015) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183248478 + 0xedce6efff7dd1492));
  uRam0000000183248478 =
       (uRam0000000183248478 ^ uRam0000000183248308) + 0x604202b533542015 ^ 0x653e775f049c486;
  uRam00000001832486d8 =
       (uRam00000001832486d8 * -0x6f001f330744c503 ^ uRam0000000183248478) + uRam0000000183248308;
  uRam0000000183248698 = uRam00000001832486d8 ^ uRam0000000183248478;
  uRam0000000183248340 = 0x604202b533542015;
  uVar4 = (uRam00000001832484d8 ^ _UNK_1815270c0) + uRam00000001832483d0 + 0x8d8c6c4a4889f487;
  uVar6 = (uRam00000001832483d0 ^ _UNK_1815270c8) + uRam00000001832484d8 + 0xc084056a66a8402a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832484d8 ^ _UNK_1815270c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832483d0 ^ _UNK_1815270c8;
  uRam0000000183248660 =
       func_0x000189d177a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832484d8 + 0xc084056a66a8402a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832483d0 + 0x8d8c6c4a4889f487));
  uVar4 = uRam0000000183248660 * 0xfb17200b554cf5d;
  uRam0000000183248308 = uRam0000000183248328 ^ uVar4 ^ 0x4e1071b5335417cc;
  uRam0000000183248658 = (uRam0000000183248658 ^ uVar4) + 0x4e1071b5335417cc ^ 0x7400a25f396c95ff;
  uRam00000001832486e0 = (uRam00000001832486e0 * -0x662320b0a73be0eb ^ uRam0000000183248658) + uVar4
  ;
  uRam0000000183248430 = uRam00000001832486e0 ^ uRam0000000183248658;
  uRam0000000183248428 = 0x4e1071b5335417cc;
  uVar4 = ~uRam0000000183248310 *
          ((uRam00000001832486b8 ^ 0xedce6efff7dd1492) +
          (uRam00000001832486b8 & 0x6dce6efff7dd1492) * 2);
  uVar4 = (uVar4 | uRam0000000183248680) + (uVar4 & uRam0000000183248680);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183248300 =
       func_0x000189d177a0((uVar4 | 0x123191000822eb6d) + (uVar4 & 0x123191000822eb6d));
  uRam00000001832486a8 =
       (uRam00000001832486a8 ^ uRam0000000183248300 & 0xffffffffc0000000) + 0x123191008c00c848 ^
       0xa40d81dbe4cfd243;
  uRam00000001832483d8 =
       (uRam00000001832483d8 * 0x421bfd926e3e5471 ^ uRam00000001832486a8) +
       (uRam0000000183248300 & 0xffffffffc0000000) ^ uRam00000001832486a8;
  uRam00000001832484a8 = 0x123191008c00c848;
  uVar4 = (~uRam0000000183248380 + 0x123191008c00c849) *
          ((uRam0000000183248598 ^ 0xedce6efff7dd1492) +
          (uRam0000000183248598 & 0x6dce6efff7dd1492) * 2);
  uVar4 = (uVar4 | uRam0000000183248490) + (uVar4 & uRam0000000183248490);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183248470 =
       func_0x000189d177a0((uVar4 | 0xffffffff7bdddcda) + (uVar4 & 0xffffffff7bdddcda));
  uRam0000000183248640 = uRam0000000183248640 ^ uRam0000000183248470 ^ 0x5a189e66e162b38;
  uRam0000000183248678 =
       (uRam0000000183248678 * 0x4aa21dd16a5cdf5f ^ uRam0000000183248640) + uRam0000000183248470;
  uRam0000000183248448 = uRam0000000183248678 ^ uRam0000000183248640;
  uRam0000000183248440 = 0;
  uRam0000000183248660 = func_0x000189d177a0(uRam0000000183248478 ^ 0x5c007b4a001d0a);
  uVar4 = uRam0000000183248660 ^ 0x7fff;
  uRam00000001832484b0 = uRam0000000183248660 ^ uVar4 ^ 0x7fff;
  uRam0000000183248470 = (uRam0000000183248470 ^ uVar4) + 0x7fff ^ 0x20a3873422c96cac;
  uRam00000001832485e8 = (uRam00000001832485e8 * -0xa9c470d7a193879 ^ uRam0000000183248470) + uVar4;
  uRam0000000183248440 = uRam00000001832485e8 ^ uRam0000000183248470;
  uRam00000001832484c8 = 0x7fff;
  uRam0000000183248610 = func_0x000189d177a0(uRam00000001832484a8 ^ 0x22ff8424ffe148);
  uVar4 = ((uRam0000000183248610 ^ 0xe5c026ef63e233a5) << 0x28 |
          (uRam0000000183248610 ^ 0xe5c026ef63e233a5) >> 0x18) ^ 0xe5c026ef63e233a5;
  uRam00000001832484c0 = uRam00000001832484c0 ^ uVar4 ^ 0x8aa2a9f6e9fb4fb0;
  uRam0000000183248408 = (uRam0000000183248408 * -0x25de179e4435081 ^ uRam00000001832484c0) + uVar4;
  uRam0000000183248580 = uRam0000000183248408 ^ uRam00000001832484c0;
  uRam0000000183248598 = 0;
  uRam00000001832486d0 = func_0x000189d177a0(uRam0000000183248508 + 0x5c008345ffe1ff ^ 0x2d);
  uVar4 = uRam00000001832486d0 & 0xfffffffffe000000;
  uRam0000000183248388 = uRam0000000183248500 ^ uVar4 ^ 0x7fff;
  uRam0000000183248698 = (uRam0000000183248698 ^ uVar4) + 0x7fff ^ 0x55d6bf15369b289f;
  uRam0000000183248570 = (uRam0000000183248570 * -0x66e80a360c3e568b ^ uRam0000000183248698) + uVar4
  ;
  uRam0000000183248498 = uRam0000000183248570 ^ uRam0000000183248698;
  uRam0000000183248608 = 0x7fff;
  uVar4 = param_4 ^ 0x84222325 ^ uRam0000000183248500;
  lVar5 = (param_4 ^ 0x84222325) + uRam00000001832483c0;
  uVar6 = uVar4 + lVar5;
  uVar7 = (uRam00000001832483c0 ^ 0x7fff) + uRam0000000183248500 + 0x7fff;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832483c0 ^ 0x7fff;
  uRam0000000183248520 =
       func_0x000189d177a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183248500 + 0x7fff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar6 = param_4 * 0x7fff ^ uRam0000000183248520;
  uVar4 = uVar6 >> 1 | uVar6;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar6;
  uVar3 = (uint)param_4 & 0x7fff;
  uRam0000000183248568 = (ulonglong)uVar3;
  uRam0000000183248610 = (uRam0000000183248610 ^ uVar6) + uRam0000000183248568 ^ 0x9364968a22843afd;
  uRam00000001832484f0 = (uRam00000001832484f0 * 0x6dd0a41a5442265f ^ uRam0000000183248610) + uVar6;
  uRam0000000183248648 = uRam00000001832484f0 ^ uRam0000000183248610;
  uVar4 = (uRam00000001832483b0 ^ _UNK_1815270d0) + uRam0000000183248470 + 0xdffe2e7f;
  uVar6 = (uRam0000000183248470 ^ _UNK_1815270d8) + uRam00000001832483b0 + 0x540baed9;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832483b0 ^ _UNK_1815270d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183248470 ^ _UNK_1815270d8;
  uRam0000000183248348 =
       func_0x000189d177a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832483b0 + 0x540baed9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183248470 + 0xdffe2e7f));
  uVar4 = uRam0000000183248348 >> 1 | uRam0000000183248348;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uRam0000000183248348) & 0x3fffffffffffffff;
  uRam0000000183248680 = (uRam0000000183248680 ^ uVar4) + 0x5fdfafdb ^ 0xa034f62d93cfe1b;
  uRam00000001832483b0 = (uRam00000001832483b0 * -0x55172eae9eaf9a73 ^ uRam0000000183248680) + uVar4
  ;
  uRam00000001832485d0 = uRam00000001832483b0 ^ uRam0000000183248680;
  uRam00000001832484f0 = 0x5fdfafdb;
  uVar4 = (uRam00000001832484c0 ^ _UNK_1815270e0) + uRam0000000183248680 + 0xbe5d0910;
  uVar6 = (uRam0000000183248680 ^ _UNK_1815270e8) + uRam00000001832484c0 + 0x1806a360;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832484c0 ^ _UNK_1815270e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183248680 ^ _UNK_1815270e8;
  uRam0000000183248350 =
       func_0x000189d177a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832484c0 + 0x1806a360) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183248680 + 0xbe5d0910));
  uVar4 = uRam0000000183248668 << 0x38 | uRam0000000183248668 >> 8;
  uRam00000001832485f8 = (uRam00000001832485f8 ^ uVar4) + 0x22798955 ^ 0x2dda5d3fc4b389c3;
  uRam00000001832486a8 = (uRam00000001832486a8 * 0xb55f9e07a94e421 ^ uRam00000001832485f8) + uVar4;
  uRam0000000183248408 = uRam00000001832486a8 ^ uRam00000001832485f8;
  uRam00000001832483c0 = 0x22798955;
  uRam0000000183248688 = func_0x000189d177a0(uRam00000001832483a0 ^ 0xfff5008bc30079c5);
  uRam00000001832483f0 = uRam0000000183248610 * -0x4dc808f63acb1dc7;
  uRam0000000183248590 = uRam0000000183248590 - 0x8a43e60 ^ 0xfe5b1e5bf9b8c927;
  uRam0000000183248610 = uRam00000001832483f0 ^ uRam0000000183248590;
  uRam0000000183248408 = 0xf75bc1a0;
  uVar4 = (~uRam0000000183248630 + 0xf75bc1a1) * 0x183e27b80;
  uVar4 = (uVar4 | uRam00000001832484a0) + (uVar4 & uRam00000001832484a0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183248330 =
       func_0x000189d177a0((uVar4 | 0x7bdd7840) + (ulonglong)((uint)uVar4 & 0x7bdd7840));
  uVar4 = uRam0000000183248330 & 0x8a49ac5;
  uRam00000001832484d8 = uRam0000000183248450 ^ uVar4 ^ 0x100005c65;
  uRam0000000183248328 = (uRam0000000183248328 ^ uVar4) + 0x100005c65 ^ 0x978e5ef8fb0db2a5;
  uRam0000000183248528 = (uRam0000000183248528 * 0x484b43211fe93cf7 ^ uRam0000000183248328) + uVar4;
  uRam00000001832483d0 = uRam0000000183248528 ^ uRam0000000183248328;
  uRam0000000183248370 = 0x5c65;
  uRam0000000183248678 = func_0x000189d177a0(uRam00000001832484f0 ^ 0x4dffd9a4ff6503);
  uVar4 = uRam0000000183248678 >> 1 | uRam0000000183248678;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam0000000183248678;
  uRam00000001832483a8 = (uRam00000001832483a8 ^ uVar4) - 0x5dcc5582 ^ 0x35117b76522043bb;
  uRam0000000183248430 = (uRam0000000183248430 * -0x1f68e255fa6584f7 ^ uRam00000001832483a8) + uVar4
  ;
  uRam0000000183248408 = uRam0000000183248430 ^ uRam00000001832483a8;
  uRam00000001832485e8 = 0xa233aa7e;
  uVar4 = (~uRam0000000183248560 + 0x5dcc5583) *
          ((uRam0000000183248378 ^ 0x84227f40) +
          (ulonglong)((uint)uRam0000000183248378 & 0x84227f40) * 2);
  uVar4 = (uVar4 | uRam0000000183248498) + (uVar4 & uRam0000000183248498);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832484b0 =
       func_0x000189d177a0((uVar4 | 0xd9ee2ac2) + (ulonglong)((uint)uVar4 & 0xd9ee2ac2));
  uRam00000001832486c8 = uRam00000001832484b8 ^ uRam00000001832484b0 ^ 0x5dccb1e7;
  uRam00000001832486c0 =
       (uRam00000001832486c0 ^ uRam00000001832484b0) + 0x5dccb1e7 ^ 0x9fff7a5f5af7c547;
  uRam0000000183248670 =
       (uRam0000000183248670 * -0x5ad38dcd12152e33 ^ uRam00000001832486c0) + uRam00000001832484b0;
  uRam0000000183248460 = uRam0000000183248670 ^ uRam00000001832486c0;
  uRam0000000183248368 = 0x5dccb1e7;
  uVar4 = (~uRam00000001832486d0 + 0xa233aa7f) *
          ((uRam0000000183248488 ^ 0xd9ee92c2) +
          (ulonglong)((uint)uRam0000000183248488 & 0xd9ee92c2) * 2);
  uVar4 = (uVar4 | uRam0000000183248308) + (uVar4 & uRam0000000183248308);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001832486d0 =
       func_0x000189d177a0((uVar4 | 0x7bdd38bc) + (ulonglong)((uint)uVar4 & 0x7bdd38bc));
  uVar4 = (uRam0000000183248600 << 0x35 | uRam0000000183248600 >> 0xb) >> 0x10 |
          (uRam0000000183248600 >> 0xb) << 0x30;
  uRam0000000183248538 = uRam0000000183248338 ^ uVar4 ^ 0x100005c65;
  uRam0000000183248420 = (uRam0000000183248420 ^ uVar4) + 0x100005c65 ^ 0x2133071ca4410453;
  uRam00000001832486a0 = (uRam00000001832486a0 * -0x3485546ed899ccb9 ^ uRam0000000183248420) + uVar4
  ;
  uRam0000000183248468 = uRam00000001832486a0 ^ uRam0000000183248420;
  uRam00000001832483b0 = 0x5c65;
  uRam0000000183248530 = func_0x000189d177a0(uRam0000000183248458 + 0x26ffb7150076ff ^ 0xda);
  uRam00000001832484d0 = uRam00000001832484d0 - 0x4bbb5c18 ^ 0x92c4eb79625ae68f;
  uRam00000001832483b8 = uRam0000000183248640 * -0x282a32afb789a67f;
  uRam0000000183248640 = uRam00000001832483b8 ^ uRam00000001832484d0;
  uRam0000000183248618 = 0xb444a3e8;
  uRam00000001832486d8 = func_0x000189d177a0(uRam0000000183248478 ^ 0xffe2ff3137ff9673);
  uVar4 = uRam00000001832486d8 ^ 0x1b553603a91d;
  uRam00000001832486e8 = uRam0000000183248430 ^ uVar4 ^ 0x4bbbb87d;
  uRam0000000183248428 = (uRam0000000183248428 ^ uVar4) + 0x4bbbb87d ^ 0xaf4440e26dc0febe;
  uRam00000001832485e8 = (uRam00000001832485e8 * 0x1dd8ebc07415d52f ^ uRam0000000183248428) + uVar4;
  uRam0000000183248448 = uRam00000001832485e8 ^ uRam0000000183248428;
  uRam0000000183248308 = 0x4bbbb87d;
  uRam0000000183248540 = func_0x000189d177a0(uRam00000001832483d8 ^ 0x8007a500024e6);
  uVar6 = _UNK_1815270f8;
  uVar4 = _UNK_1815270f0;
  uVar7 = uRam0000000183248540 - (uRam0000000183248540 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183248540 ^ 0x4bbbb87d;
  uRam00000001832485b8 = uRam0000000183248550 ^ uVar7 ^ 0x100005c65;
  uRam00000001832485a0 = (uRam00000001832485a0 ^ uVar7) + 0x100005c65 ^ 0x67525a527caa5873;
  uRam0000000183248318 = (uRam0000000183248318 * 0x23b8521493a6ea55 ^ uRam00000001832485a0) + uVar7;
  uRam00000001832486c8 = uRam0000000183248318 ^ uRam00000001832485a0;
  uRam00000001832486b0 = 0x5c65;
  uVar7 = (uRam0000000183248598 ^ _UNK_1815270f0) + uRam0000000183248460 + 0xdbfd8cfe;
  uVar8 = (uRam0000000183248460 ^ _UNK_1815270f8) + uRam0000000183248598 + 0x22798955;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183248598 ^ _UNK_1815270f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183248460 ^ _UNK_1815270f8;
  uRam0000000183248680 =
       func_0x000189d177a0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183248598 + 0x22798955) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183248460 + 0xdbfd8cfe));
  uVar7 = uRam0000000183248680 ^ 0x20200004;
  uRam0000000183248318 = uRam0000000183248400 ^ uVar7 ^ 0x82593930;
  uRam0000000183248658 = (uRam0000000183248658 ^ uVar7) + 0x82593930 ^ 0xbf8470ecad3a4182;
  uRam0000000183248628 = (uRam0000000183248628 * -0x42997e673a98cd31 ^ uRam0000000183248658) + uVar7
  ;
  uRam0000000183248368 = uRam0000000183248628 ^ uRam0000000183248658;
  uRam0000000183248600 = 0x82593930;
  uVar7 = (uRam0000000183248530 ^ uVar4) + uRam0000000183248590 + 0xdbfd8cfe;
  uVar8 = (uRam0000000183248590 ^ uVar6) + uRam0000000183248530 + 0x22798955;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183248530 ^ uVar4;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183248590 ^ uVar6;
  uRam0000000183248480 =
       func_0x000189d177a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183248530 + 0x22798955) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183248590 + 0xdbfd8cfe));
  uVar4 = (uRam0000000183248480 ^ 0x7fffafdf) << 0x1f | uRam0000000183248480 >> 0x21;
  uVar4 = uVar4 * 0x3832910e80000000 | uVar4 * 0x2705de2c7065221d >> 0x21;
  uRam00000001832483d8 = (uRam00000001832483d8 ^ uVar4) + 0x2598951 ^ 0x870c351ad18015bf;
  uRam0000000183248570 = (uRam0000000183248570 * 0x1df7ede18931f48b ^ uRam00000001832483d8) + uVar4;
  uRam0000000183248680 = uRam0000000183248570 ^ uRam00000001832483d8;
  uRam0000000183248488 = 0x2598951;
  uVar4 = (~uRam0000000183248330 + 0x4b312a3) *
          ((uRam00000001832486f0 ^ 0xf98405ab) +
          (ulonglong)((uint)uRam00000001832486f0 & 0xf98405ab) * 2);
  uVar4 = (uVar4 | uRam00000001832485b0) + (uVar4 & uRam00000001832485b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183248568 =
       func_0x000189d177a0((uVar4 | 0xfd371709) + (ulonglong)((uint)uVar4 & 0xfd371709));
  uVar4 = uRam0000000183248568 >> 1 | uRam0000000183248568;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (~((uint)uRam0000000183248568 ^
            0x40 - (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) &
          0x7da6268e);
  uVar4 = uVar6 * 8;
  uRam0000000183248418 = uRam00000001832484f0 ^ uVar4 ^ 0x82593930;
  uRam00000001832486e8 = (uVar4 ^ uRam00000001832486e8) + 0x82593930 ^ 0x22b8125b029903ee;
  uRam0000000183248560 =
       (uRam0000000183248560 * -0xa31b2392cb780b ^ uRam00000001832486e8) + uVar6 * 8;
  uRam0000000183248390 = uRam00000001832486e8 ^ uRam0000000183248560;
  uRam0000000183248510 = 0x82593930;
  uRam00000001832486f0 = func_0x000189d177a0(uRam0000000183248408 ^ 0x1d008424ffdddf);
  uRam0000000183248608 = uRam0000000183248528;
  uRam0000000183248668 = uRam0000000183248668 ^ uRam0000000183248528 ^ 0x9a122cef637faec9;
  uRam0000000183248518 =
       (uRam0000000183248518 * -0x3ddc8d0a7d63b029 ^ uRam0000000183248668) + uRam0000000183248528;
  uRam0000000183248340 = uRam0000000183248518 ^ uRam0000000183248668;
  uRam0000000183248320 = 0;
  uRam00000001832485b0 = func_0x000189d177a0(uRam0000000183248640 + 0x2f0023ff0001ff ^ 0x65);
  uVar4 = uRam00000001832485b0 << 10 | uRam00000001832485b0 >> 0x36;
  uRam0000000183248390 = (uRam0000000183248390 ^ uVar4) + 0xa0205024 ^ 0xc69eb69be497e68e;
  uRam0000000183248618 = (uRam0000000183248618 * -0x450adc7444af167b ^ uRam0000000183248390) + uVar4
  ;
  uRam00000001832484a0 = uRam0000000183248618 ^ uRam0000000183248390;
  uRam00000001832486d8 = 0xa0205024;
  uVar4 = (uRam00000001832485e8 ^ _UNK_181527100) + uRam0000000183248590 + 0xdffe2e7f;
  uVar6 = (uRam0000000183248590 ^ _UNK_181527108) + uRam00000001832485e8 + 0x5bdc0d5a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832485e8 ^ _UNK_181527100;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183248590 ^ _UNK_181527108;
  uRam0000000183248370 =
       func_0x000189d177a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832485e8 + 0x5bdc0d5a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183248590 + 0xdffe2e7f));
  uVar4 = uRam0000000183248370 << 0x1a | uRam0000000183248370 >> 0x26;
  uRam0000000183248578 = uRam0000000183248578 ^ uVar4 ^ 0x20addae14554a20a;
  uRam00000001832485a8 = (uRam00000001832485a8 * 0x723cbe5a6ea06591 ^ uRam0000000183248578) + uVar4;
  uRam00000001832486e0 = uRam00000001832485a8 ^ uRam0000000183248578;
  uRam0000000183248358 = 0;
  uVar4 = uRam0000000183248470 * 0x2000 ^ uRam0000000183248470;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183248660 =
       func_0x000189d177a0((uVar4 | 0x84227f40) + (ulonglong)((uint)uVar4 & 0x84227f40));
  uVar4 = uRam0000000183248660 & 0x7fffffffffffffff;
  uRam0000000183248470 = uRam00000001832483e8 ^ uVar4 ^ 0x5c65;
  uRam0000000183248428 = (uRam0000000183248428 ^ uVar4) + 0x5c65 ^ 0x4bdbc82a5e786ef0;
  uRam0000000183248588 = (uRam0000000183248588 * -0x4171fa04b50ce5ef ^ uRam0000000183248428) + uVar4
  ;
  uRam0000000183248308 = uRam0000000183248588 ^ uRam0000000183248428;
  uRam0000000183248388 = 0x5c65;
  uVar6 = (ulonglong)(uVar3 ^ param_3);
  uVar4 = (~uRam0000000183248698 + 0x5c66) *
          ((uVar6 ^ 0x84222325 ^ uRam0000000183248390) +
          (ulonglong)((uint)uRam0000000183248390 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar4 = (uVar4 | uRam00000001832485d0) + (uVar4 & uRam00000001832485d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183248488 =
       func_0x000189d177a0((uVar6 ^ 0x84227f40 | uVar4) +
                           (ulonglong)((uint)(uVar6 ^ 0x84227f40) & (uint)uVar4));
  uVar4 = uVar6 * 0x5c65 ^ uRam0000000183248488 ^ 0x5c65;
  uRam0000000183248650 = uVar6 ^ 0x5c65;
  uRam0000000183248458 = (uRam0000000183248458 ^ uVar4) + uRam0000000183248650 ^ 0xa6fe9a89547fba00;
  uRam0000000183248648 = (uRam0000000183248648 * 0x2878f5f54d99b687 ^ uRam0000000183248458) + uVar4;
  uRam0000000183248348 = uRam0000000183248648 ^ uRam0000000183248458;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1611e,0x3a0);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189d12e16 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181525718 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/hN; bex (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 189d17830, runtime 6ffff1927830) =====

void FUN_189d17830(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000189d1786c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1815272a0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/hN; bey (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 189d18720, runtime 6ffff1928720) =====

void FUN_189d18720(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189d1879d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1815277d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



