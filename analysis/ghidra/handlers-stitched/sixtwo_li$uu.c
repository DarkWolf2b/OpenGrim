// ===== STITCHED CORPUS: sixtwo.li$uu =====
// handlers: 10  continuation blocks: 103  unresolved table targets: 0
// tables not in tables.json: ['0x145318', '0x16dc18', '0x170c0', '0x1ec2c8', '0x269f18', '0xdeffa0', '0xdf0c78', '0xdf0c88', '0xdf6420', '0xdf6428', '0xdf6430', '0xdf6438', '0xdf6440', '0xdf6448', '0xdf6450', '0xdf6458', '0xdf6460', '0xdf6468', '0xdf6478', '0xdf6480']

// ===== Lsixtwo/li$uu; _2ffd798cba1d21081c46ca8b6c3609bc ()V (handler @ image 187e6b5e0, runtime 6fffefa7b5e0) =====

void FUN_187e6b5e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187e6b6bc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180df7a30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li$uu; duL ()I (handler @ image 187e39750, runtime 6fffefa49750) =====

void FUN_187e39750(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187e39770 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180defaf0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uu; duM ()I (handler @ image 187e39950, runtime 6fffefa49950) =====

void FUN_187e39950(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187e39970 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180defbd0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uu; duN ()F (handler @ image 187e39b50, runtime 6fffefa49b50) =====

void FUN_187e39b50(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187e39b75 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180defcb0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uu; duO ([B)Ljava/lang/String; (handler @ image 187e39d60, runtime 6fffefa49d60) =====

void FUN_187e39d60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000187e39e00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180defed0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uu; duP (IJ)Ljava/lang/String; (handler @ image 187e61200, runtime 6fffefa71200) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e61200(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uRam00000001831a6480 = func_0x000187e67b90(uRam00000001831a6280 ^ 0x91b7d5fd637f4b5a);
  uRam00000001831a64b0 =
       (uRam00000001831a64b0 ^ uRam00000001831a6480 & 0xfffffffffffc0000) + 0xe77aa7ffc77bfb8b ^
       0x920d40b19679119d;
  uRam00000001831a6400 =
       (uRam00000001831a6400 * -0x3c6cd5ab02285e83 ^ uRam00000001831a64b0) +
       (uRam00000001831a6480 & 0xfffffffffffc0000);
  uRam00000001831a64c0 = uRam00000001831a6400 ^ uRam00000001831a64b0;
  uRam00000001831a6128 = uRam00000001831a5f00 ^ 0xe77aa7ffc77bfb8b;
  lRam00000001831a6408 = -0x1885580038840475;
  uVar6 = (uRam00000001831a6048 ^ _UNK_180df6420) + uRam00000001831a6250 + 0x84222325;
  uVar7 = (uRam00000001831a6250 ^ _UNK_180df6428) + uRam00000001831a6048 + 0x2dc1edc9484c1938;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831a6048 ^ _UNK_180df6420;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831a6250 ^ _UNK_180df6428;
  uRam00000001831a6560 =
       func_0x000187e67b90((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831a6048 + 0x2dc1edc9484c1938) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831a6250 + 0x84222325));
  uVar6 = uRam00000001831a6560 << 0x14 | uRam00000001831a6560 >> 0x2c;
  uRam00000001831a5f08 = (uRam00000001831a5f08 ^ uVar6) + 0xd23e1236b7b3e6c8 ^ 0x318472d88a38370a;
  uRam00000001831a6510 = (uRam00000001831a6510 * 0x637dcb566bd8d165 ^ uRam00000001831a5f08) + uVar6;
  uRam00000001831a61f0 = uRam00000001831a6510 ^ uRam00000001831a5f08;
  uRam00000001831a65a0 = 0xd23e1236b7b3e6c8;
  uRam00000001831a62e0 = func_0x000187e67b90(uRam00000001831a6210 ^ 0x38c3be43a15ae9d0);
  uVar6 = (ulonglong)(((uint)uRam00000001831a62e0 ^ 0x1937) & 0x7fff);
  uRam00000001831a6488 = uRam00000001831a5fb8 ^ uVar6 ^ 0x2dc1edc9484c9937;
  uRam00000001831a6690 = (uRam00000001831a6690 ^ uVar6) + 0x2dc1edc9484c9937 ^ 0x48f93ceaebb754b2;
  uRam00000001831a62d0 = (uRam00000001831a62d0 * 0x61e861f177a1f7d ^ uRam00000001831a6690) + uVar6;
  uRam00000001831a6510 = uRam00000001831a62d0 ^ uRam00000001831a6690;
  uRam00000001831a6508 = 0x2dc1edc9484c9937;
  uRam00000001831a62c8 = func_0x000187e67b90(uRam00000001831a6280 + 0xe32434e8c675c344 ^ 0xba);
  uVar6 = uRam00000001831a62c8 ^ 0xfdd11ae4bff41cf8;
  uRam00000001831a6110 = uRam00000001831a62b8 ^ uVar6 ^ 0x7fff;
  uRam00000001831a6338 = (uRam00000001831a6338 ^ uVar6) + 0x7fff ^ 0xefd1af015cc5b67b;
  uRam00000001831a6248 = (uRam00000001831a6248 * -0x3e9ca596c8797fa9 ^ uRam00000001831a6338) + uVar6
  ;
  uRam00000001831a6560 = uRam00000001831a6248 ^ uRam00000001831a6338;
  uRam00000001831a63b0 = 0x7fff;
  uVar6 = (uRam00000001831a6558 ^ _UNK_180df6430) + uRam00000001831a6108 + 0x84222325;
  uVar7 = (uRam00000001831a6108 ^ _UNK_180df6438) + uRam00000001831a6558 + 0xf01eb3ab7e4521ec;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831a6558 ^ _UNK_180df6430;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831a6108 ^ _UNK_180df6438;
  uRam00000001831a5f28 =
       func_0x000187e67b90((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831a6558 + 0xf01eb3ab7e4521ec) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831a6108 + 0x84222325));
  uRam00000001831a6158 = uRam00000001831a6158 + 0xfe14c5481bade14 ^ 0x72046b12c958e260;
  uRam00000001831a6258 = uRam00000001831a6008 * 0x76271b119c1a3f9;
  uRam00000001831a6008 = uRam00000001831a6258 ^ uRam00000001831a6158;
  uRam00000001831a6610 = 0xfe14c5481bade14;
  uRam00000001831a65b0 = func_0x000187e67b90(uRam00000001831a6298 + 0x688d0a8a365327cf ^ 0xcb);
  uVar6 = ((uRam00000001831a65b0 ^ 0x69b70b7712b0de14) & 0x1fffffffff) << 0x1a |
          (uRam00000001831a65b0 ^ 0x69b70b7712b0de14) >> 0x26;
  uRam00000001831a6418 = uRam00000001831a6458 ^ uVar6 ^ 0xf01eb3ab7e45a1eb;
  uRam00000001831a6648 = (uRam00000001831a6648 ^ uVar6) + 0xf01eb3ab7e45a1eb ^ 0x8558579f87e5f956;
  uRam00000001831a6610 = (uRam00000001831a6610 * 0x6129da6ed3880de9 ^ uRam00000001831a6648) + uVar6;
  uRam00000001831a62d0 = uRam00000001831a6610 ^ uRam00000001831a6648;
  uRam00000001831a5f78 = 0xf01eb3ab7e45a1eb;
  uVar6 = (uRam00000001831a6298 ^ _UNK_180df6440) + uRam00000001831a6248 + 0xf01eb3abfa6782ce;
  uVar7 = (uRam00000001831a6248 ^ _UNK_180df6448) + uRam00000001831a6298 + 0xfe14c5481bade14;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831a6298 ^ _UNK_180df6440;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831a6248 ^ _UNK_180df6448;
  uRam00000001831a5f78 =
       func_0x000187e67b90((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831a6298 + 0xfe14c5481bade14) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001831a6248 + 0xf01eb3abfa6782ce));
  uVar6 = uRam00000001831a5f78 - (uRam00000001831a5f78 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001831a5f78;
  uRam00000001831a6660 = uRam00000001831a66b8 ^ uVar6 ^ 0x7fff;
  uRam00000001831a62e0 = (uRam00000001831a62e0 ^ uVar6) + 0x7fff ^ 0x940d01d415795b5b;
  uRam00000001831a6578 = (uRam00000001831a6578 * 0x51924bfd316acf1 ^ uRam00000001831a62e0) + uVar6;
  uRam00000001831a5fb8 = uRam00000001831a6578 ^ uRam00000001831a62e0;
  uRam00000001831a6528 = 0x7fff;
  uRam00000001831a5f00 = func_0x000187e67b90(uRam00000001831a61f8 ^ 0xf0c7ab222ac62722);
  uRam00000001831a61c8 =
       (uRam00000001831a61c8 ^ uRam00000001831a5f00 ^ 0xfdf7af3a7496bd0) + 0xf020850c58b69430 ^
       0x10e5deb61eb067d4;
  uRam00000001831a63b0 =
       (uRam00000001831a63b0 * 0x90a61dda5b197c7 ^ uRam00000001831a61c8) +
       (uRam00000001831a5f00 ^ 0xfdf7af3a7496bd0);
  uRam00000001831a6440 = uRam00000001831a63b0 ^ uRam00000001831a61c8;
  uRam00000001831a66d8 = 0xf020850c58b69430;
  uVar6 = (~uRam00000001831a5f88 + 0xeee33f8a02ce5fb8) *
          ((uRam00000001831a6268 ^ 0xe77aa7ff4359d8ae) +
          (uRam00000001831a6268 & 0x677aa7ff4359d8ae) * 2);
  uVar6 = (uVar6 | uRam00000001831a61f8) + (uVar6 & uRam00000001831a61f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831a61f0 =
       func_0x000187e67b90((uVar6 | 0x999987541978719) + (uVar6 & 0x999987541978719));
  uVar6 = uRam00000001831a61f0 << 3 | uRam00000001831a61f0 >> 0x3d;
  uRam00000001831a6078 = uRam00000001831a6618 ^ uVar6 ^ 0xd65de789ca4a5b42;
  uRam00000001831a5f10 = (uRam00000001831a5f10 ^ uVar6) + 0xd65de789ca4a5b42 ^ 0x853d38cb95150844;
  uRam00000001831a60e8 = (uRam00000001831a60e8 * 0x3227914e8db9b4b1 ^ uRam00000001831a5f10) + uVar6;
  uRam00000001831a66b0 = uRam00000001831a60e8 ^ uRam00000001831a5f10;
  uRam00000001831a63d8 = 0xd65de789ca4a5b42;
  uVar6 = (~uRam00000001831a61e0 + 0xeee33f8a02ce5fb8) *
          ((uRam00000001831a6630 ^ 0xe77aa7ff4359d8ae) +
          (uRam00000001831a6630 & 0x677aa7ff4359d8ae) * 2);
  uVar6 = (uVar6 | uRam00000001831a65a0) + (uVar6 & uRam00000001831a65a0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831a6048 =
       func_0x000187e67b90((uVar6 | 0x999987541978719) + (uVar6 & 0x999987541978719));
  uRam00000001831a6670 =
       (uRam00000001831a6670 ^ uRam00000001831a62d0) + 0x9999875c5b5a43c ^ 0x1f1e1efb1bc7efa1;
  uRam00000001831a64c8 =
       (uRam00000001831a64c8 * -0x20ece18342bba15b ^ uRam00000001831a6670) + uRam00000001831a62d0;
  uRam00000001831a6508 = uRam00000001831a64c8 ^ uRam00000001831a6670;
  uRam00000001831a6088 = 0x9999875c5b5a43c;
  uRam00000001831a6128 = func_0x000187e67b90(uRam00000001831a6560 ^ 0x6c86673f0777923a);
  uRam00000001831a6688 =
       (uRam00000001831a6688 ^ uRam00000001831a6128 ^ 0x7e654e881bd3655d) + 0xe662278a024a5b83 ^
       0xc4adbc2c460c95d0;
  uRam00000001831a6210 =
       (uRam00000001831a6210 * 0x6d71c65c2b2f9cdd ^ uRam00000001831a6688) +
       (uRam00000001831a6128 ^ 0x7e654e881bd3655d);
  uRam00000001831a5f08 = uRam00000001831a6210 ^ uRam00000001831a6688;
  uRam00000001831a6438 = 0xe662278a024a5b83;
  uRam00000001831a5fa8 = func_0x000187e67b90(uRam00000001831a6088 ^ 0x60cfd54315b6fefd);
  uRam00000001831a61f8 = uRam00000001831a6640 ^ uRam00000001831a5fa8 ^ 0xd65de789ca4a5b42;
  uRam00000001831a6158 =
       (uRam00000001831a6158 ^ uRam00000001831a5fa8) + 0xd65de789ca4a5b42 ^ 0xa8110dbe7af22e0b;
  uRam00000001831a6678 =
       (uRam00000001831a6678 * 0x5c2fcec56af1d59 ^ uRam00000001831a6158) + uRam00000001831a5fa8;
  uRam00000001831a65a0 = uRam00000001831a6678 ^ uRam00000001831a6158;
  uRam00000001831a6508 = 0xd65de789ca4a5b42;
  uRam00000001831a5ff0 = func_0x000187e67b90(uRam00000001831a66d0 ^ 0x2c007bda002123);
  uVar6 = uRam00000001831a5ff0 ^ 0x7fff;
  uRam00000001831a64f0 = uRam00000001831a5fe8 ^ uVar6 ^ 0x7fff;
  uRam00000001831a6520 = (uRam00000001831a6520 ^ uVar6) + 0x7fff ^ 0xbacec282a8f50ff7;
  uRam00000001831a6150 = (uRam00000001831a6150 * 0x7732cb3bba5cf935 ^ uRam00000001831a6520) + uVar6;
  uRam00000001831a62f8 = uRam00000001831a6150 ^ uRam00000001831a6520;
  uRam00000001831a6430 = 0x7fff;
  uVar6 = (uRam00000001831a6550 ^ _UNK_180df6450) + uRam00000001831a61d8 + 0xe77aa7ff4359d8ae;
  uVar7 = (uRam00000001831a61d8 ^ _UNK_180df6458) + (uRam00000001831a6550 - 1);
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831a6550 ^ _UNK_180df6450;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831a61d8 ^ _UNK_180df6458;
  uRam00000001831a6420 =
       func_0x000187e67b90((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001831a6550 - 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001831a61d8 + 0xe77aa7ff4359d8ae));
  uRam00000001831a62a0 =
       (uRam00000001831a62a0 ^ ~uRam00000001831a6420 & 0xfffffffff0000000) + 0x1885580038840474 ^
       0x9af259be31c6b60d;
  uRam00000001831a63a8 =
       (uRam00000001831a63a8 * -0x7ad0626f15150727 ^ uRam00000001831a62a0) +
       (~uRam00000001831a6420 & 0xfffffffff0000000);
  uRam00000001831a6348 = uRam00000001831a63a8 ^ uRam00000001831a62a0;
  uRam00000001831a6478 = 0x1885580038840474;
  uRam00000001831a6698 = func_0x000187e67b90(uRam00000001831a6330 + 0x88d3bedacadc5d14 ^ 0xee);
  uVar6 = (uRam00000001831a6698 << 0x3c | uRam00000001831a6698 >> 4) & 0xe77aa7ffc77bfb8b;
  uRam00000001831a6158 = uRam00000001831a6158 ^ uVar6 ^ 0x2130b9a35d6c673;
  uRam00000001831a64e8 = (uRam00000001831a64e8 * 0x2bb7db5f328bcca7 ^ uRam00000001831a6158) + uVar6;
  uRam00000001831a6460 = uRam00000001831a64e8 ^ uRam00000001831a6158;
  uRam00000001831a5fb0 = 0;
  uRam00000001831a6138 = func_0x000187e67b90(lRam00000001831a6408 + 0xffe2ff83e2ffe1ffU ^ 0x81);
  uVar6 = uRam00000001831a6138 & 0xfffffffffffffffc ^ 0xc41227ebc342f189;
  uRam00000001831a6000 = uRam00000001831a6000 ^ uVar6 ^ 0xfe2fbf381c8eb8a4;
  uRam00000001831a61a0 = (uRam00000001831a61a0 * -0x2f2bb8bd093df247 ^ uRam00000001831a6000) + uVar6
  ;
  uRam00000001831a6048 = uRam00000001831a61a0 ^ uRam00000001831a6000;
  uRam00000001831a65c8 = 0;
  uRam00000001831a6478 = func_0x000187e67b90(uRam00000001831a6310 ^ 0x54007c36002134);
  uVar6 = (ulonglong)(~(uint)uRam00000001831a6478 & 0x7fff);
  uRam00000001831a66d8 = uRam00000001831a60a0 ^ uVar6 ^ 0x7fff;
  uRam00000001831a5f40 = (uRam00000001831a5f40 ^ uVar6) + 0x7fff ^ 0x39d74c12943fc976;
  uRam00000001831a64b8 = (uRam00000001831a64b8 * 0x323c0aa2de9ffb5d ^ uRam00000001831a5f40) + uVar6;
  uRam00000001831a65b0 = uRam00000001831a64b8 ^ uRam00000001831a5f40;
  uRam00000001831a62f0 = 0x7fff;
  param_4 = param_4 & 0x7fff;
  uVar2 = (ulonglong)param_3;
  uVar6 = (ulonglong)param_4 ^ 0x84222325;
  uVar7 = uVar6 ^ uRam00000001831a61c8;
  lVar3 = uVar6 + uRam00000001831a5f90;
  uVar6 = uVar7 + lVar3;
  uVar8 = (uVar2 ^ uRam00000001831a5f90) + uRam00000001831a61c8 + uVar2;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar7;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2 ^ uRam00000001831a5f90;
  uRam00000001831a6018 =
       func_0x000187e67b90((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831a61c8 + uVar2) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar3);
  uVar6 = uVar2 ^ uRam00000001831a6018;
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar6;
  uVar7 = (param_4 + uVar2) - (ulonglong)((param_3 & param_4) * 2);
  uRam00000001831a6178 = (uRam00000001831a6178 ^ uVar6) + uVar7 ^ 0x582539ace26944e6;
  uRam00000001831a5fa8 = (uRam00000001831a5fa8 * 0x40f01ff9ccdde02f ^ uRam00000001831a6178) + uVar6;
  uRam00000001831a6400 = uRam00000001831a5fa8 ^ uRam00000001831a6178;
  uVar2 = uVar7 & 0xffffffff;
  uRam00000001831a63c8 = uVar2;
  uRam00000001831a60f0 = func_0x000187e67b90(uRam00000001831a62d8 + 0xb1002d35ff86ff ^ 0x72);
  uVar6 = ~(ulonglong)(((uint)uRam00000001831a60f0 ^ 0xfaef0000) & 0xffff0000) & 0x6aee796e;
  uRam00000001831a6310 = (uRam00000001831a6310 ^ uVar6) + 0xb2a9f2f3 ^ 0x8c06b23e3747c2ff;
  uRam00000001831a6168 = (uRam00000001831a6168 * -0xf1c4fae7a4ce727 ^ uRam00000001831a6310) + uVar6;
  uRam00000001831a6150 = uRam00000001831a6168 ^ uRam00000001831a6310;
  uRam00000001831a6608 = 0xb2a9f2f3;
  uVar6 = (uRam00000001831a62e0 ^ _UNK_180df6460) + uRam00000001831a61e0 + 0x84222325;
  uVar8 = (uRam00000001831a61e0 ^ _UNK_180df6468) + uRam00000001831a62e0 + 0x7ed17e00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831a62e0 ^ _UNK_180df6460;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831a61e0 ^ _UNK_180df6468;
  uRam00000001831a5fc8 =
       func_0x000187e67b90((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831a62e0 + 0x7ed17e00) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831a61e0 + 0x84222325));
  uVar6 = (uRam00000001831a5fc8 & 0x1ffffffffff) >> 0x26 |
          ((uRam00000001831a5fc8 ^ 0x7ed17e00) << 0x17 | uRam00000001831a5fc8 >> 0x29) << 3;
  uRam00000001831a6368 = (uRam00000001831a6368 ^ uVar6) - 0x7ed17e00 ^ 0x4c39dbafc3df22a;
  uRam00000001831a6320 = (uRam00000001831a6320 * 0x1231d204c2596595 ^ uRam00000001831a6368) + uVar6;
  uRam00000001831a5f40 = uRam00000001831a6320 ^ uRam00000001831a6368;
  uRam00000001831a66e0 = 0x812e8200;
  uRam00000001831a6440 = func_0x000187e67b90(uRam00000001831a6310 + 0xffcfff19a9ffaeff ^ 0xa4);
  uVar6 = uRam00000001831a6440 ^ 0x2dcf;
  uRam00000001831a62b8 = uRam00000001831a62a8 ^ uVar6 ^ 0x7ed1abcf;
  uRam00000001831a60f0 = (uRam00000001831a60f0 ^ uVar6) + 0x7ed1abcf ^ 0x347872d2250fadf;
  uRam00000001831a6470 = (uRam00000001831a6470 * 0x13363f7033c401fb ^ uRam00000001831a60f0) + uVar6;
  uRam00000001831a6258 = uRam00000001831a6470 ^ uRam00000001831a60f0;
  uRam00000001831a6460 = 0x7ed1abcf;
  uVar6 = (~uRam00000001831a61a8 + 0x812e8201) *
          ((uRam00000001831a6660 ^ 0xfaf388ea) +
          (ulonglong)((uint)uRam00000001831a6660 & 0xfaf388ea) * 2);
  uVar6 = (uVar6 | uRam00000001831a6198) + (uVar6 & uRam00000001831a6198);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831a6570 =
       func_0x000187e67b90((uVar6 | 0x7bdd0aea) + (ulonglong)((uint)uVar6 & 0x7bdd0aea));
  uVar6 = (uRam00000001831a6570 ^ 0x3ffeb1a6a7711e00) * 0x7b8ed4a620802897;
  uRam00000001831a60a8 = uRam00000001831a6670 ^ uVar6 ^ 0x100002dcf;
  uRam00000001831a5f38 = (uRam00000001831a5f38 ^ uVar6) + 0x100002dcf ^ 0x2b20059c36c35b42;
  uRam00000001831a5fd8 = (uRam00000001831a5fd8 * 0x7744505db81d9057 ^ uRam00000001831a5f38) + uVar6;
  uRam00000001831a6038 = uRam00000001831a5fd8 ^ uRam00000001831a5f38;
  uRam00000001831a6420 = 0x2dcf;
  uVar6 = (~uRam00000001831a6518 + 0x2890bd55) *
          ((uRam00000001831a6378 ^ 0x84220eea) +
          (ulonglong)((uint)uRam00000001831a6378 & 0x84220eea) * 2);
  uVar6 = (uVar6 | uRam00000001831a6500) + (uVar6 & uRam00000001831a6500);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam00000001831a6070 =
       func_0x000187e67b90((uVar6 | 0xacb2b3be) + (ulonglong)((uint)uVar6 & 0xacb2b3be));
  uVar6 = lRam00000001831a6070 * -0x5b81cadc7eb63b15;
  uRam00000001831a5f90 = uRam00000001831a5fd0 ^ uVar6 ^ 0x2890eb23;
  uRam00000001831a64f8 = (uRam00000001831a64f8 ^ uVar6) + 0x2890eb23 ^ 0xb403f9454d34d325;
  uRam00000001831a65a0 = (uRam00000001831a65a0 * -0x1e8b2ea35e38ab59 ^ uRam00000001831a64f8) + uVar6
  ;
  uRam00000001831a62f8 = uRam00000001831a65a0 ^ uRam00000001831a64f8;
  uRam00000001831a6098 = 0x2890eb23;
  uVar6 = (~uRam00000001831a66f8 + 0xe526d241) *
          ((uRam00000001831a6300 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831a6300 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam00000001831a6148) + (uVar6 & uRam00000001831a6148);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831a6158 =
       func_0x000187e67b90((uVar6 | 0x6104f165) + (ulonglong)((uint)uVar6 & 0x6104f165));
  uRam00000001831a63a0 =
       (uRam00000001831a63a0 ^ uRam00000001831a6158 * 0x6ef1891a4650fd4d) - 0xe526d240 ^
       0xd1bce06019e5065e;
  uRam00000001831a6328 =
       (uRam00000001831a6328 * -0x6fdc679893fb242b ^ uRam00000001831a63a0) +
       uRam00000001831a6158 * 0x6ef1891a4650fd4d;
  uRam00000001831a5fa8 = uRam00000001831a6328 ^ uRam00000001831a63a0;
  uRam00000001831a6370 = 0x1ad92dc0;
  uRam00000001831a6108 = func_0x000187e67b90(lRam00000001831a6020 + 0xcbffdf560003ffU ^ 0x28);
  uRam00000001831a6330 = uRam00000001831a61c0 ^ uRam00000001831a6108 ^ 0xe527000f;
  uRam00000001831a6348 =
       (uRam00000001831a6348 ^ uRam00000001831a6108) + 0xe527000f ^ 0xd2afbf49ebba5c02;
  uRam00000001831a5f18 =
       (uRam00000001831a5f18 * 0x6cb5c26b52307f93 ^ uRam00000001831a6348) + uRam00000001831a6108;
  uRam00000001831a6030 = uRam00000001831a5f18 ^ uRam00000001831a6348;
  uRam00000001831a6568 = 0xe527000f;
  uVar6 = (~uRam00000001831a6428 + 0xb2a9f2f4) *
          ((uRam00000001831a6480 ^ 0xf3dcfcdd) +
          (ulonglong)((uint)uRam00000001831a6480 & 0xf3dcfcdd) * 2);
  uVar6 = (uVar6 | uRam00000001831a65b0) + (uVar6 & uRam00000001831a65b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831a6560 =
       func_0x000187e67b90((uVar6 | 0x41750e2e) + (ulonglong)((uint)uVar6 & 0x41750e2e));
  uVar6 = uRam00000001831a6560 << 1 | (ulonglong)((longlong)uRam00000001831a6560 < 0);
  uRam00000001831a6050 = (uRam00000001831a6050 ^ uVar6) + 0x32a8d2f0 ^ 0x4903339c09ef6328;
  uRam00000001831a60d8 = (uRam00000001831a60d8 * 0x7b683a5ffacf48d1 ^ uRam00000001831a6050) + uVar6;
  uRam00000001831a6210 = uRam00000001831a60d8 ^ uRam00000001831a6050;
  uRam00000001831a60e0 = 0x32a8d2f0;
  uRam00000001831a5fe8 = func_0x000187e67b90(uRam00000001831a65a8 ^ 0xffdd007c1d00216c);
  uRam00000001831a5f48 = uRam00000001831a5fe8 << 0x2c | uRam00000001831a5fe8 >> 0x14;
  uRam00000001831a5f68 = uRam00000001831a5f68 ^ uRam00000001831a5f48 ^ 0x296c2179a7a0fe93;
  uRam00000001831a62d8 =
       (uRam00000001831a62d8 * 0x27765078018d8dcd ^ uRam00000001831a5f68) + uRam00000001831a5f48;
  uRam00000001831a6620 = uRam00000001831a62d8 ^ uRam00000001831a5f68;
  uRam00000001831a5f88 = 0;
  uVar6 = (~uRam00000001831a6258 + 0x100000000) *
          ((uRam00000001831a61a0 ^ 0xf3dcfcdd) +
          (ulonglong)((uint)uRam00000001831a61a0 & 0xf3dcfcdd) * 2);
  uVar6 = (uVar6 | uRam00000001831a6308) + (uVar6 & uRam00000001831a6308);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831a5fd0 =
       func_0x000187e67b90((uVar6 | 0xc230322) + (ulonglong)((uint)uVar6 & 0xc230322));
  uVar6 = (uRam00000001831a5fd0 ^ 0x77fedff777fedff7) << 0x1b |
          (uRam00000001831a5fd0 ^ 0x77fedff777fedff7) >> 0x25;
  uRam00000001831a6640 = (uRam00000001831a6640 ^ uVar6) + 0x88012007 ^ 0xf4a925537b3b844b;
  uRam00000001831a6658 = (uRam00000001831a6658 * 0x59d7d3e55d522b7f ^ uRam00000001831a6640) + uVar6;
  uRam00000001831a6638 = uRam00000001831a6658 ^ uRam00000001831a6640;
  uRam00000001831a6128 = 0x88012007;
  uRam00000001831a60f0 = func_0x000187e67b90(uRam00000001831a65a8 ^ 0xa3ffd925ff5a53);
  uVar6 = uRam00000001831a60f0 << 0x28 | uRam00000001831a60f0 >> 0x18;
  uRam00000001831a5f40 = uRam00000001831a5f40 ^ uVar6 ^ 0x941b72dd6b7f803e;
  uRam00000001831a5fe8 = (uRam00000001831a5fe8 * 0x5b0254122524c369 ^ uRam00000001831a5f40) + uVar6;
  uRam00000001831a60a0 = uRam00000001831a5fe8 ^ uRam00000001831a5f40;
  uRam00000001831a6440 = 0;
  uVar6 = (uRam00000001831a6278 ^ 0x84220eea) + uRam00000001831a6038 + 0x84220eea;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831a6278 ^ 0x84220eea;
  uVar8 = ((uRam00000001831a6038 + uRam00000001831a6278) * 0x2000 |
          uRam00000001831a6038 + uRam00000001831a6278 >> 0x33) ^ uRam00000001831a6038;
  uRam00000001831a6510 =
       func_0x000187e67b90((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001831a6278 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831a6038 + 0x84220eea));
  uVar6 = uRam00000001831a6510 - (uRam00000001831a6510 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001831a6510;
  uRam00000001831a5f30 = uRam00000001831a6588 ^ uVar6 ^ 0x2dcf;
  uRam00000001831a6240 = (uRam00000001831a6240 ^ uVar6) + 0x2dcf ^ 0x6576de506a03b468;
  uRam00000001831a6370 = (uRam00000001831a6370 * -0x3e6d6d44a66f246f ^ uRam00000001831a6240) + uVar6
  ;
  uRam00000001831a60e8 = uRam00000001831a6370 ^ uRam00000001831a6240;
  uRam00000001831a66a8 = 0x2dcf;
  uVar6 = (~uRam00000001831a6298 + 0x27f69df9) *
          ((uRam00000001831a6258 ^ 0xa3d4bedd) +
          (ulonglong)((uint)uRam00000001831a6258 & 0xa3d4bedd) * 2);
  uVar6 = (uVar6 | uRam00000001831a61b8) + (uVar6 & uRam00000001831a61b8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831a65f8 =
       func_0x000187e67b90((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uVar6 = (uRam00000001831a65f8 ^ 0x63d11b58a1a2040) << 6 |
          (uRam00000001831a65f8 ^ 0x63d11b58a1a2040) >> 0x3a;
  uRam00000001831a6668 = uRam00000001831a6668 ^ uVar6 ^ 0x191bc3b1f3a5abb3;
  uRam00000001831a5f20 = (uRam00000001831a5f20 * 0x7c7834fd44f0776d ^ uRam00000001831a6668) + uVar6;
  uRam00000001831a5f78 = uRam00000001831a5f20 ^ uRam00000001831a6668;
  uRam00000001831a6360 = 0;
  uVar6 = (uRam00000001831a63a0 ^ 0x84220eea) + uRam00000001831a64f8 + 0x84220eea;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831a63a0 ^ 0x84220eea;
  uVar8 = ((uRam00000001831a64f8 + uRam00000001831a63a0) * 0x2000 |
          uRam00000001831a64f8 + uRam00000001831a63a0 >> 0x33) ^ uRam00000001831a64f8;
  uRam00000001831a6488 =
       func_0x000187e67b90((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001831a63a0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831a64f8 + 0x84220eea));
  uRam00000001831a6200 = uRam00000001831a61d0 ^ uRam00000001831a6488 ^ 0x2dcf;
  uRam00000001831a6660 = (uRam00000001831a6660 ^ uRam00000001831a6488) + 0x2dcf ^ 0x292646769ebbb5cf
  ;
  uRam00000001831a6570 =
       (uRam00000001831a6570 * -0x29b8fd3858a5bb5 ^ uRam00000001831a6660) + uRam00000001831a6488;
  uRam00000001831a6240 = uRam00000001831a6570 ^ uRam00000001831a6660;
  auVar4._8_8_ = _UNK_180df6478;
  auVar4._0_8_ = uVar2 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _UNK_180df6480,_UNK_1800170c0);
  uRam00000001831a6268 = 0x2dcf;
  uVar8 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar8 + lRam00000001831a62c0;
  if (auVar5._4_4_ < 0) {
    uVar6 = uRam00000001831a5f00 ^ uVar8;
  }
  uRam00000001831a65b8 = func_0x000187e67b90(SUB161(auVar4 ^ _UNK_180df6480,5) ^ uVar6);
  lVar3 = uVar2 - ((uint)uVar7 & 0x2dcf) * 2;
  uRam00000001831a66b0 =
       (uRam00000001831a66b0 ^ uRam00000001831a65b8 ^ 0x2dcf) + lVar3 + 0x2dcf ^ 0x30c532693a9f714b;
  uRam00000001831a64b0 =
       (uRam00000001831a64b0 * -0x6f6564232383cba1 ^ uRam00000001831a66b0) +
       (uRam00000001831a65b8 ^ 0x2dcf);
  uRam00000001831a6080 = uRam00000001831a64b0 ^ uRam00000001831a66b0;
  uRam00000001831a6420 = lVar3 + 0x2dcfU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b1bb,0x436)
      /* POOL[0x1b1bb,0x436]: XzVle | hJzfF | abhdR | duI | qjUBr | duH | sixtwo/li$uu | LDJil | OHOtC | peGaU | RkcnG | JluNc | Aqeil | duP | PTYcM | sixtwo/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187e63001 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180df4a98 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li$uu; duQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 187e67c20, runtime 6fffefa77c20) =====

void FUN_187e67c20(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000187e67c5c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180df6600 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li$uu; duR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 187e68b10, runtime 6fffefa78b10) =====

void FUN_187e68b10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187e68b8d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180df6b40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li$uu; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 187e1c7c0, runtime 6fffefa2c7c0) =====

void FUN_187e1c7c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b1bb,0x436)
      /* POOL[0x1b1bb,0x436]: XzVle | hJzfF | abhdR | duI | qjUBr | duH | sixtwo/li$uu | LDJil | OHOtC | peGaU | RkcnG | JluNc | Aqeil | duP | PTYcM | sixtwo/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187e1c89f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180de8040 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li$uu; toJson ()Lcom/google/gson/JsonObject; (handler @ image 187e2ab10, runtime 6fffefa3ab10) =====

void FUN_187e2ab10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b1bb,0x436)
      /* POOL[0x1b1bb,0x436]: XzVle | hJzfF | abhdR | duI | qjUBr | duH | sixtwo/li$uu | LDJil | OHOtC | peGaU | RkcnG | JluNc | Aqeil | duP | PTYcM | sixtwo/li$uv | oPGtV | duO | mPRav | vVHVn | sixtwo/li$uw | bYV | FuKuf | Lsixtwo/li$uw; | bfrsA | duW | KRhcN | CVqKN | duY | PLpAY | duX | flqYl | OtyzD | SzlIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187e2abec did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180debc80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x7e1c8a2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e1c8a2(void)

{
  FUN_190ddce00();
  (*_DAT_180de8be8)();
  return;
}


// ----- block @ rva 0x7e2224a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e2224a(void)

{
  FUN_190de3220();
  (*_DAT_180de84b8)();
  return;
}


// ----- block @ rva 0x7e225f7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e225f7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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


// ----- block @ rva 0x7e22933 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e22933(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180de9248)();
  return;
}


// ----- block @ rva 0x7e258fb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e258fb(void)

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


// ----- block @ rva 0x7e26183 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e26183(void)

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


// ----- block @ rva 0x7e266b1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e266b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetIntField /*0x368*/))();
  (*_DAT_180de8888)();
  return;
}


// ----- block @ rva 0x7e2a61a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e2a61a(void)

{
  FUN_190dd72e0();
  (*_DAT_180de8ea8)();
  return;
}


// ----- block @ rva 0x7e2a9ae -----

void FUN_187e2a9ae(void)

{
  return;
}


// ----- block @ rva 0x7e2aa1a -----

void FUN_187e2aa1a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e2abef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e2abef(void)

{
  FUN_190ddce00();
  (*_DAT_180debea8)();
  return;
}


// ----- block @ rva 0x7e313cd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e313cd(void)

{
  undefined8 in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x41a,0x17);
  (*_DAT_180debfd8)();
  return;
}


// ----- block @ rva 0x7e317e5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e317e5(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e34b9c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e34b9c(void)

{
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x2e9,0x12);
  (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  (*_DAT_180dec9f8)();
  return;
}


// ----- block @ rva 0x7e350d5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e350d5(void)

{
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_stack_00000030 + JNI->NewObjectArray /*0x560*/))(in_stack_00000030,2,in_stack_00000038,0);
  (*_DAT_180deca78)();
  return;
}


// ----- block @ rva 0x7e357e2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e357e2(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e38a4b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e38a4b(void)

{
  FUN_190ddce00();
  (*_DAT_180dec978)();
  return;
}


// ----- block @ rva 0x7e38c9e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e38c9e(void)

{
  FUN_190de3220();
  (*_DAT_180decbe8)();
  return;
}


// ----- block @ rva 0x7e395bc -----

void FUN_187e395bc(void)

{
  return;
}


// ----- block @ rva 0x7e39628 -----

void FUN_187e39628(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e39773 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39773(void)

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


// ----- block @ rva 0x7e397ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e397ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180defb78)();
  return;
}


// ----- block @ rva 0x7e397e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e397e6(void)

{
  FUN_190dd72e0();
  (*_DAT_180defb48)();
  return;
}


// ----- block @ rva 0x7e3980e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e3980e(void)

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


// ----- block @ rva 0x7e39862 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e39862(void)

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


// ----- block @ rva 0x7e39886 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39886(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180defb18)();
  return;
}


// ----- block @ rva 0x7e398ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e398ac(void)

{
  (*_DAT_180defb68)();
  return;
}


// ----- block @ rva 0x7e398bc -----

void FUN_187e398bc(void)

{
  return;
}


// ----- block @ rva 0x7e398c4 -----

void FUN_187e398c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e39973 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39973(void)

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


// ----- block @ rva 0x7e399ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e399ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180defc08)();
  return;
}


