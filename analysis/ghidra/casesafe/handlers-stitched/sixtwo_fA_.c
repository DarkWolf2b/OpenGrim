// ===== STITCHED CORPUS: sixtwo.fA =====
// handlers: 7  continuation blocks: 65  unresolved table targets: 0
// tables not in tables.json: ['0x12ba718', '0x170c0', '0x1a3f530', '0x1a3fcb8', '0x1a3fcc8', '0x1a3fcd8', '0x1a3fce8', '0x1a3fcf8', '0x1a3fd08', '0x1a3fd18', '0x1a40018', '0x1a40028', '0x1a40038', '0x1a405c8', '0x1a405d8', '0x1a405e8', '0x1a46300', '0x1a46308', '0x1a46310', '0x1a46318']

// ===== Lsixtwo/fA; _55aef275d55a37c987ad6b6b0cab4a38 ()V (handler @ image 18b06cea0, runtime 6ffff2c7cea0) =====

void FUN_18b06cea0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14063,0x324)
      /* POOL[0x14063,0x324]: CIryL | likHN | aRX | euEJd | ddesD | aRW | sixtwo/fA | pJNbd | aSb | npLQh | cCwdY | HGYdz | gaHGm | Lblbv | BMRFS | aSd | EnpZA | jKuHD | sixtwo/fB | XVRCB | WFFVU | pKMKg | NSrLe | UkpKz | aSc | aSo | snORa | bApwx | aSi | zlYES | qRPky | EFLIl | itUea | HBnKR | cHl | MeJvD | RsARQ | XUAcx | vOaqN | FOTTj | ZabSq | bzn | aSq | LDZVd | JTphg | SotCh | aSp | aSj | XNMmn | YSeRv | aSt | mldcd | aSk | PEgLw | ftPwi | sixtwo/fC | sLnpv | aSz | pltDm | method_5771 | bwT | (Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/ */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x14063,0x324)
      /* POOL[0x14063,0x324]: CIryL | likHN | aRX | euEJd | ddesD | aRW | sixtwo/fA | pJNbd | aSb | npLQh | cCwdY | HGYdz | gaHGm | Lblbv | BMRFS | aSd | EnpZA | jKuHD | sixtwo/fB | XVRCB | WFFVU | pKMKg | NSrLe | UkpKz | aSc | aSo | snORa | bApwx | aSi | zlYES | qRPky | EFLIl | itUea | HBnKR | cHl | MeJvD | RsARQ | XUAcx | vOaqN | FOTTj | ZabSq | bzn | aSq | LDZVd | JTphg | SotCh | aSp | aSj | XNMmn | YSeRv | aSt | mldcd | aSk | PEgLw | ftPwi | sixtwo/fC | sLnpv | aSz | pltDm | method_5771 | bwT | (Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/ */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b06a219 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a46a40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xb02a64f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b02a64f(void)

{
  FUN_190ddce00();
  (*_DAT_181a3e658)();
  return;
}


// ----- block @ rva 0xb02db8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b02db8c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181a3daa8)();
  return;
}


// ----- block @ rva 0xb02dc7f -----

void FUN_18b02dc7f(void)

{
  return;
}


// ----- block @ rva 0xb030123 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b030123(void)

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


// ----- block @ rva 0xb03241d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b03241d(void)

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


// ----- block @ rva 0xb0326b5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0326b5(void)

{
  FUN_190dd72e0();
  (*_DAT_181a3ccd8)();
  return;
}


// ----- block @ rva 0xb032b72 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b032b72(void)

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


// ----- block @ rva 0xb034313 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b034313(void)

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


// ----- block @ rva 0xb03482f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b03482f(void)

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


// ----- block @ rva 0xb034e1f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b034e1f(void)

{
  FUN_190de3220();
  (*_DAT_181a3d348)();
  return;
}


// ----- block @ rva 0xb03573d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b03573d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a3bf78)();
  return;
}


// ----- block @ rva 0xb036460 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b036460(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_181a3dd08)();
  return;
}


// ----- block @ rva 0xb036723 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b03675a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b036723(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb03675d -----

undefined8 FUN_18b03675d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xb036778 -----

