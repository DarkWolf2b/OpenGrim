// ===== Lsixtwo/fc; _728d964e491b8d841b10e24b5de0af47 ()V (handler @ image 18b38b400, runtime 6ffff2f9b400) =====

void FUN_18b38b400(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b38b4e8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181add3b8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fc; aHO (Lsixtwo/gH$th;)V (handler @ image 18b345390, runtime 6ffff2f55390) =====

void FUN_18b345390(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x116a1,0x2d6);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x116a1,0x2d6);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b388779 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181adc3a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



