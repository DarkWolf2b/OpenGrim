// ===== STITCHED CORPUS: sixtwo.ij =====
// handlers: 13  continuation blocks: 119  unresolved table targets: 0
// tables not in tables.json: ['0x1018fb8', '0x10b0348', '0x138cf10', '0x138cf30', '0x138d4c8', '0x138d4d8', '0x138daa8', '0x138dab8', '0x1393980', '0x1393988', '0x1393990', '0x1393998', '0x13939a0', '0x13939a8', '0x13939b0', '0x13939c0', '0x13939c8', '0x13939d0', '0x13939d8', '0x13939e0']

// ===== Lsixtwo/ij; _f2b524f8e76a56962fb3b97ccefaac45 ()V (handler @ image 1895e72d0, runtime 6ffff11f72d0) =====

void FUN_1895e72d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6a7b,0x12f)
      /* POOL[0x6a7b,0x12f]: /P; | YWarX | Ar | bjv | biV | biT | Bg | biu | sixtwo/ij | bit | biU | MKuzJ | zQIvK | biW | (Lsixtwo/ig;)Ljava/util/concurrent/CompletableFuture; | Ak | Bh | Bk | Av | XDEoP | Au | Aq | compare | (II)I | qslyP | Ai | (Lsixtwo/lC;Ljava/util/List;IF)V | dho | qhReV | AX | MhSRE | AW | Ah | waiDL | ClfhO | Ba | uNytp | bEhCo | ENBAX | wdYkr | TExFB | Hzehq | Lsixtwo/ig; | Bn | yPGPg | Lsixtw */;
  cVar1 = JNI->ExceptionCheck(param_1);
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001895e488d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813857b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ij; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 1895d60b0, runtime 6ffff11e60b0) =====

void FUN_1895d60b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6a7b,0x12f)
      /* POOL[0x6a7b,0x12f]: /P; | YWarX | Ar | bjv | biV | biT | Bg | biu | sixtwo/ij | bit | biU | MKuzJ | zQIvK | biW | (Lsixtwo/ig;)Ljava/util/concurrent/CompletableFuture; | Ak | Bh | Bk | Av | XDEoP | Au | Aq | compare | (II)I | qslyP | Ai | (Lsixtwo/lC;Ljava/util/List;IF)V | dho | qhReV | AX | MhSRE | AW | Ah | waiDL | ClfhO | Ba | uNytp | bEhCo | ENBAX | wdYkr | TExFB | Hzehq | Lsixtwo/ig; | Bn | yPGPg | Lsixtw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001895d619e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181381470 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/ij; toJson ()Lcom/google/gson/JsonObject; (handler @ image 1895ed7c0, runtime 6ffff11fd7c0) =====

void FUN_1895ed7c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x6a7b,0x12f)
      /* POOL[0x6a7b,0x12f]: /P; | YWarX | Ar | bjv | biV | biT | Bg | biu | sixtwo/ij | bit | biU | MKuzJ | zQIvK | biW | (Lsixtwo/ig;)Ljava/util/concurrent/CompletableFuture; | Ak | Bh | Bk | Av | XDEoP | Au | Aq | compare | (II)I | qslyP | Ai | (Lsixtwo/lC;Ljava/util/List;IF)V | dho | qhReV | AX | MhSRE | AW | Ah | waiDL | ClfhO | Ba | uNytp | bEhCo | ENBAX | wdYkr | TExFB | Hzehq | Lsixtwo/ig; | Bn | yPGPg | Lsixtw */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001895ed8ae did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181387e80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x95d61a1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895d61a1(void)

{
  FUN_190ddce00();
  (*_DAT_181381a58)();
  return;
}


// ----- block @ rva 0x95dbeb9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895dbeb9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181381918)();
  return;
}


// ----- block @ rva 0x95dcdec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895dcdec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1813827b8)();
  return;
}


// ----- block @ rva 0x95dceaa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895dceaa(void)

{
  (*_DAT_181383028)();
  return;
}


// ----- block @ rva 0x95ddddb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895ddddb(void)

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


// ----- block @ rva 0x95e16a8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e16a8(void)

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


// ----- block @ rva 0x95e1840 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e1840(void)

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


// ----- block @ rva 0x95e1aa2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e1aa2(void)

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


// ----- block @ rva 0x95e1ded -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e1ded(void)

{
  (*_DAT_1813830b8)();
  return;
}


// ----- block @ rva 0x95e2b75 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e2b75(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181381728)();
  return;
}


// ----- block @ rva 0x95e377d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e377d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_181382a68)();
  return;
}


// ----- block @ rva 0x95e378c -----

void FUN_1895e378c(void)

{
  return;
}


// ----- block @ rva 0x95e37f8 -----

void FUN_1895e37f8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x95e395f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e395f(void)

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


// ----- block @ rva 0x95e39b3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e39b3(void)

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


// ----- block @ rva 0x95e3bb7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e3bb7(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x95e3cc2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e3cc2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181385618)();
  return;
}


// ----- block @ rva 0x95e3d18 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e3d18(void)

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


// ----- block @ rva 0x95e3da9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e3da9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181385708)();
  return;
}


// ----- block @ rva 0x95e4417 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e4417(void)

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


// ----- block @ rva 0x95e461d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e461d(void)

{
  FUN_190ddfc90();
  (*_DAT_181385448)();
  return;
}


// ----- block @ rva 0x95e46c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e46c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181385618)();
  return;
}


// ----- block @ rva 0x95e4718 -----

void FUN_1895e4718(void)

{
  return;
}


// ----- block @ rva 0x95e4726 -----

void FUN_1895e4726(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x95e4890 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e4890(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1813863e8)();
  return;
}


// ----- block @ rva 0x95e4b51 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e4b51(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_181386348)();
  return;
}


// ----- block @ rva 0x95e4ee0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e4ee0(void)

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


// ----- block @ rva 0x95e5037 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e5037(void)

{
  (*_DAT_1813860a8)();
  return;
}


// ----- block @ rva 0x95e5174 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e5174(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181385c78)();
  return;
}


// ----- block @ rva 0x95e5981 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e5981(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1813864a8)();
  return;
}


// ----- block @ rva 0x95e59df -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e59df(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_181385808)();
  return;
}


// ----- block @ rva 0x95e59fc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e59fc(void)

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


// ----- block @ rva 0x95e5ad9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e5ad9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000a4;
  undefined2 uStack00000000000000a8;
  undefined4 uStack00000000000000dc;
  
  uStack00000000000000dc = 0xbe84b10e;
  uVar1 = rdtsc();
  uStack00000000000000a4 = 0x3a0020;
  uStack00000000000000a8 = 0x20;
  (*_DAT_181385e48)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}


