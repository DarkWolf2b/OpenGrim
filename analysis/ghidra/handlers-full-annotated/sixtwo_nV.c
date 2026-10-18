// ===== Lsixtwo/nV; _96420263d4091209bc37877a539d08f6 ()V (handler @ image 18683f4d0, runtime 6fffee44f4d0) =====

void FUN_18683f4d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018683f5ac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180916aa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; cAa ()Z (handler @ image 18680b200, runtime 6fffee41b200) =====

void FUN_18680b200(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018680b247 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18090df70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; cAb ()Z (handler @ image 18680b390, runtime 6fffee41b390) =====

void FUN_18680b390(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018680b3d7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18090e010 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; cAc (Lsixtwo/nS;)Lsixtwo/nS; (handler @ image 18680b530, runtime 6fffee41b530) =====

undefined8 FUN_18680b530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/nV; cAd ([B)Ljava/lang/String; (handler @ image 18680b5c0, runtime 6fffee41b5c0) =====

void FUN_18680b5c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018680b660 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18090e220 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/nV; cAe (IJ)Ljava/lang/String; (handler @ image 186834890, runtime 6fffee444890) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186834890(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar5 = (~uRam0000000183149a88 + 0x3be8566a7fc7c8d8) *
          ((uRam0000000183149918 ^ 0xd43865e89cbdb5c5) +
          (uRam0000000183149918 & 0x543865e89cbdb5c5) * 2);
  uVar5 = (uVar5 | uRam0000000183149938) + (uVar5 & uRam0000000183149938);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183149a48 =
       func_0x00018683b920((uVar5 | 0xefd03382e37a7d12) + (uVar5 & 0xefd03382e37a7d12));
  uRam0000000183149938 =
       (uRam0000000183149938 ^ uRam0000000183149a48 ^ 0xd43865e8189f96e0) + 0xfff877ea7fdfdef7 ^
       0x12af127999fbd946;
  uRam00000001831499a8 =
       (uRam00000001831499a8 * -0x3332fd22130e019d ^ uRam0000000183149938) +
       (uRam0000000183149a48 ^ 0xd43865e8189f96e0);
  uRam0000000183149968 = uRam00000001831499a8 ^ uRam0000000183149938;
  uRam0000000183149a58 = 0xfff877ea7fdfdef7;
  uVar5 = (uRam00000001831499a8 ^ _UNK_180915400) + uRam00000001831499f0 + 0x527afc9d7a630b90;
  uVar9 = (uRam00000001831499f0 ^ _UNK_180915408) + uRam00000001831499a8 + 0xb79905d413411380;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831499a8 ^ _UNK_180915400;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831499f0 ^ _UNK_180915408;
  uRam0000000183149a48 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831499a8 + 0xb79905d413411380) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831499f0 + 0x527afc9d7a630b90));
  uVar5 = uRam0000000183149a48 ^ 0xc728ac52bb8ec980;
  uVar5 = (uVar5 << 10 | uVar5 >> 0x36) << 2 | (uVar5 & 0x3fffffffffffff) >> 0x34;
  uRam0000000183149940 = (uRam0000000183149940 ^ uVar5) + 0xe5e3f949ed003b35 ^ 0x499701b62ce029f7;
  uRam0000000183149a80 = (uRam0000000183149a80 * -0x1c40d85d7cc23b71 ^ uRam0000000183149940) + uVar5
  ;
  uRam0000000183149ae8 = uRam0000000183149a80 ^ uRam0000000183149940;
  uRam0000000183149a18 = -0x1a1c06b612ffc4cb;
  uVar5 = (uRam0000000183149a60 ^ _UNK_180915410) + uRam0000000183149990 + 0x84222325;
  uVar9 = (uRam0000000183149990 ^ _UNK_180915418) + uRam0000000183149a60 + 0x2b2504aa4e6e7400;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149a60 ^ _UNK_180915410;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183149990 ^ _UNK_180915418;
  uRam0000000183149900 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183149a60 + 0x2b2504aa4e6e7400) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149990 + 0x84222325));
  uRam0000000183149a10 =
       (uRam0000000183149a10 ^ uRam0000000183149900) + 0xd4dafb55b1918c00 ^ 0x9c3485447636d696;
  uRam0000000183149a98 =
       (uRam0000000183149a98 * -0x7d370ec697bb20cb ^ uRam0000000183149a10) + uRam0000000183149900;
  uRam0000000183149a40 = uRam0000000183149a98 ^ uRam0000000183149a10;
  uRam0000000183149918 = 0xd4dafb55b1918c00;
  uVar5 = (uRam0000000183149978 ^ _UNK_180915420) + uRam0000000183149ae8 + 0x84222325;
  uVar9 = (uRam0000000183149ae8 ^ _UNK_180915428) + uRam0000000183149978 + 0x41452997366ea883;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149978 ^ _UNK_180915420;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183149ae8 ^ _UNK_180915428;
  uRam0000000183149ab8 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183149978 + 0x41452997366ea883) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149ae8 + 0x84222325));
  uRam0000000183149950 =
       (uRam0000000183149950 ^ uRam0000000183149ab8) + 0xbebad668c991577d ^ 0x7c4d0db15d9b95f3;
  uRam0000000183149ae0 =
       (uRam0000000183149ae0 * 0x46f9de2c30de2f71 ^ uRam0000000183149950) + uRam0000000183149ab8;
  uRam00000001831499f8 = uRam0000000183149ae0 ^ uRam0000000183149950;
  uRam0000000183149ad0 = 0xbebad668c991577d;
  uVar5 = (~uRam00000001831499d8 + 0x41452997366ea884) *
          ((uRam0000000183149920 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183149920 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam0000000183149978) + (uVar5 & uRam0000000183149978);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183149980 =
       func_0x00018683b920((uVar5 | 0x41452997b24cf459) + (uVar5 & 0x41452997b24cf459));
  uRam0000000183149ad8 = uRam0000000183149ac0 ^ uRam0000000183149960 ^ 0x41452997366f2882;
  uRam0000000183149930 =
       (uRam0000000183149930 ^ uRam0000000183149960) + 0x41452997366f2882 ^ 0x852829bfd1f09b85;
  uRam0000000183149ab8 =
       (uRam0000000183149ab8 * -0x46f94cd8ccb9415b ^ uRam0000000183149930) + uRam0000000183149960;
  uRam0000000183149a10 = uRam0000000183149ab8 ^ uRam0000000183149930;
  uRam0000000183149968 = 0x41452997366f2882;
  uRam0000000183149af8 = func_0x00018683b920(uRam00000001831499a8 ^ 0xab2cf96bc6b844f2);
  uVar5 = uRam0000000183149af8 >> 1 | uRam0000000183149af8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183149af8;
  uRam0000000183149ae8 = uRam0000000183149978 ^ uVar5 ^ 0x7fff;
  uRam0000000183149ad0 = (uRam0000000183149ad0 ^ uVar5) + 0x7fff ^ 0x9bfea7462a57a890;
  uRam0000000183149940 = (uRam0000000183149940 * -0x37dc4ad6587ba609 ^ uRam0000000183149ad0) + uVar5
  ;
  uRam0000000183149a78 = uRam0000000183149940 ^ uRam0000000183149ad0;
  uRam00000001831499c8 = uRam0000000183149910 ^ 0x7fff;
  uRam0000000183149aa8 = 0x7fff;
  uVar5 = (~uRam0000000183149a90 + 0xb7c18024505374c1) *
          ((uRam0000000183149ab0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183149ab0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183149990) + (uVar5 & uRam0000000183149990);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831499a8 =
       func_0x00018683b920((uVar5 | 0xb7c18024d47157e5) + (uVar5 & 0xb7c18024d47157e5));
  uRam0000000183149ad8 =
       (uRam0000000183149ad8 ^ uRam00000001831499a8) + 0x483e7fdbafac8b40 ^ 0x63298b00e82342c;
  uRam0000000183149a68 =
       (uRam0000000183149a68 * 0x76e4ffba1c10f6db ^ uRam0000000183149ad8) + uRam00000001831499a8;
  uRam0000000183149938 = uRam0000000183149a68 ^ uRam0000000183149ad8;
  uRam0000000183149930 = 0x483e7fdbafac8b40;
  uRam0000000183149a40 = func_0x00018683b920(uRam0000000183149a98 ^ 0x23e8c0d41a8050e6);
  uRam0000000183149af0 = uRam0000000183149af0 ^ uRam0000000183149a40 ^ 0xb7c180245053f4bf;
  uRam0000000183149ad8 =
       (uRam0000000183149ad8 ^ uRam0000000183149a40) + 0xb7c180245053f4bf ^ 0x13d2a6710bdfc393;
  uRam00000001831499d0 =
       (uRam00000001831499d0 * -0x6f7d7617861a3089 ^ uRam0000000183149ad8) + uRam0000000183149a40;
  uRam0000000183149a78 = uRam00000001831499d0 ^ uRam0000000183149ad8;
  uRam0000000183149af8 = 0xb7c180245053f4bf;
  uVar5 = (uRam00000001831499f8 ^ _UNK_180915430) + uRam0000000183149a50 + 0xfff877eafbfdfdd2;
  uVar9 = (uRam0000000183149a50 ^ _UNK_180915438) + uRam00000001831499f8 + 0xe5e3f949ed003b35;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831499f8 ^ _UNK_180915430;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183149a50 ^ _UNK_180915438;
  uRam0000000183149900 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831499f8 + 0xe5e3f949ed003b35) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183149a50 + 0xfff877eafbfdfdd2));
  uVar5 = uRam0000000183149900 ^ 0x392ff3debcbc1623;
  uRam0000000183149978 = uRam0000000183149968 ^ uVar5 ^ 0xe5dc71346ce01a2c;
  uRam0000000183149990 = (uRam0000000183149990 ^ uVar5) + 0xe5dc71346ce01a2c ^ 0xdf919dc223abba16;
  uRam0000000183149928 = (uRam0000000183149928 * -0x21d11422bb2337dd ^ uRam0000000183149990) + uVar5
  ;
  uRam0000000183149910 = uRam0000000183149928 ^ uRam0000000183149990;
  uRam00000001831499c0 = 0xe5dc71346ce01a2c;
  uVar5 = (~uRam0000000183149a50 + 0xe5e3f949ed003b36) *
          ((uRam00000001831499d0 ^ 0xfff877eafbfdfdd2) +
          (uRam00000001831499d0 & 0x7ff877eafbfdfdd2) * 2);
  uVar5 = (uVar5 | uRam0000000183149948) + (uVar5 & uRam0000000183149948);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183149988 =
       func_0x00018683b920((uVar5 | 0x1a1b8ea316fdc6e7) + (uVar5 & 0x1a1b8ea316fdc6e7));
  uRam0000000183149a68 =
       (uRam0000000183149a68 ^ uRam0000000183149988 & 0xffffffff80000000) + 0xe5e071486d001a35 ^
       0x930afcf15a1345b0;
  uRam0000000183149aa0 =
       (uRam0000000183149aa0 * 0xdece7fc3cb6188d ^ uRam0000000183149a68) +
       (uRam0000000183149988 & 0xffffffff80000000);
  uRam0000000183149968 = uRam0000000183149aa0 ^ uRam0000000183149a68;
  uRam0000000183149958 = 0xe5e071486d001a35;
  uVar5 = (~uRam0000000183149af8 + 0xcbc0e290da00346b) *
          ((uRam0000000183149988 ^ 0x1a1b8ea316fdc6e7) +
          (uRam0000000183149988 & 0x1a1b8ea316fdc6e7) * 2);
  uVar5 = (uVar5 | uRam00000001831499c0) + (uVar5 & uRam00000001831499c0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018683b920((uVar5 | 0xd1db6c33ccfdf28d) + (uVar5 & 0xd1db6c33ccfdf28d));
  uRam0000000183149918 = uRam0000000183149a80 ^ uVar5 ^ 0xe5dc71346ce01a2c;
  uRam0000000183149a50 = 0xf9358a740e4adbbc;
  uRam0000000183149998 = (uRam0000000183149998 * -0x2b275105122bf61 ^ 0xf9358a740e4adbbc) + uVar5;
  uRam0000000183149a30 = uRam0000000183149998 ^ 0xf9358a740e4adbbc;
  uRam00000001831499a0 = 0xe5dc71346ce01a2c;
  uRam0000000183149930 = func_0x00018683b920(uRam00000001831499e8 + 0x1d007bdb001dff ^ 0xda);
  uRam0000000183149a88 = uRam0000000183149a88 ^ uRam0000000183149930 ^ 0x96d30e435aa1397b;
  uRam0000000183149a18 =
       (uRam0000000183149a18 * 0x4a780441eac70e27 ^ uRam0000000183149a88) + uRam0000000183149930;
  uRam0000000183149950 = uRam0000000183149a18 ^ uRam0000000183149a88;
  uRam0000000183149a50 = 0;
  uVar5 = (uRam00000001831499b0 ^ 0x84225cda) + uRam0000000183149970 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831499b0 ^ 0x84225cda;
  uVar9 = ((uRam0000000183149970 + uRam00000001831499b0) * 0x2000 |
          uRam0000000183149970 + uRam00000001831499b0 >> 0x33) ^ uRam0000000183149970;
  uRam0000000183149940 = uRam0000000183149930;
  uRam0000000183149a90 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - uRam00000001831499b0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149970 + 0x84225cda));
  uVar5 = uRam0000000183149a90 & 0xffffffffff;
  uRam0000000183149a10 = uRam0000000183149ab8 ^ uVar5 ^ 0x7fff;
  uRam00000001831499a8 = (uRam00000001831499a8 ^ uVar5) + 0x7fff ^ 0x99712afdd9f1a4e8;
  uRam00000001831499f8 = (uRam00000001831499f8 * 0x1e87e5ea3f56f003 ^ uRam00000001831499a8) + uVar5;
  uRam00000001831499b8 = uRam00000001831499f8 ^ uRam00000001831499a8;
  uRam0000000183149948 = 0x7fff;
  uRam0000000183149900 = func_0x00018683b920(uRam0000000183149a68 + 0xf501f903d48801ff ^ 0x2c);
  uVar5 = (uRam0000000183149900 << 0x36 | uRam0000000183149900 >> 10) ^ 0xfff877ea7fdfdef7;
  uVar5 = uVar5 << 0xb | uVar5 >> 0x35;
  uRam00000001831499c8 = (uRam00000001831499c8 ^ uVar5) + 0x7881580202108 ^ 0x56596985276ef99e;
  uRam00000001831499f0 = (uRam00000001831499f0 * -0x1d94b1f53a6871e1 ^ uRam00000001831499c8) + uVar5
  ;
  uRam0000000183149958 = uRam00000001831499f0 ^ uRam00000001831499c8;
  uRam00000001831499d0 = 0x7881580202108;
  uVar5 = (uRam0000000183149ab0 ^ 0x84225cda) + uRam0000000183149a18 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149ab0 ^ 0x84225cda;
  uVar9 = ((uRam0000000183149a18 + uRam0000000183149ab0) * 0x2000 |
          uRam0000000183149a18 + uRam0000000183149ab0 >> 0x33) ^ uRam0000000183149a18;
  uRam0000000183149930 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183149ab0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149a18 + 0x84225cda));
  uVar5 = (ulonglong)((uint)uRam0000000183149930 & 0x7ff8);
  uRam0000000183149ab8 = uRam0000000183149af8 ^ uVar5 ^ 0x7fff;
  uRam0000000183149a88 = (uRam0000000183149a88 ^ uVar5) + 0x7fff ^ 0x205075011f1acd74;
  uRam0000000183149a28 = (uRam0000000183149a28 * 0x27f659db3241319d ^ uRam0000000183149a88) + uVar5;
  uRam0000000183149ae0 = uRam0000000183149a28 ^ uRam0000000183149a88;
  uRam00000001831499a0 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam0000000183149a28;
  lVar6 = (param_4 ^ 0x84222325) + uRam0000000183149a48;
  uVar9 = uVar5 + lVar6;
  uVar10 = (uRam0000000183149a48 ^ 0x7fff) + uRam0000000183149a28 + 0x7fff;
  uVar5 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar5;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183149a48 ^ 0x7fff;
  uRam0000000183149aa0 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183149a28 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar3 = (uint)param_4 & 0x7fff;
  uVar9 = (ulonglong)uVar3;
  uRam0000000183149a48 =
       (uRam0000000183149a48 ^ ~uRam0000000183149aa0 & param_4) + uVar9 ^ 0x2976843d01635539;
  uRam0000000183149ac0 =
       (uRam0000000183149ac0 * -0x2ce039e9f9325d15 ^ uRam0000000183149a48) +
       (~uRam0000000183149aa0 & param_4);
  uRam0000000183149900 = uRam0000000183149ac0 ^ uRam0000000183149a48;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar3 ^ 0x84222325;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = 0;
  auVar8 = pshufb(auVar7 ^ _UNK_180915440,_UNK_1800170c0);
  uVar10 = auVar8._8_8_ + auVar8._0_8_;
  uVar5 = uVar10 + uRam0000000183149998;
  if (auVar8._4_4_ < 0) {
    uVar5 = uRam0000000183149a18 ^ uVar10;
  }
  uRam0000000183149978 = uVar9;
  uRam0000000183149a78 = func_0x00018683b920(SUB161(auVar7 ^ _UNK_180915440,5) ^ uVar5);
  uVar5 = uRam0000000183149a78 << 0x15 | uRam0000000183149a78 >> 0x2b;
  uVar10 = (uVar9 + param_3) - (ulonglong)((param_3 & uVar3) * 2);
  uRam00000001831499e8 = (uRam00000001831499e8 ^ uVar5) + uVar10 ^ 0xc24a6edf38eddc28;
  uRam0000000183149ad0 = (uRam0000000183149ad0 * 0x39606fc40f2c2273 ^ uRam00000001831499e8) + uVar5;
  uRam00000001831499e0 = uRam0000000183149ad0 ^ uRam00000001831499e8;
  uVar4 = uVar10 & 0xffffffff;
  uVar5 = (~uRam0000000183149ac8 + 0x7ac437b0) *
          ((uRam00000001831499a8 ^ 0x7b6f29f3) +
          (ulonglong)((uint)uRam00000001831499a8 & 0x7b6f29f3) * 2);
  uVar5 = (uVar5 | uRam0000000183149a00) + (uVar5 & uRam0000000183149a00);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183149948 = uVar4;
  uRam0000000183149a08 =
       func_0x00018683b920((uVar5 | 0x1ab1e5c) + (ulonglong)((uint)uVar5 & 0x1ab1e5c));
  uVar5 = (uRam0000000183149a08 ^ 0xffcd3fff) & 0x7ffffffff;
  uRam0000000183149ad8 = (uRam0000000183149ad8 ^ uVar5) + 0xffcd3fff ^ 0x52ba50e328efc453;
  uRam00000001831499a8 = (uRam00000001831499a8 * -0x68024f2ec03ed673 ^ uRam0000000183149ad8) + uVar5
  ;
  uRam0000000183149918 = uRam00000001831499a8 ^ uRam0000000183149ad8;
  uRam00000001831499f0 = uRam00000001831499f8 ^ 0xffcd3fff;
  uRam0000000183149978 = 0xffcd3fff;
  uVar5 = (~uRam0000000183149a80 + 0x719b8aec) *
          ((uRam0000000183149940 ^ 0xa1df3ee4) +
          (ulonglong)((uint)uRam0000000183149940 & 0xa1df3ee4) * 2);
  uVar5 = (uVar5 | uRam0000000183149a00) + (uVar5 & uRam0000000183149a00);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183149948 =
       func_0x00018683b920((uVar5 | 0xd044b40f) + (ulonglong)((uint)uVar5 & 0xd044b40f));
  uRam0000000183149a78 =
       (uRam0000000183149a78 ^ uRam0000000183149948) + 0x5466972a ^ 0xeee718ec1071604a;
  uRam0000000183149a28 =
       (uRam0000000183149a28 * -0x1ebea5991e2062b3 ^ uRam0000000183149a78) + uRam0000000183149948;
  uRam0000000183149ad8 = uRam0000000183149a28 ^ uRam0000000183149a78;
  uRam0000000183149ad0 = 0x5466972a;
  uRam0000000183149a00 = func_0x00018683b920(uRam00000001831499d8 ^ 0x3aff858cffb8ff);
  uRam0000000183149ab8 = uRam0000000183149938 * -0x55c50308d46fc323;
  uRam0000000183149938 =
       uRam0000000183149ab8 ^ uRam0000000183149a88 - 0xf656eb0 ^ 0xfea2dee381edab09;
  uRam0000000183149a88 = 0xf09a9150;
  uVar5 = (uRam0000000183149a78 ^ _UNK_180915450) + uRam00000001831499a0 + 0x84225b42;
  uVar9 = (uRam00000001831499a0 ^ _UNK_180915458) + uRam0000000183149a78 + 0xf656eb0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149a78 ^ _UNK_180915450;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831499a0 ^ _UNK_180915458;
  uRam0000000183149950 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183149a78 + 0xf656eb0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831499a0 + 0x84225b42));
  uVar5 = (uRam0000000183149950 ^ 0x73dbdb208d0) * 0x3bf1ae989cc5d3af ^ 0x7867;
  uRam0000000183149980 = uRam0000000183149968 ^ uVar5 ^ 0xf65e717;
  uRam0000000183149a38 = (uRam0000000183149a38 ^ uVar5) + 0xf65e717 ^ 0xf688afd0effa166b;
  uRam00000001831499b8 = (uRam00000001831499b8 * 0x78b9cada8302094f ^ uRam0000000183149a38) + uVar5;
  uRam0000000183149a18 = uRam00000001831499b8 ^ uRam0000000183149a38;
  uRam0000000183149a00 = 0xf65e717;
  uRam00000001831499b8 = func_0x00018683b920(uRam0000000183149a30 ^ 0x2affa922003af7);
  uVar5 = (ulonglong)(~(uint)((uRam00000001831499b8 ^ 0xc0000000) >> 0x1e) & 0xf65e717) ^ 0xf09a9150
  ;
  uRam0000000183149a68 = uRam0000000183149ac0 ^ uVar5 ^ 0x100007867;
  uRam0000000183149a48 = (uRam0000000183149a48 ^ uVar5) + 0x100007867 ^ 0x5081656a5c1def73;
  uRam0000000183149a00 = (uRam0000000183149a00 * -0x6be4587100ca6e81 ^ uRam0000000183149a48) + uVar5
  ;
  uRam0000000183149a10 = uRam0000000183149a00 ^ uRam0000000183149a48;
  uRam0000000183149a08 = uRam0000000183149a88 ^ 0x100007867;
  uRam0000000183149a50 = 0x7867;
  uVar5 = (uRam0000000183149920 ^ _UNK_180915460) + uRam0000000183149928 + 0x84222325;
  uVar9 = (uRam0000000183149928 ^ _UNK_180915468) + uRam0000000183149920 + 0x861dabd8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149920 ^ _UNK_180915460;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183149928 ^ _UNK_180915468;
  uRam0000000183149a30 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183149920 + 0x861dabd8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149928 + 0x84222325));
  uRam0000000183149ad0 =
       (uRam0000000183149ad0 ^ uRam0000000183149a30) - 0x861dabd8 ^ 0x68cda47248c83185;
  uRam0000000183149908 =
       (uRam0000000183149908 * 0x7b2bfb808d0e89f3 ^ uRam0000000183149ad0) + uRam0000000183149a30;
  uRam0000000183149a90 = uRam0000000183149908 ^ uRam0000000183149ad0;
  uRam0000000183149918 = 0x79e25428;
  uRam0000000183149ad8 = func_0x00018683b920(uRam0000000183149a60 ^ 0xff50000199ffd699);
  uVar5 = uRam0000000183149ad8 ^ 0x861d8398;
  uRam00000001831499f8 = uRam0000000183149a80 ^ uVar5 ^ 0x861e243f;
  uRam0000000183149a48 = (uRam0000000183149a48 ^ uVar5) + 0x861e243f ^ 0x28b4493f5e5c08cc;
  uRam00000001831499a0 = (uRam00000001831499a0 * 0x25a597d3a9ffb161 ^ uRam0000000183149a48) + uVar5;
  uRam0000000183149938 = uRam00000001831499a0 ^ uRam0000000183149a48;
  uRam0000000183149a58 = 0x861e243f;
  uVar5 = (uRam0000000183149af8 ^ _UNK_180915470) + uRam00000001831499f8 + 0x23c071a;
  uVar9 = (uRam00000001831499f8 ^ _UNK_180915478) + uRam0000000183149af8 + 0x79e25428;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149af8 ^ _UNK_180915470;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831499f8 ^ _UNK_180915478;
  uRam0000000183149978 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183149af8 + 0x79e25428) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831499f8 + 0x23c071a));
  uVar5 = uRam0000000183149978 ^ 0x3fdad1d49f3855d8;
  uRam0000000183149940 = uRam0000000183149978 ^ uVar5 ^ 0x100007867;
  uRam0000000183149ac8 = (uRam0000000183149ac8 ^ uVar5) + 0x100007867 ^ 0xa3291951edde5351;
  uRam0000000183149a60 = (uRam0000000183149a60 * 0x6e750089884173b7 ^ uRam0000000183149ac8) + uVar5;
  uRam0000000183149a68 = uRam0000000183149a60 ^ uRam0000000183149ac8;
  uRam0000000183149950 = 0x7867;
  uVar5 = (uRam0000000183149a88 ^ _UNK_180915480) + uRam0000000183149998 + 0x84222325;
  uVar9 = (uRam0000000183149998 ^ _UNK_180915488) + uRam0000000183149a88 + 0x72330a26;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149a88 ^ _UNK_180915480;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183149998 ^ _UNK_180915488;
  uRam0000000183149a78 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183149a88 + 0x72330a26) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149998 + 0x84222325));
  uRam00000001831499f0 =
       (uRam00000001831499f0 ^ uRam0000000183149a78 ^ 0x72330a26) - 0x72330a26 ^ 0x50760edafdf5b481;
  uRam0000000183149ad8 =
       (uRam0000000183149ad8 * 0x3bcec8e66c450671 ^ uRam00000001831499f0) +
       (uRam0000000183149a78 ^ 0x72330a26);
  uRam0000000183149a18 = uRam0000000183149ad8 ^ uRam00000001831499f0;
  uRam00000001831499c0 = 0x8dccf5da;
  uVar5 = (uRam00000001831499d8 ^ _UNK_180915490) + uRam0000000183149940 + 0x84225b42;
  uVar9 = (uRam0000000183149940 ^ _UNK_180915498) + uRam00000001831499d8 + 0x72330a26;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831499d8 ^ _UNK_180915490;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183149940 ^ _UNK_180915498;
  uRam0000000183149ab8 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831499d8 + 0x72330a26) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149940 + 0x84225b42));
  uVar5 = (uRam0000000183149ab8 ^ 0x72330a26) << 0x1d | uRam0000000183149ab8 >> 0x23;
  uRam0000000183149a00 = uRam0000000183149a68 ^ uVar5 ^ 0x7233828d;
  uRam0000000183149a30 = (uRam0000000183149a30 ^ uVar5) + 0x7233828d ^ 0xccfa1386188a03ad;
  uRam00000001831499d0 = (uRam00000001831499d0 * -0x571f6ef54698374b ^ uRam0000000183149a30) + uVar5
  ;
  uRam0000000183149980 = uRam00000001831499d0 ^ uRam0000000183149a30;
  uRam00000001831499a0 = 0x7233828d;
  uVar5 = (~uRam0000000183149a98 + 0x8dccf5db) *
          ((uRam0000000183149940 ^ 0xf611a1a8) +
          (ulonglong)((uint)uRam0000000183149940 & 0xf611a1a8) * 2);
  uVar5 = (uVar5 | uRam0000000183149a40) + (uVar5 & uRam0000000183149a40);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183149908 =
       func_0x00018683b920((uVar5 | 0x7bdd5472) + (ulonglong)((uint)uVar5 & 0x7bdd5472));
  uVar5 = (uRam0000000183149908 ^ 0x3f41cda03d2a1c00) & 0xfffffffffffffe00;
  uRam0000000183149ab8 = uRam0000000183149a80 ^ uVar5 ^ 0x100007867;
  uRam0000000183149940 = (uRam0000000183149940 ^ uVar5) + 0x100007867 ^ 0x2ead2880373fb2c5;
  uRam0000000183149aa8 =
       (uRam0000000183149930 * -0x13f0c2951ca8f1d5 ^ uRam0000000183149940) + uVar5 ^
       uRam0000000183149940;
  uRam0000000183149930 = 0x7867;
  uRam0000000183149a00 = func_0x00018683b920(uRam0000000183149948 ^ 0xff85001c500086a2);
  uVar5 = uRam0000000183149a00 ^ 0x5455dbd33405e8d6;
  uRam0000000183149970 = uRam0000000183149af0 ^ uVar5 ^ 0x15433d729;
  uRam0000000183149a80 = (uRam0000000183149a80 ^ uVar5) + 0x15433d729 ^ 0xbad2ec19041423b;
  uRam0000000183149960 = (uRam0000000183149960 * -0x395d2c04145fca23 ^ uRam0000000183149a80) + uVar5
  ;
  uRam0000000183149a60 = uRam0000000183149960 ^ uRam0000000183149a80;
  uRam0000000183149a18 = 0x5433d729;
  uVar5 = (~uRam0000000183149ab0 + 0x5466972b) *
          ((uRam00000001831499a0 ^ 0x7bef1cda) +
          (ulonglong)((uint)uRam00000001831499a0 & 0x7bef1cda) * 2);
  uVar5 = (uVar5 | uRam0000000183149990) + (uVar5 & uRam0000000183149990);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831499f0 =
       func_0x00018683b920((uVar5 | 0x2f898bf0) + (ulonglong)((uint)uVar5 & 0x2f898bf0));
  uRam0000000183149958 =
       (uRam0000000183149958 ^ uRam00000001831499f0 ^ 0x5455dbd3cbc8d729) + 0xababa8d5 ^
       0x9fe2526da108f5da;
  uRam00000001831499c8 =
       (uRam00000001831499c8 * 0x6ce1fb4cffbff86d ^ uRam0000000183149958) +
       (uRam00000001831499f0 ^ 0x5455dbd3cbc8d729);
  uRam0000000183149920 = uRam00000001831499c8 ^ uRam0000000183149958;
  uRam0000000183149ac0 = 0xababa8d5;
  uRam0000000183149a10 = func_0x00018683b920(uRam0000000183149aa8 ^ 0x85001c4fff787d);
  uVar9 = uRam0000000183149a10 ^ 0xffefbfff;
  uVar5 = uVar9 >> 1 | uVar9;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar9 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar9;
  uRam0000000183149a30 = (uRam0000000183149a30 ^ uVar9) + 0x5444172a ^ 0x8fc566170870dacf;
  uRam0000000183149998 =
       (uRam0000000183149998 * 0x1b90a5926db0c523 ^ uRam0000000183149a30) + uVar9 ^
       uRam0000000183149a30;
  uRam00000001831499f0 = 0x5444172a;
  uVar5 = (uRam0000000183149a58 ^ _UNK_1809154a0) + uRam0000000183149a30 + 0x2f898bf0;
  uVar9 = (uRam0000000183149a30 ^ _UNK_1809154a8) + uRam0000000183149a58 + 0xa8882e54;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149a58 ^ _UNK_1809154a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183149a30 ^ _UNK_1809154a8;
  uRam0000000183149958 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183149a58 + 0xa8882e54) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149a30 + 0x2f898bf0));
  uVar5 = uRam0000000183149958 ^ 0xababa8d5;
  uRam0000000183149950 = uRam0000000183149a10 ^ uVar5 ^ 0x15433d729;
  uRam0000000183149a00 = (uRam0000000183149a00 ^ uVar5) + 0x15433d729 ^ 0x62b8b4d97194eb72;
  uRam0000000183149920 = (uRam0000000183149920 * -0x4469f47f07b1f97b ^ uRam0000000183149a00) + uVar5
  ;
  uRam0000000183149930 = uRam0000000183149920 ^ uRam0000000183149a00;
  uRam00000001831499a8 = 0x5433d729;
  uRam0000000183149970 = func_0x00018683b920(uRam0000000183149a78 + 0x1cff7be5001dff ^ 0x8e);
  uRam0000000183149ac8 = uRam0000000183149970 ^ 0x5433d729;
  uRam0000000183149988 = uRam0000000183149988 ^ uRam0000000183149ac8 ^ 0x91f747f8c8c3be00;
  uRam0000000183149a40 =
       (uRam0000000183149a40 * -0x3a7aecc7a0ec1ce9 ^ uRam0000000183149988) + uRam0000000183149ac8;
  uRam0000000183149ae0 = uRam0000000183149a40 ^ uRam0000000183149988;
  uRam0000000183149a10 = 0;
  uRam0000000183149990 = func_0x00018683b920(uRam0000000183149a90 ^ 0xffaaff7bbdffe101);
  uVar5 = uRam0000000183149990 - (uRam0000000183149990 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183149990;
  uRam0000000183149900 = uRam00000001831499a0 ^ uVar5 ^ 0x7867;
  uRam0000000183149ad8 = (uRam0000000183149ad8 ^ uVar5) + 0x7867 ^ 0xdd8bc25a0385a903;
  uRam00000001831499d8 = (uRam00000001831499d8 * 0x17652215ef3cdf7f ^ uRam0000000183149ad8) + uVar5;
  uRam0000000183149a70 = uRam00000001831499d8 ^ uRam0000000183149ad8;
  uRam00000001831499f0 = 0x7867;
  uVar5 = (uRam0000000183149ac8 ^ _UNK_1809154b0) + uRam0000000183149900 + 0x7bef1cda;
  uVar9 = (uRam0000000183149900 ^ _UNK_1809154b8) + uRam0000000183149ac8 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149ac8 ^ _UNK_1809154b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183149900 ^ _UNK_1809154b8;
  uRam0000000183149978 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183149ac8 + 0xffffffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149900 + 0x7bef1cda));
  uVar5 = uRam0000000183149978 - (uRam0000000183149978 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = uRam0000000183149978 ^ 0xffcd3fff ^
          ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar9 = uVar5 >> 1 | uVar5;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar5;
  uRam0000000183149a80 = (uRam0000000183149a80 ^ uVar5) + 0x32c000 ^ 0x8466aa9a4937556a;
  uRam0000000183149940 = (uRam0000000183149940 * -0x14552cb46b188477 ^ uRam0000000183149a80) + uVar5
  ;
  uRam0000000183149928 = uRam0000000183149940 ^ uRam0000000183149a80;
  uRam0000000183149958 = 0x32c000;
  uRam00000001831499e0 = func_0x00018683b920(uRam0000000183149a60 + 0x2b0083bdffddff ^ 0xf4);
  uVar5 = uRam00000001831499e0 & 0x3fffffffff;
  uRam0000000183149968 = uRam0000000183149920 ^ uVar5 ^ 0x7867;
  uRam0000000183149940 = (uRam0000000183149940 ^ uVar5) + 0x7867 ^ 0xc1bf8c5bf1492248;
  uRam00000001831499d0 = (uRam00000001831499d0 * -0x5eaaef76686c8707 ^ uRam0000000183149940) + uVar5
  ;
  uRam0000000183149958 = uRam00000001831499d0 ^ uRam0000000183149940;
  uRam00000001831499f0 = 0x7867;
  uVar5 = (uRam0000000183149a00 ^ 0x84225b42) + uRam0000000183149a78 + 0x84225b42;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183149a00 ^ 0x84225b42;
  uVar9 = ((uRam0000000183149a78 + uRam0000000183149a00) * 0x2000 |
          uRam0000000183149a78 + uRam0000000183149a00 >> 0x33) ^ uRam0000000183149a78;
  uRam0000000183149ae8 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183149a00 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183149a78 + 0x84225b42));
  uVar5 = (ulonglong)((uint)uRam0000000183149ae8 & 0x7867);
  uRam0000000183149a90 = uRam0000000183149a40 ^ uVar5 ^ 0x7867;
  uRam0000000183149a98 = (uRam0000000183149a98 ^ uVar5) + 0x7867 ^ 0xb87f5eb43f04d49;
  uRam0000000183149a58 =
       (uRam0000000183149aa0 * -0x350a1a01534b96d1 ^ uRam0000000183149a98) + uVar5 ^
       uRam0000000183149a98;
  uRam0000000183149aa0 = 0x7867;
  uVar5 = uVar4 ^ 0x84222325 ^ uRam0000000183149ac0;
  lVar6 = (uVar4 ^ 0x84222325) + uRam0000000183149a18;
  uVar9 = uVar5 + lVar6;
  uVar11 = (uRam0000000183149a18 ^ 0x7867) + uRam0000000183149ac0 + 0x7867;
  uVar5 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar5;
  uVar9 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183149a18 ^ 0x7867;
  uRam0000000183149938 =
       func_0x00018683b920((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183149ac0 + 0x7867) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar5 = uVar4 ^ (uRam0000000183149938 << 0x15 | uRam0000000183149938 >> 0x2b);
  lVar6 = uVar4 - ((uint)uVar10 & 0x7867) * 2;
  uRam0000000183149a88 = (uRam0000000183149a88 ^ uVar5) + lVar6 + 0x7867 ^ 0x3bfc926cc961ccd7;
  uRam00000001831499b0 = (uRam00000001831499b0 * 0x63286639f7fbb5dd ^ uRam0000000183149a88) + uVar5;
  uRam0000000183149928 = uRam00000001831499b0 ^ uRam0000000183149a88;
  uRam0000000183149ae0 = lVar6 + 0x7867U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186836fda did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180913a78 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; cAf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18683b9b0, runtime 6fffee44b9b0) =====

