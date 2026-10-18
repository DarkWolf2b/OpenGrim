// ===== STITCHED CORPUS: sixtwo.fo =====
// handlers: 21  continuation blocks: 250  unresolved table targets: 0
// tables not in tables.json: ['0x1098d8', '0x144ff8', '0x145388', '0x1e0c940', '0x1e0ce88', '0x1e0ce98', '0x1e0cea8', '0x1e0ceb8', '0x1e0d0b8', '0x1e0d0c8', '0x1e0d0d8', '0x1e0d0e8', '0x1e0d0f8', '0x1e0d108', '0x1e0d118', '0x1e0d128', '0x1e0d138', '0x1e0d158', '0x1e0d168', '0x1e0d178']

// ===== Lsixtwo/fo; YO ()V (handler @ image 18c1fd410, runtime 6ffff3e0d410) =====

void FUN_18c1fd410(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf)
      /* POOL[0x3806,0xbf]: ; | ipLAD | GLrDe | Lsixtwo/gg; | wLrDR | sixtwo/gg | baf | ()Lsixtwo/gc; | DJXfP | sixtwo/gc | aZg | ()Lsixtwo/gd; | ynopW | ePBBz | aZi | (Lsixtwo/gd;)Lsixtwo/gc; | nbZRc | ijbRx | bad | FalZQ | dhh | cnP | (FFF)Lsixtwo/mG; | NLFhJ | gx */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c1fd45a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e098a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; _12b7f932cd1965f4d41129a157fe8203 ()V (handler @ image 18c2680d0, runtime 6ffff3e780d0) =====

void FUN_18c2680d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c2681b8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e22fb8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18c2370c0, runtime 6ffff3e470c0) =====

void FUN_18c2370c0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018c2370fc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e13680 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fo; aLB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18c237fb0, runtime 6ffff3e47fb0) =====

void FUN_18c237fb0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c23802d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e13bc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLC (IJ)I (handler @ image 18c23aa70, runtime 6ffff3e4aa70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23aa70(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (uRam00000001832f3c50 ^ _UNK_181e16920) + uRam00000001832f3b70 + 0xe682e8ebb6f8aad;
  uVar4 = (uRam00000001832f3b70 ^ _UNK_181e16928) + uRam00000001832f3c50 + 0xea45621b50007487;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3c50 ^ _UNK_181e16920;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832f3b70 ^ _UNK_181e16928;
  uRam00000001832f3c58 =
       func_0x00018c245bf0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832f3c50 + 0xea45621b50007487) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f3b70 + 0xe682e8ebb6f8aad));
  uVar3 = (uRam00000001832f3c58 & 0xe682e8e3f4da988) * 4;
  uRam00000001832f3d08 = (uRam00000001832f3d08 ^ uVar3) + 0xee6d6e9f7f4dfd8f ^ 0x2daf16238b1b55c;
  uRam00000001832f3dc8 = (uRam00000001832f3dc8 * 0x747f043ee807951f ^ uRam00000001832f3d08) + uVar3;
  uRam00000001832f3dc0 = uRam00000001832f3dc8 ^ uRam00000001832f3d08;
  uRam00000001832f3b38 = 0xee6d6e9f7f4dfd8f;
  uVar3 = (uRam00000001832f3d90 ^ _UNK_181e16930) + uRam00000001832f3b98 + 0x84222325;
  uVar4 = (uRam00000001832f3b98 ^ _UNK_181e16938) + uRam00000001832f3d90 + 0x95b5b1c69bab8440;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3d90 ^ _UNK_181e16930;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832f3b98 ^ _UNK_181e16938;
  lVar2 = func_0x00018c245bf0((uVar4 << 0x1d | uVar4 >> 0x23) -
                              (uRam00000001832f3d90 + 0x95b5b1c69bab8440) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3b98 + 0x84222325))
  ;
  uRam00000001832f3de0 =
       (uRam00000001832f3de0 ^ uRam00000001832f3b10) + 0x6a4a4e3964547bc0 ^ 0xd1f73985a97c6b03;
  uRam00000001832f3e70 = (lVar2 * 0x7b47d5ebcb1cbb35 ^ uRam00000001832f3de0) + uRam00000001832f3b10;
  uRam00000001832f3dc0 = uRam00000001832f3e70 ^ uRam00000001832f3de0;
  uRam00000001832f3c10 = 0x6a4a4e3964547bc0;
  uVar3 = (~uRam00000001832f3e38 + 0x4da9f6552b7ad1ef) *
          ((uRam00000001832f3bc0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832f3bc0 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001832f3c98) + (uVar3 & uRam00000001832f3c98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3e38 =
       func_0x00018c245bf0((uVar3 | 0x4da9f655af58f2cb) + (uVar3 & 0x4da9f655af58f2cb));
  uVar3 = (uRam00000001832f3e38 ^ 0x4da9f6552b7ad1ee) << 0x34 |
          (uRam00000001832f3e38 ^ 0x4da9f6552b7ad1ee) >> 0xc;
  uRam00000001832f3c48 = (uRam00000001832f3c48 ^ uVar3) + 0xb25609aad4852e12 ^ 0x8b3a23c4fed41bd0;
  uRam00000001832f3cf0 = (uRam00000001832f3cf0 * 0x3675a0428a79209 ^ uRam00000001832f3c48) + uVar3;
  uRam00000001832f3ef8 = uRam00000001832f3cf0 ^ uRam00000001832f3c48;
  uRam00000001832f3ca0 = 0xb25609aad4852e12;
  uVar3 = (~uRam00000001832f3c40 + 0x8e60fbf734fa2f51) *
          ((uRam00000001832f3b60 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832f3b60 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001832f3b70) + (uVar3 & uRam00000001832f3b70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3b20 =
       func_0x00018c245bf0((uVar3 | 0x8e60fbf7b0d80c75) + (uVar3 & 0x8e60fbf7b0d80c75));
  uRam00000001832f3e48 =
       (uRam00000001832f3e48 ^ uRam00000001832f3b20 ^ 0x8e60fbf734fa2f50) + 0x719f0408cb05d0b0 ^
       0x7e5e12ff192a51bc;
  uRam00000001832f3c00 =
       (uRam00000001832f3c00 * 0x3e2521fcdbdd91fd ^ uRam00000001832f3e48) +
       (uRam00000001832f3b20 ^ 0x8e60fbf734fa2f50);
  uRam00000001832f3ca8 = uRam00000001832f3c00 ^ uRam00000001832f3e48;
  uRam00000001832f3e60 = 0x719f0408cb05d0b0;
  uRam00000001832f3ec0 = func_0x00018c245bf0(uRam00000001832f3b40 ^ 0xb1529fb08ab44755);
  uVar3 = uRam00000001832f3ec0 ^ 0x8e60fbf734fa2f50;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar3;
  uRam00000001832f3b48 = uRam00000001832f3eb0 ^ uVar3 ^ 0x8e60fbf734faaf4f;
  uRam00000001832f3c18 = (uRam00000001832f3c18 ^ uVar3) + 0x8e60fbf734faaf4f ^ 0x40cb4b02ed8bc9a9;
  uRam00000001832f3ea0 = (uRam00000001832f3ea0 * -0x5321157597d17467 ^ uRam00000001832f3c18) + uVar3
  ;
  uRam00000001832f3d70 = uRam00000001832f3ea0 ^ uRam00000001832f3c18;
  uRam00000001832f3d18 = 0x8e60fbf734faaf4f;
  uVar3 = (~uRam00000001832f3cb8 + 0x719f0408cb05d0b1) *
          ((uRam00000001832f3e58 ^ 0x8e60fbf7b0d88c6a) +
          (uRam00000001832f3e58 & 0xe60fbf7b0d88c6a) * 2);
  uVar3 = (uVar3 | uRam00000001832f3d80) + (uVar3 & uRam00000001832f3d80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3b08 =
       func_0x00018c245bf0((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar3 = ~(uRam00000001832f3b08 << 0x2a | uRam00000001832f3b08 >> 0x16) & 0x8e60fbf734faaf4f |
          0x2f4f;
  uRam00000001832f3dc0 = uRam00000001832f3e30 ^ uVar3 ^ 0x7fff;
  uRam00000001832f3ca8 = (uRam00000001832f3ca8 ^ uVar3) + 0x7fff ^ 0xf320621a7f721e35;
  uRam00000001832f3bd0 = (uRam00000001832f3bd0 * 0xd1e31eb40a4a32b ^ uRam00000001832f3ca8) + uVar3;
  uRam00000001832f3de8 = uRam00000001832f3bd0 ^ uRam00000001832f3ca8;
  uRam00000001832f3ec8 = 0x7fff;
  uVar3 = (~uRam00000001832f3e30 + 0x9e388cc76f9af5b0) *
          ((uRam00000001832f3d90 ^ 0xee6d6e9ffb6fdeaa) +
          (uRam00000001832f3d90 & 0x6e6d6e9ffb6fdeaa) * 2);
  uVar3 = (uVar3 | uRam00000001832f3e80) + (uVar3 & uRam00000001832f3e80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3d88 =
       func_0x00018c245bf0((uVar3 | 0x7055e25894f52b05) + (uVar3 & 0x7055e25894f52b05));
  uVar3 = (uRam00000001832f3d88 ^ 0x9e388cc76f9af5af) * 0x2a3b537cb3608ef9;
  uRam00000001832f3e98 = uRam00000001832f3e78 ^ uVar3 ^ 0x8ca5fb66eee8f33e;
  uRam00000001832f3c70 = (uRam00000001832f3c70 ^ uVar3) + 0x8ca5fb66eee8f33e ^ 0xa3a33d69667d7d7e;
  uRam00000001832f3c00 = (uRam00000001832f3c00 * 0x2f859d61378be9e7 ^ uRam00000001832f3c70) + uVar3;
  uRam00000001832f3c50 = uRam00000001832f3c00 ^ uRam00000001832f3c70;
  uRam00000001832f3e40 = 0x8ca5fb66eee8f33e;
  uRam00000001832f3c60 = func_0x00018c245bf0(uRam00000001832f3ef8 + 0xb7e4cc73fc5e54af ^ 0x35);
  uVar3 = uRam00000001832f3c60 - (uRam00000001832f3c60 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001832f3c60;
  uRam00000001832f3bc0 = (uRam00000001832f3bc0 ^ uVar3) + 0x7055e25810d70820 ^ 0x780fba598e322889;
  uRam00000001832f3c88 = (uRam00000001832f3c88 * -0x21cc7351bc537cb7 ^ uRam00000001832f3bc0) + uVar3
  ;
  uRam00000001832f3e10 = uRam00000001832f3c88 ^ uRam00000001832f3bc0;
  uRam00000001832f3dd0 = 0x7055e25810d70820;
  uVar3 = (uRam00000001832f3e98 ^ _UNK_181e16940) + uRam00000001832f3c08 + 0x7055e25894f52b05;
  uVar4 = (uRam00000001832f3c08 ^ _UNK_181e16948) + uRam00000001832f3e98 + 0x1c50190ede11eb1e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3e98 ^ _UNK_181e16940;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832f3c08 ^ _UNK_181e16948;
  uRam00000001832f3b80 =
       func_0x00018c245bf0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832f3e98 + 0x1c50190ede11eb1e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f3c08 + 0x7055e25894f52b05));
  uRam00000001832f3c78 = uRam00000001832f3d38 ^ uRam00000001832f3c00 ^ 0x8ca5fb66eee8f33e;
  uRam00000001832f3de0 =
       (uRam00000001832f3de0 ^ uRam00000001832f3c00) + 0x8ca5fb66eee8f33e ^ 0x35535d89fc9faf57;
  uRam00000001832f3c68 =
       (uRam00000001832f3c68 * 0x73fe044cf6e0e1d5 ^ uRam00000001832f3de0) + uRam00000001832f3c00;
  uRam00000001832f3c98 = uRam00000001832f3c68 ^ uRam00000001832f3de0;
  uRam00000001832f3b40 = 0x8ca5fb66eee8f33e;
  uRam00000001832f3ce8 = func_0x00018c245bf0(uRam00000001832f3b18 + 0xffe2ff7c23001dff ^ 0xf6);
  uRam00000001832f3b18 = uRam00000001832f3ce8 ^ 0x6b7f61a90f7ec304;
  uVar3 = uRam00000001832f3b18 >> 1 | uRam00000001832f3b18;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam00000001832f3b18 =
       (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
       uRam00000001832f3b18;
  uRam00000001832f3c80 = uRam00000001832f3c80 ^ uRam00000001832f3b18 ^ 0xc6d720b4a029cdb4;
  uRam00000001832f3df0 =
       (uRam00000001832f3df0 * 0x444f93bd84133565 ^ uRam00000001832f3c80) + uRam00000001832f3b18;
  uRam00000001832f3bb8 = uRam00000001832f3df0 ^ uRam00000001832f3c80;
  uRam00000001832f3b30 = 0;
  uVar3 = (uRam00000001832f3dc8 ^ 0x84225cda) + uRam00000001832f3d98 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3dc8 ^ 0x84225cda;
  uVar4 = ((uRam00000001832f3d98 + uRam00000001832f3dc8) * 0x2000 |
          uRam00000001832f3d98 + uRam00000001832f3dc8 >> 0x33) ^ uRam00000001832f3d98;
  uRam00000001832f3dd8 =
       func_0x00018c245bf0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam00000001832f3dc8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3d98 + 0x84225cda));
  uVar3 = (uRam00000001832f3dd8 ^ 0x7fff) & 0x7fffffffffffffff;
  uRam00000001832f3c40 = uRam00000001832f3d70 ^ uVar3 ^ 0x7fff;
  uRam00000001832f3e90 = (uRam00000001832f3e90 ^ uVar3) + 0x7fff ^ 0x746fc8327aab8dad;
  uRam00000001832f3bc8 = (uRam00000001832f3bc8 * -0x157f8a7cdbfdfc85 ^ uRam00000001832f3e90) + uVar3
  ;
  uRam00000001832f3db8 = uRam00000001832f3bc8 ^ uRam00000001832f3e90;
  uRam00000001832f3d58 = 0x7fff;
  uRam00000001832f3da0 = func_0x00018c245bf0(uRam00000001832f3b58 ^ 0xe0216dfbab6e70e4);
  uVar3 = uRam00000001832f3da0 >> 1 | uRam00000001832f3da0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam00000001832f3da0;
  uVar3 = uVar3 << 0x27 | uVar3 >> 0x19;
  uRam00000001832f3e60 = (uRam00000001832f3e60 ^ uVar3) + 0x1192916080b20270 ^ 0xba25b2f68b2469;
  uRam00000001832f3ec8 = (uRam00000001832f3ec8 * 0x7de607dd80cbb763 ^ uRam00000001832f3e60) + uVar3;
  uRam00000001832f3b28 = uRam00000001832f3ec8 ^ uRam00000001832f3e60;
  uRam00000001832f3d58 = 0x1192916080b20270;
  uVar3 = (uRam00000001832f3bb0 ^ _UNK_181e16950) + uRam00000001832f3b80 + 0xee6d6e9ffb6fdeaa;
  uVar4 = (uRam00000001832f3b80 ^ _UNK_181e16958) + uRam00000001832f3bb0 + 0x1192916080b20270;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3bb0 ^ _UNK_181e16950;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001832f3b80 ^ _UNK_181e16958;
  uRam00000001832f3df8 =
       func_0x00018c245bf0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001832f3bb0 + 0x1192916080b20270) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f3b80 + 0xee6d6e9ffb6fdeaa));
  uVar3 = (uRam00000001832f3df8 >> 0x1a) * -0x5233ed445c000000;
  uRam00000001832f3c98 = uRam00000001832f3c98 ^ uVar3 ^ 0x4199b9c7a88068f;
  uRam00000001832f3e90 = (uRam00000001832f3e90 * 0x87db1fff4960b6f ^ uRam00000001832f3c98) + uVar3;
  uRam00000001832f3c88 = uRam00000001832f3e90 ^ uRam00000001832f3c98;
  uRam00000001832f3ce8 = 0;
  param_4 = param_4 & 0x7fff;
  uVar6 = (ulonglong)param_3;
  uVar3 = (ulonglong)param_4 ^ 0x84222325;
  uVar4 = uVar3 ^ uRam00000001832f3e88;
  lVar2 = uVar3 + uRam00000001832f3d60;
  uVar3 = uVar4 + lVar2;
  uVar5 = (uVar6 ^ uRam00000001832f3d60) + uRam00000001832f3e88 + uVar6;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar4;
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6 ^ uRam00000001832f3d60;
  uRam00000001832f3d58 =
       func_0x00018c245bf0((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3e88 + uVar6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  uVar3 = ((param_4 | param_3) ^ uRam00000001832f3d58) << 0x1f | uRam00000001832f3d58 >> 0x21;
  uVar4 = (param_4 + uVar6) - (ulonglong)((param_3 & param_4) * 2);
  uRam00000001832f3c18 = (uRam00000001832f3c18 ^ uVar3) + uVar4 ^ 0xa50e2957ecf607b6;
  uRam00000001832f3b70 = (uRam00000001832f3b70 * -0x2e4567327e593a6b ^ uRam00000001832f3c18) + uVar3
  ;
  uRam00000001832f3b08 = uRam00000001832f3b70 ^ uRam00000001832f3c18;
  uVar4 = uVar4 & 0xffffffff;
  uVar3 = (uRam00000001832f3ee8 ^ _UNK_181e16960) + uRam00000001832f3c50 + 0xc440474f;
  uVar6 = (uRam00000001832f3c50 ^ _UNK_181e16968) + uRam00000001832f3ee8 + 0xb22538fd;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3ee8 ^ _UNK_181e16960;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832f3c50 ^ _UNK_181e16968;
  uRam00000001832f3cf8 = uVar4;
  uRam00000001832f3b60 =
       func_0x00018c245bf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832f3ee8 + 0xb22538fd) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3c50 + 0xc440474f));
  uVar3 = uRam00000001832f3b60 << 0x26 | uRam00000001832f3b60 >> 0x1a;
  uRam00000001832f3b08 = (uRam00000001832f3b08 ^ uVar3) + 0xf2475c97 ^ 0x2d0f52f27c82ec94;
  uRam00000001832f3b58 = (uRam00000001832f3b58 * -0x39db9faf1e795c3 ^ uRam00000001832f3b08) + uVar3;
  uRam00000001832f3bc8 = uRam00000001832f3b58 ^ uRam00000001832f3b08;
  uRam00000001832f3bc0 = 0xf2475c97;
  uRam00000001832f3c00 = func_0x00018c245bf0(uRam00000001832f3cc0 ^ 0xff60ffe874ff71ef);
  uRam00000001832f3dc8 =
       (uRam00000001832f3dc8 ^ uRam00000001832f3c00) - 0x9facbcb0 ^ 0xcf700b7e3ec1a55a;
  uRam00000001832f3d90 =
       (uRam00000001832f3d90 * 0x189dd7e19c41ce35 ^ uRam00000001832f3dc8) + uRam00000001832f3c00;
  uRam00000001832f3b40 = uRam00000001832f3d90 ^ uRam00000001832f3dc8;
  uRam00000001832f3b50 = 0x60534350;
  uRam00000001832f3cc8 = func_0x00018c245bf0(uRam00000001832f3e70 ^ 0xff20ffe940ff7528);
  uVar3 = (ulonglong)
          (~(((uint)(uRam00000001832f3cc8 << 8) | (uint)(byte)(uRam00000001832f3cc8 >> 0x38)) * 2)
           >> 1 & 0x7ed6);
  uRam00000001832f3e08 = uRam00000001832f3cc8 ^ uVar3 ^ 0x9fad3b86;
  uRam00000001832f3d30 = (uRam00000001832f3d30 ^ uVar3) + 0x9fad3b86 ^ 0x52d6b7b1ec226cb0;
  uRam00000001832f3cb8 = (uRam00000001832f3cb8 * 0x1bf8c08ee1ac2e33 ^ uRam00000001832f3d30) + uVar3;
  uRam00000001832f3d88 = uRam00000001832f3cb8 ^ uRam00000001832f3d30;
  uRam00000001832f3c28 = 0x9fad3b86;
  uRam00000001832f3d88 = func_0x00018c245bf0(uRam00000001832f3c68 + 0xff970052b9001aff ^ 0xf2);
  uVar3 = uRam00000001832f3d88 >> 1 | uRam00000001832f3d88;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam00000001832f3d88;
  uRam00000001832f3ee0 = (uRam00000001832f3ee0 ^ uVar3) - 0xd207b8ec ^ 0xc7450c5c9d813f23;
  uRam00000001832f3d50 =
       (uRam00000001832f3d50 * 0xa0946c7bab363b9 ^ uRam00000001832f3ee0) + uVar3 ^
       uRam00000001832f3ee0;
  uRam00000001832f3b28 = 0x2df84714;
  uVar3 = (~uRam00000001832f3d98 + 0xd207b8ed) *
          ((uRam00000001832f3da8 ^ 0x84225df3) +
          (ulonglong)((uint)uRam00000001832f3da8 & 0x84225df3) * 2);
  uVar3 = (uVar3 | uRam00000001832f3d10) + (uVar3 & uRam00000001832f3d10);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3c08 =
       func_0x00018c245bf0((uVar3 | 0x5625e51f) + (ulonglong)((uint)uVar3 & 0x5625e51f));
  uVar3 = (ulonglong)(~(uint)uRam00000001832f3c08 & 0x7ed6) * 0x26949af29a2fdedd;
  uRam00000001832f3ed8 = uRam00000001832f3c00 ^ uVar3 ^ 0xd20837c2;
  uRam00000001832f3c68 = (uRam00000001832f3c68 ^ uVar3) + 0xd20837c2 ^ 0x3f3f97ba85b54ddd;
  uRam00000001832f3b20 = (uRam00000001832f3b20 * -0x406f331ecbafc709 ^ uRam00000001832f3c68) + uVar3
  ;
  uRam00000001832f3ea0 = uRam00000001832f3b20 ^ uRam00000001832f3c68;
  uRam00000001832f3c60 = 0xd20837c2;
  uVar3 = (uRam00000001832f3de0 ^ _UNK_181e16970) + uRam00000001832f3cb0 + 0x84222325;
  uVar6 = (uRam00000001832f3cb0 ^ _UNK_181e16978) + uRam00000001832f3de0 + 0x5d37488;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3de0 ^ _UNK_181e16970;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832f3cb0 ^ _UNK_181e16978;
  uRam00000001832f3ce8 =
       func_0x00018c245bf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832f3de0 + 0x5d37488) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3cb0 + 0x84222325));
  uRam00000001832f3d28 =
       (uRam00000001832f3d28 ^ uRam00000001832f3c00) - 0x5d37488 ^ 0x4e7c0479f7d55fe2;
  uRam00000001832f3d58 =
       (uRam00000001832f3d58 * 0x334b8cbfa9541d61 ^ uRam00000001832f3d28) + uRam00000001832f3c00;
  uRam00000001832f3e58 = uRam00000001832f3d58 ^ uRam00000001832f3d28;
  uRam00000001832f3d90 = 0xfa2c8b78;
  uVar3 = (~uRam00000001832f3b80 + 0xfa2c8b79) *
          ((uRam00000001832f3b40 ^ 0x81f1d07b) +
          (ulonglong)((uint)uRam00000001832f3b40 & 0x81f1d07b) * 2);
  uVar3 = (uVar3 | uRam00000001832f3c88) + (uVar3 & uRam00000001832f3c88);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3de0 =
       func_0x00018c245bf0((uVar3 | 0x7bdd5b03) + (ulonglong)((uint)uVar3 & 0x7bdd5b03));
  uVar3 = uRam00000001832f3de0 >> 1 | uRam00000001832f3de0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001832f3de0;
  uRam00000001832f3de8 = uRam00000001832f3bf8 ^ uVar3 ^ 0x100007ed6;
  uRam00000001832f3ef0 = (uRam00000001832f3ef0 ^ uVar3) + 0x100007ed6 ^ 0x7dd7e3e31b1af86d;
  uRam00000001832f3ba0 = (uRam00000001832f3ba0 * 0xe71b0307ce92843 ^ uRam00000001832f3ef0) + uVar3;
  uRam00000001832f3c00 = uRam00000001832f3ba0 ^ uRam00000001832f3ef0;
  uRam00000001832f3c60 = 0x7ed6;
  uRam00000001832f3cb8 = func_0x00018c245bf0(uRam00000001832f3b10 ^ 0xff460080c400997b);
  uVar3 = (uRam00000001832f3cb8 & 0xfffffffffffffffc) << 5 | uRam00000001832f3cb8 >> 0x3b;
  uRam00000001832f3e08 = uRam00000001832f3c58 ^ uVar3 ^ 0x1ea471695;
  uRam00000001832f3b58 = (uRam00000001832f3b58 ^ uVar3) + 0x1ea471695 ^ 0x17c344921f1c8252;
  uRam00000001832f3e00 = (uRam00000001832f3e00 * 0x9577586d0f2a7e5 ^ uRam00000001832f3b58) + uVar3;
  uRam00000001832f3e98 = uRam00000001832f3e00 ^ uRam00000001832f3b58;
  uRam00000001832f3c98 = 0xea471695;
  uVar3 = (~uRam00000001832f3d60 + 0xf2475c98) *
          ((uRam00000001832f3e58 ^ 0x73dd9adb) +
          (ulonglong)((uint)uRam00000001832f3e58 & 0x73dd9adb) * 2);
  uVar3 = (uVar3 | uRam00000001832f3d40) + (uVar3 & uRam00000001832f3d40);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3b08 =
       func_0x00018c245bf0((uVar3 | 0x819ac64c) + (ulonglong)((uint)uVar3 & 0x819ac64c));
  uRam00000001832f3c88 =
       (uRam00000001832f3c88 ^ uRam00000001832f3b08) + 0x5b8e569 ^ 0x51fae459406dd862;
  uRam00000001832f3e48 =
       (uRam00000001832f3e48 * 0x22ec548f4054a8e7 ^ uRam00000001832f3c88) + uRam00000001832f3b08;
  uRam00000001832f3eb0 = uRam00000001832f3e48 ^ uRam00000001832f3c88;
  uRam00000001832f3de8 = 0x5b8e569;
  uVar3 = (uRam00000001832f3d28 ^ _UNK_181e16980) + uRam00000001832f3ef0 + 0x73dd9adb;
  uVar6 = (uRam00000001832f3ef0 ^ _UNK_181e16988) + uRam00000001832f3d28 + 0xf2475c97;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3d28 ^ _UNK_181e16980;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832f3ef0 ^ _UNK_181e16988;
  uRam00000001832f3e08 =
       func_0x00018c245bf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832f3d28 + 0xf2475c97) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3ef0 + 0x73dd9adb));
  uRam00000001832f3e70 =
       (uRam00000001832f3e70 ^ uRam00000001832f3e08) + 0xf2471896 ^ 0x415477b2655eab0a;
  uRam00000001832f3bc0 =
       (uRam00000001832f3bc0 * 0x54e6422fbd295d3f ^ uRam00000001832f3e70) + uRam00000001832f3e08;
  uRam00000001832f3df8 = uRam00000001832f3bc0 ^ uRam00000001832f3e70;
  uRam00000001832f3c30 = 0xf2471896;
  uVar3 = (uRam00000001832f3e58 ^ _UNK_181e16990) + uRam00000001832f3df0 + 0x819ac64c;
  uVar6 = (uRam00000001832f3df0 ^ _UNK_181e16998) + uRam00000001832f3e58 + 0xe48e312c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3e58 ^ _UNK_181e16990;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832f3df0 ^ _UNK_181e16998;
  uRam00000001832f3c28 =
       func_0x00018c245bf0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832f3e58 + 0xe48e312c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3df0 + 0x819ac64c));
  uVar3 = uRam00000001832f3c28 ^ 0x51bd9fa23ee870c;
  uRam00000001832f3ba0 =
       (uRam00000001832f3d78 ^ uVar3 ^ 0xea471695 ^ uVar3) + 0xea471695 ^ 0xdd99bd73e25261a9;
  uRam00000001832f3d60 = (uRam00000001832f3d60 * -0x9500ecfa0b5b915 ^ uRam00000001832f3ba0) + uVar3;
  uRam00000001832f3c18 = 0xea471695;
  uVar3 = (~uRam00000001832f3d50 + 0x100000000) *
          ((uRam00000001832f3e40 ^ 0x73dd9adb) +
          (ulonglong)((uint)uRam00000001832f3e40 & 0x73dd9adb) * 2);
  uVar3 = (uVar3 | uRam00000001832f3e68) + (uVar3 & uRam00000001832f3e68);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3cd0 =
       func_0x00018c245bf0((uVar3 | 0x8c226524) + (ulonglong)((uint)uVar3 & 0x8c226524));
  uVar3 = (uRam00000001832f3cd0 ^ 0xfffffffc) & 0xfffffffffffffffc;
  uRam00000001832f3ba0 = (uRam00000001832f3ba0 ^ uVar3) + 0x8004601 ^ 0xfec79c3ada8bb53;
  uRam00000001832f3cd8 = (uRam00000001832f3cd8 * -0x4aee78ada1f306c9 ^ uRam00000001832f3ba0) + uVar3
  ;
  uRam00000001832f3b18 = uRam00000001832f3cd8 ^ uRam00000001832f3ba0;
  uRam00000001832f3c48 = 0x8004601;
  uVar3 = (~uRam00000001832f3c08 + 0x8004602) *
          ((uRam00000001832f3bf8 ^ 0x73dd9adb) +
          (ulonglong)((uint)uRam00000001832f3bf8 & 0x73dd9adb) * 2);
  uVar3 = (uVar3 | uRam00000001832f3c28) + (uVar3 & uRam00000001832f3c28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3b40 =
       func_0x00018c245bf0((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda));
  uVar3 = (uRam00000001832f3b40 << 0x1d | uRam00000001832f3b40 >> 0x23) << 0x22 |
          (uRam00000001832f3b40 & 0x7ffffffff) >> 1;
  uRam00000001832f3dd8 = uRam00000001832f3dd8 ^ uVar3 ^ 0x20ef286fd5e4f044;
  uRam00000001832f3e68 = (uRam00000001832f3e68 * -0x5d45ccb39fbb60a7 ^ uRam00000001832f3dd8) + uVar3
  ;
  uRam00000001832f3cb8 = uRam00000001832f3e68 ^ uRam00000001832f3dd8;
  uRam00000001832f3e08 = 0;
  uVar3 = ((uRam00000001832f3e38 ^ 0x84225df3) +
          (ulonglong)((uint)uRam00000001832f3e38 & 0x84225df3) * 2) * -lRam00000001832f3c20;
  uVar3 = (uVar3 | uRam00000001832f3b38) + (uVar3 & uRam00000001832f3b38);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3b80 =
       func_0x00018c245bf0((uVar3 | 0x84225df3) + (ulonglong)((uint)uVar3 & 0x84225df3));
  uVar3 = uRam00000001832f3b80 >> 1 | uRam00000001832f3b80;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~(((uint)(0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                    >> 0x20) ^ (uint)(uRam00000001832f3b80 >> 0x20)) >> 6) & 0x7ed6);
  uRam00000001832f3ce0 = uRam00000001832f3ba0 ^ uVar3 ^ 0x7ed6;
  uRam00000001832f3ca0 = (uRam00000001832f3ca0 ^ uVar3) + 0x7ed6 ^ 0xbb02af02bc0a14f2;
  uRam00000001832f3b18 = (uRam00000001832f3b18 * 0x64a4da5cbe1011d3 ^ uRam00000001832f3ca0) + uVar3;
  uRam00000001832f3bb0 = uRam00000001832f3b18 ^ uRam00000001832f3ca0;
  uRam00000001832f3cf8 = 0x7ed6;
  uVar3 = (~uRam00000001832f3ca8 + 0x13fab1a5) *
          ((uRam00000001832f3dd8 ^ 0x97d89281) +
          (ulonglong)((uint)uRam00000001832f3dd8 & 0x97d89281) * 2);
  uVar3 = (uVar3 | uRam00000001832f3c40) + (uVar3 & uRam00000001832f3c40);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3b48 =
       func_0x00018c245bf0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uVar3 = (uRam00000001832f3b48 ^ 0x13fab1a4) * -0x26081905c423df03 ^ 0x13fab1a4;
  uRam00000001832f3e10 = uRam00000001832f3e10 ^ uVar3 ^ 0x8610d89ec926f45a;
  uRam00000001832f3d48 = (uRam00000001832f3d48 * 0x6c37c488f46f64a5 ^ uRam00000001832f3e10) + uVar3;
  uRam00000001832f3e40 = uRam00000001832f3d48 ^ uRam00000001832f3e10;
  uRam00000001832f3dd8 = 0;
  uRam00000001832f3c60 = func_0x00018c245bf0(uRam00000001832f3b08 + 0x5cff83d10021ff ^ 0x44);
  uVar3 = (ulonglong)(~(uint)uRam00000001832f3c60 & 0x7ed6);
  uRam00000001832f3b38 = uRam00000001832f3c90 ^ uVar3 ^ 0x7ed6;
  uRam00000001832f3bc8 = (uRam00000001832f3bc8 ^ uVar3) + 0x7ed6 ^ 0x3cb97681f2f7b787;
  uRam00000001832f3cc8 = (uRam00000001832f3cc8 * -0x5ad961cc5b11d3db ^ uRam00000001832f3bc8) + uVar3
  ;
  uRam00000001832f3eb0 = uRam00000001832f3cc8 ^ uRam00000001832f3bc8;
  uRam00000001832f3de8 = 0x7ed6;
  uVar3 = (~uRam00000001832f3d98 + 0x7ed7) *
          ((uVar4 ^ 0x84222325 ^ uRam00000001832f3cd0) +
          (ulonglong)((uint)uRam00000001832f3cd0 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar3 = (uVar3 | uRam00000001832f3d20) + (uVar3 & uRam00000001832f3d20);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3e10 =
       func_0x00018c245bf0((uVar4 ^ 0x84225df3 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ 0x84225df3) & (uint)uVar3));
  uRam00000001832f3bd8 = uVar4 ^ 0x7ed6;
  uRam00000001832f3ea0 =
       (uRam00000001832f3ea0 ^ uRam00000001832f3e10 & 0x7fffffffffffffff) + uRam00000001832f3bd8 ^
       0x60a1f0180560e16c;
  uRam00000001832f3ea8 =
       (uRam00000001832f3ea8 * 0x717dcaa8c5990701 ^ uRam00000001832f3ea0) +
       (uRam00000001832f3e10 & 0x7fffffffffffffff);
  uRam00000001832f3ca8 = uRam00000001832f3ea8 ^ uRam00000001832f3ea0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c23cb8e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e14ac0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18c245c80, runtime 6ffff3e55c80) =====

void FUN_18c245c80(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018c245ccb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e16a90 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fo; aLE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18c246c90, runtime 6ffff3e56c90) =====

