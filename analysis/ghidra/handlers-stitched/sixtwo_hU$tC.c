// ===== STITCHED CORPUS: sixtwo.hU$tC =====
// handlers: 7  continuation blocks: 71  unresolved table targets: 0
// tables not in tables.json: ['0x1490310', '0x1490318', '0x1490320', '0x1490328', '0x1490330', '0x1490338', '0x1490340', '0x1490348', '0x1490350', '0x1490360', '0x1490370', '0x1490378', '0x1490380', '0x1490388', '0x1490390', '0x1490398', '0x14903a0', '0x14903a8', '0x14903b0', '0x14903b8']

// ===== Lsixtwo/hU$tC; _8c75cfed8ea0d5570a74098af434d2ba ()V (handler @ image 189a4ac30, runtime 6ffff165ac30) =====

void FUN_189a4ac30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189a4ad18 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181491ad0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/hU$tC; dpC (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 189a3be30, runtime 6ffff164be30) =====

undefined8 FUN_189a3be30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/hU$tC; dpD (IJ)I (handler @ image 189a3bec0, runtime 6ffff164bec0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3bec0(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  
  uRam0000000183236b20 = func_0x000189a46e70(lRam0000000183236a68 + 0xd73796dddc94972fU ^ 0x5e);
  uVar3 = (uRam0000000183236b20 ^ 0x953a59bad1e31574) * 0x5d8c12a8136d8557;
  uRam0000000183236790 = (uRam0000000183236790 ^ uVar3) + 0xbfbfd4dfe2fbfbfd ^ 0x72e4094ec7b03b6d;
  uRam00000001832367d8 = (uRam00000001832367d8 * -0x10d42d085b0730ff ^ uRam0000000183236790) + uVar3
  ;
  uRam0000000183236c18 = uRam00000001832367d8 ^ uRam0000000183236790;
  uRam0000000183236a30 = 0xbfbfd4dfe2fbfbfd;
  uVar3 = (uRam00000001832367a8 ^ _UNK_181490310) + uRam0000000183236bd8 + 0x84222325;
  uVar11 = (uRam0000000183236bd8 ^ _UNK_181490318) + uRam00000001832367a8 + 0xe3ae87aff0111014;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832367a8 ^ _UNK_181490310;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183236bd8 ^ _UNK_181490318;
  uRam0000000183236b80 =
       func_0x000189a46e70((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam00000001832367a8 + 0xe3ae87aff0111014) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236bd8 + 0x84222325));
  uRam0000000183236730 = uRam0000000183236730 + 0x1c5178500feeefec ^ 0xc10cb36fc76a3710;
  uRam0000000183236a70 = uRam0000000183236a48 * 0x13d7411190ddf7d9;
  uRam0000000183236a48 = uRam0000000183236a70 ^ uRam0000000183236730;
  uRam0000000183236ba8 = 0x1c5178500feeefec;
  uVar3 = (~uRam00000001832367e8 + 0x13aafb9626bfafc5) *
          ((uRam0000000183236848 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183236848 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183236af8) + (uVar3 & uRam0000000183236af8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183236c30 =
       func_0x000189a46e70((uVar3 | 0x13aafb96a29df31e) + (uVar3 & 0x13aafb96a29df31e));
  uVar3 = uRam0000000183236c30 & 0xfffffffffffffff8;
  uRam0000000183236818 = uRam00000001832367c0 ^ uVar3 ^ 0x13aafb9626c02fc3;
  uRam0000000183236968 = (uRam0000000183236968 ^ uVar3) + 0x13aafb9626c02fc3 ^ 0x8877619608b0879d;
  uRam0000000183236ca8 = (uRam0000000183236ca8 * 0x5a0f8f8c35e4cb97 ^ uRam0000000183236968) + uVar3;
  uRam0000000183236b28 = uRam0000000183236ca8 ^ uRam0000000183236968;
  uRam00000001832369e8 = 0x13aafb9626c02fc3;
  uVar3 = (uRam0000000183236a10 ^ _UNK_181490320) + uRam0000000183236c58 + 0x84222325;
  uVar11 = (uRam0000000183236c58 ^ _UNK_181490328) + uRam0000000183236a10 + 0xe82869f8f3c055d4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236a10 ^ _UNK_181490320;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183236c58 ^ _UNK_181490328;
  uRam0000000183236b80 =
       func_0x000189a46e70((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam0000000183236a10 + 0xe82869f8f3c055d4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236c58 + 0x84222325));
  uVar3 = uRam0000000183236b80 << 5 | uRam0000000183236b80 >> 0x3b;
  uRam0000000183236c88 = (uRam0000000183236c88 ^ uVar3) + 0x17d796070c3faa2c ^ 0x97d4d892efb83db;
  uRam0000000183236968 = (uRam0000000183236968 * 0x38af503eda451451 ^ uRam0000000183236c88) + uVar3;
  uRam0000000183236760 = uRam0000000183236968 ^ uRam0000000183236c88;
  uRam0000000183236ba0 = 0x17d796070c3faa2c;
  uRam0000000183236700 = func_0x000189a46e70(uRam0000000183236958 + 0xdd37630ec7231a25 ^ 0xf9);
  uVar3 = (uRam0000000183236700 >> 0x23) << 0x32 |
          ((uRam0000000183236700 & 0x7ffffffff) << 0x15 | uRam0000000183236700 >> 0x2b) >> 6;
  uRam0000000183236730 = uRam0000000183236928 ^ uVar3 ^ 0x18dcd01a4b32931c;
  uRam0000000183236970 = (uRam0000000183236970 ^ uVar3) + 0x18dcd01a4b32931c ^ 0x6368267011e1a976;
  uRam0000000183236c28 = (uRam0000000183236c28 * -0x436e923c15e4ea67 ^ uRam0000000183236970) + uVar3
  ;
  uRam00000001832369a0 = uRam0000000183236c28 ^ uRam0000000183236970;
  uRam0000000183236b78 = 0x18dcd01a4b32931c;
  uVar3 = (uRam0000000183236af8 ^ _UNK_181490330) + uRam00000001832369e8 + 0xbfbfd4df66d9d8d8;
  uVar11 = (uRam00000001832369e8 ^ _UNK_181490338) + uRam0000000183236af8 + 0x591cfb3a6836971f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236af8 ^ _UNK_181490330;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001832369e8 ^ _UNK_181490338;
  uRam0000000183236be8 =
       func_0x000189a46e70((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam0000000183236af8 + 0x591cfb3a6836971f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832369e8 + 0xbfbfd4df66d9d8d8));
  uRam0000000183236a20 =
       (uRam0000000183236a20 ^ uRam0000000183236be8 ^ 0xffbfffffeaffffff) + 0x191cd01a6032931d ^
       0x47442462702ddef1;
  uRam0000000183236c20 =
       (uRam0000000183236c20 * 0x7cc4e752ed3ca82d ^ uRam0000000183236a20) +
       (uRam0000000183236be8 ^ 0xffbfffffeaffffff);
  uRam0000000183236a58 = uRam0000000183236c20 ^ uRam0000000183236a20;
  uRam0000000183236940 = 0x191cd01a6032931d;
  uRam0000000183236cf0 = func_0x000189a46e70(uRam00000001832368f8 ^ 0xffdeff7c1affdddb);
  uRam0000000183236880 =
       (uRam0000000183236cf0 ^ 0xa38a0de033792b10) << 8 |
       (uRam0000000183236cf0 ^ 0xa38a0de033792b10) >> 0x38;
  uRam0000000183236898 = uRam0000000183236898 ^ uRam0000000183236880 ^ 0x730f7a4ded8e2188;
  uRam0000000183236a20 =
       (uRam0000000183236a20 * -0x7d75fccb6c324b8d ^ uRam0000000183236898) + uRam0000000183236880;
  uRam0000000183236bc8 = uRam0000000183236a20 ^ uRam0000000183236898;
  uRam00000001832367e8 = 0;
  uVar3 = func_0x000189a46e70(uRam00000001832367b0 ^ 0xffb4007b29ffe156);
  uVar11 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar3 ^
          0x7fff;
  uRam0000000183236730 = uRam00000001832367c8 ^ uVar3 ^ 0x7fff;
  uRam0000000183236b30 = (uRam0000000183236b30 ^ uVar3) + 0x7fff ^ 0xff03e5a2a16e4602;
  uRam00000001832367d8 = (uRam00000001832367d8 * 0x5a3b478e1f3c237 ^ uRam0000000183236b30) + uVar3;
  uRam0000000183236af0 = uRam00000001832367d8 ^ uRam0000000183236b30;
  uRam0000000183236ac8 = 0x7fff;
  uVar3 = (uRam0000000183236958 ^ _UNK_181490340) + uRam0000000183236c48 + 0xbfbfd4df66d9d8d8;
  uVar11 = (uRam0000000183236c48 ^ _UNK_181490348) + uRam0000000183236958 + 0x40402b201d040402;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236958 ^ _UNK_181490340;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183236c48 ^ _UNK_181490348;
  uRam0000000183236b20 =
       func_0x000189a46e70((uVar11 << 0x1d | uVar11 >> 0x23) -
                           (uRam0000000183236958 + 0x40402b201d040402) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183236c48 + 0xbfbfd4df66d9d8d8));
  uRam0000000183236870 =
       uRam0000000183236870 ^ uRam0000000183236b20 & 0x1fffffffff ^ 0xeb095df7163124b7;
  uRam0000000183236ce8 =
       (uRam0000000183236ce8 * -0x174da2819c372bd1 ^ uRam0000000183236870) +
       (uRam0000000183236b20 & 0x1fffffffff);
  uRam0000000183236738 = uRam0000000183236ce8 ^ uRam0000000183236870;
  uRam0000000183236cb0 = 0;
  uVar3 = (uRam0000000183236c10 ^ 0x84225cda) + uRam0000000183236c58 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236c10 ^ 0x84225cda;
  uVar11 = ((uRam0000000183236c58 + uRam0000000183236c10) * 0x2000 |
           uRam0000000183236c58 + uRam0000000183236c10 >> 0x33) ^ uRam0000000183236c58;
  uRam0000000183236720 =
       func_0x000189a46e70((uVar11 << 0x1d | uVar11 >> 0x23) - uRam0000000183236c10 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236c58 + 0x84225cda));
  uVar3 = (uRam0000000183236720 ^ 0x7fff) * 0x21a7e4fa14cf0967;
  uRam0000000183236c90 = uRam0000000183236740 ^ uVar3 ^ 0x7fff;
  uRam0000000183236c18 = (uRam0000000183236c18 ^ uVar3) + 0x7fff ^ 0xe133d7dfa04a1a66;
  uRam0000000183236b60 = (uRam0000000183236b60 * -0x4e4099304415c239 ^ uRam0000000183236c18) + uVar3
  ;
  uRam0000000183236c78 = uRam0000000183236b60 ^ uRam0000000183236c18;
  uRam00000001832369e8 = 0x7fff;
  uVar3 = (~uRam0000000183236af8 + 0xbf3444cac2da93be) *
          ((uRam0000000183236960 ^ 0xbf3444ca46f8b098) +
          (uRam0000000183236960 & 0x3f3444ca46f8b098) * 2);
  uVar3 = (uVar3 | uRam0000000183236748) + (uVar3 & uRam0000000183236748);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183236c70 =
       func_0x000189a46e70((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam0000000183236c40 =
       uRam0000000183236c40 ^ uRam0000000183236c70 & 0x7fffffffffffffff ^ 0xb7c9bfe3610a230c;
  uRam0000000183236960 =
       (uRam0000000183236960 * -0x6b2740f93a415319 ^ uRam0000000183236c40) +
       (uRam0000000183236c70 & 0x7fffffffffffffff);
  uRam0000000183236cc8 = uRam0000000183236960 ^ uRam0000000183236c40;
  uRam0000000183236c58 = 0;
  uRam00000001832369c0 = func_0x000189a46e70(uRam0000000183236af8 + 0xffcc007c46001dff ^ 0x4f);
  auVar10 = _UNK_1800170c0;
  uVar3 = uRam00000001832369c0 & 0xfffffffffe000000;
  uRam0000000183236960 = uRam0000000183236a80 ^ uVar3 ^ 0x7fff;
  uRam0000000183236778 = (uRam0000000183236778 ^ uVar3) + 0x7fff ^ 0x2f49d0faa388f5d5;
  uRam00000001832369e0 = (uRam00000001832369e0 * 0x25f2c28b2bfa5869 ^ uRam0000000183236778) + uVar3;
  uRam0000000183236ac0 = uRam00000001832369e0 ^ uRam0000000183236778;
  auVar8._8_8_ = _UNK_18019c088;
  auVar8._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183236ab0 = 0x7fff;
  auVar7 = pshufb(auVar8 ^ _UNK_181490350,_UNK_1800170c0);
  uVar11 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar11 + uRam00000001832367c8;
  if (auVar7._4_4_ < 0) {
    uVar3 = uRam0000000183236988 ^ uVar11;
  }
  uRam0000000183236ce8 = func_0x000189a46e70(SUB161(auVar8 ^ _UNK_181490350,5) ^ uVar3);
  uVar3 = ((param_4 | 0x7fff) ^ uRam0000000183236ce8) & 0x3ffffffffffffff;
  uVar4 = (uint)param_4 & 0x7fff;
  uVar11 = (ulonglong)uVar4;
  uRam00000001832367b8 = (uRam00000001832367b8 ^ uVar3) + uVar11 ^ 0x5437f809fdb3b586;
  uRam0000000183236820 = (uRam0000000183236820 * 0x204e4cce256795d3 ^ uRam00000001832367b8) + uVar3;
  uRam0000000183236b68 = uRam0000000183236820 ^ uRam00000001832367b8;
  param_3 = param_3 & 0xffffffff;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar4 ^ 0x84222325;
  auVar7._8_8_ = param_3;
  auVar8 = pshufb(auVar7 ^ _UNK_181490360,auVar10);
  uVar6 = auVar8._8_8_ + auVar8._0_8_;
  uVar3 = uVar6 + uRam00000001832367b8;
  if (auVar8._4_4_ < 0) {
    uVar3 = uRam0000000183236bf8 ^ uVar6;
  }
  uRam0000000183236a78 = uVar11;
  uRam0000000183236708 = func_0x000189a46e70(SUB161(auVar7 ^ _UNK_181490360,5) ^ uVar3);
  uVar3 = (((uVar11 | param_3) ^ uRam0000000183236708) << 0x1b | uRam0000000183236708 >> 0x25) ^
          param_3;
  uVar11 = uVar11 ^ param_3;
  uRam00000001832368d0 = (uRam00000001832368d0 ^ uVar3) + uVar11 ^ 0x3ec0a6bd089c09ab;
  uRam0000000183236a70 = (uRam0000000183236a70 * 0x29cb57340d7f8b5 ^ uRam00000001832368d0) + uVar3;
  uRam0000000183236950 = uRam0000000183236a70 ^ uRam00000001832368d0;
  uRam00000001832367f0 = uVar11;
  uRam0000000183236b50 = func_0x000189a46e70(uRam0000000183236ab0 ^ 0x3f0013d400de87);
  uVar3 = (uRam0000000183236b50 ^ 0x15fc308d00000000) & 0xffffffff80000000 ^ 0x956a6623;
  uRam0000000183236890 = (uRam0000000183236890 ^ uVar3) + 0xb0c164d1 ^ 0xb098885084821b32;
  uRam0000000183236a10 = (uRam0000000183236a10 * 0x71c6fce0c3b9836f ^ uRam0000000183236890) + uVar3;
  uRam0000000183236c18 = uRam0000000183236a10 ^ uRam0000000183236890;
  uRam0000000183236ae0 = 0xb0c164d1;
  uVar3 = (uRam0000000183236b28 ^ _UNK_181490370) + uRam0000000183236808 + 0x842241da;
  uVar6 = (uRam0000000183236808 ^ _UNK_181490378) + uRam0000000183236b28 + 0xdef3806c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236b28 ^ _UNK_181490370;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183236808 ^ _UNK_181490378;
  uRam0000000183236780 =
       func_0x000189a46e70((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183236b28 + 0xdef3806c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236808 + 0x842241da));
  uVar3 = (ulonglong)(~(uint)uRam0000000183236780 & 0x62ff);
  uRam00000001832367d0 = uRam0000000183236920 ^ uVar3 ^ 0xdef3e36b;
  uRam0000000183236930 = (uRam0000000183236930 ^ uVar3) + 0xdef3e36b ^ 0x901098ff201dfdb5;
  uRam0000000183236cb8 = (uRam0000000183236cb8 * 0x284006df04eedc21 ^ uRam0000000183236930) + uVar3;
  uRam0000000183236710 = uRam0000000183236cb8 ^ uRam0000000183236930;
  uRam00000001832367a0 = 0xdef3e36b;
  uRam0000000183236cb8 = func_0x000189a46e70(uRam0000000183236888 ^ 0xff54fff6c600a4d7);
  uVar3 = uRam0000000183236cb8 ^ 0xdef3e36b;
  uRam0000000183236ae8 = uRam0000000183236a30 ^ uVar3 ^ 0x1000062ff;
  uRam0000000183236b98 = (uRam0000000183236b98 ^ uVar3) + 0x1000062ff ^ 0x2bbe3b10f6adb6cc;
  uRam00000001832368b0 = (uRam00000001832368b0 * -0x431dbeffe03dc043 ^ uRam0000000183236b98) + uVar3
  ;
  uRam00000001832367a0 = uRam00000001832368b0 ^ uRam0000000183236b98;
  uRam0000000183236720 = 0x62ff;
  uVar3 = (uRam0000000183236ad8 ^ _UNK_181490380) + uRam00000001832367b8 + 0x84222325;
  uVar6 = (uRam00000001832367b8 ^ _UNK_181490388) + uRam0000000183236ad8 + 0x518b03ef;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236ad8 ^ _UNK_181490380;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832367b8 ^ _UNK_181490388;
  uRam0000000183236c20 =
       func_0x000189a46e70((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183236ad8 + 0x518b03ef) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832367b8 + 0x84222325));
  uVar3 = (uRam0000000183236c20 ^ 0x40000000) >> 9 & 0x1fffffffe00000;
  uRam00000001832367a8 = (uRam00000001832367a8 ^ uVar3) - 0x518b03ef ^ 0xde6efd22d9713689;
  uRam0000000183236c40 = (uRam0000000183236c40 * -0x33977acc13eabf11 ^ uRam00000001832367a8) + uVar3
  ;
  uRam0000000183236750 = uRam0000000183236c40 ^ uRam00000001832367a8;
  uRam0000000183236cc8 = 0xae74fc11;
  uVar3 = (~uRam0000000183236b38 + 0x518b03f0) *
          ((uRam0000000183236c40 ^ 0x842241da) +
          (ulonglong)((uint)uRam0000000183236c40 & 0x842241da) * 2);
  uVar3 = (uVar3 | uRam0000000183236838) + (uVar3 & uRam0000000183236838);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832369b8 =
       func_0x000189a46e70((uVar3 | 0xd5a94235) + (ulonglong)((uint)uVar3 & 0xd5a94235));
  uVar3 = (ulonglong)(~(uint)uRam00000001832369b8 & 0x62ff);
  uRam0000000183236708 = uRam0000000183236b40 ^ uVar3 ^ 0x518b66ee;
  uRam0000000183236ce0 = (uRam0000000183236ce0 ^ uVar3) + 0x518b66ee ^ 0xb2cc2ae729887d68;
  uRam0000000183236ac8 = (uRam0000000183236ac8 * 0x3f0c6a8c88987e45 ^ uRam0000000183236ce0) + uVar3;
  uRam0000000183236c90 = uRam0000000183236ac8 ^ uRam0000000183236ce0;
  uRam0000000183236790 = 0x518b66ee;
  uVar3 = (uRam0000000183236c20 ^ _UNK_181490390) + uRam0000000183236868 + 0xd5a945cb;
  uVar6 = (uRam0000000183236868 ^ _UNK_181490398) + uRam0000000183236c20 + 0xae74fc11;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236c20 ^ _UNK_181490390;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183236868 ^ _UNK_181490398;
  uRam0000000183236718 =
       func_0x000189a46e70((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183236c20 + 0xae74fc11) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236868 + 0xd5a945cb));
  uVar3 = uRam0000000183236718 ^ 0xfffffeff;
  uVar3 = (uVar3 << 0x2b | uVar3 >> 0x15) << 0xb | (uVar3 & 0x1fffff) >> 10;
  uRam0000000183236bb0 = uRam00000001832369d0 ^ uVar3 ^ 0x1000062ff;
  uRam00000001832368d8 = (uRam00000001832368d8 ^ uVar3) + 0x1000062ff ^ 0x5e65f312217daa07;
  uRam0000000183236728 = (uRam0000000183236728 * -0x4acc5cb7f96c097d ^ uRam00000001832368d8) + uVar3
  ;
  uRam00000001832368f8 = uRam0000000183236728 ^ uRam00000001832368d8;
  uRam00000001832369b0 = 0x62ff;
  uVar3 = (~uRam0000000183236980 + 0xd48e1fdb) *
          ((uRam0000000183236960 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183236960 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183236a78) + (uVar3 & uRam0000000183236a78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183236b28 =
       func_0x000189a46e70((uVar3 | 0x50ac3cff) + (ulonglong)((uint)uVar3 & 0x50ac3cff));
  uVar3 = uRam0000000183236b28 >> 1 | uRam0000000183236b28;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uRam0000000183236b28) & 0x7fffffffffffffff;
  uRam00000001832369e0 = (uRam00000001832369e0 ^ uVar3) - 0xd48e1fda ^ 0xb26993740dba785e;
  uRam0000000183236c38 = (uRam0000000183236c38 * -0xf428e41f78928af ^ uRam00000001832369e0) + uVar3;
  uRam0000000183236b80 = uRam0000000183236c38 ^ uRam00000001832369e0;
  uRam0000000183236920 = 0x2b71e026;
  uVar3 = (~uRam0000000183236a90 + 0xd48e1fdb) *
          ((uRam0000000183236a38 ^ 0x842241da) +
          (ulonglong)((uint)uRam0000000183236a38 & 0x842241da) * 2);
  uVar3 = (uVar3 | uRam0000000183236880) + (uVar3 & uRam0000000183236880);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183236878 =
       func_0x000189a46e70((uVar3 | 0x50ac5e00) + (ulonglong)((uint)uVar3 & 0x50ac5e00));
  uVar3 = uRam0000000183236878 - (uRam0000000183236878 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = (ulonglong)(~((uint)uRam0000000183236878 ^ (uint)bVar1 + (uint)bVar1) & 0x62ff);
  uRam00000001832369c8 = uRam0000000183236980 ^ uVar3 ^ 0xd48e82d9;
  uRam0000000183236af0 = (uRam0000000183236af0 ^ uVar3) + 0xd48e82d9 ^ 0x907ab3e741f55e1f;
  uRam0000000183236a08 = (uRam0000000183236a08 * 0x1f53b5697e1f9fb3 ^ uRam0000000183236af0) + uVar3;
  uRam0000000183236860 = uRam0000000183236a08 ^ uRam0000000183236af0;
  uRam0000000183236748 = 0xd48e82d9;
  uVar3 = (uRam0000000183236c50 ^ _UNK_1814903a0) + uRam0000000183236940 + 0x50aca1fc;
  uVar6 = (uRam0000000183236940 ^ _UNK_1814903a8) + uRam0000000183236c50 + 0x2b71e026;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236c50 ^ _UNK_1814903a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183236940 ^ _UNK_1814903a8;
  uRam0000000183236960 =
       func_0x000189a46e70((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183236c50 + 0x2b71e026) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236940 + 0x50aca1fc));
  uVar3 = (uRam0000000183236960 << 0x39 | (uRam0000000183236960 & 0x3fffffffffff) >> 7) ^ 0xd48e82d9
  ;
  uRam0000000183236c18 = uRam0000000183236a40 ^ uVar3 ^ 0x1000062ff;
  uRam0000000183236c08 = (uRam0000000183236c08 ^ uVar3) + 0x1000062ff ^ 0xcf52bc6bfdf65828;
  uRam0000000183236b08 = (uRam0000000183236b08 * -0x50cac140da381d01 ^ uRam0000000183236c08) + uVar3
  ;
  uRam0000000183236998 = uRam0000000183236b08 ^ uRam0000000183236c08;
  uRam0000000183236b78 = 0x62ff;
  uVar3 = (uRam0000000183236b88 ^ _UNK_1814903b0) + uRam0000000183236820 + 0x9bd5eccc;
  uVar6 = (uRam0000000183236820 ^ _UNK_1814903b8) + uRam0000000183236b88 + 0xb0c164d1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236b88 ^ _UNK_1814903b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183236820 ^ _UNK_1814903b8;
  uRam0000000183236b38 =
       func_0x000189a46e70((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183236b88 + 0xb0c164d1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236820 + 0x9bd5eccc));
  uVar3 = uRam0000000183236b38 << 5 | uRam0000000183236b38 >> 0x3b;
  uRam00000001832367b8 = (uRam00000001832367b8 ^ uVar3) + 0xaf36ab38 ^ 0x7f8b817991ac5d25;
  uRam00000001832368b0 = (uRam00000001832368b0 * -0x37717c50a3f1fe41 ^ uRam00000001832367b8) + uVar3
  ;
  uRam0000000183236b40 = uRam00000001832368b0 ^ uRam00000001832367b8;
  uRam00000001832369d8 = 0xaf36ab38;
  uVar3 = (~uRam0000000183236790 + 0xb0c164d2) *
          ((uRam0000000183236738 ^ 0x9bd5eccc) +
          (ulonglong)((uint)uRam0000000183236738 & 0x9bd5eccc) * 2);
  uVar3 = (uVar3 | uRam0000000183236848) + (uVar3 & uRam0000000183236848);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x000189a46e70((uVar3 | 0x2b14881d) + (ulonglong)((uint)uVar3 & 0x2b14881d));
  uRam0000000183236800 =
       (uRam0000000183236800 ^ uVar3 ^ 0xb0c164d1) + 0x10c144c1 ^ 0xd0a77cddf5a1ffab;
  uRam0000000183236b40 =
       (uRam0000000183236b40 * 0x412d6c8828f8ae03 ^ uRam0000000183236800) + (uVar3 ^ 0xb0c164d1);
  uRam0000000183236968 = uRam0000000183236b40 ^ uRam0000000183236800;
  uRam0000000183236a10 = 0x10c144c1;
  uRam0000000183236780 = func_0x000189a46e70(uRam00000001832369e8 ^ 0x1000677008df5);
  uVar3 = (uRam0000000183236780 ^ 0xaf36ab38) << 0x32 | (uRam0000000183236780 ^ 0xaf36ab38) >> 0xe;
  uRam0000000183236cd0 = (uRam0000000183236cd0 ^ uVar3) + 0xd0b934ba ^ 0x17ff7e0a510d6dfe;
  uRam0000000183236828 = (uRam0000000183236828 * 0x36274f465654cf57 ^ uRam0000000183236cd0) + uVar3;
  uRam0000000183236938 = uRam0000000183236828 ^ uRam0000000183236cd0;
  uRam0000000183236710 = 0xd0b934ba;
  uVar3 = (uRam0000000183236830 ^ _UNK_1814903c0) + uRam0000000183236ac0 + 0x549b179f;
  uVar6 = (uRam0000000183236ac0 ^ _UNK_1814903c8) + uRam0000000183236830 + 0xd0b934ba;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236830 ^ _UNK_1814903c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183236ac0 ^ _UNK_1814903c8;
  uRam0000000183236cf0 =
       func_0x000189a46e70((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183236830 + 0xd0b934ba) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236ac0 + 0x549b179f));
  uVar3 = uRam0000000183236cf0 - (uRam0000000183236cf0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam0000000183236770 =
       (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
       uRam0000000183236cf0;
  uRam0000000183236b80 = uRam0000000183236b80 ^ uRam0000000183236770 ^ 0x8a77c216457cd37f;
  uRam0000000183236970 =
       (uRam0000000183236970 * -0x3db8008c8612bbaf ^ uRam0000000183236b80) + uRam0000000183236770;
  uRam0000000183236c00 = uRam0000000183236970 ^ uRam0000000183236b80;
  uRam0000000183236aa8 = 0;
  uVar3 = ((uRam0000000183236b00 ^ 0x842241da) +
          (ulonglong)((uint)uRam0000000183236b00 & 0x842241da) * 2) * -lRam0000000183236990;
  uVar3 = (uVar3 | uRam0000000183236920) + (uVar3 & uRam0000000183236920);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183236968 =
       func_0x000189a46e70((uVar3 | 0x842241da) + (ulonglong)((uint)uVar3 & 0x842241da));
  uVar4 = ~(uint)uRam0000000183236b38 & 0x62ff;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar3 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          (ulonglong)uVar4;
  uRam0000000183236c90 = uRam0000000183236978 ^ uVar3 ^ 0x62ff;
  uRam0000000183236b78 = (uRam0000000183236b78 ^ uVar3) + 0x62ff ^ 0x2a92aa478ecffd2d;
  uRam00000001832367e8 = (uRam00000001832367e8 * -0xabf41a4d224401 ^ uRam0000000183236b78) + uVar3;
  uRam0000000183236760 = uRam00000001832367e8 ^ uRam0000000183236b78;
  uRam0000000183236790 = uRam00000001832367d0 ^ 0x62ff;
  uRam0000000183236c88 = 0x62ff;
  uVar3 = (uRam0000000183236cc8 ^ _UNK_1814903d0) + uRam0000000183236a78 + 0x9bd5eccc;
  uVar6 = (uRam0000000183236a78 ^ _UNK_1814903d8) + uRam0000000183236cc8 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183236cc8 ^ _UNK_1814903d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183236a78 ^ _UNK_1814903d8;
  uRam0000000183236850 =
       func_0x000189a46e70((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183236cc8 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183236a78 + 0x9bd5eccc));
  uRam0000000183236bc0 =
       (uRam0000000183236bc0 ^ uRam0000000183236850) + 0xe0083016 ^ 0x4e5a9ddff5961aa;
  uRam0000000183236af8 =
       (uRam0000000183236af8 * 0x6d87012021b2c0a5 ^ uRam0000000183236bc0) + uRam0000000183236850;
  uRam0000000183236c50 = uRam0000000183236af8 ^ uRam0000000183236bc0;
  uRam0000000183236a80 = 0xe0083016;
  uVar3 = ((uRam0000000183236750 ^ 0x842241da) +
          (ulonglong)((uint)uRam0000000183236750 & 0x842241da) * 2) * -uRam00000001832367d8;
  uVar3 = (uVar3 | uRam0000000183236a60) + (uVar3 & uRam0000000183236a60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x000189a46e70((uVar3 | 0x842241da) + (ulonglong)((uint)uVar3 & 0x842241da));
  uVar3 = uVar3 & 0x7fffffffffffffff;
  uRam0000000183236aa8 = uRam0000000183236b18 ^ uVar3 ^ 0x62ff;
  uRam0000000183236750 = (uRam0000000183236750 ^ uVar3) + 0x62ff ^ 0x40d98764a863961f;
  uRam0000000183236848 = (uRam0000000183236848 * -0x66beda10c10aa71b ^ uRam0000000183236750) + uVar3
  ;
  uRam0000000183236a80 = uRam0000000183236848 ^ uRam0000000183236750;
  uRam0000000183236a78 = 0x62ff;
  uRam0000000183236b50 = func_0x000189a46e70(uRam0000000183236a90 ^ 0xffe1008424ffe1fc);
  uRam00000001832369c8 =
       uRam00000001832369c8 ^ uRam0000000183236c98 & 0x1fffffffffff ^ 0x360060ea38e2e130;
  uRam00000001832368a8 =
       (uRam00000001832368a8 * 0x618eef9d8aae36bf ^ uRam00000001832369c8) +
       (uRam0000000183236c98 & 0x1fffffffffff);
  uRam0000000183236a38 = uRam00000001832368a8 ^ uRam00000001832369c8;
  auVar9._8_8_ = _UNK_1814903e8;
  auVar9._0_8_ = uVar11 ^ 0x84222325;
  uRam0000000183236b30 = 0;
  auVar10 = pshufb(auVar9 ^ _UNK_1814903f0,auVar10);
  uVar6 = auVar10._8_8_ + auVar10._0_8_;
  uVar3 = uVar6 + uRam00000001832367f0;
  if (auVar10._4_4_ < 0) {
    uVar3 = uRam0000000183236760 ^ uVar6;
  }
  uRam0000000183236980 = func_0x000189a46e70(SUB161(auVar9 ^ _UNK_1814903f0,5) ^ uVar3);
  uRam0000000183236890 = uVar11 ^ 0x62ff;
  uRam00000001832367a0 =
       (uRam00000001832367a0 ^ uRam0000000183236980 & 0x7fffffffffffffff) + uRam0000000183236890 ^
       0xd3846d9d0cc914f7;
  uRam00000001832369c0 =
       (uRam00000001832369c0 * 0x1363034535085dff ^ uRam00000001832367a0) +
       (uRam0000000183236980 & 0x7fffffffffffffff);
  uRam0000000183236ca8 = uRam00000001832369c0 ^ uRam00000001832367a0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x164d5,0x3af)
      /* POOL[0x164d5,0x3af]: o/hL; | SREhy | KThVk | tAJxG | bfk | bfl | sixtwo/hU$tC | cXzpU | dpC | ZHKIS | REDLI | qGwMH | subList | (II)Ljava/util/List; | bfK | dpD | sixtwo/hU$tD | Ktmcl | dpH | XkoLj | GTcDz | bgk | ()Lsixtwo/hY; | bfp | bgj | (Lsixtwo/hZ;)Lsixtwo/hY; | bfq | bfr | bfs | bft | bfM | (Lsixtwo/hU;)V | bfv | ()Lsixtwo/cX; | bfu | aam | aao | ()Lsixtwo/cX$ss; | sixtwo/cX$ss | aap | bfx | (Lnet/minecraft/class_1268;)Ljava/lang/String; | hashCode | (Lsixtwo/hU;Ljava/util/List;)V | bdZ | ()Lsixtwo/hL; | RymlV | Lsixtwo/cX$ss; | vNDXP | uksqJ | aas | (Lsixtwo/cX$ss;Lnet/minecraft/class_1268;)V | bfz | ()Lsi */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189a3df32 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18148e4b0 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/hU$tC; dpE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 189a46f00, runtime 6ffff1656f00) =====

void FUN_189a46f00(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000189a46f4b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181490520 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/hU$tC; dpF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 189a47f10, runtime 6ffff1657f10) =====

void FUN_189a47f10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189a47f99 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181490ae0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/hU$tC; suggestions (Ljava/lang/String;)Ljava/util/List; (handler @ image 189a25770, runtime 6ffff1635770) =====

void FUN_189a25770(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x164d5,0x3af)
      /* POOL[0x164d5,0x3af]: o/hL; | SREhy | KThVk | tAJxG | bfk | bfl | sixtwo/hU$tC | cXzpU | dpC | ZHKIS | REDLI | qGwMH | subList | (II)Ljava/util/List; | bfK | dpD | sixtwo/hU$tD | Ktmcl | dpH | XkoLj | GTcDz | bgk | ()Lsixtwo/hY; | bfp | bgj | (Lsixtwo/hZ;)Lsixtwo/hY; | bfq | bfr | bfs | bft | bfM | (Lsixtwo/hU;)V | bfv | ()Lsixtwo/cX; | bfu | aam | aao | ()Lsixtwo/cX$ss; | sixtwo/cX$ss | aap | bfx | (Lnet/minecraft/class_1268;)Ljava/lang/String; | hashCode | (Lsixtwo/hU;Ljava/util/List;)V | bdZ | ()Lsixtwo/hL; | RymlV | Lsixtwo/cX$ss; | vNDXP | uksqJ | aas | (Lsixtwo/cX$ss;Lnet/minecraft/class_1268;)V | bfz | ()Lsi */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189a25876 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181487e70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/hU$tC; validate (Ljava/lang/String;)Lsixtwo/hJ; (handler @ image 189a25560, runtime 6ffff1635560) =====

void FUN_189a25560(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15e77,0x397)
      /* POOL[0x15e77,0x397]: sixtwo/mr;)V | baH | ()[Lsixtwo/gh; | sixtwo/hJ$tx | value | sixtwo/hJ$ty | message | sixtwo/hL$tz | ussFH | Lsixtwo/hK; | sixtwo/hK | validate | (Ljava/lang/String;)Lsixtwo/hJ; | sixtwo/hL | beg | CLLeY | sixtwo/hL$tA | fLZhy | bel | PfxnI | equalsIgnoreCase | dpw | nlvqT | vIVbz | dpx | iCMch | PtCKH | YYaWA | (Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object; | wLPMv | fsmyb | java/util/stream/Collectors | joining | (Ljava/lang/CharSequence;)Ljava/util/stream/Collector; | collect | (Ljava/util/stream/Collector;)Ljava/lang/Object; | (Lsixtwo/hL;Ljava/util/List;Ljava/lang/String;)V | be */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000189a255ad did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181487d70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x9a255b0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a255b0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181487de8)();
  return;
}


