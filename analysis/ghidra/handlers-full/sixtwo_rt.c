// ===== Lsixtwo/rt; _f4bb39b5bf2a33da5cfc3be794738bcc ()V (handler @ image 1847eade0, runtime 6fffec3fade0) =====

void FUN_1847eade0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001847eaebc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180237100 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rt; djA (Ljava/lang/Exception;)Ljava/lang/Exception; (handler @ image 18484f940, runtime 6fffec45f940) =====

undefined8 FUN_18484f940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/rt; djB ([B)Ljava/lang/String; (handler @ image 18484f9d0, runtime 6fffec45f9d0) =====

void FUN_18484f9d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018484fa73 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180250f90 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/rt; djC (IJ)Ljava/lang/String; (handler @ image 184878d10, runtime 6fffec488d10) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184878d10(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar8 = (uRam00000001830800e0 ^ _UNK_180257d40) + uRam000000018307f958 + 0xe618f6eed5836baa;
  uVar10 = (uRam000000018307f958 ^ _UNK_180257d48) + uRam00000001830800e0 + 0x54c595e0422db14e;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830800e0 ^ _UNK_180257d40;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018307f958 ^ _UNK_180257d48;
  uRam000000018307fe98 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001830800e0 + 0x54c595e0422db14e) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018307f958 + 0xe618f6eed5836baa));
  uRam000000018307f9d8 =
       (uRam000000018307f9d8 ^ uRam000000018307fe98) + 0xf6ddf7ee53adf9cf ^ 0x13ab9481355f9758;
  uRam000000018307fcc8 =
       (uRam000000018307fcc8 * 0x6492706aedf4caff ^ uRam000000018307f9d8) + uRam000000018307fe98;
  uRam000000018307ff88 = uRam000000018307fcc8 ^ uRam000000018307f9d8;
  uRam0000000183080018 = 0xf6ddf7ee53adf9cf;
  uVar8 = (uRam000000018307f9a8 ^ _UNK_180257d50) + uRam000000018307fc48 + 0x26fec411cc8e972d;
  uVar10 = (uRam000000018307fc48 ^ _UNK_180257d58) + uRam000000018307f9a8 + 0x49933456b4433fce;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307f9a8 ^ _UNK_180257d50;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018307fc48 ^ _UNK_180257d58;
  uRam000000018307fcb8 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018307f9a8 + 0x49933456b4433fce) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018307fc48 + 0x26fec411cc8e972d));
  uVar8 = uRam000000018307fcb8 >> 1 | uRam000000018307fcb8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018307fcb8;
  uVar8 = uVar8 << 0x33 | uVar8 >> 0xd;
  uRam000000018307fd30 = (uRam000000018307fd30 ^ uVar8) + 0x6f6df047fcef8bc6 ^ 0x3c86d88333e3d4b9;
  uRam000000018307fdb8 = (uRam000000018307fdb8 * -0x204c05969512320b ^ uRam000000018307fd30) + uVar8
  ;
  uRam00000001830800d8 = uRam000000018307fdb8 ^ uRam000000018307fd30;
  uRam000000018307f9a8 = 0x6f6df047fcef8bc6;
  uVar8 = (~uRam000000018307fbe0 + 0xefb36d6fe20288f3) *
          ((uRam000000018307fe18 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018307fe18 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018307ff58) + (uVar8 & uRam000000018307ff58);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  lRam000000018307fe30 =
       func_0x00018487fb90((uVar8 | 0xefb36d6f6620abd7) + (uVar8 & 0xefb36d6f6620abd7));
  uVar10 = lRam000000018307fe30 * 0x7ac080ea3776b815;
  uVar8 = uVar10 >> 1 | uVar10;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
           uVar10;
  uRam000000018307f9e0 = (uRam000000018307f9e0 ^ uVar10) + 0x104c92901dfd770e ^ 0x9dde825d8a865bc6;
  uRam000000018307fd20 = (uRam000000018307fd20 * 0x4411d4fb3883522d ^ uRam000000018307f9e0) + uVar10
  ;
  uRam000000018307fc28 = uRam000000018307fd20 ^ uRam000000018307f9e0;
  uRam000000018307fe20 = 0x104c92901dfd770e;
  uVar8 = (~uRam000000018307fc30 + 0xefb36d6fe20288f3) *
          ((uRam000000018307ff28 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018307ff28 & 0x84225cda) * 2);
  uVar8 = (uVar8 | uRam000000018307f9a0) + (uVar8 & uRam000000018307f9a0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018307fa20 =
       func_0x00018487fb90((uVar8 | 0xefb36d6f6620d428) + (uVar8 & 0xefb36d6f6620d428));
  uVar10 = uRam000000018307fa20 ^ 0xc70483916276770e;
  uVar8 = uVar10 >> 1 | uVar10;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar10;
  uRam000000018307fa18 = uRam000000018307f9f0 ^ uVar10 ^ 0xefb36d6fe20308f1;
  uRam000000018307fb48 = (uRam000000018307fb48 ^ uVar10) + 0xefb36d6fe20308f1 ^ 0x84e479ccf4be22d0;
  uRam000000018307fda0 =
       (uRam000000018307fda0 * -0x2b5f5e5deb7e5405 ^ uRam000000018307fb48) + uVar10;
  uRam000000018307f9a8 = uRam000000018307fda0 ^ uRam000000018307fb48;
  uRam000000018307fac0 = 0xefb36d6fe20308f1;
  uVar8 = (uRam000000018307fa38 ^ _UNK_180257d60) + uRam000000018307fcf8 + 0xefb36d6f66212bd4;
  uVar10 = (uRam000000018307fcf8 ^ _UNK_180257d68) + uRam000000018307fa38 + 0x104c92901dfd770e;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fa38 ^ _UNK_180257d60;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018307fcf8 ^ _UNK_180257d68;
  uRam000000018307fc48 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018307fa38 + 0x104c92901dfd770e) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018307fcf8 + 0xefb36d6f66212bd4));
  uVar8 = uRam000000018307fc48 ^ 0xffffffffffff7fff;
  uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8;
  uRam000000018307fb98 = uRam000000018307ff80 ^ uVar8 ^ 0x7fff;
  uRam000000018307ffe0 = (uRam000000018307ffe0 ^ uVar8) + 0x7fff ^ 0xeeced91ce32b3353;
  uRam000000018307ff08 = (uRam000000018307ff08 * -0x3bef678e553082b9 ^ uRam000000018307ffe0) + uVar8
  ;
  uRam000000018307f9f8 = uRam000000018307ff08 ^ uRam000000018307ffe0;
  uRam000000018307ff10 = 0x7fff;
  uRam000000018307fcf0 = func_0x00018487fb90(lRam000000018307fc90 + 0x103c1accda45869fU ^ 0x25);
  uRam0000000183080048 =
       (uRam0000000183080048 ^ uRam000000018307fcf0 & 0xffffffffffff0000) + 0x1f943aef2e449900 ^
       0x95ed67cf400b54ff;
  uRam000000018307ff30 =
       (uRam000000018307ff30 * 0x45c131f917dba79f ^ uRam0000000183080048) +
       (uRam000000018307fcf0 & 0xffffffffffff0000);
  uRam000000018307fc78 = uRam000000018307ff30 ^ uRam0000000183080048;
  uRam000000018307fd70 = 0x1f943aef2e449900;
  uRam0000000183080040 = func_0x00018487fb90(uRam000000018307ff38 ^ 0xefc558aacac58872);
  uRam0000000183080030 = uRam000000018307fb10 ^ uRam0000000183080040 ^ 0xe06bc510d1bbe6ff;
  uRam0000000183080090 =
       (uRam0000000183080090 ^ uRam0000000183080040) + 0xe06bc510d1bbe6ff ^ 0x48bc28d6992305cb;
  uRam000000018307fa50 =
       (uRam000000018307fa50 * 0x37180412b145d48d ^ uRam0000000183080090) + uRam0000000183080040;
  uRam000000018307fcd8 = uRam000000018307fa50 ^ uRam0000000183080090;
  uRam000000018307fe68 = 0xe06bc510d1bbe6ff;
  uRam000000018307fa80 = func_0x00018487fb90(uRam000000018307faa8 ^ 0xb34bb14c6d75a0f);
  uVar8 = uRam000000018307fa80 ^ 0x941cf4d57aca6700;
  uRam000000018307fc30 = uRam000000018307ff50 ^ uVar8 ^ 0x7fff;
  uRam000000018307ff38 = (uRam000000018307ff38 ^ uVar8) + 0x7fff ^ 0xadba76c74e896b82;
  uRam000000018307fde8 = (uRam000000018307fde8 * 0xc2dec33dbb9376d ^ uRam000000018307ff38) + uVar8;
  uRam000000018307f940 = uRam000000018307fde8 ^ uRam000000018307ff38;
  uRam000000018307fcb0 = 0x7fff;
  uVar8 = (uRam000000018307f968 ^ _UNK_180257d70) + uRam00000001830800f8 + 0x84222325;
  uVar10 = (uRam00000001830800f8 ^ _UNK_180257d78) + uRam000000018307f968 + 0x3d57375573c3ad88;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307f968 ^ _UNK_180257d70;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001830800f8 ^ _UNK_180257d78;
  uRam000000018307ffc0 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018307f968 + 0x3d57375573c3ad88) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830800f8 + 0x84222325));
  uVar8 = uRam000000018307ffc0 << 9 | uRam000000018307ffc0 >> 0x37;
  uRam000000018307fc50 = (uRam000000018307fc50 ^ uVar8) + 0xc2a8c8aa8c3c5278 ^ 0x3716fa3606fc41e;
  uRam000000018307fea0 = (uRam000000018307fea0 * 0x6130aee66afe1e69 ^ uRam000000018307fc50) + uVar8;
  uRam000000018307fa30 = uRam000000018307fea0 ^ uRam000000018307fc50;
  lRam0000000183080098 = -0x3d57375573c3ad88;
  uVar8 = (~uRam000000018307fa40 + 0x6f6df047fcef8bc7) *
          ((uRam00000001830800c0 ^ 0xf6ddf7eed78fdaea) +
          (uRam00000001830800c0 & 0x76ddf7eed78fdaea) * 2);
  uVar8 = (uVar8 | uRam000000018307f998) + (uVar8 & uRam000000018307f998);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018307fa40 =
       func_0x00018487fb90((uVar8 | 0x99b007a92b60512c) + (uVar8 & 0x99b007a92b60512c));
  uVar8 = (uRam000000018307fa40 ^ 0xfffdf7efe0000000) & 0xffffffffe0000000;
  uRam000000018307f930 = uRam000000018307fac0 ^ uVar8 ^ 0x664be836509d8595;
  uRam0000000183080020 = (uRam0000000183080020 ^ uVar8) + 0x664be836509d8595 ^ 0x1971c79f058c6308;
  uRam000000018307fae0 = (uRam000000018307fae0 * 0xe6bce51b537aca9 ^ uRam0000000183080020) + uVar8;
  uRam000000018307fcd8 = uRam000000018307fae0 ^ uRam0000000183080020;
  uRam000000018307fd18 = 0x664be836509d8595;
  uVar8 = (uRam000000018307fae8 ^ _UNK_180257d80) + uRam000000018307ff18 + 0xf6ddf7eed78fdaea;
  uVar10 = (uRam000000018307ff18 ^ _UNK_180257d88) + uRam000000018307fae8 + 0x6f6df047fcef8bc6;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fae8 ^ _UNK_180257d80;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018307ff18 ^ _UNK_180257d88;
  uRam000000018307fdf0 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018307fae8 + 0x6f6df047fcef8bc6) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018307ff18 + 0xf6ddf7eed78fdaea));
  uRam000000018307f9b8 =
       (uRam000000018307f9b8 ^ uRam000000018307fdf0) + 0x99b007a9af427209 ^ 0x28f4d2a8e6ef04b;
  uRam000000018307fec0 =
       (uRam000000018307fec0 * -0x7a42e4448af47963 ^ uRam000000018307f9b8) + uRam000000018307fdf0;
  uRam000000018307f910 = uRam000000018307fec0 ^ uRam000000018307f9b8;
  uRam000000018307fbf0 = 0x99b007a9af427209;
  uRam000000018307fb60 = func_0x00018487fb90(uRam000000018307ff28 ^ 0x56d14fe4d402a083);
  uRam000000018307fd68 =
       (uRam000000018307fd68 ^ ~uRam000000018307fb60 & 0xf6ddf7ee53adf9cf) + 0x664df04650ad89c6 ^
       0xc85abc7a1f7fc6d3;
  uRam000000018307fd38 =
       (uRam000000018307fd38 * 0xaf21d5c36f58ef1 ^ uRam000000018307fd68) +
       (~uRam000000018307fb60 & 0xf6ddf7ee53adf9cf);
  uRam000000018307f9b8 = uRam000000018307fd38 ^ uRam000000018307fd68;
  uRam0000000183080030 = 0x664df04650ad89c6;
  uVar8 = (~uRam000000018307ff68 + 0xcc9be08ca15b138d) *
          ((uRam000000018307fad8 ^ 0x99b007a92b60512c) +
          (uRam000000018307fad8 & 0x19b007a92b60512c) * 2);
  uVar8 = (uVar8 | uRam0000000183080020) + (uVar8 & uRam0000000183080020);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018307fc38 =
       func_0x00018487fb90((uVar8 | 0x552be7258a3b42a0) + (uVar8 & 0x552be7258a3b42a0));
  uVar8 = ~(uRam000000018307fc38 & 0x7fffffffffffffff) & 0x99b007a9af427209;
  uRam000000018307fa48 = uRam0000000183080068 ^ uVar8 ^ 0x664be836509d8595;
  uRam000000018307fed8 = (uRam000000018307fed8 ^ uVar8) + 0x664be836509d8595 ^ 0x80ae2beb6343e15d;
  uRam0000000183080060 = (uRam0000000183080060 * -0x373078543e6cd31 ^ uRam000000018307fed8) + uVar8;
  uRam000000018307fe28 = uRam0000000183080060 ^ uRam000000018307fed8;
  uRam000000018307ffa8 = 0x664be836509d8595;
  uVar8 = (uRam000000018307fa78 ^ 0x84225cda) + uRam000000018307fcf8 + 0x84225cda;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fa78 ^ 0x84225cda;
  uVar10 = ((uRam000000018307fcf8 + uRam000000018307fa78) * 0x2000 |
           uRam000000018307fcf8 + uRam000000018307fa78 >> 0x33) ^ uRam000000018307fcf8;
  uRam000000018307fd10 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) - uRam000000018307fa78 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018307fcf8 + 0x84225cda));
  uVar8 = uRam000000018307fd10 << 0x17 | uRam000000018307fd10 >> 0x29;
  uRam000000018307ff00 = uRam000000018307fb60 ^ uVar8 ^ 0x7fff;
  uRam000000018307fa98 = (uRam000000018307fa98 ^ uVar8) + 0x7fff ^ 0xc9a740b0105721fb;
  uRam000000018307fa50 = (uRam000000018307fa50 * -0x5b35c47ff8d6107b ^ uRam000000018307fa98) + uVar8
  ;
  uRam0000000183080018 = uRam000000018307fa50 ^ uRam000000018307fa98;
  uRam000000018307fb98 = 0x7fff;
  uVar8 = (uRam000000018307fbe8 ^ _UNK_180257d90) + uRam00000001830800b0 + 0xf6ddf7eed78fdaea;
  uVar10 = (uRam00000001830800b0 ^ _UNK_180257d98) + (uRam000000018307fbe8 - 1);
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fbe8 ^ _UNK_180257d90;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001830800b0 ^ _UNK_180257d98;
  uRam00000001830800f0 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018307fbe8 - 1) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001830800b0 + 0xf6ddf7eed78fdaea));
  uRam00000001830800d8 =
       (uRam00000001830800d8 ^ uRam00000001830800f0) + 0x9220811ac520630 ^ 0x73cf8c20dec8fc22;
  uRam000000018307fb10 =
       (uRam000000018307fb10 * -0x7547bcf1231e7097 ^ uRam00000001830800d8) + uRam00000001830800f0;
  uRam000000018307fde8 = uRam000000018307fb10 ^ uRam00000001830800d8;
  uRam000000018307fc80 = 0x9220811ac520630;
  uRam000000018307fc88 = func_0x00018487fb90(lRam0000000183080098 + 0x22bc034945fbb55cU ^ 0x7d);
  uRam0000000183080060 = uRam0000000183080060 ^ uRam000000018307fc88 ^ 0x6f3450e7e890c210;
  uRam000000018307fbc8 =
       (uRam000000018307fbc8 * 0xacdaf40261c5c39 ^ uRam0000000183080060) + uRam000000018307fc88;
  uRam000000018307f990 = uRam000000018307fbc8 ^ uRam0000000183080060;
  uRam0000000183080018 = 0;
  uRam000000018307fc18 = func_0x00018487fb90(uRam000000018307fcd8 + 0xffc4007ca6001dff ^ 0xd8);
  uVar8 = uRam000000018307fc18 - (uRam000000018307fc18 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018307fc18;
  uRam000000018307f970 = uRam000000018307f928 ^ uVar8 ^ 0x7fff;
  uRam000000018307fa88 = (uRam000000018307fa88 ^ uVar8) + 0x7fff ^ 0x8e723867d82621f0;
  uRam000000018307fea8 = (uRam000000018307fea8 * -0x1eff0adb23ef8d6d ^ uRam000000018307fa88) + uVar8
  ;
  uRam00000001830800d0 = uRam000000018307fea8 ^ uRam000000018307fa88;
  uRam000000018307fa60 = 0x7fff;
  uVar8 = (uRam000000018307fb48 ^ _UNK_180257da0) + uRam000000018307fc28 + 0xe618f6eed5836baa;
  uVar10 = (uRam000000018307fc28 ^ _UNK_180257da8) + uRam000000018307fb48 + 0xe618f6ee51a1488f;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fb48 ^ _UNK_180257da0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018307fc28 ^ _UNK_180257da8;
  uRam000000018307fe60 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam000000018307fb48 + 0xe618f6ee51a1488f) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018307fc28 + 0xe618f6eed5836baa));
  uVar8 = ~uRam000000018307fe60 & 0xe618f6ee51a1488f | 0xe618f6ec00000000;
  uRam000000018307f9a0 = uRam000000018307f9a0 ^ uVar8 ^ 0x51b07d042540a120;
  uRam000000018307fb20 = (uRam000000018307fb20 * -0x7f1615164109dc9f ^ uRam000000018307f9a0) + uVar8
  ;
  uRam000000018307fc88 = uRam000000018307fb20 ^ uRam000000018307f9a0;
  uRam000000018307fca8 = 0;
  uVar8 = ((uRam000000018307f9d0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018307f9d0 & 0x84225cda) * 2) * -lRam000000018307fb40;
  uVar8 = (uVar8 | uRam000000018307fac8) + (uVar8 & uRam000000018307fac8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018307fb50 =
       func_0x00018487fb90((uVar8 | 0x84225cda) + (ulonglong)((uint)uVar8 & 0x84225cda));
  auVar7 = _UNK_1800170c0;
  uVar8 = uRam000000018307fb50 & 0x7fffffffffffffff;
  uRam000000018307fc70 = uRam000000018307fd00 ^ uVar8 ^ 0x7fff;
  uRam0000000183080068 = (uRam0000000183080068 ^ uVar8) + 0x7fff ^ 0xc4185a673c5fa70a;
  uRam000000018307fb78 = (uRam000000018307fb78 * 0x77997e69a0969049 ^ uRam0000000183080068) + uVar8;
  uRam000000018307fab8 = uRam000000018307fb78 ^ uRam0000000183080068;
  uRam000000018307fbc0 = uRam000000018307fe98 ^ 0x7fff;
  auVar5._8_8_ = _UNK_18019c088;
  auVar5._0_8_ = param_4 ^ 0x84222325;
  uRam000000018307fa20 = 0x7fff;
  auVar6 = pshufb(auVar5 ^ _UNK_180257db0,_UNK_1800170c0);
  uVar10 = auVar6._8_8_ + auVar6._0_8_;
  uVar8 = uVar10 + uRam0000000183080028;
  if (auVar6._4_4_ < 0) {
    uVar8 = uRam000000018307fea8 ^ uVar10;
  }
  uRam000000018307fce0 = func_0x00018487fb90(SUB161(auVar5 ^ _UNK_180257db0,5) ^ uVar8);
  uVar2 = (uint)param_4 & 0x7fff;
  uVar10 = (ulonglong)uVar2;
  uRam00000001830800d0 =
       (uRam00000001830800d0 ^ param_4 ^ uRam000000018307fce0) + uVar10 ^ 0x7d5b75325a178e4c;
  uRam000000018307faa8 =
       (uRam000000018307faa8 * -0x73a14c74d253e84f ^ uRam00000001830800d0) +
       (param_4 ^ uRam000000018307fce0);
  uRam000000018307ff88 = uRam000000018307faa8 ^ uRam00000001830800d0;
  uRam000000018307fe40 = uRam000000018307ff48 ^ uVar10;
  uVar3 = (ulonglong)param_3;
  uVar8 = uVar10 ^ 0x84222325 ^ uRam000000018307f9e8;
  lVar4 = (uVar10 ^ 0x84222325) + uRam000000018307fdc8;
  uVar9 = uVar8 + lVar4;
  uVar11 = (uVar3 ^ uRam000000018307fdc8) + uRam000000018307f9e8 + uVar3;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uVar9 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar3 ^ uRam000000018307fdc8;
  uRam000000018307fa80 = uVar10;
  uRam000000018307fe70 =
       func_0x00018487fb90((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam000000018307f9e8 + uVar3) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar4);
  uVar8 = (uVar2 | param_3) ^ uRam000000018307fe70;
  uVar8 = ((uVar8 << 0x3d | uVar8 >> 3) >> 10 | (uVar8 >> 3) << 0x36) * -0x44477c3cdf8acc2b;
  uVar3 = (uVar10 + uVar3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam000000018307ff40 = (uRam000000018307ff40 ^ uVar8) + uVar3 ^ 0xe31c1f9076745a8;
  uRam000000018307f910 = (uRam000000018307f910 * -0x79191fef773c3a07 ^ uRam000000018307ff40) + uVar8
  ;
  uRam000000018307fd78 = uRam000000018307f910 ^ uRam000000018307ff40;
  uVar3 = uVar3 & 0xffffffff;
  uVar8 = (uRam000000018307fb30 ^ _UNK_180257dc0) + uRam000000018307fc10 + 0xb0157ac9;
  uVar10 = (uRam000000018307fc10 ^ _UNK_180257dc8) + uRam000000018307fb30 + 0x5eccef33;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fb30 ^ _UNK_180257dc0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018307fc10 ^ _UNK_180257dc8;
  uRam000000018307fb10 = uVar3;
  uRam000000018307fd90 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018307fb30 + 0x5eccef33) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018307fc10 + 0xb0157ac9));
  uVar8 = (uRam000000018307fd90 & 0x1ffff) << 0x28 | uRam000000018307fd90 >> 0x18;
  uRam000000018307ff20 = (uRam000000018307ff20 ^ uVar8) + 0x7effffff ^ 0x37d67246ef061c6;
  uRam000000018307ffd0 = (uRam000000018307ffd0 * 0x7178becb789ba339 ^ uRam000000018307ff20) + uVar8;
  uRam000000018307fba8 = uRam000000018307ffd0 ^ uRam000000018307ff20;
  uRam000000018307ffd8 = 0x7effffff;
  uRam000000018307fae8 = func_0x00018487fb90(lRam000000018307fc60 + 0x400254dff70ffU ^ 0x9e);
  uRam000000018307ffb8 =
       (uRam000000018307ffb8 ^ uRam000000018307fae8) + 0x6eb33ff3 ^ 0x8062a5ccdc8f3065;
  uRam000000018307ff20 =
       (uRam000000018307ff20 * -0x312770d1cabc8caf ^ uRam000000018307ffb8) + uRam000000018307fae8;
  uRam000000018307fe48 = uRam000000018307ff20 ^ uRam000000018307ffb8;
  uRam000000018307fcb8 = 0x6eb33ff3;
  uVar8 = (~uRam000000018307f9e0 + 0x10cc6491) *
          ((uRam000000018307fac0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018307fac0 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018307fb38) + (uVar8 & uRam000000018307fb38);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018307ffc0 =
       func_0x00018487fb90((uVar8 | 0x94ee47b5) + (ulonglong)((uint)uVar8 & 0x94ee47b5));
  uRam000000018307faf0 =
       (uRam000000018307faf0 ^ uRam000000018307ffc0 & 0xfffffffffe000000) - 0x10cc6490 ^
       0xe3275318b981d87c;
  uRam0000000183080078 =
       (uRam0000000183080078 * -0x45847626e876bc3f ^ uRam000000018307faf0) +
       (uRam000000018307ffc0 & 0xfffffffffe000000);
  uRam000000018307fbf8 = uRam0000000183080078 ^ uRam000000018307faf0;
  uRam000000018307faf8 = 0xef339b70;
  uRam000000018307fe70 = func_0x00018487fb90(lRam000000018307fed0 + 0xffe50038b9ff34ffU ^ 0xa9);
  uVar8 = uRam000000018307fe70 & 0x7ffffffffffffff;
  uRam000000018307ff80 = uRam000000018307f950 ^ uVar8 ^ 0x10000390f;
  uRam000000018307fa30 = (uRam000000018307fa30 ^ uVar8) + 0x10000390f ^ 0xc8bb7deeb4a10941;
  uRam000000018307f980 = (uRam000000018307f980 * -0x4967d7618599969f ^ uRam000000018307fa30) + uVar8
  ;
  uRam000000018307ffa0 = uRam000000018307f980 ^ uRam000000018307fa30;
  uRam000000018307f9e8 = 0x390f;
  uVar8 = (uRam000000018307fd18 ^ _UNK_180257dd0) + uRam00000001830800f8 + 0x26ff191b;
  uVar10 = (uRam00000001830800f8 ^ _UNK_180257dd8) + uRam000000018307fd18 + 0x5d22fed1;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fd18 ^ _UNK_180257dd0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam00000001830800f8 ^ _UNK_180257dd8;
  uRam000000018307faf0 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018307fd18 + 0x5d22fed1) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830800f8 + 0x26ff191b));
  uVar10 = uRam000000018307faf0 ^ 0x3b40a1a6b8a2109e;
  uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar10 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar10;
  uRam000000018307fd10 = uRam000000018307ff18 ^ uVar10 ^ 0x10000390f;
  uRam000000018307ffc8 = (uRam000000018307ffc8 ^ uVar10) + 0x10000390f ^ 0x7b0fc0a4ed6d5e49;
  uRam000000018307fd90 = (uRam000000018307fd90 * 0x408143b5daded011 ^ uRam000000018307ffc8) + uVar10
  ;
  uRam000000018307ff28 = uRam000000018307fd90 ^ uRam000000018307ffc8;
  uRam000000018307fd00 = 0x390f;
  uVar8 = (~uRam000000018307fea0 + 0xf494c825) *
          ((uRam000000018307ff28 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018307ff28 & 0x84222325) * 2);
  uVar8 = (uVar8 | uRam000000018307fad0) + (uVar8 & uRam000000018307fad0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018307fdb8 =
       func_0x00018487fb90((uVar8 | 0x70b6eb01) + (ulonglong)((uint)uVar8 & 0x70b6eb01));
  uVar8 = uRam000000018307fdb8 - (uRam000000018307fdb8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam000000018307fdb8;
  uRam0000000183080058 = (uRam0000000183080058 ^ uVar8) - 0xf494c824 ^ 0x3b473bcbb1aeb440;
  uRam000000018307fa18 = (uRam000000018307fa18 * 0x6b566c576d325459 ^ uRam0000000183080058) + uVar8;
  uRam000000018307ffa8 = uRam000000018307fa18 ^ uRam0000000183080058;
  uRam000000018307faa0 = 0xb6b37dc;
  uRam000000018307fbe0 = func_0x00018487fb90(uRam000000018307fe10 ^ 0xffb2002ff5ff9151);
  uVar8 = uRam000000018307fbe0 << 10 | uRam000000018307fbe0 >> 0x36;
  uRam000000018307ffd8 = uRam000000018307fd70 ^ uVar8 ^ 0xf4950133;
  uRam000000018307fb70 = (uRam000000018307fb70 ^ uVar8) + 0xf4950133 ^ 0x89c0b7486226df6a;
  uRam0000000183080068 = (uRam0000000183080068 * -0x7c779ae51441f6eb ^ uRam000000018307fb70) + uVar8
  ;
  uRam0000000183080058 = uRam0000000183080068 ^ uRam000000018307fb70;
  uRam000000018307ff18 = 0xf4950133;
  uRam000000018307f9f0 = func_0x00018487fb90(uRam000000018307fc88 + 0x14ffca46004bff ^ 0x65);
  uRam000000018307f9f8 = uRam000000018307fe20 ^ uRam000000018307f9f0 ^ 0x10000390f;
  uRam000000018307fa18 =
       (uRam000000018307fa18 ^ uRam000000018307f9f0) + 0x10000390f ^ 0xa453c2f8630c9a28;
  uRam000000018307fd10 =
       (uRam000000018307fd10 * -0x74c48d98b4fb2d85 ^ uRam000000018307fa18) + uRam000000018307f9f0;
  uRam000000018307ffd8 = uRam000000018307fd10 ^ uRam000000018307fa18;
  uRam000000018307fbe8 = 0x390f;
  uVar8 = (~uRam00000001830800a8 + 0x6eb33ff4) *
          ((uRam000000018307ff18 ^ 0xfadddcda) +
          (ulonglong)((uint)uRam000000018307ff18 & 0xfadddcda) * 2);
  uVar8 = (uVar8 | uRam0000000183080070) + (uVar8 & uRam0000000183080070);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uRam000000018307fcc8 =
       func_0x00018487fb90((uVar8 | 0x946ee329) + (ulonglong)((uint)uVar8 & 0x946ee329));
  uVar8 = (ulonglong)(~(uint)uRam000000018307fcc8 & 0x7effffff | 0x3ff);
  uRam0000000183080040 = (uRam0000000183080040 ^ uVar8) + 0x104cc00c ^ 0xf16a3f53b0ee4ffa;
  uRam000000018307fb38 = (uRam000000018307fb38 * 0x39ce0b2bdd011791 ^ uRam0000000183080040) + uVar8;
  uRam000000018307fb98 = uRam000000018307fb38 ^ uRam0000000183080040;
  uRam000000018307f978 = 0x104cc00c;
  uRam000000018307fcb8 = func_0x00018487fb90(uRam000000018307ff40 ^ 0x1d007426ffe95a);
  uVar8 = (uRam000000018307fcb8 ^ 0x7effffff) & 0x7fffffffffffffff ^ 0x7effffff;
  uRam0000000183080028 = (uRam0000000183080028 ^ uVar8) + 0x6eb33ff3 ^ 0x55631246b3ceacc5;
  uRam000000018307f918 = (uRam000000018307f918 * 0x723961002871d817 ^ uRam0000000183080028) + uVar8;
  uRam000000018307fd60 = uRam000000018307f918 ^ uRam0000000183080028;
  uRam000000018307fa98 = 0x6eb33ff3;
  uVar8 = (uRam000000018307fc30 ^ _UNK_180257de0) + uRam000000018307fc18 + 0x946ee329;
  uVar10 = (uRam000000018307fc18 ^ _UNK_180257de8) + uRam000000018307fc30 + 0xdd667fe6;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fc30 ^ _UNK_180257de0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018307fc18 ^ _UNK_180257de8;
  uRam000000018307ff10 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018307fc30 + 0xdd667fe6) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018307fc18 + 0x946ee329));
  uVar8 = (ulonglong)((uint)uRam000000018307ff10 & 0x104cc00c);
  uRam0000000183080040 = uRam00000001830800b8 ^ uVar8 ^ 0xedb33ff2;
  uRam000000018307fa40 = (uRam000000018307fa40 ^ uVar8) + 0xedb33ff2 ^ 0xe2d407cb98b29643;
  uRam000000018307fa30 = (uRam000000018307fa30 * -0x5c1d9076f8215475 ^ uRam000000018307fa40) + uVar8
  ;
  uRam000000018307ff20 = uRam000000018307fa30 ^ uRam000000018307fa40;
  uRam000000018307fa28 = 0xedb33ff2;
  uRam000000018307ffd8 = func_0x00018487fb90(uRam00000001830800f8 ^ 0xffac004b29ff5a17);
  uVar8 = (uRam000000018307ffd8 ^ 0x1feffff01ffffff) & 0x1ffffffffffffff;
  uRam000000018307f9f8 = uRam000000018307f9f8 ^ uVar8 ^ 0x1c1d1e2096273caf;
  uRam0000000183080038 = (uRam0000000183080038 * 0x6cd4dc4e1f979f1b ^ uRam000000018307f9f8) + uVar8;
  uRam000000018307ff00 = uRam0000000183080038 ^ uRam000000018307f9f8;
  uRam00000001830800a8 = 0;
  uRam000000018307fee8 = func_0x00018487fb90(uRam000000018307fef0 ^ 0x16008429ffe1be);
  uVar8 = uRam000000018307fee8 - (uRam000000018307fee8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
           uRam000000018307fee8;
  uVar8 = uVar10 >> 1 | uVar10;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
           ^ uVar10;
  uRam000000018307ff00 = uRam0000000183080000 ^ uVar10 ^ 0x390f;
  uRam000000018307ff50 = (uRam000000018307ff50 ^ uVar10) + 0x390f ^ 0x371f0e60e714d02c;
  uRam000000018307fff8 = (uRam000000018307fff8 * 0x76928af8bd71ceb1 ^ uRam000000018307ff50) + uVar10
  ;
  uRam000000018307fc38 = uRam000000018307fff8 ^ uRam000000018307ff50;
  uRam000000018307fac8 = 0x390f;
  uVar8 = (uRam000000018307fdc8 ^ _UNK_180257df0) + uRam000000018307fae8 + 0xb0157ac9;
  uVar10 = (uRam000000018307fae8 ^ _UNK_180257df8) + uRam000000018307fdc8 + 0x343759ec;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018307fdc8 ^ _UNK_180257df0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018307fae8 ^ _UNK_180257df8;
  uRam000000018307fe18 =
       func_0x00018487fb90((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018307fdc8 + 0x343759ec) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018307fae8 + 0xb0157ac9));
  uVar8 = (uRam000000018307fe18 >> 10) * 0x6c8c2279bec29c00;
  uRam000000018307fe10 = uRam000000018307fe10 ^ uVar8 ^ 0xef9580e5e2d36f85;
  uRam000000018307fc98 = (uRam000000018307fc98 * 0x367db0f2e0a3092b ^ uRam000000018307fe10) + uVar8;
  uRam00000001830800c8 = uRam000000018307fc98 ^ uRam000000018307fe10;
  auVar6._8_8_ = _UNK_180257e08;
  auVar6._0_8_ = uVar3 ^ 0x84222325;
  uRam0000000183080030 = 0;
  auVar7 = pshufb(auVar6 ^ _UNK_180257e10,auVar7);
  uVar10 = auVar7._8_8_ + auVar7._0_8_;
  uVar8 = uVar10 + uRam000000018307ff38;
  if (auVar7._4_4_ < 0) {
    uVar8 = uRam000000018307ff68 ^ uVar10;
  }
  uRam0000000183080018 = func_0x00018487fb90(SUB161(auVar6 ^ _UNK_180257e10,5) ^ uVar8);
  uVar8 = (~uRam0000000183080018 & uVar3) * -0x35741e6c7da157;
  uVar8 = uVar8 << 0x34 | uVar8 >> 0xc;
  uRam000000018307ff10 = uVar3 ^ 0x390f;
  uRam000000018307fa80 = (uRam000000018307fa80 ^ uVar8) + uRam000000018307ff10 ^ 0x1cd3f29fb4e74570;
  uRam000000018307fd78 = (uRam000000018307fd78 * -0x74ecf322129fff1 ^ uRam000000018307fa80) + uVar8;
  uRam000000018307fa90 = uRam000000018307fd78 ^ uRam000000018307fa80;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1bcf7,0x453);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018487b241 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1802563b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rt; djD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18487fc20, runtime 6fffec48fc20) =====