void FUN_18c246c90(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c246d19 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e17050 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLl (Lsixtwo/gM;)V (handler @ image 18c1fd220, runtime 6ffff3e0d220) =====

void FUN_18c1fd220(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c1fd26a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e097f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLm (Lsixtwo/gL$tk;)V (handler @ image 18c2499a0, runtime 6ffff3e599a0) =====

void FUN_18c2499a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c249a72 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e17fe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLn (Lsixtwo/gH$th;)V (handler @ image 18c2846f0, runtime 6ffff3e946f0) =====

void FUN_18c2846f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c2847ba did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e25b60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLo ()V (handler @ image 18c294730, runtime 6ffff3ea4730) =====

void FUN_18c294730(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018c29475b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2b920 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fo; aLq (Lnet/minecraft/class_1657;)Z (handler @ image 18c2951b0, runtime 6ffff3ea51b0) =====

void FUN_18c2951b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c295274 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2bd80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLr (Lnet/minecraft/class_1657;)Z (handler @ image 18c299170, runtime 6ffff3ea9170) =====

void FUN_18c299170(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c299234 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2ce60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLs (Lnet/minecraft/class_1657;)Z (handler @ image 18c29d050, runtime 6ffff3ead050) =====

void FUN_18c29d050(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c29d114 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2de50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLt (Lnet/minecraft/class_1657;)Z (handler @ image 18c2a0650, runtime 6ffff3eb0650) =====

void FUN_18c2a0650(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c2a0714 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2ec10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLu (Lnet/minecraft/class_1657;)Z (handler @ image 18c2a3cb0, runtime 6ffff3eb3cb0) =====

void FUN_18c2a3cb0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c2a3d0b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2fb30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLv (Lnet/minecraft/class_1657;)Z (handler @ image 18c1fd700, runtime 6ffff3e0d700) =====

void FUN_18c1fd700(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c1fd7ee did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e099c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLw (Lnet/minecraft/class_1657;)Z (handler @ image 18c205b70, runtime 6ffff3e15b70) =====

void FUN_18c205b70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c205bc5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e0bf00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fo; aLx (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18c206610, runtime 6ffff3e16610) =====

undefined8 FUN_18c206610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/fo; aLy ([B)Ljava/lang/String; (handler @ image 18c2066a0, runtime 6ffff3e166a0) =====

void FUN_18c2066a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018c206740 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e0c460 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fo; aLz (IJ)Ljava/lang/String; (handler @ image 18c2304b0, runtime 6ffff3e404b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2304b0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (~uRam00000001832f3a58 + 0xcfdf1b64ee57a5a) *
          ((uRam00000001832f3890 ^ 0x9118cca5b0c25d4f) +
          (uRam00000001832f3890 & 0x1118cca5b0c25d4f) * 2);
  uVar3 = (uVar3 | uRam00000001832f3568) + (uVar3 & uRam00000001832f3568);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3af8 =
       func_0x00018c237030((uVar3 | 0x9de53d13fe272716) + (uVar3 & 0x9de53d13fe272716));
  uVar3 = (uRam00000001832f3af8 ^ 0x9dfdfdb77ee57e7b) * -0x5dd8b5d7843b63e9;
  uRam00000001832f3618 = (uRam00000001832f3618 ^ uVar3) + 0x9dfdfdb77ee57e7b ^ 0x70695b6f140a18ad;
  uRam00000001832f3640 = (uRam00000001832f3640 * 0x60eee93314cd84f7 ^ uRam00000001832f3618) + uVar3;
  uRam00000001832f37f8 = uRam00000001832f3640 ^ uRam00000001832f3618;
  uRam00000001832f3558 = 0x9dfdfdb77ee57e7b;
  uRam00000001832f3548 = func_0x00018c237030(uRam00000001832f3740 ^ 0x2e793e8b334244d);
  uVar3 = (uRam00000001832f3548 ^ 0xacfc740393050b98) << 0x1f |
          (uRam00000001832f3548 ^ 0xacfc740393050b98) >> 0x21;
  uRam00000001832f3888 = (uRam00000001832f3888 ^ uVar3) + 0x53038bfc6cfaf468 ^ 0xc55279571d725fe6;
  uRam00000001832f3ad8 = (uRam00000001832f3ad8 * -0x32c3d92d1ee0e245 ^ uRam00000001832f3888) + uVar3
  ;
  uRam00000001832f3740 = uRam00000001832f3ad8 ^ uRam00000001832f3888;
  lRam00000001832f3818 = 0x53038bfc6cfaf468;
  uVar3 = (~uRam00000001832f3550 + 0xacfc740393050b99) *
          ((uRam00000001832f3ad0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832f3ad0 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam00000001832f3768) + (uVar3 & uRam00000001832f3768);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3988 =
       func_0x00018c237030((uVar3 | 0xacfc740317275742) + (uVar3 & 0xacfc740317275742));
  uVar3 = uRam00000001832f3988 & 0x7fffffffffffffff;
  uRam00000001832f38a8 = uRam00000001832f3558 ^ uVar3 ^ 0xacfc740393058b97;
  uRam00000001832f35c8 = (uRam00000001832f35c8 ^ uVar3) + 0xacfc740393058b97 ^ 0x672934527252ef38;
  uRam00000001832f3af8 = (uRam00000001832f3af8 * 0x3eaed8410675fb05 ^ uRam00000001832f35c8) + uVar3;
  uRam00000001832f3940 = uRam00000001832f3af8 ^ uRam00000001832f35c8;
  uRam00000001832f3658 = 0xacfc740393058b97;
  uVar3 = (uRam00000001832f3598 ^ _UNK_181e13580) + uRam00000001832f3578 + 0xacfc74031727a8b2;
  uVar5 = (uRam00000001832f3578 ^ _UNK_181e13588) + uRam00000001832f3598 + 0x53038bfc6cfaf468;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3598 ^ _UNK_181e13580;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f3578 ^ _UNK_181e13588;
  uRam00000001832f37b8 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832f3598 + 0x53038bfc6cfaf468) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f3578 + 0xacfc74031727a8b2));
  uRam00000001832f3690 = uRam00000001832f35c8 ^ uRam00000001832f37b8 ^ 0x7fff;
  uRam00000001832f39e8 = (uRam00000001832f39e8 ^ uRam00000001832f37b8) + 0x7fff ^ 0xc2b602ba7cd29830
  ;
  uRam00000001832f3908 =
       (uRam00000001832f3908 * -0x7430c180567ddbeb ^ uRam00000001832f39e8) + uRam00000001832f37b8;
  uRam00000001832f37f8 = uRam00000001832f3908 ^ uRam00000001832f39e8;
  uRam00000001832f38b0 = 0x7fff;
  uRam00000001832f35a8 = func_0x00018c237030(lRam00000001832f35d0 + 0xb8b9319dca15bcaaU ^ 0xd9);
  uRam00000001832f3680 = uRam00000001832f37b0 * -0x5204023b2304f925;
  uRam00000001832f37f0 = uRam00000001832f37f0 + 0x10cee5b4d51185e1 ^ 0x34a0faa28572b24a;
  uRam00000001832f37b0 = uRam00000001832f3680 ^ uRam00000001832f37f0;
  uRam00000001832f3878 = 0x10cee5b4d51185e1;
  uVar3 = (~uRam00000001832f35a8 + 0xef311a4b2aee7a20) *
          ((uRam00000001832f35b0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832f35b0 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam00000001832f39e0) + (uVar3 & uRam00000001832f39e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3588 =
       func_0x00018c237030((uVar3 | 0xef311a4baecc26c5) + (uVar3 & 0xef311a4baecc26c5));
  uVar3 = uRam00000001832f3588 ^ 0x7fff;
  uRam00000001832f39e0 = uRam00000001832f3a58 ^ uVar3 ^ 0xef311a4b2aeefa1e;
  uRam00000001832f3890 = (uRam00000001832f3890 ^ uVar3) + 0xef311a4b2aeefa1e ^ 0x4be742bc98bf319d;
  uRam00000001832f3940 = (uRam00000001832f3940 * 0x67ece78e6b378531 ^ uRam00000001832f3890) + uVar3;
  uRam00000001832f3628 = uRam00000001832f3940 ^ uRam00000001832f3890;
  uRam00000001832f3a70 = 0xef311a4b2aeefa1e;
  uVar3 = (uRam00000001832f3840 ^ _UNK_181e13590) + uRam00000001832f3910 + 0xef311a4baeccd93b;
  uVar5 = (uRam00000001832f3910 ^ _UNK_181e13598) + uRam00000001832f3840 + 0x10cee5b4d51185e1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3840 ^ _UNK_181e13590;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f3910 ^ _UNK_181e13598;
  uRam00000001832f3668 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832f3840 + 0x10cee5b4d51185e1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f3910 + 0xef311a4baeccd93b));
  uVar3 = uRam00000001832f3668 ^ 0xef311a4b2aeefa1e;
  uRam00000001832f38b0 = uRam00000001832f3a10 ^ uVar3 ^ 0x7fff;
  uRam00000001832f3a50 = (uRam00000001832f3a50 ^ uVar3) + 0x7fff ^ 0xf699ae1cf02fd414;
  uRam00000001832f3550 = (uRam00000001832f3550 * 0x4ffbc79a636a8b8f ^ uRam00000001832f3a50) + uVar3;
  uRam00000001832f38c0 = uRam00000001832f3550 ^ uRam00000001832f3a50;
  uRam00000001832f37e0 = 0x7fff;
  uRam00000001832f39d8 = func_0x00018c237030(uRam00000001832f3830 ^ 0x3bb81b3de14e2279);
  uRam00000001832f35c8 = uRam00000001832f3938 ^ uRam00000001832f39d8 ^ 0x5b2dd244c64564f7;
  uRam00000001832f36c8 =
       (uRam00000001832f36c8 ^ uRam00000001832f39d8) + 0x5b2dd244c64564f7 ^ 0x751774aea68c07a2;
  uRam00000001832f37c8 =
       (uRam00000001832f37c8 * -0xb635b04c60382b7 ^ uRam00000001832f36c8) + uRam00000001832f39d8;
  uRam00000001832f3570 = uRam00000001832f37c8 ^ uRam00000001832f36c8;
  uRam00000001832f3518 = 0x5b2dd244c64564f7;
  uVar3 = (uRam00000001832f3618 ^ _UNK_181e135a0) + uRam00000001832f3958 + 0x5b2dd244426747d2;
  uVar5 = (uRam00000001832f3958 ^ _UNK_181e135a8) + uRam00000001832f3618 + 0xa4d22dbb39bb1b08;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3618 ^ _UNK_181e135a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f3958 ^ _UNK_181e135a8;
  uRam00000001832f3628 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832f3618 + 0xa4d22dbb39bb1b08) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f3958 + 0x5b2dd244426747d2));
  uVar3 = (uRam00000001832f3628 & 0x7fffffffffffffff) >> 1 |
          uRam00000001832f3628 & 0x7fffffffffffffff;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001832f3628 & 0x7fffffffffffffff;
  uRam00000001832f3ae0 = uRam00000001832f35e0 ^ uVar3 ^ 0x7fff;
  uRam00000001832f3a60 = (uRam00000001832f3a60 ^ uVar3) + 0x7fff ^ 0x845f49f41d8b9390;
  uRam00000001832f3a20 = (uRam00000001832f3a20 * -0x1665d1710880a113 ^ uRam00000001832f3a60) + uVar3
  ;
  uRam00000001832f3508 = uRam00000001832f3a20 ^ uRam00000001832f3a60;
  uRam00000001832f3550 = 0x7fff;
  lRam00000001832f3ae8 = func_0x00018c237030(lRam00000001832f36e8 + 0x875aa21f98ba6fc5U ^ 0x65);
  uVar3 = lRam00000001832f3ae8 * -0x60cbd6eb6d4cd10d;
  uRam00000001832f3ae0 = uRam00000001832f35e8 ^ uVar3 ^ 0xf9192ff718563a3c;
  uRam00000001832f3710 = (uRam00000001832f3710 ^ uVar3) + 0xf9192ff718563a3c ^ 0x31e7b6b06efd330a;
  uRam00000001832f38a0 = (uRam00000001832f38a0 * -0x44ac0f5964dbadb ^ uRam00000001832f3710) + uVar3;
  uRam00000001832f3570 = uRam00000001832f38a0 ^ uRam00000001832f3710;
  uRam00000001832f36f8 = 0xf9192ff718563a3c;
  uVar3 = (~uRam00000001832f3650 + 0x5b1b323f9970bbc2) *
          ((uRam00000001832f3610 ^ 0x9dfdfdb7fac75d5e) +
          (uRam00000001832f3610 & 0x1dfdfdb7fac75d5e) * 2);
  uVar3 = (uVar3 | uRam00000001832f3698) + (uVar3 & uRam00000001832f3698);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3560 =
       func_0x00018c237030((uVar3 | 0xc6e6cf8863b7e69f) + (uVar3 & 0xc6e6cf8863b7e69f));
  uRam00000001832f3570 =
       (uRam00000001832f3570 ^ uRam00000001832f3560 ^ 0x5b1b323f9970bbc1) + 0xc6e6cf88e795c5ba ^
       0xce97ae799ba9cb1;
  uRam00000001832f3a08 =
       (uRam00000001832f3a08 * -0x37ee98db45864797 ^ uRam00000001832f3570) +
       (uRam00000001832f3560 ^ 0x5b1b323f9970bbc1);
  uRam00000001832f3590 = uRam00000001832f3a08 ^ uRam00000001832f3570;
  uRam00000001832f3750 = 0xc6e6cf88e795c5ba;
  uVar3 = (uRam00000001832f3a90 ^ _UNK_181e135b0) + uRam00000001832f36f8 + 0x9dfdfdb7fac75d5e;
  uVar5 = (uRam00000001832f36f8 ^ _UNK_181e135b8) + uRam00000001832f3a90 + 0x5b1b323f9970bbc1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3a90 ^ _UNK_181e135b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f36f8 ^ _UNK_181e135b8;
  uRam00000001832f36c8 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832f3a90 + 0x5b1b323f9970bbc1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f36f8 + 0x9dfdfdb7fac75d5e));
  uRam00000001832f3a08 =
       (uRam00000001832f3a08 ^ uRam00000001832f36c8) + 0x1919303718603a41 ^ 0xdfe66e4acbbd8e29;
  uRam00000001832f37d0 =
       (uRam00000001832f37d0 * -0x16dcaa054eac922d ^ uRam00000001832f3a08) + uRam00000001832f36c8;
  uRam00000001832f3a98 = uRam00000001832f37d0 ^ uRam00000001832f3a08;
  uRam00000001832f3840 = 0x1919303718603a41;
  uVar3 = (~uRam00000001832f3968 + 0x3232606e30c07483) *
          ((uRam00000001832f39c0 ^ 0xc6e6cf8863b7e69f) +
          (uRam00000001832f39c0 & 0x46e6cf8863b7e69f) * 2);
  uVar3 = (uVar3 | uRam00000001832f39b0) + (uVar3 & uRam00000001832f39b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3ad8 =
       func_0x00018c237030((uVar3 | 0xf4d4afe65377921d) + (uVar3 & 0xf4d4afe65377921d));
  uVar3 = (uRam00000001832f3ad8 ^ 0xba1f87a693e6c4f6) >> 1 |
          uRam00000001832f3ad8 ^ 0xba1f87a693e6c4f6;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam00000001832f3ad8 ^ 0x7cf9482e7473014c ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20;
  uRam00000001832f3808 = uRam00000001832f3808 ^ uVar3 ^ 0xf9192ff718563a3c;
  uRam00000001832f3780 = (uRam00000001832f3780 ^ uVar3) + 0xf9192ff718563a3c ^ 0x8bf1d5d7fd2d907e;
  uRam00000001832f3ad0 = (uRam00000001832f3ad0 * 0x410f374b8f83ea97 ^ uRam00000001832f3780) + uVar3;
  uRam00000001832f35c8 = uRam00000001832f3ad0 ^ uRam00000001832f3780;
  uRam00000001832f37b0 = 0xf9192ff718563a3c;
  uVar3 = (~uRam00000001832f3588 + 0xf9192ff718563a3d) *
          ((uRam00000001832f3510 ^ 0xf9192ff79c741919) +
          (uRam00000001832f3510 & 0x79192ff79c741919) * 2);
  uVar3 = (uVar3 | uRam00000001832f3658) + (uVar3 & uRam00000001832f3658);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f39d0 =
       func_0x00018c237030((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam00000001832f3a78 = (uRam00000001832f39d0 ^ 0x3718563a3c) & 0x3fffffffff;
  uRam00000001832f3810 = uRam00000001832f3810 ^ uRam00000001832f3a78 ^ 0xebb38a7fd75ea714;
  uRam00000001832f39a8 =
       (uRam00000001832f39a8 * -0x7013b1f5b2961c51 ^ uRam00000001832f3810) + uRam00000001832f3a78;
  uRam00000001832f35c0 = uRam00000001832f39a8 ^ uRam00000001832f3810;
  uRam00000001832f35c8 = 0;
  uVar3 = uRam00000001832f3a00 * 0x2000 ^ uRam00000001832f3a00;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3ad0 =
       func_0x00018c237030((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = uRam00000001832f3ad0 & 0x7fffffffffffffff;
  uRam00000001832f35a0 = uRam00000001832f3560 ^ uVar3 ^ 0x7fff;
  uRam00000001832f37f8 = (uRam00000001832f37f8 ^ uVar3) + 0x7fff ^ 0x1bcad6f2725872b5;
  uRam00000001832f3538 = (uRam00000001832f3538 * -0x56bf7a98b2ea553f ^ uRam00000001832f37f8) + uVar3
  ;
  uRam00000001832f3908 = uRam00000001832f3538 ^ uRam00000001832f37f8;
  uRam00000001832f36d0 = 0x7fff;
  uVar3 = (uRam00000001832f37d8 ^ _UNK_181e135c0) + uRam00000001832f3930 + 0x9dfdfdb7fac75d5e;
  uVar5 = (uRam00000001832f3930 ^ _UNK_181e135c8) + (uRam00000001832f37d8 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f37d8 ^ _UNK_181e135c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f3930 ^ _UNK_181e135c8;
  uRam00000001832f3638 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832f37d8 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f3930 + 0x9dfdfdb7fac75d5e));
  uVar3 = ~uRam00000001832f3638 & 0x3fffffffffffff ^ 0x9dfdfdb77ee57e7b;
  uRam00000001832f39c0 = (uRam00000001832f39c0 ^ uVar3) + 0x62020248811a8184 ^ 0x2d8f43ae17454d86;
  uRam00000001832f3550 = (uRam00000001832f3550 * 0x549f312759aa3645 ^ uRam00000001832f39c0) + uVar3;
  uRam00000001832f3928 = uRam00000001832f3550 ^ uRam00000001832f39c0;
  uRam00000001832f3940 = 0x62020248811a8184;
  uVar3 = (uRam00000001832f36c8 ^ _UNK_181e135d0) + uRam00000001832f35f8 + 0x9dfdfdb7fac75d5e;
  uVar5 = (uRam00000001832f35f8 ^ _UNK_181e135d8) + uRam00000001832f36c8 + 0x62020248811a8184;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f36c8 ^ _UNK_181e135d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f35f8 ^ _UNK_181e135d8;
  uRam00000001832f35d8 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001832f36c8 + 0x62020248811a8184) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001832f35f8 + 0x9dfdfdb7fac75d5e));
  uRam00000001832f3a08 = uRam00000001832f3a08 ^ uRam00000001832f35d8 ^ 0x1881a111f20e503c;
  uRam00000001832f36f8 =
       (uRam00000001832f36f8 * 0x7f3cc372f87cad01 ^ uRam00000001832f3a08) + uRam00000001832f35d8;
  uRam00000001832f36b8 = uRam00000001832f36f8 ^ uRam00000001832f3a08;
  uRam00000001832f3890 = 0;
  uVar3 = (uRam00000001832f35d8 ^ 0x84225cda) + uRam00000001832f39b0 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f35d8 ^ 0x84225cda;
  uVar5 = ((uRam00000001832f39b0 + uRam00000001832f35d8) * 0x2000 |
          uRam00000001832f39b0 + uRam00000001832f35d8 >> 0x33) ^ uRam00000001832f39b0;
  uRam00000001832f3970 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001832f35d8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f39b0 + 0x84225cda));
  uVar3 = uRam00000001832f3970 & 0x7fffffffffff;
  uRam00000001832f36b0 = uRam00000001832f36f8 ^ uVar3 ^ 0x7fff;
  uRam00000001832f39d8 = (uRam00000001832f39d8 ^ uVar3) + 0x7fff ^ 0xb1191f8b34a7221a;
  uRam00000001832f35c8 = (uRam00000001832f35c8 * -0x58297ef8799ecf21 ^ uRam00000001832f39d8) + uVar3
  ;
  uRam00000001832f3900 = uRam00000001832f35c8 ^ uRam00000001832f39d8;
  uRam00000001832f3760 = 0x7fff;
  uRam00000001832f3738 = func_0x00018c237030(uRam00000001832f39b0 ^ 0xffdf0083db00213a);
  uVar3 = (uRam00000001832f3738 ^ 0x2534e07e6a) & 0x3fffffffff ^ 0x9118cca534e07e6a;
  uRam00000001832f3978 = uRam00000001832f3978 ^ uVar3 ^ 0x4e58d78b9249db08;
  uRam00000001832f38f0 = (uRam00000001832f38f0 * -0x6ae08f6929e621c7 ^ uRam00000001832f3978) + uVar3
  ;
  uRam00000001832f3a68 = uRam00000001832f38f0 ^ uRam00000001832f3978;
  uRam00000001832f3898 = 0;
  uVar3 = (uRam00000001832f3a10 ^ 0x84225cda) + uRam00000001832f3520 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3a10 ^ 0x84225cda;
  uVar5 = ((uRam00000001832f3520 + uRam00000001832f3a10) * 0x2000 |
          uRam00000001832f3520 + uRam00000001832f3a10 >> 0x33) ^ uRam00000001832f3520;
  uRam00000001832f3760 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001832f3a10 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3520 + 0x84225cda));
  uVar3 = (ulonglong)(~(uint)uRam00000001832f3760 & 0x7fff) * -0x2411aa7c49ef97b7;
  uRam00000001832f36f0 = uRam00000001832f3570 ^ uVar3 ^ 0x7fff;
  uRam00000001832f3888 = (uRam00000001832f3888 ^ uVar3) + 0x7fff ^ 0xa27c15255a2bb25e;
  uRam00000001832f3ac8 = (uRam00000001832f3ac8 * -0x3acc1388a2ceb52b ^ uRam00000001832f3888) + uVar3
  ;
  uRam00000001832f3a80 = uRam00000001832f3ac8 ^ uRam00000001832f3888;
  uRam00000001832f3848 = 0x7fff;
  uVar3 = param_4 ^ 0x84222325 ^ uRam00000001832f3760;
  lVar4 = (param_4 ^ 0x84222325) + uRam00000001832f3898;
  uVar5 = uVar3 + lVar4;
  uVar6 = (uRam00000001832f3898 ^ 0x7fff) + uRam00000001832f3760 + 0x7fff;
  uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar3;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832f3898 ^ 0x7fff;
  uRam00000001832f3820 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832f3760 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001832f36a0 = (ulonglong)uVar2;
  uRam00000001832f3958 =
       (uRam00000001832f3958 ^ uRam00000001832f3820 & 0xffffffffffffc000) + uRam00000001832f36a0 ^
       0xf321aec3594e7f02;
  uRam00000001832f35d8 =
       (uRam00000001832f35d8 * -0x2e09faa30014e12b ^ uRam00000001832f3958) +
       (uRam00000001832f3820 & 0xffffffffffffc000);
  uRam00000001832f3768 = uRam00000001832f35d8 ^ uRam00000001832f3958;
  uVar3 = (uRam00000001832f3510 ^ _UNK_181e135e0) + uRam00000001832f3980 + 0x84222325;
  uVar5 = (uRam00000001832f3980 ^ _UNK_181e135e8) + uRam00000001832f3510 + 0xd5f1e241;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3510 ^ _UNK_181e135e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f3980 ^ _UNK_181e135e8;
  uRam00000001832f36f0 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832f3510 + 0xd5f1e241) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3980 + 0x84222325));
  uVar3 = (uRam00000001832f36f0 & 0x7fffffffffffffff) -
          ((uRam00000001832f36f0 & 0x7fffffffffffffff) >> 1 & 0x1555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          ((uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2)
          ^ uRam00000001832f36f0 & 0x7fffffffffffffff;
  uRam00000001832f3a30 = (uRam00000001832f3a30 ^ uVar3) - 0xd5f1e241 ^ 0xb93f114154fd2c0d;
  uRam00000001832f3ad8 = (uRam00000001832f3ad8 * -0x7b4db8f1deb8b59 ^ uRam00000001832f3a30) + uVar3;
  uRam00000001832f3af0 = uRam00000001832f3ad8 ^ uRam00000001832f3a30;
  uRam00000001832f37f0 = 0x2a0e1dbf;
  uRam00000001832f3a58 = func_0x00018c237030(uRam00000001832f39f0 ^ 0xff59ffb07d00b0c3);
  uVar3 = (uRam00000001832f3a58 ^ 0x24abaa98c621) << 0x2f |
          (uRam00000001832f3a58 ^ 0x24abaa98c621) >> 0x11;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  uRam00000001832f37c8 = uRam00000001832f38f8 ^ uVar3 ^ 0xd5f20e22;
  uRam00000001832f3550 = (uRam00000001832f3550 ^ uVar3) + 0xd5f20e22 ^ 0x54cb8525480c2ed1;
  uRam00000001832f3788 = (uRam00000001832f3788 * 0x64f3675a495954c5 ^ uRam00000001832f3550) + uVar3;
  uRam00000001832f36d8 = uRam00000001832f3788 ^ uRam00000001832f3550;
  uRam00000001832f3840 = 0xd5f20e22;
  uRam00000001832f3670 = func_0x00018c237030(uRam00000001832f3a10 ^ 0x37ff839dff92f1);
  uVar3 = uRam00000001832f3670 << 0x2a | uRam00000001832f3670 >> 0x16;
  uRam00000001832f3a28 = (uRam00000001832f3a28 ^ uVar3) - 0x18f7bc3 ^ 0xd1d02764faeac9d0;
  uRam00000001832f3888 = (uRam00000001832f3888 * 0x470131424df0a44b ^ uRam00000001832f3a28) + uVar3;
  uRam00000001832f3878 = uRam00000001832f3888 ^ uRam00000001832f3a28;
  uRam00000001832f3a90 = 0xfe70843d;
  uVar3 = (~uRam00000001832f3830 + 0x18f7bc4) *
          ((uRam00000001832f36f8 ^ 0x842208c4) +
          (ulonglong)((uint)uRam00000001832f36f8 & 0x842208c4) * 2);
  uVar3 = (uVar3 | uRam00000001832f38a0) + (uVar3 & uRam00000001832f38a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3650 =
       func_0x00018c237030((uVar3 | 0x85ad7307) + (ulonglong)((uint)uVar3 & 0x85ad7307));
  uVar3 = (uRam00000001832f3650 & 0x3fffffffffffffff) * -0x10b5987a47924d6b;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar3;
  uRam00000001832f3ac0 = uRam00000001832f3730 ^ uVar3 ^ 0x18fa7a4;
  uRam00000001832f3568 = (uRam00000001832f3568 ^ uVar3) + 0x18fa7a4 ^ 0xeb3444cf8d7cc4bb;
  uRam00000001832f3940 = (uRam00000001832f3940 * 0x2eb7e66a5cce6c95 ^ uRam00000001832f3568) + uVar3;
  uRam00000001832f3a10 = uRam00000001832f3940 ^ uRam00000001832f3568;
  uRam00000001832f3880 = 0x18fa7a4;
  uVar3 = (~uRam00000001832f3678 + 0xfe70843e) *
          ((uRam00000001832f36e0 ^ 0x85ad8481) +
          (ulonglong)((uint)uRam00000001832f36e0 & 0x85ad8481) * 2);
  uVar3 = (uVar3 | uRam00000001832f3960) + (uVar3 & uRam00000001832f3960);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f36a0 =
       func_0x00018c237030((uVar3 | 0x7bdd00bc) + (ulonglong)((uint)uVar3 & 0x7bdd00bc));
  uRam00000001832f35e8 =
       (uRam00000001832f35e8 ^ uRam00000001832f36a0 & 0x7fffffffffffffff) + 0x100002be1 ^
       0x91f59395e463d498;
  uRam00000001832f3ac0 =
       (uRam00000001832f3ac0 * 0x1eaf9c3266a5467b ^ uRam00000001832f35e8) +
       (uRam00000001832f36a0 & 0x7fffffffffffffff);
  uRam00000001832f3aa0 = uRam00000001832f3ac0 ^ uRam00000001832f35e8;
  uRam00000001832f36f8 = 0x2be1;
  uRam00000001832f3a58 = func_0x00018c237030(uRam00000001832f3a58 + 0xffb3ff7f10ffb7ff ^ 0x23);
  uRam00000001832f3898 =
       (uRam00000001832f3898 ^ uRam00000001832f3a58 & 0x7fffffffffffffff) - 0x57a7f56 ^
       0x2b2c42691d6ecdd1;
  uRam00000001832f37e0 =
       (uRam00000001832f37e0 * 0x7ed487674949113d ^ uRam00000001832f3898) +
       (uRam00000001832f3a58 & 0x7fffffffffffffff);
  uRam00000001832f3ac0 = uRam00000001832f37e0 ^ uRam00000001832f3898;
  uRam00000001832f37a0 = 0xfa8580aa;
  uVar3 = (uRam00000001832f38a0 ^ _UNK_181e135f0) + uRam00000001832f37b0 + 0x81588812;
  uVar5 = (uRam00000001832f37b0 ^ _UNK_181e135f8) + uRam00000001832f38a0 + 0xfa8580aa;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f38a0 ^ _UNK_181e135f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f37b0 ^ _UNK_181e135f8;
  uRam00000001832f3888 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832f38a0 + 0xfa8580aa) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f37b0 + 0x81588812));
  uVar3 = (uRam00000001832f3888 ^ 0xfa850080) & 0xffffffffffffffe0;
  uRam00000001832f39b8 = uRam00000001832f3670 ^ uVar3 ^ 0x100002be1;
  uRam00000001832f37e8 = (uRam00000001832f37e8 ^ uVar3) + 0x100002be1 ^ 0x571910cbb7a84a47;
  uRam00000001832f3500 = (uRam00000001832f3500 * -0xd0ce136c130c9ff ^ uRam00000001832f37e8) + uVar3;
  uRam00000001832f3520 = uRam00000001832f3500 ^ uRam00000001832f37e8;
  uRam00000001832f3908 = 0x2be1;
  uRam00000001832f38c8 = func_0x00018c237030(lRam00000001832f3818 + 0xffecfff743ffacffU ^ 0x26);
  uVar3 = uRam00000001832f38c8 ^ 0xb3f71061;
  uRam00000001832f3710 = uRam00000001832f3858 ^ uVar3 ^ 0x14408139d;
  uRam00000001832f38d8 = (uRam00000001832f38d8 ^ uVar3) + 0x14408139d ^ 0x8cf27fb5c022c369;
  uRam00000001832f3760 = (uRam00000001832f3760 * 0x272a02a3ef9efb7 ^ uRam00000001832f38d8) + uVar3;
  uRam00000001832f3978 = uRam00000001832f3760 ^ uRam00000001832f38d8;
  uRam00000001832f3808 = 0x4408139d;
  uVar3 = (~uRam00000001832f3a58 + 0x9011033d) *
          ((uRam00000001832f3540 ^ 0x37d53344) +
          (ulonglong)((uint)uRam00000001832f3540 & 0x37d53344) * 2);
  uVar3 = (uVar3 | uRam00000001832f3a18) + (uVar3 & uRam00000001832f3a18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f36a8 =
       func_0x00018c237030((uVar3 | 0xa7c43078) + (ulonglong)((uint)uVar3 & 0xa7c43078));
  uVar3 = uRam00000001832f36a8 & 0x7fffffffffffffff;
  uRam00000001832f3650 = uRam00000001832f3628 ^ uVar3 ^ 0x14408139d;
  uRam00000001832f3af0 = (uRam00000001832f3af0 ^ uVar3) + 0x14408139d ^ 0xdae1a05f1d58205;
  uRam00000001832f3828 = (uRam00000001832f3828 * -0x3965d060c4e53f41 ^ uRam00000001832f3af0) + uVar3
  ;
  uRam00000001832f39b0 = uRam00000001832f3828 ^ uRam00000001832f3af0;
  uRam00000001832f38e0 = 0x4408139d;
  uVar3 = (uRam00000001832f36f0 ^ _UNK_181e13600) + uRam00000001832f39d8 + 0xc02a30b8;
  uVar5 = (uRam00000001832f39d8 ^ _UNK_181e13608) + uRam00000001832f36f0 + 0x4408139d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f36f0 ^ _UNK_181e13600;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f39d8 ^ _UNK_181e13608;
  uRam00000001832f3748 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832f36f0 + 0x4408139d) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f39d8 + 0xc02a30b8));
  uRam00000001832f3810 = (ulonglong)((uint)uRam00000001832f3748 & 0x4408139d);
  uRam00000001832f38f8 = uRam00000001832f38f8 ^ uRam00000001832f3810 ^ 0x183018bcec5bdeb3;
  uRam00000001832f3950 =
       (uRam00000001832f3950 * 0x5223e6cdb0d9c1c5 ^ uRam00000001832f38f8) + uRam00000001832f3810;
  uRam00000001832f36f8 = uRam00000001832f3950 ^ uRam00000001832f38f8;
  uRam00000001832f3a98 = 0;
  uVar3 = (uRam00000001832f39d8 ^ _UNK_181e13610) + uRam00000001832f3768 + 0x7de9b2da;
  uVar5 = (uRam00000001832f3768 ^ _UNK_181e13618) + uRam00000001832f39d8 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f39d8 ^ _UNK_181e13610;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f3768 ^ _UNK_181e13618;
  uRam00000001832f3528 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832f39d8 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3768 + 0x7de9b2da));
  uRam00000001832f3640 =
       (uRam00000001832f3640 ^ uRam00000001832f3528) + 0x6346e00 ^ 0xdd36f2e4bf6e6904;
  uRam00000001832f3780 =
       (uRam00000001832f3780 * -0x1849b070a450cb57 ^ uRam00000001832f3640) + uRam00000001832f3528;
  uRam00000001832f3578 = uRam00000001832f3780 ^ uRam00000001832f3640;
  uRam00000001832f3760 = uRam00000001832f38f8 ^ 0x6346e00;
  uRam00000001832f3680 = 0x6346e00;
  uVar3 = (uRam00000001832f38f8 ^ _UNK_181e13620) + uRam00000001832f39b0 + 0x7de9b2da;
  uVar5 = (uRam00000001832f39b0 ^ _UNK_181e13628) + uRam00000001832f38f8 + 0x6346e00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f38f8 ^ _UNK_181e13620;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f39b0 ^ _UNK_181e13628;
  uRam00000001832f3588 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832f38f8 + 0x6346e00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f39b0 + 0x7de9b2da));
  uVar3 = (ulonglong)~(uint)uRam00000001832f3588 | 0x6346e00;
  uRam00000001832f3770 = uRam00000001832f3770 ^ uVar3 ^ 0xf22410932c930f88;
  uRam00000001832f39b8 = (uRam00000001832f39b8 * 0x2b4a8bc150e280fd ^ uRam00000001832f3770) + uVar3;
  uRam00000001832f38a8 = uRam00000001832f39b8 ^ uRam00000001832f3770;
  uRam00000001832f36d8 = 0;
  uVar3 = (uRam00000001832f3a10 ^ _UNK_181e13630) + uRam00000001832f3830 + 0x7c63a2ce;
  uVar5 = (uRam00000001832f3830 ^ _UNK_181e13638) + uRam00000001832f3a10 + 0xf84181eb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832f3a10 ^ _UNK_181e13630;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832f3830 ^ _UNK_181e13638;
  uRam00000001832f3850 =
       func_0x00018c237030((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832f3a10 + 0xf84181eb) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832f3830 + 0x7c63a2ce));
  uRam00000001832f3698 = uRam00000001832f3698 ^ uRam00000001832f3530 ^ 0x3d86de62b4679fa8;
  uRam00000001832f3860 =
       (uRam00000001832f3860 * 0x47654958ced2a70f ^ uRam00000001832f3698) + uRam00000001832f3530;
  uRam00000001832f39a8 = uRam00000001832f3860 ^ uRam00000001832f3698;
  uRam00000001832f3aa0 = 0;
  uVar3 = ((uRam00000001832f3658 ^ 0x842208c4) +
          (ulonglong)((uint)uRam00000001832f3658 & 0x842208c4) * 2) * -uRam00000001832f37f0;
  uVar3 = (uVar3 | uRam00000001832f37f8) + (uVar3 & uRam00000001832f37f8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832f3770 =
       func_0x00018c237030((uVar3 | 0x842208c4) + (ulonglong)((uint)uVar3 & 0x842208c4));
  uVar3 = uRam00000001832f3770 << 0x1e | uRam00000001832f3770 >> 0x22;
  uRam00000001832f3618 = uRam00000001832f3a70 ^ uVar3 ^ 0x2be1;
  uRam00000001832f38c8 = (uRam00000001832f38c8 ^ uVar3) + 0x2be1 ^ 0x940737b636746a50;
  uRam00000001832f3510 = (uRam00000001832f3510 * 0x49095df546d3ddcf ^ uRam00000001832f38c8) + uVar3;
  uRam00000001832f38b0 = uRam00000001832f3510 ^ uRam00000001832f38c8;
  uRam00000001832f36b0 = 0x2be1;
  uVar5 = (ulonglong)(uVar2 ^ param_3);
  uVar3 = uVar5 ^ 0x84222325 ^ uRam00000001832f3680;
  lVar4 = (uVar5 ^ 0x84222325) + uRam00000001832f3700;
  uVar6 = uVar3 + lVar4;
  uVar7 = (uRam00000001832f3700 ^ 0x2be1) + uRam00000001832f3680 + 0x2be1;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832f3700 ^ 0x2be1;
  uRam00000001832f3560 =
       func_0x00018c237030((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832f3680 + 0x2be1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar3 = uVar5 * 0x2be1 ^ uRam00000001832f3560 ^ 0x2be1;
  uRam00000001832f3628 = uVar5 ^ 0x2be1;
  uRam00000001832f35e0 = (uRam00000001832f35e0 ^ uVar3) + uRam00000001832f3628 ^ 0x8f4cc4c60d9e7f2c;
  uRam00000001832f38b0 = (uRam00000001832f38b0 * 0x4d0b4f65fef3c689 ^ uRam00000001832f35e0) + uVar3;
  uRam00000001832f3768 = uRam00000001832f38b0 ^ uRam00000001832f35e0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x12985,0x2f5)
      /* POOL[0x12985,0x2f5]: tamEM | sQAhp | dTOmd | hQNGE | aLe | aLi | sixtwo/fo | aLo | yUbEH | aLx | xVFMx | net/minecraft/class_2684 | method_11645 | PzVPu | ehxwR | YlLcN | NErxJ | SrySj | BfWtc | HfrXE | OiqRK | ARssK | dnuNp | XKOPz | CDnOz | eXPRj | JyUYt | method_11653 | nkebT | kKXsM | PqwUu | VFPqd | net/minecraft/class_2616 | method_11269 | RIfKs | paoyc | bxtLO | dhcOz | method_5477 | HwXDN | method_11267 | TCqvH | tuLHs | JnCRB | method_5667 | ()Ljava/util/UUID; | yGtxA | method_2871 | (Ljava/util/UUID;)Lnet/minecraft/class_640; | Icftg | UYAQf | net/minecraft/class_640 | method_2958 | ()Lnet/minecraft/clas */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c232b5c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e11bf8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xc1fd26d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd26d(void)

{
  FUN_190ddfc90();
  (*_DAT_181e09828)();
  return;
}


// ----- block @ rva 0xc1fd2a0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c1fd2a0(void)

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


// ----- block @ rva 0xc1fd2c4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c1fd2c4(void)

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


// ----- block @ rva 0xc1fd2da -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd2da(void)

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


// ----- block @ rva 0xc1fd313 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd313(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181e09818)();
  return;
}


// ----- block @ rva 0xc1fd32c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd32c(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181e09838)();
  return;
}