void FUN_18b036778(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018b0367a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a3f530 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xb03680e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b03680e(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  *(undefined8 *)(unaff_RBP + 0x80) = unaff_RBX;
  uVar13 = (ulonglong)unaff_ESI;
  uVar7 = ((_DAT_1832846b0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832846b0 & 0x84222325) * 2) *
          (uVar13 - _DAT_183284770);
  uVar7 = (uVar7 | _DAT_1832845e8) + (uVar7 & _DAT_1832845e8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1832846b0 =
       func_0x00018b05deb0((uVar13 ^ 0x84222325 | uVar7) +
                           (ulonglong)((uint)(uVar13 ^ 0x84222325) & (uint)uVar7));
  uVar6 = _DAT_181a40050;
  uVar5 = _DAT_181a40040;
  uVar12 = _UNK_181a40038;
  uVar11 = _DAT_181a40030;
  uVar15 = _UNK_181a40028;
  uVar8 = _DAT_181a40020;
  uVar4 = _UNK_180556978;
  uVar3 = _DAT_180556970;
  uVar2 = _UNK_1802b9bf8;
  uVar17 = _DAT_1802b9bf0;
  uVar16 = _UNK_1801ec258;
  uVar7 = _DAT_1801ec250;
  uVar9 = -uVar13;
  _DAT_183284ae8 =
       (_DAT_183284ae8 ^ _DAT_1832846b0 * -0x6d42f30b41fc3a47) - uVar13 ^ 0x9587561b709d7faf;
  _DAT_183284978 =
       (_DAT_183284978 * -0x33b1e1ab952c2413 ^ _DAT_183284ae8) +
       _DAT_1832846b0 * -0x6d42f30b41fc3a47;
  _DAT_183284a90 = _DAT_183284978 ^ _DAT_183284ae8;
  _DAT_183284838 = uVar9 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x40) = (uint)uVar9;
  *(char *)(unaff_RBP + 0x78) = (char)uVar9 + (char)((uVar9 & 0xffffffff) / 10) * -10;
  _DAT_1832846a0 = func_0x00018b05deb0(_DAT_183284ad8 + 0x23007bbdffddffU ^ 0x1c);
  _DAT_183284868 =
       (_DAT_183284868 ^ _DAT_1832846a0 & 0xfffffffffffffffe) + 0x7b ^ 0xcf81772d77793bc2;
  _DAT_183284528 =
       (_DAT_183284528 * -0x2e1cea0816901c99 ^ _DAT_183284868) +
       (_DAT_1832846a0 & 0xfffffffffffffffe);
  _DAT_183284a58 = _DAT_183284528 ^ _DAT_183284868;
  _DAT_183284930 = 0x7b;
  uVar13 = (_DAT_183284658 ^ uVar8) + _DAT_1832848c0 + 0x84222395;
  uVar14 = (_DAT_1832848c0 ^ uVar15) + _DAT_183284658 + 0xd8;
  uVar8 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_183284658 ^ uVar8;
  uVar15 = (uVar14 * 0x2000 | uVar14 >> 0x33) ^ _DAT_1832848c0 ^ uVar15;
  _DAT_1832849b0 =
       func_0x00018b05deb0((uVar15 << 0x1d | uVar15 >> 0x23) - (_DAT_183284658 + 0xd8) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832848c0 + 0x84222395));
  uVar8 = (ulonglong)(~(((uint)_DAT_1832849b0 ^ 0x9480) * 2) >> 1 & 0xb0);
  _DAT_183284a58 = (_DAT_183284a58 ^ uVar8) + 0x68 ^ 0x9f677b9788d545c;
  _DAT_183284538 = (_DAT_183284538 * 0x2b9f3b65bf78dfc1 ^ _DAT_183284a58) + uVar8;
  _DAT_183284858 = _DAT_183284538 ^ _DAT_183284a58;
  _DAT_183284650 = 0x68;
  _DAT_183284530 = func_0x00018b05deb0(_DAT_183284788 ^ 0x23008454ffe19c);
  uVar8 = _DAT_183284530 - (_DAT_183284530 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = ((uint)bVar1 + (uint)bVar1 ^ _DAT_183284530) * 0x63e3edae511917c1;
  _DAT_183284880 = _DAT_183284850 ^ uVar8 ^ 0x130;
  _DAT_183284668 = (_DAT_183284668 ^ uVar8) + 0x130 ^ 0xf0f119b69462fc16;
  _DAT_183284850 = (_DAT_183284850 * 0x4a9c8aba602b43d3 ^ _DAT_183284668) + uVar8;
  _DAT_183284ad0 = _DAT_183284850 ^ _DAT_183284668;
  _DAT_183284918 = 0x30;
  _DAT_183284988 = func_0x00018b05deb0(_DAT_183284578 + 0x1eff7c14ffe1ff ^ 0xef);
  uVar8 = (ulonglong)(~(uint)_DAT_183284988 & 0x30);
  _DAT_183284600 = _DAT_183284a30 ^ uVar8 ^ 0x30;
  _DAT_183284690 = (_DAT_183284690 ^ uVar8) + 0x30 ^ 0x5b1eccf417be9cdc;
  _DAT_183284a70 = (_DAT_183284a70 * 0x468fb387cb23e06f ^ _DAT_183284690) + uVar8;
  _DAT_183284578 = _DAT_183284a70 ^ _DAT_183284690;
  _DAT_183284630 = 0x30;
  uVar8 = ((_DAT_183284598 ^ 0x84222315) + (ulonglong)((uint)_DAT_183284598 & 0x84222315) * 2) *
          -_DAT_183284910;
  uVar8 = (uVar8 | _DAT_183284728) + (uVar8 & _DAT_183284728);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_183284968 = func_0x00018b05deb0((uVar8 | 0x84222315) + (ulonglong)((uint)uVar8 & 0x84222315))
  ;
  uVar8 = _DAT_183284968 & 0x7fffffffff;
  _DAT_1832846e8 = _DAT_183284898 ^ uVar8 ^ 0x30;
  _DAT_1832849b0 = (_DAT_1832849b0 ^ uVar8) + 0x30 ^ 0x2d1788059fdfd3b2;
  _DAT_183284888 = (_DAT_183284888 * -0x4059593e01af8c53 ^ _DAT_1832849b0) + uVar8;
  _DAT_183284680 = _DAT_183284888 ^ _DAT_1832849b0;
  _DAT_183284738 = _DAT_183284570 ^ 0x30;
  _DAT_183284530 = 0x30;
  uVar8 = (_DAT_183284a30 ^ uVar7) + _DAT_183284a48 + 0x84222325;
  uVar15 = (_DAT_183284a48 ^ uVar16) + _DAT_183284a30 + 0x70;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183284a30 ^ uVar7;
  uVar16 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ _DAT_183284a48 ^ uVar16;
  func_0x00018b05deb0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_183284a30 + 0x70) ^
                      (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183284a48 + 0x84222325));
  _DAT_183284a50 = _DAT_183284a50 - 0x70 ^ 0x9e553d5a3f57279f;
  _DAT_1832848a8 = _DAT_183284830 * -0x153f6f28f7960697;
  _DAT_183284830 = _DAT_1832848a8 ^ _DAT_183284a50;
  _DAT_1832845c0 = 0x90;
  _DAT_1832847f8 = func_0x00018b05deb0(_DAT_183284af0 + 0xffdf00840b001dff ^ 0xa3);
  uVar7 = _DAT_1832847f8 << 0x3e | _DAT_1832847f8 >> 2 & 0xfffffffffffffe00;
  _DAT_183284520 = _DAT_183284740 ^ uVar7 ^ 0x130;
  _DAT_1832846a0 = (_DAT_1832846a0 ^ uVar7) + 0x130 ^ 0x6f74c67ce19fe2e3;
  _DAT_183284988 = (_DAT_183284988 * -0x1baefb247b4450ab ^ _DAT_1832846a0) + uVar7;
  _DAT_183284588 = _DAT_183284988 ^ _DAT_1832846a0;
  _DAT_183284850 = 0x30;
  _DAT_183284760 = func_0x00018b05deb0(_DAT_183284940 ^ 0x1f007bf200211e);
  _DAT_1832849c0 = _DAT_183284ad0 ^ _DAT_183284808 ^ 0xe3;
  _DAT_183284908 = (_DAT_183284908 ^ _DAT_183284808) + 0xe3 ^ 0x5af470f221d86331;
  _DAT_1832845d8 = (_DAT_1832845d8 * -0x107fbd2b8d2b207 ^ _DAT_183284908) + _DAT_183284808;
  _DAT_183284638 = _DAT_1832845d8 ^ _DAT_183284908;
  _DAT_183284a38 = 0xe3;
  uVar7 = _DAT_183284668 ^ uVar11;
  uVar16 = _DAT_1832847e8 ^ uVar12;
  uVar8 = uVar7 + _DAT_1832847e8 + 0x8422235e;
  uVar15 = uVar16 + _DAT_183284668 + 0x68;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar7;
  uVar16 = (uVar15 * 0x2000 | uVar15 >> 0x33) ^ uVar16;
  _DAT_1832845a0 =
       func_0x00018b05deb0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_183284668 + 0x68) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832847e8 + 0x8422235e));
  _DAT_183284700 = (_DAT_183284700 ^ _DAT_1832845a0 & 0x1fffffffffffff) + 0x13 ^ 0x64e605651d1ec5eb;
  _DAT_1832847d8 =
       (_DAT_1832847d8 * -0xfab6431c6a32e37 ^ _DAT_183284700) + (_DAT_1832845a0 & 0x1fffffffffffff);
  _DAT_1832846f0 = _DAT_1832847d8 ^ _DAT_183284700;
  _DAT_183284a78 = 0x13;
  uVar11 = _DAT_183284888 ^ uVar11;
  uVar12 = _DAT_183284a60 ^ uVar12;
  uVar7 = uVar11 + _DAT_183284a60 + 0x8422235e;
  uVar16 = uVar12 + _DAT_183284888 + 0x68;
  uVar11 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar11;
  uVar12 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ uVar12;
  _DAT_183284770 =
       func_0x00018b05deb0((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_183284888 + 0x68) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183284a60 + 0x8422235e));
  uVar7 = (ulonglong)(~(uint)_DAT_183284770 & 0x7b);
  _DAT_183284a00 = (_DAT_183284a00 ^ uVar7) + 0x68 ^ 0x66c0fb99e7aa5b8b;
  _DAT_183284948 = (_DAT_183284948 * -0x290ec569c9e18ccd ^ _DAT_183284a00) + uVar7;
  _DAT_183284508 = _DAT_183284948 ^ _DAT_183284a00;
  _DAT_1832848e0 = 0x68;
  _DAT_183284a60 = func_0x00018b05deb0(_DAT_183284888 ^ 0xffe0ff8359ffe195);
  uVar7 = (_DAT_183284a60 ^ 0xf70) & 0x7fffffffffffffff;
  _DAT_1832845b8 = _DAT_183284888 ^ uVar7 ^ 0xe3;
  _DAT_183284730 = (_DAT_183284730 ^ uVar7) + 0xe3 ^ 0xbdf651b155486adf;
  _DAT_1832849e0 = (_DAT_1832849e0 * 0x740d739e181bd39d ^ _DAT_183284730) + uVar7;
  _DAT_1832845c8 = _DAT_1832849e0 ^ _DAT_183284730;
  _DAT_183284af0 = 0xe3;
  uVar7 = (~_DAT_1832849c0 + 0xe4) *
          ((_DAT_183284588 ^ 0x842223c6) + (ulonglong)((uint)_DAT_183284588 & 0x842223c6) * 2);
  uVar7 = (uVar7 | _DAT_1832846b0) + (uVar7 & _DAT_1832846b0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183284af0 = func_0x00018b05deb0((uVar7 | 0x84222325) + (ulonglong)((uint)uVar7 & 0x84222325))
  ;
  _DAT_183284500 = (_DAT_183284af0 ^ 0xc949) << 0x3c | (_DAT_183284af0 ^ 0xc949) >> 4;
  _DAT_183284700 = _DAT_183284700 ^ _DAT_183284500 ^ 0xecc7ecc02c1fcfb6;
  _DAT_1832847d8 = (_DAT_1832847d8 * -0x1730b3b34f526f5d ^ _DAT_183284700) + _DAT_183284500;
  _DAT_183284748 = _DAT_1832847d8 ^ _DAT_183284700;
  _DAT_183284af8 = 0;
  _DAT_1832848b8 = func_0x00018b05deb0(_DAT_183284870 + 0xffe0ff7bf5001dffU ^ 0x2b);
  uVar7 = _DAT_1832848b8 & 0xffffffffff000000;
  _DAT_1832849d0 = _DAT_1832849b8 ^ uVar7 ^ 0x30;
  _DAT_1832848e8 = (_DAT_1832848e8 ^ uVar7) + 0x30 ^ 0xc7dc26b4f8c50f6d;
  _DAT_183284560 = (_DAT_1832846c8 * -0x64d32c764f7563b5 ^ _DAT_1832848e8) + uVar7 ^ _DAT_1832848e8;
  _DAT_1832846c8 = 0x30;
  uVar7 = (_DAT_1832845b8 ^ uVar3) + _DAT_1832845f0 + 0x8422235e;
  uVar16 = (_DAT_1832845f0 ^ uVar4) + _DAT_1832845b8 + 0xff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832845b8 ^ uVar3;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_1832845f0 ^ uVar4;
  _DAT_183284908 =
       func_0x00018b05deb0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_1832845b8 + 0xff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1832845f0 + 0x8422235e));
  uVar7 = _DAT_183284908 ^ 0xff;
  uVar16 = uVar7 >> 1 | uVar7;
  uVar16 = uVar16 >> 2 | uVar16;
  uVar16 = uVar16 >> 4 | uVar16;
  uVar16 = uVar16 >> 8 | uVar16;
  uVar16 = uVar16 >> 0x10 | uVar16;
  uVar16 = uVar16 >> 0x20 | uVar16;
  uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar7 ^ 0xff;
  _DAT_183284a90 = (_DAT_183284a90 ^ uVar7) + 0x84 ^ 0x7e83bc9def417f37;
  _DAT_1832848c8 = (_DAT_1832848c8 * 0x638ceb94af76a7d7 ^ _DAT_183284a90) + uVar7;
  _DAT_183284538 = _DAT_1832848c8 ^ _DAT_183284a90;
  _DAT_183284848 = 0x84;
  uVar7 = (_DAT_183284628 ^ uVar17) + _DAT_183284818 + 0x8422235e;
  uVar16 = (_DAT_183284818 ^ uVar2) + _DAT_183284628 + 0x84;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183284628 ^ uVar17;
  uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ _DAT_183284818 ^ uVar2;
  _DAT_1832848f8 =
       func_0x00018b05deb0((uVar16 << 0x1d | uVar16 >> 0x23) - (_DAT_183284628 + 0x84) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183284818 + 0x8422235e));
  uVar7 = (_DAT_1832848f8 & 0xffffffff) * (ulonglong)uVar5 +
          ((_DAT_1832848f8 & 0xffffffff) * (ulonglong)uVar6 +
           (_DAT_1832848f8 >> 0x20) * (ulonglong)uVar5 << 0x20);
  uVar7 = uVar7 * 0x40000000 | (uVar7 & 0x7fffffffffffffff) >> 0x22;
  _DAT_183284920 = _DAT_183284920 ^ uVar7 ^ 0x7ee4c3ca9deb3889;
  _DAT_1832848d0 = (_DAT_1832848d0 * -0x1463605305041c27 ^ _DAT_183284920) + uVar7;
  _DAT_1832848e8 = _DAT_1832848d0 ^ _DAT_183284920;
  _DAT_183284650 = 0;
  _DAT_183284540 = func_0x00018b05deb0(_DAT_1832848a0 ^ 0x1d007c0d0021d6);
  uVar7 = _DAT_183284540 << 0x17 | _DAT_183284540 >> 0x29;
  _DAT_1832847c8 = _DAT_1832847a8 ^ uVar7 ^ 0x30;
  _DAT_1832845f8 = (_DAT_1832845f8 ^ uVar7) + 0x30 ^ 0x32316b08b0b30941;
  _DAT_183284880 = (_DAT_183284880 * -0x11a1edeac7594c13 ^ _DAT_1832845f8) + uVar7;
  _DAT_1832848e0 = _DAT_183284880 ^ _DAT_1832845f8;
  _DAT_1832847c0 = 0x30;
  _DAT_1832848f8 = func_0x00018b05deb0(_DAT_1832846d8 + 0x22ff7be4ffddff);
  _DAT_183284578 = _DAT_183284578 ^ _DAT_1832848f8 & 0xffffffffffffffe0 ^ 0x18d0f8fc52c9f142;
  _DAT_1832846a8 =
       (_DAT_1832846a8 * 0x2f2a6141183ce67d ^ _DAT_183284578) +
       (_DAT_1832848f8 & 0xffffffffffffffe0);
  _DAT_183284670 = _DAT_1832846a8 ^ _DAT_183284578;
  _DAT_183284800 = 0;
  bVar1 = *(byte *)(unaff_RBP + 0x78);
  uVar7 = (ulonglong)bVar1 ^ 0x84222325;
  uVar16 = uVar7 ^ _DAT_183284668;
  lVar10 = uVar7 + _DAT_1832845c8;
  uVar7 = uVar16 + lVar10;
  uVar17 = (_DAT_1832845c8 ^ 0x30) + _DAT_183284668 + 0x30;
  uVar16 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar16;
  uVar7 = (uVar17 * 0x2000 | uVar17 >> 0x33) ^ _DAT_1832845c8 ^ 0x30;
  _DAT_1832849c8 =
       func_0x00018b05deb0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183284668 + 0x30) ^
                           (uVar16 << 0x1d | uVar16 >> 0x23) - lVar10);
  _DAT_183284920 = (ulonglong)bVar1 | 0x30;
  uVar7 = ((_DAT_1832849c8 ^ _DAT_183284920) & 0x7fffffffffffffff) >> 2;
  _DAT_183284ac0 = (uVar7 * 4 ^ _DAT_183284ac0) + _DAT_183284920 ^ 0xc0962b27d4b12e67;
  _DAT_1832849a8 = (_DAT_1832849a8 * -0x574f4575ef8ed2c1 ^ _DAT_183284ac0) + uVar7 * 4;
  _DAT_183284910 = _DAT_183284ac0 ^ _DAT_1832849a8;
  *(char *)(unaff_RBP + -0x3c) = (char)_DAT_183284920;
  switch((uint)uVar9 < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb0399e0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0399e0(void)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *(undefined8 *)(unaff_RBP + 0x80) = in_RAX;
  *(uint *)(unaff_RBP + 0x78) = unaff_EDI;
  *(uint *)(unaff_RBP + 0x40) = unaff_EDI;
  *(char *)(unaff_RBP + 0x38) = (char)unaff_EDI + (char)(unaff_EDI / 10) * -10;
  uVar2 = (_DAT_183284a60 ^ _DAT_181a40010) + _DAT_183284560 + 0x842223f5;
  uVar3 = (_DAT_183284560 ^ _UNK_181a40018) + _DAT_183284a60 + 0xa7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183284a60 ^ _DAT_181a40010;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183284560 ^ _UNK_181a40018;
  _DAT_183284988 =
       func_0x00018b05deb0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183284a60 + 0xa7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183284560 + 0x842223f5));
  uVar2 = (ulonglong)((uint)_DAT_183284988 & 0xd0);
  _DAT_183284ad0 = (_DAT_183284ad0 ^ uVar2) + 0xf7 ^ 0xf763ecd163ca989;
  _DAT_183284828 = (_DAT_183284828 * -0x184f7e73b0ffad53 ^ _DAT_183284ad0) + uVar2;
  _DAT_183284510 = _DAT_183284828 ^ _DAT_183284ad0;
  _DAT_183284790 = 0xf7;
  _DAT_183284678 = func_0x00018b05deb0(_DAT_183284538 ^ 0xffdeff7b8e002169);
  uVar2 = (ulonglong)((~((int)_DAT_183284678 * 0x60f5d759) & 0x49U) << 7);
  _DAT_183284ae8 = (_DAT_183284ae8 ^ uVar2) + 0xb7 ^ 0x30ddd0ec4dba703d;
  _DAT_183284a88 = (_DAT_183284a88 * 0x5a645dd3f0280357 ^ _DAT_183284ae8) + uVar2;
  _DAT_183284910 = _DAT_183284a88 ^ _DAT_183284ae8;
  _DAT_1832845f0 = 0xb7;
  uVar2 = ((_DAT_183284710 ^ 0x84222325) + (ulonglong)((uint)_DAT_183284710 & 0x84222325) * 2) *
          -_DAT_183284580;
  uVar2 = (uVar2 | _DAT_183284910) + (uVar2 & _DAT_183284910);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183284550 = func_0x00018b05deb0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_1832849f0 = _DAT_1832849f0 ^ _DAT_183284550 ^ 0xb580f9f3a9dac26c;
  _DAT_1832847b0 = (_DAT_1832847b0 * 0x2480756c0446d751 ^ _DAT_1832849f0) + _DAT_183284550;
  _DAT_1832846a8 = _DAT_1832847b0 ^ _DAT_1832849f0;
  _DAT_183284820 = 0;
  uVar2 = ((_DAT_183284760 ^ 0x84222315) + (ulonglong)((uint)_DAT_183284760 & 0x84222315) * 2) *
          -_DAT_183284860;
  uVar2 = (uVar2 | _DAT_183284aa0) + (uVar2 & _DAT_183284aa0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183284900 = func_0x00018b05deb0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = (_DAT_183284900 & 0xffffffffffffe000) + 0x30;
  _DAT_183284738 = _DAT_183284770 ^ uVar2 ^ 0x30;
  _DAT_1832849a8 = (uVar2 ^ _DAT_1832849a8) + 0x30 ^ 0x9e550f2aa23747a5;
  _DAT_1832845b8 =
       (_DAT_183284900 & 0xffffffffffffe000) +
       (_DAT_1832845b8 * -0x28c66d727a951a99 ^ _DAT_1832849a8) + 0x30;
  _DAT_1832845f8 = _DAT_1832849a8 ^ _DAT_1832845b8;
  _DAT_183284828 = 0x30;
  uVar2 = ((_DAT_1832848e8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832848e8 & 0x84222315) * 2) *
          -_DAT_183284580;
  uVar2 = (uVar2 | _DAT_183284958) + (uVar2 & _DAT_183284958);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183284a30 = func_0x00018b05deb0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = _DAT_183284a30 >> 1 | _DAT_183284a30;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183284a30;
  _DAT_183284900 = _DAT_183284698 ^ uVar2 ^ 0x30;
  _DAT_183284610 = (_DAT_183284610 ^ uVar2) + 0x30 ^ 0x412a1a072e0ed30a;
  _DAT_1832847f8 = (_DAT_1832847f8 * 0x5f01c7115fb107ef ^ _DAT_183284610) + uVar2;
  _DAT_183284598 = _DAT_1832847f8 ^ _DAT_183284610;
  _DAT_183284940 = 0x30;
  uVar2 = (~_DAT_183284aa8 + 0xd9) *
          ((_DAT_183284930 ^ 0x84222325) + (ulonglong)((uint)_DAT_183284930 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183284830) + (uVar2 & _DAT_183284830);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183284760 = func_0x00018b05deb0((uVar2 | 0x842223fd) + (ulonglong)((uint)uVar2 & 0x842223fd))
  ;
  uVar2 = _DAT_183284760 - (_DAT_183284760 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183284760;
  _DAT_183284610 = (_DAT_183284610 ^ uVar2) - 0xd8 ^ 0xe08eb0bd966258c3;
  _DAT_183284730 = (_DAT_183284730 * -0x5e3e72c52b99bf21 ^ _DAT_183284610) + uVar2;
  _DAT_183284700 = _DAT_183284730 ^ _DAT_183284610;
  _DAT_183284a20 = 0x28;
  _DAT_183284808 = func_0x00018b05deb0(_DAT_1832847d8 + 0x1cff833b0021ffU ^ 0xa9);
  uVar2 = (ulonglong)((uint)_DAT_183284808 ^ 0xf8) << 0x28 | _DAT_183284808 >> 0x18;
  _DAT_183284af8 = _DAT_1832845e8 ^ uVar2 ^ 0x108;
  _DAT_183284a40 = (_DAT_183284a40 ^ uVar2) + 0x108 ^ 0x272c3a5e191916b6;
  _DAT_183284a30 = (_DAT_183284a30 * -0x66873859a0af9fab ^ _DAT_183284a40) + uVar2;
  _DAT_1832847c8 = _DAT_183284a30 ^ _DAT_183284a40;
  _DAT_183284650 = 8;
  _DAT_183284530 = func_0x00018b05deb0(_DAT_1832845e8 ^ 0xffdcff83fcffdd0e);
  uVar2 = _DAT_183284530 ^ 8;
  _DAT_183284ac0 = _DAT_183284858 ^ uVar2 ^ 0x30;
  _DAT_183284518 = (_DAT_183284518 ^ uVar2) + 0x30 ^ 0x68b45ccb00bf6e57;
  _DAT_1832848c8 = (_DAT_1832848c8 * -0x740a7bb845815191 ^ _DAT_183284518) + uVar2;
  _DAT_1832846c0 = _DAT_1832848c8 ^ _DAT_183284518;
  _DAT_1832847c8 = _DAT_183284780 ^ 0x30;
  _DAT_183284740 = 0x30;
  uVar2 = (_DAT_183284748 ^ _DAT_180af78d0) + _DAT_183284760 + 0x84222315;
  uVar3 = (_DAT_183284760 ^ _UNK_180af78d8) + _DAT_183284748 + 0x20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183284748 ^ _DAT_180af78d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183284760 ^ _UNK_180af78d8;
  _DAT_183284af8 =
       func_0x00018b05deb0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183284748 + 0x20) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183284760 + 0x84222315));
  uVar2 = _DAT_183284af8 ^ 0x20;
  _DAT_1832847d0 = _DAT_183284a38 ^ uVar2 ^ 0x50;
  _DAT_1832845e8 = (_DAT_1832845e8 ^ uVar2) + 0x50 ^ 0xeadcfa3d91952884;
  _DAT_183284600 = (_DAT_183284600 * 0x78f8dd2c96479fd ^ _DAT_1832845e8) + uVar2;
  _DAT_1832849c0 = _DAT_183284600 ^ _DAT_1832845e8;
  _DAT_183284948 = 0x50;
  uVar2 = (~_DAT_1832848e0 + 0xb8) *
          ((_DAT_183284790 ^ 0x842223d2) + (ulonglong)((uint)_DAT_183284790 & 0x842223d2) * 2);
  uVar2 = (uVar2 | _DAT_183284950) + (uVar2 & _DAT_183284950);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183284a48 = func_0x00018b05deb0((uVar2 | 0x84222365) + (ulonglong)((uint)uVar2 & 0x84222365))
  ;
  uVar2 = _DAT_183284a48 & 0x3ffffffff;
  _DAT_183284618 = _DAT_183284528 ^ uVar2 ^ 0x1ae;
  _DAT_1832849d8 = (_DAT_1832848b0 ^ uVar2) + 0x1ae ^ 0x23af353c58f8c1b6;
  _DAT_1832847a8 = (_DAT_1832847a8 * 0x4a29b4d04f748e2d ^ _DAT_1832849d8) + uVar2;
  _DAT_1832849d8 = _DAT_1832847a8 ^ _DAT_1832849d8;
  _DAT_1832848b0 = 0xae;
  _DAT_183284720 = func_0x00018b05deb0(_DAT_183284898 ^ 0xffdd007b9b001d27);
  uVar2 = _DAT_183284720 - (_DAT_183284720 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183284720;
  _DAT_183284730 = (_DAT_183284730 ^ uVar2) + 0x40 ^ 0xb687caedfdc06e36;
  _DAT_1832845f8 = (_DAT_1832845f8 * -0x5a7af59dd084716b ^ _DAT_183284730) + uVar2;
  _DAT_183284670 = _DAT_1832845f8 ^ _DAT_183284730;
  _DAT_183284948 = 0x40;
  _DAT_183284800 = func_0x00018b05deb0(_DAT_1832848d0 + 0xffe0ff83e3001dffU ^ 0x16);
  _DAT_1832845a0 = (_DAT_1832845a0 ^ _DAT_183284800) + 0xb7 ^ 0xe21c6b0a43d77fd4;
  _DAT_183284548 = (_DAT_183284548 * -0xf24290920da287b ^ _DAT_1832845a0) + _DAT_183284800;
  _DAT_183284590 = _DAT_183284548 ^ _DAT_1832845a0;
  _DAT_1832847b0 = 0xb7;
  uVar2 = (~_DAT_183284898 + 0x6f) *
          ((_DAT_183284a98 ^ 0x84222365) + (ulonglong)((uint)_DAT_183284a98 & 0x84222365) * 2);
  uVar2 = (uVar2 | _DAT_1832849c8) + (uVar2 & _DAT_1832849c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832847f0 = func_0x00018b05deb0((uVar2 | 0x8422230b) + (ulonglong)((uint)uVar2 & 0x8422230b))
  ;
  _DAT_183284ac8 = _DAT_183284ae8 ^ _DAT_1832847f0 ^ 0xae;
  _DAT_183284558 = (_DAT_183284558 ^ _DAT_1832847f0) + 0xae ^ 0x4c58e4b03d32da56;
  _DAT_183284950 = (_DAT_183284950 * -0x2a0a3ac66490c15 ^ _DAT_183284558) + _DAT_1832847f0;
  _DAT_1832845f0 = _DAT_183284950 ^ _DAT_183284558;
  _DAT_1832848d8 = 0xae;
  uVar2 = (_DAT_183284818 ^ 0x84222315) + _DAT_183284a40 + 0x84222315;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183284818 ^ 0x84222315;
  uVar3 = ((_DAT_183284a40 + _DAT_183284818) * 0x2000 | _DAT_183284a40 + _DAT_183284818 >> 0x33) ^
          _DAT_183284a40;
  _DAT_183284a70 =
       func_0x00018b05deb0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_183284818 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183284a40 + 0x84222315));
  uVar2 = _DAT_183284a70 >> 1 | _DAT_183284a70;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183284a70;
  _DAT_183284810 = _DAT_183284948 ^ uVar2 ^ 0x30;
  _DAT_183284ae0 = (_DAT_183284ae0 ^ uVar2) + 0x30 ^ 0x8e3d2655dfa374ba;
  _DAT_1832846f8 = (_DAT_1832846f8 * 0x1e0830cc00f6ec4d ^ _DAT_183284ae0) + uVar2;
  _DAT_183284740 = _DAT_1832846f8 ^ _DAT_183284ae0;
  _DAT_183284500 = 0x30;
  uVar2 = (_DAT_183284850 ^ _DAT_1812ba710) + _DAT_1832848c0 + 0x842223d2;
  uVar3 = (_DAT_1832848c0 ^ _UNK_1812ba718) + _DAT_183284850 + 0xff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183284850 ^ _DAT_1812ba710;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832848c0 ^ _UNK_1812ba718;
  _DAT_183284878 =
       func_0x00018b05deb0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183284850 + 0xff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832848c0 + 0x842223d2));
  uVar2 = _DAT_183284878 & 0xfffffffffffffff0;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar2 ^ 0xf7;
  _DAT_1832849b8 = (_DAT_1832849b8 ^ uVar2) + 8 ^ 0xee3559363905e00f;
  _DAT_183284570 = (_DAT_183284570 * -0x17737993c415757d ^ _DAT_1832849b8) + uVar2;
  _DAT_1832849c0 = _DAT_183284570 ^ _DAT_1832849b8;
  _DAT_183284740 = 8;
  uVar2 = (~_DAT_183284508 + 9) *
          ((_DAT_183284508 ^ 0x842223d2) + (ulonglong)((uint)_DAT_183284508 & 0x842223d2) * 2);
  uVar2 = (uVar2 | _DAT_183284a90) + (uVar2 & _DAT_183284a90);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183284a70 = func_0x00018b05deb0((uVar2 | 0x842223da) + (ulonglong)((uint)uVar2 & 0x842223da))
  ;
  _DAT_1832846f0 = _DAT_1832846f0 ^ _DAT_183284a70 ^ 0x659fc9b2aa1b9b0a;
  _DAT_1832847f0 = (_DAT_1832847f0 * -0x3f3a60f601e064d7 ^ _DAT_1832846f0) + _DAT_183284a70;
  _DAT_183284ac8 = _DAT_1832847f0 ^ _DAT_1832846f0;
  _DAT_183284988 = 0;
  uVar2 = ((_DAT_183284900 ^ 0x84222315) + (ulonglong)((uint)_DAT_183284900 & 0x84222315) * 2) *
          -_DAT_183284908;
  uVar2 = (uVar2 | _DAT_1832848c0) + (uVar2 & _DAT_1832848c0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183284660 = func_0x00018b05deb0((uVar2 | 0x84222315) + (ulonglong)((uint)uVar2 & 0x84222315))
  ;
  uVar2 = (_DAT_183284660 ^ 0x30) & 0x7fffffffffffffff;
  _DAT_1832846b0 = _DAT_183284750 ^ uVar2 ^ 0x30;
  _DAT_183284790 = (_DAT_183284790 ^ uVar2) + 0x30 ^ 0x9006292319888dc0;
  _DAT_183284ae8 = (_DAT_183284ae8 * -0x14bda9a14fed12b5 ^ _DAT_183284790) + uVar2;
  _DAT_1832845d8 = _DAT_183284ae8 ^ _DAT_183284790;
  _DAT_183284878 = 0x30;
  uVar2 = (ulonglong)*(byte *)(unaff_RBP + 0x38);
  uVar3 = (~_DAT_183284988 + 0x31) *
          ((uVar2 ^ 0x84222325 ^ _DAT_1832848e8) +
          (ulonglong)((uint)_DAT_1832848e8 & (uint)(uVar2 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | _DAT_183284580) + (uVar3 & _DAT_183284580);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183284650 =
       func_0x00018b05deb0((uVar2 ^ 0x84222315 | uVar3) +
                           (ulonglong)((uint)(uVar2 ^ 0x84222315) & (uint)uVar3));
  _DAT_183284ae0 = uVar2 | 0x30;
  uVar3 = _DAT_183284650 ^ _DAT_183284ae0;
  uVar1 = uVar3 >> 1 | uVar3;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = uVar2 ^ (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
                  * 0x10 ^ uVar3;
  _DAT_183284960 = (_DAT_183284960 ^ uVar2) + _DAT_183284ae0 ^ 0xa15cb910058d2847;
  _DAT_183284678 = (_DAT_183284678 * 0x6000fcc2c74d8373 ^ _DAT_183284960) + uVar2;
  _DAT_183284958 = _DAT_183284678 ^ _DAT_183284960;
  *(char *)(*(longlong *)(unaff_RBP + 0x80) + -1) = (char)_DAT_183284ae0;
  switch(*(uint *)(unaff_RBP + 0x40) < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb03ac9e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b03ac9e(longlong *param_1)

{
  longlong unaff_RBP;
  
  (**(code **)(param_1 + JNI->ThrowNew /*0x70*/))();
  switch(0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb03ea01 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18b03ea01(void)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  _DAT_183284ac0 = func_0x00018b05deb0(_DAT_1832849e8 ^ 0xcb66c15282750e56);
  uVar3 = _DAT_183284ac0 >> 1 | _DAT_183284ac0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = _DAT_183284ac0 ^ 0x20d82a0b4016b91a ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80;
  _DAT_183284a40 = (_DAT_183284a40 ^ uVar3) + 0x6bd9bbcf7636bbbe ^ 0x9ded705363d471c;
  _DAT_1832848b8 = (_DAT_1832848b8 * -0x458a4b020d033f2f ^ _DAT_183284a40) + uVar3;
  _DAT_183284750 = _DAT_1832848b8 ^ _DAT_183284a40;
  _DAT_183284788 = 0x6bd9bbcf7636bbbe;
  uVar3 = (_DAT_183284768 ^ _DAT_181a405c0) + _DAT_183284a88 + 0xbd384f4193bfd7;
  uVar4 = (_DAT_183284a88 ^ _UNK_181a405c8) + _DAT_183284768 + 0x31bbe4d64d1bad19;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183284768 ^ _DAT_181a405c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183284a88 ^ _UNK_181a405c8;
  lVar2 = func_0x00018b05deb0((uVar4 << 0x1d | uVar4 >> 0x23) -
                              (_DAT_183284768 + 0x31bbe4d64d1bad19) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183284a88 + 0xbd384f4193bfd7))
  ;
  _DAT_183284500 = (_DAT_183284500 ^ _DAT_183284638) + 0x3106dc9988aa31eb ^ 0xb3a0ea6e9096b3e8;
  _DAT_1832847c8 = (lVar2 * 0x5f1749a32c0aa2b ^ _DAT_183284500) + _DAT_183284638;
  _DAT_183284740 = _DAT_1832847c8 ^ _DAT_183284500;
  _DAT_1832848c8 = 0x3106dc9988aa31eb;
  uVar3 = (~_DAT_183284640 + 0x23ac4302c6177eb1) *
          ((_DAT_183284a30 ^ 0x8422230d) + (ulonglong)((uint)_DAT_183284a30 & 0x8422230d) * 2);
  uVar3 = (uVar3 | _DAT_183284798) + (uVar3 & _DAT_183284798);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183284510 = func_0x00018b05deb0((uVar3 | 0x23ac430242355dbd) + (uVar3 & 0x23ac430242355dbd));
  uVar3 = (ulonglong)((uint)_DAT_183284510 & 0x28) * 0x545a4ebccb04f59f;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555554);
  uVar4 = (uVar4 & 0x3333333333333330) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3;
  _DAT_183284a08 = _DAT_183284a50 ^ uVar3 ^ 0x23ac4302c6177ed8;
  _DAT_183284aa8 = (_DAT_183284aa8 ^ uVar3) + 0x23ac4302c6177ed8 ^ 0x71deed5675cd9093;
  _DAT_183284900 = (_DAT_183284900 * -0x7e94394f8d3f9d5b ^ _DAT_183284aa8) + uVar3;
  _DAT_1832849b8 = _DAT_183284900 ^ _DAT_183284aa8;
  _DAT_1832845c0 = 0x23ac4302c6177ed8;
  uVar3 = (~_DAT_183284598 + 0xdc53bcfd39e88151) *
          ((_DAT_1832846b8 ^ 0x23ac430242355dfd) + (_DAT_1832846b8 & 0x23ac430242355dfd) * 2);
  uVar3 = (uVar3 | _DAT_1832846e8) + (uVar3 & _DAT_1832846e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183284928 = func_0x00018b05deb0((uVar3 | 0xffffffff7bdddcad) + (uVar3 & 0xffffffff7bdddcad));
  uVar3 = _DAT_183284928 & 0xfffffffffffffff;
  _DAT_183284960 = _DAT_1832847a0 ^ uVar3 ^ 0x28;
  _DAT_1832846b8 = (_DAT_1832846b8 ^ uVar3) + 0x28 ^ 0xdaa8b42e9d08f20b;
  _DAT_183284780 = (_DAT_183284780 * -0x7234154f9d3fb6f1 ^ _DAT_1832846b8) + uVar3;
  _DAT_183284ab0 = _DAT_183284780 ^ _DAT_1832846b8;
  _DAT_183284a18 = 0x28;
  _DAT_1832847c8 = func_0x00018b05deb0(_DAT_183284728 + 0xa8b9b52f0ad2d91aU ^ 0x70);
  uVar3 = _DAT_1832847c8 - (_DAT_1832847c8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1832847c8;
  _DAT_1832845a0 = _DAT_183284a88 ^ uVar3 ^ 0xfd75ee78d5dbe998;
  _DAT_183284720 = (_DAT_183284720 ^ uVar3) + 0xfd75ee78d5dbe998 ^ 0x9526063bd3d4b004;
  _DAT_183284508 = (_DAT_183284508 * 0xc93a2c97eacb5f5 ^ _DAT_183284720) + uVar3;
  _DAT_1832846a0 = _DAT_183284508 ^ _DAT_183284720;
  _DAT_183284a10 = 0xfd75ee78d5dbe998;
  uVar3 = (_DAT_183284570 ^ _DAT_181a405d0) + _DAT_183284af0 + 0xfd75ee7851f9cabd;
  uVar4 = (_DAT_183284af0 ^ _UNK_181a405d8) + _DAT_183284570 + 0x28a11872a241690;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183284570 ^ _DAT_181a405d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183284af0 ^ _UNK_181a405d8;
  _DAT_1832847e0 =
       func_0x00018b05deb0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183284570 + 0x28a11872a241690) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183284af0 + 0xfd75ee7851f9cabd));
  _DAT_1832847a0 = _DAT_183284900 ^ _DAT_1832847e0 ^ 0x28;
  _DAT_183284738 = (_DAT_183284738 ^ _DAT_1832847e0) + 0x28 ^ 0x9654029a536ec764;
  _DAT_183284768 = (_DAT_183284768 * 0x62f272e843cea1db ^ _DAT_183284738) + _DAT_1832847e0;
  _DAT_183284850 = _DAT_183284768 ^ _DAT_183284738;
  _DAT_1832845b8 = 0x28;
  uVar3 = (~_DAT_1832849b8 + 0x23e7c98fe4f8e7c1) *
          ((_DAT_183284678 ^ 0x84222325) + (ulonglong)((uint)_DAT_183284678 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183284a70) + (uVar3 & _DAT_183284a70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183284a38 = func_0x00018b05deb0((uVar3 | 0x23e7c98f60dac4e5) + (uVar3 & 0x23e7c98f60dac4e5));
  uVar3 = _DAT_183284a38 << 0x22 | _DAT_183284a38 >> 0x1e;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = (uint)bVar1 + (uint)bVar1 ^ uVar3;
  _DAT_1832847d8 = (_DAT_1832847d8 ^ uVar3) + 0xdc1836701b071840 ^ 0xa3ad122ed38bcfe8;
  _DAT_1832849b0 = (_DAT_1832849b0 * -0x7a78e27165012db3 ^ _DAT_1832847d8) + uVar3;
  _DAT_183284708 = _DAT_1832849b0 ^ _DAT_1832847d8;
  _DAT_183284a00 = 0xdc1836701b071840;
  uVar3 = (~_DAT_183284af0 + 0x3106dc9988aa31ec) * 0x47f1f2400d1bb0db;
  uVar3 = (uVar3 | _DAT_183284af8) + (uVar3 & _DAT_183284af8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183284a18 = func_0x00018b05deb0((uVar3 | 0x5adf67567abea970) + (uVar3 & 0x5adf67567abea970));
  uVar3 = (_DAT_183284a18 ^ 0x10e52db59a59b56a) >> 1 | _DAT_183284a18 ^ 0x10e52db59a59b56a;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = _DAT_183284a18 ^ 0x7b3c967aec6f0ed4 ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40;
  _DAT_183284740 = _DAT_1832847e8 ^ uVar3 ^ 0x9ce09868fee0eda9;
  _DAT_1832848a8 = (_DAT_1832848a8 ^ uVar3) + 0x9ce09868fee0eda9 ^ 0x9b3404efb6e1f431;
  _DAT_1832847f0 = (_DAT_1832847f0 * -0x2876820244686f8d ^ _DAT_1832848a8) + uVar3;
  _DAT_1832846b8 = _DAT_1832847f0 ^ _DAT_1832848a8;
  _DAT_183284858 = 0x9ce09868fee0eda9;
  uVar3 = (~_DAT_183284878 + 0x3106dc9988aa31ec) *
          ((_DAT_183284828 ^ 0x6bd9bbcff214989b) + (_DAT_183284828 & 0x6bd9bbcff214989b) * 2);
  uVar3 = (uVar3 | _DAT_183284670) + (uVar3 & _DAT_183284670);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183284930 = func_0x00018b05deb0((uVar3 | 0x5adf67567abea970) + (uVar3 & 0x5adf67567abea970));
  uVar3 = _DAT_183284930 << 8 | _DAT_183284930 >> 0x38;
  _DAT_183284648 = (_DAT_183284648 ^ uVar3) + 0x5adf6756fe9c8a55 ^ 0x2d8b3c89d9fb55b9;
  _DAT_183284aa0 = (_DAT_183284aa0 * -0x42134e1688b8735d ^ _DAT_183284648) + uVar3;
  _DAT_183284758 = _DAT_183284aa0 ^ _DAT_183284648;
  _DAT_183284510 = 0x5adf6756fe9c8a55;
  _DAT_183284590 = func_0x00018b05deb0(_DAT_183284978 ^ 0xb667cb566f9e4956);
  uVar3 = (_DAT_183284590 & 0xfffffffff0000000) - (_DAT_183284590 >> 1 & 0x5555555550000000);
  uVar3 = (uVar3 & 0x3333333330000000) + (uVar3 >> 2 & 0x3333333330000000);
  uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f07000000) * 0x101010101010101 >> 0x38 &
          0xfffffffff00000f0 | _DAT_183284590 & 0xfffffffff0000000;
  _DAT_1832846a0 = (_DAT_1832846a0 ^ uVar3) + 0x21009889002231aa ^ 0xecf39828c227db02;
  _DAT_1832848a8 = (_DAT_1832848a8 * -0x1cdd4bc8311a38c1 ^ _DAT_1832846a0) + uVar3;
  _DAT_183284870 = _DAT_1832848a8 ^ _DAT_1832846a0;
  _DAT_1832848e0 = 0x21009889002231aa;
  uVar3 = (_DAT_1832846e8 ^ _DAT_181a405e0) + _DAT_1832848a0 + 0x9ce098687ac2ce8c;
  uVar4 = (_DAT_1832848a0 ^ _UNK_181a405e8) + _DAT_1832846e8 + 0x9ce09868fee0eda9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832846e8 ^ _DAT_181a405e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832848a0 ^ _UNK_181a405e8;
  _DAT_183284908 =
       func_0x00018b05deb0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832846e8 + 0x9ce09868fee0eda9) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832848a0 + 0x9ce098687ac2ce8c));
  _DAT_183284590 = 0x5fb2ae27d224b023;
  _DAT_183284720 =
       (_DAT_183284720 * 0x7f1444cdcf561f35 ^ 0x5fb2ae27d224b023) +
       (_DAT_183284908 ^ 0x9ce09868fee0eda9);
  _DAT_183284750 = _DAT_183284720 ^ 0x5fb2ae27d224b023;
  _DAT_183284850 = 0;
  uVar3 = ~_DAT_183284548 *
          ((_DAT_183284ad8 ^ 0x6bd9bbcff214989b) + (_DAT_183284ad8 & 0x6bd9bbcff214989b) * 2);
  uVar3 = (uVar3 | _DAT_183284598) + (uVar3 & _DAT_183284598);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832845c8 = func_0x00018b05deb0((uVar3 | 0x942644300deb6764) + (uVar3 & 0x942644300deb6764));
  uVar3 = (_DAT_1832845c8 ^ 0x9426443089c94442) & 0x7fffffffffffffff;
  _DAT_183284880 = (_DAT_183284880 ^ uVar3) + 0x9426443089c94441 ^ 0x986aed09be4e2242;
  _DAT_183284a88 = (_DAT_183284a88 * -0x652377c5017d3363 ^ _DAT_183284880) + uVar3;
  _DAT_183284570 = _DAT_183284a88 ^ _DAT_183284880;
  _DAT_183284850 = 0x9426443089c94441;
  uVar3 = (~_DAT_1832848f8 + 0x9426443089c94442) *
          ((_DAT_1832847b0 ^ 0x6bd9bbcff214989b) + (_DAT_1832847b0 & 0x6bd9bbcff214989b) * 2);
  uVar3 = (uVar3 | _DAT_183284940) + (uVar3 & _DAT_183284940);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183284958 = func_0x00018b05deb0((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uVar3 = ~(_DAT_183284958 << 0x19 | _DAT_183284958 >> 0x27) & 0x6bd9bbcf7636bbbe;
  uVar3 = uVar3 << 0x24 | uVar3 >> 0x1c;
  _DAT_183284a40 = _DAT_183284a40 ^ uVar3 ^ 0x779065f3fccdbe62;
  _DAT_183284590 = (_DAT_183284590 * -0x60c69d9d21f7a0f ^ _DAT_183284a40) + uVar3;
  _DAT_183284870 = _DAT_183284590 ^ _DAT_183284a40;
  _DAT_183284930 = 0;
  uVar3 = (_DAT_183284958 ^ 0x8422230d) + _DAT_1832846b0 + 0x8422230d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183284958 ^ 0x8422230d;
  uVar4 = ((_DAT_1832846b0 + _DAT_183284958) * 0x2000 | _DAT_1832846b0 + _DAT_183284958 >> 0x33) ^
          _DAT_1832846b0;
  _DAT_1832847a0 =
       func_0x00018b05deb0((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_183284958 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832846b0 + 0x8422230d));
  uVar3 = _DAT_1832847a0 ^ 0x28;
  _DAT_183284af0 = _DAT_183284530 ^ uVar3 ^ 0x28;
  _DAT_183284508 = (_DAT_183284508 ^ uVar3) + 0x28 ^ 0x18c26cbdfc43b9de;
  _DAT_1832845d8 = (_DAT_1832845d8 * -0x5233bc6652c133d1 ^ _DAT_183284508) + uVar3;
  _DAT_183284898 = _DAT_1832845d8 ^ _DAT_183284508;
  _DAT_183284748 = 0x28;
  _DAT_1832845b8 = func_0x00018b05deb0(_DAT_183284af8 + 0x22ff7bdd0021ff ^ 0xf1);
  uVar3 = _DAT_1832845b8 << 0x1b | _DAT_1832845b8 >> 0x25;
  _DAT_183284570 = _DAT_183284570 ^ uVar3 ^ 0x502fb00c03466171;
  _DAT_183284700 = (_DAT_183284700 * -0x139d04437be0d2f1 ^ _DAT_183284570) + uVar3;
  _DAT_1832846e0 = _DAT_183284700 ^ _DAT_183284570;
  _DAT_183284a20 = 0;
  func_0x000180001044(*(undefined8 *)(unaff_RBP + 0x80),*(longlong *)(unaff_RBP + 0x78) + 0x28);
  return 0;
}


// ----- block @ rva 0xb047d83 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b047d83(void)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong unaff_XMM8_Qa;
  undefined8 unaff_XMM13_Qb;
  
  *(bool *)(unaff_RBP + 8) = *unaff_RBP == 0;
  _DAT_183284a08 = func_0x00018b05deb0(_DAT_1832845a8 ^ 0x1f0036f400514b);
  _DAT_183284988 = (_DAT_183284988 ^ _DAT_183284a08 ^ 0x916275c5) + 0xdd72fdf5 ^ 0x5f192736303e0999;
  _DAT_183284650 =
       (_DAT_183284650 * -0x471abff4913e590b ^ _DAT_183284988) + (_DAT_183284a08 ^ 0x916275c5);
  _DAT_1832846c8 = _DAT_183284650 ^ _DAT_183284988;
  _DAT_183284700 = 0xdd72fdf5;
  _DAT_183284858 = func_0x00018b05deb0(_DAT_183284960 + 0x5bffa9cbff2eff ^ 0xbf);
  _DAT_183284558 =
       (_DAT_183284558 ^ _DAT_183284858 & 0x3ffffffffffffff) + 0xeef387f1 ^ 0x6abd655583afde00;
  _DAT_183284958 =
       (_DAT_183284958 * 0x7ed301bcc6af129 ^ _DAT_183284558) + (_DAT_183284858 & 0x3ffffffffffffff);
  _DAT_1832848c8 = _DAT_183284958 ^ _DAT_183284558;
  _DAT_183284798 = 0xeef387f1;
  _DAT_183284600 = func_0x00018b05deb0(_DAT_1832847b8 ^ 0xfff60093baffbb3a);
  _DAT_183284878 =
       (_DAT_183284878 ^ _DAT_183284600 & 0xfffffffffffffff) - 0x28e635e0 ^ 0xd3cc88cd94b8c98e;
  _DAT_1832849c8 =
       (_DAT_1832849c8 * 0x5bbf026a1ec02a51 ^ _DAT_183284878) + (_DAT_183284600 & 0xfffffffffffffff)
  ;
  _DAT_183284960 = _DAT_1832849c8 ^ _DAT_183284878;
  _DAT_1832849e0 = 0xd719ca20;
  uVar6 = (~_DAT_183284608 + 0xa320da41) *
          ((_DAT_183284550 ^ unaff_RDI) + (ulonglong)((uint)_DAT_183284550 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_1832847e8) + (uVar6 & _DAT_1832847e8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1832849e0 = func_0x00018b05deb0((uVar6 | 0x2702f965) + (ulonglong)((uint)uVar6 & 0x2702f965))
  ;
  _DAT_183284a18 =
       (_DAT_183284a18 ^ _DAT_1832849e0 & 0xffffffffffc00000) - 0xa320da40 ^ 0xdf11cb0bb7178dc8;
  _DAT_1832847a0 =
       (_DAT_1832847a0 * 0x707b922a1618bb61 ^ _DAT_183284a18) +
       (_DAT_1832849e0 & 0xffffffffffc00000);
  _DAT_183284a38 = _DAT_1832847a0 ^ _DAT_183284a18;
  _DAT_183284500 = 0x5cdf25c0;
  uVar6 = (_DAT_183284928 ^ _DAT_181a3fcb0) + _DAT_183284528 + 0x842224e5;
  uVar11 = (_DAT_183284528 ^ _UNK_181a3fcb8) + _DAT_183284928 + 0xa320da40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183284928 ^ _DAT_181a3fcb0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183284528 ^ _UNK_181a3fcb8;
  _DAT_1832845a8 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183284928 + 0xa320da40) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183284528 + 0x842224e5));
  uVar6 = (_DAT_1832845a8 ^ 0x4f03e9b7000) * 0x33b6598289585409;
  _DAT_183284938 = _DAT_183284948 ^ uVar6 ^ 0xa320e200;
  _DAT_183284570 = (_DAT_183284570 ^ uVar6) + 0xa320e200 ^ 0x62b8733ea11ef214;
  _DAT_183284828 = (_DAT_183284828 * -0x63626ad87731dab7 ^ _DAT_183284570) + uVar6;
  _DAT_1832847c8 = _DAT_183284828 ^ _DAT_183284570;
  _DAT_183284650 = 0xa320e200;
  _DAT_183284a80 = func_0x00018b05deb0(_DAT_183284890 ^ 0xffdc001562ff2a8a);
  uVar6 = _DAT_183284a80 ^ 0xffffe7c0;
  uVar11 = uVar6 >> 1 | uVar6;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (~((uint)uVar6 ^
            (0x40 - (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x80) & 0xa320e200);
  _DAT_1832845e0 = _DAT_183284a40 ^ uVar6 ^ 0x1000007c0;
  _DAT_1832848f8 = (_DAT_1832848f8 ^ uVar6) + 0x1000007c0 ^ 0xc1bc78502451e152;
  _DAT_183284658 = (_DAT_183284658 * 0x11dc22c60bfe84ff ^ _DAT_1832848f8) + uVar6;
  _DAT_183284880 = _DAT_183284658 ^ _DAT_1832848f8;
  _DAT_183284850 = 0x7c0;
  _DAT_183284788 = func_0x00018b05deb0(_DAT_183284930 ^ 0x46ffd2d300347d);
  _DAT_1832847c8 = _DAT_1832847c8 - 0xb71f6a70 ^ 0x234c66af55438383;
  _DAT_183284810 = _DAT_183284a98 * 0x4cb92fe2adb94521;
  _DAT_183284a98 = _DAT_183284810 ^ _DAT_1832847c8;
  _DAT_183284798 = 0x48e09590;
  uVar6 = (~_DAT_183284650 + 0xb71f6a71) *
          ((_DAT_183284968 ^ 0x842224e5) + (ulonglong)((uint)_DAT_183284968 & 0x842224e5) * 2);
  uVar6 = (uVar6 | _DAT_183284a78) + (uVar6 & _DAT_183284a78);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183284880 = func_0x00018b05deb0((uVar6 | 0x333d4e95) + (ulonglong)((uint)uVar6 & 0x333d4e95))
  ;
  uVar6 = _DAT_183284880 & 0xfffffffffffffff;
  _DAT_183284630 = _DAT_183284750 ^ uVar6 ^ 0xb71f7230;
  _DAT_1832845f0 = (_DAT_1832845f0 ^ uVar6) + 0xb71f7230 ^ 0xcbb0ce28f4566788;
  _DAT_1832846c8 = (_DAT_1832846c8 * 0x1381d76f99a00ced ^ _DAT_1832845f0) + uVar6;
  _DAT_183284ad0 = _DAT_1832846c8 ^ _DAT_1832845f0;
  _DAT_183284780 = 0xb71f7230;
  _DAT_183284698 = func_0x00018b05deb0(_DAT_183284900 ^ 0xc4000582ffca2b);
  uVar6 = _DAT_183284698 ^ 0x34217e9db9262b00;
  _DAT_183284860 = _DAT_1832849a8 ^ uVar6 ^ 0x1000007c0;
  _DAT_183284a40 = (_DAT_183284a40 ^ uVar6) + 0x1000007c0 ^ 0x7a56dad307d26a3;
  _DAT_183284658 = (_DAT_183284658 * -0x606aa1e3e02fc7d1 ^ _DAT_183284a40) + uVar6;
  _DAT_1832845f0 = _DAT_183284658 ^ _DAT_183284a40;
  _DAT_183284728 = 0x7c0;
  uVar6 = (~_DAT_1832849a8 + 0xeef387f2) *
          ((_DAT_183284a68 ^ 0x5950ded0) + (ulonglong)((uint)_DAT_183284a68 & 0x5950ded0) * 2);
  uVar6 = (uVar6 | _DAT_183284630) + (uVar6 & _DAT_183284630);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1832849b0 = func_0x00018b05deb0((uVar6 | 0xb7a35921) + (ulonglong)((uint)uVar6 & 0xb7a35921))
  ;
  uVar6 = _DAT_1832849b0 >> 1 | _DAT_1832849b0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1832849b0;
  _DAT_1832845e0 = _DAT_183284678 ^ uVar6 ^ 0x1cc6685e6;
  _DAT_183284a28 = (_DAT_183284a28 ^ uVar6) + 0x1cc6685e6 ^ 0x2f059579f31681a9;
  _DAT_183284ae0 = (_DAT_183284ae0 * -0x1ede5b05a6001f35 ^ _DAT_183284a28) + uVar6;
  _DAT_183284ab0 = _DAT_183284ae0 ^ _DAT_183284a28;
  _DAT_183284aa0 = _DAT_1832846a0 ^ 0x1cc6685e6;
  _DAT_1832848d0 = 0xcc6685e6;
  uVar6 = (_DAT_1832847c0 ^ _DAT_181a3fcc0) + _DAT_1832849e8 + 0x5950ded0;
  uVar11 = (_DAT_1832849e8 ^ _UNK_181a3fcc8) + _DAT_1832847c0 + 0xeef387f1;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832847c0 ^ _DAT_181a3fcc0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1832849e8 ^ _UNK_181a3fcc8;
  _DAT_1832848c8 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1832847c0 + 0xeef387f1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832849e8 + 0x5950ded0));
  _DAT_183284958 = (_DAT_183284958 ^ _DAT_183284620) + 0xcc7285f1 ^ 0x715b89a974fd7303;
  _DAT_183284800 = (_DAT_183284800 * 0x345d34429c497dc3 ^ _DAT_183284958) + _DAT_183284620;
  _DAT_1832845d8 = _DAT_183284800 ^ _DAT_183284958;
  _DAT_183284778 = 0xcc7285f1;
  uVar6 = (_DAT_183284540 ^ _DAT_181a3fcd0) + _DAT_183284a10 + 0xb7a35921;
  uVar11 = (_DAT_183284a10 ^ _UNK_181a3fcd8) + _DAT_183284540 + 0x98e50be2;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183284540 ^ _DAT_181a3fcd0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183284a10 ^ _UNK_181a3fcd8;
  _DAT_183284af8 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183284540 + 0x98e50be2) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183284a10 + 0xb7a35921));
  _DAT_183284660 = _DAT_183284978 ^ _DAT_183284af8 ^ 0xcc6685e6;
  _DAT_1832845d0 = (_DAT_1832845d0 ^ _DAT_183284af8) + 0xcc6685e6 ^ 0x33aad9ab244a866d;
  _DAT_183284628 = (_DAT_183284628 * -0x31c66d6f7af44767 ^ _DAT_1832845d0) + _DAT_183284af8;
  _DAT_183284950 = _DAT_183284628 ^ _DAT_1832845d0;
  _DAT_1832845e0 = 0xcc6685e6;
  uVar6 = (_DAT_1832845a8 ^ _DAT_181a3fce0) + _DAT_1832847f0 + 0x4844a6c3;
  uVar11 = (_DAT_1832847f0 ^ _UNK_181a3fce8) + _DAT_1832845a8 + 0xcc6685e6;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832845a8 ^ _DAT_181a3fce0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1832847f0 ^ _UNK_181a3fce8;
  _DAT_183284620 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1832845a8 + 0xcc6685e6) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832847f0 + 0x4844a6c3));
  _DAT_1832845f8 = _DAT_183284620 ^ 0xcc6685e6;
  _DAT_183284998 = _DAT_183284998 ^ _DAT_1832845f8 ^ 0xae3ea1c215a9533f;
  _DAT_183284aa0 = (_DAT_183284aa0 * 0x6951507f139c7c2f ^ _DAT_183284998) + _DAT_1832845f8;
  _DAT_183284788 = _DAT_183284aa0 ^ _DAT_183284998;
  _DAT_1832845c8 = 0;
  _DAT_183284590 = func_0x00018b05deb0(_DAT_1832846a0 ^ 0x23ff845d001d94);
  uVar6 = _DAT_183284590 & 0xfffffffffe000000;
  _DAT_183284a10 = _DAT_183284ae8 ^ uVar6 ^ 0x7c0;
  _DAT_1832846a0 = (_DAT_1832846a0 ^ uVar6) + 0x7c0 ^ 0x7eee0cd08c99a04c;
  _DAT_183284840 = (_DAT_183284840 * 0x67e313c91112879d ^ _DAT_1832846a0) + uVar6;
  _DAT_183284738 = _DAT_183284840 ^ _DAT_1832846a0;
  _DAT_183284968 = 0x7c0;
  uVar6 = (_DAT_183284888 ^ _DAT_181a3fcf0) + _DAT_1832849e8 + 0x5950ded0;
  uVar11 = (_DAT_1832849e8 ^ _UNK_181a3fcf8) + _DAT_183284888 + 0x228d020a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183284888 ^ _DAT_181a3fcf0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1832849e8 ^ _UNK_181a3fcf8;
  _DAT_183284880 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183284888 + 0x228d020a) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832849e8 + 0x5950ded0));
  _DAT_183284878 = _DAT_183284878 ^ _DAT_183284880 ^ 0x228d020a ^ 0x3d711758a7875323;
  _DAT_183284890 =
       (_DAT_183284890 * 0xf28f4c7732af89 ^ _DAT_183284878) + (_DAT_183284880 ^ 0x228d020a);
  _DAT_183284560 = _DAT_183284890 ^ _DAT_183284878;
  _DAT_1832845d8 = 0;
  uVar6 = (_DAT_183284828 ^ 0x842224e5) + _DAT_183284a90 + 0x842224e5;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183284828 ^ 0x842224e5;
  uVar11 = ((_DAT_183284a90 + _DAT_183284828) * 0x2000 | _DAT_183284a90 + _DAT_183284828 >> 0x33) ^
           _DAT_183284a90;
  _DAT_1832846c8 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183284828 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183284a90 + 0x842224e5));
  uVar6 = _DAT_1832846c8 - (_DAT_1832846c8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_1832846c8;
  _DAT_183284768 = _DAT_1832848c8 ^ uVar6 ^ 0x7c0;
  _DAT_183284558 = (_DAT_183284558 ^ uVar6) + 0x7c0 ^ 0x46b1b56997e60059;
  _DAT_183284a48 = (_DAT_183284a48 * 0x48e1f0c23b3928ed ^ _DAT_183284558) + uVar6;
  _DAT_1832848a0 = _DAT_183284a48 ^ _DAT_183284558;
  _DAT_1832847d0 = 0x7c0;
  uVar6 = (~_DAT_183284990 + 0xdc12b9f5) *
          ((_DAT_183284738 ^ 0x58309ad1) + (ulonglong)((uint)_DAT_183284738 & 0x58309ad1) * 2);
  uVar6 = (uVar6 | _DAT_183284870) + (uVar6 & _DAT_183284870);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183284538 = func_0x00018b05deb0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  uVar6 = (_DAT_183284538 ^ 0xdc12b9f4) & 0x7ffff8000;
  _DAT_183284840 = _DAT_183284840 ^ uVar6 ^ 0xa1b4bc7bda5d777a;
  _DAT_183284728 = (_DAT_183284728 * -0x525d0a02b5333043 ^ _DAT_183284840) + uVar6;
  _DAT_183284ae8 = _DAT_183284728 ^ _DAT_183284840;
  _DAT_183284788 = 0;
  uVar6 = (ulonglong)unaff_ESI ^ 0x84222325;
  uVar6 = (~_DAT_183284818 + 0x7c1) *
          ((uVar6 ^ _DAT_183284ac0) + (ulonglong)((uint)_DAT_183284ac0 & (uint)uVar6) * 2);
  uVar6 = (uVar6 | _DAT_183284800) + (uVar6 & _DAT_183284800);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar11 = (ulonglong)unaff_ESI ^ 0x842224e5;
  _DAT_183284a88 = func_0x00018b05deb0((uVar11 | uVar6) + (ulonglong)((uint)uVar11 & (uint)uVar6));
  uVar6 = _DAT_183284a88 << 0x1f | (_DAT_183284a88 & 0x3fffffffffffffff) >> 0x21;
  uVar8 = (ulonglong)(unaff_ESI & 0x7c0);
  _DAT_183284570 = (_DAT_183284570 ^ uVar6) + uVar8 ^ 0x4d8f39e96fadd731;
  _DAT_183284620 = (_DAT_183284620 * 0x52189f03389f91cf ^ _DAT_183284570) + uVar6;
  _DAT_183284510 = _DAT_183284620 ^ _DAT_183284570;
  plVar2 = (longlong *)unaff_RBP[4];
  lVar7 = unaff_RBP[7];
  _DAT_183284760 = uVar8;
  lVar4 = (**(code **)(plVar2 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(plVar2,lVar7,0);
  *(int *)(unaff_RBP + 10) = (int)*(char *)(lVar4 + (int)unaff_RBP[0xb]);
  (**(code **)(plVar2 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(plVar2,lVar7,lVar4,2);
  unaff_RBP[0x10] = (ulonglong)*(uint *)(unaff_RBP + 10);
  uVar6 = (~_DAT_183284580 + 0x5027553b) *
          ((_DAT_183284510 ^ 0xc0e893ac) + (ulonglong)((uint)_DAT_183284510 & 0xc0e893ac) * 2);
  uVar6 = (uVar6 | _DAT_1832848c0) + (uVar6 & _DAT_1832848c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183284858 = func_0x00018b05deb0((uVar6 | 0x90cfc696) + (ulonglong)((uint)uVar6 & 0x90cfc696))
  ;
  uVar6 = (_DAT_183284858 ^ 0x54eff5bb) * -0x23d4c3b6011cafad;
  _DAT_183284708 = (_DAT_183284708 ^ uVar6) + 0x54eff5bb ^ 0xafefffbdda040d38;
  _DAT_183284808 = (_DAT_183284808 * -0x12df08ffefb72019 ^ _DAT_183284708) + uVar6;
  _DAT_1832845f0 = _DAT_183284808 ^ _DAT_183284708;
  _DAT_183284878 = 0x54eff5bb;
  _DAT_183284790 = func_0x00018b05deb0(_DAT_1832846c0 + 0xffb2006f4affa8ff ^ 0x3a);
  uVar6 = _DAT_183284790 >> 1 | _DAT_183284790;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_183284790;
  _DAT_1832846f0 = (_DAT_1832846f0 ^ uVar6) - 0xf5f5f5e8 ^ 0xcb8d05d4a211b53c;
  _DAT_183284798 = (_DAT_183284798 * 0x516e9656e55c8c01 ^ _DAT_1832846f0) + uVar6;
  _DAT_183284818 = _DAT_183284798 ^ _DAT_1832846f0;
  _DAT_1832846a8 = 0xa0a0a18;
  uVar6 = (~_DAT_183284a98 + 0xf5f5f5e9) *
          ((_DAT_1832848a0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1832848a0 & 0x8422231a) * 2);
  uVar6 = (uVar6 | _DAT_183284570) + (uVar6 & _DAT_183284570);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1832848f0 = func_0x00018b05deb0((uVar6 | 0x71d7d6f2) + (ulonglong)((uint)uVar6 & 0x71d7d6f2))
  ;
  uVar6 = _DAT_1832848f0 ^ 0x3f;
  _DAT_1832847a0 = _DAT_183284848 ^ uVar6 ^ 0xf5f5f627;
  _DAT_1832847d0 = (_DAT_1832847d0 ^ uVar6) + 0xf5f5f627 ^ 0x1a9f61a41589328;
  _DAT_1832846a8 = (_DAT_1832846a8 * 0x7ad515ab6b0cac89 ^ _DAT_1832847d0) + uVar6;
  _DAT_1832847c0 = _DAT_1832846a8 ^ _DAT_1832847d0;
  _DAT_183284500 = 0xf5f5f627;
  _DAT_183284628 = func_0x00018b05deb0(_DAT_1832849e8 ^ 0xa5003509ff520a);
  uVar6 = (_DAT_183284628 & 0x7fffffffff) * 0x13135cb31df98adb ^ 0xf5f5f627;
  _DAT_183284a30 = _DAT_183284518 ^ uVar6 ^ 0x10000003f;
  _DAT_1832849d8 = (_DAT_1832849d8 ^ uVar6) + 0x10000003f ^ 0xdb8179df357a85e;
  _DAT_1832846b0 = (_DAT_1832846b0 * 0x4a2e4ddf67061fa9 ^ _DAT_1832849d8) + uVar6;
  _DAT_1832848d0 = _DAT_1832846b0 ^ _DAT_1832849d8;
  _DAT_183284a28 = 0x3f;
  uVar6 = (~_DAT_183284900 + 0xcfbb8041) *
          ((_DAT_183284620 ^ 0x84222325) + (ulonglong)((uint)_DAT_183284620 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183284540) + (uVar6 & _DAT_183284540);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183284ae8 = func_0x00018b05deb0((uVar6 | 0x4b99a365) + (ulonglong)((uint)uVar6 & 0x4b99a365))
  ;
  _DAT_183284868 =
       (_DAT_183284868 ^ _DAT_183284ae8 * -0x7d9a4981fcc1c85) - 0xcfbb8040 ^ 0xfdf7071237092fd3;
  _DAT_183284658 =
       (_DAT_183284658 * -0x122c5b0430389055 ^ _DAT_183284868) + _DAT_183284ae8 * -0x7d9a4981fcc1c85
  ;
  _DAT_1832848d8 = _DAT_183284658 ^ _DAT_183284868;
  _DAT_183284af8 = 0x30447fc0;
  _DAT_1832847f8 = func_0x00018b05deb0(_DAT_1832848c8 + 0x630048c9ff66ff);
  uVar6 = (ulonglong)(~(uint)_DAT_1832847f8 & 0x3f);
  _DAT_1832846d8 = _DAT_1832846b8 ^ uVar6 ^ 0xcfbb807f;
  _DAT_183284a38 = (_DAT_183284a38 ^ uVar6) + 0xcfbb807f ^ 0xafb2e16aca63b2d5;
  _DAT_183284ad0 = (_DAT_183284ad0 * 0x626c2f83f9f3f1bd ^ _DAT_183284a38) + uVar6;
  _DAT_183284600 = _DAT_183284ad0 ^ _DAT_183284a38;
  _DAT_1832849a8 = _DAT_1832849d0 ^ 0xcfbb807f;
  _DAT_183284a58 = 0xcfbb807f;
  uVar6 = (~_DAT_183284670 + 0x30447fc1) *
          ((_DAT_183284540 ^ 0x4b99a35a) + (ulonglong)((uint)_DAT_183284540 & 0x4b99a35a) * 2);
  uVar6 = (uVar6 | _DAT_1832845a0) + (uVar6 & _DAT_1832845a0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183284608 = func_0x00018b05deb0((uVar6 | 0x7bdddc9a) + (ulonglong)((uint)uVar6 & 0x7bdddc9a))
  ;
  uVar6 = _DAT_183284608 & 0x3fffffffffffff;
  _DAT_1832847d8 = _DAT_183284538 ^ uVar6 ^ 0x10000003f;
  _DAT_183284a38 = (_DAT_183284a38 ^ uVar6) + 0x10000003f ^ 0x7b870465f3abf9d2;
  _DAT_183284a00 = (_DAT_183284a00 * -0x2bf0fe9b6b39feef ^ _DAT_183284a38) + uVar6;
  _DAT_183284700 = _DAT_183284a00 ^ _DAT_183284a38;
  _DAT_183284508 = 0x3f;
  uVar6 = (~_DAT_1832849b0 + 0xea0ec119) *
          ((_DAT_183284850 ^ 0x84222325) + (ulonglong)((uint)_DAT_183284850 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183284500) + (uVar6 & _DAT_183284500);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183284a38 = func_0x00018b05deb0((uVar6 | 0x6e2ce23d) + (ulonglong)((uint)uVar6 & 0x6e2ce23d))
  ;
  _DAT_1832845f8 = (_DAT_1832845f8 ^ _DAT_183284a38 ^ 0xea0ec118) - 0xea0ec118 ^ 0xb63358475cc90547;
  _DAT_1832846a8 =
       (_DAT_1832846a8 * -0x78dd97714a0e472d ^ _DAT_1832845f8) + (_DAT_183284a38 ^ 0xea0ec118);
  _DAT_183284808 = _DAT_1832846a8 ^ _DAT_1832845f8;
  _DAT_183284860 = 0x15f13ee8;
  uVar6 = (_DAT_1832845f8 ^ _DAT_181a3fd00) + _DAT_183284680 + 0x8422231a;
  uVar11 = (_DAT_183284680 ^ _UNK_181a3fd08) + _DAT_1832845f8 + 0xea0ec118;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832845f8 ^ _DAT_181a3fd00;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183284680 ^ _UNK_181a3fd08;
  _DAT_1832846f8 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1832845f8 + 0xea0ec118) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183284680 + 0x8422231a));
  _DAT_1832847c0 = _DAT_183284580 ^ _DAT_1832846f8 ^ 0xea0ec157;
  _DAT_183284a08 = (_DAT_183284a08 ^ _DAT_1832846f8) + 0xea0ec157 ^ 0xf233801fce989b53;
  _DAT_183284ac8 = (_DAT_183284ac8 * 0x250ac4a88025d05f ^ _DAT_183284a08) + _DAT_1832846f8;
  _DAT_183284638 = _DAT_183284ac8 ^ _DAT_183284a08;
  _DAT_183284808 = 0xea0ec157;
  _DAT_1832849c0 = func_0x00018b05deb0(_DAT_183284920 + 0x5bfffa79ffa2ff ^ 0x30);
  uVar6 = _DAT_1832849c0 ^ 0xea0ec157;
  _DAT_183284708 = _DAT_183284508 ^ uVar6 ^ 0x10000003f;
  _DAT_183284748 = (_DAT_183284748 ^ uVar6) + 0x10000003f ^ 0xb0c608f07afb3e6c;
  _DAT_1832847e0 = (_DAT_1832847e0 * 0x1590b897c6f9e1d9 ^ _DAT_183284748) + uVar6;
  _DAT_183284a38 = _DAT_1832847e0 ^ _DAT_183284748;
  _DAT_183284a90 = 0x3f;
  _DAT_183284a28 = func_0x00018b05deb0(_DAT_1832845b0 ^ 0xa40061d4ff91cd);
  uVar6 = _DAT_183284a28 * -0x617c14979bb5da7;
  _DAT_183284978 = _DAT_1832847f8 ^ uVar6 ^ 0x1144b682e;
  _DAT_1832848d0 = (_DAT_1832848d0 ^ uVar6) + 0x1144b682e ^ 0x1fdca25901d8b0e7;
  _DAT_1832846c0 = (_DAT_1832846c0 * -0x5d3cb5003eeefdb7 ^ _DAT_1832848d0) + uVar6;
  _DAT_1832849f0 = _DAT_1832846c0 ^ _DAT_1832848d0;
  _DAT_183284680 = 0x144b682e;
  uVar6 = (_DAT_183284908 ^ _DAT_181a3fd10) + _DAT_183284a08 + 0xd0cdd69e;
  uVar11 = (_DAT_183284a08 ^ _UNK_181a3fd18) + _DAT_183284908 + 0xbf5b7273;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183284908 ^ _DAT_181a3fd10;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183284a08 ^ _UNK_181a3fd18;
  _DAT_183284548 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183284908 + 0xbf5b7273) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183284a08 + 0xd0cdd69e));
  _DAT_183284a98 = (_DAT_183284a98 ^ _DAT_183284548 ^ 0x54eff5bb) + 0xebb487c8 ^ 0x211c0ca68328ef33;
  _DAT_183284598 =
       (_DAT_183284598 * 0x13ec9cf0d12d56e5 ^ _DAT_183284a98) + (_DAT_183284548 ^ 0x54eff5bb);
  _DAT_183284670 = _DAT_183284598 ^ _DAT_183284a98;
  _DAT_1832845e8 = 0xebb487c8;
  _DAT_183284ab0 = func_0x00018b05deb0(_DAT_1832849d0 + 0x5c0057daff69ff ^ 0xb9);
  uVar6 = (ulonglong)(~(uint)_DAT_183284ab0 & 0x54eff5bb | 0x4eff5bb);
  _DAT_1832848d0 = (_DAT_1832848d0 ^ uVar6) + 0x144b7033 ^ 0x44be6ea50ccf689;
  _DAT_183284730 = (_DAT_183284730 * -0x7e1bd0158bf7836b ^ _DAT_1832848d0) + uVar6;
  _DAT_183284548 = _DAT_183284730 ^ _DAT_1832848d0;
  _DAT_183284988 = 0x144b7033;
  uVar6 = (~_DAT_183284a20 + 0x2896e067) *
          ((_DAT_183284908 ^ 0x6f96a4ed) + (ulonglong)((uint)_DAT_183284908 & 0x6f96a4ed) * 2);
  uVar6 = (uVar6 | _DAT_1832847e0) + (uVar6 & _DAT_1832847e0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183284ac8 = func_0x00018b05deb0((uVar6 | 0x4700448b) + (ulonglong)((uint)uVar6 & 0x4700448b))
  ;
  uVar6 = (_DAT_183284ac8 ^ 0xebb6e7ee) << 0x22 | (_DAT_183284ac8 ^ 0xebb6e7ee) >> 0x1e;
  _DAT_183284988 = _DAT_183284ae8 ^ uVar6 ^ 0x1144b682e;
  _DAT_183284880 = (_DAT_183284880 ^ uVar6) + 0x1144b682e ^ 0xbe136e83707a560;
  _DAT_183284960 = (_DAT_183284960 * 0x706aea4058c7d5a7 ^ _DAT_183284880) + uVar6;
  _DAT_183284ab8 = _DAT_183284960 ^ _DAT_183284880;
  _DAT_183284958 = 0x144b682e;
  _DAT_1832848a0 = func_0x00018b05deb0(_DAT_1832845b0 ^ 0x23007c1600210f);
  uVar6 = _DAT_1832848a0 & 0xffffffffffffff;
  _DAT_183284770 = _DAT_1832848d0 ^ uVar6 ^ 0x3f;
  _DAT_183284960 = (_DAT_183284960 ^ uVar6) + 0x3f ^ 0xc3257becb47911d3;
  _DAT_1832846c0 = (_DAT_1832846c0 * -0x7dcf747523515211 ^ _DAT_183284960) + uVar6;
  _DAT_183284a68 = _DAT_1832846c0 ^ _DAT_183284960;
  _DAT_183284970 = 0x3f;
  uVar6 = (~_DAT_183284548 + 0xab100a45) *
          ((_DAT_1832846e8 ^ 0xd0cdd69e) + (ulonglong)((uint)_DAT_1832846e8 & 0xd0cdd69e) * 2);
  uVar6 = (uVar6 | _DAT_183284778) + (uVar6 & _DAT_183284778);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183284740 = func_0x00018b05deb0((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda))
  ;
  _DAT_183284508 = _DAT_183284508 ^ _DAT_183284978 ^ 0xd2985d8aede3de5;
  _DAT_183284828 = (_DAT_183284828 * 0x1cd65f2cbd7252fd ^ _DAT_183284508) + _DAT_183284978;
  _DAT_1832847d0 = _DAT_183284828 ^ _DAT_183284508;
  _DAT_183284a10 = 0;
  uVar6 = (_DAT_183284920 ^ 0x8422231a) + _DAT_183284700 + 0x8422231a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183284920 ^ 0x8422231a;
  uVar11 = ((_DAT_183284700 + _DAT_183284920) * 0x2000 | _DAT_183284700 + _DAT_183284920 >> 0x33) ^
           _DAT_183284700;
  _DAT_183284ac8 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183284920 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183284700 + 0x8422231a));
  uVar6 = (_DAT_183284ac8 & 0x1fffffffff0000) * 0x800;
  _DAT_1832848a0 = _DAT_183284868 ^ uVar6 ^ 0x3f;
  _DAT_183284650 = (_DAT_183284650 ^ uVar6) + 0x3f ^ 0xc9319f0a1163ef03;
  _DAT_1832846b8 = (_DAT_1832846b8 * 0x9b26d3cd4695923 ^ _DAT_183284650) + uVar6;
  _DAT_183284710 = _DAT_1832846b8 ^ _DAT_183284650;
  _DAT_183284828 = 0x3f;
  uVar6 = (_DAT_183284590 ^ 0x8422231a) + _DAT_1832849a0 + 0x8422231a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183284590 ^ 0x8422231a;
  uVar11 = ((_DAT_1832849a0 + _DAT_183284590) * 0x2000 | _DAT_1832849a0 + _DAT_183284590 >> 0x33) ^
           _DAT_1832849a0;
  _DAT_183284a38 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - _DAT_183284590 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832849a0 + 0x8422231a));
  uVar6 = (_DAT_183284a38 & 0x3ffffff) << 0x14 | _DAT_183284a38 >> 0x2c;
  _DAT_183284978 = _DAT_183284930 ^ uVar6 ^ 0x3f;
  _DAT_183284758 = (_DAT_183284758 ^ uVar6) + 0x3f ^ 0xc2c6adefc939f132;
  _DAT_183284af8 = (_DAT_183284af8 * -0x20626e6bb6284d91 ^ _DAT_183284758) + uVar6;
  _DAT_183284500 = _DAT_183284af8 ^ _DAT_183284758;
  _DAT_183284a48 = 0x3f;
  uVar6 = unaff_RBP[0x10];
  uVar11 = uVar6 ^ 0x84222325;
  uVar5 = uVar11 ^ _DAT_183284960;
  lVar7 = uVar11 + _DAT_1832846d0;
  uVar11 = uVar5 + lVar7;
  uVar12 = (_DAT_1832846d0 ^ 0x3f) + _DAT_183284960 + 0x3f;
  uVar5 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar5;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1832846d0 ^ 0x3f;
  _DAT_183284878 =
       func_0x00018b05deb0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183284960 + 0x3f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar7);
  uVar11 = _DAT_183284878 - (_DAT_183284878 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
           _DAT_183284878;
  uVar3 = (uint)uVar6 & 0x3f;
  _DAT_1832845c8 = (ulonglong)uVar3;
  _DAT_183284840 = (_DAT_183284840 ^ uVar11) + _DAT_1832845c8 ^ 0x607fc73bbc78d600;
  _DAT_183284a88 = (_DAT_183284a88 * 0x1a61ec799e8416cb ^ _DAT_183284840) + uVar11;
  _DAT_1832846f0 = _DAT_183284a88 ^ _DAT_183284840;
  uVar6 = _DAT_1832845c8 ^ 0x84222325;
  uVar11 = ((_DAT_183284a50 ^ uVar6) + (ulonglong)((uint)_DAT_183284a50 & (uint)uVar6) * 2) *
           (uVar8 - _DAT_183284900);
  uVar11 = (uVar11 | _DAT_1832846f8) + (uVar11 & _DAT_1832846f8);
  uVar11 = uVar11 * 0x2000 ^ uVar11;
  uVar11 = uVar11 >> 7 ^ uVar11;
  uVar11 = uVar11 << 0x11 ^ uVar11;
  _DAT_183284580 =
       func_0x00018b05deb0((uVar6 ^ uVar8 | uVar11) +
                           (ulonglong)((uint)(uVar6 ^ uVar8) & (uint)uVar11));
  uVar3 = uVar3 | unaff_ESI & 0x7c0;
  _DAT_183284a78 = (ulonglong)uVar3;
  _DAT_1832845a8 = (_DAT_1832845a8 ^ _DAT_183284580) + _DAT_183284a78 ^ 0xa58bee44cf2d75b4;
  _DAT_183284850 = (_DAT_183284850 * -0x59af5a7afc9a384b ^ _DAT_1832845a8) + _DAT_183284580;
  _DAT_183284598 = _DAT_183284850 ^ _DAT_1832845a8;
  unaff_RBP[10] = unaff_RBP[3];
  uVar1 = *(uint *)(unaff_RBP + 0xf);
  *(uint *)(unaff_RBP + 0xb) = uVar1;
  uVar5 = (ulonglong)uVar1;
  auVar9._8_8_ = unaff_XMM13_Qb;
  auVar9._0_8_ = uVar5 ^ 0x84222325;
  auVar10 = pshufb(auVar9 ^ _DAT_181a3fd20,_DAT_1800170c0);
  uVar11 = auVar10._8_8_ + auVar10._0_8_;
  uVar6 = uVar11 + _DAT_1832848b0;
  if (auVar10._4_4_ < 0) {
    uVar6 = _DAT_1832846c0 ^ uVar11;
  }
  _DAT_183284878 = func_0x00018b05deb0(SUB161(auVar9 ^ _DAT_181a3fd20,5) ^ uVar6);
  uVar13 = uVar1 & (uint)unaff_XMM8_Qa;
  uVar6 = ((uVar5 | 1) ^ _DAT_183284878) & 0x7ffffffffffff;
  _DAT_183284828 =
       ((((uVar5 ^ unaff_XMM8_Qa) & 0xffffffff) * (ulonglong)_DAT_181a3fd70 +
         (((uVar5 ^ unaff_XMM8_Qa) & 0xffffffff) * (ulonglong)_DAT_181a3fd80 +
          (unaff_XMM8_Qa >> 0x20) * (ulonglong)_DAT_181a3fd70 << 0x20) +
        ((ulonglong)uVar13 * (ulonglong)_DAT_181a3fd60 << 0x20 |
        (ulonglong)uVar13 * (ulonglong)_DAT_181a3fd50) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_181a3fd40 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_181a3fd30) -
       ((uVar5 | unaff_XMM8_Qa & 0xffffffff) * (ulonglong)_DAT_181a3fdd0 +
        ((unaff_XMM8_Qa >> 0x20) * (ulonglong)_DAT_181a3fdd0 +
         (uVar5 | unaff_XMM8_Qa & 0xffffffff) * (ulonglong)_DAT_181a3fde0 << 0x20) +
       ((ulonglong)uVar13 * (ulonglong)_DAT_181a3fde0 << 0x20 |
       (ulonglong)uVar13 * (ulonglong)_DAT_181a3fdd0) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_181a3fdc0 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_181a3fdb0)) + 0x7db49e5e0110b297;
  _DAT_1832846f0 = _DAT_183284a30 ^ uVar6 ^ _DAT_183284828;
  _DAT_183284500 = (_DAT_183284500 ^ uVar6) + _DAT_183284828 ^ 0x5c9f13df07f757de;
  _DAT_1832847e8 = (_DAT_1832847e8 * -0x37f9a1cf9f168b93 ^ _DAT_183284500) + uVar6;
  _DAT_183284810 = _DAT_1832847e8 ^ _DAT_183284500;
  _DAT_183284828 = _DAT_183284828 & 0xffffffff;
  *(uint *)(unaff_RBP + 0xc) = uVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[8]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x06':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\b':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\t':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb04ac9b -----

void FUN_18b04ac9b(void)

{
  return;
}


// ----- block @ rva 0xb04adf2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b04adf2(longlong param_1)

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


// ----- block @ rva 0xb05fea8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b05fea8(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xb060047 -----

void FUN_18b060047(void)

{
  return;
}


// ----- block @ rva 0xb0619fa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0619fa(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb061b7e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b061b7e(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb062290 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b062290(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb062d67 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b062d67(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb062f16 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18b064b40(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
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


// ----- block @ rva 0xb068ab2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b068ab2(void)

{
  char cVar1;
  longlong *unaff_R14;
  undefined8 in_stack_00000030;
  
  (**(code **)(unaff_R14 + JNI->GetStaticObjectField /*0x488*/))();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb068ce7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b068ce7(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->GetStaticObjectField /*0x488*/))();
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


// ----- block @ rva 0xb0691ce -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0691ce(void)

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


// ----- block @ rva 0xb069222 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b069222(void)

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


// ----- block @ rva 0xb06969e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b06969e(void)

{
  FUN_190ddfc90();
  (*_DAT_181a46938)();
  return;
}


// ----- block @ rva 0xb0697cb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0697cb(void)

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


// ----- block @ rva 0xb069843 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b069843(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticIntMethodA /*0x418*/))();
  (*_DAT_181a465c8)();
  return;
}