void FUN_18487fc20(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018487fc5c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180257fb0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/rt; djE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1847e8320, runtime 6fffec3f8320) =====

void FUN_1847e8320(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001847e839d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180236210 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rt; dju ()Loshi/PlatformEnum; (handler @ image 1847d4840, runtime 6fffec3e4840) =====

void FUN_1847d4840(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x239bd,0x57c);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001847d4886 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180230b60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rt; djv ()Ljava/lang/String; (handler @ image 1847d4ac0, runtime 6fffec3e4ac0) =====

void FUN_1847d4ac0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1bcf7,0x453);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001847d4ba2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180230c80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rt; djw ()[B (handler @ image 18480af40, runtime 6fffec41af40) =====

void FUN_18480af40(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1bcf7,0x453);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018480b037 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18023d8d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rt; djx ()Z (handler @ image 18481de90, runtime 6fffec42de90) =====

void FUN_18481de90(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1bcf7,0x453);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018481df69 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180242e50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rt; djy ()Z (handler @ image 184822530, runtime 6fffec432530) =====

void FUN_184822530(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1bcf7,0x453);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001848225ee did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180244210 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/rt; djz ()Ljava/util/List; (handler @ image 184826370, runtime 6fffec436370) =====

void FUN_184826370(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x1bcf7,0x453);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018482645d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180245360 + (ulonglong)(cVar1 == '\0') * 8))(0);
  return;
}



