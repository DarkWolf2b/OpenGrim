// ===== Lsixtwo/eh; _37a1913627cf415695d1ec468fdbedf4 ()V (handler @ image 18d2fc690, runtime 6ffff4f0c690) =====

void FUN_18d2fc690(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d2fc778 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821aeb08 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eh; asA ([B)Ljava/lang/String; (handler @ image 18d2c3420, runtime 6ffff4ed3420) =====

void FUN_18d2c3420(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018d2c34c0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821a5590 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eh; asB (IJ)I (handler @ image 18d2ed990, runtime 6ffff4efd990) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2ed990(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  ulonglong uVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar7;
  
  uRam0000000183355d20 = func_0x00018d2f88e0(uRam0000000183356000 ^ 0x18b943f689280cab);
  uVar2 = uRam0000000183355d20 >> 1 | uRam0000000183355d20;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183355d20) & 0x7fffffffffffffff;
  uRam0000000183355bc0 = (uRam0000000183355bc0 ^ uVar2) + 0x7a4428198e5e6aac ^ 0x4d7dc58b2cc6fe19;
  uRam0000000183355ec0 = (uRam0000000183355ec0 * -0x5b99aeaedf048bb1 ^ uRam0000000183355bc0) + uVar2
  ;
  uRam0000000183355de0 = uRam0000000183355ec0 ^ uRam0000000183355bc0;
  uRam0000000183355b70 = 0x7a4428198e5e6aac;
  uRam0000000183355d80 = func_0x00018d2f88e0(lRam0000000183355b88 + 0xc0d8c32a8cfd39e2U ^ 0x2a);
  uVar2 = (uRam0000000183355d80 ^ 0x6740000003e8dab0) << 0x25 |
          (uRam0000000183355d80 ^ 0x6740000003e8dab0) >> 0x1b & 0xfffffffffc000000;
  uRam0000000183355e30 = (uRam0000000183355e30 ^ uVar2) + 0x98a2f93e4c172550 ^ 0xe8c8d9aa47959b74;
  uRam0000000183355ed8 = (uRam0000000183355ed8 * -0x2c30c103d0bc6f91 ^ uRam0000000183355e30) + uVar2
  ;
  uRam0000000183356050 = uRam0000000183355ed8 ^ uRam0000000183355e30;
  uRam0000000183355e80 = 0x98a2f93e4c172550;
  uVar2 = (uRam0000000183355f80 ^ _UNK_1821ad300) + uRam0000000183355fc8 + 0x84225cda;
  uVar6 = (uRam0000000183355fc8 ^ _UNK_1821ad308) + uRam0000000183355f80 + 0x675d06c1b3e8dab0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183355f80 ^ _UNK_1821ad300;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183355fc8 ^ _UNK_1821ad308;
  uRam0000000183355f08 =
       func_0x00018d2f88e0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183355f80 + 0x675d06c1b3e8dab0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183355fc8 + 0x84225cda));
  uVar2 = (uRam0000000183355f08 ^ 0x675d06c1b3e8ffff) << 0x2b |
          (uRam0000000183355f08 ^ 0x675d06c1b3e8ffff) >> 0x15;
  uRam0000000183355e88 =
       (uRam0000000183355b58 ^ uVar2 ^ 0x675d06c1b3e95aaf ^ uVar2) + 0x675d06c1b3e95aaf ^
       0x58919fb8931a6cf1;
  uRam0000000183355cd0 = (uRam0000000183355cd0 * 0x4d8386b18d05e3e9 ^ uRam0000000183355e88) + uVar2;
  uRam0000000183355ea8 = uRam0000000183355cd0 ^ uRam0000000183355e88;
  uRam0000000183355c28 = 0x675d06c1b3e95aaf;
  uVar2 = (~uRam0000000183355f88 + 0x98a2f93e4c172551) *
          ((uRam0000000183355dc0 ^ 0x675d06c137cb798a) +
          (uRam0000000183355dc0 & 0x675d06c137cb798a) * 2);
  uVar2 = (uVar2 | uRam0000000183355eb0) + (uVar2 & uRam0000000183355eb0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183355cc8 =
       func_0x00018d2f88e0((uVar2 | 0xffffffff7bdc5cda) + (uVar2 & 0xffffffff7bdc5cda));
  uVar2 = uRam0000000183355cc8 >> 1 | uRam0000000183355cc8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183355cc8;
  uRam0000000183355c78 = uRam0000000183355b98 ^ uVar2 ^ 0x7fff;
  uRam0000000183355cf0 = (uRam0000000183355cf0 ^ uVar2) + 0x7fff ^ 0x56629705f9b12803;
  uRam0000000183355f00 = (uRam0000000183355f00 * -0x54eb2479159efef7 ^ uRam0000000183355cf0) + uVar2
  ;
  uRam0000000183355ec8 = uRam0000000183355f00 ^ uRam0000000183355cf0;
  uRam0000000183355d98 = 0x7fff;
  uRam0000000183355c18 = func_0x00018d2f88e0(uRam0000000183355ea0 + 0x62b51db00d221d7b ^ 0xc9);
  uVar2 = uRam0000000183355c18 << 0x2d | uRam0000000183355c18 >> 0x13;
  uRam0000000183355f28 = (uRam0000000183355f28 ^ uVar2) + 0x8382915aabfa69f0 ^ 0x97ab9e52bb993a1c;
  uRam0000000183355fc8 = (uRam0000000183355fc8 * 0x2034657c1a8efebb ^ uRam0000000183355f28) + uVar2;
  uRam0000000183355f60 = uRam0000000183355fc8 ^ uRam0000000183355f28;
  uRam0000000183355e70 = 0x8382915aabfa69f0;
  uVar2 = (~uRam0000000183355ee0 + 0x2a80fae6227c1e89) *
          ((uRam0000000183355ca8 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183355ca8 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam0000000183356060) + (uVar2 & uRam0000000183356060);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183355b58 =
       func_0x00018d2f88e0((uVar2 | 0x2a80fae6a65e3dad) + (uVar2 & 0x2a80fae6a65e3dad));
  uVar2 = uRam0000000183355b58 >> 1 | uRam0000000183355b58;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183355b58;
  uRam0000000183355ec8 = (uRam0000000183355ec8 ^ uVar2) + 0xd57f0519dd83e178 ^ 0x10c81b8b0515ebb9;
  uRam0000000183355ba8 = (uRam0000000183355ba8 * -0x4e212928546b055 ^ uRam0000000183355ec8) + uVar2;
  uRam0000000183355d18 = uRam0000000183355ba8 ^ uRam0000000183355ec8;
  uRam0000000183355e28 = 0xd57f0519dd83e178;
  uVar2 = (uRam0000000183355b30 ^ _UNK_1821ad310) + uRam00000001833560e8 + 0xffbedebf729ddcfb;
  uVar6 = (uRam00000001833560e8 ^ _UNK_1821ad318) + uRam0000000183355b30 + 0x7a4428198e5e6aac;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183355b30 ^ _UNK_1821ad310;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001833560e8 ^ _UNK_1821ad318;
  uRam0000000183355dc0 =
       func_0x00018d2f88e0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183355b30 + 0x7a4428198e5e6aac) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001833560e8 + 0xffbedebf729ddcfb));
  uVar2 = uRam0000000183355dc0 ^ 0xfffefebffefffffe;
  uRam0000000183355cd0 = uRam0000000183355f28 ^ uVar2 ^ 0x7a0306d9851e6a8a;
  uRam0000000183355c50 = (uRam0000000183355c50 ^ uVar2) + 0x7a0306d9851e6a8a ^ 0x68545e0f79062850;
  uRam00000001833560b0 = (uRam00000001833560b0 * -0x6ca0b50511104c9 ^ uRam0000000183355c50) + uVar2;
  uRam0000000183355be0 = uRam00000001833560b0 ^ uRam0000000183355c50;
  uRam0000000183355d88 = 0x7a0306d9851e6a8a;
  uVar2 = (~uRam0000000183355e30 + 0xf40810330c3cd519) *
          ((uRam00000001833560b0 ^ 0x85faf6a6fcc3b657) +
          (uRam00000001833560b0 & 0x5faf6a6fcc3b657) * 2);
  uVar2 = (uVar2 | uRam0000000183355b30) + (uVar2 & uRam0000000183355b30);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183355dd0 =
       func_0x00018d2f88e0((uVar2 | 0x71f2e695f0ff634f) + (uVar2 & 0x71f2e695f0ff634f));
  uVar6 = uRam0000000183355dd0 ^ 0x71f2e69574dd406a;
  uVar2 = uVar6 >> 1 | uVar6;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar6;
  uRam0000000183355c78 = uRam0000000183355fe0 ^ uVar6 ^ 0x7a0306d9851e6a8a;
  uRam0000000183355f60 = (uRam0000000183355f60 ^ uVar6) + 0x7a0306d9851e6a8a ^ 0x60233aa825fe68af;
  uRam00000001833560d8 = (uRam00000001833560d8 * -0x61f066225191d0b3 ^ uRam0000000183355f60) + uVar6
  ;
  uRam0000000183355c48 = uRam00000001833560d8 ^ uRam0000000183355f60;
  uRam0000000183355ce8 = 0x7a0306d9851e6a8a;
  uVar2 = (~uRam0000000183355fd0 + 0x7a0306d9851e6a8b) *
          ((uRam0000000183355d98 ^ 0x7a0306d9013c49af) +
          (uRam0000000183355d98 & 0x7a0306d9013c49af) * 2);
  uVar2 = (uVar2 | uRam0000000183355df0) + (uVar2 & uRam0000000183355df0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183356078 =
       func_0x00018d2f88e0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam0000000183355fd0 = uRam0000000183356078 & 0xffffffffff800000;
  uRam0000000183356058 = uRam0000000183356058 ^ uRam0000000183355fd0 ^ 0xacb4a77444635618;
  uRam0000000183355d50 =
       (uRam0000000183355d50 * -0x5eeeaee2ddbccf0d ^ uRam0000000183356058) + uRam0000000183355fd0;
  uRam0000000183355fc0 = uRam0000000183355d50 ^ uRam0000000183356058;
  uRam0000000183355ce8 = 0;
  uRam0000000183355bd8 = func_0x00018d2f88e0(uRam0000000183356090 + 0x4022be7b03e11dff ^ 0xc1);
  uRam0000000183356068 =
       (uRam0000000183356068 ^ uRam0000000183355bd8 & 0x7fffffffffffffff) + 0x41214009400021 ^
       0x1a11aca07e2e1ab8;
  uRam0000000183355b20 =
       (uRam0000000183355b20 * -0x158fd3b28a235a5f ^ uRam0000000183356068) +
       (uRam0000000183355bd8 & 0x7fffffffffffffff);
  uRam0000000183355c00 = uRam0000000183355b20 ^ uRam0000000183356068;
  uRam0000000183355c88 = 0x41214009400021;
  uVar2 = ((uRam0000000183355b60 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183355b60 & 0x84225cda) * 2) * -lRam0000000183355d30;
  uVar2 = (uVar2 | uRam0000000183356078) + (uVar2 & uRam0000000183356078);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183355ea0 =
       func_0x00018d2f88e0((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uVar2 = uRam0000000183355ea0 & 0xffffffff80000000;
  uRam0000000183355e50 = uRam0000000183355d98 ^ uVar2 ^ 0x7fff;
  uRam0000000183355da8 = (uRam0000000183355da8 ^ uVar2) + 0x7fff ^ 0x3306d37f816b3f58;
  uRam0000000183356050 = (uRam0000000183356050 * -0x191cfa9e531a05bb ^ uRam0000000183355da8) + uVar2
  ;
  uRam0000000183355fc0 = uRam0000000183356050 ^ uRam0000000183355da8;
  uRam0000000183356098 = 0x7fff;
  uVar2 = (~uRam0000000183355d28 + 0xbeaecebe36bdda15) *
          ((uRam0000000183355cd8 ^ 0xbeaecebeb29ff931) +
          (uRam0000000183355cd8 & 0x3eaecebeb29ff931) * 2);
  uVar2 = (uVar2 | uRam0000000183355f40) + (uVar2 & uRam0000000183355f40);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183355c98 =
       func_0x00018d2f88e0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam0000000183355bf8 = uRam0000000183355bf8 ^ uRam0000000183355c98 ^ 0x63064d6dd54b3dcc;
  uRam0000000183355cb8 =
       (uRam0000000183355cb8 * 0x732adcd9ab309c7b ^ uRam0000000183355bf8) + uRam0000000183355c98;
  uRam0000000183355fa0 = uRam0000000183355cb8 ^ uRam0000000183355bf8;
  uRam0000000183355fe0 = 0;
  uRam0000000183355c78 = func_0x00018d2f88e0(uRam0000000183355d98 ^ 0xffb4007bb5ffdd69);
  auVar3 = _UNK_1800170c0;
  uVar2 = (ulonglong)(~(uint)uRam0000000183355c78 & 0x7fff);
  uRam0000000183355f18 = uRam0000000183355be8 ^ uVar2 ^ 0x7fff;
  uRam0000000183356010 = (uRam0000000183356010 ^ uVar2) + 0x7fff ^ 0xc45fc76b3eb60b4c;
  uRam0000000183355eb0 = (uRam0000000183355eb0 * -0x217c3b80b2aef313 ^ uRam0000000183356010) + uVar2
  ;
  uRam0000000183355d70 = uRam0000000183355eb0 ^ uRam0000000183356010;
  uRam0000000183355ee0 = 0x7fff;
  param_4 = param_4 & 0x7fff;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = param_4 ^ 0x84222325;
  auVar4._8_4_ = param_3;
  auVar4._12_4_ = 0;
  auVar5 = pshufb(auVar4 ^ _UNK_1821ad320,_UNK_1800170c0);
  uVar6 = auVar5._8_8_ + auVar5._0_8_;
  uVar2 = uVar6 + uRam0000000183355db8;
  if (auVar5._4_4_ < 0) {
    uVar2 = uRam00000001833560c0 ^ uVar6;
  }
  uRam0000000183355e60 = func_0x00018d2f88e0(SUB161(auVar4 ^ _UNK_1821ad320,5) ^ uVar2);
  uVar2 = uRam0000000183355e60 << 0x20 | (uRam0000000183355e60 & 0x7fffffffffffffff) >> 0x20;
  uVar6 = ((ulonglong)param_4 + (ulonglong)param_3) - (ulonglong)((param_3 & param_4) * 2);
  uRam0000000183355e48 = (uRam0000000183355e48 ^ uVar2) + uVar6 ^ 0xbec3a44bcda9300e;
  uRam00000001833560a0 = (uRam00000001833560a0 * 0x55afda0914a538fb ^ uRam0000000183355e48) + uVar2;
  uRam0000000183355bc8 = uRam00000001833560a0 ^ uRam0000000183355e48;
  uRam0000000183355cb0 = uRam0000000183355e18 ^ uVar6;
  uVar6 = uVar6 & 0xffffffff;
  uVar2 = (uRam0000000183355b40 ^ _UNK_1821ad330) + uRam0000000183355e70 + 0x10305da3;
  uVar7 = (uRam0000000183355e70 ^ _UNK_1821ad338) + uRam0000000183355b40 + 0xdbc4093e;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183355b40 ^ _UNK_1821ad330;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183355e70 ^ _UNK_1821ad338;
  uRam0000000183355e80 = uVar6;
  uRam0000000183355d88 =
       func_0x00018d2f88e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183355b40 + 0xdbc4093e) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183355e70 + 0x10305da3));
  uVar2 = uRam0000000183355d88 * 0x3708098ba8ad550b ^ 0xdbc4093e;
  uRam0000000183355f88 = (uRam0000000183355f88 ^ uVar2) + 0xdfd67fbe ^ 0xee1f699eb2ce8b72;
  uRam0000000183355c18 = (uRam0000000183355c18 * 0xea6f2e6610a947 ^ uRam0000000183355f88) + uVar2;
  uRam0000000183355bb0 = uRam0000000183355c18 ^ uRam0000000183355f88;
  uRam0000000183355e48 = 0xdfd67fbe;
  uRam0000000183355d90 = func_0x00018d2f88e0(uRam0000000183355eb0 ^ 0x17ffeeb900d279);
  uRam0000000183355e00 =
       (uRam0000000183355e00 ^ uRam0000000183355d90) - 0x97ff4b6c ^ 0x476af0a76051df07;
  uRam0000000183355c28 =
       (uRam0000000183355c28 * -0x4df125c011cf83cd ^ uRam0000000183355e00) + uRam0000000183355d90;
  uRam0000000183356080 = uRam0000000183355c28 ^ uRam0000000183355e00;
  uRam0000000183355c68 = 0x6800b494;
  uVar2 = (~uRam0000000183355da8 + 0x97ff4b6d) *
          ((uRam0000000183355f28 ^ 0x8422322a) +
          (ulonglong)((uint)uRam0000000183355f28 & 0x8422322a) * 2);
  uVar2 = (uVar2 | uRam00000001833560e8) + (uVar2 & uRam00000001833560e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833560e8 =
       func_0x00018d2f88e0((uVar2 | 0x13dd7946) + (ulonglong)((uint)uVar2 & 0x13dd7946));
  uVar2 = uRam00000001833560e8 ^ 0xa20dbf79754;
  uRam0000000183355f20 = uRam0000000183355c50 ^ uVar2 ^ 0x97ff5c7b;
  uRam0000000183355fe0 = (uRam0000000183355fe0 ^ uVar2) + 0x97ff5c7b ^ 0x416935e2d938926b;
  uRam0000000183355c58 = (uRam0000000183355c58 * 0x30440f9cc936d143 ^ uRam0000000183355fe0) + uVar2;
  uRam0000000183356020 = uRam0000000183355c58 ^ uRam0000000183355fe0;
  uRam0000000183356010 = 0x97ff5c7b;
  uVar2 = (~uRam00000001833560c0 + 0x6800b495) *
          ((uRam0000000183355d18 ^ 0x13dd7f5e) +
          (ulonglong)((uint)uRam0000000183355d18 & 0x13dd7f5e) * 2);
  uVar2 = (uVar2 | uRam0000000183355c58) + (uVar2 & uRam0000000183355c58);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018d2f88e0((uVar2 | 0x7bddcbca) + (ulonglong)((uint)uVar2 & 0x7bddcbca));
  uVar2 = (uVar2 ^ 0x3dc028c964a7f31c) & 0xfffffffffffffffc;
  uRam0000000183355c80 = uRam0000000183356098 ^ uVar2 ^ 0x10000110f;
  uRam0000000183355f90 = (uRam0000000183355f90 ^ uVar2) + 0x10000110f ^ 0x184e80734ab57c8;
  uRam0000000183355f30 = (uRam0000000183355f30 * -0x462f10507aecb355 ^ uRam0000000183355f90) + uVar2
  ;
  uRam0000000183355b60 = uRam0000000183355f30 ^ uRam0000000183355f90;
  uRam0000000183355fc8 = 0x110f;
  uVar2 = (uRam0000000183356028 ^ _UNK_1821ad340) + uRam0000000183355fb8 + 0x84222325;
  uVar7 = (uRam0000000183355fb8 ^ _UNK_1821ad348) + uRam0000000183356028 + 0x8618e59c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183356028 ^ _UNK_1821ad340;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183355fb8 ^ _UNK_1821ad348;
  uRam0000000183356018 =
       func_0x00018d2f88e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183356028 + 0x8618e59c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183355fb8 + 0x84222325));
  uRam0000000183355c20 = uRam0000000183355c20 - 0x8618e59c ^ 0x1c9d0999e081d24a;
  uRam0000000183355fd0 = uRam0000000183355b00 * 0x23ef64d165741777;
  uRam0000000183355b00 = uRam0000000183355fd0 ^ uRam0000000183355c20;
  uRam0000000183355c00 = 0x79e71a64;
  uVar2 = (~uRam0000000183355b68 + 0x8618e59d) *
          ((uRam0000000183355c60 ^ 0x8422322a) +
          (ulonglong)((uint)uRam0000000183355c60 & 0x8422322a) * 2);
  uVar2 = (uVar2 | uRam0000000183355e50) + (uVar2 & uRam0000000183355e50);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  lRam0000000183355f98 =
       func_0x00018d2f88e0((uVar2 | 0x23ad7b6) + (ulonglong)((uint)uVar2 & 0x23ad7b6));
  uVar2 = (ulonglong)
          (~((uint)(lRam0000000183355f98 << 0xb) | (uint)((ulonglong)lRam0000000183355f98 >> 0x35))
          & 0x110f);
  uRam0000000183355cf0 = uRam0000000183355df8 ^ uVar2 ^ 0x8618f6ab;
  uRam0000000183355ea0 = (uRam0000000183355ea0 ^ uVar2) + 0x8618f6ab ^ 0x5f665a62d6d846ec;
  uRam0000000183355d88 = (uRam0000000183355d88 * 0x30291401938692e1 ^ uRam0000000183355ea0) + uVar2;
  uRam0000000183355f78 = uRam0000000183355d88 ^ uRam0000000183355ea0;
  uRam0000000183355ba0 = 0x8618f6ab;
  uVar2 = (~uRam00000001833560a0 + 0x224fb745) *
          ((uRam0000000183355d70 ^ 0x8422322a) +
          (ulonglong)((uint)uRam0000000183355d70 & 0x8422322a) * 2);
  uVar2 = (uVar2 | uRam0000000183355f70) + (uVar2 & uRam0000000183355f70);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183355b40 =
       func_0x00018d2f88e0((uVar2 | 0xa66d856e) + (ulonglong)((uint)uVar2 & 0xa66d856e));
  uRam0000000183355c98 = uRam0000000183355f60 ^ uRam0000000183355b40 ^ 0x224fc853;
  uRam0000000183355f28 =
       (uRam0000000183355f28 ^ uRam0000000183355b40) + 0x224fc853 ^ 0x6d93ff0a7bf6b63d;
  uRam0000000183355c38 =
       (uRam0000000183355c38 * 0x224b9462b93fef7 ^ uRam0000000183355f28) + uRam0000000183355b40;
  uRam0000000183356020 = uRam0000000183355c38 ^ uRam0000000183355f28;
  uRam0000000183355e08 = 0x224fc853;
  uVar2 = (uRam0000000183355d98 ^ _UNK_1821ad350) + uRam00000001833560d0 + 0xa66deb76;
  uVar7 = (uRam00000001833560d0 ^ _UNK_1821ad358) + uRam0000000183355d98 + 0xddb048bc;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183355d98 ^ _UNK_1821ad350;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833560d0 ^ _UNK_1821ad358;
  uRam0000000183355fa8 =
       func_0x00018d2f88e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183355d98 + 0xddb048bc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833560d0 + 0xa66deb76));
  uVar2 = ((uRam0000000183355fa8 ^ 0xffffc8ff) << 0x2f | (uRam0000000183355fa8 ^ 0xffffc8ff) >> 0x11
          ) ^ 0xddb048bc;
  uRam0000000183355cb0 = (uRam0000000183355cb0 ^ uVar2) + 0x10000110f ^ 0x783688c9fdfbb860;
  uRam0000000183355e70 = (uRam0000000183355e70 * 0x7cafdd295cb8d85 ^ uRam0000000183355cb0) + uVar2;
  uRam0000000183355d28 = uRam0000000183355e70 ^ uRam0000000183355cb0;
  uRam0000000183355d08 = 0x110f;
  uRam0000000183355b08 = func_0x00018d2f88e0(uRam0000000183355d28 ^ 0x79ffd0c0fffbaa);
  uVar2 = (uRam0000000183355b08 ^ 0x6bf8da58) & 0x7fffffffffffffff;
  uRam0000000183355f20 = uRam0000000183355b30 ^ uVar2 ^ 0x14bcf5a16;
  uRam0000000183355c60 = (uRam0000000183355c60 ^ uVar2) + 0x14bcf5a16 ^ 0xc8e790420b8666b4;
  uRam0000000183355d48 = (uRam0000000183355d48 * -0x71663fccb3093ab5 ^ uRam0000000183355c60) + uVar2
  ;
  uRam0000000183355bd0 = uRam0000000183355d48 ^ uRam0000000183355c60;
  uRam0000000183356050 = 0x4bcf5a16;
  uRam0000000183355df8 = func_0x00018d2f88e0(uRam0000000183355fa8 ^ 0x85ffd0c3000bb7);
  uRam0000000183355fb0 =
       (uRam0000000183355fb0 ^ uRam0000000183355e38 & 0x7fffffffffffffff) + 0xb42ea5e6 ^
       0x6fee9175637061ea;
  uRam0000000183355f40 =
       (uRam0000000183355f40 * -0x1083fd3421f89ecf ^ uRam0000000183355fb0) +
       (uRam0000000183355e38 & 0x7fffffffffffffff);
  uRam0000000183355f08 = uRam0000000183355f40 ^ uRam0000000183355fb0;
  uRam0000000183355c38 = 0xb42ea5e6;
  uVar2 = (uRam0000000183355c68 ^ _UNK_1821ad360) + uRam0000000183355c50 + 0x300c86c3;
  uVar7 = (uRam0000000183355c50 ^ _UNK_1821ad368) + uRam0000000183355c68 + 0x97a0b430;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183355c68 ^ _UNK_1821ad360;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183355c50 ^ _UNK_1821ad368;
  uRam0000000183355cb0 =
       func_0x00018d2f88e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183355c68 + 0x97a0b430) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183355c50 + 0x300c86c3));
  uVar2 = (ulonglong)(~(uint)((uRam0000000183355cb0 ^ 0x909087000000) >> 0x12) & 0xb42ea5e6);
  uRam0000000183355db8 = uRam0000000183355ba8 ^ uVar2 ^ 0x14bcf5a16;
  uRam0000000183355c10 = (uRam0000000183355c10 ^ uVar2) + 0x14bcf5a16 ^ 0xbed1612572bfc2ae;
  uRam0000000183355f48 = (uRam0000000183355f48 * -0x16b152304531ecc7 ^ uRam0000000183355c10) + uVar2
  ;
  uRam00000001833560b0 = uRam0000000183355f48 ^ uRam0000000183355c10;
  uRam0000000183355c70 = 0x4bcf5a16;
  uVar2 = (~uRam0000000183355e98 + 0x4bcf5a17) *
          ((uRam0000000183355b00 ^ 0xcfed7933) +
          (ulonglong)((uint)uRam0000000183355b00 & 0xcfed7933) * 2);
  uVar2 = (uVar2 | uRam0000000183355ec0) + (uVar2 & uRam0000000183355ec0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183355d60 =
       func_0x00018d2f88e0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uRam0000000183355fe8 = uRam0000000183355d60 ^ 0x4bcf5a16;
  uRam0000000183356070 = uRam0000000183356070 ^ uRam0000000183355fe8 ^ 0xf0650e42fad4f0cf;
  uRam0000000183355e38 =
       (uRam0000000183355e38 * -0x37192532023521f5 ^ uRam0000000183356070) + uRam0000000183355fe8;
  uRam0000000183355d28 = uRam0000000183355e38 ^ uRam0000000183356070;
  uRam0000000183356088 = 0;
  uRam0000000183355d40 = func_0x00018d2f88e0(uRam0000000183356090 ^ 0xffce00842a002103);
  uVar2 = uRam0000000183355d40 & 0x3fffffffffffffff;
  uRam0000000183355ba8 = uRam0000000183355cc0 ^ uVar2 ^ 0x110f;
  uRam0000000183355dd8 = (uRam0000000183355dd8 ^ uVar2) + 0x110f ^ 0xfec654eb39b0dbd;
  uRam0000000183355da0 = (uRam0000000183355da0 * 0x7358fcc35887c26f ^ uRam0000000183355dd8) + uVar2;
  uRam0000000183355b90 = uRam0000000183355da0 ^ uRam0000000183355dd8;
  uRam0000000183355d50 = 0x110f;
  uVar2 = (uRam0000000183355bb8 ^ _UNK_1821ad370) + uRam0000000183355ec0 + 0x5bf45c9b;
  uVar7 = (uRam0000000183355ec0 ^ _UNK_1821ad378) + uRam0000000183355bb8 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183355bb8 ^ _UNK_1821ad370;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183355ec0 ^ _UNK_1821ad378;
  uRam0000000183355c60 =
       func_0x00018d2f88e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183355bb8 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183355ec0 + 0x5bf45c9b));
  uVar2 = uRam0000000183355c60 - (uRam0000000183355c60 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183355c60;
  uRam0000000183355e40 = (uRam0000000183355e40 ^ uVar2) + 0x20298041 ^ 0x9f1bd72a4392117e;
  uRam0000000183355e80 = (uRam0000000183355e80 * -0x20b630385bde6c67 ^ uRam0000000183355e40) + uVar2
  ;
  uRam0000000183355cd0 = uRam0000000183355e80 ^ uRam0000000183355e40;
  uRam0000000183355c00 = 0x20298041;
  uVar2 = (~uRam0000000183355eb8 + 0x20298042) *
          ((uRam0000000183355e00 ^ 0x5bf45c9b) +
          (ulonglong)((uint)uRam0000000183355e00 & 0x5bf45c9b) * 2);
  uVar2 = (uVar2 | uRam0000000183355e40) + (uVar2 & uRam0000000183355e40);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam0000000183355e68 =
       func_0x00018d2f88e0((uVar2 | 0x7bdddcda) + (ulonglong)((uint)uVar2 & 0x7bdddcda));
  uVar2 = (uRam0000000183355e68 << 8 | uRam0000000183355e68 >> 0x38) ^ 0x20298041;
  uRam0000000183355fd0 = uRam0000000183355fd0 ^ uVar2 ^ 0x1661ae01e4d93c07;
  uRam0000000183355ca8 = (uRam0000000183355ca8 * 0x10584d9681a4084d ^ uRam0000000183355fd0) + uVar2;
  uRam0000000183355cf8 = uRam0000000183355ca8 ^ uRam0000000183355fd0;
  uRam0000000183355f20 = 0;
  uVar2 = (uRam0000000183356078 ^ _UNK_1821ad380) + uRam0000000183355d18 + 0x10305da3;
  uVar7 = (uRam0000000183355d18 ^ _UNK_1821ad388) + uRam0000000183356078 + 0x94127e86;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183356078 ^ _UNK_1821ad380;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183355d18 ^ _UNK_1821ad388;
  uRam0000000183355cb0 =
       func_0x00018d2f88e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183356078 + 0x94127e86) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183355d18 + 0x10305da3));
  uVar2 = uRam0000000183355cb0 - (uRam0000000183355cb0 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183355cb0;
  uRam0000000183355d40 = uRam0000000183355d40 ^ uVar2 ^ 0x7a318aa65a1b1bfd;
  uRam0000000183356038 = (uRam0000000183356038 * -0xbf12411199bebcf ^ uRam0000000183355d40) + uVar2;
  uRam0000000183355c78 = uRam0000000183356038 ^ uRam0000000183355d40;
  uRam0000000183355ba8 = 0;
  uVar2 = (uRam0000000183355f40 ^ 0x8422322a) + uRam0000000183356048 + 0x8422322a;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183355f40 ^ 0x8422322a;
  uVar7 = ((uRam0000000183356048 + uRam0000000183355f40) * 0x2000 |
          uRam0000000183356048 + uRam0000000183355f40 >> 0x33) ^ uRam0000000183356048;
  uRam0000000183355eb8 =
       func_0x00018d2f88e0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183355f40 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183356048 + 0x8422322a));
  uVar2 = uRam0000000183355eb8 ^ 0x110f;
  uRam0000000183356000 = uRam0000000183355d70 ^ uVar2 ^ 0x110f;
  uRam0000000183356030 = (uRam0000000183356030 ^ uVar2) + 0x110f ^ 0xc2bc49c8ae0006c6;
  uRam0000000183355f90 = (uRam0000000183355f90 * 0x1938df8e6e55306d ^ uRam0000000183356030) + uVar2;
  uRam0000000183355ee8 = uRam0000000183355f90 ^ uRam0000000183356030;
  auVar5._8_8_ = _UNK_1821ad398;
  auVar5._0_8_ = uVar6 ^ 0x84222325;
  uRam0000000183355ce0 = 0x110f;
  auVar3 = pshufb(auVar5 ^ _UNK_1821ad3a0,auVar3);
  uVar7 = auVar3._8_8_ + auVar3._0_8_;
  uVar2 = uVar7 + uRam0000000183356000;
  if (auVar3._4_4_ < 0) {
    uVar2 = uRam0000000183355e00 ^ uVar7;
  }
  uRam0000000183355e48 = func_0x00018d2f88e0(SUB161(auVar5 ^ _UNK_1821ad3a0,5) ^ uVar2);
  uRam0000000183355ca0 = uVar6 ^ 0x110f;
  uRam0000000183355c40 =
       (uRam0000000183355c40 ^ uRam0000000183355e48 ^ 0x110f) + uRam0000000183355ca0 ^
       0xe8c188949be4b45b;
  uRam0000000183356008 =
       (uRam0000000183356008 * -0x7b7b3fa4a3f9a9e7 ^ uRam0000000183355c40) +
       (uRam0000000183355e48 ^ 0x110f);
  uRam0000000183355bb0 = uRam0000000183356008 ^ uRam0000000183355c40;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcad0,0x226);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d2efac6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821ab4a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eh; asC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d2f8970, runtime 6ffff4f08970) =====

void FUN_18d2f8970(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d2f89bb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821ad530 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eh; asD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d2f9980, runtime 6ffff4f09980) =====

void FUN_18d2f9980(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d2f9a09 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821adaf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eh; asy (Lsixtwo/gH$th;)V (handler @ image 18d2bc900, runtime 6ffff4ecc900) =====

void FUN_18d2bc900(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcad0,0x226);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d2bc9ca did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821a3040 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eh; asz (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d2c3390, runtime 6ffff4ed3390) =====

undefined8 FUN_18d2c3390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



