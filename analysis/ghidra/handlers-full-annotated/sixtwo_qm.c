// ===== Lsixtwo/qm; _6397906063398c32d6aff428e641b2a3 ()V (handler @ image 185602a60, runtime 6fffed212a60) =====

void FUN_185602a60(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185602b75 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180543fc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXd (Ljava/util/function/Consumer;)Lsixtwo/qm; (handler @ image 1855b7800, runtime 6fffed1c7800) =====

void FUN_1855b7800(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x20ec2,0x510);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001855b7905 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18052f9d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXe (Lsixtwo/qp;Lcom/google/gson/JsonObject;)V (handler @ image 1855e7520, runtime 6fffed1f7520) =====

void FUN_1855e7520(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x20ec2,0x510);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001855e7613 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18053d180 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXf (Z)V (handler @ image 185622480, runtime 6fffed232480) =====

void FUN_185622480(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x20ec2,0x510);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001856224ca did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180547fa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXg ()Z (handler @ image 185622600, runtime 6fffed232600) =====

void FUN_185622600(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x20ec2,0x510);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185622647 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180548040 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXh ()Z (handler @ image 185622790, runtime 6fffed232790) =====

void FUN_185622790(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x20ec2,0x510);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001856227d7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1805480e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXi (Ljava/lang/Exception;)Ljava/lang/Exception; (handler @ image 185622930, runtime 6fffed232930) =====

undefined8 FUN_185622930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/qm; cXj ([B)Ljava/lang/String; (handler @ image 1856229c0, runtime 6fffed2329c0) =====

void FUN_1856229c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000185622a60 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1805482f0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qm; cXk (IJ)Ljava/lang/String; (handler @ image 18564adc0, runtime 6fffed25adc0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18564adc0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uRam00000001830db2b8 = func_0x000185651850(uRam00000001830db208 ^ 0x23bbcbc3f76904b3);
  uRam00000001830dad38 =
       (uRam00000001830dad38 ^ uRam00000001830db2b8) + 0xf9bc9fbcc03fefbd ^ 0x61f97f397b938440;
  uRam00000001830dad78 =
       (uRam00000001830dad78 * 0x62d82800e502274d ^ uRam00000001830dad38) + uRam00000001830db2b8;
  uRam00000001830dad58 = uRam00000001830dad78 ^ uRam00000001830dad38;
  uRam00000001830dae18 = 0xf9bc9fbcc03fefbd;
  uRam00000001830dae38 = func_0x000185651850(uRam00000001830dac50 ^ 0xf767f12430be4227);
  uRam00000001830dae98 =
       (uRam00000001830dae98 ^ uRam00000001830dae38 ^ 0x4e7ee52d33bc4b05) + 0x6611be1ba0604b54 ^
       0x580348050cb8b758;
  uRam00000001830db128 =
       (uRam00000001830db128 * -0x3f89f33732c9a623 ^ uRam00000001830dae98) +
       (uRam00000001830dae38 ^ 0x4e7ee52d33bc4b05);
  uRam00000001830dabf8 = uRam00000001830db128 ^ uRam00000001830dae98;
  uRam00000001830db2d8 = 0x6611be1ba0604b54;
  uVar5 = (uRam00000001830dab28 ^ _UNK_18054f480) + uRam00000001830db1f8 + 0x84222325;
  uVar6 = (uRam00000001830db1f8 ^ _UNK_18054f488) + uRam00000001830dab28 + 0x668eeda1a1f70ad0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830dab28 ^ _UNK_18054f480;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830db1f8 ^ _UNK_18054f488;
  uRam00000001830dacd0 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830dab28 + 0x668eeda1a1f70ad0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830db1f8 + 0x84222325));
  uRam00000001830dabc0 = uRam00000001830db1f0 * -0x588744cd760a0511;
  uRam00000001830db090 = uRam00000001830db090 + 0x9971125e5e08f530 ^ 0x3551e537af180095;
  uRam00000001830db1f0 = uRam00000001830dabc0 ^ uRam00000001830db090;
  uRam00000001830dafb0 = 0x9971125e5e08f530;
  uRam00000001830daf70 = func_0x000185651850(uRam00000001830daf18 ^ 0xa13175db0664ac20);
  uVar5 = uRam00000001830dad98 >> 1 | uRam00000001830dad98;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001830dad98;
  uRam00000001830dacc8 = uRam00000001830db1c0 ^ uVar5 ^ 0x668eeda1a1f78acf;
  uRam00000001830dab00 = (uRam00000001830dab00 ^ uVar5) + 0x668eeda1a1f78acf ^ 0x8a5ea5786b17f065;
  uRam00000001830db170 = (uRam00000001830db170 * -0x710c3c928943b5ed ^ uRam00000001830dab00) + uVar5
  ;
  uRam00000001830daf60 = uRam00000001830db170 ^ uRam00000001830dab00;
  uRam00000001830dafc8 = 0x668eeda1a1f78acf;
  uRam00000001830dacb0 = func_0x000185651850(uRam00000001830db280 + 0x84d4d0cab581dda6 ^ 0x40);
  uVar5 = uRam00000001830dacb0 * 0x7b1ae47cfc3f9a49;
  uRam00000001830db058 = uRam00000001830dac60 ^ uVar5 ^ 0x7fff;
  uRam00000001830dae08 = (uRam00000001830dae08 ^ uVar5) + 0x7fff ^ 0x4a9467d427bb50d5;
  uRam00000001830dac68 = (uRam00000001830dac68 * -0xfd9e2f7859fe59d ^ uRam00000001830dae08) + uVar5;
  uRam00000001830dafc8 = uRam00000001830dac68 ^ uRam00000001830dae08;
  uRam00000001830dad38 = 0x7fff;
  uVar5 = (uRam00000001830dab80 ^ _UNK_18054f490) + uRam00000001830db230 + 0x84222325;
  uVar6 = (uRam00000001830db230 ^ _UNK_18054f498) + uRam00000001830dab80 + 0x94f6defec7ba1aac;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830dab80 ^ _UNK_18054f490;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830db230 ^ _UNK_18054f498;
  uRam00000001830db280 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830dab80 + 0x94f6defec7ba1aac) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830db230 + 0x84222325));
  uVar5 = (uRam00000001830db280 ^ 0x94f6defec7ba1aac) * -0x2ad2c96a6329dbe5;
  uRam00000001830daf90 = (uRam00000001830daf90 ^ uVar5) + 0x6b0921013845e554 ^ 0xc6b0434289338d27;
  uRam00000001830dabe0 = (uRam00000001830dabe0 * -0x5dac6d3bf695bac3 ^ uRam00000001830daf90) + uVar5
  ;
  uRam00000001830dacb0 = uRam00000001830dabe0 ^ uRam00000001830daf90;
  uRam00000001830dadd0 = 0x6b0921013845e554;
  uVar5 = (uRam00000001830daca0 ^ _UNK_18054f4a0) + uRam00000001830dab78 + 0x84225cda;
  uVar6 = (uRam00000001830dab78 ^ _UNK_18054f4a8) + uRam00000001830daca0 + 0x94f6defec7ba1aac;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830daca0 ^ _UNK_18054f4a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830dab78 ^ _UNK_18054f4a8;
  uRam00000001830dac38 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001830daca0 + 0x94f6defec7ba1aac) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830dab78 + 0x84225cda));
  uVar5 = (ulonglong)(~(uint)uRam00000001830dac38 & 0x7fff) ^ 0x7fff;
  uRam00000001830dad30 = uRam00000001830db220 ^ uVar5 ^ 0x94f6defec7ba9aab;
  uRam00000001830db2a0 = (uRam00000001830db2a0 ^ uVar5) + 0x94f6defec7ba9aab ^ 0x65974174f596619a;
  uRam00000001830dac48 = (uRam00000001830dac48 * 0x3f788be4695a111f ^ uRam00000001830db2a0) + uVar5;
  uRam00000001830dafc8 = uRam00000001830dac48 ^ uRam00000001830db2a0;
  uRam00000001830db098 = 0x94f6defec7ba9aab;
  uVar5 = (~uRam00000001830db1d8 + 0x6b0921013845e555) *
          ((uRam00000001830db1b0 ^ 0x94f6defe4398b98e) +
          (uRam00000001830db1b0 & 0x14f6defe4398b98e) * 2);
  uVar5 = (uVar5 | uRam00000001830db1e0) + (uVar5 & uRam00000001830db1e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830dad78 =
       func_0x000185651850((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uRam00000001830db150 = uRam00000001830dab88 ^ uRam00000001830db0e0 ^ 0x7fff;
  uRam00000001830daf58 = (uRam00000001830daf58 ^ uRam00000001830db0e0) + 0x7fff ^ 0xaeccbeba29c1704c
  ;
  uRam00000001830dabc8 =
       (uRam00000001830dabc8 * -0x5b73576ba105a451 ^ uRam00000001830daf58) + uRam00000001830db0e0;
  uRam00000001830db2b0 = uRam00000001830dabc8 ^ uRam00000001830daf58;
  uRam00000001830dac08 = 0x7fff;
  uRam00000001830dabf8 = func_0x000185651850(uRam00000001830dae28 ^ 0xa56f26613b92b534);
  uVar5 = uRam00000001830dabf8 - (uRam00000001830dabf8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001830dabf8;
  uRam00000001830dad68 = (uRam00000001830dad68 ^ uVar5) + 0x5aa66a42daab4d20 ^ 0x49992b1ad364b1d6;
  uRam00000001830dace8 = (uRam00000001830dace8 * 0x346104c8c4222633 ^ uRam00000001830dad68) + uVar5;
  uRam00000001830db288 = uRam00000001830dace8 ^ uRam00000001830dad68;
  uRam00000001830db058 = 0x5aa66a42daab4d20;
  uRam00000001830dab60 = func_0x000185651850(uRam00000001830db168 ^ 0x99785ba3b3de8d5a);
  uVar5 = uRam00000001830dab60 ^ 0xffbdbfbfe07feffd;
  uRam00000001830db250 = uRam00000001830dae80 ^ uVar5 ^ 0x5fce5dd860a03b11;
  uRam00000001830db020 = (uRam00000001830db020 ^ uVar5) + 0x5fce5dd860a03b11 ^ 0xee2bc96e8a76be1b;
  uRam00000001830db1e8 = (uRam00000001830db1e8 * 0x5e86c4c70477688b ^ uRam00000001830db020) + uVar5;
  uRam00000001830db168 = uRam00000001830db1e8 ^ uRam00000001830db020;
  uRam00000001830dab00 = 0x5fce5dd860a03b11;
  uRam00000001830dab68 = func_0x000185651850(uRam00000001830db150 ^ 0xa68453dcbc1ee396);
  uVar5 = uRam00000001830dab68 - (uRam00000001830dab68 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001830dab68;
  uVar5 = uVar5 << 0xe | (uVar5 & 0x3fffffffffffffff) >> 0x32;
  uRam00000001830dadc0 = (uRam00000001830dadc0 ^ uVar5) + 0x9fad21a7605fa4e9 ^ 0xdeeacaa72212d31d;
  uRam00000001830dabc8 = (uRam00000001830dabc8 * 0x6603ad0bc3010b63 ^ uRam00000001830dadc0) + uVar5;
  uRam00000001830daea8 = uRam00000001830dabc8 ^ uRam00000001830dadc0;
  uRam00000001830db1f8 = 0x9fad21a7605fa4e9;
  uRam00000001830db1a0 = func_0x000185651850(uRam00000001830dae48 ^ 0x8def7423e41d1497);
  uRam00000001830daf70 = uRam00000001830dab98 ^ uRam00000001830db1a0 ^ 0x5fce5dd860a03b11;
  uRam00000001830dade0 =
       (uRam00000001830dad08 ^ uRam00000001830db1a0) + 0x5fce5dd860a03b11 ^ 0x226f177df8635397;
  uRam00000001830dad08 =
       (uRam00000001830dad08 * 0x262bafb5cc0f2691 ^ uRam00000001830dade0) + uRam00000001830db1a0;
  uRam00000001830dade0 = uRam00000001830dad08 ^ uRam00000001830dade0;
  uRam00000001830db208 = 0x5fce5dd860a03b11;
  uRam00000001830dae48 = func_0x000185651850(uRam00000001830dafc8 ^ 0xffdeff8424ffddbf);
  uRam00000001830dac70 = uRam00000001830dae48 ^ 0x4b229746a2e0d721;
  uRam00000001830dae90 = uRam00000001830dae90 ^ uRam00000001830dac70 ^ 0x9360d14f6a1edff8;
  uRam00000001830dad20 =
       (uRam00000001830dad20 * 0x2dd5324ff6418019 ^ uRam00000001830dae90) + uRam00000001830dac70;
  uRam00000001830dae00 = uRam00000001830dad20 ^ uRam00000001830dae90;
  uRam00000001830db250 = 0;
  uVar5 = ((uRam00000001830daef0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001830daef0 & 0x84225cda) * 2) * -uRam00000001830dae30;
  uVar5 = (uVar5 | uRam00000001830dacd8) + (uVar5 & uRam00000001830dacd8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830daf38 =
       func_0x000185651850((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam00000001830daf38 & 0xffffffffe0000000;
  uRam00000001830dae70 = uRam00000001830db098 ^ uVar5 ^ 0x7fff;
  uRam00000001830db0b0 = (uRam00000001830db0b0 ^ uVar5) + 0x7fff ^ 0x131e8c6d6c1d6500;
  uRam00000001830dabe8 = (uRam00000001830dabe8 * -0x4138120607b0358b ^ uRam00000001830db0b0) + uVar5
  ;
  uRam00000001830dad30 = uRam00000001830dabe8 ^ uRam00000001830db0b0;
  uRam00000001830db0f0 = 0x7fff;
  uRam00000001830dac80 = func_0x000185651850(uRam00000001830db1f8 ^ 0x3d13436ae3206251);
  uRam00000001830db220 =
       (uRam00000001830db220 ^ uRam00000001830db028) + 0x64360433fc01042 ^ 0x726aa87179c196f;
  uRam00000001830daf20 =
       (uRam00000001830daf20 * -0x722f8179d727657b ^ uRam00000001830db220) + uRam00000001830db028;
  uRam00000001830dacc0 = uRam00000001830daf20 ^ uRam00000001830db220;
  uRam00000001830daf40 = 0x64360433fc01042;
  uRam00000001830db2b0 = func_0x000185651850(uRam00000001830dac80 ^ 0x4b2384c8c6ae3d35);
  uRam00000001830dad58 =
       uRam00000001830dad58 ^ uRam00000001830db2b0 & 0x7fffffffffffffff ^ 0xfe1a33bad29fa3cb;
  uRam00000001830dabc0 =
       (uRam00000001830dabc0 * -0x2c5f5a32695e375b ^ uRam00000001830dad58) +
       (uRam00000001830db2b0 & 0x7fffffffffffffff);
  uRam00000001830db1a0 = uRam00000001830dabc0 ^ uRam00000001830dad58;
  uRam00000001830dab68 = 0;
  uVar5 = ((uRam00000001830db2f8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001830db2f8 & 0x84225cda) * 2) * -uRam00000001830daef8;
  uVar5 = (uVar5 | uRam00000001830dafe8) + (uVar5 & uRam00000001830dafe8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830db278 =
       func_0x000185651850((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam00000001830db278 ^ 0x7fff;
  uRam00000001830dac50 = uRam00000001830dac80 ^ uVar5 ^ 0x7fff;
  uRam00000001830dae60 = (uRam00000001830dae60 ^ uVar5) + 0x7fff ^ 0xa2977168e8be58ce;
  uRam00000001830daf58 = (uRam00000001830daf58 * -0x7546ceccd1d2e065 ^ uRam00000001830dae60) + uVar5
  ;
  uRam00000001830dac98 = uRam00000001830daf58 ^ uRam00000001830dae60;
  uRam00000001830db258 = 0x7fff;
  uVar5 = (~uRam00000001830db1f8 + 0xf19812bc002e2fbd) *
          ((uRam00000001830dad60 ^ 0xf19812bc840c0c99) +
          (uRam00000001830dad60 & 0x719812bc840c0c99) * 2);
  uVar5 = (uVar5 | uRam00000001830db1e0) + (uVar5 & uRam00000001830db1e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830dad38 =
       func_0x000185651850((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = (uRam00000001830dad38 ^ 0xf19812bc002e2fbc) << 0x13 |
          (uRam00000001830dad38 ^ 0xf19812bc002e2fbc) >> 0x2d;
  uRam00000001830dac68 = uRam00000001830dac68 ^ uVar5 ^ 0xe4cfbd6f3c0f29e8;
  uRam00000001830db1e0 = (uRam00000001830db1e0 * 0x5ecc6a810f1f931d ^ uRam00000001830dac68) + uVar5;
  uRam00000001830dac20 = uRam00000001830db1e0 ^ uRam00000001830dac68;
  uRam00000001830dadf8 = 0;
  uVar5 = (uRam00000001830dabd8 ^ 0x84225cda) + uRam00000001830dac18 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830dabd8 ^ 0x84225cda;
  uVar6 = ((uRam00000001830dac18 + uRam00000001830dabd8) * 0x2000 |
          uRam00000001830dac18 + uRam00000001830dabd8 >> 0x33) ^ uRam00000001830dac18;
  lRam00000001830dab18 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001830dabd8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830dac18 + 0x84225cda));
  uVar5 = lRam00000001830dab18 * -0xe73ab8de0726515;
  uRam00000001830dac80 = uRam00000001830dabb8 ^ uVar5 ^ 0x7fff;
  uRam00000001830dac70 = (uRam00000001830dac70 ^ uVar5) + 0x7fff ^ 0x802d1ef8da1530b9;
  uRam00000001830dab98 = (uRam00000001830dab98 * -0x204d447949bc454d ^ uRam00000001830dac70) + uVar5
  ;
  uRam00000001830dafe8 = uRam00000001830dab98 ^ uRam00000001830dac70;
  uRam00000001830db2e8 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam00000001830db018;
  lVar4 = (param_4 ^ 0x84222325) + uRam00000001830db140;
  uVar6 = uVar5 + lVar4;
  uVar7 = (uRam00000001830db140 ^ 0x7fff) + uRam00000001830db018 + 0x7fff;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830db140 ^ 0x7fff;
  uRam00000001830db1d8 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830db018 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar5 = uRam00000001830db1d8 ^ 0x7fff;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar2;
  uRam00000001830dad98 = (uRam00000001830dad98 ^ uVar5) + uVar7 ^ 0xd65d691cac26070c;
  uRam00000001830db1f0 = (uRam00000001830db1f0 * -0x3dfba2f8b17a9e4b ^ uRam00000001830dad98) + uVar5
  ;
  uRam00000001830db2c0 = uRam00000001830db1f0 ^ uRam00000001830dad98;
  uVar3 = (ulonglong)param_3;
  uVar6 = uVar7 ^ 0x84222325;
  uVar5 = ((uRam00000001830dacf0 ^ uVar6) +
          (ulonglong)((uint)uRam00000001830dacf0 & (uint)uVar6) * 2) *
          (uVar3 - lRam00000001830db1c8);
  uVar5 = (uVar5 | uRam00000001830dab10) + (uVar5 & uRam00000001830dab10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830dada0 = uVar7;
  uRam00000001830dace8 =
       func_0x000185651850((uVar6 ^ uVar3 | uVar5) +
                           (ulonglong)((uint)(uVar6 ^ uVar3) & (uint)uVar5));
  uVar5 = uRam00000001830dace8 >> 1 | uRam00000001830dace8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001830dace8;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  uVar7 = (uVar7 + uVar3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001830daea0 = (uRam00000001830daea0 ^ uVar6) + uVar7 ^ 0x96e7097dbcd1deb5;
  uRam00000001830daec0 = (uRam00000001830daec0 * 0x3d678254d0ed7ce1 ^ uRam00000001830daea0) + uVar6;
  uRam00000001830daf20 = uRam00000001830daec0 ^ uRam00000001830daea0;
  uVar3 = uVar7 & 0xffffffff;
  uVar5 = (~uRam00000001830dabb0 + 0x10e93d7a) *
          ((uRam00000001830dae20 ^ 0x54d4e510) +
          (ulonglong)((uint)uRam00000001830dae20 & 0x54d4e510) * 2);
  uVar5 = (uVar5 | uRam00000001830dac78) + (uVar5 & uRam00000001830dac78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830dacd8 = uVar3;
  uRam00000001830dabc8 =
       func_0x000185651850((uVar5 | 0x443dd869) + (ulonglong)((uint)uVar5 & 0x443dd869));
  uRam00000001830dae28 =
       (uRam00000001830dae28 ^ uRam00000001830dabc8) + 0xd0ffff7d ^ 0x5a66aa9b00e819f5;
  uRam00000001830dab78 =
       (uRam00000001830dab78 * 0x43d24f7034f6ead7 ^ uRam00000001830dae28) + uRam00000001830dabc8;
  uRam00000001830db0c0 = uRam00000001830dab78 ^ uRam00000001830dae28;
  uRam00000001830db010 = uRam00000001830db298 ^ 0xd0ffff7d;
  uRam00000001830daee8 = 0xd0ffff7d;
  uRam00000001830daea8 = func_0x000185651850(uRam00000001830db170 ^ 0x26003a6cffe841);
  uVar5 = uRam00000001830daea8 << 7 | uRam00000001830daea8 >> 0x39;
  uRam00000001830db0d0 = (uRam00000001830db0d0 ^ uVar5) - 0x494b09b2 ^ 0x779ee9bb56a2b4a7;
  uRam00000001830dae40 = (uRam00000001830dae40 * -0x78d79c66035e62d7 ^ uRam00000001830db0d0) + uVar5
  ;
  uRam00000001830db0b8 = uRam00000001830dae40 ^ uRam00000001830db0d0;
  uRam00000001830daf90 = 0xb6b4f64e;
  uVar5 = (~uRam00000001830dadb0 + 0x494b09b3) *
          ((uRam00000001830db180 ^ 0x84221566) +
          (ulonglong)((uint)uRam00000001830db180 & 0x84221566) * 2);
  uVar5 = (uVar5 | uRam00000001830daee0) + (uVar5 & uRam00000001830daee0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830dabc0 =
       func_0x000185651850((uVar5 | 0xcd691cd4) + (ulonglong)((uint)uVar5 & 0xcd691cd4));
  uVar5 = uRam00000001830dabc0 - (uRam00000001830dabc0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001830dabc0 ^ 0x494b09b2;
  uRam00000001830dad88 = uRam00000001830dabf0 ^ uVar5 ^ 0x494b3ff5;
  uRam00000001830db1b8 = (uRam00000001830db1b8 ^ uVar5) + 0x494b3ff5 ^ 0x502120b7d9342441;
  uRam00000001830db298 = (uRam00000001830db298 * -0x475a4ef59a6ef7f1 ^ uRam00000001830db1b8) + uVar5
  ;
  uRam00000001830daff0 = uRam00000001830db298 ^ uRam00000001830db1b8;
  uRam00000001830db148 = 0x494b3ff5;
  uVar5 = (uRam00000001830db218 ^ _UNK_18054f4b0) + uRam00000001830dafe8 + 0xcd691cd0;
  uVar6 = (uRam00000001830dafe8 ^ _UNK_18054f4b8) + uRam00000001830db218 + 0xb6b4f64e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830db218 ^ _UNK_18054f4b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830dafe8 ^ _UNK_18054f4b8;
  uRam00000001830dab40 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830db218 + 0xb6b4f64e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830dafe8 + 0xcd691cd0));
  uVar5 = uRam00000001830dafc0 & 0xfffffffffff00000;
  uRam00000001830daf28 = uRam00000001830dadd8 ^ uVar5 ^ 0x100003643;
  uRam00000001830daff8 = (uRam00000001830daff8 ^ uVar5) + 0x100003643 ^ 0x53b1f7a17ba9b530;
  uRam00000001830daba8 = (uRam00000001830daba8 * -0x222b5e1f63179ea1 ^ uRam00000001830daff8) + uVar5
  ;
  uRam00000001830dab70 = uRam00000001830daba8 ^ uRam00000001830daff8;
  uRam00000001830dac10 = 0x3643;
  uRam00000001830daf00 = func_0x000185651850(uRam00000001830daef8 ^ 0x41009b2e006689);
  uVar5 = (uRam00000001830daf00 * -0x1900126f0a200000 |
          uRam00000001830daf00 * -0x6c3ab8c800937851 >> 0x2b) << 0x1b |
          uRam00000001830daf00 * -0x1900126f0a200000 >> 0x25;
  uRam00000001830dacf8 = (uRam00000001830dacf8 ^ uVar5) - 0x21db620b ^ 0x95840c3f11ed7337;
  uRam00000001830daba0 = (uRam00000001830daba0 * -0x1bdb8f2d9006606b ^ uRam00000001830dacf8) + uVar5
  ;
  uRam00000001830db018 = uRam00000001830daba0 ^ uRam00000001830dacf8;
  uRam00000001830db138 = 0xde249df5;
  uRam00000001830dacd0 = func_0x000185651850(uRam00000001830daf08 + 0xffaaffa5150066ff ^ 0xd6);
  uVar5 = (uRam00000001830dacd0 ^ 0x21db620b) << 0x23 | (uRam00000001830dacd0 ^ 0x21db620b) >> 0x1d;
  uRam00000001830dae50 = uRam00000001830db050 ^ uVar5 ^ 0x21db984e;
  uRam00000001830dad50 = (uRam00000001830dad50 ^ uVar5) + 0x21db984e ^ 0xec520d436762a945;
  uRam00000001830db0e0 = (uRam00000001830db0e0 * 0x59e0d3b674965f1b ^ uRam00000001830dad50) + uVar5;
  uRam00000001830dada8 = uRam00000001830db0e0 ^ uRam00000001830dad50;
  uRam00000001830db2a0 = 0x21db984e;
  uRam00000001830dafa8 = func_0x000185651850(uRam00000001830db280 + 0x3fff87330083ff ^ 0xb0);
  uVar5 = uRam00000001830dafa8 - (uRam00000001830dafa8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001830dafa8 ^ 0xda66316;
  uRam00000001830db000 = (uRam00000001830db000 ^ uVar5) - 0xda66316 ^ 0xb0e29fc0039c8604;
  uRam00000001830dad20 = (uRam00000001830dad20 * -0x645da78374e18c41 ^ uRam00000001830db000) + uVar5
  ;
  uRam00000001830dab28 = uRam00000001830dad20 ^ uRam00000001830db000;
  uRam00000001830db170 = 0xf2599cea;
  uVar5 = (~uRam00000001830dab30 + 0xda66317) *
          ((uRam00000001830dad00 ^ 0x84221566) +
          (ulonglong)((uint)uRam00000001830dad00 & 0x84221566) * 2);
  uVar5 = (uVar5 | uRam00000001830dae18) + (uVar5 & uRam00000001830dae18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830db178 =
       func_0x000185651850((uVar5 | 0x89847670) + (ulonglong)((uint)uVar5 & 0x89847670));
  uVar5 = uRam00000001830db178 & 0x7fffffffffffffff;
  uRam00000001830daed0 = uRam00000001830dacd8 ^ uVar5 ^ 0xda69959;
  uRam00000001830dae80 = (uRam00000001830daba8 ^ uVar5) + 0xda69959 ^ 0xaf065c2bbe617573;
  uRam00000001830daba8 = (uRam00000001830daba8 * -0x2dfeeff875af398b ^ uRam00000001830dae80) + uVar5
  ;
  uRam00000001830dae80 = uRam00000001830daba8 ^ uRam00000001830dae80;
  uRam00000001830dafd0 = 0xda69959;
  uVar5 = (~uRam00000001830daeb0 + 0xf2599ceb) *
          ((uRam00000001830db1d0 ^ 0x8984ba7c) +
          (ulonglong)((uint)uRam00000001830db1d0 & 0x8984ba7c) * 2);
  uVar5 = (uVar5 | uRam00000001830dacb8) + (uVar5 & uRam00000001830dacb8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830db138 =
       func_0x000185651850((uVar5 | 0x7bdd2696) + (ulonglong)((uint)uVar5 & 0x7bdd2696));
  uVar5 = (uRam00000001830db138 ^ 0xffff9dfb) & 0x7fffffffffffffff;
  uVar6 = ((uRam00000001830db138 ^ 0xffff9dfb) & 0x7fffffffffffffff) >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar5;
  uRam00000001830dafe0 = uRam00000001830daee8 ^ uVar5 ^ 0x100003643;
  uRam00000001830dae08 = (uRam00000001830dae08 ^ uVar5) + 0x100003643 ^ 0xc9a0c60aa467edbd;
  uRam00000001830dac28 = (uRam00000001830dac28 * 0xf4565957a2b349 ^ uRam00000001830dae08) + uVar5;
  uRam00000001830dabe0 = uRam00000001830dac28 ^ uRam00000001830dae08;
  uRam00000001830dad58 = 0x3643;
  uVar5 = (uRam00000001830db1e0 ^ _UNK_18054f4c0) + uRam00000001830dac00 + 0x54dddc58;
  uVar6 = (uRam00000001830dac00 ^ _UNK_18054f4c8) + uRam00000001830db1e0 + 0x8fd905d5;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830db1e0 ^ _UNK_18054f4c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830dac00 ^ _UNK_18054f4c8;
  uRam00000001830dab28 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830db1e0 + 0x8fd905d5) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830dac00 + 0x54dddc58));
  uVar5 = (uRam00000001830dab28 ^ 0x75702d7948f20401) * -0x61f868ee802beba1;
  uRam00000001830dad58 = (uRam00000001830dad58 ^ uVar5) + 0x80d90555 ^ 0x7948b3cef8ed5eb6;
  uRam00000001830db148 = (uRam00000001830db148 * 0x2712effcc33416cd ^ uRam00000001830dad58) + uVar5;
  uRam00000001830dab50 = uRam00000001830db148 ^ uRam00000001830dad58;
  uRam00000001830db188 = 0x80d90555;
  uRam00000001830daef8 = func_0x000185651850(uRam00000001830db2a0 + 0x2f00d626ff51ff ^ 0xa7);
  uVar5 = uRam00000001830daef8 & 0x1fffffffffffff;
  uRam00000001830dadd8 = uRam00000001830daef8 ^ uVar5 ^ 0x60d90552;
  uRam00000001830dae50 = (uRam00000001830dae50 ^ uVar5) + 0x60d90552 ^ 0x99cdf006a366d232;
  uRam00000001830db210 = (uRam00000001830db210 * 0x70bf9a0ab2614e0d ^ uRam00000001830dae50) + uVar5;
  uRam00000001830db0e8 = uRam00000001830db210 ^ uRam00000001830dae50;
  uRam00000001830db2e8 = 0x60d90552;
  uRam00000001830dab50 = func_0x000185651850(uRam00000001830daf38 ^ 0xffe3007be2ffe117);
  uRam00000001830dad18 = (ulonglong)(~(uint)uRam00000001830dab50 & 0x60d90552);
  uRam00000001830dadb8 = uRam00000001830dadb8 ^ uRam00000001830dad18 ^ 0x55e7cca44577b5a7;
  uRam00000001830db260 =
       (uRam00000001830db260 * 0x7367efd98cd4d16b ^ uRam00000001830dadb8) + uRam00000001830dad18;
  uRam00000001830dad08 = uRam00000001830db260 ^ uRam00000001830dadb8;
  uRam00000001830dae00 = 0;
  uRam00000001830daf00 = func_0x000185651850(uRam00000001830dafc0 ^ 0xffed0083a2001dd8);
  uVar5 = uRam00000001830daf00 - (uRam00000001830daf00 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam00000001830daf00;
  uRam00000001830db248 = uRam00000001830daf08 ^ uVar5 ^ 0x3643;
  uRam00000001830dad18 = (uRam00000001830dad18 ^ uVar5) + 0x3643 ^ 0xd140912b3b0bcf1d;
  uRam00000001830dabd0 = (uRam00000001830dabd0 * -0x7ac863e4a7a6cef1 ^ uRam00000001830dad18) + uVar5
  ;
  uRam00000001830db178 = uRam00000001830dabd0 ^ uRam00000001830dad18;
  uRam00000001830dabb8 = 0x3643;
  uVar5 = (~uRam00000001830dad70 + 0x100000000) *
          ((uRam00000001830daba0 ^ 0x54dddc58) +
          (ulonglong)((uint)uRam00000001830daba0 & 0x54dddc58) * 2);
  uVar5 = (uVar5 | uRam00000001830db188) + (uVar5 & uRam00000001830db188);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830db1f0 =
       func_0x000185651850((uVar5 | 0xab2223a7) + (ulonglong)((uint)uVar5 & 0xab2223a7));
  uRam00000001830dad08 =
       (uRam00000001830dad08 ^ uRam00000001830db1f0 ^ 0xd0ffff7d) + 0x2f000082 ^ 0xd6dc3f9a9d681861;
  uRam00000001830dacc8 =
       (uRam00000001830dacc8 * 0x21e1c4548162e3e9 ^ uRam00000001830dad08) +
       (uRam00000001830db1f0 ^ 0xd0ffff7d);
  uRam00000001830dab38 = uRam00000001830dacc8 ^ uRam00000001830dad08;
  uRam00000001830dad10 = 0x2f000082;
  uRam00000001830dac60 = func_0x000185651850(uRam00000001830dab68 ^ 0xbbff8a29ff4acf);
  uVar5 = uRam00000001830dac60 * 0x300e27b4e9b035f3 ^ 0xd0ffff7d;
  uRam00000001830daee0 = uRam00000001830daee0 ^ uVar5 ^ 0x6e824501cfd84a25;
  uRam00000001830db218 = (uRam00000001830db218 * 0x42fe98839d032dc9 ^ uRam00000001830daee0) + uVar5;
  uRam00000001830daea8 = uRam00000001830db218 ^ uRam00000001830daee0;
  uRam00000001830db2d8 = 0;
  uRam00000001830db180 = func_0x000185651850(lRam00000001830db0c8 + 0x12ff7c1e0021ffU ^ 0xb6);
  uRam00000001830daca0 = uRam00000001830db138 ^ uRam00000001830db180 ^ 0x3643;
  uRam00000001830dae30 = (uRam00000001830dae30 ^ uRam00000001830db180) + 0x3643 ^ 0x5b9a6b936ecfe408
  ;
  uRam00000001830daec0 =
       (uRam00000001830daec0 * -0x3d8855df0908dce3 ^ uRam00000001830dae30) + uRam00000001830db180;
  uRam00000001830dae18 = uRam00000001830daec0 ^ uRam00000001830dae30;
  uRam00000001830dabf8 = 0x3643;
  uVar5 = (uRam00000001830db248 ^ _UNK_18054f4d0) + uRam00000001830db2d8 + 0x54d4e510;
  uVar6 = (uRam00000001830db2d8 ^ _UNK_18054f4d8) + uRam00000001830db248 + 0xd0f6c635;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830db248 ^ _UNK_18054f4d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001830db2d8 ^ _UNK_18054f4d8;
  uRam00000001830dab68 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830db248 + 0xd0f6c635) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830db2d8 + 0x54d4e510));
  uVar5 = (uRam00000001830dab68 ^ 0xd0f6c635) << 0x14 |
          ((uRam00000001830dab68 ^ 0xd0f6c635) & 0x7ffffffffffff) >> 0x2c;
  uRam00000001830db070 = uRam00000001830db070 ^ uVar5 ^ 0x4405f1551e1ec101;
  uRam00000001830dab58 = (uRam00000001830dab58 * -0x343226f452d75a79 ^ uRam00000001830db070) + uVar5
  ;
  uRam00000001830db240 = uRam00000001830dab58 ^ uRam00000001830db070;
  uRam00000001830dac20 = 0;
  uVar5 = (uRam00000001830db1b0 ^ 0x84221566) + uRam00000001830db090 + 0x84221566;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830db1b0 ^ 0x84221566;
  uVar6 = ((uRam00000001830db090 + uRam00000001830db1b0) * 0x2000 |
          uRam00000001830db090 + uRam00000001830db1b0 >> 0x33) ^ uRam00000001830db090;
  uRam00000001830dac68 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001830db1b0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830db090 + 0x84221566));
  uVar5 = (uRam00000001830dabd0 ^ 0x3643) & 0x7fffffffffffffff;
  uRam00000001830db078 = uRam00000001830daef8 ^ uVar5 ^ 0x3643;
  uRam00000001830dac90 = (uRam00000001830dac90 ^ uVar5) + 0x3643 ^ 0xb25011576ff7f82e;
  uRam00000001830db250 = (uRam00000001830db250 * 0x5e0e743bc95cc7af ^ uRam00000001830dac90) + uVar5;
  uRam00000001830daf28 = uRam00000001830db250 ^ uRam00000001830dac90;
  uRam00000001830db0d8 = 0x3643;
  uVar5 = uVar3 ^ 0x84222325 ^ uRam00000001830dad10;
  lVar4 = (uVar3 ^ 0x84222325) + uRam00000001830dae50;
  uVar6 = uVar5 + lVar4;
  uVar8 = (uRam00000001830dae50 ^ 0x3643) + uRam00000001830dad10 + 0x3643;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830dae50 ^ 0x3643;
  uRam00000001830dae58 =
       func_0x000185651850((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001830dad10 + 0x3643) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  lVar4 = uVar3 - ((uint)uVar7 & 0x3643) * 2;
  uRam00000001830dad38 =
       (uRam00000001830dad38 ^ uRam00000001830dae58) + lVar4 + 0x3643 ^ 0x1a7364cbec7da238;
  uRam00000001830db1c0 =
       (uRam00000001830db1c0 * -0x203fe3cb2da131d3 ^ uRam00000001830dad38) + uRam00000001830dae58;
  uRam00000001830dab20 = uRam00000001830db1c0 ^ uRam00000001830dad38;
  uRam00000001830db2a8 = lVar4 + 0x3643U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x20ec2,0x510);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018564d38f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18054daf8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1856518e0, runtime 6fffed2618e0) =====

void FUN_1856518e0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018565191c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18054f520 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qm; cXm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1856527d0, runtime 6fffed2627d0) =====

void FUN_1856527d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018565284d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18054fa60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXn (IJ)I (handler @ image 1855f3b40, runtime 6fffed203b40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1855f3b40(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uRam00000001830d98f0 = func_0x0001855fecb0(uRam00000001830d96b0 + 0x3297aa42f1a45c2 ^ 0x72);
  uVar2 = uRam00000001830d98f0 << 0x30 | uRam00000001830d98f0 >> 0x10;
  uRam00000001830d9548 = (uRam00000001830d9548 ^ uVar2) + 0xc7ffffe7f2fcbfd5 ^ 0xecded7aad8416c43;
  uRam00000001830d97d0 = (uRam00000001830d97d0 * 0xf8e6493179d6053 ^ uRam00000001830d9548) + uVar2;
  uRam00000001830d9520 = uRam00000001830d97d0 ^ uRam00000001830d9548;
  uRam00000001830d98f8 = 0xc7ffffe7f2fcbfd5;
  uVar2 = (~uRam00000001830d9828 + 0x78eef89f970a5783) *
          ((uRam00000001830d96d8 ^ 0x8282c2523c10eb60) +
          (uRam00000001830d96d8 & 0x282c2523c10eb60) * 2);
  uVar2 = (uVar2 | uRam00000001830d95f0) + (uVar2 & uRam00000001830d95f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d9848 =
       func_0x0001855fecb0((uVar2 | 0xfa6c3acdab1abce2) + (uVar2 & 0xfa6c3acdab1abce2));
  uVar2 = (uRam00000001830d9848 ^ 0xdfbf3adfc7) & 0x1ffffffffff;
  uRam00000001830d9658 = (uRam00000001830d9658 ^ uVar2) + 0xfa6c3acd2f389fc7 ^ 0xd27847749eb87b42;
  uRam00000001830d9558 = (uRam00000001830d9558 * 0x26e31692eb49ce9d ^ uRam00000001830d9658) + uVar2;
  uRam00000001830d96c8 = uRam00000001830d9558 ^ uRam00000001830d9658;
  uRam00000001830d97b8 = uRam00000001830d9570 ^ 0xfa6c3acd2f389fc7;
  uRam00000001830d9728 = 0xfa6c3acd2f389fc7;
  uVar2 = (uRam00000001830d9608 ^ _UNK_180542850) + uRam00000001830d9600 + 0x84222325;
  uVar8 = (uRam00000001830d9600 ^ _UNK_180542858) + uRam00000001830d9608 + 0x382045bd046c4211;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d9608 ^ _UNK_180542850;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d9600 ^ _UNK_180542858;
  uRam00000001830d9708 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001830d9608 + 0x382045bd046c4211) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d9600 + 0x84222325));
  uVar2 = uRam00000001830d9708 << 0xd | (uRam00000001830d9708 & 0x7fffffffffffffff) >> 0x33;
  uRam00000001830d9690 = (uRam00000001830d9690 ^ uVar2) + 0xc7dfba42fb93bdef ^ 0x5d35efa1dc9153fa;
  uRam00000001830d9850 = (uRam00000001830d9850 * -0xbbbed03261bc627 ^ uRam00000001830d9690) + uVar2;
  uRam00000001830d9630 = uRam00000001830d9850 ^ uRam00000001830d9690;
  uRam00000001830d9698 = 0xc7dfba42fb93bdef;
  uVar2 = (~uRam00000001830d9710 + 0xc7dfba42fb93bdf0) *
          ((uRam00000001830d96e8 ^ 0x382045bd804ee135) +
          (uRam00000001830d96e8 & 0x382045bd804ee135) * 2);
  uVar2 = (uVar2 | uRam00000001830d98b8) + (uVar2 & uRam00000001830d98b8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d9580 =
       func_0x0001855fecb0((uVar2 | 0xffffffff7bdd5cda) + (uVar2 & 0xffffffff7bdd5cda));
  uVar2 = (uRam00000001830d9580 & 0x7fffffffffffffff) * 0x7e1ee0e4788a07ed;
  uRam00000001830d97a0 = uRam00000001830d9550 ^ uVar2 ^ 0x7fff;
  uRam00000001830d96f0 = (uRam00000001830d96f0 ^ uVar2) + 0x7fff ^ 0xac5aa1a86edc11c8;
  uRam00000001830d9808 = (uRam00000001830d9808 * -0x390955597969d27b ^ uRam00000001830d96f0) + uVar2
  ;
  uRam00000001830d9658 = uRam00000001830d9808 ^ uRam00000001830d96f0;
  lRam00000001830d98a0 = 0x7fff;
  uRam00000001830d96c8 = func_0x0001855fecb0(lRam00000001830d9880 + 0xd523ef0b354ea2a8U ^ 0x27);
  uVar2 = uRam00000001830d96c8 >> 1 | uRam00000001830d96c8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001830d96c8;
  uRam00000001830d9620 = uRam00000001830d9598 ^ uVar2 ^ 0x7fff;
  uRam00000001830d97b8 = (uRam00000001830d97b8 ^ uVar2) + 0x7fff ^ 0xbf2d7c052249964c;
  uRam00000001830d95e0 = (uRam00000001830d95e0 * 0x4da9e1bde5ceadf3 ^ uRam00000001830d97b8) + uVar2;
  uRam00000001830d9580 = uRam00000001830d95e0 ^ uRam00000001830d97b8;
  uRam00000001830d9640 = 0x7fff;
  uVar2 = (~uRam00000001830d9700 + 0x9ec3c7eb2acabcbc) *
          ((uRam00000001830d9650 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001830d9650 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam00000001830d9740) + (uVar2 & uRam00000001830d9740);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d9828 =
       func_0x0001855fecb0((uVar2 | 0x9ec3c7ebaee89f9e) + (uVar2 & 0x9ec3c7ebaee89f9e));
  uVar2 = uRam00000001830d9828 >> 1 | uRam00000001830d9828;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001830d9828) & 0xffffffffffff8000;
  uRam00000001830d9688 = (uRam00000001830d9688 ^ uVar2) + 0x613c3814d5354345 ^ 0x737d040fd82737bc;
  uRam00000001830d9568 = (uRam00000001830d9568 * -0x48c84a867a015fa1 ^ uRam00000001830d9688) + uVar2
  ;
  uRam00000001830d96b0 = uRam00000001830d9568 ^ uRam00000001830d9688;
  uRam00000001830d9638 = 0x613c3814d5354345;
  uVar2 = (~uRam00000001830d9668 + 0x9ec3c7eb2acabcbc) *
          ((uRam00000001830d9690 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001830d9690 & 0x84225cda) * 2);
  uVar2 = (uVar2 | uRam00000001830d9730) + (uVar2 & uRam00000001830d9730);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d97b8 =
       func_0x0001855fecb0((uVar2 | 0x9ec3c7ebaee8e061) + (uVar2 & 0x9ec3c7ebaee8e061));
  uRam00000001830d97d0 = uRam00000001830d9558 ^ uRam00000001830d97b8 ^ 0x9ec3c7eb2acb3cba;
  uRam00000001830d97a0 =
       (uRam00000001830d97a0 ^ uRam00000001830d97b8) + 0x9ec3c7eb2acb3cba ^ 0x4dfb2a5839f7cc3a;
  uRam00000001830d97c0 =
       (uRam00000001830d97c0 * -0x584ebe64c4946815 ^ uRam00000001830d97a0) + uRam00000001830d97b8;
  uRam00000001830d9898 = uRam00000001830d97c0 ^ uRam00000001830d97a0;
  uRam00000001830d9860 = 0x9ec3c7eb2acb3cba;
  uRam00000001830d96b8 = func_0x0001855fecb0(uRam00000001830d9718 ^ 0x36b30759b6124489);
  uVar2 = uRam00000001830d96b8 >> 1 | uRam00000001830d96b8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001830d96b8;
  uRam00000001830d9838 = uRam00000001830d9688 ^ uVar2 ^ 0x7fff;
  uRam00000001830d9680 = (uRam00000001830d9680 ^ uVar2) + 0x7fff ^ 0x8e573a9335544568;
  uRam00000001830d9870 = (uRam00000001830d9870 * 0x45dbac715294404d ^ uRam00000001830d9680) + uVar2;
  uRam00000001830d9618 = uRam00000001830d9870 ^ uRam00000001830d9680;
  uRam00000001830d96a0 = 0x7fff;
  uRam00000001830d9840 = func_0x0001855fecb0(uRam00000001830d97f0 + 0x160392d915c4261a ^ 0xf5);
  uVar2 = (uRam00000001830d9840 ^ 0xffffffeffffcbfd7) * 0x3b72bdcb63e7b5d9;
  uRam00000001830d96d0 = uRam00000001830d9840 ^ uVar2 ^ 0xc26c3ab522355f9c;
  uRam00000001830d9670 = (uRam00000001830d9670 ^ uVar2) + 0xc26c3ab522355f9c ^ 0x3b018994edce748f;
  uRam00000001830d97c0 = (uRam00000001830d97c0 * 0x3dda1b826583f109 ^ uRam00000001830d9670) + uVar2;
  uRam00000001830d9680 = uRam00000001830d97c0 ^ uRam00000001830d9670;
  uRam00000001830d9770 = 0xc26c3ab522355f9c;
  uVar2 = (~uRam00000001830d97f0 + 0xfa6c3acd2f389fc8) *
          ((uRam00000001830d9848 ^ 0xc7ffffe776de9cf0) +
          (uRam00000001830d9848 & 0x47ffffe776de9cf0) * 2);
  uVar2 = (uVar2 | uRam00000001830d9680) + (uVar2 & uRam00000001830d9680);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d9848 =
       func_0x0001855fecb0((uVar2 | 0x3d93c52a59e60337) + (uVar2 & 0x3d93c52a59e60337));
  uVar2 = uRam00000001830d9710 >> 1 | uRam00000001830d9710;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ~((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           uRam00000001830d9710) & 0xc7ffffe7f2fcbfd5;
  uRam00000001830d98e0 = (uRam00000001830d98e0 ^ uVar2) + 0x3d93c52addc42012 ^ 0xfb85ca2aaf1c9b35;
  uRam00000001830d95c0 = (uRam00000001830d95c0 * -0x5cf802d954ee1dab ^ uRam00000001830d98e0) + uVar2
  ;
  uRam00000001830d96f0 = uRam00000001830d95c0 ^ uRam00000001830d98e0;
  uRam00000001830d9888 = 0x3d93c52addc42012;
  uVar2 = (uRam00000001830d95e0 ^ _UNK_180542860) + uRam00000001830d9680 + 0x3d93c52a59e60337;
  uVar8 = (uRam00000001830d9680 ^ _UNK_180542868) + uRam00000001830d95e0 + 0x84d8758a44713f8a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d95e0 ^ _UNK_180542860;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d9680 ^ _UNK_180542868;
  uRam00000001830d96a0 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001830d95e0 + 0x84d8758a44713f8a) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001830d9680 + 0x3d93c52a59e60337));
  uVar2 = uRam00000001830d96a0 ^ 0x3d93c52addc42012;
  uRam00000001830d9768 = uRam00000001830d9748 ^ uVar2 ^ 0xc26c3ab522355f9c;
  uRam00000001830d98f8 = (uRam00000001830d98f8 ^ uVar2) + 0xc26c3ab522355f9c ^ 0x5543bc8a0e200384;
  uRam00000001830d9850 = (uRam00000001830d9850 * 0x45750962cf0d732b ^ uRam00000001830d98f8) + uVar2;
  uRam00000001830d98b8 = uRam00000001830d9850 ^ uRam00000001830d98f8;
  uRam00000001830d9740 = 0xc26c3ab522355f9c;
  uRam00000001830d9868 = func_0x0001855fecb0(uRam00000001830d9690 + 0xffc40083c5ffddff ^ 0x7a);
  uVar2 = (uRam00000001830d9868 & 0xffffffffffffffe0) -
          (uRam00000001830d9868 >> 1 & 0x5555555555555550);
  uVar2 = (uVar2 & 0x3333333333333330) + (uVar2 >> 2 & 0x3333333333333330);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f07) * 0x101010101010101 >> 0x38) << 3 ^
          uRam00000001830d9868 & 0xffffffffffffffe0;
  uRam00000001830d98e8 = uRam00000001830d95d8 ^ uVar2 ^ 0x7fff;
  uRam00000001830d97a0 = (uRam00000001830d97a0 ^ uVar2) + 0x7fff ^ 0x16a2fb87cc108ea1;
  uRam00000001830d97e0 = (uRam00000001830d97e0 * -0x412c63e1066170d5 ^ uRam00000001830d97a0) + uVar2
  ;
  uRam00000001830d9648 = uRam00000001830d97e0 ^ uRam00000001830d97a0;
  uRam00000001830d98b0 = 0x7fff;
  uVar2 = (uRam00000001830d9748 ^ _UNK_180542870) + uRam00000001830d97e8 + 0xc7ffffe776de9cf0;
  uVar8 = (uRam00000001830d97e8 ^ _UNK_180542878) + (uRam00000001830d9748 - 1);
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d9748 ^ _UNK_180542870;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d97e8 ^ _UNK_180542878;
  uRam00000001830d9600 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830d9748 - 1) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001830d97e8 + 0xc7ffffe776de9cf0));
  uVar2 = (uRam00000001830d9600 & 0xffff) << 0x1f | uRam00000001830d9600 >> 0x21;
  uRam00000001830d97a0 = (uRam00000001830d97a0 ^ uVar2) + 0x380000180d03402a ^ 0xea307b5119e167ad;
  uRam00000001830d9878 = (uRam00000001830d9878 * -0x692585858bbf0cbd ^ uRam00000001830d97a0) + uVar2
  ;
  uRam00000001830d96b0 = uRam00000001830d9878 ^ uRam00000001830d97a0;
  uRam00000001830d9540 = 0x380000180d03402a;
  uRam00000001830d96d8 = func_0x0001855fecb0(uRam00000001830d9818 ^ 0xbacc3505aa38bcde);
  uVar2 = (uRam00000001830d96d8 ^ 0xf6baa3791debb8f2) << 0x3e |
          (uRam00000001830d96d8 ^ 0xf6baa3791debb8f2) >> 2;
  uRam00000001830d95d0 = uRam00000001830d95d0 ^ uVar2 ^ 0x602861712c4380f6;
  uRam00000001830d9748 = (uRam00000001830d9748 * 0x636f93ebb2d5ba53 ^ uRam00000001830d95d0) + uVar2;
  uRam00000001830d9848 = uRam00000001830d9748 ^ uRam00000001830d95d0;
  uRam00000001830d9890 = 0;
  uVar2 = (uRam00000001830d9870 ^ 0x84225cda) + uRam00000001830d98b0 + 0x84225cda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d9870 ^ 0x84225cda;
  uVar8 = ((uRam00000001830d98b0 + uRam00000001830d9870) * 0x2000 |
          uRam00000001830d98b0 + uRam00000001830d9870 >> 0x33) ^ uRam00000001830d98b0;
  uRam00000001830d97f0 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001830d9870 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d98b0 + 0x84225cda));
  uVar2 = uRam00000001830d97f0 >> 1 | uRam00000001830d97f0;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001830d97f0) & 0xfffffffffffff;
  uRam00000001830d9548 = uRam00000001830d98f8 ^ uVar2 ^ 0x7fff;
  uRam00000001830d9860 = (uRam00000001830d9860 ^ uVar2) + 0x7fff ^ 0x9878df1ff3c63d08;
  uRam00000001830d9760 = (uRam00000001830d9760 * -0x5ea4d34f4dbf748f ^ uRam00000001830d9860) + uVar2
  ;
  uRam00000001830d9620 = uRam00000001830d9760 ^ uRam00000001830d9860;
  uRam00000001830d9658 = 0x7fff;
  uVar2 = (uRam00000001830d9680 ^ 0x84225cda) + uRam00000001830d98d0 + 0x84225cda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d9680 ^ 0x84225cda;
  uVar8 = ((uRam00000001830d98d0 + uRam00000001830d9680) * 0x2000 |
          uRam00000001830d98d0 + uRam00000001830d9680 >> 0x33) ^ uRam00000001830d98d0;
  uRam00000001830d95d0 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001830d9680 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d98d0 + 0x84225cda));
  uVar2 = uRam00000001830d95d0 ^ 0x7fff;
  uRam00000001830d9588 = uRam00000001830d9768 ^ uVar2 ^ 0x7fff;
  uRam00000001830d9678 = (uRam00000001830d9678 ^ uVar2) + 0x7fff ^ 0xa9282d8408772de7;
  uRam00000001830d9858 = (uRam00000001830d9858 * 0x578fbd48bb2d06a7 ^ uRam00000001830d9678) + uVar2;
  uRam00000001830d9540 = uRam00000001830d9858 ^ uRam00000001830d9678;
  uRam00000001830d9828 = 0x7fff;
  uVar2 = (~uRam00000001830d9790 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam00000001830d9568) +
          ((param_4 ^ 0x84222325) & uRam00000001830d9568) * 2);
  uVar2 = (uVar2 | uRam00000001830d9550) + (uVar2 & uRam00000001830d9550);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d96d8 =
       func_0x0001855fecb0((param_4 ^ 0x84225cda | uVar2) + (uVar2 & (param_4 ^ 0x84225cda)));
  uVar3 = (uint)param_4 & 0x7fff;
  uVar8 = (ulonglong)uVar3;
  uRam00000001830d98a8 = (uRam00000001830d98a8 ^ uRam00000001830d96d8) + uVar8 ^ 0xb09615455151c1d0;
  uRam00000001830d95c0 =
       (uRam00000001830d95c0 * 0x121eef9b87f17a67 ^ uRam00000001830d98a8) + uRam00000001830d96d8;
  uRam00000001830d9720 = uRam00000001830d95c0 ^ uRam00000001830d98a8;
  uVar2 = uVar8 ^ 0x84222325 ^ uRam00000001830d9590;
  uVar6 = param_3 ^ uRam00000001830d98d8;
  lVar5 = (uVar8 ^ 0x84222325) + uRam00000001830d98d8;
  lVar4 = uRam00000001830d9590 + param_3;
  uVar7 = uVar2 + lVar5;
  uVar9 = uVar6 + lVar4;
  uVar2 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar2;
  uVar6 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar6;
  uRam00000001830d95d8 = uVar8;
  uRam00000001830d9768 =
       func_0x0001855fecb0((uVar6 << 0x1d | uVar6 >> 0x23) - lVar4 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar5);
  uVar8 = ~uRam00000001830d9768 & uVar8;
  uVar2 = uVar8 >> 1 | uVar8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((ulonglong)
           (0x40 - (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
           << 7 ^ uVar8) & 0x3ffffffff;
  uVar3 = uVar3 ^ param_3;
  uVar6 = (ulonglong)uVar3;
  uRam00000001830d9648 = (uRam00000001830d9648 ^ uVar2) + uVar6 ^ 0xef6aeeaba441f403;
  uRam00000001830d9520 = (uRam00000001830d9520 * 0x5f5df7c66f7bd007 ^ uRam00000001830d9648) + uVar2;
  uRam00000001830d95a8 = uRam00000001830d9520 ^ uRam00000001830d9648;
  uVar2 = (uRam00000001830d95f8 ^ _UNK_180542880) + uRam00000001830d97b8 + 0x1741666a;
  uVar8 = (uRam00000001830d97b8 ^ _UNK_180542888) + uRam00000001830d95f8 + 0xbb20ecbc;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d95f8 ^ _UNK_180542880;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d97b8 ^ _UNK_180542888;
  uRam00000001830d9508 = uVar6;
  uRam00000001830d97c8 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830d95f8 + 0xbb20ecbc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d97b8 + 0x1741666a));
  uRam00000001830d9730 =
       (uRam00000001830d9730 ^ uRam00000001830d97c8 ^ 0x9363454f) + 0xbb63edff ^ 0x325b3ada3cccc999;
  uRam00000001830d9858 =
       (uRam00000001830d9858 * -0x5bc6980661e1bb09 ^ uRam00000001830d9730) +
       (uRam00000001830d97c8 ^ 0x9363454f);
  uRam00000001830d9550 = uRam00000001830d9858 ^ uRam00000001830d9730;
  uRam00000001830d9840 = 0xbb63edff;
  uVar2 = (uRam00000001830d9890 ^ _UNK_180542890) + uRam00000001830d96b0 + 0x56c9d3ed;
  uVar8 = (uRam00000001830d96b0 ^ _UNK_180542898) + uRam00000001830d9890 + 0xf90c12e7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d9890 ^ _UNK_180542890;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d96b0 ^ _UNK_180542898;
  uRam00000001830d95d8 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830d9890 + 0xf90c12e7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d96b0 + 0x56c9d3ed));
  uRam00000001830d9678 =
       (uRam00000001830d9678 ^ uRam00000001830d9508) + 0x2be7e22f ^ 0xda8731a4b7a6f6b0;
  uRam00000001830d97d0 =
       (uRam00000001830d97d0 * 0x4028db884dae215d ^ uRam00000001830d9678) + uRam00000001830d9508;
  uRam00000001830d96e0 = uRam00000001830d97d0 ^ uRam00000001830d9678;
  uRam00000001830d97d8 = 0x2be7e22f;
  uVar2 = (~uRam00000001830d9680 + 0x180a24a4) *
          ((uRam00000001830d96e8 ^ 0x8422664b) +
          (ulonglong)((uint)uRam00000001830d96e8 & 0x8422664b) * 2);
  uVar2 = (uVar2 | uRam00000001830d97e8) + (uVar2 & uRam00000001830d97e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d9668 =
       func_0x0001855fecb0((uVar2 | 0x9c2842e8) + (ulonglong)((uint)uVar2 & 0x9c2842e8));
  uVar2 = uRam00000001830d9668 << 0x2d | uRam00000001830d9668 >> 0x13;
  uRam00000001830d9630 = uRam00000001830d96a0 ^ uVar2 ^ 0x180a6a11;
  uRam00000001830d9688 = (uRam00000001830d9688 ^ uVar2) + 0x180a6a11 ^ 0xe5b5f5b63996111d;
  uRam00000001830d9528 = (uRam00000001830d9528 * 0x4708ca85902d538f ^ uRam00000001830d9688) + uVar2;
  uRam00000001830d9790 = uRam00000001830d9528 ^ uRam00000001830d9688;
  uRam00000001830d96b8 = 0x180a6a11;
  uVar2 = (uRam00000001830d9748 ^ _UNK_1805428a0) + uRam00000001830d9788 + 0x9c284934;
  uVar8 = (uRam00000001830d9788 ^ _UNK_1805428a8) + uRam00000001830d9748 + 0xe7f5db5d;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d9748 ^ _UNK_1805428a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d9788 ^ _UNK_1805428a8;
  uRam00000001830d97a0 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830d9748 + 0xe7f5db5d) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d9788 + 0x9c284934));
  uRam00000001830d9690 = uRam00000001830d9610 ^ uRam00000001830d97a0 ^ 0x10000456e;
  uRam00000001830d9640 =
       (uRam00000001830d9640 ^ uRam00000001830d97a0) + 0x10000456e ^ 0x6f6a74d7a2320e1a;
  uRam00000001830d9678 =
       (uRam00000001830d9678 * -0x40e76dc1e4783749 ^ uRam00000001830d9640) + uRam00000001830d97a0;
  uRam00000001830d9780 = uRam00000001830d9678 ^ uRam00000001830d9640;
  uRam00000001830d9528 = 0x456e;
  uVar2 = (uRam00000001830d95c8 ^ _UNK_1805428b0) + uRam00000001830d9538 + 0x84222325;
  uVar8 = (uRam00000001830d9538 ^ _UNK_1805428b8) + uRam00000001830d95c8 + 0x6318eb40;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d95c8 ^ _UNK_1805428b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d9538 ^ _UNK_1805428b8;
  uRam00000001830d98e8 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830d95c8 + 0x6318eb40) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d9538 + 0x84222325));
  uRam00000001830d98d0 =
       (uRam00000001830d98d0 ^ uRam00000001830d98e8) - 0x6318eb40 ^ 0x1cc6489846e0e58a;
  uRam00000001830d9760 =
       (uRam00000001830d9760 * 0x26df500f2c0ab4d7 ^ uRam00000001830d98d0) + uRam00000001830d98e8;
  uRam00000001830d95e8 = uRam00000001830d9760 ^ uRam00000001830d98d0;
  uRam00000001830d9728 = 0x9ce714c0;
  uRam00000001830d9500 = func_0x0001855fecb0(lRam00000001830d98a0 + 0xff7d00df0b0039ffU ^ 0xaf);
  uVar2 = uRam00000001830d9500 - (uRam00000001830d9500 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001830d9500;
  uVar2 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar8;
  uRam00000001830d97a0 = uRam00000001830d9878 ^ uVar8 ^ 0x631930ae;
  uRam00000001830d9518 = (uRam00000001830d9518 ^ uVar8) + 0x631930ae ^ 0xfc8f344e59153f8a;
  uRam00000001830d9718 = (uRam00000001830d9718 * 0x7294136df97efe9b ^ uRam00000001830d9518) + uVar8;
  uRam00000001830d9790 = uRam00000001830d9718 ^ uRam00000001830d9518;
  uRam00000001830d96b0 = 0x631930ae;
  uVar2 = (~uRam00000001830d9690 + 0x9ce714c1) *
          ((uRam00000001830d98e0 ^ 0xe73b138b) +
          (ulonglong)((uint)uRam00000001830d98e0 & 0xe73b138b) * 2);
  uVar2 = (uVar2 | uRam00000001830d96e0) + (uVar2 & uRam00000001830d96e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d9610 =
       func_0x0001855fecb0((uVar2 | 0x7bdc074b) + (ulonglong)((uint)uVar2 & 0x7bdc074b));
  uVar2 = (ulonglong)(~(uint)uRam00000001830d9610 & 0x631930ae);
  uRam00000001830d9608 = uRam00000001830d97c8 ^ uVar2 ^ 0x10000456e;
  uRam00000001830d9580 = (uRam00000001830d9580 ^ uVar2) + 0x10000456e ^ 0xe13c9d4b0db48951;
  uRam00000001830d97c0 = (uRam00000001830d97c0 * -0x2a81c0e65c4d3091 ^ uRam00000001830d9580) + uVar2
  ;
  uRam00000001830d9798 = uRam00000001830d97c0 ^ uRam00000001830d9580;
  uRam00000001830d96d8 = 0x456e;
  uVar2 = (uRam00000001830d9590 ^ _UNK_1805428c0) + uRam00000001830d9538 + 0x84222325;
  uVar8 = (uRam00000001830d9538 ^ _UNK_1805428c8) + uRam00000001830d9590 + 0xba956eb0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d9590 ^ _UNK_1805428c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d9538 ^ _UNK_1805428c8;
  uRam00000001830d9770 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830d9590 + 0xba956eb0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d9538 + 0x84222325));
  uRam00000001830d95e0 =
       (uRam00000001830d95e0 ^ uRam00000001830d9770) - 0xba956eb0 ^ 0xb387ee84fea8dc8e;
  uRam00000001830d96f8 =
       (uRam00000001830d96f8 * -0x4f31e9fb4b301aa9 ^ uRam00000001830d95e0) + uRam00000001830d9770;
  uRam00000001830d9640 = uRam00000001830d96f8 ^ uRam00000001830d95e0;
  uRam00000001830d9630 = 0x456a9150;
  uVar2 = (~uRam00000001830d97e8 + 0x456a9151) *
          ((uRam00000001830d97c0 ^ 0x3eb7973b) +
          (ulonglong)((uint)uRam00000001830d97c0 & 0x3eb7973b) * 2);
  uVar2 = (uVar2 | uRam00000001830d97d8) + (uVar2 & uRam00000001830d97d8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d96a0 =
       func_0x0001855fecb0((uVar2 | 0x7bdd066b) + (ulonglong)((uint)uVar2 & 0x7bdd066b));
  uVar2 = (uRam00000001830d96a0 ^ 0xffffb55e) & 0xfffffffffffff;
  uVar8 = ((uRam00000001830d96a0 ^ 0xffffb55e) & 0xfffffffffffff) >> 1 | uVar2;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar2;
  uRam00000001830d95d0 = uRam00000001830d98e8 ^ uVar2 ^ 0x10000456e;
  uRam00000001830d98f8 = (uRam00000001830d98f8 ^ uVar2) + 0x10000456e ^ 0x2f6d03e0d5304362;
  uRam00000001830d97e0 = (uRam00000001830d97e0 * -0x5a540196bda52adf ^ uRam00000001830d98f8) + uVar2
  ;
  uRam00000001830d9770 = uRam00000001830d97e0 ^ uRam00000001830d98f8;
  uRam00000001830d9760 = 0x456e;
  uVar2 = (uRam00000001830d97b0 ^ _UNK_1805428d0) + uRam00000001830d95c8 + 0x3f41ceda;
  uVar8 = (uRam00000001830d95c8 ^ _UNK_1805428d8) + uRam00000001830d97b0 + 0x2be7e22f;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d97b0 ^ _UNK_1805428d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830d95c8 ^ _UNK_1805428d8;
  uRam00000001830d98b0 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830d97b0 + 0x2be7e22f) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d95c8 + 0x3f41ceda));
  uVar2 = uRam00000001830d98b0 & 0xbb63edff;
  uRam00000001830d9518 = uRam00000001830d9778 ^ uVar2 ^ 0xe74bd02e;
  uRam00000001830d98d8 = (uRam00000001830d98d8 ^ uVar2) + 0xe74bd02e ^ 0xcf5093572ed66fa6;
  uRam00000001830d9668 = (uRam00000001830d9668 * 0x51c262968336f275 ^ uRam00000001830d98d8) + uVar2;
  uRam00000001830d9740 = uRam00000001830d9668 ^ uRam00000001830d98d8;
  uRam00000001830d9758 = 0xe74bd02e;
  uRam00000001830d9788 = func_0x0001855fecb0(uRam00000001830d9560 + 0x13ffec8aff99ff ^ 0xa9);
  uRam00000001830d97d0 =
       (uRam00000001830d97d0 ^ uRam00000001830d9788) + 0x90840fd0 ^ 0x7d980d16c6487ec4;
  uRam00000001830d97a8 =
       (uRam00000001830d97a8 * -0x535bc4368d02ad59 ^ uRam00000001830d97d0) + uRam00000001830d9788;
  uRam00000001830d9818 = uRam00000001830d97a8 ^ uRam00000001830d97d0;
  uRam00000001830d96a8 = 0x90840fd0;
  uVar2 = (~uRam00000001830d9870 + 0x56c7c05f) *
          ((uRam00000001830d9608 ^ 0x14a62cf5) +
          (ulonglong)((uint)uRam00000001830d9608 & 0x14a62cf5) * 2);
  uVar2 = (uVar2 | uRam00000001830d96d0) + (uVar2 & uRam00000001830d96d0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d9528 =
       func_0x0001855fecb0((uVar2 | 0x4261ecab) + (ulonglong)((uint)uVar2 & 0x4261ecab));
  uVar2 = uRam00000001830d9528 ^ 0x90840fd0;
  uRam00000001830d95f8 = uRam00000001830d9898 ^ uVar2 ^ 0xe74bd02e;
  uRam00000001830d9500 = (uRam00000001830d9500 ^ uVar2) + 0xe74bd02e ^ 0xc0e64ed6344a4e6c;
  uRam00000001830d9550 = (uRam00000001830d9550 * -0xd5a78756cc4a641 ^ uRam00000001830d9500) + uVar2;
  uRam00000001830d9760 = uRam00000001830d9550 ^ uRam00000001830d9500;
  uRam00000001830d9590 = 0xe74bd02e;
  uVar2 = (~uRam00000001830d9560 + 0xe74bd02f) *
          ((uRam00000001830d9820 ^ 0x6369f30b) +
          (ulonglong)((uint)uRam00000001830d9820 & 0x6369f30b) * 2);
  uVar2 = (uVar2 | uRam00000001830d97a0) + (uVar2 & uRam00000001830d97a0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d96c8 =
       func_0x0001855fecb0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam00000001830d9728 = uRam00000001830d96c8 ^ 0xe74bd02e;
  uRam00000001830d97c8 = uRam00000001830d97c8 ^ uRam00000001830d9728 ^ 0x59f84da09d1943d4;
  uRam00000001830d9710 =
       (uRam00000001830d9710 * 0x7592c85410845f39 ^ uRam00000001830d97c8) + uRam00000001830d9728;
  uRam00000001830d9540 = uRam00000001830d9710 ^ uRam00000001830d97c8;
  uRam00000001830d96b8 = uRam00000001830d9590;
  uRam00000001830d9618 = 0;
  uRam00000001830d9610 = func_0x0001855fecb0(uRam00000001830d9580 ^ 0x65ff7bcaffdd21);
  uVar2 = uRam00000001830d9610 & 0x1fffffffff;
  uRam00000001830d9560 = uRam00000001830d9640 ^ uVar2 ^ 0x456e;
  uRam00000001830d96d8 = (uRam00000001830d96d8 ^ uVar2) + 0x456e ^ 0x693c874b2472b0e7;
  uRam00000001830d97f8 = (uRam00000001830d97f8 * -0x61e5d51380f33979 ^ uRam00000001830d96d8) + uVar2
  ;
  uRam00000001830d9770 = uRam00000001830d97f8 ^ uRam00000001830d96d8;
  uRam00000001830d9608 = 0x456e;
  uRam00000001830d9550 = func_0x0001855fecb0(uRam00000001830d9678 ^ 0xffeeff401d00b58b);
  uRam00000001830d9808 =
       (uRam00000001830d9808 ^ uRam00000001830d95b8) + 0x449c1200 ^ 0x99d049adcf67a4e2;
  uRam00000001830d9638 =
       (uRam00000001830d9638 * 0x1b3ebe3117164017 ^ uRam00000001830d9808) + uRam00000001830d95b8;
  uRam00000001830d9650 = uRam00000001830d9638 ^ uRam00000001830d9808;
  uRam00000001830d9678 = 0x449c1200;
  uVar2 = (~uRam00000001830d9858 + 0x449c1201) *
          ((uRam00000001830d9768 ^ 0x3f41ceda) +
          (ulonglong)((uint)uRam00000001830d9768 & 0x3f41ceda) * 2);
  uVar2 = (uVar2 | uRam00000001830d9890) + (uVar2 & uRam00000001830d9890);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001830d9840 =
       func_0x0001855fecb0((uVar2 | 0x7bdddcda) + (ulonglong)((uint)uVar2 & 0x7bdddcda));
  uVar2 = uRam00000001830d9840 - (uRam00000001830d9840 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001830d9840;
  uRam00000001830d96a8 = uRam00000001830d96a8 ^ uVar2 ^ 0x9d5e182004b11882;
  uRam00000001830d97a8 = (uRam00000001830d97a8 * -0x584967322fcd99f ^ uRam00000001830d96a8) + uVar2;
  uRam00000001830d9588 = uRam00000001830d97a8 ^ uRam00000001830d96a8;
  uRam00000001830d9660 = 0;
  uVar2 = (uRam00000001830d9898 ^ 0x8422664b) + uRam00000001830d9870 + 0x8422664b;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001830d9898 ^ 0x8422664b;
  uVar8 = ((uRam00000001830d9870 + uRam00000001830d9898) * 0x2000 |
          uRam00000001830d9870 + uRam00000001830d9898 >> 0x33) ^ uRam00000001830d9870;
  uRam00000001830d9538 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001830d9898 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001830d9870 + 0x8422664b));
  uRam00000001830d97c8 = uRam00000001830d96e8 ^ uRam00000001830d9538 ^ 0x456e;
  uRam00000001830d95c0 = (uRam00000001830d95c0 ^ uRam00000001830d9538) + 0x456e ^ 0x56f71c7d81dd9988
  ;
  uRam00000001830d97a0 =
       (uRam00000001830d97a0 * 0x4078184b52290d81 ^ uRam00000001830d95c0) + uRam00000001830d9538;
  uRam00000001830d9710 = uRam00000001830d97a0 ^ uRam00000001830d95c0;
  uRam00000001830d9770 = 0x456e;
  uRam00000001830d98b8 = func_0x0001855fecb0(uRam00000001830d97b8 + 0xffd9ff7bb5001dff ^ 0x66);
  uVar2 = uRam00000001830d98b8 ^ 0x456e;
  uRam00000001830d98e8 = uRam00000001830d9780 ^ uVar2 ^ 0x456e;
  uRam00000001830d9840 = (uRam00000001830d9840 ^ uVar2) + 0x456e ^ 0xc0a767a4aff32f46;
  uRam00000001830d96a8 = (uRam00000001830d96a8 * -0x76964b366958d49f ^ uRam00000001830d9840) + uVar2
  ;
  uRam00000001830d9780 = uRam00000001830d96a8 ^ uRam00000001830d9840;
  uRam00000001830d9540 = 0x456e;
  uVar2 = uVar6 ^ 0x84222325 ^ uRam00000001830d9700;
  lVar4 = (uVar6 ^ 0x84222325) + uRam00000001830d9708;
  uVar8 = uVar2 + lVar4;
  uVar7 = (uRam00000001830d9708 ^ 0x456e) + uRam00000001830d9700 + 0x456e;
  uVar2 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2;
  uVar8 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001830d9708 ^ 0x456e;
  uRam00000001830d9720 =
       func_0x0001855fecb0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830d9700 + 0x456e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  uVar8 = uRam00000001830d9720 * 0x1e4d91237b92843f;
  uVar2 = uVar8 >> 1 | uVar8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar8;
  lVar4 = uVar6 - (uVar3 & 0x456e) * 2;
  uRam00000001830d95b8 = (uRam00000001830d95b8 ^ uVar8) + lVar4 + 0x456e ^ 0x10b308aa48c0f5fd;
  uRam00000001830d9508 = (uRam00000001830d9508 * -0x73ba035d23dba259 ^ uRam00000001830d95b8) + uVar8
  ;
  uRam00000001830d9630 = uRam00000001830d9508 ^ uRam00000001830d95b8;
  uRam00000001830d95f8 = lVar4 + 0x456eU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x20ec2,0x510);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001855f6461 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1805409f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/qm; cXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1855fed40, runtime 6fffed20ed40) =====

void FUN_1855fed40(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001855fed8b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1805429c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/qm; cXp (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1855ffd50, runtime 6fffed20fd50) =====

void FUN_1855ffd50(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001855ffdd9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180542f80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



