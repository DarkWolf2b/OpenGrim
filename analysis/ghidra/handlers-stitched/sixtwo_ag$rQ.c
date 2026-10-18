// ===== STITCHED CORPUS: sixtwo.ag$rQ =====
// handlers: 14  continuation blocks: 138  unresolved table targets: 0
// tables not in tables.json: ['0x1098d8', '0x2b61150', '0x2b61158', '0x2b61160', '0x2b61168', '0x2b61170', '0x2b61180', '0x2b61190', '0x2b61198', '0x2b611a0', '0x2b611a8', '0x2b611b0', '0x2b611b8', '0x2b611c0', '0x2b611c8', '0x2b611d0', '0x2b611d8', '0x2b611e0', '0x2b611f0', '0x2b61200']

// ===== Lsixtwo/ag$rQ; _fc2aedec5c4f4301afb5097c041378f4 ()V (handler @ image 18ff083d0, runtime 6ffff7b183d0) =====

void FUN_18ff083d0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4813,0xe1)
      /* POOL[0x4813,0xe1]: s | AUSed | aZkxe | QaaNI | VuamI | RZOxF | sixtwo/ag$rQ | cachedSkins | net/minecraft/class_1068 | method_62620 | ()Lnet/minecraft/class_8685; | containsKey | net/minecraft/class_2960 | net/minecraft/class_8685 | comp_1626 | ()Lnet/minecraft/class_12079$ */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4813,0xe1)
      /* POOL[0x4813,0xe1]: s | AUSed | aZkxe | QaaNI | VuamI | RZOxF | sixtwo/ag$rQ | cachedSkins | net/minecraft/class_1068 | method_62620 | ()Lnet/minecraft/class_8685; | containsKey | net/minecraft/class_2960 | net/minecraft/class_8685 | comp_1626 | ()Lnet/minecraft/class_12079$ */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4813,0xe1)
      /* POOL[0x4813,0xe1]: s | AUSed | aZkxe | QaaNI | VuamI | RZOxF | sixtwo/ag$rQ | cachedSkins | net/minecraft/class_1068 | method_62620 | ()Lnet/minecraft/class_8685; | containsKey | net/minecraft/class_2960 | net/minecraft/class_8685 | comp_1626 | ()Lnet/minecraft/class_12079$ */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x4813,0xe1)
      /* POOL[0x4813,0xe1]: s | AUSed | aZkxe | QaaNI | VuamI | RZOxF | sixtwo/ag$rQ | cachedSkins | net/minecraft/class_1068 | method_62620 | ()Lnet/minecraft/class_8685; | containsKey | net/minecraft/class_2960 | net/minecraft/class_8685 | comp_1626 | ()Lnet/minecraft/class_12079$ */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ff0c866 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b63970 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xfee350d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fee350d(void)

{
  FUN_190ddce00();
  (*_DAT_182b58ac8)();
  return;
}


// ----- block @ rva 0xfee66bd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fee66bd(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,param_2 + 0x482c,0xe2);
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


// ----- block @ rva 0xfee6ea2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fee6ea2(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xfee704b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fee704b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182b57ff8)();
  return;
}


// ----- block @ rva 0xfee71e1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fee71e1(void)

{
  FUN_190de3220();
  (*_DAT_182b57e88)();
  return;
}


// ----- block @ rva 0xfee7307 -----

void FUN_18fee7307(void)

{
  return;
}


// ----- block @ rva 0xfee7373 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fee7373(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,param_2 + 0xb1,5);
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


// ----- block @ rva 0xfee740a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fee740a(void)

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


// ----- block @ rva 0xfee7975 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fee7975(void)

{
  (*_DAT_182b59808)();
  return;
}


// ----- block @ rva 0xfeebf74 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feebf74(void)

{
  (*_DAT_182b59808)();
  return;
}


// ----- block @ rva 0xfeee4cf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18feee4cf(void)

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


// ----- block @ rva 0xfeee7d8 -----

void FUN_18feee7d8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xfeee9db -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feee9db(void)

{
  FUN_190ddce00();
  (*_DAT_182b5c8b8)();
  return;
}


// ----- block @ rva 0xfef5142 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fef5142(void)

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


// ----- block @ rva 0xfef7cf2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fef7cf2(void)

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


// ----- block @ rva 0xfef7f6f -----

void FUN_18fef7f6f(void)

{
  return;
}


// ----- block @ rva 0xfefb718 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fefb718(void)

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


// ----- block @ rva 0xfefb868 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fefb868(void)

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


// ----- block @ rva 0xfefc074 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fefc074(void)

{
  (*_DAT_182b5d0a8)();
  return;
}


// ----- block @ rva 0xfefc6af -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fefc6af(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(unaff_RSI + JNI->NewGlobalRef /*0xa8*/))();
  FUN_190dcd3d0(0x8f,uVar1);
  (*_DAT_182b5bbe8)();
  return;
}


// ----- block @ rva 0xfefc876 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18fefc876(void)

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


// ----- block @ rva 0xfefd235 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fefd235(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b5c198)();
  return;
}


// ----- block @ rva 0xfefd29b -----

void FUN_18fefd29b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xfeffe8f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18feffe8f(void)

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


// ----- block @ rva 0xff00038 -----

void FUN_18ff00038(void)

{
  return;
}


// ----- block @ rva 0xff0084d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0084d(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  cVar1 = (**(code **)(in_RAX + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xff00aaa -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff00aaa(void)

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


