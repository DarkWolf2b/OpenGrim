// ===== STITCHED CORPUS: sixtwo.rC =====
// handlers: 6  continuation blocks: 55  unresolved table targets: 0
// tables not in tables.json: ['0x12eca0', '0x12eca8', '0x12ecb0', '0x12ecb8', '0x12ecc0', '0x12ecc8', '0x12ecd0', '0x12ecd8', '0x12ece0', '0x12ece8', '0x12ecf0', '0x12ecf8', '0x12ed00', '0x12ed08', '0x12ed10', '0x12ed20', '0x12ed30', '0x12ed38', '0x12ed40', '0x12ed48']

// ===== Lsixtwo/rC; _d18cf53510080fdc46e663285706d143 ()V (handler @ image 1841a3d90, runtime 6fffebdb3d90) =====

void FUN_1841a3d90(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001841a3e78 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180130430 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rC; dlu ()V (handler @ image 184185990, runtime 6fffebd95990) =====

void FUN_184185990(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x24273,0x590)
      /* POOL[0x24273,0x590]: lp | ZHYAx | dlo | nmvFr | [Lsixtwo/rB; | sixtwo/rC | Gteed | dmw | czM | dlt | cjn | ([Ljava/lang/Class;)V | ciX | SZyMC | bwR | SKEOp | dkD | dls | SdTSy | dlv | dlw | wueCa | esvJP | Ljava/util/concurrent/atomic/AtomicReference; | java/util/concurrent/atomic/AtomicReference | dmx | dlG | media/MediaPlayerInfo | initialize | JPfAx | Lsixtwo/jL; | bIG | (Lsixtwo/it;)V | NkOrm | IzDvT | cAh | (Lsixtwo/ic;Lsixtwo/iv;)V | HAhie | nsAeF | Lsixtwo/iG; | hTzMw | Lsixtwo/nZ; | cfn | MIrKO | Lsixtwo/oa; | jQBjc | Lsixtwo/nY; | dlA | dlC | (ILjava/util/function/Supplier;)Ljava/util/concurrent/Completa */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184185a78 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180128b20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rC; dlv (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 1841948f0, runtime 6fffebda48f0) =====

undefined8 FUN_1841948f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/rC; dlw (IJ)I (handler @ image 184194980, runtime 6fffebda4980) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184194980(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar5 = (~uRam0000000183066248 + 0x5959a7b177a42ee4) *
          ((uRam0000000183066150 ^ 0x1f6237f1b5e4c961) +
          (uRam0000000183066150 & 0x1f6237f1b5e4c961) * 2);
  uVar5 = (uVar5 | uRam0000000183066150) + (uVar5 & uRam0000000183066150);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830662f8 =
       func_0x00018419ffe0((uVar5 | 0x463b9040c240e782) + (uVar5 & 0x463b9040c240e782));
  uRam00000001830662d8 =
       (uRam00000001830662d8 ^ uRam00000001830662f8 ^ 0x5959a7b177a42ee3) + 0x5f7bb7f177e6eee7 ^
       0x637b60303e4535dc;
  uRam00000001830661c8 =
       (uRam00000001830661c8 * -0x54e17efde78884a3 ^ uRam00000001830662d8) +
       (uRam00000001830662f8 ^ 0x5959a7b177a42ee3);
  uRam00000001830662c0 = uRam00000001830661c8 ^ uRam00000001830662d8;
  uRam00000001830662b8 = 0x5f7bb7f177e6eee7;
  uVar5 = (~uRam0000000183066208 + 0xd8d4f8559cfb2eeb) *
          ((uRam00000001830662a0 ^ 0x898d5a08b7c962f0) +
          (uRam00000001830662a0 & 0x98d5a08b7c962f0) * 2);
  uVar5 = (uVar5 | uRam00000001830662f8) + (uVar5 & uRam00000001830662f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830661c0 =
       func_0x00018419ffe0((uVar5 | 0x5159a25d2b324c1a) + (uVar5 & 0x5159a25d2b324c1a));
  uRam0000000183066140 =
       (uRam0000000183066140 ^ uRam00000001830661c0 & 0x7fffffffffffffff) + 0x5159a25daf106f3f ^
       0x7975533b4743a094;
  uRam0000000183066200 =
       (uRam0000000183066200 * 0x5033a24048923759 ^ uRam0000000183066140) +
       (uRam00000001830661c0 & 0x7fffffffffffffff);
  uRam0000000183066100 = uRam0000000183066200 ^ uRam0000000183066140;
  uRam0000000183066120 = 0x5159a25daf106f3f;
  uVar5 = (uRam00000001830661e8 ^ _UNK_18012eca0) + uRam0000000183066288 + 0x84225cda;
  uVar8 = (uRam0000000183066288 ^ _UNK_18012eca8) + uRam00000001830661e8 + 0xc6cd869be4795530;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830661e8 ^ _UNK_18012eca0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183066288 ^ _UNK_18012eca8;
  uRam0000000183066120 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001830661e8 + 0xc6cd869be4795530) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183066288 + 0x84225cda));
  uVar5 = (uRam0000000183066120 ^ 0xc61eaad0) & 0x1fffffffff ^ 0xc6cd869be4795530;
  uVar8 = uVar5 - (uVar5 >> 1 & 0x4144414555555555);
  uVar8 = (uVar8 & 0x101013333333333) + (uVar8 >> 2 & 0x2122111333333333);
  uVar5 = (((uVar8 >> 4) + uVar8 & 0x707070f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  uRam0000000183066288 = uRam00000001830662d0 ^ uVar5 ^ 0xc6cd869be479d52f;
  uRam00000001830662d8 = (uRam00000001830662d8 ^ uVar5) + 0xc6cd869be479d52f ^ 0x558bdee837278de9;
  uRam0000000183066268 = (uRam0000000183066268 * 0xe7c57c13c021c2b ^ uRam00000001830662d8) + uVar5;
  uRam00000001830661e0 = uRam0000000183066268 ^ uRam00000001830662d8;
  uRam00000001830662a8 = 0xc6cd869be479d52f;
  uVar5 = (uRam0000000183066170 ^ _UNK_18012ecb0) + uRam0000000183066170 + 0x84225cda;
  uVar8 = (uRam0000000183066170 ^ _UNK_18012ecb8) + uRam0000000183066170 + 0xf3cf1c001065ce99;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066170 ^ _UNK_18012ecb0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183066170 ^ _UNK_18012ecb8;
  uRam0000000183066158 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183066170 + 0xf3cf1c001065ce99) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183066170 + 0x84225cda));
  uRam00000001830662d8 = uRam00000001830662e0 ^ uRam0000000183066158 ^ 0xf3cf1c0010664e98;
  uRam0000000183066150 =
       (uRam0000000183066150 ^ uRam0000000183066158) + 0xf3cf1c0010664e98 ^ 0xe275fcd457e96d43;
  uRam00000001830661f0 =
       (uRam00000001830661f0 * -0x36fb71b7d9f9abbb ^ uRam0000000183066150) + uRam0000000183066158;
  uRam00000001830662d0 = uRam00000001830661f0 ^ uRam0000000183066150;
  uRam00000001830661d0 = 0xf3cf1c0010664e98;
  uVar5 = (~uRam00000001830662d8 + 0xc30e3ffef9a3168) *
          ((uRam0000000183066200 ^ 0xf3cf1c0094446dbd) +
          (uRam0000000183066200 & 0x73cf1c0094446dbd) * 2);
  uVar5 = (uVar5 | uRam0000000183066130) + (uVar5 & uRam0000000183066130);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  lVar3 = func_0x00018419ffe0((uVar5 | 0xffffffff7bde5cda) + (uVar5 & 0xffffffff7bde5cda));
  uRam0000000183066130 = uRam00000001830661f8 ^ uRam0000000183066228 ^ 0x7fff;
  uRam0000000183066118 = (uRam0000000183066118 ^ uRam0000000183066228) + 0x7fff ^ 0xea48307a7877f256
  ;
  uRam0000000183066120 = (lVar3 * 0x446af4f5406b126d ^ uRam0000000183066118) + uRam0000000183066228;
  uRam00000001830661c0 = uRam0000000183066120 ^ uRam0000000183066118;
  uRam0000000183066168 = 0x7fff;
  uVar5 = (uRam0000000183066188 ^ _UNK_18012ecc0) + uRam00000001830662b0 + 0x84222325;
  uVar8 = (uRam00000001830662b0 ^ _UNK_18012ecc8) + uRam0000000183066188 + 0xea450d58567071e8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066188 ^ _UNK_18012ecc0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001830662b0 ^ _UNK_18012ecc8;
  uRam00000001830662b8 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183066188 + 0xea450d58567071e8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830662b0 + 0x84222325));
  uVar5 = uRam00000001830662b8 << 0x2c | uRam00000001830662b8 >> 0x14;
  uVar8 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          uRam00000001830662b8 >> 0x14) << 0x1c | uVar5 >> 0x24;
  uRam0000000183066258 = (uRam0000000183066258 ^ uVar5) + 0x15baf2a7a98f8e18 ^ 0x6c4b3f27b0393c9c;
  uRam00000001830661e0 = (uRam00000001830661e0 * 0x32b7854756378d4f ^ uRam0000000183066258) + uVar5;
  uRam0000000183066140 = uRam00000001830661e0 ^ uRam0000000183066258;
  uRam0000000183066280 = 0x15baf2a7a98f8e18;
  uVar5 = (uRam0000000183066128 ^ _UNK_18012ecd0) + uRam0000000183066240 + 0x84225cda;
  uVar8 = (uRam0000000183066240 ^ _UNK_18012ecd8) + uRam0000000183066128 + 0xea450d58567071e8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066128 ^ _UNK_18012ecd0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183066240 ^ _UNK_18012ecd8;
  uRam00000001830662a8 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183066128 + 0xea450d58567071e8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183066240 + 0x84225cda));
  uRam0000000183066248 = uRam00000001830662a8 ^ 0xe17;
  uRam00000001830661f0 =
       (uRam00000001830661f0 ^ uRam0000000183066248) + 0xea450d585670f1e7 ^ 0x224099da2a331c03;
  uRam0000000183066248 =
       ((uRam0000000183066130 ^ uRam0000000183066248 ^ 0xea450d585670f1e7) * -0x72e80c7cdc6db361 ^
       uRam00000001830661f0) + uRam0000000183066248;
  uRam00000001830662e0 = uRam0000000183066248 ^ uRam00000001830661f0;
  uRam00000001830661a8 = 0xea450d585670f1e7;
  uVar5 = (uRam00000001830662a8 ^ _UNK_18012ece0) + uRam0000000183066160 + 0xea450d58d252d2c2;
  uVar8 = (uRam0000000183066160 ^ _UNK_18012ece8) + uRam00000001830662a8 + 0x15baf2a7a98f8e18;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830662a8 ^ _UNK_18012ece0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183066160 ^ _UNK_18012ece8;
  uRam00000001830662b8 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001830662a8 + 0x15baf2a7a98f8e18) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183066160 + 0xea450d58d252d2c2));
  uVar8 = _UNK_18012ecf8;
  uVar5 = _UNK_18012ecf0;
  uVar4 = (uRam00000001830662b8 ^ 0xe67944b45fcdcfa8) >> 3 | uRam00000001830662b8 << 0x3d;
  uRam00000001830661b8 = uRam0000000183066268 ^ uVar4 ^ 0x7fff;
  uRam00000001830662d0 = (uRam00000001830662d0 ^ uVar4) + 0x7fff ^ 0x827fa27955877f5c;
  uRam0000000183066208 = (uRam0000000183066208 * 0x5349d52b863d856f ^ uRam00000001830662d0) + uVar4;
  uRam00000001830661f0 = uRam0000000183066208 ^ uRam00000001830662d0;
  uRam0000000183066248 = 0x7fff;
  uVar4 = (uRam0000000183066128 ^ _UNK_18012ecf0) + uRam0000000183066260 + 0x5f7bb7f1f3c4cdc2;
  uVar9 = (uRam0000000183066260 ^ _UNK_18012ecf8) + uRam0000000183066128 + 0x5159a25daf106f3f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183066128 ^ _UNK_18012ecf0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183066260 ^ _UNK_18012ecf8;
  uRam00000001830662a8 =
       func_0x00018419ffe0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183066128 + 0x5159a25daf106f3f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183066260 + 0x5f7bb7f1f3c4cdc2));
  uVar4 = ~((uRam00000001830662a8 ^ 0x5f7bb7fdfff6efff) * -0x5cbe0bb1c75fce97) & 0x5f7bb7f177e6eee7;
  uRam0000000183066240 = (uRam0000000183066240 ^ uVar4) + 0xe2215acd8f681d8 ^ 0x5fef180567d37134;
  uRam0000000183066130 = (uRam0000000183066130 * -0x5a819f2d2af2b29 ^ uRam0000000183066240) + uVar4;
  uRam00000001830661e8 = uRam0000000183066130 ^ uRam0000000183066240;
  uRam00000001830661f0 = 0xe2215acd8f681d8;
  uVar4 = (uRam0000000183066180 ^ uVar5) + uRam0000000183066268 + 0x5f7bb7f1f3c4cdc2;
  uVar9 = (uRam0000000183066268 ^ uVar8) + uRam0000000183066180 + 0x5159a25daf106f3f;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183066180 ^ uVar5;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183066268 ^ uVar8;
  uRam00000001830662b0 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183066180 + 0x5159a25daf106f3f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183066268 + 0x5f7bb7f1f3c4cdc2));
  uVar5 = uRam00000001830662b0 >> 1 | uRam00000001830662b0;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001830662b0;
  uRam00000001830661c8 = (uRam00000001830661c8 ^ uVar5) + 0x5159a25127006e27 ^ 0xe3f6407475272c9a;
  uRam0000000183066140 = (uRam0000000183066140 * -0x6dff06f9f8b66b2b ^ uRam00000001830661c8) + uVar5
  ;
  uRam0000000183066240 = uRam0000000183066140 ^ uRam00000001830661c8;
  uRam00000001830662b8 = 0x5159a25127006e27;
  uVar5 = (~uRam0000000183066120 + 0xa2b344a24e00dc4f) *
          ((uRam0000000183066118 ^ 0xe2215ac5cd4a2fd) +
          (uRam0000000183066118 & 0xe2215ac5cd4a2fd) * 2);
  uVar5 = (uVar5 | uRam0000000183066158) + (uVar5 & uRam0000000183066158);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066268 =
       func_0x00018419ffe0((uVar5 | 0xac91510e12d47eb3) + (uVar5 & 0xac91510e12d47eb3));
  uVar5 = uRam0000000183066268 ^ 0x83a1cb5dc2b12fd0;
  uRam00000001830662a0 = uRam0000000183066120 ^ uVar5 ^ 0xb0d55a4f26f75e26;
  uRam00000001830662d0 = (uRam00000001830662d0 ^ uVar5) + 0xb0d55a4f26f75e26 ^ 0xd6bf84a6a1b0f04b;
  uRam00000001830661e8 = (uRam00000001830661e8 * 0x7b8c7e0c4ec5ed57 ^ uRam00000001830662d0) + uVar5;
  uRam0000000183066150 = uRam00000001830661e8 ^ uRam00000001830662d0;
  uRam0000000183066148 = 0xb0d55a4f26f75e26;
  uVar5 = (uRam0000000183066210 ^ _UNK_18012ed00) + uRam0000000183066138 + 0xb0d55a4fa2d57d03;
  uVar8 = (uRam0000000183066138 ^ _UNK_18012ed08) + uRam0000000183066210 + 0xb0d55a4f26f75e26;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066210 ^ _UNK_18012ed00;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183066138 ^ _UNK_18012ed08;
  uRam0000000183066148 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam0000000183066210 + 0xb0d55a4f26f75e26) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183066138 + 0xb0d55a4fa2d57d03));
  uRam00000001830661d8 =
       ((uRam0000000183066148 ^ 0xec09326e17f3eda4) << 0x30 |
       (uRam0000000183066148 ^ 0xec09326e17f3eda4) >> 0x10) ^ 0xb0d55a4f26f75e26;
  uRam0000000183066180 = uRam0000000183066180 ^ uRam00000001830661d8 ^ 0x8ca0cd14f5d0752b;
  uRam0000000183066290 =
       (uRam0000000183066290 * -0x5bb5831617442523 ^ uRam0000000183066180) + uRam00000001830661d8;
  uRam00000001830661c8 = uRam0000000183066290 ^ uRam0000000183066180;
  uRam00000001830662a8 = 0;
  uVar5 = ~uRam00000001830662d8 *
          ((uRam00000001830661c8 ^ 0x5f7bb7f1f3c4cdc2) +
          (uRam00000001830661c8 & 0x5f7bb7f1f3c4cdc2) * 2);
  uVar5 = (uVar5 | uRam0000000183066178) + (uVar5 & uRam0000000183066178);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018419ffe0((uVar5 | 0xa084480e0c3b323d) + (uVar5 & 0xa084480e0c3b323d));
  uRam0000000183066238 = (uRam0000000183066238 ^ uVar5) + 0xa084480e88191118 ^ 0x457cef6b49f22195;
  uRam00000001830662f0 =
       (uRam0000000183066278 * -0x7c45aa4847509cb3 ^ uRam0000000183066238) + uVar5 ^
       uRam0000000183066238;
  uRam0000000183066278 = 0xa084480e88191118;
  uVar5 = ((uRam0000000183066118 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183066118 & 0x84225cda) * 2) * -uRam00000001830661d8;
  uVar5 = (uVar5 | uRam0000000183066160) + (uVar5 & uRam0000000183066160);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066150 =
       func_0x00018419ffe0((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam0000000183066150 ^ 0x7fff;
  uRam0000000183066288 = uRam00000001830661e0 ^ uVar5 ^ 0x7fff;
  uRam0000000183066218 = (uRam0000000183066218 ^ uVar5) + 0x7fff ^ 0x3db16a90e0b9161;
  uRam00000001830662a8 = (uRam00000001830662a8 * -0x31e5bc692615b979 ^ uRam0000000183066218) + uVar5
  ;
  uRam00000001830662d8 = uRam00000001830662a8 ^ uRam0000000183066218;
  uRam0000000183066278 = 0x7fff;
  uVar5 = (uRam0000000183066110 ^ 0x84225cda) + uRam0000000183066110 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066110 ^ 0x84225cda;
  uVar8 = (uRam0000000183066110 << 0xe | (uRam0000000183066110 & 0x7fffffffffffffff) >> 0x32) ^
          uRam0000000183066110;
  uRam0000000183066238 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183066110 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183066110 + 0x84225cda));
  uVar5 = (uRam0000000183066238 & 0xffffffff) * (ulonglong)_UNK_18012ed10 +
          ((ulonglong)_UNK_18012ed20 * (uRam0000000183066238 & 0xffffffff) +
           (uRam0000000183066238 >> 0x20) * (ulonglong)_UNK_18012ed10 << 0x20) & 0x7fffffffffffffff;
  uRam00000001830661d0 = uRam0000000183066270 ^ uVar5 ^ 0x7fff;
  uRam0000000183066170 = (uRam0000000183066170 ^ uVar5) + 0x7fff ^ 0xfcf43ffbbb29d865;
  uRam0000000183066108 = (uRam0000000183066108 * -0xe03fdc894fe8e6f ^ uRam0000000183066170) + uVar5;
  uRam0000000183066228 = uRam0000000183066108 ^ uRam0000000183066170;
  uRam00000001830661c0 = 0x7fff;
  uVar5 = (ulonglong)(param_4 & 0x7fff);
  uVar4 = (ulonglong)param_3;
  uVar8 = uVar5 ^ 0x84222325 ^ uRam0000000183066190;
  lVar3 = (uVar5 ^ 0x84222325) + uRam0000000183066148;
  uVar9 = uVar8 + lVar3;
  uVar10 = (uVar4 ^ uRam0000000183066148) + uRam0000000183066190 + uVar4;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar4 ^ uRam0000000183066148;
  uRam0000000183066260 =
       func_0x00018419ffe0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183066190 + uVar4) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - lVar3);
  uVar5 = uVar5 ^ uVar5 * uVar4 ^ uRam0000000183066260;
  uVar8 = uVar5 >> 1 | uVar5;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar5;
  uVar4 = (ulonglong)(param_4 & 0x7fff ^ param_3);
  uRam00000001830662b0 = (uRam00000001830662b0 ^ uVar5) + uVar4 ^ 0x7fbd178318fa4972;
  uRam0000000183066258 = (uRam0000000183066258 * 0x52ab128bfc24418d ^ uRam00000001830662b0) + uVar5;
  uRam0000000183066278 = uRam0000000183066258 ^ uRam00000001830662b0;
  uVar5 = (uRam00000001830662e0 ^ _UNK_18012ed30) + uRam0000000183066270 + 0x725da476;
  uVar8 = (uRam0000000183066270 ^ _UNK_18012ed38) + uRam00000001830662e0 + 0xc5b679f6;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001830662e0 ^ _UNK_18012ed30;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183066270 ^ _UNK_18012ed38;
  uRam0000000183066168 = uVar4;
  uRam0000000183066158 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001830662e0 + 0xc5b679f6) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183066270 + 0x725da476));
  uVar5 = uRam0000000183066158 - (uRam0000000183066158 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183066158;
  uVar5 = uVar8 >> 1 | uVar8;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar8;
  uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar8;
  uRam00000001830661a8 = (uRam00000001830661a8 ^ uVar8) + 0xf7fffff7 ^ 0xf5a98425ec67150b;
  uRam0000000183066138 = (uRam0000000183066138 * 0x3b752309f538aa8f ^ uRam00000001830661a8) + uVar8;
  uRam0000000183066230 = uRam0000000183066138 ^ uRam00000001830661a8;
  uRam00000001830662b8 = 0xf7fffff7;
  uVar5 = (~uRam0000000183066180 + 0xb58374) *
          ((uRam00000001830661e8 ^ 0x6fbe6997) +
          (ulonglong)((uint)uRam00000001830661e8 & 0x6fbe6997) * 2);
  uVar5 = (uVar5 | uRam00000001830661d8) + (uVar5 & uRam00000001830661d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830662a8 =
       func_0x00018419ffe0((uVar5 | 0x6f0beae4) + (ulonglong)((uint)uVar5 & 0x6f0beae4));
  uRam00000001830661d0 =
       (uRam00000001830661d0 ^ uRam00000001830662a8 ^ 0xeb9c4ab2) + 0xeb29c9c1 ^ 0x8ca1d33427fe8687;
  uRam0000000183066118 =
       (uRam0000000183066118 * -0x531a0b84f3fccacb ^ uRam00000001830661d0) +
       (uRam00000001830662a8 ^ 0xeb9c4ab2);
  uRam0000000183066270 = uRam0000000183066118 ^ uRam00000001830661d0;
  uRam0000000183066220 = 0xeb29c9c1;
  uVar5 = ((uRam0000000183066208 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183066208 & 0x84222325) * 2) * -0xc65beffd;
  uVar5 = (uVar5 | uRam00000001830661b8) + (uVar5 & uRam00000001830661b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066280 =
       func_0x00018419ffe0((uVar5 | 0xa0effae1) + (ulonglong)((uint)uVar5 & 0xa0effae1));
  uRam00000001830662c8 =
       (uRam00000001830662c8 ^ uRam0000000183066280 & 0xffffffffffff0000) - 0x24cdd9c4 ^
       0x63ec7b958457151a;
  uRam00000001830662c0 =
       (uRam00000001830662c0 * 0x68252400b3622b51 ^ uRam00000001830662c8) +
       (uRam0000000183066280 & 0xffffffffffff0000);
  uRam0000000183066160 = uRam00000001830662c0 ^ uRam00000001830662c8;
  uRam0000000183066288 = 0xdb32263c;
  uVar5 = (~uRam0000000183066170 + 0xdb32263d) *
          ((uRam0000000183066168 ^ 0xa0ec2cb6) +
          (ulonglong)((uint)uRam0000000183066168 & 0xa0ec2cb6) * 2);
  uVar5 = (uVar5 | uRam00000001830662a0) + (uVar5 & uRam00000001830662a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066210 =
       func_0x00018419ffe0((uVar5 | 0x7bde0a8a) + (ulonglong)((uint)uVar5 & 0x7bde0a8a));
  uVar5 = (uRam0000000183066210 ^ 0x24ce0f93) << 0x23 | (uRam0000000183066210 ^ 0x24ce0f93) >> 0x1d;
  uRam0000000183066118 = uRam00000001830662d8 ^ uVar5 ^ 0x1000035cf;
  uRam0000000183066108 = (uRam0000000183066108 ^ uVar5) + 0x1000035cf ^ 0x1f668c96411527f3;
  uRam0000000183066120 = (uRam0000000183066120 * 0x1ae9bcf1fe5a97f3 ^ uRam0000000183066108) + uVar5;
  uRam00000001830661a0 = uRam0000000183066120 ^ uRam0000000183066108;
  uRam0000000183066178 = 0x35cf;
  uRam0000000183066128 = func_0x00018419ffe0(uRam00000001830662a0 + 0xfff70032de00a8ff ^ 0xb6);
  uRam0000000183066270 =
       (uRam0000000183066270 ^ uRam00000001830661d0) + 0xf995639b ^ 0x6a8dbd2aef2d9330;
  uRam0000000183066198 =
       (uRam0000000183066198 * -0x1b4b1ffbdc6ec8d3 ^ uRam0000000183066270) + uRam00000001830661d0;
  uRam00000001830662e0 = uRam0000000183066198 ^ uRam0000000183066270;
  uRam00000001830661d0 = 0xf995639b;
  uVar5 = (~uRam0000000183066280 + 0x66ad235) *
          ((uRam0000000183066298 ^ 0x7db740be) +
          (ulonglong)((uint)uRam0000000183066298 & 0x7db740be) * 2);
  uVar5 = (uVar5 | uRam0000000183066108) + (uVar5 & uRam0000000183066108);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066180 =
       func_0x00018419ffe0((uVar5 | 0x7bdd928a) + (ulonglong)((uint)uVar5 & 0x7bdd928a));
  uVar5 = uRam0000000183066180 & 0xffffffffffffff00 ^ 0xf995639b;
  uRam00000001830662d8 = uRam0000000183066148 ^ uVar5 ^ 0x1000035cf;
  uRam0000000183066120 = (uRam0000000183066120 ^ uVar5) + 0x1000035cf ^ 0xe7d9e5c79de6a638;
  uRam00000001830661c0 = (uRam00000001830661c0 * -0x5b9b68e1571a4a13 ^ uRam0000000183066120) + uVar5
  ;
  uRam00000001830662c0 = uRam00000001830661c0 ^ uRam0000000183066120;
  uRam0000000183066288 = 0x35cf;
  uVar5 = (~uRam00000001830662c0 + 0x1e685597) *
          ((uRam0000000183066240 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183066240 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183066220) + (uVar5 & uRam0000000183066220);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066248 =
       func_0x00018419ffe0((uVar5 | 0x9a4a76b3) + (ulonglong)((uint)uVar5 & 0x9a4a76b3));
  uVar5 = uRam0000000183066248 - (uRam0000000183066248 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam0000000183066248) & 0x7ffffffffffff;
  uRam0000000183066150 = (uRam0000000183066150 ^ uVar5) - 0x1e685596 ^ 0xdfbd6cc1809769f3;
  uRam00000001830661e0 = (uRam00000001830661e0 * 0x15180fb415c6d349 ^ uRam0000000183066150) + uVar5;
  uRam0000000183066220 = uRam00000001830661e0 ^ uRam0000000183066150;
  uRam0000000183066228 = 0xe197aa6a;
  uVar5 = (uRam0000000183066120 ^ _UNK_18012ed40) + uRam0000000183066178 + 0x842216ea;
  uVar8 = (uRam0000000183066178 ^ _UNK_18012ed48) + uRam0000000183066120 + 0x1e685596;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066120 ^ _UNK_18012ed40;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183066178 ^ _UNK_18012ed48;
  uVar5 = func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183066120 + 0x1e685596)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam0000000183066178 + 0x842216ea));
  uVar5 = uVar5 ^ 0x1e685596;
  uRam00000001830662b8 = uRam0000000183066240 ^ uVar5 ^ 0x1e688b65;
  uRam0000000183066278 = (uRam0000000183066278 ^ uVar5) + 0x1e688b65 ^ 0xe2c75af1fadf71ca;
  uRam0000000183066120 = (uRam0000000183066120 * -0x70b25a0c4c78d4c7 ^ uRam0000000183066278) + uVar5
  ;
  uRam0000000183066160 = uRam0000000183066120 ^ uRam0000000183066278;
  uRam0000000183066290 = uRam0000000183066128 ^ 0x1e688b65;
  uRam0000000183066288 = 0x1e688b65;
  uVar5 = (~uRam0000000183066190 + 0xe197aa6b) *
          ((uRam0000000183066120 ^ 0x9a4aa840) +
          (ulonglong)((uint)uRam0000000183066120 & 0x9a4aa840) * 2);
  uVar5 = (uVar5 | uRam00000001830662d8) + (uVar5 & uRam00000001830662d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066128 =
       func_0x00018419ffe0((uVar5 | 0x7bdd022a) + (ulonglong)((uint)uVar5 & 0x7bdd022a));
  uVar5 = uRam0000000183066128 & 0xffffffffffffff;
  uRam0000000183066100 = uRam00000001830662c8 ^ uVar5 ^ 0x1000035cf;
  uRam0000000183066200 = (uRam00000001830662d0 ^ uVar5) + 0x1000035cf ^ 0xc37a943081876597;
  uRam00000001830662d0 = (uRam00000001830662d0 * 0x32a4245ca505171 ^ uRam0000000183066200) + uVar5;
  uRam0000000183066200 = uRam00000001830662d0 ^ uRam0000000183066200;
  uRam00000001830662a8 = 0x35cf;
  uVar5 = (~uRam00000001830661e8 + 0xeb29c9c2) *
          ((uRam0000000183066288 ^ 0x73dddcd2) +
          (ulonglong)((uint)uRam0000000183066288 & 0x73dddcd2) * 2);
  uVar5 = (uVar5 | uRam00000001830661f8) + (uVar5 & uRam00000001830661f8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066140 =
       func_0x00018419ffe0((uVar5 | 0x98f41513) + (ulonglong)((uint)uVar5 & 0x98f41513));
  uVar5 = (uRam0000000183066140 ^ 0xfffffff7) << 0x35 | (uRam0000000183066140 ^ 0xfffffff7) >> 0xb;
  uVar8 = uVar5 >> 1 | uVar5;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar5;
  uRam0000000183066118 = uRam0000000183066180 ^ uVar5 ^ 0x1e329c9b8;
  uRam0000000183066200 = (uRam0000000183066200 ^ uVar5) + 0x1e329c9b8 ^ 0x555c570f7c2da599;
  uRam0000000183066280 = (uRam0000000183066280 * -0x332a392cef061b7f ^ uRam0000000183066200) + uVar5
  ;
  uRam0000000183066268 = uRam0000000183066280 ^ uRam0000000183066200;
  uRam0000000183066218 = 0xe329c9b8;
  uVar5 = (uRam0000000183066240 ^ _UNK_18012ed50) + uRam0000000183066108 + 0x73dddcd2;
  uVar8 = (uRam0000000183066108 ^ _UNK_18012ed58) + uRam0000000183066240 + 0xeb29c9c1;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066240 ^ _UNK_18012ed50;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam0000000183066108 ^ _UNK_18012ed58;
  lVar3 = func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam0000000183066240 + 0xeb29c9c1)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam0000000183066108 + 0x73dddcd2));
  uRam0000000183066278 = 0x36d2f63ae8a20938;
  uRam00000001830661c0 = (uRam00000001830661c0 * -0x273ddc66731e18a5 ^ 0x36d2f63ae8a20938) + lVar3;
  uRam0000000183066270 = uRam00000001830661c0 ^ 0x36d2f63ae8a20938;
  uRam00000001830661f8 = 0xe329c9c1;
  uVar5 = (~uRam0000000183066258 + 0xc6539383) *
          ((uRam0000000183066148 ^ 0x98f41513) +
          (ulonglong)((uint)uRam0000000183066148 & 0x98f41513) * 2);
  uVar5 = (uVar5 | 0x36d2f63ae8a20938) + (uVar5 & 0x36d2f63ae8a20938);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183066250 =
       func_0x00018419ffe0((uVar5 | 0x5ea78691) + (ulonglong)((uint)uVar5 & 0x5ea78691));
  uVar5 = uRam0000000183066250 << 0x26 | uRam0000000183066250 >> 0x1a;
  uRam00000001830661a8 = uRam0000000183066250 ^ uVar5 ^ 0xe329c9b8;
  uRam00000001830661f0 = (uRam00000001830661f0 ^ uVar5) + 0xe329c9b8 ^ 0xc57f9e56932e1ebc;
  uRam0000000183066148 = (uRam0000000183066148 * -0x775249bf128f6859 ^ uRam00000001830661f0) + uVar5
  ;
  uRam00000001830662e0 = uRam0000000183066148 ^ uRam00000001830661f0;
  uRam0000000183066198 = 0xe329c9b8;
  uVar5 = (~uRam0000000183066218 + 0xe329c9b9) *
          ((uRam0000000183066180 ^ 0x670bea9d) +
          (ulonglong)((uint)uRam0000000183066180 & 0x670bea9d) * 2);
  uVar5 = (uVar5 | 0xe329c9b8) + (uVar5 & 0xe329c9b8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001830662d0 =
       func_0x00018419ffe0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam0000000183066280 = (uRam00000001830662d0 ^ 0x268cbbdf8) & 0x3ffffffff;
  uRam0000000183066298 = uRam0000000183066298 ^ uRam0000000183066280 ^ 0x597afa12fd14815;
  uRam0000000183066250 =
       (uRam0000000183066250 * -0x20e1e35f5318e8f1 ^ uRam0000000183066298) + uRam0000000183066280;
  uRam0000000183066110 = uRam0000000183066250 ^ uRam0000000183066298;
  uRam0000000183066168 = 0;
  uVar5 = (uRam0000000183066128 ^ 0x842216ea) + uRam0000000183066228 + 0x842216ea;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066128 ^ 0x842216ea;
  uVar8 = ((uRam0000000183066228 + uRam0000000183066128) * 0x2000 |
          uRam0000000183066228 + uRam0000000183066128 >> 0x33) ^ uRam0000000183066228;
  uRam00000001830662e0 = uRam0000000183066110;
  uRam0000000183066110 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183066128 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183066228 + 0x842216ea));
  uVar5 = uRam0000000183066110 & 0xfffffffffff00000;
  uRam00000001830661b0 = uRam0000000183066250 ^ uVar5 ^ 0x35cf;
  uRam00000001830661c8 = (uRam00000001830661c8 ^ uVar5) + 0x35cf ^ 0x120772070b77ee7d;
  uRam0000000183066108 = (uRam0000000183066108 * 0x4b9de31f740ad625 ^ uRam00000001830661c8) + uVar5;
  uRam00000001830662f8 = uRam0000000183066108 ^ uRam00000001830661c8;
  uRam00000001830661d0 = 0x35cf;
  uRam00000001830662c0 = func_0x00018419ffe0(uRam0000000183066180 ^ 0xffe2ff8c1d002175);
  uVar5 = (uRam00000001830662c0 ^ 0xf7fffff608000009) & 0x7fffffffffffffff;
  uVar8 = uVar5 - (((uRam00000001830662c0 ^ 0xf7fffff608000009) & 0x7fffffffffffffff) >> 1 &
                  0x1555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar5;
  uRam00000001830662c8 = (uRam00000001830662c8 ^ uVar5) + 0x8000008 ^ 0x9199b98c289d70ff;
  uRam00000001830662f8 = (uRam00000001830662f8 * -0x2f8980e00ffe3edf ^ uRam00000001830662c8) + uVar5
  ;
  uRam0000000183066100 = uRam00000001830662f8 ^ uRam00000001830662c8;
  uRam0000000183066258 = 0x8000008;
  uRam0000000183066178 = func_0x00018419ffe0(uRam00000001830662f0 ^ 0x4bffb75a0044fb);
  uRam00000001830662d8 =
       uRam0000000183066140 ^ uRam0000000183066178 & 0xfffffffffffff000 ^ 0x23e31ae827695373;
  uRam0000000183066140 =
       (uRam0000000183066140 * 0x2dd3c7e707c7b841 ^ uRam00000001830662d8) +
       (uRam0000000183066178 & 0xfffffffffffff000);
  uRam00000001830662d8 = uRam0000000183066140 ^ uRam00000001830662d8;
  uRam00000001830661b8 = 0;
  uVar5 = (uRam0000000183066278 ^ 0x842216ea) + uRam00000001830662c8 + 0x842216ea;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183066278 ^ 0x842216ea;
  uVar8 = ((uRam00000001830662c8 + uRam0000000183066278) * 0x2000 |
          uRam00000001830662c8 + uRam0000000183066278 >> 0x33) ^ uRam00000001830662c8;
  uRam00000001830662b0 =
       func_0x00018419ffe0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam0000000183066278 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001830662c8 + 0x842216ea));
  uVar5 = (uRam00000001830662b0 & 0x7ff) << 0x17 | uRam00000001830662b0 >> 0x29;
  uRam0000000183066158 = uRam0000000183066158 ^ uVar5 ^ 0x35cf;
  uRam00000001830662d0 = (uRam00000001830662d0 ^ uVar5) + 0x35cf ^ 0x3c302f84797a321e;
  uRam0000000183066248 = (uRam0000000183066248 * -0x25b31762b582e385 ^ uRam00000001830662d0) + uVar5
  ;
  uRam0000000183066118 = uRam0000000183066248 ^ uRam00000001830662d0;
  uRam00000001830661f0 = 0x35cf;
  uRam0000000183066248 = func_0x00018419ffe0(uRam00000001830662b0 ^ 0x1cff841d002172);
  uVar5 = uRam0000000183066248 - (uRam0000000183066248 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183066248;
  uRam0000000183066138 = uRam0000000183066138 ^ uVar5 ^ 0x46e189f435fe8999;
  uRam00000001830662d0 = (uRam00000001830662d0 * 0x294c9f08ecf09379 ^ uRam0000000183066138) + uVar5;
  uRam0000000183066120 = uRam00000001830662d0 ^ uRam0000000183066138;
  auVar6._8_8_ = _UNK_18012ed68;
  auVar6._0_8_ = uVar4 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _UNK_18012ed70,_UNK_1800170c0);
  uRam00000001830662f0 = 0;
  uVar8 = auVar7._8_8_ + auVar7._0_8_;
  uVar5 = uVar8 + uRam0000000183066118;
  if (auVar7._4_4_ < 0) {
    uVar5 = uRam00000001830661a0 ^ uVar8;
  }
  uRam0000000183066250 = func_0x00018419ffe0(SUB161(auVar6 ^ _UNK_18012ed70,5) ^ uVar5);
  uVar5 = uRam0000000183066250 - (uRam0000000183066250 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (~(ulonglong)((uint)uRam0000000183066250 ^ (uint)bVar1 + (uint)bVar1) & uVar4) * 0x2000;
  uRam0000000183066148 = uVar4 ^ 0x35cf;
  uRam0000000183066140 = (uRam0000000183066140 ^ uVar5) + uRam0000000183066148 ^ 0xef09219fa8cef219;
  uRam00000001830662a0 = (uRam00000001830662a0 * 0x5f51cfa0a86f8ca7 ^ uRam0000000183066140) + uVar5;
  uRam0000000183066170 = uRam00000001830662a0 ^ uRam0000000183066140;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x24273,0x590)
      /* POOL[0x24273,0x590]: lp | ZHYAx | dlo | nmvFr | [Lsixtwo/rB; | sixtwo/rC | Gteed | dmw | czM | dlt | cjn | ([Ljava/lang/Class;)V | ciX | SZyMC | bwR | SKEOp | dkD | dls | SdTSy | dlv | dlw | wueCa | esvJP | Ljava/util/concurrent/atomic/AtomicReference; | java/util/concurrent/atomic/AtomicReference | dmx | dlG | media/MediaPlayerInfo | initialize | JPfAx | Lsixtwo/jL; | bIG | (Lsixtwo/it;)V | NkOrm | IzDvT | cAh | (Lsixtwo/ic;Lsixtwo/iv;)V | HAhie | nsAeF | Lsixtwo/iG; | hTzMw | Lsixtwo/nZ; | cfn | MIrKO | Lsixtwo/oa; | jQBjc | Lsixtwo/nY; | dlA | dlC | (ILjava/util/function/Supplier;)Ljava/util/concurrent/Completa */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184197252 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18012ce40 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/rC; dlx (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1841a0070, runtime 6fffebdb0070) =====

