// ===== STITCHED CORPUS: sixtwo.eA =====
// handlers: 6  continuation blocks: 57  unresolved table targets: 0
// tables not in tables.json: ['0x2071770', '0x2071778', '0x2071780', '0x2071788', '0x2071790', '0x2071798', '0x20717a0', '0x20717a8', '0x20717b0', '0x20717b8', '0x20717c0', '0x20717c8', '0x20717d0', '0x20717d8', '0x20717e0', '0x20717e8', '0x20717f0', '0x20717f8', '0x2071800', '0x2071808']

// ===== Lsixtwo/eA; _5e7cb2aeed2a4e96452d61e493ee8585 ()V (handler @ image 18ccea460, runtime 6ffff48fa460) =====

void FUN_18ccea460(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xdd5a,0x26f)
      /* POOL[0xdd5a,0x26f]: acketAccessor | setOnGround | EAkuj | sixtwo/eA | lClZL | avn | field_6250 | field_6212 | oOQKe | GMvGu | sixtwo/eC | ldHfb | avo | method_10214 | uYjwj | method_5724 | (FLnet/minecraft/class_243;)V | method_10216 | method_10215 | XiPDK | Kqwum | avw | avT | xVfhc | field_7478 | method_1033 | LSmOj | raYeS | EKwun | VCxLS | dHwGI | fjDMc | MoNPF | avv | avt | (Lnet/minecraft/class_2828;D)V | avy | mixin/accessors/LocalPlayerAccessor | setY | method_36172 | net/minecraft/class_2828$class_2830 | setPositionReminder | method_12271 | method_12270 | method_12273 | field_5976 | (DDDFFZZ)V | net/mine */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xdd5a,0x26f)
      /* POOL[0xdd5a,0x26f]: acketAccessor | setOnGround | EAkuj | sixtwo/eA | lClZL | avn | field_6250 | field_6212 | oOQKe | GMvGu | sixtwo/eC | ldHfb | avo | method_10214 | uYjwj | method_5724 | (FLnet/minecraft/class_243;)V | method_10216 | method_10215 | XiPDK | Kqwum | avw | avT | xVfhc | field_7478 | method_1033 | LSmOj | raYeS | EKwun | VCxLS | dHwGI | fjDMc | MoNPF | avv | avt | (Lnet/minecraft/class_2828;D)V | avy | mixin/accessors/LocalPlayerAccessor | setY | method_36172 | net/minecraft/class_2828$class_2830 | setPositionReminder | method_12271 | method_12270 | method_12273 | field_5976 | (DDDFFZZ)V | net/mine */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cce77d9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182071f30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xcccd44d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cccd44d(void)

{
  FUN_190ddce00();
  (*_DAT_18206c748)();
  return;
}


// ----- block @ rva 0xccd1a4b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccd1a4b(void)

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


// ----- block @ rva 0xccd2d83 -----

void FUN_18ccd2d83(void)

{
  return;
}


// ----- block @ rva 0xccd37a2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccd37a2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18206e918)();
  return;
}


// ----- block @ rva 0xccd4a3d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccd4a3d(void)

