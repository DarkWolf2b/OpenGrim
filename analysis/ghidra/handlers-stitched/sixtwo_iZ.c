// ===== STITCHED CORPUS: sixtwo.iZ =====
// handlers: 17  continuation blocks: 195  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x19c088', '0x1a718', '0xf61f00', '0xf61f08', '0xf61f10', '0xf61f18', '0xf61f20', '0xf61f28', '0xf61f30', '0xf61f38', '0xf61f40', '0xf61f48', '0xf61f50', '0xf61f58', '0xf61f60', '0xf61f68', '0xf61f70', '0xf61f80', '0xf61f88']

// ===== Lsixtwo/iZ; _6f9fd9a2611811fe6f648e44740320a9 ()V (handler @ image 188494af0, runtime 6ffff00a4af0) =====

void FUN_188494af0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188494bfc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f66aa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byA (IJ)I (handler @ image 188485b70, runtime 6ffff0095b70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188485b70(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (~uRam00000001831c5288 + 0xd65e624629e76e50) *
          ((uRam00000001831c51a0 ^ 0x35135932e68608a) +
          (uRam00000001831c51a0 & 0x35135932e68608a) * 2);
  uVar5 = (uVar5 | uRam00000001831c51f0) + (uVar5 & uRam00000001831c51f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c5130 =
       func_0x000188490d40((uVar5 | 0xd50f57d5078f0ec5) + (uVar5 & 0xd50f57d5078f0ec5));
  uRam00000001831c5250 =
       (uRam00000001831c5250 ^ uRam00000001831c51e0) + 0xd75f77d7abef6fef ^ 0xe9b204acc250f295;
  uRam00000001831c52a8 =
       (uRam00000001831c52a8 * -0x470f54390d0ab91d ^ uRam00000001831c5250) + uRam00000001831c51e0;
  uRam00000001831c5248 = uRam00000001831c52a8 ^ uRam00000001831c5250;
  uRam00000001831c51a8 = -0x28a0882854109011;
  uVar5 = (uRam00000001831c5240 ^ _UNK_180f652f0) + uRam00000001831c52c0 + 0x6bf1c432ae0d68c5;
  uVar7 = (uRam00000001831c52c0 ^ _UNK_180f652f8) + uRam00000001831c5240 + 0x54b9ccfbe5a7a481;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c5240 ^ _UNK_180f652f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c52c0 ^ _UNK_180f652f8;
  uRam00000001831c5178 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831c5240 + 0x54b9ccfbe5a7a481) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831c52c0 + 0x6bf1c432ae0d68c5));
  uRam00000001831c5148 =
       (uRam00000001831c5148 ^ uRam00000001831c5178 ^ 0x3f4808c9cf88ef61) + 0x3f4808c9cf88ef61 ^
       0xc9f9fb833ab36571;
  uRam00000001831c5268 =
       (uRam00000001831c5268 * -0x1c9498fbd532aa09 ^ uRam00000001831c5148) +
       (uRam00000001831c5178 ^ 0x3f4808c9cf88ef61);
  uRam00000001831c51b0 = uRam00000001831c5268 ^ uRam00000001831c5148;
  uRam00000001831c5170 = 0x3f4808c9cf88ef61;
  uVar5 = (~uRam00000001831c5200 + 0x779890f0ab94ccad) *
          ((uRam00000001831c5158 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001831c5158 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001831c5228) + (uVar5 & uRam00000001831c5228);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c52b0 =
       func_0x000188490d40((uVar5 | 0x779890f02fb69076) + (uVar5 & 0x779890f02fb69076));
  uVar2 = ~(uint)uRam00000001831c52b0 & 0x7fff;
  uVar4 = uVar2 >> 1 | uVar2;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar5 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          (ulonglong)uVar2;
  uRam00000001831c5260 = uRam00000001831c52f0 ^ uVar5 ^ 0x779890f0ab954cab;
  uRam00000001831c5170 = (uRam00000001831c5110 ^ uVar5) + 0x779890f0ab954cab ^ 0x3e8dd393f503ecd6;
  uRam00000001831c5240 = (uRam00000001831c5240 * -0x1c77442fad343fc5 ^ uRam00000001831c5170) + uVar5
  ;
  uRam00000001831c5170 = uRam00000001831c5240 ^ uRam00000001831c5170;
  uRam00000001831c5110 = uRam00000001831c5158 ^ 0x779890f0ab954cab;
  uRam00000001831c51c0 = 0x779890f0ab954cab;
  uRam00000001831c5280 = func_0x000188490d40(uRam00000001831c5138 + 0x76ccd6ba2ac5b482 ^ 0xe2);
  uVar5 = uRam00000001831c5280 >> 1 | uRam00000001831c5280;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001831c5280;
  uRam00000001831c51b8 = uRam00000001831c52e0 ^ uVar5 ^ 0x7fff;
  uRam00000001831c5298 = (uRam00000001831c5298 ^ uVar5) + 0x7fff ^ 0x53279e7255492ddf;
  uRam00000001831c51d8 = (uRam00000001831c51d8 * -0x3d8b061d816c8865 ^ uRam00000001831c5298) + uVar5
  ;
  uRam00000001831c51e0 = uRam00000001831c51d8 ^ uRam00000001831c5298;
  uRam00000001831c52f0 = 0x7fff;
  uVar5 = (uRam00000001831c51b8 ^ _UNK_180f65300) + uRam00000001831c5270 + 0x84222325;
  uVar7 = (uRam00000001831c5270 ^ _UNK_180f65308) + uRam00000001831c51b8 + 0xe9b34fb129218000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c51b8 ^ _UNK_180f65300;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c5270 ^ _UNK_180f65308;
  uRam00000001831c52f8 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831c51b8 + 0xe9b34fb129218000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831c5270 + 0x84222325));
  uRam00000001831c5150 =
       (uRam00000001831c5150 ^ uRam00000001831c52f8) + 0x164cb04ed6de8000 ^ 0x29922e9d2eb8f147;
  uRam00000001831c51a8 =
       (uRam00000001831c51a8 * 0x3a2d4b77b14246f9 ^ uRam00000001831c5150) + uRam00000001831c52f8;
  uRam00000001831c51d0 = uRam00000001831c51a8 ^ uRam00000001831c5150;
  uRam00000001831c51f8 = 0x164cb04ed6de8000;
  uVar5 = (uRam00000001831c5288 ^ _UNK_180f65310) + uRam00000001831c51b0 + 0xe9b34fb1ad03dcda;
  uVar7 = (uRam00000001831c51b0 ^ _UNK_180f65318) + uRam00000001831c5288 + 0x164cb04ed6de8000;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c5288 ^ _UNK_180f65310;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c51b0 ^ _UNK_180f65318;
  uRam00000001831c5240 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831c5288 + 0x164cb04ed6de8000) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831c51b0 + 0xe9b34fb1ad03dcda));
  uRam00000001831c52f8 = uRam00000001831c5140 ^ uRam00000001831c5240 ^ 0x7fff;
  uRam00000001831c51f0 = (uRam00000001831c51f0 ^ uRam00000001831c5240) + 0x7fff ^ 0xfef05998d214bc51
  ;
  uRam00000001831c5118 =
       (uRam00000001831c5118 * 0x295833fa8d570ee5 ^ uRam00000001831c51f0) + uRam00000001831c5240;
  uRam00000001831c5148 = uRam00000001831c5118 ^ uRam00000001831c51f0;
  uRam00000001831c5270 = 0x7fff;
  uVar5 = (~uRam00000001831c51a0 + 0x9eeefb4a4888e5e1) *
          ((uRam00000001831c52f0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831c52f0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001831c5150) + (uVar5 & uRam00000001831c5150);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c51f0 =
       func_0x000188490d40((uVar5 | 0x9eeefb4accaac6c5) + (uVar5 & 0x9eeefb4accaac6c5));
  uRam00000001831c5138 =
       (uRam00000001831c5138 ^ uRam00000001831c51f0) + 0x611104b5b7771a20 ^ 0xeee8fb3a4540c57f;
  uRam00000001831c51a8 =
       (uRam00000001831c51a8 * 0x5fc7f72749f74d9d ^ uRam00000001831c5138) + uRam00000001831c51f0;
  uRam00000001831c52a0 = uRam00000001831c51a8 ^ uRam00000001831c5138;
  uRam00000001831c5160 = 0x611104b5b7771a20;
  uVar5 = (uRam00000001831c5178 ^ _UNK_180f65320) + uRam00000001831c5148 + 0x84225cda;
  uVar7 = (uRam00000001831c5148 ^ _UNK_180f65328) + uRam00000001831c5178 + 0x9eeefb4a4888e5e0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c5178 ^ _UNK_180f65320;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c5148 ^ _UNK_180f65328;
  uRam00000001831c51d0 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831c5178 + 0x9eeefb4a4888e5e0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831c5148 + 0x84225cda));
  uVar5 = uRam00000001831c51d0 << 0x1c | uRam00000001831c51d0 >> 0x24 & 0xfffffffffffc0000;
  uRam00000001831c51d8 = uRam00000001831c5208 ^ uVar5 ^ 0x9eeefb4a488965df;
  uRam00000001831c52d8 = (uRam00000001831c52d8 ^ uVar5) + 0x9eeefb4a488965df ^ 0x31c4b1dd4f6bcdbb;
  uRam00000001831c5288 = (uRam00000001831c5288 * -0xbfd835c14bfd6c9 ^ uRam00000001831c52d8) + uVar5;
  uRam00000001831c52e0 = uRam00000001831c5288 ^ uRam00000001831c52d8;
  uRam00000001831c51f0 = -0x611104b5b7769a21;
  uRam00000001831c51b0 = func_0x000188490d40(uRam00000001831c5278 + 0x7f4bd778c6f4c41e ^ 0xfa);
  uVar7 = _UNK_180f65338;
  uVar5 = _UNK_180f65330;
  uVar3 = (uRam00000001831c51b0 * 0x49b2df3b0fbdb59f << 0x39 |
          uRam00000001831c51b0 * 0x49b2df3b0fbdb59f >> 7) ^ 0x9eeefb4a488965df;
  uRam00000001831c5280 = uRam00000001831c52e8 ^ uVar3 ^ 0x7fff;
  uRam00000001831c5188 = (uRam00000001831c5188 ^ uVar3) + 0x7fff ^ 0xd6fcb2ad4bace55b;
  uRam00000001831c51d8 = (uRam00000001831c51d8 * 0x69fbcde7692d46a1 ^ uRam00000001831c5188) + uVar3;
  uRam00000001831c5200 = uRam00000001831c51d8 ^ uRam00000001831c5188;
  uRam00000001831c52e8 = 0x7fff;
  uVar3 = (uRam00000001831c5198 ^ _UNK_180f65330) + uRam00000001831c5178 + 0xd75f77d72fcd4cca;
  uVar8 = (uRam00000001831c5178 ^ _UNK_180f65338) + uRam00000001831c5198 + 0x3f4808c9cf88ef61;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001831c5198 ^ _UNK_180f65330;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c5178 ^ _UNK_180f65338;
  uRam00000001831c51c0 =
       func_0x000188490d40((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831c5198 + 0x3f4808c9cf88ef61) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001831c5178 + 0xd75f77d72fcd4cca));
  uVar3 = uRam00000001831c51c0 ^ 0x2800080844008000;
  uRam00000001831c52e8 = uRam00000001831c5140 ^ uVar3 ^ 0x16a780a17b785f50;
  uRam00000001831c5200 = (uRam00000001831c5200 ^ uVar3) + 0x16a780a17b785f50 ^ 0x38bc7b30e959dc13;
  uRam00000001831c52d0 = (uRam00000001831c52d0 * 0x2d9fa714655a6dc5 ^ uRam00000001831c5200) + uVar3;
  uRam00000001831c5110 = uRam00000001831c52d0 ^ uRam00000001831c5200;
  uRam00000001831c52a0 = 0x16a780a17b785f50;
  uVar3 = (uRam00000001831c5180 ^ uVar5) + uRam00000001831c5220 + 0xd75f77d72fcd4cca;
  uVar8 = (uRam00000001831c5220 ^ uVar7) + uRam00000001831c5180 + 0x3f4808c9cf88ef61;
  uVar5 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001831c5180 ^ uVar5;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c5220 ^ uVar7;
  uRam00000001831c5198 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831c5180 + 0x3f4808c9cf88ef61) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831c5220 + 0xd75f77d72fcd4cca));
  uRam00000001831c52a8 =
       (uRam00000001831c52a8 ^ uRam00000001831c5198 ^ 0x3f4808c9cf88ef61) + 0x174800c18b886f61 ^
       0x15ec910363925c81;
  uRam00000001831c5188 =
       (uRam00000001831c5188 * 0x31dd8a5d0ad9074f ^ uRam00000001831c52a8) +
       (uRam00000001831c5198 ^ 0x3f4808c9cf88ef61) ^ uRam00000001831c52a8;
  uRam00000001831c5220 = 0x174800c18b886f61;
  uVar5 = (uRam00000001831c5180 ^ _UNK_180f65340) + uRam00000001831c5260 + 0xe8177f1ee045a3ab;
  uVar7 = (uRam00000001831c5260 ^ _UNK_180f65348) + uRam00000001831c5180 + 0x2e9001831710dec2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c5180 ^ _UNK_180f65340;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c5260 ^ _UNK_180f65348;
  uRam00000001831c5198 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831c5180 + 0x2e9001831710dec2) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831c5260 + 0xe8177f1ee045a3ab));
  uVar7 = uRam00000001831c5198 * 0x1c5624c242c509f5;
  uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar7;
  uRam00000001831c51b8 = uRam00000001831c52e8 ^ uVar7 ^ 0x16a780a17b785f50;
  uRam00000001831c5130 = (uRam00000001831c5130 ^ uVar7) + 0x16a780a17b785f50 ^ 0xc35556580e77899d;
  uRam00000001831c52d0 = (uRam00000001831c52d0 * -0x3f98251a06702b0d ^ uRam00000001831c5130) + uVar7
  ;
  uRam00000001831c5228 = uRam00000001831c52d0 ^ uRam00000001831c5130;
  uRam00000001831c5140 = 0x16a780a17b785f50;
  uRam00000001831c5198 = func_0x000188490d40(uRam00000001831c5188 ^ 0xffe100841cffdd7e);
  uRam00000001831c5120 = (uRam00000001831c5198 & 0x1fffffffffffc00) * 0x80;
  uRam00000001831c5270 = uRam00000001831c5270 ^ uRam00000001831c5120 ^ 0x261f1b0613fd9113;
  uRam00000001831c51f0 =
       (uRam00000001831c51f0 * 0x42371e292a4fa09f ^ uRam00000001831c5270) + uRam00000001831c5120;
  uRam00000001831c52c8 = uRam00000001831c51f0 ^ uRam00000001831c5270;
  uRam00000001831c5180 = 0;
  uVar5 = ((uRam00000001831c5178 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001831c5178 & 0x84225cda) * 2) * -uRam00000001831c51a0;
  uVar5 = (uVar5 | uRam00000001831c5128) + (uVar5 & uRam00000001831c5128);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c51b0 =
       func_0x000188490d40((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = (uRam00000001831c51b0 & 0x3fffffff) << 0x21 | uRam00000001831c51b0 >> 0x1f;
  uRam00000001831c5268 = uRam00000001831c5128 ^ uVar5 ^ 0x7fff;
  uRam00000001831c5130 = (uRam00000001831c5130 ^ uVar5) + 0x7fff ^ 0xa359563df30a7e1f;
  uRam00000001831c52a0 = (uRam00000001831c52a0 * -0x64fc6332aea9b317 ^ uRam00000001831c5130) + uVar5
  ;
  uRam00000001831c5148 = uRam00000001831c52a0 ^ uRam00000001831c5130;
  uRam00000001831c5228 = 0x7fff;
  uVar5 = ~uRam00000001831c51d8 *
          ((uRam00000001831c5118 ^ 0xd75f77d72fcd4cca) +
          (uRam00000001831c5118 & 0x575f77d72fcd4cca) * 2);
  uVar5 = (uVar5 | uRam00000001831c5248) + (uVar5 & uRam00000001831c5248);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c5100 =
       func_0x000188490d40((uVar5 | 0x28a08828d032b335) + (uVar5 & 0x28a08828d032b335));
  uVar5 = uRam00000001831c5100 ^ 0x28a0882854100000 | 0xffff;
  uRam00000001831c52c0 = (uRam00000001831c52c0 ^ uVar5) + 0x28a0882854109010 ^ 0x1888b87c5da70e60;
  uRam00000001831c52a8 = (uRam00000001831c52a8 * 0x4d96e5c9b489a391 ^ uRam00000001831c52c0) + uVar5;
  uRam00000001831c5120 = uRam00000001831c52a8 ^ uRam00000001831c52c0;
  uRam00000001831c5220 = 0x28a0882854109010;
  uVar5 = (uRam00000001831c5170 ^ _UNK_180f65350) + uRam00000001831c5260 + 0xd75f77d72fcd4cca;
  uVar7 = (uRam00000001831c5260 ^ _UNK_180f65358) + uRam00000001831c5170 + 0x28a0882854109010;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c5170 ^ _UNK_180f65350;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c5260 ^ _UNK_180f65358;
  uRam00000001831c5208 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001831c5170 + 0x28a0882854109010) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam00000001831c5260 + 0xd75f77d72fcd4cca));
  uVar5 = ~(~uRam00000001831c5208 * 0x7456cdccd77f7b7d) & 0xd75f77d7abef6fef;
  uRam00000001831c5170 = uRam00000001831c5170 ^ uVar5 ^ 0xa7b8323618be02cf;
  uRam00000001831c5130 = (uRam00000001831c5130 * -0x6fda21c67b41586f ^ uRam00000001831c5170) + uVar5
  ;
  uRam00000001831c5188 = uRam00000001831c5130 ^ uRam00000001831c5170;
  uRam00000001831c51a8 = 0;
  uRam00000001831c5260 = func_0x000188490d40(uRam00000001831c5210 ^ 0xffac0083b9ffdd8c);
  uVar5 = (ulonglong)((uint)~((int)uRam00000001831c5260 * 2) >> 1 & 0x7fff);
  uRam00000001831c52f0 =
       (uRam00000001831c5218 ^ uVar5 ^ 0x7fff ^ uVar5) + 0x7fff ^ 0xa82a40095f5e8933;
  uRam00000001831c52e0 = (uRam00000001831c52e0 * 0x15941a6bb0f70951 ^ uRam00000001831c52f0) + uVar5;
  uRam00000001831c5218 = uRam00000001831c52e0 ^ uRam00000001831c52f0;
  uRam00000001831c52f8 = 0x7fff;
  uRam00000001831c5180 = func_0x000188490d40(uRam00000001831c5298 + 0xffd3ff7ca5ffddff ^ 0x25);
  uRam00000001831c51e8 = uRam00000001831c51f0 ^ uRam00000001831c5180 ^ 0x7fff;
  uRam00000001831c51c0 = (uRam00000001831c5298 ^ uRam00000001831c5180) + 0x7fff ^ 0x3b8b36b4b6946c81
  ;
  uRam00000001831c52d8 =
       (uRam00000001831c52d8 * -0x2a32f51a987c0d31 ^ uRam00000001831c51c0) + uRam00000001831c5180;
  uRam00000001831c51c0 = uRam00000001831c52d8 ^ uRam00000001831c51c0;
  uRam00000001831c5298 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam00000001831c5170;
  lVar6 = (param_4 ^ 0x84222325) + uRam00000001831c5240;
  uVar7 = uVar5 + lVar6;
  uVar3 = (uRam00000001831c5240 ^ 0x7fff) + uRam00000001831c5170 + 0x7fff;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar5;
  uVar7 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001831c5240 ^ 0x7fff;
  uVar5 = func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001831c5170 + 0x7fff) ^
                              (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uRam00000001831c5108 = ~(uVar5 & 0x3ffffffffffff) & param_4;
  uVar7 = uRam00000001831c5108 >> 1 | uRam00000001831c5108;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uRam00000001831c5108 =
       (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       uRam00000001831c5108;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar2;
  uRam00000001831c51c0 = (uRam00000001831c51c0 ^ uRam00000001831c5108) + uVar7 ^ 0xc6109047973cd75;
  uRam00000001831c5108 = (uVar5 * 0x375681acef4ab383 ^ uRam00000001831c51c0) + uRam00000001831c5108;
  uRam00000001831c5280 = uRam00000001831c5108 ^ uRam00000001831c51c0;
  uVar3 = (ulonglong)param_3;
  uVar5 = uVar7 ^ 0x84222325 ^ uRam00000001831c5218;
  lVar6 = (uVar7 ^ 0x84222325) + uRam00000001831c5240;
  uVar8 = uVar5 + lVar6;
  uVar9 = (uVar3 ^ uRam00000001831c5240) + uRam00000001831c5218 + uVar3;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar3 ^ uRam00000001831c5240;
  uRam00000001831c5170 = uVar7;
  uRam00000001831c5260 =
       func_0x000188490d40((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c5218 + uVar3) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar3 = (uVar7 + uVar3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001831c52d8 =
       (uRam00000001831c52d8 ^ uVar7 ^ uRam00000001831c5260) + uVar3 ^ 0xcc6dcc933006d635;
  uRam00000001831c51c8 =
       (uRam00000001831c51c8 * -0x5fef3509613e1803 ^ uRam00000001831c52d8) +
       (uVar7 ^ uRam00000001831c5260);
  uRam00000001831c51f0 = uRam00000001831c51c8 ^ uRam00000001831c52d8;
  uVar3 = uVar3 & 0xffffffff;
  uRam00000001831c5240 = uVar3;
  uRam00000001831c5288 = func_0x000188490d40(uRam00000001831c5148 ^ 0xff69009a870015a9);
  uVar5 = uRam00000001831c5288 >> 1 | uRam00000001831c5288;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001831c5288;
  uRam00000001831c52c8 = (uRam00000001831c52c8 ^ uVar5) - 0x2f38bc5c ^ 0x7475869a24fe36a1;
  uRam00000001831c51a0 = (uRam00000001831c51a0 * 0x2c994c907b55c455 ^ uRam00000001831c52c8) + uVar5;
  uRam00000001831c5220 = uRam00000001831c51a0 ^ uRam00000001831c52c8;
  uRam00000001831c51d8 = 0xd0c743a4;
  uVar5 = (~uRam00000001831c51f8 + 0x2f38bc5d) *
          ((uRam00000001831c51f0 ^ 0x8422761d) +
          (ulonglong)((uint)uRam00000001831c51f0 & 0x8422761d) * 2);
  uVar5 = (uVar5 | uRam00000001831c5238) + (uVar5 & uRam00000001831c5238);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c5260 =
       func_0x000188490d40((uVar5 | 0xab1aca41) + (ulonglong)((uint)uVar5 & 0xab1aca41));
  uRam00000001831c51d0 = uRam00000001831c5250 ^ uRam00000001831c5260 ^ 0x2f391194;
  uRam00000001831c5210 =
       (uRam00000001831c5210 ^ uRam00000001831c5260) + 0x2f391194 ^ 0x1c55a0045dc6a324;
  uRam00000001831c5290 =
       (uRam00000001831c5290 * 0x3a4e74f4c4aa854d ^ uRam00000001831c5210) + uRam00000001831c5260;
  uRam00000001831c51b8 = uRam00000001831c5290 ^ uRam00000001831c5210;
  uRam00000001831c51c0 = 0x2f391194;
  uVar5 = (uRam00000001831c52c8 ^ _UNK_180f65360) + uRam00000001831c51a0 + 0x84222325;
  uVar7 = (uRam00000001831c51a0 ^ _UNK_180f65368) + uRam00000001831c52c8 + 0x4855f174;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c52c8 ^ _UNK_180f65360;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c51a0 ^ _UNK_180f65368;
  uRam00000001831c5198 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001831c52c8 + 0x4855f174) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831c51a0 + 0x84222325));
  uRam00000001831c5130 =
       (uRam00000001831c5130 ^ uRam00000001831c5198) - 0x4855f174 ^ 0x80f739fb49d9b435;
  uRam00000001831c52a8 =
       (uRam00000001831c52a8 * 0x6ce8f2ae8c252fed ^ uRam00000001831c5130) + uRam00000001831c5198;
  uRam00000001831c5288 = uRam00000001831c52a8 ^ uRam00000001831c5130;
  uRam00000001831c5100 = 0xb7aa0e8c;
  uVar5 = (~uRam00000001831c52d0 + 0x4855f175) *
          ((uRam00000001831c51e8 ^ 0x8422761d) +
          (ulonglong)((uint)uRam00000001831c51e8 & 0x8422761d) * 2);
  uVar5 = (uVar5 | uRam00000001831c5200) + (uVar5 & uRam00000001831c5200);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c5260 =
       func_0x000188490d40((uVar5 | 0xcc778769) + (ulonglong)((uint)uVar5 & 0xcc778769));
  uRam00000001831c52f8 = uRam00000001831c52f0 ^ uRam00000001831c5260 ^ 0x485646ac;
  uRam00000001831c5138 =
       (uRam00000001831c5138 ^ uRam00000001831c5260) + 0x485646ac ^ 0x121eb0e2741405c2;
  uRam00000001831c5200 =
       (uRam00000001831c5200 * 0xceaa9f54cc56de7 ^ uRam00000001831c5138) + uRam00000001831c5260;
  uRam00000001831c51d8 = uRam00000001831c5200 ^ uRam00000001831c5138;
  uRam00000001831c5128 = 0x485646ac;
  uVar5 = func_0x000188490d40(uRam00000001831c51c8 + 0xff94ffbafb00c5ff ^ 0xd3);
  uRam00000001831c5298 = (uVar5 << 0x12 | uVar5 >> 0x2e) << 0x1d | (uVar5 & 0x3fffffffffff) >> 0x11;
  uRam00000001831c5118 = uRam00000001831c51a8 ^ uRam00000001831c5298 ^ 0x100005538;
  uRam00000001831c5228 =
       (uRam00000001831c5228 ^ uRam00000001831c5298) + 0x100005538 ^ 0x650d12e5fe95fee;
  uRam00000001831c5298 = (uVar5 * -0x6f52a7ad8a629c1d ^ uRam00000001831c5228) + uRam00000001831c5298
  ;
  uRam00000001831c5158 = uRam00000001831c5298 ^ uRam00000001831c5228;
  uRam00000001831c51a0 = 0x5538;
  uRam00000001831c51a0 = func_0x000188490d40(uRam00000001831c5240 + 0xb3ffd6b2ff46ff ^ 0xb8);
  uVar5 = uRam00000001831c51a0 - (uRam00000001831c51a0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam00000001831c51a0;
  uRam00000001831c51e8 = (uRam00000001831c51e8 ^ uVar5) - 0xdae99fea ^ 0x78c9baea04624e4f;
  uRam00000001831c5260 = (uRam00000001831c5260 * -0x13ebef962585d7c9 ^ uRam00000001831c51e8) + uVar5
  ;
  uRam00000001831c5290 = uRam00000001831c5260 ^ uRam00000001831c51e8;
  uRam00000001831c5140 = 0x25166016;
  uVar5 = (uRam00000001831c5250 ^ _UNK_180f65370) + uRam00000001831c5168 + 0x8422761d;
  uVar7 = (uRam00000001831c5168 ^ _UNK_180f65378) + uRam00000001831c5250 + 0xdae99fea;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c5250 ^ _UNK_180f65370;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c5168 ^ _UNK_180f65378;
  uRam00000001831c5140 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001831c5250 + 0xdae99fea) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831c5168 + 0x8422761d));
  uVar5 = (uRam00000001831c5140 ^ 0x4010) & 0x3ffffffffffffff;
  uRam00000001831c5220 = uRam00000001831c5248 ^ uVar5 ^ 0xdae9f522;
  uRam00000001831c5288 = (uRam00000001831c5288 ^ uVar5) + 0xdae9f522 ^ 0x7f7dfa30fd8ce7e5;
  uRam00000001831c5228 = (uRam00000001831c5228 * 0x471231940b8d2175 ^ uRam00000001831c5288) + uVar5;
  uRam00000001831c5240 = uRam00000001831c5228 ^ uRam00000001831c5288;
  uRam00000001831c5120 = 0xdae9f522;
  uVar5 = (uRam00000001831c5210 ^ _UNK_180f65380) + uRam00000001831c5250 + 0x5ecbd607;
  uVar7 = (uRam00000001831c5250 ^ _UNK_180f65388) + uRam00000001831c5210 + 0x25166016;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c5210 ^ _UNK_180f65380;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c5250 ^ _UNK_180f65388;
  uRam00000001831c5288 =
       func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001831c5210 + 0x25166016) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831c5250 + 0x5ecbd607));
  uRam00000001831c52a8 = uRam00000001831c5278 ^ uRam00000001831c5110 ^ 0x100005538;
  uRam00000001831c5218 =
       (uRam00000001831c5218 ^ uRam00000001831c5110) + 0x100005538 ^ 0x1bd33dd36f702c73;
  uRam00000001831c5120 =
       (uRam00000001831c5120 * -0x33982e393e1c4425 ^ uRam00000001831c5218) + uRam00000001831c5110;
  uRam00000001831c5220 = uRam00000001831c5120 ^ uRam00000001831c5218;
  uRam00000001831c5130 = 0x5538;
  uVar5 = (uRam00000001831c5140 ^ _UNK_180f65390) + uRam00000001831c51e8 + 0x1ed5595a;
  uVar7 = (uRam00000001831c51e8 ^ _UNK_180f65398) + uRam00000001831c5140 + 0x8c81c2f1;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831c5140 ^ _UNK_180f65390;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001831c51e8 ^ _UNK_180f65398;
  uVar5 = func_0x000188490d40((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001831c5140 + 0x8c81c2f1)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam00000001831c51e8 + 0x1ed5595a));
  uVar7 = uVar5 ^ 0x9af77a7f;
  uRam00000001831c5150 = uRam00000001831c51c0 ^ uVar7 ^ 0x127793d70;
  uRam00000001831c5130 = (uVar5 ^ uVar7) + 0x127793d70 ^ 0x476fd24f6cead708;
  uRam00000001831c52f0 = (uRam00000001831c52f0 * 0x784d990d40aaaf95 ^ uRam00000001831c5130) + uVar7;
  uRam00000001831c5208 = uRam00000001831c52f0 ^ uRam00000001831c5130;
  uRam00000001831c51b0 = uRam00000001831c5168 ^ 0x127793d70;
  uRam00000001831c5190 = 0x27793d70;
  uVar5 = (~uRam00000001831c5130 + 0x110284e3) *
          ((uRam00000001831c5138 ^ 0x92549bab) +
          (ulonglong)((uint)uRam00000001831c5138 & 0x92549bab) * 2);
  uVar5 = (uVar5 | uRam00000001831c5148) + (uVar5 & uRam00000001831c5148);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar2 = func_0x000188490d40((uVar5 | 0x83561f49) + (ulonglong)((uint)uVar5 & 0x83561f49));
  uVar5 = (ulonglong)((uVar2 ^ 0x14629882) & 0x1676b88e) ^ 0x1676b88e;
  uRam00000001831c5268 = uRam00000001831c52e0 ^ uVar5 ^ 0x27793d70;
  uRam00000001831c5100 = (uRam00000001831c5100 ^ uVar5) + 0x27793d70 ^ 0x8e1b2c9d812e8cc3;
  uRam00000001831c52e8 = (uRam00000001831c52e8 * -0x5fc160fd551c4597 ^ uRam00000001831c5100) + uVar5
  ;
  uRam00000001831c51e8 = uRam00000001831c52e8 ^ uRam00000001831c5100;
  uRam00000001831c52a0 = 0x27793d70;
  uRam00000001831c5278 = func_0x000188490d40(uRam00000001831c5170 ^ 0xffdd007c1cffdd92);
  uRam00000001831c5120 = uRam00000001831c5120 ^ uRam00000001831c5278 ^ 0x3428f1af62e4117f;
  uRam00000001831c5140 =
       (uRam00000001831c5140 * 0x56071e36ce5cc76b ^ uRam00000001831c5120) + uRam00000001831c5278;
  uRam00000001831c5158 = uRam00000001831c5140 ^ uRam00000001831c5120;
  uRam00000001831c51d8 = 0;
  uRam00000001831c52e8 = uRam00000001831c5278;
  uRam00000001831c5138 = func_0x000188490d40(uRam00000001831c52e0 + 0x49ff83f2ffe1ff ^ 0xa8);
  uVar5 = (uRam00000001831c5138 ^ 0x4000) & 0xffffffffffffc000;
  uRam00000001831c5190 = uRam00000001831c52d0 ^ uVar5 ^ 0x5538;
  uRam00000001831c52d0 = (uRam00000001831c52d0 ^ uVar5) + 0x5538 ^ 0xf5eb2f8eb366e7a3;
  uRam00000001831c5150 = (uRam00000001831c5150 * -0x4178ffaface9f215 ^ uRam00000001831c52d0) + uVar5
  ;
  uRam00000001831c5240 = uRam00000001831c5150 ^ uRam00000001831c52d0;
  uRam00000001831c5220 = 0x5538;
  uVar5 = func_0x000188490d40(uRam00000001831c5150 + 0xffa1ffe1a2ffe5ff ^ 0xb2);
  uRam00000001831c5238 =
       (uRam00000001831c5238 ^ uVar5 ^ 0xffffffff) + 0x65088580 ^ 0xdebed7b65075c484;
  uRam00000001831c5290 = (uVar5 * 0xf43ab8ccdae51e3 ^ uRam00000001831c5238) + (uVar5 ^ 0xffffffff);
  uRam00000001831c5108 = uRam00000001831c5290 ^ uRam00000001831c5238;
  uRam00000001831c52b0 = 0x65088580;
  uVar5 = ((uRam00000001831c5158 ^ 0x8422761d) +
          (ulonglong)((uint)uRam00000001831c5158 & 0x8422761d) * 2) * -uRam00000001831c5220;
  uVar5 = (uVar5 | uRam00000001831c52c0) + (uVar5 & uRam00000001831c52c0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c5288 =
       func_0x000188490d40((uVar5 | 0x8422761d) + (ulonglong)((uint)uVar5 & 0x8422761d));
  uVar5 = uRam00000001831c5288 ^ 0x5538;
  uRam00000001831c5180 = uRam00000001831c5100 ^ uVar5 ^ 0x5538;
  uRam00000001831c5120 = (uRam00000001831c5120 ^ uVar5) + 0x5538 ^ 0xdb88e451ac8c8e9d;
  uRam00000001831c51e0 = (uRam00000001831c51e0 * -0x12b3346193c3842d ^ uRam00000001831c5120) + uVar5
  ;
  uRam00000001831c5210 = uRam00000001831c51e0 ^ uRam00000001831c5120;
  uRam00000001831c5188 = 0x5538;
  uRam00000001831c5298 = func_0x000188490d40(uRam00000001831c51e0 ^ 0x1f00841cffddb2);
  uRam00000001831c5130 =
       uRam00000001831c5130 ^ uRam00000001831c5298 * 0x6d3e20a7e0b97259 ^ 0xe21f2a0f5fde759f;
  uRam00000001831c5190 =
       (uRam00000001831c5190 * -0x2c0b861f7b552827 ^ uRam00000001831c5130) +
       uRam00000001831c5298 * 0x6d3e20a7e0b97259;
  uRam00000001831c51c8 = uRam00000001831c5190 ^ uRam00000001831c5130;
  uRam00000001831c51b8 = 0;
  uRam00000001831c52d8 = func_0x000188490d40(uRam00000001831c52d0 ^ 0xffd60083e50021bd);
  uVar5 = uRam00000001831c52d8 * -0x2c948c93c2778137;
  uRam00000001831c51f8 = uRam00000001831c5188 ^ uVar5 ^ 0x5538;
  uRam00000001831c51c8 = (uRam00000001831c51c8 ^ uVar5) + 0x5538 ^ 0x62923297d1255a23;
  uRam00000001831c51d0 = (uRam00000001831c51d0 * -0x38316ab2d87c9527 ^ uRam00000001831c51c8) + uVar5
  ;
  uRam00000001831c5118 = uRam00000001831c51d0 ^ uRam00000001831c51c8;
  uRam00000001831c5180 = 0x5538;
  uVar5 = (~uRam00000001831c51e8 + 0x5539) *
          ((uVar3 ^ 0x84222325 ^ uRam00000001831c5268) +
          (ulonglong)((uint)uRam00000001831c5268 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam00000001831c51b8) + (uVar5 & uRam00000001831c51b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831c5198 =
       func_0x000188490d40((uVar3 ^ 0x8422761d | uVar5) +
                           (ulonglong)((uint)(uVar3 ^ 0x8422761d) & (uint)uVar5));
  uRam00000001831c5298 = uVar3 ^ 0x5538;
  uRam00000001831c5230 =
       (uRam00000001831c5230 ^ uRam00000001831c5198 * -0xc5028bce930e3c9) + uRam00000001831c5298 ^
       0x49962a6bb3dc55d;
  uRam00000001831c5268 =
       (uRam00000001831c5268 * 0x3b5ef7641e88cff7 ^ uRam00000001831c5230) +
       uRam00000001831c5198 * -0xc5028bce930e3c9;
  uRam00000001831c5158 = uRam00000001831c5268 ^ uRam00000001831c5230;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188488158 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f63490 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 188490dd0, runtime 6ffff00a0dd0) =====

void FUN_188490dd0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000188490e1b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f654e0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iZ; byC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 188491de0, runtime 6ffff00a1de0) =====

void FUN_188491de0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188491e69 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f65aa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byn (Lnet/minecraft/class_1799;)Ljava/util/List; (handler @ image 188476ec0, runtime 6ffff0086ec0) =====

void FUN_188476ec0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000188476f13 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f5efb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byo (Lnet/minecraft/class_1799;)Ljava/util/List; (handler @ image 188477700, runtime 6ffff0087700) =====

void FUN_188477700(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001884777c1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f5f2e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byp (Lnet/minecraft/class_1799;)Ljava/util/List; (handler @ image 1884acb10, runtime 6ffff00bcb10) =====

void FUN_1884acb10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001884acbd1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f698e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byq (Lnet/minecraft/class_2561;)Z (handler @ image 1884b16f0, runtime 6ffff00c16f0) =====

void FUN_1884b16f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001884b17b1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f6ad40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byr (Ljava/util/List;)Ljava/time/LocalDate; (handler @ image 1884b68f0, runtime 6ffff00c68f0) =====

void FUN_1884b68f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001884b694c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f6c4d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; bys (Ljava/lang/String;)Ljava/time/LocalDate; (handler @ image 1884b7680, runtime 6ffff00c7680) =====

void FUN_1884b7680(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001884b7757 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f6caa8 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}




// ===== Lsixtwo/iZ; byt (II)I (handler @ image 1884e4450, runtime 6ffff00f4450) =====

void FUN_1884e4450(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001884e4535 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f76200 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byu (IIII)Ljava/time/LocalDate; (handler @ image 1884edc80, runtime 6ffff00fdc80) =====

void FUN_1884edc80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001884edcd8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f78b70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byv (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; (handler @ image 1884ee250, runtime 6ffff00fe250) =====

undefined8 FUN_1884ee250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/iZ; byw ([B)Ljava/lang/String; (handler @ image 1884ee2e0, runtime 6ffff00fe2e0) =====

void FUN_1884ee2e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001884ee380 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f78f10 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iZ; byx (IJ)Ljava/lang/String; (handler @ image 18847b5a0, runtime 6ffff008b5a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847b5a0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = (uRam00000001831c5038 ^ _UNK_180f61f00) + uRam00000001831c4e30 + 0x351f1344e92a89ec;
  uVar9 = (uRam00000001831c4e30 ^ _UNK_180f61f08) + uRam00000001831c5038 + 0xab6c989723fe59a6;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c5038 ^ _UNK_180f61f00;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4e30 ^ _UNK_180f61f08;
  uRam00000001831c4e60 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831c5038 + 0xab6c989723fe59a6) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831c4e30 + 0x351f1344e92a89ec));
  uVar8 = uRam00000001831c4e60 - (uRam00000001831c4e60 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = uRam00000001831c4e60 ^ 0x351f13446d08aac9 ^
          (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5;
  uRam00000001831c4d10 = (uRam00000001831c4d10 ^ uVar8) + 0xbf7f9bd76ffefbef ^ 0xe500ade84c9107f;
  uRam00000001831c4df8 = (uRam00000001831c4df8 * 0x4a5ef3f8c6c19f23 ^ uRam00000001831c4d10) + uVar8;
  uRam00000001831c4e40 = uRam00000001831c4df8 ^ uRam00000001831c4d10;
  uRam00000001831c4fe0 = 0xbf7f9bd76ffefbef;
  uVar8 = (~uRam00000001831c4d48 + 0x7034ee7905e88442) *
          ((uRam00000001831c5038 ^ 0x48b9e2719a1f45b2) +
          (uRam00000001831c5038 & 0x48b9e2719a1f45b2) * 2);
  uVar8 = (uVar8 | uRam00000001831c4e00) + (uVar8 & uRam00000001831c4e00);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4e30 =
       func_0x000188482130((uVar8 | 0x388d0c089ff7c1f3) + (uVar8 & 0x388d0c089ff7c1f3));
  uVar8 = (uRam00000001831c4e30 ^ 0x711e3d6697) & 0xffffffffff;
  uRam00000001831c50b8 = (uRam00000001831c50b8 ^ uVar8) + 0x388d0c081bd5e2d6 ^ 0xe3cb82071b904be8;
  uRam00000001831c4f50 = (uRam00000001831c4f50 * -0x1dcb1197086773d5 ^ uRam00000001831c50b8) + uVar8
  ;
  uRam00000001831c4d58 = uRam00000001831c4f50 ^ uRam00000001831c50b8;
  uRam00000001831c5000 = 0x388d0c081bd5e2d6;
  uRam00000001831c4d38 = func_0x000188482130(uRam00000001831c5038 ^ 0x3d33ed7856369850);
  uVar8 = uRam00000001831c4d38 << 0x36 | uRam00000001831c4d38 >> 10;
  uRam00000001831c4e90 = (uRam00000001831c4e90 ^ uVar8) + 0x26c1a620e245a875 ^ 0xee35844fb388a2b9;
  uRam00000001831c5070 = (uRam00000001831c5070 * -0x5b58f777b52727e3 ^ uRam00000001831c4e90) + uVar8
  ;
  uRam00000001831c50b8 = uRam00000001831c5070 ^ uRam00000001831c4e90;
  uRam00000001831c4dd8 = 0x26c1a620e245a875;
  uVar8 = (~uRam00000001831c50f0 + 0xd93e59df1dba578c) *
          ((uRam00000001831c4ff0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001831c4ff0 & 0x84225cda) * 2);
  uVar8 = (uVar8 | uRam00000001831c4d90) + (uVar8 & uRam00000001831c4d90);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4fa0 =
       func_0x000188482130((uVar8 | 0xd93e59df99980b51) + (uVar8 & 0xd93e59df99980b51));
  uVar8 = (uRam00000001831c4fa0 ^ 0x53b134fe0e0b2875) & 0x7fffffffffffffff ^ 0xd93e59df1dba578b;
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar8;
  uRam00000001831c4fd0 = uRam00000001831c4d98 ^ uVar8 ^ 0xd93e59df1dbad78a;
  uRam00000001831c4d68 = (uRam00000001831c4d68 ^ uVar8) + 0xd93e59df1dbad78a ^ 0xeb3ca54d4dd118;
  uRam00000001831c5000 = (uRam00000001831c5000 * -0x6afdfd7c4922137d ^ uRam00000001831c4d68) + uVar8
  ;
  uRam00000001831c50d8 = uRam00000001831c5000 ^ uRam00000001831c4d68;
  uRam00000001831c5080 = 0xd93e59df1dbad78a;
  uVar8 = (~uRam00000001831c4eb8 + 0x26c1a620e245a876) *
          ((uRam00000001831c4d38 ^ 0xd93e59df9998f4af) +
          (uRam00000001831c4d38 & 0x593e59df9998f4af) * 2);
  uVar8 = (uVar8 | uRam00000001831c5008) + (uVar8 & uRam00000001831c5008);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c5028 =
       func_0x000188482130((uVar8 | 0xffffffff7bdd5cda) + (uVar8 & 0xffffffff7bdd5cda));
  uVar8 = uRam00000001831c5028 & 0xfffffffffffff000;
  uRam00000001831c4f70 = uRam00000001831c4ff8 ^ uVar8 ^ 0x7fff;
  uRam00000001831c4f48 = (uRam00000001831c4f48 ^ uVar8) + 0x7fff ^ 0xaa2e180b0049c373;
  uRam00000001831c50a0 = (uRam00000001831c50a0 * 0x616a3c7a57433333 ^ uRam00000001831c4f48) + uVar8;
  uRam00000001831c5048 = uRam00000001831c50a0 ^ uRam00000001831c4f48;
  uRam00000001831c4de0 = 0x7fff;
  uRam00000001831c4df0 = func_0x000188482130(uRam00000001831c4dd8 ^ 0xec3bb806953fce69);
  uVar8 = uRam00000001831c4df0 & 0x1ffffffffffffff ^ 0xfd4840149a706fb2;
  uRam00000001831c50f0 = (uRam00000001831c50f0 ^ uVar8) + 0x2b7bfeb658f904e ^ 0x746c564374148c5;
  uRam00000001831c4d30 = (uRam00000001831c4d30 * -0x5a1b12ff4fb99e9f ^ uRam00000001831c50f0) + uVar8
  ;
  uRam00000001831c5048 = uRam00000001831c4d30 ^ uRam00000001831c50f0;
  uRam00000001831c4ff8 = 0x2b7bfeb658f904e;
  uRam00000001831c4d00 = func_0x000188482130(uRam00000001831c50f8 + 0xf3cd480257c04dc4 ^ 0x13);
  uVar8 = uRam00000001831c4d00 ^ 0x7fff;
  uRam00000001831c4dc8 = uRam00000001831c4e00 ^ uVar8 ^ 0xfd4840149a70efb1;
  uRam00000001831c4e30 = (uRam00000001831c4e30 ^ uVar8) + 0xfd4840149a70efb1 ^ 0x72d7bea6b9240ce;
  uRam00000001831c50a8 = (uRam00000001831c50a8 * -0x44fcfd7e146f5f77 ^ uRam00000001831c4e30) + uVar8
  ;
  uRam00000001831c4e00 = uRam00000001831c50a8 ^ uRam00000001831c4e30;
  uRam00000001831c4f70 = 0xfd4840149a70efb1;
  uVar8 = (~uRam00000001831c4e90 + 0xc2e9d565d293cdfa) *
          ((uRam00000001831c4ec0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831c4ec0 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam00000001831c4f00) + (uVar8 & uRam00000001831c4f00);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4f78 =
       func_0x000188482130((uVar8 | 0xc2e9d56556b1eedc) + (uVar8 & 0xc2e9d56556b1eedc));
  uRam00000001831c4fa8 =
       (uRam00000001831c4fa8 ^ uRam00000001831c4f78) + 0x3d162a9a2d6c3207 ^ 0x9a7d1741d5017439;
  uRam00000001831c4e90 =
       (uRam00000001831c4e90 * -0x74647153da718a85 ^ uRam00000001831c4fa8) + uRam00000001831c4f78;
  uRam00000001831c4f50 = uRam00000001831c4e90 ^ uRam00000001831c4fa8;
  uRam00000001831c50e0 = 0x3d162a9a2d6c3207;
  uVar8 = (uRam00000001831c4f20 ^ _UNK_180f61f10) + uRam00000001831c4e60 + 0x84225cda;
  uVar9 = (uRam00000001831c4e60 ^ _UNK_180f61f18) + uRam00000001831c4f20 + 0xc2e9d565d293cdf9;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4f20 ^ _UNK_180f61f10;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4e60 ^ _UNK_180f61f18;
  uRam00000001831c4d08 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831c4f20 + 0xc2e9d565d293cdf9) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4e60 + 0x84225cda));
  uRam00000001831c4e60 = uRam00000001831c5070 ^ uRam00000001831c4d08 ^ 0xc2e9d565d2944df8;
  uRam00000001831c5088 =
       (uRam00000001831c5088 ^ uRam00000001831c4d08) + 0xc2e9d565d2944df8 ^ 0x46e18dedb6c1aa4e;
  uRam00000001831c4dd0 =
       (uRam00000001831c4dd0 * -0x4b89b27c82f12b9b ^ uRam00000001831c5088) + uRam00000001831c4d08;
  uRam00000001831c4fd8 = uRam00000001831c4dd0 ^ uRam00000001831c5088;
  uRam00000001831c4e38 = 0xc2e9d565d2944df8;
  uVar8 = (uRam00000001831c4ec8 ^ _UNK_180f61f20) + uRam00000001831c50d0 + 0xc2e9d56556b66edd;
  uVar9 = (uRam00000001831c50d0 ^ _UNK_180f61f28) + uRam00000001831c4ec8 + 0x3d162a9a2d6c3207;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4ec8 ^ _UNK_180f61f20;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c50d0 ^ _UNK_180f61f28;
  uRam00000001831c4d90 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831c4ec8 + 0x3d162a9a2d6c3207) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831c50d0 + 0xc2e9d56556b66edd));
  uRam00000001831c5048 = (uRam00000001831c5048 ^ uRam00000001831c4d90) + 0x7fff ^ 0xa02f83c38fd015ea
  ;
  uRam00000001831c5098 =
       ((uRam00000001831c4d30 ^ uRam00000001831c4d90 ^ 0x7fff) * 0x2240237969ae30b7 ^
       uRam00000001831c5048) + uRam00000001831c4d90;
  uRam00000001831c4f68 = uRam00000001831c5098 ^ uRam00000001831c5048;
  uRam00000001831c50c8 = 0x7fff;
  uVar8 = (uRam00000001831c50b0 ^ _UNK_180f61f30) + uRam00000001831c5070 + 0xbf7f9bd7ebdcd8ca;
  uVar9 = (uRam00000001831c5070 ^ _UNK_180f61f38) + uRam00000001831c50b0 + 0x388d0c081bd5e2d6;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c50b0 ^ _UNK_180f61f30;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c5070 ^ _UNK_180f61f38;
  uRam00000001831c4f50 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831c50b0 + 0x388d0c081bd5e2d6) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831c5070 + 0xbf7f9bd7ebdcd8ca));
  uVar8 = uRam00000001831c4f50 ^ 0x9dba9e288c6a97ca;
  uRam00000001831c4f08 = uRam00000001831c4d68 ^ uVar8 ^ 0xf80ca7df8bd4dec5;
  uRam00000001831c50e8 = (uRam00000001831c50e8 ^ uVar8) + 0xf80ca7df8bd4dec5 ^ 0xc2a937529d4e6626;
  uRam00000001831c4de8 = (uRam00000001831c4de8 * -0x56b93e5fd3e8efed ^ uRam00000001831c50e8) + uVar8
  ;
  uRam00000001831c4ed0 = uRam00000001831c4de8 ^ uRam00000001831c50e8;
  uRam00000001831c4dd8 = 0xf80ca7df8bd4dec5;
  uVar8 = (uRam00000001831c4f88 ^ _UNK_180f61f40) + uRam00000001831c5038 + 0xf80ca7df0ff6fde0;
  uVar9 = (uRam00000001831c5038 ^ _UNK_180f61f48) + uRam00000001831c4f88 + 0xf80ca7df8bd4dec5;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4f88 ^ _UNK_180f61f40;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c5038 ^ _UNK_180f61f48;
  uRam00000001831c4dd8 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831c4f88 + 0xf80ca7df8bd4dec5) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831c5038 + 0xf80ca7df0ff6fde0));
  uRam00000001831c4e90 = uRam00000001831c4dd8 * 0x4e76c4d1206c2373 ^ 0xf80ca7df8bd4dec5;
  uRam00000001831c5018 = uRam00000001831c5018 ^ uRam00000001831c4e90 ^ 0x1551a273edc141c3;
  uRam00000001831c4e90 =
       (uRam00000001831c4e90 * 0x5d86c47e5d8a2945 ^ uRam00000001831c5018) + uRam00000001831c4e90;
  uRam00000001831c4d08 = uRam00000001831c4e90 ^ uRam00000001831c5018;
  uRam00000001831c4d78 = 0;
  uVar8 = ((uRam00000001831c4f28 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001831c4f28 & 0x84225cda) * 2) * -lRam00000001831c4f40;
  uVar8 = (uVar8 | uRam00000001831c4fd0) + (uVar8 & uRam00000001831c4fd0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4e80 =
       func_0x000188482130((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  uVar8 = uRam00000001831c4e80 ^ 0x7fff;
  uRam00000001831c4d90 = uRam00000001831c4d48 ^ uVar8 ^ 0x7fff;
  uRam00000001831c4d80 = (uRam00000001831c4d80 ^ uVar8) + 0x7fff ^ 0xd046faaddb91f870;
  uRam00000001831c50f8 = (uRam00000001831c50f8 * -0x26373ec02e2f80bd ^ uRam00000001831c4d80) + uVar8
  ;
  uRam00000001831c4e88 = uRam00000001831c50f8 ^ uRam00000001831c4d80;
  uRam00000001831c4fa0 = 0x7fff;
  uVar8 = (uRam00000001831c4dc8 ^ _UNK_180f61f50) + uRam00000001831c4fb0 + 0xbf7f9bd7ebdcd8ca;
  uVar9 = (uRam00000001831c4fb0 ^ _UNK_180f61f58) + (uRam00000001831c4dc8 - 1);
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4dc8 ^ _UNK_180f61f50;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4fb0 ^ _UNK_180f61f58;
  uRam00000001831c50e0 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831c4dc8 - 1) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831c4fb0 + 0xbf7f9bd7ebdcd8ca));
  uRam00000001831c4ef8 =
       (uRam00000001831c4ef8 ^ ~uRam00000001831c50e0 & 0xbf7f9bd76ffefbef) + 0x4080642890010410 ^
       0x3a2f21dd654b8d0b;
  uRam00000001831c4fa0 =
       (uRam00000001831c4fa0 * -0x24ae1349ffa857d9 ^ uRam00000001831c4ef8) +
       (~uRam00000001831c50e0 & 0xbf7f9bd76ffefbef);
  uRam00000001831c4ea8 = uRam00000001831c4fa0 ^ uRam00000001831c4ef8;
  uRam00000001831c4da8 = 0x4080642890010410;
  uVar8 = (~uRam00000001831c4dc8 + 0x4080642890010411) *
          ((uRam00000001831c4d30 ^ 0xbf7f9bd7ebdcd8ca) +
          (uRam00000001831c4d30 & 0x3f7f9bd7ebdcd8ca) * 2);
  uVar8 = (uVar8 | uRam00000001831c4d80) + (uVar8 & uRam00000001831c4d80);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4fd8 =
       func_0x000188482130((uVar8 | 0xffffffff7bdddcda) + (uVar8 & 0xffffffff7bdddcda));
  uVar8 = uRam00000001831c4fd8 >> 1 | uRam00000001831c4fd8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam00000001831c4fd8) & 0x1fffffffff;
  uRam00000001831c4f38 = uRam00000001831c4f38 ^ uVar8 ^ 0x91a6ac834be4fad5;
  uRam00000001831c4fa8 =
       (uRam00000001831c4fa8 * 0x43a392f779656d07 ^ uRam00000001831c4f38) + uVar8 ^
       uRam00000001831c4f38;
  uRam00000001831c5020 = 0;
  uVar8 = (uRam00000001831c4fa8 ^ 0x84225cda) + uRam00000001831c4df8 + 0x84225cda;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4fa8 ^ 0x84225cda;
  uVar9 = ((uRam00000001831c4df8 + uRam00000001831c4fa8) * 0x2000 |
          uRam00000001831c4df8 + uRam00000001831c4fa8 >> 0x33) ^ uRam00000001831c4df8;
  uRam00000001831c4de8 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - uRam00000001831c4fa8 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4df8 + 0x84225cda));
  uRam00000001831c4ef8 = uRam00000001831c4fa0 ^ uRam00000001831c4de8 ^ 0x7fff;
  uRam00000001831c4d18 = (uRam00000001831c4d18 ^ uRam00000001831c4de8) + 0x7fff ^ 0x6a3481d765639f71
  ;
  uRam00000001831c4e90 =
       (uRam00000001831c4e90 * -0x450bab3b373f1bb1 ^ uRam00000001831c4d18) + uRam00000001831c4de8;
  uRam00000001831c4f70 = uRam00000001831c4fd0 ^ 0x7fff;
  uRam00000001831c4f88 = 0x7fff;
  uVar8 = (uRam00000001831c4ec8 ^ _UNK_180f61f60) + uRam00000001831c4da0 + 0x351f1344e92a89ec;
  uVar9 = (uRam00000001831c4da0 ^ _UNK_180f61f68) + uRam00000001831c4ec8 + 0x351f13446d08aac9;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4ec8 ^ _UNK_180f61f60;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4da0 ^ _UNK_180f61f68;
  uRam00000001831c5048 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831c4ec8 + 0x351f13446d08aac9) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001831c4da0 + 0x351f1344e92a89ec));
  auVar7 = _UNK_1800170c0;
  uVar8 = uRam00000001831c5048 << 0x3d | uRam00000001831c5048 >> 3;
  uRam00000001831c4ea0 = uRam00000001831c4ea0 ^ uVar8 ^ 0x602a25e6d85aeb31;
  uRam00000001831c4e00 = (uRam00000001831c4e00 * -0x55e99ff6fd877cd7 ^ uRam00000001831c4ea0) + uVar8
  ;
  uRam00000001831c4fc8 = uRam00000001831c4e00 ^ uRam00000001831c4ea0;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  uRam00000001831c4f80 = 0;
  auVar6 = pshufb(auVar5 ^ _UNK_180f61f70,_UNK_1800170c0);
  uVar9 = auVar6._8_8_ + auVar6._0_8_;
  uVar8 = uVar9 + uRam00000001831c5040;
  if (auVar6._4_4_ < 0) {
    uVar8 = uRam00000001831c4fb8 ^ uVar9;
  }
  uRam00000001831c4e28 = func_0x000188482130(SUB161(auVar5 ^ _UNK_180f61f70,5) ^ uVar8);
  uVar8 = param_4 ^ param_4 * 0x7fff ^ uRam00000001831c4e28;
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar8 = ((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8) &
          0x7ffffffffff;
  uVar3 = (uint)param_4 & 0x7fff;
  uRam00000001831c4d10 = (ulonglong)uVar3;
  uRam00000001831c4db8 = (uRam00000001831c4db8 ^ uVar8) + uRam00000001831c4d10 ^ 0x281daa7a9b9197a3;
  uRam00000001831c4d80 = (uRam00000001831c4d80 * -0x46e29ab8167d7d75 ^ uRam00000001831c4db8) + uVar8
  ;
  uRam00000001831c4f48 = uRam00000001831c4d80 ^ uRam00000001831c4db8;
  uVar3 = uVar3 ^ param_3;
  uVar8 = (~uRam00000001831c4ff8 + 0x3b0e3b3b) *
          ((uRam00000001831c4d50 ^ 0x9b72bfc6) +
          (ulonglong)((uint)uRam00000001831c4d50 & 0x9b72bfc6) * 2);
  uVar8 = (uVar8 | uRam00000001831c4d70) + (uVar8 & uRam00000001831c4d70);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4fa8 =
       func_0x000188482130((uVar8 | 0xa07c84fc) + (ulonglong)((uint)uVar8 & 0xa07c84fc));
  uRam00000001831c4db0 =
       (uRam00000001831c4db0 ^ uRam00000001831c4fa8) + 0x3f5ebffb ^ 0x23f20523751d6706;
  uRam00000001831c50d8 =
       (uRam00000001831c50d8 * -0xf4748d78396213d ^ uRam00000001831c4db0) + uRam00000001831c4fa8;
  uRam00000001831c50c0 = uRam00000001831c50d8 ^ uRam00000001831c4db0;
  uRam00000001831c5088 = 0x3f5ebffb;
  uVar8 = (~uRam00000001831c4f00 + 0x1a4702d6) *
          ((uRam00000001831c4ff8 ^ 0x22c42791) +
          (ulonglong)((uint)uRam00000001831c4ff8 & 0x22c42791) * 2);
  uVar8 = (uVar8 | uRam00000001831c4e98) + (uVar8 & uRam00000001831c4e98);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4d80 =
       func_0x000188482130((uVar8 | 0x38832544) + (ulonglong)((uint)uVar8 & 0x38832544));
  uRam00000001831c50c8 =
       (uRam00000001831c50c8 ^ uRam00000001831c4d80) + 0xbca10661 ^ 0xfd9f554a80d05d26;
  uRam00000001831c4e50 =
       (uRam00000001831c4e50 * 0xfcc0dd52d3e993d ^ uRam00000001831c50c8) + uRam00000001831c4d80;
  uRam00000001831c5080 = uRam00000001831c4e50 ^ uRam00000001831c50c8;
  uRam00000001831c4d70 = 0xbca10661;
  uVar8 = (uRam00000001831c4ef8 ^ _UNK_180f61f80) + uRam00000001831c4f70 + 0x84222325;
  uVar9 = (uRam00000001831c4f70 ^ _UNK_180f61f88) + uRam00000001831c4ef8 + 0xe15b9487;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4ef8 ^ _UNK_180f61f80;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4f70 ^ _UNK_180f61f88;
  uRam00000001831c5010 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831c4ef8 + 0xe15b9487) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4f70 + 0x84222325));
  uVar8 = (uRam00000001831c5010 & 0xffffffffffffffe0) << 0x26 | uRam00000001831c5010 >> 0x1a;
  uRam00000001831c5050 = (uRam00000001831c5050 ^ uVar8) - 0xe15b9487 ^ 0x464bfab3aa546ae9;
  uRam00000001831c4d20 = (uRam00000001831c4d20 * 0x5d823094ece53979 ^ uRam00000001831c5050) + uVar8;
  uRam00000001831c4fa8 = uRam00000001831c4d20 ^ uRam00000001831c5050;
  uRam00000001831c50f8 = 0x1ea46b79;
  uVar8 = (uRam00000001831c4e78 ^ _UNK_180f61f90) + uRam00000001831c4db8 + 0x84222d83;
  uVar9 = (uRam00000001831c4db8 ^ _UNK_180f61f98) + uRam00000001831c4e78 + 0xe15b9487;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4e78 ^ _UNK_180f61f90;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4db8 ^ _UNK_180f61f98;
  uRam00000001831c4ee8 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831c4e78 + 0xe15b9487) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4db8 + 0x84222d83));
  uVar9 = (uRam00000001831c4ee8 ^ 0xce52381b18a) << 0x12 |
          uRam00000001831c4ee8 >> 0x2e & 0xfffffffffffffffe;
  uRam00000001831c4d08 = uRam00000001831c4d18 ^ uVar9 ^ 0xe15ba32d;
  uVar8 = (uRam00000001831c5010 ^ uVar9) + 0xe15ba32d;
  uRam00000001831c5010 = uVar8 ^ 0x631c25e1ceac54be;
  uRam00000001831c4eb8 = (uRam00000001831c4eb8 * -0x48687515eae6de79 ^ uRam00000001831c5010) + uVar9
  ;
  uRam00000001831c4df8 = uRam00000001831c4eb8 ^ uRam00000001831c5010;
  uRam00000001831c4d60 = 0xe15ba32d;
  uRam00000001831c50a8 = func_0x000188482130(uVar8 ^ 0x9c8525f4a0537e2b);
  uVar8 = uRam00000001831c50a8 << 0x2c | uRam00000001831c50a8 >> 0x14;
  uRam00000001831c4e80 = uRam00000001831c4eb0 ^ uVar8 ^ 0x100000ea6;
  uRam00000001831c4e20 = (uRam00000001831c4e20 ^ uVar8) + 0x100000ea6 ^ 0x49ec34587873363f;
  uRam00000001831c50e0 = (uRam00000001831c50e0 * -0x251f73ef8b48951f ^ uRam00000001831c4e20) + uVar8
  ;
  uRam00000001831c4f80 = uRam00000001831c50e0 ^ uRam00000001831c4e20;
  uRam00000001831c4d08 = 0xea6;
  uVar8 = (~uRam00000001831c4e18 + 0x1196ead1) *
          ((uRam00000001831c4d40 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831c4d40 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam00000001831c4e80) + (uVar8 & uRam00000001831c4e80);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4d18 =
       func_0x000188482130((uVar8 | 0x95b4c9f5) + (ulonglong)((uint)uVar8 & 0x95b4c9f5));
  uRam00000001831c4ef8 =
       (uRam00000001831c4ef8 ^ uRam00000001831c4d18) - 0x1196ead0 ^ 0x95756aeb96dc7eb;
  uRam00000001831c4e10 =
       (uRam00000001831c4e10 * 0xc0e0b1c8a71723b ^ uRam00000001831c4ef8) + uRam00000001831c4d18;
  uRam00000001831c50b0 = uRam00000001831c4e10 ^ uRam00000001831c4ef8;
  uRam00000001831c50a8 = 0xee691530;
  uVar8 = (uRam00000001831c4dd8 ^ _UNK_180f61fa0) + uRam00000001831c4d58 + 0x84222d83;
  uVar9 = (uRam00000001831c4d58 ^ _UNK_180f61fa8) + uRam00000001831c4dd8 + 0x1196ead0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4dd8 ^ _UNK_180f61fa0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4d58 ^ _UNK_180f61fa8;
  uRam00000001831c50b0 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831c4dd8 + 0x1196ead0) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4d58 + 0x84222d83));
  uVar8 = uRam00000001831c50b0 ^ 0xea6;
  uRam00000001831c4d90 = uRam00000001831c4d88 ^ uVar8 ^ 0x1196f976;
  uRam00000001831c4ed8 = (uRam00000001831c4ed8 ^ uVar8) + 0x1196f976 ^ 0xbd9ac2ae8255cbcc;
  uRam00000001831c4fb0 = (uRam00000001831c4fb0 * 0x41b3cc6f545dd40d ^ uRam00000001831c4ed8) + uVar8;
  uRam00000001831c4da8 = uRam00000001831c4fb0 ^ uRam00000001831c4ed8;
  uRam00000001831c4dc8 = 0x1196f976;
  uVar8 = (uRam00000001831c4e20 ^ _UNK_180f61fb0) + uRam00000001831c4eb8 + 0x95b4da53;
  uVar9 = (uRam00000001831c4eb8 ^ _UNK_180f61fb8) + uRam00000001831c4e20 + 0xee691530;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4e20 ^ _UNK_180f61fb0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4eb8 ^ _UNK_180f61fb8;
  uRam00000001831c5040 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831c4e20 + 0xee691530) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4eb8 + 0x95b4da53));
  uRam00000001831c4e68 = uRam00000001831c4ff0 ^ uRam00000001831c5040 ^ 0x100000ea6;
  uRam00000001831c4ea8 =
       (uRam00000001831c4ea8 ^ uRam00000001831c5040) + 0x100000ea6 ^ 0xbff61268cf94337a;
  uRam00000001831c4ed0 =
       (uRam00000001831c4ed0 * 0xa44028c18a59ec3 ^ uRam00000001831c4ea8) + uRam00000001831c5040;
  uRam00000001831c4d60 = uRam00000001831c4ed0 ^ uRam00000001831c4ea8;
  uRam00000001831c4ec0 = 0xea6;
  uVar8 = (uRam00000001831c4db0 ^ _UNK_180f61fc0) + uRam00000001831c4e58 + 0x84222325;
  uVar9 = (uRam00000001831c4e58 ^ _UNK_180f61fc8) + uRam00000001831c4db0 + 0x8f9644ec;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4db0 ^ _UNK_180f61fc0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4e58 ^ _UNK_180f61fc8;
  uRam00000001831c4e98 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831c4db0 + 0x8f9644ec) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4e58 + 0x84222325));
  uVar8 = (uRam00000001831c4e98 ^ 0x8f9644ec) & 0x1ffffffffff;
  uRam00000001831c4fa8 = (uRam00000001831c4fa8 ^ uVar8) - 0x8f9644ec ^ 0xad8cd303c28da767;
  uRam00000001831c4d10 = (uRam00000001831c4d10 * 0x7ae42ed9027ddecb ^ uRam00000001831c4fa8) + uVar8;
  uRam00000001831c50a8 = uRam00000001831c4d10 ^ uRam00000001831c4fa8;
  uRam00000001831c4f30 = 0x7069bb14;
  uVar8 = (uRam00000001831c4e78 ^ _UNK_180f61fd0) + uRam00000001831c4d50 + 0xbb470b7;
  uVar9 = (uRam00000001831c4d50 ^ _UNK_180f61fd8) + uRam00000001831c4e78 + 0x7069bb14;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4e78 ^ _UNK_180f61fd0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4d50 ^ _UNK_180f61fd8;
  uRam00000001831c4d90 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831c4e78 + 0x7069bb14) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4d50 + 0xbb470b7));
  uVar8 = (uRam00000001831c4d90 & 0xfff) << 0x2f | uRam00000001831c4d90 >> 0x11;
  uRam00000001831c4fa8 = (uRam00000001831c4fa8 ^ uVar8) + 0x100000ea6 ^ 0x30424ad8683776f;
  uRam00000001831c4e88 = (uRam00000001831c4e88 * 0x37d9d757414e06b7 ^ uRam00000001831c4fa8) + uVar8;
  uRam00000001831c5010 = uRam00000001831c4e88 ^ uRam00000001831c4fa8;
  uRam00000001831c4ea0 = 0xea6;
  uVar8 = (uRam00000001831c4e58 ^ _UNK_180f61fe0) + uRam00000001831c4dd8 + 0xbb7c9cde;
  uVar9 = (uRam00000001831c4dd8 ^ _UNK_180f61fe8) + uRam00000001831c4e58 + 0xbca10661;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001831c4e58 ^ _UNK_180f61fe0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831c4dd8 ^ _UNK_180f61fe8;
  uRam00000001831c4f90 =
       func_0x000188482130((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831c4e58 + 0xbca10661) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001831c4dd8 + 0xbb7c9cde));
  uVar8 = (ulonglong)(~(uint)uRam00000001831c4f90 & 0x3f5ebffb);
  uRam00000001831c4d58 = (uRam00000001831c4d58 ^ uVar8) + 0x3c000661 ^ 0x93e1cb5608aefd5a;
  uRam00000001831c5008 = (uRam00000001831c5008 * -0x30ac77c0c5d4f01 ^ uRam00000001831c4d58) + uVar8;
  uRam00000001831c4f20 = uRam00000001831c5008 ^ uRam00000001831c4d58;
  uRam00000001831c4f30 = 0x3c000661;
  uVar8 = (~uRam00000001831c4d28 + 0xfbffc65d) *
          ((uRam00000001831c4f20 ^ 0x7fdde579) +
          (ulonglong)((uint)uRam00000001831c4f20 & 0x7fdde579) * 2);
  uVar8 = (uVar8 | uRam00000001831c4fa8) + (uVar8 & uRam00000001831c4fa8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c50d0 =
       func_0x000188482130((uVar8 | 0x84222325) + (ulonglong)((uint)uVar8 & 0x84222325));
  uVar8 = (uRam00000001831c50d0 ^ 0xf80f8e852cfa7110) >> 1 |
          uRam00000001831c50d0 ^ 0xf80f8e852cfa7110;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uRam00000001831c4d80 =
       uRam00000001831c50d0 ^ 0xf80f8e85d705b74c ^
       (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20;
  uRam00000001831c4d10 = uRam00000001831c4d10 ^ uRam00000001831c4d80 ^ 0x97491949ab2eb6e4;
  uRam00000001831c4d68 =
       (uRam00000001831c4d68 * 0x1acb3532d015c9f1 ^ uRam00000001831c4d10) + uRam00000001831c4d80;
  uRam00000001831c4d50 = uRam00000001831c4d68 ^ uRam00000001831c4d10;
  uRam00000001831c4f20 = 0;
  uRam00000001831c4ea8 = func_0x000188482130(uRam00000001831c4d48 + 0xffa300441eff7eff ^ 0x2a);
  uVar9 = uRam00000001831c4ea8 << 7 ^ 0xaf5ffd6050a00280;
  uVar8 = uVar9 >> 7;
  uVar9 = uVar8 - (uVar9 >> 8 & 0x55555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar1 + (uint)bVar1 ^ uVar8;
  uRam00000001831c5050 = (uRam00000001831c5050 ^ uVar8) + 0xc0a14004 ^ 0xecc3763fcc5dc22;
  uRam00000001831c5018 = (uRam00000001831c5018 * 0x44dba6ae93739d1b ^ uRam00000001831c5050) + uVar8;
  uRam00000001831c4f10 = uRam00000001831c5018 ^ uRam00000001831c5050;
  uRam00000001831c5078 = 0xc0a14004;
  uRam00000001831c50e8 = func_0x000188482130(uRam00000001831c5098 ^ 0x4bfff65a00dc33);
  uVar8 = (uRam00000001831c50e8 ^ 0x2faefa6b6af5ffe8) & 0x7fffffffffffffff;
  uRam00000001831c4e20 = uRam00000001831c4e20 ^ uVar8 ^ 0x87a645e00f025d13;
  uRam00000001831c5088 = (uRam00000001831c5088 * -0x40859b13e52cf525 ^ uRam00000001831c4e20) + uVar8
  ;
  uRam00000001831c4e40 = uRam00000001831c5088 ^ uRam00000001831c4e20;
  uRam00000001831c4ff0 = uRam00000001831c4db0;
  uRam00000001831c4d30 = 0;
  uRam00000001831c4e28 = func_0x000188482130(uRam00000001831c4f88 ^ 0x2aff7b83001d05);
  uVar8 = uRam00000001831c4e28 << 0x1c | uRam00000001831c4e28 >> 0x24;
  uRam00000001831c4fb8 = uRam00000001831c4f00 ^ uVar8 ^ 0xea6;
  uVar9 = (uRam00000001831c5098 ^ uVar8) + 0xea6;
  uRam00000001831c5098 = uVar9 ^ 0x737060b18526a3af;
  uRam00000001831c4f60 = (uRam00000001831c4f60 * 0x24645224ea58a18f ^ uRam00000001831c5098) + uVar8;
  uRam00000001831c4d30 = uRam00000001831c4f60 ^ uRam00000001831c5098;
  uRam00000001831c4d40 = uRam00000001831c4e90 ^ 0xea6;
  uRam00000001831c4ed8 = 0xea6;
  uVar8 = (~uRam00000001831c5068 + 0x1f509ce4) *
          ((uVar9 ^ 0x737060b11e541c69) + (ulonglong)((uint)uRam00000001831c5098 & 0x9b72bfc6) * 2);
  uVar8 = (uVar8 | uRam00000001831c5008) + (uVar8 & uRam00000001831c5008);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam00000001831c4df8 =
       func_0x000188482130((uVar8 | 0x84222325) + (ulonglong)((uint)uVar8 & 0x84222325));
  uVar8 = uRam00000001831c4df8 >> 1 | uRam00000001831c4df8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001831c4df8;
  uRam00000001831c4dc0 = uRam00000001831c4dc0 ^ uVar8 ^ 0x467307ecd781e26e;
  uRam00000001831c4f98 = (uRam00000001831c4f98 * -0x3ecd11ffb028e2d7 ^ uRam00000001831c4dc0) + uVar8
  ;
  uRam00000001831c5050 = uRam00000001831c4f98 ^ uRam00000001831c4dc0;
  uRam00000001831c5018 = 0;
  uVar8 = func_0x000188482130(uRam00000001831c5088 + 0x1b007b81001dff ^ 0x29);
  uRam00000001831c4df8 = uVar8 << 0x18 | uVar8 >> 0x28 & 0xfffffffffff00000;
  uRam00000001831c4e10 = uRam00000001831c5010 ^ uRam00000001831c4df8 ^ 0xea6;
  uRam00000001831c4fb8 = (uRam00000001831c4fb8 ^ uRam00000001831c4df8) + 0xea6 ^ 0x1ac8c2a2129b5d74;
  uRam00000001831c4df8 = (uVar8 * 0x1356a1559746b2e1 ^ uRam00000001831c4fb8) + uRam00000001831c4df8;
  uRam00000001831c4d58 = uRam00000001831c4df8 ^ uRam00000001831c4fb8;
  auVar6._8_8_ = _UNK_180f61ff8;
  auVar6._0_8_ = (ulonglong)uVar3 ^ 0x84222325;
  uRam00000001831c4da8 = 0xea6;
  auVar7 = pshufb(auVar6 ^ _UNK_180f62000,auVar7);
  uVar9 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar9 + uRam00000001831c4d10;
  if (auVar7._4_4_ < 0) {
    uVar8 = uRam00000001831c4d40 ^ uVar9;
  }
  uRam00000001831c4db0 = func_0x000188482130(SUB161(auVar6 ^ _UNK_180f62000,5) ^ uVar8);
  uVar8 = uRam00000001831c4db0 << 0xf | uRam00000001831c4db0 >> 0x31;
  lVar4 = (ulonglong)uVar3 - (ulonglong)((uVar3 & 0xea6) * 2);
  uRam00000001831c4ee8 = (uRam00000001831c4ee8 ^ uVar8) + lVar4 + 0xea6 ^ 0x591839a7fab4932d;
  uRam00000001831c50b8 = (uRam00000001831c50b8 * 0x216b444e2f3f8e57 ^ uRam00000001831c4ee8) + uVar8;
  uRam00000001831c5030 = uRam00000001831c50b8 ^ uRam00000001831c4ee8;
  uRam00000001831c5060 = lVar4 + 0xea6U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x19704,0x400)
      /* POOL[0x19704,0x400]: Field | OmWGy | YUgmI | byk | zULzJ | byj | sixtwo/iZ | ggewT | field_49632 | net/minecraft/class_9290 | byv | (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException; | comp_2400 | emptyList | method_539 | sixtwo/ru | djG | method_10866 | ()Lnet/minecraft/class_2583; | net/minecraft/class_2583 | method_10965 | SUbYg | method_10855 | find | group | bys | (Ljava/lang/String;)Ljava/time/LocalDate; | byq | (Lnet/minecraft/class_2561;)Z | java/time/DateTimeException | java/time/LocalDate | (III)Ljava/time/LocalDate; | esHGA | XvLvS | byx | byu | (IIII)Ljava/time/LocalDate; | byt | bWjiG | byw |  */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018847dc62 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f60578 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/iZ; byy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1884821c0, runtime 6ffff00921c0) =====

void FUN_1884821c0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001884821fc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f62050 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/iZ; byz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1884830b0, runtime 6ffff00930b0) =====