// ----- block @ rva 0xc1fd34c -----

void FUN_18c1fd34c(void)

{
  return;
}


// ----- block @ rva 0xc1fd354 -----

void FUN_18c1fd354(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc1fd3ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd3ba(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181e09898)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0xc1fd3c6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c1fd3c6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc1fd45d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd45d(void)

{
  FUN_190ddfc90();
  (*_DAT_181e09938)();
  return;
}


// ----- block @ rva 0xc1fd4b4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c1fd4b4(void)

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


// ----- block @ rva 0xc1fd4ca -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd4ca(void)

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


// ----- block @ rva 0xc1fd503 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd503(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181e09928)();
  return;
}


// ----- block @ rva 0xc1fd51c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c1fd51c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117db0();
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


// ----- block @ rva 0xc1fd599 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd599(void)

{
  FUN_190ddfc90();
  (*_DAT_181e098e8)();
  return;
}


// ----- block @ rva 0xc1fd5cc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c1fd5cc(void)

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


// ----- block @ rva 0xc1fd5f0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd5f0(void)

{
  longlong *unaff_RSI;
  
  FUN_1841196f0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181e09908)();
  return;
}


// ----- block @ rva 0xc1fd610 -----

void FUN_18c1fd610(void)

{
  return;
}


// ----- block @ rva 0xc1fd618 -----

void FUN_18c1fd618(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc1fd7f1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c1fd7f1(void)

{
  FUN_190ddce00();
  (*_DAT_181e09f98)();
  return;
}


// ----- block @ rva 0xc2004eb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2004eb(void)

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


// ----- block @ rva 0xc204220 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c204220(void)

{
  FUN_190de3220();
  (*_DAT_181e0a388)();
  return;
}


// ----- block @ rva 0xc204378 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c204378(void)

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


// ----- block @ rva 0xc204462 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c204462(void)

{
  (*_DAT_181e0a7e8)();
  return;
}


// ----- block @ rva 0xc204895 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c204895(void)

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


// ----- block @ rva 0xc20525e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c20525e(void)

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


// ----- block @ rva 0xc20555f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c20555f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e09ea8)();
  return;
}


// ----- block @ rva 0xc20565a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c20565a(void)

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


// ----- block @ rva 0xc2059f6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2059f6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_181e0a418)();
  return;
}


// ----- block @ rva 0xc205a07 -----

void FUN_18c205a07(void)

{
  return;
}


// ----- block @ rva 0xc205a73 -----

void FUN_18c205a73(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc205bc8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c205bc8(void)

{
  FUN_190ddce00();
  (*_DAT_181e0c1e8)();
  return;
}


// ----- block @ rva 0xc205d85 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c205d85(void)

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


// ----- block @ rva 0xc205e1e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c205e1e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_181e0c098)();
  return;
}


// ----- block @ rva 0xc206053 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c206053(void)

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


// ----- block @ rva 0xc2060a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2060a7(void)

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


// ----- block @ rva 0xc206103 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c206103(void)

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


// ----- block @ rva 0xc20617b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c20617b(void)

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


// ----- block @ rva 0xc2062ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2062ce(void)

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


// ----- block @ rva 0xc206361 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c206361(void)

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


// ----- block @ rva 0xc20644d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c20644d(void)

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


// ----- block @ rva 0xc2064a1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2064a1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184194800();
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


// ----- block @ rva 0xc2064f0 -----

void FUN_18c2064f0(void)

{
  return;
}


// ----- block @ rva 0xc2064fa -----

