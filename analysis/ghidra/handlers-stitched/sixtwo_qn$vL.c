// ===== STITCHED CORPUS: sixtwo.qn$vL =====
// handlers: 8  continuation blocks: 82  unresolved table targets: 0
// tables not in tables.json: ['0x526190', '0x5266a8', '0x5266b8', '0x5266c8', '0x5266d8', '0x5266e8', '0x5266f8', '0x526708', '0x5267d8', '0x5267e8', '0x5267f8', '0x526808', '0x526818', '0x526828', '0x527278', '0x527288', '0x527298', '0x5272a8', '0x5272b8', '0x52ce00']

// ===== Lsixtwo/qn$vL; _3c25e1aef704a17614af26139d780545 ()V (handler @ image 1855b20e0, runtime 6fffed1c20e0) =====

void FUN_1855b20e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001855b21bc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18052e470 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/qn$vL; dyb (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18557f3a0, runtime 6fffed18f3a0) =====

undefined8 FUN_18557f3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/qn$vL; dyc ([B)Ljava/lang/String; (handler @ image 18557f430, runtime 6fffed18f430) =====

void FUN_18557f430(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018557f4d3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180525ff0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/qn$vL; dyd (IJ)Ljava/lang/String; (handler @ image 1855a77d0, runtime 6fffed1b77d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855a77d0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = (~uRam00000001830d8620 + 0xdcfb7eaf4280bd31) *
          ((uRam00000001830d8548 ^ 0xe1d2ccb99f2a7f64) +
          (uRam00000001830d8548 & 0x61d2ccb99f2a7f64) * 2);
  uVar7 = (uVar7 | uRam00000001830d85f0) + (uVar7 & uRam00000001830d85f0);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d8508 =
       func_0x0001855ae690((uVar7 | 0x3d29b216ddaac254) + (uVar7 & 0x3d29b216ddaac254));
  uVar2 = uRam00000001830d8508 ^ 0xfdfbfebf5b88fd71;
  uVar7 = uVar2 >> 1 | uVar2;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar2;
  uVar7 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar2;
  uRam00000001830d8628 = (uRam00000001830d85b8 ^ uVar2) + 0xfdfbfebf5b88fd71 ^ 0x55fa4e3e94c2383d;
  uRam00000001830d85b8 = (uRam00000001830d85b8 * -0x520d61f09711cf2d ^ uRam00000001830d8628) + uVar2
  ;
  uRam00000001830d8628 = uRam00000001830d85b8 ^ uRam00000001830d8628;
  uRam00000001830d85f0 = 0xfdfbfebf5b88fd71;
  uVar7 = ((uRam00000001830d85d8 ^ 0x358d5c2a6b61178e) +
          (uRam00000001830d85d8 & 0x358d5c2a6b61178e) * 2) * 0x1d43a0fa1c54f6e1;
  uVar7 = (uVar7 | uRam00000001830d8698) + (uVar7 & uRam00000001830d8698);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d8610 =
       func_0x0001855ae690((uVar7 | 0x2eb2c3931cbce3dc) + (uVar7 & 0x2eb2c3931cbce3dc));
  uVar7 = (uRam00000001830d8610 ^ 0xdc580dfa658dac6) * 0x64ca4cc040f03303;
  uRam00000001830d8530 = (uRam00000001830d8530 ^ uVar7) + 0x2eb2c393989ec0f9 ^ 0xacf3a09ac202f8f2;
  uRam00000001830d85b8 = (uRam00000001830d85b8 * -0x58b5df5de2ab61e9 ^ uRam00000001830d8530) + uVar7
  ;
  uRam00000001830d8558 = uRam00000001830d85b8 ^ uRam00000001830d8530;
  uRam00000001830d8648 = 0x2eb2c393989ec0f9;
  uVar7 = (uRam00000001830d85e0 ^ _UNK_18052ce00) + uRam00000001830d8698 + 0x84222325;
  uVar2 = (uRam00000001830d8698 ^ _UNK_18052ce08) + uRam00000001830d85e0 + 0x69c9c0af4b73cafa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d85e0 ^ _UNK_18052ce00;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d8698 ^ _UNK_18052ce08;
  uRam00000001830d8650 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001830d85e0 + 0x69c9c0af4b73cafa) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d8698 + 0x84222325));
  uRam00000001830d85e0 =
       (uRam00000001830d85e0 ^ uRam00000001830d8650 & 0xffffffffffffffc0) + 0x96363f50b48c3506 ^
       0xe8ad2a29cfc0ab55;
  uRam00000001830d8648 =
       (uRam00000001830d8648 * 0x14052fef1f3a129d ^ uRam00000001830d85e0) +
       (uRam00000001830d8650 & 0xffffffffffffffc0);
  uRam00000001830d8620 = uRam00000001830d8648 ^ uRam00000001830d85e0;
  uRam00000001830d86b0 = 0x96363f50b48c3506;
  uVar7 = (uRam00000001830d8668 ^ _UNK_18052ce10) + uRam00000001830d8510 + 0x84225cda;
  uVar2 = (uRam00000001830d8510 ^ _UNK_18052ce18) + uRam00000001830d8668 + 0x69c9c0af4b73cafa;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8668 ^ _UNK_18052ce10;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d8510 ^ _UNK_18052ce18;
  uRam00000001830d8648 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001830d8668 + 0x69c9c0af4b73cafa) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d8510 + 0x84225cda));
  uVar7 = uRam00000001830d8648 ^ 0x69c9c0af4b73cafa;
  uRam00000001830d86b0 = uRam00000001830d86f8 ^ uVar7 ^ 0x69c9c0af4b744af9;
  uRam00000001830d8528 = (uRam00000001830d8528 ^ uVar7) + 0x69c9c0af4b744af9 ^ 0xfc372b9bd4ff9d3a;
  uRam00000001830d8578 =
       (uRam00000001830d8578 * -0x11607acf5fb58625 ^ uRam00000001830d8528) + uVar7 ^
       uRam00000001830d8528;
  uRam00000001830d8608 = 0x69c9c0af4b744af9;
  uVar7 = (~uRam00000001830d8550 + 0x96363f50b48c3507) *
          ((uRam00000001830d85d8 ^ 0x69c9c0afcf5669dc) +
          (uRam00000001830d85d8 & 0x69c9c0afcf5669dc) * 2);
  uVar7 = (uVar7 | uRam00000001830d8580) + (uVar7 & uRam00000001830d8580);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d86d0 =
       func_0x0001855ae690((uVar7 | 0xffffffff7bda5cda) + (uVar7 & 0xffffffff7bda5cda));
  uRam00000001830d8628 = uRam00000001830d8598 ^ uRam00000001830d86d0 ^ 0x7fff;
  uRam00000001830d8638 = (uRam00000001830d8638 ^ uRam00000001830d86d0) + 0x7fff ^ 0x6502f2bc7abafe6;
  uRam00000001830d86f0 =
       (uRam00000001830d86f0 * 0x47ecb7621f267ce9 ^ uRam00000001830d8638) + uRam00000001830d86d0;
  uRam00000001830d8610 = uRam00000001830d86f0 ^ uRam00000001830d8638;
  uRam00000001830d8678 = 0x7fff;
  uVar7 = (~uRam00000001830d8560 + 0x5b19cfc04465ff0d) *
          ((uRam00000001830d86c8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001830d86c8 & 0x84222325) * 2);
  uVar7 = (uVar7 | uRam00000001830d8648) + (uVar7 & uRam00000001830d8648);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d85b8 =
       func_0x0001855ae690((uVar7 | 0x5b19cfc0c047dc29) + (uVar7 & 0x5b19cfc0c047dc29));
  uVar7 = uRam00000001830d85b8 << 0x3e | uRam00000001830d85b8 >> 2;
  uRam00000001830d8558 = (uRam00000001830d8558 ^ uVar7) + 0xa4e6303fbb9a00f4 ^ 0xa2fc936a217a8cb3;
  uRam00000001830d85e8 = (uRam00000001830d85e8 * 0x42683e35f62a5a03 ^ uRam00000001830d8558) + uVar7;
  uRam00000001830d85a8 = uRam00000001830d85e8 ^ uRam00000001830d8558;
  uRam00000001830d8640 = 0xa4e6303fbb9a00f4;
  uRam00000001830d8690 = func_0x0001855ae690(uRam00000001830d8610 ^ 0xbf6118bf55bebead);
  uVar7 = uRam00000001830d8690 << 0x23 | uRam00000001830d8690 >> 0x1d;
  uVar2 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar7 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar7) &
          0x7fffffffffffffff;
  uRam00000001830d8650 = uRam00000001830d8620 ^ uVar7 ^ 0x5b19cfc044667f0b;
  uRam00000001830d8578 = (uRam00000001830d8578 ^ uVar7) + 0x5b19cfc044667f0b ^ 0xce1caac196121a35;
  uRam00000001830d8558 = (uRam00000001830d8558 * 0x5b0e24acfa044023 ^ uRam00000001830d8578) + uVar7;
  uRam00000001830d8500 = uRam00000001830d8558 ^ uRam00000001830d8578;
  uRam00000001830d8528 = 0x5b19cfc044667f0b;
  uVar7 = (uRam00000001830d85e8 ^ _UNK_18052ce20) + uRam00000001830d8508 + 0x5b19cfc0c0445c2e;
  uVar2 = (uRam00000001830d8508 ^ _UNK_18052ce28) + uRam00000001830d85e8 + 0xa4e6303fbb9a00f4;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d85e8 ^ _UNK_18052ce20;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d8508 ^ _UNK_18052ce28;
  uRam00000001830d8680 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001830d85e8 + 0xa4e6303fbb9a00f4) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001830d8508 + 0x5b19cfc0c0445c2e));
  uRam00000001830d8548 = uRam00000001830d8578 ^ uRam00000001830d8680 ^ 0x7fff;
  uRam00000001830d8608 = (uRam00000001830d8608 ^ uRam00000001830d8680) + 0x7fff ^ 0x81e3b7bcb086f47b
  ;
  uRam00000001830d8578 =
       (uRam00000001830d8578 * -0x184c2a62ae2042d9 ^ uRam00000001830d8608) + uRam00000001830d8680;
  uRam00000001830d8508 = uRam00000001830d8578 ^ uRam00000001830d8608;
  uRam00000001830d85c8 = 0x7fff;
  uVar7 = (uRam00000001830d8668 ^ _UNK_18052ce30) + uRam00000001830d8578 + 0x84222325;
  uVar2 = (uRam00000001830d8578 ^ _UNK_18052ce38) + uRam00000001830d8668 + 0xee250821216b814;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8668 ^ _UNK_18052ce30;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d8578 ^ _UNK_18052ce38;
  uVar7 = func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) -
                              (uRam00000001830d8668 + 0xee250821216b814) ^
                              (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d8578 + 0x84222325))
  ;
  uVar2 = uVar7 >> 0x1e ^ 0x3b894208;
  uVar3 = uVar2 * 0x40000000;
  uVar2 = uVar3 + (uVar2 & 0x2aaaaaaaa) * -0x20000000;
  uVar2 = (uVar2 & 0x3333333300000000) + (uVar2 >> 2 & 0x3333333330000000);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f03000000) * 0x101010101010101 >> 0x38) << 6 | uVar3;
  uVar7 = (uVar7 ^ uVar3) + 0xf11daf7dede947ec;
  uRam00000001830d8588 = uVar7 ^ 0x1dba07ce909726fe;
  uRam00000001830d8628 = (uRam00000001830d8628 * 0x5d7957d90362b511 ^ uRam00000001830d8588) + uVar3;
  uRam00000001830d8668 = uRam00000001830d8628 ^ uRam00000001830d8588;
  uRam00000001830d8578 = -0xee250821216b814;
  uVar7 = (~uRam00000001830d8600 + 0xee250821216b815) *
          ((uVar7 ^ 0x1dba07ce14b57a24) + (ulonglong)((uint)uRam00000001830d8588 & 0x84225cda) * 2);
  uVar7 = (uVar7 | uRam00000001830d8640) + (uVar7 & uRam00000001830d8640);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d8510 =
       func_0x0001855ae690((uVar7 | 0xee250829634e4ce) + (uVar7 & 0xee250829634e4ce));
  uRam00000001830d8568 = uRam00000001830d8560 ^ uRam00000001830d8510 ^ 0xee2508212173813;
  uRam00000001830d8678 =
       (uRam00000001830d8678 ^ uRam00000001830d8510) + 0xee2508212173813 ^ 0xccf152a2060c63a6;
  uRam00000001830d8500 =
       (uRam00000001830d8500 * 0x36f9d5afb9d0e74f ^ uRam00000001830d8678) + uRam00000001830d8510;
  uRam00000001830d8608 = uRam00000001830d8500 ^ uRam00000001830d8678;
  uRam00000001830d85b8 = 0xee2508212173813;
  uRam00000001830d8548 = func_0x0001855ae690(uRam00000001830d8548 ^ 0x334cf5b3589cc08);
  uVar2 = uRam00000001830d8548 ^ 0x1fea9f3fbe3ff684;
  uVar7 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar2;
  uRam00000001830d85f8 = uRam00000001830d86f0 ^ uVar2 ^ 0x7fff;
  uRam00000001830d8630 = (uRam00000001830d8630 ^ uVar2) + 0x7fff ^ 0xd55f7f2e70b3519;
  uRam00000001830d86d8 = (uRam00000001830d86d8 * -0x7259750f6b31088b ^ uRam00000001830d8630) + uVar2
  ;
  uRam00000001830d8570 = uRam00000001830d86d8 ^ uRam00000001830d8630;
  uRam00000001830d8678 = 0x7fff;
  uVar7 = (~uRam00000001830d8570 + 0x2eb2c393989ec0fa) *
          ((uRam00000001830d86b0 ^ 0xfdfbfebfdfaade54) +
          (uRam00000001830d86b0 & 0x7dfbfebfdfaade54) * 2);
  uVar7 = (uVar7 | uRam00000001830d86b8) + (uVar7 & uRam00000001830d86b8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d8540 =
       func_0x0001855ae690((uVar7 | 0xd3493d2c47341ead) + (uVar7 & 0xd3493d2c47341ead));
  uVar7 = ~uRam00000001830d8540 & 0xfdfbfebf5b88fd71 | 1;
  uRam00000001830d8648 = uRam00000001830d8560 ^ uVar7 ^ 0x2caec252f427be6a;
  uRam00000001830d8650 = (uRam00000001830d8650 ^ uVar7) + 0x2caec252f427be6a ^ 0x59bef7527796b386;
  uRam00000001830d86a8 = (uRam00000001830d86a8 * 0xdadb96dcb96cb01 ^ uRam00000001830d8650) + uVar7;
  uRam00000001830d8658 = uRam00000001830d86a8 ^ uRam00000001830d8650;
  uRam00000001830d8680 = 0x2caec252f427be6a;
  uVar7 = func_0x0001855ae690(uRam00000001830d8570 + 0xdbe6473f92c2cb50 ^ 2);
  uRam00000001830d8570 = (uRam00000001830d8570 ^ uVar7) + 0xd3493d2cc3163d88 ^ 0x8a6884e36a58909c;
  uRam00000001830d8650 = (uRam00000001830d8650 * -0x14b32955d4ee974b ^ uRam00000001830d8570) + uVar7
  ;
  uRam00000001830d8688 = uRam00000001830d8650 ^ uRam00000001830d8570;
  uRam00000001830d86d8 = -0x2cb6c2d33ce9c278;
  uRam00000001830d8598 = func_0x0001855ae690(uRam00000001830d8648 ^ 0xa7213b241a7dc87);
  uVar7 = uRam00000001830d8598 << 0x16 | uRam00000001830d8598 >> 0x2a;
  uRam00000001830d8698 = uRam00000001830d85b0 ^ uVar7 ^ 0x2caec252f427be6a;
  uRam00000001830d8590 = (uRam00000001830d8590 ^ uVar7) + 0x2caec252f427be6a ^ 0x3977fc169c974351;
  uRam00000001830d8558 = (uRam00000001830d8558 * -0x9602639fd103377 ^ uRam00000001830d8590) + uVar7;
  uRam00000001830d85d8 = uRam00000001830d8558 ^ uRam00000001830d8590;
  uRam00000001830d8568 = 0x2caec252f427be6a;
  uVar7 = (uRam00000001830d8518 ^ _UNK_18052ce40) + uRam00000001830d85a0 + 0x2caec25270059d4f;
  uVar2 = (uRam00000001830d85a0 ^ _UNK_18052ce48) + uRam00000001830d8518 + 0x2caec252f427be6a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8518 ^ _UNK_18052ce40;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d85a0 ^ _UNK_18052ce48;
  uRam00000001830d8690 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001830d8518 + 0x2caec252f427be6a) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001830d85a0 + 0x2caec25270059d4f));
  uRam00000001830d8660 =
       (uRam00000001830d8690 ^ 0xd7026d0c000003e4) << 0x36 |
       (uRam00000001830d8690 ^ 0xd7026d0c000003e4) >> 10 & 0xffffffffff800000;
  uRam00000001830d85a0 = uRam00000001830d85a0 ^ uRam00000001830d8660 ^ 0xe400186975ad930c;
  uRam00000001830d86d8 =
       (uRam00000001830d86d8 * -0x61a0360fc194c5b1 ^ uRam00000001830d85a0) + uRam00000001830d8660;
  uRam00000001830d85d8 = uRam00000001830d86d8 ^ uRam00000001830d85a0;
  uRam00000001830d85f0 = 0;
  uVar7 = (uRam00000001830d8540 ^ _UNK_18052ce50) + uRam00000001830d86b8 + 0xfdfbfebfdfaade54;
  uVar2 = (uRam00000001830d86b8 ^ _UNK_18052ce58) + (uRam00000001830d8540 - 1);
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8540 ^ _UNK_18052ce50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d86b8 ^ _UNK_18052ce58;
  uRam00000001830d85c0 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d8540 - 1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001830d86b8 + 0xfdfbfebfdfaade54));
  uVar7 = ~uRam00000001830d85c0 << 0x39 | ~uRam00000001830d85c0 >> 7;
  uRam00000001830d8698 = (uRam00000001830d8698 ^ uVar7) + 0x2040140a477028e ^ 0x1819f57d48a1ad3d;
  uRam00000001830d8658 = (uRam00000001830d8658 * 0x48afb46100371b63 ^ uRam00000001830d8698) + uVar7;
  uRam00000001830d85c8 = uRam00000001830d8658 ^ uRam00000001830d8698;
  uRam00000001830d8560 = 0x2040140a477028e;
  uVar7 = (~uRam00000001830d86d8 + 0x2040140a477028f) *
          ((uRam00000001830d8538 ^ 0xfdfbfebfdfaade54) +
          (uRam00000001830d8538 & 0x7dfbfebfdfaade54) * 2);
  uVar7 = (uVar7 | uRam00000001830d8590) + (uVar7 & uRam00000001830d8590);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d8608 =
       func_0x0001855ae690((uVar7 | 0xffffffff7bdddcda) + (uVar7 & 0xffffffff7bdddcda));
  uVar7 = uRam00000001830d8608 >> 1 | uRam00000001830d8608;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001830d8608) & 0x7fffffffffffffff;
  uRam00000001830d86b8 = uRam00000001830d86b8 ^ uVar7 ^ 0x7c8746696a6c00eb;
  uRam00000001830d8520 = (uRam00000001830d8520 * -0x3a53d95942b26d5 ^ uRam00000001830d86b8) + uVar7;
  uRam00000001830d85d0 = uRam00000001830d8520 ^ uRam00000001830d86b8;
  uRam00000001830d8560 = 0;
  uVar7 = (uRam00000001830d8668 ^ 0x84225cda) + uRam00000001830d8538 + 0x84225cda;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8668 ^ 0x84225cda;
  uVar2 = ((uRam00000001830d8538 + uRam00000001830d8668) * 0x2000 |
          uRam00000001830d8538 + uRam00000001830d8668 >> 0x33) ^ uRam00000001830d8538;
  uRam00000001830d85c8 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - uRam00000001830d8668 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d8538 + 0x84225cda));
  uVar4 = ~(uint)uRam00000001830d85c8 & 0x7fff;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar7 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          (ulonglong)uVar4;
  uRam00000001830d8558 = uRam00000001830d85d0 ^ uVar7 ^ 0x7fff;
  uRam00000001830d8520 = (uRam00000001830d8520 ^ uVar7) + 0x7fff ^ 0xd438c77b6e52f2d5;
  uRam00000001830d8580 = (uRam00000001830d8580 * 0x426e11031aa28e49 ^ uRam00000001830d8520) + uVar7;
  uRam00000001830d8530 = uRam00000001830d8580 ^ uRam00000001830d8520;
  uRam00000001830d8638 = 0x7fff;
  uRam00000001830d8560 = func_0x0001855ae690(uRam00000001830d8590 + 0x1f00841b0021ff ^ 0x87);
  uVar7 = uRam00000001830d8560 << 0x1a | uRam00000001830d8560 >> 0x26;
  uRam00000001830d8558 = uRam00000001830d8558 ^ uVar7 ^ 0x3ff90a7f80c1e4ce;
  uRam00000001830d85d8 = (uRam00000001830d85d8 * -0xb7bee07e922afad ^ uRam00000001830d8558) + uVar7;
  uRam00000001830d85f8 = uRam00000001830d85d8 ^ uRam00000001830d8558;
  uRam00000001830d86c0 = 0;
  uVar7 = (~uRam00000001830d8660 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001830d8650) +
          ((param_4 ^ 0x84222325) & uRam00000001830d8650) * 2);
  uVar7 = (uVar7 | uRam00000001830d8690) + (uVar7 & uRam00000001830d8690);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d86d8 =
       func_0x0001855ae690((param_4 ^ 0x84225cda | uVar7) + (uVar7 & (param_4 ^ 0x84225cda)));
  uVar7 = param_4 ^ uRam00000001830d86d8 & 0x7fffffffffffffff;
  uVar2 = uVar7 >> 1 | uVar7;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar7;
  uVar4 = (uint)param_4 & 0x7fff;
  uRam00000001830d86c0 = (ulonglong)uVar4;
  uRam00000001830d85d8 = (uRam00000001830d85d8 ^ uVar7) + uRam00000001830d86c0 ^ 0x99b3665c2ea3b4a1;
  uRam00000001830d85c0 = (uRam00000001830d85c0 * -0x2263a3eaeb5d0ec5 ^ uRam00000001830d85d8) + uVar7
  ;
  uRam00000001830d85d0 = uRam00000001830d85c0 ^ uRam00000001830d85d8;
  uVar4 = uVar4 ^ param_3;
  uVar7 = (~uRam00000001830d8678 + 0xcfbf932d) *
          ((uRam00000001830d86c8 ^ 0x8d844444) +
          (ulonglong)((uint)uRam00000001830d86c8 & 0x8d844444) * 2);
  uVar7 = (uVar7 | uRam00000001830d8580) + (uVar7 & uRam00000001830d8580);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d8630 =
       func_0x0001855ae690((uVar7 | 0x423bd768) + (ulonglong)((uint)uVar7 & 0x423bd768));
  uVar7 = uRam00000001830d8630 ^ 0x9a66761;
  uVar2 = uVar7 >> 1 | uVar7;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar7;
  uRam00000001830d86a0 = (uRam00000001830d86a0 ^ uVar7) + 0xcfbff76d ^ 0xd5dff4e70835f087;
  uRam00000001830d85d0 = (uRam00000001830d85d0 * -0x105c23bef3179a49 ^ uRam00000001830d86a0) + uVar7
  ;
  uRam00000001830d8570 = uRam00000001830d85d0 ^ uRam00000001830d86a0;
  uRam00000001830d8558 = 0xcfbff76d;
  uVar7 = (uRam00000001830d8588 ^ _UNK_18052ce60) + uRam00000001830d86e8 + 0x9fcfebb1;
  uVar2 = (uRam00000001830d86e8 ^ _UNK_18052ce68) + uRam00000001830d8588 + 0x1f5d98d7;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8588 ^ _UNK_18052ce60;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d86e8 ^ _UNK_18052ce68;
  uRam00000001830d8600 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d8588 + 0x1f5d98d7) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d86e8 + 0x9fcfebb1));
  uRam00000001830d86c8 =
       (uRam00000001830d86c8 ^ uRam00000001830d8600 & 0xffffffffffffffe0) + 0x4b05043 ^
       0x27b3fed230736a66;
  uRam00000001830d85a0 =
       (uRam00000001830d85a0 * -0x69d96192fa081c13 ^ uRam00000001830d86c8) +
       (uRam00000001830d8600 & 0xffffffffffffffe0);
  uRam00000001830d86a8 = uRam00000001830d85a0 ^ uRam00000001830d86c8;
  uRam00000001830d85f8 = 0x4b05043;
  uVar7 = (uRam00000001830d85c0 | 0x1b310072f44ea340) + (uRam00000001830d85c0 & 0x1b310072f44ea340);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d8610 =
       func_0x0001855ae690((uVar7 | 0xb3b2c784) + (ulonglong)((uint)uVar7 & 0xb3b2c784));
  uVar7 = (uRam00000001830d8610 ^ 0x3790f7e3) * 0x57b581c3446f9d4d;
  uRam00000001830d8518 = uRam00000001830d8690 ^ uVar7 ^ 0x37910b25;
  uRam00000001830d8568 = (uRam00000001830d8568 ^ uVar7) + 0x37910b25 ^ 0x5312dc74bf618bbe;
  uRam00000001830d86f8 = (uRam00000001830d86f8 * -0x1cb79f310986abd3 ^ uRam00000001830d8568) + uVar7
  ;
  uRam00000001830d8668 = uRam00000001830d86f8 ^ uRam00000001830d8568;
  uRam00000001830d86d0 = 0x37910b25;
  uVar7 = (uRam00000001830d8690 ^ _UNK_18052ce70) + uRam00000001830d8600 + 0x4f06da17;
  uVar2 = (uRam00000001830d8600 ^ _UNK_18052ce78) + uRam00000001830d8690 + 0x34db7e90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8690 ^ _UNK_18052ce70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d8600 ^ _UNK_18052ce78;
  uRam00000001830d86f8 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d8690 + 0x34db7e90) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d8600 + 0x4f06da17));
  uRam00000001830d86a8 = uRam00000001830d86d0 ^ uRam00000001830d86f8 ^ 0x1000077c2;
  uRam00000001830d8610 =
       (uRam00000001830d8610 ^ uRam00000001830d86f8) + 0x1000077c2 ^ 0xffbb672470d84ff8;
  uRam00000001830d8540 =
       (uRam00000001830d8540 * 0x67d262a5835f9847 ^ uRam00000001830d8610) + uRam00000001830d86f8;
  uRam00000001830d8640 = uRam00000001830d8540 ^ uRam00000001830d8610;
  uRam00000001830d8550 = 0x77c2;
  uRam00000001830d8518 = func_0x0001855ae690(uRam00000001830d85e0 + 0x3d00126effb9ff ^ 0xe1);
  uRam00000001830d8630 = uRam00000001830d8608 * 0x36c3d0bfa2fbebe1;
  uRam00000001830d86e8 = uRam00000001830d86e8 - 0x97e45cb4 ^ 0x9774a938b92e18d;
  uRam00000001830d8608 = uRam00000001830d8630 ^ uRam00000001830d86e8;
  uRam00000001830d8550 = 0x681ba34c;
  uVar7 = (uRam00000001830d8608 ^ _UNK_18052ce80) + uRam00000001830d8590 + 0x842254e7;
  uVar2 = (uRam00000001830d8590 ^ _UNK_18052ce88) + uRam00000001830d8608 + 0x97e45cb4;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8608 ^ _UNK_18052ce80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d8590 ^ _UNK_18052ce88;
  uRam00000001830d8588 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d8608 + 0x97e45cb4) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d8590 + 0x842254e7));
  uVar7 = uRam00000001830d8588 ^ 0x77c2;
  uRam00000001830d86b0 = uRam00000001830d8508 ^ uVar7 ^ 0x97e4d476;
  uRam00000001830d8538 = (uRam00000001830d8538 ^ uVar7) + 0x97e4d476 ^ 0xde6fdfe1870bbff7;
  uRam00000001830d8608 = (uRam00000001830d8608 * 0x4b9b964863dae471 ^ uRam00000001830d8538) + uVar7;
  uRam00000001830d86b8 = uRam00000001830d8608 ^ uRam00000001830d8538;
  uRam00000001830d85b0 = 0x97e4d476;
  uVar7 = (uRam00000001830d8590 ^ _UNK_18052ce90) + uRam00000001830d86c8 + 0x13c6f753;
  uVar2 = (uRam00000001830d86c8 ^ _UNK_18052ce98) + uRam00000001830d8590 + 0x681ba34c;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8590 ^ _UNK_18052ce90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d86c8 ^ _UNK_18052ce98;
  uVar7 = func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d8590 + 0x681ba34c)
                              ^ (uVar7 << 0x1d | uVar7 >> 0x23) -
                                (uRam00000001830d86c8 + 0x13c6f753));
  uVar7 = (uVar7 ^ 0xfffff77e) * -0x6d119383d2d36881;
  uRam00000001830d8658 = uRam00000001830d8678 ^ uVar7 ^ 0x1000077c2;
  uRam00000001830d85e0 = (uRam00000001830d85e0 ^ uVar7) + 0x1000077c2 ^ 0x5ab2a8011c369a4;
  uRam00000001830d85b0 = (uRam00000001830d85b0 * 0x152018bb74264ab1 ^ uRam00000001830d85e0) + uVar7;
  uRam00000001830d8610 = uRam00000001830d85b0 ^ uRam00000001830d85e0;
  uRam00000001830d8698 = 0x77c2;
  uVar7 = (uRam00000001830d86f0 ^ _UNK_18052cea0) + uRam00000001830d86b0 + 0x4b9dd448;
  uVar2 = (uRam00000001830d86b0 ^ _UNK_18052cea8) + uRam00000001830d86f0 + 0x4b05043;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d86f0 ^ _UNK_18052cea0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d86b0 ^ _UNK_18052cea8;
  uRam00000001830d8648 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d86f0 + 0x4b05043) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d86b0 + 0x4b9dd448));
  uRam00000001830d8500 =
       (uRam00000001830d8500 ^ uRam00000001830d86e8) + 0x4b05041 ^ 0x30fd8278efff1126;
  uRam00000001830d8578 =
       (uRam00000001830d8578 * 0x788a2359e4c2e49b ^ uRam00000001830d8500) + uRam00000001830d86e8;
  uRam00000001830d8620 = uRam00000001830d8578 ^ uRam00000001830d8500;
  uRam00000001830d86f0 = 0x4b05041;
  uVar7 = (uRam00000001830d8508 ^ _UNK_18052ceb0) + uRam00000001830d8548 + 0x50526495;
  uVar2 = (uRam00000001830d8548 ^ _UNK_18052ceb8) + uRam00000001830d8508 + 0xd47047b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8508 ^ _UNK_18052ceb0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d8548 ^ _UNK_18052ceb8;
  uRam00000001830d85c8 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d8508 + 0xd47047b0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d8548 + 0x50526495));
  uRam00000001830d8630 = uRam00000001830d85c8 * 0x13b2477687688ee1 & 0x1ffffffffffff;
  uRam00000001830d8698 = uRam00000001830d8698 ^ uRam00000001830d8630 ^ 0xd6d1eeea9feab253;
  uRam00000001830d86e8 =
       (uRam00000001830d86e8 * 0x6bbb5cdb551b131b ^ uRam00000001830d8698) + uRam00000001830d8630;
  uRam00000001830d8538 = uRam00000001830d86e8 ^ uRam00000001830d8698;
  uRam00000001830d85f0 = 0;
  uRam00000001830d85f0 = func_0x0001855ae690(uRam00000001830d86d0 ^ 0x2700945700211a);
  uRam00000001830d85b8 =
       (uRam00000001830d85b8 ^ uRam00000001830d85f0 ^ 0xcfbff76c30400893) + 0x30400892 ^
       0xa8e6176b0ae6755e;
  uRam00000001830d8698 =
       (uRam00000001830d8698 * 0x752c7def25889d95 ^ uRam00000001830d85b8) +
       (uRam00000001830d85f0 ^ 0xcfbff76c30400893);
  uRam00000001830d85c0 = uRam00000001830d8698 ^ uRam00000001830d85b8;
  uRam00000001830d8630 = 0x30400892;
  uVar7 = (~uRam00000001830d8570 + 0x30400893) *
          ((uRam00000001830d8558 ^ 0x4b9dd448) +
          (ulonglong)((uint)uRam00000001830d8558 & 0x4b9dd448) * 2);
  uVar7 = (uVar7 | uRam00000001830d8538) + (uVar7 & uRam00000001830d8538);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d86f0 =
       func_0x0001855ae690((uVar7 | 0x7bdddcda) + (ulonglong)((uint)uVar7 & 0x7bdddcda));
  uRam00000001830d8518 =
       uRam00000001830d8518 ^ uRam00000001830d86f0 ^ 0xcfbff76d ^ 0xf41b719001e88e00;
  uRam00000001830d85b8 =
       (uRam00000001830d85b8 * 0x6ad28dc00566f23d ^ uRam00000001830d8518) +
       (uRam00000001830d86f0 ^ 0xcfbff76d);
  uRam00000001830d8620 = uRam00000001830d85b8 ^ uRam00000001830d8518;
  uRam00000001830d86b8 = 0;
  uVar7 = (uRam00000001830d8668 ^ 0x842254e7) + uRam00000001830d86c8 + 0x842254e7;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d8668 ^ 0x842254e7;
  uVar2 = ((uRam00000001830d86c8 + uRam00000001830d8668) * 0x2000 |
          uRam00000001830d86c8 + uRam00000001830d8668 >> 0x33) ^ uRam00000001830d86c8;
  uRam00000001830d85f8 =
       func_0x0001855ae690((uVar2 << 0x1d | uVar2 >> 0x23) - uRam00000001830d8668 ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001830d86c8 + 0x842254e7));
  uVar7 = (ulonglong)(~(uint)uRam00000001830d85f8 & 0x77c2);
  uRam00000001830d8500 = uRam00000001830d86a0 ^ uVar7 ^ 0x77c2;
  uRam00000001830d8668 = (uRam00000001830d8668 ^ uVar7) + 0x77c2 ^ 0x523a71b2482ebb8a;
  uRam00000001830d8618 = (uRam00000001830d8618 * -0x30884baf3fbf961f ^ uRam00000001830d8668) + uVar7
  ;
  uRam00000001830d86a8 = uRam00000001830d8618 ^ uRam00000001830d8668;
  uRam00000001830d86f8 = 0x77c2;
  uRam00000001830d8540 = func_0x0001855ae690(uRam00000001830d8660 + 0xffb3ff831effddff ^ 0x70);
  uRam00000001830d8640 = uRam00000001830d8648 ^ 0x77c2;
  uRam00000001830d85b0 = uRam00000001830d85b0 + 0x77c2 ^ 0x220169a7d0f2ec0f;
  uRam00000001830d8568 = uRam00000001830d8558 * 0x64718e8aaaade1c5;
  uRam00000001830d8558 = uRam00000001830d8568 ^ uRam00000001830d85b0;
  uRam00000001830d8570 = 0x77c2;
  uVar2 = (ulonglong)uVar4;
  uVar7 = (~uRam00000001830d8628 + 0x77c3) *
          ((uVar2 ^ 0x84222325 ^ uRam00000001830d86b0) +
          (ulonglong)((uint)uRam00000001830d86b0 & (uint)(uVar2 ^ 0x84222325)) * 2);
  uVar7 = (uVar7 | uRam00000001830d8580) + (uVar7 & uRam00000001830d8580);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  uRam00000001830d86b8 =
       func_0x0001855ae690((uVar2 ^ 0x842254e7 | uVar7) +
                           (ulonglong)((uint)(uVar2 ^ 0x842254e7) & (uint)uVar7));
  uVar7 = uVar2 ^ (uVar2 | 0x77c2) ^ uRam00000001830d86b8;
  lVar6 = uVar2 - (uVar4 & 0x77c2) * 2;
  uRam00000001830d8550 = (uRam00000001830d8550 ^ uVar7) + lVar6 + 0x77c2 ^ 0x638566d0baf214d4;
  uRam00000001830d8638 = (uRam00000001830d8638 * -0x763d40c649e14841 ^ uRam00000001830d8550) + uVar7
  ;
  uRam00000001830d8630 = uRam00000001830d8638 ^ uRam00000001830d8550;
  uRam00000001830d8658 = lVar6 + 0x77c2U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2123e,0x51c)
      /* POOL[0x2123e,0x51c]: bZFZI | JaaSW | aFYud | jEoGI | cXj | cXn | sixtwo/qn$vL | yrBAH | readLong | (Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/Long; | QGGrl | Ljava/lang/Long; | YPkah | cXy | cXf | dyb | baFMt | biiVj | dyd | UPXcN | dyc | sixtwo/qn$vM | uvBnM | cXx | hbWex | dWnPF | cCUes | dyg | VPaBx | cXw | zKouh | dyi | SeXkI | WosLs | dyh | bfSHa | jZDhQ | Lsixtwo/qn$vM; | cXz | oHlYm | Lsixtwo/qn$vL; | YYziD | XdVDB | IBDPw | lKeog | WBAek | cXB | pBVGF | cXA | opcode | Lsixtwo/qp; | data | fBZNq | [Lsixtwo/qp; | wGaQq | ZYlBy | OqnKD | vYCVM | KSzgN | OlLrn | jfYZz | java/util/concurrent/Cou */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001855a9d3e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18052b478 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/qn$vL; dye (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1855ae720, runtime 6fffed1be720) =====