void FUN_1884830b0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018848312d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f62590 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x8476f16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188476f16(void)

{
  FUN_190ddce00();
  (*_DAT_180f5f088)();
  return;
}


// ----- block @ rva 0x8476fa8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188476fa8(void)

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


// ----- block @ rva 0x8476fc9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188476fc9(void)

{
  FUN_190dd72e0();
  (*_DAT_180f5f0f8)();
  return;
}


// ----- block @ rva 0x8477120 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188477120(void)

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


// ----- block @ rva 0x8477294 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188477294(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180f5f168)();
  return;
}


// ----- block @ rva 0x8477366 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188477366(void)

{
  FUN_190dd72e0();
  (*_DAT_180f5f008)();
  return;
}


// ----- block @ rva 0x847738e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18847738e(void)

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


// ----- block @ rva 0x84773cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884773cc(void)

{
  longlong in_stack_00000048;
  
  (*_DAT_180f5f098)(in_stack_00000048 == 0);
  return;
}


// ----- block @ rva 0x8477569 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188477569(void)

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


// ----- block @ rva 0x84775d8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884775d8(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180f5f118)();
  return;
}


// ----- block @ rva 0x8477615 -----

void FUN_188477615(void)

{
  return;
}


// ----- block @ rva 0x84777c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884777c4(void)