// ----- block @ rva 0x9a255cf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a255cf(void)

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


// ----- block @ rva 0x9a25628 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a25628(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9a2563e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a2563e(void)

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


// ----- block @ rva 0x9a25677 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a25677(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181487dd8)();
  return;
}


// ----- block @ rva 0x9a25692 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a25692(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (*_DAT_181487d88)();
  return;
}


// ----- block @ rva 0x9a256ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a256ba(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    (*_DAT_181487da8)();
    return;
  }
  (*_DAT_181487da8)();
  return;
}


// ----- block @ rva 0x9a256d5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a256d5(void)

{
  (*_DAT_181487da8)();
  return;
}


// ----- block @ rva 0x9a256dd -----

void FUN_189a256dd(void)

{
  return;
}


// ----- block @ rva 0x9a256e5 -----

void FUN_189a256e5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9a25879 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a25879(void)

{
  FUN_190ddce00();
  (*_DAT_181488b08)();
  return;
}


// ----- block @ rva 0x9a29dbc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a29dbc(void)

{
  char cVar1;
  longlong *in_stack_00000048;
  undefined8 in_stack_000000a8;
  
  FUN_184117d50(in_stack_00000048,in_stack_000000a8);
  cVar1 = (**(code **)(in_stack_00000048 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000048);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9a2a386 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a2a386(void)

{
  longlong *in_stack_00000048;
  undefined8 in_stack_000000b0;
  
  (**(code **)(in_stack_00000048 + JNI->NewObjectArray /*0x560*/))(in_stack_00000048,6,in_stack_000000b0,0);
  (*_DAT_181489e58)();
  return;
}


// ----- block @ rva 0x9a3248c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3248c(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->SetObjectArrayElement /*0x570*/))(in_stack_00000048);
  (*_DAT_181488528)();
  return;
}


// ----- block @ rva 0x9a32c20 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a32c20(void)

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


// ----- block @ rva 0x9a3420f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3420f(void)

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


// ----- block @ rva 0x9a34311 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a34311(void)

{
  (*_DAT_18148b508)();
  return;
}


// ----- block @ rva 0x9a3538a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3538a(void)

{
  (*_DAT_18148b648)();
  return;
}


// ----- block @ rva 0x9a35400 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a35400(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181488838)();
  return;
}


