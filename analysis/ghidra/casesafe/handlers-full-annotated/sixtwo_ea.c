// ===== Lsixtwo/ea; _9cc2c0b9f3964686b5ba2b38633269d2 ()V (handler @ image 18d7ab410, runtime 6ffff53bb410) =====

void FUN_18d7ab410(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d7ab4f8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182292698 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ea; ari (Lsixtwo/gH$th;)V (handler @ image 18d76fe40, runtime 6ffff537fe40) =====

void FUN_18d76fe40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc177,0x211);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d76ff01 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182288750 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ea; arj (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d774af0, runtime 6ffff5384af0) =====

undefined8 FUN_18d774af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/ea; ark ([B)Ljava/lang/String; (handler @ image 18d774b80, runtime 6ffff5384b80) =====

void FUN_18d774b80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018d774c20 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18228a020 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ea; arl (IJ)I (handler @ image 18d79c140, runtime 6ffff53ac140) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d79c140(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar3 = (~uRam0000000183367718 + 0x2f24976eaa77865a) *
          ((uRam0000000183367cb8 ^ 0x3f20b77404207ca1) +
          (uRam0000000183367cb8 & 0x3f20b77404207ca1) * 2);
  uVar3 = (uVar3 | uRam0000000183367900) + (uVar3 & uRam0000000183367900);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183367770 =
       func_0x00018d7a7660((uVar3 | 0x1004201aae57faf8) + (uVar3 & 0x1004201aae57faf8));
  uRam0000000183367828 =
       (uRam0000000183367828 ^ uRam0000000183367770 ^ 0x3f20b77480025f84) + 0x3f24b77eaa77dfdd ^
       0xa7c4eb795afb584d;
  uRam0000000183367898 =
       (uRam0000000183367898 * 0x6a5c3e457172864d ^ uRam0000000183367828) +
       (uRam0000000183367770 ^ 0x3f20b77480025f84);
  uRam0000000183367818 = uRam0000000183367898 ^ uRam0000000183367828;
  uRam0000000183367860 = 0x3f24b77eaa77dfdd;
  uRam0000000183367c60 = func_0x00018d7a7660(uRam0000000183367890 ^ 0x184dc3f762fe8c1f);
  uRam00000001833677c8 =
       (uRam00000001833677c8 ^ ~uRam0000000183367c60 & 0x229e3e15ef10f609) + 0x49c40e697caeeed8 ^
       0x16c3730f33baa9b9;
  uRam0000000183367bc8 =
       (uRam0000000183367bc8 * 0x3b32b143540d2bf5 ^ uRam00000001833677c8) +
       (~uRam0000000183367c60 & 0x229e3e15ef10f609);
  uRam0000000183367ae8 = uRam0000000183367bc8 ^ uRam00000001833677c8;
  uRam0000000183367c18 = 0x49c40e697caeeed8;
  uVar3 = (uRam0000000183367988 ^ _UNK_182290ee0) + uRam00000001833677b0 + 0x84222325;
  uVar8 = (uRam00000001833677b0 ^ _UNK_182290ee8) + uRam0000000183367988 + 0xe00c750569594ff0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183367988 ^ _UNK_182290ee0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833677b0 ^ _UNK_182290ee8;
  uRam0000000183367b80 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183367988 + 0xe00c750569594ff0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833677b0 + 0x84222325));
  uRam0000000183367758 = uRam0000000183367758 + 0x1ff38afa96a6b010 ^ 0x796ba174c391457c;
  uRam0000000183367968 = uRam0000000183367cb0 * -0x6681281d635f8069;
  uRam0000000183367cb0 = uRam0000000183367968 ^ uRam0000000183367758;
  uRam0000000183367940 = 0x1ff38afa96a6b010;
  uRam0000000183367c20 = func_0x00018d7a7660(uRam00000001833677a8 + 0x14bbf66a539b28a ^ 0x1c);
  uVar3 = uRam0000000183367c20 << 0x33 | uRam0000000183367c20 >> 0xd;
  uRam00000001833677f0 = uRam0000000183367cd8 ^ uVar3 ^ 0x7fff;
  uRam0000000183367a48 = (uRam0000000183367a48 ^ uVar3) + 0x7fff ^ 0xba905655440a3ae5;
  uRam0000000183367900 = (uRam0000000183367900 * 0x1d7c68778c31c869 ^ uRam0000000183367a48) + uVar3;
  uRam00000001833678f0 = uRam0000000183367900 ^ uRam0000000183367a48;
  uRam0000000183367c28 = 0x7fff;
  uRam0000000183367cc0 = func_0x00018d7a7660(uRam0000000183367930 ^ 0x7efeee6ebc7001c3);
  uRam0000000183367b28 =
       (uRam0000000183367b28 ^ 0x8711f08175232061) + 0x78ee0f7e8adcdf9f ^ 0x4ab264a9a769e8ff;
  uRam0000000183367aa0 =
       (uRam0000000183367aa0 * 0xfd68a2b99e590d9 ^ uRam0000000183367b28) + 0x8711f08175232061;
  uRam0000000183367b60 = uRam0000000183367aa0 ^ uRam0000000183367b28;
  uRam0000000183367790 = 0x78ee0f7e8adcdf9f;
  uVar3 = (~uRam0000000183367820 + 0x8711f08175232062) *
          ((uRam0000000183367b78 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183367b78 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183367998) + (uVar3 & uRam0000000183367998);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833677b0 =
       func_0x00018d7a7660((uVar3 | 0x8711f081f1017cbb) + (uVar3 & 0x8711f081f1017cbb));
  uVar3 = (ulonglong)(~(uint)uRam00000001833677b0 & 0x7fff);
  uRam0000000183367940 = uRam0000000183367998 ^ uVar3 ^ 0x8711f0817523a060;
  uRam0000000183367c98 = (uRam0000000183367c98 ^ uVar3) + 0x8711f0817523a060 ^ 0x60b496d8bb83730;
  uRam0000000183367b18 = (uRam0000000183367b18 * 0x902005e6d590c9f ^ uRam0000000183367c98) + uVar3;
  uRam0000000183367920 = uRam0000000183367b18 ^ uRam0000000183367c98;
  uRam0000000183367778 = 0x8711f0817523a060;
  uRam00000001833677d8 = func_0x00018d7a7660(uRam00000001833677c8 ^ 0xc4d42ce5250324cb);
  uRam00000001833679a8 = uRam0000000183367a40 ^ uRam00000001833677d8 ^ 0x7fff;
  uRam0000000183367a30 = (uRam0000000183367a30 ^ uRam00000001833677d8) + 0x7fff ^ 0xbb0152e5e8b016ec
  ;
  uRam0000000183367710 =
       (uRam0000000183367710 * -0x1a7faa6b903f5c6b ^ uRam0000000183367a30) + uRam00000001833677d8;
  uRam00000001833678d0 = uRam0000000183367710 ^ uRam0000000183367a30;
  uRam0000000183367980 = 0x7fff;
  uVar3 = (uRam0000000183367900 ^ _UNK_182290ef0) + uRam00000001833677a8 + 0x84222325;
  uVar8 = (uRam00000001833677a8 ^ _UNK_182290ef8) + uRam0000000183367900 + 0xdab1dd11f7f09834;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183367900 ^ _UNK_182290ef0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833677a8 ^ _UNK_182290ef8;
  uRam0000000183367bd0 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183367900 + 0xdab1dd11f7f09834) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833677a8 + 0x84222325));
  uVar3 = (uRam0000000183367bd0 << 0x2d | uRam0000000183367bd0 >> 0x13) * 0x6979da2a7092034b;
  uRam00000001833677f8 = (uRam00000001833677f8 ^ uVar3) + 0x254e22ee080f67cc ^ 0x5ed5125673367854;
  uRam0000000183367908 = (uRam0000000183367908 * -0xebed103315c36c9 ^ uRam00000001833677f8) + uVar3;
  uRam00000001833677b0 = uRam0000000183367908 ^ uRam00000001833677f8;
  uRam0000000183367880 = 0x254e22ee080f67cc;
  uVar3 = (uRam00000001833678e8 ^ _UNK_182290f00) + uRam0000000183367be8 + 0x84225cda;
  uVar8 = (uRam0000000183367be8 ^ _UNK_182290f08) + uRam00000001833678e8 + 0xdab1dd11f7f09834;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833678e8 ^ _UNK_182290f00;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183367be8 ^ _UNK_182290f08;
  uRam0000000183367a90 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833678e8 + 0xdab1dd11f7f09834) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183367be8 + 0x84225cda));
  uVar3 = uRam0000000183367a90 ^ 0xdab1dd11f7f0ffff;
  uRam0000000183367a88 = uRam0000000183367bd0 ^ uVar3 ^ 0xdab1dd11f7f11833;
  uRam0000000183367c40 = (uRam0000000183367c40 ^ uVar3) + 0xdab1dd11f7f11833 ^ 0x7928d518398d14da;
  uRam0000000183367968 = (uRam0000000183367968 * -0x2cc9a80802c35c25 ^ uRam0000000183367c40) + uVar3
  ;
  uRam0000000183367900 = uRam0000000183367968 ^ uRam0000000183367c40;
  uRam00000001833679b8 = 0xdab1dd11f7f11833;
  uVar3 = (uRam0000000183367ad0 ^ _UNK_182290f10) + uRam00000001833677b8 + 0xdab1dd1173d33b16;
  uVar8 = (uRam00000001833677b8 ^ _UNK_182290f18) + uRam0000000183367ad0 + 0x254e22ee080f67cc;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183367ad0 ^ _UNK_182290f10;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833677b8 ^ _UNK_182290f18;
  uRam0000000183367b78 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183367ad0 + 0x254e22ee080f67cc) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833677b8 + 0xdab1dd1173d33b16));
  uVar3 = (uRam0000000183367b78 ^ 0xffffffffffff7fff) & 0x7fffffffffffffff;
  uRam0000000183367be8 = uRam0000000183367ad0 ^ uVar3 ^ 0x7fff;
  uRam0000000183367c90 = (uRam0000000183367c90 ^ uVar3) + 0x7fff ^ 0xe791c1544bca6ceb;
  uRam0000000183367a58 = (uRam0000000183367a58 * 0x2951575043f8cbc1 ^ uRam0000000183367c90) + uVar3;
  uRam0000000183367828 = uRam0000000183367a58 ^ uRam0000000183367c90;
  uRam0000000183367a70 = uRam0000000183367a60 ^ 0x7fff;
  uRam0000000183367960 = 0x7fff;
  uVar3 = (~uRam0000000183367798 + 0x49c40e697caeeed9) *
          ((uRam0000000183367988 ^ 0x3f24b77e2e55fcf8) +
          (uRam0000000183367988 & 0x3f24b77e2e55fcf8) * 2);
  uVar3 = (uVar3 | uRam0000000183367ca0) + (uVar3 & uRam0000000183367ca0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183367910 =
       func_0x00018d7a7660((uVar3 | 0x76e0b91752fb1220) + (uVar3 & 0x76e0b91752fb1220));
  uVar3 = (uRam0000000183367910 ^ 0x77eaa77dfdd) & 0xfffffffffff;
  uRam0000000183367ac8 = uRam0000000183367720 ^ uVar3 ^ 0x88e8c5e82726ceb5;
  uRam00000001833677a0 = (uRam00000001833677a0 ^ uVar3) + 0x88e8c5e82726ceb5 ^ 0x9833d774c1b07dfd;
  uRam0000000183367870 = (uRam0000000183367870 * 0x73058527e509bb8d ^ uRam00000001833677a0) + uVar3;
  uRam0000000183367938 = uRam0000000183367870 ^ uRam00000001833677a0;
  uRam0000000183367b60 = 0x88e8c5e82726ceb5;
  uVar3 = (uRam0000000183367bf8 ^ _UNK_182290f20) + uRam0000000183367b98 + 0x3f24b77e2e55fcf8;
  uVar8 = (uRam0000000183367b98 ^ _UNK_182290f28) + uRam0000000183367bf8 + 0x49c40e697caeeed8;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183367bf8 ^ _UNK_182290f20;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183367b98 ^ _UNK_182290f28;
  uRam00000001833677f0 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183367bf8 + 0x49c40e697caeeed8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183367b98 + 0x3f24b77e2e55fcf8));
  uRam0000000183367ad8 =
       (uRam0000000183367ad8 ^ uRam00000001833677f0 * -0x49e677956083ed3) + 0x90406682826ced8 ^
       0x53d0439e423de193;
  uRam0000000183367738 =
       (uRam0000000183367738 * 0x58156d668fdc2c13 ^ uRam0000000183367ad8) +
       uRam00000001833677f0 * -0x49e677956083ed3;
  uRam00000001833678b8 = uRam0000000183367738 ^ uRam0000000183367ad8;
  uRam0000000183367c78 = 0x90406682826ced8;
  uVar3 = (~uRam0000000183367c30 + 0x12080cd0504d9db1) *
          ((uRam0000000183367a90 ^ 0x76e0b91752fb1220) +
          (uRam0000000183367a90 & 0x76e0b91752fb1220) * 2);
  uVar3 = (uVar3 | uRam0000000183367b78) + (uVar3 & uRam0000000183367b78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833678d8 =
       func_0x00018d7a7660((uVar3 | 0x64e8b5c702b68f90) + (uVar3 & 0x64e8b5c702b68f90));
  uVar3 = (uRam00000001833678d8 & 0xfffffffffffffc00) -
          (uRam00000001833678d8 >> 1 & 0x5555555555555400);
  uVar3 = (uVar3 & 0x3333333333333000) + (uVar3 >> 2 & 0x3333333333333300);
  uVar3 = (uRam00000001833678d8 & 0xfffffffffffffc00) +
          (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f00) * 0x101010101010101 >> 0x38) * 2;
  uRam0000000183367830 = uRam0000000183367c58 ^ uVar3 ^ 0x88e8c5e82726ceb5;
  uRam0000000183367c80 = (uRam0000000183367c80 ^ uVar3) + 0x88e8c5e82726ceb5 ^ 0x84fc043b25f63b61;
  uRam0000000183367c90 = (uRam0000000183367c90 * 0x12e0db9a0947cbfd ^ uRam0000000183367c80) + uVar3;
  uRam0000000183367750 = uRam0000000183367c90 ^ uRam0000000183367c80;
  uRam0000000183367868 = 0x88e8c5e82726ceb5;
  uVar3 = (uRam0000000183367a58 ^ 0x84225cda) + uRam0000000183367c68 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183367a58 ^ 0x84225cda;
  uVar8 = ((uRam0000000183367c68 + uRam0000000183367a58) * 0x2000 |
          uRam0000000183367c68 + uRam0000000183367a58 >> 0x33) ^ uRam0000000183367c68;
  uRam0000000183367710 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183367a58 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183367c68 + 0x84225cda));
  uVar3 = (uRam0000000183367710 << 0x38 | uRam0000000183367710 >> 8) * 0x59d105208d96ac95;
  uRam0000000183367c78 = uRam0000000183367960 ^ uVar3 ^ 0x7fff;
  uRam0000000183367930 = (uRam0000000183367930 ^ uVar3) + 0x7fff ^ 0xcfd30b500090d890;
  uRam0000000183367b20 =
       (uRam0000000183367b20 * -0x6fb2caf49a16b55b ^ uRam0000000183367930) + uVar3 ^
       uRam0000000183367930;
  uRam0000000183367ac8 = 0x7fff;
  uVar3 = (uRam0000000183367b50 ^ _UNK_182290f30) + uRam0000000183367758 + 0x3f24b77e2e55fcf8;
  uVar8 = (uRam0000000183367758 ^ _UNK_182290f38) + (uRam0000000183367b50 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183367b50 ^ _UNK_182290f30;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183367758 ^ _UNK_182290f38;
  uRam0000000183367b88 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183367b50 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183367758 + 0x3f24b77e2e55fcf8));
  uVar3 = (uRam0000000183367b88 << 0x11 | uRam0000000183367b88 >> 0x2f) << 0x15 |
          (uRam0000000183367b88 & 0x7fffffffffff) >> 0x1a;
  uRam0000000183367a30 = (uRam0000000183367a30 ^ uVar3) + 0xc0db488155882022 ^ 0xb32246e276b791b6;
  uRam0000000183367a08 = (uRam0000000183367a08 * -0x7fb7bee810430af3 ^ uRam0000000183367a30) + uVar3
  ;
  uRam0000000183367750 = uRam0000000183367a08 ^ uRam0000000183367a30;
  uRam0000000183367cb8 = 0xc0db488155882022;
  uVar3 = ((uRam0000000183367890 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183367890 & 0x84225cda) * 2) * -uRam0000000183367cf0;
  uVar3 = (uVar3 | uRam0000000183367910) + (uVar3 & uRam0000000183367910);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183367970 =
       func_0x00018d7a7660((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uRam00000001833679a8 = uRam0000000183367c80 ^ uRam0000000183367970 ^ 0x7fff;
  uRam0000000183367b10 = (uRam0000000183367b10 ^ uRam0000000183367970) + 0x7fff ^ 0x6ce9ea2d17b771d9
  ;
  uRam0000000183367748 =
       (uRam0000000183367748 * -0x5ffea9d76ef53bff ^ uRam0000000183367b10) + uRam0000000183367970;
  uRam0000000183367728 = uRam0000000183367748 ^ uRam0000000183367b10;
  uRam0000000183367ba8 = 0x7fff;
  uRam0000000183367a08 = func_0x00018d7a7660(uRam0000000183367cd0 ^ 0x22ff7bdaffdde8);
  uVar3 = (uRam0000000183367a08 ^ 0x3f20007480025f84) << 0x18 |
          (uRam0000000183367a08 ^ 0x3f20007480025f84) >> 0x28 & 0xfffffffffffff000;
  uRam0000000183367790 = uRam0000000183367a30 ^ uVar3 ^ 0xfec920c83b3e25aa;
  uRam0000000183367ab0 = (uRam0000000183367ab0 * 0x53f1d54514839675 ^ uRam0000000183367790) + uVar3;
  uRam0000000183367790 = uRam0000000183367ab0 ^ uRam0000000183367790;
  uRam0000000183367a30 = 0;
  uVar3 = ((uRam0000000183367758 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183367758 & 0x84225cda) * 2) * -uRam0000000183367a08;
  uVar3 = (uVar3 | uRam0000000183367730) + (uVar3 & uRam0000000183367730);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183367930 =
       func_0x00018d7a7660((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uRam0000000183367ab0 = uRam0000000183367a78 ^ uRam0000000183367a90 ^ 0x7fff;
  uRam0000000183367bf0 = (uRam0000000183367bf0 ^ uRam0000000183367a90) + 0x7fff ^ 0xbb32db89e68dba88
  ;
  uRam0000000183367c38 =
       (uRam0000000183367c38 * -0x45c61988124990e7 ^ uRam0000000183367bf0) + uRam0000000183367a90;
  uRam0000000183367bf0 = uRam0000000183367c38 ^ uRam0000000183367bf0;
  uRam0000000183367ad0 = 0x7fff;
  uVar3 = param_4 ^ 0x84222325 ^ uRam0000000183367970;
  lVar4 = (param_4 ^ 0x84222325) + uRam0000000183367b98;
  uVar8 = uVar3 + lVar4;
  uVar11 = (uRam0000000183367b98 ^ 0x7fff) + uRam0000000183367970 + 0x7fff;
  uVar3 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar3;
  uVar8 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam0000000183367b98 ^ 0x7fff;
  uRam0000000183367ac0 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183367970 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar3 = uRam0000000183367ac0 >> 1 | uRam0000000183367ac0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam0000000183367ac0;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar8 = (ulonglong)uVar2;
  uRam0000000183367860 = (uRam0000000183367860 ^ uVar3) + uVar8 ^ 0x6d98f174bd3556d1;
  uRam0000000183367b18 = (uRam0000000183367b18 * 0x67ef98ce4dca4133 ^ uRam0000000183367860) + uVar3;
  uRam0000000183367cb0 = uRam0000000183367b18 ^ uRam0000000183367860;
  uVar11 = (ulonglong)param_3;
  uVar3 = uVar8 ^ 0x84222325 ^ uRam0000000183367a80;
  lVar4 = (uVar8 ^ 0x84222325) + uRam0000000183367cb0;
  uVar7 = uVar3 + lVar4;
  uVar9 = (uVar11 ^ uRam0000000183367cb0) + uRam0000000183367a80 + uVar11;
  uVar3 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar3;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar11 ^ uRam0000000183367cb0;
  uRam0000000183367840 = uVar8;
  uRam0000000183367ac8 =
       func_0x00018d7a7660((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183367a80 + uVar11) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar7 = (uVar8 + uVar11) - (ulonglong)((param_3 & uVar2) * 2);
  uRam0000000183367920 =
       (uRam0000000183367920 ^ uRam0000000183367ac8 & 0x7fffffffffffffff) + uVar7 ^
       0x920e4d3672ee6164;
  uRam0000000183367840 =
       (uRam0000000183367840 * -0xa4dcd9a4e3988e1 ^ uRam0000000183367920) +
       (uRam0000000183367ac8 & 0x7fffffffffffffff);
  uRam0000000183367a98 = uRam0000000183367840 ^ uRam0000000183367920;
  uVar9 = uVar7 & 0xffffffff;
  uRam0000000183367cc0 = uVar9;
  uRam0000000183367790 = func_0x00018d7a7660(uRam0000000183367ad8 + 0x390069aa0076ff ^ 0x5b);
  uVar3 = uRam0000000183367790 << 0x30 | uRam0000000183367790 >> 0x10;
  uVar8 = (uRam00000001833678e8 ^ uVar3) + 0x2dabecf3 ^ 0x3356ff69bc34eb96;
  uRam0000000183367a08 = (uRam0000000183367a08 * -0x52299ea9d0e5f0b9 ^ uVar8) + uVar3 ^ uVar8;
  uRam00000001833678e8 = 0x2dabecf3;
  uRam0000000183367a98 = func_0x00018d7a7660(uRam0000000183367950 ^ 0xff92ff65fb001dd0);
  uVar3 = uRam0000000183367a98 >> 1 | uRam0000000183367a98;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam0000000183367a98;
  uVar3 = uVar8 >> 1 | uVar8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar8;
  uRam00000001833679f0 = (uRam00000001833679f0 ^ uVar8) - 0x2e008e20 ^ 0xe8d0ac15cb0be23a;
  uRam0000000183367910 = (uRam0000000183367910 * -0x7c755aab11d0c55f ^ uRam00000001833679f0) + uVar8
  ;
  uRam00000001833679e0 = uRam0000000183367910 ^ uRam00000001833679f0;
  uRam0000000183367b68 = 0xd1ff71e0;
  uVar3 = (~uRam0000000183367808 + 0x2e008e21) *
          ((uRam0000000183367a18 ^ 0x84223266) +
          (ulonglong)((uint)uRam0000000183367a18 & 0x84223266) * 2);
  uVar3 = (uVar3 | uRam00000001833679e8) + (uVar3 & uRam00000001833679e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183367750 =
       func_0x00018d7a7660((uVar3 | 0xaa22bc46) + (ulonglong)((uint)uVar3 & 0xaa22bc46));
  uVar3 = uRam0000000183367750 * -0x4b96b58dcf12020b;
  uRam0000000183367c68 = uRam00000001833677d8 ^ uVar3 ^ 0x2e009f63;
  uRam0000000183367790 = (uRam0000000183367790 ^ uVar3) + 0x2e009f63 ^ 0x3c328217ced306b7;
  uRam0000000183367a28 = (uRam0000000183367a28 * 0xb34773538eeece3 ^ uRam0000000183367790) + uVar3;
  uRam0000000183367778 = uRam0000000183367a28 ^ uRam0000000183367790;
  uRam00000001833679b0 = 0x2e009f63;
  uVar3 = (uRam00000001833678f8 ^ _UNK_182290f40) + uRam0000000183367b50 + 0xaa22bc46;
  uVar8 = (uRam0000000183367b50 ^ _UNK_182290f48) + uRam00000001833678f8 + 0xd1ff71e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833678f8 ^ _UNK_182290f40;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183367b50 ^ _UNK_182290f48;
  uRam00000001833679f0 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833678f8 + 0xd1ff71e0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183367b50 + 0xaa22bc46));
  uVar3 = uRam00000001833679f0 << 0x24 | uRam00000001833679f0 >> 0x1c;
  uRam0000000183367728 = uRam0000000183367cf8 ^ uVar3 ^ 0x100001143;
  uRam0000000183367c80 = (uRam0000000183367c80 ^ uVar3) + 0x100001143 ^ 0xe216f6eb161294f7;
  uRam0000000183367930 = (uRam0000000183367930 * -0x4215eea931239165 ^ uRam0000000183367c80) + uVar3
  ;
  uRam0000000183367cd8 = uRam0000000183367930 ^ uRam0000000183367c80;
  uRam0000000183367b28 = 0x1143;
  lRam0000000183367af8 = func_0x00018d7a7660(uRam0000000183367a50 + 0x66004ff9ff7cff ^ 0x79);
  uVar3 = (lRam0000000183367af8 << 1 | (ulonglong)(lRam0000000183367af8 < 0)) * -0x21c36ac0f0080d87;
  uVar3 = uVar3 << 0x38 | uVar3 >> 8;
  uRam0000000183367b20 = (uRam0000000183367b20 ^ uVar3) - 0xf4a18523 ^ 0xf7b8374e68b44e49;
  uRam0000000183367910 = (uRam0000000183367910 * -0x25fb70ab954c064d ^ uRam0000000183367b20) + uVar3
  ;
  uRam00000001833677a0 = uRam0000000183367910 ^ uRam0000000183367b20;
  uRam00000001833678a0 = 0xb5e7add;
  uVar3 = (~uRam00000001833677e0 + 0xf4a18524) *
          ((uRam0000000183367a28 ^ 0x84223266) +
          (ulonglong)((uint)uRam0000000183367a28 & 0x84223266) * 2);
  uVar3 = (uVar3 | uRam0000000183367c38) + (uVar3 & uRam0000000183367c38);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183367ad0 =
       func_0x00018d7a7660((uVar3 | 0x7083b745) + (ulonglong)((uint)uVar3 & 0x7083b745));
  uVar8 = uRam0000000183367ad0 ^ 0xf4a19563;
  uVar3 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar8;
  uRam0000000183367b20 = uRam0000000183367860 ^ uVar8 ^ 0xf4a19666;
  uRam0000000183367740 = (uRam0000000183367740 ^ uVar8) + 0xf4a19666 ^ 0x5c911846be9c60ac;
  uRam0000000183367b70 = (uRam0000000183367b70 * -0x4e0e44bdcca9773d ^ uRam0000000183367740) + uVar8
  ;
  uRam0000000183367b60 = uRam0000000183367b70 ^ uRam0000000183367740;
  uRam0000000183367988 = 0xf4a19666;
  uRam00000001833678f0 = func_0x00018d7a7660(uRam0000000183367bc8 ^ 0x40ffda61ff4458);
  uRam0000000183367a30 = uRam0000000183367bf0 ^ uRam00000001833678f0 ^ 0x100001143;
  uRam0000000183367cb8 =
       (uRam0000000183367cb8 ^ uRam00000001833678f0) + 0x100001143 ^ 0xe02cc79dd9195fce;
  uRam0000000183367ba8 =
       (uRam0000000183367ba8 * -0x5a57cec2a4d3bbb7 ^ uRam0000000183367cb8) + uRam00000001833678f0;
  uRam0000000183367c38 = uRam0000000183367ba8 ^ uRam0000000183367cb8;
  uRam0000000183367c18 = 0x1143;
  uVar3 = (_UNK_182290f50 ^ 0x1143) + uRam0000000183367c08 + 0x84222325;
  uVar8 = (uRam0000000183367c08 ^ _UNK_182290f58) + 0x8389a3c9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _UNK_182290f50 ^ 0x1143;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183367c08 ^ _UNK_182290f58;
  uRam0000000183367a38 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) - 0x8389a3c9 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183367c08 + 0x84222325));
  uVar3 = (uRam0000000183367a38 << 9 | uRam0000000183367a38 >> 0x37) * -0x1b874c3965a55a83;
  uVar8 = uVar3 >> 1 | uVar3;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar3;
  uRam0000000183367728 = (uRam0000000183367728 ^ uVar3) - 0x83899286 ^ 0xb9a44c6537b012f4;
  uRam0000000183367b20 = (uRam0000000183367b20 * 0x1f8fa65d02ccb8e3 ^ uRam0000000183367728) + uVar3;
  uRam0000000183367b98 = uRam0000000183367b20 ^ uRam0000000183367728;
  uRam00000001833677c0 = 0x7c766d7a;
  uVar3 = (~uRam0000000183367938 + 0x83899287) *
          ((uRam0000000183367b80 ^ 0x84223266) +
          (ulonglong)((uint)uRam0000000183367b80 & 0x84223266) * 2);
  uVar3 = (uVar3 | uRam0000000183367778) + (uVar3 & uRam0000000183367778);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183367760 =
       func_0x00018d7a7660((uVar3 | 0x7aba0e0) + (ulonglong)((uint)uVar3 & 0x7aba0e0));
  uVar8 = _UNK_182290f68;
  uVar3 = _UNK_182290f60;
  uVar11 = (ulonglong)(~(uint)uRam0000000183367760 & 0x1143);
  uRam0000000183367c10 = uRam0000000183367ce8 ^ uVar11 ^ 0x8389a3c9;
  uRam0000000183367c68 = (uRam0000000183367c68 ^ uVar11) + 0x8389a3c9 ^ 0x52b6415b2729d5a6;
  uRam0000000183367a38 =
       (uRam0000000183367a38 * -0x1a756aaf920f887d ^ uRam0000000183367c68) + uVar11;
  uRam0000000183367b90 = uRam0000000183367a38 ^ uRam0000000183367c68;
  uRam0000000183367888 = 0x8389a3c9;
  uVar11 = (uRam00000001833679f8 ^ _UNK_182290f60) + uRam0000000183367bf8 + 0x7dad1cf8;
  uVar10 = (uRam0000000183367bf8 ^ _UNK_182290f68) + uRam00000001833679f8 + 0x2dabecf3;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001833679f8 ^ _UNK_182290f60;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183367bf8 ^ _UNK_182290f68;
  uRam0000000183367a80 =
       func_0x00018d7a7660((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam00000001833679f8 + 0x2dabecf3) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - (uRam0000000183367bf8 + 0x7dad1cf8));
  uVar11 = uRam0000000183367a80 ^ 0x2dabecf3;
  uRam00000001833678a8 = uRam0000000183367940 ^ uVar11 ^ 0x1273b2cd0;
  uRam0000000183367ba8 = (uRam0000000183367ba8 ^ uVar11) + 0x1273b2cd0 ^ 0x761208ee22eec9a;
  uRam0000000183367a48 =
       (uRam0000000183367a48 * -0x64bb3a4fd8c6bfa3 ^ uRam0000000183367ba8) + uVar11;
  uRam0000000183367cf0 = uRam0000000183367a48 ^ uRam0000000183367ba8;
  uRam0000000183367868 = 0x273b2cd0;
  uVar11 = (uRam00000001833679f8 ^ uVar3) + uRam0000000183367970 + 0x7dad1cf8;
  uVar10 = (uRam0000000183367970 ^ uVar8) + uRam00000001833679f8 + 0x2dabecf3;
  uVar3 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uRam00000001833679f8 ^ uVar3;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183367970 ^ uVar8;
  uRam0000000183367ce0 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833679f8 + 0x2dabecf3) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183367970 + 0x7dad1cf8));
  uRam0000000183367740 =
       (uRam0000000183367740 ^ uRam0000000183367ce0 ^ 0xf98f3fdd) + 0xd424d32e ^ 0xbb56ebf126070828;
  uRam00000001833679b0 =
       (uRam00000001833679b0 * 0xaec193ab601df35 ^ uRam0000000183367740) +
       (uRam0000000183367ce0 ^ 0xf98f3fdd);
  uRam0000000183367a00 = uRam00000001833679b0 ^ uRam0000000183367740;
  uRam0000000183367898 = 0xd424d32e;
  uRam0000000183367a38 = func_0x00018d7a7660(uRam00000001833678c0 ^ 0xb0004ff6fffdf1);
  uVar3 = (uRam0000000183367a38 ^ 0x80000000) & 0x7fffffff80000000;
  uRam00000001833679c8 = (uRam00000001833679c8 ^ uVar3) + 0x298b2cd1 ^ 0xe9cb407769a1c20a;
  uRam00000001833678e0 = (uRam00000001833678e0 * -0x244b145475a2331 ^ uRam00000001833679c8) + uVar3;
  uRam0000000183367a00 = uRam00000001833678e0 ^ uRam00000001833679c8;
  uRam0000000183367c18 = 0x298b2cd1;
  uVar3 = (~uRam0000000183367aa8 + 0x531659a3) *
          ((uRam0000000183367a60 ^ 0x5006f00b) +
          (ulonglong)((uint)uRam0000000183367a60 & 0x5006f00b) * 2);
  uVar3 = (uVar3 | uRam0000000183367c60) + (uVar3 & uRam0000000183367c60);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833677c0 =
       func_0x00018d7a7660((uVar3 | 0x310a9a9) + (ulonglong)((uint)uVar3 & 0x310a9a9));
  uVar3 = (uRam00000001833677c0 ^ 0xd736da00) & 0xfffffffffffffe00;
  uRam0000000183367b48 = uRam0000000183367cc8 ^ uVar3 ^ 0x1273b2cd0;
  uRam0000000183367a08 = (uRam0000000183367a08 ^ uVar3) + 0x1273b2cd0 ^ 0x3914b696ade5a4f7;
  uRam0000000183367a50 = (uRam0000000183367a50 * -0x2be42c07dead56e7 ^ uRam0000000183367a08) + uVar3
  ;
  uRam0000000183367b98 = uRam0000000183367a50 ^ uRam0000000183367a08;
  uRam0000000183367790 = 0x273b2cd0;
  uRam0000000183367b30 = func_0x00018d7a7660(uRam0000000183367a48 + 0xff1cff7e01002dff ^ 0x7a);
  uRam0000000183367b98 =
       (uRam0000000183367b98 ^ uRam0000000183367b30 & 0x7fffffffffffffff) + 0x670c022 ^
       0xf0f5070c2dbda0a9;
  uRam0000000183367810 =
       (uRam0000000183367810 * 0x1ccbb03660ae022f ^ uRam0000000183367b98) +
       (uRam0000000183367b30 & 0x7fffffffffffffff);
  uRam0000000183367720 = uRam0000000183367810 ^ uRam0000000183367b98;
  uRam0000000183367730 = 0x670c022;
  uRam0000000183367bb8 = func_0x00018d7a7660(uRam0000000183367868 ^ 0xffcdff7c1dffe1f9);
  uRam0000000183367b30 = uRam0000000183367a18 ^ uRam0000000183367bb8 ^ 0x1143;
  uRam0000000183367710 = (uRam0000000183367710 ^ uRam0000000183367bb8) + 0x1143 ^ 0xc708ef8105053341
  ;
  uRam0000000183367a08 =
       (uRam0000000183367a08 * 0x342ffa5f283d9587 ^ uRam0000000183367710) + uRam0000000183367bb8;
  uRam00000001833678e0 = uRam0000000183367a08 ^ uRam0000000183367710;
  uRam00000001833677b8 = 0x1143;
  uVar3 = (uRam0000000183367bd8 ^ _UNK_182290f70) + uRam0000000183367910 + 0x7daf182c;
  uVar8 = (uRam0000000183367910 ^ _UNK_182290f78) + uRam0000000183367bd8 + 0xf98d3b09;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183367bd8 ^ _UNK_182290f70;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183367910 ^ _UNK_182290f78;
  uRam0000000183367840 =
       func_0x00018d7a7660((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183367bd8 + 0xf98d3b09) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183367910 + 0x7daf182c));
  uVar3 = uRam0000000183367840 - (uRam0000000183367840 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183367840) & 0xfffffffffffffff8;
  uRam0000000183367c10 = uRam0000000183367c10 ^ uVar3 ^ 0x5683f0a5f58bc450;
  uRam0000000183367cc0 = (uRam0000000183367cc0 * 0xace650f661abef5 ^ uRam0000000183367c10) + uVar3;
  uRam0000000183367cd8 = uRam0000000183367cc0 ^ uRam0000000183367c10;
  auVar5._8_8_ = _UNK_182290f88;
  auVar5._0_8_ = uVar9 ^ 0x84222325;
  uRam0000000183367a60 = uRam00000001833679d0;
  auVar6 = pshufb(auVar5 ^ _UNK_182290f90,_UNK_1800170c0);
  uRam0000000183367870 = 0;
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar8 + uRam0000000183367968;
  if (auVar6._4_4_ < 0) {
    uVar3 = uRam0000000183367908 ^ uVar8;
  }
  uRam0000000183367728 = func_0x00018d7a7660(SUB161(auVar5 ^ _UNK_182290f90,5) ^ uVar3);
  uVar3 = uRam0000000183367728 & 0xfffffffffffffe00;
  uVar8 = uVar3 >> 1 | uVar3;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  uVar3 = uVar3 << 0x13 | uVar3 >> 0x2d;
  lVar4 = uVar9 - ((uint)uVar7 & 0x1143) * 2;
  uRam0000000183367710 = (uRam0000000183367710 ^ uVar3) + lVar4 + 0x1143 ^ 0x6dfc12b7949da77;
  uRam0000000183367cf0 = (uRam0000000183367cf0 * -0x39a3e10bb037d403 ^ uRam0000000183367710) + uVar3
  ;
  uRam0000000183367b78 = uRam0000000183367cf0 ^ uRam0000000183367710;
  uRam00000001833677a8 = lVar4 + 0x1143U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xc177,0x211);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d79e7dc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18228f080 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ea; arm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d7a76f0, runtime 6ffff53b76f0) =====

void FUN_18d7a76f0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d7a773b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1822910c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ea; arn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d7a8700, runtime 6ffff53b8700) =====

void FUN_18d7a8700(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d7a8789 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182291680 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