{
  FUN_190ddce00();
  (*_DAT_180f5f748)();
  return;
}


// ----- block @ rva 0x84778a5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884778a5(void)

{
  byte bVar1;
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar19;
  undefined1 auVar12 [16];
  uint uVar18;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  undefined1 auVar36 [16];
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulonglong uStack0000000000000080;
  ulonglong in_stack_000000a8;
  
  uVar8 = _DAT_180f5f298;
  uVar4 = _DAT_180f5f290;
  uVar3 = _DAT_180f5f298 ^ 0x84222325 ^ in_RAX;
  lVar5 = (_DAT_180f5f298 ^ 0x84222325) + _DAT_1831c4950;
  uVar11 = uVar3 + lVar5;
  uVar19 = (_DAT_1831c4950 ^ 0xf062affe2e23901a) + in_RAX + 0xf062affe2e23901a;
  uVar3 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar3;
  uVar11 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ _DAT_1831c4950 ^ 0xf062affe2e23901a;
  uVar6 = _DAT_180f5f290 | 0xa91be513ff466570;
  _DAT_1831c4c58 =
       func_0x00018847b510((uVar11 << 0x1d | uVar11 >> 0x23) - (in_RAX + 0xf062affe2e23901a) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar3 = uVar8 ^ _DAT_1831c4c58 & 0x3ffffffff;
  uVar11 = uVar8 ^ 0xf062affe2e23901a;
  _DAT_1831c4c50 = (_DAT_1831c4c50 ^ uVar3) + uVar11 ^ 0xe6ae892d428c7611;
  _DAT_1831c4ac0 = (_DAT_1831c4ac0 * -0x4e9dc2a1b7554383 ^ _DAT_1831c4c50) + uVar3;
  _DAT_1831c4cc8 = _DAT_1831c4ac0 ^ _DAT_1831c4c50;
  lVar5 = uVar4 * uVar4;
  uVar4 = lVar5 * 0xa4411dc3e9b1f91;
  uVar3 = (_DAT_1831c4920 ^ 0x84222325) + _DAT_1831c4a20 + 0x84222325;
  uVar19 = (uVar4 ^ _DAT_1831c4a20) + _DAT_1831c4920 + uVar4;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1831c4920 ^ 0x84222325;
  uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar4 ^ _DAT_1831c4a20;
  _DAT_1831c49c8 = uVar11;
  _DAT_1831c4c30 =
       func_0x00018847b510((uVar19 << 0x1d | uVar19 >> 0x23) - (_DAT_1831c4920 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831c4a20 + 0x84222325));
  uVar7 = lVar5 * -0xa4411dc3e9b1f91;
  _DAT_1831c4970 = _DAT_1831c4970 + lVar5 * -0xa4411dc3e9b1f91 ^ 0x90c1a6af83fc845c;
  _DAT_1831c4a48 = _DAT_1831c4a10 * -0x7e352365a852ec39;
  _DAT_1831c4a10 = _DAT_1831c4a48 ^ _DAT_1831c4970;
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = _DAT_180f5fb70;
  auVar12 = pshufb(auVar15 ^ _DAT_180f5fb80,_DAT_1800170c0);
  uVar19 = auVar12._8_8_ + auVar12._0_8_;
  uVar3 = uVar19 + _DAT_1831c4bc0;
  if (auVar12._4_4_ < 0) {
    uVar3 = _DAT_1831c4c68 ^ uVar19;
  }
  _DAT_1831c4cd8 = uVar7;
  _DAT_1831c4910 = func_0x00018847b510(SUB161(auVar15 ^ _DAT_180f5fb80,5) ^ uVar3);
  uVar18 = (uint)(uVar4 >> 0x20);
  auVar38._8_4_ = (int)uVar4;
  auVar38._0_8_ = uVar4;
  auVar38._12_4_ = uVar18;
  uVar26 = SUB164(auVar38 & _DAT_180f5fb90,0);
  uVar19 = SUB168(auVar38 & _DAT_180f5fb90,0);
  uVar10 = SUB164(auVar38 | _DAT_180f5fb90,0);
  uVar9 = SUB168(auVar38 | _DAT_180f5fb90,0);
  uVar20 = SUB164(_DAT_180f5fb90 ^ auVar38,0);
  uVar3 = _DAT_1831c4910 >> 1 | _DAT_1831c4910;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1831c4910;
  uVar19 = (((ulonglong)uVar20 * (ulonglong)_DAT_180f5fc00 +
             ((ulonglong)_DAT_180f5fc10 * (ulonglong)uVar20 +
              (SUB168(_DAT_180f5fb90 ^ auVar38,0) >> 0x20) * (ulonglong)_DAT_180f5fc00 << 0x20) +
             (ulonglong)_DAT_180f5fbe0 * (ulonglong)uVar10 +
             ((ulonglong)_DAT_180f5fbf0 * (ulonglong)uVar10 +
              (uVar9 >> 0x20) * (ulonglong)_DAT_180f5fbe0 << 0x20) +
            (ulonglong)_DAT_180f5fbc0 * (ulonglong)uVar26 +
            ((ulonglong)_DAT_180f5fbd0 * (ulonglong)uVar26 +
             (uVar19 >> 0x20) * (ulonglong)_DAT_180f5fbc0 << 0x20) +
            (ulonglong)_DAT_180f5fba0 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_180f5fbb0 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar18 * (ulonglong)_DAT_180f5fba0 << 0x20)) -
           ((ulonglong)uVar10 * (_DAT_180f5fc70 & 0xffffffff) +
            ((uVar9 >> 0x20) * (_DAT_180f5fc70 & 0xffffffff) +
             (ulonglong)_DAT_180f5fc60 * (ulonglong)uVar10 << 0x20) +
            (ulonglong)uVar26 * (_DAT_180f5fc70 & 0xffffffff) +
            ((uVar19 >> 0x20) * (_DAT_180f5fc70 & 0xffffffff) +
             (ulonglong)uVar26 * (ulonglong)_DAT_180f5fc60 << 0x20) +
            (uVar4 & 0xffffffff) * (ulonglong)_DAT_180f5fc40 +
           ((ulonglong)_DAT_180f5fc50 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar18 * (ulonglong)_DAT_180f5fc40 << 0x20))) + _DAT_180f5fc80;
  _DAT_1831c4cb0 = _DAT_1831c49a0 ^ uVar3 ^ uVar19;
  _DAT_1831c4a00 = (_DAT_1831c4a00 ^ uVar3) + uVar19 ^ 0xbed094342fe274ed;
  _DAT_1831c4cd8 = (_DAT_1831c4cd8 * 0x57aff71b4eff9293 ^ _DAT_1831c4a00) + uVar3;
  _DAT_1831c49a0 = _DAT_1831c4cd8 ^ _DAT_1831c4a00;
  uVar4 = uVar19 ^ 0x84222325;
  uVar3 = ((_DAT_1831c4988 ^ uVar4) + (uVar4 & _DAT_1831c4988) * 2) * (uVar7 - _DAT_1831c4b88);
  uVar3 = (uVar3 | _DAT_1831c49b8) + (uVar3 & _DAT_1831c49b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831c4b18 = uVar19;
  _DAT_1831c4cb8 = func_0x00018847b510((uVar4 ^ uVar7 | uVar3) + (uVar3 & (uVar4 ^ uVar7)));
  uVar26 = (uint)(uVar19 >> 0x20);
  auVar36._8_4_ = (int)uVar19;
  auVar36._0_8_ = uVar19;
  auVar36._12_4_ = uVar26;
  uVar10 = (uint)(uVar7 >> 0x20);
  auVar21._8_4_ = (int)uVar7;
  auVar21._0_8_ = uVar7;
  auVar21._12_4_ = uVar10;
  auVar45._8_4_ = 0xffffffff;
  auVar45._0_8_ = 0xffffffffffffffff;
  auVar45._12_4_ = 0xffffffff;
  uStack0000000000000080 = uVar19 & uVar7;
  uVar30 = SUB164(auVar36 ^ auVar45,0);
  uVar9 = SUB168(auVar36 ^ auVar45,0);
  uVar18 = SUB164(auVar21 ^ auVar45,0);
  uVar4 = SUB168(auVar21 ^ auVar45,0);
  uVar3 = (_DAT_1831c4cb8 & 0x7fffffffff) << 3 | _DAT_1831c4cb8 >> 0x3d;
  uVar20 = SUB164(auVar36 ^ auVar21,0);
  _DAT_1831c4968 =
       (((ulonglong)_DAT_180f5fce0 * (ulonglong)uVar18 +
         ((uVar4 >> 0x20) * (ulonglong)_DAT_180f5fce0 +
          (ulonglong)_DAT_180f5fcb0 * (ulonglong)uVar18 << 0x20) +
         (ulonglong)_DAT_180f5fcc0 * (uVar7 & 0xffffffff) +
         ((ulonglong)uVar10 * (ulonglong)_DAT_180f5fcc0 +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_180f5fcb0 << 0x20) +
         (ulonglong)_DAT_180f5fca0 * (uVar19 & 0xffffffff) +
         ((ulonglong)uVar26 * (ulonglong)_DAT_180f5fca0 +
          (uVar19 & 0xffffffff) * (ulonglong)_DAT_180f5fc90 << 0x20) +
        (ulonglong)_DAT_180f5fcd0 * (ulonglong)uVar30 +
        ((uVar9 >> 0x20) * (ulonglong)_DAT_180f5fcd0 + (ulonglong)_DAT_180f5fc90 * (ulonglong)uVar30
        << 0x20)) -
       ((ulonglong)uVar18 * (_DAT_180f5fdb0 & 0xffffffff) +
        ((ulonglong)_DAT_180f5fdc0 * (ulonglong)uVar18 +
         (uVar4 >> 0x20) * (_DAT_180f5fdb0 & 0xffffffff) << 0x20) +
       (ulonglong)uVar30 * (ulonglong)_DAT_180f5fd90 +
       ((ulonglong)_DAT_180f5fda0 * (ulonglong)uVar30 + (uVar9 >> 0x20) * (ulonglong)_DAT_180f5fd90
       << 0x20) +
       (ulonglong)uVar20 * (ulonglong)_DAT_180f5fd70 +
       ((ulonglong)_DAT_180f5fd80 * (ulonglong)uVar20 +
        (SUB168(auVar36 ^ auVar21,0) >> 0x20) * (ulonglong)_DAT_180f5fd70 << 0x20) +
       (uStack0000000000000080 & 0xffffffff) * (ulonglong)_DAT_180f5fd50 +
       ((ulonglong)_DAT_180f5fd60 * (uStack0000000000000080 & 0xffffffff) +
        (uStack0000000000000080 >> 0x20) * (ulonglong)_DAT_180f5fd50 << 0x20) +
       (uVar7 & 0xffffffff) * (ulonglong)_DAT_180f5fd30 +
       ((ulonglong)_DAT_180f5fd40 * (uVar7 & 0xffffffff) +
        (ulonglong)uVar10 * (ulonglong)_DAT_180f5fd30 << 0x20) +
       (uVar19 & 0xffffffff) * (ulonglong)_DAT_180f5fd10 +
       ((ulonglong)_DAT_180f5fd20 * (uVar19 & 0xffffffff) +
        (ulonglong)uVar26 * (ulonglong)_DAT_180f5fd10 << 0x20))) + 0xe4a196da20a531e7;
  _DAT_1831c4cb0 = _DAT_1831c4a78 ^ uVar3 ^ _DAT_1831c4968;
  _DAT_1831c4ce0 = (_DAT_1831c4ce0 ^ uVar3) + _DAT_1831c4968 ^ 0x9139d4c2bc8e0600;
  _DAT_1831c4a40 = (_DAT_1831c4a40 * 0x5da9c71812c95eed ^ _DAT_1831c4ce0) + uVar3;
  _DAT_1831c4a08 = _DAT_1831c4a40 ^ _DAT_1831c4ce0;
  uVar7 = _DAT_1831c4968 + uVar8 * uVar8 * -0x5c648abcabfe29dd;
  uVar19 = uVar8 * uVar8 * 0x5c648abcabfe29dd;
  uVar4 = uVar7 ^ 0x84222325;
  uVar3 = ((_DAT_1831c4c28 ^ uVar4) + (uVar4 & _DAT_1831c4c28) * 2) * (uVar19 - _DAT_1831c4a08);
  uVar3 = (uVar3 | _DAT_1831c4978) + (uVar3 & _DAT_1831c4978);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831c4988 = func_0x00018847b510((uVar4 ^ uVar19 | uVar3) + (uVar3 & (uVar4 ^ uVar19)));
  uVar10 = (uint)(uVar7 >> 0x20);
  auVar32._8_4_ = (int)uVar7;
  auVar32._0_8_ = uVar7;
  auVar32._12_4_ = uVar10;
  uVar18 = (uint)(uVar19 >> 0x20);
  auVar13._8_4_ = (int)uVar19;
  auVar13._0_8_ = uVar19;
  auVar13._12_4_ = uVar18;
  uVar30 = SUB164(auVar32 & auVar13,0);
  uVar4 = SUB168(auVar32 & auVar13,0);
  uVar26 = SUB164(auVar32 | auVar13,0);
  uVar9 = SUB168(auVar32 | auVar13,0);
  uVar20 = SUB164(auVar32 ^ auVar13,0);
  uVar3 = SUB168(auVar32 ^ auVar13,0);
  auVar12._8_8_ = _UNK_18001a718;
  auVar12._0_8_ = _DAT_18001a710;
  uVar35 = SUB164(auVar13 ^ auVar12,0);
  uVar19 = (((_DAT_180f5fe30 & 0xffffffff) * (ulonglong)uVar20 +
             ((_DAT_180f5fe40 & 0xffffffff) * (ulonglong)uVar20 +
              (uVar3 >> 0x20) * (_DAT_180f5fe30 & 0xffffffff) << 0x20) +
             (_DAT_180f5fe10 & 0xffffffff) * (ulonglong)uVar26 +
             ((_DAT_180f5fe20 & 0xffffffff) * (ulonglong)uVar26 +
              (uVar9 >> 0x20) * (_DAT_180f5fe10 & 0xffffffff) << 0x20) +
            (_DAT_180f5fdf0 & 0xffffffff) * (ulonglong)uVar30 +
            ((_DAT_180f5fe00 & 0xffffffff) * (ulonglong)uVar30 +
             (uVar4 >> 0x20) * (_DAT_180f5fdf0 & 0xffffffff) << 0x20) +
            (_DAT_180f5fde0 & 0xffffffff) * (uVar19 & 0xffffffff) +
            ((ulonglong)uVar18 * (_DAT_180f5fde0 & 0xffffffff) +
             (_DAT_180f5fdd0 & 0xffffffff) * (uVar19 & 0xffffffff) << 0x20) +
            (uVar7 & 0xffffffff) * (_DAT_180f5fde0 & 0xffffffff) +
            ((ulonglong)uVar10 * (_DAT_180f5fde0 & 0xffffffff) +
             (uVar7 & 0xffffffff) * (_DAT_180f5fdd0 & 0xffffffff) << 0x20)) -
           ((ulonglong)uVar35 * (_DAT_180f5feb0 & 0xffffffff) +
            ((_DAT_180f5ff20 & 0xffffffff) * (ulonglong)uVar35 +
             (SUB168(auVar13 ^ auVar12,0) >> 0x20) * (_DAT_180f5feb0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_180f5ff00 +
           ((_DAT_180f5ff10 & 0xffffffff) * (ulonglong)uVar20 +
            (uVar3 >> 0x20) * (ulonglong)_DAT_180f5ff00 << 0x20) +
           (ulonglong)uVar26 * (ulonglong)_DAT_180f5fee0 +
           ((_DAT_180f5fef0 & 0xffffffff) * (ulonglong)uVar26 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_180f5fee0 << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_180f5fec0 +
           ((_DAT_180f5fed0 & 0xffffffff) * (ulonglong)uVar30 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_180f5fec0 << 0x20) +
           (uVar19 & 0xffffffff) * (ulonglong)_DAT_180f5fe90 +
           ((_DAT_180f5fea0 & 0xffffffff) * (uVar19 & 0xffffffff) +
            (ulonglong)uVar18 * (ulonglong)_DAT_180f5fe90 << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_180f5fe70 +
           ((_DAT_180f5fe80 & 0xffffffff) * (uVar7 & 0xffffffff) +
            (ulonglong)uVar10 * (ulonglong)_DAT_180f5fe70 << 0x20))) - _DAT_180f5feb0;
  lVar5 = _DAT_180f5f290 * uVar8;
  uVar8 = lVar5 * 0x1cfa27012fc551ac;
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = uVar19 ^ 0x84222325;
  auVar15 = pshufb(auVar14 ^ _DAT_180f5ff30,_DAT_1800170c0);
  uVar3 = _DAT_1831c4988 - (_DAT_1831c4988 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = (uint)bVar1 + (uint)bVar1 ^ _DAT_1831c4988;
  _DAT_1831c4b80 = _DAT_1831c4a10 ^ uVar3 ^ uVar19;
  _DAT_1831c4a98 = (_DAT_1831c4a98 ^ uVar3) + uVar19 ^ 0xb5f6df1cbbc62008;
  _DAT_1831c4c10 = (_DAT_1831c4c10 * -0x282c18fedf18f583 ^ _DAT_1831c4a98) + uVar3;
  _DAT_1831c4cd8 = _DAT_1831c4c10 ^ _DAT_1831c4a98;
  uVar4 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar4 + _DAT_1831c4c68;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_1831c4a98 ^ uVar4;
  }
  _DAT_1831c4ba0 = uVar19;
  _DAT_1831c4b00 = func_0x00018847b510(SUB161(auVar14 ^ _DAT_180f5ff30,5) ^ uVar3);
  uVar20 = (uint)(uVar19 >> 0x20);
  auVar27._8_4_ = (int)uVar19;
  auVar27._0_8_ = uVar19;
  auVar27._12_4_ = uVar20;
  uVar10 = (uint)(uVar8 >> 0x20);
  auVar22._8_4_ = (int)uVar8;
  auVar22._0_8_ = uVar8;
  auVar22._12_4_ = uVar10;
  uVar18 = SUB164(auVar27 & auVar22,0);
  uVar41 = SUB168(auVar27 & auVar22,0);
  uVar26 = SUB164(auVar27 | auVar22,0);
  uVar40 = SUB168(auVar27 | auVar22,0);
  uVar7 = uVar19 ^ _DAT_18001a710;
  uVar9 = uVar19 ^ uVar8;
  uVar4 = uVar6 ^ 0x84222325;
  auVar23._8_8_ = uVar11;
  auVar23._0_8_ = uVar4;
  auVar15 = pshufb(auVar23 ^ _DAT_180f60060,_DAT_1800170c0);
  uVar3 = ((uVar19 | uVar8) ^ _DAT_1831c4b00) & 0x1ffffffffffff;
  _DAT_1831c4b98 =
       (((uVar7 & 0xffffffff) * (ulonglong)_DAT_180f5ff80 +
         ((ulonglong)_DAT_180f5ffb0 * (uVar7 & 0xffffffff) +
          (uVar7 >> 0x20) * (ulonglong)_DAT_180f5ff80 << 0x20) +
        (ulonglong)_DAT_180f5ffa0 * (ulonglong)uVar26 +
        ((uVar40 >> 0x20) * (ulonglong)_DAT_180f5ffa0 +
         (ulonglong)_DAT_180f5ff90 * (ulonglong)uVar26 << 0x20) +
        (ulonglong)uVar18 * (ulonglong)_DAT_180f5ffa0 +
        ((uVar41 >> 0x20) * (ulonglong)_DAT_180f5ffa0 +
         (ulonglong)uVar18 * (ulonglong)_DAT_180f5ff90 << 0x20) +
        (ulonglong)_DAT_180f5ff60 * (uVar8 & 0xffffffff) +
        ((ulonglong)_DAT_180f5ff70 * (uVar8 & 0xffffffff) +
         (ulonglong)uVar10 * (ulonglong)_DAT_180f5ff60 << 0x20) +
        (ulonglong)_DAT_180f5ff40 * (uVar19 & 0xffffffff) +
        ((ulonglong)_DAT_180f5ff50 * (uVar19 & 0xffffffff) +
         (ulonglong)uVar20 * (ulonglong)_DAT_180f5ff40 << 0x20)) -
       ((uVar9 & 0xffffffff) * (_DAT_180f60040 & 0xffffffff) +
        ((ulonglong)_DAT_180f60050 * (uVar9 & 0xffffffff) +
         (uVar9 >> 0x20) * (_DAT_180f60040 & 0xffffffff) << 0x20) +
        (ulonglong)uVar26 * (ulonglong)_DAT_180f60020 +
        ((ulonglong)_DAT_180f60030 * (ulonglong)uVar26 +
         (uVar40 >> 0x20) * (ulonglong)_DAT_180f60020 << 0x20) +
       (ulonglong)uVar18 * (ulonglong)_DAT_180f60000 +
       ((ulonglong)_DAT_180f60010 * (ulonglong)uVar18 + (uVar41 >> 0x20) * (ulonglong)_DAT_180f60000
       << 0x20) +
       (uVar8 & 0xffffffff) * (ulonglong)_DAT_180f5fff0 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_180f5fff0 +
        (ulonglong)_DAT_180f5ffe0 * (uVar8 & 0xffffffff) << 0x20) +
       (uVar19 & 0xffffffff) * (ulonglong)_DAT_180f5fff0 +
       ((ulonglong)uVar20 * (ulonglong)_DAT_180f5fff0 +
        (uVar19 & 0xffffffff) * (ulonglong)_DAT_180f5ffe0 << 0x20))) + 0x5ecbd4fec8d1a8fa;
  _DAT_1831c4978 = _DAT_1831c4a30 ^ uVar3 ^ _DAT_1831c4b98;
  _DAT_1831c4968 = (_DAT_1831c4968 ^ uVar3) + _DAT_1831c4b98 ^ 0xdeff96298b51cb37;
  _DAT_1831c4ba0 = (_DAT_1831c4ba0 * -0x4738b8c1959a474b ^ _DAT_1831c4968) + uVar3;
  _DAT_1831c4af0 = _DAT_1831c4ba0 ^ _DAT_1831c4968;
  uVar8 = _DAT_1831c4b98 + lVar5 * -0x1cfa27012fc551ac;
  uVar19 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar19 + _DAT_1831c4b50;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_1831c4a48 ^ uVar19;
  }
  _DAT_1831c4960 = func_0x00018847b510(SUB161(auVar23 ^ _DAT_180f60060,5) ^ uVar3);
  uVar18 = (uint)(uVar6 >> 0x20);
  auVar33._8_4_ = (int)uVar6;
  auVar33._0_8_ = uVar6;
  auVar33._12_4_ = uVar18;
  uVar30 = (uint)(uVar11 >> 0x20);
  auVar28._8_4_ = (int)uVar11;
  auVar28._0_8_ = uVar11;
  auVar28._12_4_ = uVar30;
  uVar26 = SUB164(auVar33 & auVar28,0);
  uVar40 = SUB168(auVar33 & auVar28,0);
  uVar20 = SUB164(auVar33 | auVar28,0);
  uVar9 = SUB168(auVar33 | auVar28,0);
  uVar10 = SUB164(auVar33 ^ auVar28,0);
  uVar19 = SUB168(auVar33 ^ auVar28,0);
  uVar7 = uVar11 ^ _DAT_18001a710;
  uVar3 = (_DAT_1831c4960 & 0x7ffffffffffff) << 0xc | _DAT_1831c4960 >> 0x34;
  uVar9 = (((uVar7 & 0xffffffff) * (ulonglong)_DAT_180f600b0 +
            ((ulonglong)_DAT_180f60120 * (uVar7 & 0xffffffff) +
             (uVar7 >> 0x20) * (ulonglong)_DAT_180f600b0 << 0x20) +
           (ulonglong)_DAT_180f60100 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_180f60110 * (ulonglong)uVar10 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_180f60100 << 0x20) +
           (ulonglong)_DAT_180f600e0 * (ulonglong)uVar20 +
           ((ulonglong)_DAT_180f600f0 * (ulonglong)uVar20 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_180f600e0 << 0x20) +
           (ulonglong)_DAT_180f600c0 * (ulonglong)uVar26 +
           ((ulonglong)_DAT_180f600d0 * (ulonglong)uVar26 +
            (uVar40 >> 0x20) * (ulonglong)_DAT_180f600c0 << 0x20) +
           (ulonglong)_DAT_180f60090 * (uVar11 & 0xffffffff) +
           ((ulonglong)_DAT_180f600a0 * (uVar11 & 0xffffffff) +
            (ulonglong)uVar30 * (ulonglong)_DAT_180f60090 << 0x20) +
           ((ulonglong)_DAT_180f60080 * (uVar6 & 0xffffffff) +
            (ulonglong)_DAT_180f60070 * (ulonglong)uVar18 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_180f60070) -
          ((ulonglong)uVar10 * (ulonglong)_DAT_180f601b0 +
           ((ulonglong)_DAT_180f601c0 * (ulonglong)uVar10 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_180f601b0 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_180f60190 +
           ((ulonglong)_DAT_180f601a0 * (ulonglong)uVar20 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_180f60190 << 0x20) +
          (ulonglong)uVar26 * (ulonglong)_DAT_180f60170 +
          ((ulonglong)_DAT_180f60180 * (ulonglong)uVar26 +
           (uVar40 >> 0x20) * (ulonglong)_DAT_180f60170 << 0x20) +
          (uVar11 & 0xffffffff) * (ulonglong)_DAT_180f60160 +
          ((ulonglong)uVar30 * (ulonglong)_DAT_180f60160 +
           (ulonglong)_DAT_180f60150 * (uVar11 & 0xffffffff) << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_180f60160 +
          ((ulonglong)uVar18 * (ulonglong)_DAT_180f60160 +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_180f60150 << 0x20))) + 0xb6993bc29dc074c9;
  _DAT_1831c4aa8 = _DAT_1831c4c40 ^ uVar3 ^ uVar9;
  _DAT_1831c4c48 = (_DAT_1831c4c48 ^ uVar3) + uVar9 ^ 0xa331f7bf44b3e54;
  _DAT_1831c4b48 = (_DAT_1831c4b48 * 0x73981bc5a1c84259 ^ _DAT_1831c4c48) + uVar3;
  _DAT_1831c4ba0 = _DAT_1831c4b48 ^ _DAT_1831c4c48;
  uVar3 = (uVar4 ^ _DAT_1831c49e0) + _DAT_1831c4c28 + uVar4;
  uVar19 = (uVar11 ^ _DAT_1831c4c28) + _DAT_1831c49e0 + uVar11;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar4 ^ _DAT_1831c49e0;
  uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar11 ^ _DAT_1831c4c28;
  uVar7 = uVar6 ^ uVar11;
  _DAT_1831c4bc0 = uVar9;
  _DAT_1831c4a70 =
       func_0x00018847b510((uVar19 << 0x1d | uVar19 >> 0x23) - (_DAT_1831c49e0 + uVar11) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831c4c28 + uVar4));
  uVar3 = (_DAT_1831c4a70 & 0xffffffff) * (_DAT_180f601d0 & 0xffffffff) +
          ((ulonglong)_DAT_180f601e0 * (_DAT_1831c4a70 & 0xffffffff) +
           (_DAT_1831c4a70 >> 0x20) * (_DAT_180f601d0 & 0xffffffff) << 0x20) ^ uVar6;
  uVar11 = uVar11 & uVar6;
  _DAT_1831c4c00 = (_DAT_1831c4c00 ^ uVar3) + uVar11 ^ 0x8d46e067c62e1075;
  _DAT_1831c4930 = (_DAT_1831c4930 * -0x445ae3ffd86eca89 ^ _DAT_1831c4c00) + uVar3;
  _DAT_1831c4bf8 = _DAT_1831c4930 ^ _DAT_1831c4c00;
  auVar24._8_8_ = uVar11 * 2;
  auVar24._0_8_ = uVar7 ^ 0x84222325;
  auVar15 = pshufb(auVar24 ^ _DAT_180f601f0,_DAT_1800170c0);
  uVar19 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar19 + _DAT_1831c4b08;
  if (auVar15._4_4_ < 0) {
    uVar3 = uVar11 ^ uVar19;
  }
  _DAT_1831c49d8 = uVar11;
  _DAT_1831c4b78 = func_0x00018847b510(SUB161(auVar24 ^ _DAT_180f601f0,5) ^ uVar3);
  uVar18 = (uint)(uVar7 >> 0x20);
  auVar42._8_4_ = (int)uVar7;
  auVar42._0_8_ = uVar7;
  auVar42._12_4_ = uVar18;
  auVar43._8_4_ = (int)uVar11;
  auVar43._0_8_ = uVar11;
  auVar43._12_4_ = (int)(uVar11 >> 0x20);
  uVar11 = uVar11 * 2;
  auVar44._8_8_ = auVar43._8_8_ * 2;
  auVar44._0_8_ = uVar11;
  uVar26 = (uint)(uVar11 >> 0x20);
  uVar35 = SUB164(auVar42 & auVar44,0);
  uVar40 = SUB168(auVar42 & auVar44,0);
  uVar20 = SUB164(auVar42 | auVar44,0);
  uVar37 = SUB164(auVar42 ^ auVar44,0);
  uVar3 = SUB168(auVar42 ^ auVar44,0);
  auVar29._8_4_ = 0xffffffff;
  auVar29._0_8_ = 0xffffffffffffffff;
  auVar29._12_4_ = 0xffffffff;
  uVar30 = SUB164(auVar42 ^ auVar29,0);
  uVar41 = SUB168(auVar42 ^ auVar29,0);
  uVar10 = SUB164(auVar44 ^ auVar29,0);
  uVar19 = SUB168(auVar44 ^ auVar29,0);
  _DAT_1831c49d8 =
       (((ulonglong)_DAT_180f60290 * (ulonglong)uVar10 +
         ((uVar19 >> 0x20) * (ulonglong)_DAT_180f60290 +
          (ulonglong)_DAT_180f60220 * (ulonglong)uVar10 << 0x20) +
         (ulonglong)_DAT_180f60280 * (ulonglong)uVar30 +
         ((uVar41 >> 0x20) * (ulonglong)_DAT_180f60280 +
          (ulonglong)_DAT_180f60200 * (ulonglong)uVar30 << 0x20) +
         (ulonglong)_DAT_180f60250 * (ulonglong)uVar37 +
         ((uVar3 >> 0x20) * (ulonglong)_DAT_180f60250 +
          (ulonglong)_DAT_180f60240 * (ulonglong)uVar37 << 0x20) +
         (ulonglong)uVar35 * (ulonglong)_DAT_180f60250 +
         ((uVar40 >> 0x20) * (ulonglong)_DAT_180f60250 +
          (ulonglong)uVar35 * (ulonglong)_DAT_180f60240 << 0x20) +
         (ulonglong)_DAT_180f60230 * (uVar11 & 0xffffffff) +
         ((ulonglong)uVar26 * (ulonglong)_DAT_180f60230 +
          (uVar11 & 0xffffffff) * (ulonglong)_DAT_180f60220 << 0x20) +
         (ulonglong)_DAT_180f60210 * (uVar7 & 0xffffffff) +
         ((ulonglong)uVar18 * (ulonglong)_DAT_180f60210 +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_180f60200 << 0x20) +
        (ulonglong)uVar20 * (ulonglong)_DAT_180f60260 +
        ((ulonglong)_DAT_180f60270 * (ulonglong)uVar20 +
         (SUB168(auVar42 | auVar44,0) >> 0x20) * (ulonglong)_DAT_180f60260 << 0x20)) -
       ((ulonglong)uVar10 * (ulonglong)_DAT_180f60360 +
        ((ulonglong)_DAT_180f60370 * (ulonglong)uVar10 +
         (uVar19 >> 0x20) * (ulonglong)_DAT_180f60360 << 0x20) +
       (ulonglong)uVar30 * (ulonglong)_DAT_180f60340 +
       ((ulonglong)_DAT_180f60350 * (ulonglong)uVar30 + (uVar41 >> 0x20) * (ulonglong)_DAT_180f60340
       << 0x20) +
       (ulonglong)uVar37 * (ulonglong)_DAT_180f60320 +
       ((ulonglong)_DAT_180f60330 * (ulonglong)uVar37 + (uVar3 >> 0x20) * (ulonglong)_DAT_180f60320
       << 0x20) +
       (ulonglong)uVar35 * (ulonglong)_DAT_180f60300 +
       ((ulonglong)_DAT_180f60310 * (ulonglong)uVar35 + (uVar40 >> 0x20) * (ulonglong)_DAT_180f60300
       << 0x20) +
       (uVar11 & 0xffffffff) * (ulonglong)_DAT_180f602e0 +
       ((ulonglong)_DAT_180f602f0 * (uVar11 & 0xffffffff) +
        (ulonglong)uVar26 * (ulonglong)_DAT_180f602e0 << 0x20) +
       (uVar7 & 0xffffffff) * (ulonglong)_DAT_180f602c0 +
       ((ulonglong)_DAT_180f602d0 * (uVar7 & 0xffffffff) +
        (ulonglong)uVar18 * (ulonglong)_DAT_180f602c0 << 0x20))) + 0x23da91914aea2f5;
  uVar9 = uVar9 - _DAT_1831c49d8;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar9;
  auVar16._8_8_ = uVar9;
  auVar16._0_8_ = uVar8 ^ 0x84222325;
  auVar15 = pshufb(auVar16 ^ _DAT_180f60380,_DAT_1800170c0);
  _DAT_1831c4cd0 = _DAT_1831c4b68 ^ _DAT_1831c4b78 ^ _DAT_1831c49d8;
  _DAT_1831c4b00 = (_DAT_1831c4b00 ^ _DAT_1831c4b78) + _DAT_1831c49d8 ^ 0xe4fd69964dda3421;
  _DAT_1831c4b10 = (_DAT_1831c4b10 * 0x6e9b009932ec669d ^ _DAT_1831c4b00) + _DAT_1831c4b78;
  _DAT_1831c4b90 = _DAT_1831c4b10 ^ _DAT_1831c4b00;
  uVar11 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar11 + _DAT_1831c4a70;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_1831c4a60 ^ uVar11;
  }
  _DAT_1831c4998 = func_0x00018847b510(SUB161(auVar16 ^ _DAT_180f60380,5) ^ uVar3);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar8;
  uVar3 = _DAT_1831c4998 ^ uVar8;
  uVar26 = (uint)(uVar8 >> 0x20);
  auVar34._8_4_ = (int)uVar8;
  auVar34._0_8_ = uVar8;
  auVar34._12_4_ = uVar26;
  uVar37 = (uint)(uVar9 >> 0x20);
  auVar25._8_4_ = (int)uVar9;
  auVar25._0_8_ = uVar9;
  auVar25._12_4_ = uVar37;
  uVar18 = SUB164(auVar34 & auVar25,0);
  uVar11 = SUB168(auVar34 & auVar25,0);
  uVar30 = SUB164(auVar34 | auVar25,0);
  uVar10 = SUB164(auVar34 ^ auVar25,0);
  uVar19 = SUB168(auVar34 ^ auVar25,0);
  auVar46._8_4_ = 0xffffffff;
  auVar46._0_8_ = 0xffffffffffffffff;
  auVar46._12_4_ = 0xffffffff;
  uVar35 = SUB164(auVar39 ^ auVar46,0);
  uVar20 = SUB164(auVar31 ^ auVar46,0);
  uVar8 = (((ulonglong)uVar35 * (ulonglong)_DAT_180f603d0 +
            ((ulonglong)_DAT_180f60440 * (ulonglong)uVar35 +
             (SUB168(auVar39 ^ auVar46,0) >> 0x20) * (ulonglong)_DAT_180f603d0 << 0x20) +
           (ulonglong)_DAT_180f60420 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_180f60430 * (ulonglong)uVar10 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_180f60420 << 0x20) +
           (ulonglong)uVar30 * (ulonglong)_DAT_180f60400 +
           ((ulonglong)_DAT_180f60410 * (ulonglong)uVar30 +
            (SUB168(auVar34 | auVar25,0) >> 0x20) * (ulonglong)_DAT_180f60400 << 0x20) +
           (ulonglong)_DAT_180f603e0 * (ulonglong)uVar18 +
           ((ulonglong)_DAT_180f603f0 * (ulonglong)uVar18 +
            (uVar11 >> 0x20) * (ulonglong)_DAT_180f603e0 << 0x20) +
           (ulonglong)_DAT_180f603b0 * (uVar9 & 0xffffffff) +
           ((ulonglong)_DAT_180f603c0 * (uVar9 & 0xffffffff) +
            (ulonglong)uVar37 * (ulonglong)_DAT_180f603b0 << 0x20) +
           (ulonglong)_DAT_180f60390 * (uVar8 & 0xffffffff) +
           ((ulonglong)_DAT_180f603a0 * (uVar8 & 0xffffffff) +
            (ulonglong)uVar26 * (ulonglong)_DAT_180f60390 << 0x20)) -
          ((ulonglong)uVar20 * (_DAT_180f604b0 & 0xffffffff) +
           ((ulonglong)_DAT_180f60500 * (ulonglong)uVar20 +
            (SUB168(auVar31 ^ auVar46,0) >> 0x20) * (_DAT_180f604b0 & 0xffffffff) << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_180f604e0 +
           ((ulonglong)_DAT_180f604f0 * (ulonglong)uVar10 +
            (uVar19 >> 0x20) * (ulonglong)_DAT_180f604e0 << 0x20) +
          (ulonglong)uVar18 * (ulonglong)_DAT_180f604c0 +
          ((ulonglong)_DAT_180f604d0 * (ulonglong)uVar18 +
           (uVar11 >> 0x20) * (ulonglong)_DAT_180f604c0 << 0x20) +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_180f60490 +
          ((ulonglong)_DAT_180f604a0 * (uVar9 & 0xffffffff) +
           (ulonglong)uVar37 * (ulonglong)_DAT_180f60490 << 0x20) +
          (uVar8 & 0xffffffff) * (ulonglong)_DAT_180f60470 +
          ((ulonglong)_DAT_180f60480 * (uVar8 & 0xffffffff) +
           (ulonglong)uVar26 * (ulonglong)_DAT_180f60470 << 0x20))) + 0xeb3513cbc2b6775c;
  _DAT_1831c4c30 = _DAT_1831c4c10 ^ uVar3 ^ uVar8;
  _DAT_1831c4960 = (_DAT_1831c4960 ^ uVar3) + uVar8 ^ 0x82035e61068052fb;
  _DAT_1831c4a90 = (_DAT_1831c4a90 * -0x4d6b8cefe3065c89 ^ _DAT_1831c4960) + uVar3;
  _DAT_1831c4b78 = _DAT_1831c4a90 ^ _DAT_1831c4960;
  uVar3 = ~_DAT_1831c4ca8 * ((_DAT_1831c4bc8 ^ uVar4) + (uVar4 & _DAT_1831c4bc8) * 2);
  uVar3 = (uVar3 | _DAT_1831c4cb0) + (uVar3 & _DAT_1831c4cb0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831c4930 = uVar8;
  _DAT_1831c4a28 = func_0x00018847b510((~uVar4 | uVar3) + (uVar3 & ~uVar4));
  _DAT_1831c49a0 = ~uVar6;
  _DAT_1831c49e0 = (_DAT_1831c49e0 ^ _DAT_1831c4be0) + _DAT_1831c49a0 ^ 0x39934a8dad5ab884;
  _DAT_1831c4b80 = (_DAT_1831c4b80 * 0x209133a3a707ee3 ^ _DAT_1831c49e0) + _DAT_1831c4be0;
  _DAT_1831c4b38 = _DAT_1831c4b80 ^ _DAT_1831c49e0;
  auVar17._8_8_ = _DAT_1831c49a0;
  auVar17._0_8_ = uVar4;
  auVar15 = pshufb(auVar17 ^ _DAT_180f60510,_DAT_1800170c0);
  uVar11 = auVar15._8_8_ + auVar15._0_8_;
  uVar3 = uVar11 + _DAT_1831c49b8;
  if (auVar15._4_4_ < 0) {
    uVar3 = _DAT_1831c49a8 ^ uVar11;
  }
  _DAT_1831c4c10 = func_0x00018847b510(SUB161(auVar17 ^ _DAT_180f60510,5) ^ uVar3);
  _DAT_1831c4af0 = _DAT_1831c4af0 ^ _DAT_1831c4c10 ^ 0x15975702eb703214;
  _DAT_1831c4a98 = (_DAT_1831c4a98 * -0x44dbb1cd5781f90d ^ _DAT_1831c4af0) + _DAT_1831c4c10;
  _DAT_1831c4ad0 = _DAT_1831c4a98 ^ _DAT_1831c4af0;
  _DAT_1831c4ab8 = 0;
  uVar3 = in_stack_000000a8 ^ 0x84222325 ^ _DAT_1831c4b58;
  lVar5 = (in_stack_000000a8 ^ 0x84222325) + _DAT_1831c4cd0;
  uVar11 = uVar3 + lVar5;
  uVar4 = (uVar8 ^ _DAT_1831c4cd0) + _DAT_1831c4b58 + uVar8;
  uVar3 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar3;
  uVar11 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar8 ^ _DAT_1831c4cd0;
  _DAT_1831c49d0 =
       func_0x00018847b510((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1831c4b58 + uVar8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar5);
  uVar11 = (in_stack_000000a8 | uVar8) ^ _DAT_1831c49d0;
  uVar3 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar11) *
          -0x72dc8284e0073827;
  _DAT_1831c49e8 = uVar8 ^ in_stack_000000a8;
  _DAT_1831c49b8 = (_DAT_1831c49b8 ^ uVar3) + _DAT_1831c49e8 ^ 0xffd05ad854e7a7e4;
  _DAT_1831c4c70 = (_DAT_1831c4c70 * 0x1d20fecf510f201 ^ _DAT_1831c49b8) + uVar3;
  _DAT_1831c49f0 = _DAT_1831c4c70 ^ _DAT_1831c49b8;
  FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0x619,0x1e);
  cVar2 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x8479f20 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188479f20(void)

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


// ----- block @ rva 0x847a0ab -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847a0ab(void)

{
  FUN_190ddce00();
  (*_DAT_180f5f608)();
  return;
}


// ----- block @ rva 0x847a871 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18847a871(void)

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


// ----- block @ rva 0x847a977 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18847a977(void)

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


// ----- block @ rva 0x847adf7 -----

void FUN_18847adf7(void)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong unaff_R13;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING: Could not recover jumptable at 0x00018847ae0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_R13 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}


// ----- block @ rva 0x847aebb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18847aebb(void)

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


// ----- block @ rva 0x847af4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847af4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180f5faa8)();
  return;
}


// ----- block @ rva 0x847b3c7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847b3c7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_180f5f828)();
  return;
}


// ----- block @ rva 0x847b3d8 -----

void FUN_18847b3d8(void)

{
  return;
}


// ----- block @ rva 0x847dc65 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847dc65(void)

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


// ----- block @ rva 0x847de25 -----

void FUN_18847de25(void)

{
  return;
}


// ----- block @ rva 0x847e475 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847e475(void)

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


// ----- block @ rva 0x847e8b9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847e8b9(void)

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


// ----- block @ rva 0x847fa9a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18847e256(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x847fd2c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847fd2c(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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


// ----- block @ rva 0x847ff70 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18847ff70(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
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


// ----- block @ rva 0x8480400 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188480400(void)

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


// ----- block @ rva 0x848050d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18848050d(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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


// ----- block @ rva 0x84806f2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884806f2(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
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


// ----- block @ rva 0x848086a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18848086a(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
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


// ----- block @ rva 0x8481560 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188481560(void)

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


// ----- block @ rva 0x8481c35 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188481c35(void)

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


// ----- block @ rva 0x848216a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18848216a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180f62038)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x8482176 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188482176(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0x8482193 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188482193(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_180f62048)();
  return;
}


