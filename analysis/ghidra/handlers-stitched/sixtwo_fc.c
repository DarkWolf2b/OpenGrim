// ===== STITCHED CORPUS: sixtwo.fc =====
// handlers: 7  continuation blocks: 69  unresolved table targets: 0
// tables not in tables.json: ['0x145388', '0x1ad4690', '0x1ad4bf8', '0x1ad4c08', '0x1ad4c18', '0x1ad4c28', '0x1ad4c38', '0x1ad5468', '0x1ad5478', '0x1adbc30', '0x1adbc40', '0x1adbc50', '0x1adbc58', '0x1adbc60', '0x1adbc68', '0x1adbc70', '0x1adbc78', '0x1adbc80', '0x1adbc88', '0x1adbc90']

// ===== Lsixtwo/fc; _728d964e491b8d841b10e24b5de0af47 ()V (handler @ image 18b38b400, runtime 6ffff2f9b400) =====

void FUN_18b38b400(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b38b4e8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181add3b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fc; aHO (Lsixtwo/gH$th;)V (handler @ image 18b345390, runtime 6ffff2f55390) =====

void FUN_18b345390(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x116a1,0x2d6)
      /* POOL[0x116a1,0x2d6]: Z | spCmO | MfnZZ | dbt | aHL | VbNan | ddt | sixtwo/fc | ytwiz | aHP | cJy | (Lnet/minecraft/class_1792;)Ljava/util/List; | yFBwQ | wpZUF | TSAtI | java/util/Collections | shuffle | YBQZr | NtoNy | MgsdP | aHR | ISxRu | wkPDa | XcqMh | field_7791 | aHQ | sixtwo/fd$sO | dripstonePos | trapdoorPos | placeHitResult | secondaryUse | sixtwo/fd | NBgrV | aId | aIe | YKpSx | ghppw | aIW | aHZ | (Lnet/minecraft/class_2338;Lnet/minecraft/class_2680;)Lnet/minecraft/class_243; | dcC | aHX | (Lnet/minecraft/class_3965;)Lsixtwo/fd$sO; | dcB | aIc | (Lnet/minecraft/class_243;)Lnet/minecraft/class_2350; | n */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b34545d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181acf880 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fc; aHP (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18b3525d0, runtime 6ffff2f625d0) =====

undefined8 FUN_18b3525d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/fc; aHQ ([B)Ljava/lang/String; (handler @ image 18b352660, runtime 6ffff2f62660) =====

void FUN_18b352660(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018b352703 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ad42e0 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fc; aHR (IJ)I (handler @ image 18b37ca00, runtime 6ffff2f8ca00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b37ca00(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uRam0000000183295578 = func_0x00018b387650(uRam00000001832956c0 ^ 0xf1ffb7220a9f8bdd);
  uRam0000000183295328 =
       (uRam0000000183295328 ^ uRam0000000183295578 ^ 0xc9a00026aa0820) + 0xf3ddea3ffebfff6a ^
       0x257329fad9b58669;
  uRam00000001832955e0 =
       (uRam00000001832955e0 * -0x6499ceeb994cf533 ^ uRam0000000183295328) +
       (uRam0000000183295578 ^ 0xc9a00026aa0820);
  uRam00000001832955c8 = uRam00000001832955e0 ^ uRam0000000183295328;
  uRam00000001832954a0 = 0xf3ddea3ffebfff6a;
  uVar5 = (~uRam0000000183295670 + 0xf96833609643e583) *
          ((uRam0000000183295688 ^ 0x52a7d2fe65648661) +
          (uRam0000000183295688 & 0x52a7d2fe65648661) * 2);
  uVar5 = (uVar5 | uRam00000001832954c0) + (uVar5 & uRam00000001832954c0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183295368 =
       func_0x00018b387650((uVar5 | 0xabcfe19ef32763e3) + (uVar5 & 0xabcfe19ef32763e3));
  uVar5 = (ulonglong)((uint)(uRam0000000183295368 >> 8) & 0x7fffffff) * -0xbd53e48a4e25700;
  uRam0000000183295318 = (uRam0000000183295318 ^ uVar5) + 0xabcfe19e770540c6 ^ 0xef48d232672f4178;
  uRam0000000183295398 = (uRam0000000183295398 * 0x3f06ac36c0749b57 ^ uRam0000000183295318) + uVar5;
  uRam0000000183295400 = uRam0000000183295398 ^ uRam0000000183295318;
  uRam0000000183295300 = 0xabcfe19e770540c6;
  uRam0000000183295458 = func_0x00018b387650(uRam0000000183295430 ^ 0x2fa8f311d3281fa);
  uVar5 = ((uRam0000000183295458 & 0xffffffff) * (ulonglong)_UNK_181adbc40 +
           (uRam0000000183295458 >> 0x20) * (ulonglong)_UNK_181adbc30 << 0x20) +
          (uRam0000000183295458 & 0xffffffff) * (ulonglong)_UNK_181adbc30 & 0x7fffffffffffffff;
  uRam00000001832954b8 = (uRam00000001832954b8 ^ uVar5) + 0x818e8dfc045ad800 ^ 0xd13b0be746d886a7;
  uRam0000000183295590 = (uRam0000000183295590 * 0x196a831012e39b ^ uRam00000001832954b8) + uVar5;
  uRam0000000183295470 = uRam0000000183295590 ^ uRam00000001832954b8;
  uRam0000000183295320 = 0x818e8dfc045ad800;
  uVar5 = (uRam0000000183295348 ^ _UNK_181adbc50) + uRam0000000183295420 + 0x84222325;
  uVar7 = (uRam0000000183295420 ^ _UNK_181adbc58) + uRam0000000183295348 + 0x3c0818a2b32fe3a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183295348 ^ _UNK_181adbc50;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183295420 ^ _UNK_181adbc58;
  uRam00000001832954f8 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183295348 + 0x3c0818a2b32fe3a0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183295420 + 0x84222325));
  uVar5 = uRam00000001832954f8 - (uRam00000001832954f8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uRam00000001832954f8;
  uRam0000000183295420 = (uRam0000000183295420 ^ uVar5) + 0xc3f7e75d4cd01c60 ^ 0x2f513ff72f71a77a;
  uRam0000000183295650 = (uRam0000000183295650 * 0x1915cab0bd6b87d5 ^ uRam0000000183295420) + uVar5;
  uRam0000000183295588 = uRam0000000183295650 ^ uRam0000000183295420;
  uRam0000000183295358 = 0xc3f7e75d4cd01c60;
  uVar5 = (uRam0000000183295698 ^ _UNK_181adbc60) + uRam0000000183295470 + 0x84225cda;
  uVar7 = (uRam0000000183295470 ^ _UNK_181adbc68) + uRam0000000183295698 + 0x3c0818a2b32fe3a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183295698 ^ _UNK_181adbc60;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183295470 ^ _UNK_181adbc68;
  uRam00000001832956a0 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183295698 + 0x3c0818a2b32fe3a0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183295470 + 0x84225cda));
  uVar5 = (uRam00000001832956a0 ^ 0x3c0818a2b32fffff) & 0x7fffffffffffffff;
  uRam0000000183295408 = uRam0000000183295448 ^ uVar5 ^ 0x3c0818a2b330639f;
  uRam00000001832954d0 = (uRam00000001832954d0 ^ uVar5) + 0x3c0818a2b330639f ^ 0xb1721d23596201a7;
  uRam00000001832954e0 = (uRam00000001832954e0 * -0x3e7c3aa3f49c97a7 ^ uRam00000001832954d0) + uVar5
  ;
  uRam00000001832956b8 = uRam00000001832954e0 ^ uRam00000001832954d0;
  uRam00000001832955c0 = 0x3c0818a2b330639f;
  uRam00000001832955d8 = func_0x00018b387650(uRam0000000183295688 + 0x39b615a023302c55 ^ 0xab);
  uRam00000001832954c8 =
       (uRam00000001832954c8 ^ uRam00000001832955d8 & 0xfffffffffffffffc) + 0x25c12f369b006b00 ^
       0x52f6e5294d314781;
  uRam0000000183295318 =
       (uRam0000000183295318 * -0x767d362618f19929 ^ uRam00000001832954c8) +
       (uRam00000001832955d8 & 0xfffffffffffffffc);
  uRam00000001832956e8 = uRam0000000183295318 ^ uRam00000001832954c8;
  uRam00000001832955e8 = 0x25c12f369b006b00;
  uRam0000000183295670 = func_0x00018b387650(lRam00000001832956a8 + 0xc636f620a550d5c9U ^ 0x11);
  uVar5 = uRam0000000183295670 ^ 0xda3ed0c964ffffff;
  uRam00000001832954f0 = uRam0000000183295370 ^ uVar5 ^ 0xda3ed0c9650014ff;
  uRam0000000183295580 = (uRam0000000183295580 ^ uVar5) + 0xda3ed0c9650014ff ^ 0xc4fd07d174a3b026;
  uRam0000000183295678 =
       (uRam0000000183295678 * 0x116a33700cdbace1 ^ uRam0000000183295580) + uVar5 ^
       uRam0000000183295580;
  uRam00000001832955b0 = 0xda3ed0c9650014ff;
  uVar5 = (~uRam00000001832955c0 + 0xabcfe19e770540c7) *
          ((uRam00000001832956c8 ^ 0xf3ddea3f7a9ddc4f) +
          (uRam00000001832956c8 & 0x73ddea3f7a9ddc4f) * 2);
  uVar5 = (uVar5 | uRam00000001832954e0) + (uVar5 & uRam00000001832954e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183295518 =
       func_0x00018b387650((uVar5 | 0x58120ba10d989c89) + (uVar5 & 0x58120ba10d989c89));
  uVar5 = uRam0000000183295518 ^ 0xabcfe19e770540c6;
  uRam00000001832954b8 = uRam0000000183295428 ^ uVar5 ^ 0x9fadcbde75c54030;
  uRam0000000183295488 = (uRam0000000183295488 ^ uVar5) + 0x9fadcbde75c54030 ^ 0x9ba40b694e7a9a4;
  uRam00000001832954d8 = (uRam00000001832954d8 * 0x79686cd0a8630a57 ^ uRam0000000183295488) + uVar5;
  uRam0000000183295390 = uRam00000001832954d8 ^ uRam0000000183295488;
  uRam00000001832955c0 = 0x9fadcbde75c54030;
  uVar5 = (~uRam00000001832954d8 + 0x9fadcbde75c54031) *
          ((uRam0000000183295658 ^ 0x9fadcbdef1e76315) +
          (uRam0000000183295658 & 0x1fadcbdef1e76315) * 2);
  uVar5 = (uVar5 | uRam0000000183295640) + (uVar5 & uRam0000000183295640);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183295488 =
       func_0x00018b387650((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = uRam0000000183295488 - (uRam0000000183295488 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uRam00000001832953b8 = (uint)bVar1 + (uint)bVar1 ^ uRam0000000183295488;
  uRam00000001832956d0 = uRam00000001832956d0 ^ uRam00000001832953b8 ^ 0x7c6883a4667ee40d;
  uRam00000001832953b0 =
       (uRam00000001832953b0 * 0x382beffc3d8aca47 ^ uRam00000001832956d0) + uRam00000001832953b8;
  uRam00000001832953d8 = uRam00000001832953b0 ^ uRam00000001832956d0;
  uRam00000001832955a8 = 0;
  uVar5 = ((uRam0000000183295398 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183295398 & 0x84225cda) * 2) * -uRam0000000183295698;
  uVar5 = (uVar5 | uRam00000001832955b0) + (uVar5 & uRam00000001832955b0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183295678 =
       func_0x00018b387650((uVar5 | 0x84225cda) + (ulonglong)((uint)uVar5 & 0x84225cda));
  uVar5 = uRam0000000183295678 & 0x7fffffffffffff;
  uRam00000001832955d8 = uRam0000000183295370 ^ uVar5 ^ 0x7fff;
  uRam0000000183295508 = (uRam0000000183295508 ^ uVar5) + 0x7fff ^ 0x955ba2a8bda8b7be;
  uRam0000000183295600 = (uRam0000000183295600 * -0x6036f5408c15aa69 ^ uRam0000000183295508) + uVar5
  ;
  uRam0000000183295548 = uRam0000000183295600 ^ uRam0000000183295508;
  uRam0000000183295618 = 0x7fff;
  uVar5 = ~uRam00000001832954d8 *
          ((uRam0000000183295448 ^ 0xf3ddea3f7a9ddc4f) +
          (uRam0000000183295448 & 0x73ddea3f7a9ddc4f) * 2);
  uVar5 = (uVar5 | uRam00000001832953e8) + (uVar5 & uRam00000001832953e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183295668 =
       func_0x00018b387650((uVar5 | 0xc2215c0856223b0) + (uVar5 & 0xc2215c0856223b0));
  uVar7 = uRam0000000183295668 ^ 0xc2215c001400096;
  uVar5 = uVar7 >> 1 | uVar7;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar7;
  uRam0000000183295418 = (uRam0000000183295418 ^ uVar7) + 0xc2215c001400095 ^ 0x118235119a3eff7b;
  uRam0000000183295560 = (uRam0000000183295560 * -0x4bd6dad61ba9ea05 ^ uRam0000000183295418) + uVar7
  ;
  uRam0000000183295470 = uRam0000000183295560 ^ uRam0000000183295418;
  uRam00000001832956a0 = 0xc2215c001400095;
  uVar5 = (uRam00000001832955a0 ^ 0x84225cda) + uRam0000000183295518 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832955a0 ^ 0x84225cda;
  uVar7 = ((uRam0000000183295518 + uRam00000001832955a0) * 0x2000 |
          uRam0000000183295518 + uRam00000001832955a0 >> 0x33) ^ uRam0000000183295518;
  uRam00000001832955e0 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) - uRam00000001832955a0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183295518 + 0x84225cda));
  uVar5 = uRam00000001832955e0 & 0x7fffffffffffffff;
  uRam00000001832955a8 = uRam0000000183295380 ^ uVar5 ^ 0x7fff;
  uRam00000001832954a8 = (uRam00000001832954a8 ^ uVar5) + 0x7fff ^ 0x356d2f22ec0f1ca4;
  uRam0000000183295520 = (uRam0000000183295520 * 0xd655655883e8ef5 ^ uRam00000001832954a8) + uVar5;
  uRam00000001832956e0 = uRam0000000183295520 ^ uRam00000001832954a8;
  uRam00000001832955f0 = 0x7fff;
  uVar5 = (uRam0000000183295390 ^ 0x84225cda) + uRam0000000183295458 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183295390 ^ 0x84225cda;
  uVar7 = ((uRam0000000183295458 + uRam0000000183295390) * 0x2000 |
          uRam0000000183295458 + uRam0000000183295390 >> 0x33) ^ uRam0000000183295458;
  uRam0000000183295350 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183295390 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183295458 + 0x84225cda));
  uVar5 = (ulonglong)((uint)uRam0000000183295350 & 0x7fff);
  uRam00000001832956a0 = uRam0000000183295530 ^ uVar5 ^ 0x7fff;
  uRam0000000183295588 = (uRam0000000183295588 ^ uVar5) + 0x7fff ^ 0xce6b0c0fad2f24e8;
  uRam00000001832953b8 = (uRam00000001832953b8 * 0x443570cf99e597b7 ^ uRam0000000183295588) + uVar5;
  uRam0000000183295370 = uRam00000001832953b8 ^ uRam0000000183295588;
  uRam0000000183295388 = 0x7fff;
  uVar5 = (~uRam00000001832955e0 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam0000000183295348) +
          ((param_4 ^ 0x84222325) & uRam0000000183295348) * 2);
  uVar5 = (uVar5 | uRam0000000183295668) + (uVar5 & uRam0000000183295668);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183295540 =
       func_0x00018b387650((param_4 ^ 0x84225cda | uVar5) + (uVar5 & (param_4 ^ 0x84225cda)));
  uVar3 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar3;
  uRam0000000183295418 =
       (uRam0000000183295418 ^ uRam0000000183295540 & 0xffffffffffff0000) + uVar7 ^
       0x93d756efe292ede4;
  uRam0000000183295348 =
       (uRam0000000183295348 * -0x4c2b8653cf818b79 ^ uRam0000000183295418) +
       (uRam0000000183295540 & 0xffffffffffff0000);
  uRam00000001832954a8 = uRam0000000183295348 ^ uRam0000000183295418;
  uVar4 = (ulonglong)param_3;
  uVar6 = uVar7 ^ 0x84222325;
  uVar5 = ((uRam00000001832953d8 ^ uVar6) +
          (ulonglong)((uint)uRam00000001832953d8 & (uint)uVar6) * 2) *
          (uVar4 - uRam0000000183295548);
  uVar5 = (uVar5 | uRam0000000183295390) + (uVar5 & uRam0000000183295390);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832953e8 = uVar7;
  uRam0000000183295500 =
       func_0x00018b387650((uVar6 ^ uVar4 | uVar5) +
                           (ulonglong)((uint)(uVar6 ^ uVar4) & (uint)uVar5));
  uVar5 = (uVar7 * uVar4 ^ uRam0000000183295500) * 0x7e5e61f59fc47f03;
  uRam00000001832953d0 = (ulonglong)(uVar3 ^ param_3);
  uRam0000000183295458 = (uRam0000000183295458 ^ uVar5) + uRam00000001832953d0 ^ 0x4208a835b410441c;
  uRam0000000183295448 = (uRam0000000183295448 * -0x5f5d9ae4085fce51 ^ uRam0000000183295458) + uVar5
  ;
  uRam0000000183295528 = uRam0000000183295448 ^ uRam0000000183295458;
  uVar5 = (~uRam0000000183295320 + 0x30848a82) *
          ((uRam0000000183295370 ^ 0xdbcb160d) +
          (ulonglong)((uint)uRam0000000183295370 & 0xdbcb160d) * 2);
  uVar5 = (uVar5 | uRam0000000183295580) + (uVar5 & uRam0000000183295580);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832955b0 =
       func_0x00018b387650((uVar5 | 0xeb4f9c8c) + (ulonglong)((uint)uVar5 & 0xeb4f9c8c));
  uVar5 = (uRam00000001832955b0 >> 0x21) << 0x2b |
          ((uRam00000001832955b0 & 0xffffffff) << 0x1f | uRam00000001832955b0 >> 0x21) >> 0x15;
  uRam00000001832954a8 = (uRam00000001832954a8 ^ uVar5) + 0x7fedbfa9 ^ 0xd88a77e774727cb0;
  uRam0000000183295480 = (uRam0000000183295480 * -0x2b56b915d3f68427 ^ uRam00000001832954a8) + uVar5
  ;
  uRam0000000183295538 = uRam0000000183295480 ^ uRam00000001832954a8;
  uRam0000000183295578 = uRam0000000183295620 ^ 0x7fedbfa9;
  uRam00000001832954b0 = 0x7fedbfa9;
  uVar5 = (uRam00000001832953a8 ^ _UNK_181adbc70) + uRam0000000183295440 + 0x84220135;
  uVar7 = (uRam0000000183295440 ^ _UNK_181adbc78) + uRam00000001832953a8 + 0xc89e3280;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832953a8 ^ _UNK_181adbc70;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183295440 ^ _UNK_181adbc78;
  uRam00000001832954d8 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832953a8 + 0xc89e3280) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183295440 + 0x84220135));
  uVar5 = uRam00000001832954d8 << 0x18 | uRam00000001832954d8 >> 0x28;
  uRam00000001832955d0 = uRam0000000183295350 ^ uVar5 ^ 0xc89e5490;
  uRam0000000183295658 = (uRam0000000183295658 ^ uVar5) + 0xc89e5490 ^ 0x5d589c85a6f4de92;
  uRam0000000183295450 = (uRam0000000183295450 * -0x1dfc2b425b7d333d ^ uRam0000000183295658) + uVar5
  ;
  uRam0000000183295350 = uRam0000000183295450 ^ uRam0000000183295658;
  uRam0000000183295490 = 0xc89e5490;
  uVar5 = (uRam00000001832953d8 ^ _UNK_181adbc80) + uRam0000000183295340 + 0x4cbc77b5;
  uVar7 = (uRam0000000183295340 ^ _UNK_181adbc88) + uRam00000001832953d8 + 0x3761cd80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam00000001832953d8 ^ _UNK_181adbc80;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183295340 ^ _UNK_181adbc88;
  uRam0000000183295658 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001832953d8 + 0x3761cd80) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183295340 + 0x4cbc77b5));
  uVar5 = uRam0000000183295658 - (uRam0000000183295658 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = uRam0000000183295658 ^ 0xc89e5490 ^
          (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6;
  uRam0000000183295470 = uRam0000000183295500 ^ uVar5 ^ 0x100002210;
  uRam0000000183295568 = (uRam0000000183295568 ^ uVar5) + 0x100002210 ^ 0xad92f4472a3dcbce;
  uRam0000000183295368 = (uRam0000000183295368 * 0x6d10d2e1fa3b72f5 ^ uRam0000000183295568) + uVar5;
  uRam00000001832956c8 = uRam0000000183295368 ^ uRam0000000183295568;
  uRam0000000183295330 = 0x2210;
  uRam0000000183295368 = func_0x00018b387650(uRam0000000183295410 + 0x6dfff47700a5ff ^ 0xf3);
  uVar3 = ~(uint)uRam0000000183295368 & 0x2210;
  uVar5 = (ulonglong)uVar3 - (ulonglong)(~(uint)uRam0000000183295368 >> 1 & 0x1100);
  uVar5 = (uVar5 & 0x3333333333333310) + (uVar5 >> 2 & 0x3333333333333300);
  uVar5 = (ulonglong)
          ((uint)((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f01) * 0x101010101010101 >> 0x38) << 7) ^
          uVar3);
  uRam0000000183295358 = uRam0000000183295328 ^ uVar5 ^ 0x90dcc1b2;
  uRam0000000183295628 = (uRam0000000183295628 ^ uVar5) + 0x90dcc1b2 ^ 0x19ee63e0c75bc02b;
  uRam0000000183295680 = (uRam0000000183295680 * 0x73f51cdaaadcb6f1 ^ uRam0000000183295628) + uVar5;
  uRam0000000183295698 = uRam0000000183295680 ^ uRam0000000183295628;
  uRam00000001832953c0 = 0x90dcc1b2;
  uRam0000000183295550 = func_0x00018b387650(uRam0000000183295478 ^ 0x81ffc8370052ed);
  uVar5 = uRam0000000183295550 ^ 0xffffe1fe;
  uRam0000000183295678 = uRam0000000183295540 ^ uVar5 ^ 0x100002210;
  uRam0000000183295508 = (uRam0000000183295508 ^ uVar5) + 0x100002210 ^ 0xffc345d1f9ef61f4;
  uRam0000000183295660 = (uRam0000000183295660 * -0x66653043b7eb4e63 ^ uRam0000000183295508) + uVar5
  ;
  uRam00000001832955e0 = uRam0000000183295660 ^ uRam0000000183295508;
  uRam00000001832954a0 = 0x2210;
  uVar5 = (~uRam00000001832953c8 + 0xab063011) *
          ((uRam00000001832956a0 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001832956a0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183295538) + (uVar5 & uRam0000000183295538);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam00000001832956c8 =
       func_0x00018b387650((uVar5 | 0x2f241335) + (ulonglong)((uint)uVar5 & 0x2f241335));
  uRam0000000183295580 =
       (uRam0000000183295580 ^ uRam00000001832956c8 & 0xffffffff80000000) - 0xab063010 ^
       0xb9263109ac728564;
  uRam00000001832954f0 =
       (uRam00000001832954f0 * -0x1a5eec3849a3709f ^ uRam0000000183295580) +
       (uRam00000001832956c8 & 0xffffffff80000000);
  uRam0000000183295360 = uRam00000001832954f0 ^ uRam0000000183295580;
  uRam0000000183295510 = 0x54f9cff0;
  uRam0000000183295570 = func_0x00018b387650(uRam00000001832955a0 + 0xffd0ffdf1cffdbff ^ 0x1c);
  uVar5 = (uRam0000000183295570 ^ 0xab063210) & 0x7fffffffffffffff;
  uRam00000001832954b0 = uRam0000000183295520 ^ uVar5 ^ 0xab065220;
  uRam0000000183295558 = (uRam0000000183295558 ^ uVar5) + 0xab065220 ^ 0xf90c2ca0b0ad4b3c;
  uRam0000000183295418 = (uRam0000000183295418 * -0x507fc3c38164b9c1 ^ uRam0000000183295558) + uVar5
  ;
  uRam0000000183295678 = uRam0000000183295418 ^ uRam0000000183295558;
  uRam00000001832956b8 = 0xab065220;
  uVar5 = (uRam0000000183295378 ^ _UNK_181adbc90) + uRam00000001832955a0 + 0xfbcf9c8c;
  uVar7 = (uRam00000001832955a0 ^ _UNK_181adbc98) + uRam0000000183295378 + 0xb4d13afb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183295378 ^ _UNK_181adbc90;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832955a0 ^ _UNK_181adbc98;
  uRam0000000183295518 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183295378 + 0xb4d13afb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832955a0 + 0xfbcf9c8c));
  uVar7 = uRam0000000183295518 ^ 0x80100052;
  uVar5 = uVar7 >> 1 | uVar7;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  uRam00000001832955b0 = (uRam00000001832955b0 ^ uVar7) + 0xcb3c8552 ^ 0x39882a1960bf228f;
  uRam00000001832956e0 = (uRam00000001832956e0 * -0x12804e20527dd4a7 ^ uRam00000001832955b0) + uVar7
  ;
  uRam0000000183295580 = uRam00000001832956e0 ^ uRam00000001832955b0;
  uRam0000000183295648 = 0xcb3c8552;
  uRam0000000183295308 = func_0x00018b387650(uRam00000001832956b0 ^ 0x5dffba93001d29);
  uVar5 = (uRam0000000183295308 ^ 0x7feda000) & 0xffffffffffffe000;
  uRam0000000183295318 = (uRam0000000183295318 ^ uVar5) + 0x34c13aa9 ^ 0x1f4e1a736c5e42a4;
  uRam0000000183295528 = (uRam0000000183295528 * -0x30d8f4105821f197 ^ uRam0000000183295318) + uVar5
  ;
  uRam0000000183295498 = uRam0000000183295528 ^ uRam0000000183295318;
  uRam00000001832955b8 = 0x34c13aa9;
  uRam0000000183295310 = func_0x00018b387650(uRam0000000183295538 ^ 0x1cff7c25001dc0);
  uRam0000000183295310 = uRam0000000183295310 & 0x7fffffffffffffff;
  uRam0000000183295610 = uRam0000000183295610 ^ uRam0000000183295310 ^ 0x2c3aaf21ded1e1ec;
  uRam0000000183295580 =
       (uRam0000000183295580 * 0x2e2935e2a9b26899 ^ uRam0000000183295610) + uRam0000000183295310;
  uRam00000001832956b0 = uRam0000000183295580 ^ uRam0000000183295610;
  uRam0000000183295508 = 0;
  uVar5 = (uRam0000000183295570 ^ 0x84220135) + uRam00000001832956c8 + 0x84220135;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183295570 ^ 0x84220135;
  uVar7 = ((uRam00000001832956c8 + uRam0000000183295570) * 0x2000 |
          uRam00000001832956c8 + uRam0000000183295570 >> 0x33) ^ uRam00000001832956c8;
  uRam0000000183295508 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183295570 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam00000001832956c8 + 0x84220135));
  uVar5 = (uRam0000000183295508 ^ 0x2210) * 0x42d51b9b30000000 |
          (uRam0000000183295508 ^ 0x2210) * -0xfa1451bd2ae464d >> 0x24;
  uRam0000000183295518 = uRam00000001832955e8 ^ uVar5 ^ 0x2210;
  uRam0000000183295610 = (uRam0000000183295610 ^ uVar5) + 0x2210 ^ 0x3f4a07ab03981332;
  uRam0000000183295550 = (uRam0000000183295550 * 0x19c02ba560848493 ^ uRam0000000183295610) + uVar5;
  uRam00000001832953d0 = uRam0000000183295550 ^ uRam0000000183295610;
  uRam00000001832954d8 = 0x2210;
  uRam0000000183295680 = func_0x00018b387650(uRam00000001832953b8 + 0xc4000b5a0044ff ^ 0xb4);
  uRam0000000183295438 = uRam0000000183295438 ^ uRam0000000183295680 ^ 0x7ec857af0beca520;
  uRam0000000183295430 =
       (uRam0000000183295430 * 0x24105a86240c4f3b ^ uRam0000000183295438) + uRam0000000183295680;
  uRam00000001832954b8 = uRam0000000183295430 ^ uRam0000000183295438;
  uRam00000001832955a0 = 0;
  uRam0000000183295448 = func_0x00018b387650(uRam00000001832953b0 ^ 0xfffeff83d2ffe17e);
  uRam0000000183295588 = uRam00000001832955a8 ^ uRam0000000183295448 ^ 0x2210;
  uRam0000000183295530 = (uRam0000000183295530 ^ uRam0000000183295448) + 0x2210 ^ 0x59069b10c203c357
  ;
  uRam00000001832954e0 =
       (uRam00000001832954e0 * -0x768c1d6914777fc3 ^ uRam0000000183295530) + uRam0000000183295448;
  uRam00000001832956c8 = uRam00000001832954e0 ^ uRam0000000183295530;
  uRam0000000183295320 = 0x2210;
  uVar5 = (~uRam0000000183295388 + 0x5fe93529) *
          ((uRam00000001832954f8 ^ 0xdbcb160d) +
          (ulonglong)((uint)uRam00000001832954f8 & 0xdbcb160d) * 2);
  uVar5 = (uVar5 | uRam0000000183295490) + (uVar5 & uRam0000000183295490);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018b387650((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar5;
  uRam0000000183295650 = uRam0000000183295650 ^ uVar5 ^ 0xc905c074c26b9884;
  uRam00000001832953b8 = (uRam00000001832953b8 * -0x67cb99187ce55b9b ^ uRam0000000183295650) + uVar5
  ;
  uRam0000000183295410 = uRam00000001832953b8 ^ uRam0000000183295650;
  uRam00000001832956b8 = 0;
  uVar5 = (uRam0000000183295668 ^ 0x84220135) + uRam0000000183295360 + 0x84220135;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183295668 ^ 0x84220135;
  uVar7 = ((uRam0000000183295360 + uRam0000000183295668) * 0x2000 |
          uRam0000000183295360 + uRam0000000183295668 >> 0x33) ^ uRam0000000183295360;
  uRam0000000183295388 =
       func_0x00018b387650((uVar7 << 0x1d | uVar7 >> 0x23) - uRam0000000183295668 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183295360 + 0x84220135));
  uVar5 = uRam0000000183295388 - (uRam0000000183295388 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183295388;
  uVar5 = uVar7 >> 1 | uVar7;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar7;
  uRam00000001832954f0 = uRam00000001832956f0 ^ uVar7 ^ 0x2210;
  uRam0000000183295580 = (uRam0000000183295580 ^ uVar7) + 0x2210 ^ 0xa2036c10314fc085;
  uRam0000000183295468 = (uRam0000000183295468 * 0x40c614f933d03285 ^ uRam0000000183295580) + uVar7;
  uRam0000000183295650 = uRam0000000183295468 ^ uRam0000000183295580;
  uRam0000000183295590 = 0x2210;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x116a1,0x2d6)
      /* POOL[0x116a1,0x2d6]: Z | spCmO | MfnZZ | dbt | aHL | VbNan | ddt | sixtwo/fc | ytwiz | aHP | cJy | (Lnet/minecraft/class_1792;)Ljava/util/List; | yFBwQ | wpZUF | TSAtI | java/util/Collections | shuffle | YBQZr | NtoNy | MgsdP | aHR | ISxRu | wkPDa | XcqMh | field_7791 | aHQ | sixtwo/fd$sO | dripstonePos | trapdoorPos | placeHitResult | secondaryUse | sixtwo/fd | NBgrV | aId | aIe | YKpSx | ghppw | aIW | aHZ | (Lnet/minecraft/class_2338;Lnet/minecraft/class_2680;)Lnet/minecraft/class_243; | dcC | aHX | (Lnet/minecraft/class_3965;)Lsixtwo/fd$sO; | dcB | aIc | (Lnet/minecraft/class_243;)Lnet/minecraft/class_2350; | n */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b37e8e8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ad9dd0 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/fc; aHS (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18b3876e0, runtime 6ffff2f976e0) =====

void FUN_18b3876e0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018b38772b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181adbde0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/fc; aHT (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18b3886f0, runtime 6ffff2f986f0) =====

void FUN_18b3886f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018b388779 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181adc3a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xb345460 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b345460(void)

{
  FUN_190ddce00();
  (*_DAT_181ad3198)();
  return;
}


// ----- block @ rva 0xb34997b -----

void FUN_18b34997b(void)

{
  return;
}


// ----- block @ rva 0xb349c80 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b349c80(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb34cef7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b34cef7(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb34d2dc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b34d2dc(void)

{
  FUN_190dd72e0();
  (*_DAT_181ad1ed8)();
  return;
}


// ----- block @ rva 0xb34ee1b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b34ee1b(void)

{
  (*_DAT_181ad24c8)();
  return;
}


// ----- block @ rva 0xb34fc56 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b34fc56(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181ad3168)();
  return;
}