// ----- block @ rva 0x9a35b18 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a35b18(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181488288)();
  return;
}


// ----- block @ rva 0x9a3705a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3705a(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000048);
  FUN_190dd72e0(in_stack_00000048,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18148a8b8)();
  return;
}


// ----- block @ rva 0x9a3bc30 -----

void FUN_189a3bc30(void)

{
  return;
}


// ----- block @ rva 0x9a3bc9c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3bc9c(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(in_stack_00000048 + JNI->Throw /*0x68*/))();
  (*_DAT_18148b4e8)();
  return;
}


// ----- block @ rva 0x9a3bcaf -----

void FUN_189a3bcaf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9a3df35 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3df35(void)

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


// ----- block @ rva 0x9a3e007 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3e007(void)

{
  char cVar1;
  longlong *unaff_R12;
  
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


// ----- block @ rva 0x9a3e045 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3e045(void)

{
  int iVar1;
  longlong *unaff_R12;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(unaff_R12 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9a3e0d4 -----

void FUN_189a3e0d4(void)

{
  return;
}


// ----- block @ rva 0x9a3e45c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3e45c(void)

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


// ----- block @ rva 0x9a3eb97 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3eb97(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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


// ----- block @ rva 0x9a3ebe7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3ebe7(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000086;
  
  uStack0000000000000086 = in_stack_00000058;
  (**(code **)(in_stack_00000030 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9a3ed58 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3ed58(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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


// ----- block @ rva 0x9a3edad -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a3edad(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000084;
  
  uStack0000000000000084 = in_stack_00000058;
  (**(code **)(in_stack_00000030 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9a3fec4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a3fec4(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190de3220(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0xb5e,*_DAT_18301ee50 + 0xbe7,
                0x37);
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


// ----- block @ rva 0x9a400ff -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a400ff(void)

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


// ----- block @ rva 0x9a4684b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4684b(void)

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


// ----- block @ rva 0x9a46902 -----

undefined8 thunk_FUN_189a3f128(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x9a46f4e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a46f4e(void)

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


// ----- block @ rva 0x9a46f87 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a46f87(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1814909d8)();
  return;
}


// ----- block @ rva 0x9a46fa2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a46fa2(void)

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


// ----- block @ rva 0x9a474c9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a474c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181490a48)();
  return;
}


// ----- block @ rva 0x9a4754b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4754b(void)

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


// ----- block @ rva 0x9a47633 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a47633(void)

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


// ----- block @ rva 0x9a476eb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a476eb(void)

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


// ----- block @ rva 0x9a47a3b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a47a3b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181490a88)();
  return;
}


// ----- block @ rva 0x9a47b98 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a47b98(void)

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


// ----- block @ rva 0x9a47de1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a47de1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1814905b8)();
  return;
}


// ----- block @ rva 0x9a47e15 -----

void FUN_189a47e15(void)

{
  return;
}


// ----- block @ rva 0x9a47e24 -----

void FUN_189a47e24(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9a47f9c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a47f9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181490c48)();
  return;
}


// ----- block @ rva 0x9a4853a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4853a(void)

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


// ----- block @ rva 0x9a485e1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a485e1(void)

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


// ----- block @ rva 0x9a48741 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a48741(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181491288)();
  return;
}


// ----- block @ rva 0x9a48ecb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a48ecb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1814912a8)();
  return;
}


// ----- block @ rva 0x9a48ffd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a48ffd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1814917c8)();
  return;
}


// ----- block @ rva 0x9a4915c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4915c(void)

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


// ----- block @ rva 0x9a498c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a498c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181491598)();
  return;
}


// ----- block @ rva 0x9a49f3e -----

void FUN_189a49f3e(void)

{
  return;
}


// ----- block @ rva 0x9a4a55f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a4a55f(void)

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


// ----- block @ rva 0x9a4aa7c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a4aa7c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1814914b8)();
  return;
}