// ----- block @ rva 0x848219c -----

void FUN_18848219c(void)

{
  return;
}


// ----- block @ rva 0x848219d -----

undefined4 * FUN_18848219d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x84821ff -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884821ff(void)

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


// ----- block @ rva 0x8482253 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188482253(void)

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


// ----- block @ rva 0x848269f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18848269f(void)

{
  FUN_190ddfc90();
  (*_DAT_180f62308)();
  return;
}


// ----- block @ rva 0x84827c8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884827c8(void)

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


// ----- block @ rva 0x848292b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18848292b(void)

{
  FUN_190de3220();
  (*_DAT_180f62448)();
  return;
}


// ----- block @ rva 0x8482a2f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188482a2f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_180f62168)();
  return;
}


// ----- block @ rva 0x8482af9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188482af9(void)

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


// ----- block @ rva 0x8482d3a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188482d3a(void)

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


// ----- block @ rva 0x8482f2f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188482f2f(void)

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


// ----- block @ rva 0x8482f83 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188482f83(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180f62418)();
  return;
}


// ----- block @ rva 0x8482fb8 -----

void FUN_188482fb8(void)

{
  return;
}


// ----- block @ rva 0x8482fc6 -----

void FUN_188482fc6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x8483130 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188483130(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180f632a8)();
  return;
}