// ----- block @ rva 0xb069887 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b069887(void)

{
  FUN_190dd72e0();
  (*_DAT_181a46638)();
  return;
}


// ----- block @ rva 0xb06992b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b06992b(void)

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


// ----- block @ rva 0xb069aa5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b069aa5(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000048 = in_stack_00000040;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 2;
  (*_DAT_181a46738)();
  return;
}


// ----- block @ rva 0xb069eb3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b069eb3(void)

{
  FUN_190de3220();
  (*_DAT_181a46798)();
  return;
}


// ----- block @ rva 0xb06a061 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b06a061(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a46878)();
  return;
}


// ----- block @ rva 0xb06a095 -----

void FUN_18b06a095(void)

{
  return;
}


// ----- block @ rva 0xb06a21c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b06a21c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181a471b8)();
  return;
}


// ----- block @ rva 0xb06ab38 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b06ab38(void)

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


// ----- block @ rva 0xb06ac06 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b06ac06(void)

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


// ----- block @ rva 0xb06af25 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b06af25(void)

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


// ----- block @ rva 0xb06b080 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b06b080(void)

{
  (*_DAT_181a47858)();
  return;
}


// ----- block @ rva 0xb06b567 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b06b567(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a47848)();
  return;
}


// ----- block @ rva 0xb06b5c5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b06b5c5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_181a46be8)();
  return;
}


