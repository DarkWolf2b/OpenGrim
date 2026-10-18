// ===== STITCHED CORPUS: sixtwo.nX =====
// handlers: 12  continuation blocks: 131  unresolved table targets: 0
// tables not in tables.json: ['0x145388', '0x170c0', '0x5493b8', '0x8fa980', '0x8fb048', '0x8fb058', '0x8fb068', '0x8fb078', '0x8fb088', '0x8fb098', '0x8fb0a8', '0x8fb718', '0x8fb748', '0x8fba58', '0x8fba68', '0x8fba78', '0x8fba88', '0x8fba98', '0x901bb0', '0x904f10']

// ===== Lsixtwo/nX; _7121319a0950db9a8912791192064035 ()V (handler @ image 186727f30, runtime 6fffee337f30) =====

void FUN_186727f30(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8)
      /* POOL[0x1e5d9,0x4b8]: nteger; | cAi | cAd | cAq | hOime | DeoND | sixtwo/nX | hBcIr | cAp | cAn | java/lang/UnsupportedOperationException | IuVvI | cAv | (Ljava/lang/UnsupportedOperationException;)Ljava/lang/UnsupportedOperationException; | YgGnF | ePKsc | cAs | lCtmb | cAk | cAm | ktJNW | dmm | ()Lnet/minecraft/class_1044; | UAUwi | ePbqd | cAu | (Lsixtwo/lC;FFFFF)V | NKmtF | MOHEo | cAx | CGTeE | cAw | lLAxM | OLPKB | cAA | dDMRE | sixtwo/nY | yuJfK | cAN | mhgMR | cAO | cBy | cAI | cAH | cAF | qRzfM | cAG | hwpdj | sixtwo/nY$vb | (Lsixtwo/nY;)V | WYwKn | DPRqk | NJlxm | cBw | cpA | zwMvo | cAQ | cAP | sixtwo/nZ  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8)
      /* POOL[0x1e5d9,0x4b8]: nteger; | cAi | cAd | cAq | hOime | DeoND | sixtwo/nX | hBcIr | cAp | cAn | java/lang/UnsupportedOperationException | IuVvI | cAv | (Ljava/lang/UnsupportedOperationException;)Ljava/lang/UnsupportedOperationException; | YgGnF | ePKsc | cAs | lCtmb | cAk | cAm | ktJNW | dmm | ()Lnet/minecraft/class_1044; | UAUwi | ePbqd | cAu | (Lsixtwo/lC;FFFFF)V | NKmtF | MOHEo | cAx | CGTeE | cAw | lLAxM | OLPKB | cAA | dDMRE | sixtwo/nY | yuJfK | cAN | mhgMR | cAO | cBy | cAI | cAH | cAF | qRzfM | cAG | hwpdj | sixtwo/nY$vb | (Lsixtwo/nY;)V | WYwKn | DPRqk | NJlxm | cBw | cpA | zwMvo | cAQ | cAP | sixtwo/nZ  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8)
      /* POOL[0x1e5d9,0x4b8]: nteger; | cAi | cAd | cAq | hOime | DeoND | sixtwo/nX | hBcIr | cAp | cAn | java/lang/UnsupportedOperationException | IuVvI | cAv | (Ljava/lang/UnsupportedOperationException;)Ljava/lang/UnsupportedOperationException; | YgGnF | ePKsc | cAs | lCtmb | cAk | cAm | ktJNW | dmm | ()Lnet/minecraft/class_1044; | UAUwi | ePbqd | cAu | (Lsixtwo/lC;FFFFF)V | NKmtF | MOHEo | cAx | CGTeE | cAw | lLAxM | OLPKB | cAA | dDMRE | sixtwo/nY | yuJfK | cAN | mhgMR | cAO | cBy | cAI | cAH | cAF | qRzfM | cAG | hwpdj | sixtwo/nY$vb | (Lsixtwo/nY;)V | WYwKn | DPRqk | NJlxm | cBw | cpA | zwMvo | cAQ | cAP | sixtwo/nZ  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8)
      /* POOL[0x1e5d9,0x4b8]: nteger; | cAi | cAd | cAq | hOime | DeoND | sixtwo/nX | hBcIr | cAp | cAn | java/lang/UnsupportedOperationException | IuVvI | cAv | (Ljava/lang/UnsupportedOperationException;)Ljava/lang/UnsupportedOperationException; | YgGnF | ePKsc | cAs | lCtmb | cAk | cAm | ktJNW | dmm | ()Lnet/minecraft/class_1044; | UAUwi | ePbqd | cAu | (Lsixtwo/lC;FFFFF)V | NKmtF | MOHEo | cAx | CGTeE | cAw | lLAxM | OLPKB | cAA | dDMRE | sixtwo/nY | yuJfK | cAN | mhgMR | cAO | cBy | cAI | cAH | cAF | qRzfM | cAG | hwpdj | sixtwo/nY$vb | (Lsixtwo/nY;)V | WYwKn | DPRqk | NJlxm | cBw | cpA | zwMvo | cAQ | cAP | sixtwo/nZ  */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1e5d9,0x4b8)
      /* POOL[0x1e5d9,0x4b8]: nteger; | cAi | cAd | cAq | hOime | DeoND | sixtwo/nX | hBcIr | cAp | cAn | java/lang/UnsupportedOperationException | IuVvI | cAv | (Ljava/lang/UnsupportedOperationException;)Ljava/lang/UnsupportedOperationException; | YgGnF | ePKsc | cAs | lCtmb | cAk | cAm | ktJNW | dmm | ()Lnet/minecraft/class_1044; | UAUwi | ePbqd | cAu | (Lsixtwo/lC;FFFFF)V | NKmtF | MOHEo | cAx | CGTeE | cAw | lLAxM | OLPKB | cAA | dDMRE | sixtwo/nY | yuJfK | cAN | mhgMR | cAO | cBy | cAI | cAH | cAF | qRzfM | cAG | hwpdj | sixtwo/nY$vb | (Lsixtwo/nY;)V | WYwKn | DPRqk | NJlxm | cBw | cpA | zwMvo | cAQ | cAP | sixtwo/nZ  */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001867de5bd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1809021b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x671a6dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18671a6dd(void)

{
  FUN_190ddce00();
  (*_DAT_1808de6c8)();
  return;
}


// ----- block @ rva 0x671c604 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18671c604(void)

{
  FUN_190de3220();
  (*_DAT_1808df978)();
  return;
}


// ----- block @ rva 0x671ca1c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18671ca1c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1808df198)();
  return;
}


// ----- block @ rva 0x671cda7 -----

void FUN_18671cda7(void)

{
  return;
}


// ----- block @ rva 0x671d555 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18671d555(void)

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


// ----- block @ rva 0x671db7a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18671db7a(void)

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


// ----- block @ rva 0x671dd49 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18671dd49(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1808df558)();
  return;
}


// ----- block @ rva 0x671dfde -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18671dfde(float param_1)

{
  float unaff_XMM6_Da;
  
  switch(unaff_XMM6_Da < param_1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x671e00b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18671e00b(void)

{
  undefined4 in_EAX;
  
  (*_DAT_1808def28)(in_EAX);
  return;
}


// ----- block @ rva 0x671f306 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18671f306(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticVoidMethodA /*0x478*/))();
  (*_DAT_1808dfcb8)();
  return;
}


// ----- block @ rva 0x6720585 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186720585(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_1808dfce8)();
  return;
}


// ----- block @ rva 0x67207b1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867207b1(void)

{
  FUN_190ddce00();
  (*_DAT_1808e10d0)();
  return;
}


// ----- block @ rva 0x6723383 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186723383(void)

{
  FUN_190de3220();
  (*_DAT_1808e1010)();
  return;
}


// ----- block @ rva 0x67237d8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867237d8(void)

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


// ----- block @ rva 0x6723831 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186723831(void)

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


// ----- block @ rva 0x6723c47 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186723c47(void)

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


// ----- block @ rva 0x6723e06 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186723e06(void)

{
  (*_DAT_1808e1330)();
  return;
}


// ----- block @ rva 0x67241ba -----

void FUN_1867241ba(void)

{
  return;
}


// ----- block @ rva 0x672425f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18672425f(void)

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


// ----- block @ rva 0x6724d7c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186724d7c(void)

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


// ----- block @ rva 0x672508c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18672508c(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x1e5f1,0x4b9);
  (*_DAT_1808e0eb0)();
  return;
}


// ----- block @ rva 0x67250f4 -----

void FUN_1867250f4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x67252ac -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867252ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1808e20e8)();
  return;
}


// ----- block @ rva 0x67258ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867258ba(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1808e2948)();
  return;
}


// ----- block @ rva 0x6725fec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186725fec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1808e2138)();
  return;
}


// ----- block @ rva 0x672683c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18672683c(void)

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


// ----- block @ rva 0x6726b06 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186726b06(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1808e2368)();
  return;
}


// ----- block @ rva 0x6726cfc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186726cfc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_1808e2568)();
  return;
}


// ----- block @ rva 0x672714e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18672714e(void)

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


// ----- block @ rva 0x6727246 -----

void FUN_186727246(void)

{
  return;
}


// ----- block @ rva 0x6727917 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186727917(void)

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


// ----- block @ rva 0x6727b41 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186727b41(void)

{
  (*_DAT_1808e2a48)();
  return;
}


// ----- block @ rva 0x6727ce4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186727ce4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1808e2a88)();
  return;
}


// ----- block @ rva 0x6727d84 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186727d84(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1808e2768)();
  return;
}


// ----- block @ rva 0x6727dea -----