{
  char in_AL;
  
  switch(in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xccd51f4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccd51f4(void)

{
  char in_AL;
  
  switch(in_AL == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xccd65ce -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccd65ce(void)

{
  FUN_190dd9df0();
  (*_DAT_18206cbe8)();
  return;
}


// ----- block @ rva 0xccd6897 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccd6897(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18206e4c8)();
  return;
}


// ----- block @ rva 0xccd7370 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccd7370(void)

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


// ----- block @ rva 0xccd87ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccd87ac(void)

{
  (*_DAT_18206e6c8)();
  return;
}


// ----- block @ rva 0xccdad13 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccdad13(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18206e4c8)();
  return;
}


// ----- block @ rva 0xccdad3f -----

void FUN_18ccdad3f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xccdd421 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccdd421(void)

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


// ----- block @ rva 0xccdd5c2 -----

void FUN_18ccdd5c2(void)

{
  return;
}


// ----- block @ rva 0xccddaf2 -----

undefined8 thunk_FUN_18ccdd5ab(void)

{
  longlong *unaff_R14;
  
  (**(code **)(unaff_R14 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xccddd5e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccddd5e(void)

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


// ----- block @ rva 0xccdf400 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccdf400(void)

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


// ----- block @ rva 0xccdf657 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccdf657(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcce0036 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce0036(void)

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


// ----- block @ rva 0xcce1066 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce1066(void)

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


// ----- block @ rva 0xcce11f9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce11f9(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcce21ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce21ce(void)

{
  longlong in_stack_00000048;
  
  switch(in_stack_00000048 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcce4aff -----

undefined8 thunk_FUN_18ccde5cc(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xcce678e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce678e(void)

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


// ----- block @ rva 0xcce67e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce67e2(void)

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


// ----- block @ rva 0xcce6850 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce6850(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182071e58)();
  return;
}


// ----- block @ rva 0xcce6991 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce6991(void)

{
  FUN_190ddfc90();
  (*_DAT_182071be8)();
  return;
}


// ----- block @ rva 0xcce6af5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce6af5(void)

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


// ----- block @ rva 0xcce6b4d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce6b4d(void)

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


// ----- block @ rva 0xcce7044 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce7044(void)

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


// ----- block @ rva 0xcce727b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce727b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182071e58)();
  return;
}


// ----- block @ rva 0xcce7416 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce7416(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_182071e98)();
  return;
}


// ----- block @ rva 0xcce75b2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce75b2(void)

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


// ----- block @ rva 0xcce7655 -----

void FUN_18cce7655(void)

{
  return;
}


// ----- block @ rva 0xcce7664 -----

void FUN_18cce7664(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xcce77dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce77dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_182072dc8)();
  return;
}


// ----- block @ rva 0xcce7c4b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce7c4b(void)

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


// ----- block @ rva 0xcce80f8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce80f8(void)

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


// ----- block @ rva 0xcce83e2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce83e2(void)

{
  (*_DAT_182072cd8)();
  return;
}


// ----- block @ rva 0xcce85da -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce85da(void)

{
  (*_DAT_182072ca8)();
  return;
}


// ----- block @ rva 0xcce8614 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cce8614(void)

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


// ----- block @ rva 0xcce8e15 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce8e15(void)

{
  FUN_190dd72e0();
  (*_DAT_182072aa8)();
  return;
}


// ----- block @ rva 0xcce9094 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce9094(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182072c48)();
  return;
}


// ----- block @ rva 0xcce926a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cce926a(void)

{
  FUN_190ddfc90();
  (*_DAT_182072778)();
  return;
}


// ----- block @ rva 0xcce9776 -----

void FUN_18cce9776(void)

{
  return;
}


// ----- block @ rva 0xccea1ae -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccea1ae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1820727e8)();
  return;
}


// ----- block @ rva 0xccea2b4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccea2b4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182072798)();
  return;
}


// ----- block @ rva 0xccea54b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ccea5a1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ccea54b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xccea8a1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccea8a1(void)

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


// ----- block @ rva 0xccec02c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ccec043 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ccec02c(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xccf4285 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccf4285(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 5;
  uStack0000000000000078 = 0x10;
  uStack0000000000000070 =
       (ulonglong)
       CONCAT24((short)((ulonglong)unaff_R14 >> 0x30),(int)(char)((ulonglong)unaff_R14 >> 0x10));
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000068 < 0 || iVar1 <= iStack0000000000000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xccf44c1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ccf44c1(void)

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


// ----- block @ rva 0xccf45f3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ccf45f3(void)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000058;
  int in_stack_00000068;
  
  lVar3 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  bVar1 = *(byte *)(lVar3 + in_stack_00000068);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar7 = (_DAT_183339798 ^ _DAT_182074890) + _DAT_1833398b0 + 0xe63985c;
  uVar8 = (_DAT_1833398b0 ^ _UNK_182074898) + _DAT_183339798 + 0x98402f3a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183339798 ^ _DAT_182074890;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833398b0 ^ _UNK_182074898;
  _DAT_183339888 =
       func_0x00018cd02ed0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183339798 + 0x98402f3a) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833398b0 + 0xe63985c));
  uVar7 = (_DAT_183339888 ^ 0x5239b14010000000) & 0xfffffffff0000000;
  _DAT_183339838 = (_DAT_183339838 ^ uVar7) + 0x9a41bf7b ^ 0xc9f9483949f8f1c3;
  _DAT_183339790 = (_DAT_183339790 * -0x6f741621cf6f4523 ^ _DAT_183339838) + uVar7;
  _DAT_1833398b8 = _DAT_183339790 ^ _DAT_183339838;
  _DAT_183339880 = 0x9a41bf7b;
  uVar7 = (_DAT_1833398b8 ^ _DAT_1820748a0) + _DAT_183339800 + 0x84222325;
  uVar8 = (_DAT_183339800 ^ _UNK_1820748a8) + _DAT_1833398b8 + 0xf1e847d2;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833398b8 ^ _DAT_1820748a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183339800 ^ _UNK_1820748a8;
  _DAT_183339830 =
       func_0x00018cd02ed0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1833398b8 + 0xf1e847d2) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183339800 + 0x84222325));
  _DAT_183339700 = _DAT_183339810 * 0x3bd070a24628f4df;
  _DAT_183339748 = _DAT_183339748 - 0xf1e847d2 ^ 0x66388e1435e7a6ef;
  _DAT_183339810 = _DAT_183339700 ^ _DAT_183339748;
  _DAT_183339850 = 0xe17b82e;
  _DAT_183339790 = func_0x00018cd02ed0(_DAT_183339738 ^ 0xff9bffad08004971);
  _DAT_1833398b0 = _DAT_183339870 ^ _DAT_183339790 ^ 0xf1e848d1;
  _DAT_183339848 = (_DAT_183339848 ^ _DAT_183339790) + 0xf1e848d1 ^ 0xd3968bbbe350b250;
  _DAT_1833397b0 = (_DAT_1833397b0 * 0x136f5451cdf8beb5 ^ _DAT_183339848) + _DAT_183339790;
  _DAT_183339800 = _DAT_1833397b0 ^ _DAT_183339848;
  _DAT_183339700 = 0xf1e848d1;
  _DAT_183339710 = func_0x00018cd02ed0(0xffc4000c2017208e);
  uVar7 = (_DAT_183339710 & 0x7fffffffffffffff) >> 1 | _DAT_183339710 & 0x7fffffffffffffff;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183339710 & 0x7fffffffffffffff;
  _DAT_183339890 = (_DAT_183339890 ^ uVar7) - 0x9095efd7 ^ 0x2d83d37881169e51;
  _DAT_183339810 = (_DAT_183339810 * 0x73abb5074aa5a6c5 ^ _DAT_183339890) + uVar7;
  _DAT_1833398c8 = _DAT_183339810 ^ _DAT_183339890;
  _DAT_1833398d0 = 0x6f6a1029;
  uVar7 = (~_DAT_183339810 + 0x9095efd8) *
          ((_DAT_1833397f8 ^ 0x842223da) + (ulonglong)((uint)_DAT_1833397f8 & 0x842223da) * 2);
  uVar7 = (uVar7 | _DAT_183339718) + (uVar7 & _DAT_183339718);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183339828 = func_0x00018cd02ed0((uVar7 | 0x14b7cc0d) + (ulonglong)((uint)uVar7 & 0x14b7cc0d))
  ;
  uVar7 = _DAT_183339828 ^ 0x9095efd7;
  _DAT_183339710 = _DAT_183339818 ^ uVar7 ^ 0x9095f0d6;
  _DAT_183339730 = (_DAT_183339730 ^ uVar7) + 0x9095f0d6 ^ 0x8c3d3fef493744ba;
  _DAT_183339850 = (_DAT_183339850 * 0x7a86804ce0ea7df5 ^ _DAT_183339730) + uVar7;
  _DAT_1833397d8 = _DAT_183339850 ^ _DAT_183339730;
  _DAT_1833397c0 = 0x9095f0d6;
  uVar7 = (~_DAT_183339730 + 0xb3fc2f65) *
          ((_DAT_183339818 ^ uVar7 ^ 0x8ef66c88) +
          (ulonglong)((uint)_DAT_183339710 & 0x1e639c5e) * 2);
  uVar7 = (uVar7 | _DAT_1833398b0) + (uVar7 & _DAT_1833398b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183339700 = func_0x00018cd02ed0((uVar7 | 0xad9fb33a) + (ulonglong)((uint)uVar7 & 0xad9fb33a))
  ;
  uVar7 = _DAT_183339700 ^ 0xb3fc2f64;
  _DAT_183339810 = _DAT_183339838 ^ uVar7 ^ 0x14e3deedf;
  _DAT_183339800 = (_DAT_183339800 ^ uVar7) + 0x14e3deedf ^ 0xd66b55ccc84a4944;
  _DAT_183339850 = (_DAT_183339850 * 0x6c5358d49e958b6b ^ _DAT_183339800) + uVar7;
  _DAT_1833398f8 = _DAT_183339850 ^ _DAT_183339800;
  _DAT_1833397d8 = 0x4e3deedf;
  uVar7 = (_DAT_183339810 ^ _DAT_1820748b0) + _DAT_1833398a8 + 0x1e639c5e;
  uVar8 = (_DAT_1833398a8 ^ _UNK_1820748b8) + _DAT_183339810 + 0xb3fc2f64;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183339810 ^ _DAT_1820748b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1833398a8 ^ _UNK_1820748b8;
  _DAT_183339740 =
       func_0x00018cd02ed0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183339810 + 0xb3fc2f64) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1833398a8 + 0x1e639c5e));
  _DAT_1833398a8 = (_DAT_1833398a8 ^ _DAT_183339740) + 0x92402f60 ^ 0x11dc5e268220a7f1;
  _DAT_183339708 = (_DAT_183339708 * -0x4226b2e91c2021fd ^ _DAT_1833398a8) + _DAT_183339740;
  _DAT_183339890 = _DAT_183339708 ^ _DAT_1833398a8;
  _DAT_183339888 = 0x92402f60;
  uVar7 = (~_DAT_1833397d8 + 0x24805ec1) *
          ((_DAT_1833398a0 ^ 0xad9fb33a) + (ulonglong)((uint)_DAT_1833398a0 & 0xad9fb33a) * 2);
  uVar7 = (uVar7 | _DAT_1833398d0) + (uVar7 & _DAT_1833398d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183339710 = func_0x00018cd02ed0((uVar7 | 0x891fedfa) + (ulonglong)((uint)uVar7 & 0x891fedfa))
  ;
  uVar7 = ((_DAT_183339710 & 0xffffffff) * (ulonglong)_DAT_1820748c0 +
           ((ulonglong)_DAT_1820748d0 * (_DAT_183339710 & 0xffffffff) +
            (_DAT_183339710 >> 0x20) * (ulonglong)_DAT_1820748c0 << 0x20) ^ 0x29bd901f) &
          0x7fffffffffffffff;
  _DAT_1833398f8 = _DAT_183339788 ^ uVar7 ^ 0x4e3deedf;
  _DAT_183339728 = (_DAT_183339728 ^ uVar7) + 0x4e3deedf ^ 0x17eb5aadcb68e185;
  _DAT_183339778 = (_DAT_183339778 * -0x4c1393d6ba5d019b ^ _DAT_183339728) + uVar7;
  _DAT_183339828 = _DAT_183339778 ^ _DAT_183339728;
  _DAT_183339758 = _DAT_1833398d8 ^ 0x4e3deedf;
  _DAT_183339808 = 0x4e3deedf;
  uVar7 = (_DAT_183339898 ^ _DAT_1820748e0) + _DAT_183339880 + 0xca1fcdfa;
  uVar8 = (_DAT_183339880 ^ _UNK_1820748e8) + _DAT_183339898 + 0x4e3deedf;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183339898 ^ _DAT_1820748e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183339880 ^ _UNK_1820748e8;
  _DAT_183339880 =
       func_0x00018cd02ed0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183339898 + 0x4e3deedf) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183339880 + 0xca1fcdfa));
  _DAT_183339888 = _DAT_183339880 & 0x7fffffffffffffff;
  _DAT_1833397c0 = _DAT_1833397c0 ^ _DAT_183339888 ^ 0xb409e1aaf064a8af;
  _DAT_1833398c0 = (_DAT_1833398c0 * 0x1e6bdcfd59376447 ^ _DAT_1833397c0) + _DAT_183339888;
  _DAT_183339848 = _DAT_1833398c0 ^ _DAT_1833397c0;
  _DAT_1833397b0 = 0;
  _DAT_1833398b0 = func_0x00018cd02ed0(_DAT_183339818 ^ 0x230084360021b5);
  uVar7 = (_DAT_1833398b0 ^ 0xf0) & 0xfffffffffffffff0;
  _DAT_1833397d8 = _DAT_183339740 ^ uVar7 ^ 0xff;
  _DAT_183339818 = (_DAT_183339818 ^ uVar7) + 0xff ^ 0x6311d55da7a86494;
  _DAT_183339708 = (_DAT_183339708 * 0x37e8bd37e970b6d5 ^ _DAT_183339818) + uVar7;
  _DAT_1833397b0 = _DAT_183339708 ^ _DAT_183339818;
  _DAT_1833398f8 = 0xff;
  uVar7 = (_DAT_1833397a0 ^ _DAT_1820748f0) + _DAT_183339770 + 0x1e639c5e;
  uVar8 = (_DAT_183339770 ^ _UNK_1820748f8) + _DAT_1833397a0 + 0xffffffff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1833397a0 ^ _DAT_1820748f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183339770 ^ _UNK_1820748f8;
  _DAT_1833397f8 =
       func_0x00018cd02ed0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1833397a0 + 0xffffffff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183339770 + 0x1e639c5e));
  _DAT_1833397a0 = (_DAT_1833397a0 ^ _DAT_183339808) + 0x65be4084 ^ 0xb893067bbefa8586;
  _DAT_183339830 = (_DAT_183339830 * -0x6e3098ecf6a9fbeb ^ _DAT_1833397a0) + _DAT_183339808;
  _DAT_183339748 = _DAT_183339830 ^ _DAT_1833397a0;
  _DAT_1833397c0 = 0x65be4084;
  uVar7 = (~_DAT_1833397d0 + 0x65be4085) *
          ((_DAT_183339828 ^ 0x1e639c5e) + (ulonglong)((uint)_DAT_183339828 & 0x1e639c5e) * 2);
  uVar7 = (uVar7 | _DAT_1833397b0) + (uVar7 & _DAT_1833397b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1833397e8 = func_0x00018cd02ed0((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda))
  ;
  _DAT_183339700 = _DAT_183339700 ^ _DAT_1833398a0 ^ 0x1646e73142cb66b2;
  _DAT_183339780 = (_DAT_183339780 * 0xefd3552c34b8385 ^ _DAT_183339700) + _DAT_1833398a0;
  _DAT_183339798 = _DAT_183339780 ^ _DAT_183339700;
  _DAT_183339728 = _DAT_183339738;
  _DAT_183339818 = 0;
  uVar7 = (~_DAT_1833398e8 + 0x8a41bb7a) *
          ((_DAT_183339888 ^ 0xe63985c) + (ulonglong)((uint)_DAT_183339888 & 0xe63985c) * 2);
  uVar7 = (uVar7 | _DAT_1833398d0) + (uVar7 & _DAT_1833398d0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183339768 = func_0x00018cd02ed0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  uVar7 = (_DAT_183339768 >> 0x17) * 0x6701f1d458800000;
  _DAT_1833397c8 = _DAT_1833397c8 ^ uVar7 ^ 0x871d28b03a039c1a;
  _DAT_183339720 = (_DAT_183339720 * 0x721a72732da5f109 ^ _DAT_1833397c8) + uVar7;
  _DAT_183339858 = _DAT_183339720 ^ _DAT_1833397c8;
  _DAT_183339710 = 0;
  uVar4 = (ulonglong)bVar1 << 0x30;
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = in_stack_00000058 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_182074900,_DAT_1800170c0);
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar7 = uVar8 + _DAT_183339820;
  if (auVar6._4_4_ < 0) {
    uVar7 = _DAT_183339828 ^ uVar8;
  }
  _DAT_183339718 = func_0x00018cd02ed0(SUB161(auVar5 ^ _DAT_182074900,5) ^ uVar7);
  uVar7 = _DAT_183339718 - (_DAT_183339718 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = ~(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_183339718)
          & in_stack_00000058;
  _DAT_1833397e8 = uVar4 | in_stack_00000058;
  _DAT_1833397f8 = (_DAT_1833397f8 ^ uVar7) + _DAT_1833397e8 ^ 0x1b866a0f8c1fdb86;
  _DAT_1833398b8 = (_DAT_1833398b8 * 0x175174aea15cd581 ^ _DAT_1833397f8) + uVar7;
  _DAT_183339800 = _DAT_1833398b8 ^ _DAT_1833397f8;
  iVar2 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar2 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcd0246c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018cd024af */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18cd0246c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xcd0266f -----

void thunk_FUN_18ccec7a8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xcd02789 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18cd02789(void)

{
  char cVar1;
  code *in_RAX;
  
  cVar1 = (*in_RAX)();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xcd02ce7 -----

void FUN_18cd02ce7(void)

{
  return;
}

