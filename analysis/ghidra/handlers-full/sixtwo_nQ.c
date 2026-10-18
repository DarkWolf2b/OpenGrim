// ===== Lsixtwo/nQ; _18d6c76cceb0d493993e7ca850fba2fe ()V (handler @ image 186a2fd10, runtime 6fffee63fd10) =====

void FUN_186a2fd10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186a2fdf8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180984980 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nQ; cyQ (Lnet/minecraft/class_1703;)I (handler @ image 186a03bb0, runtime 6fffee613bb0) =====

void FUN_186a03bb0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1ccfe,0x486);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186a03c91 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809786c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nQ; cyR ()I (handler @ image 186a0e1e0, runtime 6fffee61e1e0) =====

void FUN_186a0e1e0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1ccfe,0x486);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186a0e2bc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18097ba50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nQ; cyS (Lnet/minecraft/class_1799;)I (handler @ image 186a15d20, runtime 6fffee625d20) =====

void FUN_186a15d20(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1ccfe,0x486);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186a15e01 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18097dde0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nQ; cyT (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 186a20d00, runtime 6fffee630d00) =====

undefined8 FUN_186a20d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/nQ; cyU (IJ)I (handler @ image 186a20d90, runtime 6fffee630d90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186a20d90(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  
  uVar4 = (~uRam0000000183153a90 + 0x9887cb1519a9422e) *
          ((uRam0000000183153800 ^ 0x20bc11faf73b29b) +
          (uRam0000000183153800 & 0x20bc11faf73b29b) * 2);
  uVar4 = (uVar4 | uRam0000000183153830) + (uVar4 & uRam0000000183153830);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831537b8 =
       func_0x000186a2bf60((uVar4 | 0x9a8c0a0ab6daf0b6) + (uVar4 & 0x9a8c0a0ab6daf0b6));
  uVar4 = uRam00000001831537b8 << 0x37 | uRam00000001831537b8 >> 9;
  uRam0000000183153ac8 = (uRam0000000183153ac8 ^ uVar4) + 0x9a8fcb1f3bf9d3bf ^ 0x201969a5419574e9;
  uRam0000000183153928 = (uRam0000000183153928 * 0x4e72adf8194df673 ^ uRam0000000183153ac8) + uVar4;
  uRam0000000183153c20 = uRam0000000183153928 ^ uRam0000000183153ac8;
  uRam0000000183153990 = 0x9a8fcb1f3bf9d3bf;
  uVar4 = (~uRam0000000183153968 + 0x2df54a4dcf70258d) *
          ((uRam0000000183153908 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183153908 & 0x84225cda) * 2);
  uVar4 = (uVar4 | uRam0000000183153a30) + (uVar4 & uRam0000000183153a30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183153a48 =
       func_0x000186a2bf60((uVar4 | 0x2df54a4d4b527956) + (uVar4 & 0x2df54a4d4b527956));
  uVar4 = uRam0000000183153a48 - (uRam0000000183153a48 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183153a48;
  uRam00000001831538e8 = uRam0000000183153bf0 ^ uVar4 ^ 0x2df54a4dcf70a58b;
  uRam0000000183153818 = (uRam0000000183153818 ^ uVar4) + 0x2df54a4dcf70a58b ^ 0x35c00fe1e903cc08;
  uRam0000000183153a30 = (uRam0000000183153a30 * -0x6fb98b8a374e8ae7 ^ uRam0000000183153818) + uVar4
  ;
  uRam0000000183153848 = uRam0000000183153a30 ^ uRam0000000183153818;
  uRam0000000183153810 = 0x2df54a4dcf70a58b;
  uVar4 = (uRam0000000183153ce8 ^ _UNK_1809831c0) + uRam0000000183153ac8 + 0x2df54a4d4b5286ae;
  uVar9 = (uRam0000000183153ac8 ^ _UNK_1809831c8) + uRam0000000183153ce8 + 0xd20ab5b2308fda74;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183153ce8 ^ _UNK_1809831c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183153ac8 ^ _UNK_1809831c8;
  uRam0000000183153b58 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183153ce8 + 0xd20ab5b2308fda74) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183153ac8 + 0x2df54a4d4b5286ae));
  uVar4 = uRam0000000183153b58 & 0xffffffffffe00000;
  uRam00000001831538c8 =
       (uRam0000000183153a78 ^ uVar4 ^ 0x7fff ^ uVar4) + 0x7fff ^ 0x2043c79597d1a293;
  uRam0000000183153820 = (uRam0000000183153820 * 0x429de7f5a94b4cef ^ uRam00000001831538c8) + uVar4;
  uRam00000001831537e0 = uRam0000000183153820 ^ uRam00000001831538c8;
  uRam0000000183153920 = 0x7fff;
  uRam0000000183153ba0 = func_0x000186a2bf60(uRam0000000183153868 ^ 0xf30096cadfc3077b);
  uVar4 = uRam0000000183153ba0 - (uRam0000000183153ba0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183153ba0;
  uRam0000000183153c20 = uRam00000001831538c8 ^ uVar4 ^ 0x10e94513df2addf9;
  uRam0000000183153a20 = (uRam0000000183153a20 ^ uVar4) + 0x10e94513df2addf9 ^ 0xdbdb9e4571b8b277;
  uRam0000000183153748 = (uRam0000000183153748 * -0x2e51418301216991 ^ uRam0000000183153a20) + uVar4
  ;
  uRam00000001831538f0 = uRam0000000183153748 ^ uRam0000000183153a20;
  uRam00000001831538e8 = 0x10e94513df2addf9;
  uVar4 = (uRam00000001831537f0 ^ _UNK_1809831d0) + uRam0000000183153a20 + 0x10e945135b08fedc;
  uVar9 = (uRam0000000183153a20 ^ _UNK_1809831d8) + uRam00000001831537f0 + 0xef16baec20d5a206;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831537f0 ^ _UNK_1809831d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183153a20 ^ _UNK_1809831d8;
  uRam0000000183153cc0 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831537f0 + 0xef16baec20d5a206) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183153a20 + 0x10e945135b08fedc));
  uRam00000001831538a0 = uRam0000000183153b00 ^ uRam0000000183153cc0 ^ 0x7fff;
  uRam0000000183153a20 = (uRam0000000183153a20 ^ uRam0000000183153cc0) + 0x7fff ^ 0xbd491f9548dbdbd5
  ;
  uRam0000000183153940 =
       (uRam0000000183153940 * 0x34f0c0d57497db13 ^ uRam0000000183153a20) + uRam0000000183153cc0;
  uRam0000000183153c68 = uRam0000000183153940 ^ uRam0000000183153a20;
  uRam0000000183153828 = 0x7fff;
  uVar4 = (~uRam0000000183153788 + 0x8d8c9278510d52c0) *
          ((uRam0000000183153978 ^ 0x9a8fcb1fbfdbf09a) +
          (uRam0000000183153978 & 0x1a8fcb1fbfdbf09a) * 2);
  uVar4 = (uVar4 | uRam0000000183153b08) + (uVar4 & uRam0000000183153b08);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831538e0 =
       func_0x000186a2bf60((uVar4 | 0x17035967eed6a225) + (uVar4 & 0x17035967eed6a225));
  uVar4 = ~uRam00000001831538e0 & 0x9a8fcb1f3bf9d3bf;
  uRam0000000183153b48 = uRam00000001831537f0 ^ uVar4 ^ 0x281c5d978d07267e;
  uRam0000000183153968 = (uRam0000000183153968 ^ uVar4) + 0x281c5d978d07267e ^ 0xec9e694c98d10c80;
  uRam0000000183153a10 = (uRam0000000183153a10 * 0x21e43627a4e5cc45 ^ uRam0000000183153968) + uVar4;
  uRam0000000183153c20 = uRam0000000183153a10 ^ uRam0000000183153968;
  uRam00000001831537d0 = 0x281c5d978d07267e;
  uRam0000000183153728 = func_0x000186a2bf60(uRam0000000183153b48 + 0x4906ea4c273a43f9 ^ 0xcc);
  uRam0000000183153948 = uRam0000000183153cc8 ^ uRam0000000183153980 ^ 0x281c5d978d07267e;
  uRam0000000183153888 =
       (uRam0000000183153888 ^ uRam0000000183153980) + 0x281c5d978d07267e ^ 0xfd91432e43baff0a;
  uRam0000000183153cb8 =
       (uRam0000000183153cb8 * -0x513cf3b735a97b71 ^ uRam0000000183153888) + uRam0000000183153980;
  uRam00000001831537a8 = uRam0000000183153cb8 ^ uRam0000000183153888;
  uRam0000000183153a50 = 0x281c5d978d07267e;
  uVar4 = (uRam00000001831539d8 ^ _UNK_1809831e0) + uRam0000000183153c70 + 0x281c5d970925055b;
  uVar9 = (uRam0000000183153c70 ^ _UNK_1809831e8) + uRam00000001831539d8 + 0x281c5d978d07267e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831539d8 ^ _UNK_1809831e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183153c70 ^ _UNK_1809831e8;
  uRam0000000183153a50 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831539d8 + 0x281c5d978d07267e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183153c70 + 0x281c5d970925055b));
  uRam0000000183153740 = uRam0000000183153a50 & 0x7fffffffffffffff;
  uRam0000000183153848 = uRam0000000183153848 ^ uRam0000000183153740 ^ 0xa3ee7a19b5de5d8d;
  uRam0000000183153c10 =
       (uRam0000000183153c10 * 0x79f58b230eda342b ^ uRam0000000183153848) + uRam0000000183153740;
  uRam00000001831537c0 = uRam0000000183153c10 ^ uRam0000000183153848;
  uRam0000000183153770 = 0;
  uRam00000001831539d8 = func_0x000186a2bf60(lRam0000000183153938 + 0x5bff83d5ffddffU ^ 0xb4);
  uVar4 = uRam00000001831539d8 ^ 0x7fff;
  uVar9 = uVar4 >> 1 | uVar4;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar4 = (ulonglong)
          (~((uint)uVar4 ^
            (0x40 - (uint)(byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x10) & 0x7fff);
  uRam0000000183153c58 = uRam0000000183153c58 ^ uVar4 ^ 0x7fff;
  uRam0000000183153cc0 = (uRam0000000183153cc0 ^ uVar4) + 0x7fff ^ 0x9c3799fe96779b0a;
  uRam0000000183153b00 = (uRam0000000183153b00 * 0x6f6d07c806884213 ^ uRam0000000183153cc0) + uVar4;
  uRam0000000183153730 = uRam0000000183153b00 ^ uRam0000000183153cc0;
  uRam0000000183153b18 = 0x7fff;
  uVar4 = ~uRam0000000183153968 *
          ((uRam00000001831539c8 ^ 0x9a8fcb1fbfdbf09a) +
          (uRam00000001831539c8 & 0x1a8fcb1fbfdbf09a) * 2);
  uVar4 = (uVar4 | uRam0000000183153b90) + (uVar4 & uRam0000000183153b90);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831539d8 =
       func_0x000186a2bf60((uVar4 | 0x657034e040240f65) + (uVar4 & 0x657034e040240f65));
  uVar4 = (uRam00000001831539d8 ^ 0x657034e0c4062c00) & 0xfffffffffffffe00;
  uRam0000000183153930 = (uRam0000000183153930 ^ uVar4) + 0x657034e0c4062c40 ^ 0x5ab8f831198145f6;
  uRam0000000183153bf8 = (uRam0000000183153bf8 * -0x140fbf001fa17425 ^ uRam0000000183153930) + uVar4
  ;
  uRam00000001831538a8 = uRam0000000183153bf8 ^ uRam0000000183153930;
  uRam0000000183153730 = 0x657034e0c4062c40;
  uVar4 = func_0x000186a2bf60(uRam0000000183153b68 ^ 0x5a5cf5092a62257d);
  uRam0000000183153ca0 = uRam0000000183153ca0 ^ ~uVar4 * 0x2075b93259f81ba1 ^ 0xd1877bcd21bdb7a6;
  uRam0000000183153778 =
       (uRam0000000183153778 * 0x544a3cf3f0bd89df ^ uRam0000000183153ca0) +
       ~uVar4 * 0x2075b93259f81ba1;
  uRam0000000183153ca8 = uRam0000000183153778 ^ uRam0000000183153ca0;
  uRam0000000183153b38 = 0;
  uRam0000000183153c50 = func_0x000186a2bf60(uRam0000000183153840 ^ 0xffb40084c5ffe129);
  uVar4 = uRam0000000183153c50 ^ 0x7fff;
  uVar9 = uVar4 >> 1 | uVar4;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar4;
  uRam0000000183153aa8 = uRam0000000183153968 ^ uVar4 ^ 0x7fff;
  uRam00000001831538a8 = (uRam00000001831538a8 ^ uVar4) + 0x7fff ^ 0xd9e501c9e21b7da;
  uRam00000001831537f8 = (uRam00000001831537f8 * 0x627560bbd6e33c71 ^ uRam00000001831538a8) + uVar4;
  uRam00000001831538e0 = uRam00000001831537f8 ^ uRam00000001831538a8;
  uRam00000001831538b0 = 0x7fff;
  uVar4 = (~uRam0000000183153c10 + 0x20bc11f2b5191bf) *
          ((uRam0000000183153ae0 ^ 0x20bc11faf73b29b) +
          (uRam0000000183153ae0 & 0x20bc11faf73b29b) * 2);
  uVar4 = (uVar4 | uRam0000000183153af0) + (uVar4 & uRam0000000183153af0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183153858 =
       func_0x000186a2bf60((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam0000000183153730 = uRam0000000183153730 ^ uRam0000000183153858 ^ 0x5207b7885f08f45f;
  uRam0000000183153860 =
       (uRam0000000183153860 * -0x4ec39288b668801d ^ uRam0000000183153730) + uRam0000000183153858;
  uRam00000001831537a0 = uRam0000000183153860 ^ uRam0000000183153730;
  uRam0000000183153c80 = 0;
  uRam0000000183153b58 = func_0x000186a2bf60(uRam0000000183153ce0 ^ 0xffd4007c45ffdddf);
  auVar8 = _UNK_1800170c0;
  uRam00000001831537b8 = uRam0000000183153a50 ^ uRam0000000183153b58 ^ 0x7fff;
  uRam00000001831537f0 = (uRam00000001831537f0 ^ uRam0000000183153b58) + 0x7fff ^ 0x347f5c67eda134ae
  ;
  uRam0000000183153748 =
       (uRam0000000183153748 * 0x2a8c1347a2049821 ^ uRam00000001831537f0) + uRam0000000183153b58;
  uRam0000000183153840 = uRam0000000183153748 ^ uRam00000001831537f0;
  auVar6._8_8_ = _UNK_18019c088;
  auVar6._0_8_ = param_4 ^ 0x84222325;
  uRam0000000183153cc8 = 0x7fff;
  auVar7 = pshufb(auVar6 ^ _UNK_1809831f0,_UNK_1800170c0);
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar9 + uRam0000000183153af0;
  if (auVar7._4_4_ < 0) {
    uVar4 = uRam0000000183153918 ^ uVar9;
  }
  uRam0000000183153c70 = func_0x000186a2bf60(SUB161(auVar6 ^ _UNK_1809831f0,5) ^ uVar4);
  uVar9 = (param_4 ^ 0x7fff ^ param_4 * 0x7fff ^ uRam0000000183153c70) & 0x7fffffffffffffff;
  uVar3 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar3;
  uRam0000000183153a80 = (uRam0000000183153a80 ^ uVar9) + uVar4 ^ 0x320be1fe9635b3e1;
  uRam0000000183153788 = (uRam0000000183153788 * -0x48962b793a62dfe9 ^ uRam0000000183153a80) + uVar9
  ;
  uRam0000000183153770 = uRam0000000183153788 ^ uRam0000000183153a80;
  uVar5 = uVar4 ^ 0x84222325;
  uVar9 = ((uRam00000001831538c8 ^ uVar5) +
          (ulonglong)((uint)uRam00000001831538c8 & (uint)uVar5) * 2) *
          (param_3 - uRam0000000183153ac8);
  uVar9 = (uVar9 | uRam0000000183153828) + (uVar9 & uRam0000000183153828);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  uVar5 = uVar5 ^ param_3;
  uRam0000000183153800 = uVar4;
  uRam0000000183153840 =
       func_0x000186a2bf60((uVar5 | uVar9) + (ulonglong)((uint)uVar5 & (uint)uVar9));
  uVar4 = uVar4 ^ uRam0000000183153840 & 0xffffffffffffff00;
  uVar5 = (ulonglong)(uVar3 ^ param_3);
  uRam00000001831537a0 = (uRam00000001831537a0 ^ uVar4) + uVar5 ^ 0xa841b11d6849ece;
  uRam0000000183153c60 = (uRam0000000183153c60 * -0x581723b7befcff93 ^ uRam00000001831537a0) + uVar4
  ;
  uRam0000000183153c88 = uRam0000000183153c60 ^ uRam00000001831537a0;
  uVar4 = (uRam0000000183153900 ^ _UNK_180983200) + uRam0000000183153b68 + 0x8427fbd6;
  uVar9 = (uRam0000000183153b68 ^ _UNK_180983208) + uRam0000000183153900 + 0xb34616d1;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183153900 ^ _UNK_180983200;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183153b68 ^ _UNK_180983208;
  uRam0000000183153c00 = uVar5;
  uRam0000000183153a50 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183153900 + 0xb34616d1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183153b68 + 0x8427fbd6));
  uVar4 = uRam0000000183153a50 - (uRam0000000183153a50 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183153a50;
  uRam00000001831537d0 = (uRam00000001831537d0 ^ uVar4) + 0xb347def3 ^ 0x6e0c71bff84a9b66;
  uRam0000000183153b28 = (uRam0000000183153b28 * -0x642f2fb9a6b90191 ^ uRam00000001831537d0) + uVar4
  ;
  uRam0000000183153898 = 0xb347def3;
  uRam0000000183153760 = func_0x000186a2bf60(uRam0000000183153c60 + 0xff98ff9f92ff57ff ^ 0xe2);
  uRam0000000183153748 =
       (uRam0000000183153748 ^ uRam0000000183153760 & 0xffffffffffff0000) - 0x658a4ab0 ^
       0xe97fcea837d8a9ca;
  uRam0000000183153718 =
       (uRam0000000183153718 * -0x5a5ac86ad2e4c0b3 ^ uRam0000000183153748) +
       (uRam0000000183153760 & 0xffffffffffff0000);
  uRam0000000183153740 = uRam0000000183153718 ^ uRam0000000183153748;
  uRam0000000183153b40 = 0x9a75b550;
  uVar4 = (uRam0000000183153858 ^ _UNK_180983210) + uRam0000000183153ad0 + 0x84226424;
  uVar9 = (uRam0000000183153ad0 ^ _UNK_180983218) + uRam0000000183153858 + 0x658a4ab0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183153858 ^ _UNK_180983210;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183153ad0 ^ _UNK_180983218;
  uRam0000000183153cb8 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183153858 + 0x658a4ab0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183153ad0 + 0x84226424));
  uVar4 = uRam0000000183153cb8 ^ 0x4701;
  uRam0000000183153cb0 = uRam0000000183153c30 ^ uVar4 ^ 0x658a91b1;
  uRam0000000183153918 = (uRam0000000183153918 ^ uVar4) + 0x658a91b1 ^ 0xddeeafdbae59c988;
  uRam0000000183153a78 = (uRam0000000183153a78 * -0x25c9c8f05e1a2be9 ^ uRam0000000183153918) + uVar4
  ;
  uRam0000000183153918 = uRam0000000183153a78 ^ uRam0000000183153918;
  uRam0000000183153bf8 = 0x658a91b1;
  uVar4 = (uRam00000001831538b0 ^ _UNK_180983220) + uRam0000000183153ac8 + 0xe1a8b294;
  uVar9 = (uRam0000000183153ac8 ^ _UNK_180983228) + uRam00000001831538b0 + 0x9a75b550;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831538b0 ^ _UNK_180983220;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183153ac8 ^ _UNK_180983228;
  uRam0000000183153990 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831538b0 + 0x9a75b550) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183153ac8 + 0xe1a8b294));
  uVar4 = uRam0000000183153990 << 0x16 | uRam0000000183153990 >> 0x2a;
  uRam00000001831537d0 = uRam0000000183153bd0 ^ uVar4 ^ 0x100004701;
  uRam0000000183153a50 = (uRam0000000183153a50 ^ uVar4) + 0x100004701 ^ 0x7669a02dc4facb45;
  uRam0000000183153a80 = (uRam0000000183153a80 * -0x6271e26e1a5ea095 ^ uRam0000000183153a50) + uVar4
  ;
  uRam0000000183153c90 = uRam0000000183153a80 ^ uRam0000000183153a50;
  uRam0000000183153cf8 = 0x4701;
  uVar4 = (uRam0000000183153870 ^ _UNK_180983230) + uRam0000000183153840 + 0x84222325;
  uVar9 = (uRam0000000183153840 ^ _UNK_180983238) + uRam0000000183153870 + 0x1d3fbe00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183153870 ^ _UNK_180983230;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183153840 ^ _UNK_180983238;
  uRam0000000183153b68 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183153870 + 0x1d3fbe00) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183153840 + 0x84222325));
  uRam0000000183153958 = uRam0000000183153958 - 0x1d3fbe00 ^ 0x38a4adb0bc896d17;
  uRam0000000183153788 = uRam00000001831538a0 * 0x76db100f66e47e05;
  uRam00000001831538a0 = uRam0000000183153788 ^ uRam0000000183153958;
  uRam0000000183153c60 = 0xe2c04200;
  uRam0000000183153710 = func_0x000186a2bf60(uRam00000001831539f0 + 0xffdbfff6e4005dff ^ 0xe3);
  uVar9 = uRam0000000183153710 ^ 0x19e87bf9394a4701;
  uVar4 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar9 = (uint)bVar1 + (uint)bVar1 ^ uVar9;
  uRam0000000183153970 = uRam0000000183153780 ^ uVar9 ^ 0x100004701;
  uRam0000000183153770 = (uRam0000000183153770 ^ uVar9) + 0x100004701 ^ 0xd16abb93bbc812fc;
  uRam0000000183153730 = (uRam0000000183153730 * -0x3d2415a3f426ac57 ^ uRam0000000183153770) + uVar9
  ;
  uRam0000000183153b10 = uRam0000000183153730 ^ uRam0000000183153770;
  uRam0000000183153798 = 0x4701;
  uVar4 = (~uRam0000000183153cf0 + 0xfa2e8e39) *
          ((uRam0000000183153848 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183153848 & 0x84222325) * 2);
  uVar4 = (uVar4 | uRam0000000183153b00) + (uVar4 & uRam0000000183153b00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam00000001831539a8 =
       func_0x000186a2bf60((uVar4 | 0x7e0cad1d) + (ulonglong)((uint)uVar4 & 0x7e0cad1d));
  uVar4 = uRam00000001831539a8 << 0x37 | uRam00000001831539a8 >> 9;
  uRam00000001831537b8 = (uRam00000001831537b8 ^ uVar4) - 0xfa2e8e38 ^ 0xffff6e4f35ff63e8;
  uRam0000000183153b28 = (uRam0000000183153b28 * 0x50e68e5d73b2ff25 ^ uRam00000001831537b8) + uVar4;
  uRam00000001831538d0 = uRam0000000183153b28 ^ uRam00000001831537b8;
  uRam0000000183153a80 = 0x5d171c8;
  uVar4 = (uRam00000001831539a8 ^ _UNK_180983240) + uRam0000000183153be8 + 0x84226424;
  uVar9 = (uRam0000000183153be8 ^ _UNK_180983248) + uRam00000001831539a8 + 0xfa2e8e38;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831539a8 ^ _UNK_180983240;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183153be8 ^ _UNK_180983248;
  uRam0000000183153c60 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831539a8 + 0xfa2e8e38) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183153be8 + 0x84226424));
  uVar4 = (ulonglong)
          (~((uint)(uRam0000000183153c60 << 10) | (uint)(uRam0000000183153c60 >> 0x36)) & 0x4701);
  uRam0000000183153818 = uRam0000000183153770 ^ uVar4 ^ 0xfa2ed539;
  uRam0000000183153b58 = (uRam0000000183153b58 ^ uVar4) + 0xfa2ed539 ^ 0x14cdad56e800165;
  uRam00000001831537b8 = (uRam00000001831537b8 * -0x3f84e0f1c99c279b ^ uRam0000000183153b58) + uVar4
  ;
  uRam0000000183153978 = uRam00000001831537b8 ^ uRam0000000183153b58;
  uRam0000000183153b60 = 0xfa2ed539;
  uVar4 = (~uRam0000000183153870 + 0xbdbc4750) *
          ((uRam0000000183153bb0 ^ 0x3765fdd6) +
          (ulonglong)((uint)uRam0000000183153bb0 & 0x3765fdd6) * 2);
  uVar4 = (uVar4 | uRam00000001831539b0) + (uVar4 & uRam00000001831539b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183153cc0 =
       func_0x000186a2bf60((uVar4 | 0x8ad9ba99) + (ulonglong)((uint)uVar4 & 0x8ad9ba99));
  uVar4 = uRam0000000183153cc0 >> 1 | uRam0000000183153cc0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam0000000183153cc0;
  uRam0000000183153ca0 = (uRam0000000183153ca0 ^ uVar4) + 0xb1044643 ^ 0x3364d72b53776a92;
  uRam0000000183153bf8 = (uRam0000000183153bf8 * 0x5e3303b69a24fe3d ^ uRam0000000183153ca0) + uVar4;
  uRam0000000183153728 = uRam0000000183153bf8 ^ uRam0000000183153ca0;
  uRam0000000183153c88 = 0xb1044643;
  uRam0000000183153ae0 = func_0x000186a2bf60(uRam0000000183153b40 ^ 0x35ffd7e70030d4);
  uRam0000000183153ae8 = uRam0000000183153770 ^ uRam0000000183153ae0 ^ 0x71042642;
  uRam0000000183153700 =
       (uRam0000000183153700 ^ uRam0000000183153ae0) + 0x71042642 ^ 0xed5a274c1322a63a;
  uRam0000000183153730 =
       (uRam0000000183153730 * -0x27c437b945afa357 ^ uRam0000000183153700) + uRam0000000183153ae0;
  uRam0000000183153b50 = uRam0000000183153730 ^ uRam0000000183153700;
  uRam0000000183153bc0 = 0x71042642;
  uVar4 = (~uRam0000000183153b38 + 0x71042643) *
          ((uRam00000001831537d8 ^ 0xf5260567) +
          (ulonglong)((uint)uRam00000001831537d8 & 0xf5260567) * 2);
  uVar4 = (uVar4 | uRam00000001831538d0) + (uVar4 & uRam00000001831538d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183153990 =
       func_0x000186a2bf60((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325));
  uRam0000000183153c40 =
       (ulonglong)((uint)~((int)uRam0000000183153990 * 2) >> 1 & 0x71042642 | 0x242);
  uRam00000001831539f8 = uRam00000001831539f8 ^ uRam0000000183153c40 ^ 0xd9eb910f546c4096;
  uRam0000000183153c40 =
       (uRam0000000183153c40 * 0x2d76fe17cb078ed ^ uRam00000001831539f8) + uRam0000000183153c40;
  uRam00000001831537a0 = uRam0000000183153c40 ^ uRam00000001831539f8;
  uRam0000000183153c70 = 0;
  uVar4 = ((uRam0000000183153c10 ^ 0x84226424) +
          (ulonglong)((uint)uRam0000000183153c10 & 0x84226424) * 2) * -uRam0000000183153c50;
  uVar4 = (uVar4 | uRam0000000183153c80) + (uVar4 & uRam0000000183153c80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183153930 =
       func_0x000186a2bf60((uVar4 | 0x84226424) + (ulonglong)((uint)uVar4 & 0x84226424));
  uRam0000000183153b00 = uRam0000000183153880 ^ uRam0000000183153930 ^ 0x4701;
  uRam00000001831539f0 = (uRam00000001831539f0 ^ uRam0000000183153930) + 0x4701 ^ 0x41fa68890c32f66;
  uRam0000000183153968 =
       (uRam0000000183153968 * -0x2bb6300f6dc330c9 ^ uRam00000001831539f0) + uRam0000000183153930;
  uRam0000000183153a58 = uRam0000000183153968 ^ uRam00000001831539f0;
  uRam0000000183153c68 = 0x4701;
  uVar4 = (~uRam0000000183153900 + 0x100000000) *
          ((uRam00000001831537b8 ^ 0x3765fdd6) +
          (ulonglong)((uint)uRam00000001831537b8 & 0x3765fdd6) * 2);
  uVar4 = (uVar4 | uRam0000000183153c38) + (uVar4 & uRam0000000183153c38);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183153b00 =
       func_0x000186a2bf60((uVar4 | 0xc89a0229) + (ulonglong)((uint)uVar4 & 0xc89a0229));
  uVar4 = (uRam0000000183153b00 ^ 0xe0000000) & 0xffffffffe0000000;
  uRam00000001831539a0 = (uRam00000001831539a0 ^ uVar4) + 0x4cb8210c ^ 0x5be566078ff154ff;
  uRam0000000183153878 = (uRam0000000183153878 * 0xc07f3d064898df3 ^ uRam00000001831539a0) + uVar4;
  uRam0000000183153a40 = uRam0000000183153878 ^ uRam00000001831539a0;
  uRam0000000183153c98 = 0x4cb8210c;
  uVar4 = (~uRam0000000183153a70 + 0x4cb8210d) *
          ((uRam00000001831537a8 ^ 0x3765fdd6) +
          (ulonglong)((uint)uRam00000001831537a8 & 0x3765fdd6) * 2);
  uVar4 = (uVar4 | uRam00000001831537e0) + (uVar4 & uRam00000001831537e0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uRam0000000183153738 =
       func_0x000186a2bf60((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda));
  uVar4 = (ulonglong)(~(uint)uRam0000000183153738 & 0xb347def3);
  uRam0000000183153788 = uRam0000000183153788 ^ uVar4 ^ 0x8febdb2e402c77f5;
  uRam00000001831537a0 = (uRam00000001831537a0 * 0x3b6ffb409abd963 ^ uRam0000000183153788) + uVar4;
  uRam0000000183153cc0 = uRam00000001831537a0 ^ uRam0000000183153788;
  uRam0000000183153990 = 0;
  uVar4 = (uRam0000000183153878 ^ 0x84226424) + uRam00000001831538a8 + 0x84226424;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183153878 ^ 0x84226424;
  uVar9 = ((uRam00000001831538a8 + uRam0000000183153878) * 0x2000 |
          uRam00000001831538a8 + uRam0000000183153878 >> 0x33) ^ uRam00000001831538a8;
  uRam0000000183153aa0 =
       func_0x000186a2bf60((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183153878 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001831538a8 + 0x84226424));
  uVar4 = uRam0000000183153aa0 << 0x13 | uRam0000000183153aa0 >> 0x2d;
  uRam0000000183153b90 =
       (uRam0000000183153ae8 ^ uVar4 ^ 0x4701 ^ uVar4) + 0x4701 ^ 0x9fe8b30643d77ed4;
  uRam0000000183153b68 = (uRam0000000183153b68 * -0x272dac1fea9cc475 ^ uRam0000000183153b90) + uVar4
  ;
  uRam0000000183153ba0 = uRam0000000183153b68 ^ uRam0000000183153b90;
  uRam00000001831538f8 = uRam0000000183153bb0 ^ 0x4701;
  uRam0000000183153828 = 0x4701;
  uRam0000000183153c50 = func_0x000186a2bf60(lRam00000001831537c8 + 0xffdcff7bdb001dffU ^ 0x31);
  uRam0000000183153950 = uRam0000000183153950 ^ uRam0000000183153c50 ^ 0x5d8f3 ^ 0xe7aa342fbc68cde8;
  uRam0000000183153778 =
       (uRam0000000183153778 * -0x39cb8fb69e2bb3e3 ^ uRam0000000183153950) +
       (uRam0000000183153c50 ^ 0x5d8f3);
  uRam00000001831538c8 = uRam0000000183153778 ^ uRam0000000183153950;
  auVar7._8_8_ = _UNK_180983258;
  auVar7._0_8_ = uVar5 ^ 0x84222325;
  uRam0000000183153a40 = 0;
  auVar8 = pshufb(auVar7 ^ _UNK_180983260,auVar8);
  uVar9 = auVar8._8_8_ + auVar8._0_8_;
  uVar4 = uVar9 + lRam0000000183153838;
  if (auVar8._4_4_ < 0) {
    uVar4 = uRam0000000183153940 ^ uVar9;
  }
  uRam0000000183153b88 = func_0x000186a2bf60(SUB161(auVar7 ^ _UNK_180983260,5) ^ uVar4);
  uVar4 = uRam0000000183153b88 >> 1 | uRam0000000183153b88;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uRam0000000183153b88) & 0x7ffffffffffffff;
  uRam0000000183153730 = uVar5 ^ 0x4701;
  uRam0000000183153bf8 = (uRam0000000183153bf8 ^ uVar4) + uRam0000000183153730 ^ 0x2f2ac4e5c721f180;
  uRam00000001831539a8 = (uRam00000001831539a8 * 0x583964f48658481 ^ uRam0000000183153bf8) + uVar4;
  uRam0000000183153898 = uRam00000001831539a8 ^ uRam0000000183153bf8;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1ccfe,0x486);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186a22f50 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180981360 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nQ; cyV (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 186a2bff0, runtime 6fffee63bff0) =====

void FUN_186a2bff0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000186a2c03b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809833e0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/nQ; cyW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 186a2d000, runtime 6fffee63d000) =====

void FUN_186a2d000(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000186a2d089 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809839a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