// ----- block @ rva 0x95e6505 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e6505(void)

{
  FUN_190dd72e0();
  (*_DAT_1813861c8)();
  return;
}


// ----- block @ rva 0x95e6630 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e6630(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1813862d8)();
  return;
}


// ----- block @ rva 0x95e7112 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e7112(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181386528)();
  return;
}


// ----- block @ rva 0x95e716d -----

void FUN_1895e716d(void)

{
  return;
}


// ----- block @ rva 0x95e718c -----

void FUN_1895e718c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x95e73af -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e73af(void)

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


// ----- block @ rva 0x95e743e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e743e(void)

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


// ----- block @ rva 0x95e78e3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e78e3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000050;
  
  uStack0000000000000050 = 0xd;
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


// ----- block @ rva 0x95e939e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895e939e(void)

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


// ----- block @ rva 0x95e93e4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895e93e4(void)

{
  longlong *unaff_RSI;
  undefined1 uStack000000000000003f;
  longlong in_stack_00000058;
  undefined1 in_stack_00000070;
  
  uStack000000000000003f = in_stack_00000070;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x95ea864 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895ea864(void)

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


// ----- block @ rva 0x95ec20a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895ec20a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallCharMethodA /*0x168*/))();
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


// ----- block @ rva 0x95ed13a -----

void thunk_FUN_1895e7531(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x95ed314 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895ed314(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
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


// ----- block @ rva 0x95ed413 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895ed413(void)

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


// ----- block @ rva 0x95ed553 -----

void FUN_1895ed553(void)

{
  return;
}


// ----- block @ rva 0x95ed8b1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895ed8b1(void)

{
  FUN_190ddce00();
  (*_DAT_181388bb8)();
  return;
}


// ----- block @ rva 0x95f5a8d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895f5a8d(void)

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


// ----- block @ rva 0x95f9164 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895f9164(void)

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


// ----- block @ rva 0x95f926e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895f926e(void)

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


// ----- block @ rva 0x95fb116 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fb116(void)

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


// ----- block @ rva 0x95fb75b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fb75b(void)

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


// ----- block @ rva 0x95fc53a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fc53a(void)

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


// ----- block @ rva 0x95fc9ca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fc9ca(void)

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


// ----- block @ rva 0x95fcc24 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fcc24(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(in_stack_00000040 + JNI->Throw /*0x68*/))();
  (*_DAT_181389888)();
  return;
}


// ----- block @ rva 0x95fcc37 -----

void FUN_1895fcc37(void)

{
  return;
}


// ----- block @ rva 0x95fcca3 -----

void FUN_1895fcca3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x95fce23 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fce23(void)

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


// ----- block @ rva 0x95fce5c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fce5c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18138c678)();
  return;
}


// ----- block @ rva 0x95fce96 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fce96(void)

{
  FUN_190dd72e0();
  (*_DAT_18138c628)();
  return;
}


// ----- block @ rva 0x95fcebe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fcebe(void)

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


// ----- block @ rva 0x95fcf12 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fcf12(void)

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


// ----- block @ rva 0x95fcf36 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fcf36(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18138c638)();
  return;
}


// ----- block @ rva 0x95fcf5d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fcf5d(void)

{
  (*_DAT_18138c648)();
  return;
}


// ----- block @ rva 0x95fcf6e -----

void FUN_1895fcf6e(void)

{
  return;
}


// ----- block @ rva 0x95fcf76 -----

void FUN_1895fcf76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x95fd023 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd023(void)

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


// ----- block @ rva 0x95fd081 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd081(void)

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


// ----- block @ rva 0x95fd096 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd096(void)

{
  FUN_190dd72e0();
  (*_DAT_18138c6d8)();
  return;
}


// ----- block @ rva 0x95fd0be -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd0be(void)

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


// ----- block @ rva 0x95fd0df -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd0df(void)

{
  FUN_190dd9df0();
  (*_DAT_18138c6e8)();
  return;
}


// ----- block @ rva 0x95fd112 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd112(void)

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


// ----- block @ rva 0x95fd136 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd136(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18138c708)();
  return;
}


// ----- block @ rva 0x95fd15d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd15d(void)

{
  (*_DAT_18138c6f8)();
  return;
}


// ----- block @ rva 0x95fd16e -----

void FUN_1895fd16e(void)

{
  return;
}


// ----- block @ rva 0x95fd176 -----