void FUN_1841a0070(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001841a00bb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18012ee80 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/rC; dly (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1841a1080, runtime 6fffebdb1080) =====

void FUN_1841a1080(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001841a1109 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18012f440 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x4185a7b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184185a7b(void)

{
  FUN_190ddce00();
  (*_DAT_1801291c8)();
  return;
}


// ----- block @ rva 0x418bca9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18418bca9(void)

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


// ----- block @ rva 0x418d5a7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18418d5a7(void)

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


// ----- block @ rva 0x418d69f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418d69f(void)

{
  (*_DAT_18012adb8)();
  return;
}


// ----- block @ rva 0x418dab6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418dab6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18012a808)();
  return;
}


// ----- block @ rva 0x418db27 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418db27(void)

{
  (*_DAT_18012adb8)();
  return;
}


// ----- block @ rva 0x418dd76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18418dd76(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180128ca8)();
  return;
}


// ----- block @ rva 0x4193bf0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184193bf0(void)

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


// ----- block @ rva 0x41943e6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841943e6(void)

{
  (*_DAT_18012ae88)();
  return;
}


// ----- block @ rva 0x4194700 -----

void FUN_184194700(void)

{
  return;
}


// ----- block @ rva 0x419476c -----

void FUN_18419476c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4197255 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184197255(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x41973f4 -----

void FUN_1841973f4(void)

{
  return;
}


// ----- block @ rva 0x4198239 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184198239(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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


// ----- block @ rva 0x419828e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18419828e(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000082;
  
  uStack0000000000000082 = in_stack_00000058;
  (**(code **)(in_stack_00000030 + JNI->SetByteArrayRegion /*0x680*/))();
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 7) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4198423 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184198423(void)

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