// ----- block @ rva 0xb06b942 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b06b942(void)

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


// ----- block @ rva 0xb06c1b6 -----

void FUN_18b06c1b6(void)

{
  return;
}


// ----- block @ rva 0xb06c258 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b06c258(void)

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


// ----- block @ rva 0xb06cc54 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b06cc54(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181a46c58)();
  return;
}


// ----- block @ rva 0xb06ccf4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b06ccf4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181a478d8)();
  return;
}


// ----- block @ rva 0xb06cf8b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b06cfe1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b06cf8b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb0713b5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b0713ef */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b0713b5(void)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb07878c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b07878c(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000038;
  undefined1 in_stack_00000070;
  int iStack00000000000000a0;
  undefined1 uStack00000000000000ab;
  
  iStack00000000000000a0 = in_stack_00000038 + 1;
  uStack00000000000000ab = in_stack_00000070;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb0788ad -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b0788ad(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000a9;
  
  uStack00000000000000a9 = in_stack_00000070;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb07896f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b07896f(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 4;
  uStack0000000000000078 = 0x18;
  uStack0000000000000070 =
       (ulonglong)
       CONCAT14((char)((ulonglong)unaff_R14 >> 0x38),(int)(char)((ulonglong)unaff_R14 >> 0x18));
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


// ----- block @ rva 0xb0864fb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b0864fb(void)

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


// ----- block @ rva 0xb086591 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b086591(void)

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


// ----- block @ rva 0xb086653 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b086653(void)

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


// ----- block @ rva 0xb08678c -----

void thunk_FUN_18b06d113(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xb08709c -----

void FUN_18b08709c(void)

{
  return;
}


// ----- block @ rva 0xb087108 -----

void FUN_18b087108(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