// ----- block @ rva 0xb351a93 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b351a93(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(unaff_RBP + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb351efe -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b351efe(void)

{
  FUN_190de3220();
  (*_DAT_181ad1578)();
  return;
}


// ----- block @ rva 0xb3520ae -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3520ae(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181ad24b8)();
  return;
}


// ----- block @ rva 0xb3522f6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3522f6(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(unaff_RBP + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb352435 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b352435(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->Throw /*0x68*/))();
  (*_DAT_181ad2178)();
  return;
}


// ----- block @ rva 0xb352706 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b35273c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b352706(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb352759 -----

void FUN_18b352759(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x80) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x88) = *(undefined8 *)(unaff_RBP + 0x80);
  *(longlong **)(unaff_RBP + 0xb0) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x00018b35279f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ad4690 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xb3556e0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3556e0(void)

{
  byte bVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong uVar2;
  longlong unaff_R13;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(uint *)(unaff_RBP + 0x70) = unaff_EDI;
  *(char *)(unaff_RBP + 0x60) = (char)unaff_EDI + (char)((ulonglong)unaff_EDI / 10) * -10;
  uVar5 = (_DAT_1832949e8 ^ _DAT_181ad5460) + _DAT_183294798 + 0x842223dd;
  uVar6 = (_DAT_183294798 ^ _UNK_181ad5468) + _DAT_1832949e8 + 0x62;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832949e8 ^ _DAT_181ad5460;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183294798 ^ _UNK_181ad5468;
  _DAT_183294410 =
       func_0x00018b37c970((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832949e8 + 0x62) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183294798 + 0x842223dd));
  uVar5 = (_DAT_183294410 ^ 0xfa) * 0xbdb3b1818410000 |
          (_DAT_183294410 ^ 0xfa) * -0xb40f424c4e7e7bf >> 0x30;
  _DAT_183294af8 = (_DAT_183294af8 ^ uVar5) + 0xfa ^ 0xce40300f6a3b2842;
  _DAT_183294a90 = (_DAT_183294a90 * -0x1c437c1b6fe86b11 ^ _DAT_183294af8) + uVar5;
  _DAT_183294690 = _DAT_183294a90 ^ _DAT_183294af8;
  _DAT_1832947b8 = 0xfa;
  _DAT_183294578 = func_0x00018b37c970(_DAT_183294798 + 0x1cff7b32ffddff ^ 0x66);
  uVar6 = (ulonglong)((uint)_DAT_183294578 ^ 0x2400) << 0x2f | _DAT_183294578 >> 0x11;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 2 ^ uVar6;
  _DAT_183294330 = _DAT_183294818 ^ uVar6 ^ 0xf0;
  _DAT_183294af8 = (_DAT_183294af8 ^ uVar6) + 0xf0 ^ 0x7527a53043536ded;
  _DAT_1832943a8 = (_DAT_1832943a8 * 0x4ed576a4d3f7c401 ^ _DAT_183294af8) + uVar6;
  _DAT_183294388 = _DAT_1832943a8 ^ _DAT_183294af8;
  _DAT_1832943e0 = 0xf0;
  uVar5 = (_DAT_183294960 ^ _DAT_1807246b0) + _DAT_183294818 + 0x84222325;
  uVar6 = (_DAT_183294818 ^ _UNK_1807246b8) + _DAT_183294960 + 0x11;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183294960 ^ _DAT_1807246b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183294818 ^ _UNK_1807246b8;
  _DAT_183294310 =
       func_0x00018b37c970((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183294960 + 0x11) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183294818 + 0x84222325));
  uVar5 = _DAT_183294310 << 5 | _DAT_183294310 >> 0x3b;
  _DAT_183294518 = (_DAT_183294518 ^ uVar5) - 0x11 ^ 0xbf96c44b9ae5b798;
  _DAT_1832946c0 = (_DAT_1832946c0 * -0x17d19be55e502c71 ^ _DAT_183294518) + uVar5;
  _DAT_183294710 = _DAT_1832946c0 ^ _DAT_183294518;
  _DAT_1832946a0 = 0xef;
  _DAT_183294948 = func_0x00018b37c970(_DAT_183294780 ^ 0x1f007c03ffddd3);
  uVar5 = (_DAT_183294948 ^ 0x330) & 0x7fffffffffffffff;
  _DAT_183294a68 = _DAT_1832946e8 ^ uVar5 ^ 0x41;
  _DAT_183294350 = (_DAT_183294350 ^ uVar5) + 0x41 ^ 0x7d53dd28dc0218ae;
  _DAT_1832944d0 = (_DAT_1832944d0 * 0x6eb6e4dda630e987 ^ _DAT_183294350) + uVar5;
  _DAT_183294a28 = _DAT_1832944d0 ^ _DAT_183294350;
  _DAT_1832948e0 = 0x41;
  _DAT_1832944f8 = func_0x00018b37c970(_DAT_1832943d0 + 0xffdeff7b7b0021ff ^ 0x3f);
  uVar5 = ((_DAT_1832944f8 ^ 0xef) << 0x1a | _DAT_1832944f8 >> 0x26) * 0xa52b81498aea1db;
  _DAT_1832948e0 = _DAT_1832944e8 ^ uVar5 ^ 0x130;
  _DAT_183294838 = (_DAT_183294838 ^ uVar5) + 0x130 ^ 0xa1f3ecc53c52fb66;
  _DAT_1832943f0 = (_DAT_1832943f0 * 0x5214f526532e9fa7 ^ _DAT_183294838) + uVar5;
  _DAT_1832943d0 = _DAT_1832943f0 ^ _DAT_183294838;
  _DAT_183294a40 = 0x30;
  uVar5 = (~_DAT_1832947c0 + 0xd1) *
          ((_DAT_183294a38 ^ 0x84222325) + (ulonglong)((uint)_DAT_183294a38 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_1832947e0) + (uVar5 & _DAT_1832947e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183294910 = func_0x00018b37c970((uVar5 | 0x842223f5) + (ulonglong)((uint)uVar5 & 0x842223f5))
  ;
  _DAT_183294350 = _DAT_183294410 * 0x5b9724962dc7c177;
  _DAT_183294990 = _DAT_183294990 - 0xd0 ^ 0xf0dba5c3b77a241f;
  _DAT_183294410 = _DAT_183294350 ^ _DAT_183294990;
  _DAT_1832947c0 = 0x30;
  _DAT_1832946e0 = func_0x00018b37c970(_DAT_183294888 ^ 0x21008414ffe17b);
  uVar5 = _DAT_1832946e0 * -0x63f3136f76ddb3c3 & 0xffffffffff;
  _DAT_183294630 = _DAT_1832945c8 ^ uVar5 ^ 0x30;
  _DAT_183294750 = (_DAT_183294750 ^ uVar5) + 0x30 ^ 0x799d8fce27283795;
  _DAT_183294580 = (_DAT_183294580 * 0x4f8da1cb3cbd6095 ^ _DAT_183294750) + uVar5;
  _DAT_183294548 = _DAT_183294580 ^ _DAT_183294750;
  _DAT_1832947e0 = 0x30;
  uVar5 = (~_DAT_183294858 + 99) *
          ((_DAT_183294970 ^ 0x842223df) + (ulonglong)((uint)_DAT_183294970 & 0x842223df) * 2);
  uVar5 = (uVar5 | _DAT_183294720) + (uVar5 & _DAT_183294720);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832946c8 = func_0x00018b37c970((uVar5 | 0x842223bd) + (ulonglong)((uint)uVar5 & 0x842223bd))
  ;
  uVar5 = (_DAT_1832946c8 ^ 0xfa) * 0x41c7d3f330131c77;
  _DAT_183294838 = _DAT_183294900 ^ uVar5 ^ 0x15c;
  _DAT_183294490 = (_DAT_183294490 ^ uVar5) + 0x15c ^ 0x9d56656988ebc591;
  _DAT_183294550 = (_DAT_183294550 * -0x7797cd45ca4f1569 ^ _DAT_183294490) + uVar5;
  _DAT_183294508 = _DAT_183294550 ^ _DAT_183294490;
  _DAT_1832947a8 = _DAT_183294580 ^ 0x15c;
  _DAT_1832945c8 = 0x5c;
  uVar5 = (~_DAT_183294678 + 99) *
          ((_DAT_183294528 ^ 0x842223df) + (ulonglong)((uint)_DAT_183294528 & 0x842223df) * 2);
  uVar5 = (uVar5 | _DAT_183294780) + (uVar5 & _DAT_183294780);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832945b8 = func_0x00018b37c970((uVar5 | 0x842223bd) + (ulonglong)((uint)uVar5 & 0x842223bd))
  ;
  _DAT_1832946f8 =
       (_DAT_1832946f8 ^ _DAT_1832945b8 * 0x471e62ea70b3e811) + 0x98 ^ 0x5b60177b9ce7b908;
  _DAT_183294310 =
       (_DAT_183294310 * 0x373091ff1cfa08db ^ _DAT_1832946f8) + _DAT_1832945b8 * 0x471e62ea70b3e811;
  _DAT_183294840 = _DAT_183294310 ^ _DAT_1832946f8;
  _DAT_1832944d8 = 0x98;
  _DAT_183294ac8 = func_0x00018b37c970(_DAT_1832948b0 ^ 0xffe2ff7b55002113);
  uVar5 = _DAT_183294ac8 << 0x1b | _DAT_183294ac8 >> 0x25;
  _DAT_183294a40 = (_DAT_183294a40 ^ uVar5) + 0x62 ^ 0xf6d4e5bcb8b51078;
  _DAT_1832947a8 = (_DAT_1832947a8 * 0x657fcdba4bbebb81 ^ _DAT_183294a40) + uVar5;
  _DAT_183294530 = _DAT_1832947a8 ^ _DAT_183294a40;
  _DAT_183294668 = 0x62;
  uVar5 = (_DAT_183294ab0 ^ _DAT_181ad5470) + _DAT_183294578 + 0x842223bd;
  uVar6 = (_DAT_183294578 ^ _UNK_181ad5478) + _DAT_183294ab0 + 0xc4;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183294ab0 ^ _DAT_181ad5470;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183294578 ^ _UNK_181ad5478;
  _DAT_183294960 =
       func_0x00018b37c970((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183294ab0 + 0xc4) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183294578 + 0x842223bd));
  _DAT_183294640 = _DAT_1832947c8 ^ _DAT_183294608 ^ 0x15c;
  _DAT_183294670 = (_DAT_183294670 ^ _DAT_183294608) + 0x15c ^ 0x2678957cb402495b;
  _DAT_1832947e0 = (_DAT_1832947e0 * -0x3d3c32b7c21e4421 ^ _DAT_183294670) + _DAT_183294608;
  _DAT_183294898 = _DAT_1832947e0 ^ _DAT_183294670;
  _DAT_183294838 = 0x5c;
  _DAT_183294a68 = func_0x00018b37c970(_DAT_183294aa8 ^ 0x230083e500217e);
  _DAT_183294558 = (_DAT_183294a68 ^ 0x2110) & 0x7fffffffffffffff;
  _DAT_183294860 = _DAT_183294860 ^ _DAT_183294558 ^ 0x464e06318c44b903;
  _DAT_183294310 = (_DAT_183294310 * 0x5390510e8f21ee05 ^ _DAT_183294860) + _DAT_183294558;
  _DAT_183294360 = _DAT_183294310 ^ _DAT_183294860;
  _DAT_183294928 = 0;
  _DAT_183294808 = func_0x00018b37c970(_DAT_1832947e8 ^ 0xffe2ff840d002197);
  uVar5 = (_DAT_183294808 & 0xfffffffffe000000) - (_DAT_183294808 >> 1 & 0x5555555555000000);
  uVar5 = (uVar5 & 0x3333333333000000) + (uVar5 >> 2 & 0x3333333333000000);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f000000) * unaff_R13 >> 0x38) << 7 |
          _DAT_183294808 & 0x7ffffffffe000000;
  _DAT_183294650 = _DAT_183294710 ^ uVar5 ^ 0x30;
  _DAT_1832945f0 = (_DAT_1832945f0 ^ uVar5) + 0x30 ^ 0x18338fbc582fb033;
  _DAT_1832945c8 = (_DAT_1832945c8 * 0x37d57b567fa17261 ^ _DAT_1832945f0) + uVar5;
  _DAT_183294568 = _DAT_1832945c8 ^ _DAT_1832945f0;
  _DAT_183294440 = 0x30;
  _DAT_183294688 = func_0x00018b37c970(_DAT_183294928 + 0xffe0ff7c200021ffU ^ 0x94);
  _DAT_183294750 = (_DAT_183294750 ^ _DAT_183294688 ^ 5) + 5 ^ 0xfc1d3a81447763b2;
  _DAT_183294438 = (_DAT_183294438 * -0x1d29ae69ff907181 ^ _DAT_183294750) + (_DAT_183294688 ^ 5);
  _DAT_1832947e0 = _DAT_183294438 ^ _DAT_183294750;
  _DAT_1832949e8 = 5;
  uVar5 = (~_DAT_1832945f0 + 6) *
          ((_DAT_183294a70 ^ 0x842223df) + (ulonglong)((uint)_DAT_183294a70 & 0x842223df) * 2);
  uVar5 = (uVar5 | _DAT_183294940) + (uVar5 & _DAT_183294940);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183294550 = func_0x00018b37c970((uVar5 | 0x842223da) + (ulonglong)((uint)uVar5 & 0x842223da))
  ;
  uVar5 = _DAT_183294550 >> 1 | _DAT_183294550;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 0x40 ^
          _DAT_183294550;
  _DAT_1832949d8 = _DAT_1832949d8 ^ uVar5 ^ 0xd52390ac9bf18464;
  _DAT_1832948f0 = (_DAT_1832948f0 * 0x4838e1d4a13aa305 ^ _DAT_1832949d8) + uVar5;
  _DAT_183294af0 = _DAT_1832948f0 ^ _DAT_1832949d8;
  _DAT_183294770 = 0;
  uVar5 = (_DAT_183294570 ^ 0x84222315) + _DAT_183294650 + 0x84222315;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183294570 ^ 0x84222315;
  uVar6 = ((_DAT_183294650 + _DAT_183294570) * 0x2000 | _DAT_183294650 + _DAT_183294570 >> 0x33) ^
          _DAT_183294650;
  _DAT_183294598 =
       func_0x00018b37c970((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183294570 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183294650 + 0x84222315));
  uVar5 = _DAT_183294598 << 0x24 | _DAT_183294598 >> 0x1c;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uVar5;
  _DAT_1832948d0 = _DAT_1832948b8 ^ uVar5 ^ 0x30;
  _DAT_1832947d0 = (_DAT_1832947d0 ^ uVar5) + 0x30 ^ 0x19ba58ddb3f1d4ad;
  _DAT_183294558 = (_DAT_183294558 * 0x78e9400f4211edd ^ _DAT_1832947d0) + uVar5;
  _DAT_1832944c0 = _DAT_183294558 ^ _DAT_1832947d0;
  _DAT_1832945e8 = 0x30;
  uVar5 = (~_DAT_1832943a8 + 0xf9) *
          ((_DAT_1832949a8 ^ 0x842223dd) + (ulonglong)((uint)_DAT_1832949a8 & 0x842223dd) * 2);
  uVar5 = (uVar5 | _DAT_183294390) + (uVar5 & _DAT_183294390);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183294a28 = func_0x00018b37c970((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325))
  ;
  _DAT_183294440 = _DAT_183294440 ^ _DAT_183294a28 ^ 0xe5dd1dec71cecce4;
  _DAT_183294978 = (_DAT_183294978 * -0x2368762bfc2ed303 ^ _DAT_183294440) + _DAT_183294a28;
  _DAT_1832947a0 = _DAT_183294978 ^ _DAT_183294440;
  _DAT_183294810 = 0;
  uVar5 = ((_DAT_1832945f0 ^ 0x84222315) + (ulonglong)((uint)_DAT_1832945f0 & 0x84222315) * 2) *
          -_DAT_1832949b8;
  uVar5 = (uVar5 | _DAT_183294a90) + (uVar5 & _DAT_183294a90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183294318 = func_0x00018b37c970((uVar5 | 0x84222315) + (ulonglong)((uint)uVar5 & 0x84222315))
  ;
  uVar5 = (ulonglong)(~(uint)_DAT_183294318 & 0x30) ^ 0x30;
  _DAT_183294a88 = _DAT_183294920 ^ uVar5 ^ 0x30;
  _DAT_183294988 = (_DAT_183294988 ^ uVar5) + 0x30 ^ 0x2fca2159a8971c4b;
  _DAT_183294480 = (_DAT_183294480 * 0x5c27090a85a3e85b ^ _DAT_183294988) + uVar5;
  _DAT_1832945e0 = _DAT_183294480 ^ _DAT_183294988;
  uVar6 = (ulonglong)*(byte *)(unaff_RBP + 0x60);
  auVar3._8_8_ = _UNK_180145388;
  auVar3._0_8_ = uVar6 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _DAT_181ad5480,_DAT_1800170c0);
  _DAT_183294508 = 0x30;
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar5 = uVar2 + _DAT_1832943b0;
  if (auVar4._4_4_ < 0) {
    uVar5 = _DAT_183294a68 ^ uVar2;
  }
  _DAT_1832946b0 = func_0x00018b37c970(SUB161(auVar3 ^ _DAT_181ad5480,5) ^ uVar5);
  _DAT_183294590 = uVar6 | 0x30;
  uVar6 = ~(ulonglong)((uint)_DAT_183294590 ^ (uint)_DAT_1832946b0) & uVar6;
  _DAT_1832949b0 = (_DAT_1832949b0 ^ uVar6) + _DAT_183294590 ^ 0xb8f44fd68ed24efb;
  _DAT_1832947d8 = (_DAT_1832947d8 * -0x3fe22aa0c141c533 ^ _DAT_1832949b0) + uVar6;
  _DAT_183294858 = _DAT_1832947d8 ^ _DAT_1832949b0;
  *(char *)(in_RAX + -1) = (char)_DAT_183294590;
  switch(unaff_EDI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb35692a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b356e4b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b35692a(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong unaff_RBX;
  longlong lVar15;
  longlong unaff_RBP;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong unaff_R13;
  uint uVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar21;
  undefined1 auVar22 [16];
  uint uVar23;
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar27;
  undefined1 auVar26 [16];
  ulonglong uVar28;
  uint uVar29;
  
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  uVar1 = unaff_RBP - 0x3b;
  auVar18._8_8_ = unaff_RBX;
  auVar18._0_8_ = uVar1 ^ 0x84222325;
  plVar2 = *(longlong **)(unaff_RBP + 0xb0);
  auVar19 = pshufb(auVar18 ^ _DAT_181ad5520,_DAT_1800170c0);
  uVar16 = auVar19._8_8_ + auVar19._0_8_;
  uVar17 = uVar16 + _DAT_1832948c0;
  if (auVar19._4_4_ < 0) {
    uVar17 = _DAT_1832943f8 ^ uVar16;
  }
  _DAT_1832946a8 = func_0x00018b37c970(SUB161(auVar18 ^ _DAT_181ad5520,5) ^ uVar17);
  uVar12 = _DAT_181ad5560;
  uVar20 = (uint)(uVar1 >> 0x20);
  auVar24._8_4_ = (int)uVar1;
  auVar24._0_8_ = uVar1;
  auVar24._12_4_ = uVar20;
  uVar27 = (uint)(unaff_RBX >> 0x20);
  auVar19._8_4_ = (int)unaff_RBX;
  auVar19._0_8_ = unaff_RBX;
  auVar19._12_4_ = uVar27;
  auVar22._8_4_ = 0xffffffff;
  auVar22._0_8_ = 0xffffffffffffffff;
  auVar22._12_4_ = 0xffffffff;
  uVar6 = (ulonglong)_DAT_181ad5540;
  uVar17 = (ulonglong)_DAT_181ad5540;
  auVar26._8_4_ = 0xffffffff;
  auVar26._0_8_ = 0xffffffffffffffff;
  auVar26._12_4_ = 0xffffffff;
  uVar16 = (ulonglong)_DAT_181ad5560;
  *(undefined1 (*) [16])(unaff_RBP + 0x70) = auVar24 & auVar19;
  uVar7 = (ulonglong)_DAT_181ad5530;
  uVar8 = (ulonglong)_DAT_181ad5550;
  uVar3 = (ulonglong)_DAT_181ad5530;
  uVar29 = SUB164(auVar24 ^ auVar22,0);
  uVar9 = (ulonglong)_DAT_181ad5570;
  uVar10 = (ulonglong)_DAT_181ad5570;
  uVar4 = (ulonglong)_DAT_181ad5550;
  uVar25 = SUB164(auVar26 ^ auVar19,0);
  uVar5 = (ulonglong)_DAT_181ad5580;
  uVar28 = SUB168(auVar26 ^ auVar19,0);
  uVar11 = (ulonglong)_DAT_181ad5580;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = auVar24;
  uVar13 = (_DAT_1832946a8 & 0xffffffffff) >> 1 | _DAT_1832946a8 & 0xffffffffff;
  uVar13 = uVar13 >> 2 | uVar13;
  uVar13 = uVar13 >> 4 | uVar13;
  uVar14 = uVar13 >> 8 | uVar13;
  uVar13 = uVar13 >> 0x20 | uVar14 >> 0x10 | uVar14;
  uVar13 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar14 = (0x40 - (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * unaff_R13 >> 0x38)) * 8 ^
           _DAT_1832946a8 & 0xffffffffff;
  uVar13 = *(ulonglong *)(unaff_RBP + 0x70);
  uVar21 = SUB164(auVar24 | auVar19,0);
  uVar23 = SUB164(auVar24 ^ auVar19,0);
  _DAT_1832945d0 =
       ((uVar5 * uVar25 + ((uVar28 >> 0x20) * uVar11 + uVar4 * uVar25 << 0x20) +
         uVar29 * uVar10 + ((SUB168(auVar24 ^ auVar22,0) >> 0x20) * uVar9 + uVar3 * uVar29 << 0x20)
        + uVar16 * (unaff_RBX & 0xffffffff) +
          ((ulonglong)uVar27 * (ulonglong)uVar12 + (unaff_RBX & 0xffffffff) * uVar8 << 0x20) +
          uVar17 * (uVar1 & 0xffffffff) + (uVar20 * uVar6 + (uVar1 & 0xffffffff) * uVar7 << 0x20)) -
       ((ulonglong)uVar25 * (_DAT_181ad55f0 & 0xffffffff) +
        ((ulonglong)_DAT_181ad5660 * (ulonglong)uVar25 +
         (uVar28 >> 0x20) * (_DAT_181ad55f0 & 0xffffffff) << 0x20) +
       (ulonglong)uVar23 * (ulonglong)_DAT_181ad5640 +
       ((ulonglong)_DAT_181ad5650 * (ulonglong)uVar23 +
        (SUB168(auVar24 ^ auVar19,0) >> 0x20) * (ulonglong)_DAT_181ad5640 << 0x20) +
       (ulonglong)uVar21 * (ulonglong)_DAT_181ad5620 +
       ((ulonglong)_DAT_181ad5630 * (ulonglong)uVar21 +
        (SUB168(auVar24 | auVar19,0) >> 0x20) * (ulonglong)_DAT_181ad5620 << 0x20) +
       (uVar13 & 0xffffffff) * (ulonglong)_DAT_181ad5600 +
       ((ulonglong)_DAT_181ad5610 * (uVar13 & 0xffffffff) +
        (uVar13 >> 0x20) * (ulonglong)_DAT_181ad5600 << 0x20) +
       ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181ad55e0 +
        (ulonglong)uVar27 * (ulonglong)_DAT_181ad55d0 << 0x20) +
       (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_181ad55d0 +
       ((uVar1 & 0xffffffff) * (ulonglong)_DAT_181ad55c0 +
        (ulonglong)uVar20 * (ulonglong)_DAT_181ad55b0 << 0x20) +
       (ulonglong)*(uint *)(unaff_RBP + 0x60) * (ulonglong)_DAT_181ad55b0)) + 0x77839c7e031b7dfd;
  _DAT_1832947d0 = _DAT_1832945d0 ^ uVar14;
  _DAT_183294940 = (_DAT_183294940 ^ uVar14) + _DAT_1832945d0 ^ 0x359fc3e3f6ad321c;
  _DAT_1832943b0 = (_DAT_1832943b0 * -0x741f2990c6cba6db ^ _DAT_183294940) + uVar14;
  _DAT_1832943a0 = _DAT_1832943b0 ^ _DAT_183294940;
  lVar15 = unaff_RBP + -0x30;
  FUN_18414b520(lVar15);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar15 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 0x38),lVar15);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb35d000 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b35d000(void)

