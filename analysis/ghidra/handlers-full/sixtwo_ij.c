// ===== Lsixtwo/ij; _f2b524f8e76a56962fb3b97ccefaac45 ()V (handler @ image 1895e72d0, runtime 6ffff11f72d0) =====

void FUN_1895e72d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001895e73ac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813866a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ij; bit ()Ljava/lang/String; (handler @ image 1895fce00, runtime 6ffff120ce00) =====

void FUN_1895fce00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001895fce20 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18138c5e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ij; biu ()Z (handler @ image 1895d6020, runtime 6ffff11e6020) =====

undefined1 FUN_1895d6020(void)

{
  return 1;
}



// ===== Lsixtwo/ij; bkd ()Ljava/lang/String; (handler @ image 1895fd000, runtime 6ffff120d000) =====

void FUN_1895fd000(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001895fd020 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18138c6c0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ij; bke (Ljava/lang/String;)Lsixtwo/ij; (handler @ image 1895fd200, runtime 6ffff120d200) =====

void FUN_1895fd200(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001895fd225 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18138c7a0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ij; bkf (Ljava/lang/String;)Lsixtwo/ij; (handler @ image 1895fd400, runtime 6ffff120d400) =====

void FUN_1895fd400(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001895fd425 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18138c880 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ij; bkg (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1895fd600, runtime 6ffff120d600) =====

undefined8 FUN_1895fd600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/ij; bkh ([B)Ljava/lang/String; (handler @ image 1895fd690, runtime 6ffff120d690) =====

void FUN_1895fd690(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001895fd730 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18138cae0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ij; bki (IJ)Ljava/lang/String; (handler @ image 189626100, runtime 6ffff1236100) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189626100(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  
  uRam000000018321e550 = func_0x00018962ce80(uRam000000018321e5a8 ^ 0xe4437a6636482c26);
  uRam000000018321e6b8 =
       (uRam000000018321e6b8 ^ uRam000000018321e550 & 0x3fffffffffffff) + 0xff8efdef3f1fffeb ^
       0xfa288a9bd2c4da3b;
  uRam000000018321e6b0 =
       (uRam000000018321e6b0 * 0x16c3add3c66aef7f ^ uRam000000018321e6b8) +
       (uRam000000018321e550 & 0x3fffffffffffff);
  uRam000000018321e670 = uRam000000018321e6b0 ^ uRam000000018321e6b8;
  uRam000000018321e678 = 0xff8efdef3f1fffeb;
  uVar2 = (~uRam000000018321e5d8 + 0x9300d3192584a703) *
          ((uRam000000018321e6b0 ^ 0x80b9760fc5576705) +
          (uRam000000018321e6b0 & 0xb9760fc5576705) * 2);
  uVar2 = (uVar2 | uRam000000018321e660) + (uVar2 & uRam000000018321e660);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e520 =
       func_0x00018962ce80((uVar2 | 0x13b9a516e0d3c007) + (uVar2 & 0x13b9a516e0d3c007));
  uVar2 = (uRam000000018321e520 ^ 0x9300d3192584a702) * 0x7a7611a162e576af;
  uRam000000018321e5c0 = (uRam000000018321e5c0 ^ uVar2) + 0x13b9a51664f1e322 ^ 0x1bda9837bf830667;
  uRam000000018321e540 = (uRam000000018321e540 * -0x62ee3790e314b8bd ^ uRam000000018321e5c0) + uVar2
  ;
  uRam000000018321e618 = uRam000000018321e540 ^ uRam000000018321e5c0;
  uRam000000018321e6d0 = 0x13b9a51664f1e322;
  uRam000000018321e530 = func_0x00018962ce80(uRam000000018321e6e8 + 0x748acb66f3005761 ^ 0x6d);
  uVar2 = uRam000000018321e530 << 0x2f | uRam000000018321e530 >> 0x11;
  uRam000000018321e618 = (uRam000000018321e618 ^ uVar2) + 0x1db0fe72d07557d0 ^ 0x27a6246e7ca3e6a8;
  uRam000000018321e630 = (uRam000000018321e630 * -0x66eb8aefc3ce3013 ^ uRam000000018321e618) + uVar2
  ;
  uRam000000018321e600 = uRam000000018321e630 ^ uRam000000018321e618;
  uRam000000018321e6c0 = 0x1db0fe72d07557d0;
  uRam000000018321e6e8 = func_0x00018962ce80(uRam000000018321e568 + 0x8cf3bba8ea00a71d ^ 0x33);
  uVar2 = (uRam000000018321e6e8 ^ 0x9e779638248d57d0) << 0x1d |
          (uRam000000018321e6e8 ^ 0x9e779638248d57d0) >> 0x23;
  uRam000000018321e520 = uRam000000018321e6d0 ^ uVar2 ^ 0xe24f018d2f8b282f;
  uRam000000018321e570 = (uRam000000018321e570 ^ uVar2) + 0xe24f018d2f8b282f ^ 0x3168a48410315b4f;
  uRam000000018321e640 = (uRam000000018321e640 * -0x478a6d42aa14eb07 ^ uRam000000018321e570) + uVar2
  ;
  uRam000000018321e698 = uRam000000018321e640 ^ uRam000000018321e570;
  uRam000000018321e610 = 0xe24f018d2f8b282f;
  uVar2 = func_0x00018962ce80(uRam000000018321e678 ^ 0x34ac14b549ad23d6);
  uVar2 = (uVar2 << 0x23 | uVar2 >> 0x1d) ^ 0xe24f018d2f8b282f;
  uRam000000018321e660 = uRam000000018321e580 ^ uVar2 ^ 0x7fff;
  uRam000000018321e5c0 = (uRam000000018321e5c0 ^ uVar2) + 0x7fff ^ 0xde93a3b6752c667c;
  uRam000000018321e5e8 = (uRam000000018321e5e8 * -0x5c9866a7b4610e3d ^ uRam000000018321e5c0) + uVar2
  ;
  uRam000000018321e540 = uRam000000018321e5e8 ^ uRam000000018321e5c0;
  uRam000000018321e6b0 = 0x7fff;
  uVar2 = (~uRam000000018321e578 + 0x481c7e0bf8828c01) *
          ((uRam000000018321e5f0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018321e5f0 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam000000018321e5a0) + (uVar2 & uRam000000018321e5a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e590 =
       func_0x00018962ce80((uVar2 | 0x481c7e0b7ca0af25) + (uVar2 & 0x481c7e0b7ca0af25));
  uRam000000018321e690 = uRam000000018321e690 + 0xb7e381f4077d7400 ^ 0xfe2ed9854e3c78b3;
  uRam000000018321e6f8 = uRam000000018321e5a0 * 0x5b17171b79186717;
  uRam000000018321e5a0 = uRam000000018321e6f8 ^ uRam000000018321e690;
  uRam000000018321e620 = 0xb7e381f4077d7400;
  uVar2 = (uRam000000018321e6d8 ^ _UNK_181393980) + uRam000000018321e5d8 + 0x84225cda;
  uVar5 = (uRam000000018321e5d8 ^ _UNK_181393988) + uRam000000018321e6d8 + 0x481c7e0bf8828c00;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e6d8 ^ _UNK_181393980;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018321e5d8 ^ _UNK_181393988;
  uRam000000018321e6e0 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018321e6d8 + 0x481c7e0bf8828c00) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018321e5d8 + 0x84225cda));
  uVar2 = uRam000000018321e6e0 ^ 0xf6e97e354d7d0bff;
  uRam000000018321e5e0 = uRam000000018321e5d0 ^ uVar2 ^ 0x481c7e0bf8830bff;
  uRam000000018321e570 = (uRam000000018321e6c8 ^ uVar2) + 0x481c7e0bf8830bff;
  uRam000000018321e6c8 = uRam000000018321e570 ^ 0x11b336abcd4bc2ae;
  uRam000000018321e6d8 = (uRam000000018321e6d8 * -0x92e8a3f8de7ee09 ^ uRam000000018321e6c8) + uVar2;
  uRam000000018321e6b0 = uRam000000018321e6d8 ^ uRam000000018321e6c8;
  uRam000000018321e570 = uRam000000018321e570 ^ 0x59af48a035c8c951;
  uRam000000018321e680 = 0x481c7e0bf8830bff;
  uVar2 = (~uRam000000018321e620 + 0xb7e381f4077d7401) *
          ((uRam000000018321e670 ^ 0x481c7e0b7ca128da) +
          (uRam000000018321e670 & 0x481c7e0b7ca128da) * 2);
  uVar2 = (uVar2 | uRam000000018321e528) + (uVar2 & uRam000000018321e528);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e680 =
       func_0x00018962ce80((uVar2 | 0xffffffff7bdc5cda) + (uVar2 & 0xffffffff7bdc5cda));
  uRam000000018321e5a0 = uRam000000018321e5c0 ^ uRam000000018321e6b0 ^ 0x7fff;
  uRam000000018321e528 = (uRam000000018321e528 ^ uRam000000018321e6b0) + 0x7fff ^ 0xbceaf6fed8fd22dd
  ;
  uRam000000018321e6b8 =
       (uRam000000018321e6b8 * 0x4efc3daef76486c7 ^ uRam000000018321e528) + uRam000000018321e6b0;
  uRam000000018321e5f0 = uRam000000018321e6b8 ^ uRam000000018321e528;
  uRam000000018321e570 = 0x7fff;
  uVar2 = func_0x00018962ce80(uRam000000018321e578 + 0xe827bb3cbb425cd9 ^ 0xae);
  uRam000000018321e610 =
       (uRam000000018321e610 ^ uVar2 & 0x1fffffffffffffff) + 0x25b23ac7b421e4a0 ^ 0x5a9da2c008be89d;
  uRam000000018321e5b8 =
       (uVar2 * 0x675c1e2df3d8e245 ^ uRam000000018321e610) + (uVar2 & 0x1fffffffffffffff);
  uRam000000018321e5a0 = uRam000000018321e5b8 ^ uRam000000018321e610;
  uRam000000018321e5c0 = 0x25b23ac7b421e4a0;
  uVar2 = (uRam000000018321e558 ^ _UNK_181393990) + uRam000000018321e660 + 0x84225cda;
  uVar5 = (uRam000000018321e660 ^ _UNK_181393998) + uRam000000018321e558 + 0xda4dc5384bde1b60;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e558 ^ _UNK_181393990;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018321e660 ^ _UNK_181393998;
  uRam000000018321e5f0 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018321e558 + 0xda4dc5384bde1b60) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018321e660 + 0x84225cda));
  uRam000000018321e598 = uRam000000018321e5f0 & 0x7fffffffffffffff;
  uRam000000018321e6d0 =
       (uRam000000018321e6d0 ^ uRam000000018321e598) + 0xda4dc5384bde9b5f ^ 0x1727adbaef3751d6;
  uRam000000018321e598 =
       ((uRam000000018321e6f0 ^ uRam000000018321e598 ^ 0xda4dc5384bde9b5f) * -0x22334575e2ec3c95 ^
       uRam000000018321e6d0) + uRam000000018321e598;
  uRam000000018321e500 = uRam000000018321e598 ^ uRam000000018321e6d0;
  uRam000000018321e5a0 = 0xda4dc5384bde9b5f;
  uRam000000018321e678 = func_0x00018962ce80(uRam000000018321e668 + 0x854bf2d72ad652e6 ^ 0xeb);
  uVar2 = (uRam000000018321e678 ^ 0xda4dc5384bde9b5f) & 0x7fffffffffffffff;
  uRam000000018321e6b8 = uRam000000018321e640 ^ uVar2 ^ 0x7fff;
  uRam000000018321e580 = (uRam000000018321e580 ^ uVar2) + 0x7fff ^ 0x56e3c75de46cc159;
  uRam000000018321e6d8 =
       (uRam000000018321e6c0 * -0x20bc5d089a7245df ^ uRam000000018321e580) + uVar2 ^
       uRam000000018321e580;
  uRam000000018321e6c0 = 0x7fff;
  uVar2 = (~uRam000000018321e558 + 0x13b9a51664f1e323) *
          ((uRam000000018321e5a8 ^ 0xff8efdefbb3ddcce) +
          (uRam000000018321e5a8 & 0x7f8efdefbb3ddcce) * 2);
  uVar2 = (uVar2 | uRam000000018321e5e8) + (uVar2 & uRam000000018321e5e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e6f8 =
       func_0x00018962ce80((uVar2 | 0xec3758f9dfcc3fec) + (uVar2 & 0xec3758f9dfcc3fec));
  uVar2 = ((uRam000000018321e6f8 ^ 0xffbffdff7fffffeb) << 10 |
          (uRam000000018321e6f8 ^ 0xffbffdff7fffffeb) >> 0x36) ^ 0xff8efdef3f1fffeb;
  uRam000000018321e660 = uRam000000018321e520 ^ uVar2 ^ 0x1348a305a411e30d;
  uRam000000018321e6f0 = (uRam000000018321e6f0 ^ uVar2) + 0x1348a305a411e30d ^ 0x3a72a7e1959a880c;
  uRam000000018321e580 = (uRam000000018321e580 * -0x41869cb006975cc7 ^ uRam000000018321e6f0) + uVar2
  ;
  uRam000000018321e620 = uRam000000018321e580 ^ uRam000000018321e6f0;
  uRam000000018321e570 = 0x1348a305a411e30d;
  uVar2 = (~uRam000000018321e5a8 + 0x13b9a51664f1e323) *
          ((uRam000000018321e648 ^ 0xff8efdefbb3ddcce) +
          (uRam000000018321e648 & 0x7f8efdefbb3ddcce) * 2);
  uVar2 = (uVar2 | uRam000000018321e500) + (uVar2 & uRam000000018321e500);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e6b0 =
       func_0x00018962ce80((uVar2 | 0xec3758f9dfcc3fec) + (uVar2 & 0xec3758f9dfcc3fec));
  uRam000000018321e6f0 =
       (uRam000000018321e6f0 ^ uRam000000018321e6b0 & 0x7fffffffffffffff) + 0xec3758f95bee1cc9 ^
       0x37cf756e1f370102;
  uRam000000018321e580 =
       (uRam000000018321e580 * 0x2a99c232a7afaebb ^ uRam000000018321e6f0) +
       (uRam000000018321e6b0 & 0x7fffffffffffffff);
  uRam000000018321e658 = uRam000000018321e580 ^ uRam000000018321e6f0;
  uRam000000018321e500 = 0xec3758f95bee1cc9;
  uVar2 = (~uRam000000018321e5f8 + 0x13b9a51664f1e323) *
          ((uRam000000018321e690 ^ 0xff8efdefbb3ddcce) +
          (uRam000000018321e690 & 0x7f8efdefbb3ddcce) * 2);
  uVar2 = (uVar2 | uRam000000018321e590) + (uVar2 & uRam000000018321e590);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e6e8 =
       func_0x00018962ce80((uVar2 | 0xec3758f9dfcc3fec) + (uVar2 & 0xec3758f9dfcc3fec));
  uRam000000018321e600 =
       (uRam000000018321e600 ^ uRam000000018321e6e8 ^ 0xff8efdef3f1fffeb) + 0x1388a5062411e322 ^
       0x35fe80c4a9d86075;
  uRam000000018321e6b8 =
       (uRam000000018321e6b8 * 0x617a646d5b67eb1 ^ uRam000000018321e600) +
       (uRam000000018321e6e8 ^ 0xff8efdef3f1fffeb);
  uRam000000018321e6d0 = uRam000000018321e6b8 ^ uRam000000018321e600;
  uRam000000018321e6a8 = 0x1388a5062411e322;
  uVar2 = func_0x00018962ce80(lRam000000018321e510 + 0xccd6d97497ee94caU ^ 0x89);
  uVar5 = uVar2 >> 1 | uVar2;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam000000018321e558 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^ uVar2
  ;
  uRam000000018321e5d8 = uRam000000018321e608 ^ uRam000000018321e558 ^ 0x1348a305a411e30d;
  uRam000000018321e5e0 =
       (uRam000000018321e5e0 ^ uRam000000018321e558) + 0x1348a305a411e30d ^ 0x124593e796f5f537;
  uRam000000018321e558 = (uVar2 * -0x7b653f64cae4468f ^ uRam000000018321e5e0) + uRam000000018321e558
  ;
  uRam000000018321e5c8 = uRam000000018321e558 ^ uRam000000018321e5e0;
  uRam000000018321e6f8 = 0x1348a305a411e30d;
  uVar2 = (uRam000000018321e578 ^ _UNK_1813939a0) + uRam000000018321e690 + 0x1348a3052033c028;
  uVar5 = (uRam000000018321e690 ^ _UNK_1813939a8) + uRam000000018321e578 + 0x1348a305a411e30d;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e578 ^ _UNK_1813939a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018321e690 ^ _UNK_1813939a8;
  uRam000000018321e658 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018321e578 + 0x1348a305a411e30d) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam000000018321e690 + 0x1348a3052033c028));
  uRam000000018321e5a0 = uRam000000018321e658 & 0xfffffffff8000000;
  uRam000000018321e6a8 = uRam000000018321e6a8 ^ uRam000000018321e5a0 ^ 0x92e7606e1a93b598;
  uRam000000018321e640 =
       (uRam000000018321e640 * -0x61113d3b3e518a9d ^ uRam000000018321e6a8) + uRam000000018321e5a0;
  uRam000000018321e550 = uRam000000018321e640 ^ uRam000000018321e6a8;
  uRam000000018321e6f0 = 0;
  uRam000000018321e538 = func_0x00018962ce80(uRam000000018321e618 ^ 0xefdc8ebbcefdbd4b);
  uVar2 = (uRam000000018321e538 & 0xff8efdef3f1fffeb) << 0x1c |
          (uRam000000018321e538 & 0xff8efdef3f1fffeb) >> 0x24;
  uRam000000018321e5b0 = (uRam000000018321e5b0 ^ uVar2) + 0x710210c0e00014 ^ 0x30ef7c0d20af3eff;
  uRam000000018321e600 = (uRam000000018321e600 * -0x57511fd72cb3b7b5 ^ uRam000000018321e5b0) + uVar2
  ;
  uRam000000018321e518 = uRam000000018321e600 ^ uRam000000018321e5b0;
  uRam000000018321e6d8 = 0x710210c0e00014;
  uRam000000018321e558 = func_0x00018962ce80(uRam000000018321e6b8 ^ 0x7a4b3cb4a6db22ed);
  uRam000000018321e668 =
       uRam000000018321e668 ^ ~uRam000000018321e558 & 0xff8efdef38000000 ^ 0x444880a27114c799;
  uRam000000018321e6f0 =
       (uRam000000018321e6f0 * -0x497bf75d2ffc890f ^ uRam000000018321e668) +
       (~uRam000000018321e558 & 0xff8efdef38000000);
  uRam000000018321e6b8 = uRam000000018321e6f0 ^ uRam000000018321e668;
  uRam000000018321e600 = 0;
  uRam000000018321e648 = func_0x00018962ce80(uRam000000018321e6a0 ^ 0xffa4007bb5ffdd0b);
  uVar2 = uRam000000018321e648 ^ 0x7fff;
  uRam000000018321e640 = uRam000000018321e630 ^ uVar2 ^ 0x7fff;
  uRam000000018321e5a8 = (uRam000000018321e5a8 ^ uVar2) + 0x7fff ^ 0x5c2c9873a4ff8645;
  uRam000000018321e6d0 = (uRam000000018321e6d0 * 0x6620b1bc18ba505b ^ uRam000000018321e5a8) + uVar2;
  uRam000000018321e570 = uRam000000018321e6d0 ^ uRam000000018321e5a8;
  uRam000000018321e5f8 = 0x7fff;
  uVar2 = (~uRam000000018321e6f8 + 0x8f8aedc9370a3ec4) *
          ((uRam000000018321e680 ^ 0x8f8aedc9b3281de6) +
          (uRam000000018321e680 & 0xf8aedc9b3281de6) * 2);
  uVar2 = (uVar2 | uRam000000018321e638) + (uVar2 & uRam000000018321e638);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e660 =
       func_0x00018962ce80((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar2 = ~(uRam000000018321e660 * -0x6defa35ea54a34cd << 0x36 |
           uRam000000018321e660 * -0x6defa35ea54a34cd >> 10) & 0x8f8aedc9370a3ec3;
  uRam000000018321e580 = uRam000000018321e580 ^ uVar2 ^ 0xa506816a3dea0ef3;
  uRam000000018321e598 = (uRam000000018321e598 * 0x3d5fa8fa2ca497a1 ^ uRam000000018321e580) + uVar2;
  uRam000000018321e6c0 = uRam000000018321e598 ^ uRam000000018321e580;
  uRam000000018321e670 = 0;
  uRam000000018321e600 = func_0x00018962ce80(uRam000000018321e558 ^ 0xffbbff7b55ffdd5e);
  uVar2 = uRam000000018321e600 - (uRam000000018321e600 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018321e600;
  uRam000000018321e6a0 = uRam000000018321e650 ^ uVar2 ^ 0x7fff;
  uRam000000018321e520 = (uRam000000018321e520 ^ uVar2) + 0x7fff ^ 0x8ef5ef21cd5b54a6;
  uRam000000018321e678 = (uRam000000018321e678 * -0x64ccb873483936dd ^ uRam000000018321e520) + uVar2
  ;
  uRam000000018321e5c8 = uRam000000018321e678 ^ uRam000000018321e520;
  auVar3._8_8_ = _UNK_18019c088;
  auVar3._0_8_ = param_4 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _UNK_1813939b0,_UNK_1800170c0);
  uRam000000018321e660 = 0x7fff;
  uVar5 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar5 + uRam000000018321e5e0;
  if (auVar4._4_4_ < 0) {
    uVar2 = uRam000000018321e650 ^ uVar5;
  }
  uRam000000018321e528 = func_0x00018962ce80(SUB161(auVar3 ^ _UNK_1813939b0,5) ^ uVar2);
  uVar5 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam000000018321e6c0 =
       (uRam000000018321e6c0 ^ ~uRam000000018321e528 & param_4) + uVar5 ^ 0x323834e15be55ded;
  uRam000000018321e5c8 =
       (uRam000000018321e5c8 * 0xd2aab7491a76a9b ^ uRam000000018321e6c0) +
       (~uRam000000018321e528 & param_4);
  uRam000000018321e610 = uRam000000018321e5c8 ^ uRam000000018321e6c0;
  uRam000000018321e500 = uRam000000018321e6d0 ^ uVar5;
  uVar2 = (~uRam000000018321e578 + 0x1f4b2939) *
          ((uRam000000018321e520 ^ 0x6ac69840) +
          (ulonglong)((uint)uRam000000018321e520 & 0x6ac69840) * 2);
  uVar2 = (uVar2 | uRam000000018321e570) + (uVar2 & uRam000000018321e570);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e6d0 = uVar5;
  uRam000000018321e578 =
       func_0x00018962ce80((uVar2 | 0x758db178) + (ulonglong)((uint)uVar2 & 0x758db178));
  uVar2 = uRam000000018321e578 >> 1 | uRam000000018321e578;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = uRam000000018321e578 ^ 0xeee4bb65 ^
          (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80;
  uRam000000018321e618 = (uRam000000018321e618 ^ uVar2) + 0xffefbb7d ^ 0x9fb5dd3495c6a7fc;
  uRam000000018321e500 = (uRam000000018321e500 * -0x3a990c14d88a8cdb ^ uRam000000018321e618) + uVar2
  ;
  uRam000000018321e558 = uRam000000018321e500 ^ uRam000000018321e618;
  uRam000000018321e628 = 0xffefbb7d;
  uVar2 = (uRam000000018321e6f0 ^ _UNK_1813939c0) + uRam000000018321e638 + 0xf8408d35;
  uVar5 = (uRam000000018321e638 ^ _UNK_1813939c8) + uRam000000018321e6f0 + 0x2cd30df7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e6f0 ^ _UNK_1813939c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018321e638 ^ _UNK_1813939c8;
  uRam000000018321e600 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018321e6f0 + 0x2cd30df7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018321e638 + 0xf8408d35));
  uVar2 = uRam000000018321e600 - (uRam000000018321e600 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam000000018321e600;
  uRam000000018321e5a8 = (uRam000000018321e5a8 ^ uVar2) + 0x50b1a3e7 ^ 0x320fdaeb685eda61;
  uRam000000018321e610 = (uRam000000018321e610 * -0x37cc5f4091af7687 ^ uRam000000018321e5a8) + uVar2
  ;
  uRam000000018321e5f0 = uRam000000018321e610 ^ uRam000000018321e5a8;
  uRam000000018321e648 = 0x50b1a3e7;
  uVar2 = (uRam000000018321e6a8 ^ _UNK_1813939d0) + uRam000000018321e6a0 + 0x84222325;
  uVar5 = (uRam000000018321e6a0 ^ _UNK_1813939d8) + uRam000000018321e6a8 + 0xaf055aa5;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e6a8 ^ _UNK_1813939d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018321e6a0 ^ _UNK_1813939d8;
  uRam000000018321e670 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018321e6a8 + 0xaf055aa5) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018321e6a0 + 0x84222325));
  uRam000000018321e660 =
       (uRam000000018321e660 ^ uRam000000018321e670 & 0x7fffffffffffffff) - 0xaf055aa5 ^
       0xba9357edc116a4f5;
  uRam000000018321e6e8 =
       (uRam000000018321e6e8 * 0x3077ee802ae09ee7 ^ uRam000000018321e660) +
       (uRam000000018321e670 & 0x7fffffffffffffff);
  uRam000000018321e668 = uRam000000018321e6e8 ^ uRam000000018321e660;
  uRam000000018321e530 = 0x50faa55b;
  uVar2 = (uRam000000018321e520 ^ _UNK_1813939e0) + uRam000000018321e5b0 + 0x84222840;
  uVar5 = (uRam000000018321e5b0 ^ _UNK_1813939e8) + uRam000000018321e520 + 0xaf055aa5;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e520 ^ _UNK_1813939e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018321e5b0 ^ _UNK_1813939e8;
  uRam000000018321e560 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018321e520 + 0xaf055aa5) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018321e5b0 + 0x84222840));
  uVar2 = uRam000000018321e560 ^ 0x7ca4801da19;
  uRam000000018321e628 = uRam000000018321e5f0 ^ uVar2 ^ 0xaf05660a;
  uRam000000018321e680 = (uRam000000018321e680 ^ uVar2) + 0xaf05660a ^ 0xcdb39813a20db145;
  uRam000000018321e688 = (uRam000000018321e688 * 0x7abab437bfc79eb ^ uRam000000018321e680) + uVar2;
  uRam000000018321e6a0 = uRam000000018321e688 ^ uRam000000018321e680;
  uRam000000018321e590 = 0xaf05660a;
  uVar2 = (uRam000000018321e660 ^ _UNK_1813939f0) + uRam000000018321e500 + 0x2b27452f;
  uVar5 = (uRam000000018321e500 ^ _UNK_1813939f8) + uRam000000018321e660 + 0x50faa55b;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e660 ^ _UNK_1813939f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018321e500 ^ _UNK_1813939f8;
  uRam000000018321e628 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018321e660 + 0x50faa55b) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018321e500 + 0x2b27452f));
  uVar2 = (uRam000000018321e628 ^ 0x375d0c357773b78e) & 0x7fffffffffffffff ^ 0xaf05660a;
  uVar2 = uVar2 >> 1 | (ulonglong)((uVar2 & 1) != 0) << 0x3f;
  uRam000000018321e6a0 = uRam000000018321e588 ^ uVar2 ^ 0x100000b65;
  uRam000000018321e528 = (uRam000000018321e528 ^ uVar2) + 0x100000b65 ^ 0x8ba3ab86ad2c6cf4;
  uRam000000018321e558 = (uRam000000018321e558 * 0x4b686dbc6f93fcab ^ uRam000000018321e528) + uVar2;
  uRam000000018321e5f8 = uRam000000018321e558 ^ uRam000000018321e528;
  uRam000000018321e680 = 0xb65;
  uVar2 = (~uRam000000018321e620 + 0xd6a7b501) *
          ((uRam000000018321e648 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018321e648 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam000000018321e690) + (uVar2 & uRam000000018321e690);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e5b0 =
       func_0x00018962ce80((uVar2 | 0x52859625) + (ulonglong)((uint)uVar2 & 0x52859625));
  uVar2 = uRam000000018321e5b0 - (uRam000000018321e5b0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018321e5b0;
  uVar2 = uVar5 >> 1 | uVar5;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar5;
  uRam000000018321e600 = (uRam000000018321e600 ^ uVar5) - 0xd6a7b500 ^ 0xfdba939cd51b035;
  uRam000000018321e610 = (uRam000000018321e610 * 0x33c0a5b7233e5f13 ^ uRam000000018321e600) + uVar5;
  uRam000000018321e6a0 = uRam000000018321e610 ^ uRam000000018321e600;
  uRam000000018321e6e8 = 0x29584b00;
  uVar2 = (~uRam000000018321e620 + 0xd6a7b501) *
          ((uRam000000018321e640 ^ 0x84222840) +
          (ulonglong)((uint)uRam000000018321e640 & 0x84222840) * 2);
  uVar2 = (uVar2 | uRam000000018321e538) + (uVar2 & uRam000000018321e538);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e568 =
       func_0x00018962ce80((uVar2 | 0x52859d40) + (ulonglong)((uint)uVar2 & 0x52859d40));
  uVar2 = uRam000000018321e5f0 ^ 0xd6a7b500;
  uRam000000018321e6b8 = uRam000000018321e540 ^ uVar2 ^ 0xd6a7c065;
  uRam000000018321e5f8 = (uRam000000018321e5f8 ^ uVar2) + 0xd6a7c065 ^ 0x94385943ae21089c;
  uRam000000018321e590 = (uRam000000018321e590 * -0x61cac5e97c1a500b ^ uRam000000018321e5f8) + uVar2
  ;
  uRam000000018321e6a8 = uRam000000018321e590 ^ uRam000000018321e5f8;
  uRam000000018321e620 = 0xd6a7c065;
  uRam000000018321e520 = func_0x00018962ce80(uRam000000018321e528 ^ 0xffc8ffeb42fffb14);
  uRam000000018321e690 = uRam000000018321e658 ^ uRam000000018321e520 ^ 0x150a15f64;
  uRam000000018321e508 =
       (uRam000000018321e508 ^ uRam000000018321e520) + 0x150a15f64 ^ 0x3dcf3234a0ed1718;
  uRam000000018321e568 =
       (uRam000000018321e568 * -0x304ca3dad488bbb5 ^ uRam000000018321e508) + uRam000000018321e520;
  uRam000000018321e6c8 = uRam000000018321e568 ^ uRam000000018321e508;
  uRam000000018321e638 = 0x50a15f64;
  uVar2 = (uRam000000018321e6a8 ^ _UNK_181393a00) + uRam000000018321e670 + 0x7bcd9858;
  uVar5 = (uRam000000018321e670 ^ _UNK_181393a08) + uRam000000018321e6a8 + 0x50b1a3e7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e6a8 ^ _UNK_181393a00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018321e670 ^ _UNK_181393a08;
  uRam000000018321e650 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018321e6a8 + 0x50b1a3e7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018321e670 + 0x7bcd9858));
  uVar2 = (uRam000000018321e650 & 0x1ffffffffffffff) * -0x497582229c5287c5;
  uRam000000018321e588 = (uRam000000018321e588 ^ uVar2) + 0x50a1a365 ^ 0x6d15034c6a982ead;
  uRam000000018321e5d0 = (uRam000000018321e5d0 * 0x1befb658287b000b ^ uRam000000018321e588) + uVar2;
  uRam000000018321e5f0 = uRam000000018321e5d0 ^ uRam000000018321e588;
  uRam000000018321e5d8 = 0x50a1a365;
  uRam000000018321e568 = func_0x00018962ce80(uRam000000018321e6e0 + 0x1d0089d4fff0ff ^ 0xa4);
  uRam000000018321e610 = uRam000000018321e5c8 ^ uRam000000018321e5f0 ^ 0x150a15f64;
  uRam000000018321e658 =
       (uRam000000018321e658 ^ uRam000000018321e5f0) + 0x150a15f64 ^ 0x9e575487ef6d8e43;
  uRam000000018321e538 =
       (uRam000000018321e538 * 0x5d9b3c4d69a6ba71 ^ uRam000000018321e658) + uRam000000018321e5f0;
  uRam000000018321e618 = uRam000000018321e538 ^ uRam000000018321e658;
  uRam000000018321e508 = 0x50a15f64;
  uVar2 = (uRam000000018321e560 ^ 0x84222840) + uRam000000018321e680 + 0x84222840;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam000000018321e560 ^ 0x84222840;
  uVar5 = ((uRam000000018321e680 + uRam000000018321e560) * 0x2000 |
          uRam000000018321e680 + uRam000000018321e560 >> 0x33) ^ uRam000000018321e680;
  uRam000000018321e5e0 =
       func_0x00018962ce80((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018321e560 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam000000018321e680 + 0x84222840));
  uVar2 = uRam000000018321e5e0 << 0x36 | uRam000000018321e5e0 >> 10;
  uRam000000018321e590 = uRam000000018321e650 ^ uVar2 ^ 0xb65;
  uRam000000018321e598 = (uRam000000018321e598 ^ uVar2) + 0xb65 ^ 0x6aac26b1d2dc7a1;
  uRam000000018321e688 = (uRam000000018321e688 * -0x22b001908005a8db ^ uRam000000018321e598) + uVar2
  ;
  uRam000000018321e678 = uRam000000018321e688 ^ uRam000000018321e598;
  uRam000000018321e608 = 0xb65;
  uVar2 = (~uRam000000018321e5b0 + 0x104483) *
          ((uRam000000018321e628 ^ 0x7bcd9858) +
          (ulonglong)((uint)uRam000000018321e628 & 0x7bcd9858) * 2);
  uVar2 = (uVar2 | uRam000000018321e568) + (uVar2 & uRam000000018321e568);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e5f8 =
       func_0x00018962ce80((uVar2 | 0x7bdddcda) + (ulonglong)((uint)uVar2 & 0x7bdddcda));
  uVar2 = (uRam000000018321e5f8 ^ 0xffffffff) & 0x7fffffffffffffff;
  uRam000000018321e518 = uRam000000018321e518 ^ uVar2 ^ 0x45bd6be5de8de395;
  uRam000000018321e560 = (uRam000000018321e560 * 0x4182aa8d2155884b ^ uRam000000018321e518) + uVar2;
  uRam000000018321e5e8 = uRam000000018321e560 ^ uRam000000018321e518;
  uRam000000018321e598 = 0;
  uRam000000018321e5d8 = func_0x00018962ce80(uRam000000018321e540 + 0x17ff8440001dff ^ 0x77);
  uVar2 = uRam000000018321e598 << 0x23 | uRam000000018321e598 >> 0x1d;
  uRam000000018321e538 = uRam000000018321e560 ^ uVar2 ^ 0xb65;
  uRam000000018321e5a8 = (uRam000000018321e5a8 ^ uVar2) + 0xb65 ^ 0xc672e22c309a0e4d;
  uRam000000018321e5a0 =
       (uRam000000018321e568 * -0x400da513721fd9d ^ uRam000000018321e5a8) + uVar2 ^
       uRam000000018321e5a8;
  uRam000000018321e568 = 0xb65;
  uVar2 = (~uRam000000018321e560 + 0xeee4bb66) *
          ((uRam000000018321e618 ^ 0x6ac69840) +
          (ulonglong)((uint)uRam000000018321e618 & 0x6ac69840) * 2);
  uVar2 = (uVar2 | uRam000000018321e698) + (uVar2 & uRam000000018321e698);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e628 =
       func_0x00018962ce80((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam000000018321e568 =
       uRam000000018321e568 ^ uRam000000018321e628 * -0x2039f8b6243026b9 ^ 0xd555b8d74b80d84d;
  uRam000000018321e5e0 =
       (uRam000000018321e5e0 * -0x841b4921c4d5953 ^ uRam000000018321e568) +
       uRam000000018321e628 * -0x2039f8b6243026b9;
  uRam000000018321e6d8 = 0;
  uVar2 = ((uRam000000018321e650 ^ 0x84222840) +
          (ulonglong)((uint)uRam000000018321e650 & 0x84222840) * 2) * -uRam000000018321e538;
  uVar2 = (uVar2 | uRam000000018321e598) + (uVar2 & uRam000000018321e598);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam000000018321e698 =
       func_0x00018962ce80((uVar2 | 0x84222840) + (ulonglong)((uint)uVar2 & 0x84222840));
  uVar2 = uRam000000018321e698 & 0xffffffffc0000000;
  uRam000000018321e530 = (uRam000000018321e5b0 ^ uVar2 ^ 0xb65 ^ uVar2) + 0xb65 ^ 0x432be478a6ce0b90
  ;
  uRam000000018321e5c0 = (uRam000000018321e5c0 * 0x137b398d00c91b31 ^ uRam000000018321e530) + uVar2;
  uRam000000018321e600 = uRam000000018321e5c0 ^ uRam000000018321e530;
  uRam000000018321e5b8 = 0xb65;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x6a7b,0x12f);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000189628564 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181391ff8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ij; bkj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1895e3920, runtime 6ffff11f3920) =====

void FUN_1895e3920(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001895e395c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181385270 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ij; bkk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1895e4810, runtime 6ffff11f4810) =====

void FUN_1895e4810(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001895e488d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813857b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ij; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 1895d60b0, runtime 6ffff11e60b0) =====

void FUN_1895d60b0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x6a7b,0x12f);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001895d619e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181381470 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ij; toJson ()Lcom/google/gson/JsonObject; (handler @ image 1895ed7c0, runtime 6ffff11fd7c0) =====

void FUN_1895ed7c0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x6a7b,0x12f);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001895ed8ae did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181387e80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



