// ===== Lsixtwo/mD; _1d94db85ccab5c13812e40ab2a4b4f49 ()V (handler @ image 1870cb630, runtime 6fffeecdb630) =====

void FUN_1870cb630(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001870cb70c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180aff610 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mD; cnA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1870c8b70, runtime 6fffeecd8b70) =====

void FUN_1870c8b70(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001870c8bed did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180afe720 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mD; cnw (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 187096130, runtime 6fffeeca6130) =====

undefined8 FUN_187096130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/mD; cnx ([B)Ljava/lang/String; (handler @ image 1870961c0, runtime 6fffeeca61c0) =====

void FUN_1870961c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000187096260 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180af65a0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/mD; cny (IJ)Ljava/lang/String; (handler @ image 1870c0ed0, runtime 6fffeecd0ed0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1870c0ed0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uRam000000018317bd48 = func_0x0001870c7bf0(uRam000000018317bf50 ^ 0x4a4f6b1eab88e51d);
  uVar3 = uRam000000018317bd48 >> 1 | uRam000000018317bd48;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam000000018317bd48 ^ 0x2b1d335b59792718 ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4;
  uRam000000018317c2b0 = (uRam000000018317c2b0 ^ uVar3) + 0x2bbfbbfbff7db778 ^ 0xefa76bc2b73b6bf2;
  uRam000000018317c228 = (uRam000000018317c228 * 0x63536e8f87027653 ^ uRam000000018317c2b0) + uVar3;
  uRam000000018317bd20 = uRam000000018317c228 ^ uRam000000018317c2b0;
  uRam000000018317c028 = 0x2bbfbbfbff7db778;
  uVar3 = (~uRam000000018317c240 + 0x2bfb5e0febfeed35) *
          ((uRam000000018317be50 ^ 0x4039ac517b8e20af) +
          (uRam000000018317be50 & 0x4039ac517b8e20af) * 2);
  uVar3 = (uVar3 | uRam000000018317c140) + (uVar3 & uRam000000018317c140);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018317be28 =
       func_0x0001870c7bf0((uVar3 | 0x6bc2f25e9070cd9b) + (uVar3 & 0x6bc2f25e9070cd9b));
  uVar3 = (uRam000000018317be28 ^ 0x6bfbfe5ffffee000) >> 0xc & 0x7ffffffffffff;
  uVar5 = uVar3 - ((uRam000000018317be28 ^ 0x6bfbfe5ffffee000) >> 0xd & 0x1555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  uRam000000018317bde0 = (uRam000000018317bde0 ^ uVar3) + 0x6bc2f25e1452eebe ^ 0x1be7620fc4d0c22;
  uRam000000018317c088 = (uRam000000018317c088 * -0x32555c86caf44c8d ^ uRam000000018317bde0) + uVar3
  ;
  uRam000000018317c260 = uRam000000018317c088 ^ uRam000000018317bde0;
  uRam000000018317c120 = 0x6bc2f25e1452eebe;
  uVar3 = (uRam000000018317bfc0 ^ _UNK_180afe010) + uRam000000018317c2a0 + 0x84225cda;
  uVar5 = (uRam000000018317c2a0 ^ _UNK_180afe018) + uRam000000018317bfc0 + 0x947f05be01d708c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317bfc0 ^ _UNK_180afe010;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018317c2a0 ^ _UNK_180afe018;
  uRam000000018317be48 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018317bfc0 + 0x947f05be01d708c0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317c2a0 + 0x84225cda));
  uVar3 = uRam000000018317be48 ^ 0x947f05be01d77fff;
  uRam000000018317beb8 = uRam000000018317c0a8 ^ uVar3 ^ 0x947f05be01d788bf;
  uRam000000018317bd98 = (uRam000000018317bd98 ^ uVar3) + 0x947f05be01d788bf ^ 0x3d9dcc3befe76952;
  uRam000000018317bec8 = (uRam000000018317bec8 * 0x6eb9773c6283af9b ^ uRam000000018317bd98) + uVar3;
  uRam000000018317be38 = uRam000000018317bec8 ^ uRam000000018317bd98;
  uRam000000018317c280 = 0x947f05be01d788bf;
  uRam000000018317c148 = func_0x0001870c7bf0(uRam000000018317c2e8 ^ 0x98bc8ce42500c2da);
  uVar5 = uRam000000018317c148 ^ 0x419425214aaa78c0;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar5;
  uRam000000018317bdd8 = uRam000000018317bf30 ^ uVar5 ^ 0x7fff;
  uRam000000018317beb0 = (uRam000000018317beb0 ^ uVar5) + 0x7fff ^ 0x60fcafe38163f527;
  uRam000000018317bf70 = (uRam000000018317bf70 * -0x410a2230088e11f ^ uRam000000018317beb0) + uVar5;
  uRam000000018317c2e0 = uRam000000018317bf70 ^ uRam000000018317beb0;
  uRam000000018317bda8 = 0x7fff;
  uVar3 = (~uRam000000018317c108 + 0x7ab2a58bf2ab7e3d) *
          ((uRam000000018317bee0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018317bee0 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018317c288) + (uVar3 & uRam000000018317c288);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018317c258 =
       func_0x0001870c7bf0((uVar3 | 0x7ab2a58b76895d19) + (uVar3 & 0x7ab2a58b76895d19));
  uVar3 = (uRam000000018317c258 & 0xffffffff) * (_UNK_180afe020 & 0xffffffff) +
          ((ulonglong)_UNK_180afe030 * (uRam000000018317c258 & 0xffffffff) +
           (uRam000000018317c258 >> 0x20) * (_UNK_180afe020 & 0xffffffff) << 0x20) &
          0x7fffffffffffffff;
  uRam000000018317bd60 = (uRam000000018317bd60 ^ uVar3) + 0x854d5a740d5481c4 ^ 0xa69e7580ac635ded;
  uRam000000018317be58 = (uRam000000018317be58 * 0x59d9a76f32b50f91 ^ uRam000000018317bd60) + uVar3;
  uRam000000018317c090 = uRam000000018317be58 ^ uRam000000018317bd60;
  uRam000000018317c010 = 0x854d5a740d5481c4;
  uVar3 = (~uRam000000018317c118 + 0x854d5a740d5481c5) *
          ((uRam000000018317c080 ^ 0x7ab2a58b7689dd1e) +
          (uRam000000018317c080 & 0x7ab2a58b7689dd1e) * 2);
  uVar3 = (uVar3 | uRam000000018317bd78) + (uVar3 & uRam000000018317bd78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018317c240 =
       func_0x0001870c7bf0((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar3 = uRam000000018317c240 * 0x493583163eb9160f;
  uRam000000018317bd18 = uRam000000018317bf88 ^ uVar3 ^ 0x7fff;
  uRam000000018317bff8 = (uRam000000018317bff8 ^ uVar3) + 0x7fff ^ 0x7e7450451325ce65;
  uRam000000018317bed8 = (uRam000000018317bed8 * 0x6762433e768f5947 ^ uRam000000018317bff8) + uVar3;
  uRam000000018317c0b0 = uRam000000018317bed8 ^ uRam000000018317bff8;
  uRam000000018317c040 = 0x7fff;
  uRam000000018317bde0 = func_0x0001870c7bf0(lRam000000018317bdc8 + 0xb6083127aa9cb39aU ^ 0x6e);
  uVar3 = uRam000000018317bde0 >> 1 | uRam000000018317bde0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018317bde0;
  uRam000000018317c2c0 = (uRam000000018317c2c0 ^ uVar3) + 0x44ce43a55311d4b0 ^ 0xca743958a6c65121;
  uRam000000018317c0a0 = (uRam000000018317c0a0 * 0x210dbc891e55106b ^ uRam000000018317c2c0) + uVar3;
  uRam000000018317c0e8 = uRam000000018317c0a0 ^ uRam000000018317c2c0;
  uRam000000018317bef8 = 0x44ce43a55311d4b0;
  uRam000000018317c2f0 = func_0x0001870c7bf0(lRam000000018317c060 + 0xa4f65ce9a2c6f33fU ^ 0xe);
  uVar3 = ((uRam000000018317c2f0 ^ 0x78484338a44fbb10) << 7 |
          (uRam000000018317c2f0 ^ 0x78484338a44fbb10) >> 0x39) ^ 0x2bbfbbfbff7db778;
  uRam000000018317c150 = uRam000000018317bdb8 ^ uVar3 ^ 0x9782ae5a13d0a636;
  uRam000000018317bf58 = (uRam000000018317bf58 ^ uVar3) + 0x9782ae5a13d0a636 ^ 0x2145141eb83ac05b;
  uRam000000018317c110 = (uRam000000018317c110 * 0x4037a36138377e2b ^ uRam000000018317bf58) + uVar3;
  uRam000000018317c1c0 = uRam000000018317c110 ^ uRam000000018317bf58;
  uRam000000018317bf38 = 0x9782ae5a13d0a636;
  uRam000000018317c158 = func_0x0001870c7bf0(uRam000000018317bf90 + 0x10ca17c06edc5bec ^ 0x45);
  uVar3 = uRam000000018317c158 - (uRam000000018317c158 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018317c158;
  uRam000000018317be80 = uRam000000018317c200 ^ uVar3 ^ 0x9782ae5a13d0a636;
  uRam000000018317be70 = (uRam000000018317be70 ^ uVar3) + 0x9782ae5a13d0a636 ^ 0x8a5e0744ea26f8b9;
  uRam000000018317bd28 = (uRam000000018317bd28 * -0x5d48429f71d263f3 ^ uRam000000018317be70) + uVar3
  ;
  uRam000000018317be70 = uRam000000018317bd28 ^ uRam000000018317be70;
  uRam000000018317bf40 = 0x9782ae5a13d0a636;
  uRam000000018317bd20 = func_0x0001870c7bf0(uRam000000018317be98 + 0xffe0ff8425001dff ^ 0xc9);
  uRam000000018317bfb8 = uRam000000018317bfb8 ^ uRam000000018317bd20 ^ 0x30f808ebbf10a0ac;
  uRam000000018317c160 =
       (uRam000000018317c160 * -0x6ce832fb6fa04e17 ^ uRam000000018317bfb8) + uRam000000018317bd20;
  uRam000000018317c200 = uRam000000018317c160 ^ uRam000000018317bfb8;
  uRam000000018317c230 = 0;
  uVar3 = (uRam000000018317bff0 ^ 0x84225cda) + uRam000000018317c1d0 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317bff0 ^ 0x84225cda;
  uVar5 = ((uRam000000018317c1d0 + uRam000000018317bff0) * 0x2000 |
          uRam000000018317c1d0 + uRam000000018317bff0 >> 0x33) ^ uRam000000018317c1d0;
  uRam000000018317c1d8 = uRam000000018317bd20;
  uRam000000018317c1b0 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018317bff0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317c1d0 + 0x84225cda));
  uVar3 = uRam000000018317c1b0 - (uRam000000018317c1b0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = (uint)bVar1 + (uint)bVar1 ^ uRam000000018317c1b0;
  uRam000000018317bd88 = uRam000000018317c030 ^ uVar3 ^ 0x7fff;
  uRam000000018317bf20 = (uRam000000018317bf20 ^ uVar3) + 0x7fff ^ 0x83f87d847926a525;
  uRam000000018317be00 = (uRam000000018317be00 * 0xb5821646d513d71 ^ uRam000000018317bf20) + uVar3;
  uRam000000018317c100 = uRam000000018317be00 ^ uRam000000018317bf20;
  uRam000000018317bd38 = 0x7fff;
  uVar3 = func_0x0001870c7bf0(uRam000000018317bf40 + 0xfc29407c5dbb60ab ^ 10);
  uRam000000018317bdf8 =
       (uVar3 ^ ~uVar3 & 0x2bbfbbfbff7db778) + 0xd440440400824887 ^ 0xd4a6b1fd65a7b2c;
  uRam000000018317c0d0 =
       (uRam000000018317c0d0 * -0x3e0af662e7237b4d ^ uRam000000018317bdf8) +
       (~uVar3 & 0x2bbfbbfbff7db778);
  uRam000000018317be38 = uRam000000018317c0d0 ^ uRam000000018317bdf8;
  uRam000000018317bd88 = 0xd440440400824887;
  uVar3 = (~uRam000000018317c1c8 + 0xd440440400824888) *
          ((uRam000000018317be18 ^ 0x2bbfbbfb7b5f945d) +
          (uRam000000018317be18 & 0x2bbfbbfb7b5f945d) * 2);
  uVar3 = (uVar3 | uRam000000018317bd48) + (uVar3 & uRam000000018317bd48);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018317c008 =
       func_0x0001870c7bf0((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uVar3 = (~uRam000000018317c008 ^ 0xd440440400824887) & 0x7fffffffffffffff;
  uRam000000018317c0c8 = uRam000000018317c0c8 ^ uVar3 ^ 0xa6f6d76805b3dc6b;
  uRam000000018317bec8 = (uRam000000018317bec8 * 0x1ac2c7c7aba5d4f1 ^ uRam000000018317c0c8) + uVar3;
  uRam000000018317bf20 = uRam000000018317bec8 ^ uRam000000018317c0c8;
  uRam000000018317be20 = 0;
  uRam000000018317c088 = func_0x0001870c7bf0(lRam000000018317c290 + 0xffdf007c24ffe1ffU ^ 0xd5);
  uVar3 = (uRam000000018317c088 ^ 0xec6ad194aaa85240) & 0x7fffffffffffffff;
  uRam000000018317bd88 = uRam000000018317bd88 ^ uVar3 ^ 0xffcf43b9174f6920;
  uRam000000018317c138 = (uRam000000018317c138 * 0x6381b98920d6ea95 ^ uRam000000018317bd88) + uVar3;
  uRam000000018317c210 = uRam000000018317c138 ^ uRam000000018317bd88;
  uRam000000018317be98 = 0;
  uVar3 = (uRam000000018317c0b8 ^ 0x84225cda) + uRam000000018317bf88 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317c0b8 ^ 0x84225cda;
  uVar5 = ((uRam000000018317bf88 + uRam000000018317c0b8) * 0x2000 |
          uRam000000018317bf88 + uRam000000018317c0b8 >> 0x33) ^ uRam000000018317bf88;
  uRam000000018317bef0 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018317c0b8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317bf88 + 0x84225cda));
  uVar3 = uRam000000018317bef0 - (uRam000000018317bef0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018317bef0;
  uRam000000018317bf10 = uRam000000018317c1b0 ^ uVar3 ^ 0x7fff;
  uRam000000018317bf70 = (uRam000000018317bf70 ^ uVar3) + 0x7fff ^ 0x56cbbf22982d5125;
  uRam000000018317bec0 = (uRam000000018317bec0 * 0x63dabf2a3fca6655 ^ uRam000000018317bf70) + uVar3;
  uRam000000018317c260 = uRam000000018317bec0 ^ uRam000000018317bf70;
  uRam000000018317c2f8 = 0x7fff;
  uVar3 = (uRam000000018317c260 ^ _UNK_180afe040) + uRam000000018317bef0 + 0x49026e18;
  uVar5 = (uRam000000018317bef0 ^ _UNK_180afe048) + uRam000000018317c260 + 0xe2febeb6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317c260 ^ _UNK_180afe040;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018317bef0 ^ _UNK_180afe048;
  param_3 = param_4 & 0x7fff ^ param_3;
  uRam000000018317c248 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018317c260 + 0xe2febeb6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317bef0 + 0x49026e18));
  uRam000000018317c1a0 =
       (uRam000000018317c1a0 ^ uRam000000018317c248 ^ 0xcd204d3d) + 0xeffeffbf ^ 0x706b95593424c9b0;
  uRam000000018317c1e0 =
       (uRam000000018317c1e0 * -0x726fbbf2ef13c85b ^ uRam000000018317c1a0) +
       (uRam000000018317c248 ^ 0xcd204d3d);
  uRam000000018317bd88 = uRam000000018317c1e0 ^ uRam000000018317c1a0;
  uRam000000018317be20 = 0xeffeffbf;
  uVar3 = (uRam000000018317c178 ^ _UNK_180afe050) + uRam000000018317c260 + 0x43ea0505;
  uVar5 = (uRam000000018317c260 ^ _UNK_180afe058) + uRam000000018317c178 + 0xc3d684c5;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317c178 ^ _UNK_180afe050;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018317c260 ^ _UNK_180afe058;
  uRam000000018317c210 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018317c178 + 0xc3d684c5) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317c260 + 0x43ea0505));
  uVar3 = (uRam000000018317c210 & 0x1ffffffffffffff) << 6 | uRam000000018317c210 >> 0x3a;
  uRam000000018317c160 = (uRam000000018317c160 ^ uVar3) + 0x41ea2e5 ^ 0xcb29577e784a1821;
  uRam000000018317be10 = (uRam000000018317be10 * -0x7e9d2e40b384834d ^ uRam000000018317c160) + uVar3
  ;
  uRam000000018317c0e0 = uRam000000018317be10 ^ uRam000000018317c160;
  uRam000000018317bf38 = 0x41ea2e5;
  uRam000000018317c028 = func_0x0001870c7bf0(uRam000000018317bf18 ^ 0xff6d0082ea00111a);
  uRam000000018317bd40 =
       (uRam000000018317bd40 ^ uRam000000018317c028) - 0x730de3b ^ 0x49bfdc8893c59b56;
  uRam000000018317be28 =
       (uRam000000018317be28 * 0x5449116e9187aa6d ^ uRam000000018317bd40) + uRam000000018317c028;
  uRam000000018317c008 = uRam000000018317be28 ^ uRam000000018317bd40;
  uRam000000018317c2a0 = 0xf8cf21c5;
  uRam000000018317c110 = func_0x0001870c7bf0(uRam000000018317c090 + 0x330082730011ff ^ 200);
  uVar3 = (uRam000000018317c110 & 0xfffffffffffff800) << 0x1f | uRam000000018317c110 >> 0x21;
  uRam000000018317c008 = uRam000000018317bf40 ^ uVar3 ^ 0x730decc;
  uRam000000018317c228 = (uRam000000018317c228 ^ uVar3) + 0x730decc ^ 0x258ae5a8c8f69bb6;
  uRam000000018317c130 = (uRam000000018317c130 * 0x7ca9f7a9ced9fd7 ^ uRam000000018317c228) + uVar3;
  uRam000000018317bda0 = uRam000000018317c130 ^ uRam000000018317c228;
  uRam000000018317c1d0 = uRam000000018317bdb0 ^ 0x730decc;
  uRam000000018317bd50 = 0x730decc;
  uVar3 = (~uRam000000018317c120 + 0x75aa3c01) *
          ((uRam000000018317c088 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018317c088 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018317c170) + (uVar3 & uRam000000018317c170);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018317bda0 =
       func_0x0001870c7bf0((uVar3 | 0xf1881f25) + (ulonglong)((uint)uVar3 & 0xf1881f25));
  uRam000000018317be90 =
       (uRam000000018317be90 ^ uRam000000018317c130) - 0x75aa3c00 ^ 0x2275f00e47281806;
  uRam000000018317c188 =
       (uRam000000018317c188 * 0x158059d22debe33 ^ uRam000000018317be90) + uRam000000018317c130;
  uRam000000018317bf80 = uRam000000018317c188 ^ uRam000000018317be90;
  uRam000000018317c150 = 0x8a55c400;
  uVar3 = (uRam000000018317be60 ^ _UNK_180afe060) + uRam000000018317c198 + 0x842223b4;
  uVar5 = (uRam000000018317c198 ^ _UNK_180afe068) + uRam000000018317be60 + 0x75aa3c00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317be60 ^ _UNK_180afe060;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018317c198 ^ _UNK_180afe068;
  uRam000000018317be30 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018317be60 + 0x75aa3c00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317c198 + 0x842223b4));
  uVar3 = (ulonglong)(~(uint)uRam000000018317be30 & 0x91);
  uRam000000018317bd98 = uRam000000018317c110 ^ uVar3 ^ 0x75aa3c91;
  uRam000000018317bed0 = (uRam000000018317bed0 ^ uVar3) + 0x75aa3c91 ^ 0x31f199091e8528b;
  uRam000000018317bd38 = (uRam000000018317bd38 * 0xd9650512e7ba469 ^ uRam000000018317bed0) + uVar3;
  uRam000000018317c088 = uRam000000018317bd38 ^ uRam000000018317bed0;
  uRam000000018317be40 = 0x75aa3c91;
  uVar3 = (uRam000000018317bdb8 ^ _UNK_180afe070) + uRam000000018317c208 + 0xf1881fb4;
  uVar5 = (uRam000000018317c208 ^ _UNK_180afe078) + uRam000000018317bdb8 + 0x8a55c400;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317bdb8 ^ _UNK_180afe070;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018317c208 ^ _UNK_180afe078;
  uRam000000018317c020 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018317bdb8 + 0x8a55c400) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317c208 + 0xf1881fb4));
  uVar3 = (uRam000000018317c020 ^ 0x3f9530429c840400) * -0x34e085f5648ef193;
  uRam000000018317bff0 = uRam000000018317c070 ^ uVar3 ^ 0x100000091;
  uRam000000018317c238 = (uRam000000018317c238 ^ uVar3) + 0x100000091 ^ 0xc8c82690187dd3e5;
  uRam000000018317bd80 = (uRam000000018317bd80 * 0x7eede5fb839f8509 ^ uRam000000018317c238) + uVar3;
  uRam000000018317c040 = uRam000000018317bd80 ^ uRam000000018317c238;
  uRam000000018317c048 = 0x91;
  uVar3 = (~uRam000000018317c2d0 + 0x377a1861) *
          ((uRam000000018317bdd8 ^ 0x842223b4) +
          (ulonglong)((uint)uRam000000018317bdd8 & 0x842223b4) * 2);
  uVar3 = (uVar3 | uRam000000018317bff8) + (uVar3 & uRam000000018317bff8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018317bd30 =
       func_0x0001870c7bf0((uVar3 | 0xb3583bd4) + (ulonglong)((uint)uVar3 & 0xb3583bd4));
  uVar3 = uRam000000018317bd30 - (uRam000000018317bd30 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018317bd30 ^ 0x91;
  uRam000000018317bd70 = uRam000000018317c170 ^ uVar3 ^ 0x377a18f1;
  uRam000000018317be90 = (uRam000000018317be90 ^ uVar3) + 0x377a18f1 ^ 0x6237769e1e55fa14;
  uRam000000018317bdf8 = (uRam000000018317bdf8 * 0x79a1bb1fb02854b7 ^ uRam000000018317be90) + uVar3;
  uRam000000018317bd60 = uRam000000018317bdf8 ^ uRam000000018317be90;
  lRam000000018317c290 = 0x377a18f1;
  uVar3 = (uRam000000018317bf20 ^ _UNK_180afe080) + uRam000000018317be98 + 0xb3583bd4;
  uVar5 = (uRam000000018317be98 ^ _UNK_180afe088) + uRam000000018317bf20 + 0xc885e7a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317bf20 ^ _UNK_180afe080;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018317be98 ^ _UNK_180afe088;
  uRam000000018317c230 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018317bf20 + 0xc885e7a0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317be98 + 0xb3583bd4));
  uVar5 = _UNK_180afe098;
  uVar3 = _UNK_180afe090;
  uVar4 = uRam000000018317c230 & 0x1ffffffffffffffc;
  uRam000000018317c2f8 = uRam000000018317bdf0 ^ uVar4 ^ 0x100000091;
  uRam000000018317bfa8 = (uRam000000018317bfa8 ^ uVar4) + 0x100000091 ^ 0x5a81179e130df911;
  uRam000000018317c250 = (uRam000000018317c250 * -0x2a32ff3374e36c15 ^ uRam000000018317bfa8) + uVar4
  ;
  uRam000000018317bfd8 = uRam000000018317c250 ^ uRam000000018317bfa8;
  uRam000000018317bfb0 = 0x91;
  uVar4 = (uRam000000018317bdf8 ^ _UNK_180afe090) + uRam000000018317bfd8 + 0x6bdcdc9a;
  uVar7 = (uRam000000018317bfd8 ^ _UNK_180afe098) + uRam000000018317bdf8 + 0x41ea2e5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018317bdf8 ^ _UNK_180afe090;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018317bfd8 ^ _UNK_180afe098;
  uRam000000018317bff0 =
       func_0x0001870c7bf0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018317bdf8 + 0x41ea2e5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018317bfd8 + 0x6bdcdc9a));
  uVar7 = uRam000000018317bff0 ^ 0x3dcb4970153a3db;
  uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar7;
  uRam000000018317c168 = uRam000000018317bef0 ^ uVar7 ^ 0xf41da2a4;
  uRam000000018317c188 = (uRam000000018317c188 ^ uVar7) + 0xf41da2a4 ^ 0xcf5725db97940bac;
  uRam000000018317c0b8 = (uRam000000018317c0b8 * 0x2600ec0fbba0bcd7 ^ uRam000000018317c188) + uVar7;
  uRam000000018317bd20 = uRam000000018317c0b8 ^ uRam000000018317c188;
  uRam000000018317c1c8 = 0xf41da2a4;
  uVar4 = (uRam000000018317bf80 ^ uVar3) + uRam000000018317bf50 + 0x6bdcdc9a;
  uVar7 = (uRam000000018317bf50 ^ uVar5) + uRam000000018317bf80 + 0x41ea2e5;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018317bf80 ^ uVar3;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018317bf50 ^ uVar5;
  uRam000000018317bfc0 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018317bf80 + 0x41ea2e5) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317bf50 + 0x6bdcdc9a));
  uRam000000018317c0f0 =
       (uRam000000018317c0f0 ^ uRam000000018317bfc0 ^ 0x41ea2e5) + 0x41ea2a5 ^ 0x78a96a9c3c65f527;
  uRam000000018317c0e0 =
       (uRam000000018317c0e0 * -0x5d40280c822ebe2d ^ uRam000000018317c0f0) +
       (uRam000000018317bfc0 ^ 0x41ea2e5);
  uRam000000018317c038 = uRam000000018317c0e0 ^ uRam000000018317c0f0;
  uRam000000018317c2d8 = 0x41ea2a5;
  uRam000000018317bd00 = func_0x0001870c7bf0(uRam000000018317be20 ^ 0x70026ecff587d);
  uVar3 = (uRam000000018317bd00 ^ 0xebfd5d5a) * -0x2e061763f36dad31;
  uRam000000018317bf90 = uRam000000018317bfc8 ^ uVar3 ^ 0xf41da2a4;
  uRam000000018317bd60 = (uRam000000018317bd60 ^ uVar3) + 0xf41da2a4 ^ 0x7881601e198d31b5;
  uRam000000018317bd78 = (uRam000000018317bd78 * -0x44fe49560077527f ^ uRam000000018317bd60) + uVar3
  ;
  uRam000000018317bf70 = uRam000000018317bd78 ^ uRam000000018317bd60;
  uRam000000018317c100 = 0xf41da2a4;
  uVar3 = ((uRam000000018317bf20 ^ 0x842223b4) +
          (ulonglong)((uint)uRam000000018317bf20 & 0x842223b4) * 2) * -uRam000000018317c2a0;
  uVar3 = (uVar3 | uRam000000018317c148) + (uVar3 & uRam000000018317c148);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018317bd38 =
       func_0x0001870c7bf0((uVar3 | 0x842223b4) + (ulonglong)((uint)uVar3 & 0x842223b4));
  uVar3 = uRam000000018317bd38 & 0xfffffffffffffc00;
  uRam000000018317c0d0 = uRam000000018317be00 ^ uVar3 ^ 0x91;
  uRam000000018317c0c0 = (uRam000000018317c0c0 ^ uVar3) + 0x91 ^ 0xb59e67337c43adfd;
  uRam000000018317c200 = (uRam000000018317c200 * -0x1af612a04c202945 ^ uRam000000018317c0c0) + uVar3
  ;
  uRam000000018317bdd8 = uRam000000018317c200 ^ uRam000000018317c0c0;
  uRam000000018317c090 = 0x91;
  uRam000000018317bee0 = func_0x0001870c7bf0(uRam000000018317c008 ^ 0xffe0ff6c5b00207b);
  uVar3 = uRam000000018317bee0 & 0x7ffffffff ^ 0xffffffff;
  uVar5 = uVar3 >> 1 | uVar3;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar4 = uVar5 >> 4 | uVar5;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar5 = uVar5 >> 0x20 | uVar4 >> 0x10 | uVar4;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar3;
  uRam000000018317be20 = (uRam000000018317be20 ^ uVar3) + 0x10010040 ^ 0x8d0e3ac7504f36bd;
  uRam000000018317c110 = (uRam000000018317c110 * -0x262504295ad2667 ^ uRam000000018317be20) + uVar3;
  uRam000000018317bda0 = uRam000000018317c110 ^ uRam000000018317be20;
  lRam000000018317c290 = 0x10010040;
  uVar3 = (uRam000000018317c248 ^ _UNK_180afe0a0) + uRam000000018317c0f8 + 0x6bdcdc9a;
  uVar5 = (uRam000000018317c0f8 ^ _UNK_180afe0a8) + uRam000000018317c248 + 0x10010040;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317c248 ^ _UNK_180afe0a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018317c0f8 ^ _UNK_180afe0a8;
  uRam000000018317bd20 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018317c248 + 0x10010040) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317c0f8 + 0x6bdcdc9a));
  uRam000000018317c2f0 = uRam000000018317c2f0 ^ uRam000000018317bd20 >> 1 ^ 0x17fde9415e340518;
  uRam000000018317bf00 =
       (uRam000000018317bf00 * 0x441b52d2b7cccc33 ^ uRam000000018317c2f0) +
       (uRam000000018317bd20 >> 1);
  uRam000000018317c2b8 = uRam000000018317bf00 ^ uRam000000018317c2f0;
  uRam000000018317c168 = 0;
  uVar3 = (uRam000000018317c1f0 ^ 0x842223b4) + uRam000000018317be10 + 0x842223b4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018317c1f0 ^ 0x842223b4;
  uVar5 = ((uRam000000018317be10 + uRam000000018317c1f0) * 0x2000 |
          uRam000000018317be10 + uRam000000018317c1f0 >> 0x33) ^ uRam000000018317be10;
  uRam000000018317c050 =
       func_0x0001870c7bf0((uVar5 << 0x1d | uVar5 >> 0x23) - uRam000000018317c1f0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018317be10 + 0x842223b4));
  uVar3 = uRam000000018317c050 >> 1 | uRam000000018317c050;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018317c050;
  uRam000000018317bf48 = uRam000000018317be80 ^ uVar3 ^ 0x91;
  uRam000000018317be80 = (uRam000000018317be80 ^ uVar3) + 0x91 ^ 0xdb7acc4111ecb5fc;
  uRam000000018317bff0 = (uRam000000018317bff0 * -0x5b0c4fb7a3bd4009 ^ uRam000000018317be80) + uVar3
  ;
  uRam000000018317c280 = uRam000000018317bff0 ^ uRam000000018317be80;
  uRam000000018317c198 = 0x91;
  uVar3 = (~uRam000000018317bf98 + 0xcd204d3e) *
          ((uRam000000018317c258 ^ 0x49026e18) +
          (ulonglong)((uint)uRam000000018317c258 & 0x49026e18) * 2);
  uVar3 = (uVar3 | uRam000000018317be18) + (uVar3 & uRam000000018317be18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  lRam000000018317c2c8 =
       func_0x0001870c7bf0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam000000018317c108 =
       uRam000000018317c108 ^ lRam000000018317c2c8 * -0xd4dd3f1e6edb405 ^ 0x4c1540322d47607a;
  uRam000000018317c2e8 =
       (uRam000000018317c2e8 * -0x68035fd551dd3b1 ^ uRam000000018317c108) +
       lRam000000018317c2c8 * -0xd4dd3f1e6edb405;
  uRam000000018317bfd0 = uRam000000018317c2e8 ^ uRam000000018317c108;
  uRam000000018317c090 = 0;
  uRam000000018317beb8 = func_0x0001870c7bf0(uRam000000018317bf48 ^ 0xffdcff8454001d50);
  uVar5 = (uRam000000018317beb8 & 0x7fffffffffffffff) >> 3;
  uVar3 = uVar5 * 8;
  uRam000000018317bd18 = uRam000000018317beb8 ^ uVar3 ^ 0x91;
  uRam000000018317c0d8 = (uVar3 ^ uRam000000018317c0d8) + 0x91 ^ 0x7cb0ec3065b5377e;
  uRam000000018317bfc0 =
       (uRam000000018317bfc0 * -0x18b7f3ff067e5f03 ^ uRam000000018317c0d8) + uVar5 * 8;
  uRam000000018317c1d0 = uRam000000018317c0d8 ^ uRam000000018317bfc0;
  uRam000000018317c1a8 = 0x91;
  uVar5 = (ulonglong)param_3;
  uVar3 = uVar5 ^ 0x84222325 ^ uRam000000018317be00;
  lVar6 = (uVar5 ^ 0x84222325) + uRam000000018317c250;
  uVar4 = uVar3 + lVar6;
  uVar7 = (uRam000000018317c250 ^ 0x91) + uRam000000018317be00 + 0x91;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018317c250 ^ 0x91;
  uRam000000018317c1a8 =
       func_0x0001870c7bf0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018317be00 + 0x91) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar6);
  uVar3 = uVar5 & (uRam000000018317c1a8 ^ _UNK_180afe0b0);
  lVar6 = uVar5 - (param_3 & 0x91) * 2;
  uRam000000018317be60 = (uRam000000018317be60 ^ uVar3) + lVar6 + 0x91 ^ 0xf421828a99a5dbd;
  uRam000000018317bff0 = (uRam000000018317bff0 * -0x5960e304ecbc2b0f ^ uRam000000018317be60) + uVar3
  ;
  uRam000000018317bec8 = uRam000000018317bff0 ^ uRam000000018317be60;
  uRam000000018317c168 = lVar6 + 0x91U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1c7aa,0x472);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001870c333f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180afc688 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mD; cnz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1870c7c80, runtime 6fffeecd7c80) =====

void FUN_1870c7c80(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001870c7cbc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180afe1f0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/mD; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 1870408b0, runtime 6fffeec508b0) =====

void FUN_1870408b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1c7aa,0x472);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018704098f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180adead0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mD; toJson ()Lcom/google/gson/JsonObject; (handler @ image 18705b9f0, runtime 6fffeec6b9f0) =====

void FUN_18705b9f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1c7aa,0x472);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018705bae3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180ae5f80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/mD; toString ()Ljava/lang/String; (handler @ image 18707ee30, runtime 6fffeec8ee30) =====

void FUN_18707ee30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1c7aa,0x472);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018707ef0c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180af0120 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



