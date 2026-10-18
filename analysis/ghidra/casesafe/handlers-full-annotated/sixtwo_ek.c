// ===== Lsixtwo/ek; _9c9b6f0fd399ea825680701554b84b00 ()V (handler @ image 18d246e40, runtime 6ffff4e56e40) =====

void FUN_18d246e40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d246f28 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18218ff18 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ek; asT (Lsixtwo/gH$th;)V (handler @ image 18d21dfb0, runtime 6ffff4e2dfb0) =====

void FUN_18d21dfb0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcd0c,0x230);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d21e0aa did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182184680 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ek; asU (Lsixtwo/gB;)V (handler @ image 18d228970, runtime 6ffff4e38970) =====

void FUN_18d228970(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcd0c,0x230);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d228a34 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821879f0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ek; asV ()Z (handler @ image 18d22d110, runtime 6ffff4e3d110) =====

void FUN_18d22d110(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcd0c,0x230);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d22d1d7 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182188e00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ek; asW (Lnet/minecraft/class_304;)V (handler @ image 18d237180, runtime 6ffff4e47180) =====

void FUN_18d237180(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x9c5a,0x1bd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d2371d8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18218c6b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ek; asX (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d237710, runtime 6ffff4e47710) =====

undefined8 FUN_18d237710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/ek; asY (IJ)I (handler @ image 18d2377a0, runtime 6ffff4e477a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d2377a0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = (uRam0000000183350a78 ^ _UNK_18218e770) + uRam0000000183350a00 + 0xd019f9cd2666d00c;
  uVar4 = (uRam0000000183350a00 ^ _UNK_18218e778) + uRam0000000183350a78 + 0xee3d3c2554063789;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350a78 ^ _UNK_18218e770;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350a00 ^ _UNK_18218e778;
  uRam0000000183350730 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183350a78 + 0xee3d3c2554063789) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183350a00 + 0xd019f9cd2666d00c));
  uVar4 = uRam0000000183350730 ^ 0xfe3dfdedf646f7a9;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4;
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
  uRam0000000183350dd8 = (uRam0000000183350dd8 ^ uVar4) + 0x3e24c5e8f642c4a0 ^ 0xbff3de0f61c3b82;
  uRam0000000183350888 = (uRam0000000183350888 * 0x14dd9a1f75c07fc1 ^ uRam0000000183350dd8) + uVar4;
  uRam0000000183350798 = uRam0000000183350888 ^ uRam0000000183350dd8;
  uRam0000000183350920 = uRam0000000183350ee0 ^ 0x3e24c5e8f642c4a0;
  uRam0000000183350988 = 0x3e24c5e8f642c4a0;
  uVar3 = (uRam0000000183350a18 ^ _UNK_18218e780) + uRam0000000183350a48 + 0x84222325;
  uVar4 = (uRam0000000183350a48 ^ _UNK_18218e788) + uRam0000000183350a18 + 0xd93edc4084d5c800;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350a18 ^ _UNK_18218e780;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350a48 ^ _UNK_18218e788;
  uRam0000000183350788 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183350a18 + 0xd93edc4084d5c800) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183350a48 + 0x84222325));
  uRam0000000183350ef8 =
       (uRam0000000183350ef8 ^ uRam0000000183350788 & 0x7fffffffffffffff) + 0x26c123bf7b2a3800 ^
       0xb2330a8365705845;
  uRam0000000183350ce0 =
       (uRam0000000183350ce0 * -0x73e06aed63246d11 ^ uRam0000000183350ef8) +
       (uRam0000000183350788 & 0x7fffffffffffffff);
  uRam0000000183350cd0 = uRam0000000183350ce0 ^ uRam0000000183350ef8;
  uRam0000000183350d58 = 0x26c123bf7b2a3800;
  uVar3 = (uRam00000001833509c0 ^ _UNK_18218e790) + uRam0000000183350db0 + 0x84225cda;
  uVar4 = (uRam0000000183350db0 ^ _UNK_18218e798) + uRam00000001833509c0 + 0xd93edc4084d5c800;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833509c0 ^ _UNK_18218e790;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350db0 ^ _UNK_18218e798;
  uRam0000000183350a00 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001833509c0 + 0xd93edc4084d5c800) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183350db0 + 0x84225cda));
  uVar3 = uRam0000000183350a00 - (uRam0000000183350a00 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ~((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
           uRam0000000183350a00) & 0x7fff;
  uRam0000000183350770 = uRam0000000183350dc0 ^ uVar3 ^ 0xd93edc4084d647ff;
  uRam0000000183350de8 = (uRam0000000183350de8 ^ uVar3) + 0xd93edc4084d647ff ^ 0x4a80f664195f6ed6;
  uRam0000000183350b88 = (uRam0000000183350b88 * -0x38a4ac812d844803 ^ uRam0000000183350de8) + uVar3
  ;
  uRam0000000183350700 = uRam0000000183350b88 ^ uRam0000000183350de8;
  uRam0000000183350ba8 = 0xd93edc4084d647ff;
  uVar3 = (~uRam0000000183350df0 + 0x26c123bf7b2a3801) *
          ((uRam00000001833509c8 ^ 0xd93edc4000f464da) +
          (uRam00000001833509c8 & 0x593edc4000f464da) * 2);
  uVar3 = (uVar3 | uRam0000000183350eb0) + (uVar3 & uRam0000000183350eb0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350818 =
       func_0x00018d243090((uVar3 | 0xffffffff7bde5cda) + (uVar3 & 0xffffffff7bde5cda));
  uVar3 = ((uRam0000000183350818 & 0xffffffffffffff80) << 0x2d | uRam0000000183350818 >> 0x13) >>
          0xe | (uRam0000000183350818 >> 0x13) << 0x32;
  uRam0000000183350968 = uRam0000000183350b60 ^ uVar3 ^ 0x7fff;
  uRam0000000183350938 = (uRam0000000183350938 ^ uVar3) + 0x7fff ^ 0xc715a933d6b40b1c;
  uRam0000000183350be8 = (uRam0000000183350be8 * 0x39860a10144c434d ^ uRam0000000183350938) + uVar3;
  uRam0000000183350958 = uRam0000000183350be8 ^ uRam0000000183350938;
  uRam0000000183350e08 = 0x7fff;
  uVar3 = (uRam0000000183350b10 ^ _UNK_18218e7a0) + uRam00000001833509d8 + 0x84222325;
  uVar4 = (uRam00000001833509d8 ^ _UNK_18218e7a8) + uRam0000000183350b10 + 0xfd799551ce52d532;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350b10 ^ _UNK_18218e7a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833509d8 ^ _UNK_18218e7a8;
  uRam0000000183350870 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183350b10 + 0xfd799551ce52d532) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833509d8 + 0x84222325));
  uVar3 = uRam0000000183350870 << 0x1a | uRam0000000183350870 >> 0x26;
  uRam0000000183350740 = (uRam0000000183350740 ^ uVar3) + 0x2866aae31ad2ace ^ 0x1a18282fa74f6089;
  uRam0000000183350880 = (uRam0000000183350880 * 0x68f688d35b68bcdd ^ uRam0000000183350740) + uVar3;
  uRam0000000183350c10 = uRam0000000183350880 ^ uRam0000000183350740;
  uRam0000000183350d90 = 0x2866aae31ad2ace;
  uVar3 = (~uRam0000000183350e90 + 0xfd799551ce52d533) *
          ((uRam0000000183350798 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183350798 & 0x84225cda) * 2);
  uVar3 = (uVar3 | uRam0000000183350700) + (uVar3 & uRam0000000183350700);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350ac8 =
       func_0x00018d243090((uVar3 | 0xfd7995514a7089e8) + (uVar3 & 0xfd7995514a7089e8));
  uRam0000000183350a40 = uRam0000000183350958 ^ uRam0000000183350ac8 ^ 0xfd799551ce535531;
  uRam0000000183350c98 =
       (uRam0000000183350c98 ^ uRam0000000183350ac8) + 0xfd799551ce535531 ^ 0xa635aa94d55c0a6b;
  uRam0000000183350e58 =
       (uRam0000000183350e58 * 0x290bd35198e5252b ^ uRam0000000183350c98) + uRam0000000183350ac8;
  uRam00000001833509c0 = uRam0000000183350e58 ^ uRam0000000183350c98;
  uRam00000001833507a0 = 0xfd799551ce535531;
  uRam0000000183350820 = func_0x00018d243090(uRam0000000183350a78 + 0x893ce5453ac9a468 ^ 0xe4);
  uRam0000000183350c98 = uRam0000000183350830 ^ uRam0000000183350820 ^ 0x7fff;
  uRam0000000183350ea0 = (uRam0000000183350ea0 ^ uRam0000000183350820) + 0x7fff ^ 0x7a0cafedbd554e93
  ;
  uRam0000000183350c58 =
       (uRam0000000183350c58 * -0x400324b0689fdd75 ^ uRam0000000183350ea0) + uRam0000000183350820;
  uRam0000000183350948 = uRam0000000183350c58 ^ uRam0000000183350ea0;
  uRam0000000183350d68 = uRam0000000183350b58 ^ 0x7fff;
  uRam0000000183350e90 = 0x7fff;
  uVar3 = (~uRam0000000183350808 + 0x9d9c318d87c76321) *
          ((uRam0000000183350898 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183350898 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183350e00) + (uVar3 & uRam0000000183350e00);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350c58 =
       func_0x00018d243090((uVar3 | 0x9d9c318d03e54005) + (uVar3 & 0x9d9c318d03e54005));
  uRam0000000183350d10 =
       (uRam0000000183350d10 ^ uRam0000000183350c58) + 0x6263ce7278389ce0 ^ 0xca31685148eccee3;
  uRam00000001833509e8 =
       (uRam00000001833509e8 * -0x4904959af123a8d3 ^ uRam0000000183350d10) + uRam0000000183350c58;
  uRam0000000183350730 = uRam00000001833509e8 ^ uRam0000000183350d10;
  uRam0000000183350828 = 0x6263ce7278389ce0;
  uVar3 = (~uRam0000000183350c98 + 0x6263ce7278389ce1) *
          ((uRam0000000183350bb0 ^ 0x9d9c318d03e5c03a) +
          (uRam0000000183350bb0 & 0x1d9c318d03e5c03a) * 2);
  uVar3 = (uVar3 | uRam0000000183350b90) + (uVar3 & uRam0000000183350b90);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833507e0 =
       func_0x00018d243090((uVar3 | 0xffffffff7bdd5cda) + (uVar3 & 0xffffffff7bdd5cda));
  uVar3 = ~uRam00000001833507e0 & 0x3fffffffffff;
  uRam00000001833509a8 = uRam0000000183350b00 ^ uVar3 ^ 0x7fff;
  uRam0000000183350bb0 = (uRam0000000183350bb0 ^ uVar3) + 0x7fff ^ 0xb636300df6acf0f4;
  uRam0000000183350c70 = (uRam0000000183350c70 * -0x76be149cbbe18b7d ^ uRam0000000183350bb0) + uVar3
  ;
  uRam00000001833509d0 = uRam0000000183350c70 ^ uRam0000000183350bb0;
  uRam0000000183350ae0 = 0x7fff;
  uVar3 = (uRam0000000183350be8 ^ _UNK_18218e7b0) + uRam0000000183350910 + 0x77fdddcf4bde5cc6;
  uVar4 = (uRam0000000183350910 ^ _UNK_18218e7b8) + uRam0000000183350be8 + 0x3e24c5e8f642c4a0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350be8 ^ _UNK_18218e7b0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350910 ^ _UNK_18218e7b8;
  uRam0000000183350e00 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183350be8 + 0x3e24c5e8f642c4a0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183350910 + 0x77fdddcf4bde5cc6));
  uVar3 = uRam0000000183350e00 & 0xfffffffffff00000;
  uRam0000000183350e78 = uRam00000001833509d0 ^ uVar3 ^ 0xb622a3b8c63f4483;
  uRam00000001833509d8 = (uRam00000001833509d8 ^ uVar3) + 0xb622a3b8c63f4483 ^ 0x53034545bd20716f;
  uRam0000000183350c08 = (uRam0000000183350c08 * 0x4704c320ce3d335f ^ uRam00000001833509d8) + uVar3;
  uRam0000000183350bb0 = uRam0000000183350c08 ^ uRam00000001833509d8;
  uRam00000001833509e8 = uRam00000001833509a8 ^ 0xb622a3b8c63f4483;
  uRam0000000183350700 = 0xb622a3b8c63f4483;
  uRam0000000183350cd0 = func_0x00018d243090(uRam0000000183350a08 + 0xe767b6ab19e783b6 ^ 0xc2);
  uRam0000000183350848 =
       (uRam0000000183350848 ^ uRam0000000183350cd0 ^ 0xc133563c9c7d7d40) + 0x3624c5c8c64044a0 ^
       0x5ed00d82c74d43a;
  uRam0000000183350908 =
       (uRam0000000183350908 * 0x7cc8df746e3cad5d ^ uRam0000000183350848) +
       (uRam0000000183350cd0 ^ 0xc133563c9c7d7d40);
  uRam0000000183350c10 = uRam0000000183350908 ^ uRam0000000183350848;
  uRam0000000183350cb8 = 0x3624c5c8c64044a0;
  uVar3 = (~uRam0000000183350d70 + 0x6c498b918c808941) *
          ((uRam0000000183350e70 ^ 0x49d91827bd9c9866) +
          (uRam0000000183350e70 & 0x49d91827bd9c9866) * 2);
  uVar3 = (uVar3 | uRam0000000183350990) + (uVar3 & uRam0000000183350990);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350ed8 =
       func_0x00018d243090((uVar3 | 0x259093b6311c1126) + (uVar3 & 0x259093b6311c1126));
  uVar3 = (~uRam0000000183350ed8 & 0x49d9182739bebb43) * -0x27db1a4d78a33bc3;
  uRam0000000183350dd8 = uRam0000000183350d50 ^ uVar3 ^ 0xb622a3b8c63f4483;
  uRam0000000183350e68 = (uRam0000000183350e68 ^ uVar3) + 0xb622a3b8c63f4483 ^ 0x674f3d1eb1c57d54;
  uRam00000001833508d8 = (uRam00000001833508d8 * -0x5971ed85a288a4b3 ^ uRam0000000183350e68) + uVar3
  ;
  uRam0000000183350928 = uRam00000001833508d8 ^ uRam0000000183350e68;
  uRam0000000183350990 = 0xb622a3b8c63f4483;
  uVar3 = (uRam0000000183350b10 ^ _UNK_18218e7c0) + uRam0000000183350b08 + 0xb622a3b8421d67a6;
  uVar4 = (uRam0000000183350b08 ^ _UNK_18218e7c8) + uRam0000000183350b10 + 0xb622a3b8c63f4483;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350b10 ^ _UNK_18218e7c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350b08 ^ _UNK_18218e7c8;
  uRam0000000183350aa8 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183350b10 + 0xb622a3b8c63f4483) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183350b08 + 0xb622a3b8421d67a6));
  uRam0000000183350cd0 = uRam0000000183350cd0 ^ uRam0000000183350aa8 ^ 0x557da44cd8740d7e;
  uRam00000001833507b8 =
       (uRam00000001833507b8 * -0x734c176bd01e80d3 ^ uRam0000000183350cd0) + uRam0000000183350aa8;
  uRam0000000183350b88 = uRam00000001833507b8 ^ uRam0000000183350cd0;
  uRam0000000183350ee0 = 0;
  uVar3 = ((uRam0000000183350e98 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183350e98 & 0x84225cda) * 2) * -uRam0000000183350a48;
  uVar3 = (uVar3 | uRam0000000183350888) + (uVar3 & uRam0000000183350888);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350c00 = uRam0000000183350aa8;
  uRam0000000183350b08 =
       func_0x00018d243090((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = uRam0000000183350b08 ^ 0x7fff;
  uRam00000001833509e0 = uRam0000000183350760 ^ uVar3 ^ 0x7fff;
  uRam0000000183350a50 = (uRam0000000183350a50 ^ uVar3) + 0x7fff ^ 0x8d34c1e6614619d6;
  uRam00000001833507c8 = (uRam00000001833507c8 * 0x3ddcd04b159e0fb9 ^ uRam0000000183350a50) + uVar3;
  uRam0000000183350df8 = uRam00000001833507c8 ^ uRam0000000183350a50;
  uRam0000000183350a70 = 0x7fff;
  uRam0000000183350b10 = func_0x00018d243090(uRam0000000183350d10 + 0x30a2fe940921de87 ^ 0x77);
  uRam0000000183350870 =
       (uRam0000000183350870 ^ ~uRam0000000183350b10 & 0x77fdddcfcffc7fe3) + 0x880222303003801c ^
       0xb9b2d5b1c405c1f4;
  uRam0000000183350db8 =
       (uRam0000000183350db8 * 0x641bd275e13328df ^ uRam0000000183350870) +
       (~uRam0000000183350b10 & 0x77fdddcfcffc7fe3);
  uRam0000000183350d10 = uRam0000000183350db8 ^ uRam0000000183350870;
  uRam0000000183350988 = -0x77fdddcfcffc7fe4;
  uRam0000000183350c78 = func_0x00018d243090(lRam0000000183350bd8 + 0xc3db3c8ab60b2520U ^ 0x85);
  uRam0000000183350718 =
       uRam0000000183350718 ^ uRam0000000183350c78 ^ 0x77fdddcfcffc7fe3 ^ 0xce542e856ee58ba;
  uRam0000000183350940 =
       (uRam0000000183350940 * 0x4a585367c8625485 ^ uRam0000000183350718) +
       (uRam0000000183350c78 ^ 0x77fdddcfcffc7fe3);
  uRam0000000183350cb0 = uRam0000000183350940 ^ uRam0000000183350718;
  uRam0000000183350d00 = 0;
  uRam0000000183350d60 = func_0x00018d243090(uRam0000000183350b98 ^ 0xffcbff7ca5ffe139);
  uVar3 = uRam0000000183350d60 & 0x7fffffffffffffff;
  uRam0000000183350e48 = uRam0000000183350790 ^ uVar3 ^ 0x7fff;
  uRam0000000183350838 = (uRam0000000183350838 ^ uVar3) + 0x7fff ^ 0x64d256ff2989b55e;
  uRam0000000183350a60 = (uRam0000000183350a60 * 0x665f5e811764b903 ^ uRam0000000183350838) + uVar3;
  uRam0000000183350b70 = uRam0000000183350a60 ^ uRam0000000183350838;
  uRam0000000183350740 = 0x7fff;
  uVar3 = (~uRam0000000183350de0 + 0x33b9dcccc37461e1) *
          ((uRam0000000183350cd0 ^ 0x33b9dccc475642c5) +
          (uRam0000000183350cd0 & 0x33b9dccc475642c5) * 2);
  uVar3 = (uVar3 | uRam0000000183350880) + (uVar3 & uRam0000000183350880);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350ac8 =
       func_0x00018d243090((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uVar3 = (uRam0000000183350ac8 ^ 0x4186b8400) & 0xffffffffe;
  uRam0000000183350c68 = uRam0000000183350c68 ^ uVar3 ^ 0x842f5d67a3a516ed;
  uRam0000000183350be0 = (uRam0000000183350be0 * -0x3cc3a4bcd3ff6095 ^ uRam0000000183350c68) + uVar3
  ;
  uRam0000000183350810 = uRam0000000183350be0 ^ uRam0000000183350c68;
  uRam0000000183350af8 = 0;
  uVar3 = param_4 ^ 0x84222325 ^ uRam0000000183350aa8;
  lVar2 = (param_4 ^ 0x84222325) + uRam0000000183350de8;
  uVar4 = uVar3 + lVar2;
  uVar5 = (uRam0000000183350de8 ^ 0x7fff) + uRam0000000183350aa8 + 0x7fff;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar3;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183350de8 ^ 0x7fff;
  uRam0000000183350d70 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183350aa8 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uRam0000000183350d40 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam0000000183350850 =
       (uRam0000000183350850 ^ uRam0000000183350d70 & 0x7fffffffffffffff) + uRam0000000183350d40 ^
       0x46aaa2cfe27c1e99;
  uRam0000000183350868 =
       (uRam0000000183350868 * -0x67834f28afa8710f ^ uRam0000000183350850) +
       (uRam0000000183350d70 & 0x7fffffffffffffff);
  uRam0000000183350e18 = uRam0000000183350868 ^ uRam0000000183350850;
  uRam0000000183350a98 = func_0x00018d243090(uRam0000000183350d10 ^ 0x5affa128ff5dc8);
  uRam0000000183350d10 =
       (uRam0000000183350d10 ^ uRam0000000183350a98 ^ 0xb189e46e) + 0xb7cdfc7e ^ 0x6c49b434f2d0c4ed;
  uRam0000000183350988 =
       (uRam0000000183350988 * 0x18788bc15a6ae1d9 ^ uRam0000000183350d10) +
       (uRam0000000183350a98 ^ 0xb189e46e);
  uRam0000000183350848 = uRam0000000183350988 ^ uRam0000000183350d10;
  uRam00000001833509b0 = 0xb7cdfc7e;
  uVar3 = (~uRam0000000183350770 + 0x3350c7fd) *
          ((uRam0000000183350ed0 ^ 0x2ff21539) +
          (ulonglong)((uint)uRam0000000183350ed0 & 0x2ff21539) * 2);
  uVar3 = (uVar3 | uRam0000000183350a88) + (uVar3 & uRam0000000183350a88);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350b90 =
       func_0x00018d243090((uVar3 | 0x1ca2d2c5) + (ulonglong)((uint)uVar3 & 0x1ca2d2c5));
  uVar4 = uRam0000000183350b90 ^ 0x2270b210dc15318c;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar4;
  uRam0000000183350d88 = (uRam0000000183350d88 ^ uVar4) + 0x9880f1e0 ^ 0x491d999b5de146c9;
  uRam0000000183350e68 = (uRam0000000183350e68 * 0x1dc6245ef8dbac5d ^ uRam0000000183350d88) + uVar4;
  uRam0000000183350bb8 = uRam0000000183350e68 ^ uRam0000000183350d88;
  uRam0000000183350a20 = 0x9880f1e0;
  uVar3 = (uRam0000000183350738 ^ _UNK_18218e7d0) + uRam0000000183350c18 + 0x84222325;
  uVar4 = (uRam0000000183350c18 ^ _UNK_18218e7d8) + uRam0000000183350738 + 0x3f3347cc;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350738 ^ _UNK_18218e7d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350c18 ^ _UNK_18218e7d8;
  uRam0000000183350cd8 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183350738 + 0x3f3347cc) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183350c18 + 0x84222325));
  uRam0000000183350ab0 =
       (uRam0000000183350ab0 ^ uRam0000000183350cd8 ^ 0x3f3347cc) - 0x3f3347cc ^ 0xe68c13324f0e7653;
  uRam0000000183350b30 =
       (uRam0000000183350b30 * 0x5763906aa45b9c3b ^ uRam0000000183350ab0) +
       (uRam0000000183350cd8 ^ 0x3f3347cc);
  uRam0000000183350bf0 = uRam0000000183350b30 ^ uRam0000000183350ab0;
  uRam00000001833508a8 = 0xc0ccb834;
  uVar3 = (~uRam0000000183350ed8 + 0x91369ef1) *
          ((uRam0000000183350e60 ^ 0x84226b14) +
          (ulonglong)((uint)uRam0000000183350e60 & 0x84226b14) * 2);
  uVar3 = (uVar3 | uRam0000000183350a08) + (uVar3 & uRam0000000183350a08);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350a20 =
       func_0x00018d243090((uVar3 | 0x1514f5e4) + (ulonglong)((uint)uVar3 & 0x1514f5e4));
  uVar3 = uRam0000000183350a20 >> 1 | uRam0000000183350a20;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~((uint)uRam0000000183350a20 ^
            0x40 - (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) &
          0x4831);
  uRam0000000183350870 = uRam0000000183350ca0 ^ uVar3 ^ 0x9136e721;
  uRam0000000183350850 = (uRam0000000183350850 ^ uVar3) + 0x9136e721 ^ 0x608f9e0e990ee2f6;
  uRam0000000183350df0 = (uRam0000000183350df0 * 0x6f69e592e877d92b ^ uRam0000000183350850) + uVar3;
  uRam0000000183350810 = uRam0000000183350df0 ^ uRam0000000183350850;
  uRam0000000183350b78 = 0x9136e721;
  uRam0000000183350ec0 = func_0x00018d243090(uRam0000000183350e18 ^ 0xff5aff990bffc2be);
  uVar3 = (uRam0000000183350ec0 ^ 0x3ed7d27a87eaf310) & 0xfffffffffffffff8;
  uRam0000000183350848 = uRam0000000183350aa0 ^ uVar3 ^ 0x100004831;
  uRam0000000183350e88 = (uRam0000000183350e88 ^ uVar3) + 0x100004831 ^ 0xbdec8d2dcc2c67fa;
  uRam00000001833508a8 = (uRam00000001833508a8 * -0x2b3edd91b78801a1 ^ uRam0000000183350e88) + uVar3
  ;
  uRam0000000183350ea8 = uRam00000001833508a8 ^ uRam0000000183350e88;
  uRam0000000183350c70 = 0x4831;
  uVar3 = (uRam0000000183350720 ^ _UNK_18218e7e0) + uRam0000000183350e40 + 0x84222325;
  uVar4 = (uRam0000000183350e40 ^ _UNK_18218e7e8) + uRam0000000183350720 + 0xd74eb418;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350720 ^ _UNK_18218e7e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350e40 ^ _UNK_18218e7e8;
  uRam0000000183350d70 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183350720 + 0xd74eb418) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183350e40 + 0x84222325));
  uRam00000001833508a0 = uRam0000000183350a40 * -0x1b7e0b2df7a8e39d;
  uRam00000001833508e8 = uRam00000001833508e8 - 0xd74eb418 ^ 0xa53ca17127013556;
  uRam0000000183350a40 = uRam00000001833508a0 ^ uRam00000001833508e8;
  uRam0000000183350b40 = 0x28b14be8;
  uVar3 = (uRam0000000183350b60 ^ _UNK_18218e7f0) + uRam0000000183350dc8 + 0x84226b14;
  uVar4 = (uRam0000000183350dc8 ^ _UNK_18218e7f8) + uRam0000000183350b60 + 0xd74eb418;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350b60 ^ _UNK_18218e7f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350dc8 ^ _UNK_18218e7f8;
  uRam00000001833508c8 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183350b60 + 0xd74eb418) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183350dc8 + 0x84226b14));
  uVar3 = (uRam00000001833508c8 ^ 0x3cb78ff98c80) << 0xf | uRam00000001833508c8 >> 0x31;
  uRam0000000183350a28 = uRam0000000183350af8 ^ uVar3 ^ 0xd74efc49;
  uRam0000000183350ca8 = (uRam0000000183350ca8 ^ uVar3) + 0xd74efc49 ^ 0x96a00017d0e37fa8;
  uRam0000000183350ce8 = (uRam0000000183350ce8 * 0x3f2dee6ee1d8b337 ^ uRam0000000183350ca8) + uVar3;
  uRam0000000183350898 = uRam0000000183350ce8 ^ uRam0000000183350ca8;
  uRam0000000183350c70 = 0xd74efc49;
  uRam0000000183350ca8 = func_0x00018d243090(lRam0000000183350b18 + 0xff74003a83ffd4ffU ^ 0x85);
  uVar3 = uRam0000000183350ca8 - (uRam0000000183350ca8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam0000000183350ca8;
  uRam0000000183350ae0 = uRam0000000183350728 ^ uVar3 ^ 0x100004831;
  uRam0000000183350a50 = (uRam0000000183350a50 ^ uVar3) + 0x100004831 ^ 0x75d4bd119e0986da;
  uRam0000000183350918 = (uRam0000000183350918 * 0x5e5e240fa9c36fe9 ^ uRam0000000183350a50) + uVar3;
  uRam0000000183350870 = uRam0000000183350918 ^ uRam0000000183350a50;
  uRam0000000183350ce0 = 0x4831;
  uVar3 = (uRam0000000183350870 ^ _UNK_18218e800) + uRam0000000183350c00 + 0x33efdf5b;
  uVar4 = (uRam0000000183350c00 ^ _UNK_18218e808) + uRam0000000183350870 + 0x9880f1e0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350870 ^ _UNK_18218e800;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350c00 ^ _UNK_18218e808;
  uRam0000000183350880 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183350870 + 0x9880f1e0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183350c00 + 0x33efdf5b));
  uVar3 = uRam0000000183350880 ^ 0x8000180;
  uRam00000001833508d0 = uRam0000000183350d78 ^ uVar3 ^ 0x1504eee5e;
  uRam0000000183350850 = (uRam0000000183350850 ^ uVar3) + 0x1504eee5e ^ 0x96fd2d538d1472ed;
  uRam0000000183350da0 = (uRam0000000183350da0 * -0x2578b8f1864acb67 ^ uRam0000000183350850) + uVar3
  ;
  uRam0000000183350b10 = uRam0000000183350da0 ^ uRam0000000183350850;
  uRam0000000183350ac0 = 0x504eee5e;
  uVar3 = (uRam0000000183350a68 ^ _UNK_18218e810) + uRam0000000183350c70 + 0xab6f2ebb;
  uVar4 = (uRam0000000183350c70 ^ _UNK_18218e818) + uRam0000000183350a68 + 0x2101e0c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183350a68 ^ _UNK_18218e810;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183350c70 ^ _UNK_18218e818;
  uRam0000000183350708 =
       func_0x00018d243090((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183350a68 + 0x2101e0c0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183350c70 + 0xab6f2ebb));
  uVar3 = uRam0000000183350708 ^ 0x2f4dedde;
  uRam0000000183350a10 = uRam00000001833508b8 ^ uVar3 ^ 0x504eee5e;
  uRam0000000183350d98 = (uRam0000000183350d98 ^ uVar3) + 0x504eee5e ^ 0x79d435e5c048d685;
  uRam0000000183350930 = (uRam0000000183350930 * -0x709512beac9489f3 ^ uRam0000000183350d98) + uVar3
  ;
  uRam0000000183350d10 = uRam0000000183350930 ^ uRam0000000183350d98;
  uRam00000001833507d0 = 0x504eee5e;
  uVar3 = (~uRam0000000183350708 + 0x504eee5f) *
          ((uRam0000000183350980 ^ 0xd46ccd7b) +
          (ulonglong)((uint)uRam0000000183350980 & 0xd46ccd7b) * 2);
  uVar3 = (uVar3 | uRam0000000183350820) + (uVar3 & uRam0000000183350820);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  lRam0000000183350c38 =
       func_0x00018d243090((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam0000000183350a50 = lRam0000000183350c38 << 1 | (ulonglong)(lRam0000000183350c38 < 0);
  uRam0000000183350db8 = uRam0000000183350db8 ^ uRam0000000183350a50 ^ 0x2bd28e34bb521122;
  uRam0000000183350810 =
       (uRam0000000183350810 * -0x642e0dfc81a4f98f ^ uRam0000000183350db8) + uRam0000000183350a50;
  uRam00000001833509a8 = uRam0000000183350810 ^ uRam0000000183350db8;
  uRam0000000183350b90 = 0;
  uVar3 = (~uRam0000000183350db8 + 0x48320382) *
          ((uRam0000000183350ae8 ^ 0x33efdf5b) +
          (ulonglong)((uint)uRam0000000183350ae8 & 0x33efdf5b) * 2);
  uVar3 = (uVar3 | uRam0000000183350b50) + (uVar3 & uRam0000000183350b50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350c70 =
       func_0x00018d243090((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda));
  uRam0000000183350e98 = uRam0000000183350e98 ^ uRam00000001833507f0 ^ 0x3ed7a94a5758e963;
  uRam0000000183350788 =
       (uRam0000000183350788 * -0x39ecef32b547c0db ^ uRam0000000183350e98) + uRam00000001833507f0;
  uRam0000000183350ee8 = uRam0000000183350788 ^ uRam0000000183350e98;
  uRam0000000183350e50 = 0;
  uRam00000001833507c8 = func_0x00018d243090(lRam0000000183350970 + 0x570083f4001dffU ^ 10);
  uRam0000000183350790 = uRam0000000183350840 ^ uRam0000000183350de0 ^ 0x4831;
  uRam0000000183350820 = (uRam0000000183350820 ^ uRam0000000183350de0) + 0x4831 ^ 0x3cee4a8b345a424e
  ;
  uRam0000000183350988 =
       (uRam0000000183350988 * -0x316a2dc44eefad0d ^ uRam0000000183350820) + uRam0000000183350de0;
  uRam0000000183350ba8 = uRam0000000183350988 ^ uRam0000000183350820;
  uRam00000001833508a8 = 0x4831;
  uVar3 = (~uRam0000000183350dd8 + 0xb189e46f) * 0x35ac0f7c;
  uVar3 = (uVar3 | uRam0000000183350c10) + (uVar3 & uRam0000000183350c10);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183350848 =
       func_0x00018d243090((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uVar3 = (uRam0000000183350848 ^ 0xb189e46e) << 0xd | uRam0000000183350848 >> 0x33;
  uRam0000000183350de0 = uRam0000000183350de0 ^ uVar3 ^ 0x467565bfac0bd0e0;
  uRam00000001833509b8 = (uRam00000001833509b8 * -0x4d61da79658b5797 ^ uRam0000000183350de0) + uVar3
  ;
  uRam0000000183350ab0 = uRam00000001833509b8 ^ uRam0000000183350de0;
  uRam0000000183350888 = 0;
  uVar3 = ((uRam0000000183350d58 ^ 0x84226b14) +
          (ulonglong)((uint)uRam0000000183350d58 & 0x84226b14) * 2) * -uRam0000000183350a08;
  uVar3 = (uVar3 | uRam0000000183350de8) + (uVar3 & uRam0000000183350de8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833507a8 =
       func_0x00018d243090((uVar3 | 0x84226b14) + (ulonglong)((uint)uVar3 & 0x84226b14));
  uVar3 = (uRam00000001833507a8 ^ 0x4831) & 0x7fffffffffffffff;
  uRam0000000183350cc8 = uRam00000001833507e8 ^ uVar3 ^ 0x4831;
  uRam0000000183350b10 = (uRam0000000183350b10 ^ uVar3) + 0x4831 ^ 0x4d5fa23155b8ea9e;
  uRam0000000183350b80 = (uRam0000000183350b80 * -0x2fb2ed05866d2335 ^ uRam0000000183350b10) + uVar3
  ;
  uRam0000000183350af8 = uRam0000000183350b80 ^ uRam0000000183350b10;
  uRam00000001833507e0 = 0x4831;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xcd0c,0x230);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d239c14 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18218c910 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ek; asZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d243120, runtime 6ffff4e53120) =====

void FUN_18d243120(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d24316b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18218e940 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ek; ata (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d244130, runtime 6ffff4e54130) =====

void FUN_18d244130(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d2441b9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18218ef00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