void FUN_18c2064fa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc206743 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c20677a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c206743(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xc206798 -----

void FUN_18c206798(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x30) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018c2067c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e0c940 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xc209d20 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c209d20(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(unaff_RBP + 0x98) = in_RAX;
  *(uint *)(unaff_RBP + 0x60) = unaff_ESI;
  *(char *)(unaff_RBP + 0xa0) = (char)unaff_ESI + (char)((ulonglong)unaff_ESI / 10) * -10;
  uVar4 = (_DAT_1832f2680 ^ _DAT_181e0d2b0) + _DAT_1832f2620 + 0x8422233a;
  uVar5 = (_DAT_1832f2620 ^ _UNK_181e0d2b8) + _DAT_1832f2680 + 0x98;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2680 ^ _DAT_181e0d2b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2620 ^ _UNK_181e0d2b8;
  _DAT_1832f2958 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2680 + 0x98) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2620 + 0x8422233a));
  _DAT_1832f2a68 = (_DAT_1832f2a68 ^ _DAT_1832f2958 ^ 7) + 0x9f ^ 0x6401fbbefaad9e66;
  _DAT_1832f2b18 = (_DAT_1832f2b18 * 0x7e51b0ab5e589fcf ^ _DAT_1832f2a68) + (_DAT_1832f2958 ^ 7);
  _DAT_1832f2698 = _DAT_1832f2b18 ^ _DAT_1832f2a68;
  _DAT_1832f2a88 = 0x9f;
  uVar4 = (_DAT_1832f29b8 ^ _DAT_180db4150) + _DAT_1832f27a0 + 0x84222325;
  uVar5 = (_DAT_1832f27a0 ^ _UNK_180db4158) + _DAT_1832f29b8 + 0x5e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f29b8 ^ _DAT_180db4150;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f27a0 ^ _UNK_180db4158;
  _DAT_1832f2790 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f29b8 + 0x5e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f27a0 + 0x84222325));
  _DAT_1832f27f0 =
       (_DAT_1832f27f0 ^ _DAT_1832f2790 * 0x3a7aa033482da58b) - 0x5e ^ 0xb350663427dc457d;
  _DAT_1832f2c08 =
       (_DAT_1832f2c08 * 0x487045bb86287a1f ^ _DAT_1832f27f0) + _DAT_1832f2790 * 0x3a7aa033482da58b;
  _DAT_1832f2530 = _DAT_1832f2c08 ^ _DAT_1832f27f0;
  _DAT_1832f2b28 = 0xa2;
  _DAT_1832f2920 = func_0x00018c230420(_DAT_1832f26d0 ^ 0x1d0083baffe104);
  uVar4 = _DAT_1832f2920 ^ 0x5e;
  _DAT_1832f26b8 = _DAT_1832f2758 ^ uVar4 ^ 0x8e;
  _DAT_1832f2750 = (_DAT_1832f2750 ^ uVar4) + 0x8e ^ 0x6425b8b9deb03a4c;
  _DAT_1832f2aa0 = (_DAT_1832f2aa0 * -0x435476bdd8f037e1 ^ _DAT_1832f2750) + uVar4;
  _DAT_1832f28a0 = _DAT_1832f2aa0 ^ _DAT_1832f2750;
  _DAT_1832f2a98 = 0x8e;
  _DAT_1832f2a58 = func_0x00018c230420(_DAT_1832f2698 + 0x1cff83c3001dff ^ 0xd9);
  _DAT_1832f2af0 = (_DAT_1832f2af0 ^ _DAT_1832f26f8) - 0x68 ^ 0xf687129748499fc;
  _DAT_1832f2580 = (_DAT_1832f2580 * -0x2ecc346e037e34c3 ^ _DAT_1832f2af0) + _DAT_1832f26f8;
  _DAT_1832f2640 = _DAT_1832f2580 ^ _DAT_1832f2af0;
  _DAT_1832f2540 = 0x98;
  uVar4 = (~_DAT_1832f2bf0 + 0x69) *
          ((_DAT_1832f2ae8 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832f2ae8 & 0x84222315) * 2);
  uVar4 = (uVar4 | _DAT_1832f29d0) + (uVar4 & _DAT_1832f29d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f28f0 = func_0x00018c230420((uVar4 | 0x8422237d) + (ulonglong)((uint)uVar4 & 0x8422237d))
  ;
  uVar4 = _DAT_1832f28f0 ^ 0x13e8;
  _DAT_1832f2ad8 = _DAT_1832f2a70 ^ uVar4 ^ 0x98;
  _DAT_1832f2698 = (_DAT_1832f2698 ^ uVar4) + 0x98 ^ 0xb22f875b72e28cdc;
  _DAT_1832f2c18 = (_DAT_1832f2c18 * 0x2df04bb92c2ff20f ^ _DAT_1832f2698) + uVar4;
  _DAT_1832f2868 = _DAT_1832f2c18 ^ _DAT_1832f2698;
  _DAT_1832f25e0 = 0x98;
  uVar4 = (_DAT_1832f26d0 ^ _DAT_180b2b520) + _DAT_1832f2910 + 0x842223bd;
  uVar5 = (_DAT_1832f2910 ^ _UNK_180b2b528) + _DAT_1832f26d0 + 0x98;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f26d0 ^ _DAT_180b2b520;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2910 ^ _UNK_180b2b528;
  _DAT_1832f2c88 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f26d0 + 0x98) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2910 + 0x842223bd));
  uVar4 = (ulonglong)((uint)_DAT_1832f2c88 & 0x98);
  _DAT_1832f25f8 = _DAT_1832f27f0 ^ uVar4 ^ 0x130;
  _DAT_1832f2770 = (_DAT_1832f2770 ^ uVar4) + 0x130 ^ 0x5cb411ed228a512d;
  _DAT_1832f2c50 = (_DAT_1832f2c50 * -0x14aab23e8e4a8a29 ^ _DAT_1832f2770) + uVar4;
  _DAT_1832f2678 = _DAT_1832f2c50 ^ _DAT_1832f2770;
  _DAT_1832f2b90 = 0x30;
  uVar4 = (~_DAT_1832f2b28 + 0xfd) *
          ((_DAT_1832f2548 ^ 0x84222311) + (ulonglong)((uint)_DAT_1832f2548 & 0x84222311) * 2);
  uVar4 = (uVar4 | _DAT_1832f2618) + (uVar4 & _DAT_1832f2618);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f25b0 = func_0x00018c230420((uVar4 | 0x842223ed) + (ulonglong)((uint)uVar4 & 0x842223ed))
  ;
  uVar4 = _DAT_1832f25b0 & 0xffffffffe0000000;
  _DAT_1832f2b90 = _DAT_1832f2ab0 ^ uVar4 ^ 0x130;
  _DAT_1832f2548 = (_DAT_1832f2548 ^ uVar4) + 0x130 ^ 0x2e626b9d073f4fe3;
  _DAT_1832f2c68 = (_DAT_1832f2c68 * 0x60a4de7012c4b717 ^ _DAT_1832f2548) + uVar4;
  _DAT_1832f2630 = _DAT_1832f2c68 ^ _DAT_1832f2548;
  _DAT_1832f28f0 = 0x30;
  uVar4 = (~_DAT_1832f2c30 + 0xa1) *
          ((_DAT_1832f2760 ^ 0x842223ba) + (ulonglong)((uint)_DAT_1832f2760 & 0x842223ba) * 2);
  uVar4 = (uVar4 | _DAT_1832f27b0) + (uVar4 & _DAT_1832f27b0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2a68 = func_0x00018c230420((uVar4 | 0x8422231a) + (ulonglong)((uint)uVar4 & 0x8422231a))
  ;
  uVar4 = _DAT_1832f2a68 >> 1 | _DAT_1832f2a68;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1832f2a68;
  _DAT_1832f2628 = _DAT_1832f2aa8 ^ uVar4 ^ 0x13f;
  _DAT_1832f29b0 = (_DAT_1832f29b0 ^ uVar4) + 0x13f ^ 0x8f77f96be26d37f1;
  _DAT_1832f2a50 = (_DAT_1832f2a50 * 0x1aa071248d6ba549 ^ _DAT_1832f29b0) + uVar4;
  _DAT_1832f2838 = _DAT_1832f2a50 ^ _DAT_1832f29b0;
  _DAT_1832f28e0 = 0x3f;
  _DAT_1832f25d0 = func_0x00018c230420(_DAT_1832f2678 ^ 0xffe0ff7c0a001daf);
  uVar4 = ((_DAT_1832f25d0 & 0xfc00000000ffffe0) << 6 | _DAT_1832f25d0 >> 0x3a) << 0x22 |
          (_DAT_1832f25d0 & 0x3ffffffffffffff) >> 0x18;
  _DAT_1832f2bb8 = (_DAT_1832f2bb8 ^ uVar4) + 0x3f ^ 0x1bb9739bddfc9491;
  _DAT_1832f2910 = (_DAT_1832f2910 * 0x537fb0c2503da00f ^ _DAT_1832f2bb8) + uVar4;
  _DAT_1832f2c30 = _DAT_1832f2910 ^ _DAT_1832f2bb8;
  _DAT_1832f2c90 = 0x3f;
  uVar4 = (~_DAT_1832f2968 + 0xa1) *
          ((_DAT_1832f2528 ^ 0x842223ba) + (ulonglong)((uint)_DAT_1832f2528 & 0x842223ba) * 2);
  uVar4 = (uVar4 | _DAT_1832f2aa8) + (uVar4 & _DAT_1832f2aa8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2b40 = func_0x00018c230420((uVar4 | 0x8422231a) + (ulonglong)((uint)uVar4 & 0x8422231a))
  ;
  _DAT_1832f2b88 = (_DAT_1832f2b88 ^ _DAT_1832f2b40 * 0x16f84326b4d46d3) + 0x80 ^ 0x5d39aaa3b6777817
  ;
  _DAT_1832f26d8 =
       (_DAT_1832f26d8 * 0x4d431ab4a2e8500d ^ _DAT_1832f2b88) + _DAT_1832f2b40 * 0x16f84326b4d46d3;
  _DAT_1832f2808 = _DAT_1832f26d8 ^ _DAT_1832f2b88;
  _DAT_1832f2a78 = _DAT_1832f2680 ^ 0x80;
  _DAT_1832f29b0 = 0x80;
  uVar4 = ((_DAT_1832f28d0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1832f28d0 & 0x8422231a) * 2) *
          -_DAT_1832f2890;
  uVar4 = (uVar4 | _DAT_1832f2870) + (uVar4 & _DAT_1832f2870);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2620 = func_0x00018c230420((uVar4 | 0x8422231a) + (ulonglong)((uint)uVar4 & 0x8422231a))
  ;
  uVar4 = _DAT_1832f2620 << 0x20 | _DAT_1832f2620 >> 0x20;
  _DAT_1832f28c8 = _DAT_1832f2af8 ^ uVar4 ^ 0x3f;
  _DAT_1832f28f8 = (_DAT_1832f28f8 ^ uVar4) + 0x3f ^ 0x7321b2bd4866ce43;
  _DAT_1832f2bf8 = (_DAT_1832f2bf8 * 0x68011fcef8b126c1 ^ _DAT_1832f28f8) + uVar4;
  _DAT_1832f2600 = _DAT_1832f2bf8 ^ _DAT_1832f28f8;
  _DAT_1832f29a0 = 0x3f;
  uVar4 = ((_DAT_1832f2580 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832f2580 & 0x84222315) * 2) *
          -_DAT_1832f26f0;
  uVar4 = (uVar4 | _DAT_1832f2b60) + (uVar4 & _DAT_1832f2b60);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2c60 = func_0x00018c230420((uVar4 | 0x84222315) + (ulonglong)((uint)uVar4 & 0x84222315))
  ;
  uVar4 = _DAT_1832f2ca8 >> 1 | _DAT_1832f2ca8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1832f2ca8;
  _DAT_1832f2c50 = _DAT_1832f2b68 ^ uVar4 ^ 0x30;
  _DAT_1832f2bd8 = (_DAT_1832f2bd8 ^ uVar4) + 0x30 ^ 0x690a8c940b55265d;
  _DAT_1832f2a40 = (_DAT_1832f2a40 * 0x22e00ad1dd881d91 ^ _DAT_1832f2bd8) + uVar4;
  _DAT_1832f2908 = _DAT_1832f2a40 ^ _DAT_1832f2bd8;
  _DAT_1832f2c68 = 0x30;
  uVar4 = (~_DAT_1832f2c08 + 0x20) *
          ((_DAT_1832f2968 ^ 0x8422233a) + (ulonglong)((uint)_DAT_1832f2968 & 0x8422233a) * 2);
  uVar4 = (uVar4 | _DAT_1832f2920) + (uVar4 & _DAT_1832f2920);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2b10 = func_0x00018c230420((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = (ulonglong)((uint)_DAT_1832f2b10 ^ 0x1f) << 0x33 | _DAT_1832f2b10 >> 0xd;
  _DAT_1832f2a98 = _DAT_1832f2a98 ^ uVar4 ^ 0x9cd3f2516a9d126d;
  _DAT_1832f2740 = (_DAT_1832f2740 * 0x72cba4709778aecd ^ _DAT_1832f2a98) + uVar4;
  _DAT_1832f2718 = _DAT_1832f2740 ^ _DAT_1832f2a98;
  uVar5 = (ulonglong)*(byte *)(unaff_RBP + 0xa0);
  auVar2._8_8_ = _UNK_180145388;
  auVar2._0_8_ = uVar5 ^ 0x84222325;
  auVar3 = pshufb(auVar2 ^ _DAT_181e0d2c0,_DAT_1800170c0);
  _DAT_1832f2680 = 0;
  uVar1 = auVar3._8_8_ + auVar3._0_8_;
  uVar4 = uVar1 + _DAT_1832f28a0;
  if (auVar3._4_4_ < 0) {
    uVar4 = _DAT_1832f2880 ^ uVar1;
  }
  _DAT_1832f25d8 = func_0x00018c230420(SUB161(auVar2 ^ _DAT_181e0d2c0,5) ^ uVar4);
  _DAT_1832f28e8 = uVar5 | 0x30;
  uVar5 = ~(ulonglong)((uint)_DAT_1832f28e8 ^ (uint)_DAT_1832f25d8) & uVar5;
  _DAT_1832f2b48 = (_DAT_1832f2b48 ^ uVar5) + _DAT_1832f28e8 ^ 0x89db2a07ce62584f;
  _DAT_1832f29f0 = (_DAT_1832f29f0 * 0x4f1c402aa42779f5 ^ _DAT_1832f2b48) + uVar5;
  _DAT_1832f2778 = _DAT_1832f29f0 ^ _DAT_1832f2b48;
  *(char *)(*(longlong *)(unaff_RBP + 0x98) + -1) = (char)_DAT_1832f28e8;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc20ab72 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c20b0ab */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c20ab72(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong unaff_RBP;
  ulonglong uVar13;
  ulonglong unaff_R14;
  ulonglong uVar14;
  uint uVar16;
  undefined1 auVar15 [16];
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar24;
  undefined1 auVar23 [16];
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  uVar13 = uVar1 ^ 0x84222325 ^ _DAT_1832f27b0;
  plVar2 = *(longlong **)(unaff_RBP + 0x30);
  lVar11 = (uVar1 ^ 0x84222325) + _DAT_1832f2a10;
  uVar18 = uVar13 + lVar11;
  uVar19 = (unaff_R14 ^ _DAT_1832f2a10) + _DAT_1832f27b0 + unaff_R14;
  uVar13 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar13;
  uVar18 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ unaff_R14 ^ _DAT_1832f2a10;
  _DAT_1832f2878 =
       func_0x00018c230420((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_1832f27b0 + unaff_R14) ^
                           (uVar13 << 0x1d | uVar13 >> 0x23) - lVar11);
  uVar10 = _DAT_181e0d3e0;
  uVar9 = _DAT_181e0d3d0;
  uVar16 = (uint)(uVar1 >> 0x20);
  auVar21._8_4_ = (int)uVar1;
  auVar21._0_8_ = uVar1;
  auVar21._12_4_ = uVar16;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = unaff_R14;
  uVar24 = (uint)(unaff_R14 >> 0x20);
  auVar20._8_4_ = (int)unaff_R14;
  auVar20._0_8_ = unaff_R14;
  auVar20._12_4_ = uVar24;
  uVar13 = (ulonglong)_DAT_181e0d370;
  auVar15 = auVar21 | auVar20;
  uVar6 = (ulonglong)_DAT_181e0d360;
  uVar18 = (ulonglong)_DAT_181e0d360;
  uVar19 = (ulonglong)_DAT_181e0d390;
  uVar7 = (ulonglong)_DAT_181e0d380;
  uVar3 = (ulonglong)_DAT_181e0d380;
  uVar4 = (ulonglong)_DAT_181e0d3c0;
  uVar17 = SUB164(auVar21 & auVar20,0);
  uVar5 = (ulonglong)_DAT_181e0d3b0;
  uVar26 = SUB168(auVar21 & auVar20,0);
  uVar8 = (ulonglong)_DAT_181e0d3b0;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = auVar15;
  uVar25 = SUB164(auVar21 ^ auVar20,0);
  auVar28._8_4_ = 0xffffffff;
  auVar28._0_8_ = 0xffffffffffffffff;
  auVar28._12_4_ = 0xffffffff;
  uVar27 = SUB164(auVar21 ^ auVar28,0);
  uVar14 = SUB168(auVar21 ^ auVar28,0);
  uVar22 = SUB164(auVar23 ^ auVar28,0);
  uVar12 = ((uVar1 | unaff_R14) ^ _DAT_1832f2878) & 0x7fffffffffffffff;
  _DAT_1832f2ab0 =
       (((ulonglong)_DAT_181e0d3a0 * (ulonglong)uVar27 +
         ((ulonglong)_DAT_181e0d410 * (ulonglong)uVar27 +
          (uVar14 >> 0x20) * (ulonglong)_DAT_181e0d3a0 << 0x20) +
        (ulonglong)uVar25 * (ulonglong)_DAT_181e0d3f0 +
        ((ulonglong)_DAT_181e0d400 * (ulonglong)uVar25 +
         (SUB168(auVar21 ^ auVar20,0) >> 0x20) * (ulonglong)_DAT_181e0d3f0 << 0x20) +
        (ulonglong)uVar9 * (ulonglong)auVar15._0_4_ +
        ((ulonglong)uVar10 * (ulonglong)auVar15._0_4_ + (auVar15._0_8_ >> 0x20) * (ulonglong)uVar9
        << 0x20) +
        uVar5 * uVar17 + (uVar4 * uVar17 + (uVar26 >> 0x20) * uVar8 << 0x20) +
        (uVar19 * (unaff_R14 & 0xffffffff) + uVar3 * uVar24 << 0x20) +
        (unaff_R14 & 0xffffffff) * uVar7 +
        (uVar13 * (uVar1 & 0xffffffff) + uVar18 * uVar16 << 0x20) + (uVar1 & 0xffffffff) * uVar6) -
       ((ulonglong)uVar22 * (_DAT_181e0d4c0 & 0xffffffff) +
        ((ulonglong)_DAT_181e0d4d0 * (ulonglong)uVar22 +
         (SUB168(auVar23 ^ auVar28,0) >> 0x20) * (_DAT_181e0d4c0 & 0xffffffff) << 0x20) +
       (ulonglong)uVar27 * (ulonglong)_DAT_181e0d4a0 +
       ((ulonglong)_DAT_181e0d4b0 * (ulonglong)uVar27 + (uVar14 >> 0x20) * (ulonglong)_DAT_181e0d4a0
       << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_181e0d490 +
       ((auVar15._0_8_ >> 0x20) * (ulonglong)_DAT_181e0d490 +
        (ulonglong)_DAT_181e0d480 * (ulonglong)*(uint *)(unaff_RBP + 0x60) << 0x20) +
       (ulonglong)uVar17 * (ulonglong)_DAT_181e0d490 +
       ((uVar26 >> 0x20) * (ulonglong)_DAT_181e0d490 + (ulonglong)uVar17 * (ulonglong)_DAT_181e0d480
       << 0x20) +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_181e0d450 +
        (ulonglong)uVar16 * (ulonglong)_DAT_181e0d440 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_181e0d440 +
       ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_181e0d470 +
        (ulonglong)uVar24 * (ulonglong)_DAT_181e0d460 << 0x20) +
       (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_181e0d460)) + 0x680173b8e714775f;
  _DAT_1832f2810 = _DAT_1832f2ab0 ^ uVar12;
  _DAT_1832f2cb8 = (_DAT_1832f2cb8 ^ uVar12) + _DAT_1832f2ab0 ^ 0x2de19f3b3aecec19;
  _DAT_1832f26d0 = (_DAT_1832f26d0 * -0x513dd0e847235529 ^ _DAT_1832f2cb8) + uVar12;
  _DAT_1832f2c18 = _DAT_1832f26d0 ^ _DAT_1832f2cb8;
  lVar11 = unaff_RBP + -0x30;
  FUN_18414b520(lVar11);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar11 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 0x28),lVar11);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xc20b0ea -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c20b0ea(ulonglong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong in_RAX;
  longlong in_RCX;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  uint uVar5;
  ulonglong in_XMM0_Qb;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar10 = param_1 + in_RAX + param_2;
  uVar11 = in_XMM0_Qb + in_RCX + 1;
  param_1 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ param_1;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ in_XMM0_Qb;
  _DAT_1832f2630 =
       func_0x00018c230420((uVar10 << 0x1d | uVar10 >> 0x23) - (in_RCX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  uVar10 = ((_DAT_1832f2630 ^ unaff_RSI) & 0x1ffffff) << 9 | (_DAT_1832f2630 ^ unaff_RSI) >> 0x37;
  *(ulonglong *)(unaff_RBP + 0x98) = unaff_RSI;
  uVar12 = (uint)unaff_RSI;
  uVar14 = (uint)(unaff_RSI >> 0x20);
  auVar6._8_4_ = 0xffffffff;
  auVar6._0_8_ = 0xffffffffffffffff;
  auVar6._12_4_ = 0xffffffff;
  auVar1._8_4_ = uVar12;
  auVar1._0_8_ = unaff_RSI;
  auVar1._12_4_ = uVar14;
  uVar5 = SUB164(auVar6 ^ auVar1,0);
  uVar11 = SUB168(auVar6 ^ auVar1,0);
  uVar13 = uVar12 & (uint)DAT_18001a990;
  auVar2._8_4_ = uVar12;
  auVar2._0_8_ = unaff_RSI;
  auVar2._12_4_ = uVar14;
  uVar12 = SUB164(_DAT_18001a990 ^ auVar2,0);
  uVar4 = (ulonglong)_DAT_181e0d500 * (ulonglong)uVar5 +
          ((uVar11 >> 0x20) * (ulonglong)_DAT_181e0d500 +
           (ulonglong)_DAT_181e0d4e0 * (ulonglong)uVar5 << 0x20) +
          (ulonglong)_DAT_181e0d4f0 * (unaff_RSI & 0xffffffff) +
          ((unaff_RSI >> 0x20) * (ulonglong)_DAT_181e0d4f0 +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_181e0d4e0 << 0x20) +
          (-((ulonglong)uVar5 * (_DAT_181e0d570 & 0xffffffff) +
            ((ulonglong)_DAT_181e0d5a0 * (ulonglong)uVar5 +
             (uVar11 >> 0x20) * (_DAT_181e0d570 & 0xffffffff) << 0x20)) -
          ((ulonglong)uVar12 * (ulonglong)_DAT_181e0d580 +
           ((ulonglong)_DAT_181e0d590 * (ulonglong)uVar12 +
            (SUB168(_DAT_18001a990 ^ auVar2,0) >> 0x20) * (ulonglong)_DAT_181e0d580 << 0x20) +
          ((ulonglong)uVar13 * (ulonglong)_DAT_181e0d560 << 0x20 |
          (ulonglong)_DAT_181e0d550 * (ulonglong)uVar13) +
          ((ulonglong)_DAT_181e0d540 * (unaff_RSI & 0xffffffff) +
           (ulonglong)_DAT_181e0d530 * (ulonglong)uVar14 << 0x20) +
          (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_181e0d530)) + 0xbace3bf325e9bb80;
  _DAT_1832f2570 = _DAT_1832f2ba8 ^ uVar10 ^ uVar4;
  _DAT_1832f2898 = (_DAT_1832f2898 ^ uVar10) + uVar4 ^ 0xddbf7b3ce8d9f55c;
  _DAT_1832f2888 = (_DAT_1832f2888 * 0x87eacd39a9d5411 ^ _DAT_1832f2898) + uVar10;
  _DAT_1832f27c8 = _DAT_1832f2888 ^ _DAT_1832f2898;
  _DAT_1832f2818 = uVar4;
  _DAT_1832f29d8 = func_0x00018c230420(_DAT_1832f28d0 ^ 0xdab75765a0eb023d);
  _DAT_1832f2550 = (_DAT_1832f2550 ^ _DAT_1832f29d8) + 0x77f9ef7f36feff77 ^ 0x2358946468c53a31;
  _DAT_1832f2b60 = (_DAT_1832f2b60 * 0x6de4d0ead92b310d ^ _DAT_1832f2550) + _DAT_1832f29d8;
  _DAT_1832f2cb8 = _DAT_1832f2b60 ^ _DAT_1832f2550;
  _DAT_1832f2a70 = 0x77f9ef7f36feff77;
  uVar10 = (~_DAT_1832f2550 + 0x336e10bf74d32db1) *
           ((_DAT_1832f2ad8 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1832f2ad8 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1832f2740) + (uVar10 & _DAT_1832f2740);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1832f2c88 =
       func_0x00018c230420((uVar10 | 0x336e10bff0f10e95) + (uVar10 & 0x336e10bff0f10e95));
  _DAT_1832f26e8 =
       (_DAT_1832f26e8 ^ _DAT_1832f2c88 & 0x7fffffffffffffff) + 0xcc91ef408b2cd250 ^
       0xea8ee4db710525d9;
  _DAT_1832f2550 =
       (_DAT_1832f2550 * -0x6ed6220091989a25 ^ _DAT_1832f26e8) +
       (_DAT_1832f2c88 & 0x7fffffffffffffff);
  _DAT_1832f27b0 = _DAT_1832f2550 ^ _DAT_1832f26e8;
  _DAT_1832f27a0 = 0xcc91ef408b2cd250;
  _DAT_1832f2848 = func_0x00018c230420(_DAT_1832f2698 ^ 0x9701115056101091);
  uVar10 = _DAT_1832f2848 ^ 0xfff;
  uVar11 = uVar10 >> 1 | uVar10;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar10;
  _DAT_1832f2840 = _DAT_1832f2b38 ^ uVar10 ^ 0x336e10bf74d33daf;
  _DAT_1832f25c0 = (_DAT_1832f25c0 ^ uVar10) + 0x336e10bf74d33daf ^ 0x12a94e8c9e6aa5aa;
  _DAT_1832f2bd8 = (_DAT_1832f2bd8 * -0x4fb6a92b24becde7 ^ _DAT_1832f25c0) + uVar10;
  _DAT_1832f27f0 = _DAT_1832f2bd8 ^ _DAT_1832f25c0;
  _DAT_1832f2688 = 0x336e10bf74d33daf;
  uVar10 = (_DAT_1832f2710 ^ _DAT_181e0d5b0) + _DAT_1832f2518 + 0x336e10bff0f11e8a;
  uVar11 = (_DAT_1832f2518 ^ _UNK_181e0d5b8) + _DAT_1832f2710 + 0xcc91ef408b2cd250;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832f2710 ^ _DAT_181e0d5b0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1832f2518 ^ _UNK_181e0d5b8;
  _DAT_1832f28d0 =
       func_0x00018c230420((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1832f2710 + 0xcc91ef408b2cd250)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1832f2518 + 0x336e10bff0f11e8a));
  uVar10 = _DAT_1832f28d0 ^ 0x336e10bf74d33daf;
  _DAT_1832f2cf0 = _DAT_1832f29a0 ^ uVar10 ^ 0xfff;
  _DAT_1832f2730 = (_DAT_1832f2730 ^ uVar10) + 0xfff ^ 0x44cd5f5071615493;
  _DAT_1832f2a48 = (_DAT_1832f2a48 * -0x5ff00df79f02455 ^ _DAT_1832f2730) + uVar10;
  _DAT_1832f2c08 = _DAT_1832f2a48 ^ _DAT_1832f2730;
  _DAT_1832f2c00 = 0xfff;
  uVar10 = (~_DAT_1832f2790 + 0xebb11bc89bdc1d85) *
           ((_DAT_1832f26d8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832f26d8 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_1832f2bf0) + (uVar10 & _DAT_1832f2bf0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1832f27b8 =
       func_0x00018c230420((uVar10 | 0xebb11bc81ffe3ea1) + (uVar10 & 0xebb11bc81ffe3ea1));
  _DAT_1832f26e0 =
       (_DAT_1832f26e0 ^ _DAT_1832f27b8 ^ 0xebb11bc89bdc1d84) + 0x144ee4376423e27c ^
       0xdd0c7a20a2da1678;
  _DAT_1832f2950 =
       (_DAT_1832f2950 * 0x34600200e27bc517 ^ _DAT_1832f26e0) +
       (_DAT_1832f27b8 ^ 0xebb11bc89bdc1d84);
  _DAT_1832f2b60 = _DAT_1832f2950 ^ _DAT_1832f26e0;
  _DAT_1832f2940 = 0x144ee4376423e27c;
  _DAT_1832f2778 = func_0x00018c230420(_DAT_1832f2a78 + 0x37d18eff2df58e9aU ^ 0xe8);
  uVar10 = (_DAT_1832f2778 ^ 0x260b6df525fc227c) * -0x67e42fe6fd378b89;
  _DAT_1832f2690 = _DAT_1832f25f8 ^ uVar10 ^ 0xebb11bc89bdc2d83;
  _DAT_1832f2568 = (_DAT_1832f2568 ^ uVar10) + 0xebb11bc89bdc2d83 ^ 0x63a66bb89212df5d;
  _DAT_1832f28e8 = (_DAT_1832f28e8 * 0x4cc698bf70925c9b ^ _DAT_1832f2568) + uVar10;
  _DAT_1832f27c0 = _DAT_1832f28e8 ^ _DAT_1832f2568;
  _DAT_1832f2c58 = 0xebb11bc89bdc2d83;
  uVar10 = (_DAT_1832f2cc0 ^ _DAT_181e0d5c0) + _DAT_1832f2cb8 + 0xebb11bc81ffe0ea6;
  uVar11 = (_DAT_1832f2cb8 ^ _UNK_181e0d5c8) + _DAT_1832f2cc0 + 0x144ee4376423e27c;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_1832f2cc0 ^ _DAT_181e0d5c0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_1832f2cb8 ^ _UNK_181e0d5c8;
  _DAT_1832f27f0 =
       func_0x00018c230420((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1832f2cc0 + 0x144ee4376423e27c)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1832f2cb8 + 0xebb11bc81ffe0ea6));
  uVar10 = ~_DAT_1832f27f0 & 0xebb11bc89bdc2d83;
  _DAT_1832f2b98 = _DAT_1832f2680 ^ uVar10 ^ 0xfff;
  _DAT_1832f2cd0 = (_DAT_1832f2cd0 ^ uVar10) + 0xfff ^ 0x335a68a2dcaee05;
  _DAT_1832f2cd8 = (_DAT_1832f2cd8 * 0x15d8933e8198f2f9 ^ _DAT_1832f2cd0) + uVar10;
  _DAT_1832f27c0 = _DAT_1832f2cd8 ^ _DAT_1832f2cd0;
  _DAT_1832f2cc0 = 0xfff;
  uVar10 = (~_DAT_1832f2c58 + 0xe0fae14c0004636b) *
           ((_DAT_1832f26f8 ^ 0x1f051eb37bd98fb0) + (_DAT_1832f26f8 & 0x1f051eb37bd98fb0) * 2);
  uVar10 = (uVar10 | _DAT_1832f28a0) + (uVar10 & _DAT_1832f28a0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1832f2ac0 =
       func_0x00018c230420((uVar10 | 0xffffffff7bddecda) + (uVar10 & 0xffffffff7bddecda));
  uVar11 = _UNK_181e0d5d8;
  uVar10 = _DAT_181e0d5d0;
  uVar3 = (_DAT_1832f2ac0 ^ 0xffffffffffffefff) * -0x298dce0da605d493;
  uVar3 = uVar3 << 0x38 | uVar3 >> 8;
  _DAT_1832f26b0 = _DAT_1832f28c0 ^ uVar3 ^ 0xfff;
  _DAT_1832f2550 = (_DAT_1832f2550 ^ uVar3) + 0xfff ^ 0x28a574c38a633d5f;
  _DAT_1832f2738 = (_DAT_1832f2738 * -0x6a691bb54498ad4f ^ _DAT_1832f2550) + uVar3;
  _DAT_1832f2740 = _DAT_1832f2738 ^ _DAT_1832f2550;
  _DAT_1832f2b78 = 0xfff;
  uVar3 = (_DAT_1832f26a8 ^ _DAT_181e0d5d0) + _DAT_1832f2690 + 0x77f9ef7fb2dcdc52;
  uVar8 = (_DAT_1832f2690 ^ _UNK_181e0d5d8) + _DAT_1832f26a8 + 0x3789f3e67085b726;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832f26a8 ^ _DAT_181e0d5d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1832f2690 ^ _UNK_181e0d5d8;
  uVar3 = func_0x00018c230420((uVar8 << 0x1d | uVar8 >> 0x23) -
                              (_DAT_1832f26a8 + 0x3789f3e67085b726) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) -
                              (_DAT_1832f2690 + 0x77f9ef7fb2dcdc52));
  uVar3 = (~uVar3 & 0x77f9ef7f36feff77) * 0x3b3ce784b3464cb1;
  _DAT_1832f2530 = _DAT_1832f2b68 ^ uVar3 ^ 0xaf83e365a784b69d;
  _DAT_1832f26d0 = (_DAT_1832f26d0 ^ uVar3) + 0xaf83e365a784b69d ^ 0x1bf6aa1f0f791da0;
  _DAT_1832f2bd8 = (_DAT_1832f2bd8 * 0x22d343bdb853fa89 ^ _DAT_1832f26d0) + uVar3;
  _DAT_1832f2b88 = _DAT_1832f2bd8 ^ _DAT_1832f26d0;
  _DAT_1832f2868 = 0xaf83e365a784b69d;
  uVar3 = _DAT_1832f26f0 ^ uVar10;
  uVar8 = _DAT_1832f2ba0 ^ uVar11;
  uVar7 = uVar3 + _DAT_1832f2ba0 + 0x77f9ef7fb2dcdc52;
  uVar9 = uVar8 + _DAT_1832f26f0 + 0x3789f3e67085b726;
  uVar3 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar3;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  _DAT_1832f2a08 =
       func_0x00018c230420((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832f26f0 + 0x3789f3e67085b726) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832f2ba0 + 0x77f9ef7fb2dcdc52));
  uVar8 = _DAT_1832f2a08 << 4 | _DAT_1832f2a08 >> 0x3c;
  uVar3 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uVar8 ^ 0x77f9ef7f36feff77 ^
          (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7;
  _DAT_1832f25b0 = (_DAT_1832f25b0 ^ uVar3) + 0x40701c99467b4851 ^ 0xd325415507785a76;
  _DAT_1832f2bb0 = (_DAT_1832f2bb0 * 0x45afa58e7306bbed ^ _DAT_1832f25b0) + uVar3;
  _DAT_1832f2b58 = _DAT_1832f2bb0 ^ _DAT_1832f25b0;
  _DAT_1832f2cb8 = 0x40701c99467b4851;
  uVar10 = _DAT_1832f29e0 ^ uVar10;
  uVar11 = _DAT_1832f2508 ^ uVar11;
  uVar3 = uVar10 + _DAT_1832f2508 + 0x77f9ef7fb2dcdc52;
  uVar8 = uVar11 + _DAT_1832f29e0 + 0x3789f3e67085b726;
  uVar10 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar10;
  uVar11 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar11;
  _DAT_1832f2598 =
       func_0x00018c230420((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1832f29e0 + 0x3789f3e67085b726)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_1832f2508 + 0x77f9ef7fb2dcdc52));
  _DAT_1832f2630 =
       (_DAT_1832f2630 ^ _DAT_1832f2598 ^ 0x77f9ef7f36feff77) + 0x3789e3663084b726 ^
       0x86142290b93a3250;
  _DAT_1832f2a88 =
       (_DAT_1832f2a88 * -0x5bd1ea0b0ebd9f73 ^ _DAT_1832f2630) +
       (_DAT_1832f2598 ^ 0x77f9ef7f36feff77);
  _DAT_1832f2988 = _DAT_1832f2a88 ^ _DAT_1832f2630;
  _DAT_1832f2cd8 = 0x3789e3663084b726;
  uVar10 = (~_DAT_1832f28c0 + 0x6f13c6cc61096e4d) *
           ((_DAT_1832f27c0 ^ 0x40701c99c2596b74) + (_DAT_1832f27c0 & 0x40701c99c2596b74) * 2);
  uVar10 = (uVar10 | _DAT_1832f2960) + (uVar10 & _DAT_1832f2960);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1832f2678 =
       func_0x00018c230420((uVar10 | 0x2f63da55a3500538) + (uVar10 & 0x2f63da55a3500538));
  uVar10 = (_DAT_1832f2678 << 0x31 | _DAT_1832f2678 >> 0xf) >> 6 | (_DAT_1832f2678 >> 0xf) << 0x3a;
  _DAT_1832f2b00 = _DAT_1832f27d8 ^ uVar10 ^ 0xaf83e365a784b69d;
  _DAT_1832f2680 = (_DAT_1832f2680 ^ uVar10) + 0xaf83e365a784b69d ^ 0xd678b57ecea10e61;
  _DAT_1832f27b8 = (_DAT_1832f27b8 * -0x19f3306d568d0a1d ^ _DAT_1832f2680) + uVar10;
  _DAT_1832f2c18 = _DAT_1832f27b8 ^ _DAT_1832f2680;
  _DAT_1832f2b88 = 0xaf83e365a784b69d;
  uVar10 = ~_DAT_1832f29f8 *
           ((_DAT_1832f2cf8 ^ 0x77f9ef7fb2dcdc52) + (_DAT_1832f2cf8 & 0x77f9ef7fb2dcdc52) * 2);
  uVar10 = (uVar10 | _DAT_1832f2580) + (uVar10 & _DAT_1832f2580);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1832f2850 =
       func_0x00018c230420((uVar10 | 0x880610804d2323ad) + (uVar10 & 0x880610804d2323ad));
  uVar10 = _DAT_1832f2850 << 0x36 | _DAT_1832f2850 >> 10;
  _DAT_1832f2cd0 = (_DAT_1832f2cd0 ^ uVar10) + 0x88061080c9010088 ^ 0x6dfea5de1cdd4d08;
  _DAT_1832f2860 = (_DAT_1832f2860 * 0x643873a6558ca995 ^ _DAT_1832f2cd0) + uVar10;
  _DAT_1832f2bc8 = _DAT_1832f2860 ^ _DAT_1832f2cd0;
  _DAT_1832f25d0 = 0x88061080c9010088;
  uVar10 = (~_DAT_1832f2700 + 0x88061080c9010089) *
           ((_DAT_1832f26e8 ^ 0x77f9ef7fb2dcdc52) + (_DAT_1832f26e8 & 0x77f9ef7fb2dcdc52) * 2);
  uVar10 = (uVar10 | _DAT_1832f2610) + (uVar10 & _DAT_1832f2610);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1832f2768 =
       func_0x00018c230420((uVar10 | 0xffffffff7bdddcda) + (uVar10 & 0xffffffff7bdddcda));
  _DAT_1832f2598 = _DAT_1832f2598 ^ _DAT_1832f2768 ^ 0xc9302834800f60eb;
  _DAT_1832f29c8 = (_DAT_1832f29c8 * 0x1d54bfaa061d7fdf ^ _DAT_1832f2598) + _DAT_1832f2768;
  _DAT_1832f2730 = _DAT_1832f29c8 ^ _DAT_1832f2598;
  _DAT_1832f2878 = 0;
  _DAT_1832f2928 = func_0x00018c230420(_DAT_1832f2970 + 0xffdc0084c6001dff ^ 0xf7);
  uVar10 = _DAT_1832f2928 & 0xffffffffff;
  _DAT_1832f2bf8 = _DAT_1832f27e8 ^ uVar10 ^ 0xfff;
  _DAT_1832f2cd0 = (_DAT_1832f2cd0 ^ uVar10) + 0xfff ^ 0xa728c76054871952;
  _DAT_1832f2bc8 = (_DAT_1832f2bc8 * -0x243a3a44d53eda37 ^ _DAT_1832f2cd0) + uVar10;
  _DAT_1832f2518 = _DAT_1832f2bc8 ^ _DAT_1832f2cd0;
  _DAT_1832f2938 = 0xfff;
  uVar10 = (~_DAT_1832f2b78 + 0x73f9a57a143a8d32) *
           ((_DAT_1832f26c8 ^ 0x73f9a57a9018ae14) + (_DAT_1832f26c8 & 0x73f9a57a9018ae14) * 2);
  uVar10 = (uVar10 | _DAT_1832f2c00) + (uVar10 & _DAT_1832f2c00);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_1832f2900 =
       func_0x00018c230420((uVar10 | 0x84222325) + (ulonglong)((uint)uVar10 & 0x84222325));
  uVar10 = _DAT_1832f2900 * 2 & 0x3fffffffffffe;
  _DAT_1832f27b8 = _DAT_1832f27b8 ^ uVar10 ^ 0x5cc0869f7b9cbf8c;
  _DAT_1832f2918 = (_DAT_1832f2918 * -0x56a51a50300aee55 ^ _DAT_1832f27b8) + uVar10;
  _DAT_1832f25c0 = _DAT_1832f2918 ^ _DAT_1832f27b8;
  _DAT_1832f28b8 = 0;
  _DAT_1832f2a30 = func_0x00018c230420(_DAT_1832f26d8 + 0x2c007b5a001dff ^ 0x61);
  _DAT_1832f2970 = _DAT_1832f2bf0 ^ _DAT_1832f2778 ^ 0xfff;
  _DAT_1832f2b90 = (_DAT_1832f2b90 ^ _DAT_1832f2778) + 0xfff ^ 0xec93797b3cf4b7f0;
  _DAT_1832f2ae0 = (_DAT_1832f2ae0 * -0x7f55892afad6ecd1 ^ _DAT_1832f2b90) + _DAT_1832f2778;
  _DAT_1832f2508 = _DAT_1832f2ae0 ^ _DAT_1832f2b90;
  _DAT_1832f2c38 = 0xfff;
  switch(0xfff < uVar4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc214297 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c214297(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  uint uVar7;
  undefined4 unaff_EDI;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong unaff_R12;
  undefined1 auVar10 [16];
  ulonglong uVar12;
  undefined1 auVar11 [16];
  ulonglong uVar13;
  uint uVar14;
  undefined1 unaff_XMM6 [16];
  uint unaff_XMM11_Da;
  
  *(undefined4 *)((longlong)unaff_RBP + 0x54) = unaff_EDI;
  uVar7 = unaff_ESI << 6;
  *(bool *)(unaff_RBP + 0x14) = unaff_RBP[-1] == 0;
  _DAT_1832f2980 = func_0x00018c230420(_DAT_1832f2990 + 0xff45ffd00d0016ffU ^ 0xdd);
  _DAT_1832f2630 = (_DAT_1832f2630 ^ _DAT_1832f2980) + 0xf47bfd3b ^ 0xd60f49e3ffb52944;
  _DAT_1832f2a68 = (_DAT_1832f2a68 * 0x51b8e734edc3fbe9 ^ _DAT_1832f2630) + _DAT_1832f2980;
  _DAT_1832f29a0 = _DAT_1832f2a68 ^ _DAT_1832f2630;
  _DAT_1832f2748 = 0xf47bfd3b;
  uVar4 = (~_DAT_1832f2a80 + 0xc7c8f28) *
          ((_DAT_1832f28c8 ^ unaff_R12) + (ulonglong)((uint)_DAT_1832f28c8 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1832f2bb0) + (uVar4 & _DAT_1832f2bb0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2590 = func_0x00018c230420((uVar4 | 0x885eac02) + (ulonglong)((uint)uVar4 & 0x885eac02))
  ;
  _DAT_1832f2a80 = (_DAT_1832f2a80 ^ _DAT_1832f2590 ^ 0xc7c8f27) - 0xc7c8f27 ^ 0xca74532c7d322116;
  _DAT_1832f2628 =
       (_DAT_1832f2628 * 0xbdb335cea644a51 ^ _DAT_1832f2a80) + (_DAT_1832f2590 ^ 0xc7c8f27);
  _DAT_1832f2b88 = _DAT_1832f2628 ^ _DAT_1832f2a80;
  _DAT_1832f2980 = 0xf38370d9;
  uVar4 = (~_DAT_1832f25e0 + 0xf38370da) *
          ((_DAT_1832f2678 ^ 0x885ebdc2) + (ulonglong)((uint)_DAT_1832f2678 & 0x885ebdc2) * 2);
  uVar4 = (uVar4 | _DAT_1832f26a0) + (uVar4 & _DAT_1832f26a0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2a78 = func_0x00018c230420((uVar4 | 0x7bddcd1b) + (ulonglong)((uint)uVar4 & 0x7bddcd1b))
  ;
  uVar4 = _DAT_1832f2a78 - (_DAT_1832f2a78 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832f2a78;
  _DAT_1832f2c60 = _DAT_1832f25b0 ^ uVar4 ^ 0x100000fc0;
  _DAT_1832f2ad8 = (_DAT_1832f2ad8 ^ uVar4) + 0x100000fc0 ^ 0x8fdb5d9617ed8951;
  _DAT_1832f25f8 = (_DAT_1832f25f8 * -0x41f0becc16ea68bf ^ _DAT_1832f2ad8) + uVar4;
  _DAT_1832f2748 = _DAT_1832f25f8 ^ _DAT_1832f2ad8;
  _DAT_1832f2c70 = 0xfc0;
  _DAT_1832f2aa0 = func_0x00018c230420(_DAT_1832f2ab0 + 0xff850007850085ff ^ 0xb4);
  _DAT_1832f29a0 =
       (_DAT_1832f29a0 ^ _DAT_1832f2aa0 & 0xffffffffffffff00) - 0x8cd8aca0 ^ 0x903b1cecd6d4a1ae;
  _DAT_1832f2740 =
       (_DAT_1832f2740 * -0x23c06c0a49c6eb59 ^ _DAT_1832f29a0) +
       (_DAT_1832f2aa0 & 0xffffffffffffff00);
  _DAT_1832f2b38 = _DAT_1832f2740 ^ _DAT_1832f29a0;
  _DAT_1832f2578 = 0x73275360;
  uVar4 = (~_DAT_1832f2af8 + 0x8cd8aca1) *
          ((_DAT_1832f2ab0 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1832f2ab0 & 0x84222ce5) * 2);
  uVar4 = (uVar4 | _DAT_1832f28b8) + (uVar4 & _DAT_1832f28b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f29f0 = func_0x00018c230420((uVar4 | 0x8fa8045) + (ulonglong)((uint)uVar4 & 0x8fa8045));
  uVar4 = _DAT_1832f29f0 ^ 0x8aa549ed800;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar4;
  _DAT_1832f2a90 = _DAT_1832f27d0 ^ uVar4 ^ 0x8cd8bc60;
  _DAT_1832f28a8 = (_DAT_1832f28a8 ^ uVar4) + 0x8cd8bc60 ^ 0xf866808810f48922;
  _DAT_1832f2530 = (_DAT_1832f2530 * -0x330a914304cad7bd ^ _DAT_1832f28a8) + uVar4;
  _DAT_1832f2728 = _DAT_1832f2530 ^ _DAT_1832f28a8;
  _DAT_1832f25e8 = 0x8cd8bc60;
  uVar4 = (~_DAT_1832f25a0 + 0x73275361) *
          ((_DAT_1832f27b0 ^ 0x8fa9f45) + (ulonglong)((uint)_DAT_1832f27b0 & 0x8fa9f45) * 2);
  uVar4 = (uVar4 | _DAT_1832f2518) + (uVar4 & _DAT_1832f2518);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2618 = func_0x00018c230420((uVar4 | 0x7bddcc25) + (ulonglong)((uint)uVar4 & 0x7bddcc25))
  ;
  uVar4 = _DAT_1832f2618 - (_DAT_1832f2618 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (_DAT_1832f2618 << 0xf ^
          (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 0x14) &
          0xfffffffff8000;
  _DAT_1832f2b10 = _DAT_1832f27c0 ^ uVar4 ^ 0x100000fc0;
  _DAT_1832f2808 = (_DAT_1832f2808 ^ uVar4) + 0x100000fc0 ^ 0x8bf708a6ff13e794;
  _DAT_1832f2bc8 = (_DAT_1832f2bc8 * -0x5545763318a9e92f ^ _DAT_1832f2808) + uVar4;
  _DAT_1832f29e8 = _DAT_1832f2bc8 ^ _DAT_1832f2808;
  _DAT_1832f2c40 = 0xfc0;
  uVar4 = (_DAT_1832f29e0 ^ _DAT_181e0d0b0) + _DAT_1832f2a28 + 0x84222325;
  uVar5 = (_DAT_1832f2a28 ^ _UNK_181e0d0b8) + _DAT_1832f29e0 + 0xfd5f435a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f29e0 ^ _DAT_181e0d0b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2a28 ^ _UNK_181e0d0b8;
  _DAT_1832f29f0 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f29e0 + 0xfd5f435a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2a28 + 0x84222325));
  uVar4 = _DAT_1832f29f0 >> 1 | _DAT_1832f29f0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_1832f29f0;
  _DAT_1832f2950 = (_DAT_1832f2950 ^ uVar4) - 0xfd5f435a ^ 0xe05df01f1bad967f;
  _DAT_1832f2b08 = (_DAT_1832f2b08 * 0x55254082b58ee4b9 ^ _DAT_1832f2950) + uVar4;
  _DAT_1832f2538 = _DAT_1832f2b08 ^ _DAT_1832f2950;
  _DAT_1832f2598 = 0x2a0bca6;
  uVar4 = (_DAT_1832f2678 ^ _DAT_181e0d0c0) + _DAT_1832f2c50 + 0x84222ce5;
  uVar5 = (_DAT_1832f2c50 ^ _UNK_181e0d0c8) + _DAT_1832f2678 + 0xfd5f435a;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2678 ^ _DAT_181e0d0c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2c50 ^ _UNK_181e0d0c8;
  _DAT_1832f26f8 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2678 + 0xfd5f435a) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2c50 + 0x84222ce5));
  uVar4 = (ulonglong)(((uint)_DAT_1832f26f8 ^ 0x640) & 0xfc0) * 0x2000000;
  _DAT_1832f2be8 = _DAT_1832f2b78 ^ uVar4 ^ 0xfd5f531a;
  _DAT_1832f2a88 = (_DAT_1832f2a88 ^ uVar4) + 0xfd5f531a ^ 0x870826c0a723e632;
  _DAT_1832f2508 = (_DAT_1832f2508 * 0x5041727af5fb02cf ^ _DAT_1832f2a88) + uVar4;
  _DAT_1832f29b0 = _DAT_1832f2508 ^ _DAT_1832f2a88;
  _DAT_1832f28a8 = _DAT_1832f2670 ^ 0xfd5f531a;
  _DAT_1832f27d8 = 0xfd5f531a;
  uVar4 = (_DAT_1832f29a0 ^ _DAT_181e0d0d0) + _DAT_1832f25b8 + 0x797d703f;
  uVar5 = (_DAT_1832f25b8 ^ _UNK_181e0d0d8) + _DAT_1832f29a0 + 0x2a0bca6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f29a0 ^ _DAT_181e0d0d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f25b8 ^ _UNK_181e0d0d8;
  _DAT_1832f2610 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f29a0 + 0x2a0bca6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f25b8 + 0x797d703f));
  uVar4 = _DAT_1832f2610 & 0x7fffffff80000000;
  _DAT_1832f2930 = _DAT_1832f29e8 ^ uVar4 ^ 0x100000fc0;
  _DAT_1832f2cc0 = (_DAT_1832f2cc0 ^ uVar4) + 0x100000fc0 ^ 0x21f9f100240aff30;
  _DAT_1832f2ca0 = (_DAT_1832f2ca0 * 0xff647747fcaa717 ^ _DAT_1832f2cc0) + uVar4;
  _DAT_1832f2768 = _DAT_1832f2ca0 ^ _DAT_1832f2cc0;
  _DAT_1832f2c10 = 0xfc0;
  _DAT_1832f2b88 = func_0x00018c230420(_DAT_1832f2658 + 0xffeaffc9b4ff65ff ^ 0xbe);
  uVar4 = _DAT_1832f2b88 & 0x7fffffffffffffc0;
  _DAT_1832f2788 = _DAT_1832f2888 ^ uVar4 ^ 0x17b7bb08e;
  _DAT_1832f2828 = (_DAT_1832f2828 ^ uVar4) + 0x17b7bb08e ^ 0x5e2e5c3b5f67a376;
  _DAT_1832f2850 = (_DAT_1832f2850 * -0x1eff5616463d0881 ^ _DAT_1832f2828) + uVar4;
  _DAT_1832f2ce8 = _DAT_1832f2850 ^ _DAT_1832f2828;
  _DAT_1832f2c50 = 0x7b7bb08e;
  uVar4 = (~_DAT_1832f2608 + 0x86ffb354) *
          ((_DAT_1832f2ab8 ^ 0x7059de1e) + (ulonglong)((uint)_DAT_1832f2ab8 & 0x7059de1e) * 2);
  uVar4 = (uVar4 | _DAT_1832f2c08) + (uVar4 & _DAT_1832f2c08);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f26a8 = func_0x00018c230420((uVar4 | 0xf6a66d4d) + (ulonglong)((uint)uVar4 & 0xf6a66d4d))
  ;
  uVar4 = _DAT_1832f26a8 >> 1 | _DAT_1832f26a8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          _DAT_1832f26a8;
  _DAT_1832f2880 = (_DAT_1832f2880 ^ uVar4) + 0x72844e68 ^ 0x2da16da26ba1337a;
  _DAT_1832f2988 = (_DAT_1832f2988 * 0x10240f59d44877df ^ _DAT_1832f2880) + uVar4;
  _DAT_1832f2ad8 = _DAT_1832f2988 ^ _DAT_1832f2880;
  _DAT_1832f29c0 = 0x72844e68;
  uVar4 = (~_DAT_1832f2bb0 + 0x86ffb354) *
          ((_DAT_1832f27a0 ^ 0x7059de1e) + (ulonglong)((uint)_DAT_1832f27a0 & 0x7059de1e) * 2);
  uVar4 = (uVar4 | _DAT_1832f2b00) + (uVar4 & _DAT_1832f2b00);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2cd8 = func_0x00018c230420((uVar4 | 0xf6a66d4d) + (ulonglong)((uint)uVar4 & 0xf6a66d4d))
  ;
  uVar4 = _DAT_1832f2cd8 >> 1 | _DAT_1832f2cd8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_1832f2cd8;
  _DAT_1832f2678 = (_DAT_1832f2678 ^ uVar4) + 0x847bb113 ^ 0x4b27db88aa556840;
  _DAT_1832f2940 = (_DAT_1832f2940 * -0x1850472ec35f4c21 ^ _DAT_1832f2678) + uVar4;
  _DAT_1832f2800 = _DAT_1832f2940 ^ _DAT_1832f2678;
  _DAT_1832f2870 = 0x847bb113;
  uVar4 = (_DAT_1832f2ba0 ^ _DAT_181e0d0e0) + _DAT_1832f27a8 + 0xff5993ab;
  uVar5 = (_DAT_1832f27a8 ^ _UNK_181e0d0e8) + _DAT_1832f2ba0 + 0x7b7bb08e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2ba0 ^ _DAT_181e0d0e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f27a8 ^ _UNK_181e0d0e8;
  uVar4 = func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2ba0 + 0x7b7bb08e) ^
                              (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f27a8 + 0xff5993ab));
  _DAT_1832f2758 =
       ((uVar4 ^ 0x3b90076b96378ec4) & 0xfffffffffff) << 0x12 | (uVar4 ^ 0x3b90076b96378ec4) >> 0x2e
  ;
  _DAT_1832f26f8 = _DAT_1832f26f8 ^ _DAT_1832f2758 ^ 0xce6eac0984f886a2;
  _DAT_1832f2c50 = (_DAT_1832f2c50 * -0x6ba00d8301975b5d ^ _DAT_1832f26f8) + _DAT_1832f2758;
  _DAT_1832f2b98 = _DAT_1832f2c50 ^ _DAT_1832f26f8;
  _DAT_1832f26d0 = 0;
  uVar4 = (_DAT_1832f2ba0 ^ _DAT_181e0d0f0) + _DAT_1832f29a0 + 0x7059de1e;
  uVar5 = (_DAT_1832f29a0 ^ _UNK_181e0d0f8) + _DAT_1832f2ba0 + 0xffffffff;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2ba0 ^ _DAT_181e0d0f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f29a0 ^ _UNK_181e0d0f8;
  _DAT_1832f2518 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2ba0 + 0xffffffff) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f29a0 + 0x7059de1e));
  uVar4 = (_DAT_1832f2518 ^ 0xf47bfd3a0b8402c5) * 0x3e3e3adfcbafadab;
  _DAT_1832f2938 = (_DAT_1832f2938 ^ uVar4) + 0xb8402c4 ^ 0x6745896b19487be3;
  _DAT_1832f2688 = (_DAT_1832f2688 * 0x6c32415f62a3c6d7 ^ _DAT_1832f2938) + uVar4;
  _DAT_1832f2af0 = _DAT_1832f2688 ^ _DAT_1832f2938;
  _DAT_1832f2b00 = 0xb8402c4;
  uVar4 = (~_DAT_1832f2c48 + 0xb8402c5) *
          ((_DAT_1832f2928 ^ 0x7059de1e) + (ulonglong)((uint)_DAT_1832f2928 & 0x7059de1e) * 2);
  uVar4 = (uVar4 | _DAT_1832f2868) + (uVar4 & _DAT_1832f2868);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2620 = func_0x00018c230420((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda))
  ;
  uVar4 = (_DAT_1832f2620 ^ 0xffffffff) * 0x60a0b7a68a372b6f;
  _DAT_1832f2c60 = _DAT_1832f2c60 ^ uVar4 ^ 0x162cdd20545723b6;
  _DAT_1832f2b70 = (_DAT_1832f2b70 * 0x25b634da4dfcffc1 ^ _DAT_1832f2c60) + uVar4;
  _DAT_1832f29b8 = _DAT_1832f2b70 ^ _DAT_1832f2c60;
  _DAT_1832f25a8 = 0;
  uVar4 = ((_DAT_1832f2b38 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_1832f2b38 & 0x84222ce5) * 2) *
          -_DAT_1832f2518;
  uVar4 = (uVar4 | _DAT_1832f2888) + (uVar4 & _DAT_1832f2888);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2c58 = func_0x00018c230420((uVar4 | 0x84222ce5) + (ulonglong)((uint)uVar4 & 0x84222ce5))
  ;
  uVar4 = _DAT_1832f2c58 ^ 0xfc0;
  _DAT_1832f28e8 = _DAT_1832f25b8 ^ uVar4 ^ 0xfc0;
  _DAT_1832f2cc8 = (_DAT_1832f2cc8 ^ uVar4) + 0xfc0 ^ 0xd2713df224da8c7;
  _DAT_1832f2cd8 = (_DAT_1832f2cd8 * -0x143c393085e5346d ^ _DAT_1832f2cc8) + uVar4;
  _DAT_1832f2608 = _DAT_1832f2cd8 ^ _DAT_1832f2cc8;
  _DAT_1832f2510 = 0xfc0;
  uVar4 = (~_DAT_1832f2680 + 0xf4226c0c) *
          ((_DAT_1832f29b8 ^ 0x70004f2e) + (ulonglong)((uint)_DAT_1832f29b8 & 0x70004f2e) * 2);
  uVar4 = (uVar4 | _DAT_1832f2ce0) + (uVar4 & _DAT_1832f2ce0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2960 = func_0x00018c230420((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_1832f2a90 = _DAT_1832f2a90 ^ _DAT_1832f2960 & 0x7fffffffffffffff ^ 0x259923750ae1667b;
  _DAT_1832f28c8 =
       (_DAT_1832f28c8 * -0x4bbe782aa4fca473 ^ _DAT_1832f2a90) +
       (_DAT_1832f2960 & 0x7fffffffffffffff);
  _DAT_1832f27e8 = _DAT_1832f28c8 ^ _DAT_1832f2a90;
  _DAT_1832f2c68 = 0;
  uVar4 = (ulonglong)uVar7 ^ 0x84222325;
  uVar5 = uVar4 ^ _DAT_1832f2728;
  lVar8 = uVar4 + _DAT_1832f2640;
  uVar4 = uVar5 + lVar8;
  uVar13 = (_DAT_1832f2640 ^ 0xfc0) + _DAT_1832f2728 + 0xfc0;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar13 * 0x2000 | uVar13 >> 0x33) ^ _DAT_1832f2640 ^ 0xfc0;
  _DAT_1832f2918 =
       func_0x00018c230420((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2728 + 0xfc0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar8);
  uVar4 = (ulonglong)uVar7 ^ ((_DAT_1832f2918 & 0x3ffffffffff) << 0x15 | _DAT_1832f2918 >> 0x2b);
  uVar13 = (ulonglong)(uVar7 & 0xfc0);
  _DAT_1832f2c50 = (_DAT_1832f2c50 ^ uVar4) + uVar13 ^ 0x3a7356e6a2cc2967;
  _DAT_1832f26e8 = (_DAT_1832f26e8 * -0x1a60ddb18b3909b5 ^ _DAT_1832f2c50) + uVar4;
  _DAT_1832f29e0 = _DAT_1832f26e8 ^ _DAT_1832f2c50;
  lVar6 = _DAT_1832f2a80 + 0x2e3482a9;
  lVar8 = _DAT_1832f2a10 + 0xca841262;
  uVar4 = (_DAT_1832f2a10 ^ _DAT_181e0d100) + lVar6;
  uVar5 = (_DAT_1832f2a80 ^ _UNK_181e0d108) + lVar8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2a10 ^ _DAT_181e0d100;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2a80 ^ _UNK_181e0d108;
  _DAT_1832f2668 = uVar13;
  *(int *)(unaff_RBP + 0xc) = *(int *)(unaff_RBP + 0xc) << 0xc;
  _DAT_1832f2b18 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - lVar8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar6);
  uVar4 = _DAT_1832f2b18 ^ 0x868d9b5ad2230e14;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar4;
  _DAT_1832f2508 = (_DAT_1832f2508 ^ uVar4) + 0xea96b3ee ^ 0xfdc35316753e0d80;
  _DAT_1832f2598 = (_DAT_1832f2598 * -0x578a39c68c53591b ^ _DAT_1832f2508) + uVar4;
  _DAT_1832f2b20 = _DAT_1832f2598 ^ _DAT_1832f2508;
  _DAT_1832f27d0 = 0xea96b3ee;
  uVar4 = (_DAT_1832f2a90 ^ _DAT_181e0d110) + _DAT_1832f2548 + 0x6218c60a;
  uVar5 = (_DAT_1832f2548 ^ _UNK_181e0d118) + _DAT_1832f2a90 + 0x500fb690;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2a90 ^ _DAT_181e0d110;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2548 ^ _UNK_181e0d118;
  _DAT_1832f27a0 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2a90 + 0x500fb690) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2548 + 0x6218c60a));
  uVar4 = (_DAT_1832f27a0 << 0x2b | _DAT_1832f27a0 >> 0x15) >> 0x24 |
          (_DAT_1832f27a0 >> 0x15) << 0x1c;
  _DAT_1832f2758 = (_DAT_1832f2758 ^ uVar4) + 0xb63553bf ^ 0xb3f80070d3b8c216;
  _DAT_1832f2950 = (_DAT_1832f2950 * 0x71d8ae0cfc0c5f35 ^ _DAT_1832f2758) + uVar4;
  _DAT_1832f2b58 = _DAT_1832f2950 ^ _DAT_1832f2758;
  _DAT_1832f2ab0 = 0xb63553bf;
  uVar4 = (_DAT_1832f2ca8 ^ _DAT_181e0d120) + _DAT_1832f28e8 + 0x84222325;
  uVar5 = (_DAT_1832f28e8 ^ _UNK_181e0d128) + _DAT_1832f2ca8 + 0xc44353b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2ca8 ^ _DAT_181e0d120;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f28e8 ^ _UNK_181e0d128;
  _DAT_1832f2a38 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2ca8 + 0xc44353b0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f28e8 + 0x84222325));
  _DAT_1832f28f8 = (_DAT_1832f28f8 ^ _DAT_1832f2a38 ^ 0xc44353b0) - 0xc44353b0 ^ 0xa9a15bd979f4866e;
  _DAT_1832f2bf8 =
       (_DAT_1832f2bf8 * -0x2b7f92fe89352dab ^ _DAT_1832f28f8) + (_DAT_1832f2a38 ^ 0xc44353b0);
  _DAT_1832f2a60 = _DAT_1832f2bf8 ^ _DAT_1832f28f8;
  _DAT_1832f2860 = 0x3bbcac50;
  uVar4 = (~_DAT_1832f26c0 + 0xc44353b1) *
          ((_DAT_1832f2700 ^ 0x8422d325) + (ulonglong)((uint)_DAT_1832f2700 & 0x8422d325) * 2);
  uVar4 = (uVar4 | _DAT_1832f2b28) + (uVar4 & _DAT_1832f2b28);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2558 = func_0x00018c230420((uVar4 | 0x40618095) + (ulonglong)((uint)uVar4 & 0x40618095))
  ;
  uVar4 = _DAT_1832f2558 * 0x4bdf69cc9244e99b;
  _DAT_1832f2838 = _DAT_1832f26a0 ^ uVar4 ^ 0xc44443b0;
  _DAT_1832f2870 = (_DAT_1832f2870 ^ uVar4) + 0xc44443b0 ^ 0xb615b92d41484c06;
  _DAT_1832f2578 = (_DAT_1832f2578 * -0x16bbb8a1ed8b118b ^ _DAT_1832f2870) + uVar4;
  _DAT_1832f2510 = _DAT_1832f2578 ^ _DAT_1832f2870;
  _DAT_1832f2c90 = 0xc44443b0;
  _DAT_1832f2cd0 = func_0x00018c230420(_DAT_1832f2c80 + 0xe001e890099ff ^ 0x5d);
  _DAT_1832f2ae0 = (_DAT_1832f2ae0 ^ _DAT_1832f2cd0) - 0x9a9c3dac ^ 0x7643e74509ef3e99;
  _DAT_1832f2590 = (_DAT_1832f2590 * -0x6a5fb87f3a558d7d ^ _DAT_1832f2ae0) + _DAT_1832f2cd0;
  _DAT_1832f2ad8 = _DAT_1832f2590 ^ _DAT_1832f2ae0;
  _DAT_1832f2650 = 0x6563c254;
  _DAT_1832f25b8 = func_0x00018c230420(_DAT_1832f2be8 + 0xffd5fff1870049ff ^ 0x8b);
  uVar4 = _DAT_1832f25b8 ^ 0x9a9c0dac;
  _DAT_1832f2820 = _DAT_1832f2bf0 ^ uVar4 ^ 0x9a9d2dac;
  _DAT_1832f2a40 = (_DAT_1832f2a40 ^ uVar4) + 0x9a9d2dac ^ 0x6a98ead6cb3a9530;
  _DAT_1832f29d8 = (_DAT_1832f29d8 * -0x30304739fba35cb1 ^ _DAT_1832f2a40) + uVar4;
  _DAT_1832f2b48 = _DAT_1832f29d8 ^ _DAT_1832f2a40;
  _DAT_1832f2540 = 0x9a9d2dac;
  uVar4 = (~_DAT_1832f2b90 + 0x6563c255) *
          ((_DAT_1832f2ab0 ^ 0x1ebf0e89) + (ulonglong)((uint)_DAT_1832f2ab0 & 0x1ebf0e89) * 2);
  uVar4 = (uVar4 | _DAT_1832f29f0) + (uVar4 & _DAT_1832f29f0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2c38 = func_0x00018c230420((uVar4 | 0x7bdcccdd) + (ulonglong)((uint)uVar4 & 0x7bdcccdd))
  ;
  uVar4 = _DAT_1832f2c38 >> 1 | _DAT_1832f2c38;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ _DAT_1832f2c38) & 0xffffffffffffffe0;
  _DAT_1832f29a0 = _DAT_1832f2658 ^ uVar4 ^ 0x10000f000;
  _DAT_1832f2af8 = (_DAT_1832f2af8 ^ uVar4) + 0x10000f000 ^ 0xff69dd1e2b7e10f8;
  _DAT_1832f2b70 = (_DAT_1832f2b70 * -0x5bcfec475f1e7eed ^ _DAT_1832f2af8) + uVar4;
  _DAT_1832f25c8 = _DAT_1832f2b70 ^ _DAT_1832f2af8;
  _DAT_1832f2610 = 0xf000;
  uVar4 = (~_DAT_1832f2770 + 0x912b471) *
          ((_DAT_1832f2738 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832f2738 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1832f2bc8) + (uVar4 & _DAT_1832f2bc8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2c18 = func_0x00018c230420((uVar4 | 0x8d309755) + (ulonglong)((uint)uVar4 & 0x8d309755))
  ;
  uVar4 = _DAT_1832f2c18 - (_DAT_1832f2c18 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_1832f2c18;
  _DAT_1832f2680 = (_DAT_1832f2680 ^ uVar4) - 0x912b470 ^ 0x80ef0e08a260cb1c;
  _DAT_1832f2af0 = (_DAT_1832f2af0 * 0x7d3184ec57af50d7 ^ _DAT_1832f2680) + uVar4;
  _DAT_1832f2550 = _DAT_1832f2af0 ^ _DAT_1832f2680;
  _DAT_1832f28e0 = 0xf6ed4b90;
  uVar4 = (~_DAT_1832f2cf8 + 0xf6ed4b91) *
          ((_DAT_1832f28a0 ^ 0x8d318755) + (ulonglong)((uint)_DAT_1832f28a0 & 0x8d318755) * 2);
  uVar4 = (uVar4 | _DAT_1832f2c18) + (uVar4 & _DAT_1832f2c18);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f29b8 = func_0x00018c230420((uVar4 | 0x7bdcccc5) + (ulonglong)((uint)uVar4 & 0x7bdcccc5))
  ;
  uVar4 = _DAT_1832f29b8 ^ 0x913a470;
  _DAT_1832f2c78 = _DAT_1832f2aa8 ^ uVar4 ^ 0x10000f000;
  _DAT_1832f29c8 = (_DAT_1832f29c8 ^ uVar4) + 0x10000f000 ^ 0xc91ce8e0a0f0c343;
  _DAT_1832f2c48 = (_DAT_1832f2c48 * 0x3bcc341be9a60f49 ^ _DAT_1832f29c8) + uVar4;
  _DAT_1832f2b28 = _DAT_1832f2c48 ^ _DAT_1832f29c8;
  _DAT_1832f2c50 = 0xf000;
  _DAT_1832f29e0 = func_0x00018c230420(_DAT_1832f2958 ^ 0xffbd00c86c00809b);
  uVar4 = _DAT_1832f29e0 >> 1 | _DAT_1832f29e0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1832f29e0;
  _DAT_1832f2a60 = (_DAT_1832f2a60 ^ uVar4) + 0x5ca3e051 ^ 0x7634fdee21497ec6;
  _DAT_1832f26d0 = (_DAT_1832f26d0 * 0x2856910ba3ca597b ^ _DAT_1832f2a60) + uVar4;
  _DAT_1832f2c48 = _DAT_1832f26d0 ^ _DAT_1832f2a60;
  _DAT_1832f2ca8 = 0x5ca3e051;
  uVar4 = (~_DAT_1832f25d8 + 0xb63553c0) *
          ((_DAT_1832f2c88 ^ 0x6eb490cb) + (ulonglong)((uint)_DAT_1832f2c88 & 0x6eb490cb) * 2);
  uVar4 = (uVar4 | _DAT_1832f2988) + (uVar4 & _DAT_1832f2988);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2ba0 = func_0x00018c230420((uVar4 | 0xd881c374) + (ulonglong)((uint)uVar4 & 0xd881c374))
  ;
  _DAT_1832f2530 =
       (_DAT_1832f2530 ^ _DAT_1832f2ba0 & 0x7fffffffffffffff) + 0xa21413ae ^ 0x2cd619d3756e6121;
  _DAT_1832f2b80 =
       (_DAT_1832f2b80 * -0x65a702a36b7ace6d ^ _DAT_1832f2530) +
       (_DAT_1832f2ba0 & 0x7fffffffffffffff);
  _DAT_1832f28d8 = _DAT_1832f2b80 ^ _DAT_1832f2530;
  _DAT_1832f2798 = 0xa21413ae;
  uVar4 = (_DAT_1832f2550 ^ _DAT_181e0d130) + _DAT_1832f2b00 + 0xd881c374;
  uVar5 = (_DAT_1832f2b00 ^ _UNK_181e0d138) + _DAT_1832f2550 + 0x4428275c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2550 ^ _DAT_181e0d130;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2b00 ^ _UNK_181e0d138;
  _DAT_1832f2aa0 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2550 + 0x4428275c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2b00 + 0xd881c374));
  uVar4 = (_DAT_1832f2aa0 << 0x21 | _DAT_1832f2aa0 >> 0x1f) >> 0x11 |
          (_DAT_1832f2aa0 >> 0x1f) << 0x2f;
  _DAT_1832f2b78 = _DAT_1832f26c8 ^ uVar4 ^ 0xa0cc07ad;
  _DAT_1832f2c70 = (_DAT_1832f2c70 ^ uVar4) + 0xa0cc07ad ^ 0x922fd35f31e1941e;
  _DAT_1832f2c58 = (_DAT_1832f2c58 * 0x4edc5ccae60b1255 ^ _DAT_1832f2c70) + uVar4 ^ _DAT_1832f2c70;
  _DAT_1832f2998 = 0xa0cc07ad;
  uVar4 = (_DAT_1832f2b50 ^ 0x8422d325) + _DAT_1832f2858 + 0x8422d325;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2b50 ^ 0x8422d325;
  uVar5 = ((_DAT_1832f2858 + _DAT_1832f2b50) * 0x2000 | _DAT_1832f2858 + _DAT_1832f2b50 >> 0x33) ^
          _DAT_1832f2858;
  _DAT_1832f2910 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_1832f2b50 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2858 + 0x8422d325));
  _DAT_1832f2508 = _DAT_1832f2870 ^ _DAT_1832f2910 ^ 0xf000;
  _DAT_1832f2a20 = (_DAT_1832f2a20 ^ _DAT_1832f2910) + 0xf000 ^ 0xe207e1889c50e8bf;
  _DAT_1832f2a00 = (_DAT_1832f2a00 * 0x356410903034df53 ^ _DAT_1832f2a20) + _DAT_1832f2910;
  _DAT_1832f2998 = _DAT_1832f2a00 ^ _DAT_1832f2a20;
  _DAT_1832f29e0 = 0xf000;
  uVar4 = (~_DAT_1832f2ac8 + 0x100000000) *
          ((_DAT_1832f27d0 ^ 0x6eb490cb) + (ulonglong)((uint)_DAT_1832f27d0 & 0x6eb490cb) * 2);
  uVar4 = (uVar4 | _DAT_1832f2858) + (uVar4 & _DAT_1832f2858);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2be0 = func_0x00018c230420((uVar4 | 0x914b6f34) + (ulonglong)((uint)uVar4 & 0x914b6f34))
  ;
  _DAT_1832f29f0 =
       (_DAT_1832f29f0 ^ _DAT_1832f2be0 ^ 0xea96b3ed00000003) + 0x15694c11 ^ 0xd2fb711c5f97ef50;
  _DAT_1832f2838 =
       (_DAT_1832f2838 * 0x422640b24b0cdd79 ^ _DAT_1832f29f0) +
       (_DAT_1832f2be0 ^ 0xea96b3ed00000003);
  _DAT_1832f2ce8 = _DAT_1832f2838 ^ _DAT_1832f29f0;
  _DAT_1832f2930 = 0x15694c11;
  _DAT_1832f26d8 = func_0x00018c230420(_DAT_1832f27c8 + 0xa400295a00acff ^ 0x76);
  uVar4 = _DAT_1832f26d8 ^ 0xea96b3ee;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar4 ^ 0x15694c11;
  _DAT_1832f2738 = _DAT_1832f2738 ^ uVar4 ^ 0x944ce665b2a66420;
  _DAT_1832f2b58 = (_DAT_1832f2b58 * -0x3960330c4300df2b ^ _DAT_1832f2738) + uVar4;
  _DAT_1832f2cb0 = _DAT_1832f2b58 ^ _DAT_1832f2738;
  _DAT_1832f2810 = 0;
  uVar4 = ((_DAT_1832f2ae8 ^ 0x8422d325) + (ulonglong)((uint)_DAT_1832f2ae8 & 0x8422d325) * 2) *
          -_DAT_1832f2ca0;
  uVar4 = (uVar4 | _DAT_1832f2c50) + (uVar4 & _DAT_1832f2c50);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2ca0 = func_0x00018c230420((uVar4 | 0x8422d325) + (ulonglong)((uint)uVar4 & 0x8422d325))
  ;
  uVar4 = _DAT_1832f2ca0 & 0x7ffffffffffffff ^ 0xf000;
  _DAT_1832f2820 = _DAT_1832f2b68 ^ uVar4 ^ 0xf000;
  _DAT_1832f2a28 = (_DAT_1832f2a28 ^ uVar4) + 0xf000 ^ 0xcdeeb2df890194d8;
  _DAT_1832f2ab8 = (_DAT_1832f2ab8 * -0x14fdcb1b9657f40f ^ _DAT_1832f2a28) + uVar4;
  _DAT_1832f2aa8 = _DAT_1832f2ab8 ^ _DAT_1832f2a28;
  _DAT_1832f2a38 = 0xf000;
  _DAT_1832f2c70 = func_0x00018c230420(_DAT_1832f2718 ^ 0xffe3007c230021bc);
  uVar4 = ((_DAT_1832f2c70 ^ 0x7102108e1a016490) << 0xc |
          (_DAT_1832f2c70 ^ 0x7102108e1a016490) >> 0x34) ^ 0xaa16a18c;
  _DAT_1832f29d0 = _DAT_1832f29d0 ^ uVar4 ^ 0xd97b8952a82caf31;
  _DAT_1832f25f8 = (_DAT_1832f25f8 * -0x581b0fb37a5f4421 ^ _DAT_1832f29d0) + uVar4;
  _DAT_1832f2c08 = _DAT_1832f25f8 ^ _DAT_1832f29d0;
  _DAT_1832f2b98 = 0;
  uVar7 = *(uint *)(unaff_RBP + 0xc);
  auVar11._8_8_ = _UNK_180144ff8;
  auVar11._0_8_ = (ulonglong)uVar7 ^ 0x84222325;
  auVar10 = pshufb(auVar11 ^ _DAT_181e0d140,unaff_XMM6);
  uVar5 = auVar10._8_8_ + auVar10._0_8_;
  uVar4 = uVar5 + _DAT_1832f2ae8;
  if (auVar10._4_4_ < 0) {
    uVar4 = _DAT_1832f2698 ^ uVar5;
  }
  _DAT_1832f2970 = func_0x00018c230420(SUB161(auVar11 ^ _DAT_181e0d140,5) ^ uVar4);
  uVar5 = (ulonglong)uVar7 & 0xffff;
  _DAT_1832f2800 = (_DAT_1832f2800 ^ _DAT_1832f2970) + uVar5 ^ 0x9ce0b7820f29cb37;
  _DAT_1832f2598 = (_DAT_1832f2598 * -0x40e290703ab4ca57 ^ _DAT_1832f2800) + _DAT_1832f2970;
  _DAT_1832f2c10 = _DAT_1832f2598 ^ _DAT_1832f2800;
  uVar9 = uVar13 ^ 0x84222325;
  uVar4 = ((_DAT_1832f2788 ^ uVar9) + (ulonglong)((uint)_DAT_1832f2788 & (uint)uVar9) * 2) *
          (uVar5 - _DAT_1832f28d0);
  uVar4 = (uVar4 | uVar5) + (uVar4 & uVar5);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2940 = uVar5;
  _DAT_1832f2918 =
       func_0x00018c230420((uVar9 ^ uVar5 | uVar4) +
                           (ulonglong)((uint)(uVar9 ^ uVar5) & (uint)uVar4));
  uVar13 = uVar13 | uVar5;
  _DAT_1832f2738 = (_DAT_1832f2738 ^ uVar5 ^ _DAT_1832f2918) + uVar13 ^ 0xb54fe150f8da0c29;
  _DAT_1832f25a0 = (_DAT_1832f25a0 * 0x53d8a0ea876c27b9 ^ _DAT_1832f2738) + (uVar5 ^ _DAT_1832f2918)
  ;
  _DAT_1832f2bf0 = _DAT_1832f25a0 ^ _DAT_1832f2738;
  plVar1 = (longlong *)unaff_RBP[6];
  uVar2 = unaff_RBP[0xb];
  _DAT_1832f2660 = uVar13;
  lVar8 = (**(code **)(plVar1 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(plVar1,uVar2,0);
  *(int *)(unaff_RBP + 0xe) = (int)*(char *)(lVar8 + *(int *)(unaff_RBP + 0xf));
  (**(code **)(plVar1 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(plVar1,uVar2,lVar8,2);
  lVar6 = _DAT_1832f2ac8 + 0xe833af0c;
  lVar8 = _DAT_1832f25e0 + 0xc24fb88b;
  uVar4 = (_DAT_1832f25e0 ^ _DAT_181e0d150) + lVar6;
  uVar5 = (_DAT_1832f2ac8 ^ _UNK_181e0d158) + lVar8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f25e0 ^ _DAT_181e0d150;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2ac8 ^ _UNK_181e0d158;
  unaff_RBP[0xc] = (ulonglong)*(uint *)(unaff_RBP + 0xe);
  _DAT_1832f2558 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - lVar8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar6);
  uVar4 = _DAT_1832f2558 << 0x20 | _DAT_1832f2558 >> 0x20;
  _DAT_1832f2b80 = (_DAT_1832f2b80 ^ uVar4) + 0xae5e34a2 ^ 0x46a293a7e278c956;
  _DAT_1832f2970 = (_DAT_1832f2970 * -0x3aa15f65038ed2bb ^ _DAT_1832f2b80) + uVar4;
  _DAT_1832f2c58 = _DAT_1832f2970 ^ _DAT_1832f2b80;
  _DAT_1832f26f0 = 0xae5e34a2;
  uVar4 = (_DAT_1832f28e0 ^ _DAT_181e0d160) + _DAT_1832f27a0 + 0x7c184482;
  uVar5 = (_DAT_1832f27a0 ^ _UNK_181e0d168) + _DAT_1832f28e0 + 0x7c59898;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f28e0 ^ _DAT_181e0d160;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f27a0 ^ _UNK_181e0d168;
  _DAT_1832f2678 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f28e0 + 0x7c59898) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f27a0 + 0x7c184482));
  uVar4 = _DAT_1832f2678 & 0xffffffffff;
  _DAT_1832f2970 = _DAT_1832f2820 ^ uVar4 ^ 0x10000003f;
  _DAT_1832f2730 = (_DAT_1832f2730 ^ uVar4) + 0x10000003f ^ 0xce77ed5e8a9e2869;
  _DAT_1832f25d0 = (_DAT_1832f25d0 * -0x690677c434b2e753 ^ _DAT_1832f2730) + uVar4;
  _DAT_1832f28a8 = _DAT_1832f25d0 ^ _DAT_1832f2730;
  _DAT_1832f2cb8 = 0x3f;
  uVar4 = (_DAT_1832f2588 ^ _DAT_181e0d170) + _DAT_1832f2688 + 0x84222325;
  uVar5 = (_DAT_1832f2688 ^ _UNK_181e0d178) + _DAT_1832f2588 + 0xcd96aa81;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2588 ^ _DAT_181e0d170;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2688 ^ _UNK_181e0d178;
  _DAT_1832f2640 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2588 + 0xcd96aa81) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2688 + 0x84222325));
  uVar4 = _DAT_1832f2640 - (_DAT_1832f2640 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar3 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = ((uint)bVar3 + (uint)bVar3 ^ _DAT_1832f2640) << 0x33 | _DAT_1832f2640 >> 0xd;
  _DAT_1832f2860 = (_DAT_1832f2860 ^ uVar4) - 0xcd96aa81 ^ 0x48284dc68eab815a;
  _DAT_1832f2bb8 = (_DAT_1832f2bb8 * -0x5d95f01fb25e675d ^ _DAT_1832f2860) + uVar4;
  _DAT_1832f2a98 = _DAT_1832f2bb8 ^ _DAT_1832f2860;
  _DAT_1832f29d8 = 0x3269557f;
  uVar4 = (_DAT_1832f2c48 ^ _DAT_181e0d180) + _DAT_1832f2640 + 0x84222325;
  uVar5 = (_DAT_1832f2640 ^ _UNK_181e0d188) + _DAT_1832f2c48 + 0x81334d77;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832f2c48 ^ _DAT_181e0d180;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2640 ^ _UNK_181e0d188;
  _DAT_1832f2558 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2c48 + 0x81334d77) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2640 + 0x84222325));
  uVar5 = _UNK_181e0d198;
  uVar4 = _DAT_181e0d190;
  uVar9 = _DAT_1832f2558 - (_DAT_1832f2558 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_1832f2558;
  _DAT_1832f25b0 = (_DAT_1832f25b0 ^ uVar9) - 0x81334d77 ^ 0xdd0afe5a9a5e2848;
  _DAT_1832f2938 = (_DAT_1832f2938 * 0x7c57b65996422d45 ^ _DAT_1832f25b0) + uVar9;
  _DAT_1832f2b58 = _DAT_1832f2938 ^ _DAT_1832f25b0;
  _DAT_1832f2a10 = 0x7eccb289;
  uVar9 = (_DAT_1832f2b40 ^ _DAT_181e0d190) + _DAT_1832f26b0 + 0x365bbcda;
  uVar12 = (_DAT_1832f26b0 ^ _UNK_181e0d198) + _DAT_1832f2b40 + 0xae5e34a2;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832f2b40 ^ _DAT_181e0d190;
  uVar12 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1832f26b0 ^ _UNK_181e0d198;
  _DAT_1832f2c28 =
       func_0x00018c230420((uVar12 << 0x1d | uVar12 >> 0x23) - (_DAT_1832f2b40 + 0xae5e34a2) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_1832f26b0 + 0x365bbcda));
  uVar9 = (_DAT_1832f2c28 >> 0xc) * 0x6fcf2d7cabc7000 ^ 0xb2799fff;
  _DAT_1832f2bb0 = _DAT_1832f2c80 ^ uVar9 ^ 0x160d7d4a1;
  _DAT_1832f29e0 = (_DAT_1832f29e0 ^ uVar9) + 0x160d7d4a1 ^ 0xcc74e7e122d15f66;
  _DAT_1832f27b8 = (_DAT_1832f27b8 * 0x244753619a88c305 ^ _DAT_1832f29e0) + uVar9;
  _DAT_1832f2728 = _DAT_1832f27b8 ^ _DAT_1832f29e0;
  _DAT_1832f2598 = 0x60d7d4a1;
  _DAT_1832f25a0 = func_0x00018c230420(_DAT_1832f2688 + 0xff87ff67c80002ff ^ 0x57);
  uVar9 = (_DAT_1832f25a0 << 0xb | _DAT_1832f25a0 >> 0x35) ^ 0xae5e34a2;
  _DAT_1832f2b10 = (_DAT_1832f2b10 ^ uVar9) + 0x1c27ab5d ^ 0xdd96d65a0cf3ced4;
  _DAT_1832f2548 = (_DAT_1832f2548 * 0x61a28199ed9a0bdb ^ _DAT_1832f2b10) + uVar9;
  _DAT_1832f2830 = _DAT_1832f2548 ^ _DAT_1832f2b10;
  _DAT_1832f2cc8 = 0x1c27ab5d;
  uVar9 = (_DAT_1832f2bc8 ^ uVar4) + _DAT_1832f2710 + 0x365bbcda;
  uVar12 = (_DAT_1832f2710 ^ uVar5) + _DAT_1832f2bc8 + 0xae5e34a2;
  uVar4 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832f2bc8 ^ uVar4;
  uVar5 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ _DAT_1832f2710 ^ uVar5;
  _DAT_1832f2b90 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2bc8 + 0xae5e34a2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f2710 + 0x365bbcda));
  uVar4 = ((_DAT_1832f2b90 ^ 0x79905819b7190b5e) << 0x2d |
          (_DAT_1832f2b90 ^ 0x79905819b7190b5e) >> 0x13) * 0x79866a8c85af2993;
  uVar4 = uVar4 << 0x37 | uVar4 >> 9;
  _DAT_1832f2858 = (_DAT_1832f2858 ^ uVar4) + 0xa25814a2 ^ 0x1421f61e0b573401;
  _DAT_1832f26b0 = (_DAT_1832f26b0 * 0x59c0012913cfeef ^ _DAT_1832f2858) + uVar4;
  _DAT_1832f2a70 = _DAT_1832f26b0 ^ _DAT_1832f2858;
  _DAT_1832f2500 = 0xa25814a2;
  uVar4 = (~_DAT_1832f26a8 + 0x44b02945) *
          ((_DAT_1832f2b50 ^ 0x98058878) + (ulonglong)((uint)_DAT_1832f2b50 & 0x98058878) * 2);
  uVar4 = (uVar4 | _DAT_1832f2748) + (uVar4 & _DAT_1832f2748);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2af0 = func_0x00018c230420((uVar4 | 0xdcb5a13c) + (ulonglong)((uint)uVar4 & 0xdcb5a13c))
  ;
  _DAT_1832f2640 = _DAT_1832f27d8 ^ _DAT_1832f2af0 ^ 0x60d7d4a1;
  _DAT_1832f29f0 = (_DAT_1832f29f0 ^ _DAT_1832f2af0) + 0x60d7d4a1 ^ 0x1b777eb7ecdbc528;
  _DAT_1832f2a68 = (_DAT_1832f2a68 * -0x1a0857662725cd85 ^ _DAT_1832f29f0) + _DAT_1832f2af0;
  _DAT_1832f2c88 = _DAT_1832f2a68 ^ _DAT_1832f29f0;
  _DAT_1832f2ba8 = _DAT_1832f2798 ^ 0x60d7d4a1;
  _DAT_1832f2588 = 0x60d7d4a1;
  uVar4 = (~_DAT_1832f2628 + 0x60d7d4a2) *
          ((_DAT_1832f26b0 ^ 0xe4f5f784) + (ulonglong)((uint)_DAT_1832f26b0 & 0xe4f5f784) * 2);
  uVar4 = (uVar4 | _DAT_1832f2a28) + (uVar4 & _DAT_1832f2a28);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2b48 = func_0x00018c230420((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_1832f2728 = _DAT_1832f2b48 & 0xfffffffffffffffc;
  _DAT_1832f2cd0 = _DAT_1832f2cd0 ^ _DAT_1832f2728 ^ 0x88ddc62af2d7522f;
  _DAT_1832f2988 = (_DAT_1832f2988 * -0x12a8e46ee6e98c6f ^ _DAT_1832f2cd0) + _DAT_1832f2728;
  _DAT_1832f25b8 = _DAT_1832f2988 ^ _DAT_1832f2cd0;
  _DAT_1832f2b68 = 0;
  _DAT_1832f27b8 = func_0x00018c230420(_DAT_1832f2780 + 0xffdd007c0a0021ffU ^ 0x22);
  uVar4 = _DAT_1832f27b8 & 0xffffffffffffff;
  _DAT_1832f2638 = _DAT_1832f2a18 ^ uVar4 ^ 0x3f;
  _DAT_1832f29c8 = (_DAT_1832f29c8 ^ uVar4) + 0x3f ^ 0x49ebfd56cff43a3d;
  _DAT_1832f2c30 = (_DAT_1832f2c30 * -0x455ce24fa1c4857d ^ _DAT_1832f29c8) + uVar4;
  _DAT_1832f2598 = _DAT_1832f2c30 ^ _DAT_1832f29c8;
  _DAT_1832f2b60 = 0x3f;
  uVar4 = (~_DAT_1832f2c60 + 0x100000000) *
          ((_DAT_1832f2a68 ^ 0x365bbcda) + (ulonglong)((uint)_DAT_1832f2a68 & 0x365bbcda) * 2);
  uVar4 = (uVar4 | _DAT_1832f2c40) + (uVar4 & _DAT_1832f2c40);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2b50 = func_0x00018c230420((uVar4 | 0xc9a44325) + (ulonglong)((uint)uVar4 & 0xc9a44325))
  ;
  _DAT_1832f2a38 = (_DAT_1832f2a38 ^ _DAT_1832f2b50 ^ 0xffffffff) + 0x4d866000 ^ 0x2c534e213d20a642;
  _DAT_1832f26f8 =
       (_DAT_1832f26f8 * 0x4f8681785ec04189 ^ _DAT_1832f2a38) + (_DAT_1832f2b50 ^ 0xffffffff);
  _DAT_1832f2c78 = _DAT_1832f26f8 ^ _DAT_1832f2a38;
  _DAT_1832f2928 = 0x4d866000;
  uVar4 = (~_DAT_1832f2740 + 0x4d866001) *
          ((_DAT_1832f2c08 ^ 0x365bbcda) + (ulonglong)((uint)_DAT_1832f2c08 & 0x365bbcda) * 2);
  uVar4 = (uVar4 | _DAT_1832f29c8) + (uVar4 & _DAT_1832f29c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2880 = func_0x00018c230420((uVar4 | 0x7bdddcda) + (ulonglong)((uint)uVar4 & 0x7bdddcda))
  ;
  uVar4 = (_DAT_1832f2880 ^ 0x360c43b708000000) & 0xfffffffff8000000;
  _DAT_1832f2690 = _DAT_1832f2690 ^ uVar4 ^ 0x3d560d90874d82a8;
  _DAT_1832f25f0 = (_DAT_1832f25f0 * 0x421c693135bf5157 ^ _DAT_1832f2690) + uVar4;
  _DAT_1832f2548 = _DAT_1832f25f0 ^ _DAT_1832f2690;
  _DAT_1832f2798 = 0;
  uVar4 = ((_DAT_1832f29f0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_1832f29f0 & 0x8422231a) * 2) *
          -_DAT_1832f2be8;
  uVar4 = (uVar4 | _DAT_1832f2738) + (uVar4 & _DAT_1832f2738);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2c40 = func_0x00018c230420((uVar4 | 0x8422231a) + (ulonglong)((uint)uVar4 & 0x8422231a))
  ;
  uVar4 = (_DAT_1832f2c40 ^ 0x3f) & 0xffffffffffff;
  _DAT_1832f2ba8 = _DAT_1832f2708 ^ uVar4 ^ 0x3f;
  _DAT_1832f29b8 = (_DAT_1832f29b8 ^ uVar4) + 0x3f ^ 0x659ae899a84e344b;
  _DAT_1832f26a8 = (_DAT_1832f26a8 * 0x7ddc773a3c5e0f43 ^ _DAT_1832f29b8) + uVar4 ^ _DAT_1832f29b8;
  _DAT_1832f2a38 = 0x3f;
  uVar4 = (~_DAT_1832f2790 + 0xb2799de0) *
          ((_DAT_1832f2c90 ^ 0x365bbefa) + (ulonglong)((uint)_DAT_1832f2c90 & 0x365bbefa) * 2);
  uVar4 = (uVar4 | _DAT_1832f2cd0) + (uVar4 & _DAT_1832f2cd0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f2728 = func_0x00018c230420((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = (_DAT_1832f2728 ^ 0x7c6d5950a0000000) & 0xffffffffe0000000;
  _DAT_1832f2cf0 = _DAT_1832f2cf0 ^ uVar4 ^ 0x2e27ad0f64f01f46;
  _DAT_1832f2658 = (_DAT_1832f2658 * -0x1ec7b413e2aff059 ^ _DAT_1832f2cf0) + uVar4;
  _DAT_1832f2cf8 = _DAT_1832f2658 ^ _DAT_1832f2cf0;
  _DAT_1832f2870 = _DAT_1832f2cc0;
  _DAT_1832f28e8 = 0;
  _DAT_1832f2ae8 = func_0x00018c230420(_DAT_1832f26e8 ^ 0x1d007be9ffdd1e);
  uVar4 = (_DAT_1832f2ae8 & 0xfffffffffffff) >> 0x1f |
          ((_DAT_1832f2ae8 << 1 | (ulonglong)((longlong)_DAT_1832f2ae8 < 0)) << 0xb |
          (_DAT_1832f2ae8 & 0x7fffffffffffffff) >> 0x34) << 0x15;
  _DAT_1832f27d8 = _DAT_1832f25e0 ^ uVar4 ^ 0x3f;
  _DAT_1832f2580 = (_DAT_1832f2580 ^ uVar4) + 0x3f ^ 0x981748f1ee7cc01f;
  _DAT_1832f2aa0 = (_DAT_1832f2aa0 * 0x68da4c9df7e8a8d7 ^ _DAT_1832f2580) + uVar4;
  _DAT_1832f2890 = _DAT_1832f2aa0 ^ _DAT_1832f2580;
  _DAT_1832f2aa8 = 0x3f;
  uVar5 = (ulonglong)((uint)unaff_RBP[0xc] & 0x3f);
  uVar9 = uVar5 ^ 0x84222325;
  uVar4 = ((_DAT_1832f28a8 ^ uVar9) + (ulonglong)((uint)_DAT_1832f28a8 & (uint)uVar9) * 2) *
          (uVar13 - _DAT_1832f27a8);
  uVar4 = (uVar4 | _DAT_1832f2b58) + (uVar4 & _DAT_1832f2b58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832f27c8 =
       func_0x00018c230420((uVar9 ^ uVar13 | uVar4) +
                           (ulonglong)((uint)(uVar9 ^ uVar13) & (uint)uVar4));
  uVar4 = _DAT_1832f27c8 - (_DAT_1832f27c8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_1832f27c8;
  uVar13 = uVar13 | uVar5;
  _DAT_1832f2968 = (_DAT_1832f2968 ^ uVar4) + uVar13 ^ 0xdfafbcf26ce15191;
  _DAT_1832f29d8 = (_DAT_1832f29d8 * 0x58d6c19ee38aae2f ^ _DAT_1832f2968) + uVar4;
  _DAT_1832f2c08 = _DAT_1832f29d8 ^ _DAT_1832f2968;
  _DAT_1832f2500 = uVar13;
  unaff_RBP[0xe] = *unaff_RBP;
  uVar7 = *(uint *)(unaff_RBP + 0x13);
  auVar10._8_8_ = _UNK_180062bf8;
  auVar10._0_8_ = (ulonglong)uVar7 ^ 0x84222325;
  *(uint *)(unaff_RBP + 0xf) = uVar7;
  auVar11 = pshufb(auVar10 ^ _DAT_181e0d1a0,unaff_XMM6);
  uVar5 = auVar11._8_8_ + auVar11._0_8_;
  uVar4 = uVar5 + _DAT_1832f2618;
  if (auVar11._4_4_ < 0) {
    uVar4 = _DAT_1832f2680 ^ uVar5;
  }
  _DAT_1832f2748 = func_0x00018c230420(SUB161(auVar10 ^ _DAT_181e0d1a0,5) ^ uVar4);
  uVar14 = uVar7 ^ (uint)DAT_18001a710;
  uVar4 = _DAT_1832f2748 << 0x26 | _DAT_1832f2748 >> 0x1a;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar4;
  _DAT_1832f2c08 =
       ((((ulonglong)uVar14 * (ulonglong)_DAT_181e0d240 + _DAT_181e0d250 << 0x20) +
         (ulonglong)uVar14 * (ulonglong)_DAT_181e0d230 +
        ((ulonglong)(uVar7 ^ unaff_XMM11_Da) * (ulonglong)_DAT_181e0d220 << 0x20) +
        (ulonglong)(uVar7 ^ unaff_XMM11_Da) * (ulonglong)_DAT_181e0d210 +
        ((ulonglong)(uVar7 | unaff_XMM11_Da) * (ulonglong)_DAT_181e0d200 << 0x20) +
        (ulonglong)(uVar7 | unaff_XMM11_Da) * (ulonglong)_DAT_181e0d1f0 +
        ((ulonglong)(uVar7 & unaff_XMM11_Da) * (ulonglong)_DAT_181e0d1e0 << 0x20 |
        (ulonglong)(uVar7 & unaff_XMM11_Da) * (ulonglong)_DAT_181e0d1d0) +
        ((ulonglong)uVar7 * (ulonglong)_DAT_181e0d1c0 << 0x20) +
        (ulonglong)uVar7 * (ulonglong)_DAT_181e0d1b0) -
       (((ulonglong)uVar14 * (ulonglong)_DAT_181e0d280 + _DAT_181e0d2a0 << 0x20) +
        (ulonglong)uVar14 * (ulonglong)_DAT_181e0d290 +
       (ulonglong)uVar7 * (ulonglong)_DAT_181e0d290 +
       ((ulonglong)uVar7 * (ulonglong)_DAT_181e0d280 << 0x20))) + 0xf6b1aba8baeaf0f5;
  _DAT_1832f2700 = _DAT_1832f2850 ^ uVar4 ^ _DAT_1832f2c08;
  _DAT_1832f2ba8 = (_DAT_1832f2ba8 ^ uVar4) + _DAT_1832f2c08 ^ 0xbd04001f7aa97b0f;
  _DAT_1832f2940 = (_DAT_1832f2940 * 0x247fc97269eb677f ^ _DAT_1832f2ba8) + uVar4;
  _DAT_1832f28a0 = _DAT_1832f2b38 ^ _DAT_1832f2c08;
  _DAT_1832f2c08 = _DAT_1832f2c08 & 0xffffffff;
  *(int *)(unaff_RBP + 0x10) = (int)uVar13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x14)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc217f95 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c217f95(ulonglong param_1,ulonglong param_2)

{
  byte bVar1;
  longlong in_RAX;
  longlong in_RCX;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  uint unaff_R14D;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint uVar9;
  uint unaff_XMM11_Da;
  uint uVar10;
  undefined1 unaff_XMM14 [16];
  uint unaff_XMM15_Da;
  
  *(bool *)(unaff_RBP + 0x98) = *(longlong *)(unaff_RBP + -8) == 0;
  uVar5 = param_1 + in_RCX + param_2;
  uVar6 = (param_2 ^ 1) + in_RAX + 1;
  param_1 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ param_1;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ param_2 ^ 1;
  _DAT_1832f2a78 =
       func_0x00018c230420((uVar5 << 0x1d | uVar5 >> 0x23) - (in_RAX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  uVar5 = _DAT_1832f2a78 & 0x1ffffffff;
  uVar9 = unaff_R14D & unaff_XMM11_Da;
  uVar7 = unaff_R14D | unaff_XMM11_Da;
  uVar10 = unaff_R14D ^ unaff_XMM11_Da;
  lVar8 = ((ulonglong)unaff_R14D * (ulonglong)unaff_XMM7_Da << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_181e0cde0;
  _DAT_1832f28a0 =
       ((((ulonglong)uVar10 * (ulonglong)_DAT_181e0cdd0 << 0x20) +
         (ulonglong)uVar10 * (ulonglong)_DAT_181e0cdc0 +
         ((ulonglong)uVar7 * (ulonglong)unaff_XMM15_Da << 0x20) +
         (ulonglong)uVar7 * (ulonglong)_DAT_181e0cda0 +
         ((ulonglong)uVar9 * (ulonglong)_DAT_181e0cd90 << 0x20 |
         (ulonglong)uVar9 * (ulonglong)_DAT_181e0cd80) +
         ((ulonglong)unaff_R14D * (ulonglong)_DAT_181e0cd70 << 0x20) +
         (ulonglong)unaff_R14D * (ulonglong)_DAT_181e0cd60 + lVar8) -
       (((ulonglong)uVar10 * (ulonglong)_DAT_181e0ce70 << 0x20) +
        (ulonglong)uVar10 * (ulonglong)_DAT_181e0ce60 +
        ((ulonglong)uVar7 * (ulonglong)_DAT_181e0ce50 << 0x20) +
        (ulonglong)uVar7 * (ulonglong)_DAT_181e0ce40 +
        ((ulonglong)uVar9 * (ulonglong)_DAT_181e0ce30 << 0x20 |
        (ulonglong)uVar9 * (ulonglong)_DAT_181e0ce20) +
        ((ulonglong)unaff_R14D * (ulonglong)_DAT_181e0ce10 << 0x20) +
        (ulonglong)unaff_R14D * (ulonglong)unaff_XMM8_Da + lVar8)) + 0xa376ef740eb19f05;
  _DAT_1832f2cc8 = _DAT_1832f2b58 ^ uVar5 ^ _DAT_1832f28a0;
  _DAT_1832f2a38 = (_DAT_1832f2a38 ^ uVar5) + _DAT_1832f28a0 ^ 0x79b34e2e71c53016;
  _DAT_1832f2b20 = (_DAT_1832f2b20 * -0x5a8f5d3a4f0a8b1b ^ _DAT_1832f2a38) + uVar5;
  _DAT_1832f2908 = _DAT_1832f2b20 ^ _DAT_1832f2a38;
  _DAT_1832f28a0 = _DAT_1832f28a0 & 0xffffffff;
  uVar5 = (~_DAT_1832f2608 + 0x5613e880) *
          ((_DAT_1832f2ba8 ^ 0x2acc4fb6) + (ulonglong)((uint)_DAT_1832f2ba8 & 0x2acc4fb6) * 2);
  uVar5 = (uVar5 | _DAT_1832f2b80) + (uVar5 & _DAT_1832f2b80);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832f2b60 = func_0x00018c230420((uVar5 | 0x7cdfa7c9) + (ulonglong)((uint)uVar5 & 0x7cdfa7c9))
  ;
  uVar5 = _DAT_1832f2b60 ^ 0xfeffecff;
  uVar6 = uVar5 - (uVar5 >> 1 & unaff_RBX);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar5;
  uVar5 = uVar5 << 0x3c | uVar5 >> 4 & 0xffffffffffffffe0;
  _DAT_1832f2a58 = (_DAT_1832f2a58 ^ uVar5) + 0xfeffecff ^ 0xf9a5e1417a07caaa;
  _DAT_1832f2b30 = (_DAT_1832f2b30 * -0x4bf0650dda47f7e1 ^ _DAT_1832f2a58) + uVar5;
  _DAT_1832f2c28 = _DAT_1832f2b30 ^ _DAT_1832f2a58;
  _DAT_1832f2ab0 = 0xfeffecff;
  uVar5 = (_DAT_1832f25e0 ^ _DAT_181e0ce80) + _DAT_1832f2b50 + 0x7a6f1606;
  uVar6 = (_DAT_1832f2b50 ^ _UNK_181e0ce88) + _DAT_1832f25e0 + 0xf83bf697;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f25e0 ^ _DAT_181e0ce80;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832f2b50 ^ _UNK_181e0ce88;
  _DAT_1832f2810 =
       func_0x00018c230420((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832f25e0 + 0xf83bf697) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2b50 + 0x7a6f1606));
  _DAT_1832f2b90 = (_DAT_1832f2b90 ^ _DAT_1832f2810 ^ 0xfe7ff7b7) + 0x676c3b4 ^ 0x938fd2f475a3a9c1;
  _DAT_1832f2cf0 =
       (_DAT_1832f2cf0 * -0x76633dab6b0c3cb5 ^ _DAT_1832f2b90) + (_DAT_1832f2810 ^ 0xfe7ff7b7);
  _DAT_1832f29c0 = _DAT_1832f2cf0 ^ _DAT_1832f2b90;
  _DAT_1832f2b70 = 0x676c3b4;
  uVar5 = (~_DAT_1832f2940 + 0x31e2dfe4) *
          ((_DAT_1832f2878 ^ unaff_RDI) + (ulonglong)((uint)_DAT_1832f2878 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1832f25a8) + (uVar5 & _DAT_1832f25a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832f2a30 = func_0x00018c230420((uVar5 | 0xb5c0fcc6) + (ulonglong)((uint)uVar5 & 0xb5c0fcc6))
  ;
  _DAT_1832f27d8 =
       (_DAT_1832f27d8 ^ _DAT_1832f2a30 & 0x7ffffffffffff) - 0x31e2dfe3 ^ 0xe120505fc4795d0c;
  _DAT_1832f2b48 =
       (_DAT_1832f2b48 * 0x7e4c157b83ddbfd3 ^ _DAT_1832f27d8) + (_DAT_1832f2a30 & 0x7ffffffffffff);
  _DAT_1832f28d0 = _DAT_1832f2b48 ^ _DAT_1832f27d8;
  _DAT_1832f2828 = 0xce1d201d;
  uVar5 = (_DAT_1832f2b08 ^ _DAT_181e0ce90) + _DAT_1832f29a8 + 0x8422dcda;
  uVar6 = (_DAT_1832f29a8 ^ _UNK_181e0ce98) + _DAT_1832f2b08 + 0x31e2dfe3;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2b08 ^ _DAT_181e0ce90;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832f29a8 ^ _UNK_181e0ce98;
  uVar5 = func_0x00018c230420((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832f2b08 + 0x31e2dfe3) ^
                              (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f29a8 + 0x8422dcda));
  uVar5 = uVar5 ^ 0x31e2ffff;
  _DAT_1832f2c18 = _DAT_1832f25f8 ^ uVar5 ^ 0x31e3dfe2;
  _DAT_1832f2710 = (_DAT_1832f2710 ^ uVar5) + 0x31e3dfe2 ^ 0x28a55e8e394e9eb3;
  _DAT_1832f2830 = (_DAT_1832f2830 * 0x5e3b2386010c5d51 ^ _DAT_1832f2710) + uVar5;
  _DAT_1832f2ca0 = _DAT_1832f2830 ^ _DAT_1832f2710;
  _DAT_1832f2b68 = 0x31e3dfe2;
  _DAT_1832f2880 = func_0x00018c230420(_DAT_1832f2630 + 0xffc3ff9ac6002bffU ^ 0x98);
  uVar5 = (_DAT_1832f2880 << 0x38 | _DAT_1832f2880 >> 8) ^ 0xce1d201d;
  _DAT_1832f2668 = _DAT_1832f2608 ^ uVar5 ^ 0x10000ffff;
  _DAT_1832f26a8 = (_DAT_1832f26a8 ^ uVar5) + 0x10000ffff ^ 0x16f15275a11e5ed2;
  _DAT_1832f2c38 = (_DAT_1832f2c38 * 0x375ff816a6bbb781 ^ _DAT_1832f26a8) + uVar5;
  _DAT_1832f2598 = _DAT_1832f2c38 ^ _DAT_1832f26a8;
  _DAT_1832f29b8 = 0xffff;
  _DAT_1832f2660 = func_0x00018c230420(_DAT_1832f2838 ^ 0x2100f223ffa910);
  _DAT_1832f27b0 = (_DAT_1832f27b0 ^ _DAT_1832f2660) - 0x72741c41 ^ 0xaca21232f50b6f46;
  _DAT_1832f2b70 = (_DAT_1832f2b70 * -0x44e88054fa365e4f ^ _DAT_1832f27b0) + _DAT_1832f2660;
  _DAT_1832f2608 = _DAT_1832f2b70 ^ _DAT_1832f27b0;
  _DAT_1832f2600 = 0x8d8be3bf;
  uVar5 = (~_DAT_1832f26f8 + 0x72741c42) *
          ((_DAT_1832f2598 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_1832f2598 & 0x8422dcda) * 2);
  uVar5 = (uVar5 | _DAT_1832f28b0) + (uVar5 & _DAT_1832f28b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832f27e0 = func_0x00018c230420((uVar5 | 0xf656c09b) + (ulonglong)((uint)uVar5 & 0xf656c09b))
  ;
  uVar5 = _DAT_1832f27e0 * -0xda2c9dc7f4773b;
  _DAT_1832f2bb0 = _DAT_1832f2cb8 ^ uVar5 ^ 0x72751c40;
  _DAT_1832f2528 = (_DAT_1832f2528 ^ uVar5) + 0x72751c40 ^ 0xae2db15192c946d0;
  _DAT_1832f2570 = (_DAT_1832f2570 * -0x529706ddda1a291f ^ _DAT_1832f2528) + uVar5;
  _DAT_1832f25e0 = _DAT_1832f2570 ^ _DAT_1832f2528;
  _DAT_1832f2908 = 0x72751c40;
  _DAT_1832f27a8 = func_0x00018c230420(_DAT_1832f2b60 ^ 0x3bffcb59ffbb79);
  uVar5 = _DAT_1832f27a8 ^ 0x3f490bf8d42cd3c0;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & unaff_RBX);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (ulonglong)
          (~((uint)uVar5 ^
            (0x40 - (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x10) & 0x72751c40) ^ 0x72751c40;
  _DAT_1832f2560 = _DAT_1832f25e8 ^ uVar5 ^ 0x10000ffff;
  _DAT_1832f29d0 = (_DAT_1832f29d0 ^ uVar5) + 0x10000ffff ^ 0xd7a3c671552b377c;
  _DAT_1832f2948 = (_DAT_1832f2948 * 0x34654ebcceeb50eb ^ _DAT_1832f29d0) + uVar5;
  _DAT_1832f2880 = _DAT_1832f2948 ^ _DAT_1832f29d0;
  _DAT_1832f26b0 = 0xffff;
  uVar5 = (_DAT_1832f25a8 ^ _DAT_181e0cea0) + _DAT_1832f2728 + 0x84222325;
  uVar6 = (_DAT_1832f2728 ^ _UNK_181e0cea8) + _DAT_1832f25a8 + 0xb849c2f9;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f25a8 ^ _DAT_181e0cea0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832f2728 ^ _UNK_181e0cea8;
  _DAT_1832f2bb0 =
       func_0x00018c230420((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832f25a8 + 0xb849c2f9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2728 + 0x84222325));
  _DAT_1832f2a20 = _DAT_1832f2a20 - 0xb849c2f9 ^ 0xabcc6fc9860e4343;
  _DAT_1832f2628 = _DAT_1832f29f0 * -0x6b5ab4f85ad85c61;
  _DAT_1832f29f0 = _DAT_1832f2628 ^ _DAT_1832f2a20;
  _DAT_1832f2a48 = 0x47b63d07;
  _DAT_1832f2670 = func_0x00018c230420(_DAT_1832f2ad8 + 0xa000bdf0026ffU ^ 0x37);
  uVar5 = _DAT_1832f2670 ^ 0xffff;
  _DAT_1832f2b30 = _DAT_1832f2608 ^ uVar5 ^ 0xb84ac2f8;
  _DAT_1832f2cf8 = (_DAT_1832f2cf8 ^ uVar5) + 0xb84ac2f8 ^ 0xd5d63edea7fae5e6;
  _DAT_1832f2cb8 = (_DAT_1832f2cb8 * 0x580d2dac3a3e3089 ^ _DAT_1832f2cf8) + uVar5;
  _DAT_1832f2c08 = _DAT_1832f2cb8 ^ _DAT_1832f2cf8;
  _DAT_1832f2960 = 0xb84ac2f8;
  _DAT_1832f2b50 = func_0x00018c230420(_DAT_1832f2a58 ^ 0xff5c0058aa00557a);
  uVar5 = _DAT_1832f2b50 & 0x7fffffffffffffff;
  _DAT_1832f2570 = _DAT_1832f27d0 ^ uVar5 ^ 0x10000ffff;
  _DAT_1832f25b0 = (_DAT_1832f25b0 ^ uVar5) + 0x10000ffff ^ 0xc253c53e9094a703;
  _DAT_1832f2cc0 = (_DAT_1832f2cc0 * 0x36719a5fa173af5f ^ _DAT_1832f25b0) + uVar5;
  _DAT_1832f2c78 = _DAT_1832f2cc0 ^ _DAT_1832f25b0;
  _DAT_1832f2998 = 0xffff;
  uVar5 = (~_DAT_1832f2b60 + 0x676c3b5) *
          ((_DAT_1832f29d8 ^ 0x7addcfda) + (ulonglong)((uint)_DAT_1832f29d8 & 0x7addcfda) * 2);
  uVar5 = (uVar5 | _DAT_1832f2808) + (uVar5 & _DAT_1832f2808);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832f2730 = func_0x00018c230420((uVar5 | 0x7cab0c6e) + (ulonglong)((uint)uVar5 & 0x7cab0c6e))
  ;
  uVar5 = _DAT_1832f2730 ^ 0x676c3b4;
  _DAT_1832f2c20 = _DAT_1832f25a8 ^ uVar5 ^ 0x10576b0b3;
  _DAT_1832f2b78 = (_DAT_1832f2b78 ^ uVar5) + 0x10576b0b3 ^ 0x6a691376e050a2ac;
  _DAT_1832f2bc8 = (_DAT_1832f2bc8 * -0x3bee5c4ea0fc6cff ^ _DAT_1832f2b78) + uVar5;
  _DAT_1832f2cc8 = _DAT_1832f2bc8 ^ _DAT_1832f2b78;
  _DAT_1832f2a30 = 0x576b0b3;
  uVar5 = (~_DAT_1832f2a38 + 0x676c3b5) *
          ((_DAT_1832f26f0 ^ 0x7addcfda) + (ulonglong)((uint)_DAT_1832f26f0 & 0x7addcfda) * 2);
  uVar5 = (uVar5 | _DAT_1832f26d8) + (uVar5 & _DAT_1832f26d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832f28f0 = func_0x00018c230420((uVar5 | 0x7cab0c6e) + (ulonglong)((uint)uVar5 & 0x7cab0c6e))
  ;
  _DAT_1832f2a78 =
       (_DAT_1832f2a78 ^ _DAT_1832f28f0 ^ 0x6704c757502e04c) + 0x676c0b4 ^ 0xb86f7aeaa347fead;
  _DAT_1832f2580 =
       (_DAT_1832f2580 * -0x4e31068a0b0ebcf ^ _DAT_1832f2a78) + (_DAT_1832f28f0 ^ 0x6704c757502e04c)
  ;
  _DAT_1832f2c40 = _DAT_1832f2580 ^ _DAT_1832f2a78;
  _DAT_1832f2940 = 0x676c0b4;
  _DAT_1832f2cc8 = func_0x00018c230420(_DAT_1832f2a48 + 0xffdcff841affe1ff ^ 2);
  _DAT_1832f2a48 = _DAT_1832f2cc8 ^ 0x576b0b3;
  _DAT_1832f25a8 = _DAT_1832f25a8 ^ _DAT_1832f2a48 ^ 0x67ec81923bda1600;
  _DAT_1832f2a08 = (_DAT_1832f2a08 * 0x15810ed8f4978b4b ^ _DAT_1832f25a8) + _DAT_1832f2a48;
  _DAT_1832f27d8 = _DAT_1832f2a08 ^ _DAT_1832f25a8;
  _DAT_1832f2c70 = 0;
  uVar5 = (_DAT_1832f2bb8 ^ 0x8422dcda) + _DAT_1832f2a18 + 0x8422dcda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f2bb8 ^ 0x8422dcda;
  uVar6 = ((_DAT_1832f2a18 + _DAT_1832f2bb8) * 0x2000 | _DAT_1832f2a18 + _DAT_1832f2bb8 >> 0x33) ^
          _DAT_1832f2a18;
  _DAT_1832f2738 =
       func_0x00018c230420((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1832f2bb8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f2a18 + 0x8422dcda));
  uVar5 = _DAT_1832f2738 & 0xffffffffffffffc0 ^ 0xffff;
  _DAT_1832f2a40 = _DAT_1832f2888 ^ uVar5 ^ 0xffff;
  _DAT_1832f2b10 = (_DAT_1832f2b10 ^ uVar5) + 0xffff ^ 0x45335f3d4f3969b5;
  _DAT_1832f2948 = (_DAT_1832f2948 * 0x7cc797f6261b23e5 ^ _DAT_1832f2b10) + uVar5;
  _DAT_1832f27f8 = _DAT_1832f2948 ^ _DAT_1832f2b10;
  _DAT_1832f2b78 = 0xffff;
  uVar5 = (~_DAT_1832f27e0 + 0x100000000) *
          ((_DAT_1832f2cc8 ^ 0x7addcfda) + (ulonglong)((uint)_DAT_1832f2cc8 & 0x7addcfda) * 2);
  uVar5 = (uVar5 | _DAT_1832f28d0) + (uVar5 & _DAT_1832f28d0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832f2928 = func_0x00018c230420((uVar5 | 0x85223025) + (ulonglong)((uint)uVar5 & 0x85223025))
  ;
  uVar5 = _DAT_1832f2928 << 0xb | _DAT_1832f2928 >> 0x35;
  _DAT_1832f2788 = (_DAT_1832f2788 ^ uVar5) + 0x1001300 ^ 0x3b258c828b8babb0;
  _DAT_1832f2988 = (_DAT_1832f2988 * 0x6015b24c0d6b9a11 ^ _DAT_1832f2788) + uVar5;
  _DAT_1832f2cd0 = _DAT_1832f2988 ^ _DAT_1832f2788;
  _DAT_1832f28f0 = 0x1001300;
  _DAT_1832f2c70 = func_0x00018c230420(_DAT_1832f2950 + 0xff43ff85c600b4ffU ^ 0x95);
  uVar5 = (ulonglong)(~(uint)_DAT_1832f2c70 & 0xfeffecff | 0x7f);
  _DAT_1832f2768 = _DAT_1832f2768 ^ uVar5 ^ 0x81d414fc510fbba1;
  _DAT_1832f2618 = (_DAT_1832f2618 * 0x2aa662daaa88101f ^ _DAT_1832f2768) + uVar5;
  _DAT_1832f2b28 = _DAT_1832f2618 ^ _DAT_1832f2768;
  _DAT_1832f25c0 = 0;
  uVar5 = (_DAT_1832f28b0 ^ _DAT_181e0ceb0) + _DAT_1832f27a8 + 0x2acc4fb6;
  uVar6 = (_DAT_1832f27a8 ^ _UNK_181e0ceb8) + _DAT_1832f28b0 + 0xaeee6c93;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832f28b0 ^ _DAT_181e0ceb0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832f27a8 ^ _UNK_181e0ceb8;
  _DAT_1832f2548 =
       func_0x00018c230420((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832f28b0 + 0xaeee6c93) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832f27a8 + 0x2acc4fb6));
  uVar5 = _DAT_1832f2548 ^ 0xaeee6c93;
  uVar6 = uVar5 - (uVar5 >> 1 & unaff_RBX);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uVar5;
  _DAT_1832f27c8 = _DAT_1832f27c8 ^ uVar5 ^ 0x4289fdb0f786c3b2;
  _DAT_1832f2bf0 = (_DAT_1832f2bf0 * 0x5b43ee6b6195d4b9 ^ _DAT_1832f27c8) + uVar5;
  _DAT_1832f27c0 = _DAT_1832f2bf0 ^ _DAT_1832f27c8;
  _DAT_1832f2538 = 0;
  uVar2 = (ulonglong)*(uint *)(unaff_RBP + 0x60);
  auVar3._8_8_ = _UNK_1801098d8;
  auVar3._0_8_ = uVar2 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_181e0cec0,unaff_XMM14);
  uVar6 = auVar4._8_8_ + auVar4._0_8_;
  uVar5 = uVar6 + _DAT_1832f28f8;
  if (auVar4._4_4_ < 0) {
    uVar5 = _DAT_1832f2be0 ^ uVar6;
  }
  _DAT_1832f2c98 = func_0x00018c230420(SUB161(auVar3 ^ _DAT_181e0cec0,5) ^ uVar5);
  uVar5 = (uVar2 * 0xffff ^ _DAT_1832f2c98) & 0x7fffffffffffffff;
  _DAT_1832f2998 = uVar2 & 0xffff;
  _DAT_1832f2b38 = (_DAT_1832f2b38 ^ uVar5) + _DAT_1832f2998 ^ 0x15eb1d17d1088059;
  _DAT_1832f2aa0 = (_DAT_1832f2aa0 * 0x7ab5aeb298d7e1b3 ^ _DAT_1832f2b38) + uVar5;
  _DAT_1832f29f0 = _DAT_1832f2aa0 ^ _DAT_1832f2b38;
  *(int *)(unaff_RBP + 0x80) = (int)_DAT_1832f2998;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 0x98)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc21b8b0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c21b8b0(void)

{
  longlong unaff_RBP;
  int unaff_EDI;
  
  *(int *)(unaff_RBP + 0x70) = unaff_EDI + 1;
  *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x10);
  switch(unaff_EDI + 1 < *(int *)(unaff_RBP + 0x10)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc21b9ae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c21b9ae(void)

{
  longlong unaff_RBP;
  
  switch(*(longlong *)(unaff_RBP + 0x78) == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc21bc30 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c21bc30(void)

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


// ----- block @ rva 0xc21bd0d -----

void FUN_18c21bd0d(void)

{
  return;
}


// ----- block @ rva 0xc21be62 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c21be62(longlong param_1)

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


// ----- block @ rva 0xc232b5f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c232b5f(void)

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


// ----- block @ rva 0xc232d1f -----

void FUN_18c232d1f(void)

{
  return;
}


// ----- block @ rva 0xc232f23 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c232f23(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0xc233752 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c233752(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
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


// ----- block @ rva 0xc235136 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c235136(void)

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


// ----- block @ rva 0xc23525b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23525b(void)

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


// ----- block @ rva 0xc235d92 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c235d92(void)

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


// ----- block @ rva 0xc235de1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c235de1(void)

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


// ----- block @ rva 0xc23673b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c23673b(void)

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


// ----- block @ rva 0xc236bf7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c236bf7(void)

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


// ----- block @ rva 0xc236c38 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c236c38(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc236c68 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c236c68(void)

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


// ----- block @ rva 0xc236cb7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c236cb7(void)

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


// ----- block @ rva 0xc236eb5 -----

void FUN_18c236eb5(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0xc23706a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23706a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_181e13658)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0xc237076 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c237076(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc237093 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c237093(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_181e13668)();
  return;
}


// ----- block @ rva 0xc23709c -----

void FUN_18c23709c(void)

{
  return;
}


// ----- block @ rva 0xc23709d -----

undefined4 * FUN_18c23709d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0xc2370ff -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2370ff(void)

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


// ----- block @ rva 0xc237153 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c237153(void)

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


// ----- block @ rva 0xc237462 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c237462(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181e13978)();
  return;
}


// ----- block @ rva 0xc237549 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c237549(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181e13978)();
  return;
}


// ----- block @ rva 0xc2375f6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2375f6(void)

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


// ----- block @ rva 0xc23785e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c23785e(void)

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


// ----- block @ rva 0xc237a39 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c237a39(void)

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


// ----- block @ rva 0xc237a5a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c237a5a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_181e13878)();
  return;
}


// ----- block @ rva 0xc237b77 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c237b77(void)

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


// ----- block @ rva 0xc237c78 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c237c78(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181e13aa8)();
  return;
}


// ----- block @ rva 0xc237eb8 -----

void FUN_18c237eb8(void)

{
  return;
}


// ----- block @ rva 0xc238030 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c238030(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181e14758)();
  return;
}


// ----- block @ rva 0xc2381b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2381b9(void)

{
  FUN_190dd72e0();
  (*_DAT_181e14918)();
  return;
}


// ----- block @ rva 0xc238202 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c238202(void)

{
  FUN_190de3220();
  (*_DAT_181e148b8)();
  return;
}


// ----- block @ rva 0xc23877c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23877c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e14258)();
  return;
}


// ----- block @ rva 0xc2387e2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2387e2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e144c8)();
  return;
}


// ----- block @ rva 0xc2395e8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2395e8(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0xc2396de -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2396de(void)

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


// ----- block @ rva 0xc239a94 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c239a94(void)

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


// ----- block @ rva 0xc239c6e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c239c6e(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int in_stack_00000078;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000078 < 0 || iVar1 <= in_stack_00000078) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc239d99 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c239d99(void)

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


// ----- block @ rva 0xc23a8b2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23a8b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e13e68)();
  return;
}


// ----- block @ rva 0xc23a90d -----

void FUN_18c23a90d(void)

{
  return;
}


// ----- block @ rva 0xc23a921 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23a921(void)

{
  (*_DAT_181e14858)();
  return;
}


// ----- block @ rva 0xc23a92c -----

void FUN_18c23a92c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc23cb91 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23cb91(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xc23cd2d -----

void FUN_18c23cd2d(void)

{
  return;
}


// ----- block @ rva 0xc23d182 -----

undefined8 thunk_FUN_18c23cd16(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xc23d982 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23d982(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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


// ----- block @ rva 0xc23d9d7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c23d9d7(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack000000000000008c;
  
  uStack000000000000008c = in_stack_00000058;
  (**(code **)(in_stack_00000030 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc23e133 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c23e133(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc23f274 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c23f274(void)

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


// ----- block @ rva 0xc23f8da -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23f8da(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  uStack0000000000000048 = in_stack_00000098;
  uStack0000000000000050 = in_stack_000000a0;
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x878,0x27);
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


// ----- block @ rva 0xc23fc52 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c23fc52(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc24051b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18c241888(void)

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


// ----- block @ rva 0xc24067a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c24067a(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (*in_RAX)(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc245cce -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c245cce(void)

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


// ----- block @ rva 0xc245d22 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c245d22(void)

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


// ----- block @ rva 0xc245f43 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c245f43(void)

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


// ----- block @ rva 0xc245f97 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c245f97(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184194800();
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


// ----- block @ rva 0xc2462ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2462ec(void)

{
  FUN_190de3220();
  (*_DAT_181e16e98)();
  return;
}


// ----- block @ rva 0xc246407 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c246407(void)

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


// ----- block @ rva 0xc2465ca -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2465ca(void)

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


// ----- block @ rva 0xc246772 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c246772(void)

{
  FUN_190dd72e0();
  (*_DAT_181e16cd8)();
  return;
}


// ----- block @ rva 0xc2467bb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2467bb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181e16fa8)();
  return;
}


// ----- block @ rva 0xc2467d8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2467d8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181e16c18)();
  return;
}


// ----- block @ rva 0xc2468b6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2468b6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_181e16b28)();
  return;
}


// ----- block @ rva 0xc246b61 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c246b61(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181e16e68)();
  return;
}


// ----- block @ rva 0xc246b95 -----

void FUN_18c246b95(void)

{
  return;
}


// ----- block @ rva 0xc246d1c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c246d1c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181e17768)();
  return;
}


// ----- block @ rva 0xc247985 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c247985(void)

{
  (*_DAT_181e17f28)();
  return;
}


// ----- block @ rva 0xc247c03 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c247c03(void)

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


// ----- block @ rva 0xc248103 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c248103(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000b4;
  undefined2 uStack00000000000000b8;
  undefined4 uStack00000000000000ec;
  
  uStack00000000000000ec = 0x1cfe5ce2;
  uVar1 = rdtsc();
  uStack00000000000000b4 = 0x3a0020;
  uStack00000000000000b8 = 0x20;
  (*_DAT_181e174c8)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}


// ----- block @ rva 0xc248cb6 -----

void FUN_18c248cb6(void)

{
  return;
}


// ----- block @ rva 0xc248d30 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c248d30(void)

{
  FUN_190dd72e0();
  (*_DAT_181e177d8)();
  return;
}


// ----- block @ rva 0xc248e66 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c248e66(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_181e17928)();
  return;
}


// ----- block @ rva 0xc248fec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c248fec(void)

{
  (*_DAT_181e17db8)();
  return;
}


// ----- block @ rva 0xc249307 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c249307(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
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


// ----- block @ rva 0xc24954b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c24954b(void)

{
  (*_DAT_181e17d48)();
  return;
}


// ----- block @ rva 0xc249754 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c249754(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181e17228)();
  return;
}


// ----- block @ rva 0xc24985a -----

void FUN_18c24985a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc249a75 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c249a75(void)

{
  FUN_190ddce00();
  (*_DAT_181e20c48)();
  return;
}


// ----- block @ rva 0xc24cfa0 -----

void FUN_18c24cfa0(void)

{
  return;
}


// ----- block @ rva 0xc2529dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2529dd(void)

{
  FUN_190dd72e0();
  (*_DAT_181e191b8)();
  return;
}


// ----- block @ rva 0xc253d6e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c253d6e(void)

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


// ----- block @ rva 0xc254c84 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c254c84(void)

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


// ----- block @ rva 0xc2591d4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2591d4(void)

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


// ----- block @ rva 0xc25c842 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c25c842(void)

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


// ----- block @ rva 0xc25eb23 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c25eb4c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c25eb23(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xc260625 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c260625(void)

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


// ----- block @ rva 0xc267ed3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c267ed3(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->Throw /*0x68*/))();
  (*_DAT_181e1ffd8)();
  return;
}


// ----- block @ rva 0xc267ee4 -----

void FUN_18c267ee4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc2681bb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c268211 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c2681bb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xc268884 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c2688a2 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c268884(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xc268954 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c26898b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c268954(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticLongField /*0x4b8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xc26b969 -----

void thunk_FUN_18c268343(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xc26bc1f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c26bc3a */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c26bc1f(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xc26dbab -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018c26dc3a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18c26dbab(void)

{
  longlong *unaff_RSI;
  undefined8 uStack0000000000000188;
  undefined4 uStack0000000000000190;
  
  uStack0000000000000188 = 0x39003500380038;
  rdtsc();
  uStack0000000000000190 = 0x31002d;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
  FUN_190ddfc90();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xc275285 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c275285(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined1 in_stack_00000070;
  undefined1 uStack00000000000000af;
  
  uStack00000000000000af = in_stack_00000070;
  (**(code **)(unaff_RSI + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 6) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc2837b7 -----

void thunk_FUN_18c26a07d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xc283a14 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c283a14(void)

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


// ----- block @ rva 0xc284484 -----

void FUN_18c284484(void)

{
  return;
}


// ----- block @ rva 0xc2847bd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2847bd(void)

{
  FUN_190ddce00();
  (*_DAT_181e26308)();
  return;
}


// ----- block @ rva 0xc287c23 -----

void FUN_18c287c23(void)

{
  return;
}


// ----- block @ rva 0xc287d86 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c287d86(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_181e28228)();
  return;
}


// ----- block @ rva 0xc28a367 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c28a367(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181e274f8)();
  return;
}


// ----- block @ rva 0xc28a8cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c28a8cc(void)

{
  FUN_190dd72e0();
  (*_DAT_181e2ac58)();
  return;
}


// ----- block @ rva 0xc28bbd3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c28bbd3(void)

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


// ----- block @ rva 0xc291840 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c291840(void)

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


// ----- block @ rva 0xc292af0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c292af0(void)

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


// ----- block @ rva 0xc2942f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2942f0(void)

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


// ----- block @ rva 0xc29456a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29456a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_181e2ad88)();
  return;
}


// ----- block @ rva 0xc294579 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c294579(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallBooleanMethodA /*0x138*/))();
  (*_DAT_181e27908)();
  return;
}


// ----- block @ rva 0xc29475e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29475e(void)

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


// ----- block @ rva 0xc2947d1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2947d1(void)

{
  FUN_190dd72e0();
  (*_DAT_181e2bcc8)();
  return;
}


// ----- block @ rva 0xc294a70 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c294a70(void)

{
  FUN_190dd72e0();
  (*_DAT_181e2bcf8)();
  return;
}


// ----- block @ rva 0xc294c6c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c294c6c(void)

{
  FUN_190dd9df0();
  (*_DAT_181e2b9c8)();
  return;
}


// ----- block @ rva 0xc294cc3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c294cc3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181e2bc88)();
  return;
}


// ----- block @ rva 0xc294d15 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c294d15(void)

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


// ----- block @ rva 0xc294d67 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c294d67(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1841196f0();
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


// ----- block @ rva 0xc294e76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c294e76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181e2bc38)();
  return;
}


// ----- block @ rva 0xc294f49 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c294f49(void)

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


// ----- block @ rva 0xc294fd2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c294fd2(void)

{
  FUN_190dd9df0();
  (*_DAT_181e2bab8)();
  return;
}


// ----- block @ rva 0xc2950ed -----

void FUN_18c2950ed(void)

{
  return;
}


// ----- block @ rva 0xc295277 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c295277(void)

{
  FUN_190ddce00();
  (*_DAT_181e2be58)();
  return;
}


// ----- block @ rva 0xc29534c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29534c(void)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong unaff_R12;
  ulonglong uVar9;
  uint uVar10;
  uint uVar19;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulonglong uVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  undefined1 auVar40 [16];
  uint uVar41;
  uint uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ulonglong uVar48;
  undefined1 auVar49 [16];
  ulonglong in_stack_00000030;
  undefined4 uStack0000000000000060;
  uint uStack0000000000000064;
  ulonglong uStack0000000000000088;
  ulonglong uStack0000000000000090;
  
  uVar8 = _DAT_181e2bd38;
  uVar3 = _DAT_181e2bd30;
  auVar12 = _DAT_1800170c0;
  uStack0000000000000090 = in_stack_00000030;
  uStack0000000000000088 = _DAT_181e2bd30 ^ 0x84222325;
  auVar13._8_8_ = _UNK_181e2c198;
  auVar13._0_8_ = uStack0000000000000088;
  auVar11 = pshufb(auVar13 ^ _DAT_181e2c1a0,_DAT_1800170c0);
  uVar6 = auVar11._8_8_ + auVar11._0_8_;
  uVar4 = uVar6 + _DAT_1832f5200;
  if (auVar11._4_4_ < 0) {
    uVar4 = _DAT_1832f5410 ^ uVar6;
  }
  _DAT_1832f5350 = func_0x00018c2990e0(SUB161(auVar13 ^ _DAT_181e2c1a0,5) ^ uVar4);
  uVar5 = uVar3 | 0x29dc7668af08d4f;
  _DAT_1832f53f0 = (_DAT_1832f53f0 ^ _DAT_1832f5140) + uVar5 ^ 0x71573d79d26cb4a8;
  _DAT_1832f52d0 = (_DAT_1832f52d0 * -0x5a8c7d8fb158ac07 ^ _DAT_1832f53f0) + _DAT_1832f5140;
  _DAT_1832f5408 = _DAT_1832f52d0 ^ _DAT_1832f53f0;
  auVar11._8_8_ = _UNK_181e2c1b8;
  auVar11._0_8_ = uVar8 ^ 0x84222325;
  auVar12 = pshufb(auVar11 ^ _DAT_181e2c1c0,auVar12);
  uVar6 = auVar12._8_8_ + auVar12._0_8_;
  auVar47._8_4_ = 0xffffffff;
  auVar47._0_8_ = 0xffffffffffffffff;
  auVar47._12_4_ = 0xffffffff;
  uVar4 = uVar6 + _DAT_1832f54e0;
  if (auVar12._4_4_ < 0) {
    uVar4 = _DAT_1832f52b8 ^ uVar6;
  }
  _DAT_1832f5120 = uVar5;
  _DAT_1832f52e8 = func_0x00018c2990e0(SUB161(auVar11 ^ _DAT_181e2c1c0,5) ^ uVar4);
  uVar4 = (uVar8 | 0xcd84a2b8c1c16e56) ^ _DAT_1832f52e8;
  uVar9 = uVar8 ^ 0xcd84a2b8c1c16e56;
  _DAT_1832f5178 = (_DAT_1832f5178 ^ uVar4) + uVar9 ^ 0x9be8743e6a2fcfbd;
  _DAT_1832f51d0 = (_DAT_1832f51d0 * 0x58592f523916095 ^ _DAT_1832f5178) + uVar4;
  _DAT_1832f52a8 = _DAT_1832f51d0 ^ _DAT_1832f5178;
  lVar2 = uVar3 * uVar3;
  uVar4 = lVar2 * 0x29050de54f52ec92;
  uVar6 = lVar2 * -0x29050de54f52ec92;
  uVar3 = ((_DAT_1832f53b0 ^ unaff_R12) + (unaff_R12 & _DAT_1832f53b0) * 2) *
          (uVar4 - _DAT_1832f5200);
  uVar3 = (uVar3 | _DAT_1832f5340) + (uVar3 & _DAT_1832f5340);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832f5300 = uVar9;
  _DAT_1832f5450 = func_0x00018c2990e0((unaff_R12 ^ uVar4 | uVar3) + (uVar3 & (unaff_R12 ^ uVar4)));
  uVar19 = (uint)(uVar4 >> 0x20);
  auVar20._8_4_ = (int)uVar4;
  auVar20._0_8_ = uVar4;
  auVar20._12_4_ = uVar19;
  uVar39 = SUB164(auVar20 & _DAT_181e2c1d0,0);
  uVar3 = SUB168(auVar20 & _DAT_181e2c1d0,0);
  uVar10 = SUB164(auVar20 ^ _DAT_181e2c1d0,0);
  uVar30 = SUB168(auVar20 ^ _DAT_181e2c1d0,0);
  uVar31 = SUB164(auVar20 ^ auVar47,0);
  uVar24 = SUB164(_DAT_181e2c1d0 | auVar20,0);
  uVar48 = (((ulonglong)uVar31 * (ulonglong)_DAT_181e2c240 +
             ((ulonglong)_DAT_181e2c250 * (ulonglong)uVar31 +
              (SUB168(auVar20 ^ auVar47,0) >> 0x20) * (ulonglong)_DAT_181e2c240 << 0x20) +
             (ulonglong)_DAT_181e2c220 * (ulonglong)uVar10 +
             ((ulonglong)_DAT_181e2c230 * (ulonglong)uVar10 +
              (uVar30 >> 0x20) * (ulonglong)_DAT_181e2c220 << 0x20) +
            (ulonglong)_DAT_181e2c200 * (ulonglong)uVar39 +
            ((ulonglong)_DAT_181e2c210 * (ulonglong)uVar39 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_181e2c200 << 0x20) +
            (ulonglong)_DAT_181e2c1e0 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_181e2c1f0 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar19 * (ulonglong)_DAT_181e2c1e0 << 0x20)) -
           ((ulonglong)uVar10 * (ulonglong)_DAT_181e2c2e0 +
            ((ulonglong)_DAT_181e2c2f0 * (ulonglong)uVar10 +
             (uVar30 >> 0x20) * (ulonglong)_DAT_181e2c2e0 << 0x20) +
            (ulonglong)uVar24 * (ulonglong)_DAT_181e2c2c0 +
            ((ulonglong)_DAT_181e2c2d0 * (ulonglong)uVar24 +
             (SUB168(_DAT_181e2c1d0 | auVar20,0) >> 0x20) * (ulonglong)_DAT_181e2c2c0 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_181e2c2a0 +
           ((ulonglong)_DAT_181e2c2b0 * (ulonglong)uVar39 +
            (uVar3 >> 0x20) * (ulonglong)_DAT_181e2c2a0 << 0x20) +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_181e2c280 +
           ((ulonglong)_DAT_181e2c290 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_181e2c280 << 0x20))) + _DAT_181e2c300;
  _DAT_1832f5410 =
       (_DAT_1832f5410 ^ _DAT_1832f5450 & 0xffffffffffffffc0) + uVar48 ^ 0xd26b2b846f1772c2;
  _DAT_1832f5318 =
       (_DAT_1832f5318 * 0x7147b90eca968c43 ^ _DAT_1832f5410) +
       (_DAT_1832f5450 & 0xffffffffffffffc0);
  _DAT_1832f51a0 = _DAT_1832f5318 ^ _DAT_1832f5410;
  uVar3 = uVar48 ^ 0x84222325 ^ _DAT_1832f5478;
  lVar7 = (uVar48 ^ 0x84222325) + _DAT_1832f53f8;
  lVar2 = _DAT_1832f5478 + lVar2 * -0x29050de54f52ec92;
  uVar4 = uVar3 + lVar7;
  uVar30 = (uVar6 ^ _DAT_1832f53f8) + lVar2;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar30 * 0x2000 | uVar30 >> 0x33) ^ uVar6 ^ _DAT_1832f53f8;
  _DAT_1832f52b8 = uVar48;
  _DAT_1832f5130 =
       func_0x00018c2990e0((uVar4 << 0x1d | uVar4 >> 0x23) - lVar2 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar7);
  uVar41 = (uint)(uVar48 >> 0x20);
  auVar32._8_4_ = (int)uVar48;
  auVar32._0_8_ = uVar48;
  auVar32._12_4_ = uVar41;
  uVar10 = (uint)(uVar6 >> 0x20);
  auVar25._8_4_ = (int)uVar6;
  auVar25._0_8_ = uVar6;
  auVar25._12_4_ = uVar10;
  uVar19 = SUB164(auVar32 & auVar25,0);
  uVar3 = _DAT_1832f5130 & 0xfffffffffffffff0;
  uVar24 = SUB164(auVar32 | auVar25,0);
  uVar31 = SUB164(auVar32 ^ auVar25,0);
  uVar39 = SUB164(auVar25 ^ _DAT_18001a710,0);
  uVar48 = (((ulonglong)uVar31 * (ulonglong)_DAT_181e2c370 +
             ((ulonglong)_DAT_181e2c380 * (ulonglong)uVar31 +
              (SUB168(auVar32 ^ auVar25,0) >> 0x20) * (ulonglong)_DAT_181e2c370 << 0x20) +
             (ulonglong)uVar24 * (ulonglong)_DAT_181e2c350 +
             ((ulonglong)_DAT_181e2c360 * (ulonglong)uVar24 +
              (SUB168(auVar32 | auVar25,0) >> 0x20) * (ulonglong)_DAT_181e2c350 << 0x20) +
            (ulonglong)uVar19 * (ulonglong)_DAT_181e2c330 +
            ((ulonglong)_DAT_181e2c340 * (ulonglong)uVar19 +
             (SUB168(auVar32 & auVar25,0) >> 0x20) * (ulonglong)_DAT_181e2c330 << 0x20) +
            (ulonglong)_DAT_181e2c320 * (uVar6 & 0xffffffff) +
            ((ulonglong)uVar10 * (ulonglong)_DAT_181e2c320 +
             (ulonglong)_DAT_181e2c310 * (uVar6 & 0xffffffff) << 0x20) +
            (uVar48 & 0xffffffff) * (ulonglong)_DAT_181e2c320 +
            ((ulonglong)uVar41 * (ulonglong)_DAT_181e2c320 +
             (uVar48 & 0xffffffff) * (ulonglong)_DAT_181e2c310 << 0x20)) -
           ((ulonglong)uVar39 * (_DAT_181e2c3c0 & 0xffffffff) +
            ((SUB168(auVar25 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_181e2c3c0 & 0xffffffff) +
             (ulonglong)_DAT_181e2c3b0 * (ulonglong)uVar39 << 0x20) +
           (uVar6 & 0xffffffff) * (_DAT_181e2c3c0 & 0xffffffff) +
           ((ulonglong)uVar10 * (_DAT_181e2c3c0 & 0xffffffff) +
            (uVar6 & 0xffffffff) * (ulonglong)_DAT_181e2c3b0 << 0x20))) - _DAT_181e2c3c0;
  _DAT_1832f5408 = _DAT_1832f5410 ^ uVar3 ^ uVar48;
  _DAT_1832f51f8 = (_DAT_1832f51f8 ^ uVar3) + uVar48 ^ 0xcc808f52b6a07a4b;
  _DAT_1832f5218 = (_DAT_1832f5218 * 0x798e16d8aec3d59f ^ _DAT_1832f51f8) + uVar3;
  _DAT_1832f52a0 = _DAT_1832f5218 ^ _DAT_1832f51f8;
  lVar2 = uVar8 * uVar8;
  uVar4 = lVar2 * 0x1b121f13bfc51842;
  uVar3 = (_DAT_1832f5320 ^ 0x84222325) + _DAT_1832f53c8 + 0x84222325;
  uVar6 = (uVar4 ^ _DAT_1832f53c8) + _DAT_1832f5320 + uVar4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832f5320 ^ 0x84222325;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar4 ^ _DAT_1832f53c8;
  _DAT_1832f5170 = uVar48;
  _DAT_1832f5408 =
       func_0x00018c2990e0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832f5320 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832f53c8 + 0x84222325));
  uVar30 = lVar2 * -0x1b121f13bfc51842;
  _DAT_1832f5138 =
       (_DAT_1832f5138 ^ _DAT_1832f5408 & 0xffffffffff) + lVar2 * -0x1b121f13bfc51842 ^
       0xecb8825f5ce05068;
  _DAT_1832f53e8 =
       (_DAT_1832f53e8 * 0x3089f0e5e28c1e1d ^ _DAT_1832f5138) + (_DAT_1832f5408 & 0xffffffffff);
  _DAT_1832f5468 = _DAT_1832f53e8 ^ _DAT_1832f5138;
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = uVar48 ^ 0x84222325;
  auVar13 = pshufb(auVar12 ^ _DAT_181e2c3d0,_DAT_1800170c0);
  uVar6 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar6 + _DAT_1832f52f8;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_1832f5268 ^ uVar6;
  }
  _DAT_1832f5398 = uVar30;
  _DAT_1832f5298 = func_0x00018c2990e0(SUB161(auVar12 ^ _DAT_181e2c3d0,5) ^ uVar3);
  uVar3 = (uVar4 | uVar48) ^ _DAT_1832f5298 ^ uVar48;
  uVar41 = (uint)(uVar48 >> 0x20);
  auVar37._8_4_ = (int)uVar48;
  auVar37._0_8_ = uVar48;
  auVar37._12_4_ = uVar41;
  uVar39 = (uint)(uVar4 >> 0x20);
  auVar33._8_4_ = (int)uVar4;
  auVar33._0_8_ = uVar4;
  auVar33._12_4_ = uVar39;
  auVar14._8_4_ = 0xffffffff;
  auVar14._0_8_ = 0xffffffffffffffff;
  auVar14._12_4_ = 0xffffffff;
  uVar24 = SUB164(auVar37 & auVar33,0);
  uVar10 = SUB164(auVar37 ^ auVar33,0);
  uVar31 = SUB164(auVar37 ^ auVar14,0);
  uVar6 = SUB168(auVar37 ^ auVar14,0);
  uVar19 = SUB164(auVar33 ^ _DAT_18001a710,0);
  uVar48 = (((ulonglong)_DAT_181e2c420 * (ulonglong)uVar31 +
             ((ulonglong)_DAT_181e2c470 * (ulonglong)uVar31 +
              (uVar6 >> 0x20) * (ulonglong)_DAT_181e2c420 << 0x20) +
             (ulonglong)uVar10 * (ulonglong)_DAT_181e2c450 +
             ((ulonglong)_DAT_181e2c460 * (ulonglong)uVar10 +
              (SUB168(auVar37 ^ auVar33,0) >> 0x20) * (ulonglong)_DAT_181e2c450 << 0x20) +
            (ulonglong)uVar24 * (ulonglong)_DAT_181e2c430 +
            ((ulonglong)_DAT_181e2c440 * (ulonglong)uVar24 +
             (SUB168(auVar37 & auVar33,0) >> 0x20) * (ulonglong)_DAT_181e2c430 << 0x20) +
            (ulonglong)_DAT_181e2c400 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_181e2c410 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar39 * (ulonglong)_DAT_181e2c400 << 0x20) +
            (ulonglong)_DAT_181e2c3e0 * (uVar48 & 0xffffffff) +
            ((ulonglong)_DAT_181e2c3f0 * (uVar48 & 0xffffffff) +
             (ulonglong)uVar41 * (ulonglong)_DAT_181e2c3e0 << 0x20)) -
           ((ulonglong)uVar19 * (ulonglong)_DAT_181e2c4d0 +
            ((SUB168(auVar33 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_181e2c4d0 +
             (ulonglong)_DAT_181e2c4c0 * (ulonglong)uVar19 << 0x20) +
            (uVar4 & 0xffffffff) * (ulonglong)_DAT_181e2c4d0 +
            ((ulonglong)uVar39 * (ulonglong)_DAT_181e2c4d0 +
             (uVar4 & 0xffffffff) * (ulonglong)_DAT_181e2c4c0 << 0x20) +
            (uVar48 & 0xffffffff) * (ulonglong)_DAT_181e2c4b0 +
            ((ulonglong)uVar41 * (ulonglong)_DAT_181e2c4b0 +
             (uVar48 & 0xffffffff) * (ulonglong)_DAT_181e2c4a0 << 0x20) +
           (ulonglong)uVar31 * (ulonglong)_DAT_181e2c4b0 +
           ((uVar6 >> 0x20) * (ulonglong)_DAT_181e2c4b0 +
            (ulonglong)_DAT_181e2c4a0 * (ulonglong)uVar31 << 0x20))) + _DAT_181e2c4e0;
  _DAT_1832f5228 = _DAT_1832f5248 ^ uVar3 ^ uVar48;
  _DAT_1832f5258 = (_DAT_1832f5258 ^ uVar3) + uVar48 ^ 0x2b01e11a1d5ae85d;
  _DAT_1832f5350 = (_DAT_1832f5350 * 0x3dfe635c26da48d3 ^ _DAT_1832f5258) + uVar3;
  _DAT_1832f5380 = _DAT_1832f5350 ^ _DAT_1832f5258;
  uVar4 = uVar48 ^ 0x84222325;
  uVar3 = ((_DAT_1832f5308 ^ uVar4) + (uVar4 & _DAT_1832f5308) * 2) * (uVar30 - _DAT_1832f51a8);
  uVar3 = (uVar3 | _DAT_1832f5448) + (uVar3 & _DAT_1832f5448);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832f52e0 = uVar48;
  _DAT_1832f5120 = func_0x00018c2990e0((uVar4 ^ uVar30 | uVar3) + (uVar3 & (uVar4 ^ uVar30)));
  auVar12 = _DAT_1800170c0;
  uVar3 = ~(_DAT_1832f5120 << 0x30 | _DAT_1832f5120 >> 0x10) & uVar48;
  uVar42 = (uint)(uVar48 >> 0x20);
  auVar15._8_4_ = (int)uVar48;
  auVar15._0_8_ = uVar48;
  auVar15._12_4_ = uVar42;
  uVar24 = (uint)(uVar30 >> 0x20);
  auVar26._8_4_ = (int)uVar30;
  auVar26._0_8_ = uVar30;
  auVar26._12_4_ = uVar24;
  uVar31 = SUB164(auVar15 & auVar26,0);
  uVar45 = SUB168(auVar15 & auVar26,0);
  uVar19 = SUB164(auVar15 ^ auVar26,0);
  uVar6 = SUB168(auVar15 ^ auVar26,0);
  uVar39 = SUB164(auVar26 ^ _DAT_18001a710,0);
  uVar41 = SUB164(auVar15 | auVar26,0);
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar15 ^ auVar49,0);
  lVar2 = uVar8 * _DAT_181e2bd30;
  uVar4 = lVar2 * 0x6b926c0c7ce70677;
  auVar21._8_8_ = uVar4;
  auVar21._0_8_ = _DAT_18001b640;
  auVar13 = pshufb(auVar21 ^ _DAT_181e2c680,_DAT_1800170c0);
  uVar3 = uVar3 << 0x17 | uVar3 >> 0x29;
  uVar6 = (((ulonglong)uVar39 * (ulonglong)_DAT_181e2c530 +
            ((ulonglong)_DAT_181e2c580 * (ulonglong)uVar39 +
             (SUB168(auVar26 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_181e2c530 << 0x20) +
            (ulonglong)_DAT_181e2c560 * (ulonglong)uVar19 +
            ((ulonglong)_DAT_181e2c570 * (ulonglong)uVar19 +
             (uVar6 >> 0x20) * (ulonglong)_DAT_181e2c560 << 0x20) +
           (ulonglong)_DAT_181e2c540 * (ulonglong)uVar31 +
           ((ulonglong)_DAT_181e2c550 * (ulonglong)uVar31 +
            (uVar45 >> 0x20) * (ulonglong)_DAT_181e2c540 << 0x20) +
           (ulonglong)_DAT_181e2c510 * (uVar30 & 0xffffffff) +
           ((ulonglong)_DAT_181e2c520 * (uVar30 & 0xffffffff) +
            (ulonglong)uVar24 * (ulonglong)_DAT_181e2c510 << 0x20) +
           (ulonglong)_DAT_181e2c4f0 * (uVar48 & 0xffffffff) +
           ((ulonglong)_DAT_181e2c500 * (uVar48 & 0xffffffff) +
            (ulonglong)uVar42 * (ulonglong)_DAT_181e2c4f0 << 0x20)) -
          ((ulonglong)uVar10 * (_DAT_181e2c5f0 & 0xffffffff) +
           ((ulonglong)_DAT_181e2c660 * (ulonglong)uVar10 +
            (SUB168(auVar15 ^ auVar49,0) >> 0x20) * (_DAT_181e2c5f0 & 0xffffffff) << 0x20) +
          (ulonglong)uVar19 * (ulonglong)_DAT_181e2c640 +
          ((ulonglong)_DAT_181e2c650 * (ulonglong)uVar19 +
           (uVar6 >> 0x20) * (ulonglong)_DAT_181e2c640 << 0x20) +
          (ulonglong)uVar41 * (ulonglong)_DAT_181e2c620 +
          ((ulonglong)_DAT_181e2c630 * (ulonglong)uVar41 +
           (SUB168(auVar15 | auVar26,0) >> 0x20) * (ulonglong)_DAT_181e2c620 << 0x20) +
          (ulonglong)uVar31 * (ulonglong)_DAT_181e2c600 +
          ((ulonglong)_DAT_181e2c610 * (ulonglong)uVar31 +
           (uVar45 >> 0x20) * (ulonglong)_DAT_181e2c600 << 0x20) +
          (uVar30 & 0xffffffff) * (ulonglong)_DAT_181e2c5d0 +
          ((ulonglong)_DAT_181e2c5e0 * (uVar30 & 0xffffffff) +
           (ulonglong)uVar24 * (ulonglong)_DAT_181e2c5d0 << 0x20) +
          (uVar48 & 0xffffffff) * (ulonglong)_DAT_181e2c5b0 +
          ((ulonglong)_DAT_181e2c5c0 * (uVar48 & 0xffffffff) +
           (ulonglong)uVar42 * (ulonglong)_DAT_181e2c5b0 << 0x20))) + _DAT_181e2c670;
  _DAT_1832f5290 = _DAT_1832f5458 ^ uVar3 ^ uVar6;
  _DAT_1832f53f0 = (_DAT_1832f53f0 ^ uVar3) + uVar6 ^ 0x8e783f79ffd21461;
  _DAT_1832f53d0 = (_DAT_1832f53d0 * -0x8e9537329c68767 ^ _DAT_1832f53f0) + uVar3;
  _DAT_1832f53e8 = _DAT_1832f53d0 ^ _DAT_1832f53f0;
  uVar8 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar8 + _DAT_1832f5460;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_1832f5478 ^ uVar8;
  }
  _DAT_1832f5348 = uVar6;
  _DAT_1832f5230 = func_0x00018c2990e0(uVar3 ^ 0x94);
  uVar8 = lVar2 * -0x6b926c0c7ce70677;
  _DAT_1832f5228 =
       (_DAT_1832f5228 ^ _DAT_1832f5230 & 0xfffffffffe000000) + lVar2 * -0x6b926c0c7ce70677 ^
       0xb7e26a68adddd00a;
  _DAT_1832f5240 =
       (_DAT_1832f5240 * -0x464e0cf818926e0f ^ _DAT_1832f5228) +
       (_DAT_1832f5230 & 0xfffffffffe000000);
  _DAT_1832f5310 = _DAT_1832f5240 ^ _DAT_1832f5228;
  uVar3 = uVar6 ^ 0x84222325 ^ _DAT_1832f53b0;
  lVar2 = (uVar6 ^ 0x84222325) + _DAT_1832f5390;
  uVar30 = uVar3 + lVar2;
  uVar48 = (uVar4 ^ _DAT_1832f5390) + _DAT_1832f53b0 + uVar4;
  uVar3 = (uVar30 * 0x2000 | uVar30 >> 0x33) ^ uVar3;
  uVar30 = (uVar48 * 0x2000 | uVar48 >> 0x33) ^ uVar4 ^ _DAT_1832f5390;
  _DAT_1832f51f0 = uVar8;
  _DAT_1832f5348 =
       func_0x00018c2990e0((uVar30 << 0x1d | uVar30 >> 0x23) - (_DAT_1832f53b0 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar39 = (uint)(uVar6 >> 0x20);
  auVar27._8_4_ = (int)uVar6;
  auVar27._0_8_ = uVar6;
  auVar27._12_4_ = uVar39;
  uVar19 = (uint)(uVar4 >> 0x20);
  auVar22._8_4_ = (int)uVar4;
  auVar22._0_8_ = uVar4;
  auVar22._12_4_ = uVar19;
  uVar41 = SUB164(auVar27 & auVar22,0);
  uVar30 = SUB168(auVar27 & auVar22,0);
  uVar10 = SUB164(auVar27 | auVar22,0);
  uVar3 = SUB168(auVar27 | auVar22,0);
  uVar31 = SUB164(auVar22 ^ auVar49,0);
  uVar24 = SUB164(auVar27 ^ auVar22,0);
  uVar30 = (((ulonglong)uVar31 * (_DAT_181e2c6d0 & 0xffffffff) +
             ((ulonglong)_DAT_181e2c700 * (ulonglong)uVar31 +
              (SUB168(auVar22 ^ auVar49,0) >> 0x20) * (_DAT_181e2c6d0 & 0xffffffff) << 0x20) +
            (ulonglong)_DAT_181e2c6f0 * (ulonglong)uVar10 +
            ((uVar3 >> 0x20) * (ulonglong)_DAT_181e2c6f0 +
             (ulonglong)_DAT_181e2c6e0 * (ulonglong)uVar10 << 0x20) +
            (ulonglong)uVar41 * (ulonglong)_DAT_181e2c6f0 +
            ((uVar30 >> 0x20) * (ulonglong)_DAT_181e2c6f0 +
             (ulonglong)uVar41 * (ulonglong)_DAT_181e2c6e0 << 0x20) +
            (ulonglong)_DAT_181e2c6b0 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_181e2c6c0 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar19 * (ulonglong)_DAT_181e2c6b0 << 0x20) +
            (ulonglong)_DAT_181e2c690 * (uVar6 & 0xffffffff) +
            ((ulonglong)_DAT_181e2c6a0 * (uVar6 & 0xffffffff) +
             (ulonglong)uVar39 * (ulonglong)_DAT_181e2c690 << 0x20)) -
           ((ulonglong)uVar24 * (_DAT_181e2c790 & 0xffffffff) +
            ((ulonglong)_DAT_181e2c7a0 * (ulonglong)uVar24 +
             (SUB168(auVar27 ^ auVar22,0) >> 0x20) * (_DAT_181e2c790 & 0xffffffff) << 0x20) +
            (ulonglong)uVar10 * (ulonglong)_DAT_181e2c770 +
            ((ulonglong)_DAT_181e2c780 * (ulonglong)uVar10 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_181e2c770 << 0x20) +
           (ulonglong)uVar41 * (ulonglong)_DAT_181e2c750 +
           ((ulonglong)_DAT_181e2c760 * (ulonglong)uVar41 +
            (uVar30 >> 0x20) * (ulonglong)_DAT_181e2c750 << 0x20) +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_181e2c740 +
           ((ulonglong)uVar19 * (ulonglong)_DAT_181e2c740 +
            (ulonglong)_DAT_181e2c730 * (uVar4 & 0xffffffff) << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_181e2c740 +
           ((ulonglong)uVar39 * (ulonglong)_DAT_181e2c740 +
            (uVar6 & 0xffffffff) * (ulonglong)_DAT_181e2c730 << 0x20))) + _DAT_181e2c6d0;
  auVar16._8_8_ = uVar8;
  auVar16._0_8_ = uVar30 ^ 0x84222325;
  auVar12 = pshufb(auVar16 ^ _DAT_181e2c7b0,auVar12);
  uVar3 = uVar6 * uVar4 ^ _DAT_1832f5348;
  _DAT_1832f5198 = _DAT_1832f5460 ^ uVar3 ^ uVar30;
  _DAT_1832f52d0 = (_DAT_1832f52d0 ^ uVar3) + uVar30 ^ 0x903213ee8120e9d7;
  _DAT_1832f51b8 = (_DAT_1832f51b8 * 0x70fa3236f6083727 ^ _DAT_1832f52d0) + uVar3;
  _DAT_1832f5460 = _DAT_1832f51b8 ^ _DAT_1832f52d0;
  uVar4 = auVar12._8_8_ + auVar12._0_8_;
  uVar3 = uVar4 + _DAT_1832f5450;
  if (auVar12._4_4_ < 0) {
    uVar3 = _DAT_1832f5320 ^ uVar4;
  }
  _DAT_1832f52a0 = uVar30;
  uVar3 = func_0x00018c2990e0(SUB161(auVar16 ^ _DAT_181e2c7b0,5) ^ uVar3);
  uVar41 = (uint)(uVar30 >> 0x20);
  auVar34._8_4_ = (int)uVar30;
  auVar34._0_8_ = uVar30;
  auVar34._12_4_ = uVar41;
  uVar31 = (uint)(uVar8 >> 0x20);
  auVar17._8_4_ = (int)uVar8;
  auVar17._0_8_ = uVar8;
  auVar17._12_4_ = uVar31;
  uVar24 = SUB164(auVar34 & auVar17,0);
  uVar6 = SUB168(auVar34 & auVar17,0);
  uVar19 = SUB164(auVar34 | auVar17,0);
  uVar48 = SUB168(auVar34 | auVar17,0);
  uVar39 = SUB164(auVar34 ^ auVar17,0);
  uVar42 = SUB164(auVar34 ^ _DAT_18001a710,0);
  uVar45 = SUB168(auVar34 ^ _DAT_18001a710,0);
  auVar43._8_4_ = 0xffffffff;
  auVar43._0_8_ = 0xffffffffffffffff;
  auVar43._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar17 ^ auVar43,0);
  uVar4 = uVar3 << 7 | uVar3 >> 0x39;
  uVar45 = (((_DAT_181e2c800 & 0xffffffff) * (ulonglong)uVar42 +
             ((_DAT_181e2c870 & 0xffffffff) * (ulonglong)uVar42 +
              (uVar45 >> 0x20) * (_DAT_181e2c800 & 0xffffffff) << 0x20) +
            (ulonglong)uVar39 * (ulonglong)_DAT_181e2c850 +
            ((_DAT_181e2c860 & 0xffffffff) * (ulonglong)uVar39 +
             (SUB168(auVar34 ^ auVar17,0) >> 0x20) * (ulonglong)_DAT_181e2c850 << 0x20) +
            (_DAT_181e2c830 & 0xffffffff) * (ulonglong)uVar19 +
            ((_DAT_181e2c840 & 0xffffffff) * (ulonglong)uVar19 +
             (uVar48 >> 0x20) * (_DAT_181e2c830 & 0xffffffff) << 0x20) +
            (_DAT_181e2c810 & 0xffffffff) * (ulonglong)uVar24 +
            ((_DAT_181e2c820 & 0xffffffff) * (ulonglong)uVar24 +
             (uVar6 >> 0x20) * (_DAT_181e2c810 & 0xffffffff) << 0x20) +
            (_DAT_181e2c7e0 & 0xffffffff) * (uVar8 & 0xffffffff) +
            ((_DAT_181e2c7f0 & 0xffffffff) * (uVar8 & 0xffffffff) +
             (ulonglong)uVar31 * (_DAT_181e2c7e0 & 0xffffffff) << 0x20) +
            (_DAT_181e2c7c0 & 0xffffffff) * (uVar30 & 0xffffffff) +
            ((_DAT_181e2c7d0 & 0xffffffff) * (uVar30 & 0xffffffff) +
             (ulonglong)uVar41 * (_DAT_181e2c7c0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar10 * (ulonglong)_DAT_181e2c920 +
            ((_DAT_181e2c930 & 0xffffffff) * (ulonglong)uVar10 +
             (SUB168(auVar17 ^ auVar43,0) >> 0x20) * (ulonglong)_DAT_181e2c920 << 0x20) +
            (ulonglong)uVar19 * (ulonglong)_DAT_181e2c8f0 +
            ((uVar48 >> 0x20) * (ulonglong)_DAT_181e2c8f0 +
             (_DAT_181e2c8e0 & 0xffffffff) * (ulonglong)uVar19 << 0x20) +
            (ulonglong)uVar24 * (ulonglong)_DAT_181e2c8f0 +
            ((uVar6 >> 0x20) * (ulonglong)_DAT_181e2c8f0 +
             (ulonglong)uVar24 * (_DAT_181e2c8e0 & 0xffffffff) << 0x20) +
            (uVar8 & 0xffffffff) * (ulonglong)_DAT_181e2c8c0 +
            ((_DAT_181e2c8d0 & 0xffffffff) * (uVar8 & 0xffffffff) +
             (ulonglong)uVar31 * (ulonglong)_DAT_181e2c8c0 << 0x20) +
            (uVar30 & 0xffffffff) * (ulonglong)_DAT_181e2c8a0 +
            ((_DAT_181e2c8b0 & 0xffffffff) * (uVar30 & 0xffffffff) +
             (ulonglong)uVar41 * (ulonglong)_DAT_181e2c8a0 << 0x20) +
           (ulonglong)uVar42 * (ulonglong)_DAT_181e2c900 +
           ((_DAT_181e2c910 & 0xffffffff) * (ulonglong)uVar42 +
            (uVar45 >> 0x20) * (ulonglong)_DAT_181e2c900 << 0x20))) + _DAT_181e2c940;
  _DAT_1832f5310 = _DAT_1832f5170 ^ uVar4 ^ uVar45;
  _DAT_1832f52b8 = (uVar3 ^ uVar4) + uVar45 ^ 0xc563f5956d0cebad;
  _DAT_1832f5248 = (_DAT_1832f5248 * 0x38262637450e4c01 ^ _DAT_1832f52b8) + uVar4;
  _DAT_1832f51c0 = _DAT_1832f5248 ^ _DAT_1832f52b8;
  uVar6 = uVar5 ^ 0x84222325;
  uVar3 = (uVar6 ^ _DAT_1832f5278) + _DAT_1832f53c0 + uVar6;
  uVar8 = (uVar9 ^ _DAT_1832f53c0) + _DAT_1832f5278 + uVar9;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_1832f5278;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar9 ^ _DAT_1832f53c0;
  uVar3 = uVar9 + uVar5;
  _DAT_1832f5180 = uVar45;
  _DAT_1832f5120 =
       func_0x00018c2990e0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832f5278 + uVar9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f53c0 + uVar6));
  uVar8 = uVar5 ^ uVar9;
  _DAT_1832f5200 =
       (_DAT_1832f5200 ^ _DAT_1832f5120 & 0xfffffffffff80000) + uVar8 ^ 0xbc6bf09fb57400f;
  _DAT_1832f54e0 =
       (_DAT_1832f54e0 * 0x32efe05270f9375b ^ _DAT_1832f5200) +
       (_DAT_1832f5120 & 0xfffffffffff80000);
  _DAT_1832f5220 = _DAT_1832f54e0 ^ _DAT_1832f5200;
  uVar4 = (uVar6 ^ _DAT_1832f5400) + _DAT_1832f5458 + uVar6;
  uVar30 = (uVar9 ^ _DAT_1832f5458) + _DAT_1832f5400 + uVar9;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar6 ^ _DAT_1832f5400;
  uVar30 = (uVar30 * 0x2000 | uVar30 >> 0x33) ^ uVar9 ^ _DAT_1832f5458;
  _DAT_1832f53c8 = uVar8;
  _DAT_1832f5108 =
       func_0x00018c2990e0((uVar30 << 0x1d | uVar30 >> 0x23) - (_DAT_1832f5400 + uVar9) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f5458 + uVar6));
  uVar4 = _DAT_1832f5108 << 0x16 | (_DAT_1832f5108 & 0x7fffffffffffffff) >> 0x2a;
  _DAT_1832f51a8 = uVar9 & uVar5;
  _DAT_1832f52e0 = (_DAT_1832f52e0 ^ uVar4) + _DAT_1832f51a8 ^ 0x4704e8e59cbd1f5f;
  _DAT_1832f5310 = (_DAT_1832f5310 * 0x3238454016aafe41 ^ _DAT_1832f52e0) + uVar4;
  _DAT_1832f5168 = _DAT_1832f5310 ^ _DAT_1832f52e0;
  uVar8 = uVar8 + _DAT_1832f51a8 * 2;
  uVar4 = uVar3 ^ 0x84222325 ^ _DAT_1832f52b0;
  lVar2 = (uVar3 ^ 0x84222325) + _DAT_1832f51f0;
  uVar30 = uVar4 + lVar2;
  uVar9 = (uVar8 ^ _DAT_1832f51f0) + _DAT_1832f52b0 + uVar8;
  uVar4 = (uVar30 * 0x2000 | uVar30 >> 0x33) ^ uVar4;
  uVar30 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8 ^ _DAT_1832f51f0;
  _DAT_1832f54e0 =
       func_0x00018c2990e0((uVar30 << 0x1d | uVar30 >> 0x23) - (_DAT_1832f52b0 + uVar8) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar2);
  uVar10 = (uint)(uVar3 >> 0x20);
  auVar35._8_4_ = (int)uVar3;
  auVar35._0_8_ = uVar3;
  auVar35._12_4_ = uVar10;
  uVar19 = (uint)(uVar8 >> 0x20);
  auVar28._8_4_ = (int)uVar8;
  auVar28._0_8_ = uVar8;
  auVar28._12_4_ = uVar19;
  uVar4 = (uVar3 & 0xffffffff) * (uVar8 & 0xffffffff) +
          ((uVar3 & 0xffffffff) * (ulonglong)uVar19 + (ulonglong)uVar10 * (uVar8 & 0xffffffff) <<
          0x20);
  uVar42 = SUB164(auVar35 & auVar28,0);
  uVar48 = SUB168(auVar35 & auVar28,0);
  uVar31 = SUB164(auVar35 ^ auVar28,0);
  uVar39 = SUB164(auVar35 ^ auVar43,0);
  uVar9 = SUB168(auVar35 ^ auVar43,0);
  uVar24 = SUB164(auVar28 ^ _DAT_18001a710,0);
  lVar2 = (uVar4 & 0xffffffff) * (ulonglong)_DAT_181e2ca10 +
          ((ulonglong)_DAT_181e2ca20 * (uVar4 & 0xffffffff) +
           (uVar4 >> 0x20) * (ulonglong)_DAT_181e2ca10 << 0x20);
  uVar30 = (uVar3 | uVar8) ^ _DAT_1832f54e0;
  uVar4 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x37 ^ uVar30) &
          0xffffffffffffff80;
  uVar41 = SUB164(auVar35 | auVar28,0);
  uVar30 = (((ulonglong)uVar24 * (ulonglong)_DAT_181e2c9f0 +
             ((ulonglong)_DAT_181e2ca00 * (ulonglong)uVar24 +
              (SUB168(auVar28 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_181e2c9f0 << 0x20) +
             (ulonglong)_DAT_181e2c9d0 * (ulonglong)uVar39 +
             ((ulonglong)_DAT_181e2c9e0 * (ulonglong)uVar39 +
              (uVar9 >> 0x20) * (ulonglong)_DAT_181e2c9d0 << 0x20) +
             (ulonglong)uVar31 * (ulonglong)_DAT_181e2c9b0 +
             ((ulonglong)_DAT_181e2c9c0 * (ulonglong)uVar31 +
              (SUB168(auVar35 ^ auVar28,0) >> 0x20) * (ulonglong)_DAT_181e2c9b0 << 0x20) +
             (ulonglong)_DAT_181e2c990 * (ulonglong)uVar42 +
             ((ulonglong)_DAT_181e2c9a0 * (ulonglong)uVar42 +
              (uVar48 >> 0x20) * (ulonglong)_DAT_181e2c990 << 0x20) +
             (ulonglong)_DAT_181e2c970 * (uVar8 & 0xffffffff) +
             ((ulonglong)_DAT_181e2c980 * (uVar8 & 0xffffffff) +
              (ulonglong)uVar19 * (ulonglong)_DAT_181e2c970 << 0x20) +
             (ulonglong)_DAT_181e2c950 * (uVar3 & 0xffffffff) +
             ((ulonglong)_DAT_181e2c960 * (uVar3 & 0xffffffff) +
              (ulonglong)uVar10 * (ulonglong)_DAT_181e2c950 << 0x20) + lVar2) -
           ((ulonglong)uVar39 * (_DAT_181e2ca70 & 0xffffffff) +
            ((ulonglong)_DAT_181e2caa0 * (ulonglong)uVar39 +
             (uVar9 >> 0x20) * (_DAT_181e2ca70 & 0xffffffff) << 0x20) +
            (ulonglong)uVar41 * (ulonglong)_DAT_181e2ca90 +
            ((SUB168(auVar35 | auVar28,0) >> 0x20) * (ulonglong)_DAT_181e2ca90 +
             (ulonglong)_DAT_181e2ca80 * (ulonglong)uVar41 << 0x20) +
            (ulonglong)uVar42 * (ulonglong)_DAT_181e2ca90 +
            ((uVar48 >> 0x20) * (ulonglong)_DAT_181e2ca90 +
             (ulonglong)uVar42 * (ulonglong)_DAT_181e2ca80 << 0x20) +
            (uVar3 & 0xffffffff) * (ulonglong)_DAT_181e2ca30 +
            ((ulonglong)_DAT_181e2ca40 * (uVar3 & 0xffffffff) +
             (ulonglong)uVar10 * (ulonglong)_DAT_181e2ca30 << 0x20) +
            (uVar8 & 0xffffffff) * (ulonglong)_DAT_181e2ca50 +
            ((ulonglong)_DAT_181e2ca60 * (uVar8 & 0xffffffff) +
             (ulonglong)uVar19 * (ulonglong)_DAT_181e2ca50 << 0x20) + lVar2)) + _DAT_181e2cab0;
  _DAT_1832f5278 = uVar30 ^ uVar4;
  _DAT_1832f5470 = (_DAT_1832f5470 ^ uVar4) + uVar30 ^ 0xeff4bf514f180ee;
  _DAT_1832f5130 = (_DAT_1832f5130 * -0x6b7b3eb3de17a845 ^ _DAT_1832f5470) + uVar4;
  _DAT_1832f53f8 = _DAT_1832f5130 ^ _DAT_1832f5470;
  uVar8 = uVar45 ^ 0x84222325;
  uVar3 = ((_DAT_1832f5410 ^ uVar8) + (uVar8 & _DAT_1832f5410) * 2) * (uVar30 - _DAT_1832f5228);
  uVar3 = (uVar3 | _DAT_1832f5140) + (uVar3 & _DAT_1832f5140);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832f5118 = uVar30;
  _DAT_1832f5298 = func_0x00018c2990e0((uVar8 ^ uVar30 | uVar3) + (uVar3 & (uVar8 ^ uVar30)));
  uVar3 = _DAT_1832f5298 - (_DAT_1832f5298 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1832f5298;
  uStack0000000000000060 = (undefined4)uVar45;
  uStack0000000000000064 = (uint)(uVar45 >> 0x20);
  auVar38._8_4_ = uStack0000000000000060;
  auVar38._0_8_ = uVar45;
  auVar38._12_4_ = uStack0000000000000064;
  uVar39 = (uint)(uVar30 >> 0x20);
  auVar36._8_4_ = (int)uVar30;
  auVar36._0_8_ = uVar30;
  auVar36._12_4_ = uVar39;
  uVar8 = (uVar45 & 0xffffffff) * (uVar30 & 0xffffffff) +
          ((ulonglong)uStack0000000000000064 * (uVar30 & 0xffffffff) +
           (uVar45 & 0xffffffff) * (ulonglong)uVar39 << 0x20);
  auVar46._8_4_ = 0xffffffff;
  auVar46._0_8_ = 0xffffffffffffffff;
  auVar46._12_4_ = 0xffffffff;
  uVar31 = SUB164(auVar38 & auVar36,0);
  uVar19 = SUB164(auVar38 | auVar36,0);
  uVar10 = SUB164(auVar38 ^ auVar36,0);
  uVar24 = SUB164(auVar36 ^ auVar46,0);
  uVar4 = SUB168(auVar36 ^ auVar46,0);
  lVar2 = (uVar8 & 0xffffffff) * (ulonglong)_DAT_181e2cb80 +
          ((ulonglong)_DAT_181e2cb90 * (uVar8 & 0xffffffff) +
           (uVar8 >> 0x20) * (ulonglong)_DAT_181e2cb80 << 0x20);
  uVar30 = (((ulonglong)_DAT_181e2cb00 * (ulonglong)uVar24 +
             ((ulonglong)_DAT_181e2cb70 * (ulonglong)uVar24 +
              (uVar4 >> 0x20) * (ulonglong)_DAT_181e2cb00 << 0x20) +
             (ulonglong)uVar10 * (ulonglong)_DAT_181e2cb50 +
             ((ulonglong)_DAT_181e2cb60 * (ulonglong)uVar10 +
              (SUB168(auVar38 ^ auVar36,0) >> 0x20) * (ulonglong)_DAT_181e2cb50 << 0x20) +
             (ulonglong)uVar19 * (ulonglong)_DAT_181e2cb30 +
             ((ulonglong)_DAT_181e2cb40 * (ulonglong)uVar19 +
              (SUB168(auVar38 | auVar36,0) >> 0x20) * (ulonglong)_DAT_181e2cb30 << 0x20) +
             (ulonglong)uVar31 * (ulonglong)_DAT_181e2cb10 +
             ((ulonglong)_DAT_181e2cb20 * (ulonglong)uVar31 +
              (SUB168(auVar38 & auVar36,0) >> 0x20) * (ulonglong)_DAT_181e2cb10 << 0x20) +
             (ulonglong)_DAT_181e2cae0 * (uVar30 & 0xffffffff) +
             ((ulonglong)_DAT_181e2caf0 * (uVar30 & 0xffffffff) +
              (ulonglong)uVar39 * (ulonglong)_DAT_181e2cae0 << 0x20) +
             (uVar45 & 0xffffffff) * (ulonglong)_DAT_181e2cac0 +
             ((ulonglong)_DAT_181e2cad0 * (uVar45 & 0xffffffff) +
              (ulonglong)uStack0000000000000064 * (ulonglong)_DAT_181e2cac0 << 0x20) + lVar2) -
           ((ulonglong)uVar24 * (ulonglong)_DAT_181e2cbb0 +
            ((uVar4 >> 0x20) * (ulonglong)_DAT_181e2cbb0 +
             (ulonglong)_DAT_181e2cba0 * (ulonglong)uVar24 << 0x20) +
            (uVar30 & 0xffffffff) * (ulonglong)_DAT_181e2cbb0 +
            ((ulonglong)uVar39 * (ulonglong)_DAT_181e2cbb0 +
             (uVar30 & 0xffffffff) * (ulonglong)_DAT_181e2cba0 << 0x20) + lVar2)) + _DAT_181e2cbc0;
  _DAT_1832f5128 = _DAT_1832f5458 ^ uVar3 ^ uVar30;
  _DAT_1832f5130 = (_DAT_1832f5130 ^ uVar3) + uVar30 ^ 0xdf247a7ad4e67d57;
  _DAT_1832f5330 = (_DAT_1832f5330 * -0x353564d0cd0b1867 ^ _DAT_1832f5130) + uVar3;
  _DAT_1832f54e0 = _DAT_1832f5330 ^ _DAT_1832f5130;
  uVar3 = (uVar6 ^ _DAT_1832f52a8) + uVar6 + _DAT_1832f51e0;
  uVar8 = ~_DAT_1832f51e0 + (_DAT_1832f52a8 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_1832f52a8;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ ~_DAT_1832f51e0;
  _DAT_1832f5308 = uVar30;
  _DAT_1832f5358 =
       func_0x00018c2990e0((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1832f52a8 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uVar6 + _DAT_1832f51e0));
  uVar3 = (-uVar5 ^ _DAT_1832f5358 ^ 0xffffffffffffffff) & 0x7fffffffffffffff ^ uVar5;
  _DAT_1832f5140 = ~uVar5;
  _DAT_1832f54d8 = (_DAT_1832f54d8 ^ uVar3) + _DAT_1832f5140 ^ 0xab555e78c2f5c984;
  _DAT_1832f5290 = (_DAT_1832f5290 * 0x6c6631070176a5df ^ _DAT_1832f54d8) + uVar3;
  _DAT_1832f5118 = _DAT_1832f5290 ^ _DAT_1832f54d8;
  uVar3 = (~_DAT_1832f53a8 - uVar5) * ((_DAT_1832f51b0 ^ uVar6) + (uVar6 & _DAT_1832f51b0) * 2);
  uVar3 = (uVar3 | _DAT_1832f5458) + (uVar3 & _DAT_1832f5458);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832f5480 =
       func_0x00018c2990e0((_DAT_1832f5140 ^ uVar6 | uVar3) + (uVar3 & (_DAT_1832f5140 ^ uVar6)));
  _DAT_1832f52b8 = _DAT_1832f52b8 ^ ~_DAT_1832f5480 & uVar5 ^ 0xb5df0a31d9c902d9;
  _DAT_1832f5430 =
       (_DAT_1832f5430 * -0x5bacdc1a1319145b ^ _DAT_1832f52b8) + (~_DAT_1832f5480 & uVar5);
  _DAT_1832f5110 = _DAT_1832f5430 ^ _DAT_1832f52b8;
  _DAT_1832f54c0 = _DAT_1832f5140;
  _DAT_1832f5168 = 0;
  uVar3 = uVar30 ^ 0x84222325 ^ _DAT_1832f5398;
  lVar2 = (uVar30 ^ 0x84222325) + _DAT_1832f5450;
  uVar8 = uVar3 + lVar2;
  uVar3 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar3;
  uVar8 = ((_DAT_1832f5450 + _DAT_1832f5398) * 0x2000 | _DAT_1832f5450 + _DAT_1832f5398 >> 0x33) ^
          _DAT_1832f5450;
  _DAT_1832f53f0 =
       func_0x00018c2990e0((uVar8 << 0x1d | uVar8 >> 0x23) - _DAT_1832f5398 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar3 = _DAT_181e2bd30;
  uVar19 = (uint)(uVar30 >> 0x20);
  auVar40._8_4_ = (int)uVar30;
  auVar40._0_8_ = uVar30;
  auVar40._12_4_ = uVar19;
  uVar4 = _DAT_1832f53f0 ^ uVar30;
  uVar8 = uVar4 >> 1 | uVar4;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar4;
  uVar10 = SUB164(auVar40 ^ _DAT_18001a710,0);
  uVar6 = (((ulonglong)_DAT_181e2cc10 * (uVar30 & 0xffffffff) +
            ((ulonglong)_DAT_181e2cc20 * (uVar30 & 0xffffffff) +
             (ulonglong)uVar19 * (ulonglong)_DAT_181e2cc10 << 0x20) +
           (ulonglong)_DAT_181e2cbf0 * (uVar30 & 0xffffffff) +
           ((ulonglong)_DAT_181e2cc00 * (uVar30 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_181e2cbf0 << 0x20) +
           (ulonglong)_DAT_181e2cbd0 * (uVar30 & 0xffffffff) +
           ((ulonglong)_DAT_181e2cbe0 * (uVar30 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_181e2cbd0 << 0x20)) -
          ((ulonglong)uVar10 * (_DAT_181e2cc70 & 0xffffffff) +
           ((ulonglong)_DAT_181e2cc80 * (ulonglong)uVar10 +
            (SUB168(auVar40 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_181e2cc70 & 0xffffffff) << 0x20) +
          (uVar30 & 0xffffffff) * (ulonglong)_DAT_181e2cc50 +
          ((ulonglong)_DAT_181e2cc60 * (uVar30 & 0xffffffff) +
           (ulonglong)uVar19 * (ulonglong)_DAT_181e2cc50 << 0x20) +
          (ulonglong)_DAT_181e2cc30 * (uVar30 & 0xffffffff) +
          ((ulonglong)_DAT_181e2cc40 * (uVar30 & 0xffffffff) +
           (ulonglong)uVar19 * (ulonglong)_DAT_181e2cc30 << 0x20))) - _DAT_181e2cc70;
  _DAT_1832f5328 = _DAT_1832f51b0 ^ uVar4 ^ uVar6;
  _DAT_1832f5248 = (_DAT_1832f5248 ^ uVar4) + uVar6 ^ 0xbe350c1943356964;
  _DAT_1832f54e0 = (_DAT_1832f54e0 * -0x3b31179b9d60c0af ^ _DAT_1832f5248) + uVar4;
  _DAT_1832f52e0 = _DAT_1832f54e0 ^ _DAT_1832f5248;
  uVar8 = (uStack0000000000000088 ^ _DAT_1832f51a8) + uStack0000000000000088 + _DAT_1832f5140;
  uVar4 = (_DAT_181e2bd30 ^ _DAT_1832f5140) + _DAT_1832f51a8 + _DAT_181e2bd30;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uStack0000000000000088 ^ _DAT_1832f51a8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_181e2bd30 ^ _DAT_1832f5140;
  _DAT_1832f54f8 = uVar6;
  _DAT_1832f53a8 =
       func_0x00018c2990e0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832f51a8 + _DAT_181e2bd30) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uStack0000000000000088 + _DAT_1832f5140));
  uVar3 = uVar3 ^ _DAT_1832f53a8;
  uVar8 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  _DAT_1832f53f8 = _DAT_1832f53f8 ^ uVar3 ^ 0x4f22dd4c75942874;
  _DAT_1832f52b0 = (_DAT_1832f52b0 * -0x4a305fe2f3ae165b ^ _DAT_1832f53f8) + uVar3;
  _DAT_1832f5420 = _DAT_1832f52b0 ^ _DAT_1832f53f8;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar6 ^ 0x84222325;
  _DAT_1832f5430 = 0;
  auVar12 = pshufb(auVar18 ^ _DAT_181e2cc90,_DAT_1800170c0);
  uVar8 = auVar12._8_8_ + auVar12._0_8_;
  uVar3 = uVar8 + _DAT_1832f54f8;
  if (auVar12._4_4_ < 0) {
    uVar3 = _DAT_1832f53f8 ^ uVar8;
  }
  _DAT_1832f5178 = func_0x00018c2990e0(SUB161(auVar18 ^ _DAT_181e2cc90,5) ^ uVar3);
  uVar3 = uStack0000000000000090;
  uVar24 = (uint)(uVar6 >> 0x20);
  auVar29._8_4_ = (int)uVar6;
  auVar29._0_8_ = uVar6;
  auVar29._12_4_ = uVar24;
  auVar12 = auVar29 ^ ZEXT816(0);
  auVar44._8_4_ = 0xffffffff;
  auVar44._0_8_ = 0xffffffffffffffff;
  auVar44._12_4_ = 0xffffffff;
  uVar10 = auVar12._0_4_;
  uVar8 = auVar12._0_8_;
  uVar39 = SUB164(auVar29 ^ auVar44,0);
  uVar31 = SUB164(ZEXT816(0) ^ auVar44,0);
  auVar12 = auVar29 | ZEXT816(0);
  uVar19 = auVar12._0_4_;
  uVar6 = (((ulonglong)uVar31 * (ulonglong)_DAT_181e2cd40 +
            ((ulonglong)_DAT_181e2cd50 * (ulonglong)uVar31 +
             (SUB168(ZEXT816(0) ^ auVar44,0) >> 0x20) * (ulonglong)_DAT_181e2cd40 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_181e2cd20 +
           ((ulonglong)_DAT_181e2cd30 * (ulonglong)uVar39 +
            (SUB168(auVar29 ^ auVar44,0) >> 0x20) * (ulonglong)_DAT_181e2cd20 << 0x20) +
           (ulonglong)_DAT_181e2cd00 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_181e2cd10 * (ulonglong)uVar10 +
            (uVar8 >> 0x20) * (ulonglong)_DAT_181e2cd00 << 0x20) +
           (ulonglong)_DAT_181e2cca0 * (uVar6 & 0xffffffff) +
           ((ulonglong)_DAT_181e2ccb0 * (uVar6 & 0xffffffff) +
            (ulonglong)uVar24 * (ulonglong)_DAT_181e2cca0 << 0x20)) -
          ((ulonglong)uVar10 * (_DAT_181e2cde0 & 0xffffffff) +
           ((ulonglong)_DAT_181e2cdf0 * (ulonglong)uVar10 +
            (uVar8 >> 0x20) * (_DAT_181e2cde0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar19 * (ulonglong)_DAT_181e2cdc0 +
           ((ulonglong)_DAT_181e2cdd0 * (ulonglong)uVar19 +
            (auVar12._0_8_ >> 0x20) * (ulonglong)_DAT_181e2cdc0 << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_181e2cd90 +
          ((ulonglong)uVar24 * (ulonglong)_DAT_181e2cd90 +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_181e2cd80 << 0x20))) + 0x4b199edad4ec3453;
  auVar23._8_8_ = uVar6;
  auVar23._0_8_ = uStack0000000000000090 ^ 0x84222325;
  auVar12 = pshufb(auVar23 ^ _DAT_181e2ce00,_DAT_1800170c0);
  uVar8 = _DAT_1832f5178 * 0x212ee0bbe19321cf;
  uVar4 = uVar8 >> 1 | uVar8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar8;
  _DAT_1832f51e0 = _DAT_1832f5258 ^ uVar8 ^ uVar6;
  _DAT_1832f51b8 = (_DAT_1832f51b8 ^ uVar8) + uVar6 ^ 0xb5acdf095d4b7de;
  _DAT_1832f5278 = (_DAT_1832f5278 * 0x69be017e8bfd739f ^ _DAT_1832f51b8) + uVar8;
  _DAT_1832f5420 = _DAT_1832f5278 ^ _DAT_1832f51b8;
  uVar4 = auVar12._8_8_ + auVar12._0_8_;
  uVar8 = uVar4 + _DAT_1832f5430;
  if (auVar12._4_4_ < 0) {
    uVar8 = _DAT_1832f51a8 ^ uVar4;
  }
  _DAT_1832f5170 = uVar6;
  _DAT_1832f52d0 = func_0x00018c2990e0(SUB161(auVar23 ^ _DAT_181e2ce00,5) ^ uVar8);
  uVar8 = ~_DAT_1832f52d0 & uVar3;
  _DAT_1832f5120 = uVar6 + uVar3 + (uVar6 & uVar3) * -2;
  _DAT_1832f5478 = (_DAT_1832f5478 ^ uVar8) + _DAT_1832f5120 ^ 0x27e71920c8e914ca;
  _DAT_1832f5138 = (_DAT_1832f5138 * -0x4cd07795192f51b3 ^ _DAT_1832f5478) + uVar8;
  _DAT_1832f5480 = _DAT_1832f5138 ^ _DAT_1832f5478;
  FUN_190dd72e0(uVar8,*_DAT_18301ee50 + 0x8e00,0x18d);
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


// ----- block @ rva 0xc2987ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2987ce(void)

{
  longlong in_stack_00000070;
  
  switch(in_stack_00000070 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc298910 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c298910(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (*_DAT_181e2c0c8)();
  return;
}


// ----- block @ rva 0xc29897d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c29897d(void)

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


// ----- block @ rva 0xc298a71 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c298a71(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
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


// ----- block @ rva 0xc298b95 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c298b95(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e2bed8)();
  return;
}


// ----- block @ rva 0xc298c2a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c298c2a(void)

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


// ----- block @ rva 0xc298ecb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c298ecb(void)

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


// ----- block @ rva 0xc298f0e -----

void FUN_18c298f0e(void)

{
  return;
}


// ----- block @ rva 0xc2990a3 -----

void FUN_18c2990a3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc299237 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c299237(void)

{
  FUN_190ddce00();
  (*_DAT_181e2d038)();
  return;
}


// ----- block @ rva 0xc29c889 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29c889(void)

{
  FUN_190ddfc90();
  (*_DAT_181e2d108)();
  return;
}


// ----- block @ rva 0xc29ca49 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c29ca49(void)

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


// ----- block @ rva 0xc29cbb2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29cbb2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e2ce88)();
  return;
}


// ----- block @ rva 0xc29cbe1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c29cbe1(void)

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


// ----- block @ rva 0xc29cc0d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29cc0d(void)

{
  (*_DAT_181e2d1a8)();
  return;
}


// ----- block @ rva 0xc29cd2a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29cd2a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181e2cf18)();
  return;
}


// ----- block @ rva 0xc29cd8a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29cd8a(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181e2cfd8)();
  return;
}


// ----- block @ rva 0xc29cde8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29cde8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_181e2d138)();
  return;
}


// ----- block @ rva 0xc29cdf9 -----

void FUN_18c29cdf9(void)

{
  return;
}


// ----- block @ rva 0xc29cef6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c29cef6(void)

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


// ----- block @ rva 0xc29cf8e -----

void FUN_18c29cf8e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc29d117 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29d117(void)

{
  FUN_190ddce00();
  (*_DAT_181e2e098)();
  return;
}


// ----- block @ rva 0xc29fd52 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c29fd52(void)

{
  FUN_190dd72e0();
  (*_DAT_181e2e068)();
  return;
}


// ----- block @ rva 0xc29fdce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c29fdce(void)

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


// ----- block @ rva 0xc2a00dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a00dd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e2de88)();
  return;
}


// ----- block @ rva 0xc2a010c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a010c(void)

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


// ----- block @ rva 0xc2a01d8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a01d8(void)

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


// ----- block @ rva 0xc2a03f0 -----

void FUN_18c2a03f0(void)

{
  return;
}


// ----- block @ rva 0xc2a049e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a049e(void)

{
  uint uVar1;
  longlong unaff_R14;
  uint in_stack_00000030;
  
  uVar1 = (uint)(in_stack_00000030 == 0);
  if (unaff_R14 != 0) {
    uVar1 = in_stack_00000030;
  }
  (*_DAT_181e2e128)(in_stack_00000030 == 0,uVar1);
  return;
}


// ----- block @ rva 0xc2a04ed -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a04ed(void)

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


// ----- block @ rva 0xc2a051f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a051f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e2df98)();
  return;
}


// ----- block @ rva 0xc2a057a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a057a(void)

{
  (*_DAT_181e2e188)();
  return;
}


// ----- block @ rva 0xc2a0585 -----

void FUN_18c2a0585(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc2a0717 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a0717(void)

{
  FUN_190ddce00();
  (*_DAT_181e2ef38)();
  return;
}


// ----- block @ rva 0xc2a34e3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a34e3(void)

{
  FUN_190ddfc90();
  (*_DAT_181e2ec98)();
  return;
}


// ----- block @ rva 0xc2a353a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a353a(void)

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


// ----- block @ rva 0xc2a3603 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a3603(void)

{
  (*_DAT_181e2ef88)();
  return;
}


// ----- block @ rva 0xc2a380c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a380c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e2ec88)();
  return;
}


// ----- block @ rva 0xc2a383b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a383b(void)

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


// ----- block @ rva 0xc2a3872 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a3872(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e2ed68)();
  return;
}


// ----- block @ rva 0xc2a3984 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a3984(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_181e2ef98)();
  return;
}


// ----- block @ rva 0xc2a39e4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a39e4(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181e2ede8)();
  return;
}


// ----- block @ rva 0xc2a3a42 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a3a42(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_181e2ef18)();
  return;
}


