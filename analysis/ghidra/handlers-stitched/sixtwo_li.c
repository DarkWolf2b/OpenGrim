// ===== STITCHED CORPUS: sixtwo.li =====
// handlers: 12  continuation blocks: 122  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x2f702a8', '0xd0af986', '0xda3fc0', '0xda4628', '0xda4638', '0xda4648', '0xda4658', '0xda4668', '0xda4678', '0xda4688', '0xda5098', '0xda50a8', '0xda50b8', '0xda50c8', '0xda50d8', '0xda50e8', '0xda50f8', '0xda53a8', '0xda53b8']

// ===== Lsixtwo/li; _bb0a58328670fec40d548b8c03abff75 ()V (handler @ image 187cc6fc0, runtime 6fffef8d6fc0) =====

void FUN_187cc6fc0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187cc709c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da2220 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li; bYk ()Lsixtwo/li$ux; (handler @ image 187ccccf0, runtime 6fffef8dccf0) =====

void FUN_187ccccf0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187cccd10 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da3800 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li; bYl ()Lsixtwo/li$ut; (handler @ image 187cccef0, runtime 6fffef8dcef0) =====

void FUN_187cccef0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187cccf10 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da38e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li; bYm ()Ljava/util/List; (handler @ image 187ccd0f0, runtime 6fffef8dd0f0) =====

void FUN_187ccd0f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187ccd110 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da39c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li; bYn ()Ljava/util/List; (handler @ image 187ccd2f0, runtime 6fffef8dd2f0) =====

void FUN_187ccd2f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187ccd310 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da3aa0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li; bYo (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 187ccd4f0, runtime 6fffef8dd4f0) =====