// ----- block @ rva 0x7e399d1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e399d1(void)

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


// ----- block @ rva 0x7e399e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e399e6(void)

{
  FUN_190dd72e0();
  (*_DAT_180defbf8)();
  return;
}


// ----- block @ rva 0x7e39a0e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e39a0e(void)

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


// ----- block @ rva 0x7e39a2f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39a2f(void)

{
  FUN_190dd9df0();
  (*_DAT_180defc58)();
  return;
}


// ----- block @ rva 0x7e39a86 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39a86(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 800))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180defbe8)();
  return;
}


// ----- block @ rva 0x7e39aac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39aac(void)

{
  (*_DAT_180defc68)();
  return;
}


// ----- block @ rva 0x7e39abc -----

void FUN_187e39abc(void)

{
  return;
}


// ----- block @ rva 0x7e39ac4 -----

void FUN_187e39ac4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e39b78 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39b78(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7e39bb4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39bb4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180defce8)();
  return;
}


// ----- block @ rva 0x7e39bd9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e39bd9(void)

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


// ----- block @ rva 0x7e39bf1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39bf1(void)

{
  FUN_190dd72e0();
  (*_DAT_180defd48)();
  return;
}


// ----- block @ rva 0x7e39c3d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39c3d(void)

{
  FUN_190dd9df0();
  (*_DAT_180defd18)();
  return;
}


