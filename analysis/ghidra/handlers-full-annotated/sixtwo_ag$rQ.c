// ===== Lsixtwo/ag$rQ; _fc2aedec5c4f4301afb5097c041378f4 ()V (handler @ image 18ff083d0, runtime 6ffff7b183d0) =====

void FUN_18ff083d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ff084ac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b627e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; a (IJ)Ljava/lang/String; (handler @ image 18fefd390, runtime 6ffff7b0d390) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fefd390(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar6 = (~uRam0000000183441b60 + 0x4ba1e4a9358df064) *
          ((uRam0000000183441938 ^ 0x5bb16579eb9c23ae) +
          (uRam0000000183441938 & 0x5bb16579eb9c23ae) * 2);
  uVar6 = (uVar6 | uRam0000000183441cc8) + (uVar6 & uRam0000000183441cc8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441ce8 =
       func_0x00018ff04980((uVar6 | 0x101081d0de11d3cd) + (uVar6 & 0x101081d0de11d3cd));
  uVar6 = (uRam0000000183441ce8 >> 0xf) * 0x4994395c2968000;
  uRam0000000183441a10 = (uRam0000000183441a10 ^ uVar6) + 0x5bb1e5f97fbff0eb ^ 0x8cbb5999e32aa56f;
  uRam0000000183441cf0 = (uRam0000000183441cf0 * 0xee69a32ced3fa4b ^ uRam0000000183441a10) + uVar6;
  uRam0000000183441aa0 = uRam0000000183441cf0 ^ uRam0000000183441a10;
  uRam0000000183441c18 = 0x5bb1e5f97fbff0eb;
  uRam0000000183441c38 = func_0x00018ff04980(uRam0000000183441930 ^ 0x26fc2f7619334868);
  uVar6 = uRam0000000183441c38 - (uRam0000000183441c38 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183441c38;
  uRam0000000183441ce8 = (uRam0000000183441ce8 ^ uVar6) + 0xf8cfaa14cd65c034 ^ 0xc1aced839427e9ab;
  uRam0000000183441b78 = (uRam0000000183441b78 * -0x74ecf4fd0947b0c1 ^ uRam0000000183441ce8) + uVar6
  ;
  uRam00000001834419f8 = uRam0000000183441b78 ^ uRam0000000183441ce8;
  uRam0000000183441a50 = 0xf8cfaa14cd65c034;
  uVar6 = (~uRam0000000183441918 + 0x73055eb329a3fcd) *
          ((uRam0000000183441958 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183441958 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam0000000183441b78) + (uVar6 & uRam0000000183441b78);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441c28 =
       func_0x00018ff04980((uVar6 | 0x73055ebb6b86316) + (uVar6 & 0x73055ebb6b86316));
  uVar6 = (uRam0000000183441c28 & 0xfffffffffffe0000) << 0x1f | uRam0000000183441c28 >> 0x21;
  uRam0000000183441c18 = uRam0000000183441a60 ^ uVar6 ^ 0x73055eb329abfcb;
  uRam0000000183441b88 = (uRam0000000183441b88 ^ uVar6) + 0x73055eb329abfcb ^ 0x9c6366590f39b694;
  uRam0000000183441c50 = (uRam0000000183441c50 * 0x18555db465c98b77 ^ uRam0000000183441b88) + uVar6;
  uRam0000000183441a80 = uRam0000000183441c50 ^ uRam0000000183441b88;
  uRam0000000183441980 = 0x73055eb329abfcb;
  uVar6 = (uRam0000000183441c90 ^ _UNK_182b61150) + 0xe60abd6e9535cb9;
  uVar8 = (_UNK_182b61158 ^ 0x73055eb329abfcb) + uRam0000000183441c90 + 0xf8cfaa14cd65c034;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441c90 ^ _UNK_182b61150;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _UNK_182b61158 ^ 0x73055eb329abfcb;
  uRam0000000183441b40 =
       func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183441c90 + 0xf8cfaa14cd65c034) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) + 0xf19f542916aca347);
  uVar6 = (uRam0000000183441b40 ^ 0x73055eb329a0000) & 0xffffffffffff0000;
  uRam0000000183441b28 = uRam0000000183441ac0 ^ uVar6 ^ 0x7fff;
  uRam0000000183441a18 = (uRam0000000183441a18 ^ uVar6) + 0x7fff ^ 0x7fa753b2b1c2f4c7;
  uRam0000000183441ac0 = (uRam0000000183441ac0 * -0x4142b4b84f89c045 ^ uRam0000000183441a18) + uVar6
  ;
  uRam0000000183441968 = uRam0000000183441ac0 ^ uRam0000000183441a18;
  uRam0000000183441bc8 = 0x7fff;
  uVar6 = (uRam0000000183441ca0 ^ _UNK_182b61160) + uRam0000000183441950 + 0x84222325;
  uVar8 = (uRam0000000183441950 ^ _UNK_182b61168) + uRam0000000183441ca0 + 0xbf3f978ba51b86ce;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441ca0 ^ _UNK_182b61160;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183441950 ^ _UNK_182b61168;
  uRam0000000183441a00 =
       func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183441ca0 + 0xbf3f978ba51b86ce) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183441950 + 0x84222325));
  uVar6 = (uRam0000000183441a00 ^ 0x3f978ba51b86ce) & 0x7fffffffffffff;
  uRam0000000183441ca8 = (uRam0000000183441ca8 ^ uVar6) + 0x40c068745ae47932 ^ 0x64b337ea3237bf20;
  uRam0000000183441a18 = (uRam0000000183441a18 * -0x770a1e839faa817b ^ uRam0000000183441ca8) + uVar6
  ;
  uRam0000000183441cf8 = uRam0000000183441a18 ^ uRam0000000183441ca8;
  uRam0000000183441928 = uRam0000000183441bf8 ^ 0x40c068745ae47932;
  uRam0000000183441908 = 0x40c068745ae47932;
  uRam0000000183441cf8 = func_0x00018ff04980(uRam0000000183441a40 + 0x372ba929d6525614 ^ 0xa9);
  uVar6 = uRam0000000183441cf8 ^ 0x6adde8e9f44390a;
  uVar6 = (uVar6 & 0xffffffff) * (ulonglong)_UNK_182b61170 +
          ((ulonglong)_UNK_182b61180 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_UNK_182b61170 << 0x20) & 0x7fffffffffffffff;
  uRam0000000183441a60 = uRam0000000183441a38 ^ uVar6 ^ 0x7fff;
  uRam0000000183441b30 = (uRam0000000183441b30 ^ uVar6) + 0x7fff ^ 0x20a29c8a94c1bf7f;
  uRam0000000183441c78 = (uRam0000000183441c78 * 0x50ac707fb6f9944b ^ uRam0000000183441b30) + uVar6;
  uRam0000000183441bd8 = uRam0000000183441c78 ^ uRam0000000183441b30;
  uRam0000000183441b28 = 0x7fff;
  uVar6 = (uRam0000000183441cd8 ^ _UNK_182b61190) + uRam0000000183441c78 + 0x84222325;
  uVar8 = (uRam0000000183441c78 ^ _UNK_182b61198) + uRam0000000183441cd8 + 0x4b6fbccc57e71ebe;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441cd8 ^ _UNK_182b61190;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183441c78 ^ _UNK_182b61198;
  uVar6 = func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) -
                              (uRam0000000183441cd8 + 0x4b6fbccc57e71ebe) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183441c78 + 0x84222325))
  ;
  uRam0000000183441c50 = (uRam0000000183441c50 ^ uVar6) + 0xb4904333a818e142 ^ 0x3203a5e2073653f6;
  uRam0000000183441980 = (uRam0000000183441980 * -0x5e6b05f9b1e98d9f ^ uRam0000000183441c50) + uVar6
  ;
  uRam0000000183441910 = uRam0000000183441980 ^ uRam0000000183441c50;
  uRam0000000183441ae0 = 0xb4904333a818e142;
  uVar6 = (uRam0000000183441908 ^ _UNK_182b611a0) + uRam0000000183441c48 + 0x84225cda;
  uVar8 = (uRam0000000183441c48 ^ _UNK_182b611a8) + uRam0000000183441908 + 0x4b6fbccc57e71ebe;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441908 ^ _UNK_182b611a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183441c48 ^ _UNK_182b611a8;
  uVar6 = func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) -
                              (uRam0000000183441908 + 0x4b6fbccc57e71ebe) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183441c48 + 0x84225cda))
  ;
  uVar6 = (uVar6 ^ 0x4b6fbccc57e77fff) << 0x3d |
          ((uVar6 ^ 0x4b6fbccc57e77fff) & 0x7fffffffffffffff) >> 3;
  uRam0000000183441a60 = uRam0000000183441998 ^ uVar6 ^ 0x4b6fbccc57e79ebd;
  uRam0000000183441c10 = (uRam0000000183441c10 ^ uVar6) + 0x4b6fbccc57e79ebd ^ 0xa044edce1a129117;
  uRam0000000183441a78 = (uRam0000000183441a78 * 0x3a1b5ca6f4d5666f ^ uRam0000000183441c10) + uVar6;
  uRam0000000183441c00 = uRam0000000183441a78 ^ uRam0000000183441c10;
  uRam0000000183441a30 = 0x4b6fbccc57e79ebd;
  uVar6 = (uRam0000000183441b58 ^ _UNK_182b611b0) + uRam0000000183441be0 + 0x4b6fbcccd3c5bd98;
  uVar8 = (uRam0000000183441be0 ^ _UNK_182b611b8) + uRam0000000183441b58 + 0xb4904333a818e142;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441b58 ^ _UNK_182b611b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183441be0 ^ _UNK_182b611b8;
  uRam0000000183441c00 =
       func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183441b58 + 0xb4904333a818e142) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183441be0 + 0x4b6fbcccd3c5bd98));
  uVar6 = uRam0000000183441c00 * -0x46071e795f89b9a7 ^ 0x4b6fbccc57e79ebd;
  uRam0000000183441c98 = uRam0000000183441ca0 ^ uVar6 ^ 0x7fff;
  uRam0000000183441968 = (uRam0000000183441968 ^ uVar6) + 0x7fff ^ 0x7c88593dbc524246;
  uRam0000000183441c40 = (uRam0000000183441c40 * 0x304b2696c5f50683 ^ uRam0000000183441968) + uVar6;
  uRam0000000183441a60 = uRam0000000183441c40 ^ uRam0000000183441968;
  uRam0000000183441b98 = 0x7fff;
  uRam0000000183441b90 = func_0x00018ff04980(uRam0000000183441988 ^ 0xe3d41089c86208e7);
  uVar6 = uRam0000000183441b90 & 0x5bb1e5f97fbff0eb;
  uRam00000001834419b8 = uRam0000000183441a68 ^ uVar6 ^ 0x5532edbec2467ff1;
  uRam0000000183441b38 = (uRam0000000183441b38 ^ uVar6) + 0x5532edbec2467ff1 ^ 0xc9761a83c22bcbdc;
  uRam0000000183441958 = (uRam0000000183441958 * 0x559c4e0cc341fe33 ^ uRam0000000183441b38) + uVar6;
  uRam0000000183441a00 = uRam0000000183441958 ^ uRam0000000183441b38;
  uRam0000000183441bc8 = 0x5532edbec2467ff1;
  uRam0000000183441990 = func_0x00018ff04980(uRam0000000183441928 + 0x2ba3cf7747e1f69d ^ 0x7f);
  uVar6 = (uRam0000000183441990 & 0x3ffffffffff) << 0x15 | uRam0000000183441990 >> 0x2b;
  uRam0000000183441cb8 = (uRam0000000183441cb8 ^ uVar6) + 0xa230e23c3d397fed ^ 0x7f0c3a916ddee669;
  uRam0000000183441908 = (uRam0000000183441908 * -0x5523ffdc5cd5733 ^ uRam0000000183441cb8) + uVar6;
  uRam0000000183441b80 = uRam0000000183441908 ^ uRam0000000183441cb8;
  uRam0000000183441a20 = 0xa230e23c3d397fed;
  uRam0000000183441980 = func_0x00018ff04980(uRam0000000183441ce0 + 0x55ac31e3cba909f0 ^ 0x4f);
  uVar6 = (uRam0000000183441980 ^ 0xa230e23c3d397fed) * 0x149de95f14cc81e9;
  uRam0000000183441a30 = uRam0000000183441b20 ^ uVar6 ^ 0x5532edbec2467ff1;
  uRam0000000183441bb8 = (uRam0000000183441910 ^ uVar6) + 0x5532edbec2467ff1 ^ 0x2dc1b8a0cc071aca;
  uRam0000000183441910 = (uRam0000000183441910 * -0x333d45d5082fe21f ^ uRam0000000183441bb8) + uVar6
  ;
  uRam0000000183441bb8 = uRam0000000183441910 ^ uRam0000000183441bb8;
  uRam0000000183441998 = 0x5532edbec2467ff1;
  uVar6 = ((uRam0000000183441c10 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183441c10 & 0x84225cda) * 2) * -uRam0000000183441ab0;
  uVar6 = (uVar6 | uRam0000000183441a20) + (uVar6 & uRam0000000183441a20);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441990 =
       func_0x00018ff04980((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = (uRam0000000183441990 ^ 0x7fff) * 0x28020934c70f0613;
  uRam0000000183441be8 = uRam0000000183441bb8 ^ uVar6 ^ 0x7fff;
  uRam0000000183441ca8 = (uRam0000000183441ca8 ^ uVar6) + 0x7fff ^ 0x82249c2c6d867c74;
  uRam0000000183441b48 = (uRam0000000183441b48 * 0x1cbd666bd950ad1d ^ uRam0000000183441ca8) + uVar6;
  uRam0000000183441ca8 = uRam0000000183441b48 ^ uRam0000000183441ca8;
  uRam0000000183441b20 = 0x7fff;
  uRam0000000183441a08 = func_0x00018ff04980(uRam0000000183441ab0 ^ 0xf7dcb6c5b5be42e9);
  uVar6 = ~((uRam0000000183441a08 ^ 0x453101edf4dc975c) * -0x2376fa42392b0339) & 0x5bb1e5f97fbff0eb;
  uRam0000000183441a48 = uRam0000000183441a48 ^ uVar6 ^ 0x1465d62fabac007c;
  uRam0000000183441b60 = (uRam0000000183441b60 * -0x553f3347d9e39a21 ^ uRam0000000183441a48) + uVar6
  ;
  uRam0000000183441b00 = uRam0000000183441b60 ^ uRam0000000183441a48;
  uRam0000000183441a78 = 0;
  uRam0000000183441a30 = func_0x00018ff04980(uRam0000000183441a20 ^ 0x4bff834a001dce);
  uVar6 = uRam0000000183441a30 ^ 0x7fff;
  uRam0000000183441930 = uRam0000000183441b30 ^ uVar6 ^ 0x7fff;
  uRam0000000183441bb0 = (uRam0000000183441bb0 ^ uVar6) + 0x7fff ^ 0xee3d28bec6fc298a;
  uRam00000001834419b8 = (uRam00000001834419b8 * -0x31bb0c5994934491 ^ uRam0000000183441bb0) + uVar6
  ;
  uRam00000001834419e0 = uRam00000001834419b8 ^ uRam0000000183441bb0;
  uRam0000000183441a18 = 0x7fff;
  uVar6 = (~uRam0000000183441b40 + 0x5bb165796fbe008c) *
          ((uRam0000000183441ad8 ^ 0x5bb16579eb9c23ae) +
          (uRam0000000183441ad8 & 0x5bb16579eb9c23ae) * 2);
  uVar6 = (uVar6 | uRam0000000183441bb0) + (uVar6 & uRam0000000183441bb0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441ad0 =
       func_0x00018ff04980((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uRam0000000183441ca8 = uRam0000000183441ca8 ^ uRam0000000183441c80 ^ 0x5ab13f563a40def9;
  uRam0000000183441978 =
       (uRam0000000183441978 * -0x3afd242b2287470d ^ uRam0000000183441ca8) + uRam0000000183441c80;
  uRam0000000183441a50 = uRam0000000183441978 ^ uRam0000000183441ca8;
  uRam0000000183441b00 = 0;
  uVar6 = (uRam0000000183441aa8 ^ 0x84225cda) + uRam0000000183441c98 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441aa8 ^ 0x84225cda;
  uVar8 = ((uRam0000000183441c98 + uRam0000000183441aa8) * 0x2000 |
          uRam0000000183441c98 + uRam0000000183441aa8 >> 0x33) ^ uRam0000000183441c98;
  uRam0000000183441c58 =
       func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183441aa8 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183441c98 + 0x84225cda));
  uRam0000000183441cf8 =
       (uRam0000000183441cf8 ^ uRam0000000183441c58 ^ 0x7fff) + 0x7fff ^ 0x2ff21b0d873a21ef;
  uRam00000001834419c0 =
       (uRam00000001834419c0 * -0x71e5c04ed9b26869 ^ uRam0000000183441cf8) +
       (uRam0000000183441c58 ^ 0x7fff);
  uRam0000000183441c18 = uRam00000001834419c0 ^ uRam0000000183441cf8;
  uRam0000000183441b48 = 0x7fff;
  uVar6 = (~uRam0000000183441b50 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183441af0) +
          ((param_4 ^ 0x84222325) & uRam0000000183441af0) * 2);
  uVar6 = (uVar6 | uRam0000000183441b30) + (uVar6 & uRam0000000183441b30);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam0000000183441b68 =
       func_0x00018ff04980((param_4 ^ 0x84225cda | uVar6) + (uVar6 & (param_4 ^ 0x84225cda)));
  uVar3 = (uint)param_4 & 0x7fff;
  uVar4 = (ulonglong)uVar3;
  uRam0000000183441978 = (uRam0000000183441978 ^ uRam00000001834419d8) + uVar4 ^ 0xbb90e548aea996a7;
  uRam0000000183441c20 =
       (uRam0000000183441c20 * -0xebe2d49abcbc649 ^ uRam0000000183441978) + uRam00000001834419d8;
  uRam0000000183441a48 = uRam0000000183441c20 ^ uRam0000000183441978;
  uVar5 = (ulonglong)param_3;
  uVar6 = uVar4 ^ 0x84222325 ^ uRam0000000183441c40;
  lVar7 = (uVar4 ^ 0x84222325) + uRam0000000183441b08;
  uVar8 = uVar6 + lVar7;
  uVar9 = (uVar5 ^ uRam0000000183441b08) + uRam0000000183441c40 + uVar5;
  uVar6 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar6;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar5 ^ uRam0000000183441b08;
  uRam0000000183441c98 = uVar4;
  uVar6 = func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183441c40 + uVar5) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - lVar7);
  uVar6 = uVar4 * uVar5 ^ uVar6;
  uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar6) *
          0x1571adffe24e31eb;
  uVar5 = (uVar4 + uVar5) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183441b10 = (uRam0000000183441b10 ^ uVar6) + uVar5 ^ 0x91a51403584ea236;
  uRam0000000183441c80 = (uRam0000000183441c80 * -0x1d8c1ea2b9355a07 ^ uRam0000000183441b10) + uVar6
  ;
  uRam0000000183441c00 = uRam0000000183441c80 ^ uRam0000000183441b10;
  uVar9 = uVar5 & 0xffffffff;
  uVar6 = (~uRam00000001834419a0 + 0x6846bc2) *
          ((uRam0000000183441ce0 ^ 0x6bcf34a8) +
          (ulonglong)((uint)uRam0000000183441ce0 & 0x6bcf34a8) * 2);
  uVar6 = (uVar6 | uRam0000000183441cf8) + (uVar6 & uRam0000000183441cf8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441ae8 = uVar9;
  uRam0000000183441be8 =
       func_0x00018ff04980((uVar6 | 0x6d4b5f69) + (ulonglong)((uint)uVar6 & 0x6d4b5f69));
  uVar6 = uRam0000000183441be8 << 0x2a | (uRam0000000183441be8 & 0x7fffffffffffffff) >> 0x16;
  uRam0000000183441c38 = (uRam0000000183441c38 ^ uVar6) + 0xefed7fcd ^ 0xcf2c4412a3be1d84;
  uRam0000000183441ad0 = (uRam0000000183441ad0 * -0x1b259f74d65bd671 ^ uRam0000000183441c38) + uVar6
  ;
  uRam0000000183441b60 = uRam0000000183441ad0 ^ uRam0000000183441c38;
  uRam0000000183441ae8 = 0xefed7fcd;
  uVar6 = (~uRam0000000183441a20 + 0x4525e2f7) *
          ((uRam0000000183441928 ^ 0x57a1aab5) +
          (ulonglong)((uint)uRam0000000183441928 & 0x57a1aab5) * 2);
  uVar6 = (uVar6 | uRam0000000183441c70) + (uVar6 & uRam0000000183441c70);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441958 =
       func_0x00018ff04980((uVar6 | 0x12844843) + (ulonglong)((uint)uVar6 & 0x12844843));
  uVar8 = uRam0000000183441958 ^ 0xd3838990;
  uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar8;
  uRam0000000183441b58 = (uRam0000000183441b58 ^ uVar8) + 0x96a66b66 ^ 0x51796db040ab4842;
  uRam0000000183441c68 = (uRam0000000183441c68 * -0xe2ebb86ba276725 ^ uRam0000000183441b58) + uVar8;
  uRam0000000183441b20 = uRam0000000183441c68 ^ uRam0000000183441b58;
  uRam0000000183441be0 = 0x96a66b66;
  uVar6 = (uRam0000000183441c18 ^ _UNK_182b611c0) + uRam0000000183441cd8 + 0x84222325;
  uVar8 = (uRam0000000183441cd8 ^ _UNK_182b611c8) + uRam0000000183441c18 + 0x10f26483;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441c18 ^ _UNK_182b611c0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183441cd8 ^ _UNK_182b611c8;
  lRam00000001834419a8 =
       func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183441c18 + 0x10f26483) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183441cd8 + 0x84222325));
  uRam00000001834419d0 =
       (uRam00000001834419d0 ^ lRam00000001834419a8 * -0x5a022adda6e032c3) - 0x10f26483 ^
       0x9313caa56a458342;
  uRam0000000183441cd8 =
       (uRam0000000183441cd8 * -0x4a0fa9c989ad9ff5 ^ uRam00000001834419d0) +
       lRam00000001834419a8 * -0x5a022adda6e032c3;
  uRam0000000183441a90 = uRam0000000183441cd8 ^ uRam00000001834419d0;
  uRam0000000183441c20 = 0xef0d9b7d;
  uVar6 = (~uRam0000000183441b88 + 0x10f26484) *
          ((uRam0000000183441b00 ^ 0x84226d12) +
          (ulonglong)((uint)uRam0000000183441b00 & 0x84226d12) * 2);
  uVar6 = (uVar6 | uRam0000000183441ae8) + (uVar6 & uRam0000000183441ae8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441ad8 =
       func_0x00018ff04980((uVar6 | 0x94d00991) + (ulonglong)((uint)uVar6 & 0x94d00991));
  uVar6 = (uRam0000000183441ad8 ^ 0x52d7e800000) & 0xffffffffffc00000;
  uRam0000000183441970 = uRam0000000183441aa8 ^ uVar6 ^ 0x10f2b2ba;
  uRam0000000183441b10 = (uRam0000000183441b10 ^ uVar6) + 0x10f2b2ba ^ 0x11a4cdf16a4f7b5d;
  uRam0000000183441c68 = (uRam0000000183441c68 * 0x65d20100ca631777 ^ uRam0000000183441b10) + uVar6;
  uRam0000000183441a08 = uRam0000000183441c68 ^ uRam0000000183441b10;
  uRam00000001834419e8 = 0x10f2b2ba;
  uVar6 = (~uRam0000000183441a08 + 0xef0d9b7e) *
          ((uRam0000000183441a88 ^ 0x94d0919f) +
          (ulonglong)((uint)uRam0000000183441a88 & 0x94d0919f) * 2);
  uVar6 = (uVar6 | uRam0000000183441a30) + (uVar6 & uRam0000000183441a30);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam00000001834419f0 =
       func_0x00018ff04980((uVar6 | 0x7bdd0ae2) + (ulonglong)((uint)uVar6 & 0x7bdd0ae2));
  uVar6 = lRam00000001834419f0 * 0x50d776186409c879;
  uRam0000000183441cb8 = uRam0000000183441b20 ^ uVar6 ^ 0x100004e37;
  uRam0000000183441bc0 = (uRam00000001834419e8 ^ uVar6) + 0x100004e37 ^ 0x99508766670c04a4;
  uRam0000000183441c78 = (uRam0000000183441c78 * 0x3894773f801bbe2f ^ uRam0000000183441bc0) + uVar6;
  uRam0000000183441bc0 = uRam0000000183441c78 ^ uRam0000000183441bc0;
  uRam00000001834419e8 = 0x4e37;
  uVar6 = (~uRam0000000183441998 + 0xd800a601) *
          ((uRam0000000183441b40 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183441b40 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183441cb0) + (uVar6 & uRam0000000183441cb0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441a30 =
       func_0x00018ff04980((uVar6 | 0x5c228525) + (ulonglong)((uint)uVar6 & 0x5c228525));
  uRam0000000183441958 =
       (uRam0000000183441958 ^ uRam0000000183441a30) - 0xd800a600 ^ 0xcb495957019c8641;
  uRam0000000183441ac8 =
       (uRam0000000183441ac8 * -0x600ce2033675a685 ^ uRam0000000183441958) + uRam0000000183441a30;
  uRam0000000183441a38 = uRam0000000183441ac8 ^ uRam0000000183441958;
  uRam00000001834419e8 = 0x27ff5a00;
  uRam0000000183441a90 = func_0x00018ff04980(uRam0000000183441ce0 ^ 0x34ffabf2001dba);
  uRam0000000183441a30 = uRam0000000183441a58 ^ uRam0000000183441c48 ^ 0xd800f437;
  uRam0000000183441a40 =
       (uRam0000000183441a40 ^ uRam0000000183441c48) + 0xd800f437 ^ 0x179c5c3724634679;
  uRam0000000183441bb0 =
       (uRam0000000183441bb0 * -0x4c2b23ce72deaacb ^ uRam0000000183441a40) + uRam0000000183441c48;
  uRam0000000183441980 = uRam0000000183441bb0 ^ uRam0000000183441a40;
  uRam00000001834419e8 = 0xd800f437;
  uVar6 = (uRam0000000183441c68 ^ _UNK_182b611d0) + uRam0000000183441b18 + 0x5c22d712;
  uVar8 = (uRam0000000183441b18 ^ _UNK_182b611d8) + uRam0000000183441c68 + 0x27ff5a00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441c68 ^ _UNK_182b611d0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183441b18 ^ _UNK_182b611d8;
  uRam00000001834419d8 =
       func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183441c68 + 0x27ff5a00) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183441b18 + 0x5c22d712));
  uVar6 = (uRam00000001834419d8 & 0xffffffff) * (ulonglong)_UNK_182b611e0 +
          ((ulonglong)_UNK_182b611f0 * (uRam00000001834419d8 & 0xffffffff) +
           (uRam00000001834419d8 >> 0x20) * (ulonglong)_UNK_182b611e0 << 0x20) & 0x7fffffffffffffff;
  uRam0000000183441a58 = uRam0000000183441ae0 ^ uVar6 ^ 0x100004e37;
  uRam00000001834419c8 = (uRam00000001834419c8 ^ uVar6) + 0x100004e37 ^ 0x5b63786e3730ea45;
  uRam0000000183441958 = (uRam0000000183441958 * 0x2d49192aaf6c3c6b ^ uRam00000001834419c8) + uVar6;
  uRam0000000183441ca0 = uRam0000000183441958 ^ uRam00000001834419c8;
  uRam0000000183441a98 = 0x4e37;
  uVar6 = (uRam00000001834419e0 ^ _UNK_182b61200) + uRam00000001834419b0 + 0x84222325;
  uVar8 = (uRam00000001834419b0 ^ _UNK_182b61208) + uRam00000001834419e0 + 0xf503bf00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001834419e0 ^ _UNK_182b61200;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001834419b0 ^ _UNK_182b61208;
  uVar6 = func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001834419e0 + 0xf503bf00)
                              ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                (uRam00000001834419b0 + 0x84222325));
  uRam0000000183441bb8 = (uVar6 ^ uVar6 ^ 0xf503bf00) - 0xf503bf00 ^ 0xd0ceecec0402fbbb;
  uRam00000001834419c0 =
       (uRam00000001834419c0 * 0x7ea506079d25e8f5 ^ uRam0000000183441bb8) + (uVar6 ^ 0xf503bf00);
  uRam0000000183441b00 = uRam00000001834419c0 ^ uRam0000000183441bb8;
  uRam00000001834419d8 = 0xafc4100;
  uVar6 = (~uRam00000001834419e0 + 0xf503bf01) *
          ((uRam00000001834419f8 ^ 0x84226d12) +
          (ulonglong)((uint)uRam00000001834419f8 & 0x84226d12) * 2);
  uVar6 = (uVar6 | uRam0000000183441a10) + (uVar6 & uRam0000000183441a10);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441c70 =
       func_0x00018ff04980((uVar6 | 0x7121d212) + (ulonglong)((uint)uVar6 & 0x7121d212));
  uVar8 = uRam0000000183441c70 * -0x6302065ab21b9f31;
  uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar8) &
          0x7fffffffffffffff;
  uRam0000000183441c78 = uRam0000000183441ad8 ^ uVar6 ^ 0xf5040d37;
  uRam0000000183441aa8 = (uRam0000000183441aa8 ^ uVar6) + 0xf5040d37 ^ 0x6a72a184473c8182;
  uRam0000000183441c28 = (uRam0000000183441c28 * -0x4052705c54321431 ^ uRam0000000183441aa8) + uVar6
  ;
  uRam0000000183441a58 = uRam0000000183441c28 ^ uRam0000000183441aa8;
  uRam0000000183441928 = 0xf5040d37;
  uRam0000000183441ae0 = func_0x00018ff04980(lRam0000000183441ba0 + 0x6affc4ee00d9ffU ^ 0xfb);
  uVar8 = _UNK_182b61218;
  uVar6 = _UNK_182b61210;
  uVar3 = (uint)uRam0000000183441ae0 ^ 0xd0000837;
  uVar2 = uVar3 & 0xf5040d37;
  uVar4 = (ulonglong)uVar2 - (ulonglong)(uVar3 >> 1 & 0x50000411);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (ulonglong)
          ((uint)((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4) ^
          uVar2);
  uRam0000000183441a00 = uRam0000000183441cd0 ^ uVar4 ^ 0x100004e37;
  uRam0000000183441af8 = (uRam0000000183441af8 ^ uVar4) + 0x100004e37 ^ 0x9909129ca769737b;
  uRam0000000183441b08 = (uRam0000000183441b08 * -0x6656c57a33014899 ^ uRam0000000183441af8) + uVar4
  ;
  uRam0000000183441ae8 = uRam0000000183441b08 ^ uRam0000000183441af8;
  uRam0000000183441bc0 = 0x4e37;
  uVar4 = (uRam0000000183441c50 ^ _UNK_182b61210) + uRam0000000183441a68 + 0x6bcf5ce8;
  uVar10 = (uRam0000000183441a68 ^ _UNK_182b61218) + uRam0000000183441c50 + 0x96a66b66;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183441c50 ^ _UNK_182b61210;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183441a68 ^ _UNK_182b61218;
  uRam0000000183441b98 =
       func_0x00018ff04980((uVar10 << 0x1d | uVar10 >> 0x23) - (uRam0000000183441c50 + 0x96a66b66) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183441a68 + 0x6bcf5ce8));
  uVar4 = (uRam0000000183441b98 ^ 0xffef7fef) & 0x7fffffffffffffff;
  uRam0000000183441af8 = uRam0000000183441910 ^ uVar4 ^ 0x18693eb33;
  uRam0000000183441aa8 =
       (ulonglong)(&UNK_18693eb33 + (uRam0000000183441aa8 ^ uVar4)) ^ 0x62e84fef024959;
  uRam0000000183441a18 = (uRam0000000183441a18 * 0x348dbcd118823ceb ^ uRam0000000183441aa8) + uVar4;
  uRam0000000183441c90 = uRam0000000183441a18 ^ uRam0000000183441aa8;
  uRam0000000183441ac8 = 0x8693eb33;
  uVar4 = (uRam0000000183441a10 ^ uVar6) + uRam0000000183441c38 + 0x6bcf5ce8;
  uVar10 = (uRam0000000183441c38 ^ uVar8) + uRam0000000183441a10 + 0x96a66b66;
  uVar6 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183441a10 ^ uVar6;
  uVar8 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183441c38 ^ uVar8;
  lVar7 = func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183441a10 + 0x96a66b66)
                              ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                (uRam0000000183441c38 + 0x6bcf5ce8));
  uVar8 = lVar7 * 0x5c9382ba21cd2c11;
  uVar6 = uVar8 >> 1 | uVar8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar8;
  uRam0000000183441cb0 = (uRam0000000183441cb0 ^ uVar8) + 0x794b14ab ^ 0x2ec2ee6dadfdc000;
  uRam0000000183441a88 = (uRam0000000183441a88 * -0x719aa30485b8d417 ^ uRam0000000183441cb0) + uVar8
  ;
  uRam0000000183441a10 = uRam0000000183441a88 ^ uRam0000000183441cb0;
  lRam00000001834419f0 = 0x794b14ab;
  uVar6 = (uRam0000000183441c78 ^ _UNK_182b61220) + uRam0000000183441ce8 + 0xfd69378e;
  uVar8 = (uRam0000000183441ce8 ^ _UNK_182b61228) + uRam0000000183441c78 + 0xd48d688;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441c78 ^ _UNK_182b61220;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183441ce8 ^ _UNK_182b61228;
  uVar6 = func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183441c78 + 0xd48d688) ^
                              (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183441ce8 + 0xfd69378e))
  ;
  uRam0000000183441900 = uVar6 ^ 0x400c200;
  uRam0000000183441bc0 = uRam0000000183441a48 ^ uRam0000000183441900 ^ 0x8693eb33;
  uRam0000000183441a58 =
       (uRam0000000183441a58 ^ uRam0000000183441900) + 0x8693eb33 ^ 0x529ba5a81d64c048;
  uRam0000000183441900 = (uVar6 * -0x542d82423ca88011 ^ uRam0000000183441a58) + uRam0000000183441900
  ;
  uRam0000000183441c00 = uRam0000000183441900 ^ uRam0000000183441a58;
  uRam0000000183441a00 = 0x8693eb33;
  uRam0000000183441c38 = func_0x00018ff04980(uRam0000000183441928 + 0xffdeff84250021ff ^ 0xb3);
  uRam0000000183441b08 = (ulonglong)(~(uint)uRam0000000183441c38 & 0x8693eb33);
  uRam0000000183441b58 = uRam0000000183441b58 ^ uRam0000000183441b08 ^ 0xf05db2d9dc296eed;
  uRam0000000183441a58 =
       (uRam0000000183441a58 * -0x7578b5548708dd51 ^ uRam0000000183441b58) + uRam0000000183441b08;
  uRam0000000183441be8 = uRam0000000183441a58 ^ uRam0000000183441b58;
  uRam0000000183441c30 = 0;
  uVar6 = (uRam0000000183441cf0 ^ 0x84226d12) + uRam0000000183441b60 + 0x84226d12;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183441cf0 ^ 0x84226d12;
  uVar8 = ((uRam0000000183441b60 + uRam0000000183441cf0) * 0x2000 |
          uRam0000000183441b60 + uRam0000000183441cf0 >> 0x33) ^ uRam0000000183441b60;
  uRam0000000183441b10 =
       func_0x00018ff04980((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183441cf0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183441b60 + 0x84226d12));
  uVar6 = uRam0000000183441b10 >> 1 | uRam0000000183441b10;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uRam0000000183441b10;
  uRam0000000183441bc8 = uRam0000000183441a68 ^ uVar6 ^ 0x4e37;
  uRam0000000183441928 = (uRam0000000183441928 ^ uVar6) + 0x4e37 ^ 0x41cf08559ad814b7;
  uRam0000000183441a08 = (uRam0000000183441a08 * 0x151ddaf5dbf6d1fb ^ uRam0000000183441928) + uVar6;
  uRam0000000183441cc8 = uRam0000000183441a08 ^ uRam0000000183441928;
  uRam0000000183441bf8 = 0x4e37;
  uRam0000000183441a50 = func_0x00018ff04980(uRam0000000183441ac8 + 0x61007412ffefff ^ 0x69);
  uVar6 = uRam0000000183441a50 >> 7 & 0xffffffffffff;
  uRam00000001834419b0 = (uRam00000001834419b0 ^ uVar6) + 0x10128032 ^ 0xf71beda1e9d92613;
  uRam0000000183441cb8 = (uRam0000000183441cb8 * 0x5a39d7ef91cffbdb ^ uRam00000001834419b0) + uVar6;
  uRam0000000183441910 = uRam0000000183441cb8 ^ uRam00000001834419b0;
  uRam0000000183441c20 = 0x10128032;
  uRam0000000183441900 = func_0x00018ff04980(uRam0000000183441b08 + 0x65007bee0021ff ^ 0xd3);
  uRam0000000183441a70 = uRam0000000183441a38 ^ uRam0000000183441900 ^ 0x4e37;
  uRam0000000183441a40 = (uRam0000000183441a40 ^ uRam0000000183441900) + 0x4e37 ^ 0x589e896b71fc7137
  ;
  uRam0000000183441910 =
       (uRam0000000183441910 * 0x3e81597d24d3153 ^ uRam0000000183441a40) + uRam0000000183441900;
  uRam0000000183441c20 = uRam0000000183441910 ^ uRam0000000183441a40;
  uRam0000000183441b58 = 0x4e37;
  uRam0000000183441b38 = func_0x00018ff04980(uRam0000000183441a20 + 0x1d0083e3001dff ^ 0xae);
  uVar6 = uRam0000000183441b38 >> 1 | uRam0000000183441b38;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183441b38;
  uRam0000000183441ae0 = uRam0000000183441ae0 ^ uVar6 ^ 0xbe4cc718d19269ce;
  uRam0000000183441b10 = (uRam0000000183441b10 * -0x793745f0845dd799 ^ uRam0000000183441ae0) + uVar6
  ;
  uRam0000000183441c30 = uRam0000000183441b10 ^ uRam0000000183441ae0;
  uRam0000000183441ad0 = 0;
  uVar6 = ((uRam0000000183441c88 ^ 0x84226d12) +
          (ulonglong)((uint)uRam0000000183441c88 & 0x84226d12) * 2) * -lRam0000000183441b68;
  uVar6 = (uVar6 | uRam0000000183441c50) + (uVar6 & uRam0000000183441c50);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam0000000183441920 =
       func_0x00018ff04980((uVar6 | 0x84226d12) + (ulonglong)((uint)uVar6 & 0x84226d12));
  uVar6 = lRam0000000183441920 << 0x10 ^ 0x4e370000;
  uVar8 = uVar6 >> 0x10;
  uVar6 = uVar6 >> 0x11 | uVar8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar8;
  uRam0000000183441908 = uRam00000001834419e8 ^ uVar8 ^ 0x4e37;
  uRam0000000183441cf0 = (uRam0000000183441cf0 ^ uVar8) + 0x4e37 ^ 0xf1965958d3e3bb41;
  uRam0000000183441af0 = (uRam0000000183441af0 * -0x16dd8165f81616e7 ^ uRam0000000183441cf0) + uVar8
  ;
  uRam0000000183441c40 = uRam0000000183441af0 ^ uRam0000000183441cf0;
  uRam0000000183441ab0 = 0x4e37;
  uVar6 = (~uRam0000000183441ba8 + 0x4e38) *
          ((uVar9 ^ 0x84222325 ^ uRam00000001834419c8) +
          (ulonglong)((uint)uRam00000001834419c8 & (uint)(uVar9 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | uRam0000000183441af0) + (uVar6 & uRam0000000183441af0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183441988 =
       func_0x00018ff04980((uVar9 ^ 0x84226d12 | uVar6) +
                           (ulonglong)((uint)(uVar9 ^ 0x84226d12) & (uint)uVar6));
  uVar6 = (~uRam0000000183441988 & uVar9) * 0x40;
  uVar8 = uVar6 + (ulonglong)((uint)(~uRam0000000183441988 & uVar9) & 0xaaaaaaaa) * -0x20;
  uVar8 = (uVar8 & 0x3333333333333300) + (uVar8 >> 2 & 0x3333333333333330);
  uVar6 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f03) * 0x101010101010101 >> 0x38) << 2 ^ uVar6;
  lVar7 = uVar9 - ((uint)uVar5 & 0x4e37) * 2;
  uRam00000001834419c0 = (uRam00000001834419c0 ^ uVar6) + lVar7 + 0x4e37 ^ 0x3a37517f8cde71e0;
  uRam0000000183441b98 = (uRam0000000183441b98 * 0x2330f35306767a1d ^ uRam00000001834419c0) + uVar6;
  uRam0000000183441bf8 = uRam0000000183441b98 ^ uRam00000001834419c0;
  uRam0000000183441bd0 = lVar7 + 0x4e37U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4813,0xe1);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018feffe8c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b5f7c8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; a (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18ff132c0, runtime 6ffff7b232c0) =====