// ----- block @ rva 0xc2a3a53 -----

void FUN_18c2a3a53(void)

{
  return;
}


// ----- block @ rva 0xc2a3b82 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a3b82(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e2ee58)();
  return;
}


// ----- block @ rva 0xc2a3bdd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a3bdd(void)

{
  (*_DAT_181e2ef28)();
  return;
}


// ----- block @ rva 0xc2a3d0e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a3d0e(void)

{
  FUN_190ddce00();
  (*_DAT_181e2fdb8)();
  return;
}


// ----- block @ rva 0xc2a3e49 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a3e49(void)

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


// ----- block @ rva 0xc2a40ba -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a40ba(void)

{
  longlong unaff_R14;
  
  switch(unaff_R14 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc2a45ef -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a45ef(void)

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


// ----- block @ rva 0xc2a4610 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a4610(void)

{
  longlong in_stack_00000040;
  
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xc2a47b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a47b9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181e2fcc8)();
  return;
}


// ----- block @ rva 0xc2a48ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a48ef(void)

{
  (*_DAT_181e30018)();
  return;
}


// ----- block @ rva 0xc2a49ca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a49ca(void)

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


// ----- block @ rva 0xc2a4a47 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a4a47(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181e300a8)();
  return;
}


// ----- block @ rva 0xc2a4a75 -----

