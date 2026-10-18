// ===== Lsixtwo/nX; _7121319a0950db9a8912791192064035 ()V (handler @ image 186727f30, runtime 6fffee337f30) =====

void FUN_186727f30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018672803c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808e2d88 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nX; cAA (IJ)I (handler @ image 1867e1000, runtime 6fffee3f1000) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867e1000(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = (uRam00000001831477e8 ^ _UNK_180904f10) + uRam0000000183147848 + 0x43d46bd4a8288d8;
  uVar6 = (uRam0000000183147848 ^ _UNK_180904f18) + uRam00000001831477e8 + 0x1fbeb6b2447782ab;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831477e8 ^ _UNK_180904f10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147848 ^ _UNK_180904f18;
  uRam0000000183147950 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001831477e8 + 0x1fbeb6b2447782ab) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183147848 + 0x43d46bd4a8288d8));
  uRam0000000183147bd8 =
       (uRam0000000183147bd8 ^ uRam0000000183147950 ^ 0x43d46bdcea0abfd) + 0x1b83f00f8ad72956 ^
       0x8c2f921b03d4995;
  uRam0000000183147bd0 =
       (uRam0000000183147bd0 * -0x3f3f17a4340fbfad ^ uRam0000000183147bd8) +
       (uRam0000000183147950 ^ 0x43d46bdcea0abfd);
  uRam0000000183147b18 = uRam0000000183147bd0 ^ uRam0000000183147bd8;
  uRam00000001831478c0 = 0x1b83f00f8ad72956;
  uVar5 = (~uRam0000000183147c98 + 0x80178962c97bfd29) *
          ((uRam0000000183147cc8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183147cc8 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001831477b8) + (uVar5 & uRam00000001831477b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147cf0 =
       func_0x0001867ec4a0((uVar5 | 0x801789624d59a1f2) + (uVar5 & 0x801789624d59a1f2));
  uVar5 = (uRam0000000183147cf0 ^ 0x7fff) * -0x10cca062830e3df5;
  uRam00000001831478d8 = uRam0000000183147ca0 ^ uVar5 ^ 0x80178962c97c7d27;
  uRam0000000183147b38 = (uRam0000000183147b38 ^ uVar5) + 0x80178962c97c7d27 ^ 0x6c7066cec6628905;
  uRam0000000183147ac8 = (uRam0000000183147ac8 * -0x7d2c2ee6ea47baf7 ^ uRam0000000183147b38) + uVar5
  ;
  uRam0000000183147660 = uRam0000000183147ac8 ^ uRam0000000183147b38;
  uRam0000000183147738 = -0x7fe8769d368382d9;
  uRam0000000183147978 = func_0x0001867ec4a0(uRam0000000183147bb8 + 0x76d3a60a4f85a421 ^ 0x18);
  uRam0000000183147528 =
       (uRam0000000183147528 ^ uRam0000000183147978 & 0xfffffffff) + 0xd11175767561a06b ^
       0x9b0973c7ee38eb26;
  uRam0000000183147aa0 =
       (uRam0000000183147aa0 * -0x598af2a3f386db45 ^ uRam0000000183147528) +
       (uRam0000000183147978 & 0xfffffffff);
  uRam0000000183147688 = uRam0000000183147aa0 ^ uRam0000000183147528;
  uRam0000000183147bb8 = 0xd11175767561a06b;
  uVar5 = (~uRam0000000183147948 + 0x2eee8a898a9e5f96) *
          ((uRam0000000183147548 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183147548 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam00000001831475a0) + (uVar5 & uRam00000001831475a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147678 =
       func_0x0001867ec4a0((uVar5 | 0x2eee8a890ebc034f) + (uVar5 & 0x2eee8a890ebc034f));
  uVar5 = (uRam0000000183147678 ^ 0x2eee8a898a9e5f95) << 0x10 |
          (uRam0000000183147678 ^ 0x2eee8a898a9e5f95) >> 0x30;
  uRam00000001831476b0 = uRam0000000183147c60 ^ uVar5 ^ 0x2eee8a898a9edf94;
  uRam00000001831479b8 = (uRam00000001831479b8 ^ uVar5) + 0x2eee8a898a9edf94 ^ 0xd895badb06e155c;
  uRam0000000183147c40 = (uRam0000000183147c40 * 0x221849585c1e17f ^ uRam00000001831479b8) + uVar5;
  uRam0000000183147980 = uRam0000000183147c40 ^ uRam00000001831479b8;
  uRam0000000183147a80 = 0x2eee8a898a9edf94;
  uRam0000000183147b98 = func_0x0001867ec4a0(uRam0000000183147be0 ^ 0x15c617545f33d35);
  uVar5 = uRam0000000183147b98 ^ 0x3cffb2b99737f2dc;
  uRam0000000183147b08 = uRam0000000183147868 ^ uVar5 ^ 0x7fff;
  uRam0000000183147a28 = (uRam0000000183147a28 ^ uVar5) + 0x7fff ^ 0x82d0d56900cb2dc5;
  uRam0000000183147538 = (uRam0000000183147538 * 0x68dc49420dd30dc9 ^ uRam0000000183147a28) + uVar5;
  uRam0000000183147c40 = uRam0000000183147538 ^ uRam0000000183147a28;
  uRam0000000183147820 = 0x7fff;
  uRam0000000183147850 = func_0x0001867ec4a0(uRam0000000183147680 ^ 0x177f21de4c62e7fd);
  uRam0000000183147638 =
       (uRam0000000183147638 ^ uRam0000000183147850) + 0x6cdd9cd758e55d17 ^ 0xcaac2977c85477e5;
  uRam0000000183147b20 =
       (uRam0000000183147b20 * 0x306634d1f45b015 ^ uRam0000000183147638) + uRam0000000183147850;
  uRam00000001831475e0 = uRam0000000183147b20 ^ uRam0000000183147638;
  uRam0000000183147c28 = 0x6cdd9cd758e55d17;
  uVar5 = (uRam0000000183147ae8 ^ _UNK_180904f20) + uRam0000000183147ae0 + 0x93226328233901cd;
  uVar6 = (uRam0000000183147ae0 ^ _UNK_180904f28) + uRam0000000183147ae8 + 0x6cdd9cd758e55d17;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183147ae8 ^ _UNK_180904f20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147ae0 ^ _UNK_180904f28;
  uRam0000000183147720 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183147ae8 + 0x6cdd9cd758e55d17) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183147ae0 + 0x93226328233901cd));
  uVar5 = ~uRam0000000183147720 & 0x93226328a71b22e8;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5;
  uRam00000001831479d8 = uRam0000000183147a60 ^ uVar5 ^ 0x7fff;
  uRam0000000183147640 = (uRam0000000183147640 ^ uVar5) + 0x7fff ^ 0xfce1c0b930eb9fa7;
  uRam0000000183147868 = (uRam0000000183147868 * 0x39f5ede58b750c5b ^ uRam0000000183147640) + uVar5;
  uRam0000000183147bd8 = uRam0000000183147868 ^ uRam0000000183147640;
  uRam0000000183147598 = 0x7fff;
  uVar5 = (uRam00000001831475d8 ^ _UNK_180904f30) + uRam0000000183147b18 + 0x7f1ddfbef265da5e;
  uVar6 = (uRam0000000183147b18 ^ _UNK_180904f38) + uRam00000001831475d8 + 0x1b83f00f8ad72956;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831475d8 ^ _UNK_180904f30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147b18 ^ _UNK_180904f38;
  uRam0000000183147848 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001831475d8 + 0x1b83f00f8ad72956) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183147b18 + 0x7f1ddfbef265da5e));
  uVar5 = uRam0000000183147848 >> 1 | uRam0000000183147848;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = uRam0000000183147848 ^ 0x7f1ddfbe7647f97b ^
          (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80;
  uRam0000000183147938 = uRam00000001831475c0 ^ uVar5 ^ 0x9aa1cfce011f22d1;
  uRam0000000183147bc0 = (uRam0000000183147bc0 ^ uVar5) + 0x9aa1cfce011f22d1 ^ 0x8f011e61bc14cb3;
  uRam0000000183147b38 = (uRam0000000183147b38 * 0xf72a05d857020d1 ^ uRam0000000183147bc0) + uVar5;
  uRam00000001831478b0 = uRam0000000183147b38 ^ uRam0000000183147bc0;
  uRam0000000183147c80 = 0x9aa1cfce011f22d1;
  uRam0000000183147638 = func_0x0001867ec4a0(lRam0000000183147c38 + 0xaeb28a67f81b8da3U ^ 0x75);
  uVar5 = uRam0000000183147638 - (uRam0000000183147638 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183147638;
  uRam0000000183147ca0 = (uRam0000000183147ca0 ^ uVar5) + 0x649e2fb1fc90d02d ^ 0xa5981b5cdda97b0b;
  uRam00000001831477d0 = (uRam00000001831477d0 * 0x6915a5bfeb0b57e9 ^ uRam0000000183147ca0) + uVar5;
  uRam00000001831479a0 = uRam00000001831477d0 ^ uRam0000000183147ca0;
  uRam0000000183147ad8 = 0x649e2fb1fc90d02d;
  uVar5 = (~uRam0000000183147768 + 0x1b83f00f8ad72957) *
          ((uRam00000001831478a8 ^ 0x7f1ddfbef265da5e) +
          (uRam00000001831478a8 & 0x7f1ddfbef265da5e) * 2);
  uVar5 = (uVar5 | uRam0000000183147a78) + (uVar5 & uRam0000000183147a78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831478a8 =
       func_0x0001867ec4a0((uVar5 | 0x649e2fb178b2f308) + (uVar5 & 0x649e2fb178b2f308));
  uVar5 = uRam00000001831478a8 - (uRam00000001831478a8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam00000001831478a8) & 0x3ffffffffffff;
  uRam00000001831475a8 = (uRam00000001831475a8 ^ uVar5) + 0x1b01d00e02472952 ^ 0x95e3a4fe69bceb99;
  uRam0000000183147cf8 = (uRam0000000183147cf8 * -0x7c32286b514e3b21 ^ uRam00000001831475a8) + uVar5
  ;
  uRam0000000183147610 = uRam0000000183147cf8 ^ uRam00000001831475a8;
  uRam0000000183147578 = 0x1b01d00e02472952;
  uVar5 = (~uRam0000000183147778 + 0x3603a01c048e52a5) *
          ((uRam0000000183147750 ^ 0x649e2fb178b2f308) +
          (uRam0000000183147750 & 0x649e2fb178b2f308) * 2);
  uVar5 = (uVar5 | uRam0000000183147820) + (uVar5 & uRam0000000183147820);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147b18 =
       func_0x0001867ec4a0((uVar5 | 0x529d8fad7c3ca1ac) + (uVar5 & 0x529d8fad7c3ca1ac));
  uVar5 = uRam0000000183147b18 * -0x202cdbcb09a79109 ^ 0x3603a01c048e52a4;
  uRam0000000183147930 = uRam0000000183147b18 ^ uVar5 ^ 0x9aa1cfce011f22d1;
  uRam00000001831479d0 = (uRam00000001831479d0 ^ uVar5) + 0x9aa1cfce011f22d1 ^ 0x5f29ff1b1537eed1;
  uRam00000001831477f8 = (uRam00000001831477f8 * 0x10803a941572a5c9 ^ uRam00000001831479d0) + uVar5;
  uRam0000000183147908 = uRam00000001831477f8 ^ uRam00000001831479d0;
  uRam00000001831475f8 = uRam00000001831475b8 ^ 0x9aa1cfce011f22d1;
  uRam00000001831475f0 = 0x9aa1cfce011f22d1;
  uVar5 = ((uRam0000000183147998 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183147998 & 0x84225cda) * 2) * -lRam0000000183147a20;
  uVar5 = (uVar5 | uRam0000000183147720) + (uVar5 & uRam0000000183147720);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147c80 =
       func_0x0001867ec4a0((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam0000000183147c80 & 0xffffffff80000000;
  uRam0000000183147920 = uRam0000000183147c20 ^ uVar5 ^ 0x7fff;
  uRam0000000183147bc8 = (uRam0000000183147bc8 ^ uVar5) + 0x7fff ^ 0x707095a2d9b693aa;
  uRam0000000183147868 = (uRam0000000183147868 * -0x215262eb5a5336cd ^ uRam0000000183147bc8) + uVar5
  ;
  uRam00000001831476a8 = uRam0000000183147868 ^ uRam0000000183147bc8;
  uRam0000000183147788 = 0x7fff;
  uRam0000000183147c10 = func_0x0001867ec4a0(uRam00000001831476a0 ^ 0x40e42204a0df96aa);
  uRam0000000183147678 =
       (uRam0000000183147678 ^ uRam0000000183147c10 * -0x37bfe37dd74e3871) + 0x80e2204189b80684 ^
       0x3de0e54d7884e390;
  uRam0000000183147738 =
       (uRam0000000183147738 * -0xdb2fdd8de069fb5 ^ uRam0000000183147678) +
       uRam0000000183147c10 * -0x37bfe37dd74e3871;
  uRam0000000183147be0 = uRam0000000183147738 ^ uRam0000000183147678;
  uRam00000001831475c8 = 0x80e2204189b80684;
  uVar5 = (uRam0000000183147870 ^ _UNK_180904f40) + uRam0000000183147a80 + 0x7f1ddfbef265da5e;
  uVar6 = (uRam0000000183147a80 ^ _UNK_180904f48) + uRam0000000183147870 + 0x80e2204189b80684;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183147870 ^ _UNK_180904f40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147a80 ^ _UNK_180904f48;
  uRam0000000183147a50 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183147870 + 0x80e2204189b80684) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183147a80 + 0x7f1ddfbef265da5e));
  uRam00000001831476a8 = uRam00000001831476a8 ^ uRam0000000183147a50 ^ 0x2563a1093af13342;
  uRam00000001831479b8 =
       (uRam00000001831479b8 * -0x1abf217e91f1f005 ^ uRam00000001831476a8) + uRam0000000183147a50;
  uRam00000001831479e0 = uRam00000001831479b8 ^ uRam00000001831476a8;
  uRam0000000183147900 = 0;
  uRam0000000183147c88 = func_0x0001867ec4a0(uRam00000001831478b8 + 0x33ff8425ffddff ^ 0x4c);
  uVar5 = uRam0000000183147c88 & 0xffffffffffffffe0;
  uRam0000000183147598 = uRam00000001831475d8 ^ uVar5 ^ 0x7fff;
  uRam0000000183147a78 = (uRam0000000183147a78 ^ uVar5) + 0x7fff ^ 0x4d0b3424524759e3;
  uRam0000000183147830 = (uRam0000000183147830 * -0x105776708013dfc7 ^ uRam0000000183147a78) + uVar5
  ;
  uRam0000000183147640 = uRam0000000183147830 ^ uRam0000000183147a78;
  uRam0000000183147918 = 0x7fff;
  uVar5 = (~uRam0000000183147838 + 0x5d055bb436450064) *
          ((uRam0000000183147868 ^ 0x5d055bb4b2672346) +
          (uRam0000000183147868 & 0x5d055bb4b2672346) * 2);
  uVar5 = (uVar5 | uRam0000000183147770) + (uVar5 & uRam0000000183147770);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831476c0 =
       func_0x0001867ec4a0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = (uRam00000001831476c0 ^ 0x5cae1bfaf95e2649) << 10 |
          (uRam00000001831476c0 ^ 0x5cae1bfaf95e2649) >> 0x36;
  uRam0000000183147820 = uRam0000000183147820 ^ uVar5 ^ 0xfe37fe9a8d963eae;
  uRam0000000183147648 = (uRam0000000183147648 * -0x36742566761ec765 ^ uRam0000000183147820) + uVar5
  ;
  uRam0000000183147748 = uRam0000000183147648 ^ uRam0000000183147820;
  uRam0000000183147998 = 0;
  uVar5 = param_4 ^ 0x84222325 ^ uRam0000000183147a70;
  lVar3 = (param_4 ^ 0x84222325) + uRam0000000183147a58;
  uVar6 = uVar5 + lVar3;
  uVar8 = (uRam0000000183147a58 ^ 0x7fff) + uRam0000000183147a70 + 0x7fff;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183147a58 ^ 0x7fff;
  uRam0000000183147ae8 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183147a70 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar2 = (uint)param_4 & 0x7fff;
  uRam0000000183147b58 = (ulonglong)uVar2;
  uRam0000000183147590 =
       (uRam0000000183147590 ^ uRam0000000183147ae8) + uRam0000000183147b58 ^ 0x67eb061e69529789;
  uRam0000000183147538 =
       (uRam0000000183147538 * -0x72a276998c9dda77 ^ uRam0000000183147590) + uRam0000000183147ae8;
  uRam0000000183147608 = uRam0000000183147538 ^ uRam0000000183147590;
  uVar5 = uRam0000000183147b58 ^ 0x84222325 ^ uRam0000000183147960;
  uVar6 = param_3 ^ uRam0000000183147548;
  lVar4 = (uRam0000000183147b58 ^ 0x84222325) + uRam0000000183147548;
  lVar3 = uRam0000000183147960 + param_3;
  uVar8 = uVar5 + lVar4;
  uVar7 = uVar6 + lVar3;
  uVar5 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uRam0000000183147ba0 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) - lVar3 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uVar5 = (uVar2 | param_3) ^ uRam0000000183147ba0;
  uVar5 = uVar5 << 0x37 | uVar5 >> 9;
  uVar8 = (ulonglong)(uVar2 ^ param_3);
  uRam0000000183147800 = (uRam0000000183147800 ^ uVar5) + uVar8 ^ 0x1b56e61d7af37494;
  uRam0000000183147af8 = (uRam0000000183147af8 * -0x26c01b421e891787 ^ uRam0000000183147800) + uVar5
  ;
  uRam00000001831476f0 = uRam0000000183147af8 ^ uRam0000000183147800;
  uVar5 = (~uRam0000000183147c90 + 0x3b2b9428) *
          ((uRam00000001831478b8 ^ 0x92976580) +
          (ulonglong)((uint)uRam00000001831478b8 & 0x92976580) * 2);
  uVar5 = (uVar5 | uRam0000000183147c60) + (uVar5 & uRam0000000183147c60);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147bd8 = uVar8;
  uRam0000000183147b48 =
       func_0x0001867ec4a0((uVar5 | 0xa9bcf1a7) + (ulonglong)((uint)uVar5 & 0xa9bcf1a7));
  uVar5 = (uRam0000000183147b48 ^ 0x53fa4df272c2723) >> 1 |
          (ulonglong)(((uRam0000000183147b48 ^ 0x53fa4df272c2723) & 1) != 0) << 0x3f;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5;
  uRam00000001831477d0 = (uRam00000001831477d0 ^ uVar5) + 0x3fbfd6a7 ^ 0x69dbf8e009618fd2;
  uRam0000000183147748 = (uRam0000000183147748 * 0x42d9817399fedfcb ^ uRam00000001831477d0) + uVar5;
  uRam0000000183147958 = uRam0000000183147748 ^ uRam00000001831477d0;
  uRam0000000183147aa0 = 0x3fbfd6a7;
  uRam0000000183147688 = func_0x0001867ec4a0(uRam0000000183147c88 + 0x5008004001cff ^ 0x87);
  uVar5 = ((uRam0000000183147688 ^ 0x236201d6) & 0xfff) << 0x2f |
          (uRam0000000183147688 ^ 0x236201d6) >> 0x11;
  uRam0000000183147590 = (uRam0000000183147590 ^ uVar5) + 0x4012c39 ^ 0xf5aa071a15957146;
  uRam0000000183147740 = (uRam0000000183147740 * -0x19db68b2f56d5aeb ^ uRam0000000183147590) + uVar5
  ;
  uRam0000000183147590 = uRam0000000183147740 ^ uRam0000000183147590;
  uRam0000000183147cf0 = 0x4012c39;
  uVar5 = (~uRam00000001831476e0 + 0xd524206) *
          ((uRam0000000183147928 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183147928 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam00000001831477b8) + (uVar5 & uRam00000001831477b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831475a8 =
       func_0x0001867ec4a0((uVar5 | 0x89706120) + (ulonglong)((uint)uVar5 & 0x89706120));
  uRam0000000183147870 =
       (uRam0000000183147870 ^ uRam00000001831475a8 ^ 0xd524205) - 0xd524205 ^ 0xc87b3f5b47c2a682;
  uRam0000000183147b40 =
       (uRam0000000183147b40 * 0x194014d1f5821579 ^ uRam0000000183147870) +
       (uRam00000001831475a8 ^ 0xd524205);
  uRam0000000183147af0 = uRam0000000183147b40 ^ uRam0000000183147870;
  uRam0000000183147ca8 = 0xf2adbdfb;
  uVar5 = (~uRam0000000183147c58 + 0xd524206) *
          ((uRam0000000183147a70 ^ 0x84221d29) +
          (ulonglong)((uint)uRam0000000183147a70 & 0x84221d29) * 2);
  uVar5 = (uVar5 | uRam0000000183147888) + (uVar5 & uRam0000000183147888);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147648 =
       func_0x0001867ec4a0((uVar5 | 0x89705f2c) + (ulonglong)((uint)uVar5 & 0x89705f2c));
  uVar5 = uRam0000000183147648 ^ 0xd524205;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar5;
  uRam0000000183147858 = uRam00000001831477e8 ^ uVar5 ^ 0xd528011;
  uRam0000000183147c48 = (uRam0000000183147c48 ^ uVar5) + 0xd528011 ^ 0xa9de44c096f64ef4;
  uRam0000000183147838 = (uRam0000000183147838 * 0x5b981e9dab48c6c1 ^ uRam0000000183147c48) + uVar5;
  uRam0000000183147be8 = uRam0000000183147838 ^ uRam0000000183147c48;
  uRam00000001831475a0 = 0xd528011;
  uVar5 = (~uRam00000001831478a8 + 0xf2adbdfc) *
          ((uRam0000000183147558 ^ 0x8970a334) +
          (ulonglong)((uint)uRam0000000183147558 & 0x8970a334) * 2);
  uVar5 = (uVar5 | uRam0000000183147bb8) + (uVar5 & uRam0000000183147bb8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147a98 =
       func_0x0001867ec4a0((uVar5 | 0x7bdd1ecf) + (ulonglong)((uint)uVar5 & 0x7bdd1ecf));
  uVar5 = uRam0000000183147a98 >> 0xc & 0xffffffffff;
  uRam00000001831478f8 = uRam0000000183147878 ^ uVar5 ^ 0x100003e0c;
  uRam00000001831475a0 = (uRam00000001831475a0 ^ uVar5) + 0x100003e0c ^ 0x3ed23e14a7cfb945;
  uRam0000000183147b00 = (uRam0000000183147b00 * -0x525266e3502d4b49 ^ uRam00000001831475a0) + uVar5
  ;
  uRam0000000183147530 = uRam0000000183147b00 ^ uRam00000001831475a0;
  uRam0000000183147850 = 0x3e0c;
  uVar5 = (~uRam0000000183147bf0 + 0x6a07b4d9) *
          ((uRam00000001831479b8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831479b8 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183147b90) + (uVar5 & uRam0000000183147b90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001831475e8 =
       func_0x0001867ec4a0((uVar5 | 0xee2597fd) + (ulonglong)((uint)uVar5 & 0xee2597fd));
  uVar5 = (uRam00000001831475e8 ^ 0x6a07b4d8) << 0x10 | uRam00000001831475e8 >> 0x30;
  uRam0000000183147ca0 = (uRam0000000183147ca0 ^ uVar5) - 0x6a07b4d8 ^ 0x78fe1e3d27b7121c;
  uRam0000000183147a78 = (uRam0000000183147a78 * -0x5ba3ce089059696f ^ uRam0000000183147ca0) + uVar5
  ;
  uRam0000000183147698 = uRam0000000183147a78 ^ uRam0000000183147ca0;
  uRam00000001831478b8 = 0x95f84b28;
  uVar5 = (~uRam0000000183147968 + 0x6a07b4d9) *
          ((uRam0000000183147b48 ^ 0x84221d29) +
          (ulonglong)((uint)uRam0000000183147b48 & 0x84221d29) * 2);
  uVar5 = (uVar5 | uRam00000001831479a0) + (uVar5 & uRam00000001831479a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147648 =
       func_0x0001867ec4a0((uVar5 | 0xee25a9f1) + (ulonglong)((uint)uVar5 & 0xee25a9f1));
  uVar5 = uRam0000000183147648 & 0x7fffffffffffff;
  uRam0000000183147650 = uRam0000000183147c10 ^ uVar5 ^ 0x6a07f2e4;
  uRam0000000183147830 = (uRam0000000183147830 ^ uVar5) + 0x6a07f2e4 ^ 0x9e4f7fae4003517b;
  uRam00000001831478d8 = (uRam00000001831478d8 * -0x5189b34f40970cd9 ^ uRam0000000183147830) + uVar5
  ;
  uRam0000000183147b88 = uRam00000001831478d8 ^ uRam0000000183147830;
  uRam00000001831477a8 = 0x6a07f2e4;
  uVar5 = (uRam0000000183147cb8 ^ _UNK_180904f50) + uRam0000000183147650 + 0xee25d1c1;
  uVar6 = (uRam0000000183147650 ^ _UNK_180904f58) + uRam0000000183147cb8 + 0x95f84b28;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183147cb8 ^ _UNK_180904f50;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147650 ^ _UNK_180904f58;
  uRam0000000183147580 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183147cb8 + 0x95f84b28) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183147650 + 0xee25d1c1));
  uVar5 = (uRam0000000183147580 ^ 0x95f80908) * 0x21a879c8c32caa77;
  uRam0000000183147b18 = uRam00000001831476c8 ^ uVar5 ^ 0x100003e0c;
  uRam0000000183147cb8 = (uRam0000000183147cb8 ^ uVar5) + 0x100003e0c ^ 0xba9dd7e9185a7261;
  uRam0000000183147548 = (uRam0000000183147548 * -0x416f409da4d0be71 ^ uRam0000000183147cb8) + uVar5
  ;
  uRam00000001831476c0 = uRam0000000183147548 ^ uRam0000000183147cb8;
  uRam0000000183147ac8 = 0x3e0c;
  uVar5 = (uRam0000000183147cb0 ^ _UNK_180904f60) + uRam0000000183147a78 + 0x8e4ad8fd;
  uVar6 = (uRam0000000183147a78 ^ _UNK_180904f68) + uRam0000000183147cb0 + 0xf5974234;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183147cb0 ^ _UNK_180904f60;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147a78 ^ _UNK_180904f68;
  uRam00000001831475d0 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183147cb0 + 0xf5974234) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183147a78 + 0x8e4ad8fd));
  uVar5 = (uRam00000001831475d0 ^ 0xfffffbfc) << 7 | uRam00000001831475d0 >> 0x39;
  uRam00000001831478f0 = uRam0000000183147578 ^ uVar5 ^ 0x100003e0c;
  uRam00000001831475b8 = (uRam00000001831475b8 ^ uVar5) + 0x100003e0c ^ 0xea6f4460405c79c;
  uRam0000000183147780 = (uRam0000000183147780 * -0x4932f9bd548c5531 ^ uRam00000001831475b8) + uVar5
  ;
  uRam00000001831477f0 = uRam0000000183147780 ^ uRam00000001831475b8;
  uRam00000001831479f8 = 0x3e0c;
  uRam00000001831478f8 = func_0x0001867ec4a0(lRam0000000183147898 + 0xa6ffb8550093ffU ^ 0x22);
  uVar5 = uRam00000001831478f8 & 0xfffffffff0000000;
  uRam0000000183147a98 = uRam0000000183147678 ^ uVar5 ^ 0x43c102e0;
  uRam0000000183147a48 = (uRam0000000183147a48 ^ uVar5) + 0x43c102e0 ^ 0x1b526d51c6d7cac;
  uRam00000001831477a8 = (uRam00000001831477a8 * 0x5de1cbce69b6158b ^ uRam0000000183147a48) + uVar5;
  uRam0000000183147a50 = uRam00000001831477a8 ^ uRam0000000183147a48;
  uRam0000000183147b00 = 0x43c102e0;
  uRam0000000183147868 = func_0x0001867ec4a0(uRam00000001831476f0 ^ 0xffc7005a64ff8332);
  uVar5 = (ulonglong)(~(((uint)uRam0000000183147868 ^ 0x3fbffebf) * 2) >> 1 & 0x3fbfd6a7);
  uRam0000000183147c58 = (uRam0000000183147c58 ^ uVar5) + 0x3bbefa9e ^ 0x83850237e17f6a2;
  uRam0000000183147938 = (uRam0000000183147938 * -0x268ded813d0838c1 ^ uRam0000000183147c58) + uVar5
  ;
  uRam0000000183147b78 = uRam0000000183147938 ^ uRam0000000183147c58;
  uRam0000000183147ce0 = 0x3bbefa9e;
  uVar5 = (uRam0000000183147748 ^ _UNK_180904f70) + uRam00000001831479f0 + 0xbf9cd9bb;
  uVar6 = (uRam00000001831479f0 ^ _UNK_180904f78) + uRam0000000183147748 + 0x8020842;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183147748 ^ _UNK_180904f70;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831479f0 ^ _UNK_180904f78;
  uRam0000000183147a68 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183147748 + 0x8020842) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831479f0 + 0xbf9cd9bb));
  uVar5 = uRam0000000183147a68 ^ 0x3bbefa9e;
  uRam0000000183147548 = uRam0000000183147c58 ^ uVar5 ^ 0x43c102e0;
  uRam00000001831478a0 = (uRam00000001831478a0 ^ uVar5) + 0x43c102e0 ^ 0x1d414fad1dd48ea9;
  uRam0000000183147ac8 = (uRam0000000183147ac8 * 0x3186f2d531209b97 ^ uRam00000001831478a0) + uVar5;
  uRam00000001831477f0 = uRam0000000183147ac8 ^ uRam00000001831478a0;
  uRam0000000183147948 = 0x43c102e0;
  uRam0000000183147c78 = func_0x0001867ec4a0(uRam00000001831476f8 ^ 0x20ff7c2300212c);
  uRam0000000183147aa8 = uRam0000000183147c78 << 0x2b | uRam0000000183147c78 >> 0x15;
  uRam0000000183147648 = uRam0000000183147648 ^ uRam0000000183147aa8 ^ 0xcf6b537ea446be45;
  uRam0000000183147930 =
       (uRam0000000183147930 * 0x2a654e3d38c1d2fd ^ uRam0000000183147648) + uRam0000000183147aa8;
  uRam00000001831478a0 = uRam0000000183147930 ^ uRam0000000183147648;
  uRam0000000183147b58 = 0;
  uVar5 = (uRam00000001831479d8 ^ 0x84221d29) + uRam0000000183147c90 + 0x84221d29;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001831479d8 ^ 0x84221d29;
  uVar6 = ((uRam0000000183147c90 + uRam00000001831479d8) * 0x2000 |
          uRam0000000183147c90 + uRam00000001831479d8 >> 0x33) ^ uRam0000000183147c90;
  uRam0000000183147b40 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam00000001831479d8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183147c90 + 0x84221d29));
  uVar5 = (ulonglong)(~(uint)uRam0000000183147b40 & 0x3e0c);
  uRam0000000183147530 = uRam0000000183147b80 ^ uVar5 ^ 0x3e0c;
  uRam0000000183147c40 = (uRam0000000183147c40 ^ uVar5) + 0x3e0c ^ 0xe5a1b3c3732b1a22;
  uRam0000000183147ab0 = (uRam0000000183147ab0 * -0x622080c1037518d1 ^ uRam0000000183147c40) + uVar5
  ;
  uRam00000001831475a8 = uRam0000000183147ab0 ^ uRam0000000183147c40;
  uRam00000001831479c0 = 0x3e0c;
  uRam0000000183147920 = func_0x0001867ec4a0(uRam0000000183147bf0 ^ 0x5ffc47d001dc4);
  uVar6 = uRam0000000183147920 ^ 0x3fbfd6a6c0402959;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((ulonglong)
           (0x40 - (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
           << 6 ^ uVar6 ^ 0x3fbfd6a7) & 0xfffffffff;
  uRam0000000183147a80 = (uRam0000000183147a80 ^ uVar5) + 0xc0402958 ^ 0x18098624b9cb52ba;
  uRam0000000183147608 = (uRam0000000183147608 * 0x7de73ac7088bdfbf ^ uRam0000000183147a80) + uVar5;
  uRam0000000183147798 = uRam0000000183147608 ^ uRam0000000183147a80;
  uRam00000001831475e0 = 0xc0402958;
  uRam0000000183147798 = func_0x0001867ec4a0(lRam0000000183147818 + 0xff4bffb74a005affU ^ 0xd3);
  uRam0000000183147c10 = uRam0000000183147c10 ^ uRam0000000183147798 ^ 0x6570f8bc7bfc3289;
  uRam00000001831476e0 =
       (uRam00000001831476e0 * 0x34c7a58dbd4878c7 ^ uRam0000000183147c10) + uRam0000000183147798;
  uRam0000000183147788 = uRam00000001831476e0 ^ uRam0000000183147c10;
  uRam00000001831478c0 = 0;
  uVar5 = ((uRam00000001831475f0 ^ 0x84221d29) +
          (ulonglong)((uint)uRam00000001831475f0 & 0x84221d29) * 2) * -uRam0000000183147aa0;
  uVar5 = (uVar5 | uRam00000001831476b0) + (uVar5 & uRam00000001831476b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x0001867ec4a0((uVar5 | 0x84221d29) + (ulonglong)((uint)uVar5 & 0x84221d29));
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x34 ^ uVar5) &
          0xfffffffffffffff0;
  uRam00000001831479a0 = uRam0000000183147bb0 ^ uVar5 ^ 0x3e0c;
  uRam0000000183147830 = (uRam0000000183147830 ^ uVar5) + 0x3e0c ^ 0xb8460d14c85a44aa;
  uRam0000000183147ba8 = (uRam0000000183147ba8 * -0x3ca0016689a73ebd ^ uRam0000000183147830) + uVar5
  ;
  uRam0000000183147b00 = uRam0000000183147ba8 ^ uRam0000000183147830;
  uRam0000000183147a58 = 0x3e0c;
  uRam0000000183147840 = func_0x0001867ec4a0(uRam0000000183147c78 ^ 0xffdf007bdaffe1f0);
  uRam00000001831479a0 = uRam00000001831479a0 ^ uRam0000000183147840 ^ 0x4eb3dd761bbedcd0;
  uRam00000001831478a0 =
       (uRam00000001831478a0 * 0x70a52e925f6a073 ^ uRam00000001831479a0) + uRam0000000183147840;
  uRam0000000183147a90 = uRam00000001831478a0 ^ uRam00000001831479a0;
  uRam0000000183147658 = 0;
  uVar5 = (uRam0000000183147a08 ^ 0x84221d29) + uRam00000001831475f8 + 0x84221d29;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183147a08 ^ 0x84221d29;
  uVar6 = ((uRam00000001831475f8 + uRam0000000183147a08) * 0x2000 |
          uRam00000001831475f8 + uRam0000000183147a08 >> 0x33) ^ uRam00000001831475f8;
  uRam0000000183147750 =
       func_0x0001867ec4a0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam0000000183147a08 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001831475f8 + 0x84221d29));
  uVar5 = uRam0000000183147750 ^ 0x3e0c;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar5;
  uRam0000000183147738 = uRam0000000183147550 ^ uVar5 ^ 0x3e0c;
  uRam0000000183147968 = (uRam0000000183147968 ^ uVar5) + 0x3e0c ^ 0xc1cb015de74cbd40;
  uRam00000001831479c0 = (uRam00000001831479c0 * 0x39a234885daaa019 ^ uRam0000000183147968) + uVar5;
  uRam0000000183147848 = uRam00000001831479c0 ^ uRam0000000183147968;
  uRam0000000183147500 = 0x3e0c;
  uVar5 = (~uRam00000001831475e0 + 0x3e0d) *
          ((uVar8 ^ 0x84222325 ^ uRam0000000183147b90) +
          (ulonglong)((uint)uRam0000000183147b90 & (uint)(uVar8 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam0000000183147958) + (uVar5 & uRam0000000183147958);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183147808 =
       func_0x0001867ec4a0((uVar8 ^ 0x84221d29 | uVar5) +
                           (ulonglong)((uint)(uVar8 ^ 0x84221d29) & (uint)uVar5));
  lVar3 = uVar8 - ((uVar2 ^ param_3) & 0x3e0c) * 2;
  uRam0000000183147738 =
       (uRam0000000183147738 ^ uRam0000000183147cf8) + lVar3 + 0x3e0c ^ 0xc35126ddfba78f65;
  uRam00000001831478a0 =
       (uRam00000001831478a0 * -0x772a81436d84806b ^ uRam0000000183147738) + uRam0000000183147cf8;
  uRam0000000183147c40 = uRam00000001831478a0 ^ uRam0000000183147738;
  uRam0000000183147cb8 = lVar3 + 0x3e0cU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867e36c3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809030b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nX; cAB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1867ec530, runtime 6fffee3fc530) =====

void FUN_1867ec530(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001867ec57b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809050c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/nX; cAC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 186725220, runtime 6fffee335220) =====

void FUN_186725220(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867252a9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808e1d10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nX; cAr (Lsixtwo/lC;)V (handler @ image 18671a610, runtime 6fffee32a610) =====

void FUN_18671a610(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018671a6da did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808de600 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nX; cAs ()Z (handler @ image 1867206f0, runtime 6fffee3306f0) =====

void FUN_1867206f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867207ae did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808e06d8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nX; cAu (Lsixtwo/lC;FFFFF)V (handler @ image 1867520a0, runtime 6fffee3620a0) =====

void FUN_1867520a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000186752173 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808e79c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nX; cAv (Ljava/lang/UnsupportedOperationException;)Ljava/lang/UnsupportedOperationException; (handler @ image 1867abf70, runtime 6fffee3bbf70) =====

undefined8 FUN_1867abf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/nX; cAw ([B)Ljava/lang/String; (handler @ image 1867ac000, runtime 6fffee3bc000) =====

void FUN_1867ac000(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001867ac0a0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808fa670 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/nX; cAx (IJ)Ljava/lang/String; (handler @ image 1867d6af0, runtime 6fffee3e6af0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867d6af0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = (uRam0000000183147180 ^ _UNK_180901bb0) + uRam0000000183146f40 + 0x5e0b41b91ec1b55d;
  uVar9 = (uRam0000000183146f40 ^ _UNK_180901bb8) + uRam0000000183147180 + 0x333c80652ec0a061;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147180 ^ _UNK_180901bb0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183146f40 ^ _UNK_180901bb8;
  uRam00000001831471e8 =
       func_0x0001867dd5c0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183147180 + 0x333c80652ec0a061) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183146f40 + 0x5e0b41b91ec1b55d));
  uRam0000000183147100 =
       (uRam0000000183147100 ^ uRam0000000183147368) + 0x7f3fc1fdbee3b679 ^ 0x12babfa435f554d6;
  uRam0000000183146f88 =
       (uRam0000000183146f88 * 0x2bdd6a73d1f87083 ^ uRam0000000183147100) + uRam0000000183147368;
  uRam0000000183147108 = uRam0000000183146f88 ^ uRam0000000183147100;
  uRam00000001831470f8 = 0x7f3fc1fdbee3b679;
  uVar6 = (~uRam0000000183147478 + 0xb64b19655c1e8b9b) *
          ((uRam0000000183147338 ^ 0xa6a1d44fa07a5154) +
          (uRam0000000183147338 & 0x26a1d44fa07a5154) * 2);
  uVar6 = (uVar6 | uRam00000001831471a8) + (uVar6 & uRam00000001831471a8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147410 =
       func_0x0001867dd5c0((uVar6 | 0x10eacd2afc64dace) + (uVar6 & 0x10eacd2afc64dace));
  uRam00000001831473c8 =
       (uRam00000001831473c8 ^ uRam0000000183147410 & 0x3fffffffffffffff) + 0x10eacd2a7846f9eb ^
       0x72c0ecf01a8e2466;
  uRam00000001831470c8 =
       (uRam00000001831470c8 * -0x61b1362ede43b4b7 ^ uRam00000001831473c8) +
       (uRam0000000183147410 & 0x3fffffffffffffff);
  uRam00000001831473b8 = uRam00000001831470c8 ^ uRam00000001831473c8;
  uRam0000000183147320 = 0x10eacd2a7846f9eb;
  lRam0000000183146f50 = func_0x0001867dd5c0(uRam00000001831472c8 + 0xfba3e4bd5a8177a7 ^ 0x83);
  uVar6 = (ulonglong)(~(uint)lRam0000000183146f50 & 0x7fff);
  uRam00000001831472e0 = uRam0000000183147310 ^ uVar6 ^ 0xd825817dc75b5fff;
  uRam0000000183147280 = (uRam0000000183147280 ^ uVar6) + 0xd825817dc75b5fff ^ 0xc7cd679bde0fc267;
  uRam0000000183147090 = (uRam0000000183147090 * 0x6e4bba088fde7615 ^ uRam0000000183147280) + uVar6;
  uRam00000001831474e8 = uRam0000000183147090 ^ uRam0000000183147280;
  uRam0000000183146fa0 = 0xd825817dc75b5fff;
  uVar6 = (~uRam00000001831473e0 + 0x27da7e8238a52001) *
          ((uRam0000000183147058 ^ 0xd825817d43797cda) +
          (uRam0000000183147058 & 0x5825817d43797cda) * 2);
  uVar6 = (uVar6 | uRam00000001831473f0) + (uVar6 & uRam00000001831473f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147468 =
       func_0x0001867dd5c0((uVar6 | 0xffffffff7bdc5cda) + (uVar6 & 0xffffffff7bdc5cda));
  uVar6 = uRam0000000183147468 & 0x7fffffffffffffff ^ 0xd825817dc75b5fff;
  uVar6 = uVar6 << 0xe | uVar6 >> 0x32;
  uRam0000000183147178 = uRam00000001831472b0 ^ uVar6 ^ 0x7fff;
  uRam0000000183147150 = (uRam0000000183147150 ^ uVar6) + 0x7fff ^ 0x86ef052cbf3382e8;
  uRam0000000183147088 = (uRam0000000183147088 * -0x56af2344689b6747 ^ uRam0000000183147150) + uVar6
  ;
  uRam0000000183147318 = uRam0000000183147088 ^ uRam0000000183147150;
  uRam0000000183147080 = 0x7fff;
  uRam00000001831471f8 = func_0x0001867dd5c0(uRam0000000183146f98 + 0x3e991d594e47ef48 ^ 0x94);
  uVar6 = uRam00000001831471f8 >> 1 | uRam00000001831471f8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001831471f8;
  uVar6 = uVar6 << 0x2f | uVar6 >> 0x11;
  uRam00000001831470c0 = (uRam00000001831470c0 ^ uVar6) + 0xb4d227bd012e2509 ^ 0x9e15fd2390c18d2e;
  uRam0000000183147310 = (uRam0000000183147310 * -0x4f4a48568fc3b1d3 ^ uRam00000001831470c0) + uVar6
  ;
  uRam00000001831470e8 = uRam0000000183147310 ^ uRam00000001831470c0;
  uRam0000000183147190 = 0xb4d227bd012e2509;
  uVar6 = (~uRam0000000183147440 + 0x4b2dd842fed1daf8) *
          ((uRam0000000183147090 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183147090 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam00000001831470a8) + (uVar6 & uRam00000001831470a8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147410 =
       func_0x0001867dd5c0((uVar6 | 0x4b2dd8427af3862d) + (uVar6 & 0x4b2dd8427af3862d));
  uVar6 = uRam0000000183147410 << 0x19 | uRam0000000183147410 >> 0x27;
  uRam0000000183147358 = uRam00000001831472f8 ^ uVar6 ^ 0x4b2dd842fed25af6;
  uRam0000000183147138 = (uRam0000000183147138 ^ uVar6) + 0x4b2dd842fed25af6 ^ 0x5f9966f394e9e687;
  uRam0000000183147120 = (uRam0000000183147120 * 0x3874f8abf895c419 ^ uRam0000000183147138) + uVar6;
  uRam00000001831474a0 = uRam0000000183147120 ^ uRam0000000183147138;
  uRam0000000183147428 = 0x4b2dd842fed25af6;
  uVar6 = (uRam0000000183147160 ^ _UNK_180901bc0) + uRam0000000183147290 + 0x4b2dd8427af079d3;
  uVar9 = (uRam0000000183147290 ^ _UNK_180901bc8) + uRam0000000183147160 + 0xb4d227bd012e2509;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147160 ^ _UNK_180901bc0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183147290 ^ _UNK_180901bc8;
  uRam00000001831472c0 =
       func_0x0001867dd5c0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183147160 + 0xb4d227bd012e2509) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183147290 + 0x4b2dd8427af079d3));
  uVar6 = uRam00000001831472c0 & 0xffffffffffc00000;
  uRam00000001831471c0 = uRam00000001831473a8 ^ uVar6 ^ 0x7fff;
  uRam00000001831474c0 = (uRam00000001831474c0 ^ uVar6) + 0x7fff ^ 0x99ff4eae0b1fc248;
  uRam00000001831471f8 = (uRam00000001831471f8 * -0x6bf9a23c0178c0cd ^ uRam00000001831474c0) + uVar6
  ;
  uRam0000000183147120 = uRam00000001831471f8 ^ uRam00000001831474c0;
  uRam0000000183147390 = 0x7fff;
  uVar6 = (uRam0000000183147440 ^ _UNK_180901bd0) + uRam0000000183146f78 + 0x84222325;
  uVar9 = (uRam0000000183146f78 ^ _UNK_180901bd8) + uRam0000000183147440 + 0x63390320dd6c8590;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147440 ^ _UNK_180901bd0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183146f78 ^ _UNK_180901bd8;
  uRam0000000183146f78 =
       func_0x0001867dd5c0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183147440 + 0x63390320dd6c8590) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183146f78 + 0x84222325));
  uRam0000000183147150 =
       (uRam0000000183147150 ^ uRam0000000183146f78 ^ 0x63390320dd6c8590) + 0x9cc6fcdf22937a70 ^
       0x3c7bfb41b4a0cff1;
  uRam0000000183147138 =
       (uRam0000000183147138 * 0x791c62013697df7d ^ uRam0000000183147150) +
       (uRam0000000183146f78 ^ 0x63390320dd6c8590);
  uRam0000000183147300 = uRam0000000183147138 ^ uRam0000000183147150;
  uRam00000001831472f0 = 0x9cc6fcdf22937a70;
  uVar6 = (~uRam0000000183147148 + 0x63390320dd6c8591) *
          ((uRam0000000183147490 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183147490 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam0000000183147378) + (uVar6 & uRam0000000183147378);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183146f60 =
       func_0x0001867dd5c0((uVar6 | 0x63390320594ed94a) + (uVar6 & 0x63390320594ed94a));
  uVar6 = uRam0000000183146f60 & 0xffffffffffffff00;
  uRam0000000183147208 = uRam0000000183147208 ^ uVar6 ^ 0x63390320dd6d058f;
  uRam0000000183147058 = (uRam0000000183147058 ^ uVar6) + 0x63390320dd6d058f ^ 0xa55d70b6cf9e39a8;
  uRam00000001831473a8 = (uRam00000001831473a8 * -0x394ef5083655d55 ^ uRam0000000183147058) + uVar6;
  uRam0000000183147308 = uRam00000001831473a8 ^ uRam0000000183147058;
  uRam00000001831472f0 = 0x63390320dd6d058f;
  uRam0000000183147428 = func_0x0001867dd5c0(uRam00000001831474c0 + 0xa0b478e54985ab78 ^ 0x42);
  uVar6 = uRam0000000183147428 >> 1 | uRam0000000183147428;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam0000000183147428;
  uRam0000000183147278 = uRam0000000183147208 ^ uVar6 ^ 0x7fff;
  uRam00000001831473c8 = (uRam00000001831473c8 ^ uVar6) + 0x7fff ^ 0xe70377619e604d2f;
  uRam00000001831472a0 = (uRam00000001831472a0 * 0x4cdf263907d2f849 ^ uRam00000001831473c8) + uVar6;
  uRam0000000183146f98 = uRam00000001831472a0 ^ uRam00000001831473c8;
  uRam0000000183147490 = 0x7fff;
  uRam0000000183146fa0 = func_0x0001867dd5c0(uRam00000001831471f8 + 0xcaabb2c276f47b14 ^ 0x31);
  uVar6 = (uRam0000000183146fa0 ^ 0xd528a740549a3213) * 0x2d90ee6b49000c37 ^ 0x7f3fc1fdbee3b679;
  uRam0000000183147290 = uRam0000000183146fe0 ^ uVar6 ^ 0x902a8f28372ab064;
  uRam0000000183146fa8 = (uRam0000000183146fa8 ^ uVar6) + 0x902a8f28372ab064 ^ 0x3b9f198973ceaa5e;
  uRam0000000183147260 = (uRam0000000183147260 * -0x2b190ef4f63e50b5 ^ uRam0000000183146fa8) + uVar6
  ;
  uRam00000001831473d0 = uRam0000000183147260 ^ uRam0000000183146fa8;
  uRam00000001831470a0 = -0x6fd570d7c8d54f9c;
  uRam0000000183147310 = func_0x0001867dd5c0(uRam0000000183146f78 + 0x4d54d2be4efb7a96 ^ 100);
  uRam0000000183146f30 =
       (uRam0000000183146f30 ^ uRam0000000183147310) + 0x6fd50cd7c6a54f92 ^ 0x16179f1098e86019;
  uRam00000001831474d8 =
       (uRam00000001831474d8 * -0x6a5040b5477ccd7d ^ uRam0000000183146f30) + uRam0000000183147310;
  uRam0000000183147498 = uRam00000001831474d8 ^ uRam0000000183146f30;
  uRam00000001831473a8 = 0x6fd50cd7c6a54f92;
  lRam0000000183147258 = func_0x0001867dd5c0(uRam0000000183147390 ^ 0x48d434bdaafc7b8e);
  uVar6 = lRam0000000183147258 * 0x4c3d4c507526078d ^ 0x10eacd2a7846f9eb;
  uRam0000000183147300 = (uRam0000000183147300 ^ uVar6) + 0x102ac1283842b069 ^ 0xa94ecbae67e35631;
  uRam0000000183146f88 = (uRam0000000183146f88 * 0x4c0810c020e65999 ^ uRam0000000183147300) + uVar6;
  uRam00000001831473d0 = uRam0000000183146f88 ^ uRam0000000183147300;
  uRam00000001831473e0 = 0x102ac1283842b069;
  uVar6 = (uRam0000000183147078 ^ _UNK_180901be0) + uRam00000001831470f8 + 0x6fd50cd742876cb7;
  uVar9 = (uRam00000001831470f8 ^ _UNK_180901be8) + uRam0000000183147078 + 0x20558250708560d2;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183147078 ^ _UNK_180901be0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831470f8 ^ _UNK_180901be8;
  uRam0000000183147140 =
       func_0x0001867dd5c0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183147078 + 0x20558250708560d2) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001831470f8 + 0x6fd50cd742876cb7));
  uVar6 = (uRam0000000183147140 & 0xfffffffffffffff0) -
          (uRam0000000183147140 >> 1 & 0x5555555555555550);
  uVar6 = (uVar6 & 0x3333333333333330) + (uVar6 >> 2 & 0x3333333333333330);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f07) * 0x101010101010101 >> 0x38) << 5 ^
          uRam0000000183147140 & 0xfffffffffffffff0;
  uVar6 = uVar6 << 0x37 | uVar6 >> 9;
  uRam00000001831471a8 = uRam0000000183147068 ^ uVar6 ^ 0x902a8f28372ab064;
  uRam00000001831470b0 = (uRam00000001831470b0 ^ uVar6) + 0x902a8f28372ab064 ^ 0x3e363273af7e993f;
  uRam0000000183146f28 = (uRam0000000183146f28 * -0x42bb733de986c995 ^ uRam00000001831470b0) + uVar6
  ;
  uRam0000000183147368 = uRam0000000183146f28 ^ uRam00000001831470b0;
  uRam0000000183146f58 = 0x902a8f28372ab064;
  uVar6 = (~uRam0000000183146f48 + 0x902a8f28372ab065) *
          ((uRam00000001831471e0 ^ 0x902a8f28b3089341) +
          (uRam00000001831471e0 & 0x102a8f28b3089341) * 2);
  uVar6 = (uVar6 | uRam0000000183147048) + (uVar6 & uRam0000000183147048);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147410 =
       func_0x0001867dd5c0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uVar6 = uRam0000000183147410 << 0x1c ^ 0x8372ab0640000000;
  uRam00000001831473f0 = uVar6 >> 0x1c;
  uVar6 = uRam00000001831473f0 - (uVar6 >> 0x1d & 0x555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uRam00000001831473f0 =
       (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
       uRam00000001831473f0;
  uRam0000000183147218 = uRam0000000183147218 ^ uRam00000001831473f0 ^ 0x106797b1df009630;
  uRam0000000183147030 =
       (uRam0000000183147030 * -0xd98a12f8030b631 ^ uRam0000000183147218) + uRam00000001831473f0;
  uRam00000001831471e8 = uRam0000000183147030 ^ uRam0000000183147218;
  uRam0000000183147010 = 0;
  uVar6 = ((uRam0000000183147180 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183147180 & 0x84225cda) * 2) * -lRam0000000183147188;
  uVar6 = (uVar6 | uRam00000001831471c8) + (uVar6 & uRam00000001831471c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147420 =
       func_0x0001867dd5c0((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uRam00000001831472e8 = uRam00000001831472c8 ^ uRam0000000183147420 ^ 0x7fff;
  uRam00000001831473d0 = (uRam00000001831473d0 ^ uRam0000000183147420) + 0x7fff ^ 0xd7c0960a190f2062
  ;
  uRam0000000183147410 =
       (uRam0000000183147410 * 0x368b045018f6b66d ^ uRam00000001831473d0) + uRam0000000183147420;
  uRam00000001831474f8 = uRam0000000183147410 ^ uRam00000001831473d0;
  uRam00000001831470a8 = 0x7fff;
  uVar6 = (~uRam00000001831474d0 + 0x80c03e02411c4987) *
          ((uRam0000000183147260 ^ 0x7f3fc1fd3ac1955c) +
          (uRam0000000183147260 & 0x7f3fc1fd3ac1955c) * 2);
  uVar6 = (uVar6 | uRam0000000183147198) + (uVar6 & uRam0000000183147198);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147158 =
       func_0x0001867dd5c0((uVar6 | 0xffffffff7bdddcda) + (uVar6 & 0xffffffff7bdddcda));
  uVar6 = uRam0000000183147158 >> 1 | uRam0000000183147158;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam0000000183147158;
  uRam0000000183146f28 = uRam0000000183146f28 ^ uVar6 ^ 0xfd14206ddef37b9f;
  uRam0000000183147170 = (uRam0000000183147170 * 0xeecaebd41b163ad ^ uRam0000000183146f28) + uVar6;
  uRam00000001831471d8 = uRam0000000183147170 ^ uRam0000000183146f28;
  uRam0000000183146f18 = 0;
  uVar6 = ((uRam0000000183147340 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183147340 & 0x84225cda) * 2) * -uRam0000000183147150;
  uVar6 = (uVar6 | uRam0000000183147280) + (uVar6 & uRam0000000183147280);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831474b0 =
       func_0x0001867dd5c0((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uRam00000001831472b0 = uRam0000000183147088 ^ uRam0000000183147158 ^ 0x7fff;
  uRam0000000183146fd8 = (uRam0000000183146fd8 ^ uRam0000000183147158) + 0x7fff ^ 0x47b47b6c982ab4fb
  ;
  uRam0000000183147348 =
       (uRam0000000183147348 * -0x3b16e70809706cc1 ^ uRam0000000183146fd8) + uRam0000000183147158;
  uRam0000000183147418 = uRam0000000183147348 ^ uRam0000000183146fd8;
  uRam00000001831474a8 = 0x7fff;
  uVar6 = (~uRam0000000183147420 + 0x5e0b41b99ae39679) *
          ((uRam0000000183146ff8 ^ 0x5e0b41b91ec1b55d) +
          (uRam0000000183146ff8 & 0x5e0b41b91ec1b55d) * 2);
  uVar6 = (uVar6 | uRam0000000183147370) + (uVar6 & uRam0000000183147370);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831472e0 =
       func_0x0001867dd5c0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uVar6 = uRam00000001831472e0 & 0x7f80000000 ^ 0x399ae39678;
  uRam00000001831470f0 = uRam00000001831470f0 ^ uVar6 ^ 0xf3aa9c92a8d19f2b;
  uRam0000000183147200 = (uRam0000000183147200 * 0x2c45031874df0e3 ^ uRam00000001831470f0) + uVar6;
  uRam0000000183147198 = uRam0000000183147200 ^ uRam00000001831470f0;
  uRam0000000183147420 = 0;
  uVar6 = (~uRam00000001831472c0 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183147050) +
          ((param_4 ^ 0x84222325) & uRam0000000183147050) * 2);
  uVar6 = (uVar6 | uRam00000001831471c8) + (uVar6 & uRam00000001831471c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147428 =
       func_0x0001867dd5c0((param_4 ^ 0x84225cda | uVar6) + (uVar6 & (param_4 ^ 0x84225cda)));
  uVar2 = (uint)param_4 & 0x7fff;
  uVar9 = (ulonglong)uVar2;
  uRam0000000183147448 = (uRam0000000183147448 ^ uRam0000000183147428) + uVar9 ^ 0xf95abf7e62eb4b36;
  uRam00000001831471b8 =
       (uRam00000001831471b8 * 0x6447b2587a9702eb ^ uRam0000000183147448) + uRam0000000183147428;
  uRam0000000183147278 = uRam00000001831471b8 ^ uRam0000000183147448;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar2 ^ 0x84222325;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = 0;
  auVar8 = pshufb(auVar7 ^ _UNK_180901bf0,_UNK_1800170c0);
  uVar5 = auVar8._8_8_ + auVar8._0_8_;
  uVar6 = uVar5 + uVar9;
  if (auVar8._4_4_ < 0) {
    uVar6 = uRam00000001831474c8 ^ uVar5;
  }
  uRam0000000183147118 = uVar9;
  uRam00000001831472a8 = func_0x0001867dd5c0(SUB161(auVar7 ^ _UNK_180901bf0,5) ^ uVar6);
  uVar6 = ~(ulonglong)((uint)uRam00000001831472a8 ^ (uVar2 | param_3)) & uVar9;
  uVar5 = (uVar9 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183146f18 = (uRam0000000183146f18 ^ uVar6) + uVar5 ^ 0x4e20a6ec26057dad;
  uRam0000000183146f00 = (uRam0000000183146f00 * -0x30f73b23ab399049 ^ uRam0000000183146f18) + uVar6
  ;
  uRam0000000183147268 = uRam0000000183146f00 ^ uRam0000000183146f18;
  uVar3 = uVar5 & 0xffffffff;
  uVar6 = (uRam00000001831473a0 ^ _UNK_180901c00) + uRam0000000183147318 + 0x46f8aef;
  uVar9 = (uRam0000000183147318 ^ _UNK_180901c08) + uRam00000001831473a0 + 0x5356568a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831473a0 ^ _UNK_180901c00;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183147318 ^ _UNK_180901c08;
  uRam0000000183146fd8 = uVar3;
  uRam0000000183147048 =
       func_0x0001867dd5c0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831473a0 + 0x5356568a) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183147318 + 0x46f8aef));
  uVar6 = (uRam0000000183147048 ^ 0xd35fffca) * 0x30cb60fed61b3acd ^ 0xd31bff40;
  uRam0000000183147418 = (uRam0000000183147418 ^ uVar6) + 0xd35fffca ^ 0x5c066e14866fd64f;
  uRam00000001831473b8 = (uRam00000001831473b8 * -0x6eeea9351222426f ^ uRam0000000183147418) + uVar6
  ;
  uRam0000000183147080 = uRam00000001831473b8 ^ uRam0000000183147418;
  uRam0000000183147490 = 0xd35fffca;
  uVar6 = (~uRam0000000183147030 + 0x299f2f0d) *
          ((uRam0000000183146fa0 ^ 0xc94ca6af) +
          (ulonglong)((uint)uRam0000000183146fa0 & 0xc94ca6af) * 2);
  uVar6 = (uVar6 | uRam0000000183147158) + (uVar6 & uRam0000000183147158);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831472d0 =
       func_0x0001867dd5c0((uVar6 | 0xe0d389a3) + (ulonglong)((uint)uVar6 & 0xe0d389a3));
  uRam0000000183147160 =
       (uRam0000000183147160 ^ uRam00000001831472d0 * -0x29054ca5065528f9) + 0x64f1aa86 ^
       0xbc119f831fbc3a4e;
  uRam0000000183147130 =
       (uRam0000000183147130 * -0x5dfee0a047c08ed3 ^ uRam0000000183147160) +
       uRam00000001831472d0 * -0x29054ca5065528f9;
  uRam0000000183146fa0 = uRam0000000183147130 ^ uRam0000000183147160;
  uRam0000000183147220 = 0x64f1aa86;
  uVar6 = (~uRam0000000183147468 + 0xbf83fc59) *
          ((uRam00000001831474b8 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001831474b8 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183147420) + (uVar6 & uRam0000000183147420);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147368 =
       func_0x0001867dd5c0((uVar6 | 0x3ba1df7d) + (ulonglong)((uint)uVar6 & 0x3ba1df7d));
  uRam00000001831473c8 = uRam00000001831473a0 * 0x32946a89d0855173;
  uRam00000001831474e0 = uRam00000001831474e0 - 0xbf83fc58 ^ 0x262080ca8d86f952;
  uRam00000001831473a0 = uRam00000001831473c8 ^ uRam00000001831474e0;
  uRam0000000183146f90 = 0x407c03a8;
  uVar6 = (~uRam0000000183147130 + 0xbf83fc59) *
          ((uRam0000000183146ff0 ^ 0x84224824) +
          (ulonglong)((uint)uRam0000000183146ff0 & 0x84224824) * 2);
  uVar6 = (uVar6 | uRam0000000183146f28) + (uVar6 & uRam0000000183146f28);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831472c8 =
       func_0x0001867dd5c0((uVar6 | 0x3ba1b47c) + (ulonglong)((uint)uVar6 & 0x3ba1b47c));
  uRam0000000183146f08 = uRam0000000183147220 ^ uRam00000001831472c8 ^ 0xbf846759;
  uRam00000001831471a0 =
       (uRam00000001831471a0 ^ uRam00000001831472c8) + 0xbf846759 ^ 0x463fda299a260d0b;
  uRam0000000183147130 =
       (uRam0000000183147130 * -0x540445cfcd7381bb ^ uRam00000001831471a0) + uRam00000001831472c8;
  uRam0000000183146f98 = uRam0000000183147130 ^ uRam00000001831471a0;
  uRam0000000183146f88 = 0xbf846759;
  uVar6 = (~uRam0000000183146fa8 + 0x407c03a9) *
          ((uRam0000000183147018 ^ 0x3ba6447c) +
          (ulonglong)((uint)uRam0000000183147018 & 0x3ba6447c) * 2);
  uVar6 = (uVar6 | uRam0000000183147390) + (uVar6 & uRam0000000183147390);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147408 =
       func_0x0001867dd5c0((uVar6 | 0x7bda47d4) + (ulonglong)((uint)uVar6 & 0x7bda47d4));
  uVar6 = uRam0000000183147408 ^ 0x407c03a8;
  uRam00000001831472b8 = uRam00000001831470a8 ^ uVar6 ^ 0x100006b01;
  uRam0000000183146fa8 = (uRam0000000183146fa8 ^ uVar6) + 0x100006b01 ^ 0xdb819d7d3c7d893d;
  uRam00000001831472a0 = (uRam00000001831472a0 * 0x648daf74e2d86fd7 ^ uRam0000000183146fa8) + uVar6;
  uRam00000001831473f0 = uRam00000001831472a0 ^ uRam0000000183146fa8;
  uRam0000000183146f58 = 0x6b01;
  uRam0000000183147198 = func_0x0001867dd5c0(lRam0000000183146f50 + 0xffe5003543ffa5ffU ^ 1);
  uVar6 = uRam0000000183147198 << 0x1e | uRam0000000183147198 >> 0x22;
  uRam0000000183147008 = uRam0000000183147428 ^ uVar6 ^ 0x100006b01;
  uRam0000000183146fc8 = (uRam0000000183146fc8 ^ uVar6) + 0x100006b01 ^ 0xfaeacdff432d5871;
  uRam0000000183146f70 = (uRam0000000183146f70 * 0x62bf50ae2845066d ^ uRam0000000183146fc8) + uVar6;
  uRam0000000183147328 = uRam0000000183146f70 ^ uRam0000000183146fc8;
  uRam0000000183147440 = 0x6b01;
  uVar6 = (uRam00000001831474c0 ^ _UNK_180901c10) + uRam00000001831470c0 + 0x84222325;
  uVar9 = (uRam00000001831470c0 ^ _UNK_180901c18) + uRam00000001831474c0 + 0xd91020f4;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831474c0 ^ _UNK_180901c10;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831470c0 ^ _UNK_180901c18;
  uRam00000001831470b0 =
       func_0x0001867dd5c0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831474c0 + 0xd91020f4) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831470c0 + 0x84222325));
  uRam0000000183146f60 =
       (uRam0000000183146f60 ^ uRam00000001831470b0 & 0xfffffffffffffff0) - 0xd91020f4 ^
       0x82fbefe5d30d2e01;
  uRam00000001831473b0 =
       (uRam00000001831473b0 * 0xe06913e24122fb5 ^ uRam0000000183146f60) +
       (uRam00000001831470b0 & 0xfffffffffffffff0);
  uRam0000000183147278 = uRam00000001831473b0 ^ uRam0000000183146f60;
  uRam00000001831471a8 = 0x26efdf0c;
  uRam0000000183146fa0 = func_0x0001867dd5c0(lRam0000000183147360 + 0xffd8002b4fffcdffU ^ 0x53);
  uVar6 = uRam0000000183146fa0 ^ 0x6b01;
  uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar6) <<
          0x27 | uRam0000000183146fa0 >> 0x19;
  uRam0000000183147440 = uRam00000001831474d8 ^ uVar6 ^ 0xd9108bf5;
  uRam0000000183147200 = (uRam0000000183147200 ^ uVar6) + 0xd9108bf5 ^ 0x1c9a9aa2f0a6946;
  uRam0000000183147210 =
       (uRam00000001831470a0 * -0x5e1395bf037a557f ^ uRam0000000183147200) + uVar6 ^
       uRam0000000183147200;
  uRam00000001831470a0 = 0xd9108bf5;
  uRam0000000183146fd0 = func_0x0001867dd5c0(uRam0000000183147468 + 0xffa8ffdab400baff ^ 0x89);
  uVar6 = (uRam0000000183146fd0 ^ 0xffffdffd) & 0xffffffffffffff;
  uRam0000000183147220 = uRam0000000183147260 ^ uVar6 ^ 0x100006b01;
  uRam00000001831472a8 = (uRam00000001831472a8 ^ uVar6) + 0x100006b01 ^ 0xd6652b7d8cb22df0;
  uRam00000001831472a0 = (uRam00000001831472a0 * 0x354fc49c888aa57f ^ uRam00000001831472a8) + uVar6;
  uRam00000001831472a8 = uRam00000001831472a0 ^ uRam00000001831472a8;
  uRam00000001831472f8 = 0x6b01;
  uVar6 = (~uRam0000000183146f40 + 0x64f1aa87) *
          ((uRam00000001831470e8 ^ 0x577ddcef) +
          (ulonglong)((uint)uRam00000001831470e8 & 0x577ddcef) * 2);
  uVar6 = (uVar6 | uRam0000000183147298) + (uVar6 & uRam0000000183147298);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147248 =
       func_0x0001867dd5c0((uVar6 | 0x338c7669) + (ulonglong)((uint)uVar6 & 0x338c7669));
  uRam00000001831473c8 =
       (uRam00000001831473c8 ^ uRam0000000183147248) + 0xb7ae554c ^ 0x3244334bc06972af;
  uRam0000000183146f60 =
       (uRam0000000183146f60 * -0x433c5cbbeb32f02b ^ uRam00000001831473c8) + uRam0000000183147248;
  uRam00000001831472c8 = uRam0000000183146f60 ^ uRam00000001831473c8;
  uRam0000000183147060 = 0xb7ae554c;
  uRam0000000183147088 = func_0x0001867dd5c0(uRam00000001831474b8 + 0x36000cd90073ff ^ 0x53);
  uVar6 = (uRam0000000183147088 ^ 0xf7ffffce) & 0x7fffffffff;
  uRam0000000183147218 = (uRam0000000183147218 ^ uVar6) + 0x4051aa82 ^ 0xc6b3e8b702f2b282;
  uRam0000000183147318 = (uRam0000000183147318 * 0x15055cda45275f07 ^ uRam0000000183147218) + uVar6;
  uRam00000001831473c0 = uRam0000000183147318 ^ uRam0000000183147218;
  uRam0000000183146f10 = 0x4051aa82;
  uRam0000000183147140 = func_0x0001867dd5c0(uRam0000000183147090 + 0x22ff841affddff ^ 0x2e);
  uRam0000000183147440 = uRam0000000183147140 * 0x35fe12f9e1241acf ^ 0x3851aa50;
  uRam0000000183147448 = uRam0000000183147448 ^ uRam0000000183147440 ^ 0x75e353bd3110c305;
  uRam00000001831472d0 =
       (uRam00000001831472d0 * 0x75bbc3b8a2a78617 ^ uRam0000000183147448) + uRam0000000183147440;
  uRam0000000183147250 = uRam00000001831472d0 ^ uRam0000000183147448;
  uRam0000000183147478 = 0;
  uVar6 = ((uRam00000001831470c0 ^ 0x84224824) +
          (ulonglong)((uint)uRam00000001831470c0 & 0x84224824) * 2) * -uRam0000000183147100;
  uVar6 = (uVar6 | uRam0000000183147430) + (uVar6 & uRam0000000183147430);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183146f00 =
       func_0x0001867dd5c0((uVar6 | 0x84224824) + (ulonglong)((uint)uVar6 & 0x84224824));
  uVar6 = (uRam0000000183146f00 & 0xffffffffc0000000) + 0x6b01;
  uRam00000001831474c8 = uRam0000000183147468 ^ uVar6 ^ 0x6b01;
  uRam0000000183147118 = (uVar6 ^ uRam0000000183147118) + 0x6b01 ^ 0xa7189eb6c1c8b3e0;
  uRam0000000183147170 =
       (uRam0000000183146f00 & 0xffffffffc0000000) +
       (uRam0000000183147170 * 0xaeedc8290aa24fd ^ uRam0000000183147118) + 0x6b01;
  uRam0000000183146fd0 = uRam0000000183147118 ^ uRam0000000183147170;
  uRam00000001831474f8 = 0x6b01;
  uRam0000000183147318 = func_0x0001867dd5c0(uRam0000000183146f90 ^ 0xffdcff680fff81a0);
  uVar6 = uRam0000000183147318 - (uRam0000000183147318 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam0000000183147318;
  uRam00000001831470a8 = (uRam00000001831470a8 ^ uVar6) + 0x2ca00035 ^ 0xf99d15e2662b26d6;
  uRam0000000183147040 = (uRam0000000183147040 * -0x79bc1a8f5265961b ^ uRam00000001831470a8) + uVar6
  ;
  uRam00000001831473f0 = uRam0000000183147040 ^ uRam00000001831470a8;
  uRam0000000183147000 = 0x2ca00035;
  uVar6 = (uRam00000001831474b8 ^ 0x84224824) + uRam0000000183146f88 + 0x84224824;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831474b8 ^ 0x84224824;
  uVar9 = ((uRam0000000183146f88 + uRam00000001831474b8) * 0x2000 |
          uRam0000000183146f88 + uRam00000001831474b8 >> 0x33) ^ uRam0000000183146f88;
  lRam0000000183147038 =
       func_0x0001867dd5c0((uVar9 << 0x1d | uVar9 >> 0x23) - uRam00000001831474b8 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183146f88 + 0x84224824));
  uVar6 = lRam0000000183147038 * 0x7c501542e060e41f;
  uRam00000001831474e0 = uRam0000000183146ff0 ^ uVar6 ^ 0x6b01;
  uRam0000000183146f58 = (uRam0000000183146f58 ^ uVar6) + 0x6b01 ^ 0x2f4ead25c7f5af16;
  uRam00000001831472d0 = (uRam00000001831472d0 * -0x18e4432575855063 ^ uRam0000000183146f58) + uVar6
  ;
  uRam0000000183147150 = uRam00000001831472d0 ^ uRam0000000183146f58;
  uRam0000000183146f18 = 0x6b01;
  uVar6 = ((uRam0000000183147120 ^ 0x84224824) +
          (ulonglong)((uint)uRam0000000183147120 & 0x84224824) * 2) * -lRam0000000183147458;
  uVar6 = (uVar6 | uRam00000001831474d8) + (uVar6 & uRam00000001831474d8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam0000000183147228 =
       func_0x0001867dd5c0((uVar6 | 0x84224824) + (ulonglong)((uint)uVar6 & 0x84224824));
  uVar6 = lRam0000000183147228 * -0x5d9af6bfc662463d ^ 0x6b01;
  uRam0000000183147480 = uRam00000001831470a0 ^ uVar6 ^ 0x6b01;
  uRam00000001831473c0 = (uRam00000001831473c0 ^ uVar6) + 0x6b01 ^ 0x4f5f165b653e8f64;
  uRam0000000183146fd8 = (uRam0000000183146fd8 * 0x19c61716849e4c43 ^ uRam00000001831473c0) + uVar6;
  uRam0000000183147050 = uRam0000000183146fd8 ^ uRam00000001831473c0;
  uRam00000001831473f0 = 0x6b01;
  uVar6 = (~uRam00000001831470a0 + 0x6b02) *
          ((uVar3 ^ 0x84222325 ^ uRam0000000183147348) +
          (ulonglong)((uint)uRam0000000183147348 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | uRam00000001831473c8) + (uVar6 & uRam00000001831473c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183147300 =
       func_0x0001867dd5c0((uVar3 ^ 0x84224824 | uVar6) +
                           (ulonglong)((uint)(uVar3 ^ 0x84224824) & (uint)uVar6));
  uVar6 = uVar3 & (ulonglong)((uint)uRam0000000183147300 ^ ((uint)uVar5 | 0x6b01)) *
                  (ulonglong)_UNK_180901c20;
  lVar4 = uVar3 - ((uint)uVar5 & 0x6b01) * 2;
  uRam0000000183147138 = (uRam0000000183147138 ^ uVar6) + lVar4 + 0x6b01 ^ 0x36a5779916c1e66f;
  uRam0000000183147090 = (uRam0000000183147090 * 0x3ee27ab01b51069f ^ uRam0000000183147138) + uVar6;
  uRam0000000183147368 = uRam0000000183147090 ^ uRam0000000183147138;
  uRam0000000183146ff0 = lVar4 + 0x6b01U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867d90fa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180900228 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/nX; cAy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 1867dd650, runtime 6fffee3ed650) =====

void FUN_1867dd650(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001867dd68c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180901c70 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/nX; cAz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1867de540, runtime 6fffee3ee540) =====

void FUN_1867de540(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867de5bd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809021b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



