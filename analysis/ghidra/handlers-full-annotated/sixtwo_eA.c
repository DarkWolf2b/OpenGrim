// ===== Lsixtwo/eA; _5e7cb2aeed2a4e96452d61e493ee8585 ()V (handler @ image 18ccea460, runtime 6ffff48fa460) =====

void FUN_18ccea460(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ccea548 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182072f48 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eA; avm (Lsixtwo/gH$th;)V (handler @ image 18cccd380, runtime 6ffff48dd380) =====

void FUN_18cccd380(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xdd5a,0x26f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cccd44a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18206ab40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eA; avn (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18ccdaef0, runtime 6ffff48eaef0) =====

undefined8 FUN_18ccdaef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/eA; avo (IJ)I (handler @ image 18ccdaf80, runtime 6ffff48eaf80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccdaf80(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = (uRam00000001833396d0 ^ _UNK_182071770) + uRam00000001833395c0 + 0xbda46b7b181278ae;
  uVar5 = (uRam00000001833395c0 ^ _UNK_182071778) + uRam00000001833396d0 + 0x68388960500e5a9d;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833396d0 ^ _UNK_182071770;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833395c0 ^ _UNK_182071778;
  uRam0000000183339548 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833396d0 + 0x68388960500e5a9d) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001833395c0 + 0xbda46b7b181278ae));
  uRam0000000183339580 =
       (uRam0000000183339580 ^ uRam0000000183339548) + 0xfdbceb7bdc3e5b9f ^ 0xe00a31e00c90cba6;
  uRam0000000183339508 =
       (uRam0000000183339508 * 0x31f89498f5073ed1 ^ uRam0000000183339580) + uRam0000000183339548;
  uRam0000000183339500 = uRam0000000183339508 ^ uRam0000000183339580;
  uRam0000000183339688 = 0xfdbceb7bdc3e5b9f;
  uRam0000000183339598 = func_0x00018cce66b0(uRam0000000183339548 ^ 0xf6a07137b52d162);
  uRam0000000183339540 = uRam0000000183339540 + 0x24f0a28f6c8b6648 ^ 0xc6867867ab466d95;
  uRam00000001833395d0 = uRam0000000183339668 * 0x32c2bfc2388e4ed;
  uRam0000000183339668 = uRam00000001833395d0 ^ uRam0000000183339540;
  uRam00000001833396b8 = 0x24f0a28f6c8b6648;
  uVar4 = (~uRam0000000183339540 + 0xdb0f5d70937499b9) *
          ((uRam0000000183339698 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183339698 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam00000001833396f8) + (uVar4 & uRam00000001833396f8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833395e0 =
       func_0x00018cce66b0((uVar4 | 0xdb0f5d701756c562) + (uVar4 & 0xdb0f5d701756c562));
  uVar4 = (uRam00000001833395e0 & 0x7fffffffffffffff) >> 1 |
          uRam00000001833395e0 & 0x7fffffffffffffff;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001833395e0 & 0x7fffffffffffffff;
  uRam00000001833395a0 = uRam0000000183339660 ^ uVar4 ^ 0xdb0f5d70937519b7;
  uRam0000000183339610 = (uRam0000000183339610 ^ uVar4) + 0xdb0f5d70937519b7 ^ 0x107341527f0e858a;
  uRam0000000183339638 = (uRam0000000183339638 * -0x3453825b2ba924ef ^ uRam0000000183339610) + uVar4
  ;
  uRam00000001833395f8 = uRam0000000183339638 ^ uRam0000000183339610;
  uRam00000001833396d8 = 0xdb0f5d70937519b7;
  uVar4 = (uRam0000000183339578 ^ _UNK_182071780) + uRam0000000183339658 + 0x84222325;
  uVar5 = (uRam0000000183339658 ^ _UNK_182071788) + uRam0000000183339578 + 0x9025a22f5466b0d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183339578 ^ _UNK_182071780;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339658 ^ _UNK_182071788;
  uRam0000000183339608 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183339578 + 0x9025a22f5466b0d0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183339658 + 0x84222325));
  uVar4 = (uRam0000000183339608 ^ 0x9025a22f5466b0d0) & 0x7fffffffffffffff;
  uVar5 = uVar4 - (((uRam0000000183339608 ^ 0x9025a22f5466b0d0) & 0x7fffffffffffffff) >> 1 &
                  0x1555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar4;
  uRam00000001833395a0 = (uRam00000001833395a0 ^ uVar4) + 0x6fda5dd0ab994f30 ^ 0x7316c3f98925b7b3;
  uRam0000000183339508 = (uRam0000000183339508 * -0x39897466eb3537eb ^ uRam00000001833395a0) + uVar4
  ;
  uRam0000000183339688 = uRam0000000183339508 ^ uRam00000001833395a0;
  uRam00000001833396a0 = 0x6fda5dd0ab994f30;
  uVar4 = func_0x00018cce66b0(uRam0000000183339538 + 0xd8a425cffa9dc46f ^ 0xa1);
  uRam0000000183339528 = uRam00000001833395c8 ^ uVar4 ^ 0x9025a22f546730cf;
  uRam00000001833395b8 = (uRam00000001833395b8 ^ uVar4) + 0x9025a22f546730cf ^ 0x6ad1f4a83ef2441c;
  uRam0000000183339650 = (uRam0000000183339650 * 0x202f86a59bc3825d ^ uRam00000001833395b8) + uVar4;
  uRam00000001833395e8 = uRam0000000183339650 ^ uRam00000001833395b8;
  uRam00000001833396d8 = 0x9025a22f546730cf;
  uVar4 = (uRam00000001833396f8 ^ _UNK_182071790) + uRam00000001833396a8 + 0x9025a22fd04513ea;
  uVar5 = (uRam00000001833396a8 ^ _UNK_182071798) + uRam00000001833396f8 + 0x6fda5dd0ab994f30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833396f8 ^ _UNK_182071790;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833396a8 ^ _UNK_182071798;
  uRam00000001833396f0 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833396f8 + 0x6fda5dd0ab994f30) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001833396a8 + 0x9025a22fd04513ea));
  uVar5 = uRam00000001833396f0 ^ 0x919e3e621c2007d0;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  uRam0000000183339670 = uRam0000000183339640 ^ uVar5 ^ 0x7fff;
  uRam00000001833396b0 = (uRam00000001833396b0 ^ uVar5) + 0x7fff ^ 0xe8fe9747ceaa7b2b;
  uRam0000000183339590 = (uRam0000000183339590 * 0x49eeed2cf3f52889 ^ uRam00000001833396b0) + uVar5;
  uRam00000001833396d0 = uRam0000000183339590 ^ uRam00000001833396b0;
  uRam0000000183339600 = 0x7fff;
  uVar4 = (~uRam0000000183339578 + 0x4ed35a1d50c8c365) *
          ((uRam00000001833395e0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833395e0 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183339648) + (uVar4 & uRam0000000183339648);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339680 =
       func_0x00018cce66b0((uVar4 | 0x4ed35a1dd4eae041) + (uVar4 & 0x4ed35a1dd4eae041));
  uRam0000000183339678 =
       (uRam0000000183339678 ^ uRam00000001833396e0) + 0xb12ca5e2af373c9c ^ 0x2b420250b92bfacf;
  uRam0000000183339640 =
       (uRam0000000183339640 * 0x7904f9924dcb9a73 ^ uRam0000000183339678) + uRam00000001833396e0;
  uRam00000001833395c8 = uRam0000000183339640 ^ uRam0000000183339678;
  uRam0000000183339658 = 0xb12ca5e2af373c9c;
  uVar4 = (~uRam0000000183339660 + 0x4ed35a1d50c8c365) *
          ((uRam00000001833396b0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833396b0 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam00000001833396e8) + (uVar4 & uRam00000001833396e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339528 =
       func_0x00018cce66b0((uVar4 | 0x4ed35a1dd4ea9fbe) + (uVar4 & 0x4ed35a1dd4ea9fbe));
  uVar4 = uRam0000000183339528 >> 1 | (ulonglong)((uRam0000000183339528 & 1) != 0) << 0x3f;
  uRam0000000183339580 = uRam00000001833395c8 ^ uVar4 ^ 0x4ed35a1d50c94363;
  uRam00000001833396c0 = (uRam00000001833396c0 ^ uVar4) + 0x4ed35a1d50c94363 ^ 0xf531600b2ee1bf4d;
  uRam0000000183339638 = (uRam0000000183339638 * -0x6508f26f848d9181 ^ uRam00000001833396c0) + uVar4
  ;
  uRam00000001833396e0 = uRam0000000183339638 ^ uRam00000001833396c0;
  uRam00000001833395b8 = 0x4ed35a1d50c94363;
  uVar4 = (uRam00000001833396d8 ^ _UNK_1820717a0) + uRam0000000183339530 + 0xfdbceb7b581c78ba;
  uVar5 = (uRam0000000183339530 ^ _UNK_1820717a8) + uRam00000001833396d8 + 0x48cdb67229d21258;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833396d8 ^ _UNK_1820717a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339530 ^ _UNK_1820717a8;
  uRam00000001833396e0 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833396d8 + 0x48cdb67229d21258) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183339530 + 0xfdbceb7b581c78ba));
  uVar4 = uRam00000001833396e0 >> 1 | uRam00000001833396e0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ~(0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
           uRam00000001833396e0) & 0xfdbceb7bdc3e5b9f;
  uRam0000000183339668 = (uRam0000000183339668 ^ uVar4) + 0xb5715d09f5ec49c7 ^ 0xdf89b8359d37c299;
  uRam00000001833395d8 = (uRam00000001833395d8 * -0x2066d39d41e0ff0b ^ uRam0000000183339668) + uVar4
  ;
  uRam0000000183339520 = uRam00000001833395d8 ^ uRam0000000183339668;
  uRam0000000183339638 = uRam0000000183339550 ^ 0xb5715d09f5ec49c7;
  uRam0000000183339518 = 0xb5715d09f5ec49c7;
  uRam0000000183339678 = func_0x00018cce66b0(uRam00000001833396e8 + 0x755aed0ddbabe92 ^ 0xae);
  uVar4 = (uRam0000000183339678 << 0x25 | uRam0000000183339678 >> 0x1b) ^ 0xfdbceb7bdc3e5b9f;
  uRam00000001833395e8 = (uRam00000001833395e8 ^ uVar4) + 0x488ca27208121218 ^ 0x8d5223173ee888e1;
  uRam00000001833396c8 = (uRam00000001833396c8 * -0x59eca26df88930f7 ^ uRam00000001833395e8) + uVar4
  ;
  uRam00000001833396e0 = uRam00000001833396c8 ^ uRam00000001833395e8;
  uRam00000001833396b8 = 0x488ca27208121218;
  uRam00000001833396c0 = func_0x00018cce66b0(uRam0000000183339678 + 0x22b627dfb1e769e3 ^ 0x82);
  uVar4 = (uRam00000001833396c0 ^ 0x6095c38626a9d000) & 0xfffffffffffffe00;
  uRam00000001833396d0 = uRam00000001833395d8 ^ uVar4 ^ 0x468aa1ee06106df7;
  uRam00000001833395b0 = (uRam00000001833395b0 ^ uVar4) + 0x468aa1ee06106df7 ^ 0xce99431596ce37e8;
  uRam00000001833395c8 = (uRam00000001833395c8 * -0x78bd10e7e2a1d5ed ^ uRam00000001833395b0) + uVar4
  ;
  uRam0000000183339628 = uRam00000001833395c8 ^ uRam00000001833395b0;
  uRam0000000183339648 = 0x468aa1ee06106df7;
  uVar4 = (uRam00000001833395d0 ^ _UNK_1820717b0) + uRam0000000183339678 + 0x468aa1ee82324ed2;
  uVar5 = (uRam0000000183339678 ^ _UNK_1820717b8) + uRam00000001833395d0 + 0x468aa1ee06106df7;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833395d0 ^ _UNK_1820717b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339678 ^ _UNK_1820717b8;
  uRam00000001833395d0 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833395d0 + 0x468aa1ee06106df7) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183339678 + 0x468aa1ee82324ed2));
  uRam00000001833395e0 = uRam00000001833395d0 * 0x38db0a1888f7a5e3;
  uRam00000001833396b0 = uRam00000001833396b0 ^ uRam00000001833395e0 ^ 0x4476f072e547b4cc;
  uRam0000000183339638 =
       (uRam0000000183339638 * -0x61aaaee612635717 ^ uRam00000001833396b0) + uRam00000001833395e0;
  uRam0000000183339530 = uRam0000000183339638 ^ uRam00000001833396b0;
  uRam0000000183339518 = 0;
  uVar4 = ((uRam00000001833396a8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833396a8 & 0x84225cda) * 2) * -uRam00000001833396d0;
  uVar4 = (uVar4 | uRam0000000183339610) + (uVar4 & uRam0000000183339610);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339540 =
       func_0x00018cce66b0((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = uRam0000000183339540 & 0xffffffffff000000;
  uRam00000001833395b8 = uRam0000000183339670 ^ uVar4 ^ 0x7fff;
  uRam00000001833396a8 = (uRam00000001833396a8 ^ uVar4) + 0x7fff ^ 0xea6a80d445f35467;
  uRam0000000183339680 = (uRam0000000183339680 * -0x6194f334e03527bd ^ uRam00000001833396a8) + uVar4
  ;
  uRam0000000183339520 = uRam0000000183339680 ^ uRam00000001833396a8;
  uRam0000000183339508 = 0x7fff;
  uRam00000001833396f0 = func_0x00018cce66b0(uRam0000000183339638 + 0x847b405d430ce101 ^ 0xd3);
  uVar5 = ~uRam00000001833396f0 & 0xfdbceb7bdc3e5b9f;
  uVar4 = uVar5 - (~uRam00000001833396f0 >> 1 & 0x5454551544150545);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar5;
  uRam0000000183339638 = (uRam0000000183339638 ^ uVar5) + 0x243148423c1a460 ^ 0x6b2139bed2f5c9f0;
  uRam00000001833395d0 = (uRam00000001833395d0 * -0x3c37ad13a7b7dcb ^ uRam0000000183339638) + uVar5;
  uRam0000000183339668 = uRam00000001833395d0 ^ uRam0000000183339638;
  uRam0000000183339640 = 0x243148423c1a460;
  uVar4 = (uRam0000000183339678 ^ _UNK_1820717c0) + uRam0000000183339698 + 0xfdbceb7b581c78ba;
  uVar5 = (uRam0000000183339698 ^ _UNK_1820717c8) + uRam0000000183339678 + 0x243148423c1a460;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183339678 ^ _UNK_1820717c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339698 ^ _UNK_1820717c8;
  uRam0000000183339518 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183339678 + 0x243148423c1a460) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183339698 + 0xfdbceb7b581c78ba));
  uRam0000000183339570 =
       uRam0000000183339570 ^ uRam0000000183339518 ^ 0x4d1de31059f337a0 ^ 0xd8c631bfaeab173d;
  uRam00000001833396c0 =
       (uRam00000001833396c0 * 0x915a193871b4fb9 ^ uRam0000000183339570) +
       (uRam0000000183339518 ^ 0x4d1de31059f337a0);
  uRam0000000183339678 = uRam00000001833396c0 ^ uRam0000000183339570;
  uRam0000000183339550 = 0;
  uVar4 = ((uRam0000000183339548 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183339548 & 0x84225cda) * 2) * -uRam0000000183339698;
  uVar4 = (uVar4 | uRam00000001833395b0) + (uVar4 & uRam00000001833395b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339628 =
       func_0x00018cce66b0((uVar4 | 0x84225cda) + (ulonglong)((uint)uVar4 & 0x84225cda));
  uVar4 = uRam0000000183339628 - (uRam0000000183339628 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183339628 ^ 0x7fff;
  uRam0000000183339620 = uRam00000001833396c0 ^ uVar4 ^ 0x7fff;
  uRam0000000183339550 = (uRam0000000183339550 ^ uVar4) + 0x7fff ^ 0xe2e1108c81f1b808;
  uRam00000001833396b8 = (uRam00000001833396b8 * 0xb8cf9c4a7c06b47 ^ uRam0000000183339550) + uVar4;
  uRam0000000183339558 = uRam00000001833396b8 ^ uRam0000000183339550;
  uRam00000001833396f8 = 0x7fff;
  uVar4 = (uRam0000000183339688 ^ _UNK_1820717d0) + uRam00000001833395f0 + 0xbda46b7b181278ae;
  uVar5 = (uRam00000001833395f0 ^ _UNK_1820717d8) + uRam0000000183339688 + 0xbda46b7b9c305b8b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183339688 ^ _UNK_1820717d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833395f0 ^ _UNK_1820717d8;
  uVar4 = func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) -
                              (uRam0000000183339688 + 0xbda46b7b9c305b8b) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) -
                              (uRam00000001833395f0 + 0xbda46b7b181278ae));
  uVar4 = (uVar4 ^ 0x6a612245dcdc1d79) & 0x7fffffffffffffff;
  uRam00000001833396f8 = uRam00000001833396f8 ^ uVar4 ^ 0x164951afdfe0fd86;
  uRam0000000183339688 = (uRam0000000183339688 * -0x4d8bdd3c93e94e03 ^ uRam00000001833396f8) + uVar4
  ;
  uRam0000000183339558 = uRam0000000183339688 ^ uRam00000001833396f8;
  uRam00000001833396c8 = 0;
  uVar4 = param_4 ^ 0x84222325 ^ uRam00000001833396b8;
  lVar3 = (param_4 ^ 0x84222325) + uRam0000000183339540;
  uVar5 = uVar4 + lVar3;
  uVar6 = (uRam0000000183339540 ^ 0x7fff) + uRam00000001833396b8 + 0x7fff;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183339540 ^ 0x7fff;
  uRam0000000183339638 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833396b8 + 0x7fff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam0000000183339520 = (ulonglong)uVar2;
  uRam00000001833395c0 =
       (uRam00000001833395c0 ^ uRam0000000183339638 ^ 0x7fff) + uRam0000000183339520 ^
       0x96d0f724546f760b;
  uRam0000000183339690 =
       (uRam0000000183339690 * 0x4fdd58dd2f3b0b85 ^ uRam00000001833395c0) +
       (uRam0000000183339638 ^ 0x7fff);
  uRam0000000183339508 = uRam0000000183339690 ^ uRam00000001833395c0;
  uVar5 = uRam0000000183339520 ^ 0x84222325;
  uVar4 = ((uRam00000001833396e8 ^ uVar5) +
          (ulonglong)((uint)uRam00000001833396e8 & (uint)uVar5) * 2) *
          (param_3 - uRam00000001833395a8);
  uVar4 = (uVar4 | uRam0000000183339670) + (uVar4 & uRam0000000183339670);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar5 = uVar5 ^ param_3;
  uRam0000000183339508 =
       func_0x00018cce66b0((uVar5 | uVar4) + (ulonglong)((uint)uVar5 & (uint)uVar4));
  uRam0000000183339650 = (ulonglong)(uVar2 ^ param_3);
  uRam0000000183339628 =
       (uRam0000000183339628 ^ uRam0000000183339640) + uRam0000000183339650 ^ 0xb732b6a8a269c15e;
  uRam0000000183339548 =
       (uRam0000000183339548 * 0x3cd082cc6980934b ^ uRam0000000183339628) + uRam0000000183339640;
  uRam0000000183339648 = uRam0000000183339548 ^ uRam0000000183339628;
  uVar4 = (uRam00000001833395c8 ^ _UNK_1820717e0) + uRam0000000183339548 + 0xf536447b;
  uVar5 = (uRam0000000183339548 ^ _UNK_1820717e8) + uRam00000001833395c8 + 0xa7d4152c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833395c8 ^ _UNK_1820717e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339548 ^ _UNK_1820717e8;
  uRam0000000183339650 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833395c8 + 0xa7d4152c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183339548 + 0xf536447b));
  uRam00000001833395d8 =
       (uRam00000001833396f8 ^ uRam0000000183339650 & 0x1fffffffffffff) + 0xf7d4777e ^
       0x538fd46d254a4883;
  uRam0000000183339510 =
       (uRam0000000183339510 * 0x7f33dff5e85af1f ^ uRam00000001833395d8) +
       (uRam0000000183339650 & 0x1fffffffffffff);
  uRam00000001833395d8 = uRam0000000183339510 ^ uRam00000001833395d8;
  uRam00000001833396f8 = 0xf7d4777e;
  uVar4 = (uRam0000000183339528 ^ _UNK_1820717f0) + uRam0000000183339508 + 0x354980d1;
  uVar5 = (uRam0000000183339508 ^ _UNK_1820717f8) + uRam0000000183339528 + 0x10a6ace8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183339528 ^ _UNK_1820717f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339508 ^ _UNK_1820717f8;
  uRam00000001833396a0 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183339528 + 0x10a6ace8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183339508 + 0x354980d1));
  uVar5 = uRam00000001833396a0 ^ 0xb8a3de0bb4a29c8;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar5;
  uRam0000000183339620 = (uRam0000000183339620 ^ uVar5) + 0xa1cd0f1c ^ 0xfe2b38729486e03a;
  uRam00000001833395d0 = (uRam00000001833395d0 * 0x5fc3807c0e8b44a9 ^ uRam0000000183339620) + uVar5;
  uRam0000000183339678 = uRam00000001833395d0 ^ uRam0000000183339620;
  uRam0000000183339530 = 0xa1cd0f1c;
  uVar4 = (~uRam0000000183339680 + 0xdbb37ed5) *
          ((uRam00000001833396a8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833396a8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001833395e8) + (uVar4 & uRam00000001833395e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001833396b0 =
       func_0x00018cce66b0((uVar4 | 0x5f915df1) + (ulonglong)((uint)uVar4 & 0x5f915df1));
  uRam00000001833396d8 =
       (uRam00000001833396d8 ^ uRam00000001833396b0 & 0x7ffffffffffffff) - 0xdbb37ed4 ^
       0x8a9f14637f40af26;
  uRam00000001833396a8 =
       (uRam00000001833396a8 * -0x438ad81fb559dd33 ^ uRam00000001833396d8) +
       (uRam00000001833396b0 & 0x7ffffffffffffff);
  uRam00000001833396e0 = uRam00000001833396a8 ^ uRam00000001833396d8;
  uRam00000001833396c0 = 0x244c812c;
  uVar4 = (~uRam00000001833395f0 + 0x7d1efd41) *
          ((uRam0000000183339670 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183339670 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam00000001833395b0) + (uVar4 & uRam00000001833395b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339548 =
       func_0x00018cce66b0((uVar4 | 0xf93cde65) + (ulonglong)((uint)uVar4 & 0xf93cde65));
  uRam00000001833395b0 =
       (uRam00000001833395b0 ^ uRam0000000183339548) - 0x7d1efd40 ^ 0xc93c0265f8baa566;
  uRam0000000183339698 =
       (uRam0000000183339698 * 0x7315e9e9f01d3bcf ^ uRam00000001833395b0) + uRam0000000183339548;
  uRam0000000183339668 = uRam0000000183339698 ^ uRam00000001833395b0;
  uRam0000000183339598 = 0x82e102c0;
  uVar4 = (~uRam00000001833395c8 + 0x7d1efd41) * 0x107036568;
  uVar4 = (uVar4 | uRam0000000183339660) + (uVar4 & uRam0000000183339660);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339580 =
       func_0x00018cce66b0((uVar4 | 0xf93c9fe8) + (ulonglong)((uint)uVar4 & 0xf93c9fe8));
  uVar4 = uRam0000000183339580 & 0xfffffffffffffff8 ^ 0x418d;
  uRam0000000183339690 = uRam0000000183339680 ^ uVar4 ^ 0x7d1f3ecd;
  uRam0000000183339660 = (uRam0000000183339660 ^ uVar4) + 0x7d1f3ecd ^ 0xc2c2af1cae64682d;
  uRam00000001833395a8 = (uRam00000001833395a8 * -0x4e54ce94236954e3 ^ uRam0000000183339660) + uVar4
  ;
  uRam0000000183339650 = uRam00000001833395a8 ^ uRam0000000183339660;
  uRam0000000183339600 = 0x7d1f3ecd;
  uRam0000000183339600 = func_0x00018cce66b0(uRam0000000183339508 ^ 0xfffbfffc4500d809);
  uRam0000000183339520 =
       (uRam0000000183339520 ^ uRam0000000183339600) - 0x80cb2f60 ^ 0x6e34b4f53eb814af;
  uRam0000000183339528 =
       (uRam0000000183339528 * -0x14883bd3cc25ba05 ^ uRam0000000183339520) + uRam0000000183339600;
  uRam0000000183339630 = uRam0000000183339528 ^ uRam0000000183339520;
  uRam00000001833396f0 = 0x7f34d0a0;
  uVar4 = (uRam0000000183339520 ^ _UNK_182071800) + uRam0000000183339660 + 0x842262a8;
  uVar5 = (uRam0000000183339660 ^ _UNK_182071808) + uRam0000000183339520 + 0x80cb2f60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183339520 ^ _UNK_182071800;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339660 ^ _UNK_182071808;
  uRam00000001833396d8 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183339520 + 0x80cb2f60) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183339660 + 0x842262a8));
  uVar4 = (uRam00000001833396d8 << 0x18 | uRam00000001833396d8 >> 0x28) * 0x3e86c119a180a783;
  uVar4 = uVar4 << 0x3c | uVar4 >> 4;
  uRam00000001833395d8 = uRam00000001833396f8 ^ uVar4 ^ 0x80cb70ed;
  uRam0000000183339510 = (uRam0000000183339510 ^ uVar4) + 0x80cb70ed ^ 0xe784470389887a2c;
  uRam00000001833395f8 = (uRam00000001833395f8 * 0x7cc0b85ddac47f8d ^ uRam0000000183339510) + uVar4;
  uRam0000000183339538 = uRam00000001833395f8 ^ uRam0000000183339510;
  uRam0000000183339520 = 0x80cb70ed;
  uVar4 = (uRam00000001833396b0 ^ _UNK_182071810) + uRam0000000183339618 + 0x4e953c8;
  uVar5 = (uRam0000000183339618 ^ _UNK_182071818) + uRam00000001833396b0 + 0x7f34d0a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833396b0 ^ _UNK_182071810;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339618 ^ _UNK_182071818;
  uRam0000000183339510 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833396b0 + 0x7f34d0a0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183339618 + 0x4e953c8));
  uVar4 = (uRam0000000183339510 ^ 0xfffff0ed) -
          ((uRam0000000183339510 ^ 0xfffff0ed) >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = uRam0000000183339510 ^ 0x7f348000 ^
          (ulonglong)
          ((uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2)
  ;
  uRam0000000183339528 = uRam0000000183339570 ^ uVar4 ^ 0x10000418d;
  uRam00000001833396c0 = (uRam00000001833396c0 ^ uVar4) + 0x10000418d ^ 0xc10133cf99824a11;
  uRam0000000183339670 = (uRam0000000183339670 * -0x19db9eaa6da1afc7 ^ uRam00000001833396c0) + uVar4
  ;
  uRam00000001833396f8 = uRam0000000183339670 ^ uRam00000001833396c0;
  uRam00000001833396e0 = 0x418d;
  uVar4 = (~uRam0000000183339630 + 0xa1cd0f1d) *
          ((uRam0000000183339648 ^ 0x73f6545b) +
          (ulonglong)((uint)uRam0000000183339648 & 0x73f6545b) * 2);
  uVar4 = (uVar4 | uRam0000000183339678) + (uVar4 & uRam0000000183339678);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339678 =
       func_0x00018cce66b0((uVar4 | 0xd23b5b47) + (ulonglong)((uint)uVar4 & 0xd23b5b47));
  uRam0000000183339608 =
       (uRam0000000183339608 ^ uRam0000000183339678) + 0x56197862 ^ 0xb8f79fe38b6b7f8c;
  uRam0000000183339690 =
       (uRam0000000183339690 * 0x5eb9431fea174059 ^ uRam0000000183339608) + uRam0000000183339678;
  uRam00000001833396a8 = uRam0000000183339690 ^ uRam0000000183339608;
  uRam00000001833395f8 = 0x56197862;
  uRam00000001833396e8 = func_0x00018cce66b0(uRam0000000183339580 ^ 0x36ff4dbd001a38);
  uRam0000000183339610 =
       (uRam00000001833396e0 ^ uRam00000001833396e8) + 0xa1c4071c ^ 0x7de4d4f7de43123f;
  uRam00000001833396e0 =
       (uRam00000001833396e0 * 0x5e393530347600d1 ^ uRam0000000183339610) + uRam00000001833396e8;
  uRam0000000183339610 = uRam00000001833396e0 ^ uRam0000000183339610;
  uRam0000000183339550 = 0xa1c4071c;
  uVar4 = (uRam0000000183339690 ^ _UNK_182071820) + uRam0000000183339638 + 0x1d83a5bf;
  uVar5 = (uRam0000000183339638 ^ _UNK_182071828) + uRam0000000183339690 + 0x99a1869a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183339690 ^ _UNK_182071820;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183339638 ^ _UNK_182071828;
  uRam0000000183339538 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183339690 + 0x99a1869a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183339638 + 0x1d83a5bf));
  uRam00000001833395e8 =
       (ulonglong)
       (~((uint)(uRam0000000183339538 << 0x1d) |
         ((uint)(uRam0000000183339538 >> 0x20) & 0x7fffffff) >> 3) & 0x99a1869a);
  uRam0000000183339588 = uRam0000000183339588 ^ uRam00000001833395e8 ^ 0x9160bddc202bfabf;
  uRam0000000183339510 =
       (uRam0000000183339510 * 0x24b77e62180e1203 ^ uRam0000000183339588) + uRam00000001833395e8;
  uRam00000001833395b8 = uRam0000000183339510 ^ uRam0000000183339588;
  uRam00000001833396a0 = 0;
  uVar4 = ((uRam0000000183339680 ^ 0x842262a8) +
          (ulonglong)((uint)uRam0000000183339680 & 0x842262a8) * 2) * -uRam0000000183339590;
  uVar4 = (uVar4 | uRam0000000183339528) + (uVar4 & uRam0000000183339528);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339620 =
       func_0x00018cce66b0((uVar4 | 0x842262a8) + (ulonglong)((uint)uVar4 & 0x842262a8));
  uVar4 = (uRam0000000183339620 << 0x3b | uRam0000000183339620 >> 5) >> 0x25 |
          (uRam0000000183339620 >> 5) << 0x1b;
  uRam0000000183339628 = uRam00000001833396f8 ^ uVar4 ^ 0x418d;
  uRam0000000183339500 = (uRam0000000183339500 ^ uVar4) + 0x418d ^ 0x7b69b7f8e1f12557;
  uRam0000000183339558 = (uRam0000000183339558 * -0x352cf9821317c09d ^ uRam0000000183339500) + uVar4
  ;
  uRam00000001833395a0 = uRam0000000183339558 ^ uRam0000000183339500;
  uRam0000000183339608 = 0x418d;
  uVar4 = ((uRam00000001833396e8 ^ 0x842262a8) +
          (ulonglong)((uint)uRam00000001833396e8 & 0x842262a8) * 2) * -uRam0000000183339580;
  uVar4 = (uVar4 | uRam0000000183339548) + (uVar4 & uRam0000000183339548);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339638 =
       func_0x00018cce66b0((uVar4 | 0x842262a8) + (ulonglong)((uint)uVar4 & 0x842262a8));
  uVar4 = uRam0000000183339638 >> 1 | uRam0000000183339638;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183339638;
  uRam0000000183339688 = uRam0000000183339588 ^ uVar4 ^ 0x418d;
  uRam0000000183339590 = (uRam0000000183339590 ^ uVar4) + 0x418d ^ 0x30c656a28d1f58a2;
  uRam0000000183339648 = (uRam0000000183339648 * -0x3858a38acfaacfe7 ^ uRam0000000183339590) + uVar4
  ;
  uRam00000001833396b8 = uRam0000000183339648 ^ uRam0000000183339590;
  uRam0000000183339568 = 0x418d;
  uVar4 = (~uRam0000000183339538 + 0x7114675f) * 0xf5368608;
  uVar4 = (uVar4 | uRam0000000183339690) + (uVar4 & uRam0000000183339690);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183339618 =
       func_0x00018cce66b0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam0000000183339610 = uRam0000000183339610 ^ uRam0000000183339618 ^ 0x29724323b4d26f60;
  uRam0000000183339518 =
       (uRam0000000183339518 * 0x7309c49a8c5364ff ^ uRam0000000183339610) + uRam0000000183339618;
  uRam0000000183339650 = uRam0000000183339518 ^ uRam0000000183339610;
  uRam00000001833396f0 = 0;
  uVar4 = (uRam00000001833396b0 ^ 0x842262a8) + uRam0000000183339510 + 0x842262a8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833396b0 ^ 0x842262a8;
  uVar5 = ((uRam0000000183339510 + uRam00000001833396b0) * 0x2000 |
          uRam0000000183339510 + uRam00000001833396b0 >> 0x33) ^ uRam0000000183339510;
  uRam00000001833396c8 =
       func_0x00018cce66b0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001833396b0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183339510 + 0x842262a8));
  uVar4 = uRam00000001833396c8 * -0x15270f9a1cf7c493;
  uRam0000000183339590 = uRam00000001833395c8 ^ uVar4 ^ 0x418d;
  uRam00000001833395a0 = (uRam00000001833395a0 ^ uVar4) + 0x418d ^ 0x4dcb56806017a889;
  uRam00000001833395a8 = (uRam00000001833395a8 * -0x344736a9af75b491 ^ uRam00000001833395a0) + uVar4
  ;
  uRam00000001833396f0 = uRam00000001833395a8 ^ uRam00000001833395a0;
  uRam0000000183339648 = 0x418d;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xdd5a,0x26f);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ccdd41e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18206f908 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eA; avp (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18cce6740, runtime 6ffff48f6740) =====

void FUN_18cce6740(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018cce678b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182071970 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eA; avq (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18cce7750, runtime 6ffff48f7750) =====

void FUN_18cce7750(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cce77d9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182071f30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