// ----- block @ rva 0x41985bc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841985bc(void)

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


// ----- block @ rva 0x419946b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18419bf0f(void)

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


// ----- block @ rva 0x419aa5a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18419bf0f(void)

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


// ----- block @ rva 0x419bc16 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18419bc16(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000030);
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x419be58 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18419be58(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x419fc15 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18419fc15(void)

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


// ----- block @ rva 0x41a00be -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a00be(void)

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


// ----- block @ rva 0x41a0112 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a0112(void)

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


// ----- block @ rva 0x41a036c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a036c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18012f2b8)();
  return;
}


// ----- block @ rva 0x41a03dd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a03dd(void)

{
  int in_EAX;
  int in_stack_00000048;
  
  switch(in_stack_00000048 < 0 || in_EAX <= in_stack_00000048) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x41a0536 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a0536(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_18012f3e8)();
  return;
}


// ----- block @ rva 0x41a070f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a070f(void)

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


// ----- block @ rva 0x41a07a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a07a3(void)

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


// ----- block @ rva 0x41a09fd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a09fd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_18012f2d8)();
  return;
}


// ----- block @ rva 0x41a0efd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a0efd(void)

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


// ----- block @ rva 0x41a0f51 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a0f51(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18012f188)();
  return;
}


// ----- block @ rva 0x41a0f85 -----