undefined8 FUN_18ff132c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/ag$rQ; a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ff05900, runtime 6ffff7b15900) =====

void FUN_18ff05900(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ff0597d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b61900 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18ff04a10, runtime 6ffff7b14a10) =====

void FUN_18ff04a10(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ff04a4c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b613c0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; a ([B)Ljava/lang/String; (handler @ image 18ff13350, runtime 6ffff7b23350) =====

void FUN_18ff13350(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018ff133ed did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b65a50 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; downloadSkin (Ljava/lang/String;)V (handler @ image 18feee8d0, runtime 6ffff7afe8d0) =====

void FUN_18feee8d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4813,0xe1);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018feee9d8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b5b2a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; equals (Ljava/lang/Object;)Z (handler @ image 18ff0ea50, runtime 6ffff7b1ea50) =====

void FUN_18ff0ea50(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ff0ead9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b644a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; getSkin (Ljava/lang/String;)Lnet/minecraft/class_2960; (handler @ image 18fee3410, runtime 6ffff7af3410) =====

void FUN_18fee3410(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4813,0xe1);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018fee350a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b57db0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; hashCode ()I (handler @ image 18ff0d880, runtime 6ffff7b1d880) =====

void FUN_18ff0d880(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ff0d903 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b63ee0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; lambda$downloadSkin$0 (Ljava/lang/String;Lnet/minecraft/class_2960;)V (handler @ image 18ff0fff0, runtime 6ffff7b1fff0) =====

void FUN_18ff0fff0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4813,0xe1);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ff100b4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b64bf0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; skin ()Lnet/minecraft/class_2960; (handler @ image 18ff0fbf0, runtime 6ffff7b1fbf0) =====

void FUN_18ff0fbf0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ff0fc10 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b64a20 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; slim ()Z (handler @ image 18ff0fdf0, runtime 6ffff7b1fdf0) =====

void FUN_18ff0fdf0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ff0fe10 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b64b00 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ag$rQ; toString ()Ljava/lang/String; (handler @ image 18ff0c7e0, runtime 6ffff7b1c7e0) =====

void FUN_18ff0c7e0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ff0c866 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b63970 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