// ----- block @ rva 0x84837a4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884837a4(void)

{
  longlong in_stack_00000068;
  
  switch(in_stack_00000068 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x8483c61 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188483c61(void)

{
  (*_DAT_180f63378)();
  return;
}


// ----- block @ rva 0x8483cc7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188483cc7(void)

{
  (*_DAT_180f63318)();
  return;
}


// ----- block @ rva 0x8483d69 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188483d69(void)

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


// ----- block @ rva 0x8483e01 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188483e01(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180f62738)();
  return;
}


// ----- block @ rva 0x8484d08 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188484d08(void)

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


// ----- block @ rva 0x8484d6e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188484d6e(void)

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


// ----- block @ rva 0x848561c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18848561c(void)

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


// ----- block @ rva 0x84859b2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884859b2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180f62858)();
  return;
}


// ----- block @ rva 0x8485a0d -----

void FUN_188485a0d(void)

{
  return;
}


// ----- block @ rva 0x8485a21 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188485a21(void)

{
  (*_DAT_180f63278)();
  return;
}


// ----- block @ rva 0x8485a2c -----

void FUN_188485a2c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x848815b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18848815b(void)

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


// ----- block @ rva 0x84882fa -----

void FUN_1884882fa(void)

{
  return;
}


// ----- block @ rva 0x8488bfa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188488bfa(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (*in_RAX)(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84894ba -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884894ba(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x848950c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18848950c(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_18419fe70(in_stack_00000030);
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