void FUN_1841a0f85(void)

{
  return;
}


// ----- block @ rva 0x41a0f94 -----

void FUN_1841a0f94(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x41a110c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a110c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_18012f7f8)();
  return;
}


// ----- block @ rva 0x41a16ce -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a16ce(void)

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


// ----- block @ rva 0x41a1caf -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a1caf(void)

{
  (*_DAT_180130328)();
  return;
}


// ----- block @ rva 0x41a1de6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a1de6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_18012fe78)();
  return;
}


// ----- block @ rva 0x41a22d9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a22d9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1801302c8)();
  return;
}


// ----- block @ rva 0x41a2927 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a2927(void)

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


// ----- block @ rva 0x41a2f5a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841a2f5a(void)

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


// ----- block @ rva 0x41a2f7b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a2f7b(void)

{
  FUN_190ddfc90();
  (*_DAT_18012f878)();
  return;
}


// ----- block @ rva 0x41a30a6 -----

void FUN_1841a30a6(void)

{
  return;
}


// ----- block @ rva 0x41a3ad3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a3ad3(void)

{
  (*_DAT_180130058)();
  return;
}


// ----- block @ rva 0x41a3c4a -----

void FUN_1841a3c4a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x41a3e7b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001841a3ed1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1841a3e7b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x41a5b7c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a5b7c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack00000000000000ec;
  
  uStack00000000000000ec = 0x530045;
  (**(code **)(unaff_RSI + JNI->NewString /*0x518*/))();
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


