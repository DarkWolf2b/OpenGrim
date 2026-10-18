/* deep-tier bounded decompilation from JNI exports (pyghidra) */
// ===== Java_native_Loader_bootstrap @ 183f5db30 (depth 0) =====
/* decompile failed: Exception while decompiling 183f5db30: process: timeout
 */

// ===== Java_native_Loader_initClass @ 183f561b0 (depth 0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Java_native_Loader_initClass(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined *unaff_RBX;
  ulonglong unaff_RDI;
  ulonglong uVar9;
  ulonglong unaff_R15;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  ulonglong uVar15;
  undefined1 auVar14 [16];
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar23;
  undefined1 auVar22 [16];
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [16];
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  ulonglong uStack_138;
  ulonglong uStack_130;
  undefined1 auStack_128 [16];
  ulonglong uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  char acStack_f1 [177];
  
                    /* 0x3f561b0  2  Java_native_Loader_initClass */
  puVar4 = auStack_148;
  acStack_f1[1] = -2;
  acStack_f1[2] = -1;
  acStack_f1[3] = -1;
  acStack_f1[4] = -1;
  acStack_f1[5] = -1;
  acStack_f1[6] = -1;
  acStack_f1[7] = -1;
  acStack_f1[8] = -1;
  auStack_148 = (undefined1  [16])0x0;
  uStack_138 = 0;
  uStack_130 = 0xf;
  FUN_190dbc7d0(&uStack_1a0,param_1,param_3,acStack_f1);
  uVar6 = uStack_188;
  auStack_148._0_8_ = CONCAT71(uStack_19f,uStack_1a0);
  auStack_148._8_8_ = uStack_198;
  uStack_138 = uStack_190;
  uStack_130 = uStack_188;
  uStack_190 = 0;
  uStack_188 = 0xf;
  uStack_1a0 = 0;
  switch(acStack_f1[0] == '\0' || (param_3 == 0 || param_1 == 0)) {
  case false:
    FUN_1835157e0();
    iVar3 = func_0x000180002214(0x183043540);
    switch(iVar3 == 0) {
    case false:
      FUN_180001824(5);
code_r0x000183f590e0:
      uRam000000018304358c = 0x7ffffffe;
      FUN_180001824(6);
code_r0x000183f590f6:
      switch(unaff_R15 == 0) {
      case false:
        iVar3 = FUN_1800153e0(auStack_128._0_8_);
        switch(iVar3 == 0) {
        case false:
code_r0x000183f5912e:
          switch(param_3 == unaff_RDI) {
          case false:
            lVar7 = *(longlong *)(param_3 + 8);
            lVar5 = lVar7 + 0x10;
            if (0xf < *(ulonglong *)(lVar7 + 0x28)) {
              lVar5 = *(longlong *)(lVar7 + 0x10);
            }
            uVar6 = (ulonglong)(unaff_R15 == *(ulonglong *)(lVar7 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000183f5916d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_RBX + uVar6 * 8))(uVar6,lVar5);
            return;
          }
          goto code_r0x000183f59186;
        }
      }
      switch(param_3 == 0) {
      case true:
        goto code_r0x000183f59186;
      }
      uStack_150 = auStack_178._0_8_;
      plVar8 = *(longlong **)(param_3 + 0x68);
      switch(plVar8 == (longlong *)0x0) {
      case true:
        goto code_r0x000183f5d942;
      }
      break;
    case true:
      uStack_100 = CONCAT44(uStack_100._4_4_,uRam000000018304358c);
      uVar6 = (uRam000000018305e448 ^ 0xc811daf9) + uRam000000018305e378 + 0xc811daf9;
      uVar9 = (uRam000000018305e378 ^ 0xde849dbd) + uRam000000018305e448 + 0xde849dbd;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e448 ^ 0xc811daf9;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e378 ^ 0xde849dbd;
      uRam000000018305e220 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e448 + 0xde849dbd)
                               ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                 (uRam000000018305e378 + 0xc811daf9));
      uVar6 = (uRam000000018305e220 ^ 0x92840421) << 5 | uRam000000018305e220 >> 0x3b;
      uRam000000018305e4d8 = (uRam000000018305e4d8 ^ uVar6) + 0xdeb7fdfd ^ 0xd897d1690ba94e8;
      uRam000000018305e208 =
           (uRam000000018305e208 * 0x7775caee2bb495f5 ^ uRam000000018305e4d8) + uVar6;
      uRam000000018305e270 = uRam000000018305e208 ^ uRam000000018305e4d8;
      uRam000000018305e428 = uRam000000018305e2c8 ^ 0xdeb7fdfd;
      uRam000000018305e358 = 0xdeb7fdfd;
      uVar6 = (uRam000000018305e2a0 ^ _UNK_1800f61b0) + uRam000000018305e2f0 + 0x84222325;
      uVar9 = (uRam000000018305e2f0 ^ _UNK_1800f61b8) + uRam000000018305e2a0 + 0xe2f1f8d0;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e2a0 ^ _UNK_1800f61b0;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e2f0 ^ _UNK_1800f61b8;
      uRam000000018305e450 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e2a0 + 0xe2f1f8d0)
                               ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                 (uRam000000018305e2f0 + 0x84222325));
      uRam000000018305e308 =
           (uRam000000018305e308 ^ uRam000000018305e450) - 0xe2f1f8d0 ^ 0x33e3fd0abedca572;
      uRam000000018305e500 =
           (uRam000000018305e500 * -0x49b34c48d028cf27 ^ uRam000000018305e308) +
           uRam000000018305e450;
      uRam000000018305e3d0 = uRam000000018305e500 ^ uRam000000018305e308;
      uRam000000018305e210 = 0x1d0e0730;
      uRam000000018305e4d8 = func_0x0001840f4950(uRam000000018305e2a8 ^ 0xb40089b600caa8);
      unaff_R15 = 0x5555555555555555;
      uVar6 = uRam000000018305e4d8 - (uRam000000018305e4d8 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      unaff_RDI = 0x101010101010101;
      uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
              uRam000000018305e4d8) << 2 | uRam000000018305e4d8 >> 0x3e;
      uRam000000018305e330 = uRam000000018305e2f8 ^ uVar6 ^ 0x7fffffff;
      uRam000000018305e450 = (uRam000000018305e450 ^ uVar6) + 0x7fffffff ^ 0x139626d6ee82b5a2;
      uRam000000018305e458 =
           (uRam000000018305e458 * -0x4c825aee7a8491d3 ^ uRam000000018305e450) + uVar6 ^
           uRam000000018305e450;
      uRam000000018305e390 = 0x7fffffff;
      unaff_RBX = (undefined *)0xfbdddcda;
      uVar6 = (uRam000000018305e200 ^ _UNK_1800f61c0) + uRam000000018305e298 + 0xfbdddcda;
      uVar9 = (uRam000000018305e298 ^ _UNK_1800f61c8) + uRam000000018305e200 + 0x201b0510;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e200 ^ _UNK_1800f61c0;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e298 ^ _UNK_1800f61c8;
      uRam000000018305e240 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e200 + 0x201b0510)
                               ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                 (uRam000000018305e298 + 0xfbdddcda));
      uVar6 = (ulonglong)(((uint)uRam000000018305e240 ^ 0x5fe4faef) & 0x7fffffff);
      uRam000000018305e528 = uRam000000018305e4f0 ^ uVar6 ^ 0xa01b050f;
      uRam000000018305e5e8 = (uRam000000018305e5e8 ^ uVar6) + 0xa01b050f ^ 0x62867df2f667d06f;
      uRam000000018305e590 =
           (uRam000000018305e590 * 0x7d994704f8d050b5 ^ uRam000000018305e5e8) + uVar6;
      uRam000000018305e2e8 = uRam000000018305e590 ^ uRam000000018305e5e8;
      uRam000000018305e420 = 0xa01b050f;
      uVar6 = (uRam000000018305e558 ^ _UNK_1800f61d0) + uRam000000018305e3f8 + 0x2439262a;
      uVar9 = (uRam000000018305e3f8 ^ _UNK_1800f61d8) + uRam000000018305e558 + 0xdfe4faf0;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e558 ^ _UNK_1800f61d0;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e3f8 ^ _UNK_1800f61d8;
      uRam000000018305e578 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e558 + 0xdfe4faf0)
                               ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                 (uRam000000018305e3f8 + 0x2439262a));
      uVar6 = uRam000000018305e578 >> 1 | uRam000000018305e578;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
              0x20 ^ uRam000000018305e578;
      uRam000000018305e510 = uRam000000018305e5d0 ^ uVar6 ^ 0x17fffffff;
      uRam000000018305e380 = (uRam000000018305e380 ^ uVar6) + 0x17fffffff ^ 0xaafb18c0ff6f92a5;
      uRam000000018305e338 =
           (uRam000000018305e338 * 0x217494d735663f11 ^ uRam000000018305e380) + uVar6;
      uRam000000018305e438 = uRam000000018305e338 ^ uRam000000018305e380;
      uRam000000018305e3a0 = 0x7fffffff;
      uRam000000018305e3e0 = func_0x0001840f4950(uRam000000018305e370 + 0x3c0017690052ff ^ 0x1f);
      uRam000000018305e4b0 =
           (uRam000000018305e4b0 ^ uRam000000018305e3e0) - 0x9c4de79c ^ 0xe12953ee6950dcae;
      uRam000000018305e568 =
           (uRam000000018305e568 * -0x7964f71e2769a507 ^ uRam000000018305e4b0) +
           uRam000000018305e3e0;
      uRam000000018305e528 = uRam000000018305e568 ^ uRam000000018305e4b0;
      uRam000000018305e388 = 0x63b21864;
      uVar6 = func_0x0001840f4950(uRam000000018305e278 ^ 0x37002346006f9c);
      uVar6 = (uVar6 ^ 0x78000000) & 0xfffffffff8000000;
      uRam000000018305e270 = uRam000000018305e4d0 ^ uVar6 ^ 0x11c4de79b;
      uRam000000018305e2a0 = (uRam000000018305e2a0 ^ uVar6) + 0x11c4de79b ^ 0x6a12a51a65727873;
      uRam000000018305e5e0 =
           (uRam000000018305e5e0 * -0x368666713a0d205d ^ uRam000000018305e2a0) + uVar6;
      uRam000000018305e438 = uRam000000018305e5e0 ^ uRam000000018305e2a0;
      uRam000000018305e3b0 = 0x1c4de79b;
      uRam000000018305e508 = func_0x0001840f4950(uRam000000018305e250 + 0x34ffd9620046ff ^ 0x65);
      uVar6 = uRam000000018305e508 ^ 0xdefffdff;
      uRam000000018305e488 = uRam000000018305e448 ^ uVar6 ^ 0x15f928f3b;
      uRam000000018305e300 = (uRam000000018305e300 ^ uVar6) + 0x15f928f3b ^ 0x67fa7af753fe7a84;
      uRam000000018305e360 =
           (uRam000000018305e360 * 0x3ae1d71ad3801b6f ^ uRam000000018305e300) + uVar6;
      uRam000000018305e328 = uRam000000018305e360 ^ uRam000000018305e300;
      uRam000000018305e2c0 = 0x5f928f3b;
      uVar6 = (uRam000000018305e520 ^ _UNK_1800f61e0) + uRam000000018305e400 + 0x5a95ded8;
      uVar9 = (uRam000000018305e400 ^ _UNK_1800f61e8) + uRam000000018305e520 + 0x80da913e;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e520 ^ _UNK_1800f61e0;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e400 ^ _UNK_1800f61e8;
      uRam000000018305e5e0 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e520 + 0x80da913e)
                               ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                 (uRam000000018305e400 + 0x5a95ded8));
      uRam000000018305e480 =
           (uRam000000018305e480 ^ uRam000000018305e5e0) + 0x5e6d6cc3 ^ 0x15fc793c1c18cefe;
      uRam000000018305e478 =
           (uRam000000018305e478 * -0x496914d6ca50f1e9 ^ uRam000000018305e480) +
           uRam000000018305e5e0;
      uRam000000018305e3c8 = uRam000000018305e478 ^ uRam000000018305e480;
      uRam000000018305e4e0 = uRam000000018305e5b0 ^ 0x5e6d6cc3;
      uRam000000018305e5c0 = 0x5e6d6cc3;
      uVar6 = (~uRam000000018305e5e8 + 0x1252279) *
              ((uRam000000018305e360 ^ 0xda4f4fe6) +
              (ulonglong)((uint)uRam000000018305e360 & 0xda4f4fe6) * 2);
      uVar6 = (uVar6 | uRam000000018305e2a0) + (uVar6 & uRam000000018305e2a0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e588 =
           func_0x0001840f4950((uVar6 | 0xdb6a6d9e) + (ulonglong)((uint)uVar6 & 0xdb6a6d9e));
      uVar6 = uRam000000018305e588 ^ 0x5e6d6cc3;
      uRam000000018305e338 = uRam000000018305e4b8 ^ uVar6 ^ 0x5f928f3b;
      uRam000000018305e390 = (uRam000000018305e390 ^ uVar6) + 0x5f928f3b ^ 0xf14347c2387515ea;
      uRam000000018305e480 =
           (uRam000000018305e480 * -0x36bfc09af98eaddd ^ uRam000000018305e390) + uVar6;
      uRam000000018305e358 = uRam000000018305e480 ^ uRam000000018305e390;
      uRam000000018305e3b0 = 0x5f928f3b;
      uVar6 = (uRam000000018305e498 ^ _UNK_1800f61f0) + uRam000000018305e2d8 + 0xdbb0ac1e;
      uVar9 = (uRam000000018305e2d8 ^ _UNK_1800f61f8) + uRam000000018305e498 + 0x5f928f3b;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e498 ^ _UNK_1800f61f0;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e2d8 ^ _UNK_1800f61f8;
      uRam000000018305e4a0 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e498 + 0x5f928f3b)
                               ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                 (uRam000000018305e2d8 + 0xdbb0ac1e));
      uRam000000018305e410 = uRam000000018305e3e8 * -0x4400bca5a3be7509;
      uRam000000018305e3c0 = uRam000000018305e3c0 ^ uRam000000018305e410 ^ 0xd64e60ec48d92a4a;
      uRam000000018305e2b8 =
           (uRam000000018305e2b8 * -0x251e4d3319e02afb ^ uRam000000018305e3c0) +
           uRam000000018305e410;
      uRam000000018305e448 = uRam000000018305e2b8 ^ uRam000000018305e3c0;
      uRam000000018305e4d0 = 0;
      uVar6 = (uRam000000018305e3a0 ^ 0xfbdddcda) + uRam000000018305e418 + 0xfbdddcda;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e3a0 ^ 0xfbdddcda;
      uVar9 = ((uRam000000018305e418 + uRam000000018305e3a0) * 0x2000 |
              uRam000000018305e418 + uRam000000018305e3a0 >> 0x33) ^ uRam000000018305e418;
      uRam000000018305e2c8 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - uRam000000018305e3a0 ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018305e418 + 0xfbdddcda)
                              );
      uVar6 = (ulonglong)(~(uint)uRam000000018305e2c8 & 0x7fffffff);
      uRam000000018305e308 = uRam000000018305e4d0 ^ uVar6 ^ 0x7fffffff;
      uRam000000018305e3e0 = (uRam000000018305e3e0 ^ uVar6) + 0x7fffffff ^ 0x7d52cd51ef0bd27d;
      uRam000000018305e378 =
           (uRam000000018305e378 * -0x3aae038c51631a4f ^ uRam000000018305e3e0) + uVar6;
      uRam000000018305e388 = uRam000000018305e378 ^ uRam000000018305e3e0;
      uRam000000018305e318 = 0x7fffffff;
      uVar6 = (uRam000000018305e450 ^ _UNK_1800f6200) + uRam000000018305e200 + 0x5a95ded8;
      uVar9 = (uRam000000018305e200 ^ _UNK_1800f6208) + uRam000000018305e450 + 0xffffffff;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e450 ^ _UNK_1800f6200;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e200 ^ _UNK_1800f6208;
      uRam000000018305e358 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e450 + 0xffffffff)
                               ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                 (uRam000000018305e200 + 0x5a95ded8));
      uVar6 = (uRam000000018305e358 ^ 0x3c21480203) & 0x3fffffffff;
      uRam000000018305e548 = (uRam000000018305e548 ^ uVar6) + 0x21480202 ^ 0x3cfce7639ae11ef1;
      uRam000000018305e320 =
           (uRam000000018305e320 * 0x24fa40761da09bf9 ^ uRam000000018305e548) + uVar6;
      uRam000000018305e260 = uRam000000018305e320 ^ uRam000000018305e548;
      uRam000000018305e350 = 0x21480202;
      uVar6 = (~uRam000000018305e400 + 0x21480203) *
              ((uRam000000018305e208 ^ 0x5a95ded8) +
              (ulonglong)((uint)uRam000000018305e208 & 0x5a95ded8) * 2);
      uVar6 = (uVar6 | uRam000000018305e2b0) + (uVar6 & uRam000000018305e2b0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e5d0 =
           func_0x0001840f4950((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda));
      uRam000000018305e488 = uRam000000018305e488 ^ uRam000000018305e5d0 ^ 0x3a40a42ba4fd11a8;
      uRam000000018305e3c8 =
           (uRam000000018305e3c8 * -0x3d9ec27f60837b81 ^ uRam000000018305e488) +
           uRam000000018305e5d0;
      uRam000000018305e388 = uRam000000018305e3c8 ^ uRam000000018305e488;
      uRam000000018305e5b8 = 0;
      uVar6 = ((uRam000000018305e478 ^ 0xfbdddcda) +
              (ulonglong)((uint)uRam000000018305e478 & 0xfbdddcda) * 2) * -uRam000000018305e3f8;
      uVar6 = (uVar6 | uRam000000018305e270) + (uVar6 & uRam000000018305e270);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e410 =
           func_0x0001840f4950((uVar6 | 0xfbdddcda) + (ulonglong)((uint)uVar6 & 0xfbdddcda));
      uVar6 = uRam000000018305e410 << 2 | (uRam000000018305e410 & 0x7fffffffffffffff) >> 0x3e;
      uRam000000018305e378 = uRam000000018305e218 ^ uVar6 ^ 0x7fffffff;
      uRam000000018305e2e8 = (uRam000000018305e2e8 ^ uVar6) + 0x7fffffff ^ 0x644834043a5bc8be;
      uRam000000018305e420 =
           (uRam000000018305e420 * 0x2453a1378f028faf ^ uRam000000018305e2e8) + uVar6;
      uRam000000018305e448 = uRam000000018305e420 ^ uRam000000018305e2e8;
      uRam000000018305e3f8 = 0x7fffffff;
      uRam000000018305e3e0 = func_0x0001840f4950(uRam000000018305e410 ^ 0x1d007c1affe19e);
      uVar6 = (ulonglong)(~(((uint)uRam000000018305e3e0 ^ 0x2185b510) * -0x25409cbd) & 0x4c33f9dc);
      uRam000000018305e348 = uRam000000018305e348 ^ uVar6 ^ 0xf8aa55b98a1cdadf;
      uRam000000018305e4d0 =
           (uRam000000018305e4d0 * -0x7bd760c0d8f373a7 ^ uRam000000018305e348) + uVar6;
      uRam000000018305e4e0 = uRam000000018305e4d0 ^ uRam000000018305e348;
      uRam000000018305e3c0 = 0;
      uVar6 = (uRam000000018305e518 ^ 0xfbdddcda) + uRam000000018305e478 + 0xfbdddcda;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e518 ^ 0xfbdddcda;
      uVar9 = ((uRam000000018305e478 + uRam000000018305e518) * 0x2000 |
              uRam000000018305e478 + uRam000000018305e518 >> 0x33) ^ uRam000000018305e478;
      uRam000000018305e3c0 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - uRam000000018305e518 ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018305e478 + 0xfbdddcda)
                              );
      uVar6 = uRam000000018305e3c0 << 0x19 | uRam000000018305e3c0 >> 0x27;
      uVar9 = uVar6 >> 1 | uVar6;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 >> 4 | uVar9;
      uVar9 = uVar9 >> 8 | uVar9;
      uVar9 = uVar9 >> 0x10 | uVar9;
      uVar9 = uVar9 >> 0x20 | uVar9;
      uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar6 = (ulonglong)
              (~((uint)uVar6 ^
                (0x40 - (uint)(byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38)) * 0x80) & 0x7fffffff);
      uRam000000018305e568 = uRam000000018305e348 ^ uVar6 ^ 0x7fffffff;
      uRam000000018305e578 = (uRam000000018305e578 ^ uVar6) + 0x7fffffff ^ 0x228b10dc260602b2;
      uRam000000018305e5a0 =
           (uRam000000018305e5a0 * 0x256d6dec6d502971 ^ uRam000000018305e578) + uVar6;
      uRam000000018305e550 = uRam000000018305e5a0 ^ uRam000000018305e578;
      uRam000000018305e4d8 = 0x7fffffff;
      switch((int)uStack_100 == 0x7fffffff) {
      case false:
        uStack_180 = uStack_130;
        auStack_178._0_8_ = param_1;
        if (0xf < uStack_130) {
          puVar4 = (undefined1 *)auStack_148._0_8_;
        }
        auStack_128._0_8_ = puVar4;
        uVar9 = 0xcbf29ce484222325;
        uVar6 = 0;
        uStack_118 = uStack_138;
        unaff_R15 = uStack_138;
        uStack_168 = param_3;
        switch(uStack_138 == 0) {
        case false:
          do {
            uVar17 = (ulonglong)*(byte *)(auStack_128._0_8_ + uVar6);
            uVar19 = uVar9 ^ 0x84222325 ^ uRam000000018305e5e8;
            lVar5 = (uVar9 ^ 0x84222325) + uRam000000018305e438;
            uVar18 = uVar19 + lVar5;
            uVar15 = (uVar17 ^ uRam000000018305e438) + uRam000000018305e5e8 + uVar17;
            uVar19 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar19;
            uVar18 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar17 ^ uRam000000018305e438;
            uStack_100 = uVar6;
            uRam000000018305e270 =
                 func_0x0001840f4950((uVar18 << 0x1d | uVar18 >> 0x23) -
                                     (uRam000000018305e5e8 + uVar17) ^
                                     (uVar19 << 0x1d | uVar19 >> 0x23) - lVar5);
            uVar6 = uVar9 ^ uVar9 * uVar17 ^ uRam000000018305e270;
            uRam000000018305e488 = uVar9 ^ uVar17;
            uRam000000018305e5f8 =
                 (uRam000000018305e5f8 ^ uVar6) + uRam000000018305e488 ^ 0xefba7696bedca261;
            uRam000000018305e5c8 =
                 (uRam000000018305e5c8 * -0x321de7a37e6b8be5 ^ uRam000000018305e5f8) + uVar6;
            uRam000000018305e558 = uRam000000018305e5c8 ^ uRam000000018305e5f8;
            uVar6 = (uRam000000018305e2a0 ^ _UNK_1800f6210) +
                    uRam000000018305e4c8 + 0xb61ebd34f847967e;
            uVar9 = (uRam000000018305e4c8 ^ _UNK_1800f6218) +
                    uRam000000018305e2a0 + 0xc4d7139a74bc16a6;
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e2a0 ^ _UNK_1800f6210;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e4c8 ^ _UNK_1800f6218;
            uStack_108 = uRam000000018305e488;
            uRam000000018305e470 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e2a0 + 0xc4d7139a74bc16a6) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e4c8 + 0xb61ebd34f847967e));
            uVar6 = (uRam000000018305e470 ^ 0x155d25d6b02) * 0x2d5626e99f640c63 & 0x1ffffffffff;
            uRam000000018305e498 =
                 (uRam000000018305e498 ^ uVar6) + 0xf6dfbfbe7cfdb7ff ^ 0x629f832d94da4d7c;
            uRam000000018305e2d8 =
                 (uRam000000018305e2d8 * -0x2e1bb89b5ffa0ee5 ^ uRam000000018305e498) + uVar6;
            uRam000000018305e598 = uRam000000018305e2d8 ^ uRam000000018305e498;
            uRam000000018305e458 = 0xf6dfbfbe7cfdb7ff;
            uRam000000018305e388 = func_0x0001840f4950(uRam000000018305e3b8 ^ 0x73b41f2fc0c5165b);
            uRam000000018305e4e0 =
                 (uRam000000018305e4e0 ^ uRam000000018305e388 & 0xfffffffffffffff) +
                 0xf1e74d94f4156f62 ^ 0xcad8f77c24dbfcd4;
            uRam000000018305e488 =
                 (uRam000000018305e488 * 0x2408aaa1ab7165fd ^ uRam000000018305e4e0) +
                 (uRam000000018305e388 & 0xfffffffffffffff);
            uRam000000018305e3e0 = uRam000000018305e488 ^ uRam000000018305e4e0;
            uRam000000018305e200 = 0xf1e74d94f4156f62;
            uVar6 = (uRam000000018305e460 ^ _UNK_1800f6220) + uRam000000018305e408 + 0x84222325;
            uVar9 = (uRam000000018305e408 ^ _UNK_1800f6228) +
                    uRam000000018305e460 + 0x3d4c3b1ae5acd86f;
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e460 ^ _UNK_1800f6220;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e408 ^ _UNK_1800f6228;
            uRam000000018305e2b0 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e460 + 0x3d4c3b1ae5acd86f) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e408 + 0x84222325));
            uRam000000018305e4e0 =
                 (uRam000000018305e4e0 ^ uRam000000018305e2b0 & 0x3fffffffffffffff) +
                 0xc2b3c4e51a532791 ^ 0x42bea9bc323b8899;
            uRam000000018305e2c8 =
                 (uRam000000018305e2c8 * -0x6bd2f68e8bd66087 ^ uRam000000018305e4e0) +
                 (uRam000000018305e2b0 & 0x3fffffffffffffff);
            uRam000000018305e3d8 = uRam000000018305e2c8 ^ uRam000000018305e4e0;
            uRam000000018305e208 = 0xc2b3c4e51a532791;
            uRam000000018305e5d0 = func_0x0001840f4950(uRam000000018305e228 ^ 0x15d64b9eb8c58a49);
            uVar6 = (uRam000000018305e5d0 ^ 0xd560ddb444b3c49d) * -0x3fbef60abc00000 |
                    (uRam000000018305e5d0 ^ 0xd560ddb444b3c49d) * 0x429f03f010427d51 >> 0x2a;
            uRam000000018305e328 = uRam000000018305e490 ^ uVar6 ^ 0x3d4c3c1ae5acda22;
            uRam000000018305e3d0 =
                 (uRam000000018305e3d0 ^ uVar6) + 0x3d4c3c1ae5acda22 ^ 0x24b2ddf86c1cf82b;
            uRam000000018305e510 =
                 (uRam000000018305e510 * 0x6ab565ef425f1cdf ^ uRam000000018305e3d0) + uVar6;
            uRam000000018305e4f8 = uRam000000018305e510 ^ uRam000000018305e3d0;
            uRam000000018305e438 = 0x3d4c3c1ae5acda22;
            uVar6 = (uRam000000018305e370 ^ _UNK_1800f6230) +
                    uRam000000018305e290 + 0x3d4c3c1a618ef907;
            uVar9 = (uRam000000018305e290 ^ _UNK_1800f6238) +
                    uRam000000018305e370 + 0xc2b3c4e51a532791;
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e370 ^ _UNK_1800f6230;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e290 ^ _UNK_1800f6238;
            uRam000000018305e4b8 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e370 + 0xc2b3c4e51a532791) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e290 + 0x3d4c3c1a618ef907));
            uVar6 = (uRam000000018305e4b8 ^ 0x2148101081289a02) & 0x3d4c3c1ae5acda22;
            uRam000000018305e380 = uRam000000018305e560 ^ uVar6 ^ 0x100000001b3;
            uRam000000018305e4f0 =
                 (uRam000000018305e4f0 ^ uVar6) + 0x100000001b3 ^ 0x5770e8b3370805e7;
            uRam000000018305e5f8 =
                 (uRam000000018305e5f8 * -0x2d57edd97258638d ^ uRam000000018305e4f0) + uVar6;
            uRam000000018305e4e0 = uRam000000018305e5f8 ^ uRam000000018305e4f0;
            uRam000000018305e530 = 0x100000001b3;
            uVar6 = (uRam000000018305e500 ^ _UNK_1800f6240) + uRam000000018305e4f0 + 0x84222325;
            uVar9 = (uRam000000018305e4f0 ^ _UNK_1800f6248) +
                    uRam000000018305e500 + 0x585a2b3c2353af5c;
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e500 ^ _UNK_1800f6240;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e4f0 ^ _UNK_1800f6248;
            uRam000000018305e348 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e500 + 0x585a2b3c2353af5c) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e4f0 + 0x84222325));
            uVar9 = uRam000000018305e348 << 8 ^ 0x5a2b3c2353af5c00;
            uVar6 = uVar9 >> 8;
            uVar9 = uVar6 - (uVar9 >> 9 & 0x55555555555555);
            uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
            uVar6 = ((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
                    uVar6) * -0xecbb1d15a84dddf;
            uRam000000018305e358 =
                 (uRam000000018305e358 ^ uVar6) + 0xa7a5d4c3dcac50a4 ^ 0x4c0422b2ec719dc7;
            uRam000000018305e480 =
                 (uRam000000018305e480 * -0x2b0568ac20fc4fed ^ uRam000000018305e358) + uVar6;
            uRam000000018305e288 = uRam000000018305e480 ^ uRam000000018305e358;
            uRam000000018305e440 = -0x585a2b3c2353af5c;
            uRam000000018305e2e8 =
                 func_0x0001840f4950(uRam000000018305e528 + 0xcb7aaa674a158eb7 ^ 0xa4);
            uVar6 = (uRam000000018305e2e8 ^ 0x585a2b3c2353afff) << 9 |
                    (uRam000000018305e2e8 ^ 0x585a2b3c2353afff) >> 0x37;
            uRam000000018305e3f0 = uRam000000018305e218 ^ uVar6 ^ 0x585a2c3c2353b10f;
            uRam000000018305e5e0 =
                 (uRam000000018305e5e0 ^ uVar6) + 0x585a2c3c2353b10f ^ 0xce10efbe0727fd06;
            uRam000000018305e478 =
                 (uRam000000018305e478 * 0x6975dbcb1b983e03 ^ uRam000000018305e5e0) + uVar6;
            uRam000000018305e248 = uRam000000018305e478 ^ uRam000000018305e5e0;
            uRam000000018305e5d8 = 0x585a2c3c2353b10f;
            uRam000000018305e258 =
                 func_0x0001840f4950(uRam000000018305e2d0 + 0x16c11cf976083308 ^ 0x83);
            uRam000000018305e398 = uRam000000018305e578 ^ uRam000000018305e580 ^ 0x100000001b3;
            uRam000000018305e498 =
                 (uRam000000018305e498 ^ uRam000000018305e580) + 0x100000001b3 ^ 0xc1ef20d362e51a32;
            uRam000000018305e5e0 =
                 (uRam000000018305e5e0 * -0x4e937cffcab050dd ^ uRam000000018305e498) +
                 uRam000000018305e580;
            uRam000000018305e248 = uRam000000018305e5e0 ^ uRam000000018305e498;
            uRam000000018305e540 = 0x100000001b3;
            uVar6 = (uRam000000018305e478 ^ _UNK_1800f6250) + uRam000000018305e300 + 0x84222325;
            uVar9 = (uRam000000018305e300 ^ _UNK_1800f6258) +
                    uRam000000018305e478 + 0x615c074694be2ab4;
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e478 ^ _UNK_1800f6250;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e300 ^ _UNK_1800f6258;
            uRam000000018305e250 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e478 + 0x615c074694be2ab4) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e300 + 0x84222325));
            uRam000000018305e2a8 =
                 (uRam000000018305e298 ^ uRam000000018305e250) + 0x9ea3f8b96b41d54c;
            uRam000000018305e298 = uRam000000018305e2a8 ^ 0x822dabb5bc9bf6f1;
            uRam000000018305e360 =
                 (uRam000000018305e360 * -0x3a7966000b2e108d ^ uRam000000018305e298) +
                 uRam000000018305e250;
            uRam000000018305e258 = uRam000000018305e360 ^ uRam000000018305e298;
            uRam000000018305e2a8 = uRam000000018305e2a8 ^ 0x1c8e530cd7da23bd;
            uRam000000018305e3d0 = 0x9ea3f8b96b41d54c;
            uVar6 = (~uRam000000018305e468 + 0x615c074694be2ab5) *
                    ((uRam000000018305e418 ^ 0x10084222296) +
                    (uRam000000018305e418 & 0x10084222296) * 2);
            uVar6 = (uVar6 | uRam000000018305e5b8) + (uVar6 & uRam000000018305e5b8);
            uVar6 = uVar6 * 0x2000 ^ uVar6;
            uVar6 = uVar6 >> 7 ^ uVar6;
            uVar6 = uVar6 << 0x11 ^ uVar6;
            uRam000000018305e498 =
                 func_0x0001840f4950((uVar6 | 0x615c0646109c0822) + (uVar6 & 0x615c0646109c0822));
            uVar6 = uRam000000018305e498 >> 1 | uRam000000018305e498;
            uVar6 = uVar6 >> 2 | uVar6;
            uVar6 = uVar6 >> 4 | uVar6;
            uVar6 = uVar6 >> 8 | uVar6;
            uVar6 = uVar6 >> 0x10 | uVar6;
            uVar6 = uVar6 >> 0x20 | uVar6;
            uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
            uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
            uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                    ) * 0x80 ^ uRam000000018305e498;
            uRam000000018305e420 =
                 (uRam000000018305e248 ^ uVar6 ^ 0x615c084694be2c67 ^ uVar6) + 0x615c084694be2c67 ^
                 0xd643ae7453c9fde1;
            uRam000000018305e358 =
                 (uRam000000018305e358 * -0x107eedd17e72c3c5 ^ uRam000000018305e420) + uVar6;
            uRam000000018305e4c8 = uRam000000018305e358 ^ uRam000000018305e420;
            uRam000000018305e5b0 = 0x615c084694be2c67;
            uRam000000018305e400 =
                 func_0x0001840f4950(uRam000000018305e3c8 + 0x42b9bebaf2efbba0 ^ 0xfb);
            uVar9 = _UNK_1800f6268;
            uVar6 = _UNK_1800f6260;
            uRam000000018305e4f8 = uRam000000018305e468 ^ uRam000000018305e5e8 ^ 0x100000001b3;
            uRam000000018305e348 =
                 (uRam000000018305e348 ^ uRam000000018305e5e8) + 0x100000001b3 ^ 0xf771b4dcc084199f;
            uRam000000018305e210 =
                 (uRam000000018305e210 * -0x29417046d3ec697 ^ uRam000000018305e348) +
                 uRam000000018305e5e8;
            uRam000000018305e4a8 = uRam000000018305e210 ^ uRam000000018305e348;
            uRam000000018305e598 = 0x100000001b3;
            uVar17 = (uRam000000018305e258 ^ _UNK_1800f6260) +
                     uRam000000018305e3f8 + 0xf6dfbfbef8df94da;
            uVar19 = (uRam000000018305e3f8 ^ _UNK_1800f6268) +
                     uRam000000018305e258 + 0xf1e74d94f4156f62;
            uVar17 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ uRam000000018305e258 ^ _UNK_1800f6260;
            uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uRam000000018305e3f8 ^ _UNK_1800f6268;
            uRam000000018305e528 =
                 func_0x0001840f4950((uVar19 << 0x1d | uVar19 >> 0x23) -
                                     (uRam000000018305e258 + 0xf1e74d94f4156f62) ^
                                     (uVar17 << 0x1d | uVar17 >> 0x23) -
                                     (uRam000000018305e3f8 + 0xf6dfbfbef8df94da));
            uVar17 = uRam000000018305e528 ^ 0xf6dfbfbe7cfdb7ff;
            uRam000000018305e330 = uRam000000018305e2a8 ^ uVar17 ^ 0xe8c70d5371132761;
            uRam000000018305e290 =
                 (uRam000000018305e290 ^ uVar17) + 0xe8c70d5371132761 ^ 0x9c6e5939740e0212;
            uRam000000018305e568 =
                 (uRam000000018305e568 * -0x4e7a185f811f58ef ^ uRam000000018305e290) + uVar17;
            uRam000000018305e240 = uRam000000018305e568 ^ uRam000000018305e290;
            uRam000000018305e530 = 0xe8c70d5371132761;
            uRam000000018305e3c8 =
                 func_0x0001840f4950(uRam000000018305e568 + 0x1aead80cb8f2ca06 ^ 0xfb);
            uRam000000018305e3f8 =
                 (uRam000000018305e3f8 ^ uRam000000018305e2f8) + 0x738f22a88e8d89d ^
                 0x9d9e68b934c645d5;
            uRam000000018305e440 =
                 (uRam000000018305e440 * 0x1a7d866a05968e13 ^ uRam000000018305e3f8) +
                 uRam000000018305e2f8;
            uRam000000018305e5d8 = uRam000000018305e440 ^ uRam000000018305e3f8;
            uRam000000018305e508 = 0x738f22a88e8d89d;
            uVar17 = (uRam000000018305e5b8 ^ uVar6) + uRam000000018305e530 + 0xf6dfbfbef8df94da;
            uVar19 = (uRam000000018305e530 ^ uVar9) + uRam000000018305e5b8 + 0xf1e74d94f4156f62;
            uVar6 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ uRam000000018305e5b8 ^ uVar6;
            uVar9 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uRam000000018305e530 ^ uVar9;
            uRam000000018305e2f8 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e5b8 + 0xf1e74d94f4156f62) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e530 + 0xf6dfbfbef8df94da));
            uVar9 = uRam000000018305e2f8 ^ 0xf7ffffbefcfdffff;
            uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
            uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
            uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
                    uVar9) & 0xfffffffffff;
            uRam000000018305e5b8 =
                 (uRam000000018305e5b8 ^ uVar6) + 0xf0c70d9474152762 ^ 0x668df182210c81c;
            uRam000000018305e438 =
                 (uRam000000018305e438 * -0x7ac2868890d673fd ^ uRam000000018305e5b8) + uVar6;
            uRam000000018305e490 = uRam000000018305e438 ^ uRam000000018305e5b8;
            uRam000000018305e328 = 0xf0c70d9474152762;
            uVar6 = (uRam000000018305e3a0 ^ _UNK_1800f6270) +
                    uRam000000018305e3b0 + 0xe8c70d53f5310444;
            uVar9 = (uRam000000018305e3b0 ^ _UNK_1800f6278) +
                    uRam000000018305e3a0 + 0xe8c70d5371132761;
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e3a0 ^ _UNK_1800f6270;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e3b0 ^ _UNK_1800f6278;
            uRam000000018305e5d8 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e3a0 + 0xe8c70d5371132761) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e3b0 + 0xe8c70d53f5310444));
            uRam000000018305e4e8 =
                 ((uRam000000018305e5d8 ^ 0x8c70d5371132760) & 0xffffffffffffffe) * 0x10;
            uRam000000018305e228 = uRam000000018305e228 ^ uRam000000018305e4e8 ^ 0x32d43582f231b3d4;
            uRam000000018305e468 =
                 (uRam000000018305e468 * 0xe44ec34788e9995 ^ uRam000000018305e228) +
                 uRam000000018305e4e8;
            uRam000000018305e278 = uRam000000018305e468 ^ uRam000000018305e228;
            uRam000000018305e200 = 0;
            uVar6 = (uRam000000018305e3b0 ^ _UNK_1800f6280) +
                    uRam000000018305e3d0 + 0xf6dfbfbef8df94da;
            uVar9 = (uRam000000018305e3d0 ^ _UNK_1800f6288) + (uRam000000018305e3b0 - 1);
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e3b0 ^ _UNK_1800f6280;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e3d0 ^ _UNK_1800f6288;
            uRam000000018305e5b8 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e3b0 - 1) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e3d0 + 0xf6dfbfbef8df94da));
            uVar9 = uRam000000018305e5b8 ^ 0x920404183024801;
            uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
            uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
            uVar9 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
                    uVar9;
            uRam000000018305e580 =
                 (uRam000000018305e580 ^ uVar9) + 0x920404183024800 ^ 0x560f855e06095aba;
            uRam000000018305e4a8 =
                 (uRam000000018305e4a8 * -0x41d5960e773cc845 ^ uRam000000018305e580) + uVar9;
            uRam000000018305e558 = uRam000000018305e4a8 ^ uRam000000018305e580;
            uRam000000018305e368 = 0x920404183024800;
            uVar6 = (uRam000000018305e5a0 ^ _UNK_1800f6290) +
                    uRam000000018305e4b8 + 0xf6dfbfbef8df94da;
            uVar9 = (uRam000000018305e4b8 ^ _UNK_1800f6298) +
                    uRam000000018305e5a0 + 0x920404183024800;
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e5a0 ^ _UNK_1800f6290;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e4b8 ^ _UNK_1800f6298;
            uRam000000018305e400 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e5a0 + 0x920404183024800) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e4b8 + 0xf6dfbfbef8df94da));
            uRam000000018305e340 = uRam000000018305e340 ^ uRam000000018305e400 ^ 0x3c4fe7aa43b97713;
            uRam000000018305e400 =
                 (uRam000000018305e400 * 0x576af287c6904e89 ^ uRam000000018305e340) +
                 uRam000000018305e400;
            uRam000000018305e458 = uRam000000018305e400 ^ uRam000000018305e340;
            uRam000000018305e258 = 0;
            uRam000000018305e520 = func_0x0001840f4950(uRam000000018305e5b8 ^ 0x22007b6e00dd72);
            uVar9 = (uRam000000018305e520 ^ 0x100000001b3) & 0x7fffffffffffffff;
            uVar6 = uVar9 - (((uRam000000018305e520 ^ 0x100000001b3) & 0x7fffffffffffffff) >> 1 &
                            0x1555555555555555);
            uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
            uVar9 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
                    uVar9;
            uVar6 = uVar9 >> 1 | uVar9;
            uVar6 = uVar6 >> 2 | uVar6;
            uVar6 = uVar6 >> 4 | uVar6;
            uVar6 = uVar6 >> 8 | uVar6;
            uVar6 = uVar6 >> 0x10 | uVar6;
            uVar6 = uVar6 >> 0x20 | uVar6;
            uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
            uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
            uVar9 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                    ) * 0x40 ^ uVar9;
            uRam000000018305e398 = uRam000000018305e380 ^ uVar9 ^ 0x100000001b3;
            uRam000000018305e438 =
                 (uRam000000018305e438 ^ uVar9) + 0x100000001b3 ^ 0xc50c02e8a24654b1;
            uRam000000018305e2d0 =
                 (uRam000000018305e2d0 * 0x7551aeb706de5329 ^ uRam000000018305e438) + uVar9;
            uRam000000018305e380 = uRam000000018305e2d0 ^ uRam000000018305e438;
            uRam000000018305e578 = 0x100000001b3;
            uVar6 = (uRam000000018305e2f0 ^ _UNK_1800f62a0) +
                    uRam000000018305e468 + 0xb61ebd34f847967e;
            uVar9 = (uRam000000018305e468 ^ _UNK_1800f62a8) +
                    uRam000000018305e2f0 + 0xb61ebd347c65b55b;
            uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e2f0 ^ _UNK_1800f62a0;
            uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e468 ^ _UNK_1800f62a8;
            uRam000000018305e5c8 =
                 func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                     (uRam000000018305e2f0 + 0xb61ebd347c65b55b) ^
                                     (uVar6 << 0x1d | uVar6 >> 0x23) -
                                     (uRam000000018305e468 + 0xb61ebd34f847967e));
            uVar6 = (uRam000000018305e5c8 & 0xffffffffff) >> 1 | uRam000000018305e5c8 & 0xffffffffff
            ;
            uVar6 = uVar6 >> 2 | uVar6;
            uVar6 = uVar6 >> 4 | uVar6;
            uVar9 = uVar6 >> 8 | uVar6;
            uVar6 = uVar6 >> 0x20 | uVar9 >> 0x10 | uVar9;
            uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
            uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
            uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                    ) * 0x10 ^ uRam000000018305e5c8 & 0xffffffffff;
            uRam000000018305e3c8 = uRam000000018305e3c8 ^ uVar6 ^ 0x9c37c13dbb8c49d3;
            uRam000000018305e588 =
                 (uRam000000018305e588 * 0x30770f635574bb7 ^ uRam000000018305e3c8) + uVar6;
            uRam000000018305e450 = uRam000000018305e588 ^ uRam000000018305e3c8;
            uRam000000018305e288 = 0;
            uRam000000018305e338 =
                 func_0x0001840f4950(uRam000000018305e338 + 0x22007c6e0121ff ^ 0x9d);
            uVar6 = uStack_100;
            uRam000000018305e240 = uRam000000018305e510 ^ uRam000000018305e3e0 ^ 0x100000001b3;
            uRam000000018305e2b8 =
                 (uRam000000018305e2b8 ^ uRam000000018305e3e0) + 0x100000001b3 ^ 0x178c4b29abcd1d3b;
            uRam000000018305e428 =
                 (uRam000000018305e428 * -0x3c902c914ee1aaf5 ^ uRam000000018305e2b8) +
                 uRam000000018305e3e0;
            uRam000000018305e388 = uRam000000018305e428 ^ uRam000000018305e2b8;
            uRam000000018305e548 = 0x100000001b3;
            auVar11._8_8_ = _UNK_180062bf8;
            auVar11._0_8_ = uStack_100 ^ 0x84222325;
            auVar12 = pshufb(auVar11 ^ _UNK_1800f62b0,_UNK_1800170c0);
            uVar9 = uStack_108 * 0x100000001b3;
            uVar19 = auVar12._8_8_ + auVar12._0_8_;
            uVar17 = uVar19 + uRam000000018305e5a8;
            if (auVar12._4_4_ < 0) {
              uVar17 = uRam000000018305e260 ^ uVar19;
            }
            uRam000000018305e598 = func_0x0001840f4950(SUB161(auVar11 ^ _UNK_1800f62b0,5) ^ uVar17);
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar6;
            uVar23 = (uint)(uVar6 >> 0x20);
            auVar21._8_4_ = (uint)uVar6;
            auVar21._0_8_ = uVar6;
            auVar21._12_4_ = uVar23;
            uVar24 = (uint)uVar6 & (uint)UNK_18001a990;
            uVar10 = SUB164(auVar21 | _UNK_18001a990,0);
            uVar19 = SUB168(auVar21 | _UNK_18001a990,0);
            uVar13 = SUB164(_UNK_18001a990 ^ auVar22,0);
            uVar17 = (uRam000000018305e598 ^ uVar6) & 0x7ffffffffff00000;
            auVar12._8_4_ = 0xffffffff;
            auVar12._0_8_ = 0xffffffffffffffff;
            auVar12._12_4_ = 0xffffffff;
            uVar16 = SUB164(auVar12 ^ auVar22,0);
            uVar6 = (ulonglong)uVar13 * (ulonglong)_UNK_1800f62c0 +
                    ((SUB168(_UNK_18001a990 ^ auVar22,0) >> 0x20) * (ulonglong)_UNK_1800f62c0 +
                     (ulonglong)_UNK_1800f62d0 * (ulonglong)uVar13 << 0x20) +
                    ((ulonglong)uVar24 * (ulonglong)_UNK_1800f62d0 << 0x20 |
                    (ulonglong)uVar24 * (ulonglong)_UNK_1800f62c0) + uVar6 +
                    (ulonglong)_UNK_1800f62e0 * (ulonglong)uVar10 +
                    ((ulonglong)_UNK_1800f62f0 * (ulonglong)uVar10 +
                     (uVar19 >> 0x20) * (ulonglong)_UNK_1800f62e0 << 0x20) +
                    (-((ulonglong)uVar16 * (ulonglong)_UNK_1800f6360 +
                      ((ulonglong)_UNK_1800f6370 * (ulonglong)uVar16 +
                       (SUB168(auVar12 ^ auVar22,0) >> 0x20) * (ulonglong)_UNK_1800f6360 << 0x20)) -
                    ((ulonglong)uVar10 * (ulonglong)_UNK_1800f6340 +
                     ((uVar19 >> 0x20) * (ulonglong)_UNK_1800f6340 +
                      (ulonglong)_UNK_1800f6350 * (ulonglong)uVar10 << 0x20) +
                    ((ulonglong)uVar24 * (ulonglong)_UNK_1800f6350 << 0x20 |
                    (ulonglong)uVar24 * (ulonglong)_UNK_1800f6340) +
                    ((uVar6 & 0xffffffff) * (ulonglong)_UNK_1800f6330 +
                     (ulonglong)uVar23 * (ulonglong)_UNK_1800f6320 << 0x20) +
                    (uVar6 & 0xffffffff) * (ulonglong)_UNK_1800f6320)) + 0x331b129e79b2a242;
            uRam000000018305e5f0 = uRam000000018305e280 ^ uVar17 ^ uVar6;
            uRam000000018305e278 = (uRam000000018305e278 ^ uVar17) + uVar6 ^ 0xb4fe0c3e1ba857e;
            uRam000000018305e320 =
                 (uRam000000018305e320 * 0x6fad028a3e77c31b ^ uRam000000018305e278) + uVar17;
            uRam000000018305e2c0 = uRam000000018305e320 ^ uRam000000018305e278;
            unaff_R15 = uStack_118;
            uRam000000018305e260 = uVar6;
            switch(uVar6 == uStack_118) {
            case true:
              goto code_r0x000183f58f5a;
            }
          } while( true );
        }
        break;
      case true:
        goto code_r0x000183f590e0;
      }
code_r0x000183f58f5a:
      lVar5 = lRam00000001834af718;
      uVar9 = uVar9 & uRam00000001834af730;
      uVar6 = uVar9 * 2;
      uVar17 = uVar6 ^ 0x84222325;
      uVar19 = uVar17 ^ uRam000000018305e5f0;
      lVar7 = uVar17 + uRam000000018305e278;
      uVar17 = uVar19 + lVar7;
      uVar18 = (uRam000000018305e278 ^ 1) + uRam000000018305e5f0 + 1;
      uVar19 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ uVar19;
      uVar17 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uRam000000018305e278 ^ 1;
      uRam000000018305e350 =
           func_0x0001840f4950((uVar17 << 0x1d | uVar17 >> 0x23) - (uRam000000018305e5f0 + 1) ^
                               (uVar19 << 0x1d | uVar19 >> 0x23) - lVar7);
      uRam000000018305e4d8 = uVar6 | 1;
      uRam000000018305e310 =
           (uRam000000018305e310 ^ uRam000000018305e2e0) + uRam000000018305e4d8 ^ 0x672006446f1923de
      ;
      uRam000000018305e5d0 =
           (uRam000000018305e5d0 * -0x58f4ad281bd53f87 ^ uRam000000018305e310) +
           uRam000000018305e2e0;
      uRam000000018305e3b8 = uRam000000018305e5d0 ^ uRam000000018305e310;
      param_3 = *(ulonglong *)(lVar5 + uRam000000018305e4d8 * 8);
      param_1 = uRam00000001834af708;
      switch(param_3 == uRam00000001834af708) {
      case false:
        unaff_RDI = *(ulonglong *)(lVar5 + uVar9 * 0x10);
        unaff_RBX = &UNK_180051778;
        switch(unaff_R15 == *(ulonglong *)(param_3 + 0x20)) {
        case true:
          goto code_r0x000183f590f6;
        }
        goto code_r0x000183f5912e;
      }
code_r0x000183f59186:
      uStack_150 = auStack_178._0_8_;
      plVar8 = *(longlong **)(param_1 + 0x68);
      switch(plVar8 == (longlong *)0x0) {
      case true:
code_r0x000183f5d942:
        uStack_158 = uStack_168;
        FUN_180002134();
        goto code_r0x000183f5d948;
      }
    }
    uStack_158 = uStack_168;
    (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_150,&uStack_158);
    FUN_18000221c(0x183043540);
    uVar6 = uStack_180;
    switch(0xf < uStack_180) {
    case false:
code_r0x000183f5d8bb:
      return;
    }
    break;
  case true:
    switch(0xf < uVar6) {
    case false:
      goto code_r0x000183f5d8bb;
    }
  }
  uVar9 = uVar6 ^ 0x84222325 ^ uRam000000018305e468;
  lVar5 = (uVar6 ^ 0x84222325) + uRam000000018305e280;
  uVar17 = uVar9 + lVar5;
  uVar19 = (uRam000000018305e280 ^ 1) + uRam000000018305e468 + 1;
  uVar9 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ uVar9;
  uVar17 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uRam000000018305e280 ^ 1;
  uRam000000018305e560 =
       func_0x0001840f4950((uVar17 << 0x1d | uVar17 >> 0x23) - (uRam000000018305e468 + 1) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar5);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar6;
  uVar23 = (uint)(uVar6 >> 0x20);
  auVar27._8_4_ = (uint)uVar6;
  auVar27._0_8_ = uVar6;
  auVar27._12_4_ = uVar23;
  uVar10 = (uint)uVar6 & (uint)UNK_18001a990;
  uVar16 = SUB164(auVar27 | _UNK_18001a990,0);
  uVar17 = SUB168(auVar27 | _UNK_18001a990,0);
  uVar13 = SUB164(_UNK_18001a990 ^ auVar28,0);
  uVar9 = (uRam000000018305e560 ^ uVar6) & 0xfffffffffe000000;
  uVar17 = (ulonglong)uVar13 * (ulonglong)_UNK_1800f63e0 +
           ((ulonglong)_UNK_1800f63f0 * (ulonglong)uVar13 +
            (SUB168(_UNK_18001a990 ^ auVar28,0) >> 0x20) * (ulonglong)_UNK_1800f63e0 << 0x20) +
           (ulonglong)_UNK_1800f63c0 * (ulonglong)uVar16 +
           ((ulonglong)_UNK_1800f63d0 * (ulonglong)uVar16 +
            (uVar17 >> 0x20) * (ulonglong)_UNK_1800f63c0 << 0x20) +
           ((ulonglong)_UNK_1800f63b0 * (ulonglong)uVar10 << 0x20 |
           (ulonglong)_UNK_1800f63a0 * (ulonglong)uVar10) +
           ((ulonglong)_UNK_1800f6390 * (uVar6 & 0xffffffff) +
            (ulonglong)_UNK_1800f6380 * (ulonglong)uVar23 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_UNK_1800f6380 +
           (-(((ulonglong)uVar10 * (ulonglong)_UNK_1800f6450 << 0x20 |
              (ulonglong)uVar10 * (ulonglong)_UNK_1800f6440) +
             ((ulonglong)_UNK_1800f6430 * (uVar6 & 0xffffffff) +
              (uVar6 >> 0x20) * (ulonglong)_UNK_1800f6420 << 0x20) +
             (uVar6 & 0xffffffff) * (ulonglong)_UNK_1800f6420) -
           ((ulonglong)uVar16 * (ulonglong)_UNK_1800f6440 +
           ((uVar17 >> 0x20) * (ulonglong)_UNK_1800f6440 +
            (ulonglong)_UNK_1800f6450 * (ulonglong)uVar16 << 0x20))) + 0x52c1661cc66b9b19;
  uRam000000018305e4c8 = uRam000000018305e4b0 ^ uVar9 ^ uVar17;
  uRam000000018305e3a8 = (uRam000000018305e3a8 ^ uVar9) + uVar17 ^ 0xf25ba05f73e50f97;
  uRam000000018305e3c8 = (uRam000000018305e3c8 * -0x6f9648c653b2cfd9 ^ uRam000000018305e3a8) + uVar9
  ;
  uRam000000018305e338 = uRam000000018305e3c8 ^ uRam000000018305e3a8;
  uRam000000018305e348 = uRam000000018305e4a0 ^ uVar17;
  uVar9 = (~uRam000000018305e488 + 0x8ee97bdd631224d9) *
          ((uRam000000018305e210 ^ 0x2f9673f562c25b6a) +
          (uRam000000018305e210 & 0x2f9673f562c25b6a) * 2);
  uVar9 = (uVar9 | uRam000000018305e4c0) + (uVar9 & uRam000000018305e4c0);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uRam000000018305e330 = uVar17;
  uStack_100 = uVar6;
  uRam000000018305e548 =
       func_0x0001840f4950((uVar9 | 0xa17f082801d07fb2) + (uVar9 & 0xa17f082801d07fb2));
  uVar6 = ((uRam000000018305e548 ^ 0x84b93ca903c80000) >> 0x13) * -0x2a0349953bb80000;
  uRam000000018305e2a0 = (uRam000000018305e2a0 ^ uVar6) + 0xafff7bfde7f27cdf ^ 0xa1197e0d53b6a024;
  uRam000000018305e4d0 = (uRam000000018305e4d0 * -0x9c2547fd51bd727 ^ uRam000000018305e2a0) + uVar6;
  uRam000000018305e338 = uRam000000018305e4d0 ^ uRam000000018305e2a0;
  uRam000000018305e238 = 0xafff7bfde7f27cdf;
  uVar6 = (uRam000000018305e3a8 ^ _UNK_1800f6460) + uRam000000018305e4c8 + 0xae5ad69d1a778b6b;
  uVar9 = (uRam000000018305e4c8 ^ _UNK_1800f6468) + uRam000000018305e3a8 + 0xec1b5a47114e9c25;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e3a8 ^ _UNK_1800f6460;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e4c8 ^ _UNK_1800f6468;
  uRam000000018305e350 =
       func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018305e3a8 + 0xec1b5a47114e9c25) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018305e4c8 + 0xae5ad69d1a778b6b));
  uVar6 = (uRam000000018305e350 ^ 0x9a192c8ab4db46) & 0x7ffffffffffffff;
  uRam000000018305e5e0 = (uRam000000018305e5e0 ^ uVar6) + 0x42418cda8f1b346b ^ 0xbeb24c8a267864c2;
  uRam000000018305e588 = (uRam000000018305e588 * -0x4d5cc7dc1e889bb9 ^ uRam000000018305e5e0) + uVar6
  ;
  uRam000000018305e388 = uRam000000018305e588 ^ uRam000000018305e5e0;
  uRam000000018305e558 = 0x42418cda8f1b346b;
  uRam000000018305e258 = func_0x0001840f4950(uRam000000018305e2a0 + 0xee3f7d7ae9476bd ^ 0xba);
  uRam000000018305e2a8 = uRam000000018305e360 ^ uRam000000018305e258 ^ 0xce3b9c0e6dacd807;
  uRam000000018305e330 =
       (uRam000000018305e3d8 ^ uRam000000018305e258) + 0xce3b9c0e6dacd807 ^ 0xe10a4923c26aa211;
  uRam000000018305e258 =
       (uRam000000018305e258 * -0x70edc62e8ed8be95 ^ uRam000000018305e330) + uRam000000018305e258;
  uRam000000018305e330 = uRam000000018305e258 ^ uRam000000018305e330;
  uRam000000018305e3d8 = 0xce3b9c0e6dacd807;
  uRam000000018305e558 = func_0x0001840f4950(uRam000000018305e470 ^ 0xf62d56997713050b);
  uVar6 = uRam000000018305e558 ^ 0xaf6b373eed287cac;
  uVar6 = (uVar6 & 0xffffffff) * (_UNK_1800f6470 & 0xffffffff) +
          ((ulonglong)_UNK_1800f6480 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (_UNK_1800f6470 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  uRam000000018305e318 = (uRam000000018305e318 ^ uVar6) + 0x5094c8c112d78354 ^ 0x1fd3eac64cc9a1ac;
  uRam000000018305e4f0 = (uRam000000018305e4f0 * 0x115c83fe45c75893 ^ uRam000000018305e318) + uVar6;
  uRam000000018305e498 = uRam000000018305e4f0 ^ uRam000000018305e318;
  uRam000000018305e230 = 0x5094c8c112d78354;
  uVar6 = (~uRam000000018305e5e8 + 0x72815637aaad18b) *
          ((uRam000000018305e278 ^ 0xf8d7ea9c01771d50) +
          (uRam000000018305e278 & 0x78d7ea9c01771d50) * 2);
  uVar6 = (uVar6 | uRam000000018305e458) + (uVar6 & uRam000000018305e458);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018305e3e8 =
       func_0x0001840f4950((uVar6 | 0xffffffff7bddccda) + (uVar6 & 0xffffffff7bddccda));
  uRam000000018305e318 = uRam000000018305e370 ^ uRam000000018305e3b8 ^ 0xfff;
  uRam000000018305e4f0 = (uRam000000018305e4f0 ^ uRam000000018305e3b8) + 0xfff ^ 0xacad60472fc81f0d;
  uRam000000018305e218 =
       (uRam000000018305e218 * -0x7182c33245ad296d ^ uRam000000018305e4f0) + uRam000000018305e3b8;
  uRam000000018305e4d8 = uRam000000018305e218 ^ uRam000000018305e4f0;
  uRam000000018305e5a0 = 0xfff;
  uVar6 = (uRam000000018305e358 ^ _UNK_1800f6490) + uRam000000018305e558 + 0xafff7bfd63d05ffa;
  uVar9 = (uRam000000018305e558 ^ _UNK_1800f6498) + uRam000000018305e358 + 0x42418cda8f1b346b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e358 ^ _UNK_1800f6490;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e558 ^ _UNK_1800f6498;
  uRam000000018305e3d0 =
       func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018305e358 + 0x42418cda8f1b346b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018305e558 + 0xafff7bfd63d05ffa));
  uVar6 = uRam000000018305e3d0 >> 1 | uRam000000018305e3d0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018305e3d0;
  uRam000000018305e4b0 = uRam000000018305e4f0 ^ uVar6 ^ 0xf24108d8770db14a;
  uRam000000018305e588 = (uRam000000018305e588 ^ uVar6) + 0xf24108d8770db14a ^ 0x28d6c1465a9f32d7;
  uRam000000018305e5e8 = (uRam000000018305e5e8 * -0x4ce451658fc100c7 ^ uRam000000018305e588) + uVar6
  ;
  uRam000000018305e2d8 = uRam000000018305e5e8 ^ uRam000000018305e588;
  uRam000000018305e3b0 = 0xf24108d8770db14a;
  uRam000000018305e338 = func_0x0001840f4950(uRam000000018305e4e8 + 0xe568895b6e91bb5a ^ 0x44);
  uRam000000018305e290 =
       (uRam000000018305e290 ^ uRam000000018305e338 & 0xafff7bfde7f27cdf) + 0x24108d88712344b ^
       0x9bb8728ee02f2d2a;
  uRam000000018305e308 =
       (uRam000000018305e308 * 0x7a65cbda987a90ad ^ uRam000000018305e290) +
       (uRam000000018305e338 & 0xafff7bfde7f27cdf);
  uRam000000018305e598 = uRam000000018305e308 ^ uRam000000018305e290;
  uRam000000018305e370 = 0x24108d88712344b;
  uVar6 = (~uRam000000018305e5c8 + 0x48211b10e246897) *
          ((uRam000000018305e368 ^ 0xedbef727eccb6b91) +
          (uRam000000018305e368 & 0x6dbef727eccb6b91) * 2);
  uVar6 = (uVar6 | uRam000000018305e240) + (uVar6 & uRam000000018305e240);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018305e240 =
       func_0x0001840f4950((uVar6 | 0xe93ce696e2ef0307) + (uVar6 & 0xe93ce696e2ef0307));
  uRam000000018305e5d0 = uRam000000018305e550 ^ uRam000000018305e5f8 ^ 0xf24108d8770db14a;
  uRam000000018305e508 =
       (uRam000000018305e508 ^ uRam000000018305e5f8) + 0xf24108d8770db14a ^ 0x5d139e5fbbeda812;
  uRam000000018305e348 =
       (uRam000000018305e348 * 0x59ef2dbd8c7e90bd ^ uRam000000018305e508) + uRam000000018305e5f8;
  uRam000000018305e2b8 = uRam000000018305e348 ^ uRam000000018305e508;
  uRam000000018305e488 = 0xf24108d8770db14a;
  uVar6 = ((uRam000000018305e430 ^ 0x84222cda) +
          (ulonglong)((uint)uRam000000018305e430 & 0x84222cda) * 2) * -uRam000000018305e3d0;
  uVar6 = (uVar6 | uRam000000018305e4d0) + (uVar6 & uRam000000018305e4d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018305e248 =
       func_0x0001840f4950((uVar6 | 0x84222cda) + (ulonglong)((uint)uVar6 & 0x84222cda));
  uVar6 = uRam000000018305e248 ^ 0xfff;
  uRam000000018305e3d0 = uRam000000018305e550 ^ uVar6 ^ 0xfff;
  uRam000000018305e330 = (uRam000000018305e330 ^ uVar6) + 0xfff ^ 0x53ee18242f2563fc;
  uRam000000018305e520 = (uRam000000018305e520 * 0x33f8683812025a5 ^ uRam000000018305e330) + uVar6;
  uRam000000018305e380 = uRam000000018305e520 ^ uRam000000018305e330;
  uRam000000018305e548 = 0xfff;
  uVar6 = (~uRam000000018305e4f0 + 0x2f9673f5e6e07850) *
          ((uRam000000018305e5a8 ^ 0x2f9673f562c25b6a) +
          (uRam000000018305e5a8 & 0x2f9673f562c25b6a) * 2);
  uVar6 = (uVar6 | uRam000000018305e480) + (uVar6 & uRam000000018305e480);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018305e4b0 =
       func_0x0001840f4950((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uVar6 = ((uRam000000018305e4b0 ^ 0x64000636b6ca2861) & 0x7ffffffffff) << 8 |
          (uRam000000018305e4b0 ^ 0x64000636b6ca2861) >> 0x38;
  uRam000000018305e350 = uRam000000018305e350 ^ uVar6 ^ 0xbc7ae7e0cf798ecf;
  uRam000000018305e390 = (uRam000000018305e390 * -0x70d705c69c96a8e3 ^ uRam000000018305e350) + uVar6
  ;
  uRam000000018305e230 = uRam000000018305e390 ^ uRam000000018305e350;
  uRam000000018305e208 = uRam000000018305e440;
  uRam000000018305e408 = 0;
  switch(0xfff < uVar17) {
  case true:
    uStack_108 = *(ulonglong *)(auStack_148._0_8_ - 8);
    uVar6 = (~uRam000000018305e400 + 0x8be59bbdd47b5343) *
            ((uRam000000018305e448 ^ 0x2bf9d81fe7d234ad) +
            (uRam000000018305e448 & 0x2bf9d81fe7d234ad) * 2);
    uVar6 = (uVar6 | uRam000000018305e230) + (uVar6 & uRam000000018305e230);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    auStack_178 = auVar27;
    uStack_168 = (ulonglong)uVar23;
    uStack_160 = auVar27._8_8_ >> 0x20;
    auStack_128 = auVar28;
    uRam000000018305e3f0 =
         func_0x0001840f4950((uVar6 | 0xa01c43a233a967ef) + (uVar6 & 0xa01c43a233a967ef));
    uVar6 = uRam000000018305e3f0 >> 1 | uRam000000018305e3f0;
    uVar6 = uVar6 >> 2 | uVar6;
    uVar6 = uVar6 >> 4 | uVar6;
    uVar6 = uVar6 >> 8 | uVar6;
    uVar6 = uVar6 >> 0x10 | uVar6;
    uVar6 = uVar6 >> 0x20 | uVar6;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
            ^ uRam000000018305e3f0;
    uRam000000018305e560 = (uRam000000018305e560 ^ uVar6) + 0xa01c43a2b78b44ca ^ 0x18da9f39cd516cb1;
    uRam000000018305e5a0 =
         (uRam000000018305e5a0 * -0x28145353464e69cd ^ uRam000000018305e560) + uVar6;
    uRam000000018305e5f0 = uRam000000018305e5a0 ^ uRam000000018305e560;
    uRam000000018305e250 = 0xa01c43a2b78b44ca;
    uVar6 = (~uRam000000018305e478 + 0x1d96ebea24e12135) *
            ((uRam000000018305e370 ^ 0xffffffff7bdddcdd) +
            (uRam000000018305e370 & 0x7fffffff7bdddcdd) * 2);
    uVar6 = (uVar6 | uRam000000018305e4d8) + (uVar6 & uRam000000018305e4d8);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e420 =
         func_0x0001840f4950((uVar6 | 0xe26914155f3cfde9) + (uVar6 & 0xe26914155f3cfde9));
    uVar6 = uRam000000018305e420 - (uRam000000018305e420 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
            uRam000000018305e420;
    uRam000000018305e440 = uRam000000018305e508 ^ uVar6 ^ 0x1d96ebea24e1212c;
    uRam000000018305e258 = (uRam000000018305e258 ^ uVar6) + 0x1d96ebea24e1212c ^ 0xb33941d3ebcc9bfb;
    uRam000000018305e3e8 =
         (uRam000000018305e3e8 * 0x7e239c5581c8597b ^ uRam000000018305e258) + uVar6;
    uRam000000018305e5f8 = uRam000000018305e3e8 ^ uRam000000018305e258;
    uRam000000018305e590 = 0x1d96ebea24e1212c;
    uVar6 = (uRam000000018305e4c0 ^ _UNK_1800f64a0) + uRam000000018305e3d0 + 0x1d96ebeaa0c30209;
    uVar9 = (uRam000000018305e3d0 ^ _UNK_1800f64a8) + uRam000000018305e4c0 + 0xe2691415db1edecc;
    uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e4c0 ^ _UNK_1800f64a0;
    uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e3d0 ^ _UNK_1800f64a8;
    uRam000000018305e4b8 =
         func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                             (uRam000000018305e4c0 + 0xe2691415db1edecc) ^
                             (uVar6 << 0x1d | uVar6 >> 0x23) -
                             (uRam000000018305e3d0 + 0x1d96ebeaa0c30209));
    uVar6 = uRam000000018305e4b8 ^ 0xe2691415db1edecc;
    uRam000000018305e400 = uRam000000018305e2e8 ^ uVar6 ^ 0xfffffffffffffff8;
    uRam000000018305e460 = (uRam000000018305e460 ^ uVar6) - 8 ^ 0x6b85315cc5f9c7a6;
    uRam000000018305e300 =
         (uRam000000018305e300 * -0x13a85c48c959aba3 ^ uRam000000018305e460) + uVar6;
    uRam000000018305e250 = uRam000000018305e300 ^ uRam000000018305e460;
    uRam000000018305e580 = 0xfffffffffffffff8;
    uVar6 = (~uRam000000018305e578 + 0xa856f1b0ff57d5c1) *
            ((uRam000000018305e358 ^ 0x84222325) +
            (ulonglong)((uint)uRam000000018305e358 & 0x84222325) * 2);
    uVar6 = (uVar6 | uRam000000018305e458) + (uVar6 & uRam000000018305e458);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e4d0 =
         func_0x0001840f4950((uVar6 | 0xa856f1b07b75f6e5) + (uVar6 & 0xa856f1b07b75f6e5));
    uVar9 = uRam000000018305e4d0 << 0x25 | uRam000000018305e4d0 >> 0x1b;
    uVar6 = uVar9 >> 1 | uVar9;
    uVar6 = uVar6 >> 2 | uVar6;
    uVar6 = uVar6 >> 4 | uVar6;
    uVar6 = uVar6 >> 8 | uVar6;
    uVar6 = uVar6 >> 0x10 | uVar6;
    uVar6 = uVar6 >> 0x20 | uVar6;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar9 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
            ^ uVar9;
    uRam000000018305e4e0 = (uRam000000018305e4e0 ^ uVar9) + 0x57a90e4f00a82a40 ^ 0x69b5431cc4acb075;
    uRam000000018305e4b0 =
         (uRam000000018305e4b0 * -0x501c0ea819aa36a7 ^ uRam000000018305e4e0) + uVar9;
    uRam000000018305e460 = uRam000000018305e4b0 ^ uRam000000018305e4e0;
    uRam000000018305e4e8 = 0x57a90e4f00a82a40;
    uRam000000018305e5d0 = func_0x0001840f4950(uRam000000018305e450 ^ 0xe044410825c4335e);
    uVar6 = uRam000000018305e5d0 ^ 0xfffffffffffffff8;
    uRam000000018305e4c8 = uRam000000018305e348 ^ uVar6 ^ 0xfffffffffffffff8;
    uRam000000018305e450 = (uRam000000018305e450 ^ uVar6) - 8 ^ 0xcb4d406ef315ac48;
    uRam000000018305e548 =
         (uRam000000018305e548 * -0x7cddf4e05b84db7f ^ uRam000000018305e450) + uVar6;
    uRam000000018305e300 = uRam000000018305e548 ^ uRam000000018305e450;
    uRam000000018305e3f8 = 0xfffffffffffffff8;
    uRam000000018305e300 = func_0x0001840f4950(uRam000000018305e2d0 ^ 0x761b9a81d31f485);
    uVar6 = uRam000000018305e300 & 0x7fffffffffffffff;
    uRam000000018305e5f8 = uRam000000018305e518 ^ uVar6 ^ 0xf40631e6d3e143b8;
    uRam000000018305e350 = (uRam000000018305e350 ^ uVar6) + 0xf40631e6d3e143b8 ^ 0x32f1b04021851516;
    uRam000000018305e3d0 =
         (uRam000000018305e3d0 * -0x77c4bc1789c99ee1 ^ uRam000000018305e350) + uVar6;
    uRam000000018305e2c8 = uRam000000018305e3d0 ^ uRam000000018305e350;
    uRam000000018305e228 = 0xf40631e6d3e143b8;
    uVar6 = (~uRam000000018305e250 + 0xbf9ce192c1ebc41) *
            ((uRam000000018305e438 ^ 0xf40631e657c3609d) +
            (uRam000000018305e438 & 0x740631e657c3609d) * 2);
    uVar6 = (uVar6 | uRam000000018305e448) + (uVar6 & uRam000000018305e448);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e328 =
         func_0x0001840f4950((uVar6 | 0xffffffff7bdddcdd) + (uVar6 & 0xffffffff7bdddcdd));
    uVar9 = uRam000000018305e328 * -0xc11c59fc47c1781;
    uVar6 = uVar9 >> 1 | uVar9;
    uVar6 = uVar6 >> 2 | uVar6;
    uVar6 = uVar6 >> 4 | uVar6;
    uVar6 = uVar6 >> 8 | uVar6;
    uVar6 = uVar6 >> 0x10 | uVar6;
    uVar6 = uVar6 >> 0x20 | uVar6;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar9 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar9;
    uRam000000018305e4e8 = uRam000000018305e378 ^ uVar9 ^ 0xfffffffffffffff8;
    uRam000000018305e360 = (uRam000000018305e360 ^ uVar9) - 8 ^ 0x81328dcdf675390b;
    uRam000000018305e3d0 =
         (uRam000000018305e3d0 * 0x1c9f669f734873cb ^ uRam000000018305e360) + uVar9;
    uRam000000018305e348 = uRam000000018305e3d0 ^ uRam000000018305e360;
    uRam000000018305e318 = 0xfffffffffffffff8;
    uRam000000018305e4e8 = func_0x0001840f4950(uRam000000018305e5d0 + 0x49f759c2f54a1244 ^ 0x94);
    uVar6 = uRam000000018305e4e8 ^ 0xfbbedfeaffbf7ffa;
    uRam000000018305e290 = uRam000000018305e3f0 ^ uVar6 ^ 0x7bd6e18ba64ac4c4;
    uRam000000018305e260 = (uRam000000018305e260 ^ uVar6) + 0x7bd6e18ba64ac4c4 ^ 0x3f044b53d664a80e;
    uRam000000018305e4b0 = (uRam000000018305e4b0 * 0xf7d9268f1cb9c4d ^ uRam000000018305e260) + uVar6
    ;
    uRam000000018305e4b8 = uRam000000018305e4b0 ^ uRam000000018305e260;
    uRam000000018305e478 = 0x7bd6e18ba64ac4c4;
    uVar6 = (~uRam000000018305e5c0 + 0xa01c43a2b78b44cb) *
            ((uRam000000018305e268 ^ 0xdbba9de86a9d5cdf) +
            (uRam000000018305e268 & 0x5bba9de86a9d5cdf) * 2);
    uVar6 = (uVar6 | uRam000000018305e290) + (uVar6 & uRam000000018305e290);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e228 =
         func_0x0001840f4950((uVar6 | 0x7ba6de4add161815) + (uVar6 & 0x7ba6de4add161815));
    uRam000000018305e5f8 =
         (uRam000000018305e5f8 ^ uRam000000018305e5c8) + 0x7ba6de4a59343b30 ^ 0xa42d877ad4805bec;
    uRam000000018305e438 =
         (uRam000000018305e438 * 0x5bcc22e709ccf903 ^ uRam000000018305e5f8) + uRam000000018305e5c8;
    uRam000000018305e258 = uRam000000018305e438 ^ uRam000000018305e5f8;
    uRam000000018305e5d8 = 0x7ba6de4a59343b30;
    uRam000000018305e3a0 = func_0x0001840f4950(uRam000000018305e4d8 ^ 0xc6089ea3153ded3a);
    uRam000000018305e5f8 =
         (uRam000000018305e588 ^ uRam000000018305e3a0) + 0x801801a0a68b44ca ^ 0x29193fd1804184f5;
    uRam000000018305e468 =
         (uRam000000018305e468 * 0x5d851858531725c1 ^ uRam000000018305e5f8) + uRam000000018305e3a0;
    uRam000000018305e5f8 = uRam000000018305e468 ^ uRam000000018305e5f8;
    uRam000000018305e588 = 0x801801a0a68b44ca;
    uVar6 = (uRam000000018305e568 ^ _UNK_1800f64b0) + uRam000000018305e218 + 0x7ba6de4add161815;
    uVar9 = (uRam000000018305e218 ^ _UNK_1800f64b8) + uRam000000018305e568 + 0x3003414d168994;
    uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e568 ^ _UNK_1800f64b0;
    uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e218 ^ _UNK_1800f64b8;
    uRam000000018305e240 =
         func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                             (uRam000000018305e568 + 0x3003414d168994) ^
                             (uVar6 << 0x1d | uVar6 >> 0x23) -
                             (uRam000000018305e218 + 0x7ba6de4add161815));
    uVar6 = uRam000000018305e240 ^ 0x9c9b44330bfee7c0;
    uVar6 = (uVar6 & 0x3ffffff) >> 0x14 |
            ((uVar6 << 0x37 | uVar6 >> 9) >> 0x11 | (uVar6 >> 9) << 0x2f) << 6;
    uRam000000018305e330 = uRam000000018305e4e8 ^ uVar6 ^ 0x7bd6e18ba64ac4c4;
    uRam000000018305e258 = (uRam000000018305e258 ^ uVar6) + 0x7bd6e18ba64ac4c4 ^ 0x26d7125333db14b5;
    uRam000000018305e510 =
         (uRam000000018305e510 * -0x584d2291fe80573d ^ uRam000000018305e258) + uVar6;
    uRam000000018305e428 = uRam000000018305e510 ^ uRam000000018305e258;
    uRam000000018305e380 = 0x7bd6e18ba64ac4c4;
    uVar6 = (~uRam000000018305e5b8 + 0x7bd6e18ba64ac4c5) *
            ((uRam000000018305e2f0 ^ 0x7bd6e18b2268e7e1) +
            (uRam000000018305e2f0 & 0x7bd6e18b2268e7e1) * 2);
    uVar6 = (uVar6 | uRam000000018305e3b0) + (uVar6 & uRam000000018305e3b0);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e4f0 =
         func_0x0001840f4950((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
    uRam000000018305e2f8 = ~(uRam000000018305e4f0 * 0x4691ee0f647c5def) & 0x7bd6e18ba64ac4c4;
    uRam000000018305e2a8 = uRam000000018305e2a8 ^ uRam000000018305e2f8 ^ 0xe784ebdabcff1b99;
    uRam000000018305e5e0 =
         (uRam000000018305e5e0 * 0x3573a193a78f875b ^ uRam000000018305e2a8) + uRam000000018305e2f8;
    uRam000000018305e310 = uRam000000018305e5e0 ^ uRam000000018305e2a8;
    uRam000000018305e448 = 0;
    uRam000000018305e260 = func_0x0001840f4950(uRam000000018305e410 + 0x8744a0aadda3ddec ^ 0xd1);
    uVar6 = (uRam000000018305e260 ^ 0xfffffffffffffff8) << 0x2f |
            (uRam000000018305e260 ^ 0xfffffffffffffff8) >> 0x11;
    uRam000000018305e2c8 = uRam000000018305e2b0 ^ uVar6 ^ 0xfffffffffffffff8;
    uRam000000018305e590 = (uRam000000018305e590 ^ uVar6) - 8 ^ 0x6cd83fc3ac51b97c;
    uRam000000018305e268 = (uRam000000018305e268 * 0xb22a3f7333edfeb ^ uRam000000018305e590) + uVar6
    ;
    uRam000000018305e560 = uRam000000018305e268 ^ uRam000000018305e590;
    uRam000000018305e348 = 0xfffffffffffffff8;
    uRam000000018305e590 = func_0x0001840f4950(uRam000000018305e2a8 + 0xa9f456d1fe1a21b ^ 0x2f);
    uRam000000018305e4d0 =
         (uRam000000018305e5a0 ^ ~uRam000000018305e590) + 0x2445621711408005 ^ 0x70427134448ddc8e;
    uRam000000018305e270 =
         (uRam000000018305e270 * -0x66edb9fac688b0fd ^ uRam000000018305e4d0) + ~uRam000000018305e590
    ;
    uRam000000018305e4d0 = uRam000000018305e270 ^ uRam000000018305e4d0;
    uRam000000018305e5a0 = 0x2445621711408005;
    uRam000000018305e3b8 = func_0x0001840f4950(uRam000000018305e3d0 ^ 0x154bf0f75220440e);
    uRam000000018305e260 = uRam000000018305e5c8 ^ uRam000000018305e3b8 ^ 0xfffffffffffffff8;
    uRam000000018305e508 = (uRam000000018305e508 ^ uRam000000018305e3b8) - 8 ^ 0xd4225d85886c9db0;
    uRam000000018305e2f0 =
         (uRam000000018305e2f0 * -0x6bc102c78f9f5c23 ^ uRam000000018305e508) + uRam000000018305e3b8;
    uRam000000018305e528 = uRam000000018305e2f0 ^ uRam000000018305e508;
    uRam000000018305e338 = 0xfffffffffffffff8;
    uVar6 = func_0x0001840f4950(uRam000000018305e448 ^ 0x9bd468bb43a8ccca);
    uVar9 = uVar6 ^ 0xfffffffffffffff8;
    uRam000000018305e5e0 = uRam000000018305e4e8 ^ uVar9 ^ 0xfffffffffffffff8;
    uRam000000018305e500 = (uVar6 ^ uVar9) - 8 ^ 0xbd27490a465ccedd;
    uRam000000018305e258 =
         (uRam000000018305e258 * 0x787cd812b9755afb ^ uRam000000018305e500) + uVar9;
    uRam000000018305e298 = uRam000000018305e258 ^ uRam000000018305e500;
    uRam000000018305e5a8 = 0xfffffffffffffff8;
    uVar6 = (~uRam000000018305e248 - 7) *
            ((auStack_148._0_8_ ^ 0x84222325 ^ uRam000000018305e268) +
            ((auStack_148._0_8_ ^ 0x84222325) & uRam000000018305e268) * 2);
    uVar6 = (uVar6 | uRam000000018305e3c8) + (uVar6 & uRam000000018305e3c8);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e5e8 =
         func_0x0001840f4950((auStack_148._0_8_ ^ 0xffffffff7bdddcdd | uVar6) +
                             (uVar6 & (auStack_148._0_8_ ^ 0xffffffff7bdddcdd)));
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auStack_148._0_8_;
    uVar13 = SUB84(auStack_148._0_8_,4);
    auVar20._8_4_ = (int)auStack_148._0_8_;
    auVar20._0_8_ = auStack_148._0_8_;
    auVar20._12_4_ = uVar13;
    uVar24 = SUB164(auVar20 & _UNK_1800627b0,0);
    uVar17 = SUB168(auVar20 & _UNK_1800627b0,0);
    uVar10 = SUB164(auVar20 | _UNK_1800627b0,0);
    uVar16 = SUB164(_UNK_1800627b0 ^ auVar20,0);
    uVar19 = SUB168(_UNK_1800627b0 ^ auVar20,0);
    auVar25._8_4_ = 0xffffffff;
    auVar25._0_8_ = 0xffffffffffffffff;
    auVar25._12_4_ = 0xffffffff;
    uVar9 = uRam000000018305e5e8 << 0xd | uRam000000018305e5e8 >> 0x33;
    uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar9 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar9;
    uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar9 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar9;
    uVar23 = SUB164(auVar25 ^ auVar14,0);
    uRam000000018305e338 =
         (ulonglong)_UNK_1800f6530 * (ulonglong)uVar16 +
         ((ulonglong)_UNK_1800f6540 * (ulonglong)uVar16 +
          (uVar19 >> 0x20) * (ulonglong)_UNK_1800f6530 << 0x20) +
         ((ulonglong)_UNK_1800f6510 * (ulonglong)uVar10 + _UNK_1800f6520 << 0x20) +
         (ulonglong)_UNK_1800f6500 * (ulonglong)uVar10 +
         (ulonglong)_UNK_1800f64e0 * (ulonglong)uVar24 +
         ((ulonglong)_UNK_1800f64f0 * (ulonglong)uVar24 +
          (uVar17 >> 0x20) * (ulonglong)_UNK_1800f64e0 << 0x20) +
         ((ulonglong)_UNK_1800f64d0 * (auStack_148._0_8_ & 0xffffffff) +
          (ulonglong)_UNK_1800f64c0 * (ulonglong)uVar13 << 0x20) +
         (auStack_148._0_8_ & 0xffffffff) * (ulonglong)_UNK_1800f64c0 +
         (-((ulonglong)uVar23 * (_UNK_1800f65b0 & 0xffffffff) +
           ((ulonglong)_UNK_1800f6610 * (ulonglong)uVar23 +
            (SUB168(auVar25 ^ auVar14,0) >> 0x20) * (_UNK_1800f65b0 & 0xffffffff) << 0x20)) -
         ((ulonglong)uVar16 * (ulonglong)_UNK_1800f65f0 +
          ((ulonglong)_UNK_1800f6600 * (ulonglong)uVar16 +
           (uVar19 >> 0x20) * (ulonglong)_UNK_1800f65f0 << 0x20) +
          ((ulonglong)uVar10 * (ulonglong)_UNK_1800f65d0 + _UNK_1800f65e0 << 0x20) +
          (ulonglong)_UNK_1800f65c0 * (ulonglong)uVar10 +
         (ulonglong)uVar24 * (ulonglong)_UNK_1800f6590 +
         ((ulonglong)_UNK_1800f65a0 * (ulonglong)uVar24 +
          (uVar17 >> 0x20) * (ulonglong)_UNK_1800f6590 << 0x20) +
         ((auStack_148._0_8_ & 0xffffffff) * (ulonglong)_UNK_1800f6580 +
          (ulonglong)uVar13 * (ulonglong)_UNK_1800f6570 << 0x20) +
         (auStack_148._0_8_ & 0xffffffff) * (ulonglong)_UNK_1800f6570)) + 0xd66eda2f711086f5;
    uRam000000018305e4f8 = uRam000000018305e430 ^ uVar9 ^ uRam000000018305e338;
    uRam000000018305e370 =
         (uRam000000018305e370 ^ uVar9) + uRam000000018305e338 ^ 0x7c83b09e73d75bee;
    uRam000000018305e5c0 =
         (uRam000000018305e5c0 * -0x21435ae30edb078f ^ uRam000000018305e370) + uVar9;
    uRam000000018305e3d8 = uRam000000018305e5c0 ^ uRam000000018305e370;
    uStack_110 = SUB168(auVar20 | _UNK_1800627b0,8);
    uStack_118 = uRam000000018305e338 - uStack_108;
    uVar6 = (~uRam000000018305e418 + 0xff1df1cc599b0d36) *
            ((uRam000000018305e5d8 ^ 0x5746d31c1a4a1ae6) +
            (uRam000000018305e5d8 & 0x5746d31c1a4a1ae6) * 2);
    uVar6 = (uVar6 | uRam000000018305e560) + (uVar6 & uRam000000018305e560);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e2d0 =
         func_0x0001840f4950((uVar6 | 0xa85b22d043d117d3) + (uVar6 & 0xa85b22d043d117d3));
    uVar6 = uRam000000018305e2d0 << 0xd | uRam000000018305e2d0 >> 0x33;
    uRam000000018305e3f8 = (uRam000000018305e3f8 ^ uVar6) + 0xff5ff3dcdffb3df7 ^ 0x44e073b5ef335d88;
    uRam000000018305e558 = (uRam000000018305e558 * 0xdcedb9206ba1fbb ^ uRam000000018305e3f8) + uVar6
    ;
    uRam000000018305e318 = uRam000000018305e558 ^ uRam000000018305e3f8;
    uRam000000018305e208 = 0xff5ff3dcdffb3df7;
    uVar6 = (uRam000000018305e520 ^ _UNK_1800f6620) + uRam000000018305e498 + 0x1109e6c791987605;
    uVar9 = (uRam000000018305e498 ^ _UNK_1800f6628) + uRam000000018305e520 + 0x5a59ce1291dc6611;
    uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e520 ^ _UNK_1800f6620;
    uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e498 ^ _UNK_1800f6628;
    uRam000000018305e208 =
         func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                             (uRam000000018305e520 + 0x5a59ce1291dc6611) ^
                             (uVar6 << 0x1d | uVar6 >> 0x23) -
                             (uRam000000018305e498 + 0x1109e6c791987605));
    uVar6 = (uRam000000018305e208 ^ 0x79ba9878f6ca6720) << 0x25 |
            (uRam000000018305e208 ^ 0x79ba9878f6ca6720) >> 0x1b;
    uRam000000018305e4c0 = (uRam000000018305e4c0 ^ uVar6) + 0x4b5028d584663331 ^ 0x53562ce8f23a5194;
    uRam000000018305e368 = (uRam000000018305e368 * -0x6cae3786ed22df ^ uRam000000018305e4c0) + uVar6
    ;
    uRam000000018305e3f8 = uRam000000018305e368 ^ uRam000000018305e4c0;
    uRam000000018305e218 = uRam000000018305e228 ^ 0x4b5028d584663331;
    uRam000000018305e330 = 0x4b5028d584663331;
    uVar6 = (~uRam000000018305e258 + 0x39ae6aefdba710f3) *
            ((uRam000000018305e560 ^ 0x84222305) +
            (ulonglong)((uint)uRam000000018305e560 & 0x84222305) * 2);
    uVar6 = (uVar6 | uRam000000018305e228) + (uVar6 & uRam000000018305e228);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e478 =
         func_0x0001840f4950((uVar6 | 0x39ae6aef5f8533f7) + (uVar6 & 0x39ae6aef5f8533f7));
    uVar6 = uRam000000018305e478 ^ 0x20;
    uRam000000018305e390 = uRam000000018305e3c0 ^ uVar6 ^ 0x39ae6aefdba71112;
    uRam000000018305e3a8 = (uRam000000018305e3a8 ^ uVar6) + 0x39ae6aefdba71112 ^ 0x5bd2a996db100d49;
    uRam000000018305e5d0 =
         (uRam000000018305e5d0 * -0x3b834770d955d5f1 ^ uRam000000018305e3a8) + uVar6;
    uRam000000018305e498 = uRam000000018305e5d0 ^ uRam000000018305e3a8;
    uRam000000018305e388 = 0x39ae6aefdba71112;
    uRam000000018305e3b8 = func_0x0001840f4950(uRam000000018305e548 + 0x2ccd49516843c06 ^ 0x42);
    uVar6 = uRam000000018305e3b8 ^ 0xfffffffffffffe1c;
    uRam000000018305e588 = uRam000000018305e588 ^ uVar6 ^ 0x20;
    uRam000000018305e408 = (uRam000000018305e408 ^ uVar6) + 0x20 ^ 0x5fcc2fabf74e33d5;
    uRam000000018305e438 =
         (uRam000000018305e438 * 0x1a49261021e07b8d ^ uRam000000018305e408) + uVar6;
    uRam000000018305e580 = uRam000000018305e438 ^ uRam000000018305e408;
    uRam000000018305e460 = 0x20;
    uVar6 = (~uRam000000018305e530 + 0xb133ae413b4e2401) *
            ((uRam000000018305e548 ^ 0x84222325) +
            (ulonglong)((uint)uRam000000018305e548 & 0x84222325) * 2);
    uVar6 = (uVar6 | uRam000000018305e2f0) + (uVar6 & uRam000000018305e2f0);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e318 =
         func_0x0001840f4950((uVar6 | 0xb133ae41bf6c0725) + (uVar6 & 0xb133ae41bf6c0725));
    uRam000000018305e5b0 =
         (uRam000000018305e5b0 ^ uRam000000018305e5c8) + 0x4ecc51bec4b1dc00 ^ 0x8be9dc45dbcd95ba;
    uRam000000018305e428 =
         (uRam000000018305e428 * 0x11af2a58ff8b002f ^ uRam000000018305e5b0) + uRam000000018305e5c8;
    uRam000000018305e260 = uRam000000018305e428 ^ uRam000000018305e5b0;
    uRam000000018305e478 = 0x4ecc51bec4b1dc00;
    uRam000000018305e438 = func_0x0001840f4950(uRam000000018305e498 ^ 0x3f010d70fc59ac94);
    uRam000000018305e268 = uRam000000018305e380 ^ uRam000000018305e470 ^ 0xb133ae413b4e2420;
    uRam000000018305e208 =
         (uRam000000018305e208 ^ uRam000000018305e470) + 0xb133ae413b4e2420 ^ 0x5fd00e6cb886a569;
    uRam000000018305e528 =
         (uRam000000018305e528 * 0x31636e5ba4deeebf ^ uRam000000018305e208) + uRam000000018305e470;
    uRam000000018305e5c8 = uRam000000018305e528 ^ uRam000000018305e208;
    uRam000000018305e490 = 0xb133ae413b4e2420;
    uRam000000018305e568 = func_0x0001840f4950(uRam000000018305e3a0 ^ 0x3bc644d8fcd53bb4);
    uVar6 = uRam000000018305e568 >> 1 | uRam000000018305e568;
    uVar6 = uVar6 >> 2 | uVar6;
    uVar6 = uVar6 >> 4 | uVar6;
    uVar6 = uVar6 >> 8 | uVar6;
    uVar6 = uVar6 >> 0x10 | uVar6;
    uVar6 = uVar6 >> 0x20 | uVar6;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
            uRam000000018305e568;
    uRam000000018305e230 = uRam000000018305e598 ^ uVar6 ^ 0x20;
    uRam000000018305e420 = (uRam000000018305e420 ^ uVar6) + 0x20 ^ 0x9d81ac46a376894a;
    uRam000000018305e248 =
         (uRam000000018305e5b8 * 0x2ae253e8d4aa0889 ^ uRam000000018305e420) + uVar6 ^
         uRam000000018305e420;
    uRam000000018305e5b8 = 0x20;
    uVar6 = (~uRam000000018305e578 + 0xfa6ea3f8a96dca41) *
            ((uRam000000018305e450 ^ 0x84222305) +
            (ulonglong)((uint)uRam000000018305e450 & 0x84222305) * 2);
    uVar6 = (uVar6 | uRam000000018305e270) + (uVar6 & uRam000000018305e270);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e2c8 =
         func_0x0001840f4950((uVar6 | 0xfa6ea3f82d4fe945) + (uVar6 & 0xfa6ea3f82d4fe945));
    uVar6 = uRam000000018305e2c8 * 0x53490393bfca40f;
    uRam000000018305e5b8 = uRam000000018305e318 ^ uVar6 ^ 0xfa6ea3f8a96dca60;
    uRam000000018305e458 = (uRam000000018305e458 ^ uVar6) + 0xfa6ea3f8a96dca60 ^ 0xfeaf21dbd5da66ea;
    uRam000000018305e3c8 =
         (uRam000000018305e3c8 * 0x3f6a4893e51ac3f7 ^ uRam000000018305e458) + uVar6;
    uRam000000018305e230 = uRam000000018305e3c8 ^ uRam000000018305e458;
    uRam000000018305e378 = 0xfa6ea3f8a96dca60;
    uRam000000018305e370 = func_0x0001840f4950(uRam000000018305e528 + 0x6daff5461ab4a4b ^ 0xe7);
    uVar6 = uRam000000018305e370 & 0xffffffffffff;
    uRam000000018305e270 = uRam000000018305e388 ^ uVar6 ^ 0x4ab01cb264617128;
    uRam000000018305e530 = (uRam000000018305e530 ^ uVar6) + 0x4ab01cb264617128 ^ 0x33cc2813f888abe6;
    uRam000000018305e480 =
         (uRam000000018305e480 * -0x7db4be81277c0a25 ^ uRam000000018305e530) + uVar6;
    uRam000000018305e3a8 = uRam000000018305e480 ^ uRam000000018305e530;
    uRam000000018305e508 = 0x4ab01cb264617128;
    uRam000000018305e338 = func_0x0001840f4950(uRam000000018305e400 + 0x714fcdf9fb4868b ^ 200);
    uVar9 = uRam000000018305e338 ^ 0xff5ffbdddfff3ff7;
    uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar9 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar9;
    uRam000000018305e590 = (uRam000000018305e590 ^ uVar9) + 0xb40fdb095b9d0ec6 ^ 0x64a8473359e5d572;
    uRam000000018305e308 =
         (uRam000000018305e308 * 0x28dcae4dc729b58f ^ uRam000000018305e590) + uVar9;
    uRam000000018305e4b0 = uRam000000018305e308 ^ uRam000000018305e590;
    uRam000000018305e3b0 = 0xb40fdb095b9d0ec6;
    uVar6 = (~uRam000000018305e478 + 0x96a041a908c46263) *
            ((uRam000000018305e538 ^ 0xb40fdb09dfbf2de3) +
            (uRam000000018305e538 & 0x340fdb09dfbf2de3) * 2);
    uVar6 = (uVar6 | uRam000000018305e390) + (uVar6 & uRam000000018305e390);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e318 =
         func_0x0001840f4950((uVar6 | 0x22af9aa0d77b4f81) + (uVar6 & 0x22af9aa0d77b4f81));
    uVar6 = uRam000000018305e318 - (uRam000000018305e318 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = uRam000000018305e318 ^ 0xb40fdb095b9d0ec6 ^
            (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4;
    uRam000000018305e430 = uRam000000018305e590 ^ uVar6 ^ 0x4ab01cb264617128;
    uRam000000018305e2c8 = (uRam000000018305e2c8 ^ uVar6) + 0x4ab01cb264617128 ^ 0xb11b1a3d63e22b30;
    uRam000000018305e288 =
         (uRam000000018305e288 * -0x66a9fce8dc213cb3 ^ uRam000000018305e2c8) + uVar6;
    uRam000000018305e508 = uRam000000018305e288 ^ uRam000000018305e2c8;
    uRam000000018305e4a8 = 0x4ab01cb264617128;
    uVar6 = func_0x0001840f4950(uRam000000018305e338 + 0xffe2ff7c03001dff ^ 0xea);
    uVar6 = (((uVar6 ^ 0x20) & 0xffffffff) * (ulonglong)_UNK_1800f6640 +
             (uVar6 >> 0x20) * (_UNK_1800f6630 & 0xffffffff) << 0x20) +
            ((uVar6 ^ 0x20) & 0xffffffff) * (_UNK_1800f6630 & 0xffffffff) & 0x7fffffffffffffff;
    uRam000000018305e5d0 = uRam000000018305e2e0 ^ uVar6 ^ 0x20;
    uRam000000018305e258 = (uRam000000018305e258 ^ uVar6) + 0x20 ^ 0xb9e108d9acb9ff5b;
    uRam000000018305e458 =
         (uRam000000018305e458 * 0x1a5e40b96a734277 ^ uRam000000018305e258) + uVar6;
    uRam000000018305e278 = uRam000000018305e458 ^ uRam000000018305e258;
    uRam000000018305e200 = 0x20;
    uVar6 = (~uRam000000018305e430 + 0xa00c232004c209) *
            ((uRam000000018305e2a8 ^ 0xff5ff3dc5bd91ed2) +
            (uRam000000018305e2a8 & 0x7f5ff3dc5bd91ed2) * 2);
    uVar6 = (uVar6 | uRam000000018305e358) + (uVar6 & uRam000000018305e358);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uVar6 = func_0x0001840f4950((uVar6 | 0xffffffff7bdddcda) + (uVar6 & 0xffffffff7bdddcda));
    uRam000000018305e5f0 = uRam000000018305e5f0 ^ uVar6 ^ 0xa7cb2521e788ac6a;
    uRam000000018305e500 =
         (uRam000000018305e2d0 * 0x5124fac480beb937 ^ uRam000000018305e5f0) + uVar6 ^
         uRam000000018305e5f0;
    uRam000000018305e2d0 = 0;
    uVar6 = ((uRam000000018305e3c0 ^ 0x84222305) +
            (ulonglong)((uint)uRam000000018305e3c0 & 0x84222305) * 2) * -uRam000000018305e5e8;
    uVar6 = (uVar6 | uRam000000018305e210) + (uVar6 & uRam000000018305e210);
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 << 0x11 ^ uVar6;
    uRam000000018305e5c8 =
         func_0x0001840f4950((uVar6 | 0x84222305) + (ulonglong)((uint)uVar6 & 0x84222305));
    uVar6 = uRam000000018305e5c8 & 0x3fffffffffffffff;
    uRam000000018305e4f0 = uRam000000018305e5d8 ^ uVar6 ^ 0x20;
    uRam000000018305e450 = (uRam000000018305e450 ^ uVar6) + 0x20 ^ 0xee4f22ee403b2998;
    uRam000000018305e5b8 =
         (uRam000000018305e5b8 * -0x16967f640db0546f ^ uRam000000018305e450) + uVar6;
    uRam000000018305e268 = uRam000000018305e5b8 ^ uRam000000018305e450;
    uRam000000018305e490 = 0x20;
    uRam000000018305e2e8 = func_0x0001840f4950(uRam000000018305e330 + 0xffdcff7be5001dff ^ 0xc3);
    uVar6 = uRam000000018305e320 << 8 | uRam000000018305e320 >> 0x38;
    uRam000000018305e388 = uRam000000018305e388 ^ uVar6 ^ 0xd65b46b7462019ea;
    uRam000000018305e540 =
         (uRam000000018305e540 * 0x62498ba0697ea60b ^ uRam000000018305e388) + uVar6;
    uRam000000018305e5e8 = uRam000000018305e540 ^ uRam000000018305e388;
    uRam000000018305e308 = 0;
    uVar6 = (uRam000000018305e288 ^ 0x84222305) + uRam000000018305e2d8 + 0x84222305;
    uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e288 ^ 0x84222305;
    uVar9 = ((uRam000000018305e2d8 + uRam000000018305e288) * 0x2000 |
            uRam000000018305e2d8 + uRam000000018305e288 >> 0x33) ^ uRam000000018305e2d8;
    uRam000000018305e4f8 =
         func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - uRam000000018305e288 ^
                             (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018305e2d8 + 0x84222305));
    auVar11 = auStack_178;
    uVar6 = ((ulonglong)((uint)uRam000000018305e4f8 ^ 0x20) << 0x2b | uRam000000018305e4f8 >> 0x15)
            ^ 0x20;
    uRam000000018305e2c0 = uRam000000018305e5f8 ^ uVar6 ^ 0x20;
    uRam000000018305e5a0 = (uRam000000018305e5a0 ^ uVar6) + 0x20 ^ 0xae3672701f7bb33f;
    uRam000000018305e438 =
         (uRam000000018305e438 * -0x12eaa8f661da0891 ^ uRam000000018305e5a0) + uVar6;
    uRam000000018305e3d0 = uRam000000018305e438 ^ uRam000000018305e5a0;
    uRam000000018305e4a8 = 0x20;
    switch(uStack_118 < 0x20) {
    case false:
code_r0x000183f5d948:
      FUN_18000544c(0,0,0,0,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    case true:
      uVar2 = auStack_178._0_8_;
      uRam000000018305e260 = func_0x0001840f4950(uRam000000018305e490 + 0x66a1efb7ee8b9077 ^ 0xb);
      uRam000000018305e2c8 =
           (uRam000000018305e2c8 ^ uRam000000018305e260 & 0x7fffffffffffffff) + 0xfab1f7bfdff2db3f ^
           0xe41abef26cda36e0;
      uRam000000018305e450 =
           (uRam000000018305e450 * 0x2d57619828e98f05 ^ uRam000000018305e2c8) +
           (uRam000000018305e260 & 0x7fffffffffffffff);
      uRam000000018305e438 = uRam000000018305e450 ^ uRam000000018305e2c8;
      uRam000000018305e5a8 = 0xfab1f7bfdff2db3f;
      uVar6 = (uRam000000018305e4e8 ^ _UNK_1800f6650) + uRam000000018305e308 + 0x68d58b6ef6652966;
      uVar9 = (uRam000000018305e308 ^ _UNK_1800f6658) + uRam000000018305e4e8 + 0x2599396f494990;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e4e8 ^ _UNK_1800f6650;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e308 ^ _UNK_1800f6658;
      uRam000000018305e308 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                               (uRam000000018305e4e8 + 0x2599396f494990) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) -
                               (uRam000000018305e308 + 0x68d58b6ef6652966));
      uVar6 = (uRam000000018305e308 & 0x7fffffffffffffff) -
              ((uRam000000018305e308 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = uRam000000018305e308 & 0x7fffffffffffffff ^ 0x68d58b6e72470a43 ^
              (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5;
      uRam000000018305e388 =
           (uRam000000018305e388 ^ uVar6) + 0x68f012571d0e43d3 ^ 0x915ebc07c816cc2b;
      uRam000000018305e278 =
           (uRam000000018305e278 * 0x455d54db512bbcbb ^ uRam000000018305e388) + uVar6;
      uRam000000018305e420 = uRam000000018305e278 ^ uRam000000018305e388;
      uRam000000018305e370 = 0x68f012571d0e43d3;
      uVar6 = (~uRam000000018305e2d8 + 0x7145d5e51a97ac0c) *
              ((uRam000000018305e4a8 ^ 0x84222325) +
              (ulonglong)((uint)uRam000000018305e4a8 & 0x84222325) * 2);
      uVar6 = (uVar6 | uRam000000018305e3c8) + (uVar6 & uRam000000018305e3c8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e4e0 =
           func_0x0001840f4950((uVar6 | 0x7145d5e59eb58f2e) + (uVar6 & 0x7145d5e59eb58f2e));
      uVar6 = ((uRam000000018305e4e0 ^ 0x7145d5e51a97ac0b) << 0x2d |
              (uRam000000018305e4e0 ^ 0x7145d5e51a97ac0b) >> 0x13) * -0x48d535c0d985ccb9;
      uRam000000018305e5e8 =
           (uRam000000018305e5e8 ^ uVar6) + 0x8eba2a1ae56853f5 ^ 0x3c1e95046052b8b0;
      uRam000000018305e4d8 =
           (uRam000000018305e4d8 * 0x65f613141c940231 ^ uRam000000018305e5e8) + uVar6;
      uRam000000018305e3c0 = uRam000000018305e4d8 ^ uRam000000018305e5e8;
      uRam000000018305e2e8 = 0x8eba2a1ae56853f5;
      uVar6 = (~uRam000000018305e210 + 0x8eba2a1ae56853f6) *
              ((uRam000000018305e2e0 ^ 0x7145d5e59eb58f16) +
              (uRam000000018305e2e0 & 0x7145d5e59eb58f16) * 2);
      uVar6 = (uVar6 | uRam000000018305e320) + (uVar6 & uRam000000018305e320);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e210 =
           func_0x0001840f4950((uVar6 | 0xffffffff7bdddce3) + (uVar6 & 0xffffffff7bdddce3));
      uVar6 = uRam000000018305e210 ^ 0xffffffffffffffc6;
      uRam000000018305e278 = uRam000000018305e2d8 ^ uVar6 ^ 0x28;
      uRam000000018305e4d0 = (uRam000000018305e4d0 ^ uVar6) + 0x28 ^ 0xd683adebd20ec832;
      uRam000000018305e3d0 =
           (uRam000000018305e3d0 * -0x797cd6d4ec275d73 ^ uRam000000018305e4d0) + uVar6;
      uRam000000018305e548 = uRam000000018305e3d0 ^ uRam000000018305e4d0;
      uRam000000018305e350 = 0x28;
      uVar6 = (~uRam000000018305e528 + 0x5461cbf84263e1ee) *
              ((uRam000000018305e210 ^ 0x84222325) +
              (ulonglong)((uint)uRam000000018305e210 & 0x84222325) * 2);
      uVar6 = (uVar6 | uRam000000018305e218) + (uVar6 & uRam000000018305e218);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e518 =
           func_0x0001840f4950((uVar6 | 0x5461cbf8c641c2c8) + (uVar6 & 0x5461cbf8c641c2c8));
      uVar6 = (uRam000000018305e518 & 0xffffffffff800000) -
              (uRam000000018305e518 >> 1 & 0x5555555555400000);
      uVar6 = (uVar6 & 0x3333333333000000) + (uVar6 >> 2 & 0x3333333333300000);
      uVar6 = (uRam000000018305e518 & 0xffffffffff800000) +
              (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f030000) * 0x101010101010101 >> 0x38) * 4;
      uRam000000018305e488 =
           (uRam000000018305e488 ^ uVar6) + 0xab9e3407bd9c1e13 ^ 0x7dc7372425fdc356;
      uRam000000018305e220 =
           (uRam000000018305e220 * -0x20a9b5c99e23fb57 ^ uRam000000018305e488) + uVar6;
      uRam000000018305e470 = uRam000000018305e220 ^ uRam000000018305e488;
      uRam000000018305e3a0 = 0xab9e3407bd9c1e13;
      uVar6 = (uRam000000018305e440 ^ _UNK_1800f6660) + uRam000000018305e5d0 + 0x8422230d;
      uVar9 = (uRam000000018305e5d0 ^ _UNK_1800f6668) + uRam000000018305e440 + 0x5461cbf84263e1ed;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e440 ^ _UNK_1800f6660;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e5d0 ^ _UNK_1800f6668;
      uVar6 = func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                                  (uRam000000018305e440 + 0x5461cbf84263e1ed) ^
                                  (uVar6 << 0x1d | uVar6 >> 0x23) -
                                  (uRam000000018305e5d0 + 0x8422230d));
      uVar6 = uVar6 << 0x31 | uVar6 >> 0xf;
      uRam000000018305e5b8 = uRam000000018305e558 ^ uVar6 ^ 0x5461cbf84263e215;
      uRam000000018305e210 =
           (uRam000000018305e210 ^ uVar6) + 0x5461cbf84263e215 ^ 0x5ef0d43ed4c7bca1;
      uRam000000018305e4b8 =
           (uRam000000018305e4b8 * -0x7506189781a2c13 ^ uRam000000018305e210) + uVar6;
      uRam000000018305e4d0 = uRam000000018305e4b8 ^ uRam000000018305e210;
      uRam000000018305e3a8 = 0x5461cbf84263e215;
      uVar6 = (uRam000000018305e320 ^ _UNK_1800f6670) + uRam000000018305e580 + 0x8422230d;
      uVar9 = (uRam000000018305e580 ^ _UNK_1800f6678) + uRam000000018305e320 + 0x335c49138d42fd4f;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e320 ^ _UNK_1800f6670;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e580 ^ _UNK_1800f6678;
      uRam000000018305e5f0 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                               (uRam000000018305e320 + 0x335c49138d42fd4f) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018305e580 + 0x8422230d)
                              );
      uVar6 = (ulonglong)((uint)uRam000000018305e5f0 & 0x28);
      uRam000000018305e580 = uRam000000018305e3a0 ^ uVar6 ^ 0x335c49138d42fd77;
      uRam000000018305e2a8 =
           (uRam000000018305e2a8 ^ uVar6) + 0x335c49138d42fd77 ^ 0xaf2e3915c36985ab;
      uRam000000018305e308 =
           (uRam000000018305e308 * -0x6e37ac3371b34047 ^ uRam000000018305e2a8) + uVar6;
      uRam000000018305e300 = uRam000000018305e308 ^ uRam000000018305e2a8;
      uRam000000018305e4a0 = 0x335c49138d42fd77;
      uVar6 = (~uRam000000018305e548 + 0xcca3b6ec72bd02b2) *
              ((uRam000000018305e2c8 ^ 0x335c49130960de52) +
              (uRam000000018305e2c8 & 0x335c49130960de52) * 2);
      uVar6 = (uVar6 | uRam000000018305e3b8) + (uVar6 & uRam000000018305e3b8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e480 =
           func_0x0001840f4950((uVar6 | 0xffffffff7bdddce3) + (uVar6 & 0xffffffff7bdddce3));
      uVar6 = (uRam000000018305e480 ^ 0xfffffffffffffff7) << 0x33 |
              (uRam000000018305e480 ^ 0xfffffffffffffff7) >> 0xd;
      uRam000000018305e3c0 = uRam000000018305e5b8 ^ uVar6 ^ 0x28;
      uRam000000018305e4f8 = (uRam000000018305e4f8 ^ uVar6) + 0x28 ^ 0x50a521bb3f2c283c;
      uRam000000018305e280 =
           (uRam000000018305e280 * -0x1c65e5d04bfe77c1 ^ uRam000000018305e4f8) + uVar6;
      uRam000000018305e3a0 = uRam000000018305e280 ^ uRam000000018305e4f8;
      uRam000000018305e2a0 = 0x28;
      uVar6 = (~uRam000000018305e548 + 0x68f012571d0e43d4) *
              ((uRam000000018305e510 ^ 0xfab1f7bf5bd0f81a) +
              (uRam000000018305e510 & 0x7ab1f7bf5bd0f81a) * 2);
      uVar6 = (uVar6 | uRam000000018305e400) + (uVar6 & uRam000000018305e400);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e320 =
           func_0x0001840f4950((uVar6 | 0x9241e5e846debbc9) + (uVar6 & 0x9241e5e846debbc9));
      uVar9 = uRam000000018305e320 ^ 0xcf661d4944fe31ed;
      uVar6 = uVar9 >> 1 | uVar9;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar9 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
              0x40 ^ uVar9;
      uRam000000018305e5f0 = uRam000000018305e4c0 ^ uVar9 ^ 0x63a20a16fd011f12;
      uRam000000018305e2d8 =
           (uRam000000018305e2d8 ^ uVar9) + 0x63a20a16fd011f12 ^ 0xb9bb86915f217d6d;
      uRam000000018305e420 =
           (uRam000000018305e420 * -0x4e1368a5c39e77f5 ^ uRam000000018305e2d8) + uVar9;
      uRam000000018305e2d0 = uRam000000018305e420 ^ uRam000000018305e2d8;
      uRam000000018305e550 = 0x63a20a16fd011f12;
      uVar6 = (~uRam000000018305e218 + 0x68f012571d0e43d4) *
              ((uRam000000018305e270 ^ 0xfab1f7bf5bd0f81a) +
              (uRam000000018305e270 & 0x7ab1f7bf5bd0f81a) * 2);
      uVar6 = (uVar6 | uRam000000018305e538) + (uVar6 & uRam000000018305e538);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e2c0 =
           func_0x0001840f4950((uVar6 | 0x9241e5e846debbc9) + (uVar6 & 0x9241e5e846debbc9));
      uRam000000018305e348 =
           (uRam000000018305e348 ^ uRam000000018305e2c0 & 0xffffffffffffff) + 0x9241e5e8c2fc98ec ^
           0xfff9d367d9e0a3ab;
      uRam000000018305e268 =
           (uRam000000018305e268 * -0x43b0c7c9bcc1d53f ^ uRam000000018305e348) +
           (uRam000000018305e2c0 & 0xffffffffffffff);
      uRam000000018305e560 = uRam000000018305e268 ^ uRam000000018305e348;
      uRam000000018305e238 = 0x9241e5e8c2fc98ec;
      uVar6 = (~uRam000000018305e230 + 0xd160242e3a048627) *
              ((uRam000000018305e240 ^ 0x9241e5e846debbc9) +
              (uRam000000018305e240 & 0x1241e5e846debbc9) * 2);
      uVar6 = (uVar6 | uRam000000018305e460) + (uVar6 & uRam000000018305e460);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e4c0 =
           func_0x0001840f4950((uVar6 | 0x4321c1c67cda3def) + (uVar6 & 0x4321c1c67cda3def));
      uVar6 = uRam000000018305e4c0 - (uRam000000018305e4c0 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar9 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
              uRam000000018305e4c0;
      uVar6 = uVar9 >> 1 | uVar9;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
               0x80 ^ uVar9) * -0x6edb4b98a6fec79d;
      uRam000000018305e250 = uRam000000018305e508 ^ uVar6 ^ 0x63a20a16fd011f12;
      uRam000000018305e2e8 =
           (uRam000000018305e2e8 ^ uVar6) + 0x63a20a16fd011f12 ^ 0x1d1a447603b8a75d;
      uRam000000018305e278 =
           (uRam000000018305e278 * 0x3436cefe9f307ce7 ^ uRam000000018305e2e8) + uVar6;
      uRam000000018305e3e0 = uRam000000018305e278 ^ uRam000000018305e2e8;
      uRam000000018305e390 = 0x63a20a16fd011f12;
      uRam000000018305e540 = func_0x0001840f4950(uRam000000018305e490 ^ 0xffe2ff7bfd00219d);
      uVar6 = uRam000000018305e540 >> 1 | uRam000000018305e540;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
              0x80 ^ uRam000000018305e540;
      uRam000000018305e238 = uRam000000018305e2e0 ^ uVar6 ^ 0x28;
      uRam000000018305e280 = (uRam000000018305e280 ^ uVar6) + 0x28 ^ 0xe0abc76fffa4c3bd;
      uRam000000018305e570 =
           (uRam000000018305e570 * -0x59aedc8b4210328d ^ uRam000000018305e280) + uVar6;
      uRam000000018305e520 = uRam000000018305e570 ^ uRam000000018305e280;
      uRam000000018305e5a0 = 0x28;
      uVar6 = (uRam000000018305e490 ^ _UNK_1800f6680) + uRam000000018305e2f0 + 0xfab1f7bf5bd0f81a;
      uVar9 = (uRam000000018305e2f0 ^ _UNK_1800f6688) + (uRam000000018305e490 - 1);
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e490 ^ _UNK_1800f6680;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018305e2f0 ^ _UNK_1800f6688;
      uRam000000018305e408 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018305e490 - 1) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) -
                               (uRam000000018305e2f0 + 0xfab1f7bf5bd0f81a));
      uVar6 = uRam000000018305e408 ^ 0xfab1f7bfdff2db3f;
      uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar6 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar6;
      uRam000000018305e5d0 = (uRam000000018305e5d0 ^ uVar6) + 0x54e0840200d24c0 ^ 0x6f1f5d214a963db7
      ;
      uRam000000018305e2d0 =
           (uRam000000018305e2d0 * -0xe1f639b6866891d ^ uRam000000018305e5d0) + uVar6;
      uRam000000018305e2d8 = uRam000000018305e2d0 ^ uRam000000018305e5d0;
      uRam000000018305e2b8 = 0x54e0840200d24c0;
      uVar6 = (uRam000000018305e3a0 ^ _UNK_1800f6690) - 0x8421e326;
      uVar9 = (_UNK_1800f6698 ^ 0x54e0840200d24c0) + uRam000000018305e3a0 + 0x54e0840200d24c0;
      uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018305e3a0 ^ _UNK_1800f6690;
      uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _UNK_1800f6698 ^ 0x54e0840200d24c0;
      uRam000000018305e260 =
           func_0x0001840f4950((uVar9 << 0x1d | uVar9 >> 0x23) -
                               (uRam000000018305e3a0 + 0x54e0840200d24c0) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) + 0x8421e326);
      uVar6 = uRam000000018305e260 - (uRam000000018305e260 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
              uRam000000018305e260;
      uRam000000018305e4e8 = uRam000000018305e4e8 ^ uVar6 ^ 0x3c229cba3fd28db3;
      uRam000000018305e518 =
           (uRam000000018305e518 * -0x71156e87022db23b ^ uRam000000018305e4e8) + uVar6;
      uRam000000018305e408 = uRam000000018305e518 ^ uRam000000018305e4e8;
      uRam000000018305e300 = 0;
      uRam000000018305e558 = func_0x0001840f4950(uRam000000018305e580 ^ 0xffdd0083e5002141);
      uVar9 = uRam000000018305e558 ^ 0xd32271bb200271f1;
      uVar6 = uVar9 >> 1 | uVar9;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar9 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
              0x80 ^ uVar9;
      uRam000000018305e5c8 = uRam000000018305e5c8 ^ uVar9 ^ 0xe6b5d369c1620e39;
      uRam000000018305e3e0 =
           (uRam000000018305e3e0 * 0x7c33c52c86b10a79 ^ uRam000000018305e5c8) + uVar9;
      uRam000000018305e5a0 = uRam000000018305e3e0 ^ uRam000000018305e5c8;
      uRam000000018305e5e0 = 0;
      uVar6 = ((uRam000000018305e3f0 ^ 0x8422230d) +
              (ulonglong)((uint)uRam000000018305e3f0 & 0x8422230d) * 2) * -uRam000000018305e290;
      uVar6 = (uVar6 | uRam000000018305e2d8) + (uVar6 & uRam000000018305e2d8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018305e388 =
           func_0x0001840f4950((uVar6 | 0x8422230d) + (ulonglong)((uint)uVar6 & 0x8422230d));
      uVar6 = uStack_100;
      uVar9 = uRam000000018305e388 & 0x7fffffffffffffc0;
      uRam000000018305e310 = uRam000000018305e548 ^ uVar9 ^ 0x28;
      uRam000000018305e520 = (uRam000000018305e520 ^ uVar9) + 0x28 ^ 0x57639cfd9ff9083c;
      uRam000000018305e300 =
           (uRam000000018305e300 * 0x3bd641ab3784423 ^ uRam000000018305e520) + uVar9;
      uRam000000018305e3c8 = uRam000000018305e300 ^ uRam000000018305e520;
      uRam000000018305e308 = 0x28;
      uVar9 = (~uRam000000018305e258 + 0x29) *
              ((uStack_100 ^ 0x84222325 ^ uRam000000018305e3f8) +
              ((uStack_100 ^ 0x84222325) & uRam000000018305e3f8) * 2);
      uVar9 = (uVar9 | uRam000000018305e2a8) + (uVar9 & uRam000000018305e2a8);
      uVar9 = uVar9 * 0x2000 ^ uVar9;
      uVar9 = uVar9 >> 7 ^ uVar9;
      uVar9 = uVar9 << 0x11 ^ uVar9;
      uRam000000018305e360 =
           func_0x0001840f4950((uStack_100 ^ 0x8422230d | uVar9) +
                               (uVar9 & (uStack_100 ^ 0x8422230d)));
      uVar10 = auVar11._0_4_ & (uint)_UNK_180063540;
      uVar17 = uVar2 | _UNK_180063540;
      uVar9 = _UNK_180063540 ^ uVar2;
      auVar26._8_4_ = 0xffffffff;
      auVar26._0_8_ = 0xffffffffffffffff;
      auVar26._12_4_ = 0xffffffff;
      uVar6 = (uRam000000018305e360 ^ uVar6) & 0x7fffffffff800000;
      uVar13 = SUB164(auVar26 ^ auStack_128,0);
      uVar17 = (((ulonglong)_UNK_1800f66a0 * (uVar9 & 0xffffffff) +
                 ((uVar9 >> 0x20) * (ulonglong)_UNK_1800f66a0 +
                  (ulonglong)_UNK_1800f66b0 * (uVar9 & 0xffffffff) << 0x20) +
                 (ulonglong)uVar10 * (ulonglong)_UNK_1800f66a0 + auStack_128._0_8_ +
                 ((ulonglong)uVar10 * (ulonglong)_UNK_1800f66b0 << 0x20) +
                (ulonglong)_UNK_1800f66c0 * (uVar17 & 0xffffffff) +
                ((ulonglong)_UNK_1800f66d0 * (uVar17 & 0xffffffff) +
                 (uVar17 >> 0x20) * (ulonglong)_UNK_1800f66c0 << 0x20)) -
               ((ulonglong)uVar13 * (ulonglong)_UNK_1800f6740 +
                ((ulonglong)_UNK_1800f6790 * (ulonglong)uVar13 +
                 (SUB168(auVar26 ^ auStack_128,0) >> 0x20) * (ulonglong)_UNK_1800f6740 << 0x20) +
                (uVar9 & 0xffffffff) * (ulonglong)_UNK_1800f6770 +
                ((ulonglong)_UNK_1800f6780 * (uVar9 & 0xffffffff) +
                 (uVar9 >> 0x20) * (ulonglong)_UNK_1800f6770 << 0x20) +
               (uVar17 & 0xffffffff) * (ulonglong)_UNK_1800f6750 +
               ((ulonglong)_UNK_1800f6760 * (uVar17 & 0xffffffff) +
                (uVar17 >> 0x20) * (ulonglong)_UNK_1800f6750 << 0x20) +
               ((ulonglong)uVar10 * (ulonglong)_UNK_1800f6730 << 0x20) +
               (ulonglong)_UNK_1800f6720 * (ulonglong)uVar10 +
               ((uVar2 & 0xffffffff) * (ulonglong)_UNK_1800f6710 +
                (uStack_168 & 0xffffffff) * (ulonglong)_UNK_1800f6700 << 0x20) +
               (uVar2 & 0xffffffff) * (ulonglong)_UNK_1800f6700)) + 0x585760e3155f143f;
      uRam000000018305e400 = uRam000000018305e510 ^ uVar6 ^ uVar17;
      uRam000000018305e4c0 = (uRam000000018305e4c0 ^ uVar6) + uVar17 ^ 0xc01aca895955ceed;
      uRam000000018305e578 =
           (uRam000000018305e578 * 0x7065e0ca1809dafd ^ uRam000000018305e4c0) + uVar6;
      uRam000000018305e568 = uRam000000018305e578 ^ uRam000000018305e4c0;
      auStack_148._0_8_ = uStack_108;
      uRam000000018305e408 = uVar17;
    }
  }
  func_0x000180001044(auStack_148._0_8_,uVar17);
  return;
}



// ===== chacha_block @ 1834ffc80 (depth 0) =====

/* WARNING: Switch with 1 destination removed at 0x0001834ffec3 */
/* WARNING: Switch with 1 destination removed at 0x000183506a0c */
/* WARNING: Switch with 1 destination removed at 0x000183506a70 */
/* WARNING: Switch with 1 destination removed at 0x000183506a9d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chacha_block(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  ulonglong uVar48;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar49;
  uint uVar50;
  ulonglong uVar52;
  undefined1 auVar51 [16];
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar61;
  undefined1 auVar56 [16];
  ulonglong uVar62;
  undefined1 auVar57 [16];
  ulonglong uVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  uint uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  uint uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  uint uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint uVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uStack_228;
  uint uStack_218;
  uint uStack_208;
  uint uStack_1f8;
  uint uStack_1f0;
  uint uStack_1e8;
  uint uStack_1e0;
  uint uStack_1d8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_170;
  ulonglong uStack_160;
  ulonglong uStack_158;
  uint uStack_128;
  
                    /* 0x34ffc80  3  chacha_block */
  uStack_1f8 = *param_2;
  uStack_1a0 = param_2[1];
  uStack_1d8 = param_2[2];
  uStack_1a4 = param_2[3];
  uStack_208 = param_2[4];
  uStack_1a8 = param_2[5];
  uStack_1e0 = param_2[6];
  uStack_1ac = param_2[7];
  uStack_218 = param_2[8];
  uStack_1c4 = param_2[9];
  uStack_1e8 = param_2[10];
  uStack_1b4 = param_2[0xb];
  uStack_228 = param_2[0xc];
  uStack_1b8 = param_2[0xd];
  uStack_1f0 = param_2[0xe];
  uStack_1bc = param_2[0xf];
  uStack_158 = (ulonglong)uStack_1e8;
  uStack_160 = (ulonglong)uStack_1d8;
  uVar12 = 0;
  uStack_1c0 = uStack_1e0;
  uStack_1b0 = uStack_1c4;
  uStack_19c = uStack_1b4;
  uStack_198 = uStack_1a4;
  uStack_194 = uStack_1bc;
  uStack_170 = uStack_1b8;
  uStack_128 = uStack_1f0;
  switch(0 < param_3) {
  case true:
    do {
      uVar5 = CONCAT44(0,uStack_208);
      auVar87._8_8_ = 0;
      auVar87._0_8_ = uVar5;
      auVar24._4_4_ = 0;
      auVar24._0_4_ = uStack_1f8 ^ 0x84222325;
      auVar24._8_4_ = uStack_208;
      auVar24._12_4_ = 0;
      auVar21 = pshufb(auVar24 ^ _UNK_180017550,_UNK_1800170c0);
      uVar13 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar13 + uRam000000018301e340;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e3d8 ^ uVar13;
      }
      uRam000000018301e438 = func_0x00018350fcb0(SUB161(auVar24 ^ _UNK_180017550,5) ^ uVar6);
      uVar6 = uRam000000018301e498 >> 1 | uRam000000018301e498;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4
              ^ uRam000000018301e498 ^ (ulonglong)uStack_1f8;
      uVar20 = uStack_1f8 & uStack_208;
      uVar19 = uStack_1f8 ^ uStack_208;
      auVar78._8_4_ = 0xffffffff;
      auVar78._0_8_ = 0xffffffffffffffff;
      auVar78._12_4_ = 0xffffffff;
      uVar1 = SUB164(auVar87 ^ auVar78,0);
      uVar7 = (((ulonglong)uVar1 * (ulonglong)_UNK_180017610 +
                ((ulonglong)_UNK_180017620 * (ulonglong)uVar1 +
                 (SUB168(auVar87 ^ auVar78,0) >> 0x20) * (ulonglong)_UNK_180017610 << 0x20) +
                ((ulonglong)(uStack_1f8 ^ 0xffffffff) * (ulonglong)_UNK_1800175f0 + _UNK_180017600
                << 0x20) + (ulonglong)_UNK_1800175e0 * (ulonglong)(uStack_1f8 ^ 0xffffffff) +
               ((ulonglong)_UNK_1800175d0 * (ulonglong)uVar19 << 0x20) +
               (ulonglong)_UNK_1800175c0 * (ulonglong)uVar19 +
               ((ulonglong)_UNK_1800175b0 * (ulonglong)uVar20 << 0x20) +
               (ulonglong)_UNK_1800175a0 * (ulonglong)uVar20 +
               ((ulonglong)_UNK_180017590 * (ulonglong)uStack_208 << 0x20) +
               (ulonglong)_UNK_180017580 * (ulonglong)uStack_208 +
               ((ulonglong)_UNK_180017570 * (ulonglong)uStack_1f8 << 0x20) +
               (ulonglong)_UNK_180017560 * (ulonglong)uStack_1f8) -
              (((ulonglong)uVar19 * (ulonglong)_UNK_1800176c0 << 0x20) +
               (ulonglong)_UNK_1800176b0 * (ulonglong)uVar19 +
               ((ulonglong)(uStack_1f8 | uStack_208) * (ulonglong)_UNK_1800176a0 << 0x20) +
               (ulonglong)_UNK_180017690 * (ulonglong)(uStack_1f8 | uStack_208) +
              ((ulonglong)uVar20 * (ulonglong)_UNK_180017680 << 0x20) +
              (ulonglong)_UNK_180017670 * (ulonglong)uVar20 +
              ((ulonglong)uStack_208 * (ulonglong)_UNK_180017660 << 0x20) +
              (ulonglong)_UNK_180017650 * (ulonglong)uStack_208 +
              ((ulonglong)uStack_1f8 * (ulonglong)_UNK_180017660 << 0x20) +
              (ulonglong)uStack_1f8 * (ulonglong)_UNK_180017650)) + 0xb3a66e88203eadb;
      uRam000000018301e318 = uRam000000018301e368 ^ uVar6 ^ uVar7;
      uRam000000018301e398 = (uRam000000018301e398 ^ uVar6) + uVar7 ^ 0x37219a8bb329b917;
      uRam000000018301e638 =
           (uRam000000018301e638 * -0x71a35286d5065e9 ^ uRam000000018301e398) + uVar6;
      uRam000000018301e3f8 = uRam000000018301e638 ^ uRam000000018301e398;
      uVar15 = uVar7 & 0xffffffff;
      uVar6 = (ulonglong)uStack_228 ^ 0x84222325;
      uVar13 = uVar6 ^ uRam000000018301e368;
      lVar14 = uVar6 + uRam000000018301e4c0;
      uVar6 = uVar13 + lVar14;
      uVar48 = (uVar15 ^ uRam000000018301e4c0) + uRam000000018301e368 + uVar15;
      uVar13 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar13;
      uVar6 = (uVar48 * 0x2000 | uVar48 >> 0x33) ^ uVar15 ^ uRam000000018301e4c0;
      uRam000000018301e448 = uVar15;
      uRam000000018301e530 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018301e368 + uVar15) ^
                               (uVar13 << 0x1d | uVar13 >> 0x23) - lVar14);
      uRam000000018301e4c8 = uStack_228 ^ uVar15;
      uRam000000018301e3e0 =
           (uRam000000018301e3e0 ^ uRam000000018301e530) + uRam000000018301e4c8 ^ 0x1f5e2e9ec4e31463
      ;
      uRam000000018301e550 =
           (uRam000000018301e550 * -0x271627ce9e605b3b ^ uRam000000018301e3e0) +
           uRam000000018301e530;
      uRam000000018301e3d8 = uRam000000018301e550 ^ uRam000000018301e3e0;
      uVar19 = (uint)uRam000000018301e4c8 << 0x10 | (uint)uRam000000018301e4c8 >> 0x10;
      uVar55 = CONCAT44(0,uVar19);
      uVar13 = (ulonglong)uStack_218 ^ 0x84222325;
      uVar6 = ((uRam000000018301e4d0 ^ uVar13) +
              (ulonglong)((uint)uRam000000018301e4d0 & (uint)uVar13) * 2) *
              (uVar55 - uRam000000018301e370);
      uVar6 = (uVar6 | uRam000000018301e5d0) + (uVar6 & uRam000000018301e5d0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e328 =
           func_0x00018350fcb0((uVar13 ^ uVar55 | uVar6) +
                               (ulonglong)((uint)(uVar13 ^ uVar55) & (uint)uVar6));
      uVar13 = ~uRam000000018301e328 & (ulonglong)uStack_218;
      auVar79._8_8_ = 0;
      auVar79._0_8_ = uVar55;
      uVar20 = uStack_218 & uVar19;
      uVar6 = uVar13 >> 1 | uVar13;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar13 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
               0x80 ^ uVar13;
      uVar1 = uStack_218 | uVar19;
      auVar21._8_4_ = 0xffffffff;
      auVar21._0_8_ = 0xffffffffffffffff;
      auVar21._12_4_ = 0xffffffff;
      uVar6 = (ulonglong)uStack_218 * (ulonglong)uVar19;
      uVar11 = SUB164(auVar79 ^ auVar21,0);
      lVar14 = (uVar6 & 0xffffffff) * (ulonglong)_UNK_180017780 +
               ((ulonglong)_UNK_180017790 * (uVar6 & 0xffffffff) +
                (uVar6 >> 0x20) * (ulonglong)_UNK_180017780 << 0x20);
      uVar48 = (((ulonglong)uVar11 * (ulonglong)_UNK_180017760 +
                 ((ulonglong)_UNK_180017770 * (ulonglong)uVar11 +
                  (SUB168(auVar79 ^ auVar21,0) >> 0x20) * (ulonglong)_UNK_180017760 << 0x20) +
                 ((ulonglong)(uStack_218 ^ 0xffffffff) * (ulonglong)_UNK_180017740 + _UNK_180017750
                 << 0x20) + (ulonglong)_UNK_180017730 * (ulonglong)(uStack_218 ^ 0xffffffff) +
                 ((ulonglong)_UNK_180017720 * (ulonglong)uVar1 << 0x20) +
                 (ulonglong)_UNK_180017710 * (ulonglong)uVar1 +
                 ((ulonglong)uVar20 * (ulonglong)_UNK_180017720 << 0x20) +
                 (ulonglong)uVar20 * (ulonglong)_UNK_180017710 +
                 ((ulonglong)_UNK_1800176e0 * (ulonglong)uStack_218 << 0x20) +
                 (ulonglong)_UNK_1800176d0 * (ulonglong)uStack_218 +
                 ((ulonglong)_UNK_180017700 * (ulonglong)uVar19 << 0x20) +
                 (ulonglong)_UNK_1800176f0 * (ulonglong)uVar19 + lVar14) -
               ((ulonglong)(uStack_218 ^ uVar19) * (ulonglong)_UNK_180017800 +
                ((ulonglong)_UNK_180017810 * (ulonglong)(uStack_218 ^ uVar19) << 0x20) +
                ((ulonglong)uVar1 * (ulonglong)_UNK_1800177f0 << 0x20) +
                (ulonglong)_UNK_1800177e0 * (ulonglong)uVar1 +
                ((ulonglong)uVar20 * (ulonglong)_UNK_1800177d0 << 0x20) +
                (ulonglong)_UNK_1800177c0 * (ulonglong)uVar20 +
                ((ulonglong)uVar19 * (ulonglong)_UNK_1800177b0 << 0x20) +
                (ulonglong)_UNK_1800177a0 * (ulonglong)uVar19 +
                ((ulonglong)uStack_218 * (ulonglong)_UNK_1800177b0 << 0x20) +
                (ulonglong)uStack_218 * (ulonglong)_UNK_1800177a0 + lVar14)) + 0xbfe380cc02927f5c;
      uRam000000018301e2e0 = uRam000000018301e4d8 ^ uVar13 ^ uVar48;
      uRam000000018301e4b0 = (uRam000000018301e4b0 ^ uVar13) + uVar48 ^ 0x85760f561e12ac50;
      uRam000000018301e550 =
           (uRam000000018301e550 * -0x5819978c73e462dd ^ uRam000000018301e4b0) + uVar13;
      uRam000000018301e3e8 = uRam000000018301e550 ^ uRam000000018301e4b0;
      uVar13 = uVar48 & 0xffffffff;
      uVar6 = uVar13 ^ 0x84222325 ^ uRam000000018301e310;
      lVar14 = (uVar13 ^ 0x84222325) + uRam000000018301e328;
      uVar53 = uVar6 + lVar14;
      uVar61 = (uVar5 ^ uRam000000018301e328) + uRam000000018301e310 + uVar5;
      uVar6 = (uVar53 * 0x2000 | uVar53 >> 0x33) ^ uVar6;
      uVar53 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar5 ^ uRam000000018301e328;
      uRam000000018301e2c8 = uVar13;
      uRam000000018301e460 =
           func_0x00018350fcb0((uVar53 << 0x1d | uVar53 >> 0x23) - (uRam000000018301e310 + uVar5) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar24 = _UNK_1800170c0;
      uRam000000018301e438 = uVar5 ^ uVar13;
      uRam000000018301e350 =
           (uRam000000018301e350 ^ uRam000000018301e460) + uRam000000018301e438 ^ 0x76ab07d188108497
      ;
      uRam000000018301e2e8 =
           (uRam000000018301e2e8 * -0x38ff6cf8ebf770cb ^ uRam000000018301e350) +
           uRam000000018301e460;
      uRam000000018301e518 = uRam000000018301e2e8 ^ uRam000000018301e350;
      uVar20 = (uint)uRam000000018301e438 << 0xc | (uint)uRam000000018301e438 >> 0x14;
      auVar22._4_4_ = 0;
      auVar22._0_4_ = uVar20 ^ 0x84222325;
      auVar22._8_8_ = uVar15;
      auVar21 = pshufb(auVar22 ^ _UNK_180017820,_UNK_1800170c0);
      uVar53 = auVar21._8_8_ + auVar21._0_8_;
      uVar5 = (ulonglong)uVar20;
      uVar6 = uVar53 + uRam000000018301e520;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e618 ^ uVar53;
      }
      uRam000000018301e570 = func_0x00018350fcb0(SUB161(auVar22 ^ _UNK_180017820,5) ^ uVar6);
      uVar6 = ((uVar15 | uVar5) ^ uRam000000018301e570) * -0x55caa725b278ff3b;
      uVar1 = (uint)uVar7;
      uVar2 = uVar20 & uVar1;
      uVar11 = uVar20 | uVar1;
      uVar1 = uVar20 ^ uVar1;
      uVar53 = ((((uVar15 ^ _UNK_18001a710) & 0xffffffff) * (ulonglong)_UNK_180017870 +
                 ((ulonglong)_UNK_1800178e0 * ((uVar15 ^ _UNK_18001a710) & 0xffffffff) +
                  (_UNK_18001a710 >> 0x20) * (ulonglong)_UNK_180017870 << 0x20) +
                ((ulonglong)_UNK_1800178d0 * (ulonglong)uVar1 << 0x20) +
                (ulonglong)_UNK_1800178c0 * (ulonglong)uVar1 +
                ((ulonglong)_UNK_1800178b0 * (ulonglong)uVar11 << 0x20) +
                (ulonglong)_UNK_1800178a0 * (ulonglong)uVar11 +
                ((ulonglong)_UNK_180017890 * (ulonglong)uVar2 << 0x20) +
                (ulonglong)_UNK_180017880 * (ulonglong)uVar2 +
                ((ulonglong)_UNK_180017860 * (uVar7 & 0xffffffff) << 0x20) +
                (ulonglong)_UNK_180017850 * (uVar7 & 0xffffffff) +
                (ulonglong)_UNK_180017830 * (ulonglong)uVar20 +
                ((ulonglong)_UNK_180017840 * (ulonglong)uVar20 << 0x20)) -
               (((ulonglong)uVar1 * (ulonglong)_UNK_180017980 << 0x20) +
                (ulonglong)_UNK_180017970 * (ulonglong)uVar1 +
                ((ulonglong)uVar11 * (ulonglong)_UNK_180017960 << 0x20) +
                (ulonglong)_UNK_180017950 * (ulonglong)uVar11 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180017940 << 0x20) +
               (ulonglong)_UNK_180017930 * (ulonglong)uVar2 +
               ((uVar7 & 0xffffffff) * (ulonglong)_UNK_180017920 << 0x20) +
               (ulonglong)_UNK_180017910 * (uVar7 & 0xffffffff) +
               (ulonglong)uVar20 * (ulonglong)_UNK_180017910 +
               ((ulonglong)uVar20 * (ulonglong)_UNK_180017920 << 0x20))) + 0x51c6d767c5402e3b;
      uRam000000018301e420 = uRam000000018301e358 ^ uVar6 ^ uVar53;
      uRam000000018301e5e0 = (uRam000000018301e5e0 ^ uVar6) + uVar53 ^ 0xf9991e10e3e7dc30;
      uRam000000018301e268 =
           (uRam000000018301e268 * 0x546f790274a28265 ^ uRam000000018301e5e0) + uVar6;
      uRam000000018301e5f0 = uRam000000018301e268 ^ uRam000000018301e5e0;
      uVar11 = (uint)uVar53;
      uVar53 = uVar53 & 0xffffffff;
      uVar7 = uVar53 ^ 0x84222325;
      uVar6 = ((uRam000000018301e5f8 ^ uVar7) +
              (ulonglong)((uint)uRam000000018301e5f8 & (uint)uVar7) * 2) *
              (uVar55 - uRam000000018301e3f0);
      uVar6 = (uVar6 | uRam000000018301e4b0) + (uVar6 & uRam000000018301e4b0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e508 = uVar53;
      uRam000000018301e5d8 =
           func_0x00018350fcb0((uVar7 ^ uVar55 | uVar6) +
                               (ulonglong)((uint)(uVar7 ^ uVar55) & (uint)uVar6));
      uVar7 = uVar53 * uVar55 ^ uRam000000018301e5d8;
      uVar6 = uVar53 + uVar55 + (ulonglong)(uVar19 & uVar11) * -2;
      uRam000000018301e568 = (uRam000000018301e568 ^ uVar7) + uVar6 ^ 0xda70e9d72b97dcc9;
      uRam000000018301e460 =
           (uRam000000018301e460 * 0x469f72d41156978d ^ uRam000000018301e568) + uVar7 ^
           uRam000000018301e568;
      uRam000000018301e388 = uVar6 & 0xffffffff;
      uVar1 = (uint)uVar6 << 8 | (uint)uVar6 >> 0x18;
      uVar7 = (ulonglong)uVar1;
      uVar15 = uVar7 ^ 0x84222325;
      uVar6 = ((uRam000000018301e508 ^ uVar15) +
              (ulonglong)((uint)uRam000000018301e508 & (uint)uVar15) * 2) *
              (uVar13 - uRam000000018301e298);
      uVar6 = (uVar6 | uRam000000018301e610) + (uVar6 & uRam000000018301e610);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e4d0 =
           func_0x00018350fcb0((uVar15 ^ uVar13 | uVar6) +
                               (ulonglong)((uint)(uVar15 ^ uVar13) & (uint)uVar6));
      uVar15 = uRam000000018301e4d0 & 0xfffffffffffffffc;
      uVar6 = uVar15 >> 1 | uVar15;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar15 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8
               ^ uVar15;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar13;
      uVar19 = (uint)uVar48;
      uVar9 = uVar1 & uVar19;
      uVar2 = uVar1 ^ uVar19;
      auVar83._8_4_ = 0xffffffff;
      auVar83._0_8_ = 0xffffffffffffffff;
      auVar83._12_4_ = 0xffffffff;
      auVar103._8_4_ = 0xffffffff;
      auVar103._0_8_ = 0xffffffffffffffff;
      auVar103._12_4_ = 0xffffffff;
      uVar3 = SUB164(auVar56 ^ auVar83,0);
      uVar13 = ((((ulonglong)_UNK_180017a10 * (ulonglong)uVar2 << 0x20) +
                 (ulonglong)_UNK_180017a00 * (ulonglong)uVar2 +
                 ((ulonglong)(uVar1 | uVar19) * (ulonglong)_UNK_1800179f0 << 0x20) +
                 (ulonglong)_UNK_1800179e0 * (ulonglong)(uVar1 | uVar19) +
                ((ulonglong)_UNK_1800179d0 * (ulonglong)uVar9 << 0x20) +
                (ulonglong)_UNK_1800179c0 * (ulonglong)uVar9 +
                ((ulonglong)_UNK_1800179b0 * (uVar48 & 0xffffffff) << 0x20) +
                (ulonglong)_UNK_1800179a0 * (uVar48 & 0xffffffff) +
                (ulonglong)uVar1 * (ulonglong)_UNK_1800179a0 +
                ((ulonglong)uVar1 * (ulonglong)_UNK_1800179b0 << 0x20)) -
               ((ulonglong)uVar3 * (ulonglong)_UNK_180017af0 +
                ((ulonglong)_UNK_180017b00 * (ulonglong)uVar3 +
                 (SUB168(auVar56 ^ auVar83,0) >> 0x20) * (ulonglong)_UNK_180017af0 << 0x20) +
                ((ulonglong)(uVar1 ^ 0xffffffff) * (ulonglong)_UNK_180017ad0 + _UNK_180017ae0 <<
                0x20) + (ulonglong)_UNK_180017ac0 * (ulonglong)(uVar1 ^ 0xffffffff) +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180017ab0 << 0x20) +
               (ulonglong)_UNK_180017aa0 * (ulonglong)uVar2 +
               ((ulonglong)uVar9 * (ulonglong)_UNK_180017a90 << 0x20) +
               (ulonglong)_UNK_180017a80 * (ulonglong)uVar9 +
               ((uVar48 & 0xffffffff) * (ulonglong)_UNK_180017a70 << 0x20) +
               (ulonglong)_UNK_180017a60 * (uVar48 & 0xffffffff) +
               (ulonglong)_UNK_180017a40 * (ulonglong)uVar1 +
               ((ulonglong)uVar1 * (ulonglong)_UNK_180017a50 << 0x20))) + 0xab55399ef9dfd3b0;
      uRam000000018301e5f8 = uRam000000018301e270 ^ uVar15 ^ uVar13;
      uRam000000018301e428 = (uRam000000018301e428 ^ uVar15) + uVar13 ^ 0x764a44c1225fc157;
      uRam000000018301e500 =
           (uRam000000018301e500 * 0x2bbb061b6eafa21 ^ uRam000000018301e428) + uVar15;
      uRam000000018301e5b8 = uRam000000018301e500 ^ uRam000000018301e428;
      uVar19 = (uint)uVar13;
      uVar13 = uVar13 & 0xffffffff;
      auVar23._4_4_ = 0;
      auVar23._0_4_ = uVar19 ^ 0x84222325;
      auVar23._8_4_ = uVar20;
      auVar23._12_4_ = 0;
      auVar24 = pshufb(auVar23 ^ _UNK_180017b10,auVar24);
      uVar48 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar48 + uRam000000018301e388;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e3a8 ^ uVar48;
      }
      uRam000000018301e5d0 = uVar13;
      uRam000000018301e570 = func_0x00018350fcb0(SUB161(auVar23 ^ _UNK_180017b10,5) ^ uVar6);
      uVar6 = (uVar13 | uVar5) ^ uRam000000018301e570;
      uVar48 = uVar6 << 0x28 | uVar6 >> 0x18;
      uVar6 = uVar13 + uVar5 + (ulonglong)(uVar20 & uVar19) * -2;
      uRam000000018301e620 = (uRam000000018301e620 ^ uVar48) + uVar6 ^ 0x21b367d3901131dd;
      uRam000000018301e580 =
           (uRam000000018301e580 * 0x273312d3f8389d7d ^ uRam000000018301e620) + uVar48;
      uRam000000018301e418 = uRam000000018301e580 ^ uRam000000018301e620;
      uRam000000018301e460 = uVar6 & 0xffffffff;
      uVar20 = (uint)uVar6 << 7 | (uint)uVar6 >> 0x19;
      uStack_1a0 = uStack_1a0 + uStack_1a8;
      uVar2 = (uStack_170 ^ uStack_1a0) << 0x10 | (uStack_170 ^ uStack_1a0) >> 0x10;
      uVar55 = CONCAT44(0,uVar2);
      uVar6 = (ulonglong)uStack_1c4 ^ 0x84222325;
      uVar5 = uVar6 ^ uRam000000018301e5b0;
      lVar14 = uVar6 + uRam000000018301e638;
      uVar6 = uVar5 + lVar14;
      uVar48 = (uVar55 ^ uRam000000018301e638) + uRam000000018301e5b0 + uVar55;
      uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
      uVar6 = (uVar48 * 0x2000 | uVar48 >> 0x33) ^ uVar55 ^ uRam000000018301e638;
      uRam000000018301e608 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018301e5b0 + uVar55) ^
                               (uVar5 << 0x1d | uVar5 >> 0x23) - lVar14);
      uVar6 = uRam000000018301e608 - (uRam000000018301e608 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
              uRam000000018301e608 ^ (ulonglong)uStack_1c4;
      uVar5 = uVar6 >> 1 | uVar6;
      uVar5 = uVar5 >> 2 | uVar5;
      uVar5 = uVar5 >> 4 | uVar5;
      uVar5 = uVar5 >> 8 | uVar5;
      uVar5 = uVar5 >> 0x10 | uVar5;
      uVar5 = uVar5 >> 0x20 | uVar5;
      uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar6 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
              uVar6;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = uVar55;
      uVar10 = uStack_1c4 & uVar2;
      uVar9 = uStack_1c4 | uVar2;
      uVar3 = uStack_1c4 ^ uVar2;
      uVar64 = SUB164(auVar73 ^ auVar103,0);
      uVar5 = (((ulonglong)uVar64 * (ulonglong)_UNK_180017b60 +
                ((ulonglong)_UNK_180017bd0 * (ulonglong)uVar64 +
                 (SUB168(auVar73 ^ auVar103,0) >> 0x20) * (ulonglong)_UNK_180017b60 << 0x20) +
               ((ulonglong)_UNK_180017bc0 * (ulonglong)uVar3 << 0x20) +
               (ulonglong)_UNK_180017bb0 * (ulonglong)uVar3 +
               ((ulonglong)_UNK_180017ba0 * (ulonglong)uVar9 << 0x20) +
               (ulonglong)_UNK_180017b90 * (ulonglong)uVar9 +
               ((ulonglong)_UNK_180017b80 * (ulonglong)uVar10 << 0x20) +
               (ulonglong)_UNK_180017b70 * (ulonglong)uVar10 +
               ((ulonglong)_UNK_180017b50 * (ulonglong)uVar2 << 0x20) +
               (ulonglong)_UNK_180017b40 * (ulonglong)uVar2 +
               ((ulonglong)_UNK_180017b30 * (ulonglong)uStack_1c4 << 0x20) +
               (ulonglong)_UNK_180017b20 * (ulonglong)uStack_1c4) -
              (((ulonglong)uVar3 * (ulonglong)_UNK_180017c70 << 0x20) +
               (ulonglong)_UNK_180017c60 * (ulonglong)uVar3 +
               ((ulonglong)uVar9 * (ulonglong)_UNK_180017c50 << 0x20) +
               (ulonglong)_UNK_180017c40 * (ulonglong)uVar9 +
              ((ulonglong)uVar10 * (ulonglong)_UNK_180017c30 << 0x20) +
              (ulonglong)_UNK_180017c20 * (ulonglong)uVar10 +
              ((ulonglong)uVar2 * (ulonglong)_UNK_180017c10 << 0x20) +
              (ulonglong)_UNK_180017c00 * (ulonglong)uVar2 +
              ((ulonglong)uStack_1c4 * (ulonglong)_UNK_180017c10 << 0x20) +
              (ulonglong)uStack_1c4 * (ulonglong)_UNK_180017c00)) + 0xc752b03a8d7c3df;
      uRam000000018301e590 = uRam000000018301e438 ^ uVar6 ^ uVar5;
      uRam000000018301e558 = (uRam000000018301e558 ^ uVar6) + uVar5 ^ 0x286e2b7d3f62fd6c;
      uRam000000018301e4c8 =
           (uRam000000018301e4c8 * -0x22873bfbdf416875 ^ uRam000000018301e558) + uVar6;
      uRam000000018301e460 = uRam000000018301e4c8 ^ uRam000000018301e558;
      uRam000000018301e4c0 = uRam000000018301e240 ^ uVar5;
      uVar9 = (uint)uVar5;
      uVar52 = uVar5 & 0xffffffff;
      uVar48 = (ulonglong)uStack_1a8;
      uVar6 = uVar52 ^ 0x84222325 ^ uRam000000018301e5f0;
      lVar14 = (uVar52 ^ 0x84222325) + uRam000000018301e280;
      uVar15 = uVar6 + lVar14;
      uVar61 = (uVar48 ^ uRam000000018301e280) + uRam000000018301e5f0 + uVar48;
      uVar6 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar6;
      uVar15 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar48 ^ uRam000000018301e280;
      uRam000000018301e540 = uVar52;
      uRam000000018301e5d8 =
           func_0x00018350fcb0((uVar15 << 0x1d | uVar15 >> 0x23) - (uRam000000018301e5f0 + uVar48) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar92._8_8_ = 0;
      auVar92._0_8_ = uVar52;
      lVar14 = (~uRam000000018301e5d8 & uVar52) * 0x10000000;
      uVar6 = lVar14 + (~uRam000000018301e5d8 & uVar52 & 0xaaaaaaaaa) * -0x8000000;
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = lVar14 + (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4;
      uVar48 = uVar48 + uVar52 + (ulonglong)(uVar9 & uStack_1a8) * -2;
      uRam000000018301e2f8 = (uRam000000018301e2f8 ^ uVar6) + uVar48 ^ 0x879fcd6880822a6;
      uRam000000018301e560 =
           (uRam000000018301e560 * -0x1595f29b93ebce29 ^ uRam000000018301e2f8) + uVar6;
      uRam000000018301e5a0 = uRam000000018301e560 ^ uRam000000018301e2f8;
      uRam000000018301e390 = uVar48 & 0xffffffff;
      uVar2 = (uint)uVar48 << 0xc | (uint)uVar48 >> 0x14;
      uVar61 = (ulonglong)uVar2;
      uVar48 = uVar61 ^ 0x84222325;
      uVar6 = ((uRam000000018301e590 ^ uVar48) +
              (ulonglong)((uint)uRam000000018301e590 & (uint)uVar48) * 2) *
              (uStack_1a0 - uRam000000018301e240);
      uVar6 = (uVar6 | uRam000000018301e598) + (uVar6 & uRam000000018301e598);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uVar48 = uVar48 ^ uStack_1a0;
      uRam000000018301e2b8 =
           func_0x00018350fcb0((uVar48 | uVar6) + (ulonglong)((uint)uVar48 & (uint)uVar6));
      uVar6 = uRam000000018301e2b8 ^ uVar61;
      uVar4 = uVar2 & uStack_1a0;
      uVar10 = uVar2 | uStack_1a0;
      uVar3 = uVar2 ^ uStack_1a0;
      uVar64 = uStack_1a0 ^ (uint)_UNK_18001a710;
      uVar15 = ((ulonglong)_UNK_180017d30 * (ulonglong)uVar64 + _UNK_180017d40 << 0x20) +
               (ulonglong)_UNK_180017d20 * (ulonglong)uVar64 +
               ((ulonglong)_UNK_180017d10 * (ulonglong)uVar3 << 0x20) +
               (ulonglong)_UNK_180017d00 * (ulonglong)uVar3 +
               ((ulonglong)_UNK_180017cf0 * (ulonglong)uVar10 << 0x20) +
               (ulonglong)_UNK_180017ce0 * (ulonglong)uVar10 +
               ((ulonglong)_UNK_180017cd0 * (ulonglong)uVar4 << 0x20) +
               (ulonglong)_UNK_180017cc0 * (ulonglong)uVar4 +
               ((ulonglong)_UNK_180017cb0 * (ulonglong)uStack_1a0 << 0x20) +
               (ulonglong)_UNK_180017ca0 * (ulonglong)uStack_1a0 +
               (ulonglong)_UNK_180017c80 * (ulonglong)uVar2 +
               ((ulonglong)_UNK_180017c90 * (ulonglong)uVar2 << 0x20) +
               (-(((ulonglong)uVar64 * (ulonglong)_UNK_180017e20 + _UNK_180017e30 << 0x20) +
                 (ulonglong)_UNK_180017e10 * (ulonglong)uVar64) -
               (((ulonglong)uVar3 * (ulonglong)_UNK_180017e00 << 0x20) +
                (ulonglong)_UNK_180017df0 * (ulonglong)uVar3 +
                ((ulonglong)uVar10 * (ulonglong)_UNK_180017de0 << 0x20) +
                (ulonglong)_UNK_180017dd0 * (ulonglong)uVar10 +
               ((ulonglong)uVar4 * (ulonglong)_UNK_180017dc0 << 0x20) +
               (ulonglong)_UNK_180017db0 * (ulonglong)uVar4 +
               ((ulonglong)uStack_1a0 * (ulonglong)_UNK_180017da0 << 0x20) +
               (ulonglong)_UNK_180017d90 * (ulonglong)uStack_1a0 +
               (ulonglong)_UNK_180017d70 * (ulonglong)uVar2 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180017d80 << 0x20))) + 0x1061d65faf41f5d7;
      uRam000000018301e318 = uRam000000018301e608 ^ uVar6 ^ uVar15;
      uRam000000018301e328 = (uRam000000018301e328 ^ uVar6) + uVar15 ^ 0x918cbd69dfd4d87;
      uRam000000018301e408 =
           (uRam000000018301e408 * 0x65098d7e6feba9dd ^ uRam000000018301e328) + uVar6;
      uRam000000018301e3c0 = uRam000000018301e408 ^ uRam000000018301e328;
      uVar48 = uVar15 & 0xffffffff;
      uVar6 = uVar48 ^ 0x84222325 ^ uRam000000018301e450;
      lVar14 = (uVar48 ^ 0x84222325) + uRam000000018301e3a8;
      uVar54 = uVar6 + lVar14;
      uVar62 = (uVar55 ^ uRam000000018301e3a8) + uRam000000018301e450 + uVar55;
      uVar6 = (uVar54 * 0x2000 | uVar54 >> 0x33) ^ uVar6;
      uVar54 = (uVar62 * 0x2000 | uVar62 >> 0x33) ^ uVar55 ^ uRam000000018301e3a8;
      uRam000000018301e458 = uVar48;
      uRam000000018301e5d8 =
           func_0x00018350fcb0((uVar54 << 0x1d | uVar54 >> 0x23) - (uRam000000018301e450 + uVar55) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      uRam000000018301e258 = uVar48 ^ uVar55;
      uRam000000018301e330 =
           (uRam000000018301e330 ^ uRam000000018301e5d8 & 0x7ffffffff) + uRam000000018301e258 ^
           0x2c49374147753b8;
      uRam000000018301e598 =
           (uRam000000018301e598 * -0x409263bb257a4595 ^ uRam000000018301e330) +
           (uRam000000018301e5d8 & 0x7ffffffff);
      uRam000000018301e5f8 = uRam000000018301e598 ^ uRam000000018301e330;
      uVar3 = (uint)uRam000000018301e258 << 8 | (uint)uRam000000018301e258 >> 0x18;
      uVar48 = CONCAT44(0,uVar3);
      uVar6 = uVar48 ^ 0x84222325 ^ uRam000000018301e2d0;
      lVar14 = (uVar48 ^ 0x84222325) + uRam000000018301e3d8;
      uVar55 = uVar6 + lVar14;
      uVar54 = (uVar52 ^ uRam000000018301e3d8) + uVar52 + uRam000000018301e2d0;
      uVar6 = (uVar55 * 0x2000 | uVar55 >> 0x33) ^ uVar6;
      uVar55 = (uVar54 * 0x2000 | uVar54 >> 0x33) ^ uVar52 ^ uRam000000018301e3d8;
      uRam000000018301e598 =
           func_0x00018350fcb0((uVar55 << 0x1d | uVar55 >> 0x23) - (uVar52 + uRam000000018301e2d0) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar74._8_8_ = 0;
      auVar74._0_8_ = uVar48;
      uVar6 = ((uRam000000018301e598 & 0xfffffffffff00000) << 0x1e | uRam000000018301e598 >> 0x22) ^
              uVar48;
      uVar49 = uVar3 & uVar9;
      uVar10 = uVar3 | uVar9;
      uVar9 = uVar3 ^ uVar9;
      auVar105._8_4_ = 0xffffffff;
      auVar105._0_8_ = 0xffffffffffffffff;
      auVar105._12_4_ = 0xffffffff;
      uVar64 = SUB164(auVar74 ^ auVar105,0);
      auVar107._8_4_ = 0xffffffff;
      auVar107._0_8_ = 0xffffffffffffffff;
      auVar107._12_4_ = 0xffffffff;
      uVar4 = SUB164(auVar92 ^ auVar105,0);
      uVar5 = (ulonglong)uVar64 * (ulonglong)_UNK_180017e60 +
              ((SUB168(auVar74 ^ auVar105,0) >> 0x20) * (ulonglong)_UNK_180017e60 +
               (ulonglong)_UNK_180017e50 * (ulonglong)uVar64 << 0x20) +
              ((ulonglong)_UNK_180017e80 * (ulonglong)uVar9 << 0x20) +
              (ulonglong)_UNK_180017e70 * (ulonglong)uVar9 +
              ((ulonglong)uVar49 * (ulonglong)_UNK_180017e80 << 0x20) +
              (ulonglong)uVar49 * (ulonglong)_UNK_180017e70 +
              ((ulonglong)uVar3 * (ulonglong)_UNK_180017e50 << 0x20) + (uVar5 & 0xffffffff) +
              (ulonglong)_UNK_180017e40 * (ulonglong)uVar3 +
              ((ulonglong)_UNK_180017ea0 * (ulonglong)uVar10 << 0x20) +
              (ulonglong)_UNK_180017e90 * (ulonglong)uVar10 +
              (-((ulonglong)uVar4 * (ulonglong)_UNK_180017f10 +
                ((ulonglong)_UNK_180017f80 * (ulonglong)uVar4 +
                 (SUB168(auVar92 ^ auVar105,0) >> 0x20) * (ulonglong)_UNK_180017f10 << 0x20)) -
              (((ulonglong)uVar9 * (ulonglong)_UNK_180017f70 << 0x20) +
               (ulonglong)_UNK_180017f60 * (ulonglong)uVar9 +
               ((ulonglong)uVar10 * (ulonglong)_UNK_180017f50 << 0x20) +
               (ulonglong)_UNK_180017f40 * (ulonglong)uVar10 +
              ((ulonglong)uVar49 * (ulonglong)_UNK_180017f30 << 0x20) +
              (ulonglong)_UNK_180017f20 * (ulonglong)uVar49 +
              ((uVar5 & 0xffffffff) * (ulonglong)_UNK_180017f00 << 0x20) +
              (ulonglong)_UNK_180017ef0 * (uVar5 & 0xffffffff) +
              (ulonglong)_UNK_180017ed0 * (ulonglong)uVar3 +
              ((ulonglong)uVar3 * (ulonglong)_UNK_180017ee0 << 0x20))) + 0x38ca97995a186741;
      uVar3 = (uint)uVar5;
      uVar55 = uVar5 & 0xffffffff;
      auVar25._4_4_ = 0;
      auVar25._0_4_ = uVar3 ^ 0x84222325;
      auVar25._8_4_ = uVar2;
      auVar25._12_4_ = 0;
      auVar24 = pshufb(auVar25 ^ _UNK_180017f90,_UNK_1800170c0);
      uRam000000018301e338 = uRam000000018301e360 ^ uVar6 ^ uVar5;
      uRam000000018301e250 = (uRam000000018301e250 ^ uVar6) + uVar5 ^ 0x40e69c3b09c0cd52;
      uRam000000018301e488 =
           (uRam000000018301e488 * -0x18f856fc552fa717 ^ uRam000000018301e250) + uVar6;
      uRam000000018301e3e8 = uRam000000018301e488 ^ uRam000000018301e250;
      uVar5 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar5 + uRam000000018301e630;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e4d8 ^ uVar5;
      }
      uRam000000018301e408 = uVar55;
      uRam000000018301e368 = func_0x00018350fcb0(SUB161(auVar25 ^ _UNK_180017f90,5) ^ uVar6);
      uVar6 = (uRam000000018301e368 << 0x18 | uRam000000018301e368 >> 0x28) * 0x73b5babbb9952ff;
      uRam000000018301e378 = uVar61 ^ uVar55;
      uRam000000018301e408 =
           (uRam000000018301e408 ^ uVar6) + uRam000000018301e378 ^ 0x50d7eec800486b4b;
      uRam000000018301e2d8 =
           (uRam000000018301e2d8 * -0x29d1b3b580064e4d ^ uRam000000018301e408) + uVar6 ^
           uRam000000018301e408;
      uVar64 = (uint)uRam000000018301e378 << 7 | (uint)uRam000000018301e378 >> 0x19;
      uVar61 = CONCAT44(0,uStack_1c0);
      uVar6 = uStack_160 ^ 0x84222325 ^ uRam000000018301e4d8;
      lVar14 = (uStack_160 ^ 0x84222325) + uRam000000018301e388;
      uVar5 = uVar6 + lVar14;
      uVar52 = (uVar61 ^ uRam000000018301e388) + uRam000000018301e4d8 + uVar61;
      uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
      uVar5 = (uVar52 * 0x2000 | uVar52 >> 0x33) ^ uVar61 ^ uRam000000018301e388;
      uRam000000018301e308 =
           func_0x00018350fcb0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018301e4d8 + uVar61) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uStack_160;
      uVar6 = ~uRam000000018301e308 & uStack_160;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = uVar61;
      uVar4 = (uint)uStack_160 & uStack_1c0;
      uVar2 = (uint)uStack_160 | uStack_1c0;
      uVar10 = SUB164(auVar75 ^ auVar107,0);
      uVar9 = SUB164(auVar57 ^ auVar107,0);
      uVar5 = (ulonglong)uVar10 * (ulonglong)_UNK_180017fe0 +
              ((ulonglong)_UNK_180018010 * (ulonglong)uVar10 +
               (SUB168(auVar75 ^ auVar107,0) >> 0x20) * (ulonglong)_UNK_180017fe0 << 0x20) +
              ((ulonglong)_UNK_180018000 * (ulonglong)uVar2 << 0x20) +
              (ulonglong)_UNK_180017ff0 * (ulonglong)uVar2 +
              ((ulonglong)uVar4 * (ulonglong)_UNK_180018000 << 0x20) +
              (ulonglong)uVar4 * (ulonglong)_UNK_180017ff0 +
              ((ulonglong)_UNK_180017fd0 * (ulonglong)uStack_1c0 << 0x20) +
              (ulonglong)_UNK_180017fc0 * (ulonglong)uStack_1c0 +
              (_UNK_180017fb0 * uStack_160 << 0x20) + _UNK_180017fa0 * uStack_160 +
              (-((ulonglong)uVar9 * (_UNK_180018080 & 0xffffffff) +
                ((ulonglong)_UNK_1800180f0 * (ulonglong)uVar9 +
                 (SUB168(auVar57 ^ auVar107,0) >> 0x20) * (_UNK_180018080 & 0xffffffff) << 0x20)) -
              (((ulonglong)((uint)uStack_160 ^ uStack_1c0) * (ulonglong)_UNK_1800180e0 << 0x20) +
               (ulonglong)_UNK_1800180d0 * (ulonglong)((uint)uStack_160 ^ uStack_1c0) +
               ((ulonglong)uVar2 * (ulonglong)_UNK_1800180c0 << 0x20) +
               (ulonglong)_UNK_1800180b0 * (ulonglong)uVar2 +
              ((ulonglong)uVar4 * (ulonglong)_UNK_1800180a0 << 0x20) +
              (ulonglong)_UNK_180018090 * (ulonglong)uVar4 +
              ((ulonglong)uStack_1c0 * (ulonglong)_UNK_180018070 << 0x20) +
              (ulonglong)_UNK_180018060 * (ulonglong)uStack_1c0 +
              (uStack_160 * _UNK_180018050 << 0x20) + _UNK_180018040 * uStack_160)) +
              0xcfba0a066e5a8a70;
      uRam000000018301e388 = uRam000000018301e5f8 ^ uVar6 ^ uVar5;
      uRam000000018301e320 = (uRam000000018301e320 ^ uVar6) + uVar5 ^ 0x3cb05de32b74081e;
      uRam000000018301e260 =
           (uRam000000018301e260 * -0x62b7fcfe9b35f5ef ^ uRam000000018301e320) + uVar6;
      uRam000000018301e390 = uRam000000018301e260 ^ uRam000000018301e320;
      uVar54 = uVar5 & 0xffffffff;
      uVar52 = (ulonglong)uStack_128 ^ 0x84222325;
      uVar6 = ((uRam000000018301e4a8 ^ uVar52) +
              (ulonglong)((uint)uRam000000018301e4a8 & (uint)uVar52) * 2) *
              (uVar54 - uRam000000018301e280);
      uVar6 = (uVar6 | uRam000000018301e508) + (uVar6 & uRam000000018301e508);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e498 = uVar54;
      uRam000000018301e378 =
           func_0x00018350fcb0((uVar52 ^ uVar54 | uVar6) +
                               (ulonglong)((uint)(uVar52 ^ uVar54) & (uint)uVar6));
      uVar6 = uRam000000018301e378 << 0x14 | uRam000000018301e378 >> 0x2c;
      uRam000000018301e3f0 = uStack_128 ^ uVar54;
      uRam000000018301e4a0 =
           (uRam000000018301e4a0 ^ uVar6) + uRam000000018301e3f0 ^ 0x6076a9143683bd7b;
      uRam000000018301e310 =
           (uRam000000018301e310 * -0x4188e59e577b891f ^ uRam000000018301e4a0) + uVar6;
      uRam000000018301e4d8 = uRam000000018301e310 ^ uRam000000018301e4a0;
      uVar9 = (uint)uRam000000018301e3f0 << 0x10 | (uint)uRam000000018301e3f0 >> 0x10;
      uVar10 = (int)uStack_158 + uVar9;
      uVar52 = (ulonglong)uVar10 ^ 0x84222325;
      uVar6 = ((uRam000000018301e478 ^ uVar52) +
              (ulonglong)((uint)uRam000000018301e478 & (uint)uVar52) * 2) *
              (uVar61 - uRam000000018301e400);
      uVar6 = (uVar6 | uRam000000018301e3c0) + (uVar6 & uRam000000018301e3c0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e590 =
           func_0x00018350fcb0((uVar52 ^ uVar61 | uVar6) +
                               (ulonglong)((uint)(uVar52 ^ uVar61) & (uint)uVar6));
      uVar6 = uVar10 * uVar61 ^ uRam000000018301e590;
      uVar6 = uVar6 << 0x2c | uVar6 >> 0x14;
      uStack_1c0 = uStack_1c0 ^ uVar10;
      uRam000000018301e348 = (ulonglong)uStack_1c0;
      uRam000000018301e5e0 =
           (uRam000000018301e5e0 ^ uVar6) + uRam000000018301e348 ^ 0x96b40ae9e6aa04dc;
      uRam000000018301e4f8 =
           (uRam000000018301e4f8 * 0x74873ae8ee3af149 ^ uRam000000018301e5e0) + uVar6;
      uRam000000018301e600 = uRam000000018301e4f8 ^ uRam000000018301e5e0;
      uVar2 = uStack_1c0 << 0xc | uStack_1c0 >> 0x14;
      auVar26._4_4_ = 0;
      auVar26._0_4_ = uVar2 ^ 0x84222325;
      auVar26._8_8_ = uVar54;
      uVar61 = (ulonglong)uVar2;
      auVar24 = pshufb(auVar26 ^ _UNK_180018100,_UNK_1800170c0);
      uVar52 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar52 + uRam000000018301e600;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e428 ^ uVar52;
      }
      uRam000000018301e3d0 = func_0x00018350fcb0(SUB161(auVar26 ^ _UNK_180018100,5) ^ uVar6);
      uVar4 = (uint)uVar5;
      uVar50 = uVar2 & uVar4;
      uVar49 = uVar2 ^ uVar4;
      uVar69 = uVar2 ^ 0xffffffff;
      uVar72 = uVar4 ^ 0xffffffff;
      uVar6 = (uVar54 | uVar61) ^ uRam000000018301e3d0;
      uVar5 = ((((ulonglong)_UNK_180018140 * (ulonglong)uVar72 + _UNK_1800181c0 << 0x20) +
                (ulonglong)_UNK_1800181b0 * (ulonglong)uVar72 +
               ((ulonglong)_UNK_180018120 * (ulonglong)uVar69 + _UNK_1800181a0 << 0x20) +
               (ulonglong)_UNK_180018190 * (ulonglong)uVar69 +
               ((ulonglong)_UNK_180018160 * (ulonglong)uVar49 << 0x20) +
               (ulonglong)_UNK_180018150 * (ulonglong)uVar49 +
               ((ulonglong)uVar50 * (ulonglong)_UNK_180018160 << 0x20) +
               (ulonglong)uVar50 * (ulonglong)_UNK_180018150 +
               ((uVar5 & 0xffffffff) * (ulonglong)_UNK_180018140 << 0x20) +
               (ulonglong)_UNK_180018130 * (uVar5 & 0xffffffff) +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180018120 << 0x20) +
               (ulonglong)_UNK_180018110 * (ulonglong)uVar2 +
               ((ulonglong)(uVar2 | uVar4) * (ulonglong)_UNK_180018180 << 0x20) +
               (ulonglong)_UNK_180018170 * (ulonglong)(uVar2 | uVar4)) -
              (((ulonglong)uVar72 * (ulonglong)_UNK_1800182b0 + _UNK_1800182c0 << 0x20) +
               (ulonglong)_UNK_1800182a0 * (ulonglong)uVar72 +
               ((ulonglong)uVar69 * (ulonglong)_UNK_180018280 + _UNK_180018290 << 0x20) +
               (ulonglong)_UNK_180018270 * (ulonglong)uVar69 +
              ((ulonglong)uVar49 * (ulonglong)_UNK_180018260 << 0x20) +
              (ulonglong)_UNK_180018250 * (ulonglong)uVar49 +
              ((ulonglong)uVar50 * (ulonglong)_UNK_180018240 << 0x20) +
              (ulonglong)_UNK_180018230 * (ulonglong)uVar50 +
              ((uVar5 & 0xffffffff) * (ulonglong)_UNK_180018220 << 0x20) +
              (ulonglong)_UNK_180018210 * (uVar5 & 0xffffffff) +
              (ulonglong)_UNK_1800181f0 * (ulonglong)uVar2 +
              ((ulonglong)uVar2 * (ulonglong)_UNK_180018200 << 0x20))) + 0x8e41ce4b18590915;
      uRam000000018301e590 = uRam000000018301e498 ^ uVar6 ^ uVar5;
      uRam000000018301e298 = (uRam000000018301e298 ^ uVar6) + uVar5 ^ 0x23b868504aa3e162;
      uRam000000018301e350 =
           (uRam000000018301e350 * 0x3c6c1c94d4cd3d49 ^ uRam000000018301e298) + uVar6;
      uRam000000018301e340 = uRam000000018301e350 ^ uRam000000018301e298;
      uVar52 = uVar5 & 0xffffffff;
      uVar62 = (ulonglong)uVar9;
      uVar54 = uVar52 ^ 0x84222325;
      uVar6 = ((uRam000000018301e3b8 ^ uVar54) +
              (ulonglong)((uint)uRam000000018301e3b8 & (uint)uVar54) * 2) *
              (uVar62 - uRam000000018301e4c8);
      uVar6 = (uVar6 | uRam000000018301e4a0) + (uVar6 & uRam000000018301e4a0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e538 = uVar52;
      uRam000000018301e290 =
           func_0x00018350fcb0((uVar54 ^ uVar62 | uVar6) +
                               (ulonglong)((uint)(uVar54 ^ uVar62) & (uint)uVar6));
      uVar6 = (uRam000000018301e290 & 0x7fffffffffffffff) >> 1 |
              uRam000000018301e290 & 0x7fffffffffffffff;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2
              ^ uRam000000018301e290 & 0x7fffffffffffffff;
      uRam000000018301e398 = uVar62 ^ uVar52;
      uRam000000018301e4e8 =
           (uRam000000018301e4e8 ^ uVar6) + uRam000000018301e398 ^ 0x542dfe9ac8bafc6d;
      uRam000000018301e2f0 =
           (uRam000000018301e2f0 * 0x7fc015944fdb8acf ^ uRam000000018301e4e8) + uVar6;
      uVar4 = (uint)uRam000000018301e398 << 8 | (uint)uRam000000018301e398 >> 0x18;
      uVar10 = uVar10 + uVar4;
      uVar54 = (ulonglong)uVar10;
      uVar62 = uVar54 ^ 0x84222325;
      uVar6 = ((uRam000000018301e320 ^ uVar62) +
              (ulonglong)((uint)uRam000000018301e320 & (uint)uVar62) * 2) *
              (uVar61 - uRam000000018301e288);
      uVar6 = (uVar6 | uRam000000018301e440) + (uVar6 & uRam000000018301e440);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2f0 =
           func_0x00018350fcb0((uVar62 ^ uVar61 | uVar6) +
                               (ulonglong)((uint)(uVar62 ^ uVar61) & (uint)uVar6));
      uVar6 = (uRam000000018301e2f0 << 0x17 | uRam000000018301e2f0 >> 0x29) ^ uVar54;
      uVar2 = uVar10 ^ uVar2;
      uRam000000018301e528 = (ulonglong)uVar2;
      uRam000000018301e400 =
           (uRam000000018301e400 ^ uVar6) + uRam000000018301e528 ^ 0xe568c2f45fbd25e;
      uRam000000018301e3a0 =
           (uRam000000018301e3a0 * 0x68a313074601f033 ^ uRam000000018301e400) + uVar6;
      uRam000000018301e530 = uRam000000018301e3a0 ^ uRam000000018301e400;
      uVar9 = uVar2 << 7 | uVar2 >> 0x19;
      uStack_194 = uStack_194 ^ uStack_198 + uStack_1ac;
      uVar2 = uStack_194 << 0x10 | uStack_194 >> 0x10;
      uVar62 = CONCAT44(0,uVar2);
      uVar61 = (ulonglong)uStack_19c ^ 0x84222325;
      uVar6 = ((uRam000000018301e508 ^ uVar61) +
              (ulonglong)((uint)uRam000000018301e508 & (uint)uVar61) * 2) *
              (uVar62 - uRam000000018301e248);
      uVar6 = (uVar6 | uRam000000018301e4a8) + (uVar6 & uRam000000018301e4a8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e280 =
           func_0x00018350fcb0((uVar61 ^ uVar62 | uVar6) +
                               (ulonglong)((uint)(uVar61 ^ uVar62) & (uint)uVar6));
      auVar97._8_8_ = 0;
      auVar97._0_8_ = uVar62;
      auVar80._8_4_ = 0xffffffff;
      auVar80._0_8_ = 0xffffffffffffffff;
      auVar80._12_4_ = 0xffffffff;
      uVar49 = uStack_19c ^ 0xffffffff;
      uVar69 = SUB164(auVar97 ^ auVar80,0);
      uVar6 = uRam000000018301e280 * 0x556cbca84f800000 |
              uRam000000018301e280 * 0x5a64a8aad979509f >> 0x29;
      uVar61 = (((ulonglong)uVar69 * (ulonglong)_UNK_180018330 +
                 ((SUB168(auVar97 ^ auVar80,0) >> 0x20) * (ulonglong)_UNK_180018330 +
                  (ulonglong)_UNK_180018300 * (ulonglong)uVar69 << 0x20) +
                 ((ulonglong)_UNK_1800182d0 * (ulonglong)uVar49 + _UNK_180018320 << 0x20) +
                 (ulonglong)_UNK_180018310 * (ulonglong)uVar49 +
                 (ulonglong)_UNK_1800182e0 * (ulonglong)uStack_19c +
                 ((ulonglong)uStack_19c * (ulonglong)_UNK_1800182d0 << 0x20) +
                ((ulonglong)uVar2 * (ulonglong)_UNK_180018300 << 0x20) +
                (ulonglong)_UNK_1800182f0 * (ulonglong)uVar2) -
               (((ulonglong)uVar49 * (ulonglong)_UNK_1800183d0 + _UNK_1800183e0 << 0x20) +
                (ulonglong)_UNK_1800183c0 * (ulonglong)uVar49 +
                ((ulonglong)(uStack_19c | uVar2) * (ulonglong)_UNK_1800183b0 << 0x20) +
                (ulonglong)_UNK_1800183a0 * (ulonglong)(uStack_19c | uVar2) +
                ((ulonglong)(uStack_19c & uVar2) * (ulonglong)_UNK_1800183b0 << 0x20) +
                (ulonglong)(uStack_19c & uVar2) * (ulonglong)_UNK_1800183a0 +
                ((ulonglong)uStack_19c * (ulonglong)_UNK_180018370 << 0x20) +
                (ulonglong)_UNK_180018360 * (ulonglong)uStack_19c +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180018390 << 0x20) +
               (ulonglong)_UNK_180018380 * (ulonglong)uVar2)) + 0x338aad7a2122aef8;
      uRam000000018301e498 = uRam000000018301e268 ^ uVar6 ^ uVar61;
      uRam000000018301e458 = (uRam000000018301e458 ^ uVar6) + uVar61 ^ 0x5586c4824b16cb74;
      uRam000000018301e420 =
           (uRam000000018301e420 * -0x5fa9c5946296975f ^ uRam000000018301e458) + uVar6;
      uRam000000018301e418 = uRam000000018301e420 ^ uRam000000018301e458;
      uVar49 = (uint)uVar61;
      uVar8 = uVar61 & 0xffffffff;
      uVar69 = (uVar49 ^ uStack_1ac) << 0xc | (uVar49 ^ uStack_1ac) >> 0x14;
      uVar72 = uStack_198 + uStack_1ac + uVar69;
      uVar17 = (ulonglong)uVar72 ^ 0x84222325;
      uVar6 = ((uRam000000018301e290 ^ uVar17) +
              (ulonglong)((uint)uVar17 & (uint)uRam000000018301e290) * 2) *
              (uVar62 - uRam000000018301e2a8);
      uVar6 = (uVar6 | uRam000000018301e420) + (uVar6 & uRam000000018301e420);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e568 = uVar8;
      uRam000000018301e4d8 =
           func_0x00018350fcb0((uVar17 ^ uVar62 | uVar6) +
                               (ulonglong)((uint)(uVar17 ^ uVar62) & (uint)uVar6));
      uVar6 = ((uVar72 | uVar2) ^ uRam000000018301e4d8) & 0x1fffffffffffffff ^ (ulonglong)uVar72;
      uVar2 = uVar2 ^ uVar72;
      uRam000000018301e3f0 = (ulonglong)uVar2;
      uRam000000018301e4e0 =
           (uRam000000018301e4e0 ^ uVar6) + uRam000000018301e3f0 ^ 0xfd208700ca1fb698;
      uRam000000018301e5d0 =
           (uRam000000018301e5d0 * -0x7edcf2ea58ce8a13 ^ uRam000000018301e4e0) + uVar6;
      uRam000000018301e2e0 = uRam000000018301e5d0 ^ uRam000000018301e4e0;
      uVar2 = uVar2 << 8 | uVar2 >> 0x18;
      uVar63 = (ulonglong)uVar2;
      uVar18 = uVar63 ^ 0x84222325;
      uVar6 = ((uRam000000018301e610 ^ uVar18) +
              (ulonglong)((uint)uVar18 & (uint)uRam000000018301e610) * 2) *
              (uVar8 - uRam000000018301e2f0);
      uVar6 = (uVar6 | uRam000000018301e618) + (uVar6 & uRam000000018301e618);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2d8 =
           func_0x00018350fcb0((uVar18 ^ uVar8 | uVar6) +
                               (ulonglong)((uint)(uVar18 ^ uVar8) & (uint)uVar6));
      auVar24 = _UNK_1800170c0;
      auVar93._8_8_ = 0;
      auVar93._0_8_ = uVar8;
      uVar50 = uVar2 & uVar49;
      uVar77 = uVar2 | uVar49;
      auVar27._8_4_ = 0xffffffff;
      auVar27._0_8_ = 0xffffffffffffffff;
      auVar27._12_4_ = 0xffffffff;
      uVar101 = SUB164(auVar93 ^ auVar27,0);
      uVar61 = ((((ulonglong)_UNK_180018420 * (ulonglong)uVar77 << 0x20) +
                 (ulonglong)_UNK_180018410 * (ulonglong)uVar77 +
                ((ulonglong)uVar50 * (ulonglong)_UNK_180018420 << 0x20) +
                (ulonglong)uVar50 * (ulonglong)_UNK_180018410 +
                ((ulonglong)_UNK_180018400 * (uVar61 & 0xffffffff) << 0x20) +
                (ulonglong)_UNK_1800183f0 * (uVar61 & 0xffffffff) +
                (ulonglong)uVar2 * (ulonglong)_UNK_1800183f0 +
                ((ulonglong)uVar2 * (ulonglong)_UNK_180018400 << 0x20)) -
               ((ulonglong)uVar101 * (ulonglong)_UNK_180018470 +
                ((SUB168(auVar93 ^ auVar27,0) >> 0x20) * (ulonglong)_UNK_180018470 +
                 (ulonglong)_UNK_180018480 * (ulonglong)uVar101 << 0x20) +
                ((ulonglong)(uVar2 ^ 0xffffffff) * (ulonglong)_UNK_180018460 + _UNK_1800184d0 <<
                0x20) + (ulonglong)_UNK_180018450 * (ulonglong)(uVar2 ^ 0xffffffff) +
                ((ulonglong)(uVar2 ^ uVar49) * (ulonglong)_UNK_1800184a0 << 0x20) +
                (ulonglong)_UNK_180018490 * (ulonglong)(uVar2 ^ uVar49) +
                ((ulonglong)uVar50 * (ulonglong)_UNK_1800184a0 << 0x20) +
                (ulonglong)uVar50 * (ulonglong)_UNK_180018490 +
                ((uVar61 & 0xffffffff) * (ulonglong)_UNK_180018480 << 0x20) +
                (uVar61 & 0xffffffff) * (ulonglong)_UNK_180018470 +
                (ulonglong)uVar2 * (ulonglong)_UNK_180018450 +
                ((ulonglong)uVar2 * (ulonglong)_UNK_180018460 << 0x20) +
               ((ulonglong)uVar77 * (ulonglong)_UNK_1800184c0 << 0x20) +
               (ulonglong)_UNK_1800184b0 * (ulonglong)uVar77)) + 0x82f9adfdf8080dc;
      auVar28._4_4_ = 0;
      auVar28._0_4_ = (uint)uVar61 ^ 0x84222325;
      auVar28._8_4_ = uVar69;
      auVar28._12_4_ = 0;
      auVar21 = pshufb(auVar28 ^ _UNK_1800184e0,_UNK_1800170c0);
      uVar6 = uRam000000018301e2d8 * -0x558ba3b0242058e3;
      uRam000000018301e378 = uRam000000018301e2a8 ^ uVar6 ^ uVar61;
      uRam000000018301e618 = (uRam000000018301e618 ^ uVar6) + uVar61 ^ 0x78c2bdae3a815f76;
      uRam000000018301e3c0 =
           (uRam000000018301e3c0 * 0x30c6cb9c6eddc81 ^ uRam000000018301e618) + uVar6;
      uRam000000018301e500 = uRam000000018301e3c0 ^ uRam000000018301e618;
      uVar62 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar62 + uRam000000018301e530;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e330 ^ uVar62;
      }
      uRam000000018301e370 = uVar61 & 0xffffffff;
      uRam000000018301e2e8 = func_0x00018350fcb0(SUB161(auVar28 ^ _UNK_1800184e0,5) ^ uVar6);
      uRam000000018301e550 = uVar61 & 0xffffffff ^ (ulonglong)uVar69;
      uRam000000018301e430 =
           (uRam000000018301e430 ^ uRam000000018301e2e8 & 0xffffffffffff8000) + uRam000000018301e550
           ^ 0x7c98db3114e9c409;
      uRam000000018301e5f8 =
           (uRam000000018301e5f8 * 0x6daa5dbd86910157 ^ uRam000000018301e430) +
           (uRam000000018301e2e8 & 0xffffffffffff8000);
      uRam000000018301e620 = uRam000000018301e5f8 ^ uRam000000018301e430;
      uVar49 = (uint)uRam000000018301e550 << 7 | (uint)uRam000000018301e550 >> 0x19;
      auVar98._8_8_ = 0;
      auVar98._0_8_ = uVar53;
      auVar29._4_4_ = 0;
      auVar29._0_4_ = uVar64 ^ 0x84222325;
      auVar29._8_8_ = uVar53;
      auVar21 = pshufb(auVar29 ^ _UNK_1800184f0,auVar24);
      uVar62 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar62 + uRam000000018301e430;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e458 ^ uVar62;
      }
      uRam000000018301e4b0 = func_0x00018350fcb0(SUB161(auVar29 ^ _UNK_1800184f0,5) ^ uVar6);
      uVar6 = uRam000000018301e4b0 ^ uVar53;
      uVar101 = uVar64 & uVar11;
      uVar50 = uVar64 ^ uVar11;
      auVar94._8_4_ = 0xffffffff;
      auVar94._0_8_ = 0xffffffffffffffff;
      auVar94._12_4_ = 0xffffffff;
      uVar69 = uVar64 ^ 0xffffffff;
      uVar77 = SUB164(auVar98 ^ auVar94,0);
      uVar62 = ((((ulonglong)_UNK_1800185b0 * (ulonglong)uVar69 + _UNK_1800185c0 << 0x20) +
                 (ulonglong)_UNK_1800185a0 * (ulonglong)uVar69 +
                ((ulonglong)_UNK_180018590 * (ulonglong)uVar50 << 0x20) +
                (ulonglong)_UNK_180018580 * (ulonglong)uVar50 +
                ((ulonglong)(uVar64 | uVar11) * (ulonglong)_UNK_180018570 << 0x20) +
                (ulonglong)_UNK_180018560 * (ulonglong)(uVar64 | uVar11) +
                ((ulonglong)_UNK_180018550 * (ulonglong)uVar101 << 0x20) +
                (ulonglong)_UNK_180018540 * (ulonglong)uVar101 +
                (_UNK_180018530 * uVar53 << 0x20) + _UNK_180018520 * uVar53 +
                (ulonglong)_UNK_180018500 * (ulonglong)uVar64 +
                ((ulonglong)_UNK_180018510 * (ulonglong)uVar64 << 0x20)) -
               ((ulonglong)uVar77 * (ulonglong)_UNK_1800186a0 +
                ((ulonglong)_UNK_1800186b0 * (ulonglong)uVar77 +
                 (SUB168(auVar98 ^ auVar94,0) >> 0x20) * (ulonglong)_UNK_1800186a0 << 0x20) +
                ((ulonglong)uVar69 * (ulonglong)_UNK_180018680 + _UNK_180018690 << 0x20) +
                (ulonglong)_UNK_180018670 * (ulonglong)uVar69 +
               ((ulonglong)uVar50 * (ulonglong)_UNK_180018660 << 0x20) +
               (ulonglong)_UNK_180018650 * (ulonglong)uVar50 +
               ((ulonglong)uVar101 * (ulonglong)_UNK_180018640 << 0x20) +
               (ulonglong)_UNK_180018630 * (ulonglong)uVar101 +
               (uVar53 * _UNK_180018620 << 0x20) + _UNK_180018610 * uVar53 +
               (ulonglong)_UNK_1800185f0 * (ulonglong)uVar64 +
               ((ulonglong)uVar64 * (ulonglong)_UNK_180018600 << 0x20))) + 0x449c8f1c9add9a76;
      uRam000000018301e4d0 = uRam000000018301e450 ^ uVar6 ^ uVar62;
      uRam000000018301e2d0 = (uRam000000018301e2d0 ^ uVar6) + uVar62 ^ 0x9c10221e214c3db8;
      uRam000000018301e350 =
           (uRam000000018301e350 * 0xca9bc251fda0157 ^ uRam000000018301e2d0) + uVar6;
      uRam000000018301e290 = uRam000000018301e350 ^ uRam000000018301e2d0;
      uVar11 = (uint)uVar62;
      uVar8 = uVar62 & 0xffffffff;
      uVar6 = ((uRam000000018301e348 ^ uVar18) +
              (ulonglong)((uint)uRam000000018301e348 & (uint)uVar18) * 2) *
              (uVar8 - uRam000000018301e2a0);
      uVar6 = (uVar6 | uRam000000018301e290) + (uVar6 & uRam000000018301e290);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2e8 = uVar8;
      uRam000000018301e368 =
           func_0x00018350fcb0((uVar18 ^ uVar8 | uVar6) +
                               (ulonglong)((uint)(uVar18 ^ uVar8) & (uint)uVar6));
      uVar6 = (((uVar63 | uVar8) ^ uRam000000018301e368) & 0xfffffffffff) << 0x13 |
              uRam000000018301e368 >> 0x2d;
      uVar53 = uVar63 + uVar8 + (ulonglong)(uVar2 & uVar11) * -2;
      uRam000000018301e268 = (uRam000000018301e268 ^ uVar6) + uVar53 ^ 0x1d87f5a73022e955;
      uRam000000018301e558 =
           (uRam000000018301e558 * 0xcb994e8de7252d7 ^ uRam000000018301e268) + uVar6;
      uRam000000018301e450 = uRam000000018301e558 ^ uRam000000018301e268;
      uRam000000018301e2e8 = uVar53 & 0xffffffff;
      uVar2 = (uint)uVar53 << 0x10 | (uint)uVar53 >> 0x10;
      auVar30._4_4_ = 0;
      auVar30._0_4_ = uVar2 ^ 0x84222325;
      auVar30._8_4_ = uVar10;
      auVar30._12_4_ = 0;
      auVar24 = pshufb(auVar30 ^ _UNK_1800186c0,auVar24);
      uVar53 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar53 + lRam000000018301e470;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e418 ^ uVar53;
      }
      uRam000000018301e4b8 = func_0x00018350fcb0(SUB161(auVar30 ^ _UNK_1800186c0,5) ^ uVar6);
      auVar99._8_8_ = 0;
      auVar99._0_8_ = CONCAT44(0,uVar2);
      uVar50 = uVar2 & uVar10;
      uVar69 = uVar2 | uVar10;
      uVar10 = uVar2 ^ uVar10;
      uVar6 = (uRam000000018301e4b8 << 0x3c | uRam000000018301e4b8 >> 4) >> 0x12 |
              (uRam000000018301e4b8 >> 4) << 0x2e;
      auVar108._8_4_ = 0xffffffff;
      auVar108._0_8_ = 0xffffffffffffffff;
      auVar108._12_4_ = 0xffffffff;
      uVar77 = SUB164(auVar99 ^ auVar108,0);
      uVar54 = ((ulonglong)_UNK_180018740 * (ulonglong)uVar10 << 0x20) +
               (ulonglong)_UNK_180018730 * (ulonglong)uVar10 +
               ((ulonglong)_UNK_180018720 * (ulonglong)uVar69 << 0x20) +
               (ulonglong)_UNK_180018710 * (ulonglong)uVar69 +
               ((ulonglong)_UNK_180018700 * (ulonglong)uVar50 << 0x20) +
               (ulonglong)_UNK_1800186f0 * (ulonglong)uVar50 +
               (_UNK_1800186e0 * uVar54 << 0x20) + _UNK_1800186d0 * uVar54 +
               (ulonglong)uVar2 * (ulonglong)_UNK_1800186d0 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_1800186e0 << 0x20) +
               (-((ulonglong)uVar77 * (ulonglong)_UNK_1800187b0 +
                 ((ulonglong)_UNK_180018820 * (ulonglong)uVar77 +
                  (SUB168(auVar99 ^ auVar108,0) >> 0x20) * (ulonglong)_UNK_1800187b0 << 0x20)) -
               (((ulonglong)uVar10 * (ulonglong)_UNK_180018810 << 0x20) +
                (ulonglong)_UNK_180018800 * (ulonglong)uVar10 +
                ((ulonglong)uVar69 * (ulonglong)_UNK_1800187f0 << 0x20) +
                (ulonglong)_UNK_1800187e0 * (ulonglong)uVar69 +
               ((ulonglong)uVar50 * (ulonglong)_UNK_1800187d0 << 0x20) +
               (ulonglong)_UNK_1800187c0 * (ulonglong)uVar50 +
               (uVar54 * _UNK_1800187a0 << 0x20) + _UNK_180018790 * uVar54 +
               (ulonglong)_UNK_180018770 * (ulonglong)uVar2 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180018780 << 0x20))) + 0x3f4691f75f76c953;
      uRam000000018301e2a0 = uRam000000018301e3c0 ^ uVar6 ^ uVar54;
      uRam000000018301e480 = (uRam000000018301e480 ^ uVar6) + uVar54 ^ 0x62e143296c2dcc28;
      uRam000000018301e290 =
           (uRam000000018301e290 * -0x3fee8a9ab87635b5 ^ uRam000000018301e480) + uVar6;
      uRam000000018301e550 = uRam000000018301e290 ^ uRam000000018301e480;
      uVar10 = (uint)uVar54;
      uVar18 = uVar54 & 0xffffffff;
      uVar64 = (uVar64 ^ uVar10) << 0xc | (uVar64 ^ uVar10) >> 0x14;
      uVar6 = (ulonglong)uVar64 ^ 0x84222325;
      uVar53 = uVar6 ^ uRam000000018301e510;
      lVar14 = uVar6 + uRam000000018301e2c0;
      uVar6 = uVar53 + lVar14;
      uVar63 = (uVar8 ^ uRam000000018301e2c0) + uRam000000018301e510 + uVar8;
      uVar53 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar53;
      uVar6 = (uVar63 * 0x2000 | uVar63 >> 0x33) ^ uVar8 ^ uRam000000018301e2c0;
      uRam000000018301e308 = uVar18;
      uRam000000018301e450 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018301e510 + uVar8) ^
                               (uVar53 << 0x1d | uVar53 >> 0x23) - lVar14);
      auVar24 = _UNK_1800170c0;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar8;
      uVar77 = uVar64 & uVar11;
      uVar69 = uVar64 | uVar11;
      uVar11 = uVar64 ^ uVar11;
      uVar6 = (uVar64 * uVar8 ^ uRam000000018301e450) & 0x3ffffffff;
      auVar88._8_4_ = 0xffffffff;
      auVar88._0_8_ = 0xffffffffffffffff;
      auVar88._12_4_ = 0xffffffff;
      uVar50 = SUB164(auVar65 ^ auVar108,0);
      uVar53 = ((ulonglong)_UNK_1800188a0 * (ulonglong)uVar11 << 0x20) +
               (ulonglong)_UNK_180018890 * (ulonglong)uVar11 +
               ((ulonglong)_UNK_180018880 * (ulonglong)uVar69 << 0x20) +
               (ulonglong)_UNK_180018870 * (ulonglong)uVar69 +
               ((ulonglong)_UNK_180018860 * (ulonglong)uVar77 << 0x20) +
               (ulonglong)_UNK_180018850 * (ulonglong)uVar77 +
               ((ulonglong)_UNK_180018840 * (uVar62 & 0xffffffff) << 0x20) +
               (ulonglong)_UNK_180018830 * (uVar62 & 0xffffffff) +
               (ulonglong)uVar64 * (ulonglong)_UNK_180018830 +
               ((ulonglong)uVar64 * (ulonglong)_UNK_180018840 << 0x20) +
               (-((ulonglong)uVar50 * (_UNK_180018910 & 0xffffffff) +
                 ((ulonglong)_UNK_180018980 * (ulonglong)uVar50 +
                  (SUB168(auVar65 ^ auVar108,0) >> 0x20) * (_UNK_180018910 & 0xffffffff) << 0x20)) -
               (((ulonglong)uVar11 * (ulonglong)_UNK_180018970 << 0x20) +
                (ulonglong)_UNK_180018960 * (ulonglong)uVar11 +
                ((ulonglong)uVar69 * (ulonglong)_UNK_180018950 << 0x20) +
                (ulonglong)_UNK_180018940 * (ulonglong)uVar69 +
               ((ulonglong)uVar77 * (ulonglong)_UNK_180018930 << 0x20) +
               (ulonglong)_UNK_180018920 * (ulonglong)uVar77 +
               ((uVar62 & 0xffffffff) * (ulonglong)_UNK_180018900 << 0x20) +
               (ulonglong)_UNK_1800188f0 * (uVar62 & 0xffffffff) +
               (ulonglong)_UNK_1800188d0 * (ulonglong)uVar64 +
               ((ulonglong)uVar64 * (ulonglong)_UNK_1800188e0 << 0x20))) + 0xd08192436032ddc9;
      uRam000000018301e428 = uRam000000018301e540 ^ uVar6 ^ uVar53;
      uRam000000018301e530 = (uRam000000018301e530 ^ uVar6) + uVar53 ^ 0xe206ed06f20e1582;
      uRam000000018301e520 =
           (uRam000000018301e520 * 0x72010d3ffed2429f ^ uRam000000018301e530) + uVar6;
      uRam000000018301e548 = uRam000000018301e520 ^ uRam000000018301e530;
      uStack_1f8 = (uint)uVar53;
      auVar31._4_4_ = 0;
      auVar31._0_4_ = uStack_1f8 ^ 0x84222325;
      auVar31._8_4_ = uVar2;
      auVar31._12_4_ = 0;
      auVar21 = pshufb(auVar31 ^ _UNK_180018990,_UNK_1800170c0);
      uVar62 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar62 + uRam000000018301e350;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e610 ^ uVar62;
      }
      uRam000000018301e538 = uVar53 & 0xffffffff;
      uRam000000018301e5f8 = func_0x00018350fcb0(SUB161(auVar31 ^ _UNK_180018990,5) ^ uVar6);
      uVar6 = uRam000000018301e5f8 - (uRam000000018301e5f8 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
              uRam000000018301e5f8;
      uVar53 = (uVar53 & 0xffffffff) + CONCAT44(0,uVar2) + (ulonglong)(uVar2 & uStack_1f8) * -2;
      uRam000000018301e408 = (uRam000000018301e408 ^ uVar6) + uVar53 ^ 0x51b464c0ffcb5bd9;
      uRam000000018301e520 =
           (uRam000000018301e520 * 0x3c7190d7fe117bd5 ^ uRam000000018301e408) + uVar6;
      uRam000000018301e5c0 = uRam000000018301e520 ^ uRam000000018301e408;
      uRam000000018301e548 = uVar53 & 0xffffffff;
      uStack_1bc = (uint)uVar53 << 8 | (uint)uVar53 >> 0x18;
      uVar6 = CONCAT44(0,uStack_1bc) ^ 0x84222325;
      uVar53 = uVar6 ^ uRam000000018301e410;
      lVar14 = uVar6 + uRam000000018301e560;
      uVar6 = uVar53 + lVar14;
      uVar62 = (uVar18 ^ uRam000000018301e560) + uRam000000018301e410 + uVar18;
      uVar53 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar53;
      uVar6 = (uVar62 * 0x2000 | uVar62 >> 0x33) ^ uVar18 ^ uRam000000018301e560;
      uRam000000018301e358 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018301e410 + uVar18) ^
                               (uVar53 << 0x1d | uVar53 >> 0x23) - lVar14);
      uVar6 = uRam000000018301e358 - (uRam000000018301e358 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
              uRam000000018301e358;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = CONCAT44(0,uStack_1bc);
      uVar69 = uStack_1bc & uVar10;
      uVar11 = uStack_1bc | uVar10;
      uVar10 = uStack_1bc ^ uVar10;
      uVar2 = SUB164(auVar58 ^ auVar88,0);
      uStack_158 = ((((ulonglong)_UNK_180018a10 * (ulonglong)uVar10 << 0x20) +
                     (ulonglong)_UNK_180018a00 * (ulonglong)uVar10 +
                     ((ulonglong)_UNK_1800189f0 * (ulonglong)uVar11 << 0x20) +
                     (ulonglong)_UNK_1800189e0 * (ulonglong)uVar11 +
                    ((ulonglong)_UNK_1800189d0 * (ulonglong)uVar69 << 0x20) +
                    (ulonglong)_UNK_1800189c0 * (ulonglong)uVar69 +
                    ((uVar54 & 0xffffffff) * (ulonglong)_UNK_1800189b0 << 0x20) +
                    (ulonglong)_UNK_1800189a0 * (uVar54 & 0xffffffff) +
                    (ulonglong)uStack_1bc * (ulonglong)_UNK_1800189a0 +
                    ((ulonglong)uStack_1bc * (ulonglong)_UNK_1800189b0 << 0x20)) -
                   ((ulonglong)uVar2 * (ulonglong)_UNK_180018a40 +
                    ((SUB168(auVar58 ^ auVar88,0) >> 0x20) * (ulonglong)_UNK_180018a40 +
                     (ulonglong)_UNK_180018a50 * (ulonglong)uVar2 << 0x20) +
                    ((ulonglong)uVar10 * (ulonglong)_UNK_180018a70 << 0x20) +
                    (ulonglong)_UNK_180018a60 * (ulonglong)uVar10 +
                    ((ulonglong)uVar69 * (ulonglong)_UNK_180018a70 << 0x20) +
                    (ulonglong)uVar69 * (ulonglong)_UNK_180018a60 +
                    ((ulonglong)uStack_1bc * (ulonglong)_UNK_180018a50 << 0x20) +
                    (ulonglong)uStack_1bc * (ulonglong)_UNK_180018a40 +
                   ((ulonglong)uVar11 * (ulonglong)_UNK_180018a90 << 0x20) +
                   (ulonglong)_UNK_180018a80 * (ulonglong)uVar11)) + 0x5726b943852849c6;
      uRam000000018301e4c0 = uRam000000018301e420 ^ uVar6 ^ uStack_158;
      uRam000000018301e5c8 = (uRam000000018301e5c8 ^ uVar6) + uStack_158 ^ 0xe000b6911543b54e;
      uRam000000018301e610 =
           (uRam000000018301e610 * -0x2cb11b9a5b826851 ^ uRam000000018301e5c8) + uVar6;
      uRam000000018301e5c0 = uRam000000018301e610 ^ uRam000000018301e5c8;
      uStack_1e8 = (uint)uStack_158;
      uRam000000018301e530 = uStack_158 & 0xffffffff;
      uStack_1a0 = (int)uVar15 + uVar9;
      uVar15 = (ulonglong)uStack_1a0;
      uVar6 = uVar15 ^ 0x84222325 ^ uRam000000018301e368;
      lVar14 = (uVar15 ^ 0x84222325) + uRam000000018301e318;
      uVar53 = uVar6 + lVar14;
      uVar54 = (uVar7 ^ uRam000000018301e318) + uRam000000018301e368 + uVar7;
      uVar6 = (uVar53 * 0x2000 | uVar53 >> 0x33) ^ uVar6;
      uVar53 = (uVar54 * 0x2000 | uVar54 >> 0x33) ^ uVar7 ^ uRam000000018301e318;
      uStack_1a8 = (uVar64 ^ uStack_1e8) << 7 | (uVar64 ^ uStack_1e8) >> 0x19;
      uRam000000018301e5a8 =
           func_0x00018350fcb0((uVar53 << 0x1d | uVar53 >> 0x23) - (uRam000000018301e368 + uVar7) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      uVar6 = uVar15 + uVar7 + (ulonglong)(uVar1 & uStack_1a0) * -2;
      uRam000000018301e518 =
           (uRam000000018301e518 ^ ~uRam000000018301e5a8 & uVar15) + uVar6 ^ 0xcee8c8644b17a11;
      uRam000000018301e5d8 =
           (uRam000000018301e5d8 * 0x4b50ea18833930c3 ^ uRam000000018301e518) +
           (~uRam000000018301e5a8 & uVar15);
      uRam000000018301e540 = uRam000000018301e5d8 ^ uRam000000018301e518;
      uRam000000018301e2c8 = uVar6 & 0xffffffff;
      uVar1 = (uint)uVar6 << 0x10 | (uint)uVar6 >> 0x10;
      uStack_1b4 = (uint)uVar61 + uVar1;
      auVar32._4_4_ = 0;
      auVar32._0_4_ = uStack_1b4 ^ 0x84222325;
      auVar32._8_4_ = uVar9;
      auVar32._12_4_ = 0;
      auVar21 = pshufb(auVar32 ^ _UNK_180018aa0,auVar24);
      uVar7 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar7 + uRam000000018301e2f8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e388 ^ uVar7;
      }
      uRam000000018301e298 = func_0x00018350fcb0(SUB161(auVar32 ^ _UNK_180018aa0,5) ^ uVar6);
      uVar9 = uVar9 ^ uStack_1b4;
      uRam000000018301e4b0 = (ulonglong)uVar9;
      uRam000000018301e548 =
           (uRam000000018301e548 ^ uStack_1b4 ^ uRam000000018301e298) + uRam000000018301e4b0 ^
           0x7c68d067374f0969;
      uRam000000018301e560 =
           (uRam000000018301e560 * -0x5566931d5da29407 ^ uRam000000018301e548) +
           (uStack_1b4 ^ uRam000000018301e298);
      uRam000000018301e3e0 = uRam000000018301e560 ^ uRam000000018301e548;
      uVar11 = uVar9 << 0xc | uVar9 >> 0x14;
      uStack_1a0 = uStack_1a0 + uVar11;
      uVar7 = (ulonglong)uStack_1a0 ^ 0x84222325;
      uVar6 = ((uRam000000018301e298 ^ uVar7) +
              (ulonglong)((uint)uRam000000018301e298 & (uint)uVar7) * 2) *
              (uVar1 - uRam000000018301e560);
      uVar6 = (uVar6 | uRam000000018301e4c8) + (uVar6 & uRam000000018301e4c8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uVar7 = uVar7 ^ uVar1;
      uRam000000018301e3e0 =
           func_0x00018350fcb0((uVar7 | uVar6) + (ulonglong)((uint)uVar7 & (uint)uVar6));
      uVar1 = uVar1 ^ uStack_1a0;
      uRam000000018301e298 = (ulonglong)uVar1;
      uRam000000018301e500 =
           (uRam000000018301e500 ^ uRam000000018301e3e0 & 0xffffffffff800000) + uRam000000018301e298
           ^ 0x175e872203cc714c;
      uRam000000018301e400 =
           (uRam000000018301e400 * 0x4e0c4f6c6225cb31 ^ uRam000000018301e500) +
           (uRam000000018301e3e0 & 0xffffffffff800000);
      uRam000000018301e370 = uRam000000018301e400 ^ uRam000000018301e500;
      uStack_228 = uVar1 << 8 | uVar1 >> 0x18;
      uStack_1b4 = uStack_1b4 + uStack_228;
      uVar7 = (ulonglong)uStack_1b4 ^ 0x84222325;
      uVar6 = ((uRam000000018301e488 ^ uVar7) +
              (ulonglong)((uint)uRam000000018301e488 & (uint)uVar7) * 2) *
              (uVar11 - uRam000000018301e3f0);
      uVar6 = (uVar6 | uRam000000018301e4f0) + (uVar6 & uRam000000018301e4f0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uVar7 = uVar7 ^ uVar11;
      uRam000000018301e560 =
           func_0x00018350fcb0((uVar7 | uVar6) + (ulonglong)((uint)uVar7 & (uint)uVar6));
      uVar6 = (ulonglong)uStack_1b4 ^ (uRam000000018301e560 << 0xf | uRam000000018301e560 >> 0x31);
      uVar11 = uVar11 ^ uStack_1b4;
      uRam000000018301e558 = (ulonglong)uVar11;
      uRam000000018301e600 =
           (uRam000000018301e600 ^ uVar6) + uRam000000018301e558 ^ 0x8832d29a8224ac49;
      uRam000000018301e310 =
           (uRam000000018301e310 * 0x3d10ea3204496fb7 ^ uRam000000018301e600) + uVar6;
      uRam000000018301e480 = uRam000000018301e310 ^ uRam000000018301e600;
      uStack_1e0 = uVar11 << 7 | uVar11 >> 0x19;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar52;
      auVar33._4_4_ = 0;
      auVar33._0_4_ = uVar49 ^ 0x84222325;
      auVar33._8_8_ = uVar52;
      auVar24 = pshufb(auVar33 ^ _UNK_180018ab0,auVar24);
      uVar7 = auVar24._8_8_ + auVar24._0_8_;
      uVar15 = (ulonglong)uVar49;
      uVar6 = uVar7 + uRam000000018301e270;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e2a8 ^ uVar7;
      }
      uRam000000018301e448 = func_0x00018350fcb0(SUB161(auVar33 ^ _UNK_180018ab0,5) ^ uVar6);
      uVar6 = ~uRam000000018301e448 & uVar15;
      uVar1 = (uint)uVar5;
      uVar2 = uVar49 & uVar1;
      uVar11 = uVar49 ^ uVar1;
      auVar81._8_4_ = 0xffffffff;
      auVar81._0_8_ = 0xffffffffffffffff;
      auVar81._12_4_ = 0xffffffff;
      uVar9 = SUB164(auVar96 ^ auVar81,0);
      uVar7 = (((ulonglong)uVar9 * (ulonglong)_UNK_180018b70 +
                ((ulonglong)_UNK_180018b80 * (ulonglong)uVar9 +
                 (SUB168(auVar96 ^ auVar81,0) >> 0x20) * (ulonglong)_UNK_180018b70 << 0x20) +
                ((ulonglong)(uVar49 ^ 0xffffffff) * (ulonglong)_UNK_180018b50 + _UNK_180018b60 <<
                0x20) + (ulonglong)_UNK_180018b40 * (ulonglong)(uVar49 ^ 0xffffffff) +
               ((ulonglong)_UNK_180018b30 * (ulonglong)uVar11 << 0x20) +
               (ulonglong)_UNK_180018b20 * (ulonglong)uVar11 +
               ((ulonglong)_UNK_180018b10 * (ulonglong)uVar2 << 0x20) +
               (ulonglong)_UNK_180018b00 * (ulonglong)uVar2 +
               (_UNK_180018af0 * uVar52 << 0x20) + _UNK_180018ae0 * uVar52 +
               (ulonglong)_UNK_180018ac0 * (ulonglong)uVar49 +
               ((ulonglong)_UNK_180018ad0 * (ulonglong)uVar49 << 0x20)) -
              (((ulonglong)uVar11 * (ulonglong)_UNK_180018c20 << 0x20) +
               (ulonglong)_UNK_180018c10 * (ulonglong)uVar11 +
               ((ulonglong)(uVar49 | uVar1) * (ulonglong)_UNK_180018c00 << 0x20) +
               (ulonglong)_UNK_180018bf0 * (ulonglong)(uVar49 | uVar1) +
              ((ulonglong)uVar2 * (ulonglong)_UNK_180018be0 << 0x20) +
              (ulonglong)_UNK_180018bd0 * (ulonglong)uVar2 +
              (uVar52 * _UNK_180018bc0 << 0x20) + _UNK_180018bb0 * uVar52 +
              (ulonglong)uVar49 * (ulonglong)_UNK_180018bb0 +
              ((ulonglong)uVar49 * (ulonglong)_UNK_180018bc0 << 0x20))) + 0x5f74fd41086c0df5;
      uRam000000018301e490 = uRam000000018301e4e0 ^ uVar6 ^ uVar7;
      uRam000000018301e5f8 = (uRam000000018301e5f8 ^ uVar6) + uVar7 ^ 0x5cff53cfdf66ec3a;
      uRam000000018301e488 =
           (uRam000000018301e488 * -0x630b67a4bdb59953 ^ uRam000000018301e5f8) + uVar6;
      uRam000000018301e3c8 = uRam000000018301e488 ^ uRam000000018301e5f8;
      uVar53 = uVar7 & 0xffffffff;
      uVar5 = uVar53 ^ 0x84222325;
      uVar6 = ((uRam000000018301e4b8 ^ uVar5) +
              (ulonglong)((uint)uRam000000018301e4b8 & (uint)uVar5) * 2) *
              (uVar48 - uRam000000018301e258);
      uVar6 = (uVar6 | uRam000000018301e278) + (uVar6 & uRam000000018301e278);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e548 = uVar53;
      uRam000000018301e590 =
           func_0x00018350fcb0((uVar5 ^ uVar48 | uVar6) +
                               (ulonglong)((uint)(uVar5 ^ uVar48) & (uint)uVar6));
      uRam000000018301e3c0 = uVar48 ^ uVar53;
      uRam000000018301e598 =
           (uRam000000018301e598 ^ uRam000000018301e630) + uRam000000018301e3c0 ^ 0x47211156bfa688bd
      ;
      uRam000000018301e3e8 =
           (uRam000000018301e3e8 * 0x2e176ce974051fb9 ^ uRam000000018301e598) + uRam000000018301e630
      ;
      uRam000000018301e4d0 = uRam000000018301e3e8 ^ uRam000000018301e598;
      uVar1 = (uint)uRam000000018301e3c0 << 0x10 | (uint)uRam000000018301e3c0 >> 0x10;
      uVar48 = (ulonglong)uVar1;
      uVar6 = uVar48 ^ 0x84222325 ^ uRam000000018301e570;
      lVar14 = (uVar48 ^ 0x84222325) + uRam000000018301e5e0;
      uVar5 = uVar6 + lVar14;
      uVar61 = (uVar13 ^ uRam000000018301e5e0) + uRam000000018301e570 + uVar13;
      uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
      uVar5 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar13 ^ uRam000000018301e5e0;
      uRam000000018301e490 =
           func_0x00018350fcb0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018301e570 + uVar13) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      uVar2 = uVar1 & uVar19;
      uVar19 = uVar1 ^ uVar19;
      uVar11 = uVar1 ^ 0xffffffff;
      uVar6 = uVar48 * uVar13 ^ uRam000000018301e490;
      uVar5 = uVar6 & 0x7fffffffffffff;
      uVar6 = uVar5 - ((uVar6 & 0x7fffffffffffff) >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar5;
      uVar13 = ((((ulonglong)_UNK_180018cc0 * (ulonglong)uVar11 + _UNK_180018cd0 << 0x20) +
                 (ulonglong)_UNK_180018cb0 * (ulonglong)uVar11 +
                 ((ulonglong)_UNK_180018ca0 * (ulonglong)uVar19 << 0x20) +
                 (ulonglong)_UNK_180018c90 * (ulonglong)uVar19 +
                ((ulonglong)_UNK_180018c80 * (ulonglong)uVar2 << 0x20) +
                (ulonglong)_UNK_180018c70 * (ulonglong)uVar2 +
                (_UNK_180018c60 * uVar13 << 0x20) + _UNK_180018c50 * uVar13 +
                ((ulonglong)_UNK_180018c40 * (ulonglong)uVar1 << 0x20) +
                (ulonglong)_UNK_180018c30 * (ulonglong)uVar1) -
               (((ulonglong)uVar11 * (ulonglong)_UNK_180018d90 + _UNK_180018da0 << 0x20) +
                (ulonglong)_UNK_180018d80 * (ulonglong)uVar11 +
                ((ulonglong)uVar19 * (ulonglong)_UNK_180018d70 << 0x20) +
                (ulonglong)_UNK_180018d60 * (ulonglong)uVar19 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180018d50 << 0x20) +
               (ulonglong)_UNK_180018d40 * (ulonglong)uVar2 +
               (uVar13 * _UNK_180018d30 << 0x20) + _UNK_180018d20 * uVar13 +
               ((ulonglong)uVar1 * (ulonglong)_UNK_180018d10 << 0x20) +
               (ulonglong)_UNK_180018d00 * (ulonglong)uVar1)) + 0xda8e179b9bd4006f;
      uRam000000018301e2b8 = uRam000000018301e468 ^ uVar5 ^ uVar13;
      uRam000000018301e3f8 = (uRam000000018301e3f8 ^ uVar5) + uVar13 ^ 0xc75f07860f87933f;
      uRam000000018301e5f0 =
           (uRam000000018301e5f0 * -0x73cabb30a56e7b5f ^ uRam000000018301e3f8) + uVar5;
      uRam000000018301e268 = uRam000000018301e5f0 ^ uRam000000018301e3f8;
      uVar5 = uVar13 & 0xffffffff;
      uVar6 = uVar5 ^ 0x84222325 ^ uRam000000018301e638;
      lVar14 = (uVar5 ^ 0x84222325) + uRam000000018301e240;
      uVar61 = uVar6 + lVar14;
      uVar52 = (uVar15 ^ uRam000000018301e240) + uRam000000018301e638 + uVar15;
      uVar6 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar6;
      uVar61 = (uVar52 * 0x2000 | uVar52 >> 0x33) ^ uVar15 ^ uRam000000018301e240;
      uRam000000018301e428 = uVar5;
      uRam000000018301e5c0 =
           func_0x00018350fcb0((uVar61 << 0x1d | uVar61 >> 0x23) - (uRam000000018301e638 + uVar15) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar24 = _UNK_1800170c0;
      uVar6 = uVar5 * uVar15 ^ uRam000000018301e5c0;
      uVar6 = uVar6 << 0x19 | uVar6 >> 0x27;
      uVar5 = uVar5 + uVar15 + (ulonglong)(uVar49 & (uint)uVar13) * -2;
      uRam000000018301e418 = (uRam000000018301e418 ^ uVar6) + uVar5 ^ 0xa4115d902ff01595;
      uRam000000018301e488 =
           (uRam000000018301e488 * 0x30f566ee08313a83 ^ uRam000000018301e418) + uVar6;
      uRam000000018301e280 = uRam000000018301e488 ^ uRam000000018301e418;
      uRam000000018301e4f8 = uVar5 & 0xffffffff;
      uVar19 = (uint)uVar5 << 0xc | (uint)uVar5 >> 0x14;
      auVar102._8_8_ = 0;
      auVar102._0_8_ = uVar53;
      auVar34._4_4_ = 0;
      auVar34._0_4_ = uVar19 ^ 0x84222325;
      auVar34._8_8_ = uVar53;
      auVar21 = pshufb(auVar34 ^ _UNK_180018db0,_UNK_1800170c0);
      uVar5 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar5 + uRam000000018301e320;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e3b0 ^ uVar5;
      }
      uRam000000018301e578 = func_0x00018350fcb0(SUB161(auVar34 ^ _UNK_180018db0,5) ^ uVar6);
      auVar100._8_8_ = 0;
      auVar100._0_8_ = CONCAT44(0,uVar19);
      uVar2 = uVar19 & (uint)uVar7;
      uVar11 = uVar19 ^ (uint)uVar7;
      auVar109._8_4_ = 0xffffffff;
      auVar109._0_8_ = 0xffffffffffffffff;
      auVar109._12_4_ = 0xffffffff;
      uVar10 = SUB164(auVar102 ^ auVar109,0);
      uVar6 = uRam000000018301e578 & 0x7ffffffffff;
      uVar9 = SUB164(auVar100 ^ auVar109,0);
      uStack_160 = (((ulonglong)uVar10 * (ulonglong)_UNK_180018e00 +
                     ((ulonglong)_UNK_180018e50 * (ulonglong)uVar10 +
                      (SUB168(auVar102 ^ auVar109,0) >> 0x20) * (ulonglong)_UNK_180018e00 << 0x20) +
                     ((ulonglong)_UNK_180018e40 * (ulonglong)uVar11 << 0x20) +
                     (ulonglong)_UNK_180018e30 * (ulonglong)uVar11 +
                    ((ulonglong)_UNK_180018e20 * (ulonglong)uVar2 << 0x20) +
                    (ulonglong)_UNK_180018e10 * (ulonglong)uVar2 +
                    ((ulonglong)_UNK_180018df0 * (uVar7 & 0xffffffff) << 0x20) +
                    (ulonglong)_UNK_180018de0 * (uVar7 & 0xffffffff) +
                    (ulonglong)_UNK_180018dc0 * (ulonglong)uVar19 +
                    ((ulonglong)_UNK_180018dd0 * (ulonglong)uVar19 << 0x20)) -
                   ((ulonglong)uVar9 * (_UNK_180018ec0 & 0xffffffff) +
                    ((ulonglong)_UNK_180018f10 * (ulonglong)uVar9 +
                     (SUB168(auVar100 ^ auVar109,0) >> 0x20) * (_UNK_180018ec0 & 0xffffffff) << 0x20
                    ) + ((ulonglong)uVar11 * (ulonglong)_UNK_180018f00 << 0x20) +
                        (ulonglong)_UNK_180018ef0 * (ulonglong)uVar11 +
                   ((ulonglong)uVar2 * (ulonglong)_UNK_180018ee0 << 0x20) +
                   (ulonglong)_UNK_180018ed0 * (ulonglong)uVar2 +
                   ((uVar7 & 0xffffffff) * (ulonglong)_UNK_180018eb0 << 0x20) +
                   (ulonglong)_UNK_180018ea0 * (uVar7 & 0xffffffff) +
                   (ulonglong)_UNK_180018e80 * (ulonglong)uVar19 +
                   ((ulonglong)uVar19 * (ulonglong)_UNK_180018e90 << 0x20))) + 0xbadad81494cf406a;
      uRam000000018301e538 = uRam000000018301e438 ^ uVar6 ^ uStack_160;
      uRam000000018301e450 = (uRam000000018301e450 ^ uVar6) + uStack_160 ^ 0xbe08dc116e3a944b;
      uRam000000018301e608 =
           (uRam000000018301e608 * -0x6e6157b036dd31f9 ^ uRam000000018301e450) + uVar6;
      uRam000000018301e5f8 = uRam000000018301e608 ^ uRam000000018301e450;
      uStack_1d8 = (uint)uStack_160;
      auVar35._4_4_ = 0;
      auVar35._0_4_ = uStack_1d8 ^ 0x84222325;
      auVar35._8_4_ = uVar1;
      auVar35._12_4_ = 0;
      auVar21 = pshufb(auVar35 ^ _UNK_180018f20,auVar24);
      uVar5 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar5 + uRam000000018301e5a8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e528 ^ uVar5;
      }
      uRam000000018301e588 = uStack_160 & 0xffffffff;
      uRam000000018301e270 = func_0x00018350fcb0(SUB161(auVar35 ^ _UNK_180018f20,5) ^ uVar6);
      uVar6 = (uRam000000018301e270 & 0xffffffffffffffe0) +
              (uRam000000018301e270 >> 5 & 0x555555555555555) * -0x10;
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
              uRam000000018301e270 & 0xffffffffffffffe0;
      uRam000000018301e278 = uStack_160 & 0xffffffff ^ uVar48;
      uRam000000018301e5d8 =
           (uRam000000018301e5d8 ^ uVar6) + uRam000000018301e278 ^ 0x5b3ab00a2fb9a06e;
      uRam000000018301e428 =
           (uRam000000018301e428 * 0x3888408ce2dbe1a5 ^ uRam000000018301e5d8) + uVar6;
      uRam000000018301e590 = uRam000000018301e428 ^ uRam000000018301e5d8;
      uStack_1b8 = (uint)uRam000000018301e278 << 8 | (uint)uRam000000018301e278 >> 0x18;
      uStack_218 = (uint)uVar13 + uStack_1b8;
      auVar36._4_4_ = 0;
      auVar36._0_4_ = uStack_218 ^ 0x84222325;
      auVar36._8_4_ = uVar19;
      auVar36._12_4_ = 0;
      auVar21 = pshufb(auVar36 ^ _UNK_180018f30,auVar24);
      uVar5 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar5 + uRam000000018301e4a8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e348 ^ uVar5;
      }
      uRam000000018301e448 = func_0x00018350fcb0(SUB161(auVar36 ^ _UNK_180018f30,5) ^ uVar6);
      uVar6 = (((uStack_218 | uVar19) ^ uRam000000018301e448) & 0x7fffffffffffffff) >> 3;
      uVar5 = (ulonglong)uStack_218 + CONCAT44(0,uVar19) + (ulonglong)(uVar19 & uStack_218) * -2;
      uRam000000018301e308 = (uVar6 * 8 ^ uRam000000018301e308) + uVar5 ^ 0x64edac7976e7ef05;
      uRam000000018301e330 =
           (uRam000000018301e330 * -0x47acb551c033a067 ^ uRam000000018301e308) + uVar6 * 8;
      uRam000000018301e2c8 = uRam000000018301e308 ^ uRam000000018301e330;
      uRam000000018301e568 = uVar5 & 0xffffffff;
      uStack_1ac = (uint)uVar5 << 7 | (uint)uVar5 >> 0x19;
      uVar7 = (ulonglong)uVar20;
      uVar6 = ((uRam000000018301e588 ^ uVar17) +
              (ulonglong)((uint)uRam000000018301e588 & (uint)uVar17) * 2) *
              (uVar7 - uRam000000018301e330);
      uVar6 = (uVar6 | uRam000000018301e310) + (uVar6 & uRam000000018301e310);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e610 =
           func_0x00018350fcb0((uVar17 ^ uVar7 | uVar6) +
                               (ulonglong)((uint)(uVar17 ^ uVar7) & (uint)uVar6));
      uVar6 = (ulonglong)(uVar20 ^ uVar72) ^ (uVar72 | uVar20) ^ uRam000000018301e610;
      uVar1 = uVar72 & uVar20;
      uVar19 = uVar72 ^ uVar20;
      auVar106._8_4_ = 0xffffffff;
      auVar106._0_8_ = 0xffffffffffffffff;
      auVar106._12_4_ = 0xffffffff;
      uVar11 = SUB164(ZEXT416(uVar72) ^ auVar106,0);
      uVar5 = ((((ulonglong)_UNK_180018f50 * (ulonglong)uVar19 << 0x20) +
                (ulonglong)_UNK_180018f40 * (ulonglong)uVar19 +
                ((ulonglong)uVar1 * (ulonglong)_UNK_180018f50 << 0x20) +
                (ulonglong)uVar1 * (ulonglong)_UNK_180018f40 + (ulonglong)uVar72 + (ulonglong)uVar20
               + ((ulonglong)(uVar72 | uVar20) * (ulonglong)_UNK_180018f70 << 0x20) +
                 (ulonglong)_UNK_180018f60 * (ulonglong)(uVar72 | uVar20)) -
              ((ulonglong)uVar11 * (_UNK_180018fe0 & 0xffffffff) +
               ((ulonglong)_UNK_180019030 * (ulonglong)uVar11 +
                (SUB168(ZEXT416(uVar72) ^ auVar106,0) >> 0x20) * (_UNK_180018fe0 & 0xffffffff) <<
               0x20) + ((ulonglong)uVar19 * (ulonglong)_UNK_180019020 << 0x20) +
                       (ulonglong)_UNK_180019010 * (ulonglong)uVar19 +
              ((ulonglong)uVar1 * (ulonglong)_UNK_180019000 << 0x20) +
              (ulonglong)_UNK_180018ff0 * (ulonglong)uVar1 +
              ((ulonglong)uVar20 * (ulonglong)_UNK_180018fd0 << 0x20) +
              (ulonglong)_UNK_180018fc0 * (ulonglong)uVar20 +
              ((ulonglong)uVar72 * (ulonglong)_UNK_180018fb0 << 0x20) +
              (ulonglong)_UNK_180018fa0 * (ulonglong)uVar72)) + 0x2998f72cf3e9101f;
      uRam000000018301e5d0 = uRam000000018301e4c0 ^ uVar6 ^ uVar5;
      uRam000000018301e5e8 = (uRam000000018301e5e8 ^ uVar6) + uVar5 ^ 0xa6763f2ab6d8ec77;
      uRam000000018301e500 =
           (uRam000000018301e500 * 0x59c9372c11d694df ^ uRam000000018301e5e8) + uVar6;
      uRam000000018301e580 = uRam000000018301e500 ^ uRam000000018301e5e8;
      uVar53 = uVar5 & 0xffffffff;
      uVar13 = (ulonglong)uVar4;
      uVar48 = uVar53 ^ 0x84222325;
      uVar6 = ((uRam000000018301e340 ^ uVar48) +
              (ulonglong)((uint)uRam000000018301e340 & (uint)uVar48) * 2) *
              (uVar13 - uRam000000018301e250);
      uVar6 = (uVar6 | uRam000000018301e450) + (uVar6 & uRam000000018301e450);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2b8 = uVar53;
      uRam000000018301e338 =
           func_0x00018350fcb0((uVar48 ^ uVar13 | uVar6) +
                               (ulonglong)((uint)(uVar48 ^ uVar13) & (uint)uVar6));
      auVar95._8_8_ = 0;
      auVar95._0_8_ = uVar53;
      uRam000000018301e440 = uVar13 ^ uVar53;
      uRam000000018301e458 =
           (uRam000000018301e458 ^ uRam000000018301e338 ^ uVar53) + uRam000000018301e440 ^
           0xeff7eec9b5f04ed0;
      uRam000000018301e4c0 =
           (uRam000000018301e4c0 * -0x583710e9ec76b87d ^ uRam000000018301e458) +
           (uRam000000018301e338 ^ uVar53);
      uRam000000018301e288 = uRam000000018301e4c0 ^ uRam000000018301e458;
      uVar19 = (uint)uRam000000018301e440 << 0x10 | (uint)uRam000000018301e440 >> 0x10;
      uVar48 = (ulonglong)uVar19;
      uVar13 = uVar48 ^ 0x84222325;
      uVar6 = ((uRam000000018301e5a8 ^ uVar13) +
              (ulonglong)((uint)uRam000000018301e5a8 & (uint)uVar13) * 2) *
              (uVar55 - uRam000000018301e618);
      uVar6 = (uVar6 | uRam000000018301e3f8) + (uVar6 & uRam000000018301e3f8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2f0 =
           func_0x00018350fcb0((uVar13 ^ uVar55 | uVar6) +
                               (ulonglong)((uint)(uVar13 ^ uVar55) & (uint)uVar6));
      uVar6 = ~(ulonglong)((uint)uRam000000018301e2f0 ^ (uVar3 | uVar19)) & uVar48;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar55;
      uVar1 = SUB164(auVar37 ^ auVar106,0);
      uVar13 = (((uVar48 ^ uVar55) * (ulonglong)_UNK_1800190a0 +
                 ((ulonglong)_UNK_1800190b0 * (uVar48 ^ uVar55) << 0x20) +
                 ((ulonglong)(uVar19 | uVar3) * (ulonglong)_UNK_180019090 << 0x20) +
                 (ulonglong)_UNK_180019080 * (ulonglong)(uVar19 | uVar3) +
                ((ulonglong)(uVar19 & uVar3) * (ulonglong)_UNK_180019070 << 0x20) +
                (ulonglong)_UNK_180019060 * (ulonglong)(uVar19 & uVar3) +
                (uVar55 * _UNK_180019050 << 0x20) + _UNK_180019040 * uVar55 +
                (ulonglong)uVar19 * (ulonglong)_UNK_180019040 +
                ((ulonglong)uVar19 * (ulonglong)_UNK_180019050 << 0x20)) -
               ((ulonglong)uVar1 * (ulonglong)_UNK_1800190f0 +
                ((SUB168(auVar37 ^ auVar106,0) >> 0x20) * (ulonglong)_UNK_1800190f0 +
                 (ulonglong)_UNK_1800190e0 * (ulonglong)uVar1 << 0x20) +
               uVar55 * _UNK_1800190f0 + (uVar55 * _UNK_1800190e0 << 0x20))) + 0x2f0ce69d134f7c8c;
      uRam000000018301e428 = uRam000000018301e440 ^ uVar6 ^ uVar13;
      uRam000000018301e4a8 = (uRam000000018301e4a8 ^ uVar6) + uVar13 ^ 0xf019b9f21c5f423c;
      uRam000000018301e448 =
           (uRam000000018301e448 * -0x52d43bf1e792411 ^ uRam000000018301e4a8) + uVar6;
      uRam000000018301e540 = uRam000000018301e448 ^ uRam000000018301e4a8;
      auVar38._4_4_ = 0;
      auVar38._0_4_ = (uint)uVar13 ^ 0x84222325;
      auVar38._8_4_ = uVar20;
      auVar38._12_4_ = 0;
      auVar21 = pshufb(auVar38 ^ _UNK_180019100,auVar24);
      uVar15 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar15 + uRam000000018301e4f8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e590 ^ uVar15;
      }
      uRam000000018301e5b8 = uVar13 & 0xffffffff;
      uRam000000018301e510 = func_0x00018350fcb0(SUB161(auVar38 ^ _UNK_180019100,5) ^ uVar6);
      uVar15 = uRam000000018301e510 * -0x768ff0ad45af5ca1;
      uVar6 = uVar15 >> 1 | uVar15;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar15 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
               0x40 ^ uVar15;
      uRam000000018301e3e0 = uVar13 & 0xffffffff ^ uVar7;
      uRam000000018301e298 =
           (uRam000000018301e298 ^ uVar15) + uRam000000018301e3e0 ^ 0x18dd6d6613bccaf5;
      uRam000000018301e2a8 =
           (uRam000000018301e2a8 * 0x41272c7893b80c6b ^ uRam000000018301e298) + uVar15;
      uRam000000018301e2d8 = uRam000000018301e2a8 ^ uRam000000018301e298;
      uVar1 = (uint)uRam000000018301e3e0 << 0xc | (uint)uRam000000018301e3e0 >> 0x14;
      uVar6 = (ulonglong)uVar1 ^ 0x84222325;
      uVar7 = uVar6 ^ uRam000000018301e5a0;
      lVar14 = uVar6 + uRam000000018301e620;
      uVar6 = uVar7 + lVar14;
      uVar15 = (uVar53 ^ uRam000000018301e620) + uVar53 + uRam000000018301e5a0;
      uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar7;
      uVar6 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar53 ^ uRam000000018301e620;
      uRam000000018301e5e8 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uVar53 + uRam000000018301e5a0) ^
                               (uVar7 << 0x1d | uVar7 >> 0x23) - lVar14);
      uVar6 = uRam000000018301e5e8 ^ uVar1;
      uVar20 = (uint)uVar5;
      uVar2 = uVar1 & uVar20;
      uVar11 = uVar1 ^ uVar20;
      auVar84._8_4_ = 0xffffffff;
      auVar84._0_8_ = 0xffffffffffffffff;
      auVar84._12_4_ = 0xffffffff;
      uVar3 = SUB164(auVar95 ^ auVar84,0);
      uVar5 = ((((ulonglong)_UNK_180019180 * (ulonglong)uVar11 << 0x20) +
                (ulonglong)_UNK_180019170 * (ulonglong)uVar11 +
                ((ulonglong)(uVar1 | uVar20) * (ulonglong)_UNK_180019160 << 0x20) +
                (ulonglong)_UNK_180019150 * (ulonglong)(uVar1 | uVar20) +
               ((ulonglong)_UNK_180019140 * (ulonglong)uVar2 << 0x20) +
               (ulonglong)_UNK_180019130 * (ulonglong)uVar2 +
               ((ulonglong)_UNK_180019120 * (uVar5 & 0xffffffff) << 0x20) +
               (ulonglong)_UNK_180019110 * (uVar5 & 0xffffffff) +
               (ulonglong)uVar1 * (ulonglong)_UNK_180019110 +
               ((ulonglong)uVar1 * (ulonglong)_UNK_180019120 << 0x20)) -
              ((ulonglong)uVar3 * (ulonglong)_UNK_180019260 +
               ((ulonglong)_UNK_180019270 * (ulonglong)uVar3 +
                (SUB168(auVar95 ^ auVar84,0) >> 0x20) * (ulonglong)_UNK_180019260 << 0x20) +
               ((ulonglong)(uVar1 ^ 0xffffffff) * (ulonglong)_UNK_180019240 + _UNK_180019250 << 0x20
               ) + (ulonglong)_UNK_180019230 * (ulonglong)(uVar1 ^ 0xffffffff) +
              ((ulonglong)uVar11 * (ulonglong)_UNK_180019220 << 0x20) +
              (ulonglong)_UNK_180019210 * (ulonglong)uVar11 +
              ((ulonglong)uVar2 * (ulonglong)_UNK_180019200 << 0x20) +
              (ulonglong)_UNK_1800191f0 * (ulonglong)uVar2 +
              ((uVar5 & 0xffffffff) * (ulonglong)_UNK_1800191e0 << 0x20) +
              (ulonglong)_UNK_1800191d0 * (uVar5 & 0xffffffff) +
              (ulonglong)_UNK_1800191b0 * (ulonglong)uVar1 +
              ((ulonglong)uVar1 * (ulonglong)_UNK_1800191c0 << 0x20))) + 0xd1aba682ae8fcbd2;
      uRam000000018301e3c0 = uRam000000018301e378 ^ uVar6 ^ uVar5;
      uRam000000018301e290 = (uRam000000018301e290 ^ uVar6) + uVar5 ^ 0xfe68fca4a91215ef;
      uRam000000018301e418 =
           (uRam000000018301e418 * -0x32ca238bbf7c1b3d ^ uRam000000018301e290) + uVar6;
      uRam000000018301e440 = uRam000000018301e418 ^ uRam000000018301e290;
      uStack_1a4 = (uint)uVar5;
      uVar5 = uVar5 & 0xffffffff;
      uVar7 = uVar5 ^ 0x84222325;
      uVar6 = ((uRam000000018301e290 ^ uVar7) +
              (ulonglong)((uint)uRam000000018301e290 & (uint)uVar7) * 2) *
              (uVar48 - uRam000000018301e560);
      uVar6 = (uVar6 | uRam000000018301e2a8) + (uVar6 & uRam000000018301e2a8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e520 = uVar5;
      uRam000000018301e638 =
           func_0x00018350fcb0((uVar7 ^ uVar48 | uVar6) +
                               (ulonglong)((uint)(uVar7 ^ uVar48) & (uint)uVar6));
      uVar6 = uVar5 + uVar48 + (ulonglong)(uVar19 & uStack_1a4) * -2;
      uRam000000018301e630 =
           (uRam000000018301e630 ^ uVar5 ^ uRam000000018301e638) + uVar6 ^ 0x7bdbd4f503c16c40;
      uRam000000018301e2f8 =
           (uRam000000018301e2f8 * -0x621f1286dc99c3f3 ^ uRam000000018301e630) +
           (uVar5 ^ uRam000000018301e638);
      uRam000000018301e2e8 = uRam000000018301e2f8 ^ uRam000000018301e630;
      uRam000000018301e298 = uVar6 & 0xffffffff;
      uStack_1f0 = (uint)uVar6 << 8 | (uint)uVar6 >> 0x18;
      uStack_1c4 = (uint)uVar13 + uStack_1f0;
      auVar39._4_4_ = 0;
      auVar39._0_4_ = uStack_1c4 ^ 0x84222325;
      auVar39._8_4_ = uVar1;
      auVar39._12_4_ = 0;
      auVar21 = pshufb(auVar39 ^ _UNK_180019280,auVar24);
      uVar5 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar5 + uRam000000018301e2d8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e250 ^ uVar5;
      }
      uRam000000018301e348 = func_0x00018350fcb0(SUB161(auVar39 ^ _UNK_180019280,5) ^ uVar6);
      uVar1 = uVar1 ^ uStack_1c4;
      uRam000000018301e2c0 = (ulonglong)uVar1;
      uRam000000018301e468 =
           (uRam000000018301e468 ^ uRam000000018301e348 * 0x800000) + uRam000000018301e2c0 ^
           0xe02672122cb037cf;
      uRam000000018301e4c8 =
           (uRam000000018301e4c8 * -0xc5268f547a6b9b9 ^ uRam000000018301e468) +
           uRam000000018301e348 * 0x800000;
      uStack_208 = uVar1 << 7 | uVar1 >> 0x19;
      uRam000000018301e5a8 = uRam000000018301e4c8 ^ uRam000000018301e468;
      auVar40._8_8_ = _UNK_180019298;
      auVar40._0_8_ = CONCAT44(0,uVar12) ^ 0x84222325;
      auVar24 = pshufb(auVar40 ^ _UNK_1800192a0,auVar24);
      uVar5 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar5 + uRam000000018301e5d8;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e5e0 ^ uVar5;
      }
      uRam000000018301e420 = func_0x00018350fcb0(SUB161(auVar40 ^ _UNK_1800192a0,5) ^ uVar6);
      uVar6 = uRam000000018301e420 & 0xfffffffffc000000;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = CONCAT44(0,uVar12);
      auVar59._8_4_ = 0xffffffff;
      auVar59._0_8_ = 0xffffffffffffffff;
      auVar59._12_4_ = 0xffffffff;
      uVar1 = SUB164(auVar59 ^ auVar70,0);
      uVar19 = uVar12 & (uint)UNK_180017990;
      uVar11 = uVar12 | (uint)UNK_180017990;
      uVar20 = SUB164(auVar70 ^ _UNK_180017990,0);
      uRam000000018301e5d8 =
           (ulonglong)uVar1 * (ulonglong)_UNK_1800192d0 +
           ((SUB168(auVar59 ^ auVar70,0) >> 0x20) * (ulonglong)_UNK_1800192d0 +
            (ulonglong)_UNK_1800192b0 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_1800192c0 * (ulonglong)uVar12 +
           ((ulonglong)uVar12 * (ulonglong)_UNK_1800192b0 << 0x20) +
           (-((ulonglong)uVar20 * (ulonglong)_UNK_180019360 +
             ((ulonglong)_UNK_180019370 * (ulonglong)uVar20 +
              (SUB168(auVar70 ^ _UNK_180017990,0) >> 0x20) * (ulonglong)_UNK_180019360 << 0x20)) -
           (((ulonglong)uVar11 * (ulonglong)_UNK_180019350 << 0x20) +
            (ulonglong)_UNK_180019340 * (ulonglong)uVar11 +
           ((ulonglong)uVar19 * (ulonglong)_UNK_180019330 << 0x20 |
           (ulonglong)_UNK_180019320 * (ulonglong)uVar19) +
           ((ulonglong)uVar12 * (ulonglong)_UNK_180019310 << 0x20) +
           (ulonglong)_UNK_180019300 * (ulonglong)uVar12)) + 0x4a1ebb77ad3d99b2;
      uRam000000018301e638 = uRam000000018301e548 ^ uVar6 ^ uRam000000018301e5d8;
      uRam000000018301e5a8 =
           (uRam000000018301e5a8 ^ uVar6) + uRam000000018301e5d8 ^ 0xc268d7dc45ebf840;
      uRam000000018301e628 =
           (uRam000000018301e628 * 0xca53030534bc023 ^ uRam000000018301e5a8) + uVar6;
      uRam000000018301e570 = uRam000000018301e628 ^ uRam000000018301e5a8;
      uVar12 = (uint)uRam000000018301e5d8;
      uRam000000018301e5d8 = uRam000000018301e5d8 & 0xffffffff;
      uStack_158 = uStack_158 & 0xffffffff;
      uStack_160 = uStack_160 & 0xffffffff;
      uStack_1c0 = uStack_1e0;
      uStack_19c = uStack_1b4;
      uStack_198 = uStack_1a4;
      uStack_194 = uStack_1bc;
      uStack_170 = uStack_1b8;
      uStack_128 = uStack_1f0;
      switch((int)uVar12 < param_3) {
      case false:
        goto code_r0x000183506a12;
      }
    } while( true );
  }
code_r0x000183506a76:
  *param_1 = *param_2 + uStack_1f8;
  uVar12 = param_2[1];
  uVar6 = (ulonglong)uVar12 ^ 0x84222325;
  uVar5 = uVar6 ^ uRam000000018301e630;
  uVar13 = uStack_1a0 ^ uRam000000018301e428;
  lVar16 = uVar6 + uRam000000018301e428;
  lVar14 = uRam000000018301e630 + uStack_1a0;
  uVar6 = uVar5 + lVar16;
  uVar7 = uVar13 + lVar14;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar13 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar13;
  uRam000000018301e5b0 =
       func_0x00018350fcb0((uVar13 << 0x1d | uVar13 >> 0x23) - lVar14 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar16);
  uVar6 = uRam000000018301e5b0 ^ uVar12;
  uVar1 = uVar12 & uStack_1a0;
  uVar20 = uVar12 | uStack_1a0;
  uVar19 = uVar12 ^ 0xffffffff;
  uVar5 = ((((ulonglong)_UNK_180019430 * (ulonglong)uVar19 + _UNK_180019440 << 0x20) +
            (ulonglong)_UNK_180019420 * (ulonglong)uVar19 +
           ((ulonglong)(uVar12 ^ uStack_1a0) * (ulonglong)_UNK_180019410 << 0x20) +
           (ulonglong)_UNK_180019400 * (ulonglong)(uVar12 ^ uStack_1a0) +
           ((ulonglong)_UNK_1800193f0 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_1800193e0 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_1800193d0 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_1800193c0 * (ulonglong)uVar1 +
           ((ulonglong)_UNK_1800193b0 * (ulonglong)uStack_1a0 << 0x20) +
           (ulonglong)_UNK_1800193a0 * (ulonglong)uStack_1a0 +
           ((ulonglong)_UNK_180019390 * (ulonglong)uVar12 << 0x20) +
           (ulonglong)_UNK_180019380 * (ulonglong)uVar12) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_1800194e0 + _UNK_1800194f0 << 0x20) +
           (ulonglong)_UNK_1800194d0 * (ulonglong)uVar19 +
          ((ulonglong)uVar20 * (ulonglong)_UNK_1800194c0 << 0x20) +
          (ulonglong)_UNK_1800194b0 * (ulonglong)uVar20 +
          ((ulonglong)uVar1 * (ulonglong)_UNK_1800194c0 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_UNK_1800194b0 +
          ((ulonglong)uStack_1a0 * (ulonglong)_UNK_1800194a0 << 0x20) +
          (ulonglong)_UNK_180019490 * (ulonglong)uStack_1a0 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019480 << 0x20) +
          (ulonglong)_UNK_180019470 * (ulonglong)uVar12)) + 0xd639547296b923ca;
  uRam000000018301e420 = uRam000000018301e490 ^ uVar6 ^ uVar5;
  uRam000000018301e408 = (uRam000000018301e408 ^ uVar6) + uVar5 ^ 0x425ed0e9a0d00de6;
  uRam000000018301e4f8 = (uRam000000018301e4f8 * 0x4f57da2067510ed3 ^ uRam000000018301e408) + uVar6;
  uRam000000018301e2a8 = uRam000000018301e4f8 ^ uRam000000018301e408;
  uRam000000018301e368 = uVar5 & 0xffffffff;
  param_1[1] = (int)uVar5;
  auVar24 = _UNK_1800170c0;
  uVar12 = param_2[2];
  auVar41._4_4_ = 0;
  auVar41._0_4_ = uVar12 ^ 0x84222325;
  auVar41._8_4_ = uStack_1d8;
  auVar41._12_4_ = 0;
  auVar21 = pshufb(auVar41 ^ _UNK_180019500,_UNK_1800170c0);
  uVar5 = auVar21._8_8_ + auVar21._0_8_;
  uVar6 = uVar5 + uRam000000018301e488;
  if (auVar21._4_4_ < 0) {
    uVar6 = uRam000000018301e318 ^ uVar5;
  }
  uRam000000018301e540 = func_0x00018350fcb0(SUB161(auVar41 ^ _UNK_180019500,5) ^ uVar6);
  uVar6 = (uRam000000018301e540 << 6 | uRam000000018301e540 >> 0x3a) ^ (ulonglong)uVar12;
  uVar1 = uVar12 & uStack_1d8;
  uVar20 = uVar12 | uStack_1d8;
  uVar19 = uVar12 ^ uStack_1d8;
  uVar5 = ((((ulonglong)_UNK_180019580 * (ulonglong)uVar19 << 0x20) +
            (ulonglong)_UNK_180019570 * (ulonglong)uVar19 +
            ((ulonglong)_UNK_180019560 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)_UNK_180019550 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_180019540 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_180019530 * (ulonglong)uVar1 +
           ((ulonglong)_UNK_180019520 * (ulonglong)uStack_1d8 << 0x20) +
           (ulonglong)_UNK_180019510 * (ulonglong)uStack_1d8 +
           ((ulonglong)uVar12 * (ulonglong)_UNK_180019520 << 0x20) +
           (ulonglong)uVar12 * (ulonglong)_UNK_180019510) -
          (((ulonglong)(uStack_1d8 ^ 0xffffffff) * (ulonglong)_UNK_1800195c0 + _UNK_180019610 <<
           0x20) + (ulonglong)_UNK_1800195b0 * (ulonglong)(uStack_1d8 ^ 0xffffffff) +
           ((ulonglong)uVar19 * (ulonglong)_UNK_1800195e0 << 0x20) +
           (ulonglong)_UNK_1800195d0 * (ulonglong)uVar19 +
           ((ulonglong)uVar1 * (ulonglong)_UNK_1800195e0 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_UNK_1800195d0 +
           ((ulonglong)uStack_1d8 * (ulonglong)_UNK_1800195c0 << 0x20) +
           (ulonglong)uStack_1d8 * (ulonglong)_UNK_1800195b0 +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019600 << 0x20) +
          (ulonglong)_UNK_1800195f0 * (ulonglong)uVar20)) + 0xb7571a3625944390;
  uRam000000018301e4f8 = uRam000000018301e630 ^ uVar6 ^ uVar5;
  uRam000000018301e458 = (uRam000000018301e458 ^ uVar6) + uVar5 ^ 0x4081133969b279cb;
  uRam000000018301e280 = (uRam000000018301e280 * 0x687bf3a094679729 ^ uRam000000018301e458) + uVar6;
  uRam000000018301e548 = uRam000000018301e280 ^ uRam000000018301e458;
  uRam000000018301e5b0 = uVar5 & 0xffffffff;
  param_1[2] = (int)uVar5;
  uVar12 = param_2[3];
  uVar6 = (ulonglong)uVar12 ^ 0x84222325 ^ uRam000000018301e538;
  uVar5 = uStack_1a4 ^ uRam000000018301e288;
  lVar16 = ((ulonglong)uVar12 ^ 0x84222325) + uRam000000018301e288;
  lVar14 = uRam000000018301e538 + uStack_1a4;
  uVar13 = uVar6 + lVar16;
  uVar7 = uVar5 + lVar14;
  uVar6 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar6;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uRam000000018301e620 =
       func_0x00018350fcb0((uVar5 << 0x1d | uVar5 >> 0x23) - lVar14 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar16);
  uVar20 = uVar12 & uStack_1a4;
  uVar19 = uStack_1a4 ^ 0xffffffff;
  uVar6 = uRam000000018301e620 * -0x6c6406948131225 << 0x3b |
          uRam000000018301e620 * -0x6c6406948131225 >> 5;
  uVar5 = ((ulonglong)_UNK_1800196b0 * (ulonglong)uVar19 + _UNK_1800196c0 << 0x20) +
          (ulonglong)_UNK_1800196a0 * (ulonglong)uVar19 +
          ((ulonglong)(uVar12 ^ uStack_1a4) * (ulonglong)_UNK_180019690 << 0x20) +
          (ulonglong)_UNK_180019680 * (ulonglong)(uVar12 ^ uStack_1a4) +
          ((ulonglong)_UNK_180019670 * (ulonglong)uVar20 << 0x20) +
          (ulonglong)_UNK_180019660 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_180019650 * (ulonglong)uStack_1a4 << 0x20) +
          (ulonglong)_UNK_180019640 * (ulonglong)uStack_1a4 +
          ((ulonglong)_UNK_180019630 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_180019620 * (ulonglong)uVar12 +
          (-(((ulonglong)uVar19 * (ulonglong)_UNK_180019790 + _UNK_1800197a0 << 0x20) +
            (ulonglong)_UNK_180019780 * (ulonglong)uVar19) -
          (((ulonglong)(uVar12 ^ 0xffffffff) * (ulonglong)_UNK_180019760 + _UNK_180019770 << 0x20) +
           (ulonglong)_UNK_180019750 * (ulonglong)(uVar12 ^ 0xffffffff) +
          ((ulonglong)(uVar12 | uStack_1a4) * (ulonglong)_UNK_180019740 << 0x20) +
          (ulonglong)_UNK_180019730 * (ulonglong)(uVar12 | uStack_1a4) +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019740 << 0x20) +
          (ulonglong)uVar20 * (ulonglong)_UNK_180019730 +
          ((ulonglong)uStack_1a4 * (ulonglong)_UNK_180019720 << 0x20) +
          (ulonglong)_UNK_180019710 * (ulonglong)uStack_1a4 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019700 << 0x20) +
          (ulonglong)_UNK_1800196f0 * (ulonglong)uVar12)) + 0x5fe6913a531384d4;
  uRam000000018301e390 = uRam000000018301e558 ^ uVar6 ^ uVar5;
  uRam000000018301e330 = (uRam000000018301e330 ^ uVar6) + uVar5 ^ 0x279bd46acca12b97;
  uRam000000018301e3b8 = (uRam000000018301e3b8 * 0x7b57329e32e761c3 ^ uRam000000018301e330) + uVar6;
  uRam000000018301e568 = uRam000000018301e3b8 ^ uRam000000018301e330;
  uRam000000018301e5c0 = uVar5 & 0xffffffff;
  param_1[3] = (int)uVar5;
  uVar12 = param_2[4];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = CONCAT44(0,uStack_208);
  auVar42._4_4_ = 0;
  auVar42._0_4_ = uVar12 ^ 0x84222325;
  auVar42._8_4_ = uStack_208;
  auVar42._12_4_ = 0;
  auVar24 = pshufb(auVar42 ^ _UNK_1800197b0,auVar24);
  uVar5 = auVar24._8_8_ + auVar24._0_8_;
  uVar6 = uVar5 + uRam000000018301e378;
  if (auVar24._4_4_ < 0) {
    uVar6 = uRam000000018301e288 ^ uVar5;
  }
  uRam000000018301e338 = func_0x00018350fcb0(SUB161(auVar42 ^ _UNK_1800197b0,5) ^ uVar6);
  auVar82._8_4_ = 0xffffffff;
  auVar82._0_8_ = 0xffffffffffffffff;
  auVar82._12_4_ = 0xffffffff;
  uVar19 = uVar12 ^ 0xffffffff;
  uVar20 = SUB164(auVar89 ^ auVar82,0);
  uVar6 = CONCAT44(0,uStack_208) * (ulonglong)uVar12 ^ uRam000000018301e338;
  uVar5 = uVar6 << 0x20 | uVar6 >> 0x20;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uVar6 = (((ulonglong)uVar20 * (ulonglong)_UNK_180019820 +
            ((SUB168(auVar89 ^ auVar82,0) >> 0x20) * (ulonglong)_UNK_180019820 +
             (ulonglong)_UNK_1800197e0 * (ulonglong)uVar20 << 0x20) +
           ((ulonglong)_UNK_1800197c0 * (ulonglong)uVar19 + _UNK_180019810 << 0x20) +
           (ulonglong)_UNK_180019800 * (ulonglong)uVar19 +
           (ulonglong)_UNK_1800197f0 * (ulonglong)uStack_208 +
           ((ulonglong)uStack_208 * (ulonglong)_UNK_1800197e0 << 0x20) +
           (ulonglong)_UNK_1800197d0 * (ulonglong)uVar12 +
           ((ulonglong)uVar12 * (ulonglong)_UNK_1800197c0 << 0x20)) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_1800198c0 + _UNK_1800198d0 << 0x20) +
           (ulonglong)_UNK_1800198b0 * (ulonglong)uVar19 +
          ((ulonglong)(uVar12 | uStack_208) * (ulonglong)_UNK_1800198a0 << 0x20) +
          (ulonglong)_UNK_180019890 * (ulonglong)(uVar12 | uStack_208) +
          ((ulonglong)(uVar12 & uStack_208) * (ulonglong)_UNK_1800198a0 << 0x20) +
          (ulonglong)(uVar12 & uStack_208) * (ulonglong)_UNK_180019890 +
          ((ulonglong)uStack_208 * (ulonglong)_UNK_180019880 << 0x20) +
          (ulonglong)_UNK_180019870 * (ulonglong)uStack_208 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019860 << 0x20) +
          (ulonglong)_UNK_180019850 * (ulonglong)uVar12)) + 0x676f6e6943b0037f;
  uRam000000018301e448 = uRam000000018301e280 ^ uVar5 ^ uVar6;
  uRam000000018301e5e8 = (uRam000000018301e5e8 ^ uVar5) + uVar6 ^ 0xf46c0be7bb1ad9d;
  uRam000000018301e280 = (uRam000000018301e280 * 0x660f18f036fec32b ^ uRam000000018301e5e8) + uVar5;
  uRam000000018301e348 = uRam000000018301e280 ^ uRam000000018301e5e8;
  uRam000000018301e360 = uVar6 & 0xffffffff;
  param_1[4] = (int)uVar6;
  uVar12 = param_2[5];
  uVar5 = CONCAT44(0,uStack_1a8);
  uVar13 = CONCAT44(0,uVar12) ^ 0x84222325;
  uVar6 = ((uRam000000018301e568 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e568 & (uint)uVar13) * 2) *
          (uVar5 - lRam000000018301e470);
  uVar6 = (uVar6 | uRam000000018301e338) + (uVar6 & uRam000000018301e338);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018301e5c0 =
       func_0x00018350fcb0((uVar13 ^ uVar5 | uVar6) +
                           (ulonglong)((uint)(uVar13 ^ uVar5) & (uint)uVar6));
  auVar90._8_8_ = 0;
  auVar90._0_8_ = CONCAT44(0,uVar12);
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar5;
  uVar20 = uVar12 & uStack_1a8;
  uVar1 = SUB164(auVar90 ^ auVar82,0);
  uVar6 = (uVar12 | uStack_1a8) ^ uRam000000018301e5c0;
  uVar6 = uVar6 << 0x31 | uVar6 >> 0xf;
  uVar19 = SUB164(auVar51 ^ auVar82,0);
  uVar5 = (((ulonglong)uVar1 * (ulonglong)_UNK_180019920 +
            ((ulonglong)_UNK_180019970 * (ulonglong)uVar1 +
             (SUB168(auVar90 ^ auVar82,0) >> 0x20) * (ulonglong)_UNK_180019920 << 0x20) +
            ((ulonglong)(uVar12 ^ uStack_1a8) * (ulonglong)_UNK_180019960 << 0x20) +
            (ulonglong)_UNK_180019950 * (ulonglong)(uVar12 ^ uStack_1a8) +
           ((ulonglong)_UNK_180019940 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_180019930 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_180019910 * (ulonglong)uStack_1a8 << 0x20) +
           (ulonglong)_UNK_180019900 * (ulonglong)uStack_1a8 +
           ((ulonglong)_UNK_1800198f0 * (ulonglong)uVar12 << 0x20) +
           (ulonglong)_UNK_1800198e0 * (ulonglong)uVar12) -
          ((ulonglong)uVar19 * (_UNK_1800199e0 & 0xffffffff) +
           ((ulonglong)_UNK_180019a10 * (ulonglong)uVar19 +
            (SUB168(auVar51 ^ auVar82,0) >> 0x20) * (_UNK_1800199e0 & 0xffffffff) << 0x20) +
          ((ulonglong)(uVar12 | uStack_1a8) * (ulonglong)_UNK_180019a00 << 0x20) +
          (ulonglong)_UNK_1800199f0 * (ulonglong)(uVar12 | uStack_1a8) +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019a00 << 0x20) +
          (ulonglong)uVar20 * (ulonglong)_UNK_1800199f0 +
          ((ulonglong)uStack_1a8 * (ulonglong)_UNK_1800199d0 << 0x20) +
          (ulonglong)_UNK_1800199c0 * (ulonglong)uStack_1a8 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_1800199b0 << 0x20) +
          (ulonglong)_UNK_1800199a0 * (ulonglong)uVar12)) + 0xad1ca2b223437221;
  uRam000000018301e308 = uRam000000018301e5c8 ^ uVar6 ^ uVar5;
  uRam000000018301e570 = (uRam000000018301e570 ^ uVar6) + uVar5 ^ 0x78288bd149c3dfaf;
  uRam000000018301e438 = (uRam000000018301e438 * 0x131be1f7c34b453f ^ uRam000000018301e570) + uVar6;
  uRam000000018301e368 = uRam000000018301e438 ^ uRam000000018301e570;
  uRam000000018301e450 = uVar5 & 0xffffffff;
  param_1[5] = (int)uVar5;
  uVar12 = param_2[6];
  uVar5 = CONCAT44(0,uStack_1e0);
  uVar13 = CONCAT44(0,uVar12) ^ 0x84222325;
  uVar6 = ((uRam000000018301e4f0 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e4f0 & (uint)uVar13) * 2) *
          (uVar5 - uRam000000018301e618);
  uVar6 = (uVar6 | uRam000000018301e270) + (uVar6 & uRam000000018301e270);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018301e5e8 =
       func_0x00018350fcb0((uVar13 ^ uVar5 | uVar6) +
                           (ulonglong)((uint)(uVar13 ^ uVar5) & (uint)uVar6));
  auVar71._8_8_ = 0;
  auVar71._0_8_ = uVar5;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = CONCAT44(0,uVar12);
  uVar11 = uVar12 & uStack_1e0;
  uVar1 = uVar12 | uStack_1e0;
  auVar85._8_4_ = 0xffffffff;
  auVar85._0_8_ = 0xffffffffffffffff;
  auVar85._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar71 ^ auVar85,0);
  uVar6 = (uRam000000018301e5e8 ^ uVar5) * -0x22c974e404c6e01;
  uVar19 = SUB164(auVar60 ^ auVar85,0);
  uVar5 = (ulonglong)uVar20 * (ulonglong)_UNK_180019a60 +
          ((ulonglong)_UNK_180019a90 * (ulonglong)uVar20 +
           (SUB168(auVar71 ^ auVar85,0) >> 0x20) * (ulonglong)_UNK_180019a60 << 0x20) +
          ((ulonglong)_UNK_180019a80 * (ulonglong)uVar1 << 0x20) +
          (ulonglong)_UNK_180019a70 * (ulonglong)uVar1 +
          ((ulonglong)uVar11 * (ulonglong)_UNK_180019a80 << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_UNK_180019a70 +
          ((ulonglong)_UNK_180019a50 * (ulonglong)uStack_1e0 << 0x20) +
          (ulonglong)_UNK_180019a40 * (ulonglong)uStack_1e0 +
          ((ulonglong)_UNK_180019a30 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_180019a20 * (ulonglong)uVar12 +
          (-((ulonglong)uVar19 * (_UNK_180019b00 & 0xffffffff) +
            ((ulonglong)_UNK_180019b70 * (ulonglong)uVar19 +
             (SUB168(auVar60 ^ auVar85,0) >> 0x20) * (_UNK_180019b00 & 0xffffffff) << 0x20)) -
          (((ulonglong)(uVar12 ^ uStack_1e0) * (ulonglong)_UNK_180019b60 << 0x20) +
           (ulonglong)_UNK_180019b50 * (ulonglong)(uVar12 ^ uStack_1e0) +
           ((ulonglong)uVar1 * (ulonglong)_UNK_180019b40 << 0x20) +
           (ulonglong)_UNK_180019b30 * (ulonglong)uVar1 +
          ((ulonglong)uVar11 * (ulonglong)_UNK_180019b20 << 0x20) +
          (ulonglong)_UNK_180019b10 * (ulonglong)uVar11 +
          ((ulonglong)uStack_1e0 * (ulonglong)_UNK_180019af0 << 0x20) +
          (ulonglong)_UNK_180019ae0 * (ulonglong)uStack_1e0 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019ad0 << 0x20) +
          (ulonglong)_UNK_180019ac0 * (ulonglong)uVar12)) + 0x231e809a082408d4;
  uRam000000018301e3e8 = uRam000000018301e248 ^ uVar6 ^ uVar5;
  uRam000000018301e5e0 = (uRam000000018301e5e0 ^ uVar6) + uVar5 ^ 0xb940c3c285f4aa83;
  uRam000000018301e518 = (uRam000000018301e518 * 0xa9a24062b135e27 ^ uRam000000018301e5e0) + uVar6;
  uRam000000018301e3d0 = uRam000000018301e518 ^ uRam000000018301e5e0;
  uRam000000018301e298 = uVar5 & 0xffffffff;
  param_1[6] = (int)uVar5;
  auVar24 = _UNK_1800170c0;
  uVar12 = param_2[7];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = CONCAT44(0,uStack_1ac);
  auVar43._4_4_ = 0;
  auVar43._0_4_ = uVar12 ^ 0x84222325;
  auVar43._8_4_ = uStack_1ac;
  auVar43._12_4_ = 0;
  auVar21 = pshufb(auVar43 ^ _UNK_180019b80,_UNK_1800170c0);
  uVar5 = auVar21._8_8_ + auVar21._0_8_;
  uVar6 = uVar5 + uRam000000018301e540;
  if (auVar21._4_4_ < 0) {
    uVar6 = uRam000000018301e360 ^ uVar5;
  }
  uRam000000018301e558 = func_0x00018350fcb0(SUB161(auVar43 ^ _UNK_180019b80,5) ^ uVar6);
  uVar6 = CONCAT44(0,uStack_1ac) * (ulonglong)uVar12 ^ uRam000000018301e558;
  uVar6 = (uVar6 << 0x27 | uVar6 >> 0x19) >> 9 | (uVar6 >> 0x19) << 0x37;
  uVar1 = uVar12 & uStack_1ac;
  uVar20 = uVar12 | uStack_1ac;
  uVar19 = uVar12 ^ uStack_1ac;
  uVar11 = SUB164(auVar91 ^ auVar85,0);
  uVar5 = ((((ulonglong)_UNK_180019c00 * (ulonglong)uVar19 << 0x20) +
            (ulonglong)_UNK_180019bf0 * (ulonglong)uVar19 +
            ((ulonglong)_UNK_180019be0 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)_UNK_180019bd0 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_180019bc0 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_180019bb0 * (ulonglong)uVar1 +
           ((ulonglong)_UNK_180019ba0 * (ulonglong)uStack_1ac << 0x20) +
           (ulonglong)_UNK_180019b90 * (ulonglong)uStack_1ac +
           ((ulonglong)uVar12 * (ulonglong)_UNK_180019ba0 << 0x20) +
           (ulonglong)uVar12 * (ulonglong)_UNK_180019b90) -
          ((ulonglong)uVar11 * (ulonglong)_UNK_180019c30 +
           ((SUB168(auVar91 ^ auVar85,0) >> 0x20) * (ulonglong)_UNK_180019c30 +
            (ulonglong)_UNK_180019c40 * (ulonglong)uVar11 << 0x20) +
           ((ulonglong)uVar19 * (ulonglong)_UNK_180019c60 << 0x20) +
           (ulonglong)_UNK_180019c50 * (ulonglong)uVar19 +
           ((ulonglong)uVar1 * (ulonglong)_UNK_180019c60 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_UNK_180019c50 +
           ((ulonglong)uStack_1ac * (ulonglong)_UNK_180019c40 << 0x20) +
           (ulonglong)uStack_1ac * (ulonglong)_UNK_180019c30 +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019c80 << 0x20) +
          (ulonglong)_UNK_180019c70 * (ulonglong)uVar20)) + 0x98dd6eef838f8e68;
  uRam000000018301e638 = uRam000000018301e378 ^ uVar6 ^ uVar5;
  uRam000000018301e398 = (uRam000000018301e398 ^ uVar6) + uVar5 ^ 0xabeb6ecb1df5e662;
  uRam000000018301e430 = (uRam000000018301e430 * -0x1e0865528b0660ad ^ uRam000000018301e398) + uVar6
  ;
  uRam000000018301e3b0 = uRam000000018301e430 ^ uRam000000018301e398;
  uRam000000018301e4f8 = uVar5 & 0xffffffff;
  param_1[7] = (int)uVar5;
  uVar12 = param_2[8];
  uVar5 = (ulonglong)uStack_218;
  uVar13 = (ulonglong)uVar12 ^ 0x84222325;
  uVar6 = ((uRam000000018301e340 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e340 & (uint)uVar13) * 2) *
          (uVar5 - uRam000000018301e580);
  uVar6 = (uVar6 | uRam000000018301e270) + (uVar6 & uRam000000018301e270);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018301e4e0 =
       func_0x00018350fcb0((uVar13 ^ uVar5 | uVar6) +
                           (ulonglong)((uint)(uVar13 ^ uVar5) & (uint)uVar6));
  uVar5 = ~uRam000000018301e4e0 & (ulonglong)uVar12 & (ulonglong)UNK_180019c90 ^ uVar5;
  uVar11 = uVar12 & uStack_218;
  uVar20 = uVar12 | uStack_218;
  uVar19 = uVar12 ^ uStack_218;
  uVar1 = uStack_218 ^ 0xffffffff;
  uVar6 = ((ulonglong)_UNK_180019d50 * (ulonglong)uVar1 + _UNK_180019d60 << 0x20) +
          (ulonglong)_UNK_180019d40 * (ulonglong)uVar1 +
          ((ulonglong)_UNK_180019d30 * (ulonglong)uVar19 << 0x20) +
          (ulonglong)_UNK_180019d20 * (ulonglong)uVar19 +
          ((ulonglong)_UNK_180019d10 * (ulonglong)uVar20 << 0x20) +
          (ulonglong)_UNK_180019d00 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_180019cf0 * (ulonglong)uVar11 << 0x20) +
          (ulonglong)_UNK_180019ce0 * (ulonglong)uVar11 +
          ((ulonglong)_UNK_180019cd0 * (ulonglong)uStack_218 << 0x20) +
          (ulonglong)_UNK_180019cc0 * (ulonglong)uStack_218 +
          ((ulonglong)_UNK_180019cb0 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_180019ca0 * (ulonglong)uVar12 +
          (-(((ulonglong)uVar1 * (ulonglong)_UNK_180019e40 + _UNK_180019e50 << 0x20) +
            (ulonglong)_UNK_180019e30 * (ulonglong)uVar1) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_180019e20 << 0x20) +
           (ulonglong)_UNK_180019e10 * (ulonglong)uVar19 +
           ((ulonglong)uVar20 * (ulonglong)_UNK_180019e00 << 0x20) +
           (ulonglong)_UNK_180019df0 * (ulonglong)uVar20 +
          ((ulonglong)uVar11 * (ulonglong)_UNK_180019de0 << 0x20) +
          (ulonglong)_UNK_180019dd0 * (ulonglong)uVar11 +
          ((ulonglong)uStack_218 * (ulonglong)_UNK_180019dc0 << 0x20) +
          (ulonglong)_UNK_180019db0 * (ulonglong)uStack_218 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019da0 << 0x20) +
          (ulonglong)_UNK_180019d90 * (ulonglong)uVar12)) + 0xe3d4be48ef887bad;
  uRam000000018301e5c0 = uRam000000018301e438 ^ uVar5 ^ uVar6;
  uRam000000018301e420 = (uRam000000018301e420 ^ uVar5) + uVar6 ^ 0x3ffbce510e1119ff;
  uRam000000018301e638 = (uRam000000018301e638 * 0x56b5a5db07d30c7d ^ uRam000000018301e420) + uVar5;
  uRam000000018301e278 = uRam000000018301e638 ^ uRam000000018301e420;
  uRam000000018301e5e8 = uVar6 & 0xffffffff;
  param_1[8] = (int)uVar6;
  uVar12 = param_2[9];
  auVar44._4_4_ = 0;
  auVar44._0_4_ = uVar12 ^ 0x84222325;
  auVar44._8_4_ = uStack_1b0;
  auVar44._12_4_ = 0;
  auVar21 = pshufb(auVar44 ^ _UNK_180019e60,auVar24);
  uVar5 = auVar21._8_8_ + auVar21._0_8_;
  uVar6 = uVar5 + uRam000000018301e298;
  if (auVar21._4_4_ < 0) {
    uVar6 = uRam000000018301e520 ^ uVar5;
  }
  uRam000000018301e3d8 = func_0x00018350fcb0(SUB161(auVar44 ^ _UNK_180019e60,5) ^ uVar6);
  uVar6 = ((ulonglong)uStack_1b0 * (ulonglong)uVar12 ^ uRam000000018301e3d8 ^ (ulonglong)uStack_1b0)
          * 0x45cf66831f398c7b;
  uVar1 = uVar12 & uStack_1b0;
  uVar20 = uVar12 | uStack_1b0;
  uVar19 = uVar12 ^ uStack_1b0;
  uVar11 = uStack_1b0 ^ 0xffffffff;
  uVar5 = ((((ulonglong)_UNK_180019f20 * (ulonglong)uVar11 + _UNK_180019f30 << 0x20) +
            (ulonglong)_UNK_180019f10 * (ulonglong)uVar11 +
           ((ulonglong)_UNK_180019f00 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)_UNK_180019ef0 * (ulonglong)uVar19 +
           ((ulonglong)_UNK_180019ee0 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_180019ed0 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_180019ec0 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_180019eb0 * (ulonglong)uVar1 +
           ((ulonglong)_UNK_180019ea0 * (ulonglong)uStack_1b0 << 0x20) +
           (ulonglong)_UNK_180019e90 * (ulonglong)uStack_1b0 +
           ((ulonglong)uVar12 * (ulonglong)_UNK_180019e80 << 0x20) +
           (ulonglong)_UNK_180019e70 * (ulonglong)uVar12) -
          (((ulonglong)uVar11 * (ulonglong)_UNK_180019f70 + _UNK_180019fc0 << 0x20) +
           (ulonglong)_UNK_180019f60 * (ulonglong)uVar11 +
           ((ulonglong)uVar19 * (ulonglong)_UNK_180019f90 << 0x20) +
           (ulonglong)_UNK_180019f80 * (ulonglong)uVar19 +
           ((ulonglong)uVar1 * (ulonglong)_UNK_180019f90 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_UNK_180019f80 +
           ((ulonglong)uStack_1b0 * (ulonglong)_UNK_180019f70 << 0x20) +
           (ulonglong)uStack_1b0 * (ulonglong)_UNK_180019f60 +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019fb0 << 0x20) +
          (ulonglong)_UNK_180019fa0 * (ulonglong)uVar20)) + 0xb38d1a42e4ee8ae9;
  uRam000000018301e540 = (uRam000000018301e540 ^ uVar6) + uVar5 ^ 0x89765142f3c13483;
  uRam000000018301e560 = (uRam000000018301e560 * -0x271d41d178a15bc9 ^ uRam000000018301e540) + uVar6
  ;
  uRam000000018301e4e8 = uRam000000018301e560 ^ uRam000000018301e540;
  uRam000000018301e518 = uVar5 & 0xffffffff;
  param_1[9] = (int)uVar5;
  uVar12 = param_2[10];
  auVar45._4_4_ = 0;
  auVar45._0_4_ = uVar12 ^ 0x84222325;
  auVar45._8_4_ = uStack_1e8;
  auVar45._12_4_ = 0;
  auVar21 = pshufb(auVar45 ^ _UNK_180019fd0,auVar24);
  uVar5 = auVar21._8_8_ + auVar21._0_8_;
  uVar6 = uVar5 + uRam000000018301e530;
  if (auVar21._4_4_ < 0) {
    uVar6 = uRam000000018301e530 ^ uVar5;
  }
  uRam000000018301e3c8 = func_0x00018350fcb0(SUB161(auVar45 ^ _UNK_180019fd0,5) ^ uVar6);
  uVar1 = uVar12 & uStack_1e8;
  uVar20 = uVar12 | uStack_1e8;
  uVar19 = uVar12 ^ uStack_1e8;
  uVar6 = (uRam000000018301e3c8 & 0x7fffffffffff) >> 1 | uRam000000018301e3c8 & 0x7fffffffffff;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uRam000000018301e3c8 & 0x7fffffffffff) * -0x6fa8b1615f879b43;
  uVar5 = (((ulonglong)_UNK_18001a050 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)_UNK_18001a040 * (ulonglong)uVar19 +
           ((ulonglong)_UNK_18001a030 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_18001a020 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_18001a010 * (ulonglong)uVar1 << 0x20) +
          (ulonglong)_UNK_18001a000 * (ulonglong)uVar1 +
          ((ulonglong)_UNK_180019ff0 * (ulonglong)uStack_1e8 << 0x20) +
          (ulonglong)_UNK_180019fe0 * (ulonglong)uStack_1e8 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019ff0 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_UNK_180019fe0) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_18001a0f0 << 0x20) +
           (ulonglong)_UNK_18001a0e0 * (ulonglong)uVar19 +
           ((ulonglong)uVar20 * (ulonglong)_UNK_18001a0d0 << 0x20) +
           (ulonglong)_UNK_18001a0c0 * (ulonglong)uVar20 +
          ((ulonglong)uVar1 * (ulonglong)_UNK_18001a0b0 << 0x20) +
          (ulonglong)_UNK_18001a0a0 * (ulonglong)uVar1 +
          ((ulonglong)uStack_1e8 * (ulonglong)_UNK_18001a090 << 0x20) +
          (ulonglong)_UNK_18001a080 * (ulonglong)uStack_1e8 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a090 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_UNK_18001a080);
  uRam000000018301e490 = uRam000000018301e458 ^ uVar6 ^ uVar5;
  uRam000000018301e600 = (uRam000000018301e600 ^ uVar6) + uVar5 ^ 0x3ec6e3d2e68eb8b0;
  uRam000000018301e5f0 = (uRam000000018301e5f0 * -0x5e70395dd51a9d0f ^ uRam000000018301e600) + uVar6
  ;
  uRam000000018301e3b8 = uRam000000018301e5f0 ^ uRam000000018301e600;
  uRam000000018301e438 = uVar5 & 0xffffffff;
  param_1[10] = (int)uVar5;
  uVar12 = param_2[0xb];
  auVar46._4_4_ = 0;
  auVar46._0_4_ = uVar12 ^ 0x84222325;
  auVar46._8_4_ = uStack_1b4;
  auVar46._12_4_ = 0;
  auVar24 = pshufb(auVar46 ^ _UNK_18001a100,auVar24);
  uVar5 = auVar24._8_8_ + auVar24._0_8_;
  uVar6 = uVar5 + uRam000000018301e4c0;
  if (auVar24._4_4_ < 0) {
    uVar6 = uRam000000018301e618 ^ uVar5;
  }
  uRam000000018301e258 = func_0x00018350fcb0(SUB161(auVar46 ^ _UNK_18001a100,5) ^ uVar6);
  uVar6 = uRam000000018301e270 >> 1 | uRam000000018301e270;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  auVar66._8_8_ = 0;
  auVar66._0_8_ = CONCAT44(0,uVar12);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam000000018301e270 ^ CONCAT44(0,uVar12);
  uVar1 = uVar12 & uStack_1b4;
  uVar19 = uVar12 | uStack_1b4;
  auVar86._8_4_ = 0xffffffff;
  auVar86._0_8_ = 0xffffffffffffffff;
  auVar86._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar66 ^ auVar86,0);
  uVar5 = (ulonglong)uVar20 * (ulonglong)_UNK_18001a150 +
          ((ulonglong)_UNK_18001a180 * (ulonglong)uVar20 +
           (SUB168(auVar66 ^ auVar86,0) >> 0x20) * (ulonglong)_UNK_18001a150 << 0x20) +
          ((ulonglong)_UNK_18001a170 * (ulonglong)uVar19 << 0x20) +
          (ulonglong)_UNK_18001a160 * (ulonglong)uVar19 +
          ((ulonglong)uVar1 * (ulonglong)_UNK_18001a170 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_UNK_18001a160 +
          ((ulonglong)_UNK_18001a140 * (ulonglong)uStack_1b4 << 0x20) +
          (ulonglong)_UNK_18001a130 * (ulonglong)uStack_1b4 +
          ((ulonglong)_UNK_18001a120 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_18001a110 * (ulonglong)uVar12 +
          (-(((ulonglong)(uStack_1b4 ^ 0xffffffff) * (ulonglong)_UNK_18001a260 + _UNK_18001a270 <<
             0x20) + (ulonglong)_UNK_18001a250 * (ulonglong)(uStack_1b4 ^ 0xffffffff)) -
          (((ulonglong)(uVar12 ^ uStack_1b4) * (ulonglong)_UNK_18001a240 << 0x20) +
           (ulonglong)_UNK_18001a230 * (ulonglong)(uVar12 ^ uStack_1b4) +
           ((ulonglong)uVar19 * (ulonglong)_UNK_18001a220 << 0x20) +
           (ulonglong)_UNK_18001a210 * (ulonglong)uVar19 +
          ((ulonglong)uVar1 * (ulonglong)_UNK_18001a200 << 0x20) +
          (ulonglong)_UNK_18001a1f0 * (ulonglong)uVar1 +
          ((ulonglong)uStack_1b4 * (ulonglong)_UNK_18001a1e0 << 0x20) +
          (ulonglong)_UNK_18001a1d0 * (ulonglong)uStack_1b4 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a1c0 << 0x20) +
          (ulonglong)_UNK_18001a1b0 * (ulonglong)uVar12)) + 0xc06600b35a7ce6b7;
  uRam000000018301e3e0 = uRam000000018301e338 ^ uVar6 ^ uVar5;
  uRam000000018301e460 = (uRam000000018301e460 ^ uVar6) + uVar5 ^ 0x648151d2ce9b6f88;
  uRam000000018301e380 = (uRam000000018301e380 * -0x7b64150852a0ce91 ^ uRam000000018301e460) + uVar6
  ;
  uRam000000018301e268 = uRam000000018301e380 ^ uRam000000018301e460;
  uRam000000018301e2e8 = uVar5 & 0xffffffff;
  param_1[0xb] = (int)uVar5;
  uVar12 = param_2[0xc];
  auVar47._4_4_ = 0;
  auVar47._0_4_ = uVar12 ^ 0x84222325;
  auVar47._8_4_ = uStack_228;
  auVar47._12_4_ = 0;
  auVar24 = pshufb(auVar47 ^ _UNK_18001a280,_UNK_1800170c0);
  uVar5 = auVar24._8_8_ + auVar24._0_8_;
  uVar6 = uVar5 + uRam000000018301e298;
  if (auVar24._4_4_ < 0) {
    uVar6 = uRam000000018301e458 ^ uVar5;
  }
  uRam000000018301e550 = func_0x00018350fcb0(SUB161(auVar47 ^ _UNK_18001a280,5) ^ uVar6);
  uVar20 = uVar12 & uStack_228;
  uVar19 = uVar12 ^ uStack_228;
  auVar104._8_4_ = 0xffffffff;
  auVar104._0_8_ = 0xffffffffffffffff;
  auVar104._12_4_ = 0xffffffff;
  uVar6 = ((((ulonglong)(uStack_228 ^ 0xffffffff) * (ulonglong)_UNK_18001a350 + _UNK_18001a360 <<
            0x20) + (ulonglong)_UNK_18001a340 * (ulonglong)(uStack_228 ^ 0xffffffff) +
            ((ulonglong)(uVar12 ^ 0xffffffff) * (ulonglong)_UNK_18001a320 + _UNK_18001a330 << 0x20)
            + (ulonglong)_UNK_18001a310 * (ulonglong)(uVar12 ^ 0xffffffff) +
           ((ulonglong)_UNK_18001a300 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)_UNK_18001a2f0 * (ulonglong)uVar19 +
           ((ulonglong)_UNK_18001a2e0 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_18001a2d0 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_18001a2c0 * (ulonglong)uStack_228 << 0x20) +
           (ulonglong)_UNK_18001a2b0 * (ulonglong)uStack_228 +
           ((ulonglong)_UNK_18001a2a0 * (ulonglong)uVar12 << 0x20) +
           (ulonglong)_UNK_18001a290 * (ulonglong)uVar12) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_18001a400 << 0x20) +
           (ulonglong)_UNK_18001a3f0 * (ulonglong)uVar19 +
           ((ulonglong)(uVar12 | uStack_228) * (ulonglong)_UNK_18001a3e0 << 0x20) +
           (ulonglong)_UNK_18001a3d0 * (ulonglong)(uVar12 | uStack_228) +
          ((ulonglong)uVar20 * (ulonglong)_UNK_18001a3c0 << 0x20) +
          (ulonglong)_UNK_18001a3b0 * (ulonglong)uVar20 +
          ((ulonglong)uStack_228 * (ulonglong)_UNK_18001a3a0 << 0x20) +
          (ulonglong)_UNK_18001a390 * (ulonglong)uStack_228 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a3a0 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_UNK_18001a390)) + 0x2de30c52d79ab2b1;
  uRam000000018301e2e8 = uRam000000018301e4e8 ^ uRam000000018301e550 ^ uVar6;
  uRam000000018301e3d8 = (uRam000000018301e3d8 ^ uRam000000018301e550) + uVar6 ^ 0xd3c527acb53b56dd;
  uRam000000018301e4e0 =
       (uRam000000018301e4e0 * 0x621b31822b65683d ^ uRam000000018301e3d8) + uRam000000018301e550;
  uRam000000018301e268 = uRam000000018301e4e0 ^ uRam000000018301e3d8;
  uRam000000018301e4a8 = uVar6 & 0xffffffff;
  param_1[0xc] = (int)uVar6;
  param_1[0xd] = param_2[0xd] + uStack_1b8;
  uVar12 = param_2[0xe];
  uVar5 = CONCAT44(0,uStack_1f0);
  uVar13 = CONCAT44(0,uVar12) ^ 0x84222325;
  uVar6 = ((uRam000000018301e550 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e550 & (uint)uVar13) * 2) *
          (uVar5 - lRam000000018301e2b0);
  uVar6 = (uVar6 | uRam000000018301e628) + (uVar6 & uRam000000018301e628);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018301e4d8 =
       func_0x00018350fcb0((uVar13 ^ uVar5 | uVar6) +
                           (ulonglong)((uint)(uVar13 ^ uVar5) & (uint)uVar6));
  uVar6 = uRam000000018301e4d8 & 0x7fffffffffffffff;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = CONCAT44(0,uVar12);
  auVar67._8_8_ = 0;
  auVar67._0_8_ = uVar5;
  uVar2 = uVar12 & uStack_1f0;
  uVar20 = uVar12 | uStack_1f0;
  uVar19 = uVar12 ^ uStack_1f0;
  uVar11 = SUB164(auVar76 ^ auVar104,0);
  uVar1 = SUB164(auVar67 ^ auVar104,0);
  uVar5 = (ulonglong)uVar11 * (ulonglong)_UNK_18001a450 +
          ((ulonglong)_UNK_18001a4c0 * (ulonglong)uVar11 +
           (SUB168(auVar76 ^ auVar104,0) >> 0x20) * (ulonglong)_UNK_18001a450 << 0x20) +
          ((ulonglong)_UNK_18001a4b0 * (ulonglong)uVar19 << 0x20) +
          (ulonglong)_UNK_18001a4a0 * (ulonglong)uVar19 +
          ((ulonglong)_UNK_18001a490 * (ulonglong)uVar20 << 0x20) +
          (ulonglong)_UNK_18001a480 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_18001a470 * (ulonglong)uVar2 << 0x20) +
          (ulonglong)_UNK_18001a460 * (ulonglong)uVar2 +
          ((ulonglong)_UNK_18001a440 * (ulonglong)uStack_1f0 << 0x20) +
          (ulonglong)_UNK_18001a430 * (ulonglong)uStack_1f0 +
          ((ulonglong)_UNK_18001a420 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_18001a410 * (ulonglong)uVar12 +
          (-((ulonglong)uVar1 * (_UNK_18001a530 & 0xffffffff) +
            ((ulonglong)_UNK_18001a5a0 * (ulonglong)uVar1 +
             (SUB168(auVar67 ^ auVar104,0) >> 0x20) * (_UNK_18001a530 & 0xffffffff) << 0x20)) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_18001a590 << 0x20) +
           (ulonglong)_UNK_18001a580 * (ulonglong)uVar19 +
           ((ulonglong)uVar20 * (ulonglong)_UNK_18001a570 << 0x20) +
           (ulonglong)_UNK_18001a560 * (ulonglong)uVar20 +
          ((ulonglong)uVar2 * (ulonglong)_UNK_18001a550 << 0x20) +
          (ulonglong)_UNK_18001a540 * (ulonglong)uVar2 +
          ((ulonglong)uStack_1f0 * (ulonglong)_UNK_18001a520 << 0x20) +
          (ulonglong)_UNK_18001a510 * (ulonglong)uStack_1f0 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a500 << 0x20) +
          (ulonglong)_UNK_18001a4f0 * (ulonglong)uVar12)) + 0x54e8b52d41b19c41;
  uRam000000018301e4d0 = uRam000000018301e400 ^ uVar6 ^ uVar5;
  uRam000000018301e458 = (uRam000000018301e458 ^ uVar6) + uVar5 ^ 0x7c4fe98cb8083fdc;
  uRam000000018301e578 = (uRam000000018301e578 * 0x550be134fede140f ^ uRam000000018301e458) + uVar6;
  uRam000000018301e5f0 = uRam000000018301e578 ^ uRam000000018301e458;
  uRam000000018301e3b8 = uVar5 & 0xffffffff;
  param_1[0xe] = (int)uVar5;
  uVar12 = param_2[0xf];
  uVar6 = CONCAT44(0,uVar12);
  uVar13 = uVar6 ^ 0x84222325;
  uVar5 = ((uRam000000018301e5e0 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e5e0 & (uint)uVar13) * 2) *
          (uStack_1bc - uRam000000018301e4f8);
  uVar5 = (uVar5 | uRam000000018301e568) + (uVar5 & uRam000000018301e568);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar13 = uVar13 ^ uStack_1bc;
  uRam000000018301e5f0 =
       func_0x00018350fcb0((uVar13 | uVar5) + (ulonglong)((uint)uVar13 & (uint)uVar5));
  auVar68._8_8_ = 0;
  auVar68._0_8_ = uVar6;
  uVar6 = uRam000000018301e5f0 ^ uVar6;
  uVar11 = uVar12 & uStack_1bc;
  uVar20 = uVar12 | uStack_1bc;
  uVar19 = uVar12 ^ uStack_1bc;
  uVar1 = SUB164(auVar68 ^ auVar104,0);
  uVar5 = ((ulonglong)_UNK_18001a620 * (ulonglong)uVar19 << 0x20) +
          (ulonglong)_UNK_18001a610 * (ulonglong)uVar19 +
          ((ulonglong)_UNK_18001a600 * (ulonglong)uVar20 << 0x20) +
          (ulonglong)_UNK_18001a5f0 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_18001a5e0 * (ulonglong)uVar11 << 0x20) +
          (ulonglong)_UNK_18001a5d0 * (ulonglong)uVar11 +
          ((ulonglong)_UNK_18001a5c0 * (ulonglong)uStack_1bc << 0x20) +
          (ulonglong)_UNK_18001a5b0 * (ulonglong)uStack_1bc +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a5c0 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_UNK_18001a5b0 +
          (-((ulonglong)uVar1 * (ulonglong)_UNK_18001a690 +
            ((ulonglong)_UNK_18001a700 * (ulonglong)uVar1 +
             (SUB168(auVar68 ^ auVar104,0) >> 0x20) * (ulonglong)_UNK_18001a690 << 0x20)) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_18001a6f0 << 0x20) +
           (ulonglong)_UNK_18001a6e0 * (ulonglong)uVar19 +
           ((ulonglong)uVar20 * (ulonglong)_UNK_18001a6d0 << 0x20) +
           (ulonglong)_UNK_18001a6c0 * (ulonglong)uVar20 +
          ((ulonglong)uVar11 * (ulonglong)_UNK_18001a6b0 << 0x20) +
          (ulonglong)_UNK_18001a6a0 * (ulonglong)uVar11 +
          ((ulonglong)uStack_1bc * (ulonglong)_UNK_18001a680 << 0x20) +
          (ulonglong)_UNK_18001a670 * (ulonglong)uStack_1bc +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a660 << 0x20) +
          (ulonglong)_UNK_18001a650 * (ulonglong)uVar12)) + 0xfc2e7f1f216fa951;
  uRam000000018301e250 = uRam000000018301e338 ^ uVar6 ^ uVar5;
  uRam000000018301e5f8 = (uRam000000018301e5f8 ^ uVar6) + uVar5 ^ 0x22a99d49146e8844;
  uRam000000018301e550 = (uRam000000018301e550 * 0x7c1ed678d3ad0f11 ^ uRam000000018301e5f8) + uVar6;
  uRam000000018301e5a0 = uRam000000018301e550 ^ uRam000000018301e5f8;
  uRam000000018301e598 = uVar5 & 0xffffffff;
  param_1[0xf] = (int)uVar5;
  return;
code_r0x000183506a12:
  uStack_1b0 = uStack_1c4;
  goto code_r0x000183506a76;
}



// ===== chacha_block_8 @ 183509d40 (depth 0) =====

/* WARNING: Switch with 1 destination removed at 0x0001834ffec3 */
/* WARNING: Switch with 1 destination removed at 0x000183506a0c */
/* WARNING: Switch with 1 destination removed at 0x000183506a70 */
/* WARNING: Switch with 1 destination removed at 0x000183506a9d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chacha_block_8(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  ulonglong uVar48;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar49;
  uint uVar50;
  ulonglong uVar52;
  undefined1 auVar51 [16];
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar61;
  undefined1 auVar56 [16];
  ulonglong uVar62;
  undefined1 auVar57 [16];
  ulonglong uVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  uint uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  uint uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  uint uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint uVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uStack_228;
  uint uStack_218;
  uint uStack_208;
  uint uStack_1f8;
  uint uStack_1f0;
  uint uStack_1e8;
  uint uStack_1e0;
  uint uStack_1d8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_170;
  ulonglong uStack_160;
  ulonglong uStack_158;
  uint uStack_128;
  
  uStack_1f8 = *param_2;
  uStack_1a0 = param_2[1];
  uStack_1d8 = param_2[2];
  uStack_1a4 = param_2[3];
  uStack_208 = param_2[4];
  uStack_1a8 = param_2[5];
  uStack_1e0 = param_2[6];
  uStack_1ac = param_2[7];
  uStack_218 = param_2[8];
  uStack_1c4 = param_2[9];
  uStack_1e8 = param_2[10];
  uStack_1b4 = param_2[0xb];
  uStack_228 = param_2[0xc];
  uStack_1b8 = param_2[0xd];
  uStack_1f0 = param_2[0xe];
  uStack_1bc = param_2[0xf];
  uStack_158 = (ulonglong)uStack_1e8;
  uStack_160 = (ulonglong)uStack_1d8;
  uVar12 = 0;
                    /* 0x3509d40  4  chacha_block_8 */
  uStack_1c0 = uStack_1e0;
  uStack_1b0 = uStack_1c4;
  uStack_19c = uStack_1b4;
  uStack_198 = uStack_1a4;
  uStack_194 = uStack_1bc;
  uStack_170 = uStack_1b8;
  uStack_128 = uStack_1f0;
  switch(0 < param_3) {
  case true:
    do {
      uVar5 = CONCAT44(0,uStack_208);
      auVar87._8_8_ = 0;
      auVar87._0_8_ = uVar5;
      auVar24._4_4_ = 0;
      auVar24._0_4_ = uStack_1f8 ^ 0x84222325;
      auVar24._8_4_ = uStack_208;
      auVar24._12_4_ = 0;
      auVar21 = pshufb(auVar24 ^ _UNK_180017550,_UNK_1800170c0);
      uVar13 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar13 + uRam000000018301e340;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e3d8 ^ uVar13;
      }
      uRam000000018301e438 = func_0x00018350fcb0(SUB161(auVar24 ^ _UNK_180017550,5) ^ uVar6);
      uVar6 = uRam000000018301e498 >> 1 | uRam000000018301e498;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4
              ^ uRam000000018301e498 ^ (ulonglong)uStack_1f8;
      uVar20 = uStack_1f8 & uStack_208;
      uVar19 = uStack_1f8 ^ uStack_208;
      auVar78._8_4_ = 0xffffffff;
      auVar78._0_8_ = 0xffffffffffffffff;
      auVar78._12_4_ = 0xffffffff;
      uVar1 = SUB164(auVar87 ^ auVar78,0);
      uVar7 = (((ulonglong)uVar1 * (ulonglong)_UNK_180017610 +
                ((ulonglong)_UNK_180017620 * (ulonglong)uVar1 +
                 (SUB168(auVar87 ^ auVar78,0) >> 0x20) * (ulonglong)_UNK_180017610 << 0x20) +
                ((ulonglong)(uStack_1f8 ^ 0xffffffff) * (ulonglong)_UNK_1800175f0 + _UNK_180017600
                << 0x20) + (ulonglong)_UNK_1800175e0 * (ulonglong)(uStack_1f8 ^ 0xffffffff) +
               ((ulonglong)_UNK_1800175d0 * (ulonglong)uVar19 << 0x20) +
               (ulonglong)_UNK_1800175c0 * (ulonglong)uVar19 +
               ((ulonglong)_UNK_1800175b0 * (ulonglong)uVar20 << 0x20) +
               (ulonglong)_UNK_1800175a0 * (ulonglong)uVar20 +
               ((ulonglong)_UNK_180017590 * (ulonglong)uStack_208 << 0x20) +
               (ulonglong)_UNK_180017580 * (ulonglong)uStack_208 +
               ((ulonglong)_UNK_180017570 * (ulonglong)uStack_1f8 << 0x20) +
               (ulonglong)_UNK_180017560 * (ulonglong)uStack_1f8) -
              (((ulonglong)uVar19 * (ulonglong)_UNK_1800176c0 << 0x20) +
               (ulonglong)_UNK_1800176b0 * (ulonglong)uVar19 +
               ((ulonglong)(uStack_1f8 | uStack_208) * (ulonglong)_UNK_1800176a0 << 0x20) +
               (ulonglong)_UNK_180017690 * (ulonglong)(uStack_1f8 | uStack_208) +
              ((ulonglong)uVar20 * (ulonglong)_UNK_180017680 << 0x20) +
              (ulonglong)_UNK_180017670 * (ulonglong)uVar20 +
              ((ulonglong)uStack_208 * (ulonglong)_UNK_180017660 << 0x20) +
              (ulonglong)_UNK_180017650 * (ulonglong)uStack_208 +
              ((ulonglong)uStack_1f8 * (ulonglong)_UNK_180017660 << 0x20) +
              (ulonglong)uStack_1f8 * (ulonglong)_UNK_180017650)) + 0xb3a66e88203eadb;
      uRam000000018301e318 = uRam000000018301e368 ^ uVar6 ^ uVar7;
      uRam000000018301e398 = (uRam000000018301e398 ^ uVar6) + uVar7 ^ 0x37219a8bb329b917;
      uRam000000018301e638 =
           (uRam000000018301e638 * -0x71a35286d5065e9 ^ uRam000000018301e398) + uVar6;
      uRam000000018301e3f8 = uRam000000018301e638 ^ uRam000000018301e398;
      uVar15 = uVar7 & 0xffffffff;
      uVar6 = (ulonglong)uStack_228 ^ 0x84222325;
      uVar13 = uVar6 ^ uRam000000018301e368;
      lVar14 = uVar6 + uRam000000018301e4c0;
      uVar6 = uVar13 + lVar14;
      uVar48 = (uVar15 ^ uRam000000018301e4c0) + uRam000000018301e368 + uVar15;
      uVar13 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar13;
      uVar6 = (uVar48 * 0x2000 | uVar48 >> 0x33) ^ uVar15 ^ uRam000000018301e4c0;
      uRam000000018301e448 = uVar15;
      uRam000000018301e530 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018301e368 + uVar15) ^
                               (uVar13 << 0x1d | uVar13 >> 0x23) - lVar14);
      uRam000000018301e4c8 = uStack_228 ^ uVar15;
      uRam000000018301e3e0 =
           (uRam000000018301e3e0 ^ uRam000000018301e530) + uRam000000018301e4c8 ^ 0x1f5e2e9ec4e31463
      ;
      uRam000000018301e550 =
           (uRam000000018301e550 * -0x271627ce9e605b3b ^ uRam000000018301e3e0) +
           uRam000000018301e530;
      uRam000000018301e3d8 = uRam000000018301e550 ^ uRam000000018301e3e0;
      uVar19 = (uint)uRam000000018301e4c8 << 0x10 | (uint)uRam000000018301e4c8 >> 0x10;
      uVar55 = CONCAT44(0,uVar19);
      uVar13 = (ulonglong)uStack_218 ^ 0x84222325;
      uVar6 = ((uRam000000018301e4d0 ^ uVar13) +
              (ulonglong)((uint)uRam000000018301e4d0 & (uint)uVar13) * 2) *
              (uVar55 - uRam000000018301e370);
      uVar6 = (uVar6 | uRam000000018301e5d0) + (uVar6 & uRam000000018301e5d0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e328 =
           func_0x00018350fcb0((uVar13 ^ uVar55 | uVar6) +
                               (ulonglong)((uint)(uVar13 ^ uVar55) & (uint)uVar6));
      uVar13 = ~uRam000000018301e328 & (ulonglong)uStack_218;
      auVar79._8_8_ = 0;
      auVar79._0_8_ = uVar55;
      uVar20 = uStack_218 & uVar19;
      uVar6 = uVar13 >> 1 | uVar13;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar13 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
               0x80 ^ uVar13;
      uVar1 = uStack_218 | uVar19;
      auVar21._8_4_ = 0xffffffff;
      auVar21._0_8_ = 0xffffffffffffffff;
      auVar21._12_4_ = 0xffffffff;
      uVar6 = (ulonglong)uStack_218 * (ulonglong)uVar19;
      uVar11 = SUB164(auVar79 ^ auVar21,0);
      lVar14 = (uVar6 & 0xffffffff) * (ulonglong)_UNK_180017780 +
               ((ulonglong)_UNK_180017790 * (uVar6 & 0xffffffff) +
                (uVar6 >> 0x20) * (ulonglong)_UNK_180017780 << 0x20);
      uVar48 = (((ulonglong)uVar11 * (ulonglong)_UNK_180017760 +
                 ((ulonglong)_UNK_180017770 * (ulonglong)uVar11 +
                  (SUB168(auVar79 ^ auVar21,0) >> 0x20) * (ulonglong)_UNK_180017760 << 0x20) +
                 ((ulonglong)(uStack_218 ^ 0xffffffff) * (ulonglong)_UNK_180017740 + _UNK_180017750
                 << 0x20) + (ulonglong)_UNK_180017730 * (ulonglong)(uStack_218 ^ 0xffffffff) +
                 ((ulonglong)_UNK_180017720 * (ulonglong)uVar1 << 0x20) +
                 (ulonglong)_UNK_180017710 * (ulonglong)uVar1 +
                 ((ulonglong)uVar20 * (ulonglong)_UNK_180017720 << 0x20) +
                 (ulonglong)uVar20 * (ulonglong)_UNK_180017710 +
                 ((ulonglong)_UNK_1800176e0 * (ulonglong)uStack_218 << 0x20) +
                 (ulonglong)_UNK_1800176d0 * (ulonglong)uStack_218 +
                 ((ulonglong)_UNK_180017700 * (ulonglong)uVar19 << 0x20) +
                 (ulonglong)_UNK_1800176f0 * (ulonglong)uVar19 + lVar14) -
               ((ulonglong)(uStack_218 ^ uVar19) * (ulonglong)_UNK_180017800 +
                ((ulonglong)_UNK_180017810 * (ulonglong)(uStack_218 ^ uVar19) << 0x20) +
                ((ulonglong)uVar1 * (ulonglong)_UNK_1800177f0 << 0x20) +
                (ulonglong)_UNK_1800177e0 * (ulonglong)uVar1 +
                ((ulonglong)uVar20 * (ulonglong)_UNK_1800177d0 << 0x20) +
                (ulonglong)_UNK_1800177c0 * (ulonglong)uVar20 +
                ((ulonglong)uVar19 * (ulonglong)_UNK_1800177b0 << 0x20) +
                (ulonglong)_UNK_1800177a0 * (ulonglong)uVar19 +
                ((ulonglong)uStack_218 * (ulonglong)_UNK_1800177b0 << 0x20) +
                (ulonglong)uStack_218 * (ulonglong)_UNK_1800177a0 + lVar14)) + 0xbfe380cc02927f5c;
      uRam000000018301e2e0 = uRam000000018301e4d8 ^ uVar13 ^ uVar48;
      uRam000000018301e4b0 = (uRam000000018301e4b0 ^ uVar13) + uVar48 ^ 0x85760f561e12ac50;
      uRam000000018301e550 =
           (uRam000000018301e550 * -0x5819978c73e462dd ^ uRam000000018301e4b0) + uVar13;
      uRam000000018301e3e8 = uRam000000018301e550 ^ uRam000000018301e4b0;
      uVar13 = uVar48 & 0xffffffff;
      uVar6 = uVar13 ^ 0x84222325 ^ uRam000000018301e310;
      lVar14 = (uVar13 ^ 0x84222325) + uRam000000018301e328;
      uVar53 = uVar6 + lVar14;
      uVar61 = (uVar5 ^ uRam000000018301e328) + uRam000000018301e310 + uVar5;
      uVar6 = (uVar53 * 0x2000 | uVar53 >> 0x33) ^ uVar6;
      uVar53 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar5 ^ uRam000000018301e328;
      uRam000000018301e2c8 = uVar13;
      uRam000000018301e460 =
           func_0x00018350fcb0((uVar53 << 0x1d | uVar53 >> 0x23) - (uRam000000018301e310 + uVar5) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar24 = _UNK_1800170c0;
      uRam000000018301e438 = uVar5 ^ uVar13;
      uRam000000018301e350 =
           (uRam000000018301e350 ^ uRam000000018301e460) + uRam000000018301e438 ^ 0x76ab07d188108497
      ;
      uRam000000018301e2e8 =
           (uRam000000018301e2e8 * -0x38ff6cf8ebf770cb ^ uRam000000018301e350) +
           uRam000000018301e460;
      uRam000000018301e518 = uRam000000018301e2e8 ^ uRam000000018301e350;
      uVar20 = (uint)uRam000000018301e438 << 0xc | (uint)uRam000000018301e438 >> 0x14;
      auVar22._4_4_ = 0;
      auVar22._0_4_ = uVar20 ^ 0x84222325;
      auVar22._8_8_ = uVar15;
      auVar21 = pshufb(auVar22 ^ _UNK_180017820,_UNK_1800170c0);
      uVar53 = auVar21._8_8_ + auVar21._0_8_;
      uVar5 = (ulonglong)uVar20;
      uVar6 = uVar53 + uRam000000018301e520;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e618 ^ uVar53;
      }
      uRam000000018301e570 = func_0x00018350fcb0(SUB161(auVar22 ^ _UNK_180017820,5) ^ uVar6);
      uVar6 = ((uVar15 | uVar5) ^ uRam000000018301e570) * -0x55caa725b278ff3b;
      uVar1 = (uint)uVar7;
      uVar2 = uVar20 & uVar1;
      uVar11 = uVar20 | uVar1;
      uVar1 = uVar20 ^ uVar1;
      uVar53 = ((((uVar15 ^ _UNK_18001a710) & 0xffffffff) * (ulonglong)_UNK_180017870 +
                 ((ulonglong)_UNK_1800178e0 * ((uVar15 ^ _UNK_18001a710) & 0xffffffff) +
                  (_UNK_18001a710 >> 0x20) * (ulonglong)_UNK_180017870 << 0x20) +
                ((ulonglong)_UNK_1800178d0 * (ulonglong)uVar1 << 0x20) +
                (ulonglong)_UNK_1800178c0 * (ulonglong)uVar1 +
                ((ulonglong)_UNK_1800178b0 * (ulonglong)uVar11 << 0x20) +
                (ulonglong)_UNK_1800178a0 * (ulonglong)uVar11 +
                ((ulonglong)_UNK_180017890 * (ulonglong)uVar2 << 0x20) +
                (ulonglong)_UNK_180017880 * (ulonglong)uVar2 +
                ((ulonglong)_UNK_180017860 * (uVar7 & 0xffffffff) << 0x20) +
                (ulonglong)_UNK_180017850 * (uVar7 & 0xffffffff) +
                (ulonglong)_UNK_180017830 * (ulonglong)uVar20 +
                ((ulonglong)_UNK_180017840 * (ulonglong)uVar20 << 0x20)) -
               (((ulonglong)uVar1 * (ulonglong)_UNK_180017980 << 0x20) +
                (ulonglong)_UNK_180017970 * (ulonglong)uVar1 +
                ((ulonglong)uVar11 * (ulonglong)_UNK_180017960 << 0x20) +
                (ulonglong)_UNK_180017950 * (ulonglong)uVar11 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180017940 << 0x20) +
               (ulonglong)_UNK_180017930 * (ulonglong)uVar2 +
               ((uVar7 & 0xffffffff) * (ulonglong)_UNK_180017920 << 0x20) +
               (ulonglong)_UNK_180017910 * (uVar7 & 0xffffffff) +
               (ulonglong)uVar20 * (ulonglong)_UNK_180017910 +
               ((ulonglong)uVar20 * (ulonglong)_UNK_180017920 << 0x20))) + 0x51c6d767c5402e3b;
      uRam000000018301e420 = uRam000000018301e358 ^ uVar6 ^ uVar53;
      uRam000000018301e5e0 = (uRam000000018301e5e0 ^ uVar6) + uVar53 ^ 0xf9991e10e3e7dc30;
      uRam000000018301e268 =
           (uRam000000018301e268 * 0x546f790274a28265 ^ uRam000000018301e5e0) + uVar6;
      uRam000000018301e5f0 = uRam000000018301e268 ^ uRam000000018301e5e0;
      uVar11 = (uint)uVar53;
      uVar53 = uVar53 & 0xffffffff;
      uVar7 = uVar53 ^ 0x84222325;
      uVar6 = ((uRam000000018301e5f8 ^ uVar7) +
              (ulonglong)((uint)uRam000000018301e5f8 & (uint)uVar7) * 2) *
              (uVar55 - uRam000000018301e3f0);
      uVar6 = (uVar6 | uRam000000018301e4b0) + (uVar6 & uRam000000018301e4b0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e508 = uVar53;
      uRam000000018301e5d8 =
           func_0x00018350fcb0((uVar7 ^ uVar55 | uVar6) +
                               (ulonglong)((uint)(uVar7 ^ uVar55) & (uint)uVar6));
      uVar7 = uVar53 * uVar55 ^ uRam000000018301e5d8;
      uVar6 = uVar53 + uVar55 + (ulonglong)(uVar19 & uVar11) * -2;
      uRam000000018301e568 = (uRam000000018301e568 ^ uVar7) + uVar6 ^ 0xda70e9d72b97dcc9;
      uRam000000018301e460 =
           (uRam000000018301e460 * 0x469f72d41156978d ^ uRam000000018301e568) + uVar7 ^
           uRam000000018301e568;
      uRam000000018301e388 = uVar6 & 0xffffffff;
      uVar1 = (uint)uVar6 << 8 | (uint)uVar6 >> 0x18;
      uVar7 = (ulonglong)uVar1;
      uVar15 = uVar7 ^ 0x84222325;
      uVar6 = ((uRam000000018301e508 ^ uVar15) +
              (ulonglong)((uint)uRam000000018301e508 & (uint)uVar15) * 2) *
              (uVar13 - uRam000000018301e298);
      uVar6 = (uVar6 | uRam000000018301e610) + (uVar6 & uRam000000018301e610);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e4d0 =
           func_0x00018350fcb0((uVar15 ^ uVar13 | uVar6) +
                               (ulonglong)((uint)(uVar15 ^ uVar13) & (uint)uVar6));
      uVar15 = uRam000000018301e4d0 & 0xfffffffffffffffc;
      uVar6 = uVar15 >> 1 | uVar15;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar15 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8
               ^ uVar15;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar13;
      uVar19 = (uint)uVar48;
      uVar9 = uVar1 & uVar19;
      uVar2 = uVar1 ^ uVar19;
      auVar83._8_4_ = 0xffffffff;
      auVar83._0_8_ = 0xffffffffffffffff;
      auVar83._12_4_ = 0xffffffff;
      auVar103._8_4_ = 0xffffffff;
      auVar103._0_8_ = 0xffffffffffffffff;
      auVar103._12_4_ = 0xffffffff;
      uVar3 = SUB164(auVar56 ^ auVar83,0);
      uVar13 = ((((ulonglong)_UNK_180017a10 * (ulonglong)uVar2 << 0x20) +
                 (ulonglong)_UNK_180017a00 * (ulonglong)uVar2 +
                 ((ulonglong)(uVar1 | uVar19) * (ulonglong)_UNK_1800179f0 << 0x20) +
                 (ulonglong)_UNK_1800179e0 * (ulonglong)(uVar1 | uVar19) +
                ((ulonglong)_UNK_1800179d0 * (ulonglong)uVar9 << 0x20) +
                (ulonglong)_UNK_1800179c0 * (ulonglong)uVar9 +
                ((ulonglong)_UNK_1800179b0 * (uVar48 & 0xffffffff) << 0x20) +
                (ulonglong)_UNK_1800179a0 * (uVar48 & 0xffffffff) +
                (ulonglong)uVar1 * (ulonglong)_UNK_1800179a0 +
                ((ulonglong)uVar1 * (ulonglong)_UNK_1800179b0 << 0x20)) -
               ((ulonglong)uVar3 * (ulonglong)_UNK_180017af0 +
                ((ulonglong)_UNK_180017b00 * (ulonglong)uVar3 +
                 (SUB168(auVar56 ^ auVar83,0) >> 0x20) * (ulonglong)_UNK_180017af0 << 0x20) +
                ((ulonglong)(uVar1 ^ 0xffffffff) * (ulonglong)_UNK_180017ad0 + _UNK_180017ae0 <<
                0x20) + (ulonglong)_UNK_180017ac0 * (ulonglong)(uVar1 ^ 0xffffffff) +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180017ab0 << 0x20) +
               (ulonglong)_UNK_180017aa0 * (ulonglong)uVar2 +
               ((ulonglong)uVar9 * (ulonglong)_UNK_180017a90 << 0x20) +
               (ulonglong)_UNK_180017a80 * (ulonglong)uVar9 +
               ((uVar48 & 0xffffffff) * (ulonglong)_UNK_180017a70 << 0x20) +
               (ulonglong)_UNK_180017a60 * (uVar48 & 0xffffffff) +
               (ulonglong)_UNK_180017a40 * (ulonglong)uVar1 +
               ((ulonglong)uVar1 * (ulonglong)_UNK_180017a50 << 0x20))) + 0xab55399ef9dfd3b0;
      uRam000000018301e5f8 = uRam000000018301e270 ^ uVar15 ^ uVar13;
      uRam000000018301e428 = (uRam000000018301e428 ^ uVar15) + uVar13 ^ 0x764a44c1225fc157;
      uRam000000018301e500 =
           (uRam000000018301e500 * 0x2bbb061b6eafa21 ^ uRam000000018301e428) + uVar15;
      uRam000000018301e5b8 = uRam000000018301e500 ^ uRam000000018301e428;
      uVar19 = (uint)uVar13;
      uVar13 = uVar13 & 0xffffffff;
      auVar23._4_4_ = 0;
      auVar23._0_4_ = uVar19 ^ 0x84222325;
      auVar23._8_4_ = uVar20;
      auVar23._12_4_ = 0;
      auVar24 = pshufb(auVar23 ^ _UNK_180017b10,auVar24);
      uVar48 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar48 + uRam000000018301e388;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e3a8 ^ uVar48;
      }
      uRam000000018301e5d0 = uVar13;
      uRam000000018301e570 = func_0x00018350fcb0(SUB161(auVar23 ^ _UNK_180017b10,5) ^ uVar6);
      uVar6 = (uVar13 | uVar5) ^ uRam000000018301e570;
      uVar48 = uVar6 << 0x28 | uVar6 >> 0x18;
      uVar6 = uVar13 + uVar5 + (ulonglong)(uVar20 & uVar19) * -2;
      uRam000000018301e620 = (uRam000000018301e620 ^ uVar48) + uVar6 ^ 0x21b367d3901131dd;
      uRam000000018301e580 =
           (uRam000000018301e580 * 0x273312d3f8389d7d ^ uRam000000018301e620) + uVar48;
      uRam000000018301e418 = uRam000000018301e580 ^ uRam000000018301e620;
      uRam000000018301e460 = uVar6 & 0xffffffff;
      uVar20 = (uint)uVar6 << 7 | (uint)uVar6 >> 0x19;
      uStack_1a0 = uStack_1a0 + uStack_1a8;
      uVar2 = (uStack_170 ^ uStack_1a0) << 0x10 | (uStack_170 ^ uStack_1a0) >> 0x10;
      uVar55 = CONCAT44(0,uVar2);
      uVar6 = (ulonglong)uStack_1c4 ^ 0x84222325;
      uVar5 = uVar6 ^ uRam000000018301e5b0;
      lVar14 = uVar6 + uRam000000018301e638;
      uVar6 = uVar5 + lVar14;
      uVar48 = (uVar55 ^ uRam000000018301e638) + uRam000000018301e5b0 + uVar55;
      uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
      uVar6 = (uVar48 * 0x2000 | uVar48 >> 0x33) ^ uVar55 ^ uRam000000018301e638;
      uRam000000018301e608 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018301e5b0 + uVar55) ^
                               (uVar5 << 0x1d | uVar5 >> 0x23) - lVar14);
      uVar6 = uRam000000018301e608 - (uRam000000018301e608 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
              uRam000000018301e608 ^ (ulonglong)uStack_1c4;
      uVar5 = uVar6 >> 1 | uVar6;
      uVar5 = uVar5 >> 2 | uVar5;
      uVar5 = uVar5 >> 4 | uVar5;
      uVar5 = uVar5 >> 8 | uVar5;
      uVar5 = uVar5 >> 0x10 | uVar5;
      uVar5 = uVar5 >> 0x20 | uVar5;
      uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar6 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
              uVar6;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = uVar55;
      uVar10 = uStack_1c4 & uVar2;
      uVar9 = uStack_1c4 | uVar2;
      uVar3 = uStack_1c4 ^ uVar2;
      uVar64 = SUB164(auVar73 ^ auVar103,0);
      uVar5 = (((ulonglong)uVar64 * (ulonglong)_UNK_180017b60 +
                ((ulonglong)_UNK_180017bd0 * (ulonglong)uVar64 +
                 (SUB168(auVar73 ^ auVar103,0) >> 0x20) * (ulonglong)_UNK_180017b60 << 0x20) +
               ((ulonglong)_UNK_180017bc0 * (ulonglong)uVar3 << 0x20) +
               (ulonglong)_UNK_180017bb0 * (ulonglong)uVar3 +
               ((ulonglong)_UNK_180017ba0 * (ulonglong)uVar9 << 0x20) +
               (ulonglong)_UNK_180017b90 * (ulonglong)uVar9 +
               ((ulonglong)_UNK_180017b80 * (ulonglong)uVar10 << 0x20) +
               (ulonglong)_UNK_180017b70 * (ulonglong)uVar10 +
               ((ulonglong)_UNK_180017b50 * (ulonglong)uVar2 << 0x20) +
               (ulonglong)_UNK_180017b40 * (ulonglong)uVar2 +
               ((ulonglong)_UNK_180017b30 * (ulonglong)uStack_1c4 << 0x20) +
               (ulonglong)_UNK_180017b20 * (ulonglong)uStack_1c4) -
              (((ulonglong)uVar3 * (ulonglong)_UNK_180017c70 << 0x20) +
               (ulonglong)_UNK_180017c60 * (ulonglong)uVar3 +
               ((ulonglong)uVar9 * (ulonglong)_UNK_180017c50 << 0x20) +
               (ulonglong)_UNK_180017c40 * (ulonglong)uVar9 +
              ((ulonglong)uVar10 * (ulonglong)_UNK_180017c30 << 0x20) +
              (ulonglong)_UNK_180017c20 * (ulonglong)uVar10 +
              ((ulonglong)uVar2 * (ulonglong)_UNK_180017c10 << 0x20) +
              (ulonglong)_UNK_180017c00 * (ulonglong)uVar2 +
              ((ulonglong)uStack_1c4 * (ulonglong)_UNK_180017c10 << 0x20) +
              (ulonglong)uStack_1c4 * (ulonglong)_UNK_180017c00)) + 0xc752b03a8d7c3df;
      uRam000000018301e590 = uRam000000018301e438 ^ uVar6 ^ uVar5;
      uRam000000018301e558 = (uRam000000018301e558 ^ uVar6) + uVar5 ^ 0x286e2b7d3f62fd6c;
      uRam000000018301e4c8 =
           (uRam000000018301e4c8 * -0x22873bfbdf416875 ^ uRam000000018301e558) + uVar6;
      uRam000000018301e460 = uRam000000018301e4c8 ^ uRam000000018301e558;
      uRam000000018301e4c0 = uRam000000018301e240 ^ uVar5;
      uVar9 = (uint)uVar5;
      uVar52 = uVar5 & 0xffffffff;
      uVar48 = (ulonglong)uStack_1a8;
      uVar6 = uVar52 ^ 0x84222325 ^ uRam000000018301e5f0;
      lVar14 = (uVar52 ^ 0x84222325) + uRam000000018301e280;
      uVar15 = uVar6 + lVar14;
      uVar61 = (uVar48 ^ uRam000000018301e280) + uRam000000018301e5f0 + uVar48;
      uVar6 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar6;
      uVar15 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar48 ^ uRam000000018301e280;
      uRam000000018301e540 = uVar52;
      uRam000000018301e5d8 =
           func_0x00018350fcb0((uVar15 << 0x1d | uVar15 >> 0x23) - (uRam000000018301e5f0 + uVar48) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar92._8_8_ = 0;
      auVar92._0_8_ = uVar52;
      lVar14 = (~uRam000000018301e5d8 & uVar52) * 0x10000000;
      uVar6 = lVar14 + (~uRam000000018301e5d8 & uVar52 & 0xaaaaaaaaa) * -0x8000000;
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = lVar14 + (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4;
      uVar48 = uVar48 + uVar52 + (ulonglong)(uVar9 & uStack_1a8) * -2;
      uRam000000018301e2f8 = (uRam000000018301e2f8 ^ uVar6) + uVar48 ^ 0x879fcd6880822a6;
      uRam000000018301e560 =
           (uRam000000018301e560 * -0x1595f29b93ebce29 ^ uRam000000018301e2f8) + uVar6;
      uRam000000018301e5a0 = uRam000000018301e560 ^ uRam000000018301e2f8;
      uRam000000018301e390 = uVar48 & 0xffffffff;
      uVar2 = (uint)uVar48 << 0xc | (uint)uVar48 >> 0x14;
      uVar61 = (ulonglong)uVar2;
      uVar48 = uVar61 ^ 0x84222325;
      uVar6 = ((uRam000000018301e590 ^ uVar48) +
              (ulonglong)((uint)uRam000000018301e590 & (uint)uVar48) * 2) *
              (uStack_1a0 - uRam000000018301e240);
      uVar6 = (uVar6 | uRam000000018301e598) + (uVar6 & uRam000000018301e598);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uVar48 = uVar48 ^ uStack_1a0;
      uRam000000018301e2b8 =
           func_0x00018350fcb0((uVar48 | uVar6) + (ulonglong)((uint)uVar48 & (uint)uVar6));
      uVar6 = uRam000000018301e2b8 ^ uVar61;
      uVar4 = uVar2 & uStack_1a0;
      uVar10 = uVar2 | uStack_1a0;
      uVar3 = uVar2 ^ uStack_1a0;
      uVar64 = uStack_1a0 ^ (uint)_UNK_18001a710;
      uVar15 = ((ulonglong)_UNK_180017d30 * (ulonglong)uVar64 + _UNK_180017d40 << 0x20) +
               (ulonglong)_UNK_180017d20 * (ulonglong)uVar64 +
               ((ulonglong)_UNK_180017d10 * (ulonglong)uVar3 << 0x20) +
               (ulonglong)_UNK_180017d00 * (ulonglong)uVar3 +
               ((ulonglong)_UNK_180017cf0 * (ulonglong)uVar10 << 0x20) +
               (ulonglong)_UNK_180017ce0 * (ulonglong)uVar10 +
               ((ulonglong)_UNK_180017cd0 * (ulonglong)uVar4 << 0x20) +
               (ulonglong)_UNK_180017cc0 * (ulonglong)uVar4 +
               ((ulonglong)_UNK_180017cb0 * (ulonglong)uStack_1a0 << 0x20) +
               (ulonglong)_UNK_180017ca0 * (ulonglong)uStack_1a0 +
               (ulonglong)_UNK_180017c80 * (ulonglong)uVar2 +
               ((ulonglong)_UNK_180017c90 * (ulonglong)uVar2 << 0x20) +
               (-(((ulonglong)uVar64 * (ulonglong)_UNK_180017e20 + _UNK_180017e30 << 0x20) +
                 (ulonglong)_UNK_180017e10 * (ulonglong)uVar64) -
               (((ulonglong)uVar3 * (ulonglong)_UNK_180017e00 << 0x20) +
                (ulonglong)_UNK_180017df0 * (ulonglong)uVar3 +
                ((ulonglong)uVar10 * (ulonglong)_UNK_180017de0 << 0x20) +
                (ulonglong)_UNK_180017dd0 * (ulonglong)uVar10 +
               ((ulonglong)uVar4 * (ulonglong)_UNK_180017dc0 << 0x20) +
               (ulonglong)_UNK_180017db0 * (ulonglong)uVar4 +
               ((ulonglong)uStack_1a0 * (ulonglong)_UNK_180017da0 << 0x20) +
               (ulonglong)_UNK_180017d90 * (ulonglong)uStack_1a0 +
               (ulonglong)_UNK_180017d70 * (ulonglong)uVar2 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180017d80 << 0x20))) + 0x1061d65faf41f5d7;
      uRam000000018301e318 = uRam000000018301e608 ^ uVar6 ^ uVar15;
      uRam000000018301e328 = (uRam000000018301e328 ^ uVar6) + uVar15 ^ 0x918cbd69dfd4d87;
      uRam000000018301e408 =
           (uRam000000018301e408 * 0x65098d7e6feba9dd ^ uRam000000018301e328) + uVar6;
      uRam000000018301e3c0 = uRam000000018301e408 ^ uRam000000018301e328;
      uVar48 = uVar15 & 0xffffffff;
      uVar6 = uVar48 ^ 0x84222325 ^ uRam000000018301e450;
      lVar14 = (uVar48 ^ 0x84222325) + uRam000000018301e3a8;
      uVar54 = uVar6 + lVar14;
      uVar62 = (uVar55 ^ uRam000000018301e3a8) + uRam000000018301e450 + uVar55;
      uVar6 = (uVar54 * 0x2000 | uVar54 >> 0x33) ^ uVar6;
      uVar54 = (uVar62 * 0x2000 | uVar62 >> 0x33) ^ uVar55 ^ uRam000000018301e3a8;
      uRam000000018301e458 = uVar48;
      uRam000000018301e5d8 =
           func_0x00018350fcb0((uVar54 << 0x1d | uVar54 >> 0x23) - (uRam000000018301e450 + uVar55) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      uRam000000018301e258 = uVar48 ^ uVar55;
      uRam000000018301e330 =
           (uRam000000018301e330 ^ uRam000000018301e5d8 & 0x7ffffffff) + uRam000000018301e258 ^
           0x2c49374147753b8;
      uRam000000018301e598 =
           (uRam000000018301e598 * -0x409263bb257a4595 ^ uRam000000018301e330) +
           (uRam000000018301e5d8 & 0x7ffffffff);
      uRam000000018301e5f8 = uRam000000018301e598 ^ uRam000000018301e330;
      uVar3 = (uint)uRam000000018301e258 << 8 | (uint)uRam000000018301e258 >> 0x18;
      uVar48 = CONCAT44(0,uVar3);
      uVar6 = uVar48 ^ 0x84222325 ^ uRam000000018301e2d0;
      lVar14 = (uVar48 ^ 0x84222325) + uRam000000018301e3d8;
      uVar55 = uVar6 + lVar14;
      uVar54 = (uVar52 ^ uRam000000018301e3d8) + uVar52 + uRam000000018301e2d0;
      uVar6 = (uVar55 * 0x2000 | uVar55 >> 0x33) ^ uVar6;
      uVar55 = (uVar54 * 0x2000 | uVar54 >> 0x33) ^ uVar52 ^ uRam000000018301e3d8;
      uRam000000018301e598 =
           func_0x00018350fcb0((uVar55 << 0x1d | uVar55 >> 0x23) - (uVar52 + uRam000000018301e2d0) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar74._8_8_ = 0;
      auVar74._0_8_ = uVar48;
      uVar6 = ((uRam000000018301e598 & 0xfffffffffff00000) << 0x1e | uRam000000018301e598 >> 0x22) ^
              uVar48;
      uVar49 = uVar3 & uVar9;
      uVar10 = uVar3 | uVar9;
      uVar9 = uVar3 ^ uVar9;
      auVar105._8_4_ = 0xffffffff;
      auVar105._0_8_ = 0xffffffffffffffff;
      auVar105._12_4_ = 0xffffffff;
      uVar64 = SUB164(auVar74 ^ auVar105,0);
      auVar107._8_4_ = 0xffffffff;
      auVar107._0_8_ = 0xffffffffffffffff;
      auVar107._12_4_ = 0xffffffff;
      uVar4 = SUB164(auVar92 ^ auVar105,0);
      uVar5 = (ulonglong)uVar64 * (ulonglong)_UNK_180017e60 +
              ((SUB168(auVar74 ^ auVar105,0) >> 0x20) * (ulonglong)_UNK_180017e60 +
               (ulonglong)_UNK_180017e50 * (ulonglong)uVar64 << 0x20) +
              ((ulonglong)_UNK_180017e80 * (ulonglong)uVar9 << 0x20) +
              (ulonglong)_UNK_180017e70 * (ulonglong)uVar9 +
              ((ulonglong)uVar49 * (ulonglong)_UNK_180017e80 << 0x20) +
              (ulonglong)uVar49 * (ulonglong)_UNK_180017e70 +
              ((ulonglong)uVar3 * (ulonglong)_UNK_180017e50 << 0x20) + (uVar5 & 0xffffffff) +
              (ulonglong)_UNK_180017e40 * (ulonglong)uVar3 +
              ((ulonglong)_UNK_180017ea0 * (ulonglong)uVar10 << 0x20) +
              (ulonglong)_UNK_180017e90 * (ulonglong)uVar10 +
              (-((ulonglong)uVar4 * (ulonglong)_UNK_180017f10 +
                ((ulonglong)_UNK_180017f80 * (ulonglong)uVar4 +
                 (SUB168(auVar92 ^ auVar105,0) >> 0x20) * (ulonglong)_UNK_180017f10 << 0x20)) -
              (((ulonglong)uVar9 * (ulonglong)_UNK_180017f70 << 0x20) +
               (ulonglong)_UNK_180017f60 * (ulonglong)uVar9 +
               ((ulonglong)uVar10 * (ulonglong)_UNK_180017f50 << 0x20) +
               (ulonglong)_UNK_180017f40 * (ulonglong)uVar10 +
              ((ulonglong)uVar49 * (ulonglong)_UNK_180017f30 << 0x20) +
              (ulonglong)_UNK_180017f20 * (ulonglong)uVar49 +
              ((uVar5 & 0xffffffff) * (ulonglong)_UNK_180017f00 << 0x20) +
              (ulonglong)_UNK_180017ef0 * (uVar5 & 0xffffffff) +
              (ulonglong)_UNK_180017ed0 * (ulonglong)uVar3 +
              ((ulonglong)uVar3 * (ulonglong)_UNK_180017ee0 << 0x20))) + 0x38ca97995a186741;
      uVar3 = (uint)uVar5;
      uVar55 = uVar5 & 0xffffffff;
      auVar25._4_4_ = 0;
      auVar25._0_4_ = uVar3 ^ 0x84222325;
      auVar25._8_4_ = uVar2;
      auVar25._12_4_ = 0;
      auVar24 = pshufb(auVar25 ^ _UNK_180017f90,_UNK_1800170c0);
      uRam000000018301e338 = uRam000000018301e360 ^ uVar6 ^ uVar5;
      uRam000000018301e250 = (uRam000000018301e250 ^ uVar6) + uVar5 ^ 0x40e69c3b09c0cd52;
      uRam000000018301e488 =
           (uRam000000018301e488 * -0x18f856fc552fa717 ^ uRam000000018301e250) + uVar6;
      uRam000000018301e3e8 = uRam000000018301e488 ^ uRam000000018301e250;
      uVar5 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar5 + uRam000000018301e630;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e4d8 ^ uVar5;
      }
      uRam000000018301e408 = uVar55;
      uRam000000018301e368 = func_0x00018350fcb0(SUB161(auVar25 ^ _UNK_180017f90,5) ^ uVar6);
      uVar6 = (uRam000000018301e368 << 0x18 | uRam000000018301e368 >> 0x28) * 0x73b5babbb9952ff;
      uRam000000018301e378 = uVar61 ^ uVar55;
      uRam000000018301e408 =
           (uRam000000018301e408 ^ uVar6) + uRam000000018301e378 ^ 0x50d7eec800486b4b;
      uRam000000018301e2d8 =
           (uRam000000018301e2d8 * -0x29d1b3b580064e4d ^ uRam000000018301e408) + uVar6 ^
           uRam000000018301e408;
      uVar64 = (uint)uRam000000018301e378 << 7 | (uint)uRam000000018301e378 >> 0x19;
      uVar61 = CONCAT44(0,uStack_1c0);
      uVar6 = uStack_160 ^ 0x84222325 ^ uRam000000018301e4d8;
      lVar14 = (uStack_160 ^ 0x84222325) + uRam000000018301e388;
      uVar5 = uVar6 + lVar14;
      uVar52 = (uVar61 ^ uRam000000018301e388) + uRam000000018301e4d8 + uVar61;
      uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
      uVar5 = (uVar52 * 0x2000 | uVar52 >> 0x33) ^ uVar61 ^ uRam000000018301e388;
      uRam000000018301e308 =
           func_0x00018350fcb0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018301e4d8 + uVar61) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uStack_160;
      uVar6 = ~uRam000000018301e308 & uStack_160;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = uVar61;
      uVar4 = (uint)uStack_160 & uStack_1c0;
      uVar2 = (uint)uStack_160 | uStack_1c0;
      uVar10 = SUB164(auVar75 ^ auVar107,0);
      uVar9 = SUB164(auVar57 ^ auVar107,0);
      uVar5 = (ulonglong)uVar10 * (ulonglong)_UNK_180017fe0 +
              ((ulonglong)_UNK_180018010 * (ulonglong)uVar10 +
               (SUB168(auVar75 ^ auVar107,0) >> 0x20) * (ulonglong)_UNK_180017fe0 << 0x20) +
              ((ulonglong)_UNK_180018000 * (ulonglong)uVar2 << 0x20) +
              (ulonglong)_UNK_180017ff0 * (ulonglong)uVar2 +
              ((ulonglong)uVar4 * (ulonglong)_UNK_180018000 << 0x20) +
              (ulonglong)uVar4 * (ulonglong)_UNK_180017ff0 +
              ((ulonglong)_UNK_180017fd0 * (ulonglong)uStack_1c0 << 0x20) +
              (ulonglong)_UNK_180017fc0 * (ulonglong)uStack_1c0 +
              (_UNK_180017fb0 * uStack_160 << 0x20) + _UNK_180017fa0 * uStack_160 +
              (-((ulonglong)uVar9 * (_UNK_180018080 & 0xffffffff) +
                ((ulonglong)_UNK_1800180f0 * (ulonglong)uVar9 +
                 (SUB168(auVar57 ^ auVar107,0) >> 0x20) * (_UNK_180018080 & 0xffffffff) << 0x20)) -
              (((ulonglong)((uint)uStack_160 ^ uStack_1c0) * (ulonglong)_UNK_1800180e0 << 0x20) +
               (ulonglong)_UNK_1800180d0 * (ulonglong)((uint)uStack_160 ^ uStack_1c0) +
               ((ulonglong)uVar2 * (ulonglong)_UNK_1800180c0 << 0x20) +
               (ulonglong)_UNK_1800180b0 * (ulonglong)uVar2 +
              ((ulonglong)uVar4 * (ulonglong)_UNK_1800180a0 << 0x20) +
              (ulonglong)_UNK_180018090 * (ulonglong)uVar4 +
              ((ulonglong)uStack_1c0 * (ulonglong)_UNK_180018070 << 0x20) +
              (ulonglong)_UNK_180018060 * (ulonglong)uStack_1c0 +
              (uStack_160 * _UNK_180018050 << 0x20) + _UNK_180018040 * uStack_160)) +
              0xcfba0a066e5a8a70;
      uRam000000018301e388 = uRam000000018301e5f8 ^ uVar6 ^ uVar5;
      uRam000000018301e320 = (uRam000000018301e320 ^ uVar6) + uVar5 ^ 0x3cb05de32b74081e;
      uRam000000018301e260 =
           (uRam000000018301e260 * -0x62b7fcfe9b35f5ef ^ uRam000000018301e320) + uVar6;
      uRam000000018301e390 = uRam000000018301e260 ^ uRam000000018301e320;
      uVar54 = uVar5 & 0xffffffff;
      uVar52 = (ulonglong)uStack_128 ^ 0x84222325;
      uVar6 = ((uRam000000018301e4a8 ^ uVar52) +
              (ulonglong)((uint)uRam000000018301e4a8 & (uint)uVar52) * 2) *
              (uVar54 - uRam000000018301e280);
      uVar6 = (uVar6 | uRam000000018301e508) + (uVar6 & uRam000000018301e508);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e498 = uVar54;
      uRam000000018301e378 =
           func_0x00018350fcb0((uVar52 ^ uVar54 | uVar6) +
                               (ulonglong)((uint)(uVar52 ^ uVar54) & (uint)uVar6));
      uVar6 = uRam000000018301e378 << 0x14 | uRam000000018301e378 >> 0x2c;
      uRam000000018301e3f0 = uStack_128 ^ uVar54;
      uRam000000018301e4a0 =
           (uRam000000018301e4a0 ^ uVar6) + uRam000000018301e3f0 ^ 0x6076a9143683bd7b;
      uRam000000018301e310 =
           (uRam000000018301e310 * -0x4188e59e577b891f ^ uRam000000018301e4a0) + uVar6;
      uRam000000018301e4d8 = uRam000000018301e310 ^ uRam000000018301e4a0;
      uVar9 = (uint)uRam000000018301e3f0 << 0x10 | (uint)uRam000000018301e3f0 >> 0x10;
      uVar10 = (int)uStack_158 + uVar9;
      uVar52 = (ulonglong)uVar10 ^ 0x84222325;
      uVar6 = ((uRam000000018301e478 ^ uVar52) +
              (ulonglong)((uint)uRam000000018301e478 & (uint)uVar52) * 2) *
              (uVar61 - uRam000000018301e400);
      uVar6 = (uVar6 | uRam000000018301e3c0) + (uVar6 & uRam000000018301e3c0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e590 =
           func_0x00018350fcb0((uVar52 ^ uVar61 | uVar6) +
                               (ulonglong)((uint)(uVar52 ^ uVar61) & (uint)uVar6));
      uVar6 = uVar10 * uVar61 ^ uRam000000018301e590;
      uVar6 = uVar6 << 0x2c | uVar6 >> 0x14;
      uStack_1c0 = uStack_1c0 ^ uVar10;
      uRam000000018301e348 = (ulonglong)uStack_1c0;
      uRam000000018301e5e0 =
           (uRam000000018301e5e0 ^ uVar6) + uRam000000018301e348 ^ 0x96b40ae9e6aa04dc;
      uRam000000018301e4f8 =
           (uRam000000018301e4f8 * 0x74873ae8ee3af149 ^ uRam000000018301e5e0) + uVar6;
      uRam000000018301e600 = uRam000000018301e4f8 ^ uRam000000018301e5e0;
      uVar2 = uStack_1c0 << 0xc | uStack_1c0 >> 0x14;
      auVar26._4_4_ = 0;
      auVar26._0_4_ = uVar2 ^ 0x84222325;
      auVar26._8_8_ = uVar54;
      uVar61 = (ulonglong)uVar2;
      auVar24 = pshufb(auVar26 ^ _UNK_180018100,_UNK_1800170c0);
      uVar52 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar52 + uRam000000018301e600;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e428 ^ uVar52;
      }
      uRam000000018301e3d0 = func_0x00018350fcb0(SUB161(auVar26 ^ _UNK_180018100,5) ^ uVar6);
      uVar4 = (uint)uVar5;
      uVar50 = uVar2 & uVar4;
      uVar49 = uVar2 ^ uVar4;
      uVar69 = uVar2 ^ 0xffffffff;
      uVar72 = uVar4 ^ 0xffffffff;
      uVar6 = (uVar54 | uVar61) ^ uRam000000018301e3d0;
      uVar5 = ((((ulonglong)_UNK_180018140 * (ulonglong)uVar72 + _UNK_1800181c0 << 0x20) +
                (ulonglong)_UNK_1800181b0 * (ulonglong)uVar72 +
               ((ulonglong)_UNK_180018120 * (ulonglong)uVar69 + _UNK_1800181a0 << 0x20) +
               (ulonglong)_UNK_180018190 * (ulonglong)uVar69 +
               ((ulonglong)_UNK_180018160 * (ulonglong)uVar49 << 0x20) +
               (ulonglong)_UNK_180018150 * (ulonglong)uVar49 +
               ((ulonglong)uVar50 * (ulonglong)_UNK_180018160 << 0x20) +
               (ulonglong)uVar50 * (ulonglong)_UNK_180018150 +
               ((uVar5 & 0xffffffff) * (ulonglong)_UNK_180018140 << 0x20) +
               (ulonglong)_UNK_180018130 * (uVar5 & 0xffffffff) +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180018120 << 0x20) +
               (ulonglong)_UNK_180018110 * (ulonglong)uVar2 +
               ((ulonglong)(uVar2 | uVar4) * (ulonglong)_UNK_180018180 << 0x20) +
               (ulonglong)_UNK_180018170 * (ulonglong)(uVar2 | uVar4)) -
              (((ulonglong)uVar72 * (ulonglong)_UNK_1800182b0 + _UNK_1800182c0 << 0x20) +
               (ulonglong)_UNK_1800182a0 * (ulonglong)uVar72 +
               ((ulonglong)uVar69 * (ulonglong)_UNK_180018280 + _UNK_180018290 << 0x20) +
               (ulonglong)_UNK_180018270 * (ulonglong)uVar69 +
              ((ulonglong)uVar49 * (ulonglong)_UNK_180018260 << 0x20) +
              (ulonglong)_UNK_180018250 * (ulonglong)uVar49 +
              ((ulonglong)uVar50 * (ulonglong)_UNK_180018240 << 0x20) +
              (ulonglong)_UNK_180018230 * (ulonglong)uVar50 +
              ((uVar5 & 0xffffffff) * (ulonglong)_UNK_180018220 << 0x20) +
              (ulonglong)_UNK_180018210 * (uVar5 & 0xffffffff) +
              (ulonglong)_UNK_1800181f0 * (ulonglong)uVar2 +
              ((ulonglong)uVar2 * (ulonglong)_UNK_180018200 << 0x20))) + 0x8e41ce4b18590915;
      uRam000000018301e590 = uRam000000018301e498 ^ uVar6 ^ uVar5;
      uRam000000018301e298 = (uRam000000018301e298 ^ uVar6) + uVar5 ^ 0x23b868504aa3e162;
      uRam000000018301e350 =
           (uRam000000018301e350 * 0x3c6c1c94d4cd3d49 ^ uRam000000018301e298) + uVar6;
      uRam000000018301e340 = uRam000000018301e350 ^ uRam000000018301e298;
      uVar52 = uVar5 & 0xffffffff;
      uVar62 = (ulonglong)uVar9;
      uVar54 = uVar52 ^ 0x84222325;
      uVar6 = ((uRam000000018301e3b8 ^ uVar54) +
              (ulonglong)((uint)uRam000000018301e3b8 & (uint)uVar54) * 2) *
              (uVar62 - uRam000000018301e4c8);
      uVar6 = (uVar6 | uRam000000018301e4a0) + (uVar6 & uRam000000018301e4a0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e538 = uVar52;
      uRam000000018301e290 =
           func_0x00018350fcb0((uVar54 ^ uVar62 | uVar6) +
                               (ulonglong)((uint)(uVar54 ^ uVar62) & (uint)uVar6));
      uVar6 = (uRam000000018301e290 & 0x7fffffffffffffff) >> 1 |
              uRam000000018301e290 & 0x7fffffffffffffff;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2
              ^ uRam000000018301e290 & 0x7fffffffffffffff;
      uRam000000018301e398 = uVar62 ^ uVar52;
      uRam000000018301e4e8 =
           (uRam000000018301e4e8 ^ uVar6) + uRam000000018301e398 ^ 0x542dfe9ac8bafc6d;
      uRam000000018301e2f0 =
           (uRam000000018301e2f0 * 0x7fc015944fdb8acf ^ uRam000000018301e4e8) + uVar6;
      uVar4 = (uint)uRam000000018301e398 << 8 | (uint)uRam000000018301e398 >> 0x18;
      uVar10 = uVar10 + uVar4;
      uVar54 = (ulonglong)uVar10;
      uVar62 = uVar54 ^ 0x84222325;
      uVar6 = ((uRam000000018301e320 ^ uVar62) +
              (ulonglong)((uint)uRam000000018301e320 & (uint)uVar62) * 2) *
              (uVar61 - uRam000000018301e288);
      uVar6 = (uVar6 | uRam000000018301e440) + (uVar6 & uRam000000018301e440);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2f0 =
           func_0x00018350fcb0((uVar62 ^ uVar61 | uVar6) +
                               (ulonglong)((uint)(uVar62 ^ uVar61) & (uint)uVar6));
      uVar6 = (uRam000000018301e2f0 << 0x17 | uRam000000018301e2f0 >> 0x29) ^ uVar54;
      uVar2 = uVar10 ^ uVar2;
      uRam000000018301e528 = (ulonglong)uVar2;
      uRam000000018301e400 =
           (uRam000000018301e400 ^ uVar6) + uRam000000018301e528 ^ 0xe568c2f45fbd25e;
      uRam000000018301e3a0 =
           (uRam000000018301e3a0 * 0x68a313074601f033 ^ uRam000000018301e400) + uVar6;
      uRam000000018301e530 = uRam000000018301e3a0 ^ uRam000000018301e400;
      uVar9 = uVar2 << 7 | uVar2 >> 0x19;
      uStack_194 = uStack_194 ^ uStack_198 + uStack_1ac;
      uVar2 = uStack_194 << 0x10 | uStack_194 >> 0x10;
      uVar62 = CONCAT44(0,uVar2);
      uVar61 = (ulonglong)uStack_19c ^ 0x84222325;
      uVar6 = ((uRam000000018301e508 ^ uVar61) +
              (ulonglong)((uint)uRam000000018301e508 & (uint)uVar61) * 2) *
              (uVar62 - uRam000000018301e248);
      uVar6 = (uVar6 | uRam000000018301e4a8) + (uVar6 & uRam000000018301e4a8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e280 =
           func_0x00018350fcb0((uVar61 ^ uVar62 | uVar6) +
                               (ulonglong)((uint)(uVar61 ^ uVar62) & (uint)uVar6));
      auVar97._8_8_ = 0;
      auVar97._0_8_ = uVar62;
      auVar80._8_4_ = 0xffffffff;
      auVar80._0_8_ = 0xffffffffffffffff;
      auVar80._12_4_ = 0xffffffff;
      uVar49 = uStack_19c ^ 0xffffffff;
      uVar69 = SUB164(auVar97 ^ auVar80,0);
      uVar6 = uRam000000018301e280 * 0x556cbca84f800000 |
              uRam000000018301e280 * 0x5a64a8aad979509f >> 0x29;
      uVar61 = (((ulonglong)uVar69 * (ulonglong)_UNK_180018330 +
                 ((SUB168(auVar97 ^ auVar80,0) >> 0x20) * (ulonglong)_UNK_180018330 +
                  (ulonglong)_UNK_180018300 * (ulonglong)uVar69 << 0x20) +
                 ((ulonglong)_UNK_1800182d0 * (ulonglong)uVar49 + _UNK_180018320 << 0x20) +
                 (ulonglong)_UNK_180018310 * (ulonglong)uVar49 +
                 (ulonglong)_UNK_1800182e0 * (ulonglong)uStack_19c +
                 ((ulonglong)uStack_19c * (ulonglong)_UNK_1800182d0 << 0x20) +
                ((ulonglong)uVar2 * (ulonglong)_UNK_180018300 << 0x20) +
                (ulonglong)_UNK_1800182f0 * (ulonglong)uVar2) -
               (((ulonglong)uVar49 * (ulonglong)_UNK_1800183d0 + _UNK_1800183e0 << 0x20) +
                (ulonglong)_UNK_1800183c0 * (ulonglong)uVar49 +
                ((ulonglong)(uStack_19c | uVar2) * (ulonglong)_UNK_1800183b0 << 0x20) +
                (ulonglong)_UNK_1800183a0 * (ulonglong)(uStack_19c | uVar2) +
                ((ulonglong)(uStack_19c & uVar2) * (ulonglong)_UNK_1800183b0 << 0x20) +
                (ulonglong)(uStack_19c & uVar2) * (ulonglong)_UNK_1800183a0 +
                ((ulonglong)uStack_19c * (ulonglong)_UNK_180018370 << 0x20) +
                (ulonglong)_UNK_180018360 * (ulonglong)uStack_19c +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180018390 << 0x20) +
               (ulonglong)_UNK_180018380 * (ulonglong)uVar2)) + 0x338aad7a2122aef8;
      uRam000000018301e498 = uRam000000018301e268 ^ uVar6 ^ uVar61;
      uRam000000018301e458 = (uRam000000018301e458 ^ uVar6) + uVar61 ^ 0x5586c4824b16cb74;
      uRam000000018301e420 =
           (uRam000000018301e420 * -0x5fa9c5946296975f ^ uRam000000018301e458) + uVar6;
      uRam000000018301e418 = uRam000000018301e420 ^ uRam000000018301e458;
      uVar49 = (uint)uVar61;
      uVar8 = uVar61 & 0xffffffff;
      uVar69 = (uVar49 ^ uStack_1ac) << 0xc | (uVar49 ^ uStack_1ac) >> 0x14;
      uVar72 = uStack_198 + uStack_1ac + uVar69;
      uVar17 = (ulonglong)uVar72 ^ 0x84222325;
      uVar6 = ((uRam000000018301e290 ^ uVar17) +
              (ulonglong)((uint)uVar17 & (uint)uRam000000018301e290) * 2) *
              (uVar62 - uRam000000018301e2a8);
      uVar6 = (uVar6 | uRam000000018301e420) + (uVar6 & uRam000000018301e420);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e568 = uVar8;
      uRam000000018301e4d8 =
           func_0x00018350fcb0((uVar17 ^ uVar62 | uVar6) +
                               (ulonglong)((uint)(uVar17 ^ uVar62) & (uint)uVar6));
      uVar6 = ((uVar72 | uVar2) ^ uRam000000018301e4d8) & 0x1fffffffffffffff ^ (ulonglong)uVar72;
      uVar2 = uVar2 ^ uVar72;
      uRam000000018301e3f0 = (ulonglong)uVar2;
      uRam000000018301e4e0 =
           (uRam000000018301e4e0 ^ uVar6) + uRam000000018301e3f0 ^ 0xfd208700ca1fb698;
      uRam000000018301e5d0 =
           (uRam000000018301e5d0 * -0x7edcf2ea58ce8a13 ^ uRam000000018301e4e0) + uVar6;
      uRam000000018301e2e0 = uRam000000018301e5d0 ^ uRam000000018301e4e0;
      uVar2 = uVar2 << 8 | uVar2 >> 0x18;
      uVar63 = (ulonglong)uVar2;
      uVar18 = uVar63 ^ 0x84222325;
      uVar6 = ((uRam000000018301e610 ^ uVar18) +
              (ulonglong)((uint)uVar18 & (uint)uRam000000018301e610) * 2) *
              (uVar8 - uRam000000018301e2f0);
      uVar6 = (uVar6 | uRam000000018301e618) + (uVar6 & uRam000000018301e618);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2d8 =
           func_0x00018350fcb0((uVar18 ^ uVar8 | uVar6) +
                               (ulonglong)((uint)(uVar18 ^ uVar8) & (uint)uVar6));
      auVar24 = _UNK_1800170c0;
      auVar93._8_8_ = 0;
      auVar93._0_8_ = uVar8;
      uVar50 = uVar2 & uVar49;
      uVar77 = uVar2 | uVar49;
      auVar27._8_4_ = 0xffffffff;
      auVar27._0_8_ = 0xffffffffffffffff;
      auVar27._12_4_ = 0xffffffff;
      uVar101 = SUB164(auVar93 ^ auVar27,0);
      uVar61 = ((((ulonglong)_UNK_180018420 * (ulonglong)uVar77 << 0x20) +
                 (ulonglong)_UNK_180018410 * (ulonglong)uVar77 +
                ((ulonglong)uVar50 * (ulonglong)_UNK_180018420 << 0x20) +
                (ulonglong)uVar50 * (ulonglong)_UNK_180018410 +
                ((ulonglong)_UNK_180018400 * (uVar61 & 0xffffffff) << 0x20) +
                (ulonglong)_UNK_1800183f0 * (uVar61 & 0xffffffff) +
                (ulonglong)uVar2 * (ulonglong)_UNK_1800183f0 +
                ((ulonglong)uVar2 * (ulonglong)_UNK_180018400 << 0x20)) -
               ((ulonglong)uVar101 * (ulonglong)_UNK_180018470 +
                ((SUB168(auVar93 ^ auVar27,0) >> 0x20) * (ulonglong)_UNK_180018470 +
                 (ulonglong)_UNK_180018480 * (ulonglong)uVar101 << 0x20) +
                ((ulonglong)(uVar2 ^ 0xffffffff) * (ulonglong)_UNK_180018460 + _UNK_1800184d0 <<
                0x20) + (ulonglong)_UNK_180018450 * (ulonglong)(uVar2 ^ 0xffffffff) +
                ((ulonglong)(uVar2 ^ uVar49) * (ulonglong)_UNK_1800184a0 << 0x20) +
                (ulonglong)_UNK_180018490 * (ulonglong)(uVar2 ^ uVar49) +
                ((ulonglong)uVar50 * (ulonglong)_UNK_1800184a0 << 0x20) +
                (ulonglong)uVar50 * (ulonglong)_UNK_180018490 +
                ((uVar61 & 0xffffffff) * (ulonglong)_UNK_180018480 << 0x20) +
                (uVar61 & 0xffffffff) * (ulonglong)_UNK_180018470 +
                (ulonglong)uVar2 * (ulonglong)_UNK_180018450 +
                ((ulonglong)uVar2 * (ulonglong)_UNK_180018460 << 0x20) +
               ((ulonglong)uVar77 * (ulonglong)_UNK_1800184c0 << 0x20) +
               (ulonglong)_UNK_1800184b0 * (ulonglong)uVar77)) + 0x82f9adfdf8080dc;
      auVar28._4_4_ = 0;
      auVar28._0_4_ = (uint)uVar61 ^ 0x84222325;
      auVar28._8_4_ = uVar69;
      auVar28._12_4_ = 0;
      auVar21 = pshufb(auVar28 ^ _UNK_1800184e0,_UNK_1800170c0);
      uVar6 = uRam000000018301e2d8 * -0x558ba3b0242058e3;
      uRam000000018301e378 = uRam000000018301e2a8 ^ uVar6 ^ uVar61;
      uRam000000018301e618 = (uRam000000018301e618 ^ uVar6) + uVar61 ^ 0x78c2bdae3a815f76;
      uRam000000018301e3c0 =
           (uRam000000018301e3c0 * 0x30c6cb9c6eddc81 ^ uRam000000018301e618) + uVar6;
      uRam000000018301e500 = uRam000000018301e3c0 ^ uRam000000018301e618;
      uVar62 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar62 + uRam000000018301e530;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e330 ^ uVar62;
      }
      uRam000000018301e370 = uVar61 & 0xffffffff;
      uRam000000018301e2e8 = func_0x00018350fcb0(SUB161(auVar28 ^ _UNK_1800184e0,5) ^ uVar6);
      uRam000000018301e550 = uVar61 & 0xffffffff ^ (ulonglong)uVar69;
      uRam000000018301e430 =
           (uRam000000018301e430 ^ uRam000000018301e2e8 & 0xffffffffffff8000) + uRam000000018301e550
           ^ 0x7c98db3114e9c409;
      uRam000000018301e5f8 =
           (uRam000000018301e5f8 * 0x6daa5dbd86910157 ^ uRam000000018301e430) +
           (uRam000000018301e2e8 & 0xffffffffffff8000);
      uRam000000018301e620 = uRam000000018301e5f8 ^ uRam000000018301e430;
      uVar49 = (uint)uRam000000018301e550 << 7 | (uint)uRam000000018301e550 >> 0x19;
      auVar98._8_8_ = 0;
      auVar98._0_8_ = uVar53;
      auVar29._4_4_ = 0;
      auVar29._0_4_ = uVar64 ^ 0x84222325;
      auVar29._8_8_ = uVar53;
      auVar21 = pshufb(auVar29 ^ _UNK_1800184f0,auVar24);
      uVar62 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar62 + uRam000000018301e430;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e458 ^ uVar62;
      }
      uRam000000018301e4b0 = func_0x00018350fcb0(SUB161(auVar29 ^ _UNK_1800184f0,5) ^ uVar6);
      uVar6 = uRam000000018301e4b0 ^ uVar53;
      uVar101 = uVar64 & uVar11;
      uVar50 = uVar64 ^ uVar11;
      auVar94._8_4_ = 0xffffffff;
      auVar94._0_8_ = 0xffffffffffffffff;
      auVar94._12_4_ = 0xffffffff;
      uVar69 = uVar64 ^ 0xffffffff;
      uVar77 = SUB164(auVar98 ^ auVar94,0);
      uVar62 = ((((ulonglong)_UNK_1800185b0 * (ulonglong)uVar69 + _UNK_1800185c0 << 0x20) +
                 (ulonglong)_UNK_1800185a0 * (ulonglong)uVar69 +
                ((ulonglong)_UNK_180018590 * (ulonglong)uVar50 << 0x20) +
                (ulonglong)_UNK_180018580 * (ulonglong)uVar50 +
                ((ulonglong)(uVar64 | uVar11) * (ulonglong)_UNK_180018570 << 0x20) +
                (ulonglong)_UNK_180018560 * (ulonglong)(uVar64 | uVar11) +
                ((ulonglong)_UNK_180018550 * (ulonglong)uVar101 << 0x20) +
                (ulonglong)_UNK_180018540 * (ulonglong)uVar101 +
                (_UNK_180018530 * uVar53 << 0x20) + _UNK_180018520 * uVar53 +
                (ulonglong)_UNK_180018500 * (ulonglong)uVar64 +
                ((ulonglong)_UNK_180018510 * (ulonglong)uVar64 << 0x20)) -
               ((ulonglong)uVar77 * (ulonglong)_UNK_1800186a0 +
                ((ulonglong)_UNK_1800186b0 * (ulonglong)uVar77 +
                 (SUB168(auVar98 ^ auVar94,0) >> 0x20) * (ulonglong)_UNK_1800186a0 << 0x20) +
                ((ulonglong)uVar69 * (ulonglong)_UNK_180018680 + _UNK_180018690 << 0x20) +
                (ulonglong)_UNK_180018670 * (ulonglong)uVar69 +
               ((ulonglong)uVar50 * (ulonglong)_UNK_180018660 << 0x20) +
               (ulonglong)_UNK_180018650 * (ulonglong)uVar50 +
               ((ulonglong)uVar101 * (ulonglong)_UNK_180018640 << 0x20) +
               (ulonglong)_UNK_180018630 * (ulonglong)uVar101 +
               (uVar53 * _UNK_180018620 << 0x20) + _UNK_180018610 * uVar53 +
               (ulonglong)_UNK_1800185f0 * (ulonglong)uVar64 +
               ((ulonglong)uVar64 * (ulonglong)_UNK_180018600 << 0x20))) + 0x449c8f1c9add9a76;
      uRam000000018301e4d0 = uRam000000018301e450 ^ uVar6 ^ uVar62;
      uRam000000018301e2d0 = (uRam000000018301e2d0 ^ uVar6) + uVar62 ^ 0x9c10221e214c3db8;
      uRam000000018301e350 =
           (uRam000000018301e350 * 0xca9bc251fda0157 ^ uRam000000018301e2d0) + uVar6;
      uRam000000018301e290 = uRam000000018301e350 ^ uRam000000018301e2d0;
      uVar11 = (uint)uVar62;
      uVar8 = uVar62 & 0xffffffff;
      uVar6 = ((uRam000000018301e348 ^ uVar18) +
              (ulonglong)((uint)uRam000000018301e348 & (uint)uVar18) * 2) *
              (uVar8 - uRam000000018301e2a0);
      uVar6 = (uVar6 | uRam000000018301e290) + (uVar6 & uRam000000018301e290);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2e8 = uVar8;
      uRam000000018301e368 =
           func_0x00018350fcb0((uVar18 ^ uVar8 | uVar6) +
                               (ulonglong)((uint)(uVar18 ^ uVar8) & (uint)uVar6));
      uVar6 = (((uVar63 | uVar8) ^ uRam000000018301e368) & 0xfffffffffff) << 0x13 |
              uRam000000018301e368 >> 0x2d;
      uVar53 = uVar63 + uVar8 + (ulonglong)(uVar2 & uVar11) * -2;
      uRam000000018301e268 = (uRam000000018301e268 ^ uVar6) + uVar53 ^ 0x1d87f5a73022e955;
      uRam000000018301e558 =
           (uRam000000018301e558 * 0xcb994e8de7252d7 ^ uRam000000018301e268) + uVar6;
      uRam000000018301e450 = uRam000000018301e558 ^ uRam000000018301e268;
      uRam000000018301e2e8 = uVar53 & 0xffffffff;
      uVar2 = (uint)uVar53 << 0x10 | (uint)uVar53 >> 0x10;
      auVar30._4_4_ = 0;
      auVar30._0_4_ = uVar2 ^ 0x84222325;
      auVar30._8_4_ = uVar10;
      auVar30._12_4_ = 0;
      auVar24 = pshufb(auVar30 ^ _UNK_1800186c0,auVar24);
      uVar53 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar53 + lRam000000018301e470;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e418 ^ uVar53;
      }
      uRam000000018301e4b8 = func_0x00018350fcb0(SUB161(auVar30 ^ _UNK_1800186c0,5) ^ uVar6);
      auVar99._8_8_ = 0;
      auVar99._0_8_ = CONCAT44(0,uVar2);
      uVar50 = uVar2 & uVar10;
      uVar69 = uVar2 | uVar10;
      uVar10 = uVar2 ^ uVar10;
      uVar6 = (uRam000000018301e4b8 << 0x3c | uRam000000018301e4b8 >> 4) >> 0x12 |
              (uRam000000018301e4b8 >> 4) << 0x2e;
      auVar108._8_4_ = 0xffffffff;
      auVar108._0_8_ = 0xffffffffffffffff;
      auVar108._12_4_ = 0xffffffff;
      uVar77 = SUB164(auVar99 ^ auVar108,0);
      uVar54 = ((ulonglong)_UNK_180018740 * (ulonglong)uVar10 << 0x20) +
               (ulonglong)_UNK_180018730 * (ulonglong)uVar10 +
               ((ulonglong)_UNK_180018720 * (ulonglong)uVar69 << 0x20) +
               (ulonglong)_UNK_180018710 * (ulonglong)uVar69 +
               ((ulonglong)_UNK_180018700 * (ulonglong)uVar50 << 0x20) +
               (ulonglong)_UNK_1800186f0 * (ulonglong)uVar50 +
               (_UNK_1800186e0 * uVar54 << 0x20) + _UNK_1800186d0 * uVar54 +
               (ulonglong)uVar2 * (ulonglong)_UNK_1800186d0 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_1800186e0 << 0x20) +
               (-((ulonglong)uVar77 * (ulonglong)_UNK_1800187b0 +
                 ((ulonglong)_UNK_180018820 * (ulonglong)uVar77 +
                  (SUB168(auVar99 ^ auVar108,0) >> 0x20) * (ulonglong)_UNK_1800187b0 << 0x20)) -
               (((ulonglong)uVar10 * (ulonglong)_UNK_180018810 << 0x20) +
                (ulonglong)_UNK_180018800 * (ulonglong)uVar10 +
                ((ulonglong)uVar69 * (ulonglong)_UNK_1800187f0 << 0x20) +
                (ulonglong)_UNK_1800187e0 * (ulonglong)uVar69 +
               ((ulonglong)uVar50 * (ulonglong)_UNK_1800187d0 << 0x20) +
               (ulonglong)_UNK_1800187c0 * (ulonglong)uVar50 +
               (uVar54 * _UNK_1800187a0 << 0x20) + _UNK_180018790 * uVar54 +
               (ulonglong)_UNK_180018770 * (ulonglong)uVar2 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180018780 << 0x20))) + 0x3f4691f75f76c953;
      uRam000000018301e2a0 = uRam000000018301e3c0 ^ uVar6 ^ uVar54;
      uRam000000018301e480 = (uRam000000018301e480 ^ uVar6) + uVar54 ^ 0x62e143296c2dcc28;
      uRam000000018301e290 =
           (uRam000000018301e290 * -0x3fee8a9ab87635b5 ^ uRam000000018301e480) + uVar6;
      uRam000000018301e550 = uRam000000018301e290 ^ uRam000000018301e480;
      uVar10 = (uint)uVar54;
      uVar18 = uVar54 & 0xffffffff;
      uVar64 = (uVar64 ^ uVar10) << 0xc | (uVar64 ^ uVar10) >> 0x14;
      uVar6 = (ulonglong)uVar64 ^ 0x84222325;
      uVar53 = uVar6 ^ uRam000000018301e510;
      lVar14 = uVar6 + uRam000000018301e2c0;
      uVar6 = uVar53 + lVar14;
      uVar63 = (uVar8 ^ uRam000000018301e2c0) + uRam000000018301e510 + uVar8;
      uVar53 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar53;
      uVar6 = (uVar63 * 0x2000 | uVar63 >> 0x33) ^ uVar8 ^ uRam000000018301e2c0;
      uRam000000018301e308 = uVar18;
      uRam000000018301e450 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018301e510 + uVar8) ^
                               (uVar53 << 0x1d | uVar53 >> 0x23) - lVar14);
      auVar24 = _UNK_1800170c0;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar8;
      uVar77 = uVar64 & uVar11;
      uVar69 = uVar64 | uVar11;
      uVar11 = uVar64 ^ uVar11;
      uVar6 = (uVar64 * uVar8 ^ uRam000000018301e450) & 0x3ffffffff;
      auVar88._8_4_ = 0xffffffff;
      auVar88._0_8_ = 0xffffffffffffffff;
      auVar88._12_4_ = 0xffffffff;
      uVar50 = SUB164(auVar65 ^ auVar108,0);
      uVar53 = ((ulonglong)_UNK_1800188a0 * (ulonglong)uVar11 << 0x20) +
               (ulonglong)_UNK_180018890 * (ulonglong)uVar11 +
               ((ulonglong)_UNK_180018880 * (ulonglong)uVar69 << 0x20) +
               (ulonglong)_UNK_180018870 * (ulonglong)uVar69 +
               ((ulonglong)_UNK_180018860 * (ulonglong)uVar77 << 0x20) +
               (ulonglong)_UNK_180018850 * (ulonglong)uVar77 +
               ((ulonglong)_UNK_180018840 * (uVar62 & 0xffffffff) << 0x20) +
               (ulonglong)_UNK_180018830 * (uVar62 & 0xffffffff) +
               (ulonglong)uVar64 * (ulonglong)_UNK_180018830 +
               ((ulonglong)uVar64 * (ulonglong)_UNK_180018840 << 0x20) +
               (-((ulonglong)uVar50 * (_UNK_180018910 & 0xffffffff) +
                 ((ulonglong)_UNK_180018980 * (ulonglong)uVar50 +
                  (SUB168(auVar65 ^ auVar108,0) >> 0x20) * (_UNK_180018910 & 0xffffffff) << 0x20)) -
               (((ulonglong)uVar11 * (ulonglong)_UNK_180018970 << 0x20) +
                (ulonglong)_UNK_180018960 * (ulonglong)uVar11 +
                ((ulonglong)uVar69 * (ulonglong)_UNK_180018950 << 0x20) +
                (ulonglong)_UNK_180018940 * (ulonglong)uVar69 +
               ((ulonglong)uVar77 * (ulonglong)_UNK_180018930 << 0x20) +
               (ulonglong)_UNK_180018920 * (ulonglong)uVar77 +
               ((uVar62 & 0xffffffff) * (ulonglong)_UNK_180018900 << 0x20) +
               (ulonglong)_UNK_1800188f0 * (uVar62 & 0xffffffff) +
               (ulonglong)_UNK_1800188d0 * (ulonglong)uVar64 +
               ((ulonglong)uVar64 * (ulonglong)_UNK_1800188e0 << 0x20))) + 0xd08192436032ddc9;
      uRam000000018301e428 = uRam000000018301e540 ^ uVar6 ^ uVar53;
      uRam000000018301e530 = (uRam000000018301e530 ^ uVar6) + uVar53 ^ 0xe206ed06f20e1582;
      uRam000000018301e520 =
           (uRam000000018301e520 * 0x72010d3ffed2429f ^ uRam000000018301e530) + uVar6;
      uRam000000018301e548 = uRam000000018301e520 ^ uRam000000018301e530;
      uStack_1f8 = (uint)uVar53;
      auVar31._4_4_ = 0;
      auVar31._0_4_ = uStack_1f8 ^ 0x84222325;
      auVar31._8_4_ = uVar2;
      auVar31._12_4_ = 0;
      auVar21 = pshufb(auVar31 ^ _UNK_180018990,_UNK_1800170c0);
      uVar62 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar62 + uRam000000018301e350;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e610 ^ uVar62;
      }
      uRam000000018301e538 = uVar53 & 0xffffffff;
      uRam000000018301e5f8 = func_0x00018350fcb0(SUB161(auVar31 ^ _UNK_180018990,5) ^ uVar6);
      uVar6 = uRam000000018301e5f8 - (uRam000000018301e5f8 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
              uRam000000018301e5f8;
      uVar53 = (uVar53 & 0xffffffff) + CONCAT44(0,uVar2) + (ulonglong)(uVar2 & uStack_1f8) * -2;
      uRam000000018301e408 = (uRam000000018301e408 ^ uVar6) + uVar53 ^ 0x51b464c0ffcb5bd9;
      uRam000000018301e520 =
           (uRam000000018301e520 * 0x3c7190d7fe117bd5 ^ uRam000000018301e408) + uVar6;
      uRam000000018301e5c0 = uRam000000018301e520 ^ uRam000000018301e408;
      uRam000000018301e548 = uVar53 & 0xffffffff;
      uStack_1bc = (uint)uVar53 << 8 | (uint)uVar53 >> 0x18;
      uVar6 = CONCAT44(0,uStack_1bc) ^ 0x84222325;
      uVar53 = uVar6 ^ uRam000000018301e410;
      lVar14 = uVar6 + uRam000000018301e560;
      uVar6 = uVar53 + lVar14;
      uVar62 = (uVar18 ^ uRam000000018301e560) + uRam000000018301e410 + uVar18;
      uVar53 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar53;
      uVar6 = (uVar62 * 0x2000 | uVar62 >> 0x33) ^ uVar18 ^ uRam000000018301e560;
      uRam000000018301e358 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018301e410 + uVar18) ^
                               (uVar53 << 0x1d | uVar53 >> 0x23) - lVar14);
      uVar6 = uRam000000018301e358 - (uRam000000018301e358 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
              uRam000000018301e358;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = CONCAT44(0,uStack_1bc);
      uVar69 = uStack_1bc & uVar10;
      uVar11 = uStack_1bc | uVar10;
      uVar10 = uStack_1bc ^ uVar10;
      uVar2 = SUB164(auVar58 ^ auVar88,0);
      uStack_158 = ((((ulonglong)_UNK_180018a10 * (ulonglong)uVar10 << 0x20) +
                     (ulonglong)_UNK_180018a00 * (ulonglong)uVar10 +
                     ((ulonglong)_UNK_1800189f0 * (ulonglong)uVar11 << 0x20) +
                     (ulonglong)_UNK_1800189e0 * (ulonglong)uVar11 +
                    ((ulonglong)_UNK_1800189d0 * (ulonglong)uVar69 << 0x20) +
                    (ulonglong)_UNK_1800189c0 * (ulonglong)uVar69 +
                    ((uVar54 & 0xffffffff) * (ulonglong)_UNK_1800189b0 << 0x20) +
                    (ulonglong)_UNK_1800189a0 * (uVar54 & 0xffffffff) +
                    (ulonglong)uStack_1bc * (ulonglong)_UNK_1800189a0 +
                    ((ulonglong)uStack_1bc * (ulonglong)_UNK_1800189b0 << 0x20)) -
                   ((ulonglong)uVar2 * (ulonglong)_UNK_180018a40 +
                    ((SUB168(auVar58 ^ auVar88,0) >> 0x20) * (ulonglong)_UNK_180018a40 +
                     (ulonglong)_UNK_180018a50 * (ulonglong)uVar2 << 0x20) +
                    ((ulonglong)uVar10 * (ulonglong)_UNK_180018a70 << 0x20) +
                    (ulonglong)_UNK_180018a60 * (ulonglong)uVar10 +
                    ((ulonglong)uVar69 * (ulonglong)_UNK_180018a70 << 0x20) +
                    (ulonglong)uVar69 * (ulonglong)_UNK_180018a60 +
                    ((ulonglong)uStack_1bc * (ulonglong)_UNK_180018a50 << 0x20) +
                    (ulonglong)uStack_1bc * (ulonglong)_UNK_180018a40 +
                   ((ulonglong)uVar11 * (ulonglong)_UNK_180018a90 << 0x20) +
                   (ulonglong)_UNK_180018a80 * (ulonglong)uVar11)) + 0x5726b943852849c6;
      uRam000000018301e4c0 = uRam000000018301e420 ^ uVar6 ^ uStack_158;
      uRam000000018301e5c8 = (uRam000000018301e5c8 ^ uVar6) + uStack_158 ^ 0xe000b6911543b54e;
      uRam000000018301e610 =
           (uRam000000018301e610 * -0x2cb11b9a5b826851 ^ uRam000000018301e5c8) + uVar6;
      uRam000000018301e5c0 = uRam000000018301e610 ^ uRam000000018301e5c8;
      uStack_1e8 = (uint)uStack_158;
      uRam000000018301e530 = uStack_158 & 0xffffffff;
      uStack_1a0 = (int)uVar15 + uVar9;
      uVar15 = (ulonglong)uStack_1a0;
      uVar6 = uVar15 ^ 0x84222325 ^ uRam000000018301e368;
      lVar14 = (uVar15 ^ 0x84222325) + uRam000000018301e318;
      uVar53 = uVar6 + lVar14;
      uVar54 = (uVar7 ^ uRam000000018301e318) + uRam000000018301e368 + uVar7;
      uVar6 = (uVar53 * 0x2000 | uVar53 >> 0x33) ^ uVar6;
      uVar53 = (uVar54 * 0x2000 | uVar54 >> 0x33) ^ uVar7 ^ uRam000000018301e318;
      uStack_1a8 = (uVar64 ^ uStack_1e8) << 7 | (uVar64 ^ uStack_1e8) >> 0x19;
      uRam000000018301e5a8 =
           func_0x00018350fcb0((uVar53 << 0x1d | uVar53 >> 0x23) - (uRam000000018301e368 + uVar7) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      uVar6 = uVar15 + uVar7 + (ulonglong)(uVar1 & uStack_1a0) * -2;
      uRam000000018301e518 =
           (uRam000000018301e518 ^ ~uRam000000018301e5a8 & uVar15) + uVar6 ^ 0xcee8c8644b17a11;
      uRam000000018301e5d8 =
           (uRam000000018301e5d8 * 0x4b50ea18833930c3 ^ uRam000000018301e518) +
           (~uRam000000018301e5a8 & uVar15);
      uRam000000018301e540 = uRam000000018301e5d8 ^ uRam000000018301e518;
      uRam000000018301e2c8 = uVar6 & 0xffffffff;
      uVar1 = (uint)uVar6 << 0x10 | (uint)uVar6 >> 0x10;
      uStack_1b4 = (uint)uVar61 + uVar1;
      auVar32._4_4_ = 0;
      auVar32._0_4_ = uStack_1b4 ^ 0x84222325;
      auVar32._8_4_ = uVar9;
      auVar32._12_4_ = 0;
      auVar21 = pshufb(auVar32 ^ _UNK_180018aa0,auVar24);
      uVar7 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar7 + uRam000000018301e2f8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e388 ^ uVar7;
      }
      uRam000000018301e298 = func_0x00018350fcb0(SUB161(auVar32 ^ _UNK_180018aa0,5) ^ uVar6);
      uVar9 = uVar9 ^ uStack_1b4;
      uRam000000018301e4b0 = (ulonglong)uVar9;
      uRam000000018301e548 =
           (uRam000000018301e548 ^ uStack_1b4 ^ uRam000000018301e298) + uRam000000018301e4b0 ^
           0x7c68d067374f0969;
      uRam000000018301e560 =
           (uRam000000018301e560 * -0x5566931d5da29407 ^ uRam000000018301e548) +
           (uStack_1b4 ^ uRam000000018301e298);
      uRam000000018301e3e0 = uRam000000018301e560 ^ uRam000000018301e548;
      uVar11 = uVar9 << 0xc | uVar9 >> 0x14;
      uStack_1a0 = uStack_1a0 + uVar11;
      uVar7 = (ulonglong)uStack_1a0 ^ 0x84222325;
      uVar6 = ((uRam000000018301e298 ^ uVar7) +
              (ulonglong)((uint)uRam000000018301e298 & (uint)uVar7) * 2) *
              (uVar1 - uRam000000018301e560);
      uVar6 = (uVar6 | uRam000000018301e4c8) + (uVar6 & uRam000000018301e4c8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uVar7 = uVar7 ^ uVar1;
      uRam000000018301e3e0 =
           func_0x00018350fcb0((uVar7 | uVar6) + (ulonglong)((uint)uVar7 & (uint)uVar6));
      uVar1 = uVar1 ^ uStack_1a0;
      uRam000000018301e298 = (ulonglong)uVar1;
      uRam000000018301e500 =
           (uRam000000018301e500 ^ uRam000000018301e3e0 & 0xffffffffff800000) + uRam000000018301e298
           ^ 0x175e872203cc714c;
      uRam000000018301e400 =
           (uRam000000018301e400 * 0x4e0c4f6c6225cb31 ^ uRam000000018301e500) +
           (uRam000000018301e3e0 & 0xffffffffff800000);
      uRam000000018301e370 = uRam000000018301e400 ^ uRam000000018301e500;
      uStack_228 = uVar1 << 8 | uVar1 >> 0x18;
      uStack_1b4 = uStack_1b4 + uStack_228;
      uVar7 = (ulonglong)uStack_1b4 ^ 0x84222325;
      uVar6 = ((uRam000000018301e488 ^ uVar7) +
              (ulonglong)((uint)uRam000000018301e488 & (uint)uVar7) * 2) *
              (uVar11 - uRam000000018301e3f0);
      uVar6 = (uVar6 | uRam000000018301e4f0) + (uVar6 & uRam000000018301e4f0);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uVar7 = uVar7 ^ uVar11;
      uRam000000018301e560 =
           func_0x00018350fcb0((uVar7 | uVar6) + (ulonglong)((uint)uVar7 & (uint)uVar6));
      uVar6 = (ulonglong)uStack_1b4 ^ (uRam000000018301e560 << 0xf | uRam000000018301e560 >> 0x31);
      uVar11 = uVar11 ^ uStack_1b4;
      uRam000000018301e558 = (ulonglong)uVar11;
      uRam000000018301e600 =
           (uRam000000018301e600 ^ uVar6) + uRam000000018301e558 ^ 0x8832d29a8224ac49;
      uRam000000018301e310 =
           (uRam000000018301e310 * 0x3d10ea3204496fb7 ^ uRam000000018301e600) + uVar6;
      uRam000000018301e480 = uRam000000018301e310 ^ uRam000000018301e600;
      uStack_1e0 = uVar11 << 7 | uVar11 >> 0x19;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar52;
      auVar33._4_4_ = 0;
      auVar33._0_4_ = uVar49 ^ 0x84222325;
      auVar33._8_8_ = uVar52;
      auVar24 = pshufb(auVar33 ^ _UNK_180018ab0,auVar24);
      uVar7 = auVar24._8_8_ + auVar24._0_8_;
      uVar15 = (ulonglong)uVar49;
      uVar6 = uVar7 + uRam000000018301e270;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e2a8 ^ uVar7;
      }
      uRam000000018301e448 = func_0x00018350fcb0(SUB161(auVar33 ^ _UNK_180018ab0,5) ^ uVar6);
      uVar6 = ~uRam000000018301e448 & uVar15;
      uVar1 = (uint)uVar5;
      uVar2 = uVar49 & uVar1;
      uVar11 = uVar49 ^ uVar1;
      auVar81._8_4_ = 0xffffffff;
      auVar81._0_8_ = 0xffffffffffffffff;
      auVar81._12_4_ = 0xffffffff;
      uVar9 = SUB164(auVar96 ^ auVar81,0);
      uVar7 = (((ulonglong)uVar9 * (ulonglong)_UNK_180018b70 +
                ((ulonglong)_UNK_180018b80 * (ulonglong)uVar9 +
                 (SUB168(auVar96 ^ auVar81,0) >> 0x20) * (ulonglong)_UNK_180018b70 << 0x20) +
                ((ulonglong)(uVar49 ^ 0xffffffff) * (ulonglong)_UNK_180018b50 + _UNK_180018b60 <<
                0x20) + (ulonglong)_UNK_180018b40 * (ulonglong)(uVar49 ^ 0xffffffff) +
               ((ulonglong)_UNK_180018b30 * (ulonglong)uVar11 << 0x20) +
               (ulonglong)_UNK_180018b20 * (ulonglong)uVar11 +
               ((ulonglong)_UNK_180018b10 * (ulonglong)uVar2 << 0x20) +
               (ulonglong)_UNK_180018b00 * (ulonglong)uVar2 +
               (_UNK_180018af0 * uVar52 << 0x20) + _UNK_180018ae0 * uVar52 +
               (ulonglong)_UNK_180018ac0 * (ulonglong)uVar49 +
               ((ulonglong)_UNK_180018ad0 * (ulonglong)uVar49 << 0x20)) -
              (((ulonglong)uVar11 * (ulonglong)_UNK_180018c20 << 0x20) +
               (ulonglong)_UNK_180018c10 * (ulonglong)uVar11 +
               ((ulonglong)(uVar49 | uVar1) * (ulonglong)_UNK_180018c00 << 0x20) +
               (ulonglong)_UNK_180018bf0 * (ulonglong)(uVar49 | uVar1) +
              ((ulonglong)uVar2 * (ulonglong)_UNK_180018be0 << 0x20) +
              (ulonglong)_UNK_180018bd0 * (ulonglong)uVar2 +
              (uVar52 * _UNK_180018bc0 << 0x20) + _UNK_180018bb0 * uVar52 +
              (ulonglong)uVar49 * (ulonglong)_UNK_180018bb0 +
              ((ulonglong)uVar49 * (ulonglong)_UNK_180018bc0 << 0x20))) + 0x5f74fd41086c0df5;
      uRam000000018301e490 = uRam000000018301e4e0 ^ uVar6 ^ uVar7;
      uRam000000018301e5f8 = (uRam000000018301e5f8 ^ uVar6) + uVar7 ^ 0x5cff53cfdf66ec3a;
      uRam000000018301e488 =
           (uRam000000018301e488 * -0x630b67a4bdb59953 ^ uRam000000018301e5f8) + uVar6;
      uRam000000018301e3c8 = uRam000000018301e488 ^ uRam000000018301e5f8;
      uVar53 = uVar7 & 0xffffffff;
      uVar5 = uVar53 ^ 0x84222325;
      uVar6 = ((uRam000000018301e4b8 ^ uVar5) +
              (ulonglong)((uint)uRam000000018301e4b8 & (uint)uVar5) * 2) *
              (uVar48 - uRam000000018301e258);
      uVar6 = (uVar6 | uRam000000018301e278) + (uVar6 & uRam000000018301e278);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e548 = uVar53;
      uRam000000018301e590 =
           func_0x00018350fcb0((uVar5 ^ uVar48 | uVar6) +
                               (ulonglong)((uint)(uVar5 ^ uVar48) & (uint)uVar6));
      uRam000000018301e3c0 = uVar48 ^ uVar53;
      uRam000000018301e598 =
           (uRam000000018301e598 ^ uRam000000018301e630) + uRam000000018301e3c0 ^ 0x47211156bfa688bd
      ;
      uRam000000018301e3e8 =
           (uRam000000018301e3e8 * 0x2e176ce974051fb9 ^ uRam000000018301e598) + uRam000000018301e630
      ;
      uRam000000018301e4d0 = uRam000000018301e3e8 ^ uRam000000018301e598;
      uVar1 = (uint)uRam000000018301e3c0 << 0x10 | (uint)uRam000000018301e3c0 >> 0x10;
      uVar48 = (ulonglong)uVar1;
      uVar6 = uVar48 ^ 0x84222325 ^ uRam000000018301e570;
      lVar14 = (uVar48 ^ 0x84222325) + uRam000000018301e5e0;
      uVar5 = uVar6 + lVar14;
      uVar61 = (uVar13 ^ uRam000000018301e5e0) + uRam000000018301e570 + uVar13;
      uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
      uVar5 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar13 ^ uRam000000018301e5e0;
      uRam000000018301e490 =
           func_0x00018350fcb0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018301e570 + uVar13) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      uVar2 = uVar1 & uVar19;
      uVar19 = uVar1 ^ uVar19;
      uVar11 = uVar1 ^ 0xffffffff;
      uVar6 = uVar48 * uVar13 ^ uRam000000018301e490;
      uVar5 = uVar6 & 0x7fffffffffffff;
      uVar6 = uVar5 - ((uVar6 & 0x7fffffffffffff) >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar5;
      uVar13 = ((((ulonglong)_UNK_180018cc0 * (ulonglong)uVar11 + _UNK_180018cd0 << 0x20) +
                 (ulonglong)_UNK_180018cb0 * (ulonglong)uVar11 +
                 ((ulonglong)_UNK_180018ca0 * (ulonglong)uVar19 << 0x20) +
                 (ulonglong)_UNK_180018c90 * (ulonglong)uVar19 +
                ((ulonglong)_UNK_180018c80 * (ulonglong)uVar2 << 0x20) +
                (ulonglong)_UNK_180018c70 * (ulonglong)uVar2 +
                (_UNK_180018c60 * uVar13 << 0x20) + _UNK_180018c50 * uVar13 +
                ((ulonglong)_UNK_180018c40 * (ulonglong)uVar1 << 0x20) +
                (ulonglong)_UNK_180018c30 * (ulonglong)uVar1) -
               (((ulonglong)uVar11 * (ulonglong)_UNK_180018d90 + _UNK_180018da0 << 0x20) +
                (ulonglong)_UNK_180018d80 * (ulonglong)uVar11 +
                ((ulonglong)uVar19 * (ulonglong)_UNK_180018d70 << 0x20) +
                (ulonglong)_UNK_180018d60 * (ulonglong)uVar19 +
               ((ulonglong)uVar2 * (ulonglong)_UNK_180018d50 << 0x20) +
               (ulonglong)_UNK_180018d40 * (ulonglong)uVar2 +
               (uVar13 * _UNK_180018d30 << 0x20) + _UNK_180018d20 * uVar13 +
               ((ulonglong)uVar1 * (ulonglong)_UNK_180018d10 << 0x20) +
               (ulonglong)_UNK_180018d00 * (ulonglong)uVar1)) + 0xda8e179b9bd4006f;
      uRam000000018301e2b8 = uRam000000018301e468 ^ uVar5 ^ uVar13;
      uRam000000018301e3f8 = (uRam000000018301e3f8 ^ uVar5) + uVar13 ^ 0xc75f07860f87933f;
      uRam000000018301e5f0 =
           (uRam000000018301e5f0 * -0x73cabb30a56e7b5f ^ uRam000000018301e3f8) + uVar5;
      uRam000000018301e268 = uRam000000018301e5f0 ^ uRam000000018301e3f8;
      uVar5 = uVar13 & 0xffffffff;
      uVar6 = uVar5 ^ 0x84222325 ^ uRam000000018301e638;
      lVar14 = (uVar5 ^ 0x84222325) + uRam000000018301e240;
      uVar61 = uVar6 + lVar14;
      uVar52 = (uVar15 ^ uRam000000018301e240) + uRam000000018301e638 + uVar15;
      uVar6 = (uVar61 * 0x2000 | uVar61 >> 0x33) ^ uVar6;
      uVar61 = (uVar52 * 0x2000 | uVar52 >> 0x33) ^ uVar15 ^ uRam000000018301e240;
      uRam000000018301e428 = uVar5;
      uRam000000018301e5c0 =
           func_0x00018350fcb0((uVar61 << 0x1d | uVar61 >> 0x23) - (uRam000000018301e638 + uVar15) ^
                               (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
      auVar24 = _UNK_1800170c0;
      uVar6 = uVar5 * uVar15 ^ uRam000000018301e5c0;
      uVar6 = uVar6 << 0x19 | uVar6 >> 0x27;
      uVar5 = uVar5 + uVar15 + (ulonglong)(uVar49 & (uint)uVar13) * -2;
      uRam000000018301e418 = (uRam000000018301e418 ^ uVar6) + uVar5 ^ 0xa4115d902ff01595;
      uRam000000018301e488 =
           (uRam000000018301e488 * 0x30f566ee08313a83 ^ uRam000000018301e418) + uVar6;
      uRam000000018301e280 = uRam000000018301e488 ^ uRam000000018301e418;
      uRam000000018301e4f8 = uVar5 & 0xffffffff;
      uVar19 = (uint)uVar5 << 0xc | (uint)uVar5 >> 0x14;
      auVar102._8_8_ = 0;
      auVar102._0_8_ = uVar53;
      auVar34._4_4_ = 0;
      auVar34._0_4_ = uVar19 ^ 0x84222325;
      auVar34._8_8_ = uVar53;
      auVar21 = pshufb(auVar34 ^ _UNK_180018db0,_UNK_1800170c0);
      uVar5 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar5 + uRam000000018301e320;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e3b0 ^ uVar5;
      }
      uRam000000018301e578 = func_0x00018350fcb0(SUB161(auVar34 ^ _UNK_180018db0,5) ^ uVar6);
      auVar100._8_8_ = 0;
      auVar100._0_8_ = CONCAT44(0,uVar19);
      uVar2 = uVar19 & (uint)uVar7;
      uVar11 = uVar19 ^ (uint)uVar7;
      auVar109._8_4_ = 0xffffffff;
      auVar109._0_8_ = 0xffffffffffffffff;
      auVar109._12_4_ = 0xffffffff;
      uVar10 = SUB164(auVar102 ^ auVar109,0);
      uVar6 = uRam000000018301e578 & 0x7ffffffffff;
      uVar9 = SUB164(auVar100 ^ auVar109,0);
      uStack_160 = (((ulonglong)uVar10 * (ulonglong)_UNK_180018e00 +
                     ((ulonglong)_UNK_180018e50 * (ulonglong)uVar10 +
                      (SUB168(auVar102 ^ auVar109,0) >> 0x20) * (ulonglong)_UNK_180018e00 << 0x20) +
                     ((ulonglong)_UNK_180018e40 * (ulonglong)uVar11 << 0x20) +
                     (ulonglong)_UNK_180018e30 * (ulonglong)uVar11 +
                    ((ulonglong)_UNK_180018e20 * (ulonglong)uVar2 << 0x20) +
                    (ulonglong)_UNK_180018e10 * (ulonglong)uVar2 +
                    ((ulonglong)_UNK_180018df0 * (uVar7 & 0xffffffff) << 0x20) +
                    (ulonglong)_UNK_180018de0 * (uVar7 & 0xffffffff) +
                    (ulonglong)_UNK_180018dc0 * (ulonglong)uVar19 +
                    ((ulonglong)_UNK_180018dd0 * (ulonglong)uVar19 << 0x20)) -
                   ((ulonglong)uVar9 * (_UNK_180018ec0 & 0xffffffff) +
                    ((ulonglong)_UNK_180018f10 * (ulonglong)uVar9 +
                     (SUB168(auVar100 ^ auVar109,0) >> 0x20) * (_UNK_180018ec0 & 0xffffffff) << 0x20
                    ) + ((ulonglong)uVar11 * (ulonglong)_UNK_180018f00 << 0x20) +
                        (ulonglong)_UNK_180018ef0 * (ulonglong)uVar11 +
                   ((ulonglong)uVar2 * (ulonglong)_UNK_180018ee0 << 0x20) +
                   (ulonglong)_UNK_180018ed0 * (ulonglong)uVar2 +
                   ((uVar7 & 0xffffffff) * (ulonglong)_UNK_180018eb0 << 0x20) +
                   (ulonglong)_UNK_180018ea0 * (uVar7 & 0xffffffff) +
                   (ulonglong)_UNK_180018e80 * (ulonglong)uVar19 +
                   ((ulonglong)uVar19 * (ulonglong)_UNK_180018e90 << 0x20))) + 0xbadad81494cf406a;
      uRam000000018301e538 = uRam000000018301e438 ^ uVar6 ^ uStack_160;
      uRam000000018301e450 = (uRam000000018301e450 ^ uVar6) + uStack_160 ^ 0xbe08dc116e3a944b;
      uRam000000018301e608 =
           (uRam000000018301e608 * -0x6e6157b036dd31f9 ^ uRam000000018301e450) + uVar6;
      uRam000000018301e5f8 = uRam000000018301e608 ^ uRam000000018301e450;
      uStack_1d8 = (uint)uStack_160;
      auVar35._4_4_ = 0;
      auVar35._0_4_ = uStack_1d8 ^ 0x84222325;
      auVar35._8_4_ = uVar1;
      auVar35._12_4_ = 0;
      auVar21 = pshufb(auVar35 ^ _UNK_180018f20,auVar24);
      uVar5 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar5 + uRam000000018301e5a8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e528 ^ uVar5;
      }
      uRam000000018301e588 = uStack_160 & 0xffffffff;
      uRam000000018301e270 = func_0x00018350fcb0(SUB161(auVar35 ^ _UNK_180018f20,5) ^ uVar6);
      uVar6 = (uRam000000018301e270 & 0xffffffffffffffe0) +
              (uRam000000018301e270 >> 5 & 0x555555555555555) * -0x10;
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
              uRam000000018301e270 & 0xffffffffffffffe0;
      uRam000000018301e278 = uStack_160 & 0xffffffff ^ uVar48;
      uRam000000018301e5d8 =
           (uRam000000018301e5d8 ^ uVar6) + uRam000000018301e278 ^ 0x5b3ab00a2fb9a06e;
      uRam000000018301e428 =
           (uRam000000018301e428 * 0x3888408ce2dbe1a5 ^ uRam000000018301e5d8) + uVar6;
      uRam000000018301e590 = uRam000000018301e428 ^ uRam000000018301e5d8;
      uStack_1b8 = (uint)uRam000000018301e278 << 8 | (uint)uRam000000018301e278 >> 0x18;
      uStack_218 = (uint)uVar13 + uStack_1b8;
      auVar36._4_4_ = 0;
      auVar36._0_4_ = uStack_218 ^ 0x84222325;
      auVar36._8_4_ = uVar19;
      auVar36._12_4_ = 0;
      auVar21 = pshufb(auVar36 ^ _UNK_180018f30,auVar24);
      uVar5 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar5 + uRam000000018301e4a8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e348 ^ uVar5;
      }
      uRam000000018301e448 = func_0x00018350fcb0(SUB161(auVar36 ^ _UNK_180018f30,5) ^ uVar6);
      uVar6 = (((uStack_218 | uVar19) ^ uRam000000018301e448) & 0x7fffffffffffffff) >> 3;
      uVar5 = (ulonglong)uStack_218 + CONCAT44(0,uVar19) + (ulonglong)(uVar19 & uStack_218) * -2;
      uRam000000018301e308 = (uVar6 * 8 ^ uRam000000018301e308) + uVar5 ^ 0x64edac7976e7ef05;
      uRam000000018301e330 =
           (uRam000000018301e330 * -0x47acb551c033a067 ^ uRam000000018301e308) + uVar6 * 8;
      uRam000000018301e2c8 = uRam000000018301e308 ^ uRam000000018301e330;
      uRam000000018301e568 = uVar5 & 0xffffffff;
      uStack_1ac = (uint)uVar5 << 7 | (uint)uVar5 >> 0x19;
      uVar7 = (ulonglong)uVar20;
      uVar6 = ((uRam000000018301e588 ^ uVar17) +
              (ulonglong)((uint)uRam000000018301e588 & (uint)uVar17) * 2) *
              (uVar7 - uRam000000018301e330);
      uVar6 = (uVar6 | uRam000000018301e310) + (uVar6 & uRam000000018301e310);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e610 =
           func_0x00018350fcb0((uVar17 ^ uVar7 | uVar6) +
                               (ulonglong)((uint)(uVar17 ^ uVar7) & (uint)uVar6));
      uVar6 = (ulonglong)(uVar20 ^ uVar72) ^ (uVar72 | uVar20) ^ uRam000000018301e610;
      uVar1 = uVar72 & uVar20;
      uVar19 = uVar72 ^ uVar20;
      auVar106._8_4_ = 0xffffffff;
      auVar106._0_8_ = 0xffffffffffffffff;
      auVar106._12_4_ = 0xffffffff;
      uVar11 = SUB164(ZEXT416(uVar72) ^ auVar106,0);
      uVar5 = ((((ulonglong)_UNK_180018f50 * (ulonglong)uVar19 << 0x20) +
                (ulonglong)_UNK_180018f40 * (ulonglong)uVar19 +
                ((ulonglong)uVar1 * (ulonglong)_UNK_180018f50 << 0x20) +
                (ulonglong)uVar1 * (ulonglong)_UNK_180018f40 + (ulonglong)uVar72 + (ulonglong)uVar20
               + ((ulonglong)(uVar72 | uVar20) * (ulonglong)_UNK_180018f70 << 0x20) +
                 (ulonglong)_UNK_180018f60 * (ulonglong)(uVar72 | uVar20)) -
              ((ulonglong)uVar11 * (_UNK_180018fe0 & 0xffffffff) +
               ((ulonglong)_UNK_180019030 * (ulonglong)uVar11 +
                (SUB168(ZEXT416(uVar72) ^ auVar106,0) >> 0x20) * (_UNK_180018fe0 & 0xffffffff) <<
               0x20) + ((ulonglong)uVar19 * (ulonglong)_UNK_180019020 << 0x20) +
                       (ulonglong)_UNK_180019010 * (ulonglong)uVar19 +
              ((ulonglong)uVar1 * (ulonglong)_UNK_180019000 << 0x20) +
              (ulonglong)_UNK_180018ff0 * (ulonglong)uVar1 +
              ((ulonglong)uVar20 * (ulonglong)_UNK_180018fd0 << 0x20) +
              (ulonglong)_UNK_180018fc0 * (ulonglong)uVar20 +
              ((ulonglong)uVar72 * (ulonglong)_UNK_180018fb0 << 0x20) +
              (ulonglong)_UNK_180018fa0 * (ulonglong)uVar72)) + 0x2998f72cf3e9101f;
      uRam000000018301e5d0 = uRam000000018301e4c0 ^ uVar6 ^ uVar5;
      uRam000000018301e5e8 = (uRam000000018301e5e8 ^ uVar6) + uVar5 ^ 0xa6763f2ab6d8ec77;
      uRam000000018301e500 =
           (uRam000000018301e500 * 0x59c9372c11d694df ^ uRam000000018301e5e8) + uVar6;
      uRam000000018301e580 = uRam000000018301e500 ^ uRam000000018301e5e8;
      uVar53 = uVar5 & 0xffffffff;
      uVar13 = (ulonglong)uVar4;
      uVar48 = uVar53 ^ 0x84222325;
      uVar6 = ((uRam000000018301e340 ^ uVar48) +
              (ulonglong)((uint)uRam000000018301e340 & (uint)uVar48) * 2) *
              (uVar13 - uRam000000018301e250);
      uVar6 = (uVar6 | uRam000000018301e450) + (uVar6 & uRam000000018301e450);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2b8 = uVar53;
      uRam000000018301e338 =
           func_0x00018350fcb0((uVar48 ^ uVar13 | uVar6) +
                               (ulonglong)((uint)(uVar48 ^ uVar13) & (uint)uVar6));
      auVar95._8_8_ = 0;
      auVar95._0_8_ = uVar53;
      uRam000000018301e440 = uVar13 ^ uVar53;
      uRam000000018301e458 =
           (uRam000000018301e458 ^ uRam000000018301e338 ^ uVar53) + uRam000000018301e440 ^
           0xeff7eec9b5f04ed0;
      uRam000000018301e4c0 =
           (uRam000000018301e4c0 * -0x583710e9ec76b87d ^ uRam000000018301e458) +
           (uRam000000018301e338 ^ uVar53);
      uRam000000018301e288 = uRam000000018301e4c0 ^ uRam000000018301e458;
      uVar19 = (uint)uRam000000018301e440 << 0x10 | (uint)uRam000000018301e440 >> 0x10;
      uVar48 = (ulonglong)uVar19;
      uVar13 = uVar48 ^ 0x84222325;
      uVar6 = ((uRam000000018301e5a8 ^ uVar13) +
              (ulonglong)((uint)uRam000000018301e5a8 & (uint)uVar13) * 2) *
              (uVar55 - uRam000000018301e618);
      uVar6 = (uVar6 | uRam000000018301e3f8) + (uVar6 & uRam000000018301e3f8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e2f0 =
           func_0x00018350fcb0((uVar13 ^ uVar55 | uVar6) +
                               (ulonglong)((uint)(uVar13 ^ uVar55) & (uint)uVar6));
      uVar6 = ~(ulonglong)((uint)uRam000000018301e2f0 ^ (uVar3 | uVar19)) & uVar48;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar55;
      uVar1 = SUB164(auVar37 ^ auVar106,0);
      uVar13 = (((uVar48 ^ uVar55) * (ulonglong)_UNK_1800190a0 +
                 ((ulonglong)_UNK_1800190b0 * (uVar48 ^ uVar55) << 0x20) +
                 ((ulonglong)(uVar19 | uVar3) * (ulonglong)_UNK_180019090 << 0x20) +
                 (ulonglong)_UNK_180019080 * (ulonglong)(uVar19 | uVar3) +
                ((ulonglong)(uVar19 & uVar3) * (ulonglong)_UNK_180019070 << 0x20) +
                (ulonglong)_UNK_180019060 * (ulonglong)(uVar19 & uVar3) +
                (uVar55 * _UNK_180019050 << 0x20) + _UNK_180019040 * uVar55 +
                (ulonglong)uVar19 * (ulonglong)_UNK_180019040 +
                ((ulonglong)uVar19 * (ulonglong)_UNK_180019050 << 0x20)) -
               ((ulonglong)uVar1 * (ulonglong)_UNK_1800190f0 +
                ((SUB168(auVar37 ^ auVar106,0) >> 0x20) * (ulonglong)_UNK_1800190f0 +
                 (ulonglong)_UNK_1800190e0 * (ulonglong)uVar1 << 0x20) +
               uVar55 * _UNK_1800190f0 + (uVar55 * _UNK_1800190e0 << 0x20))) + 0x2f0ce69d134f7c8c;
      uRam000000018301e428 = uRam000000018301e440 ^ uVar6 ^ uVar13;
      uRam000000018301e4a8 = (uRam000000018301e4a8 ^ uVar6) + uVar13 ^ 0xf019b9f21c5f423c;
      uRam000000018301e448 =
           (uRam000000018301e448 * -0x52d43bf1e792411 ^ uRam000000018301e4a8) + uVar6;
      uRam000000018301e540 = uRam000000018301e448 ^ uRam000000018301e4a8;
      auVar38._4_4_ = 0;
      auVar38._0_4_ = (uint)uVar13 ^ 0x84222325;
      auVar38._8_4_ = uVar20;
      auVar38._12_4_ = 0;
      auVar21 = pshufb(auVar38 ^ _UNK_180019100,auVar24);
      uVar15 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar15 + uRam000000018301e4f8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e590 ^ uVar15;
      }
      uRam000000018301e5b8 = uVar13 & 0xffffffff;
      uRam000000018301e510 = func_0x00018350fcb0(SUB161(auVar38 ^ _UNK_180019100,5) ^ uVar6);
      uVar15 = uRam000000018301e510 * -0x768ff0ad45af5ca1;
      uVar6 = uVar15 >> 1 | uVar15;
      uVar6 = uVar6 >> 2 | uVar6;
      uVar6 = uVar6 >> 4 | uVar6;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = uVar6 >> 0x10 | uVar6;
      uVar6 = uVar6 >> 0x20 | uVar6;
      uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar15 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
               0x40 ^ uVar15;
      uRam000000018301e3e0 = uVar13 & 0xffffffff ^ uVar7;
      uRam000000018301e298 =
           (uRam000000018301e298 ^ uVar15) + uRam000000018301e3e0 ^ 0x18dd6d6613bccaf5;
      uRam000000018301e2a8 =
           (uRam000000018301e2a8 * 0x41272c7893b80c6b ^ uRam000000018301e298) + uVar15;
      uRam000000018301e2d8 = uRam000000018301e2a8 ^ uRam000000018301e298;
      uVar1 = (uint)uRam000000018301e3e0 << 0xc | (uint)uRam000000018301e3e0 >> 0x14;
      uVar6 = (ulonglong)uVar1 ^ 0x84222325;
      uVar7 = uVar6 ^ uRam000000018301e5a0;
      lVar14 = uVar6 + uRam000000018301e620;
      uVar6 = uVar7 + lVar14;
      uVar15 = (uVar53 ^ uRam000000018301e620) + uVar53 + uRam000000018301e5a0;
      uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar7;
      uVar6 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar53 ^ uRam000000018301e620;
      uRam000000018301e5e8 =
           func_0x00018350fcb0((uVar6 << 0x1d | uVar6 >> 0x23) - (uVar53 + uRam000000018301e5a0) ^
                               (uVar7 << 0x1d | uVar7 >> 0x23) - lVar14);
      uVar6 = uRam000000018301e5e8 ^ uVar1;
      uVar20 = (uint)uVar5;
      uVar2 = uVar1 & uVar20;
      uVar11 = uVar1 ^ uVar20;
      auVar84._8_4_ = 0xffffffff;
      auVar84._0_8_ = 0xffffffffffffffff;
      auVar84._12_4_ = 0xffffffff;
      uVar3 = SUB164(auVar95 ^ auVar84,0);
      uVar5 = ((((ulonglong)_UNK_180019180 * (ulonglong)uVar11 << 0x20) +
                (ulonglong)_UNK_180019170 * (ulonglong)uVar11 +
                ((ulonglong)(uVar1 | uVar20) * (ulonglong)_UNK_180019160 << 0x20) +
                (ulonglong)_UNK_180019150 * (ulonglong)(uVar1 | uVar20) +
               ((ulonglong)_UNK_180019140 * (ulonglong)uVar2 << 0x20) +
               (ulonglong)_UNK_180019130 * (ulonglong)uVar2 +
               ((ulonglong)_UNK_180019120 * (uVar5 & 0xffffffff) << 0x20) +
               (ulonglong)_UNK_180019110 * (uVar5 & 0xffffffff) +
               (ulonglong)uVar1 * (ulonglong)_UNK_180019110 +
               ((ulonglong)uVar1 * (ulonglong)_UNK_180019120 << 0x20)) -
              ((ulonglong)uVar3 * (ulonglong)_UNK_180019260 +
               ((ulonglong)_UNK_180019270 * (ulonglong)uVar3 +
                (SUB168(auVar95 ^ auVar84,0) >> 0x20) * (ulonglong)_UNK_180019260 << 0x20) +
               ((ulonglong)(uVar1 ^ 0xffffffff) * (ulonglong)_UNK_180019240 + _UNK_180019250 << 0x20
               ) + (ulonglong)_UNK_180019230 * (ulonglong)(uVar1 ^ 0xffffffff) +
              ((ulonglong)uVar11 * (ulonglong)_UNK_180019220 << 0x20) +
              (ulonglong)_UNK_180019210 * (ulonglong)uVar11 +
              ((ulonglong)uVar2 * (ulonglong)_UNK_180019200 << 0x20) +
              (ulonglong)_UNK_1800191f0 * (ulonglong)uVar2 +
              ((uVar5 & 0xffffffff) * (ulonglong)_UNK_1800191e0 << 0x20) +
              (ulonglong)_UNK_1800191d0 * (uVar5 & 0xffffffff) +
              (ulonglong)_UNK_1800191b0 * (ulonglong)uVar1 +
              ((ulonglong)uVar1 * (ulonglong)_UNK_1800191c0 << 0x20))) + 0xd1aba682ae8fcbd2;
      uRam000000018301e3c0 = uRam000000018301e378 ^ uVar6 ^ uVar5;
      uRam000000018301e290 = (uRam000000018301e290 ^ uVar6) + uVar5 ^ 0xfe68fca4a91215ef;
      uRam000000018301e418 =
           (uRam000000018301e418 * -0x32ca238bbf7c1b3d ^ uRam000000018301e290) + uVar6;
      uRam000000018301e440 = uRam000000018301e418 ^ uRam000000018301e290;
      uStack_1a4 = (uint)uVar5;
      uVar5 = uVar5 & 0xffffffff;
      uVar7 = uVar5 ^ 0x84222325;
      uVar6 = ((uRam000000018301e290 ^ uVar7) +
              (ulonglong)((uint)uRam000000018301e290 & (uint)uVar7) * 2) *
              (uVar48 - uRam000000018301e560);
      uVar6 = (uVar6 | uRam000000018301e2a8) + (uVar6 & uRam000000018301e2a8);
      uVar6 = uVar6 * 0x2000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 << 0x11 ^ uVar6;
      uRam000000018301e520 = uVar5;
      uRam000000018301e638 =
           func_0x00018350fcb0((uVar7 ^ uVar48 | uVar6) +
                               (ulonglong)((uint)(uVar7 ^ uVar48) & (uint)uVar6));
      uVar6 = uVar5 + uVar48 + (ulonglong)(uVar19 & uStack_1a4) * -2;
      uRam000000018301e630 =
           (uRam000000018301e630 ^ uVar5 ^ uRam000000018301e638) + uVar6 ^ 0x7bdbd4f503c16c40;
      uRam000000018301e2f8 =
           (uRam000000018301e2f8 * -0x621f1286dc99c3f3 ^ uRam000000018301e630) +
           (uVar5 ^ uRam000000018301e638);
      uRam000000018301e2e8 = uRam000000018301e2f8 ^ uRam000000018301e630;
      uRam000000018301e298 = uVar6 & 0xffffffff;
      uStack_1f0 = (uint)uVar6 << 8 | (uint)uVar6 >> 0x18;
      uStack_1c4 = (uint)uVar13 + uStack_1f0;
      auVar39._4_4_ = 0;
      auVar39._0_4_ = uStack_1c4 ^ 0x84222325;
      auVar39._8_4_ = uVar1;
      auVar39._12_4_ = 0;
      auVar21 = pshufb(auVar39 ^ _UNK_180019280,auVar24);
      uVar5 = auVar21._8_8_ + auVar21._0_8_;
      uVar6 = uVar5 + uRam000000018301e2d8;
      if (auVar21._4_4_ < 0) {
        uVar6 = uRam000000018301e250 ^ uVar5;
      }
      uRam000000018301e348 = func_0x00018350fcb0(SUB161(auVar39 ^ _UNK_180019280,5) ^ uVar6);
      uVar1 = uVar1 ^ uStack_1c4;
      uRam000000018301e2c0 = (ulonglong)uVar1;
      uRam000000018301e468 =
           (uRam000000018301e468 ^ uRam000000018301e348 * 0x800000) + uRam000000018301e2c0 ^
           0xe02672122cb037cf;
      uRam000000018301e4c8 =
           (uRam000000018301e4c8 * -0xc5268f547a6b9b9 ^ uRam000000018301e468) +
           uRam000000018301e348 * 0x800000;
      uStack_208 = uVar1 << 7 | uVar1 >> 0x19;
      uRam000000018301e5a8 = uRam000000018301e4c8 ^ uRam000000018301e468;
      auVar40._8_8_ = _UNK_180019298;
      auVar40._0_8_ = CONCAT44(0,uVar12) ^ 0x84222325;
      auVar24 = pshufb(auVar40 ^ _UNK_1800192a0,auVar24);
      uVar5 = auVar24._8_8_ + auVar24._0_8_;
      uVar6 = uVar5 + uRam000000018301e5d8;
      if (auVar24._4_4_ < 0) {
        uVar6 = uRam000000018301e5e0 ^ uVar5;
      }
      uRam000000018301e420 = func_0x00018350fcb0(SUB161(auVar40 ^ _UNK_1800192a0,5) ^ uVar6);
      uVar6 = uRam000000018301e420 & 0xfffffffffc000000;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = CONCAT44(0,uVar12);
      auVar59._8_4_ = 0xffffffff;
      auVar59._0_8_ = 0xffffffffffffffff;
      auVar59._12_4_ = 0xffffffff;
      uVar1 = SUB164(auVar59 ^ auVar70,0);
      uVar19 = uVar12 & (uint)UNK_180017990;
      uVar11 = uVar12 | (uint)UNK_180017990;
      uVar20 = SUB164(auVar70 ^ _UNK_180017990,0);
      uRam000000018301e5d8 =
           (ulonglong)uVar1 * (ulonglong)_UNK_1800192d0 +
           ((SUB168(auVar59 ^ auVar70,0) >> 0x20) * (ulonglong)_UNK_1800192d0 +
            (ulonglong)_UNK_1800192b0 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_1800192c0 * (ulonglong)uVar12 +
           ((ulonglong)uVar12 * (ulonglong)_UNK_1800192b0 << 0x20) +
           (-((ulonglong)uVar20 * (ulonglong)_UNK_180019360 +
             ((ulonglong)_UNK_180019370 * (ulonglong)uVar20 +
              (SUB168(auVar70 ^ _UNK_180017990,0) >> 0x20) * (ulonglong)_UNK_180019360 << 0x20)) -
           (((ulonglong)uVar11 * (ulonglong)_UNK_180019350 << 0x20) +
            (ulonglong)_UNK_180019340 * (ulonglong)uVar11 +
           ((ulonglong)uVar19 * (ulonglong)_UNK_180019330 << 0x20 |
           (ulonglong)_UNK_180019320 * (ulonglong)uVar19) +
           ((ulonglong)uVar12 * (ulonglong)_UNK_180019310 << 0x20) +
           (ulonglong)_UNK_180019300 * (ulonglong)uVar12)) + 0x4a1ebb77ad3d99b2;
      uRam000000018301e638 = uRam000000018301e548 ^ uVar6 ^ uRam000000018301e5d8;
      uRam000000018301e5a8 =
           (uRam000000018301e5a8 ^ uVar6) + uRam000000018301e5d8 ^ 0xc268d7dc45ebf840;
      uRam000000018301e628 =
           (uRam000000018301e628 * 0xca53030534bc023 ^ uRam000000018301e5a8) + uVar6;
      uRam000000018301e570 = uRam000000018301e628 ^ uRam000000018301e5a8;
      uVar12 = (uint)uRam000000018301e5d8;
      uRam000000018301e5d8 = uRam000000018301e5d8 & 0xffffffff;
      uStack_158 = uStack_158 & 0xffffffff;
      uStack_160 = uStack_160 & 0xffffffff;
      uStack_1c0 = uStack_1e0;
      uStack_19c = uStack_1b4;
      uStack_198 = uStack_1a4;
      uStack_194 = uStack_1bc;
      uStack_170 = uStack_1b8;
      uStack_128 = uStack_1f0;
      switch((int)uVar12 < param_3) {
      case false:
        goto code_r0x000183506a12;
      }
    } while( true );
  }
code_r0x000183506a76:
  *param_1 = *param_2 + uStack_1f8;
  uVar12 = param_2[1];
  uVar6 = (ulonglong)uVar12 ^ 0x84222325;
  uVar5 = uVar6 ^ uRam000000018301e630;
  uVar13 = uStack_1a0 ^ uRam000000018301e428;
  lVar16 = uVar6 + uRam000000018301e428;
  lVar14 = uRam000000018301e630 + uStack_1a0;
  uVar6 = uVar5 + lVar16;
  uVar7 = uVar13 + lVar14;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar13 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar13;
  uRam000000018301e5b0 =
       func_0x00018350fcb0((uVar13 << 0x1d | uVar13 >> 0x23) - lVar14 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar16);
  uVar6 = uRam000000018301e5b0 ^ uVar12;
  uVar1 = uVar12 & uStack_1a0;
  uVar20 = uVar12 | uStack_1a0;
  uVar19 = uVar12 ^ 0xffffffff;
  uVar5 = ((((ulonglong)_UNK_180019430 * (ulonglong)uVar19 + _UNK_180019440 << 0x20) +
            (ulonglong)_UNK_180019420 * (ulonglong)uVar19 +
           ((ulonglong)(uVar12 ^ uStack_1a0) * (ulonglong)_UNK_180019410 << 0x20) +
           (ulonglong)_UNK_180019400 * (ulonglong)(uVar12 ^ uStack_1a0) +
           ((ulonglong)_UNK_1800193f0 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_1800193e0 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_1800193d0 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_1800193c0 * (ulonglong)uVar1 +
           ((ulonglong)_UNK_1800193b0 * (ulonglong)uStack_1a0 << 0x20) +
           (ulonglong)_UNK_1800193a0 * (ulonglong)uStack_1a0 +
           ((ulonglong)_UNK_180019390 * (ulonglong)uVar12 << 0x20) +
           (ulonglong)_UNK_180019380 * (ulonglong)uVar12) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_1800194e0 + _UNK_1800194f0 << 0x20) +
           (ulonglong)_UNK_1800194d0 * (ulonglong)uVar19 +
          ((ulonglong)uVar20 * (ulonglong)_UNK_1800194c0 << 0x20) +
          (ulonglong)_UNK_1800194b0 * (ulonglong)uVar20 +
          ((ulonglong)uVar1 * (ulonglong)_UNK_1800194c0 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_UNK_1800194b0 +
          ((ulonglong)uStack_1a0 * (ulonglong)_UNK_1800194a0 << 0x20) +
          (ulonglong)_UNK_180019490 * (ulonglong)uStack_1a0 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019480 << 0x20) +
          (ulonglong)_UNK_180019470 * (ulonglong)uVar12)) + 0xd639547296b923ca;
  uRam000000018301e420 = uRam000000018301e490 ^ uVar6 ^ uVar5;
  uRam000000018301e408 = (uRam000000018301e408 ^ uVar6) + uVar5 ^ 0x425ed0e9a0d00de6;
  uRam000000018301e4f8 = (uRam000000018301e4f8 * 0x4f57da2067510ed3 ^ uRam000000018301e408) + uVar6;
  uRam000000018301e2a8 = uRam000000018301e4f8 ^ uRam000000018301e408;
  uRam000000018301e368 = uVar5 & 0xffffffff;
  param_1[1] = (int)uVar5;
  auVar24 = _UNK_1800170c0;
  uVar12 = param_2[2];
  auVar41._4_4_ = 0;
  auVar41._0_4_ = uVar12 ^ 0x84222325;
  auVar41._8_4_ = uStack_1d8;
  auVar41._12_4_ = 0;
  auVar21 = pshufb(auVar41 ^ _UNK_180019500,_UNK_1800170c0);
  uVar5 = auVar21._8_8_ + auVar21._0_8_;
  uVar6 = uVar5 + uRam000000018301e488;
  if (auVar21._4_4_ < 0) {
    uVar6 = uRam000000018301e318 ^ uVar5;
  }
  uRam000000018301e540 = func_0x00018350fcb0(SUB161(auVar41 ^ _UNK_180019500,5) ^ uVar6);
  uVar6 = (uRam000000018301e540 << 6 | uRam000000018301e540 >> 0x3a) ^ (ulonglong)uVar12;
  uVar1 = uVar12 & uStack_1d8;
  uVar20 = uVar12 | uStack_1d8;
  uVar19 = uVar12 ^ uStack_1d8;
  uVar5 = ((((ulonglong)_UNK_180019580 * (ulonglong)uVar19 << 0x20) +
            (ulonglong)_UNK_180019570 * (ulonglong)uVar19 +
            ((ulonglong)_UNK_180019560 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)_UNK_180019550 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_180019540 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_180019530 * (ulonglong)uVar1 +
           ((ulonglong)_UNK_180019520 * (ulonglong)uStack_1d8 << 0x20) +
           (ulonglong)_UNK_180019510 * (ulonglong)uStack_1d8 +
           ((ulonglong)uVar12 * (ulonglong)_UNK_180019520 << 0x20) +
           (ulonglong)uVar12 * (ulonglong)_UNK_180019510) -
          (((ulonglong)(uStack_1d8 ^ 0xffffffff) * (ulonglong)_UNK_1800195c0 + _UNK_180019610 <<
           0x20) + (ulonglong)_UNK_1800195b0 * (ulonglong)(uStack_1d8 ^ 0xffffffff) +
           ((ulonglong)uVar19 * (ulonglong)_UNK_1800195e0 << 0x20) +
           (ulonglong)_UNK_1800195d0 * (ulonglong)uVar19 +
           ((ulonglong)uVar1 * (ulonglong)_UNK_1800195e0 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_UNK_1800195d0 +
           ((ulonglong)uStack_1d8 * (ulonglong)_UNK_1800195c0 << 0x20) +
           (ulonglong)uStack_1d8 * (ulonglong)_UNK_1800195b0 +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019600 << 0x20) +
          (ulonglong)_UNK_1800195f0 * (ulonglong)uVar20)) + 0xb7571a3625944390;
  uRam000000018301e4f8 = uRam000000018301e630 ^ uVar6 ^ uVar5;
  uRam000000018301e458 = (uRam000000018301e458 ^ uVar6) + uVar5 ^ 0x4081133969b279cb;
  uRam000000018301e280 = (uRam000000018301e280 * 0x687bf3a094679729 ^ uRam000000018301e458) + uVar6;
  uRam000000018301e548 = uRam000000018301e280 ^ uRam000000018301e458;
  uRam000000018301e5b0 = uVar5 & 0xffffffff;
  param_1[2] = (int)uVar5;
  uVar12 = param_2[3];
  uVar6 = (ulonglong)uVar12 ^ 0x84222325 ^ uRam000000018301e538;
  uVar5 = uStack_1a4 ^ uRam000000018301e288;
  lVar16 = ((ulonglong)uVar12 ^ 0x84222325) + uRam000000018301e288;
  lVar14 = uRam000000018301e538 + uStack_1a4;
  uVar13 = uVar6 + lVar16;
  uVar7 = uVar5 + lVar14;
  uVar6 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ uVar6;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uRam000000018301e620 =
       func_0x00018350fcb0((uVar5 << 0x1d | uVar5 >> 0x23) - lVar14 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar16);
  uVar20 = uVar12 & uStack_1a4;
  uVar19 = uStack_1a4 ^ 0xffffffff;
  uVar6 = uRam000000018301e620 * -0x6c6406948131225 << 0x3b |
          uRam000000018301e620 * -0x6c6406948131225 >> 5;
  uVar5 = ((ulonglong)_UNK_1800196b0 * (ulonglong)uVar19 + _UNK_1800196c0 << 0x20) +
          (ulonglong)_UNK_1800196a0 * (ulonglong)uVar19 +
          ((ulonglong)(uVar12 ^ uStack_1a4) * (ulonglong)_UNK_180019690 << 0x20) +
          (ulonglong)_UNK_180019680 * (ulonglong)(uVar12 ^ uStack_1a4) +
          ((ulonglong)_UNK_180019670 * (ulonglong)uVar20 << 0x20) +
          (ulonglong)_UNK_180019660 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_180019650 * (ulonglong)uStack_1a4 << 0x20) +
          (ulonglong)_UNK_180019640 * (ulonglong)uStack_1a4 +
          ((ulonglong)_UNK_180019630 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_180019620 * (ulonglong)uVar12 +
          (-(((ulonglong)uVar19 * (ulonglong)_UNK_180019790 + _UNK_1800197a0 << 0x20) +
            (ulonglong)_UNK_180019780 * (ulonglong)uVar19) -
          (((ulonglong)(uVar12 ^ 0xffffffff) * (ulonglong)_UNK_180019760 + _UNK_180019770 << 0x20) +
           (ulonglong)_UNK_180019750 * (ulonglong)(uVar12 ^ 0xffffffff) +
          ((ulonglong)(uVar12 | uStack_1a4) * (ulonglong)_UNK_180019740 << 0x20) +
          (ulonglong)_UNK_180019730 * (ulonglong)(uVar12 | uStack_1a4) +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019740 << 0x20) +
          (ulonglong)uVar20 * (ulonglong)_UNK_180019730 +
          ((ulonglong)uStack_1a4 * (ulonglong)_UNK_180019720 << 0x20) +
          (ulonglong)_UNK_180019710 * (ulonglong)uStack_1a4 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019700 << 0x20) +
          (ulonglong)_UNK_1800196f0 * (ulonglong)uVar12)) + 0x5fe6913a531384d4;
  uRam000000018301e390 = uRam000000018301e558 ^ uVar6 ^ uVar5;
  uRam000000018301e330 = (uRam000000018301e330 ^ uVar6) + uVar5 ^ 0x279bd46acca12b97;
  uRam000000018301e3b8 = (uRam000000018301e3b8 * 0x7b57329e32e761c3 ^ uRam000000018301e330) + uVar6;
  uRam000000018301e568 = uRam000000018301e3b8 ^ uRam000000018301e330;
  uRam000000018301e5c0 = uVar5 & 0xffffffff;
  param_1[3] = (int)uVar5;
  uVar12 = param_2[4];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = CONCAT44(0,uStack_208);
  auVar42._4_4_ = 0;
  auVar42._0_4_ = uVar12 ^ 0x84222325;
  auVar42._8_4_ = uStack_208;
  auVar42._12_4_ = 0;
  auVar24 = pshufb(auVar42 ^ _UNK_1800197b0,auVar24);
  uVar5 = auVar24._8_8_ + auVar24._0_8_;
  uVar6 = uVar5 + uRam000000018301e378;
  if (auVar24._4_4_ < 0) {
    uVar6 = uRam000000018301e288 ^ uVar5;
  }
  uRam000000018301e338 = func_0x00018350fcb0(SUB161(auVar42 ^ _UNK_1800197b0,5) ^ uVar6);
  auVar82._8_4_ = 0xffffffff;
  auVar82._0_8_ = 0xffffffffffffffff;
  auVar82._12_4_ = 0xffffffff;
  uVar19 = uVar12 ^ 0xffffffff;
  uVar20 = SUB164(auVar89 ^ auVar82,0);
  uVar6 = CONCAT44(0,uStack_208) * (ulonglong)uVar12 ^ uRam000000018301e338;
  uVar5 = uVar6 << 0x20 | uVar6 >> 0x20;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar5;
  uVar6 = (((ulonglong)uVar20 * (ulonglong)_UNK_180019820 +
            ((SUB168(auVar89 ^ auVar82,0) >> 0x20) * (ulonglong)_UNK_180019820 +
             (ulonglong)_UNK_1800197e0 * (ulonglong)uVar20 << 0x20) +
           ((ulonglong)_UNK_1800197c0 * (ulonglong)uVar19 + _UNK_180019810 << 0x20) +
           (ulonglong)_UNK_180019800 * (ulonglong)uVar19 +
           (ulonglong)_UNK_1800197f0 * (ulonglong)uStack_208 +
           ((ulonglong)uStack_208 * (ulonglong)_UNK_1800197e0 << 0x20) +
           (ulonglong)_UNK_1800197d0 * (ulonglong)uVar12 +
           ((ulonglong)uVar12 * (ulonglong)_UNK_1800197c0 << 0x20)) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_1800198c0 + _UNK_1800198d0 << 0x20) +
           (ulonglong)_UNK_1800198b0 * (ulonglong)uVar19 +
          ((ulonglong)(uVar12 | uStack_208) * (ulonglong)_UNK_1800198a0 << 0x20) +
          (ulonglong)_UNK_180019890 * (ulonglong)(uVar12 | uStack_208) +
          ((ulonglong)(uVar12 & uStack_208) * (ulonglong)_UNK_1800198a0 << 0x20) +
          (ulonglong)(uVar12 & uStack_208) * (ulonglong)_UNK_180019890 +
          ((ulonglong)uStack_208 * (ulonglong)_UNK_180019880 << 0x20) +
          (ulonglong)_UNK_180019870 * (ulonglong)uStack_208 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019860 << 0x20) +
          (ulonglong)_UNK_180019850 * (ulonglong)uVar12)) + 0x676f6e6943b0037f;
  uRam000000018301e448 = uRam000000018301e280 ^ uVar5 ^ uVar6;
  uRam000000018301e5e8 = (uRam000000018301e5e8 ^ uVar5) + uVar6 ^ 0xf46c0be7bb1ad9d;
  uRam000000018301e280 = (uRam000000018301e280 * 0x660f18f036fec32b ^ uRam000000018301e5e8) + uVar5;
  uRam000000018301e348 = uRam000000018301e280 ^ uRam000000018301e5e8;
  uRam000000018301e360 = uVar6 & 0xffffffff;
  param_1[4] = (int)uVar6;
  uVar12 = param_2[5];
  uVar5 = CONCAT44(0,uStack_1a8);
  uVar13 = CONCAT44(0,uVar12) ^ 0x84222325;
  uVar6 = ((uRam000000018301e568 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e568 & (uint)uVar13) * 2) *
          (uVar5 - lRam000000018301e470);
  uVar6 = (uVar6 | uRam000000018301e338) + (uVar6 & uRam000000018301e338);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018301e5c0 =
       func_0x00018350fcb0((uVar13 ^ uVar5 | uVar6) +
                           (ulonglong)((uint)(uVar13 ^ uVar5) & (uint)uVar6));
  auVar90._8_8_ = 0;
  auVar90._0_8_ = CONCAT44(0,uVar12);
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar5;
  uVar20 = uVar12 & uStack_1a8;
  uVar1 = SUB164(auVar90 ^ auVar82,0);
  uVar6 = (uVar12 | uStack_1a8) ^ uRam000000018301e5c0;
  uVar6 = uVar6 << 0x31 | uVar6 >> 0xf;
  uVar19 = SUB164(auVar51 ^ auVar82,0);
  uVar5 = (((ulonglong)uVar1 * (ulonglong)_UNK_180019920 +
            ((ulonglong)_UNK_180019970 * (ulonglong)uVar1 +
             (SUB168(auVar90 ^ auVar82,0) >> 0x20) * (ulonglong)_UNK_180019920 << 0x20) +
            ((ulonglong)(uVar12 ^ uStack_1a8) * (ulonglong)_UNK_180019960 << 0x20) +
            (ulonglong)_UNK_180019950 * (ulonglong)(uVar12 ^ uStack_1a8) +
           ((ulonglong)_UNK_180019940 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_180019930 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_180019910 * (ulonglong)uStack_1a8 << 0x20) +
           (ulonglong)_UNK_180019900 * (ulonglong)uStack_1a8 +
           ((ulonglong)_UNK_1800198f0 * (ulonglong)uVar12 << 0x20) +
           (ulonglong)_UNK_1800198e0 * (ulonglong)uVar12) -
          ((ulonglong)uVar19 * (_UNK_1800199e0 & 0xffffffff) +
           ((ulonglong)_UNK_180019a10 * (ulonglong)uVar19 +
            (SUB168(auVar51 ^ auVar82,0) >> 0x20) * (_UNK_1800199e0 & 0xffffffff) << 0x20) +
          ((ulonglong)(uVar12 | uStack_1a8) * (ulonglong)_UNK_180019a00 << 0x20) +
          (ulonglong)_UNK_1800199f0 * (ulonglong)(uVar12 | uStack_1a8) +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019a00 << 0x20) +
          (ulonglong)uVar20 * (ulonglong)_UNK_1800199f0 +
          ((ulonglong)uStack_1a8 * (ulonglong)_UNK_1800199d0 << 0x20) +
          (ulonglong)_UNK_1800199c0 * (ulonglong)uStack_1a8 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_1800199b0 << 0x20) +
          (ulonglong)_UNK_1800199a0 * (ulonglong)uVar12)) + 0xad1ca2b223437221;
  uRam000000018301e308 = uRam000000018301e5c8 ^ uVar6 ^ uVar5;
  uRam000000018301e570 = (uRam000000018301e570 ^ uVar6) + uVar5 ^ 0x78288bd149c3dfaf;
  uRam000000018301e438 = (uRam000000018301e438 * 0x131be1f7c34b453f ^ uRam000000018301e570) + uVar6;
  uRam000000018301e368 = uRam000000018301e438 ^ uRam000000018301e570;
  uRam000000018301e450 = uVar5 & 0xffffffff;
  param_1[5] = (int)uVar5;
  uVar12 = param_2[6];
  uVar5 = CONCAT44(0,uStack_1e0);
  uVar13 = CONCAT44(0,uVar12) ^ 0x84222325;
  uVar6 = ((uRam000000018301e4f0 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e4f0 & (uint)uVar13) * 2) *
          (uVar5 - uRam000000018301e618);
  uVar6 = (uVar6 | uRam000000018301e270) + (uVar6 & uRam000000018301e270);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018301e5e8 =
       func_0x00018350fcb0((uVar13 ^ uVar5 | uVar6) +
                           (ulonglong)((uint)(uVar13 ^ uVar5) & (uint)uVar6));
  auVar71._8_8_ = 0;
  auVar71._0_8_ = uVar5;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = CONCAT44(0,uVar12);
  uVar11 = uVar12 & uStack_1e0;
  uVar1 = uVar12 | uStack_1e0;
  auVar85._8_4_ = 0xffffffff;
  auVar85._0_8_ = 0xffffffffffffffff;
  auVar85._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar71 ^ auVar85,0);
  uVar6 = (uRam000000018301e5e8 ^ uVar5) * -0x22c974e404c6e01;
  uVar19 = SUB164(auVar60 ^ auVar85,0);
  uVar5 = (ulonglong)uVar20 * (ulonglong)_UNK_180019a60 +
          ((ulonglong)_UNK_180019a90 * (ulonglong)uVar20 +
           (SUB168(auVar71 ^ auVar85,0) >> 0x20) * (ulonglong)_UNK_180019a60 << 0x20) +
          ((ulonglong)_UNK_180019a80 * (ulonglong)uVar1 << 0x20) +
          (ulonglong)_UNK_180019a70 * (ulonglong)uVar1 +
          ((ulonglong)uVar11 * (ulonglong)_UNK_180019a80 << 0x20) +
          (ulonglong)uVar11 * (ulonglong)_UNK_180019a70 +
          ((ulonglong)_UNK_180019a50 * (ulonglong)uStack_1e0 << 0x20) +
          (ulonglong)_UNK_180019a40 * (ulonglong)uStack_1e0 +
          ((ulonglong)_UNK_180019a30 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_180019a20 * (ulonglong)uVar12 +
          (-((ulonglong)uVar19 * (_UNK_180019b00 & 0xffffffff) +
            ((ulonglong)_UNK_180019b70 * (ulonglong)uVar19 +
             (SUB168(auVar60 ^ auVar85,0) >> 0x20) * (_UNK_180019b00 & 0xffffffff) << 0x20)) -
          (((ulonglong)(uVar12 ^ uStack_1e0) * (ulonglong)_UNK_180019b60 << 0x20) +
           (ulonglong)_UNK_180019b50 * (ulonglong)(uVar12 ^ uStack_1e0) +
           ((ulonglong)uVar1 * (ulonglong)_UNK_180019b40 << 0x20) +
           (ulonglong)_UNK_180019b30 * (ulonglong)uVar1 +
          ((ulonglong)uVar11 * (ulonglong)_UNK_180019b20 << 0x20) +
          (ulonglong)_UNK_180019b10 * (ulonglong)uVar11 +
          ((ulonglong)uStack_1e0 * (ulonglong)_UNK_180019af0 << 0x20) +
          (ulonglong)_UNK_180019ae0 * (ulonglong)uStack_1e0 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019ad0 << 0x20) +
          (ulonglong)_UNK_180019ac0 * (ulonglong)uVar12)) + 0x231e809a082408d4;
  uRam000000018301e3e8 = uRam000000018301e248 ^ uVar6 ^ uVar5;
  uRam000000018301e5e0 = (uRam000000018301e5e0 ^ uVar6) + uVar5 ^ 0xb940c3c285f4aa83;
  uRam000000018301e518 = (uRam000000018301e518 * 0xa9a24062b135e27 ^ uRam000000018301e5e0) + uVar6;
  uRam000000018301e3d0 = uRam000000018301e518 ^ uRam000000018301e5e0;
  uRam000000018301e298 = uVar5 & 0xffffffff;
  param_1[6] = (int)uVar5;
  auVar24 = _UNK_1800170c0;
  uVar12 = param_2[7];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = CONCAT44(0,uStack_1ac);
  auVar43._4_4_ = 0;
  auVar43._0_4_ = uVar12 ^ 0x84222325;
  auVar43._8_4_ = uStack_1ac;
  auVar43._12_4_ = 0;
  auVar21 = pshufb(auVar43 ^ _UNK_180019b80,_UNK_1800170c0);
  uVar5 = auVar21._8_8_ + auVar21._0_8_;
  uVar6 = uVar5 + uRam000000018301e540;
  if (auVar21._4_4_ < 0) {
    uVar6 = uRam000000018301e360 ^ uVar5;
  }
  uRam000000018301e558 = func_0x00018350fcb0(SUB161(auVar43 ^ _UNK_180019b80,5) ^ uVar6);
  uVar6 = CONCAT44(0,uStack_1ac) * (ulonglong)uVar12 ^ uRam000000018301e558;
  uVar6 = (uVar6 << 0x27 | uVar6 >> 0x19) >> 9 | (uVar6 >> 0x19) << 0x37;
  uVar1 = uVar12 & uStack_1ac;
  uVar20 = uVar12 | uStack_1ac;
  uVar19 = uVar12 ^ uStack_1ac;
  uVar11 = SUB164(auVar91 ^ auVar85,0);
  uVar5 = ((((ulonglong)_UNK_180019c00 * (ulonglong)uVar19 << 0x20) +
            (ulonglong)_UNK_180019bf0 * (ulonglong)uVar19 +
            ((ulonglong)_UNK_180019be0 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)_UNK_180019bd0 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_180019bc0 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_180019bb0 * (ulonglong)uVar1 +
           ((ulonglong)_UNK_180019ba0 * (ulonglong)uStack_1ac << 0x20) +
           (ulonglong)_UNK_180019b90 * (ulonglong)uStack_1ac +
           ((ulonglong)uVar12 * (ulonglong)_UNK_180019ba0 << 0x20) +
           (ulonglong)uVar12 * (ulonglong)_UNK_180019b90) -
          ((ulonglong)uVar11 * (ulonglong)_UNK_180019c30 +
           ((SUB168(auVar91 ^ auVar85,0) >> 0x20) * (ulonglong)_UNK_180019c30 +
            (ulonglong)_UNK_180019c40 * (ulonglong)uVar11 << 0x20) +
           ((ulonglong)uVar19 * (ulonglong)_UNK_180019c60 << 0x20) +
           (ulonglong)_UNK_180019c50 * (ulonglong)uVar19 +
           ((ulonglong)uVar1 * (ulonglong)_UNK_180019c60 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_UNK_180019c50 +
           ((ulonglong)uStack_1ac * (ulonglong)_UNK_180019c40 << 0x20) +
           (ulonglong)uStack_1ac * (ulonglong)_UNK_180019c30 +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019c80 << 0x20) +
          (ulonglong)_UNK_180019c70 * (ulonglong)uVar20)) + 0x98dd6eef838f8e68;
  uRam000000018301e638 = uRam000000018301e378 ^ uVar6 ^ uVar5;
  uRam000000018301e398 = (uRam000000018301e398 ^ uVar6) + uVar5 ^ 0xabeb6ecb1df5e662;
  uRam000000018301e430 = (uRam000000018301e430 * -0x1e0865528b0660ad ^ uRam000000018301e398) + uVar6
  ;
  uRam000000018301e3b0 = uRam000000018301e430 ^ uRam000000018301e398;
  uRam000000018301e4f8 = uVar5 & 0xffffffff;
  param_1[7] = (int)uVar5;
  uVar12 = param_2[8];
  uVar5 = (ulonglong)uStack_218;
  uVar13 = (ulonglong)uVar12 ^ 0x84222325;
  uVar6 = ((uRam000000018301e340 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e340 & (uint)uVar13) * 2) *
          (uVar5 - uRam000000018301e580);
  uVar6 = (uVar6 | uRam000000018301e270) + (uVar6 & uRam000000018301e270);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018301e4e0 =
       func_0x00018350fcb0((uVar13 ^ uVar5 | uVar6) +
                           (ulonglong)((uint)(uVar13 ^ uVar5) & (uint)uVar6));
  uVar5 = ~uRam000000018301e4e0 & (ulonglong)uVar12 & (ulonglong)UNK_180019c90 ^ uVar5;
  uVar11 = uVar12 & uStack_218;
  uVar20 = uVar12 | uStack_218;
  uVar19 = uVar12 ^ uStack_218;
  uVar1 = uStack_218 ^ 0xffffffff;
  uVar6 = ((ulonglong)_UNK_180019d50 * (ulonglong)uVar1 + _UNK_180019d60 << 0x20) +
          (ulonglong)_UNK_180019d40 * (ulonglong)uVar1 +
          ((ulonglong)_UNK_180019d30 * (ulonglong)uVar19 << 0x20) +
          (ulonglong)_UNK_180019d20 * (ulonglong)uVar19 +
          ((ulonglong)_UNK_180019d10 * (ulonglong)uVar20 << 0x20) +
          (ulonglong)_UNK_180019d00 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_180019cf0 * (ulonglong)uVar11 << 0x20) +
          (ulonglong)_UNK_180019ce0 * (ulonglong)uVar11 +
          ((ulonglong)_UNK_180019cd0 * (ulonglong)uStack_218 << 0x20) +
          (ulonglong)_UNK_180019cc0 * (ulonglong)uStack_218 +
          ((ulonglong)_UNK_180019cb0 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_180019ca0 * (ulonglong)uVar12 +
          (-(((ulonglong)uVar1 * (ulonglong)_UNK_180019e40 + _UNK_180019e50 << 0x20) +
            (ulonglong)_UNK_180019e30 * (ulonglong)uVar1) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_180019e20 << 0x20) +
           (ulonglong)_UNK_180019e10 * (ulonglong)uVar19 +
           ((ulonglong)uVar20 * (ulonglong)_UNK_180019e00 << 0x20) +
           (ulonglong)_UNK_180019df0 * (ulonglong)uVar20 +
          ((ulonglong)uVar11 * (ulonglong)_UNK_180019de0 << 0x20) +
          (ulonglong)_UNK_180019dd0 * (ulonglong)uVar11 +
          ((ulonglong)uStack_218 * (ulonglong)_UNK_180019dc0 << 0x20) +
          (ulonglong)_UNK_180019db0 * (ulonglong)uStack_218 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019da0 << 0x20) +
          (ulonglong)_UNK_180019d90 * (ulonglong)uVar12)) + 0xe3d4be48ef887bad;
  uRam000000018301e5c0 = uRam000000018301e438 ^ uVar5 ^ uVar6;
  uRam000000018301e420 = (uRam000000018301e420 ^ uVar5) + uVar6 ^ 0x3ffbce510e1119ff;
  uRam000000018301e638 = (uRam000000018301e638 * 0x56b5a5db07d30c7d ^ uRam000000018301e420) + uVar5;
  uRam000000018301e278 = uRam000000018301e638 ^ uRam000000018301e420;
  uRam000000018301e5e8 = uVar6 & 0xffffffff;
  param_1[8] = (int)uVar6;
  uVar12 = param_2[9];
  auVar44._4_4_ = 0;
  auVar44._0_4_ = uVar12 ^ 0x84222325;
  auVar44._8_4_ = uStack_1b0;
  auVar44._12_4_ = 0;
  auVar21 = pshufb(auVar44 ^ _UNK_180019e60,auVar24);
  uVar5 = auVar21._8_8_ + auVar21._0_8_;
  uVar6 = uVar5 + uRam000000018301e298;
  if (auVar21._4_4_ < 0) {
    uVar6 = uRam000000018301e520 ^ uVar5;
  }
  uRam000000018301e3d8 = func_0x00018350fcb0(SUB161(auVar44 ^ _UNK_180019e60,5) ^ uVar6);
  uVar6 = ((ulonglong)uStack_1b0 * (ulonglong)uVar12 ^ uRam000000018301e3d8 ^ (ulonglong)uStack_1b0)
          * 0x45cf66831f398c7b;
  uVar1 = uVar12 & uStack_1b0;
  uVar20 = uVar12 | uStack_1b0;
  uVar19 = uVar12 ^ uStack_1b0;
  uVar11 = uStack_1b0 ^ 0xffffffff;
  uVar5 = ((((ulonglong)_UNK_180019f20 * (ulonglong)uVar11 + _UNK_180019f30 << 0x20) +
            (ulonglong)_UNK_180019f10 * (ulonglong)uVar11 +
           ((ulonglong)_UNK_180019f00 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)_UNK_180019ef0 * (ulonglong)uVar19 +
           ((ulonglong)_UNK_180019ee0 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_180019ed0 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_180019ec0 * (ulonglong)uVar1 << 0x20) +
           (ulonglong)_UNK_180019eb0 * (ulonglong)uVar1 +
           ((ulonglong)_UNK_180019ea0 * (ulonglong)uStack_1b0 << 0x20) +
           (ulonglong)_UNK_180019e90 * (ulonglong)uStack_1b0 +
           ((ulonglong)uVar12 * (ulonglong)_UNK_180019e80 << 0x20) +
           (ulonglong)_UNK_180019e70 * (ulonglong)uVar12) -
          (((ulonglong)uVar11 * (ulonglong)_UNK_180019f70 + _UNK_180019fc0 << 0x20) +
           (ulonglong)_UNK_180019f60 * (ulonglong)uVar11 +
           ((ulonglong)uVar19 * (ulonglong)_UNK_180019f90 << 0x20) +
           (ulonglong)_UNK_180019f80 * (ulonglong)uVar19 +
           ((ulonglong)uVar1 * (ulonglong)_UNK_180019f90 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_UNK_180019f80 +
           ((ulonglong)uStack_1b0 * (ulonglong)_UNK_180019f70 << 0x20) +
           (ulonglong)uStack_1b0 * (ulonglong)_UNK_180019f60 +
          ((ulonglong)uVar20 * (ulonglong)_UNK_180019fb0 << 0x20) +
          (ulonglong)_UNK_180019fa0 * (ulonglong)uVar20)) + 0xb38d1a42e4ee8ae9;
  uRam000000018301e540 = (uRam000000018301e540 ^ uVar6) + uVar5 ^ 0x89765142f3c13483;
  uRam000000018301e560 = (uRam000000018301e560 * -0x271d41d178a15bc9 ^ uRam000000018301e540) + uVar6
  ;
  uRam000000018301e4e8 = uRam000000018301e560 ^ uRam000000018301e540;
  uRam000000018301e518 = uVar5 & 0xffffffff;
  param_1[9] = (int)uVar5;
  uVar12 = param_2[10];
  auVar45._4_4_ = 0;
  auVar45._0_4_ = uVar12 ^ 0x84222325;
  auVar45._8_4_ = uStack_1e8;
  auVar45._12_4_ = 0;
  auVar21 = pshufb(auVar45 ^ _UNK_180019fd0,auVar24);
  uVar5 = auVar21._8_8_ + auVar21._0_8_;
  uVar6 = uVar5 + uRam000000018301e530;
  if (auVar21._4_4_ < 0) {
    uVar6 = uRam000000018301e530 ^ uVar5;
  }
  uRam000000018301e3c8 = func_0x00018350fcb0(SUB161(auVar45 ^ _UNK_180019fd0,5) ^ uVar6);
  uVar1 = uVar12 & uStack_1e8;
  uVar20 = uVar12 | uStack_1e8;
  uVar19 = uVar12 ^ uStack_1e8;
  uVar6 = (uRam000000018301e3c8 & 0x7fffffffffff) >> 1 | uRam000000018301e3c8 & 0x7fffffffffff;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uRam000000018301e3c8 & 0x7fffffffffff) * -0x6fa8b1615f879b43;
  uVar5 = (((ulonglong)_UNK_18001a050 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)_UNK_18001a040 * (ulonglong)uVar19 +
           ((ulonglong)_UNK_18001a030 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_18001a020 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_18001a010 * (ulonglong)uVar1 << 0x20) +
          (ulonglong)_UNK_18001a000 * (ulonglong)uVar1 +
          ((ulonglong)_UNK_180019ff0 * (ulonglong)uStack_1e8 << 0x20) +
          (ulonglong)_UNK_180019fe0 * (ulonglong)uStack_1e8 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_180019ff0 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_UNK_180019fe0) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_18001a0f0 << 0x20) +
           (ulonglong)_UNK_18001a0e0 * (ulonglong)uVar19 +
           ((ulonglong)uVar20 * (ulonglong)_UNK_18001a0d0 << 0x20) +
           (ulonglong)_UNK_18001a0c0 * (ulonglong)uVar20 +
          ((ulonglong)uVar1 * (ulonglong)_UNK_18001a0b0 << 0x20) +
          (ulonglong)_UNK_18001a0a0 * (ulonglong)uVar1 +
          ((ulonglong)uStack_1e8 * (ulonglong)_UNK_18001a090 << 0x20) +
          (ulonglong)_UNK_18001a080 * (ulonglong)uStack_1e8 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a090 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_UNK_18001a080);
  uRam000000018301e490 = uRam000000018301e458 ^ uVar6 ^ uVar5;
  uRam000000018301e600 = (uRam000000018301e600 ^ uVar6) + uVar5 ^ 0x3ec6e3d2e68eb8b0;
  uRam000000018301e5f0 = (uRam000000018301e5f0 * -0x5e70395dd51a9d0f ^ uRam000000018301e600) + uVar6
  ;
  uRam000000018301e3b8 = uRam000000018301e5f0 ^ uRam000000018301e600;
  uRam000000018301e438 = uVar5 & 0xffffffff;
  param_1[10] = (int)uVar5;
  uVar12 = param_2[0xb];
  auVar46._4_4_ = 0;
  auVar46._0_4_ = uVar12 ^ 0x84222325;
  auVar46._8_4_ = uStack_1b4;
  auVar46._12_4_ = 0;
  auVar24 = pshufb(auVar46 ^ _UNK_18001a100,auVar24);
  uVar5 = auVar24._8_8_ + auVar24._0_8_;
  uVar6 = uVar5 + uRam000000018301e4c0;
  if (auVar24._4_4_ < 0) {
    uVar6 = uRam000000018301e618 ^ uVar5;
  }
  uRam000000018301e258 = func_0x00018350fcb0(SUB161(auVar46 ^ _UNK_18001a100,5) ^ uVar6);
  uVar6 = uRam000000018301e270 >> 1 | uRam000000018301e270;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  auVar66._8_8_ = 0;
  auVar66._0_8_ = CONCAT44(0,uVar12);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam000000018301e270 ^ CONCAT44(0,uVar12);
  uVar1 = uVar12 & uStack_1b4;
  uVar19 = uVar12 | uStack_1b4;
  auVar86._8_4_ = 0xffffffff;
  auVar86._0_8_ = 0xffffffffffffffff;
  auVar86._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar66 ^ auVar86,0);
  uVar5 = (ulonglong)uVar20 * (ulonglong)_UNK_18001a150 +
          ((ulonglong)_UNK_18001a180 * (ulonglong)uVar20 +
           (SUB168(auVar66 ^ auVar86,0) >> 0x20) * (ulonglong)_UNK_18001a150 << 0x20) +
          ((ulonglong)_UNK_18001a170 * (ulonglong)uVar19 << 0x20) +
          (ulonglong)_UNK_18001a160 * (ulonglong)uVar19 +
          ((ulonglong)uVar1 * (ulonglong)_UNK_18001a170 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_UNK_18001a160 +
          ((ulonglong)_UNK_18001a140 * (ulonglong)uStack_1b4 << 0x20) +
          (ulonglong)_UNK_18001a130 * (ulonglong)uStack_1b4 +
          ((ulonglong)_UNK_18001a120 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_18001a110 * (ulonglong)uVar12 +
          (-(((ulonglong)(uStack_1b4 ^ 0xffffffff) * (ulonglong)_UNK_18001a260 + _UNK_18001a270 <<
             0x20) + (ulonglong)_UNK_18001a250 * (ulonglong)(uStack_1b4 ^ 0xffffffff)) -
          (((ulonglong)(uVar12 ^ uStack_1b4) * (ulonglong)_UNK_18001a240 << 0x20) +
           (ulonglong)_UNK_18001a230 * (ulonglong)(uVar12 ^ uStack_1b4) +
           ((ulonglong)uVar19 * (ulonglong)_UNK_18001a220 << 0x20) +
           (ulonglong)_UNK_18001a210 * (ulonglong)uVar19 +
          ((ulonglong)uVar1 * (ulonglong)_UNK_18001a200 << 0x20) +
          (ulonglong)_UNK_18001a1f0 * (ulonglong)uVar1 +
          ((ulonglong)uStack_1b4 * (ulonglong)_UNK_18001a1e0 << 0x20) +
          (ulonglong)_UNK_18001a1d0 * (ulonglong)uStack_1b4 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a1c0 << 0x20) +
          (ulonglong)_UNK_18001a1b0 * (ulonglong)uVar12)) + 0xc06600b35a7ce6b7;
  uRam000000018301e3e0 = uRam000000018301e338 ^ uVar6 ^ uVar5;
  uRam000000018301e460 = (uRam000000018301e460 ^ uVar6) + uVar5 ^ 0x648151d2ce9b6f88;
  uRam000000018301e380 = (uRam000000018301e380 * -0x7b64150852a0ce91 ^ uRam000000018301e460) + uVar6
  ;
  uRam000000018301e268 = uRam000000018301e380 ^ uRam000000018301e460;
  uRam000000018301e2e8 = uVar5 & 0xffffffff;
  param_1[0xb] = (int)uVar5;
  uVar12 = param_2[0xc];
  auVar47._4_4_ = 0;
  auVar47._0_4_ = uVar12 ^ 0x84222325;
  auVar47._8_4_ = uStack_228;
  auVar47._12_4_ = 0;
  auVar24 = pshufb(auVar47 ^ _UNK_18001a280,_UNK_1800170c0);
  uVar5 = auVar24._8_8_ + auVar24._0_8_;
  uVar6 = uVar5 + uRam000000018301e298;
  if (auVar24._4_4_ < 0) {
    uVar6 = uRam000000018301e458 ^ uVar5;
  }
  uRam000000018301e550 = func_0x00018350fcb0(SUB161(auVar47 ^ _UNK_18001a280,5) ^ uVar6);
  uVar20 = uVar12 & uStack_228;
  uVar19 = uVar12 ^ uStack_228;
  auVar104._8_4_ = 0xffffffff;
  auVar104._0_8_ = 0xffffffffffffffff;
  auVar104._12_4_ = 0xffffffff;
  uVar6 = ((((ulonglong)(uStack_228 ^ 0xffffffff) * (ulonglong)_UNK_18001a350 + _UNK_18001a360 <<
            0x20) + (ulonglong)_UNK_18001a340 * (ulonglong)(uStack_228 ^ 0xffffffff) +
            ((ulonglong)(uVar12 ^ 0xffffffff) * (ulonglong)_UNK_18001a320 + _UNK_18001a330 << 0x20)
            + (ulonglong)_UNK_18001a310 * (ulonglong)(uVar12 ^ 0xffffffff) +
           ((ulonglong)_UNK_18001a300 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)_UNK_18001a2f0 * (ulonglong)uVar19 +
           ((ulonglong)_UNK_18001a2e0 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)_UNK_18001a2d0 * (ulonglong)uVar20 +
           ((ulonglong)_UNK_18001a2c0 * (ulonglong)uStack_228 << 0x20) +
           (ulonglong)_UNK_18001a2b0 * (ulonglong)uStack_228 +
           ((ulonglong)_UNK_18001a2a0 * (ulonglong)uVar12 << 0x20) +
           (ulonglong)_UNK_18001a290 * (ulonglong)uVar12) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_18001a400 << 0x20) +
           (ulonglong)_UNK_18001a3f0 * (ulonglong)uVar19 +
           ((ulonglong)(uVar12 | uStack_228) * (ulonglong)_UNK_18001a3e0 << 0x20) +
           (ulonglong)_UNK_18001a3d0 * (ulonglong)(uVar12 | uStack_228) +
          ((ulonglong)uVar20 * (ulonglong)_UNK_18001a3c0 << 0x20) +
          (ulonglong)_UNK_18001a3b0 * (ulonglong)uVar20 +
          ((ulonglong)uStack_228 * (ulonglong)_UNK_18001a3a0 << 0x20) +
          (ulonglong)_UNK_18001a390 * (ulonglong)uStack_228 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a3a0 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_UNK_18001a390)) + 0x2de30c52d79ab2b1;
  uRam000000018301e2e8 = uRam000000018301e4e8 ^ uRam000000018301e550 ^ uVar6;
  uRam000000018301e3d8 = (uRam000000018301e3d8 ^ uRam000000018301e550) + uVar6 ^ 0xd3c527acb53b56dd;
  uRam000000018301e4e0 =
       (uRam000000018301e4e0 * 0x621b31822b65683d ^ uRam000000018301e3d8) + uRam000000018301e550;
  uRam000000018301e268 = uRam000000018301e4e0 ^ uRam000000018301e3d8;
  uRam000000018301e4a8 = uVar6 & 0xffffffff;
  param_1[0xc] = (int)uVar6;
  param_1[0xd] = param_2[0xd] + uStack_1b8;
  uVar12 = param_2[0xe];
  uVar5 = CONCAT44(0,uStack_1f0);
  uVar13 = CONCAT44(0,uVar12) ^ 0x84222325;
  uVar6 = ((uRam000000018301e550 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e550 & (uint)uVar13) * 2) *
          (uVar5 - lRam000000018301e2b0);
  uVar6 = (uVar6 | uRam000000018301e628) + (uVar6 & uRam000000018301e628);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018301e4d8 =
       func_0x00018350fcb0((uVar13 ^ uVar5 | uVar6) +
                           (ulonglong)((uint)(uVar13 ^ uVar5) & (uint)uVar6));
  uVar6 = uRam000000018301e4d8 & 0x7fffffffffffffff;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = CONCAT44(0,uVar12);
  auVar67._8_8_ = 0;
  auVar67._0_8_ = uVar5;
  uVar2 = uVar12 & uStack_1f0;
  uVar20 = uVar12 | uStack_1f0;
  uVar19 = uVar12 ^ uStack_1f0;
  uVar11 = SUB164(auVar76 ^ auVar104,0);
  uVar1 = SUB164(auVar67 ^ auVar104,0);
  uVar5 = (ulonglong)uVar11 * (ulonglong)_UNK_18001a450 +
          ((ulonglong)_UNK_18001a4c0 * (ulonglong)uVar11 +
           (SUB168(auVar76 ^ auVar104,0) >> 0x20) * (ulonglong)_UNK_18001a450 << 0x20) +
          ((ulonglong)_UNK_18001a4b0 * (ulonglong)uVar19 << 0x20) +
          (ulonglong)_UNK_18001a4a0 * (ulonglong)uVar19 +
          ((ulonglong)_UNK_18001a490 * (ulonglong)uVar20 << 0x20) +
          (ulonglong)_UNK_18001a480 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_18001a470 * (ulonglong)uVar2 << 0x20) +
          (ulonglong)_UNK_18001a460 * (ulonglong)uVar2 +
          ((ulonglong)_UNK_18001a440 * (ulonglong)uStack_1f0 << 0x20) +
          (ulonglong)_UNK_18001a430 * (ulonglong)uStack_1f0 +
          ((ulonglong)_UNK_18001a420 * (ulonglong)uVar12 << 0x20) +
          (ulonglong)_UNK_18001a410 * (ulonglong)uVar12 +
          (-((ulonglong)uVar1 * (_UNK_18001a530 & 0xffffffff) +
            ((ulonglong)_UNK_18001a5a0 * (ulonglong)uVar1 +
             (SUB168(auVar67 ^ auVar104,0) >> 0x20) * (_UNK_18001a530 & 0xffffffff) << 0x20)) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_18001a590 << 0x20) +
           (ulonglong)_UNK_18001a580 * (ulonglong)uVar19 +
           ((ulonglong)uVar20 * (ulonglong)_UNK_18001a570 << 0x20) +
           (ulonglong)_UNK_18001a560 * (ulonglong)uVar20 +
          ((ulonglong)uVar2 * (ulonglong)_UNK_18001a550 << 0x20) +
          (ulonglong)_UNK_18001a540 * (ulonglong)uVar2 +
          ((ulonglong)uStack_1f0 * (ulonglong)_UNK_18001a520 << 0x20) +
          (ulonglong)_UNK_18001a510 * (ulonglong)uStack_1f0 +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a500 << 0x20) +
          (ulonglong)_UNK_18001a4f0 * (ulonglong)uVar12)) + 0x54e8b52d41b19c41;
  uRam000000018301e4d0 = uRam000000018301e400 ^ uVar6 ^ uVar5;
  uRam000000018301e458 = (uRam000000018301e458 ^ uVar6) + uVar5 ^ 0x7c4fe98cb8083fdc;
  uRam000000018301e578 = (uRam000000018301e578 * 0x550be134fede140f ^ uRam000000018301e458) + uVar6;
  uRam000000018301e5f0 = uRam000000018301e578 ^ uRam000000018301e458;
  uRam000000018301e3b8 = uVar5 & 0xffffffff;
  param_1[0xe] = (int)uVar5;
  uVar12 = param_2[0xf];
  uVar6 = CONCAT44(0,uVar12);
  uVar13 = uVar6 ^ 0x84222325;
  uVar5 = ((uRam000000018301e5e0 ^ uVar13) +
          (ulonglong)((uint)uRam000000018301e5e0 & (uint)uVar13) * 2) *
          (uStack_1bc - uRam000000018301e4f8);
  uVar5 = (uVar5 | uRam000000018301e568) + (uVar5 & uRam000000018301e568);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar13 = uVar13 ^ uStack_1bc;
  uRam000000018301e5f0 =
       func_0x00018350fcb0((uVar13 | uVar5) + (ulonglong)((uint)uVar13 & (uint)uVar5));
  auVar68._8_8_ = 0;
  auVar68._0_8_ = uVar6;
  uVar6 = uRam000000018301e5f0 ^ uVar6;
  uVar11 = uVar12 & uStack_1bc;
  uVar20 = uVar12 | uStack_1bc;
  uVar19 = uVar12 ^ uStack_1bc;
  uVar1 = SUB164(auVar68 ^ auVar104,0);
  uVar5 = ((ulonglong)_UNK_18001a620 * (ulonglong)uVar19 << 0x20) +
          (ulonglong)_UNK_18001a610 * (ulonglong)uVar19 +
          ((ulonglong)_UNK_18001a600 * (ulonglong)uVar20 << 0x20) +
          (ulonglong)_UNK_18001a5f0 * (ulonglong)uVar20 +
          ((ulonglong)_UNK_18001a5e0 * (ulonglong)uVar11 << 0x20) +
          (ulonglong)_UNK_18001a5d0 * (ulonglong)uVar11 +
          ((ulonglong)_UNK_18001a5c0 * (ulonglong)uStack_1bc << 0x20) +
          (ulonglong)_UNK_18001a5b0 * (ulonglong)uStack_1bc +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a5c0 << 0x20) +
          (ulonglong)uVar12 * (ulonglong)_UNK_18001a5b0 +
          (-((ulonglong)uVar1 * (ulonglong)_UNK_18001a690 +
            ((ulonglong)_UNK_18001a700 * (ulonglong)uVar1 +
             (SUB168(auVar68 ^ auVar104,0) >> 0x20) * (ulonglong)_UNK_18001a690 << 0x20)) -
          (((ulonglong)uVar19 * (ulonglong)_UNK_18001a6f0 << 0x20) +
           (ulonglong)_UNK_18001a6e0 * (ulonglong)uVar19 +
           ((ulonglong)uVar20 * (ulonglong)_UNK_18001a6d0 << 0x20) +
           (ulonglong)_UNK_18001a6c0 * (ulonglong)uVar20 +
          ((ulonglong)uVar11 * (ulonglong)_UNK_18001a6b0 << 0x20) +
          (ulonglong)_UNK_18001a6a0 * (ulonglong)uVar11 +
          ((ulonglong)uStack_1bc * (ulonglong)_UNK_18001a680 << 0x20) +
          (ulonglong)_UNK_18001a670 * (ulonglong)uStack_1bc +
          ((ulonglong)uVar12 * (ulonglong)_UNK_18001a660 << 0x20) +
          (ulonglong)_UNK_18001a650 * (ulonglong)uVar12)) + 0xfc2e7f1f216fa951;
  uRam000000018301e250 = uRam000000018301e338 ^ uVar6 ^ uVar5;
  uRam000000018301e5f8 = (uRam000000018301e5f8 ^ uVar6) + uVar5 ^ 0x22a99d49146e8844;
  uRam000000018301e550 = (uRam000000018301e550 * 0x7c1ed678d3ad0f11 ^ uRam000000018301e5f8) + uVar6;
  uRam000000018301e5a0 = uRam000000018301e550 ^ uRam000000018301e5f8;
  uRam000000018301e598 = uVar5 & 0xffffffff;
  param_1[0xf] = (int)uVar5;
  return;
code_r0x000183506a12:
  uStack_1b0 = uStack_1c4;
  goto code_r0x000183506a76;
}



// ===== fuckMyShitUp @ 183509d50 (depth 0) =====

/* WARNING: Switch with 1 destination removed at 0x000183509e00 */
/* WARNING: Switch with 1 destination removed at 0x000183509e08 */
/* WARNING: Switch with 1 destination removed at 0x000183509e32 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fuckMyShitUp(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong uVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong uVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_144;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  int iStack_120;
  uint uStack_11c;
  undefined8 *puStack_118;
  longlong lStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  
                    /* 0x3509d50  5  fuckMyShitUp */
  switch(param_3 != 0 && (param_2 != 0 && param_1 != (undefined8 *)0x0)) {
  case false:
code_r0x00018350fc38:
    return;
  case true:
    uStack_f0 = 0;
    puStack_118 = param_1;
    lStack_110 = param_2;
    uStack_108 = param_3;
  }
  do {
    uVar5 = _UNK_180017494;
    uVar6 = _UNK_180017490;
    auVar14 = _UNK_1800170c0;
    uStack_188 = *puStack_118;
    uStack_180 = puStack_118[1];
    uStack_178 = puStack_118[2];
    uStack_170 = puStack_118[3];
    uStack_168 = puStack_118[4];
    uStack_160 = puStack_118[5];
    lStack_f8 = uStack_f0 * 0x40 + lStack_110;
    uStack_11c = (uint)uStack_f0;
    uStack_144 = (uint)(uStack_f0 >> 0x10) & 0xffff ^ uStack_11c;
    uVar1 = (ulonglong)_UNK_180017490;
    uStack_128 = uVar1 ^ 0x84222325;
    auVar16._8_8_ = _UNK_18001a728;
    auVar16._0_8_ = uStack_128;
    auVar13 = pshufb(auVar16 ^ _UNK_18001a730,_UNK_1800170c0);
    uVar9 = auVar13._8_8_ + auVar13._0_8_;
    uVar7 = (ulonglong)_UNK_180017494;
    uVar2 = uVar9 + uRam000000018301ebc0;
    if (auVar13._4_4_ < 0) {
      uVar2 = uRam000000018301edb0 ^ uVar9;
    }
    uRam000000018301e730 = func_0x00018350fcb0(SUB161(auVar16 ^ _UNK_18001a730,5) ^ uVar2);
    uVar2 = uVar1 * 0x97d1a3cd ^ uRam000000018301e730;
    uRam000000018301eca8 =
         (uRam000000018301eca8 ^ uVar2) + (uVar1 | 0x97d1a3cd) ^ 0xdee7b307c478af31;
    uRam000000018301ee08 =
         (uRam000000018301ee08 * 0x6d23ea4931a0158d ^ uRam000000018301eca8) + uVar2;
    uRam000000018301ee00 = uRam000000018301ee08 ^ uRam000000018301eca8;
    uStack_130 = CONCAT44(uStack_130._4_4_,(int)(uVar1 | 0x97d1a3cd));
    uRam000000018301e930 = uVar1 | 0x97d1a3cd;
    uVar3 = uVar6 * uVar6 * 0x7f83b888;
    uVar9 = CONCAT44(0,uVar3);
    uVar2 = (uRam000000018301ee18 ^ 0x84222325) + uRam000000018301e730 + 0x84222325;
    uVar26 = (uVar9 ^ uRam000000018301e730) + uRam000000018301ee18 + uVar9;
    uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018301ee18 ^ 0x84222325;
    uVar26 = (uVar26 * 0x2000 | uVar26 >> 0x33) ^ uVar9 ^ uRam000000018301e730;
    uVar7 = uVar7 ^ 0x82fd1dfb;
    uStack_140 = uVar1;
    uStack_138 = uRam000000018301e930;
    uRam000000018301e9c8 =
         func_0x00018350fcb0((uVar26 << 0x1d | uVar26 >> 0x23) - (uRam000000018301ee18 + uVar9) ^
                             (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018301e730 + 0x84222325));
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar9;
    uVar2 = ((uRam000000018301e9c8 << 0x39 | uRam000000018301e9c8 >> 7) >> 0x37 |
            (uRam000000018301e9c8 >> 7) << 9) ^ uVar9;
    uVar4 = uVar6 * uVar6 * -0x7f83b888;
    uRam000000018301e9b0 = (uRam000000018301e9b0 ^ uVar2) - uVar9 ^ 0x7f42b92bf7a05c8e;
    uRam000000018301eda0 = (uRam000000018301eda0 * 0x4b109fc653b1a3f ^ uRam000000018301e9b0) + uVar2
    ;
    uRam000000018301ed38 = uRam000000018301eda0 ^ uRam000000018301e9b0;
    uVar1 = CONCAT44(0,uVar4);
    auVar13._8_4_ = uVar3;
    auVar13._0_8_ = _UNK_18001a740;
    auVar13._12_4_ = 0;
    auVar14 = pshufb(auVar13 ^ _UNK_18001a750,auVar14);
    uVar9 = auVar14._8_8_ + auVar14._0_8_;
    uVar2 = uVar9 + uRam000000018301ebc0;
    if (auVar14._4_4_ < 0) {
      uVar2 = uRam000000018301ebb0 ^ uVar9;
    }
    uRam000000018301e800 = uVar1;
    uRam000000018301ebb8 = func_0x00018350fcb0(uVar2 ^ 0x73);
    uVar2 = uRam000000018301ebb8 ^ 0x45d9f3b;
    uVar27 = uVar3 & (uint)UNK_18001a760;
    uVar12 = uVar3 | (uint)UNK_18001a760;
    uVar35 = SUB164(_UNK_18001a760 ^ auVar45,0);
    auVar40._8_4_ = 0xffffffff;
    auVar40._0_8_ = 0xffffffffffffffff;
    auVar40._12_4_ = 0xffffffff;
    uVar28 = SUB164(auVar45 ^ auVar40,0);
    uVar26 = (((ulonglong)uVar35 * (ulonglong)_UNK_18001a7d0 +
               ((ulonglong)_UNK_18001a7e0 * (ulonglong)uVar35 +
                (SUB168(_UNK_18001a760 ^ auVar45,0) >> 0x20) * (ulonglong)_UNK_18001a7d0 << 0x20) +
               ((ulonglong)uVar12 * (ulonglong)_UNK_18001a7c0 << 0x20) +
               (ulonglong)_UNK_18001a7b0 * (ulonglong)uVar12 +
              ((ulonglong)uVar27 * (ulonglong)_UNK_18001a7a0 << 0x20) +
              (ulonglong)_UNK_18001a790 * (ulonglong)uVar27 +
              ((ulonglong)_UNK_18001a780 * (ulonglong)uVar3 << 0x20) +
              (ulonglong)_UNK_18001a770 * (ulonglong)uVar3) -
             ((ulonglong)uVar28 * (ulonglong)_UNK_18001a820 +
              ((SUB168(auVar45 ^ auVar40,0) >> 0x20) * (ulonglong)_UNK_18001a820 +
               (ulonglong)_UNK_18001a810 * (ulonglong)uVar28 << 0x20) +
             (ulonglong)uVar3 * (ulonglong)_UNK_18001a820 +
             ((ulonglong)uVar3 * (ulonglong)_UNK_18001a810 << 0x20))) + 0x168ec1522f443ead;
    uRam000000018301e830 = uRam000000018301e998 ^ uVar2 ^ uVar26;
    uRam000000018301e6f8 = (uRam000000018301e6f8 ^ uVar2) + uVar26 ^ 0x744d97e3b14e6c4a;
    uRam000000018301ece0 =
         (uRam000000018301ece0 * 0x48e9fdf5b5516923 ^ uRam000000018301e6f8) + uVar2;
    uRam000000018301e7c0 = uRam000000018301ece0 ^ uRam000000018301e6f8;
    uVar2 = uVar26 & 0xffffffff;
    uVar9 = uVar2 ^ 0x84222325 ^ uRam000000018301ebe8;
    lVar8 = (uVar2 ^ 0x84222325) + uRam000000018301ebf8;
    uVar29 = uVar9 + lVar8;
    uVar32 = (uVar1 ^ uRam000000018301ebf8) + uRam000000018301ebe8 + uVar1;
    uVar9 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar9;
    uVar29 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar1 ^ uRam000000018301ebf8;
    uRam000000018301e8a0 = uVar2;
    uRam000000018301eb38 =
         func_0x00018350fcb0((uVar29 << 0x1d | uVar29 >> 0x23) - (uRam000000018301ebe8 + uVar1) ^
                             (uVar9 << 0x1d | uVar9 >> 0x23) - lVar8);
    uVar2 = uRam000000018301eb38 ^ uVar2;
    uVar3 = (uint)uVar26;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar1;
    uVar28 = uVar3 & uVar4;
    uVar12 = uVar3 | uVar4;
    uVar35 = uVar3 ^ uVar4;
    uVar27 = SUB164(auVar14 ^ auVar40,0);
    uVar9 = (((ulonglong)uVar27 * (ulonglong)_UNK_18001a8d0 +
              ((SUB168(auVar14 ^ auVar40,0) >> 0x20) * (ulonglong)_UNK_18001a8d0 +
               (ulonglong)_UNK_18001a860 * (ulonglong)uVar27 << 0x20) +
             ((ulonglong)(uVar3 ^ 0xffffffff) * (ulonglong)_UNK_18001a840 + _UNK_18001a8c0 << 0x20)
             + (ulonglong)_UNK_18001a8b0 * (ulonglong)(uVar3 ^ 0xffffffff) +
             ((ulonglong)_UNK_18001a880 * (ulonglong)uVar35 << 0x20) +
             (ulonglong)_UNK_18001a870 * (ulonglong)uVar35 +
             ((ulonglong)uVar28 * (ulonglong)_UNK_18001a880 << 0x20) +
             (ulonglong)uVar28 * (ulonglong)_UNK_18001a870 +
             ((ulonglong)uVar4 * (ulonglong)_UNK_18001a860 << 0x20) +
             (ulonglong)_UNK_18001a850 * (ulonglong)uVar4 +
             ((uVar26 & 0xffffffff) * (ulonglong)_UNK_18001a840 << 0x20) +
             (ulonglong)_UNK_18001a830 * (uVar26 & 0xffffffff) +
             ((ulonglong)_UNK_18001a8a0 * (ulonglong)uVar12 << 0x20) +
             (ulonglong)_UNK_18001a890 * (ulonglong)uVar12) -
            (((ulonglong)uVar35 * (ulonglong)_UNK_18001a970 << 0x20) +
             (ulonglong)_UNK_18001a960 * (ulonglong)uVar35 +
             ((ulonglong)uVar12 * (ulonglong)_UNK_18001a950 << 0x20) +
             (ulonglong)_UNK_18001a940 * (ulonglong)uVar12 +
            ((ulonglong)uVar28 * (ulonglong)_UNK_18001a930 << 0x20) +
            (ulonglong)_UNK_18001a920 * (ulonglong)uVar28 +
            ((ulonglong)uVar4 * (ulonglong)_UNK_18001a910 << 0x20) +
            (ulonglong)_UNK_18001a900 * (ulonglong)uVar4 +
            (uVar26 & 0xffffffff) * (ulonglong)_UNK_18001a900 +
            ((uVar26 & 0xffffffff) * (ulonglong)_UNK_18001a910 << 0x20))) + 0x3a78adf0063220d8;
    uRam000000018301e710 = uRam000000018301e7a0 ^ uVar2 ^ uVar9;
    uRam000000018301eaa8 = (uRam000000018301eaa8 ^ uVar2) + uVar9 ^ 0xcfc78308f3c08fb8;
    uRam000000018301eb70 =
         (uRam000000018301e798 * -0x41169ce0c0040433 ^ uRam000000018301eaa8) + uVar2 ^
         uRam000000018301eaa8;
    uVar1 = uVar9 & 0xffffffff;
    uVar4 = uVar5 * uVar5 * 0x1942dac3;
    uVar26 = (ulonglong)uVar4;
    uVar2 = ((uRam000000018301eb10 ^ 0x84222325) +
            (ulonglong)((uint)uRam000000018301eb10 & 0x84222325) * 2) *
            (uVar26 - lRam000000018301e890);
    uVar2 = (uVar2 | uRam000000018301e660) + (uVar2 & uRam000000018301e660);
    uVar2 = uVar2 * 0x2000 ^ uVar2;
    uVar2 = uVar2 >> 7 ^ uVar2;
    uVar2 = uVar2 << 0x11 ^ uVar2;
    uRam000000018301e798 = uVar1;
    uRam000000018301e728 =
         func_0x00018350fcb0((uVar26 ^ 0x84222325 | uVar2) +
                             (ulonglong)((uint)(uVar26 ^ 0x84222325) & (uint)uVar2));
    uVar2 = uRam000000018301e728 >> 1 | uRam000000018301e728;
    uVar2 = uVar2 >> 2 | uVar2;
    uVar2 = uVar2 >> 4 | uVar2;
    uVar2 = uVar2 >> 8 | uVar2;
    uVar2 = uVar2 >> 0x10 | uVar2;
    uVar2 = uVar2 >> 0x20 | uVar2;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
            ^ uRam000000018301e728;
    uVar12 = uVar5 * uVar5 * -0x1942dac3;
    uVar29 = (ulonglong)uVar12;
    uRam000000018301e7b8 = (uRam000000018301e7b8 ^ uVar2) - uVar26 ^ 0x9d15f1dceda91000;
    uRam000000018301eaf8 =
         (uRam000000018301eaf8 * -0x1a6e6f11cb66d1b ^ uRam000000018301e7b8) + uVar2;
    uRam000000018301ec30 = uRam000000018301eaf8 ^ uRam000000018301e7b8;
    uVar32 = uVar1 ^ 0x84222325;
    uVar2 = ((uRam000000018301ea00 ^ uVar32) +
            (ulonglong)((uint)uRam000000018301ea00 & (uint)uVar32) * 2) *
            (uVar26 - lRam000000018301e768);
    uVar2 = (uVar2 | uRam000000018301e748) + (uVar2 & uRam000000018301e748);
    uVar2 = uVar2 * 0x2000 ^ uVar2;
    uVar2 = uVar2 >> 7 ^ uVar2;
    uVar2 = uVar2 << 0x11 ^ uVar2;
    uRam000000018301eba0 = uVar29;
    uRam000000018301e650 =
         func_0x00018350fcb0((uVar32 ^ uVar26 | uVar2) +
                             (ulonglong)((uint)(uVar32 ^ uVar26) & (uint)uVar2));
    uVar1 = ~((uRam000000018301e650 & 0xffffffff) * (ulonglong)_UNK_18001a980) & uVar1;
    uVar2 = uVar1 >> 10 | uVar1 << 0x36;
    uVar3 = (uint)uVar9;
    uVar28 = uVar3 & uVar4;
    uVar35 = uVar3 | uVar4;
    uVar3 = uVar3 ^ uVar4;
    uVar27 = uVar4 ^ 0xffffffff;
    uVar9 = ((((ulonglong)_UNK_18001a9a0 * (ulonglong)uVar27 + _UNK_18001aa10 << 0x20) +
              (ulonglong)_UNK_18001aa00 * (ulonglong)uVar27 +
              ((ulonglong)_UNK_18001a9d0 * (ulonglong)uVar3 << 0x20) +
              (ulonglong)_UNK_18001a9c0 * (ulonglong)uVar3 +
              ((ulonglong)uVar28 * (ulonglong)_UNK_18001a9d0 << 0x20) +
              (ulonglong)uVar28 * (ulonglong)_UNK_18001a9c0 +
              (ulonglong)_UNK_18001a9b0 * (ulonglong)uVar4 +
              ((ulonglong)uVar4 * (ulonglong)_UNK_18001a9a0 << 0x20) + (uVar9 & 0xffffffff) +
             ((ulonglong)_UNK_18001a9f0 * (ulonglong)uVar35 << 0x20) +
             (ulonglong)_UNK_18001a9e0 * (ulonglong)uVar35) -
            (((ulonglong)uVar27 * (ulonglong)_UNK_18001aa50 + _UNK_18001aaa0 << 0x20) +
             (ulonglong)_UNK_18001aa40 * (ulonglong)uVar27 +
             ((ulonglong)uVar3 * (ulonglong)_UNK_18001aa70 << 0x20) +
             (ulonglong)_UNK_18001aa60 * (ulonglong)uVar3 +
             ((ulonglong)uVar28 * (ulonglong)_UNK_18001aa70 << 0x20) +
             (ulonglong)uVar28 * (ulonglong)_UNK_18001aa60 +
             ((ulonglong)uVar4 * (ulonglong)_UNK_18001aa50 << 0x20) +
             (ulonglong)uVar4 * (ulonglong)_UNK_18001aa40 +
            ((ulonglong)uVar35 * (ulonglong)_UNK_18001aa90 << 0x20) +
            (ulonglong)_UNK_18001aa80 * (ulonglong)uVar35)) + 0x128e0117d4c5fd52;
    uRam000000018301ea90 = uRam000000018301ec90 ^ uVar2 ^ uVar9;
    uRam000000018301e790 = (uRam000000018301e790 ^ uVar2) + uVar9 ^ 0xa21e8ed937381c9b;
    uRam000000018301e9f8 =
         (uRam000000018301e9f8 * 0x5f19774e4409b2e1 ^ uRam000000018301e790) + uVar2;
    uRam000000018301ebc8 = uRam000000018301e9f8 ^ uRam000000018301e790;
    uVar1 = uVar9 & 0xffffffff;
    uVar2 = uVar1 ^ 0x84222325 ^ uRam000000018301e6e8;
    lVar8 = (uVar1 ^ 0x84222325) + uRam000000018301ed58;
    uVar26 = uVar2 + lVar8;
    uVar32 = (uVar29 ^ uRam000000018301ed58) + uRam000000018301e6e8 + uVar29;
    uVar2 = (uVar26 * 0x2000 | uVar26 >> 0x33) ^ uVar2;
    uVar26 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar29 ^ uRam000000018301ed58;
    uRam000000018301ea70 = uVar1;
    uRam000000018301e800 =
         func_0x00018350fcb0((uVar26 << 0x1d | uVar26 >> 0x23) - (uRam000000018301e6e8 + uVar29) ^
                             (uVar2 << 0x1d | uVar2 >> 0x23) - lVar8);
    uVar2 = (uVar1 * uVar29 ^ uRam000000018301e800 ^ uVar1) * 0x7adee199ec18ac77;
    uVar3 = (uint)uVar9;
    uVar4 = uVar3 ^ 0xffffffff;
    uVar35 = uVar12 ^ 0xffffffff;
    uVar1 = ((((ulonglong)_UNK_18001aad0 * (ulonglong)uVar35 + _UNK_18001ab60 << 0x20) +
              (ulonglong)_UNK_18001ab50 * (ulonglong)uVar35 +
             ((ulonglong)_UNK_18001aac0 * (ulonglong)uVar4 + _UNK_18001ab40 << 0x20) +
             (ulonglong)_UNK_18001ab30 * (ulonglong)uVar4 +
             ((ulonglong)(uVar3 ^ uVar12) * (ulonglong)_UNK_18001ab00 << 0x20) +
             (ulonglong)_UNK_18001aaf0 * (ulonglong)(uVar3 ^ uVar12) +
             ((ulonglong)(uVar3 & uVar12) * (ulonglong)_UNK_18001ab00 << 0x20) +
             (ulonglong)(uVar3 & uVar12) * (ulonglong)_UNK_18001aaf0 +
             (ulonglong)_UNK_18001aae0 * (ulonglong)uVar12 +
             ((ulonglong)uVar12 * (ulonglong)_UNK_18001aad0 << 0x20) +
             ((uVar9 & 0xffffffff) * (ulonglong)_UNK_18001aac0 << 0x20) +
             (ulonglong)_UNK_18001aab0 * (uVar9 & 0xffffffff) +
             ((ulonglong)(uVar3 | uVar12) * (ulonglong)_UNK_18001ab20 << 0x20) +
             (ulonglong)_UNK_18001ab10 * (ulonglong)(uVar3 | uVar12)) -
            (((ulonglong)uVar35 * (ulonglong)_UNK_18001abc0 + _UNK_18001abe0 << 0x20) +
             (ulonglong)_UNK_18001abb0 * (ulonglong)uVar35 +
             ((ulonglong)uVar12 * (ulonglong)_UNK_18001abc0 << 0x20) +
             (ulonglong)uVar12 * (ulonglong)_UNK_18001abb0 +
             (uVar9 & 0xffffffff) * (ulonglong)_UNK_18001ab90 +
             ((uVar9 & 0xffffffff) * (ulonglong)_UNK_18001aba0 << 0x20) +
            ((ulonglong)uVar4 * (ulonglong)_UNK_18001aba0 + _UNK_18001abd0 << 0x20) +
            (ulonglong)_UNK_18001ab90 * (ulonglong)uVar4)) + 0xf6b89cd9823feae2;
    uRam000000018301e798 = uRam000000018301ea80 ^ uVar2 ^ uVar1;
    uRam000000018301ea00 = (uRam000000018301ea00 ^ uVar2) + uVar1 ^ 0x236e732b9a40a892;
    uRam000000018301ee38 =
         (uRam000000018301ee38 * -0x764ae130729ccd8d ^ uRam000000018301ea00) + uVar2;
    uRam000000018301e9a0 = uRam000000018301ee38 ^ uRam000000018301ea00;
    uVar29 = uVar1 & 0xffffffff;
    uVar3 = uVar6 * uVar5 * 0x8ffb9dc;
    uVar26 = (ulonglong)uVar3;
    uVar2 = (uRam000000018301ee28 ^ 0x84222325) + uRam000000018301eb28 + 0x84222325;
    uVar9 = (uVar26 ^ uRam000000018301eb28) + uRam000000018301ee28 + uVar26;
    uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018301ee28 ^ 0x84222325;
    uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar26 ^ uRam000000018301eb28;
    uRam000000018301ec70 = uVar29;
    uVar2 = func_0x00018350fcb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018301ee28 + uVar26) ^
                                (uVar2 << 0x1d | uVar2 >> 0x23) -
                                (uRam000000018301eb28 + 0x84222325));
    uVar9 = uVar2 >> 1 | uVar2;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 >> 4 | uVar9;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = uVar9 >> 0x10 | uVar9;
    uVar9 = uVar9 >> 0x20 | uVar9;
    uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar2 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
            ^ uVar2;
    uVar9 = uVar2 >> 1 | uVar2;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 >> 4 | uVar9;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = uVar9 >> 0x10 | uVar9;
    uVar9 = uVar9 >> 0x20 | uVar9;
    uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar2 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
            ^ uVar2;
    uVar5 = uVar6 * uVar5 * -0x8ffb9dc;
    uRam000000018301eb50 = (uRam000000018301eb50 ^ uVar2) - uVar26 ^ 0x3345ef4c6e42f83d;
    uRam000000018301e680 =
         (uRam000000018301e680 * -0xe00425592b5caab ^ uRam000000018301eb50) + uVar2;
    uRam000000018301eae8 = uRam000000018301e680 ^ uRam000000018301eb50;
    uRam000000018301e888 = (ulonglong)uVar5;
    uVar2 = uVar29 ^ 0x84222325 ^ uRam000000018301ede8;
    lVar8 = (uVar29 ^ 0x84222325) + uRam000000018301ec58;
    uVar9 = uVar2 + lVar8;
    uVar32 = (uVar26 ^ uRam000000018301ec58) + uRam000000018301ede8 + uVar26;
    uVar2 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar2;
    uVar9 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar26 ^ uRam000000018301ec58;
    uRam000000018301e900 =
         func_0x00018350fcb0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018301ede8 + uVar26) ^
                             (uVar2 << 0x1d | uVar2 >> 0x23) - lVar8);
    auVar14 = _UNK_1800170c0;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar29;
    uVar12 = (uint)uVar1 & uVar3;
    uVar6 = (uint)uVar1 | uVar3;
    uVar2 = (uVar29 | uVar26) ^ uRam000000018301e900;
    uVar2 = (uVar2 << 0x14 | uRam000000018301e900 >> 0x2c) << 0x1a | (uVar2 & 0xfffffffffff) >> 0x12
    ;
    uVar4 = SUB164(auVar24 ^ auVar40,0);
    uVar9 = (((uVar26 ^ uVar29) * (ulonglong)_UNK_18001ac50 +
              ((ulonglong)_UNK_18001ac60 * (uVar26 ^ uVar29) << 0x20) +
              ((ulonglong)_UNK_18001ac40 * (ulonglong)uVar6 << 0x20) +
              (ulonglong)_UNK_18001ac30 * (ulonglong)uVar6 +
             ((ulonglong)_UNK_18001ac20 * (ulonglong)uVar12 << 0x20) +
             (ulonglong)_UNK_18001ac10 * (ulonglong)uVar12 +
             ((ulonglong)_UNK_18001ac00 * (ulonglong)uVar3 << 0x20) +
             (ulonglong)_UNK_18001abf0 * (ulonglong)uVar3 +
             (uVar1 & 0xffffffff) * (ulonglong)_UNK_18001abf0 +
             ((uVar1 & 0xffffffff) * (ulonglong)_UNK_18001ac00 << 0x20)) -
            ((ulonglong)uVar4 * (_UNK_18001acd0 & 0xffffffff) +
             ((ulonglong)_UNK_18001ad00 * (ulonglong)uVar4 +
              (SUB168(auVar24 ^ auVar40,0) >> 0x20) * (_UNK_18001acd0 & 0xffffffff) << 0x20) +
            ((ulonglong)uVar6 * (ulonglong)_UNK_18001acf0 << 0x20) +
            (ulonglong)_UNK_18001ace0 * (ulonglong)uVar6 +
            ((ulonglong)uVar12 * (ulonglong)_UNK_18001acf0 << 0x20) +
            (ulonglong)uVar12 * (ulonglong)_UNK_18001ace0 +
            ((ulonglong)uVar3 * (ulonglong)_UNK_18001acc0 << 0x20) +
            (ulonglong)_UNK_18001acb0 * (ulonglong)uVar3 +
            (ulonglong)_UNK_18001ac90 * (uVar1 & 0xffffffff) +
            ((uVar1 & 0xffffffff) * (ulonglong)_UNK_18001aca0 << 0x20))) + 0xe2aa6fa9247bd90d;
    uRam000000018301eb98 = uRam000000018301e958 ^ uVar2 ^ uVar9;
    uRam000000018301e940 = (uRam000000018301e940 ^ uVar2) + uVar9 ^ 0xe711eab854961b11;
    uRam000000018301ed90 =
         (uRam000000018301ed90 * 0x3e6d01d94607cacd ^ uRam000000018301e940) + uVar2;
    uRam000000018301e6a8 = uRam000000018301ed90 ^ uRam000000018301e940;
    uVar6 = (uint)uVar9;
    auVar15._4_4_ = 0;
    auVar15._0_4_ = uVar6 ^ 0x84222325;
    auVar15._8_4_ = uVar5;
    auVar15._12_4_ = 0;
    auVar16 = pshufb(auVar15 ^ _UNK_18001ad10,_UNK_1800170c0);
    uVar1 = auVar16._8_8_ + auVar16._0_8_;
    uVar2 = uVar1 + lRam000000018301e7c8;
    if (auVar16._4_4_ < 0) {
      uVar2 = uRam000000018301e6e8 ^ uVar1;
    }
    uRam000000018301e948 = uVar9 & 0xffffffff;
    uRam000000018301e810 = func_0x00018350fcb0(SUB161(auVar15 ^ _UNK_18001ad10,5) ^ uVar2);
    uVar1 = uStack_138;
    uVar2 = uRam000000018301e810 ^ uVar9 & 0xffffffff;
    uVar12 = uVar6 & uVar5;
    uVar4 = uVar6 ^ uVar5;
    uVar3 = uVar6 ^ 0xffffffff;
    uVar26 = ((ulonglong)_UNK_18001adb0 * (ulonglong)uVar3 + _UNK_18001adc0 << 0x20) +
             (ulonglong)_UNK_18001ada0 * (ulonglong)uVar3 +
             ((ulonglong)_UNK_18001ad90 * (ulonglong)uVar4 << 0x20) +
             (ulonglong)_UNK_18001ad80 * (ulonglong)uVar4 +
             ((ulonglong)_UNK_18001ad70 * (ulonglong)uVar12 << 0x20) +
             (ulonglong)_UNK_18001ad60 * (ulonglong)uVar12 +
             ((ulonglong)_UNK_18001ad50 * (ulonglong)uVar5 << 0x20) +
             (ulonglong)_UNK_18001ad40 * (ulonglong)uVar5 +
             (ulonglong)_UNK_18001ad20 * (uVar9 & 0xffffffff) +
             ((ulonglong)_UNK_18001ad30 * (uVar9 & 0xffffffff) << 0x20) +
             (-(((ulonglong)uVar3 * (ulonglong)_UNK_18001aea0 + _UNK_18001aeb0 << 0x20) +
               (ulonglong)_UNK_18001ae90 * (ulonglong)uVar3) -
             (((ulonglong)uVar4 * (ulonglong)_UNK_18001ae80 << 0x20) +
              (ulonglong)_UNK_18001ae70 * (ulonglong)uVar4 +
              ((ulonglong)(uVar6 | uVar5) * (ulonglong)_UNK_18001ae60 << 0x20) +
              (ulonglong)_UNK_18001ae50 * (ulonglong)(uVar6 | uVar5) +
             ((ulonglong)uVar12 * (ulonglong)_UNK_18001ae40 << 0x20) +
             (ulonglong)_UNK_18001ae30 * (ulonglong)uVar12 +
             ((ulonglong)uVar5 * (ulonglong)_UNK_18001ae20 << 0x20) +
             (ulonglong)_UNK_18001ae10 * (ulonglong)uVar5 +
             (ulonglong)_UNK_18001adf0 * (uVar9 & 0xffffffff) +
             ((uVar9 & 0xffffffff) * (ulonglong)_UNK_18001ae00 << 0x20))) + 0x495e749be26c67d5;
    uRam000000018301ecf0 = uRam000000018301e808 ^ uVar2 ^ uVar26;
    uRam000000018301ebd0 = (uRam000000018301ebd0 ^ uVar2) + uVar26 ^ 0x18752ba208d7218a;
    uRam000000018301e760 =
         (uRam000000018301e760 * 0x5ce6efc8cb9cccb9 ^ uRam000000018301ebd0) + uVar2;
    uRam000000018301e6e0 = uRam000000018301e760 ^ uRam000000018301ebd0;
    uVar11 = uStack_138 ^ 0x84222325;
    uVar5 = (uint)uVar11;
    uVar2 = ((uRam000000018301ea20 ^ uVar11) + (ulonglong)(uVar5 & (uint)uRam000000018301ea20) * 2)
            * (uVar7 - uRam000000018301edc0);
    uVar2 = (uVar2 | uRam000000018301ea50) + (uVar2 & uRam000000018301ea50);
    uVar2 = uVar2 * 0x2000 ^ uVar2;
    uVar2 = uVar2 >> 7 ^ uVar2;
    uVar2 = uVar2 << 0x11 ^ uVar2;
    uVar9 = uVar11 ^ uVar7;
    uRam000000018301eb18 = uVar26 & 0xffffffff;
    uVar2 = func_0x00018350fcb0((uVar2 | uVar9) + (ulonglong)((uint)uVar2 & (uint)uVar9));
    uVar4 = (uint)uVar7;
    uVar6 = (uint)uVar1;
    uVar3 = uVar4 ^ 0xffffffff;
    uVar2 = ((uVar1 | uVar7) ^ uVar2) & 0x7fffffffffffff80;
    uVar29 = ((((ulonglong)_UNK_18001af70 * (ulonglong)uVar3 + _UNK_18001af80 << 0x20) +
               (ulonglong)_UNK_18001af60 * (ulonglong)uVar3 +
              ((ulonglong)(uVar6 ^ uVar4) * (ulonglong)_UNK_18001af50 << 0x20) +
              (ulonglong)_UNK_18001af40 * (ulonglong)(uVar6 ^ uVar4) +
              ((ulonglong)(uVar6 | uVar4) * (ulonglong)_UNK_18001af30 << 0x20) +
              (ulonglong)_UNK_18001af20 * (ulonglong)(uVar6 | uVar4) +
              ((ulonglong)(uVar6 & uVar4) * (ulonglong)_UNK_18001af10 << 0x20) +
              (ulonglong)_UNK_18001af00 * (ulonglong)(uVar6 & uVar4) +
              (_UNK_18001aef0 * uVar7 << 0x20) + _UNK_18001aee0 * uVar7 +
              ((ulonglong)_UNK_18001aed0 * (uVar1 & 0xffffffff) << 0x20) +
              (ulonglong)_UNK_18001aec0 * (uVar1 & 0xffffffff)) -
             (((ulonglong)uVar3 * (ulonglong)_UNK_18001afe0 + _UNK_18001b000 << 0x20) +
              (ulonglong)_UNK_18001afd0 * (ulonglong)uVar3 +
              (uVar7 * _UNK_18001afe0 << 0x20) + uVar7 * _UNK_18001afd0 +
              ((uVar1 & 0xffffffff) * (ulonglong)_UNK_18001afc0 << 0x20) +
              (uVar1 & 0xffffffff) * (ulonglong)_UNK_18001afb0 +
             ((ulonglong)(uVar6 ^ 0xffffffff) * (ulonglong)_UNK_18001afc0 + _UNK_18001aff0 << 0x20)
             + (ulonglong)_UNK_18001afb0 * (ulonglong)(uVar6 ^ 0xffffffff))) + 0xf224bdf5ee1ff3d5;
    uRam000000018301ecc8 = uRam000000018301e988 ^ uVar2 ^ uVar29;
    uRam000000018301e8f8 = (uRam000000018301e8f8 ^ uVar2) + uVar29 ^ 0x709ab5681bf9a928;
    uRam000000018301ea40 =
         (uRam000000018301ea40 * -0x678a3ffe0e84436b ^ uRam000000018301e8f8) + uVar2;
    uRam000000018301e920 = uRam000000018301ea40 ^ uRam000000018301e8f8;
    uVar32 = uVar29 & 0xffffffff;
    uVar2 = ((uRam000000018301e7a0 ^ uVar11) + (ulonglong)((uint)uRam000000018301e7a0 & uVar5) * 2)
            * (uVar7 - uRam000000018301eca8);
    uVar2 = (uVar2 | uRam000000018301e998) + (uVar2 & uRam000000018301e998);
    uVar2 = uVar2 * 0x2000 ^ uVar2;
    uVar2 = uVar2 >> 7 ^ uVar2;
    uVar2 = uVar2 << 0x11 ^ uVar2;
    uRam000000018301e9b8 = uVar32;
    uRam000000018301ed68 =
         func_0x00018350fcb0((uVar2 | uVar9) + (ulonglong)((uint)uVar2 & (uint)uVar9));
    uVar2 = uRam000000018301ed68 ^ uVar7;
    uVar9 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar2 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar2;
    uVar10 = uVar1 ^ uVar7;
    uRam000000018301e6b8 = (uRam000000018301e6b8 ^ uVar2) + uVar10 ^ 0xf440f7c8d3cde01f;
    uRam000000018301e958 =
         (uRam000000018301e958 * -0x61fecdd83480c007 ^ uRam000000018301e6b8) + uVar2;
    uRam000000018301e790 = uRam000000018301e958 ^ uRam000000018301e6b8;
    auVar17._8_8_ = uVar7;
    auVar17._0_8_ = uVar11;
    auVar16 = pshufb(auVar17 ^ _UNK_18001b010,auVar14);
    uVar9 = auVar16._8_8_ + auVar16._0_8_;
    uVar2 = uVar9 + uRam000000018301ee18;
    if (auVar16._4_4_ < 0) {
      uVar2 = uRam000000018301eb50 ^ uVar9;
    }
    uRam000000018301e968 = uVar10;
    uRam000000018301ece8 = func_0x00018350fcb0(SUB161(auVar17 ^ _UNK_18001b010,5) ^ uVar2);
    uVar7 = uRam000000018301ece8 & 0x3ffffffffffffff ^ uVar7;
    uVar3 = (uint)uStack_130;
    uRam000000018301eaf0 = (ulonglong)(uVar4 & (uint)uStack_130);
    uRam000000018301edd8 =
         (uRam000000018301edd8 ^ uVar7) + uRam000000018301eaf0 ^ 0xd803561d0192e92a;
    lRam000000018301ee10 =
         (lRam000000018301ee10 * 0x1dbc6f535f6283a5 ^ uRam000000018301edd8) + uVar7;
    uVar6 = (uVar4 & (uint)uStack_130) * 2;
    uVar4 = (uint)uVar10;
    auVar18._4_4_ = 0;
    auVar18._0_4_ = uVar4 ^ 0x84222325;
    auVar18._8_4_ = uVar6;
    auVar18._12_4_ = 0;
    auVar16 = pshufb(auVar18 ^ _UNK_18001b020,auVar14);
    uVar2 = auVar16._8_8_ + auVar16._0_8_;
    uVar7 = uVar2 + uRam000000018301e800;
    if (auVar16._4_4_ < 0) {
      uVar7 = uRam000000018301ea28 ^ uVar2;
    }
    uRam000000018301ec48 = func_0x00018350fcb0(SUB161(auVar18 ^ _UNK_18001b020,5) ^ uVar7);
    uVar7 = (~uRam000000018301ec48 & uVar10) << 0x20;
    uVar35 = uVar4 & uVar6;
    uVar12 = uVar4 | uVar6;
    uVar4 = uVar4 ^ uVar6;
    uVar2 = ((((ulonglong)_UNK_18001b0a0 * (ulonglong)uVar4 << 0x20) +
              (ulonglong)_UNK_18001b090 * (ulonglong)uVar4 +
              ((ulonglong)_UNK_18001b080 * (ulonglong)uVar12 << 0x20) +
              (ulonglong)_UNK_18001b070 * (ulonglong)uVar12 +
             ((ulonglong)_UNK_18001b060 * (ulonglong)uVar35 << 0x20) +
             (ulonglong)_UNK_18001b050 * (ulonglong)uVar35 +
             ((ulonglong)_UNK_18001b040 * (ulonglong)uVar6 << 0x20) +
             (ulonglong)_UNK_18001b030 * (ulonglong)uVar6 +
             ((uVar10 & 0xffffffff) * (ulonglong)_UNK_18001b040 << 0x20) +
             (uVar10 & 0xffffffff) * (ulonglong)_UNK_18001b030) -
            (((ulonglong)(uVar6 ^ 0xffffffff) * (ulonglong)_UNK_18001b0e0 + _UNK_18001b130 << 0x20)
             + (ulonglong)_UNK_18001b0d0 * (ulonglong)(uVar6 ^ 0xffffffff) +
             ((ulonglong)uVar4 * (ulonglong)_UNK_18001b100 << 0x20) +
             (ulonglong)_UNK_18001b0f0 * (ulonglong)uVar4 +
             ((ulonglong)uVar35 * (ulonglong)_UNK_18001b100 << 0x20) +
             (ulonglong)uVar35 * (ulonglong)_UNK_18001b0f0 +
             ((ulonglong)uVar6 * (ulonglong)_UNK_18001b0e0 << 0x20) +
             (ulonglong)uVar6 * (ulonglong)_UNK_18001b0d0 +
            ((ulonglong)uVar12 * (ulonglong)_UNK_18001b120 << 0x20) +
            (ulonglong)_UNK_18001b110 * (ulonglong)uVar12)) + 0xe61a6faab5b0011c;
    uRam000000018301eb30 = uRam000000018301e838 ^ uVar7 ^ uVar2;
    uRam000000018301e888 = (uRam000000018301e888 ^ uVar7) + uVar2 ^ 0x30b4deba0ae96369;
    uRam000000018301e900 =
         (uRam000000018301e900 * 0x2fef5d46ef5c8eff ^ uRam000000018301e888) + uVar7;
    uRam000000018301e800 = uRam000000018301e900 ^ uRam000000018301e888;
    uVar9 = uVar2 & 0xffffffff;
    uVar7 = uVar32 ^ 0x84222325 ^ uRam000000018301e770;
    lVar8 = (uVar32 ^ 0x84222325) + uRam000000018301e6a0;
    uVar10 = uVar7 + lVar8;
    uVar23 = (uVar9 ^ uRam000000018301e6a0) + uRam000000018301e770 + uVar9;
    uVar7 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar7;
    uVar10 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ uVar9 ^ uRam000000018301e6a0;
    uRam000000018301e680 = uVar9;
    uRam000000018301ed20 =
         func_0x00018350fcb0((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018301e770 + uVar9) ^
                             (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar32;
    uVar6 = SUB164(auVar36 ^ auVar40,0);
    uVar7 = ((uVar32 | uVar9) ^ uRam000000018301ed20) & 0x7fffffffffffffff;
    uVar12 = (uint)uVar29 & (uint)uVar2;
    uVar4 = (uint)uVar29 | (uint)uVar2;
    uVar2 = (((ulonglong)uVar6 * (ulonglong)_UNK_18001b160 +
              ((SUB168(auVar36 ^ auVar40,0) >> 0x20) * (ulonglong)_UNK_18001b160 +
               (ulonglong)_UNK_18001b140 * (ulonglong)uVar6 << 0x20) +
             (((ulonglong)_UNK_18001b150 * (uVar29 & 0xffffffff) +
              ((uVar29 & 0xffffffff) * (ulonglong)_UNK_18001b140 << 0x20)) - uVar9)) -
            ((uVar32 ^ uVar9) * (ulonglong)_UNK_18001b1f0 +
             ((ulonglong)_UNK_18001b200 * (uVar32 ^ uVar9) << 0x20) +
             ((ulonglong)uVar4 * (ulonglong)_UNK_18001b1e0 << 0x20) +
             (ulonglong)_UNK_18001b1d0 * (ulonglong)uVar4 +
            ((ulonglong)uVar12 * (ulonglong)_UNK_18001b1c0 << 0x20) +
            (ulonglong)_UNK_18001b1b0 * (ulonglong)uVar12 +
            ((uVar2 & 0xffffffff) * (ulonglong)_UNK_18001b1a0 << 0x20) +
            (ulonglong)_UNK_18001b190 * (uVar2 & 0xffffffff) +
            ((uVar29 & 0xffffffff) * (ulonglong)_UNK_18001b1a0 << 0x20) +
            (uVar29 & 0xffffffff) * (ulonglong)_UNK_18001b190)) + 0x87589418ff2f61da;
    uRam000000018301ec40 = uVar2 ^ uVar7;
    uRam000000018301ea80 = (uRam000000018301ea80 ^ uVar7) + uVar2 ^ 0xd297013688aa0d85;
    uRam000000018301eaf8 =
         (uRam000000018301eaf8 * -0x606d54183581e893 ^ uRam000000018301ea80) + uVar7;
    uRam000000018301eb60 = uRam000000018301eaf8 ^ uRam000000018301ea80;
    uVar9 = uVar2 & 0xffffffff;
    uVar29 = uVar26 & 0xffffffff ^ 0x84222325;
    uVar7 = ((uRam000000018301e940 ^ uVar29) +
            (ulonglong)((uint)uRam000000018301e940 & (uint)uVar29) * 2) *
            (uVar9 - uRam000000018301e908);
    uVar7 = (uVar7 | uRam000000018301e820) + (uVar7 & uRam000000018301e820);
    uVar7 = uVar7 * 0x2000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 << 0x11 ^ uVar7;
    uRam000000018301e678 = uVar9;
    uRam000000018301e918 =
         func_0x00018350fcb0((uVar29 ^ uVar9 | uVar7) +
                             (ulonglong)((uint)(uVar29 ^ uVar9) & (uint)uVar7));
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar9;
    uVar4 = (uint)uVar2;
    uVar6 = (uint)uVar26;
    uVar35 = uVar6 & uVar4;
    uVar12 = uVar6 ^ 0xffffffff;
    uVar27 = SUB164(auVar51 ^ auVar40,0);
    uVar7 = uRam000000018301e918 & 0x7fffffffffffffff;
    uVar2 = (((ulonglong)uVar27 * (ulonglong)_UNK_18001b2c0 +
              ((ulonglong)_UNK_18001b2d0 * (ulonglong)uVar27 +
               (SUB168(auVar51 ^ auVar40,0) >> 0x20) * (ulonglong)_UNK_18001b2c0 << 0x20) +
              ((ulonglong)_UNK_18001b2a0 * (ulonglong)uVar12 + _UNK_18001b2b0 << 0x20) +
              (ulonglong)_UNK_18001b290 * (ulonglong)uVar12 +
             ((ulonglong)(uVar6 ^ uVar4) * (ulonglong)_UNK_18001b280 << 0x20) +
             (ulonglong)_UNK_18001b270 * (ulonglong)(uVar6 ^ uVar4) +
             ((ulonglong)_UNK_18001b260 * (ulonglong)uVar35 << 0x20) +
             (ulonglong)_UNK_18001b250 * (ulonglong)uVar35 +
             ((ulonglong)_UNK_18001b240 * (uVar2 & 0xffffffff) << 0x20) +
             (ulonglong)_UNK_18001b230 * (uVar2 & 0xffffffff) +
             (ulonglong)_UNK_18001b210 * (uVar26 & 0xffffffff) +
             ((ulonglong)_UNK_18001b220 * (uVar26 & 0xffffffff) << 0x20)) -
            (((ulonglong)uVar12 * (ulonglong)_UNK_18001b370 + _UNK_18001b380 << 0x20) +
             (ulonglong)_UNK_18001b360 * (ulonglong)uVar12 +
            ((ulonglong)(uVar6 | uVar4) * (ulonglong)_UNK_18001b350 << 0x20) +
            (ulonglong)_UNK_18001b340 * (ulonglong)(uVar6 | uVar4) +
            ((ulonglong)uVar35 * (ulonglong)_UNK_18001b350 << 0x20) +
            (ulonglong)uVar35 * (ulonglong)_UNK_18001b340 +
            ((uVar2 & 0xffffffff) * (ulonglong)_UNK_18001b330 << 0x20) +
            (ulonglong)_UNK_18001b320 * (uVar2 & 0xffffffff) +
            (ulonglong)_UNK_18001b300 * (uVar26 & 0xffffffff) +
            ((uVar26 & 0xffffffff) * (ulonglong)_UNK_18001b310 << 0x20))) + 0x17c535b4aecb019b;
    uRam000000018301ec28 = uRam000000018301e908 ^ uVar7 ^ uVar2;
    uRam000000018301e9a8 = (uRam000000018301eca0 ^ uVar7) + uVar2 ^ 0x669efe568ff38b50;
    uRam000000018301e820 =
         (uRam000000018301e820 * 0x1d642eaf09183bb3 ^ uRam000000018301e9a8) + uVar7;
    uRam000000018301e9a8 = uRam000000018301e820 ^ uRam000000018301e9a8;
    auVar46._8_8_ = 0xffffffff;
    auVar46._0_8_ = uVar11;
    uRam000000018301eca0 = uVar2 & 0xffffffff;
    auVar16 = pshufb(auVar46 ^ _UNK_18001b390,auVar14);
    uVar9 = auVar16._8_8_ + auVar16._0_8_;
    uVar7 = uVar9 + uRam000000018301eb80;
    if (auVar16._4_4_ < 0) {
      uVar7 = uRam000000018301edd0 ^ uVar9;
    }
    uRam000000018301eac8 = func_0x00018350fcb0(SUB161(auVar46 ^ _UNK_18001b390,5) ^ uVar7);
    uVar1 = uVar1 ^ 0xffffffff;
    uRam000000018301ed38 =
         (uRam000000018301ed38 ^ uRam000000018301eac8 & 0x3ffffffc0000000) + uVar1 ^
         0x7c9860a9a3e68757;
    uRam000000018301e9b0 =
         (uRam000000018301e9b0 * -0x43d53e4b5e05af0b ^ uRam000000018301ed38) +
         (uRam000000018301eac8 & 0x3ffffffc0000000);
    uRam000000018301e858 = uRam000000018301e9b0 ^ uRam000000018301ed38;
    uRam000000018301ece8 = uVar1 & 0xffffffff;
    uVar7 = ((uRam000000018301e8d8 ^ uVar11) + (ulonglong)((uint)uRam000000018301e8d8 & uVar5) * 2)
            * (uRam000000018301ece8 - uRam000000018301e960);
    uVar7 = (uVar7 | uRam000000018301e8d0) + (uVar7 & uRam000000018301e8d0);
    uVar7 = uVar7 * 0x2000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 << 0x11 ^ uVar7;
    uRam000000018301e670 =
         func_0x00018350fcb0((uVar11 ^ uRam000000018301ece8 | uVar7) +
                             (ulonglong)((uint)(uVar11 ^ uRam000000018301ece8) & (uint)uVar7));
    uVar7 = uStack_140;
    uVar3 = uVar3 & (uint)uVar1;
    uRam000000018301ed58 = (ulonglong)uVar3;
    uRam000000018301ea98 =
         (uRam000000018301ea98 ^ uRam000000018301e670) + uRam000000018301ed58 ^ 0x65b5af81e0cf6e8e;
    uRam000000018301e7a8 =
         (uRam000000018301e7a8 * -0x1897761699a7396f ^ uRam000000018301ea98) + uRam000000018301e670;
    uRam000000018301ea70 = uRam000000018301e7a8 ^ uRam000000018301ea98;
    uVar9 = (uStack_128 ^ uRam000000018301ebd0) + uStack_128 + uRam000000018301e9c0;
    uVar1 = (uStack_140 ^ uRam000000018301e9c0) + uRam000000018301ebd0 + uStack_140;
    uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uStack_128 ^ uRam000000018301ebd0;
    uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ uStack_140 ^ uRam000000018301e9c0;
    uVar6 = uVar3 * 0x55730dfe + (int)uVar2;
    uRam000000018301ee30 =
         func_0x00018350fcb0((uVar1 << 0x1d | uVar1 >> 0x23) - (uRam000000018301ebd0 + uStack_140) ^
                             (uVar9 << 0x1d | uVar9 >> 0x23) - (uStack_128 + uRam000000018301e9c0));
    uVar7 = uVar7 ^ uRam000000018301ee30;
    uVar2 = uVar7 >> 1 | uVar7;
    uVar2 = uVar2 >> 2 | uVar2;
    uVar2 = uVar2 >> 4 | uVar2;
    uVar2 = uVar2 >> 8 | uVar2;
    uVar2 = uVar2 >> 0x10 | uVar2;
    uVar2 = uVar2 >> 0x20 | uVar2;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar7 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
            ^ uVar7;
    uRam000000018301ebd8 = uRam000000018301ebd8 ^ uVar7 ^ 0x1600ba37e113780e;
    uRam000000018301e8d8 =
         (uRam000000018301e8d8 * -0x39244b87c98677dd ^ uRam000000018301ebd8) + uVar7;
    uRam000000018301ead8 = uRam000000018301e8d8 ^ uRam000000018301ebd8;
    auVar16 = ZEXT416(uVar6 ^ 0x84222325) ^ _UNK_18001b3a0;
    uRam000000018301e728 = 0;
    auVar13 = pshufb(auVar16,auVar14);
    uVar2 = auVar13._8_8_ + auVar13._0_8_;
    uVar7 = uVar2 + uRam000000018301ed68;
    if (auVar13._4_4_ < 0) {
      uVar7 = uRam000000018301ece0 ^ uVar2;
    }
    uRam000000018301ec58 = func_0x00018350fcb0(auVar16[5] ^ uVar7);
    uVar7 = ((((ulonglong)_UNK_18001b420 * (ulonglong)uVar6 << 0x20) +
              (ulonglong)_UNK_18001b410 * (ulonglong)uVar6 +
              ((ulonglong)_UNK_18001b400 * (ulonglong)uVar6 << 0x20) +
              (ulonglong)_UNK_18001b3f0 * (ulonglong)uVar6 +
             (ulonglong)uVar6 * (ulonglong)_UNK_18001b3b0 +
             ((ulonglong)uVar6 * (ulonglong)_UNK_18001b3c0 << 0x20)) -
            (((_UNK_18001b460 & 0xffffffff) * 0xffffffff + _UNK_18001b4b0 << 0x20) +
             (ulonglong)_UNK_18001b450 * 0xffffffff +
             ((ulonglong)uVar6 * (ulonglong)_UNK_18001b480 << 0x20) +
             (ulonglong)_UNK_18001b470 * (ulonglong)uVar6 +
            ((ulonglong)uVar6 * (ulonglong)_UNK_18001b4a0 << 0x20) +
            (ulonglong)_UNK_18001b490 * (ulonglong)uVar6)) + 0xc3bad19ebf7b5d84;
    uRam000000018301eb70 = uRam000000018301e7e8 ^ uRam000000018301ec58 ^ uVar7;
    uRam000000018301ea98 =
         (uRam000000018301ea98 ^ uRam000000018301ec58) + uVar7 ^ 0xe7588d01666873f1;
    uRam000000018301e928 =
         (uRam000000018301e928 * -0x39f43f470c989593 ^ uRam000000018301ea98) + uRam000000018301ec58;
    uRam000000018301e670 = uRam000000018301e928 ^ uRam000000018301ea98;
    uRam000000018301ea48 = uVar7 & 0xffffffff;
    uVar3 = uStack_144 * (int)uVar7;
    uVar4 = uVar3 >> 0x10;
    uVar9 = (ulonglong)uVar3;
    uVar2 = (ulonglong)uVar4 ^ 0x84222325;
    uVar7 = ((uRam000000018301e730 ^ uVar2) +
            (ulonglong)((uint)uRam000000018301e730 & (uint)uVar2) * 2) *
            (uVar9 - uRam000000018301e888);
    uVar7 = (uVar7 | uRam000000018301ea18) + (uVar7 & uRam000000018301ea18);
    uVar7 = uVar7 * 0x2000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 << 0x11 ^ uVar7;
    uRam000000018301ec40 =
         func_0x00018350fcb0((uVar2 ^ uVar9 | uVar7) +
                             (ulonglong)((uint)(uVar2 ^ uVar9) & (uint)uVar7));
    uVar5 = _UNK_18001749c;
    uVar6 = _UNK_180017498;
    uVar7 = uRam000000018301ec40 - (uRam000000018301ec40 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
            uRam000000018301ec40) & 0x7fffffffffffffff;
    uRam000000018301e790 = (uVar4 + uVar9) - (ulonglong)((uVar4 & uVar3) * 2);
    uRam000000018301ecd8 = (uRam000000018301ecd8 ^ uVar7) + uRam000000018301e790 ^ 0x62f9aac02aec473
    ;
    uRam000000018301e858 =
         (uRam000000018301e858 * 0x31056b5e0d12cc29 ^ uRam000000018301ecd8) + uVar7;
    uRam000000018301e9c8 = uRam000000018301e858 ^ uRam000000018301ecd8;
    uStack_144 = (uint)uRam000000018301e790;
    uRam000000018301e790 = uRam000000018301e790 & 0xffffffff;
    uVar2 = (ulonglong)_UNK_180017498;
    uStack_128 = uVar2 ^ 0x84222325;
    auVar19._8_8_ = _UNK_18001b4c8;
    auVar19._0_8_ = uStack_128;
    auVar16 = pshufb(auVar19 ^ _UNK_18001b4d0,auVar14);
    uVar1 = auVar16._8_8_ + auVar16._0_8_;
    uVar9 = (ulonglong)_UNK_18001749c;
    uVar7 = uVar1 + uRam000000018301e728;
    if (auVar16._4_4_ < 0) {
      uVar7 = uRam000000018301ea68 ^ uVar1;
    }
    uRam000000018301e908 = func_0x00018350fcb0(SUB161(auVar19 ^ _UNK_18001b4d0,5) ^ uVar7);
    uVar7 = (uVar2 * 0xd143647e ^ uRam000000018301e908) >> 0xe & 0xffffffffffffff80;
    uRam000000018301e808 =
         (uRam000000018301e808 ^ uVar7) + (uVar2 | 0xd143647e) ^ 0x22453791f5856ff2;
    uRam000000018301ea18 =
         (uRam000000018301ea18 * 0x58a056993ab49913 ^ uRam000000018301e808) + uVar7;
    uRam000000018301ea00 = uRam000000018301ea18 ^ uRam000000018301e808;
    uStack_138 = CONCAT44(uStack_138._4_4_,(int)(uVar2 | 0xd143647e));
    uRam000000018301ead0 = uVar2 | 0xd143647e;
    uVar9 = uVar9 ^ 0xe3332aa4;
    uVar4 = uVar6 * uVar6 * -0x4486e04f;
    uVar1 = (ulonglong)uVar4;
    uVar7 = ((uRam000000018301edc0 ^ 0x84222325) +
            (ulonglong)((uint)uRam000000018301edc0 & 0x84222325) * 2) *
            (uVar1 - uRam000000018301e9f8);
    uVar7 = (uVar7 | uRam000000018301e8a0) + (uVar7 & uRam000000018301e8a0);
    uVar7 = uVar7 * 0x2000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 << 0x11 ^ uVar7;
    uStack_140 = uRam000000018301ead0;
    uStack_130 = uVar2;
    uRam000000018301e9f0 =
         func_0x00018350fcb0((uVar1 ^ 0x84222325 | uVar7) +
                             (ulonglong)((uint)(uVar1 ^ 0x84222325) & (uint)uVar7));
    uVar7 = uRam000000018301e9f0 ^ uVar1;
    uVar2 = uVar7 >> 1 | uVar7;
    uVar2 = uVar2 >> 2 | uVar2;
    uVar2 = uVar2 >> 4 | uVar2;
    uVar2 = uVar2 >> 8 | uVar2;
    uVar2 = uVar2 >> 0x10 | uVar2;
    uVar2 = uVar2 >> 0x20 | uVar2;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar7 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
            ^ uVar7;
    uVar3 = uVar6 * uVar6 * 0x4486e04f;
    uRam000000018301e8d8 = (uRam000000018301e8d8 ^ uVar7) - uVar1 ^ 0xcaab6fdc71eb9db2;
    uRam000000018301eae0 =
         (uRam000000018301eae0 * 0x164afe5502509b57 ^ uRam000000018301e8d8) + uVar7;
    uRam000000018301ed60 = uRam000000018301eae0 ^ uRam000000018301e8d8;
    uVar2 = CONCAT44(0,uVar3);
    uVar4 = uVar4 + 0x45d9f3b;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar2;
    auVar20._4_4_ = 0;
    auVar20._0_4_ = uVar4 ^ 0x84222325;
    auVar20._8_4_ = uVar3;
    auVar20._12_4_ = 0;
    auVar16 = pshufb(auVar20 ^ _UNK_18001b4e0,auVar14);
    uVar1 = auVar16._8_8_ + auVar16._0_8_;
    uVar7 = uVar1 + uRam000000018301ebe8;
    if (auVar16._4_4_ < 0) {
      uVar7 = uRam000000018301ec88 ^ uVar1;
    }
    uRam000000018301ed20 = uVar2;
    uRam000000018301e9f8 = func_0x00018350fcb0(SUB161(auVar20 ^ _UNK_18001b4e0,5) ^ uVar7);
    uVar35 = uVar4 & uVar3;
    uVar12 = uVar4 | uVar3;
    uVar7 = (uVar2 * uVar4 ^ uRam000000018301e9f8) & 0x7fffffffffffe;
    auVar39._8_4_ = 0xffffffff;
    auVar39._0_8_ = 0xffffffffffffffff;
    auVar39._12_4_ = 0xffffffff;
    auVar41._8_4_ = 0xffffffff;
    auVar41._0_8_ = 0xffffffffffffffff;
    auVar41._12_4_ = 0xffffffff;
    uVar27 = SUB164(auVar47 ^ auVar39,0);
    uVar2 = (ulonglong)(uVar4 ^ uVar3) * (ulonglong)_UNK_18001b550 +
            ((ulonglong)_UNK_18001b560 * (ulonglong)(uVar4 ^ uVar3) << 0x20) +
            ((ulonglong)_UNK_18001b540 * (ulonglong)uVar12 << 0x20) +
            (ulonglong)_UNK_18001b530 * (ulonglong)uVar12 +
            ((ulonglong)_UNK_18001b520 * (ulonglong)uVar35 << 0x20) +
            (ulonglong)_UNK_18001b510 * (ulonglong)uVar35 +
            ((ulonglong)_UNK_18001b500 * (ulonglong)uVar3 << 0x20) +
            (ulonglong)_UNK_18001b4f0 * (ulonglong)uVar3 +
            ((ulonglong)uVar4 * (ulonglong)_UNK_18001b500 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_UNK_18001b4f0 +
            (-((ulonglong)uVar27 * (ulonglong)_UNK_18001b620 +
              ((ulonglong)_UNK_18001b630 * (ulonglong)uVar27 +
               (SUB168(auVar47 ^ auVar39,0) >> 0x20) * (ulonglong)_UNK_18001b620 << 0x20)) -
            (((ulonglong)(uVar4 ^ 0xffffffff) * (ulonglong)_UNK_18001b600 + _UNK_18001b610 << 0x20)
             + (ulonglong)_UNK_18001b5f0 * (ulonglong)(uVar4 ^ 0xffffffff) +
            ((ulonglong)uVar12 * (ulonglong)_UNK_18001b5e0 << 0x20) +
            (ulonglong)_UNK_18001b5d0 * (ulonglong)uVar12 +
            ((ulonglong)uVar35 * (ulonglong)_UNK_18001b5e0 << 0x20) +
            (ulonglong)uVar35 * (ulonglong)_UNK_18001b5d0 +
            ((ulonglong)uVar3 * (ulonglong)_UNK_18001b5c0 << 0x20) +
            (ulonglong)_UNK_18001b5b0 * (ulonglong)uVar3 +
            ((ulonglong)uVar4 * (ulonglong)_UNK_18001b5a0 << 0x20) +
            (ulonglong)_UNK_18001b590 * (ulonglong)uVar4)) + 0x788fe208cdb01160;
    uRam000000018301e850 = uRam000000018301ece8 ^ uVar7 ^ uVar2;
    uRam000000018301eb08 = (uRam000000018301eb08 ^ uVar7) + uVar2 ^ 0xf4375cbbc3f6e8b3;
    uRam000000018301e8e8 =
         (uRam000000018301e8e8 * 0x4f5bac83a3981921 ^ uRam000000018301eb08) + uVar7;
    uRam000000018301eb38 = uRam000000018301e8e8 ^ uRam000000018301eb08;
    uVar29 = uVar2 & 0xffffffff;
    uVar3 = uVar5 * uVar5 * -0x3206660;
    uVar26 = CONCAT44(0,uVar3);
    auVar21._8_4_ = uVar3;
    auVar21._0_8_ = _UNK_18001b640;
    auVar21._12_4_ = 0;
    auVar16 = pshufb(auVar21 ^ _UNK_18001b650,auVar14);
    uVar1 = auVar16._8_8_ + auVar16._0_8_;
    uVar7 = uVar1 + uRam000000018301ede0;
    if (auVar16._4_4_ < 0) {
      uVar7 = uRam000000018301eae8 ^ uVar1;
    }
    uRam000000018301ea70 = uVar29;
    uRam000000018301ea30 = func_0x00018350fcb0(uVar7 ^ 0x7b);
    uVar4 = uVar5 * uVar5 * 0x3206660;
    uVar1 = (ulonglong)uVar4;
    uRam000000018301e998 =
         (uRam000000018301e998 ^ uRam000000018301ea30 >> 0xb) - uVar26 ^ 0xed22340d918a8d37;
    uRam000000018301e9f0 =
         (uRam000000018301e9f0 * 0x1dbda9b2adfaca53 ^ uRam000000018301e998) +
         (uRam000000018301ea30 >> 0xb);
    uRam000000018301ee20 = uRam000000018301e9f0 ^ uRam000000018301e998;
    uVar32 = uVar29 ^ 0x84222325;
    uVar7 = ((uRam000000018301e6b8 ^ uVar32) +
            (ulonglong)((uint)uRam000000018301e6b8 & (uint)uVar32) * 2) *
            (uVar26 - uRam000000018301e918);
    uVar7 = (uVar7 | uRam000000018301e9b0) + (uVar7 & uRam000000018301e9b0);
    uVar7 = uVar7 * 0x2000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 << 0x11 ^ uVar7;
    uRam000000018301eb48 = uVar1;
    uRam000000018301ec50 =
         func_0x00018350fcb0((uVar32 ^ uVar26 | uVar7) +
                             (ulonglong)((uint)(uVar32 ^ uVar26) & (uint)uVar7));
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar26;
    uVar12 = SUB164(auVar37 ^ auVar41,0);
    uVar7 = uRam000000018301ec50 << 9 | uRam000000018301ec50 >> 0x37;
    uVar27 = (uint)uVar2 & uVar3;
    uVar35 = (uint)uVar2 | uVar3;
    uVar2 = (((ulonglong)uVar12 * (ulonglong)_UNK_18001b680 +
              ((SUB168(auVar37 ^ auVar41,0) >> 0x20) * (ulonglong)_UNK_18001b680 +
               (ulonglong)_UNK_18001b660 * (ulonglong)uVar12 << 0x20) +
              (ulonglong)_UNK_18001b670 * (ulonglong)uVar3 +
              ((ulonglong)uVar3 * (ulonglong)_UNK_18001b660 << 0x20) + uVar29) -
            ((uVar29 ^ uVar26) * (ulonglong)_UNK_18001b710 +
             ((ulonglong)_UNK_18001b720 * (uVar29 ^ uVar26) << 0x20) +
             ((ulonglong)uVar35 * (ulonglong)_UNK_18001b700 << 0x20) +
             (ulonglong)_UNK_18001b6f0 * (ulonglong)uVar35 +
            ((ulonglong)uVar27 * (ulonglong)_UNK_18001b6e0 << 0x20) +
            (ulonglong)_UNK_18001b6d0 * (ulonglong)uVar27 +
            ((ulonglong)uVar3 * (ulonglong)_UNK_18001b6c0 << 0x20) +
            (ulonglong)_UNK_18001b6b0 * (ulonglong)uVar3 +
            (uVar2 & 0xffffffff) * (ulonglong)_UNK_18001b6b0 +
            ((uVar2 & 0xffffffff) * (ulonglong)_UNK_18001b6c0 << 0x20))) + 0xf9efe370f52f13fb;
    uRam000000018301edc0 = uRam000000018301eba8 ^ uVar7 ^ uVar2;
    uRam000000018301ea78 = (uRam000000018301ea78 ^ uVar7) + uVar2 ^ 0x5615d51dc14f854f;
    uRam000000018301ea90 =
         (uRam000000018301ea90 * 0x2a7735c6e5d36da7 ^ uRam000000018301ea78) + uVar7;
    uRam000000018301e7b8 = uRam000000018301ea90 ^ uRam000000018301ea78;
    uVar26 = uVar2 & 0xffffffff;
    uVar7 = uVar26 ^ 0x84222325 ^ uRam000000018301ed78;
    lVar8 = (uVar26 ^ 0x84222325) + uRam000000018301edb8;
    uVar29 = uVar7 + lVar8;
    uVar32 = (uVar1 ^ uRam000000018301edb8) + uRam000000018301ed78 + uVar1;
    uVar7 = (uVar29 * 0x2000 | uVar29 >> 0x33) ^ uVar7;
    uVar29 = (uVar32 * 0x2000 | uVar32 >> 0x33) ^ uVar1 ^ uRam000000018301edb8;
    uRam000000018301ea28 = uVar26;
    uRam000000018301e9a8 =
         func_0x00018350fcb0((uVar29 << 0x1d | uVar29 >> 0x23) - (uRam000000018301ed78 + uVar1) ^
                             (uVar7 << 0x1d | uVar7 >> 0x23) - lVar8);
    uRam000000018301e668 = uRam000000018301e668 & 0x7fffffffffff;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar26;
    uVar3 = (uint)uVar2;
    uVar27 = uVar3 & uVar4;
    uVar12 = uVar3 ^ uVar4;
    uVar35 = SUB164(auVar30 ^ auVar41,0);
    uVar2 = ((((ulonglong)_UNK_18001b7a0 * (ulonglong)uVar12 << 0x20) +
              (ulonglong)_UNK_18001b790 * (ulonglong)uVar12 +
              ((ulonglong)(uVar3 | uVar4) * (ulonglong)_UNK_18001b780 << 0x20) +
              (ulonglong)_UNK_18001b770 * (ulonglong)(uVar3 | uVar4) +
             ((ulonglong)_UNK_18001b760 * (ulonglong)uVar27 << 0x20) +
             (ulonglong)_UNK_18001b750 * (ulonglong)uVar27 +
             ((ulonglong)_UNK_18001b740 * (ulonglong)uVar4 << 0x20) +
             (ulonglong)_UNK_18001b730 * (ulonglong)uVar4 +
             (uVar2 & 0xffffffff) * (ulonglong)_UNK_18001b730 +
             ((uVar2 & 0xffffffff) * (ulonglong)_UNK_18001b740 << 0x20)) -
            ((ulonglong)uVar35 * (_UNK_18001b810 & 0xffffffff) +
             ((ulonglong)_UNK_18001b860 * (ulonglong)uVar35 +
              (SUB168(auVar30 ^ auVar41,0) >> 0x20) * (_UNK_18001b810 & 0xffffffff) << 0x20) +
             ((ulonglong)uVar12 * (ulonglong)_UNK_18001b850 << 0x20) +
             (ulonglong)_UNK_18001b840 * (ulonglong)uVar12 +
            ((ulonglong)uVar27 * (ulonglong)_UNK_18001b830 << 0x20) +
            (ulonglong)_UNK_18001b820 * (ulonglong)uVar27 +
            ((ulonglong)uVar4 * (ulonglong)_UNK_18001b800 << 0x20) +
            (ulonglong)_UNK_18001b7f0 * (ulonglong)uVar4 +
            (ulonglong)_UNK_18001b7d0 * (uVar2 & 0xffffffff) +
            ((uVar2 & 0xffffffff) * (ulonglong)_UNK_18001b7e0 << 0x20))) + 0x3407c90adab0ad03;
    uRam000000018301e830 = uRam000000018301e6b0 ^ uRam000000018301e668 ^ uVar2;
    uRam000000018301ee18 =
         (uRam000000018301ee18 ^ uRam000000018301e668) + uVar2 ^ 0x7d9557e8fe352126;
    uRam000000018301e8b8 =
         (uRam000000018301e8b8 * -0x27bdc1cfb6400d33 ^ uRam000000018301ee18) + uRam000000018301e668;
    uRam000000018301ecd0 = uRam000000018301e8b8 ^ uRam000000018301ee18;
    uVar4 = (uint)uVar2;
    uVar3 = uVar6 * uVar5 * -0x58c4a939;
    uVar1 = CONCAT44(0,uVar3);
    uVar7 = ((uRam000000018301e960 ^ 0x84222325) +
            (ulonglong)((uint)uRam000000018301e960 & 0x84222325) * 2) *
            (uVar1 - lRam000000018301e718);
    uVar7 = (uVar7 | uRam000000018301ec10) + (uVar7 & uRam000000018301ec10);
    uVar7 = uVar7 * 0x2000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 << 0x11 ^ uVar7;
    uRam000000018301e668 = uVar2 & 0xffffffff;
    uRam000000018301edd0 =
         func_0x00018350fcb0((uVar1 ^ 0x84222325 | uVar7) +
                             (ulonglong)((uint)(uVar1 ^ 0x84222325) & (uint)uVar7));
    uVar6 = uVar6 * uVar5 * 0x58c4a939;
    uRam000000018301ece0 =
         (uRam000000018301ece0 ^ uRam000000018301edd0 * 0x1388ad13c6148dcd) - uVar1 ^
         0x42383b44dd8f05b5;
    uRam000000018301e720 =
         (uRam000000018301e720 * 0x2b4cb356f6aba1b1 ^ uRam000000018301ece0) +
         uRam000000018301edd0 * 0x1388ad13c6148dcd;
    uRam000000018301e958 = uRam000000018301e720 ^ uRam000000018301ece0;
    uRam000000018301eaa0 = (ulonglong)uVar6;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar1;
    auVar22._4_4_ = 0;
    auVar22._0_4_ = uVar4 ^ 0x84222325;
    auVar22._8_4_ = uVar3;
    auVar22._12_4_ = 0;
    auVar14 = pshufb(auVar22 ^ _UNK_18001b870,auVar14);
    uVar1 = auVar14._8_8_ + auVar14._0_8_;
    uVar7 = uVar1 + uRam000000018301ed38;
    if (auVar14._4_4_ < 0) {
      uVar7 = uRam000000018301eb78 ^ uVar1;
    }
    uRam000000018301ebc0 = func_0x00018350fcb0(SUB161(auVar22 ^ _UNK_18001b870,5) ^ uVar7);
    uVar7 = uStack_140;
    uVar1 = uRam000000018301ebc0 << 0x11 | (uRam000000018301ebc0 & 0x7fffffffffffffff) >> 0x2f;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar2 & 0xffffffff;
    uVar27 = uVar4 & uVar3;
    uVar5 = uVar4 | uVar3;
    uVar4 = uVar4 ^ uVar3;
    uVar35 = SUB164(auVar48 ^ auVar41,0);
    uVar12 = SUB164(auVar33 ^ auVar41,0);
    uRam000000018301ec48 =
         (ulonglong)uVar35 * (ulonglong)_UNK_18001b8c0 +
         ((ulonglong)_UNK_18001b930 * (ulonglong)uVar35 +
          (SUB168(auVar48 ^ auVar41,0) >> 0x20) * (ulonglong)_UNK_18001b8c0 << 0x20) +
         ((ulonglong)_UNK_18001b920 * (ulonglong)uVar4 << 0x20) +
         (ulonglong)_UNK_18001b910 * (ulonglong)uVar4 +
         ((ulonglong)_UNK_18001b900 * (ulonglong)uVar5 << 0x20) +
         (ulonglong)_UNK_18001b8f0 * (ulonglong)uVar5 +
         ((ulonglong)_UNK_18001b8e0 * (ulonglong)uVar27 << 0x20) +
         (ulonglong)_UNK_18001b8d0 * (ulonglong)uVar27 +
         ((ulonglong)_UNK_18001b8b0 * (ulonglong)uVar3 << 0x20) +
         (ulonglong)_UNK_18001b8a0 * (ulonglong)uVar3 +
         (ulonglong)_UNK_18001b880 * (uVar2 & 0xffffffff) +
         ((ulonglong)_UNK_18001b890 * (uVar2 & 0xffffffff) << 0x20) +
         (-((ulonglong)uVar12 * (ulonglong)_UNK_18001b9a0 +
           ((ulonglong)_UNK_18001ba10 * (ulonglong)uVar12 +
            (SUB168(auVar33 ^ auVar41,0) >> 0x20) * (ulonglong)_UNK_18001b9a0 << 0x20)) -
         (((ulonglong)uVar4 * (ulonglong)_UNK_18001ba00 << 0x20) +
          (ulonglong)_UNK_18001b9f0 * (ulonglong)uVar4 +
          ((ulonglong)uVar5 * (ulonglong)_UNK_18001b9e0 << 0x20) +
          (ulonglong)_UNK_18001b9d0 * (ulonglong)uVar5 +
         ((ulonglong)uVar27 * (ulonglong)_UNK_18001b9c0 << 0x20) +
         (ulonglong)_UNK_18001b9b0 * (ulonglong)uVar27 +
         ((ulonglong)uVar3 * (ulonglong)_UNK_18001b990 << 0x20) +
         (ulonglong)_UNK_18001b980 * (ulonglong)uVar3 +
         (ulonglong)_UNK_18001b960 * (uVar2 & 0xffffffff) +
         ((uVar2 & 0xffffffff) * (ulonglong)_UNK_18001b970 << 0x20))) + 0xf87d4b502cbe0370;
    uRam000000018301ede8 = uRam000000018301e938 ^ uVar1 ^ uRam000000018301ec48;
    uRam000000018301e7a8 =
         (uRam000000018301e7a8 ^ uVar1) + uRam000000018301ec48 ^ 0xbb1f38c4f792f987;
    uRam000000018301ec20 =
         (uRam000000018301ec20 * 0x66aeb3768ec40323 ^ uRam000000018301e7a8) + uVar1;
    uRam000000018301e7a0 = uRam000000018301ec20 ^ uRam000000018301e7a8;
    iStack_120 = (int)uRam000000018301ec48;
    uRam000000018301ec48 = uRam000000018301ec48 & 0xffffffff;
    uVar26 = uStack_140 ^ 0x84222325;
    uVar2 = (uVar26 ^ uRam000000018301e8a0) + uRam000000018301e660 + uVar26;
    uVar1 = (uVar9 ^ uRam000000018301e660) + uRam000000018301e8a0 + uVar9;
    uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar26 ^ uRam000000018301e8a0;
    uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ uVar9 ^ uRam000000018301e660;
    uRam000000018301e8e0 =
         func_0x00018350fcb0((uVar1 << 0x1d | uVar1 >> 0x23) - (uRam000000018301e8a0 + uVar9) ^
                             (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018301e660 + uVar26));
    uVar2 = (uRam000000018301e8e0 & 0xffffffff) * (ulonglong)_UNK_18001ba20 +
            ((ulonglong)_UNK_18001ba30 * (uRam000000018301e8e0 & 0xffffffff) +
             (uRam000000018301e8e0 >> 0x20) * (ulonglong)_UNK_18001ba20 << 0x20) ^ uVar7;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar9;
    uVar12 = (uint)uVar9;
    uVar5 = (uint)uVar7;
    uVar35 = uVar5 & uVar12;
    uVar3 = uVar5 | uVar12;
    auVar52._8_8_ = uVar9;
    auVar52._0_8_ = uVar26;
    uVar4 = SUB164(auVar50 ^ auVar41,0);
    auVar14 = pshufb(auVar52 ^ _UNK_18001bb90,_UNK_1800170c0);
    uRam000000018301eae0 =
         (((ulonglong)uVar4 * (ulonglong)_UNK_18001bad0 +
           ((ulonglong)_UNK_18001bae0 * (ulonglong)uVar4 +
            (SUB168(auVar50 ^ auVar41,0) >> 0x20) * (ulonglong)_UNK_18001bad0 << 0x20) +
          ((ulonglong)(uVar5 ^ 0xffffffff) * (ulonglong)_UNK_18001bab0 + _UNK_18001bac0 << 0x20) +
          (ulonglong)_UNK_18001baa0 * (ulonglong)(uVar5 ^ 0xffffffff) +
          ((ulonglong)_UNK_18001ba90 * (ulonglong)uVar3 << 0x20) +
          (ulonglong)_UNK_18001ba80 * (ulonglong)uVar3 +
          ((ulonglong)uVar35 * (ulonglong)_UNK_18001ba90 << 0x20) +
          (ulonglong)uVar35 * (ulonglong)_UNK_18001ba80 +
          (_UNK_18001ba70 * uVar9 << 0x20) + _UNK_18001ba60 * uVar9 +
          ((ulonglong)_UNK_18001ba50 * (uVar7 & 0xffffffff) << 0x20) +
          (ulonglong)_UNK_18001ba40 * (uVar7 & 0xffffffff)) -
         (((uVar7 ^ uVar9) & 0xffffffff) * (ulonglong)_UNK_18001bb70 +
          ((ulonglong)_UNK_18001bb80 * ((uVar7 ^ uVar9) & 0xffffffff) +
           (uVar7 >> 0x20) * (ulonglong)_UNK_18001bb70 << 0x20) +
          ((ulonglong)uVar3 * (ulonglong)_UNK_18001bb60 << 0x20) +
          (ulonglong)_UNK_18001bb50 * (ulonglong)uVar3 +
         ((ulonglong)uVar35 * (ulonglong)_UNK_18001bb40 << 0x20) +
         (ulonglong)_UNK_18001bb30 * (ulonglong)uVar35 +
         (uVar9 * _UNK_18001bb20 << 0x20) + _UNK_18001bb10 * uVar9 +
         ((uVar7 & 0xffffffff) * (ulonglong)_UNK_18001bb20 << 0x20) +
         (uVar7 & 0xffffffff) * (ulonglong)_UNK_18001bb10)) + 0x6d0ebf5c38999160;
    uRam000000018301e978 = uRam000000018301ec90 ^ uVar2 ^ uRam000000018301eae0;
    uRam000000018301eb58 =
         (uRam000000018301eb58 ^ uVar2) + uRam000000018301eae0 ^ 0x2a3ac31986f7c8fa;
    uRam000000018301e910 = (uRam000000018301e910 * 0xd7e558ece88e03 ^ uRam000000018301eb58) + uVar2;
    uRam000000018301ea08 = uRam000000018301e910 ^ uRam000000018301eb58;
    uRam000000018301eae0 = uRam000000018301eae0 & 0xffffffff;
    uVar1 = auVar14._8_8_ + auVar14._0_8_;
    uVar2 = uVar1 + uRam000000018301e798;
    if (auVar14._4_4_ < 0) {
      uVar2 = uRam000000018301e920 ^ uVar1;
    }
    uStack_100 = uRam000000018301eae0;
    uRam000000018301ec48 = func_0x00018350fcb0(SUB161(auVar52 ^ _UNK_18001bb90,5) ^ uVar2);
    uVar2 = (uRam000000018301ec48 ^ uVar7) & 0xfffffffffff;
    uVar1 = ((uRam000000018301ec48 ^ uVar7) & 0xfffffffffff) >> 1 | uVar2;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    uVar1 = uVar1 >> 0x20 | uVar1 >> 0x10 | uVar1;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
    uVar2 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
            uVar2;
    uVar1 = uVar7 ^ uVar9;
    uRam000000018301eda8 = (uRam000000018301eda8 ^ uVar2) + uVar1 ^ 0xde3f3ac6355ca293;
    uRam000000018301e710 =
         (uRam000000018301e710 * -0x415fc63212056c9d ^ uRam000000018301eda8) + uVar2;
    uRam000000018301e9a8 = uRam000000018301e710 ^ uRam000000018301eda8;
    uVar2 = ((uRam000000018301ee00 ^ uVar26) +
            (ulonglong)((uint)uRam000000018301ee00 & (uint)uVar26) * 2) *
            (uVar9 - lRam000000018301e8b0);
    uVar2 = (uVar2 | uRam000000018301eb50) + (uVar2 & uRam000000018301eb50);
    uVar2 = uVar2 * 0x2000 ^ uVar2;
    uVar2 = uVar2 >> 7 ^ uVar2;
    uVar2 = uVar2 << 0x11 ^ uVar2;
    uRam000000018301e6e0 = uVar1;
    uRam000000018301eab0 =
         func_0x00018350fcb0((uVar26 ^ uVar9 | uVar2) +
                             (ulonglong)((uint)(uVar26 ^ uVar9) & (uint)uVar2));
    uVar7 = uVar7 * uVar9 ^ uRam000000018301eab0 ^ uVar7;
    uVar4 = (uint)uStack_138;
    uRam000000018301e710 = (ulonglong)(uVar12 & (uint)uStack_138);
    uRam000000018301ea90 =
         (uRam000000018301ea90 ^ uVar7) + uRam000000018301e710 ^ 0xe33de207a94cc8cd;
    uRam000000018301eb48 =
         (uRam000000018301eb48 * 0x1b79dc7abbdebb4f ^ uRam000000018301ea90) + uVar7;
    uRam000000018301edd0 = uRam000000018301eb48 ^ uRam000000018301ea90;
    uVar5 = (uVar12 & (uint)uStack_138) * 2;
    uVar9 = CONCAT44(0,uVar5);
    uVar2 = uVar1 ^ 0x84222325;
    uVar7 = ((uRam000000018301eb80 ^ uVar2) +
            (ulonglong)((uint)uRam000000018301eb80 & (uint)uVar2) * 2) *
            (uVar9 - lRam000000018301ecc0);
    uVar7 = (uVar7 | uRam000000018301edd8) + (uVar7 & uRam000000018301edd8);
    uVar7 = uVar7 * 0x2000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 << 0x11 ^ uVar7;
    uRam000000018301ed28 =
         func_0x00018350fcb0((uVar2 ^ uVar9 | uVar7) +
                             (ulonglong)((uint)(uVar2 ^ uVar9) & (uint)uVar7));
    uVar7 = uStack_100;
    uVar2 = uRam000000018301ed28 >> 1 | uRam000000018301ed28;
    uVar2 = uVar2 >> 2 | uVar2;
    uVar2 = uVar2 >> 4 | uVar2;
    uVar2 = uVar2 >> 8 | uVar2;
    uVar2 = uVar2 >> 0x10 | uVar2;
    uVar2 = uVar2 >> 0x20 | uVar2;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
            ^ uRam000000018301ed28;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar1;
    uVar3 = (uint)uVar1;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar9;
    uVar27 = uVar3 & uVar5;
    uVar12 = uVar3 | uVar5;
    uVar3 = uVar3 ^ uVar5;
    auVar42._8_4_ = 0xffffffff;
    auVar42._0_8_ = 0xffffffffffffffff;
    auVar42._12_4_ = 0xffffffff;
    uVar28 = SUB164(auVar49 ^ auVar42,0);
    uVar35 = SUB164(auVar34 ^ auVar42,0);
    uVar9 = (ulonglong)uVar28 * (ulonglong)_UNK_18001bbe0 +
            ((ulonglong)_UNK_18001bc50 * (ulonglong)uVar28 +
             (SUB168(auVar49 ^ auVar42,0) >> 0x20) * (ulonglong)_UNK_18001bbe0 << 0x20) +
            ((ulonglong)_UNK_18001bc40 * (ulonglong)uVar3 << 0x20) +
            (ulonglong)_UNK_18001bc30 * (ulonglong)uVar3 +
            ((ulonglong)_UNK_18001bc20 * (ulonglong)uVar12 << 0x20) +
            (ulonglong)_UNK_18001bc10 * (ulonglong)uVar12 +
            ((ulonglong)_UNK_18001bc00 * (ulonglong)uVar27 << 0x20) +
            (ulonglong)_UNK_18001bbf0 * (ulonglong)uVar27 +
            ((ulonglong)_UNK_18001bbd0 * (ulonglong)uVar5 << 0x20) +
            (ulonglong)_UNK_18001bbc0 * (ulonglong)uVar5 +
            ((ulonglong)_UNK_18001bbb0 * (uVar1 & 0xffffffff) << 0x20) +
            (ulonglong)_UNK_18001bba0 * (uVar1 & 0xffffffff) +
            (-((ulonglong)uVar35 * (_UNK_18001bcc0 & 0xffffffff) +
              ((ulonglong)_UNK_18001bd30 * (ulonglong)uVar35 +
               (SUB168(auVar34 ^ auVar42,0) >> 0x20) * (_UNK_18001bcc0 & 0xffffffff) << 0x20)) -
            (((ulonglong)uVar3 * (ulonglong)_UNK_18001bd20 << 0x20) +
             (ulonglong)_UNK_18001bd10 * (ulonglong)uVar3 +
             ((ulonglong)uVar12 * (ulonglong)_UNK_18001bd00 << 0x20) +
             (ulonglong)_UNK_18001bcf0 * (ulonglong)uVar12 +
            ((ulonglong)uVar27 * (ulonglong)_UNK_18001bce0 << 0x20) +
            (ulonglong)_UNK_18001bcd0 * (ulonglong)uVar27 +
            ((ulonglong)uVar5 * (ulonglong)_UNK_18001bcb0 << 0x20) +
            (ulonglong)_UNK_18001bca0 * (ulonglong)uVar5 +
            ((uVar1 & 0xffffffff) * (ulonglong)_UNK_18001bc90 << 0x20) +
            (ulonglong)_UNK_18001bc80 * (uVar1 & 0xffffffff))) + 0xb786edc15e7004da;
    uRam000000018301e738 = uRam000000018301e670 ^ uVar2 ^ uVar9;
    uRam000000018301e6a0 = (uRam000000018301e6a0 ^ uVar2) + uVar9 ^ 0xbccf549824f5f6ea;
    uRam000000018301e868 =
         (uRam000000018301e868 * -0x5722d37bbb6650cb ^ uRam000000018301e6a0) + uVar2;
    uRam000000018301e830 = uRam000000018301e868 ^ uRam000000018301e6a0;
    uVar1 = uVar9 & 0xffffffff;
    uVar29 = uStack_100 ^ 0x84222325;
    uVar2 = ((uRam000000018301e7e8 ^ uVar29) +
            (ulonglong)((uint)uRam000000018301e7e8 & (uint)uVar29) * 2) *
            (uVar1 - uRam000000018301ebd8);
    uVar2 = (uVar2 | uRam000000018301e648) + (uVar2 & uRam000000018301e648);
    uVar2 = uVar2 * 0x2000 ^ uVar2;
    uVar2 = uVar2 >> 7 ^ uVar2;
    uVar2 = uVar2 << 0x11 ^ uVar2;
    uRam000000018301e6c8 = uVar1;
    uRam000000018301e698 =
         func_0x00018350fcb0((uVar29 ^ uVar1 | uVar2) +
                             (ulonglong)((uint)(uVar29 ^ uVar1) & (uint)uVar2));
    uVar2 = (~uRam000000018301e698 & uVar7) * -0x77c46e8c9224d96f;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar1;
    uVar5 = (uint)uVar7;
    uVar3 = (uint)uVar9;
    uVar12 = uVar5 ^ 0xffffffff;
    auVar43._8_4_ = 0xffffffff;
    auVar43._0_8_ = 0xffffffffffffffff;
    auVar43._12_4_ = 0xffffffff;
    uVar35 = SUB164(auVar31 ^ auVar43,0);
    uVar9 = ((((ulonglong)_UNK_18001bdf0 * (ulonglong)uVar12 + _UNK_18001be00 << 0x20) +
              (ulonglong)_UNK_18001bde0 * (ulonglong)uVar12 +
             ((ulonglong)(uVar5 ^ uVar3) * (ulonglong)_UNK_18001bdd0 << 0x20) +
             (ulonglong)_UNK_18001bdc0 * (ulonglong)(uVar5 ^ uVar3) +
             ((ulonglong)(uVar5 | uVar3) * (ulonglong)_UNK_18001bdb0 << 0x20) +
             (ulonglong)_UNK_18001bda0 * (ulonglong)(uVar5 | uVar3) +
             ((ulonglong)(uVar5 & uVar3) * (ulonglong)_UNK_18001bd90 << 0x20) +
             (ulonglong)_UNK_18001bd80 * (ulonglong)(uVar5 & uVar3) +
             ((ulonglong)_UNK_18001bd70 * (uVar9 & 0xffffffff) << 0x20) +
             (ulonglong)_UNK_18001bd60 * (uVar9 & 0xffffffff) +
             ((ulonglong)_UNK_18001bd50 * (uVar7 & 0xffffffff) << 0x20) +
             (ulonglong)_UNK_18001bd40 * (uVar7 & 0xffffffff)) -
            ((ulonglong)uVar35 * (ulonglong)_UNK_18001be50 +
             ((SUB168(auVar31 ^ auVar43,0) >> 0x20) * (ulonglong)_UNK_18001be50 +
              (ulonglong)_UNK_18001be60 * (ulonglong)uVar35 << 0x20) +
            ((ulonglong)uVar12 * (ulonglong)_UNK_18001be40 + _UNK_18001be70 << 0x20) +
            (ulonglong)_UNK_18001be30 * (ulonglong)uVar12 +
            ((uVar9 & 0xffffffff) * (ulonglong)_UNK_18001be60 << 0x20) +
            (uVar9 & 0xffffffff) * (ulonglong)_UNK_18001be50 +
            ((uVar7 & 0xffffffff) * (ulonglong)_UNK_18001be40 << 0x20) +
            (uVar7 & 0xffffffff) * (ulonglong)_UNK_18001be30)) + 0xa9320e11ab2be2e0;
    uRam000000018301ebf0 = uVar9 ^ uVar2;
    uRam000000018301e830 = (uRam000000018301e830 ^ uVar2) + uVar9 ^ 0x28a7ca1decff2aac;
    uRam000000018301ea48 =
         (uRam000000018301ea48 * 0x58a7d6c3f316503b ^ uRam000000018301e830) + uVar2;
    uRam000000018301e828 = uRam000000018301ea48 ^ uRam000000018301e830;
    uRam000000018301e780 = uVar9 & 0xffffffff;
    uVar7 = ~uVar4 ^ uRam000000018301eb18;
    lVar8 = ~uVar4 + uRam000000018301e728;
    uVar2 = (uVar26 ^ uRam000000018301e728) + uVar26 + uRam000000018301eb18;
    uVar1 = uVar7 + lVar8;
    uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar26 ^ uRam000000018301e728;
    uVar7 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ uVar7;
    uVar6 = uVar6 + (int)uVar9 + iStack_120;
    uRam000000018301e8c8 =
         func_0x00018350fcb0((uVar7 << 0x1d | uVar7 >> 0x23) - lVar8 ^
                             (uVar2 << 0x1d | uVar2 >> 0x23) - (uVar26 + uRam000000018301eb18));
    uRam000000018301e640 = uRam000000018301e640 ^ uRam000000018301e8c8 ^ 0x2a52345275b34826;
    uRam000000018301e930 =
         (uRam000000018301e930 * -0x775e91fe375100ab ^ uRam000000018301e640) + uRam000000018301e8c8;
    uRam000000018301eaf8 = uRam000000018301e930 ^ uRam000000018301e640;
    auVar14 = pshufb(ZEXT416(uVar6 ^ 0x84222325),_UNK_18001be80);
    auVar14 = auVar14 ^ _UNK_18001be90;
    uRam000000018301eb10 = 0;
    uVar2 = auVar14._8_8_ + auVar14._0_8_;
    uVar7 = uVar2 + uRam000000018301ea50;
    if (auVar14._4_4_ < 0) {
      uVar7 = uRam000000018301ede8 ^ uVar2;
    }
    uRam000000018301ea50 = func_0x00018350fcb0(uVar7 ^ 0x70);
    uVar7 = uStack_130;
    uVar2 = (uRam000000018301ea50 & 0x7fffffffff) << 0x18 | uRam000000018301ea50 >> 0x28;
    uVar9 = ((((ulonglong)(uVar6 ^ 0xffffffff) * (ulonglong)_UNK_18001bef0 + _UNK_18001bf00 << 0x20)
              + (ulonglong)_UNK_18001bee0 * (ulonglong)(uVar6 ^ 0xffffffff) +
             ((ulonglong)_UNK_18001bed0 * (ulonglong)uVar6 << 0x20) +
             (ulonglong)_UNK_18001bec0 * (ulonglong)uVar6 +
             ((ulonglong)_UNK_18001beb0 * (ulonglong)uVar6 << 0x20) +
             (ulonglong)_UNK_18001bea0 * (ulonglong)uVar6) -
            (((ulonglong)uVar6 * (ulonglong)_UNK_18001bf40 << 0x20) +
             (ulonglong)uVar6 * (ulonglong)_UNK_18001bf30 +
            ((ulonglong)_UNK_18001bf20 * (ulonglong)uVar6 << 0x20) +
            (ulonglong)_UNK_18001bf10 * (ulonglong)uVar6)) + 0x148470c07d6cc009;
    uRam000000018301e940 = uRam000000018301ecf0 ^ uVar2 ^ uVar9;
    uRam000000018301eb50 = (uRam000000018301eb50 ^ uVar2) + uVar9 ^ 0x7ca340dd1ffe72e3;
    uRam000000018301ed28 =
         (uRam000000018301ed28 * 0x32abc8fe4e465527 ^ uRam000000018301eb50) + uVar2;
    uRam000000018301edf8 = uRam000000018301ed28 ^ uRam000000018301eb50;
    uVar2 = (uStack_128 ^ uRam000000018301ede0) + uStack_128 + uRam000000018301ee00;
    uVar1 = (uStack_130 ^ uRam000000018301ee00) + uRam000000018301ede0 + uStack_130;
    uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uStack_128 ^ uRam000000018301ede0;
    uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ uStack_130 ^ uRam000000018301ee00;
    uRam000000018301e810 = uVar9 & 0xffffffff;
    uRam000000018301e668 =
         func_0x00018350fcb0((uVar1 << 0x1d | uVar1 >> 0x23) - (uRam000000018301ede0 + uStack_130) ^
                             (uVar2 << 0x1d | uVar2 >> 0x23) - (uStack_128 + uRam000000018301ee00));
    uVar7 = (uRam000000018301e668 ^ uVar7) << 0x3a | (uRam000000018301e668 ^ uVar7) >> 6;
    uRam000000018301ec58 = uRam000000018301ec58 ^ uVar7 ^ 0x13d219b39416f00b;
    uRam000000018301e8b8 =
         (uRam000000018301e830 * 0x3cd02fff330e7c15 ^ uRam000000018301ec58) + uVar7 ^
         uRam000000018301ec58;
    uRam000000018301e830 = 0;
    uVar7 = uVar9 & 0xffffffff ^ 0x84222325;
    uVar2 = uVar7 ^ uRam000000018301eb70;
    lVar8 = uVar7 + uRam000000018301ede8;
    uVar7 = uVar2 + lVar8;
    uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar2;
    uVar7 = ((uRam000000018301ede8 + uRam000000018301eb70) * 0x2000 |
            uRam000000018301ede8 + uRam000000018301eb70 >> 0x33) ^ uRam000000018301ede8;
    uRam000000018301e738 =
         func_0x00018350fcb0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018301eb70 ^
                             (uVar2 << 0x1d | uVar2 >> 0x23) - lVar8);
    uVar5 = (uint)uVar9 ^ 0xffffffff;
    auVar44._8_4_ = 0xffffffff;
    auVar44._0_8_ = 0xffffffffffffffff;
    auVar44._12_4_ = 0xffffffff;
    uVar6 = SUB164(ZEXT816(0) ^ auVar44,0);
    uRam000000018301eaf8 =
         ((((ulonglong)_UNK_18001c000 * (ulonglong)uVar5 + _UNK_18001c010 << 0x20) +
           (ulonglong)_UNK_18001bff0 * (ulonglong)uVar5 +
          ((ulonglong)_UNK_18001bfe0 * (uVar9 & 0xffffffff) << 0x20) +
          (ulonglong)_UNK_18001bfd0 * (uVar9 & 0xffffffff) +
          ((ulonglong)_UNK_18001bfc0 * (uVar9 & 0xffffffff) << 0x20) +
          (ulonglong)_UNK_18001bfb0 * (uVar9 & 0xffffffff) +
          (ulonglong)_UNK_18001bf50 * (uVar9 & 0xffffffff) +
          ((ulonglong)_UNK_18001bf60 * (uVar9 & 0xffffffff) << 0x20)) -
         ((ulonglong)uVar6 * (ulonglong)_UNK_18001c060 +
          ((SUB168(ZEXT816(0) ^ auVar44,0) >> 0x20) * (ulonglong)_UNK_18001c060 +
           (ulonglong)_UNK_18001c070 * (ulonglong)uVar6 << 0x20) +
          ((ulonglong)uVar5 * (ulonglong)_UNK_18001c050 + _UNK_18001c0c0 << 0x20) +
          (ulonglong)_UNK_18001c040 * (ulonglong)uVar5 +
          ((uVar9 & 0xffffffff) * (ulonglong)_UNK_18001c090 << 0x20) +
          (ulonglong)_UNK_18001c080 * (uVar9 & 0xffffffff) +
          (uVar9 & 0xffffffff) * (ulonglong)_UNK_18001c040 +
          ((uVar9 & 0xffffffff) * (ulonglong)_UNK_18001c050 << 0x20) +
         ((uVar9 & 0xffffffff) * (ulonglong)_UNK_18001c0b0 << 0x20) +
         (ulonglong)_UNK_18001c0a0 * (uVar9 & 0xffffffff))) + 0xba0419e79d2e3c8d;
    uVar6 = uStack_144 * (int)uRam000000018301eaf8;
    uVar5 = uVar6 >> 0x10;
    auVar25._4_4_ = 0;
    auVar25._0_4_ = uVar5 ^ 0x84222325;
    auVar25._8_4_ = uVar6;
    auVar25._12_4_ = 0;
    auVar14 = pshufb(auVar25 ^ _UNK_18001c0d0,_UNK_1800170c0);
    uRam000000018301ebe8 = uRam000000018301ed50 ^ uRam000000018301e738 ^ uRam000000018301eaf8;
    uRam000000018301e708 =
         (uRam000000018301e708 ^ uRam000000018301e738) + uRam000000018301eaf8 ^ 0x401668de4835ff55;
    uRam000000018301e798 =
         (uRam000000018301e798 * -0x1a944ed77311229 ^ uRam000000018301e708) + uRam000000018301e738;
    uRam000000018301e9f8 = uRam000000018301e798 ^ uRam000000018301e708;
    uRam000000018301eaf8 = uRam000000018301eaf8 & 0xffffffff;
    uVar2 = auVar14._8_8_ + auVar14._0_8_;
    uVar7 = uVar2 + uRam000000018301ea98;
    if (auVar14._4_4_ < 0) {
      uVar7 = uRam000000018301ec88 ^ uVar2;
    }
    uRam000000018301eb98 = func_0x00018350fcb0(SUB161(auVar25 ^ _UNK_18001c0d0,5) ^ uVar7);
    uStack_150 = uVar6 ^ uVar5;
    uRam000000018301e9d8 = (ulonglong)uStack_150;
    uRam000000018301ed18 =
         (uRam000000018301ed18 ^ uVar5 ^ uRam000000018301eb98) + uRam000000018301e9d8 ^
         0x4aaa859a427acc83;
    uRam000000018301e6a0 =
         (uRam000000018301e6a0 * 0x1a809229d37fd9eb ^ uRam000000018301ed18) +
         (uVar5 ^ uRam000000018301eb98);
    uRam000000018301ebb0 = uRam000000018301e6a0 ^ uRam000000018301ed18;
    uStack_158 = uStack_11c;
    uStack_154 = uStack_11c;
    uStack_14c = uStack_150;
    chacha_block(lStack_f8,&uStack_188,0x14);
    uVar7 = uStack_f0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uVar2 = (~uRam000000018301e908 + 2) *
            ((uRam000000018301e7c0 ^ uStack_f0 ^ 0x84222325) +
            ((uStack_f0 ^ 0x84222325) & uRam000000018301e7c0) * 2);
    uVar2 = (uVar2 | uRam000000018301e868) + (uVar2 & uRam000000018301e868);
    uVar2 = uVar2 * 0x2000 ^ uVar2;
    uVar2 = uVar2 >> 7 ^ uVar2;
    uVar2 = uVar2 << 0x11 ^ uVar2;
    uRam000000018301ec70 =
         func_0x00018350fcb0((uStack_f0 ^ 0x84222324 | uVar2) + (uVar2 & (uStack_f0 ^ 0x84222324)));
    uVar6 = (uint)(uVar7 >> 0x20);
    auVar38._8_4_ = (uint)uVar7;
    auVar38._0_8_ = uVar7;
    auVar38._12_4_ = uVar6;
    uVar3 = (uint)uVar7 & (uint)UNK_18001a990;
    uVar4 = SUB164(auVar38 | _UNK_18001a990,0);
    uVar5 = SUB164(_UNK_18001a990 ^ auVar38,0);
    uVar1 = SUB168(_UNK_18001a990 ^ auVar38,0);
    uVar2 = (uRam000000018301ec70 << 0x32 | uRam000000018301ec70 >> 0xe) * -0x7cf226dd64558dd9;
    uVar9 = uVar7 ^ _UNK_18001a710;
    uStack_f0 = (ulonglong)_UNK_18001c140 * (ulonglong)uVar5 +
                ((ulonglong)_UNK_18001c150 * (ulonglong)uVar5 +
                 (uVar1 >> 0x20) * (ulonglong)_UNK_18001c140 << 0x20) +
                (ulonglong)uVar4 * (ulonglong)_UNK_18001c120 +
                ((ulonglong)_UNK_18001c130 * (ulonglong)uVar4 +
                 (SUB168(auVar38 | _UNK_18001a990,0) >> 0x20) * (ulonglong)_UNK_18001c120 << 0x20) +
                ((ulonglong)_UNK_18001c110 * (ulonglong)uVar3 << 0x20 |
                (ulonglong)_UNK_18001c100 * (ulonglong)uVar3) +
                ((ulonglong)_UNK_18001c0f0 * (uVar7 & 0xffffffff) +
                 (ulonglong)_UNK_18001c0e0 * (ulonglong)uVar6 << 0x20) +
                (uVar7 & 0xffffffff) * (ulonglong)_UNK_18001c0e0 +
                (-((uVar9 & 0xffffffff) * (ulonglong)_UNK_18001c1e0 +
                  ((ulonglong)_UNK_18001c1f0 * (uVar9 & 0xffffffff) +
                   (uVar9 >> 0x20) * (ulonglong)_UNK_18001c1e0 << 0x20)) -
                ((ulonglong)uVar5 * (ulonglong)_UNK_18001c1c0 +
                 ((ulonglong)_UNK_18001c1d0 * (ulonglong)uVar5 +
                  (uVar1 >> 0x20) * (ulonglong)_UNK_18001c1c0 << 0x20) +
                ((ulonglong)uVar3 * (ulonglong)_UNK_18001c1b0 << 0x20 |
                (ulonglong)_UNK_18001c1a0 * (ulonglong)uVar3) +
                ((uVar7 & 0xffffffff) * (ulonglong)_UNK_18001c190 +
                 (ulonglong)uVar6 * (ulonglong)_UNK_18001c180 << 0x20) +
                (uVar7 & 0xffffffff) * (ulonglong)_UNK_18001c180)) + 0xc8ec210636ce73c;
    uRam000000018301e888 = uRam000000018301e9d8 ^ uVar2 ^ uStack_f0;
    uRam000000018301edd0 = (uRam000000018301edd0 ^ uVar2) + uStack_f0 ^ 0x5f9136a7cd11f30e;
    uRam000000018301e7d8 =
         (uRam000000018301e7d8 * -0x1612e9fda17f60d1 ^ uRam000000018301edd0) + uVar2;
    uRam000000018301ee38 = uRam000000018301e7d8 ^ uRam000000018301edd0;
    uRam000000018301ec98 = uStack_f0;
    switch(uStack_f0 == uStack_108) {
    case true:
      goto code_r0x00018350fc38;
    }
  } while( true );
}



