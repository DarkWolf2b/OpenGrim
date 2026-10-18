// ===== Lsixtwo/am; _084bbcaff7b3cc723e303c46feb338d2 ()V (handler @ image 18fdf9a80, runtime 6ffff7a09a80) =====

void FUN_18fdf9a80(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018fdf9b68 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b2ae00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/am; bV (Lsixtwo/lC;)V (handler @ image 18fde6390, runtime 6ffff79f6390) =====

void FUN_18fde6390(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x4b90,0xf0);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018fde648b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b24ab8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/am; fC (DDD)Z (handler @ image 18fe06670, runtime 6ffff7a16670) =====

void FUN_18fe06670(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x4b90,0xf0);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018fe06737 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b2cb40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/am; oX (Ljava/lang/String;)V (handler @ image 18fdf6b00, runtime 6ffff7a06b00) =====

void FUN_18fdf6b00(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x4b90,0xf0);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018fdf6b64 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b29bb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/am; oY ()Ljava/util/List; (handler @ image 18fe0a9e0, runtime 6ffff7a1a9e0) =====

void FUN_18fe0a9e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fe0aa00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b2de50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/am; oZ ()Lsixtwo/ah; (handler @ image 18fe0abe0, runtime 6ffff7a1abe0) =====

void FUN_18fe0abe0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018fe0ac00 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b2df30 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/am; pa (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18fe0ade0, runtime 6ffff7a1ade0) =====

undefined8 FUN_18fe0ade0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/am; pb ([B)Ljava/lang/String; (handler @ image 18fe0ae70, runtime 6ffff7a1ae70) =====

void FUN_18fe0ae70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018fe0af10 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b2e190 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/am; pc (IJ)Ljava/lang/String; (handler @ image 18fe328f0, runtime 6ffff7a428f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18fe328f0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (uRam000000018343c398 ^ _UNK_182b34cc0) + uRam000000018343c338 + 0x90f99ce4c88fb6d7;
  uVar7 = (uRam000000018343c338 ^ _UNK_182b34cc8) + uRam000000018343c398 + 0x75e19c744e37c06c;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018343c398 ^ _UNK_182b34cc0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018343c338 ^ _UNK_182b34cc8;
  uRam000000018343c660 =
       func_0x00018fe39200((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018343c398 + 0x75e19c744e37c06c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018343c338 + 0x90f99ce4c88fb6d7));
  uVar6 = uRam000000018343c660 >> 1 | uRam000000018343c660;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018343c660;
  uVar6 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar7;
  uRam000000018343c640 = (uRam000000018343c640 ^ uVar7) + 0xe5180090029a559e ^ 0xb519e85b8b714ddb;
  uRam000000018343c398 = (uRam000000018343c398 * -0x36da8b20de9526ed ^ uRam000000018343c640) + uVar7
  ;
  uRam000000018343c5d0 = uRam000000018343c398 ^ uRam000000018343c640;
  uRam000000018343c618 = 0xe5180090029a559e;
  uRam000000018343c390 = func_0x00018fe39200(uRam000000018343c560 + 0xfbfe391d777e7e0 ^ 0x21);
  uRam000000018343c3a0 =
       (uRam000000018343c3a0 ^ uRam000000018343c390 & 0x3fffffffffffffff) + 0xde9c77cfc9c59ce3 ^
       0x6bb0822d1267a51a;
  uRam000000018343c608 =
       (uRam000000018343c608 * -0x2bc284933b4c79d ^ uRam000000018343c3a0) +
       (uRam000000018343c390 & 0x3fffffffffffffff);
  uRam000000018343c310 = uRam000000018343c608 ^ uRam000000018343c3a0;
  uRam000000018343c6c8 = 0xde9c77cfc9c59ce3;
  uRam000000018343c4a8 = func_0x00018fe39200(uRam000000018343c480 ^ 0xd0369eadc2880808);
  uVar6 = uRam000000018343c348 >> 1 | uRam000000018343c348;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (ulonglong)
          (~((uint)uRam000000018343c348 ^
            (0x40 - (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 4) & 0x7fff);
  uRam000000018343c3f8 = uRam000000018343c578 ^ uVar6 ^ 0x21638830363ae31c;
  uRam000000018343c350 = (uRam000000018343c350 ^ uVar6) + 0x21638830363ae31c ^ 0xea742a067bebab2a;
  uRam000000018343c360 = (uRam000000018343c360 * -0x33714fd1e1a07d8f ^ uRam000000018343c350) + uVar6
  ;
  uRam000000018343c310 = uRam000000018343c360 ^ uRam000000018343c350;
  uRam000000018343c678 = 0x21638830363ae31c;
  uVar6 = (~uRam000000018343c310 + 0xde9c77cfc9c59ce4) *
          ((uRam000000018343c438 ^ 0x21638830b218c039) +
          (uRam000000018343c438 & 0x21638830b218c039) * 2);
  uVar6 = (uVar6 | uRam000000018343c4b8) + (uVar6 & uRam000000018343c4b8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c5d8 =
       func_0x00018fe39200((uVar6 | 0xffffffff7bdd5cda) + (uVar6 & 0xffffffff7bdd5cda));
  uVar6 = ~uRam000000018343c5d8;
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar6 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6;
  uRam000000018343c430 = uRam000000018343c3c8 ^ uVar6 ^ 0x7fff;
  uRam000000018343c5e8 = (uRam000000018343c5e8 ^ uVar6) + 0x7fff ^ 0x4734d8af1d52cd1a;
  uRam000000018343c5f0 = (uRam000000018343c5f0 * -0x8d90133a19be7 ^ uRam000000018343c5e8) + uVar6;
  uRam000000018343c3a8 = uRam000000018343c5f0 ^ uRam000000018343c5e8;
  uRam000000018343c3c0 = 0x7fff;
  uRam000000018343c578 = func_0x00018fe39200(uRam000000018343c468 ^ 0x369edd7af10f543e);
  uRam000000018343c6b8 =
       (uRam000000018343c6b8 ^ uRam000000018343c578 ^ 0x826677d70b794c14) + 0x7d998828f486b3ec ^
       0x52a9eb6d120ca92a;
  uRam000000018343c3b0 =
       (uRam000000018343c3b0 * 0x731a5a76f9978a3b ^ uRam000000018343c6b8) +
       (uRam000000018343c578 ^ 0x826677d70b794c14);
  uRam000000018343c370 = uRam000000018343c3b0 ^ uRam000000018343c6b8;
  uRam000000018343c348 = 0x7d998828f486b3ec;
  uVar6 = (~uRam000000018343c618 + 0x7d998828f486b3ed) *
          ((uRam000000018343c4b8 ^ 0x826677d78f5bef36) +
          (uRam000000018343c4b8 & 0x26677d78f5bef36) * 2);
  uVar6 = (uVar6 | uRam000000018343c340) + (uVar6 & uRam000000018343c340);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c588 =
       func_0x00018fe39200((uVar6 | 0xffffffff7bdd5cda) + (uVar6 & 0xffffffff7bdd5cda));
  uVar6 = uRam000000018343c588 & 0x1ffffffff;
  uRam000000018343c3e8 = uRam000000018343c6c8 ^ uVar6 ^ 0x7fff;
  uRam000000018343c6a0 = (uRam000000018343c6a0 ^ uVar6) + 0x7fff ^ 0x79dd642d6d7163ef;
  uRam000000018343c590 = (uRam000000018343c590 * 0x71f240f817e4c7b5 ^ uRam000000018343c6a0) + uVar6;
  uRam000000018343c310 = uRam000000018343c590 ^ uRam000000018343c6a0;
  uRam000000018343c438 = 0x7fff;
  uVar6 = (~uRam000000018343c3a0 + 0xb590253fc136faed) * 0x8422a324;
  uVar6 = (uVar6 | uRam000000018343c638) + (uVar6 & uRam000000018343c638);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c330 =
       func_0x00018fe39200((uVar6 | 0xb590253f4514d9c9) + (uVar6 & 0xb590253f4514d9c9));
  uVar7 = _UNK_182b34cd8;
  uVar6 = _UNK_182b34cd0;
  uVar3 = uRam000000018343c330 << 0x2b | uRam000000018343c330 >> 0x15;
  uRam000000018343c590 = (uRam000000018343c590 ^ uVar3) + 0x4a6fdac03ec90514 ^ 0x2c855594a8e4c502;
  uRam000000018343c4a0 = (uRam000000018343c4a0 * -0x58c95add7ac9ec47 ^ uRam000000018343c590) + uVar3
  ;
  uRam000000018343c310 = uRam000000018343c4a0 ^ uRam000000018343c590;
  uRam000000018343c4b8 = 0x4a6fdac03ec90514;
  uVar3 = (uRam000000018343c5a0 ^ _UNK_182b34cd0) + uRam000000018343c5c8 + 0xbbade4fb6fd9cd0a;
  uVar8 = (uRam000000018343c5c8 ^ _UNK_182b34cd8) + uRam000000018343c5a0 + 0xe5180090029a559e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343c5a0 ^ _UNK_182b34cd0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018343c5c8 ^ _UNK_182b34cd8;
  uRam000000018343c348 =
       func_0x00018fe39200((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam000000018343c5a0 + 0xe5180090029a559e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018343c5c8 + 0xbbade4fb6fd9cd0a));
  uVar3 = uRam000000018343c348 >> 1 | uRam000000018343c348;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam000000018343c348;
  uVar3 = uVar3 << 0x12 | uVar3 >> 0x2e;
  uRam000000018343c658 = uRam000000018343c4b0 ^ uVar3 ^ 0xa0c5e58bee9643cd;
  uRam000000018343c6f8 = (uRam000000018343c6f8 ^ uVar3) + 0xa0c5e58bee9643cd ^ 0x2d942091bac10196;
  uRam000000018343c4b0 = (uRam000000018343c4b0 * -0x3cfa82aeb38644bd ^ uRam000000018343c6f8) + uVar3
  ;
  uRam000000018343c460 = uRam000000018343c4b0 ^ uRam000000018343c6f8;
  uRam000000018343c6d0 = -0x5f3a1a741169bc33;
  uVar3 = (uRam000000018343c380 ^ uVar6) + uRam000000018343c460 + 0xbbade4fb6fd9cd0a;
  uVar8 = (uRam000000018343c460 ^ uVar7) + uRam000000018343c380 + 0xe5180090029a559e;
  uVar6 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018343c380 ^ uVar6;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018343c460 ^ uVar7;
  uRam000000018343c400 =
       func_0x00018fe39200((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018343c380 + 0xe5180090029a559e) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018343c460 + 0xbbade4fb6fd9cd0a));
  uVar6 = uRam000000018343c400 << 0x1c | uRam000000018343c400 >> 0x24;
  uRam000000018343c4e0 = (uRam000000018343c4e0 ^ uVar6) + 0xa1080090029a440e ^ 0xd948db5bb3e633a4;
  uRam000000018343c330 = (uRam000000018343c330 * 0x20e9b1df7969d371 ^ uRam000000018343c4e0) + uVar6;
  uRam000000018343c530 = uRam000000018343c330 ^ uRam000000018343c4e0;
  uRam000000018343c4d0 = 0xa1080090029a440e;
  uRam000000018343c698 = func_0x00018fe39200(uRam000000018343c320 ^ 0xcaf05a98881cd590);
  uVar6 = uRam000000018343c698 << 0x32 | uRam000000018343c698 >> 0xe;
  uRam000000018343c5b0 = uRam000000018343c580 ^ uVar6 ^ 0xa0c5e58bee9643cd;
  uRam000000018343c538 = (uRam000000018343c538 ^ uVar6) + 0xa0c5e58bee9643cd ^ 0xf61e2e4534ab4c9a;
  uRam000000018343c598 = (uRam000000018343c598 * 0x231a004eda50246f ^ uRam000000018343c538) + uVar6;
  uRam000000018343c3d0 = uRam000000018343c598 ^ uRam000000018343c538;
  uRam000000018343c350 = 0xa0c5e58bee9643cd;
  uVar6 = ((uRam000000018343c6a0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018343c6a0 & 0x84225cda) * 2) * -uRam000000018343c6d0;
  uVar6 = (uVar6 | uRam000000018343c4a8) + (uVar6 & uRam000000018343c4a8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c650 =
       func_0x00018fe39200((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uRam000000018343c478 = uRam000000018343c6c8 ^ uRam000000018343c650 ^ 0x7fff;
  uRam000000018343c698 = (uRam000000018343c698 ^ uRam000000018343c650) + 0x7fff ^ 0xf4b61b9dbb726228
  ;
  uRam000000018343c3f8 =
       (uRam000000018343c3f8 * -0x27dc5113f4f504b1 ^ uRam000000018343c698) + uRam000000018343c650;
  uRam000000018343c458 = uRam000000018343c3f8 ^ uRam000000018343c698;
  uRam000000018343c4e0 = 0x7fff;
  uVar6 = ((uRam000000018343c3e8 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018343c3e8 & 0x84225cda) * 2) * -uRam000000018343c368;
  uVar6 = (uVar6 | uRam000000018343c300) + (uVar6 & uRam000000018343c300);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c3e0 =
       func_0x00018fe39200((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = (uRam000000018343c3e0 & 0x7ffffffffffffff) << 4 | uRam000000018343c3e0 >> 0x3c;
  uRam000000018343c6a0 = uRam000000018343c390 ^ uVar6 ^ 0x7fff;
  uRam000000018343c358 = (uRam000000018343c358 ^ uVar6) + 0x7fff ^ 0xd6e0d74324280639;
  uRam000000018343c3a8 = (uRam000000018343c3a8 * -0x3cce877dbfe45433 ^ uRam000000018343c358) + uVar6
  ;
  uRam000000018343c308 = uRam000000018343c3a8 ^ uRam000000018343c358;
  auVar4._8_8_ = _UNK_18019c088;
  auVar4._0_8_ = param_4 ^ 0x84222325;
  auVar5 = pshufb(auVar4 ^ _UNK_182b34ce0,_UNK_1800170c0);
  uRam000000018343c628 = 0x7fff;
  uVar7 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar7 + uRam000000018343c338;
  if (auVar5._4_4_ < 0) {
    uVar6 = uRam000000018343c578 ^ uVar7;
  }
  uRam000000018343c310 = func_0x00018fe39200(SUB161(auVar4 ^ _UNK_182b34ce0,5) ^ uVar6);
  uRam000000018343c450 = (ulonglong)((uint)param_4 & 0x7fff);
  uRam000000018343c4b8 =
       (uRam000000018343c4b8 ^ uRam000000018343c310) + uRam000000018343c450 ^ 0x69e78b8ce75a2bb0;
  uRam000000018343c390 =
       (uRam000000018343c390 * 0x3980b38f3f97682f ^ uRam000000018343c4b8) + uRam000000018343c310;
  uRam000000018343c5c0 = uRam000000018343c390 ^ uRam000000018343c4b8;
  uRam000000018343c600 = uRam000000018343c3f0 ^ uRam000000018343c450;
  uVar6 = (~uRam000000018343c4f0 + 0x2999e74e) *
          ((uRam000000018343c6f0 ^ 0xe79a0f3e) +
          (ulonglong)((uint)uRam000000018343c6f0 & 0xe79a0f3e) * 2);
  uVar6 = (uVar6 | uRam000000018343c458) + (uVar6 & uRam000000018343c458);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c4e8 =
       func_0x00018fe39200((uVar6 | 0xce03e873) + (ulonglong)((uint)uVar6 & 0xce03e873));
  uVar7 = uRam000000018343c4e8 ^ 0x1034723bdd54a11f;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar7 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar7;
  uRam000000018343c688 = (uRam000000018343c688 ^ uVar7) + 0x6bb9ef5f ^ 0xcabcc28e9646db0f;
  uRam000000018343c578 = (uRam000000018343c578 * 0x7a93ac2bac848841 ^ uRam000000018343c688) + uVar7;
  uRam000000018343c6f0 = uRam000000018343c578 ^ uRam000000018343c688;
  uRam000000018343c378 = 0x6bb9ef5f;
  uRam000000018343c580 = func_0x00018fe39200(uRam000000018343c488 ^ 0x9fffad06ffe605);
  uRam000000018343c388 =
       (uRam000000018343c388 ^ uRam000000018343c580) + 0x3b09832a ^ 0xc01453507d4e43aa;
  uRam000000018343c3c0 =
       (uRam000000018343c3c0 * -0x4ecbe89623209e43 ^ uRam000000018343c388) + uRam000000018343c580;
  uRam000000018343c400 = uRam000000018343c3c0 ^ uRam000000018343c388;
  uRam000000018343c398 = 0x3b09832a;
  uVar6 = (~uRam000000018343c328 + 0xe15e3e6f) *
          ((uRam000000018343c4f8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018343c4f8 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam000000018343c4e8) + (uVar6 & uRam000000018343c4e8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c6a0 =
       func_0x00018fe39200((uVar6 | 0x657c1d4b) + (ulonglong)((uint)uVar6 & 0x657c1d4b));
  uVar6 = uRam000000018343c6a0 - (uRam000000018343c6a0 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar1 + (uint)bVar1 ^ uRam000000018343c6a0;
  uRam000000018343c5e0 = (uRam000000018343c5e0 ^ uVar6) - 0xe15e3e6e ^ 0x57f8f3592a3c77e;
  uRam000000018343c320 = (uRam000000018343c320 * -0x2fd39a7ba3bc5df1 ^ uRam000000018343c5e0) + uVar6
  ;
  uRam000000018343c548 = uRam000000018343c320 ^ uRam000000018343c5e0;
  uRam000000018343c408 = 0x1ea1c192;
  uVar6 = (~uRam000000018343c4c8 + 0xe15e3e6f) *
          ((uRam000000018343c5d8 ^ 0x84223dc2) +
          (ulonglong)((uint)uRam000000018343c5d8 & 0x84223dc2) * 2);
  uVar6 = (uVar6 | uRam000000018343c6a0) + (uVar6 & uRam000000018343c6a0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c488 =
       func_0x00018fe39200((uVar6 | 0x657c03ac) + (ulonglong)((uint)uVar6 & 0x657c03ac));
  uVar6 = uRam000000018343c488 & 0xffffffffff000000;
  uRam000000018343c600 = uRam000000018343c490 ^ uVar6 ^ 0xe15e5d55;
  uRam000000018343c300 = (uRam000000018343c300 ^ uVar6) + 0xe15e5d55 ^ 0x6ce56c1a17817cd5;
  uRam000000018343c4b0 = (uRam000000018343c4b0 * 0x47da432a1470f34b ^ uRam000000018343c300) + uVar6;
  uRam000000018343c648 = uRam000000018343c4b0 ^ uRam000000018343c300;
  uRam000000018343c4d8 = 0xe15e5d55;
  uRam000000018343c398 = func_0x00018fe39200(uRam000000018343c678 ^ 0x3bff5f3e002732);
  uRam000000018343c6f0 = uRam000000018343c6f0 - 0x250a6763 ^ 0x72a9ecd0acbc4351;
  uRam000000018343c688 = uRam000000018343c5f0 * 0x22f4e81a30f4046d;
  uRam000000018343c5f0 = uRam000000018343c688 ^ uRam000000018343c6f0;
  uRam000000018343c530 = 0xdaf5989d;
  uVar6 = (uRam000000018343c328 ^ _UNK_182b34cf0) + uRam000000018343c4a8 + 0x84223dc2;
  uVar7 = (uRam000000018343c4a8 ^ _UNK_182b34cf8) + uRam000000018343c328 + 0x250a6763;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018343c328 ^ _UNK_182b34cf0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018343c4a8 ^ _UNK_182b34cf8;
  uRam000000018343c3b0 =
       func_0x00018fe39200((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018343c328 + 0x250a6763) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018343c4a8 + 0x84223dc2));
  uRam000000018343c478 = uRam000000018343c4d8 ^ 0x250a864a;
  uRam000000018343c560 = uRam000000018343c560 + 0x250a864a ^ 0x97811448c4c739f9;
  uRam000000018343c3a8 = uRam000000018343c348 * 0x128365b06d065d6d;
  uRam000000018343c348 = uRam000000018343c3a8 ^ uRam000000018343c560;
  uRam000000018343c588 = 0x250a864a;
  uVar6 = (~uRam000000018343c620 + 0xdaf5989e) *
          ((uRam000000018343c5e0 ^ 0xa128a56f) +
          (ulonglong)((uint)uRam000000018343c5e0 & 0xa128a56f) * 2);
  uVar6 = (uVar6 | uRam000000018343c410) + (uVar6 & uRam000000018343c410);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c4f8 =
       func_0x00018fe39200((uVar6 | 0x7bdd3df2) + (ulonglong)((uint)uVar6 & 0x7bdd3df2));
  uVar7 = uRam000000018343c4f8 ^ 0xffff9edf;
  uVar6 = uVar7 >> 1 | uVar7;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ uVar7) & 0x3ffffffffffffff;
  uRam000000018343c428 = uRam000000018343c358 ^ uVar6 ^ 0x100001ee7;
  uRam000000018343c560 = (uRam000000018343c560 ^ uVar6) + 0x100001ee7 ^ 0x946905c0350eb5b7;
  uRam000000018343c3f0 = (uRam000000018343c3f0 * 0x279af6123d959ecb ^ uRam000000018343c560) + uVar6;
  uRam000000018343c3a8 = uRam000000018343c3f0 ^ uRam000000018343c560;
  uRam000000018343c480 = 0x1ee7;
  uVar6 = (uRam000000018343c3d8 ^ _UNK_182b34d00) + uRam000000018343c540 + 0x84222325;
  uVar7 = (uRam000000018343c540 ^ _UNK_182b34d08) + uRam000000018343c3d8 + 0x1414877f;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018343c3d8 ^ _UNK_182b34d00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018343c540 ^ _UNK_182b34d08;
  uRam000000018343c6b8 =
       func_0x00018fe39200((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018343c3d8 + 0x1414877f) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018343c540 + 0x84222325));
  uRam000000018343c3e0 =
       (uRam000000018343c3e0 ^ uRam000000018343c6b8 ^ 0x1414877f) - 0x1414877f ^ 0x68a6fe9d9d1b62d4;
  uRam000000018343c6d0 =
       (uRam000000018343c6d0 * -0x7f37a0fbc01c622d ^ uRam000000018343c3e0) +
       (uRam000000018343c6b8 ^ 0x1414877f);
  uRam000000018343c428 = 0xebeb7881;
  uRam000000018343c620 = func_0x00018fe39200(uRam000000018343c3f8 + 0xb9ff6fa4ffe9ff ^ 0x6f);
  uRam000000018343c4f0 = uRam000000018343c480 ^ uRam000000018343c620 ^ 0x1414a666;
  uRam000000018343c6e0 =
       (uRam000000018343c6e0 ^ uRam000000018343c620) + 0x1414a666 ^ 0x1942d8ab70cc9e8c;
  uRam000000018343c5c0 =
       (uRam000000018343c5c0 * -0x48d1d95a353f388f ^ uRam000000018343c6e0) + uRam000000018343c620;
  uRam000000018343c678 = uRam000000018343c5c0 ^ uRam000000018343c6e0;
  uRam000000018343c6d0 = 0x1414a666;
  uRam000000018343c690 = func_0x00018fe39200(lRam000000018343c668 + 0x550048c1ff52ffU ^ 0xd9);
  uVar6 = uRam000000018343c690 >> 1 | uRam000000018343c690;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam000000018343c690 ^ 0x1414a666;
  uRam000000018343c410 = uRam000000018343c508 ^ uVar6 ^ 0x100001ee7;
  uRam000000018343c368 = (uRam000000018343c368 ^ uVar6) + 0x100001ee7 ^ 0xa60ac3eb2f288879;
  uRam000000018343c578 = (uRam000000018343c578 * -0x524157650b23723f ^ uRam000000018343c368) + uVar6
  ;
  uRam000000018343c3b0 = uRam000000018343c578 ^ uRam000000018343c368;
  uRam000000018343c340 = 0x1ee7;
  uVar6 = (~uRam000000018343c600 + 0x3b09832b) *
          ((uRam000000018343c5d8 ^ 0xef9bcc7a) +
          (ulonglong)((uint)uRam000000018343c5d8 & 0xef9bcc7a) * 2);
  uVar6 = (uVar6 | uRam000000018343c688) + (uVar6 & uRam000000018343c688);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c328 =
       func_0x00018fe39200((uVar6 | 0xd4924f50) + (ulonglong)((uint)uVar6 & 0xd4924f50));
  uRam000000018343c538 = uRam000000018343c5a0 ^ uRam000000018343c5f8 ^ 0xa6c37289;
  uRam000000018343c340 =
       (uRam000000018343c340 ^ uRam000000018343c5f8) + 0xa6c37289 ^ 0xfd8acc07001b9322;
  uRam000000018343c510 =
       (uRam000000018343c510 * -0x6e1942ebcd8c5dd7 ^ uRam000000018343c340) + uRam000000018343c5f8;
  uRam000000018343c690 = uRam000000018343c510 ^ uRam000000018343c340;
  uRam000000018343c488 = uRam000000018343c6a0 ^ 0xa6c37289;
  uRam000000018343c430 = 0xa6c37289;
  uVar6 = (~uRam000000018343c370 + 0x3b09832b) *
          ((uRam000000018343c610 ^ 0xef9bcc7a) +
          (ulonglong)((uint)uRam000000018343c610 & 0xef9bcc7a) * 2);
  uVar6 = (uVar6 | uRam000000018343c480) + (uVar6 & uRam000000018343c480);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uVar6 = func_0x00018fe39200((uVar6 | 0xd4924f50) + (ulonglong)((uint)uVar6 & 0xd4924f50));
  uVar7 = (uVar6 ^ 0x7bb9ef7f) & 0x7fffffffffffffff;
  uVar3 = ((uVar6 ^ 0x7bb9ef7f) & 0x7fffffffffffffff) >> 1 | uVar7;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar7;
  uRam000000018343c408 = (uVar6 ^ uVar7) + 0x50b06c75 ^ 0xda9638d2965021e7;
  uRam000000018343c420 = (uRam000000018343c420 * 0xbaee9239324da61 ^ uRam000000018343c408) + uVar7;
  uRam000000018343c440 = uRam000000018343c420 ^ uRam000000018343c408;
  uRam000000018343c3e8 = 0x50b06c75;
  uVar6 = (~uRam000000018343c340 + 0xa6c3728a) *
          ((uRam000000018343c518 ^ 0x22e151ac) +
          (ulonglong)((uint)uRam000000018343c518 & 0x22e151ac) * 2);
  uVar6 = (uVar6 | uRam000000018343c538) + (uVar6 & uRam000000018343c538);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam000000018343c4a8 =
       func_0x00018fe39200((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325));
  uRam000000018343c528 = uRam000000018343c4a8 & 0xffffffffffffff80;
  uRam000000018343c6d0 = uRam000000018343c6d0 ^ uRam000000018343c528 ^ 0xa45a54cb7d1f05d0;
  uRam000000018343c320 =
       (uRam000000018343c320 * -0x3670ebc754a95683 ^ uRam000000018343c6d0) + uRam000000018343c528;
  uRam000000018343c338 = uRam000000018343c320 ^ uRam000000018343c6d0;
  uRam000000018343c680 = 0;
  uRam000000018343c478 = func_0x00018fe39200(uRam000000018343c468 + 0x31000f83001bff ^ 0x7c);
  uVar6 = uRam000000018343c478 >> 1 | uRam000000018343c478;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018343c478;
  uRam000000018343c580 = (uRam000000018343c580 ^ uVar6) + 0x944610a0 ^ 0x3826789be00648f8;
  uRam000000018343c380 = (uRam000000018343c380 * -0x6f5d6df985b6f55f ^ uRam000000018343c580) + uVar6
  ;
  uRam000000018343c628 = uRam000000018343c380 ^ uRam000000018343c580;
  uRam000000018343c490 = 0x944610a0;
  uRam000000018343c608 = func_0x00018fe39200(lRam000000018343c5a8 + 0xffe50084bdffe1ffU ^ 0x89);
  uVar6 = (uRam000000018343c608 & 0x7fffffffffffffff) * -0x6a36bed634e30289 ^ 0x1ee7;
  uRam000000018343c4b8 = uRam000000018343c560 ^ uVar6 ^ 0x1ee7;
  uRam000000018343c380 = (uRam000000018343c380 ^ uVar6) + 0x1ee7 ^ 0xb800a80ef5ed9d62;
  uRam000000018343c548 = (uRam000000018343c548 * 0x440c0520221527d3 ^ uRam000000018343c380) + uVar6;
  uRam000000018343c600 = uRam000000018343c548 ^ uRam000000018343c380;
  uRam000000018343c560 = 0x1ee7;
  uVar6 = (uRam000000018343c440 ^ _UNK_182b34d10) + uRam000000018343c3e8 + 0xe79a0f3e;
  uVar7 = (uRam000000018343c3e8 ^ _UNK_182b34d18) + uRam000000018343c440 + 0x63b82c1b;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018343c440 ^ _UNK_182b34d10;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018343c3e8 ^ _UNK_182b34d18;
  uRam000000018343c3d8 =
       func_0x00018fe39200((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018343c440 + 0x63b82c1b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018343c3e8 + 0xe79a0f3e));
  uVar6 = (uRam000000018343c3d8 ^ 0x26d7f69c33d166c2) * 0x73e4f3d06b766019;
  uRam000000018343c450 = uRam000000018343c450 ^ uVar6 ^ 0x79e3257789ba3c4d;
  uRam000000018343c380 = (uRam000000018343c380 * 0xd49e59382805845 ^ uRam000000018343c450) + uVar6;
  uRam000000018343c318 = uRam000000018343c380 ^ uRam000000018343c450;
  uRam000000018343c3a8 = uRam000000018343c620;
  uRam000000018343c690 = 0;
  uVar6 = (uRam000000018343c6b0 ^ 0x84223dc2) + uRam000000018343c670 + 0x84223dc2;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018343c6b0 ^ 0x84223dc2;
  uVar7 = ((uRam000000018343c670 + uRam000000018343c6b0) * 0x2000 |
          uRam000000018343c670 + uRam000000018343c6b0 >> 0x33) ^ uRam000000018343c670;
  uRam000000018343c430 =
       func_0x00018fe39200((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018343c6b0 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018343c670 + 0x84223dc2));
  uVar6 = uRam000000018343c430 & 0x1fffffffffffffff;
  uRam000000018343c338 = uRam000000018343c310 ^ uVar6 ^ 0x1ee7;
  uRam000000018343c3a0 = (uRam000000018343c3a0 ^ uVar6) + 0x1ee7 ^ 0x635aab97fc970fdc;
  uRam000000018343c438 = (uRam000000018343c438 * 0x54d57152fd025c77 ^ uRam000000018343c3a0) + uVar6;
  uRam000000018343c690 = uRam000000018343c438 ^ uRam000000018343c3a0;
  uRam000000018343c360 = 0x1ee7;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x4b90,0xf0);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018fe3495e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b33338 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/am; pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18fe39290, runtime 6ffff7a49290) =====

void FUN_18fe39290(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018fe392cc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b34e30 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/am; pe (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18fe3a180, runtime 6ffff7a4a180) =====

void FUN_18fe3a180(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018fe3a1fd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182b35370 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