undefined8 FUN_187ccd4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/li; bYp ([B)Ljava/lang/String; (handler @ image 187ccd580, runtime 6fffef8dd580) =====

void FUN_187ccd580(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000187ccd623 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da3d00 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li; bYq (IJ)Ljava/lang/String; (handler @ image 187cf67f0, runtime 6fffef9067f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cf67f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = (~uRam000000018319e250 + 0xdd19f8ac910177e1) *
          ((uRam000000018319dd80 ^ 0x650e876fec3fb8a) +
          (uRam000000018319dd80 & 0x650e876fec3fb8a) * 2);
  uVar4 = (uVar4 | uRam000000018319dd80) + (uVar4 & uRam000000018319dd80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319e130 =
       func_0x000187cfd740((uVar4 | 0xdb4910da6fc28c6a) + (uVar4 & 0xdb4910da6fc28c6a));
  uVar4 = (uRam000000018319e130 ^ 0x24000526ae0880f) & 0x650e8767ae1d8af;
  uRam000000018319ddf8 = (uRam000000018319ddf8 ^ uVar4) + 0xdf59f8fefbe1ffef ^ 0xa301e80a5c5c9100;
  uRam000000018319ded0 = (uRam000000018319ded0 * 0x7fb4c1d52a5ae699 ^ uRam000000018319ddf8) + uVar4;
  uRam000000018319ddd0 = uRam000000018319ded0 ^ uRam000000018319ddf8;
  uRam000000018319e210 = 0xdf59f8fefbe1ffef;
  uVar4 = (~uRam000000018319e228 + 0xfb8d7413e9a61dbd) *
          ((uRam000000018319e1d8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018319e1d8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018319e0b0) + (uVar4 & uRam000000018319e0b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319e1b8 =
       func_0x000187cfd740((uVar4 | 0xfb8d74136d843e99) + (uVar4 & 0xfb8d74136d843e99));
  uRam000000018319e1f8 =
       (uRam000000018319e1f8 ^ uRam000000018319e1b8) + 0x4728bec1659e244 ^ 0xe92284789cde2397;
  uRam000000018319df00 =
       (uRam000000018319df00 * 0x236d2c2ffd944c3f ^ uRam000000018319e1f8) + uRam000000018319e1b8;
  uRam000000018319de08 = uRam000000018319df00 ^ uRam000000018319e1f8;
  uRam000000018319e168 = 0x4728bec1659e244;
  uVar4 = (~uRam000000018319e140 + 0xfb8d7413e9a61dbd) *
          ((uRam000000018319e090 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018319e090 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam000000018319de80) + (uVar4 & uRam000000018319de80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319e1e0 =
       func_0x000187cfd740((uVar4 | 0xfb8d74136d844166) + (uVar4 & 0xfb8d74136d844166));
  uVar4 = (uRam000000018319e1e0 & 0x7fffffffffffffff) -
          ((uRam000000018319e1e0 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam000000018319e1e0 & 0x7fffffffffffffff;
  uRam000000018319dfc8 = uRam000000018319e198 ^ uVar4 ^ 0xfb8d7413e9a69dbb;
  uRam000000018319e2d0 = (uRam000000018319e2d0 ^ uVar4) + 0xfb8d7413e9a69dbb ^ 0xf9453d42f00d6d76;
  uRam000000018319e058 = (uRam000000018319e058 * -0x686289db1dc0fe31 ^ uRam000000018319e2d0) + uVar4
  ;
  uRam000000018319e128 = uRam000000018319e058 ^ uRam000000018319e2d0;
  uRam000000018319e180 = -0x4728bec16596245;
  uVar4 = (uRam000000018319e190 ^ _UNK_180daa990) + uRam000000018319e1f0 + 0xfb8d74136d84be9e;
  uVar8 = (uRam000000018319e1f0 ^ _UNK_180daa998) + uRam000000018319e190 + 0x4728bec1659e244;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018319e190 ^ _UNK_180daa990;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018319e1f0 ^ _UNK_180daa998;
  uRam000000018319dfb0 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018319e190 + 0x4728bec1659e244) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018319e1f0 + 0xfb8d74136d84be9e));
  uVar8 = ~uRam000000018319dfb0;
  uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar8;
  uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar8) *
          0x1dbf4ed668372b3;
  uRam000000018319dfe8 = uRam000000018319e0c0 ^ uVar4 ^ 0x7fff;
  uRam000000018319e1b8 = (uRam000000018319e1b8 ^ uVar4) + 0x7fff ^ 0x9e7cee8bfab0cfc;
  uRam000000018319e010 = (uRam000000018319e010 * -0x58f0df863dc9be27 ^ uRam000000018319e1b8) + uVar4
  ;
  uRam000000018319dd20 = uRam000000018319e010 ^ uRam000000018319e1b8;
  uRam000000018319e248 = 0x7fff;
  uRam000000018319e018 = func_0x000187cfd740(uRam000000018319dfe0 + 0x3afe315d1cd4767c ^ 0xfe);
  uVar4 = uRam000000018319e018 >> 1 | uRam000000018319e018;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018319e018;
  uRam000000018319e0e8 = (uRam000000018319e0e8 ^ uVar4) + 0x7c8c283a1856daff ^ 0x55b2cbaef121a1a1;
  uRam000000018319def0 = (uRam000000018319def0 * -0x2034eaa62731851b ^ uRam000000018319e0e8) + uVar4
  ;
  uRam000000018319e278 = uRam000000018319def0 ^ uRam000000018319e0e8;
  uRam000000018319e058 = 0x7c8c283a1856daff;
  uVar4 = (uRam000000018319ddd8 ^ _UNK_180daa9a0) + uRam000000018319df78 + 0x84225cda;
  uVar8 = (uRam000000018319df78 ^ _UNK_180daa9a8) + uRam000000018319ddd8 + 0x8373d7c5e7a92501;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018319ddd8 ^ _UNK_180daa9a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018319df78 ^ _UNK_180daa9a8;
  uRam000000018319df40 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018319ddd8 + 0x8373d7c5e7a92501) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018319df78 + 0x84225cda));
  uVar4 = uRam000000018319df40 ^ 0x8373d7c5e7a90000;
  uRam000000018319e158 = uRam000000018319de90 ^ uVar4 ^ 0x8373d7c5e7a9a500;
  uRam000000018319ddf8 = (uRam000000018319ddf8 ^ uVar4) + 0x8373d7c5e7a9a500 ^ 0x3103948c425054a0;
  uRam000000018319e068 = (uRam000000018319e068 * 0x18724f7beeca8eaf ^ uRam000000018319ddf8) + uVar4;
  uRam000000018319e060 = uRam000000018319e068 ^ uRam000000018319ddf8;
  uRam000000018319dd98 = 0x8373d7c5e7a9a500;
  uRam000000018319df00 = func_0x000187cfd740(uRam000000018319de98 + 0x6d0b9d54bc4df554 ^ 0x52);
  uVar8 = _UNK_180daa9b8;
  uVar4 = _UNK_180daa9b0;
  uVar3 = uRam000000018319df00 >> 1 | uRam000000018319df00;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018319df00;
  uRam000000018319df70 = uRam000000018319e050 ^ uVar3 ^ 0x4814a76acfd8c0f5;
  uRam000000018319e2b8 = (uRam000000018319e2b8 ^ uVar3) + 0x4814a76acfd8c0f5 ^ 0x922985e51df5ff51;
  uRam000000018319e208 = (uRam000000018319e208 * -0x520b03b521bd1ab1 ^ uRam000000018319e2b8) + uVar3
  ;
  uRam000000018319dd78 = uRam000000018319e208 ^ uRam000000018319e2b8;
  uRam000000018319dea8 = 0x4814a76acfd8c0f5;
  uVar3 = (uRam000000018319dd48 ^ _UNK_180daa9b0) + uRam000000018319ded8 + 0xdf59f8fe7fc3dcca;
  uVar9 = (uRam000000018319ded8 ^ _UNK_180daa9b8) + uRam000000018319dd48 + 0x68baae6bd3f6c106;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319dd48 ^ _UNK_180daa9b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018319ded8 ^ _UNK_180daa9b8;
  uRam000000018319deb0 =
       func_0x000187cfd740((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam000000018319dd48 + 0x68baae6bd3f6c106) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018319ded8 + 0xdf59f8fe7fc3dcca));
  uVar3 = uRam000000018319deb0 * 0x20515d6ea22dc75 ^ 0x68baae6bd3f6c106;
  uRam000000018319e1d8 = (uRam000000018319e1d8 ^ uVar3) + 0xb7e3569528173ee9 ^ 0xfd45fcdc8da681af;
  uRam000000018319de98 = (uRam000000018319de98 * 0x68b5c62b75ebec9b ^ uRam000000018319e1d8) + uVar3;
  uRam000000018319dec0 = uRam000000018319de98 ^ uRam000000018319e1d8;
  uRam000000018319e2d0 = 0xb7e3569528173ee9;
  uVar3 = (uRam000000018319ddf0 ^ uVar4) + uRam000000018319dde0 + 0xdf59f8fe7fc3dcca;
  uVar9 = (uRam000000018319dde0 ^ uVar8) + uRam000000018319ddf0 + 0x68baae6bd3f6c106;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319ddf0 ^ uVar4;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018319dde0 ^ uVar8;
  uRam000000018319de68 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018319ddf0 + 0x68baae6bd3f6c106) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018319dde0 + 0xdf59f8fe7fc3dcca));
  uRam000000018319e050 =
       (uRam000000018319e050 ^ uRam000000018319de68 * -0x69f8a3821a90859d) + 0x4818a86ad3e0c106 ^
       0x3bc228ad52a2f62d;
  uRam000000018319e030 =
       (uRam000000018319e030 * 0x524d82ba32943b0b ^ uRam000000018319e050) +
       uRam000000018319de68 * -0x69f8a3821a90859d;
  uRam000000018319de00 = uRam000000018319e030 ^ uRam000000018319e050;
  uRam000000018319e1b8 = 0x4818a86ad3e0c106;
  uVar4 = (uRam000000018319e210 ^ _UNK_180daa9c0) + uRam000000018319e160 + 0xb7e35695ac351dcc;
  uVar8 = (uRam000000018319e160 ^ _UNK_180daa9c8) + uRam000000018319e210 + 0x903150d5a7c1820c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018319e210 ^ _UNK_180daa9c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018319e160 ^ _UNK_180daa9c8;
  uRam000000018319e050 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018319e210 + 0x903150d5a7c1820c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018319e160 + 0xb7e35695ac351dcc));
  uVar4 = ~uRam000000018319e050 & 0xb7e3569528173ee9;
  uRam000000018319e1a0 = uRam000000018319df50 ^ uVar4 ^ 0x4814a76acfd8c0f5;
  uRam000000018319de50 = (uRam000000018319de50 ^ uVar4) + 0x4814a76acfd8c0f5 ^ 0xf4f93c1c2fe83d67;
  uRam000000018319e078 = (uRam000000018319e078 * 0x73936250581f1d4d ^ uRam000000018319de50) + uVar4;
  uRam000000018319dda8 = uRam000000018319e078 ^ uRam000000018319de50;
  uRam000000018319e2a0 = 0x4814a76acfd8c0f5;
  uVar4 = (uRam000000018319e018 ^ 0x84225cda) + uRam000000018319de08 + 0x84225cda;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018319e018 ^ 0x84225cda;
  uVar8 = ((uRam000000018319de08 + uRam000000018319e018) * 0x2000 |
          uRam000000018319de08 + uRam000000018319e018 >> 0x33) ^ uRam000000018319de08;
  uRam000000018319e1a0 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) - uRam000000018319e018 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018319de08 + 0x84225cda));
  uVar4 = (ulonglong)((uint)uRam000000018319e1a0 & 0x7fff);
  uRam000000018319e230 = (uRam000000018319e230 ^ uVar4) + 0x7fff ^ 0xed71e172a20dc93d;
  uRam000000018319de18 = (uRam000000018319de18 * -0x1d05c79fa3e2a71 ^ uRam000000018319e230) + uVar4;
  uRam000000018319df30 = uRam000000018319de18 ^ uRam000000018319e230;
  uRam000000018319e158 = 0x7fff;
  uRam000000018319e210 = func_0x000187cfd740(lRam000000018319e1a8 + 0xff235d800b073bdfU ^ 0x97);
  uRam000000018319def8 =
       (uRam000000018319def8 ^ uRam000000018319df20) + 0x20a60701041e0010 ^ 0x26b5f08613e4702d;
  uRam000000018319dd90 =
       (uRam000000018319dd90 * -0x7286c2e48eb98da9 ^ uRam000000018319def8) + uRam000000018319df20;
  uRam000000018319e0e8 = uRam000000018319dd90 ^ uRam000000018319def8;
  uRam000000018319e048 = 0x20a60701041e0010;
  uRam000000018319df78 = func_0x000187cfd740(uRam000000018319e220 + 0x8a45d5ad967dbe4 ^ 0x33);
  uVar4 = (uRam000000018319df78 * 0x7f32a744ebc57563 << 0x35 |
          uRam000000018319df78 * 0x7f32a744ebc57563 >> 0xb) * -0x87f19bb532fcc1b;
  uRam000000018319dfd8 = uRam000000018319dfd8 ^ uVar4 ^ 0xeda89b91827b4989;
  uRam000000018319e0c0 = (uRam000000018319e0c0 * 0x5776ec18187d7815 ^ uRam000000018319dfd8) + uVar4;
  uRam000000018319dd50 = uRam000000018319e0c0 ^ uRam000000018319dfd8;
  uRam000000018319de98 = 0;
  uRam000000018319e298 = func_0x000187cfd740(uRam000000018319e2c8 + 0xffcc007c45ffe1ff ^ 0x44);
  uVar4 = uRam000000018319e298 >> 1 | uRam000000018319e298;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uRam000000018319e298) & 0x7ffffffffffff;
  uRam000000018319ddb8 = uRam000000018319e158 ^ uVar4 ^ 0x7fff;
  uRam000000018319e258 = (uRam000000018319e258 ^ uVar4) + 0x7fff ^ 0xe52782f32ee9735e;
  uRam000000018319dfe0 = (uRam000000018319dfe0 * 0x4798bc2e3f955ef3 ^ uRam000000018319e258) + uVar4;
  uRam000000018319de48 = uRam000000018319dfe0 ^ uRam000000018319e258;
  uRam000000018319df78 = 0x7fff;
  uVar4 = (uRam000000018319dfc8 ^ _UNK_180daa9d0) + uRam000000018319de78 + 0x650e876fec3fb8a;
  uVar8 = (uRam000000018319de78 ^ _UNK_180daa9d8) + uRam000000018319dfc8 + 0x650e8767ae1d8af;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018319dfc8 ^ _UNK_180daa9d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018319de78 ^ _UNK_180daa9d8;
  uRam000000018319e140 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018319dfc8 + 0x650e8767ae1d8af) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018319de78 + 0x650e876fec3fb8a));
  uVar4 = uRam000000018319e140 * 0x6e013d2eaad81400 |
          uRam000000018319e140 * 0x3a1b804f4baab605 >> 0x36;
  uRam000000018319ddc8 = uRam000000018319ddc8 ^ uVar4 ^ 0x5d8bf5a3e03f75b;
  uRam000000018319ddb8 = (uRam000000018319ddb8 * 0x248ec85c02e82d2d ^ uRam000000018319ddc8) + uVar4;
  uRam000000018319dd70 = uRam000000018319ddb8 ^ uRam000000018319ddc8;
  uRam000000018319df00 = 0;
  uVar4 = param_4 ^ 0x84222325 ^ uRam000000018319de28;
  lVar5 = (param_4 ^ 0x84222325) + uRam000000018319dee0;
  uVar8 = uVar4 + lVar5;
  uVar3 = (uRam000000018319dee0 ^ 0x7fff) + uRam000000018319de28 + 0x7fff;
  uVar4 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar4;
  uVar8 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319dee0 ^ 0x7fff;
  uRam000000018319e1e8 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018319de28 + 0x7fff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar5);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam000000018319ddb0 = (ulonglong)uVar2;
  uRam000000018319e278 =
       (uRam000000018319e278 ^ ~uRam000000018319e1e8 & param_4) + uRam000000018319ddb0 ^
       0x90d9907f19474e68;
  uRam000000018319e0d8 =
       (uRam000000018319e0d8 * 0x3dc640a7de515c37 ^ uRam000000018319e278) +
       (~uRam000000018319e1e8 & param_4);
  uRam000000018319e170 = uRam000000018319e0d8 ^ uRam000000018319e278;
  uVar2 = uVar2 ^ param_3;
  uRam000000018319ded8 = func_0x000187cfd740(lRam000000018319dfa0 + 0xffa7ff37a0002fffU ^ 0xc3);
  uVar4 = (uRam000000018319ded8 ^ 0x5efabbcd) & 0x3fffffffffffffff;
  uRam000000018319de68 = (uRam000000018319de68 ^ uVar4) + 0x5efabbcd ^ 0xa51079925deeff52;
  uRam000000018319e1f8 = (uRam000000018319e1f8 * 0x3cb43e366ab7eb15 ^ uRam000000018319de68) + uVar4;
  uRam000000018319dd98 = uRam000000018319e1f8 ^ uRam000000018319de68;
  uRam000000018319df18 = 0x5efabbcd;
  uVar4 = (~uRam000000018319e0a8 + 0x8f036fe2) *
          ((uRam000000018319e0e0 ^ 0x72e7cbd0) +
          (ulonglong)((uint)uRam000000018319e0e0 & 0x72e7cbd0) * 2);
  uVar4 = (uVar4 | uRam000000018319ddf8) + (uVar4 & uRam000000018319ddf8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319e238 =
       func_0x000187cfd740((uVar4 | 0xfde4a431) + (ulonglong)((uint)uVar4 & 0xfde4a431));
  uVar4 = (uRam000000018319e238 ^ 0x89dbdd4b49d2fa55) & 0x7fffffffffffffff;
  uRam000000018319e250 = (uRam000000018319e250 ^ uVar4) + 0x79c68714 ^ 0x82953e17dfe951a0;
  uRam000000018319e148 = (uRam000000018319e148 * 0x3e9dc8f36ca87de1 ^ uRam000000018319e250) + uVar4;
  uRam000000018319e1c0 = uRam000000018319e148 ^ uRam000000018319e250;
  uRam000000018319dde0 = 0x79c68714;
  uVar4 = (~uRam000000018319ddb0 + 0xaac9c401) *
          ((uRam000000018319e0c8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018319e0c8 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018319e198) + (uVar4 & uRam000000018319e198);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319e278 =
       func_0x000187cfd740((uVar4 | 0x2eebe725) + (ulonglong)((uint)uVar4 & 0x2eebe725));
  uVar4 = uRam000000018319e278 - (uRam000000018319e278 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018319e278;
  uRam000000018319de38 = (uRam000000018319de38 ^ uVar4) - 0xaac9c400 ^ 0x9d7844992953b89b;
  uRam000000018319e1c8 = (uRam000000018319e1c8 * 0x1b2624fe80868bb1 ^ uRam000000018319de38) + uVar4;
  uRam000000018319e2b0 = uRam000000018319e1c8 ^ uRam000000018319de38;
  uRam000000018319e080 = uRam000000018319e2f0 ^ 0xffffffff55363c00;
  uRam000000018319dd08 = 0x55363c00;
  uVar4 = (~uRam000000018319de60 + 0x55363c01) *
          ((uRam000000018319dfe8 ^ 0x2eebfbd6) +
          (ulonglong)((uint)uRam000000018319dfe8 & 0x2eebfbd6) * 2);
  uVar4 = (uVar4 | uRam000000018319dee0) + (uVar4 & uRam000000018319dee0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319df88 =
       func_0x000187cfd740((uVar4 | 0x7bddc7d6) + (ulonglong)((uint)uVar4 & 0x7bddc7d6));
  uVar4 = (ulonglong)(~(uint)uRam000000018319df88 & 0xaac9d8f3);
  uRam000000018319e2e0 = uRam000000018319e210 ^ uVar4 ^ 0x1000014f3;
  uRam000000018319e280 = (uRam000000018319e280 ^ uVar4) + 0x1000014f3 ^ 0x722d94ca2fe7331b;
  uRam000000018319e078 = (uRam000000018319e078 * -0x7a4d0a4961290213 ^ uRam000000018319e280) + uVar4
  ;
  uRam000000018319e238 = uRam000000018319e078 ^ uRam000000018319e280;
  uRam000000018319deb0 = uRam000000018319e058 ^ 0x1000014f3;
  uRam000000018319e030 = 0x14f3;
  uVar4 = (~uRam000000018319dee0 + 0x54a6d6ea) *
          ((uRam000000018319dd88 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018319dd88 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam000000018319e280) + (uVar4 & uRam000000018319e280);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319e2f8 =
       func_0x000187cfd740((uVar4 | 0xd084f5cc) + (ulonglong)((uint)uVar4 & 0xd084f5cc));
  uRam000000018319e218 =
       (uRam000000018319e218 ^ uRam000000018319e2f8 ^ 0x54a6d6e9) - 0x54a6d6e9 ^ 0xd31ae7cb2d2a506a;
  uRam000000018319e250 =
       (uRam000000018319e250 * -0x6df380a3d13d03b ^ uRam000000018319e218) +
       (uRam000000018319e2f8 ^ 0x54a6d6e9);
  uRam000000018319e258 = uRam000000018319e250 ^ uRam000000018319e218;
  uRam000000018319ded0 = 0xab592917;
  uVar4 = (uRam000000018319de58 ^ _UNK_180daa9e0) + uRam000000018319ded8 + 0x842237d6;
  uVar8 = (uRam000000018319ded8 ^ _UNK_180daa9e8) + uRam000000018319de58 + 0x54a6d6e9;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018319de58 ^ _UNK_180daa9e0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018319ded8 ^ _UNK_180daa9e8;
  uRam000000018319dd80 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018319de58 + 0x54a6d6e9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018319ded8 + 0x842237d6));
  uVar4 = uRam000000018319dd80 * 2 & 0x7fffffffff0;
  uRam000000018319e238 = uRam000000018319e130 ^ uVar4 ^ 0x54a6ebdc;
  uRam000000018319de98 = (uRam000000018319de98 ^ uVar4) + 0x54a6ebdc ^ 0x90068a55b8cb6bd7;
  uRam000000018319df60 = (uRam000000018319df60 * 0x153d0df6f54e5a81 ^ uRam000000018319de98) + uVar4;
  uRam000000018319deb0 = uRam000000018319df60 ^ uRam000000018319de98;
  uRam000000018319dd30 = 0x54a6ebdc;
  uVar4 = (~uRam000000018319ddf0 + 0xab592918) *
          ((uRam000000018319e2c8 ^ 0xd084c8f9) +
          (ulonglong)((uint)uRam000000018319e2c8 & 0xd084c8f9) * 2);
  uVar4 = (uVar4 | uRam000000018319e030) + (uVar4 & uRam000000018319e030);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319e250 =
       func_0x000187cfd740((uVar4 | 0x7bdde1ee) + (ulonglong)((uint)uVar4 & 0x7bdde1ee));
  uVar4 = uRam000000018319e250 ^ 0x38a8fb2a4a416cc4;
  uRam000000018319e1e0 = uRam000000018319e220 ^ uVar4 ^ 0x1000014f3;
  uRam000000018319e170 = (uRam000000018319e170 ^ uVar4) + 0x1000014f3 ^ 0x16b129e2366e5695;
  uRam000000018319e218 = (uRam000000018319e218 * -0x2da6ea10c4709c79 ^ uRam000000018319e170) + uVar4
  ;
  uRam000000018319dd80 = uRam000000018319e218 ^ uRam000000018319e170;
  uRam000000018319dde8 = 0x14f3;
  uVar4 = (uRam000000018319e280 ^ _UNK_180daa9f0) + uRam000000018319e0c0 + 0x84222325;
  uVar8 = (uRam000000018319e0c0 ^ _UNK_180daa9f8) + uRam000000018319e280 + 0xe4314248;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018319e280 ^ _UNK_180daa9f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018319e0c0 ^ _UNK_180daa9f8;
  uRam000000018319de10 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018319e280 + 0xe4314248) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018319e0c0 + 0x84222325));
  uVar4 = (uRam000000018319de10 << 0x33 | uRam000000018319de10 >> 0xd) << 2 |
          (uRam000000018319de10 & 0x1fff) >> 0xb;
  uRam000000018319dfb8 = (uRam000000018319dfb8 ^ uVar4) - 0xe4314248 ^ 0x3222f86905148896;
  uRam000000018319e070 = (uRam000000018319e070 * 0x68262294c4c5c827 ^ uRam000000018319dfb8) + uVar4;
  uRam000000018319e018 = uRam000000018319e070 ^ uRam000000018319dfb8;
  uRam000000018319deb8 = uRam000000018319de98 ^ 0xffffffff1bcebdb8;
  uRam000000018319e0c0 = 0x1bcebdb8;
  uRam000000018319e108 = func_0x000187cfd740(uRam000000018319de48 ^ 0xff95006071fff2c9);
  uVar4 = uRam000000018319e108 ^ 0x12ac73ef9eab;
  uRam000000018319e0b8 = uRam000000018319dff0 ^ uVar4 ^ 0xe431573b;
  uRam000000018319e188 = (uRam000000018319e188 ^ uVar4) + 0xe431573b ^ 0x3aaa3675f8999629;
  uRam000000018319df10 = (uRam000000018319df10 * 0x2eb709724cc944ab ^ uRam000000018319e188) + uVar4;
  uRam000000018319e1a0 = uRam000000018319df10 ^ uRam000000018319e188;
  uRam000000018319e2e8 = 0xe431573b;
  uRam000000018319e270 = func_0x000187cfd740(uRam000000018319e2f0 ^ 0xff4700365dff52df);
  uVar8 = _UNK_180daaa08;
  uVar4 = _UNK_180daaa00;
  uVar3 = uRam000000018319e2c0 & 0x3fffffffffff;
  uRam000000018319df88 = uRam000000018319e268 ^ uVar3 ^ 0x1000014f3;
  uRam000000018319e0e8 = (uRam000000018319e0e8 ^ uVar3) + 0x1000014f3 ^ 0x6dfafdbd133545b3;
  uRam000000018319e180 = (uRam000000018319e180 * -0x6c108df1fbbc5949 ^ uRam000000018319e0e8) + uVar3
  ;
  uRam000000018319dfb0 = uRam000000018319e180 ^ uRam000000018319e0e8;
  uRam000000018319e058 = 0x14f3;
  uVar3 = (uRam000000018319dd68 ^ _UNK_180daaa00) + uRam000000018319e1a0 + 0xdad898e8;
  uVar9 = (uRam000000018319e1a0 ^ _UNK_180daaa08) + uRam000000018319dd68 + 0x79c68714;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319dd68 ^ _UNK_180daaa00;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018319e1a0 ^ _UNK_180daaa08;
  uRam000000018319e0d8 =
       func_0x000187cfd740((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018319dd68 + 0x79c68714) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319e1a0 + 0xdad898e8));
  uVar3 = (ulonglong)(~(uint)uRam000000018319e0d8 & 0x5efabbcd | 0x1efabbcd);
  uRam000000018319de00 = uRam000000018319de78 ^ uVar3 ^ 0xd8c142e1;
  uRam000000018319e2d8 = (uRam000000018319e2d8 ^ uVar3) + 0xd8c142e1 ^ 0xc8f8771871c4d15b;
  uRam000000018319e080 = (uRam000000018319e080 * 0x7fb7053a28529b31 ^ uRam000000018319e2d8) + uVar3;
  uRam000000018319e050 = uRam000000018319e080 ^ uRam000000018319e2d8;
  uRam000000018319e120 = 0xd8c142e1;
  uVar3 = (uRam000000018319de50 ^ uVar4) + uRam000000018319e208 + 0xdad898e8;
  uVar9 = (uRam000000018319e208 ^ uVar8) + uRam000000018319de50 + 0x79c68714;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319de50 ^ uVar4;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam000000018319e208 ^ uVar8;
  uRam000000018319def0 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018319de50 + 0x79c68714) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018319e208 + 0xdad898e8));
  uRam000000018319e120 =
       (uRam000000018319e120 ^ uRam000000018319def0) + 0x273c3cd9 ^ 0xfcbbd3290ba9f32c;
  uRam000000018319dd70 =
       (uRam000000018319dd70 * 0x593bfa7b71d9edc5 ^ uRam000000018319e120) + uRam000000018319def0;
  uRam000000018319de10 = uRam000000018319dd70 ^ uRam000000018319e120;
  uRam000000018319deb8 = 0x273c3cd9;
  uRam000000018319e030 = func_0x000187cfd740(uRam000000018319e238 ^ 0x1700120c008a3d);
  uVar4 = uRam000000018319e030 & 0xffffffff80000000;
  uRam000000018319e088 = uRam000000018319e248 ^ uVar4 ^ 0xd8c142e1;
  uRam000000018319ddf0 = (uRam000000018319ddf0 ^ uVar4) + 0xd8c142e1 ^ 0x6c6adaf11e0485c6;
  uRam000000018319de30 = (uRam000000018319de30 * 0x594faf4bb55c274d ^ uRam000000018319ddf0) + uVar4;
  uRam000000018319e068 = uRam000000018319de30 ^ uRam000000018319ddf0;
  uRam000000018319dd28 = 0xd8c142e1;
  uVar4 = (~uRam000000018319e2d8 + 0xd8c142e2) *
          ((uRam000000018319dd50 ^ 0x5ce361c4) +
          (ulonglong)((uint)uRam000000018319dd50 & 0x5ce361c4) * 2);
  uVar4 = (uVar4 | uRam000000018319de40) + (uVar4 & uRam000000018319de40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam000000018319deb0 =
       func_0x000187cfd740((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam000000018319dfb0 = uRam000000018319dfb0 ^ uRam000000018319deb0 ^ 0x6f76b6fe5849671b;
  uRam000000018319dd28 =
       (uRam000000018319dd28 * 0x43c4f33cea2f8225 ^ uRam000000018319dfb0) + uRam000000018319deb0;
  uRam000000018319e170 = uRam000000018319dd28 ^ uRam000000018319dfb0;
  uRam000000018319e160 = 0;
  uRam000000018319e140 = uRam000000018319deb0;
  uRam000000018319dd60 = func_0x000187cfd740(uRam000000018319e070 ^ 0x1b001d0cffe451);
  uVar4 = uRam000000018319dd60 << 0x1b | uRam000000018319dd60 >> 0x25;
  uRam000000018319e0d0 = (uRam000000018319e0d0 ^ uVar4) + 0xa1054432 ^ 0xc3ce980dede2436b;
  uRam000000018319e2c0 = (uRam000000018319e2c0 * -0xa843b3eafee9205 ^ uRam000000018319e0d0) + uVar4;
  uRam000000018319df48 = uRam000000018319e2c0 ^ uRam000000018319e0d0;
  uRam000000018319e150 = 0xa1054432;
  uVar4 = (uRam000000018319de18 ^ 0x842237d6) + uRam000000018319dd38 + 0x842237d6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018319de18 ^ 0x842237d6;
  uVar8 = ((uRam000000018319dd38 + uRam000000018319de18) * 0x2000 |
          uRam000000018319dd38 + uRam000000018319de18 >> 0x33) ^ uRam000000018319dd38;
  uRam000000018319e1d8 =
       func_0x000187cfd740((uVar8 << 0x1d | uVar8 >> 0x23) - uRam000000018319de18 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018319dd38 + 0x842237d6));
  uVar4 = uRam000000018319e1d8 & 0xffffffffff800000;
  uRam000000018319e138 = uRam000000018319e2a0 ^ uVar4 ^ 0x14f3;
  uRam000000018319e2a0 = (uRam000000018319e2a0 ^ uVar4) + 0x14f3 ^ 0x9d1944b4201c96a7;
  uRam000000018319ddf8 = (uRam000000018319ddf8 * -0x4961ee404afc0bf1 ^ uRam000000018319e2a0) + uVar4
  ;
  uRam000000018319df50 = uRam000000018319ddf8 ^ uRam000000018319e2a0;
  uRam000000018319de10 = 0x14f3;
  uRam000000018319df10 = func_0x000187cfd740(uRam000000018319de98 + 0xffe2ff7c1affe1ff ^ 0x1d);
  uVar4 = (uRam000000018319df10 ^ 0x7be8900e88) & 0xffffffffff;
  uRam000000018319e120 = uRam000000018319e120 ^ uVar4 ^ 0x12c01f911bcbf7bf;
  uRam000000018319dde8 = (uRam000000018319dde8 * 0x24ae66968d0d251b ^ uRam000000018319e120) + uVar4;
  uRam000000018319df78 = uRam000000018319dde8 ^ uRam000000018319e120;
  uRam000000018319e298 = 0;
  uRam000000018319df80 = func_0x000187cfd740(uRam000000018319e2e0 + 0xffd2ff7bd2001dff ^ 0xf3);
  uVar4 = uRam000000018319df80 ^ 0x14f3;
  uRam000000018319e278 = uRam000000018319dec0 ^ uVar4 ^ 0x14f3;
  uRam000000018319e0c8 = (uRam000000018319e0c8 ^ uVar4) + 0x14f3 ^ 0x79b501e946d2bd53;
  uRam000000018319e040 = (uRam000000018319e040 * -0x15fe633fc5121fd3 ^ uRam000000018319e0c8) + uVar4
  ;
  uRam000000018319df50 = uRam000000018319e040 ^ uRam000000018319e0c8;
  uVar8 = (ulonglong)uVar2;
  auVar6._8_8_ = _UNK_180daaa18;
  auVar6._0_8_ = uVar8 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_180daaa20,_UNK_1800170c0);
  uRam000000018319def0 = 0x14f3;
  uVar3 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar3 + uRam000000018319dd70;
  if (auVar7._4_4_ < 0) {
    uVar4 = uRam000000018319e2c8 ^ uVar3;
  }
  uRam000000018319dfc8 = func_0x000187cfd740(SUB161(auVar6 ^ _UNK_180daaa20,5) ^ uVar4);
  lVar5 = uVar8 - (uVar2 & 0x14f3) * 2;
  uRam000000018319e058 =
       (uRam000000018319e058 ^ uVar8 ^ uRam000000018319dfc8) + lVar5 + 0x14f3 ^ 0x35db602a9c880822;
  uRam000000018319e0d8 =
       (uRam000000018319e0d8 * -0x49bdec6eebbeb367 ^ uRam000000018319e058) +
       (uVar8 ^ uRam000000018319dfc8);
  uRam000000018319e298 = uRam000000018319e0d8 ^ uRam000000018319e058;
  uRam000000018319df68 = lVar5 + 0x14f3U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b2da,0x43a)
      /* POOL[0x1b2da,0x43a]: LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll | sixtwo/rq | diJ | ([BLjava/lang/Class;)Ljava/lang/Object; | (Lsixtwo/li$uv;FF)V | bYk | ()Lsixtwo/li$ux; | dvk | whvPK | dvl | bYm | bUPgU | cag | toMap | (Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector; | bYn | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187cf8c38 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da9008 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li; bYr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 187cfd7d0, runtime 6fffef90d7d0) =====

void FUN_187cfd7d0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000187cfd80c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180daab90 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/li; bYs (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 187cc4500, runtime 6fffef8d4500) =====

void FUN_187cc4500(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187cc457d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da1330 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 187c937d0, runtime 6fffef8a37d0) =====

void FUN_187c937d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b2da,0x43a)
      /* POOL[0x1b2da,0x43a]: LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll | sixtwo/rq | diJ | ([BLjava/lang/Class;)Ljava/lang/Object; | (Lsixtwo/li$uv;FF)V | bYk | ()Lsixtwo/li$ux; | dvk | whvPK | dvl | bYm | bUPgU | cag | toMap | (Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector; | bYn | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187c938c7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d93820 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/li; toJson ()Lcom/google/gson/JsonObject; (handler @ image 187ca7a60, runtime 6fffef8b7a60) =====

void FUN_187ca7a60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b2da,0x43a)
      /* POOL[0x1b2da,0x43a]: LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll | sixtwo/rq | diJ | ([BLjava/lang/Class;)Ljava/lang/Object; | (Lsixtwo/li$uv;FF)V | bYk | ()Lsixtwo/li$ux; | dvk | whvPK | dvl | bYm | bUPgU | cag | toMap | (Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector; | bYn | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187ca7b4e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180d990a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x7c938ca -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c938ca(void)

{
  FUN_190ddce00();
  (*_DAT_180d94848)();
  return;
}


// ----- block @ rva 0x7c99903 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c99903(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d80();
  (*_DAT_180d94698)();
  return;
}


// ----- block @ rva 0x7c9a2e3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c9a2e3(void)

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


// ----- block @ rva 0x7c9a44b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c9a44b(void)

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


// ----- block @ rva 0x7c9adf0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c9adf0(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(unaff_RSI + JNI->NewGlobalRef /*0xa8*/))();
  FUN_190dcd3d0(0xd74,uVar1);
  (*_DAT_180d958d8)();
  return;
}


