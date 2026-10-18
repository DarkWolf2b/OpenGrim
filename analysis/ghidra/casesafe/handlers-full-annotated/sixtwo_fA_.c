// ===== Lsixtwo/fA; _55aef275d55a37c987ad6b6b0cab4a38 ()V (handler @ image 18b06cea0, runtime 6ffff2c7cea0) =====

void FUN_18b06cea0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b06cf88 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a47a58 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fA; aSa (Lsixtwo/gH$th;)V (handler @ image 18b02a580, runtime 6ffff2c3a580) =====

void FUN_18b02a580(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14063,0x324);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b02a64c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a3aca0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fA; aSb (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18b0365f0, runtime 6ffff2c465f0) =====

undefined8 FUN_18b0365f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fA; aSc ([B)Ljava/lang/String; (handler @ image 18b036680, runtime 6ffff2c46680) =====

void FUN_18b036680(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018b036720 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a3f230 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fA; aSd (IJ)I (handler @ image 18b05df40, runtime 6ffff2c6df40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b05df40(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  
  uVar6 = (~uRam00000001832855e8 + 0x5156605ee66db16b) *
          ((uRam00000001832855a8 ^ 0xeaae693f9d7ca55a) +
          (uRam00000001832855a8 & 0x6aae693f9d7ca55a) * 2);
  uVar6 = (uVar6 | uRam00000001832856c8) + (uVar6 & uRam00000001832856c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183285648 =
       func_0x00018b0690f0((uVar6 | 0xbbf809617b111430) + (uVar6 & 0xbbf809617b111430));
  uVar6 = (uRam0000000183285648 ^ 0x6473f1623a347f96) * -0x4777b68c4e12643b ^ 0x5156605ee66db16a;
  uRam0000000183285518 = (uRam0000000183285518 ^ uVar6) + 0xbbf80961ff333715 ^ 0xb2d448ef55000531;
  uRam0000000183285590 = (uRam0000000183285590 * 0x3baec646d85cd1f1 ^ uRam0000000183285518) + uVar6;
  uRam0000000183285690 = uRam0000000183285590 ^ uRam0000000183285518;
  uRam00000001832856b8 = 0xbbf80961ff333715;
  uVar6 = (~uRam00000001832855a0 + 0xaded4c876fe85785) *
          ((uRam00000001832856b0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832856b0 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam0000000183285568) + (uVar6 & uRam0000000183285568);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832856d8 =
       func_0x00018b0690f0((uVar6 | 0xaded4c87ebca0b5e) + (uVar6 & 0xaded4c87ebca0b5e));
  uVar3 = uRam00000001832856d8 ^ 0xf8566b6cbbd9a87c;
  uVar6 = uVar3 >> 1 | uVar3;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  uRam0000000183285518 = uRam0000000183285618 ^ uVar3 ^ 0xaded4c876fe8d783;
  uRam0000000183285690 = (uRam0000000183285690 ^ uVar3) + 0xaded4c876fe8d783 ^ 0x9c8f75659cb395bb;
  uRam00000001832855a0 = (uRam00000001832855a0 * -0x4b73ec5c54ae8f09 ^ uRam0000000183285690) + uVar3
  ;
  uRam0000000183285540 = uRam00000001832855a0 ^ uRam0000000183285690;
  uRam0000000183285600 = 0xaded4c876fe8d783;
  uVar6 = (~uRam0000000183285540 + 0x64eb8e00b094430) *
          ((uRam0000000183285648 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183285648 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam00000001832856f8) + (uVar6 & uRam00000001832856f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183285560 =
       func_0x00018b0690f0((uVar6 | 0x64eb8e08f2b18f5) + (uVar6 & 0x64eb8e08f2b18f5));
  uRam0000000183285510 = uRam0000000183285580 ^ uRam0000000183285560 ^ 0x64eb8e00b09c42e;
  uRam00000001832856b8 =
       (uRam00000001832856b8 ^ uRam0000000183285560) + 0x64eb8e00b09c42e ^ 0x48fec15b192179af;
  uRam0000000183285598 =
       (uRam0000000183285598 * 0x27d51ccf931d8bdd ^ uRam00000001832856b8) + uRam0000000183285560;
  uRam00000001832856c0 = uRam0000000183285598 ^ uRam00000001832856b8;
  uRam00000001832856d0 = 0x64eb8e00b09c42e;
  uVar6 = (uRam0000000183285590 ^ _UNK_181a46300) + uRam0000000183285670 + 0x64eb8e08f2be70b;
  uVar3 = (uRam0000000183285670 ^ _UNK_181a46308) + uRam0000000183285590 + 0xf9b1471ff4f6bbd1;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183285590 ^ _UNK_181a46300;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183285670 ^ _UNK_181a46308;
  uRam00000001832855e0 =
       func_0x00018b0690f0((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183285590 + 0xf9b1471ff4f6bbd1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183285670 + 0x64eb8e08f2be70b));
  uRam0000000183285688 = uRam0000000183285570 ^ uRam00000001832856a0 ^ 0x7fff;
  uRam0000000183285578 = (uRam0000000183285578 ^ uRam00000001832856a0) + 0x7fff ^ 0x789997f9fab8ec75
  ;
  uRam00000001832856e8 =
       (uRam00000001832856e8 * 0x79c997cc0f0020d3 ^ uRam0000000183285578) + uRam00000001832856a0;
  uRam0000000183285580 = uRam00000001832856e8 ^ uRam0000000183285578;
  uRam0000000183285600 = 0x7fff;
  uVar6 = (uRam0000000183285500 ^ _UNK_181a46310) + uRam0000000183285690 + 0x84222325;
  uVar3 = (uRam0000000183285690 ^ _UNK_181a46318) + uRam0000000183285500 + 0x37c497987ee13d66;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183285500 ^ _UNK_181a46310;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183285690 ^ _UNK_181a46318;
  uRam0000000183285670 =
       func_0x00018b0690f0((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183285500 + 0x37c497987ee13d66) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183285690 + 0x84222325));
  uRam0000000183285540 = uRam0000000183285540 + 0xc83b6867811ec29a ^ 0xb35b9f6aef24c72b;
  uRam0000000183285668 = uRam00000001832856d8 * -0x6cb16ed7456e9357;
  uRam00000001832856d8 = uRam0000000183285668 ^ uRam0000000183285540;
  uRam0000000183285688 = 0xc83b6867811ec29a;
  uRam0000000183285518 = func_0x00018b0690f0(uRam00000001832855a8 + 0x97a1bba59c964332 ^ 0xb7);
  uVar6 = uRam0000000183285518 ^ 0x37c497987ee14299;
  uRam0000000183285570 = uRam0000000183285530 ^ uVar6 ^ 0x37c497987ee1bd65;
  uRam00000001832855e0 = (uRam00000001832855e0 ^ uVar6) + 0x37c497987ee1bd65 ^ 0xf0ae0f1dbe44ab2f;
  uRam0000000183285540 = (uRam0000000183285540 * -0x5f42173da6ed9b93 ^ uRam00000001832855e0) + uVar6
  ;
  uRam0000000183285520 = uRam0000000183285540 ^ uRam00000001832855e0;
  uRam0000000183285688 = 0x37c497987ee1bd65;
  uRam0000000183285550 = func_0x00018b0690f0(uRam0000000183285570 + 0x393b0736b99a4c98 ^ 0x4d);
  uVar6 = uRam0000000183285550 << 0x39 | uRam0000000183285550 >> 7;
  uRam0000000183285608 = uRam00000001832856f8 ^ uVar6 ^ 0x7fff;
  uRam0000000183285678 = (uRam0000000183285678 ^ uVar6) + 0x7fff ^ 0x255899eb396ab2fe;
  uRam00000001832855a0 = (uRam00000001832855a0 * 0x76efdb8a5b8dabfd ^ uRam0000000183285678) + uVar6;
  uRam0000000183285500 = uRam00000001832855a0 ^ uRam0000000183285678;
  uRam0000000183285568 = 0x7fff;
  uVar6 = (uRam00000001832856c8 ^ _UNK_181a46320) + uRam00000001832855c8 + 0xdfe1e8f7fa9f8946;
  uVar3 = (uRam00000001832855c8 ^ _UNK_181a46328) + uRam00000001832856c8 + 0xbbf80961ff333715;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832856c8 ^ _UNK_181a46320;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832855c8 ^ _UNK_181a46328;
  uRam0000000183285688 =
       func_0x00018b0690f0((uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832856c8 + 0xbbf80961ff333715) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832855c8 + 0xdfe1e8f7fa9f8946));
  uVar6 = uRam0000000183285688 ^ 0x2018010081021514;
  uVar6 = (uVar6 << 0x3b | uVar6 >> 5) >> 0x32 | (uVar6 >> 5) << 0xe;
  uRam0000000183285670 = uRam00000001832856f8 ^ uVar6 ^ 0x9bd9f2597df0e178;
  uRam00000001832855e0 = (uRam00000001832855e0 ^ uVar6) + 0x9bd9f2597df0e178 ^ 0x807b9f5748f6f998;
  uRam00000001832856a0 = (uRam00000001832856a0 * 0x4d14ec9845834e35 ^ uRam00000001832855e0) + uVar6;
  uRam00000001832855f8 = uRam00000001832856a0 ^ uRam00000001832855e0;
  uRam0000000183285518 = 0x9bd9f2597df0e178;
  uVar6 = (~uRam00000001832855d0 + 0xbbf80961ff333716) *
          ((uRam0000000183285698 ^ 0xdfe1e8f7fa9f8946) +
          (uRam0000000183285698 & 0x5fe1e8f7fa9f8946) * 2);
  uVar6 = (uVar6 | uRam0000000183285508) + (uVar6 & uRam0000000183285508);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183285560 =
       func_0x00018b0690f0((uVar6 | 0x6419e19605acbe53) + (uVar6 & 0x6419e19605acbe53));
  uRam0000000183285580 =
       (uRam0000000183285580 ^ uRam0000000183285560 ^ 0xfff9e9f7ffbfbf77) + 0x9be008617e312201 ^
       0xd14800a91d9c97f9;
  uRam00000001832856c8 =
       (uRam00000001832856c8 * 0x6a142ae7cd2acf99 ^ uRam0000000183285580) +
       (uRam0000000183285560 ^ 0xfff9e9f7ffbfbf77);
  uRam0000000183285628 = uRam00000001832856c8 ^ uRam0000000183285580;
  uRam0000000183285658 = -0x641ff79e81ceddff;
  uRam0000000183285678 = func_0x00018b0690f0(uRam00000001832855a8 + 0xacc5a7e8b1f1b630 ^ 0xf1);
  uVar6 = (uRam0000000183285678 ^ 0x77d9f1d6fdeedd76) << 0xc |
          (uRam0000000183285678 ^ 0x77d9f1d6fdeedd76) >> 0x34;
  uRam00000001832855c0 = uRam00000001832856a0 ^ uVar6 ^ 0x9bd9f2597df0e178;
  uRam0000000183285530 = (uRam0000000183285530 ^ uVar6) + 0x9bd9f2597df0e178 ^ 0x66407910ac9bdf46;
  uRam0000000183285658 = (uRam0000000183285658 * 0xef42f29919c96c7 ^ uRam0000000183285530) + uVar6;
  uRam00000001832855b8 = uRam0000000183285658 ^ uRam0000000183285530;
  uRam0000000183285600 = 0x9bd9f2597df0e178;
  uVar6 = (uRam0000000183285510 ^ 0x84225cda) + uRam0000000183285538 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183285510 ^ 0x84225cda;
  uVar3 = ((uRam0000000183285538 + uRam0000000183285510) * 0x2000 |
          uRam0000000183285538 + uRam0000000183285510 >> 0x33) ^ uRam0000000183285538;
  uRam00000001832855f8 =
       func_0x00018b0690f0((uVar3 << 0x1d | uVar3 >> 0x23) - uRam0000000183285510 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183285538 + 0x84225cda));
  uVar6 = uRam00000001832855f8 >> 1 | uRam00000001832855f8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001832855f8;
  uRam0000000183285528 = uRam00000001832856d8 ^ uVar6 ^ 0x7fff;
  uRam00000001832855b0 = (uRam00000001832855b0 ^ uVar6) + 0x7fff ^ 0x4e8fb84ff087ef2a;
  uRam00000001832856f8 = (uRam00000001832856f8 * -0x1b560f71f7366c5d ^ uRam00000001832855b0) + uVar6
  ;
  uRam00000001832855a0 = uRam00000001832856f8 ^ uRam00000001832855b0;
  uRam0000000183285558 = 0x7fff;
  uVar6 = ((uRam0000000183285590 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183285590 & 0x84225cda) * 2) * -uRam0000000183285688;
  uVar6 = (uVar6 | uRam0000000183285528) + (uVar6 & uRam0000000183285528);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183285510 =
       func_0x00018b0690f0((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = (uRam0000000183285510 ^ 0x3800) & 0x8000000000003800;
  uVar6 = (ulonglong)(~((uint)(uVar6 << 1) | (uint)((longlong)uVar6 < 0)) & 0x7fff);
  uRam0000000183285518 = uRam0000000183285588 ^ uVar6 ^ 0x7fff;
  uRam0000000183285530 = (uRam0000000183285530 ^ uVar6) + 0x7fff ^ 0x796fbc652d80b8e6;
  uRam0000000183285688 = (uRam0000000183285688 * -0x6219304d1689c269 ^ uRam0000000183285530) + uVar6
  ;
  uRam0000000183285538 = uRam0000000183285688 ^ uRam0000000183285530;
  uRam00000001832856b0 = 0x7fff;
  uVar6 = (~uRam00000001832855e8 + 0x8d6188253e0c8223) *
          ((uRam0000000183285618 ^ 0x8d618825ba2ea107) +
          (uRam0000000183285618 & 0xd618825ba2ea107) * 2);
  uVar6 = (uVar6 | uRam00000001832855d8) + (uVar6 & uRam00000001832855d8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183285648 =
       func_0x00018b0690f0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uRam00000001832855a8 =
       uRam00000001832855a8 ^ uRam0000000183285648 ^ 0x5aafcd78ed568c84 ^ 0xe44e9ae34ea840d;
  uRam0000000183285668 =
       (uRam0000000183285668 * -0x6ed78df41d8f602d ^ uRam00000001832855a8) +
       (uRam0000000183285648 ^ 0x5aafcd78ed568c84);
  uRam00000001832855e8 = uRam0000000183285668 ^ uRam00000001832855a8;
  uRam0000000183285508 = 0;
  uVar6 = (uRam00000001832856b0 ^ 0x84225cda) + uRam0000000183285628 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832856b0 ^ 0x84225cda;
  uVar3 = ((uRam0000000183285628 + uRam00000001832856b0) * 0x2000 |
          uRam0000000183285628 + uRam00000001832856b0 >> 0x33) ^ uRam0000000183285628;
  uRam00000001832855f0 =
       func_0x00018b0690f0((uVar3 << 0x1d | uVar3 >> 0x23) - uRam00000001832856b0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183285628 + 0x84225cda));
  uVar6 = (uRam00000001832855f0 & 0xfffffffffff80000) + 0x7fff;
  uRam0000000183285590 = uRam0000000183285620 ^ uVar6 ^ 0x7fff;
  uRam00000001832855e8 = (uVar6 ^ uRam00000001832855e8) + 0x7fff ^ 0xd6c012a90b0204c2;
  uRam0000000183285530 =
       (uRam00000001832855f0 & 0xfffffffffff80000) +
       (uRam0000000183285530 * -0x2de1db0d08fb61b1 ^ uRam00000001832855e8) + 0x7fff;
  uRam0000000183285678 = uRam00000001832855e8 ^ uRam0000000183285530;
  uRam00000001832855e0 = 0x7fff;
  uVar6 = (~uRam00000001832856d0 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183285610) +
          ((param_4 ^ 0x84222325) & uRam0000000183285610) * 2);
  uVar6 = (uVar6 | uRam0000000183285500) + (uVar6 & uRam0000000183285500);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183285538 =
       func_0x00018b0690f0((param_4 ^ 0x84225cda | uVar6) + (uVar6 & (param_4 ^ 0x84225cda)));
  uVar3 = (param_4 | 0x7fff) ^ uRam0000000183285538;
  uVar6 = uVar3 >> 1 | uVar3;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar2;
  uRam00000001832855c8 = (uRam00000001832855c8 ^ uVar3) + uVar4 ^ 0x8677176cb0a532e5;
  uRam00000001832855d8 = (uRam00000001832855d8 * 0x3d8249ef05fa1515 ^ uRam00000001832855c8) + uVar3;
  uRam0000000183285540 = uRam00000001832855d8 ^ uRam00000001832855c8;
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar2 ^ 0x84222325;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = 0;
  auVar9 = pshufb(auVar8 ^ _UNK_181a46330,_UNK_1800170c0);
  uVar3 = auVar9._8_8_ + auVar9._0_8_;
  uVar6 = uVar3 + uRam0000000183285508;
  if (auVar9._4_4_ < 0) {
    uVar6 = uRam00000001832855a0 ^ uVar3;
  }
  uRam00000001832855e0 = uVar4;
  uRam0000000183285610 = func_0x00018b0690f0(SUB161(auVar8 ^ _UNK_181a46330,5) ^ uVar6);
  uVar6 = uVar4 * param_3 ^ uRam0000000183285610;
  uVar4 = (uVar4 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183285630 = (uRam0000000183285630 ^ uVar6) + uVar4 ^ 0xfb0f7b8bece1c028;
  uRam0000000183285508 = (uRam0000000183285508 * 0x203f723ce1d95fd9 ^ uRam0000000183285630) + uVar6;
  uRam00000001832855b8 = uRam0000000183285508 ^ uRam0000000183285630;
  uVar5 = uVar4 & 0xffffffff;
  uVar6 = (~uRam0000000183285558 + 0xf50914b9) *
          ((uRam0000000183285690 ^ 0x106b5f6e) +
          (ulonglong)((uint)uRam0000000183285690 & 0x106b5f6e) * 2);
  uVar6 = (uVar6 | uRam0000000183285670) + (uVar6 & uRam0000000183285670);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183285688 = uVar5;
  uRam0000000183285680 =
       func_0x00018b0690f0((uVar6 | 0xe5624bd6) + (ulonglong)((uint)uVar6 & 0xe5624bd6));
  uRam00000001832856f8 =
       (uRam00000001832856f8 ^ uRam0000000183285680) + 0xf5497cfb ^ 0x44d0b02d8aeb3d41;
  uRam0000000183285520 =
       (uRam0000000183285520 * -0x173064917e71362d ^ uRam00000001832856f8) + uRam0000000183285680;
  uRam0000000183285598 = uRam0000000183285520 ^ uRam00000001832856f8;
  uRam00000001832856c8 = 0xf5497cfb;
  uRam0000000183285688 = func_0x00018b0690f0(uRam0000000183285550 ^ 0x230042cbfff3f4);
  uVar6 = uRam0000000183285688 - (uRam0000000183285688 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183285688 ^ 0x3b1dc3d9;
  uRam0000000183285560 = (uRam0000000183285560 ^ uVar6) + 0x392e4e71 ^ 0x39f2d0b6fae193c0;
  uRam00000001832856d8 = (uRam00000001832856d8 * -0x19ba9fd46db682c1 ^ uRam0000000183285560) + uVar6
  ;
  uRam00000001832856b8 = uRam00000001832856d8 ^ uRam0000000183285560;
  uRam0000000183285618 = 0x392e4e71;
  uVar6 = (uRam0000000183285560 ^ _UNK_181a46340) + uRam00000001832856a0 + 0x84222325;
  uVar3 = (uRam00000001832856a0 ^ _UNK_181a46348) + uRam0000000183285560 + 0x48b77564;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183285560 ^ _UNK_181a46340;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832856a0 ^ _UNK_181a46348;
  uRam0000000183285530 =
       func_0x00018b0690f0((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183285560 + 0x48b77564) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832856a0 + 0x84222325));
  uRam0000000183285630 =
       (uRam0000000183285630 ^ uRam0000000183285530 ^ 0x48b77564) - 0x48b77564 ^ 0x46d0eb121921bf44;
  uRam00000001832855d8 =
       (uRam00000001832855d8 * -0x7d67b1442fd79aa9 ^ uRam0000000183285630) +
       (uRam0000000183285530 ^ 0x48b77564);
  uRam0000000183285550 = uRam00000001832855d8 ^ uRam0000000183285630;
  uRam00000001832856f8 = 0xb7488a9c;
  uRam0000000183285690 = func_0x00018b0690f0(uRam00000001832856c0 + 0xffcfff4c420074ff ^ 0x6d);
  uVar6 = (uRam0000000183285690 ^ 0x48800000) & 0xffffffffff800000;
  uRam0000000183285568 = uRam0000000183285580 ^ uVar6 ^ 0x48b77b73;
  uRam0000000183285550 = (uRam0000000183285550 ^ uVar6) + 0x48b77b73 ^ 0x2f943f83a55d31af;
  uRam0000000183285670 = (uRam0000000183285670 * 0x186b1a78dc93c0bb ^ uRam0000000183285550) + uVar6;
  uRam00000001832856a0 = uRam0000000183285670 ^ uRam0000000183285550;
  uRam00000001832855b8 = 0x48b77b73;
  uRam0000000183285608 = func_0x00018b0690f0(uRam0000000183285560 + 0xffce002736002cff ^ 0xd9);
  uVar6 = (uRam0000000183285608 ^ 0xfffffbff) << 0x1b | uRam0000000183285608 >> 0x25;
  uRam0000000183285530 = uRam0000000183285688 ^ uVar6 ^ 0x10000060f;
  uRam00000001832855d0 = (uRam00000001832855d0 ^ uVar6) + 0x10000060f ^ 0x9bc5e39fd73deb28;
  uRam0000000183285648 = (uRam0000000183285648 * -0x55652d40dd037501 ^ uRam00000001832855d0) + uVar6
  ;
  uRam00000001832855c0 = uRam0000000183285648 ^ uRam00000001832855d0;
  uRam0000000183285698 = 0x60f;
  uRam00000001832855e0 = func_0x00018b0690f0(uRam0000000183285598 + 0xff5a0021d1001fff ^ 0x62);
  uRam00000001832855f0 = uRam00000001832855e0 ^ 0xa202c359;
  uRam00000001832856a0 =
       (uRam00000001832855c0 ^ uRam00000001832855f0) + 0xa202c968 ^ 0xba440f811cf28a7b;
  uRam00000001832855f0 =
       ((uRam00000001832856c0 ^ uRam00000001832855f0 ^ 0xa202c968) * 0x7506cc164c211c5d ^
       uRam00000001832856a0) + uRam00000001832855f0;
  uRam00000001832856a0 = uRam00000001832855f0 ^ uRam00000001832856a0;
  uRam0000000183285570 = uRam00000001832855a8 ^ 0xa202c968;
  uRam00000001832855c0 = 0xa202c968;
  uRam0000000183285570 = func_0x00018b0690f0(uRam0000000183285528 + 0xffae0078aa00a2ff ^ 3);
  uVar6 = (uRam0000000183285570 ^ 0x1b464e2acdc2d8) & 0x1fffffffffffff;
  uRam0000000183285580 = uRam0000000183285558 ^ uVar6 ^ 0x10000060f;
  uRam00000001832856f0 = (uRam00000001832856f0 ^ uVar6) + 0x10000060f ^ 0x92f8a0ba96b46ca9;
  uRam0000000183285688 = (uRam0000000183285688 * 0x645f1838e36f260f ^ uRam00000001832856f0) + uVar6;
  uRam0000000183285520 = uRam0000000183285688 ^ uRam00000001832856f0;
  uRam00000001832855e0 = 0x60f;
  uVar6 = (~uRam00000001832855a0 + 0xba75eae) *
          ((uRam0000000183285620 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183285620 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam00000001832855a8) + (uVar6 & uRam00000001832855a8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183285580 =
       func_0x00018b0690f0((uVar6 | 0x8f857d88) + (ulonglong)((uint)uVar6 & 0x8f857d88));
  uVar6 = (uRam0000000183285580 ^ 0xba75ead) * -0x6a12232e89ec3421;
  uRam0000000183285588 = (uRam0000000183285588 ^ uVar6) - 0xba75ead ^ 0xc89540b59f51de5a;
  uRam0000000183285698 = (uRam0000000183285698 * -0x785ef7f308be24c5 ^ uRam0000000183285588) + uVar6
  ;
  uRam00000001832856c8 = 0xf458a153;
  uRam00000001832856d8 = func_0x00018b0690f0(uRam0000000183285510 ^ 0xffeeffc7630042f1);
  uVar6 = uRam00000001832856d8 ^ 0xf5497cfb;
  uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar6) <<
          0x23 | uVar6 >> 0x1d;
  uRam00000001832855c8 = uRam0000000183285688 ^ uVar6 ^ 0x12e77cb6c;
  uRam00000001832856c0 = (uRam00000001832856c0 ^ uVar6) + 0x12e77cb6c ^ 0xb02bb2f81f126f53;
  uRam0000000183285548 = (uRam0000000183285548 * 0x3fad7b32f0da7393 ^ uRam00000001832856c0) + uVar6;
  uRam0000000183285640 = uRam0000000183285548 ^ uRam00000001832856c0;
  uRam0000000183285598 = 0x2e77cb6c;
  uRam0000000183285570 = func_0x00018b0690f0(uRam00000001832855a0 ^ 0x110047a4ffc24e);
  uRam0000000183285638 =
       (uRam0000000183285638 ^ uRam00000001832855d8) + 0x31084c71 ^ 0x2cec51d5133ec0ea;
  uRam00000001832855a0 =
       (uRam00000001832855a0 * 0x226aacdb77617a45 ^ uRam0000000183285638) + uRam00000001832855d8;
  uRam0000000183285568 = uRam00000001832855a0 ^ uRam0000000183285638;
  uRam00000001832855c0 = 0x31084c71;
  uVar6 = (uRam0000000183285600 ^ _UNK_181a46350) + uRam0000000183285580 + 0x484511af;
  uVar3 = (uRam0000000183285580 ^ _UNK_181a46358) + uRam0000000183285600 + 0x621098e2;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183285600 ^ _UNK_181a46350;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183285580 ^ _UNK_181a46358;
  uRam00000001832856e8 =
       func_0x00018b0690f0((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183285600 + 0x621098e2) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183285580 + 0x484511af));
  uVar6 = (uRam00000001832856e8 ^ 0x4e4cc1ddb4000000) & 0xfffffffffc000000 ^ 0xcc67328a;
  uRam0000000183285518 = uRam00000001832856d8 ^ uVar6 ^ 0x12e77cb6c;
  uRam00000001832855b0 = (uRam00000001832855b0 ^ uVar6) + 0x12e77cb6c ^ 0x3f744378e461c743;
  uRam0000000183285578 = (uRam0000000183285578 * -0x722f5c7e72f17dc9 ^ uRam00000001832855b0) + uVar6
  ;
  uRam0000000183285588 = uRam0000000183285578 ^ uRam00000001832855b0;
  uRam0000000183285660 = 0x2e77cb6c;
  uVar6 = ((uRam00000001832855d8 ^ 0x8422252a) +
          (ulonglong)((uint)uRam00000001832855d8 & 0x8422252a) * 2) * -0x2e77cb6c;
  uVar6 = (uVar6 | uRam0000000183285530) + (uVar6 & uRam0000000183285530);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832856c8 =
       func_0x00018b0690f0((uVar6 | 0x8422252a) + (ulonglong)((uint)uVar6 & 0x8422252a));
  uVar6 = (uRam00000001832856c8 << 0x1a | uRam00000001832856c8 >> 0x26) ^ 0x60f;
  uRam0000000183285628 = uRam0000000183285648 ^ uVar6 ^ 0x60f;
  uRam00000001832855d0 = (uRam00000001832855d0 ^ uVar6) + 0x60f ^ 0x285b4a79151109bc;
  uRam0000000183285618 = (uRam0000000183285618 * 0x285d19b289605459 ^ uRam00000001832855d0) + uVar6;
  uRam0000000183285518 = uRam0000000183285618 ^ uRam00000001832855d0;
  uRam00000001832856d8 = 0x60f;
  uRam00000001832855d0 = func_0x00018b0690f0(uRam0000000183285650 ^ 0xb3ff9535ffcc6d);
  uRam0000000183285590 = uRam0000000183285590 ^ uRam00000001832855d0 ^ 0x344e97af4f6298dc;
  uRam0000000183285560 =
       (uRam0000000183285560 * 0x5ccbeebd26fd102b ^ uRam0000000183285590) + uRam00000001832855d0;
  uRam0000000183285598 = uRam0000000183285560 ^ uRam0000000183285590;
  uRam0000000183285578 = 0;
  uRam00000001832856b0 = func_0x00018b0690f0(uRam00000001832855c8 ^ 0x230084230021fc);
  uVar6 = (uRam00000001832856b0 ^ 0x94497c4b) << 0x3d | (uRam00000001832856b0 ^ 0x94497c4b) >> 3;
  uRam0000000183285650 = uRam0000000183285650 ^ uVar6 ^ 0xce3d70b6ddee739d;
  uRam0000000183285668 = (uRam0000000183285668 * 0x3f5bc5b699143b55 ^ uRam0000000183285650) + uVar6;
  uRam0000000183285530 = uRam0000000183285668 ^ uRam0000000183285650;
  uRam00000001832855b8 = 0;
  uVar6 = uVar5 ^ 0x84222325 ^ uRam00000001832855c0;
  lVar7 = (uVar5 ^ 0x84222325) + uRam0000000183285638;
  uVar3 = uVar6 + lVar7;
  uVar10 = (uRam0000000183285638 ^ 0x60f) + uRam00000001832855c0 + 0x60f;
  uVar6 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6;
  uVar3 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183285638 ^ 0x60f;
  uRam00000001832855e0 =
       func_0x00018b0690f0((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832855c0 + 0x60f) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  uVar6 = ~(uRam00000001832855e0 & 0x7fffffffffffffff) & uVar5;
  lVar7 = uVar5 - ((uint)uVar4 & 0x60f) * 2;
  uRam0000000183285698 = (uRam0000000183285698 ^ uVar6) + lVar7 + 0x60f ^ 0xaf60179c7f274dd1;
  uRam00000001832856d0 = (uRam00000001832856d0 * 0x6c98e570e39e23d7 ^ uRam0000000183285698) + uVar6;
  uRam0000000183285560 = uRam00000001832856d0 ^ uRam0000000183285698;
  uRam00000001832855f8 = lVar7 + 0x60fU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14063,0x324);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b05fea5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a444a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fA; aSe (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18b069180, runtime 6ffff2c79180) =====

void FUN_18b069180(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018b0691cb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a46480 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fA; aSf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18b06a190, runtime 6ffff2c7a190) =====

void FUN_18b06a190(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b06a219 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a46a40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