// ----- block @ rva 0x7e39c70 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e39c70(void)

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


// ----- block @ rva 0x7e39cbe -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39cbe(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180defd08)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7e39cce -----

void FUN_187e39cce(void)

{
  return;
}


// ----- block @ rva 0x7e39cdb -----

void FUN_187e39cdb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e39e03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187e39e3a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187e39e03(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7e39e58 -----

void FUN_187e39e58(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000187e39e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180deffa0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x7e39ef1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e39ef1(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  uint uVar5;
  undefined8 unaff_RDI;
  uint unaff_R14D;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  
  *(undefined8 *)(unaff_RBP + 0x50) = unaff_RDI;
  auVar6._8_4_ = unaff_R14D;
  auVar6._0_8_ = _DAT_18001b640;
  auVar6._12_4_ = 0;
  auVar7 = pshufb(auVar6 ^ _DAT_180df0c90,_DAT_1800170c0);
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar4 + _DAT_1831a57c8;
  if (auVar7._4_4_ < 0) {
    uVar3 = _DAT_1831a5778 ^ uVar4;
  }
  _DAT_1831a56b8 = func_0x000187e61170(SUB161(auVar6 ^ _DAT_180df0c90,5) ^ uVar3);
  uVar4 = _UNK_18016dc18;
  uVar3 = _DAT_18016dc10;
  uVar2 = (_DAT_1831a56b8 & 0xfffffffffffffe00) << 0x2f | _DAT_1831a56b8 >> 0x11;
  uVar5 = -unaff_R14D;
  _DAT_1831a5870 = (_DAT_1831a5870 ^ uVar2) - (ulonglong)unaff_R14D ^ 0xbef36baf885b5a92;
  _DAT_1831a5608 = (_DAT_1831a5608 * -0x33bff5fbfdef19cf ^ _DAT_1831a5870) + uVar2;
  _DAT_1831a56a8 = _DAT_1831a5608 ^ _DAT_1831a5870;
  _DAT_1831a56d8 = (ulonglong)uVar5;
  *(undefined8 *)(unaff_RBP + 0x40) = 0x15;
  *(uint *)(unaff_RBP + 0x68) = uVar5;
  *(char *)(unaff_RBP + 0x20) = (char)uVar5 + (char)(uVar5 / 10) * -10;
  uVar2 = (~_DAT_1831a5898 + 0x49) *
          ((_DAT_1831a55a0 ^ 0x8422234d) + (ulonglong)((uint)_DAT_1831a55a0 & 0x8422234d) * 2);
  uVar2 = (uVar2 | _DAT_1831a57a8) + (uVar2 & _DAT_1831a57a8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831a5718 = func_0x000187e61170((uVar2 | 0x84222305) + (ulonglong)((uint)uVar2 & 0x84222305))
  ;
  _DAT_1831a5528 =
       (_DAT_1831a5528 ^ _DAT_1831a5718 & 0xffffffffffffc000) + 0x68 ^ 0xf1bc06e3e7270114;
  _DAT_1831a55a0 =
       (_DAT_1831a55a0 * 0x6e30873b9919aab3 ^ _DAT_1831a5528) +
       (_DAT_1831a5718 & 0xffffffffffffc000);
  _DAT_1831a5890 = _DAT_1831a55a0 ^ _DAT_1831a5528;
  _DAT_1831a5580 = 0x68;
  uVar2 = (~_DAT_1831a58e8 + 0xc1) *
          ((_DAT_1831a5750 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a5750 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_1831a5558) + (uVar2 & _DAT_1831a5558);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1831a5868 = func_0x000187e61170((uVar2 | 0x842223e5) + (ulonglong)((uint)uVar2 & 0x842223e5))
  ;
  _DAT_1831a5570 = (_DAT_1831a5570 ^ _DAT_1831a5868 ^ 0xc0) - 0xc0 ^ 0x665531d5de5d54b6;
  _DAT_1831a5598 = (_DAT_1831a5598 * 0x40af30b576e543f7 ^ _DAT_1831a5570) + (_DAT_1831a5868 ^ 0xc0);
  _DAT_1831a5880 = _DAT_1831a5598 ^ _DAT_1831a5570;
  _DAT_1831a5508 = 0x40;
  uVar2 = (_DAT_1831a55f0 ^ uVar3) + _DAT_1831a55f8 + 0x84222315;
  uVar8 = (_DAT_1831a55f8 ^ uVar4) + _DAT_1831a55f0 + 0xc0;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a55f0 ^ uVar3;
  uVar4 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831a55f8 ^ uVar4;
  _DAT_1831a5870 =
       func_0x000187e61170((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831a55f0 + 0xc0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831a55f8 + 0x84222315));
  uVar3 = _DAT_1831a5870 ^ 0xf0;
  _DAT_1831a5888 = _DAT_1831a55c8 ^ uVar3 ^ 0xf0;
  _DAT_1831a5700 = (_DAT_1831a5700 ^ uVar3) + 0xf0 ^ 0x9a1e7082d063a00;
  _DAT_1831a5680 = (_DAT_1831a5680 * 0x7ed26726506fc591 ^ _DAT_1831a5700) + uVar3;
  _DAT_1831a58a0 = _DAT_1831a5680 ^ _DAT_1831a5700;
  _DAT_1831a5840 = 0xf0;
  uVar3 = ((_DAT_1831a56e0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a56e0 & 0x84222325) * 2) *
          -_DAT_1831a5760;
  uVar3 = (uVar3 | _DAT_1831a55e8) + (uVar3 & _DAT_1831a55e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x000187e61170((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  _DAT_1831a5770 = _DAT_1831a5770 ^ uVar3 & 0x7ffffffff8000000 ^ 0x8bd2ae425c7bae96;
  _DAT_1831a58e8 =
       (_DAT_1831a58e8 * -0x36b32b6ca2177f3f ^ _DAT_1831a5770) + (uVar3 & 0x7ffffffff8000000);
  _DAT_1831a5898 = _DAT_1831a58e8 ^ _DAT_1831a5770;
  _DAT_1831a5758 = 0;
  uVar3 = ((_DAT_1831a5820 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831a5820 & 0x84222325) * 2) *
          -_DAT_1831a5848;
  uVar3 = (uVar3 | _DAT_1831a57c0) + (uVar3 & _DAT_1831a57c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831a55a8 = func_0x000187e61170((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_1831a5868 = _DAT_1831a5868 ^ _DAT_1831a55a8 & 0x3fffffffff ^ 0x1d2a57d46a3512be;
  _DAT_1831a5730 =
       (_DAT_1831a5730 * 0x1215abb9c15f1a41 ^ _DAT_1831a5868) + (_DAT_1831a55a8 & 0x3fffffffff);
  _DAT_1831a5710 = _DAT_1831a5730 ^ _DAT_1831a5868;
  _DAT_1831a5890 = 0;
  uVar3 = ((_DAT_1831a57a8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1831a57a8 & 0x84222315) * 2) *
          -_DAT_1831a56e0;
  uVar3 = (uVar3 | _DAT_1831a5730) + (uVar3 & _DAT_1831a5730);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831a57d8 = func_0x000187e61170((uVar3 | 0x84222315) + (ulonglong)((uint)uVar3 & 0x84222315))
  ;
  uVar3 = _DAT_1831a57d8 >> 1 | _DAT_1831a57d8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1831a57d8;
  _DAT_1831a5758 = _DAT_1831a56c0 ^ uVar3 ^ 0x30;
  _DAT_1831a58a0 = (_DAT_1831a58a0 ^ uVar3) + 0x30 ^ 0xbc744fe3873ee525;
  _DAT_1831a5560 = (_DAT_1831a5560 * 0x1f8f60645b93d4a5 ^ _DAT_1831a58a0) + uVar3;
  _DAT_1831a56f0 = _DAT_1831a5560 ^ _DAT_1831a58a0;
  _DAT_1831a5638 = 0x30;
  uVar3 = ((_DAT_1831a5580 ^ 0x84222315) + (ulonglong)((uint)_DAT_1831a5580 & 0x84222315) * 2) *
          -_DAT_1831a5648;
  uVar3 = (uVar3 | _DAT_1831a55a8) + (uVar3 & _DAT_1831a55a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831a5600 = func_0x000187e61170((uVar3 | 0x84222315) + (ulonglong)((uint)uVar3 & 0x84222315))
  ;
  uVar3 = _DAT_1831a5600 * 0x11c3af270b805a05;
  _DAT_1831a55b8 = _DAT_1831a5648 ^ uVar3 ^ 0x30;
  _DAT_1831a5778 = (_DAT_1831a5778 ^ uVar3) + 0x30 ^ 0x6eea7c3d89168edb;
  _DAT_1831a58a0 = (_DAT_1831a58a0 * -0x4ed9cdcebb06c371 ^ _DAT_1831a5778) + uVar3;
  _DAT_1831a5768 = _DAT_1831a58a0 ^ _DAT_1831a5778;
  _DAT_1831a5748 = 0x30;
  uVar3 = (~_DAT_1831a56a0 + 0x61) *
          ((_DAT_1831a58e8 ^ 0x8422234d) + (ulonglong)((uint)_DAT_1831a58e8 & 0x8422234d) * 2);
  uVar3 = (uVar3 | _DAT_1831a5638) + (uVar3 & _DAT_1831a5638);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831a5690 = func_0x000187e61170((uVar3 | 0x8422232d) + (ulonglong)((uint)uVar3 & 0x8422232d))
  ;
  uVar3 = (_DAT_1831a5690 ^ 0x60) << 0x33 | _DAT_1831a5690 >> 0xd;
  _DAT_1831a5780 = _DAT_1831a5730 ^ uVar3 ^ 200;
  _DAT_1831a57d8 = (_DAT_1831a57d8 ^ uVar3) + 200 ^ 0xc9402b3b6465a372;
  _DAT_1831a5658 = (_DAT_1831a5658 * 0x79816b049fce8999 ^ _DAT_1831a57d8) + uVar3;
  _DAT_1831a5638 = _DAT_1831a5658 ^ _DAT_1831a57d8;
  _DAT_1831a58a8 = 200;
  _DAT_1831a5608 = func_0x000187e61170(_DAT_1831a57f0 + 0xffe1008423001dff ^ 0x72);
  uVar3 = _DAT_1831a5608 << 0x2a | _DAT_1831a5608 >> 0x16;
  _DAT_1831a5768 = (_DAT_1831a5768 ^ uVar3) + 8 ^ 0x64934b9667629ec1;
  _DAT_1831a57f0 = (_DAT_1831a57f0 * -0x3f7d399bf23b8a47 ^ _DAT_1831a5768) + uVar3;
  _DAT_1831a5528 = _DAT_1831a57f0 ^ _DAT_1831a5768;
  _DAT_1831a57a8 = 8;
  _DAT_1831a56e8 = func_0x000187e61170(_DAT_1831a5800 ^ 0x20ff83ecffe1a9);
  _DAT_1831a5640 = (_DAT_1831a5640 ^ _DAT_1831a56e8 ^ 0x2700) + 0x60 ^ 0x339db5b19945d8b7;
  _DAT_1831a57b8 =
       (_DAT_1831a57b8 * -0x66524df93d70eaf1 ^ _DAT_1831a5640) + (_DAT_1831a56e8 ^ 0x2700);
  _DAT_1831a55e0 = _DAT_1831a57b8 ^ _DAT_1831a5640;
  _DAT_1831a57c0 = 0x60;
  uVar3 = func_0x000187e61170(_DAT_1831a5730 ^ 0x1f00839cffddcb);
  uVar3 = uVar3 & 0xfffffffffe000000;
  _DAT_1831a5520 = _DAT_1831a5880 ^ uVar3 ^ 200;
  _DAT_1831a56d0 = (_DAT_1831a56d0 ^ uVar3) + 200 ^ 0xeee0be81bc910959;
  _DAT_1831a5760 = (_DAT_1831a5760 * 0x2e54c7133275e4f7 ^ _DAT_1831a56d0) + uVar3;
  _DAT_1831a5690 = _DAT_1831a5760 ^ _DAT_1831a56d0;
  _DAT_1831a5610 = 200;
  _DAT_1831a55f8 = func_0x000187e61170(_DAT_1831a5808 ^ 0x23007bed00218c);
  uVar3 = _DAT_1831a55f8 & 0x7fffffffffffffff;
  _DAT_1831a56d8 = _DAT_1831a5750 ^ uVar3 ^ 0x30;
  _DAT_1831a55c8 = (_DAT_1831a55c8 ^ uVar3) + 0x30 ^ 0xbca9b6774c3244e2;
  _DAT_1831a55c0 = (_DAT_1831a55c0 * -0x25b400f4e51057c9 ^ _DAT_1831a55c8) + uVar3;
  _DAT_1831a5668 = _DAT_1831a55c0 ^ _DAT_1831a55c8;
  _DAT_1831a56d0 = _DAT_1831a5760 ^ 0x30;
  _DAT_1831a58e8 = 0x30;
  _DAT_1831a5700 = func_0x000187e61170(_DAT_1831a5828 ^ 0x22ff7c56002163);
  _DAT_1831a5590 = _DAT_1831a5590 ^ _DAT_1831a5700 ^ 0x68 ^ 0x288e069215b193aa;
  _DAT_1831a55d8 = (_DAT_1831a55d8 * 0x17bef8342c9a7e67 ^ _DAT_1831a5590) + (_DAT_1831a5700 ^ 0x68);
  _DAT_1831a56a0 = _DAT_1831a55d8 ^ _DAT_1831a5590;
  _DAT_1831a58e0 = 0;
  uVar3 = (~_DAT_1831a5720 + 0x69) *
          ((_DAT_1831a5500 ^ 0x8422234d) + (ulonglong)((uint)_DAT_1831a5500 & 0x8422234d) * 2);
  uVar3 = (uVar3 | _DAT_1831a5748) + (uVar3 & _DAT_1831a5748);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831a5790 = func_0x000187e61170((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_1831a5840 = _DAT_1831a5840 ^ _DAT_1831a5790 ^ 0x68 ^ 0x313afc8a4d93f549;
  _DAT_1831a5500 = (_DAT_1831a5500 * -0x7a267e825e660861 ^ _DAT_1831a5840) + (_DAT_1831a5790 ^ 0x68)
  ;
  _DAT_1831a5630 = _DAT_1831a5500 ^ _DAT_1831a5840;
  _DAT_1831a5880 = 0;
  bVar1 = *(byte *)(unaff_RBP + 0x20);
  uVar4 = (ulonglong)bVar1;
  uVar3 = (~_DAT_1831a5698 + 0x31) *
          ((uVar4 ^ 0x84222325 ^ _DAT_1831a55f0) +
          (ulonglong)((uint)_DAT_1831a55f0 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | _DAT_1831a5828) + (uVar3 & _DAT_1831a5828);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831a5590 =
       func_0x000187e61170((uVar4 ^ 0x84222315 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ 0x84222315) & (uint)uVar3));
  uVar3 = (ulonglong)bVar1 * 0x30 ^ _DAT_1831a5590;
  uVar3 = uVar3 << 0x39 | uVar3 >> 7;
  _DAT_1831a5658 = uVar4 | 0x30;
  _DAT_1831a56f0 = (_DAT_1831a56f0 ^ uVar3) + _DAT_1831a5658 ^ 0x33d91443ee96facc;
  _DAT_1831a57f8 = (_DAT_1831a57f8 * 0x5647e0cc96ac5243 ^ _DAT_1831a56f0) + uVar3;
  _DAT_1831a5508 = _DAT_1831a57f8 ^ _DAT_1831a56f0;
  *(char *)(unaff_RBP + -0x51 + *(longlong *)(unaff_RBP + 0x40)) = (char)_DAT_1831a5658;
  switch(uVar5 < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e3ced0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e3ced0(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar1;
  ulonglong uVar2;
  
  *(uint *)(unaff_RBP + 0x40) = unaff_ESI;
  *(char *)(unaff_RBP + 0x68) = (char)unaff_ESI + (char)((ulonglong)unaff_ESI / 10) * -10;
  uVar1 = (_DAT_1831a5540 ^ _DAT_180df0c70) + _DAT_1831a5720 + 0x842223cb;
  uVar2 = (_DAT_1831a5720 ^ _UNK_180df0c78) + _DAT_1831a5540 + 0xfd;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a5540 ^ _DAT_180df0c70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a5720 ^ _UNK_180df0c78;
  _DAT_1831a5668 =
       func_0x000187e61170((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a5540 + 0xfd) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a5720 + 0x842223cb));
  _DAT_1831a57e8 =
       (_DAT_1831a57e8 ^ _DAT_1831a5668 & 0xfffffffff8000000) + 0x13 ^ 0xcb499bf5589ad343;
  _DAT_1831a5538 =
       (_DAT_1831a5538 * -0x688bd9642cf04ded ^ _DAT_1831a57e8) +
       (_DAT_1831a5668 & 0xfffffffff8000000);
  _DAT_1831a56e0 = _DAT_1831a5538 ^ _DAT_1831a57e8;
  _DAT_1831a5778 = 0x13;
  _DAT_1831a56b0 = func_0x000187e61170(_DAT_1831a5558 ^ 0x22ff7ba30021cf);
  uVar1 = _DAT_1831a56b0 >> 1 | _DAT_1831a56b0;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1831a56b0;
  _DAT_1831a55c0 = (_DAT_1831a55c0 ^ uVar1) - 0x40 ^ 0xaf02619298213a24;
  _DAT_1831a5638 = (_DAT_1831a5638 * 0x3b0aef57c702c319 ^ _DAT_1831a55c0) + uVar1;
  _DAT_1831a56d0 = _DAT_1831a5638 ^ _DAT_1831a55c0;
  _DAT_1831a5790 = 0xc0;
  _DAT_1831a5610 = func_0x000187e61170(_DAT_1831a5540 ^ 0xffdcff83acffdd71);
  uVar1 = _DAT_1831a5610 - (_DAT_1831a5610 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = ((((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1831a5610) & 0xfffffffffffffff8;
  _DAT_1831a56e0 = _DAT_1831a5728 ^ uVar1 ^ 0x70;
  _DAT_1831a5748 = (_DAT_1831a5748 ^ uVar1) + 0x70 ^ 0xb73752b3703262a2;
  _DAT_1831a55d0 = (_DAT_1831a55d0 * -0x5f514629b1db47ad ^ _DAT_1831a5748) + uVar1;
  _DAT_1831a5728 = _DAT_1831a55d0 ^ _DAT_1831a5748;
  _DAT_1831a5898 = _DAT_1831a5768 ^ 0x70;
  _DAT_1831a5730 = 0x70;
  uVar1 = (_DAT_1831a57c0 ^ _DAT_180269f10) + _DAT_1831a5558 + 0x84222355;
  uVar2 = (_DAT_1831a5558 ^ _UNK_180269f18) + _DAT_1831a57c0 + 0xc0;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a57c0 ^ _DAT_180269f10;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a5558 ^ _UNK_180269f18;
  _DAT_1831a56d8 =
       func_0x000187e61170((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a57c0 + 0xc0) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a5558 + 0x84222355));
  uVar1 = (ulonglong)((uint)_DAT_1831a56d8 ^ 0xf0) << 0x2c |
          _DAT_1831a56d8 >> 0x14 & 0xffffffffffc00000;
  _DAT_1831a5760 = _DAT_1831a5540 ^ uVar1 ^ 0x130;
  _DAT_1831a56b0 = (_DAT_1831a56b0 ^ uVar1) + 0x130 ^ 0x2dd9013861849934;
  _DAT_1831a5838 = (_DAT_1831a5838 * -0x3001b3d616acd2f9 ^ _DAT_1831a56b0) + uVar1;
  _DAT_1831a5530 = _DAT_1831a5838 ^ _DAT_1831a56b0;
  _DAT_1831a5538 = 0x30;
  uVar1 = (_DAT_1831a5880 ^ _DAT_180145310) + _DAT_1831a58d0 + 0x84222325;
  uVar2 = (_DAT_1831a58d0 ^ _UNK_180145318) + _DAT_1831a5880 + 0xfc;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a5880 ^ _DAT_180145310;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a58d0 ^ _UNK_180145318;
  _DAT_1831a55f0 =
       func_0x000187e61170((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a5880 + 0xfc) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a58d0 + 0x84222325));
  _DAT_1831a5560 = (_DAT_1831a5560 ^ _DAT_1831a55f0) - 0xfc ^ 0x98ebcc945b42972a;
  _DAT_1831a5858 = (_DAT_1831a5858 * -0xce125a49005e94f ^ _DAT_1831a5560) + _DAT_1831a55f0;
  _DAT_1831a56e0 = _DAT_1831a5858 ^ _DAT_1831a5560;
  _DAT_1831a5548 = 4;
  uVar1 = (~_DAT_1831a5810 + 0xfd) *
          ((_DAT_1831a56c8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1831a56c8 & 0x84222315) * 2);
  uVar1 = (uVar1 | _DAT_1831a5740) + (uVar1 & _DAT_1831a5740);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a5788 = func_0x000187e61170((uVar1 | 0x842223e9) + (ulonglong)((uint)uVar1 & 0x842223e9))
  ;
  uVar1 = (ulonglong)((uint)_DAT_1831a5788 & 0x30);
  _DAT_1831a5610 = _DAT_1831a5528 ^ uVar1 ^ 300;
  _DAT_1831a5828 = (_DAT_1831a5828 ^ uVar1) + 300 ^ 0x79db1ffae138ca9b;
  _DAT_1831a5518 = (_DAT_1831a5518 * 0x39faf563ad0e5a1 ^ _DAT_1831a5828) + uVar1;
  _DAT_1831a5638 = _DAT_1831a5518 ^ _DAT_1831a5828;
  _DAT_1831a5878 = 0x2c;
  uVar1 = (~_DAT_1831a5708 + 5) *
          ((_DAT_1831a57d0 ^ 0x84222309) + (ulonglong)((uint)_DAT_1831a57d0 & 0x84222309) * 2);
  uVar1 = (uVar1 | _DAT_1831a58c0) + (uVar1 & _DAT_1831a58c0);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a5708 = func_0x000187e61170((uVar1 | 0x8422230d) + (ulonglong)((uint)uVar1 & 0x8422230d))
  ;
  uVar1 = (_DAT_1831a5708 ^ 0x2c) << 0x3b | ((_DAT_1831a5708 ^ 0x2c) & 0x7fffffffffff) >> 5;
  _DAT_1831a5638 = _DAT_1831a5740 ^ uVar1 ^ 0x30;
  _DAT_1831a5858 = (_DAT_1831a5858 ^ uVar1) + 0x30 ^ 0xb89e908085e39301;
  _DAT_1831a5888 = (_DAT_1831a5888 * 0x652e450cba781909 ^ _DAT_1831a5858) + uVar1;
  _DAT_1831a56b8 = _DAT_1831a5888 ^ _DAT_1831a5858;
  _DAT_1831a5758 = 0x30;
  uVar1 = (~_DAT_1831a57a0 + 0x14) *
          ((_DAT_1831a57f0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1831a57f0 & 0x842223da) * 2);
  uVar1 = (uVar1 | _DAT_1831a5680) + (uVar1 & _DAT_1831a5680);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a57e0 = func_0x000187e61170((uVar1 | 0x842223c9) + (ulonglong)((uint)uVar1 & 0x842223c9))
  ;
  uVar1 = (_DAT_1831a57e0 * -0x5817eece9e05fcad ^ 0xffU) << 0xe |
          (ulonglong)(_DAT_1831a57e0 * -0x5817eece9e05fcad) >> 0x32;
  _DAT_1831a58f8 = _DAT_1831a5680 ^ uVar1 ^ 0x112;
  _DAT_1831a5700 = (_DAT_1831a5700 ^ uVar1) + 0x112 ^ 0x69d2922ace570556;
  _DAT_1831a58c0 = (_DAT_1831a58c0 * 0x7791654c93d4c2db ^ _DAT_1831a5700) + uVar1;
  _DAT_1831a5768 = _DAT_1831a58c0 ^ _DAT_1831a5700;
  _DAT_1831a56a8 = 0x12;
  _DAT_1831a5720 = func_0x000187e61170(_DAT_1831a56c8 + 0x22ff84c6ffe1ff ^ 0x3b);
  uVar1 = _DAT_1831a5720 ^ 0x12ed;
  uVar2 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar1;
  _DAT_1831a56f0 = (_DAT_1831a56f0 ^ uVar1) + 0xec ^ 0x3c5e39e442480a04;
  _DAT_1831a56d0 = (_DAT_1831a56d0 * 0x295b8c8c3f7f71b7 ^ _DAT_1831a56f0) + uVar1;
  _DAT_1831a5578 = _DAT_1831a56d0 ^ _DAT_1831a56f0;
  _DAT_1831a57e0 = 0xec;
  uVar1 = (_DAT_1831a5538 ^ _DAT_180df0c80) + _DAT_1831a5838 + 0x842223da;
  uVar2 = (_DAT_1831a5838 ^ _UNK_180df0c88) + _DAT_1831a5538 + 0x13;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a5538 ^ _DAT_180df0c80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a5838 ^ _UNK_180df0c88;
  _DAT_1831a57a8 =
       func_0x000187e61170((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a5538 + 0x13) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a5838 + 0x842223da));
  _DAT_1831a5738 = (_DAT_1831a5738 ^ _DAT_1831a57a8) + 0x13 ^ 0x3921c78174dc52c0;
  _DAT_1831a5788 = (_DAT_1831a5788 * 0x20f84c5fd86f5dc5 ^ _DAT_1831a5738) + _DAT_1831a57a8;
  _DAT_1831a5730 = _DAT_1831a5788 ^ _DAT_1831a5738;
  _DAT_1831a5560 = 0x13;
  _DAT_1831a5758 = func_0x000187e61170(_DAT_1831a57d0 ^ 0xffe10083f30021d2);
  uVar1 = _DAT_1831a5758 ^ 0x30;
  _DAT_1831a5740 = _DAT_1831a5740 ^ uVar1 ^ 0x30;
  _DAT_1831a55f8 = (_DAT_1831a55f8 ^ uVar1) + 0x30 ^ 0x9446ad02ad95ddbb;
  _DAT_1831a56f0 = (_DAT_1831a56f0 * -0x139f7c5464e6abab ^ _DAT_1831a55f8) + uVar1;
  _DAT_1831a5600 = _DAT_1831a56f0 ^ _DAT_1831a55f8;
  _DAT_1831a58b0 = 0x30;
  uVar1 = (_DAT_1831a5548 ^ _DAT_1801ec2c0) + _DAT_1831a5810 + 0x842223da;
  uVar2 = (_DAT_1831a5810 ^ _UNK_1801ec2c8) + _DAT_1831a5548 + 0xff;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_1831a5548 ^ _DAT_1801ec2c0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1831a5810 ^ _UNK_1801ec2c8;
  _DAT_1831a5558 =
       func_0x000187e61170((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1831a5548 + 0xff) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_1831a5810 + 0x842223da));
  _DAT_1831a5708 = _DAT_1831a5708 ^ _DAT_1831a5558 ^ 0xff ^ 0x52d9966fe3807db9;
  _DAT_1831a5630 = (_DAT_1831a5630 * 0x7fac7b6a4917c34f ^ _DAT_1831a5708) + (_DAT_1831a5558 ^ 0xff);
  _DAT_1831a57a0 = _DAT_1831a5630 ^ _DAT_1831a5708;
  _DAT_1831a58e0 = 0;
  _DAT_1831a5580 = func_0x000187e61170(_DAT_1831a5730 ^ 0xffdeff8425ffdd2e);
  uVar1 = _DAT_1831a5580 - (_DAT_1831a5580 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar1 = (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1831a5580;
  _DAT_1831a55b8 = _DAT_1831a55b8 ^ uVar1 ^ 0xf18e2d523311a7f8;
  _DAT_1831a5530 = (_DAT_1831a5530 * 0x39321544252bf5c9 ^ _DAT_1831a55b8) + uVar1;
  _DAT_1831a5820 = _DAT_1831a5530 ^ _DAT_1831a55b8;
  _DAT_1831a56a8 = 0;
  uVar1 = (~_DAT_1831a5550 + 0x57) *
          ((_DAT_1831a58c8 ^ 0x84222373) + (ulonglong)((uint)_DAT_1831a58c8 & 0x84222373) * 2);
  uVar1 = (uVar1 | _DAT_1831a5560) + (uVar1 & _DAT_1831a5560);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_1831a5530 = func_0x000187e61170((uVar1 | 0x84222325) + (ulonglong)((uint)uVar1 & 0x84222325))
  ;
  _DAT_1831a57e8 = _DAT_1831a57e8 ^ _DAT_1831a5530 ^ 0x9ac7b78f6849f33e;
  _DAT_1831a5598 = (_DAT_1831a5598 * -0x54b375ad18fb6d65 ^ _DAT_1831a57e8) + _DAT_1831a5530;
  _DAT_1831a5810 = _DAT_1831a5598 ^ _DAT_1831a57e8;
  _DAT_1831a56d8 = 0;
  *(byte *)(in_RAX + -1) = *(byte *)(unaff_RBP + 0x68) | 0x30;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e45a5b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e45a5b(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  int unaff_R12D;
  longlong *unaff_R13;
  
  lVar2 = (**(code **)(unaff_R13 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x70) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x78));
  (**(code **)(unaff_R13 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  *(undefined4 *)(unaff_RBP + 0x80) = 6;
  *(undefined8 *)(unaff_RBP + 0x70) = unaff_RBX;
  *(int *)(unaff_RBP + 0x78) = unaff_R12D + 2;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e499c9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e499c9(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x78) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e4deaa -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e4deaa(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  
  uVar2 = (**(code **)(unaff_R13 + JNI->AllocObject /*0xd8*/))();
  *(undefined8 *)(unaff_RBP + 0x70) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x78) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x80) = *(undefined8 *)(unaff_RBP + 0x18);
  *(undefined4 *)(unaff_RBP + 0x88) = 0;
  *(undefined4 *)(unaff_RBP + 0x90) = unaff_EDI;
  FUN_190ddfc90();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e4df35 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e4df35(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x78) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e4e172 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187e4e1b1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187e4e172(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7e4e1fb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e4e1fb(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e4e281 -----

void FUN_187e4e281(void)

{
  return;
}


// ----- block @ rva 0x7e4e3d2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e4e3d2(longlong param_1)

{
  switch(0xf < *(ulonglong *)(param_1 + 0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e63004 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e63004(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e631ad -----

void FUN_187e631ad(void)

{
  return;
}


// ----- block @ rva 0x7e638d6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e638d6(void)

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


// ----- block @ rva 0x7e64107 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187e6363d(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e64355 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187e6363d(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e648eb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187e6363d(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e65a3d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e65a3d(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e65e46 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187e6363d(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e66e6d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e66e6d(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7e67c5f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e67c5f(void)

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


// ----- block @ rva 0x7e67cb3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e67cb3(void)

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


// ----- block @ rva 0x7e67cda -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e67cda(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180df66a8)();
  return;
}


// ----- block @ rva 0x7e67d3c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e67d3c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectArrayElement /*0x568*/))();
  (*_DAT_180df6798)();
  return;
}


// ----- block @ rva 0x7e67dd1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e67dd1(void)

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


// ----- block @ rva 0x7e67e25 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e67e25(void)

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


// ----- block @ rva 0x7e68132 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e68132(void)

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


// ----- block @ rva 0x7e688d4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e688d4(void)

{
  FUN_190dd72e0();
  (*_DAT_180df68d8)();
  return;
}


// ----- block @ rva 0x7e689c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e689c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180df6a58)();
  return;
}


// ----- block @ rva 0x7e689e3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e689e3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180df6658)();
  return;
}


// ----- block @ rva 0x7e68a07 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e68a07(void)

{
  (*_DAT_180df6a58)();
  return;
}


// ----- block @ rva 0x7e68a18 -----

void FUN_187e68a18(void)

{
  return;
}


// ----- block @ rva 0x7e68a26 -----

void FUN_187e68a26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7e68b90 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e68b90(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180df6ee8)();
  return;
}


// ----- block @ rva 0x7e698bc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e698bc(void)

{
  (*_DAT_180df7818)();
  return;
}


// ----- block @ rva 0x7e69fa5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e69fa5(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180df6e18)();
  return;
}


// ----- block @ rva 0x7e6a05e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6a05e(void)

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


// ----- block @ rva 0x7e6a120 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6a120(void)

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


// ----- block @ rva 0x7e6a2e3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6a2e3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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


// ----- block @ rva 0x7e6a56c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e6a56c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0x7e6a79c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e6a79c(void)

{
  (*_DAT_180df7838)();
  return;
}


// ----- block @ rva 0x7e6b314 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e6b314(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180df7718)();
  return;
}


// ----- block @ rva 0x7e6b40f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e6b40f(void)

{
  (*_DAT_180df7838)();
  return;
}


// ----- block @ rva 0x7e6b41a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e6b41a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180df78e8)();
  return;
}


// ----- block @ rva 0x7e6b475 -----

void FUN_187e6b475(void)

{
  return;
}


// ----- block @ rva 0x7e6b6bf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e6b6bf(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
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


// ----- block @ rva 0x7e6ba09 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6ba09(void)

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


// ----- block @ rva 0x7e6bb1d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6bb1d(void)

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


// ----- block @ rva 0x7e6be2b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6be2b(void)

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


// ----- block @ rva 0x7e6da14 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187e6da14(void)

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


// ----- block @ rva 0x7e6dd73 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6dd73(void)

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


// ----- block @ rva 0x7e6eda5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6eda5(void)

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


// ----- block @ rva 0x7e6edbf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187e6edbf(void)

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


// ----- block @ rva 0x7e715a5 -----

void FUN_187e715a5(void)

{
  return;
}

