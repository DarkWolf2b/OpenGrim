// ===== Lsixtwo/B; _584b1d00d1b697f771c40bf5c46eca61 ()V (handler @ image 190712700, runtime 6ffff8322700) =====

void FUN_190712700(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001907127e8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d31ef0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/B; bV (Lsixtwo/lC;)V (handler @ image 190700400, runtime 6ffff8310400) =====

void FUN_190700400(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2fde,0xaa);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001907004f6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d2cc40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/B; dY ()V (handler @ image 1906fff70, runtime 6ffff830ff70) =====

void FUN_1906fff70(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x0001906fff90 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d2ca30 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/B; dk (DDLsixtwo/mA;)Z (handler @ image 190720210, runtime 6ffff8330210) =====

void FUN_190720210(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2fde,0xaa);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019072031b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d33ed0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/B; dn ()F (handler @ image 19072ce40, runtime 6ffff833ce40) =====

void FUN_19072ce40(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00019072ce65 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d38190 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/B; fi ()V (handler @ image 19072d060, runtime 6ffff833d060) =====

void FUN_19072d060(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00019072d080 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d38270 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/B; fj (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 19072d370, runtime 6ffff833d370) =====

undefined8 FUN_19072d370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/B; fk ([B)Ljava/lang/String; (handler @ image 19072d400, runtime 6ffff833d400) =====

void FUN_19072d400(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00019072d4a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d38540 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/B; fl (IJ)Ljava/lang/String; (handler @ image 190757f90, runtime 6ffff8367f90) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190757f90(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (uRam0000000183476870 ^ _UNK_182d3fd50) + uRam0000000183476638 + 0xf1deda06c66b0fd9;
  uVar4 = (uRam0000000183476638 ^ _UNK_182d3fd58) + uRam0000000183476870 + 0x7637c612488487f7;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476870 ^ _UNK_182d3fd50;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183476638 ^ _UNK_182d3fd58;
  uRam0000000183476940 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183476870 + 0x7637c612488487f7) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183476638 + 0xf1deda06c66b0fd9));
  uVar3 = (uRam0000000183476940 ^ 0x24f07d189d434000) & 0xffffffffffffc000;
  uRam0000000183476588 = (uRam0000000183476588 ^ uVar3) + 0xf7ffde164acdafff ^ 0x9910c2aaef03eb03;
  uRam00000001834764b0 = (uRam00000001834764b0 * 0x5f2cd8ee2ca81dd1 ^ uRam0000000183476588) + uVar3;
  uRam0000000183476558 = uRam00000001834764b0 ^ uRam0000000183476588;
  uRam00000001834769f0 = 0xf7ffde164acdafff;
  uVar3 = (~uRam00000001834768b0 + 0x97e4975431bfbde2) *
          ((uRam0000000183476368 ^ 0xc6676e2315314874) +
          (uRam0000000183476368 & 0x46676e2315314874) * 2);
  uVar3 = (uVar3 | uRam0000000183476a28) + (uVar3 & uRam0000000183476a28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834765d8 =
       func_0x00019075f070((uVar3 | 0x5183f977248ef595) + (uVar3 & 0x5183f977248ef595));
  uVar3 = uRam00000001834765d8 >> 1 | uRam00000001834765d8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((ulonglong)
           (0x40 - (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
           << 7 ^ uRam00000001834765d8) & 0x1ffffffff;
  uRam00000001834765e8 = (uRam00000001834765e8 ^ uVar3) + 0x5183f977a0acd6b0 ^ 0xb0f2541de7beeb69;
  uRam00000001834763c8 = (uRam00000001834763c8 * -0x36920ace2fd57d9b ^ uRam00000001834765e8) + uVar3
  ;
  uRam0000000183476598 = uRam00000001834763c8 ^ uRam00000001834765e8;
  uRam0000000183476608 = 0x5183f977a0acd6b0;
  uVar3 = (uRam0000000183476400 ^ _UNK_182d3fd60) + uRam0000000183476560 + 0x84222325;
  uVar4 = (uRam0000000183476560 ^ _UNK_182d3fd68) + uRam0000000183476400 + 0x94d9bb8ba5d55340;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476400 ^ _UNK_182d3fd60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183476560 ^ _UNK_182d3fd68;
  uRam0000000183476428 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183476400 + 0x94d9bb8ba5d55340) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183476560 + 0x84222325));
  uRam0000000183476650 =
       (uRam0000000183476650 ^ uRam0000000183476428 ^ 0x94d9bb8ba5d55340) + 0x6b2644745a2aacc0 ^
       0x9d2fb3e2f7cc0a35;
  uRam0000000183476368 =
       (uRam0000000183476368 * 0x1430a04febd63fc5 ^ uRam0000000183476650) +
       (uRam0000000183476428 ^ 0x94d9bb8ba5d55340);
  uRam00000001834763f8 = uRam0000000183476368 ^ uRam0000000183476650;
  uRam0000000183476ae8 = 0x6b2644745a2aacc0;
  uVar3 = (uRam00000001834767f0 ^ _UNK_182d3fd70) + uRam0000000183476618 + 0x84225cda;
  uVar4 = (uRam0000000183476618 ^ _UNK_182d3fd78) + uRam00000001834767f0 + 0x94d9bb8ba5d55340;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001834767f0 ^ _UNK_182d3fd70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183476618 ^ _UNK_182d3fd78;
  uRam00000001834765a0 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001834767f0 + 0x94d9bb8ba5d55340) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183476618 + 0x84225cda));
  uVar3 = (uRam00000001834765a0 ^ 0x94d9bb8ba5d57fff) << 0x21 |
          (uRam00000001834765a0 ^ 0x94d9bb8ba5d57fff) >> 0x1f;
  uRam0000000183476498 = uRam00000001834769f8 ^ uVar3 ^ 0x94d9bb8ba5d5d33f;
  uRam0000000183476808 = (uRam0000000183476808 ^ uVar3) + 0x94d9bb8ba5d5d33f ^ 0x336ba0cbfe135f48;
  uRam00000001834766d8 = (uRam00000001834766d8 * -0x47686f7e8cdfc7b9 ^ uRam0000000183476808) + uVar3
  ;
  uRam00000001834767e0 = uRam00000001834766d8 ^ uRam0000000183476808;
  uRam0000000183476ab8 = 0x94d9bb8ba5d5d33f;
  uRam0000000183476360 = func_0x00019075f070(uRam0000000183476938 ^ 0x3ec4cd4ad51852a8);
  uVar3 = uRam0000000183476360 & 0x7fffffffffffffff;
  uRam0000000183476a80 = uRam00000001834764b0 ^ uVar3 ^ 0x7fff;
  uRam00000001834767d0 = (uRam00000001834767d0 ^ uVar3) + 0x7fff ^ 0xef52e45489c127bd;
  uRam0000000183476a28 = (uRam0000000183476a28 * 0x319304ddde3dffa1 ^ uRam00000001834767d0) + uVar3;
  uRam0000000183476930 = uRam0000000183476a28 ^ uRam00000001834767d0;
  uRam0000000183476a08 = 0x7fff;
  uVar3 = (~uRam00000001834766b8 + 0xe1c3ebe105f4622a) *
          ((uRam0000000183476778 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183476778 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183476428) + (uVar3 & uRam0000000183476428);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476818 =
       func_0x00019075f070((uVar3 | 0xe1c3ebe181d6410c) + (uVar3 & 0xe1c3ebe181d6410c));
  uRam00000001834767f8 =
       (uRam00000001834767f8 ^ uRam0000000183476818) + 0x1e3c141efa0b9dd7 ^ 0x7e10b0dcfe3a2c5c;
  uRam0000000183476940 =
       (uRam0000000183476940 * -0x5e3e37d4058601d9 ^ uRam00000001834767f8) + uRam0000000183476818;
  uRam0000000183476aa8 = uRam0000000183476940 ^ uRam00000001834767f8;
  uRam0000000183476a20 = 0x1e3c141efa0b9dd7;
  uRam0000000183476320 = func_0x00019075f070(uRam0000000183476330 + 0xdf3e3e7eb16ad2e0 ^ 0xbb);
  uVar3 = uRam0000000183476320 & 0x7fffffffffffffff;
  uRam0000000183476410 = uRam00000001834767e8 ^ uVar3 ^ 0xe1c3ebe105f4e228;
  uRam0000000183476670 = (uRam0000000183476670 ^ uVar3) + 0xe1c3ebe105f4e228 ^ 0x72d930dbfdb6d920;
  uRam00000001834763e0 = (uRam00000001834763e0 * 0x441d764225f89fbb ^ uRam0000000183476670) + uVar3;
  uRam0000000183476308 = uRam00000001834763e0 ^ uRam0000000183476670;
  uRam00000001834767d8 = 0xe1c3ebe105f4e228;
  uVar3 = (~uRam0000000183476420 + 0x1e3c141efa0b9dd8) *
          ((uRam0000000183476960 ^ 0xe1c3ebe181d6c10d) +
          (uRam0000000183476960 & 0x61c3ebe181d6c10d) * 2);
  uVar3 = (uVar3 | uRam00000001834764f0) + (uVar3 & uRam00000001834764f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834769d8 =
       func_0x00019075f070((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar3 = (uRam00000001834769d8 ^ 0x2b6e21b3f7147798) & 0x7fffffffffffffff;
  uRam0000000183476378 = uRam0000000183476890 ^ uVar3 ^ 0x7fff;
  uRam0000000183476a50 = (uRam0000000183476a50 ^ uVar3) + 0x7fff ^ 0x99d13ff168ea7f1c;
  uRam0000000183476650 = (uRam0000000183476650 * -0x6272b03ce4b8e527 ^ uRam0000000183476a50) + uVar3
  ;
  uRam00000001834764c0 = uRam0000000183476650 ^ uRam0000000183476a50;
  uRam0000000183476438 = 0x7fff;
  uVar3 = (~uRam0000000183476768 + 0xd2e502f00faf0231) *
          ((uRam0000000183476320 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183476320 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam00000001834769e8) + (uVar3 & uRam00000001834769e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476380 =
       func_0x00019075f070((uVar3 | 0xd2e502f08b8d5eea) + (uVar3 & 0xd2e502f08b8d5eea));
  uVar3 = ((uRam0000000183476380 ^ 0x29304e77168fdd0) & 0x3ffffffffffffff) * -0xc78c01de9bcde9d;
  uRam0000000183476398 = uRam00000001834764b0 ^ uVar3 ^ 0xd2e502f00faf822f;
  uRam0000000183476ae8 = (uRam0000000183476ae8 ^ uVar3) + 0xd2e502f00faf822f ^ 0x523b82b274be0842;
  uRam0000000183476448 = (uRam0000000183476448 * 0x63400e8e308ad50d ^ uRam0000000183476ae8) + uVar3;
  uRam0000000183476ab8 = uRam0000000183476448 ^ uRam0000000183476ae8;
  uRam00000001834769b0 = -0x2d1afd0ff0507dd1;
  uVar3 = (uRam0000000183476590 ^ _UNK_182d3fd80) + uRam00000001834764a8 + 0xd2e502f08b8da10a;
  uVar4 = (uRam00000001834764a8 ^ _UNK_182d3fd88) + uRam0000000183476590 + 0x2d1afd0ff050fdd0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476590 ^ _UNK_182d3fd80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001834764a8 ^ _UNK_182d3fd88;
  uRam0000000183476860 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183476590 + 0x2d1afd0ff050fdd0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001834764a8 + 0xd2e502f08b8da10a));
  uVar3 = uRam0000000183476860 & 0xd2e502f00faf822f;
  uRam0000000183476560 = uRam0000000183476ad0 ^ uVar3 ^ 0x7fff;
  uRam0000000183476a18 = (uRam0000000183476a18 ^ uVar3) + 0x7fff ^ 0x305600d06e179318;
  uRam0000000183476aa0 = (uRam0000000183476aa0 * -0x5a4c9c3d7e2750d7 ^ uRam0000000183476a18) + uVar3
  ;
  uRam0000000183476848 = uRam0000000183476aa0 ^ uRam0000000183476a18;
  uRam0000000183476898 = 0x7fff;
  uVar3 = (uRam0000000183476598 ^ _UNK_182d3fd90) + uRam0000000183476578 + 0xf7ffde16ceef8cda;
  uVar4 = (uRam0000000183476578 ^ _UNK_182d3fd98) + uRam0000000183476598 + 0x5183f977a0acd6b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476598 ^ _UNK_182d3fd90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183476578 ^ _UNK_182d3fd98;
  uRam0000000183476910 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183476598 + 0x5183f977a0acd6b0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183476578 + 0xf7ffde16ceef8cda));
  uVar3 = (uRam0000000183476910 ^ 0xf7ffff77eaedffff) << 0x3d |
          (uRam0000000183476910 ^ 0xf7ffff77eaedffff) >> 3;
  uRam0000000183476958 = uRam00000001834767e8 ^ uVar3 ^ 0x4983d78deb7a86af;
  uRam0000000183476898 = (uRam0000000183476898 ^ uVar3) + 0x4983d78deb7a86af ^ 0x108a378dce1e821b;
  uRam0000000183476598 = (uRam0000000183476598 * -0x7bc7948cc5d53655 ^ uRam0000000183476898) + uVar3
  ;
  uRam00000001834765f0 = uRam0000000183476598 ^ uRam0000000183476898;
  uRam0000000183476828 = 0x4983d78deb7a86af;
  uRam0000000183476598 = func_0x00019075f070(uRam0000000183476590 ^ 0xdf2993ae15e0c311);
  uRam00000001834764f8 =
       (uRam00000001834764f8 ^ uRam0000000183476598 & 0x7fffffffffe00000) + 0x5183d816008c86b0 ^
       0x85661d176e4bcee2;
  uRam0000000183476650 =
       (uRam0000000183476650 * -0x2731d8a66ef91e15 ^ uRam00000001834764f8) +
       (uRam0000000183476598 & 0x7fffffffffe00000);
  uRam00000001834766c8 = uRam0000000183476650 ^ uRam00000001834764f8;
  uRam0000000183476608 = 0x5183d816008c86b0;
  uRam0000000183476a58 = func_0x00019075f070(uRam0000000183476a98 ^ 0x3ab4869ef68b2503);
  uVar3 = uRam0000000183476a58 ^ 0xa77fb76deb797d6f;
  uRam0000000183476ac0 = uRam0000000183476710 ^ uVar3 ^ 0x4983d78deb7a86af;
  uRam0000000183476328 = (uRam0000000183476328 ^ uVar3) + 0x4983d78deb7a86af ^ 0x429bb751d899f31b;
  uRam00000001834765c0 = (uRam00000001834765c0 * -0x9bc7e057b36a81d ^ uRam0000000183476328) + uVar3;
  uRam00000001834764b0 = uRam00000001834765c0 ^ uRam0000000183476328;
  uRam00000001834765c8 = 0x4983d78deb7a86af;
  uVar3 = (~uRam0000000183476568 + 0x4983d78deb7a86b0) *
          ((uRam00000001834768d0 ^ 0x4983d78d6f58a58a) +
          (uRam00000001834768d0 & 0x4983d78d6f58a58a) * 2);
  uVar3 = (uVar3 | uRam0000000183476308) + (uVar3 & uRam0000000183476308);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476428 =
       func_0x00019075f070((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam0000000183476538 = uRam0000000183476428 ^ 0xb0e67cafefa7aba1;
  uVar3 = uRam0000000183476538 >> 1 | uRam0000000183476538;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam0000000183476538 =
       (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       uRam0000000183476538;
  uVar3 = uRam0000000183476538 >> 1 | uRam0000000183476538;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam0000000183476538 =
       0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
       uRam0000000183476538;
  uRam0000000183476588 = uRam0000000183476588 ^ uRam0000000183476538 ^ 0x35f59ee0776b6a77;
  uRam00000001834763b0 =
       (uRam00000001834763b0 * -0x124b51af761ab459 ^ uRam0000000183476588) + uRam0000000183476538;
  uRam0000000183476440 = uRam00000001834763b0 ^ uRam0000000183476588;
  uRam0000000183476640 = 0;
  uRam0000000183476428 = func_0x00019075f070(uRam0000000183476388 ^ 0xffc4007baa001ddf);
  uVar3 = uRam0000000183476428 << 0x15 | uRam0000000183476428 >> 0x2b;
  uRam00000001834763a8 = uRam0000000183476328 ^ uVar3 ^ 0x7fff;
  uRam0000000183476320 = (uRam0000000183476320 ^ uVar3) + 0x7fff ^ 0x8be167a2c3f90694;
  uRam0000000183476490 = (uRam0000000183476490 * -0x7d01982fef79e5ef ^ uRam0000000183476320) + uVar3
  ;
  uRam0000000183476728 = uRam0000000183476490 ^ uRam0000000183476320;
  uRam00000001834764d8 = 0x7fff;
  uRam0000000183476480 = func_0x00019075f070(uRam0000000183476670 + 0x2772ffcedadef007 ^ 0xd8);
  uRam0000000183476730 =
       (uRam0000000183476730 ^ uRam00000001834764c0) + 0x80021e9b5325000 ^ 0x4bcf04d0216e0e19;
  uRam0000000183476350 =
       (uRam0000000183476350 * 0x2dfaa8978cb559e3 ^ uRam0000000183476730) + uRam00000001834764c0;
  uRam00000001834764e0 = uRam0000000183476350 ^ uRam0000000183476730;
  uRam0000000183476950 = 0x80021e9b5325000;
  uVar3 = (uRam00000001834769f8 ^ 0x84225cda) + uRam0000000183476440 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001834769f8 ^ 0x84225cda;
  uVar4 = ((uRam0000000183476440 + uRam00000001834769f8) * 0x2000 |
          uRam0000000183476440 + uRam00000001834769f8 >> 0x33) ^ uRam0000000183476440;
  uRam0000000183476348 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) - uRam00000001834769f8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183476440 + 0x84225cda));
  uVar3 = uRam0000000183476348 * 0x12d798a5c5756a59;
  uRam0000000183476908 = uRam00000001834769f8 ^ uVar3 ^ 0x7fff;
  uRam0000000183476848 = (uRam0000000183476848 ^ uVar3) + 0x7fff ^ 0x5a4f26515473f0ce;
  uRam0000000183476a00 = (uRam0000000183476a00 * 0x7f3e98938db00ba3 ^ uRam0000000183476848) + uVar3;
  uRam0000000183476600 = uRam0000000183476a00 ^ uRam0000000183476848;
  uRam0000000183476610 = 0x7fff;
  uRam00000001834769d0 = func_0x00019075f070(uRam00000001834764b0 ^ 0xffdf00841d002107);
  uVar3 = uRam00000001834769d0 & 0x1ffffffffffff ^ 0xf1deda0642492cfc;
  uRam0000000183476950 = uRam0000000183476950 ^ uVar3 ^ 0xa132daf537e807bc;
  uRam0000000183476628 = (uRam0000000183476628 * -0x66b349ecedcd0acf ^ uRam0000000183476950) + uVar3
  ;
  uRam0000000183476670 = uRam0000000183476628 ^ uRam0000000183476950;
  uRam0000000183476490 = 0;
  uVar3 = ((uRam0000000183476938 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183476938 & 0x84225cda) * 2) * -uRam0000000183476870;
  uVar3 = (uVar3 | uRam0000000183476568) + (uVar3 & uRam0000000183476568);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476378 =
       func_0x00019075f070((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar4 = uRam0000000183476378 ^ 0x7fff;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar4) & 0x7fffffffffffffff;
  uRam0000000183476678 = uRam0000000183476a68 ^ uVar3 ^ 0x7fff;
  uRam00000001834769d8 = (uRam00000001834769d8 ^ uVar3) + 0x7fff ^ 0x7c06cd54b5844632;
  uRam0000000183476a60 = (uRam0000000183476a60 * 0x10ece2d7383f256d ^ uRam00000001834769d8) + uVar3;
  uRam0000000183476400 = uRam0000000183476a60 ^ uRam00000001834769d8;
  uRam00000001834767b0 = 0x7fff;
  uVar3 = (~uRam0000000183476508 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183476958) +
          ((param_4 ^ 0x84222325) & uRam0000000183476958) * 2);
  uVar3 = (uVar3 | uRam0000000183476860) + (uVar3 & uRam0000000183476860);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476410 =
       func_0x00019075f070((param_4 ^ 0x84225cda | uVar3) + (uVar3 & (param_4 ^ 0x84225cda)));
  uVar3 = uRam0000000183476410 >> 1 | uRam0000000183476410;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183476410;
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001834769c0 = (ulonglong)uVar2;
  uRam0000000183476450 = (uRam0000000183476450 ^ uVar3) + uRam00000001834769c0 ^ 0x356836d7b59cf644;
  uRam00000001834764e8 = (uRam00000001834764e8 * 0x371c3377b668e21d ^ uRam0000000183476450) + uVar3;
  uRam0000000183476570 = uRam00000001834764e8 ^ uRam0000000183476450;
  uVar4 = uRam00000001834769c0 ^ 0x84222325;
  uVar3 = ((uRam00000001834766b0 ^ uVar4) +
          (ulonglong)((uint)uRam00000001834766b0 & (uint)uVar4) * 2) *
          (param_3 - uRam0000000183476910);
  uVar3 = (uVar3 | uRam0000000183476728) + (uVar3 & uRam0000000183476728);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar4 = uVar4 ^ param_3;
  uRam00000001834768c0 =
       func_0x00019075f070((uVar4 | uVar3) + (ulonglong)((uint)uVar4 & (uint)uVar3));
  uRam00000001834765c8 = (ulonglong)(uVar2 ^ param_3);
  uRam0000000183476740 =
       (uRam0000000183476740 ^ uRam00000001834768c0 & 0x3ffffffff) + uRam00000001834765c8 ^
       0x2442663eb1c6e6cc;
  uRam0000000183476700 =
       (uRam0000000183476700 * 0x1b0191701042fc85 ^ uRam0000000183476740) +
       (uRam00000001834768c0 & 0x3ffffffff);
  uRam0000000183476388 = uRam0000000183476700 ^ uRam0000000183476740;
  uVar3 = (~uRam00000001834767f0 + 0x4b317f66) *
          ((uRam00000001834763c0 ^ 0x397080b0) +
          (ulonglong)((uint)uRam00000001834763c0 & 0x397080b0) * 2);
  uVar3 = (uVar3 | uRam0000000183476758) + (uVar3 & uRam0000000183476758);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834768c0 =
       func_0x00019075f070((uVar3 | 0x7241ffd5) + (ulonglong)((uint)uVar3 & 0x7241ffd5));
  uRam00000001834765e8 =
       (uRam00000001834765e8 ^ uRam00000001834768c0 ^ 0xf663dcf0) + 0xff73fff5 ^ 0xdc08b5dda3b37237;
  uRam0000000183476938 =
       (uRam0000000183476938 * -0x2f328832f5055e2f ^ uRam00000001834765e8) +
       (uRam00000001834768c0 ^ 0xf663dcf0);
  uRam0000000183476928 = uRam0000000183476938 ^ uRam00000001834765e8;
  uRam0000000183476588 = 0xff73fff5;
  uVar3 = (uRam0000000183476648 ^ _UNK_182d3fda0) + uRam00000001834763b8 + 0xc2da3057;
  uVar4 = (uRam00000001834763b8 ^ _UNK_182d3fda8) + uRam0000000183476648 + 0xf9da64cb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476648 ^ _UNK_182d3fda0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001834763b8 ^ _UNK_182d3fda8;
  uRam00000001834768e8 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183476648 + 0xf9da64cb) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001834763b8 + 0xc2da3057));
  uRam0000000183476a88 =
       (uRam0000000183476a88 ^ uRam00000001834768e8) + 0xbf2277b9 ^ 0xba2867bd16d1f9a0;
  uRam0000000183476900 =
       (uRam0000000183476900 * -0x603ed992a3a72aa5 ^ uRam0000000183476a88) + uRam00000001834768e8;
  uRam00000001834764e0 = uRam0000000183476900 ^ uRam0000000183476a88;
  uRam0000000183476828 = 0xbf2277b9;
  uVar3 = (uRam00000001834767c8 ^ _UNK_182d3fdb0) + uRam0000000183476790 + 0x84222325;
  uVar4 = (uRam0000000183476790 ^ _UNK_182d3fdb8) + uRam00000001834767c8 + 0xe24d86c1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001834767c8 ^ _UNK_182d3fdb0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183476790 ^ _UNK_182d3fdb8;
  uRam0000000183476800 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam00000001834767c8 + 0xe24d86c1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183476790 + 0x84222325));
  uRam0000000183476718 = uRam00000001834765e0 * 0x732dbf6789f07269;
  uRam0000000183476808 = uRam0000000183476808 - 0xe24d86c1 ^ 0x549be0d1288498b4;
  uRam00000001834765e0 = uRam0000000183476718 ^ uRam0000000183476808;
  uRam0000000183476860 = 0x1db2793f;
  uVar3 = (~uRam00000001834768b8 + 0xe24d86c2) *
          ((uRam0000000183476840 ^ 0x84226294) +
          (ulonglong)((uint)uRam0000000183476840 & 0x84226294) * 2);
  uVar3 = (uVar3 | uRam0000000183476648) + (uVar3 & uRam0000000183476648);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834765b0 =
       func_0x00019075f070((uVar3 | 0x666fe455) + (ulonglong)((uint)uVar3 & 0x666fe455));
  uVar3 = uRam00000001834765b0 & 0xfffffffffe000000;
  uRam00000001834764c8 = uRam00000001834763f0 ^ uVar3 ^ 0xe24dc872;
  uRam00000001834766d0 = (uRam00000001834766d0 ^ uVar3) + 0xe24dc872 ^ 0x9075ae3a92c588e9;
  uRam0000000183476880 = (uRam0000000183476880 * -0x1461749735f91245 ^ uRam00000001834766d0) + uVar3
  ;
  uRam00000001834768b8 = uRam0000000183476880 ^ uRam00000001834766d0;
  uRam0000000183476530 = 0xe24dc872;
  uVar3 = (~uRam00000001834765d8 + 0x1db27940) *
          ((uRam00000001834765a8 ^ 0x666feb57) +
          (ulonglong)((uint)uRam00000001834765a8 & 0x666feb57) * 2);
  uVar3 = (uVar3 | uRam00000001834764d0) + (uVar3 & uRam00000001834764d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476580 =
       func_0x00019075f070((uVar3 | 0x7bdd9268) + (ulonglong)((uint)uVar3 & 0x7bdd9268));
  uVar3 = uRam0000000183476580 - (uRam0000000183476580 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183476580;
  uRam00000001834769d0 = uRam0000000183476420 ^ uVar3 ^ 0x1000041b1;
  uRam00000001834769f8 = (uRam00000001834769f8 ^ uVar3) + 0x1000041b1 ^ 0xd00db8a69e74f212;
  uRam00000001834767e8 = (uRam00000001834767e8 * 0x70bf99d8a16b6d6d ^ uRam00000001834769f8) + uVar3;
  uRam0000000183476740 = uRam00000001834767e8 ^ uRam00000001834769f8;
  uRam00000001834769a8 = 0x41b1;
  uVar3 = (~uRam0000000183476648 + 0xc8b23ff5) *
          ((uRam0000000183476438 ^ 0x84226294) +
          (ulonglong)((uint)uRam0000000183476438 & 0x84226294) * 2);
  uVar3 = (uVar3 | uRam00000001834768a0) + (uVar3 & uRam00000001834768a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476818 =
       func_0x00019075f070((uVar3 | 0x4c905d60) + (ulonglong)((uint)uVar3 & 0x4c905d60));
  uVar3 = uRam0000000183476818 ^ 0xc8b27ff5;
  uRam0000000183476970 = uRam00000001834766d8 ^ uVar3 ^ 0xc8b281a5;
  uRam0000000183476950 = (uRam0000000183476950 ^ uVar3) + 0xc8b281a5 ^ 0x34e87c83e06886ad;
  uRam00000001834769f8 = (uRam00000001834769f8 * 0xede16ca5ed87b2d ^ uRam0000000183476950) + uVar3;
  uRam0000000183476348 = uRam00000001834769f8 ^ uRam0000000183476950;
  uRam0000000183476460 = 0xc8b281a5;
  uRam0000000183476ab8 = func_0x00019075f070(uRam00000001834766f8 ^ 0xffde006b8c00c430);
  uVar3 = uRam0000000183476ab8 >> 1 | uRam0000000183476ab8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam0000000183476ab8;
  uRam00000001834766f0 = uRam0000000183476480 ^ uVar3 ^ 0x1000041b1;
  uRam0000000183476518 = (uRam0000000183476518 ^ uVar3) + 0x1000041b1 ^ 0xfc58417506d5e6a5;
  uRam0000000183476630 = (uRam0000000183476630 * 0x2edded11d766b3d ^ uRam0000000183476518) + uVar3;
  uRam0000000183476888 = uRam0000000183476630 ^ uRam0000000183476518;
  uRam00000001834763b0 = 0x41b1;
  uVar3 = (~uRam0000000183476a90 + 0xf9d22381) *
          ((uRam0000000183476968 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183476968 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183476488) + (uVar3 & uRam0000000183476488);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476700 =
       func_0x00019075f070((uVar3 | 0x7df000a5) + (ulonglong)((uint)uVar3 & 0x7df000a5));
  uVar3 = (uRam0000000183476700 ^ 0xf9d22380) & 0x7fffffffffffffff;
  uRam00000001834765c8 = (uRam00000001834765c8 ^ uVar3) - 0xf9d22380 ^ 0x21b1e37b71f84b84;
  uRam0000000183476410 = (uRam0000000183476410 * 0x51f2b5789d43bb81 ^ uRam00000001834765c8) + uVar3;
  uRam0000000183476860 = uRam0000000183476410 ^ uRam00000001834765c8;
  uRam00000001834769d0 = 0x62ddc80;
  uVar3 = (~uRam0000000183476740 + 0xf9d22381) *
          ((uRam0000000183476738 ^ 0x84226294) +
          (ulonglong)((uint)uRam0000000183476738 & 0x84226294) * 2);
  uVar3 = (uVar3 | uRam0000000183476300) + (uVar3 & uRam0000000183476300);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183476a10 =
       func_0x00019075f070((uVar3 | 0x7df04114) + (ulonglong)((uint)uVar3 & 0x7df04114));
  uRam0000000183476a60 = uRam0000000183476738 ^ uRam0000000183476a10 ^ 0xf9d26531;
  uRam0000000183476570 =
       (uRam0000000183476570 ^ uRam0000000183476a10) + 0xf9d26531 ^ 0xa4a59e01e800bf20;
  uRam00000001834765c8 =
       (uRam00000001834765c8 * -0x7dc85a0e44e82abb ^ uRam0000000183476570) + uRam0000000183476a10;
  uRam00000001834769f0 = uRam00000001834765c8 ^ uRam0000000183476570;
  uRam0000000183476ad8 = 0xf9d26531;
  uVar3 = (uRam0000000183476350 ^ _UNK_182d3fdc0) + uRam00000001834766c8 + 0x7df04614;
  uVar4 = (uRam00000001834766c8 ^ _UNK_182d3fdc8) + uRam0000000183476350 + 0x62ddc80;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476350 ^ _UNK_182d3fdc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001834766c8 ^ _UNK_182d3fdc8;
  uRam0000000183476608 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183476350 + 0x62ddc80) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001834766c8 + 0x7df04614));
  uVar3 = uRam0000000183476608 ^ 0x607af88a1e86800;
  uRam00000001834763a0 = uRam0000000183476810 ^ uVar3 ^ 0x1000041b1;
  uRam0000000183476470 = (uRam0000000183476470 ^ uVar3) + 0x1000041b1 ^ 0x338ddf1aef5654db;
  uRam0000000183476458 = (uRam0000000183476458 * 0x546718b3fca26fc7 ^ uRam0000000183476470) + uVar3;
  uRam00000001834767f0 = uRam0000000183476458 ^ uRam0000000183476470;
  uRam00000001834763b8 = 0x41b1;
  uRam00000001834764e8 = func_0x00019075f070(uRam0000000183476ab8 ^ 0xff96ffc457004ce7);
  uVar3 = uRam00000001834764d8 >> 1 | uRam00000001834764d8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001834764d8;
  uRam00000001834767c0 = uRam0000000183476870 ^ uVar3 ^ 0x1be9677ae;
  uRam00000001834765e0 = (uRam00000001834765e0 ^ uVar3) + 0x1be9677ae ^ 0xfd5e1e20b03292b9;
  uRam0000000183476718 = (uRam0000000183476718 * 0x5c2ab3af37933243 ^ uRam00000001834765e0) + uVar3;
  uRam0000000183476658 = uRam0000000183476718 ^ uRam00000001834765e0;
  uRam00000001834765f8 = 0xbe9677ae;
  uRam00000001834769e8 = func_0x00019075f070(uRam00000001834763e8 + 0xff6900bbe9004eff ^ 0x10);
  uVar3 = uRam00000001834769e8 << 0x39 | uRam00000001834769e8 >> 7;
  uRam00000001834768d0 = (uRam00000001834768d0 ^ uVar3) + 0x4051884c ^ 0xd3e7c589bb793873;
  uRam00000001834768c0 = (uRam00000001834768c0 * -0x2be0853b03a610b5 ^ uRam00000001834768d0) + uVar3
  ;
  uRam0000000183476758 = uRam00000001834768c0 ^ uRam00000001834768d0;
  uRam0000000183476800 = 0x4051884c;
  uVar3 = (uRam0000000183476650 ^ _UNK_182d3fdd0) + uRam00000001834764a8 + 0x7b51dcd0;
  uVar4 = (uRam00000001834764a8 ^ _UNK_182d3fdd8) + uRam0000000183476650 + 0xbf2277b9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476650 ^ _UNK_182d3fdd0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001834764a8 ^ _UNK_182d3fdd8;
  uRam0000000183476618 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183476650 + 0xbf2277b9) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001834764a8 + 0x7b51dcd0));
  uRam0000000183476330 =
       (uRam0000000183476330 ^ uRam0000000183476618 ^ 0xbeb9f0d7af2b24f8) + 0xbf2277b1 ^
       0x88bb15bc96f3cc50;
  uRam0000000183476838 =
       (uRam0000000183476838 * -0x305d7d083afd8521 ^ uRam0000000183476330) +
       (uRam0000000183476618 ^ 0xbeb9f0d7af2b24f8);
  uRam00000001834769a0 = uRam0000000183476838 ^ uRam0000000183476330;
  uRam0000000183476450 = 0xbf2277b1;
  uVar3 = (~uRam0000000183476738 + 0x7e44ef63) *
          ((uRam0000000183476310 ^ 0xc473ab69) +
          (ulonglong)((uint)uRam0000000183476310 & 0xc473ab69) * 2);
  uVar3 = (uVar3 | uRam0000000183476878) + (uVar3 & uRam0000000183476878);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001834766b0 =
       func_0x00019075f070((uVar3 | 0xba37440b) + (ulonglong)((uint)uVar3 & 0xba37440b));
  uVar3 = (ulonglong)(~(uint)uRam00000001834766b0 & 0x4051884c) * 0x6894b8e114617a31;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  uRam0000000183476a20 = uRam0000000183476ad8 ^ uVar3 ^ 0xbe9677ae;
  uRam0000000183476638 = (uRam0000000183476638 ^ uVar3) + 0xbe9677ae ^ 0xc3f88b1bb24a1f6a;
  uRam00000001834766b8 = (uRam00000001834766b8 * 0x602c59f3349f4d91 ^ uRam0000000183476638) + uVar3;
  uRam00000001834769c8 = uRam00000001834766b8 ^ uRam0000000183476638;
  uRam0000000183476310 = 0xbe9677ae;
  uRam0000000183476a48 = func_0x00019075f070(uRam00000001834763e8 ^ 0xffe2ff83dcffdd08);
  uRam0000000183476470 =
       (uRam0000000183476a48 << 0x36 | uRam0000000183476a48 >> 10) * 0x1862032288ae1d73;
  uRam00000001834768c0 = uRam00000001834768c0 ^ uRam0000000183476470 ^ 0x4b65f4c64c50be67;
  uRam00000001834763d8 =
       (uRam00000001834763d8 * -0xe953c69a342b435 ^ uRam00000001834768c0) + uRam0000000183476470;
  uRam00000001834763e0 = uRam00000001834763d8 ^ uRam00000001834768c0;
  uRam0000000183476670 = 0;
  uVar3 = (uRam0000000183476a08 ^ 0x84226294) + uRam0000000183476570 + 0x84226294;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476a08 ^ 0x84226294;
  uVar4 = ((uRam0000000183476570 + uRam0000000183476a08) * 0x2000 |
          uRam0000000183476570 + uRam0000000183476a08 >> 0x33) ^ uRam0000000183476570;
  uRam00000001834768e8 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183476a08 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183476570 + 0x84226294));
  uVar3 = uRam00000001834768e8 & 0xffffffffffff8000;
  uRam0000000183476430 = uRam0000000183476728 ^ uVar3 ^ 0x41b1;
  uRam0000000183476468 = (uRam0000000183476468 ^ uVar3) + 0x41b1 ^ 0xe53e4aa6ec1084f3;
  uRam0000000183476380 = (uRam0000000183476380 * 0x1ec3b353917e4607 ^ uRam0000000183476468) + uVar3;
  uRam00000001834763a0 = uRam0000000183476380 ^ uRam0000000183476468;
  uRam0000000183476878 = 0x41b1;
  uVar3 = (uRam0000000183476920 ^ _UNK_182d3fde0) + 0x7b521e81;
  uVar4 = (_UNK_182d3fde8 ^ 0x41b1) + uRam0000000183476920 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476920 ^ _UNK_182d3fde0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _UNK_182d3fde8 ^ 0x41b1;
  uRam00000001834768b8 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183476920 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - 0x7b521e81);
  uVar3 = uRam00000001834768b8 >> 1 | uRam00000001834768b8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~((uint)uRam00000001834768b8 ^
            (0x40 - (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x80) & 0xff73fff5);
  uRam0000000183476430 = (uRam0000000183476430 ^ uVar3) + 0x8c000a ^ 0x22892da2ab8fd47e;
  uRam0000000183476988 = (uRam0000000183476988 * -0x537d4d4326c7c5d9 ^ uRam0000000183476430) + uVar3
  ;
  uRam0000000183476970 = uRam0000000183476988 ^ uRam0000000183476430;
  uRam0000000183476698 = 0x8c000a;
  uVar3 = (uRam0000000183476968 ^ _UNK_182d3fdf0) + uRam00000001834763a0 + 0x7b51dcd0;
  uVar4 = (uRam00000001834763a0 ^ _UNK_182d3fdf8) + uRam0000000183476968 + 0x8c000a;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183476968 ^ _UNK_182d3fdf0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001834763a0 ^ _UNK_182d3fdf8;
  uRam0000000183476718 =
       func_0x00019075f070((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183476968 + 0x8c000a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001834763a0 + 0x7b51dcd0));
  uVar3 = (ulonglong)(~(uint)uRam0000000183476718 & 0xff73fff5);
  uRam0000000183476750 = uRam0000000183476750 ^ uVar3 ^ 0x5531f543f915a70c;
  uRam00000001834769b0 = (uRam00000001834769b0 * -0xbecba4c4791d771 ^ uRam0000000183476750) + uVar3;
  uRam00000001834764c0 = uRam00000001834769b0 ^ uRam0000000183476750;
  uRam0000000183476960 = 0;
  uRam0000000183476760 = func_0x00019075f070(uRam0000000183476388 ^ 0xff9dff83740021a1);
  uRam0000000183476350 = uRam0000000183476990 ^ uRam0000000183476760 ^ 0x41b1;
  uRam00000001834769e0 = (uRam00000001834769e0 ^ uRam0000000183476760) + 0x41b1 ^ 0xab1e68c07ffa2331
  ;
  uRam00000001834763a8 =
       (uRam00000001834763a8 * 0x50222bddb5a48359 ^ uRam00000001834769e0) + uRam0000000183476760;
  uRam0000000183476558 = uRam00000001834763a8 ^ uRam00000001834769e0;
  uRam0000000183476570 = 0x41b1;
  uRam0000000183476400 = func_0x00019075f070(uRam0000000183476a28 + 0xffe1ff7b8c001dff ^ 0x5c);
  uVar3 = uRam0000000183476400 & 0xffffffffff000000;
  uRam0000000183476ab0 = uRam00000001834768b8 ^ uVar3 ^ 0x41b1;
  uRam0000000183476908 = (uRam0000000183476908 ^ uVar3) + 0x41b1 ^ 0x9b3e74201c4584f;
  uRam0000000183476728 = (uRam0000000183476728 * 0x769a23ceb168f053 ^ uRam0000000183476908) + uVar3;
  uRam00000001834767a8 = uRam0000000183476728 ^ uRam0000000183476908;
  uRam0000000183476928 = 0x41b1;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x2fde,0xaa);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019075abb7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d3e3c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/B; fm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 19075f100, runtime 6ffff836f100) =====

void FUN_19075f100(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00019075f13c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d3fe40 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/B; fn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 19075fff0, runtime 6ffff836fff0) =====

void FUN_19075fff0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019076006d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182d40380 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



