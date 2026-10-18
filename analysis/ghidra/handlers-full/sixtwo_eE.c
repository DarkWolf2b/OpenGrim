// ===== Lsixtwo/eE; _c35a7cb99f43a6344ba13bf140372f4b ()V (handler @ image 18cb153e0, runtime 6ffff47253e0) =====

void FUN_18cb153e0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018cb154c8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18200af38 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eE; awA (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18cb06060, runtime 6ffff4716060) =====

undefined8 FUN_18cb06060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/eE; awB (IJ)I (handler @ image 18cb060f0, runtime 6ffff47160f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb060f0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (uRam000000018332dc68 ^ _UNK_182009790) + uRam000000018332da10 + 0xa0a62017e28f7dfe;
  uVar7 = (uRam000000018332da10 ^ _UNK_182009798) + uRam000000018332dc68 + 0x5a1e945f8d1dc6eb;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332dc68 ^ _UNK_182009790;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018332da10 ^ _UNK_182009798;
  uRam000000018332dbb8 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018332dc68 + 0x5a1e945f8d1dc6eb) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018332da10 + 0xa0a62017e28f7dfe));
  uRam000000018332dc88 =
       (uRam000000018332dc88 ^ uRam000000018332dbb8 & 0x7fffffffffffffff) + 0xfab8b448ebb09830 ^
       0x1507a15f15537c1c;
  uRam000000018332da88 =
       (uRam000000018332da88 * 0x4b4c17a2bbfbe1a3 ^ uRam000000018332dc88) +
       (uRam000000018332dbb8 & 0x7fffffffffffffff);
  uRam000000018332dad0 = uRam000000018332da88 ^ uRam000000018332dc88;
  uRam000000018332da28 = uRam000000018332dc68 ^ 0xfab8b448ebb09830;
  uRam000000018332dbc0 = 0xfab8b448ebb09830;
  uVar6 = (uRam000000018332da10 ^ _UNK_1820097a0) + uRam000000018332d9f0 + 0x84222325;
  uVar7 = (uRam000000018332d9f0 ^ _UNK_1820097a8) + uRam000000018332da10 + 0x1237750f16dc99a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332da10 ^ _UNK_1820097a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018332d9f0 ^ _UNK_1820097a8;
  uRam000000018332d9c0 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018332da10 + 0x1237750f16dc99a0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332d9f0 + 0x84222325));
  uVar6 = (uRam000000018332d9c0 ^ 0x1237750f16dc99a0) & 0x7fffffffffffffff;
  uRam000000018332db80 = (uRam000000018332db80 ^ uVar6) + 0xedc88af0e9236660 ^ 0x2dd03f72dd962f1f;
  uRam000000018332da08 = (uRam000000018332da08 * 0x29be4e4b808106cf ^ uRam000000018332db80) + uVar6;
  uRam000000018332dcc0 = uRam000000018332da08 ^ uRam000000018332db80;
  uRam000000018332db18 = 0xedc88af0e9236660;
  uVar6 = (~uRam000000018332dca0 + 0x1237750f16dc99a1) *
          ((uRam000000018332dc08 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018332dc08 & 0x84225cda) * 2);
  uVar6 = (uVar6 | 0xedc88af0e9236660) + (uVar6 & 0xedc88af0e9236660);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332dc40 =
       func_0x00018cb11630((uVar6 | 0x1237750f92fec57a) + (uVar6 & 0x1237750f92fec57a));
  uVar6 = uRam000000018332dc40 & 0xfffffffffffffff0;
  uRam000000018332dbe8 = uRam000000018332da68 ^ uVar6 ^ 0x1237750f16dd199f;
  uRam000000018332db18 = (uRam000000018332db18 ^ uVar6) + 0x1237750f16dd199f ^ 0x773097cca98e5671;
  uRam000000018332dbb8 = (uRam000000018332dbb8 * 0x5b1f75f77061e1 ^ uRam000000018332db18) + uVar6;
  uRam000000018332db38 = uRam000000018332dbb8 ^ uRam000000018332db18;
  uRam000000018332dc98 = 0x1237750f16dd199f;
  uVar6 = (uRam000000018332da30 ^ _UNK_1820097b0) + uRam000000018332dc88 + 0x1237750f92ff3aba;
  uVar7 = (uRam000000018332dc88 ^ _UNK_1820097b8) + uRam000000018332da30 + 0xedc88af0e9236660;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332da30 ^ _UNK_1820097b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018332dc88 ^ _UNK_1820097b8;
  uRam000000018332db50 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018332da30 + 0xedc88af0e9236660) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018332dc88 + 0x1237750f92ff3aba));
  uRam000000018332dae0 = uRam000000018332db18 ^ uRam000000018332dc08 ^ 0x7fff;
  uRam000000018332db58 = (uRam000000018332db58 ^ uRam000000018332dc08) + 0x7fff ^ 0x781db8d15e47d2f3
  ;
  uRam000000018332dc88 =
       (uRam000000018332dc88 * -0x315513f81c73553d ^ uRam000000018332db58) + uRam000000018332dc08;
  uRam000000018332d9a0 = uRam000000018332dc88 ^ uRam000000018332db58;
  uRam000000018332db48 = 0x7fff;
  uRam000000018332db48 = func_0x00018cb11630(uRam000000018332d9c8 ^ 0xf678f07754ea5872);
  uVar6 = uRam000000018332db48 >> 1 | uRam000000018332db48;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018332db48 ^ 0x7fff;
  uRam000000018332dcf8 = uRam000000018332d9b8 ^ uVar6 ^ 0x4e101a0f0d9b556e;
  uRam000000018332dcd0 = (uRam000000018332dcd0 ^ uVar6) + 0x4e101a0f0d9b556e ^ 0xafb4e0065af43d5;
  uRam000000018332dc40 = (uRam000000018332dc40 * -0x7b5ca668ff0d7919 ^ uRam000000018332dcd0) + uVar6
  ;
  uRam000000018332d900 = uRam000000018332dc40 ^ uRam000000018332dcd0;
  uRam000000018332da90 = 0x4e101a0f0d9b556e;
  uVar6 = (uRam000000018332db90 ^ _UNK_1820097c0) + uRam000000018332daf0 + 0x4e101a0f89b9764b;
  uVar7 = (uRam000000018332daf0 ^ _UNK_1820097c8) + uRam000000018332db90 + 0xb1efe5f0f2652a91;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332db90 ^ _UNK_1820097c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018332daf0 ^ _UNK_1820097c8;
  uRam000000018332dc78 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018332db90 + 0xb1efe5f0f2652a91) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018332daf0 + 0x4e101a0f89b9764b));
  uVar7 = uRam000000018332dc78 ^ 0xe2efecece1656f4e;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar7) & 0xffffffffffff ^ 0xb1efe5f0f2652a91;
  uRam000000018332da20 = uRam000000018332d9a0 ^ uVar6 ^ 0x7fff;
  uRam000000018332db78 = (uRam000000018332db78 ^ uVar6) + 0x7fff ^ 0xa023a720a1647e43;
  uRam000000018332d9d0 = (uRam000000018332d9d0 * -0x59f1d069f6c5b78d ^ uRam000000018332db78) + uVar6
  ;
  uRam000000018332da90 = uRam000000018332d9d0 ^ uRam000000018332db78;
  uRam000000018332db50 = 0x7fff;
  uRam000000018332db70 = func_0x00018cb11630(uRam000000018332dae8 + 0x250a0d39b1485b78 ^ 0xf7);
  uVar7 = uRam000000018332db70 ^ 0xb91259674ec629f6;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar7) & 0xfffffffffffffff0;
  uRam000000018332d9b0 = (uRam000000018332d9b0 ^ uVar6) + 0x46eda698b139d60a ^ 0x24eaafdbbc5a5d9c;
  uRam000000018332dcc8 = (uRam000000018332dcc8 * -0x66bdc006d306208f ^ uRam000000018332d9b0) + uVar6
  ;
  uRam000000018332dbd8 = uRam000000018332dcc8 ^ uRam000000018332d9b0;
  uRam000000018332dc00 = 0x46eda698b139d60a;
  uRam000000018332da10 = func_0x00018cb11630(uRam000000018332dc18 + 0xa0aaedc9d4492376 ^ 0xf3);
  uVar6 = uRam000000018332da10 >> 1 | uRam000000018332da10;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uRam000000018332da10;
  uRam000000018332dc70 = uRam000000018332da78 ^ uVar6 ^ 0xb91259674ec6a9f5;
  uRam000000018332da18 = (uRam000000018332da18 ^ uVar6) + 0xb91259674ec6a9f5 ^ 0x1788ce753feacdf2;
  uRam000000018332dc08 = (uRam000000018332dc08 * 0x145cda7469876a4d ^ uRam000000018332da18) + uVar6;
  uRam000000018332dae8 = uRam000000018332dc08 ^ uRam000000018332da18;
  uRam000000018332d958 = -0x46eda698b139560b;
  uVar6 = (~uRam000000018332dbc8 + 0x46eda698b139d60b) *
          ((uRam000000018332dc90 ^ 0xb9125967cae48ad0) +
          (uRam000000018332dc90 & 0x39125967cae48ad0) * 2);
  uVar6 = (uVar6 | uRam000000018332dbb0) + (uVar6 & uRam000000018332dbb0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332d9e0 =
       func_0x00018cb11630((uVar6 | 0xffffffff7bdd5cda) + (uVar6 & 0xffffffff7bdd5cda));
  uVar7 = _UNK_1820097d8;
  uVar6 = _UNK_1820097d0;
  uVar3 = (uRam000000018332d9e0 ^ 0xd4e6871962627192) >> 1 |
          uRam000000018332d9e0 ^ 0xd4e6871962627192;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam000000018332d9e0 ^ 0x6df4de7e2ca4d867 ^
          (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8;
  uRam000000018332dc38 = uRam000000018332db98 ^ uVar3 ^ 0x7fff;
  uRam000000018332db48 = (uRam000000018332db48 ^ uVar3) + 0x7fff ^ 0xcb8daa2c651bd513;
  uRam000000018332dae8 = (uRam000000018332dae8 * -0x331716ea4e707cf7 ^ uRam000000018332db48) + uVar3
  ;
  uRam000000018332dcc8 = uRam000000018332dae8 ^ uRam000000018332db48;
  uRam000000018332d9e8 = 0x7fff;
  uVar3 = (uRam000000018332dbb8 ^ _UNK_1820097d0) + uRam000000018332d910 + 0xb5fd7d2af8c19c4a;
  uVar8 = (uRam000000018332d910 ^ _UNK_1820097d8) + uRam000000018332dbb8 + 0xfab8b448ebb09830;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018332dbb8 ^ _UNK_1820097d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332d910 ^ _UNK_1820097d8;
  uRam000000018332d998 =
       func_0x00018cb11630((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018332dbb8 + 0xfab8b448ebb09830) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018332d910 + 0xb5fd7d2af8c19c4a));
  uVar3 = uRam000000018332dc40 ^ 0xb5fd7d2a7ce3bf6f;
  uRam000000018332dcb8 = uRam000000018332d920 ^ uVar3 ^ 0xb0b631736894579f;
  uRam000000018332dc28 = (uRam000000018332dc28 ^ uVar3) + 0xb0b631736894579f ^ 0x4abb60e8986d2254;
  uRam000000018332d958 = (uRam000000018332d958 * -0x3ce1cf00da1443df ^ uRam000000018332dc28) + uVar3
  ;
  uRam000000018332da10 = uRam000000018332d958 ^ uRam000000018332dc28;
  uRam000000018332da18 = 0xb0b631736894579f;
  uVar3 = (uRam000000018332dbc8 ^ uVar6) + uRam000000018332da50 + 0xb5fd7d2af8c19c4a;
  uVar8 = (uRam000000018332da50 ^ uVar7) + uRam000000018332dbc8 + 0xfab8b448ebb09830;
  uVar6 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018332dbc8 ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332da50 ^ uVar7;
  uRam000000018332db38 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018332dbc8 + 0xfab8b448ebb09830) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018332da50 + 0xb5fd7d2af8c19c4a));
  uRam000000018332da70 =
       (uRam000000018332da70 ^ uRam000000018332db38) + 0x4f45c9629753275f ^ 0x50215d72df301335;
  uRam000000018332d910 =
       (uRam000000018332d910 * 0x753278b1ebf74e89 ^ uRam000000018332da70) + uRam000000018332db38;
  uRam000000018332d9f8 = uRam000000018332d910 ^ uRam000000018332da70;
  uRam000000018332d9f0 = 0x4f45c9629753275f;
  uVar6 = (~uRam000000018332d9c0 + 0xfab8b448ebb09831) *
          ((uRam000000018332dbe8 ^ 0xb5fd7d2af8c19c4a) +
          (uRam000000018332dbe8 & 0x35fd7d2af8c19c4a) * 2);
  uVar6 = (uVar6 | uRam000000018332da70) + (uVar6 & uRam000000018332da70);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332db10 =
       func_0x00018cb11630((uVar6 | 0x4f45c9621371047a) + (uVar6 & 0x4f45c9621371047a));
  uRam000000018332db20 =
       (uRam000000018332db20 ^ uRam000000018332db10 ^ 0xb5fd7d2a7ce3bf6f) + 0xb0b8340868a09820 ^
       0x6fc172f78b2605cd;
  uRam000000018332db58 =
       (uRam000000018332db58 * 0x5d2bd53abfefd869 ^ uRam000000018332db20) +
       (uRam000000018332db10 ^ 0xb5fd7d2a7ce3bf6f);
  uRam000000018332dc88 = uRam000000018332db58 ^ uRam000000018332db20;
  uRam000000018332dad8 = -0x4f47cbf7975f67e0;
  uRam000000018332db20 = func_0x00018cb11630(uRam000000018332d950 ^ 0x91d40dc1c9612fde);
  uVar7 = uRam000000018332db20 ^ 0x61706810d1413040;
  uVar6 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar7;
  uRam000000018332da68 = uRam000000018332da18 ^ uVar7 ^ 0xb0b631736894579f;
  uRam000000018332dc40 = (uRam000000018332dc40 ^ uVar7) + 0xb0b631736894579f ^ 0x4fc3361d45c17f3d;
  uRam000000018332d9c8 = (uRam000000018332d9c8 * 0x6dbbd96e37e321f5 ^ uRam000000018332dc40) + uVar7;
  uRam000000018332db08 = uRam000000018332d9c8 ^ uRam000000018332dc40;
  uRam000000018332dcb8 = 0xb0b631736894579f;
  uVar6 = (~uRam000000018332db50 + 0xb0b63173689457a0) *
          ((uRam000000018332db40 ^ 0xb0b63173ecb674ba) +
          (uRam000000018332db40 & 0x30b63173ecb674ba) * 2);
  uVar6 = (uVar6 | uRam000000018332dc00) + (uVar6 & uRam000000018332dc00);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332dac8 =
       func_0x00018cb11630((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uRam000000018332d9c0 = uRam000000018332dac8 ^ 0x1f9e74009dd574c1;
  uRam000000018332d930 = uRam000000018332d930 ^ uRam000000018332d9c0 ^ 0xbc423020bcde6f83;
  uRam000000018332db90 =
       (uRam000000018332db90 * 0x332fbdce52d9ffcb ^ uRam000000018332d930) + uRam000000018332d9c0;
  uRam000000018332da68 = uRam000000018332db90 ^ uRam000000018332d930;
  uRam000000018332dcf8 = 0;
  uVar6 = (uRam000000018332db60 ^ 0x84225cda) + uRam000000018332db20 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332db60 ^ 0x84225cda;
  uVar7 = ((uRam000000018332db20 + uRam000000018332db60) * 0x2000 |
          uRam000000018332db20 + uRam000000018332db60 >> 0x33) ^ uRam000000018332db20;
  uRam000000018332daa8 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018332db60 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332db20 + 0x84225cda));
  uVar6 = uRam000000018332daa8 >> 1 | uRam000000018332daa8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018332daa8;
  uRam000000018332dcc0 = uRam000000018332dbc0 ^ uVar6 ^ 0x7fff;
  uRam000000018332daf0 = (uRam000000018332daf0 ^ uVar6) + 0x7fff ^ 0x9b4c1cf81365dab8;
  uRam000000018332dcb0 = (uRam000000018332dcb0 * 0x1bc0625eefb8b8d ^ uRam000000018332daf0) + uVar6;
  uRam000000018332dad0 = uRam000000018332dcb0 ^ uRam000000018332daf0;
  uRam000000018332da18 = 0x7fff;
  uRam000000018332d918 = func_0x00018cb11630(uRam000000018332da88 ^ 0xd29cfe02b4820236);
  uRam000000018332d950 =
       (uRam000000018332d950 ^ uRam000000018332d918 ^ 0xfffffffffffffffe) + 0x4a0282d5831c4090 ^
       0xfee8fcbcb81473cf;
  uRam000000018332d988 =
       (uRam000000018332d988 * 0x4205912a8befdf75 ^ uRam000000018332d950) +
       (uRam000000018332d918 ^ 0xfffffffffffffffe);
  uRam000000018332dbf8 = uRam000000018332d988 ^ uRam000000018332d950;
  uRam000000018332d930 = 0x4a0282d5831c4090;
  uRam000000018332dcc8 = func_0x00018cb11630(uRam000000018332dbd0 + 0xdfb300f756484502 ^ 0xa4);
  uRam000000018332d950 =
       uRam000000018332d950 ^ uRam000000018332dcc8 & 0x7fffffffffffffff ^ 0xbf69f856ae9e47a2;
  uRam000000018332dab8 =
       (uRam000000018332dab8 * 0x3acd13149034aacb ^ uRam000000018332d950) +
       (uRam000000018332dcc8 & 0x7fffffffffffffff);
  uRam000000018332dac8 = uRam000000018332dab8 ^ uRam000000018332d950;
  uRam000000018332dca0 = 0;
  uRam000000018332db30 = func_0x00018cb11630(uRam000000018332d9d0 ^ 0x43ff8429ffe164);
  uRam000000018332dca8 = uRam000000018332d9a8 ^ uRam000000018332db30 ^ 0x7fff;
  uRam000000018332db10 = (uRam000000018332da08 ^ uRam000000018332db30) + 0x7fff ^ 0x5980df3f61ae6d91
  ;
  uRam000000018332db18 =
       (uRam000000018332db18 * 0x5bb7277f2a6716e9 ^ uRam000000018332db10) + uRam000000018332db30;
  uRam000000018332db10 = uRam000000018332db18 ^ uRam000000018332db10;
  uRam000000018332da08 = 0x7fff;
  uVar6 = (uRam000000018332db58 ^ _UNK_1820097e0) + 0xb52078289cc30a42;
  uVar7 = (_UNK_1820097e8 ^ 0x7fff) + uRam000000018332db58 + 0xb520782818e0a966;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332db58 ^ _UNK_1820097e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _UNK_1820097e8 ^ 0x7fff;
  uRam000000018332da90 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018332db58 + 0xb520782818e0a966) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) + 0x4adf87d7633cf5be);
  uRam000000018332daf0 =
       uRam000000018332daf0 ^ uRam000000018332da90 ^ 0xb520782818e0a966 ^ 0xca18c2f86ce48295;
  uRam000000018332d9f8 =
       (uRam000000018332d9f8 * -0x26cf8866803fc0f9 ^ uRam000000018332daf0) +
       (uRam000000018332da90 ^ 0xb520782818e0a966);
  uRam000000018332db88 = uRam000000018332d9f8 ^ uRam000000018332daf0;
  uRam000000018332dc98 = 0;
  param_4 = param_4 & 0x7fff;
  uVar7 = (ulonglong)param_3;
  uVar3 = (ulonglong)param_4 ^ 0x84222325;
  uVar6 = ((uRam000000018332d9e0 ^ uVar3) +
          (ulonglong)((uint)uRam000000018332d9e0 & (uint)uVar3) * 2) *
          (uVar7 - uRam000000018332db10);
  uVar6 = (uVar6 | uRam000000018332da08) + (uVar6 & uRam000000018332da08);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332dc90 =
       func_0x00018cb11630((uVar3 ^ uVar7 | uVar6) +
                           (ulonglong)((uint)(uVar3 ^ uVar7) & (uint)uVar6));
  uVar7 = param_4 * uVar7 ^ uRam000000018332dc90;
  uVar6 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar7 = (uint)bVar1 + (uint)bVar1 ^ uVar7;
  uVar3 = (ulonglong)(param_4 ^ param_3);
  uRam000000018332da30 = (uRam000000018332da30 ^ uVar7) + uVar3 ^ 0x560a1ea48f3fe78e;
  uRam000000018332da20 = (uRam000000018332da20 * -0x71b0e4c3efbb7799 ^ uRam000000018332da30) + uVar7
  ;
  uRam000000018332d988 = uRam000000018332da20 ^ uRam000000018332da30;
  uRam000000018332da70 = uVar3;
  uRam000000018332dc88 = func_0x00018cb11630(uRam000000018332db40 ^ 0xffcb002c65008b66);
  uVar6 = (uRam000000018332dc88 ^ 0xf4fefc7e) & 0x1fffffffffff;
  uVar7 = ((uRam000000018332dc88 ^ 0xf4fefc7e) & 0x1fffffffffff) >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar6;
  uRam000000018332d918 = (uRam000000018332d918 ^ uVar6) + 0xf4fefc7e ^ 0xaf34e9fcc240fd69;
  uRam000000018332dab8 = (uRam000000018332dab8 * -0x197240db67388fe9 ^ uRam000000018332d918) + uVar6
  ;
  uRam000000018332dc48 = uRam000000018332dab8 ^ uRam000000018332d918;
  uRam000000018332dbf0 = 0xf4fefc7e;
  uVar6 = (uRam000000018332d910 ^ _UNK_1820097f0) + uRam000000018332d948 + 0xb67d0f95;
  uVar7 = (uRam000000018332d948 ^ _UNK_1820097f8) + uRam000000018332d910 + 0xe65656bf;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332d910 ^ _UNK_1820097f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018332d948 ^ _UNK_1820097f8;
  uRam000000018332db78 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018332d910 + 0xe65656bf) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332d948 + 0xb67d0f95));
  uVar6 = (uRam000000018332db78 & 0xffffffffffffff) << 7 | uRam000000018332db78 >> 0x39;
  uRam000000018332dbb8 = (uRam000000018332dbb8 ^ uVar6) + 0xd4097a0f ^ 0x3c19f24098b5fc61;
  uRam000000018332dc90 = (uRam000000018332dc90 * 0x4c04c4a5b5342549 ^ uRam000000018332dbb8) + uVar6;
  uRam000000018332db38 = uRam000000018332dc90 ^ uRam000000018332dbb8;
  uRam000000018332d930 = 0xd4097a0f;
  uVar6 = (~uRam000000018332db10 + 0xbdb9581) *
          ((uRam000000018332db50 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018332db50 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam000000018332db90) + (uVar6 & uRam000000018332db90);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332dc18 =
       func_0x00018cb11630((uVar6 | 0x8ff9b6a5) + (ulonglong)((uint)uVar6 & 0x8ff9b6a5));
  uVar6 = uRam000000018332dc18 << 0x19 | (uRam000000018332dc18 & 0x7fffffffffffffff) >> 0x27;
  uRam000000018332da98 = (uRam000000018332da98 ^ uVar6) - 0xbdb9580 ^ 0xc3c070004ae4b4d5;
  uRam000000018332dbe0 = (uRam000000018332dbe0 * -0x307f3df93fb6859 ^ uRam000000018332da98) + uVar6;
  uRam000000018332db50 = uRam000000018332dbe0 ^ uRam000000018332da98;
  uRam000000018332db30 = 0xf4246a80;
  uVar6 = (uRam000000018332da78 ^ _UNK_182009800) + uRam000000018332dc58 + 0x84224598;
  uVar7 = (uRam000000018332dc58 ^ _UNK_182009808) + uRam000000018332da78 + 0xbdb9580;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332da78 ^ _UNK_182009800;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018332dc58 ^ _UNK_182009808;
  uRam000000018332d9a8 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018332da78 + 0xbdb9580) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332dc58 + 0x84224598));
  uRam000000018332dc50 = uRam000000018332d978 ^ uRam000000018332dae0 ^ 0xbdbfc3d;
  uRam000000018332da90 =
       (uRam000000018332da90 ^ uRam000000018332dae0) + 0xbdbfc3d ^ 0xa8d8197c2c77af8f;
  uRam000000018332db08 =
       (uRam000000018332db08 * -0x256c1738087168a3 ^ uRam000000018332da90) + uRam000000018332dae0;
  uRam000000018332da30 = uRam000000018332db08 ^ uRam000000018332da90;
  uRam000000018332dbd0 = 0xbdbfc3d;
  uVar6 = (~uRam000000018332da08 + 0xf4246a81) *
          ((uRam000000018332d930 ^ 0x8ff9df18) +
          (ulonglong)((uint)uRam000000018332d930 & 0x8ff9df18) * 2);
  uVar6 = (uVar6 | uRam000000018332d9b0) + (uVar6 & uRam000000018332d9b0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332d9b0 =
       func_0x00018cb11630((uVar6 | 0x7bddb598) + (ulonglong)((uint)uVar6 & 0x7bddb598));
  uVar6 = uRam000000018332d9b0 ^ 0xb4f5c4855270a00;
  uRam000000018332dbb8 = uRam000000018332da90 ^ uVar6 ^ 0x1000066bd;
  uRam000000018332da58 = (uRam000000018332da58 ^ uVar6) + 0x1000066bd ^ 0xe988b96fa1755118;
  uRam000000018332da68 = (uRam000000018332da68 * 0x59a37e1a5e30ff09 ^ uRam000000018332da58) + uVar6;
  uRam000000018332db50 = uRam000000018332da68 ^ uRam000000018332da58;
  uRam000000018332dca0 = uRam000000018332d9e0 ^ 0x1000066bd;
  uRam000000018332dcf8 = 0x66bd;
  uRam000000018332dcb8 = func_0x00018cb11630(uRam000000018332db40 + 0x7aff0822ff79ff ^ 0x8e);
  uRam000000018332dc00 =
       (uRam000000018332dc80 ^ uRam000000018332dcb8) - 0x7caca600 ^ 0x52605adbca96da98;
  uRam000000018332dad8 =
       (uRam000000018332dad8 * 0x70a800664a101e59 ^ uRam000000018332dc00) + uRam000000018332dcb8;
  uRam000000018332dc00 = uRam000000018332dad8 ^ uRam000000018332dc00;
  uRam000000018332da18 = uRam000000018332dcc8 ^ 0xffffffff83535a00;
  uRam000000018332dc80 = 0x83535a00;
  uVar6 = (uRam000000018332d938 ^ _UNK_182009810) + uRam000000018332dab0 + 0x84224598;
  uVar7 = (uRam000000018332dab0 ^ _UNK_182009818) + uRam000000018332d938 + 0x7caca600;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332d938 ^ _UNK_182009810;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018332dab0 ^ _UNK_182009818;
  uRam000000018332dc48 =
       func_0x00018cb11630((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018332d938 + 0x7caca600) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332dab0 + 0x84224598));
  uVar6 = (uRam000000018332dc48 << 0x24 | uRam000000018332dc48 >> 0x1c) >> 4 |
          (uRam000000018332dc48 >> 0x1c) << 0x3c;
  uRam000000018332dae8 = uRam000000018332da40 ^ uVar6 ^ 0x7cad0cbd;
  uRam000000018332dc58 = (uRam000000018332dc58 ^ uVar6) + 0x7cad0cbd ^ 0x32fb908ca566e965;
  uRam000000018332da98 = (uRam000000018332da98 * 0x11d56d52817242e9 ^ uRam000000018332dc58) + uVar6;
  uRam000000018332d910 = uRam000000018332da98 ^ uRam000000018332dc58;
  uRam000000018332da38 = 0x7cad0cbd;
  uVar6 = (~uRam000000018332d9c8 + 0x83535a01) *
          ((uRam000000018332da90 ^ 0xf88f2f98) +
          (ulonglong)((uint)uRam000000018332da90 & 0xf88f2f98) * 2);
  uVar6 = (uVar6 | uRam000000018332da80) + (uVar6 & uRam000000018332da80);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018cb11630((uVar6 | 0x7bdc7598) + (ulonglong)((uint)uVar6 & 0x7bdc7598));
  uVar6 = ((uVar6 ^ 0x3ff52574aec00000) & 0xffffffffffe00000) << 0x16 |
          (uVar6 ^ 0x3ff52574aec00000) >> 0x2a;
  uRam000000018332d9b8 = uRam000000018332da28 ^ uVar6 ^ 0x1000066bd;
  uRam000000018332db48 = (uRam000000018332db48 ^ uVar6) + 0x1000066bd ^ 0xeba09fc36ba85ef0;
  uRam000000018332dc58 = (uRam000000018332dc58 * -0x179c094907f61ed ^ uRam000000018332db48) + uVar6;
  uRam000000018332db78 = uRam000000018332dc58 ^ uRam000000018332db48;
  uRam000000018332d9b0 = 0x66bd;
  uRam000000018332dbe8 = func_0x00018cb11630(uRam000000018332dcc0 ^ 0x3e00397800d0d8);
  uVar6 = uRam000000018332dbe8 * 0x692b47ab76839eb7 ^ 0x66bd;
  uRam000000018332dc98 = uRam000000018332da20 ^ uVar6 ^ 0x7df16dbd;
  uRam000000018332dc18 = (uRam000000018332dc18 ^ uVar6) + 0x7df16dbd ^ 0xa509a36936ff2571;
  uRam000000018332dc30 = (uRam000000018332dc30 * -0x6fc57c9d76166add ^ uRam000000018332dc18) + uVar6
  ;
  uRam000000018332d900 = uRam000000018332dc30 ^ uRam000000018332dc18;
  uRam000000018332d910 = 0x7df16dbd;
  uVar6 = (~uRam000000018332d9b0 + 0xd4097a10) *
          ((uRam000000018332dbf0 ^ 0x70dcdf5b) +
          (ulonglong)((uint)uRam000000018332dbf0 & 0x70dcdf5b) * 2);
  uVar6 = (uVar6 | uRam000000018332daf8) + (uVar6 & uRam000000018332daf8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332dce8 =
       func_0x00018cb11630((uVar6 | 0xa4d5a554) + (ulonglong)((uint)uVar6 & 0xa4d5a554));
  uVar6 = uRam000000018332dce8 >> 1 | uRam000000018332dce8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam000000018332dce8;
  uRam000000018332d9e8 = uRam000000018332dc40 ^ uVar6 ^ 0x1c908768d;
  uRam000000018332d900 = (uRam000000018332d900 ^ uVar6) + 0x1c908768d ^ 0xdb04d8957d5d8cce;
  uRam000000018332dbd8 = (uRam000000018332dbd8 * -0x22b96b6eb64136bd ^ uRam000000018332d900) + uVar6
  ;
  uRam000000018332dbf0 = uRam000000018332dbd8 ^ uRam000000018332d900;
  uRam000000018332db08 = 0xc908768d;
  uRam000000018332da70 = func_0x00018cb11630(uRam000000018332dc08 + 0xff5aff63cc00ccff ^ 0xcd);
  uVar6 = (uRam000000018332da70 ^ 0x2dfe34c2b1c) & 0x7ffffffffff;
  uRam000000018332db40 = (uRam000000018332db40 ^ uVar6) + 0xd408780e ^ 0xd98bd2ae001998c2;
  uRam000000018332da60 = (uRam000000018332da60 * 0x500eba9fa441e40b ^ uRam000000018332db40) + uVar6;
  uRam000000018332db40 = uRam000000018332da60 ^ uRam000000018332db40;
  uRam000000018332dae8 = 0xd408780e;
  uRam000000018332dbf8 = func_0x00018cb11630(uRam000000018332dc68 + 0x4afffc47ffbaff ^ 0x4b);
  uVar6 = uRam000000018332dbf8 - (uRam000000018332dbf8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018332dbf8;
  uRam000000018332d970 = uRam000000018332d988 ^ uVar6 ^ 0xc908768d;
  uRam000000018332dc10 = (uRam000000018332dc10 ^ uVar6) + 0xc908768d ^ 0xbce65e3290f0baf7;
  uRam000000018332dc28 = (uRam000000018332dc28 * -0x414668236f11c5c5 ^ uRam000000018332dc10) + uVar6
  ;
  uRam000000018332dbc8 = uRam000000018332dc28 ^ uRam000000018332dc10;
  uRam000000018332d920 = uRam000000018332d978 ^ 0xc908768d;
  uRam000000018332dc90 = 0xc908768d;
  uRam000000018332dba8 = func_0x00018cb11630(uRam000000018332d9f0 + 0xffc3008468001dff ^ 0xe6);
  uVar6 = (uRam000000018332dba8 & 0xfffffffffffff) - (uRam000000018332dba8 >> 1 & 0x5555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          ((uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2)
          ^ uRam000000018332dba8 & 0xfffffffffffff;
  uRam000000018332dc60 = uRam000000018332db00 ^ uVar6 ^ 0x66bd;
  uRam000000018332da00 = (uRam000000018332da00 ^ uVar6) + 0x66bd ^ 0x6ab6ecb7b3933179;
  uRam000000018332d980 = (uRam000000018332d980 * 0x71c648a1d9fe4305 ^ uRam000000018332da00) + uVar6;
  uRam000000018332da90 = uRam000000018332d980 ^ uRam000000018332da00;
  uRam000000018332da30 = 0x66bd;
  uRam000000018332d990 = func_0x00018cb11630(uRam000000018332dc40 + 0x200071a40020ff ^ 0x9a);
  uVar6 = uRam000000018332d990 & 0x1ffffffffffffff ^ 0xf4fefc7e;
  uRam000000018332dca0 = (uRam000000018332dca0 ^ uVar6) + 0xb010381 ^ 0x3f2fe67c4f4d4d4c;
  uRam000000018332d938 = (uRam000000018332d938 * -0x44634aa6ff28dceb ^ uRam000000018332dca0) + uVar6
  ;
  uRam000000018332db08 = uRam000000018332d938 ^ uRam000000018332dca0;
  uRam000000018332dab0 = 0xb010381;
  uRam000000018332d918 = func_0x00018cb11630(uRam000000018332d990 + 0x2c000539ffdcff ^ 0x52);
  uVar6 = (ulonglong)(~(~(uint)uRam000000018332d918 << 0xe) & 0xf4fefc7e);
  uRam000000018332d9f0 = uRam000000018332d9f0 ^ uVar6 ^ 0xc7d802da73295f42;
  uRam000000018332db80 = (uRam000000018332db80 * -0x48208edc44b601c9 ^ uRam000000018332d9f0) + uVar6
  ;
  uRam000000018332dcc8 = uRam000000018332db80 ^ uRam000000018332d9f0;
  uRam000000018332d9e8 = uRam000000018332d970;
  uRam000000018332da00 = 0;
  uRam000000018332dc90 = func_0x00018cb11630(lRam000000018332db68 + 0xffdd007be2ffddffU ^ 0x91);
  uVar6 = ((uRam000000018332dc90 ^ 0x547c9428) >> 2) * -0x627b64188e835364;
  uRam000000018332dcd0 = uRam000000018332dcd0 ^ uVar6 ^ 0x9de23ae883c558f1;
  uRam000000018332dbc8 = (uRam000000018332dbc8 * -0xa206a44d8e557bd ^ uRam000000018332dcd0) + uVar6;
  uRam000000018332dab0 = uRam000000018332dbc8 ^ uRam000000018332dcd0;
  uRam000000018332da90 = 0;
  uVar6 = ((uRam000000018332db30 ^ 0x84224598) +
          (ulonglong)((uint)uRam000000018332db30 & 0x84224598) * 2) * -uRam000000018332dc28;
  uVar6 = (uVar6 | uRam000000018332dbc0) + (uVar6 & uRam000000018332dbc0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332d9b0 =
       func_0x00018cb11630((uVar6 | 0x84224598) + (ulonglong)((uint)uVar6 & 0x84224598));
  uVar6 = uRam000000018332d9b0 * -0x68b0d6e5a604b6a5;
  uRam000000018332dac0 =
       (uRam000000018332db20 ^ uVar6 ^ 0x66bd ^ uVar6) + 0x66bd ^ 0xd618a24919ed7a7e;
  uRam000000018332dc80 = (uRam000000018332dc80 * 0x267f2dc01f9e7c55 ^ uRam000000018332dac0) + uVar6;
  uRam000000018332dc90 = uRam000000018332dc80 ^ uRam000000018332dac0;
  auVar4._8_8_ = _UNK_182009828;
  auVar4._0_8_ = uVar3 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _UNK_182009830,_UNK_1800170c0);
  uRam000000018332d9c8 = 0x66bd;
  uVar7 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar7 + uRam000000018332db20;
  if (auVar5._4_4_ < 0) {
    uVar6 = uRam000000018332dc68 ^ uVar7;
  }
  uRam000000018332dcb0 = func_0x00018cb11630(SUB161(auVar4 ^ _UNK_182009830,5) ^ uVar6);
  uVar6 = ((uVar3 | 0x66bd) ^ uRam000000018332dcb0) << 0x11 | uRam000000018332dcb0 >> 0x2f;
  uRam000000018332db30 = uVar3 ^ 0x66bd;
  uRam000000018332dbd0 = (uRam000000018332dbd0 ^ uVar6) + uRam000000018332db30 ^ 0x11ab3d5e99b80476;
  uRam000000018332db38 = (uRam000000018332db38 * 0x43edbab9c5e09789 ^ uRam000000018332dbd0) + uVar6;
  uRam000000018332da98 = uRam000000018332db38 ^ uRam000000018332dbd0;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xe29f,0x27b);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018cb088cb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182007930 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eE; awC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18cb116c0, runtime 6ffff47216c0) =====

void FUN_18cb116c0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018cb1170b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182009960 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eE; awD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18cb126d0, runtime 6ffff47226d0) =====

void FUN_18cb126d0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018cb12759 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182009f20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eE; awz ()Z (handler @ image 18cafbc00, runtime 6ffff470bc00) =====

void FUN_18cafbc00(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xe29f,0x27b);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018cafbcca did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182004030 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