void FUN_1855ae720(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001855ae75c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18052d040 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/qn$vL; dyf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1855af610, runtime 6fffed1bf610) =====

void FUN_1855af610(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001855af68d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18052d580 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/qn$vL; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 185564920, runtime 6fffed174920) =====

void FUN_185564920(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2123e,0x51c)
      /* POOL[0x2123e,0x51c]: bZFZI | JaaSW | aFYud | jEoGI | cXj | cXn | sixtwo/qn$vL | yrBAH | readLong | (Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/Long; | QGGrl | Ljava/lang/Long; | YPkah | cXy | cXf | dyb | baFMt | biiVj | dyd | UPXcN | dyc | sixtwo/qn$vM | uvBnM | cXx | hbWex | dWnPF | cCUes | dyg | VPaBx | cXw | zKouh | dyi | SeXkI | WosLs | dyh | bfSHa | jZDhQ | Lsixtwo/qn$vM; | cXz | oHlYm | Lsixtwo/qn$vL; | YYziD | XdVDB | IBDPw | lKeog | WBAek | cXB | pBVGF | cXA | opcode | Lsixtwo/qp; | data | fBZNq | [Lsixtwo/qp; | wGaQq | ZYlBy | OqnKD | vYCVM | KSzgN | OlLrn | jfYZz | java/util/concurrent/Cou */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001855649ff did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18051e4c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/qn$vL; toJson ()Lcom/google/gson/JsonObject; (handler @ image 18556fe40, runtime 6fffed17fe40) =====