void FUN_1895fd176(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x95fd228 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd228(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x95fd286 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd286(void)

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


// ----- block @ rva 0x95fd29b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd29b(void)

{
  FUN_190dd72e0();
  (*_DAT_18138c7f8)();
  return;
}


// ----- block @ rva 0x95fd2c3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd2c3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x95fd2e4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd2e4(void)

{
  FUN_190dd9df0();
  (*_DAT_18138c7b8)();
  return;
}


// ----- block @ rva 0x95fd317 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd317(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x95fd33b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd33b(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->SetObjectField /*0x340*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18138c7d8)();
  return;
}


// ----- block @ rva 0x95fd362 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd362(void)

{
  (*_DAT_18138c7c8)();
  return;
}


// ----- block @ rva 0x95fd373 -----

void FUN_1895fd373(void)

{
  return;
}


// ----- block @ rva 0x95fd37d -----

void FUN_1895fd37d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x95fd428 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd428(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x95fd461 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd461(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18138c8b8)();
  return;
}


// ----- block @ rva 0x95fd486 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd486(void)

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


// ----- block @ rva 0x95fd49b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd49b(void)

{
  FUN_190dd72e0();
  (*_DAT_18138c8e8)();
  return;
}


// ----- block @ rva 0x95fd4c3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd4c3(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x95fd517 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1895fd517(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(unaff_RDI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x95fd562 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd562(void)

{
  (*_DAT_18138c898)();
  return;
}


// ----- block @ rva 0x95fd573 -----

void FUN_1895fd573(void)

{
  return;
}


// ----- block @ rva 0x95fd57d -----

void FUN_1895fd57d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x95fd733 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001895fd76a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1895fd733(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x95fd788 -----

void FUN_1895fd788(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x38) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x0001895fd7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18138cf30 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x95fd804 -----

void FUN_1895fd804(void)

{
  longlong unaff_RBP;
  uint unaff_EDI;
  
                    /* WARNING: Could not recover jumptable at 0x0001895fd81b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18138cf10 + (ulonglong)(unaff_EDI >> 0x1f) * 8))
            ((ulonglong)(unaff_EDI >> 0x1f),&UNK_18138cf10,unaff_RBP + -0x3b);
  return;
}


// ----- block @ rva 0x95fd850 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1895fd850(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int in_EAX;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  uint uVar8;
  ulonglong unaff_RSI;
  byte in_XMM0_Bf;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong in_XMM1_Qb;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar7 = in_XMM1_Qb + param_1 + _DAT_18321d990;
  if (in_EAX < 0) {
    uVar7 = _DAT_18321da00 ^ in_XMM1_Qb + param_1;
  }
  uVar6 = func_0x000189626070(in_XMM0_Bf ^ uVar7);
  uVar5 = _DAT_18138db90;
  uVar4 = _DAT_18138db70;
  uVar3 = _DAT_18138db50;
  uVar2 = _DAT_18138db30;
  uVar12 = _UNK_1810b0348;
  uVar7 = _DAT_1810b0340;
  uVar6 = (unaff_RSI ^ uVar6) << 0x28 | (unaff_RSI ^ uVar6) >> 0x18;
  uVar8 = -(int)unaff_RSI;
  _DAT_18321d988 = (_DAT_18321d988 ^ uVar6) - unaff_RSI ^ 0x5ce2934969be76d0;
  _DAT_18321d9b0 = (_DAT_18321d9b0 * 0x3bf2ba6bdf1e71c9 ^ _DAT_18321d988) + uVar6;
  _DAT_18321d908 = _DAT_18321d9b0 ^ _DAT_18321d988;
  _DAT_18321d900 = (ulonglong)uVar8;
  *(uint *)(unaff_RBP + 0x90) = uVar8;
  *(char *)(unaff_RBP + 0x40) = (char)uVar8 + (char)(uVar8 / 10) * -10;
  _DAT_18321da50 = func_0x000189626070(_DAT_18321d970 ^ 0x20ff7b7dffe1e4);
  uVar6 = (ulonglong)((uint)_DAT_18321da50 ^ 0x30d6) << 0x2d | _DAT_18321da50 >> 0x13;
  _DAT_18321da30 = (_DAT_18321da30 ^ uVar6) + 0xdf ^ 0x33bfebe0ef878ace;
  _DAT_18321d910 = (_DAT_18321d910 * 0x4ff19b06f2a8aabf ^ _DAT_18321da30) + uVar6;
  _DAT_18321dac8 = _DAT_18321d910 ^ _DAT_18321da30;
  _DAT_18321da18 = 0xdf;
  uVar6 = (_DAT_18321d988 ^ _DAT_18138daa0) + _DAT_18321da50 + 0x842223e1;
  uVar11 = (_DAT_18321da50 ^ _UNK_18138daa8) + _DAT_18321d988 + 0xa1;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18321d988 ^ _DAT_18138daa0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18321da50 ^ _UNK_18138daa8;
  _DAT_18321dad8 =
       func_0x000189626070((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18321d988 + 0xa1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18321da50 + 0x842223e1));
  uVar6 = _DAT_18321dad8 << 1 | (ulonglong)((longlong)_DAT_18321dad8 < 0);
  _DAT_18321da90 = (_DAT_18321da90 ^ uVar6) + 0x65 ^ 0x30b2ad3545572da4;
  _DAT_18321d950 = (_DAT_18321d950 * 0x49d8dfa18ac19883 ^ _DAT_18321da90) + uVar6;
  _DAT_18321da80 = _DAT_18321d950 ^ _DAT_18321da90;
  _DAT_18321dab0 = 0x65;
  _DAT_18321dae8 = func_0x000189626070(_DAT_18321d9f0 ^ 0xffe0ff7b73ffdd5f);
  uVar11 = (ulonglong)((uint)_DAT_18321dae8 ^ 0xb9) << 0x20 | _DAT_18321dae8 >> 0x20;
  uVar6 = uVar11 >> 1 | uVar11;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           uVar11;
  _DAT_18321d990 = _DAT_18321d9a8 ^ uVar11 ^ 0xb9;
  _DAT_18321d938 = (_DAT_18321d938 ^ uVar11) + 0xb9 ^ 0xe3563b75bc1e0cb4;
  _DAT_18321dad0 = (_DAT_18321dad0 * -0xdb737fb05b182df ^ _DAT_18321d938) + uVar11;
  _DAT_18321da30 = _DAT_18321dad0 ^ _DAT_18321d938;
  _DAT_18321daa8 = 0xb9;
  _DAT_18321d990 = func_0x000189626070(_DAT_18321dab0 ^ 0xffdd007c270021c6);
  uVar6 = _DAT_18321d990 ^ 0x46;
  _DAT_18321da88 = _DAT_18321dae8 ^ uVar6 ^ 0x130;
  _DAT_18321d948 = (_DAT_18321d948 ^ uVar6) + 0x130 ^ 0xd411aba436923968;
  _DAT_18321d928 = (_DAT_18321d928 * -0x29acc782048fc6f9 ^ _DAT_18321d948) + uVar6;
  _DAT_18321da68 = _DAT_18321d928 ^ _DAT_18321d948;
  _DAT_18321da28 = 0x30;
  _DAT_18321da20 = func_0x000189626070(_DAT_18321d988 + 0x230083b4ffddff ^ 3);
  uVar6 = ((ulonglong)((uint)_DAT_18321da20 ^ 0x70) << 0x32 | _DAT_18321da20 >> 0xe) ^ 0x30;
  _DAT_18321d968 = _DAT_18321d9a0 ^ uVar6 ^ 0x90;
  _DAT_18321d928 = (_DAT_18321d928 ^ uVar6) + 0x90 ^ 0x4c3ffd313dc0f8b4;
  _DAT_18321d938 = (_DAT_18321d938 * -0x41081b08a51379eb ^ _DAT_18321d928) + uVar6;
  _DAT_18321d9f8 = _DAT_18321d938 ^ _DAT_18321d928;
  _DAT_18321d940 = 0x90;
  _DAT_18321da60 = func_0x000189626070(_DAT_18321d9a8 + 0x1f008389001dff ^ 0x54);
  uVar6 = _DAT_18321da60 >> 10 & 0xfffffffffffffc00;
  _DAT_18321d9d0 = (_DAT_18321d9d0 ^ uVar6) - 0xac ^ 0x5c22ea99a1e5e1f9;
  _DAT_18321d938 = (_DAT_18321d938 * 0x1690eedb041a1b37 ^ _DAT_18321d9d0) + uVar6;
  _DAT_18321daf0 = _DAT_18321d938 ^ _DAT_18321d9d0;
  _DAT_18321d9b0 = 0x54;
  uVar6 = (_DAT_18321da50 ^ _DAT_1808fb6c0) + _DAT_18321dae0 + 0x84222315;
  uVar11 = (_DAT_18321dae0 ^ _UNK_1808fb6c8) + _DAT_18321da50 + 0xac;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18321da50 ^ _DAT_1808fb6c0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18321dae0 ^ _UNK_1808fb6c8;
  _DAT_18321da90 =
       func_0x000189626070((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18321da50 + 0xac) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18321dae0 + 0x84222315));
  uVar6 = _DAT_18321da90 ^ 0x2040;
  uVar11 = uVar6 >> 1 | uVar6;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar6;
  uVar11 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = ((uint)bVar1 + (uint)bVar1 ^ uVar6) & 0x7fffffffffffffff;
  _DAT_18321d938 = _DAT_18321da78 ^ uVar6 ^ 0xdc;
  _DAT_18321d990 = (_DAT_18321d990 ^ uVar6) + 0xdc ^ 0x18e61af2dc48a655;
  _DAT_18321d968 = (_DAT_18321d968 * 0x54bb80cf74a75c9 ^ _DAT_18321d990) + uVar6;
  _DAT_18321daa0 = _DAT_18321d968 ^ _DAT_18321d990;
  _DAT_18321d9f8 = 0xdc;
  _DAT_18321daf8 = func_0x000189626070(_DAT_18321d9d0 + 0x20ff7ba2ffe1ff ^ 0x39);
  uVar6 = _DAT_18321daf8 - (_DAT_18321daf8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_18321daf8 ^ 0xdc;
  _DAT_18321da28 = _DAT_18321d9a0 ^ uVar6 ^ 0x130;
  _DAT_18321dac0 = (_DAT_18321dac0 ^ uVar6) + 0x130 ^ 0x69049ccbbebde262;
  _DAT_18321d9e8 = (_DAT_18321d9e8 * -0x3312e5cd2233d0a7 ^ _DAT_18321dac0) + uVar6;
  _DAT_18321dac8 = _DAT_18321d9e8 ^ _DAT_18321dac0;
  _DAT_18321da68 = _DAT_18321d990 ^ 0x130;
  _DAT_18321da10 = 0x30;
  uVar6 = (_DAT_18321da20 ^ uVar7) + _DAT_18321d9b0 + 0x842223fa;
  uVar11 = (_DAT_18321d9b0 ^ uVar12) + _DAT_18321da20 + 0x65;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18321da20 ^ uVar7;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18321d9b0 ^ uVar12;
  _DAT_18321dab0 =
       func_0x000189626070((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18321da20 + 0x65) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18321d9b0 + 0x842223fa));
  uVar6 = _DAT_18321dab0 ^ 0x65;
  _DAT_18321da18 = _DAT_18321d9c0 ^ uVar6 ^ 0x144;
  _DAT_18321d940 = (_DAT_18321d940 ^ uVar6) + 0x144 ^ 0xa828084a1297144a;
  _DAT_18321dae0 = (_DAT_18321dae0 * -0x28f313b788f5e4fd ^ _DAT_18321d940) + uVar6;
  _DAT_18321da88 = _DAT_18321dae0 ^ _DAT_18321d940;
  _DAT_18321d9e0 = 0x44;
  uVar6 = (_DAT_18321d918 ^ uVar7) + _DAT_18321d9f0 + 0x842223fa;
  uVar11 = (_DAT_18321d9f0 ^ uVar12) + _DAT_18321d918 + 0x65;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18321d918 ^ uVar7;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18321d9f0 ^ uVar12;
  _DAT_18321d990 =
       func_0x000189626070((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18321d918 + 0x65) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18321d9f0 + 0x842223fa));
  uVar6 = ((_DAT_18321d990 ^ 0x57fb) << 0x15 | _DAT_18321d990 >> 0x2b) << 0x22 |
          ((_DAT_18321d990 ^ 0x57fb) & 0x7ffffffffff) >> 9;
  _DAT_18321d980 = (_DAT_18321d980 ^ uVar6) + 0xba ^ 0xd75cac208276cb40;
  _DAT_18321d9e8 = (_DAT_18321d9e8 * -0x6886e2376005f2f3 ^ _DAT_18321d980) + uVar6;
  _DAT_18321d940 = _DAT_18321d9e8 ^ _DAT_18321d980;
  _DAT_18321d9a0 = 0xba;
  uVar6 = (_DAT_18321daa8 ^ uVar7) + _DAT_18321d940 + 0x842223fa;
  uVar11 = (_DAT_18321d940 ^ uVar12) + _DAT_18321daa8 + 0x65;
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18321daa8 ^ uVar7;
  uVar12 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18321d940 ^ uVar12;
  _DAT_18321dad8 =
       func_0x000189626070((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18321daa8 + 0x65) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18321d940 + 0x842223fa));
  uVar7 = ((_DAT_18321dad8 << 0x22 | _DAT_18321dad8 >> 0x1e) ^ 0x65) * -0x3dd58eb7bf6e9ba5;
  _DAT_18321d978 = (_DAT_18321d978 ^ uVar7) + 0x45 ^ 0xfac020788ef96c18;
  _DAT_18321daa8 = (_DAT_18321daa8 * -0x13a7f82909ddf01f ^ _DAT_18321d978) + uVar7;
  _DAT_18321d930 = _DAT_18321daa8 ^ _DAT_18321d978;
  _DAT_18321da18 = 0x45;
  uVar7 = (_DAT_18321d998 ^ _DAT_18138dab0) + _DAT_18321d980 + 0x8422239f;
  uVar12 = (_DAT_18321d980 ^ _UNK_18138dab8) + _DAT_18321d998 + 0x8a;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18321d998 ^ _DAT_18138dab0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18321d980 ^ _UNK_18138dab8;
  _DAT_18321d9d8 =
       func_0x000189626070((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18321d998 + 0x8a) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18321d980 + 0x8422239f));
  uVar7 = (_DAT_18321d9d8 & 0xfffffffff0000000) << 0x1e | _DAT_18321d9d8 >> 0x22;
  _DAT_18321dae8 = _DAT_18321da28 ^ uVar7 ^ 0x144;
  _DAT_18321dab0 = (_DAT_18321dab0 ^ uVar7) + 0x144 ^ 0x71366ae3acba8ddb;
  _DAT_18321d9c0 = (_DAT_18321d9c0 * -0x181e504c941b6511 ^ _DAT_18321dab0) + uVar7;
  _DAT_18321d978 = _DAT_18321d9c0 ^ _DAT_18321dab0;
  _DAT_18321d9f0 = 0x44;
  _DAT_18321d940 = func_0x000189626070(_DAT_18321d920 ^ 0xffe100841cffe13f);
  _DAT_18321dac8 = _DAT_18321d940 & 0x3fffffffffff;
  _DAT_18321da10 = _DAT_18321da10 ^ _DAT_18321dac8 ^ 0xa5dda0b505f97d62;
  _DAT_18321daa0 = (_DAT_18321daa0 * -0x773275e3ac3ef5d5 ^ _DAT_18321da10) + _DAT_18321dac8;
  _DAT_18321da98 = _DAT_18321daa0 ^ _DAT_18321da10;
  _DAT_18321dad8 = 0;
  uVar7 = (_DAT_18321da58 ^ _DAT_181018fb0) + _DAT_18321da50 + 0x842223fa;
  uVar12 = (_DAT_18321da50 ^ _UNK_181018fb8) + _DAT_18321da58 + 0xff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18321da58 ^ _DAT_181018fb0;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_18321da50 ^ _UNK_181018fb8;
  _DAT_18321da08 =
       func_0x000189626070((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_18321da58 + 0xff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18321da50 + 0x842223fa));
  uVar7 = _DAT_18321da08 - (_DAT_18321da08 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18321da08;
  _DAT_18321d9f0 = (_DAT_18321d9f0 ^ uVar7) + 0x20 ^ 0x9211eefa5dc62f32;
  _DAT_18321d938 = (_DAT_18321d938 * -0x608a6f32b311597d ^ _DAT_18321d9f0) + uVar7;
  _DAT_18321da88 = _DAT_18321d938 ^ _DAT_18321d9f0;
  _DAT_18321da80 = 0x20;
  uVar7 = (~_DAT_18321da00 + 0x21) *
          ((_DAT_18321da98 ^ 0x842223fa) + (ulonglong)((uint)_DAT_18321da98 & 0x842223fa) * 2);
  uVar7 = (uVar7 | _DAT_18321d928) + (uVar7 & _DAT_18321d928);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18321d990 = func_0x000189626070((uVar7 | 0x842223da) + (ulonglong)((uint)uVar7 & 0x842223da))
  ;
  _DAT_18321d928 = _DAT_18321d928 ^ _DAT_18321d990 ^ 0xde4236ac338e99b7;
  _DAT_18321da48 = (_DAT_18321da48 * -0x324f4bd1dd013771 ^ _DAT_18321d928) + _DAT_18321d990;
  _DAT_18321d978 = _DAT_18321da48 ^ _DAT_18321d928;
  _DAT_18321d920 = 0;
  uVar6 = (ulonglong)*(byte *)(unaff_RBP + 0x40);
  auVar9._8_8_ = _UNK_180145388;
  auVar9._0_8_ = uVar6 ^ 0x84222325;
  auVar10 = pshufb(auVar9 ^ _DAT_18138dac0,_DAT_1800170c0);
  uVar12 = auVar10._8_8_ + auVar10._0_8_;
  uVar7 = uVar12 + _DAT_18321d930;
  if (auVar10._4_4_ < 0) {
    uVar7 = _DAT_18321d978 ^ uVar12;
  }
  _DAT_18321d9d8 = func_0x000189626070(SUB161(auVar9 ^ _DAT_18138dac0,5) ^ uVar7);
  uVar7 = (uVar6 ^ _DAT_18321d9d8) << 0x3a | (uVar6 ^ _DAT_18321d9d8) >> 6;
  uVar6 = uVar6 | 0x30;
  _DAT_18321da88 = (_DAT_18321da88 ^ uVar7) + uVar6 ^ 0x221e4347cde6fd43;
  _DAT_18321d9e8 = (_DAT_18321d9e8 * -0x55fc0bf38f8fc479 ^ _DAT_18321da88) + uVar7;
  _DAT_18321d968 = _DAT_18321d9e8 ^ _DAT_18321da88;
  uVar7 = ~_DAT_18321d930 * ((_DAT_18321da40 ^ 0x84222330) + (_DAT_18321da40 & 0x84222330) * 2);
  uVar7 = (uVar7 | _DAT_18321d920) + (uVar7 & _DAT_18321d920);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_18321da60 = uVar6;
  _DAT_18321d9d0 = func_0x000189626070((uVar7 | 0xffffffff7bdddccf) + (uVar7 & 0xffffffff7bdddccf));
  auVar10._8_4_ = 0x15;
  auVar10._0_8_ = 0x15;
  auVar10._12_4_ = 0;
  uVar7 = SUB168(auVar10 ^ _DAT_18001a710,0);
  uVar13 = SUB164(auVar10 ^ _DAT_18001a710,0);
  lVar14 = ((ulonglong)_DAT_18138db40 * 0x15 << 0x20) + (ulonglong)uVar2 * 0x15;
  _DAT_18321dab0 =
       ((((ulonglong)_DAT_18138db00 * 0x15 << 0x20) + (ulonglong)_DAT_18138daf0 * 0x15 +
         ((ulonglong)_DAT_18138dae0 * 0x15 << 0x20) + (ulonglong)_DAT_18138dad0 * 0x15 + lVar14 +
        (ulonglong)uVar13 * (ulonglong)_DAT_18138db10 +
        ((ulonglong)uVar13 * (ulonglong)_DAT_18138db20 + (uVar7 >> 0x20) * (ulonglong)_DAT_18138db10
        << 0x20)) -
       (((ulonglong)_DAT_18138db80 * 0x15 << 0x20) + (ulonglong)uVar4 * 0x15 +
        ((ulonglong)_DAT_18138db60 * 0x15 << 0x20) + (ulonglong)uVar3 * 0x15 + lVar14 +
       (ulonglong)uVar13 * (ulonglong)uVar5 +
       ((ulonglong)uVar13 * (ulonglong)_DAT_18138dba0 + (uVar7 >> 0x20) * (ulonglong)uVar5 << 0x20))
       ) + 0x164b2d81861f52c3;
  _DAT_18321dac8 = _DAT_18321dae8 ^ _DAT_18321d9d0 ^ _DAT_18321dab0;
  _DAT_18321d9e0 = (_DAT_18321d9e0 ^ _DAT_18321d9d0) + _DAT_18321dab0 ^ 0x42e52d9152b9e8e2;
  _DAT_18321d9a8 = (_DAT_18321d9a8 * 0x5451d31c76b43815 ^ _DAT_18321d9e0) + _DAT_18321d9d0;
  _DAT_18321d928 = _DAT_18321d9a8 ^ _DAT_18321d9e0;
  *(char *)(unaff_RBP + -0x50 + _DAT_18321dab0) = (char)uVar6;
  switch(uVar8 < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9601c61 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189601caf */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189601c61(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong lVar1;
  
  FUN_18414b520(unaff_RBP + -0x30,param_2,(unaff_RBP + -0x3b) - param_2);
  lVar1 = unaff_RBP + -0x30;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar1 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x38) + 0x70))
            (*(longlong **)(unaff_RBP + 0x38),*(undefined8 *)(unaff_RBP + 0x18),lVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x9608dc7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189608dc7(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  ulonglong uVar4;
  
  uVar2 = (~param_1 + 0xe13c1300) * ((param_2 ^ 0xc565846d) + param_3 * 2);
  uVar2 = (uVar2 | in_RAX) + (uVar2 & in_RAX);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18321dae0 = func_0x000189626070((uVar2 | 0x24599692) + (ulonglong)((uint)uVar2 & 0x24599692))
  ;
  _DAT_18321d900 = (_DAT_18321d900 ^ _DAT_18321dae0 ^ 0xe17fb7ff) + 0xe17fb7ff ^ 0x6886bb62039a974;
  _DAT_18321d9c0 =
       (_DAT_18321d9c0 * 0x2aa69e5fb7e87f17 ^ _DAT_18321d900) + (_DAT_18321dae0 ^ 0xe17fb7ff);
  _DAT_18321d9e8 = _DAT_18321d9c0 ^ _DAT_18321d900;
  _DAT_18321d9a0 = 0xe17fb7ff;
  _DAT_18321d9d8 = func_0x000189626070(_DAT_18321d930 ^ 0xffe200126dffc7a5);
  _DAT_18321d9b8 = (_DAT_18321d9b8 ^ _DAT_18321d968) + 0xba6a0157 ^ 0x3be007704dea91f6;
  _DAT_18321d9f8 = (_DAT_18321d9f8 * -0x6f14f186ee3749cb ^ _DAT_18321d9b8) + _DAT_18321d968;
  _DAT_18321d930 = _DAT_18321d9f8 ^ _DAT_18321d9b8;
  _DAT_18321d910 = 0xba6a0157;
  _DAT_18321da28 = func_0x000189626070(_DAT_18321da90 + 0xff7effc69cff1eff ^ 0x5a);
  _DAT_18321da68 =
       (_DAT_18321da68 ^ _DAT_18321da28 * 0x2eca8298a64ae393) - 0xbec1ac80 ^ 0xec5e168c6e28b896;
  _DAT_18321dac0 =
       (_DAT_18321dac0 * 0x5aefc446494e077b ^ _DAT_18321da68) + _DAT_18321da28 * 0x2eca8298a64ae393;
  _DAT_18321d980 = _DAT_18321dac0 ^ _DAT_18321da68;
  _DAT_18321d9d8 = 0x413e5380;
  _DAT_18321d9e0 = func_0x000189626070(_DAT_18321d978 ^ 0xff73001625ff2031);
  uVar2 = _DAT_18321d9e0 >> 1 | _DAT_18321d9e0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_18321d9e0;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar3) *
          0x35c25048db4d944d;
  _DAT_18321d9d8 = _DAT_18321da40 ^ uVar2 ^ 0xbec1ad5f;
  _DAT_18321d9c8 = (_DAT_18321d9c8 ^ uVar2) + 0xbec1ad5f ^ 0xdbc8a961ca52dcdc;
  _DAT_18321daa8 = (_DAT_18321daa8 * -0x3c7aac9b0b2b215b ^ _DAT_18321d9c8) + uVar2;
  _DAT_18321dae0 = _DAT_18321daa8 ^ _DAT_18321d9c8;
  _DAT_18321da58 = 0xbec1ad5f;
  _DAT_18321d940 = func_0x000189626070(_DAT_18321da60 + 0xff32ffdb6a00baffU ^ 0x42);
  uVar2 = _DAT_18321d940 & 0xffffffffffffff80;
  _DAT_18321da40 = _DAT_18321da08 ^ uVar2 ^ 0x1000000df;
  _DAT_18321d970 = (_DAT_18321d970 ^ uVar2) + 0x1000000df ^ 0x1ed4fded0caf141;
  _DAT_18321da38 = (_DAT_18321da38 * -0x2eecc680bcbe36e1 ^ _DAT_18321d970) + uVar2;
  _DAT_18321da20 = _DAT_18321da38 ^ _DAT_18321d970;
  _DAT_18321da68 = 0xdf;
  uVar2 = (_DAT_18321dac8 ^ _DAT_18138d4c0) + _DAT_18321da48 + unaff_R12;
  uVar3 = (_DAT_18321da48 ^ _UNK_18138d4c8) + _DAT_18321dac8 + 0xb0718f86;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18321dac8 ^ _DAT_18138d4c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18321da48 ^ _UNK_18138d4c8;
  _DAT_18321d948 =
       func_0x000189626070((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18321dac8 + 0xb0718f86) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18321da48 + unaff_R12));
  _DAT_18321d920 = (_DAT_18321d920 ^ _DAT_18321d928) - 0xb0718f86 ^ 0xc6688aa419cbab6c;
  _DAT_18321dab0 = (_DAT_18321dab0 * 0x6001b6818f0bc2a1 ^ _DAT_18321d920) + _DAT_18321d928;
  _DAT_18321d9f8 = _DAT_18321dab0 ^ _DAT_18321d920;
  _DAT_18321d9c8 = 0x4f8e707a;
  uVar2 = func_0x000189626070(_DAT_18321d9f0 + 0xff9bffcbd3ffd2ffU ^ 0x87);
  _DAT_18321d9a0 = _DAT_18321d958 ^ uVar2 ^ 0xb0719065;
  _DAT_18321da28 = (_DAT_18321da28 ^ uVar2) + 0xb0719065 ^ 0xbe0d9f3884304064;
  _DAT_18321da70 = (_DAT_18321da70 * -0x2553403c17373a0f ^ _DAT_18321da28) + uVar2;
  _DAT_18321da90 = _DAT_18321da70 ^ _DAT_18321da28;
  _DAT_18321d938 = 0xb0719065;
  _DAT_18321da90 = func_0x000189626070(_DAT_18321dab8 ^ 0xffd9ffb653006e8c);
  _DAT_18321d9d0 =
       (_DAT_18321d9d0 ^ _DAT_18321da90 & 0x1ffffffffffff) - 0xde8dd978 ^ 0xadc7716f8b3aa8ac;
  _DAT_18321da40 =
       (_DAT_18321da40 * 0x339296f558d1afe5 ^ _DAT_18321d9d0) + (_DAT_18321da90 & 0x1ffffffffffff);
  _DAT_18321d9e0 = _DAT_18321da40 ^ _DAT_18321d9d0;
  _DAT_18321d900 = 0x21722688;
  _DAT_18321da38 = func_0x000189626070(_DAT_18321d9f8 ^ 0xe5ffc581ff6415);
  uVar2 = _DAT_18321da38 ^ 0xde8dd978;
  _DAT_18321da10 = _DAT_18321d900 ^ uVar2 ^ 0xde8dda57;
  _DAT_18321da58 = (_DAT_18321da58 ^ uVar2) + 0xde8dda57 ^ 0x9767b546ffc1037b;
  _DAT_18321da90 = (_DAT_18321da90 * -0x3cd37b9ee7e5e327 ^ _DAT_18321da58) + uVar2;
  _DAT_18321d950 = _DAT_18321da90 ^ _DAT_18321da58;
  _DAT_18321daf0 = 0xde8dda57;
  _DAT_18321d930 = func_0x000189626070(_DAT_18321da30 + 0xffc30005f9ffcaff ^ 0xaa);
  uVar3 = _UNK_18138d4d8;
  uVar2 = _DAT_18138d4d0;
  uVar1 = (_DAT_18321d930 & 0x3fffffffffffffff) * 0x347e14f89abd8a11;
  _DAT_18321daa8 = _DAT_18321da08 ^ uVar1 ^ 0x1000000df;
  _DAT_18321dac8 = (_DAT_18321dac8 ^ uVar1) + 0x1000000df ^ 0xd5e033e0145edfb;
  _DAT_18321da20 = (_DAT_18321da20 * 0xd75d2828ec3436d ^ _DAT_18321dac8) + uVar1;
  _DAT_18321d938 = _DAT_18321da20 ^ _DAT_18321dac8;
  _DAT_18321da10 = 0xdf;
  uVar1 = (_DAT_18321dae0 ^ _DAT_18138d4d0) + _DAT_18321d9a0 + 0x655d94da;
  uVar4 = (_DAT_18321d9a0 ^ _UNK_18138d4d8) + _DAT_18321dae0 + 0xba6a0157;
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18321dae0 ^ _DAT_18138d4d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18321d9a0 ^ _UNK_18138d4d8;
  _DAT_18321d918 =
       func_0x000189626070((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18321dae0 + 0xba6a0157) ^
                           (uVar1 << 0x1d | uVar1 >> 0x23) - (_DAT_18321d9a0 + 0x655d94da));
  uVar1 = (_DAT_18321d918 ^ 0xe17fb7ff) & 0x7fffffffff;
  _DAT_18321d978 = _DAT_18321d9d8 ^ uVar1 ^ 0x19be9b956;
  _DAT_18321dae8 = (_DAT_18321dae8 ^ uVar1) + 0x19be9b956 ^ 0xadd57876eada4d62;
  _DAT_18321d940 = (_DAT_18321d940 * -0x2b703975ad322423 ^ _DAT_18321dae8) + uVar1;
  _DAT_18321d928 = _DAT_18321d940 ^ _DAT_18321dae8;
  _DAT_18321da88 = 0x9be9b956;
  _DAT_18321da08 = func_0x000189626070(_DAT_18321d968 ^ 0x92ffcc85003278);
  _DAT_18321da30 = (_DAT_18321da30 ^ _DAT_18321da08) + 0x5b15b6a8 ^ 0x36b730509f8f6639;
  _DAT_18321d928 = (_DAT_18321d928 * -0x7346a56bd06d046f ^ _DAT_18321da30) + _DAT_18321da08;
  _DAT_18321dac8 = _DAT_18321d928 ^ _DAT_18321da30;
  _DAT_18321d900 = 0x5b15b6a8;
  uVar1 = (_DAT_18321dab0 ^ uVar2) + _DAT_18321da10 + 0x655d94da;
  uVar4 = (_DAT_18321da10 ^ uVar3) + _DAT_18321dab0 + 0xba6a0157;
  uVar2 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ _DAT_18321dab0 ^ uVar2;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18321da10 ^ uVar3;
  _DAT_18321da48 =
       func_0x000189626070((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18321dab0 + 0xba6a0157) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18321da10 + 0x655d94da));
  uVar2 = _DAT_18321da48 << 0x13 | _DAT_18321da48 >> 0x2d;
  _DAT_18321da20 = (_DAT_18321da20 ^ uVar2) + 0xa06a0157 ^ 0xae00b5ae31a8251;
  _DAT_18321d958 = (_DAT_18321d958 * -0x2ff8d76e16933743 ^ _DAT_18321da20) + uVar2;
  _DAT_18321daf8 = _DAT_18321d958 ^ _DAT_18321da20;
  _DAT_18321da10 = 0xa06a0157;
  uVar2 = (~_DAT_18321da68 + 0x40d402af) *
          ((_DAT_18321d930 ^ 0xdf37958d) + (ulonglong)((uint)_DAT_18321d930 & 0xdf37958d) * 2);
  uVar2 = (uVar2 | _DAT_18321da80) + (uVar2 & _DAT_18321da80);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18321da08 = func_0x000189626070((uVar2 | 0x9fe39723) + (ulonglong)((uint)uVar2 & 0x9fe39723))
  ;
  _DAT_18321da58 = _DAT_18321da70 ^ _DAT_18321da08 ^ 0x9be9b956;
  _DAT_18321d950 = (_DAT_18321d950 ^ _DAT_18321da08) + 0x9be9b956 ^ 0x86e579466f296234;
  _DAT_18321d990 = (_DAT_18321d990 * 0x6a6775f45cfaf7c1 ^ _DAT_18321d950) + _DAT_18321da08;
  _DAT_18321dae8 = _DAT_18321d990 ^ _DAT_18321d950;
  _DAT_18321da90 = 0x9be9b956;
  _DAT_18321daf8 = func_0x000189626070(_DAT_18321da70 ^ 0x2b0085e500a188);
  _DAT_18321d980 = (_DAT_18321d980 ^ _DAT_18321daf8) + 0x1e804800 ^ 0x834beb5b5cf5e7cf;
  _DAT_18321d968 = (_DAT_18321d968 * 0x4d70624446678d77 ^ _DAT_18321d980) + _DAT_18321daf8;
  _DAT_18321d928 = _DAT_18321d968 ^ _DAT_18321d980;
  _DAT_18321da90 = 0x1e804800;
  _DAT_18321da88 = func_0x000189626070(0xff54006b54807aaf);
  _DAT_18321da28 = _DAT_18321da28 ^ _DAT_18321da88 ^ 0xe17fb7ff ^ 0x5e4babf32df1acb9;
  _DAT_18321da90 =
       (_DAT_18321da90 * -0x65b3f8b940082043 ^ _DAT_18321da28) + (_DAT_18321da88 ^ 0xe17fb7ff);
  _DAT_18321da50 = _DAT_18321da90 ^ _DAT_18321da28;
  _DAT_18321dac8 = 0;
  _DAT_18321d970 = func_0x000189626070(0xffdf008495ffe187);
  uVar2 = _DAT_18321d970 ^ 0xdf;
  _DAT_18321da30 = _DAT_18321d908 ^ uVar2 ^ 0xdf;
  _DAT_18321d980 = (_DAT_18321d980 ^ uVar2) + 0xdf ^ 0xe8604ca7db473d61;
  _DAT_18321da28 = (_DAT_18321da28 * 0x2fc4a3f4f18ddbd9 ^ _DAT_18321d980) + uVar2;
  _DAT_18321d908 = _DAT_18321da28 ^ _DAT_18321d980;
  _DAT_18321d9d0 = 0xdf;
  uVar2 = (~_DAT_18321da50 + 0x4147a749) *
          ((_DAT_18321da48 ^ 0xc565846d) + (ulonglong)((uint)_DAT_18321da48 & 0xc565846d) * 2);
  uVar2 = (uVar2 | _DAT_18321da08) + (uVar2 & _DAT_18321da08);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_18321daf0 = func_0x000189626070((uVar2 | unaff_R12) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar2 = _DAT_18321daf0 << 0x2a | (_DAT_18321daf0 & 0x7fffffffffffffff) >> 0x16;
  _DAT_18321dad0 = _DAT_18321dad0 ^ uVar2 ^ 0x93f2380d851c92ca;
  _DAT_18321d980 = (_DAT_18321d980 * 0x382df40a2ee33ef3 ^ _DAT_18321dad0) + uVar2;
  _DAT_18321da58 = _DAT_18321d980 ^ _DAT_18321dad0;
  _DAT_18321d910 = 0;
  switch(0xdf < *(int *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x9609cd5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189609cd5(void)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar5;
  ulonglong unaff_R12;
  longlong *unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar3 = (**(code **)(unaff_R13 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x60) = (int)*(char *)(lVar3 + *(int *)(unaff_RBP + 0x68));
  (**(code **)(unaff_R13 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  *(undefined4 *)(unaff_RBP + 0x70) = 6;
  *(undefined8 *)(unaff_RBP + 0x60) = unaff_R14;
  uVar5 = (ulonglong)unaff_EDI;
  uVar4 = uVar5 ^ unaff_R12 ^ _DAT_18321dac0;
  lVar3 = (uVar5 ^ unaff_R12) + _DAT_18321d9d0;
  uVar6 = uVar4 + lVar3;
  uVar7 = (_DAT_18321d9d0 ^ 2) + _DAT_18321dac0 + 2;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18321d9d0 ^ 2;
  uVar4 = func_0x000189626070((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18321dac0 + 2) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  uVar8 = unaff_EDI & (uint)_DAT_180017990;
  uVar9 = unaff_EDI | (uint)_DAT_180017990;
  uVar4 = (uVar5 | 2) ^ uVar4;
  uVar4 = uVar4 << 0x3d | uVar4 >> 3;
  uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ uVar4;
  uVar6 = ((((uVar5 ^ _DAT_180017990) & 0xffffffff) * (ulonglong)_DAT_18138d7c0 +
            (((uVar5 ^ _DAT_180017990) & 0xffffffff) * (ulonglong)_DAT_18138d7d0 +
             (_DAT_180017990 >> 0x20) * (ulonglong)_DAT_18138d7c0 << 0x20) +
           ((ulonglong)uVar9 * (ulonglong)_DAT_18138d7b0 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_18138d7a0 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_18138d790 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_18138d780) +
           ((ulonglong)unaff_EDI * (ulonglong)_DAT_18138d770 << 0x20) +
           (ulonglong)unaff_EDI * (ulonglong)_DAT_18138d760) -
          (((uVar5 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_18138d840 +
           (((uVar5 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_18138d850 +
            (_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_18138d840 << 0x20) +
          ((ulonglong)uVar9 * (ulonglong)_DAT_18138d830 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_18138d820 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_18138d830 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_18138d820) +
          ((ulonglong)unaff_EDI * (ulonglong)_DAT_18138d810 << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_18138d800)) + 0x8e8606005213bb45;
  _DAT_18321d960 = _DAT_18321da78 ^ uVar4 ^ uVar6;
  _DAT_18321d978 = (_DAT_18321d978 ^ uVar4) + uVar6 ^ 0xbe2322e48511b772;
  _DAT_18321d9c8 = (_DAT_18321d9c8 * 0x198d7cdd40b3452b ^ _DAT_18321d978) + uVar4;
  _DAT_18321dab8 = _DAT_18321d9c8 ^ _DAT_18321d978;
  _DAT_18321d980 = uVar6 & 0xffffffff;
  *(int *)(unaff_RBP + 0x68) = (int)uVar6;
  iVar2 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x961258e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18961258e(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  
  uVar2 = (**(code **)(unaff_R13 + JNI->AllocObject /*0xd8*/))();
  *(undefined8 *)(unaff_RBP + 0x60) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x68) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x20);
  *(undefined4 *)(unaff_RBP + 0x78) = 0;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_EDI;
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


// ----- block @ rva 0x9612848 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189612848(void)

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


// ----- block @ rva 0x961295c -----

void FUN_18961295c(void)

{
  return;
}


// ----- block @ rva 0x9612ab2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_189612ab2(longlong param_1)

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


// ----- block @ rva 0x9628567 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189628567(void)

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


// ----- block @ rva 0x9628710 -----

void FUN_189628710(void)

{
  return;
}


// ----- block @ rva 0x9629500 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_189628b9b(void)

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


// ----- block @ rva 0x96295f6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1896295f6(void)

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


// ----- block @ rva 0x962ac57 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18962ac57(void)

{
  char cVar1;
  code *in_RAX;
  longlong *unaff_R13;
  
  (*in_RAX)();
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


// ----- block @ rva 0x962bce6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18962bce6(void)

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


// ----- block @ rva 0x962bd25 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18962bd25(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->CallObjectMethodA /*0x120*/))();
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


// ----- block @ rva 0x962c4b7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18962c4b7(void)

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


// ----- block @ rva 0x962ca2b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18962ca2b(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x962cb65 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18962cb65(void)

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