void FUN_18683b9b0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018683b9ec did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809155e0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/nV; cAg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18683ca10, runtime 6fffee44ca10) =====

void FUN_18683ca10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018683ca8d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180915bb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czM ()V (handler @ image 1867f1d20, runtime 6fffee401d20) =====

void FUN_1867f1d20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867f1e08 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180906d50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czN (ILjava/lang/Throwable;)V (handler @ image 1867f7190, runtime 6fffee407190) =====

void FUN_1867f7190(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1dff0,0x4ad);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867f71e5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180908620 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czO (Ljava/lang/Throwable;)V (handler @ image 18683c8a0, runtime 6fffee44c8a0) =====

void FUN_18683c8a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018683c8f3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180915b20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czP (ILjava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 1868459f0, runtime 6fffee4559f0) =====

void FUN_1868459f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186845ab4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180918270 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czQ (Ljava/lang/Throwable;)Z (handler @ image 186848830, runtime 6fffee458830) =====

void FUN_186848830(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186848883 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180918e50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czR (Ljava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 186848e30, runtime 6fffee458e30) =====

void FUN_186848e30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186848ef1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809190e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czS (Ljava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 18684d630, runtime 6fffee45d630) =====

void FUN_18684d630(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018684d6f1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18091a580 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czT (Ljava/lang/Throwable;)Lsixtwo/nS; (handler @ image 186852090, runtime 6fffee462090) =====

void FUN_186852090(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186852151 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18091ba20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czU ()Ljava/util/List; (handler @ image 186855ab0, runtime 6fffee465ab0) =====

void FUN_186855ab0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19429,0x3f8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186855b2a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18091c940 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czV ()Ljava/lang/String; (handler @ image 186857d00, runtime 6fffee467d00) =====

void FUN_186857d00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186857dda did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18091d5c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czW ()Ljava/lang/String; (handler @ image 1867f7d80, runtime 6fffee407d80) =====

void FUN_1867f7d80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867f7e62 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180908b10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czX (Lnet/fabricmc/loader/api/ModContainer;)Ljava/lang/String; (handler @ image 18680abe0, runtime 6fffee41abe0) =====

void FUN_18680abe0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19335,0x3f5);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018680ac2a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18090dd10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czY (Ljava/lang/Thread;Ljava/lang/Throwable;)V (handler @ image 18680af20, runtime 6fffee41af20) =====

void FUN_18680af20(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018680af6b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18090de40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nV; czZ (Z)V (handler @ image 18680b080, runtime 6fffee41b080) =====

void FUN_18680b080(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x15cf4,0x393);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018680b0ca did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18090ded0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