void FUN_186727dea(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x672803f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186728095 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18672803f(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x673de42 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18673de42(void)

{
  longlong unaff_R12;
  
  switch(unaff_R12 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x673deed -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18673deed(void)

{
  longlong unaff_R12;
  
  switch(unaff_R12 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x673df32 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18673df32(void)

{
  longlong *unaff_RSI;
  undefined8 in_stack_00000050;
  int in_stack_000000c8;
  int in_stack_00000100;
  undefined8 uStack0000000000000150;
  
  uStack0000000000000150 = in_stack_00000050;
  (**(code **)(unaff_RSI + JNI->SetLongArrayRegion /*0x6a0*/))();
  switch(in_stack_000000c8 < in_stack_00000100) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67448bb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867448bb(void)

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


// ----- block @ rva 0x6744cfa -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186744cfa(void)

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


// ----- block @ rva 0x6746393 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_186746393(void)

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


// ----- block @ rva 0x674f540 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18674f540(void)

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


// ----- block @ rva 0x674f755 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18674f755(void)

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


// ----- block @ rva 0x6751e02 -----

void FUN_186751e02(void)

{
  return;
}


// ----- block @ rva 0x6751e6e -----

void FUN_186751e6e(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x6752176 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001867521ec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186752176(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x675340e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018675342c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18675340e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x677815a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18678e716(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBP + 0x60) = unaff_RDI;
  plVar1 = *(longlong **)(unaff_RBP + 0xe0);
  (**(code **)(plVar1 + JNI->ExceptionClear /*0x88*/))(plVar1);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x1e5d9,0x4b8);
  *(undefined8 *)(unaff_RBP + 0xd8) = uVar3;
  cVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0xe0) + 0x720))(*(longlong **)(unaff_RBP + 0xe0))
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


// ----- block @ rva 0x677bc28 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18677bc28(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  
  (**(code **)(**(longlong **)(unaff_RBP + 0xe0) + 0x570))();
  plVar1 = *(longlong **)(unaff_RBP + 0xe0);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x2e9,0x12);
  *(undefined8 *)(unaff_RBP + 0xc0) = uVar3;
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


// ----- block @ rva 0x677d1de -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018677d20d */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18677d1de(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0xd8) = in_RAX;
  (**(code **)(**(longlong **)(unaff_RBP + 0xe0) + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x677dfbd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018677e01c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18677dfbd(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0xe0);
  uVar2 = (**(code **)(plVar1 + JNI->ExceptionOccurred /*0x78*/))(plVar1);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x1e5f1,0x4b9);
  *(undefined8 *)(unaff_RBP + 0xd8) = uVar3;
  (**(code **)(**(longlong **)(unaff_RBP + 0xe0) + 0x100))
            (*(longlong **)(unaff_RBP + 0xe0),uVar2,uVar3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x6784aa6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000186784ad5 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_186784aa6(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0xd8) = in_RAX;
  (**(code **)(**(longlong **)(unaff_RBP + 0xe0) + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x678911d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18678911d(void)

{
  char cVar1;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)(*(undefined8 *)(unaff_RBP + 0xe0));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x6794922 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_186794922(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar3 = (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  *(undefined8 *)(unaff_RBP + 0xc0) = uVar3;
  plVar1 = *(longlong **)(unaff_RBP + 0xe0);
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))(plVar1);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x2fa,0x13);
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


// ----- block @ rva 0x679527b -----

void FUN_18679527b(void)

{
  return;
}


// ----- block @ rva 0x67ac0a3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001867ac0da */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1867ac0a3(void)

{
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x67ac0dd -----

undefined8 FUN_1867ac0dd(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x67ac0f8 -----

void FUN_1867ac0f8(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R12;
  
  uVar1 = (**(code **)(unaff_R12 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x50) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x58) = *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001867ac125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1808fa980 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x67ac330 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867ac330(void)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong lVar2;
  longlong in_R9;
  ulonglong unaff_R12;
  uint unaff_R13D;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  *(char *)(unaff_RBP + 0x30) =
       (char)unaff_R13D + (char)(uint)((ulonglong)unaff_R13D * in_R9 >> 0x23) * -10;
  uVar5 = (_DAT_183145e98 ^ _DAT_1808fb710) + _DAT_183146088 + 0x842223ab;
  uVar7 = (_DAT_183146088 ^ _UNK_1808fb718) + _DAT_183145e98 + 0xb8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183145e98 ^ _DAT_1808fb710;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183146088 ^ _UNK_1808fb718;
  _DAT_183145d78 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183145e98 + 0xb8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183146088 + 0x842223ab));
  _DAT_183145d28 =
       (_DAT_183145d28 ^ _DAT_183145d78 * 0x4524c03b17d31fd7) + 0xbe ^ 0x11b6bc4b25217693;
  _DAT_183146090 =
       (_DAT_183146090 * 0xbc2a111e33d41d1 ^ _DAT_183145d28) + _DAT_183145d78 * 0x4524c03b17d31fd7;
  _DAT_183145f28 = _DAT_183146090 ^ _DAT_183145d28;
  _DAT_183145e68 = 0xbe;
  uVar5 = (_DAT_183145dc8 ^ _DAT_1805493b0) + _DAT_183146108 + unaff_R12;
  uVar7 = (_DAT_183146108 ^ _UNK_1805493b8) + _DAT_183145dc8 + 0x4c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183145dc8 ^ _DAT_1805493b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183146108 ^ _UNK_1805493b8;
  _DAT_183146180 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183145dc8 + 0x4c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183146108 + unaff_R12));
  uVar5 = (_DAT_183146180 & 0xffffffff) * (ulonglong)unaff_XMM8_Da +
          ((_DAT_183146180 & 0xffffffff) * (ulonglong)_DAT_1808fb730 +
           (_DAT_183146180 >> 0x20) * (ulonglong)unaff_XMM8_Da << 0x20) & 0x7fffffffffffffff;
  _DAT_183146358 = (_DAT_183146358 ^ uVar5) - 0x4c ^ 0x4320e77c0e2577c1;
  _DAT_1831460b8 = (_DAT_1831460b8 * 0x1251f424469704d7 ^ _DAT_183146358) + uVar5;
  _DAT_1831464a8 = _DAT_1831460b8 ^ _DAT_183146358;
  _DAT_183145f18 = 0xb4;
  uVar5 = (~_DAT_1831461f8 + 0xb5) *
          ((_DAT_183146150 ^ 0x84222359) + (ulonglong)((uint)_DAT_183146150 & 0x84222359) * 2);
  uVar5 = (uVar5 | _DAT_183146110) + (uVar5 & _DAT_183146110);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831461b0 = func_0x0001867d6a60((uVar5 | 0x842223ed) + (ulonglong)((uint)uVar5 & 0x842223ed))
  ;
  uVar5 = _DAT_1831461b0 & 0x7fffffffffffffff;
  _DAT_1831462b8 = _DAT_183146088 ^ uVar5 ^ 0x130;
  _DAT_183146438 = (_DAT_183146438 ^ uVar5) + 0x130 ^ 0x6a8239e720ff62e;
  _DAT_1831464d8 = (_DAT_1831464d8 * -0x753142f3e2fa3f89 ^ _DAT_183146438) + uVar5;
  _DAT_183146220 = _DAT_1831464d8 ^ _DAT_183146438;
  _DAT_183145fc8 = 0x30;
  _DAT_183145e30 = func_0x0001867d6a60(_DAT_183145d88 ^ 0x1cff844d0021e5);
  _DAT_1831460c8 = (_DAT_1831460c8 ^ _DAT_183145e30) - 0x70 ^ 0xa9127451cf3c0d92;
  _DAT_183145e58 = (_DAT_183145e58 * -0x46b1b891be388399 ^ _DAT_1831460c8) + _DAT_183145e30;
  _DAT_183145f30 = _DAT_183145e58 ^ _DAT_1831460c8;
  _DAT_1831464a8 = 0x90;
  uVar5 = (~_DAT_183145db8 + 0x71) *
          ((_DAT_183145d80 ^ 0x84222315) + (ulonglong)((uint)_DAT_183145d80 & 0x84222315) * 2);
  uVar5 = (uVar5 | _DAT_183145e28) + (uVar5 & _DAT_183145e28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183145d38 = func_0x0001867d6a60((uVar5 | 0x84222365) + (ulonglong)((uint)uVar5 & 0x84222365))
  ;
  uVar5 = _DAT_183145d38 & 0x7fffffffffffffff;
  _DAT_183146428 = _DAT_183146098 ^ uVar5 ^ 0xa0;
  _DAT_183146390 = (_DAT_183146390 ^ uVar5) + 0xa0 ^ 0x698e427cc2769f6e;
  _DAT_1831460a8 = (_DAT_1831460a8 * 0x446d218951377dd ^ _DAT_183146390) + uVar5;
  _DAT_183145e40 = _DAT_1831460a8 ^ _DAT_183146390;
  _DAT_183145fc8 = 0xa0;
  uVar5 = (~_DAT_1831463b0 + 0xd5) *
          ((_DAT_183145e28 ^ unaff_R12) + (ulonglong)((uint)_DAT_183145e28 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_183145f28) + (uVar5 & _DAT_183145f28);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831462f0 = func_0x0001867d6a60((uVar5 | 0x842223f1) + (ulonglong)((uint)uVar5 & 0x842223f1))
  ;
  uVar5 = _DAT_1831462f0 * -0xf65ec23da3f706b ^ 0xd4;
  _DAT_183146170 = (_DAT_183146170 ^ uVar5) - 0xd4 ^ 0xb013dd29c5ea18f8;
  _DAT_183145f38 = (_DAT_183145f38 * -0x1ebba14c820f181f ^ _DAT_183146170) + uVar5;
  _DAT_183146240 = _DAT_183145f38 ^ _DAT_183146170;
  _DAT_183145f78 = 0x2c;
  uVar5 = (_DAT_1831464f0 ^ _DAT_1808fb740) + _DAT_183145f70 + 0x84222315;
  uVar7 = (_DAT_183145f70 ^ _UNK_1808fb748) + _DAT_1831464f0 + 0xd4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1831464f0 ^ _DAT_1808fb740;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183145f70 ^ _UNK_1808fb748;
  _DAT_1831463c0 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831464f0 + 0xd4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183145f70 + 0x84222315));
  uVar5 = _DAT_1831463c0 ^ 0x30;
  _DAT_1831460a8 = _DAT_183146398 ^ uVar5 ^ 0x104;
  _DAT_183146378 = (_DAT_183146378 ^ uVar5) + 0x104 ^ 0x73201633391dc540;
  _DAT_183145d68 = (_DAT_183145d68 * -0x3e23247f3ec86b15 ^ _DAT_183146378) + uVar5;
  _DAT_183145fb8 = _DAT_183145d68 ^ _DAT_183146378;
  _DAT_183145fd0 = 4;
  uVar5 = (~_DAT_183145f18 + 0x79) *
          ((_DAT_183146448 ^ unaff_RSI) + (ulonglong)((uint)_DAT_183146448 & 0x8422239b) * 2);
  uVar5 = (uVar5 | _DAT_183146490) + (uVar5 & _DAT_183146490);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183145de0 = func_0x0001867d6a60((uVar5 | 0x842223e3) + (ulonglong)((uint)uVar5 & 0x842223e3))
  ;
  uVar5 = _DAT_183145de0 ^ 0x86;
  _DAT_183145ed0 = _DAT_183146388 ^ uVar5 ^ 0x136;
  _DAT_1831460e0 = (_DAT_1831460e0 ^ uVar5) + 0x136 ^ 0x29f81cb7207aef26;
  _DAT_183146220 = (_DAT_183146220 * 0x3d7efc057b6d51c3 ^ _DAT_1831460e0) + uVar5;
  _DAT_183146278 = _DAT_183146220 ^ _DAT_1831460e0;
  _DAT_183145dc0 = 0x36;
  _DAT_183145df0 = func_0x0001867d6a60(_DAT_183145f10 ^ 0xffdeff832300219b);
  _DAT_183146238 = (_DAT_183146238 ^ _DAT_183145df0 ^ 0xbe) + 0x38 ^ 0x403394216f1fbbc8;
  _DAT_183145d60 = (_DAT_183145d60 * -0x34fb4c8dfcb19177 ^ _DAT_183146238) + (_DAT_183145df0 ^ 0xbe)
  ;
  _DAT_183146450 = _DAT_183145d60 ^ _DAT_183146238;
  _DAT_183146398 = 0x38;
  uVar5 = (~_DAT_183146008 + 0x71) *
          ((_DAT_183146300 ^ 0x842223e3) + (ulonglong)((uint)_DAT_183146300 & 0x842223e3) * 2);
  uVar5 = (uVar5 | _DAT_183146260) + (uVar5 & _DAT_183146260);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183145f78 = func_0x0001867d6a60((uVar5 | 0x84222393) + (ulonglong)((uint)uVar5 & 0x84222393))
  ;
  uVar5 = _DAT_183145f78 ^ 0x56d0;
  _DAT_183146278 = _DAT_183145ef0 ^ uVar5 ^ 0x136;
  _DAT_183145ed0 = (_DAT_183145ed0 ^ uVar5) + 0x136 ^ 0x70018a353c6af59;
  _DAT_183146050 = (_DAT_183146050 * -0x57be61c028d86fe9 ^ _DAT_183145ed0) + uVar5;
  _DAT_183146440 = _DAT_183146050 ^ _DAT_183145ed0;
  _DAT_1831464b0 = 0x36;
  _DAT_183146148 = func_0x0001867d6a60(_DAT_183146468 ^ 0xffe2ff7be3001dcd);
  _DAT_183145dd0 = _DAT_183146148 ^ 0x36;
  _DAT_183145e20 = _DAT_183145e20 ^ _DAT_183145dd0 ^ 0x13c92567c84912e0;
  _DAT_183146260 = (_DAT_183146260 * 0x3ea9ad7f215889e3 ^ _DAT_183145e20) + _DAT_183145dd0;
  _DAT_183146458 = _DAT_183146260 ^ _DAT_183145e20;
  _DAT_1831464b0 = _DAT_183145e70;
  _DAT_183146460 = 0;
  _DAT_183145f08 = func_0x0001867d6a60(_DAT_183146258 + 0x20ff8415001dffU ^ 0x11);
  _DAT_183146060 = _DAT_183146110 ^ _DAT_183145f08 ^ 0x30;
  _DAT_1831461c0 = (_DAT_1831461c0 ^ _DAT_183145f08) + 0x30 ^ 0x634550dc93cac514;
  _DAT_183146470 = (_DAT_183146470 * 0x5765238e5cc2dd05 ^ _DAT_1831461c0) + _DAT_183145f08;
  _DAT_183145ec8 = _DAT_183146470 ^ _DAT_1831461c0;
  _DAT_183145f38 = 0x30;
  uVar5 = (~_DAT_183146488 + 0x100) *
          ((_DAT_183146138 ^ unaff_RSI) + (ulonglong)((uint)_DAT_183146138 & 0x8422239b) * 2);
  uVar5 = (uVar5 | _DAT_1831460b0) + (uVar5 & _DAT_1831460b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1831463d0 = func_0x0001867d6a60((uVar5 | 0x84222364) + (ulonglong)((uint)uVar5 & 0x84222364))
  ;
  _DAT_183146120 =
       (_DAT_183146120 ^ _DAT_1831463d0 & 0x7fffffffffffffff) + 0x41 ^ 0x15006933dec6976b;
  _DAT_183145e88 =
       (_DAT_183145e88 * -0x6b315f7bfd643bc3 ^ _DAT_183146120) +
       (_DAT_1831463d0 & 0x7fffffffffffffff);
  _DAT_1831460c8 = _DAT_183145e88 ^ _DAT_183146120;
  _DAT_183146400 = 0x41;
  _DAT_183146430 = func_0x0001867d6a60(_DAT_183146358 ^ 0xffdeff84c60021a1);
  uVar5 = _DAT_183146430 - (_DAT_183146430 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          _DAT_183146430;
  _DAT_183146018 = _DAT_183146018 ^ uVar5 ^ 0x3972d294c76e2db8;
  _DAT_183145e18 = (_DAT_183145e18 * 0x444f5421be784c73 ^ _DAT_183146018) + uVar5;
  _DAT_183146220 = _DAT_183145e18 ^ _DAT_183146018;
  _DAT_183145d68 = 0;
  _DAT_1831462f0 = func_0x0001867d6a60(_DAT_1831463d0 + 0xffe2ff84130021ff ^ 0x65);
  uVar5 = (_DAT_1831462f0 ^ 0x30) >> 1 | _DAT_1831462f0 << 0x3f;
  _DAT_1831464a8 = _DAT_183145ee8 ^ uVar5 ^ 0x30;
  _DAT_183145e88 = (_DAT_183145e88 ^ uVar5) + 0x30 ^ 0xcd086d15cf2105b6;
  _DAT_183145d28 = (_DAT_183145d28 * -0x10de5be2d9c95f7f ^ _DAT_183145e88) + uVar5;
  _DAT_183146040 = _DAT_183145d28 ^ _DAT_183145e88;
  _DAT_183146498 = 0x30;
  _DAT_183145e50 = func_0x0001867d6a60(_DAT_183146438 + 0xffdd00841b001dff ^ 5);
  _DAT_183146080 = _DAT_183146080 ^ _DAT_183145e50 ^ 0x563c11a55abac648;
  _DAT_183145f80 = (_DAT_183145f80 * -0x2cd465e3395bb4bb ^ _DAT_183146080) + _DAT_183145e50;
  _DAT_183145ec0 = _DAT_183145f80 ^ _DAT_183146080;
  _DAT_183145d20 = 0;
  uVar5 = ((_DAT_183146040 ^ 0x84222315) + (ulonglong)((uint)_DAT_183146040 & 0x84222315) * 2) *
          -_DAT_183145e58;
  uVar5 = (uVar5 | _DAT_183145de8) + (uVar5 & _DAT_183145de8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183145d08 = func_0x0001867d6a60((uVar5 | 0x84222315) + (ulonglong)((uint)uVar5 & 0x84222315))
  ;
  uVar5 = _DAT_183145d08 & 0x1ffffffffffff;
  _DAT_183146318 = _DAT_183146360 ^ uVar5 ^ 0x30;
  _DAT_183145fc0 = (_DAT_183145fc0 ^ uVar5) + 0x30 ^ 0xbe5baf23da353190;
  _DAT_183146440 = (_DAT_183146440 * 0x288bf678f751754d ^ _DAT_183145fc0) + uVar5;
  _DAT_183146270 = _DAT_183146440 ^ _DAT_183145fc0;
  _DAT_1831462f8 = 0x30;
  bVar1 = *(byte *)(unaff_RBP + 0x30);
  auVar3._8_8_ = _UNK_180145388;
  auVar3._0_8_ = bVar1 ^ unaff_R12;
  auVar4 = pshufb(auVar3 ^ _DAT_1808fb750,_DAT_1800170c0);
  uVar7 = auVar4._8_8_ + auVar4._0_8_;
  uVar5 = uVar7 + _DAT_1831464f0;
  if (auVar4._4_4_ < 0) {
    uVar5 = _DAT_1831463a8 ^ uVar7;
  }
  _DAT_183145e70 = func_0x0001867d6a60(SUB161(auVar3 ^ _DAT_1808fb750,5) ^ uVar5);
  uVar7 = _DAT_183145e70 << 10 | _DAT_183145e70 >> 0x36;
  uVar5 = (ulonglong)bVar1 | 0x30;
  _DAT_183145d38 = (_DAT_183145d38 ^ uVar7) + uVar5 ^ 0x44db9bc3a0b1e6d;
  _DAT_1831464f8 = (_DAT_1831464f8 * -0x6574e941a86f32a9 ^ _DAT_183145d38) + uVar7;
  _DAT_183146370 = _DAT_1831464f8 ^ _DAT_183145d38;
  uVar7 = in_RAX ^ unaff_R12 ^ _DAT_183146010;
  lVar2 = (in_RAX ^ unaff_R12) + _DAT_183146070;
  uVar6 = uVar7 + lVar2;
  uVar8 = ~_DAT_183146070 + (_DAT_183146010 - 1);
  uVar7 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar7;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ ~_DAT_183146070;
  _DAT_183145e48 = uVar5;
  _DAT_1831460a8 =
       func_0x0001867d6a60((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183146010 - 1) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar2);
  uVar6 = in_RAX ^ _DAT_18001a710;
  uVar7 = (_DAT_1831460a8 << 0x36 | _DAT_1831460a8 >> 10) >> 0xf | (_DAT_1831460a8 >> 10) << 0x31;
  _DAT_1831464e8 =
       ((((in_RAX & 0xffffffff) * (ulonglong)_DAT_1808fb790 +
          (in_RAX >> 0x20) * (ulonglong)unaff_XMM7_Da << 0x20) +
         (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM7_Da +
        ((in_RAX & 0xffffffff) * (ulonglong)_DAT_1808fb770 +
         (in_RAX >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM15_Da) -
       ((uVar6 & 0xffffffff) * (ulonglong)unaff_XMM12_Da +
        ((uVar6 & 0xffffffff) * (ulonglong)unaff_XMM11_Da +
         (uVar6 >> 0x20) * (ulonglong)unaff_XMM12_Da << 0x20) +
       ((in_RAX & 0xffffffff) * (ulonglong)unaff_XMM9_Da +
        (in_RAX >> 0x20) * (ulonglong)unaff_XMM6_Da << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM6_Da +
       ((in_RAX & 0xffffffff) * (ulonglong)unaff_XMM14_Da +
        (in_RAX >> 0x20) * (ulonglong)unaff_XMM13_Da << 0x20) +
       (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM13_Da)) + 0xdc8a35e06653860b;
  _DAT_1831461e8 = _DAT_183146358 ^ uVar7 ^ _DAT_1831464e8;
  _DAT_183145e58 = (_DAT_183145e58 ^ uVar7) + _DAT_1831464e8 ^ 0xc80ae90088f5670f;
  _DAT_183145e70 = (_DAT_183145e70 * 0x418540d790f8e01f ^ _DAT_183145e58) + uVar7;
  _DAT_1831460c0 = _DAT_183145e70 ^ _DAT_183145e58;
  *(char *)(unaff_RBP + -0x50 + _DAT_1831464e8) = (char)uVar5;
  switch(unaff_R13D < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67b0c69 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001867b11d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1867b0c69(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  
  uVar1 = unaff_RBP - 0x3b;
  uVar4 = uVar1 ^ 0x84222325 ^ _DAT_183145d60;
  plVar2 = *(longlong **)(unaff_RBP + 0x28);
  lVar3 = (uVar1 ^ 0x84222325) + _DAT_183146268;
  uVar7 = uVar4 + lVar3;
  uVar8 = (unaff_RDI ^ _DAT_183146268) + _DAT_183145d60 + unaff_RDI;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar4;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ unaff_RDI ^ _DAT_183146268;
  _DAT_1831460d0 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183145d60 + unaff_RDI) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar3);
  *(ulonglong *)(unaff_RBP + 0x30) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x38) = 0;
  uVar5 = (uint)(uVar1 >> 0x20);
  auVar10._8_4_ = (int)uVar1;
  auVar10._0_8_ = uVar1;
  auVar10._12_4_ = uVar5;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = unaff_RDI;
  uVar15 = (uint)(unaff_RDI >> 0x20);
  auVar9._8_4_ = (int)unaff_RDI;
  auVar9._0_8_ = unaff_RDI;
  auVar9._12_4_ = uVar15;
  uVar6 = SUB164(auVar10 & auVar9,0);
  uVar8 = SUB168(auVar10 & auVar9,0);
  uVar16 = SUB164(auVar10 | auVar9,0);
  uVar7 = SUB168(auVar10 | auVar9,0);
  uVar17 = SUB164(auVar10 ^ auVar9,0);
  auVar18._8_4_ = 0xffffffff;
  auVar18._0_8_ = 0xffffffffffffffff;
  auVar18._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar13 ^ auVar18,0);
  auVar14 = *(undefined1 (*) [16])(unaff_RBP + 0x30) ^ auVar18;
  uVar12 = auVar14._0_4_;
  uVar4 = _DAT_1831460d0 >> 1 | _DAT_1831460d0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_1831460d0;
  _DAT_183146260 =
       (((ulonglong)uVar11 * (ulonglong)_DAT_1808fb930 +
         ((ulonglong)_DAT_1808fb9a0 * (ulonglong)uVar11 +
          (SUB168(auVar13 ^ auVar18,0) >> 0x20) * (ulonglong)_DAT_1808fb930 << 0x20) +
        (ulonglong)uVar17 * (ulonglong)_DAT_1808fb980 +
        ((ulonglong)_DAT_1808fb990 * (ulonglong)uVar17 +
         (SUB168(auVar10 ^ auVar9,0) >> 0x20) * (ulonglong)_DAT_1808fb980 << 0x20) +
        (ulonglong)_DAT_1808fb960 * (ulonglong)uVar16 +
        ((ulonglong)_DAT_1808fb970 * (ulonglong)uVar16 + (uVar7 >> 0x20) * (ulonglong)_DAT_1808fb960
        << 0x20) +
        (ulonglong)_DAT_1808fb940 * (ulonglong)uVar6 +
        ((ulonglong)_DAT_1808fb950 * (ulonglong)uVar6 + (uVar8 >> 0x20) * (ulonglong)_DAT_1808fb940
        << 0x20) +
        ((ulonglong)_DAT_1808fb920 * (unaff_RDI & 0xffffffff) +
         (ulonglong)_DAT_1808fb910 * (ulonglong)uVar15 << 0x20) +
        (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1808fb910 +
        ((ulonglong)_DAT_1808fb900 * (uVar1 & 0xffffffff) +
         (ulonglong)_DAT_1808fb8f0 * (ulonglong)uVar5 << 0x20) +
        (uVar1 & 0xffffffff) * (ulonglong)_DAT_1808fb8f0) -
       ((ulonglong)uVar12 * (_DAT_1808fba10 & 0xffffffff) +
        ((ulonglong)_DAT_1808fba40 * (ulonglong)uVar12 +
         (auVar14._0_8_ >> 0x20) * (_DAT_1808fba10 & 0xffffffff) << 0x20) +
        (ulonglong)uVar16 * (ulonglong)_DAT_1808fba30 +
        ((uVar7 >> 0x20) * (ulonglong)_DAT_1808fba30 + (ulonglong)_DAT_1808fba20 * (ulonglong)uVar16
        << 0x20) +
       (ulonglong)uVar6 * (ulonglong)_DAT_1808fba30 +
       ((uVar8 >> 0x20) * (ulonglong)_DAT_1808fba30 + (ulonglong)uVar6 * (ulonglong)_DAT_1808fba20
       << 0x20) +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_1808fb9e0 +
        (ulonglong)uVar5 * (ulonglong)_DAT_1808fb9d0 << 0x20) +
       (uVar1 & 0xffffffff) * (ulonglong)_DAT_1808fb9d0 +
       ((unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1808fba00 +
        (ulonglong)uVar15 * (ulonglong)_DAT_1808fb9f0 << 0x20) +
       (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_1808fb9f0)) + 0x89a0aa3273bedd7a;
  _DAT_183146240 = _DAT_183146260 ^ uVar4;
  _DAT_183146498 = (_DAT_183146498 ^ uVar4) + _DAT_183146260 ^ 0xedf3935deade09ae;
  _DAT_183145d90 = (_DAT_183145d90 * 0x4ba369db91452a35 ^ _DAT_183146498) + uVar4;
  _DAT_183145fb8 = _DAT_183145d90 ^ _DAT_183146498;
  lVar3 = unaff_RBP + -0x30;
  FUN_18414b520(lVar3);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar3 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 8),lVar3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x67b11ea -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867b11ea(void)

{
  byte bVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  ulonglong uVar4;
  
  _DAT_183146148 = func_0x0001867d6a60(_DAT_183145df0 + 0xe257707fc8b6076c ^ 0x4b);
  _DAT_183145ef8 =
       (_DAT_183145ef8 ^ _DAT_183146148 ^ 0x4952cd75bf18c075) + 0xedb0defe043a7a6c ^
       0xab2c94a9f23b5044;
  _DAT_1831464b0 =
       (_DAT_1831464b0 * 0x37808eb3aa2ffe2b ^ _DAT_183145ef8) +
       (_DAT_183146148 ^ 0x4952cd75bf18c075);
  _DAT_1831464a8 = _DAT_1831464b0 ^ _DAT_183145ef8;
  _DAT_183145fe8 = 0xedb0defe043a7a6c;
  uVar3 = (_DAT_1831460d8 ^ _DAT_1808fba50) + _DAT_183146450 + 0x84222325;
  uVar4 = (_DAT_183146450 ^ _UNK_1808fba58) + _DAT_1831460d8 + 0xc78638ec127029a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1831460d8 ^ _DAT_1808fba50;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183146450 ^ _UNK_1808fba58;
  _DAT_183146310 =
       func_0x0001867d6a60((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831460d8 + 0xc78638ec127029a0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183146450 + 0x84222325));
  _DAT_183146180 = (_DAT_183146180 ^ _DAT_183146310) + 0x3879c713ed8fd660 ^ 0x6721012871daa45d;
  _DAT_183146150 = (_DAT_183146150 * 0x1289e52245d4ec6f ^ _DAT_183146180) + _DAT_183146310;
  _DAT_1831464b8 = _DAT_183146150 ^ _DAT_183146180;
  _DAT_183145d58 = 0x3879c713ed8fd660;
  uVar3 = (_DAT_183146010 ^ _DAT_1808fba60) + _DAT_1831461a8 + 0x84222cda;
  uVar4 = (_DAT_1831461a8 ^ _UNK_1808fba68) + _DAT_183146010 + 0xc78638ec127029a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183146010 ^ _DAT_1808fba60;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831461a8 ^ _UNK_1808fba68;
  _DAT_183146400 =
       func_0x0001867d6a60((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183146010 + 0xc78638ec127029a0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831461a8 + 0x84222cda));
  uVar3 = _DAT_183146400 << 0xf | _DAT_183146400 >> 0x31;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar3 = (ulonglong)(~((uint)(_DAT_183146400 >> 0x31) ^ (uint)bVar1 + (uint)bVar1) & 0xfff);
  _DAT_183145fe8 = _DAT_183145df0 ^ uVar3 ^ 0xc78638ec1270399f;
  _DAT_183146358 = (_DAT_183146358 ^ uVar3) + 0xc78638ec1270399f ^ 0x775b80ed7b2fc61c;
  _DAT_183146318 = (_DAT_183146318 * 0x3537e97327e990bd ^ _DAT_183146358) + uVar3;
  _DAT_183145d58 = _DAT_183146318 ^ _DAT_183146358;
  _DAT_183145e60 = 0xc78638ec1270399f;
  _DAT_183145f88 = func_0x0001867d6a60(_DAT_183145e28 ^ 0x5f4ce139a946b57b);
  uVar3 = ~_DAT_183145f88 << 0x29 | ~_DAT_183145f88 >> 0x17;
  _DAT_183146318 = _DAT_183146430 ^ uVar3 ^ 0xfff;
  _DAT_1831464b8 = (_DAT_1831464b8 ^ uVar3) + 0xfff ^ 0x8f69d80b21a3a325;
  _DAT_183146250 = (_DAT_183146250 * -0x6530797bccd7e07f ^ _DAT_1831464b8) + uVar3;
  _DAT_183146438 = _DAT_183146250 ^ _DAT_1831464b8;
  _DAT_183146110 = 0xfff;
  uVar3 = (_DAT_1831462a8 ^ _DAT_1808fba70) + _DAT_1831463f8 + 0x84222325;
  uVar4 = (_DAT_1831463f8 ^ _UNK_1808fba78) + _DAT_1831462a8 + 0x2886daaca1ea8a6e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1831462a8 ^ _DAT_1808fba70;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831463f8 ^ _UNK_1808fba78;
  _DAT_183146278 =
       func_0x0001867d6a60((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1831462a8 + 0x2886daaca1ea8a6e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831463f8 + 0x84222325));
  _DAT_183146320 =
       (_DAT_183146320 ^ _DAT_183146278 * 0x4a02860f4c01fb15) + 0xd77925535e157592 ^
       0x990dabaf1f9ecf38;
  _DAT_1831462e8 =
       (_DAT_1831462e8 * 0x20bf6486d3b22ab3 ^ _DAT_183146320) + _DAT_183146278 * 0x4a02860f4c01fb15;
  _DAT_1831460a8 = _DAT_1831462e8 ^ _DAT_183146320;
  _DAT_183145f88 = 0xd77925535e157592;
  _DAT_1831461c8 = func_0x0001867d6a60(_DAT_183145df8 + 0x54a58224b3a9b827U ^ 99);
  uVar3 = (_DAT_1831461c8 ^ 0x4523ef7206bc5592) * -0x218211ac6373ced7;
  _DAT_183146218 = _DAT_1831463c0 ^ uVar3 ^ 0x2886daaca1ea9a6d;
  _DAT_183146240 = (_DAT_183146240 ^ uVar3) + 0x2886daaca1ea9a6d ^ 0x56c4a2e336379108;
  _DAT_183146020 = (_DAT_183146020 * -0xd724f80cb2e8669 ^ _DAT_183146240) + uVar3;
  _DAT_183146410 = _DAT_183146020 ^ _DAT_183146240;
  _DAT_183146360 = 0x2886daaca1ea9a6d;
  uVar3 = (~_DAT_183146490 + 0xd77925535e157593) *
          ((_DAT_183145e28 ^ 0x2886daac25c8b948) + (_DAT_183145e28 & 0x2886daac25c8b948) * 2);
  uVar3 = (uVar3 | _DAT_1831462b0) + (uVar3 & _DAT_1831462b0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183145f08 = func_0x0001867d6a60((uVar3 | 0xffffffff7bddccda) + (uVar3 & 0xffffffff7bddccda));
  uVar3 = (_DAT_183145f08 ^ 0x1000) & 0x2886daaca1ea9a6d;
  _DAT_183146218 = _DAT_183145f40 ^ uVar3 ^ 0xfff;
  _DAT_183145df0 = (_DAT_183145df0 ^ uVar3) + 0xfff ^ 0x190047f399c79f54;
  _DAT_183146200 = (_DAT_183146200 * -0x2d957725c94c018f ^ _DAT_183145df0) + uVar3;
  _DAT_183145eb8 = _DAT_183146200 ^ _DAT_183145df0;
  _DAT_183145f90 = _DAT_183146250 ^ 0xfff;
  _DAT_183146018 = 0xfff;
  uVar3 = (~_DAT_183146150 + 0x4809ea7bb96aec45) *
          ((_DAT_183146420 ^ 0x84222325) + (ulonglong)((uint)_DAT_183146420 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183145f38) + (uVar3 & _DAT_183145f38);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183146450 = func_0x0001867d6a60((uVar3 | 0x4809ea7b3d48cf61) + (uVar3 & 0x4809ea7b3d48cf61));
  uVar3 = _DAT_183146450 >> 1 | _DAT_183146450;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183146450;
  uVar3 = uVar3 << 0x18 | uVar3 >> 0x28;
  _DAT_183146170 = (_DAT_183146170 ^ uVar3) + 0xb7f61584469513bc ^ 0x4d20a93a4dcaf4bb;
  _DAT_183146010 = (_DAT_183146010 * -0x61b20411aa9e6a1b ^ _DAT_183146170) + uVar3;
  _DAT_1831463e0 = _DAT_183146010 ^ _DAT_183146170;
  _DAT_183145fd8 = 0xb7f61584469513bc;
  _DAT_183146148 = func_0x0001867d6a60(_DAT_1831462c8 ^ 0x99c0092a62ea48cc);
  uVar4 = _DAT_183146148 ^ 0x569dd11af55953bc;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar4;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar4;
  _DAT_183145e20 = _DAT_1831463c8 ^ uVar4 ^ 0x4809ea7bb96afc43;
  _DAT_183146368 = (_DAT_183146368 ^ uVar4) + 0x4809ea7bb96afc43 ^ 0x3814c0f7c369025c;
  _DAT_183146358 = (_DAT_183146358 * 0x5dc083c15e7f53df ^ _DAT_183146368) + uVar4;
  _DAT_183145f80 = _DAT_183146358 ^ _DAT_183146368;
  _DAT_183145fb0 = 0x4809ea7bb96afc43;
  _DAT_183145eb8 = func_0x0001867d6a60(_DAT_183146128 + 0x344b3d54a962d22cU ^ 0x31);
  uVar3 = _DAT_183145eb8 & 0x3ffffffffff;
  _DAT_183146080 = _DAT_183146248 ^ uVar3 ^ 0xfff;
  _DAT_1831464b0 = (_DAT_1831464b0 ^ uVar3) + 0xfff ^ 0x3eab18698d8907e1;
  _DAT_183145f58 = (_DAT_183145f58 * 0x34de5f13abffaf55 ^ _DAT_1831464b0) + uVar3;
  _DAT_183145d28 = _DAT_183145f58 ^ _DAT_1831464b0;
  _DAT_183146338 = 0xfff;
  _DAT_183145f70 = func_0x0001867d6a60(_DAT_183146308 ^ 0x7a86c8e4ec0124d2);
  uVar3 = (_DAT_183145f70 ^ 0xca421098ff768d3c) * 2;
  uVar4 = (uVar3 & 0xfffffffff) >> 1;
  uVar3 = (uVar3 & 0xfffffffff) >> 2 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar2 = uVar3 >> 4 | uVar3;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar3 = uVar3 >> 0x20 | uVar2 >> 0x10 | uVar2;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar4;
  _DAT_183145ee8 = _DAT_1831464d8 ^ uVar4 ^ 0xed1abe77c43a59c9;
  _DAT_183145fe8 = (_DAT_183145fe8 ^ uVar4) + 0xed1abe77c43a59c9 ^ 0x6291081593ab0011;
  _DAT_1831460a0 = (_DAT_1831460a0 * -0x2ab7441e72553787 ^ _DAT_183145fe8) + uVar4;
  _DAT_183145f00 = _DAT_1831460a0 ^ _DAT_183145fe8;
  _DAT_183145d90 = _DAT_183146478 ^ 0xed1abe77c43a59c9;
  _DAT_183145da8 = 0xed1abe77c43a59c9;
  _DAT_183145f98 = func_0x0001867d6a60(_DAT_183146140 + 0x7a7e36dd0bfea6f1U ^ 0xe2);
  uVar3 = (_DAT_183145f98 ^ 0xff69df79bfffdf5d) << 0x1c |
          (_DAT_183145f98 ^ 0xff69df79bfffdf5d) >> 0x24;
  uVar4 = uVar3 >> 1 | uVar3;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar3;
  _DAT_183145d78 = (_DAT_183145d78 ^ uVar3) + 0x12d90187bbc5a531 ^ 0xba6c5fe9f33f5791;
  _DAT_183146008 = (_DAT_183146008 * -0x4fed115f33456d05 ^ _DAT_183145d78) + uVar3;
  _DAT_1831464d0 = _DAT_183146008 ^ _DAT_183145d78;
  _DAT_183145f88 = 0x12d90187bbc5a531;
  uVar3 = (_DAT_183145d00 ^ _DAT_1808fba80) + _DAT_1831460e0 + 0xff69df793bddfc78;
  uVar4 = (_DAT_1831460e0 ^ _UNK_1808fba88) + _DAT_183145d00 + 0xedb0defe043a7a6c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183145d00 ^ _DAT_1808fba80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1831460e0 ^ _UNK_1808fba88;
  _DAT_183145eb8 =
       func_0x0001867d6a60((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183145d00 + 0xedb0defe043a7a6c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1831460e0 + 0xff69df793bddfc78));
  _DAT_1831460b0 =
       (_DAT_1831460b0 ^ _DAT_183145eb8 * 0x21cd29de4ded0d55) + 0xed20de78043a5a4c ^
       0x4b6ef877310df818;
  _DAT_183145f70 =
       (_DAT_183145f70 * -0x2d568123d6b973ab ^ _DAT_1831460b0) + _DAT_183145eb8 * 0x21cd29de4ded0d55
  ;
  _DAT_183145e00 = _DAT_183145f70 ^ _DAT_1831460b0;
  _DAT_183145db8 = 0xed20de78043a5a4c;
  uVar3 = (_DAT_183146450 ^ _DAT_1808fba90) + _DAT_183146178 + 0xed1abe7740187aec;
  uVar4 = (_DAT_183146178 ^ _UNK_1808fba98) + _DAT_183146450 + 0xed1abe77c43a59c9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183146450 ^ _DAT_1808fba90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183146178 ^ _UNK_1808fba98;
  _DAT_1831460b0 =
       func_0x0001867d6a60((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183146450 + 0xed1abe77c43a59c9) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183146178 + 0xed1abe7740187aec));
  _DAT_183146050 = _DAT_1831460b0 & 0x7ffffffff;
  _DAT_183146420 = _DAT_183146420 ^ _DAT_183146050 ^ 0x51ac0b0730e92782;
  _DAT_183145ee0 = (_DAT_183145ee0 * 0x343b374515934a31 ^ _DAT_183146420) + _DAT_183146050;
  _DAT_1831464b0 = _DAT_183145ee0 ^ _DAT_183146420;
  _DAT_183146278 = 0;
  uVar3 = ((_DAT_183146110 ^ 0x84222cda) + (ulonglong)((uint)_DAT_183146110 & 0x84222cda) * 2) *
          -_DAT_183146298;
  uVar3 = (uVar3 | _DAT_183145fc0) + (uVar3 & _DAT_183145fc0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1831463c8 = func_0x0001867d6a60((uVar3 | 0x84222cda) + (ulonglong)((uint)uVar3 & 0x84222cda))
  ;
  uVar3 = _DAT_1831463c8 ^ 0xfff;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar3;
  _DAT_183145e78 = _DAT_183145ed8 ^ uVar3 ^ 0xfff;
  _DAT_183145ec8 = (_DAT_183145ec8 ^ uVar3) + 0xfff ^ 0x78419428f0fac7e4;
  _DAT_183146438 = (_DAT_183146438 * -0x15dc109f89e23e1d ^ _DAT_183145ec8) + uVar3;
  _DAT_1831460e0 = _DAT_183146438 ^ _DAT_183145ec8;
  _DAT_183146318 = 0xfff;
  uVar3 = ~_DAT_183145de8 *
          ((_DAT_183146240 ^ 0xff69df793bddfc78) + (_DAT_183146240 & 0x7f69df793bddfc78) * 2);
  uVar3 = (uVar3 | _DAT_183146060) + (uVar3 & _DAT_183146060);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183146360 = func_0x0001867d6a60((uVar3 | 0x962086c4220387) + (uVar3 & 0x962086c4220387));
  uVar3 = ~_DAT_183146360 << 0x22 | ~_DAT_183146360 >> 0x1e;
  _DAT_183145d00 = (_DAT_183145d00 ^ uVar3) + 0x962086400020a2 ^ 0xeec6cea3aa868963;
  _DAT_183146270 = (_DAT_183146270 * 0x7b760b65754fe56f ^ _DAT_183145d00) + uVar3;
  _DAT_1831464f8 = _DAT_183146270 ^ _DAT_183145d00;
  _DAT_1831463e8 = 0x962086400020a2;
  _DAT_183146160 = func_0x0001867d6a60(_DAT_183145fd0 + 0x7a2c4b24d658ad2aU ^ 0xac);
  _DAT_1831461e8 = _DAT_1831461e8 ^ _DAT_183146160 ^ 0xdb9c4da4290b513;
  _DAT_183145e70 = (_DAT_183145e70 * -0x1f0d4c827fc0b861 ^ _DAT_1831461e8) + _DAT_183146160;
  _DAT_183145da8 = _DAT_183145e70 ^ _DAT_1831461e8;
  _DAT_183146430 = 0;
  _DAT_183145ea0 = func_0x0001867d6a60(_DAT_1831463e8 + 0xffdeff841b001dffU ^ 0x95);
  _DAT_1831463e0 = _DAT_1831463e0 ^ _DAT_183145ea0 ^ 0xf7495f69bfbccf4c ^ 0x691a553e7fe51e03;
  _DAT_183145f30 =
       (_DAT_183145f30 * -0x6d4d67bf73b92dd5 ^ _DAT_1831463e0) +
       (_DAT_183145ea0 ^ 0xf7495f69bfbccf4c);
  _DAT_183145de0 = _DAT_183145f30 ^ _DAT_1831463e0;
  _DAT_183145f18 = 0;
  uVar3 = ((_DAT_183145e50 ^ 0x84222cda) + (ulonglong)((uint)_DAT_183145e50 & 0x84222cda) * 2) *
          -_DAT_183145e48;
  uVar3 = (uVar3 | _DAT_183145f58) + (uVar3 & _DAT_183145f58);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x0001867d6a60((uVar3 | 0x84222cda) + (ulonglong)((uint)uVar3 & 0x84222cda));
  uVar4 = uVar3 * -0x3ddb16f74ab811e5;
  _DAT_1831461d8 = _DAT_183145e68 ^ uVar4 ^ 0xfff;
  _DAT_183146470 = (uVar3 ^ uVar4) + 0xfff ^ 0x510e8829addae82c;
  _DAT_1831463f0 = (_DAT_1831463f0 * -0x15fc0d4108ffb665 ^ _DAT_183146470) + uVar4;
  _DAT_183145e30 = _DAT_1831463f0 ^ _DAT_183146470;
  _DAT_183145e20 = 0xfff;
  switch(0xfff < *(ulonglong *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67ba45f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867ba45f(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x60) = 2;
  switch(*(int *)(unaff_RBP + 0x4c) < *(int *)(unaff_RBP + -0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67bfa80 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867bfa80(void)

{
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x50) = unaff_RBX;
  *(int *)(unaff_RBP + 0x58) = *(int *)(unaff_RBP + 0x4c) + 1;
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x28) + 0x558))(*(longlong **)(unaff_RBP + 0x28))
  ;
  switch(*(int *)(unaff_RBP + 0x58) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x58)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67bfac1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867bfac1(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  longlong *unaff_R15;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_XMM6_Qa;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  *(bool *)(unaff_RBP + 0x10) = *unaff_RBP == 0;
  _DAT_183145e68 = func_0x0001867d6a60(_DAT_183146360 + 0xffa50026b10034ff ^ 0x27);
  _DAT_183145da0 = (_DAT_183145da0 ^ _DAT_183145e68) - 0xed175872 ^ 0x91c106fd5e430527;
  _DAT_183145d60 = (_DAT_183145d60 * 0x1691fc3fcb5a2e47 ^ _DAT_183145da0) + _DAT_183145e68;
  _DAT_183145ec0 = _DAT_183145d60 ^ _DAT_183145da0;
  _DAT_1831460d0 = 0x12e8a78e;
  uVar6 = (_DAT_1831464c8 ^ _DAT_1808fb040) + _DAT_1831463b8 + 0x842224e5;
  uVar7 = (_DAT_1831463b8 ^ _UNK_1808fb048) + _DAT_1831464c8 + 0xed175872;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1831464c8 ^ _DAT_1808fb040;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831463b8 ^ _UNK_1808fb048;
  _DAT_183145e18 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831464c8 + 0xed175872) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1831463b8 + 0x842224e5));
  uVar6 = (_DAT_183145e18 << 0x26 | _DAT_183145e18 >> 0x1a) ^ 0x7c0;
  _DAT_1831461f8 = _DAT_183145df0 ^ uVar6 ^ 0xed176032;
  _DAT_183145d10 = (_DAT_183145d10 ^ uVar6) + 0xed176032 ^ 0x2811be8d7420147b;
  _DAT_183145d40 = (_DAT_183145d40 * -0x264272fac00a8a2b ^ _DAT_183145d10) + uVar6;
  _DAT_183145ec8 = _DAT_183145d40 ^ _DAT_183145d10;
  _DAT_183146428 = _DAT_183146240 ^ 0xed176032;
  _DAT_183145f10 = 0xed176032;
  uVar6 = (~_DAT_183146050 + 0x12e8a78f) *
          ((_DAT_183145e30 ^ 0x69354317) + (ulonglong)((uint)_DAT_183145e30 & 0x69354317) * 2);
  uVar6 = (uVar6 | _DAT_183145eb8) + (uVar6 & _DAT_183145eb8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183145e80 = func_0x0001867d6a60((uVar6 | 0x7bdde499) + (ulonglong)((uint)uVar6 & 0x7bdde499))
  ;
  uVar6 = _DAT_183145e80 >> 1 | _DAT_183145e80;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RDI) + (uVar6 >> 2 & unaff_RDI);
  uVar6 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183145e80;
  _DAT_183146048 = _DAT_1831462c8 ^ uVar6 ^ 0x1000007c0;
  _DAT_183145fc0 = (_DAT_183145fc0 ^ uVar6) + 0x1000007c0 ^ 0x6d6ee8fb4efc9d8f;
  _DAT_183145dc0 = (_DAT_183145dc0 * 0x68005352fe77cd33 ^ _DAT_183145fc0) + uVar6;
  _DAT_183145f08 = _DAT_183145dc0 ^ _DAT_183145fc0;
  _DAT_183146400 = 0x7c0;
  uVar6 = (~_DAT_1831463e8 + 0xa01bf01) *
          ((_DAT_1831464c8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1831464c8 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_183145e88) + (uVar6 & _DAT_183145e88);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183145f40 = func_0x0001867d6a60((uVar6 | 0x8e239c25) + (ulonglong)((uint)uVar6 & 0x8e239c25))
  ;
  uVar6 = (_DAT_183145f40 >> 0x12) * -0x40be695401040000;
  _DAT_183146238 = (_DAT_183146238 ^ uVar6) - 0xa01bf00 ^ 0x15e4ef03cb7ea04f;
  _DAT_1831464a0 = (_DAT_1831464a0 * 0xdea550ee28aae3d ^ _DAT_183146238) + uVar6;
  _DAT_183145f90 = _DAT_1831464a0 ^ _DAT_183146238;
  _DAT_183146178 = 0xf5fe4100;
  _DAT_183146188 = func_0x0001867d6a60(_DAT_1831460c8 ^ 0xffea00628d003ba9);
  _DAT_183145ea0 =
       (_DAT_183145ea0 ^ _DAT_183146188 & 0x7fffffffffffffff) - 0x27e635b0 ^ 0xabb3bf2779230824;
  _DAT_183146290 =
       (_DAT_183146290 * -0x57196e7514073439 ^ _DAT_183145ea0) +
       (_DAT_183146188 & 0x7fffffffffffffff);
  _DAT_1831460e0 = _DAT_183146290 ^ _DAT_183145ea0;
  _DAT_183146098 = 0xd819ca50;
  uVar6 = (_DAT_183145e58 ^ _DAT_1808fb050) + _DAT_183146258 + 0x842224e5;
  uVar7 = (_DAT_183146258 ^ _UNK_1808fb058) + _DAT_183145e58 + 0x27e635b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183145e58 ^ _DAT_1808fb050;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183146258 ^ _UNK_1808fb058;
  _DAT_183146138 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183145e58 + 0x27e635b0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183146258 + 0x842224e5));
  uVar6 = _DAT_183146138 ^ 0x27e637f0;
  _DAT_183145e60 = _DAT_183145ea0 ^ uVar6 ^ 0x27e63d70;
  _DAT_1831462a0 = (_DAT_1831462a0 ^ uVar6) + 0x27e63d70 ^ 0x24d052cdb1793e7d;
  _DAT_183145fa8 = (_DAT_183145fa8 * -0x3b041ac7041d386d ^ _DAT_1831462a0) + uVar6;
  _DAT_183146150 = _DAT_183145fa8 ^ _DAT_1831462a0;
  _DAT_183145d78 = 0x27e63d70;
  _DAT_183145ed0 = func_0x0001867d6a60(_DAT_1831460c8 ^ 0x54005b03002c92);
  uVar6 = (ulonglong)(((uint)_DAT_183145ed0 ^ 0x3a22c70) & 0x27e63d70);
  _DAT_183146308 = _DAT_183146448 ^ uVar6 ^ 0x1000007c0;
  _DAT_1831464d0 = (_DAT_1831464d0 ^ uVar6) + 0x1000007c0 ^ 0x27ef701b78018217;
  _DAT_183145f48 = (_DAT_183145f48 * 0x70fb2cb02ea3f10f ^ _DAT_1831464d0) + uVar6;
  _DAT_1831463d0 = _DAT_183145f48 ^ _DAT_1831464d0;
  _DAT_1831462a0 = 0x7c0;
  uVar6 = (_DAT_183146198 ^ _DAT_1808fb060) + _DAT_183146248 + 0x5ac510d2;
  uVar7 = (_DAT_183146248 ^ _UNK_1808fb068) + _DAT_183146198 + 0x4d378ed;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183146198 ^ _DAT_1808fb060;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183146248 ^ _UNK_1808fb068;
  _DAT_183146058 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183146198 + 0x4d378ed) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183146248 + 0x5ac510d2));
  uVar6 = (_DAT_183146058 << 0x29 | _DAT_183146058 >> 0x17) << 0x14 |
          (_DAT_183146058 & 0x7fffff) >> 3;
  _DAT_183145e90 = _DAT_183146070 ^ uVar6 ^ 0xe3baace4;
  _DAT_183145ef0 = (_DAT_183145ef0 ^ uVar6) + 0xe3baace4 ^ 0xc9abc0af0d603a53;
  _DAT_183146428 = (_DAT_183146428 * -0x6406a92a6020c6cb ^ _DAT_183145ef0) + uVar6;
  _DAT_183145ef0 = _DAT_183146428 ^ _DAT_183145ef0;
  _DAT_183145e78 = 0xe3baace4;
  _DAT_183146120 = func_0x0001867d6a60(_DAT_183145f08 ^ 0x27ffa1e8fff10e);
  uVar6 = ((_DAT_183146120 ^ 0xdef77bff) & 0x1ffffff) << 0x26 |
          (_DAT_183146120 ^ 0xdef77bff) >> 0x1a;
  _DAT_183146228 = (_DAT_183146228 ^ uVar6) + 0x4c330e5 ^ 0xca1c5c990048150c;
  _DAT_183146090 = (_DAT_183146090 * -0x73636f8d8a8d0e7 ^ _DAT_183146228) + uVar6;
  _DAT_1831464f8 = _DAT_183146090 ^ _DAT_183146228;
  _DAT_1831463e8 = 0x4c330e5;
  uVar6 = (_DAT_183145d28 ^ _DAT_1808fb070) + _DAT_183145f18 + 0x5e16683f;
  uVar7 = (_DAT_183145f18 ^ _UNK_1808fb078) + _DAT_183145d28 + 0x98661ca;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183145d28 ^ _DAT_1808fb070;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183145f18 ^ _UNK_1808fb078;
  _DAT_183145f70 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183145d28 + 0x98661ca) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183145f18 + 0x5e16683f));
  uVar6 = (_DAT_183145f70 ^ 0xdbb66bda) & 0xfffffffffffffffe;
  _DAT_183145e98 = _DAT_183145e00 ^ uVar6 ^ 0xe3baace4;
  _DAT_183145fd8 = (_DAT_183145fd8 ^ uVar6) + 0xe3baace4 ^ 0x42b03443e30df712;
  _DAT_183145f78 = (_DAT_183145f78 * 0x61b8883c46ec8ea1 ^ _DAT_183145fd8) + uVar6;
  _DAT_1831460b0 = _DAT_183145f78 ^ _DAT_183145fd8;
  _DAT_1831464b8 = 0xe3baace4;
  _DAT_183146260 = func_0x0001867d6a60(_DAT_183145e38 ^ 0xffe4007ce30021b2);
  uVar6 = _DAT_183146260 & 0x7fffffffffffffff;
  _DAT_183145e60 = _DAT_1831464b8 ^ uVar6 ^ 0x7c0;
  _DAT_183145e70 = (_DAT_183145e70 ^ uVar6) + 0x7c0 ^ 0xce690b6f2065f8dd;
  _DAT_1831463b0 = (_DAT_1831463b0 * 0x6a70f2901e6e3023 ^ _DAT_183145e70) + uVar6;
  _DAT_183145eb8 = _DAT_1831463b0 ^ _DAT_183145e70;
  _DAT_183146010 = 0x7c0;
  uVar6 = (~_DAT_183146140 + 0x100000000) *
          ((_DAT_183146280 ^ 0x5ac510d2) + (ulonglong)((uint)_DAT_183146280 & 0x5ac510d2) * 2);
  uVar6 = (uVar6 | _DAT_1831461e8) + (uVar6 & _DAT_1831461e8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183146390 = func_0x0001867d6a60((uVar6 | 0xa53aef2d) + (ulonglong)((uint)uVar6 & 0xa53aef2d))
  ;
  uVar6 = _DAT_183146390 - (_DAT_183146390 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RDI) + (uVar6 >> 2 & unaff_RDI);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183146390;
  uVar6 = uVar6 << 0x3a | uVar6 >> 6;
  _DAT_183146158 = (_DAT_183146158 ^ uVar6) + 0x2118cc08 ^ 0xd7a6cef1aba95555;
  _DAT_183145d38 = (_DAT_183145d38 * -0x56d89c6065f85505 ^ _DAT_183146158) + uVar6;
  _DAT_183146260 = _DAT_183145d38 ^ _DAT_183146158;
  _DAT_1831462c8 = 0x2118cc08;
  _DAT_1831464d0 = func_0x0001867d6a60(_DAT_1831460a0 ^ 0xa400095600a2da);
  uVar6 = (ulonglong)(~(uint)_DAT_1831464d0 & 0xdee733f7);
  _DAT_183146368 = _DAT_183146368 ^ uVar6 ^ 0x75b93f5e0ff3c60e;
  _DAT_1831463e8 = (_DAT_1831463e8 * 0x361654a26647ec83 ^ _DAT_183146368) + uVar6;
  _DAT_1831460c8 = _DAT_1831463e8 ^ _DAT_183146368;
  _DAT_183146270 = 0;
  _DAT_183146398 = func_0x0001867d6a60(_DAT_183146310 + 0xffdbff7bdd0021ffU ^ 0xe5);
  uVar6 = _DAT_183146398 & 0xffffffffffffffc0;
  _DAT_183146468 = _DAT_1831461f0 ^ uVar6 ^ 0x7c0;
  _DAT_183145f08 = (_DAT_183145f08 ^ uVar6) + 0x7c0 ^ 0x5e8c4f59ddfad485;
  _DAT_183145f60 = (_DAT_183145f60 * 0x7bb25cedd1e6761f ^ _DAT_183145f08) + uVar6;
  _DAT_183145dd8 = _DAT_183145f60 ^ _DAT_183145f08;
  _DAT_183145fa0 = 0x7c0;
  uVar7 = (ulonglong)unaff_ESI;
  uVar6 = (~_DAT_183146018 + 0x7c1) *
          ((uVar7 ^ 0x84222325 ^ _DAT_183145f88) +
          (ulonglong)((uint)_DAT_183145f88 & (uint)(uVar7 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | _DAT_183145df0) + (uVar6 & _DAT_183145df0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183145db0 =
       func_0x0001867d6a60((uVar7 ^ 0x842224e5 | uVar6) +
                           (ulonglong)((uint)(uVar7 ^ 0x842224e5) & (uint)uVar6));
  uVar7 = (uVar7 | 0x7c0) ^ _DAT_183145db0;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar7;
  uVar5 = (ulonglong)(unaff_ESI & 0x7c0);
  _DAT_183146340 = (_DAT_183146340 ^ uVar7) + uVar5 ^ 0x94390371494d964e;
  _DAT_183146400 = (_DAT_183146400 * -0x381b0716cc66b229 ^ _DAT_183146340) + uVar7;
  _DAT_183145d50 = _DAT_183146400 ^ _DAT_183146340;
  _DAT_183145fe0 = uVar5;
  lVar4 = (**(code **)(unaff_R15 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 10) = (int)*(char *)(lVar4 + (int)unaff_RBP[0xb]);
  (**(code **)(unaff_R15 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar3 = *(uint *)(unaff_RBP + 10);
  uVar6 = (ulonglong)uVar3;
  _DAT_183145f50 = func_0x0001867d6a60(_DAT_1831462f8 + 0x32ffd52dffe2ff ^ 0xd9);
  _DAT_183145f90 = (_DAT_183145f90 ^ _DAT_183145f50) + 0xfb8ffefb ^ 0x7e419dd6814b8e1b;
  _DAT_183145e70 = (_DAT_183145e70 * 0x626b4beffafe9567 ^ _DAT_183145f90) + _DAT_183145f50;
  _DAT_183146498 = _DAT_183145e70 ^ _DAT_183145f90;
  _DAT_183145ea0 = 0xfb8ffefb;
  uVar7 = (~_DAT_183145d78 + 0xa8c679f4) *
          ((_DAT_183145e18 ^ 0xc91591a5) + (ulonglong)((uint)_DAT_183145e18 & 0xc91591a5) * 2);
  uVar7 = (uVar7 | _DAT_183145ec8) + (uVar7 & _DAT_183145ec8);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183145de8 = func_0x0001867d6a60((uVar7 | 0x61d3e856) + (ulonglong)((uint)uVar7 & 0x61d3e856))
  ;
  uVar7 = _DAT_183145de8 << 0xe | (_DAT_183145de8 & 0xffffffffffffff) >> 0x32;
  _DAT_183146258 = (_DAT_183146258 ^ uVar7) + 0xe5f1cb73 ^ 0xe4b0925842b8d4bf;
  _DAT_183145f70 = (_DAT_183145f70 * -0x21bfe54f6c909ba7 ^ _DAT_183146258) + uVar7;
  _DAT_183146148 = _DAT_183145f70 ^ _DAT_183146258;
  _DAT_1831462e8 = 0xe5f1cb73;
  uVar7 = (_DAT_183146458 ^ _DAT_1808fb080) + _DAT_1831464d8 + 0x8422231a;
  uVar8 = (_DAT_1831464d8 ^ _UNK_1808fb088) + _DAT_183146458 + 0x9d5d0da0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183146458 ^ _DAT_1808fb080;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831464d8 ^ _UNK_1808fb088;
  _DAT_183145d28 =
       func_0x0001867d6a60((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183146458 + 0x9d5d0da0) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831464d8 + 0x8422231a));
  _DAT_183146260 = _DAT_183146258 ^ 0x9d5d0de0;
  _DAT_183145f90 = (_DAT_183145f90 ^ 0x3f) + 0x9d5d0ddf ^ 0x8eec242b0be50b3c;
  _DAT_183146040 = (_DAT_183146040 * -0x79088b9092ece1cf ^ _DAT_183145f90) + 0x3f;
  _DAT_1831464a0 = _DAT_183146040 ^ _DAT_183145f90;
  _DAT_183145dd8 = 0x9d5d0ddf;
  _DAT_183146018 = func_0x0001867d6a60(_DAT_183145f88 + 0xdeff8ae2fff3ff ^ 3);
  _DAT_1831460b8 = (_DAT_1831460b8 ^ _DAT_183146018) - 0xb3ec000 ^ 0x2d5cfc2b23ed054;
  _DAT_183146180 = (_DAT_183146180 * -0xc094e67c1ae9981 ^ _DAT_1831460b8) + _DAT_183146018;
  _DAT_183146498 = _DAT_183146180 ^ _DAT_1831460b8;
  _DAT_183146208 = 0xf4c14000;
  uVar7 = (~_DAT_183146420 + 0xb3ec001) *
          ((_DAT_183145eb0 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183145eb0 & 0x8422231a) * 2);
  uVar7 = (uVar7 | _DAT_183146258) + (uVar7 & _DAT_183146258);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_1831462a0 = func_0x0001867d6a60((uVar7 | 0x8f1ce31a) + (ulonglong)((uint)uVar7 & 0x8f1ce31a))
  ;
  uVar8 = _DAT_1831462a0 ^ 0xb3ec03f;
  uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar2 + (uint)bVar2 ^ uVar8;
  uVar7 = uVar8 >> 1 | uVar8;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar8;
  _DAT_1831463c8 = _DAT_183146140 ^ uVar8 ^ 0xb3ec03f;
  _DAT_1831464f0 = (_DAT_1831464f0 ^ uVar8) + 0xb3ec03f ^ 0x842a5ede76ac8452;
  _DAT_183145ff0 = (_DAT_183145ff0 * 0x2c77e1049298f855 ^ _DAT_1831464f0) + uVar8;
  _DAT_183145dc0 = _DAT_183145ff0 ^ _DAT_1831464f0;
  _DAT_183145e10 = 0xb3ec03f;
  uVar7 = (_DAT_183145d58 ^ _DAT_1808fb090) + _DAT_1831463a8 + 0x8f1ce31a;
  uVar8 = (_DAT_1831463a8 ^ _UNK_1808fb098) + _DAT_183145d58 + 0xf4c14000;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183145d58 ^ _DAT_1808fb090;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_1831463a8 ^ _UNK_1808fb098;
  _DAT_1831461e0 =
       func_0x0001867d6a60((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_183145d58 + 0xf4c14000) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_1831463a8 + 0x8f1ce31a));
  uVar7 = (_DAT_1831461e0 ^ 0xf4c14000) & 0xffffffffffffffc0;
  _DAT_183145dd0 = _DAT_183146430 ^ uVar7 ^ 0x10000003f;
  _DAT_1831462b8 = (_DAT_1831462b8 ^ uVar7) + 0x10000003f ^ 0x7f67ad222ef4b4fc;
  _DAT_183146078 = (_DAT_183146078 * -0x752830c091a8d7d ^ _DAT_1831462b8) + uVar7;
  _DAT_183145f88 = _DAT_183146078 ^ _DAT_1831462b8;
  _DAT_183145dc0 = 0x3f;
  uVar7 = (~_DAT_183145d20 + 0xa9edb01) *
          ((_DAT_183146130 ^ 0x8422231a) + (ulonglong)((uint)_DAT_183146130 & 0x8422231a) * 2);
  uVar7 = (uVar7 | _DAT_183146348) + (uVar7 & _DAT_183146348);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183146200 = func_0x0001867d6a60((uVar7 | 0x8ebcf81a) + (ulonglong)((uint)uVar7 & 0x8ebcf81a))
  ;
  uVar7 = _DAT_183146200 & 0x7fffffffffffffff;
  _DAT_183146008 = _DAT_183145f10 ^ uVar7 ^ 0xa9edb3f;
  _DAT_183145d58 = (_DAT_183145d58 ^ uVar7) + 0xa9edb3f ^ 0x38e8656d796983bf;
  _DAT_1831463b0 = (_DAT_1831463b0 * 0x7781b935c232528b ^ _DAT_183145d58) + uVar7;
  _DAT_183146050 = _DAT_1831463b0 ^ _DAT_183145d58;
  _DAT_183145fd0 = 0xa9edb3f;
  uVar7 = (_DAT_1831463a8 ^ _DAT_1808fb0a0) + _DAT_183146328 + 0x7fadddde;
  uVar8 = (_DAT_183146328 ^ _UNK_1808fb0a8) + _DAT_1831463a8 + 0xe5f1cb73;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1831463a8 ^ _DAT_1808fb0a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_183146328 ^ _UNK_1808fb0a8;
  _DAT_183145e60 =
       func_0x0001867d6a60((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_1831463a8 + 0xe5f1cb73) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183146328 + 0x7fadddde));
  uVar7 = (ulonglong)(~(uint)_DAT_183145e60 & 0xfb8ffefb);
  _DAT_183146008 = _DAT_1831463a0 ^ uVar7 ^ 0x1e181ca6e;
  _DAT_183146288 = (_DAT_183146288 ^ uVar7) + 0x1e181ca6e ^ 0xb4f73afe1b14b701;
  _DAT_183145dd8 = (_DAT_183145dd8 * 0x87f47bf20256f05 ^ _DAT_183146288) + uVar7;
  _DAT_183145f60 = _DAT_183145dd8 ^ _DAT_183146288;
  _DAT_183145e70 = 0xe181ca6e;
  uVar7 = (~_DAT_183146158 + 0xe5f1cb74) *
          ((_DAT_1831461e8 ^ 0x7fadddde) + (ulonglong)((uint)_DAT_1831461e8 & 0x7fadddde) * 2);
  uVar7 = (uVar7 | _DAT_183146360) + (uVar7 & _DAT_183146360);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183145e08 = func_0x0001867d6a60((uVar7 | 0x9a5c16ad) + (ulonglong)((uint)uVar7 & 0x9a5c16ad))
  ;
  _DAT_183145f08 =
       (_DAT_183145f08 ^ _DAT_183145e08 & 0xffffffffffffffe0) + 0x1e7e3588 ^ 0x68afdd83e4e8d4df;
  _DAT_183146158 =
       (_DAT_183146158 * 0x7a7862b065b9c8e3 ^ _DAT_183145f08) +
       (_DAT_183145e08 & 0xffffffffffffffe0);
  _DAT_183145e28 = _DAT_183146158 ^ _DAT_183145f08;
  _DAT_1831462d8 = 0x1e7e3588;
  uVar7 = (~_DAT_183146050 + 0xc30394e7) *
          ((_DAT_1831463f0 ^ 0x9a5c16ad) + (ulonglong)((uint)_DAT_1831463f0 & 0x9a5c16ad) * 2);
  uVar7 = (uVar7 | _DAT_183146398) + (uVar7 & _DAT_183146398);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183145d40 = func_0x0001867d6a60((uVar7 | 0x595f824b) + (ulonglong)((uint)uVar7 & 0x595f824b))
  ;
  _DAT_1831464d0 = _DAT_1831463b0 ^ _DAT_183146458 ^ 0xe181ca6e;
  _DAT_183145f90 = (_DAT_183145f90 ^ _DAT_183146458) + 0xe181ca6e ^ 0x4afe083b6303b6a8;
  _DAT_183146298 = (_DAT_183146298 * -0x459956b5d70254e3 ^ _DAT_183145f90) + _DAT_183146458;
  _DAT_1831460d8 = _DAT_183146298 ^ _DAT_183145f90;
  _DAT_1831461b8 = 0xe181ca6e;
  uVar7 = (~_DAT_183145e38 + 0x100000000) *
          ((_DAT_183146198 ^ 0x7fadddde) + (ulonglong)((uint)_DAT_183146198 & 0x7fadddde) * 2);
  uVar7 = (uVar7 | _DAT_183146368) + (uVar7 & _DAT_183146368);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183146230 = func_0x0001867d6a60((uVar7 | 0x80522221) + (ulonglong)((uint)uVar7 & 0x80522221))
  ;
  uVar7 = (_DAT_183146230 ^ 0xfb8ffefb) & 0x7fffffffffffffff;
  _DAT_1831463a8 = (_DAT_1831463a8 ^ uVar7) + 0x4700104 ^ 0x735d7e041aa1ef27;
  _DAT_1831460a0 = (_DAT_1831460a0 * 0x2cffca01ca914963 ^ _DAT_1831463a8) + uVar7;
  _DAT_183146330 = _DAT_1831460a0 ^ _DAT_1831463a8;
  _DAT_1831463d8 = 0x4700104;
  _DAT_1831462a0 = func_0x0001867d6a60(_DAT_183145eb8 + 0x22ff83f60021ff ^ 4);
  uVar7 = _DAT_1831462a0 << 0x24 | _DAT_1831462a0 >> 0x1c;
  _DAT_183145f08 = _DAT_183146068 ^ uVar7 ^ 0x3f;
  _DAT_183145e40 = (_DAT_183145e40 ^ uVar7) + 0x3f ^ 0x2bb293a8381d5543;
  _DAT_183145f30 = (_DAT_183145f30 * -0x70d13614e6d19709 ^ _DAT_183145e40) + uVar7;
  _DAT_183146078 = _DAT_183145f30 ^ _DAT_183145e40;
  _DAT_183146458 = 0x3f;
  uVar7 = (~_DAT_1831464b0 + 0x40) *
          ((uVar6 ^ 0x84222325 ^ _DAT_183145d30) +
          (ulonglong)((uint)_DAT_183145d30 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar7 = (uVar7 | _DAT_183145d20) + (uVar7 & _DAT_183145d20);
  uVar7 = uVar7 * 0x2000 ^ uVar7;
  uVar7 = uVar7 >> 7 ^ uVar7;
  uVar7 = uVar7 << 0x11 ^ uVar7;
  _DAT_183146298 =
       func_0x0001867d6a60((uVar6 ^ 0x8422231a | uVar7) +
                           (ulonglong)((uint)(uVar6 ^ 0x8422231a) & (uint)uVar7));
  uVar6 = uVar6 ^ _DAT_183146298;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar6;
  uVar3 = uVar3 & 0x3f;
  _DAT_183145ed0 = (ulonglong)uVar3;
  _DAT_183145e78 = (_DAT_183145e78 ^ uVar6) + _DAT_183145ed0 ^ 0x5f8c969cde9d8efa;
  _DAT_183145f48 = (_DAT_183145f48 * -0x47317525de1b9e03 ^ _DAT_183145e78) + uVar6;
  _DAT_1831462f0 = _DAT_183145f48 ^ _DAT_183145e78;
  uVar6 = _DAT_183145ed0 ^ 0x84222325 ^ _DAT_183145e80;
  lVar4 = (_DAT_183145ed0 ^ 0x84222325) + _DAT_183146390;
  uVar7 = uVar6 + lVar4;
  uVar8 = (uVar5 ^ _DAT_183146390) + _DAT_183145e80 + uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar5 ^ _DAT_183146390;
  _DAT_1831464b0 =
       func_0x0001867d6a60((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183145e80 + uVar5) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar4);
  uVar3 = uVar3 | unaff_ESI & 0x7c0;
  _DAT_1831463e0 = (ulonglong)uVar3;
  uVar6 = (_DAT_1831464b0 ^ _DAT_1831463e0) & 0x3fffffffff;
  _DAT_1831462b8 = (_DAT_1831462b8 ^ uVar6) + _DAT_1831463e0 ^ 0x1e66b8ff2d96c347;
  _DAT_183146460 = (_DAT_183146460 * -0x265ae0fcc5eab89f ^ _DAT_1831462b8) + uVar6;
  _DAT_183145ef0 = _DAT_183146460 ^ _DAT_1831462b8;
  _DAT_183145d18 = _DAT_183146428 ^ _DAT_1831463e0;
  unaff_RBP[10] = unaff_RBP[2];
  uVar1 = *(uint *)(unaff_RBP + 6);
  *(uint *)(unaff_RBP + 0xb) = uVar1;
  uVar7 = (ulonglong)uVar1;
  uVar6 = (~_DAT_1831462a0 + 2) *
          ((uVar7 ^ 0x84222325 ^ _DAT_1831464f0) +
          (ulonglong)((uint)_DAT_1831464f0 & (uint)(uVar7 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | _DAT_183145f70) + (uVar6 & _DAT_183145f70);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183145ef8 =
       func_0x0001867d6a60((uVar7 ^ 0x84222324 | uVar6) +
                           (ulonglong)((uint)(uVar7 ^ 0x84222324) & (uint)uVar6));
  uVar9 = uVar1 & _DAT_18001a990;
  uVar10 = uVar1 | _DAT_18001a990;
  uVar11 = uVar1 ^ _DAT_18001a990;
  uVar6 = _DAT_183145ef8 * -0x30c61ebaa4465a25;
  _DAT_1831460b8 =
       ((((uVar7 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_1808fb0f0 +
         (((uVar7 ^ unaff_XMM6_Qa) & 0xffffffff) * (ulonglong)_DAT_1808fb140 +
          (unaff_XMM6_Qa >> 0x20) * (ulonglong)_DAT_1808fb0f0 << 0x20) +
        ((ulonglong)uVar11 * (ulonglong)_DAT_1808fb130 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)_DAT_1808fb120 +
        ((ulonglong)uVar10 * (ulonglong)_DAT_1808fb110 << 0x20) +
        (ulonglong)uVar10 * (ulonglong)_DAT_1808fb100 +
        ((ulonglong)uVar9 * (ulonglong)_DAT_1808fb0e0 << 0x20 |
        (ulonglong)uVar9 * (ulonglong)_DAT_1808fb0d0) +
        ((ulonglong)uVar1 * (ulonglong)_DAT_1808fb0c0 << 0x20) +
        (ulonglong)uVar1 * (ulonglong)_DAT_1808fb0b0) -
       (((ulonglong)uVar11 * (ulonglong)_DAT_1808fb1e0 << 0x20) +
        (ulonglong)uVar11 * (ulonglong)_DAT_1808fb1d0 +
        ((ulonglong)uVar10 * (ulonglong)_DAT_1808fb1c0 << 0x20) +
        (ulonglong)uVar10 * (ulonglong)_DAT_1808fb1b0 +
       ((ulonglong)uVar9 * (ulonglong)_DAT_1808fb1a0 << 0x20 |
       (ulonglong)uVar9 * (ulonglong)_DAT_1808fb190) +
       ((ulonglong)uVar1 * (ulonglong)_DAT_1808fb180 << 0x20) +
       (ulonglong)uVar1 * (ulonglong)_DAT_1808fb170)) + 0xb63d521c4665fc7b;
  _DAT_1831462a0 = _DAT_183146040 ^ uVar6 ^ _DAT_1831460b8;
  _DAT_1831462f8 = (_DAT_1831462f8 ^ uVar6) + _DAT_1831460b8 ^ 0x6899334c4ce53b28;
  _DAT_1831464d8 = (_DAT_1831464d8 * -0x75469eecbc3ba367 ^ _DAT_1831462f8) + uVar6;
  _DAT_183145f38 = _DAT_1831464d8 ^ _DAT_1831462f8;
  _DAT_1831460b8 = _DAT_1831460b8 & 0xffffffff;
  *(uint *)(unaff_RBP + 0xc) = uVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)unaff_RBP[0x10]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x06':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67c1c9e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867c1c9e(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  int unaff_EDI;
  ulonglong unaff_R14;
  ulonglong unaff_XMM6_Qa;
  uint unaff_XMM7_Da;
  uint uVar3;
  uint unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = (~param_2 + 2) * (param_3 + param_4);
  uVar1 = (uVar1 | param_1) + (uVar1 & param_1);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_183145f80 =
       func_0x0001867d6a60((in_RAX ^ 1 | uVar1) + (ulonglong)((uint)(in_RAX ^ 1) & (uint)uVar1));
  uVar1 = (unaff_R14 | 1) ^ _DAT_183145f80 ^ unaff_R14;
  uVar3 = (uint)unaff_R14 & (uint)_DAT_18001a990;
  uVar4 = (uint)unaff_R14 | (uint)_DAT_18001a990;
  uVar5 = unaff_R14 ^ unaff_XMM6_Qa;
  uVar2 = unaff_R14 ^ _DAT_18001a990;
  uVar2 = (uVar5 & 0xffffffff) * (ulonglong)_DAT_1808fb600 +
          ((uVar5 & 0xffffffff) * (ulonglong)_DAT_1808fb610 +
           (uVar5 >> 0x20) * (ulonglong)_DAT_1808fb600 << 0x20) +
          ((ulonglong)uVar4 * (ulonglong)_DAT_1808fb5f0 << 0x20) +
          (ulonglong)uVar4 * (ulonglong)_DAT_1808fb5e0 +
          ((ulonglong)uVar3 * (ulonglong)_DAT_1808fb5f0 << 0x20 |
          (ulonglong)uVar3 * (ulonglong)_DAT_1808fb5e0) +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1808fb5d0 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1808fb5c0 +
          (-((uVar2 & 0xffffffff) * (ulonglong)unaff_XMM11_Da +
            ((uVar2 & 0xffffffff) * (ulonglong)_DAT_1808fb6b0 +
             (uVar2 >> 0x20) * (ulonglong)unaff_XMM11_Da << 0x20)) -
          (((ulonglong)uVar4 * (ulonglong)unaff_XMM13_Da << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_1808fb680 +
          ((ulonglong)uVar3 * (ulonglong)unaff_XMM7_Da << 0x20 |
          (ulonglong)uVar3 * (ulonglong)unaff_XMM12_Da) +
          ((unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1808fb650 << 0x20) +
          (unaff_R14 & 0xffffffff) * (ulonglong)_DAT_1808fb640)) + 0x204f21f836a0f385;
  _DAT_183146280 = _DAT_183145fa0 ^ uVar1 ^ uVar2;
  _DAT_183146218 = (_DAT_183146218 ^ uVar1) + uVar2 ^ 0xe0d1268d303822ff;
  _DAT_183146388 = (_DAT_183146388 * 0x1b070b9a123682e3 ^ _DAT_183146218) + uVar1;
  _DAT_183145d00 = _DAT_183146388 ^ _DAT_183146218;
  _DAT_183146318 = uVar2 & 0xffffffff;
  *(int *)(unaff_RBP + 0x50) = (int)uVar2;
  *(int *)(unaff_RBP + 0x58) = unaff_EDI;
  switch((int)uVar2 < unaff_EDI) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67c237d -----

void FUN_1867c237d(void)

{
  return;
}


// ----- block @ rva 0x67d90fd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867d90fd(void)

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


// ----- block @ rva 0x67d915c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867d915c(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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


// ----- block @ rva 0x67d92bd -----

void FUN_1867d92bd(void)

{
  return;
}


// ----- block @ rva 0x67d99cf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867d99cf(void)

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


// ----- block @ rva 0x67d9f11 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1867d96e6(void)

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


// ----- block @ rva 0x67da002 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867da002(void)

{
  char cVar1;
  longlong *unaff_R13;
  
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


// ----- block @ rva 0x67dbb7d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1867d96e6(void)

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


// ----- block @ rva 0x67dbfbd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867dbfbd(void)

{
  longlong unaff_RSI;
  longlong *unaff_R13;
  undefined1 in_stack_00000040;
  undefined1 uStack0000000000000072;
  
  uStack0000000000000072 = in_stack_00000040;
  (**(code **)(unaff_R13 + JNI->SetByteArrayRegion /*0x680*/))();
  switch(unaff_RSI == 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67dc12e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dc12e(void)

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


// ----- block @ rva 0x67dcff2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867dcff2(void)

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


// ----- block @ rva 0x67dd5fa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dd5fa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180901c58)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x67dd606 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867dd606(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0x67dd623 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dd623(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_180901c68)();
  return;
}


// ----- block @ rva 0x67dd62c -----

void FUN_1867dd62c(void)

{
  return;
}


// ----- block @ rva 0x67dd62d -----

undefined4 * FUN_1867dd62d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x67dd68f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dd68f(void)

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


// ----- block @ rva 0x67dd6e3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867dd6e3(void)

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


// ----- block @ rva 0x67dd751 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dd751(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180902018)();
  return;
}


// ----- block @ rva 0x67dd7cd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867dd7cd(void)

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


// ----- block @ rva 0x67ddcac -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867ddcac(void)

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


// ----- block @ rva 0x67ddd9a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867ddd9a(void)

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


// ----- block @ rva 0x67dde12 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dde12(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180901f28)();
  return;
}


// ----- block @ rva 0x67de182 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867de182(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67de380 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867de380(void)

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


// ----- block @ rva 0x67de413 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867de413(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180901e68)();
  return;
}


// ----- block @ rva 0x67de448 -----

void FUN_1867de448(void)

{
  return;
}


// ----- block @ rva 0x67de456 -----

void FUN_1867de456(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x67de5c0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867de5c0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1809028f8)();
  return;
}


// ----- block @ rva 0x67dee07 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867dee07(void)

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


// ----- block @ rva 0x67df62e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867df62e(void)

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


// ----- block @ rva 0x67dfaa7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dfaa7(void)

{
  FUN_190ddfc90();
  (*_DAT_1809028b8)();
  return;
}


// ----- block @ rva 0x67dfb1c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dfb1c(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180902eb8)();
  return;
}


// ----- block @ rva 0x67dfb5d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dfb5d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180902b28)();
  return;
}


// ----- block @ rva 0x67dfca5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dfca5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1809026f8)();
  return;
}


// ----- block @ rva 0x67dfe72 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dfe72(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_180902348)();
  return;
}


// ----- block @ rva 0x67dfff5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867dfff5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180902c98)();
  return;
}


// ----- block @ rva 0x67e0137 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867e0137(void)

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


// ----- block @ rva 0x67e0a46 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867e0a46(void)

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


// ----- block @ rva 0x67e0e42 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867e0e42(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180902f88)();
  return;
}


// ----- block @ rva 0x67e0e9d -----

void FUN_1867e0e9d(void)

{
  return;
}


// ----- block @ rva 0x67e0ebc -----

void FUN_1867e0ebc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x67e36c6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867e36c6(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67e3862 -----

void FUN_1867e3862(void)

{
  return;
}


// ----- block @ rva 0x67e3b9a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867e3b9a(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67e3be5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867e3be5(void)

{
  int iVar1;
  longlong *unaff_R14;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000084;
  
  uStack0000000000000084 = in_stack_00000058;
  (**(code **)(unaff_R14 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(unaff_R14 + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67e4036 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867e4036(void)

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


// ----- block @ rva 0x67e4091 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867e4091(void)

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


// ----- block @ rva 0x67e40d7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867e40d7(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000048 < 0 || iVar1 <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67e5cd3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867e5cd3(void)

{
  char cVar1;
  longlong *in_RAX;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*in_RAX + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x67e6fd6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1867e833f(void)

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


// ----- block @ rva 0x67e84f5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867e84f5(void)

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


// ----- block @ rva 0x67ec06a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867ec06a(void)

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


// ----- block @ rva 0x67ec57e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867ec57e(void)

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


// ----- block @ rva 0x67ec5d2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867ec5d2(void)

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


// ----- block @ rva 0x67ec72b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867ec72b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1809055d8)();
  return;
}


// ----- block @ rva 0x67ec7b4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867ec7b4(void)

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


// ----- block @ rva 0x67ec8e5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867ec8e5(void)

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


// ----- block @ rva 0x67ecd3c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1867ecd3c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de6ea0();
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


// ----- block @ rva 0x67ecfa8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867ecfa8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_180905358)();
  return;
}


// ----- block @ rva 0x67ed1a0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867ed1a0(void)

{
  FUN_190dd72e0();
  (*_DAT_1809051b8)();
  return;
}


// ----- block @ rva 0x67ed1e9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867ed1e9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180905518)();
  return;
}


// ----- block @ rva 0x67ed206 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1867ed206(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180905548)();
  return;
}


// ----- block @ rva 0x67ed445 -----

void FUN_1867ed445(void)

{
  return;
}


// ----- block @ rva 0x67ed454 -----

void FUN_1867ed454(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

