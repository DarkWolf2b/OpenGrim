// ===== Lsixtwo/iZ; _6f9fd9a2611811fe6f648e44740320a9 ()V (handler @ image 188494af0, runtime 6ffff00a4af0) =====

void FUN_188494af0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000188491e69 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f65aa0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iZ; byn (Lnet/minecraft/class_1799;)Ljava/util/List; (handler @ image 188476ec0, runtime 6ffff0086ec0) =====

void FUN_188476ec0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x000188476f13 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f5efb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iZ; byo (Lnet/minecraft/class_1799;)Ljava/util/List; (handler @ image 188477700, runtime 6ffff0087700) =====

void FUN_188477700(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001884777c1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f5f2e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iZ; byp (Lnet/minecraft/class_1799;)Ljava/util/List; (handler @ image 1884acb10, runtime 6ffff00bcb10) =====

void FUN_1884acb10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001884acbd1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f698e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iZ; byq (Lnet/minecraft/class_2561;)Z (handler @ image 1884b16f0, runtime 6ffff00c16f0) =====

void FUN_1884b16f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001884b17b1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f6ad40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iZ; byr (Ljava/util/List;)Ljava/time/LocalDate; (handler @ image 1884b68f0, runtime 6ffff00c68f0) =====

void FUN_1884b68f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001884b694c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f6c4d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iZ; bys (Ljava/lang/String;)Ljava/time/LocalDate; (handler @ image 1884b7680, runtime 6ffff00c7680) =====

void FUN_1884b7680(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001884b7757 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f6caa8 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}



// ===== Lsixtwo/iZ; byt (II)I (handler @ image 1884e4450, runtime 6ffff00f4450) =====

void FUN_1884e4450(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001884e4535 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f76200 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/iZ; byu (IIII)Ljava/time/LocalDate; (handler @ image 1884edc80, runtime 6ffff00fdc80) =====

void FUN_1884edc80(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x19704,0x400);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018848312d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180f62590 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