// ----- block @ rva 0x848afdf -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18848cdea(void)

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


// ----- block @ rva 0x848bbe8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18848bbe8(void)

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


// ----- block @ rva 0x848cb96 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18848cb96(void)

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


// ----- block @ rva 0x848ce11 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18848ce11(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,param_2,0x2c);
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


// ----- block @ rva 0x8490849 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188490849(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (*in_RAX)(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x8490e1e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188490e1e(void)

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


// ----- block @ rva 0x8490e72 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188490e72(void)

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


// ----- block @ rva 0x84910cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884910cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180f65978)();
  return;
}


// ----- block @ rva 0x8491321 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188491321(void)

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


// ----- block @ rva 0x84914b6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884914b6(void)

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


// ----- block @ rva 0x849175d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18849175d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_180f65748)();
  return;
}


// ----- block @ rva 0x84919a5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884919a5(void)

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


// ----- block @ rva 0x8491a89 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188491a89(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180f65978)();
  return;
}


// ----- block @ rva 0x8491beb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188491beb(void)

{
  FUN_190ddfc90();
  (*_DAT_180f65958)();
  return;
}


// ----- block @ rva 0x8491cb1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188491cb1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180f65968)();
  return;
}


// ----- block @ rva 0x8491ce5 -----

void FUN_188491ce5(void)

