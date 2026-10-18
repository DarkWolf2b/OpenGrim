// ===== Lsixtwo/eD; _41caddc0a56bdc7f755d3307e98f69b0 ()V (handler @ image 18cb58220, runtime 6ffff4768220) =====

void FUN_18cb58220(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cb58308 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182019728 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eD; awt (Lsixtwo/gH$th;)V (handler @ image 18cb2ef40, runtime 6ffff473ef40) =====

void FUN_18cb2ef40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xe23f,0x27a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cb2f00a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18200cc70 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eD; awu ()V (handler @ image 18cb44430, runtime 6ffff4754430) =====

void FUN_18cb44430(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xe23f,0x27a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cb444f1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182014818 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eD; awv (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18cb49550, runtime 6ffff4759550) =====

undefined8 FUN_18cb49550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/eD; aww (IJ)I (handler @ image 18cb495e0, runtime 6ffff47595e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18cb495e0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = (uRam000000018332ef98 ^ _UNK_182017f90) + uRam000000018332f028 + 0x3a8a0092747fe250;
  uVar8 = (uRam000000018332f028 ^ _UNK_182017f98) + uRam000000018332ef98 + 0x40b7397773479b4c;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332ef98 ^ _UNK_182017f90;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332f028 ^ _UNK_182017f98;
  uVar2 = (ulonglong)param_3;
  uRam000000018332f088 =
       func_0x00018cb54470((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018332ef98 + 0x40b7397773479b4c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018332f028 + 0x3a8a0092747fe250));
  uVar6 = ~((uRam000000018332f088 ^ 0x4056e573566a45bc) * 2) >> 1 & 0x3a8a0092f05dc175;
  uRam000000018332f068 = (uRam000000018332f068 ^ uVar6) + 0x7abf39f7f35fdb7d ^ 0xf183607a3b256be2;
  uRam000000018332f148 = (uRam000000018332f148 * -0x60a6038e33997c8d ^ uRam000000018332f068) + uVar6
  ;
  uRam000000018332f108 = uRam000000018332f148 ^ uRam000000018332f068;
  uRam000000018332f030 = 0x7abf39f7f35fdb7d;
  uRam000000018332f230 = func_0x00018cb54470(lRam000000018332f198 + 0xde05fe6852bd576aU ^ 0x86);
  uVar6 = (uRam000000018332f230 ^ 0xbccddb034f06540) & 0xffffffffffffffc0;
  uRam000000018332f1c0 = (uRam000000018332f1c0 ^ uVar6) + 0x970e4f223d4a39d6 ^ 0x676ab93d937313ab;
  uRam000000018332f1f8 = (uRam000000018332f1f8 * 0x1e929f8c06ef5003 ^ uRam000000018332f1c0) + uVar6;
  uRam000000018332f180 = uRam000000018332f1f8 ^ uRam000000018332f1c0;
  uRam000000018332ef28 = 0x970e4f223d4a39d6;
  uVar6 = (uRam000000018332f098 ^ _UNK_182017fa0) + uRam000000018332ef30 + 0x84225cda;
  uVar8 = (uRam000000018332ef30 ^ _UNK_182017fa8) + uRam000000018332f098 + 0xb2c6e5c80654853e;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332f098 ^ _UNK_182017fa0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332ef30 ^ _UNK_182017fa8;
  uRam000000018332f058 =
       func_0x00018cb54470((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018332f098 + 0xb2c6e5c80654853e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332ef30 + 0x84225cda));
  uRam000000018332f138 = uRam000000018332f058 & 0xfffffffffffffffe;
  uRam000000018332f2c8 =
       (uRam000000018332f2c8 ^ uRam000000018332f138) + 0xb2c6e5c80655053d ^ 0x37e027a1f3b0bc82;
  uRam000000018332f138 =
       ((uRam000000018332f018 ^ uRam000000018332f138 ^ 0xb2c6e5c80655053d) * -0x3eaa3ad2f02d7071 ^
       uRam000000018332f2c8) + uRam000000018332f138;
  uRam000000018332f268 = uRam000000018332f138 ^ uRam000000018332f2c8;
  uRam000000018332f1a0 = 0xb2c6e5c80655053d;
  uRam000000018332f0a8 = func_0x00018cb54470(uRam000000018332efa0 ^ 0x411a29f0f2fd4c5a);
  uRam000000018332efd8 = uRam000000018332f068 * -0x35704966e9803f3f;
  uRam000000018332ef88 = uRam000000018332ef88 + 0x6fc5f2384a91b2ce ^ 0x57f82306b9f0660f;
  uRam000000018332f068 = uRam000000018332efd8 ^ uRam000000018332ef88;
  uRam000000018332f118 = 0x6fc5f2384a91b2ce;
  uVar6 = (~uRam000000018332f2e0 + 0x903a0dc7b56e4d33) *
          ((uRam000000018332f250 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018332f250 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam000000018332eff0) + (uVar6 & uRam000000018332eff0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f180 =
       func_0x00018cb54470((uVar6 | 0x903a0dc7314c11e8) + (uVar6 & 0x903a0dc7314c11e8));
  uVar6 = uRam000000018332f180 & 0xffffffffe0000000;
  uRam000000018332f2e8 = uRam000000018332f0a8 ^ uVar6 ^ 0x903a0dc7b56ecd31;
  uRam000000018332f290 = (uRam000000018332f290 ^ uVar6) + 0x903a0dc7b56ecd31 ^ 0xd2cdbf8891cf06be;
  uRam000000018332f0f0 = (uRam000000018332f0f0 * 0x7e752bb4c066a807 ^ uRam000000018332f290) + uVar6;
  uRam000000018332f260 = uRam000000018332f0f0 ^ uRam000000018332f290;
  uRam000000018332ef60 = 0x903a0dc7b56ecd31;
  uVar6 = (uRam000000018332f1a8 ^ _UNK_182017fb0) + uRam000000018332f200 + 0x84222325;
  uVar8 = (uRam000000018332f200 ^ _UNK_182017fb8) + uRam000000018332f1a8 + 0x194a9cff95698784;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332f1a8 ^ _UNK_182017fb0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332f200 ^ _UNK_182017fb8;
  uRam000000018332ef50 =
       func_0x00018cb54470((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018332f1a8 + 0x194a9cff95698784) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332f200 + 0x84222325));
  uRam000000018332efd0 =
       (uRam000000018332efd0 ^ uRam000000018332ef50) + 0xe6b563006a96787c ^ 0x55b4fe5fb4d2b46e;
  uRam000000018332f0f0 =
       (uRam000000018332f0f0 * -0x7a98663ef4f120a1 ^ uRam000000018332efd0) + uRam000000018332ef50;
  uRam000000018332f298 = uRam000000018332f0f0 ^ uRam000000018332efd0;
  uRam000000018332f2f8 = 0xe6b563006a96787c;
  uVar6 = (~uRam000000018332f0b0 + 0x194a9cff95698785) *
          ((uRam000000018332eff0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018332eff0 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam000000018332ef30) + (uVar6 & uRam000000018332ef30);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018cb54470((uVar6 | 0x194a9cff114bdb5e) + (uVar6 & 0x194a9cff114bdb5e));
  uVar6 = ((uVar6 ^ 0x194a9cff9569ffff) << 0x2e | (uVar6 ^ 0x194a9cff9569ffff) >> 0x12) ^ 0x7fff;
  uRam000000018332f250 = uRam000000018332f0a8 ^ uVar6 ^ 0x194a9cff956a0783;
  uRam000000018332f278 = (uRam000000018332f278 ^ uVar6) + 0x194a9cff956a0783 ^ 0xa5ea3f65142032d5;
  uRam000000018332f018 = (uRam000000018332f018 * 0xa3f6ebf67175657 ^ uRam000000018332f278) + uVar6;
  uRam000000018332f2c8 = uRam000000018332f018 ^ uRam000000018332f278;
  uRam000000018332efc8 = 0x194a9cff956a0783;
  uRam000000018332f180 = func_0x00018cb54470(uRam000000018332f078 + 0xf14cc317a9304a24 ^ 0x18);
  uRam000000018332f278 = uRam000000018332f1d0 ^ uRam000000018332f180 ^ 0x7fff;
  uRam000000018332f0d0 = (uRam000000018332f0d0 ^ uRam000000018332f180) + 0x7fff ^ 0x4af69c5f904dabea
  ;
  uRam000000018332efc8 =
       (uRam000000018332efc8 * -0x6492bb0bbd085bd3 ^ uRam000000018332f0d0) + uRam000000018332f180;
  uRam000000018332f218 = uRam000000018332efc8 ^ uRam000000018332f0d0;
  uRam000000018332f258 = 0x7fff;
  uVar6 = (~uRam000000018332ef60 + 0x970e4f223d4a39d7) *
          ((uRam000000018332efb0 ^ 0x7abf39f7777df858) +
          (uRam000000018332efb0 & 0x7abf39f7777df858) * 2);
  uVar6 = (uVar6 | uRam000000018332f2f0) + (uVar6 & uRam000000018332f2f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f270 =
       func_0x00018cb54470((uVar6 | 0xedb176d54a37c18e) + (uVar6 & 0xedb176d54a37c18e));
  uRam000000018332f2e0 = uRam000000018332f190 ^ uRam000000018332f270 ^ 0x11cd891a30aa1553;
  uRam000000018332f1d0 =
       (uRam000000018332f1d0 ^ uRam000000018332f270) + 0x11cd891a30aa1553 ^ 0xd85b812276447831;
  uRam000000018332ef20 =
       (uRam000000018332ef20 * 0x389b9661599c286b ^ uRam000000018332f1d0) + uRam000000018332f270;
  uRam000000018332f2d0 = uRam000000018332ef20 ^ uRam000000018332f1d0;
  uRam000000018332f268 = 0x11cd891a30aa1553;
  uVar6 = (~uRam000000018332f150 + 0x970e4f223d4a39d7) *
          ((uRam000000018332f160 ^ 0x7abf39f7777df858) +
          (uRam000000018332f160 & 0x7abf39f7777df858) * 2);
  uVar6 = (uVar6 | uRam000000018332efd8) + (uVar6 & uRam000000018332efd8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lRam000000018332ef90 =
       func_0x00018cb54470((uVar6 | 0xedb176d54a37c18e) + (uVar6 & 0xedb176d54a37c18e));
  uVar6 = (ulonglong)~(lRam000000018332ef90 * 2) >> 1 & 0x7abf39f7f35fdb7d;
  uRam000000018332f268 = (uRam000000018332f268 ^ uVar6) + 0x120e0922314a1954 ^ 0x735c1c93bc451fad;
  uRam000000018332f0e0 = (uRam000000018332f0e0 * 0x4f41d899f63fcb67 ^ uRam000000018332f268) + uVar6;
  uRam000000018332f018 = uRam000000018332f0e0 ^ uRam000000018332f268;
  uRam000000018332f068 = 0x120e0922314a1954;
  uVar6 = (uRam000000018332f240 ^ _UNK_182017fc0) + uRam000000018332ef60 + 0x11cd891ab4883676;
  uVar8 = (uRam000000018332ef60 ^ _UNK_182017fc8) + uRam000000018332f240 + 0x11cd891a30aa1553;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332f240 ^ _UNK_182017fc0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332ef60 ^ _UNK_182017fc8;
  uRam000000018332ef48 =
       func_0x00018cb54470((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018332f240 + 0x11cd891a30aa1553) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018332ef60 + 0x11cd891ab4883676));
  uRam000000018332efd8 = uRam000000018332ef48 ^ 0x11cd891a30aa1553;
  uRam000000018332eff8 = uRam000000018332eff8 ^ uRam000000018332efd8 ^ 0x394768efb7549e19;
  uRam000000018332f260 =
       (uRam000000018332f260 * 0x58f2f17d892589a9 ^ uRam000000018332eff8) + uRam000000018332efd8;
  uRam000000018332f150 = uRam000000018332f260 ^ uRam000000018332eff8;
  uRam000000018332ef08 = 0;
  uVar6 = (uRam000000018332f150 ^ 0x84225cda) + uRam000000018332f0d8 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332f150 ^ 0x84225cda;
  uVar8 = ((uRam000000018332f0d8 + uRam000000018332f150) * 0x2000 |
          uRam000000018332f0d8 + uRam000000018332f150 >> 0x33) ^ uRam000000018332f0d8;
  uRam000000018332f190 =
       func_0x00018cb54470((uVar8 << 0x1d | uVar8 >> 0x23) - uRam000000018332f150 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332f0d8 + 0x84225cda));
  uRam000000018332f1d8 = uRam000000018332eff0 ^ uRam000000018332f190 ^ 0x7fff;
  uRam000000018332f2e0 = (uRam000000018332f2e0 ^ uRam000000018332f190) + 0x7fff ^ 0x5e363ace0ea028a2
  ;
  uRam000000018332f048 =
       (uRam000000018332f048 * -0x17784155c327a433 ^ uRam000000018332f2e0) + uRam000000018332f190;
  uRam000000018332f2f8 = uRam000000018332f048 ^ uRam000000018332f2e0;
  uRam000000018332f2a8 = 0x7fff;
  uVar6 = (~uRam000000018332f280 + 0x8540c6080ca02483) *
          ((uRam000000018332f098 ^ 0x7abf39f7777df858) +
          (uRam000000018332f098 & 0x7abf39f7777df858) * 2);
  uVar6 = (uVar6 | uRam000000018332f1c0) + (uVar6 & uRam000000018332f1c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f140 =
       func_0x00018cb54470((uVar6 | 0xffffffff7bdddcda) + (uVar6 & 0xffffffff7bdddcda));
  uRam000000018332ef38 =
       uRam000000018332ef38 ^ uRam000000018332f140 ^ 0x7abf39f7f35fdb7d ^ 0x44370bb967121980;
  uRam000000018332ef58 =
       (uRam000000018332ef58 * -0x2fa19802cc6e75f3 ^ uRam000000018332ef38) +
       (uRam000000018332f140 ^ 0x7abf39f7f35fdb7d);
  uRam000000018332ef08 = uRam000000018332ef58 ^ uRam000000018332ef38;
  uRam000000018332f270 = 0;
  uVar6 = ((uRam000000018332f238 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018332f238 & 0x84225cda) * 2) * -uRam000000018332f0a0;
  uVar6 = (uVar6 | uRam000000018332ef58) + (uVar6 & uRam000000018332ef58);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f050 =
       func_0x00018cb54470((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uRam000000018332f228 = uRam000000018332ef70 ^ uRam000000018332f050 ^ 0x7fff;
  uRam000000018332f0f0 = (uRam000000018332f0f0 ^ uRam000000018332f050) + 0x7fff ^ 0x5c3fc8e12ac3d5db
  ;
  uRam000000018332f258 =
       (uRam000000018332f258 * 0xa827ffec0acd4f7 ^ uRam000000018332f0f0) + uRam000000018332f050;
  uRam000000018332f290 = uRam000000018332f258 ^ uRam000000018332f0f0;
  uRam000000018332f058 = uRam000000018332ef80 ^ 0x7fff;
  uRam000000018332ef08 = 0x7fff;
  uVar6 = ((uRam000000018332f028 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018332f028 & 0x84225cda) * 2) * -lRam000000018332f208;
  uVar6 = (uVar6 | uRam000000018332f250) + (uVar6 & uRam000000018332f250);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f138 =
       func_0x00018cb54470((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = uRam000000018332f138 ^ 0x7fff;
  uRam000000018332f140 = uRam000000018332f228 ^ uVar6 ^ 0x7fff;
  uRam000000018332f110 = (uRam000000018332f110 ^ uVar6) + 0x7fff ^ 0xb03066fb3d017dba;
  uRam000000018332ef40 = (uRam000000018332ef40 * 0x7013dbb25b779663 ^ uRam000000018332f110) + uVar6;
  uRam000000018332f0d0 = uRam000000018332ef40 ^ uRam000000018332f110;
  uRam000000018332f0c8 = 0x7fff;
  uVar8 = (ulonglong)(param_4 & 0x7fff);
  uVar6 = uVar8 ^ 0x84222325 ^ uRam000000018332f280;
  lVar3 = (uVar8 ^ 0x84222325) + uRam000000018332efd0;
  uVar7 = uVar6 + lVar3;
  uVar9 = (uVar2 ^ uRam000000018332efd0) + uRam000000018332f280 + uVar2;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar6;
  uVar7 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar2 ^ uRam000000018332efd0;
  uRam000000018332f2f0 =
       func_0x00018cb54470((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018332f280 + uVar2) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar3);
  uVar6 = uVar8 ^ (uVar8 * uVar2 ^ uRam000000018332f2f0) & 0x7ffffffffff;
  uVar2 = (uVar8 + uVar2) - (ulonglong)((param_3 & param_4 & 0x7fff) * 2);
  uRam000000018332f0a8 = (uRam000000018332f0a8 ^ uVar6) + uVar2 ^ 0x7f68f0417e7eddf8;
  uRam000000018332f058 = (uRam000000018332f058 * 0x2669934b6eee89c1 ^ uRam000000018332f0a8) + uVar6;
  uRam000000018332f0c8 = uRam000000018332f058 ^ uRam000000018332f0a8;
  uVar2 = uVar2 & 0xffffffff;
  uRam000000018332f098 = uVar2;
  uRam000000018332f0e0 = func_0x00018cb54470(uRam000000018332f008 + 0x30fffc4600c4ff ^ 0x9e);
  uVar6 = (uRam000000018332f0e0 ^ 0x717a48cac03e5a64) << 0x34 |
          (uRam000000018332f0e0 ^ 0x717a48cac03e5a64) >> 0xc;
  uRam000000018332f0f0 = (uRam000000018332f0f0 ^ uVar6) + 0x88ef12eb ^ 0x481770e70f76bb4b;
  uRam000000018332f080 = (uRam000000018332f080 * -0x4f492a04c92c2dc9 ^ uRam000000018332f0f0) + uVar6
  ;
  uRam000000018332f0d8 = uRam000000018332f080 ^ uRam000000018332f0f0;
  uRam000000018332f270 = 0x88ef12eb;
  uRam000000018332ef10 = func_0x00018cb54470(uRam000000018332f0d0 + 0x400031d50048ff ^ 0x5a);
  uRam000000018332f0e0 =
       (uRam000000018332f0e0 ^ uRam000000018332ef10 & 0x3ffffffffffffff) - 0xf66b6308 ^
       0x72bb674bd975822;
  uRam000000018332f2e8 =
       (uRam000000018332f2e8 * -0x359be65d09ab4385 ^ uRam000000018332f0e0) +
       (uRam000000018332ef10 & 0x3ffffffffffffff);
  uRam000000018332f008 = uRam000000018332f2e8 ^ uRam000000018332f0e0;
  uRam000000018332f2c8 = 0x9949cf8;
  uRam000000018332f260 = func_0x00018cb54470(lRam000000018332f170 + 0x44002e320046ffU ^ 0x87);
  uVar6 = uRam000000018332f260 ^ 0xf66b6300;
  uRam000000018332f0d0 = uRam000000018332eff0 ^ uVar6 ^ 0xf66b6727;
  uRam000000018332ef48 = (uRam000000018332ef48 ^ uVar6) + 0xf66b6727 ^ 0xd86e4b1785f8cda3;
  uRam000000018332f068 = (uRam000000018332f068 * -0x73c1dfbb7c2a901f ^ uRam000000018332ef48) + uVar6
  ;
  uRam000000018332f250 = uRam000000018332f068 ^ uRam000000018332ef48;
  uRam000000018332f138 = 0xf66b6727;
  uRam000000018332f108 = func_0x00018cb54470(uRam000000018332ef68 + 0x5800693a002cff ^ 0x1e);
  uVar8 = uRam000000018332f108 ^ 0x938d3d02c73b1c8;
  uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (~(((uint)uVar8 ^
             (uint)((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7))
            * -0x234a3617) & 0xf66b6727);
  uRam000000018332f1c8 = (uRam000000018332f1c8 ^ uVar6) + 0x10000041f ^ 0x31dff276ca665e8a;
  uRam000000018332f0c8 = (uRam000000018332f0c8 * -0x4817c3d1c772019f ^ uRam000000018332f1c8) + uVar6
  ;
  uRam000000018332f1e8 = uRam000000018332f0c8 ^ uRam000000018332f1c8;
  uRam000000018332f018 = uRam000000018332f298 ^ 0x10000041f;
  lRam000000018332f198 = 0x41f;
  uVar6 = (~uRam000000018332f0d8 + 0x55a4ce41) *
          ((uRam000000018332f2c8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018332f2c8 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam000000018332ef50) + (uVar6 & uRam000000018332ef50);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f100 =
       func_0x00018cb54470((uVar6 | 0xd186ed65) + (ulonglong)((uint)uVar6 & 0xd186ed65));
  uVar6 = uRam000000018332f100 >> 1 | uRam000000018332f100;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018332f100;
  uRam000000018332f210 = (uRam000000018332f210 ^ uVar6) - 0x55a4ce40 ^ 0xb62e99dfb814a9fc;
  uRam000000018332f268 = (uRam000000018332f268 * 0x78a9b490cc2cc4f5 ^ uRam000000018332f210) + uVar6;
  uRam000000018332efa0 = uRam000000018332f268 ^ uRam000000018332f210;
  uRam000000018332f018 = 0xaa5b31c0;
  uVar6 = (~uRam000000018332f130 + 0x551fa6b9) *
          ((uRam000000018332efd0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018332efd0 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam000000018332ef68) + (uVar6 & uRam000000018332ef68);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f090 =
       func_0x00018cb54470((uVar6 | 0xd13d859d) + (ulonglong)((uint)uVar6 & 0xd13d859d));
  uVar6 = (uRam000000018332f090 ^ 0x551fa6b8) & 0x7fffffffffffffff;
  uRam000000018332f0b8 = (uRam000000018332f0b8 ^ uVar6) - 0x551fa6b8 ^ 0x477d0e95f908fe6c;
  uRam000000018332f068 = (uRam000000018332f068 * 0x16b92917296084bd ^ uRam000000018332f0b8) + uVar6;
  uRam000000018332f190 = uRam000000018332f068 ^ uRam000000018332f0b8;
  uRam000000018332f0a8 = 0xaae05948;
  uVar6 = (~uRam000000018332efd8 + 0x551fa6b9) *
          ((uRam000000018332f128 ^ 0x8422273a) +
          (ulonglong)((uint)uRam000000018332f128 & 0x8422273a) * 2);
  uVar6 = (uVar6 | uRam000000018332f1c0) + (uVar6 & uRam000000018332f1c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f2a8 =
       func_0x00018cb54470((uVar6 | 0xd13d8182) + (ulonglong)((uint)uVar6 & 0xd13d8182));
  uVar6 = (uRam000000018332f2a8 ^ 0x551fa6bf) & 0x1fffffffff;
  uRam000000018332f230 = uRam000000018332ef08 ^ uVar6 ^ 0x551faad7;
  uRam000000018332f040 = (uRam000000018332f040 ^ uVar6) + 0x551faad7 ^ 0x9f235e0123f3b3d6;
  uRam000000018332f2c8 = (uRam000000018332f2c8 * 0x1b0812d321f4b00d ^ uRam000000018332f040) + uVar6;
  uRam000000018332f100 = uRam000000018332f2c8 ^ uRam000000018332f040;
  uRam000000018332f018 = 0x551faad7;
  uVar6 = (~uRam000000018332f258 + 0xaae05949) *
          ((uRam000000018332f160 ^ 0xd13d89f2) +
          (ulonglong)((uint)uRam000000018332f160 & 0xd13d89f2) * 2);
  uVar6 = (uVar6 | uRam000000018332f100) + (uVar6 & uRam000000018332f100);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332efd0 =
       func_0x00018cb54470((uVar6 | 0x7bddd0ba) + (ulonglong)((uint)uVar6 & 0x7bddd0ba));
  uVar6 = (uRam000000018332efd0 ^ 0xfffffbdf) & 0x7fffffffffffffff;
  uVar8 = ((uRam000000018332efd0 ^ 0xfffffbdf) & 0x7fffffffffffffff) >> 1 | uVar6;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6;
  uRam000000018332f0e0 = uRam000000018332ef38 ^ uVar6 ^ 0x10000041f;
  uRam000000018332f2b0 = (uRam000000018332f2b0 ^ uVar6) + 0x10000041f ^ 0xcfd794ab4f6a3837;
  uRam000000018332efa8 = (uRam000000018332efa8 * 0x5d556470499d95bd ^ uRam000000018332f2b0) + uVar6;
  uRam000000018332f280 = uRam000000018332efa8 ^ uRam000000018332f2b0;
  uRam000000018332f0a0 = 0x41f;
  uVar6 = (~uRam000000018332f220 + 0x88ef12ec) *
          ((uRam000000018332f068 ^ 0x7bde5a7e) +
          (ulonglong)((uint)uRam000000018332f068 & 0x7bde5a7e) * 2);
  uVar6 = (uVar6 | uRam000000018332f018) + (uVar6 & uRam000000018332f018);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f250 =
       func_0x00018cb54470((uVar6 | 0xf3314895) + (ulonglong)((uint)uVar6 & 0xf3314895));
  uVar6 = uRam000000018332f250 - (uRam000000018332f250 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam000000018332f250;
  uRam000000018332f2f0 = uRam000000018332f268 ^ uVar6 ^ 0x188eb8c46;
  uRam000000018332f168 =
       (ulonglong)(&UNK_188eb8c46 + (uRam000000018332f168 ^ uVar6)) ^ 0x7f886ffd8a8a383;
  uRam000000018332f2a8 = (uRam000000018332f2a8 * 0x536957c7a13e9a2d ^ uRam000000018332f168) + uVar6;
  uRam000000018332f180 = uRam000000018332f2a8 ^ uRam000000018332f168;
  uRam000000018332ef38 = 0x88eb8c46;
  uVar6 = (uRam000000018332f0b0 ^ _UNK_182017fd0) + uRam000000018332f258 + 0xf3314895;
  uVar8 = (uRam000000018332f258 ^ _UNK_182017fd8) + uRam000000018332f0b0 + 0x11d82096;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332f0b0 ^ _UNK_182017fd0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018332f258 ^ _UNK_182017fd8;
  uRam000000018332efe0 =
       func_0x00018cb54470((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018332f0b0 + 0x11d82096) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332f258 + 0xf3314895));
  uVar6 = uRam000000018332efe0 & 0xfffffffffffe0000;
  uRam000000018332f178 = uRam000000018332f150 ^ uVar6 ^ 0x88eb8c46;
  uRam000000018332f070 = (uRam000000018332f070 ^ uVar6) + 0x88eb8c46 ^ 0xb5626a58589ff47;
  uRam000000018332f0a0 = (uRam000000018332f0a0 * -0xbba0a897a31210b ^ uRam000000018332f070) + uVar6;
  uRam000000018332f210 = uRam000000018332f0a0 ^ uRam000000018332f070;
  uRam000000018332f0b8 = 0x88eb8c46;
  uVar6 = (uRam000000018332ef98 ^ 0x8422273a) + uRam000000018332f200 + 0x8422273a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332ef98 ^ 0x8422273a;
  uVar8 = ((uRam000000018332f200 + uRam000000018332ef98) * 0x2000 |
          uRam000000018332f200 + uRam000000018332ef98 >> 0x33) ^ uRam000000018332f200;
  uRam000000018332f1e8 =
       func_0x00018cb54470((uVar8 << 0x1d | uVar8 >> 0x23) - uRam000000018332ef98 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332f200 + 0x8422273a));
  uRam000000018332f120 = uRam000000018332f1a8 ^ uRam000000018332f1e8 ^ 0x41f;
  uRam000000018332f248 = (uRam000000018332f248 ^ uRam000000018332f1e8) + 0x41f ^ 0x91e6ad6483991e5a;
  uRam000000018332f290 =
       (uRam000000018332f290 * -0x44d4a58069262791 ^ uRam000000018332f248) + uRam000000018332f1e8;
  uRam000000018332f008 = uRam000000018332f290 ^ uRam000000018332f248;
  uRam000000018332f018 = 0x41f;
  uVar6 = (~uRam000000018332f278 + 0x100000000) *
          ((uRam000000018332f2a8 ^ 0x7bde5a7e) +
          (ulonglong)((uint)uRam000000018332f2a8 & 0x7bde5a7e) * 2);
  uVar6 = (uVar6 | uRam000000018332ef10) + (uVar6 & uRam000000018332ef10);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018332f2b8 =
       func_0x00018cb54470((uVar6 | 0x8421a581) + (ulonglong)((uint)uVar6 & 0x8421a581));
  uVar6 = uRam000000018332f2b8 >> 1 | uRam000000018332f2b8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018332f2b8;
  uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar8;
  uRam000000018332f240 = (uRam000000018332f240 ^ uVar8) + 0x386a4 ^ 0xc6a0b9dbade99586;
  uRam000000018332f078 = (uRam000000018332f078 * -0x2f6aab943e1b4257 ^ uRam000000018332f240) + uVar8
  ;
  uRam000000018332efb0 = uRam000000018332f078 ^ uRam000000018332f240;
  uRam000000018332f048 = 0x386a4;
  uVar6 = (uRam000000018332f2f8 ^ 0x8422273a) + uRam000000018332f1c0 + 0x8422273a;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018332f2f8 ^ 0x8422273a;
  uVar8 = ((uRam000000018332f1c0 + uRam000000018332f2f8) * 0x2000 |
          uRam000000018332f1c0 + uRam000000018332f2f8 >> 0x33) ^ uRam000000018332f1c0;
  lRam000000018332f0f8 =
       func_0x00018cb54470((uVar8 << 0x1d | uVar8 >> 0x23) - uRam000000018332f2f8 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018332f1c0 + 0x8422273a));
  uVar6 = lRam000000018332f0f8 * -0x299c00e8bda5defd & 0x1ffffffffffff;
  uRam000000018332f190 = uRam000000018332f268 ^ uVar6 ^ 0x41f;
  uRam000000018332f1d0 = (uRam000000018332f1d0 ^ uVar6) + 0x41f ^ 0x31cf58ce8b838157;
  uRam000000018332f0e8 = (uRam000000018332f0e8 * -0x2339c82744210b0f ^ uRam000000018332f1d0) + uVar6
  ;
  uRam000000018332ef60 = uRam000000018332f0e8 ^ uRam000000018332f1d0;
  uRam000000018332f268 = 0x41f;
  uRam000000018332ef80 = func_0x00018cb54470(uRam000000018332f0a0 + 0xffe1007be5ffddff ^ 0x8e);
  uVar6 = uRam000000018332ef80 ^ 0x41f;
  uRam000000018332f0d8 = uRam000000018332f040 ^ uVar6 ^ 0x41f;
  uRam000000018332efd8 = (uRam000000018332efd8 ^ uVar6) + 0x41f ^ 0x546d6b036e36f68c;
  uRam000000018332f2b8 = (uRam000000018332f2b8 * 0x16352c31ce787ced ^ uRam000000018332efd8) + uVar6;
  uRam000000018332ef38 = uRam000000018332f2b8 ^ uRam000000018332efd8;
  auVar4._8_8_ = _UNK_182017fe8;
  auVar4._0_8_ = uVar2 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _UNK_182017ff0,_UNK_1800170c0);
  uRam000000018332ef48 = 0x41f;
  uVar8 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar8 + uRam000000018332f168;
  if (auVar5._4_4_ < 0) {
    uVar6 = uRam000000018332f250 ^ uVar8;
  }
  uRam000000018332ef78 = func_0x00018cb54470(SUB161(auVar4 ^ _UNK_182017ff0,5) ^ uVar6);
  uVar6 = ~uRam000000018332ef78 & uVar2;
  uVar8 = uVar6 - ((uint)(uVar6 >> 1) & 0x55555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6;
  uRam000000018332ef88 = uVar2 ^ 0x41f;
  uRam000000018332f0a8 = (uRam000000018332f0a8 ^ uVar6) + uRam000000018332ef88 ^ 0x3fd87d9fd7594ef;
  uRam000000018332f000 = (uRam000000018332f000 * -0x3deca59c1600dd75 ^ uRam000000018332f0a8) + uVar6
  ;
  uRam000000018332f298 = uRam000000018332f000 ^ uRam000000018332f0a8;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xe23f,0x27a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cb4b681 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182016130 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eD; awx (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18cb54500, runtime 6ffff4764500) =====

void FUN_18cb54500(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018cb5454b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182018150 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eD; awy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18cb55510, runtime 6ffff4765510) =====

void FUN_18cb55510(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018cb55599 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182018710 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