void FUN_18556fe40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2123e,0x51c)
      /* POOL[0x2123e,0x51c]: bZFZI | JaaSW | aFYud | jEoGI | cXj | cXn | sixtwo/qn$vL | yrBAH | readLong | (Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/Long; | QGGrl | Ljava/lang/Long; | YPkah | cXy | cXf | dyb | baFMt | biiVj | dyd | UPXcN | dyc | sixtwo/qn$vM | uvBnM | cXx | hbWex | dWnPF | cCUes | dyg | VPaBx | cXw | zKouh | dyi | SeXkI | WosLs | dyh | bfSHa | jZDhQ | Lsixtwo/qn$vM; | cXz | oHlYm | Lsixtwo/qn$vL; | YYziD | XdVDB | IBDPw | lKeog | WBAek | cXB | pBVGF | cXA | opcode | Lsixtwo/qp; | data | fBZNq | [Lsixtwo/qp; | wGaQq | ZYlBy | OqnKD | vYCVM | KSzgN | OlLrn | jfYZz | java/util/concurrent/Cou */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018556ff30 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180521690 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x5564a02 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185564a02(void)

{
  FUN_190ddce00();
  (*_DAT_18051e7d8)();
  return;
}


// ----- block @ rva 0x556addd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18556addd(void)

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


// ----- block @ rva 0x556ae73 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18556ae73(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18051e858)();
  return;
}


// ----- block @ rva 0x556b239 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18556b239(void)

{
  FUN_190dd72e0();
  (*_DAT_18051e6e8)();
  return;
}


// ----- block @ rva 0x556b727 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18556b727(void)

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


// ----- block @ rva 0x556b817 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18556b817(void)

{
  FUN_190dd72e0();
  (*_DAT_18051eab8)();
  return;
}


// ----- block @ rva 0x556bab0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18556bab0(void)

{
  undefined8 in_stack_000000e0;
  undefined4 uStack0000000000000108;
  undefined8 uStack0000000000000118;
  
  uStack0000000000000108 = 0x34db;
  uStack0000000000000118 = in_stack_000000e0;
  (*_DAT_18051e868)();
  return;
}


// ----- block @ rva 0x556f072 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18556f072(void)

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


// ----- block @ rva 0x556f8f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18556f8f2(void)

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


// ----- block @ rva 0x556fcda -----

void FUN_18556fcda(void)

{
  return;
}


// ----- block @ rva 0x556fd46 -----

void FUN_18556fd46(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x556ff33 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18556ff33(void)

{
  FUN_190ddce00();
  (*_DAT_180522ec8)();
  return;
}


// ----- block @ rva 0x5573025 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185573025(void)

{
  longlong *unaff_RSI;
  
  FUN_18436c0d0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1805233d8)();
  return;
}


// ----- block @ rva 0x5577852 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185577852(void)

{
  (*_DAT_1805232a8)();
  return;
}


// ----- block @ rva 0x557bbf0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18557bbf0(void)

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


// ----- block @ rva 0x557c25b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18557c25b(void)

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


// ----- block @ rva 0x557c815 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18557c815(void)

{
  (*_DAT_180523738)();
  return;
}


// ----- block @ rva 0x557cd9d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18557cd9d(void)

{
  (*_DAT_180523658)();
  return;
}


// ----- block @ rva 0x557e982 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18557e982(void)

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


// ----- block @ rva 0x557f1cf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18557f1cf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_180523378)();
  return;
}


// ----- block @ rva 0x557f1e0 -----

void FUN_18557f1e0(void)

{
  return;
}


// ----- block @ rva 0x557f24c -----

void FUN_18557f24c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x557f4d6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018557f50d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18557f4d6(void)