// ----- block @ rva 0x9a4aae2 -----

void FUN_189a4aae2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x9a4ad1b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189a4ad71 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189a4ad1b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x9a4b19f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189a4b1bd */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189a4b19f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x9a4b226 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189a4b23d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189a4b226(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x9a55ad3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a55ad3(void)

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


// ----- block @ rva 0x9a57164 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a57164(uint param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong in_stack_00000058;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  _DAT_183236e30 = func_0x000189a5e100(_DAT_183237010 ^ 0xfffc00ba1200c81f);
  uVar3 = _DAT_183236e30 << 0x37 | _DAT_183236e30 >> 9;
  _DAT_1832370a8 = _DAT_183236d10 ^ uVar3 ^ 0x4efb28cb;
  _DAT_183237000 = (_DAT_183237000 ^ uVar3) + 0x4efb28cb ^ 0x5392237d1ca45143;
  _DAT_183237030 = (_DAT_183237030 * 0xc5836d72bc47b9d ^ _DAT_183237000) + uVar3;
  _DAT_183236fd8 = _DAT_183237030 ^ _DAT_183237000;
  _DAT_183236f70 = 0x4efb28cb;
  _DAT_183236d88 = func_0x000189a5e100(_DAT_183237040 ^ 0xb9ffdf5d008c76);
  uVar3 = _DAT_183236d88 - (_DAT_183236d88 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183236d88;
  _DAT_183236ff0 = (_DAT_183236ff0 ^ uVar3) - 0xa4b7e9c8 ^ 0x892f66b45ee488a8;
  _DAT_183236db8 = (_DAT_183236db8 * -0x3b8e1a324c37c6f7 ^ _DAT_183236ff0) + uVar3;
  _DAT_183236dd0 = _DAT_183236db8 ^ _DAT_183236ff0;
  _DAT_183236ff8 = 0x5b481638;
  _DAT_1832370b8 = func_0x000189a5e100(_DAT_183236d20 ^ 0xba001fedff74dc);
  _DAT_183237030 = _DAT_183236e98 ^ _DAT_1832370b8 ^ 0xa4b7eac7;
  _DAT_183236ec8 = (_DAT_183236ec8 ^ _DAT_1832370b8) + 0xa4b7eac7 ^ 0x68ebf2893f888eda;
  _DAT_183236e80 = (_DAT_183236e80 * -0x74b63a496504c4df ^ _DAT_183236ec8) + _DAT_1832370b8;
  _DAT_183236d60 = _DAT_183236e80 ^ _DAT_183236ec8;
  _DAT_183236fa8 = 0xa4b7eac7;
  uVar3 = (_DAT_183236d20 ^ _DAT_1814931f0) + _DAT_183236dd0 + 0x2095c9e2;
  uVar7 = (_DAT_183236dd0 ^ _UNK_1814931f8) + _DAT_183236d20 + 0x5b481638;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236d20 ^ _DAT_1814931f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183236dd0 ^ _UNK_1814931f8;
  _DAT_183236fa8 =
       func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183236d20 + 0x5b481638) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183236dd0 + 0x2095c9e2));
  uVar3 = _DAT_183236fa8 ^ 0x3abbc27a3fd79f4f;
  _DAT_183236da0 = _DAT_183236df8 ^ uVar3 ^ 0x1000000ff;
  _DAT_183236d48 = (_DAT_183236d48 ^ uVar3) + 0x1000000ff ^ 0x2331588cdcf1d8f6;
  _DAT_183236d70 = (_DAT_183236d70 * -0x3f5b6e2263269875 ^ _DAT_183236d48) + uVar3;
  _DAT_183236fb8 = _DAT_183236d70 ^ _DAT_183236d48;
  _DAT_183236ff0 = 0xff;
  uVar3 = (_DAT_183236f70 ^ _DAT_181493200) + _DAT_1832370a0 + 0x842223da;
  uVar7 = (_DAT_1832370a0 ^ _UNK_181493208) + _DAT_183236f70 + 0x329b352e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236f70 ^ _DAT_181493200;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832370a0 ^ _UNK_181493208;
  _DAT_183236fe8 =
       func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183236f70 + 0x329b352e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832370a0 + 0x842223da));
  uVar3 = _DAT_183236fe8 ^ 0x326899f82d;
  _DAT_183236ef8 = _DAT_183236ed8 ^ uVar3 ^ 0x329b362d;
  _DAT_183236ea0 = (_DAT_183236ea0 ^ uVar3) + 0x329b362d ^ 0xcca8735519f934c9;
  _DAT_1832370b8 = (_DAT_1832370b8 * -0x2404ae0a3c31cb41 ^ _DAT_183236ea0) + uVar3;
  _DAT_183237060 = _DAT_1832370b8 ^ _DAT_183236ea0;
  _DAT_183236fd0 = 0x329b362d;
  _DAT_1832370a0 = func_0x000189a5e100(_DAT_183236ea0 + 0xffbb004b2a004cff ^ 1);
  uVar3 = (_DAT_1832370a0 ^ 0xfffffeff) * 0x4a51ff5449d52d91;
  _DAT_183236ff0 = _DAT_183237038 ^ uVar3 ^ 0x1000000ff;
  _DAT_183236d30 = (_DAT_183236d30 ^ uVar3) + 0x1000000ff ^ 0xec2b31ba0553d222;
  _DAT_183236f68 = (_DAT_183236f68 * 0x250a4a782f7b9e3d ^ _DAT_183236d30) + uVar3;
  _DAT_183236d68 = _DAT_183236f68 ^ _DAT_183236d30;
  _DAT_183236e80 = 0xff;
  uVar3 = (~_DAT_183236f30 + 0x25942100) *
          ((_DAT_183236f70 ^ 0x3b94de7a) + (ulonglong)((uint)_DAT_183236f70 & 0x3b94de7a) * 2);
  uVar3 = (uVar3 | _DAT_183236fb8) + (uVar3 & _DAT_183236fb8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183236d28 = func_0x000189a5e100((uVar3 | 0x1e00fe85) + (ulonglong)((uint)uVar3 & 0x1e00fe85))
  ;
  uVar3 = (_DAT_183236d28 ^ 0xbfb6fdff) << 0xd | _DAT_183236d28 >> 0x33;
  _DAT_1832370a0 = _DAT_183236de8 ^ uVar3 ^ 0xe54b1e5e;
  _DAT_183236d70 = (_DAT_183236d70 ^ uVar3) + 0xe54b1e5e ^ 0x7c989e351c8dc67e;
  _DAT_183236ec8 = (_DAT_183236ec8 * 0x46bf97d594fc807 ^ _DAT_183236d70) + uVar3;
  _DAT_183236e40 = _DAT_183236ec8 ^ _DAT_183236d70;
  _DAT_183236d00 = 0xe54b1e5e;
  uVar3 = (_DAT_183236e80 ^ _DAT_181493210) + _DAT_183237018 + 0x3b94de7a;
  uVar7 = (_DAT_183237018 ^ _UNK_181493218) + _DAT_183236e80 + 0x259420ff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236e80 ^ _DAT_181493210;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183237018 ^ _UNK_181493218;
  _DAT_183236d60 =
       func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183236e80 + 0x259420ff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183237018 + 0x3b94de7a));
  uVar3 = _DAT_183236d60 << 0x3b | _DAT_183236d60 >> 5;
  _DAT_1832370f8 = (_DAT_1832370f8 ^ uVar3) + 0x9a22dda0 ^ 0xe4853ae0e09cb96e;
  _DAT_183236db8 = (_DAT_183236db8 * -0x60a613d96f91c615 ^ _DAT_1832370f8) + uVar3;
  _DAT_183236d00 = _DAT_183236db8 ^ _DAT_1832370f8;
  _DAT_183236f80 = 0x9a22dda0;
  uVar3 = (~_DAT_183236eb0 + 0x25942100) *
          ((_DAT_183236e68 ^ 0x3b94de7a) + (ulonglong)((uint)_DAT_183236e68 & 0x3b94de7a) * 2);
  uVar3 = (uVar3 | _DAT_183236d18) + (uVar3 & _DAT_183236d18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832370b8 = func_0x000189a5e100((uVar3 | 0x1e00fe85) + (ulonglong)((uint)uVar3 & 0x1e00fe85))
  ;
  _DAT_183237058 = (_DAT_183237058 ^ _DAT_1832370b8) + 0x2594205f ^ 0x24cb689daa5e11f;
  _DAT_183236d78 = (_DAT_183236d78 * -0x435983a6ae1a9633 ^ _DAT_183237058) + _DAT_1832370b8;
  _DAT_183237050 = _DAT_183236d78 ^ _DAT_183237058;
  _DAT_183237020 = 0x2594205f;
  uVar3 = (_DAT_183236d20 ^ 0x842223da) + _DAT_183236f80 + 0x842223da;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236d20 ^ 0x842223da;
  uVar7 = ((_DAT_183236f80 + _DAT_183236d20) * 0x2000 | _DAT_183236f80 + _DAT_183236d20 >> 0x33) ^
          _DAT_183236f80;
  _DAT_183237088 =
       func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183236d20 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183236f80 + 0x842223da));
  uVar3 = _DAT_183237088 >> 1 | _DAT_183237088;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183237088;
  _DAT_1832370d8 = _DAT_183237098 ^ uVar3 ^ 0xff;
  _DAT_183236e80 = (_DAT_183236e80 ^ uVar3) + 0xff ^ 0xd992c05c8e3628ee;
  _DAT_183236d60 = (_DAT_183236d60 * 0x63e195bdc45ade39 ^ _DAT_183236e80) + uVar3;
  _DAT_183236fd8 = 0xff;
  uVar3 = (_DAT_183236f00 ^ _DAT_181493220) + _DAT_183236e50 + 0x3b94de7a;
  uVar7 = (_DAT_183236e50 ^ _UNK_181493228) + _DAT_183236f00 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183236f00 ^ _DAT_181493220;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183236e50 ^ _UNK_181493228;
  uVar3 = func_0x000189a5e100((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183236f00 + 0xffffffff) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183236e50 + 0x3b94de7a));
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  _DAT_183237040 =
       (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar3;
  _DAT_183236d40 = (_DAT_183236d40 ^ _DAT_183237040) + 0x404902a0 ^ 0x4974249226d8d5bb;
  _DAT_183237040 = (uVar3 * -0x727684a6ed489f27 ^ _DAT_183236d40) + _DAT_183237040;
  _DAT_183236ff0 = 0x404902a0;
  _DAT_183236db0 = func_0x000189a5e100(_DAT_183236df8 ^ 0xffd3ffe65a0034b2);
  uVar7 = _DAT_183236db0 * 0x551b9c3a4ea78669;
  uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = ((uint)bVar1 + (uint)bVar1 ^ uVar7) << 0x37 | uVar7 >> 9;
  _DAT_183237000 = _DAT_183237000 ^ uVar3 ^ 0x9427344d99749743;
  _DAT_183236e58 = (_DAT_183236e58 * 0x68aee7839ddc686f ^ _DAT_183237000) + uVar3;
  _DAT_183237018 = _DAT_183236e58 ^ _DAT_183237000;
  _DAT_183236ef0 = 0;
  uVar3 = ((_DAT_183236e48 ^ 0x842223da) + (ulonglong)((uint)_DAT_183236e48 & 0x842223da) * 2) *
          -_DAT_183236fc8;
  uVar3 = (uVar3 | _DAT_1832370c8) + (uVar3 & _DAT_1832370c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832370a8 = func_0x000189a5e100((uVar3 | 0x842223da) + (ulonglong)((uint)uVar3 & 0x842223da))
  ;
  uVar3 = _DAT_1832370a8 << 0x1c | _DAT_1832370a8 >> 0x24 & 0xfffffffffe000000;
  _DAT_183236d90 = _DAT_183236e48 ^ uVar3 ^ 0xff;
  _DAT_183236da0 = (_DAT_183236da0 ^ uVar3) + 0xff ^ 0x232567398e49bc50;
  _DAT_183236d30 = (_DAT_183236d30 * 0x7536ad7a89b9d4b7 ^ _DAT_183236da0) + uVar3;
  _DAT_1832370c8 = _DAT_183236d30 ^ _DAT_183236da0;
  _DAT_1832370a0 = 0xff;
  _DAT_183236df8 = func_0x000189a5e100(_DAT_183236e40 ^ 0x20ff7bdd001d19);
  uVar3 = _DAT_183236df8 >> 0x18 & 0xfffffffff;
  _DAT_183237010 = _DAT_183237010 ^ uVar3 ^ 0xc4f41c6bf549e158;
  _DAT_183236f28 = (_DAT_183236f28 * 0x5e2f9556cba86229 ^ _DAT_183237010) + uVar3;
  _DAT_183236de0 = _DAT_183236f28 ^ _DAT_183237010;
  _DAT_183236d98 = 0;
  uVar4 = ((ulonglong)param_1 & 0xff) << 0x28;
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = in_stack_00000058 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_181493230,_DAT_1800170c0);
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar7 + _DAT_183236eb0;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_183236e58 ^ uVar7;
  }
  _DAT_183237080 = func_0x000189a5e100(SUB161(auVar5 ^ _DAT_181493230,5) ^ uVar3);
  uVar7 = _DAT_183237080 * -0x73a1074b75a01443;
  uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar7) &
          0x1ffffffffffffff;
  _DAT_183236da0 = uVar4 | in_stack_00000058;
  _DAT_183236ed8 = (_DAT_183236ed8 ^ uVar3) + _DAT_183236da0 ^ 0x35724e8328cd1aaa;
  _DAT_183236f48 = (_DAT_183236f48 * 0x5e40812370673671 ^ _DAT_183236ed8) + uVar3;
  _DAT_183236ee0 = _DAT_183236f48 ^ _DAT_183236ed8;
  iVar2 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar2 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9a5d378 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a5d378(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9a5d45c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a5d45c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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


// ----- block @ rva 0x9a5d60a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189a5d60a(void)

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


// ----- block @ rva 0x9a5de92 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189a5de92(void)

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


// ----- block @ rva 0x9a5df1d -----

void FUN_189a5df1d(void)

{
  return;
}