void FUN_18c2a4a75(void)

{
  return;
}


// ----- block @ rva 0xc2a4a82 -----

void FUN_18c2a4a82(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xc2a4bbd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a4bbd(void)

{
  FUN_190ddfc90();
  (*_DAT_181e301e8)();
  return;
}


// ----- block @ rva 0xc2a4c14 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a4c14(void)

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


// ----- block @ rva 0xc2a4c2a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a4c2a(void)

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


// ----- block @ rva 0xc2a4c63 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a4c63(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_181e301f8)();
  return;
}


// ----- block @ rva 0xc2a4c7c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a4c7c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117db0();
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


// ----- block @ rva 0xc2a4cb0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a4cb0(void)

{
  FUN_190dd72e0();
  (*_DAT_181e30168)();
  return;
}


// ----- block @ rva 0xc2a4cd8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a4cd8(void)

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


// ----- block @ rva 0xc2a4d2c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18c2a4d2c(void)

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


// ----- block @ rva 0xc2a4d8c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c2a4d8c(void)

{
  FUN_190dd9df0();
  (*_DAT_181e301c8)();
  return;
}


// ----- block @ rva 0xc2a4e0f -----

void FUN_18c2a4e0f(void)

{
  return;
}


// ----- block @ rva 0xc2a4e17 -----

void FUN_18c2a4e17(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