// ----- block @ rva 0xff00f8d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18ff004c8(void)

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


// ----- block @ rva 0xff02f3a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff02f3a(void)

{
  int iVar1;
  undefined8 in_RAX;
  longlong *in_stack_00000030;
  int in_stack_00000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)(char)in_RAX);
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


// ----- block @ rva 0xff038e7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff038e7(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  cVar1 = (**(code **)(unaff_RBX + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xff045df -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff045df(void)

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


// ----- block @ rva 0xff04717 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff04717(void)

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


// ----- block @ rva 0xff04a4f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff04a4f(void)

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


// ----- block @ rva 0xff04aa3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff04aa3(void)

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


// ----- block @ rva 0xff04afc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff04afc(void)

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


// ----- block @ rva 0xff04c83 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff04c83(void)

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


// ----- block @ rva 0xff050b4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff050b4(void)

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


// ----- block @ rva 0xff0536a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0536a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_182b61768)();
  return;
}


// ----- block @ rva 0xff054c7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff054c7(void)

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


// ----- block @ rva 0xff05562 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff05562(void)

{
  FUN_190dd72e0();
  (*_DAT_182b61478)();
  return;
}


// ----- block @ rva 0xff055c8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff055c8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_182b61888)();
  return;
}


// ----- block @ rva 0xff057b8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff057b8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182b61508)();
  return;
}


// ----- block @ rva 0xff057d3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff057d3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182b616e8)();
  return;
}


// ----- block @ rva 0xff05808 -----

void FUN_18ff05808(void)

{
  return;
}


// ----- block @ rva 0xff05816 -----

void FUN_18ff05816(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xff05980 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff05980(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_182b62198)();
  return;
}


// ----- block @ rva 0xff05c63 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff05c63(void)

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


// ----- block @ rva 0xff0618d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0618d(void)

{
  (*_DAT_182b62738)();
  return;
}


// ----- block @ rva 0xff06293 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff06293(void)

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


// ----- block @ rva 0xff06424 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff06424(void)

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


// ----- block @ rva 0xff06b61 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff06b61(void)

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


// ----- block @ rva 0xff06cae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff06cae(void)

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


// ----- block @ rva 0xff07176 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff07176(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182b62438)();
  return;
}


// ----- block @ rva 0xff07423 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff07423(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_182b61af8)();
  return;
}


// ----- block @ rva 0xff0816a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0816a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182b61b88)();
  return;
}


// ----- block @ rva 0xff0820a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0820a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182b61a78)();
  return;
}


// ----- block @ rva 0xff08265 -----

void FUN_18ff08265(void)

{
  return;
}


// ----- block @ rva 0xff08284 -----

void FUN_18ff08284(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xff084af -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff084af(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
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


// ----- block @ rva 0xff0a4a9 -----

void FUN_18ff0a4a9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xff0a4e8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0a4e8(void)

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


// ----- block @ rva 0xff0a52e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0a52e(void)

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


// ----- block @ rva 0xff0a861 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0a861(void)

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


// ----- block @ rva 0xff0a902 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0a902(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000040;
  
  uStack0000000000000040 = 3;
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


// ----- block @ rva 0xff0a92f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0a92f(void)

{
  char cVar1;
  longlong in_RAX;
  
  cVar1 = (**(code **)(in_RAX + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xff0c4d8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0c4d8(void)

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


// ----- block @ rva 0xff0c538 -----

void FUN_18ff0c538(void)

{
  return;
}


// ----- block @ rva 0xff0c869 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0c869(void)

{
  FUN_190de3220();
  (*_DAT_182b63b58)();
  return;
}


// ----- block @ rva 0xff0c8c0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0c8c0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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


// ----- block @ rva 0xff0caca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0caca(void)

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


// ----- block @ rva 0xff0cd1f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0cd1f(void)

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


// ----- block @ rva 0xff0cdda -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0cdda(void)

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


// ----- block @ rva 0xff0ce1b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0ce1b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_182b63c08)();
  return;
}


// ----- block @ rva 0xff0d00a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0d00a(void)

{
  FUN_190ddfc90();
  (*_DAT_182b63df8)();
  return;
}


// ----- block @ rva 0xff0d4de -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0d4de(void)

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


// ----- block @ rva 0xff0d681 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0d681(void)

{
  FUN_190dd72e0();
  (*_DAT_182b63a18)();
  return;
}


// ----- block @ rva 0xff0d78b -----

void FUN_18ff0d78b(void)

{
  return;
}


// ----- block @ rva 0xff0d79f -----

void FUN_18ff0d79f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xff0d906 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0d906(void)

{
  FUN_190de3220();
  (*_DAT_182b64368)();
  return;
}


// ----- block @ rva 0xff0d9c3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0d9c3(void)

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


// ----- block @ rva 0xff0deed -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0deed(void)

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


// ----- block @ rva 0xff0dfc9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0dfc9(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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


// ----- block @ rva 0xff0e193 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0e193(void)

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


// ----- block @ rva 0xff0e347 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0e347(void)

{
  FUN_190dd72e0();
  (*_DAT_182b64238)();
  return;
}


// ----- block @ rva 0xff0e393 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0e393(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_182b64328)();
  return;
}


// ----- block @ rva 0xff0e6b9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0e6b9(void)

{
  FUN_190dd72e0();
  (*_DAT_182b64348)();
  return;
}


// ----- block @ rva 0xff0e922 -----

void FUN_18ff0e922(void)

{
  return;
}


// ----- block @ rva 0xff0e936 -----

void FUN_18ff0e936(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xff0eadc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0eadc(void)

{
  FUN_190de3220();
  (*_DAT_182b64628)();
  return;
}


// ----- block @ rva 0xff0eb67 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0eb67(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182b64808)();
  return;
}


// ----- block @ rva 0xff0ed14 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0ed14(void)

{
  FUN_190dd72e0();
  (*_DAT_182b64938)();
  return;
}


// ----- block @ rva 0xff0eeed -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0eeed(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  FUN_190dd72e0();
  (*_DAT_182b64668)();
  return;
}


// ----- block @ rva 0xff0f0ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0f0ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  FUN_190dd72e0();
  (*_DAT_182b64678)();
  return;
}


// ----- block @ rva 0xff0f14d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0f14d(void)

{
  FUN_190de3220();
  (*_DAT_182b64868)();
  return;
}


// ----- block @ rva 0xff0f1e9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0f1e9(void)

{
  FUN_190dd72e0();
  (*_DAT_182b648c8)();
  return;
}


// ----- block @ rva 0xff0f659 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0f659(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_182b648b8)();
  return;
}