// ----- block @ rva 0x7c9de8b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187c9de8b(void)

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


// ----- block @ rva 0x7c9ef2f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187c9ef2f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_184117d50();
  (*_DAT_180d95278)();
  return;
}


// ----- block @ rva 0x7ca2a32 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ca2a32(void)

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


// ----- block @ rva 0x7ca7789 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ca7789(void)

{
  longlong *in_stack_00000090;
  
  (**(code **)(in_stack_00000090 + JNI->CallObjectMethodA /*0x120*/))(in_stack_00000090);
  (*_DAT_180d947f8)();
  return;
}


// ----- block @ rva 0x7ca7901 -----

void FUN_187ca7901(void)

{
  return;
}


// ----- block @ rva 0x7ca796d -----

void FUN_187ca796d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7ca7b51 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ca7b51(void)

{
  FUN_190ddce00();
  (*_DAT_180d9bef8)();
  return;
}


// ----- block @ rva 0x7caffc3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187caffc3(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  (**(code **)(in_stack_00000038 + JNI->ThrowNew /*0x70*/))(in_stack_00000038,in_stack_00000040,&UNK_182f702a8);
  (*_DAT_180d9c0a8)();
  return;
}


// ----- block @ rva 0x7cb366d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cb366d(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000038;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7cb44ab -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cb44ab(void)

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


// ----- block @ rva 0x7cb7f58 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cb7f58(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180d9b358)();
  return;
}


// ----- block @ rva 0x7cbc2c9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cbc2c9(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->SetObjectArrayElement /*0x570*/))(in_stack_00000038);
  (*_DAT_180d9d0c8)();
  return;
}


// ----- block @ rva 0x7cbde54 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cbde54(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180d9d988)();
  return;
}


// ----- block @ rva 0x7cbef8c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cbef8c(void)

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


// ----- block @ rva 0x7cbf026 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cbf026(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180d9adc8)();
  return;
}


// ----- block @ rva 0x7cc3224 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc3224(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x172c6,0x3c4);
  (*_DAT_180d9be78)();
  return;
}


// ----- block @ rva 0x7cc3f58 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cc3f58(void)

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


// ----- block @ rva 0x7cc3f9d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc3f9d(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_180d9ada8)();
  return;
}


// ----- block @ rva 0x7cc4360 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc4360(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->Throw /*0x68*/))();
  (*_DAT_180d9c088)();
  return;
}


// ----- block @ rva 0x7cc4373 -----

void FUN_187cc4373(void)

{
  return;
}


// ----- block @ rva 0x7cc43df -----

void FUN_187cc43df(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7cc4580 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc4580(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180da1b38)();
  return;
}


// ----- block @ rva 0x7cc4965 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc4965(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_180da1678)();
  return;
}


// ----- block @ rva 0x7cc4bf4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cc4bf4(void)

{
  longlong in_stack_00000068;
  
  switch(in_stack_00000068 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7cc4f90 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc4f90(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180da1fe8)();
  return;
}


// ----- block @ rva 0x7cc5251 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc5251(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180da1bd8)();
  return;
}


// ----- block @ rva 0x7cc5dfb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cc5dfb(void)

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


// ----- block @ rva 0x7cc5f39 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc5f39(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180da1ac8)();
  return;
}


// ----- block @ rva 0x7cc62ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc62ba(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180da1e78)();
  return;
}


// ----- block @ rva 0x7cc6660 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc6660(void)

{
  FUN_190dd72e0();
  (*_DAT_180da19f8)();
  return;
}


// ----- block @ rva 0x7cc6899 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cc6899(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7cc6966 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc6966(void)

{
  (*_DAT_180da2188)();
  return;
}


// ----- block @ rva 0x7cc69d7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc69d7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180da1e58)();
  return;
}


// ----- block @ rva 0x7cc6cfc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc6cfc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180da1c98)();
  return;
}


// ----- block @ rva 0x7cc6e02 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc6e02(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180da1de8)();
  return;
}


// ----- block @ rva 0x7cc6e5d -----

void FUN_187cc6e5d(void)

{
  return;
}


// ----- block @ rva 0x7cc709f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc709f(void)

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


// ----- block @ rva 0x7cc71b3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cc71b3(void)

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


// ----- block @ rva 0x7cc76e9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cc76e9(void)

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


// ----- block @ rva 0x7cc8b3b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc8b3b(void)

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


// ----- block @ rva 0x7cc8faa -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc8faa(void)

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


// ----- block @ rva 0x7cc9d8e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cc9d8e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
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


// ----- block @ rva 0x7cc9f41 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cc9f41(void)

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


// ----- block @ rva 0x7ccc3df -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ccc3df(void)

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


// ----- block @ rva 0x7ccca80 -----

void FUN_187ccca80(void)

{
  return;
}


// ----- block @ rva 0x7cccd13 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cccd13(void)

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


// ----- block @ rva 0x7cccd4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cccd4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180da3898)();
  return;
}


// ----- block @ rva 0x7cccd86 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cccd86(void)

{
  FUN_190dd72e0();
  (*_DAT_180da3818)();
  return;
}


// ----- block @ rva 0x7cccdae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cccdae(void)

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


// ----- block @ rva 0x7cccdcf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cccdcf(void)

{
  FUN_190dd9df0();
  (*_DAT_180da3868)();
  return;
}


// ----- block @ rva 0x7ccce02 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ccce02(void)

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


// ----- block @ rva 0x7ccce4d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccce4d(void)

{
  (*_DAT_180da3828)();
  return;
}


// ----- block @ rva 0x7ccce5e -----

void FUN_187ccce5e(void)

{
  return;
}


// ----- block @ rva 0x7ccce66 -----

void FUN_187ccce66(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7cccf13 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cccf13(void)

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


// ----- block @ rva 0x7cccf4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cccf4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180da3928)();
  return;
}


// ----- block @ rva 0x7cccf71 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cccf71(void)

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


// ----- block @ rva 0x7cccf86 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cccf86(void)

{
  FUN_190dd72e0();
  (*_DAT_180da38f8)();
  return;
}


// ----- block @ rva 0x7cccfae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cccfae(void)

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


// ----- block @ rva 0x7ccd002 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ccd002(void)

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


// ----- block @ rva 0x7ccd04d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd04d(void)

{
  (*_DAT_180da3938)();
  return;
}


// ----- block @ rva 0x7ccd05e -----

void FUN_187ccd05e(void)

{
  return;
}


// ----- block @ rva 0x7ccd066 -----

void FUN_187ccd066(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7ccd113 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd113(void)

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


// ----- block @ rva 0x7ccd14c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd14c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180da39f8)();
  return;
}


// ----- block @ rva 0x7ccd171 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ccd171(void)

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


// ----- block @ rva 0x7ccd186 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd186(void)

{
  FUN_190dd72e0();
  (*_DAT_180da3a48)();
  return;
}


// ----- block @ rva 0x7ccd202 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ccd202(void)

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


// ----- block @ rva 0x7ccd226 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd226(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180da3a28)();
  return;
}


// ----- block @ rva 0x7ccd24d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd24d(void)

{
  (*_DAT_180da3a38)();
  return;
}


// ----- block @ rva 0x7ccd25e -----

void FUN_187ccd25e(void)

{
  return;
}


// ----- block @ rva 0x7ccd266 -----

void FUN_187ccd266(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7ccd313 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd313(void)

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


// ----- block @ rva 0x7ccd34c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd34c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180da3af8)();
  return;
}


// ----- block @ rva 0x7ccd371 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ccd371(void)

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


// ----- block @ rva 0x7ccd386 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd386(void)

{
  FUN_190dd72e0();
  (*_DAT_180da3b08)();
  return;
}


// ----- block @ rva 0x7ccd3ae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ccd3ae(void)

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


// ----- block @ rva 0x7ccd402 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ccd402(void)

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


// ----- block @ rva 0x7ccd426 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ccd426(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180da3b28)();
  return;
}


// ----- block @ rva 0x7ccd45e -----

void FUN_187ccd45e(void)

{
  return;
}


// ----- block @ rva 0x7ccd466 -----

