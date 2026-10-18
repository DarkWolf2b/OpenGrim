// ===== Lsixtwo/ep; _a30b6b505e7cd15c6b5a9e05f022e45f ()V (handler @ image 18cf878b0, runtime 6ffff4b978b0) =====

void FUN_18cf878b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cf87998 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820f3168 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ep; atX ()Lsixtwo/cC; (handler @ image 18cf77860, runtime 6ffff4b87860) =====

void FUN_18cf77860(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018cf77880 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820efa00 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ep; atY (IJ)I (handler @ image 18cf77a60, runtime 6ffff4b87a60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cf77a60(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uRam0000000183348168 = func_0x00018cf83b00(uRam0000000183348290 + 0xf660d1f1658b12b1 ^ 0xae);
  uVar3 = uRam0000000183348168 << 0x1d | uRam0000000183348168 >> 0x23;
  uRam00000001833482b0 = (uRam00000001833482b0 ^ uVar3) + 0xd7d68c3ffeffb7ef ^ 0x17f20556961600c3;
  uRam0000000183348150 = (uRam0000000183348150 * 0x5a1ca45772b415b1 ^ uRam00000001833482b0) + uVar3;
  uRam00000001833481b0 = uRam0000000183348150 ^ uRam00000001833482b0;
  uRam00000001833482e8 = 0xd7d68c3ffeffb7ef;
  uVar3 = (uRam0000000183348210 ^ _UNK_1820f1970) + uRam00000001833482d0 + 0xecc155db434c718c;
  uVar5 = (uRam00000001833482d0 ^ _UNK_1820f1978) + uRam0000000183348210 + 0xbb989d90ec99ae7;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183348210 ^ _UNK_1820f1970;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833482d0 ^ _UNK_1820f1978;
  uRam00000001833481c8 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183348210 + 0xbb989d90ec99ae7) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833482d0 + 0xecc155db434c718c));
  uRam00000001833482c0 =
       (uRam00000001833482c0 ^ uRam00000001833481c8) + 0xe778dc02c9a7c84e ^ 0x17845b0c009896ac;
  uRam0000000183348130 =
       (uRam0000000183348130 * -0x7d3ec81aca2e7ddd ^ uRam00000001833482c0) + uRam00000001833481c8;
  uRam0000000183348268 = uRam0000000183348130 ^ uRam00000001833482c0;
  uRam0000000183348200 = 0xe778dc02c9a7c84e;
  uVar3 = (~uRam00000001833482f0 + 0xc68a37d1fbe4b23d) *
          ((uRam00000001833482a0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833482a0 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001833482c0) + (uVar3 & uRam00000001833482c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183348108 =
       func_0x00018cf83b00((uVar3 | 0xc68a37d17fc69119) + (uVar3 & 0xc68a37d17fc69119));
  uRam0000000183348190 =
       (uRam0000000183348190 ^ uRam0000000183348108) + 0x3975c82e041b4dc4 ^ 0x59514685a61bec0d;
  uRam0000000183348250 =
       (uRam0000000183348250 * -0x5f6bdec47c4c3c45 ^ uRam0000000183348190) + uRam0000000183348108;
  uRam0000000183348228 = uRam0000000183348250 ^ uRam0000000183348190;
  uRam00000001833482d8 = 0x3975c82e041b4dc4;
  uVar3 = (uRam0000000183348158 ^ _UNK_1820f1980) + uRam0000000183348198 + 0x84225cda;
  uVar5 = (uRam0000000183348198 ^ _UNK_1820f1988) + uRam0000000183348158 + 0xc68a37d1fbe4b23c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183348158 ^ _UNK_1820f1980;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183348198 ^ _UNK_1820f1988;
  uRam0000000183348198 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183348158 + 0xc68a37d1fbe4b23c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183348198 + 0x84225cda));
  uVar3 = uRam0000000183348198 >> 1 | uRam0000000183348198;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~((uint)uRam0000000183348198 ^
            (0x40 - (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 0x10) & 0x7fff);
  uRam0000000183348190 = uRam00000001833481f0 ^ uVar3 ^ 0xc68a37d1fbe5323b;
  uRam00000001833482d8 = (uRam00000001833482d8 ^ uVar3) + 0xc68a37d1fbe5323b ^ 0x4128318eb19cb2ba;
  uRam0000000183348280 = (uRam0000000183348280 * 0x5ff05de041083f3d ^ uRam00000001833482d8) + uVar3;
  uRam0000000183348218 = uRam0000000183348280 ^ uRam00000001833482d8;
  uRam00000001833481f8 = 0xc68a37d1fbe5323b;
  uRam0000000183348228 = func_0x00018cf83b00(uRam0000000183348150 ^ 0x1d2c6a9a3a6abc15);
  uVar5 = uRam0000000183348228 ^ 0xec9c1dc9f82a0617;
  uVar3 = uVar5 >> 1 | uVar5;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5;
  uRam0000000183348170 = uRam00000001833482c8 ^ uVar5 ^ 0x7fff;
  uRam0000000183348248 = (uRam0000000183348248 ^ uVar5) + 0x7fff ^ 0x96450d01c3e530d5;
  uRam0000000183348110 = (uRam0000000183348110 * -0x474647d483d493b5 ^ uRam0000000183348248) + uVar5
  ;
  uRam00000001833482e8 = uRam0000000183348110 ^ uRam0000000183348248;
  uRam0000000183348290 = 0x7fff;
  uRam0000000183348248 = func_0x00018cf83b00(uRam00000001833482b8 ^ 0x80d70686f6ca2b5a);
  uVar3 = uRam0000000183348248 - (uRam0000000183348248 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183348248;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5;
  uRam0000000183348180 = (uRam0000000183348180 ^ uVar5) + 0x6ff6a07fe20805a2 ^ 0x85876094ab789f92;
  uRam0000000183348178 = (uRam0000000183348178 * -0x2db2d817d845e399 ^ uRam0000000183348180) + uVar5
  ;
  uRam00000001833482f8 = uRam0000000183348178 ^ uRam0000000183348180;
  uRam00000001833482e8 = 0x6ff6a07fe20805a2;
  uVar3 = (uRam00000001833482d0 ^ _UNK_1820f1990) + uRam00000001833481f8 + 0x84225cda;
  uVar5 = (uRam00000001833481f8 ^ _UNK_1820f1998) + uRam00000001833482d0 + 0x90095f801df7fa5e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833482d0 ^ _UNK_1820f1990;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833481f8 ^ _UNK_1820f1998;
  uRam00000001833482a0 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833482d0 + 0x90095f801df7fa5e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833481f8 + 0x84225cda));
  uVar3 = uRam00000001833482a0 << 0x20 | uRam00000001833482a0 >> 0x20;
  uRam0000000183348118 = uRam0000000183348248 ^ uVar3 ^ 0x90095f801df87a5d;
  uRam00000001833481f8 = (uRam00000001833481f8 ^ uVar3) + 0x90095f801df87a5d ^ 0x8353df1db487d899;
  uRam0000000183348130 = (uRam0000000183348130 * 0x217b1519d17ec7b5 ^ uRam00000001833481f8) + uVar3;
  uRam0000000183348168 = uRam0000000183348130 ^ uRam00000001833481f8;
  uRam00000001833481f0 = 0x90095f801df87a5d;
  uRam0000000183348210 = func_0x00018cf83b00(uRam00000001833481f8 + 0xa9b3ab6cda9fbcca ^ 0xec);
  uVar3 = uRam0000000183348210 << 0x30 | uRam0000000183348210 >> 0x10;
  uRam00000001833482f8 = (uRam00000001833482f8 ^ uVar3) + 0xb2525f54169e0ffd ^ 0x17656a5a683039c9;
  uRam00000001833481c8 = (uRam00000001833481c8 * -0x47ca05dedb906dd5 ^ uRam00000001833482f8) + uVar3
  ;
  uRam0000000183348128 = uRam00000001833481c8 ^ uRam00000001833482f8;
  uRam00000001833481e8 = 0xb2525f54169e0ffd;
  uVar3 = (~uRam00000001833481c8 + 0x4dada0abe961f004) *
          ((uRam00000001833482e8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833482e8 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183348138) + (uVar3 & uRam0000000183348138);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183348298 =
       func_0x00018cf83b00((uVar3 | 0x4dada0ab6d43acd9) + (uVar3 & 0x4dada0ab6d43acd9));
  uVar3 = (uRam0000000183348298 ^ 0x4dada0abe961ffff) * 0x7b5555238f39ef3f ^ 0x7fff;
  uRam00000001833482c8 = uRam00000001833482a8 ^ uVar3 ^ 0x4dada0abe9627002;
  uRam00000001833482d8 = (uRam00000001833482d8 ^ uVar3) + 0x4dada0abe9627002 ^ 0x742c726cbe8cdfb9;
  uRam0000000183348240 = (uRam0000000183348240 * -0xafefde3bc697e89 ^ uRam00000001833482d8) + uVar3;
  uRam0000000183348288 = uRam0000000183348240 ^ uRam00000001833482d8;
  uRam00000001833482f8 = 0x4dada0abe9627002;
  uVar3 = (uRam0000000183348208 ^ _UNK_1820f19a0) + uRam0000000183348138 + 0x4dada0ab6d405327;
  uVar5 = (uRam0000000183348138 ^ _UNK_1820f19a8) + uRam0000000183348208 + 0xb2525f54169e0ffd;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183348208 ^ _UNK_1820f19a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183348138 ^ _UNK_1820f19a8;
  uRam00000001833481f0 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183348208 + 0xb2525f54169e0ffd) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183348138 + 0x4dada0ab6d405327));
  uVar3 = ~uRam00000001833481f0 & 0xfffffffffc000000;
  uRam0000000183348120 = uRam0000000183348180 ^ uVar3 ^ 0x7fff;
  uRam0000000183348198 = (uRam0000000183348198 ^ uVar3) + 0x7fff ^ 0xc220e1dc5163be63;
  uRam00000001833482d0 = (uRam00000001833482d0 * 0x2618924c5e063d0f ^ uRam0000000183348198) + uVar3;
  uRam0000000183348130 = uRam00000001833482d0 ^ uRam0000000183348198;
  uRam0000000183348138 = 0x7fff;
  uVar3 = func_0x00018cf83b00(uRam00000001833482b0 ^ 0xdcc3565083d059f4);
  uVar5 = (uVar3 ^ 0xbeffaed11d85c200) & 0xffffffffffffff00;
  uRam00000001833481a0 = uRam0000000183348100 ^ uVar5 ^ 0xbf4f6842c8a7803d;
  uRam00000001833481e8 = (uVar3 ^ uVar5) + 0xbf4f6842c8a7803d ^ 0x6229becbdbf7afff;
  uRam0000000183348100 = (uRam0000000183348100 * 0x48e779e7e68d8f75 ^ uRam00000001833481e8) + uVar5;
  uRam0000000183348150 = uRam0000000183348100 ^ uRam00000001833481e8;
  uRam00000001833481c8 = 0xbf4f6842c8a7803d;
  uVar3 = (uRam00000001833481b0 ^ _UNK_1820f19b0) + uRam00000001833482b8 + 0xd7d68c3f7add94ca;
  uVar5 = (uRam00000001833482b8 ^ _UNK_1820f19b8) + uRam00000001833481b0 + 0xe778dc02c9a7c84e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833481b0 ^ _UNK_1820f19b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833482b8 ^ _UNK_1820f19b8;
  uRam00000001833482e0 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833481b0 + 0xe778dc02c9a7c84e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833482b8 + 0xd7d68c3f7add94ca));
  uRam0000000183348280 =
       (uRam0000000183348280 ^ uRam00000001833482e0 & 0x1ffffffff) + 0xc7508c02c8a7804e ^
       0xbeb17ee816fbd957;
  uRam0000000183348108 =
       (uRam0000000183348108 * 0x36b5967c2c656f9d ^ uRam0000000183348280) +
       (uRam00000001833482e0 & 0x1ffffffff);
  uRam00000001833481e0 = uRam0000000183348108 ^ uRam0000000183348280;
  uRam00000001833481c0 = 0xc7508c02c8a7804e;
  uVar3 = (~uRam0000000183348158 + 0x8ea11805914f009d) *
          ((uRam0000000183348190 ^ 0x30ae503db37a5c84) +
          (uRam0000000183348190 & 0x30ae503db37a5c84) * 2);
  uVar3 = (uVar3 | uRam0000000183348140) + (uVar3 & uRam0000000183348140);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833482c8 =
       func_0x00018cf83b00((uVar3 | 0xbe0f483822355c18) + (uVar3 & 0xbe0f483822355c18));
  uVar5 = uRam00000001833482c8 ^ 0x30ae503d37587fa1;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar5;
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar5;
  uRam0000000183348148 = uRam00000001833482b0 ^ uVar5 ^ 0xbf4f6842c8a7803d;
  uRam0000000183348248 = (uRam0000000183348248 ^ uVar5) + 0xbf4f6842c8a7803d ^ 0xa3d19a29b959abdd;
  uRam0000000183348220 = (uRam0000000183348220 * 0x5ce2eb2bde041889 ^ uRam0000000183348248) + uVar5;
  uRam0000000183348190 = uRam0000000183348220 ^ uRam0000000183348248;
  uRam00000001833482e8 = 0xbf4f6842c8a7803d;
  uVar3 = (uRam0000000183348188 ^ _UNK_1820f19c0) + uRam00000001833481a8 + 0xbf4f68424c85a318;
  uVar5 = (uRam00000001833481a8 ^ _UNK_1820f19c8) + uRam0000000183348188 + 0xbf4f6842c8a7803d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183348188 ^ _UNK_1820f19c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833481a8 ^ _UNK_1820f19c8;
  uRam0000000183348270 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183348188 + 0xbf4f6842c8a7803d) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833481a8 + 0xbf4f68424c85a318));
  uRam00000001833481e8 = (uRam0000000183348270 & 0xffffff) << 0x27 | uRam0000000183348270 >> 0x19;
  uRam0000000183348178 = uRam0000000183348178 ^ uRam00000001833481e8 ^ 0xd80ac320c8123af0;
  uRam0000000183348250 =
       (uRam0000000183348250 * -0x7805d155772a2a87 ^ uRam0000000183348178) + uRam00000001833481e8;
  uRam00000001833482e8 = uRam0000000183348250 ^ uRam0000000183348178;
  uRam00000001833481c0 = 0;
  uVar3 = (uRam00000001833481f8 ^ 0x84225cda) + uRam0000000183348288 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833481f8 ^ 0x84225cda;
  uVar5 = ((uRam0000000183348288 + uRam00000001833481f8) * 0x2000 |
          uRam0000000183348288 + uRam00000001833481f8 >> 0x33) ^ uRam0000000183348288;
  uRam0000000183348258 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) - uRam00000001833481f8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183348288 + 0x84225cda));
  uVar3 = uRam0000000183348258 ^ 0x7fff;
  uRam0000000183348158 = uRam0000000183348190 ^ uVar3 ^ 0x7fff;
  uRam0000000183348208 = (uRam0000000183348208 ^ uVar3) + 0x7fff ^ 0xf81b9790bace8e88;
  uRam0000000183348198 = (uRam0000000183348198 * -0x79e902bbd87c2b2b ^ uRam0000000183348208) + uVar3
  ;
  uRam00000001833481a8 = uRam0000000183348198 ^ uRam0000000183348208;
  uRam00000001833481b0 = uRam0000000183348278 ^ 0x7fff;
  uRam00000001833482f8 = 0x7fff;
  uVar3 = ~uRam0000000183348158 *
          ((uRam00000001833482d0 ^ 0xd7d68c3f7add94ca) +
          (uRam00000001833482d0 & 0x57d68c3f7add94ca) * 2);
  uVar3 = (uVar3 | uRam0000000183348238) + (uVar3 & uRam0000000183348238);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183348218 =
       func_0x00018cf83b00((uVar3 | 0x282973c085226b35) + (uVar3 & 0x282973c085226b35));
  uVar3 = (uRam0000000183348218 & 0x7fffffffffffffff) >> 1 |
          uRam0000000183348218 & 0x7fffffffffffffff;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam0000000183348218 & 0x7fffffffffffffff;
  uRam0000000183348210 = (uRam0000000183348210 ^ uVar3) + 0x282973c001004810 ^ 0xe1cf9a9798bc1109;
  uRam0000000183348238 = (uRam0000000183348238 * 0x9aa5a8b9fc22e91 ^ uRam0000000183348210) + uVar3;
  uRam0000000183348158 = uRam0000000183348238 ^ uRam0000000183348210;
  uRam00000001833482e0 = 0x282973c001004810;
  uVar3 = (uRam00000001833481a0 ^ _UNK_1820f19d0) + uRam00000001833482c8 + 0xd7d68c3f7add94ca;
  uVar5 = (uRam00000001833482c8 ^ _UNK_1820f19d8) + uRam00000001833481a0 + 0x282973c001004810;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833481a0 ^ _UNK_1820f19d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833482c8 ^ _UNK_1820f19d8;
  uRam0000000183348228 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833481a0 + 0x282973c001004810) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833482c8 + 0xd7d68c3f7add94ca));
  uRam00000001833481c8 =
       uRam0000000183348198 ^ uRam0000000183348228 & 0x3fffffffffff ^ 0x22fe7d1f85600f9;
  uRam0000000183348268 =
       (uRam0000000183348268 * -0x4671edc16439647 ^ uRam00000001833481c8) +
       (uRam0000000183348228 & 0x3fffffffffff);
  uRam00000001833481c8 = uRam0000000183348268 ^ uRam00000001833481c8;
  uRam0000000183348198 = 0;
  uRam0000000183348250 = func_0x00018cf83b00(uRam0000000183348160 ^ 0x4bff84aa001da9);
  uVar3 = uRam0000000183348250 & 0xfffffffffffffe00;
  uRam0000000183348258 = uRam00000001833481b0 ^ uVar3 ^ 0x7fff;
  uRam0000000183348158 = (uRam0000000183348158 ^ uVar3) + 0x7fff ^ 0x5b7ce5e6a5595a7f;
  uRam00000001833481a8 = (uRam00000001833481a8 * 0x63cb6d4d08118fd ^ uRam0000000183348158) + uVar3;
  uRam00000001833481f0 = 0x7fff;
  uVar3 = (uRam00000001833482b0 ^ _UNK_1820f19e0) + uRam00000001833482f0 + 0x874604366c4d16ca;
  uVar5 = (uRam00000001833482f0 ^ _UNK_1820f19e8) + uRam00000001833482b0 + 0x87460436e86f35ef;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833482b0 ^ _UNK_1820f19e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833482f0 ^ _UNK_1820f19e8;
  uRam0000000183348220 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001833482b0 + 0x87460436e86f35ef) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833482f0 + 0x874604366c4d16ca));
  uVar3 = uRam0000000183348220 << 0x39 | uRam0000000183348220 >> 7;
  uRam0000000183348228 = uRam0000000183348228 ^ uVar3 ^ 0x2bd087e383cdf8e9;
  uRam00000001833481f0 = (uRam00000001833481f0 * 0x1db1e0baba8d49d9 ^ uRam0000000183348228) + uVar3;
  uRam00000001833481f8 = uRam00000001833481f0 ^ uRam0000000183348228;
  uRam0000000183348270 = 0;
  uVar3 = ((uRam0000000183348118 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183348118 & 0x84225cda) * 2) * -uRam00000001833481a0;
  uVar3 = (uVar3 | uRam00000001833481c8) + (uVar3 & uRam00000001833481c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833482e8 =
       func_0x00018cf83b00((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uRam0000000183348120 = uRam00000001833482d8 ^ uRam00000001833482e8 ^ 0x7fff;
  uRam0000000183348180 = (uRam0000000183348180 ^ uRam00000001833482e8) + 0x7fff ^ 0x745dc9ec5186c039
  ;
  uRam0000000183348208 =
       (uRam0000000183348208 * 0xd20a5af19f1b2c3 ^ uRam0000000183348180) + uRam00000001833482e8;
  uRam0000000183348238 = uRam0000000183348208 ^ uRam0000000183348180;
  uRam0000000183348228 = 0x7fff;
  uVar3 = (~uRam0000000183348160 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183348220) +
          ((param_4 ^ 0x84222325) & uRam0000000183348220) * 2);
  uVar3 = (uVar3 | uRam00000001833481f0) + (uVar3 & uRam00000001833481f0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183348130 =
       func_0x00018cf83b00((param_4 ^ 0x84225cda | uVar3) + (uVar3 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uRam00000001833481f8 = (ulonglong)uVar2;
  uRam0000000183348280 =
       (uRam0000000183348280 ^ uRam0000000183348130 & 0x3ffffffff) + uRam00000001833481f8 ^
       0xb49b0808dc2d9f0a;
  uRam0000000183348270 =
       (uRam0000000183348270 * -0x3a4fd9003741756b ^ uRam0000000183348280) +
       (uRam0000000183348130 & 0x3ffffffff);
  uRam0000000183348250 = uRam0000000183348270 ^ uRam0000000183348280;
  uVar3 = (uRam0000000183348260 ^ _UNK_1820f19f0) + uRam0000000183348150 + 0x1cbd1832;
  uVar5 = (uRam0000000183348150 ^ _UNK_1820f19f8) + uRam0000000183348260 + 0x9b29a570;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183348260 ^ _UNK_1820f19f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183348150 ^ _UNK_1820f19f8;
  uVar2 = uVar2 ^ param_3;
  uRam0000000183348128 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183348260 + 0x9b29a570) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183348150 + 0x1cbd1832));
  uVar3 = (ulonglong)(((uint)uRam0000000183348128 ^ 0x961a07) & 0x989f3b17);
  uRam0000000183348140 = (uRam0000000183348140 ^ uVar3) + 0x9bbfbf77 ^ 0x982d3891990241ed;
  uRam0000000183348108 = (uRam0000000183348108 * -0x723070cfae6fde23 ^ uRam0000000183348140) + uVar3
  ;
  uRam00000001833482e0 = uRam0000000183348108 ^ uRam0000000183348140;
  uRam0000000183348260 = 0x9bbfbf77;
  uVar3 = (~uRam00000001833481b0 + 0x2bc70718) *
          ((uRam0000000183348180 ^ 0x2ead151b) +
          (ulonglong)((uint)uRam0000000183348180 & 0x2ead151b) * 2);
  uVar3 = (uVar3 | uRam0000000183348110) + (uVar3 & uRam0000000183348110);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183348218 =
       func_0x00018cf83b00((uVar3 | 0x56a120c) + (ulonglong)((uint)uVar3 & 0x56a120c));
  uRam00000001833481a0 =
       (uRam00000001833481a0 ^ uRam0000000183348218) + 0x81483129 ^ 0x1028448915a3ea20;
  uRam00000001833481b0 =
       (uRam00000001833481b0 * -0x2bbafa39de182fd1 ^ uRam00000001833481a0) + uRam0000000183348218;
  uRam0000000183348190 = uRam00000001833481b0 ^ uRam00000001833481a0;
  uRam00000001833481c8 = 0x81483129;
  uVar3 = (uRam0000000183348110 ^ _UNK_1820f1a00) + uRam0000000183348120 + 0x84222325;
  uVar5 = (uRam0000000183348120 ^ _UNK_1820f1a08) + uRam0000000183348110 + 0x65d333c3;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183348110 ^ _UNK_1820f1a00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183348120 ^ _UNK_1820f1a08;
  uRam0000000183348228 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183348110 + 0x65d333c3) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183348120 + 0x84222325));
  uRam00000001833482c8 =
       (uRam00000001833482c8 ^ uRam0000000183348228 * 0x29d5c5e333277c9) - 0x65d333c3 ^
       0x7b1955a5e2f73b46;
  uRam0000000183348270 =
       (uRam0000000183348270 * 0x71fa3daf10afa4e7 ^ uRam00000001833482c8) +
       uRam0000000183348228 * 0x29d5c5e333277c9;
  uRam00000001833482f8 = uRam0000000183348270 ^ uRam00000001833482c8;
  uRam00000001833481e8 = 0x9a2ccc3d;
  uVar3 = (~uRam00000001833482b0 + 0x9a2ccc3e) *
          ((uRam00000001833482a8 ^ 0xe1f18e08) +
          (ulonglong)((uint)uRam00000001833482a8 & 0xe1f18e08) * 2);
  uVar3 = (uVar3 | uRam00000001833482a0) + (uVar3 & uRam00000001833482a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833481c8 =
       func_0x00018cf83b00((uVar3 | 0x7bdd4235) + (ulonglong)((uint)uVar3 & 0x7bdd4235));
  uVar3 = (ulonglong)(((uint)uRam00000001833481c8 ^ 0x45000d29) & 0x65d3ad2d);
  uRam0000000183348250 = uRam0000000183348250 ^ uVar3 ^ 0x10000796a;
  uRam0000000183348170 = (uRam0000000183348170 ^ uVar3) + 0x10000796a ^ 0xd465dae782e26b83;
  uRam0000000183348178 = (uRam0000000183348178 * -0x6a871f37fdfed7d5 ^ uRam0000000183348170) + uVar3
  ;
  uRam0000000183348160 = uRam0000000183348178 ^ uRam0000000183348170;
  uRam00000001833481f0 = 0x796a;
  uVar3 = (uRam0000000183348120 ^ _UNK_1820f1a10) + uRam0000000183348290 + 0x84222325;
  uVar5 = (uRam0000000183348290 ^ _UNK_1820f1a18) + uRam0000000183348120 + 0x39b6de08;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183348120 ^ _UNK_1820f1a10;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183348290 ^ _UNK_1820f1a18;
  uRam00000001833481c0 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183348120 + 0x39b6de08) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183348290 + 0x84222325));
  uVar3 = (uRam00000001833481c0 << 0x3c | uRam00000001833481c0 >> 4) * -0x40cf1770f7db7845;
  uRam00000001833482a8 = (uRam00000001833482a8 ^ uVar3) - 0x39b6de08 ^ 0xcfff3ef2bae58036;
  uRam0000000183348220 = (uRam0000000183348220 * 0x25ec58c7011f31cd ^ uRam00000001833482a8) + uVar3;
  uRam00000001833482c0 = uRam0000000183348220 ^ uRam00000001833482a8;
  uRam0000000183348110 = 0xc64921f8;
  uVar3 = func_0x00018cf83b00(lRam0000000183348230 + 0xff84007cb9008bffU ^ 0x45);
  uVar3 = uVar3 ^ 0x39b6ff6a;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar3;
  uRam0000000183348120 = uRam0000000183348160 ^ uVar3 ^ 0x39b75772;
  uRam0000000183348248 = (uRam0000000183348248 ^ uVar3) + 0x39b75772 ^ 0x1a937d54a112cea3;
  uRam0000000183348218 = (uRam0000000183348218 * 0x5495d7530d1638e9 ^ uRam0000000183348248) + uVar3;
  uRam0000000183348268 = uRam0000000183348218 ^ uRam0000000183348248;
  uRam0000000183348118 = 0x39b75772;
  uRam0000000183348128 = func_0x00018cf83b00(uRam0000000183348128 + 0xffb4ffd86100d3ff ^ 0x1a);
  uRam00000001833481c0 = uRam0000000183348298 ^ uRam0000000183348128 ^ 0x10000796a;
  uRam0000000183348258 =
       (uRam0000000183348258 ^ uRam0000000183348128) + 0x10000796a ^ 0xbdbba3c07c3311c7;
  uRam00000001833482e0 =
       (uRam00000001833482e0 * 0x67cac4c915631ea5 ^ uRam0000000183348258) + uRam0000000183348128;
  uRam0000000183348190 = uRam00000001833482e0 ^ uRam0000000183348258;
  uRam00000001833482c8 = 0x796a;
  uRam00000001833482c0 = func_0x00018cf83b00(uRam0000000183348140 + 0xaaff81b8ff39ff ^ 0xe);
  uVar3 = uRam00000001833482c0 - (uRam00000001833482c0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam00000001833482c0;
  uRam00000001833482a0 = uRam0000000183348240 ^ uVar3 ^ 0x3ae928f2;
  uRam00000001833482b0 = (uRam00000001833482b0 ^ uVar3) + 0x3ae928f2 ^ 0x4b9ed70063f255d9;
  uRam00000001833481d0 = (uRam00000001833481d0 * -0x23b7aff7dffd8841 ^ uRam00000001833482b0) + uVar3
  ;
  uRam0000000183348100 = uRam00000001833481d0 ^ uRam00000001833482b0;
  uRam00000001833482b8 = 0x3ae928f2;
  uVar3 = (uRam00000001833482a8 ^ _UNK_1820f1a20) + uRam00000001833482c8 + 0xbecb0bd7;
  uVar5 = (uRam00000001833482c8 ^ _UNK_1820f1a28) + uRam00000001833482a8 + 0xc5175078;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833482a8 ^ _UNK_1820f1a20;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833482c8 ^ _UNK_1820f1a28;
  uVar3 = func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833482a8 + 0xc5175078)
                              ^ (uVar3 << 0x1d | uVar3 >> 0x23) -
                                (uRam00000001833482c8 + 0xbecb0bd7));
  uRam0000000183348210 =
       ((uVar3 ^ 0x2d5ac9f961d4d170) << 0xf | (uVar3 ^ 0x2d5ac9f961d4d170) >> 0x31) ^ 0x3ae928f2;
  uRam0000000183348170 = uRam00000001833481f0 ^ uRam0000000183348210 ^ 0x10000796a;
  uRam0000000183348190 =
       (uRam0000000183348190 ^ uRam0000000183348210) + 0x10000796a ^ 0x1cc6d69e3a2519de;
  uRam0000000183348210 = (uVar3 * 0x3a2bd8d043aa600b ^ uRam0000000183348190) + uRam0000000183348210;
  uRam00000001833482d8 = uRam0000000183348210 ^ uRam0000000183348190;
  uRam0000000183348160 = 0x796a;
  uVar3 = (~uRam00000001833481b0 + 0x8148312a) *
          ((uRam0000000183348288 ^ 0x1f9d9c52) +
          (ulonglong)((uint)uRam0000000183348288 & 0x1f9d9c52) * 2);
  uVar3 = (uVar3 | uRam0000000183348290) + (uVar3 & uRam0000000183348290);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183348150 =
       func_0x00018cf83b00((uVar3 | 0x9ed5ad7b) + (ulonglong)((uint)uVar3 & 0x9ed5ad7b));
  uVar3 = (uRam0000000183348150 ^ 0x9bfe0000) & 0x1fffffe0000;
  uRam0000000183348228 = uRam0000000183348198 ^ uVar3 ^ 0x11d07f0a0;
  uRam0000000183348170 = (uRam0000000183348170 ^ uVar3) + 0x11d07f0a0 ^ 0x42438a7dd5f392b7;
  uRam00000001833482b0 = (uRam00000001833482b0 * 0x319949f6fe80036b ^ uRam0000000183348170) + uVar3;
  uRam0000000183348198 = uRam00000001833482b0 ^ uRam0000000183348170;
  uRam0000000183348158 = 0x1d07f0a0;
  uVar3 = (~uRam0000000183348228 + 0x8148312a) *
          ((uRam00000001833481e0 ^ 0x1f9d9c52) +
          (ulonglong)((uint)uRam00000001833481e0 & 0x1f9d9c52) * 2);
  uVar3 = (uVar3 | uRam00000001833481a0) + (uVar3 & uRam00000001833481a0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183348258 =
       func_0x00018cf83b00((uVar3 | 0x9ed5ad7b) + (ulonglong)((uint)uVar3 & 0x9ed5ad7b));
  uRam0000000183348160 =
       (uRam0000000183348160 ^ uRam0000000183348258) + 0x1af78e5e ^ 0x2a833b98823ddb83;
  uRam00000001833481e8 =
       (uRam00000001833481e8 * 0x3cb68f7045cffed ^ uRam0000000183348160) + uRam0000000183348258;
  uRam0000000183348168 = uRam00000001833481e8 ^ uRam0000000183348160;
  uRam0000000183348128 = 0x1af78e5e;
  uVar3 = (uRam00000001833481d8 ^ _UNK_1820f1a30) + uRam0000000183348270 + 0x1f9d9c52;
  uVar5 = (uRam0000000183348270 ^ _UNK_1820f1a38) + uRam00000001833481d8 + 0x81483129;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833481d8 ^ _UNK_1820f1a30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183348270 ^ _UNK_1820f1a38;
  uRam0000000183348258 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833481d8 + 0x81483129) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183348270 + 0x1f9d9c52));
  uVar3 = uRam0000000183348258 - (uRam0000000183348258 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam0000000183348258;
  uRam0000000183348248 = (uRam0000000183348248 ^ uVar3) + 0x81083121 ^ 0xebbde3d23dd5df27;
  uRam00000001833481a0 = (uRam00000001833481a0 * 0x348461bbebd55129 ^ uRam0000000183348248) + uVar3;
  uRam0000000183348220 = uRam00000001833481a0 ^ uRam0000000183348248;
  uRam0000000183348200 = 0x81083121;
  uRam0000000183348190 = func_0x00018cf83b00(uRam00000001833481e8 ^ 0x1eff83dcffddf7);
  uRam0000000183348268 = uRam00000001833482d0 ^ uRam0000000183348190 ^ 0x46e8dae447212f5a;
  uRam0000000183348148 =
       (uRam0000000183348148 * -0x141c2c799ed28025 ^ uRam0000000183348268) + uRam0000000183348190;
  uRam0000000183348268 = uRam0000000183348148 ^ uRam0000000183348268;
  uRam00000001833482d0 = 0;
  uVar3 = ((uRam0000000183348140 ^ 0x84225a4f) +
          (ulonglong)((uint)uRam0000000183348140 & 0x84225a4f) * 2) * -uRam0000000183348130;
  uVar3 = (uVar3 | uRam0000000183348260) + (uVar3 & uRam0000000183348260);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833482c0 = uRam0000000183348190;
  uRam0000000183348290 =
       func_0x00018cf83b00((uVar3 | 0x84225a4f) + (ulonglong)((uint)uVar3 & 0x84225a4f));
  uVar3 = (uRam0000000183348290 << 9 | uRam0000000183348290 >> 0x37) * -0x5f3e901ded8b893f;
  uRam00000001833481c0 = uRam0000000183348280 ^ uVar3 ^ 0x796a;
  uRam0000000183348288 = (uRam0000000183348288 ^ uVar3) + 0x796a ^ 0x5cba68ea1a6e97a0;
  uRam0000000183348130 = (uRam0000000183348130 * -0x2efa4c8584959f7b ^ uRam0000000183348288) + uVar3
  ;
  uRam00000001833482e8 = uRam0000000183348130 ^ uRam0000000183348288;
  uRam0000000183348168 = 0x796a;
  uVar3 = (uRam00000001833482c0 ^ _UNK_1820f1a40) + uRam0000000183348270 + 0x1f9d9c52;
  uVar5 = (uRam0000000183348270 ^ _UNK_1820f1a48) + uRam00000001833482c0 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833482c0 ^ _UNK_1820f1a40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183348270 ^ _UNK_1820f1a48;
  uRam0000000183348278 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001833482c0 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183348270 + 0x1f9d9c52));
  uRam0000000183348280 =
       (uRam0000000183348280 ^ uRam0000000183348278) + 0x64404088 ^ 0x2a656850f9cfd59f;
  uRam0000000183348260 =
       (uRam0000000183348260 * -0x365c9e273b6d7bd1 ^ uRam0000000183348280) + uRam0000000183348278;
  uRam0000000183348108 = uRam0000000183348260 ^ uRam0000000183348280;
  uRam00000001833482c8 = 0x64404088;
  uVar3 = (uRam0000000183348118 ^ _UNK_1820f1a50) + uRam00000001833482d8 + 0x1f9d9c52;
  uVar5 = (uRam00000001833482d8 ^ _UNK_1820f1a58) + uRam0000000183348118 + 0x64404088;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183348118 ^ _UNK_1820f1a50;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001833482d8 ^ _UNK_1820f1a58;
  uRam0000000183348128 =
       func_0x00018cf83b00((uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183348118 + 0x64404088) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833482d8 + 0x1f9d9c52));
  uVar3 = ((uRam0000000183348128 ^ 0xffffffff) & 0x7fffffffffffffff ^ 0x9bbfbf77) *
          -0x5e2b4b436a8081fb;
  uRam00000001833481e8 = uRam00000001833481e8 ^ uVar3 ^ 0x8535170aea3cf143;
  uRam0000000183348120 = (uRam0000000183348120 * -0x6d03a6af7f0ff8d ^ uRam00000001833481e8) + uVar3;
  uRam0000000183348270 = uRam0000000183348120 ^ uRam00000001833481e8;
  uRam0000000183348198 = 0;
  uRam00000001833481b8 = func_0x00018cf83b00(uRam00000001833482a0 ^ 0x56007c3affdddf);
  uVar3 = uRam00000001833481b8 >> 1 | uRam00000001833481b8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam00000001833481b8;
  uRam00000001833482a0 = uRam00000001833482a8 ^ uVar3 ^ 0x796a;
  uRam0000000183348188 = (uRam0000000183348188 ^ uVar3) + 0x796a ^ 0x6c8304ed98502202;
  uRam0000000183348270 = (uRam0000000183348270 * -0x198a04c296237715 ^ uRam0000000183348188) + uVar3
  ;
  uRam00000001833481d0 = uRam0000000183348270 ^ uRam0000000183348188;
  uRam00000001833481a0 = 0x796a;
  uRam0000000183348258 = func_0x00018cf83b00(uRam0000000183348238 ^ 0x20ff7bdd001d86);
  uVar3 = (uRam0000000183348258 ^ 0x5afd7935c4359c11) << 0x2a |
          (uRam0000000183348258 ^ 0x5afd7935c4359c11) >> 0x16;
  uRam0000000183348108 = uRam0000000183348108 ^ uVar3 ^ 0x5597003572266a30;
  uRam0000000183348178 =
       (uRam0000000183348178 * 0x1e452b89a1630cf7 ^ uRam0000000183348108) + uVar3 ^
       uRam0000000183348108;
  uRam00000001833481f8 = 0;
  uVar3 = (ulonglong)uVar2 ^ 0x84222325;
  uVar5 = uVar3 ^ uRam00000001833482c8;
  lVar4 = uVar3 + uRam00000001833481d0;
  uVar3 = uVar5 + lVar4;
  uVar6 = (uRam00000001833481d0 ^ 0x796a) + uRam00000001833482c8 + 0x796a;
  uVar5 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar5;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833481d0 ^ 0x796a;
  uRam0000000183348100 =
       func_0x00018cf83b00((uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833482c8 + 0x796a) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar3 = uRam0000000183348100 << 0x19 | uRam0000000183348100 >> 0x27;
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  lVar4 = (ulonglong)uVar2 - (ulonglong)((uVar2 & 0x796a) * 2);
  uRam0000000183348270 = (uRam0000000183348270 ^ uVar3) + lVar4 + 0x796a ^ 0x4557608d19bd6a93;
  uRam00000001833482b8 = (uRam00000001833482b8 * -0x6e44daee13049b83 ^ uRam0000000183348270) + uVar3
  ;
  uRam0000000183348210 = uRam00000001833482b8 ^ uRam0000000183348270;
  uRam00000001833481e0 = lVar4 + 0x796aU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd42b,0x24a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cf7a4fd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820efb10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ep; atZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18cf83b90, runtime 6ffff4b93b90) =====

void FUN_18cf83b90(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018cf83bdb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820f1b90 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ep; aua (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18cf84ba0, runtime 6ffff4b94ba0) =====

void FUN_18cf84ba0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cf84c29 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1820f2150 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