{
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_R12D;
  undefined4 unaff_R14D;
  longlong *unaff_R15;
  
  *(undefined4 *)(unaff_RBP + 0x70) = unaff_R14D;
  *(undefined4 *)(unaff_RBP + 0x80) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x88) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x90) = unaff_R12D;
  iVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x90) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x90)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb35f3c0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b35f3c0(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x90) = 2;
  switch(*(int *)(unaff_RBP + 0x40) < *(int *)(unaff_RBP + 0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb363391 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b363391(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong unaff_R13;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint unaff_XMM9_Da;
  
  lVar1 = *(longlong *)(unaff_RBP + 0x10);
  uVar3 = param_1 + in_RCX + param_2;
  uVar4 = (param_2 ^ 1) + in_RAX + 1;
  param_1 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_1;
  uVar3 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ param_2 ^ 1;
  uVar3 = func_0x00018b37c970((uVar3 << 0x1d | uVar3 >> 0x23) - (in_RAX + 1) ^
                              (param_1 << 0x1d | param_1 >> 0x23) - (in_RCX + param_2));
  uVar2 = unaff_ESI ^ (uint)DAT_18001a710;
  uVar3 = uVar3 & 0x3ffffffc0000;
  _DAT_1832946b0 =
       ((((ulonglong)(unaff_ESI ^ unaff_XMM9_Da) * (ulonglong)_DAT_181ad4b90 << 0x20) +
         (ulonglong)(unaff_ESI ^ unaff_XMM9_Da) * (ulonglong)_DAT_181ad4b80 +
         ((ulonglong)(unaff_ESI | unaff_XMM9_Da) * (ulonglong)_DAT_181ad4b70 << 0x20) +
         (ulonglong)(unaff_ESI | unaff_XMM9_Da) * (ulonglong)_DAT_181ad4b60 +
        ((ulonglong)(unaff_ESI & unaff_XMM9_Da) * (ulonglong)_DAT_181ad4b50 << 0x20 |
        (ulonglong)(unaff_ESI & unaff_XMM9_Da) * (ulonglong)_DAT_181ad4b40) +
        ((ulonglong)unaff_ESI * (ulonglong)_DAT_181ad4b30 << 0x20) +
        (ulonglong)unaff_ESI * (ulonglong)_DAT_181ad4b20) -
       (((ulonglong)uVar2 * (ulonglong)_DAT_181ad4bd0 + _DAT_181ad4be0 << 0x20) +
        (ulonglong)uVar2 * (ulonglong)_DAT_181ad4bc0 +
       ((ulonglong)unaff_ESI * (ulonglong)_DAT_181ad4bd0 << 0x20) +
       (ulonglong)unaff_ESI * (ulonglong)_DAT_181ad4bc0)) + 0xedce7a00ce719ab5;
  _DAT_183294300 = _DAT_183294410 ^ uVar3 ^ _DAT_1832946b0;
  _DAT_1832947b0 = (_DAT_1832947b0 ^ uVar3) + _DAT_1832946b0 ^ 0x3a135da57d6a308f;
  _DAT_183294610 = (_DAT_183294610 * 0x522afc6e52550915 ^ _DAT_1832947b0) + uVar3;
  _DAT_183294448 = _DAT_183294610 ^ _DAT_1832947b0;
  _DAT_1832946b0 = _DAT_1832946b0 & 0xffffffff;
  _DAT_183294408 = func_0x00018b37c970(_DAT_1832943c0 ^ 0xff6bffb009ff7bb4);
  _DAT_183294aa0 =
       (_DAT_183294aa0 ^ _DAT_183294408 & 0x7fffffffffffffff) + 0xd4aeb75f ^ 0x1602aa1702d65860;
  _DAT_1832949e0 =
       (_DAT_1832949e0 * 0x7dc33ddf42734cb9 ^ _DAT_183294aa0) +
       (_DAT_183294408 & 0x7fffffffffffffff);
  _DAT_183294420 = _DAT_1832949e0 ^ _DAT_183294aa0;
  _DAT_183294390 = 0xd4aeb75f;
  uVar3 = (~_DAT_183294630 + 0x32882b01) *
          ((_DAT_183294350 ^ unaff_R13) + (ulonglong)((uint)_DAT_183294350 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_183294678) + (uVar3 & _DAT_183294678);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832949c0 = func_0x00018b37c970((uVar3 | 0xb6aa0825) + (ulonglong)((uint)uVar3 & 0xb6aa0825))
  ;
  _DAT_1832944c8 = (_DAT_1832944c8 ^ _DAT_1832949c0 ^ 0x32882b00) - 0x32882b00 ^ 0x439271121e381005;
  _DAT_183294ad0 =
       (_DAT_183294ad0 * 0x25ef12a7cd3a752b ^ _DAT_1832944c8) + (_DAT_1832949c0 ^ 0x32882b00);
  _DAT_1832948f0 = _DAT_183294ad0 ^ _DAT_1832944c8;
  _DAT_1832946b8 = 0xcd77d500;
  _DAT_183294678 = func_0x00018b37c970(_DAT_183294a80 ^ 0xff7700552a00a9fc);
  _DAT_183294378 = _DAT_1832946a0 ^ _DAT_183294678 ^ 0x32892aff;
  _DAT_1832947a8 = (_DAT_1832947a8 ^ _DAT_183294678) + 0x32892aff ^ 0xc024285a922f0f50;
  _DAT_183294910 = (_DAT_183294910 * -0x3b3a4a194ea9ade3 ^ _DAT_1832947a8) + _DAT_183294678;
  _DAT_183294570 = _DAT_183294910 ^ _DAT_1832947a8;
  _DAT_183294748 = 0x32892aff;
  uVar3 = (~_DAT_1832947e0 + 0xcd77d501) *
          ((_DAT_183294418 ^ 0xb6ab09da) + (ulonglong)((uint)_DAT_183294418 & 0xb6ab09da) * 2);
  uVar3 = (uVar3 | _DAT_1832947d0) + (uVar3 & _DAT_1832947d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832949b0 = func_0x00018b37c970((uVar3 | 0x7bdcdcda) + (ulonglong)((uint)uVar3 & 0x7bdcdcda))
  ;
  uVar3 = _DAT_1832949b0 & 0xfffffffffffffffe;
  _DAT_183294aa8 = _DAT_183294a28 ^ uVar3 ^ 0x10000ffff;
  _DAT_183294370 = (_DAT_183294370 ^ uVar3) + 0x10000ffff ^ 0x38764594c2270d7b;
  _DAT_1832945b8 = (_DAT_1832945b8 * -0x2fd1027635cafe79 ^ _DAT_183294370) + uVar3;
  _DAT_183294508 = _DAT_1832945b8 ^ _DAT_183294370;
  _DAT_183294788 = 0xffff;
  _DAT_183294988 = func_0x00018b37c970(_DAT_1832943d0 ^ 0x45000555000f97);
  uVar3 = (_DAT_183294988 ^ 0x8e000000) & 0xffffffffff800000;
  _DAT_183294748 = (_DAT_183294748 ^ uVar3) - 0x8e32e8f2 ^ 0x914ad8cc7053ba92;
  _DAT_1832948e8 = (_DAT_1832948e8 * -0x91d069dd535e1ff ^ _DAT_183294748) + uVar3;
  _DAT_183294750 = _DAT_1832948e8 ^ _DAT_183294748;
  _DAT_183294338 = 0x71cd170e;
  uVar3 = (~_DAT_1832945e8 + 0x8e32e8f3) * 0xf5eff3e8;
  uVar3 = (uVar3 | _DAT_183294468) + (uVar3 & _DAT_183294468);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183294958 = func_0x00018b37c970((uVar3 | 0xa103428) + (ulonglong)((uint)uVar3 & 0xa103428));
  uVar3 = (_DAT_183294958 ^ 0xffff) << 0x39 | (_DAT_183294958 ^ 0xffff) >> 7;
  _DAT_1832948b8 = _DAT_183294ab8 ^ uVar3 ^ 0x8e33e8f1;
  _DAT_183294a90 = (_DAT_183294a90 ^ uVar3) + 0x8e33e8f1 ^ 0x18b0b7f591ac20cf;
  _DAT_183294668 = (_DAT_183294668 * -0x676bbc6cc00eedc7 ^ _DAT_183294a90) + uVar3;
  _DAT_183294748 = _DAT_183294668 ^ _DAT_183294a90;
  _DAT_183294a28 = 0x8e33e8f1;
  uVar3 = (_DAT_1832948c0 ^ _DAT_181ad4bf0) + _DAT_183294948 + 0xa11cbd4;
  uVar4 = (_DAT_183294948 ^ _UNK_181ad4bf8) + _DAT_1832948c0 + 0x71cd170e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832948c0 ^ _DAT_181ad4bf0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183294948 ^ _UNK_181ad4bf8;
  _DAT_1832947f8 =
       func_0x00018b37c970((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832948c0 + 0x71cd170e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183294948 + 0xa11cbd4));
  uVar3 = _DAT_1832947f8 ^ 0x8e32e8f1;
  _DAT_183294510 = _DAT_1832948c0 ^ uVar3 ^ 0x10000ffff;
  _DAT_1832944b8 = (_DAT_1832944b8 ^ uVar3) + 0x10000ffff ^ 0xb9e29cd1f987e3b8;
  _DAT_183294820 = (_DAT_183294820 * -0x42018ccc1ef63bbf ^ _DAT_1832944b8) + uVar3;
  _DAT_183294a08 = _DAT_183294820 ^ _DAT_1832944b8;
  _DAT_183294a58 = 0xffff;
  uVar3 = (~_DAT_183294378 + 0x6e6fedb1) *
          ((_DAT_1832943d8 ^ 0x15b3316a) + (ulonglong)((uint)_DAT_1832943d8 & 0x15b3316a) * 2);
  uVar3 = (uVar3 | _DAT_183294518) + (uVar3 & _DAT_183294518);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832944f0 = func_0x00018b37c970((uVar3 | 0x7bdcdcda) + (ulonglong)((uint)uVar3 & 0x7bdcdcda))
  ;
  uVar3 = _DAT_1832944f0 ^ 0x9190124f;
  _DAT_183294358 = _DAT_183294370 ^ uVar3 ^ 0x10000ffff;
  _DAT_183294540 = (_DAT_183294540 ^ uVar3) + 0x10000ffff ^ 0xeddbab851c4ea726;
  _DAT_1832948d0 = (_DAT_1832948d0 * 0x56ef827ff30ac5b5 ^ _DAT_183294540) + uVar3;
  _DAT_183294520 = _DAT_1832948d0 ^ _DAT_183294540;
  _DAT_183294308 = 0xffff;
  uVar3 = (_DAT_1832948f0 ^ _DAT_181ad4c00) + _DAT_1832946a8 + 0x69c9c974;
  uVar4 = (_DAT_1832946a8 ^ _UNK_181ad4c08) + _DAT_1832948f0 + 0xd4aeb75f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832948f0 ^ _DAT_181ad4c00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832946a8 ^ _UNK_181ad4c08;
  _DAT_183294ab0 =
       func_0x00018b37c970((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832948f0 + 0xd4aeb75f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832946a8 + 0x69c9c974));
  uVar3 = _DAT_183294ab0 ^ 0xfdefff5f;
  _DAT_1832948b8 = _DAT_183294400 ^ uVar3 ^ 0x1c29aa1b0;
  _DAT_183294858 = (_DAT_183294858 ^ uVar3) + 0x1c29aa1b0 ^ 0x1e77973bde3c34c6;
  _DAT_183294478 = (_DAT_183294478 * 0x51297d8293e5e4fd ^ _DAT_183294858) + uVar3;
  _DAT_1832949a0 = _DAT_183294478 ^ _DAT_183294858;
  _DAT_183294940 = 0xc29aa1b0;
  uVar3 = (~_DAT_183294928 + 0xd4aeb760) *
          ((_DAT_183294848 ^ 0x69c9c974) + (ulonglong)((uint)_DAT_183294848 & 0x69c9c974) * 2);
  uVar3 = (uVar3 | _DAT_183294650) + (uVar3 & _DAT_183294650);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183294900 = func_0x00018b37c970((uVar3 | 0xbd677e2b) + (ulonglong)((uint)uVar3 & 0xbd677e2b))
  ;
  _DAT_183294668 =
       (_DAT_183294668 ^ _DAT_183294900 & 0xffffffffffff0000) + 0x39455d0e ^ 0xdac1690adb6568de;
  _DAT_1832947d0 =
       (_DAT_1832947d0 * -0x760a519d4b93745 ^ _DAT_183294668) +
       (_DAT_183294900 & 0xffffffffffff0000);
  _DAT_1832947b8 = _DAT_1832947d0 ^ _DAT_183294668;
  _DAT_183294988 = 0x39455d0e;
  uVar3 = (~_DAT_183294700 + 0xd4aeb760) *
          ((_DAT_183294388 ^ 0x69c9c974) + (ulonglong)((uint)_DAT_183294388 & 0x69c9c974) * 2);
  uVar3 = (uVar3 | _DAT_183294330) + (uVar3 & _DAT_183294330);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832948d8 = func_0x00018b37c970((uVar3 | 0xbd677e2b) + (ulonglong)((uint)uVar3 & 0xbd677e2b))
  ;
  uVar3 = _DAT_1832948d8 << 0x28 | _DAT_1832948d8 >> 0x18;
  _DAT_183294458 = (_DAT_183294458 ^ uVar3) + 0xc4aaa251 ^ 0xad6428bc623394ca;
  _DAT_1832943a0 = (_DAT_1832943a0 * 0x2f626e3243f12c43 ^ _DAT_183294458) + uVar3;
  _DAT_183294698 = _DAT_1832943a0 ^ _DAT_183294458;
  _DAT_1832948e8 = 0xc4aaa251;
  uVar3 = (~_DAT_183294840 + 0x895544a3) *
          ((_DAT_183294320 ^ 0xbd677e2b) + (ulonglong)((uint)_DAT_183294320 & 0xbd677e2b) * 2);
  uVar3 = (uVar3 | _DAT_183294a68) + (uVar3 & _DAT_183294a68);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183294490 = func_0x00018b37c970((uVar3 | 0x34323a89) + (ulonglong)((uint)uVar3 & 0x34323a89))
  ;
  _DAT_183294968 = _DAT_1832945b8 ^ _DAT_183294490 ^ 0xc29aa1b0;
  _DAT_183294330 = (_DAT_183294330 ^ _DAT_183294490) + 0xc29aa1b0 ^ 0xc43dd39d3faca0f;
  _DAT_1832944b0 = (_DAT_1832944b0 * -0x431f784032ae342f ^ _DAT_183294330) + _DAT_183294490;
  _DAT_1832947d0 = _DAT_1832944b0 ^ _DAT_183294330;
  _DAT_183294528 = 0xc29aa1b0;
  uVar3 = (_DAT_183294618 ^ _DAT_181ad4c10) + _DAT_1832949c8 + 0x46b88295;
  uVar4 = (_DAT_1832949c8 ^ _UNK_181ad4c18) + _DAT_183294618 + 0xc29aa1b0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183294618 ^ _DAT_181ad4c10;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832949c8 ^ _UNK_181ad4c18;
  _DAT_183294a10 =
       func_0x00018b37c970((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183294618 + 0xc29aa1b0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832949c8 + 0x46b88295));
  _DAT_183294450 = _DAT_183294a10 * 0x130e94236d440e55;
  _DAT_1832943c8 = _DAT_1832943c8 ^ _DAT_183294450 ^ 0x84107fb0f3c3ad0a;
  _DAT_183294318 = (_DAT_183294318 * 0x3b3892f7099fcbf3 ^ _DAT_1832943c8) + _DAT_183294450;
  _DAT_1832949d8 = _DAT_183294318 ^ _DAT_1832943c8;
  _DAT_183294858 = 0;
  _DAT_183294440 = func_0x00018b37c970(_DAT_183294408 + 0x2bff7bc9ffddff ^ 0x9a);
  uVar3 = (_DAT_183294440 ^ 0xffff) & 0x1fffffffffff;
  _DAT_183294848 = _DAT_183294850 ^ uVar3 ^ 0xffff;
  _DAT_1832946d0 = (_DAT_1832946d0 ^ uVar3) + 0xffff ^ 0xe1e567937b718409;
  _DAT_183294948 = (_DAT_183294948 * -0x7239e9cfb28bcc5d ^ _DAT_1832946d0) + uVar3;
  _DAT_1832948d8 = _DAT_183294948 ^ _DAT_1832946d0;
  _DAT_183294640 = 0xffff;
  uVar3 = (_DAT_183294888 ^ _DAT_181ad4c20) + _DAT_183294870 + 0x69c9c974;
  uVar4 = (_DAT_183294870 ^ _UNK_181ad4c28) + _DAT_183294888 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183294888 ^ _DAT_181ad4c20;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183294870 ^ _UNK_181ad4c28;
  _DAT_1832943d8 =
       func_0x00018b37c970((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183294888 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183294870 + 0x69c9c974));
  _DAT_1832945d8 =
       (_DAT_1832945d8 ^ _DAT_1832943d8 * 0x27bbac69fbb21e63) + 0x121415ae ^ 0x3ffe8e1ed481e957;
  _DAT_183294780 =
       (_DAT_183294780 * -0x6b27160e0f397e07 ^ _DAT_1832945d8) + _DAT_1832943d8 * 0x27bbac69fbb21e63
  ;
  _DAT_1832944d0 = _DAT_183294780 ^ _DAT_1832945d8;
  _DAT_183294838 = 0x121415ae;
  uVar3 = ((_DAT_183294868 ^ 0x8422dcda) + (ulonglong)((uint)_DAT_183294868 & 0x8422dcda) * 2) *
          -_DAT_183294468;
  uVar3 = (uVar3 | _DAT_183294630) + (uVar3 & _DAT_183294630);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_183294390 = func_0x00018b37c970((uVar3 | 0x8422dcda) + (ulonglong)((uint)uVar3 & 0x8422dcda))
  ;
  uVar3 = ((ulonglong)(~(uint)_DAT_183294390 & 0xffff) ^ 0xffff) * 0x3f9ecdb21caad933;
  _DAT_1832947f0 = _DAT_183294ad8 ^ uVar3 ^ 0xffff;
  _DAT_1832943e8 = (_DAT_1832943e8 ^ uVar3) + 0xffff ^ 0xc0297d101d0c8cb0;
  _DAT_1832943b0 = (_DAT_1832943b0 * -0x71ee3a48b1a6dcf9 ^ _DAT_1832943e8) + uVar3;
  _DAT_183294408 = _DAT_1832943b0 ^ _DAT_1832943e8;
  _DAT_183294518 = _DAT_1832949c8 ^ 0xffff;
  _DAT_1832944a8 = 0xffff;
  uVar3 = (_DAT_1832947c0 ^ _DAT_181ad4c30) + _DAT_183294498 + 0x418aeb35;
  uVar4 = (_DAT_183294498 ^ _UNK_181ad4c38) + _DAT_1832947c0 + 0xc5a8c810;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832947c0 ^ _DAT_181ad4c30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183294498 ^ _UNK_181ad4c38;
  _DAT_1832945b8 =
       func_0x00018b37c970((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832947c0 + 0xc5a8c810) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183294498 + 0x418aeb35));
  uVar3 = (ulonglong)(((uint)_DAT_1832945b8 ^ 0x4a0c810) & 0xc5a8c810);
  _DAT_1832949b8 = _DAT_1832949b8 ^ uVar3 ^ 0xdedbb63f8662edd8;
  _DAT_183294350 = (_DAT_183294350 * -0x73d16bd4b0819607 ^ _DAT_1832949b8) + uVar3;
  _DAT_183294768 = _DAT_183294350 ^ _DAT_1832949b8;
  _DAT_183294960 = 0;
  uVar3 = (_DAT_183294420 ^ 0x8422dcda) + _DAT_183294a50 + 0x8422dcda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183294420 ^ 0x8422dcda;
  uVar4 = ((_DAT_183294a50 + _DAT_183294420) * 0x2000 | _DAT_183294a50 + _DAT_183294420 >> 0x33) ^
          _DAT_183294a50;
  _DAT_183294618 =
       func_0x00018b37c970((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_183294420 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183294a50 + 0x8422dcda));
  uVar3 = (_DAT_183294618 << 0x15 | _DAT_183294618 >> 0x2b) * -0x2473a3d5e3017e5d;
  _DAT_1832949c8 = _DAT_1832945d8 ^ uVar3 ^ 0xffff;
  _DAT_1832949b8 = (_DAT_1832949b8 ^ uVar3) + 0xffff ^ 0x791b91f90d180b6d;
  _DAT_1832947e0 = (_DAT_1832947e0 * -0x196f44fde2ddf13d ^ _DAT_1832949b8) + uVar3;
  _DAT_183294718 = _DAT_1832947e0 ^ _DAT_1832949b8;
  _DAT_1832948d8 = 0xffff;
  *(uint *)(unaff_RBP + 0x90) = *(uint *)(unaff_RBP + 0x60) & 0xffff;
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb3647c0 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3647c0(void)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  uint uVar7;
  uint unaff_XMM9_Da;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(undefined8 *)(unaff_RBP + -0x10);
  *(undefined8 *)(unaff_RBP + 0x80) = uVar2;
  uVar1 = *(uint *)(unaff_RBP + 0x40);
  uVar6 = (ulonglong)uVar1;
  plVar3 = *(longlong **)(unaff_RBP + 0xb0);
  uVar5 = (~_DAT_1832946b0 + 2) *
          ((_DAT_183294990 ^ uVar6 ^ 0x84222325) +
          (ulonglong)((uint)_DAT_183294990 & (uint)(uVar6 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | _DAT_1832944f0) + (uVar5 & _DAT_1832944f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832944b8 =
       func_0x00018b37c970((uVar6 ^ 0x84222324 | uVar5) +
                           (ulonglong)((uint)(uVar6 ^ 0x84222324) & (uint)uVar5));
  uVar5 = (uVar6 | 1) ^ _DAT_1832944b8 ^ uVar6;
  uVar9 = uVar1 & unaff_XMM9_Da;
  uVar8 = uVar1 | unaff_XMM9_Da;
  uVar7 = uVar1 ^ unaff_XMM9_Da;
  uVar6 = ((((uVar6 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_181ad4ce0 +
            ((_DAT_18001a710 >> 0x20) * (ulonglong)_DAT_181ad4ce0 +
             ((uVar6 ^ _DAT_18001a710) & 0xffffffff) * (ulonglong)_DAT_181ad4c80 << 0x20) +
            ((ulonglong)uVar7 * (ulonglong)_DAT_181ad4cb0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_181ad4ca0 +
            ((ulonglong)uVar9 * (ulonglong)_DAT_181ad4cb0 << 0x20 |
            (ulonglong)uVar9 * (ulonglong)_DAT_181ad4ca0) +
            (ulonglong)uVar1 * (ulonglong)_DAT_181ad4c90 +
            ((ulonglong)uVar1 * (ulonglong)_DAT_181ad4c80 << 0x20) +
           ((ulonglong)uVar8 * (ulonglong)_DAT_181ad4cd0 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_181ad4cc0) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_181ad4d80 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_181ad4d70 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_181ad4d60 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_181ad4d50 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_181ad4d40 << 0x20 |
          (ulonglong)uVar9 * (ulonglong)_DAT_181ad4d30) +
          ((ulonglong)(uVar1 * _DAT_181ad4d20) << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_181ad4d10)) + 0xcc8361ce4ef1b281;
  _DAT_1832947d8 = _DAT_183294a30 ^ uVar5 ^ uVar6;
  _DAT_183294388 = (_DAT_183294388 ^ uVar5) + uVar6 ^ 0x6529c8c3db30d445;
  _DAT_183294548 = (_DAT_183294548 * 0x469eed901a4e9d23 ^ _DAT_183294388) + uVar5;
  _DAT_183294848 = _DAT_183294548 ^ _DAT_183294388;
  _DAT_183294340 = uVar6 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar6;
  iVar4 = (**(code **)(plVar3 + JNI->GetArrayLength /*0x558*/))(plVar3,uVar2);
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar4 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb36480d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b36480d(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong *unaff_R15;
  uint uVar4;
  uint uVar5;
  uint unaff_XMM9_Da;
  uint uVar6;
  uint uVar7;
  
  uVar2 = (~param_2 + 2) * ((param_3 ^ in_RAX) + param_4);
  uVar2 = (uVar2 | param_1) + (uVar2 & param_1);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832944b8 =
       func_0x00018b37c970((in_RAX ^ 1 | uVar2) + (ulonglong)((uint)(in_RAX ^ 1) & (uint)uVar2));
  uVar2 = (unaff_RSI | 1) ^ _DAT_1832944b8 ^ unaff_RSI;
  uVar5 = (uint)unaff_RSI;
  uVar7 = uVar5 & unaff_XMM9_Da;
  uVar6 = uVar5 | unaff_XMM9_Da;
  uVar4 = uVar5 ^ unaff_XMM9_Da;
  uVar3 = unaff_RSI ^ _DAT_18001a710;
  uVar3 = (((uVar3 & 0xffffffff) * (ulonglong)_DAT_181ad4ce0 +
            ((uVar3 >> 0x20) * (ulonglong)_DAT_181ad4ce0 +
             (uVar3 & 0xffffffff) * (ulonglong)_DAT_181ad4c80 << 0x20) +
            ((ulonglong)uVar4 * (ulonglong)_DAT_181ad4cb0 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_181ad4ca0 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_181ad4cb0 << 0x20 |
            (ulonglong)uVar7 * (ulonglong)_DAT_181ad4ca0) +
            (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_181ad4c90 +
            ((unaff_RSI & 0xffffffff) * (ulonglong)_DAT_181ad4c80 << 0x20) +
           ((ulonglong)uVar6 * (ulonglong)_DAT_181ad4cd0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_181ad4cc0) -
          (((ulonglong)uVar4 * (ulonglong)_DAT_181ad4d80 << 0x20) +
           (ulonglong)uVar4 * (ulonglong)_DAT_181ad4d70 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_181ad4d60 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_181ad4d50 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_181ad4d40 << 0x20 |
          (ulonglong)uVar7 * (ulonglong)_DAT_181ad4d30) +
          ((ulonglong)(uVar5 * _DAT_181ad4d20) << 0x20) +
          (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_181ad4d10)) + 0xcc8361ce4ef1b281;
  _DAT_1832947d8 = _DAT_183294a30 ^ uVar2 ^ uVar3;
  _DAT_183294388 = (_DAT_183294388 ^ uVar2) + uVar3 ^ 0x6529c8c3db30d445;
  _DAT_183294548 = (_DAT_183294548 * 0x469eed901a4e9d23 ^ _DAT_183294388) + uVar2;
  _DAT_183294848 = _DAT_183294548 ^ _DAT_183294388;
  _DAT_183294340 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x88) = (int)uVar3;
  iVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x88) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x88)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb36750a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b36750a(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x38) = uVar2;
  cVar1 = (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb3676a1 -----

undefined8 FUN_18b3676a1(void)

{
  char cVar1;
  undefined8 uVar2;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x80);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ----- block @ rva 0xb367a92 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b367a92(longlong param_1)

{
  switch(0xf < *(ulonglong *)(param_1 + 0x18)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb37e8eb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b37e8eb(void)

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


// ----- block @ rva 0xb37ea8a -----

void FUN_18b37ea8a(void)

{
  return;
}


// ----- block @ rva 0xb37f8bb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b37f8bb(void)

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


// ----- block @ rva 0xb37f910 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b37f910(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack000000000000007a;
  
  uStack000000000000007a = in_stack_00000058;
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


// ----- block @ rva 0xb381194 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b381194(void)

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


// ----- block @ rva 0xb3812ca -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3812ca(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
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


// ----- block @ rva 0xb3815f4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3815f4(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 uStack0000000000000048;
  undefined8 in_stack_00000088;
  
  uStack0000000000000048 = in_stack_00000088;
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x878,0x27);
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


// ----- block @ rva 0xb38195e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b38195e(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
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


// ----- block @ rva 0xb381af9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b381af9(void)

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


// ----- block @ rva 0xb383019 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b383019(void)

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


// ----- block @ rva 0xb3837cc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3837cc(void)

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


// ----- block @ rva 0xb3874a5 -----

void FUN_18b3874a5(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0xb38772e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b38772e(void)

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


// ----- block @ rva 0xb387782 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b387782(void)

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


// ----- block @ rva 0xb387c31 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b387c31(void)

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


// ----- block @ rva 0xb387cf5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b387cf5(void)

{
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = in_stack_00000040;
  FUN_190dd72e0();
  (*_DAT_181adbf38)();
  return;
}


// ----- block @ rva 0xb387f48 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b387f48(void)

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


// ----- block @ rva 0xb3882d6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3882d6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_181adc0e8)();
  return;
}


// ----- block @ rva 0xb388446 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b388446(void)

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


// ----- block @ rva 0xb3884fb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3884fb(void)

{
  FUN_190ddfc90();
  (*_DAT_181adbed8)();
  return;
}


// ----- block @ rva 0xb38856d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b38856d(void)

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


// ----- block @ rva 0xb3885c1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3885c1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_181adc068)();
  return;
}


// ----- block @ rva 0xb3885f5 -----

void FUN_18b3885f5(void)

{
  return;
}


// ----- block @ rva 0xb38877c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b38877c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_181adc748)();
  return;
}


// ----- block @ rva 0xb388b01 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b388b01(void)

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


// ----- block @ rva 0xb388dc1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b388dc1(void)

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


// ----- block @ rva 0xb388e59 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b388e59(void)

{
  undefined8 uStack0000000000000060;
  undefined8 in_stack_000000e0;
  
  uStack0000000000000060 = in_stack_000000e0;
  FUN_190ddfc90();
  (*_DAT_181adcb18)();
  return;
}


// ----- block @ rva 0xb38931f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b38931f(void)

{
  (*_DAT_181add2d8)();
  return;
}


// ----- block @ rva 0xb389585 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b389585(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181add078)();
  return;
}


// ----- block @ rva 0xb38a5ca -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b38a5ca(void)

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


// ----- block @ rva 0xb38a642 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b38a642(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xb38a716 -----

void FUN_18b38a716(void)

{
  return;
}


// ----- block @ rva 0xb38a990 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b38a990(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
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


// ----- block @ rva 0xb38b254 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b38b254(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_181adc878)();
  return;
}


// ----- block @ rva 0xb38b2ba -----

void FUN_18b38b2ba(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xb38b4eb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b38b541 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b38b4eb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb38b91b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b38b96c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b38b91b(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddce00();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb38dbf5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b38dc0c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b38dbf5(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb38e04c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b38e063 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b38e04c(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xb39f2f3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b39f2f3(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
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


// ----- block @ rva 0xb3a4fc7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a4fc7(void)

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


// ----- block @ rva 0xb3a52cf -----

void thunk_FUN_18b38d41c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0xb3a598d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a598d(void)

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


// ----- block @ rva 0xb3a5c63 -----

void FUN_18b3a5c63(void)

{
  return;
}


// ----- block @ rva 0xb3a5ccf -----

void FUN_18b3a5ccf(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