void FUN_187ccd466(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7ccd626 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187ccd65d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187ccd626(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7ccd67b -----

void FUN_187ccd67b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x000187ccd6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180da3fc0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x7cd3b95 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cd3b95(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar12;
  undefined8 unaff_R12;
  undefined1 auVar13 [16];
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  ulonglong uVar23;
  uint uVar25;
  ulonglong uVar24;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  ulonglong uVar28;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined1 auVar29 [16];
  
  unaff_RBP[4] = unaff_XMM14_Qa;
  unaff_RBP[5] = unaff_XMM14_Qb;
  unaff_RBP[2] = unaff_XMM13_Qa;
  unaff_RBP[3] = unaff_XMM13_Qb;
  *unaff_RBP = unaff_XMM12_Qa;
  unaff_RBP[1] = unaff_XMM12_Qb;
  unaff_RBP[0xf] = unaff_R12;
  uVar12 = *(ulonglong *)(unaff_RDI - 8);
  _DAT_18319cf68 = func_0x000187cf6760(_DAT_18319cb98 + 0x4b3c770c1249da49U ^ 0x52);
  _DAT_18319cf58 =
       (_DAT_18319cf58 ^ _DAT_18319cf68 ^ 0xfeff7bcd9ea5ffbf) + 0xfeff7bcd9ea5ffbf ^
       0xc9f5cac5fe5e6dfc;
  _DAT_18319ceb0 =
       (_DAT_18319ceb0 * -0x58e924e7451427d9 ^ _DAT_18319cf58) +
       (_DAT_18319cf68 ^ 0xfeff7bcd9ea5ffbf);
  _DAT_18319cf70 = _DAT_18319ceb0 ^ _DAT_18319cf58;
  _DAT_18319cf00 = -0x1008432615a0041;
  uVar14 = (_DAT_18319ccb0 ^ _DAT_180da5090) + _DAT_18319cd58 + 0x85a3d17a61162c2f;
  uVar16 = (_DAT_18319cd58 ^ _UNK_180da5098) + _DAT_18319ccb0 + 0x267f37c08af84631;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319ccb0 ^ _DAT_180da5090;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319cd58 ^ _UNK_180da5098;
  _DAT_18319cdb0 =
       func_0x000187cf6760((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319ccb0 + 0x267f37c08af84631)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_18319cd58 + 0x85a3d17a61162c2f));
  _DAT_18319d020 =
       (_DAT_18319d020 ^ _DAT_18319cdb0 & 0x7ffffffffe000000) + 0xa3dce6ba6fcc493b ^
       0x5108e96c2acb7b9a;
  _DAT_18319d0d8 =
       (_DAT_18319d0d8 * -0x4e5bb7061ab50fa1 ^ _DAT_18319d020) +
       (_DAT_18319cdb0 & 0x7ffffffffe000000);
  _DAT_18319ccc0 = _DAT_18319d0d8 ^ _DAT_18319d020;
  _DAT_18319ce60 = 0xa3dce6ba6fcc493b;
  _DAT_18319cd70 = func_0x000187cf6760(_DAT_18319d0c0 + 0xe60f8b47c534172aU ^ 0x54);
  _DAT_18319ce88 =
       (_DAT_18319ce88 ^ _DAT_18319cd70 * -0xd9b1aa62ae08bf7) + 0x874b4c6232a2c12 ^
       0xc73311ca5d232ea8;
  _DAT_18319d060 =
       (_DAT_18319d060 * -0xc485e624472a695 ^ _DAT_18319ce88) + _DAT_18319cd70 * -0xd9b1aa62ae08bf7;
  _DAT_18319cb30 = _DAT_18319d060 ^ _DAT_18319ce88;
  _DAT_18319cdd0 = 0x874b4c6232a2c12;
  uVar14 = (_DAT_18319cfe0 ^ _DAT_180da50a0) + (_DAT_18319cbe0 - 0x84222323);
  uVar16 = (_DAT_18319cbe0 ^ _UNK_180da50a8) + _DAT_18319cfe0 + 0xf78b4b39dcd5d3ee;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cfe0 ^ _DAT_180da50a0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319cbe0 ^ _UNK_180da50a8;
  _DAT_18319cb90 =
       func_0x000187cf6760((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319cfe0 + 0xf78b4b39dcd5d3ee)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319cbe0 - 0x84222323));
  uVar14 = _DAT_18319cb90 & 0xffffffffffe00000;
  _DAT_18319ccb8 = _DAT_18319ccd0 ^ uVar14 ^ 0xf78b4b39dcd5d3e6;
  _DAT_18319d0c8 = (_DAT_18319d0c8 ^ uVar14) + 0xf78b4b39dcd5d3e6 ^ 0x3fd713ad5f07e5c6;
  _DAT_18319cdb8 = (_DAT_18319cdb8 * 0x38c91d279903bbcb ^ _DAT_18319d0c8) + uVar14;
  _DAT_18319ce38 = _DAT_18319cdb8 ^ _DAT_18319d0c8;
  _DAT_18319cda0 = 0xf78b4b39dcd5d3e6;
  uVar14 = (~_DAT_18319d000 + 0x86199b7b88687b39) *
           ((_DAT_18319cfd0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319cfd0 & 0x84222325) * 2);
  uVar14 = (uVar14 | _DAT_18319cf88) + (uVar14 & _DAT_18319cf88);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_18319cf78 =
       func_0x000187cf6760((uVar14 | 0x86199b7b0c4a581d) + (uVar14 & 0x86199b7b0c4a581d));
  _DAT_18319cf58 = (_DAT_18319cf58 ^ _DAT_18319cf78) + 0x79e66484779784c8 ^ 0xc9d46b15ce4be8c;
  _DAT_18319cfb0 = (_DAT_18319cfb0 * -0x17a44916b9a7f7bb ^ _DAT_18319cf58) + _DAT_18319cf78;
  _DAT_18319cb40 = _DAT_18319cfb0 ^ _DAT_18319cf58;
  _DAT_18319cf60 = 0x79e66484779784c8;
  uVar14 = (_DAT_18319cce0 ^ _DAT_180da50b0) + (_DAT_18319ccc0 - 0x84222323);
  uVar16 = (_DAT_18319ccc0 ^ _UNK_180da50b8) + _DAT_18319cce0 + 0x86199b7b88687b38;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cce0 ^ _DAT_180da50b0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319ccc0 ^ _UNK_180da50b8;
  _DAT_18319cec8 =
       func_0x000187cf6760((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319cce0 + 0x86199b7b88687b38)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319ccc0 - 0x84222323));
  _DAT_18319ceb0 = _DAT_18319cc20 ^ _DAT_18319cec8 ^ 0x86199b7b88687b30;
  _DAT_18319cf28 = (_DAT_18319cf28 ^ _DAT_18319cec8) + 0x86199b7b88687b30 ^ 0x647c155b80882694;
  _DAT_18319cd68 = (_DAT_18319cd68 * 0x43f32e4c2005caf3 ^ _DAT_18319cf28) + _DAT_18319cec8;
  _DAT_18319ccf0 = _DAT_18319cd68 ^ _DAT_18319cf28;
  _DAT_18319cd60 = 0x86199b7b88687b30;
  uVar14 = (~_DAT_18319cf98 + 0x79e66484779784c9) *
           ((_DAT_18319ce20 ^ 0x86199b7b0c4a5815) + (_DAT_18319ce20 & 0x6199b7b0c4a5815) * 2);
  uVar14 = (uVar14 | _DAT_18319cee0) + (uVar14 & _DAT_18319cee0);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_18319d0e0 =
       func_0x000187cf6760((uVar14 | 0xffffffff7bdddcdd) + (uVar14 & 0xffffffff7bdddcdd));
  _DAT_18319d070 = _DAT_18319cd10 ^ _DAT_18319d0e0 ^ 0xfffffffffffffff8;
  _DAT_18319cfa8 = (_DAT_18319cfa8 ^ _DAT_18319d0e0) - 8 ^ 0xa78176039a864ab2;
  _DAT_18319cbf0 = (_DAT_18319cbf0 * 0x3179da3b4c3c56d ^ _DAT_18319cfa8) + _DAT_18319d0e0;
  _DAT_18319d060 = _DAT_18319cbf0 ^ _DAT_18319cfa8;
  _DAT_18319ccc8 = 0xfffffffffffffff8;
  uVar14 = (_DAT_18319d0d0 ^ _DAT_180da50c0) + _DAT_18319cbe8 + 0x84222325;
  uVar16 = (_DAT_18319cbe8 ^ _UNK_180da50c8) + _DAT_18319d0d0 + 0x7fcee2ca3cfc085c;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319d0d0 ^ _DAT_180da50c0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319cbe8 ^ _UNK_180da50c8;
  _DAT_18319cfd8 =
       func_0x000187cf6760((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319d0d0 + 0x7fcee2ca3cfc085c)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319cbe8 + 0x84222325));
  _DAT_18319d008 = _DAT_18319d0d0 * -0x7fb421831fcb8663;
  _DAT_18319d010 = _DAT_18319d010 + 0x80311d35c303f7a4 ^ 0xe1a7a18478659dae;
  _DAT_18319d0d0 = _DAT_18319d008 ^ _DAT_18319d010;
  _DAT_18319cf58 = 0x80311d35c303f7a4;
  uVar14 = (_DAT_18319cbd8 ^ _DAT_180da50d0) + (_DAT_18319cc50 - 0x84222323);
  uVar16 = (_DAT_18319cc50 ^ _UNK_180da50d8) + _DAT_18319cbd8 + 0x7fcee2ca3cfc085c;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cbd8 ^ _DAT_180da50d0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319cc50 ^ _UNK_180da50d8;
  _DAT_18319ccf0 =
       func_0x000187cf6760((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319cbd8 + 0x7fcee2ca3cfc085c)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319cc50 - 0x84222323));
  uVar14 = (_DAT_18319ccf0 ^ 0xfe771651e7e042d8) & 0x7fffffffffffffff ^ 0xfffffffffffffff8;
  _DAT_18319cdb8 = _DAT_18319cf08 ^ uVar14 ^ 0x7fcee2ca3cfc0854;
  _DAT_18319cbd8 = (_DAT_18319cbd8 ^ uVar14) + 0x7fcee2ca3cfc0854 ^ 0xc545904452d680c1;
  _DAT_18319d060 = (_DAT_18319d060 * 0x40a48e8df6b74e91 ^ _DAT_18319cbd8) + uVar14;
  _DAT_18319cf50 = _DAT_18319d060 ^ _DAT_18319cbd8;
  _DAT_18319cc30 = 0x7fcee2ca3cfc0854;
  uVar14 = (~_DAT_18319cf30 + 0x80311d35c303f7a5) *
           ((_DAT_18319cce0 ^ 0x7fcee2cab8de2b71) + (_DAT_18319cce0 & 0x7fcee2cab8de2b71) * 2);
  uVar14 = (uVar14 | _DAT_18319ced0) + (uVar14 & _DAT_18319ced0);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_18319d098 =
       func_0x000187cf6760((uVar14 | 0xffffffff7bdddcd5) + (uVar14 & 0xffffffff7bdddcd5));
  uVar14 = _DAT_18319d098 << 6 | _DAT_18319d098 >> 0x3a;
  _DAT_18319cbf0 = _DAT_18319cb40 ^ uVar14 ^ 0xfffffffffffffff8;
  _DAT_18319cf78 = (_DAT_18319cf78 ^ uVar14) - 8 ^ 0x45676851d53e82c7;
  _DAT_18319cf38 = (_DAT_18319cf38 * -0x5d94c21968dfe1d7 ^ _DAT_18319cf78) + uVar14;
  _DAT_18319cda0 = _DAT_18319cf38 ^ _DAT_18319cf78;
  _DAT_18319cfe8 = 0xfffffffffffffff8;
  uVar14 = (_DAT_18319cf60 ^ _DAT_180da50e0) + _DAT_18319d080 + 0xfeff7bcd1a87dc9a;
  uVar16 = (_DAT_18319d080 ^ _UNK_180da50e8) + _DAT_18319cf60 + 0xa3dce6ba6fcc493b;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cf60 ^ _DAT_180da50e0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319d080 ^ _UNK_180da50e8;
  _DAT_18319cd68 =
       func_0x000187cf6760((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319cf60 + 0xa3dce6ba6fcc493b)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_18319d080 + 0xfeff7bcd1a87dc9a));
  _DAT_18319d028 = _DAT_18319cfc0 ^ _DAT_18319cd68 ^ 0xa2dc62880e7248fa;
  _DAT_18319cbf8 = (_DAT_18319cbf8 ^ _DAT_18319cd68) + 0xa2dc62880e7248fa ^ 0xee263b0c65af35cc;
  _DAT_18319cfe0 = (_DAT_18319cfe0 * -0x5617b7a9a87f9383 ^ _DAT_18319cbf8) + _DAT_18319cd68;
  _DAT_18319cde0 = _DAT_18319cfe0 ^ _DAT_18319cbf8;
  _DAT_18319cfb8 = 0xa2dc62880e7248fa;
  _DAT_18319cd80 = func_0x000187cf6760(_DAT_18319cbb8 + 0xffdf00841b0021ffU ^ 0x62);
  _DAT_18319cb28 = (_DAT_18319cd80 & 0xfffffffffffffff8) << 0x31 | _DAT_18319cd80 >> 0xf;
  _DAT_18319cb80 = _DAT_18319cb80 ^ _DAT_18319cb28 ^ 0x1163b518df63d163;
  _DAT_18319cd00 = (_DAT_18319cd00 * -0xc223a3bf51b518b ^ _DAT_18319cb80) + _DAT_18319cb28;
  _DAT_18319cc78 = _DAT_18319cd00 ^ _DAT_18319cb80;
  _DAT_18319cd90 = 0;
  uVar14 = ((_DAT_18319d0b8 ^ 0xffffffff7bdddcdd) + (_DAT_18319d0b8 & 0x7fffffff7bdddcdd) * 2) *
           -_DAT_18319ccf8;
  uVar14 = (uVar14 | _DAT_18319cf38) + (uVar14 & _DAT_18319cf38);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_18319cff8 =
       func_0x000187cf6760((uVar14 | 0xffffffff7bdddcdd) + (uVar14 & 0xffffffff7bdddcdd));
  _DAT_18319ceb0 = _DAT_18319d038 ^ _DAT_18319cff8 ^ 0xfffffffffffffff8;
  _DAT_18319cc00 = (_DAT_18319cc00 ^ _DAT_18319cff8) - 8 ^ 0xf44f14e1654a7f20;
  _DAT_18319cbe8 = (_DAT_18319cbe8 * 0xf37411b45eb7585 ^ _DAT_18319cc00) + _DAT_18319cff8;
  _DAT_18319cfc8 = _DAT_18319cbe8 ^ _DAT_18319cc00;
  _DAT_18319d010 = 0xfffffffffffffff8;
  uVar14 = ~_DAT_18319cf78 *
           ((_DAT_18319d050 ^ 0xfeff7bcd1a87dc9a) + (_DAT_18319d050 & 0x7eff7bcd1a87dc9a) * 2);
  uVar14 = (uVar14 | _DAT_18319cb08) + (uVar14 & _DAT_18319cb08);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_18319cf70 = func_0x000187cf6760((uVar14 | 0x1008432e5782365) + (uVar14 & 0x1008432e5782365));
  uVar14 = _DAT_18319cf70 << 0x25 | _DAT_18319cf70 >> 0x1b;
  _DAT_18319d088 = (_DAT_18319d088 ^ uVar14) + 0x1008432615a0040 ^ 0x111b2cc5c68062;
  _DAT_18319cd38 = (_DAT_18319cd38 * 0x8f46162079fe72f ^ _DAT_18319d088) + uVar14;
  _DAT_18319cf20 = _DAT_18319cd38 ^ _DAT_18319d088;
  _DAT_18319cfa0 = 0x1008432615a0040;
  uVar14 = (~_DAT_18319cb40 + 0x1008432615a0041) *
           ((_DAT_18319cd58 ^ 0xfeff7bcd1a87dc9a) + (_DAT_18319cd58 & 0x7eff7bcd1a87dc9a) * 2);
  uVar14 = (uVar14 | _DAT_18319cb48) + (uVar14 & _DAT_18319cb48);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_18319cba8 =
       func_0x000187cf6760((uVar14 | 0xffffffff7bdddcda) + (uVar14 & 0xffffffff7bdddcda));
  _DAT_18319cb88 = _DAT_18319cb88 ^ _DAT_18319cba8 ^ 0xfeff7bcd9ea5ffbf ^ 0xc6ccc0bc14240290;
  _DAT_18319ce00 =
       (_DAT_18319ce00 * 0x643b4e63e61c4d67 ^ _DAT_18319cb88) +
       (_DAT_18319cba8 ^ 0xfeff7bcd9ea5ffbf);
  _DAT_18319cb10 = _DAT_18319ce00 ^ _DAT_18319cb88;
  _DAT_18319cbe8 = 0;
  _DAT_18319cd58 = func_0x000187cf6760(_DAT_18319cc98 ^ 0x5d3bf0bba3e5bde2);
  uVar14 = _DAT_18319cd58 & 0x7fffffffffffffff;
  _DAT_18319ce70 = _DAT_18319cf58 ^ uVar14 ^ 0xfffffffffffffff8;
  _DAT_18319cfe0 = (_DAT_18319cfe0 ^ uVar14) - 8 ^ 0x2c42739b048df6dc;
  _DAT_18319ce98 = (_DAT_18319ce98 * 0xc64a9adc9f88275 ^ _DAT_18319cfe0) + uVar14;
  _DAT_18319d058 = _DAT_18319ce98 ^ _DAT_18319cfe0;
  _DAT_18319ced8 = -8;
  uVar14 = (_DAT_18319cd08 ^ _DAT_180da50f0) + _DAT_18319cc40 + 0x4ed72bcd1a879c9e;
  uVar16 = (_DAT_18319cc40 ^ _UNK_180da50f8) + _DAT_18319cd08 + 0x4ed72bcd9ea5bfbb;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cd08 ^ _DAT_180da50f0;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_18319cc40 ^ _UNK_180da50f8;
  _DAT_18319cf08 =
       func_0x000187cf6760((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_18319cd08 + 0x4ed72bcd9ea5bfbb)
                           ^ (uVar14 << 0x1d | uVar14 >> 0x23) -
                             (_DAT_18319cc40 + 0x4ed72bcd1a879c9e));
  uVar14 = (_DAT_18319cf08 ^ 0x4ed72bcd9ea5bfbb) * 0x1d56c65596939f8b;
  _DAT_18319d0e0 = _DAT_18319d0e0 ^ uVar14 ^ 0x211f795901fd4dea;
  _DAT_18319ced8 = (_DAT_18319ced8 * 0x230710e7f79a7339 ^ _DAT_18319d0e0) + uVar14;
  _DAT_18319cb30 = _DAT_18319ced8 ^ _DAT_18319d0e0;
  _DAT_18319d080 = 0;
  uVar14 = ((_DAT_18319cc38 ^ 0xffffffff7bdddcdd) + (_DAT_18319cc38 & 0x7fffffff7bdddcdd) * 2) *
           -_DAT_18319cf10;
  uVar14 = (uVar14 | _DAT_18319cb90) + (uVar14 & _DAT_18319cb90);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_18319cd90 =
       func_0x000187cf6760((uVar14 | 0xffffffff7bdddcdd) + (uVar14 & 0xffffffff7bdddcdd));
  _DAT_18319d020 = _DAT_18319cf28 ^ _DAT_18319cbe8 ^ 0xfffffffffffffff8;
  _DAT_18319cf88 = (_DAT_18319cf88 ^ _DAT_18319cbe8) - 8 ^ 0xe4e764e99906304c;
  _DAT_18319d0a0 = (_DAT_18319d0a0 * -0x46d45624b17f400b ^ _DAT_18319cf88) + _DAT_18319cbe8;
  _DAT_18319cce8 = _DAT_18319d0a0 ^ _DAT_18319cf88;
  _DAT_18319cb68 = 0xfffffffffffffff8;
  uVar14 = (~_DAT_18319d038 - 7) *
           ((unaff_RDI ^ 0x84222325 ^ _DAT_18319d0b0) +
           ((unaff_RDI ^ 0x84222325) & _DAT_18319d0b0) * 2);
  uVar14 = (uVar14 | _DAT_18319cc40) + (uVar14 & _DAT_18319cc40);
  uVar14 = uVar14 * 0x2000 ^ uVar14;
  uVar14 = uVar14 >> 7 ^ uVar14;
  uVar14 = uVar14 << 0x11 ^ uVar14;
  _DAT_18319cd20 =
       func_0x000187cf6760((unaff_RDI ^ 0xffffffff7bdddcdd | uVar14) +
                           (uVar14 & (unaff_RDI ^ 0xffffffff7bdddcdd)));
  uVar9 = _DAT_180da5100;
  uVar15 = (uint)(unaff_RDI >> 0x20);
  auVar13._8_4_ = (uint)unaff_RDI;
  auVar13._0_8_ = unaff_RDI;
  auVar13._12_4_ = uVar15;
  uVar14 = (ulonglong)_DAT_180da5110;
  auVar20 = _DAT_1800627b0 ^ auVar13;
  auVar29 = auVar13 & _DAT_1800627b0;
  uVar26 = (uint)unaff_RDI | (uint)DAT_1800627b0;
  uVar16 = (ulonglong)_DAT_180da5100;
  unaff_RBP[0x10] = (ulonglong)uVar15;
  unaff_RBP[0x11] = auVar13._8_8_ >> 0x20;
  uVar19 = auVar29._0_4_;
  uVar28 = auVar29._0_8_;
  uVar17 = SUB164(auVar13 ^ _DAT_18001a710,0);
  uVar23 = SUB168(auVar13 ^ _DAT_18001a710,0);
  uVar10 = _DAT_18319cd20 & 0x1fffffffffff ^ unaff_RDI ^ 0xfffffffffffffff8;
  uVar18 = auVar20._0_4_;
  uVar23 = ((ulonglong)_DAT_180da5120 * (ulonglong)uVar26 + _DAT_180da5140 << 0x20) +
           (ulonglong)_DAT_180da5130 * (ulonglong)uVar26 +
           (ulonglong)uVar19 * (ulonglong)_DAT_180da5130 +
           ((uVar28 >> 0x20) * (ulonglong)_DAT_180da5130 +
            (ulonglong)uVar19 * (ulonglong)_DAT_180da5120 << 0x20) +
           (unaff_RDI & 0xffffffff) * uVar16 +
           (uVar14 * (unaff_RDI & 0xffffffff) + (ulonglong)uVar9 * (ulonglong)uVar15 << 0x20) +
           (ulonglong)_DAT_180da5150 * (ulonglong)uVar17 +
           ((ulonglong)_DAT_180da5160 * (ulonglong)uVar17 +
            (uVar23 >> 0x20) * (ulonglong)_DAT_180da5150 << 0x20) +
           (-((ulonglong)uVar17 * (ulonglong)_DAT_180da51a0 +
              ((uVar23 >> 0x20) * (ulonglong)_DAT_180da51a0 +
               (ulonglong)_DAT_180da5190 * (ulonglong)uVar17 << 0x20) +
             (ulonglong)uVar18 * (_DAT_180da51c0 & 0xffffffff) +
             ((auVar20._0_8_ >> 0x20) * (_DAT_180da51c0 & 0xffffffff) +
              (ulonglong)_DAT_180da51b0 * (ulonglong)uVar18 << 0x20) +
             (ulonglong)uVar19 * (_DAT_180da51c0 & 0xffffffff) +
             ((uVar28 >> 0x20) * (_DAT_180da51c0 & 0xffffffff) +
              (ulonglong)uVar19 * (ulonglong)_DAT_180da51b0 << 0x20) +
             (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_180da51a0 +
             ((ulonglong)*(uint *)(unaff_RBP + 0x10) * (ulonglong)_DAT_180da51a0 +
              (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_180da5190 << 0x20)) -
           (((ulonglong)uVar26 * (ulonglong)_DAT_180da51e0 + _DAT_180da51f0 << 0x20) +
           (ulonglong)_DAT_180da51d0 * (ulonglong)uVar26)) + _DAT_180da5200;
  _DAT_18319cc30 = _DAT_18319cb30 ^ uVar10 ^ uVar23;
  _DAT_18319cbd8 = (_DAT_18319cbd8 ^ uVar10) + uVar23 ^ 0x914b7d0b1bf15a3c;
  _DAT_18319d068 = (_DAT_18319d068 * -0x26fa0c9ef5606555 ^ _DAT_18319cbd8) + uVar10;
  _DAT_18319d000 = _DAT_18319d068 ^ _DAT_18319cbd8;
  auVar20._0_8_ = _DAT_1800632f0 ^ uVar23;
  auVar20._8_8_ = uVar12;
  auVar13 = pshufb(auVar20 ^ _DAT_180da5210,_DAT_1800170c0);
  uVar16 = auVar13._8_8_ + auVar13._0_8_;
  uVar14 = uVar16 + _DAT_18319d088;
  if (auVar13._4_4_ < 0) {
    uVar14 = _DAT_18319cc60 ^ uVar16;
  }
  _DAT_18319ccb0 = uVar23;
  uVar14 = func_0x000187cf6760(SUB161(auVar20 ^ _DAT_180da5210,5) ^ uVar14);
  unaff_RBP[9] = uVar12;
  uVar11 = ~((uVar23 | uVar12) ^ uVar14 ^ uVar23) & uVar23;
  uVar25 = (uint)(uVar23 >> 0x20);
  auVar21._8_4_ = (int)uVar23;
  auVar21._0_8_ = uVar23;
  auVar21._12_4_ = uVar25;
  uVar22 = (uint)(uVar12 >> 0x20);
  auVar29._8_4_ = (int)uVar12;
  auVar29._0_8_ = uVar12;
  auVar29._12_4_ = uVar22;
  uVar4 = (ulonglong)_DAT_180da5220;
  uVar14 = (ulonglong)_DAT_180da5230;
  uVar16 = (ulonglong)_DAT_180da5220;
  auVar20 = auVar21 ^ auVar29;
  auVar13 = auVar21 ^ _DAT_18001a710;
  auVar27._8_4_ = 0xffffffff;
  auVar27._0_8_ = 0xffffffffffffffff;
  auVar27._12_4_ = 0xffffffff;
  auVar27 = auVar27 ^ auVar29;
  unaff_RBP[0x10] = (ulonglong)uVar25;
  unaff_RBP[0x11] = auVar21._8_8_ >> 0x20;
  uVar15 = _DAT_180da5290;
  uVar9 = _DAT_180da5280;
  uVar10 = (ulonglong)_DAT_180da5250;
  uVar5 = (ulonglong)_DAT_180da5240;
  uVar28 = (ulonglong)_DAT_180da5240;
  uVar1 = (ulonglong)_DAT_180da5270;
  uVar19 = SUB164(auVar21 & auVar29,0);
  uVar2 = (ulonglong)_DAT_180da5260;
  uVar24 = SUB168(auVar21 & auVar29,0);
  uVar6 = (ulonglong)_DAT_180da5260;
  *(undefined1 (*) [16])(unaff_RBP + 6) = auVar20;
  uVar18 = _DAT_180da52d0;
  uVar17 = _DAT_180da52c0;
  uVar3 = (ulonglong)_DAT_180da52b0;
  uVar26 = auVar13._0_4_;
  uVar7 = (ulonglong)_DAT_180da52a0;
  uVar8 = (ulonglong)_DAT_180da52a0;
  *(undefined1 (*) [16])(unaff_RBP + 10) = auVar27;
  uVar16 = (((ulonglong)uVar17 * (ulonglong)auVar27._0_4_ +
             ((ulonglong)uVar18 * (ulonglong)auVar27._0_4_ +
              (auVar27._0_8_ >> 0x20) * (ulonglong)uVar17 << 0x20) +
            uVar26 * uVar8 + (uVar3 * uVar26 + (auVar13._0_8_ >> 0x20) * uVar7 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)auVar20._0_4_ +
            ((ulonglong)uVar15 * (ulonglong)auVar20._0_4_ +
             (auVar20._0_8_ >> 0x20) * (ulonglong)uVar9 << 0x20) +
            uVar2 * uVar19 + (uVar1 * uVar19 + (uVar24 >> 0x20) * uVar6 << 0x20) +
            (uVar10 * (uVar12 & 0xffffffff) + uVar28 * uVar22 << 0x20) +
            (uVar12 & 0xffffffff) * uVar5 + uVar16 * (uVar23 & 0xffffffff) +
            (uVar14 * (uVar23 & 0xffffffff) + uVar25 * uVar4 << 0x20)) -
           ((ulonglong)*(uint *)(unaff_RBP + 10) * (ulonglong)_DAT_180da5340 +
            ((ulonglong)_DAT_180da5390 * (ulonglong)*(uint *)(unaff_RBP + 10) +
             (auVar27._0_8_ >> 0x20) * (ulonglong)_DAT_180da5340 << 0x20) +
            (ulonglong)*(uint *)(unaff_RBP + 6) * (ulonglong)_DAT_180da5370 +
            ((ulonglong)_DAT_180da5380 * (ulonglong)*(uint *)(unaff_RBP + 6) +
             (auVar20._0_8_ >> 0x20) * (ulonglong)_DAT_180da5370 << 0x20) +
           (ulonglong)uVar19 * (ulonglong)_DAT_180da5350 +
           ((ulonglong)_DAT_180da5360 * (ulonglong)uVar19 +
            (uVar24 >> 0x20) * (ulonglong)_DAT_180da5350 << 0x20) +
           ((uVar12 & 0xffffffff) * (ulonglong)_DAT_180da5330 +
            (ulonglong)uVar22 * (ulonglong)_DAT_180da5320 << 0x20) +
           (uVar12 & 0xffffffff) * (ulonglong)_DAT_180da5320 +
           (uVar23 & 0xffffffff) * (ulonglong)_DAT_180da5300 +
           ((ulonglong)_DAT_180da5310 * (uVar23 & 0xffffffff) +
            (ulonglong)*(uint *)(unaff_RBP + 0x10) * (ulonglong)_DAT_180da5300 << 0x20))) +
           0xc8861422bf65b8e9;
  _DAT_18319ce00 = uVar16 ^ uVar11;
  _DAT_18319cf28 = (_DAT_18319cf28 ^ uVar11) + uVar16 ^ 0x549f1f45d88c71f3;
  _DAT_18319ced8 = (_DAT_18319ced8 * 0x6e70b93ca280435 ^ _DAT_18319cf28) + uVar11;
  _DAT_18319d0f8 = _DAT_18319ced8 ^ _DAT_18319cf28;
  uVar12 = (~_DAT_18319ce68 + 0xd9a8acd8195fea24) *
           ((_DAT_18319cfa0 ^ 0xab5348df380bc6f9) + (_DAT_18319cfa0 & 0x2b5348df380bc6f9) * 2);
  uVar12 = (uVar12 | _DAT_18319cde0) + (uVar12 & _DAT_18319cde0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319cbe0 = uVar16;
  _DAT_18319cd58 =
       func_0x000187cf6760((uVar12 | 0x72fbe40721542cda) + (uVar12 & 0x72fbe40721542cda));
  _DAT_18319cb50 =
       (_DAT_18319cb50 ^ _DAT_18319cd58 & 0xfffffffffffffc00) + 0xfbfbecdfbd7fefff ^
       0x816d7b018dbe2e94;
  _DAT_18319cb10 =
       (_DAT_18319cb10 * -0x13ee299d69900605 ^ _DAT_18319cb50) +
       (_DAT_18319cd58 & 0xfffffffffffffc00);
  _DAT_18319ce58 = _DAT_18319cb10 ^ _DAT_18319cb50;
  _DAT_18319cd80 = -0x404132042801001;
  _DAT_18319cf98 = func_0x000187cf6760(_DAT_18319cb68 ^ 0xc833ff38a4bf312f);
  uVar14 = _DAT_18319cf98 ^ 0x8001c0d94df0ef40;
  uVar12 = uVar14 >> 1 | uVar14;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x20 ^ uVar14;
  _DAT_18319cbf8 = (_DAT_18319cbf8 ^ uVar14) + 0x7ffe3f26b20f10c0 ^ 0xba4ad01160ea48e9;
  _DAT_18319cfd0 = (_DAT_18319cfd0 * 0x73d595df61264dcb ^ _DAT_18319cbf8) + uVar14;
  _DAT_18319cda8 = _DAT_18319cfd0 ^ _DAT_18319cbf8;
  _DAT_18319ce20 = 0x7ffe3f26b20f10c0;
  uVar12 = (~_DAT_18319cb38 + 0x8001c0d94df0ef41) *
           ((_DAT_18319ccd8 ^ 0x84222305) + (ulonglong)((uint)_DAT_18319ccd8 & 0x84222305) * 2);
  uVar12 = (uVar12 | _DAT_18319cbf8) + (uVar12 & _DAT_18319cbf8);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319cfa0 =
       func_0x000187cf6760((uVar12 | 0x8001c0d9c9d2cc45) + (uVar12 & 0x8001c0d9c9d2cc45));
  uVar12 = _DAT_18319cfa0 ^ 0x381b29be1de800;
  _DAT_18319cf10 = _DAT_18319cff8 ^ uVar12 ^ 0x8001c0d94df0ef60;
  _DAT_18319cc30 = (_DAT_18319cc30 ^ uVar12) + 0x8001c0d94df0ef60 ^ 0xb12749e1382889ed;
  _DAT_18319cd80 = (_DAT_18319cd80 * 0x7a1ac0167ae3f91d ^ _DAT_18319cc30) + uVar12;
  _DAT_18319cb18 = _DAT_18319cd80 ^ _DAT_18319cc30;
  _DAT_18319d0e0 = 0x8001c0d94df0ef60;
  uVar12 = (~_DAT_18319cf70 + 0x7ffe3f26b20f10c1) *
           ((_DAT_18319cf28 ^ 0x8001c0d9c9d2cc45) + (_DAT_18319cf28 & 0x1c0d9c9d2cc45) * 2);
  uVar12 = (uVar12 | _DAT_18319cff8) + (uVar12 & _DAT_18319cff8);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319d090 =
       func_0x000187cf6760((uVar12 | 0xffffffff7bdddc85) + (uVar12 & 0xffffffff7bdddc85));
  uVar12 = _DAT_18319d090 ^ 0x7ffe3f26b20f10c0;
  _DAT_18319cb30 = _DAT_18319cd60 ^ uVar12 ^ 0x20;
  _DAT_18319d0b0 = (_DAT_18319d0b0 ^ uVar12) + 0x20 ^ 0xf6592950c118b74c;
  _DAT_18319cba0 = (_DAT_18319cba0 * -0x39b663d2a6f72625 ^ _DAT_18319d0b0) + uVar12;
  _DAT_18319cb78 = _DAT_18319cca8 ^ 0x20;
  _DAT_18319cb10 = 0x20;
  uVar12 = (~_DAT_18319cdb0 + 0x7289d693d5f1b861) *
           ((_DAT_18319cce0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319cce0 & 0x84222325) * 2);
  uVar12 = (uVar12 | _DAT_18319ce00) + (uVar12 & _DAT_18319ce00);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319cfa0 =
       func_0x000187cf6760((uVar12 | 0x7289d69351d39b45) + (uVar12 & 0x7289d69351d39b45));
  uVar12 = _DAT_18319cfa0 >> 1 | _DAT_18319cfa0;
  uVar12 = uVar12 >> 2 | uVar12;
  uVar12 = uVar12 >> 4 | uVar12;
  uVar12 = uVar12 >> 8 | uVar12;
  uVar12 = uVar12 >> 0x10 | uVar12;
  uVar12 = uVar12 >> 0x20 | uVar12;
  uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x40 ^ _DAT_18319cfa0;
  _DAT_18319ce88 = (_DAT_18319ce88 ^ uVar12) + 0x8d76296c2a0e47a0 ^ 0x78814ebb47427d9f;
  _DAT_18319d018 = (_DAT_18319d018 * -0x564af6fce438bb25 ^ _DAT_18319ce88) + uVar12;
  _DAT_18319cc78 = _DAT_18319d018 ^ _DAT_18319ce88;
  _DAT_18319cd80 = 0x8d76296c2a0e47a0;
  uVar12 = (~_DAT_18319cfd0 + 0x7289d693d5f1b861) *
           ((_DAT_18319ccd8 ^ 0x84222305) + (ulonglong)((uint)_DAT_18319ccd8 & 0x84222305) * 2);
  uVar12 = (uVar12 | _DAT_18319cd28) + (uVar12 & _DAT_18319cd28);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319cf58 =
       func_0x000187cf6760((uVar12 | 0x7289d69351d39b65) + (uVar12 & 0x7289d69351d39b65));
  _DAT_18319ce38 = _DAT_18319cd10 ^ _DAT_18319cf58 ^ 0x7289d693d5f1b880;
  _DAT_18319ce18 = (_DAT_18319ce18 ^ _DAT_18319cf58) + 0x7289d693d5f1b880 ^ 0x62c20af5abc0ea97;
  _DAT_18319d058 = (_DAT_18319d058 * -0x72b806110d47bb35 ^ _DAT_18319ce18) + _DAT_18319cf58;
  _DAT_18319cfa8 = _DAT_18319d058 ^ _DAT_18319ce18;
  _DAT_18319cc38 = 0x7289d693d5f1b880;
  uVar12 = (~_DAT_18319cbe8 + 0x8d76296c2a0e47a1) *
           ((_DAT_18319cce0 ^ 0x7289d69351d39ba5) + (_DAT_18319cce0 & 0x7289d69351d39ba5) * 2);
  uVar12 = (uVar12 | _DAT_18319d0b8) + (uVar12 & _DAT_18319d0b8);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319d030 =
       func_0x000187cf6760((uVar12 | 0xffffffff7bdddc05) + (uVar12 & 0xffffffff7bdddc05));
  uVar12 = (_DAT_18319d030 << 0x15 | (_DAT_18319d030 & 0x7fffffffffffffff) >> 0x2b) *
           0x3e60d724f04c9af3;
  _DAT_18319ccd8 = _DAT_18319cb58 ^ uVar12 ^ 0x20;
  _DAT_18319d0d8 = (_DAT_18319d0d8 ^ uVar12) + 0x20 ^ 0x3278c89fdf67264f;
  _DAT_18319ce88 = (_DAT_18319ce88 * -0x4895ddb2be9437fb ^ _DAT_18319d0d8) + uVar12;
  _DAT_18319cdb0 = _DAT_18319ce88 ^ _DAT_18319d0d8;
  _DAT_18319cb20 = 0x20;
  uVar12 = (~_DAT_18319cbb0 + 0x9cd8842b36fffd1) *
           ((_DAT_18319cc00 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319cc00 & 0x84222325) * 2);
  uVar12 = (uVar12 | _DAT_18319cbc0) + (uVar12 & _DAT_18319cbc0);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  uVar12 = func_0x000187cf6760((uVar12 | 0x9cd8842374ddcf5) + (uVar12 & 0x9cd8842374ddcf5));
  _DAT_18319cd70 = uVar12 << 6 | uVar12 >> 0x3a;
  _DAT_18319cc60 = (_DAT_18319cc60 ^ _DAT_18319cd70) + 0xf63277bd4c900030 ^ 0x534d2d3b3eb8d4b;
  _DAT_18319cd70 = (uVar12 * 0x1a044dd332813191 ^ _DAT_18319cc60) + _DAT_18319cd70;
  _DAT_18319cdd8 = _DAT_18319cd70 ^ _DAT_18319cc60;
  _DAT_18319cbf0 = 0xf63277bd4c900030;
  uVar12 = (_DAT_18319cfb8 ^ _DAT_180da53a0) + _DAT_18319d038 + 0x84222305;
  uVar14 = (_DAT_18319d038 ^ _UNK_180da53a8) + _DAT_18319cfb8 + 0x9cd8842b36fffd0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319cfb8 ^ _DAT_180da53a0;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319d038 ^ _UNK_180da53a8;
  uVar9 = func_0x000187cf6760((uVar14 << 0x1d | uVar14 >> 0x23) -
                              (_DAT_18319cfb8 + 0x9cd8842b36fffd0) ^
                              (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319d038 + 0x84222305));
  uVar12 = (ulonglong)(~uVar9 & 0x20);
  _DAT_18319d088 = _DAT_18319cdf0 ^ uVar12 ^ 0x9cd8842b36ffff0;
  _DAT_18319cc88 = (_DAT_18319cc88 ^ uVar12) + 0x9cd8842b36ffff0 ^ 0xc8a65ed6f7f52d46;
  _DAT_18319ce00 = (_DAT_18319ce00 * 0x74db4c69d965b987 ^ _DAT_18319cc88) + uVar12;
  _DAT_18319cb50 = _DAT_18319ce00 ^ _DAT_18319cc88;
  _DAT_18319ce68 = 0x9cd8842b36ffff0;
  uVar12 = (~_DAT_18319d0a0 + 0xf63277bd4c900031) *
           ((_DAT_18319cf30 ^ 0x9cd8842374ddcd5) + (_DAT_18319cf30 & 0x9cd8842374ddcd5) * 2);
  uVar12 = (uVar12 | _DAT_18319d000) + (uVar12 & _DAT_18319d000);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  uVar12 = func_0x000187cf6760((uVar12 | 0xffffffff7bdddce5) + (uVar12 & 0xffffffff7bdddce5));
  uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = ((((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar12
           ) << 0x1a | uVar12 >> 0x26;
  _DAT_18319cfe0 = _DAT_18319ce08 ^ uVar14 ^ 0x20;
  _DAT_18319cff0 = (uVar12 ^ uVar14) + 0x20 ^ 0xb0afe62676ea0932;
  _DAT_18319cd48 = (_DAT_18319cd48 * -0x33671e4c80a0def5 ^ _DAT_18319cff0) + uVar14 ^ _DAT_18319cff0
  ;
  _DAT_18319d070 = 0x20;
  _DAT_18319cb10 = func_0x000187cf6760(_DAT_18319cfb0 + 0x12ca68749cc4ddc1 ^ 0x4c);
  uVar14 = _DAT_18319cb10 & 0x3fffffffff;
  uVar12 = uVar14 - (uVar14 >> 1 & 0x1555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar14 = (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar14;
  _DAT_18319d058 = _DAT_18319cec8 ^ uVar14 ^ 0x10c148d6abef278;
  _DAT_18319cff0 = (_DAT_18319cff0 ^ uVar14) + 0x10c148d6abef278 ^ 0x800c25105b987306;
  _DAT_18319ce80 = (_DAT_18319ce80 * 0xe8c51d7e8f180dd ^ _DAT_18319cff0) + uVar14;
  _DAT_18319d0a8 = _DAT_18319ce80 ^ _DAT_18319cff0;
  _DAT_18319d0b8 = 0x10c148d6abef278;
  uVar12 = (_DAT_18319d0a8 ^ _DAT_180da53b0) + _DAT_18319cd38 + 0xfbfbecdf395dccda;
  uVar14 = (_DAT_18319cd38 ^ _UNK_180da53b8) + _DAT_18319d0a8 + 0x51027adad3f0279;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319d0a8 ^ _DAT_180da53b0;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cd38 ^ _UNK_180da53b8;
  _DAT_18319ccc8 =
       func_0x000187cf6760((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319d0a8 + 0x51027adad3f0279)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) -
                             (_DAT_18319cd38 + 0xfbfbecdf395dccda));
  _DAT_18319d048 =
       (_DAT_18319d048 ^ _DAT_18319ccc8 & 0x3fff00000) + 0x110248dad3f0279 ^ 0x3ad58e376ce7cc6;
  _DAT_18319d0f8 =
       (_DAT_18319d0f8 * -0x3c0e4c730bb0e03d ^ _DAT_18319d048) + (_DAT_18319ccc8 & 0x3fff00000);
  _DAT_18319cb28 = _DAT_18319d0f8 ^ _DAT_18319d048;
  _DAT_18319cee8 = 0x110248dad3f0279;
  uVar12 = (_DAT_18319d0a0 ^ _DAT_180da53c0) + _DAT_18319cb60 + 0xfeebcb729462cea3;
  uVar14 = (_DAT_18319cb60 ^ _UNK_180da53c8) + _DAT_18319d0a0 + 0x220491b5a7e04f2;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319d0a0 ^ _DAT_180da53c0;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cb60 ^ _UNK_180da53c8;
  _DAT_18319cc78 =
       func_0x000187cf6760((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319d0a0 + 0x220491b5a7e04f2)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) -
                             (_DAT_18319cb60 + 0xfeebcb729462cea3));
  _DAT_18319cfc0 = _DAT_18319cf80 ^ _DAT_18319cc78 ^ 0x10c148d6abef278;
  _DAT_18319d090 = (_DAT_18319d090 ^ _DAT_18319cc78) + 0x10c148d6abef278 ^ 0x2d40b3d93a90709f;
  _DAT_18319ccf8 = (_DAT_18319ccf8 * -0x6b420ee1fc930cb3 ^ _DAT_18319d090) + _DAT_18319cc78;
  _DAT_18319cdf0 = _DAT_18319ccf8 ^ _DAT_18319d090;
  _DAT_18319ccc8 = 0x10c148d6abef278;
  uVar12 = (_DAT_18319ccd0 ^ _DAT_180da53d0) + _DAT_18319cd18 + 0x10c148dee9cd15d;
  uVar14 = (_DAT_18319cd18 ^ _UNK_180da53d8) + _DAT_18319ccd0 + 0x10c148d6abef278;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319ccd0 ^ _DAT_180da53d0;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cd18 ^ _UNK_180da53d8;
  _DAT_18319cfd0 =
       func_0x000187cf6760((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319ccd0 + 0x10c148d6abef278)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) -
                             (_DAT_18319cd18 + 0x10c148dee9cd15d));
  _DAT_18319ccd0 = _DAT_18319ccd0 ^ _DAT_18319cfd0 ^ 0x1f9bac926300b23d;
  _DAT_18319cd68 = (_DAT_18319cd68 * -0x476a40155f8042f5 ^ _DAT_18319ccd0) + _DAT_18319cfd0;
  _DAT_18319cdb8 = _DAT_18319cd68 ^ _DAT_18319ccd0;
  _DAT_18319cc30 = 0;
  uVar12 = ((_DAT_18319cfd0 ^ 0x84222305) + (ulonglong)((uint)_DAT_18319cfd0 & 0x84222305) * 2) *
           -_DAT_18319d058;
  uVar12 = (uVar12 | _DAT_18319cc60) + (uVar12 & _DAT_18319cc60);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319d040 = _DAT_18319cfd0;
  _DAT_18319cb30 =
       func_0x000187cf6760((uVar12 | 0x84222305) + (ulonglong)((uint)uVar12 & 0x84222305));
  _DAT_18319d030 = _DAT_18319cf10 ^ _DAT_18319cb30 ^ 0x20;
  _DAT_18319cb10 = (_DAT_18319cb10 ^ _DAT_18319cb30) + 0x20 ^ 0x6bd0d85c50b22fb;
  _DAT_18319d068 = (_DAT_18319d068 * -0x4e191c34e6841d0b ^ _DAT_18319cb10) + _DAT_18319cb30;
  _DAT_18319cc00 = _DAT_18319d068 ^ _DAT_18319cb10;
  _DAT_18319cd58 = 0x20;
  uVar12 = ~_DAT_18319cd30 *
           ((_DAT_18319cc20 ^ 0xfbfbecdf395dccda) + (_DAT_18319cc20 & 0x7bfbecdf395dccda) * 2);
  uVar12 = (uVar12 | _DAT_18319cb78) + (uVar12 & _DAT_18319cb78);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319cd48 = func_0x000187cf6760((uVar12 | 0x4041320c6a23325) + (uVar12 & 0x4041320c6a23325));
  uVar12 = ~_DAT_18319cd48;
  uVar14 = uVar12 >> 1 | uVar12;
  uVar14 = uVar14 >> 2 | uVar14;
  uVar14 = uVar14 >> 4 | uVar14;
  uVar14 = uVar14 >> 8 | uVar14;
  uVar14 = uVar14 >> 0x10 | uVar14;
  uVar14 = uVar14 >> 0x20 | uVar14;
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar12 = (0x40 - (((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           uVar12;
  _DAT_18319cbc0 = (_DAT_18319cbc0 ^ uVar12) + 0x404132042801000 ^ 0xf83692faf3450613;
  _DAT_18319ce50 = (_DAT_18319ce50 * 0x2253e09be4bce70f ^ _DAT_18319cbc0) + uVar12;
  _DAT_18319cea8 = _DAT_18319ce50 ^ _DAT_18319cbc0;
  _DAT_18319cb58 = 0x404132042801000;
  uVar12 = (_DAT_18319ce60 ^ _DAT_180da53e0) + _DAT_18319d040 + 0xfbfbecdf395dccda;
  uVar14 = (_DAT_18319d040 ^ _UNK_180da53e8) + _DAT_18319ce60 + 0x404132042801000;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319ce60 ^ _DAT_180da53e0;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319d040 ^ _UNK_180da53e8;
  _DAT_18319ce30 =
       func_0x000187cf6760((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319ce60 + 0x404132042801000)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) -
                             (_DAT_18319d040 + 0xfbfbecdf395dccda));
  _DAT_18319cfe0 = _DAT_18319cfe0 ^ _DAT_18319ce30 ^ 0xfbfbecdfbd7fefff ^ 0x7c1bf056e07fd673;
  _DAT_18319ce48 =
       (_DAT_18319ce48 * 0x78e25e8d5d94211b ^ _DAT_18319cfe0) +
       (_DAT_18319ce30 ^ 0xfbfbecdfbd7fefff);
  _DAT_18319ce18 = _DAT_18319ce48 ^ _DAT_18319cfe0;
  _DAT_18319d070 = 0;
  uVar12 = (_DAT_18319d048 ^ 0x84222305) + _DAT_18319cf58 + 0x84222305;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319d048 ^ 0x84222305;
  uVar14 = ((_DAT_18319cf58 + _DAT_18319d048) * 0x2000 | _DAT_18319cf58 + _DAT_18319d048 >> 0x33) ^
           _DAT_18319cf58;
  _DAT_18319cd38 =
       func_0x000187cf6760((uVar14 << 0x1d | uVar14 >> 0x23) - _DAT_18319d048 ^
                           (uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18319cf58 + 0x84222305));
  uVar12 = _DAT_18319cd38 ^ 0x20;
  _DAT_18319ce10 = _DAT_18319cdd0 ^ uVar12 ^ 0x20;
  _DAT_18319cb38 = (_DAT_18319cb38 ^ uVar12) + 0x20 ^ 0x825fe56536122051;
  _DAT_18319cf00 = (_DAT_18319cf00 * -0x31c39a6f52f25e1d ^ _DAT_18319cb38) + uVar12;
  _DAT_18319ccd0 = _DAT_18319cf00 ^ _DAT_18319cb38;
  _DAT_18319cd40 = 0x20;
  uVar12 = (_DAT_18319cce0 ^ _DAT_180da53f0) + _DAT_18319cc68 + 0xab5348df380bc6f9;
  uVar14 = (_DAT_18319cc68 ^ _UNK_180da53f8) + _DAT_18319cce0 + 0xab5348dfbc29e5dc;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18319cce0 ^ _DAT_180da53f0;
  uVar14 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_18319cc68 ^ _UNK_180da53f8;
  _DAT_18319cf08 =
       func_0x000187cf6760((uVar14 << 0x1d | uVar14 >> 0x23) - (_DAT_18319cce0 + 0xab5348dfbc29e5dc)
                           ^ (uVar12 << 0x1d | uVar12 >> 0x23) -
                             (_DAT_18319cc68 + 0xab5348df380bc6f9));
  uVar12 = _DAT_18319cf08 << 0x27 | _DAT_18319cf08 >> 0x19;
  _DAT_18319cc80 = _DAT_18319cc80 ^ uVar12 ^ 0xa67f904d1fc3ce79;
  _DAT_18319d050 = (_DAT_18319d050 * 0x76c1608a630f5d29 ^ _DAT_18319cc80) + uVar12;
  _DAT_18319cd78 = _DAT_18319d050 ^ _DAT_18319cc80;
  _DAT_18319cc78 = 0;
  uVar12 = ((_DAT_18319cd90 ^ 0x84222305) + (ulonglong)((uint)_DAT_18319cd90 & 0x84222305) * 2) *
           -_DAT_18319ce10;
  uVar12 = (uVar12 | _DAT_18319cc90) + (uVar12 & _DAT_18319cc90);
  uVar12 = uVar12 * 0x2000 ^ uVar12;
  uVar12 = uVar12 >> 7 ^ uVar12;
  uVar12 = uVar12 << 0x11 ^ uVar12;
  _DAT_18319cd60 =
       func_0x000187cf6760((uVar12 | 0x84222305) + (ulonglong)((uint)uVar12 & 0x84222305));
  uVar12 = _DAT_18319cd60 & 0xffffffffe0000000;
  _DAT_18319d0a0 = _DAT_18319ce10 ^ uVar12 ^ 0x20;
  _DAT_18319cb68 = (_DAT_18319cb68 ^ uVar12) + 0x20 ^ 0xfd1226df85b4dea1;
  _DAT_18319cc20 = (_DAT_18319cc20 * -0x32c8106bede562e9 ^ _DAT_18319cb68) + uVar12;
  _DAT_18319cff0 = _DAT_18319cc20 ^ _DAT_18319cb68;
  _DAT_18319d078 = _DAT_18319cd00 ^ 0x20;
  _DAT_18319d070 = 0x20;
  switch(uVar16 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7cd8206 -----

undefined8 FUN_187cd8206(void)

{
  func_0x000180001044();
  return 0;
}


// ----- block @ rva 0x7cdb61c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cdb61c(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0xa0) = 2;
  switch(*(int *)(unaff_RBP + 0x50) < *(int *)(unaff_RBP + -4)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7cdb647 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cdb647(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar4;
  uint unaff_EDI;
  longlong *unaff_R13;
  ulonglong unaff_R14;
  longlong lVar5;
  ulonglong unaff_XMM6_Qa;
  uint uVar6;
  uint uVar7;
  uint unaff_XMM15_Da;
  
  *(undefined8 *)(unaff_RBP + 0x90) = unaff_RBX;
  uVar4 = (ulonglong)unaff_EDI;
  uVar2 = uVar4 ^ unaff_R14;
  uVar3 = (~_DAT_18319cc50 + 2) *
          ((_DAT_18319cde0 ^ uVar2) + (ulonglong)((uint)_DAT_18319cde0 & (uint)uVar2) * 2);
  uVar3 = (uVar3 | _DAT_18319d0a8) + (uVar3 & _DAT_18319d0a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319cb00 =
       func_0x000187cf6760((uVar2 ^ 1 | uVar3) + (ulonglong)((uint)(uVar2 ^ 1) & (uint)uVar3));
  uVar6 = unaff_EDI & unaff_XMM15_Da;
  uVar7 = unaff_EDI ^ unaff_XMM15_Da;
  lVar5 = ((ulonglong)unaff_EDI * (ulonglong)_DAT_180da47f0 << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_180da47e0;
  uVar2 = (_DAT_18319cb00 ^ uVar4) & 0xfffffffffffc0000;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar2;
  uVar3 = ((((ulonglong)uVar7 * (ulonglong)_DAT_180da47d0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_180da47c0 +
            ((ulonglong)(unaff_EDI | unaff_XMM15_Da) * (ulonglong)_DAT_180da47b0 << 0x20) +
            (ulonglong)(unaff_EDI | unaff_XMM15_Da) * (ulonglong)_DAT_180da47a0 +
            ((ulonglong)uVar6 * (ulonglong)_DAT_180da4790 << 0x20 |
            (ulonglong)uVar6 * (ulonglong)_DAT_180da4780) +
            ((ulonglong)unaff_EDI * (ulonglong)_DAT_180da4770 << 0x20) +
            (ulonglong)unaff_EDI * (ulonglong)_DAT_180da4760 + lVar5) -
          (((uVar4 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_180da4860 +
           (((uVar4 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_180da4870 +
            (unaff_XMM6_Qa >> 0x20) * (ulonglong)_DAT_180da4860 << 0x20) +
           ((ulonglong)uVar7 * (ulonglong)_DAT_180da4850 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180da4840 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_180da4830 << 0x20 |
           (ulonglong)uVar6 * (ulonglong)_DAT_180da4820) +
           ((ulonglong)unaff_EDI * (ulonglong)_DAT_180da4810 << 0x20) +
           (ulonglong)unaff_EDI * (ulonglong)_DAT_180da4800 + lVar5)) + 0x65fe8cd91b9fa07c;
  _DAT_18319ce80 = _DAT_18319d098 ^ uVar2 ^ uVar3;
  _DAT_18319d028 = (_DAT_18319d028 ^ uVar2) + uVar3 ^ 0xf27cf3206e0e7ec2;
  _DAT_18319cf18 = (_DAT_18319cf18 * -0x15d3baeb6c9fea07 ^ _DAT_18319d028) + uVar2;
  _DAT_18319d0f8 = _DAT_18319cf18 ^ _DAT_18319d028;
  _DAT_18319cc58 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x98) = (int)uVar3;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x98) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x98)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7cdf8ff -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cdf8ff(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x98) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x98)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7ce0e2b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ce0e2b(void)

{
  longlong unaff_RBP;
  int iVar1;
  longlong *unaff_R13;
  
  *(undefined2 *)(unaff_RBP + 0x6e) = *(undefined2 *)(unaff_RBP + 0xa0);
  (**(code **)(unaff_R13 + JNI->SetCharArrayRegion /*0x688*/))();
  iVar1 = *(int *)(unaff_RBP + 0x50) + 1;
  *(int *)(unaff_RBP + 0x90) = iVar1;
  *(int *)(unaff_RBP + 0x98) = *(int *)(unaff_RBP + 0x78);
  switch(iVar1 < *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7ce0e90 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ce0e90(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  *(undefined8 *)(unaff_RBP + 0x90) = *(undefined8 *)(unaff_RBP + 0x10);
  *(int *)(unaff_RBP + 0x98) = *(int *)(unaff_RBP + 0x50) + 1;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x98) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x98)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7ce0ede -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ce0ede(void)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  undefined8 *unaff_RBP;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_XMM15_Da;
  
  *(bool *)(unaff_RBP + 0x10) = unaff_RBP[9] == 0;
  _DAT_18319d0b8 = func_0x000187cf6760(_DAT_18319ce60 + 0xff1b0042980028ff ^ 0x5f);
  _DAT_18319cfc0 = (_DAT_18319cfc0 ^ _DAT_18319d060) + 0xe77bfbfd ^ 0x3a132689980e2068;
  _DAT_18319cf10 = (_DAT_18319cf10 * 0x7276f54536084099 ^ _DAT_18319cfc0) + _DAT_18319d060;
  _DAT_18319d0a0 = _DAT_18319cf10 ^ _DAT_18319cfc0;
  _DAT_18319cb30 = 0xe77bfbfd;
  uVar6 = (~_DAT_18319cf58 + 0xd9793788) *
          ((_DAT_18319cc40 ^ 0xa5c7322a) + (ulonglong)((uint)_DAT_18319cc40 & 0xa5c7322a) * 2);
  uVar6 = (uVar6 | _DAT_18319cc68) + (uVar6 & _DAT_18319cc68);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319ced8 = func_0x000187cf6760((uVar6 | 0x7cbe05ad) + (ulonglong)((uint)uVar6 & 0x7cbe05ad))
  ;
  _DAT_18319cd28 =
       (_DAT_18319cd28 ^ _DAT_18319ced8 * -0x3ac7a17cc453eee3) + 0xf89c2688 ^ 0xc975d2706a5c478a;
  _DAT_18319ce48 =
       (_DAT_18319ce48 * -0x4ba0ba361e144ec7 ^ _DAT_18319cd28) +
       _DAT_18319ced8 * -0x3ac7a17cc453eee3;
  _DAT_18319cf08 = _DAT_18319ce48 ^ _DAT_18319cd28;
  _DAT_18319cb08 = 0xf89c2688;
  uVar6 = (_DAT_18319ce60 ^ _DAT_180da4620) + _DAT_18319cf38 + 0x84222325;
  uVar7 = (_DAT_18319cf38 ^ _UNK_180da4628) + _DAT_18319ce60 + 0xe1701079;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319ce60 ^ _DAT_180da4620;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18319cf38 ^ _UNK_180da4628;
  _DAT_18319cb58 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319ce60 + 0xe1701079) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319cf38 + 0x84222325));
  uVar6 = _DAT_18319cb58 >> 1 | _DAT_18319cb58;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18319cb58;
  _DAT_18319cb18 = (_DAT_18319cb18 ^ uVar6) - 0xe1701079 ^ 0x5c44394203991587;
  _DAT_18319d090 = (_DAT_18319d090 * 0x3d1212065dbdc9d7 ^ _DAT_18319cb18) + uVar6;
  _DAT_18319d0b8 = _DAT_18319d090 ^ _DAT_18319cb18;
  _DAT_18319cc40 = 0x1e8fef87;
  uVar6 = (_DAT_18319cb58 ^ _DAT_180da4630) + _DAT_18319ce48 + 0x842224e5;
  uVar7 = (_DAT_18319ce48 ^ _UNK_180da4638) + _DAT_18319cb58 + 0xe1701079;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319cb58 ^ _DAT_180da4630;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18319ce48 ^ _UNK_180da4638;
  uVar6 = func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319cb58 + 0xe1701079) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319ce48 + 0x842224e5));
  uVar6 = uVar6 ^ 0x7c0;
  _DAT_18319cb80 = _DAT_18319cec0 ^ uVar6 ^ 0xe1701839;
  _DAT_18319ce48 = (_DAT_18319ce48 ^ uVar6) + 0xe1701839 ^ 0x8b88fea096460b03;
  _DAT_18319cda8 = (_DAT_18319cda8 * 0x761c7de85f397e91 ^ _DAT_18319ce48) + uVar6;
  _DAT_18319d0d0 = _DAT_18319cda8 ^ _DAT_18319ce48;
  _DAT_18319cf40 = 0xe1701839;
  uVar6 = (~_DAT_18319cc30 + 0x1e8fef88) *
          ((_DAT_18319cd30 ^ 0x65523b1c) + (ulonglong)((uint)_DAT_18319cd30 & 0x65523b1c) * 2);
  uVar6 = (uVar6 | _DAT_18319ccc8) + (uVar6 & _DAT_18319ccc8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319d050 = func_0x000187cf6760((uVar6 | 0x7bddd49b) + (ulonglong)((uint)uVar6 & 0x7bddd49b))
  ;
  uVar2 = (uint)_DAT_18319d050 & 0xe1701839;
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          (ulonglong)uVar2;
  _DAT_18319cb00 = (_DAT_18319cb00 ^ uVar6) + 0x1000007c0 ^ 0x784701d9576b3668;
  _DAT_18319cc68 = (_DAT_18319cc68 * 0x3bedde94be0356e7 ^ _DAT_18319cb00) + uVar6;
  _DAT_18319cfa0 = _DAT_18319cc68 ^ _DAT_18319cb00;
  _DAT_18319cc50 = 0x7c0;
  _DAT_18319ce90 = func_0x000187cf6760(_DAT_18319d0e8 ^ 0x95ff71d1ffb9d2);
  uVar6 = (_DAT_18319ce90 & 0xffff8000000) << 0x1a | (_DAT_18319ce90 & 0xffff8000000) >> 0x26;
  _DAT_18319cd78 = (_DAT_18319cd78 ^ uVar6) - 0x165899f7 ^ 0x31d98d2549d3a3f7;
  _DAT_18319d028 = (_DAT_18319d028 * 0x1cceb36068d8c6c3 ^ _DAT_18319cd78) + uVar6;
  _DAT_18319cca8 = _DAT_18319d028 ^ _DAT_18319cd78;
  _DAT_18319cef8 = 0xe9a76609;
  uVar6 = (~_DAT_18319cb18 + 0x165899f8) *
          ((_DAT_18319cda0 ^ 0x842224e5) + (ulonglong)((uint)_DAT_18319cda0 & 0x842224e5) * 2);
  uVar6 = (uVar6 | _DAT_18319cbc0) + (uVar6 & _DAT_18319cbc0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319cf98 = func_0x000187cf6760((uVar6 | 0x927abd12) + (ulonglong)((uint)uVar6 & 0x927abd12))
  ;
  _DAT_18319cee8 =
       (_DAT_18319cee8 ^ _DAT_18319cf98 ^ 0xad2ea93a40) + 0x1658a1b7 ^ 0x21c61a9f7d618681;
  _DAT_18319d0a8 =
       (_DAT_18319d0a8 * 0x2b7de850f6daaf0f ^ _DAT_18319cee8) + (_DAT_18319cf98 ^ 0xad2ea93a40);
  _DAT_18319cd50 = _DAT_18319d0a8 ^ _DAT_18319cee8;
  _DAT_18319ceb8 = _DAT_18319ce38 ^ 0x1658a1b7;
  _DAT_18319cf50 = 0x1658a1b7;
  uVar6 = (~_DAT_18319cc30 + 0xfe90006e) *
          ((_DAT_18319cfd8 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319cfd8 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_18319cb18) + (uVar6 & _DAT_18319cb18);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319cbc0 = func_0x000187cf6760((uVar6 | 0x7ab22348) + (ulonglong)((uint)uVar6 & 0x7ab22348))
  ;
  _DAT_18319cbe8 = (_DAT_18319cbe8 ^ 0x800) - 0xfe90006d ^ 0x9eec9bb538f0acf4;
  _DAT_18319cd98 = (_DAT_18319cd98 * 0x2b0cab0660d74819 ^ _DAT_18319cbe8) + 0x800;
  _DAT_18319cc98 = _DAT_18319cd98 ^ _DAT_18319cbe8;
  _DAT_18319cc18 = 0x16fff93;
  uVar6 = (~_DAT_18319cb60 + 0x16fff94) *
          ((_DAT_18319cc30 ^ 0x7ab22b08) + (ulonglong)((uint)_DAT_18319cc30 & 0x7ab22b08) * 2);
  uVar6 = (uVar6 | _DAT_18319cea8) + (uVar6 & _DAT_18319cea8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319d0a0 = func_0x000187cf6760((uVar6 | 0x7bddd49b) + (ulonglong)((uint)uVar6 & 0x7bddd49b))
  ;
  uVar7 = _UNK_180da4648;
  uVar6 = _DAT_180da4640;
  uVar3 = _DAT_18319d0a0 ^ 0x16dee9f5c337b44;
  _DAT_18319cd08 = _DAT_18319cce8 ^ uVar3 ^ 0x1000007c0;
  _DAT_18319cf50 = (_DAT_18319cf50 ^ uVar3) + 0x1000007c0 ^ 0xed8c2b72c1f41656;
  _DAT_18319cdc8 = (_DAT_18319cdc8 * -0x6b36abed4b18d3b3 ^ _DAT_18319cf50) + uVar3;
  _DAT_18319cde8 = _DAT_18319cdc8 ^ _DAT_18319cf50;
  _DAT_18319d008 = 0x7c0;
  uVar3 = (_DAT_18319cc90 ^ _DAT_180da4640) + _DAT_18319cd38 + 0x6359d8d8;
  uVar8 = (_DAT_18319cd38 ^ _UNK_180da4648) + _DAT_18319cc90 + 0xf89c2688;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319cc90 ^ _DAT_180da4640;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319cd38 ^ _UNK_180da4648;
  _DAT_18319cf68 =
       func_0x000187cf6760((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319cc90 + 0xf89c2688) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319cd38 + 0x6359d8d8));
  uVar3 = _DAT_18319cf68 ^ 0xfffffffd;
  uVar8 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & unaff_RBX) + (uVar8 >> 2 & unaff_RBX);
  uVar3 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  _DAT_18319cbd8 = _DAT_18319cb30 ^ uVar3 ^ 0x1e0182285;
  _DAT_18319ce10 = (_DAT_18319ce10 ^ uVar3) + 0x1e0182285 ^ 0x26ce6e8f12e786a5;
  _DAT_18319cb38 = (_DAT_18319cb38 * -0x49f49f54f6597801 ^ _DAT_18319ce10) + uVar3;
  _DAT_18319cb18 = _DAT_18319cb38 ^ _DAT_18319ce10;
  _DAT_18319cbb0 = 0xe0182285;
  uVar3 = (_DAT_18319cda0 ^ uVar6) + _DAT_18319cc38 + 0x6359d8d8;
  uVar8 = (_DAT_18319cc38 ^ uVar7) + _DAT_18319cda0 + 0xf89c2688;
  uVar6 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319cda0 ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319cc38 ^ uVar7;
  _DAT_18319cd58 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319cda0 + 0xf89c2688) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319cc38 + 0x6359d8d8));
  uVar6 = _DAT_18319cd58 ^ 0xe0cd4e8207716c68;
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_RBX) + (uVar7 >> 2 & unaff_RBX);
  uVar6 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6;
  _DAT_18319ce90 = (_DAT_18319ce90 ^ uVar6) + 0x1fe7dd75 ^ 0x4652ef28e216dafe;
  _DAT_18319cdc8 = (_DAT_18319cdc8 * 0x44f523dc510e327d ^ _DAT_18319ce90) + uVar6;
  _DAT_18319cdf8 = _DAT_18319cdc8 ^ _DAT_18319ce90;
  _DAT_18319cc50 = 0x1fe7dd75;
  uVar6 = (~_DAT_18319ce48 + 0xf89c2689) *
          ((_DAT_18319cd78 ^ 0x6359d8d8) + (ulonglong)((uint)_DAT_18319cd78 & 0x6359d8d8) * 2);
  uVar6 = (uVar6 | _DAT_18319d0f0) + (uVar6 & _DAT_18319d0f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319ccc0 = func_0x000187cf6760((uVar6 | 0x9bc5fe50) + (ulonglong)((uint)uVar6 & 0x9bc5fe50))
  ;
  uVar6 = (ulonglong)(~(uint)_DAT_18319ccc0 & 0xe77bfbfd);
  _DAT_18319cd28 = (_DAT_18319cd28 ^ uVar6) + 0xe0182288 ^ 0x429113520b8aedcf;
  _DAT_18319d068 = (_DAT_18319d068 * 0x1e75b04baee0364b ^ _DAT_18319cd28) + uVar6;
  _DAT_18319ce30 = _DAT_18319d068 ^ _DAT_18319cd28;
  _DAT_18319cb80 = 0xe0182288;
  uVar6 = func_0x000187cf6760(_DAT_18319cf58 + 0x1cff83db001dff ^ 0x89);
  uVar6 = uVar6 ^ 0xe0182285;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_RBX) + (uVar7 >> 2 & unaff_RBX);
  _DAT_18319cde0 =
       ((0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
       uVar6) * -0x7b28e47c7a07f5a1;
  _DAT_18319cfb0 = _DAT_18319cfb0 ^ _DAT_18319cde0 ^ 0x9e24781c9129e177;
  _DAT_18319cc98 = (_DAT_18319cc98 * -0x184a663dda7c7977 ^ _DAT_18319cfb0) + _DAT_18319cde0;
  _DAT_18319cc10 = _DAT_18319cc98 ^ _DAT_18319cfb0;
  _DAT_18319cbb0 = 0;
  uVar6 = (_DAT_18319cf60 ^ 0x842224e5) + _DAT_18319cb50 + 0x842224e5;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319cf60 ^ 0x842224e5;
  uVar7 = ((_DAT_18319cb50 + _DAT_18319cf60) * 0x2000 | _DAT_18319cb50 + _DAT_18319cf60 >> 0x33) ^
          _DAT_18319cb50;
  _DAT_18319cd90 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_18319cf60 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319cb50 + 0x842224e5));
  uVar6 = (_DAT_18319cd90 ^ 0x7c0) * 0x666defe78e0af0bf;
  _DAT_18319ccf0 = _DAT_18319cbb8 ^ uVar6 ^ 0x7c0;
  _DAT_18319cdd8 = (_DAT_18319cdd8 ^ uVar6) + 0x7c0 ^ 0x88ffb15b3efa2552;
  _DAT_18319cb28 = (_DAT_18319cb28 * -0x216d1d27b37c7b41 ^ _DAT_18319cdd8) + uVar6;
  _DAT_18319cba8 = _DAT_18319cb28 ^ _DAT_18319cdd8;
  _DAT_18319cc98 = 0x7c0;
  uVar6 = (~_DAT_18319cc40 + 0x18840403) *
          ((_DAT_18319cbd0 ^ 0x6359d8d8) + (ulonglong)((uint)_DAT_18319cbd0 & 0x6359d8d8) * 2);
  uVar6 = (uVar6 | _DAT_18319cb30) + (uVar6 & _DAT_18319cb30);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319cbc0 = func_0x000187cf6760((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda))
  ;
  uVar6 = (_DAT_18319cbc0 ^ 0x162aff2d655bebfa) * -0x296597ed48f01b31;
  _DAT_18319cf48 = _DAT_18319cf48 ^ uVar6 ^ 0xdaad4d1202cfcc29;
  _DAT_18319cd30 = (_DAT_18319cd30 * -0x3688bf6c4d2ee449 ^ _DAT_18319cf48) + uVar6;
  _DAT_18319cca0 = _DAT_18319cd30 ^ _DAT_18319cf48;
  _DAT_18319cb78 = 0;
  uVar6 = (_DAT_18319cec0 ^ _DAT_180da4650) + _DAT_18319cd38 + 0x6553187c;
  uVar7 = (_DAT_18319cd38 ^ _UNK_180da4658) + _DAT_18319cec0 + 0xe1713b59;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319cec0 ^ _DAT_180da4650;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18319cd38 ^ _UNK_180da4658;
  _DAT_18319cb38 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319cec0 + 0xe1713b59) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319cd38 + 0x6553187c));
  uVar6 = (_DAT_18319cb38 ^ 0xe1713b59) & 0x7fffffffffffffff;
  _DAT_18319ce10 = _DAT_18319ce10 ^ uVar6 ^ 0x5926dd0d774fc918;
  _DAT_18319ccc0 = (_DAT_18319ccc0 * -0x538ae63a1a5c876f ^ _DAT_18319ce10) + uVar6;
  _DAT_18319d0a0 = _DAT_18319ccc0 ^ _DAT_18319ce10;
  _DAT_18319cf30 = 0;
  uVar5 = *(uint *)(unaff_RBP + 10);
  uVar7 = (ulonglong)uVar5;
  uVar6 = (~_DAT_18319cbe8 + 0x7c1) *
          ((uVar7 ^ 0x84222325 ^ _DAT_18319cd00) +
          (ulonglong)((uint)_DAT_18319cd00 & (uint)(uVar7 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | _DAT_18319cdc8) + (uVar6 & _DAT_18319cdc8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319d078 =
       func_0x000187cf6760((uVar7 ^ 0x842224e5 | uVar6) +
                           (ulonglong)((uint)(uVar7 ^ 0x842224e5) & (uint)uVar6));
  uVar5 = uVar5 & 0x7c0;
  uVar8 = (ulonglong)uVar5;
  _DAT_18319cb40 = (_DAT_18319cb40 ^ ~_DAT_18319d078 & uVar7) + uVar8 ^ 0xda90a20dcd0a4b92;
  _DAT_18319ce10 =
       (_DAT_18319ce10 * 0x7c8b01560f878f79 ^ _DAT_18319cb40) + (~_DAT_18319d078 & uVar7);
  _DAT_18319d098 = _DAT_18319ce10 ^ _DAT_18319cb40;
  plVar1 = (longlong *)unaff_RBP[4];
  _DAT_18319cfd0 = uVar8;
  lVar4 = (**(code **)(plVar1 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(plVar1,uVar7,0);
  *(int *)(unaff_RBP + 0x12) = (int)*(char *)(lVar4 + *(int *)(unaff_RBP + 0x13));
  (**(code **)(plVar1 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(plVar1);
  unaff_RBP[10] = (ulonglong)*(uint *)(unaff_RBP + 0x12);
  uVar6 = (~_DAT_18319cf18 + 0x94e69918) *
          ((_DAT_18319ceb0 ^ 0xc10cad47) + (ulonglong)((uint)_DAT_18319ceb0 & 0xc10cad47) * 2);
  uVar6 = (uVar6 | _DAT_18319cc00) + (uVar6 & _DAT_18319cc00);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319cfb0 = func_0x000187cf6760((uVar6 | 0x55ea3450) + (ulonglong)((uint)uVar6 & 0x55ea3450))
  ;
  _DAT_18319cbd0 =
       (_DAT_18319cbd0 ^ _DAT_18319cfb0 & 0x3ffffffffffffff) + 0xd5ee9f77 ^ 0x965a550044ddc23f;
  _DAT_18319cc80 =
       (_DAT_18319cc80 * -0x2be1a29476b9baaf ^ _DAT_18319cbd0) +
       (_DAT_18319cfb0 & 0x3ffffffffffffff);
  _DAT_18319ccb8 = _DAT_18319cc80 ^ _DAT_18319cbd0;
  _DAT_18319ce00 = 0xd5ee9f77;
  _DAT_18319cc30 = func_0x000187cf6760(_DAT_18319cc70 ^ 0x63000d01000385);
  _DAT_18319d0e8 =
       (_DAT_18319d0e8 ^ _DAT_18319cc30 & 0xffffffffffff8000) - 0x932e8024 ^ 0xcb01df20d693cdfb;
  _DAT_18319cb00 =
       (_DAT_18319ce90 * 0x3f18779fe65febbf ^ _DAT_18319d0e8) +
       (_DAT_18319cc30 & 0xffffffffffff8000) ^ _DAT_18319d0e8;
  _DAT_18319ce90 = 0x6cd17fdc;
  uVar6 = func_0x000187cf6760(_DAT_18319cb60 ^ 0xffcbffa796005c9a);
  _DAT_18319cf40 = uVar6 ^ 0x3e9010a3b154f277;
  uVar7 = _DAT_18319cf40 >> 1 | _DAT_18319cf40;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_RBX) + (uVar7 >> 2 & unaff_RBX);
  _DAT_18319cf40 =
       (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
       _DAT_18319cf40;
  _DAT_18319cdc8 = _DAT_18319d0b0 ^ _DAT_18319cf40 ^ 0x10000003f;
  _DAT_18319cdd0 = (_DAT_18319cdd0 ^ _DAT_18319cf40) + 0x10000003f ^ 0xcdd1c408b02fe20;
  _DAT_18319cf40 = (uVar6 * 0x1e4449831a323d91 ^ _DAT_18319cdd0) + _DAT_18319cf40;
  _DAT_18319cdb0 = _DAT_18319cf40 ^ _DAT_18319cdd0;
  _DAT_18319cc58 = 0x3f;
  uVar6 = func_0x000187cf6760(_DAT_18319cce8 + 0xffd700310500b0ff ^ 0x5d);
  uVar6 = (uVar6 & 0xffff) << 0x25 | uVar6 >> 0x1b;
  _DAT_18319cb40 = (_DAT_18319cb40 ^ uVar6) - 0x75f30a28 ^ 0x13e6be6285e5c26b;
  _DAT_18319d038 = (_DAT_18319d038 * 0x5db740d46681699 ^ _DAT_18319cb40) + uVar6;
  _DAT_18319d0f8 = _DAT_18319d038 ^ _DAT_18319cb40;
  _DAT_18319cb90 = 0x8a0cf5d8;
  _DAT_18319cb70 = func_0x000187cf6760(_DAT_18319cd80 + 0xff4bffc97600a2ffU ^ 0xdc);
  _DAT_18319ccf8 = _DAT_18319cfe0 ^ _DAT_18319cb70 ^ 0x10000003f;
  _DAT_18319ceb8 = (_DAT_18319cde8 ^ _DAT_18319cb70) + 0x10000003f ^ 0xb27afd0ec336b4d7;
  _DAT_18319cde8 = (_DAT_18319cde8 * -0x49abc5f0e4972e21 ^ _DAT_18319ceb8) + _DAT_18319cb70;
  _DAT_18319ceb8 = _DAT_18319cde8 ^ _DAT_18319ceb8;
  _DAT_18319cd10 = 0x3f;
  uVar6 = (~_DAT_18319cba0 + 0x18e625d) *
          ((_DAT_18319d098 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319d098 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_18319d010) + (uVar6 & _DAT_18319d010);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319cb50 = func_0x000187cf6760((uVar6 | 0x85ac4179) + (ulonglong)((uint)uVar6 & 0x85ac4179))
  ;
  uVar6 = _DAT_18319cb50 * -0x44fe316f8312d55 ^ 0x18e625c;
  _DAT_18319cec0 = (_DAT_18319cec0 ^ uVar6) - 0x18e625c ^ 0x21d3b94dacfcccb;
  _DAT_18319cce0 = (_DAT_18319cce0 * 0x495feac011162e59 ^ _DAT_18319cec0) + uVar6;
  _DAT_18319cec0 = _DAT_18319cce0 ^ _DAT_18319cec0;
  _DAT_18319ce98 = 0xfe719da4;
  _DAT_18319d000 = func_0x000187cf6760(_DAT_18319cb30 + 0x3bffaaea004cff ^ 0x4e);
  uVar7 = _UNK_180da4668;
  uVar6 = _DAT_180da4660;
  uVar3 = (_DAT_18319d000 ^ 0xffffffbf) * -0x76e4ec70eb90a6d;
  _DAT_18319cd18 = _DAT_18319cb18 ^ uVar3 ^ 0x10000003f;
  _DAT_18319d068 = (_DAT_18319d068 ^ uVar3) + 0x10000003f ^ 0x50989d19b9fedb29;
  _DAT_18319ce60 = (_DAT_18319ce60 * 0x4bdd991b3962fa33 ^ _DAT_18319d068) + uVar3;
  _DAT_18319cc28 = _DAT_18319ce60 ^ _DAT_18319d068;
  _DAT_18319cc08 = 0x3f;
  uVar3 = (_DAT_18319cbb8 ^ _DAT_180da4660) + _DAT_18319cde0 + 0x51ccbc52;
  uVar9 = (_DAT_18319cde0 ^ _UNK_180da4668) + _DAT_18319cbb8 + 0xb71c5a0f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319cbb8 ^ _DAT_180da4660;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18319cde0 ^ _UNK_180da4668;
  _DAT_18319ce20 =
       func_0x000187cf6760((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18319cbb8 + 0xb71c5a0f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319cde0 + 0x51ccbc52));
  uVar3 = _DAT_18319ce20 ^ 0xf7fedf7f;
  _DAT_18319cc70 = _DAT_18319cb20 ^ uVar3 ^ 0x18d0af986;
  _DAT_18319cb48 = (ulonglong)(&UNK_18d0af986 + (_DAT_18319cb48 ^ uVar3)) ^ 0x91d6636434ed42ed;
  _DAT_18319d040 = (_DAT_18319d040 * 0x1978d8423f2395bb ^ _DAT_18319cb48) + uVar3;
  _DAT_18319cdd0 = _DAT_18319d040 ^ _DAT_18319cb48;
  _DAT_18319d008 = 0x8d0af986;
  uVar3 = (_DAT_18319d0c8 ^ uVar6) + _DAT_18319cd18 + 0x51ccbc52;
  uVar9 = (_DAT_18319cd18 ^ uVar7) + _DAT_18319d0c8 + 0xb71c5a0f;
  uVar6 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319d0c8 ^ uVar6;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18319cd18 ^ uVar7;
  lVar4 = func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319d0c8 + 0xb71c5a0f) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319cd18 + 0x51ccbc52));
  _DAT_18319cd60 = (_DAT_18319cd60 ^ lVar4 * -0x1cbc0f17a70267bf) + 0x62f2c578 ^ 0x10891622a4506ea6;
  _DAT_18319cf18 =
       (_DAT_18319cf18 * -0x6af8864e8b982b0b ^ _DAT_18319cd60) + lVar4 * -0x1cbc0f17a70267bf;
  _DAT_18319cdb0 = _DAT_18319cf18 ^ _DAT_18319cd60;
  _DAT_18319cfb0 = 0x62f2c578;
  uVar6 = (_DAT_18319ce40 ^ _DAT_180da4670) + _DAT_18319ce90 + 0xe6d0e65d;
  uVar7 = (_DAT_18319ce90 ^ _UNK_180da4678) + _DAT_18319ce40 + 0x2a18340e;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319ce40 ^ _DAT_180da4670;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18319ce90 ^ _UNK_180da4678;
  _DAT_18319ced8 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319ce40 + 0x2a18340e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319ce90 + 0xe6d0e65d));
  _DAT_18319cda0 = _DAT_18319d0c8 ^ _DAT_18319cb60 ^ 0x8d0af986;
  _DAT_18319cd70 = (_DAT_18319cd70 ^ _DAT_18319cb60) + 0x8d0af986 ^ 0x73f0d671f182c2d2;
  _DAT_18319cba0 = (_DAT_18319cba0 * 0x5cea3209e0db17a3 ^ _DAT_18319cd70) + _DAT_18319cb60;
  _DAT_18319cfc0 = _DAT_18319cba0 ^ _DAT_18319cd70;
  _DAT_18319cfb0 = 0x8d0af986;
  uVar6 = _DAT_18319d0c8 ^ _DAT_18319cb60 ^ 0x928da9c;
  uVar7 = uVar6 + _DAT_18319cb28 + 0x8422231a;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = ((_DAT_18319cb28 + _DAT_18319cda0) * 0x2000 | _DAT_18319cb28 + _DAT_18319cda0 >> 0x33) ^
          _DAT_18319cb28;
  _DAT_18319cc40 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_18319cda0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319cb28 + 0x8422231a));
  uVar6 = _DAT_18319cc40 - (_DAT_18319cc40 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_18319cc40;
  _DAT_18319cf98 = _DAT_18319cc70 ^ uVar6 ^ 0x3f;
  _DAT_18319d0a0 = (_DAT_18319d0a0 ^ uVar6) + 0x3f ^ 0x74a803a1442b8e17;
  _DAT_18319cbe8 = (_DAT_18319cbe8 * 0x785818eaf0b04b97 ^ _DAT_18319d0a0) + uVar6;
  _DAT_18319ce28 = _DAT_18319cbe8 ^ _DAT_18319d0a0;
  _DAT_18319cbd0 = 0x3f;
  uVar6 = (~_DAT_18319cf50 + 0x2a116089) *
          ((_DAT_18319ccb8 ^ 0x51ccbc52) + (ulonglong)((uint)_DAT_18319ccb8 & 0x51ccbc52) * 2);
  uVar6 = (uVar6 | _DAT_18319ce70) + (uVar6 & _DAT_18319ce70);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319cd00 = func_0x000187cf6760((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda))
  ;
  uVar6 = (ulonglong)(~(((uint)_DAT_18319cd00 & 0x81cc1e66) >> 1) & 0xd5ee9f77);
  _DAT_18319cf28 = _DAT_18319cf28 ^ uVar6 ^ 0x72aa15004c346e48;
  _DAT_18319cc30 = (_DAT_18319cc30 * -0x6a4674ffd2a1be63 ^ _DAT_18319cf28) + uVar6;
  _DAT_18319cca0 = _DAT_18319cc30 ^ _DAT_18319cf28;
  _DAT_18319cce8 = 0;
  _DAT_18319cb20 = func_0x000187cf6760(_DAT_18319cb18 + 0xffe300841a0021ff ^ 0x7a);
  uVar6 = _DAT_18319cb20 >> 1 | _DAT_18319cb20;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_18319cb20;
  _DAT_18319cb08 = _DAT_18319cfc8 ^ uVar6 ^ 0x3f;
  _DAT_18319cb50 = (_DAT_18319cb50 ^ uVar6) + 0x3f ^ 0x1ab75d8f745f8413;
  _DAT_18319cce8 = (_DAT_18319cce8 * -0x2d97b32914daa52b ^ _DAT_18319cb50) + uVar6;
  _DAT_18319cf70 = _DAT_18319cce8 ^ _DAT_18319cb50;
  _DAT_18319cdf8 = 0x3f;
  uVar6 = (_DAT_18319cf18 ^ _DAT_180da4680) + _DAT_18319cc28 + 0xc10cad47;
  uVar7 = (_DAT_18319cc28 ^ _UNK_180da4688) + _DAT_18319cf18 + 0x452e8e62;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319cf18 ^ _DAT_180da4680;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18319cc28 ^ _UNK_180da4688;
  _DAT_18319cff0 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319cf18 + 0x452e8e62) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319cc28 + 0xc10cad47));
  uVar6 = (_DAT_18319cff0 ^ 0x380b4653e6) & 0x3ffffffffe;
  _DAT_18319cc70 = _DAT_18319cc70 ^ uVar6 ^ 0x6a096c57b777a7ce;
  _DAT_18319cfc8 = (_DAT_18319cfc8 * 0x5e9760e9b87a5f17 ^ _DAT_18319cc70) + uVar6;
  _DAT_18319ccd8 = _DAT_18319cfc8 ^ _DAT_18319cc70;
  _DAT_18319d060 = 0;
  uVar6 = (_DAT_18319d0c0 ^ 0x8422231a) + _DAT_18319cea8 + 0x8422231a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319d0c0 ^ 0x8422231a;
  uVar7 = ((_DAT_18319cea8 + _DAT_18319d0c0) * 0x2000 | _DAT_18319cea8 + _DAT_18319d0c0 >> 0x33) ^
          _DAT_18319cea8;
  _DAT_18319d028 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_18319d0c0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319cea8 + 0x8422231a));
  _DAT_18319d088 = _DAT_18319ccc8 ^ _DAT_18319d028 ^ 0x3f;
  _DAT_18319cb68 = (_DAT_18319cb68 ^ _DAT_18319d028) + 0x3f ^ 0x340cf2aa8dd03b85;
  _DAT_18319cd40 = (_DAT_18319cd40 * 0x50c0c6d0bfe6c083 ^ _DAT_18319cb68) + _DAT_18319d028;
  _DAT_18319cb70 = 0x3f;
  uVar2 = (uint)unaff_RBP[10] & 0x3f;
  uVar6 = (ulonglong)uVar2;
  uVar7 = uVar6 ^ 0x84222325 ^ _DAT_18319cec8;
  lVar4 = (uVar6 ^ 0x84222325) + _DAT_18319cdd8;
  uVar3 = uVar7 + lVar4;
  uVar9 = (uVar8 ^ _DAT_18319cdd8) + _DAT_18319cec8 + uVar8;
  uVar7 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar7;
  uVar3 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8 ^ _DAT_18319cdd8;
  _DAT_18319cdb0 =
       func_0x000187cf6760((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319cec8 + uVar8) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar4);
  uVar6 = uVar6 ^ uVar6 * uVar8 ^ _DAT_18319cdb0;
  uVar2 = uVar2 | uVar5;
  _DAT_18319cef0 = (ulonglong)uVar2;
  _DAT_18319cf68 = (_DAT_18319cf68 ^ uVar6) + _DAT_18319cef0 ^ 0xbbffec8d8532ad93;
  _DAT_18319cd48 = (_DAT_18319cd48 * -0x72017c635feca0f7 ^ _DAT_18319cf68) + uVar6;
  _DAT_18319cf40 = _DAT_18319cd48 ^ _DAT_18319cf68;
  unaff_RBP[0x12] = *unaff_RBP;
  uVar5 = *(uint *)(unaff_RBP + 6);
  *(uint *)(unaff_RBP + 0x13) = uVar5;
  uVar3 = (ulonglong)uVar5;
  uVar6 = uVar3 ^ 0x84222325 ^ _DAT_18319cb30;
  lVar4 = (uVar3 ^ 0x84222325) + _DAT_18319cdb8;
  uVar7 = uVar6 + lVar4;
  uVar8 = (_DAT_18319cdb8 ^ 1) + _DAT_18319cb30 + 1;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319cdb8 ^ 1;
  _DAT_18319cd58 =
       func_0x000187cf6760((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18319cb30 + 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar4);
  uVar6 = (uVar3 | 1) ^ _DAT_18319cd58 ^ uVar3;
  uVar10 = uVar5 & unaff_XMM15_Da;
  uVar11 = uVar5 | unaff_XMM15_Da;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & unaff_RBX) + (uVar7 >> 2 & unaff_RBX);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar6;
  _DAT_18319ced8 =
       ((((uVar3 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_180da46f0 +
         ((_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_180da46f0 +
          ((uVar3 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_180da4690 << 0x20) +
         ((ulonglong)(uVar5 ^ unaff_XMM15_Da) * (ulonglong)_DAT_180da46c0 << 0x20) +
         (ulonglong)(uVar5 ^ unaff_XMM15_Da) * (ulonglong)_DAT_180da46b0 +
         ((ulonglong)uVar10 * (ulonglong)_DAT_180da46c0 << 0x20 |
         (ulonglong)uVar10 * (ulonglong)_DAT_180da46b0) +
         (ulonglong)uVar5 * (ulonglong)_DAT_180da46a0 +
         ((ulonglong)uVar5 * (ulonglong)_DAT_180da4690 << 0x20) +
        ((ulonglong)uVar11 * (ulonglong)_DAT_180da46e0 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)_DAT_180da46d0) -
       (((ulonglong)uVar11 * (ulonglong)_DAT_180da4750 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)_DAT_180da4740 +
        ((ulonglong)uVar10 * (ulonglong)_DAT_180da4750 << 0x20 |
        (ulonglong)uVar10 * (ulonglong)_DAT_180da4740) +
       ((ulonglong)uVar5 * (ulonglong)_DAT_180da4730 << 0x20) +
       (ulonglong)uVar5 * (ulonglong)_DAT_180da4720)) + 0x48efb0834c44b977;
  _DAT_18319cf60 = _DAT_18319ccc0 ^ uVar6 ^ _DAT_18319ced8;
  _DAT_18319cc00 = (_DAT_18319cc00 ^ uVar6) + _DAT_18319ced8 ^ 0x1c3b999a41752b7c;
  _DAT_18319cec0 = (_DAT_18319cec0 * -0x57ae3af19a440fb ^ _DAT_18319cc00) + uVar6;
  _DAT_18319ce10 = _DAT_18319cec0 ^ _DAT_18319cc00;
  _DAT_18319ced8 = _DAT_18319ced8 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x14) = uVar2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x10)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7ce36e3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ce36e3(void)

{
  longlong unaff_RBP;
  int unaff_EDI;
  
  *(int *)(unaff_RBP + 0x90) = unaff_EDI + 1;
  *(int *)(unaff_RBP + 0x98) = *(int *)(unaff_RBP + 0x78);
  switch(unaff_EDI + 1 < *(int *)(unaff_RBP + 0x78)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7ce3918 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ce3918(void)

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


// ----- block @ rva 0x7ce3aba -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187ce3aba(void)

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


// ----- block @ rva 0x7ce3c92 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187ce3c92(longlong param_1)

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


// ----- block @ rva 0x7cf8c3b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cf8c3b(void)

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


// ----- block @ rva 0x7cf8de2 -----

void FUN_187cf8de2(void)

{
  return;
}


// ----- block @ rva 0x7cf8eed -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cf8eed(void)

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


// ----- block @ rva 0x7cf9a0f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187cf9272(void)

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


// ----- block @ rva 0x7cf9fb5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cf9fb5(void)

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


// ----- block @ rva 0x7cfa89b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cfa89b(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_stack_00000030 + JNI->CallStaticObjectMethodA /*0x3a0*/))(in_stack_00000030,in_stack_00000038);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7cfaae9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cfaae9(void)

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


// ----- block @ rva 0x7cfb554 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cfb554(void)

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


// ----- block @ rva 0x7cfcfce -----

undefined8 thunk_FUN_187cfc237(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x7cfd5c9 -----

void FUN_187cfd5c9(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x7cfd80f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cfd80f(void)

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


// ----- block @ rva 0x7cfd863 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cfd863(void)

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


// ----- block @ rva 0x7cfd981 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cfd981(void)

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


// ----- block @ rva 0x7cfd9d5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cfd9d5(void)

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


// ----- block @ rva 0x7cfdb5d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cfdb5d(void)

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


// ----- block @ rva 0x7cfdc59 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cfdc59(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180daad38)();
  return;
}


// ----- block @ rva 0x7cfdda7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cfdda7(void)

{
  FUN_190dd72e0();
  (*_DAT_180daadd8)();
  return;
}


// ----- block @ rva 0x7cfe0b2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cfe0b2(void)

{
  FUN_190ddce00();
  (*_DAT_180daacc8)();
  return;
}


// ----- block @ rva 0x7cfe302 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cfe302(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7cfe500 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187cfe500(void)

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


// ----- block @ rva 0x7cfe593 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cfe593(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180daac78)();
  return;
}


// ----- block @ rva 0x7cfe5c8 -----

void FUN_187cfe5c8(void)

{
  return;
}

