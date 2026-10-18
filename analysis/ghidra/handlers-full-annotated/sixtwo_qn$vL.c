// ===== Lsixtwo/qn$vL; _3c25e1aef704a17614af26139d780545 ()V (handler @ image 1855b20e0, runtime 6fffed1c20e0) =====

void FUN_1855b20e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2123e,0x51c);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2123e,0x51c);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2123e,0x51c);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018556ff30 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180521690 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