{
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x557f52b -----

void FUN_18557f52b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar1 = (**(code **)(unaff_R12 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0x70) = unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x00018557f565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180526190 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x558408f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18558408f(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_R15;
  uint uVar6;
  byte in_XMM0_Bf;
  uint uVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar12;
  undefined1 auVar11 [16];
  
  uVar4 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar3 = uVar4 + _DAT_1830d7c70;
  if (in_XMM1._4_4_ < 0) {
    uVar3 = _DAT_1830d7af0 ^ uVar4;
  }
  _DAT_1830d7968 = func_0x0001855a7740(in_XMM0_Bf ^ uVar3);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = unaff_R15;
  uVar3 = _DAT_1830d7b08 ^ unaff_R15;
  uVar7 = (uint)unaff_R15;
  uVar12 = (uint)(unaff_R15 >> 0x20);
  uVar6 = uVar7 & (uint)DAT_18001a990;
  auVar1._8_4_ = uVar7;
  auVar1._0_8_ = unaff_R15;
  auVar1._12_4_ = uVar12;
  auVar2._8_4_ = uVar7;
  auVar2._0_8_ = unaff_R15;
  auVar2._12_4_ = uVar12;
  auVar8._8_4_ = 0xffffffff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar1 | _DAT_18001a990,0);
  uVar4 = SUB168(auVar1 | _DAT_18001a990,0);
  uVar9 = SUB164(_DAT_18001a990 ^ auVar2,0);
  uVar5 = SUB168(_DAT_18001a990 ^ auVar2,0);
  uVar7 = SUB164(auVar8 ^ auVar11,0);
  uVar5 = (ulonglong)uVar7 * (ulonglong)_DAT_180527170 +
          ((ulonglong)_DAT_1805271c0 * (ulonglong)uVar7 +
           (SUB168(auVar8 ^ auVar11,0) >> 0x20) * (ulonglong)_DAT_180527170 << 0x20) +
          (ulonglong)_DAT_1805271a0 * (ulonglong)uVar9 +
          ((ulonglong)_DAT_1805271b0 * (ulonglong)uVar9 +
           (uVar5 >> 0x20) * (ulonglong)_DAT_1805271a0 << 0x20) +
          (ulonglong)_DAT_180527180 * (ulonglong)uVar10 +
          ((ulonglong)_DAT_180527190 * (ulonglong)uVar10 +
           (uVar4 >> 0x20) * (ulonglong)_DAT_180527180 << 0x20) +
          ((ulonglong)_DAT_180527160 * (ulonglong)uVar6 << 0x20 |
          (ulonglong)_DAT_180527150 * (ulonglong)uVar6) +
          ((ulonglong)_DAT_180527140 * (unaff_R15 & 0xffffffff) +
           (ulonglong)_DAT_180527130 * (ulonglong)uVar12 << 0x20) +
          (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_180527130 +
          (-((ulonglong)uVar9 * (ulonglong)_DAT_180527250 +
            ((ulonglong)_DAT_180527260 * (ulonglong)uVar9 +
             (uVar5 >> 0x20) * (ulonglong)_DAT_180527250 << 0x20)) -
          ((ulonglong)uVar10 * (ulonglong)_DAT_180527230 +
           ((ulonglong)_DAT_180527240 * (ulonglong)uVar10 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_180527230 << 0x20) +
          ((ulonglong)uVar6 * (ulonglong)_DAT_180527220 << 0x20 |
          (ulonglong)_DAT_180527210 * (ulonglong)uVar6) +
          ((ulonglong)_DAT_180527200 * (unaff_R15 & 0xffffffff) +
           (ulonglong)_DAT_1805271f0 * (ulonglong)uVar12 << 0x20) +
          (unaff_R15 & 0xffffffff) * (ulonglong)_DAT_1805271f0)) + 0x21d193b6f54ac888;
  _DAT_1830d7b18 = _DAT_1830d7608 ^ uVar3 ^ uVar5;
  _DAT_1830d7b88 = (_DAT_1830d7b88 ^ uVar3) + uVar5 ^ 0x3c8a8121759d9810;
  _DAT_1830d7b68 = (_DAT_1830d7b68 * 0x56acf09b0a7cf60f ^ _DAT_1830d7b88) + uVar3;
  _DAT_1830d7ac8 = _DAT_1830d7b68 ^ _DAT_1830d7b88;
  uVar3 = (_DAT_1830d7b88 ^ _DAT_180527270) + _DAT_1830d7628 + 0xde89407600a53d27;
  uVar4 = (_DAT_1830d7628 ^ _UNK_180527278) + _DAT_1830d7b88 + 0x95eb6383e192edd0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7b88 ^ _DAT_180527270;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d7628 ^ _UNK_180527278;
  _DAT_1830d7c88 = uVar5;
  _DAT_1830d7750 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7b88 + 0x95eb6383e192edd0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7628 + 0xde89407600a53d27));
  uVar3 = (_DAT_1830d7750 ^ 0x16223816110e1d0) << 0x24 |
          (_DAT_1830d7750 ^ 0x16223816110e1d0) >> 0x1c;
  _DAT_1830d75e8 = (_DAT_1830d75e8 ^ uVar3) + 0xdfeb63f7e597ffd2 ^ 0x8d4a1ef63ab4e8b;
  _DAT_1830d78c0 = (_DAT_1830d78c0 * -0x57ad98b471a64201 ^ _DAT_1830d75e8) + uVar3;
  _DAT_1830d7a48 = _DAT_1830d78c0 ^ _DAT_1830d75e8;
  _DAT_1830d7bc0 = 0xdfeb63f7e597ffd2;
  uVar3 = (~_DAT_1830d75d0 + 0x87e49bc75d8ed1fa) *
          ((_DAT_1830d7918 ^ 0xa8a5756490af9d00) + (_DAT_1830d7918 & 0x28a5756490af9d00) * 2);
  uVar3 = (uVar3 | _DAT_1830d7c28) + (uVar3 & _DAT_1830d7c28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7900 = func_0x0001855a7740((uVar3 | 0x2f41eea3cd214cf9) + (uVar3 & 0x2f41eea3cd214cf9));
  _DAT_1830d7910 = (_DAT_1830d7910 ^ _DAT_1830d7900) + 0x2f41eea349036fdc ^ 0x85cc20e5277e42eb;
  _DAT_1830d7ba0 = (_DAT_1830d7ba0 * 0x7611195b772b16f7 ^ _DAT_1830d7910) + _DAT_1830d7900;
  _DAT_1830d7b90 = _DAT_1830d7ba0 ^ _DAT_1830d7910;
  _DAT_1830d7858 = 0x2f41eea349036fdc;
  uVar3 = (_DAT_1830d7a68 ^ _DAT_180527280) + _DAT_1830d7b00 + 0x84222cda;
  uVar4 = (_DAT_1830d7b00 ^ _UNK_180527288) + _DAT_1830d7a68 + 0x488f539757f45d14;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7a68 ^ _DAT_180527280;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d7b00 ^ _UNK_180527288;
  _DAT_1830d7608 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7a68 + 0x488f539757f45d14) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7b00 + 0x84222cda));
  uVar3 = _DAT_1830d7608 >> 1 | _DAT_1830d7608;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1830d7608;
  _DAT_1830d7b80 = _DAT_1830d7aa8 ^ uVar3 ^ 0x488f539757f46d13;
  _DAT_1830d7600 = (_DAT_1830d7600 ^ uVar3) + 0x488f539757f46d13 ^ 0xf27dabb346e77874;
  _DAT_1830d7c98 = (_DAT_1830d7c98 * -0x17303719c1871faf ^ _DAT_1830d7600) + uVar3;
  _DAT_1830d7710 = _DAT_1830d7c98 ^ _DAT_1830d7600;
  _DAT_1830d7a10 = 0x488f539757f46d13;
  uVar3 = (_DAT_1830d7c58 ^ _DAT_180527290) + _DAT_1830d78c8 + 0x488f5397d3d64e36;
  uVar4 = (_DAT_1830d78c8 ^ _UNK_180527298) + _DAT_1830d7c58 + 0xb770ac68a80ba2ec;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7c58 ^ _DAT_180527290;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d78c8 ^ _UNK_180527298;
  _DAT_1830d7698 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7c58 + 0xb770ac68a80ba2ec) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d78c8 + 0x488f5397d3d64e36));
  _DAT_1830d7b38 = _DAT_1830d7678 ^ _DAT_1830d7698 ^ 0xfff;
  _DAT_1830d7c58 = (_DAT_1830d7c58 ^ _DAT_1830d7698) + 0xfff ^ 0xce0fe090056d5ada;
  _DAT_1830d7590 = (_DAT_1830d7590 * -0x1318caf83a058375 ^ _DAT_1830d7c58) + _DAT_1830d7698;
  _DAT_1830d7b80 = _DAT_1830d7590 ^ _DAT_1830d7c58;
  _DAT_1830d7b40 = 0xfff;
  _DAT_1830d7638 = func_0x0001855a7740(_DAT_1830d7a68 + 0xa25afe58f16bd621 ^ 0x44);
  _DAT_1830d7958 =
       (_DAT_1830d7958 ^ _DAT_1830d7638 * 0x6f0dd67121f459db) + 0x9dfd635da48b3bc9 ^
       0x98b4bca35a0e9c3;
  _DAT_1830d7ac8 =
       (_DAT_1830d7ac8 * 0xa00549e4f3d5f41 ^ _DAT_1830d7958) + _DAT_1830d7638 * 0x6f0dd67121f459db;
  _DAT_1830d7980 = _DAT_1830d7ac8 ^ _DAT_1830d7958;
  _DAT_1830d7af8 = _DAT_1830d7a28 ^ 0x9dfd635da48b3bc9;
  _DAT_1830d7978 = 0x9dfd635da48b3bc9;
  _DAT_1830d7640 = func_0x0001855a7740(_DAT_1830d7880 ^ 0xd1d8f7d7052350e4);
  uVar3 = (_DAT_1830d7640 << 0x21 | _DAT_1830d7640 >> 0x1f) * 0x3fa9506bb69d049;
  _DAT_1830d75b8 = (_DAT_1830d75b8 ^ uVar3) + 0x4f07dca9520cf7c2 ^ 0x616bab453cbed1ba;
  _DAT_1830d7930 = (_DAT_1830d7930 * -0x57ba0e6c1db37f9f ^ _DAT_1830d75b8) + uVar3;
  _DAT_1830d7688 = _DAT_1830d7930 ^ _DAT_1830d75b8;
  _DAT_1830d7a08 = 0x4f07dca9520cf7c2;
  uVar3 = (~_DAT_1830d7978 + 0xb0f82356adf3083f) *
          ((_DAT_1830d7688 ^ 0x84222cda) + (ulonglong)((uint)_DAT_1830d7688 & 0x84222cda) * 2);
  uVar3 = (uVar3 | _DAT_1830d7a88) + (uVar3 & _DAT_1830d7a88);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7a80 = func_0x0001855a7740((uVar3 | 0xb0f8235629d124e4) + (uVar3 & 0xb0f8235629d124e4));
  uVar3 = _DAT_1830d7a80 ^ 0xfff;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3;
  _DAT_1830d75b0 = _DAT_1830d7c50 ^ uVar3 ^ 0xb0f82356adf3183d;
  _DAT_1830d7b70 = (_DAT_1830d7b70 ^ uVar3) + 0xb0f82356adf3183d ^ 0xeb1baded46ecc725;
  _DAT_1830d7b40 = (_DAT_1830d7b40 * -0x6587178b6f67f4e7 ^ _DAT_1830d7b70) + uVar3;
  _DAT_1830d7af8 = _DAT_1830d7b40 ^ _DAT_1830d7b70;
  _DAT_1830d7600 = 0xb0f82356adf3183d;
  uVar3 = (~_DAT_1830d7568 + 0x4f07dca9520cf7c3) *
          ((_DAT_1830d7920 ^ 0xb0f8235629d13b18) + (_DAT_1830d7920 & 0x30f8235629d13b18) * 2);
  uVar3 = (uVar3 | _DAT_1830d7c20) + (uVar3 & _DAT_1830d7c20);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7810 = func_0x0001855a7740((uVar3 | 0xffffffff7bddccda) + (uVar3 & 0xffffffff7bddccda));
  uVar3 = ~_DAT_1830d7810 & 0xfffffffffff80000;
  _DAT_1830d7c68 = _DAT_1830d77b0 ^ uVar3 ^ 0xfff;
  _DAT_1830d7738 = (_DAT_1830d7738 ^ uVar3) + 0xfff ^ 0x8ffa4261e6a6ff82;
  _DAT_1830d76f0 = (_DAT_1830d76f0 * 0xf306bb94ad0619f ^ _DAT_1830d7738) + uVar3;
  _DAT_1830d7a48 = _DAT_1830d76f0 ^ _DAT_1830d7738;
  _DAT_1830d7710 = 0xfff;
  uVar3 = (~_DAT_1830d7950 + 0x2f41eea349036fdd) *
          ((_DAT_1830d75b8 ^ 0xdfeb63f761b5dcf7) + (_DAT_1830d75b8 & 0x5feb63f761b5dcf7) * 2);
  uVar3 = (uVar3 | _DAT_1830d7730) + (uVar3 & _DAT_1830d7730);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7bd0 = func_0x0001855a7740((uVar3 | 0xf0aa8d5428b6b32b) + (uVar3 & 0xf0aa8d5428b6b32b));
  uVar3 = _DAT_1830d7bd0 ^ 0x5cf18d071801e678;
  uVar3 = ((uVar3 & 0x7ffffff) << 5 | uVar3 >> 0x3b) << 0x1f | (uVar3 & 0x7ffffffffffffff) >> 0x1c;
  _DAT_1830d7698 = (_DAT_1830d7698 ^ uVar3) + 0xf4162a341036fd0 ^ 0x3469eac698260782;
  _DAT_1830d7ab8 = (_DAT_1830d7ab8 * 0x11894c167504d653 ^ _DAT_1830d7698) + uVar3;
  _DAT_1830d7770 = _DAT_1830d7ab8 ^ _DAT_1830d7698;
  _DAT_1830d7918 = 0xf4162a341036fd0;
  uVar3 = (~_DAT_1830d7a30 + 0xf2d529b2e9b6faf) *
          ((_DAT_1830d7c48 ^ 0xf2d529baab94c8b) + (_DAT_1830d7c48 & 0xf2d529baab94c8b) * 2);
  uVar3 = (uVar3 | _DAT_1830d75d8) + (uVar3 & _DAT_1830d75d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7a98 = func_0x0001855a7740((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_1830d7508 = _DAT_1830d7508 ^ _DAT_1830d7a98 ^ 0x71ab5a43fa8781f4;
  _DAT_1830d7830 = (_DAT_1830d7830 * 0x226875c36b89f7c7 ^ _DAT_1830d7508) + _DAT_1830d7a98;
  _DAT_1830d7908 = _DAT_1830d7830 ^ _DAT_1830d7508;
  _DAT_1830d7a80 = 0;
  uVar3 = (_DAT_1830d7c50 ^ _DAT_1805272a0) + _DAT_1830d7c98 + 0xdfeb63f761b5dcf7;
  uVar4 = (_DAT_1830d7c98 ^ _UNK_1805272a8) + (_DAT_1830d7c50 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7c50 ^ _DAT_1805272a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d7c98 ^ _UNK_1805272a8;
  _DAT_1830d7b58 = _DAT_1830d7a98;
  _DAT_1830d7a78 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7c50 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7c98 + 0xdfeb63f761b5dcf7));
  _DAT_1830d7ab0 =
       (_DAT_1830d7ab0 ^ _DAT_1830d7a78 & 0x3ffffffffffffff) + 0x20149c081a68002d ^
       0xc7f1f33e0d07c541;
  _DAT_1830d7ae0 =
       (_DAT_1830d7ae0 * -0x337f63b9b49043b7 ^ _DAT_1830d7ab0) +
       (_DAT_1830d7a78 & 0x3ffffffffffffff);
  _DAT_1830d7b30 = _DAT_1830d7ae0 ^ _DAT_1830d7ab0;
  _DAT_1830d79f0 = 0x20149c081a68002d;
  uVar3 = (_DAT_1830d7978 ^ _DAT_1805272b0) + _DAT_1830d7ae0 + 0xdfeb63f761b5dcf7;
  uVar4 = (_DAT_1830d7ae0 ^ _UNK_1805272b8) + _DAT_1830d7978 + 0x20149c081a68002d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7978 ^ _DAT_1805272b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d7ae0 ^ _UNK_1805272b8;
  _DAT_1830d7aa8 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7978 + 0x20149c081a68002d) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7ae0 + 0xdfeb63f761b5dcf7));
  uVar3 = ((_DAT_1830d7aa8 ^ 0x2f733ede9d07f7ea) << 0x17 |
          (_DAT_1830d7aa8 ^ 0x2f733ede9d07f7ea) >> 0x29) ^ 0x20149c081a68002d;
  _DAT_1830d7858 = _DAT_1830d7858 ^ uVar3 ^ 0x36538121f836eeec;
  _DAT_1830d7700 = (_DAT_1830d7700 * 0xf9e0139e8178577 ^ _DAT_1830d7858) + uVar3;
  _DAT_1830d78f0 = _DAT_1830d7700 ^ _DAT_1830d7858;
  _DAT_1830d7768 = 0;
  switch(0xfff < uVar5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5588f5e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185588f5e(ulonglong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  int *unaff_RBP;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = (in_RAX ^ _DAT_1805266a0) + param_1 + 0x6eec038e;
  uVar4 = (param_1 ^ _UNK_1805266a8) + in_RAX + 0xda3c0c5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ in_RAX ^ _DAT_1805266a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ param_1 ^ _UNK_1805266a8;
  _DAT_1830d7898 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (in_RAX + 0xda3c0c5) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (param_1 + 0x6eec038e));
  _DAT_1830d76f8 =
       (_DAT_1830d76f8 ^ _DAT_1830d7898 * 0x3c14529a609bf00b) + 0xefefe0ef ^ 0x93263efb37373361;
  _DAT_1830d7888 =
       (_DAT_1830d7888 * -0xa60128b422f55fb ^ _DAT_1830d76f8) + _DAT_1830d7898 * 0x3c14529a609bf00b;
  _DAT_1830d7c88 = _DAT_1830d7888 ^ _DAT_1830d76f8;
  _DAT_1830d7628 = 0xefefe0ef;
  _DAT_1830d7a08 = func_0x0001855a7740(_DAT_1830d75a8 + 0xff4c00296c0030ffU ^ 0xa8);
  _DAT_1830d76c8 = (_DAT_1830d76c8 ^ _DAT_1830d7a08 ^ 0x6b08797f) + 0xdd13f749 ^ 0x8578aca39f24c10f;
  _DAT_1830d7998 =
       (_DAT_1830d7998 * -0x7a5f3e401b3e9f2d ^ _DAT_1830d76c8) + (_DAT_1830d7a08 ^ 0x6b08797f);
  _DAT_1830d7858 = _DAT_1830d7998 ^ _DAT_1830d76c8;
  _DAT_1830d7b68 = 0xdd13f749;
  uVar3 = (~_DAT_1830d78f0 + 0xe76a41c2) *
          ((_DAT_1830d7b70 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830d7b70 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830d7c50) + (uVar3 & _DAT_1830d7c50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7560 = func_0x0001855a7740((uVar3 | 0x634862e4) + (ulonglong)((uint)uVar3 & 0x634862e4))
  ;
  _DAT_1830d7a10 = (_DAT_1830d7a10 ^ _DAT_1830d7560 ^ 0xe76a41c1) - 0xe76a41c1 ^ 0x69bfcc4f4b5cbdc7;
  _DAT_1830d7878 =
       (_DAT_1830d7878 * -0x2fd5f38f41ff43c5 ^ _DAT_1830d7a10) + (_DAT_1830d7560 ^ 0xe76a41c1);
  _DAT_1830d7880 = _DAT_1830d7878 ^ _DAT_1830d7a10;
  _DAT_1830d7c90 = 0x1895be3f;
  uVar3 = (~_DAT_1830d76e8 + 0x1895be40) *
          ((_DAT_1830d7718 ^ 0x6348629a) + (ulonglong)((uint)_DAT_1830d7718 & 0x6348629a) * 2);
  uVar3 = (uVar3 | _DAT_1830d7c00) + (uVar3 & _DAT_1830d7c00);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7760 = func_0x0001855a7740((uVar3 | 0x7bdddca5) + (ulonglong)((uint)uVar3 & 0x7bdddca5))
  ;
  uVar3 = _DAT_1830d7760 - (_DAT_1830d7760 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1830d7760;
  _DAT_1830d76e8 = _DAT_1830d79a8 ^ uVar3 ^ 0xfffffffe;
  _DAT_1830d7738 = (_DAT_1830d7738 ^ uVar3) + 0xfffffffe ^ 0x6e295d5a83b5f77f;
  _DAT_1830d7878 = (_DAT_1830d7878 * 0x68fb9b7bca793a45 ^ _DAT_1830d7738) + uVar3;
  _DAT_1830d7af8 = _DAT_1830d7878 ^ _DAT_1830d7738;
  _DAT_1830d7538 = 0xfffffffe;
  uVar3 = (_DAT_1830d75e0 ^ _DAT_1805266b0) + _DAT_1830d7b78 + 0x84222325;
  uVar4 = (_DAT_1830d7b78 ^ _UNK_1805266b8) + _DAT_1830d75e0 + 0xd0f8dbff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d75e0 ^ _DAT_1805266b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d7b78 ^ _UNK_1805266b8;
  _DAT_1830d7b68 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d75e0 + 0xd0f8dbff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7b78 + 0x84222325));
  _DAT_1830d7c00 = _DAT_1830d7c00 - 0xd0f8dbff ^ 0xbeff73954065d596;
  _DAT_1830d7640 = _DAT_1830d76a0 * 0x4ffad186f2bc1feb;
  _DAT_1830d76a0 = _DAT_1830d7640 ^ _DAT_1830d7c00;
  _DAT_1830d7798 = 0x2f072401;
  uVar3 = (~_DAT_1830d75f8 + 0xd0f8dc00) *
          ((_DAT_1830d75b8 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_1830d75b8 & 0x7bdddcdb) * 2);
  uVar3 = (uVar3 | _DAT_1830d7898) + (uVar3 & _DAT_1830d7898);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d75c8 = func_0x0001855a7740((uVar3 | 0xab250724) + (ulonglong)((uint)uVar3 & 0xab250724))
  ;
  _DAT_1830d7a88 = _DAT_1830d75d8 ^ _DAT_1830d75c8 ^ 0x1d0f8dbfd;
  _DAT_1830d7bd0 = (_DAT_1830d7bd0 ^ _DAT_1830d75c8) + 0x1d0f8dbfd ^ 0xc149a3c1c5b7f42f;
  _DAT_1830d75e0 = (_DAT_1830d75e0 * -0x624d6908fe54a0b9 ^ _DAT_1830d7bd0) + _DAT_1830d75c8;
  _DAT_1830d7b20 = _DAT_1830d75e0 ^ _DAT_1830d7bd0;
  _DAT_1830d7510 = _DAT_1830d78a0 ^ 0x1d0f8dbfd;
  _DAT_1830d78d0 = 0xd0f8dbfd;
  _DAT_1830d7ca8 = func_0x0001855a7740(_DAT_1830d7578 + 0xdc004528ffb2ffU ^ 0x2d);
  uVar4 = _DAT_1830d7ca8 * 0x5972c7185aa6cb07;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar4;
  _DAT_1830d79b0 = _DAT_1830d79a8 ^ uVar4 ^ 0xfffffffe;
  _DAT_1830d7528 = (_DAT_1830d7528 ^ uVar4) + 0xfffffffe ^ 0x36db59ad74f10aec;
  _DAT_1830d75a0 = (_DAT_1830d75a0 * -0x57c4323b035b96dd ^ _DAT_1830d7528) + uVar4;
  _DAT_1830d7790 = _DAT_1830d75a0 ^ _DAT_1830d7528;
  _DAT_1830d7600 = 0xfffffffe;
  uVar3 = (~_DAT_1830d7b30 + 0xe5690f98) *
          ((_DAT_1830d7b80 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830d7b80 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_1830d7790) + (uVar3 & _DAT_1830d7790);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7890 = func_0x0001855a7740((uVar3 | 0x614b2cb2) + (ulonglong)((uint)uVar3 & 0x614b2cb2))
  ;
  _DAT_1830d7548 = (_DAT_1830d7548 ^ _DAT_1830d76c8) - 0xe5690f97 ^ 0xc99bb87a92ff195f;
  _DAT_1830d7968 = (_DAT_1830d7968 * -0x4118d752b1760ee7 ^ _DAT_1830d7548) + _DAT_1830d76c8;
  _DAT_1830d7c60 = _DAT_1830d7968 ^ _DAT_1830d7548;
  _DAT_1830d7ce8 = 0x1a96f069;
  uVar3 = (~_DAT_1830d78a8 + 0xe5690f98) *
          ((_DAT_1830d7a10 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_1830d7a10 & 0x7bdddcdb) * 2);
  uVar3 = (uVar3 | _DAT_1830d7600) + (uVar3 & _DAT_1830d7600);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7be0 = func_0x0001855a7740((uVar3 | 0x9eb4d34c) + (ulonglong)((uint)uVar3 & 0x9eb4d34c))
  ;
  uVar3 = _DAT_1830d7be0 ^ 0xfffffffe;
  _DAT_1830d7bb0 = _DAT_1830d7860 ^ uVar3 ^ 0x1e5690f95;
  _DAT_1830d79f8 = (_DAT_1830d79f8 ^ uVar3) + 0x1e5690f95 ^ 0x477c041e0eecce37;
  _DAT_1830d7be8 = (_DAT_1830d7be8 * 0x28071e6a33d1dbd7 ^ _DAT_1830d79f8) + uVar3;
  _DAT_1830d7b60 = _DAT_1830d7be8 ^ _DAT_1830d79f8;
  _DAT_1830d75c0 = 0xe5690f95;
  uVar3 = (_DAT_1830d7a90 ^ _DAT_1805266c0) + _DAT_1830d7ca0 + 0x614b2cb0;
  uVar4 = (_DAT_1830d7ca0 ^ _UNK_1805266c8) + _DAT_1830d7a90 + 0x1a96f069;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7a90 ^ _DAT_1805266c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d7ca0 ^ _UNK_1805266c8;
  _DAT_1830d7a68 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7a90 + 0x1a96f069) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7ca0 + 0x614b2cb0));
  uVar4 = _UNK_1805266d8;
  uVar3 = _DAT_1805266d0;
  uVar2 = _DAT_1830d7a68 & 0x3fffffffff;
  _DAT_1830d7a48 = _DAT_1830d7788 ^ uVar2 ^ 0xfffffffe;
  _DAT_1830d7ad8 = (_DAT_1830d7ad8 ^ uVar2) + 0xfffffffe ^ 0xc0b69e91485c85a9;
  _DAT_1830d7c08 = (_DAT_1830d7c08 * -0x3ab826b1bbf7ca9 ^ _DAT_1830d7ad8) + uVar2;
  _DAT_1830d7c10 = _DAT_1830d7c08 ^ _DAT_1830d7ad8;
  _DAT_1830d7a98 = 0xfffffffe;
  uVar2 = (_DAT_1830d7588 ^ _DAT_1805266d0) + _DAT_1830d7c80 + 0x6bcdc3ca;
  uVar5 = (_DAT_1830d7c80 ^ _UNK_1805266d8) + _DAT_1830d7588 + 0xdd13f749;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7588 ^ _DAT_1805266d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830d7c80 ^ _UNK_1805266d8;
  _DAT_1830d7628 =
       func_0x0001855a7740((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830d7588 + 0xdd13f749) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7c80 + 0x6bcdc3ca));
  uVar2 = _DAT_1830d7628 << 0xb | _DAT_1830d7628 >> 0x35;
  _DAT_1830d7ad8 = _DAT_1830d7bf0 ^ uVar2 ^ 0x1cd03d838;
  _DAT_1830d76d0 = (_DAT_1830d76d0 ^ uVar2) + 0x1cd03d838 ^ 0xdf64f2265067aaf8;
  _DAT_1830d7bb0 = (_DAT_1830d7bb0 * 0x225e200c1005e953 ^ _DAT_1830d76d0) + uVar2;
  _DAT_1830d7910 = _DAT_1830d7bb0 ^ _DAT_1830d76d0;
  _DAT_1830d75e8 = 0xcd03d838;
  uVar2 = (_DAT_1830d7508 ^ uVar3) + _DAT_1830d79e0 + 0x6bcdc3ca;
  uVar5 = (_DAT_1830d79e0 ^ uVar4) + _DAT_1830d7508 + 0xdd13f749;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7508 ^ uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830d79e0 ^ uVar4;
  _DAT_1830d7608 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7508 + 0xdd13f749) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d79e0 + 0x6bcdc3ca));
  uVar3 = _DAT_1830d7608 >> 1 | _DAT_1830d7608;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1830d7608;
  _DAT_1830d78b0 = (_DAT_1830d78b0 ^ uVar3) + 0x32fc17a6 ^ 0xe46fa3feaa7bbb3a;
  _DAT_1830d7690 = (_DAT_1830d7690 * 0x46f4ab3f1e7dfbd ^ _DAT_1830d78b0) + uVar3;
  _DAT_1830d7a78 = _DAT_1830d7690 ^ _DAT_1830d78b0;
  _DAT_1830d78b8 = 0x32fc17a6;
  uVar3 = (~_DAT_1830d7b68 + 0xdd13f74a) *
          ((_DAT_1830d7c48 ^ 0x6bcdc3ca) + (ulonglong)((uint)_DAT_1830d7c48 & 0x6bcdc3ca) * 2);
  uVar3 = (uVar3 | _DAT_1830d7b28) + (uVar3 & _DAT_1830d7b28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7b58 = func_0x0001855a7740((uVar3 | 0xb6de3483) + (ulonglong)((uint)uVar3 & 0xb6de3483))
  ;
  uVar4 = _DAT_1830d7b58 ^ 0xfffff7ef;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~((uint)uVar4 ^
            (uint)((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2)) &
          0xefefe0ef);
  _DAT_1830d7ca0 = (_DAT_1830d7ca0 ^ uVar3) + 0xcd03e049 ^ 0xa8e2741373b28739;
  _DAT_1830d7af8 = (_DAT_1830d7af8 * -0x1e381013b0aac44b ^ _DAT_1830d7ca0) + uVar3;
  _DAT_1830d7718 = _DAT_1830d7af8 ^ _DAT_1830d7ca0;
  _DAT_1830d77e0 = 0xcd03e049;
  uVar3 = (~_DAT_1830d76f0 + 0x9a07c093) *
          ((_DAT_1830d7a10 ^ 0xb6de3483) + (ulonglong)((uint)_DAT_1830d7a10 & 0xb6de3483) * 2);
  uVar3 = (uVar3 | _DAT_1830d7978) + (uVar3 & _DAT_1830d7978);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7590 = func_0x0001855a7740((uVar3 | 0x2cd9f411) + (ulonglong)((uint)uVar3 & 0x2cd9f411))
  ;
  _DAT_1830d7b98 = _DAT_1830d79f8 ^ _DAT_1830d7590 ^ 0xcd03d838;
  _DAT_1830d7760 = (_DAT_1830d7760 ^ _DAT_1830d7590) + 0xcd03d838 ^ 0xa2b268d1a8484f86;
  _DAT_1830d7668 = (_DAT_1830d7668 * -0x5b134e37755aa501 ^ _DAT_1830d7760) + _DAT_1830d7590;
  _DAT_1830d7868 = _DAT_1830d7668 ^ _DAT_1830d7760;
  _DAT_1830d7a00 = 0xcd03d838;
  uVar3 = (~_DAT_1830d7690 + 0xcd03d839) *
          ((_DAT_1830d75f8 ^ 0x4921fb1d) + (ulonglong)((uint)_DAT_1830d75f8 & 0x4921fb1d) * 2);
  uVar3 = (uVar3 | _DAT_1830d7768) + (uVar3 & _DAT_1830d7768);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d7a38 = func_0x0001855a7740((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_1830d77d8 = _DAT_1830d7a38 ^ 0xcd03d838;
  _DAT_1830d7ca8 = _DAT_1830d7ca8 ^ _DAT_1830d77d8 ^ 0xa932d754aefdba1;
  _DAT_1830d7c08 = (_DAT_1830d7c08 * -0x2a5be66558894fdf ^ _DAT_1830d7ca8) + _DAT_1830d77d8;
  _DAT_1830d7cf8 = _DAT_1830d7c08 ^ _DAT_1830d7ca8;
  _DAT_1830d7630 = 0;
  _DAT_1830d7838 = func_0x0001855a7740(_DAT_1830d7670 ^ 0xabffd529ffc4d9);
  uVar3 = (_DAT_1830d7838 ^ 0xefefe0ef) & 0x7fffffffffffffff;
  _DAT_1830d7730 = _DAT_1830d7730 ^ uVar3 ^ 0xcc96fde19d01f1b6;
  _DAT_1830d79e0 = (_DAT_1830d79e0 * -0x6fb207edb375034f ^ _DAT_1830d7730) + uVar3;
  _DAT_1830d7760 = _DAT_1830d79e0 ^ _DAT_1830d7730;
  _DAT_1830d78a8 = 0;
  _DAT_1830d7980 = func_0x0001855a7740(_DAT_1830d75f8 + 0x43ff994affdaff ^ 0xd);
  uVar3 = ~(ulonglong)~(uint)_DAT_1830d7980 & 0xfffffffe;
  _DAT_1830d77c8 = _DAT_1830d75e8 ^ uVar3 ^ 0xfffffffe;
  _DAT_1830d7810 = (_DAT_1830d7810 ^ uVar3) + 0xfffffffe ^ 0xcd7ce962ae00927c;
  _DAT_1830d76e8 = (_DAT_1830d76e8 * -0x732c59b6e707b433 ^ _DAT_1830d7810) + uVar3;
  _DAT_1830d7b88 = _DAT_1830d76e8 ^ _DAT_1830d7810;
  _DAT_1830d7598 = 0xfffffffe;
  uVar3 = (_DAT_1830d7750 ^ 0x7bdddcdb) + _DAT_1830d7c00 + 0x7bdddcdb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7750 ^ 0x7bdddcdb;
  uVar4 = ((_DAT_1830d7c00 + _DAT_1830d7750) * 0x2000 | _DAT_1830d7c00 + _DAT_1830d7750 >> 0x33) ^
          _DAT_1830d7c00;
  _DAT_1830d7b80 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_1830d7750 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7c00 + 0x7bdddcdb));
  _DAT_1830d7c20 = _DAT_1830d7658 ^ _DAT_1830d7b80 ^ 0xfffffffe;
  _DAT_1830d7550 = (_DAT_1830d7550 ^ _DAT_1830d7b80) + 0xfffffffe ^ 0x51f4ca42d4fd2ce5;
  _DAT_1830d7828 = (_DAT_1830d7828 * -0x606f70c7b91f11e1 ^ _DAT_1830d7550) + _DAT_1830d7b80;
  _DAT_1830d7ac8 = _DAT_1830d7828 ^ _DAT_1830d7550;
  _DAT_1830d7980 = 0xfffffffe;
  *unaff_RBP = unaff_RBP[0x2c] + -2;
  unaff_RBP[-1] = unaff_RBP[0x2c];
  unaff_RBP[0x20] = 0xff;
  *(undefined8 *)(unaff_RBP + 0x22) = *(undefined8 *)(unaff_RBP + 4);
  unaff_RBP[0x24] = 0;
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x1c) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x1c),*(undefined8 *)(unaff_RBP + 4));
  switch(unaff_RBP[0x24] < 0 || iVar1 <= unaff_RBP[0x24]) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x558a277 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18558a277(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  uint uVar3;
  longlong *unaff_R12;
  undefined4 unaff_R14D;
  ulonglong uVar4;
  
  *(undefined4 *)(unaff_RBP + 0x50) = unaff_R14D;
  *(undefined4 *)(unaff_RBP + 0x40) = unaff_ESI;
  lVar1 = (**(code **)(unaff_R12 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x88) = (int)*(char *)(lVar1 + *(int *)(unaff_RBP + 0x90));
  (**(code **)(unaff_R12 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar3 = *(uint *)(unaff_RBP + 0x88) & *(uint *)(unaff_RBP + 0x80);
  *(uint *)(unaff_RBP + 0x80) = uVar3;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(int *)(unaff_RBP + 0xb0) = (int)*(undefined8 *)(unaff_RBP + 0x80);
  uVar2 = (~_DAT_1830d7820 + 0xc7075b65) *
          ((_DAT_1830d7a30 ^ 0x5f2416ee) + (ulonglong)((uint)_DAT_1830d7a30 & 0x5f2416ee) * 2);
  uVar2 = (uVar2 | _DAT_1830d7a00) + (uVar2 & _DAT_1830d7a00);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7758 = func_0x0001855a7740((uVar2 | 0x98234d8a) + (ulonglong)((uint)uVar2 & 0x98234d8a))
  ;
  _DAT_1830d7520 = (_DAT_1830d7520 ^ _DAT_1830d7758 ^ 0xdb0635cb) + 0xdf077fef ^ 0xf01b99c338ec5c88;
  _DAT_1830d7928 =
       (_DAT_1830d7928 * -0x5750e1539922bb85 ^ _DAT_1830d7520) + (_DAT_1830d7758 ^ 0xdb0635cb);
  _DAT_1830d79e0 = _DAT_1830d7928 ^ _DAT_1830d7520;
  _DAT_1830d77f0 = 0xdf077fef;
  uVar2 = (_DAT_1830d7ba8 ^ _DAT_1805266e0) + _DAT_1830d7568 + 0x84222325;
  uVar4 = (_DAT_1830d7568 ^ _UNK_1805266e8) + _DAT_1830d7ba8 + 0x29ec0fc;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7ba8 ^ _DAT_1805266e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d7568 ^ _UNK_1805266e8;
  _DAT_1830d7648 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7ba8 + 0x29ec0fc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7568 + 0x84222325));
  _DAT_1830d7a10 = (_DAT_1830d7a10 ^ _DAT_1830d7648) - 0x29ec0fc ^ 0xe16efa6f08393218;
  _DAT_1830d75c0 = (_DAT_1830d75c0 * -0x55724d529c42f989 ^ _DAT_1830d7a10) + _DAT_1830d7648;
  _DAT_1830d7708 = _DAT_1830d75c0 ^ _DAT_1830d7a10;
  _DAT_1830d75b0 = 0xfd613f04;
  _DAT_1830d79a8 = func_0x0001855a7740(_DAT_1830d7b48 ^ 0xff2100821e009b76);
  uVar2 = _DAT_1830d79a8 - (_DAT_1830d79a8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_1830d79a8) & 0x7fffffffffffffff;
  _DAT_1830d7c38 = _DAT_1830d7820 ^ uVar2 ^ 0x29ec1bb;
  _DAT_1830d7680 = (_DAT_1830d7680 ^ uVar2) + 0x29ec1bb ^ 0x8976ccf32e45fe1b;
  _DAT_1830d7570 = (_DAT_1830d7570 * -0x1c7fef147f29a3d3 ^ _DAT_1830d7680) + uVar2;
  _DAT_1830d7830 = _DAT_1830d7570 ^ _DAT_1830d7680;
  _DAT_1830d79e8 = 0x29ec1bb;
  _DAT_1830d7a00 = func_0x0001855a7740(_DAT_1830d7bd8 ^ 0xbd004b9600d256);
  uVar2 = _DAT_1830d7a00 * -0x3d124c0a6d55aef3;
  _DAT_1830d76e0 = _DAT_1830d7590 ^ uVar2 ^ 0x1000000bf;
  _DAT_1830d7b48 = (_DAT_1830d7b48 ^ uVar2) + 0x1000000bf ^ 0x39237f2061ac4a4f;
  _DAT_1830d77f0 = (_DAT_1830d77f0 * 0x3a90696536c0a389 ^ _DAT_1830d7b48) + uVar2;
  _DAT_1830d7a30 = _DAT_1830d77f0 ^ _DAT_1830d7b48;
  _DAT_1830d7668 = 0xbf;
  uVar2 = (_DAT_1830d7548 ^ _DAT_1805266f0) + _DAT_1830d7720 + 0x84222325;
  uVar4 = (_DAT_1830d7720 ^ _UNK_1805266f8) + _DAT_1830d7548 + 0x2c2e4815;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7548 ^ _DAT_1805266f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d7720 ^ _UNK_1805266f8;
  _DAT_1830d7630 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7548 + 0x2c2e4815) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7720 + 0x84222325));
  uVar2 = _DAT_1830d7630 - (_DAT_1830d7630 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1830d7630) * 0x4b38dba8cb1b1495;
  _DAT_1830d7c18 = (_DAT_1830d7c18 ^ uVar2) - 0x2c2e4815 ^ 0x9f6de38b4b48f276;
  _DAT_1830d7858 = (_DAT_1830d7858 * 0x703e6ee5fa6df607 ^ _DAT_1830d7c18) + uVar2;
  _DAT_1830d7928 = _DAT_1830d7858 ^ _DAT_1830d7c18;
  _DAT_1830d7908 = 0xd3d1b7eb;
  _DAT_1830d7af0 = func_0x0001855a7740(_DAT_1830d7a98 ^ 0x56ff587b000ba3);
  uVar2 = _DAT_1830d7af0 & 0x3fffffffffffffff;
  _DAT_1830d7b00 = _DAT_1830d78a8 ^ uVar2 ^ 0x2c2e48d4;
  _DAT_1830d78f8 = (_DAT_1830d78f8 ^ uVar2) + 0x2c2e48d4 ^ 0x14a48979b9df0ccc;
  _DAT_1830d7b60 = (_DAT_1830d7b60 * 0x3e89cbfb7ca9d91 ^ _DAT_1830d78f8) + uVar2;
  _DAT_1830d7c10 = _DAT_1830d7b60 ^ _DAT_1830d78f8;
  _DAT_1830d7a18 = 0x2c2e48d4;
  _DAT_1830d7800 = func_0x0001855a7740(_DAT_1830d78a0 + 0xff5bffb8e60022ff ^ 0x5f);
  uVar2 = _DAT_1830d7800 ^ 0xffffffff;
  _DAT_1830d7c40 = _DAT_1830d78d0 ^ uVar2 ^ 0x1000000bf;
  _DAT_1830d7948 = (_DAT_1830d7948 ^ uVar2) + 0x1000000bf ^ 0x6125c63fd76253d1;
  _DAT_1830d7b80 = (_DAT_1830d7b80 * -0x43137a7ec13815bd ^ _DAT_1830d7948) + uVar2;
  _DAT_1830d7b28 = _DAT_1830d7b80 ^ _DAT_1830d7948;
  _DAT_1830d7550 = 0xbf;
  _DAT_1830d7c70 = func_0x0001855a7740(_DAT_1830d7908 + 0xff3c0054e5ff2affU ^ 0x86);
  uVar2 = (_DAT_1830d7c70 ^ 0xffffffff) << 0x29 | (_DAT_1830d7c70 ^ 0xffffffff) >> 0x17;
  _DAT_1830d7b08 = _DAT_1830d7568 ^ uVar2 ^ 0x1000000bf;
  _DAT_1830d7670 = (_DAT_1830d7670 ^ uVar2) + 0x1000000bf ^ 0xb99a36f7cb8ad3e7;
  _DAT_1830d79e0 = (_DAT_1830d79e0 * -0x7bc506230635472d ^ _DAT_1830d7670) + uVar2;
  _DAT_1830d7820 = _DAT_1830d79e0 ^ _DAT_1830d7670;
  _DAT_1830d7610 = 0xbf;
  uVar2 = (_DAT_1830d7cb8 ^ _DAT_180526700) + _DAT_1830d76d0 + 0x5b255cca;
  uVar4 = (_DAT_1830d76d0 ^ _UNK_180526708) + _DAT_1830d7cb8 + 0xf346f67a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7cb8 ^ _DAT_180526700;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1830d76d0 ^ _UNK_180526708;
  _DAT_1830d7bd0 =
       func_0x0001855a7740((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1830d7cb8 + 0xf346f67a) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d76d0 + 0x5b255cca));
  uVar2 = _DAT_1830d7bd0 ^ 0x20408010;
  _DAT_1830d7cf0 = _DAT_1830d7ac8 ^ uVar2 ^ 0x1d24e7669;
  _DAT_1830d75b0 = (_DAT_1830d75b0 ^ uVar2) + 0x1d24e7669 ^ 0x57fee8670d13040b;
  _DAT_1830d7880 = (_DAT_1830d7880 * 0x5be8ed7fbd31ea7b ^ _DAT_1830d75b0) + uVar2;
  _DAT_1830d77c8 = _DAT_1830d7880 ^ _DAT_1830d75b0;
  _DAT_1830d7c18 = 0xd24e7669;
  _DAT_1830d7720 = func_0x0001855a7740(_DAT_1830d75d8 + 0xff65ff67b00022ffU ^ 0xfe);
  uVar2 = _DAT_1830d7720 >> 1 | _DAT_1830d7720;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_1830d7720;
  _DAT_1830d79f0 = (_DAT_1830d79f0 ^ uVar2) + 0x2c418995 ^ 0xb32568243526a59f;
  _DAT_1830d7938 = (_DAT_1830d7938 * 0x1230c654c58f1051 ^ _DAT_1830d79f0) + uVar2;
  _DAT_1830d7590 = _DAT_1830d7938 ^ _DAT_1830d79f0;
  _DAT_1830d7958 = 0x2c418995;
  _DAT_1830d7830 = func_0x0001855a7740(_DAT_1830d7cf8 + 0xffc5fff1e3ffa2ffU ^ 0xd7);
  uVar2 = (_DAT_1830d7830 ^ 0x1cb4bb3a22174b64) * 0xe7425871353e11;
  _DAT_1830d7c90 = _DAT_1830d75c0 ^ uVar2 ^ 0xd24e7669;
  _DAT_1830d7b30 = (_DAT_1830d7b30 ^ uVar2) + 0xd24e7669 ^ 0xc3a0f5ce0b02738;
  _DAT_1830d7800 = (_DAT_1830d7800 * 0x42d776a2047d887f ^ _DAT_1830d7b30) + uVar2;
  _DAT_1830d7a30 = _DAT_1830d7800 ^ _DAT_1830d7b30;
  _DAT_1830d7a38 = 0xd24e7669;
  _DAT_1830d7cd8 = func_0x0001855a7740(_DAT_1830d77a0 ^ 0x23007c1b001d55);
  _DAT_1830d7518 = _DAT_1830d7760;
  _DAT_1830d7678 = _DAT_1830d7678 ^ _DAT_1830d7760 ^ 0x6fb98e1150375c9;
  _DAT_1830d77f8 = (_DAT_1830d77f8 * -0x59813e218ee4a95f ^ _DAT_1830d7678) + _DAT_1830d7760;
  _DAT_1830d7998 = _DAT_1830d77f8 ^ _DAT_1830d7678;
  _DAT_1830d7918 = 0;
  uVar2 = ((_DAT_1830d7640 ^ 0x8422239a) + (ulonglong)((uint)_DAT_1830d7640 & 0x8422239a) * 2) *
          -_DAT_1830d7c40;
  uVar2 = (uVar2 | _DAT_1830d75c8) + (uVar2 & _DAT_1830d75c8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7af0 = func_0x0001855a7740((uVar2 | 0x8422239a) + (ulonglong)((uint)uVar2 & 0x8422239a))
  ;
  _DAT_1830d7bc8 = _DAT_1830d7630 ^ _DAT_1830d7af0 ^ 0xbf;
  _DAT_1830d7888 = (_DAT_1830d7888 ^ _DAT_1830d7af0) + 0xbf ^ 0x5bf5bb95fd354cbf;
  _DAT_1830d78a0 = (_DAT_1830d78a0 * -0x199f6ddceb5b5287 ^ _DAT_1830d7888) + _DAT_1830d7af0;
  _DAT_1830d77f0 = _DAT_1830d78a0 ^ _DAT_1830d7888;
  _DAT_1830d7c50 = 0xbf;
  uVar2 = (~_DAT_1830d7720 + 0x100000000) *
          ((_DAT_1830d78e0 ^ 0x5b255cca) + (ulonglong)((uint)_DAT_1830d78e0 & 0x5b255cca) * 2);
  uVar2 = (uVar2 | _DAT_1830d7c48) + (uVar2 & _DAT_1830d7c48);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d78c0 = func_0x0001855a7740((uVar2 | 0xa4daa335) + (ulonglong)((uint)uVar2 & 0xa4daa335))
  ;
  _DAT_1830d7960 = (_DAT_1830d7960 ^ _DAT_1830d7958) + 0x20f88010 ^ 0xecf52ea493317aa0;
  _DAT_1830d75b8 = (_DAT_1830d75b8 * -0x2e0d3a64c990abb3 ^ _DAT_1830d7960) + _DAT_1830d7958;
  _DAT_1830d7b28 = _DAT_1830d75b8 ^ _DAT_1830d7960;
  _DAT_1830d7768 = 0x20f88010;
  uVar2 = (~_DAT_1830d7b50 + 0x20f88011) *
          ((_DAT_1830d7818 ^ 0x5b255cca) + (ulonglong)((uint)_DAT_1830d7818 & 0x5b255cca) * 2);
  uVar2 = (uVar2 | _DAT_1830d7b78) + (uVar2 & _DAT_1830d7b78);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7b28 = func_0x0001855a7740((uVar2 | 0x7bdddcda) + (ulonglong)((uint)uVar2 & 0x7bdddcda))
  ;
  _DAT_1830d7a20 = _DAT_1830d7a20 ^ _DAT_1830d7b28 ^ 0xdf077fef ^ 0x4a981ad95e558a6c;
  _DAT_1830d76c8 =
       (_DAT_1830d76c8 * 0x1e082821837fc2af ^ _DAT_1830d7a20) + (_DAT_1830d7b28 ^ 0xdf077fef);
  _DAT_1830d76e0 = _DAT_1830d76c8 ^ _DAT_1830d7a20;
  _DAT_1830d7bf0 = 0;
  _DAT_1830d77c8 = func_0x0001855a7740(_DAT_1830d7988 ^ 0xffe2ff7c76001dd8);
  _DAT_1830d7ab8 = _DAT_1830d77d8 ^ _DAT_1830d77c8 ^ 0xbf;
  _DAT_1830d7ae8 = (_DAT_1830d7ae8 ^ _DAT_1830d77c8) + 0xbf ^ 0x401554289022614f;
  _DAT_1830d7ad0 = (_DAT_1830d7ad0 * 0x2697442656ef6c19 ^ _DAT_1830d7ae8) + _DAT_1830d77c8;
  _DAT_1830d7558 = _DAT_1830d7ad0 ^ _DAT_1830d7ae8;
  _DAT_1830d7768 = 0xbf;
  _DAT_1830d7a30 = func_0x0001855a7740(_DAT_1830d7748 + 0xffe1007c1b0021ffU ^ 0xe0);
  uVar2 = _DAT_1830d7a30 ^ 0xdb0635cb;
  uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar2;
  uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar2;
  _DAT_1830d7978 = _DAT_1830d7978 ^ uVar2 ^ 0x5bf7116d2258f734;
  _DAT_1830d7b28 = (_DAT_1830d7b28 * 0x5119b9738d584241 ^ _DAT_1830d7978) + uVar2;
  _DAT_1830d7cc0 = _DAT_1830d7b28 ^ _DAT_1830d7978;
  _DAT_1830d7958 = 0;
  switch(0xbf < (int)uVar3) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x558b20f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18558b20f(void)

{
  byte bVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  ulonglong unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  ulonglong unaff_XMM9_Qa;
  ulonglong unaff_XMM9_Qb;
  
  uVar2 = (~_DAT_1830d7ae8 + 0xab5f7abc) *
          ((_DAT_1830d76a8 ^ 0x88f8afb8) + (ulonglong)((uint)_DAT_1830d76a8 & 0x88f8afb8) * 2);
  uVar2 = (uVar2 | _DAT_1830d7b00) + (uVar2 & _DAT_1830d7b00);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d75c0 = func_0x0001855a7740((uVar2 | 0x23a7d503) + (ulonglong)((uint)uVar2 & 0x23a7d503))
  ;
  uVar2 = (_DAT_1830d75c0 ^ 0x89ac73097ea88af) << 5 | (_DAT_1830d75c0 ^ 0x89ac73097ea88af) >> 0x3b;
  _DAT_1830d7bc8 = (_DAT_1830d7bc8 ^ uVar2) + 0xafdffebf ^ 0x69ec88be9359082;
  _DAT_1830d76c8 = (_DAT_1830d76c8 * 0x4d49fe6b6cbbe709 ^ _DAT_1830d7bc8) + uVar2;
  _DAT_1830d7848 = _DAT_1830d76c8 ^ _DAT_1830d7bc8;
  _DAT_1830d7a70 = 0xafdffebf;
  uVar2 = (_DAT_1830d75c8 ^ _DAT_1805267f0) + _DAT_1830d75e8 + 0x35982274;
  uVar3 = (_DAT_1830d75e8 ^ _UNK_1805267f8) + _DAT_1830d75c8 + 0xb96f7bd6;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d75c8 ^ _DAT_1805267f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d75e8 ^ _UNK_1805267f8;
  _DAT_1830d7be8 =
       func_0x0001855a7740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d75c8 + 0xb96f7bd6) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d75e8 + 0x35982274));
  uVar2 = (ulonglong)((uint)_DAT_1830d7be8 & 0xb1ba0151);
  _DAT_1830d79e8 = (_DAT_1830d79e8 ^ uVar2) + 0x8d57a87 ^ 0x92caf14c4781554a;
  _DAT_1830d7828 = (_DAT_1830d7828 * 0x1e007cfa82ec76f3 ^ _DAT_1830d79e8) + uVar2;
  _DAT_1830d7b40 = _DAT_1830d7828 ^ _DAT_1830d79e8;
  _DAT_1830d7898 = 0x8d57a87;
  _DAT_1830d7c68 = func_0x0001855a7740(_DAT_1830d7ae0 + 0xff8effe2d0006aff ^ 0xe7);
  uVar2 = (_DAT_1830d7c68 ^ 0xa6c950f5) << 0x2f | (_DAT_1830d7c68 ^ 0xa6c950f5) >> 0x11;
  _DAT_1830d78f0 = (_DAT_1830d78f0 ^ uVar2) - 0xa6c950f5 ^ 0x355c71ec74929185;
  _DAT_1830d7618 = (_DAT_1830d7618 * -0x25d358b0fb4a6bf7 ^ _DAT_1830d78f0) + uVar2;
  _DAT_1830d7a50 = _DAT_1830d7618 ^ _DAT_1830d78f0;
  _DAT_1830d7cd0 = 0x5936af0b;
  uVar2 = (_DAT_1830d7b38 ^ _DAT_180526800) + _DAT_1830d7728 + 0x84222325;
  uVar3 = (_DAT_1830d7728 ^ _UNK_180526808) + _DAT_1830d7b38 + 0xcff5e13c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7b38 ^ _DAT_180526800;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7728 ^ _UNK_180526808;
  _DAT_1830d7bf0 =
       func_0x0001855a7740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7b38 + 0xcff5e13c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7728 + 0x84222325));
  uVar2 = _DAT_1830d7bf0 - (_DAT_1830d7bf0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1830d7bf0;
  _DAT_1830d7688 = (_DAT_1830d7688 ^ uVar2) - 0xcff5e13c ^ 0x89d32f66edee6c5c;
  _DAT_1830d7848 = (_DAT_1830d7848 * 0x2b1457818be4680b ^ _DAT_1830d7688) + uVar2;
  _DAT_1830d78d0 = _DAT_1830d7848 ^ _DAT_1830d7688;
  _DAT_1830d7908 = 0x300a1ec4;
  uVar2 = (_DAT_1830d7800 ^ _DAT_180526810) + _DAT_1830d77b0 + 0x842223fa;
  uVar3 = (_DAT_1830d77b0 ^ _UNK_180526818) + _DAT_1830d7800 + 0xcff5e13c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7800 ^ _DAT_180526810;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d77b0 ^ _UNK_180526818;
  _DAT_1830d7ca8 =
       func_0x0001855a7740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7800 + 0xcff5e13c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d77b0 + 0x842223fa));
  uVar2 = _DAT_1830d7ca8 * 0x5e8626328bd69ca5;
  _DAT_1830d7700 = _DAT_1830d75c0 ^ uVar2 ^ 0xcff5e21b;
  _DAT_1830d7c68 = (_DAT_1830d7c68 ^ uVar2) + 0xcff5e21b ^ 0x8d750cf0d8d46216;
  _DAT_1830d7988 = (_DAT_1830d7988 * 0x4dcb7beab74d2a79 ^ _DAT_1830d7c68) + uVar2;
  _DAT_1830d7830 = _DAT_1830d7988 ^ _DAT_1830d7c68;
  _DAT_1830d78c0 = 0xcff5e21b;
  _DAT_1830d78c0 = func_0x0001855a7740(_DAT_1830d7710 + 0xffcaffc917ff67ffU ^ 0x32);
  _DAT_1830d76c8 =
       (_DAT_1830d76c8 ^ _DAT_1830d78c0 * -0x54bf56fdb9293049) - 0xcdca681d ^ 0x73112e72b01dfb17;
  _DAT_1830d79c8 =
       (_DAT_1830d79c8 * 0x432a764816a2e5ff ^ _DAT_1830d76c8) + _DAT_1830d78c0 * -0x54bf56fdb9293049
  ;
  _DAT_1830d75d0 = _DAT_1830d79c8 ^ _DAT_1830d76c8;
  _DAT_1830d7888 = 0x323597e3;
  uVar2 = (~_DAT_1830d7cf8 + 0xcdca681e) *
          ((_DAT_1830d7848 ^ 0x842223fa) + (ulonglong)((uint)_DAT_1830d7848 & 0x842223fa) * 2);
  uVar2 = (uVar2 | _DAT_1830d7a70) + (uVar2 & _DAT_1830d7a70);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7818 = func_0x0001855a7740((uVar2 | 0x49e84be7) + (ulonglong)((uint)uVar2 & 0x49e84be7))
  ;
  uVar2 = _DAT_1830d7818 ^ 0xcdca6800;
  _DAT_1830d77a0 = _DAT_1830d7810 ^ uVar2 ^ 0xcdca68fc;
  _DAT_1830d76d0 = (_DAT_1830d76d0 ^ uVar2) + 0xcdca68fc ^ 0xc9ac085c0e797257;
  _DAT_1830d7700 = (_DAT_1830d7700 * 0x47d8604f431230eb ^ _DAT_1830d76d0) + uVar2;
  _DAT_1830d78a8 = _DAT_1830d7700 ^ _DAT_1830d76d0;
  _DAT_1830d7890 = 0xcdca68fc;
  uVar2 = (_DAT_1830d7978 ^ _DAT_180526820) + _DAT_1830d75d8 + 0x49e84bd9;
  uVar3 = (_DAT_1830d75d8 ^ _UNK_180526828) + _DAT_1830d7978 + 0x323597e3;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7978 ^ _DAT_180526820;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d75d8 ^ _UNK_180526828;
  _DAT_1830d7838 =
       func_0x0001855a7740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7978 + 0x323597e3) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d75d8 + 0x49e84bd9));
  uVar2 = (_DAT_1830d7838 ^ 0x323597e3) << 0x19 | _DAT_1830d7838 >> 0x27;
  _DAT_1830d7b88 = _DAT_1830d79f8 ^ uVar2 ^ 0x1000000df;
  _DAT_1830d7930 = (_DAT_1830d7930 ^ uVar2) + 0x1000000df ^ 0xd2a598d82324490f;
  _DAT_1830d78e0 = (_DAT_1830d78e0 * 0x1124cf37e7458f1d ^ _DAT_1830d7930) + uVar2;
  _DAT_1830d75f8 = _DAT_1830d78e0 ^ _DAT_1830d7930;
  _DAT_1830d79b0 = 0xdf;
  uVar2 = (~_DAT_1830d77a8 + 0x8d57a88) *
          ((_DAT_1830d7600 ^ 0x2bfddd9a) + (ulonglong)((uint)_DAT_1830d7600 & 0x2bfddd9a) * 2);
  uVar2 = (uVar2 | _DAT_1830d7a30) + (uVar2 & _DAT_1830d7a30);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7a78 = func_0x0001855a7740((uVar2 | 0x2328a71d) + (ulonglong)((uint)uVar2 & 0x2328a71d))
  ;
  uVar2 = _DAT_1830d7a78 * 0x778a7b3543af3035;
  _DAT_1830d7b98 = _DAT_1830d7b08 ^ uVar2 ^ 0xb8b57946;
  _DAT_1830d7b58 = (_DAT_1830d7b58 ^ uVar2) + 0xb8b57946 ^ 0x155db53307a954e3;
  _DAT_1830d7770 = (_DAT_1830d7770 * -0x6fcf48e904eda199 ^ _DAT_1830d7b58) + uVar2;
  _DAT_1830d7888 = _DAT_1830d7770 ^ _DAT_1830d7b58;
  _DAT_1830d78d8 = 0xb8b57946;
  _DAT_1830d7ca0 = func_0x0001855a7740(_DAT_1830d7578 + 0x5f001ee50027ffU ^ 0xe);
  uVar2 = (_DAT_1830d77a0 ^ 0x8d57800) & 0xfffffffffffff800;
  _DAT_1830d7bd0 = (_DAT_1830d7bd0 ^ uVar2) + 0xa70a8438 ^ 0x318c35619408458c;
  _DAT_1830d7920 = (_DAT_1830d7920 * -0x6c5988a898cdd7f3 ^ _DAT_1830d7bd0) + uVar2;
  _DAT_1830d76c8 = _DAT_1830d7920 ^ _DAT_1830d7bd0;
  _DAT_1830d7b88 = 0xa70a8438;
  uVar2 = (_DAT_1830d7870 ^ unaff_XMM8_Qa) + _DAT_1830d7a98 + 0x2bfddd9a;
  uVar3 = (_DAT_1830d7a98 ^ unaff_XMM8_Qb) + _DAT_1830d7870 + 0x8d57a87;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7870 ^ unaff_XMM8_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7a98 ^ unaff_XMM8_Qb;
  _DAT_1830d7528 =
       func_0x0001855a7740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7870 + 0x8d57a87) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7a98 + 0x2bfddd9a));
  uVar2 = (_DAT_1830d7528 ^ 0x611a9826b700000) & 0xfffffffffffe0000;
  _DAT_1830d7790 = (_DAT_1830d7790 ^ uVar2) + 0x8d57a87 ^ 0xce401cb27f8c1d29;
  _DAT_1830d7b50 = (_DAT_1830d7b50 * -0x2d3558f446cc66e1 ^ _DAT_1830d7790) + uVar2;
  _DAT_1830d7730 = _DAT_1830d7b50 ^ _DAT_1830d7790;
  _DAT_1830d78d0 = 0x8d57a87;
  uVar2 = (~_DAT_1830d7cb8 + 0x11aaf50f) *
          ((_DAT_1830d7678 ^ 0x2328a71d) + (ulonglong)((uint)_DAT_1830d7678 & 0x2328a71d) * 2);
  uVar2 = (uVar2 | _DAT_1830d7cd8) + (uVar2 & _DAT_1830d7cd8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7660 = func_0x0001855a7740((uVar2 | 0x32825213) + (ulonglong)((uint)uVar2 & 0x32825213))
  ;
  uVar2 = _DAT_1830d7660 ^ 0xb7aaf53e;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar2;
  _DAT_1830d78e0 = _DAT_1830d75a0 ^ uVar2 ^ 0xb8b57946;
  _DAT_1830d7858 = (_DAT_1830d7858 ^ uVar2) + 0xb8b57946 ^ 0xdcd9117494a6bdd0;
  _DAT_1830d7548 = (_DAT_1830d7548 * 0x3d3257223e10e2d1 ^ _DAT_1830d7858) + uVar2;
  _DAT_1830d79c0 = _DAT_1830d7548 ^ _DAT_1830d7858;
  _DAT_1830d79b8 = 0xb8b57946;
  uVar2 = (_DAT_1830d7aa0 ^ unaff_XMM9_Qa) + _DAT_1830d7ab0 + 0x3c975a63;
  uVar3 = (_DAT_1830d7ab0 ^ unaff_XMM9_Qb) + _DAT_1830d7aa0 + 0xb8b57946;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7aa0 ^ unaff_XMM9_Qa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830d7ab0 ^ unaff_XMM9_Qb;
  _DAT_1830d7558 =
       func_0x0001855a7740((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830d7aa0 + 0xb8b57946) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7ab0 + 0x3c975a63));
  _DAT_1830d7500 = _DAT_1830d7500 ^ _DAT_1830d7558 ^ 0x528f55722f86187e;
  _DAT_1830d7998 = (_DAT_1830d7998 * -0x2817de31b285da05 ^ _DAT_1830d7500) + _DAT_1830d7558;
  _DAT_1830d7ae0 = _DAT_1830d7998 ^ _DAT_1830d7500;
  _DAT_1830d7688 = 0;
  uVar2 = (_DAT_1830d7870 ^ 0x842223fa) + _DAT_1830d7b58 + 0x842223fa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7870 ^ 0x842223fa;
  uVar3 = ((_DAT_1830d7b58 + _DAT_1830d7870) * 0x2000 | _DAT_1830d7b58 + _DAT_1830d7870 >> 0x33) ^
          _DAT_1830d7b58;
  _DAT_1830d7698 = _DAT_1830d7558;
  _DAT_1830d7c80 =
       func_0x0001855a7740((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1830d7870 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7b58 + 0x842223fa));
  _DAT_1830d7a28 = _DAT_1830d7b00 ^ _DAT_1830d7c80 ^ 0xdf;
  _DAT_1830d7b10 = (_DAT_1830d7b10 ^ _DAT_1830d7c80) + 0xdf ^ 0x290851d13472ef52;
  _DAT_1830d75b8 = (_DAT_1830d75b8 * -0x6005eb653aac6609 ^ _DAT_1830d7b10) + _DAT_1830d7c80;
  _DAT_1830d79e0 = _DAT_1830d75b8 ^ _DAT_1830d7b10;
  _DAT_1830d7a18 = 0xdf;
  uVar2 = (~_DAT_1830d79a8 + 0x100000000) *
          ((_DAT_1830d7a78 ^ 0x2bfddd9a) + (ulonglong)((uint)_DAT_1830d7a78 & 0x2bfddd9a) * 2);
  uVar2 = (uVar2 | _DAT_1830d79f8) + (uVar2 & _DAT_1830d79f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7cb8 = func_0x0001855a7740((uVar2 | 0xd4022265) + (ulonglong)((uint)uVar2 & 0xd4022265))
  ;
  uVar2 = (ulonglong)(~(uint)_DAT_1830d7cb8 & 0xafdffebf);
  _DAT_1830d7c10 = (_DAT_1830d7c10 ^ uVar2) + 0x50200140 ^ 0x9493aee92825777b;
  _DAT_1830d7c38 = (_DAT_1830d7c38 * 0x3e9db74c6a62f225 ^ _DAT_1830d7c10) + uVar2;
  _DAT_1830d7b08 = _DAT_1830d7c38 ^ _DAT_1830d7c10;
  _DAT_1830d7a00 = 0x50200140;
  _DAT_1830d7be0 = func_0x0001855a7740(_DAT_1830d7588 ^ 0xb400795600d498);
  uVar2 = (_DAT_1830d7be0 ^ 0xafdffebf) << 0x34 | (_DAT_1830d7be0 ^ 0xafdffebf) >> 0xc;
  _DAT_1830d7990 = _DAT_1830d7990 ^ uVar2 ^ 0x2d0a494faa7cfd3c;
  _DAT_1830d7570 = (_DAT_1830d7570 * 0x31b73763874d1aed ^ _DAT_1830d7990) + uVar2;
  _DAT_1830d7cc0 = _DAT_1830d7570 ^ _DAT_1830d7990;
  _DAT_1830d7758 = _DAT_1830d7970;
  _DAT_1830d78e0 = 0;
  uVar2 = (_DAT_1830d7c10 ^ 0x842223fa) + _DAT_1830d7558 + 0x842223fa;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7c10 ^ 0x842223fa;
  uVar3 = ((_DAT_1830d7558 + _DAT_1830d7c10) * 0x2000 | _DAT_1830d7558 + _DAT_1830d7c10 >> 0x33) ^
          _DAT_1830d7558;
  _DAT_1830d7a50 =
       func_0x0001855a7740((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1830d7c10 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7558 + 0x842223fa));
  uVar2 = _DAT_1830d7a50 - (_DAT_1830d7a50 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar2 = (uint)bVar1 + (uint)bVar1 ^ _DAT_1830d7a50;
  _DAT_1830d7898 = _DAT_1830d7c08 ^ uVar2 ^ 0xdf;
  _DAT_1830d77b8 = (_DAT_1830d77b8 ^ uVar2) + 0xdf ^ 0x52a85cf63efa11a3;
  _DAT_1830d76f0 = (_DAT_1830d76f0 * 0xc74e380f8792879 ^ _DAT_1830d77b8) + uVar2;
  _DAT_1830d7680 = _DAT_1830d76f0 ^ _DAT_1830d77b8;
  _DAT_1830d75b0 = 0xdf;
  _DAT_1830d77d8 = func_0x0001855a7740(_DAT_1830d7540 + 0x1f007b4a0021ffU ^ 0xd);
  uVar2 = (ulonglong)((uint)_DAT_1830d77d8 & 0xdf);
  _DAT_1830d7530 = _DAT_1830d79f8 ^ uVar2 ^ 0xdf;
  _DAT_1830d7790 = (_DAT_1830d7790 ^ uVar2) + 0xdf ^ 0xc5f51aa5374c6ce0;
  _DAT_1830d7c68 = (_DAT_1830d7c68 * -0x10ce6d09c982b5e7 ^ _DAT_1830d7790) + uVar2;
  _DAT_1830d7880 = _DAT_1830d7c68 ^ _DAT_1830d7790;
  _DAT_1830d7500 = 0xdf;
  switch(0xdf < *(int *)(unaff_RBP + 0xb0)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x558c471 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18558c471(void)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  uint unaff_R14D;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  ulonglong unaff_XMM6_Qa;
  uint uVar9;
  undefined8 unaff_XMM12_Qb;
  ulonglong unaff_XMM15_Qa;
  
  uVar1 = *(undefined8 *)(unaff_RBP + 0x10);
  *(undefined8 *)(unaff_RBP + 0x80) = uVar1;
  uVar5 = (ulonglong)unaff_R14D;
  auVar6._8_8_ = unaff_XMM12_Qb;
  auVar6._0_8_ = uVar5 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_180526ac0,_DAT_1800170c0);
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar4 + _DAT_1830d7c50;
  if (auVar7._4_4_ < 0) {
    uVar3 = _DAT_1830d7878 ^ uVar4;
  }
  _DAT_1830d7b60 = func_0x0001855a7740(SUB161(auVar6 ^ _DAT_180526ac0,5) ^ uVar3);
  uVar9 = unaff_R14D & (uint)unaff_XMM15_Qa;
  uVar8 = unaff_R14D | (uint)unaff_XMM15_Qa;
  uVar3 = (_DAT_1830d7b60 ^ uVar5) * -0xbe4a49e8aab8e25;
  uVar4 = ((((uVar5 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_180526b10 +
            (((uVar5 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_180526b20 +
             (unaff_XMM6_Qa >> 0x20) * (ulonglong)_DAT_180526b10 << 0x20) +
           ((ulonglong)uVar8 * (ulonglong)_DAT_180526b00 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180526af0 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_180526b00 << 0x20 |
           (ulonglong)uVar9 * (ulonglong)_DAT_180526af0) +
           ((ulonglong)unaff_R14D * (ulonglong)_DAT_180526ae0 << 0x20) +
           (ulonglong)unaff_R14D * (ulonglong)_DAT_180526ad0) -
          (((uVar5 ^ unaff_XMM15_Qa) & 0xffffffff) * (ulonglong)_DAT_180526b90 +
           (((uVar5 ^ unaff_XMM15_Qa) & 0xffffffff) * (ulonglong)_DAT_180526ba0 +
            (unaff_XMM15_Qa >> 0x20) * (ulonglong)_DAT_180526b90 << 0x20) +
          ((ulonglong)uVar9 * (ulonglong)_DAT_180526b80 << 0x20 |
          (ulonglong)uVar9 * (ulonglong)_DAT_180526b70) +
          ((ulonglong)unaff_R14D * (ulonglong)_DAT_180526b60 << 0x20) + uVar5 * _DAT_180526b50)) +
          0x73487287d17c5ce7;
  _DAT_1830d7510 = _DAT_1830d7c88 ^ uVar3 ^ uVar4;
  _DAT_1830d7860 = (_DAT_1830d7860 ^ uVar3) + uVar4 ^ 0x89d493890c733fb1;
  _DAT_1830d7918 = (_DAT_1830d7918 * -0x4defa9715a5b781f ^ _DAT_1830d7860) + uVar3;
  _DAT_1830d7540 = _DAT_1830d7918 ^ _DAT_1830d7860;
  _DAT_1830d7560 = uVar4 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar4;
  iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x70) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x70),uVar1);
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5590370 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185590370(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_R15;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong unaff_XMM6_Qa;
  uint unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM14_Da;
  ulonglong unaff_XMM15_Qa;
  
  *(undefined8 *)(unaff_RBP + 0x80) = *(undefined8 *)(unaff_RBP + 0x20);
  uVar1 = *(uint *)(unaff_RBP + 0x40);
  *(uint *)(unaff_RBP + 0x88) = uVar1;
  uVar7 = _DAT_1830d7928;
  uVar5 = _DAT_1830d7910;
  uVar2 = _DAT_1830d7510;
  uVar3 = (ulonglong)uVar1;
  uVar6 = (uint)_DAT_1830d7510;
  *(bool *)(unaff_RBP + 0x40) = *(longlong *)(unaff_RBP + 0x38) == 0;
  uVar2 = (~uVar5 + 2) *
          ((uVar2 ^ uVar3 ^ 0x84222325) + (ulonglong)(uVar6 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar2 = (uVar2 | uVar7) + (uVar2 & uVar7);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d78e0 =
       func_0x0001855a7740((uVar3 ^ 0x84222324 | uVar2) +
                           (ulonglong)((uint)(uVar3 ^ 0x84222324) & (uint)uVar2));
  uVar2 = ~(ulonglong)((uint)_DAT_1830d78e0 ^ (uVar1 | 1)) & uVar3;
  uVar8 = uVar1 & (uint)unaff_XMM15_Qa;
  uVar6 = uVar1 | (uint)unaff_XMM15_Qa;
  _DAT_1830d7cb8 =
       ((((uVar3 ^ unaff_XMM15_Qa) & 0xffffffff) * (ulonglong)unaff_XMM14_Da +
         (((uVar3 ^ unaff_XMM15_Qa) & 0xffffffff) * (ulonglong)_DAT_180526780 +
          (unaff_XMM15_Qa >> 0x20) * (ulonglong)unaff_XMM14_Da << 0x20) +
        ((ulonglong)uVar6 * (ulonglong)_DAT_180526760 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_180526750 +
        ((ulonglong)uVar8 * (ulonglong)_DAT_180526740 << 0x20 |
        (ulonglong)uVar8 * (ulonglong)_DAT_180526730) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_180526720 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_180526710) -
       (((uVar3 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)unaff_XMM11_Da +
        ((unaff_XMM6_Qa >> 0x20) * (ulonglong)unaff_XMM11_Da +
         ((uVar3 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)unaff_XMM10_Da << 0x20) +
       (ulonglong)uVar1 * (ulonglong)unaff_XMM11_Da +
       ((ulonglong)uVar1 * (ulonglong)unaff_XMM10_Da << 0x20))) + 0x28709cb1dbc5f989;
  _DAT_1830d7800 = _DAT_1830d7bd8 ^ uVar2 ^ _DAT_1830d7cb8;
  _DAT_1830d77c0 = (_DAT_1830d77c0 ^ uVar2) + _DAT_1830d7cb8 ^ 0xd3b3080ab4301475;
  _DAT_1830d7b00 = (_DAT_1830d7b00 * 0x11f59218e251f753 ^ _DAT_1830d77c0) + uVar2;
  _DAT_1830d78c0 = _DAT_1830d7b00 ^ _DAT_1830d77c0;
  _DAT_1830d7cb8 = _DAT_1830d7cb8 & 0xffffffff;
  _DAT_1830d7ac8 = func_0x0001855a7740(_DAT_1830d7a50 ^ 0x75ff719cff496a);
  uVar2 = _DAT_1830d7ac8 & 0x7fffffffffffffff ^ 0xe9bfdbe4;
  _DAT_1830d76e0 = (_DAT_1830d76e0 ^ uVar2) + 0xfbffffe6 ^ 0x7f1c42d868494f4a;
  _DAT_1830d7cf0 = (_DAT_1830d7cf0 * -0x7b363d9910eea53 ^ _DAT_1830d76e0) + uVar2;
  _DAT_1830d7658 = _DAT_1830d7cf0 ^ _DAT_1830d76e0;
  _DAT_1830d7ab0 = 0xfbffffe6;
  uVar2 = (~_DAT_1830d77b8 + 0x8a088781) *
          ((_DAT_1830d7700 ^ 0x27c5e488) + (ulonglong)((uint)_DAT_1830d7700 & 0x27c5e488) * 2);
  uVar2 = (uVar2 | _DAT_1830d7bf8) + (uVar2 & _DAT_1830d7bf8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7ad8 = func_0x0001855a7740((uVar2 | 0xadcd6308) + (ulonglong)((uint)uVar2 & 0xadcd6308))
  ;
  uVar2 = (_DAT_1830d7ad8 ^ 0x586067a2ad981180) << 0x38 | (_DAT_1830d7ad8 ^ 0x586067a2ad981180) >> 8
  ;
  _DAT_1830d7878 = (_DAT_1830d7878 ^ uVar2) + 0x29ef402d ^ 0xb8365cac59d190b9;
  _DAT_1830d7998 = (_DAT_1830d7998 * 0x7f513c74184834ef ^ _DAT_1830d7878) + uVar2;
  _DAT_1830d79c8 = _DAT_1830d7998 ^ _DAT_1830d7878;
  _DAT_1830d7938 = 0x29ef402d;
  uVar2 = (~_DAT_1830d7cb8 + 0xe110bf41) *
          ((_DAT_1830d76f8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830d76f8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_1830d7828) + (uVar2 & _DAT_1830d7828);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7800 = func_0x0001855a7740((uVar2 | 0x65329c65) + (ulonglong)((uint)uVar2 & 0x65329c65))
  ;
  uVar2 = (_DAT_1830d7800 ^ 0xe110bf00) & 0x7fffffffffffff00;
  _DAT_1830d7c20 = (_DAT_1830d7c20 ^ uVar2) - 0xe110bf40 ^ 0x8c548c7d02ff0727;
  _DAT_1830d7938 = (_DAT_1830d7938 * -0xeb161f259cfdb31 ^ _DAT_1830d7c20) + uVar2;
  _DAT_1830d7848 = _DAT_1830d7938 ^ _DAT_1830d7c20;
  _DAT_1830d7b78 = 0x1eef40c0;
  _DAT_1830d76e0 = func_0x0001855a7740(_DAT_1830d7730 + 0xffa1006386000dffU ^ 0xdc);
  uVar2 = _DAT_1830d76e0 ^ 0xe110ffff;
  _DAT_1830d7ab0 = _DAT_1830d7948 ^ uVar2 ^ 0xe111bf3f;
  _DAT_1830d75d8 = (_DAT_1830d75d8 ^ uVar2) + 0xe111bf3f ^ 0x3c78bab3c2f97f1b;
  _DAT_1830d7b58 = (_DAT_1830d7b58 * -0x39e4c85ebca48fd ^ _DAT_1830d75d8) + uVar2;
  _DAT_1830d7b78 = _DAT_1830d7b58 ^ _DAT_1830d75d8;
  _DAT_1830d7540 = 0xe111bf3f;
  uVar2 = (_DAT_1830d78a8 ^ _DAT_1805267d0) + _DAT_1830d7850 + 0x65339c1a;
  uVar5 = (_DAT_1830d7850 ^ _UNK_1805267d8) + _DAT_1830d78a8 + 0x1eef40c0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d78a8 ^ _DAT_1805267d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830d7850 ^ _UNK_1805267d8;
  _DAT_1830d7890 =
       func_0x0001855a7740((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830d78a8 + 0x1eef40c0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7850 + 0x65339c1a));
  uVar2 = _DAT_1830d7890 & 0x3fffffffffffff;
  _DAT_1830d7ad0 = _DAT_1830d75f8 ^ uVar2 ^ 0x10000ffff;
  _DAT_1830d7728 = (_DAT_1830d7728 ^ uVar2) + 0x10000ffff ^ 0x71160f998ff1393f;
  _DAT_1830d76e0 = (_DAT_1830d76e0 * -0x2a670e0279db861b ^ _DAT_1830d7728) + uVar2;
  _DAT_1830d79b0 = _DAT_1830d76e0 ^ _DAT_1830d7728;
  _DAT_1830d7510 = 0xffff;
  uVar2 = (_DAT_1830d7930 ^ _DAT_1805267e0) + _DAT_1830d7c70 + 0x84222325;
  uVar5 = (_DAT_1830d7c70 ^ _UNK_1805267e8) + _DAT_1830d7930 + 0xea9920d7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d7930 ^ _DAT_1805267e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1830d7c70 ^ _UNK_1805267e8;
  _DAT_1830d7ae8 =
       func_0x0001855a7740((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1830d7930 + 0xea9920d7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7c70 + 0x84222325));
  _DAT_1830d78c8 =
       (_DAT_1830d78c8 ^ _DAT_1830d7ae8 & 0x7fffffffffffffff) - 0xea9920d7 ^ 0x6394a79a86b60933;
  _DAT_1830d76f0 =
       (_DAT_1830d76f0 * -0x97bf662166c4b7b ^ _DAT_1830d78c8) +
       (_DAT_1830d7ae8 & 0x7fffffffffffffff);
  _DAT_1830d7740 = _DAT_1830d76f0 ^ _DAT_1830d78c8;
  _DAT_1830d7570 = 0x1566df29;
  uVar2 = (~_DAT_1830d76f8 + 0x4a980ac5) *
          ((_DAT_1830d7b10 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1830d7b10 & 0x8422dcda) * 2);
  uVar2 = (uVar2 | _DAT_1830d7690) + (uVar2 & _DAT_1830d7690);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7648 = func_0x0001855a7740((uVar2 | 0xcebad61e) + (ulonglong)((uint)uVar2 & 0xcebad61e))
  ;
  uVar2 = _DAT_1830d7648 - (_DAT_1830d7648 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38) << 5 ^ _DAT_1830d7648) &
          0x7fffffffffffffff;
  _DAT_1830d7c58 = _DAT_1830d7958 ^ uVar2 ^ 0x4a990ac3;
  _DAT_1830d76e0 = (_DAT_1830d76e0 ^ uVar2) + 0x4a990ac3 ^ 0xe9c1bbe9ad922a03;
  _DAT_1830d7a20 = (_DAT_1830d7a20 * 0x15658bf151b187ef ^ _DAT_1830d76e0) + uVar2;
  _DAT_1830d7bd8 = _DAT_1830d7a20 ^ _DAT_1830d76e0;
  _DAT_1830d7a58 = 0x4a990ac3;
  _DAT_1830d75d0 = func_0x0001855a7740(_DAT_1830d7a90 ^ 0x6c00569a0031df);
  uVar2 = _DAT_1830d75d0 - (_DAT_1830d75d0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * unaff_R15 >> 0x38) << 2 ^ _DAT_1830d75d0;
  _DAT_1830d7980 = (_DAT_1830d7980 ^ uVar2) + 0xd210bfcb ^ 0xc946b92c80d8294c;
  _DAT_1830d7a40 = (_DAT_1830d7a40 * -0x7f5f76e8f8e62e65 ^ _DAT_1830d7980) + uVar2;
  _DAT_1830d7738 = _DAT_1830d7a40 ^ _DAT_1830d7980;
  _DAT_1830d7b68 = 0xd210bfcb;
  _DAT_1830d77c8 = func_0x0001855a7740(_DAT_1830d7b28 + 0xfff3fffc66005bffU ^ 0xc);
  _DAT_1830d7b60 = _DAT_1830d75f0 ^ _DAT_1830d77c8 ^ 0x125ef4013;
  _DAT_1830d7b48 = (_DAT_1830d7b48 ^ _DAT_1830d77c8) + 0x125ef4013 ^ 0x25bb632989484cdd;
  _DAT_1830d7810 = (_DAT_1830d7810 * 0x79cedd40b3e50c45 ^ _DAT_1830d7b48) + _DAT_1830d77c8;
  _DAT_1830d7cc0 = _DAT_1830d7810 ^ _DAT_1830d7b48;
  _DAT_1830d7898 = 0x25ef4013;
  uVar2 = (~_DAT_1830d7ac8 + 0x25ef4014) *
          ((_DAT_1830d7570 ^ 0xa1cd6336) + (ulonglong)((uint)_DAT_1830d7570 & 0xa1cd6336) * 2);
  uVar2 = (uVar2 | _DAT_1830d7a70) + (uVar2 & _DAT_1830d7a70);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d77c8 = func_0x0001855a7740((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325))
  ;
  _DAT_1830d7ba8 = (_DAT_1830d77c8 ^ 0x59f081e146cc17a) & 0x7fffffffffffffff;
  _DAT_1830d7b90 = _DAT_1830d7b90 ^ _DAT_1830d7ba8 ^ 0xc5d814b0245a8aa5;
  _DAT_1830d79e0 = (_DAT_1830d79e0 * -0xbb26ab545c42785 ^ _DAT_1830d7b90) + _DAT_1830d7ba8;
  _DAT_1830d7738 = _DAT_1830d79e0 ^ _DAT_1830d7b90;
  _DAT_1830d7658 = 0;
  uVar2 = ((_DAT_1830d76e0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1830d76e0 & 0x8422dcda) * 2) *
          -_DAT_1830d7850;
  uVar2 = (uVar2 | _DAT_1830d7900) + (uVar2 & _DAT_1830d7900);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7988 = func_0x0001855a7740((uVar2 | 0x8422dcda) + (ulonglong)((uint)uVar2 & 0x8422dcda))
  ;
  uVar2 = (ulonglong)(~(uint)_DAT_1830d7988 & 0xffff);
  _DAT_1830d7b80 = _DAT_1830d7518 ^ uVar2 ^ 0xffff;
  _DAT_1830d7c98 = (_DAT_1830d7c98 ^ uVar2) + 0xffff ^ 0xffed650c669e0958;
  _DAT_1830d7a78 = (_DAT_1830d7a78 * 0x2bb520a6e87c1347 ^ _DAT_1830d7c98) + uVar2;
  _DAT_1830d7c58 = _DAT_1830d7a78 ^ _DAT_1830d7c98;
  _DAT_1830d7760 = 0xffff;
  uVar2 = (~_DAT_1830d7a60 + 0x100000000) *
          ((_DAT_1830d7b58 ^ 0x7fdddcc3) + (ulonglong)((uint)_DAT_1830d7b58 & 0x7fdddcc3) * 2);
  uVar2 = (uVar2 | _DAT_1830d7660) + (uVar2 & _DAT_1830d7660);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7520 = func_0x0001855a7740((uVar2 | 0x8022233c) + (ulonglong)((uint)uVar2 & 0x8022233c))
  ;
  _DAT_1830d78a8 = (_DAT_1830d78a8 ^ _DAT_1830d7520 ^ 0xfbffffe6) + 0x4000019 ^ 0x28d88ec793c5a3eb;
  _DAT_1830d7840 =
       (_DAT_1830d7840 * 0x35635e15797a0cb7 ^ _DAT_1830d78a8) + (_DAT_1830d7520 ^ 0xfbffffe6);
  _DAT_1830d7960 = _DAT_1830d7840 ^ _DAT_1830d78a8;
  _DAT_1830d7898 = 0x4000019;
  _DAT_1830d7c28 = func_0x0001855a7740(_DAT_1830d7a08 + 0x5c007b35ffddffU ^ 0xe2);
  _DAT_1830d7bc0 = _DAT_1830d7c60 ^ _DAT_1830d7c28 ^ 0xffff;
  _DAT_1830d7510 = (_DAT_1830d7510 ^ _DAT_1830d7c28) + 0xffff ^ 0xf66993261074b7d4;
  _DAT_1830d7908 = (_DAT_1830d7908 * 0x507d1d628cae4467 ^ _DAT_1830d7510) + _DAT_1830d7c28;
  _DAT_1830d76e8 = _DAT_1830d7908 ^ _DAT_1830d7510;
  _DAT_1830d7ab8 = 0xffff;
  uVar2 = (_DAT_1830d75b8 ^ 0x8422dcda) + _DAT_1830d7b80 + 0x8422dcda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830d75b8 ^ 0x8422dcda;
  uVar5 = ((_DAT_1830d7b80 + _DAT_1830d75b8) * 0x2000 | _DAT_1830d7b80 + _DAT_1830d75b8 >> 0x33) ^
          _DAT_1830d7b80;
  _DAT_1830d7580 =
       func_0x0001855a7740((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_1830d75b8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7b80 + 0x8422dcda));
  _DAT_1830d7a10 = _DAT_1830d7588 ^ _DAT_1830d7580 ^ 0xffff;
  _DAT_1830d7a88 = (_DAT_1830d7a88 ^ _DAT_1830d7580) + 0xffff ^ 0x8c55fffc78d60d8f;
  _DAT_1830d7be0 = (_DAT_1830d7be0 * -0x696f6eda277c6c7d ^ _DAT_1830d7a88) + _DAT_1830d7580;
  _DAT_1830d7518 = _DAT_1830d7be0 ^ _DAT_1830d7a88;
  _DAT_1830d7b18 = 0xffff;
  uVar1 = *(uint *)(unaff_RBP + 0xb0);
  uVar2 = (ulonglong)uVar1 ^ 0x84222325;
  uVar5 = uVar2 ^ _DAT_1830d7c98;
  lVar4 = uVar2 + _DAT_1830d79b0;
  uVar2 = uVar5 + lVar4;
  uVar7 = (_DAT_1830d79b0 ^ 0xffff) + _DAT_1830d7c98 + 0xffff;
  uVar5 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uVar5;
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830d79b0 ^ 0xffff;
  _DAT_1830d7778 =
       func_0x0001855a7740((uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830d7c98 + 0xffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  _DAT_1830d7b40 = (ulonglong)uVar1 & 0xffff;
  _DAT_1830d7c30 = (_DAT_1830d7c30 ^ _DAT_1830d7778) + _DAT_1830d7b40 ^ 0xc46e4aa473dd7762;
  _DAT_1830d7c00 = (_DAT_1830d7c00 * 0x20a0a96cf156287 ^ _DAT_1830d7c30) + _DAT_1830d7778;
  _DAT_1830d77f0 = _DAT_1830d7c00 ^ _DAT_1830d7c30;
  *(int *)(unaff_RBP + 0x90) = (int)_DAT_1830d7b40;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x40)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5593dde -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185593dde(void)

{
  uint in_EAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_XMM6_Da;
  uint uVar3;
  uint uVar4;
  uint unaff_XMM15_Da;
  
  uVar1 = in_EAX ^ unaff_RBX;
  uVar2 = (~_DAT_1830d7800 + 2) *
          ((_DAT_1830d7838 ^ uVar1) + (ulonglong)((uint)_DAT_1830d7838 & (uint)uVar1) * 2);
  uVar2 = (uVar2 | _DAT_1830d76f0) + (uVar2 & _DAT_1830d76f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830d7ba0 =
       func_0x0001855a7740((uVar1 ^ 1 | uVar2) + (ulonglong)((uint)(uVar1 ^ 1) & (uint)uVar2));
  uVar1 = _DAT_1830d7ba0 ^ in_EAX;
  uVar3 = in_EAX & unaff_XMM15_Da;
  uVar4 = in_EAX ^ unaff_XMM15_Da;
  uVar2 = ((((ulonglong)(in_EAX ^ unaff_XMM6_Da) * (ulonglong)_DAT_180526e10 + _DAT_180526e20 <<
            0x20) + (ulonglong)(in_EAX ^ unaff_XMM6_Da) * (ulonglong)_DAT_180526e00 +
            ((ulonglong)uVar4 * (ulonglong)_DAT_180526df0 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_180526de0 +
           ((ulonglong)uVar3 * (ulonglong)_DAT_180526dd0 << 0x20 |
           (ulonglong)uVar3 * (ulonglong)_DAT_180526dc0) +
           ((ulonglong)in_EAX * (ulonglong)_DAT_180526db0 << 0x20) +
           (ulonglong)in_EAX * (ulonglong)_DAT_180526da0) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_180526ec0 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_180526eb0 +
           ((ulonglong)(in_EAX | unaff_XMM15_Da) * (ulonglong)_DAT_180526ea0 << 0x20) +
           (ulonglong)(in_EAX | unaff_XMM15_Da) * (ulonglong)_DAT_180526e90 +
          ((ulonglong)uVar3 * (ulonglong)_DAT_180526e80 << 0x20 |
          (ulonglong)uVar3 * (ulonglong)_DAT_180526e70) +
          ((ulonglong)in_EAX * (ulonglong)_DAT_180526e60 << 0x20) +
          (ulonglong)in_EAX * (ulonglong)_DAT_180526e50)) + 0x706ad9cab5d829f6;
  _DAT_1830d7740 = _DAT_1830d7508 ^ uVar1 ^ uVar2;
  _DAT_1830d7780 = (_DAT_1830d7780 ^ uVar1) + uVar2 ^ 0x6c07324921cb8189;
  _DAT_1830d7ce8 = (_DAT_1830d7ce8 * -0x1a6a02513975d495 ^ _DAT_1830d7780) + uVar1;
  _DAT_1830d78f8 = _DAT_1830d7ce8 ^ _DAT_1830d7780;
  _DAT_1830d76c8 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x80) = (int)uVar2;
  *(int *)(unaff_RBP + 0x88) = *(int *)(unaff_RBP + -4);
  switch((int)uVar2 < *(int *)(unaff_RBP + -4)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x55941d5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855941d5(void)

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


// ----- block @ rva 0x5594642 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185594642(longlong param_1)

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


// ----- block @ rva 0x55a9d41 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855a9d41(void)

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


// ----- block @ rva 0x55a9eea -----

void FUN_1855a9eea(void)

{
  return;
}


// ----- block @ rva 0x55a9f81 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855a9f81(void)

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


// ----- block @ rva 0x55abb8c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855abb8c(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x55abc53 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855abc53(void)

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


// ----- block @ rva 0x55abd7b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855abd7b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->SetObjectArrayElement /*0x570*/))();
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


// ----- block @ rva 0x55abef1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855abef1(void)

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


// ----- block @ rva 0x55ac41b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855ac41b(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x55ac7d3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855ac7d3(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x55ae18f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855ae18f(void)

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


// ----- block @ rva 0x55ae333 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855ae333(void)

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


// ----- block @ rva 0x55ae519 -----

void FUN_1855ae519(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x55ae75f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855ae75f(void)

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


// ----- block @ rva 0x55ae7b3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855ae7b3(void)

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


// ----- block @ rva 0x55aea7b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855aea7b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18052d3f8)();
  return;
}


// ----- block @ rva 0x55aeadd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855aeadd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectArrayElement /*0x568*/))();
  FUN_190dd72e0();
  (*_DAT_18052d448)();
  return;
}


// ----- block @ rva 0x55aeb3c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855aeb3c(void)

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


// ----- block @ rva 0x55aec56 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855aec56(void)

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


// ----- block @ rva 0x55aed49 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855aed49(void)

{
  FUN_190de3220();
  (*_DAT_18052d2a8)();
  return;
}


// ----- block @ rva 0x55aefb2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855aefb2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000068 = 0;
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


// ----- block @ rva 0x55af0d4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855af0d4(void)

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


// ----- block @ rva 0x55af272 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855af272(void)

{
  FUN_190dd72e0();
  (*_DAT_18052d1b8)();
  return;
}


// ----- block @ rva 0x55af2d8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855af2d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_18052d378)();
  return;
}


// ----- block @ rva 0x55af4e3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855af4e3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18052d158)();
  return;
}


// ----- block @ rva 0x55af518 -----

void FUN_1855af518(void)

{
  return;
}


// ----- block @ rva 0x55af526 -----

void FUN_1855af526(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x55af690 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855af690(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_18052d8b8)();
  return;
}


// ----- block @ rva 0x55afad4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855afad4(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_18052dc78)();
  return;
}


// ----- block @ rva 0x55b0032 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b0032(void)

{
  (*_DAT_18052e338)();
  return;
}


// ----- block @ rva 0x55b0095 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b0095(void)

{
  (*_DAT_18052e2e8)();
  return;
}


// ----- block @ rva 0x55b0103 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b0103(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18052da48)();
  return;
}


// ----- block @ rva 0x55b14c6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855b14c6(void)

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


// ----- block @ rva 0x55b1615 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855b1615(void)

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


// ----- block @ rva 0x55b18ea -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855b18ea(void)

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


// ----- block @ rva 0x55b1957 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b1957(void)

{
  FUN_190ddfc90();
  (*_DAT_18052dff8)();
  return;
}


// ----- block @ rva 0x55b1dae -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b1dae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_18052d7b8)();
  return;
}


// ----- block @ rva 0x55b1f1a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b1f1a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_18052ddd8)();
  return;
}


// ----- block @ rva 0x55b1f75 -----

void FUN_1855b1f75(void)

{
  return;
}


// ----- block @ rva 0x55b1f89 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b1f89(void)

{
  (*_DAT_18052e338)();
  return;
}


// ----- block @ rva 0x55b21bf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b21bf(void)

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


// ----- block @ rva 0x55b2218 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855b2218(void)

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


// ----- block @ rva 0x55b26be -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855b26be(void)

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


// ----- block @ rva 0x55b4ea2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1855b4ea2(void)

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


// ----- block @ rva 0x55b66b3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b66b3(void)

{
  ulonglong uVar1;
  uint unaff_EBP;
  longlong *unaff_RSI;
  ulonglong uVar2;
  uint unaff_R15D;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  undefined1 unaff_XMM9 [16];
  int in_stack_00000038;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  auVar3._4_4_ = 0;
  auVar3._0_4_ = unaff_R15D ^ 0x84222325;
  auVar3._8_4_ = unaff_EBP;
  auVar3._12_4_ = 0;
  auVar4 = pshufb(auVar3 ^ _DAT_18052f530,unaff_XMM9);
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar2 + _DAT_1830d8ce8;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_1830d87a0 ^ uVar2;
  }
  _DAT_1830d89d8 = func_0x0001855b7770(SUB161(auVar3 ^ _DAT_18052f530,5) ^ uVar1);
  uVar1 = ~((_DAT_1830d89d8 & 0xffffffff) * (ulonglong)_DAT_18052f540) & (ulonglong)unaff_R15D;
  uVar2 = (ulonglong)unaff_R15D * (ulonglong)unaff_EBP;
  lVar5 = (uVar2 & 0xffffffff) * (ulonglong)_DAT_18052f5d0 +
          ((uVar2 & 0xffffffff) * (ulonglong)_DAT_18052f5e0 +
           (uVar2 >> 0x20) * (ulonglong)_DAT_18052f5d0 << 0x20);
  uVar2 = ((((ulonglong)(unaff_R15D ^ unaff_EBP) * (ulonglong)_DAT_18052f5c0 << 0x20) +
            (ulonglong)(unaff_R15D ^ unaff_EBP) * (ulonglong)_DAT_18052f5b0 +
            ((ulonglong)(unaff_R15D | unaff_EBP) * (ulonglong)_DAT_18052f5a0 << 0x20) +
            (ulonglong)(unaff_R15D | unaff_EBP) * (ulonglong)_DAT_18052f590 +
            ((ulonglong)(unaff_R15D & unaff_EBP) * (ulonglong)_DAT_18052f580 << 0x20) +
            (ulonglong)(unaff_R15D & unaff_EBP) * (ulonglong)_DAT_18052f570 +
            ((ulonglong)unaff_EBP * (ulonglong)_DAT_18052f560 << 0x20) +
            (ulonglong)unaff_EBP * (ulonglong)_DAT_18052f550 +
            ((ulonglong)unaff_R15D * (ulonglong)_DAT_18052f560 << 0x20) +
            (ulonglong)unaff_R15D * (ulonglong)_DAT_18052f550 + lVar5) -
          (((ulonglong)(unaff_EBP ^ unaff_XMM7_Da) * (ulonglong)unaff_XMM8_Da + _DAT_18052f640 <<
           0x20) + (ulonglong)(unaff_EBP ^ unaff_XMM7_Da) * (ulonglong)_DAT_18052f610 +
           ((ulonglong)(unaff_R15D ^ unaff_XMM7_Da) * (ulonglong)_DAT_18052f600 + _DAT_18052f630 <<
           0x20) + (ulonglong)(unaff_R15D ^ unaff_XMM7_Da) * (ulonglong)_DAT_18052f5f0 +
           ((ulonglong)(unaff_EBP * unaff_XMM8_Da) << 0x20) +
           (ulonglong)unaff_EBP * (ulonglong)_DAT_18052f610 +
           ((ulonglong)unaff_R15D * (ulonglong)_DAT_18052f600 << 0x20) +
           (ulonglong)unaff_R15D * (ulonglong)_DAT_18052f5f0 + lVar5)) + 0x5ce5d1b356485b73;
  _DAT_1830d89a0 = _DAT_1830d8c98 ^ uVar1 ^ uVar2;
  _DAT_1830d8a18 = (_DAT_1830d8a18 ^ uVar1) + uVar2 ^ 0xa70df738b191b093;
  _DAT_1830d88c0 = (_DAT_1830d88c0 * -0x415f79bc37bacd29 ^ _DAT_1830d8a18) + uVar1;
  _DAT_1830d8950 = _DAT_1830d88c0 ^ _DAT_1830d8a18;
  _DAT_1830d87a8 = uVar2 & 0xffffffff;
  switch((int)uVar2 < in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x55b6b14 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b6b14(void)

{
  char cVar1;
  uint in_EAX;
  ulonglong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong unaff_XMM7_Qa;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = (ulonglong)in_EAX;
  uVar2 = unaff_RBP ^ 0x84222325;
  uVar3 = ((_DAT_1830d8c50 ^ uVar2) + (ulonglong)((uint)_DAT_1830d8c50 & (uint)uVar2) * 2) *
          (uVar4 - _DAT_1830d8ac8);
  uVar3 = (uVar3 | _DAT_1830d8840) + (uVar3 & _DAT_1830d8840);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830d8950 =
       func_0x0001855b7770((uVar2 ^ uVar4 | uVar3) +
                           (ulonglong)((uint)(uVar2 ^ uVar4) & (uint)uVar3));
  uVar3 = _DAT_1830d8950 & 0xffffffffffff8000 ^ uVar4;
  uVar8 = (uint)unaff_RBP & in_EAX;
  uVar9 = (uint)unaff_RBP | in_EAX;
  uVar6 = unaff_RBP ^ unaff_XMM7_Qa;
  uVar2 = (unaff_RBP & 0xffffffff) * (ulonglong)in_EAX;
  lVar7 = (uVar2 & 0xffffffff) * (ulonglong)_DAT_18052f860 +
          ((uVar2 & 0xffffffff) * (ulonglong)_DAT_18052f870 +
           (uVar2 >> 0x20) * (ulonglong)_DAT_18052f860 << 0x20);
  lVar5 = ((ulonglong)uVar9 * (ulonglong)_DAT_18052f8d0 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_18052f8c0;
  _DAT_1830d8c48 =
       (((uVar6 & 0xffffffff) * (ulonglong)_DAT_18052f820 +
         ((uVar6 & 0xffffffff) * (ulonglong)_DAT_18052f850 +
          (uVar6 >> 0x20) * (ulonglong)_DAT_18052f820 << 0x20) +
         ((ulonglong)uVar9 * (ulonglong)_DAT_18052f840 << 0x20) +
         (ulonglong)uVar9 * (ulonglong)_DAT_18052f830 +
         ((ulonglong)uVar8 * (ulonglong)_DAT_18052f840 << 0x20) +
         (ulonglong)uVar8 * (ulonglong)_DAT_18052f830 +
         ((unaff_RBP & 0xffffffff) * (ulonglong)_DAT_18052f7f0 << 0x20) +
         (unaff_RBP & 0xffffffff) * (ulonglong)_DAT_18052f7e0 +
         ((ulonglong)in_EAX * (ulonglong)_DAT_18052f810 << 0x20) +
         (ulonglong)in_EAX * (ulonglong)_DAT_18052f800 + lVar7) -
       (((unaff_RBP ^ uVar4) & 0xffffffff) * (_DAT_18052f8e0 & 0xffffffff) +
        (((unaff_RBP ^ uVar4) & 0xffffffff) * (ulonglong)_DAT_18052f8f0 +
         (unaff_RBP >> 0x20) * (_DAT_18052f8e0 & 0xffffffff) << 0x20) + lVar5 +
        ((ulonglong)uVar8 * (ulonglong)_DAT_18052f8b0 << 0x20) +
        (ulonglong)uVar8 * (ulonglong)_DAT_18052f8a0 +
        ((ulonglong)(in_EAX * _DAT_18052f890) << 0x20) +
        (ulonglong)in_EAX * (ulonglong)_DAT_18052f880 +
        ((unaff_RBP & 0xffffffff) * (ulonglong)_DAT_18052f890 << 0x20) +
        (unaff_RBP & 0xffffffff) * (ulonglong)_DAT_18052f880 + lVar7)) + 0x390069612f7267be;
  _DAT_1830d8c60 = _DAT_1830d8978 ^ uVar3 ^ _DAT_1830d8c48;
  _DAT_1830d89a8 = (_DAT_1830d89a8 ^ uVar3) + _DAT_1830d8c48 ^ 0x11abfe816f7cb7f3;
  _DAT_1830d8c08 = (_DAT_1830d8c08 * -0x2ed2e87d42edd2fb ^ _DAT_1830d89a8) + uVar3;
  _DAT_1830d8a30 = _DAT_1830d8c08 ^ _DAT_1830d89a8;
  _DAT_1830d8c48 = _DAT_1830d8c48 & 0xffffffff;
  FUN_190dd72e0(lVar5,*_DAT_18301ee50 + 0x2e9,0x12);
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


// ----- block @ rva 0x55b74ca -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855b74ca(void)

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


// ----- block @ rva 0x55b754e -----

void thunk_FUN_1855b2341(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x55b7591 -----

void FUN_1855b7591(void)

{
  return;
}


// ----- block @ rva 0x55b75fd -----

void FUN_1855b75fd(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

