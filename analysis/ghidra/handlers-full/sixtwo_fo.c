// ===== Lsixtwo/fo; YO ()V (handler @ image 18c1fd410, runtime 6ffff3e0d410) =====

void FUN_18c1fd410(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c1fd45a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e098a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; _12b7f932cd1965f4d41129a157fe8203 ()V (handler @ image 18c2680d0, runtime 6ffff3e780d0) =====

void FUN_18c2680d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c246d19 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e17050 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLl (Lsixtwo/gM;)V (handler @ image 18c1fd220, runtime 6ffff3e0d220) =====

void FUN_18c1fd220(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c1fd26a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e097f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLm (Lsixtwo/gL$tk;)V (handler @ image 18c2499a0, runtime 6ffff3e599a0) =====

void FUN_18c2499a0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c249a72 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e17fe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLn (Lsixtwo/gH$th;)V (handler @ image 18c2846f0, runtime 6ffff3e946f0) =====

void FUN_18c2846f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c295274 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2bd80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLr (Lnet/minecraft/class_1657;)Z (handler @ image 18c299170, runtime 6ffff3ea9170) =====

void FUN_18c299170(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c299234 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2ce60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLs (Lnet/minecraft/class_1657;)Z (handler @ image 18c29d050, runtime 6ffff3ead050) =====

void FUN_18c29d050(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c29d114 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2de50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLt (Lnet/minecraft/class_1657;)Z (handler @ image 18c2a0650, runtime 6ffff3eb0650) =====

void FUN_18c2a0650(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c2a0714 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2ec10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLu (Lnet/minecraft/class_1657;)Z (handler @ image 18c2a3cb0, runtime 6ffff3eb3cb0) =====

void FUN_18c2a3cb0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c2a3d0b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e2fb30 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLv (Lnet/minecraft/class_1657;)Z (handler @ image 18c1fd700, runtime 6ffff3e0d700) =====

void FUN_18c1fd700(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c1fd7ee did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e099c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fo; aLw (Lnet/minecraft/class_1657;)Z (handler @ image 18c205b70, runtime 6ffff3e15b70) =====

void FUN_18c205b70(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x12985,0x2f5);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018c232b5c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181e11bf8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