{
  return;
}


// ----- block @ rva 0x8491cf4 -----

void FUN_188491cf4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x8491e6c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188491e6c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180f65eb8)();
  return;
}


// ----- block @ rva 0x8491f30 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188491f30(void)

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


// ----- block @ rva 0x8491f86 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188491f86(void)

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


// ----- block @ rva 0x84922db -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884922db(void)

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


// ----- block @ rva 0x84923d4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884923d4(void)

{
  FUN_190de3220();
  (*_DAT_180f65c18)();
  return;
}


// ----- block @ rva 0x849262c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18849262c(void)

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


// ----- block @ rva 0x84928b7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884928b7(void)

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


// ----- block @ rva 0x8492ae0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188492ae0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180f65cb8)();
  return;
}


// ----- block @ rva 0x8493e06 -----

void FUN_188493e06(void)

{
  return;
}


// ----- block @ rva 0x8494772 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188494772(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180f66348)();
  return;
}


// ----- block @ rva 0x8494973 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188494973(void)

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


// ----- block @ rva 0x84949aa -----

void FUN_1884949aa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x8494bff -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188494c55 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188494bff(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x8494d4e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188494d84 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188494d4e(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x8494d9f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188494dcd */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188494d9f(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x8498593 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001884985c1 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188498593(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x8498af3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188498b29 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188498af3(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x8499a59 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188499a70 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188499a59(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x8499ca0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000188499cb7 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_188499ca0(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x8499dae -----

void thunk_FUN_188494d87(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x84ab187 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884ab187(void)

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


// ----- block @ rva 0x84abf14 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884abf14(void)

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


// ----- block @ rva 0x84ac895 -----

void FUN_1884ac895(void)

{
  return;
}


// ----- block @ rva 0x84acbd4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884acbd4(void)

{
  FUN_190ddce00();
  (*_DAT_180f69ab8)();
  return;
}


// ----- block @ rva 0x84b03ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b03ac(void)

{
  FUN_190dd72e0();
  (*_DAT_180f69fc8)();
  return;
}


// ----- block @ rva 0x84b0600 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b0600(void)

{
  FUN_190dd72e0();
  (*_DAT_180f6a058)();
  return;
}


// ----- block @ rva 0x84b07fb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b07fb(void)

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


// ----- block @ rva 0x84b084f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b084f(void)

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


// ----- block @ rva 0x84b0c53 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b0c53(void)

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


// ----- block @ rva 0x84b0f70 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b0f70(void)

{
  FUN_190dd72e0();
  (*_DAT_180f69958)();
  return;
}


// ----- block @ rva 0x84b0f9d -----

void FUN_1884b0f9d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong unaff_R13;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING: Could not recover jumptable at 0x0001884b0fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_R13 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}


// ----- block @ rva 0x84b110d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b110d(void)

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


// ----- block @ rva 0x84b126f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b126f(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_180f69b48)();
  return;
}


// ----- block @ rva 0x84b12e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b12e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180f69e18)();
  return;
}


// ----- block @ rva 0x84b134c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b134c(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180f69968)();
  return;
}


// ----- block @ rva 0x84b1519 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b1519(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_180f69e78)();
  return;
}


// ----- block @ rva 0x84b152a -----

void FUN_1884b152a(void)

{
  return;
}


// ----- block @ rva 0x84b17b4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b17b4(void)

{
  FUN_190ddce00();
  (*_DAT_180f6b828)();
  return;
}


// ----- block @ rva 0x84b5129 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b5129(void)

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


// ----- block @ rva 0x84b52f7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b52f7(void)

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


// ----- block @ rva 0x84b5a2f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b5a2f(void)

{
  undefined8 in_stack_00000028;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->CallStaticBooleanMethodA /*0x3b8*/))(in_stack_00000030,in_stack_00000028);
  (*_DAT_180f6b7d8)();
  return;
}


// ----- block @ rva 0x84b5e85 -----

void FUN_1884b5e85(void)

{
  return;
}


// ----- block @ rva 0x84b6106 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b6106(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x20f5,0x70);
  (*_DAT_180f6b0a8)();
  return;
}