// ----- block @ rva 0x41a64d4 -----

void thunk_FUN_1841a4003(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x41a923e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841a923e(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  int in_stack_00000060;
  
  lVar4 = (**(code **)(unaff_RSI + JNI->GetPrimitiveArrayCritical /*0x6f0*/))();
  cVar1 = *(char *)(lVar4 + in_stack_00000060);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(extraout_XMM0_Qa,in_stack_00000038,lVar4,2);
  uVar5 = (ulonglong)(uint)(int)cVar1;
  uVar6 = (_DAT_183066318 ^ _DAT_180131890) + _DAT_183066868 + 0xe09ac7d5;
  uVar7 = (_DAT_183066868 ^ _UNK_180131898) + _DAT_183066318 + 0x5a906e3e;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066318 ^ _DAT_180131890;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183066868 ^ _UNK_180131898;
  _DAT_183066ab0 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066318 + 0x5a906e3e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183066868 + 0xe09ac7d5));
  uVar6 = (ulonglong)((uint)_DAT_183066ab0 & 0x64b8e4f0);
  _DAT_1830668e8 = (_DAT_1830668e8 ^ uVar6) + 0x3e288ace ^ 0x6a956d290f01d92a;
  _DAT_1830667a8 = (_DAT_1830667a8 * 0x7b9e01d0cf13b039 ^ _DAT_1830668e8) + uVar6;
  _DAT_1830668d8 = _DAT_1830667a8 ^ _DAT_1830668e8;
  _DAT_183066980 = 0x3e288ace;
  uVar6 = (_DAT_183066a70 ^ _DAT_1801318a0) + _DAT_1830669a8 + 0x84222325;
  uVar7 = (_DAT_1830669a8 ^ _UNK_1801318a8) + _DAT_183066a70 + 0xc5d41510;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066a70 ^ _DAT_1801318a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830669a8 ^ _UNK_1801318a8;
  _DAT_1830669f8 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066a70 + 0xc5d41510) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830669a8 + 0x84222325));
  uVar6 = _DAT_1830669f8 ^ 0xc5d41510;
  uVar7 = uVar6 >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  _DAT_183066580 = (_DAT_183066580 ^ uVar6) - 0xc5d41510 ^ 0xabe47a737c99c042;
  _DAT_183066970 = (_DAT_183066970 * 0x325c2b3fc763d749 ^ _DAT_183066580) + uVar6;
  _DAT_1830666f8 = _DAT_183066970 ^ _DAT_183066580;
  _DAT_1830668f8 = 0x3a2beaf0;
  uVar6 = (_DAT_183066300 ^ _DAT_1801318b0) + _DAT_1830663a8 + 0x842223da;
  uVar7 = (_DAT_1830663a8 ^ _UNK_1801318b8) + _DAT_183066300 + 0xc5d41510;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066300 ^ _DAT_1801318b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830663a8 ^ _UNK_1801318b8;
  _DAT_1830668f8 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066300 + 0xc5d41510) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830663a8 + 0x842223da));
  uVar6 = _DAT_1830668f8 & 0xfffffffffff;
  _DAT_183066470 = _DAT_183066650 ^ uVar6 ^ 0xc5d4160f;
  _DAT_1830668e0 = (_DAT_1830668e0 ^ uVar6) + 0xc5d4160f ^ 0x57e3acf366012d52;
  _DAT_183066420 = (_DAT_183066420 * 0x518ca33cd2826a31 ^ _DAT_1830668e0) + uVar6;
  _DAT_183066930 = _DAT_183066420 ^ _DAT_1830668e0;
  _DAT_183066978 = 0xc5d4160f;
  uVar6 = (_DAT_183066608 ^ _DAT_1801318c0) + _DAT_183066430 + 0x41f6352a;
  uVar7 = (_DAT_183066430 ^ _UNK_1801318c8) + _DAT_183066608 + 0x3a2beaf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066608 ^ _DAT_1801318c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183066430 ^ _UNK_1801318c8;
  _DAT_183066978 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066608 + 0x3a2beaf0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183066430 + 0x41f6352a));
  uVar6 = _DAT_183066978 ^ 0x2cf3fd2c6d836410;
  _DAT_1830667b0 = _DAT_183066378 ^ uVar6 ^ 0x1000000ff;
  _DAT_1830667a0 = (_DAT_1830667a0 ^ uVar6) + 0x1000000ff ^ 0x332912eb74398772;
  _DAT_1830667a8 = (_DAT_1830667a8 * -0x2505571a43145e5b ^ _DAT_1830667a0) + uVar6;
  _DAT_1830666a0 = _DAT_1830667a8 ^ _DAT_1830667a0;
  _DAT_183066630 = 0xff;
  _DAT_183066610 = func_0x0001841b5ce0(_DAT_1830665b0 + 0xffd5ff24dd0024ffU ^ 0x26);
  _DAT_183066708 =
       (_DAT_183066708 ^ _DAT_183066610 & 0x7fffffffffffffff) - 0x5b471900 ^ 0xa9b3f7f5821f4731;
  _DAT_183066630 =
       (_DAT_183066630 * 0x652e0c4db32efc77 ^ _DAT_183066708) +
       (_DAT_183066610 & 0x7fffffffffffffff);
  _DAT_183066358 = _DAT_183066630 ^ _DAT_183066708;
  _DAT_183066820 = 0xa4b8e700;
  _DAT_183066708 = func_0x0001841b5ce0(_DAT_1830668e8 ^ 0x600c0a5ffe4fa);
  uVar6 = (_DAT_183066708 << 0x15 | _DAT_183066708 >> 0x2b) ^ 0x5b471900;
  _DAT_1830668a8 = _DAT_1830663b0 ^ uVar6 ^ 0x5b4719ff;
  _DAT_183066970 = (_DAT_183066970 ^ uVar6) + 0x5b4719ff ^ 0xff252738deaa0e9c;
  _DAT_1830666f8 = (_DAT_1830666f8 * -0x2f7c0b9567445e21 ^ _DAT_183066970) + uVar6;
  _DAT_1830665d0 = _DAT_1830666f8 ^ _DAT_183066970;
  _DAT_1830667c8 = 0x5b4719ff;
  uVar6 = (~_DAT_183066810 + 0xa4b8e701) *
          ((_DAT_183066638 ^ 0xdf653ada) + (ulonglong)((uint)_DAT_183066638 & 0xdf653ada) * 2);
  uVar6 = (uVar6 | _DAT_1830666a0) + (uVar6 & _DAT_1830666a0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830666f0 = func_0x0001841b5ce0((uVar6 | 0x7bddddda) + (ulonglong)((uint)uVar6 & 0x7bddddda))
  ;
  uVar6 = _DAT_1830666f0 & 0x7ffffffffff;
  _DAT_1830664e0 = _DAT_183066608 ^ uVar6 ^ 0x1000000ff;
  _DAT_1830668a8 = (_DAT_1830668a8 ^ uVar6) + 0x1000000ff ^ 0x5bfd662b57cd1214;
  _DAT_1830668c0 = (_DAT_1830668c0 * 0xc813c39ff663651 ^ _DAT_1830668a8) + uVar6;
  _DAT_183066480 = _DAT_1830668c0 ^ _DAT_1830668a8;
  _DAT_183066688 = 0xff;
  uVar6 = (_DAT_183066940 ^ _DAT_1801318d0) + _DAT_1830664c0 + 0x84222325;
  uVar7 = (_DAT_1830664c0 ^ _UNK_1801318d8) + _DAT_183066940 + 0xe61afc0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066940 ^ _DAT_1801318d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830664c0 ^ _UNK_1801318d8;
  _DAT_183066a08 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066940 + 0xe61afc0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830664c0 + 0x84222325));
  _DAT_1830666f0 = _DAT_183066938 * 0x6190c4f0e0020fef;
  _DAT_1830663c0 = _DAT_1830663c0 - 0xe61afc0 ^ 0x7531dc738df90ec2;
  _DAT_183066938 = _DAT_1830666f0 ^ _DAT_1830663c0;
  _DAT_183066550 = 0xf19e5040;
  uVar6 = (~_DAT_183066af0 + 0xe61afc1) *
          ((_DAT_183066970 ^ 0x842223da) + (ulonglong)((uint)_DAT_183066970 & 0x842223da) * 2);
  uVar6 = (uVar6 | _DAT_183066a78) + (uVar6 & _DAT_183066a78);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183066398 = func_0x0001841b5ce0((uVar6 | 0x8a438c1a) + (ulonglong)((uint)uVar6 & 0x8a438c1a))
  ;
  uVar6 = _DAT_183066398 - (_DAT_183066398 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar2 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (ulonglong)(((uint)_DAT_183066398 ^ (uint)bVar2 + (uint)bVar2) & 0xff);
  _DAT_1830666d8 = _DAT_183066460 ^ uVar6 ^ 0xe61b0bf;
  _DAT_183066978 = (_DAT_183066978 ^ uVar6) + 0xe61b0bf ^ 0x5658c0edb95fb8d7;
  _DAT_183066510 = (_DAT_183066510 * 0x3c885426960295c3 ^ _DAT_183066978) + uVar6;
  _DAT_183066830 = _DAT_183066510 ^ _DAT_183066978;
  _DAT_183066838 = 0xe61b0bf;
  _DAT_183066790 = func_0x0001841b5ce0(_DAT_183066440 + 0x3f000ac600d4ffU ^ 0x73);
  uVar6 = _DAT_183066790 ^ 0xfffff0ff;
  _DAT_183066860 = _DAT_1830665f8 ^ uVar6 ^ 0x1000000ff;
  _DAT_183066a28 = (_DAT_183066a28 ^ uVar6) + 0x1000000ff ^ 0xb39bb9e43e87f080;
  _DAT_183066748 = (_DAT_183066748 * 0x32b1a0d59b7c63bd ^ _DAT_183066a28) + uVar6;
  _DAT_183066800 = _DAT_183066748 ^ _DAT_183066a28;
  _DAT_183066948 = 0xff;
  uVar6 = (~_DAT_183066538 + 0x3e288acf) *
          ((_DAT_183066368 ^ 0x6fdd50c9) + (ulonglong)((uint)_DAT_183066368 & 0x6fdd50c9) * 2);
  uVar6 = (uVar6 | _DAT_183066838) + (uVar6 & _DAT_183066838);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830668f8 = func_0x0001841b5ce0((uVar6 | 0x51f5da07) + (ulonglong)((uint)uVar6 & 0x51f5da07))
  ;
  uVar6 = (_DAT_1830668f8 ^ 0xfffffbee) << 0xe | _DAT_1830668f8 >> 0x32;
  _DAT_183066338 = _DAT_183066538 ^ uVar6 ^ 0x12a27feba;
  _DAT_1830663b0 = (_DAT_1830663b0 ^ uVar6) + 0x12a27feba ^ 0x1f869fd702c59bf5;
  _DAT_1830665e8 = (_DAT_1830665e8 * -0x37797ffff2e3ab83 ^ _DAT_1830663b0) + uVar6;
  _DAT_1830663c0 = _DAT_1830665e8 ^ _DAT_1830663b0;
  _DAT_183066790 = 0x2a27feba;
  uVar6 = (_DAT_183066788 ^ _DAT_1801318e0) + _DAT_1830667c0 + 0x6fdd50c9;
  uVar7 = (_DAT_1830667c0 ^ _UNK_1801318e8) + _DAT_183066788 + 0x3e288ace;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066788 ^ _DAT_1801318e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830667c0 ^ _UNK_1801318e8;
  _DAT_1830663e0 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066788 + 0x3e288ace) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830667c0 + 0x6fdd50c9));
  uVar6 = (_DAT_1830663e0 ^ 0x394d3df2e0ec0000) & 0xffffffffffff8000;
  _DAT_183066468 = (_DAT_183066468 ^ uVar6) + 0xd5d7f922 ^ 0xca1573bc553b452b;
  _DAT_183066868 = (_DAT_183066868 * 0x1594016342e9de05 ^ _DAT_183066468) + uVar6;
  _DAT_1830665e8 = _DAT_183066868 ^ _DAT_183066468;
  _DAT_1830667f8 = 0xd5d7f922;
  uVar6 = (~_DAT_183066ab0 + 0x3e288acf) *
          ((_DAT_183066960 ^ 0x6fdd50c9) + (ulonglong)((uint)_DAT_183066960 & 0x6fdd50c9) * 2);
  uVar6 = (uVar6 | _DAT_1830668d0) + (uVar6 & _DAT_1830668d0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830664a0 = func_0x0001841b5ce0((uVar6 | 0x51f5da07) + (ulonglong)((uint)uVar6 & 0x51f5da07))
  ;
  uVar6 = (ulonglong)(~(uint)_DAT_1830664a0 & 0xebff73ec);
  _DAT_1830667d8 = (_DAT_1830667d8 ^ uVar6) + 0x2a2802cc ^ 0x29ed959e0bbf95cc;
  _DAT_183066590 = (_DAT_183066590 * 0x41e50f165eb09cc9 ^ _DAT_1830667d8) + uVar6;
  _DAT_183066420 = _DAT_183066590 ^ _DAT_1830667d8;
  _DAT_183066720 = 0x2a2802cc;
  _DAT_183066728 = func_0x0001841b5ce0(_DAT_183066888 ^ 0xff21000577009c08);
  uVar6 = (_DAT_183066728 ^ 0xd5d7fdba) * -0xafa27aa00116c71 & 0x1fffffffffffff;
  _DAT_183066940 = (_DAT_183066940 ^ uVar6) + 0x12a27feba ^ 0x36744866126ec118;
  _DAT_1830667b8 = (_DAT_1830667b8 * 0x210ceba657560539 ^ _DAT_183066940) + uVar6;
  _DAT_183066a98 = _DAT_1830667b8 ^ _DAT_183066940;
  _DAT_183066378 = 0x2a27feba;
  uVar6 = ((_DAT_183066ac0 ^ 0x842223da) + (ulonglong)((uint)_DAT_183066ac0 & 0x842223da) * 2) *
          -_DAT_183066878;
  uVar6 = (uVar6 | _DAT_183066a48) + (uVar6 & _DAT_183066a48);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830665e8 = func_0x0001841b5ce0((uVar6 | 0x842223da) + (ulonglong)((uint)uVar6 & 0x842223da))
  ;
  uVar6 = (_DAT_1830665e8 ^ 0xff) << 0x12 | _DAT_1830665e8 >> 0x2e;
  _DAT_183066aa8 = _DAT_183066438 ^ uVar6 ^ 0xff;
  _DAT_183066658 = (_DAT_183066658 ^ uVar6) + 0xff ^ 0xdaefefd4c0dfd40d;
  _DAT_1830665c0 = (_DAT_1830665c0 * 0x7c8a1294dc25fc1f ^ _DAT_183066658) + uVar6;
  _DAT_183066ac0 = _DAT_1830665c0 ^ _DAT_183066658;
  _DAT_183066870 = 0xff;
  uVar6 = (~_DAT_183066520 + 0x100000000) *
          ((_DAT_183066330 ^ 0x6fdd50c9) + (ulonglong)((uint)_DAT_183066330 & 0x6fdd50c9) * 2);
  uVar6 = (uVar6 | _DAT_1830665e0) + (uVar6 & _DAT_1830665e0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183066748 = func_0x0001841b5ce0((uVar6 | 0x9022af36) + (ulonglong)((uint)uVar6 & 0x9022af36))
  ;
  _DAT_183066798 = (_DAT_183066798 ^ _DAT_183066748 ^ 0xebff73ec) + 0x14008c13 ^ 0xadf16d1455f3af1b;
  _DAT_1830664f8 =
       (_DAT_1830664f8 * -0x71b74d383a39da39 ^ _DAT_183066798) + (_DAT_183066748 ^ 0xebff73ec);
  _DAT_183066a40 = _DAT_1830664f8 ^ _DAT_183066798;
  _DAT_183066a88 = 0x14008c13;
  uVar6 = (~_DAT_1830666e0 + 0x14008c14) *
          ((_DAT_183066330 ^ 0x6fdd50c9) + (ulonglong)((uint)_DAT_183066330 & 0x6fdd50c9) * 2);
  uVar6 = (uVar6 | _DAT_183066338) + (uVar6 & _DAT_183066338);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183066768 = func_0x0001841b5ce0((uVar6 | 0x7bdddcda) + (ulonglong)((uint)uVar6 & 0x7bdddcda))
  ;
  uVar6 = (_DAT_183066768 ^ 0xebff73ec) & 0x7fffffffffffffff;
  _DAT_183066560 = _DAT_183066560 ^ uVar6 ^ 0x2f9cfa91c0b311ff;
  _DAT_183066920 = (_DAT_183066920 * -0xd1476a53f901529 ^ _DAT_183066560) + uVar6;
  _DAT_183066910 = _DAT_183066920 ^ _DAT_183066560;
  _DAT_1830663b0 = 0;
  uVar6 = (_DAT_183066888 ^ 0x842223da) + _DAT_1830666b8 + 0x842223da;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066888 ^ 0x842223da;
  uVar7 = ((_DAT_1830666b8 + _DAT_183066888) * 0x2000 | _DAT_1830666b8 + _DAT_183066888 >> 0x33) ^
          _DAT_1830666b8;
  _DAT_183066348 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183066888 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830666b8 + 0x842223da));
  uVar6 = (_DAT_183066348 << 0x18 | _DAT_183066348 >> 0x28) >> 5 | (_DAT_183066348 >> 0x28) << 0x3b;
  _DAT_183066aa8 = _DAT_1830663d8 ^ uVar6 ^ 0xff;
  _DAT_183066918 = (_DAT_183066918 ^ uVar6) + 0xff ^ 0x3f044a1763225703;
  _DAT_183066a10 = (_DAT_183066a10 * 0x77914b0e661bf765 ^ _DAT_183066918) + uVar6;
  _DAT_183066840 = _DAT_183066a10 ^ _DAT_183066918;
  _DAT_183066688 = 0xff;
  uVar6 = (_DAT_183066590 ^ _DAT_1801318f0) + _DAT_1830669c0 + 0x676e3249;
  uVar7 = (_DAT_1830669c0 ^ _UNK_1801318f8) + _DAT_183066590 + 0xe34c116c;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183066590 ^ _DAT_1801318f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1830669c0 ^ _UNK_1801318f8;
  _DAT_183066750 =
       func_0x0001841b5ce0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183066590 + 0xe34c116c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1830669c0 + 0x676e3249));
  _DAT_183066658 = _DAT_183066658 ^ _DAT_183066750 & 0x7fffffffff ^ 0xb8f47b97bad296c5;
  _DAT_183066510 =
       (_DAT_183066510 * -0x427bb08bae3c80b3 ^ _DAT_183066658) + (_DAT_183066750 & 0x7fffffffff);
  _DAT_183066a10 = _DAT_183066510 ^ _DAT_183066658;
  _DAT_1830665e0 = 0;
  _DAT_183066630 = func_0x0001841b5ce0(_DAT_1830668c0 + 0x1f007bda0021ff ^ 0x7c);
  _DAT_183066ac8 = _DAT_183066430 ^ _DAT_183066630 ^ 0xff;
  _DAT_183066868 = (_DAT_183066868 ^ _DAT_183066630) + 0xff ^ 0x8c2a196c3f66653d;
  _DAT_1830664a8 = (_DAT_1830664a8 * 0x27f7b619b955f2e9 ^ _DAT_183066868) + _DAT_183066630;
  _DAT_183066838 = _DAT_1830664a8 ^ _DAT_183066868;
  _DAT_183066600 = 0xff;
  uVar6 = (~_DAT_183066880 + 0x100) *
          ((uVar5 ^ 0x84222325 ^ _DAT_183066458) +
          (ulonglong)((uint)_DAT_183066458 & (uint)(uVar5 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | _DAT_1830665c0) + (uVar6 & _DAT_1830665c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183066510 =
       func_0x0001841b5ce0((uVar5 ^ 0x842223da | uVar6) +
                           (ulonglong)((uint)(uVar5 ^ 0x842223da) & (uint)uVar6));
  uVar6 = _DAT_183066510 << 0x28 & 0x7fffffffffffffff | _DAT_183066510 >> 0x18;
  uVar7 = (_DAT_183066510 << 0x28 & 0x7fffffffffffffff | _DAT_183066510 >> 0x18) >> 1 | uVar6;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  _DAT_183066398 = uVar5 & 0xff;
  _DAT_1830669c8 = (_DAT_1830669c8 ^ uVar6) + _DAT_183066398 ^ 0x844d997a01716ff9;
  _DAT_1830666a8 = (_DAT_1830666a8 * 0xd81764f866df379 ^ _DAT_1830669c8) + uVar6;
  _DAT_183066518 = _DAT_1830666a8 ^ _DAT_1830669c8;
  uVar7 = _DAT_183066398 << 0x20;
  uVar6 = in_stack_00000050 ^ 0x84222325;
  uVar5 = ((_DAT_1830668c0 ^ uVar6) + (uVar6 & _DAT_1830668c0) * 2) * (uVar7 - _DAT_183066968);
  uVar5 = (uVar5 | _DAT_183066670) + (uVar5 & _DAT_183066670);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1830668d8 = func_0x0001841b5ce0((uVar6 ^ uVar7 | uVar5) + (uVar5 & (uVar6 ^ uVar7)));
  uVar5 = (_DAT_1830668d8 & 0x7fffffffffffffff) >> 1 | _DAT_1830668d8 & 0x7fffffffffffffff;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_1830668d8 & 0x7fffffffffffffff) & 0x7ffffffffff;
  _DAT_183066630 = uVar7 | in_stack_00000050;
  _DAT_183066350 = (_DAT_183066350 ^ uVar5) + _DAT_183066630 ^ 0x6b34960be720d56b;
  _DAT_1830669e0 = (_DAT_1830669e0 * 0x7d14e4e32ade547d ^ _DAT_183066350) + uVar5;
  _DAT_183066828 = _DAT_1830669e0 ^ _DAT_183066350;
  iVar3 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar3 < 5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x41b501d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841b501d(void)

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


// ----- block @ rva 0x41b503b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841b503b(void)

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


// ----- block @ rva 0x41b53d1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1841b53d1(void)

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


// ----- block @ rva 0x41b548e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1841b548e(void)

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


// ----- block @ rva 0x41b55d4 -----

void thunk_FUN_1841a6387(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x41b5afc -----

void FUN_1841b5afc(void)

{
  return;
}