// ----- block @ rva 0xff0fac6 -----

void FUN_18ff0fac6(void)

{
  return;
}


// ----- block @ rva 0xff0fc13 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fc13(void)

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


// ----- block @ rva 0xff0fc4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fc4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182b64a58)();
  return;
}


// ----- block @ rva 0xff0fc71 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0fc71(void)

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


// ----- block @ rva 0xff0fc86 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fc86(void)

{
  FUN_190dd72e0();
  (*_DAT_182b64ab8)();
  return;
}


// ----- block @ rva 0xff0fccf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fccf(void)

{
  FUN_190dd9df0();
  (*_DAT_182b64a78)();
  return;
}


// ----- block @ rva 0xff0fd02 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0fd02(void)

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


// ----- block @ rva 0xff0fd26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fd26(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetObjectField /*0x2f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182b64aa8)();
  return;
}


// ----- block @ rva 0xff0fd5e -----

void FUN_18ff0fd5e(void)

{
  return;
}


// ----- block @ rva 0xff0fd66 -----

void FUN_18ff0fd66(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xff0fe13 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fe13(void)

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


// ----- block @ rva 0xff0fe4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fe4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182b64b38)();
  return;
}


// ----- block @ rva 0xff0fe71 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0fe71(void)

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


// ----- block @ rva 0xff0fe86 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fe86(void)

{
  FUN_190dd72e0();
  (*_DAT_182b64b78)();
  return;
}


// ----- block @ rva 0xff0feae -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff0feae(void)

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


// ----- block @ rva 0xff0fecf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0fecf(void)

{
  FUN_190dd9df0();
  (*_DAT_182b64b88)();
  return;
}


// ----- block @ rva 0xff0ff26 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff0ff26(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetBooleanField /*0x300*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182b64b98)();
  return;
}


// ----- block @ rva 0xff0ff5c -----

void FUN_18ff0ff5c(void)

{
  return;
}


// ----- block @ rva 0xff0ff64 -----

void FUN_18ff0ff64(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xff100b7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff100b7(void)

{
  FUN_190ddce00();
  (*_DAT_182b64cb8)();
  return;
}


// ----- block @ rva 0xff1297b -----

void FUN_18ff1297b(void)

{
  return;
}


// ----- block @ rva 0xff12a58 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff12a58(void)

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


// ----- block @ rva 0xff12af1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff12af1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_182b64d08)();
  return;
}


// ----- block @ rva 0xff12b31 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff12b31(void)

{
  undefined8 uStack0000000000000040;
  undefined8 in_stack_00000080;
  
  uStack0000000000000040 = in_stack_00000080;
  FUN_190dd72e0();
  (*_DAT_182b64dc8)();
  return;
}


// ----- block @ rva 0xff12c5f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff12c5f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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


// ----- block @ rva 0xff12ddb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff12ddb(void)

{
  (*_DAT_182b64eb8)();
  return;
}


// ----- block @ rva 0xff12de6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff12de6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182b64d68)();
  return;
}


// ----- block @ rva 0xff12e4c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff12e4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182b64e18)();
  return;
}


// ----- block @ rva 0xff12f73 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff12f73(void)

{
  (*_DAT_182b64eb8)();
  return;
}


// ----- block @ rva 0xff12fd3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff12fd3(void)

{
  FUN_190de3220();
  (*_DAT_182b64f78)();
  return;
}


// ----- block @ rva 0xff1319b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff1319b(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182b64d48)();
  return;
}


// ----- block @ rva 0xff133f0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ff13427 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ff133f0(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xff13445 -----