// ----- block @ rva 0x84b6406 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b6406(void)

{
  (*_DAT_180f6b8c8)();
  return;
}


// ----- block @ rva 0x84b6526 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b6526(void)

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


// ----- block @ rva 0x84b65cc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b65cc(void)

{
  (*_DAT_180f6b8e8)();
  return;
}


// ----- block @ rva 0x84b6637 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b6637(void)

{
  (*_DAT_180f6b7c8)();
  return;
}


// ----- block @ rva 0x84b67b1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b67b1(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->Throw /*0x68*/))();
  (*_DAT_180f6b5c8)();
  return;
}


// ----- block @ rva 0x84b694f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b694f(void)

{
  FUN_190ddce00();
  (*_DAT_180f6c948)();
  return;
}


// ----- block @ rva 0x84b69a6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b69a6(void)

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


// ----- block @ rva 0x84b6bed -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b6bed(void)

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


// ----- block @ rva 0x84b6cd8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b6cd8(void)

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


// ----- block @ rva 0x84b6cf3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b6cf3(void)

{
  longlong *unaff_RSI;
  
  FUN_1842a3a30();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180f6c598)();
  return;
}


// ----- block @ rva 0x84b6e81 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b6e81(void)

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


// ----- block @ rva 0x84b7119 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b7119(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1842a3a30();
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


// ----- block @ rva 0x84b71db -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884b71db(void)

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


// ----- block @ rva 0x84b73cd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b73cd(void)

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


// ----- block @ rva 0x84b740a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b740a(void)

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


// ----- block @ rva 0x84b7447 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884b7447(void)

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


// ----- block @ rva 0x84b7552 -----

void FUN_1884b7552(void)

{
  return;
}


// ----- block @ rva 0x84b7563 -----

void FUN_1884b7563(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x84b775a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001884b77af */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1884b775a(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x84bbc5c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001884bbc7c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1884bbc5c(void)

{
  code *in_RAX;
  longlong unaff_RBP;
  
  (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x90));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x84bc7e7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001884bc818 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1884bc7e7(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x88) = in_RAX;
  (**(code **)(**(longlong **)(unaff_RBP + 0x90) + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x84bee0c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884bee0c(void)

{
  longlong *plVar1;
  char cVar2;
  longlong in_RAX;
  undefined8 uVar3;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x90);
  (**(code **)(in_RAX + 0x570))(plVar1);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x3fa,0x15);
  *(undefined8 *)(unaff_RBP + 0x30) = uVar3;
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84c0321 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884c0321(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x88) = in_RAX;
  cVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x90) + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84c2280 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884c2280(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  (**(code **)(**(longlong **)(unaff_RBP + 0x90) + 0x570))();
  plVar1 = *(longlong **)(unaff_RBP + 0x90);
  FUN_190de3220(plVar1,unaff_RBP + 0x38,*_DAT_18301ee50 + 0x316,*_DAT_18301ee50 + 0x321,0x12);
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84c388a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884c388a(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x90);
  uVar3 = (**(code **)(plVar1 + JNI->ExceptionOccurred /*0x78*/))(plVar1);
  uVar4 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x20f5,0x70);
  *(undefined8 *)(unaff_RBP + 0x88) = uVar4;
  cVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x90) + 0x100))
                    (*(longlong **)(unaff_RBP + 0x90),uVar3,uVar4);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84cc01b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1884cc0ea(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBP + 0x40) = unaff_RDI;
  plVar1 = *(longlong **)(unaff_RBP + 0x90);
  (**(code **)(plVar1 + JNI->ExceptionClear /*0x88*/))(plVar1);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x19704,0x400);
  *(undefined8 *)(unaff_RBP + 0x88) = uVar3;
  cVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x90) + 0x720))(*(longlong **)(unaff_RBP + 0x90))
  ;
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84cd549 -----

undefined8 FUN_1884cd549(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar2 = (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  *(undefined8 *)(unaff_RBP + 0x40) = uVar2;
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(*(undefined8 *)(unaff_RBP + 0x90));
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x40);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ----- block @ rva 0x84cd586 -----

undefined8 FUN_1884cd586(undefined8 param_1)

{
  return param_1;
}


// ----- block @ rva 0x84e4538 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884e4538(void)

{
  FUN_190ddce00();
  (*_DAT_180f76968)();
  return;
}


// ----- block @ rva 0x84eb73c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884eb73c(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000038;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84eb9ee -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884eb9ee(void)

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


// ----- block @ rva 0x84ebbc5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884ebbc5(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190ddfc90(in_stack_00000038,&stack0x00000048,*_DAT_18301ee50 + 0x4bf,*_DAT_18301ee50 + 0x4c9,
                0x18);
  (*_DAT_180f76578)();
  return;
}


// ----- block @ rva 0x84ec491 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884ec491(void)

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


// ----- block @ rva 0x84ecabe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884ecabe(void)

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


// ----- block @ rva 0x84ecc99 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884ecc99(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x20f5,0x70);
  (*_DAT_180f76518)();
  return;
}


// ----- block @ rva 0x84ecf58 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884ecf58(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  undefined8 in_stack_00000088;
  
  FUN_184117d50(in_stack_00000038,in_stack_00000088);
  cVar1 = (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84ed10e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884ed10e(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x20f5,0x70);
  (*_DAT_180f768a8)();
  return;
}


// ----- block @ rva 0x84ed3fb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884ed3fb(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x20f5,0x70);
  (*_DAT_180f76268)();
  return;
}


// ----- block @ rva 0x84ed42f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884ed42f(void)

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


// ----- block @ rva 0x84edae5 -----

void FUN_1884edae5(void)

{
  return;
}


// ----- block @ rva 0x84edb51 -----

void FUN_1884edb51(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x84edcdb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884edcdb(void)

{
  FUN_190ddce00();
  (*_DAT_180f78c38)();
  return;
}


// ----- block @ rva 0x84edd53 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884edd53(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticLongField /*0x4b8*/))();
  (*_DAT_180f78b98)();
  return;
}


// ----- block @ rva 0x84edd6d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884edd6d(void)

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


// ----- block @ rva 0x84edd8e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884edd8e(void)

{
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = 0x6dc100000002;
  FUN_190dd72e0();
  (*_DAT_180f78c78)();
  return;
}


// ----- block @ rva 0x84edf0f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884edf0f(void)

{
  FUN_190dd72e0();
  (*_DAT_180f78cc8)();
  return;
}


// ----- block @ rva 0x84edfaf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884edfaf(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180f78d38)();
  return;
}


// ----- block @ rva 0x84edfff -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884edfff(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180f78c08)();
  return;
}


// ----- block @ rva 0x84ee089 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884ee089(void)

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


// ----- block @ rva 0x84ee0bc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884ee0bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180f78c98)();
  return;
}


// ----- block @ rva 0x84ee146 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884ee146(void)

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


// ----- block @ rva 0x84ee191 -----

void FUN_1884ee191(void)

{
  return;
}


// ----- block @ rva 0x84ee19b -----

void FUN_1884ee19b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x84ee383 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001884ee3ba */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1884ee383(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x84ee3d8 -----

void FUN_1884ee3d8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
  *(longlong **)(unaff_RBP + 0x48) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x0001884ee408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f78f20 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x84ee40b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001884ee451 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1884ee40b(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x10) = uVar1;
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x84ee454 -----

void FUN_1884ee454(void)

{
  uint unaff_EBX;
  longlong unaff_RBP;
  
                    /* WARNING: Could not recover jumptable at 0x0001884ee46b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f790c0 + (ulonglong)(unaff_EBX >> 0x1f) * 8))
            ((ulonglong)(unaff_EBX >> 0x1f),&UNK_180f790c0,unaff_RBP + -0x3b);
  return;
}


// ----- block @ rva 0x84f780e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1884f780e(void)

{
  undefined8 uVar1;
  int unaff_EBX;
  undefined8 *unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->NewCharArray /*0x588*/))();
  unaff_RBP[5] = uVar1;
  *unaff_RBP = uVar1;
  unaff_RBP[10] = uVar1;
  *(undefined4 *)(unaff_RBP + 10) = 0;
  *(int *)(unaff_RBP + 0xb) = unaff_EBX;
  switch(0 < unaff_EBX) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84faa6b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884faa6b(undefined4 param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar3;
  longlong lVar4;
  uint unaff_R12D;
  longlong *unaff_R13;
  ulonglong unaff_R14;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(undefined4 *)(unaff_RBP + 0x50) = param_1;
  (**(code **)(unaff_R13 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  *(undefined4 *)(unaff_RBP + 0x60) = 6;
  *(undefined8 *)(unaff_RBP + 0x50) = unaff_RBX;
  uVar3 = (ulonglong)unaff_R12D;
  uVar2 = uVar3 ^ unaff_R14 ^ _DAT_1831c6c90;
  lVar4 = (uVar3 ^ unaff_R14) + _DAT_1831c6bf0;
  uVar5 = uVar2 + lVar4;
  uVar6 = (_DAT_1831c6bf0 ^ 2) + _DAT_1831c6c90 + 2;
  uVar2 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar2;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831c6bf0 ^ 2;
  _DAT_1831c6c30 =
       func_0x000188516c70((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1831c6c90 + 2) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar4);
  uVar3 = (uVar3 | 2) ^ _DAT_1831c6c30 ^ uVar3;
  uVar8 = unaff_R12D & _DAT_180017990;
  uVar7 = unaff_R12D | _DAT_180017990;
  uVar9 = unaff_R12D ^ _DAT_180017990;
  lVar4 = ((ulonglong)unaff_R12D * (ulonglong)_DAT_180f79bf0 << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)_DAT_180f79be0;
  uVar2 = ((((ulonglong)uVar9 * (ulonglong)_DAT_180f79bd0 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_180f79bc0 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_180f79bb0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_180f79ba0 +
            ((ulonglong)uVar8 * (ulonglong)_DAT_180f79b90 << 0x20 |
            (ulonglong)uVar8 * (ulonglong)_DAT_180f79b80) +
            ((ulonglong)unaff_R12D * (ulonglong)_DAT_180f79b70 << 0x20) +
            (ulonglong)unaff_R12D * (ulonglong)_DAT_180f79b60 + lVar4) -
          (((ulonglong)uVar9 * (ulonglong)_DAT_180f79c70 << 0x20) +
           (ulonglong)uVar9 * (ulonglong)_DAT_180f79c60 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_180f79c50 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180f79c40 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_180f79c30 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_180f79c20) +
           ((ulonglong)unaff_R12D * (ulonglong)_DAT_180f79c10 << 0x20) +
           (ulonglong)unaff_R12D * (ulonglong)_DAT_180f79c00 + lVar4)) + 0x3ce4d11293de02e6;
  _DAT_1831c6c50 = _DAT_1831c6b00 ^ uVar3 ^ uVar2;
  _DAT_1831c6bd8 = (_DAT_1831c6bd8 ^ uVar3) + uVar2 ^ 0x7308aa663635afd6;
  _DAT_1831c6b80 = (_DAT_1831c6b80 * -0x6ecd52d780a00c25 ^ _DAT_1831c6bd8) + uVar3;
  _DAT_1831c6cf8 = _DAT_1831c6b80 ^ _DAT_1831c6bd8;
  _DAT_1831c6b18 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x58) = (int)uVar2;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x58) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x58)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x84ffb60 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1884ffb60(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  ulonglong uVar5;
  uint unaff_R12D;
  longlong *unaff_R13;
  uint uVar6;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM11_Da;
  longlong unaff_XMM15_Qa;
  longlong lVar7;
  
  *(undefined2 *)(unaff_RBP + 0x1e) = *(undefined2 *)(unaff_RBP + 0x60);
  lVar7 = unaff_RBP + 0x1e;
  (**(code **)(unaff_R13 + JNI->SetCharArrayRegion /*0x688*/))();
  uVar2 = (ulonglong)unaff_R12D ^ 0x84222325;
  lVar1 = (ulonglong)((uint)_DAT_1831c6cc0 & (uint)uVar2) * 2;
  uVar2 = (~_DAT_1831c6b30 + 2) * ((_DAT_1831c6cc0 ^ uVar2) + lVar1);
  uVar5 = (uVar2 | _DAT_1831c6c30) + (uVar2 & _DAT_1831c6c30);
  uVar3 = uVar5 * 0x2000 ^ uVar5;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar2 = (ulonglong)unaff_R12D ^ 0x84222324;
  uVar4 = uVar2 | uVar3;
  _DAT_1831c6c18 = func_0x000188516c70(uVar4 + ((uint)uVar2 & (uint)uVar3),uVar4,uVar5,lVar1,lVar7);
  uVar6 = unaff_R12D ^ unaff_XMM6_Da;
  uVar2 = _DAT_1831c6c18 << 0x23 | _DAT_1831c6c18 >> 0x1d;
  uVar3 = ((((ulonglong)uVar6 * (ulonglong)_DAT_180f79ea0 + _DAT_180f79eb0 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_180f79e90 +
           ((ulonglong)(unaff_R12D ^ unaff_XMM11_Da) * (ulonglong)_DAT_180f79e80 << 0x20) +
           (ulonglong)(unaff_R12D ^ unaff_XMM11_Da) * (ulonglong)_DAT_180f79e70 +
           ((ulonglong)(unaff_R12D | unaff_XMM11_Da) * (ulonglong)_DAT_180f79e60 << 0x20) +
           (ulonglong)(unaff_R12D | unaff_XMM11_Da) * (ulonglong)_DAT_180f79e50 +
           ((ulonglong)(unaff_R12D & unaff_XMM11_Da) * (ulonglong)_DAT_180f79e40 << 0x20 |
           (ulonglong)(unaff_R12D & unaff_XMM11_Da) * (ulonglong)_DAT_180f79e30) +
           ((ulonglong)unaff_R12D * (ulonglong)_DAT_180f79e20 << 0x20) +
           (ulonglong)unaff_R12D * (ulonglong)_DAT_180f79e10) -
          (((ulonglong)uVar6 * (ulonglong)unaff_XMM7_Da + unaff_XMM15_Qa << 0x20) +
           (ulonglong)uVar6 * (ulonglong)unaff_XMM8_Da +
          ((ulonglong)unaff_R12D * (ulonglong)unaff_XMM7_Da << 0x20) +
          (ulonglong)unaff_R12D * (ulonglong)unaff_XMM8_Da)) + 0x89dac170d88cf7ab;
  _DAT_1831c6b38 = _DAT_1831c6c98 ^ uVar2 ^ uVar3;
  _DAT_1831c6bd0 = (_DAT_1831c6bd0 ^ uVar2) + uVar3 ^ 0x2c0fc012f7816571;
  _DAT_1831c6cf0 = (_DAT_1831c6cf0 * -0x36e426b2cff205bd ^ _DAT_1831c6bd0) + uVar2;
  _DAT_1831c6cf8 = _DAT_1831c6cf0 ^ _DAT_1831c6bd0;
  _DAT_1831c6c60 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x50) = (int)uVar3;
  *(int *)(unaff_RBP + 0x58) = *(int *)(unaff_RBP + 0xc);
  switch((int)uVar3 < *(int *)(unaff_RBP + 0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x8502593 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188502593(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  
  uVar2 = (**(code **)(unaff_R13 + JNI->AllocObject /*0xd8*/))();
  *(undefined8 *)(unaff_RBP + 0x50) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x58) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x60) = *(undefined8 *)(unaff_RBP + 0x28);
  *(undefined4 *)(unaff_RBP + 0x68) = 0;
  *(undefined4 *)(unaff_RBP + 0x70) = unaff_EDI;
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


// ----- block @ rva 0x8502729 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_188502729(void)

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


// ----- block @ rva 0x85027b1 -----

undefined8 FUN_1885027b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x8502970 -----

void FUN_188502970(void)

{
  return;
}


// ----- block @ rva 0x8502ac2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_188502ac2(longlong param_1)

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