void FUN_18ff13445(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x40) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x48) = *(undefined8 *)(unaff_RBP + 0x40);
  *(longlong **)(unaff_RBP + 0x20) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018ff13475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b65d30 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xff16b9f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff16b9f(void)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x18) = 0xf;
  (**(code **)(**(longlong **)(unaff_RBP + 0x20) + 0x70))
            (*(longlong **)(unaff_RBP + 0x20),*(undefined8 *)(unaff_RBP + 0x28),unaff_RBP + -0x30);
  switch(0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xff18060 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ff18060(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong lVar1;
  
  FUN_18414b520(unaff_RBP + -0x30,param_2,(unaff_RBP + -0x3b) - param_2);
  lVar1 = unaff_RBP + -0x30;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar1 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(**(longlong **)(unaff_RBP + 0x20) + 0x70))
            (*(longlong **)(unaff_RBP + 0x20),*(undefined8 *)(unaff_RBP + 8),lVar1);
  switch(0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xff1fc10 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff1fc10(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  longlong *unaff_R13;
  ulonglong unaff_R15;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = (**(code **)(unaff_R13 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  *(int *)(unaff_RBP + 0x40) = (int)*(char *)(lVar2 + *(int *)(unaff_RBP + 0x48));
  (**(code **)(unaff_R13 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  *(undefined4 *)(unaff_RBP + 0x50) = 6;
  *(undefined8 *)(unaff_RBP + 0x40) = unaff_RBX;
  uVar4 = (ulonglong)unaff_EDI;
  uVar3 = (~_DAT_183442be8 + 3) *
          ((uVar4 ^ unaff_R15 ^ _DAT_183442d08) +
          (ulonglong)((uint)_DAT_183442d08 & (uint)(uVar4 ^ unaff_R15)) * 2);
  uVar3 = (uVar3 | _DAT_183442c70) + (uVar3 & _DAT_183442c70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442d18 =
       func_0x00018ff3bbf0((uVar4 ^ 0x84222327 | uVar3) +
                           (ulonglong)((uint)(uVar4 ^ 0x84222327) & (uint)uVar3));
  uVar3 = ~_DAT_183442d18 & uVar4;
  uVar5 = unaff_EDI & _DAT_180017990;
  uVar6 = unaff_EDI | _DAT_180017990;
  uVar7 = unaff_EDI ^ _DAT_180017990;
  lVar2 = ((ulonglong)unaff_EDI * (ulonglong)_DAT_182b666a0 << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_182b66690;
  uVar4 = ((((ulonglong)uVar7 * (ulonglong)_DAT_182b66660 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_182b66650 +
            ((ulonglong)uVar5 * (ulonglong)_DAT_182b66660 << 0x20 |
            (ulonglong)uVar5 * (ulonglong)_DAT_182b66650) + uVar4 + lVar2 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_182b66680 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_182b66670) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_182b66720 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_182b66710 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_182b66700 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_182b666f0 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_182b666e0 << 0x20 |
           (ulonglong)uVar5 * (ulonglong)_DAT_182b666d0) +
           ((ulonglong)unaff_EDI * (ulonglong)_DAT_182b666c0 << 0x20) +
           (ulonglong)unaff_EDI * (ulonglong)_DAT_182b666b0 + lVar2)) + 0xc50fb020b2266506;
  _DAT_183442cb8 = _DAT_183442b00 ^ uVar3 ^ uVar4;
  _DAT_183442d30 = (_DAT_183442d30 ^ uVar3) + uVar4 ^ 0x5b06c3ffc6d94d8;
  _DAT_183442e98 = (_DAT_183442e98 * -0x6ce11f87d608a7d5 ^ _DAT_183442d30) + uVar3;
  _DAT_183442bd0 = _DAT_183442e98 ^ _DAT_183442d30;
  _DAT_183442db0 = uVar4 & 0xffffffff;
  *(int *)(unaff_RBP + 0x48) = (int)uVar4;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x48) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x48)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xff2379c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff2379c(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong *unaff_RBP;
  uint unaff_ESI;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  uint unaff_XMM6_Da;
  undefined1 unaff_XMM11 [16];
  uint unaff_XMM14_Da;
  
  *(bool *)((longlong)unaff_RBP + 0x34) = *unaff_RBP == 0;
  uVar3 = (~param_2 + 2) * ((param_3 ^ in_RAX) + param_4 * 2);
  uVar3 = (uVar3 | param_1) + (uVar3 & param_1);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442df0 =
       func_0x00018ff3bbf0((in_RAX ^ 1 | uVar3) + (ulonglong)((uint)(in_RAX ^ 1) & (uint)uVar3));
  uVar3 = (_DAT_183442df0 << 0xf | _DAT_183442df0 >> 0x31) ^ 1;
  _DAT_183442ca8 =
       ((((ulonglong)(unaff_ESI ^ unaff_XMM6_Da) * (ulonglong)_DAT_182b66270 + _DAT_182b662a0 <<
         0x20) + (ulonglong)(unaff_ESI ^ unaff_XMM6_Da) * (ulonglong)_DAT_182b66290 +
        (ulonglong)unaff_ESI * (ulonglong)_DAT_182b66280 +
        ((ulonglong)unaff_ESI * (ulonglong)_DAT_182b66270 << 0x20)) -
       (((ulonglong)(unaff_ESI ^ unaff_XMM14_Da) * (ulonglong)_DAT_182b66340 << 0x20) +
        (ulonglong)(unaff_ESI ^ unaff_XMM14_Da) * (ulonglong)_DAT_182b66330 +
        ((ulonglong)(unaff_ESI | unaff_XMM14_Da) * (ulonglong)_DAT_182b66320 << 0x20) +
        (ulonglong)(unaff_ESI | unaff_XMM14_Da) * (ulonglong)_DAT_182b66310 +
       ((ulonglong)(unaff_ESI & unaff_XMM14_Da) * (ulonglong)_DAT_182b66300 << 0x20 |
       (ulonglong)(unaff_ESI & unaff_XMM14_Da) * (ulonglong)_DAT_182b662f0) +
       ((ulonglong)unaff_ESI * (ulonglong)_DAT_182b662e0 << 0x20) +
       (ulonglong)unaff_ESI * (ulonglong)_DAT_182b662d0)) + 0x4d661600215158d8;
  _DAT_183442b98 = _DAT_183442e08 ^ uVar3 ^ _DAT_183442ca8;
  _DAT_183442d28 = (_DAT_183442d28 ^ uVar3) + _DAT_183442ca8 ^ 0x676406de4dd03f54;
  _DAT_183442da8 = (_DAT_183442da8 * 0x6cab51a287a5b487 ^ _DAT_183442d28) + uVar3;
  _DAT_183442e20 = _DAT_183442da8 ^ _DAT_183442d28;
  _DAT_183442ca8 = _DAT_183442ca8 & 0xffffffff;
  uVar3 = (~_DAT_183442df8 + 0x66556b50) *
          ((_DAT_183442ce8 ^ 0xfe7b2aab) + (ulonglong)((uint)_DAT_183442ce8 & 0xfe7b2aab) * 2);
  uVar3 = (uVar3 | _DAT_183442d70) + (uVar3 & _DAT_183442d70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442e00 = func_0x00018ff3bbf0((uVar3 | 0x982e41e4) + (ulonglong)((uint)uVar3 & 0x982e41e4))
  ;
  uVar3 = ((_DAT_183442e00 ^ 0x30e84ca7b81e4cd2) & 0x1fffff) << 0x26 |
          (_DAT_183442e00 ^ 0x30e84ca7b81e4cd2) >> 0x1a;
  _DAT_183442bf0 = (_DAT_183442bf0 ^ uVar3) + 0x7e5d6bcf ^ 0x9a9a1aebf62c285b;
  _DAT_183442d98 = (_DAT_183442d98 * -0x688bcf0487265e49 ^ _DAT_183442bf0) + uVar3;
  _DAT_183442ce0 = _DAT_183442d98 ^ _DAT_183442bf0;
  _DAT_183442db0 = 0x7e5d6bcf;
  _DAT_183442e20 = func_0x00018ff3bbf0(_DAT_183442ea0 ^ 0x94000e2600d714);
  _DAT_183442e10 =
       (_DAT_183442e10 ^ _DAT_183442e20 & 0xffffffffff000000) + 0x92dadf0f ^ 0x3e51dfbfc2d667de;
  _DAT_183442b58 =
       (_DAT_183442b58 * -0x6d7c2214bbb2bad ^ _DAT_183442e10) +
       (_DAT_183442e20 & 0xffffffffff000000);
  _DAT_183442e48 = _DAT_183442b58 ^ _DAT_183442e10;
  _DAT_183442c80 = 0x92dadf0f;
  uVar3 = (_DAT_183442b28 ^ _DAT_182b66350) + _DAT_183442be8 + unaff_RBX;
  uVar7 = (_DAT_183442be8 ^ _UNK_182b66358) + _DAT_183442b28 + 0x9c986850;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183442b28 ^ _DAT_182b66350;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183442be8 ^ _UNK_182b66358;
  _DAT_183442d50 =
       func_0x00018ff3bbf0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183442b28 + 0x9c986850) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183442be8 + unaff_RBX));
  _DAT_183442dd8 = (_DAT_183442dd8 ^ _DAT_183442d50) - 0x9c986850 ^ 0x37083a10ba974e71;
  _DAT_183442be0 = (_DAT_183442be0 * 0x1c2f6bffc82954d9 ^ _DAT_183442dd8) + _DAT_183442d50;
  _DAT_183442e88 = _DAT_183442be0 ^ _DAT_183442dd8;
  _DAT_183442c80 = 0x636797b0;
  uVar3 = (~_DAT_183442ed8 + 0x9c986851) *
          ((_DAT_183442d40 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183442d40 & 0x8422dcda) * 2);
  uVar3 = (uVar3 | _DAT_183442c58) + (uVar3 & _DAT_183442c58);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442bc8 = func_0x00018ff3bbf0((uVar3 | 0x18bab48a) + (ulonglong)((uint)uVar3 & 0x18bab48a))
  ;
  uVar3 = _DAT_183442bc8 << 0x21 | _DAT_183442bc8 >> 0x1f;
  _DAT_183442ea8 = _DAT_183442ee0 ^ uVar3 ^ 0x9c99684f;
  _DAT_183442cb8 = (_DAT_183442cb8 ^ uVar3) + 0x9c99684f ^ 0xea7ea6c7d27edf76;
  _DAT_183442e08 = (_DAT_183442e08 * -0x3e039b75468092c9 ^ _DAT_183442cb8) + uVar3;
  _DAT_183442b20 = _DAT_183442e08 ^ _DAT_183442cb8;
  _DAT_183442ca0 = 0x9c99684f;
  uVar3 = (~_DAT_183442ea8 + 0x636797b1) *
          ((_DAT_183442c40 ^ 0x18bb4b6a) + (ulonglong)((uint)_DAT_183442c40 & 0x18bb4b6a) * 2);
  uVar3 = (uVar3 | _DAT_183442cc8) + (uVar3 & _DAT_183442cc8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442db8 = func_0x00018ff3bbf0((uVar3 | 0x7bdcdcda) + (ulonglong)((uint)uVar3 & 0x7bdcdcda))
  ;
  uVar3 = _DAT_183442db8 ^ 0x3cceb1d9aac74f50;
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  _DAT_183442d08 = _DAT_183442d98 ^ uVar3 ^ 0x10000ffff;
  _DAT_183442d48 = (_DAT_183442d48 ^ uVar3) + 0x10000ffff ^ 0x5c16d3a922a839bd;
  _DAT_183442c90 = (_DAT_183442c90 * -0x1187fb749711ee51 ^ _DAT_183442d48) + uVar3;
  _DAT_183442e38 = _DAT_183442c90 ^ _DAT_183442d48;
  _DAT_183442e50 = 0xffff;
  uVar3 = (~_DAT_183442c08 + 0x4f83bea1) *
          ((_DAT_183442df8 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183442df8 & 0x8422dcda) * 2);
  uVar3 = (uVar3 | _DAT_183442d20) + (uVar3 & _DAT_183442d20);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442c78 = func_0x00018ff3bbf0((uVar3 | 0xcba1627a) + (ulonglong)((uint)uVar3 & 0xcba1627a))
  ;
  uVar3 = (ulonglong)(~(uint)_DAT_183442c78 & 0xffff);
  _DAT_183442e30 = _DAT_183442c38 ^ uVar3 ^ 0x4f84be9f;
  _DAT_183442e40 = (_DAT_183442e40 ^ uVar3) + 0x4f84be9f ^ 0xb61104a57f1d8f20;
  _DAT_183442bd8 = (_DAT_183442bd8 * -0x6b3c8f39178c298f ^ _DAT_183442e40) + uVar3;
  _DAT_183442bc8 = _DAT_183442bd8 ^ _DAT_183442e40;
  _DAT_183442b18 = _DAT_183442c08 ^ 0x4f84be9f;
  _DAT_183442dc8 = 0x4f84be9f;
  _DAT_183442de8 = func_0x00018ff3bbf0(_DAT_183442b50 ^ 0xdbff8825ffb941);
  _DAT_183442b80 = _DAT_183442c40 ^ _DAT_183442de8 ^ 0x10000ffff;
  _DAT_183442cf0 = (_DAT_183442cf0 ^ _DAT_183442de8) + 0x10000ffff ^ 0x97eb2547f10e9055;
  _DAT_183442cc0 = (_DAT_183442cc0 * 0x97a86d8c8a9883 ^ _DAT_183442cf0) + _DAT_183442de8;
  _DAT_183442d08 = _DAT_183442cc0 ^ _DAT_183442cf0;
  _DAT_183442cd8 = 0xffff;
  _DAT_183442be0 = func_0x00018ff3bbf0(_DAT_183442db0 ^ 0xffdcff8ffd00906c);
  uVar3 = ((_DAT_183442be0 << 0x3a | _DAT_183442be0 >> 6) >> 0x2c | (_DAT_183442be0 >> 6) << 0x14) *
          -0x5162ff18188086fd;
  _DAT_183442d10 = (_DAT_183442d10 ^ uVar3) - 0x14bd0020 ^ 0xd6ed606e4aa43b80;
  _DAT_183442e50 = (_DAT_183442e50 * 0x7ce4c719e5777beb ^ _DAT_183442d10) + uVar3;
  _DAT_183442c20 = _DAT_183442e50 ^ _DAT_183442d10;
  _DAT_183442b58 = 0xeb42ffe0;
  uVar3 = (~_DAT_183442e68 + 0x14bd0021) *
          ((_DAT_183442b38 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183442b38 & 0x8422dcda) * 2);
  uVar3 = (uVar3 | _DAT_183442d80) + (uVar3 & _DAT_183442d80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442c08 = func_0x00018ff3bbf0((uVar3 | 0x909fdcfa) + (ulonglong)((uint)uVar3 & 0x909fdcfa))
  ;
  uVar3 = _DAT_183442c08 ^ 0xffff;
  _DAT_183442ca0 = _DAT_183442d90 ^ uVar3 ^ 0x14be001f;
  _DAT_183442c28 = (_DAT_183442c28 ^ uVar3) + 0x14be001f ^ 0xb2f854edd450fb6e;
  _DAT_183442d28 = (_DAT_183442d28 * -0x5ed1484a4b73e1dd ^ _DAT_183442c28) + uVar3;
  _DAT_183442ec8 = _DAT_183442d28 ^ _DAT_183442c28;
  _DAT_183442be8 = 0x14be001f;
  _DAT_183442e88 = func_0x00018ff3bbf0(0x5bff8ba2be550f);
  uVar7 = _UNK_182b66368;
  uVar3 = _DAT_182b66360;
  uVar2 = _DAT_183442e88 << 0x16 | _DAT_183442e88 >> 0x2a;
  uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar2 ^
          0x14be001f;
  _DAT_183442d38 = _DAT_183442d48 ^ uVar2 ^ 0x10000ffff;
  _DAT_183442e80 = (_DAT_183442e80 ^ uVar2) + 0x10000ffff ^ 0xc1bfbb4d624c6a79;
  _DAT_183442ea0 = (_DAT_183442ea0 * -0x754901587cad9283 ^ _DAT_183442e80) + uVar2;
  _DAT_183442ca0 = _DAT_183442ea0 ^ _DAT_183442e80;
  _DAT_183442e58 = 0xffff;
  uVar2 = (_DAT_183442d78 ^ _DAT_182b66360) + _DAT_183442db8 + 0xfa7f48ea;
  uVar4 = (_DAT_183442db8 ^ _UNK_182b66368) + _DAT_183442d78 + 0x92dadf0f;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183442d78 ^ _DAT_182b66360;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183442db8 ^ _UNK_182b66368;
  _DAT_183442bd0 =
       func_0x00018ff3bbf0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183442d78 + 0x92dadf0f) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183442db8 + 0xfa7f48ea));
  uVar2 = _DAT_183442bd0 * -0x2a3912f507f90257;
  _DAT_183442bb8 = _DAT_183442cb8 ^ uVar2 ^ 0x111384ade;
  _DAT_183442ee8 = (_DAT_183442ee8 ^ uVar2) + 0x111384ade ^ 0x2b7cb6e5a8e42f62;
  _DAT_183442d30 = (_DAT_183442d30 * 0x6048d7bc94552157 ^ _DAT_183442ee8) + uVar2;
  _DAT_183442b70 = _DAT_183442d30 ^ _DAT_183442ee8;
  _DAT_183442c30 = 0x11384ade;
  uVar2 = (_DAT_183442ba0 ^ uVar3) + _DAT_183442c40 + 0xfa7f48ea;
  uVar4 = (_DAT_183442c40 ^ uVar7) + _DAT_183442ba0 + 0x92dadf0f;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183442ba0 ^ uVar3;
  uVar7 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183442c40 ^ uVar7;
  _DAT_183442eb8 =
       func_0x00018ff3bbf0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183442ba0 + 0x92dadf0f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183442c40 + 0xfa7f48ea));
  uVar3 = _DAT_183442eb8 & 0xfffffffffffffc00 ^ 0x7e5d6bcf;
  _DAT_183442d28 = (_DAT_183442d28 ^ uVar3) + 0xec87b4c0 ^ 0x9e988f18f2dc1804;
  _DAT_183442cb0 = (_DAT_183442cb0 * 0x1e463efaf41d7333 ^ _DAT_183442d28) + uVar3;
  _DAT_183442be8 = _DAT_183442cb0 ^ _DAT_183442d28;
  _DAT_183442b60 = 0xec87b4c0;
  uVar3 = (_DAT_183442e68 ^ _DAT_182b66370) + _DAT_183442d90 + 0x68a597e5;
  uVar7 = (_DAT_183442d90 ^ _UNK_182b66378) + _DAT_183442e68 + 0x24b0961e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183442e68 ^ _DAT_182b66370;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183442d90 ^ _UNK_182b66378;
  _DAT_183442ec8 =
       func_0x00018ff3bbf0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183442e68 + 0x24b0961e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183442d90 + 0x68a597e5));
  uVar3 = (ulonglong)(((uint)_DAT_183442ec8 & 0xec87b4c0) >> 5);
  _DAT_183442bc0 = _DAT_183442c40 ^ uVar3 ^ 0x111384ade;
  _DAT_183442e88 = (_DAT_183442e88 ^ uVar3) + 0x111384ade ^ 0x90f6d75564739770;
  _DAT_183442c38 = (_DAT_183442c38 * -0x70844f00f6da801b ^ _DAT_183442e88) + uVar3;
  _DAT_183442c28 = _DAT_183442c38 ^ _DAT_183442e88;
  _DAT_183442c88 = 0x11384ade;
  uVar3 = (~_DAT_183442be8 + 0x11384adf) *
          ((_DAT_183442c90 ^ 0x951a69fb) + (ulonglong)((uint)_DAT_183442c90 & 0x951a69fb) * 2);
  uVar3 = (uVar3 | _DAT_183442b40) + (uVar3 & _DAT_183442b40);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442e70 = func_0x00018ff3bbf0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_183442b88 = _DAT_183442b30 & 0x3ffffffff;
  _DAT_183442be8 = _DAT_183442be8 ^ _DAT_183442b88 ^ 0x311f8814ae8c6032;
  _DAT_183442e50 = (_DAT_183442e50 * -0x229f1d0047cf18ed ^ _DAT_183442be8) + _DAT_183442b88;
  _DAT_183442eb0 = _DAT_183442e50 ^ _DAT_183442be8;
  _DAT_183442bf0 = 0;
  uVar3 = (~_DAT_183442c30 + 0x100000000) *
          ((_DAT_183442c00 ^ 0xfa7f48ea) + (ulonglong)((uint)_DAT_183442c00 & 0xfa7f48ea) * 2);
  uVar3 = (uVar3 | _DAT_183442d98) + (uVar3 & _DAT_183442d98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442bf0 = func_0x00018ff3bbf0((uVar3 | 0x580b715) + (ulonglong)((uint)uVar3 & 0x580b715));
  uVar3 = (ulonglong)(~(uint)_DAT_183442bf0 & 0x7e5d6bc0);
  _DAT_183442cd0 = (_DAT_183442cd0 ^ uVar3) + 0x81a29430 ^ 0x7a10e034e00ffc5a;
  _DAT_183442cd8 = (_DAT_183442cd8 * -0x2bb3ef774bddd9b1 ^ _DAT_183442cd0) + uVar3;
  _DAT_183442e38 = _DAT_183442cd8 ^ _DAT_183442cd0;
  _DAT_183442e78 = 0x81a29430;
  uVar3 = ((_DAT_183442dc0 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183442dc0 & 0x8422dcda) * 2) *
          -_DAT_183442c30;
  uVar3 = (uVar3 | _DAT_183442bc8) + (uVar3 & _DAT_183442bc8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183442eb8 = func_0x00018ff3bbf0((uVar3 | 0x8422dcda) + (ulonglong)((uint)uVar3 & 0x8422dcda))
  ;
  uVar3 = _DAT_183442eb8 & 0xffffffffffffffc0;
  _DAT_183442bf0 = _DAT_183442d10 ^ uVar3 ^ 0xffff;
  _DAT_183442e70 = (_DAT_183442e70 ^ uVar3) + 0xffff ^ 0x446f5fe282b5b5e4;
  _DAT_183442c08 = (_DAT_183442c08 * -0x698c0d8c09608f73 ^ _DAT_183442e70) + uVar3;
  _DAT_183442c88 = _DAT_183442c08 ^ _DAT_183442e70;
  _DAT_183442e40 = 0xffff;
  uVar1 = *(uint *)(unaff_RBP + 0xe);
  auVar5._8_8_ = _UNK_1801098d8;
  auVar5._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_182b66380,unaff_XMM11);
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar7 + _DAT_183442b60;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_183442b38 ^ uVar7;
  }
  _DAT_183442db8 = func_0x00018ff3bbf0(SUB161(auVar5 ^ _DAT_182b66380,5) ^ uVar3);
  _DAT_183442d88 = (ulonglong)uVar1 & 0xffff;
  _DAT_183442ca8 =
       (_DAT_183442ca8 ^ _DAT_183442db8 & 0x7ffffffff) + _DAT_183442d88 ^ 0xc47a8391e8af621c;
  _DAT_183442eb8 =
       (_DAT_183442eb8 * 0x40bc6b9dcd2c2675 ^ _DAT_183442ca8) + (_DAT_183442db8 & 0x7ffffffff);
  _DAT_183442b98 = _DAT_183442eb8 ^ _DAT_183442ca8;
  *(int *)(unaff_RBP + 10) = (int)_DAT_183442d88;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((longlong)unaff_RBP + 0x34)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xff2716d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff2716d(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  int unaff_EDI;
  uint unaff_R14D;
  byte in_XMM0_Bf;
  undefined1 in_XMM1 [16];
  uint unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM10_Da;
  uint uVar3;
  uint uVar4;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  uVar2 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar1 = uVar2 + _DAT_183442d90;
  if (in_XMM1._4_4_ < 0) {
    uVar1 = _DAT_183442b70 ^ uVar2;
  }
  _DAT_183442b10 = func_0x00018ff3bbf0(in_XMM0_Bf ^ uVar1);
  uVar3 = unaff_R14D & unaff_XMM14_Da;
  uVar4 = unaff_R14D | unaff_XMM14_Da;
  uVar1 = ((((ulonglong)(unaff_R14D ^ unaff_XMM6_Da) * (ulonglong)_DAT_182b669b0 + _DAT_182b669c0 <<
            0x20) + (ulonglong)(unaff_R14D ^ unaff_XMM6_Da) * (ulonglong)_DAT_182b669a0 +
           ((ulonglong)(unaff_R14D ^ unaff_XMM14_Da) * (ulonglong)_DAT_182b66990 << 0x20) +
           (ulonglong)(unaff_R14D ^ unaff_XMM14_Da) * (ulonglong)_DAT_182b66980 +
           ((ulonglong)uVar4 * (ulonglong)_DAT_182b66970 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_182b66960 +
           ((ulonglong)uVar3 * (ulonglong)_DAT_182b66950 << 0x20 |
           (ulonglong)uVar3 * (ulonglong)_DAT_182b66940) +
           ((ulonglong)unaff_R14D * (ulonglong)_DAT_182b66930 << 0x20) +
           (ulonglong)unaff_R14D * (ulonglong)_DAT_182b66920) -
          (((ulonglong)uVar4 * (ulonglong)unaff_XMM10_Da << 0x20) +
           (ulonglong)uVar4 * (ulonglong)unaff_XMM8_Da +
          ((ulonglong)uVar3 * (ulonglong)unaff_XMM10_Da << 0x20 |
          (ulonglong)uVar3 * (ulonglong)unaff_XMM8_Da) +
          ((ulonglong)unaff_R14D * (ulonglong)unaff_XMM15_Da << 0x20) +
          (ulonglong)unaff_R14D * (ulonglong)_DAT_182b669f0)) + 0xac76c6fd714fd858;
  _DAT_183442b88 = _DAT_183442ce8 ^ _DAT_183442b10 ^ uVar1;
  _DAT_183442d18 = (_DAT_183442d18 ^ _DAT_183442b10) + uVar1 ^ 0xe5ed6f8e4ce71437;
  _DAT_183442d50 = (_DAT_183442d50 * -0x25e446e295a5450b ^ _DAT_183442d18) + _DAT_183442b10;
  _DAT_183442de0 = _DAT_183442d50 ^ _DAT_183442d18;
  _DAT_183442eb0 = uVar1 & 0xffffffff;
  *(int *)(unaff_RBP + 0x40) = (int)uVar1;
  *(int *)(unaff_RBP + 0x48) = unaff_EDI;
  switch((int)uVar1 < unaff_EDI) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xff2763f -----

undefined8 thunk_FUN_18ff1342a(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xff276c4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ff276c4(void)

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


// ----- block @ rva 0xff2778b -----

undefined8 FUN_18ff2778b(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(unaff_RBX + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xff277df -----

void FUN_18ff277df(void)

{
  return;
}

